#include "w2c2_base.h"

#include "rustpython.h"

void f230(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 l8=0;
U32 si0,si1,si2,si3,si4;
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
si1=20U;
si0+=si1;
l7=si0;
si0=l3;
si1=-4U;
si0&=si1;
l8=si0;
si0=0U;
l4=si0;
si0=0U;
l6=si0;
L5:;
{
si0=l7;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=l7;
si1=i32_load(&i->m0,(U64)si1);
si2=l7;
si3=-8U;
si2+=si3;
si2=i32_load(&i->m0,(U64)si2);
si3=l7;
si4=-16U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si4=l4;
si3+=si4;
si2+=si3;
si1+=si2;
si0+=si1;
l4=si0;
si0=l7;
si1=32U;
si0+=si1;
l7=si0;
si0=l8;
si1=l6;
si2=4U;
si1+=si2;
l6=si1;
si0=si0 != si1;
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
f580(i,si0,si1,si2);
L8:;
si0=l2;
si1=l3;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l8=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+8U);
l7=si0;
L9:;
{
si0=l2;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
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
f580(i,si0,si1,si2);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+8U);
l7=si0;
L10:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
si1=l7;
si0+=si1;
si1=l6;
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
si1=l8;
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

U32 f231(rustpythonInstance*i,U32 l0) {
U32 si0;
si0=1U;
L0:;
return si0;
}

void f232(rustpythonInstance*i,U32 l0,U32 l1) {
U32 si0,si1;
si0=l0;
si1=4U;
i32_store8(&i->m0,(U64)si0,si1);
L0:;
}

void f233(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
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
f580(i,si0,si1,si2);
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

void f234(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
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
f580(i,si0,si1,si2);
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

U32 f235(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 l8=0;
U32 l9=0;
U32 si0,si1,si2;
si0=i->g0;
si1=16U;
si0-=si1;
l2=si0;
i->g0=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si1=80U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
si0=l3;
si1=72U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si0=l2;
si1=l0;
si1=i32_load(&i->m0,(U64)si1);
si1=i32_load(&i->m0,(U64)si1);
l0=si1;
si1=i32_load(&i->m0,(U64)si1);
si2=l0;
si2=i32_load(&i->m0,(U64)si2+4U);
f756(i,si0,si1,si2);
si0=l2;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L4;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0+4U);
l6=si0;
si0=!(si0);
if(si0){
goto L4;
}
si0=l2;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si0=l2;
si1=l5;
si2=l4;
f756(i,si0,si1,si2);
si0=l2;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L3;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0+4U);
l4=si0;
si0=!(si0);
if(si0){
goto L3;
}
si0=l2;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=l1;
si0=si0 < si1;
if(si0){
goto L6;
}
si0=l6;
si1=l4;
si2=l1;
si0=f15389(i,si0,si1,si2);
if(si0){
goto L6;
}
si0=1U;
l4=si0;
goto L5;
L6:;
si0=0U;
l4=si0;
si0=l3;
si1=152U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si0=!(si0);
if(si0){
goto L5;
}
si0=l3;
si1=160U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si0=!(si0);
if(si0){
goto L5;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+4U);
l7=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
l8=si0;
si0=0U;
l4=si0;
L7:;
{
si0=l1;
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l0=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si0=l2;
si1=l8;
si2=l7;
f756(i,si0,si1,si2);
si0=l2;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L2;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0+4U);
l9=si0;
si0=!(si0);
if(si0){
goto L2;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0+8U);
l3=si0;
si0=l2;
si1=l6;
si2=l0;
f756(i,si0,si1,si2);
si0=l2;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L1;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0+4U);
l6=si0;
si0=!(si0);
if(si0){
goto L1;
}
si0=0U;
l0=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+8U);
si1=l3;
si0=si0 < si1;
if(si0){
goto L8;
}
si0=l9;
si1=l6;
si2=l3;
si0=f15389(i,si0,si1,si2);
si0=!(si0);
l0=si0;
L8:;
si0=l1;
si1=12U;
si0+=si1;
l1=si0;
si0=l4;
si1=l0;
si0+=si1;
l4=si0;
si0=l5;
si1=-1U;
si0+=si1;
l5=si0;
if(si0){
goto L7;
}
}
si0=l4;
si1=1U;
si0=si0 == si1;
l4=si0;
L5:;
si0=l2;
si1=16U;
si0+=si1;
i->g0=si0;
si0=l4;
goto L0;
L4:;
si0=1087120U;
si1=35U;
si2=1087384U;
f703(i,si0,si1,si2);
UNREACHABLE;
L3:;
si0=1087120U;
si1=35U;
si2=1087384U;
f703(i,si0,si1,si2);
UNREACHABLE;
L2:;
si0=1087120U;
si1=35U;
si2=1087384U;
f703(i,si0,si1,si2);
UNREACHABLE;
L1:;
si0=1087120U;
si1=35U;
si2=1087384U;
f703(i,si0,si1,si2);
UNREACHABLE;
L0:;
return si0;
}

void f236(rustpythonInstance*i,U32 l0) {
L0:;
}

void f237(rustpythonInstance*i,U32 l0) {
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

void f238(rustpythonInstance*i,U32 l0) {
L0:;
}

void f239(rustpythonInstance*i,U32 l0) {
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
f15271(i,si0);
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
f15271(i,si0);
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
f15271(i,si0);
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
f15271(i,si0);
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
f15271(i,si0);
L5:;
L0:;
}

void f240(rustpythonInstance*i,U32 l0) {
U32 l1=0;
U32 si0,si1;
si0=l0;
f329(i,si0);
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
f15271(i,si0);
L2:;
si0=l1;
f240(i,si0);
si0=l1;
f15271(i,si0);
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
f15271(i,si0);
L3:;
L0:;
}

void f241(rustpythonInstance*i,U32 l0) {
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
f15271(i,si0);
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
f15271(i,si0);
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
f15271(i,si0);
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
f15271(i,si0);
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
f15271(i,si0);
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
f15271(i,si0);
L6:;
L0:;
}

void f242(rustpythonInstance*i,U32 l0) {
U32 l1=0;
U32 si0,si1;
si0=l0;
si1=32U;
si0+=si1;
f239(i,si0);
si0=l0;
si0=i32_load(&i->m0,(U64)si0+12U);
l1=si0;
si0=!(si0);
if(si0){
goto L1;
}
si0=l0;
si1=16U;
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

void f243(rustpythonInstance*i,U32 l0) {
U32 l1=0;
U32 si0,si1;
si0=l0;
si1=184U;
si0+=si1;
f239(i,si0);
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
f15271(i,si0);
L1:;
si0=l0;
f241(i,si0);
L0:;
}

void f244(rustpythonInstance*i,U32 l0) {
U32 si0,si1;
si0=l0;
si1=152U;
si0+=si1;
f239(i,si0);
si0=l0;
f241(i,si0);
L0:;
}

U32 f245(rustpythonInstance*i,U32 l0,U32 l1) {
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
f573(i,si0,si1);
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
f580(i,si0,si1,si2);
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

U32 f246(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
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
f580(i,si0,si1,si2);
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

U32 f247(rustpythonInstance*i,U32 l0,U32 l1) {
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

void f248(rustpythonInstance*i,U32 l0,U32 l1) {
U32 si0,si1,si2;
U64 sj1;
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0+56U,si1);
si0=l0;
si1=72U;
si0+=si1;
si1=l1;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=184U;
si0+=si1;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=172U;
si0+=si1;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=164U;
si0+=si1;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=152U;
si0+=si1;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=144U;
si0+=si1;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=136U;
si0+=si1;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=128U;
si0+=si1;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=120U;
si0+=si1;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=112U;
si0+=si1;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=104U;
si0+=si1;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=96U;
si0+=si1;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=84U;
si0+=si1;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=192U;
si0+=si1;
sj1=999ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=64U;
si0+=si1;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=80U;
si0+=si1;
si1=l1;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=228U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=220U;
si0+=si1;
sj1=34359738368ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
sj1=4ULL;
i64_store(&i->m0,(U64)si0+212U,sj1);
si0=l0;
sj1=0ULL;
i64_store(&i->m0,(U64)si0+24U,sj1);
si0=l0;
sj1=16910080ULL;
i64_store(&i->m0,(U64)si0+16U,sj1);
si0=l0;
si1=300U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=292U;
si0+=si1;
sj1=17179869184ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
sj1=4ULL;
i64_store(&i->m0,(U64)si0+284U,sj1);
si0=l0;
si1=276U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=268U;
si0+=si1;
sj1=17179869184ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
sj1=8ULL;
i64_store(&i->m0,(U64)si0+260U,sj1);
si0=l0;
si1=252U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=244U;
si0+=si1;
sj1=17179869184ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
sj1=8ULL;
i64_store(&i->m0,(U64)si0+236U,sj1);
si0=l0;
sj1=0ULL;
i64_store(&i->m0,(U64)si0+8U,sj1);
si0=l0;
sj1=8ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0+308U,si1);
si0=l0;
sj1=4785074605195264ULL;
i64_store(&i->m0,(U64)si0+204U,sj1);
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0+48U,si1);
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0+40U,si1);
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0+32U,si1);
L0:;
}

void f249(rustpythonInstance*i,U32 l0,U32 l1) {
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
U32 si0,si1,si2;
U64 sj1;
si0=i->g0;
si1=96U;
si0-=si1;
l2=si0;
i->g0=si0;
si0=l1;
si1=264U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=!(si0);
if(si0){
goto L1;
}
si0=l1;
si1=272U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
si0=!(si0);
if(si0){
goto L1;
}
si0=l3;
si1=l4;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l5=si0;
si0=l0;
si1=248U;
si0+=si1;
l6=si0;
si0=l1;
si1=204U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
si0=l2;
si1=36U;
si0+=si1;
l8=si0;
si0=l2;
si1=32U;
si0+=si1;
l9=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+200U);
l10=si0;
L2:;
{
si0=l3;
si1=8U;
si0+=si1;
l11=si0;
si0=l3;
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+256U);
l1=si0;
si0=!(si0);
if(si0){
goto L5;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+248U);
l12=si0;
si0=l1;
si1=48U;
si0*=si1;
l13=si0;
si0=0U;
l1=si0;
L6:;
{
si0=l12;
si1=l1;
si0+=si1;
l14=si0;
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=l4;
si0=si0 != si1;
if(si0){
goto L7;
}
si0=l14;
si0=i32_load(&i->m0,(U64)si0);
si1=l3;
si1=i32_load(&i->m0,(U64)si1);
si2=l4;
si0=f15389(i,si0,si1,si2);
si0=!(si0);
if(si0){
goto L4;
}
L7:;
si0=l13;
si1=l1;
si2=48U;
si1+=si2;
l1=si1;
si0=si0 != si1;
if(si0){
goto L6;
}
}
L5:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si0=l9;
si1=4U;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=8U;
si0+=si1;
l14=si0;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l8;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l8;
si1=8U;
si0+=si1;
si1=0U;
i32_store16(&i->m0,(U64)si0,si1);
si0=l2;
si1=l4;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l2;
si1=l1;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=0U;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l9;
si1=0U;
f568(i,si0,si1);
si0=l9;
si0=i32_load(&i->m0,(U64)si0);
si1=l2;
si2=40U;
si1+=si2;
l1=si1;
si1=i32_load(&i->m0,(U64)si1);
si2=3U;
si1<<=(si2&31);
si0+=si1;
l4=si0;
si1=l7;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l4;
si1=l10;
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
si1=l1;
si1=i32_load(&i->m0,(U64)si1);
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=48U;
si0+=si1;
si1=40U;
si0+=si1;
l4=si0;
si1=l1;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=48U;
si0+=si1;
si1=32U;
si0+=si1;
l12=si0;
si1=l9;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=48U;
si0+=si1;
si1=24U;
si0+=si1;
l13=si0;
si1=l2;
si2=24U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=48U;
si0+=si1;
si1=16U;
si0+=si1;
l3=si0;
si1=l2;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=48U;
si0+=si1;
si1=8U;
si0+=si1;
l15=si0;
si1=l14;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=l2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+48U,sj1);
si0=l0;
si0=i32_load(&i->m0,(U64)si0+256U);
l1=si0;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+252U);
si0=si0 != si1;
if(si0){
goto L8;
}
si0=l6;
si1=l1;
f571(i,si0,si1);
si0=l0;
si0=i32_load(&i->m0,(U64)si0+256U);
l1=si0;
L8:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+248U);
si1=l1;
si2=48U;
si1*=si2;
si0+=si1;
l1=si0;
si1=l2;
sj1=i64_load(&i->m0,(U64)si1+48U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si1=40U;
si0+=si1;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si1=32U;
si0+=si1;
si1=l12;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si1=24U;
si0+=si1;
si1=l13;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si1=16U;
si0+=si1;
si1=l3;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si1=8U;
si0+=si1;
si1=l15;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+256U);
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0+256U,si1);
goto L3;
L4:;
si0=l14;
si1=32U;
si0+=si1;
l12=si0;
si0=l14;
si1=40U;
si0+=si1;
l1=si0;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
si1=l14;
si2=36U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
si0=si0 != si1;
if(si0){
goto L9;
}
si0=l12;
si1=l4;
f568(i,si0,si1);
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
L9:;
si0=l12;
si0=i32_load(&i->m0,(U64)si0);
si1=l4;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l4=si0;
si1=l7;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l4;
si1=l10;
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
si1=l1;
si1=i32_load(&i->m0,(U64)si1);
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
L3:;
si0=l11;
l3=si0;
si0=l11;
si1=l5;
si0=si0 != si1;
if(si0){
goto L2;
}
}
L1:;
si0=l2;
si1=96U;
si0+=si1;
i->g0=si0;
L0:;
}

void f250(rustpythonInstance*i,U32 l0,U32 l1) {
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
U64 l13=0;
U32 si0,si1,si2,si3;
U64 sj0,sj1,sj2;
si0=i->g0;
si1=816U;
si0-=si1;
l2=si0;
i->g0=si0;
si0=l1;
si1=236U;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=8U;
si0&=si1;
if(si0){
goto L4;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+288U);
l3=si0;
si0=!(si0);
if(si0){
goto L5;
}
si0=l1;
si1=296U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
si0=!(si0);
if(si0){
goto L5;
}
si0=l3;
si1=l4;
si2=4U;
si1<<=(si2&31);
si0+=si1;
l5=si0;
si0=l0;
si1=284U;
si0+=si1;
l6=si0;
si0=l0;
si1=292U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
si0=l1;
si1=204U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+200U);
l8=si0;
L6:;
{
si0=l3;
si1=12U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l9=si0;
si0=l3;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l10=si0;
si0=l3;
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l11=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
l12=si0;
si0=l4;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+288U);
si0=si0 != si1;
if(si0){
goto L7;
}
si0=l6;
si1=l4;
f563(i,si0,si1);
si0=l0;
si0=i32_load(&i->m0,(U64)si0+292U);
l4=si0;
L7:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+284U);
si1=l4;
si2=24U;
si1*=si2;
si0+=si1;
l4=si0;
si1=l7;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l4;
si1=l8;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l4;
si1=l9;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l4;
si1=l10;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l4;
si1=l11;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l4;
si1=l12;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+292U);
si2=1U;
si1+=si2;
l4=si1;
i32_store(&i->m0,(U64)si0+292U,si1);
si0=l3;
si1=16U;
si0+=si1;
l3=si0;
si1=l5;
si0=si0 != si1;
if(si0){
goto L6;
}
}
L5:;
si0=l0;
si1=l1;
f249(i,si0,si1);
si0=l1;
si0=i32_load8_u(&i->m0,(U64)si0+236U);
si1=1U;
si0&=si1;
si0=!(si0);
if(si0){
goto L8;
}
si0=l0;
si1=272U;
si0+=si1;
l11=si0;
si0=l1;
si1=204U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+200U);
l9=si0;
si0=l0;
si1=280U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si1=l0;
si2=276U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
si0=si0 != si1;
if(si0){
goto L9;
}
si0=l11;
si1=l3;
f568(i,si0,si1);
si0=l0;
si0=i32_load(&i->m0,(U64)si0+280U);
l3=si0;
L9:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+272U);
si1=l3;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l3=si0;
si1=l4;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l3;
si1=l9;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+280U);
si2=1U;
si1+=si2;
l10=si1;
i32_store(&i->m0,(U64)si0+280U,si1);
si0=l1;
si1=276U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=!(si0);
if(si0){
goto L8;
}
si0=l3;
si1=l1;
si2=284U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
si2=4U;
si1<<=(si2&31);
si0+=si1;
l9=si0;
L10:;
{
si0=l3;
si1=-8U;
si0+=si1;
l3=si0;
L11:;
{
si0=l3;
si1=8U;
si0+=si1;
l4=si0;
si1=l9;
si0=si0 == si1;
if(si0){
goto L8;
}
si0=l3;
si1=16U;
si0+=si1;
l3=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L11;
}
}
si0=l3;
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
l12=si0;
si0=l10;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+276U);
si0=si0 != si1;
if(si0){
goto L12;
}
si0=l11;
si1=l10;
f568(i,si0,si1);
si0=l0;
si0=i32_load(&i->m0,(U64)si0+280U);
l10=si0;
L12:;
si0=l3;
si1=8U;
si0+=si1;
l3=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+272U);
si1=l10;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l10=si0;
si1=l4;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l10;
si1=l12;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+280U);
si2=1U;
si1+=si2;
l10=si1;
i32_store(&i->m0,(U64)si0+280U,si1);
goto L10;
}
L8:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+236U);
l4=si0;
si1=16384U;
si0&=si1;
if(si0){
goto L3;
}
goto L2;
L4:;
si0=l0;
si1=l1;
f251(i,si0,si1);
si0=l1;
si1=200U;
si0+=si1;
f239(i,si0);
si0=l1;
si1=180U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=!(si0);
if(si0){
goto L13;
}
si0=l1;
si1=184U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L13;
}
si0=l3;
f15271(i,si0);
L13:;
si0=l1;
f241(i,si0);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+288U);
l3=si0;
si0=!(si0);
if(si0){
goto L1;
}
si0=l1;
si1=292U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L1;
}
si0=l3;
f15271(i,si0);
goto L1;
L3:;
si0=l0;
si1=l0;
sj1=i64_load(&i->m0,(U64)si1+16U);
sj2=550829555712ULL;
sj1|=sj2;
i64_store(&i->m0,(U64)si0+16U,sj1);
L2:;
si0=l1;
si1=172U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=!(si0);
if(si0){
goto L14;
}
si0=l1;
si1=176U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=-4U;
si0+=si1;
switch(si0){
case 0:
goto L16;
case 1:
goto L14;
case 2:
goto L14;
case 3:
goto L17;
default:
goto L14;
}
L17:;
si0=l3;
si1=1084914U;
si2=7U;
si0=f15389(i,si0,si1,si2);
if(si0){
goto L14;
}
sj0=-513ULL;
l13=sj0;
goto L15;
L16:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
si1=1886152040U;
si0=si0 != si1;
if(si0){
goto L14;
}
sj0=-257ULL;
l13=sj0;
L15:;
si0=l0;
si1=l0;
sj1=i64_load(&i->m0,(U64)si1+16U);
sj2=l13;
sj1&=sj2;
i64_store(&i->m0,(U64)si0+16U,sj1);
L14:;
si0=l1;
sj0=i64_load(&i->m0,(U64)si0+152U);
si0=!(sj0);
si0=!(si0);
if(si0){
goto L19;
}
si0=l3;
if(si0){
goto L20;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+168U);
si1=1114112U;
si0=si0 != si1;
if(si0){
goto L20;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+12U);
si1=1U;
si0+=si1;
l11=si0;
goto L18;
L20:;
si0=l4;
si1=32U;
si0&=si1;
if(si0){
goto L21;
}
si0=l2;
si1=272U;
si0+=si1;
si1=l1;
si2=304U;
si0=f15390(i,si0,si1,si2);
si0=l2;
si1=l2;
si2=272U;
si1+=si2;
f507(i,si0,si1);
si0=l2;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+232U);
si2=l0;
si3=220U;
si2+=si3;
si2=i32_load(&i->m0,(U64)si2);
l3=si2;
si1+=si2;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l3;
si1=l0;
si2=216U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
si0=si0 != si1;
if(si0){
goto L22;
}
si0=l0;
si1=212U;
si0+=si1;
si1=l3;
f569(i,si0,si1);
si0=l0;
si0=i32_load(&i->m0,(U64)si0+220U);
l3=si0;
L22:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+212U);
si1=l3;
si2=120U;
si1*=si2;
si0+=si1;
si1=l2;
si2=120U;
si0=f15390(i,si0,si1,si2);
si0=l0;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+220U);
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0+220U,si1);
goto L1;
L21:;
si0=l2;
si1=272U;
si0+=si1;
si1=l1;
si2=304U;
si0=f15390(i,si0,si1,si2);
si0=l2;
si1=l2;
si2=272U;
si1+=si2;
f473(i,si0,si1);
si0=l2;
si1=180U;
si0+=si1;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+232U);
l3=si1;
si2=l0;
si3=220U;
si2+=si3;
si2=i32_load(&i->m0,(U64)si2);
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=l0;
si2=228U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
si0=si0 != si1;
if(si0){
goto L23;
}
si0=l0;
si1=224U;
si0+=si1;
si1=l3;
f572(i,si0,si1);
si0=l0;
si0=i32_load(&i->m0,(U64)si0+232U);
l3=si0;
L23:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+224U);
si1=l3;
si2=272U;
si1*=si2;
si0+=si1;
si1=l2;
si2=272U;
si0=f15390(i,si0,si1,si2);
si0=l0;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+232U);
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0+232U,si1);
goto L1;
L19:;
si0=l1;
si1=160U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l11=si0;
L18:;
si0=l2;
si1=272U;
si0+=si1;
si1=l1;
si2=304U;
si0=f15390(i,si0,si1,si2);
si0=l2;
si1=l2;
si2=272U;
si1+=si2;
si2=l11;
sj2=(U64)(si2);
f335(i,si0,si1,sj2);
si0=l11;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+8U);
l3=si1;
si0=si0 >= si1;
if(si0){
goto L25;
}
si0=l3;
l4=si0;
goto L24;
L25:;
si0=l3;
l4=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+4U);
si1=l3;
si0-=si1;
si1=l11;
si2=1U;
si1+=si2;
l9=si1;
si2=l3;
si1-=si2;
l10=si1;
si0=si0 >= si1;
if(si0){
goto L26;
}
si0=l0;
si1=l3;
si2=l10;
f578(i,si0,si1,si2);
si0=l0;
si0=i32_load(&i->m0,(U64)si0+8U);
l4=si0;
L26:;
si0=l9;
si1=l3;
si0=si0 == si1;
if(si0){
goto L27;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
l12=si0;
si0=l10;
si1=3U;
si0&=si1;
l9=si0;
si0=l11;
si1=l3;
si0-=si1;
si1=3U;
si0=si0 < si1;
if(si0){
goto L28;
}
si0=l10;
si1=-4U;
si0&=si1;
l10=si0;
si0=l12;
si1=l4;
si2=248U;
si1*=si2;
si0+=si1;
l3=si0;
L29:;
{
si0=l3;
sj1=2ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=744U;
si0+=si1;
sj1=2ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=496U;
si0+=si1;
sj1=2ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=248U;
si0+=si1;
sj1=2ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=992U;
si0+=si1;
l3=si0;
si0=l4;
si1=4U;
si0+=si1;
l4=si0;
si0=l10;
si1=-4U;
si0+=si1;
l10=si0;
if(si0){
goto L29;
}
}
L28:;
si0=l9;
si0=!(si0);
if(si0){
goto L27;
}
si0=l12;
si1=l4;
si2=248U;
si1*=si2;
si0+=si1;
l3=si0;
L30:;
{
si0=l3;
sj1=2ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=248U;
si0+=si1;
l3=si0;
si0=l4;
si1=1U;
si0+=si1;
l4=si0;
si0=l9;
si1=-1U;
si0+=si1;
l9=si0;
if(si0){
goto L30;
}
}
L27:;
si0=l0;
si1=l4;
i32_store(&i->m0,(U64)si0+8U,si1);
L24:;
si0=l4;
si1=l11;
si0=si0 <= si1;
if(si0){
goto L32;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
si1=l11;
si2=248U;
si1*=si2;
si0+=si1;
l3=si0;
sj0=i64_load(&i->m0,(U64)si0);
l13=sj0;
si0=l2;
si1=576U;
si0+=si1;
si1=l3;
si2=8U;
si1+=si2;
si2=240U;
si0=f15390(i,si0,si1,si2);
si0=l3;
si1=l2;
si2=248U;
si0=f15390(i,si0,si1,si2);
sj0=l13;
sj1=2ULL;
si0=sj0 != sj1;
if(si0){
goto L31;
}
si0=l0;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+12U);
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0+12U,si1);
goto L1;
L32:;
si0=l11;
si1=l4;
si2=1086616U;
f663(i,si0,si1,si2);
UNREACHABLE;
L31:;
si0=l2;
sj1=l13;
i64_store(&i->m0,(U64)si0+272U,sj1);
si0=l2;
si1=272U;
si0+=si1;
si1=8U;
si0+=si1;
si1=l2;
si2=576U;
si1+=si2;
si2=240U;
si0=f15390(i,si0,si1,si2);
si0=l2;
si1=448U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=!(si0);
if(si0){
goto L33;
}
si0=l2;
si1=452U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L33;
}
si0=l3;
f15271(i,si0);
L33:;
si0=l2;
si1=464U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=!(si0);
if(si0){
goto L34;
}
si0=l2;
si1=468U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L34;
}
si0=l3;
f15271(i,si0);
L34:;
si0=l2;
si1=476U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=!(si0);
if(si0){
goto L35;
}
si0=l2;
si1=480U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L35;
}
si0=l3;
f15271(i,si0);
L35:;
si0=l2;
si1=488U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=!(si0);
if(si0){
goto L36;
}
si0=l2;
si1=492U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L36;
}
si0=l3;
f15271(i,si0);
L36:;
si0=l2;
si1=500U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=!(si0);
if(si0){
goto L37;
}
si0=l2;
si1=504U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L37;
}
si0=l3;
f15271(i,si0);
L37:;
si0=l2;
si1=272U;
si0+=si1;
f241(i,si0);
L1:;
si0=l2;
si1=816U;
si0+=si1;
i->g0=si0;
L0:;
}

void f251(rustpythonInstance*i,U32 l0,U32 l1) {
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
U64 l13=0;
U32 si0,si1,si2,si3;
U64 sj0,sj1,sj2,sj3;
si0=i->g0;
si1=800U;
si0-=si1;
l2=si0;
i->g0=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+288U);
l3=si0;
si0=!(si0);
if(si0){
goto L1;
}
si0=l1;
si1=296U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
si0=!(si0);
if(si0){
goto L1;
}
si0=l3;
si1=l4;
si2=4U;
si1<<=(si2&31);
si0+=si1;
l5=si0;
si0=l0;
si1=284U;
si0+=si1;
l6=si0;
si0=l0;
si1=292U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
si0=l1;
si1=204U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+200U);
l8=si0;
L2:;
{
si0=l3;
si1=12U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l9=si0;
si0=l3;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l10=si0;
si0=l3;
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l11=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
l12=si0;
si0=l4;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+288U);
si0=si0 != si1;
if(si0){
goto L3;
}
si0=l6;
si1=l4;
f563(i,si0,si1);
si0=l0;
si0=i32_load(&i->m0,(U64)si0+292U);
l4=si0;
L3:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+284U);
si1=l4;
si2=24U;
si1*=si2;
si0+=si1;
l4=si0;
si1=l7;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l4;
si1=l8;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l4;
si1=l9;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l4;
si1=l10;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l4;
si1=l11;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l4;
si1=l12;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+292U);
si2=1U;
si1+=si2;
l4=si1;
i32_store(&i->m0,(U64)si0+292U,si1);
si0=l3;
si1=16U;
si0+=si1;
l3=si0;
si1=l5;
si0=si0 != si1;
if(si0){
goto L2;
}
}
L1:;
si0=l0;
si1=l1;
f249(i,si0,si1);
si0=l1;
si1=236U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l12=si0;
si1=1U;
si0&=si1;
si0=!(si0);
if(si0){
goto L4;
}
si0=l0;
si1=272U;
si0+=si1;
l11=si0;
si0=l1;
si1=204U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+200U);
l9=si0;
si0=l0;
si1=280U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si1=l0;
si2=276U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
si0=si0 != si1;
if(si0){
goto L5;
}
si0=l11;
si1=l3;
f568(i,si0,si1);
si0=l0;
si0=i32_load(&i->m0,(U64)si0+280U);
l3=si0;
L5:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+272U);
si1=l3;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l3=si0;
si1=l4;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l3;
si1=l9;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+280U);
si2=1U;
si1+=si2;
l10=si1;
i32_store(&i->m0,(U64)si0+280U,si1);
si0=l1;
si1=276U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=!(si0);
if(si0){
goto L4;
}
si0=l3;
si1=l1;
si2=284U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
si2=4U;
si1<<=(si2&31);
si0+=si1;
l9=si0;
L6:;
{
si0=l3;
si1=-8U;
si0+=si1;
l3=si0;
L7:;
{
si0=l3;
si1=8U;
si0+=si1;
l4=si0;
si1=l9;
si0=si0 == si1;
if(si0){
goto L4;
}
si0=l3;
si1=16U;
si0+=si1;
l3=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L7;
}
}
si0=l3;
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si0=l10;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+276U);
si0=si0 != si1;
if(si0){
goto L8;
}
si0=l11;
si1=l10;
f568(i,si0,si1);
si0=l0;
si0=i32_load(&i->m0,(U64)si0+280U);
l10=si0;
L8:;
si0=l3;
si1=8U;
si0+=si1;
l3=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+272U);
si1=l10;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l10=si0;
si1=l4;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l10;
si1=l5;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+280U);
si2=1U;
si1+=si2;
l10=si1;
i32_store(&i->m0,(U64)si0+280U,si1);
goto L6;
}
L4:;
si0=l12;
si1=16384U;
si0&=si1;
si0=!(si0);
if(si0){
goto L9;
}
si0=l0;
si1=l0;
sj1=i64_load(&i->m0,(U64)si1+16U);
sj2=550829555712ULL;
sj1|=sj2;
i64_store(&i->m0,(U64)si0+16U,sj1);
L9:;
si0=l1;
si1=172U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=!(si0);
if(si0){
goto L10;
}
si0=l1;
si1=176U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=-4U;
si0+=si1;
switch(si0){
case 0:
goto L12;
case 1:
goto L10;
case 2:
goto L10;
case 3:
goto L13;
default:
goto L10;
}
L13:;
si0=l3;
si1=1084914U;
si2=7U;
si0=f15389(i,si0,si1,si2);
if(si0){
goto L10;
}
sj0=-513ULL;
l13=sj0;
goto L11;
L12:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
si1=1886152040U;
si0=si0 != si1;
if(si0){
goto L10;
}
sj0=-257ULL;
l13=sj0;
L11:;
si0=l0;
si1=l0;
sj1=i64_load(&i->m0,(U64)si1+16U);
sj2=l13;
sj1&=sj2;
i64_store(&i->m0,(U64)si0+16U,sj1);
L10:;
si0=l1;
sj0=i64_load(&i->m0,(U64)si0+152U);
l13=sj0;
sj1=0ULL;
si0=sj0 != sj1;
if(si0){
goto L17;
}
si0=l3;
if(si0){
goto L18;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+168U);
si1=1114112U;
si0=si0 == si1;
if(si0){
goto L17;
}
L18:;
si0=l12;
si1=32U;
si0&=si1;
if(si0){
goto L16;
}
si0=l2;
si1=256U;
si0+=si1;
si1=l1;
f506(i,si0,si1);
si0=l2;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+232U);
si2=l0;
si3=220U;
si2+=si3;
si2=i32_load(&i->m0,(U64)si2);
l3=si2;
si1+=si2;
i32_store(&i->m0,(U64)si0+284U,si1);
si0=l3;
si1=l0;
si2=216U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
si0=si0 != si1;
if(si0){
goto L19;
}
si0=l0;
si1=212U;
si0+=si1;
si1=l3;
f569(i,si0,si1);
si0=l0;
si0=i32_load(&i->m0,(U64)si0+220U);
l3=si0;
L19:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+212U);
si1=l3;
si2=120U;
si1*=si2;
si0+=si1;
si1=l2;
si2=256U;
si1+=si2;
si2=120U;
si0=f15390(i,si0,si1,si2);
si0=l0;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+220U);
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0+220U,si1);
goto L14;
L17:;
si0=l1;
si1=160U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+12U);
l4=si0;
si0=l2;
si1=560U;
si0+=si1;
si1=l1;
si2=200U;
si1+=si2;
f446(i,si0,si1);
si0=l2;
si1=256U;
si0+=si1;
si1=l1;
f472(i,si0,si1);
si0=l2;
si1=408U;
si0+=si1;
si1=l2;
si2=560U;
si1+=si2;
si2=88U;
si0=f15390(i,si0,si1,si2);
si0=l2;
si1=l4;
si2=1U;
si1+=si2;
si2=l3;
sj3=l13;
si3=!(sj3);
si1=si3?si1:si2;
l11=si1;
sj1=(U64)(si1);
i64_store(&i->m0,(U64)si0+496U,sj1);
si0=l1;
sj0=i64_load(&i->m0,(U64)si0+16U);
si1=l1;
sj1=i64_load(&i->m0,(U64)si1+32U);
sj0|=sj1;
sj1=0ULL;
si0=sj0 != sj1;
if(si0){
goto L21;
}
si0=l1;
sj0=i64_load(&i->m0,(U64)si0);
si0=!(sj0);
if(si0){
goto L20;
}
si0=l1;
sj0=i64_load(&i->m0,(U64)si0+8U);
sj1=2ULL;
si0=sj0 < sj1;
if(si0){
goto L20;
}
L21:;
si0=l2;
si1=444U;
si0+=si1;
l3=si0;
si1=l3;
si1=i32_load(&i->m0,(U64)si1);
si2=2U;
si1|=si2;
i32_store(&i->m0,(U64)si0,si1);
L20:;
si0=l2;
si1=8U;
si0+=si1;
si1=l2;
si2=256U;
si1+=si2;
si2=248U;
si0=f15390(i,si0,si1,si2);
si0=l11;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+8U);
l3=si1;
si0=si0 >= si1;
if(si0){
goto L22;
}
si0=l3;
l4=si0;
goto L15;
L22:;
si0=l3;
l4=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+4U);
si1=l3;
si0-=si1;
si1=l11;
si2=1U;
si1+=si2;
l9=si1;
si2=l3;
si1-=si2;
l10=si1;
si0=si0 >= si1;
if(si0){
goto L23;
}
si0=l0;
si1=l3;
si2=l10;
f578(i,si0,si1,si2);
si0=l0;
si0=i32_load(&i->m0,(U64)si0+8U);
l4=si0;
L23:;
si0=l9;
si1=l3;
si0=si0 == si1;
if(si0){
goto L24;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si0=l10;
si1=3U;
si0&=si1;
l9=si0;
si0=l11;
si1=l3;
si0-=si1;
si1=3U;
si0=si0 < si1;
if(si0){
goto L25;
}
si0=l10;
si1=-4U;
si0&=si1;
l10=si0;
si0=l5;
si1=l4;
si2=248U;
si1*=si2;
si0+=si1;
l3=si0;
L26:;
{
si0=l3;
sj1=2ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=744U;
si0+=si1;
sj1=2ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=496U;
si0+=si1;
sj1=2ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=248U;
si0+=si1;
sj1=2ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=992U;
si0+=si1;
l3=si0;
si0=l4;
si1=4U;
si0+=si1;
l4=si0;
si0=l10;
si1=-4U;
si0+=si1;
l10=si0;
if(si0){
goto L26;
}
}
L25:;
si0=l9;
si0=!(si0);
if(si0){
goto L24;
}
si0=l5;
si1=l4;
si2=248U;
si1*=si2;
si0+=si1;
l3=si0;
L27:;
{
si0=l3;
sj1=2ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=248U;
si0+=si1;
l3=si0;
si0=l4;
si1=1U;
si0+=si1;
l4=si0;
si0=l9;
si1=-1U;
si0+=si1;
l9=si0;
if(si0){
goto L27;
}
}
L24:;
si0=l0;
si1=l4;
i32_store(&i->m0,(U64)si0+8U,si1);
goto L15;
L16:;
si0=l2;
si1=440U;
si0+=si1;
si1=l1;
si2=200U;
si1+=si2;
f446(i,si0,si1);
si0=l2;
si1=408U;
si0+=si1;
si1=l1;
f532(i,si0,si1);
si0=l2;
si1=256U;
si0+=si1;
si1=l1;
f472(i,si0,si1);
si0=l2;
si1=436U;
si0+=si1;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+232U);
l3=si1;
si2=l0;
si3=220U;
si2+=si3;
si2=i32_load(&i->m0,(U64)si2);
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=l0;
si2=228U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
si0=si0 != si1;
if(si0){
goto L28;
}
si0=l0;
si1=224U;
si0+=si1;
si1=l3;
f572(i,si0,si1);
si0=l0;
si0=i32_load(&i->m0,(U64)si0+232U);
l3=si0;
L28:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+224U);
si1=l3;
si2=272U;
si1*=si2;
si0+=si1;
si1=l2;
si2=256U;
si1+=si2;
si2=272U;
si0=f15390(i,si0,si1,si2);
si0=l0;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+232U);
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0+232U,si1);
goto L14;
L15:;
si0=l4;
si1=l11;
si0=si0 <= si1;
if(si0){
goto L30;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
si1=l11;
si2=248U;
si1*=si2;
si0+=si1;
l3=si0;
sj0=i64_load(&i->m0,(U64)si0);
l13=sj0;
si0=l2;
si1=560U;
si0+=si1;
si1=l3;
si2=8U;
si1+=si2;
si2=240U;
si0=f15390(i,si0,si1,si2);
si0=l3;
si1=l2;
si2=8U;
si1+=si2;
si2=248U;
si0=f15390(i,si0,si1,si2);
sj0=l13;
sj1=2ULL;
si0=sj0 != sj1;
if(si0){
goto L29;
}
si0=l0;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+12U);
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0+12U,si1);
goto L14;
L30:;
si0=l11;
si1=l4;
si2=1086616U;
f663(i,si0,si1,si2);
UNREACHABLE;
L29:;
si0=l2;
sj1=l13;
i64_store(&i->m0,(U64)si0+256U,sj1);
si0=l2;
si1=256U;
si0+=si1;
si1=8U;
si0+=si1;
si1=l2;
si2=560U;
si1+=si2;
si2=240U;
si0=f15390(i,si0,si1,si2);
si0=l2;
si1=432U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=!(si0);
if(si0){
goto L31;
}
si0=l2;
si1=436U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L31;
}
si0=l3;
f15271(i,si0);
L31:;
si0=l2;
si1=448U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=!(si0);
if(si0){
goto L32;
}
si0=l2;
si1=452U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L32;
}
si0=l3;
f15271(i,si0);
L32:;
si0=l2;
si1=460U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=!(si0);
if(si0){
goto L33;
}
si0=l2;
si1=464U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L33;
}
si0=l3;
f15271(i,si0);
L33:;
si0=l2;
si1=472U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=!(si0);
if(si0){
goto L34;
}
si0=l2;
si1=476U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L34;
}
si0=l3;
f15271(i,si0);
L34:;
si0=l2;
si1=484U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=!(si0);
if(si0){
goto L35;
}
si0=l2;
si1=488U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L35;
}
si0=l3;
f15271(i,si0);
L35:;
si0=l2;
si1=256U;
si0+=si1;
f241(i,si0);
L14:;
si0=l12;
si1=8U;
si0&=si1;
si0=!(si0);
if(si0){
goto L36;
}
si0=l2;
si1=256U;
si0+=si1;
si1=l1;
f445(i,si0,si1);
si0=l0;
si1=268U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si1=l0;
si2=264U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
si0=si0 != si1;
if(si0){
goto L37;
}
si0=l0;
si1=260U;
si0+=si1;
si1=l3;
f564(i,si0,si1);
si0=l0;
si0=i32_load(&i->m0,(U64)si0+268U);
l3=si0;
L37:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+260U);
si1=l3;
si2=304U;
si1*=si2;
si0+=si1;
si1=l2;
si2=256U;
si1+=si2;
si2=304U;
si0=f15390(i,si0,si1,si2);
si0=l0;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+268U);
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0+268U,si1);
L36:;
si0=l2;
si1=800U;
si0+=si1;
i->g0=si0;
L0:;
}

void f252(rustpythonInstance*i,U32 l0) {
U32 l1=0;
U32 l2=0;
U64 l3=0;
U64 l4=0;
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
U32 si0,si1,si2;
U64 sj0,sj1,sj2;
si0=l0;
si1=244U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si0=!(si0);
if(si0){
goto L1;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+236U);
l2=si0;
si0=l0;
sj0=i64_load(&i->m0,(U64)si0+16U);
l3=sj0;
sj1=16ULL;
sj0&=sj1;
l4=sj0;
si0=l0;
si1=68U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si0=l0;
si1=64U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si0=l0;
si1=60U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+56U);
l8=si0;
si0=l0;
sj0=i64_load(&i->m0,(U64)si0+24U);
l9=sj0;
sj0=l3;
sj1=8ULL;
sj0&=sj1;
sj1=0ULL;
si0=sj0 != sj1;
if(si0){
goto L2;
}
sj0=l4;
si0=!(sj0);
if(si0){
goto L3;
}
si0=l1;
si1=312U;
si0*=si1;
l10=si0;
si0=0U;
l1=si0;
L4:;
{
si0=l2;
si1=l1;
si0+=si1;
l0=si0;
si1=68U;
si0+=si1;
si1=l5;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=64U;
si0+=si1;
si1=l6;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=60U;
si0+=si1;
si1=l7;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=56U;
si0+=si1;
si1=l8;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=24U;
si0+=si1;
l11=si0;
si1=l11;
sj1=i64_load(&i->m0,(U64)si1);
sj2=l9;
sj1|=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=16U;
si0+=si1;
l11=si0;
si1=l11;
sj1=i64_load(&i->m0,(U64)si1);
sj2=l9;
sj1|=sj2;
sj2=2048ULL;
sj1|=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
f252(i,si0);
si0=l10;
si1=l1;
si2=312U;
si1+=si2;
l1=si1;
si0=si0 != si1;
if(si0){
goto L4;
}
goto L1;
}
L3:;
si0=l1;
si1=312U;
si0*=si1;
l10=si0;
si0=0U;
l1=si0;
L5:;
{
si0=l2;
si1=l1;
si0+=si1;
l0=si0;
si1=68U;
si0+=si1;
si1=l5;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=64U;
si0+=si1;
si1=l6;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=60U;
si0+=si1;
si1=l7;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=56U;
si0+=si1;
si1=l8;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=16U;
si0+=si1;
l11=si0;
sj1=l9;
si2=l11;
sj2=i64_load(&i->m0,(U64)si2);
sj1|=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=24U;
si0+=si1;
l11=si0;
si1=l11;
sj1=i64_load(&i->m0,(U64)si1);
sj2=l9;
sj1|=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
f252(i,si0);
si0=l10;
si1=l1;
si2=312U;
si1+=si2;
l1=si1;
si0=si0 != si1;
if(si0){
goto L5;
}
goto L1;
}
L2:;
si0=l0;
si1=104U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l12=si0;
if(si0){
goto L6;
}
sj0=l4;
si0=!(sj0);
if(si0){
goto L7;
}
si0=l1;
si1=312U;
si0*=si1;
l10=si0;
si0=0U;
l1=si0;
L8:;
{
si0=l2;
si1=l1;
si0+=si1;
l0=si0;
si1=68U;
si0+=si1;
si1=l5;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=64U;
si0+=si1;
si1=l6;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=60U;
si0+=si1;
si1=l7;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=56U;
si0+=si1;
si1=l8;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=24U;
si0+=si1;
l11=si0;
si1=l11;
sj1=i64_load(&i->m0,(U64)si1);
sj2=l9;
sj1|=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=16U;
si0+=si1;
l11=si0;
si1=l11;
sj1=i64_load(&i->m0,(U64)si1);
sj2=l9;
sj1|=sj2;
sj2=2048ULL;
sj1|=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
f252(i,si0);
si0=l10;
si1=l1;
si2=312U;
si1+=si2;
l1=si1;
si0=si0 != si1;
if(si0){
goto L8;
}
goto L1;
}
L7:;
si0=l1;
si1=312U;
si0*=si1;
l10=si0;
si0=0U;
l1=si0;
L9:;
{
si0=l2;
si1=l1;
si0+=si1;
l0=si0;
si1=68U;
si0+=si1;
si1=l5;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=64U;
si0+=si1;
si1=l6;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=60U;
si0+=si1;
si1=l7;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=56U;
si0+=si1;
si1=l8;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=16U;
si0+=si1;
l11=si0;
sj1=l9;
si2=l11;
sj2=i64_load(&i->m0,(U64)si2);
sj1|=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=24U;
si0+=si1;
l11=si0;
si1=l11;
sj1=i64_load(&i->m0,(U64)si1);
sj2=l9;
sj1|=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
f252(i,si0);
si0=l10;
si1=l1;
si2=312U;
si1+=si2;
l1=si1;
si0=si0 != si1;
if(si0){
goto L9;
}
goto L1;
}
L6:;
si0=l0;
si1=108U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l13=si0;
sj0=l4;
si0=!(sj0);
if(si0){
goto L10;
}
si0=l1;
si1=312U;
si0*=si1;
l14=si0;
si0=0U;
l1=si0;
L11:;
{
si0=l2;
si1=l1;
si0+=si1;
l0=si0;
si1=16U;
si0+=si1;
l11=si0;
sj0=i64_load(&i->m0,(U64)si0);
l3=sj0;
si0=l0;
si1=104U;
si0+=si1;
l10=si0;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L13;
}
sj0=l3;
sj1=2048ULL;
sj0|=sj1;
l3=sj0;
goto L12;
L13:;
si0=l10;
si1=l12;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=108U;
si0+=si1;
si1=l13;
i32_store(&i->m0,(U64)si0,si1);
sj0=l3;
sj1=2056ULL;
sj0|=sj1;
l3=sj0;
L12:;
si0=l11;
sj1=l9;
sj2=l3;
sj1|=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=68U;
si0+=si1;
si1=l5;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=64U;
si0+=si1;
si1=l6;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=60U;
si0+=si1;
si1=l7;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=56U;
si0+=si1;
si1=l8;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=24U;
si0+=si1;
l11=si0;
si1=l11;
sj1=i64_load(&i->m0,(U64)si1);
sj2=l9;
sj1|=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
f252(i,si0);
si0=l14;
si1=l1;
si2=312U;
si1+=si2;
l1=si1;
si0=si0 != si1;
if(si0){
goto L11;
}
goto L1;
}
L10:;
si0=l1;
si1=312U;
si0*=si1;
l14=si0;
si0=0U;
l1=si0;
L14:;
{
si0=l2;
si1=l1;
si0+=si1;
l0=si0;
si1=16U;
si0+=si1;
l11=si0;
sj0=i64_load(&i->m0,(U64)si0);
l3=sj0;
si0=l0;
si1=104U;
si0+=si1;
l10=si0;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L15;
}
si0=l10;
si1=l12;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=108U;
si0+=si1;
si1=l13;
i32_store(&i->m0,(U64)si0,si1);
sj0=l3;
sj1=8ULL;
sj0|=sj1;
l3=sj0;
L15:;
si0=l11;
sj1=l9;
sj2=l3;
sj1|=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=68U;
si0+=si1;
si1=l5;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=64U;
si0+=si1;
si1=l6;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=60U;
si0+=si1;
si1=l7;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=56U;
si0+=si1;
si1=l8;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=24U;
si0+=si1;
l11=si0;
si1=l11;
sj1=i64_load(&i->m0,(U64)si1);
sj2=l9;
sj1|=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
f252(i,si0);
si0=l14;
si1=l1;
si2=312U;
si1+=si2;
l1=si1;
si0=si0 != si1;
if(si0){
goto L14;
}
}
L1:;
L0:;
}

void f253(rustpythonInstance*i,U32 l0) {
U64 l1=0;
U32 l2=0;
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 si0,si1,si2;
U64 sj0,sj1;
si0=l0;
sj0=i64_load(&i->m0,(U64)si0+16U);
l1=sj0;
sj1=2097152ULL;
sj0&=sj1;
sj1=0ULL;
si0=sj0 != sj1;
if(si0){
goto L2;
}
si0=l0;
si1=244U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+236U);
l3=si0;
goto L1;
L2:;
si0=l0;
si1=232U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+224U);
l3=si0;
sj0=l1;
sj1=32ULL;
sj0&=sj1;
si0=!(sj0);
l5=si0;
if(si0){
goto L4;
}
si0=l4;
si1=272U;
si0*=si1;
l4=si0;
si0=l3;
si1=176U;
si0+=si1;
l6=si0;
L5:;
{
si0=l4;
si0=!(si0);
if(si0){
goto L3;
}
si0=l3;
si1=176U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=999U;
si0=si0 != si1;
if(si0){
goto L6;
}
si0=l6;
si1=l6;
si2=4U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
L6:;
si0=l3;
si1=272U;
si0+=si1;
l3=si0;
si0=l4;
si1=-272U;
si0+=si1;
l4=si0;
si0=l6;
si1=272U;
si0+=si1;
l6=si0;
goto L5;
}
L4:;
si0=l4;
si1=272U;
si0*=si1;
l4=si0;
si0=l3;
si1=176U;
si0+=si1;
l6=si0;
si0=0U;
l7=si0;
L7:;
{
si0=l4;
si0=!(si0);
if(si0){
goto L3;
}
si0=l3;
si1=176U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=999U;
si0=si0 != si1;
if(si0){
goto L8;
}
si0=l6;
si1=l7;
i32_store(&i->m0,(U64)si0,si1);
L8:;
si0=l3;
si1=272U;
si0+=si1;
l3=si0;
si0=l7;
si1=1U;
si0+=si1;
l7=si0;
si0=l4;
si1=-272U;
si0+=si1;
l4=si0;
si0=l6;
si1=272U;
si0+=si1;
l6=si0;
goto L7;
}
L3:;
si0=l0;
si1=220U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+212U);
l3=si0;
si0=l5;
if(si0){
goto L10;
}
si0=l4;
si1=120U;
si0*=si1;
l4=si0;
si0=l3;
si1=24U;
si0+=si1;
l6=si0;
L11:;
{
si0=l4;
si0=!(si0);
if(si0){
goto L9;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0+24U);
si1=999U;
si0=si0 != si1;
if(si0){
goto L12;
}
si0=l6;
si1=l6;
si2=4U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
L12:;
si0=l3;
si1=120U;
si0+=si1;
l3=si0;
si0=l4;
si1=-120U;
si0+=si1;
l4=si0;
si0=l6;
si1=120U;
si0+=si1;
l6=si0;
goto L11;
}
L10:;
si0=l4;
si1=120U;
si0*=si1;
l4=si0;
si0=l3;
si1=24U;
si0+=si1;
l6=si0;
si0=0U;
l7=si0;
L13:;
{
si0=l4;
si0=!(si0);
if(si0){
goto L9;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0+24U);
si1=999U;
si0=si0 != si1;
if(si0){
goto L14;
}
si0=l6;
si1=l7;
i32_store(&i->m0,(U64)si0,si1);
L14:;
si0=l3;
si1=120U;
si0+=si1;
l3=si0;
si0=l7;
si1=1U;
si0+=si1;
l7=si0;
si0=l4;
si1=-120U;
si0+=si1;
l4=si0;
si0=l6;
si1=120U;
si0+=si1;
l6=si0;
goto L13;
}
L9:;
si0=l0;
si1=244U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si1=312U;
si0*=si1;
l5=si0;
si0=0U;
l4=si0;
si0=0U;
l7=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+236U);
l3=si0;
l6=si0;
L15:;
{
si0=l5;
si1=l4;
si0=si0 == si1;
if(si0){
goto L1;
}
si0=l6;
si1=192U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=999U;
si0=si0 != si1;
if(si0){
goto L16;
}
si0=l3;
si1=l4;
si0+=si1;
si1=192U;
si0+=si1;
si1=l7;
i32_store(&i->m0,(U64)si0,si1);
L16:;
si0=l6;
si1=312U;
si0+=si1;
l6=si0;
si0=l7;
si1=1U;
si0+=si1;
l7=si0;
si0=l4;
si1=312U;
si0+=si1;
l4=si0;
goto L15;
}
L1:;
si0=l2;
si0=!(si0);
if(si0){
goto L17;
}
si0=l2;
si1=312U;
si0*=si1;
l4=si0;
L18:;
{
si0=l3;
f253(i,si0);
si0=l3;
si1=312U;
si0+=si1;
l3=si0;
si0=l4;
si1=-312U;
si0+=si1;
l4=si0;
if(si0){
goto L18;
}
}
L17:;
L0:;
}

void f254(rustpythonInstance*i,U32 l0) {
U32 l1=0;
U32 l2=0;
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 si0,si1,si2;
si0=l0;
si1=244U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si0=!(si0);
if(si0){
goto L1;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+236U);
l2=si0;
si0=l0;
si1=268U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=!(si0);
if(si0){
goto L2;
}
si0=l2;
si1=l1;
si2=312U;
si1*=si2;
si0+=si1;
l4=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+260U);
l5=si0;
si0=l3;
si1=304U;
si0*=si1;
l3=si0;
L3:;
{
si0=l3;
l1=si0;
si0=l5;
l0=si0;
L4:;
{
si0=l2;
si1=l0;
f251(i,si0,si1);
si0=l0;
si1=304U;
si0+=si1;
l0=si0;
si0=l1;
si1=-304U;
si0+=si1;
l1=si0;
if(si0){
goto L4;
}
}
si0=l2;
f254(i,si0);
si0=l2;
si1=312U;
si0+=si1;
l2=si0;
si1=l4;
si0=si0 != si1;
if(si0){
goto L3;
}
goto L1;
}
L2:;
si0=l1;
si1=312U;
si0*=si1;
l0=si0;
L5:;
{
si0=l2;
f254(i,si0);
si0=l2;
si1=312U;
si0+=si1;
l2=si0;
si0=l0;
si1=-312U;
si0+=si1;
l0=si0;
if(si0){
goto L5;
}
}
L1:;
L0:;
}

void f255(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U64 l5=0;
U32 l6=0;
U32 l7=0;
U32 l8=0;
U32 l9=0;
U32 l10=0;
U32 si0,si1,si2,si3;
U64 sj0,sj1;
si0=i->g0;
si1=48U;
si0-=si1;
l4=si0;
i->g0=si0;
si0=l4;
si1=l3;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l4;
si1=l2;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l1;
sj0=i64_load(&i->m0,(U64)si0+16U);
l5=sj0;
sj1=139586437120ULL;
sj0&=sj1;
sj1=139586437120ULL;
si0=sj0 == sj1;
if(si0){
goto L3;
}
sj0=l5;
sj1=274877906944ULL;
sj0&=sj1;
si0=!(sj0);
if(si0){
goto L6;
}
si0=l4;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+236U);
l6=si1;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l4;
si1=l6;
si2=l1;
si3=244U;
si2+=si3;
si2=i32_load(&i->m0,(U64)si2);
si3=312U;
si2*=si3;
si1+=si2;
i32_store(&i->m0,(U64)si0+36U,si1);
si0=l4;
si1=l4;
si2=8U;
si1+=si2;
i32_store(&i->m0,(U64)si0+40U,si1);
si0=l4;
si1=16U;
si0+=si1;
si1=l4;
si2=32U;
si1+=si2;
f317(i,si0,si1);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+16U);
l2=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+24U);
l7=si0;
si0=!(si0);
if(si0){
goto L5;
}
si0=l7;
si1=2U;
si0<<=(si1&31);
l8=si0;
si0=0U;
l1=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+8U);
l9=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+12U);
l6=si0;
L8:;
{
si0=l2;
si1=l1;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=i32_load(&i->m0,(U64)si0+8U);
si1=l6;
si0=si0 != si1;
if(si0){
goto L9;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si1=l9;
si2=l6;
si0=f15389(i,si0,si1,si2);
si0=!(si0);
if(si0){
goto L7;
}
L9:;
si0=l8;
si1=l1;
si2=4U;
si1+=si2;
l1=si1;
si0=si0 != si1;
if(si0){
goto L8;
}
}
si0=l7;
si1=1U;
si0=si0 != si1;
if(si0){
goto L5;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si0=i32_load(&i->m0,(U64)si0+8U);
l6=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
L7:;
si0=l0;
si1=l3;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=1U;
i32_store8(&i->m0,(U64)si0,si1);
si0=l0;
si1=8U;
si0+=si1;
si1=l6;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+20U);
si0=!(si0);
if(si0){
goto L1;
}
si0=l2;
f15271(i,si0);
goto L1;
L6:;
si0=l1;
si1=244U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si0=!(si0);
if(si0){
goto L4;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+236U);
l8=si0;
si1=l6;
si2=312U;
si1*=si2;
si0+=si1;
l10=si0;
L10:;
{
si0=l8;
si1=72U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l9=si0;
si0=l8;
si1=80U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
si1=l3;
si0=si0 != si1;
if(si0){
goto L11;
}
si0=l2;
si1=l9;
si2=l3;
si0=f15389(i,si0,si1,si2);
si0=!(si0);
if(si0){
goto L2;
}
L11:;
si0=l8;
si1=152U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si0=!(si0);
if(si0){
goto L12;
}
si0=l8;
si1=160U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si0=!(si0);
if(si0){
goto L12;
}
si0=l6;
si1=12U;
si0*=si1;
l6=si0;
L13:;
{
si0=l1;
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=l3;
si0=si0 != si1;
if(si0){
goto L14;
}
si0=l2;
si1=l1;
si1=i32_load(&i->m0,(U64)si1);
si2=l3;
si0=f15389(i,si0,si1,si2);
if(si0){
goto L14;
}
si0=l7;
l3=si0;
goto L2;
L14:;
si0=l1;
si1=12U;
si0+=si1;
l1=si0;
si0=l6;
si1=-12U;
si0+=si1;
l6=si0;
if(si0){
goto L13;
}
}
L12:;
si0=l8;
si1=312U;
si0+=si1;
l8=si0;
si1=l10;
si0=si0 != si1;
if(si0){
goto L10;
}
goto L4;
}
L5:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+20U);
si0=!(si0);
if(si0){
goto L4;
}
si0=l2;
f15271(i,si0);
L4:;
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=0U;
i32_store8(&i->m0,(U64)si0,si1);
goto L1;
L3:;
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=0U;
i32_store8(&i->m0,(U64)si0,si1);
goto L1;
L2:;
si0=l0;
si1=l9;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=1U;
i32_store8(&i->m0,(U64)si0,si1);
si0=l0;
si1=8U;
si0+=si1;
si1=l3;
i32_store(&i->m0,(U64)si0,si1);
L1:;
si0=l4;
si1=48U;
si0+=si1;
i->g0=si0;
L0:;
}

void f256(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
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
U64 l24=0;
U32 l25=0;
U32 l26=0;
U32 l27=0;
U32 l28=0;
U32 l29=0;
U32 l30=0;
U64 l31=0;
U32 l32=0;
U32 l33=0;
U64 l34=0;
U32 l35=0;
U32 l36=0;
U32 l37=0;
U32 l38=0;
U32 l39=0;
U32 l40=0;
U32 l41=0;
U32 l42=0;
U64 l43=0;
U64 l44=0;
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
U32 l55=0;
U32 l56=0;
U32 si0,si1,si2,si3,si4,si5;
U64 sj0,sj1,sj2,sj3,sj5,sj6;
si0=i->g0;
si1=896U;
si0-=si1;
l3=si0;
i->g0=si0;
si0=l3;
si1=l2;
f311(i,si0,si1);
si0=l1;
si1=84U;
si2=72U;
si3=l1;
si4=84U;
si3+=si4;
l4=si3;
si3=i32_load(&i->m0,(U64)si3);
l2=si3;
si1=si3?si1:si2;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si0=l4;
si1=l1;
si2=72U;
si1+=si2;
l6=si1;
si2=l2;
si0=si2?si0:si1;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
if(si0){
goto L19;
}
si0=1U;
l7=si0;
goto L18;
L19:;
si0=l2;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L15;
}
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=l2;
si0=f15269(i,si0);
l7=si0;
si0=!(si0);
if(si0){
goto L17;
}
L18:;
si0=l7;
si1=l5;
si2=l2;
si0=f15390(i,si0,si1,si2);
l5=si0;
si0=l3;
si1=l2;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l3;
si1=l2;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l3;
si1=l5;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+8U);
l8=si0;
if(si0){
goto L20;
}
si0=0U;
l9=si0;
si0=l1;
l10=si0;
goto L16;
L20:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
l11=si0;
si1=l8;
si2=12U;
si1*=si2;
si0+=si1;
l12=si0;
si0=l8;
si1=-1U;
si0+=si1;
l13=si0;
si0=0U;
l9=si0;
si0=l1;
l10=si0;
si0=l11;
l14=si0;
si0=0U;
l15=si0;
L21:;
{
si0=l3;
si1=344U;
si0+=si1;
si1=l14;
si1=i32_load(&i->m0,(U64)si1);
si2=l14;
si3=8U;
si2+=si3;
l16=si2;
si2=i32_load(&i->m0,(U64)si2);
f62(i,si0,si1,si2);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+348U);
l7=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+344U);
l2=si0;
si0=0U;
l5=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+352U);
si1=4U;
si0=si0 != si1;
if(si0){
goto L22;
}
si0=l2;
si1=l7;
si2=l2;
si0=si2?si0:si1;
si0=i32_load(&i->m0,(U64)si0);
si1=1886152040U;
si0=si0 == si1;
l5=si0;
L22:;
si0=l2;
si0=!(si0);
if(si0){
goto L23;
}
si0=l7;
si0=!(si0);
if(si0){
goto L23;
}
si0=l2;
f15271(i,si0);
L23:;
si0=l10;
si1=244U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l17=si0;
si0=!(si0);
if(si0){
goto L27;
}
si0=l15;
si1=1U;
si0+=si1;
l18=si0;
si0=l14;
si1=12U;
si0+=si1;
l19=si0;
si0=l5;
si1=l9;
si0|=si1;
l9=si0;
si0=l10;
si0=i32_load(&i->m0,(U64)si0+236U);
l10=si0;
si1=l17;
si2=312U;
si1*=si2;
l5=si1;
si0+=si1;
l20=si0;
si0=l16;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
si0=l10;
l2=si0;
L28:;
{
si0=l7;
si1=l2;
si2=80U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
si0=si0 != si1;
if(si0){
goto L29;
}
si0=l14;
si0=i32_load(&i->m0,(U64)si0);
si1=l2;
si2=72U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
l21=si1;
si2=l7;
si0=f15389(i,si0,si1,si2);
si0=!(si0);
if(si0){
goto L26;
}
L29:;
si0=l2;
si1=312U;
si0+=si1;
l2=si0;
si0=l5;
si1=-312U;
si0+=si1;
l5=si0;
if(si0){
goto L28;
}
}
si0=l17;
si0=!(si0);
if(si0){
goto L27;
}
L30:;
{
si0=l10;
si1=152U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si0=!(si0);
if(si0){
goto L31;
}
si0=l10;
si1=160U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=12U;
si0*=si1;
l7=si0;
L32:;
{
si0=l7;
si0=!(si0);
if(si0){
goto L31;
}
si0=l2;
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l21=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0);
l22=si0;
si0=l3;
si1=344U;
si0+=si1;
si1=l14;
si1=i32_load(&i->m0,(U64)si1);
si2=l16;
si2=i32_load(&i->m0,(U64)si2);
f62(i,si0,si1,si2);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+348U);
l23=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+344U);
l5=si0;
si0=0U;
l17=si0;
si0=l21;
si1=l3;
si1=i32_load(&i->m0,(U64)si1+352U);
si0=si0 != si1;
if(si0){
goto L33;
}
si0=l22;
si1=l5;
si2=l23;
si3=l5;
si1=si3?si1:si2;
si2=l21;
si0=f15389(i,si0,si1,si2);
si0=!(si0);
l17=si0;
L33:;
si0=l5;
si0=!(si0);
if(si0){
goto L34;
}
si0=l23;
si0=!(si0);
if(si0){
goto L34;
}
si0=l5;
f15271(i,si0);
L34:;
si0=l2;
si1=12U;
si0+=si1;
l2=si0;
si0=l7;
si1=-12U;
si0+=si1;
l7=si0;
si0=l17;
si0=!(si0);
if(si0){
goto L32;
}
}
si0=l15;
si1=l13;
si0=si0 == si1;
if(si0){
goto L16;
}
si0=l10;
si1=80U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
si0=l10;
si1=72U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l21=si0;
goto L25;
L31:;
si0=l10;
si1=312U;
si0+=si1;
l10=si0;
si1=l20;
si0=si0 != si1;
if(si0){
goto L30;
}
}
L27:;
si0=l3;
si1=344U;
si0+=si1;
si1=l14;
si1=i32_load(&i->m0,(U64)si1);
si2=l14;
si3=8U;
si2+=si3;
si2=i32_load(&i->m0,(U64)si2);
f62(i,si0,si1,si2);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+344U);
if(si0){
goto L37;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0+348U);
l5=si0;
si0=l3;
si1=344U;
si0+=si1;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
if(si0){
goto L39;
}
si0=1U;
l7=si0;
goto L38;
L39:;
si0=l2;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L15;
}
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=l2;
si0=f15269(i,si0);
l7=si0;
si0=!(si0);
if(si0){
goto L35;
}
L38:;
si0=l7;
si1=l5;
si2=l2;
si0=f15390(i,si0,si1,si2);
l5=si0;
si0=l3;
si1=l2;
i32_store(&i->m0,(U64)si0+664U,si1);
si0=l3;
si1=l2;
i32_store(&i->m0,(U64)si0+660U,si1);
si0=l3;
si1=l5;
i32_store(&i->m0,(U64)si0+656U,si1);
goto L36;
L37:;
si0=l3;
si1=656U;
si0+=si1;
si1=8U;
si0+=si1;
si1=l3;
si2=344U;
si1+=si2;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=l3;
sj1=i64_load(&i->m0,(U64)si1+344U);
i64_store(&i->m0,(U64)si0+656U,sj1);
L36:;
si0=l0;
si1=l3;
si2=656U;
si1+=si2;
si2=l4;
si3=l6;
si4=l1;
si4=i32_load(&i->m0,(U64)si4+84U);
si2=si4?si2:si3;
si3=l1;
sj3=i64_load(&i->m0,(U64)si3+16U);
l24=sj3;
si3=(U32)(sj3);
si4=23U;
si3>>=(si4&31);
si4=1U;
si3&=si4;
si4=2U;
sj5=l24;
sj6=33554432ULL;
sj5&=sj6;
si5=!(sj5);
si3=si5?si3:si4;
f594(i,si0,si1,si2,si3);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+20U);
si0=!(si0);
if(si0){
goto L40;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0+16U);
f15271(i,si0);
L40:;
si0=l11;
l2=si0;
L41:;
{
si0=l2;
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L42;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0);
f15271(i,si0);
L42:;
si0=l2;
si1=12U;
si0+=si1;
l2=si0;
si0=l8;
si1=-1U;
si0+=si1;
l8=si0;
if(si0){
goto L41;
}
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0+4U);
si0=!(si0);
if(si0){
goto L1;
}
si0=l11;
f15271(i,si0);
goto L1;
L35:;
si0=1U;
si1=l2;
f52(i,si0,si1);
UNREACHABLE;
L26:;
si0=l15;
si1=l13;
si0=si0 == si1;
if(si0){
goto L24;
}
si0=l2;
l10=si0;
L25:;
si0=l3;
si1=2U;
i32_store(&i->m0,(U64)si0+348U,si1);
si0=l3;
si1=1085028U;
i32_store(&i->m0,(U64)si0+344U,si1);
si0=l3;
sj1=2ULL;
i64_store(&i->m0,(U64)si0+356U,sj1);
si0=l3;
si1=66U;
i32_store(&i->m0,(U64)si0+668U,si1);
si0=l3;
si1=67U;
i32_store(&i->m0,(U64)si0+660U,si1);
si0=l3;
si1=l7;
i32_store(&i->m0,(U64)si0+628U,si1);
si0=l3;
si1=l21;
i32_store(&i->m0,(U64)si0+624U,si1);
si0=l3;
si1=l3;
si2=656U;
si1+=si2;
i32_store(&i->m0,(U64)si0+352U,si1);
si0=l3;
si1=l3;
si2=624U;
si1+=si2;
i32_store(&i->m0,(U64)si0+664U,si1);
si0=l3;
si1=l3;
si2=16U;
si1+=si2;
i32_store(&i->m0,(U64)si0+656U,si1);
si0=l3;
si1=640U;
si0+=si1;
si1=l3;
si2=344U;
si1+=si2;
f63(i,si0,si1);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+20U);
si0=!(si0);
if(si0){
goto L43;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0+16U);
f15271(i,si0);
L43:;
si0=l3;
si1=16U;
si0+=si1;
si1=8U;
si0+=si1;
si1=l3;
si2=640U;
si1+=si2;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=l3;
sj1=i64_load(&i->m0,(U64)si1+640U);
i64_store(&i->m0,(U64)si0+16U,sj1);
si0=l19;
l14=si0;
si0=l18;
l15=si0;
si0=l19;
si1=l12;
si0=si0 == si1;
if(si0){
goto L16;
}
goto L21;
L24:;
}
si0=l2;
l10=si0;
goto L16;
L17:;
si0=1U;
si1=l2;
f52(i,si0,si1);
UNREACHABLE;
L16:;
si0=l10;
si1=72U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si0=l10;
si1=80U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
if(si0){
goto L45;
}
si0=1U;
l7=si0;
goto L44;
L45:;
si0=l2;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L15;
}
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=l2;
si0=f15269(i,si0);
l7=si0;
si0=!(si0);
if(si0){
goto L14;
}
L44:;
si0=l7;
si1=l5;
si2=l2;
si0=f15390(i,si0,si1,si2);
l8=si0;
si0=0U;
l23=si0;
si0=l10;
si1=84U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
if(si0){
goto L47;
}
si0=0U;
l22=si0;
goto L46;
L47:;
si0=l10;
si1=92U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
if(si0){
goto L49;
}
si0=1U;
l22=si0;
goto L48;
L49:;
si0=l5;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L15;
}
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=l5;
si0=f15269(i,si0);
l22=si0;
si0=!(si0);
if(si0){
goto L13;
}
L48:;
si0=l22;
si1=l7;
si2=l5;
si0=f15390(i,si0,si1,si2);
si0=l5;
sj0=(U64)(si0);
l24=sj0;
sj1=32ULL;
sj0<<=(sj1&63);
sj1=l24;
sj0|=sj1;
l24=sj0;
L46:;
si0=l10;
si1=148U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l15=si0;
si0=l10;
si1=144U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l19=si0;
si0=l10;
si1=140U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l20=si0;
si0=l10;
si1=136U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l18=si0;
si0=l10;
si1=132U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l13=si0;
si0=l10;
si1=128U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l12=si0;
si0=l10;
si1=124U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l11=si0;
si0=l10;
si1=120U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si0=l10;
si1=116U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l25=si0;
si0=l10;
si1=112U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l26=si0;
si0=l10;
si1=108U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l27=si0;
si0=l10;
si1=104U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l28=si0;
si0=l10;
si1=100U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l29=si0;
si0=l10;
si1=96U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l30=si0;
si0=l10;
si1=152U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l21=si0;
if(si0){
goto L51;
}
goto L50;
L51:;
si0=l10;
si1=160U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
if(si0){
goto L53;
}
si0=4U;
l23=si0;
si0=0U;
l7=si0;
goto L52;
L53:;
si0=l5;
si1=178956970U;
si0=si0 > si1;
if(si0){
goto L15;
}
si0=l5;
si1=12U;
si0*=si1;
l7=si0;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L15;
}
si0=l5;
si1=178956971U;
si0=si0 < si1;
si1=2U;
si0<<=(si1&31);
l17=si0;
si0=l7;
if(si0){
goto L55;
}
si0=l17;
l23=si0;
goto L54;
L55:;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=l17;
si1=l7;
si0=si0 <= si1;
if(si0){
goto L56;
}
si0=l17;
si1=l7;
si0=f15277(i,si0,si1);
l23=si0;
goto L54;
L56:;
si0=l7;
si0=f15269(i,si0);
l23=si0;
L54:;
si0=l23;
si0=!(si0);
if(si0){
goto L12;
}
L52:;
si0=l23;
si1=l21;
si2=l7;
si0=f15390(i,si0,si1,si2);
si0=l5;
sj0=(U64)(si0);
l31=sj0;
sj1=32ULL;
sj0<<=(sj1&63);
sj1=l31;
sj0|=sj1;
l31=sj0;
L50:;
si0=l10;
si1=168U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l32=si0;
si0=l10;
si1=164U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l33=si0;
si0=0U;
l7=si0;
si0=l10;
si1=172U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l21=si0;
if(si0){
goto L58;
}
si0=0U;
l16=si0;
goto L57;
L58:;
si0=l10;
si1=180U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
if(si0){
goto L60;
}
si0=1U;
l16=si0;
goto L59;
L60:;
si0=l5;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L15;
}
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=l5;
si0=f15269(i,si0);
l16=si0;
si0=!(si0);
if(si0){
goto L11;
}
L59:;
si0=l16;
si1=l21;
si2=l5;
si0=f15390(i,si0,si1,si2);
si0=l5;
sj0=(U64)(si0);
l34=sj0;
sj1=32ULL;
sj0<<=(sj1&63);
sj1=l34;
sj0|=sj1;
l34=sj0;
L57:;
si0=l10;
si1=200U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l35=si0;
si0=l10;
si1=196U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l36=si0;
si0=l10;
si1=68U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l37=si0;
si0=l10;
si1=64U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l38=si0;
si0=l10;
si1=60U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l39=si0;
si0=l10;
si1=192U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l40=si0;
si0=l10;
si1=188U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l41=si0;
si0=l10;
si1=184U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l42=si0;
si0=l10;
sj0=i64_load(&i->m0,(U64)si0+24U);
l43=sj0;
si0=l10;
sj0=i64_load(&i->m0,(U64)si0+16U);
l44=sj0;
si0=l10;
si0=i32_load(&i->m0,(U64)si0+56U);
l45=si0;
si0=l3;
si1=592U;
si0+=si1;
si1=l10;
si2=212U;
si1+=si2;
f297(i,si0,si1);
si0=l3;
si1=608U;
si0+=si1;
si1=l10;
si2=224U;
si1+=si2;
f292(i,si0,si1);
si0=l10;
si0=i32_load(&i->m0,(U64)si0+12U);
l46=si0;
si0=l3;
si1=624U;
si0+=si1;
si1=l10;
f298(i,si0,si1);
si0=l3;
si1=640U;
si0+=si1;
si1=l10;
si2=236U;
si1+=si2;
f291(i,si0,si1);
si0=l3;
si1=656U;
si0+=si1;
si1=l10;
si2=248U;
si1+=si2;
f299(i,si0,si1);
si0=l3;
si1=344U;
si0+=si1;
si1=l10;
si2=260U;
si1+=si2;
f295(i,si0,si1);
si0=l10;
si0=i32_load(&i->m0,(U64)si0+272U);
l17=si0;
si0=4U;
l14=si0;
si0=4U;
l21=si0;
si0=l10;
si1=280U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si0=!(si0);
if(si0){
goto L61;
}
si0=l5;
si1=268435455U;
si0=si0 > si1;
if(si0){
goto L15;
}
si0=l5;
si1=3U;
si0<<=(si1&31);
l7=si0;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L15;
}
si0=l5;
si1=268435456U;
si0=si0 < si1;
si1=2U;
si0<<=(si1&31);
l47=si0;
si0=l7;
if(si0){
goto L63;
}
si0=l47;
l21=si0;
goto L62;
L63:;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=l47;
si1=l7;
si0=si0 <= si1;
if(si0){
goto L64;
}
si0=l47;
si1=l7;
si0=f15277(i,si0,si1);
l21=si0;
goto L62;
L64:;
si0=l7;
si0=f15269(i,si0);
l21=si0;
L62:;
si0=l21;
si0=!(si0);
if(si0){
goto L10;
}
L61:;
si0=l21;
si1=l17;
si2=l7;
si0=f15390(i,si0,si1,si2);
l48=si0;
si0=l10;
si0=i32_load(&i->m0,(U64)si0+284U);
l47=si0;
si0=0U;
l17=si0;
si0=0U;
l21=si0;
si0=l10;
si1=292U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
si0=!(si0);
if(si0){
goto L65;
}
si0=l7;
si1=89478485U;
si0=si0 > si1;
if(si0){
goto L15;
}
si0=l7;
si1=24U;
si0*=si1;
l21=si0;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L15;
}
si0=l7;
si1=89478486U;
si0=si0 < si1;
si1=2U;
si0<<=(si1&31);
l49=si0;
si0=l21;
if(si0){
goto L67;
}
si0=l49;
l14=si0;
goto L66;
L67:;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=l49;
si1=l21;
si0=si0 <= si1;
if(si0){
goto L68;
}
si0=l49;
si1=l21;
si0=f15277(i,si0,si1);
l14=si0;
goto L66;
L68:;
si0=l21;
si0=f15269(i,si0);
l14=si0;
L66:;
si0=l14;
si0=!(si0);
if(si0){
goto L9;
}
L65:;
si0=l14;
si1=l47;
si2=l21;
si0=f15390(i,si0,si1,si2);
l47=si0;
si0=l10;
si0=i32_load(&i->m0,(U64)si0+296U);
l49=si0;
si0=l10;
si1=304U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l21=si0;
if(si0){
goto L70;
}
si0=4U;
l14=si0;
goto L69;
L70:;
si0=l21;
si1=134217727U;
si0=si0 > si1;
if(si0){
goto L15;
}
si0=l21;
si1=4U;
si0<<=(si1&31);
l17=si0;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L15;
}
si0=l21;
si1=134217728U;
si0=si0 < si1;
si1=2U;
si0<<=(si1&31);
l50=si0;
si0=l17;
if(si0){
goto L72;
}
si0=l50;
l14=si0;
goto L71;
L72:;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=l50;
si1=l17;
si0=si0 <= si1;
if(si0){
goto L73;
}
si0=l50;
si1=l17;
si0=f15277(i,si0,si1);
l14=si0;
goto L71;
L73:;
si0=l17;
si0=f15269(i,si0);
l14=si0;
L71:;
si0=l14;
si0=!(si0);
if(si0){
goto L8;
}
L69:;
si0=l14;
si1=l49;
si2=l17;
si0=f15390(i,si0,si1,si2);
l14=si0;
si0=l10;
si0=i32_load(&i->m0,(U64)si0+32U);
l49=si0;
if(si0){
goto L75;
}
goto L74;
L75:;
si0=l10;
si1=36U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l50=si0;
L74:;
si0=l10;
si0=i32_load(&i->m0,(U64)si0+40U);
l51=si0;
if(si0){
goto L77;
}
goto L76;
L77:;
si0=l10;
si1=44U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l52=si0;
L76:;
si0=l10;
si0=i32_load(&i->m0,(U64)si0+208U);
l53=si0;
si0=l10;
si0=i32_load(&i->m0,(U64)si0+204U);
l54=si0;
si0=l10;
si0=i32_load(&i->m0,(U64)si0+48U);
l55=si0;
if(si0){
goto L79;
}
goto L78;
L79:;
si0=l10;
si1=52U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l56=si0;
L78:;
si0=l3;
si1=232U;
si0+=si1;
si1=l35;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=228U;
si0+=si1;
si1=l36;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=224U;
si0+=si1;
si1=l40;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=220U;
si0+=si1;
si1=l41;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=216U;
si0+=si1;
si1=l42;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=208U;
si0+=si1;
sj1=l34;
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=204U;
si0+=si1;
si1=l16;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=200U;
si0+=si1;
si1=l32;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=196U;
si0+=si1;
si1=l33;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=188U;
si0+=si1;
sj1=l31;
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=184U;
si0+=si1;
si1=l23;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=180U;
si0+=si1;
si1=l15;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=176U;
si0+=si1;
si1=l19;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=172U;
si0+=si1;
si1=l20;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=168U;
si0+=si1;
si1=l18;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=164U;
si0+=si1;
si1=l13;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=160U;
si0+=si1;
si1=l12;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=156U;
si0+=si1;
si1=l11;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=152U;
si0+=si1;
si1=l6;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=148U;
si0+=si1;
si1=l25;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=144U;
si0+=si1;
si1=l26;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=140U;
si0+=si1;
si1=l27;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=136U;
si0+=si1;
si1=l28;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=132U;
si0+=si1;
si1=l29;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=128U;
si0+=si1;
si1=l30;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=120U;
si0+=si1;
sj1=l24;
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=116U;
si0+=si1;
l17=si0;
si1=l22;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=112U;
si0+=si1;
si1=l2;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=108U;
si0+=si1;
si1=l2;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=104U;
si0+=si1;
l23=si0;
si1=l8;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=100U;
si0+=si1;
si1=l37;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=96U;
si0+=si1;
si1=l38;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=92U;
si0+=si1;
si1=l39;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=l45;
i32_store(&i->m0,(U64)si0+88U,si1);
si0=l10;
si0=i32_load(&i->m0,(U64)si0+308U);
l2=si0;
si0=l3;
si1=252U;
si0+=si1;
si1=l3;
si2=592U;
si1+=si2;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=264U;
si0+=si1;
si1=l3;
si2=608U;
si1+=si2;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=32U;
si0+=si1;
si1=8U;
si0+=si1;
si1=l3;
si2=624U;
si1+=si2;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=276U;
si0+=si1;
si1=l3;
si2=640U;
si1+=si2;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
sj1=l43;
i64_store(&i->m0,(U64)si0+56U,sj1);
si0=l3;
sj1=l44;
i64_store(&i->m0,(U64)si0+48U,sj1);
si0=l3;
si1=l46;
i32_store(&i->m0,(U64)si0+44U,si1);
si0=l3;
si1=l3;
sj1=i64_load(&i->m0,(U64)si1+592U);
i64_store(&i->m0,(U64)si0+244U,sj1);
si0=l3;
si1=l3;
sj1=i64_load(&i->m0,(U64)si1+608U);
i64_store(&i->m0,(U64)si0+256U,sj1);
si0=l3;
si1=l3;
sj1=i64_load(&i->m0,(U64)si1+624U);
i64_store(&i->m0,(U64)si0+32U,sj1);
si0=l3;
si1=l3;
sj1=i64_load(&i->m0,(U64)si1+640U);
i64_store(&i->m0,(U64)si0+268U,sj1);
si0=l3;
si1=336U;
si0+=si1;
si1=l21;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=332U;
si0+=si1;
si1=l21;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=324U;
si0+=si1;
si1=l7;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=320U;
si0+=si1;
si1=l7;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=312U;
si0+=si1;
si1=l5;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=308U;
si0+=si1;
si1=l5;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=288U;
si0+=si1;
si1=l3;
si2=656U;
si1+=si2;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=300U;
si0+=si1;
si1=l3;
si2=344U;
si1+=si2;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=l14;
i32_store(&i->m0,(U64)si0+328U,si1);
si0=l3;
si1=l47;
i32_store(&i->m0,(U64)si0+316U,si1);
si0=l3;
si1=l48;
i32_store(&i->m0,(U64)si0+304U,si1);
si0=l3;
si1=l53;
i32_store(&i->m0,(U64)si0+240U,si1);
si0=l3;
si1=l54;
i32_store(&i->m0,(U64)si0+236U,si1);
si0=l3;
si1=l3;
sj1=i64_load(&i->m0,(U64)si1+656U);
i64_store(&i->m0,(U64)si0+280U,sj1);
si0=l3;
si1=l3;
sj1=i64_load(&i->m0,(U64)si1+344U);
i64_store(&i->m0,(U64)si0+292U,sj1);
si0=l3;
si1=84U;
si0+=si1;
si1=l56;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=76U;
si0+=si1;
si1=l52;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=68U;
si0+=si1;
si1=l50;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=l2;
i32_store(&i->m0,(U64)si0+340U,si1);
si0=l3;
si1=l55;
i32_store(&i->m0,(U64)si0+80U,si1);
si0=l3;
si1=l51;
i32_store(&i->m0,(U64)si0+72U,si1);
si0=l3;
si1=l49;
i32_store(&i->m0,(U64)si0+64U,si1);
si0=l9;
si1=1U;
si0&=si1;
if(si0){
goto L80;
}
si0=l3;
si1=32U;
si0+=si1;
f257(i,si0);
goto L2;
L80:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+40U);
l2=si0;
si1=2U;
si0=si0 >= si1;
if(si0){
goto L6;
}
si0=l2;
l5=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+36U);
si1=l2;
si0-=si1;
si1=2U;
si2=l2;
si1-=si2;
l21=si1;
si0=si0 >= si1;
if(si0){
goto L81;
}
si0=l3;
si1=32U;
si0+=si1;
si1=l2;
si2=l21;
f578(i,si0,si1,si2);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+40U);
l5=si0;
L81:;
si0=l21;
si1=3U;
si0&=si1;
l7=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+32U);
l14=si0;
si0=l2;
si1=1U;
si0+=si1;
si1=3U;
si0=si0 < si1;
if(si0){
goto L7;
}
si0=l21;
si1=-4U;
si0&=si1;
l21=si0;
si0=l14;
si1=l5;
si2=248U;
si1*=si2;
si0+=si1;
l2=si0;
L82:;
{
si0=l2;
sj1=2ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=744U;
si0+=si1;
sj1=2ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=496U;
si0+=si1;
sj1=2ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=248U;
si0+=si1;
sj1=2ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=992U;
si0+=si1;
l2=si0;
si0=l5;
si1=4U;
si0+=si1;
l5=si0;
si0=l21;
si1=-4U;
si0+=si1;
l21=si0;
if(si0){
goto L82;
}
goto L7;
}
L15:;
f53(i);
UNREACHABLE;
L14:;
si0=1U;
si1=l2;
f52(i,si0,si1);
UNREACHABLE;
L13:;
si0=1U;
si1=l5;
f52(i,si0,si1);
UNREACHABLE;
L12:;
si0=l17;
si1=l7;
f52(i,si0,si1);
UNREACHABLE;
L11:;
si0=1U;
si1=l5;
f52(i,si0,si1);
UNREACHABLE;
L10:;
si0=l47;
si1=l7;
f52(i,si0,si1);
UNREACHABLE;
L9:;
si0=l49;
si1=l21;
f52(i,si0,si1);
UNREACHABLE;
L8:;
si0=l50;
si1=l17;
f52(i,si0,si1);
UNREACHABLE;
L7:;
si0=l7;
si0=!(si0);
if(si0){
goto L83;
}
si0=l14;
si1=l5;
si2=248U;
si1*=si2;
si0+=si1;
l2=si0;
L84:;
{
si0=l2;
sj1=2ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=248U;
si0+=si1;
l2=si0;
si0=l5;
si1=1U;
si0+=si1;
l5=si0;
si0=l7;
si1=-1U;
si0+=si1;
l7=si0;
if(si0){
goto L84;
}
}
L83:;
si0=l3;
si1=l5;
i32_store(&i->m0,(U64)si0+40U,si1);
si0=l5;
si1=1U;
si0=si0 <= si1;
if(si0){
goto L5;
}
L6:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+32U);
l2=si0;
sj0=i64_load(&i->m0,(U64)si0+248U);
l24=sj0;
si0=l3;
si1=656U;
si0+=si1;
si1=l2;
si2=256U;
si1+=si2;
si2=240U;
si0=f15390(i,si0,si1,si2);
si0=l2;
si1=488U;
si0+=si1;
sj1=1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=0U;
i32_store(&i->m0,(U64)si0+476U,si1);
si0=l2;
si1=464U;
si0+=si1;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=0U;
i32_store(&i->m0,(U64)si0+452U,si1);
si0=l2;
sj1=1030ULL;
i64_store(&i->m0,(U64)si0+436U,sj1);
si0=l2;
si1=424U;
si0+=si1;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
sj1=44ULL;
i64_store(&i->m0,(U64)si0+412U,sj1);
si0=l2;
si1=408U;
si0+=si1;
si1=1085054U;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=10U;
i32_store(&i->m0,(U64)si0+404U,si1);
si0=l2;
si1=400U;
si0+=si1;
si1=1085044U;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=376U;
si0+=si1;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=360U;
si0+=si1;
sj1=1114112ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=352U;
si0+=si1;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=336U;
si0+=si1;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=328U;
si0+=si1;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=320U;
si0+=si1;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=312U;
si0+=si1;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=296U;
si0+=si1;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=280U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=264U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
sj1=0ULL;
i64_store(&i->m0,(U64)si0+248U,sj1);
sj0=l24;
sj1=2ULL;
si0=sj0 != sj1;
if(si0){
goto L4;
}
si0=l3;
si1=l3;
si1=i32_load(&i->m0,(U64)si1+44U);
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0+44U,si1);
goto L3;
L5:;
si0=1U;
si1=l5;
si2=1086616U;
f663(i,si0,si1,si2);
UNREACHABLE;
L4:;
si0=l3;
sj1=l24;
i64_store(&i->m0,(U64)si0+344U,sj1);
si0=l3;
si1=352U;
si0+=si1;
si1=l3;
si2=656U;
si1+=si2;
si2=240U;
si0=f15390(i,si0,si1,si2);
si0=l3;
si1=520U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si0=!(si0);
if(si0){
goto L85;
}
si0=l3;
si1=524U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L85;
}
si0=l2;
f15271(i,si0);
L85:;
si0=l3;
si1=536U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si0=!(si0);
if(si0){
goto L86;
}
si0=l3;
si1=540U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L86;
}
si0=l2;
f15271(i,si0);
L86:;
si0=l3;
si1=548U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si0=!(si0);
if(si0){
goto L87;
}
si0=l3;
si1=552U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L87;
}
si0=l2;
f15271(i,si0);
L87:;
si0=l3;
si1=560U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si0=!(si0);
if(si0){
goto L88;
}
si0=l3;
si1=564U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L88;
}
si0=l2;
f15271(i,si0);
L88:;
si0=l3;
si1=572U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si0=!(si0);
if(si0){
goto L89;
}
si0=l3;
si1=576U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L89;
}
si0=l2;
f15271(i,si0);
L89:;
si0=l3;
si1=344U;
si0+=si1;
f241(i,si0);
L3:;
si0=l3;
si1=l1;
sj1=i64_load(&i->m0,(U64)si1+24U);
si2=l3;
sj2=i64_load(&i->m0,(U64)si2+48U);
sj1|=sj2;
i64_store(&i->m0,(U64)si0+48U,sj1);
L2:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+116U);
l5=si0;
si0=!(si0);
if(si0){
goto L92;
}
si0=l2;
si0=!(si0);
if(si0){
goto L92;
}
si0=l3;
si1=32U;
si0+=si1;
si1=92U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=l1;
si2=92U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
l7=si1;
si0=si0 != si1;
if(si0){
goto L91;
}
si0=l5;
si1=l2;
si2=l7;
si0=f15389(i,si0,si1,si2);
si0=!(si0);
if(si0){
goto L90;
}
goto L91;
L92:;
si0=l5;
si1=l2;
si0|=si1;
si0=!(si0);
if(si0){
goto L90;
}
L91:;
si0=l3;
si1=344U;
si0+=si1;
si1=12U;
si0+=si1;
sj1=2ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=656U;
si0+=si1;
si1=12U;
si0+=si1;
si1=67U;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=2U;
i32_store(&i->m0,(U64)si0+348U,si1);
si0=l3;
si1=1085028U;
i32_store(&i->m0,(U64)si0+344U,si1);
si0=l3;
si1=l23;
i32_store(&i->m0,(U64)si0+664U,si1);
si0=l3;
si1=67U;
i32_store(&i->m0,(U64)si0+660U,si1);
si0=l3;
si1=l3;
si2=656U;
si1+=si2;
i32_store(&i->m0,(U64)si0+352U,si1);
si0=l3;
si1=l3;
si2=16U;
si1+=si2;
i32_store(&i->m0,(U64)si0+656U,si1);
si0=l3;
si1=640U;
si0+=si1;
si1=l3;
si2=344U;
si1+=si2;
f63(i,si0,si1);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+116U);
l2=si0;
si0=!(si0);
if(si0){
goto L93;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0+120U);
si0=!(si0);
if(si0){
goto L93;
}
si0=l2;
f15271(i,si0);
L93:;
si0=l17;
si1=l3;
sj1=i64_load(&i->m0,(U64)si1+640U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l17;
si1=8U;
si0+=si1;
si1=l3;
si2=640U;
si1+=si2;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
L90:;
si0=l0;
si1=l3;
si2=32U;
si1+=si2;
si2=0U;
f258(i,si0,si1,si2);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+108U);
si0=!(si0);
if(si0){
goto L94;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0+104U);
f15271(i,si0);
L94:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+116U);
l2=si0;
si0=!(si0);
if(si0){
goto L95;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0+120U);
si0=!(si0);
if(si0){
goto L95;
}
si0=l2;
f15271(i,si0);
L95:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+184U);
l2=si0;
si0=!(si0);
if(si0){
goto L96;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0+188U);
si0=!(si0);
if(si0){
goto L96;
}
si0=l2;
f15271(i,si0);
L96:;
si0=l3;
si1=244U;
si0+=si1;
l2=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+204U);
l5=si0;
si0=!(si0);
if(si0){
goto L97;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0+208U);
si0=!(si0);
if(si0){
goto L97;
}
si0=l5;
f15271(i,si0);
L97:;
si0=l3;
si1=256U;
si0+=si1;
l5=si0;
si0=l2;
f284(i,si0);
si0=l3;
si1=248U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L98;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0+244U);
f15271(i,si0);
L98:;
si0=l5;
f285(i,si0);
si0=l3;
si1=260U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L99;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0+256U);
f15271(i,si0);
L99:;
si0=l3;
si1=32U;
si0+=si1;
f286(i,si0);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+36U);
si0=!(si0);
if(si0){
goto L100;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0+32U);
f15271(i,si0);
L100:;
si0=l3;
si1=276U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si0=!(si0);
if(si0){
goto L101;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0+268U);
l2=si0;
L102:;
{
si0=l2;
f283(i,si0);
si0=l2;
si1=312U;
si0+=si1;
l2=si0;
si0=l5;
si1=-1U;
si0+=si1;
l5=si0;
if(si0){
goto L102;
}
}
L101:;
si0=l3;
si1=272U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L103;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0+268U);
f15271(i,si0);
L103:;
si0=l3;
si1=288U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si0=!(si0);
if(si0){
goto L104;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0+280U);
si1=20U;
si0+=si1;
l2=si0;
L105:;
{
si0=l2;
si1=16U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L106;
}
si0=l2;
si1=12U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
f15271(i,si0);
L106:;
si0=l2;
si1=-12U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
si0=!(si0);
if(si0){
goto L107;
}
si0=l2;
si1=-8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L107;
}
si0=l7;
f15271(i,si0);
L107:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
si0=!(si0);
if(si0){
goto L108;
}
si0=l2;
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L108;
}
si0=l7;
f15271(i,si0);
L108:;
si0=l2;
si1=48U;
si0+=si1;
l2=si0;
si0=l5;
si1=-1U;
si0+=si1;
l5=si0;
if(si0){
goto L105;
}
}
L104:;
si0=l3;
si1=292U;
si0+=si1;
l2=si0;
si0=l3;
si1=284U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L109;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0+280U);
f15271(i,si0);
L109:;
si0=l2;
f287(i,si0);
si0=l3;
si1=296U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L110;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0+292U);
f15271(i,si0);
L110:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+308U);
si0=!(si0);
if(si0){
goto L111;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0+304U);
f15271(i,si0);
L111:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+320U);
si0=!(si0);
if(si0){
goto L112;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0+316U);
f15271(i,si0);
L112:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+332U);
si0=!(si0);
if(si0){
goto L113;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0+328U);
f15271(i,si0);
L113:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+20U);
si0=!(si0);
if(si0){
goto L114;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0+16U);
f15271(i,si0);
L114:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+8U);
l5=si0;
si0=!(si0);
if(si0){
goto L115;
}
si0=l7;
l2=si0;
L116:;
{
si0=l2;
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L117;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0);
f15271(i,si0);
L117:;
si0=l2;
si1=12U;
si0+=si1;
l2=si0;
si0=l5;
si1=-1U;
si0+=si1;
l5=si0;
if(si0){
goto L116;
}
}
L115:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+4U);
si0=!(si0);
if(si0){
goto L1;
}
si0=l7;
f15271(i,si0);
L1:;
si0=l3;
si1=896U;
si0+=si1;
i->g0=si0;
L0:;
}

void f257(rustpythonInstance*i,U32 l0) {
U64 l1=0;
U32 l2=0;
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 l8=0;
U32 si0,si1,si2;
U64 sj0,sj1;
si0=l0;
sj0=i64_load(&i->m0,(U64)si0+16U);
l1=sj0;
sj1=2199023255552ULL;
sj0&=sj1;
sj1=0ULL;
si0=sj0 != sj1;
if(si0){
goto L1;
}
si0=l0;
si1=232U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+224U);
l3=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+212U);
l4=si0;
si0=l0;
si1=220U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si0=!(si0);
if(si0){
goto L2;
}
si0=l5;
si1=120U;
si0*=si1;
l6=si0;
si0=l4;
si1=8U;
si0+=si1;
l7=si0;
L3:;
{
si0=l7;
si1=-4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l8=si0;
si0=!(si0);
if(si0){
goto L4;
}
si0=l7;
si0=i32_load(&i->m0,(U64)si0);
si1=4U;
si0=si0 != si1;
if(si0){
goto L4;
}
si0=l8;
si0=i32_load(&i->m0,(U64)si0);
si1=1886152040U;
si0=si0 == si1;
if(si0){
goto L1;
}
L4:;
si0=l7;
si1=120U;
si0+=si1;
l7=si0;
si0=l6;
si1=-120U;
si0+=si1;
l6=si0;
if(si0){
goto L3;
}
}
L2:;
si0=l2;
si0=!(si0);
if(si0){
goto L5;
}
si0=l2;
si1=272U;
si0*=si1;
l6=si0;
si0=l3;
si1=160U;
si0+=si1;
l7=si0;
L6:;
{
si0=l7;
si1=-4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l8=si0;
si0=!(si0);
if(si0){
goto L7;
}
si0=l7;
si0=i32_load(&i->m0,(U64)si0);
si1=4U;
si0=si0 != si1;
if(si0){
goto L7;
}
si0=l8;
si0=i32_load(&i->m0,(U64)si0);
si1=1886152040U;
si0=si0 == si1;
if(si0){
goto L1;
}
L7:;
si0=l7;
si1=272U;
si0+=si1;
l7=si0;
si0=l6;
si1=-272U;
si0+=si1;
l6=si0;
if(si0){
goto L6;
}
}
L5:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+204U);
l6=si0;
si1=1114112U;
si0=si0 != si1;
if(si0){
goto L8;
}
si0=l5;
si0=!(si0);
if(si0){
goto L10;
}
si0=l5;
si1=120U;
si0*=si1;
l6=si0;
si0=l4;
l7=si0;
L11:;
{
si0=l7;
si0=i32_load(&i->m0,(U64)si0);
si1=104U;
si0=si0 == si1;
if(si0){
goto L9;
}
si0=l7;
si1=120U;
si0+=si1;
l7=si0;
si0=l6;
si1=-120U;
si0+=si1;
l6=si0;
if(si0){
goto L11;
}
}
L10:;
si0=l2;
si0=!(si0);
if(si0){
goto L12;
}
si0=l2;
si1=272U;
si0*=si1;
l6=si0;
si0=l3;
si1=152U;
si0+=si1;
l7=si0;
L13:;
{
si0=l7;
si0=i32_load(&i->m0,(U64)si0);
si1=104U;
si0=si0 == si1;
if(si0){
goto L9;
}
si0=l7;
si1=272U;
si0+=si1;
l7=si0;
si0=l6;
si1=-272U;
si0+=si1;
l6=si0;
if(si0){
goto L13;
}
}
L12:;
si0=104U;
l6=si0;
si0=l0;
si1=104U;
i32_store(&i->m0,(U64)si0+204U,si1);
goto L8;
L9:;
si0=1114112U;
l6=si0;
L8:;
si0=l0;
si1=44U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=23U;
si2=l0;
si2=i32_load(&i->m0,(U64)si2+40U);
l7=si2;
si0=si2?si0:si1;
l8=si0;
si0=l7;
si1=1085338U;
si2=l7;
si0=si2?si0:si1;
l2=si0;
si0=l5;
si1=l0;
si2=216U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
si0=si0 != si1;
if(si0){
goto L14;
}
si0=l0;
si1=212U;
si0+=si1;
si1=l5;
f569(i,si0,si1);
si0=l0;
si0=i32_load(&i->m0,(U64)si0+212U);
l4=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+220U);
l5=si0;
L14:;
si0=l4;
si1=l5;
si2=120U;
si1*=si2;
si0+=si1;
l7=si0;
si1=0U;
i32_store(&i->m0,(U64)si0+108U,si1);
si0=l7;
si1=0U;
i32_store(&i->m0,(U64)si0+96U,si1);
si0=l7;
si1=0U;
i32_store(&i->m0,(U64)si0+84U,si1);
si0=l7;
sj1=1028ULL;
i64_store(&i->m0,(U64)si0+68U,sj1);
si0=l7;
si1=0U;
i32_store(&i->m0,(U64)si0+56U,si1);
si0=l7;
si1=0U;
i32_store(&i->m0,(U64)si0+48U,si1);
si0=l7;
si1=l8;
i32_store(&i->m0,(U64)si0+44U,si1);
si0=l7;
si1=l2;
i32_store(&i->m0,(U64)si0+40U,si1);
si0=l7;
si1=10U;
i32_store(&i->m0,(U64)si0+36U,si1);
si0=l7;
si1=1085328U;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l7;
sj1=4290672329703ULL;
i64_store(&i->m0,(U64)si0+24U,sj1);
si0=l7;
sj1=4ULL;
i64_store(&i->m0,(U64)si0+8U,sj1);
si0=l7;
si1=1084921U;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l7;
si1=l6;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+220U);
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0+220U,si1);
si0=l0;
sj0=i64_load(&i->m0,(U64)si0+16U);
l1=sj0;
L1:;
sj0=l1;
sj1=2048ULL;
sj0&=sj1;
si0=!(sj0);
si0=!(si0);
if(si0){
goto L15;
}
si0=l0;
si1=232U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+224U);
l3=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+212U);
l4=si0;
si0=l0;
si1=220U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si0=!(si0);
if(si0){
goto L16;
}
si0=l5;
si1=120U;
si0*=si1;
l6=si0;
si0=l4;
si1=8U;
si0+=si1;
l7=si0;
L17:;
{
si0=l7;
si1=-4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l8=si0;
si0=!(si0);
if(si0){
goto L18;
}
si0=l7;
si0=i32_load(&i->m0,(U64)si0);
si1=7U;
si0=si0 != si1;
if(si0){
goto L18;
}
si0=l8;
si1=1084914U;
si2=7U;
si0=f15389(i,si0,si1,si2);
si0=!(si0);
if(si0){
goto L15;
}
L18:;
si0=l7;
si1=120U;
si0+=si1;
l7=si0;
si0=l6;
si1=-120U;
si0+=si1;
l6=si0;
if(si0){
goto L17;
}
}
L16:;
si0=l2;
si0=!(si0);
if(si0){
goto L19;
}
si0=l2;
si1=272U;
si0*=si1;
l6=si0;
si0=l3;
si1=160U;
si0+=si1;
l7=si0;
L20:;
{
si0=l7;
si1=-4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l8=si0;
si0=!(si0);
if(si0){
goto L21;
}
si0=l7;
si0=i32_load(&i->m0,(U64)si0);
si1=7U;
si0=si0 != si1;
if(si0){
goto L21;
}
si0=l8;
si1=1084914U;
si2=7U;
si0=f15389(i,si0,si1,si2);
si0=!(si0);
if(si0){
goto L15;
}
L21:;
si0=l7;
si1=272U;
si0+=si1;
l7=si0;
si0=l6;
si1=-272U;
si0+=si1;
l6=si0;
if(si0){
goto L20;
}
}
L19:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+208U);
l6=si0;
si1=1114112U;
si0=si0 != si1;
if(si0){
goto L22;
}
si0=l5;
si0=!(si0);
if(si0){
goto L24;
}
si0=l5;
si1=120U;
si0*=si1;
l6=si0;
si0=l4;
l7=si0;
L25:;
{
si0=l7;
si0=i32_load(&i->m0,(U64)si0);
si1=86U;
si0=si0 == si1;
if(si0){
goto L23;
}
si0=l7;
si1=120U;
si0+=si1;
l7=si0;
si0=l6;
si1=-120U;
si0+=si1;
l6=si0;
if(si0){
goto L25;
}
}
L24:;
si0=l2;
si0=!(si0);
if(si0){
goto L26;
}
si0=l2;
si1=272U;
si0*=si1;
l6=si0;
si0=l3;
si1=152U;
si0+=si1;
l7=si0;
L27:;
{
si0=l7;
si0=i32_load(&i->m0,(U64)si0);
si1=86U;
si0=si0 == si1;
if(si0){
goto L23;
}
si0=l7;
si1=272U;
si0+=si1;
l7=si0;
si0=l6;
si1=-272U;
si0+=si1;
l6=si0;
if(si0){
goto L27;
}
}
L26:;
si0=86U;
l6=si0;
si0=l0;
si1=86U;
i32_store(&i->m0,(U64)si0+208U,si1);
goto L22;
L23:;
si0=1114112U;
l6=si0;
L22:;
si0=l0;
si1=52U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=26U;
si2=l0;
si2=i32_load(&i->m0,(U64)si2+48U);
l7=si2;
si0=si2?si0:si1;
l8=si0;
si0=l7;
si1=1085374U;
si2=l7;
si0=si2?si0:si1;
l2=si0;
si0=l5;
si1=l0;
si2=216U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
si0=si0 != si1;
if(si0){
goto L28;
}
si0=l0;
si1=212U;
si0+=si1;
si1=l5;
f569(i,si0,si1);
si0=l0;
si0=i32_load(&i->m0,(U64)si0+212U);
l4=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+220U);
l5=si0;
L28:;
si0=l4;
si1=l5;
si2=120U;
si1*=si2;
si0+=si1;
l7=si0;
si1=0U;
i32_store(&i->m0,(U64)si0+108U,si1);
si0=l7;
si1=0U;
i32_store(&i->m0,(U64)si0+96U,si1);
si0=l7;
si1=0U;
i32_store(&i->m0,(U64)si0+84U,si1);
si0=l7;
sj1=1028ULL;
i64_store(&i->m0,(U64)si0+68U,sj1);
si0=l7;
si1=0U;
i32_store(&i->m0,(U64)si0+56U,si1);
si0=l7;
si1=0U;
i32_store(&i->m0,(U64)si0+48U,si1);
si0=l7;
si1=l8;
i32_store(&i->m0,(U64)si0+44U,si1);
si0=l7;
si1=l2;
i32_store(&i->m0,(U64)si0+40U,si1);
si0=l7;
si1=13U;
i32_store(&i->m0,(U64)si0+36U,si1);
si0=l7;
si1=1085361U;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l7;
sj1=4290672329703ULL;
i64_store(&i->m0,(U64)si0+24U,sj1);
si0=l7;
sj1=7ULL;
i64_store(&i->m0,(U64)si0+8U,sj1);
si0=l7;
si1=1084914U;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l7;
si1=l6;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+220U);
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0+220U,si1);
L15:;
si0=l0;
si1=244U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
si0=!(si0);
if(si0){
goto L30;
}
si0=l0;
sj0=i64_load(&i->m0,(U64)si0+16U);
sj1=536871936ULL;
sj0&=sj1;
sj1=1024ULL;
si0=sj0 == sj1;
if(si0){
goto L29;
}
L30:;
goto L0;
L29:;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=4U;
si0=f15269(i,si0);
l6=si0;
si0=!(si0);
if(si0){
goto L31;
}
si0=l6;
si1=1886152040U;
i32_store(&i->m0,(U64)si0,si1);
si0=l7;
si1=l0;
si2=240U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
si0=si0 != si1;
if(si0){
goto L32;
}
si0=l0;
si1=236U;
si0+=si1;
si1=l7;
f565(i,si0,si1);
si0=l0;
si0=i32_load(&i->m0,(U64)si0+244U);
l7=si0;
L32:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+236U);
si1=l7;
si2=312U;
si1*=si2;
si0+=si1;
l7=si0;
sj1=58ULL;
i64_store(&i->m0,(U64)si0+124U,sj1);
si0=l7;
si1=1085400U;
i32_store(&i->m0,(U64)si0+120U,si1);
si0=l7;
si1=0U;
i32_store(&i->m0,(U64)si0+112U,si1);
si0=l7;
si1=0U;
i32_store(&i->m0,(U64)si0+104U,si1);
si0=l7;
si1=0U;
i32_store(&i->m0,(U64)si0+96U,si1);
si0=l7;
si1=0U;
i32_store(&i->m0,(U64)si0+84U,si1);
si0=l7;
si1=0U;
i32_store(&i->m0,(U64)si0+64U,si1);
si0=l7;
si1=0U;
i32_store(&i->m0,(U64)si0+56U,si1);
si0=l7;
si1=0U;
i32_store(&i->m0,(U64)si0+48U,si1);
si0=l7;
si1=0U;
i32_store(&i->m0,(U64)si0+40U,si1);
si0=l7;
si1=0U;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l7;
sj1=0ULL;
i64_store(&i->m0,(U64)si0+24U,sj1);
si0=l7;
sj1=16910080ULL;
i64_store(&i->m0,(U64)si0+16U,sj1);
si0=l7;
sj1=0ULL;
i64_store(&i->m0,(U64)si0+8U,sj1);
si0=l7;
sj1=8ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l7;
si1=308U;
si0+=si1;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l7;
si1=300U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l7;
si1=292U;
si0+=si1;
sj1=17179869184ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l7;
si1=284U;
si0+=si1;
sj1=4ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l7;
si1=276U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l7;
si1=268U;
si0+=si1;
sj1=17179869184ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l7;
si1=260U;
si0+=si1;
sj1=8ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l7;
si1=252U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l7;
si1=244U;
si0+=si1;
sj1=17179869184ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l7;
si1=236U;
si0+=si1;
sj1=8ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l7;
si1=228U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l7;
si1=220U;
si0+=si1;
sj1=34359738368ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l7;
si1=212U;
si0+=si1;
sj1=4ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l7;
si1=204U;
si0+=si1;
sj1=4785074605195264ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l7;
si1=192U;
si0+=si1;
sj1=999ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l7;
si1=184U;
si0+=si1;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l7;
si1=172U;
si0+=si1;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l7;
si1=164U;
si0+=si1;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l7;
si1=152U;
si0+=si1;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l7;
si1=144U;
si0+=si1;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l7;
si1=136U;
si0+=si1;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l7;
si1=76U;
si0+=si1;
sj1=17179869188ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l7;
si1=72U;
si0+=si1;
si1=l6;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+244U);
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0+244U,si1);
goto L0;
L31:;
si0=1U;
si1=4U;
f52(i,si0,si1);
UNREACHABLE;
L0:;
}

void f258(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 l8=0;
U32 si0,si1,si2,si3,si4,si5;
U64 sj0,sj1;
si0=i->g0;
si1=64U;
si0-=si1;
l3=si0;
i->g0=si0;
si0=0U;
l4=si0;
si0=l2;
si0=!(si0);
if(si0){
goto L1;
}
si0=1U;
l4=si0;
si0=l1;
si1=128U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L1;
}
si0=l1;
si1=220U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=120U;
si0*=si1;
l5=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+212U);
l2=si0;
L3:;
{
si0=l5;
si0=!(si0);
if(si0){
goto L2;
}
si0=l2;
si1=48U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L1;
}
si0=l5;
si1=-120U;
si0+=si1;
l5=si0;
si0=l2;
si1=70U;
si0+=si1;
l6=si0;
si0=l2;
si1=120U;
si0+=si1;
l2=si0;
si0=l6;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=12U;
si0&=si1;
si0=!(si0);
if(si0){
goto L3;
}
goto L1;
}
L2:;
si0=l1;
si1=232U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=272U;
si0*=si1;
l5=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+224U);
l2=si0;
L5:;
{
si0=l5;
si0=!(si0);
if(si0){
goto L4;
}
si0=l2;
si1=200U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L1;
}
si0=l5;
si1=-272U;
si0+=si1;
l5=si0;
si0=l2;
si1=222U;
si0+=si1;
l6=si0;
si0=l2;
si1=272U;
si0+=si1;
l2=si0;
si0=l6;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=12U;
si0&=si1;
si0=!(si0);
if(si0){
goto L5;
}
goto L1;
}
L4:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+8U);
l7=si1;
si2=248U;
si1*=si2;
si0+=si1;
l8=si0;
si0=0U;
l6=si0;
L6:;
{
si0=l6;
si1=l7;
si0=si0 >= si1;
if(si0){
goto L8;
}
si0=l5;
l2=si0;
L9:;
{
si0=l8;
l5=si0;
si0=l2;
si1=l8;
si0=si0 == si1;
if(si0){
goto L10;
}
si0=l2;
si1=248U;
si0+=si1;
l5=si0;
si0=l2;
sj0=i64_load(&i->m0,(U64)si0);
sj1=2ULL;
si0=sj0 != sj1;
if(si0){
goto L7;
}
L10:;
si0=l5;
l2=si0;
si0=l7;
si1=l6;
si2=1U;
si1+=si2;
l6=si1;
si0=si0 != si1;
if(si0){
goto L9;
}
}
L8:;
si0=l1;
si1=244U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=312U;
si0*=si1;
l2=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+236U);
l5=si0;
L11:;
{
si0=l2;
si1=0U;
si0=si0 != si1;
l4=si0;
si0=l2;
si0=!(si0);
if(si0){
goto L1;
}
si0=l2;
si1=-312U;
si0+=si1;
l2=si0;
si0=l5;
si1=128U;
si0+=si1;
l6=si0;
si0=l5;
si1=312U;
si0+=si1;
l5=si0;
si0=l6;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L11;
}
goto L1;
}
L7:;
si0=l2;
si1=168U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L12;
}
si0=1U;
l4=si0;
goto L1;
L12:;
si0=1U;
l4=si0;
si0=l6;
si1=1U;
si0+=si1;
l6=si0;
si0=l2;
si1=190U;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=12U;
si0&=si1;
si0=!(si0);
if(si0){
goto L6;
}
}
L1:;
si0=l3;
si1=0U;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l3;
sj1=1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=16U;
si0+=si1;
si1=l3;
si2=1085184U;
si3=l1;
si4=0U;
si5=l4;
f387(i,si0,si1,si2,si3,si4,si5);
si0=l3;
si0=i32_load8_u(&i->m0,(U64)si0+40U);
si1=20U;
si0=si0 != si1;
if(si0){
goto L14;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0+4U);
l2=si0;
si0=l3;
si1=48U;
si0+=si1;
si1=l3;
si1=i32_load(&i->m0,(U64)si1);
l5=si1;
si2=l3;
si2=i32_load(&i->m0,(U64)si2+8U);
l6=si2;
f756(i,si0,si1,si2);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+48U);
si0=!(si0);
if(si0){
goto L15;
}
si0=l3;
si1=56U;
si0+=si1;
sj0=i64_load8_u(&i->m0,(U64)si0);
sj1=32ULL;
sj0<<=(sj1&63);
sj1=8589934592ULL;
si0=sj0 == sj1;
if(si0){
goto L15;
}
si0=0U;
l6=si0;
si0=l2;
si0=!(si0);
if(si0){
goto L16;
}
si0=l5;
f15271(i,si0);
L16:;
si0=0U;
l2=si0;
si0=1U;
l5=si0;
L15:;
si0=l0;
si1=15U;
i32_store8(&i->m0,(U64)si0+24U,si1);
si0=l0;
si1=l6;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l0;
si1=l2;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l5;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0+12U,si1);
goto L13;
L14:;
si0=l0;
si1=l3;
sj1=i64_load(&i->m0,(U64)si1+16U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=24U;
si0+=si1;
si1=l3;
si2=16U;
si1+=si2;
si2=24U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=16U;
si0+=si1;
si1=l3;
si2=16U;
si1+=si2;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=8U;
si0+=si1;
si1=l3;
si2=16U;
si1+=si2;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+4U);
si0=!(si0);
if(si0){
goto L13;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
f15271(i,si0);
L13:;
si0=l3;
si1=64U;
si0+=si1;
i->g0=si0;
L0:;
}

U32 f259(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U32 l5=0;
U32 l6=0;
U64 l7=0;
U32 l8=0;
U32 l9=0;
U32 l10=0;
U32 l11=0;
U32 si0,si1,si2,si3;
U64 sj0,sj1,sj2;
si0=i->g0;
si1=32U;
si0-=si1;
l4=si0;
i->g0=si0;
si0=1U;
l5=si0;
si0=1U;
l6=si0;
si0=l0;
sj0=i64_load(&i->m0,(U64)si0+16U);
l7=sj0;
sj1=262144ULL;
sj0&=sj1;
sj1=0ULL;
si0=sj0 != sj1;
if(si0){
goto L1;
}
si0=0U;
l6=si0;
sj0=l7;
sj1=134217728ULL;
sj0&=sj1;
si0=!(sj0);
if(si0){
goto L1;
}
si0=l4;
si1=l1;
si2=l2;
f62(i,si0,si1,si2);
si0=l4;
si1=16U;
si0+=si1;
si1=l4;
si1=i32_load(&i->m0,(U64)si1);
l8=si1;
si2=l4;
si2=i32_load(&i->m0,(U64)si2+4U);
l9=si2;
si3=l8;
si1=si3?si1:si2;
l10=si1;
si2=l4;
si3=8U;
si2+=si3;
si2=i32_load(&i->m0,(U64)si2);
l11=si2;
si3=10U;
f686(i,si0,si1,si2,si3);
si0=l4;
si0=i32_load8_u(&i->m0,(U64)si0+16U);
si0=!(si0);
if(si0){
goto L3;
}
si0=l4;
si1=16U;
si0+=si1;
si1=l10;
si2=l11;
f770(i,si0,si1,si2);
si0=0U;
l6=si0;
si0=l4;
si0=i32_load8_u(&i->m0,(U64)si0+16U);
if(si0){
goto L2;
}
L3:;
si0=l0;
sj1=l7;
sj2=34359738368ULL;
sj1|=sj2;
i64_store(&i->m0,(U64)si0+16U,sj1);
si0=1U;
l6=si0;
L2:;
si0=l8;
si0=!(si0);
if(si0){
goto L1;
}
si0=l9;
si0=!(si0);
if(si0){
goto L1;
}
si0=l8;
f15271(i,si0);
L1:;
si0=0U;
l8=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
si1=-1U;
si0+=si1;
switch(si0){
case 0:
goto L10;
case 1:
goto L9;
case 2:
goto L7;
case 3:
goto L7;
case 4:
goto L7;
case 5:
goto L6;
default:
goto L7;
}
L10:;
si0=l0;
si1=232U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l9=si0;
si0=!(si0);
if(si0){
goto L11;
}
si0=l3;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+4U);
l8=si0;
si0=l9;
si1=272U;
si0*=si1;
l3=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+224U);
si1=220U;
si0+=si1;
l0=si0;
L12:;
{
si0=l0;
si1=-32U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=l5;
si0=si0 != si1;
if(si0){
goto L13;
}
si0=l0;
si1=-36U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=l8;
si2=l5;
si0=f15389(i,si0,si1,si2);
si0=!(si0);
if(si0){
goto L8;
}
L13:;
si0=l0;
si1=272U;
si0+=si1;
l0=si0;
si0=l3;
si1=-272U;
si0+=si1;
l3=si0;
if(si0){
goto L12;
}
}
L11:;
si0=1084925U;
si1=99U;
si2=1085100U;
f703(i,si0,si1,si2);
UNREACHABLE;
L9:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+8U);
l9=si0;
si0=!(si0);
if(si0){
goto L15;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
l0=si0;
si1=l9;
si2=248U;
si1*=si2;
si0+=si1;
l5=si0;
si0=l3;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l10=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+4U);
l11=si0;
si0=0U;
l8=si0;
L16:;
{
si0=l5;
l3=si0;
si0=l0;
si1=l5;
si0=si0 == si1;
if(si0){
goto L18;
}
si0=l0;
si1=248U;
si0+=si1;
l3=si0;
si0=l0;
sj0=i64_load(&i->m0,(U64)si0);
sj1=2ULL;
si0=sj0 != sj1;
if(si0){
goto L17;
}
L18:;
si0=l3;
l0=si0;
si0=l8;
si1=1U;
si0+=si1;
l8=si0;
si1=l9;
si0=si0 != si1;
if(si0){
goto L16;
}
goto L15;
L17:;
si0=l0;
si1=156U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=l10;
si0=si0 != si1;
if(si0){
goto L19;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+152U);
si1=l11;
si2=l10;
si0=f15389(i,si0,si1,si2);
si0=!(si0);
if(si0){
goto L14;
}
L19:;
si0=l3;
l0=si0;
si0=l8;
si1=1U;
si0+=si1;
l8=si0;
si1=l9;
si0=si0 < si1;
if(si0){
goto L16;
}
}
L15:;
si0=1084925U;
si1=99U;
si2=1085116U;
f703(i,si0,si1,si2);
UNREACHABLE;
L14:;
si0=l0;
si1=188U;
si0+=si1;
l0=si0;
L8:;
si0=l6;
si1=l0;
si2=1U;
si1+=si2;
si1=i32_load8_u(&i->m0,(U64)si1);
si2=16U;
si1&=si2;
si2=4U;
si1>>=(si2&31);
si0|=si1;
l8=si0;
L7:;
si0=l4;
si1=16U;
si0+=si1;
si1=l1;
si2=l2;
f756(i,si0,si1,si2);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+16U);
if(si0){
goto L5;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0+20U);
l0=si0;
si0=!(si0);
if(si0){
goto L5;
}
si0=l4;
si1=24U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=2U;
si0=si0 < si1;
if(si0){
goto L21;
}
si0=l0;
si0=i32_load16_u(&i->m0,(U64)si0);
si1=11565U;
si0=si0 == si1;
if(si0){
goto L20;
}
L21:;
si0=l4;
si1=16U;
si0+=si1;
si1=l1;
si2=l2;
f756(i,si0,si1,si2);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+16U);
if(si0){
goto L4;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0+20U);
l0=si0;
si0=!(si0);
if(si0){
goto L4;
}
si0=0U;
l5=si0;
si0=l4;
si1=24U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L6;
}
si0=l2;
si1=1U;
si0=si0 == si1;
if(si0){
goto L6;
}
si0=l0;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=255U;
si0&=si1;
si1=45U;
si0=si0 != si1;
if(si0){
goto L6;
}
si0=l8;
si1=1U;
si0^=si1;
l5=si0;
goto L6;
L20:;
si0=l8;
si1=1U;
si0^=si1;
l5=si0;
si0=l2;
si1=2U;
si0=si0 == si1;
l0=si0;
si1=l8;
si0|=si1;
si0=!(si0);
if(si0){
goto L6;
}
si0=l0;
si1=l5;
si0&=si1;
l5=si0;
L6:;
si0=l4;
si1=32U;
si0+=si1;
i->g0=si0;
si0=l5;
goto L0;
L5:;
si0=1087120U;
si1=35U;
si2=1087384U;
f703(i,si0,si1,si2);
UNREACHABLE;
L4:;
si0=1087120U;
si1=35U;
si2=1087384U;
f703(i,si0,si1,si2);
UNREACHABLE;
L0:;
return si0;
}

void f260(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
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
U64 l25=0;
U64 l26=0;
U32 l27=0;
U64 l28=0;
U32 l29=0;
U32 l30=0;
U32 l31=0;
U32 l32=0;
U64 l33=0;
U32 l34=0;
U32 l35=0;
U32 l36=0;
U32 l37=0;
U32 l38=0;
U32 l39=0;
U32 si0,si1,si2,si3,si4,si5,si6,si7,si8,si9;
U64 sj0,sj1,sj2,sj3,sj4,sj5,sj6,sj7,sj9,sj10;
si0=i->g0;
si1=320U;
si0-=si1;
l4=si0;
i->g0=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+8U);
l5=si0;
si0=!(si0);
if(si0){
goto L1;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si1=l5;
si2=248U;
si1*=si2;
si0+=si1;
l7=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+12U);
l8=si0;
si0=0U;
l9=si0;
si0=l6;
l10=si0;
L2:;
{
si0=l7;
l11=si0;
si0=l10;
si1=l7;
si0=si0 == si1;
if(si0){
goto L4;
}
si0=l10;
si1=248U;
si0+=si1;
l11=si0;
si0=l10;
sj0=i64_load(&i->m0,(U64)si0);
sj1=2ULL;
si0=sj0 != sj1;
if(si0){
goto L3;
}
L4:;
si0=l11;
l10=si0;
si0=l9;
si1=1U;
si0+=si1;
l9=si0;
si1=l5;
si0=si0 != si1;
if(si0){
goto L2;
}
goto L1;
L3:;
si0=l10;
si1=188U;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=2U;
si0&=si1;
si0=!(si0);
if(si0){
goto L6;
}
si0=l8;
si1=l10;
si1=i32_load(&i->m0,(U64)si1+240U);
si0=si0 == si1;
if(si0){
goto L6;
}
si0=0U;
l9=si0;
si0=0U;
l11=si0;
L7:;
{
si0=l6;
l10=si0;
L9:;
{
si0=l7;
l6=si0;
si0=l10;
si1=l7;
si0=si0 == si1;
if(si0){
goto L10;
}
si0=l10;
si1=248U;
si0+=si1;
l6=si0;
si0=l10;
sj0=i64_load(&i->m0,(U64)si0);
sj1=2ULL;
si0=sj0 != sj1;
if(si0){
goto L8;
}
L10:;
si0=l6;
l10=si0;
si0=l5;
si1=l11;
si2=1U;
si1+=si2;
l11=si1;
si0=si0 != si1;
if(si0){
goto L9;
}
}
si0=l9;
l10=si0;
si0=l9;
si0=!(si0);
if(si0){
goto L1;
}
goto L5;
L8:;
si0=l10;
l9=si0;
si0=l11;
si1=1U;
si0+=si1;
l11=si0;
si1=l5;
si0=si0 < si1;
if(si0){
goto L7;
}
goto L5;
}
L6:;
si0=l11;
l10=si0;
si0=l9;
si1=1U;
si0+=si1;
l9=si0;
si1=l5;
si0=si0 < si1;
if(si0){
goto L2;
}
goto L1;
L5:;
}
si0=l10;
si1=189U;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=64U;
si0&=si1;
if(si0){
goto L1;
}
si0=l1;
si1=l1;
sj1=i64_load(&i->m0,(U64)si1+16U);
sj2=268435456ULL;
sj1|=sj2;
i64_store(&i->m0,(U64)si0+16U,sj1);
L1:;
si0=0U;
l12=si0;
si0=l1;
si1=220U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=l1;
si2=232U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
si0|=si1;
if(si0){
goto L11;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+12U);
si0=!(si0);
l12=si0;
L11:;
si0=l3;
si1=8U;
si0+=si1;
l13=si0;
si0=l3;
si1=4U;
si0+=si1;
l14=si0;
si0=l1;
f257(i,si0);
si0=l1;
si1=272U;
si0+=si1;
l15=si0;
si0=l1;
si1=296U;
si0+=si1;
l16=si0;
si0=l4;
si1=185U;
si0+=si1;
l17=si0;
si0=l4;
si1=160U;
si0+=si1;
si1=12U;
si0+=si1;
l18=si0;
si0=5U;
l19=si0;
si0=l1;
si1=20U;
si0+=si1;
l20=si0;
si0=l1;
si1=18U;
si0+=si1;
l21=si0;
si0=0U;
l22=si0;
si0=1U;
l23=si0;
L21:;
{
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
l9=si0;
si0=l3;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l13;
l11=si0;
si0=l14;
l10=si0;
si0=l9;
if(si0){
goto L22;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0+16U);
l11=si0;
si0=i32_load(&i->m0,(U64)si0+8U);
l10=si0;
si1=l11;
si1=i32_load(&i->m0,(U64)si1+12U);
si0=si0 == si1;
if(si0){
goto L20;
}
si0=l11;
si1=l10;
si2=12U;
si1+=si2;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l10;
si1=4U;
si0+=si1;
l11=si0;
L22:;
si0=l10;
si0=i32_load(&i->m0,(U64)si0);
l24=si0;
si0=!(si0);
if(si0){
goto L20;
}
si0=l11;
sj0=i64_load(&i->m0,(U64)si0);
l25=sj0;
si0=l1;
si1=l1;
sj1=i64_load(&i->m0,(U64)si1+16U);
sj2=-34359738369ULL;
sj1&=sj2;
i64_store(&i->m0,(U64)si0+16U,sj1);
si0=l4;
si1=l7;
i32_store(&i->m0,(U64)si0+168U,si1);
si0=l4;
si1=l5;
i32_store(&i->m0,(U64)si0+164U,si1);
si0=l4;
si1=l19;
i32_store(&i->m0,(U64)si0+160U,si1);
si0=l1;
si1=l24;
sj2=l25;
sj3=32ULL;
sj2>>=(sj3&63);
l26=sj2;
si2=(U32)(sj2);
l27=si2;
si3=l4;
si4=160U;
si3+=si4;
si0=f259(i,si0,si1,si2,si3);
l10=si0;
si0=l20;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=4U;
si0&=si1;
if(si0){
goto L39;
}
si0=l4;
si1=160U;
si0+=si1;
si1=l24;
si2=l27;
f756(i,si0,si1,si2);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+160U);
if(si0){
goto L35;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0+164U);
l11=si0;
si0=!(si0);
if(si0){
goto L35;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0+168U);
si1=2U;
si0=si0 < si1;
if(si0){
goto L39;
}
si0=l10;
si1=l27;
si2=2U;
si1=si1 == si2;
si2=l11;
si2=i32_load16_u(&i->m0,(U64)si2);
si3=11565U;
si2=si2 == si3;
si1&=si2;
si0&=si1;
if(si0){
goto L38;
}
L39:;
si0=l20;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=4U;
si0&=si1;
if(si0){
goto L25;
}
si0=l19;
si1=-1U;
si0+=si1;
si1=2U;
si0=si0 < si1;
if(si0){
goto L40;
}
si0=l4;
si1=160U;
si0+=si1;
si1=l1;
si2=l24;
si3=l27;
f255(i,si0,si1,si2,si3);
si0=l4;
si0=i32_load8_u(&i->m0,(U64)si0+160U);
if(si0){
goto L36;
}
L40:;
si0=l10;
if(si0){
goto L41;
}
si0=l19;
si1=1U;
si0=si0 != si1;
if(si0){
goto L25;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+232U);
l11=si0;
si0=!(si0);
if(si0){
goto L42;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+224U);
l10=si0;
si0=l11;
si1=272U;
si0*=si1;
l11=si0;
L43:;
{
si0=l10;
si1=188U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=l7;
si0=si0 != si1;
if(si0){
goto L44;
}
si0=l10;
si1=184U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=l5;
si2=l7;
si0=f15389(i,si0,si1,si2);
si0=!(si0);
if(si0){
goto L27;
}
L44:;
si0=l10;
si1=272U;
si0+=si1;
l10=si0;
si0=l11;
si1=-272U;
si0+=si1;
l11=si0;
if(si0){
goto L43;
}
}
L42:;
si0=1084925U;
si1=99U;
si2=1085136U;
f703(i,si0,si1,si2);
UNREACHABLE;
L41:;
si0=l1;
sj0=i64_load(&i->m0,(U64)si0+16U);
l28=sj0;
si0=0U;
l29=si0;
si0=0U;
l11=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+220U);
l10=si0;
si0=!(si0);
if(si0){
goto L45;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+212U);
l11=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+36U);
si1=0U;
si2=l1;
si2=i32_load(&i->m0,(U64)si2+32U);
l6=si2;
si0=si2?si0:si1;
l9=si0;
si0=l10;
si1=120U;
si0*=si1;
l10=si0;
si0=l6;
si1=1084668U;
si2=l6;
si0=si2?si0:si1;
l6=si0;
L46:;
{
si0=l11;
si1=36U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=l9;
si0=si0 != si1;
if(si0){
goto L47;
}
si0=l11;
si1=32U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=l6;
si2=l9;
si0=f15389(i,si0,si1,si2);
si0=!(si0);
if(si0){
goto L45;
}
L47:;
si0=l11;
si1=120U;
si0+=si1;
l11=si0;
si0=l10;
si1=-120U;
si0+=si1;
l10=si0;
if(si0){
goto L46;
}
}
si0=0U;
l11=si0;
L45:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+232U);
l9=si0;
si0=!(si0);
if(si0){
goto L48;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+224U);
l10=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+36U);
si1=0U;
si2=l1;
si2=i32_load(&i->m0,(U64)si2+32U);
l8=si2;
si0=si2?si0:si1;
l6=si0;
si0=l9;
si1=272U;
si0*=si1;
l9=si0;
si0=l8;
si1=1084668U;
si2=l8;
si0=si2?si0:si1;
l8=si0;
L49:;
{
si0=l10;
si1=188U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=l6;
si0=si0 != si1;
if(si0){
goto L50;
}
si0=l10;
si1=184U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=l8;
si2=l6;
si0=f15389(i,si0,si1,si2);
if(si0){
goto L50;
}
si0=l10;
l29=si0;
goto L48;
L50:;
si0=l10;
si1=272U;
si0+=si1;
l10=si0;
si0=l9;
si1=-272U;
si0+=si1;
l9=si0;
if(si0){
goto L49;
}
}
L48:;
sj0=l28;
sj1=1099511627776ULL;
sj0&=sj1;
l28=sj0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+8U);
l30=si0;
si0=!(si0);
if(si0){
goto L52;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l10=si0;
si1=l30;
si2=248U;
si1*=si2;
si0+=si1;
l6=si0;
si0=0U;
l8=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+36U);
si1=0U;
si2=l1;
si2=i32_load(&i->m0,(U64)si2+32U);
l9=si2;
si0=si2?si0:si1;
l31=si0;
si0=l9;
si1=1084668U;
si2=l9;
si0=si2?si0:si1;
l32=si0;
L53:;
{
si0=l6;
l9=si0;
si0=l10;
si1=l6;
si0=si0 == si1;
if(si0){
goto L55;
}
si0=l10;
si1=248U;
si0+=si1;
l9=si0;
si0=l10;
sj0=i64_load(&i->m0,(U64)si0);
sj1=2ULL;
si0=sj0 != sj1;
if(si0){
goto L54;
}
L55:;
si0=l9;
l10=si0;
si0=l8;
si1=1U;
si0+=si1;
l8=si0;
si1=l30;
si0=si0 != si1;
if(si0){
goto L53;
}
goto L52;
L54:;
si0=l10;
si1=156U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=l31;
si0=si0 != si1;
if(si0){
goto L56;
}
si0=l10;
si0=i32_load(&i->m0,(U64)si0+152U);
si1=l32;
si2=l31;
si0=f15389(i,si0,si1,si2);
si0=!(si0);
if(si0){
goto L51;
}
L56:;
si0=l9;
l10=si0;
si0=l8;
si1=1U;
si0+=si1;
l8=si0;
si1=l30;
si0=si0 < si1;
if(si0){
goto L53;
}
}
L52:;
si0=0U;
l10=si0;
L51:;
si0=l2;
si1=l11;
si2=l29;
si3=l10;
si4=l29;
si2=si4?si2:si3;
si3=l11;
si1=si3?si1:si2;
si2=1085684U;
si3=1085552U;
si4=1085808U;
si5=l29;
si3=si5?si3:si4;
si4=l11;
si2=si4?si2:si3;
si3=l16;
si4=l15;
sj5=l28;
sj6=0ULL;
si5=sj5 != sj6;
f637(i,si0,si1,si2,si3,si4,si5);
si0=l4;
si1=160U;
si0+=si1;
si1=l24;
si2=l27;
f756(i,si0,si1,si2);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+160U);
if(si0){
goto L34;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0+164U);
l10=si0;
si0=!(si0);
if(si0){
goto L34;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0+168U);
si1=2U;
si0=si0 < si1;
if(si0){
goto L59;
}
si0=l10;
si0=i32_load16_u(&i->m0,(U64)si0);
si1=11565U;
si0=si0 == si1;
if(si0){
goto L58;
}
L59:;
si0=l4;
si1=160U;
si0+=si1;
si1=l24;
si2=l27;
f756(i,si0,si1,si2);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+160U);
if(si0){
goto L33;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0+164U);
l10=si0;
si0=!(si0);
if(si0){
goto L33;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0+168U);
si0=!(si0);
if(si0){
goto L25;
}
si0=l27;
si1=1U;
si0=si0 == si1;
if(si0){
goto L25;
}
si0=l10;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=255U;
si0&=si1;
si1=45U;
si0=si0 != si1;
if(si0){
goto L25;
}
si0=l4;
si1=160U;
si0+=si1;
si1=l1;
si2=l2;
si3=l24;
si4=l27;
f261(i,si0,si1,si2,si3,si4);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+168U);
l7=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+164U);
l5=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+160U);
l19=si0;
si0=l4;
si0=i32_load8_u(&i->m0,(U64)si0+184U);
l10=si0;
si1=20U;
si0=si0 != si1;
if(si0){
goto L37;
}
si0=l19;
switch(si0){
case 0:
goto L26;
case 1:
goto L26;
case 2:
goto L25;
case 3:
goto L25;
case 4:
goto L57;
case 5:
goto L25;
case 6:
goto L26;
default:
goto L25;
}
L58:;
si0=l1;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+308U);
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0+308U,si1);
si0=l4;
si1=160U;
si0+=si1;
si1=l24;
si2=l27;
f756(i,si0,si1,si2);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+160U);
if(si0){
goto L32;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0+164U);
l11=si0;
si0=!(si0);
if(si0){
goto L32;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0+168U);
l10=si0;
L60:;
{
si0=l10;
si0=!(si0);
if(si0){
goto L31;
}
si0=l10;
si1=-1U;
si0+=si1;
l10=si0;
si0=l11;
si0=i32_load8_u(&i->m0,(U64)si0);
l7=si0;
si0=l11;
si1=1U;
si0+=si1;
l11=si0;
si0=l7;
si1=61U;
si0=si0 != si1;
if(si0){
goto L60;
}
}
si0=l4;
si1=40U;
si0+=si1;
si1=l24;
si2=l27;
si3=45U;
f369(i,si0,si1,si2,si3);
si0=l4;
si1=160U;
si0+=si1;
si1=l4;
si1=i32_load(&i->m0,(U64)si1+40U);
si2=l4;
si2=i32_load(&i->m0,(U64)si2+44U);
si3=61U;
f368(i,si0,si1,si2,si3);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+172U);
l30=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+168U);
l8=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+164U);
l11=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+160U);
l5=si0;
goto L28;
L57:;
si0=l4;
si1=288U;
si0+=si1;
si1=l24;
sj2=l26;
si2=(U32)(sj2);
l27=si2;
f62(i,si0,si1,si2);
si0=l4;
si1=160U;
si0+=si1;
si1=l4;
si1=i32_load(&i->m0,(U64)si1+288U);
l10=si1;
si2=l4;
si2=i32_load(&i->m0,(U64)si2+292U);
l9=si2;
si3=l10;
si1=si3?si1:si2;
si2=l4;
si2=i32_load(&i->m0,(U64)si2+296U);
si3=10U;
f686(i,si0,si1,si2,si3);
si0=l4;
si0=i32_load8_u(&i->m0,(U64)si0+160U);
l11=si0;
si0=l10;
si0=!(si0);
if(si0){
goto L61;
}
si0=l9;
si0=!(si0);
if(si0){
goto L61;
}
si0=l10;
f15271(i,si0);
L61:;
si0=4U;
l19=si0;
si0=l11;
si1=255U;
si0&=si1;
si0=!(si0);
if(si0){
goto L25;
}
si0=l4;
si1=288U;
si0+=si1;
si1=l24;
si2=l27;
f62(i,si0,si1,si2);
si0=l4;
si1=160U;
si0+=si1;
si1=l4;
si1=i32_load(&i->m0,(U64)si1+288U);
l10=si1;
si2=l4;
si2=i32_load(&i->m0,(U64)si2+292U);
l9=si2;
si3=l10;
si1=si3?si1:si2;
si2=l4;
si2=i32_load(&i->m0,(U64)si2+296U);
f770(i,si0,si1,si2);
si0=l4;
si0=i32_load8_u(&i->m0,(U64)si0+160U);
l11=si0;
si0=l10;
si0=!(si0);
if(si0){
goto L62;
}
si0=l9;
si0=!(si0);
if(si0){
goto L62;
}
si0=l10;
f15271(i,si0);
L62:;
si0=l11;
si1=255U;
si0&=si1;
si0=!(si0);
if(si0){
goto L25;
}
si0=l4;
si1=288U;
si0+=si1;
si1=l24;
sj2=l26;
si2=(U32)(sj2);
f62(i,si0,si1,si2);
si0=l4;
si1=296U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+292U);
l11=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+288U);
l10=si0;
si0=l4;
si1=160U;
si0+=si1;
si1=l1;
si2=l2;
si3=0U;
si4=l10;
f558(i,si0,si1,si2,si3,si4);
si0=l0;
si1=l10;
si2=l11;
si3=l10;
si1=si3?si1:si2;
si2=l7;
si3=1084668U;
si4=0U;
si5=l4;
si5=i32_load(&i->m0,(U64)si5+160U);
l9=si5;
si6=l4;
si6=i32_load(&i->m0,(U64)si6+168U);
si7=l1;
sj7=i64_load(&i->m0,(U64)si7+16U);
l26=sj7;
si7=(U32)(sj7);
si8=23U;
si7>>=(si8&31);
si8=1U;
si7&=si8;
si8=2U;
sj9=l26;
sj10=33554432ULL;
sj9&=sj10;
si9=!(sj9);
si7=si9?si7:si8;
f603(i,si0,si1,si2,si3,si4,si5,si6,si7);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+164U);
si0=!(si0);
if(si0){
goto L63;
}
si0=l9;
f15271(i,si0);
L63:;
si0=l10;
si0=!(si0);
if(si0){
goto L24;
}
si0=l11;
si0=!(si0);
if(si0){
goto L24;
}
si0=l10;
f15271(i,si0);
goto L24;
L38:;
si0=l1;
si1=l1;
sj1=i64_load(&i->m0,(U64)si1+16U);
sj2=17179869184ULL;
sj1|=sj2;
i64_store(&i->m0,(U64)si0+16U,sj1);
goto L26;
L37:;
si0=l0;
si1=l17;
si1=i32_load16_u(&i->m0,(U64)si1);
i32_store16(&i->m0,(U64)si0+25U,si1);
si0=l4;
si1=64U;
si0+=si1;
si1=8U;
si0+=si1;
si1=l18;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
l11=si1;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=27U;
si0+=si1;
si1=l17;
si2=2U;
si1+=si2;
si1=i32_load8_u(&i->m0,(U64)si1);
i32_store8(&i->m0,(U64)si0,si1);
si0=l4;
si1=l18;
sj1=i64_load(&i->m0,(U64)si1);
l26=sj1;
i64_store(&i->m0,(U64)si0+64U,sj1);
si0=l0;
si1=l7;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l0;
si1=l5;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l19;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
sj1=l26;
i64_store(&i->m0,(U64)si0+12U,sj1);
si0=l0;
si1=20U;
si0+=si1;
si1=l11;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l10;
i32_store8(&i->m0,(U64)si0+24U,si1);
goto L24;
L36:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+164U);
l10=si0;
si0=!(si0);
if(si0){
goto L29;
}
si0=1U;
l27=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+168U);
l8=si0;
switch(si0){
case 0:
goto L64;
case 1:
goto L66;
case 2:
goto L66;
case 3:
goto L66;
case 4:
goto L67;
default:
goto L66;
}
L67:;
si0=l10;
si0=i32_load(&i->m0,(U64)si0);
si1=1886152040U;
si0=si0 != si1;
if(si0){
goto L65;
}
si0=l1;
si1=17U;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=4U;
si0&=si1;
si0=!(si0);
if(si0){
goto L65;
}
si0=l4;
si1=160U;
si0+=si1;
si1=l1;
si2=l3;
f256(i,si0,si1,si2);
si0=l4;
si0=i32_load8_u(&i->m0,(U64)si0+184U);
l11=si0;
si1=20U;
si0=si0 == si1;
if(si0){
goto L65;
}
si0=l0;
si1=l4;
si1=i32_load16_u(&i->m0,(U64)si1+185U);
i32_store16(&i->m0,(U64)si0+25U,si1);
si0=l4;
si1=288U;
si0+=si1;
si1=16U;
si0+=si1;
si1=l4;
si2=160U;
si1+=si2;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
l26=sj1;
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=288U;
si0+=si1;
si1=8U;
si0+=si1;
si1=l4;
si2=160U;
si1+=si2;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
l28=sj1;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=27U;
si0+=si1;
si1=l4;
si2=160U;
si1+=si2;
si2=27U;
si1+=si2;
si1=i32_load8_u(&i->m0,(U64)si1);
i32_store8(&i->m0,(U64)si0,si1);
si0=l4;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1+160U);
l33=sj1;
i64_store(&i->m0,(U64)si0+288U,sj1);
si0=l0;
si1=16U;
si0+=si1;
sj1=l26;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=8U;
si0+=si1;
sj1=l28;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
sj1=l33;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=l11;
i32_store8(&i->m0,(U64)si0+24U,si1);
goto L24;
L66:;
si0=l8;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L18;
}
L65:;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=l8;
si0=f15269(i,si0);
l27=si0;
si0=!(si0);
if(si0){
goto L30;
}
L64:;
si0=l27;
si1=l10;
si2=l8;
si0=f15390(i,si0,si1,si2);
sj0=l25;
si0=(U32)(sj0);
si0=!(si0);
if(si0){
goto L19;
}
si0=l24;
f15271(i,si0);
goto L19;
L35:;
si0=1087120U;
si1=35U;
si2=1087384U;
f703(i,si0,si1,si2);
UNREACHABLE;
L34:;
si0=1087120U;
si1=35U;
si2=1087384U;
f703(i,si0,si1,si2);
UNREACHABLE;
L33:;
si0=1087120U;
si1=35U;
si2=1087384U;
f703(i,si0,si1,si2);
UNREACHABLE;
L32:;
si0=1087120U;
si1=35U;
si2=1087384U;
f703(i,si0,si1,si2);
UNREACHABLE;
L31:;
si0=l4;
si1=32U;
si0+=si1;
si1=l24;
si2=l27;
si3=45U;
f369(i,si0,si1,si2,si3);
si0=0U;
l8=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+36U);
l11=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+32U);
l5=si0;
goto L28;
L30:;
si0=1U;
si1=l8;
f52(i,si0,si1);
UNREACHABLE;
L29:;
si0=1084925U;
si1=99U;
si2=1085152U;
f703(i,si0,si1,si2);
UNREACHABLE;
L28:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+232U);
l10=si0;
si0=!(si0);
if(si0){
goto L79;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+224U);
l9=si0;
si1=l10;
si2=272U;
si1*=si2;
si0+=si1;
l6=si0;
L80:;
{
si0=l9;
si1=156U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l10=si0;
si0=!(si0);
if(si0){
goto L81;
}
si0=l11;
si1=l9;
si2=160U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
si0=si0 != si1;
if(si0){
goto L82;
}
si0=l5;
si1=l10;
si2=l11;
si0=f15389(i,si0,si1,si2);
si0=!(si0);
if(si0){
goto L78;
}
L82:;
si0=l9;
si1=164U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l10=si0;
si0=!(si0);
if(si0){
goto L81;
}
si0=l9;
si1=172U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
si0=!(si0);
if(si0){
goto L81;
}
si0=l7;
si1=12U;
si0*=si1;
l7=si0;
L83:;
{
si0=l11;
si1=l10;
si2=4U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
si0=si0 != si1;
if(si0){
goto L84;
}
si0=l5;
si1=l10;
si1=i32_load(&i->m0,(U64)si1);
si2=l11;
si0=f15389(i,si0,si1,si2);
si0=!(si0);
if(si0){
goto L78;
}
L84:;
si0=l10;
si1=12U;
si0+=si1;
l10=si0;
si0=l7;
si1=-12U;
si0+=si1;
l7=si0;
if(si0){
goto L83;
}
}
L81:;
si0=l9;
si1=272U;
si0+=si1;
l9=si0;
si1=l6;
si0=si0 != si1;
if(si0){
goto L80;
}
}
L79:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+220U);
l10=si0;
si0=!(si0);
if(si0){
goto L85;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+212U);
l9=si0;
si1=l10;
si2=120U;
si1*=si2;
si0+=si1;
l6=si0;
L86:;
{
si0=l9;
si0=i32_load(&i->m0,(U64)si0+4U);
l10=si0;
si0=!(si0);
if(si0){
goto L87;
}
si0=l11;
si1=l9;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
si0=si0 != si1;
if(si0){
goto L88;
}
si0=l5;
si1=l10;
si2=l11;
si0=f15389(i,si0,si1,si2);
si0=!(si0);
if(si0){
goto L77;
}
L88:;
si0=l9;
si0=i32_load(&i->m0,(U64)si0+12U);
l10=si0;
si0=!(si0);
if(si0){
goto L87;
}
si0=l9;
si1=20U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
si0=!(si0);
if(si0){
goto L87;
}
si0=l7;
si1=12U;
si0*=si1;
l7=si0;
L89:;
{
si0=l11;
si1=l10;
si2=4U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
si0=si0 != si1;
if(si0){
goto L90;
}
si0=l5;
si1=l10;
si1=i32_load(&i->m0,(U64)si1);
si2=l11;
si0=f15389(i,si0,si1,si2);
si0=!(si0);
if(si0){
goto L77;
}
L90:;
si0=l10;
si1=12U;
si0+=si1;
l10=si0;
si0=l7;
si1=-12U;
si0+=si1;
l7=si0;
if(si0){
goto L89;
}
}
L87:;
si0=l9;
si1=120U;
si0+=si1;
l9=si0;
si1=l6;
si0=si0 != si1;
if(si0){
goto L86;
}
}
L85:;
si0=l1;
sj0=i64_load(&i->m0,(U64)si0+16U);
l26=sj0;
sj1=262144ULL;
sj0&=sj1;
si0=!(sj0);
if(si0){
goto L76;
}
si0=3U;
l19=si0;
goto L68;
L78:;
si0=l1;
si1=l1;
sj1=i64_load(&i->m0,(U64)si1+16U);
sj2=137438953472ULL;
sj1|=sj2;
i64_store(&i->m0,(U64)si0+16U,sj1);
si0=l4;
si1=160U;
si0+=si1;
si1=l1;
si2=l8;
si3=l30;
si4=l9;
si5=l8;
si6=0U;
si5=si5 != si6;
si6=l2;
f262(i,si0,si1,si2,si3,si4,si5,si6);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+168U);
l34=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+164U);
l35=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+160U);
l19=si0;
si0=l4;
si0=i32_load8_u(&i->m0,(U64)si0+184U);
l11=si0;
si1=20U;
si0=si0 == si1;
if(si0){
goto L71;
}
si0=l4;
si1=216U;
si0+=si1;
si1=l4;
si2=180U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=146U;
si0+=si1;
si1=l4;
si2=187U;
si1+=si2;
si1=i32_load8_u(&i->m0,(U64)si1);
i32_store8(&i->m0,(U64)si0,si1);
si0=l4;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1+172U);
i64_store(&i->m0,(U64)si0+208U,sj1);
si0=l4;
si1=l4;
si1=i32_load16_u(&i->m0,(U64)si1+185U);
i32_store16(&i->m0,(U64)si0+144U,si1);
goto L72;
L77:;
si0=l1;
si1=l1;
sj1=i64_load(&i->m0,(U64)si1+16U);
l26=sj1;
sj2=137438953472ULL;
sj1|=sj2;
i64_store(&i->m0,(U64)si0+16U,sj1);
si0=l11;
si1=-4U;
si0+=si1;
switch(si0){
case 0:
goto L96;
case 1:
goto L93;
case 2:
goto L93;
case 3:
goto L95;
default:
goto L93;
}
L96:;
si0=l5;
si0=i32_load(&i->m0,(U64)si0);
si1=1886152040U;
si0=si0 != si1;
if(si0){
goto L93;
}
sj0=l26;
sj1=256ULL;
sj0&=sj1;
si0=!(sj0);
if(si0){
goto L93;
}
si0=l4;
si1=160U;
si0+=si1;
si1=l1;
si2=1U;
f258(i,si0,si1,si2);
goto L94;
L95:;
si0=l5;
si1=1084914U;
si2=7U;
si0=f15389(i,si0,si1,si2);
if(si0){
goto L93;
}
sj0=l26;
sj1=512ULL;
sj0&=sj1;
si0=!(sj0);
if(si0){
goto L93;
}
si0=l4;
si1=160U;
si0+=si1;
si1=l1;
si2=1U;
f263(i,si0,si1,si2);
L94:;
si0=l4;
si0=i32_load8_u(&i->m0,(U64)si0+184U);
l11=si0;
si1=20U;
si0=si0 != si1;
if(si0){
goto L92;
}
L93:;
si0=l4;
si1=160U;
si0+=si1;
si1=l1;
si2=l9;
si3=l2;
f264(i,si0,si1,si2,si3);
si0=l4;
si0=i32_load8_u(&i->m0,(U64)si0+184U);
l11=si0;
si1=20U;
si0=si0 != si1;
if(si0){
goto L91;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+32U);
l10=si0;
si0=!(si0);
if(si0){
goto L75;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+36U);
l11=si0;
si1=l9;
si2=36U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
si0=si0 != si1;
if(si0){
goto L75;
}
si0=l10;
si1=l9;
si1=i32_load(&i->m0,(U64)si1+32U);
si2=l11;
si0=f15389(i,si0,si1,si2);
if(si0){
goto L75;
}
si0=0U;
l19=si0;
si0=l34;
l7=si0;
si0=l35;
l5=si0;
goto L26;
L92:;
si0=l4;
si1=216U;
si0+=si1;
si1=l4;
si2=180U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=146U;
si0+=si1;
si1=l4;
si2=187U;
si1+=si2;
si1=i32_load8_u(&i->m0,(U64)si1);
i32_store8(&i->m0,(U64)si0,si1);
si0=l4;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1+172U);
i64_store(&i->m0,(U64)si0+208U,sj1);
si0=l4;
si1=l4;
si1=i32_load16_u(&i->m0,(U64)si1+185U);
i32_store16(&i->m0,(U64)si0+144U,si1);
goto L73;
L91:;
si0=l4;
si1=216U;
si0+=si1;
si1=l4;
si2=180U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=146U;
si0+=si1;
si1=l4;
si2=187U;
si1+=si2;
si1=i32_load8_u(&i->m0,(U64)si1);
i32_store8(&i->m0,(U64)si0,si1);
si0=l4;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1+172U);
i64_store(&i->m0,(U64)si0+208U,sj1);
si0=l4;
si1=l4;
si1=i32_load16_u(&i->m0,(U64)si1+185U);
i32_store16(&i->m0,(U64)si0+144U,si1);
goto L73;
L76:;
sj0=l26;
sj1=34359738368ULL;
sj0&=sj1;
sj1=0ULL;
si0=sj0 == sj1;
if(si0){
goto L97;
}
si0=4U;
l19=si0;
goto L68;
L97:;
si0=l4;
si1=256U;
si0+=si1;
si1=l3;
f311(i,si0,si1);
si0=l4;
si1=224U;
si0+=si1;
si1=l4;
si1=i32_load(&i->m0,(U64)si1+256U);
l9=si1;
si2=l9;
si3=l4;
si3=i32_load(&i->m0,(U64)si3+264U);
l7=si3;
si4=12U;
si3*=si4;
si2+=si3;
f306(i,si0,si1,si2);
si0=l4;
si1=288U;
si0+=si1;
si1=l5;
si2=l11;
f756(i,si0,si1,si2);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+288U);
if(si0){
goto L74;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0+292U);
l10=si0;
si0=!(si0);
if(si0){
goto L74;
}
si0=l4;
si1=160U;
si0+=si1;
si1=l1;
si2=l10;
si3=l4;
si3=i32_load(&i->m0,(U64)si3+296U);
si4=l2;
si5=l4;
si5=i32_load(&i->m0,(U64)si5+224U);
l6=si5;
si6=l4;
si6=i32_load(&i->m0,(U64)si6+232U);
f265(i,si0,si1,si2,si3,si4,si5,si6);
si0=5U;
l19=si0;
si0=l4;
si0=i32_load8_u(&i->m0,(U64)si0+184U);
l11=si0;
si1=20U;
si0=si0 == si1;
l5=si0;
if(si0){
goto L98;
}
si0=l4;
si1=208U;
si0+=si1;
si1=8U;
si0+=si1;
si1=l18;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=144U;
si0+=si1;
si1=2U;
si0+=si1;
si1=l17;
si2=2U;
si1+=si2;
si1=i32_load8_u(&i->m0,(U64)si1);
i32_store8(&i->m0,(U64)si0,si1);
si0=l4;
si1=l18;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+208U,sj1);
si0=l4;
si1=l17;
si1=i32_load16_u(&i->m0,(U64)si1);
i32_store16(&i->m0,(U64)si0+144U,si1);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+168U);
l34=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+164U);
l35=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+160U);
l19=si0;
L98:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+228U);
si0=!(si0);
if(si0){
goto L99;
}
si0=l6;
f15271(i,si0);
L99:;
si0=l7;
si0=!(si0);
if(si0){
goto L100;
}
si0=l9;
l10=si0;
L101:;
{
si0=l10;
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L102;
}
si0=l10;
si0=i32_load(&i->m0,(U64)si0);
f15271(i,si0);
L102:;
si0=l10;
si1=12U;
si0+=si1;
l10=si0;
si0=l7;
si1=-1U;
si0+=si1;
l7=si0;
if(si0){
goto L101;
}
}
L100:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+260U);
si0=!(si0);
if(si0){
goto L103;
}
si0=l9;
f15271(i,si0);
L103:;
si0=l5;
si0=!(si0);
if(si0){
goto L72;
}
goto L69;
L75:;
si0=l9;
si1=36U;
si0+=si1;
l10=si0;
si0=l9;
si1=32U;
si0+=si1;
l11=si0;
si0=0U;
l19=si0;
goto L70;
L74:;
si0=1085458U;
si1=35U;
si2=1085496U;
f703(i,si0,si1,si2);
UNREACHABLE;
L73:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+168U);
l34=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+164U);
l35=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+160U);
l19=si0;
L72:;
si0=l0;
si1=l4;
si1=i32_load16_u(&i->m0,(U64)si1+144U);
i32_store16(&i->m0,(U64)si0+25U,si1);
si0=l4;
si1=48U;
si0+=si1;
si1=8U;
si0+=si1;
si1=l4;
si2=208U;
si1+=si2;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
l10=si1;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=27U;
si0+=si1;
si1=l4;
si2=146U;
si1+=si2;
si1=i32_load8_u(&i->m0,(U64)si1);
i32_store8(&i->m0,(U64)si0,si1);
si0=l4;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1+208U);
l26=sj1;
i64_store(&i->m0,(U64)si0+48U,sj1);
si0=l0;
si1=l34;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l0;
si1=l35;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l19;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
sj1=l26;
i64_store(&i->m0,(U64)si0+12U,sj1);
si0=l0;
si1=20U;
si0+=si1;
si1=l10;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l11;
i32_store8(&i->m0,(U64)si0+24U,si1);
goto L24;
L71:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+32U);
l10=si0;
si0=!(si0);
if(si0){
goto L104;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+36U);
l11=si0;
si1=l9;
si2=188U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
si0=si0 != si1;
if(si0){
goto L104;
}
si0=l10;
si1=l9;
si1=i32_load(&i->m0,(U64)si1+184U);
si2=l11;
si0=f15389(i,si0,si1,si2);
si0=!(si0);
if(si0){
goto L69;
}
L104:;
si0=l9;
si1=188U;
si0+=si1;
l10=si0;
si0=l9;
si1=184U;
si0+=si1;
l11=si0;
L70:;
si0=l11;
si0=i32_load(&i->m0,(U64)si0);
l11=si0;
si0=l1;
si1=l10;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0+36U,si1);
si0=l1;
si1=l11;
i32_store(&i->m0,(U64)si0+32U,si1);
L69:;
si0=l19;
si1=6U;
si0=si0 > si1;
if(si0){
goto L68;
}
si0=l34;
l7=si0;
si0=l35;
l5=si0;
si0=1U;
si1=l19;
si0<<=(si1&31);
si1=67U;
si0&=si1;
si0=!(si0);
if(si0){
goto L25;
}
goto L26;
L68:;
si0=l34;
l7=si0;
si0=l35;
l5=si0;
goto L25;
L27:;
si0=l4;
si1=160U;
si0+=si1;
si1=l1;
si2=l10;
si3=l24;
si4=l27;
si5=l2;
f266(i,si0,si1,si2,si3,si4,si5);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+168U);
l7=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+164U);
l5=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+160U);
l19=si0;
si0=l4;
si0=i32_load8_u(&i->m0,(U64)si0+184U);
l10=si0;
si1=20U;
si0=si0 == si1;
if(si0){
goto L26;
}
si0=l0;
si1=l17;
si1=i32_load16_u(&i->m0,(U64)si1);
i32_store16(&i->m0,(U64)si0+25U,si1);
si0=l4;
si1=80U;
si0+=si1;
si1=8U;
si0+=si1;
si1=l18;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
l11=si1;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=27U;
si0+=si1;
si1=l17;
si2=2U;
si1+=si2;
si1=i32_load8_u(&i->m0,(U64)si1);
i32_store8(&i->m0,(U64)si0,si1);
si0=l4;
si1=l18;
sj1=i64_load(&i->m0,(U64)si1);
l26=sj1;
i64_store(&i->m0,(U64)si0+80U,sj1);
si0=l0;
si1=l7;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l0;
si1=l5;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l19;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
sj1=l26;
i64_store(&i->m0,(U64)si0+12U,sj1);
si0=l0;
si1=20U;
si0+=si1;
si1=l11;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l10;
i32_store8(&i->m0,(U64)si0+24U,si1);
goto L24;
L26:;
sj0=l25;
si0=(U32)(sj0);
si0=!(si0);
if(si0){
goto L21;
}
si0=l24;
f15271(i,si0);
goto L21;
L25:;
si0=l1;
sj0=i64_load(&i->m0,(U64)si0+16U);
l26=sj0;
sj1=139586437120ULL;
sj0&=sj1;
sj1=139586437120ULL;
si0=sj0 == sj1;
if(si0){
goto L23;
}
sj0=l26;
sj1=274877906944ULL;
sj0&=sj1;
sj1=0ULL;
si0=sj0 != sj1;
if(si0){
goto L23;
}
sj0=l26;
sj1=32768ULL;
sj0&=sj1;
si0=!(sj0);
si0=!(si0);
if(si0){
goto L23;
}
si0=l4;
si1=224U;
si0+=si1;
si1=l24;
si2=l27;
f62(i,si0,si1,si2);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+232U);
l6=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+228U);
l9=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+224U);
l10=si0;
si0=l4;
si1=0U;
i32_store(&i->m0,(U64)si0+180U,si1);
si0=l4;
si1=0U;
i32_store(&i->m0,(U64)si0+172U,si1);
si0=l4;
si1=1U;
i32_store(&i->m0,(U64)si0+160U,si1);
si0=l4;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+236U);
l11=si1;
i32_store(&i->m0,(U64)si0+188U,si1);
si0=l4;
si1=l11;
i32_store(&i->m0,(U64)si0+164U,si1);
si0=l4;
si1=l11;
si2=l1;
si2=i32_load(&i->m0,(U64)si2+244U);
si3=312U;
si2*=si3;
si1+=si2;
l11=si1;
i32_store(&i->m0,(U64)si0+192U,si1);
si0=l4;
si1=l11;
i32_store(&i->m0,(U64)si0+168U,si1);
si0=l4;
si1=24U;
si0+=si1;
si1=l10;
si2=l9;
si3=l10;
si1=si3?si1:si2;
si2=l6;
si3=l4;
si4=160U;
si3+=si4;
f539(i,si0,si1,si2,si3);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+24U);
l11=si0;
si0=!(si0);
if(si0){
goto L105;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0+28U);
l7=si0;
si0=l4;
si1=160U;
si0+=si1;
si1=l24;
si2=l27;
f62(i,si0,si1,si2);
si0=l4;
si1=288U;
si0+=si1;
si1=l4;
si2=160U;
si1+=si2;
f629(i,si0,si1);
si0=l1;
si1=84U;
si0+=si1;
l5=si0;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si0=l4;
si1=160U;
si0+=si1;
si1=l1;
si2=l2;
si3=0U;
si4=l10;
f558(i,si0,si1,si2,si3,si4);
si0=l0;
si1=l4;
si2=288U;
si1+=si2;
si2=l11;
si3=l7;
si4=l5;
si5=l1;
si6=72U;
si5+=si6;
si6=l6;
si4=si6?si4:si5;
si5=l4;
si5=i32_load(&i->m0,(U64)si5+160U);
l5=si5;
si6=l4;
si6=i32_load(&i->m0,(U64)si6+168U);
si7=l1;
sj7=i64_load(&i->m0,(U64)si7+16U);
l26=sj7;
si7=(U32)(sj7);
si8=23U;
si7>>=(si8&31);
si8=1U;
si7&=si8;
si8=2U;
sj9=l26;
sj10=33554432ULL;
sj9&=sj10;
si9=!(sj9);
si7=si9?si7:si8;
f593(i,si0,si1,si2,si3,si4,si5,si6,si7);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+164U);
si0=!(si0);
if(si0){
goto L106;
}
si0=l5;
f15271(i,si0);
L106:;
si0=l10;
si0=!(si0);
if(si0){
goto L24;
}
si0=l9;
si0=!(si0);
if(si0){
goto L24;
}
si0=l10;
f15271(i,si0);
goto L24;
L105:;
si0=l10;
si0=!(si0);
if(si0){
goto L107;
}
si0=l9;
si0=!(si0);
if(si0){
goto L107;
}
si0=l10;
f15271(i,si0);
L107:;
si0=l1;
sj0=i64_load(&i->m0,(U64)si0+16U);
l26=sj0;
goto L23;
L24:;
sj0=l25;
si0=(U32)(sj0);
si0=!(si0);
if(si0){
goto L12;
}
si0=l24;
f15271(i,si0);
goto L12;
L23:;
sj0=l26;
si0=(U32)(sj0);
si1=28U;
si0>>=(si1&31);
si1=l23;
si2=l1;
si2=i32_load(&i->m0,(U64)si2+12U);
l11=si2;
si3=-1U;
si2+=si3;
si1=si1 == si2;
l6=si1;
si0&=si1;
l9=si0;
si0=0U;
l10=si0;
sj0=l26;
sj1=8589934592ULL;
sj0&=sj1;
si0=!(sj0);
if(si0){
goto L108;
}
si0=l6;
si0=!(si0);
if(si0){
goto L108;
}
sj0=l26;
sj1=17179869184ULL;
sj0&=sj1;
si0=!(sj0);
l10=si0;
L108:;
si0=l9;
si1=l10;
si0|=si1;
if(si0){
goto L110;
}
si0=l11;
si1=l11;
si2=l23;
sj3=l26;
sj4=566935683072ULL;
sj3&=sj4;
sj4=566935683072ULL;
si3=sj3 == sj4;
si1=si3?si1:si2;
sj2=l26;
sj3=25769803776ULL;
sj2&=sj3;
sj3=25769803776ULL;
si2=sj2 == sj3;
si0=si2?si0:si1;
l23=si0;
goto L109;
L110:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L111;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0+16U);
l11=si0;
si0=i32_load(&i->m0,(U64)si0+8U);
l10=si0;
si1=l11;
si1=i32_load(&i->m0,(U64)si1+12U);
si0=si0 != si1;
if(si0){
goto L113;
}
si0=l14;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
goto L112;
L113:;
si0=l11;
si1=l10;
si2=12U;
si1+=si2;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l14;
si1=l10;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l14;
si1=8U;
si0+=si1;
si1=l10;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
L112:;
si0=l3;
si1=1U;
i32_store(&i->m0,(U64)si0,si1);
L111:;
si0=l14;
si0=i32_load(&i->m0,(U64)si0);
l11=si0;
si0=!(si0);
if(si0){
goto L116;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0+12U);
l10=si0;
if(si0){
goto L119;
}
si0=1U;
l7=si0;
goto L118;
L119:;
si0=l10;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L18;
}
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=l10;
si0=f15269(i,si0);
l7=si0;
si0=!(si0);
if(si0){
goto L117;
}
L118:;
si0=l7;
si1=l11;
si2=l10;
si0=f15390(i,si0,si1,si2);
l11=si0;
si0=6U;
l9=si0;
si0=l19;
si1=6U;
si0=si0 == si1;
if(si0){
goto L114;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+8U);
si1=l23;
si0=si0 <= si1;
if(si0){
goto L114;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
si1=l23;
si2=248U;
si1*=si2;
si0+=si1;
l7=si0;
sj0=i64_load(&i->m0,(U64)si0);
sj1=2ULL;
si0=sj0 != sj1;
if(si0){
goto L115;
}
goto L114;
L117:;
si0=1U;
si1=l10;
f52(i,si0,si1);
UNREACHABLE;
L116:;
si0=l23;
si1=1U;
si0+=si1;
l23=si0;
goto L109;
L115:;
si0=l7;
si1=156U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l36=si0;
si0=l7;
si0=i32_load(&i->m0,(U64)si0+152U);
l37=si0;
si0=2U;
l9=si0;
L114:;
si0=l4;
si1=160U;
si0+=si1;
si1=l1;
si2=l11;
si3=l10;
f255(i,si0,si1,si2,si3);
si0=l4;
si0=i32_load8_u(&i->m0,(U64)si0+160U);
l7=si0;
si0=l4;
si1=l36;
i32_store(&i->m0,(U64)si0+168U,si1);
si0=l4;
si1=l37;
i32_store(&i->m0,(U64)si0+164U,si1);
si0=l4;
si1=l9;
i32_store(&i->m0,(U64)si0+160U,si1);
si0=l1;
si1=l11;
si2=l10;
si3=l4;
si4=160U;
si3+=si4;
si0=f259(i,si0,si1,si2,si3);
l5=si0;
si0=l7;
if(si0){
goto L121;
}
si0=l5;
if(si0){
goto L121;
}
si0=l4;
si1=288U;
si0+=si1;
si1=l11;
si2=l10;
f62(i,si0,si1,si2);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+296U);
l8=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+292U);
l6=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+288U);
l7=si0;
si0=l4;
si1=0U;
i32_store(&i->m0,(U64)si0+180U,si1);
si0=l4;
si1=0U;
i32_store(&i->m0,(U64)si0+172U,si1);
si0=l4;
si1=1U;
i32_store(&i->m0,(U64)si0+160U,si1);
si0=l4;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+236U);
l5=si1;
i32_store(&i->m0,(U64)si0+188U,si1);
si0=l4;
si1=l5;
i32_store(&i->m0,(U64)si0+164U,si1);
si0=l4;
si1=l5;
si2=l1;
si2=i32_load(&i->m0,(U64)si2+244U);
si3=312U;
si2*=si3;
si1+=si2;
l5=si1;
i32_store(&i->m0,(U64)si0+192U,si1);
si0=l4;
si1=l5;
i32_store(&i->m0,(U64)si0+168U,si1);
si0=l4;
si1=16U;
si0+=si1;
si1=l7;
si2=l6;
si3=l7;
si1=si3?si1:si2;
si2=l8;
si3=l4;
si4=160U;
si3+=si4;
f539(i,si0,si1,si2,si3);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+16U);
l5=si0;
si0=l7;
si0=!(si0);
if(si0){
goto L122;
}
si0=l6;
si0=!(si0);
if(si0){
goto L122;
}
si0=l7;
f15271(i,si0);
L122:;
si0=l5;
si0=!(si0);
if(si0){
goto L120;
}
L121:;
si0=l23;
si1=1U;
si0+=si1;
l23=si0;
L120:;
si0=l10;
si0=!(si0);
if(si0){
goto L123;
}
si0=l11;
f15271(i,si0);
L123:;
si0=l36;
l7=si0;
si0=l37;
l5=si0;
si0=l9;
l19=si0;
L109:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+8U);
l31=si0;
si1=l23;
si0=si0 <= si1;
if(si0){
goto L128;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l10=si0;
si1=l23;
si2=248U;
si1*=si2;
si0+=si1;
l32=si0;
sj0=i64_load(&i->m0,(U64)si0);
sj1=2ULL;
si0=sj0 == sj1;
if(si0){
goto L128;
}
si0=l1;
sj0=i64_load(&i->m0,(U64)si0+16U);
l26=sj0;
sj1=17179869184ULL;
sj0&=sj1;
l28=sj0;
si0=l32;
si1=189U;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=64U;
si0&=si1;
si0=!(si0);
if(si0){
goto L131;
}
sj0=l28;
si0=!(sj0);
if(si0){
goto L130;
}
L131:;
sj0=l28;
si0=!(sj0);
si0=!(si0);
if(si0){
goto L127;
}
sj0=l26;
sj1=8192ULL;
sj0&=sj1;
si0=!(sj0);
if(si0){
goto L127;
}
si0=l23;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+12U);
si0=si0 == si1;
if(si0){
goto L129;
}
goto L127;
L130:;
si0=l4;
si1=288U;
si0+=si1;
si1=l24;
si2=l27;
f62(i,si0,si1,si2);
si0=l4;
si1=296U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+292U);
l11=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+288U);
l10=si0;
si0=l4;
si1=160U;
si0+=si1;
si1=l1;
si2=l2;
si3=0U;
si4=l10;
f558(i,si0,si1,si2,si3,si4);
si0=l0;
si1=l10;
si2=l11;
si3=l10;
si1=si3?si1:si2;
si2=l7;
si3=1084668U;
si4=0U;
si5=l4;
si5=i32_load(&i->m0,(U64)si5+160U);
l9=si5;
si6=l4;
si6=i32_load(&i->m0,(U64)si6+168U);
si7=l1;
sj7=i64_load(&i->m0,(U64)si7+16U);
l26=sj7;
si7=(U32)(sj7);
si8=23U;
si7>>=(si8&31);
si8=1U;
si7&=si8;
si8=2U;
sj9=l26;
sj10=33554432ULL;
sj9&=sj10;
si9=!(sj9);
si7=si9?si7:si8;
f603(i,si0,si1,si2,si3,si4,si5,si6,si7);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+164U);
si0=!(si0);
if(si0){
goto L132;
}
si0=l9;
f15271(i,si0);
L132:;
si0=l10;
si0=!(si0);
if(si0){
goto L126;
}
si0=l11;
si0=!(si0);
if(si0){
goto L126;
}
si0=l10;
f15271(i,si0);
goto L126;
L129:;
si0=l1;
sj1=l26;
sj2=17179869184ULL;
sj1|=sj2;
l26=sj1;
i64_store(&i->m0,(U64)si0+16U,sj1);
goto L127;
L128:;
si0=l1;
sj0=i64_load(&i->m0,(U64)si0+16U);
l26=sj0;
sj1=32768ULL;
sj0&=sj1;
si0=!(sj0);
if(si0){
goto L140;
}
si0=l4;
si1=160U;
si0+=si1;
si1=l24;
si2=l27;
f756(i,si0,si1,si2);
si0=l38;
si1=l4;
si1=i32_load(&i->m0,(U64)si1+168U);
si2=l4;
si2=i32_load(&i->m0,(U64)si2+160U);
l10=si2;
si0=si2?si0:si1;
l38=si0;
si0=l10;
if(si0){
goto L141;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0+164U);
l10=si0;
if(si0){
goto L139;
}
L141:;
si0=l21;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=1U;
si0&=si1;
if(si0){
goto L138;
}
si0=l4;
si1=160U;
si0+=si1;
si1=l1;
si2=l2;
si3=0U;
si4=l10;
f558(i,si0,si1,si2,si3,si4);
si0=l0;
si1=l4;
si1=i32_load(&i->m0,(U64)si1+160U);
l10=si1;
si2=l4;
si2=i32_load(&i->m0,(U64)si2+168U);
si3=l1;
sj3=i64_load(&i->m0,(U64)si3+16U);
l26=sj3;
si3=(U32)(sj3);
si4=23U;
si3>>=(si4&31);
si4=1U;
si3&=si4;
si4=2U;
sj5=l26;
sj6=33554432ULL;
sj5&=sj6;
si5=!(sj5);
si3=si5?si3:si4;
f597(i,si0,si1,si2,si3);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+164U);
si0=!(si0);
if(si0){
goto L126;
}
si0=l10;
f15271(i,si0);
goto L126;
L140:;
sj0=l26;
sj1=134479872ULL;
sj0&=sj1;
si0=!(sj0);
if(si0){
goto L145;
}
si0=l24;
si1=l27;
si2=1085134U;
si3=1U;
si0=f367(i,si0,si1,si2,si3);
if(si0){
goto L144;
}
si0=l1;
sj0=i64_load(&i->m0,(U64)si0+16U);
l26=sj0;
L145:;
sj0=l26;
sj1=274877906944ULL;
sj0&=sj1;
si0=!(sj0);
if(si0){
goto L143;
}
L144:;
si0=l12;
if(si0){
goto L142;
}
si0=l1;
si1=20U;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=64U;
si0&=si1;
si0=!(si0);
if(si0){
goto L146;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+244U);
if(si0){
goto L142;
}
L146:;
si0=l4;
si1=288U;
si0+=si1;
si1=l24;
si2=l27;
f62(i,si0,si1,si2);
si0=l4;
si1=296U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+292U);
l11=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+288U);
l10=si0;
si0=l4;
si1=160U;
si0+=si1;
si1=l1;
si2=l2;
si3=0U;
si4=l10;
f558(i,si0,si1,si2,si3,si4);
si0=l0;
si1=l10;
si2=l11;
si3=l10;
si1=si3?si1:si2;
si2=l7;
si3=1084668U;
si4=0U;
si5=l4;
si5=i32_load(&i->m0,(U64)si5+160U);
l9=si5;
si6=l4;
si6=i32_load(&i->m0,(U64)si6+168U);
si7=l1;
sj7=i64_load(&i->m0,(U64)si7+16U);
l26=sj7;
si7=(U32)(sj7);
si8=23U;
si7>>=(si8&31);
si8=1U;
si7&=si8;
si8=2U;
sj9=l26;
sj10=33554432ULL;
sj9&=sj10;
si9=!(sj9);
si7=si9?si7:si8;
f603(i,si0,si1,si2,si3,si4,si5,si6,si7);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+164U);
si0=!(si0);
if(si0){
goto L147;
}
si0=l9;
f15271(i,si0);
L147:;
si0=l10;
si0=!(si0);
if(si0){
goto L126;
}
si0=l11;
si0=!(si0);
if(si0){
goto L126;
}
si0=l10;
f15271(i,si0);
goto L126;
L143:;
si0=l4;
si1=288U;
si0+=si1;
si1=l24;
si2=l27;
f62(i,si0,si1,si2);
si0=l4;
si1=296U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+292U);
l11=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+288U);
l10=si0;
si0=l4;
si1=160U;
si0+=si1;
si1=l1;
si2=l2;
si3=0U;
si4=l10;
f558(i,si0,si1,si2,si3,si4);
si0=l0;
si1=l10;
si2=l11;
si3=l10;
si1=si3?si1:si2;
si2=l7;
si3=1084668U;
si4=0U;
si5=l4;
si5=i32_load(&i->m0,(U64)si5+160U);
l9=si5;
si6=l4;
si6=i32_load(&i->m0,(U64)si6+168U);
si7=l1;
sj7=i64_load(&i->m0,(U64)si7+16U);
l26=sj7;
si7=(U32)(sj7);
si8=23U;
si7>>=(si8&31);
si8=1U;
si7&=si8;
si8=2U;
sj9=l26;
sj10=33554432ULL;
sj9&=sj10;
si9=!(sj9);
si7=si9?si7:si8;
f603(i,si0,si1,si2,si3,si4,si5,si6,si7);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+164U);
si0=!(si0);
if(si0){
goto L148;
}
si0=l9;
f15271(i,si0);
L148:;
si0=l10;
si0=!(si0);
if(si0){
goto L126;
}
si0=l11;
si0=!(si0);
if(si0){
goto L126;
}
si0=l10;
f15271(i,si0);
goto L126;
L142:;
si0=l4;
si1=224U;
si0+=si1;
si1=l24;
si2=l27;
f62(i,si0,si1,si2);
si0=l4;
si1=232U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l9=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+228U);
l7=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+224U);
l10=si0;
si0=l4;
si1=192U;
si0+=si1;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+236U);
l11=si1;
si2=l1;
si2=i32_load(&i->m0,(U64)si2+244U);
si3=312U;
si2*=si3;
si1+=si2;
l5=si1;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=0U;
i32_store(&i->m0,(U64)si0+180U,si1);
si0=l4;
si1=0U;
i32_store(&i->m0,(U64)si0+172U,si1);
si0=l4;
si1=1U;
i32_store(&i->m0,(U64)si0+160U,si1);
si0=l4;
si1=l11;
i32_store(&i->m0,(U64)si0+188U,si1);
si0=l4;
si1=l11;
i32_store(&i->m0,(U64)si0+164U,si1);
si0=l4;
si1=l5;
i32_store(&i->m0,(U64)si0+168U,si1);
si0=l4;
si1=8U;
si0+=si1;
si1=l10;
si2=l7;
si3=l10;
si1=si3?si1:si2;
si2=l9;
si3=l4;
si4=160U;
si3+=si4;
f539(i,si0,si1,si2,si3);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+8U);
l11=si0;
si0=!(si0);
if(si0){
goto L150;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0+12U);
l9=si0;
si0=l4;
si1=160U;
si0+=si1;
si1=l24;
si2=l27;
f62(i,si0,si1,si2);
si0=l4;
si1=288U;
si0+=si1;
si1=l4;
si2=160U;
si1+=si2;
f629(i,si0,si1);
si0=l1;
si1=84U;
si0+=si1;
l5=si0;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si0=l4;
si1=160U;
si0+=si1;
si1=l1;
si2=l2;
si3=0U;
si4=l10;
f558(i,si0,si1,si2,si3,si4);
si0=l0;
si1=l4;
si2=288U;
si1+=si2;
si2=l11;
si3=l9;
si4=l5;
si5=l1;
si6=72U;
si5+=si6;
si6=l6;
si4=si6?si4:si5;
si5=l4;
si5=i32_load(&i->m0,(U64)si5+160U);
l5=si5;
si6=l4;
si6=i32_load(&i->m0,(U64)si6+168U);
si7=l1;
sj7=i64_load(&i->m0,(U64)si7+16U);
l26=sj7;
si7=(U32)(sj7);
si8=23U;
si7>>=(si8&31);
si8=1U;
si7&=si8;
si8=2U;
sj9=l26;
sj10=33554432ULL;
sj9&=sj10;
si9=!(sj9);
si7=si9?si7:si8;
f593(i,si0,si1,si2,si3,si4,si5,si6,si7);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+164U);
si0=!(si0);
if(si0){
goto L149;
}
si0=l5;
f15271(i,si0);
goto L149;
L150:;
si0=l4;
si1=160U;
si0+=si1;
si1=l24;
si2=l27;
f62(i,si0,si1,si2);
si0=l4;
si1=288U;
si0+=si1;
si1=l4;
si2=160U;
si1+=si2;
f629(i,si0,si1);
si0=l0;
si1=l4;
si2=288U;
si1+=si2;
si2=l1;
si3=84U;
si2+=si3;
l11=si2;
si3=l1;
si4=72U;
si3+=si4;
si4=l11;
si4=i32_load(&i->m0,(U64)si4);
si2=si4?si2:si3;
si3=l1;
sj3=i64_load(&i->m0,(U64)si3+16U);
l26=sj3;
si3=(U32)(sj3);
si4=23U;
si3>>=(si4&31);
si4=1U;
si3&=si4;
si4=2U;
sj5=l26;
sj6=33554432ULL;
sj5&=sj6;
si5=!(sj5);
si3=si5?si3:si4;
f594(i,si0,si1,si2,si3);
L149:;
si0=l10;
si0=!(si0);
if(si0){
goto L126;
}
si0=l7;
si0=!(si0);
if(si0){
goto L126;
}
si0=l10;
f15271(i,si0);
goto L126;
L139:;
si0=l38;
if(si0){
goto L152;
}
si0=1U;
l6=si0;
goto L151;
L152:;
si0=l38;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L18;
}
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=l38;
si0=f15269(i,si0);
l6=si0;
si0=!(si0);
if(si0){
goto L136;
}
L151:;
si0=l6;
si1=l10;
si2=l38;
si0=f15390(i,si0,si1,si2);
si0=l38;
l30=si0;
si0=l38;
l8=si0;
goto L137;
L138:;
si0=l4;
si1=160U;
si0+=si1;
si1=l24;
si2=l27;
f62(i,si0,si1,si2);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+168U);
l8=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+160U);
l6=si0;
if(si0){
goto L153;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0+164U);
l10=si0;
si0=l8;
if(si0){
goto L155;
}
si0=1U;
l6=si0;
goto L154;
L155:;
si0=l8;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L18;
}
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=l8;
si0=f15269(i,si0);
l6=si0;
si0=!(si0);
if(si0){
goto L135;
}
L154:;
si0=l6;
si1=l10;
si2=l8;
si0=f15390(i,si0,si1,si2);
si0=l8;
l30=si0;
goto L137;
L153:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+164U);
l30=si0;
L137:;
si0=0U;
si0=f319(i,si0);
l10=si0;
si0=!(si0);
if(si0){
goto L134;
}
si0=l10;
si1=l10;
sj1=i64_load(&i->m0,(U64)si1);
l26=sj1;
sj2=1ULL;
sj1+=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
sj1=0ULL;
i64_store(&i->m0,(U64)si0+192U,sj1);
si0=l4;
si1=0U;
i32_store(&i->m0,(U64)si0+172U,si1);
si0=l4;
sj1=0ULL;
i64_store(&i->m0,(U64)si0+164U,sj1);
si0=l4;
si1=1086680U;
i32_store(&i->m0,(U64)si0+160U,si1);
si0=l4;
si1=l10;
sj1=i64_load(&i->m0,(U64)si1+8U);
i64_store(&i->m0,(U64)si0+184U,sj1);
si0=l4;
sj1=l26;
i64_store(&i->m0,(U64)si0+176U,sj1);
L158:;
{
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
l9=si0;
si0=l3;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l14;
l10=si0;
si0=l13;
l11=si0;
si0=l9;
if(si0){
goto L159;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0+16U);
l11=si0;
si0=i32_load(&i->m0,(U64)si0+8U);
l10=si0;
si1=l11;
si1=i32_load(&i->m0,(U64)si1+12U);
si0=si0 == si1;
if(si0){
goto L157;
}
si0=l11;
si1=l10;
si2=12U;
si1+=si2;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l10;
si1=4U;
si0+=si1;
l11=si0;
L159:;
si0=l10;
si0=i32_load(&i->m0,(U64)si0);
l10=si0;
si0=!(si0);
if(si0){
goto L157;
}
si0=l4;
si1=288U;
si0+=si1;
si1=l10;
si2=l11;
sj2=i64_load(&i->m0,(U64)si2);
l26=sj2;
sj3=32ULL;
sj2>>=(sj3&63);
si2=(U32)(sj2);
l11=si2;
f756(i,si0,si1,si2);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+288U);
si0=!(si0);
if(si0){
goto L160;
}
si0=l21;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=1U;
si0&=si1;
si0=!(si0);
if(si0){
goto L156;
}
L160:;
si0=l4;
si1=160U;
si0+=si1;
si1=1084668U;
si2=0U;
si3=l10;
si4=l11;
f646(i,si0,si1,si2,si3,si4);
sj0=l26;
si0=(U32)(sj0);
si0=!(si0);
if(si0){
goto L158;
}
si0=l10;
f15271(i,si0);
goto L158;
}
L157:;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=64U;
si0=f15269(i,si0);
l10=si0;
si0=!(si0);
if(si0){
goto L133;
}
si0=l10;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1+160U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l10;
si1=l8;
i32_store(&i->m0,(U64)si0+56U,si1);
si0=l10;
si1=l30;
i32_store(&i->m0,(U64)si0+52U,si1);
si0=l10;
si1=l6;
i32_store(&i->m0,(U64)si0+48U,si1);
si0=l10;
si1=40U;
si0+=si1;
si1=l4;
si2=160U;
si1+=si2;
si2=40U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l10;
si1=32U;
si0+=si1;
si1=l4;
si2=160U;
si1+=si2;
si2=32U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l10;
si1=24U;
si0+=si1;
si1=l4;
si2=160U;
si1+=si2;
si2=24U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l10;
si1=16U;
si0+=si1;
si1=l4;
si2=160U;
si1+=si2;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l10;
si1=8U;
si0+=si1;
si1=l4;
si2=160U;
si1+=si2;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si0=i32_load(&i->m0,(U64)si0+32U);
l11=si0;
si0=!(si0);
if(si0){
goto L161;
}
si0=l11;
si1=52U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L162;
}
si0=l11;
si0=i32_load(&i->m0,(U64)si0+48U);
f15271(i,si0);
L162:;
si0=l11;
f615(i,si0);
si0=l11;
f15271(i,si0);
L161:;
si0=l2;
si1=l10;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=1U;
l22=si0;
goto L124;
L156:;
si0=l4;
si1=288U;
si0+=si1;
si1=l1;
si2=l2;
si3=0U;
si4=l10;
f558(i,si0,si1,si2,si3,si4);
si0=l0;
si1=l4;
si1=i32_load(&i->m0,(U64)si1+288U);
l11=si1;
si2=l4;
si2=i32_load(&i->m0,(U64)si2+296U);
si3=l1;
sj3=i64_load(&i->m0,(U64)si3+16U);
l28=sj3;
si3=(U32)(sj3);
si4=23U;
si3>>=(si4&31);
si4=1U;
si3&=si4;
si4=2U;
sj5=l28;
sj6=33554432ULL;
sj5&=sj6;
si5=!(sj5);
si3=si5?si3:si4;
f597(i,si0,si1,si2,si3);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+292U);
si0=!(si0);
if(si0){
goto L163;
}
si0=l11;
f15271(i,si0);
L163:;
sj0=l26;
si0=(U32)(sj0);
si0=!(si0);
if(si0){
goto L164;
}
si0=l10;
f15271(i,si0);
L164:;
si0=l4;
si1=160U;
si0+=si1;
f240(i,si0);
si0=l30;
si0=!(si0);
if(si0){
goto L126;
}
si0=l6;
f15271(i,si0);
goto L126;
L136:;
si0=1U;
si1=l38;
f52(i,si0,si1);
UNREACHABLE;
L135:;
si0=1U;
si1=l8;
f52(i,si0,si1);
UNREACHABLE;
L134:;
si0=1093060U;
si1=70U;
si2=l4;
si3=272U;
si2+=si3;
si3=1093132U;
si4=1093228U;
f712(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L133:;
si0=8U;
si1=64U;
f52(i,si0,si1);
UNREACHABLE;
L127:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+32U);
l29=si0;
si0=!(si0);
if(si0){
goto L166;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+36U);
l11=si0;
si1=l32;
si2=156U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
si0=si0 != si1;
if(si0){
goto L166;
}
si0=l29;
si1=l32;
si1=i32_load(&i->m0,(U64)si1+152U);
si2=l11;
si0=f15389(i,si0,si1,si2);
si0=!(si0);
if(si0){
goto L165;
}
L166:;
si0=0U;
l39=si0;
si0=0U;
l8=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+220U);
l11=si0;
si0=!(si0);
if(si0){
goto L167;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+212U);
l8=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+36U);
si1=0U;
si2=l29;
si0=si2?si0:si1;
l9=si0;
si0=l11;
si1=120U;
si0*=si1;
l11=si0;
si0=l29;
si1=1084668U;
si2=l29;
si0=si2?si0:si1;
l6=si0;
L168:;
{
si0=l8;
si1=36U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=l9;
si0=si0 != si1;
if(si0){
goto L169;
}
si0=l8;
si1=32U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=l6;
si2=l9;
si0=f15389(i,si0,si1,si2);
si0=!(si0);
if(si0){
goto L167;
}
L169:;
si0=l8;
si1=120U;
si0+=si1;
l8=si0;
si0=l11;
si1=-120U;
si0+=si1;
l11=si0;
if(si0){
goto L168;
}
}
si0=0U;
l8=si0;
L167:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+36U);
si1=0U;
si2=l29;
si0=si2?si0:si1;
l30=si0;
si0=l29;
si1=1084668U;
si2=l29;
si0=si2?si0:si1;
l29=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+232U);
l9=si0;
si0=!(si0);
if(si0){
goto L170;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+224U);
l11=si0;
si0=l9;
si1=272U;
si0*=si1;
l9=si0;
L171:;
{
si0=l11;
si1=188U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=l30;
si0=si0 != si1;
if(si0){
goto L172;
}
si0=l11;
si1=184U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=l29;
si2=l30;
si0=f15389(i,si0,si1,si2);
if(si0){
goto L172;
}
si0=l11;
l39=si0;
goto L170;
L172:;
si0=l11;
si1=272U;
si0+=si1;
l11=si0;
si0=l9;
si1=-272U;
si0+=si1;
l9=si0;
if(si0){
goto L171;
}
}
L170:;
sj0=l26;
sj1=1099511627776ULL;
sj0&=sj1;
l26=sj0;
si0=l10;
si1=l31;
si2=248U;
si1*=si2;
si0+=si1;
l9=si0;
si0=0U;
l6=si0;
L175:;
{
si0=l9;
l11=si0;
si0=l10;
si1=l9;
si0=si0 == si1;
if(si0){
goto L177;
}
si0=l10;
si1=248U;
si0+=si1;
l11=si0;
si0=l10;
sj0=i64_load(&i->m0,(U64)si0);
sj1=2ULL;
si0=sj0 != sj1;
if(si0){
goto L176;
}
L177:;
si0=l11;
l10=si0;
si0=l6;
si1=1U;
si0+=si1;
l6=si0;
si1=l31;
si0=si0 != si1;
if(si0){
goto L175;
}
goto L174;
L176:;
si0=l10;
si1=156U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=l30;
si0=si0 != si1;
if(si0){
goto L178;
}
si0=l10;
si0=i32_load(&i->m0,(U64)si0+152U);
si1=l29;
si2=l30;
si0=f15389(i,si0,si1,si2);
si0=!(si0);
if(si0){
goto L173;
}
L178:;
si0=l11;
l10=si0;
si0=l6;
si1=1U;
si0+=si1;
l6=si0;
si1=l31;
si0=si0 < si1;
if(si0){
goto L175;
}
}
L174:;
si0=0U;
l10=si0;
L173:;
si0=l2;
si1=l8;
si2=l39;
si3=l10;
si4=l39;
si2=si4?si2:si3;
si3=l8;
si1=si3?si1:si2;
si2=1085684U;
si3=1085552U;
si4=1085808U;
si5=l39;
si3=si5?si3:si4;
si4=l8;
si2=si4?si2:si3;
si3=l16;
si4=l15;
sj5=l26;
sj6=0ULL;
si5=sj5 != sj6;
f637(i,si0,si1,si2,si3,si4,si5);
si0=l1;
si1=l32;
sj1=i64_load(&i->m0,(U64)si1+152U);
i64_store(&i->m0,(U64)si0+32U,sj1);
L165:;
si0=l4;
si1=160U;
si0+=si1;
si1=l1;
si2=l32;
si3=l24;
si4=l27;
si5=l2;
f267(i,si0,si1,si2,si3,si4,si5);
si0=l4;
si0=i32_load8_u(&i->m0,(U64)si0+184U);
l10=si0;
si1=20U;
si0=si0 != si1;
if(si0){
goto L179;
}
si0=l2;
si1=l32;
si1=i32_load(&i->m0,(U64)si1+152U);
si2=l32;
si3=156U;
si2+=si3;
l10=si2;
si2=i32_load(&i->m0,(U64)si2);
f645(i,si0,si1,si2);
si0=l4;
si1=160U;
si0+=si1;
si1=l1;
si2=l32;
si2=i32_load(&i->m0,(U64)si2+152U);
si3=l10;
si3=i32_load(&i->m0,(U64)si3);
f268(i,si0,si1,si2,si3);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+160U);
l9=si0;
si0=!(si0);
if(si0){
goto L125;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0+164U);
l6=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+168U);
l10=si0;
si0=!(si0);
if(si0){
goto L180;
}
si0=l9;
si1=l10;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l11=si0;
si0=l9;
l10=si0;
L181:;
{
si0=l2;
si1=l10;
si1=i32_load(&i->m0,(U64)si1);
si2=l10;
si3=4U;
si2+=si3;
si2=i32_load(&i->m0,(U64)si2);
f645(i,si0,si1,si2);
si0=l10;
si1=8U;
si0+=si1;
l10=si0;
si1=l11;
si0=si0 != si1;
if(si0){
goto L181;
}
}
L180:;
si0=l6;
si0=!(si0);
if(si0){
goto L125;
}
si0=l9;
f15271(i,si0);
goto L125;
L179:;
si0=l0;
si1=l17;
si1=i32_load16_u(&i->m0,(U64)si1);
i32_store16(&i->m0,(U64)si0+25U,si1);
si0=l4;
si1=288U;
si0+=si1;
si1=16U;
si0+=si1;
si1=l4;
si2=160U;
si1+=si2;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
l26=sj1;
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=288U;
si0+=si1;
si1=8U;
si0+=si1;
si1=l4;
si2=160U;
si1+=si2;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
l28=sj1;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=27U;
si0+=si1;
si1=l17;
si2=2U;
si1+=si2;
si1=i32_load8_u(&i->m0,(U64)si1);
i32_store8(&i->m0,(U64)si0,si1);
si0=l4;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1+160U);
l33=sj1;
i64_store(&i->m0,(U64)si0+288U,sj1);
si0=l0;
si1=16U;
si0+=si1;
sj1=l26;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=8U;
si0+=si1;
sj1=l28;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
sj1=l33;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=l10;
i32_store8(&i->m0,(U64)si0+24U,si1);
L126:;
sj0=l25;
si0=(U32)(sj0);
si0=!(si0);
if(si0){
goto L12;
}
si0=l24;
f15271(i,si0);
goto L12;
L125:;
si0=l1;
si1=l1;
sj1=i64_load(&i->m0,(U64)si1+16U);
sj2=137438953472ULL;
sj1|=sj2;
i64_store(&i->m0,(U64)si0+16U,sj1);
si0=l32;
si0=i32_load(&i->m0,(U64)si0+188U);
si1=-1U;
si0^=si1;
si1=1U;
si0>>=(si1&31);
si1=1U;
si0&=si1;
si1=l23;
si0+=si1;
l23=si0;
L124:;
sj0=l25;
si0=(U32)(sj0);
si0=!(si0);
if(si0){
goto L21;
}
si0=l24;
f15271(i,si0);
goto L21;
}
L20:;
si0=0U;
l27=si0;
L19:;
si0=l22;
si1=1U;
si0&=si1;
if(si0){
goto L13;
}
si0=l27;
si0=!(si0);
if(si0){
goto L185;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+244U);
l10=si0;
si0=!(si0);
if(si0){
goto L187;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+236U);
l9=si0;
si1=l10;
si2=312U;
si1*=si2;
si0+=si1;
l30=si0;
L188:;
{
si0=l9;
si1=72U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si0=l9;
si1=80U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l31=si0;
si1=l8;
si0=si0 != si1;
if(si0){
goto L189;
}
si0=l6;
si1=l27;
si2=l8;
si0=f15389(i,si0,si1,si2);
si0=!(si0);
if(si0){
goto L186;
}
L189:;
si0=l9;
si1=152U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l10=si0;
si0=!(si0);
if(si0){
goto L190;
}
si0=l9;
si1=160U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l11=si0;
si0=!(si0);
if(si0){
goto L190;
}
si0=l11;
si1=12U;
si0*=si1;
l11=si0;
L191:;
{
si0=l10;
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=l8;
si0=si0 != si1;
if(si0){
goto L192;
}
si0=l10;
si0=i32_load(&i->m0,(U64)si0);
si1=l27;
si2=l8;
si0=f15389(i,si0,si1,si2);
si0=!(si0);
if(si0){
goto L186;
}
L192:;
si0=l10;
si1=12U;
si0+=si1;
l10=si0;
si0=l11;
si1=-12U;
si0+=si1;
l11=si0;
if(si0){
goto L191;
}
}
L190:;
si0=l9;
si1=312U;
si0+=si1;
l9=si0;
si1=l30;
si0=si0 != si1;
if(si0){
goto L188;
}
}
L187:;
si0=1084925U;
si1=99U;
si2=1085168U;
f703(i,si0,si1,si2);
UNREACHABLE;
L186:;
si0=1U;
l10=si0;
si0=l31;
si0=!(si0);
if(si0){
goto L194;
}
si0=l31;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L18;
}
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=l31;
si0=f15269(i,si0);
l10=si0;
si0=!(si0);
if(si0){
goto L193;
}
L194:;
si0=l10;
si1=l6;
si2=l31;
si0=f15390(i,si0,si1,si2);
l14=si0;
si0=0U;
l10=si0;
si0=l4;
si1=0U;
i32_store(&i->m0,(U64)si0+152U,si1);
si0=l4;
sj1=1ULL;
i64_store(&i->m0,(U64)si0+144U,sj1);
si0=l1;
si0=i32_load8_u(&i->m0,(U64)si0+16U);
si1=1U;
si0&=si1;
if(si0){
goto L183;
}
si0=l1;
si1=280U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l13=si0;
if(si0){
goto L197;
}
si0=4U;
l30=si0;
goto L196;
L197:;
si0=l13;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L18;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+272U);
l24=si0;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=l13;
si1=-1U;
si0^=si1;
si1=26U;
si0>>=(si1&31);
si1=4U;
si0&=si1;
l11=si0;
si1=l13;
si2=3U;
si1<<=(si2&31);
l10=si1;
si0=si0 <= si1;
if(si0){
goto L199;
}
si0=l11;
si1=l10;
si0=f15277(i,si0,si1);
l30=si0;
goto L198;
L199:;
si0=l10;
si0=f15269(i,si0);
l30=si0;
L198:;
si0=l30;
si0=!(si0);
if(si0){
goto L195;
}
si0=l13;
si1=1U;
si0&=si1;
l29=si0;
si0=0U;
l11=si0;
si0=l13;
si1=1U;
si0=si0 == si1;
if(si0){
goto L200;
}
si0=l13;
si1=-2U;
si0&=si1;
l20=si0;
si0=0U;
l10=si0;
si0=0U;
l11=si0;
L201:;
{
si0=l30;
si1=l10;
si0+=si1;
l9=si0;
si1=l24;
si2=l10;
si1+=si2;
l6=si1;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l9;
si1=8U;
si0+=si1;
si1=l6;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l10;
si1=16U;
si0+=si1;
l10=si0;
si0=l20;
si1=l11;
si2=2U;
si1+=si2;
l11=si1;
si0=si0 != si1;
if(si0){
goto L201;
}
}
L200:;
si0=l29;
si0=!(si0);
if(si0){
goto L196;
}
si0=l30;
si1=l11;
si2=3U;
si1<<=(si2&31);
l10=si1;
si0+=si1;
si1=l24;
si2=l10;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
L196:;
si0=l4;
si1=l13;
i32_store(&i->m0,(U64)si0+232U,si1);
si0=l4;
si1=l13;
i32_store(&i->m0,(U64)si0+228U,si1);
si0=l4;
si1=l30;
i32_store(&i->m0,(U64)si0+224U,si1);
si0=l4;
si1=l2;
si1=i32_load(&i->m0,(U64)si1+12U);
i32_store(&i->m0,(U64)si0+184U,si1);
si0=l4;
si1=l2;
si1=i32_load(&i->m0,(U64)si1);
l10=si1;
i32_store(&i->m0,(U64)si0+176U,si1);
si0=l4;
si1=l10;
si2=8U;
si1+=si2;
i32_store(&i->m0,(U64)si0+168U,si1);
si0=l4;
si1=l10;
si2=l2;
si2=i32_load(&i->m0,(U64)si2+4U);
si1+=si2;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0+172U,si1);
si0=l4;
si1=l10;
sj1=i64_load(&i->m0,(U64)si1);
sj2=-1ULL;
sj1^=sj2;
sj2=-9187201950435737472ULL;
sj1&=sj2;
i64_store(&i->m0,(U64)si0+160U,sj1);
si0=l4;
si1=288U;
si0+=si1;
si1=l4;
si2=160U;
si1+=si2;
f305(i,si0,si1);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+288U);
l24=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+292U);
l20=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+296U);
l10=si0;
si0=!(si0);
if(si0){
goto L202;
}
si0=l24;
si1=l10;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l30=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+232U);
l10=si0;
si0=l24;
l11=si0;
L203:;
{
si0=l11;
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l9=si0;
si0=l11;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si0=l10;
si1=l4;
si1=i32_load(&i->m0,(U64)si1+228U);
si0=si0 != si1;
if(si0){
goto L204;
}
si0=l4;
si1=224U;
si0+=si1;
si1=l10;
f568(i,si0,si1);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+232U);
l10=si0;
L204:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+224U);
si1=l10;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l10=si0;
si1=l9;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l10;
si1=l6;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=l4;
si1=i32_load(&i->m0,(U64)si1+232U);
si2=1U;
si1+=si2;
l10=si1;
i32_store(&i->m0,(U64)si0+232U,si1);
si0=l11;
si1=8U;
si0+=si1;
l11=si0;
si1=l30;
si0=si0 != si1;
if(si0){
goto L203;
}
}
L202:;
si0=l20;
si0=!(si0);
if(si0){
goto L205;
}
si0=l24;
f15271(i,si0);
L205:;
si0=0U;
l10=si0;
si0=l4;
si1=288U;
si0+=si1;
si1=l1;
si2=l4;
si2=i32_load(&i->m0,(U64)si2+224U);
si3=l4;
si3=i32_load(&i->m0,(U64)si3+232U);
si4=l2;
si5=0U;
si6=l10;
si7=0U;
f559(i,si0,si1,si2,si3,si4,si5,si6,si7);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+292U);
l20=si0;
si0=0U;
l9=si0;
si0=0U;
l11=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+300U);
l13=si0;
si0=!(si0);
if(si0){
goto L206;
}
si0=0U;
l11=si0;
si0=l13;
si1=l20;
si2=l4;
si2=i32_load(&i->m0,(U64)si2+296U);
l10=si2;
si3=0U;
si4=l20;
si5=l10;
si6=l20;
si5=si5 < si6;
si3=si5?si3:si4;
si2-=si3;
l10=si2;
si1-=si2;
l9=si1;
si0=si0 <= si1;
if(si0){
goto L207;
}
si0=l13;
si1=l9;
si0-=si1;
l11=si0;
si0=l20;
l9=si0;
goto L206;
L207:;
si0=l10;
si1=l13;
si0+=si1;
l9=si0;
L206:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+288U);
l29=si0;
si1=l11;
si2=12U;
si1*=si2;
si0+=si1;
l30=si0;
si0=l29;
si1=l9;
si2=12U;
si1*=si2;
si0+=si1;
l6=si0;
si0=l29;
si1=l10;
si2=12U;
si1*=si2;
si0+=si1;
l11=si0;
si0=l29;
l10=si0;
L208:;
{
si0=l11;
si1=l6;
si0=si0 == si1;
if(si0){
goto L210;
}
si0=l10;
l9=si0;
si0=l11;
l10=si0;
goto L209;
L210:;
si0=l10;
si1=l30;
si0=si0 != si1;
l24=si0;
si0=l30;
l6=si0;
si0=l11;
l9=si0;
si0=l11;
l30=si0;
si0=l24;
if(si0){
goto L209;
}
si0=l13;
si0=!(si0);
if(si0){
goto L211;
}
si0=l20;
si1=l4;
si1=i32_load(&i->m0,(U64)si1+296U);
l10=si1;
si2=0U;
si3=l20;
si4=l10;
si5=l20;
si4=si4 < si5;
si2=si4?si2:si3;
si1-=si2;
l10=si1;
si2=l13;
si1+=si2;
si2=l13;
si3=l20;
si4=l10;
si3-=si4;
l9=si3;
si2=si2 > si3;
si0=si2?si0:si1;
l11=si0;
si1=l10;
si0=si0 == si1;
if(si0){
goto L212;
}
si0=l11;
si1=l10;
si0-=si1;
l11=si0;
si0=l29;
si1=l10;
si2=12U;
si1*=si2;
si0+=si1;
l10=si0;
L213:;
{
si0=l10;
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L214;
}
si0=l10;
si0=i32_load(&i->m0,(U64)si0);
f15271(i,si0);
L214:;
si0=l10;
si1=12U;
si0+=si1;
l10=si0;
si0=l11;
si1=-1U;
si0+=si1;
l11=si0;
if(si0){
goto L213;
}
}
L212:;
si0=l13;
si1=l9;
si0=si0 <= si1;
if(si0){
goto L211;
}
si0=0U;
si1=l13;
si2=l9;
si1-=si2;
l10=si1;
si2=l10;
si3=l13;
si2=si2 > si3;
si0=si2?si0:si1;
l11=si0;
si0=l29;
l10=si0;
L215:;
{
si0=l10;
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L216;
}
si0=l10;
si0=i32_load(&i->m0,(U64)si0);
f15271(i,si0);
L216:;
si0=l10;
si1=12U;
si0+=si1;
l10=si0;
si0=l11;
si1=-1U;
si0+=si1;
l11=si0;
if(si0){
goto L215;
}
}
L211:;
si0=l20;
si0=!(si0);
if(si0){
goto L217;
}
si0=l29;
f15271(i,si0);
L217:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+228U);
si0=!(si0);
if(si0){
goto L184;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0+224U);
f15271(i,si0);
goto L184;
L209:;
si0=l4;
si1=l10;
i32_store(&i->m0,(U64)si0+280U,si1);
si0=l4;
si1=l4;
si2=144U;
si1+=si2;
i32_store(&i->m0,(U64)si0+208U,si1);
si0=l4;
si1=68U;
i32_store(&i->m0,(U64)si0+260U,si1);
si0=l4;
si1=l4;
si2=280U;
si1+=si2;
i32_store(&i->m0,(U64)si0+256U,si1);
si0=l4;
sj1=1ULL;
i64_store(&i->m0,(U64)si0+172U,sj1);
si0=l4;
si1=1U;
i32_store(&i->m0,(U64)si0+164U,si1);
si0=l4;
si1=1085248U;
i32_store(&i->m0,(U64)si0+160U,si1);
si0=l4;
si1=l4;
si2=256U;
si1+=si2;
i32_store(&i->m0,(U64)si0+168U,si1);
si0=l4;
si1=208U;
si0+=si1;
si1=1085256U;
si2=l4;
si3=160U;
si2+=si3;
si0=f690(i,si0,si1,si2);
if(si0){
goto L218;
}
si0=l10;
si1=12U;
si0+=si1;
l11=si0;
si0=l9;
l10=si0;
goto L208;
L218:;
}
si0=1084925U;
si1=99U;
si2=l4;
si3=272U;
si2+=si3;
si3=1084560U;
si4=1085280U;
f712(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L195:;
si0=l11;
si1=l10;
f52(i,si0,si1);
UNREACHABLE;
L193:;
si0=1U;
si1=l31;
f52(i,si0,si1);
UNREACHABLE;
L185:;
si0=l1;
sj0=i64_load(&i->m0,(U64)si0+16U);
l25=sj0;
sj1=2ULL;
sj0&=sj1;
si0=!(sj0);
if(si0){
goto L219;
}
si0=l1;
si1=84U;
si0+=si1;
l10=si0;
si0=i32_load(&i->m0,(U64)si0);
l11=si0;
si0=l4;
si1=160U;
si0+=si1;
si1=l1;
si2=l2;
si3=0U;
si4=l10;
f558(i,si0,si1,si2,si3,si4);
si0=l0;
si1=l10;
si2=l1;
si3=72U;
si2+=si3;
si3=l11;
si1=si3?si1:si2;
si2=l4;
si3=160U;
si2+=si3;
si3=l1;
sj3=i64_load(&i->m0,(U64)si3+16U);
l25=sj3;
si3=(U32)(sj3);
si4=23U;
si3>>=(si4&31);
si4=1U;
si3&=si4;
si4=2U;
sj5=l25;
sj6=33554432ULL;
sj5&=sj6;
si5=!(sj5);
si3=si5?si3:si4;
f596(i,si0,si1,si2,si3);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+164U);
si0=!(si0);
if(si0){
goto L12;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0+160U);
f15271(i,si0);
goto L12;
L219:;
sj0=l25;
sj1=128ULL;
sj0&=sj1;
si0=!(sj0);
if(si0){
goto L13;
}
si0=l4;
si1=0U;
i32_store(&i->m0,(U64)si0+232U,si1);
si0=l4;
sj1=1ULL;
i64_store(&i->m0,(U64)si0+224U,sj1);
si0=l4;
si1=160U;
si0+=si1;
si1=l4;
si2=224U;
si1+=si2;
si2=1085184U;
si3=l1;
si4=1U;
si5=0U;
f387(i,si0,si1,si2,si3,si4,si5);
si0=l4;
si0=i32_load8_u(&i->m0,(U64)si0+184U);
l10=si0;
si1=20U;
si0=si0 != si1;
if(si0){
goto L221;
}
si0=l4;
si1=160U;
si0+=si1;
si1=l4;
si1=i32_load(&i->m0,(U64)si1+224U);
si2=l4;
si2=i32_load(&i->m0,(U64)si2+232U);
f62(i,si0,si1,si2);
si0=l4;
si1=288U;
si0+=si1;
si1=l4;
si2=160U;
si1+=si2;
f629(i,si0,si1);
si0=l0;
si1=8U;
si0+=si1;
si1=l4;
si2=288U;
si1+=si2;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1+288U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=12U;
l10=si0;
goto L220;
L221:;
si0=l0;
si1=l4;
si1=i32_load16_u(&i->m0,(U64)si1+185U);
i32_store16(&i->m0,(U64)si0+25U,si1);
si0=l4;
si1=120U;
si0+=si1;
si1=16U;
si0+=si1;
si1=l4;
si2=160U;
si1+=si2;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
l25=sj1;
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=120U;
si0+=si1;
si1=8U;
si0+=si1;
si1=l4;
si2=160U;
si1+=si2;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
l26=sj1;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=27U;
si0+=si1;
si1=l4;
si2=160U;
si1+=si2;
si2=27U;
si1+=si2;
si1=i32_load8_u(&i->m0,(U64)si1);
i32_store8(&i->m0,(U64)si0,si1);
si0=l4;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1+160U);
l28=sj1;
i64_store(&i->m0,(U64)si0+120U,sj1);
si0=l0;
si1=16U;
si0+=si1;
sj1=l25;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=8U;
si0+=si1;
sj1=l26;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
sj1=l28;
i64_store(&i->m0,(U64)si0,sj1);
L220:;
si0=l0;
si1=l10;
i32_store8(&i->m0,(U64)si0+24U,si1);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+228U);
si0=!(si0);
if(si0){
goto L12;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0+224U);
f15271(i,si0);
goto L12;
L184:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+152U);
l11=si0;
si1=l4;
si1=i32_load(&i->m0,(U64)si1+148U);
l10=si1;
si0=si0 != si1;
if(si0){
goto L182;
}
L183:;
si0=l4;
si1=144U;
si0+=si1;
si1=l10;
f573(i,si0,si1);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+152U);
l11=si0;
L182:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+144U);
si1=l11;
si0+=si1;
si1=32U;
i32_store8(&i->m0,(U64)si0,si1);
si0=l4;
si1=l4;
si1=i32_load(&i->m0,(U64)si1+152U);
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0+152U,si1);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+244U);
l10=si0;
si0=!(si0);
if(si0){
goto L223;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+236U);
l9=si0;
si0=l10;
si1=312U;
si0*=si1;
l6=si0;
si0=0U;
l10=si0;
L225:;
{
si0=l9;
si1=l10;
si0+=si1;
l11=si0;
si1=80U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=l31;
si0=si0 != si1;
if(si0){
goto L226;
}
si0=l11;
si1=72U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=l14;
si2=l31;
si0=f15389(i,si0,si1,si2);
si0=!(si0);
if(si0){
goto L224;
}
L226:;
si0=l6;
si1=l10;
si2=312U;
si1+=si2;
l10=si1;
si0=si0 != si1;
if(si0){
goto L225;
}
goto L223;
}
L224:;
si0=0U;
si0=f319(i,si0);
l10=si0;
si0=!(si0);
if(si0){
goto L17;
}
si0=l10;
si1=l10;
sj1=i64_load(&i->m0,(U64)si1);
l25=sj1;
sj2=1ULL;
sj1+=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
sj1=0ULL;
i64_store(&i->m0,(U64)si0+192U,sj1);
si0=l4;
si1=0U;
i32_store(&i->m0,(U64)si0+172U,si1);
si0=l4;
sj1=0ULL;
i64_store(&i->m0,(U64)si0+164U,sj1);
si0=l4;
si1=1086680U;
i32_store(&i->m0,(U64)si0+160U,si1);
si0=l4;
si1=l10;
sj1=i64_load(&i->m0,(U64)si1+8U);
i64_store(&i->m0,(U64)si0+184U,sj1);
si0=l4;
sj1=l25;
i64_store(&i->m0,(U64)si0+176U,sj1);
si0=l1;
si1=84U;
si0+=si1;
l10=si0;
si0=i32_load(&i->m0,(U64)si0);
l9=si0;
si0=l4;
si1=0U;
i32_store(&i->m0,(U64)si0+264U,si1);
si0=l4;
sj1=1ULL;
i64_store(&i->m0,(U64)si0+256U,sj1);
si0=l4;
si1=l10;
si2=l4;
si3=256U;
si2+=si3;
si3=l9;
si1=si3?si1:si2;
i32_store(&i->m0,(U64)si0+252U,si1);
si0=l4;
si1=l4;
si1=i32_load(&i->m0,(U64)si1+152U);
si2=0U;
si3=l9;
si1=si3?si1:si2;
i32_store(&i->m0,(U64)si0+276U,si1);
si0=l4;
si1=l4;
si1=i32_load(&i->m0,(U64)si1+144U);
si2=1084668U;
si3=l9;
si1=si3?si1:si2;
i32_store(&i->m0,(U64)si0+272U,si1);
si0=l11;
si1=72U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l9=si0;
si0=l11;
si1=80U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si0=l4;
si1=308U;
si0+=si1;
si1=66U;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=288U;
si0+=si1;
si1=12U;
si0+=si1;
si1=66U;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=l6;
i32_store(&i->m0,(U64)si0+284U,si1);
si0=l4;
si1=l9;
i32_store(&i->m0,(U64)si0+280U,si1);
si0=l4;
si1=68U;
i32_store(&i->m0,(U64)si0+292U,si1);
si0=l4;
si1=l4;
si2=280U;
si1+=si2;
i32_store(&i->m0,(U64)si0+304U,si1);
si0=l4;
si1=l4;
si2=272U;
si1+=si2;
i32_store(&i->m0,(U64)si0+296U,si1);
si0=l4;
si1=l4;
si2=252U;
si1+=si2;
i32_store(&i->m0,(U64)si0+288U,si1);
si0=l4;
si1=0U;
i32_store(&i->m0,(U64)si0+240U,si1);
si0=l4;
si1=3U;
i32_store(&i->m0,(U64)si0+228U,si1);
si0=l4;
si1=1085224U;
i32_store(&i->m0,(U64)si0+224U,si1);
si0=l4;
si1=224U;
si0+=si1;
si1=12U;
si0+=si1;
si1=3U;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=l4;
si2=288U;
si1+=si2;
i32_store(&i->m0,(U64)si0+232U,si1);
si0=l4;
si1=208U;
si0+=si1;
si1=l4;
si2=224U;
si1+=si2;
f63(i,si0,si1);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+260U);
si0=!(si0);
if(si0){
goto L227;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0+256U);
f15271(i,si0);
L227:;
si0=l11;
si1=172U;
si0+=si1;
l9=si0;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si0=!(si0);
if(si0){
goto L228;
}
si0=l11;
si1=176U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L228;
}
si0=l6;
f15271(i,si0);
L228:;
si0=l9;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1+208U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l9;
si1=8U;
si0+=si1;
si1=l4;
si2=208U;
si1+=si2;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l10;
si0=i32_load(&i->m0,(U64)si0);
l9=si0;
si0=l4;
si1=0U;
i32_store(&i->m0,(U64)si0+264U,si1);
si0=l4;
sj1=1ULL;
i64_store(&i->m0,(U64)si0+256U,sj1);
si0=l4;
si1=l10;
si2=l4;
si3=256U;
si2+=si3;
si3=l9;
si1=si3?si1:si2;
i32_store(&i->m0,(U64)si0+252U,si1);
si0=l4;
si1=l9;
si2=0U;
si1=si1 != si2;
i32_store(&i->m0,(U64)si0+276U,si1);
si0=l4;
si1=1085024U;
si2=1084668U;
si3=l9;
si1=si3?si1:si2;
i32_store(&i->m0,(U64)si0+272U,si1);
si0=l11;
si1=72U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l10=si0;
si0=l11;
si1=80U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l9=si0;
si0=l4;
si1=308U;
si0+=si1;
si1=66U;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=288U;
si0+=si1;
si1=12U;
si0+=si1;
si1=66U;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=l9;
i32_store(&i->m0,(U64)si0+284U,si1);
si0=l4;
si1=l10;
i32_store(&i->m0,(U64)si0+280U,si1);
si0=l4;
si1=68U;
i32_store(&i->m0,(U64)si0+292U,si1);
si0=l4;
si1=l4;
si2=280U;
si1+=si2;
i32_store(&i->m0,(U64)si0+304U,si1);
si0=l4;
si1=l4;
si2=272U;
si1+=si2;
i32_store(&i->m0,(U64)si0+296U,si1);
si0=l4;
si1=l4;
si2=252U;
si1+=si2;
i32_store(&i->m0,(U64)si0+288U,si1);
si0=l4;
si1=0U;
i32_store(&i->m0,(U64)si0+240U,si1);
si0=l4;
si1=3U;
i32_store(&i->m0,(U64)si0+228U,si1);
si0=l4;
si1=1085224U;
i32_store(&i->m0,(U64)si0+224U,si1);
si0=l4;
si1=224U;
si0+=si1;
si1=12U;
si0+=si1;
si1=3U;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=l4;
si2=288U;
si1+=si2;
i32_store(&i->m0,(U64)si0+232U,si1);
si0=l4;
si1=208U;
si0+=si1;
si1=l4;
si2=224U;
si1+=si2;
f63(i,si0,si1);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+260U);
si0=!(si0);
if(si0){
goto L229;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0+256U);
f15271(i,si0);
L229:;
si0=l11;
si1=84U;
si0+=si1;
l10=si0;
si0=i32_load(&i->m0,(U64)si0);
l9=si0;
si0=!(si0);
if(si0){
goto L230;
}
si0=l11;
si1=88U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L230;
}
si0=l9;
f15271(i,si0);
L230:;
si0=l10;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1+208U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l10;
si1=8U;
si0+=si1;
si1=l4;
si2=208U;
si1+=si2;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=288U;
si0+=si1;
si1=l11;
si2=l4;
si3=160U;
si2+=si3;
si3=l3;
f260(i,si0,si1,si2,si3);
si0=l4;
si0=i32_load8_u(&i->m0,(U64)si0+312U);
l10=si0;
si1=20U;
si0=si0 != si1;
if(si0){
goto L222;
}
si0=l11;
si1=72U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l10=si0;
si0=l11;
si1=80U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l11=si0;
if(si0){
goto L232;
}
si0=1U;
l9=si0;
goto L231;
L232:;
si0=l11;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L18;
}
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=l11;
si0=f15269(i,si0);
l9=si0;
si0=!(si0);
if(si0){
goto L16;
}
L231:;
si0=l9;
si1=l10;
si2=l11;
si0=f15390(i,si0,si1,si2);
l9=si0;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=64U;
si0=f15269(i,si0);
l10=si0;
si0=!(si0);
if(si0){
goto L15;
}
si0=l10;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1+160U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l10;
si1=l11;
i32_store(&i->m0,(U64)si0+56U,si1);
si0=l10;
si1=l11;
i32_store(&i->m0,(U64)si0+52U,si1);
si0=l10;
si1=l9;
i32_store(&i->m0,(U64)si0+48U,si1);
si0=l10;
si1=40U;
si0+=si1;
si1=l4;
si2=160U;
si1+=si2;
si2=40U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l10;
si1=32U;
si0+=si1;
si1=l4;
si2=160U;
si1+=si2;
si2=32U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l10;
si1=24U;
si0+=si1;
si1=l4;
si2=160U;
si1+=si2;
si2=24U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l10;
si1=16U;
si0+=si1;
si1=l4;
si2=160U;
si1+=si2;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l10;
si1=8U;
si0+=si1;
si1=l4;
si2=160U;
si1+=si2;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si0=i32_load(&i->m0,(U64)si0+32U);
l11=si0;
si0=!(si0);
if(si0){
goto L233;
}
si0=l11;
si1=52U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L234;
}
si0=l11;
si0=i32_load(&i->m0,(U64)si0+48U);
f15271(i,si0);
L234:;
si0=l11;
f615(i,si0);
si0=l11;
f15271(i,si0);
L233:;
si0=l2;
si1=l10;
i32_store(&i->m0,(U64)si0+32U,si1);
L223:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+148U);
si0=!(si0);
if(si0){
goto L235;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0+144U);
f15271(i,si0);
L235:;
si0=l31;
si0=!(si0);
if(si0){
goto L13;
}
si0=l14;
f15271(i,si0);
goto L13;
L222:;
si0=l0;
si1=l4;
si1=i32_load16_u(&i->m0,(U64)si1+313U);
i32_store16(&i->m0,(U64)si0+25U,si1);
si0=l4;
si1=96U;
si0+=si1;
si1=16U;
si0+=si1;
l11=si0;
si1=l4;
si2=288U;
si1+=si2;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=96U;
si0+=si1;
si1=8U;
si0+=si1;
si1=l4;
si2=288U;
si1+=si2;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=27U;
si0+=si1;
si1=l4;
si2=288U;
si1+=si2;
si2=27U;
si1+=si2;
si1=i32_load8_u(&i->m0,(U64)si1);
i32_store8(&i->m0,(U64)si0,si1);
si0=l4;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1+288U);
i64_store(&i->m0,(U64)si0+96U,sj1);
si0=l4;
si1=160U;
si0+=si1;
f240(i,si0);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+148U);
si0=!(si0);
if(si0){
goto L236;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0+144U);
f15271(i,si0);
L236:;
si0=l0;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1+96U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=l10;
i32_store8(&i->m0,(U64)si0+24U,si1);
si0=l0;
si1=16U;
si0+=si1;
si1=l11;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=8U;
si0+=si1;
si1=l4;
si2=96U;
si1+=si2;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l31;
si0=!(si0);
if(si0){
goto L14;
}
si0=l14;
f15271(i,si0);
goto L14;
L18:;
f53(i);
UNREACHABLE;
L17:;
si0=1093060U;
si1=70U;
si2=l4;
si3=272U;
si2+=si3;
si3=1093132U;
si4=1093228U;
f712(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L16:;
si0=1U;
si1=l11;
f52(i,si0,si1);
UNREACHABLE;
L15:;
si0=8U;
si1=64U;
f52(i,si0,si1);
UNREACHABLE;
L14:;
si0=l8;
si0=!(si0);
if(si0){
goto L12;
}
si0=l27;
f15271(i,si0);
goto L12;
L13:;
si0=l1;
sj0=i64_load(&i->m0,(U64)si0+16U);
l25=sj0;
si0=0U;
l11=si0;
si0=0U;
l9=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+220U);
l10=si0;
si0=!(si0);
if(si0){
goto L237;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+212U);
l9=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+36U);
si1=0U;
si2=l1;
si2=i32_load(&i->m0,(U64)si2+32U);
l30=si2;
si0=si2?si0:si1;
l6=si0;
si0=l10;
si1=120U;
si0*=si1;
l10=si0;
si0=l30;
si1=1084668U;
si2=l30;
si0=si2?si0:si1;
l30=si0;
L238:;
{
si0=l9;
si1=36U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=l6;
si0=si0 != si1;
if(si0){
goto L239;
}
si0=l9;
si1=32U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=l30;
si2=l6;
si0=f15389(i,si0,si1,si2);
si0=!(si0);
if(si0){
goto L237;
}
L239:;
si0=l9;
si1=120U;
si0+=si1;
l9=si0;
si0=l10;
si1=-120U;
si0+=si1;
l10=si0;
if(si0){
goto L238;
}
}
si0=0U;
l9=si0;
L237:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+232U);
l10=si0;
si0=!(si0);
if(si0){
goto L240;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+224U);
l11=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+36U);
si1=0U;
si2=l1;
si2=i32_load(&i->m0,(U64)si2+32U);
l30=si2;
si0=si2?si0:si1;
l6=si0;
si0=l10;
si1=272U;
si0*=si1;
l10=si0;
si0=l30;
si1=1084668U;
si2=l30;
si0=si2?si0:si1;
l30=si0;
L241:;
{
si0=l11;
si1=188U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=l6;
si0=si0 != si1;
if(si0){
goto L242;
}
si0=l11;
si1=184U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=l30;
si2=l6;
si0=f15389(i,si0,si1,si2);
si0=!(si0);
if(si0){
goto L240;
}
L242:;
si0=l11;
si1=272U;
si0+=si1;
l11=si0;
si0=l10;
si1=-272U;
si0+=si1;
l10=si0;
if(si0){
goto L241;
}
}
si0=0U;
l11=si0;
L240:;
sj0=l25;
sj1=1099511627776ULL;
sj0&=sj1;
l25=sj0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+8U);
l3=si0;
si0=!(si0);
if(si0){
goto L244;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l10=si0;
si1=l3;
si2=248U;
si1*=si2;
si0+=si1;
l30=si0;
si0=0U;
l24=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+36U);
si1=0U;
si2=l1;
si2=i32_load(&i->m0,(U64)si2+32U);
l6=si2;
si0=si2?si0:si1;
l31=si0;
si0=l6;
si1=1084668U;
si2=l6;
si0=si2?si0:si1;
l14=si0;
L245:;
{
si0=l30;
l6=si0;
si0=l10;
si1=l30;
si0=si0 == si1;
if(si0){
goto L247;
}
si0=l10;
si1=248U;
si0+=si1;
l6=si0;
si0=l10;
sj0=i64_load(&i->m0,(U64)si0);
sj1=2ULL;
si0=sj0 != sj1;
if(si0){
goto L246;
}
L247:;
si0=l6;
l10=si0;
si0=l24;
si1=1U;
si0+=si1;
l24=si0;
si1=l3;
si0=si0 != si1;
if(si0){
goto L245;
}
goto L244;
L246:;
si0=l10;
si1=156U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=l31;
si0=si0 != si1;
if(si0){
goto L248;
}
si0=l10;
si0=i32_load(&i->m0,(U64)si0+152U);
si1=l14;
si2=l31;
si0=f15389(i,si0,si1,si2);
si0=!(si0);
if(si0){
goto L243;
}
L248:;
si0=l6;
l10=si0;
si0=l24;
si1=1U;
si0+=si1;
l24=si0;
si1=l3;
si0=si0 < si1;
if(si0){
goto L245;
}
}
L244:;
si0=0U;
l10=si0;
L243:;
si0=l2;
si1=l9;
si2=l11;
si3=l10;
si4=l11;
si2=si4?si2:si3;
si3=l9;
si1=si3?si1:si2;
si2=1085684U;
si3=1085552U;
si4=1085808U;
si5=l11;
si3=si5?si3:si4;
si4=l9;
si2=si4?si2:si3;
si3=l16;
si4=l15;
sj5=l25;
sj6=0ULL;
si5=sj5 != sj6;
f637(i,si0,si1,si2,si3,si4,si5);
si0=l1;
si1=l2;
f269(i,si0,si1);
si0=l4;
si1=l1;
i32_store(&i->m0,(U64)si0+224U,si1);
si0=l4;
si1=l7;
i32_store(&i->m0,(U64)si0+296U,si1);
si0=l4;
si1=l5;
i32_store(&i->m0,(U64)si0+292U,si1);
si0=l4;
si1=l19;
i32_store(&i->m0,(U64)si0+288U,si1);
si0=l4;
si1=l8;
i32_store(&i->m0,(U64)si0+168U,si1);
si0=l4;
si1=l8;
i32_store(&i->m0,(U64)si0+164U,si1);
si0=l4;
si1=l27;
i32_store(&i->m0,(U64)si0+160U,si1);
si0=l0;
si1=l4;
si2=224U;
si1+=si2;
si2=l4;
si3=288U;
si2+=si3;
si3=l4;
si4=160U;
si3+=si4;
si4=l2;
f434(i,si0,si1,si2,si3,si4);
L12:;
si0=l4;
si1=320U;
si0+=si1;
i->g0=si0;
L0:;
}

void f261(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4) {
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
U32 l18=0;
U32 l19=0;
U32 l20=0;
U64 l21=0;
U64 l22=0;
U32 si0,si1,si2,si3,si4,si5,si6,si7,si8,si9;
U64 sj0,sj1,sj2,sj7,sj9,sj10;
si0=i->g0;
si1=208U;
si0-=si1;
l5=si0;
i->g0=si0;
si0=l5;
si1=8U;
si0+=si1;
si1=l3;
si2=l4;
si3=45U;
f369(i,si0,si1,si2,si3);
si0=l5;
si1=16U;
si0+=si1;
si1=l5;
si1=i32_load(&i->m0,(U64)si1+8U);
l6=si1;
si2=l5;
si2=i32_load(&i->m0,(U64)si2+12U);
l7=si2;
f62(i,si0,si1,si2);
si0=l1;
sj0=i64_load(&i->m0,(U64)si0+16U);
l8=sj0;
sj1=262144ULL;
sj0&=sj1;
sj1=0ULL;
si0=sj0 != sj1;
if(si0){
goto L12;
}
sj0=l8;
sj1=34359738368ULL;
sj0&=sj1;
sj1=0ULL;
si0=sj0 != sj1;
if(si0){
goto L11;
}
si0=l5;
si1=24U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l9=si0;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+20U);
l10=si0;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+16U);
l11=si0;
goto L9;
L12:;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+20U);
l10=si0;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+16U);
l11=si0;
si0=l5;
si1=24U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l9=si0;
if(si0){
goto L13;
}
si0=l0;
si1=20U;
i32_store8(&i->m0,(U64)si0+24U,si1);
si0=l0;
si1=5U;
i32_store(&i->m0,(U64)si0,si1);
si0=l11;
if(si0){
goto L3;
}
goto L1;
L13:;
si0=l11;
si1=l10;
si2=l11;
si0=si2?si0:si1;
l12=si0;
si1=l9;
si0+=si1;
l13=si0;
si0=l1;
si1=232U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+224U);
l3=si0;
si0=l1;
si1=220U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l14=si0;
if(si0){
goto L14;
}
si0=l4;
si0=!(si0);
if(si0){
goto L8;
}
si0=l3;
si1=152U;
si0+=si1;
l15=si0;
si0=l4;
si1=272U;
si0*=si1;
l16=si0;
L15:;
{
si0=l12;
si0=i32_load8_s(&i->m0,(U64)si0);
l4=si0;
si1=-1U;
si0=(U32)((I32)si0>(I32)si1);
if(si0){
goto L17;
}
si0=l12;
si0=i32_load8_u(&i->m0,(U64)si0+1U);
si1=63U;
si0&=si1;
l3=si0;
si0=l4;
si1=31U;
si0&=si1;
l14=si0;
si0=l4;
si1=-32U;
si0=si0 >= si1;
if(si0){
goto L18;
}
si0=l14;
si1=6U;
si0<<=(si1&31);
si1=l3;
si0|=si1;
l17=si0;
si0=l12;
si1=2U;
si0+=si1;
l12=si0;
goto L16;
L18:;
si0=l3;
si1=6U;
si0<<=(si1&31);
si1=l12;
si1=i32_load8_u(&i->m0,(U64)si1+2U);
si2=63U;
si1&=si2;
si0|=si1;
l3=si0;
si0=l4;
si1=-16U;
si0=si0 >= si1;
if(si0){
goto L19;
}
si0=l3;
si1=l14;
si2=12U;
si1<<=(si2&31);
si0|=si1;
l17=si0;
si0=l12;
si1=3U;
si0+=si1;
l12=si0;
goto L16;
L19:;
si0=l3;
si1=6U;
si0<<=(si1&31);
si1=l12;
si1=i32_load8_u(&i->m0,(U64)si1+3U);
si2=63U;
si1&=si2;
si0|=si1;
si1=l14;
si2=18U;
si1<<=(si2&31);
si2=1835008U;
si1&=si2;
si0|=si1;
l17=si0;
si1=1114112U;
si0=si0 == si1;
if(si0){
goto L9;
}
si0=l12;
si1=4U;
si0+=si1;
l12=si0;
goto L16;
L17:;
si0=l12;
si1=1U;
si0+=si1;
l12=si0;
si0=l4;
si1=255U;
si0&=si1;
l17=si0;
L16:;
si0=l15;
l4=si0;
si0=l16;
l3=si0;
L21:;
{
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
l14=si0;
si1=1114112U;
si0=si0 == si1;
if(si0){
goto L22;
}
si0=l17;
si1=l14;
si0=si0 == si1;
if(si0){
goto L20;
}
L22:;
si0=l4;
si1=272U;
si0+=si1;
l4=si0;
si0=l3;
si1=-272U;
si0+=si1;
l3=si0;
if(si0){
goto L21;
}
goto L7;
}
L20:;
si0=l12;
si1=l13;
si0=si0 != si1;
if(si0){
goto L15;
}
goto L9;
}
L14:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+212U);
l15=si0;
si0=l4;
si0=!(si0);
if(si0){
goto L10;
}
si0=l4;
si1=272U;
si0*=si1;
l18=si0;
si0=l3;
si1=152U;
si0+=si1;
l19=si0;
si0=l14;
si1=120U;
si0*=si1;
l16=si0;
L23:;
{
si0=l12;
si0=i32_load8_s(&i->m0,(U64)si0);
l4=si0;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L25;
}
si0=l12;
si1=1U;
si0+=si1;
l12=si0;
si0=l4;
si1=255U;
si0&=si1;
l17=si0;
goto L24;
L25:;
si0=l12;
si0=i32_load8_u(&i->m0,(U64)si0+1U);
si1=63U;
si0&=si1;
l3=si0;
si0=l4;
si1=31U;
si0&=si1;
l14=si0;
si0=l4;
si1=-33U;
si0=si0 > si1;
if(si0){
goto L26;
}
si0=l14;
si1=6U;
si0<<=(si1&31);
si1=l3;
si0|=si1;
l17=si0;
si0=l12;
si1=2U;
si0+=si1;
l12=si0;
goto L24;
L26:;
si0=l3;
si1=6U;
si0<<=(si1&31);
si1=l12;
si1=i32_load8_u(&i->m0,(U64)si1+2U);
si2=63U;
si1&=si2;
si0|=si1;
l3=si0;
si0=l4;
si1=-16U;
si0=si0 >= si1;
if(si0){
goto L27;
}
si0=l3;
si1=l14;
si2=12U;
si1<<=(si2&31);
si0|=si1;
l17=si0;
si0=l12;
si1=3U;
si0+=si1;
l12=si0;
goto L24;
L27:;
si0=l3;
si1=6U;
si0<<=(si1&31);
si1=l12;
si1=i32_load8_u(&i->m0,(U64)si1+3U);
si2=63U;
si1&=si2;
si0|=si1;
si1=l14;
si2=18U;
si1<<=(si2&31);
si2=1835008U;
si1&=si2;
si0|=si1;
l17=si0;
si1=1114112U;
si0=si0 == si1;
if(si0){
goto L9;
}
si0=l12;
si1=4U;
si0+=si1;
l12=si0;
L24:;
si0=l16;
l3=si0;
si0=l15;
l4=si0;
L29:;
{
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
l14=si0;
si1=1114112U;
si0=si0 == si1;
if(si0){
goto L30;
}
si0=l17;
si1=l14;
si0=si0 == si1;
if(si0){
goto L28;
}
L30:;
si0=l4;
si1=120U;
si0+=si1;
l4=si0;
si0=l3;
si1=-120U;
si0+=si1;
l3=si0;
if(si0){
goto L29;
}
}
si0=l18;
l3=si0;
si0=l19;
l4=si0;
L31:;
{
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
l14=si0;
si1=1114112U;
si0=si0 == si1;
if(si0){
goto L32;
}
si0=l17;
si1=l14;
si0=si0 == si1;
if(si0){
goto L28;
}
L32:;
si0=l4;
si1=272U;
si0+=si1;
l4=si0;
si0=l3;
si1=-272U;
si0+=si1;
l3=si0;
if(si0){
goto L31;
}
goto L7;
}
L28:;
si0=l12;
si1=l13;
si0=si0 != si1;
if(si0){
goto L23;
}
goto L9;
}
L11:;
si0=l0;
si1=20U;
i32_store8(&i->m0,(U64)si0+24U,si1);
si0=l0;
si1=4U;
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si0=i32_load(&i->m0,(U64)si0+16U);
l11=si0;
goto L5;
L10:;
si0=l14;
si1=120U;
si0*=si1;
l16=si0;
L33:;
{
si0=l12;
si0=i32_load8_s(&i->m0,(U64)si0);
l4=si0;
si1=-1U;
si0=(U32)((I32)si0>(I32)si1);
if(si0){
goto L35;
}
si0=l12;
si0=i32_load8_u(&i->m0,(U64)si0+1U);
si1=63U;
si0&=si1;
l3=si0;
si0=l4;
si1=31U;
si0&=si1;
l14=si0;
si0=l4;
si1=-32U;
si0=si0 >= si1;
if(si0){
goto L36;
}
si0=l14;
si1=6U;
si0<<=(si1&31);
si1=l3;
si0|=si1;
l17=si0;
si0=l12;
si1=2U;
si0+=si1;
l12=si0;
goto L34;
L36:;
si0=l3;
si1=6U;
si0<<=(si1&31);
si1=l12;
si1=i32_load8_u(&i->m0,(U64)si1+2U);
si2=63U;
si1&=si2;
si0|=si1;
l3=si0;
si0=l4;
si1=-16U;
si0=si0 >= si1;
if(si0){
goto L37;
}
si0=l3;
si1=l14;
si2=12U;
si1<<=(si2&31);
si0|=si1;
l17=si0;
si0=l12;
si1=3U;
si0+=si1;
l12=si0;
goto L34;
L37:;
si0=l3;
si1=6U;
si0<<=(si1&31);
si1=l12;
si1=i32_load8_u(&i->m0,(U64)si1+3U);
si2=63U;
si1&=si2;
si0|=si1;
si1=l14;
si2=18U;
si1<<=(si2&31);
si2=1835008U;
si1&=si2;
si0|=si1;
l17=si0;
si1=1114112U;
si0=si0 == si1;
if(si0){
goto L9;
}
si0=l12;
si1=4U;
si0+=si1;
l12=si0;
goto L34;
L35:;
si0=l12;
si1=1U;
si0+=si1;
l12=si0;
si0=l4;
si1=255U;
si0&=si1;
l17=si0;
L34:;
si0=l16;
l3=si0;
si0=l15;
l4=si0;
L39:;
{
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
l14=si0;
si1=1114112U;
si0=si0 == si1;
if(si0){
goto L40;
}
si0=l17;
si1=l14;
si0=si0 == si1;
if(si0){
goto L38;
}
L40:;
si0=l4;
si1=120U;
si0+=si1;
l4=si0;
si0=l3;
si1=-120U;
si0+=si1;
l3=si0;
if(si0){
goto L39;
}
goto L7;
}
L38:;
si0=l12;
si1=l13;
si0=si0 != si1;
if(si0){
goto L33;
}
}
L9:;
si0=l11;
si0=!(si0);
l16=si0;
si0=l9;
si0=!(si0);
if(si0){
goto L41;
}
si0=l11;
si1=l10;
si2=l11;
si0=si2?si0:si1;
l15=si0;
si1=l9;
si0+=si1;
l18=si0;
goto L6;
L41:;
si0=5U;
l14=si0;
goto L4;
L8:;
si0=l12;
si0=i32_load8_s(&i->m0,(U64)si0);
l4=si0;
si1=-1U;
si0=(U32)((I32)si0>(I32)si1);
if(si0){
goto L7;
}
si0=l4;
si1=-32U;
si0=si0 < si1;
if(si0){
goto L7;
}
si0=l4;
si1=-16U;
si0=si0 < si1;
if(si0){
goto L7;
}
si0=l12;
si0=i32_load8_u(&i->m0,(U64)si0+1U);
si1=63U;
si0&=si1;
si1=12U;
si0<<=(si1&31);
si1=l12;
si1=i32_load8_u(&i->m0,(U64)si1+2U);
si2=63U;
si1&=si2;
si2=6U;
si1<<=(si2&31);
si0|=si1;
si1=l12;
si1=i32_load8_u(&i->m0,(U64)si1+3U);
si2=63U;
si1&=si2;
si0|=si1;
si1=l4;
si2=255U;
si1&=si2;
si2=18U;
si1<<=(si2&31);
si2=1835008U;
si1&=si2;
si0|=si1;
si1=1114112U;
si0=si0 != si1;
if(si0){
goto L7;
}
si0=l11;
si1=l10;
si2=l11;
si0=si2?si0:si1;
l15=si0;
si1=l9;
si0+=si1;
l18=si0;
si0=l11;
si0=!(si0);
l16=si0;
goto L6;
L7:;
si0=l0;
si1=20U;
i32_store8(&i->m0,(U64)si0+24U,si1);
si0=l0;
si1=3U;
i32_store(&i->m0,(U64)si0,si1);
goto L5;
L6:;
si0=l5;
si1=161U;
si0+=si1;
l19=si0;
si0=l5;
si1=136U;
si0+=si1;
si1=12U;
si0+=si1;
l20=si0;
si0=5U;
l14=si0;
si0=l15;
l13=si0;
L42:;
{
si0=l13;
si0=i32_load8_s(&i->m0,(U64)si0);
l4=si0;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L44;
}
si0=l13;
si1=1U;
si0+=si1;
l13=si0;
si0=l4;
si1=255U;
si0&=si1;
l12=si0;
goto L43;
L44:;
si0=l13;
si0=i32_load8_u(&i->m0,(U64)si0+1U);
si1=63U;
si0&=si1;
l3=si0;
si0=l4;
si1=31U;
si0&=si1;
l17=si0;
si0=l4;
si1=-33U;
si0=si0 > si1;
if(si0){
goto L45;
}
si0=l17;
si1=6U;
si0<<=(si1&31);
si1=l3;
si0|=si1;
l12=si0;
si0=l13;
si1=2U;
si0+=si1;
l13=si0;
goto L43;
L45:;
si0=l3;
si1=6U;
si0<<=(si1&31);
si1=l13;
si1=i32_load8_u(&i->m0,(U64)si1+2U);
si2=63U;
si1&=si2;
si0|=si1;
l3=si0;
si0=l4;
si1=-16U;
si0=si0 >= si1;
if(si0){
goto L46;
}
si0=l3;
si1=l17;
si2=12U;
si1<<=(si2&31);
si0|=si1;
l12=si0;
si0=l13;
si1=3U;
si0+=si1;
l13=si0;
goto L43;
L46:;
si0=l3;
si1=6U;
si0<<=(si1&31);
si1=l13;
si1=i32_load8_u(&i->m0,(U64)si1+3U);
si2=63U;
si1&=si2;
si0|=si1;
si1=l17;
si2=18U;
si1<<=(si2&31);
si2=1835008U;
si1&=si2;
si0|=si1;
l12=si0;
si1=1114112U;
si0=si0 == si1;
if(si0){
goto L4;
}
si0=l13;
si1=4U;
si0+=si1;
l13=si0;
L43:;
si0=l1;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+308U);
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0+308U,si1);
si0=l5;
si1=l12;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+232U);
si1=272U;
si0*=si1;
l3=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+224U);
si1=-272U;
si0+=si1;
l4=si0;
L52:;
{
si0=l3;
si0=!(si0);
if(si0){
goto L51;
}
si0=l3;
si1=-272U;
si0+=si1;
l3=si0;
si0=l4;
si1=424U;
si0+=si1;
l14=si0;
si0=l4;
si1=272U;
si0+=si1;
l17=si0;
l4=si0;
si0=l14;
si0=i32_load(&i->m0,(U64)si0);
l14=si0;
si1=1114112U;
si0=si0 == si1;
if(si0){
goto L52;
}
si0=l17;
l4=si0;
si0=l14;
si1=l12;
si0=si0 != si1;
if(si0){
goto L52;
}
}
si0=l1;
si1=l1;
sj1=i64_load(&i->m0,(U64)si1+16U);
sj2=137438953472ULL;
sj1|=sj2;
i64_store(&i->m0,(U64)si0+16U,sj1);
si0=l12;
l4=si0;
si0=1U;
l3=si0;
si0=l12;
si1=128U;
si0=si0 < si1;
if(si0){
goto L47;
}
si0=l12;
si1=2048U;
si0=si0 < si1;
if(si0){
goto L50;
}
si0=l12;
si1=65536U;
si0=si0 >= si1;
if(si0){
goto L53;
}
si0=l12;
si1=12U;
si0>>=(si1&31);
si1=l12;
si2=2U;
si1<<=(si2&31);
si2=16128U;
si1&=si2;
si0|=si1;
si1=l12;
si2=16U;
si1<<=(si2&31);
si2=4128768U;
si1&=si2;
si0|=si1;
si1=8421600U;
si0|=si1;
l4=si0;
si0=3U;
l3=si0;
goto L47;
L53:;
si0=4U;
l3=si0;
si0=l12;
si1=18U;
si0>>=(si1&31);
si1=l12;
si2=4U;
si1>>=(si2&31);
si2=16128U;
si1&=si2;
si0|=si1;
si1=l12;
si2=10U;
si1<<=(si2&31);
si2=4128768U;
si1&=si2;
si0|=si1;
si1=l12;
si2=24U;
si1<<=(si2&31);
si2=1056964608U;
si1&=si2;
si0|=si1;
si1=-2139062032U;
si0|=si1;
l4=si0;
goto L47;
L51:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+220U);
si1=120U;
si0*=si1;
l4=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+212U);
si1=-120U;
si0+=si1;
l3=si0;
L57:;
{
si0=l4;
si0=!(si0);
if(si0){
goto L56;
}
si0=l4;
si1=-120U;
si0+=si1;
l4=si0;
si0=l3;
si1=120U;
si0+=si1;
l3=si0;
si0=i32_load(&i->m0,(U64)si0);
l14=si0;
si1=1114112U;
si0=si0 == si1;
if(si0){
goto L57;
}
si0=l14;
si1=l12;
si0=si0 != si1;
if(si0){
goto L57;
}
}
si0=l1;
si1=l1;
sj1=i64_load(&i->m0,(U64)si1+16U);
l8=sj1;
sj2=137438953472ULL;
sj1|=sj2;
i64_store(&i->m0,(U64)si0+16U,sj1);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+204U);
l4=si0;
si1=1114112U;
si0=si0 == si1;
if(si0){
goto L61;
}
si0=l4;
si1=l12;
si0=si0 != si1;
if(si0){
goto L61;
}
sj0=l8;
sj1=256ULL;
sj0&=sj1;
sj1=0ULL;
si0=sj0 != sj1;
if(si0){
goto L60;
}
L61:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+208U);
l4=si0;
si1=1114112U;
si0=si0 == si1;
if(si0){
goto L58;
}
si0=l4;
si1=l12;
si0=si0 != si1;
if(si0){
goto L58;
}
sj0=l8;
sj1=512ULL;
sj0&=sj1;
si0=!(sj0);
if(si0){
goto L58;
}
si0=l5;
si1=136U;
si0+=si1;
si1=l1;
si2=0U;
f263(i,si0,si1,si2);
goto L59;
L60:;
si0=l5;
si1=136U;
si0+=si1;
si1=l1;
si2=0U;
f258(i,si0,si1,si2);
L59:;
si0=l5;
si0=i32_load8_u(&i->m0,(U64)si0+160U);
l4=si0;
si1=20U;
si0=si0 != si1;
if(si0){
goto L55;
}
L58:;
si0=l5;
si1=136U;
si0+=si1;
si1=l1;
si2=l3;
si3=l2;
f264(i,si0,si1,si2,si3);
si0=l5;
sj0=i64_load(&i->m0,(U64)si0+140U);
l8=sj0;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+136U);
l14=si0;
si0=l5;
si0=i32_load8_u(&i->m0,(U64)si0+160U);
l4=si0;
si1=20U;
si0=si0 == si1;
if(si0){
goto L54;
}
si0=l0;
si1=l19;
si1=i32_load16_u(&i->m0,(U64)si1);
i32_store16(&i->m0,(U64)si0+25U,si1);
si0=l5;
si1=192U;
si0+=si1;
si1=8U;
si0+=si1;
si1=l20;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
l3=si1;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=27U;
si0+=si1;
si1=l19;
si2=2U;
si1+=si2;
si1=i32_load8_u(&i->m0,(U64)si1);
i32_store8(&i->m0,(U64)si0,si1);
si0=l5;
si1=l20;
sj1=i64_load(&i->m0,(U64)si1);
l21=sj1;
i64_store(&i->m0,(U64)si0+192U,sj1);
si0=l0;
sj1=l8;
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l0;
si1=l14;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
sj1=l21;
i64_store(&i->m0,(U64)si0+12U,sj1);
si0=l0;
si1=20U;
si0+=si1;
si1=l3;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l4;
i32_store8(&i->m0,(U64)si0+24U,si1);
goto L5;
L56:;
si0=l5;
si1=148U;
si0+=si1;
sj1=1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=1085544U;
i32_store(&i->m0,(U64)si0+136U,si1);
si0=l5;
si1=21U;
i32_store(&i->m0,(U64)si0+36U,si1);
si0=l5;
si1=l5;
si2=32U;
si1+=si2;
i32_store(&i->m0,(U64)si0+144U,si1);
si0=l5;
si1=l5;
si2=28U;
si1+=si2;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l5;
si1=1U;
i32_store(&i->m0,(U64)si0+140U,si1);
si0=l5;
si1=96U;
si0+=si1;
si1=l5;
si2=136U;
si1+=si2;
f63(i,si0,si1);
si0=l5;
si0=i32_load(&i->m0,(U64)si0+96U);
l4=si0;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+104U);
l3=si0;
si0=l5;
si1=136U;
si0+=si1;
si1=l1;
si2=l2;
si3=0U;
si4=l4;
f558(i,si0,si1,si2,si3,si4);
si0=l0;
si1=l4;
si2=l3;
si3=1084668U;
si4=0U;
si5=l5;
si5=i32_load(&i->m0,(U64)si5+136U);
l14=si5;
si6=l5;
si6=i32_load(&i->m0,(U64)si6+144U);
si7=l1;
sj7=i64_load(&i->m0,(U64)si7+16U);
l8=sj7;
si7=(U32)(sj7);
si8=23U;
si7>>=(si8&31);
si8=1U;
si7&=si8;
si8=2U;
sj9=l8;
sj10=33554432ULL;
sj9&=sj10;
si9=!(sj9);
si7=si9?si7:si8;
f603(i,si0,si1,si2,si3,si4,si5,si6,si7);
si0=l5;
si0=i32_load(&i->m0,(U64)si0+140U);
si0=!(si0);
if(si0){
goto L62;
}
si0=l14;
f15271(i,si0);
L62:;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+100U);
si0=!(si0);
if(si0){
goto L5;
}
si0=l4;
f15271(i,si0);
goto L5;
L55:;
si0=l0;
si1=l19;
si1=i32_load16_u(&i->m0,(U64)si1);
i32_store16(&i->m0,(U64)si0+25U,si1);
si0=l5;
si1=168U;
si0+=si1;
si1=16U;
si0+=si1;
si1=l5;
si2=136U;
si1+=si2;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
l8=sj1;
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=168U;
si0+=si1;
si1=8U;
si0+=si1;
si1=l5;
si2=136U;
si1+=si2;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
l21=sj1;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=27U;
si0+=si1;
si1=l19;
si2=2U;
si1+=si2;
si1=i32_load8_u(&i->m0,(U64)si1);
i32_store8(&i->m0,(U64)si0,si1);
si0=l5;
si1=l5;
sj1=i64_load(&i->m0,(U64)si1+136U);
l22=sj1;
i64_store(&i->m0,(U64)si0+168U,sj1);
si0=l0;
si1=16U;
si0+=si1;
sj1=l8;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=8U;
si0+=si1;
sj1=l21;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
sj1=l22;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=l4;
i32_store8(&i->m0,(U64)si0+24U,si1);
goto L5;
L54:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+32U);
l17=si0;
if(si0){
goto L63;
}
si0=l3;
si1=36U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
goto L49;
L63:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+36U);
l12=si0;
si1=l3;
si2=36U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
l4=si1;
si0=si0 != si1;
if(si0){
goto L49;
}
si0=l12;
l4=si0;
si0=l17;
si1=l3;
si2=32U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
si2=l12;
si0=f15389(i,si0,si1,si2);
if(si0){
goto L49;
}
goto L48;
L50:;
si0=l12;
si1=6U;
si0>>=(si1&31);
si1=l12;
si2=8U;
si1<<=(si2&31);
si2=16128U;
si1&=si2;
si0|=si1;
si1=32960U;
si0|=si1;
l4=si0;
si0=2U;
l3=si0;
goto L47;
L49:;
si0=l3;
si1=32U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=l1;
si1=l4;
i32_store(&i->m0,(U64)si0+36U,si1);
si0=l1;
si1=l3;
i32_store(&i->m0,(U64)si0+32U,si1);
L48:;
si0=l13;
si1=l18;
si0=si0 != si1;
if(si0){
goto L42;
}
goto L4;
L47:;
}
si0=l5;
si1=2U;
i32_store(&i->m0,(U64)si0+88U,si1);
si0=l5;
si1=1U;
i32_store16(&i->m0,(U64)si0+84U,si1);
si0=l5;
si1=l9;
i32_store(&i->m0,(U64)si0+80U,si1);
si0=l5;
si1=0U;
i32_store(&i->m0,(U64)si0+76U,si1);
si0=l5;
si1=l4;
i32_store(&i->m0,(U64)si0+72U,si1);
si0=l5;
si1=l3;
i32_store(&i->m0,(U64)si0+68U,si1);
si0=l5;
si1=l9;
i32_store(&i->m0,(U64)si0+64U,si1);
si0=l5;
si1=0U;
i32_store(&i->m0,(U64)si0+60U,si1);
si0=l5;
si1=l9;
i32_store(&i->m0,(U64)si0+56U,si1);
si0=l5;
si1=l15;
i32_store(&i->m0,(U64)si0+52U,si1);
si0=l5;
si1=l12;
i32_store(&i->m0,(U64)si0+48U,si1);
si0=l5;
si1=32U;
si0+=si1;
si1=l5;
si2=48U;
si1+=si2;
f316(i,si0,si1);
si0=l5;
si0=i32_load(&i->m0,(U64)si0+40U);
l4=si0;
si0=!(si0);
if(si0){
goto L67;
}
si0=l4;
si1=1U;
si0=si0 == si1;
if(si0){
goto L66;
}
si0=l5;
si0=i32_load(&i->m0,(U64)si0+32U);
l4=si0;
si1=12U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L65;
}
si0=0U;
l3=si0;
goto L64;
L67:;
si0=0U;
si1=0U;
si2=1085512U;
f663(i,si0,si1,si2);
UNREACHABLE;
L66:;
si0=1U;
si1=1U;
si2=1085528U;
f663(i,si0,si1,si2);
UNREACHABLE;
L65:;
si0=l5;
si1=136U;
si0+=si1;
si1=l6;
si2=l7;
si3=l4;
si3=i32_load(&i->m0,(U64)si3+4U);
si4=1U;
si3+=si4;
f370(i,si0,si1,si2,si3);
si0=l5;
si1=136U;
si0+=si1;
si1=12U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l14=si0;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+144U);
l3=si0;
L64:;
si0=l5;
si1=136U;
si0+=si1;
si1=l1;
si2=l3;
si3=l14;
si4=l17;
si5=0U;
si6=l2;
f262(i,si0,si1,si2,si3,si4,si5,si6);
si0=l5;
si0=i32_load8_u(&i->m0,(U64)si0+160U);
l3=si0;
si1=20U;
si0=si0 != si1;
if(si0){
goto L71;
}
si0=l5;
si1=120U;
si0+=si1;
si1=8U;
si0+=si1;
si1=l5;
si2=136U;
si1+=si2;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=l5;
sj1=i64_load(&i->m0,(U64)si1+136U);
i64_store(&i->m0,(U64)si0+120U,sj1);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+32U);
l14=si0;
if(si0){
goto L72;
}
si0=l17;
si1=188U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
goto L70;
L72:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+36U);
l12=si0;
si1=l17;
si2=188U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
l3=si1;
si0=si0 != si1;
if(si0){
goto L70;
}
si0=l12;
l3=si0;
si0=l14;
si1=l17;
si2=184U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
si2=l12;
si0=f15389(i,si0,si1,si2);
if(si0){
goto L70;
}
goto L69;
L71:;
si0=l0;
si1=l5;
si1=i32_load16_u(&i->m0,(U64)si1+161U);
i32_store16(&i->m0,(U64)si0+25U,si1);
si0=l5;
si1=96U;
si0+=si1;
si1=16U;
si0+=si1;
si1=l5;
si2=136U;
si1+=si2;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
l8=sj1;
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=96U;
si0+=si1;
si1=8U;
si0+=si1;
si1=l5;
si2=136U;
si1+=si2;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
l21=sj1;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=27U;
si0+=si1;
si1=l5;
si2=136U;
si1+=si2;
si2=27U;
si1+=si2;
si1=i32_load8_u(&i->m0,(U64)si1);
i32_store8(&i->m0,(U64)si0,si1);
si0=l5;
si1=l5;
sj1=i64_load(&i->m0,(U64)si1+136U);
l22=sj1;
i64_store(&i->m0,(U64)si0+96U,sj1);
si0=l0;
si1=16U;
si0+=si1;
sj1=l8;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=8U;
si0+=si1;
sj1=l21;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
sj1=l22;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=l3;
i32_store8(&i->m0,(U64)si0+24U,si1);
goto L68;
L70:;
si0=l17;
si1=184U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l14=si0;
si0=l1;
si1=l3;
i32_store(&i->m0,(U64)si0+36U,si1);
si0=l1;
si1=l14;
i32_store(&i->m0,(U64)si0+32U,si1);
L69:;
si0=l0;
si1=l5;
sj1=i64_load(&i->m0,(U64)si1+120U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=20U;
i32_store8(&i->m0,(U64)si0+24U,si1);
si0=l0;
si1=8U;
si0+=si1;
si1=l5;
si2=120U;
si1+=si2;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
L68:;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+36U);
si0=!(si0);
if(si0){
goto L5;
}
si0=l4;
f15271(i,si0);
L5:;
si0=l11;
si0=!(si0);
if(si0){
goto L1;
}
si0=l5;
si0=i32_load(&i->m0,(U64)si0+20U);
si0=!(si0);
if(si0){
goto L1;
}
goto L2;
L4:;
si0=l0;
si1=20U;
i32_store8(&i->m0,(U64)si0+24U,si1);
si0=l0;
sj1=l8;
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l0;
si1=l14;
i32_store(&i->m0,(U64)si0,si1);
si0=l16;
if(si0){
goto L1;
}
L3:;
si0=l10;
si0=!(si0);
if(si0){
goto L1;
}
L2:;
si0=l11;
f15271(i,si0);
L1:;
si0=l5;
si1=208U;
si0+=si1;
i->g0=si0;
L0:;
}

void f262(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4,U32 l5,U32 l6) {
U32 l7=0;
U32 l8=0;
U32 l9=0;
U32 l10=0;
U32 l11=0;
U32 l12=0;
U64 l13=0;
U64 l14=0;
U64 l15=0;
U32 l16=0;
U32 l17=0;
U32 si0,si1,si2,si3,si4,si5,si6,si7;
U64 sj0,sj1,sj5,sj7,sj8;
si0=i->g0;
si1=64U;
si0-=si1;
l7=si0;
i->g0=si0;
si0=l4;
sj0=i64_load(&i->m0,(U64)si0+32U);
sj1=0ULL;
si0=sj0 != sj1;
si1=l4;
si2=40U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
si1=!(sj1);
si0&=si1;
l8=si0;
si0=l4;
si1=220U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l9=si0;
si1=8192U;
si0&=si1;
l10=si0;
si0=l9;
si1=4U;
si0&=si1;
l11=si0;
si0=l2;
si0=!(si0);
if(si0){
goto L7;
}
si0=l7;
si1=32U;
si0+=si1;
si1=l2;
si2=l3;
f756(i,si0,si1,si2);
si0=l7;
si0=i32_load(&i->m0,(U64)si0+32U);
if(si0){
goto L1;
}
si0=l7;
si0=i32_load(&i->m0,(U64)si0+36U);
l12=si0;
si0=!(si0);
if(si0){
goto L1;
}
si0=l7;
si1=40U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L9;
}
si0=0U;
l12=si0;
goto L8;
L9:;
si0=l12;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=61U;
si0=si0 == si1;
l12=si0;
L8:;
si0=l7;
si1=l2;
si2=l3;
si3=61U;
f369(i,si0,si1,si2,si3);
si0=l12;
si1=l5;
si0|=si1;
l5=si0;
si0=l7;
si0=i32_load(&i->m0,(U64)si0+4U);
l3=si0;
si0=l7;
si0=i32_load(&i->m0,(U64)si0);
l12=si0;
si0=l11;
if(si0){
goto L12;
}
si0=l10;
si1=0U;
si0=si0 != si1;
si1=l5;
si2=1U;
si1^=si2;
si0&=si1;
if(si0){
goto L11;
}
si0=l3;
si0=!(si0);
if(si0){
goto L11;
}
L12:;
si0=l7;
si1=32U;
si0+=si1;
si1=l1;
si2=l4;
si3=l12;
si4=l3;
si5=l6;
f266(i,si0,si1,si2,si3,si4,si5);
si0=l7;
si0=i32_load8_u(&i->m0,(U64)si0+56U);
l3=si0;
si1=20U;
si0=si0 != si1;
if(si0){
goto L10;
}
si0=l5;
si1=1U;
si0^=si1;
l5=si0;
goto L6;
L11:;
si0=l7;
si1=32U;
si0+=si1;
si1=l1;
si2=l6;
si3=0U;
si4=l1;
f558(i,si0,si1,si2,si3,si4);
si0=l0;
si1=l4;
si2=1085552U;
si3=l7;
si3=i32_load(&i->m0,(U64)si3+32U);
l6=si3;
si4=l7;
si4=i32_load(&i->m0,(U64)si4+40U);
si5=l1;
sj5=i64_load(&i->m0,(U64)si5+16U);
l13=sj5;
si5=(U32)(sj5);
si6=23U;
si5>>=(si6&31);
si6=1U;
si5&=si6;
si6=2U;
sj7=l13;
sj8=33554432ULL;
sj7&=sj8;
si7=!(sj7);
si5=si7?si5:si6;
f591(i,si0,si1,si2,si3,si4,si5);
si0=l7;
si0=i32_load(&i->m0,(U64)si0+36U);
si0=!(si0);
if(si0){
goto L2;
}
si0=l6;
f15271(i,si0);
goto L2;
L10:;
si0=l0;
si1=l7;
si1=i32_load16_u(&i->m0,(U64)si1+57U);
i32_store16(&i->m0,(U64)si0+25U,si1);
si0=l7;
si1=8U;
si0+=si1;
si1=16U;
si0+=si1;
si1=l7;
si2=32U;
si1+=si2;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
l13=sj1;
i64_store(&i->m0,(U64)si0,sj1);
si0=l7;
si1=8U;
si0+=si1;
si1=8U;
si0+=si1;
si1=l7;
si2=32U;
si1+=si2;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
l14=sj1;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=27U;
si0+=si1;
si1=l7;
si2=32U;
si1+=si2;
si2=27U;
si1+=si2;
si1=i32_load8_u(&i->m0,(U64)si1);
i32_store8(&i->m0,(U64)si0,si1);
si0=l7;
si1=l7;
sj1=i64_load(&i->m0,(U64)si1+32U);
l15=sj1;
i64_store(&i->m0,(U64)si0+8U,sj1);
si0=l0;
si1=16U;
si0+=si1;
sj1=l13;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=8U;
si0+=si1;
sj1=l14;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
sj1=l15;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=l3;
i32_store8(&i->m0,(U64)si0+24U,si1);
goto L2;
L7:;
si0=1U;
l5=si0;
si0=l11;
si1=0U;
si0=si0 != si1;
si1=l10;
si1=!(si1);
si0|=si1;
si1=l8;
si0|=si1;
si0=!(si0);
if(si0){
goto L5;
}
L6:;
si0=l6;
si1=l4;
si1=i32_load(&i->m0,(U64)si1+184U);
l11=si1;
si2=l4;
si3=188U;
si2+=si3;
si2=i32_load(&i->m0,(U64)si2);
l12=si2;
f645(i,si0,si1,si2);
si0=l7;
si1=32U;
si0+=si1;
si1=l1;
si2=l11;
si3=l12;
f268(i,si0,si1,si2,si3);
si0=l7;
si0=i32_load(&i->m0,(U64)si0+32U);
l16=si0;
si0=!(si0);
if(si0){
goto L13;
}
si0=l7;
si0=i32_load(&i->m0,(U64)si0+36U);
l17=si0;
si0=l7;
si0=i32_load(&i->m0,(U64)si0+40U);
l1=si0;
si0=!(si0);
if(si0){
goto L14;
}
si0=l16;
si1=l1;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l3=si0;
si0=l16;
l1=si0;
L15:;
{
si0=l6;
si1=l1;
si1=i32_load(&i->m0,(U64)si1);
si2=l1;
si3=4U;
si2+=si3;
si2=i32_load(&i->m0,(U64)si2);
f645(i,si0,si1,si2);
si0=l1;
si1=8U;
si0+=si1;
l1=si0;
si1=l3;
si0=si0 != si1;
if(si0){
goto L15;
}
}
L14:;
si0=l17;
si0=!(si0);
if(si0){
goto L13;
}
si0=l16;
f15271(i,si0);
L13:;
si0=l10;
si0=!(si0);
if(si0){
goto L16;
}
si0=l2;
si0=!(si0);
si1=l8;
si0&=si1;
si1=l5;
si0&=si1;
if(si0){
goto L4;
}
L16:;
si0=l2;
si0=!(si0);
if(si0){
goto L3;
}
si0=l9;
si1=514U;
si0&=si1;
si1=2U;
si0=si0 != si1;
si1=l5;
si2=1U;
si1^=si2;
si0|=si1;
if(si0){
goto L17;
}
si0=l6;
si1=l4;
si0=f648(i,si0,si1);
if(si0){
goto L3;
}
L17:;
si0=l0;
si1=20U;
i32_store8(&i->m0,(U64)si0+24U,si1);
si0=l0;
si1=6U;
i32_store(&i->m0,(U64)si0,si1);
goto L2;
L5:;
si0=l7;
si1=32U;
si0+=si1;
si1=l1;
si2=l6;
si3=0U;
si4=l1;
f558(i,si0,si1,si2,si3,si4);
si0=l0;
si1=l4;
si2=1085552U;
si3=l7;
si3=i32_load(&i->m0,(U64)si3+32U);
l6=si3;
si4=l7;
si4=i32_load(&i->m0,(U64)si4+40U);
si5=l1;
sj5=i64_load(&i->m0,(U64)si5+16U);
l13=sj5;
si5=(U32)(sj5);
si6=23U;
si5>>=(si6&31);
si6=1U;
si5&=si6;
si6=2U;
sj7=l13;
sj8=33554432ULL;
sj7&=sj8;
si7=!(sj7);
si5=si7?si5:si6;
f591(i,si0,si1,si2,si3,si4,si5);
si0=l7;
si0=i32_load(&i->m0,(U64)si0+36U);
si0=!(si0);
if(si0){
goto L2;
}
si0=l6;
f15271(i,si0);
goto L2;
L4:;
si0=l0;
si1=20U;
i32_store8(&i->m0,(U64)si0+24U,si1);
si0=l0;
si1=6U;
i32_store(&i->m0,(U64)si0,si1);
goto L2;
L3:;
si0=l0;
si1=20U;
i32_store8(&i->m0,(U64)si0+24U,si1);
si0=l0;
si1=l12;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l0;
si1=l11;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=1U;
i32_store(&i->m0,(U64)si0,si1);
L2:;
si0=l7;
si1=64U;
si0+=si1;
i->g0=si0;
goto L0;
L1:;
si0=1087120U;
si1=35U;
si2=1087384U;
f703(i,si0,si1,si2);
UNREACHABLE;
L0:;
}

void f263(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
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
U64 sj0,sj1;
si0=i->g0;
si1=144U;
si0-=si1;
l3=si0;
i->g0=si0;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2972504U);
si1=3U;
si0=si0 == si1;
if(si0){
goto L1;
}
si0=l3;
si1=2972472U;
i32_store(&i->m0,(U64)si0+64U,si1);
si0=l3;
si1=l3;
si2=128U;
si1+=si2;
i32_store(&i->m0,(U64)si0+68U,si1);
si0=l3;
si1=64U;
si0+=si1;
f15018(i,si0);
L1:;
si0=0U;
si0=i32_load(&i->m0,(U64)si0+2972472U);
si1=2972584U;
si0=si0 == si1;
if(si0){
goto L8;
}
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2972500U);
l4=si0;
si0=1U;
l5=si0;
si0=0U;
si1=1U;
i32_store8(&i->m0,(U64)si0+2972500U,si1);
si0=l3;
si1=l4;
i32_store8(&i->m0,(U64)si0,si1);
si0=l4;
if(si0){
goto L6;
}
si0=0U;
si1=2972584U;
i32_store(&i->m0,(U64)si0+2972472U,si1);
goto L7;
L8:;
si0=0U;
si0=i32_load(&i->m0,(U64)si0+2972476U);
si1=1U;
si0+=si1;
l5=si0;
si0=!(si0);
if(si0){
goto L5;
}
L7:;
si0=0U;
si1=l5;
i32_store(&i->m0,(U64)si0+2972476U,si1);
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=8192U;
si0=f15269(i,si0);
l5=si0;
si0=!(si0);
if(si0){
goto L4;
}
si0=l3;
si1=2972472U;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l3;
si1=0U;
i32_store8(&i->m0,(U64)si0+12U,si1);
si0=l3;
sj1=8192ULL;
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l3;
si1=l5;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
if(si0){
goto L9;
}
si0=l1;
si1=104U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
if(si0){
goto L12;
}
si0=l1;
si1=112U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
if(si0){
goto L13;
}
si0=0U;
l5=si0;
si0=1084668U;
l2=si0;
goto L10;
L13:;
si0=l1;
si1=116U;
si0+=si1;
l5=si0;
goto L11;
L12:;
si0=l1;
si1=108U;
si0+=si1;
l5=si0;
L11:;
si0=l5;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
L10:;
si0=l3;
si1=l2;
i32_store(&i->m0,(U64)si0+24U,si1);
goto L2;
L9:;
si0=l1;
si1=112U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si0=!(si0);
if(si0){
goto L3;
}
si0=l3;
si1=l5;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l1;
si1=116U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
goto L2;
L6:;
si0=l3;
sj1=0ULL;
i64_store(&i->m0,(U64)si0+76U,sj1);
si0=l3;
si1=1986064U;
i32_store(&i->m0,(U64)si0+72U,si1);
si0=l3;
si1=1U;
i32_store(&i->m0,(U64)si0+68U,si1);
si0=l3;
si1=1991652U;
i32_store(&i->m0,(U64)si0+64U,si1);
si0=l3;
si1=l3;
si2=64U;
si1+=si2;
f14942(i,si0,si1);
UNREACHABLE;
L5:;
si0=1989380U;
si1=38U;
si2=1989452U;
f703(i,si0,si1,si2);
UNREACHABLE;
L4:;
si0=1U;
si1=8192U;
f52(i,si0,si1);
UNREACHABLE;
L3:;
si0=l1;
si1=104U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
if(si0){
goto L14;
}
si0=0U;
l5=si0;
si0=l3;
si1=1084668U;
i32_store(&i->m0,(U64)si0+24U,si1);
goto L2;
L14:;
si0=l1;
si1=108U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si0=l3;
si1=l2;
i32_store(&i->m0,(U64)si0+24U,si1);
L2:;
si0=l3;
si1=l5;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l1;
si1=84U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si0=!(si0);
if(si0){
goto L26;
}
si0=l1;
si1=92U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
si1=7U;
si0=si0 > si1;
if(si0){
goto L27;
}
si0=l7;
si0=!(si0);
if(si0){
goto L22;
}
si0=l6;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=32U;
si0=si0 == si1;
if(si0){
goto L19;
}
si0=l7;
si1=1U;
si0=si0 == si1;
if(si0){
goto L22;
}
si0=l6;
si0=i32_load8_u(&i->m0,(U64)si0+1U);
si1=32U;
si0=si0 == si1;
if(si0){
goto L19;
}
si0=l7;
si1=2U;
si0=si0 == si1;
if(si0){
goto L22;
}
si0=l6;
si0=i32_load8_u(&i->m0,(U64)si0+2U);
si1=32U;
si0=si0 == si1;
if(si0){
goto L19;
}
si0=l7;
si1=3U;
si0=si0 == si1;
if(si0){
goto L22;
}
si0=l6;
si0=i32_load8_u(&i->m0,(U64)si0+3U);
si1=32U;
si0=si0 == si1;
if(si0){
goto L19;
}
si0=l7;
si1=4U;
si0=si0 == si1;
if(si0){
goto L22;
}
si0=l6;
si0=i32_load8_u(&i->m0,(U64)si0+4U);
si1=32U;
si0=si0 == si1;
if(si0){
goto L19;
}
si0=l7;
si1=5U;
si0=si0 == si1;
if(si0){
goto L22;
}
si0=l6;
si0=i32_load8_u(&i->m0,(U64)si0+5U);
si1=32U;
si0=si0 == si1;
if(si0){
goto L19;
}
si0=l7;
si1=6U;
si0=si0 == si1;
if(si0){
goto L22;
}
si0=l6;
si0=i32_load8_u(&i->m0,(U64)si0+6U);
si1=32U;
si0=si0 != si1;
if(si0){
goto L22;
}
goto L19;
L27:;
si0=l6;
si1=3U;
si0+=si1;
si1=-4U;
si0&=si1;
l5=si0;
si1=l6;
si0=si0 == si1;
if(si0){
goto L25;
}
si0=l5;
si1=l6;
si0-=si1;
l2=si0;
si0=!(si0);
if(si0){
goto L25;
}
si0=l6;
si1=l5;
si0-=si1;
l4=si0;
si0=l6;
l5=si0;
L28:;
{
si0=l5;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=32U;
si0=si0 == si1;
if(si0){
goto L19;
}
si0=l5;
si1=1U;
si0+=si1;
l5=si0;
si0=l4;
si1=1U;
si0+=si1;
l4=si0;
if(si0){
goto L28;
}
}
si0=l2;
si1=l7;
si2=-8U;
si1+=si2;
l8=si1;
si0=si0 > si1;
if(si0){
goto L23;
}
goto L24;
L26:;
si0=l3;
si1=60U;
si0+=si1;
si1=66U;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=66U;
i32_store(&i->m0,(U64)si0+52U,si1);
si0=l3;
si1=l1;
si2=80U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0+36U,si1);
si0=l3;
si1=l1;
si2=72U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l3;
si1=l3;
si2=24U;
si1+=si2;
i32_store(&i->m0,(U64)si0+56U,si1);
si0=l3;
si1=l3;
si2=32U;
si1+=si2;
i32_store(&i->m0,(U64)si0+48U,si1);
si0=l3;
si1=4U;
i32_store8(&i->m0,(U64)si0+128U,si1);
si0=l3;
si1=l3;
i32_store(&i->m0,(U64)si0+136U,si1);
si0=l3;
sj1=2ULL;
i64_store(&i->m0,(U64)si0+76U,sj1);
si0=2U;
l5=si0;
si0=l3;
si1=2U;
i32_store(&i->m0,(U64)si0+68U,si1);
si0=l3;
si1=1085028U;
i32_store(&i->m0,(U64)si0+64U,si1);
si0=l3;
si1=l3;
si2=48U;
si1+=si2;
i32_store(&i->m0,(U64)si0+72U,si1);
si0=l3;
si1=128U;
si0+=si1;
si1=1086416U;
si2=l3;
si3=64U;
si2+=si3;
si0=f690(i,si0,si1,si2);
l1=si0;
si0=l3;
si0=i32_load8_u(&i->m0,(U64)si0+128U);
l2=si0;
si0=l1;
si0=!(si0);
if(si0){
goto L29;
}
si0=l2;
si1=4U;
si0=si0 == si1;
if(si0){
goto L21;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0+128U);
l5=si0;
si1=8U;
si0>>=(si1&31);
l2=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+132U);
l1=si0;
goto L18;
L29:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+132U);
l1=si0;
si0=l2;
si1=4U;
si0=si0 > si1;
if(si0){
goto L30;
}
si0=l2;
si1=3U;
si0=si0 == si1;
if(si0){
goto L30;
}
si0=4U;
l5=si0;
goto L18;
L30:;
si0=4U;
l5=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
si1=l1;
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
goto L31;
}
si0=l4;
f15271(i,si0);
L31:;
si0=l1;
f15271(i,si0);
goto L18;
L25:;
si0=l7;
si1=-8U;
si0+=si1;
l8=si0;
si0=0U;
l2=si0;
L24:;
L32:;
{
si0=l6;
si1=l2;
si0+=si1;
l4=si0;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si1=-1U;
si0^=si1;
si1=l5;
si2=538976288U;
si1^=si2;
si2=-16843009U;
si1+=si2;
si0&=si1;
si1=-2139062144U;
si0&=si1;
if(si0){
goto L23;
}
si0=l4;
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si1=-1U;
si0^=si1;
si1=l5;
si2=538976288U;
si1^=si2;
si2=-16843009U;
si1+=si2;
si0&=si1;
si1=-2139062144U;
si0&=si1;
if(si0){
goto L23;
}
si0=l2;
si1=8U;
si0+=si1;
l2=si0;
si1=l8;
si0=si0 <= si1;
if(si0){
goto L32;
}
}
L23:;
si0=l7;
si1=l2;
si0=si0 == si1;
if(si0){
goto L22;
}
si0=l7;
si1=l2;
si0-=si1;
l4=si0;
si0=l6;
si1=l2;
si0+=si1;
l5=si0;
L33:;
{
si0=l5;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=32U;
si0=si0 == si1;
if(si0){
goto L19;
}
si0=l5;
si1=1U;
si0+=si1;
l5=si0;
si0=l4;
si1=-1U;
si0+=si1;
l4=si0;
if(si0){
goto L33;
}
}
L22:;
si0=l3;
si1=60U;
si0+=si1;
si1=66U;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=66U;
i32_store(&i->m0,(U64)si0+52U,si1);
si0=l3;
si1=l1;
si2=80U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0+36U,si1);
si0=l3;
si1=l1;
si2=72U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l3;
si1=l3;
si2=24U;
si1+=si2;
i32_store(&i->m0,(U64)si0+56U,si1);
si0=l3;
si1=l3;
si2=32U;
si1+=si2;
i32_store(&i->m0,(U64)si0+48U,si1);
si0=l3;
si1=4U;
i32_store8(&i->m0,(U64)si0+128U,si1);
si0=l3;
si1=l3;
i32_store(&i->m0,(U64)si0+136U,si1);
si0=l3;
sj1=2ULL;
i64_store(&i->m0,(U64)si0+76U,sj1);
si0=2U;
l5=si0;
si0=l3;
si1=2U;
i32_store(&i->m0,(U64)si0+68U,si1);
si0=l3;
si1=1085028U;
i32_store(&i->m0,(U64)si0+64U,si1);
si0=l3;
si1=l3;
si2=48U;
si1+=si2;
i32_store(&i->m0,(U64)si0+72U,si1);
si0=l3;
si1=128U;
si0+=si1;
si1=1086416U;
si2=l3;
si3=64U;
si2+=si3;
si0=f690(i,si0,si1,si2);
l1=si0;
si0=l3;
si0=i32_load8_u(&i->m0,(U64)si0+128U);
l2=si0;
si0=l1;
si0=!(si0);
if(si0){
goto L20;
}
si0=l2;
si1=4U;
si0=si0 == si1;
if(si0){
goto L21;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0+128U);
l5=si0;
si1=8U;
si0>>=(si1&31);
l2=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+132U);
l1=si0;
goto L18;
L21:;
si0=1086456U;
l1=si0;
goto L18;
L20:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+132U);
l1=si0;
si0=l2;
si1=4U;
si0=si0 > si1;
if(si0){
goto L34;
}
si0=l2;
si1=3U;
si0=si0 == si1;
if(si0){
goto L34;
}
si0=4U;
l5=si0;
goto L18;
L34:;
si0=4U;
l5=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
si1=l1;
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
goto L35;
}
si0=l4;
f15271(i,si0);
L35:;
si0=l1;
f15271(i,si0);
goto L18;
L19:;
si0=0U;
l4=si0;
si0=l3;
si1=0U;
i32_store(&i->m0,(U64)si0+136U,si1);
si0=l3;
sj1=1ULL;
i64_store(&i->m0,(U64)si0+128U,sj1);
si0=1U;
l9=si0;
si0=l3;
si1=64U;
si0+=si1;
si1=l6;
si2=l7;
si3=1085024U;
si4=1U;
f760(i,si0,si1,si2,si3,si4);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+116U);
l5=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+112U);
l10=si0;
si0=l3;
sj0=i64_load(&i->m0,(U64)si0+72U);
l11=sj0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+64U);
if(si0){
goto L37;
}
si0=0U;
l12=si0;
sj0=l11;
sj1=71776119061217280ULL;
sj0&=sj1;
sj1=0ULL;
si0=sj0 != sj1;
if(si0){
goto L36;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0+68U);
l2=si0;
sj0=l11;
sj1=32ULL;
sj0>>=(sj1&63);
si0=(U32)(sj0);
l8=si0;
si0=0U;
l4=si0;
si0=1U;
l9=si0;
si0=0U;
l12=si0;
L38:;
{
si0=l5;
l1=si0;
si0=l2;
si0=!(si0);
if(si0){
goto L39;
}
si0=l5;
si1=l2;
si0=si0 > si1;
if(si0){
goto L41;
}
si0=l5;
si1=l2;
si0=si0 == si1;
if(si0){
goto L40;
}
goto L15;
L41:;
si0=l10;
si1=l2;
si0+=si1;
si0=i32_load8_s(&i->m0,(U64)si0);
si1=-64U;
si0=(U32)((I32)si0<(I32)si1);
if(si0){
goto L15;
}
L40:;
si0=l5;
si1=l2;
si0-=si1;
l1=si0;
L39:;
si0=l1;
si0=!(si0);
if(si0){
goto L44;
}
si0=l10;
si1=l2;
si0+=si1;
l13=si0;
si0=i32_load8_s(&i->m0,(U64)si0);
l1=si0;
si1=-1U;
si0=(U32)((I32)si0>(I32)si1);
if(si0){
goto L46;
}
si0=l13;
si0=i32_load8_u(&i->m0,(U64)si0+1U);
si1=63U;
si0&=si1;
l14=si0;
si0=l1;
si1=31U;
si0&=si1;
l15=si0;
si0=l1;
si1=-32U;
si0=si0 >= si1;
if(si0){
goto L47;
}
si0=l15;
si1=6U;
si0<<=(si1&31);
si1=l14;
si0|=si1;
l1=si0;
goto L45;
L47:;
si0=l14;
si1=6U;
si0<<=(si1&31);
si1=l13;
si1=i32_load8_u(&i->m0,(U64)si1+2U);
si2=63U;
si1&=si2;
si0|=si1;
l14=si0;
si0=l1;
si1=-16U;
si0=si0 >= si1;
if(si0){
goto L48;
}
si0=l14;
si1=l15;
si2=12U;
si1<<=(si2&31);
si0|=si1;
l1=si0;
goto L45;
L48:;
si0=l14;
si1=6U;
si0<<=(si1&31);
si1=l13;
si1=i32_load8_u(&i->m0,(U64)si1+3U);
si2=63U;
si1&=si2;
si0|=si1;
si1=l15;
si2=18U;
si1<<=(si2&31);
si2=1835008U;
si1&=si2;
si0|=si1;
l1=si0;
goto L45;
L46:;
si0=l1;
si1=255U;
si0&=si1;
l1=si0;
L45:;
si0=l8;
si1=255U;
si0&=si1;
if(si0){
goto L43;
}
si0=l1;
si1=1114112U;
si0=si0 == si1;
if(si0){
goto L36;
}
si0=1U;
l8=si0;
si0=l1;
si1=128U;
si0=si0 < si1;
if(si0){
goto L49;
}
si0=2U;
l8=si0;
si0=l1;
si1=2048U;
si0=si0 < si1;
if(si0){
goto L49;
}
si0=3U;
si1=4U;
si2=l1;
si3=65536U;
si2=si2 < si3;
si0=si2?si0:si1;
l8=si0;
L49:;
si0=l5;
l1=si0;
si0=l8;
si1=l2;
si0+=si1;
l2=si0;
si0=!(si0);
if(si0){
goto L50;
}
si0=l5;
si1=l2;
si0=si0 > si1;
if(si0){
goto L52;
}
si0=l5;
si1=l2;
si0=si0 != si1;
if(si0){
goto L15;
}
goto L51;
L52:;
si0=l10;
si1=l2;
si0+=si1;
si0=i32_load8_s(&i->m0,(U64)si0);
si1=-64U;
si0=(U32)((I32)si0<(I32)si1);
if(si0){
goto L15;
}
L51:;
si0=l5;
si1=l2;
si0-=si1;
l1=si0;
L50:;
si0=l1;
if(si0){
goto L53;
}
si0=0U;
l8=si0;
goto L42;
L53:;
si0=1U;
l8=si0;
si0=l10;
si1=l2;
si0+=si1;
si0=i32_load8_s(&i->m0,(U64)si0);
l1=si0;
si1=-1U;
si0=(U32)((I32)si0>(I32)si1);
if(si0){
goto L43;
}
si0=l1;
si1=-32U;
si0=si0 < si1;
goto L43;
L44:;
si0=l8;
si1=255U;
si0&=si1;
si0=!(si0);
if(si0){
goto L36;
}
L43:;
si0=l8;
si1=1U;
si0^=si1;
l8=si0;
L42:;
si0=l6;
si1=l12;
si0+=si1;
l13=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+132U);
si1=l4;
si0-=si1;
si1=l2;
si2=l12;
si1-=si2;
l1=si1;
si0=si0 >= si1;
if(si0){
goto L54;
}
si0=l3;
si1=128U;
si0+=si1;
si1=l4;
si2=l1;
f580(i,si0,si1,si2);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+128U);
l9=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+136U);
l4=si0;
L54:;
si0=l9;
si1=l4;
si0+=si1;
si1=l13;
si2=l1;
si0=f15390(i,si0,si1,si2);
si0=l3;
si1=l4;
si2=l1;
si1+=si2;
l1=si1;
i32_store(&i->m0,(U64)si0+136U,si1);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+132U);
si1=l1;
si0=si0 != si1;
if(si0){
goto L55;
}
si0=l3;
si1=128U;
si0+=si1;
si1=l1;
si2=1U;
f580(i,si0,si1,si2);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+136U);
l1=si0;
L55:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+128U);
l9=si0;
si1=l1;
si0+=si1;
si1=45U;
i32_store8(&i->m0,(U64)si0,si1);
si0=l3;
si1=l1;
si2=1U;
si1+=si2;
l4=si1;
i32_store(&i->m0,(U64)si0+136U,si1);
si0=l2;
l12=si0;
goto L38;
}
L37:;
si0=0U;
l12=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+124U);
l8=si0;
si1=-1U;
si0+=si1;
l16=si0;
si1=l3;
si1=i32_load(&i->m0,(U64)si1+92U);
l2=si1;
si0+=si1;
l1=si0;
si1=l5;
si0=si0 >= si1;
if(si0){
goto L36;
}
si0=l8;
si1=l3;
si1=i32_load(&i->m0,(U64)si1+88U);
l17=si1;
si0-=si1;
l18=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+100U);
l15=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+120U);
l14=si0;
si1=-1U;
si0+=si1;
l19=si0;
si0=l10;
si1=l3;
si1=i32_load(&i->m0,(U64)si1+80U);
l20=si1;
si0+=si1;
l21=si0;
si0=l14;
si1=l20;
si0+=si1;
l22=si0;
si0=l8;
si1=l20;
si0-=si1;
l23=si0;
si0=1U;
si1=l20;
si0-=si1;
l24=si0;
si0=l10;
si1=l8;
si2=1U;
si1<<=(si2&31);
si2=-1U;
si1+=si2;
l25=si1;
si0+=si1;
l26=si0;
si0=0U;
l4=si0;
si0=l20;
si1=-1U;
si0+=si1;
l27=si0;
si1=l8;
si0=si0 < si1;
si1=1U;
si0&=si1;
l28=si0;
si0=1U;
l9=si0;
si0=0U;
l12=si0;
L56:;
{
si0=l15;
si1=-1U;
si0=si0 != si1;
if(si0){
goto L59;
}
L60:;
{
sj0=l11;
si1=l10;
si2=l1;
si1+=si2;
sj1=i64_load8_u(&i->m0,(U64)si1);
sj0>>=(sj1&63);
sj1=1ULL;
sj0&=sj1;
si0=!(sj0);
si0=!(si0);
if(si0){
goto L61;
}
si0=l2;
si1=l8;
si0+=si1;
l2=si0;
si1=l16;
si0+=si1;
l1=si0;
si1=l5;
si0=si0 < si1;
if(si0){
goto L60;
}
goto L36;
L61:;
si0=l2;
l1=si0;
si0=l22;
l13=si0;
si0=l23;
l15=si0;
si0=l20;
si1=l8;
si0=si0 >= si1;
if(si0){
goto L63;
}
L64:;
{
si0=l20;
si1=l1;
si0+=si1;
si1=l5;
si0=si0 < si1;
if(si0){
goto L65;
}
si0=l20;
l29=si0;
goto L16;
L65:;
si0=l13;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=l21;
si2=l1;
si1+=si2;
si1=i32_load8_u(&i->m0,(U64)si1);
si0=si0 == si1;
if(si0){
goto L66;
}
si0=l1;
si1=1U;
si0+=si1;
l2=si0;
goto L62;
L66:;
si0=l1;
si1=1U;
si0+=si1;
l1=si0;
si0=l13;
si1=1U;
si0+=si1;
l13=si0;
si0=l15;
si1=-1U;
si0+=si1;
l15=si0;
if(si0){
goto L64;
}
}
L63:;
si0=l28;
si0=!(si0);
if(si0){
goto L68;
}
si0=l10;
si1=l2;
si0+=si1;
l13=si0;
si0=l20;
l1=si0;
L69:;
{
si0=l1;
if(si0){
goto L70;
}
si0=-1U;
l15=si0;
goto L57;
L70:;
si0=l2;
si1=l1;
si0+=si1;
l15=si0;
si1=-1U;
si0+=si1;
si1=l5;
si0=si0 >= si1;
if(si0){
goto L67;
}
si0=l19;
si1=l1;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=l1;
si2=-1U;
si1+=si2;
l1=si1;
si2=l13;
si1+=si2;
si1=i32_load8_u(&i->m0,(U64)si1);
si0=si0 == si1;
if(si0){
goto L69;
}
}
si0=l2;
si1=l17;
si0+=si1;
l2=si0;
goto L62;
L68:;
si0=-1U;
l15=si0;
si0=l20;
si0=!(si0);
if(si0){
goto L57;
}
si0=l27;
l1=si0;
goto L17;
L67:;
si0=l15;
si1=-1U;
si0+=si1;
l13=si0;
goto L58;
L62:;
si0=l2;
si1=l16;
si0+=si1;
l1=si0;
si1=l5;
si0=si0 < si1;
if(si0){
goto L60;
}
goto L36;
}
L59:;
L71:;
{
sj0=l11;
si1=l10;
si2=l1;
si1+=si2;
sj1=i64_load8_u(&i->m0,(U64)si1);
sj0>>=(sj1&63);
si0=(U32)(sj0);
si1=1U;
si0&=si1;
if(si0){
goto L72;
}
si0=l2;
si1=l8;
si0+=si1;
si1=l16;
si0+=si1;
si1=l5;
si0=si0 >= si1;
if(si0){
goto L36;
}
L73:;
{
sj0=l11;
si1=l26;
si2=l2;
si1+=si2;
sj1=i64_load8_u(&i->m0,(U64)si1);
sj0>>=(sj1&63);
sj1=1ULL;
sj0&=sj1;
si0=!(sj0);
if(si0){
goto L74;
}
si0=l8;
si1=l2;
si0+=si1;
l2=si0;
si0=0U;
l15=si0;
goto L72;
L74:;
si0=l25;
si1=l2;
si2=l8;
si1+=si2;
l2=si1;
si0+=si1;
si1=l5;
si0=si0 < si1;
if(si0){
goto L73;
}
goto L36;
}
L72:;
si0=l20;
si1=l15;
si2=l20;
si3=l15;
si2=si2 > si3;
si0=si2?si0:si1;
l29=si0;
si1=l8;
si0=si0 >= si1;
if(si0){
goto L76;
}
si0=l10;
si1=l2;
si0+=si1;
l13=si0;
si0=l29;
l1=si0;
L77:;
{
si0=l2;
si1=l1;
si0+=si1;
si1=l5;
si0=si0 >= si1;
if(si0){
goto L16;
}
si0=l14;
si1=l1;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=l13;
si2=l1;
si1+=si2;
si1=i32_load8_u(&i->m0,(U64)si1);
si0=si0 == si1;
if(si0){
goto L78;
}
si0=l24;
si1=l2;
si0+=si1;
si1=l1;
si0+=si1;
l2=si0;
si0=0U;
l15=si0;
goto L75;
L78:;
si0=l8;
si1=l1;
si2=1U;
si1+=si2;
l1=si1;
si0=si0 != si1;
if(si0){
goto L77;
}
}
L76:;
si0=l20;
l1=si0;
L79:;
{
si0=l15;
si1=l1;
si0=si0 < si1;
if(si0){
goto L80;
}
si0=0U;
l15=si0;
goto L57;
L80:;
si0=l1;
si1=-1U;
si0+=si1;
l1=si0;
si1=l8;
si0=si0 >= si1;
if(si0){
goto L17;
}
si0=l1;
si1=l2;
si0+=si1;
l13=si0;
si1=l5;
si0=si0 >= si1;
if(si0){
goto L58;
}
si0=l14;
si1=l1;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=l10;
si2=l13;
si1+=si2;
si1=i32_load8_u(&i->m0,(U64)si1);
si0=si0 == si1;
if(si0){
goto L79;
}
}
si0=l2;
si1=l17;
si0+=si1;
l2=si0;
si0=l18;
l15=si0;
L75:;
si0=l2;
si1=l16;
si0+=si1;
l1=si0;
si1=l5;
si0=si0 < si1;
if(si0){
goto L71;
}
goto L36;
}
L58:;
si0=l13;
si1=l5;
si2=1084764U;
f663(i,si0,si1,si2);
UNREACHABLE;
L57:;
si0=l6;
si1=l12;
si0+=si1;
l13=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+132U);
si1=l4;
si0-=si1;
si1=l2;
si2=l12;
si1-=si2;
l1=si1;
si0=si0 >= si1;
if(si0){
goto L81;
}
si0=l3;
si1=128U;
si0+=si1;
si1=l4;
si2=l1;
f580(i,si0,si1,si2);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+128U);
l9=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+136U);
l4=si0;
L81:;
si0=l2;
si1=l8;
si0+=si1;
l12=si0;
si0=l9;
si1=l4;
si0+=si1;
si1=l13;
si2=l1;
si0=f15390(i,si0,si1,si2);
si0=l3;
si1=l4;
si2=l1;
si1+=si2;
l2=si1;
i32_store(&i->m0,(U64)si0+136U,si1);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+132U);
si1=l2;
si0=si0 != si1;
if(si0){
goto L82;
}
si0=l3;
si1=128U;
si0+=si1;
si1=l2;
si2=1U;
f580(i,si0,si1,si2);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+136U);
l2=si0;
L82:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+128U);
l9=si0;
si1=l2;
si0+=si1;
si1=45U;
i32_store8(&i->m0,(U64)si0,si1);
si0=l3;
si1=l2;
si2=1U;
si1+=si2;
l4=si1;
i32_store(&i->m0,(U64)si0+136U,si1);
si0=l12;
l2=si0;
si0=l12;
si1=l16;
si0+=si1;
l1=si0;
si1=l5;
si0=si0 < si1;
if(si0){
goto L56;
}
}
L36:;
si0=l6;
si1=l12;
si0+=si1;
l2=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+132U);
si1=l4;
si0-=si1;
si1=l7;
si2=l12;
si1-=si2;
l5=si1;
si0=si0 >= si1;
if(si0){
goto L83;
}
si0=l3;
si1=128U;
si0+=si1;
si1=l4;
si2=l5;
f580(i,si0,si1,si2);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+128U);
l9=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+136U);
l4=si0;
L83:;
si0=l9;
si1=l4;
si0+=si1;
si1=l2;
si2=l5;
si0=f15390(i,si0,si1,si2);
si0=l3;
si1=40U;
si0+=si1;
si1=l4;
si2=l5;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=60U;
si0+=si1;
si1=66U;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=l3;
sj1=i64_load(&i->m0,(U64)si1+128U);
i64_store(&i->m0,(U64)si0+32U,sj1);
si0=l3;
si1=67U;
i32_store(&i->m0,(U64)si0+52U,si1);
si0=l3;
si1=l3;
si2=24U;
si1+=si2;
i32_store(&i->m0,(U64)si0+56U,si1);
si0=l3;
si1=l3;
si2=32U;
si1+=si2;
i32_store(&i->m0,(U64)si0+48U,si1);
si0=l3;
si1=4U;
i32_store8(&i->m0,(U64)si0+128U,si1);
si0=l3;
si1=l3;
i32_store(&i->m0,(U64)si0+136U,si1);
si0=l3;
sj1=2ULL;
i64_store(&i->m0,(U64)si0+76U,sj1);
si0=2U;
l5=si0;
si0=l3;
si1=2U;
i32_store(&i->m0,(U64)si0+68U,si1);
si0=l3;
si1=1085028U;
i32_store(&i->m0,(U64)si0+64U,si1);
si0=l3;
si1=l3;
si2=48U;
si1+=si2;
i32_store(&i->m0,(U64)si0+72U,si1);
si0=l3;
si1=128U;
si0+=si1;
si1=1086416U;
si2=l3;
si3=64U;
si2+=si3;
si0=f690(i,si0,si1,si2);
l1=si0;
si0=l3;
si0=i32_load8_u(&i->m0,(U64)si0+128U);
l2=si0;
si0=l1;
si0=!(si0);
if(si0){
goto L85;
}
si0=l2;
si1=4U;
si0=si0 != si1;
if(si0){
goto L86;
}
si0=1086456U;
l1=si0;
goto L84;
L86:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+128U);
l5=si0;
si1=8U;
si0>>=(si1&31);
l2=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+132U);
l1=si0;
goto L84;
L85:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+132U);
l1=si0;
si0=l2;
si1=4U;
si0=si0 > si1;
if(si0){
goto L88;
}
si0=l2;
si1=3U;
si0=si0 == si1;
if(si0){
goto L88;
}
si0=4U;
l5=si0;
goto L87;
L88:;
si0=4U;
l5=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
si1=l1;
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
goto L89;
}
si0=l4;
f15271(i,si0);
L89:;
si0=l1;
f15271(i,si0);
L87:;
L84:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+36U);
si0=!(si0);
if(si0){
goto L18;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0+32U);
f15271(i,si0);
L18:;
si0=l5;
si1=255U;
si0&=si1;
si1=4U;
si0=si0 != si1;
if(si0){
goto L92;
}
si0=l3;
si1=48U;
si0+=si1;
si1=l3;
f321(i,si0,si1);
si0=l3;
si0=i32_load8_u(&i->m0,(U64)si0+48U);
si1=4U;
si0=si0 != si1;
if(si0){
goto L94;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0+16U);
l5=si0;
si0=i32_load(&i->m0,(U64)si0+8U);
if(si0){
goto L90;
}
si0=l5;
si1=-1U;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l3;
si1=64U;
si0+=si1;
si1=l5;
si2=12U;
si1+=si2;
f15000(i,si0,si1);
si0=l3;
sj0=i64_load(&i->m0,(U64)si0+64U);
l11=sj0;
si0=l3;
si0=i32_load8_u(&i->m0,(U64)si0+64U);
l2=si0;
si0=l5;
si1=l5;
si1=i32_load(&i->m0,(U64)si1+8U);
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0+8U,si1);
sj0=4ULL;
sj1=l11;
si2=l2;
si3=4U;
si2=si2 == si3;
sj0=si2?sj0:sj1;
l11=sj0;
goto L93;
L94:;
si0=l3;
sj0=i64_load(&i->m0,(U64)si0+48U);
l11=sj0;
L93:;
sj0=l11;
sj1=255ULL;
sj0&=sj1;
sj1=4ULL;
si0=sj0 != sj1;
if(si0){
goto L95;
}
si0=l3;
si1=20U;
i32_store8(&i->m0,(U64)si0+88U,si1);
goto L91;
L95:;
si0=l3;
sj1=l11;
i64_store(&i->m0,(U64)si0+48U,sj1);
si0=l3;
si1=64U;
si0+=si1;
si1=l3;
si2=48U;
si1+=si2;
f604(i,si0,si1);
goto L91;
L92:;
si0=l3;
si1=l1;
i32_store(&i->m0,(U64)si0+52U,si1);
si0=l3;
si1=l5;
i32_store8(&i->m0,(U64)si0+48U,si1);
si0=l3;
si1=l2;
i32_store16(&i->m0,(U64)si0+49U,si1);
si0=l3;
si1=l2;
si2=16U;
si1>>=(si2&31);
i32_store8(&i->m0,(U64)si0+51U,si1);
si0=l3;
si1=64U;
si0+=si1;
si1=l3;
si2=48U;
si1+=si2;
f604(i,si0,si1);
L91:;
si0=l3;
si0=i32_load8_u(&i->m0,(U64)si0+88U);
si1=20U;
si0=si0 == si1;
if(si0){
goto L97;
}
si0=l0;
si1=l3;
sj1=i64_load(&i->m0,(U64)si1+64U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=24U;
si0+=si1;
si1=l3;
si2=64U;
si1+=si2;
si2=24U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=16U;
si0+=si1;
si1=l3;
si2=64U;
si1+=si2;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=8U;
si0+=si1;
si1=l3;
si2=64U;
si1+=si2;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
goto L96;
L97:;
si0=l0;
si1=16U;
i32_store8(&i->m0,(U64)si0+24U,si1);
si0=l0;
sj1=1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
sj1=0ULL;
i64_store(&i->m0,(U64)si0+8U,sj1);
L96:;
si0=l3;
si0=i32_load8_u(&i->m0,(U64)si0+12U);
if(si0){
goto L98;
}
si0=l3;
si1=48U;
si0+=si1;
si1=l3;
f321(i,si0,si1);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+52U);
l2=si0;
si0=l3;
si0=i32_load8_u(&i->m0,(U64)si0+48U);
l5=si0;
si1=4U;
si0=si0 > si1;
if(si0){
goto L99;
}
si0=l5;
si1=3U;
si0=si0 != si1;
if(si0){
goto L98;
}
L99:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
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
goto L100;
}
si0=l1;
f15271(i,si0);
L100:;
si0=l2;
f15271(i,si0);
L98:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+4U);
si0=!(si0);
if(si0){
goto L101;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
f15271(i,si0);
L101:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+16U);
l5=si0;
si1=l5;
si1=i32_load(&i->m0,(U64)si1+4U);
si2=-1U;
si1+=si2;
l2=si1;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l2;
if(si0){
goto L102;
}
si0=l5;
si1=0U;
i32_store8(&i->m0,(U64)si0+28U,si1);
si0=l5;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
L102:;
si0=l3;
si1=144U;
si0+=si1;
i->g0=si0;
goto L0;
L90:;
si0=1988380U;
si1=16U;
si2=l3;
si3=128U;
si2+=si3;
si3=1988396U;
si4=1988472U;
f712(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L17:;
si0=l1;
si1=l8;
si2=1084748U;
f663(i,si0,si1,si2);
UNREACHABLE;
L16:;
si0=l5;
si1=l29;
si2=l2;
si1+=si2;
l3=si1;
si2=l5;
si3=l3;
si2=si2 > si3;
si0=si2?si0:si1;
si1=l5;
si2=1084780U;
f663(i,si0,si1,si2);
UNREACHABLE;
L15:;
si0=l10;
si1=l5;
si2=l2;
si3=l5;
si4=1084796U;
f737(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L0:;
}

void f264(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 si0,si1,si2,si3;
si0=i->g0;
si1=16U;
si0-=si1;
l4=si0;
i->g0=si0;
si0=l3;
si1=l2;
si1=i32_load(&i->m0,(U64)si1+32U);
l5=si1;
si2=l2;
si3=36U;
si2+=si3;
si2=i32_load(&i->m0,(U64)si2);
l2=si2;
f645(i,si0,si1,si2);
si0=l3;
si1=l5;
si2=l2;
si3=l1;
si3=i32_load(&i->m0,(U64)si3+308U);
f647(i,si0,si1,si2,si3);
si0=l4;
si1=l1;
si2=l5;
si3=l2;
f268(i,si0,si1,si2,si3);
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si0=!(si0);
if(si0){
goto L1;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0+4U);
l6=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+8U);
l2=si0;
si0=!(si0);
if(si0){
goto L2;
}
si0=l5;
si1=l2;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l1=si0;
si0=l5;
l2=si0;
L3:;
{
si0=l3;
si1=l2;
si1=i32_load(&i->m0,(U64)si1);
si2=l2;
si3=4U;
si2+=si3;
si2=i32_load(&i->m0,(U64)si2);
f645(i,si0,si1,si2);
si0=l2;
si1=8U;
si0+=si1;
l2=si0;
si1=l1;
si0=si0 != si1;
if(si0){
goto L3;
}
}
L2:;
si0=l6;
si0=!(si0);
if(si0){
goto L1;
}
si0=l5;
f15271(i,si0);
L1:;
si0=l0;
si1=20U;
i32_store8(&i->m0,(U64)si0+24U,si1);
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=16U;
si0+=si1;
i->g0=si0;
L0:;
}

void f265(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4,U32 l5,U32 l6) {
U32 l7=0;
U32 l8=0;
U32 l9=0;
U32 l10=0;
U64 l11=0;
U32 si0,si1,si2,si3,si4,si5,si6,si7,si8,si9;
U64 sj1,sj7,sj9,sj10;
si0=i->g0;
si1=80U;
si0-=si1;
l7=si0;
i->g0=si0;
si0=l7;
si1=l3;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l7;
si1=l2;
i32_store(&i->m0,(U64)si0,si1);
si0=l7;
si1=60U;
si0+=si1;
l8=si0;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+224U);
l9=si1;
si2=l1;
si3=232U;
si2+=si3;
si2=i32_load(&i->m0,(U64)si2);
si3=272U;
si2*=si3;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l7;
si1=l9;
i32_store(&i->m0,(U64)si0+56U,si1);
si0=l7;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+212U);
l9=si1;
i32_store(&i->m0,(U64)si0+48U,si1);
si0=l7;
si1=l9;
si2=l1;
si3=220U;
si2+=si3;
si2=i32_load(&i->m0,(U64)si2);
si3=120U;
si2*=si3;
si1+=si2;
i32_store(&i->m0,(U64)si0+52U,si1);
si0=l7;
si1=8U;
si0+=si1;
si1=l2;
si2=l3;
si3=l5;
si4=l6;
si5=l7;
si6=48U;
si5+=si6;
si6=l1;
si6=i32_load(&i->m0,(U64)si6+236U);
si7=l1;
si8=244U;
si7+=si8;
si7=i32_load(&i->m0,(U64)si7);
f540(i,si0,si1,si2,si3,si4,si5,si6,si7);
si0=l7;
si0=i32_load(&i->m0,(U64)si0+20U);
l9=si0;
si0=!(si0);
if(si0){
goto L1;
}
si0=l7;
si1=24U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+232U);
l3=si0;
si0=!(si0);
if(si0){
goto L5;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+224U);
l5=si0;
si1=l3;
si2=272U;
si1*=si2;
si0+=si1;
l10=si0;
L6:;
{
si0=l5;
si1=156U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=!(si0);
if(si0){
goto L7;
}
si0=l5;
si1=160U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=l2;
si0=si0 != si1;
if(si0){
goto L8;
}
si0=l3;
si1=l9;
si2=l2;
si0=f15389(i,si0,si1,si2);
si0=!(si0);
if(si0){
goto L4;
}
L8:;
si0=l5;
si1=164U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=!(si0);
if(si0){
goto L7;
}
si0=l5;
si1=172U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si0=!(si0);
if(si0){
goto L7;
}
si0=l6;
si1=12U;
si0*=si1;
l6=si0;
L9:;
{
si0=l3;
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=l2;
si0=si0 != si1;
if(si0){
goto L10;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
si1=l9;
si2=l2;
si0=f15389(i,si0,si1,si2);
si0=!(si0);
if(si0){
goto L4;
}
L10:;
si0=l3;
si1=12U;
si0+=si1;
l3=si0;
si0=l6;
si1=-12U;
si0+=si1;
l6=si0;
if(si0){
goto L9;
}
}
L7:;
si0=l5;
si1=272U;
si0+=si1;
l5=si0;
si1=l10;
si0=si0 != si1;
if(si0){
goto L6;
}
}
L5:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+220U);
l3=si0;
si0=!(si0);
if(si0){
goto L1;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+212U);
l5=si0;
si1=l3;
si2=120U;
si1*=si2;
si0+=si1;
l10=si0;
L11:;
{
si0=l5;
si0=i32_load(&i->m0,(U64)si0+4U);
l3=si0;
si0=!(si0);
if(si0){
goto L12;
}
si0=l5;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=l2;
si0=si0 != si1;
if(si0){
goto L13;
}
si0=l3;
si1=l9;
si2=l2;
si0=f15389(i,si0,si1,si2);
si0=!(si0);
if(si0){
goto L3;
}
L13:;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+12U);
l3=si0;
si0=!(si0);
if(si0){
goto L12;
}
si0=l5;
si1=20U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si0=!(si0);
if(si0){
goto L12;
}
si0=l6;
si1=12U;
si0*=si1;
l6=si0;
L14:;
{
si0=l3;
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=l2;
si0=si0 != si1;
if(si0){
goto L15;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
si1=l9;
si2=l2;
si0=f15389(i,si0,si1,si2);
si0=!(si0);
if(si0){
goto L3;
}
L15:;
si0=l3;
si1=12U;
si0+=si1;
l3=si0;
si0=l6;
si1=-12U;
si0+=si1;
l6=si0;
if(si0){
goto L14;
}
}
L12:;
si0=l5;
si1=120U;
si0+=si1;
l5=si0;
si1=l10;
si0=si0 != si1;
if(si0){
goto L11;
}
goto L1;
}
L4:;
si0=l7;
si1=48U;
si0+=si1;
si1=l1;
si2=l5;
si2=i32_load(&i->m0,(U64)si2+184U);
si3=l5;
si4=188U;
si3+=si4;
l6=si3;
si3=i32_load(&i->m0,(U64)si3);
f268(i,si0,si1,si2,si3);
si0=l7;
si0=i32_load(&i->m0,(U64)si0+48U);
l9=si0;
si0=!(si0);
if(si0){
goto L16;
}
si0=l7;
si0=i32_load(&i->m0,(U64)si0+52U);
l10=si0;
si0=l7;
si0=i32_load(&i->m0,(U64)si0+56U);
l3=si0;
si0=!(si0);
if(si0){
goto L17;
}
si0=l9;
si1=l3;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l2=si0;
si0=l9;
l3=si0;
L18:;
{
si0=l4;
si1=l3;
si1=i32_load(&i->m0,(U64)si1);
si2=l3;
si3=4U;
si2+=si3;
si2=i32_load(&i->m0,(U64)si2);
f645(i,si0,si1,si2);
si0=l3;
si1=8U;
si0+=si1;
l3=si0;
si1=l2;
si0=si0 != si1;
if(si0){
goto L18;
}
}
L17:;
si0=l10;
si0=!(si0);
if(si0){
goto L16;
}
si0=l9;
f15271(i,si0);
L16:;
si0=l5;
si1=184U;
si0+=si1;
l3=si0;
goto L2;
L3:;
si0=l7;
si1=48U;
si0+=si1;
si1=l1;
si2=l5;
si2=i32_load(&i->m0,(U64)si2+32U);
si3=l5;
si4=36U;
si3+=si4;
l6=si3;
si3=i32_load(&i->m0,(U64)si3);
f268(i,si0,si1,si2,si3);
si0=l7;
si0=i32_load(&i->m0,(U64)si0+48U);
l9=si0;
si0=!(si0);
if(si0){
goto L19;
}
si0=l7;
si0=i32_load(&i->m0,(U64)si0+52U);
l10=si0;
si0=l7;
si0=i32_load(&i->m0,(U64)si0+56U);
l3=si0;
si0=!(si0);
if(si0){
goto L20;
}
si0=l9;
si1=l3;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l2=si0;
si0=l9;
l3=si0;
L21:;
{
si0=l4;
si1=l3;
si1=i32_load(&i->m0,(U64)si1);
si2=l3;
si3=4U;
si2+=si3;
si2=i32_load(&i->m0,(U64)si2);
f645(i,si0,si1,si2);
si0=l3;
si1=8U;
si0+=si1;
l3=si0;
si1=l2;
si0=si0 != si1;
if(si0){
goto L21;
}
}
L20:;
si0=l10;
si0=!(si0);
if(si0){
goto L19;
}
si0=l9;
f15271(i,si0);
L19:;
si0=l5;
si1=32U;
si0+=si1;
l3=si0;
L2:;
si0=l4;
si1=l3;
si1=i32_load(&i->m0,(U64)si1);
si2=l6;
si2=i32_load(&i->m0,(U64)si2);
f642(i,si0,si1,si2);
L1:;
si0=l8;
sj1=1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l7;
si1=1085676U;
i32_store(&i->m0,(U64)si0+48U,si1);
si0=l7;
si1=66U;
i32_store(&i->m0,(U64)si0+76U,si1);
si0=l7;
si1=l7;
si2=72U;
si1+=si2;
i32_store(&i->m0,(U64)si0+56U,si1);
si0=l7;
si1=l7;
i32_store(&i->m0,(U64)si0+72U,si1);
si0=l7;
si1=1U;
i32_store(&i->m0,(U64)si0+52U,si1);
si0=l7;
si1=32U;
si0+=si1;
si1=l7;
si2=48U;
si1+=si2;
f63(i,si0,si1);
si0=l7;
si0=i32_load(&i->m0,(U64)si0+32U);
l3=si0;
si0=l7;
si0=i32_load(&i->m0,(U64)si0+40U);
l6=si0;
si0=l7;
si0=i32_load(&i->m0,(U64)si0+8U);
l2=si0;
si0=l7;
si0=i32_load(&i->m0,(U64)si0+16U);
l5=si0;
si0=l7;
si1=48U;
si0+=si1;
si1=l1;
si2=l4;
si3=0U;
si4=l3;
f558(i,si0,si1,si2,si3,si4);
si0=l0;
si1=l3;
si2=l6;
si3=l2;
si4=l5;
si5=l7;
si5=i32_load(&i->m0,(U64)si5+48U);
l9=si5;
si6=l7;
si6=i32_load(&i->m0,(U64)si6+56U);
si7=l1;
sj7=i64_load(&i->m0,(U64)si7+16U);
l11=sj7;
si7=(U32)(sj7);
si8=23U;
si7>>=(si8&31);
si8=1U;
si7&=si8;
si8=2U;
sj9=l11;
sj10=33554432ULL;
sj9&=sj10;
si9=!(sj9);
si7=si9?si7:si8;
f603(i,si0,si1,si2,si3,si4,si5,si6,si7);
si0=l7;
si0=i32_load(&i->m0,(U64)si0+36U);
si0=!(si0);
if(si0){
goto L22;
}
si0=l3;
f15271(i,si0);
L22:;
si0=l7;
si0=i32_load(&i->m0,(U64)si0+12U);
si0=!(si0);
if(si0){
goto L23;
}
si0=l2;
f15271(i,si0);
L23:;
si0=l7;
si0=i32_load(&i->m0,(U64)si0+52U);
si0=!(si0);
if(si0){
goto L24;
}
si0=l9;
f15271(i,si0);
L24:;
si0=l7;
si1=80U;
si0+=si1;
i->g0=si0;
L0:;
}

void f266(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4,U32 l5) {
U32 l6=0;
U32 l7=0;
U32 l8=0;
U64 l9=0;
U32 l10=0;
U32 l11=0;
U32 l12=0;
U64 l13=0;
U64 l14=0;
U32 l15=0;
U32 l16=0;
U32 l17=0;
U32 l18=0;
U32 l19=0;
U32 si0,si1,si2,si3,si4,si5;
U64 sj0,sj1;
si0=i->g0;
si1=80U;
si0-=si1;
l6=si0;
i->g0=si0;
si0=l1;
sj0=i64_load(&i->m0,(U64)si0+16U);
sj1=17246978048ULL;
sj0&=sj1;
sj1=17246978048ULL;
si0=sj0 != sj1;
if(si0){
goto L2;
}
si0=l0;
si1=l1;
si2=l2;
si3=l3;
si4=l4;
si5=l5;
f272(i,si0,si1,si2,si3,si4,si5);
goto L1;
L2:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+112U);
l7=si0;
si1=1114112U;
si0=si0 == si1;
if(si0){
goto L4;
}
si0=l4;
if(si0){
goto L8;
}
si0=l6;
si1=32U;
si0+=si1;
si1=l1;
si2=l2;
si3=l3;
si4=0U;
si5=l5;
f272(i,si0,si1,si2,si3,si4,si5);
si0=l6;
si0=i32_load8_u(&i->m0,(U64)si0+56U);
l8=si0;
si1=20U;
si0=si0 != si1;
if(si0){
goto L7;
}
si0=l6;
si1=8U;
si0+=si1;
si1=8U;
si0+=si1;
si1=l6;
si2=32U;
si1+=si2;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
l8=si1;
i32_store(&i->m0,(U64)si0,si1);
si0=l6;
si1=l6;
sj1=i64_load(&i->m0,(U64)si1+32U);
l9=sj1;
i64_store(&i->m0,(U64)si0+8U,sj1);
si0=l0;
si1=8U;
si0+=si1;
si1=l8;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
sj1=l9;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=20U;
i32_store8(&i->m0,(U64)si0+24U,si1);
goto L1;
L8:;
si0=l6;
si1=32U;
si0+=si1;
si1=l3;
si2=l4;
f756(i,si0,si1,si2);
si0=l6;
si0=i32_load(&i->m0,(U64)si0+32U);
if(si0){
goto L5;
}
si0=l6;
si0=i32_load(&i->m0,(U64)si0+36U);
l10=si0;
si0=!(si0);
if(si0){
goto L5;
}
si0=l6;
si1=40U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l11=si0;
if(si0){
goto L6;
}
si0=6U;
l12=si0;
goto L3;
L7:;
si0=l0;
si1=l6;
si1=i32_load16_u(&i->m0,(U64)si1+57U);
i32_store16(&i->m0,(U64)si0+25U,si1);
si0=l6;
si1=8U;
si0+=si1;
si1=16U;
si0+=si1;
si1=l6;
si2=32U;
si1+=si2;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
l9=sj1;
i64_store(&i->m0,(U64)si0,sj1);
si0=l6;
si1=8U;
si0+=si1;
si1=8U;
si0+=si1;
si1=l6;
si2=32U;
si1+=si2;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
l13=sj1;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=27U;
si0+=si1;
si1=l6;
si2=32U;
si1+=si2;
si2=27U;
si1+=si2;
si1=i32_load8_u(&i->m0,(U64)si1);
i32_store8(&i->m0,(U64)si0,si1);
si0=l6;
si1=l6;
sj1=i64_load(&i->m0,(U64)si1+32U);
l14=sj1;
i64_store(&i->m0,(U64)si0+8U,sj1);
si0=l0;
si1=16U;
si0+=si1;
sj1=l9;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=8U;
si0+=si1;
sj1=l13;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
sj1=l14;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=l8;
i32_store8(&i->m0,(U64)si0+24U,si1);
goto L1;
L6:;
si0=l6;
si1=57U;
si0+=si1;
l15=si0;
si0=l6;
si1=44U;
si0+=si1;
l16=si0;
si0=0U;
l17=si0;
si0=l7;
si1=255U;
si0&=si1;
l18=si0;
L9:;
{
si0=l11;
si1=l17;
si0=si0 < si1;
if(si0){
goto L12;
}
si0=l10;
si1=l17;
si0+=si1;
l12=si0;
si0=l17;
l8=si0;
L13:;
{
si0=l11;
si1=l8;
si0=si0 != si1;
if(si0){
goto L14;
}
si0=l11;
l8=si0;
si0=l11;
l19=si0;
goto L10;
L14:;
si0=l10;
si1=l8;
si0+=si1;
l19=si0;
si0=l8;
si1=1U;
si0+=si1;
l8=si0;
si0=l19;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=l18;
si0=si0 != si1;
if(si0){
goto L13;
}
}
si0=l8;
si1=-1U;
si0+=si1;
l19=si0;
si1=l17;
si0=si0 < si1;
if(si0){
goto L11;
}
si0=l19;
si1=l11;
si0=si0 <= si1;
if(si0){
goto L10;
}
si0=l8;
si1=-1U;
si0+=si1;
si1=l11;
si2=1087528U;
f666(i,si0,si1,si2);
UNREACHABLE;
L12:;
si0=l17;
si1=l11;
si2=1087512U;
f662(i,si0,si1,si2);
UNREACHABLE;
L11:;
si0=l17;
si1=l8;
si2=-1U;
si1+=si2;
si2=1087528U;
f675(i,si0,si1,si2);
UNREACHABLE;
L10:;
si0=l6;
si1=32U;
si0+=si1;
si1=l1;
si2=l2;
si3=l12;
si4=l19;
si5=l17;
si4-=si5;
si5=l5;
f272(i,si0,si1,si2,si3,si4,si5);
si0=l6;
sj0=i64_load(&i->m0,(U64)si0+36U);
l9=sj0;
si0=l6;
si0=i32_load(&i->m0,(U64)si0+32U);
l12=si0;
si0=l6;
si0=i32_load8_u(&i->m0,(U64)si0+56U);
l19=si0;
si1=20U;
si0=si0 != si1;
if(si0){
goto L15;
}
si0=l8;
l17=si0;
si0=l11;
si1=l8;
si0=si0 == si1;
if(si0){
goto L3;
}
goto L9;
L15:;
}
si0=l0;
si1=l15;
si1=i32_load16_u(&i->m0,(U64)si1);
i32_store16(&i->m0,(U64)si0+25U,si1);
si0=l6;
si1=64U;
si0+=si1;
si1=8U;
si0+=si1;
si1=l16;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
l8=si1;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=27U;
si0+=si1;
si1=l15;
si2=2U;
si1+=si2;
si1=i32_load8_u(&i->m0,(U64)si1);
i32_store8(&i->m0,(U64)si0,si1);
si0=l6;
si1=l16;
sj1=i64_load(&i->m0,(U64)si1);
l13=sj1;
i64_store(&i->m0,(U64)si0+64U,sj1);
si0=l0;
sj1=l9;
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l0;
si1=l12;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
sj1=l13;
i64_store(&i->m0,(U64)si0+12U,sj1);
si0=l0;
si1=20U;
si0+=si1;
si1=l8;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l19;
i32_store8(&i->m0,(U64)si0+24U,si1);
goto L1;
L5:;
si0=1087120U;
si1=35U;
si2=1087384U;
f703(i,si0,si1,si2);
UNREACHABLE;
L4:;
si0=l0;
si1=l1;
si2=l2;
si3=l3;
si4=l4;
si5=l5;
f272(i,si0,si1,si2,si3,si4,si5);
goto L1;
L3:;
si0=l6;
si1=32U;
si0+=si1;
si1=l3;
si2=l4;
f756(i,si0,si1,si2);
si0=l6;
si0=i32_load(&i->m0,(U64)si0+32U);
if(si0){
goto L17;
}
si0=l6;
si0=i32_load(&i->m0,(U64)si0+36U);
l19=si0;
if(si0){
goto L16;
}
L17:;
si0=1087120U;
si1=35U;
si2=1087384U;
f703(i,si0,si1,si2);
UNREACHABLE;
L16:;
si0=l6;
si1=40U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l8=si0;
si0=l7;
si1=255U;
si0&=si1;
l10=si0;
L21:;
{
si0=l8;
si0=!(si0);
if(si0){
goto L20;
}
si0=l8;
si1=-1U;
si0+=si1;
l8=si0;
si0=l19;
si0=i32_load8_u(&i->m0,(U64)si0);
l11=si0;
si0=l19;
si1=1U;
si0+=si1;
l19=si0;
si0=l11;
si1=l10;
si0=si0 != si1;
if(si0){
goto L21;
}
goto L19;
}
L20:;
si0=l2;
si1=221U;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=2U;
si0&=si1;
si0=!(si0);
if(si0){
goto L18;
}
L19:;
si0=6U;
l12=si0;
L18:;
si0=l0;
si1=20U;
i32_store8(&i->m0,(U64)si0+24U,si1);
si0=l0;
sj1=l9;
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l0;
si1=l12;
i32_store(&i->m0,(U64)si0,si1);
L1:;
si0=l6;
si1=80U;
si0+=si1;
i->g0=si0;
L0:;
}

void f267(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4,U32 l5) {
U32 l6=0;
U32 l7=0;
U32 l8=0;
U64 l9=0;
U32 l10=0;
U32 l11=0;
U32 l12=0;
U64 l13=0;
U64 l14=0;
U32 l15=0;
U32 l16=0;
U32 l17=0;
U32 l18=0;
U32 l19=0;
U32 si0,si1,si2,si3,si4,si5;
U64 sj0,sj1;
si0=i->g0;
si1=80U;
si0-=si1;
l6=si0;
i->g0=si0;
si0=l1;
sj0=i64_load(&i->m0,(U64)si0+16U);
sj1=17246978048ULL;
sj0&=sj1;
sj1=17246978048ULL;
si0=sj0 != sj1;
if(si0){
goto L2;
}
si0=l0;
si1=l1;
si2=l2;
si3=l3;
si4=l4;
si5=l5;
f273(i,si0,si1,si2,si3,si4,si5);
goto L1;
L2:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+112U);
l7=si0;
si1=1114112U;
si0=si0 == si1;
if(si0){
goto L4;
}
si0=l4;
if(si0){
goto L8;
}
si0=l6;
si1=32U;
si0+=si1;
si1=l1;
si2=l2;
si3=l3;
si4=0U;
si5=l5;
f273(i,si0,si1,si2,si3,si4,si5);
si0=l6;
si0=i32_load8_u(&i->m0,(U64)si0+56U);
l8=si0;
si1=20U;
si0=si0 != si1;
if(si0){
goto L7;
}
si0=l6;
si1=8U;
si0+=si1;
si1=8U;
si0+=si1;
si1=l6;
si2=32U;
si1+=si2;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
l8=si1;
i32_store(&i->m0,(U64)si0,si1);
si0=l6;
si1=l6;
sj1=i64_load(&i->m0,(U64)si1+32U);
l9=sj1;
i64_store(&i->m0,(U64)si0+8U,sj1);
si0=l0;
si1=8U;
si0+=si1;
si1=l8;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
sj1=l9;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=20U;
i32_store8(&i->m0,(U64)si0+24U,si1);
goto L1;
L8:;
si0=l6;
si1=32U;
si0+=si1;
si1=l3;
si2=l4;
f756(i,si0,si1,si2);
si0=l6;
si0=i32_load(&i->m0,(U64)si0+32U);
if(si0){
goto L5;
}
si0=l6;
si0=i32_load(&i->m0,(U64)si0+36U);
l10=si0;
si0=!(si0);
if(si0){
goto L5;
}
si0=l6;
si1=40U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l11=si0;
if(si0){
goto L6;
}
si0=6U;
l12=si0;
goto L3;
L7:;
si0=l0;
si1=l6;
si1=i32_load16_u(&i->m0,(U64)si1+57U);
i32_store16(&i->m0,(U64)si0+25U,si1);
si0=l6;
si1=8U;
si0+=si1;
si1=16U;
si0+=si1;
si1=l6;
si2=32U;
si1+=si2;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
l9=sj1;
i64_store(&i->m0,(U64)si0,sj1);
si0=l6;
si1=8U;
si0+=si1;
si1=8U;
si0+=si1;
si1=l6;
si2=32U;
si1+=si2;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
l13=sj1;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=27U;
si0+=si1;
si1=l6;
si2=32U;
si1+=si2;
si2=27U;
si1+=si2;
si1=i32_load8_u(&i->m0,(U64)si1);
i32_store8(&i->m0,(U64)si0,si1);
si0=l6;
si1=l6;
sj1=i64_load(&i->m0,(U64)si1+32U);
l14=sj1;
i64_store(&i->m0,(U64)si0+8U,sj1);
si0=l0;
si1=16U;
si0+=si1;
sj1=l9;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=8U;
si0+=si1;
sj1=l13;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
sj1=l14;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=l8;
i32_store8(&i->m0,(U64)si0+24U,si1);
goto L1;
L6:;
si0=l6;
si1=57U;
si0+=si1;
l15=si0;
si0=l6;
si1=44U;
si0+=si1;
l16=si0;
si0=0U;
l17=si0;
si0=l7;
si1=255U;
si0&=si1;
l18=si0;
L9:;
{
si0=l11;
si1=l17;
si0=si0 < si1;
if(si0){
goto L12;
}
si0=l10;
si1=l17;
si0+=si1;
l12=si0;
si0=l17;
l8=si0;
L13:;
{
si0=l11;
si1=l8;
si0=si0 != si1;
if(si0){
goto L14;
}
si0=l11;
l8=si0;
si0=l11;
l19=si0;
goto L10;
L14:;
si0=l10;
si1=l8;
si0+=si1;
l19=si0;
si0=l8;
si1=1U;
si0+=si1;
l8=si0;
si0=l19;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=l18;
si0=si0 != si1;
if(si0){
goto L13;
}
}
si0=l8;
si1=-1U;
si0+=si1;
l19=si0;
si1=l17;
si0=si0 < si1;
if(si0){
goto L11;
}
si0=l19;
si1=l11;
si0=si0 <= si1;
if(si0){
goto L10;
}
si0=l8;
si1=-1U;
si0+=si1;
si1=l11;
si2=1087528U;
f666(i,si0,si1,si2);
UNREACHABLE;
L12:;
si0=l17;
si1=l11;
si2=1087512U;
f662(i,si0,si1,si2);
UNREACHABLE;
L11:;
si0=l17;
si1=l8;
si2=-1U;
si1+=si2;
si2=1087528U;
f675(i,si0,si1,si2);
UNREACHABLE;
L10:;
si0=l6;
si1=32U;
si0+=si1;
si1=l1;
si2=l2;
si3=l12;
si4=l19;
si5=l17;
si4-=si5;
si5=l5;
f273(i,si0,si1,si2,si3,si4,si5);
si0=l6;
sj0=i64_load(&i->m0,(U64)si0+36U);
l9=sj0;
si0=l6;
si0=i32_load(&i->m0,(U64)si0+32U);
l12=si0;
si0=l6;
si0=i32_load8_u(&i->m0,(U64)si0+56U);
l19=si0;
si1=20U;
si0=si0 != si1;
if(si0){
goto L15;
}
si0=l8;
l17=si0;
si0=l11;
si1=l8;
si0=si0 == si1;
if(si0){
goto L3;
}
goto L9;
L15:;
}
si0=l0;
si1=l15;
si1=i32_load16_u(&i->m0,(U64)si1);
i32_store16(&i->m0,(U64)si0+25U,si1);
si0=l6;
si1=64U;
si0+=si1;
si1=8U;
si0+=si1;
si1=l16;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
l8=si1;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=27U;
si0+=si1;
si1=l15;
si2=2U;
si1+=si2;
si1=i32_load8_u(&i->m0,(U64)si1);
i32_store8(&i->m0,(U64)si0,si1);
si0=l6;
si1=l16;
sj1=i64_load(&i->m0,(U64)si1);
l13=sj1;
i64_store(&i->m0,(U64)si0+64U,sj1);
si0=l0;
sj1=l9;
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l0;
si1=l12;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
sj1=l13;
i64_store(&i->m0,(U64)si0+12U,sj1);
si0=l0;
si1=20U;
si0+=si1;
si1=l8;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l19;
i32_store8(&i->m0,(U64)si0+24U,si1);
goto L1;
L5:;
si0=1087120U;
si1=35U;
si2=1087384U;
f703(i,si0,si1,si2);
UNREACHABLE;
L4:;
si0=l0;
si1=l1;
si2=l2;
si3=l3;
si4=l4;
si5=l5;
f273(i,si0,si1,si2,si3,si4,si5);
goto L1;
L3:;
si0=l6;
si1=32U;
si0+=si1;
si1=l3;
si2=l4;
f756(i,si0,si1,si2);
si0=l6;
si0=i32_load(&i->m0,(U64)si0+32U);
if(si0){
goto L17;
}
si0=l6;
si0=i32_load(&i->m0,(U64)si0+36U);
l19=si0;
if(si0){
goto L16;
}
L17:;
si0=1087120U;
si1=35U;
si2=1087384U;
f703(i,si0,si1,si2);
UNREACHABLE;
L16:;
si0=l6;
si1=40U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l8=si0;
si0=l7;
si1=255U;
si0&=si1;
l10=si0;
L21:;
{
si0=l8;
si0=!(si0);
if(si0){
goto L20;
}
si0=l8;
si1=-1U;
si0+=si1;
l8=si0;
si0=l19;
si0=i32_load8_u(&i->m0,(U64)si0);
l11=si0;
si0=l19;
si1=1U;
si0+=si1;
l19=si0;
si0=l11;
si1=l10;
si0=si0 != si1;
if(si0){
goto L21;
}
goto L19;
}
L20:;
si0=l2;
si1=189U;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=2U;
si0&=si1;
si0=!(si0);
if(si0){
goto L18;
}
L19:;
si0=6U;
l12=si0;
L18:;
si0=l0;
si1=20U;
i32_store8(&i->m0,(U64)si0+24U,si1);
si0=l0;
sj1=l9;
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l0;
si1=l12;
i32_store(&i->m0,(U64)si0,si1);
L1:;
si0=l6;
si1=80U;
si0+=si1;
i->g0=si0;
L0:;
}

void f268(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 l8=0;
U32 l9=0;
U32 l10=0;
U32 l11=0;
U32 si0,si1,si2;
U64 sj1;
si0=i->g0;
si1=16U;
si0-=si1;
l4=si0;
i->g0=si0;
si0=l1;
si1=256U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
if(si0){
goto L2;
}
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
goto L1;
L2:;
si0=0U;
l6=si0;
si0=l4;
si1=0U;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l4;
sj1=4ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+248U);
l7=si0;
si1=l5;
si2=48U;
si1*=si2;
si0+=si1;
l8=si0;
L3:;
{
si0=l7;
l9=si0;
si1=48U;
si0+=si1;
l7=si0;
si0=l9;
si1=40U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si0=!(si0);
if(si0){
goto L4;
}
si0=l9;
si0=i32_load(&i->m0,(U64)si0+32U);
l1=si0;
si0=l5;
si1=3U;
si0<<=(si1&31);
l5=si0;
L5:;
{
si0=l1;
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=l3;
si0=si0 != si1;
if(si0){
goto L6;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
si1=l2;
si2=l3;
si0=f15389(i,si0,si1,si2);
if(si0){
goto L6;
}
si0=l9;
si0=i32_load(&i->m0,(U64)si0+4U);
l10=si0;
si0=l9;
si0=i32_load(&i->m0,(U64)si0);
l11=si0;
si0=l6;
si1=l4;
si1=i32_load(&i->m0,(U64)si1+4U);
si0=si0 != si1;
if(si0){
goto L7;
}
si0=l4;
si1=l6;
f568(i,si0,si1);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+8U);
l6=si0;
L7:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
si1=l6;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l6=si0;
si1=l10;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l6;
si1=l11;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=l4;
si1=i32_load(&i->m0,(U64)si1+8U);
si2=1U;
si1+=si2;
l6=si1;
i32_store(&i->m0,(U64)si0+8U,si1);
L6:;
si0=l1;
si1=8U;
si0+=si1;
l1=si0;
si0=l5;
si1=-8U;
si0+=si1;
l5=si0;
if(si0){
goto L5;
}
}
L4:;
si0=l7;
si1=l8;
si0=si0 != si1;
if(si0){
goto L3;
}
}
si0=l6;
if(si0){
goto L8;
}
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+4U);
si0=!(si0);
if(si0){
goto L1;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
f15271(i,si0);
goto L1;
L8:;
si0=l0;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=8U;
si0+=si1;
si1=l4;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
L1:;
si0=l4;
si1=16U;
si0+=si1;
i->g0=si0;
L0:;
}

void f269(rustpythonInstance*i,U32 l0,U32 l1) {
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
U64 sj1;
si0=l0;
si1=304U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si0=!(si0);
if(si0){
goto L1;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+296U);
l3=si0;
si1=l2;
si2=4U;
si1<<=(si2&31);
si0+=si1;
l4=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+272U);
l5=si0;
si1=-8U;
si0+=si1;
l6=si0;
si0=l0;
si1=280U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
L2:;
{
si0=l3;
l2=si0;
si1=16U;
si0+=si1;
l3=si0;
si0=l2;
si1=12U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l8=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+8U);
l9=si0;
si0=l1;
si1=l2;
si1=i32_load(&i->m0,(U64)si1);
si2=l2;
si2=i32_load(&i->m0,(U64)si2+4U);
si0=f366(i,si0,si1,si2);
si0=!(si0);
if(si0){
goto L3;
}
si0=l1;
si1=l9;
si2=l8;
f641(i,si0,si1,si2);
si0=l7;
if(si0){
goto L4;
}
si0=0U;
l7=si0;
goto L3;
L4:;
si0=l7;
si1=-1U;
si0+=si1;
l10=si0;
si0=l6;
si1=l7;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l2=si0;
si0=l7;
l11=si0;
L6:;
{
si0=l2;
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=l8;
si0=si0 != si1;
if(si0){
goto L7;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0);
si1=l9;
si2=l8;
si0=f15389(i,si0,si1,si2);
si0=!(si0);
if(si0){
goto L5;
}
L7:;
si0=l2;
si1=-8U;
si0+=si1;
l2=si0;
si0=l11;
si1=-1U;
si0+=si1;
l11=si0;
si0=!(si0);
if(si0){
goto L3;
}
goto L6;
}
L5:;
si0=l0;
si1=l10;
i32_store(&i->m0,(U64)si0+280U,si1);
si0=l2;
si1=l5;
si2=l10;
si3=3U;
si2<<=(si3&31);
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l10;
l7=si0;
L3:;
si0=l3;
si1=l4;
si0=si0 != si1;
if(si0){
goto L2;
}
}
L1:;
L0:;
}

void f270(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
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
U64 sj0,sj1;
si0=i->g0;
si1=128U;
si0-=si1;
l4=si0;
i->g0=si0;
si0=l4;
si1=0U;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l4;
sj1=4ULL;
i64_store(&i->m0,(U64)si0+8U,sj1);
si0=l4;
si1=0U;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l4;
sj1=4ULL;
i64_store(&i->m0,(U64)si0+24U,sj1);
si0=l1;
si1=256U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si0=!(si0);
if(si0){
goto L2;
}
si0=l4;
si1=24U;
si0+=si1;
si1=8U;
si0+=si1;
l6=si0;
si0=l4;
si1=8U;
si0+=si1;
si1=8U;
si0+=si1;
l7=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+248U);
l8=si0;
si0=l5;
si1=48U;
si0*=si1;
l5=si0;
L3:;
{
si0=l8;
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=l3;
si0=si0 != si1;
if(si0){
goto L4;
}
si0=l8;
si0=i32_load(&i->m0,(U64)si0);
si1=l2;
si2=l3;
si0=f15389(i,si0,si1,si2);
si0=!(si0);
if(si0){
goto L1;
}
L4:;
si0=l8;
si1=48U;
si0+=si1;
l8=si0;
si0=l5;
si1=-48U;
si0+=si1;
l5=si0;
if(si0){
goto L3;
}
}
L2:;
si0=1084925U;
si1=99U;
si2=1085296U;
f703(i,si0,si1,si2);
UNREACHABLE;
L1:;
si0=l8;
si1=40U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si0=!(si0);
if(si0){
goto L5;
}
si0=l8;
si1=32U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l9=si0;
si1=l5;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l10=si0;
L9:;
{
si0=l1;
si0=i32_load(&i->m0,(U64)si0+220U);
l5=si0;
si0=!(si0);
if(si0){
goto L12;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+212U);
l8=si0;
si0=l5;
si1=120U;
si0*=si1;
l5=si0;
si0=l9;
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
L13:;
{
si0=l8;
si1=36U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=l3;
si0=si0 != si1;
if(si0){
goto L14;
}
si0=l8;
si1=32U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=l9;
si1=i32_load(&i->m0,(U64)si1);
si2=l3;
si0=f15389(i,si0,si1,si2);
si0=!(si0);
if(si0){
goto L11;
}
L14:;
si0=l8;
si1=120U;
si0+=si1;
l8=si0;
si0=l5;
si1=-120U;
si0+=si1;
l5=si0;
if(si0){
goto L13;
}
}
L12:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+232U);
l5=si0;
si0=!(si0);
if(si0){
goto L16;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+224U);
l8=si0;
si0=l5;
si1=272U;
si0*=si1;
l5=si0;
si0=l9;
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
L17:;
{
si0=l8;
si1=188U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=l3;
si0=si0 != si1;
if(si0){
goto L18;
}
si0=l8;
si1=184U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=l9;
si1=i32_load(&i->m0,(U64)si1);
si2=l3;
si0=f15389(i,si0,si1,si2);
si0=!(si0);
if(si0){
goto L15;
}
L18:;
si0=l8;
si1=272U;
si0+=si1;
l8=si0;
si0=l5;
si1=-272U;
si0+=si1;
l5=si0;
if(si0){
goto L17;
}
}
L16:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+8U);
l11=si0;
si0=!(si0);
if(si0){
goto L23;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l8=si0;
si1=l11;
si2=248U;
si1*=si2;
si0+=si1;
l3=si0;
si0=0U;
l2=si0;
L24:;
{
si0=l3;
l5=si0;
si0=l8;
si1=l3;
si0=si0 == si1;
if(si0){
goto L26;
}
si0=l8;
si1=248U;
si0+=si1;
l5=si0;
si0=l8;
sj0=i64_load(&i->m0,(U64)si0);
sj1=2ULL;
si0=sj0 != sj1;
if(si0){
goto L25;
}
L26:;
si0=l5;
l8=si0;
si0=l2;
si1=1U;
si0+=si1;
l2=si0;
si1=l11;
si0=si0 != si1;
if(si0){
goto L24;
}
goto L23;
L25:;
si0=l8;
si1=156U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l12=si0;
si1=l9;
si2=4U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
si0=si0 != si1;
if(si0){
goto L27;
}
si0=l8;
si0=i32_load(&i->m0,(U64)si0+152U);
l8=si0;
si1=l9;
si1=i32_load(&i->m0,(U64)si1);
si2=l12;
si0=f15389(i,si0,si1,si2);
si0=!(si0);
if(si0){
goto L22;
}
L27:;
si0=l5;
l8=si0;
si0=l2;
si1=1U;
si0+=si1;
l2=si0;
si1=l11;
si0=si0 < si1;
if(si0){
goto L24;
}
}
L23:;
si0=l9;
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si0=l9;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+16U);
l8=si0;
si1=l4;
si1=i32_load(&i->m0,(U64)si1+12U);
si0=si0 != si1;
if(si0){
goto L28;
}
si0=l4;
si1=8U;
si0+=si1;
si1=l8;
f568(i,si0,si1);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+16U);
l8=si0;
L28:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+8U);
si1=l8;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l8=si0;
si1=l5;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l8;
si1=l3;
i32_store(&i->m0,(U64)si0,si1);
si0=l7;
l8=si0;
goto L21;
L22:;
si0=l12;
if(si0){
goto L30;
}
si0=1U;
l5=si0;
goto L29;
L30:;
si0=l12;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L20;
}
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=l12;
si0=f15269(i,si0);
l5=si0;
si0=!(si0);
if(si0){
goto L19;
}
L29:;
si0=l5;
si1=l8;
si2=l12;
si0=f15390(i,si0,si1,si2);
l5=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+32U);
l8=si0;
si1=l4;
si1=i32_load(&i->m0,(U64)si1+28U);
si0=si0 != si1;
if(si0){
goto L31;
}
si0=l4;
si1=24U;
si0+=si1;
si1=l8;
f567(i,si0,si1);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+32U);
l8=si0;
L31:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+24U);
si1=l8;
si2=12U;
si1*=si2;
si0+=si1;
l8=si0;
si1=l12;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l8;
si1=l12;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l8;
si1=l5;
i32_store(&i->m0,(U64)si0,si1);
si0=l6;
l8=si0;
L21:;
si0=l8;
si1=l8;
si1=i32_load(&i->m0,(U64)si1);
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
goto L10;
L20:;
f53(i);
UNREACHABLE;
L19:;
si0=1U;
si1=l12;
f52(i,si0,si1);
UNREACHABLE;
L15:;
si0=l4;
si1=0U;
i32_store(&i->m0,(U64)si0+64U,si1);
si0=l4;
sj1=1ULL;
i64_store(&i->m0,(U64)si0+56U,sj1);
si0=l4;
si1=3U;
i32_store8(&i->m0,(U64)si0+104U,si1);
si0=l4;
si1=32U;
i32_store(&i->m0,(U64)si0+88U,si1);
si0=l4;
si1=0U;
i32_store(&i->m0,(U64)si0+100U,si1);
si0=l4;
si1=1084480U;
i32_store(&i->m0,(U64)si0+96U,si1);
si0=l4;
si1=0U;
i32_store(&i->m0,(U64)si0+80U,si1);
si0=l4;
si1=0U;
i32_store(&i->m0,(U64)si0+72U,si1);
si0=l4;
si1=l4;
si2=56U;
si1+=si2;
i32_store(&i->m0,(U64)si0+92U,si1);
si0=l8;
si1=l4;
si2=72U;
si1+=si2;
si0=f474(i,si0,si1);
if(si0){
goto L32;
}
si0=l4;
si1=40U;
si0+=si1;
si1=8U;
si0+=si1;
l5=si0;
si1=l4;
si2=56U;
si1+=si2;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1+56U);
i64_store(&i->m0,(U64)si0+40U,sj1);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+32U);
l8=si0;
si1=l4;
si1=i32_load(&i->m0,(U64)si1+28U);
si0=si0 != si1;
if(si0){
goto L33;
}
si0=l4;
si1=24U;
si0+=si1;
si1=l8;
f567(i,si0,si1);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+32U);
l8=si0;
L33:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+24U);
si1=l8;
si2=12U;
si1*=si2;
si0+=si1;
l8=si0;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1+40U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l8;
si1=8U;
si0+=si1;
si1=l5;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=l4;
si1=i32_load(&i->m0,(U64)si1+32U);
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0+32U,si1);
goto L10;
L32:;
si0=1084504U;
si1=55U;
si2=l4;
si3=120U;
si2+=si3;
si3=1084560U;
si4=1084652U;
f712(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L11:;
si0=l4;
si1=0U;
i32_store(&i->m0,(U64)si0+64U,si1);
si0=l4;
sj1=1ULL;
i64_store(&i->m0,(U64)si0+56U,sj1);
si0=l8;
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
if(si0){
goto L35;
}
si0=l8;
si0=i32_load(&i->m0,(U64)si0);
l8=si0;
si1=1114112U;
si0=si0 == si1;
if(si0){
goto L8;
}
si0=l4;
si1=21U;
i32_store(&i->m0,(U64)si0+44U,si1);
si0=l4;
si1=l8;
i32_store(&i->m0,(U64)si0+112U,si1);
si0=l4;
si1=l4;
si2=112U;
si1+=si2;
i32_store(&i->m0,(U64)si0+40U,si1);
si0=l4;
sj1=1ULL;
i64_store(&i->m0,(U64)si0+84U,sj1);
si0=l4;
si1=1U;
i32_store(&i->m0,(U64)si0+76U,si1);
si0=l4;
si1=1093384U;
i32_store(&i->m0,(U64)si0+72U,si1);
si0=l4;
si1=l4;
si2=40U;
si1+=si2;
i32_store(&i->m0,(U64)si0+80U,si1);
si0=l4;
si1=56U;
si0+=si1;
si1=1084480U;
si2=l4;
si3=72U;
si2+=si3;
si0=f690(i,si0,si1,si2);
si0=!(si0);
if(si0){
goto L34;
}
goto L7;
L35:;
si0=l4;
si1=l5;
i32_store(&i->m0,(U64)si0+112U,si1);
si0=l4;
si1=l8;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0+116U,si1);
si0=l4;
si1=66U;
i32_store(&i->m0,(U64)si0+44U,si1);
si0=l4;
si1=l4;
si2=112U;
si1+=si2;
i32_store(&i->m0,(U64)si0+40U,si1);
si0=l4;
sj1=1ULL;
i64_store(&i->m0,(U64)si0+84U,sj1);
si0=l4;
si1=1U;
i32_store(&i->m0,(U64)si0+76U,si1);
si0=l4;
si1=1093372U;
i32_store(&i->m0,(U64)si0+72U,si1);
si0=l4;
si1=l4;
si2=40U;
si1+=si2;
i32_store(&i->m0,(U64)si0+80U,si1);
si0=l4;
si1=56U;
si0+=si1;
si1=1084480U;
si2=l4;
si3=72U;
si2+=si3;
si0=f690(i,si0,si1,si2);
if(si0){
goto L7;
}
L34:;
si0=l4;
si1=72U;
si0+=si1;
si1=8U;
si0+=si1;
l5=si0;
si1=l4;
si2=56U;
si1+=si2;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1+56U);
i64_store(&i->m0,(U64)si0+72U,sj1);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+32U);
l8=si0;
si1=l4;
si1=i32_load(&i->m0,(U64)si1+28U);
si0=si0 != si1;
if(si0){
goto L36;
}
si0=l4;
si1=24U;
si0+=si1;
si1=l8;
f567(i,si0,si1);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+32U);
l8=si0;
L36:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+24U);
si1=l8;
si2=12U;
si1*=si2;
si0+=si1;
l8=si0;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1+72U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l8;
si1=8U;
si0+=si1;
si1=l5;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=l4;
si1=i32_load(&i->m0,(U64)si1+32U);
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0+32U,si1);
L10:;
si0=l9;
si1=8U;
si0+=si1;
l9=si0;
si1=l10;
si0=si0 == si1;
if(si0){
goto L6;
}
goto L9;
}
L8:;
si0=1093392U;
si1=43U;
si2=1093548U;
f673(i,si0,si1,si2);
UNREACHABLE;
L7:;
si0=1084504U;
si1=55U;
si2=l4;
si3=120U;
si2+=si3;
si3=1084560U;
si4=1084652U;
f712(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L6:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+16U);
l5=si0;
si0=!(si0);
if(si0){
goto L5;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0+8U);
l8=si0;
si1=l5;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l11=si0;
L37:;
{
si0=l4;
si1=72U;
si0+=si1;
si1=l1;
si2=l8;
si2=i32_load(&i->m0,(U64)si2);
si3=l8;
si4=4U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
f270(i,si0,si1,si2,si3);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+72U);
l2=si0;
si0=!(si0);
if(si0){
goto L5;
}
si0=l4;
sj0=i64_load(&i->m0,(U64)si0+76U);
l13=sj0;
sj1=32ULL;
sj0>>=(sj1&63);
si0=(U32)(sj0);
l3=si0;
si1=12U;
si0*=si1;
l9=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+28U);
si1=l4;
si1=i32_load(&i->m0,(U64)si1+32U);
l5=si1;
si0-=si1;
si1=l3;
si0=si0 >= si1;
if(si0){
goto L38;
}
si0=l4;
si1=24U;
si0+=si1;
si1=l5;
si2=l3;
f574(i,si0,si1,si2);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+32U);
l5=si0;
L38:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+24U);
si1=l5;
si2=12U;
si1*=si2;
si0+=si1;
si1=l2;
si2=l9;
si0=f15390(i,si0,si1,si2);
si0=l4;
si1=l5;
si2=l3;
si1+=si2;
i32_store(&i->m0,(U64)si0+32U,si1);
sj0=l13;
si0=(U32)(sj0);
si0=!(si0);
if(si0){
goto L39;
}
si0=l2;
f15271(i,si0);
L39:;
si0=l8;
si1=8U;
si0+=si1;
l8=si0;
si1=l11;
si0=si0 != si1;
if(si0){
goto L37;
}
}
L5:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+32U);
l3=si0;
si1=2U;
si0=si0 < si1;
if(si0){
goto L40;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0+24U);
l1=si0;
si1=20U;
si0+=si1;
l8=si0;
si0=l3;
si1=-1U;
si0+=si1;
l9=si0;
si0=1U;
l3=si0;
L41:;
{
si0=l8;
si1=-8U;
si0+=si1;
l5=si0;
si0=l8;
si0=i32_load(&i->m0,(U64)si0);
l11=si0;
si1=l3;
si2=12U;
si1*=si2;
si2=l1;
si1+=si2;
l2=si1;
si2=-12U;
si1+=si2;
l12=si1;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
si0=si0 != si1;
if(si0){
goto L44;
}
si0=l5;
si0=i32_load(&i->m0,(U64)si0);
l10=si0;
si1=l12;
si1=i32_load(&i->m0,(U64)si1);
si2=l11;
si0=f15389(i,si0,si1,si2);
si0=!(si0);
if(si0){
goto L43;
}
L44:;
si0=l5;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l11=si0;
si0=l2;
si1=l5;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=8U;
si0+=si1;
si1=l11;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=1U;
si0+=si1;
l3=si0;
goto L42;
L43:;
si0=l8;
si1=-4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L42;
}
si0=l10;
f15271(i,si0);
L42:;
si0=l8;
si1=12U;
si0+=si1;
l8=si0;
si0=l9;
si1=-1U;
si0+=si1;
l9=si0;
if(si0){
goto L41;
}
}
si0=l4;
si1=l3;
i32_store(&i->m0,(U64)si0+32U,si1);
L40:;
si0=l0;
si1=l4;
si1=i32_load(&i->m0,(U64)si1+24U);
l8=si1;
si2=l8;
si3=l3;
si4=12U;
si3*=si4;
si2+=si3;
f307(i,si0,si1,si2);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+32U);
l5=si0;
si0=!(si0);
if(si0){
goto L45;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0+24U);
l8=si0;
L46:;
{
si0=l8;
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L47;
}
si0=l8;
si0=i32_load(&i->m0,(U64)si0);
f15271(i,si0);
L47:;
si0=l8;
si1=12U;
si0+=si1;
l8=si0;
si0=l5;
si1=-1U;
si0+=si1;
l5=si0;
if(si0){
goto L46;
}
}
L45:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+28U);
si0=!(si0);
if(si0){
goto L48;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0+24U);
f15271(i,si0);
L48:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+12U);
si0=!(si0);
if(si0){
goto L49;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0+8U);
f15271(i,si0);
L49:;
si0=l4;
si1=128U;
si0+=si1;
i->g0=si0;
L0:;
}

void f271(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
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
si1=48U;
si0-=si1;
l4=si0;
i->g0=si0;
si0=l4;
si1=0U;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l4;
sj1=4ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=0U;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l4;
sj1=4ULL;
i64_store(&i->m0,(U64)si0+16U,sj1);
si0=l1;
si1=256U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si0=!(si0);
if(si0){
goto L2;
}
si0=l4;
si1=16U;
si0+=si1;
si1=8U;
si0+=si1;
l6=si0;
si0=l4;
si1=8U;
si0+=si1;
l7=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+248U);
l8=si0;
si0=l5;
si1=48U;
si0*=si1;
l5=si0;
L3:;
{
si0=l8;
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=l3;
si0=si0 != si1;
if(si0){
goto L4;
}
si0=l8;
si0=i32_load(&i->m0,(U64)si0);
si1=l2;
si2=l3;
si0=f15389(i,si0,si1,si2);
si0=!(si0);
if(si0){
goto L1;
}
L4:;
si0=l8;
si1=48U;
si0+=si1;
l8=si0;
si0=l5;
si1=-48U;
si0+=si1;
l5=si0;
if(si0){
goto L3;
}
}
L2:;
si0=1084925U;
si1=99U;
si2=1085312U;
f703(i,si0,si1,si2);
UNREACHABLE;
L1:;
si0=0U;
l9=si0;
si0=l8;
si1=40U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
if(si0){
goto L8;
}
si0=4U;
l10=si0;
si0=4U;
l11=si0;
goto L7;
L8:;
si0=l8;
si1=32U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l11=si0;
si1=l5;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l12=si0;
L9:;
{
si0=l11;
si1=8U;
si0+=si1;
l13=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+256U);
l5=si0;
si0=!(si0);
if(si0){
goto L13;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+248U);
l8=si0;
si0=l5;
si1=48U;
si0*=si1;
l5=si0;
si0=l11;
si1=4U;
si0+=si1;
l10=si0;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=l11;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
L14:;
{
si0=l8;
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=l3;
si0=si0 != si1;
if(si0){
goto L15;
}
si0=l8;
si0=i32_load(&i->m0,(U64)si0);
si1=l2;
si2=l3;
si0=f15389(i,si0,si1,si2);
si0=!(si0);
if(si0){
goto L12;
}
L15:;
si0=l8;
si1=48U;
si0+=si1;
l8=si0;
si0=l5;
si1=-48U;
si0+=si1;
l5=si0;
if(si0){
goto L14;
}
}
L13:;
si0=l11;
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+16U);
l14=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+24U);
l10=si0;
si0=!(si0);
if(si0){
goto L16;
}
si0=l10;
si1=3U;
si0<<=(si1&31);
l5=si0;
si0=l11;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si0=l14;
l8=si0;
L17:;
{
si0=l3;
si1=l8;
si2=4U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
si0=si0 != si1;
if(si0){
goto L18;
}
si0=l8;
si0=i32_load(&i->m0,(U64)si0);
si1=l2;
si2=l3;
si0=f15389(i,si0,si1,si2);
si0=!(si0);
if(si0){
goto L10;
}
L18:;
si0=l8;
si1=8U;
si0+=si1;
l8=si0;
si0=l5;
si1=-8U;
si0+=si1;
l5=si0;
if(si0){
goto L17;
}
}
L16:;
si0=l11;
si0=i32_load(&i->m0,(U64)si0);
l8=si0;
si0=l10;
si1=l4;
si1=i32_load(&i->m0,(U64)si1+20U);
si0=si0 != si1;
if(si0){
goto L19;
}
si0=l4;
si1=16U;
si0+=si1;
si1=l10;
f568(i,si0,si1);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+16U);
l14=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+24U);
l10=si0;
L19:;
si0=l14;
si1=l10;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l5=si0;
si1=l3;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l5;
si1=l8;
i32_store(&i->m0,(U64)si0,si1);
si0=l6;
l8=si0;
goto L11;
L12:;
si0=l4;
si1=32U;
si0+=si1;
si1=l1;
si2=l2;
si3=l3;
f271(i,si0,si1,si2,si3);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+40U);
l5=si0;
si1=3U;
si0<<=(si1&31);
l2=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+36U);
l14=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+32U);
l3=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=l4;
si1=i32_load(&i->m0,(U64)si1+24U);
l8=si1;
si0-=si1;
si1=l5;
si0=si0 >= si1;
if(si0){
goto L20;
}
si0=l4;
si1=16U;
si0+=si1;
si1=l8;
si2=l5;
f576(i,si0,si1,si2);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+24U);
l8=si0;
L20:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+16U);
si1=l8;
si2=3U;
si1<<=(si2&31);
si0+=si1;
si1=l3;
si2=l2;
si0=f15390(i,si0,si1,si2);
si0=l4;
si1=l8;
si2=l5;
si1+=si2;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l14;
si0=!(si0);
if(si0){
goto L21;
}
si0=l3;
f15271(i,si0);
L21:;
si0=l10;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si0=l11;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+8U);
l8=si0;
si1=l4;
si1=i32_load(&i->m0,(U64)si1+4U);
si0=si0 != si1;
if(si0){
goto L22;
}
si0=l4;
si1=l8;
f568(i,si0,si1);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+8U);
l8=si0;
L22:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
si1=l8;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l8=si0;
si1=l5;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l8;
si1=l3;
i32_store(&i->m0,(U64)si0,si1);
si0=l7;
l8=si0;
L11:;
si0=l8;
si1=l8;
si1=i32_load(&i->m0,(U64)si1);
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
L10:;
si0=l13;
l11=si0;
si0=l13;
si1=l12;
si0=si0 != si1;
if(si0){
goto L9;
}
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0+16U);
l10=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+24U);
l14=si0;
if(si0){
goto L23;
}
si0=4U;
l11=si0;
goto L7;
L23:;
si0=l14;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L6;
}
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=l14;
si1=-1U;
si0^=si1;
si1=26U;
si0>>=(si1&31);
si1=4U;
si0&=si1;
l5=si0;
si1=l14;
si2=3U;
si1<<=(si2&31);
l8=si1;
si0=si0 <= si1;
if(si0){
goto L25;
}
si0=l5;
si1=l8;
si0=f15277(i,si0,si1);
l11=si0;
goto L24;
L25:;
si0=l8;
si0=f15269(i,si0);
l11=si0;
L24:;
si0=l11;
si0=!(si0);
if(si0){
goto L5;
}
si0=l14;
si1=1U;
si0&=si1;
l1=si0;
si0=0U;
l5=si0;
si0=l14;
si1=1U;
si0=si0 == si1;
if(si0){
goto L26;
}
si0=l14;
si1=-2U;
si0&=si1;
l13=si0;
si0=0U;
l8=si0;
si0=0U;
l5=si0;
L27:;
{
si0=l11;
si1=l8;
si0+=si1;
l3=si0;
si1=l10;
si2=l8;
si1+=si2;
l2=si1;
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
si0=l8;
si1=16U;
si0+=si1;
l8=si0;
si0=l13;
si1=l5;
si2=2U;
si1+=si2;
l5=si1;
si0=si0 != si1;
if(si0){
goto L27;
}
}
L26:;
si0=l1;
si0=!(si0);
if(si0){
goto L28;
}
si0=l11;
si1=l5;
si2=3U;
si1<<=(si2&31);
l8=si1;
si0+=si1;
si1=l10;
si2=l8;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
L28:;
si0=l14;
l9=si0;
L7:;
si0=l0;
si1=l9;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l0;
si1=l9;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l11;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+20U);
si0=!(si0);
if(si0){
goto L29;
}
si0=l10;
f15271(i,si0);
L29:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+4U);
si0=!(si0);
if(si0){
goto L30;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
f15271(i,si0);
L30:;
si0=l4;
si1=48U;
si0+=si1;
i->g0=si0;
goto L0;
L6:;
f53(i);
UNREACHABLE;
L5:;
si0=l5;
si1=l8;
f52(i,si0,si1);
UNREACHABLE;
L0:;
}

void f272(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4,U32 l5) {
U32 l6=0;
U32 l7=0;
U32 l8=0;
U32 l9=0;
U32 l10=0;
U32 l11=0;
U32 si0,si1,si2,si3,si4;
si0=i->g0;
si1=16U;
si0-=si1;
l6=si0;
i->g0=si0;
si0=l1;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+308U);
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0+308U,si1);
si0=l2;
si0=i32_load(&i->m0,(U64)si0+104U);
l7=si0;
si0=!(si0);
if(si0){
goto L4;
}
si0=l2;
si1=108U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=l4;
si0=si0 != si1;
if(si0){
goto L4;
}
si0=l3;
si1=l7;
si2=l4;
si0=f15389(i,si0,si1,si2);
si0=!(si0);
if(si0){
goto L3;
}
L4:;
si0=l5;
si1=l2;
si1=i32_load(&i->m0,(U64)si1+184U);
l8=si1;
si2=l2;
si3=188U;
si2+=si3;
si2=i32_load(&i->m0,(U64)si2);
l9=si2;
si3=l3;
si4=l4;
f646(i,si0,si1,si2,si3,si4);
si0=l5;
si1=l8;
si2=l9;
si3=l1;
si3=i32_load(&i->m0,(U64)si3+308U);
f647(i,si0,si1,si2,si3);
si0=l6;
si1=l1;
si2=l8;
si3=l9;
f268(i,si0,si1,si2,si3);
si0=l6;
si0=i32_load(&i->m0,(U64)si0);
l10=si0;
si0=!(si0);
if(si0){
goto L5;
}
si0=l6;
si0=i32_load(&i->m0,(U64)si0+4U);
l11=si0;
si0=l6;
si0=i32_load(&i->m0,(U64)si0+8U);
l1=si0;
si0=!(si0);
if(si0){
goto L6;
}
si0=l10;
si1=l1;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l7=si0;
si0=l10;
l1=si0;
L7:;
{
si0=l5;
si1=l1;
si1=i32_load(&i->m0,(U64)si1);
si2=l1;
si3=4U;
si2+=si3;
si2=i32_load(&i->m0,(U64)si2);
si3=l3;
si4=l4;
f646(i,si0,si1,si2,si3,si4);
si0=l1;
si1=8U;
si0+=si1;
l1=si0;
si1=l7;
si0=si0 != si1;
if(si0){
goto L7;
}
}
L6:;
si0=l11;
si0=!(si0);
if(si0){
goto L5;
}
si0=l10;
f15271(i,si0);
L5:;
si0=l5;
si1=l2;
si0=f648(i,si0,si1);
if(si0){
goto L2;
}
si0=l0;
si1=6U;
i32_store(&i->m0,(U64)si0,si1);
goto L1;
L3:;
si0=l0;
si1=6U;
i32_store(&i->m0,(U64)si0,si1);
goto L1;
L2:;
si0=l0;
si1=l9;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l0;
si1=l8;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=1U;
i32_store(&i->m0,(U64)si0,si1);
L1:;
si0=l0;
si1=20U;
i32_store8(&i->m0,(U64)si0+24U,si1);
si0=l6;
si1=16U;
si0+=si1;
i->g0=si0;
L0:;
}

void f273(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4,U32 l5) {
U32 l6=0;
U32 l7=0;
U32 l8=0;
U32 l9=0;
U32 l10=0;
U32 l11=0;
U32 si0,si1,si2,si3,si4;
si0=i->g0;
si1=16U;
si0-=si1;
l6=si0;
i->g0=si0;
si0=l1;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+308U);
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0+308U,si1);
si0=l2;
si0=i32_load(&i->m0,(U64)si0+104U);
l7=si0;
si0=!(si0);
if(si0){
goto L4;
}
si0=l2;
si1=108U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=l4;
si0=si0 != si1;
if(si0){
goto L4;
}
si0=l3;
si1=l7;
si2=l4;
si0=f15389(i,si0,si1,si2);
si0=!(si0);
if(si0){
goto L3;
}
L4:;
si0=l5;
si1=l2;
si1=i32_load(&i->m0,(U64)si1+152U);
l8=si1;
si2=l2;
si3=156U;
si2+=si3;
si2=i32_load(&i->m0,(U64)si2);
l9=si2;
si3=l3;
si4=l4;
f646(i,si0,si1,si2,si3,si4);
si0=l5;
si1=l8;
si2=l9;
si3=l1;
si3=i32_load(&i->m0,(U64)si3+308U);
f647(i,si0,si1,si2,si3);
si0=l6;
si1=l1;
si2=l8;
si3=l9;
f268(i,si0,si1,si2,si3);
si0=l6;
si0=i32_load(&i->m0,(U64)si0);
l10=si0;
si0=!(si0);
if(si0){
goto L5;
}
si0=l6;
si0=i32_load(&i->m0,(U64)si0+4U);
l11=si0;
si0=l6;
si0=i32_load(&i->m0,(U64)si0+8U);
l1=si0;
si0=!(si0);
if(si0){
goto L6;
}
si0=l10;
si1=l1;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l7=si0;
si0=l10;
l1=si0;
L7:;
{
si0=l5;
si1=l1;
si1=i32_load(&i->m0,(U64)si1);
si2=l1;
si3=4U;
si2+=si3;
si2=i32_load(&i->m0,(U64)si2);
si3=l3;
si4=l4;
f646(i,si0,si1,si2,si3,si4);
si0=l1;
si1=8U;
si0+=si1;
l1=si0;
si1=l7;
si0=si0 != si1;
if(si0){
goto L7;
}
}
L6:;
si0=l11;
si0=!(si0);
if(si0){
goto L5;
}
si0=l10;
f15271(i,si0);
L5:;
si0=l5;
si1=l2;
si0=f649(i,si0,si1);
if(si0){
goto L2;
}
si0=l0;
si1=6U;
i32_store(&i->m0,(U64)si0,si1);
goto L1;
L3:;
si0=l0;
si1=6U;
i32_store(&i->m0,(U64)si0,si1);
goto L1;
L2:;
si0=l0;
si1=l9;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l0;
si1=l8;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=1U;
i32_store(&i->m0,(U64)si0,si1);
L1:;
si0=l0;
si1=20U;
i32_store8(&i->m0,(U64)si0+24U,si1);
si0=l6;
si1=16U;
si0+=si1;
i->g0=si0;
L0:;
}

void f274(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
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
U64 l18=0;
U64 l19=0;
U64 l20=0;
U32 l21=0;
U32 l22=0;
U32 si0,si1,si2,si3,si4,si5;
U64 sj0,sj1;
si0=i->g0;
si1=64U;
si0-=si1;
l3=si0;
i->g0=si0;
si0=l1;
si1=232U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
si0=!(si0);
if(si0){
goto L2;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+224U);
l5=si0;
si1=l4;
si2=272U;
si1*=si2;
si0+=si1;
l6=si0;
si0=l3;
si1=57U;
si0+=si1;
l7=si0;
L3:;
{
si0=l5;
l8=si0;
si1=272U;
si0+=si1;
l5=si0;
si0=l8;
si0=i32_load(&i->m0,(U64)si0+88U);
si0=!(si0);
if(si0){
goto L4;
}
si0=l2;
si1=l8;
si1=i32_load(&i->m0,(U64)si1+184U);
si2=l8;
si3=188U;
si2+=si3;
si2=i32_load(&i->m0,(U64)si2);
si0=f640(i,si0,si1,si2);
if(si0){
goto L4;
}
si0=l8;
si1=96U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l9=si0;
si0=!(si0);
if(si0){
goto L4;
}
si0=l8;
si0=i32_load(&i->m0,(U64)si0+88U);
l4=si0;
si1=l9;
si2=24U;
si1*=si2;
si0+=si1;
l10=si0;
si0=0U;
l11=si0;
L5:;
{
si0=l10;
l12=si0;
si0=l4;
si1=l10;
si0=si0 == si1;
if(si0){
goto L7;
}
si0=l4;
si1=24U;
si0+=si1;
l12=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
l13=si0;
if(si0){
goto L6;
}
L7:;
si0=l12;
l4=si0;
si0=l11;
si1=1U;
si0+=si1;
l11=si0;
si1=l9;
si0=si0 == si1;
if(si0){
goto L4;
}
goto L5;
L6:;
si0=l4;
si1=20U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l14=si0;
si0=l4;
si1=12U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l15=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+16U);
l16=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+8U);
l17=si0;
si0=l2;
si1=l13;
si2=l4;
si2=i32_load(&i->m0,(U64)si2+4U);
si0=f640(i,si0,si1,si2);
l4=si0;
si0=!(si0);
if(si0){
goto L9;
}
si0=l17;
si0=!(si0);
if(si0){
goto L8;
}
si0=l4;
si1=28U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l13=si0;
si0=!(si0);
if(si0){
goto L9;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0+20U);
l4=si0;
si0=l13;
si1=12U;
si0*=si1;
l13=si0;
L10:;
{
si0=l15;
si1=l4;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
si0=si0 != si1;
if(si0){
goto L11;
}
si0=l17;
si1=l4;
si1=i32_load(&i->m0,(U64)si1);
si2=l15;
si0=f15389(i,si0,si1,si2);
si0=!(si0);
if(si0){
goto L8;
}
L11:;
si0=l4;
si1=12U;
si0+=si1;
l4=si0;
si0=l13;
si1=-12U;
si0+=si1;
l13=si0;
if(si0){
goto L10;
}
}
L9:;
si0=l12;
l4=si0;
si0=l11;
si1=1U;
si0+=si1;
l11=si0;
si1=l9;
si0=si0 >= si1;
if(si0){
goto L4;
}
goto L5;
L8:;
}
si0=l3;
si1=32U;
si0+=si1;
si1=l1;
si2=l8;
si3=l16;
si4=l14;
si5=l2;
f266(i,si0,si1,si2,si3,si4,si5);
si0=l3;
si0=i32_load8_u(&i->m0,(U64)si0+56U);
l4=si0;
si1=20U;
si0=si0 != si1;
if(si0){
goto L12;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+32U);
l13=si0;
if(si0){
goto L15;
}
si0=l8;
si0=i32_load(&i->m0,(U64)si0+188U);
l4=si0;
goto L14;
L15:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+36U);
l15=si0;
si1=l8;
si1=i32_load(&i->m0,(U64)si1+188U);
l4=si1;
si0=si0 != si1;
if(si0){
goto L14;
}
si0=l15;
l4=si0;
si0=l13;
si1=l8;
si1=i32_load(&i->m0,(U64)si1+184U);
si2=l15;
si0=f15389(i,si0,si1,si2);
si0=!(si0);
if(si0){
goto L13;
}
L14:;
si0=l1;
si1=l4;
i32_store(&i->m0,(U64)si0+36U,si1);
si0=l1;
si1=l8;
si1=i32_load(&i->m0,(U64)si1+184U);
i32_store(&i->m0,(U64)si0+32U,si1);
L13:;
si0=l5;
si1=l6;
si0=si0 != si1;
if(si0){
goto L3;
}
goto L2;
L12:;
si0=l0;
si1=l7;
si1=i32_load16_u(&i->m0,(U64)si1);
i32_store16(&i->m0,(U64)si0+25U,si1);
si0=l3;
si1=8U;
si0+=si1;
si1=16U;
si0+=si1;
si1=l3;
si2=32U;
si1+=si2;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
l18=sj1;
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=8U;
si0+=si1;
si1=8U;
si0+=si1;
si1=l3;
si2=32U;
si1+=si2;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
l19=sj1;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=27U;
si0+=si1;
si1=l7;
si2=2U;
si1+=si2;
si1=i32_load8_u(&i->m0,(U64)si1);
i32_store8(&i->m0,(U64)si0,si1);
si0=l3;
si1=l3;
sj1=i64_load(&i->m0,(U64)si1+32U);
l20=sj1;
i64_store(&i->m0,(U64)si0+8U,sj1);
si0=l0;
si1=16U;
si0+=si1;
sj1=l18;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=8U;
si0+=si1;
sj1=l19;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
sj1=l20;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=l4;
i32_store8(&i->m0,(U64)si0+24U,si1);
goto L1;
L4:;
si0=l8;
si0=i32_load(&i->m0,(U64)si0+80U);
si0=!(si0);
if(si0){
goto L16;
}
si0=l2;
si1=l8;
si1=i32_load(&i->m0,(U64)si1+184U);
si2=l8;
si3=188U;
si2+=si3;
si2=i32_load(&i->m0,(U64)si2);
si0=f640(i,si0,si1,si2);
l4=si0;
si0=!(si0);
if(si0){
goto L19;
}
si0=l4;
si1=28U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L18;
}
L19:;
si0=l2;
si1=l8;
si1=i32_load(&i->m0,(U64)si1+184U);
si2=l8;
si2=i32_load(&i->m0,(U64)si2+188U);
si0=f640(i,si0,si1,si2);
if(si0){
goto L16;
}
si0=l3;
si1=32U;
si0+=si1;
si1=l1;
si2=l8;
si3=l8;
si3=i32_load(&i->m0,(U64)si3+80U);
si4=l8;
si5=84U;
si4+=si5;
si4=i32_load(&i->m0,(U64)si4);
si5=l2;
f266(i,si0,si1,si2,si3,si4,si5);
si0=l3;
si0=i32_load8_u(&i->m0,(U64)si0+56U);
l4=si0;
si1=20U;
si0=si0 != si1;
if(si0){
goto L20;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+32U);
l4=si0;
si0=!(si0);
if(si0){
goto L17;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+36U);
l13=si0;
si1=l8;
si1=i32_load(&i->m0,(U64)si1+188U);
si0=si0 != si1;
if(si0){
goto L17;
}
si0=l4;
si1=l8;
si1=i32_load(&i->m0,(U64)si1+184U);
si2=l13;
si0=f15389(i,si0,si1,si2);
si0=!(si0);
if(si0){
goto L16;
}
goto L17;
L20:;
si0=l0;
si1=l7;
si1=i32_load16_u(&i->m0,(U64)si1);
i32_store16(&i->m0,(U64)si0+25U,si1);
si0=l3;
si1=8U;
si0+=si1;
si1=16U;
si0+=si1;
si1=l3;
si2=32U;
si1+=si2;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
l18=sj1;
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=8U;
si0+=si1;
si1=8U;
si0+=si1;
si1=l3;
si2=32U;
si1+=si2;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
l19=sj1;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=27U;
si0+=si1;
si1=l7;
si2=2U;
si1+=si2;
si1=i32_load8_u(&i->m0,(U64)si1);
i32_store8(&i->m0,(U64)si0,si1);
si0=l3;
si1=l3;
sj1=i64_load(&i->m0,(U64)si1+32U);
l20=sj1;
i64_store(&i->m0,(U64)si0+8U,sj1);
si0=l0;
si1=16U;
si0+=si1;
sj1=l18;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=8U;
si0+=si1;
sj1=l19;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
sj1=l20;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=l4;
i32_store8(&i->m0,(U64)si0+24U,si1);
goto L1;
L18:;
si0=l3;
si1=32U;
si0+=si1;
si1=l1;
si2=l8;
si3=l8;
si3=i32_load(&i->m0,(U64)si3+80U);
si4=l8;
si5=84U;
si4+=si5;
si4=i32_load(&i->m0,(U64)si4);
si5=l2;
f266(i,si0,si1,si2,si3,si4,si5);
si0=l3;
si0=i32_load8_u(&i->m0,(U64)si0+56U);
l4=si0;
si1=20U;
si0=si0 == si1;
if(si0){
goto L21;
}
si0=l0;
si1=l7;
si1=i32_load16_u(&i->m0,(U64)si1);
i32_store16(&i->m0,(U64)si0+25U,si1);
si0=l3;
si1=8U;
si0+=si1;
si1=16U;
si0+=si1;
si1=l3;
si2=32U;
si1+=si2;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
l18=sj1;
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=8U;
si0+=si1;
si1=8U;
si0+=si1;
si1=l3;
si2=32U;
si1+=si2;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
l19=sj1;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=27U;
si0+=si1;
si1=l7;
si2=2U;
si1+=si2;
si1=i32_load8_u(&i->m0,(U64)si1);
i32_store8(&i->m0,(U64)si0,si1);
si0=l3;
si1=l3;
sj1=i64_load(&i->m0,(U64)si1+32U);
l20=sj1;
i64_store(&i->m0,(U64)si0+8U,sj1);
si0=l0;
si1=16U;
si0+=si1;
sj1=l18;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=8U;
si0+=si1;
sj1=l19;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
sj1=l20;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=l4;
i32_store8(&i->m0,(U64)si0+24U,si1);
goto L1;
L21:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+32U);
l4=si0;
si0=!(si0);
if(si0){
goto L17;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+36U);
l13=si0;
si1=l8;
si1=i32_load(&i->m0,(U64)si1+188U);
si0=si0 != si1;
if(si0){
goto L17;
}
si0=l4;
si1=l8;
si1=i32_load(&i->m0,(U64)si1+184U);
si2=l13;
si0=f15389(i,si0,si1,si2);
si0=!(si0);
if(si0){
goto L16;
}
L17:;
si0=l1;
si1=l8;
sj1=i64_load(&i->m0,(U64)si1+184U);
i64_store(&i->m0,(U64)si0+32U,sj1);
L16:;
si0=l5;
si1=l6;
si0=si0 != si1;
if(si0){
goto L3;
}
}
L2:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+8U);
l6=si0;
si0=!(si0);
if(si0){
goto L22;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l12=si0;
si1=l6;
si2=248U;
si1*=si2;
si0+=si1;
l10=si0;
si0=l3;
si1=57U;
si0+=si1;
l21=si0;
si0=0U;
l17=si0;
L23:;
{
si0=l12;
l13=si0;
si0=l10;
l12=si0;
si0=l13;
si1=l10;
si0=si0 == si1;
if(si0){
goto L25;
}
si0=l13;
si1=248U;
si0+=si1;
l12=si0;
si0=l13;
sj0=i64_load(&i->m0,(U64)si0);
sj1=2ULL;
si0=sj0 != sj1;
if(si0){
goto L24;
}
L25:;
si0=l17;
si1=1U;
si0+=si1;
l17=si0;
si1=l6;
si0=si0 != si1;
if(si0){
goto L23;
}
goto L22;
L24:;
si0=l17;
si1=1U;
si0+=si1;
l17=si0;
si0=l13;
si0=i32_load(&i->m0,(U64)si0+88U);
si0=!(si0);
if(si0){
goto L26;
}
si0=l2;
si1=l13;
si1=i32_load(&i->m0,(U64)si1+152U);
si2=l13;
si3=156U;
si2+=si3;
si2=i32_load(&i->m0,(U64)si2);
si0=f640(i,si0,si1,si2);
if(si0){
goto L26;
}
si0=l13;
si1=96U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l16=si0;
si0=!(si0);
if(si0){
goto L26;
}
si0=l13;
si0=i32_load(&i->m0,(U64)si0+88U);
l4=si0;
si1=l16;
si2=24U;
si1*=si2;
si0+=si1;
l9=si0;
si0=0U;
l14=si0;
L27:;
{
si0=l9;
l11=si0;
si0=l4;
si1=l9;
si0=si0 == si1;
if(si0){
goto L29;
}
si0=l4;
si1=24U;
si0+=si1;
l11=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
l15=si0;
if(si0){
goto L28;
}
L29:;
si0=l11;
l4=si0;
si0=l14;
si1=1U;
si0+=si1;
l14=si0;
si1=l16;
si0=si0 == si1;
if(si0){
goto L26;
}
goto L27;
L28:;
si0=l4;
si1=20U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
si0=l4;
si1=12U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l8=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+16U);
l22=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+8U);
l5=si0;
si0=l2;
si1=l15;
si2=l4;
si2=i32_load(&i->m0,(U64)si2+4U);
si0=f640(i,si0,si1,si2);
l4=si0;
si0=!(si0);
if(si0){
goto L31;
}
si0=l5;
si0=!(si0);
if(si0){
goto L30;
}
si0=l4;
si1=28U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l15=si0;
si0=!(si0);
if(si0){
goto L31;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0+20U);
l4=si0;
si0=l15;
si1=12U;
si0*=si1;
l15=si0;
L32:;
{
si0=l8;
si1=l4;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
si0=si0 != si1;
if(si0){
goto L33;
}
si0=l5;
si1=l4;
si1=i32_load(&i->m0,(U64)si1);
si2=l8;
si0=f15389(i,si0,si1,si2);
si0=!(si0);
if(si0){
goto L30;
}
L33:;
si0=l4;
si1=12U;
si0+=si1;
l4=si0;
si0=l15;
si1=-12U;
si0+=si1;
l15=si0;
if(si0){
goto L32;
}
}
L31:;
si0=l11;
l4=si0;
si0=l14;
si1=1U;
si0+=si1;
l14=si0;
si1=l16;
si0=si0 >= si1;
if(si0){
goto L26;
}
goto L27;
L30:;
}
si0=l3;
si1=32U;
si0+=si1;
si1=l1;
si2=l13;
si3=l22;
si4=l7;
si5=l2;
f267(i,si0,si1,si2,si3,si4,si5);
si0=l3;
si0=i32_load8_u(&i->m0,(U64)si0+56U);
l4=si0;
si1=20U;
si0=si0 != si1;
if(si0){
goto L34;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+32U);
l15=si0;
if(si0){
goto L37;
}
si0=l13;
si0=i32_load(&i->m0,(U64)si0+156U);
l4=si0;
goto L36;
L37:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+36U);
l8=si0;
si1=l13;
si1=i32_load(&i->m0,(U64)si1+156U);
l4=si1;
si0=si0 != si1;
if(si0){
goto L36;
}
si0=l8;
l4=si0;
si0=l15;
si1=l13;
si1=i32_load(&i->m0,(U64)si1+152U);
si2=l8;
si0=f15389(i,si0,si1,si2);
si0=!(si0);
if(si0){
goto L35;
}
L36:;
si0=l13;
si0=i32_load(&i->m0,(U64)si0+152U);
l13=si0;
si0=l1;
si1=l4;
i32_store(&i->m0,(U64)si0+36U,si1);
si0=l1;
si1=l13;
i32_store(&i->m0,(U64)si0+32U,si1);
L35:;
si0=l17;
si1=l6;
si0=si0 < si1;
if(si0){
goto L23;
}
goto L22;
L34:;
si0=l0;
si1=l21;
si1=i32_load16_u(&i->m0,(U64)si1);
i32_store16(&i->m0,(U64)si0+25U,si1);
si0=l3;
si1=8U;
si0+=si1;
si1=16U;
si0+=si1;
si1=l3;
si2=32U;
si1+=si2;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
l18=sj1;
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=8U;
si0+=si1;
si1=8U;
si0+=si1;
si1=l3;
si2=32U;
si1+=si2;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
l19=sj1;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=27U;
si0+=si1;
si1=l21;
si2=2U;
si1+=si2;
si1=i32_load8_u(&i->m0,(U64)si1);
i32_store8(&i->m0,(U64)si0,si1);
si0=l3;
si1=l3;
sj1=i64_load(&i->m0,(U64)si1+32U);
l20=sj1;
i64_store(&i->m0,(U64)si0+8U,sj1);
si0=l0;
si1=16U;
si0+=si1;
sj1=l18;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=8U;
si0+=si1;
sj1=l19;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
sj1=l20;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=l4;
i32_store8(&i->m0,(U64)si0+24U,si1);
goto L1;
L26:;
si0=l13;
si0=i32_load(&i->m0,(U64)si0+80U);
si0=!(si0);
if(si0){
goto L38;
}
si0=l2;
si1=l13;
si1=i32_load(&i->m0,(U64)si1+152U);
si2=l13;
si3=156U;
si2+=si3;
si2=i32_load(&i->m0,(U64)si2);
si0=f640(i,si0,si1,si2);
l4=si0;
si0=!(si0);
if(si0){
goto L41;
}
si0=l4;
si1=28U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L40;
}
L41:;
si0=l2;
si1=l13;
si1=i32_load(&i->m0,(U64)si1+152U);
si2=l13;
si2=i32_load(&i->m0,(U64)si2+156U);
si0=f640(i,si0,si1,si2);
if(si0){
goto L38;
}
si0=l3;
si1=32U;
si0+=si1;
si1=l1;
si2=l13;
si3=l13;
si3=i32_load(&i->m0,(U64)si3+80U);
si4=l13;
si5=84U;
si4+=si5;
si4=i32_load(&i->m0,(U64)si4);
si5=l2;
f267(i,si0,si1,si2,si3,si4,si5);
si0=l3;
si0=i32_load8_u(&i->m0,(U64)si0+56U);
l4=si0;
si1=20U;
si0=si0 != si1;
if(si0){
goto L42;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+32U);
l4=si0;
si0=!(si0);
if(si0){
goto L39;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+36U);
l15=si0;
si1=l13;
si1=i32_load(&i->m0,(U64)si1+156U);
si0=si0 != si1;
if(si0){
goto L39;
}
si0=l4;
si1=l13;
si1=i32_load(&i->m0,(U64)si1+152U);
si2=l15;
si0=f15389(i,si0,si1,si2);
si0=!(si0);
if(si0){
goto L38;
}
goto L39;
L42:;
si0=l0;
si1=l21;
si1=i32_load16_u(&i->m0,(U64)si1);
i32_store16(&i->m0,(U64)si0+25U,si1);
si0=l3;
si1=8U;
si0+=si1;
si1=16U;
si0+=si1;
si1=l3;
si2=32U;
si1+=si2;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
l18=sj1;
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=8U;
si0+=si1;
si1=8U;
si0+=si1;
si1=l3;
si2=32U;
si1+=si2;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
l19=sj1;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=27U;
si0+=si1;
si1=l21;
si2=2U;
si1+=si2;
si1=i32_load8_u(&i->m0,(U64)si1);
i32_store8(&i->m0,(U64)si0,si1);
si0=l3;
si1=l3;
sj1=i64_load(&i->m0,(U64)si1+32U);
l20=sj1;
i64_store(&i->m0,(U64)si0+8U,sj1);
si0=l0;
si1=16U;
si0+=si1;
sj1=l18;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=8U;
si0+=si1;
sj1=l19;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
sj1=l20;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=l4;
i32_store8(&i->m0,(U64)si0+24U,si1);
goto L1;
L40:;
si0=l3;
si1=32U;
si0+=si1;
si1=l1;
si2=l13;
si3=l13;
si3=i32_load(&i->m0,(U64)si3+80U);
si4=l13;
si5=84U;
si4+=si5;
si4=i32_load(&i->m0,(U64)si4);
si5=l2;
f267(i,si0,si1,si2,si3,si4,si5);
si0=l3;
si0=i32_load8_u(&i->m0,(U64)si0+56U);
l4=si0;
si1=20U;
si0=si0 == si1;
if(si0){
goto L43;
}
si0=l0;
si1=l21;
si1=i32_load16_u(&i->m0,(U64)si1);
i32_store16(&i->m0,(U64)si0+25U,si1);
si0=l3;
si1=8U;
si0+=si1;
si1=16U;
si0+=si1;
si1=l3;
si2=32U;
si1+=si2;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
l18=sj1;
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=8U;
si0+=si1;
si1=8U;
si0+=si1;
si1=l3;
si2=32U;
si1+=si2;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
l19=sj1;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=27U;
si0+=si1;
si1=l21;
si2=2U;
si1+=si2;
si1=i32_load8_u(&i->m0,(U64)si1);
i32_store8(&i->m0,(U64)si0,si1);
si0=l3;
si1=l3;
sj1=i64_load(&i->m0,(U64)si1+32U);
l20=sj1;
i64_store(&i->m0,(U64)si0+8U,sj1);
si0=l0;
si1=16U;
si0+=si1;
sj1=l18;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=8U;
si0+=si1;
sj1=l19;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
sj1=l20;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=l4;
i32_store8(&i->m0,(U64)si0+24U,si1);
goto L1;
L43:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+32U);
l4=si0;
si0=!(si0);
if(si0){
goto L39;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+36U);
l15=si0;
si1=l13;
si1=i32_load(&i->m0,(U64)si1+156U);
si0=si0 != si1;
if(si0){
goto L39;
}
si0=l4;
si1=l13;
si1=i32_load(&i->m0,(U64)si1+152U);
si2=l15;
si0=f15389(i,si0,si1,si2);
si0=!(si0);
if(si0){
goto L38;
}
L39:;
si0=l1;
si1=l13;
sj1=i64_load(&i->m0,(U64)si1+152U);
i64_store(&i->m0,(U64)si0+32U,sj1);
L38:;
si0=l17;
si1=l6;
si0=si0 < si1;
if(si0){
goto L23;
}
}
L22:;
si0=l0;
si1=20U;
i32_store8(&i->m0,(U64)si0+24U,si1);
L1:;
si0=l3;
si1=64U;
si0+=si1;
i->g0=si0;
L0:;
}

void f275(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
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
U32 si0,si1,si2,si3,si4,si5;
U64 sj0,sj1;
si0=i->g0;
si1=64U;
si0-=si1;
l3=si0;
i->g0=si0;
si0=l1;
si1=232U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
si0=!(si0);
if(si0){
goto L2;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+224U);
l5=si0;
si0=l4;
si1=272U;
si0*=si1;
l6=si0;
si0=l3;
si1=57U;
si0+=si1;
l7=si0;
si0=0U;
l8=si0;
L3:;
{
si0=l5;
si1=l8;
si0+=si1;
l4=si0;
si1=128U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L4;
}
si0=l2;
si1=l4;
si2=184U;
si1+=si2;
l9=si1;
si1=i32_load(&i->m0,(U64)si1);
si2=l4;
si3=188U;
si2+=si3;
l10=si2;
si2=i32_load(&i->m0,(U64)si2);
si0=f640(i,si0,si1,si2);
l11=si0;
si0=!(si0);
if(si0){
goto L7;
}
si0=l11;
si1=28U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L6;
}
L7:;
si0=l4;
si1=136U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l11=si0;
si0=!(si0);
if(si0){
goto L4;
}
si0=l3;
si1=32U;
si0+=si1;
si1=l1;
si2=l4;
si3=l11;
si4=l4;
si5=144U;
si4+=si5;
si4=i32_load(&i->m0,(U64)si4);
si5=l2;
f266(i,si0,si1,si2,si3,si4,si5);
si0=l3;
si0=i32_load8_u(&i->m0,(U64)si0+56U);
l4=si0;
si1=20U;
si0=si0 != si1;
if(si0){
goto L8;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+32U);
l4=si0;
si0=!(si0);
if(si0){
goto L5;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+36U);
l11=si0;
si1=l10;
si1=i32_load(&i->m0,(U64)si1);
si0=si0 != si1;
if(si0){
goto L5;
}
si0=l4;
si1=l9;
si1=i32_load(&i->m0,(U64)si1);
si2=l11;
si0=f15389(i,si0,si1,si2);
si0=!(si0);
if(si0){
goto L4;
}
goto L5;
L8:;
si0=l0;
si1=l7;
si1=i32_load16_u(&i->m0,(U64)si1);
i32_store16(&i->m0,(U64)si0+25U,si1);
si0=l3;
si1=8U;
si0+=si1;
si1=16U;
si0+=si1;
si1=l3;
si2=32U;
si1+=si2;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
l12=sj1;
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=8U;
si0+=si1;
si1=8U;
si0+=si1;
si1=l3;
si2=32U;
si1+=si2;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
l13=sj1;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=27U;
si0+=si1;
si1=l7;
si2=2U;
si1+=si2;
si1=i32_load8_u(&i->m0,(U64)si1);
i32_store8(&i->m0,(U64)si0,si1);
si0=l3;
si1=l3;
sj1=i64_load(&i->m0,(U64)si1+32U);
l14=sj1;
i64_store(&i->m0,(U64)si0+8U,sj1);
si0=l0;
si1=16U;
si0+=si1;
sj1=l12;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=8U;
si0+=si1;
sj1=l13;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
sj1=l14;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=l4;
i32_store8(&i->m0,(U64)si0+24U,si1);
goto L1;
L6:;
si0=l4;
si1=136U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l11=si0;
si0=!(si0);
if(si0){
goto L4;
}
si0=l3;
si1=32U;
si0+=si1;
si1=l1;
si2=l4;
si3=l11;
si4=l4;
si5=144U;
si4+=si5;
si4=i32_load(&i->m0,(U64)si4);
si5=l2;
f266(i,si0,si1,si2,si3,si4,si5);
si0=l3;
si0=i32_load8_u(&i->m0,(U64)si0+56U);
l4=si0;
si1=20U;
si0=si0 != si1;
if(si0){
goto L9;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+32U);
l4=si0;
si0=!(si0);
if(si0){
goto L5;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+36U);
l11=si0;
si1=l10;
si1=i32_load(&i->m0,(U64)si1);
si0=si0 != si1;
if(si0){
goto L5;
}
si0=l4;
si1=l9;
si1=i32_load(&i->m0,(U64)si1);
si2=l11;
si0=f15389(i,si0,si1,si2);
if(si0){
goto L5;
}
goto L4;
L9:;
si0=l0;
si1=l7;
si1=i32_load16_u(&i->m0,(U64)si1);
i32_store16(&i->m0,(U64)si0+25U,si1);
si0=l3;
si1=8U;
si0+=si1;
si1=16U;
si0+=si1;
si1=l3;
si2=32U;
si1+=si2;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
l12=sj1;
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=8U;
si0+=si1;
si1=8U;
si0+=si1;
si1=l3;
si2=32U;
si1+=si2;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
l13=sj1;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=27U;
si0+=si1;
si1=l7;
si2=2U;
si1+=si2;
si1=i32_load8_u(&i->m0,(U64)si1);
i32_store8(&i->m0,(U64)si0,si1);
si0=l3;
si1=l3;
sj1=i64_load(&i->m0,(U64)si1+32U);
l14=sj1;
i64_store(&i->m0,(U64)si0+8U,sj1);
si0=l0;
si1=16U;
si0+=si1;
sj1=l12;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=8U;
si0+=si1;
sj1=l13;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
sj1=l14;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=l4;
i32_store8(&i->m0,(U64)si0+24U,si1);
goto L1;
L5:;
si0=l1;
si1=l10;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0+36U,si1);
si0=l1;
si1=l9;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0+32U,si1);
L4:;
si0=l6;
si1=l8;
si2=272U;
si1+=si2;
l8=si1;
si0=si0 != si1;
if(si0){
goto L3;
}
}
L2:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+8U);
l5=si0;
si0=!(si0);
if(si0){
goto L10;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l8=si0;
si1=l5;
si2=248U;
si1*=si2;
si0+=si1;
l10=si0;
si0=l3;
si1=57U;
si0+=si1;
l7=si0;
si0=0U;
l9=si0;
L11:;
{
si0=l8;
l4=si0;
si0=l10;
l8=si0;
si0=l4;
si1=l10;
si0=si0 == si1;
if(si0){
goto L13;
}
si0=l4;
si1=248U;
si0+=si1;
l8=si0;
si0=l4;
sj0=i64_load(&i->m0,(U64)si0);
sj1=2ULL;
si0=sj0 != sj1;
if(si0){
goto L12;
}
L13:;
si0=l9;
si1=1U;
si0+=si1;
l9=si0;
si1=l5;
si0=si0 != si1;
if(si0){
goto L11;
}
goto L10;
L12:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+128U);
si0=!(si0);
if(si0){
goto L14;
}
si0=l2;
si1=l4;
si1=i32_load(&i->m0,(U64)si1+152U);
si2=l4;
si3=156U;
si2+=si3;
si2=i32_load(&i->m0,(U64)si2);
si0=f640(i,si0,si1,si2);
l6=si0;
si0=!(si0);
if(si0){
goto L17;
}
si0=l6;
si1=28U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L16;
}
L17:;
si0=l4;
si1=136U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si0=!(si0);
if(si0){
goto L14;
}
si0=l3;
si1=32U;
si0+=si1;
si1=l1;
si2=l4;
si3=l6;
si4=l4;
si5=144U;
si4+=si5;
si4=i32_load(&i->m0,(U64)si4);
si5=l2;
f267(i,si0,si1,si2,si3,si4,si5);
si0=l3;
si0=i32_load8_u(&i->m0,(U64)si0+56U);
l6=si0;
si1=20U;
si0=si0 != si1;
if(si0){
goto L18;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+32U);
l6=si0;
si0=!(si0);
if(si0){
goto L15;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+36U);
l11=si0;
si1=l4;
si1=i32_load(&i->m0,(U64)si1+156U);
si0=si0 != si1;
if(si0){
goto L15;
}
si0=l6;
si1=l4;
si1=i32_load(&i->m0,(U64)si1+152U);
si2=l11;
si0=f15389(i,si0,si1,si2);
if(si0){
goto L15;
}
goto L14;
L18:;
si0=l0;
si1=l7;
si1=i32_load16_u(&i->m0,(U64)si1);
i32_store16(&i->m0,(U64)si0+25U,si1);
si0=l3;
si1=8U;
si0+=si1;
si1=16U;
si0+=si1;
si1=l3;
si2=32U;
si1+=si2;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
l12=sj1;
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=8U;
si0+=si1;
si1=8U;
si0+=si1;
si1=l3;
si2=32U;
si1+=si2;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
l13=sj1;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=27U;
si0+=si1;
si1=l7;
si2=2U;
si1+=si2;
si1=i32_load8_u(&i->m0,(U64)si1);
i32_store8(&i->m0,(U64)si0,si1);
si0=l3;
si1=l3;
sj1=i64_load(&i->m0,(U64)si1+32U);
l14=sj1;
i64_store(&i->m0,(U64)si0+8U,sj1);
si0=l0;
si1=16U;
si0+=si1;
sj1=l12;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=8U;
si0+=si1;
sj1=l13;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
sj1=l14;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=l6;
i32_store8(&i->m0,(U64)si0+24U,si1);
goto L1;
L16:;
si0=l4;
si1=136U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si0=!(si0);
if(si0){
goto L14;
}
si0=l3;
si1=32U;
si0+=si1;
si1=l1;
si2=l4;
si3=l6;
si4=l4;
si5=144U;
si4+=si5;
si4=i32_load(&i->m0,(U64)si4);
si5=l2;
f267(i,si0,si1,si2,si3,si4,si5);
si0=l3;
si0=i32_load8_u(&i->m0,(U64)si0+56U);
l6=si0;
si1=20U;
si0=si0 != si1;
if(si0){
goto L19;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+32U);
l6=si0;
si0=!(si0);
if(si0){
goto L15;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+36U);
l11=si0;
si1=l4;
si1=i32_load(&i->m0,(U64)si1+156U);
si0=si0 != si1;
if(si0){
goto L15;
}
si0=l6;
si1=l4;
si1=i32_load(&i->m0,(U64)si1+152U);
si2=l11;
si0=f15389(i,si0,si1,si2);
if(si0){
goto L15;
}
goto L14;
L19:;
si0=l0;
si1=l7;
si1=i32_load16_u(&i->m0,(U64)si1);
i32_store16(&i->m0,(U64)si0+25U,si1);
si0=l3;
si1=8U;
si0+=si1;
si1=16U;
si0+=si1;
si1=l3;
si2=32U;
si1+=si2;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
l12=sj1;
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=8U;
si0+=si1;
si1=8U;
si0+=si1;
si1=l3;
si2=32U;
si1+=si2;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
l13=sj1;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=27U;
si0+=si1;
si1=l7;
si2=2U;
si1+=si2;
si1=i32_load8_u(&i->m0,(U64)si1);
i32_store8(&i->m0,(U64)si0,si1);
si0=l3;
si1=l3;
sj1=i64_load(&i->m0,(U64)si1+32U);
l14=sj1;
i64_store(&i->m0,(U64)si0+8U,sj1);
si0=l0;
si1=16U;
si0+=si1;
sj1=l12;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=8U;
si0+=si1;
sj1=l13;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
sj1=l14;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=l6;
i32_store8(&i->m0,(U64)si0+24U,si1);
goto L1;
L15:;
si0=l1;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1+152U);
i64_store(&i->m0,(U64)si0+32U,sj1);
L14:;
si0=l9;
si1=1U;
si0+=si1;
l9=si0;
si1=l5;
si0=si0 < si1;
if(si0){
goto L11;
}
}
L10:;
si0=l0;
si1=20U;
i32_store8(&i->m0,(U64)si0+24U,si1);
L1:;
si0=l3;
si1=64U;
si0+=si1;
i->g0=si0;
L0:;
}

void f276(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 si0,si1,si2;
U64 sj0,sj1;
si0=l1;
si1=220U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
si0=!(si0);
if(si0){
goto L2;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+212U);
l5=si0;
si0=l4;
si1=120U;
si0*=si1;
l4=si0;
L3:;
{
si0=l5;
si1=36U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=l3;
si0=si0 != si1;
if(si0){
goto L4;
}
si0=l5;
si1=32U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=l2;
si2=l3;
si0=f15389(i,si0,si1,si2);
if(si0){
goto L4;
}
si0=1085684U;
l3=si0;
goto L1;
L4:;
si0=l5;
si1=120U;
si0+=si1;
l5=si0;
si0=l4;
si1=-120U;
si0+=si1;
l4=si0;
if(si0){
goto L3;
}
}
L2:;
si0=l1;
si1=232U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
si0=!(si0);
if(si0){
goto L5;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+224U);
l5=si0;
si0=l4;
si1=272U;
si0*=si1;
l4=si0;
L6:;
{
si0=l5;
si1=188U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=l3;
si0=si0 != si1;
if(si0){
goto L7;
}
si0=l5;
si1=184U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=l2;
si2=l3;
si0=f15389(i,si0,si1,si2);
if(si0){
goto L7;
}
si0=1085552U;
l3=si0;
goto L1;
L7:;
si0=l5;
si1=272U;
si0+=si1;
l5=si0;
si0=l4;
si1=-272U;
si0+=si1;
l4=si0;
if(si0){
goto L6;
}
}
L5:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+8U);
l6=si0;
if(si0){
goto L8;
}
si0=0U;
l5=si0;
goto L1;
L8:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si1=l6;
si2=248U;
si1*=si2;
si0+=si1;
l1=si0;
si0=0U;
l7=si0;
L10:;
{
si0=l1;
l4=si0;
si0=l5;
si1=l1;
si0=si0 == si1;
if(si0){
goto L12;
}
si0=l5;
si1=248U;
si0+=si1;
l4=si0;
si0=l5;
sj0=i64_load(&i->m0,(U64)si0);
sj1=2ULL;
si0=sj0 != sj1;
if(si0){
goto L11;
}
L12:;
si0=l4;
l5=si0;
si0=l7;
si1=1U;
si0+=si1;
l7=si0;
si1=l6;
si0=si0 != si1;
if(si0){
goto L10;
}
goto L9;
L11:;
si0=l5;
si1=156U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=l3;
si0=si0 != si1;
if(si0){
goto L13;
}
si0=l5;
si0=i32_load(&i->m0,(U64)si0+152U);
si1=l2;
si2=l3;
si0=f15389(i,si0,si1,si2);
if(si0){
goto L13;
}
si0=1085808U;
l3=si0;
goto L1;
L13:;
si0=l4;
l5=si0;
si0=l7;
si1=1U;
si0+=si1;
l7=si0;
si1=l6;
si0=si0 < si1;
if(si0){
goto L10;
}
}
L9:;
si0=0U;
l5=si0;
si0=1085808U;
l3=si0;
L1:;
si0=l0;
si1=l3;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l5;
i32_store(&i->m0,(U64)si0,si1);
L0:;
}

void f277(rustpythonInstance*i,U32 l0,U32 l1) {
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
U64 l17=0;
U32 si0,si1,si2;
U64 sj0,sj1;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+4U);
l3=si1;
si0=si0 == si1;
if(si0){
goto L2;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+8U);
l4=si0;
si0=i32_load(&i->m0,(U64)si0);
si0=i32_load(&i->m0,(U64)si0+8U);
si0=!(si0);
if(si0){
goto L3;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+24U);
l5=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+20U);
l6=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+16U);
l7=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+12U);
l8=si0;
L4:;
{
si0=l1;
si1=l2;
l9=si1;
si2=8U;
si1+=si2;
l2=si1;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
l10=si0;
si0=i32_load(&i->m0,(U64)si0+8U);
l11=si0;
si0=!(si0);
if(si0){
goto L5;
}
si0=l10;
si0=i32_load(&i->m0,(U64)si0);
l10=si0;
si1=l11;
si2=248U;
si1*=si2;
si0+=si1;
l12=si0;
si0=l9;
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l13=si0;
si0=l9;
si0=i32_load(&i->m0,(U64)si0);
l14=si0;
si0=0U;
l15=si0;
L6:;
{
si0=l12;
l9=si0;
si0=l10;
si1=l12;
si0=si0 == si1;
if(si0){
goto L8;
}
si0=l10;
si1=248U;
si0+=si1;
l9=si0;
si0=l10;
sj0=i64_load(&i->m0,(U64)si0);
sj1=2ULL;
si0=sj0 != sj1;
if(si0){
goto L7;
}
L8:;
si0=l9;
l10=si0;
si0=l15;
si1=1U;
si0+=si1;
l15=si0;
si1=l11;
si0=si0 != si1;
if(si0){
goto L6;
}
goto L5;
L7:;
si0=l10;
si1=156U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=l13;
si0=si0 != si1;
if(si0){
goto L10;
}
si0=l10;
si1=152U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=l14;
si2=l13;
si0=f15389(i,si0,si1,si2);
si0=!(si0);
if(si0){
goto L9;
}
L10:;
si0=l9;
l10=si0;
si0=l15;
si1=1U;
si0+=si1;
l15=si0;
si1=l11;
si0=si0 < si1;
if(si0){
goto L6;
}
goto L5;
L9:;
}
si0=l8;
si0=i32_load(&i->m0,(U64)si0);
si1=l14;
si2=l13;
si0=f643(i,si0,si1,si2);
if(si0){
goto L5;
}
si0=l7;
si0=i32_load(&i->m0,(U64)si0);
l10=si0;
si0=i32_load(&i->m0,(U64)si0+8U);
l11=si0;
si0=!(si0);
if(si0){
goto L5;
}
si0=l10;
si0=i32_load(&i->m0,(U64)si0);
l10=si0;
si1=l11;
si2=248U;
si1*=si2;
si0+=si1;
l12=si0;
si0=0U;
l15=si0;
L11:;
{
si0=l12;
l9=si0;
si0=l10;
si1=l12;
si0=si0 == si1;
if(si0){
goto L13;
}
si0=l10;
si1=248U;
si0+=si1;
l9=si0;
si0=l10;
sj0=i64_load(&i->m0,(U64)si0);
sj1=2ULL;
si0=sj0 != sj1;
if(si0){
goto L12;
}
L13:;
si0=l9;
l10=si0;
si0=l15;
si1=1U;
si0+=si1;
l15=si0;
si1=l11;
si0=si0 == si1;
if(si0){
goto L5;
}
goto L11;
L12:;
si0=l10;
si1=156U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=l13;
si0=si0 != si1;
if(si0){
goto L15;
}
si0=l10;
si0=i32_load(&i->m0,(U64)si0+152U);
l16=si0;
si1=l14;
si2=l13;
si0=f15389(i,si0,si1,si2);
si0=!(si0);
if(si0){
goto L14;
}
L15:;
si0=l9;
l10=si0;
si0=l15;
si1=1U;
si0+=si1;
l15=si0;
si1=l11;
si0=si0 >= si1;
if(si0){
goto L5;
}
goto L11;
L14:;
}
si0=l6;
si0=i32_load8_u(&i->m0,(U64)si0);
if(si0){
goto L16;
}
si0=l10;
si1=189U;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=64U;
si0&=si1;
if(si0){
goto L5;
}
L16:;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+8U);
l12=si0;
si0=!(si0);
if(si0){
goto L17;
}
si0=l5;
si0=i32_load(&i->m0,(U64)si0);
l9=si0;
si0=l12;
si1=3U;
si0<<=(si1&31);
l12=si0;
L18:;
{
si0=l13;
si1=l9;
si2=4U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
si0=si0 != si1;
if(si0){
goto L19;
}
si0=l9;
si0=i32_load(&i->m0,(U64)si0);
si1=l16;
si2=l13;
si0=f15389(i,si0,si1,si2);
si0=!(si0);
if(si0){
goto L5;
}
L19:;
si0=l9;
si1=8U;
si0+=si1;
l9=si0;
si0=l12;
si1=-8U;
si0+=si1;
l12=si0;
if(si0){
goto L18;
}
}
L17:;
si0=l10;
sj0=i64_load(&i->m0,(U64)si0+240U);
l17=sj0;
goto L1;
L5:;
si0=l2;
si1=l3;
si0=si0 == si1;
if(si0){
goto L2;
}
goto L4;
}
L3:;
L20:;
{
si0=l2;
si1=8U;
si0+=si1;
l2=si0;
si1=l3;
si0=si0 != si1;
if(si0){
goto L20;
}
}
si0=l1;
si1=l3;
i32_store(&i->m0,(U64)si0,si1);
si0=0U;
l10=si0;
goto L1;
L2:;
si0=0U;
l10=si0;
L1:;
si0=l0;
si1=l10;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l0;
sj1=l17;
i64_store(&i->m0,(U64)si0,sj1);
L0:;
}

void f278(rustpythonInstance*i,U32 l0,U32 l1) {
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
U64 l18=0;
U32 si0,si1,si2;
U64 sj0,sj1;
si0=0U;
l2=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+4U);
l4=si1;
si0=si0 == si1;
if(si0){
goto L2;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+8U);
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si0=i32_load(&i->m0,(U64)si0+8U);
l5=si0;
if(si0){
goto L4;
}
L5:;
{
si0=l3;
si1=8U;
si0+=si1;
l3=si0;
si1=l4;
si0=si0 != si1;
if(si0){
goto L5;
}
goto L3;
}
L4:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si1=l5;
si2=248U;
si1*=si2;
si0+=si1;
l7=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+20U);
l8=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+16U);
l9=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+12U);
l10=si0;
L6:;
{
si0=l3;
l2=si0;
si1=8U;
si0+=si1;
l3=si0;
si0=l2;
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l11=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0);
l12=si0;
si0=0U;
l13=si0;
si0=l6;
l2=si0;
L8:;
{
si0=l7;
l14=si0;
si0=l2;
si1=l7;
si0=si0 == si1;
if(si0){
goto L9;
}
si0=l2;
si1=248U;
si0+=si1;
l14=si0;
si0=l2;
sj0=i64_load(&i->m0,(U64)si0);
sj1=2ULL;
si0=sj0 == sj1;
if(si0){
goto L9;
}
si0=l2;
si1=156U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=l11;
si0=si0 != si1;
if(si0){
goto L10;
}
si0=l2;
si1=152U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=l12;
si2=l11;
si0=f15389(i,si0,si1,si2);
if(si0){
goto L10;
}
si0=l10;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si0=i32_load(&i->m0,(U64)si0+8U);
l15=si0;
si0=!(si0);
if(si0){
goto L7;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si1=l15;
si2=248U;
si1*=si2;
si0+=si1;
l13=si0;
si0=0U;
l16=si0;
L11:;
{
si0=l13;
l14=si0;
si0=l2;
si1=l13;
si0=si0 == si1;
if(si0){
goto L13;
}
si0=l2;
si1=248U;
si0+=si1;
l14=si0;
si0=l2;
sj0=i64_load(&i->m0,(U64)si0);
sj1=2ULL;
si0=sj0 == sj1;
if(si0){
goto L13;
}
si0=l2;
si1=156U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=l11;
si0=si0 != si1;
if(si0){
goto L12;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0+152U);
l17=si0;
si1=l12;
si2=l11;
si0=f15389(i,si0,si1,si2);
if(si0){
goto L12;
}
si0=l9;
si0=i32_load8_u(&i->m0,(U64)si0);
if(si0){
goto L14;
}
si0=l2;
si1=189U;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=64U;
si0&=si1;
if(si0){
goto L7;
}
L14:;
si0=l8;
si0=i32_load(&i->m0,(U64)si0+8U);
l13=si0;
si0=!(si0);
if(si0){
goto L15;
}
si0=l8;
si0=i32_load(&i->m0,(U64)si0);
l14=si0;
si0=l13;
si1=3U;
si0<<=(si1&31);
l13=si0;
L16:;
{
si0=l11;
si1=l14;
si2=4U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
si0=si0 != si1;
if(si0){
goto L17;
}
si0=l14;
si0=i32_load(&i->m0,(U64)si0);
si1=l17;
si2=l11;
si0=f15389(i,si0,si1,si2);
si0=!(si0);
if(si0){
goto L7;
}
L17:;
si0=l14;
si1=8U;
si0+=si1;
l14=si0;
si0=l13;
si1=-8U;
si0+=si1;
l13=si0;
if(si0){
goto L16;
}
}
L15:;
si0=l1;
si1=l3;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
sj0=i64_load(&i->m0,(U64)si0+240U);
l18=sj0;
goto L1;
L13:;
si0=l14;
l2=si0;
si0=l16;
si1=1U;
si0+=si1;
l16=si0;
si1=l15;
si0=si0 != si1;
if(si0){
goto L11;
}
goto L7;
L12:;
si0=l14;
l2=si0;
si0=l16;
si1=1U;
si0+=si1;
l16=si0;
si1=l15;
si0=si0 < si1;
if(si0){
goto L11;
}
goto L7;
}
L10:;
si0=l14;
l2=si0;
si0=l13;
si1=1U;
si0+=si1;
l13=si0;
si1=l5;
si0=si0 < si1;
if(si0){
goto L8;
}
goto L7;
L9:;
si0=l14;
l2=si0;
si0=l13;
si1=1U;
si0+=si1;
l13=si0;
si1=l5;
si0=si0 != si1;
if(si0){
goto L8;
}
}
L7:;
si0=l3;
si1=l4;
si0=si0 != si1;
if(si0){
goto L6;
}
}
L3:;
si0=l1;
si1=l4;
i32_store(&i->m0,(U64)si0,si1);
si0=0U;
l2=si0;
L2:;
L1:;
si0=l0;
si1=l2;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l0;
sj1=l18;
i64_store(&i->m0,(U64)si0,sj1);
L0:;
}

void f279(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 l8=0;
U32 l9=0;
U32 l10=0;
U32 si0,si1,si2,si3,si4,si5;
U64 sj0,sj1;
si0=i->g0;
si1=80U;
si0-=si1;
l2=si0;
i->g0=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+8U);
l3=si0;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+12U);
l4=si1;
si0=si0 >= si1;
if(si0){
goto L3;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
l5=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+24U);
l6=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+20U);
l8=si0;
L4:;
{
si0=l3;
l9=si0;
si0=l7;
l10=si0;
L6:;
{
si0=l5;
l7=si0;
si0=l10;
si1=l5;
si0=si0 == si1;
if(si0){
goto L7;
}
si0=l1;
si1=l10;
si2=248U;
si1+=si2;
l7=si1;
i32_store(&i->m0,(U64)si0,si1);
si0=l10;
sj0=i64_load(&i->m0,(U64)si0);
sj1=2ULL;
si0=sj0 != sj1;
if(si0){
goto L5;
}
L7:;
si0=l1;
si1=l9;
si2=1U;
si1+=si2;
l9=si1;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l7;
l10=si0;
si0=l4;
si1=l9;
si0=si0 != si1;
if(si0){
goto L6;
}
goto L3;
}
L5:;
si0=l1;
si1=l8;
si2=1U;
si1+=si2;
l8=si1;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l1;
si1=l9;
si2=1U;
si1+=si2;
l3=si1;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l6;
si0=i32_load(&i->m0,(U64)si0);
si1=l9;
si0=si0 < si1;
if(si0){
goto L8;
}
si0=l10;
si1=188U;
si0+=si1;
si0=i32_load16_u(&i->m0,(U64)si0);
si1=16401U;
si0&=si1;
si0=!(si0);
if(si0){
goto L2;
}
L8:;
si0=l3;
si1=l4;
si0=si0 < si1;
if(si0){
goto L4;
}
}
L3:;
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
goto L1;
L2:;
si0=l2;
si1=56U;
si0+=si1;
si1=l10;
f336(i,si0,si1);
si0=l2;
si1=40U;
si0+=si1;
si1=12U;
si0+=si1;
si1=66U;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=16U;
si0+=si1;
si1=12U;
si0+=si1;
sj1=2ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=164U;
i32_store(&i->m0,(U64)si0+44U,si1);
si0=l2;
si1=1094908U;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l10;
si1=60U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l9=si0;
si0=l2;
si1=2U;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l2;
si1=3U;
si2=0U;
si3=l10;
si4=48U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si3=!(si3);
si4=l9;
si5=2U;
si4=si4 < si5;
si3|=si4;
si4=l10;
si5=188U;
si4+=si5;
si4=i32_load(&i->m0,(U64)si4);
si5=2U;
si4&=si5;
si5=1U;
si4>>=(si5&31);
si3&=si4;
l10=si3;
si1=si3?si1:si2;
i32_store(&i->m0,(U64)si0+76U,si1);
si0=l2;
si1=1086931U;
si2=1086468U;
si3=l10;
si1=si3?si1:si2;
i32_store(&i->m0,(U64)si0+72U,si1);
si0=l2;
si1=l2;
si2=72U;
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
si0=l2;
si1=l2;
si2=16U;
si1+=si2;
f63(i,si0,si1);
si0=l2;
si0=i32_load(&i->m0,(U64)si0+56U);
l10=si0;
si0=!(si0);
if(si0){
goto L9;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0+60U);
si0=!(si0);
if(si0){
goto L9;
}
si0=l10;
f15271(i,si0);
L9:;
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
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
L1:;
si0=l2;
si1=80U;
si0+=si1;
i->g0=si0;
L0:;
}

void f280(rustpythonInstance*i,U32 l0,U32 l1) {
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
si0=i->g0;
si1=16U;
si0-=si1;
l2=si0;
i->g0=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+16U);
l3=si0;
si0=!(si0);
if(si0){
goto L2;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+28U);
l4=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+24U);
l5=si0;
si0=0U;
l6=si0;
goto L1;
L2:;
si0=1U;
l6=si0;
L1:;
L5:;
{
si0=l6;
switch(si0){
case 0:
goto L9;
case 1:
goto L8;
default:
goto L8;
}
L9:;
si0=l5;
si1=l4;
si0=si0 != si1;
if(si0){
goto L7;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+20U);
si0=!(si0);
if(si0){
goto L10;
}
si0=l3;
f15271(i,si0);
L10:;
si0=l1;
si1=0U;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=1U;
l6=si0;
goto L5;
L8:;
si0=0U;
l7=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=!(si0);
if(si0){
goto L4;
}
si0=l1;
si1=0U;
si2=l3;
si0=si2?si0:si1;
l8=si0;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si1=l8;
si1=i32_load(&i->m0,(U64)si1+4U);
l9=si1;
si0=si0 == si1;
if(si0){
goto L4;
}
si0=l8;
si0=i32_load(&i->m0,(U64)si0+8U);
l6=si0;
si0=i32_load(&i->m0,(U64)si0+8U);
l5=si0;
si0=!(si0);
if(si0){
goto L13;
}
si0=l6;
si0=i32_load(&i->m0,(U64)si0);
l10=si0;
si0=l5;
si1=3U;
si0<<=(si1&31);
l11=si0;
L14:;
{
si0=l3;
si1=48U;
si0+=si1;
l12=si0;
si0=l3;
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
si0=l11;
l6=si0;
si0=l10;
l3=si0;
L15:;
{
si0=l5;
si1=l3;
si2=4U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
si0=si0 != si1;
if(si0){
goto L16;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
si1=l4;
si2=l5;
si0=f15389(i,si0,si1,si2);
si0=!(si0);
if(si0){
goto L11;
}
L16:;
si0=l3;
si1=8U;
si0+=si1;
l3=si0;
si0=l6;
si1=-8U;
si0+=si1;
l6=si0;
if(si0){
goto L15;
}
}
si0=l12;
l3=si0;
si0=l12;
si1=l9;
si0=si0 != si1;
if(si0){
goto L14;
}
goto L12;
}
L13:;
L17:;
{
si0=l3;
si1=48U;
si0+=si1;
l3=si0;
si1=l9;
si0=si0 != si1;
if(si0){
goto L17;
}
}
L12:;
si0=l8;
si1=l9;
i32_store(&i->m0,(U64)si0,si1);
goto L4;
L11:;
si0=l8;
si1=l12;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=l8;
si1=i32_load(&i->m0,(U64)si1+12U);
si1=i32_load(&i->m0,(U64)si1);
si2=l4;
si3=l5;
f271(i,si0,si1,si2,si3);
si0=l2;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=!(si0);
if(si0){
goto L4;
}
si0=l1;
si1=l3;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l1;
si1=l2;
si1=i32_load(&i->m0,(U64)si1+4U);
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l1;
si1=l3;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l1;
si1=l3;
si2=l2;
si2=i32_load(&i->m0,(U64)si2+8U);
si3=3U;
si2<<=(si3&31);
si1+=si2;
l4=si1;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l3;
l5=si0;
goto L6;
L7:;
si0=l1;
si1=l5;
si2=8U;
si1+=si2;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l5;
si0=i32_load(&i->m0,(U64)si0+4U);
l3=si0;
si0=l5;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
goto L3;
L6:;
si0=0U;
l6=si0;
goto L5;
}
L4:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+32U);
l3=si0;
si0=!(si0);
if(si0){
goto L18;
}
si0=l1;
si1=40U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si1=l1;
si2=44U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
si0=si0 == si1;
if(si0){
goto L19;
}
si0=l1;
si1=l6;
si2=8U;
si1+=si2;
i32_store(&i->m0,(U64)si0+40U,si1);
si0=l6;
si0=i32_load(&i->m0,(U64)si0+4U);
l3=si0;
si0=l6;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
goto L3;
L19:;
si0=l1;
si1=36U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L20;
}
si0=l3;
f15271(i,si0);
L20:;
si0=0U;
l7=si0;
si0=l1;
si1=0U;
i32_store(&i->m0,(U64)si0+32U,si1);
L18:;
L3:;
si0=l0;
si1=l3;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l7;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=16U;
si0+=si1;
i->g0=si0;
L0:;
}

void f281(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
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
U64 sj1;
si0=i->g0;
si1=32U;
si0-=si1;
l4=si0;
i->g0=si0;
si0=l3;
si0=!(si0);
if(si0){
goto L4;
}
si0=l2;
si1=4U;
si0+=si1;
l5=si0;
si0=l3;
si1=3U;
si0<<=(si1&31);
l6=si0;
si0=l3;
si1=-1U;
si0+=si1;
si1=536870911U;
si0&=si1;
si1=1U;
si0+=si1;
l7=si0;
si0=0U;
l8=si0;
L6:;
{
si0=l5;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L5;
}
si0=l5;
si1=8U;
si0+=si1;
l5=si0;
si0=l8;
si1=1U;
si0+=si1;
l8=si0;
si0=l6;
si1=-8U;
si0+=si1;
l6=si0;
if(si0){
goto L6;
}
}
si0=l7;
l8=si0;
L5:;
si0=l8;
si1=l3;
si0=si0 <= si1;
if(si0){
goto L7;
}
si0=l8;
si1=l3;
si2=1086100U;
f662(i,si0,si1,si2);
UNREACHABLE;
L7:;
si0=l3;
si1=l8;
si0-=si1;
l9=si0;
si0=!(si0);
if(si0){
goto L4;
}
si0=l2;
si1=l8;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l10=si0;
L8:;
{
si0=l9;
si1=3U;
si0&=si1;
l6=si0;
si0=0U;
l8=si0;
si0=0U;
l3=si0;
si0=l9;
si1=-1U;
si0+=si1;
l11=si0;
si1=3U;
si0=si0 < si1;
if(si0){
goto L9;
}
si0=l10;
si1=20U;
si0+=si1;
l5=si0;
si0=l9;
si1=-4U;
si0&=si1;
l2=si0;
si0=0U;
l8=si0;
si0=0U;
l3=si0;
L10:;
{
si0=l5;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=l5;
si1=i32_load(&i->m0,(U64)si1);
si2=l5;
si3=-8U;
si2+=si3;
si2=i32_load(&i->m0,(U64)si2);
si3=l5;
si4=-16U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si4=l8;
si3+=si4;
si2+=si3;
si1+=si2;
si0+=si1;
l8=si0;
si0=l5;
si1=32U;
si0+=si1;
l5=si0;
si0=l2;
si1=l3;
si2=4U;
si1+=si2;
l3=si1;
si0=si0 != si1;
if(si0){
goto L10;
}
}
L9:;
si0=l6;
si0=!(si0);
if(si0){
goto L11;
}
si0=l10;
si1=l3;
si2=3U;
si1<<=(si2&31);
si0+=si1;
si1=4U;
si0+=si1;
l5=si0;
L12:;
{
si0=l5;
si0=i32_load(&i->m0,(U64)si0);
si1=l8;
si0+=si1;
l8=si0;
si0=l5;
si1=8U;
si0+=si1;
l5=si0;
si0=l6;
si1=-1U;
si0+=si1;
l6=si0;
if(si0){
goto L12;
}
}
L11:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
si1=l1;
si1=i32_load(&i->m0,(U64)si1+8U);
l5=si1;
si0-=si1;
si1=l8;
si0=si0 >= si1;
if(si0){
goto L13;
}
si0=l1;
si1=l5;
si2=l8;
f580(i,si0,si1,si2);
L13:;
si0=l9;
si1=3U;
si0<<=(si1&31);
l7=si0;
si0=l9;
si0=!(si0);
if(si0){
goto L14;
}
si0=l10;
si1=l7;
si0+=si1;
l12=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+8U);
l5=si0;
si0=l10;
l6=si0;
L15:;
{
si0=l6;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
si1=l5;
si0-=si1;
si1=l6;
si2=4U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
l3=si1;
si0=si0 >= si1;
if(si0){
goto L16;
}
si0=l1;
si1=l5;
si2=l3;
f580(i,si0,si1,si2);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+8U);
l5=si0;
L16:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
si1=l5;
si0+=si1;
si1=l2;
si2=l3;
si0=f15390(i,si0,si1,si2);
si0=l1;
si1=l5;
si2=l3;
si1+=si2;
l5=si1;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l6;
si1=8U;
si0+=si1;
l6=si0;
si1=l12;
si0=si0 != si1;
if(si0){
goto L15;
}
}
L14:;
si0=l8;
if(si0){
goto L17;
}
si0=l0;
si1=1085960U;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=2U;
i32_store8(&i->m0,(U64)si0,si1);
goto L1;
L17:;
si0=l10;
si1=4U;
si0+=si1;
l5=si0;
si0=l11;
si1=536870911U;
si0&=si1;
si1=1U;
si0+=si1;
l12=si0;
si0=0U;
l6=si0;
si0=0U;
l3=si0;
L19:;
{
si0=l5;
si0=i32_load(&i->m0,(U64)si0);
si1=l3;
si0+=si1;
l2=si0;
si1=l8;
si0=si0 > si1;
if(si0){
goto L18;
}
si0=l5;
si1=8U;
si0+=si1;
l5=si0;
si0=l6;
si1=1U;
si0+=si1;
l6=si0;
si0=l2;
l3=si0;
si0=l7;
si1=-8U;
si0+=si1;
l7=si0;
if(si0){
goto L19;
}
}
si0=l2;
l3=si0;
si0=l12;
l6=si0;
L18:;
si0=l9;
si1=l6;
si0=si0 < si1;
if(si0){
goto L3;
}
si0=l10;
si1=l6;
si2=3U;
si1<<=(si2&31);
l2=si1;
si0+=si1;
l5=si0;
si0=l9;
si1=l6;
si0=si0 != si1;
if(si0){
goto L21;
}
si0=l8;
si1=l3;
si0=si0 == si1;
if(si0){
goto L20;
}
si0=l4;
si1=20U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=1U;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l4;
si1=1086156U;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l4;
si1=1085932U;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l4;
si1=8U;
si0+=si1;
si1=1086164U;
f683(i,si0,si1);
UNREACHABLE;
L21:;
si0=l10;
si1=l2;
si0+=si1;
l2=si0;
si0=i32_load(&i->m0,(U64)si0+4U);
l7=si0;
si1=l8;
si2=l3;
si1-=si2;
l8=si1;
si0=si0 < si1;
if(si0){
goto L2;
}
si0=l2;
si1=4U;
si0+=si1;
si1=l7;
si2=l8;
si1-=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=l5;
si1=i32_load(&i->m0,(U64)si1);
si2=l8;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
L20:;
si0=l5;
l10=si0;
si0=l9;
si1=l6;
si0-=si1;
l9=si0;
if(si0){
goto L8;
}
}
L4:;
si0=l0;
si1=4U;
i32_store8(&i->m0,(U64)si0,si1);
goto L1;
L3:;
si0=l6;
si1=l9;
si2=1086100U;
f662(i,si0,si1,si2);
UNREACHABLE;
L2:;
si0=l4;
si1=20U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=1U;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l4;
si1=1086216U;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l4;
si1=1085932U;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l4;
si1=8U;
si0+=si1;
si1=1086304U;
f683(i,si0,si1);
UNREACHABLE;
L1:;
si0=l4;
si1=32U;
si0+=si1;
i->g0=si0;
L0:;
}

void f282(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
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
si1=1085972U;
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
si1=1086012U;
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

void f283(rustpythonInstance*i,U32 l0) {
U32 l1=0;
U32 l2=0;
U32 l3=0;
U32 l4=0;
U32 si0,si1;
si0=l0;
si1=76U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L1;
}
si0=l0;
si1=72U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
f15271(i,si0);
L1:;
si0=l0;
si1=84U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si0=!(si0);
if(si0){
goto L2;
}
si0=l0;
si1=88U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L2;
}
si0=l1;
f15271(i,si0);
L2:;
si0=l0;
si1=152U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si0=!(si0);
if(si0){
goto L3;
}
si0=l0;
si1=156U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L3;
}
si0=l1;
f15271(i,si0);
L3:;
si0=l0;
si1=172U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si0=!(si0);
if(si0){
goto L4;
}
si0=l0;
si1=176U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L4;
}
si0=l1;
f15271(i,si0);
L4:;
si0=l0;
si1=212U;
si0+=si1;
l1=si0;
f284(i,si0);
si0=l0;
si1=216U;
si0+=si1;
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
si1=224U;
si0+=si1;
l1=si0;
f285(i,si0);
si0=l0;
si1=228U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L6;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
f15271(i,si0);
L6:;
si0=l0;
f286(i,si0);
si0=l0;
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L7;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
f15271(i,si0);
L7:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+236U);
l2=si0;
si0=l0;
si1=244U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=!(si0);
if(si0){
goto L8;
}
si0=l2;
l1=si0;
L9:;
{
si0=l1;
f283(i,si0);
si0=l1;
si1=312U;
si0+=si1;
l1=si0;
si0=l3;
si1=-1U;
si0+=si1;
l3=si0;
if(si0){
goto L9;
}
}
L8:;
si0=l0;
si1=240U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L10;
}
si0=l2;
f15271(i,si0);
L10:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+248U);
l4=si0;
si0=l0;
si1=256U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=!(si0);
if(si0){
goto L11;
}
si0=l4;
si1=20U;
si0+=si1;
l1=si0;
L12:;
{
si0=l1;
si1=16U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L13;
}
si0=l1;
si1=12U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
f15271(i,si0);
L13:;
si0=l1;
si1=-12U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si0=!(si0);
if(si0){
goto L14;
}
si0=l1;
si1=-8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L14;
}
si0=l2;
f15271(i,si0);
L14:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si0=!(si0);
if(si0){
goto L15;
}
si0=l1;
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L15;
}
si0=l2;
f15271(i,si0);
L15:;
si0=l1;
si1=48U;
si0+=si1;
l1=si0;
si0=l3;
si1=-1U;
si0+=si1;
l3=si0;
if(si0){
goto L12;
}
}
L11:;
si0=l0;
si1=252U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L16;
}
si0=l4;
f15271(i,si0);
L16:;
si0=l0;
si1=260U;
si0+=si1;
l1=si0;
f287(i,si0);
si0=l0;
si1=264U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L17;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
f15271(i,si0);
L17:;
si0=l0;
si1=276U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L18;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+272U);
f15271(i,si0);
L18:;
si0=l0;
si1=288U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L19;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+284U);
f15271(i,si0);
L19:;
si0=l0;
si1=300U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L20;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+296U);
f15271(i,si0);
L20:;
L0:;
}

void f284(rustpythonInstance*i,U32 l0) {
U32 l1=0;
U32 l2=0;
U32 si0,si1;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+8U);
l1=si0;
si0=!(si0);
if(si0){
goto L1;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
si1=112U;
si0+=si1;
l0=si0;
L2:;
{
si0=l0;
si1=-56U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si0=!(si0);
if(si0){
goto L3;
}
si0=l0;
si1=-52U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L3;
}
si0=l2;
f15271(i,si0);
L3:;
si0=l0;
si1=-40U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si0=!(si0);
if(si0){
goto L4;
}
si0=l0;
si1=-36U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L4;
}
si0=l2;
f15271(i,si0);
L4:;
si0=l0;
si1=-28U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si0=!(si0);
if(si0){
goto L5;
}
si0=l0;
si1=-24U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L5;
}
si0=l2;
f15271(i,si0);
L5:;
si0=l0;
si1=-16U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si0=!(si0);
if(si0){
goto L6;
}
si0=l0;
si1=-12U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L6;
}
si0=l2;
f15271(i,si0);
L6:;
si0=l0;
si1=-4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si0=!(si0);
if(si0){
goto L7;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L7;
}
si0=l2;
f15271(i,si0);
L7:;
si0=l0;
si1=-100U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si0=!(si0);
if(si0){
goto L8;
}
si0=l0;
si1=-96U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L8;
}
si0=l2;
f15271(i,si0);
L8:;
si0=l0;
si1=120U;
si0+=si1;
l0=si0;
si0=l1;
si1=-1U;
si0+=si1;
l1=si0;
if(si0){
goto L2;
}
}
L1:;
L0:;
}

void f285(rustpythonInstance*i,U32 l0) {
U32 l1=0;
U32 l2=0;
U32 l3=0;
U32 si0,si1;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+8U);
l1=si0;
si0=!(si0);
if(si0){
goto L1;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
si1=164U;
si0+=si1;
l0=si0;
L2:;
{
si0=l0;
si1=44U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si0=!(si0);
if(si0){
goto L3;
}
si0=l0;
si1=48U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L3;
}
si0=l2;
f15271(i,si0);
L3:;
si0=l0;
si1=60U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si0=!(si0);
if(si0){
goto L4;
}
si0=l0;
si1=64U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L4;
}
si0=l2;
f15271(i,si0);
L4:;
si0=l0;
si1=72U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si0=!(si0);
if(si0){
goto L5;
}
si0=l0;
si1=76U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L5;
}
si0=l2;
f15271(i,si0);
L5:;
si0=l0;
si1=84U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si0=!(si0);
if(si0){
goto L6;
}
si0=l0;
si1=88U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L6;
}
si0=l2;
f15271(i,si0);
L6:;
si0=l0;
si1=96U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si0=!(si0);
if(si0){
goto L7;
}
si0=l0;
si1=100U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L7;
}
si0=l2;
f15271(i,si0);
L7:;
si0=l0;
si1=-164U;
si0+=si1;
l2=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=!(si0);
if(si0){
goto L8;
}
si0=l0;
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L8;
}
si0=l3;
f15271(i,si0);
L8:;
si0=l2;
f288(i,si0);
si0=l0;
si1=272U;
si0+=si1;
l0=si0;
si0=l1;
si1=-1U;
si0+=si1;
l1=si0;
if(si0){
goto L2;
}
}
L1:;
L0:;
}

void f286(rustpythonInstance*i,U32 l0) {
U32 l1=0;
U32 l2=0;
U32 l3=0;
U32 si0,si1;
U64 sj0,sj1;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+8U);
l1=si0;
si0=!(si0);
if(si0){
goto L1;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
si1=232U;
si0+=si1;
l0=si0;
L2:;
{
si0=l0;
si1=-232U;
si0+=si1;
l2=si0;
sj0=i64_load(&i->m0,(U64)si0);
sj1=2ULL;
si0=sj0 == sj1;
if(si0){
goto L3;
}
si0=l0;
si1=-56U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=!(si0);
if(si0){
goto L4;
}
si0=l0;
si1=-52U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L4;
}
si0=l3;
f15271(i,si0);
L4:;
si0=l0;
si1=-40U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=!(si0);
if(si0){
goto L5;
}
si0=l0;
si1=-36U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L5;
}
si0=l3;
f15271(i,si0);
L5:;
si0=l0;
si1=-28U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=!(si0);
if(si0){
goto L6;
}
si0=l0;
si1=-24U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L6;
}
si0=l3;
f15271(i,si0);
L6:;
si0=l0;
si1=-16U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=!(si0);
if(si0){
goto L7;
}
si0=l0;
si1=-12U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L7;
}
si0=l3;
f15271(i,si0);
L7:;
si0=l0;
si1=-4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=!(si0);
if(si0){
goto L8;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L8;
}
si0=l3;
f15271(i,si0);
L8:;
si0=l2;
f288(i,si0);
L3:;
si0=l0;
si1=248U;
si0+=si1;
l0=si0;
si0=l1;
si1=-1U;
si0+=si1;
l1=si0;
if(si0){
goto L2;
}
}
L1:;
L0:;
}

void f287(rustpythonInstance*i,U32 l0) {
U32 l1=0;
U32 l2=0;
U32 l3=0;
U32 si0,si1;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+8U);
l1=si0;
si0=!(si0);
if(si0){
goto L1;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
si1=292U;
si0+=si1;
l0=si0;
L2:;
{
si0=l0;
si1=-68U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si0=!(si0);
if(si0){
goto L3;
}
si0=l0;
si1=-64U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L3;
}
si0=l2;
f15271(i,si0);
L3:;
si0=l0;
si1=-52U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si0=!(si0);
if(si0){
goto L4;
}
si0=l0;
si1=-48U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L4;
}
si0=l2;
f15271(i,si0);
L4:;
si0=l0;
si1=-40U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si0=!(si0);
if(si0){
goto L5;
}
si0=l0;
si1=-36U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L5;
}
si0=l2;
f15271(i,si0);
L5:;
si0=l0;
si1=-28U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si0=!(si0);
if(si0){
goto L6;
}
si0=l0;
si1=-24U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L6;
}
si0=l2;
f15271(i,si0);
L6:;
si0=l0;
si1=-16U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si0=!(si0);
if(si0){
goto L7;
}
si0=l0;
si1=-12U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L7;
}
si0=l2;
f15271(i,si0);
L7:;
si0=l0;
si1=-292U;
si0+=si1;
l2=si0;
si0=l0;
si1=-112U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=!(si0);
if(si0){
goto L8;
}
si0=l0;
si1=-108U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L8;
}
si0=l3;
f15271(i,si0);
L8:;
si0=l2;
f288(i,si0);
si0=l0;
si1=-4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si0=!(si0);
if(si0){
goto L9;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L9;
}
si0=l2;
f15271(i,si0);
L9:;
si0=l0;
si1=304U;
si0+=si1;
l0=si0;
si0=l1;
si1=-1U;
si0+=si1;
l1=si0;
if(si0){
goto L2;
}
}
L1:;
L0:;
}

void f288(rustpythonInstance*i,U32 l0) {
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
f15271(i,si0);
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
f15271(i,si0);
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
f15271(i,si0);
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
f15271(i,si0);
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
f15271(i,si0);
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
f15271(i,si0);
L6:;
L0:;
}

void f289(rustpythonInstance*i,U32 l0) {
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

void f290(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
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
f580(i,si0,si1,si2);
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
L0:;
}

void f291(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 si0,si1,si2;
si0=i->g0;
si1=320U;
si0-=si1;
l2=si0;
i->g0=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+8U);
l3=si0;
if(si0){
goto L4;
}
si0=8U;
l4=si0;
goto L3;
L4:;
si0=l3;
si1=6882960U;
si0=si0 > si1;
if(si0){
goto L2;
}
si0=l3;
si1=312U;
si0*=si1;
l5=si0;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L2;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si0=l3;
si1=6882961U;
si0=si0 < si1;
si1=3U;
si0<<=(si1&31);
l1=si0;
si0=l5;
if(si0){
goto L6;
}
si0=l1;
l4=si0;
goto L5;
L6:;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=l1;
si1=l5;
si0=si0 <= si1;
if(si0){
goto L7;
}
si0=l1;
si1=l5;
si0=f15277(i,si0,si1);
l4=si0;
goto L5;
L7:;
si0=l5;
si0=f15269(i,si0);
l4=si0;
L5:;
si0=l4;
si0=!(si0);
if(si0){
goto L1;
}
si0=l3;
si1=312U;
si0*=si1;
l7=si0;
si0=0U;
l1=si0;
si0=l3;
l5=si0;
L8:;
{
si0=l7;
si1=l1;
si0=si0 == si1;
if(si0){
goto L3;
}
si0=l2;
si1=8U;
si0+=si1;
si1=l6;
si2=l1;
si1+=si2;
f402(i,si0,si1);
si0=l4;
si1=l1;
si0+=si1;
si1=l2;
si2=8U;
si1+=si2;
si2=312U;
si0=f15390(i,si0,si1,si2);
si0=l1;
si1=312U;
si0+=si1;
l1=si0;
si0=l5;
si1=-1U;
si0+=si1;
l5=si0;
if(si0){
goto L8;
}
}
L3:;
si0=l0;
si1=l3;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l0;
si1=l3;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l4;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=320U;
si0+=si1;
i->g0=si0;
goto L0;
L2:;
f53(i);
UNREACHABLE;
L1:;
si0=l1;
si1=l5;
f52(i,si0,si1);
UNREACHABLE;
L0:;
}

void f292(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 l8=0;
U32 l9=0;
U32 si0,si1,si2;
si0=i->g0;
si1=272U;
si0-=si1;
l2=si0;
i->g0=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+8U);
l3=si0;
if(si0){
goto L4;
}
si0=8U;
l4=si0;
goto L3;
L4:;
si0=l3;
si1=7895160U;
si0=si0 > si1;
if(si0){
goto L2;
}
si0=l3;
si1=272U;
si0*=si1;
l5=si0;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L2;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si0=l3;
si1=7895161U;
si0=si0 < si1;
si1=3U;
si0<<=(si1&31);
l6=si0;
si0=l5;
if(si0){
goto L6;
}
si0=l6;
l4=si0;
goto L5;
L6:;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=l6;
si1=l5;
si0=si0 <= si1;
if(si0){
goto L7;
}
si0=l6;
si1=l5;
si0=f15277(i,si0,si1);
l4=si0;
goto L5;
L7:;
si0=l5;
si0=f15269(i,si0);
l4=si0;
L5:;
si0=l4;
si0=!(si0);
if(si0){
goto L1;
}
si0=l3;
si1=272U;
si0*=si1;
l7=si0;
si0=l2;
si1=152U;
si0+=si1;
l8=si0;
si0=l2;
si1=184U;
si0+=si1;
l9=si0;
si0=0U;
l5=si0;
si0=l3;
l6=si0;
L8:;
{
si0=l7;
si1=l5;
si0=si0 == si1;
if(si0){
goto L3;
}
si0=l9;
si1=l1;
si2=184U;
si1+=si2;
f293(i,si0,si1);
si0=l8;
si1=l1;
si2=152U;
si1+=si2;
f533(i,si0,si1);
si0=l2;
si1=l1;
f294(i,si0,si1);
si0=l4;
si1=l5;
si0+=si1;
si1=l2;
si2=272U;
si0=f15390(i,si0,si1,si2);
si0=l5;
si1=272U;
si0+=si1;
l5=si0;
si0=l1;
si1=272U;
si0+=si1;
l1=si0;
si0=l6;
si1=-1U;
si0+=si1;
l6=si0;
if(si0){
goto L8;
}
}
L3:;
si0=l0;
si1=l3;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l0;
si1=l3;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l4;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=272U;
si0+=si1;
i->g0=si0;
goto L0;
L2:;
f53(i);
UNREACHABLE;
L1:;
si0=l6;
si1=l5;
f52(i,si0,si1);
UNREACHABLE;
L0:;
}

void f293(rustpythonInstance*i,U32 l0,U32 l1) {
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
U64 l14=0;
U32 l15=0;
U64 l16=0;
U32 l17=0;
U32 l18=0;
U64 l19=0;
U64 l20=0;
U64 l21=0;
U32 si0,si1,si2;
U64 sj0,sj1;
si0=l1;
si1=20U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si0=l1;
si1=12U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+16U);
l4=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+8U);
l5=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
l6=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
si0=0U;
l8=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+24U);
l9=si0;
if(si0){
goto L8;
}
si0=0U;
l10=si0;
goto L7;
L8:;
si0=l1;
si1=32U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l11=si0;
if(si0){
goto L10;
}
si0=4U;
l10=si0;
si0=0U;
l12=si0;
goto L9;
L10:;
si0=l11;
si1=268435455U;
si0=si0 > si1;
if(si0){
goto L2;
}
si0=l11;
si1=3U;
si0<<=(si1&31);
l12=si0;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L2;
}
si0=l11;
si1=268435456U;
si0=si0 < si1;
si1=2U;
si0<<=(si1&31);
l13=si0;
si0=l12;
if(si0){
goto L12;
}
si0=l13;
l10=si0;
goto L11;
L12:;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=l13;
si1=l12;
si0=si0 <= si1;
if(si0){
goto L13;
}
si0=l13;
si1=l12;
si0=f15277(i,si0,si1);
l10=si0;
goto L11;
L13:;
si0=l12;
si0=f15269(i,si0);
l10=si0;
L11:;
si0=l10;
si0=!(si0);
if(si0){
goto L6;
}
L9:;
si0=l10;
si1=l9;
si2=l12;
si0=f15390(i,si0,si1,si2);
si0=l11;
sj0=(U64)(si0);
l14=sj0;
sj1=32ULL;
sj0<<=(sj1&63);
sj1=l14;
sj0|=sj1;
l14=sj0;
L7:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+36U);
l15=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+40U);
l9=si0;
if(si0){
goto L15;
}
goto L14;
L15:;
si0=l1;
si1=48U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l11=si0;
if(si0){
goto L17;
}
si0=4U;
l8=si0;
si0=0U;
l12=si0;
goto L16;
L17:;
si0=l11;
si1=268435455U;
si0=si0 > si1;
if(si0){
goto L2;
}
si0=l11;
si1=3U;
si0<<=(si1&31);
l12=si0;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L2;
}
si0=l11;
si1=268435456U;
si0=si0 < si1;
si1=2U;
si0<<=(si1&31);
l13=si0;
si0=l12;
if(si0){
goto L19;
}
si0=l13;
l8=si0;
goto L18;
L19:;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=l13;
si1=l12;
si0=si0 <= si1;
if(si0){
goto L20;
}
si0=l13;
si1=l12;
si0=f15277(i,si0,si1);
l8=si0;
goto L18;
L20:;
si0=l12;
si0=f15269(i,si0);
l8=si0;
L18:;
si0=l8;
si0=!(si0);
if(si0){
goto L5;
}
L16:;
si0=l8;
si1=l9;
si2=l12;
si0=f15390(i,si0,si1,si2);
si0=l11;
sj0=(U64)(si0);
l16=sj0;
sj1=32ULL;
sj0<<=(sj1&63);
sj1=l16;
sj0|=sj1;
l16=sj0;
L14:;
si0=0U;
l11=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+52U);
l17=si0;
if(si0){
goto L22;
}
si0=0U;
l12=si0;
goto L21;
L22:;
si0=l1;
si1=60U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l9=si0;
if(si0){
goto L24;
}
si0=4U;
l12=si0;
si0=0U;
l13=si0;
goto L23;
L24:;
si0=l9;
si1=268435455U;
si0=si0 > si1;
if(si0){
goto L2;
}
si0=l9;
si1=3U;
si0<<=(si1&31);
l13=si0;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L2;
}
si0=l9;
si1=268435456U;
si0=si0 < si1;
si1=2U;
si0<<=(si1&31);
l18=si0;
si0=l13;
if(si0){
goto L26;
}
si0=l18;
l12=si0;
goto L25;
L26:;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=l18;
si1=l13;
si0=si0 <= si1;
if(si0){
goto L27;
}
si0=l18;
si1=l13;
si0=f15277(i,si0,si1);
l12=si0;
goto L25;
L27:;
si0=l13;
si0=f15269(i,si0);
l12=si0;
L25:;
si0=l12;
si0=!(si0);
if(si0){
goto L4;
}
L23:;
si0=l12;
si1=l17;
si2=l13;
si0=f15390(i,si0,si1,si2);
si0=l9;
sj0=(U64)(si0);
l19=sj0;
sj1=32ULL;
sj0<<=(sj1&63);
sj1=l19;
sj0|=sj1;
l19=sj0;
L21:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+64U);
l17=si0;
if(si0){
goto L29;
}
goto L28;
L29:;
si0=l1;
si1=72U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l9=si0;
if(si0){
goto L31;
}
si0=4U;
l11=si0;
si0=0U;
l13=si0;
goto L30;
L31:;
si0=l9;
si1=268435455U;
si0=si0 > si1;
if(si0){
goto L2;
}
si0=l9;
si1=3U;
si0<<=(si1&31);
l13=si0;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L2;
}
si0=l9;
si1=268435456U;
si0=si0 < si1;
si1=2U;
si0<<=(si1&31);
l18=si0;
si0=l13;
if(si0){
goto L33;
}
si0=l18;
l11=si0;
goto L32;
L33:;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=l18;
si1=l13;
si0=si0 <= si1;
if(si0){
goto L34;
}
si0=l18;
si1=l13;
si0=f15277(i,si0,si1);
l11=si0;
goto L32;
L34:;
si0=l13;
si0=f15269(i,si0);
l11=si0;
L32:;
si0=l11;
si0=!(si0);
if(si0){
goto L3;
}
L30:;
si0=l11;
si1=l17;
si2=l13;
si0=f15390(i,si0,si1,si2);
si0=l9;
sj0=(U64)(si0);
l20=sj0;
sj1=32ULL;
sj0<<=(sj1&63);
sj1=l20;
sj0|=sj1;
l20=sj0;
L28:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+76U);
l17=si0;
if(si0){
goto L36;
}
si0=0U;
l1=si0;
goto L35;
L36:;
si0=l1;
si1=84U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l9=si0;
if(si0){
goto L38;
}
si0=4U;
l1=si0;
si0=0U;
l13=si0;
goto L37;
L38:;
si0=l9;
si1=134217727U;
si0=si0 > si1;
if(si0){
goto L2;
}
si0=l9;
si1=4U;
si0<<=(si1&31);
l13=si0;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L2;
}
si0=l9;
si1=134217728U;
si0=si0 < si1;
si1=2U;
si0<<=(si1&31);
l18=si0;
si0=l13;
if(si0){
goto L40;
}
si0=l18;
l1=si0;
goto L39;
L40:;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=l18;
si1=l13;
si0=si0 <= si1;
if(si0){
goto L41;
}
si0=l18;
si1=l13;
si0=f15277(i,si0,si1);
l1=si0;
goto L39;
L41:;
si0=l13;
si0=f15269(i,si0);
l1=si0;
L39:;
si0=l1;
si0=!(si0);
if(si0){
goto L1;
}
L37:;
si0=l1;
si1=l17;
si2=l13;
si0=f15390(i,si0,si1,si2);
si0=l9;
sj0=(U64)(si0);
l21=sj0;
sj1=32ULL;
sj0<<=(sj1&63);
sj1=l21;
sj0|=sj1;
l21=sj0;
L35:;
si0=l0;
si1=l1;
i32_store(&i->m0,(U64)si0+76U,si1);
si0=l0;
si1=l11;
i32_store(&i->m0,(U64)si0+64U,si1);
si0=l0;
si1=l12;
i32_store(&i->m0,(U64)si0+52U,si1);
si0=l0;
si1=l8;
i32_store(&i->m0,(U64)si0+40U,si1);
si0=l0;
si1=l15;
i32_store(&i->m0,(U64)si0+36U,si1);
si0=l0;
si1=l10;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l0;
si1=l4;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l0;
si1=l5;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l0;
si1=l6;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l7;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=80U;
si0+=si1;
sj1=l21;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=68U;
si0+=si1;
sj1=l20;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=56U;
si0+=si1;
sj1=l19;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=44U;
si0+=si1;
sj1=l16;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=28U;
si0+=si1;
sj1=l14;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=20U;
si0+=si1;
si1=l2;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=12U;
si0+=si1;
si1=l3;
i32_store(&i->m0,(U64)si0,si1);
goto L0;
L6:;
si0=l13;
si1=l12;
f52(i,si0,si1);
UNREACHABLE;
L5:;
si0=l13;
si1=l12;
f52(i,si0,si1);
UNREACHABLE;
L4:;
si0=l18;
si1=l13;
f52(i,si0,si1);
UNREACHABLE;
L3:;
si0=l18;
si1=l13;
f52(i,si0,si1);
UNREACHABLE;
L2:;
f53(i);
UNREACHABLE;
L1:;
si0=l18;
si1=l13;
f52(i,si0,si1);
UNREACHABLE;
L0:;
}

void f294(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U64 l8=0;
U32 l9=0;
U64 l10=0;
U64 l11=0;
U64 l12=0;
U64 l13=0;
U64 l14=0;
U64 l15=0;
U64 l16=0;
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
U32 si0,si1,si2;
U64 sj0,sj1;
si0=0U;
l2=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+116U);
l3=si0;
if(si0){
goto L8;
}
si0=0U;
l4=si0;
goto L7;
L8:;
si0=l1;
si1=124U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
if(si0){
goto L10;
}
si0=4U;
l4=si0;
si0=0U;
l6=si0;
goto L9;
L10:;
si0=l5;
si1=268435455U;
si0=si0 > si1;
if(si0){
goto L2;
}
si0=l5;
si1=3U;
si0<<=(si1&31);
l6=si0;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L2;
}
si0=l5;
si1=268435456U;
si0=si0 < si1;
si1=2U;
si0<<=(si1&31);
l7=si0;
si0=l6;
if(si0){
goto L12;
}
si0=l7;
l4=si0;
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
l4=si0;
goto L11;
L13:;
si0=l6;
si0=f15269(i,si0);
l4=si0;
L11:;
si0=l4;
si0=!(si0);
if(si0){
goto L6;
}
L9:;
si0=l4;
si1=l3;
si2=l6;
si0=f15390(i,si0,si1,si2);
si0=l5;
sj0=(U64)(si0);
l8=sj0;
sj1=32ULL;
sj0<<=(sj1&63);
sj1=l8;
sj0|=sj1;
l8=sj0;
L7:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+48U);
l3=si0;
if(si0){
goto L15;
}
goto L14;
L15:;
si0=l1;
si1=60U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l9=si0;
si0=l1;
si1=56U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
if(si0){
goto L17;
}
si0=4U;
l2=si0;
si0=0U;
l6=si0;
goto L16;
L17:;
si0=l5;
si1=268435455U;
si0=si0 > si1;
if(si0){
goto L2;
}
si0=l5;
si1=3U;
si0<<=(si1&31);
l6=si0;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L2;
}
si0=l5;
si1=268435456U;
si0=si0 < si1;
si1=2U;
si0<<=(si1&31);
l7=si0;
si0=l6;
if(si0){
goto L19;
}
si0=l7;
l2=si0;
goto L18;
L19:;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=l7;
si1=l6;
si0=si0 <= si1;
if(si0){
goto L20;
}
si0=l7;
si1=l6;
si0=f15277(i,si0,si1);
l2=si0;
goto L18;
L20:;
si0=l6;
si0=f15269(i,si0);
l2=si0;
L18:;
si0=l2;
si0=!(si0);
if(si0){
goto L5;
}
L16:;
si0=l2;
si1=l3;
si2=l6;
si0=f15390(i,si0,si1,si2);
si0=l5;
sj0=(U64)(si0);
l10=sj0;
sj1=32ULL;
sj0<<=(sj1&63);
sj1=l10;
sj0|=sj1;
l10=sj0;
L14:;
si0=l1;
si1=40U;
si0+=si1;
sj0=i64_load(&i->m0,(U64)si0);
l11=sj0;
si0=l1;
si1=24U;
si0+=si1;
sj0=i64_load(&i->m0,(U64)si0);
l12=sj0;
si0=l1;
sj0=i64_load(&i->m0,(U64)si0+32U);
l13=sj0;
si0=l1;
sj0=i64_load(&i->m0,(U64)si0+16U);
l14=sj0;
si0=l1;
sj0=i64_load(&i->m0,(U64)si0+8U);
l15=sj0;
si0=l1;
sj0=i64_load(&i->m0,(U64)si0);
l16=sj0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+64U);
l6=si0;
if(si0){
goto L22;
}
goto L21;
L22:;
si0=l6;
si1=l6;
si1=i32_load(&i->m0,(U64)si1);
si2=1U;
si1+=si2;
l5=si1;
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si0=!(si0);
if(si0){
goto L4;
}
si0=l1;
si1=68U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l17=si0;
L21:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+72U);
l3=si0;
if(si0){
goto L24;
}
goto L23;
L24:;
si0=l3;
si1=l3;
si1=i32_load(&i->m0,(U64)si1);
si2=1U;
si1+=si2;
l5=si1;
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si0=!(si0);
if(si0){
goto L4;
}
si0=l1;
si1=76U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l18=si0;
L23:;
si0=l1;
si1=84U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l19=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+80U);
l20=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+112U);
l21=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+88U);
l22=si0;
if(si0){
goto L26;
}
si0=0U;
l7=si0;
goto L25;
L26:;
si0=l1;
si1=100U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l23=si0;
si0=l1;
si1=96U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
if(si0){
goto L28;
}
si0=4U;
l7=si0;
si0=0U;
l24=si0;
goto L27;
L28:;
si0=l5;
si1=89478485U;
si0=si0 > si1;
if(si0){
goto L2;
}
si0=l5;
si1=24U;
si0*=si1;
l24=si0;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L2;
}
si0=l5;
si1=89478486U;
si0=si0 < si1;
si1=2U;
si0<<=(si1&31);
l25=si0;
si0=l24;
if(si0){
goto L30;
}
si0=l25;
l7=si0;
goto L29;
L30:;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=l25;
si1=l24;
si0=si0 <= si1;
if(si0){
goto L31;
}
si0=l25;
si1=l24;
si0=f15277(i,si0,si1);
l7=si0;
goto L29;
L31:;
si0=l24;
si0=f15269(i,si0);
l7=si0;
L29:;
si0=l7;
si0=!(si0);
if(si0){
goto L3;
}
L27:;
si0=l7;
si1=l22;
si2=l24;
si0=f15390(i,si0,si1,si2);
si0=l5;
sj0=(U64)(si0);
l26=sj0;
sj1=32ULL;
sj0<<=(sj1&63);
sj1=l26;
sj0|=sj1;
l26=sj0;
L25:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+128U);
l22=si0;
if(si0){
goto L33;
}
goto L32;
L33:;
si0=l1;
si1=144U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si0=l1;
si1=132U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l25=si0;
si0=l1;
si1=136U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l27=si0;
if(si0){
goto L34;
}
si0=0U;
l24=si0;
goto L32;
L34:;
si0=l5;
if(si0){
goto L36;
}
si0=1U;
l24=si0;
goto L35;
L36:;
si0=l5;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L2;
}
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=l5;
si0=f15269(i,si0);
l24=si0;
si0=!(si0);
if(si0){
goto L1;
}
L35:;
si0=l24;
si1=l27;
si2=l5;
si0=f15390(i,si0,si1,si2);
L32:;
si0=l0;
si1=l4;
i32_store(&i->m0,(U64)si0+116U,si1);
si0=l0;
si1=l2;
i32_store(&i->m0,(U64)si0+48U,si1);
si0=l0;
si1=l21;
i32_store(&i->m0,(U64)si0+112U,si1);
si0=l0;
si1=l3;
i32_store(&i->m0,(U64)si0+72U,si1);
si0=l0;
si1=l6;
i32_store(&i->m0,(U64)si0+64U,si1);
si0=l0;
sj1=l13;
i64_store(&i->m0,(U64)si0+32U,sj1);
si0=l0;
sj1=l14;
i64_store(&i->m0,(U64)si0+16U,sj1);
si0=l0;
sj1=l15;
i64_store(&i->m0,(U64)si0+8U,sj1);
si0=l0;
sj1=l16;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=l22;
i32_store(&i->m0,(U64)si0+128U,si1);
si0=l0;
si1=l7;
i32_store(&i->m0,(U64)si0+88U,si1);
si0=l0;
si1=l20;
i32_store(&i->m0,(U64)si0+80U,si1);
si0=l0;
si1=120U;
si0+=si1;
sj1=l8;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=60U;
si0+=si1;
si1=l9;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=52U;
si0+=si1;
sj1=l10;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=76U;
si0+=si1;
si1=l18;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=68U;
si0+=si1;
si1=l17;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=40U;
si0+=si1;
sj1=l11;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=24U;
si0+=si1;
sj1=l12;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=144U;
si0+=si1;
si1=l5;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=140U;
si0+=si1;
si1=l5;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=136U;
si0+=si1;
si1=l24;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=132U;
si0+=si1;
si1=l25;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=100U;
si0+=si1;
si1=l23;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=92U;
si0+=si1;
sj1=l26;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=84U;
si0+=si1;
si1=l19;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l1;
sj1=i64_load(&i->m0,(U64)si1+104U);
i64_store(&i->m0,(U64)si0+104U,sj1);
goto L0;
L6:;
si0=l7;
si1=l6;
f52(i,si0,si1);
UNREACHABLE;
L5:;
si0=l7;
si1=l6;
f52(i,si0,si1);
UNREACHABLE;
L4:;
UNREACHABLE;
L3:;
si0=l25;
si1=l24;
f52(i,si0,si1);
UNREACHABLE;
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

void f295(rustpythonInstance*i,U32 l0,U32 l1) {
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
U64 l12=0;
U32 l13=0;
U32 l14=0;
U32 l15=0;
U64 l16=0;
U32 l17=0;
U32 si0,si1,si2;
U64 sj0,sj1;
si0=i->g0;
si1=544U;
si0-=si1;
l2=si0;
i->g0=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+8U);
l3=si0;
if(si0){
goto L5;
}
si0=8U;
l4=si0;
goto L4;
L5:;
si0=l3;
si1=7064090U;
si0=si0 > si1;
if(si0){
goto L2;
}
si0=l3;
si1=304U;
si0*=si1;
l5=si0;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L2;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si0=l3;
si1=7064091U;
si0=si0 < si1;
si1=3U;
si0<<=(si1&31);
l1=si0;
si0=l5;
if(si0){
goto L7;
}
si0=l1;
l4=si0;
goto L6;
L7:;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=l1;
si1=l5;
si0=si0 <= si1;
if(si0){
goto L8;
}
si0=l1;
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
goto L3;
}
si0=l3;
si1=304U;
si0*=si1;
l7=si0;
si0=l6;
si1=296U;
si0+=si1;
l8=si0;
si0=0U;
l9=si0;
si0=l3;
l10=si0;
L9:;
{
si0=l7;
si1=l9;
si0=si0 == si1;
if(si0){
goto L4;
}
si0=l2;
si1=272U;
si0+=si1;
si1=l6;
si2=200U;
si1+=si2;
f293(i,si0,si1);
si0=l2;
si1=360U;
si0+=si1;
si1=l6;
si2=168U;
si1+=si2;
f533(i,si0,si1);
si0=l2;
si1=392U;
si0+=si1;
si1=l6;
f294(i,si0,si1);
si0=l6;
si1=160U;
si0+=si1;
sj0=i64_load(&i->m0,(U64)si0);
l11=sj0;
si0=l6;
sj0=i64_load(&i->m0,(U64)si0+152U);
l12=sj0;
si0=l6;
si0=i32_load(&i->m0,(U64)si0+288U);
l13=si0;
if(si0){
goto L11;
}
si0=0U;
l14=si0;
goto L10;
L11:;
si0=l8;
si1=l9;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
if(si0){
goto L13;
}
si0=4U;
l14=si0;
si0=0U;
l5=si0;
goto L12;
L13:;
si0=l1;
si1=134217727U;
si0=si0 > si1;
if(si0){
goto L2;
}
si0=l1;
si1=4U;
si0<<=(si1&31);
l5=si0;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L2;
}
si0=l1;
si1=134217728U;
si0=si0 < si1;
si1=2U;
si0<<=(si1&31);
l15=si0;
si0=l5;
if(si0){
goto L15;
}
si0=l15;
l14=si0;
goto L14;
L15:;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=l15;
si1=l5;
si0=si0 <= si1;
if(si0){
goto L16;
}
si0=l15;
si1=l5;
si0=f15277(i,si0,si1);
l14=si0;
goto L14;
L16:;
si0=l5;
si0=f15269(i,si0);
l14=si0;
L14:;
si0=l14;
si0=!(si0);
if(si0){
goto L1;
}
L12:;
si0=l14;
si1=l13;
si2=l5;
si0=f15390(i,si0,si1,si2);
si0=l1;
sj0=(U64)(si0);
l16=sj0;
sj1=32ULL;
sj0<<=(sj1&63);
sj1=l16;
sj0|=sj1;
l16=sj0;
L10:;
si0=l6;
si1=304U;
si0+=si1;
l6=si0;
si0=l2;
si1=l2;
si2=272U;
si1+=si2;
si2=88U;
si0=f15390(i,si0,si1,si2);
l1=si0;
si1=88U;
si0+=si1;
si1=24U;
si0+=si1;
l13=si0;
si1=l1;
si2=360U;
si1+=si2;
si2=24U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si1=88U;
si0+=si1;
si1=16U;
si0+=si1;
l15=si0;
si1=l1;
si2=360U;
si1+=si2;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si1=88U;
si0+=si1;
si1=8U;
si0+=si1;
l17=si0;
si1=l1;
si2=360U;
si1+=si2;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si1=l1;
sj1=i64_load(&i->m0,(U64)si1+360U);
i64_store(&i->m0,(U64)si0+88U,sj1);
si0=l1;
si1=120U;
si0+=si1;
si1=l1;
si2=392U;
si1+=si2;
si2=152U;
si0=f15390(i,si0,si1,si2);
si0=l4;
si1=l9;
si0+=si1;
si1=l1;
si2=120U;
si1+=si2;
si2=152U;
si0=f15390(i,si0,si1,si2);
l5=si0;
si1=160U;
si0+=si1;
sj1=l11;
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=152U;
si0+=si1;
sj1=l12;
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=168U;
si0+=si1;
si1=l1;
sj1=i64_load(&i->m0,(U64)si1+88U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=176U;
si0+=si1;
si1=l17;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=184U;
si0+=si1;
si1=l15;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=192U;
si0+=si1;
si1=l13;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=200U;
si0+=si1;
si1=l1;
si2=88U;
si0=f15390(i,si0,si1,si2);
si0=l5;
si1=292U;
si0+=si1;
sj1=l16;
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=288U;
si0+=si1;
si1=l14;
i32_store(&i->m0,(U64)si0,si1);
si0=l9;
si1=304U;
si0+=si1;
l9=si0;
si0=l10;
si1=-1U;
si0+=si1;
l10=si0;
if(si0){
goto L9;
}
}
L4:;
si0=l0;
si1=l3;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l0;
si1=l3;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l4;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=544U;
si0+=si1;
i->g0=si0;
goto L0;
L3:;
si0=l1;
si1=l5;
f52(i,si0,si1);
UNREACHABLE;
L2:;
f53(i);
UNREACHABLE;
L1:;
si0=l15;
si1=l5;
f52(i,si0,si1);
UNREACHABLE;
L0:;
}

void f296(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 l8=0;
U32 l9=0;
U32 l10=0;
U32 si0,si1,si2,si3;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+8U);
l2=si0;
if(si0){
goto L5;
}
si0=4U;
l3=si0;
goto L4;
L5:;
si0=l2;
si1=178956970U;
si0=si0 > si1;
if(si0){
goto L2;
}
si0=l2;
si1=12U;
si0*=si1;
l4=si0;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L2;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si0=l2;
si1=178956971U;
si0=si0 < si1;
si1=2U;
si0<<=(si1&31);
l1=si0;
si0=l4;
if(si0){
goto L7;
}
si0=l1;
l3=si0;
goto L6;
L7:;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=l1;
si1=l4;
si0=si0 <= si1;
if(si0){
goto L8;
}
si0=l1;
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
goto L3;
}
si0=l2;
si1=12U;
si0*=si1;
l6=si0;
si0=0U;
l4=si0;
si0=l2;
l7=si0;
L9:;
{
si0=l6;
si1=l4;
si0=si0 == si1;
if(si0){
goto L4;
}
si0=l5;
si0=i32_load(&i->m0,(U64)si0);
l8=si0;
si0=l5;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
if(si0){
goto L11;
}
si0=1U;
l9=si0;
goto L10;
L11:;
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
l9=si0;
si0=!(si0);
if(si0){
goto L1;
}
L10:;
si0=l5;
si1=12U;
si0+=si1;
l5=si0;
si0=l3;
si1=l4;
si0+=si1;
l10=si0;
si1=l9;
si2=l8;
si3=l1;
si1=f15390(i,si1,si2,si3);
i32_store(&i->m0,(U64)si0,si1);
si0=l10;
si1=8U;
si0+=si1;
si1=l1;
i32_store(&i->m0,(U64)si0,si1);
si0=l10;
si1=4U;
si0+=si1;
si1=l1;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=12U;
si0+=si1;
l4=si0;
si0=l7;
si1=-1U;
si0+=si1;
l7=si0;
if(si0){
goto L9;
}
}
L4:;
si0=l0;
si1=l2;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l0;
si1=l2;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l3;
i32_store(&i->m0,(U64)si0,si1);
goto L0;
L3:;
si0=l1;
si1=l4;
f52(i,si0,si1);
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

void f297(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 l8=0;
U32 si0,si1,si2;
si0=i->g0;
si1=128U;
si0-=si1;
l2=si0;
i->g0=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+8U);
l3=si0;
if(si0){
goto L4;
}
si0=4U;
l4=si0;
goto L3;
L4:;
si0=l3;
si1=17895697U;
si0=si0 > si1;
if(si0){
goto L2;
}
si0=l3;
si1=120U;
si0*=si1;
l5=si0;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L2;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si0=l3;
si1=17895698U;
si0=si0 < si1;
si1=2U;
si0<<=(si1&31);
l1=si0;
si0=l5;
if(si0){
goto L6;
}
si0=l1;
l4=si0;
goto L5;
L6:;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=l1;
si1=l5;
si0=si0 <= si1;
if(si0){
goto L7;
}
si0=l1;
si1=l5;
si0=f15277(i,si0,si1);
l4=si0;
goto L5;
L7:;
si0=l5;
si0=f15269(i,si0);
l4=si0;
L5:;
si0=l4;
si0=!(si0);
if(si0){
goto L1;
}
si0=l3;
si1=120U;
si0*=si1;
l7=si0;
si0=l2;
si1=8U;
si0+=si1;
si1=32U;
si0+=si1;
l8=si0;
si0=0U;
l1=si0;
si0=l3;
l5=si0;
L8:;
{
si0=l7;
si1=l1;
si0=si0 == si1;
if(si0){
goto L3;
}
si0=l8;
si1=l6;
si2=32U;
si1+=si2;
f293(i,si0,si1);
si0=l2;
si1=8U;
si0+=si1;
si1=l6;
f533(i,si0,si1);
si0=l4;
si1=l1;
si0+=si1;
si1=l2;
si2=8U;
si1+=si2;
si2=120U;
si0=f15390(i,si0,si1,si2);
si0=l1;
si1=120U;
si0+=si1;
l1=si0;
si0=l6;
si1=120U;
si0+=si1;
l6=si0;
si0=l5;
si1=-1U;
si0+=si1;
l5=si0;
if(si0){
goto L8;
}
}
L3:;
si0=l0;
si1=l3;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l0;
si1=l3;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l4;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=128U;
si0+=si1;
i->g0=si0;
goto L0;
L2:;
f53(i);
UNREACHABLE;
L1:;
si0=l1;
si1=l5;
f52(i,si0,si1);
UNREACHABLE;
L0:;
}

void f298(rustpythonInstance*i,U32 l0,U32 l1) {
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
U32 si0,si1,si2;
U64 sj0,sj1;
si0=i->g0;
si1=496U;
si0-=si1;
l2=si0;
i->g0=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+8U);
l3=si0;
if(si0){
goto L4;
}
si0=8U;
l4=si0;
goto L3;
L4:;
si0=l3;
si1=8659208U;
si0=si0 > si1;
if(si0){
goto L2;
}
si0=l3;
si1=248U;
si0*=si1;
l5=si0;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L2;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si0=l3;
si1=8659209U;
si0=si0 < si1;
si1=3U;
si0<<=(si1&31);
l1=si0;
si0=l5;
if(si0){
goto L6;
}
si0=l1;
l4=si0;
goto L5;
L6:;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=l1;
si1=l5;
si0=si0 <= si1;
if(si0){
goto L7;
}
si0=l1;
si1=l5;
si0=f15277(i,si0,si1);
l4=si0;
goto L5;
L7:;
si0=l5;
si0=f15269(i,si0);
l4=si0;
L5:;
si0=l4;
si0=!(si0);
if(si0){
goto L1;
}
si0=l3;
si1=248U;
si0*=si1;
l7=si0;
si0=l2;
si1=248U;
si0+=si1;
si1=8U;
si0+=si1;
l8=si0;
si0=l2;
si1=248U;
si0+=si1;
si1=152U;
si0+=si1;
l9=si0;
si0=0U;
l1=si0;
si0=l3;
l5=si0;
L8:;
{
si0=l7;
si1=l1;
si0=si0 == si1;
if(si0){
goto L3;
}
si0=l5;
si1=-1U;
si0+=si1;
l5=si0;
si0=l4;
si1=l1;
si0+=si1;
l10=si0;
sj0=2ULL;
l11=sj0;
si0=l6;
si1=l1;
si0+=si1;
l12=si0;
sj0=i64_load(&i->m0,(U64)si0);
sj1=2ULL;
si0=sj0 == sj1;
if(si0){
goto L9;
}
si0=l9;
si1=l12;
si2=152U;
si1+=si2;
f293(i,si0,si1);
si0=l2;
si1=248U;
si0+=si1;
si1=l12;
f294(i,si0,si1);
si0=l2;
si1=l12;
si2=240U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+488U,sj1);
si0=l2;
sj0=i64_load(&i->m0,(U64)si0+248U);
l11=sj0;
si0=l2;
si1=8U;
si0+=si1;
si1=l8;
si2=240U;
si0=f15390(i,si0,si1,si2);
L9:;
si0=l10;
sj1=l11;
i64_store(&i->m0,(U64)si0,sj1);
si0=l10;
si1=8U;
si0+=si1;
si1=l2;
si2=8U;
si1+=si2;
si2=240U;
si0=f15390(i,si0,si1,si2);
si0=l1;
si1=248U;
si0+=si1;
l1=si0;
si0=l5;
if(si0){
goto L8;
}
}
L3:;
si0=l0;
si1=l3;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l0;
si1=l3;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l4;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=496U;
si0+=si1;
i->g0=si0;
goto L0;
L2:;
f53(i);
UNREACHABLE;
L1:;
si0=l1;
si1=l5;
f52(i,si0,si1);
UNREACHABLE;
L0:;
}

void f299(rustpythonInstance*i,U32 l0,U32 l1) {
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
si1=48U;
si0-=si1;
l2=si0;
i->g0=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+8U);
l3=si0;
if(si0){
goto L4;
}
si0=4U;
l4=si0;
goto L3;
L4:;
si0=l3;
si1=44739242U;
si0=si0 > si1;
if(si0){
goto L2;
}
si0=l3;
si1=48U;
si0*=si1;
l5=si0;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L2;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si0=l3;
si1=44739243U;
si0=si0 < si1;
si1=2U;
si0<<=(si1&31);
l1=si0;
si0=l5;
if(si0){
goto L6;
}
si0=l1;
l4=si0;
goto L5;
L6:;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=l1;
si1=l5;
si0=si0 <= si1;
if(si0){
goto L7;
}
si0=l1;
si1=l5;
si0=f15277(i,si0,si1);
l4=si0;
goto L5;
L7:;
si0=l5;
si0=f15269(i,si0);
l4=si0;
L5:;
si0=l4;
si0=!(si0);
if(si0){
goto L1;
}
si0=l3;
si1=48U;
si0*=si1;
l7=si0;
si0=0U;
l5=si0;
si0=l3;
l8=si0;
L8:;
{
si0=l7;
si1=l5;
si0=si0 == si1;
if(si0){
goto L3;
}
si0=l2;
si1=l6;
si2=l5;
si1+=si2;
f650(i,si0,si1);
si0=l4;
si1=l5;
si0+=si1;
l1=si0;
si1=40U;
si0+=si1;
si1=l2;
si2=40U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si1=32U;
si0+=si1;
si1=l2;
si2=32U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si1=24U;
si0+=si1;
si1=l2;
si2=24U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si1=16U;
si0+=si1;
si1=l2;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si1=8U;
si0+=si1;
si1=l2;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si1=l2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=48U;
si0+=si1;
l5=si0;
si0=l8;
si1=-1U;
si0+=si1;
l8=si0;
if(si0){
goto L8;
}
}
L3:;
si0=l0;
si1=l3;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l0;
si1=l3;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l4;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=48U;
si0+=si1;
i->g0=si0;
goto L0;
L2:;
f53(i);
UNREACHABLE;
L1:;
si0=l1;
si1=l5;
f52(i,si0,si1);
UNREACHABLE;
L0:;
}

void f300(rustpythonInstance*i,U32 l0) {
U32 l1=0;
U32 si0,si1;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+8U);
l1=si0;
si0=!(si0);
if(si0){
goto L1;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
l0=si0;
L2:;
{
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L3;
}
si0=l0;
si1=4U;
si0+=si1;
f469(i,si0);
L3:;
si0=l0;
si1=16U;
si0+=si1;
l0=si0;
si0=l1;
si1=-1U;
si0+=si1;
l1=si0;
if(si0){
goto L2;
}
}
L1:;
L0:;
}

void f301(rustpythonInstance*i,U32 l0) {
U32 l1=0;
U32 si0,si1;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+8U);
l1=si0;
si0=!(si0);
if(si0){
goto L1;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
l0=si0;
L2:;
{
si0=l0;
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L3;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
f15271(i,si0);
L3:;
si0=l0;
si1=12U;
si0+=si1;
l0=si0;
si0=l1;
si1=-1U;
si0+=si1;
l1=si0;
if(si0){
goto L2;
}
}
L1:;
L0:;
}

void f302(rustpythonInstance*i,U32 l0,U32 l1) {
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
U32 si0,si1,si2,si3;
si0=0U;
l2=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+16U);
l3=si0;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+12U);
l4=si1;
si0=si0 < si1;
if(si0){
goto L1;
}
si0=l3;
si1=l1;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
l5=si1;
si0=si0 > si1;
if(si0){
goto L1;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+20U);
l6=si0;
si1=l1;
si2=24U;
si1+=si2;
l7=si1;
si0+=si1;
si1=-1U;
si0+=si1;
l8=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
l9=si0;
si0=l6;
si1=5U;
si0=si0 < si1;
l10=si0;
L2:;
{
si0=l9;
si1=l4;
si0+=si1;
l11=si0;
si0=l8;
si0=i32_load8_u(&i->m0,(U64)si0);
l12=si0;
si0=l3;
si1=l4;
si0-=si1;
l13=si0;
si1=8U;
si0=si0 < si1;
if(si0){
goto L8;
}
si0=l11;
si1=3U;
si0+=si1;
si1=-4U;
si0&=si1;
l2=si0;
si1=l11;
si0=si0 == si1;
if(si0){
goto L7;
}
si0=l2;
si1=l11;
si0-=si1;
l14=si0;
si0=!(si0);
if(si0){
goto L7;
}
si0=0U;
l2=si0;
L9:;
{
si0=l11;
si1=l2;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=l12;
si0=si0 == si1;
if(si0){
goto L3;
}
si0=l14;
si1=l2;
si2=1U;
si1+=si2;
l2=si1;
si0=si0 != si1;
if(si0){
goto L9;
}
}
si0=l14;
si1=l13;
si2=-8U;
si1+=si2;
l15=si1;
si0=si0 > si1;
if(si0){
goto L5;
}
goto L6;
L8:;
si0=l3;
si1=l4;
si0=si0 == si1;
if(si0){
goto L4;
}
si0=0U;
l2=si0;
L10:;
{
si0=l11;
si1=l2;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=l12;
si0=si0 == si1;
if(si0){
goto L3;
}
si0=l13;
si1=l2;
si2=1U;
si1+=si2;
l2=si1;
si0=si0 != si1;
if(si0){
goto L10;
}
goto L4;
}
L7:;
si0=l13;
si1=-8U;
si0+=si1;
l15=si0;
si0=0U;
l14=si0;
L6:;
si0=l12;
si1=16843009U;
si0*=si1;
l2=si0;
L11:;
{
si0=l11;
si1=l14;
si0+=si1;
l16=si0;
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
goto L5;
}
si0=l16;
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
goto L5;
}
si0=l14;
si1=8U;
si0+=si1;
l14=si0;
si1=l15;
si0=si0 <= si1;
if(si0){
goto L11;
}
}
L5:;
si0=l13;
si1=l14;
si0=si0 == si1;
if(si0){
goto L4;
}
L12:;
{
si0=l11;
si1=l14;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=l12;
si0=si0 != si1;
if(si0){
goto L13;
}
si0=l14;
l2=si0;
goto L3;
L13:;
si0=l13;
si1=l14;
si2=1U;
si1+=si2;
l14=si1;
si0=si0 != si1;
if(si0){
goto L12;
}
}
L4:;
si0=l1;
si1=l3;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
goto L0;
L3:;
si0=l1;
si1=l2;
si2=l4;
si1+=si2;
si2=1U;
si1+=si2;
l4=si1;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l4;
si1=l6;
si0=si0 < si1;
if(si0){
goto L14;
}
si0=l4;
si1=l5;
si0=si0 > si1;
l2=si0;
if(si0){
goto L14;
}
si0=l10;
si0=!(si0);
if(si0){
goto L15;
}
si0=0U;
si1=l9;
si2=l4;
si3=l6;
si2-=si3;
l14=si2;
si1+=si2;
si2=l2;
si0=si2?si0:si1;
si1=l7;
si2=l6;
si0=f15389(i,si0,si1,si2);
if(si0){
goto L14;
}
si0=l0;
si1=l14;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=8U;
si0+=si1;
si1=l4;
i32_store(&i->m0,(U64)si0,si1);
si0=1U;
l2=si0;
goto L1;
L15:;
si0=l6;
si1=4U;
si2=1086400U;
f666(i,si0,si1,si2);
UNREACHABLE;
L14:;
si0=l3;
si1=l4;
si0=si0 >= si1;
if(si0){
goto L2;
}
}
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
goto L0;
L1:;
si0=l0;
si1=l2;
i32_store(&i->m0,(U64)si0,si1);
L0:;
}

void f303(rustpythonInstance*i,U32 l0,U32 l1) {
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
U64 sj1;
si0=i->g0;
si1=64U;
si0-=si1;
l2=si0;
i->g0=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+8U);
l3=si0;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+12U);
l4=si1;
si0=si0 >= si1;
if(si0){
goto L5;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
l5=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
L7:;
{
si0=l5;
l7=si0;
si0=l6;
si1=l5;
si0=si0 == si1;
if(si0){
goto L8;
}
si0=l1;
si1=l6;
si2=8U;
si1+=si2;
l7=si1;
i32_store(&i->m0,(U64)si0,si1);
si0=l6;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L6;
}
L8:;
si0=l1;
si1=l3;
si2=1U;
si1+=si2;
l3=si1;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l7;
l6=si0;
si0=l4;
si1=l3;
si0=si0 != si1;
if(si0){
goto L7;
}
goto L5;
}
L6:;
si0=l1;
si1=l3;
si2=1U;
si1+=si2;
l3=si1;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l1;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+20U);
si2=1U;
si1+=si2;
l8=si1;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l2;
si1=l6;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l2;
si1=32U;
si0+=si1;
si1=12U;
si0+=si1;
sj1=1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=2U;
i32_store(&i->m0,(U64)si0+36U,si1);
si0=l2;
si1=1087072U;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l2;
si1=165U;
i32_store(&i->m0,(U64)si0+60U,si1);
si0=l2;
si1=l2;
si2=56U;
si1+=si2;
i32_store(&i->m0,(U64)si0+40U,si1);
si0=l2;
si1=l2;
si2=28U;
si1+=si2;
i32_store(&i->m0,(U64)si0+56U,si1);
si0=l2;
si1=16U;
si0+=si1;
si1=l2;
si2=32U;
si1+=si2;
f63(i,si0,si1);
si0=l2;
si0=i32_load(&i->m0,(U64)si0+16U);
if(si0){
goto L4;
}
L5:;
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l0;
sj1=4ULL;
i64_store(&i->m0,(U64)si0,sj1);
goto L3;
L4:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+16U);
l9=si0;
si1=l8;
si0-=si1;
si1=1U;
si0+=si1;
l6=si0;
si1=-1U;
si2=l6;
si0=si2?si0:si1;
l6=si0;
si1=4U;
si2=l6;
si3=4U;
si2=si2 > si3;
si0=si2?si0:si1;
l6=si0;
si1=178956970U;
si0=si0 > si1;
if(si0){
goto L1;
}
si0=l6;
si1=12U;
si0*=si1;
l10=si0;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L1;
}
si0=l6;
si1=178956971U;
si0=si0 < si1;
si1=2U;
si0<<=(si1&31);
l11=si0;
si0=l10;
if(si0){
goto L10;
}
si0=l11;
l1=si0;
goto L9;
L10:;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=l11;
si1=l10;
si0=si0 <= si1;
if(si0){
goto L11;
}
si0=l11;
si1=l10;
si0=f15277(i,si0,si1);
l1=si0;
goto L9;
L11:;
si0=l10;
si0=f15269(i,si0);
l1=si0;
L9:;
si0=l1;
si0=!(si0);
if(si0){
goto L2;
}
si0=l1;
si1=l2;
sj1=i64_load(&i->m0,(U64)si1+16U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si1=8U;
si0+=si1;
si1=l2;
si2=16U;
si1+=si2;
si2=8U;
si1+=si2;
l11=si1;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=1U;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l2;
si1=l6;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l2;
si1=l1;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=l4;
si0=si0 >= si1;
if(si0){
goto L12;
}
si0=1U;
l10=si0;
L13:;
{
si0=l7;
l6=si0;
L15:;
{
si0=l5;
l7=si0;
si0=l6;
si1=l5;
si0=si0 == si1;
if(si0){
goto L16;
}
si0=l6;
si1=8U;
si0+=si1;
l7=si0;
si0=l6;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L14;
}
L16:;
si0=l7;
l6=si0;
si0=l4;
si1=l3;
si2=1U;
si1+=si2;
l3=si1;
si0=si0 != si1;
if(si0){
goto L15;
}
goto L12;
}
L14:;
si0=l2;
si1=l6;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l2;
si1=2U;
i32_store(&i->m0,(U64)si0+36U,si1);
si0=l2;
si1=1087072U;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l2;
sj1=1ULL;
i64_store(&i->m0,(U64)si0+44U,sj1);
si0=l2;
si1=165U;
i32_store(&i->m0,(U64)si0+60U,si1);
si0=l2;
si1=l2;
si2=56U;
si1+=si2;
i32_store(&i->m0,(U64)si0+40U,si1);
si0=l2;
si1=l2;
si2=28U;
si1+=si2;
i32_store(&i->m0,(U64)si0+56U,si1);
si0=l2;
si1=16U;
si0+=si1;
si1=l2;
si2=32U;
si1+=si2;
f63(i,si0,si1);
si0=l2;
si0=i32_load(&i->m0,(U64)si0+16U);
si0=!(si0);
if(si0){
goto L12;
}
si0=l8;
si1=1U;
si0+=si1;
l8=si0;
si0=l3;
si1=1U;
si0+=si1;
l3=si0;
si0=l10;
si1=l2;
si1=i32_load(&i->m0,(U64)si1+4U);
si0=si0 != si1;
if(si0){
goto L17;
}
si0=l2;
si1=l10;
si2=l9;
si3=l8;
si2-=si3;
si3=1U;
si2+=si3;
l6=si2;
si3=-1U;
si4=l6;
si2=si4?si2:si3;
f574(i,si0,si1,si2);
si0=l2;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
L17:;
si0=l1;
si1=l10;
si2=12U;
si1*=si2;
si0+=si1;
l6=si0;
si1=l2;
sj1=i64_load(&i->m0,(U64)si1+16U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l6;
si1=8U;
si0+=si1;
si1=l11;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=l10;
si2=1U;
si1+=si2;
l10=si1;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l3;
si1=l4;
si0=si0 < si1;
if(si0){
goto L13;
}
}
L12:;
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
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
L3:;
si0=l2;
si1=64U;
si0+=si1;
i->g0=si0;
goto L0;
L2:;
si0=l11;
si1=l10;
f52(i,si0,si1);
UNREACHABLE;
L1:;
f53(i);
UNREACHABLE;
L0:;
}

void f304(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
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
si1=8U;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L5;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
if(si0){
goto L3;
}
L5:;
si0=l1;
si1=12U;
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
si0=l1;
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=32U;
si0=f15269(i,si0);
l6=si0;
si0=!(si0);
if(si0){
goto L6;
}
si0=l6;
si1=l5;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l6;
si1=l4;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
sj1=4294967300ULL;
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l3;
si1=l6;
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
si1=12U;
si0+=si1;
l5=si0;
si1=l2;
si0=si0 == si1;
if(si0){
goto L7;
}
si0=1U;
l7=si0;
L8:;
{
si0=l5;
l1=si0;
L10:;
{
si0=l1;
si1=8U;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L11;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
if(si0){
goto L9;
}
L11:;
si0=l1;
si1=12U;
si0+=si1;
l1=si0;
si1=l2;
si0=si0 == si1;
if(si0){
goto L7;
}
goto L10;
}
L9:;
si0=l1;
si1=12U;
si0+=si1;
l5=si0;
si0=l1;
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si0=l7;
si1=l3;
si1=i32_load(&i->m0,(U64)si1+4U);
si0=si0 != si1;
if(si0){
goto L12;
}
si0=l3;
si1=l7;
si2=1U;
f576(i,si0,si1,si2);
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
L12:;
si0=l6;
si1=l7;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l8=si0;
si1=l1;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l8;
si1=l4;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=l7;
si2=1U;
si1+=si2;
l7=si1;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l5;
si1=l2;
si0=si0 != si1;
if(si0){
goto L8;
}
}
L7:;
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
L6:;
si0=4U;
si1=32U;
f52(i,si0,si1);
UNREACHABLE;
L2:;
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l0;
sj1=4ULL;
i64_store(&i->m0,(U64)si0,sj1);
L1:;
si0=l3;
si1=16U;
si0+=si1;
i->g0=si0;
L0:;
}

void f305(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 l3=0;
U64 l4=0;
U32 l5=0;
U32 l6=0;
U64 l7=0;
U32 l8=0;
U32 l9=0;
U32 l10=0;
U32 l11=0;
U32 l12=0;
U32 si0,si1,si2,si3,si4;
U64 sj0,sj1,sj2;
si0=i->g0;
si1=16U;
si0-=si1;
l2=si0;
i->g0=si0;
si0=l1;
si1=24U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=!(si0);
if(si0){
goto L4;
}
si0=l1;
sj0=i64_load(&i->m0,(U64)si0);
l4=sj0;
sj1=0ULL;
si0=sj0 != sj1;
if(si0){
goto L5;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+16U);
l5=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+8U);
l6=si0;
L6:;
{
si0=l5;
si1=-320U;
si0+=si1;
l5=si0;
si0=l6;
sj0=i64_load(&i->m0,(U64)si0);
l7=sj0;
si0=l6;
si1=8U;
si0+=si1;
l8=si0;
l6=si0;
sj0=l7;
sj1=-1ULL;
sj0^=sj1;
sj1=-9187201950435737472ULL;
sj0&=sj1;
l4=sj0;
si0=!(sj0);
if(si0){
goto L6;
}
}
si0=l1;
si1=l5;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l1;
si1=l8;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l1;
si1=24U;
si0+=si1;
si1=l3;
si2=-1U;
si1+=si2;
l3=si1;
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
sj1=l4;
sj2=-1ULL;
sj1+=sj2;
sj2=l4;
sj1&=sj2;
l7=sj1;
i64_store(&i->m0,(U64)si0,sj1);
goto L3;
L5:;
si0=l1;
si1=24U;
si0+=si1;
si1=l3;
si2=-1U;
si1+=si2;
l3=si1;
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
sj1=l4;
sj2=-1ULL;
sj1+=sj2;
sj2=l4;
sj1&=sj2;
l7=sj1;
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+16U);
l5=si0;
if(si0){
goto L3;
}
L4:;
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l0;
sj1=4ULL;
i64_store(&i->m0,(U64)si0,sj1);
goto L2;
L3:;
si0=l3;
si1=1U;
si0+=si1;
l6=si0;
si1=-1U;
si2=l6;
si0=si2?si0:si1;
l6=si0;
si1=4U;
si2=l6;
si3=4U;
si2=si2 > si3;
si0=si2?si0:si1;
l6=si0;
si1=268435455U;
si0=si0 > si1;
if(si0){
goto L9;
}
si0=l6;
si1=3U;
si0<<=(si1&31);
l8=si0;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L9;
}
si0=l6;
si1=268435456U;
si0=si0 < si1;
si1=2U;
si0<<=(si1&31);
l9=si0;
si0=l5;
si1=0U;
sj2=l4;
sj2=I64_CTZ(sj2);
si2=(U32)(sj2);
si3=3U;
si2>>=(si3&31);
si1-=si2;
si2=40U;
si1*=si2;
si0+=si1;
si1=-40U;
si0+=si1;
l10=si0;
si0=i32_load(&i->m0,(U64)si0);
l11=si0;
si0=l10;
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l10=si0;
si0=l8;
if(si0){
goto L8;
}
si0=l9;
l12=si0;
goto L7;
L9:;
f53(i);
UNREACHABLE;
L8:;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=l9;
si1=l8;
si0=si0 <= si1;
if(si0){
goto L10;
}
si0=l9;
si1=l8;
si0=f15277(i,si0,si1);
l12=si0;
goto L7;
L10:;
si0=l8;
si0=f15269(i,si0);
l12=si0;
L7:;
si0=l12;
si0=!(si0);
if(si0){
goto L1;
}
si0=l12;
si1=l10;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l12;
si1=l11;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=1U;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l2;
si1=l6;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l2;
si1=l12;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si0=!(si0);
if(si0){
goto L11;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+8U);
l8=si0;
si0=1U;
l1=si0;
L12:;
{
sj0=l7;
sj1=0ULL;
si0=sj0 != sj1;
if(si0){
goto L13;
}
si0=l8;
l6=si0;
L14:;
{
si0=l5;
si1=-320U;
si0+=si1;
l5=si0;
si0=l6;
sj0=i64_load(&i->m0,(U64)si0);
l7=sj0;
si0=l6;
si1=8U;
si0+=si1;
l8=si0;
l6=si0;
sj0=l7;
sj1=-1ULL;
sj0^=sj1;
sj1=-9187201950435737472ULL;
sj0&=sj1;
l7=sj0;
si0=!(sj0);
if(si0){
goto L14;
}
}
L13:;
si0=l3;
si1=-1U;
si0+=si1;
l3=si0;
sj0=l7;
sj1=-1ULL;
sj0+=sj1;
l4=sj0;
si0=l5;
si1=0U;
sj2=l7;
sj2=I64_CTZ(sj2);
si2=(U32)(sj2);
si3=3U;
si2>>=(si3&31);
si1-=si2;
si2=40U;
si1*=si2;
si0+=si1;
si1=-40U;
si0+=si1;
l6=si0;
si0=i32_load(&i->m0,(U64)si0);
l9=si0;
si0=l6;
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si0=l1;
si1=l2;
si1=i32_load(&i->m0,(U64)si1+4U);
si0=si0 != si1;
if(si0){
goto L15;
}
si0=l2;
si1=l1;
si2=l3;
si3=1U;
si2+=si3;
l10=si2;
si3=-1U;
si4=l10;
si2=si4?si2:si3;
f576(i,si0,si1,si2);
si0=l2;
si0=i32_load(&i->m0,(U64)si0);
l12=si0;
L15:;
sj0=l4;
sj1=l7;
sj0&=sj1;
l7=sj0;
si0=l12;
si1=l1;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l10=si0;
si1=l6;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l10;
si1=l9;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=l1;
si2=1U;
si1+=si2;
l1=si1;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l3;
if(si0){
goto L12;
}
}
L11:;
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
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
L2:;
si0=l2;
si1=16U;
si0+=si1;
i->g0=si0;
goto L0;
L1:;
si0=l9;
si1=l8;
f52(i,si0,si1);
UNREACHABLE;
L0:;
}

void f306(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 l8=0;
U32 si0,si1,si2,si3;
si0=i->g0;
si1=16U;
si0-=si1;
l3=si0;
i->g0=si0;
si0=l2;
si1=l1;
si0-=si1;
l4=si0;
si1=12U;
si0=DIV_U(si0,si1);
l5=si0;
si0=l2;
si1=l1;
si0=si0 != si1;
if(si0){
goto L5;
}
si0=0U;
l1=si0;
si0=4U;
l6=si0;
goto L4;
L5:;
si0=l4;
si1=-1073741825U;
si0=si0 > si1;
if(si0){
goto L3;
}
si0=l5;
si1=3U;
si0<<=(si1&31);
l2=si0;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L3;
}
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=l2;
si0=f15269(i,si0);
l6=si0;
si0=!(si0);
if(si0){
goto L2;
}
si0=l6;
l2=si0;
si0=l5;
l4=si0;
L6:;
{
si0=l3;
si1=l1;
si1=i32_load(&i->m0,(U64)si1);
si2=l1;
si3=8U;
si2+=si3;
si2=i32_load(&i->m0,(U64)si2);
f756(i,si0,si1,si2);
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L1;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0+4U);
l7=si0;
si0=!(si0);
if(si0){
goto L1;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0+8U);
l8=si0;
si0=l2;
si1=l7;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=4U;
si0+=si1;
si1=l8;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=8U;
si0+=si1;
l2=si0;
si0=l1;
si1=12U;
si0+=si1;
l1=si0;
si0=l4;
si1=-1U;
si0+=si1;
l4=si0;
if(si0){
goto L6;
}
}
si0=l5;
l1=si0;
L4:;
si0=l0;
si1=l1;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l0;
si1=l5;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l6;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=16U;
si0+=si1;
i->g0=si0;
goto L0;
L3:;
f53(i);
UNREACHABLE;
L2:;
si0=4U;
si1=l2;
f52(i,si0,si1);
UNREACHABLE;
L1:;
si0=1090984U;
si1=35U;
si2=1091124U;
f703(i,si0,si1,si2);
UNREACHABLE;
L0:;
}

void f307(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 l8=0;
U32 l9=0;
U32 si0,si1,si2,si3;
si0=l2;
si1=l1;
si0-=si1;
l3=si0;
si1=12U;
si0=DIV_U(si0,si1);
l4=si0;
si0=l2;
si1=l1;
si0=si0 != si1;
if(si0){
goto L5;
}
si0=0U;
l3=si0;
si0=4U;
l5=si0;
goto L4;
L5:;
si0=l3;
si1=-2147483645U;
si0=si0 > si1;
if(si0){
goto L2;
}
si0=l3;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L2;
}
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=l3;
si1=-2147483644U;
si0=si0 < si1;
si1=2U;
si0<<=(si1&31);
l2=si0;
si1=l3;
si0=si0 <= si1;
if(si0){
goto L7;
}
si0=l2;
si1=l3;
si0=f15277(i,si0,si1);
l5=si0;
goto L6;
L7:;
si0=l3;
si0=f15269(i,si0);
l5=si0;
L6:;
si0=l5;
si0=!(si0);
if(si0){
goto L3;
}
si0=l4;
l6=si0;
si0=0U;
l2=si0;
L8:;
{
si0=l1;
si1=l2;
si0+=si1;
l3=si0;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
si0=l3;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
if(si0){
goto L10;
}
si0=1U;
l8=si0;
goto L9;
L10:;
si0=l3;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L2;
}
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=l3;
si0=f15269(i,si0);
l8=si0;
si0=!(si0);
if(si0){
goto L1;
}
L9:;
si0=l5;
si1=l2;
si0+=si1;
l9=si0;
si1=l8;
si2=l7;
si3=l3;
si1=f15390(i,si1,si2,si3);
i32_store(&i->m0,(U64)si0,si1);
si0=l9;
si1=8U;
si0+=si1;
si1=l3;
i32_store(&i->m0,(U64)si0,si1);
si0=l9;
si1=4U;
si0+=si1;
si1=l3;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=12U;
si0+=si1;
l2=si0;
si0=l6;
si1=-1U;
si0+=si1;
l6=si0;
if(si0){
goto L8;
}
}
si0=l4;
l3=si0;
L4:;
si0=l0;
si1=l3;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l0;
si1=l4;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l5;
i32_store(&i->m0,(U64)si0,si1);
goto L0;
L3:;
si0=l2;
si1=l3;
f52(i,si0,si1);
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

void f308(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 l3=0;
U64 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 si0,si1,si2;
U64 sj0,sj1;
si0=i->g0;
si1=96U;
si0-=si1;
l2=si0;
i->g0=si0;
si0=l2;
si1=32U;
si0+=si1;
si1=l1;
f277(i,si0,si1);
si0=l2;
si0=i32_load(&i->m0,(U64)si0+40U);
l3=si0;
if(si0){
goto L3;
}
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l0;
sj1=8ULL;
i64_store(&i->m0,(U64)si0,sj1);
goto L2;
L3:;
si0=l2;
sj0=i64_load(&i->m0,(U64)si0+32U);
l4=sj0;
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
si1=l3;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l5;
sj1=l4;
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
sj1=4294967300ULL;
i64_store(&i->m0,(U64)si0+52U,sj1);
si0=l2;
si1=l5;
i32_store(&i->m0,(U64)si0+48U,si1);
si0=l2;
si1=64U;
si0+=si1;
si1=24U;
si0+=si1;
si1=l1;
si2=24U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=64U;
si0+=si1;
si1=16U;
si0+=si1;
si1=l1;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=64U;
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
i64_store(&i->m0,(U64)si0+64U,sj1);
si0=l2;
si1=16U;
si0+=si1;
si1=l2;
si2=64U;
si1+=si2;
f277(i,si0,si1);
si0=l2;
si0=i32_load(&i->m0,(U64)si0+24U);
l6=si0;
si0=!(si0);
if(si0){
goto L4;
}
si0=l2;
sj0=i64_load(&i->m0,(U64)si0+16U);
l4=sj0;
si0=16U;
l3=si0;
si0=1U;
l1=si0;
L5:;
{
si0=l1;
si1=l2;
si1=i32_load(&i->m0,(U64)si1+52U);
si0=si0 != si1;
if(si0){
goto L6;
}
si0=l2;
si1=48U;
si0+=si1;
si1=l1;
si2=1U;
f579(i,si0,si1,si2);
si0=l2;
si0=i32_load(&i->m0,(U64)si0+48U);
l5=si0;
L6:;
si0=l5;
si1=l3;
si0+=si1;
l7=si0;
sj1=l4;
i64_store(&i->m0,(U64)si0,sj1);
si0=l7;
si1=8U;
si0+=si1;
si1=l6;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=l1;
si2=1U;
si1+=si2;
l1=si1;
i32_store(&i->m0,(U64)si0+56U,si1);
si0=l3;
si1=16U;
si0+=si1;
l3=si0;
si0=l2;
si1=l2;
si2=64U;
si1+=si2;
f277(i,si0,si1);
si0=l2;
sj0=i64_load(&i->m0,(U64)si0);
l4=sj0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+8U);
l6=si0;
if(si0){
goto L5;
}
}
L4:;
si0=l0;
si1=l2;
sj1=i64_load(&i->m0,(U64)si1+48U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=8U;
si0+=si1;
si1=l2;
si2=48U;
si1+=si2;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
L2:;
si0=l2;
si1=96U;
si0+=si1;
i->g0=si0;
goto L0;
L1:;
si0=8U;
si1=64U;
f52(i,si0,si1);
UNREACHABLE;
L0:;
}

void f309(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 si0,si1,si2;
U64 sj1;
si0=i->g0;
si1=64U;
si0-=si1;
l2=si0;
i->g0=si0;
si0=4U;
l3=si0;
si0=l1;
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
si1=l1;
si1=i32_load(&i->m0,(U64)si1);
l5=si1;
si0-=si1;
l6=si0;
si1=3U;
si0>>=(si1&31);
l7=si0;
si0=l4;
si1=l5;
si0=si0 != si1;
if(si0){
goto L4;
}
si0=0U;
l1=si0;
goto L3;
L4:;
si0=l6;
si1=1431655767U;
si0=si0 > si1;
if(si0){
goto L2;
}
si0=l7;
si1=12U;
si0*=si1;
l4=si0;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L2;
}
si0=l6;
si1=1431655768U;
si0=si0 < si1;
si1=2U;
si0<<=(si1&31);
l6=si0;
si0=l4;
if(si0){
goto L6;
}
si0=l6;
l3=si0;
goto L5;
L6:;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=l6;
si1=l4;
si0=si0 <= si1;
if(si0){
goto L7;
}
si0=l6;
si1=l4;
si0=f15277(i,si0,si1);
l3=si0;
goto L5;
L7:;
si0=l4;
si0=f15269(i,si0);
l3=si0;
L5:;
si0=l3;
si0=!(si0);
if(si0){
goto L1;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+8U);
l4=si0;
si0=l3;
l1=si0;
si0=l7;
l6=si0;
L8:;
{
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
si0=i32_load8_u(&i->m0,(U64)si0+16U);
switch(si0){
case 0:
goto L11;
case 1:
goto L11;
case 2:
goto L10;
default:
goto L11;
}
L11:;
si0=l2;
si1=2U;
i32_store(&i->m0,(U64)si0+56U,si1);
goto L9;
L10:;
si0=l2;
si1=3U;
i32_store(&i->m0,(U64)si0+56U,si1);
L9:;
si0=l2;
si1=l5;
i32_store(&i->m0,(U64)si0+60U,si1);
si0=l2;
si1=166U;
i32_store(&i->m0,(U64)si0+52U,si1);
si0=l2;
si1=1U;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l2;
si1=1091240U;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l2;
sj1=1ULL;
i64_store(&i->m0,(U64)si0+36U,sj1);
si0=l2;
si1=l2;
si2=56U;
si1+=si2;
i32_store(&i->m0,(U64)si0+48U,si1);
si0=l2;
si1=l2;
si2=48U;
si1+=si2;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l2;
si1=8U;
si0+=si1;
si1=l2;
si2=24U;
si1+=si2;
f63(i,si0,si1);
si0=l1;
si1=8U;
si0+=si1;
si1=l2;
si2=8U;
si1+=si2;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
si1=l2;
sj1=i64_load(&i->m0,(U64)si1+8U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si1=12U;
si0+=si1;
l1=si0;
si0=l5;
si1=8U;
si0+=si1;
l5=si0;
si0=l6;
si1=-1U;
si0+=si1;
l6=si0;
if(si0){
goto L8;
}
}
si0=l7;
l1=si0;
L3:;
si0=l0;
si1=l1;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l0;
si1=l7;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l3;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=64U;
si0+=si1;
i->g0=si0;
goto L0;
L2:;
f53(i);
UNREACHABLE;
L1:;
si0=l6;
si1=l4;
f52(i,si0,si1);
UNREACHABLE;
L0:;
}

void f310(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 l8=0;
U32 si0,si1,si2,si3;
U64 sj1;
si0=i->g0;
si1=96U;
si0-=si1;
l2=si0;
i->g0=si0;
si0=l1;
si0=i32_load8_u(&i->m0,(U64)si0+37U);
if(si0){
goto L4;
}
si0=l1;
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=l2;
si1=16U;
si0+=si1;
si1=l1;
f302(i,si0,si1);
si0=l2;
si0=i32_load(&i->m0,(U64)si0+16U);
if(si0){
goto L6;
}
si0=l1;
si0=i32_load8_u(&i->m0,(U64)si0+37U);
if(si0){
goto L4;
}
si0=l1;
si1=1U;
i32_store8(&i->m0,(U64)si0+37U,si1);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+28U);
l3=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+32U);
l4=si0;
si0=l1;
si0=i32_load8_u(&i->m0,(U64)si0+36U);
if(si0){
goto L7;
}
si0=l4;
si1=l3;
si0=si0 == si1;
if(si0){
goto L4;
}
L7:;
si0=l4;
si1=l3;
si0-=si1;
l4=si0;
si0=l1;
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=l3;
si0+=si1;
l3=si0;
goto L5;
L6:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+28U);
l4=si0;
si0=l1;
si1=l2;
si2=24U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
l5=si1;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l3;
si1=l4;
si0+=si1;
l3=si0;
si0=l5;
si1=l4;
si0-=si1;
l4=si0;
L5:;
si0=0U;
l5=si0;
si0=l4;
si0=!(si0);
if(si0){
goto L8;
}
si0=l3;
si1=l4;
si2=-1U;
si1+=si2;
l6=si1;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=10U;
si0=si0 == si1;
if(si0){
goto L9;
}
si0=l4;
l5=si0;
goto L8;
L9:;
si0=l6;
si0=!(si0);
if(si0){
goto L8;
}
si0=l4;
si1=-2U;
si0+=si1;
l4=si0;
si1=l6;
si2=l3;
si3=l4;
si2+=si3;
si2=i32_load8_u(&i->m0,(U64)si2);
si3=13U;
si2=si2 == si3;
si0=si2?si0:si1;
l5=si0;
L8:;
si0=l2;
si1=80U;
si0+=si1;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+40U);
si2=l3;
si3=l5;
f656(i,si0,si1,si2,si3);
si0=l2;
si0=i32_load(&i->m0,(U64)si0+80U);
if(si0){
goto L3;
}
L4:;
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l0;
sj1=4ULL;
i64_store(&i->m0,(U64)si0,sj1);
goto L2;
L3:;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=48U;
si0=f15269(i,si0);
l7=si0;
si0=!(si0);
if(si0){
goto L1;
}
si0=l7;
si1=l2;
sj1=i64_load(&i->m0,(U64)si1+80U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l7;
si1=8U;
si0+=si1;
si1=l2;
si2=80U;
si1+=si2;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
sj1=4294967300ULL;
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l2;
si1=l7;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=16U;
si0+=si1;
si1=40U;
si0+=si1;
si1=l1;
si2=40U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=16U;
si0+=si1;
si1=32U;
si0+=si1;
si1=l1;
si2=32U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=16U;
si0+=si1;
si1=24U;
si0+=si1;
si1=l1;
si2=24U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
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
si0=l2;
si1=l1;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+16U,sj1);
si0=l2;
si0=i32_load8_u(&i->m0,(U64)si0+53U);
if(si0){
goto L10;
}
si0=12U;
l3=si0;
si0=1U;
l4=si0;
L11:;
{
si0=l2;
si0=i32_load(&i->m0,(U64)si0+20U);
l6=si0;
si0=l2;
si1=80U;
si0+=si1;
si1=l2;
si2=16U;
si1+=si2;
f302(i,si0,si1);
si0=l2;
si0=i32_load(&i->m0,(U64)si0+80U);
if(si0){
goto L13;
}
si0=l2;
si0=i32_load8_u(&i->m0,(U64)si0+53U);
if(si0){
goto L10;
}
si0=l2;
si1=1U;
i32_store8(&i->m0,(U64)si0+53U,si1);
si0=l2;
si0=i32_load(&i->m0,(U64)si0+44U);
l5=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+48U);
l1=si0;
si0=l2;
si0=i32_load8_u(&i->m0,(U64)si0+52U);
if(si0){
goto L14;
}
si0=l1;
si1=l5;
si0=si0 == si1;
if(si0){
goto L10;
}
L14:;
si0=l1;
si1=l5;
si0-=si1;
l1=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=l5;
si0+=si1;
l5=si0;
goto L12;
L13:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+44U);
l5=si0;
si0=l2;
si1=l2;
si1=i32_load(&i->m0,(U64)si1+88U);
l1=si1;
i32_store(&i->m0,(U64)si0+44U,si1);
si0=l1;
si1=l5;
si0-=si1;
l1=si0;
si0=l6;
si1=l5;
si0+=si1;
l5=si0;
L12:;
si0=0U;
l6=si0;
si0=l1;
si0=!(si0);
if(si0){
goto L15;
}
si0=l5;
si1=l1;
si2=-1U;
si1+=si2;
l8=si1;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=10U;
si0=si0 == si1;
if(si0){
goto L16;
}
si0=l1;
l6=si0;
goto L15;
L16:;
si0=l8;
si0=!(si0);
if(si0){
goto L15;
}
si0=l1;
si1=-2U;
si0+=si1;
l1=si0;
si1=l8;
si2=l5;
si3=l1;
si2+=si3;
si2=i32_load8_u(&i->m0,(U64)si2);
si3=13U;
si2=si2 == si3;
si0=si2?si0:si1;
l6=si0;
L15:;
si0=l2;
si1=64U;
si0+=si1;
si1=l2;
si1=i32_load(&i->m0,(U64)si1+56U);
si2=l5;
si3=l6;
f656(i,si0,si1,si2,si3);
si0=l2;
si0=i32_load(&i->m0,(U64)si0+64U);
si0=!(si0);
if(si0){
goto L10;
}
si0=l4;
si1=l2;
si1=i32_load(&i->m0,(U64)si1+4U);
si0=si0 != si1;
if(si0){
goto L17;
}
si0=l2;
si1=l4;
si2=1U;
f574(i,si0,si1,si2);
si0=l2;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
L17:;
si0=l7;
si1=l3;
si0+=si1;
l1=si0;
si1=l2;
sj1=i64_load(&i->m0,(U64)si1+64U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si1=8U;
si0+=si1;
si1=l2;
si2=64U;
si1+=si2;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=l4;
si2=1U;
si1+=si2;
l4=si1;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l3;
si1=12U;
si0+=si1;
l3=si0;
si0=l2;
si0=i32_load8_u(&i->m0,(U64)si0+53U);
si0=!(si0);
if(si0){
goto L11;
}
}
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
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
L2:;
si0=l2;
si1=96U;
si0+=si1;
i->g0=si0;
goto L0;
L1:;
si0=4U;
si1=48U;
f52(i,si0,si1);
UNREACHABLE;
L0:;
}

void f311(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 l8=0;
U64 l9=0;
U32 l10=0;
U32 si0,si1,si2,si3;
U64 sj0,sj1;
si0=i->g0;
si1=16U;
si0-=si1;
l2=si0;
i->g0=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=l1;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
if(si0){
goto L7;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+16U);
l4=si0;
si0=i32_load(&i->m0,(U64)si0+8U);
l3=si0;
si1=l4;
si1=i32_load(&i->m0,(U64)si1+12U);
si0=si0 == si1;
if(si0){
goto L5;
}
si0=l4;
si1=l3;
si2=12U;
si1+=si2;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l3;
si1=4U;
si0+=si1;
l5=si0;
goto L6;
L7:;
si0=l1;
si1=8U;
si0+=si1;
l5=si0;
si0=l1;
si1=4U;
si0+=si1;
l3=si0;
L6:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
if(si0){
goto L4;
}
L5:;
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l0;
sj1=4ULL;
i64_store(&i->m0,(U64)si0,sj1);
goto L3;
L4:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+16U);
l7=si0;
si1=12U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=l7;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
si0-=si1;
si1=12U;
si0=DIV_U(si0,si1);
l3=si0;
si1=3U;
si2=l3;
si3=3U;
si2=si2 > si3;
si0=si2?si0:si1;
l4=si0;
si1=178956969U;
si0=si0 > si1;
if(si0){
goto L1;
}
si0=l4;
si1=1U;
si0+=si1;
l8=si0;
si1=12U;
si0*=si1;
l3=si0;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L1;
}
si0=l5;
sj0=i64_load(&i->m0,(U64)si0);
l9=sj0;
si0=l4;
si1=178956970U;
si0=si0 < si1;
si1=2U;
si0<<=(si1&31);
l4=si0;
si0=l3;
if(si0){
goto L9;
}
si0=l4;
l5=si0;
goto L8;
L9:;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=l4;
si1=l3;
si0=si0 <= si1;
if(si0){
goto L10;
}
si0=l4;
si1=l3;
si0=f15277(i,si0,si1);
l5=si0;
goto L8;
L10:;
si0=l3;
si0=f15269(i,si0);
l5=si0;
L8:;
si0=l5;
si0=!(si0);
if(si0){
goto L2;
}
si0=l5;
sj1=l9;
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l5;
si1=l6;
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=1U;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l2;
si1=l8;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l2;
si1=l5;
i32_store(&i->m0,(U64)si0,si1);
si0=l7;
si1=8U;
si0+=si1;
l4=si0;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si1=l7;
si2=12U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
si0=si0 == si1;
if(si0){
goto L11;
}
si0=l4;
si1=l3;
si2=12U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
si0=!(si0);
if(si0){
goto L11;
}
si0=l5;
si1=16U;
si0+=si1;
si1=l3;
sj1=i64_load(&i->m0,(U64)si1+4U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=l4;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l1;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=2U;
l4=si0;
si0=l2;
si1=2U;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l7;
si1=8U;
si0+=si1;
l6=si0;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si1=l7;
si2=12U;
si1+=si2;
l10=si1;
si1=i32_load(&i->m0,(U64)si1);
si0=si0 == si1;
if(si0){
goto L11;
}
si0=28U;
l7=si0;
L12:;
{
si0=l6;
si1=l3;
si2=12U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
l8=si0;
si0=!(si0);
if(si0){
goto L11;
}
si0=l3;
sj0=i64_load(&i->m0,(U64)si0+4U);
l9=sj0;
si0=l4;
si1=l2;
si1=i32_load(&i->m0,(U64)si1+4U);
si0=si0 != si1;
if(si0){
goto L13;
}
si0=l2;
si1=l4;
si2=l10;
si2=i32_load(&i->m0,(U64)si2);
si3=l6;
si3=i32_load(&i->m0,(U64)si3);
si2-=si3;
si3=12U;
si2=DIV_U(si2,si3);
si3=1U;
si2+=si3;
f574(i,si0,si1,si2);
si0=l2;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
L13:;
si0=l5;
si1=l7;
si0+=si1;
l3=si0;
sj1=l9;
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=-4U;
si0+=si1;
si1=l8;
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=l4;
si2=1U;
si1+=si2;
l4=si1;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l7;
si1=12U;
si0+=si1;
l7=si0;
si0=l6;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si1=l10;
si1=i32_load(&i->m0,(U64)si1);
si0=si0 != si1;
if(si0){
goto L12;
}
}
L11:;
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
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
L3:;
si0=l2;
si1=16U;
si0+=si1;
i->g0=si0;
goto L0;
L2:;
si0=l4;
si1=l3;
f52(i,si0,si1);
UNREACHABLE;
L1:;
f53(i);
UNREACHABLE;
L0:;
}

void f312(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 l3=0;
U64 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 si0,si1,si2;
U64 sj0,sj1;
si0=i->g0;
si1=96U;
si0-=si1;
l2=si0;
i->g0=si0;
si0=l2;
si1=40U;
si0+=si1;
si1=l1;
f278(i,si0,si1);
si0=l2;
si0=i32_load(&i->m0,(U64)si0+48U);
l3=si0;
if(si0){
goto L3;
}
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l0;
sj1=8ULL;
i64_store(&i->m0,(U64)si0,sj1);
goto L2;
L3:;
si0=l2;
sj0=i64_load(&i->m0,(U64)si0+40U);
l4=sj0;
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
si1=l3;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l5;
sj1=l4;
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
sj1=4294967300ULL;
i64_store(&i->m0,(U64)si0+60U,sj1);
si0=l2;
si1=l5;
i32_store(&i->m0,(U64)si0+56U,si1);
si0=l2;
si1=72U;
si0+=si1;
si1=16U;
si0+=si1;
si1=l1;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=72U;
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
i64_store(&i->m0,(U64)si0+72U,sj1);
si0=l2;
si1=24U;
si0+=si1;
si1=l2;
si2=72U;
si1+=si2;
f278(i,si0,si1);
si0=l2;
si0=i32_load(&i->m0,(U64)si0+32U);
l6=si0;
si0=!(si0);
if(si0){
goto L4;
}
si0=l2;
sj0=i64_load(&i->m0,(U64)si0+24U);
l4=sj0;
si0=16U;
l3=si0;
si0=1U;
l1=si0;
L5:;
{
si0=l1;
si1=l2;
si1=i32_load(&i->m0,(U64)si1+60U);
si0=si0 != si1;
if(si0){
goto L6;
}
si0=l2;
si1=56U;
si0+=si1;
si1=l1;
si2=1U;
f579(i,si0,si1,si2);
si0=l2;
si0=i32_load(&i->m0,(U64)si0+56U);
l5=si0;
L6:;
si0=l5;
si1=l3;
si0+=si1;
l7=si0;
sj1=l4;
i64_store(&i->m0,(U64)si0,sj1);
si0=l7;
si1=8U;
si0+=si1;
si1=l6;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=l1;
si2=1U;
si1+=si2;
l1=si1;
i32_store(&i->m0,(U64)si0+64U,si1);
si0=l3;
si1=16U;
si0+=si1;
l3=si0;
si0=l2;
si1=8U;
si0+=si1;
si1=l2;
si2=72U;
si1+=si2;
f278(i,si0,si1);
si0=l2;
sj0=i64_load(&i->m0,(U64)si0+8U);
l4=sj0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+16U);
l6=si0;
if(si0){
goto L5;
}
}
L4:;
si0=l0;
si1=l2;
sj1=i64_load(&i->m0,(U64)si1+56U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=8U;
si0+=si1;
si1=l2;
si2=56U;
si1+=si2;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
L2:;
si0=l2;
si1=96U;
si0+=si1;
i->g0=si0;
goto L0;
L1:;
si0=8U;
si1=64U;
f52(i,si0,si1);
UNREACHABLE;
L0:;
}

void f313(rustpythonInstance*i,U32 l0,U32 l1) {
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
U32 si0,si1,si2;
U64 sj0,sj1;
si0=i->g0;
si1=32U;
si0-=si1;
l2=si0;
i->g0=si0;
si0=l2;
si1=l1;
si2=8U;
si1+=si2;
l3=si1;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
si1=l1;
si2=4U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
l5=si1;
si0=si0 == si1;
if(si0){
goto L4;
}
L5:;
{
si0=l1;
si1=l4;
si2=8U;
si1+=si2;
l6=si1;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=l4;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l2;
si1=24U;
si0+=si1;
si1=l2;
si2=28U;
si1+=si2;
si0=f551(i,si0,si1);
if(si0){
goto L3;
}
si0=l6;
l4=si0;
si0=l6;
si1=l5;
si0=si0 != si1;
if(si0){
goto L5;
}
}
L4:;
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l0;
sj1=4ULL;
i64_store(&i->m0,(U64)si0,sj1);
goto L2;
L3:;
si0=l4;
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=l1;
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l8=si0;
si0=32U;
si0=f15269(i,si0);
l9=si0;
si0=!(si0);
if(si0){
goto L1;
}
si0=l9;
si1=l6;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l9;
si1=l4;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
sj1=4294967300ULL;
i64_store(&i->m0,(U64)si0+12U,sj1);
si0=l2;
si1=l9;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l8;
si1=l7;
si0=si0 == si1;
if(si0){
goto L6;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
l10=si0;
si0=1U;
l11=si0;
L7:;
{
si0=l10;
si0=i32_load(&i->m0,(U64)si0);
l12=si0;
si1=232U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
si0=!(si0);
if(si0){
goto L9;
}
si0=l4;
si1=272U;
si0*=si1;
l13=si0;
si0=l12;
si0=i32_load(&i->m0,(U64)si0+224U);
si1=220U;
si0+=si1;
l14=si0;
L10:;
{
si0=l8;
l15=si0;
si1=8U;
si0+=si1;
l8=si0;
si0=l15;
si0=i32_load(&i->m0,(U64)si0+4U);
l1=si0;
si0=l13;
l6=si0;
si0=l14;
l4=si0;
L13:;
{
si0=l4;
si1=-32U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=l1;
si0=si0 != si1;
if(si0){
goto L14;
}
si0=l4;
si1=-36U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=l15;
si1=i32_load(&i->m0,(U64)si1);
si2=l1;
si0=f15389(i,si0,si1,si2);
si0=!(si0);
if(si0){
goto L12;
}
L14:;
si0=l4;
si1=272U;
si0+=si1;
l4=si0;
si0=l6;
si1=-272U;
si0+=si1;
l6=si0;
if(si0){
goto L13;
}
}
si0=l12;
si0=i32_load(&i->m0,(U64)si0+8U);
l16=si0;
si0=!(si0);
if(si0){
goto L8;
}
si0=l12;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
si1=l16;
si2=248U;
si1*=si2;
si0+=si1;
l5=si0;
si0=0U;
l3=si0;
L15:;
{
si0=l5;
l6=si0;
si0=l4;
si1=l5;
si0=si0 == si1;
if(si0){
goto L17;
}
si0=l4;
si1=248U;
si0+=si1;
l6=si0;
si0=l4;
sj0=i64_load(&i->m0,(U64)si0);
sj1=2ULL;
si0=sj0 != sj1;
if(si0){
goto L16;
}
L17:;
si0=l6;
l4=si0;
si0=l3;
si1=1U;
si0+=si1;
l3=si0;
si1=l16;
si0=si0 != si1;
if(si0){
goto L15;
}
goto L8;
L16:;
si0=l4;
si1=156U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=l1;
si0=si0 != si1;
if(si0){
goto L19;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0+152U);
si1=l15;
si1=i32_load(&i->m0,(U64)si1);
si2=l1;
si0=f15389(i,si0,si1,si2);
si0=!(si0);
if(si0){
goto L18;
}
L19:;
si0=l6;
l4=si0;
si0=l3;
si1=1U;
si0+=si1;
l3=si0;
si1=l16;
si0=si0 < si1;
if(si0){
goto L15;
}
goto L8;
L18:;
}
si0=l4;
si1=188U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=17U;
si0&=si1;
si1=16U;
si0=si0 == si1;
if(si0){
goto L8;
}
goto L11;
L12:;
si0=l4;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=17U;
si0&=si1;
si0=!(si0);
if(si0){
goto L8;
}
L11:;
si0=l8;
si1=l7;
si0=si0 != si1;
if(si0){
goto L10;
}
goto L6;
}
L9:;
si0=l12;
si0=i32_load(&i->m0,(U64)si0+8U);
l3=si0;
si0=!(si0);
if(si0){
goto L21;
}
si0=l12;
si0=i32_load(&i->m0,(U64)si0);
l15=si0;
si1=l3;
si2=248U;
si1*=si2;
si0+=si1;
l1=si0;
L22:;
{
si0=l8;
si1=8U;
si0+=si1;
l12=si0;
si0=0U;
l5=si0;
si0=l15;
l4=si0;
L23:;
{
si0=l1;
l6=si0;
si0=l4;
si1=l1;
si0=si0 == si1;
if(si0){
goto L24;
}
si0=l4;
si1=248U;
si0+=si1;
l6=si0;
si0=l4;
sj0=i64_load(&i->m0,(U64)si0);
sj1=2ULL;
si0=sj0 == sj1;
if(si0){
goto L24;
}
si0=l4;
si1=156U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l16=si0;
si1=l8;
si1=i32_load(&i->m0,(U64)si1+4U);
si0=si0 != si1;
if(si0){
goto L26;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0+152U);
si1=l8;
si1=i32_load(&i->m0,(U64)si1);
si2=l16;
si0=f15389(i,si0,si1,si2);
si0=!(si0);
if(si0){
goto L25;
}
L26:;
si0=l6;
l4=si0;
si0=l5;
si1=1U;
si0+=si1;
l5=si0;
si1=l3;
si0=si0 < si1;
if(si0){
goto L23;
}
goto L20;
L25:;
si0=l4;
si1=188U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=17U;
si0&=si1;
si1=16U;
si0=si0 == si1;
if(si0){
goto L20;
}
si0=l12;
l8=si0;
si0=l12;
si1=l7;
si0=si0 != si1;
if(si0){
goto L22;
}
goto L6;
L24:;
si0=l6;
l4=si0;
si0=l5;
si1=1U;
si0+=si1;
l5=si0;
si1=l3;
si0=si0 != si1;
if(si0){
goto L23;
}
goto L20;
}
}
L21:;
si0=l8;
l15=si0;
si0=l8;
si1=8U;
si0+=si1;
l8=si0;
goto L8;
L20:;
si0=l8;
l15=si0;
si0=l12;
l8=si0;
L8:;
si0=l15;
si0=i32_load(&i->m0,(U64)si0+4U);
l4=si0;
si0=l15;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si0=l11;
si1=l2;
si1=i32_load(&i->m0,(U64)si1+12U);
si0=si0 != si1;
if(si0){
goto L27;
}
si0=l2;
si1=8U;
si0+=si1;
si1=l11;
si2=1U;
f576(i,si0,si1,si2);
si0=l2;
si0=i32_load(&i->m0,(U64)si0+8U);
l9=si0;
L27:;
si0=l9;
si1=l11;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l1=si0;
si1=l4;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l1;
si1=l6;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=l11;
si2=1U;
si1+=si2;
l11=si1;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l8;
si1=l7;
si0=si0 != si1;
if(si0){
goto L7;
}
}
L6:;
si0=l0;
si1=l2;
sj1=i64_load(&i->m0,(U64)si1+8U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=8U;
si0+=si1;
si1=l2;
si2=8U;
si1+=si2;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
L2:;
si0=l2;
si1=32U;
si0+=si1;
i->g0=si0;
goto L0;
L1:;
si0=4U;
si1=32U;
f52(i,si0,si1);
UNREACHABLE;
L0:;
}

void f314(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 si0,si1,si2;
U64 sj1;
si0=i->g0;
si1=64U;
si0-=si1;
l2=si0;
i->g0=si0;
si0=l2;
si1=16U;
si0+=si1;
si1=l1;
f279(i,si0,si1);
si0=l2;
si0=i32_load(&i->m0,(U64)si0+16U);
if(si0){
goto L3;
}
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l0;
sj1=4ULL;
i64_store(&i->m0,(U64)si0,sj1);
goto L2;
L3:;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=48U;
si0=f15269(i,si0);
l3=si0;
si0=!(si0);
if(si0){
goto L1;
}
si0=l3;
si1=l2;
sj1=i64_load(&i->m0,(U64)si1+16U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=8U;
si0+=si1;
si1=l2;
si2=16U;
si1+=si2;
si2=8U;
si1+=si2;
l4=si1;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
sj1=4294967300ULL;
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l2;
si1=l3;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=16U;
si0+=si1;
si1=24U;
si0+=si1;
si1=l1;
si2=24U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
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
si0=l4;
si1=l1;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=l1;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+16U,sj1);
si0=l2;
si1=48U;
si0+=si1;
si1=l2;
si2=16U;
si1+=si2;
f279(i,si0,si1);
si0=l2;
si0=i32_load(&i->m0,(U64)si0+48U);
si0=!(si0);
if(si0){
goto L4;
}
si0=12U;
l4=si0;
si0=1U;
l1=si0;
L5:;
{
si0=l1;
si1=l2;
si1=i32_load(&i->m0,(U64)si1+4U);
si0=si0 != si1;
if(si0){
goto L6;
}
si0=l2;
si1=l1;
si2=1U;
f574(i,si0,si1,si2);
si0=l2;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
L6:;
si0=l3;
si1=l4;
si0+=si1;
l5=si0;
si1=l2;
sj1=i64_load(&i->m0,(U64)si1+48U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=8U;
si0+=si1;
si1=l2;
si2=48U;
si1+=si2;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=l1;
si2=1U;
si1+=si2;
l1=si1;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l4;
si1=12U;
si0+=si1;
l4=si0;
si0=l2;
si1=48U;
si0+=si1;
si1=l2;
si2=16U;
si1+=si2;
f279(i,si0,si1);
si0=l2;
si0=i32_load(&i->m0,(U64)si0+48U);
if(si0){
goto L5;
}
}
L4:;
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
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
L2:;
si0=l2;
si1=64U;
si0+=si1;
i->g0=si0;
goto L0;
L1:;
si0=4U;
si1=48U;
f52(i,si0,si1);
UNREACHABLE;
L0:;
}

void f315(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 l8=0;
U32 si0,si1,si2,si3,si4,si5;
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
f280(i,si0,si1);
si0=l2;
si0=i32_load(&i->m0,(U64)si0+24U);
l3=si0;
if(si0){
goto L4;
}
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l0;
sj1=4ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+16U);
l4=si0;
si0=!(si0);
if(si0){
goto L5;
}
si0=l1;
si1=20U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L5;
}
si0=l4;
f15271(i,si0);
L5:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+32U);
l4=si0;
si0=!(si0);
if(si0){
goto L3;
}
si0=l1;
si1=36U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L3;
}
si0=l4;
f15271(i,si0);
goto L3;
L4:;
si0=l1;
si1=44U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=l1;
si2=40U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
si0-=si1;
si1=3U;
si0>>=(si1&31);
si1=0U;
si2=l1;
si3=32U;
si2+=si3;
si2=i32_load(&i->m0,(U64)si2);
si0=si2?si0:si1;
si1=l1;
si2=28U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
si2=l1;
si3=24U;
si2+=si3;
si2=i32_load(&i->m0,(U64)si2);
si1-=si2;
si2=3U;
si1>>=(si2&31);
si2=0U;
si3=l1;
si4=16U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si1=si3?si1:si2;
si0+=si1;
l4=si0;
si1=3U;
si2=l4;
si3=3U;
si2=si2 > si3;
si0=si2?si0:si1;
l5=si0;
si1=268435454U;
si0=si0 > si1;
if(si0){
goto L1;
}
si0=l5;
si1=1U;
si0+=si1;
l6=si0;
si1=3U;
si0<<=(si1&31);
l4=si0;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L1;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0+28U);
l7=si0;
si0=l5;
si1=268435455U;
si0=si0 < si1;
si1=2U;
si0<<=(si1&31);
l5=si0;
si0=l4;
if(si0){
goto L7;
}
si0=l5;
l8=si0;
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
l8=si0;
goto L6;
L8:;
si0=l4;
si0=f15269(i,si0);
l8=si0;
L6:;
si0=l8;
si0=!(si0);
if(si0){
goto L2;
}
si0=l8;
si1=l7;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l8;
si1=l3;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=1U;
i32_store(&i->m0,(U64)si0+40U,si1);
si0=l2;
si1=l6;
i32_store(&i->m0,(U64)si0+36U,si1);
si0=l2;
si1=l8;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l2;
si1=48U;
si0+=si1;
si1=40U;
si0+=si1;
si1=l1;
si2=40U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=48U;
si0+=si1;
si1=32U;
si0+=si1;
si1=l1;
si2=32U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=48U;
si0+=si1;
si1=24U;
si0+=si1;
si1=l1;
si2=24U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=48U;
si0+=si1;
si1=16U;
si0+=si1;
si1=l1;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=48U;
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
i64_store(&i->m0,(U64)si0+48U,sj1);
si0=l2;
si1=16U;
si0+=si1;
si1=l2;
si2=48U;
si1+=si2;
f280(i,si0,si1);
si0=l2;
si0=i32_load(&i->m0,(U64)si0+16U);
l5=si0;
si0=!(si0);
if(si0){
goto L9;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0+20U);
l3=si0;
si0=8U;
l4=si0;
si0=1U;
l1=si0;
L10:;
{
si0=l1;
si1=l2;
si1=i32_load(&i->m0,(U64)si1+36U);
si0=si0 != si1;
if(si0){
goto L11;
}
si0=l2;
si1=32U;
si0+=si1;
si1=l1;
si2=l2;
si2=i32_load(&i->m0,(U64)si2+76U);
si3=l2;
si3=i32_load(&i->m0,(U64)si3+72U);
si2-=si3;
si3=3U;
si2>>=(si3&31);
si3=0U;
si4=l2;
si4=i32_load(&i->m0,(U64)si4+64U);
si2=si4?si2:si3;
si3=l2;
si3=i32_load(&i->m0,(U64)si3+92U);
si4=l2;
si4=i32_load(&i->m0,(U64)si4+88U);
si3-=si4;
si4=3U;
si3>>=(si4&31);
si4=1U;
si3+=si4;
si4=1U;
si5=l2;
si5=i32_load(&i->m0,(U64)si5+80U);
si3=si5?si3:si4;
si2+=si3;
f576(i,si0,si1,si2);
si0=l2;
si0=i32_load(&i->m0,(U64)si0+32U);
l8=si0;
L11:;
si0=l8;
si1=l4;
si0+=si1;
l6=si0;
si1=l5;
i32_store(&i->m0,(U64)si0,si1);
si0=l6;
si1=4U;
si0+=si1;
si1=l3;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=l1;
si2=1U;
si1+=si2;
l1=si1;
i32_store(&i->m0,(U64)si0+40U,si1);
si0=l4;
si1=8U;
si0+=si1;
l4=si0;
si0=l2;
si1=8U;
si0+=si1;
si1=l2;
si2=48U;
si1+=si2;
f280(i,si0,si1);
si0=l2;
si0=i32_load(&i->m0,(U64)si0+12U);
l3=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+8U);
l5=si0;
if(si0){
goto L10;
}
}
L9:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+64U);
l1=si0;
si0=!(si0);
if(si0){
goto L12;
}
si0=l2;
si1=68U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L12;
}
si0=l1;
f15271(i,si0);
L12:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+80U);
l1=si0;
si0=!(si0);
if(si0){
goto L13;
}
si0=l2;
si1=84U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L13;
}
si0=l1;
f15271(i,si0);
L13:;
si0=l0;
si1=l2;
sj1=i64_load(&i->m0,(U64)si1+32U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=8U;
si0+=si1;
si1=l2;
si2=32U;
si1+=si2;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
L3:;
si0=l2;
si1=96U;
si0+=si1;
i->g0=si0;
goto L0;
L2:;
si0=l5;
si1=l4;
f52(i,si0,si1);
UNREACHABLE;
L1:;
f53(i);
UNREACHABLE;
L0:;
}

void f316(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 si0,si1,si2;
U64 sj1;
si0=i->g0;
si1=80U;
si0-=si1;
l2=si0;
i->g0=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+40U);
l3=si0;
switch(si0){
case 0:
goto L4;
case 1:
goto L5;
default:
goto L6;
}
L6:;
si0=l1;
si1=l3;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0+40U,si1);
si0=l1;
si0=i32_load8_u(&i->m0,(U64)si0+37U);
if(si0){
goto L4;
}
si0=l1;
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
si0=l2;
si1=16U;
si0+=si1;
si1=l1;
f302(i,si0,si1);
si0=l2;
si0=i32_load(&i->m0,(U64)si0+16U);
if(si0){
goto L3;
}
si0=l1;
si0=i32_load8_u(&i->m0,(U64)si0+37U);
if(si0){
goto L4;
}
si0=l1;
si1=1U;
i32_store8(&i->m0,(U64)si0+37U,si1);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+28U);
l3=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+32U);
l5=si0;
si0=l1;
si0=i32_load8_u(&i->m0,(U64)si0+36U);
if(si0){
goto L7;
}
si0=l5;
si1=l3;
si0=si0 == si1;
if(si0){
goto L4;
}
L7:;
si0=l5;
si1=l3;
si0-=si1;
l5=si0;
si0=l1;
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=l3;
si0+=si1;
l3=si0;
goto L2;
L5:;
si0=l1;
si1=0U;
i32_store(&i->m0,(U64)si0+40U,si1);
si0=l1;
si0=i32_load8_u(&i->m0,(U64)si0+37U);
if(si0){
goto L4;
}
si0=l1;
si1=1U;
i32_store8(&i->m0,(U64)si0+37U,si1);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+28U);
l3=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+32U);
l5=si0;
si0=l1;
si0=i32_load8_u(&i->m0,(U64)si0+36U);
if(si0){
goto L8;
}
si0=l5;
si1=l3;
si0=si0 == si1;
if(si0){
goto L4;
}
L8:;
si0=l5;
si1=l3;
si0-=si1;
l5=si0;
si0=l1;
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=l3;
si0+=si1;
l3=si0;
goto L2;
L4:;
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l0;
sj1=4ULL;
i64_store(&i->m0,(U64)si0,sj1);
goto L1;
L3:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+28U);
l3=si0;
si0=l1;
si1=l2;
si2=24U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l2;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=l3;
si0-=si1;
l5=si0;
si0=l4;
si1=l3;
si0+=si1;
l3=si0;
L2:;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=32U;
si0=f15269(i,si0);
l6=si0;
si0=!(si0);
if(si0){
goto L9;
}
si0=l6;
si1=l5;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l6;
si1=l3;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
sj1=4294967300ULL;
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l2;
si1=l6;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=16U;
si0+=si1;
si1=40U;
si0+=si1;
si1=l1;
si2=40U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=16U;
si0+=si1;
si1=32U;
si0+=si1;
si1=l1;
si2=32U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=16U;
si0+=si1;
si1=24U;
si0+=si1;
si1=l1;
si2=24U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
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
si0=l2;
si1=l1;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+16U,sj1);
si0=8U;
l3=si0;
si0=1U;
l1=si0;
L10:;
{
si0=l2;
si0=i32_load(&i->m0,(U64)si0+56U);
l5=si0;
switch(si0){
case 0:
goto L12;
case 1:
goto L15;
default:
goto L16;
}
L16:;
si0=l2;
si1=l5;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0+56U,si1);
si0=l2;
si0=i32_load8_u(&i->m0,(U64)si0+53U);
if(si0){
goto L12;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0+20U);
l7=si0;
si0=l2;
si1=64U;
si0+=si1;
si1=l2;
si2=16U;
si1+=si2;
f302(i,si0,si1);
si0=l2;
si0=i32_load(&i->m0,(U64)si0+64U);
if(si0){
goto L14;
}
si0=l2;
si0=i32_load8_u(&i->m0,(U64)si0+53U);
if(si0){
goto L12;
}
si0=l2;
si1=1U;
i32_store8(&i->m0,(U64)si0+53U,si1);
si0=l2;
si0=i32_load(&i->m0,(U64)si0+44U);
l5=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+48U);
l4=si0;
si0=l2;
si0=i32_load8_u(&i->m0,(U64)si0+52U);
if(si0){
goto L17;
}
si0=l4;
si1=l5;
si0=si0 == si1;
if(si0){
goto L12;
}
L17:;
si0=l4;
si1=l5;
si0-=si1;
l4=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=l5;
si0+=si1;
l7=si0;
goto L13;
L15:;
si0=l2;
si1=0U;
i32_store(&i->m0,(U64)si0+56U,si1);
si0=l2;
si0=i32_load8_u(&i->m0,(U64)si0+53U);
if(si0){
goto L12;
}
si0=l2;
si1=1U;
i32_store8(&i->m0,(U64)si0+53U,si1);
si0=l2;
si0=i32_load(&i->m0,(U64)si0+44U);
l5=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+48U);
l4=si0;
si0=l2;
si0=i32_load8_u(&i->m0,(U64)si0+52U);
if(si0){
goto L18;
}
si0=l4;
si1=l5;
si0=si0 == si1;
if(si0){
goto L12;
}
L18:;
si0=l4;
si1=l5;
si0-=si1;
l4=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=l5;
si0+=si1;
l7=si0;
goto L13;
L14:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+44U);
l5=si0;
si0=l2;
si1=l2;
si1=i32_load(&i->m0,(U64)si1+72U);
i32_store(&i->m0,(U64)si0+44U,si1);
si0=l2;
si0=i32_load(&i->m0,(U64)si0+68U);
si1=l5;
si0-=si1;
l4=si0;
si0=l7;
si1=l5;
si0+=si1;
l7=si0;
L13:;
si0=l1;
si1=l2;
si1=i32_load(&i->m0,(U64)si1+4U);
si0=si0 != si1;
if(si0){
goto L11;
}
si0=l2;
si1=l1;
si2=1U;
f576(i,si0,si1,si2);
si0=l2;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
goto L11;
L12:;
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
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
goto L1;
L11:;
si0=l6;
si1=l3;
si0+=si1;
l5=si0;
si1=l7;
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=4U;
si0+=si1;
si1=l4;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=l1;
si2=1U;
si1+=si2;
l1=si1;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l3;
si1=8U;
si0+=si1;
l3=si0;
goto L10;
}
L9:;
si0=4U;
si1=32U;
f52(i,si0,si1);
UNREACHABLE;
L1:;
si0=l2;
si1=80U;
si0+=si1;
i->g0=si0;
L0:;
}

void f317(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U64 l7=0;
U32 si0,si1,si2;
U64 sj0,sj1;
si0=i->g0;
si1=48U;
si0-=si1;
l2=si0;
i->g0=si0;
si0=l2;
si1=l1;
si2=8U;
si1+=si2;
i32_store(&i->m0,(U64)si0+44U,si1);
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+4U);
l4=si1;
si0=si0 == si1;
if(si0){
goto L4;
}
L5:;
{
si0=l1;
si1=l3;
si2=312U;
si1+=si2;
l5=si1;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=l3;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l2;
si1=44U;
si0+=si1;
si1=l2;
si2=24U;
si1+=si2;
si0=f235(i,si0,si1);
if(si0){
goto L3;
}
si0=l5;
l3=si0;
si0=l5;
si1=l4;
si0=si0 != si1;
if(si0){
goto L5;
}
}
L4:;
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l0;
sj1=4ULL;
i64_store(&i->m0,(U64)si0,sj1);
goto L2;
L3:;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=16U;
si0=f15269(i,si0);
l4=si0;
si0=!(si0);
if(si0){
goto L1;
}
si0=l4;
si1=l3;
si2=72U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
sj1=4294967300ULL;
i64_store(&i->m0,(U64)si0+12U,sj1);
si0=l2;
si1=l4;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l2;
si1=24U;
si0+=si1;
si1=8U;
si0+=si1;
l6=si0;
si1=l1;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=l1;
sj1=i64_load(&i->m0,(U64)si1);
l7=sj1;
i64_store(&i->m0,(U64)si0+24U,sj1);
si0=l2;
si1=l6;
i32_store(&i->m0,(U64)si0+40U,si1);
sj0=l7;
si0=(U32)(sj0);
l3=si0;
si1=l2;
si1=i32_load(&i->m0,(U64)si1+28U);
l5=si1;
si0=si0 == si1;
if(si0){
goto L6;
}
si0=1U;
l1=si0;
L7:;
{
si0=l2;
si1=l3;
i32_store(&i->m0,(U64)si0+44U,si1);
si0=l2;
si1=40U;
si0+=si1;
si1=l2;
si2=44U;
si1+=si2;
si0=f235(i,si0,si1);
if(si0){
goto L8;
}
si0=l3;
si1=312U;
si0+=si1;
l3=si0;
si1=l5;
si0=si0 != si1;
if(si0){
goto L7;
}
goto L6;
L8:;
si0=l2;
si1=l3;
si2=312U;
si1+=si2;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l3;
si1=72U;
si0+=si1;
l3=si0;
si0=l1;
si1=l2;
si1=i32_load(&i->m0,(U64)si1+12U);
si0=si0 != si1;
if(si0){
goto L9;
}
si0=l2;
si1=8U;
si0+=si1;
si1=l1;
si2=1U;
f575(i,si0,si1,si2);
si0=l2;
si0=i32_load(&i->m0,(U64)si0+8U);
l4=si0;
L9:;
si0=l4;
si1=l1;
si2=2U;
si1<<=(si2&31);
si0+=si1;
si1=l3;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=l1;
si2=1U;
si1+=si2;
l1=si1;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l2;
si1=l6;
i32_store(&i->m0,(U64)si0+40U,si1);
si0=l2;
si0=i32_load(&i->m0,(U64)si0+24U);
l3=si0;
si1=l2;
si1=i32_load(&i->m0,(U64)si1+28U);
l5=si1;
si0=si0 != si1;
if(si0){
goto L7;
}
}
L6:;
si0=l0;
si1=l2;
sj1=i64_load(&i->m0,(U64)si1+8U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=8U;
si0+=si1;
si1=l2;
si2=8U;
si1+=si2;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
L2:;
si0=l2;
si1=48U;
si0+=si1;
i->g0=si0;
goto L0;
L1:;
si0=4U;
si1=16U;
f52(i,si0,si1);
UNREACHABLE;
L0:;
}

void f318(rustpythonInstance*i,U32 l0,U32 l1) {
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
U32 si0,si1,si2,si3,si4,si5;
U64 sj0,sj1;
si0=i->g0;
si1=96U;
si0-=si1;
l2=si0;
i->g0=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+8U);
l3=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+12U);
l4=si0;
L4:;
{
si0=l3;
si1=l4;
si0=si0 >= si1;
if(si0){
goto L3;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
l5=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si0=l3;
l7=si0;
L6:;
{
si0=l5;
l8=si0;
si0=l6;
si1=l5;
si0=si0 == si1;
if(si0){
goto L7;
}
si0=l1;
si1=l6;
si2=248U;
si1+=si2;
l8=si1;
i32_store(&i->m0,(U64)si0,si1);
si0=l6;
sj0=i64_load(&i->m0,(U64)si0);
sj1=2ULL;
si0=sj0 != sj1;
if(si0){
goto L5;
}
L7:;
si0=l1;
si1=l7;
si2=1U;
si1+=si2;
l7=si1;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l8;
l6=si0;
si0=l4;
si1=l7;
si0=si0 != si1;
if(si0){
goto L6;
}
goto L3;
}
L5:;
si0=l1;
si1=l7;
si2=1U;
si1+=si2;
l3=si1;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l1;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+20U);
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l6;
si1=188U;
si0+=si1;
si0=i32_load16_u(&i->m0,(U64)si0);
si1=16401U;
si0&=si1;
if(si0){
goto L4;
}
}
si0=l2;
si1=72U;
si0+=si1;
si1=l6;
f336(i,si0,si1);
si0=l2;
si1=56U;
si0+=si1;
si1=12U;
si0+=si1;
si1=66U;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=32U;
si0+=si1;
si1=12U;
si0+=si1;
sj1=2ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=164U;
i32_store(&i->m0,(U64)si0+60U,si1);
si0=l2;
si1=1094908U;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l6;
si1=60U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si0=l2;
si1=2U;
i32_store(&i->m0,(U64)si0+36U,si1);
si0=l2;
si1=3U;
si2=0U;
si3=l6;
si4=48U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si3=!(si3);
si4=l1;
si5=2U;
si4=si4 < si5;
si3|=si4;
si4=l6;
si5=188U;
si4+=si5;
si4=i32_load(&i->m0,(U64)si4);
si5=2U;
si4&=si5;
si5=1U;
si4>>=(si5&31);
si3&=si4;
l6=si3;
si1=si3?si1:si2;
i32_store(&i->m0,(U64)si0+92U,si1);
si0=l2;
si1=1086931U;
si2=1086468U;
si3=l6;
si1=si3?si1:si2;
i32_store(&i->m0,(U64)si0+88U,si1);
si0=l2;
si1=l2;
si2=88U;
si1+=si2;
i32_store(&i->m0,(U64)si0+64U,si1);
si0=l2;
si1=l2;
si2=72U;
si1+=si2;
i32_store(&i->m0,(U64)si0+56U,si1);
si0=l2;
si1=l2;
si2=56U;
si1+=si2;
i32_store(&i->m0,(U64)si0+40U,si1);
si0=l2;
si1=16U;
si0+=si1;
si1=l2;
si2=32U;
si1+=si2;
f63(i,si0,si1);
si0=l2;
si0=i32_load(&i->m0,(U64)si0+72U);
l6=si0;
si0=!(si0);
if(si0){
goto L8;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0+76U);
si0=!(si0);
if(si0){
goto L8;
}
si0=l6;
f15271(i,si0);
L8:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+16U);
l6=si0;
if(si0){
goto L2;
}
L3:;
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l0;
sj1=4ULL;
i64_store(&i->m0,(U64)si0,sj1);
goto L1;
L2:;
si0=l2;
sj0=i64_load(&i->m0,(U64)si0+20U);
l9=sj0;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=48U;
si0=f15269(i,si0);
l3=si0;
si0=!(si0);
if(si0){
goto L10;
}
si0=l7;
si1=1U;
si0+=si1;
l1=si0;
si0=l3;
sj1=l9;
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l3;
si1=l6;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
sj1=4294967300ULL;
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l2;
si1=l3;
i32_store(&i->m0,(U64)si0,si1);
si0=1U;
l10=si0;
L11:;
{
si0=l1;
si1=l4;
si0=si0 >= si1;
if(si0){
goto L9;
}
si0=l1;
l7=si0;
si0=l8;
l6=si0;
L13:;
{
si0=l5;
l8=si0;
si0=l6;
si1=l5;
si0=si0 == si1;
if(si0){
goto L14;
}
si0=l6;
si1=248U;
si0+=si1;
l8=si0;
si0=l6;
sj0=i64_load(&i->m0,(U64)si0);
sj1=2ULL;
si0=sj0 != sj1;
if(si0){
goto L12;
}
L14:;
si0=l8;
l6=si0;
si0=l4;
si1=l7;
si2=1U;
si1+=si2;
l7=si1;
si0=si0 != si1;
if(si0){
goto L13;
}
goto L9;
}
L12:;
si0=l7;
si1=1U;
si0+=si1;
l1=si0;
si0=l6;
si1=188U;
si0+=si1;
l11=si0;
si0=i32_load16_u(&i->m0,(U64)si0);
si1=16401U;
si0&=si1;
if(si0){
goto L11;
}
si0=l2;
si1=72U;
si0+=si1;
si1=l6;
f336(i,si0,si1);
si0=l2;
si1=66U;
i32_store(&i->m0,(U64)si0+68U,si1);
si0=l2;
si1=164U;
i32_store(&i->m0,(U64)si0+60U,si1);
si0=l2;
si1=1094908U;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l2;
sj1=2ULL;
i64_store(&i->m0,(U64)si0+44U,sj1);
si0=l6;
si1=60U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si0=l2;
si1=2U;
i32_store(&i->m0,(U64)si0+36U,si1);
si0=l2;
si1=3U;
si2=0U;
si3=l6;
si4=48U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si3=!(si3);
si4=l1;
si5=2U;
si4=si4 < si5;
si3|=si4;
si4=l11;
si4=i32_load(&i->m0,(U64)si4);
si5=2U;
si4&=si5;
si5=1U;
si4>>=(si5&31);
si3&=si4;
l6=si3;
si1=si3?si1:si2;
i32_store(&i->m0,(U64)si0+92U,si1);
si0=l2;
si1=1086931U;
si2=1086468U;
si3=l6;
si1=si3?si1:si2;
i32_store(&i->m0,(U64)si0+88U,si1);
si0=l2;
si1=l2;
si2=88U;
si1+=si2;
i32_store(&i->m0,(U64)si0+64U,si1);
si0=l2;
si1=l2;
si2=72U;
si1+=si2;
i32_store(&i->m0,(U64)si0+56U,si1);
si0=l2;
si1=l2;
si2=56U;
si1+=si2;
i32_store(&i->m0,(U64)si0+40U,si1);
si0=l2;
si1=16U;
si0+=si1;
si1=l2;
si2=32U;
si1+=si2;
f63(i,si0,si1);
si0=l2;
si0=i32_load(&i->m0,(U64)si0+72U);
l6=si0;
si0=!(si0);
if(si0){
goto L15;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0+76U);
si0=!(si0);
if(si0){
goto L15;
}
si0=l6;
f15271(i,si0);
L15:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+16U);
l6=si0;
si0=!(si0);
if(si0){
goto L9;
}
si0=l2;
sj0=i64_load(&i->m0,(U64)si0+20U);
l9=sj0;
si0=l10;
si1=l2;
si1=i32_load(&i->m0,(U64)si1+4U);
si0=si0 != si1;
if(si0){
goto L16;
}
si0=l2;
si1=l10;
si2=1U;
f574(i,si0,si1,si2);
si0=l2;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
L16:;
si0=l7;
si1=1U;
si0+=si1;
l1=si0;
si0=l3;
si1=l10;
si2=12U;
si1*=si2;
si0+=si1;
l7=si0;
sj1=l9;
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l7;
si1=l6;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=l10;
si2=1U;
si1+=si2;
l10=si1;
i32_store(&i->m0,(U64)si0+8U,si1);
goto L11;
}
L10:;
si0=4U;
si1=48U;
f52(i,si0,si1);
UNREACHABLE;
L9:;
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
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
L1:;
si0=l2;
si1=96U;
si0+=si1;
i->g0=si0;
L0:;
}

U32 f319(rustpythonInstance*i,U32 l0) {
U32 l1=0;
U32 l2=0;
U64 l3=0;
U64 l4=0;
U32 si0,si1,si2,si3,si4;
U64 sj0,sj1;
si0=i->g0;
si1=32U;
si0-=si1;
l1=si0;
i->g0=si0;
si0=0U;
sj0=i64_load(&i->m0,(U64)si0+2972600U);
sj1=0ULL;
si0=sj0 != sj1;
if(si0){
goto L2;
}
si0=l0;
si0=!(si0);
if(si0){
goto L4;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si0=l0;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=1U;
si0=si0 != si1;
if(si0){
goto L4;
}
si0=l0;
sj0=i64_load(&i->m0,(U64)si0+16U);
l3=sj0;
si0=l0;
sj0=i64_load(&i->m0,(U64)si0+8U);
l4=sj0;
goto L3;
L4:;
si0=l1;
si1=16U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0+8U,sj1);
si0=l1;
si1=8U;
si0+=si1;
si1=16U;
si0=wasi_snapshot_preview1__random_get(i,si0,si1);
l0=si0;
if(si0){
goto L1;
}
si0=l1;
sj0=i64_load(&i->m0,(U64)si0+16U);
l3=sj0;
si0=l1;
sj0=i64_load(&i->m0,(U64)si0+8U);
l4=sj0;
L3:;
si0=0U;
sj1=l3;
i64_store(&i->m0,(U64)si0+2972616U,sj1);
si0=0U;
sj1=l4;
i64_store(&i->m0,(U64)si0+2972608U,sj1);
si0=0U;
sj1=1ULL;
i64_store(&i->m0,(U64)si0+2972600U,sj1);
L2:;
si0=l1;
si1=32U;
si0+=si1;
i->g0=si0;
si0=2972608U;
goto L0;
L1:;
si0=l1;
si1=l0;
i32_store16(&i->m0,(U64)si0+30U,si1);
si0=1992240U;
si1=18U;
si2=l1;
si3=30U;
si2+=si3;
si3=1992124U;
si4=1992292U;
f712(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L0:;
return si0;
}

void f320(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U32 l5=0;
U32 si0,si1,si2,si3;
U64 sj1;
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
si1=8U;
si0+=si1;
si1=l1;
f321(i,si0,si1);
si0=l4;
si0=i32_load8_u(&i->m0,(U64)si0+8U);
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
si1=i32_load(&i->m0,(U64)si1+9U);
i32_store(&i->m0,(U64)si0+1U,si1);
si0=l0;
si1=4U;
si0+=si1;
si1=l4;
si1=i32_load(&i->m0,(U64)si1+12U);
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
si0=l1;
si1=1U;
i32_store8(&i->m0,(U64)si0+12U,si1);
si0=l4;
si1=8U;
si0+=si1;
si1=l1;
si2=16U;
si1+=si2;
si2=l2;
si3=l3;
f14917(i,si0,si1,si2,si3);
si0=l1;
si1=0U;
i32_store8(&i->m0,(U64)si0+12U,si1);
si0=l0;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1+8U);
i64_store(&i->m0,(U64)si0,sj1);
L1:;
si0=l4;
si1=16U;
si0+=si1;
i->g0=si0;
L0:;
}

void f321(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
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
l2=si0;
i->g0=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+8U);
l3=si0;
si0=!(si0);
if(si0){
goto L5;
}
si0=l1;
si1=16U;
si0+=si1;
l4=si0;
si0=0U;
l5=si0;
L6:;
{
si0=l1;
si1=1U;
i32_store8(&i->m0,(U64)si0+12U,si1);
si0=l2;
si1=8U;
si0+=si1;
si1=l4;
si2=l1;
si2=i32_load(&i->m0,(U64)si2);
si3=l5;
si2+=si3;
si3=l3;
si4=l5;
si3-=si4;
f15020(i,si0,si1,si2,si3);
si0=l1;
si1=0U;
i32_store8(&i->m0,(U64)si0+12U,si1);
si0=l2;
si0=i32_load8_u(&i->m0,(U64)si0+8U);
l3=si0;
si1=4U;
si0=si0 != si1;
if(si0){
goto L10;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0+12U);
l3=si0;
if(si0){
goto L9;
}
si0=l0;
si1=1086504U;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=2U;
i32_store8(&i->m0,(U64)si0,si1);
goto L3;
L10:;
si0=l3;
switch(si0){
case 0:
goto L15;
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
si0=l2;
si0=i32_load(&i->m0,(U64)si0+12U);
si0=f14991(i,si0);
si1=255U;
si0&=si1;
l6=si0;
goto L11;
L14:;
si0=l2;
si0=i32_load8_u(&i->m0,(U64)si0+9U);
l6=si0;
goto L11;
L13:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+12U);
si0=i32_load8_u(&i->m0,(U64)si0+8U);
l6=si0;
goto L11;
L12:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+12U);
si0=i32_load8_u(&i->m0,(U64)si0+8U);
l6=si0;
L11:;
si0=l6;
si1=255U;
si0&=si1;
si1=35U;
si0=si0 == si1;
if(si0){
goto L8;
}
si0=l0;
si1=l2;
sj1=i64_load(&i->m0,(U64)si1+8U);
i64_store(&i->m0,(U64)si0,sj1);
goto L3;
L9:;
si0=l3;
si1=l5;
si0+=si1;
l5=si0;
goto L7;
L8:;
si0=l3;
si1=3U;
si0=si0 < si1;
if(si0){
goto L7;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0+12U);
l3=si0;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
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
goto L16;
}
si0=l7;
f15271(i,si0);
L16:;
si0=l3;
f15271(i,si0);
L7:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+8U);
l3=si0;
si1=l5;
si0=si0 <= si1;
if(si0){
goto L4;
}
goto L6;
}
L5:;
si0=l0;
si1=4U;
i32_store8(&i->m0,(U64)si0,si1);
goto L2;
L4:;
si0=l0;
si1=4U;
i32_store8(&i->m0,(U64)si0,si1);
si0=l5;
si0=!(si0);
if(si0){
goto L2;
}
si0=l3;
si1=l5;
si0=si0 < si1;
if(si0){
goto L17;
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
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
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
goto L2;
L17:;
si0=l5;
si1=l3;
si2=1986372U;
f666(i,si0,si1,si2);
UNREACHABLE;
L3:;
si0=l5;
si0=!(si0);
if(si0){
goto L2;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+8U);
l3=si0;
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
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
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

U32 f322(rustpythonInstance*i,U32 l0,U32 l1) {
U32 si0,si1,si2;
si0=l1;
si1=l0;
si1=i32_load(&i->m0,(U64)si1);
l0=si1;
si1=i32_load(&i->m0,(U64)si1);
si2=l0;
si2=i32_load(&i->m0,(U64)si2+4U);
si0=f713(i,si0,si1,si2);
L0:;
return si0;
}

U32 f323(rustpythonInstance*i,U32 l0,U32 l1) {
U32 si0,si1,si2;
si0=l1;
si1=l0;
si1=i32_load(&i->m0,(U64)si1);
si2=l0;
si2=i32_load(&i->m0,(U64)si2+4U);
si0=f713(i,si0,si1,si2);
L0:;
return si0;
}

void f324(rustpythonInstance*i,U32 l0) {
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

void f325(rustpythonInstance*i,U32 l0) {
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
f15271(i,si0);
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
f15271(i,si0);
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
f15271(i,si0);
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
f15271(i,si0);
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
f15271(i,si0);
L5:;
L0:;
}

void f326(rustpythonInstance*i,U32 l0) {
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
f15271(i,si0);
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
f15271(i,si0);
L2:;
si0=l0;
si1=64U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si0=!(si0);
if(si0){
goto L3;
}
si0=l0;
si1=68U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si0=l1;
si1=l1;
si1=i32_load(&i->m0,(U64)si1);
si2=-1U;
si1+=si2;
l3=si1;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
if(si0){
goto L3;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0+8U);
l4=si0;
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
l3=si0;
si1=l3;
si1=i32_load(&i->m0,(U64)si1);
si2=-1U;
si1+=si2;
l3=si1;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
if(si0){
goto L3;
}
si0=l4;
si1=4U;
si2=l4;
si3=4U;
si2=si2 > si3;
si0=si2?si0:si1;
l3=si0;
si1=l2;
si1=i32_load(&i->m0,(U64)si1+4U);
si0+=si1;
si1=7U;
si0+=si1;
si1=0U;
si2=l3;
si1-=si2;
si0&=si1;
si0=!(si0);
if(si0){
goto L3;
}
si0=l1;
f15271(i,si0);
L3:;
si0=l0;
si1=72U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si0=!(si0);
if(si0){
goto L4;
}
si0=l0;
si1=76U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si0=l1;
si1=l1;
si1=i32_load(&i->m0,(U64)si1);
si2=-1U;
si1+=si2;
l3=si1;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
if(si0){
goto L4;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0+8U);
l4=si0;
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
l3=si0;
si1=l3;
si1=i32_load(&i->m0,(U64)si1);
si2=-1U;
si1+=si2;
l3=si1;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
if(si0){
goto L4;
}
si0=l4;
si1=4U;
si2=l4;
si3=4U;
si2=si2 > si3;
si0=si2?si0:si1;
l3=si0;
si1=l2;
si1=i32_load(&i->m0,(U64)si1+4U);
si0+=si1;
si1=7U;
si0+=si1;
si1=0U;
si2=l3;
si1-=si2;
si0&=si1;
si0=!(si0);
if(si0){
goto L4;
}
si0=l1;
f15271(i,si0);
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
f15271(i,si0);
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
f15271(i,si0);
L6:;
L0:;
}

void f327(rustpythonInstance*i,U32 l0) {
U32 si0,si1;
si0=l0;
si1=152U;
si0+=si1;
f325(i,si0);
si0=l0;
f326(i,si0);
L0:;
}

U32 f328(rustpythonInstance*i,U32 l0,U32 l1) {
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

void f329(rustpythonInstance*i,U32 l0) {
U32 l1=0;
U32 l2=0;
U32 l3=0;
U32 l4=0;
U64 l5=0;
U32 l6=0;
U32 l7=0;
U32 l8=0;
U64 l9=0;
U32 si0,si1,si2,si3;
U64 sj0,sj1,sj2;
si0=l0;
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si0=!(si0);
if(si0){
goto L1;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+12U);
l2=si0;
if(si0){
goto L3;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
goto L2;
L3:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si1=8U;
si0+=si1;
l4=si0;
si0=l3;
sj0=i64_load(&i->m0,(U64)si0);
sj1=-1ULL;
sj0^=sj1;
sj1=-9187201950435737472ULL;
sj0&=sj1;
l5=sj0;
si0=l3;
l6=si0;
L4:;
{
sj0=l5;
sj1=0ULL;
si0=sj0 != sj1;
if(si0){
goto L5;
}
si0=l4;
l0=si0;
L6:;
{
si0=l6;
si1=-320U;
si0+=si1;
l6=si0;
si0=l0;
sj0=i64_load(&i->m0,(U64)si0);
l5=sj0;
si0=l0;
si1=8U;
si0+=si1;
l4=si0;
l0=si0;
sj0=l5;
sj1=-1ULL;
sj0^=sj1;
sj1=-9187201950435737472ULL;
sj0&=sj1;
l5=sj0;
si0=!(sj0);
if(si0){
goto L6;
}
}
L5:;
si0=l6;
si1=0U;
sj2=l5;
sj2=I64_CTZ(sj2);
si2=(U32)(sj2);
si3=3U;
si2>>=(si3&31);
si1-=si2;
si2=40U;
si1*=si2;
si0+=si1;
l0=si0;
si1=-20U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L7;
}
si0=l0;
si1=-24U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
f15271(i,si0);
L7:;
si0=l0;
si1=-40U;
si0+=si1;
l0=si0;
si1=28U;
si0+=si1;
l7=si0;
si0=l0;
si1=36U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l8=si0;
si0=!(si0);
if(si0){
goto L8;
}
si0=l7;
si0=i32_load(&i->m0,(U64)si0);
l0=si0;
L9:;
{
si0=l0;
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L10;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
f15271(i,si0);
L10:;
si0=l0;
si1=12U;
si0+=si1;
l0=si0;
si0=l8;
si1=-1U;
si0+=si1;
l8=si0;
if(si0){
goto L9;
}
}
L8:;
sj0=l5;
sj1=-1ULL;
sj0+=sj1;
l9=sj0;
si0=l2;
si1=-1U;
si0+=si1;
l2=si0;
si0=l7;
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L11;
}
si0=l7;
si0=i32_load(&i->m0,(U64)si0);
f15271(i,si0);
L11:;
sj0=l9;
sj1=l5;
sj0&=sj1;
l5=sj0;
si0=l2;
if(si0){
goto L4;
}
}
L2:;
si0=l1;
si1=l1;
si2=1U;
si1+=si2;
sj1=(U64)(si1);
sj2=40ULL;
sj1*=sj2;
si1=(U32)(sj1);
l0=si1;
si0+=si1;
si1=-9U;
si0=si0 == si1;
if(si0){
goto L1;
}
si0=l3;
si1=l0;
si0-=si1;
f15271(i,si0);
L1:;
L0:;
}


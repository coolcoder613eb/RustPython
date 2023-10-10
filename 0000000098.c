#include "w2c2_base.h"

#include "rustpython.h"

void f9830(rustpythonInstance*i,U32 l0) {
U32 si0,si1,si2;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
si1=72U;
si0+=si1;
l0=si0;
si1=l0;
si1=i32_load(&i->m0,(U64)si1);
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
L0:;
}

void f9831(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 si0,si1,si2,si3,si4;
si0=i->g0;
si1=16U;
si0-=si1;
l4=si0;
i->g0=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+88U);
si1=1084U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si0=l2;
si1=l2;
si1=i32_load(&i->m0,(U64)si1);
l6=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l6;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 != si1;
if(si0){
goto L1;
}
f15042(i);
UNREACHABLE;
L1:;
si0=l4;
si1=8U;
si0+=si1;
si1=l3;
si2=l1;
si3=l5;
si4=l2;
f7596(i,si0,si1,si2,si3,si4);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+12U);
l2=si0;
si0=l0;
si1=l4;
si1=i32_load(&i->m0,(U64)si1+8U);
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l2;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l4;
si1=16U;
si0+=si1;
i->g0=si0;
L0:;
}

void f9832(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 si0,si1,si2,si3,si4;
si0=i->g0;
si1=16U;
si0-=si1;
l4=si0;
i->g0=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+88U);
si1=1156U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si0=l2;
si1=l2;
si1=i32_load(&i->m0,(U64)si1);
l6=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l6;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 != si1;
if(si0){
goto L1;
}
f15042(i);
UNREACHABLE;
L1:;
si0=l4;
si1=8U;
si0+=si1;
si1=l3;
si2=l1;
si3=l5;
si4=l2;
f7596(i,si0,si1,si2,si3,si4);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+12U);
l2=si0;
si0=l0;
si1=l4;
si1=i32_load(&i->m0,(U64)si1+8U);
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l2;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l4;
si1=16U;
si0+=si1;
i->g0=si0;
L0:;
}

void f9833(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 l3=0;
U64 l4=0;
U32 si0,si1,si2,si3;
U64 sj1;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+56U);
l2=si1;
si2=8U;
si3=l2;
si1=si3?si1:si2;
i32_store(&i->m0,(U64)si0+56U,si1);
si0=l1;
si1=56U;
si0+=si1;
l3=si0;
si0=l2;
si0=!(si0);
if(si0){
goto L1;
}
si0=l3;
sj1=l4;
si2=1000000000U;
si0=f1429(i,si0,sj1,si2);
L1:;
si0=l0;
si1=l3;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=4U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=12U;
si0+=si1;
si1=l1;
si2=68U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=8U;
si0+=si1;
si1=l1;
si2=60U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
L0:;
}

void f9834(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 si0,si1,si2,si3,si4;
si0=i->g0;
si1=16U;
si0-=si1;
l4=si0;
i->g0=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+88U);
si1=604U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si0=l2;
si1=l2;
si1=i32_load(&i->m0,(U64)si1);
l6=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l6;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 != si1;
if(si0){
goto L1;
}
f15042(i);
UNREACHABLE;
L1:;
si0=l4;
si1=8U;
si0+=si1;
si1=l3;
si2=l1;
si3=l5;
si4=l2;
f7596(i,si0,si1,si2,si3,si4);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+12U);
l2=si0;
si0=l0;
si1=l4;
si1=i32_load(&i->m0,(U64)si1+8U);
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l2;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l4;
si1=16U;
si0+=si1;
i->g0=si0;
L0:;
}

void f9835(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 si0,si1,si2,si3,si4;
si0=i->g0;
si1=16U;
si0-=si1;
l4=si0;
i->g0=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+88U);
si1=828U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si0=l2;
si1=l2;
si1=i32_load(&i->m0,(U64)si1);
l6=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l6;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 != si1;
if(si0){
goto L1;
}
f15042(i);
UNREACHABLE;
L1:;
si0=l4;
si1=8U;
si0+=si1;
si1=l3;
si2=l1;
si3=l5;
si4=l2;
f7596(i,si0,si1,si2,si3,si4);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+12U);
l2=si0;
si0=l0;
si1=l4;
si1=i32_load(&i->m0,(U64)si1+8U);
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l2;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l4;
si1=16U;
si0+=si1;
i->g0=si0;
L0:;
}

void f9836(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 si0,si1,si2,si3,si4;
si0=i->g0;
si1=16U;
si0-=si1;
l4=si0;
i->g0=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+88U);
si1=1020U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si0=l1;
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
si0=si0 != si1;
if(si0){
goto L1;
}
f15042(i);
UNREACHABLE;
L1:;
si0=l4;
si1=8U;
si0+=si1;
si1=l3;
si2=l2;
si3=l5;
si4=l1;
f7596(i,si0,si1,si2,si3,si4);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+12U);
l1=si0;
si0=l0;
si1=l4;
si1=i32_load(&i->m0,(U64)si1+8U);
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l1;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l4;
si1=16U;
si0+=si1;
i->g0=si0;
L0:;
}

void f9837(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 si0,si1,si2,si3,si4;
si0=i->g0;
si1=16U;
si0-=si1;
l4=si0;
i->g0=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+88U);
si1=944U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si0=l2;
si1=l2;
si1=i32_load(&i->m0,(U64)si1);
l6=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l6;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 != si1;
if(si0){
goto L1;
}
f15042(i);
UNREACHABLE;
L1:;
si0=l4;
si1=8U;
si0+=si1;
si1=l3;
si2=l1;
si3=l5;
si4=l2;
f7596(i,si0,si1,si2,si3,si4);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+12U);
l2=si0;
si0=l0;
si1=l4;
si1=i32_load(&i->m0,(U64)si1+8U);
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l2;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l4;
si1=16U;
si0+=si1;
i->g0=si0;
L0:;
}

void f9838(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4) {
U32 l5=0;
U32 si0,si1,si2;
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
goto L1;
}
si0=l1;
si1=l3;
si2=l4;
si0=f9734(i,si0,si1,si2);
l4=si0;
if(si0){
goto L3;
}
si0=0U;
l5=si0;
goto L2;
L3:;
si0=l1;
si1=l1;
si1=i32_load(&i->m0,(U64)si1);
l3=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=1U;
l5=si0;
si0=l3;
si1=1U;
si0=si0 != si1;
if(si0){
goto L4;
}
si0=l1;
f7690(i,si0);
L4:;
si0=l4;
l1=si0;
L2:;
si0=l0;
si1=l1;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l5;
i32_store(&i->m0,(U64)si0,si1);
goto L0;
L1:;
f15042(i);
UNREACHABLE;
L0:;
}

void f9839(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 si0,si1,si2,si3,si4;
si0=i->g0;
si1=16U;
si0-=si1;
l4=si0;
i->g0=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+88U);
si1=1016U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si0=l1;
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
si0=si0 != si1;
if(si0){
goto L1;
}
f15042(i);
UNREACHABLE;
L1:;
si0=l4;
si1=8U;
si0+=si1;
si1=l3;
si2=l2;
si3=l5;
si4=l1;
f7596(i,si0,si1,si2,si3,si4);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+12U);
l1=si0;
si0=l0;
si1=l4;
si1=i32_load(&i->m0,(U64)si1+8U);
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l1;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l4;
si1=16U;
si0+=si1;
i->g0=si0;
L0:;
}

void f9840(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4) {
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
si1=l4;
si2=l1;
si3=l4;
si3=i32_load(&i->m0,(U64)si3+88U);
si4=800U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si4=l3;
f7601(i,si0,si1,si2,si3,si4);
si0=l5;
si0=i32_load(&i->m0,(U64)si0+12U);
l4=si0;
si0=l0;
si1=l5;
si1=i32_load(&i->m0,(U64)si1+8U);
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l4;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l5;
si1=16U;
si0+=si1;
i->g0=si0;
L0:;
}

void f9841(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 si0,si1,si2,si3,si4;
si0=i->g0;
si1=16U;
si0-=si1;
l4=si0;
i->g0=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+88U);
si1=848U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si0=l2;
si1=l2;
si1=i32_load(&i->m0,(U64)si1);
l6=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l6;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 != si1;
if(si0){
goto L1;
}
f15042(i);
UNREACHABLE;
L1:;
si0=l4;
si1=8U;
si0+=si1;
si1=l3;
si2=l1;
si3=l5;
si4=l2;
f7596(i,si0,si1,si2,si3,si4);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+12U);
l2=si0;
si0=l0;
si1=l4;
si1=i32_load(&i->m0,(U64)si1+8U);
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l2;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l4;
si1=16U;
si0+=si1;
i->g0=si0;
L0:;
}

U32 f9842(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4) {
U32 si0,si1,si2,si3;
si0=l0;
si1=56U;
si0+=si1;
l0=si0;
si0=l3;
si0=!(si0);
if(si0){
goto L1;
}
si0=l0;
si1=l2;
si2=l3;
si3=l4;
si0=f9466(i,si0,si1,si2,si3);
goto L0;
L1:;
si0=l0;
si1=l2;
si2=l4;
si0=f9718(i,si0,si1,si2);
L0:;
return si0;
}

void f9843(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 si0,si1,si2,si3,si4;
si0=i->g0;
si1=16U;
si0-=si1;
l4=si0;
i->g0=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+88U);
si1=820U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si0=l2;
si1=l2;
si1=i32_load(&i->m0,(U64)si1);
l6=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l6;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 != si1;
if(si0){
goto L1;
}
f15042(i);
UNREACHABLE;
L1:;
si0=l4;
si1=8U;
si0+=si1;
si1=l3;
si2=l1;
si3=l5;
si4=l2;
f7596(i,si0,si1,si2,si3,si4);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+12U);
l2=si0;
si0=l0;
si1=l4;
si1=i32_load(&i->m0,(U64)si1+8U);
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l2;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l4;
si1=16U;
si0+=si1;
i->g0=si0;
L0:;
}

void f9844(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 si0,si1,si2,si3,si4;
si0=i->g0;
si1=16U;
si0-=si1;
l4=si0;
i->g0=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+88U);
si1=1064U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si0=l1;
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
si0=si0 != si1;
if(si0){
goto L1;
}
f15042(i);
UNREACHABLE;
L1:;
si0=l4;
si1=8U;
si0+=si1;
si1=l3;
si2=l2;
si3=l5;
si4=l1;
f7596(i,si0,si1,si2,si3,si4);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+12U);
l1=si0;
si0=l0;
si1=l4;
si1=i32_load(&i->m0,(U64)si1+8U);
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l1;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l4;
si1=16U;
si0+=si1;
i->g0=si0;
L0:;
}

void f9845(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4) {
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
si1=880U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
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
si0=si0 != si1;
if(si0){
goto L1;
}
f15042(i);
UNREACHABLE;
L1:;
si0=l5;
si1=8U;
si0+=si1;
si1=l4;
si2=l1;
si3=l6;
si4=l2;
f7596(i,si0,si1,si2,si3,si4);
si0=l5;
si0=i32_load(&i->m0,(U64)si0+12U);
l2=si0;
si0=l0;
si1=l5;
si1=i32_load(&i->m0,(U64)si1+8U);
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l2;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l5;
si1=16U;
si0+=si1;
i->g0=si0;
L0:;
}

void f9846(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 si0,si1,si2,si3,si4;
si0=i->g0;
si1=16U;
si0-=si1;
l4=si0;
i->g0=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+88U);
si1=900U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si0=l2;
si1=l2;
si1=i32_load(&i->m0,(U64)si1);
l6=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l6;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 != si1;
if(si0){
goto L1;
}
f15042(i);
UNREACHABLE;
L1:;
si0=l4;
si1=8U;
si0+=si1;
si1=l3;
si2=l1;
si3=l5;
si4=l2;
f7596(i,si0,si1,si2,si3,si4);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+12U);
l2=si0;
si0=l0;
si1=l4;
si1=i32_load(&i->m0,(U64)si1+8U);
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l2;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l4;
si1=16U;
si0+=si1;
i->g0=si0;
L0:;
}

void f9847(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 si0,si1,si2,si3,si4;
si0=i->g0;
si1=16U;
si0-=si1;
l4=si0;
i->g0=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+88U);
si1=832U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si0=l2;
si1=l2;
si1=i32_load(&i->m0,(U64)si1);
l6=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l6;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 != si1;
if(si0){
goto L1;
}
f15042(i);
UNREACHABLE;
L1:;
si0=l4;
si1=8U;
si0+=si1;
si1=l3;
si2=l1;
si3=l5;
si4=l2;
f7596(i,si0,si1,si2,si3,si4);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+12U);
l2=si0;
si0=l0;
si1=l4;
si1=i32_load(&i->m0,(U64)si1+8U);
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l2;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l4;
si1=16U;
si0+=si1;
i->g0=si0;
L0:;
}

void f9848(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4) {
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 l8=0;
U64 l9=0;
U32 si0,si1,si2,si3,si4;
U64 sj1,sj2;
si0=i->g0;
si1=80U;
si0-=si1;
l5=si0;
i->g0=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+56U);
l6=si0;
si1=8U;
si0&=si1;
if(si0){
goto L2;
}
si0=l6;
si1=16U;
si0+=si1;
l7=si0;
si1=l6;
si0=si0 < si1;
if(si0){
goto L2;
}
si0=l1;
si1=l7;
si2=l1;
si2=i32_load(&i->m0,(U64)si2+56U);
l8=si2;
si3=l8;
si4=l6;
si3=si3 == si4;
l6=si3;
si1=si3?si1:si2;
i32_store(&i->m0,(U64)si0+56U,si1);
si0=l6;
if(si0){
goto L1;
}
L2:;
si0=l1;
si1=56U;
si0+=si1;
si1=0U;
sj2=l9;
si3=1000000000U;
si0=f1432(i,si0,si1,sj2,si3);
L1:;
si0=l5;
si1=l1;
si2=60U;
si1+=si2;
si2=l3;
si3=l4;
f11003(i,si0,si1,si2,si3);
si0=l5;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L6;
}
si0=l4;
si1=88U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=l5;
si1=28U;
si0+=si1;
si1=l5;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=32U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
si1=l4;
si1=i32_load(&i->m0,(U64)si1);
l7=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=0U;
l6=si0;
si0=l5;
si1=0U;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l5;
si1=l5;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+20U,sj1);
si0=l5;
si1=0U;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l7;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 == si1;
if(si0){
goto L4;
}
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
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=64U;
si0=f15269(i,si0);
l6=si0;
si0=!(si0);
if(si0){
goto L3;
}
si0=l6;
sj1=-1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l6;
si1=56U;
si0+=si1;
sj1=-1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l6;
si1=48U;
si0+=si1;
sj1=-1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l6;
si1=40U;
si0+=si1;
sj1=-1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l6;
si1=32U;
si0+=si1;
sj1=-1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l6;
si1=24U;
si0+=si1;
sj1=-1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l6;
si1=16U;
si0+=si1;
sj1=-1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=8U;
i32_store(&i->m0,(U64)si0+56U,si1);
si0=l6;
si1=8U;
si0+=si1;
sj1=-1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=68U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=68U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si1=l3;
si1=i32_load(&i->m0,(U64)si1);
l7=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
sj1=0ULL;
i64_store(&i->m0,(U64)si0+60U,sj1);
si0=l5;
sj1=34359738376ULL;
i64_store(&i->m0,(U64)si0+48U,sj1);
si0=l5;
si1=l6;
i32_store(&i->m0,(U64)si0+44U,si1);
si0=l5;
si1=0U;
i32_store(&i->m0,(U64)si0+40U,si1);
si0=l7;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 == si1;
if(si0){
goto L4;
}
si0=l5;
si1=40U;
si0+=si1;
si1=l3;
si2=0U;
si0=f8146(i,si0,si1,si2);
l6=si0;
L7:;
si0=l5;
si1=16U;
si0+=si1;
si1=l4;
si2=l6;
si0=f8105(i,si0,si1,si2);
l4=si0;
si0=0U;
l3=si0;
goto L5;
L6:;
si0=1U;
l3=si0;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+4U);
l4=si0;
L5:;
si0=l1;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+56U);
l6=si1;
si2=-16U;
si1+=si2;
i32_store(&i->m0,(U64)si0+56U,si1);
si0=l6;
si1=-14U;
si0&=si1;
si1=18U;
si0=si0 != si1;
if(si0){
goto L8;
}
si0=l1;
si1=56U;
si0+=si1;
f1433(i,si0);
L8:;
si0=l0;
si1=l4;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l3;
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=80U;
si0+=si1;
i->g0=si0;
goto L0;
L4:;
f15042(i);
UNREACHABLE;
L3:;
si0=8U;
si1=64U;
f52(i,si0,si1);
UNREACHABLE;
L0:;
}

void f9849(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4) {
U32 l5=0;
U32 si0,si1,si2;
si0=1U;
l5=si0;
si0=l1;
si1=56U;
si0+=si1;
si1=l3;
si2=l4;
si0=f9629(i,si0,si1,si2);
l4=si0;
if(si0){
goto L1;
}
si0=l1;
si1=l1;
si1=i32_load(&i->m0,(U64)si1);
l3=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=0U;
l5=si0;
si0=l1;
l4=si0;
si0=l3;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 != si1;
if(si0){
goto L1;
}
f15042(i);
UNREACHABLE;
L1:;
si0=l0;
si1=l4;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l5;
i32_store(&i->m0,(U64)si0,si1);
L0:;
}

void f9850(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4) {
U32 l5=0;
U32 si0,si1,si2,si3;
si0=i->g0;
si1=16U;
si0-=si1;
l5=si0;
i->g0=si0;
si0=l5;
si1=8U;
si0+=si1;
si1=l1;
si2=56U;
si1+=si2;
si2=l3;
si3=l4;
f9697(i,si0,si1,si2,si3);
si0=l5;
si0=i32_load(&i->m0,(U64)si0+12U);
l1=si0;
si0=l0;
si1=l5;
si1=i32_load(&i->m0,(U64)si1+8U);
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l1;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l5;
si1=16U;
si0+=si1;
i->g0=si0;
L0:;
}

void f9851(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4) {
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 si0,si1,si2,si3,si4,si5;
U64 sj1;
si0=i->g0;
si1=32U;
si0-=si1;
l5=si0;
i->g0=si0;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+88U);
si1=1272U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=l3;
si0=si0 == si1;
if(si0){
goto L5;
}
si0=8U;
si0=f15269(i,si0);
l6=si0;
si0=!(si0);
if(si0){
goto L3;
}
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
goto L2;
}
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
goto L2;
}
si0=l6;
si1=l3;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l6;
si1=l2;
i32_store(&i->m0,(U64)si0,si1);
si0=2U;
l3=si0;
goto L4;
L5:;
si0=4U;
si0=f15269(i,si0);
l6=si0;
si0=!(si0);
if(si0){
goto L1;
}
si0=1U;
l3=si0;
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
goto L2;
}
si0=l6;
si1=l2;
i32_store(&i->m0,(U64)si0,si1);
L4:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+88U);
si1=1004U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si0=l5;
si1=l3;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l5;
si1=l3;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l5;
si1=l6;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l5;
si1=8U;
si0+=si1;
si1=l4;
si2=l1;
si3=l2;
si4=l5;
si5=16U;
si4+=si5;
f7593(i,si0,si1,si2,si3,si4);
si0=l0;
si1=l5;
sj1=i64_load(&i->m0,(U64)si1+8U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=32U;
si0+=si1;
i->g0=si0;
goto L0;
L3:;
si0=4U;
si1=8U;
f52(i,si0,si1);
UNREACHABLE;
L2:;
f15042(i);
UNREACHABLE;
L1:;
si0=4U;
si1=4U;
f52(i,si0,si1);
UNREACHABLE;
L0:;
}

void f9852(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4) {
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 l8=0;
U64 l9=0;
U32 si0,si1,si2,si3,si4;
U64 sj1,sj2;
si0=i->g0;
si1=16U;
si0-=si1;
l5=si0;
i->g0=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+56U);
l6=si0;
si1=8U;
si0&=si1;
if(si0){
goto L2;
}
si0=l6;
si1=16U;
si0+=si1;
l7=si0;
si1=l6;
si0=si0 < si1;
if(si0){
goto L2;
}
si0=l1;
si1=l7;
si2=l1;
si2=i32_load(&i->m0,(U64)si2+56U);
l8=si2;
si3=l8;
si4=l6;
si3=si3 == si4;
l6=si3;
si1=si3?si1:si2;
i32_store(&i->m0,(U64)si0+56U,si1);
si0=l6;
if(si0){
goto L1;
}
L2:;
si0=l1;
si1=56U;
si0+=si1;
si1=0U;
sj2=l9;
si3=1000000000U;
si0=f1432(i,si0,si1,sj2,si3);
L1:;
si0=l3;
si1=31U;
si0=(U32)((I32)si0>>(si1&31));
si1=l1;
si2=68U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
l7=si1;
si0&=si1;
si1=l3;
si0+=si1;
l6=si0;
si1=0U;
si0=(U32)((I32)si0<(I32)si1);
if(si0){
goto L9;
}
si0=l6;
si1=l7;
si0=si0 < si1;
if(si0){
goto L8;
}
L9:;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=18U;
si0=f15269(i,si0);
l6=si0;
si0=!(si0);
if(si0){
goto L5;
}
si0=l6;
si1=16U;
si0+=si1;
si1=0U;
si1=i32_load16_u(&i->m0,(U64)si1+1870201U);
i32_store16(&i->m0,(U64)si0,si1);
si0=l6;
si1=8U;
si0+=si1;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+1870193U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l6;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+1870185U);
i64_store(&i->m0,(U64)si0,sj1);
si0=1U;
l3=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+88U);
si1=388U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
si1=l7;
si1=i32_load(&i->m0,(U64)si1);
l8=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
sj1=77309411346ULL;
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l5;
si1=l6;
i32_store(&i->m0,(U64)si0,si1);
si0=l8;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 != si1;
if(si0){
goto L7;
}
goto L3;
L8:;
si0=l1;
si1=60U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=l6;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
l3=si0;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+88U);
l4=si0;
si0=1U;
si0=f15269(i,si0);
l6=si0;
si0=!(si0);
if(si0){
goto L4;
}
si0=l6;
si1=l3;
i32_store8(&i->m0,(U64)si0,si1);
si0=l4;
si1=24U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
si1=l4;
si1=i32_load(&i->m0,(U64)si1);
l3=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
sj1=4294967297ULL;
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l5;
si1=l6;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 == si1;
if(si0){
goto L3;
}
si0=0U;
l3=si0;
si0=l5;
si1=l4;
si2=0U;
si0=f8110(i,si0,si1,si2);
l6=si0;
goto L6;
L7:;
si0=l4;
si1=l7;
si2=l5;
si0=f7173(i,si0,si1,si2);
l6=si0;
L6:;
si0=l1;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+56U);
l4=si1;
si2=-16U;
si1+=si2;
i32_store(&i->m0,(U64)si0+56U,si1);
si0=l4;
si1=-14U;
si0&=si1;
si1=18U;
si0=si0 != si1;
if(si0){
goto L10;
}
si0=l1;
si1=56U;
si0+=si1;
f1433(i,si0);
L10:;
si0=l0;
si1=l6;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l3;
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=16U;
si0+=si1;
i->g0=si0;
goto L0;
L5:;
si0=1U;
si1=18U;
f52(i,si0,si1);
UNREACHABLE;
L4:;
si0=1U;
si1=1U;
f52(i,si0,si1);
UNREACHABLE;
L3:;
f15042(i);
UNREACHABLE;
L0:;
}

void f9853(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 si0,si1,si2,si3,si4;
si0=i->g0;
si1=16U;
si0-=si1;
l4=si0;
i->g0=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+88U);
si1=888U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si0=l2;
si1=l2;
si1=i32_load(&i->m0,(U64)si1);
l6=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l6;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 != si1;
if(si0){
goto L1;
}
f15042(i);
UNREACHABLE;
L1:;
si0=l4;
si1=8U;
si0+=si1;
si1=l3;
si2=l1;
si3=l5;
si4=l2;
f7596(i,si0,si1,si2,si3,si4);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+12U);
l2=si0;
si0=l0;
si1=l4;
si1=i32_load(&i->m0,(U64)si1+8U);
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l2;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l4;
si1=16U;
si0+=si1;
i->g0=si0;
L0:;
}

void f9854(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U32 si0,si1,si2,si3,si4;
si0=i->g0;
si1=16U;
si0-=si1;
l3=si0;
i->g0=si0;
si0=l3;
si1=8U;
si0+=si1;
si1=l2;
si2=l1;
si3=l2;
si3=i32_load(&i->m0,(U64)si3+88U);
si4=852U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
f7602(i,si0,si1,si2,si3);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+12U);
l2=si0;
si0=l0;
si1=l3;
si1=i32_load(&i->m0,(U64)si1+8U);
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l2;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l3;
si1=16U;
si0+=si1;
i->g0=si0;
L0:;
}

void f9855(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 si0,si1,si2,si3,si4;
si0=i->g0;
si1=16U;
si0-=si1;
l4=si0;
i->g0=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+88U);
si1=956U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si0=l2;
si1=l2;
si1=i32_load(&i->m0,(U64)si1);
l6=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l6;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 != si1;
if(si0){
goto L1;
}
f15042(i);
UNREACHABLE;
L1:;
si0=l4;
si1=8U;
si0+=si1;
si1=l3;
si2=l1;
si3=l5;
si4=l2;
f7596(i,si0,si1,si2,si3,si4);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+12U);
l2=si0;
si0=l0;
si1=l4;
si1=i32_load(&i->m0,(U64)si1+8U);
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l2;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l4;
si1=16U;
si0+=si1;
i->g0=si0;
L0:;
}

void f9856(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 si0,si1,si2,si3,si4;
si0=i->g0;
si1=16U;
si0-=si1;
l4=si0;
i->g0=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+88U);
si1=816U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si0=l2;
si1=l2;
si1=i32_load(&i->m0,(U64)si1);
l6=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l6;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 != si1;
if(si0){
goto L1;
}
f15042(i);
UNREACHABLE;
L1:;
si0=l4;
si1=8U;
si0+=si1;
si1=l3;
si2=l1;
si3=l5;
si4=l2;
f7596(i,si0,si1,si2,si3,si4);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+12U);
l2=si0;
si0=l0;
si1=l4;
si1=i32_load(&i->m0,(U64)si1+8U);
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l2;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l4;
si1=16U;
si0+=si1;
i->g0=si0;
L0:;
}

void f9857(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 si0,si1,si2,si3,si4;
si0=i->g0;
si1=16U;
si0-=si1;
l4=si0;
i->g0=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+88U);
si1=876U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si0=l2;
si1=l2;
si1=i32_load(&i->m0,(U64)si1);
l6=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l6;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 != si1;
if(si0){
goto L1;
}
f15042(i);
UNREACHABLE;
L1:;
si0=l4;
si1=8U;
si0+=si1;
si1=l3;
si2=l1;
si3=l5;
si4=l2;
f7596(i,si0,si1,si2,si3,si4);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+12U);
l2=si0;
si0=l0;
si1=l4;
si1=i32_load(&i->m0,(U64)si1+8U);
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l2;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l4;
si1=16U;
si0+=si1;
i->g0=si0;
L0:;
}

void f9858(rustpythonInstance*i,U32 l0) {
L0:;
}

void f9859(rustpythonInstance*i,U32 l0) {
U32 l1=0;
U32 si0,si1,si2;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
l0=si0;
si1=l0;
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
f7690(i,si0);
L1:;
L0:;
}

void f9860(rustpythonInstance*i,U32 l0) {
L0:;
}

void f9861(rustpythonInstance*i,U32 l0) {
U32 si0,si1;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+8U);
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
si0=l0;
si1=12U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
f15271(i,si0);
L1:;
L0:;
}

void f9862(rustpythonInstance*i,U32 l0) {
U32 si0,si1;
si0=l0;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L1;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+4U);
f15271(i,si0);
L1:;
L0:;
}

void f9863(rustpythonInstance*i,U32 l0) {
U32 l1=0;
U32 si0,si1,si2;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+4U);
l0=si0;
si1=l0;
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
f7690(i,si0);
L1:;
L0:;
}

void f9864(rustpythonInstance*i,U32 l0) {
U32 l1=0;
U32 l2=0;
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 si0,si1,si2,si3,si4,si5;
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
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si0=l0;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si1=l0;
si2=12U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
l4=si1;
si2=0U;
si3=l3;
si4=l4;
si5=l3;
si4=si4 < si5;
si2=si4?si2:si3;
si1-=si2;
l4=si1;
si2=l1;
si1+=si2;
si2=l1;
si3=l3;
si4=l4;
si3-=si4;
l5=si3;
si2=si2 > si3;
si0=si2?si0:si1;
l3=si0;
si1=l4;
si0=si0 == si1;
if(si0){
goto L2;
}
si0=l3;
si1=l4;
si0-=si1;
l6=si0;
si0=l2;
si1=l4;
si2=2U;
si1<<=(si2&31);
si0+=si1;
l3=si0;
L3:;
{
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
si1=l4;
si1=i32_load(&i->m0,(U64)si1);
l7=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l7;
si1=1U;
si0=si0 != si1;
if(si0){
goto L4;
}
si0=l4;
f7690(i,si0);
L4:;
si0=l3;
si1=4U;
si0+=si1;
l3=si0;
si0=l6;
si1=-1U;
si0+=si1;
l6=si0;
if(si0){
goto L3;
}
}
L2:;
si0=l1;
si1=l5;
si0=si0 <= si1;
if(si0){
goto L1;
}
si0=0U;
si1=l1;
si2=l5;
si1-=si2;
l3=si1;
si2=l3;
si3=l1;
si2=si2 > si3;
si0=si2?si0:si1;
l4=si0;
L5:;
{
si0=l2;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
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
goto L6;
}
si0=l3;
f7690(i,si0);
L6:;
si0=l2;
si1=4U;
si0+=si1;
l2=si0;
si0=l4;
si1=-1U;
si0+=si1;
l4=si0;
if(si0){
goto L5;
}
}
L1:;
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
L0:;
}

void f9865(rustpythonInstance*i,U32 l0) {
U32 l1=0;
U32 si0,si1,si2;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
l0=si0;
si0=!(si0);
if(si0){
goto L1;
}
si0=l0;
si1=l0;
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
f7690(i,si0);
L1:;
L0:;
}

void f9866(rustpythonInstance*i,U32 l0) {
L0:;
}

void f9867(rustpythonInstance*i,U32 l0) {
U32 l1=0;
U32 l2=0;
U32 si0,si1,si2;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+4U);
l1=si0;
si0=!(si0);
if(si0){
goto L1;
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
goto L1;
}
si0=l1;
f7690(i,si0);
L1:;
si0=l0;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l0=si0;
si0=!(si0);
if(si0){
goto L2;
}
si0=l0;
si1=l0;
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
si0=l0;
f7690(i,si0);
L2:;
L0:;
}

void f9868(rustpythonInstance*i,U32 l0) {
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

void f9869(rustpythonInstance*i,U32 l0) {
U32 l1=0;
U32 l2=0;
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 si0,si1,si2;
si0=l0;
si1=20U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si0=!(si0);
if(si0){
goto L1;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+16U);
si1=l1;
si2=2U;
si1<<=(si2&31);
si2=11U;
si1+=si2;
si2=-8U;
si1&=si2;
si0-=si1;
f15271(i,si0);
L1:;
si0=l0;
si1=32U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si0=l0;
si1=40U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=!(si0);
if(si0){
goto L2;
}
si0=l2;
l1=si0;
L3:;
{
si0=l1;
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L4;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
f15271(i,si0);
L4:;
si0=l1;
si1=12U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
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
goto L5;
}
si0=l4;
f7690(i,si0);
L5:;
si0=l1;
si1=20U;
si0+=si1;
l1=si0;
si0=l3;
si1=-1U;
si0+=si1;
l3=si0;
if(si0){
goto L3;
}
}
L2:;
si0=l0;
si1=36U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L6;
}
si0=l2;
f15271(i,si0);
L6:;
L0:;
}

void f9870(rustpythonInstance*i,U32 l0) {
U32 l1=0;
U32 l2=0;
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 si0,si1,si2;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+48U);
l1=si0;
si0=l0;
si1=56U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si0=!(si0);
if(si0){
goto L1;
}
si0=l1;
l3=si0;
L2:;
{
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
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
goto L3;
}
si0=l4;
f7690(i,si0);
L3:;
si0=l3;
si1=4U;
si0+=si1;
l3=si0;
si0=l2;
si1=-1U;
si0+=si1;
l2=si0;
if(si0){
goto L2;
}
}
L1:;
si0=l0;
si1=52U;
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
si1=20U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=!(si0);
if(si0){
goto L5;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+16U);
si1=l3;
si2=2U;
si1<<=(si2&31);
si2=11U;
si1+=si2;
si2=-8U;
si1&=si2;
si0-=si1;
f15271(i,si0);
L5:;
si0=l0;
si1=32U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si0=l0;
si1=40U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si0=!(si0);
if(si0){
goto L6;
}
si0=l1;
l3=si0;
L7:;
{
si0=l3;
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L8;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
f15271(i,si0);
L8:;
si0=l3;
si1=12U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
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
goto L9;
}
si0=l4;
f7690(i,si0);
L9:;
si0=l3;
si1=20U;
si0+=si1;
l3=si0;
si0=l2;
si1=-1U;
si0+=si1;
l2=si0;
if(si0){
goto L7;
}
}
L6:;
si0=l0;
si1=36U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L10;
}
si0=l1;
f15271(i,si0);
L10:;
L0:;
}

void f9871(rustpythonInstance*i,U32 l0,U32 l1) {
U32 si0,si1,si2;
si0=l0;
if(si0){
goto L3;
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
si0=si0 == si1;
if(si0){
goto L2;
}
goto L1;
L3:;
si0=l1;
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
L2:;
si0=l1;
f7690(i,si0);
L1:;
L0:;
}

void f9872(rustpythonInstance*i,U32 l0) {
L0:;
}

void f9873(rustpythonInstance*i,U32 l0,U32 l1) {
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
U64 l22=0;
U64 l23=0;
U32 l24=0;
U32 l25=0;
U32 si0,si1,si2,si3,si4;
U64 sj0,sj1;
si0=i->g0;
si1=16U;
si0-=si1;
l2=si0;
i->g0=si0;
si0=0U;
l3=si0;
si0=l1;
si0=i32_load8_u(&i->m0,(U64)si0+73U);
si0=!(si0);
if(si0){
goto L4;
}
goto L3;
L4:;
si0=l1;
si0=i32_load8_u(&i->m0,(U64)si0+72U);
if(si0){
goto L5;
}
si0=l1;
si1=1U;
i32_store8(&i->m0,(U64)si0+72U,si1);
si0=l2;
si1=8U;
si0+=si1;
si1=l1;
f9873(i,si0,si1);
si0=l2;
si0=i32_load(&i->m0,(U64)si0+12U);
l4=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+8U);
l5=si0;
si0=!(si0);
if(si0){
goto L6;
}
si0=l4;
si0=!(si0);
if(si0){
goto L6;
}
si0=l5;
l3=si0;
goto L3;
L6:;
si0=l1;
si0=i32_load8_u(&i->m0,(U64)si0+73U);
if(si0){
goto L3;
}
L5:;
si0=l1;
si1=48U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L12;
}
si0=l1;
si1=14U;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
if(si0){
goto L8;
}
si0=l1;
si0=i32_load8_u(&i->m0,(U64)si0+13U);
l3=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+8U);
l7=si0;
si0=!(si0);
if(si0){
goto L11;
}
si0=l7;
si1=l1;
si2=52U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
l5=si1;
si0=si0 < si1;
if(si0){
goto L14;
}
si0=l7;
si1=l5;
si0=si0 == si1;
if(si0){
goto L13;
}
goto L1;
L14:;
si0=l6;
si1=l7;
si0+=si1;
si0=i32_load8_s(&i->m0,(U64)si0);
si1=-64U;
si0=(U32)((I32)si0<(I32)si1);
if(si0){
goto L1;
}
L13:;
si0=l6;
si1=l7;
si0+=si1;
l8=si0;
si1=-1U;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
l4=si0;
si0=(U32)(U32)(I8)(U8)(si0);
l9=si0;
si1=-1U;
si0=(U32)((I32)si0>(I32)si1);
if(si0){
goto L15;
}
si0=l8;
si1=-2U;
si0+=si1;
l4=si0;
si0=i32_load8_u(&i->m0,(U64)si0);
l8=si0;
si0=(U32)(U32)(I8)(U8)(si0);
l10=si0;
si1=-65U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L17;
}
si0=l8;
si1=31U;
si0&=si1;
l4=si0;
goto L16;
L17:;
si0=l4;
si1=-1U;
si0+=si1;
l4=si0;
si0=i32_load8_u(&i->m0,(U64)si0);
l8=si0;
si0=(U32)(U32)(I8)(U8)(si0);
l11=si0;
si1=-65U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L19;
}
si0=l8;
si1=15U;
si0&=si1;
l4=si0;
goto L18;
L19:;
si0=l4;
si1=-1U;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=7U;
si0&=si1;
si1=6U;
si0<<=(si1&31);
si1=l11;
si2=63U;
si1&=si2;
si0|=si1;
l4=si0;
L18:;
si0=l4;
si1=6U;
si0<<=(si1&31);
si1=l10;
si2=63U;
si1&=si2;
si0|=si1;
l4=si0;
L16:;
si0=l4;
si1=6U;
si0<<=(si1&31);
si1=l9;
si2=63U;
si1&=si2;
si0|=si1;
l4=si0;
L15:;
si0=l3;
si1=255U;
si0&=si1;
if(si0){
goto L22;
}
si0=l4;
si1=1114112U;
si0=si0 == si1;
if(si0){
goto L20;
}
si0=-1U;
l3=si0;
si0=l4;
si1=128U;
si0=si0 < si1;
if(si0){
goto L23;
}
si0=-2U;
l3=si0;
si0=l4;
si1=2048U;
si0=si0 < si1;
if(si0){
goto L23;
}
si0=-3U;
si1=-4U;
si2=l4;
si3=65536U;
si2=si2 < si3;
si0=si2?si0:si1;
l3=si0;
L23:;
si0=l1;
si1=l3;
si2=l7;
si1+=si2;
l7=si1;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l7;
if(si0){
goto L24;
}
si0=0U;
l3=si0;
si0=0U;
l7=si0;
goto L21;
L24:;
si0=l7;
si1=l5;
si0=si0 < si1;
if(si0){
goto L26;
}
si0=l7;
si1=l5;
si0=si0 == si1;
if(si0){
goto L25;
}
goto L2;
L26:;
si0=l6;
si1=l7;
si0+=si1;
si0=i32_load8_s(&i->m0,(U64)si0);
si1=-64U;
si0=(U32)((I32)si0<(I32)si1);
if(si0){
goto L2;
}
L25:;
si0=1U;
l3=si0;
si0=l6;
si1=l7;
si0+=si1;
l4=si0;
si1=-1U;
si0+=si1;
si0=i32_load8_s(&i->m0,(U64)si0);
si1=-1U;
si0=(U32)((I32)si0>(I32)si1);
if(si0){
goto L22;
}
si0=l4;
si1=-2U;
si0+=si1;
si0=i32_load8_s(&i->m0,(U64)si0);
si1=-65U;
si0=(U32)((I32)si0>(I32)si1);
L22:;
si0=l3;
si1=1U;
si0^=si1;
l3=si0;
L21:;
si0=l1;
si1=l3;
i32_store8(&i->m0,(U64)si0+13U,si1);
si0=l7;
l12=si0;
goto L10;
L20:;
si0=l1;
si1=1U;
i32_store8(&i->m0,(U64)si0+13U,si1);
goto L9;
L12:;
si0=l1;
si1=32U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l12=si0;
si1=l1;
si2=60U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
l11=si1;
si0-=si1;
l3=si0;
si1=l1;
si2=52U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
l8=si1;
si0=si0 >= si1;
if(si0){
goto L31;
}
si0=l1;
si1=36U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l13=si0;
si0=l1;
si1=20U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l14=si0;
si1=l11;
si2=l14;
si3=l11;
si2=si2 > si3;
si0=si2?si0:si1;
l15=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+56U);
l16=si0;
si1=-1U;
si0+=si1;
l17=si0;
si0=l6;
si1=l11;
si0-=si1;
l18=si0;
si0=0U;
si1=l11;
si0-=si1;
l19=si0;
si0=l1;
si1=40U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l20=si0;
si0=l1;
si1=24U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l21=si0;
si0=l1;
sj0=i64_load(&i->m0,(U64)si0+8U);
l22=sj0;
L32:;
{
sj0=1ULL;
si1=l6;
si2=l3;
si1+=si2;
sj1=i64_load8_u(&i->m0,(U64)si1);
sj0<<=(sj1&63);
sj1=l22;
sj0&=sj1;
l23=sj0;
si0=l13;
si1=-1U;
si0=si0 != si1;
if(si0){
goto L36;
}
sj0=l23;
sj1=0ULL;
si0=sj0 == sj1;
if(si0){
goto L37;
}
si0=l11;
l24=si0;
si0=l3;
l7=si0;
goto L33;
L37:;
L38:;
{
si0=l19;
si1=l3;
si0+=si1;
si1=l8;
si0=si0 >= si1;
if(si0){
goto L31;
}
si0=l18;
si1=l3;
si0+=si1;
l4=si0;
si0=l3;
si1=l11;
si0-=si1;
l7=si0;
l3=si0;
sj0=l22;
si1=l4;
sj1=i64_load8_u(&i->m0,(U64)si1);
sj0>>=(sj1&63);
si0=(U32)(sj0);
si1=1U;
si0&=si1;
if(si0){
goto L35;
}
goto L38;
}
L36:;
sj0=l23;
sj1=0ULL;
si0=sj0 == sj1;
if(si0){
goto L34;
}
si0=l20;
l24=si0;
si0=l3;
l7=si0;
goto L33;
L35:;
si0=l11;
si1=l7;
si0+=si1;
l12=si0;
si0=l11;
l24=si0;
goto L33;
L34:;
si0=l1;
si1=l11;
i32_store(&i->m0,(U64)si0+40U,si1);
L39:;
{
si0=l19;
si1=l3;
si0+=si1;
si1=l8;
si0=si0 >= si1;
if(si0){
goto L31;
}
si0=l18;
si1=l3;
si0+=si1;
l4=si0;
si0=l3;
si1=l11;
si0-=si1;
l7=si0;
l3=si0;
sj0=l22;
si1=l4;
sj1=i64_load8_u(&i->m0,(U64)si1);
sj0>>=(sj1&63);
sj1=1ULL;
sj0&=sj1;
si0=!(sj0);
if(si0){
goto L39;
}
}
si0=l11;
si1=l7;
si0+=si1;
l12=si0;
si0=l11;
l24=si0;
si0=l11;
l20=si0;
L33:;
si0=l14;
si1=l14;
si2=l20;
si3=l14;
si4=l20;
si3=si3 < si4;
si1=si3?si1:si2;
si2=l13;
si3=-1U;
si2=si2 == si3;
l25=si2;
si0=si2?si0:si1;
l3=si0;
si1=-1U;
si0+=si1;
l4=si0;
si1=l11;
si0=si0 >= si1;
if(si0){
goto L43;
}
si0=l17;
si1=l3;
si0+=si1;
l5=si0;
si0=0U;
si1=l3;
si0-=si1;
l4=si0;
si0=l3;
si1=l7;
si0+=si1;
si1=-1U;
si0+=si1;
l3=si0;
L44:;
{
si0=l4;
si0=!(si0);
if(si0){
goto L42;
}
si0=l3;
si1=l8;
si0=si0 >= si1;
if(si0){
goto L27;
}
si0=l4;
si1=1U;
si0+=si1;
l4=si0;
si0=l6;
si1=l3;
si0+=si1;
l9=si0;
si0=l5;
si0=i32_load8_u(&i->m0,(U64)si0);
l10=si0;
si0=l3;
si1=-1U;
si0+=si1;
l3=si0;
si0=l5;
si1=-1U;
si0+=si1;
l5=si0;
si0=l10;
si1=l9;
si1=i32_load8_u(&i->m0,(U64)si1);
si0=si0 == si1;
if(si0){
goto L44;
}
}
si0=l12;
si1=l14;
si0-=si1;
si1=l4;
si0-=si1;
l12=si0;
si0=l11;
l3=si0;
si0=l25;
si0=!(si0);
if(si0){
goto L41;
}
goto L40;
L43:;
si0=l3;
if(si0){
goto L30;
}
L42:;
si0=l24;
si1=l14;
si2=l24;
si3=l14;
si2=si2 > si3;
si0=si2?si0:si1;
l9=si0;
si0=l6;
si1=l7;
si0+=si1;
l10=si0;
si0=l14;
l3=si0;
L45:;
{
si0=l9;
si1=l3;
si0=si0 != si1;
if(si0){
goto L46;
}
si0=l1;
si1=l7;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l13;
si1=-1U;
si0=si0 == si1;
if(si0){
goto L10;
}
si0=l1;
si1=l11;
i32_store(&i->m0,(U64)si0+40U,si1);
goto L10;
L46:;
si0=l15;
si1=l3;
si0=si0 == si1;
if(si0){
goto L29;
}
si0=l7;
si1=l3;
si0+=si1;
si1=l8;
si0=si0 >= si1;
if(si0){
goto L28;
}
si0=l10;
si1=l3;
si0+=si1;
l4=si0;
si0=l16;
si1=l3;
si0+=si1;
l5=si0;
si0=l3;
si1=1U;
si0+=si1;
l3=si0;
si0=l5;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=l4;
si1=i32_load8_u(&i->m0,(U64)si1);
si0=si0 == si1;
if(si0){
goto L45;
}
}
si0=l12;
si1=l21;
si0-=si1;
l12=si0;
si0=l21;
l3=si0;
si0=l25;
if(si0){
goto L40;
}
L41:;
si0=l1;
si1=l3;
i32_store(&i->m0,(U64)si0+40U,si1);
si0=l3;
l20=si0;
L40:;
si0=l12;
si1=l11;
si0-=si1;
l3=si0;
si1=l8;
si0=si0 < si1;
if(si0){
goto L32;
}
}
L31:;
si0=l1;
si1=0U;
i32_store(&i->m0,(U64)si0+32U,si1);
goto L8;
L30:;
si0=l4;
si1=l11;
si2=1834260U;
f663(i,si0,si1,si2);
UNREACHABLE;
L29:;
si0=l15;
si1=l11;
si2=1834228U;
f663(i,si0,si1,si2);
UNREACHABLE;
L28:;
si0=l8;
si1=l7;
si2=l14;
si1+=si2;
l3=si1;
si2=l8;
si3=l3;
si2=si2 > si3;
si0=si2?si0:si1;
si1=l8;
si2=1834244U;
f663(i,si0,si1,si2);
UNREACHABLE;
L27:;
si0=l3;
si1=l8;
si2=1834276U;
f663(i,si0,si1,si2);
UNREACHABLE;
L11:;
si0=l1;
si1=l3;
si2=1U;
si1^=si2;
i32_store8(&i->m0,(U64)si0+13U,si1);
si0=0U;
l7=si0;
si0=0U;
l12=si0;
si0=l3;
si1=255U;
si0&=si1;
si0=!(si0);
if(si0){
goto L9;
}
L10:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+68U);
l3=si0;
si0=l1;
si1=l7;
i32_store(&i->m0,(U64)si0+68U,si1);
si0=l3;
si1=l12;
si0-=si1;
l4=si0;
goto L7;
L9:;
si0=l1;
si1=1U;
i32_store8(&i->m0,(U64)si0+14U,si1);
L8:;
si0=l1;
si1=1U;
i32_store8(&i->m0,(U64)si0+73U,si1);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+68U);
si1=l1;
si1=i32_load(&i->m0,(U64)si1+64U);
l12=si1;
si0-=si1;
l4=si0;
L7:;
si0=l6;
si1=l12;
si0+=si1;
l3=si0;
L3:;
si0=l0;
si1=l4;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l3;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=16U;
si0+=si1;
i->g0=si0;
goto L0;
L2:;
si0=1U;
l3=si0;
L1:;
si0=l1;
si1=l3;
si2=1U;
si1^=si2;
i32_store8(&i->m0,(U64)si0+13U,si1);
si0=l6;
si1=l5;
si2=0U;
si3=l7;
si4=1834632U;
f737(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L0:;
}

void f9874(rustpythonInstance*i,U32 l0,U32 l1) {
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
U32 si0,si1,si2,si3,si4;
si0=i->g0;
si1=32U;
si0-=si1;
l2=si0;
i->g0=si0;
si0=0U;
l3=si0;
si0=l1;
si0=i32_load8_u(&i->m0,(U64)si0+37U);
si0=!(si0);
if(si0){
goto L2;
}
goto L1;
L2:;
si0=l1;
si0=i32_load8_u(&i->m0,(U64)si0+36U);
if(si0){
goto L3;
}
si0=l1;
si1=1U;
i32_store8(&i->m0,(U64)si0+36U,si1);
si0=l2;
si1=24U;
si0+=si1;
si1=l1;
f9874(i,si0,si1);
si0=l2;
si0=i32_load(&i->m0,(U64)si0+28U);
l4=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+24U);
l5=si0;
si0=!(si0);
if(si0){
goto L4;
}
si0=l4;
si0=!(si0);
if(si0){
goto L4;
}
si0=l5;
l3=si0;
goto L1;
L4:;
si0=l1;
si0=i32_load8_u(&i->m0,(U64)si0+37U);
if(si0){
goto L1;
}
L3:;
si0=l1;
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+16U);
l3=si0;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+12U);
l4=si1;
si0=si0 < si1;
if(si0){
goto L6;
}
si0=l3;
si1=l1;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
l7=si1;
si0=si0 > si1;
if(si0){
goto L6;
}
si0=l1;
si1=24U;
si0+=si1;
l8=si0;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+20U);
l9=si1;
si2=-1U;
si1+=si2;
l5=si1;
si0+=si1;
l10=si0;
si0=l6;
si1=l4;
si0+=si1;
l11=si0;
si0=l9;
si1=4U;
si0=si0 > si1;
if(si0){
goto L8;
}
L9:;
{
si0=l2;
si1=16U;
si0+=si1;
si1=l10;
si1=i32_load8_u(&i->m0,(U64)si1);
si2=l11;
si3=l3;
si4=l4;
si3-=si4;
f753(i,si0,si1,si2,si3);
si0=l2;
si0=i32_load(&i->m0,(U64)si0+16U);
si1=1U;
si0=si0 != si1;
if(si0){
goto L7;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=l4;
si0+=si1;
l3=si0;
si1=l5;
si0=si0 < si1;
if(si0){
goto L10;
}
si0=l3;
si1=l5;
si0-=si1;
l12=si0;
si1=l9;
si0+=si1;
l13=si0;
si1=l12;
si0=si0 < si1;
if(si0){
goto L10;
}
si0=l13;
si1=l7;
si0=si0 > si1;
if(si0){
goto L10;
}
si0=l6;
si1=l12;
si0+=si1;
si1=l8;
si2=l9;
si0=f15389(i,si0,si1,si2);
if(si0){
goto L10;
}
si0=l1;
si1=l12;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+32U);
l3=si0;
si0=l1;
si1=l12;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l3;
si1=l13;
si0-=si1;
l4=si0;
goto L5;
L10:;
si0=l1;
si1=l3;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l3;
si1=l7;
si0=si0 > si1;
if(si0){
goto L6;
}
si0=l3;
si1=l4;
si0=si0 >= si1;
if(si0){
goto L9;
}
goto L6;
}
L8:;
L11:;
{
si0=l2;
si1=8U;
si0+=si1;
si1=l10;
si1=i32_load8_u(&i->m0,(U64)si1);
si2=l11;
si3=l3;
si4=l4;
si3-=si4;
f753(i,si0,si1,si2,si3);
si0=l2;
si0=i32_load(&i->m0,(U64)si0+8U);
si1=1U;
si0=si0 != si1;
if(si0){
goto L7;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0+12U);
si1=l4;
si0+=si1;
l3=si0;
si1=l5;
si0=si0 < si1;
if(si0){
goto L13;
}
si0=l3;
si1=l5;
si0-=si1;
l13=si0;
si1=l9;
si0+=si1;
l12=si0;
si1=l13;
si0=si0 < si1;
if(si0){
goto L13;
}
si0=l12;
si1=l7;
si0=si0 <= si1;
if(si0){
goto L12;
}
L13:;
si0=l1;
si1=l3;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l3;
si1=l7;
si0=si0 > si1;
if(si0){
goto L6;
}
si0=l3;
si1=l4;
si0=si0 >= si1;
if(si0){
goto L11;
}
goto L6;
L12:;
}
si0=l9;
si1=4U;
si2=1834680U;
f666(i,si0,si1,si2);
UNREACHABLE;
L7:;
si0=l1;
si1=l4;
i32_store(&i->m0,(U64)si0+16U,si1);
L6:;
si0=l1;
si1=1U;
i32_store8(&i->m0,(U64)si0+37U,si1);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+32U);
si1=l1;
si1=i32_load(&i->m0,(U64)si1+28U);
l13=si1;
si0-=si1;
l4=si0;
L5:;
si0=l6;
si1=l13;
si0+=si1;
l3=si0;
L1:;
si0=l0;
si1=l4;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l3;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=32U;
si0+=si1;
i->g0=si0;
L0:;
}

void f9875(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4,U32 l5,U32 l6) {
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
U32 si0,si1,si2,si3;
U64 sj0,sj1;
si0=l5;
si1=-1U;
si0+=si1;
l7=si0;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+20U);
l8=si1;
si0+=si1;
l9=si0;
si1=l3;
si0=si0 >= si1;
if(si0){
goto L6;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+16U);
l10=si0;
si0=l1;
sj0=i64_load(&i->m0,(U64)si0);
l11=sj0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+8U);
l12=si0;
si0=l6;
if(si0){
goto L7;
}
si0=l5;
si1=l10;
si0-=si1;
l13=si0;
si0=1U;
si1=l12;
si0-=si1;
l14=si0;
si0=l2;
si1=l5;
si2=1U;
si1<<=(si2&31);
si2=-1U;
si1+=si2;
l15=si1;
si0+=si1;
l16=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+28U);
l17=si0;
L8:;
{
sj0=l11;
si1=l2;
si2=l9;
si1+=si2;
sj1=i64_load8_u(&i->m0,(U64)si1);
sj0>>=(sj1&63);
si0=(U32)(sj0);
si1=1U;
si0&=si1;
if(si0){
goto L9;
}
si0=l1;
si1=0U;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l7;
si1=l8;
si2=l5;
si1+=si2;
si0+=si1;
si1=l3;
si0=si0 >= si1;
if(si0){
goto L6;
}
L11:;
{
sj0=l11;
si1=l16;
si2=l8;
si1+=si2;
sj1=i64_load8_u(&i->m0,(U64)si1);
sj0>>=(sj1&63);
sj1=1ULL;
sj0&=sj1;
si0=!(sj0);
si0=!(si0);
if(si0){
goto L10;
}
si0=l1;
si1=0U;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l15;
si1=l8;
si2=l5;
si1+=si2;
l8=si1;
si0+=si1;
si1=l3;
si0=si0 >= si1;
if(si0){
goto L6;
}
goto L11;
}
L10:;
si0=l5;
si1=l8;
si0+=si1;
l8=si0;
si0=0U;
l17=si0;
L9:;
si0=l12;
si1=l17;
si2=l12;
si3=l17;
si2=si2 > si3;
si0=si2?si0:si1;
l18=si0;
si1=l5;
si0=si0 >= si1;
if(si0){
goto L14;
}
si0=l2;
si1=l8;
si0+=si1;
l19=si0;
si0=l18;
l9=si0;
L15:;
{
si0=l8;
si1=l9;
si0+=si1;
si1=l3;
si0=si0 >= si1;
if(si0){
goto L1;
}
si0=l4;
si1=l9;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=l19;
si2=l9;
si1+=si2;
si1=i32_load8_u(&i->m0,(U64)si1);
si0=si0 != si1;
if(si0){
goto L13;
}
si0=l5;
si1=l9;
si2=1U;
si1+=si2;
l9=si1;
si0=si0 != si1;
if(si0){
goto L15;
}
}
L14:;
si0=l12;
l9=si0;
L16:;
{
si0=l17;
si1=l9;
si0=si0 >= si1;
if(si0){
goto L5;
}
si0=l9;
si1=-1U;
si0+=si1;
l9=si0;
si1=l5;
si0=si0 >= si1;
if(si0){
goto L4;
}
si0=l9;
si1=l8;
si0+=si1;
l19=si0;
si1=l3;
si0=si0 >= si1;
if(si0){
goto L3;
}
si0=l4;
si1=l9;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=l2;
si2=l19;
si1+=si2;
si1=i32_load8_u(&i->m0,(U64)si1);
si0=si0 == si1;
if(si0){
goto L16;
}
}
si0=l8;
si1=l10;
si0+=si1;
l8=si0;
si0=l13;
l17=si0;
goto L12;
L13:;
si0=l14;
si1=l8;
si0+=si1;
si1=l9;
si0+=si1;
l8=si0;
si0=0U;
l17=si0;
L12:;
si0=l1;
si1=l17;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l7;
si1=l8;
si0+=si1;
l9=si0;
si1=l3;
si0=si0 < si1;
if(si0){
goto L8;
}
goto L6;
}
L7:;
si0=l12;
si1=-1U;
si0+=si1;
l16=si0;
si0=l12;
si1=l5;
si0=si0 < si1;
if(si0){
goto L18;
}
goto L17;
L18:;
si0=l2;
si1=l12;
si0+=si1;
l15=si0;
si0=l4;
si1=l12;
si0+=si1;
l13=si0;
si0=l5;
si1=l12;
si0-=si1;
l14=si0;
L19:;
{
sj0=l11;
si1=l2;
si2=l9;
si1+=si2;
sj1=i64_load8_u(&i->m0,(U64)si1);
sj0>>=(sj1&63);
sj1=1ULL;
sj0&=sj1;
si0=!(sj0);
if(si0){
goto L20;
}
si0=l8;
l9=si0;
si0=l13;
l19=si0;
si0=l14;
l17=si0;
L22:;
{
si0=l12;
si1=l9;
si0+=si1;
si1=l3;
si0=si0 < si1;
if(si0){
goto L23;
}
si0=l12;
l18=si0;
goto L1;
L23:;
si0=l19;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=l15;
si2=l9;
si1+=si2;
si1=i32_load8_u(&i->m0,(U64)si1);
si0=si0 == si1;
if(si0){
goto L24;
}
si0=l9;
si1=1U;
si0+=si1;
l8=si0;
goto L21;
L24:;
si0=l9;
si1=1U;
si0+=si1;
l9=si0;
si0=l19;
si1=1U;
si0+=si1;
l19=si0;
si0=l17;
si1=-1U;
si0+=si1;
l17=si0;
if(si0){
goto L22;
}
}
si0=l2;
si1=l8;
si0+=si1;
l18=si0;
si0=l16;
l9=si0;
L25:;
{
si0=l9;
si1=-1U;
si0=si0 == si1;
if(si0){
goto L5;
}
si0=l16;
si1=l5;
si0=si0 >= si1;
if(si0){
goto L4;
}
si0=l8;
si1=l9;
si0+=si1;
l19=si0;
si1=l3;
si0=si0 >= si1;
if(si0){
goto L3;
}
si0=l18;
si1=l9;
si0+=si1;
l19=si0;
si0=l4;
si1=l9;
si0+=si1;
l17=si0;
si0=l9;
si1=-1U;
si0+=si1;
l9=si0;
si0=l17;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=l19;
si1=i32_load8_u(&i->m0,(U64)si1);
si0=si0 == si1;
if(si0){
goto L25;
}
}
si0=l8;
si1=l10;
si0+=si1;
l8=si0;
L21:;
si0=l7;
si1=l8;
si0+=si1;
l9=si0;
si1=l3;
si0=si0 < si1;
if(si0){
goto L19;
}
goto L6;
L20:;
si0=l1;
si1=l8;
si2=l5;
si1+=si2;
l8=si1;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l7;
si1=l8;
si0+=si1;
l9=si0;
si1=l3;
si0=si0 < si1;
if(si0){
goto L19;
}
goto L6;
}
L17:;
L26:;
{
sj0=l11;
si1=l2;
si2=l9;
si1+=si2;
sj1=i64_load8_u(&i->m0,(U64)si1);
sj0>>=(sj1&63);
sj1=1ULL;
sj0&=sj1;
si0=!(sj0);
si0=!(si0);
if(si0){
goto L27;
}
si0=l1;
si1=l8;
si2=l5;
si1+=si2;
l8=si1;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l7;
si1=l8;
si0+=si1;
l9=si0;
si1=l3;
si0=si0 >= si1;
if(si0){
goto L6;
}
goto L26;
L27:;
si0=l2;
si1=l8;
si0+=si1;
l12=si0;
si0=l16;
l9=si0;
L28:;
{
si0=l9;
si1=-1U;
si0=si0 == si1;
if(si0){
goto L5;
}
si0=l16;
si1=l5;
si0=si0 >= si1;
if(si0){
goto L4;
}
si0=l8;
si1=l9;
si0+=si1;
l19=si0;
si1=l3;
si0=si0 >= si1;
if(si0){
goto L3;
}
si0=l12;
si1=l9;
si0+=si1;
l19=si0;
si0=l4;
si1=l9;
si0+=si1;
l17=si0;
si0=l9;
si1=-1U;
si0+=si1;
l9=si0;
si0=l17;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=l19;
si1=i32_load8_u(&i->m0,(U64)si1);
si0=si0 == si1;
if(si0){
goto L28;
}
}
si0=l7;
si1=l8;
si2=l10;
si1+=si2;
l8=si1;
si0+=si1;
l9=si0;
si1=l3;
si0=si0 < si1;
if(si0){
goto L26;
}
}
L6:;
si0=l1;
si1=l3;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
goto L0;
L5:;
si0=l1;
si1=l8;
si2=l5;
si1+=si2;
l9=si1;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l6;
if(si0){
goto L2;
}
si0=l1;
si1=0U;
i32_store(&i->m0,(U64)si0+28U,si1);
goto L2;
L4:;
si0=l9;
si1=l5;
si2=1834180U;
f663(i,si0,si1,si2);
UNREACHABLE;
L3:;
si0=l19;
si1=l3;
si2=1834196U;
f663(i,si0,si1,si2);
UNREACHABLE;
L2:;
si0=l0;
si1=l8;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=8U;
si0+=si1;
si1=l9;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=1U;
i32_store(&i->m0,(U64)si0,si1);
goto L0;
L1:;
si0=l3;
si1=l18;
si2=l8;
si1+=si2;
l9=si1;
si2=l3;
si3=l9;
si2=si2 > si3;
si0=si2?si0:si1;
si1=l3;
si2=1834212U;
f663(i,si0,si1,si2);
UNREACHABLE;
L0:;
}

void f9876(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4) {
U32 l5=0;
U32 l6=0;
U32 si0,si1,si2,si3,si4;
U64 sj1;
si0=i->g0;
si1=64U;
si0-=si1;
l5=si0;
i->g0=si0;
si0=l1;
if(si0){
goto L3;
}
si0=l2;
l3=si0;
goto L2;
L3:;
si0=l5;
si1=48U;
si0+=si1;
si1=l4;
si1=i32_load(&i->m0,(U64)si1+28U);
si2=56U;
si1+=si2;
f9877(i,si0,si1);
si0=l5;
si1=28U;
si0+=si1;
sj1=1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=847U;
i32_store(&i->m0,(U64)si0+44U,si1);
si0=l5;
si1=1U;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l5;
si1=1848896U;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l5;
si1=l5;
si2=48U;
si1+=si2;
i32_store(&i->m0,(U64)si0+40U,si1);
si0=l5;
si1=l5;
si2=40U;
si1+=si2;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l5;
si1=l5;
si2=16U;
si1+=si2;
f63(i,si0,si1);
si0=l5;
si0=i32_load(&i->m0,(U64)si0+48U);
switch(si0){
case 0:
goto L4;
case 1:
goto L7;
case 2:
goto L6;
case 3:
goto L5;
default:
goto L8;
}
L8:;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+52U);
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
goto L4;
}
si0=l4;
f1433(i,si0);
goto L4;
L7:;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+52U);
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
goto L4;
}
si0=l4;
si1=0U;
f1440(i,si0,si1);
goto L4;
L6:;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+52U);
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
goto L4;
}
si0=l4;
si1=0U;
f1440(i,si0,si1);
goto L4;
L5:;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+52U);
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
goto L4;
}
si0=l4;
f1433(i,si0);
L4:;
si0=l5;
si1=16U;
si0+=si1;
si1=8U;
si0+=si1;
si1=l5;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=l5;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+16U,sj1);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+88U);
si1=504U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
si1=l4;
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
si0=l3;
si1=l4;
si2=l5;
si3=16U;
si2+=si3;
si0=f7173(i,si0,si1,si2);
l3=si0;
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
goto L2;
}
si0=l2;
f7690(i,si0);
L2:;
si0=l0;
si1=l3;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l1;
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=64U;
si0+=si1;
i->g0=si0;
goto L0;
L1:;
f15042(i);
UNREACHABLE;
L0:;
}

void f9877(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U64 l7=0;
U32 si0,si1,si2,si3,si4;
U64 sj1,sj2;
si0=i->g0;
si1=16U;
si0-=si1;
l2=si0;
i->g0=si0;
si0=l1;
si1=17U;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=2U;
si0&=si1;
si0=!(si0);
if(si0){
goto L3;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+420U);
l1=si0;
if(si0){
goto L2;
}
si0=1833076U;
si1=43U;
si2=1836632U;
f673(i,si0,si1,si2);
UNREACHABLE;
L3:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
l4=si0;
l1=si0;
L5:;
{
si0=l2;
si1=8U;
si0+=si1;
si1=46U;
si2=l3;
si3=l1;
f753(i,si0,si1,si2,si3);
si0=l2;
si0=i32_load(&i->m0,(U64)si0+8U);
si1=1U;
si0=si0 != si1;
if(si0){
goto L4;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0+12U);
l1=si0;
si1=1U;
si0+=si1;
l5=si0;
si0=!(si0);
if(si0){
goto L6;
}
si0=l4;
si1=l5;
si0=si0 < si1;
if(si0){
goto L6;
}
si0=l3;
si1=l1;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=46U;
si0=si0 != si1;
if(si0){
goto L6;
}
si0=l4;
si1=l5;
si0-=si1;
l4=si0;
si0=l3;
si1=l5;
si0+=si1;
l3=si0;
goto L4;
L6:;
si0=l1;
si1=l4;
si0=si0 <= si1;
if(si0){
goto L5;
}
}
L4:;
si0=l0;
si1=l3;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=8U;
si0+=si1;
si1=l4;
i32_store(&i->m0,(U64)si0,si1);
si0=0U;
l1=si0;
goto L1;
L2:;
si0=l1;
si1=32U;
si0+=si1;
l4=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+32U);
l5=si0;
si1=8U;
si0&=si1;
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
l6=si2;
si3=l6;
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
si1=0U;
sj2=l7;
si3=1000000000U;
si0=f1432(i,si0,si1,sj2,si3);
L7:;
si0=l0;
si1=l4;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=8U;
si0+=si1;
si1=l1;
si2=36U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
si2=64U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=4U;
l1=si0;
L1:;
si0=l0;
si1=l1;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=16U;
si0+=si1;
i->g0=si0;
L0:;
}

U32 f9878(rustpythonInstance*i,U32 l0,U32 l1) {
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

U32 f9879(rustpythonInstance*i,U32 l0,U32 l1) {
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
f7247(i,si0,si1);
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
f7248(i,si0,si1,si2);
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

U32 f9880(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
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
f7248(i,si0,si1,si2);
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

U32 f9881(rustpythonInstance*i) {
U32 l0=0;
U32 si0,si1;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=4U;
si0=f15269(i,si0);
l0=si0;
si0=!(si0);
if(si0){
goto L1;
}
si0=l0;
goto L0;
L1:;
si0=4U;
si1=4U;
f52(i,si0,si1);
UNREACHABLE;
L0:;
return si0;
}

U32 f9882(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U64 l3=0;
U64 l4=0;
U64 l5=0;
U64 l6=0;
U32 l7=0;
U32 l8=0;
U32 l9=0;
U64 l10=0;
U32 l11=0;
U32 l12=0;
U32 si0,si1,si2,si3,si4,si5;
U64 sj0,sj1;
si0=i->g0;
si1=96U;
si0-=si1;
l2=si0;
i->g0=si0;
si0=l0;
si1=28U;
si0+=si1;
sj0=i64_load(&i->m0,(U64)si0);
l3=sj0;
si0=l0;
si1=36U;
si0+=si1;
sj0=i64_load(&i->m0,(U64)si0);
l4=sj0;
si0=l0;
si1=44U;
si0+=si1;
sj0=i64_load(&i->m0,(U64)si0);
l5=sj0;
si0=l0;
si1=52U;
si0+=si1;
sj0=i64_load(&i->m0,(U64)si0);
l6=sj0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+8U);
l8=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+60U);
l9=si0;
si0=l0;
sj0=i64_load(&i->m0,(U64)si0+20U);
l10=sj0;
si0=0U;
l11=si0;
si0=l2;
si1=0U;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l2;
sj1=1ULL;
i64_store(&i->m0,(U64)si0+8U,sj1);
si0=l2;
sj1=l6;
i64_store(&i->m0,(U64)si0+56U,sj1);
si0=l2;
sj1=l5;
i64_store(&i->m0,(U64)si0+48U,sj1);
si0=l2;
sj1=l4;
i64_store(&i->m0,(U64)si0+40U,sj1);
si0=l2;
sj1=l3;
i64_store(&i->m0,(U64)si0+32U,sj1);
si0=l2;
sj1=l10;
i64_store(&i->m0,(U64)si0+24U,sj1);
si0=l2;
si1=64U;
si0+=si1;
si1=l2;
si2=24U;
si1+=si2;
f162(i,si0,si1);
si0=1U;
l12=si0;
si0=l2;
si0=i32_load8_u(&i->m0,(U64)si0+64U);
si1=7U;
si0=si0 == si1;
if(si0){
goto L2;
}
si0=l0;
si1=60U;
si0+=si1;
si1=0U;
si2=l9;
si0=si2?si0:si1;
l11=si0;
si0=l0;
si1=12U;
si0+=si1;
si1=0U;
si2=l8;
si0=si2?si0:si1;
l12=si0;
si0=l0;
si1=4U;
si0+=si1;
si1=0U;
si2=l7;
si0=si2?si0:si1;
l0=si0;
L3:;
{
si0=l2;
si1=80U;
si0+=si1;
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
si1=l2;
sj1=i64_load(&i->m0,(U64)si1+64U);
i64_store(&i->m0,(U64)si0+80U,sj1);
si0=l2;
si1=8U;
si0+=si1;
si1=l0;
si2=l12;
si3=l11;
si4=l2;
si5=80U;
si4+=si5;
si5=0U;
si0=f135(i,si0,si1,si2,si3,si4,si5);
if(si0){
goto L6;
}
si0=l2;
si0=i32_load8_u(&i->m0,(U64)si0+80U);
si1=-1U;
si0+=si1;
switch(si0){
case 0:
goto L8;
case 1:
goto L4;
case 2:
goto L7;
default:
goto L4;
}
L8:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+88U);
si0=!(si0);
if(si0){
goto L4;
}
goto L5;
L7:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+88U);
if(si0){
goto L5;
}
goto L4;
L6:;
si0=l2;
si0=i32_load8_u(&i->m0,(U64)si0+80U);
si1=-1U;
si0+=si1;
switch(si0){
case 0:
goto L12;
case 1:
goto L9;
case 2:
goto L11;
default:
goto L9;
}
L12:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+88U);
si0=!(si0);
if(si0){
goto L9;
}
goto L10;
L11:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+88U);
si0=!(si0);
if(si0){
goto L9;
}
L10:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+84U);
f15271(i,si0);
L9:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+12U);
si0=!(si0);
if(si0){
goto L13;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0+8U);
f15271(i,si0);
L13:;
si0=1U;
l0=si0;
goto L1;
L5:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+84U);
f15271(i,si0);
L4:;
si0=l2;
si1=64U;
si0+=si1;
si1=l2;
si2=24U;
si1+=si2;
f162(i,si0,si1);
si0=l2;
si0=i32_load8_u(&i->m0,(U64)si0+64U);
si1=7U;
si0=si0 != si1;
if(si0){
goto L3;
}
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0+16U);
l11=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+8U);
l12=si0;
L2:;
si0=l1;
si1=l12;
si2=l11;
si0=f713(i,si0,si1,si2);
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
L1:;
si0=l2;
si1=96U;
si0+=si1;
i->g0=si0;
si0=l0;
L0:;
return si0;
}

U32 f9883(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 si0,si1,si2,si3,si4;
si0=i->g0;
si1=16U;
si0-=si1;
l2=si0;
i->g0=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+8U);
l3=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
l0=si0;
si0=1U;
l4=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=1103101U;
si2=1U;
si3=l1;
si4=24U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si3=i32_load(&i->m0,(U64)si3+12U);
si0=TF(i->t0,si3,U32 (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
l5=si0;
si0=l2;
si1=0U;
i32_store8(&i->m0,(U64)si0+5U,si1);
si0=l2;
si1=l5;
i32_store8(&i->m0,(U64)si0+4U,si1);
si0=l2;
si1=l1;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si0=!(si0);
if(si0){
goto L1;
}
si0=l3;
si1=2U;
si0<<=(si1&31);
l1=si0;
L2:;
{
si0=l2;
si1=l0;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l2;
si1=l2;
si2=12U;
si1+=si2;
si2=1833860U;
f717(i,si0,si1,si2);
si0=l0;
si1=4U;
si0+=si1;
l0=si0;
si0=l1;
si1=-4U;
si0+=si1;
l1=si0;
if(si0){
goto L2;
}
}
si0=l2;
si0=i32_load8_u(&i->m0,(U64)si0+4U);
l5=si0;
L1:;
si0=l5;
si1=255U;
si0&=si1;
if(si0){
goto L3;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0);
l0=si0;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=1103488U;
si2=1U;
si3=l0;
si4=24U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si3=i32_load(&i->m0,(U64)si3+12U);
si0=TF(i->t0,si3,U32 (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
l4=si0;
L3:;
si0=l2;
si1=16U;
si0+=si1;
i->g0=si0;
si0=l4;
L0:;
return si0;
}

void f9884(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 l8=0;
U32 l9=0;
U32 si0,si1,si2,si3,si4,si5,si6;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L4;
}
si0=l1;
si1=14U;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
if(si0){
goto L5;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+48U);
l2=si0;
si0=l1;
si0=i32_load8_u(&i->m0,(U64)si0+12U);
l3=si0;
si0=l1;
si1=52U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
l5=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
l6=si0;
si0=!(si0);
if(si0){
goto L6;
}
si0=l4;
si1=l6;
si0=si0 > si1;
if(si0){
goto L8;
}
si0=l4;
si1=l6;
si0=si0 == si1;
if(si0){
goto L7;
}
goto L1;
L8:;
si0=l2;
si1=l6;
si0+=si1;
si0=i32_load8_s(&i->m0,(U64)si0);
si1=-64U;
si0=(U32)((I32)si0<(I32)si1);
if(si0){
goto L1;
}
L7:;
si0=l4;
si1=l6;
si0-=si1;
l5=si0;
L6:;
si0=l5;
si0=!(si0);
if(si0){
goto L11;
}
si0=l2;
si1=l6;
si0+=si1;
l7=si0;
si0=i32_load8_s(&i->m0,(U64)si0);
l5=si0;
si1=-1U;
si0=(U32)((I32)si0>(I32)si1);
if(si0){
goto L13;
}
si0=l7;
si0=i32_load8_u(&i->m0,(U64)si0+1U);
si1=63U;
si0&=si1;
l8=si0;
si0=l5;
si1=31U;
si0&=si1;
l9=si0;
si0=l5;
si1=-32U;
si0=si0 >= si1;
if(si0){
goto L14;
}
si0=l9;
si1=6U;
si0<<=(si1&31);
si1=l8;
si0|=si1;
l5=si0;
goto L12;
L14:;
si0=l8;
si1=6U;
si0<<=(si1&31);
si1=l7;
si1=i32_load8_u(&i->m0,(U64)si1+2U);
si2=63U;
si1&=si2;
si0|=si1;
l8=si0;
si0=l5;
si1=-16U;
si0=si0 >= si1;
if(si0){
goto L15;
}
si0=l8;
si1=l9;
si2=12U;
si1<<=(si2&31);
si0|=si1;
l5=si0;
goto L12;
L15:;
si0=l8;
si1=6U;
si0<<=(si1&31);
si1=l7;
si1=i32_load8_u(&i->m0,(U64)si1+3U);
si2=63U;
si1&=si2;
si0|=si1;
si1=l9;
si2=18U;
si1<<=(si2&31);
si2=1835008U;
si1&=si2;
si0|=si1;
l5=si0;
goto L12;
L13:;
si0=l5;
si1=255U;
si0&=si1;
l5=si0;
L12:;
si0=l3;
si1=255U;
si0&=si1;
if(si0){
goto L17;
}
si0=l5;
si1=1114112U;
si0=si0 == si1;
if(si0){
goto L10;
}
si0=1U;
l3=si0;
si0=l5;
si1=128U;
si0=si0 < si1;
if(si0){
goto L18;
}
si0=2U;
l3=si0;
si0=l5;
si1=2048U;
si0=si0 < si1;
if(si0){
goto L18;
}
si0=3U;
si1=4U;
si2=l5;
si3=65536U;
si2=si2 < si3;
si0=si2?si0:si1;
l3=si0;
L18:;
si0=l1;
si1=l3;
si2=l6;
si1+=si2;
l6=si1;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l6;
si0=!(si0);
if(si0){
goto L19;
}
si0=l4;
si1=l6;
si0=si0 > si1;
if(si0){
goto L21;
}
si0=l4;
si1=l6;
si0=si0 == si1;
if(si0){
goto L20;
}
goto L2;
L21:;
si0=l2;
si1=l6;
si0+=si1;
si0=i32_load8_s(&i->m0,(U64)si0);
si1=-64U;
si0=(U32)((I32)si0<(I32)si1);
if(si0){
goto L2;
}
L20:;
si0=l4;
si1=l6;
si0-=si1;
l4=si0;
L19:;
si0=l4;
if(si0){
goto L22;
}
si0=0U;
l4=si0;
goto L16;
L22:;
si0=1U;
l3=si0;
si0=l2;
si1=l6;
si0+=si1;
si0=i32_load8_s(&i->m0,(U64)si0);
l4=si0;
si1=-1U;
si0=(U32)((I32)si0>(I32)si1);
if(si0){
goto L17;
}
si0=l4;
si1=-32U;
si0=si0 < si1;
L17:;
si0=l3;
si1=1U;
si0^=si1;
l4=si0;
L16:;
si0=l1;
si1=l4;
i32_store8(&i->m0,(U64)si0+12U,si1);
goto L3;
L11:;
si0=l1;
si1=l3;
si2=1U;
si1^=si2;
i32_store8(&i->m0,(U64)si0+12U,si1);
si0=l3;
si1=255U;
si0&=si1;
if(si0){
goto L3;
}
goto L9;
L10:;
si0=l1;
si1=1U;
i32_store8(&i->m0,(U64)si0+12U,si1);
L9:;
si0=l1;
si1=1U;
i32_store8(&i->m0,(U64)si0+14U,si1);
L5:;
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
goto L0;
L4:;
si0=l1;
si1=8U;
si0+=si1;
l6=si0;
si0=l1;
si1=60U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
si0=l1;
si1=52U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+56U);
l5=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+48U);
l2=si0;
si0=l1;
si1=36U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=-1U;
si0=si0 == si1;
if(si0){
goto L23;
}
si0=l0;
si1=l6;
si2=l2;
si3=l3;
si4=l5;
si5=l4;
si6=0U;
f9875(i,si0,si1,si2,si3,si4,si5,si6);
goto L0;
L23:;
si0=l0;
si1=l6;
si2=l2;
si3=l3;
si4=l5;
si5=l4;
si6=1U;
f9875(i,si0,si1,si2,si3,si4,si5,si6);
goto L0;
L3:;
si0=l0;
si1=l6;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=8U;
si0+=si1;
si1=l6;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=1U;
i32_store(&i->m0,(U64)si0,si1);
goto L0;
L2:;
si0=1U;
l3=si0;
L1:;
si0=l1;
si1=l3;
si2=1U;
si1^=si2;
i32_store8(&i->m0,(U64)si0+12U,si1);
si0=l2;
si1=l4;
si2=l6;
si3=l4;
si4=1834468U;
f737(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L0:;
}

void f9885(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 si0,si1,si2;
si0=i->g0;
si1=16U;
si0-=si1;
l2=si0;
i->g0=si0;
si0=l1;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+108U);
si2=1U;
si1+=si2;
l3=si1;
i32_store(&i->m0,(U64)si0+108U,si1);
si0=0U;
l4=si0;
si0=l3;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+104U);
l5=si1;
si0=si0 <= si1;
if(si0){
goto L5;
}
goto L4;
L5:;
si0=l1;
si0=i32_load8_u(&i->m0,(U64)si0+100U);
si1=255U;
si0&=si1;
si0=!(si0);
if(si0){
goto L6;
}
goto L4;
L6:;
si0=l3;
si1=l5;
si0=si0 == si1;
if(si0){
goto L7;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
l5=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si0=l2;
si1=8U;
si0+=si1;
si1=l1;
si2=16U;
si1+=si2;
f1399(i,si0,si1);
si0=l2;
si0=i32_load(&i->m0,(U64)si0+8U);
if(si0){
goto L9;
}
si0=l5;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+96U);
l3=si1;
si0=si0 <= si1;
if(si0){
goto L8;
}
si0=l1;
si1=1U;
i32_store8(&i->m0,(U64)si0+100U,si1);
si0=l1;
si1=l5;
i32_store(&i->m0,(U64)si0+96U,si1);
si0=l6;
si1=l3;
si0+=si1;
l4=si0;
si0=l5;
si1=l3;
si0-=si1;
l3=si0;
goto L4;
L9:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+12U);
l3=si0;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+96U);
l7=si1;
si0=si0 < si1;
if(si0){
goto L3;
}
si0=l3;
si1=l5;
si0=si0 > si1;
if(si0){
goto L2;
}
si0=l1;
si1=l1;
si2=12U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
si2=l3;
si1+=si2;
i32_store(&i->m0,(U64)si0+96U,si1);
si0=l6;
si1=l7;
si0+=si1;
l4=si0;
si0=l3;
si1=l7;
si0-=si1;
l3=si0;
goto L4;
L8:;
si0=l1;
si0=i32_load8_u(&i->m0,(U64)si0+100U);
if(si0){
goto L4;
}
si0=l1;
si1=1U;
i32_store8(&i->m0,(U64)si0+100U,si1);
si0=1833076U;
l4=si0;
si0=0U;
l3=si0;
goto L4;
L7:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
l3=si0;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+96U);
l4=si1;
si0=si0 < si1;
if(si0){
goto L1;
}
si0=l3;
si1=l4;
si0-=si1;
l3=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
si1=l4;
si0+=si1;
l4=si0;
L4:;
si0=l0;
si1=l3;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l4;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=16U;
si0+=si1;
i->g0=si0;
goto L0;
L3:;
si0=l7;
si1=l3;
si2=1834588U;
f675(i,si0,si1,si2);
UNREACHABLE;
L2:;
si0=l3;
si1=l5;
si2=1834588U;
f666(i,si0,si1,si2);
UNREACHABLE;
L1:;
si0=l4;
si1=l3;
si2=1834604U;
f662(i,si0,si1,si2);
UNREACHABLE;
L0:;
}

void f9886(rustpythonInstance*i,U32 l0,U32 l1) {
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
U64 sj0,sj1,sj2;
si0=i->g0;
si1=32U;
si0-=si1;
l2=si0;
i->g0=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
l3=si0;
if(si0){
goto L5;
}
si0=0U;
l4=si0;
si0=1834624U;
l5=si0;
si0=0U;
l6=si0;
goto L4;
L5:;
si0=l3;
si1=1U;
si0+=si1;
l4=si0;
si1=1073741823U;
si0=si0 > si1;
if(si0){
goto L3;
}
si0=l4;
si1=2U;
si0<<=(si1&31);
l4=si0;
si1=7U;
si0+=si1;
l7=si0;
si1=l4;
si0=si0 < si1;
if(si0){
goto L3;
}
si0=l7;
si1=-8U;
si0&=si1;
l7=si0;
si1=l3;
si2=9U;
si1+=si2;
l8=si1;
si0+=si1;
l4=si0;
si1=l7;
si0=si0 < si1;
if(si0){
goto L3;
}
si0=l4;
si1=0U;
si0=(U32)((I32)si0<(I32)si1);
if(si0){
goto L2;
}
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=l4;
si1=7U;
si0=si0 > si1;
if(si0){
goto L7;
}
si0=8U;
si1=l4;
si0=f15277(i,si0,si1);
l9=si0;
if(si0){
goto L6;
}
goto L1;
L7:;
si0=l4;
si0=f15269(i,si0);
l9=si0;
si0=!(si0);
if(si0){
goto L1;
}
L6:;
si0=l9;
si1=l7;
si0+=si1;
l5=si0;
si1=l1;
si1=i32_load(&i->m0,(U64)si1);
l10=si1;
si2=l8;
si0=f15390(i,si0,si1,si2);
l4=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+12U);
l6=si0;
si0=!(si0);
if(si0){
goto L8;
}
si0=l4;
si1=-4U;
si0+=si1;
l11=si0;
si0=l10;
si1=8U;
si0+=si1;
l8=si0;
si0=l10;
sj0=i64_load(&i->m0,(U64)si0);
sj1=-1ULL;
sj0^=sj1;
sj1=-9187201950435737472ULL;
sj0&=sj1;
l12=sj0;
si0=l6;
l9=si0;
si0=l10;
l7=si0;
L9:;
{
sj0=l12;
sj1=0ULL;
si0=sj0 != sj1;
if(si0){
goto L10;
}
si0=l8;
l4=si0;
L11:;
{
si0=l7;
si1=-32U;
si0+=si1;
l7=si0;
si0=l4;
sj0=i64_load(&i->m0,(U64)si0);
l12=sj0;
si0=l4;
si1=8U;
si0+=si1;
l8=si0;
l4=si0;
sj0=l12;
sj1=-1ULL;
sj0^=sj1;
sj1=-9187201950435737472ULL;
sj0&=sj1;
l12=sj0;
si0=!(sj0);
if(si0){
goto L11;
}
}
L10:;
si0=l11;
si1=l7;
sj2=l12;
sj2=I64_CTZ(sj2);
si2=(U32)(sj2);
si3=1U;
si2>>=(si3&31);
si3=60U;
si2&=si3;
si1-=si2;
l4=si1;
si2=l10;
si1-=si2;
si0+=si1;
si1=l4;
si2=-4U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
sj0=l12;
sj1=-1ULL;
sj0+=sj1;
sj1=l12;
sj0&=sj1;
l12=sj0;
si0=l9;
si1=-1U;
si0+=si1;
l9=si0;
if(si0){
goto L9;
}
}
L8:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+8U);
l4=si0;
L4:;
si0=l0;
si1=l6;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l0;
si1=l4;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l0;
si1=l3;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l5;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=32U;
si0+=si1;
i->g0=si0;
goto L0;
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
si1=1171544U;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l2;
si1=1171552U;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l2;
si1=8U;
si0+=si1;
si1=1171656U;
f683(i,si0,si1);
UNREACHABLE;
L2:;
si0=l2;
si1=20U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=1U;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l2;
si1=1171544U;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l2;
si1=1171552U;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l2;
si1=8U;
si0+=si1;
si1=1171656U;
f683(i,si0,si1);
UNREACHABLE;
L1:;
si0=8U;
si1=l4;
f52(i,si0,si1);
UNREACHABLE;
L0:;
}

void f9887(rustpythonInstance*i,U32 l0) {
U32 l1=0;
U32 l2=0;
U32 l3=0;
U32 l4=0;
U32 si0,si1,si2,si3;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+4U);
si0=si0 == si1;
if(si0){
goto L1;
}
L2:;
{
si0=l0;
si1=l1;
si2=4U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
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
goto L3;
}
si0=l1;
f7690(i,si0);
L3:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+4U);
si0=si0 != si1;
if(si0){
goto L2;
}
}
L1:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+16U);
l1=si0;
si0=!(si0);
if(si0){
goto L4;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+8U);
l2=si0;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si1=l2;
si1=i32_load(&i->m0,(U64)si1+8U);
l4=si1;
si2=2U;
si1<<=(si2&31);
si0+=si1;
si1=l3;
si2=l0;
si2=i32_load(&i->m0,(U64)si2+12U);
si3=2U;
si2<<=(si3&31);
si1+=si2;
si2=l1;
si3=2U;
si2<<=(si3&31);
si0=f15391(i,si0,si1,si2);
si0=l2;
si1=l4;
si2=l1;
si1+=si2;
i32_store(&i->m0,(U64)si0+8U,si1);
L4:;
L0:;
}

void f9888(rustpythonInstance*i,U32 l0) {
U32 l1=0;
U32 si0,si1,si2;
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
si0=i32_load(&i->m0,(U64)si0);
si1=l1;
si2=2U;
si1<<=(si2&31);
si2=11U;
si1+=si2;
si2=-8U;
si1&=si2;
si0-=si1;
f15271(i,si0);
L1:;
L0:;
}

void f9889(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 si0,si1,si2;
si0=i->g0;
si1=16U;
si0-=si1;
l2=si0;
i->g0=si0;
si0=l1;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+92U);
si2=1U;
si1+=si2;
l3=si1;
i32_store(&i->m0,(U64)si0+92U,si1);
si0=0U;
l4=si0;
si0=l3;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+88U);
l5=si1;
si0=si0 <= si1;
if(si0){
goto L6;
}
goto L5;
L6:;
si0=l1;
si0=i32_load8_u(&i->m0,(U64)si0+84U);
si1=255U;
si0&=si1;
si0=!(si0);
if(si0){
goto L7;
}
goto L5;
L7:;
si0=l1;
si1=68U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+64U);
l7=si0;
si0=l3;
si1=l5;
si0=si0 == si1;
if(si0){
goto L9;
}
si0=l2;
si1=8U;
si0+=si1;
si1=l1;
f1401(i,si0,si1);
si0=l2;
si0=i32_load(&i->m0,(U64)si0+8U);
if(si0){
goto L11;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+80U);
l3=si0;
if(si0){
goto L10;
}
si0=l1;
si0=i32_load8_u(&i->m0,(U64)si0+84U);
if(si0){
goto L5;
}
si0=l1;
si1=1U;
i32_store8(&i->m0,(U64)si0+84U,si1);
si0=1833076U;
l4=si0;
si0=0U;
l3=si0;
goto L5;
L11:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+80U);
l3=si0;
si1=l1;
si2=76U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
si2=l2;
si2=i32_load(&i->m0,(U64)si2+12U);
l4=si2;
si1+=si2;
l5=si1;
si0=si0 < si1;
if(si0){
goto L4;
}
si0=l3;
si1=l6;
si0=si0 > si1;
if(si0){
goto L3;
}
si0=l1;
si1=l4;
i32_store(&i->m0,(U64)si0+80U,si1);
si0=l7;
si1=l5;
si0+=si1;
l4=si0;
si0=l3;
si1=l5;
si0-=si1;
l3=si0;
goto L5;
L10:;
si0=l3;
si1=l6;
si0=si0 > si1;
if(si0){
goto L2;
}
si0=l1;
si1=1U;
i32_store8(&i->m0,(U64)si0+84U,si1);
si0=l1;
si1=0U;
i32_store(&i->m0,(U64)si0+80U,si1);
goto L8;
L9:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+80U);
l3=si0;
si1=l6;
si0=si0 > si1;
if(si0){
goto L1;
}
L8:;
si0=l7;
l4=si0;
L5:;
si0=l0;
si1=l3;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l4;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=16U;
si0+=si1;
i->g0=si0;
goto L0;
L4:;
si0=l5;
si1=l3;
si2=1834664U;
f675(i,si0,si1,si2);
UNREACHABLE;
L3:;
si0=l3;
si1=l6;
si2=1834664U;
f666(i,si0,si1,si2);
UNREACHABLE;
L2:;
si0=l3;
si1=l6;
si2=1834648U;
f666(i,si0,si1,si2);
UNREACHABLE;
L1:;
si0=l3;
si1=l6;
si2=1834696U;
f666(i,si0,si1,si2);
UNREACHABLE;
L0:;
}

U32 f9890(rustpythonInstance*i,U32 l0,U32 l1) {
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
U64 sj1;
si0=i->g0;
si1=48U;
si0-=si1;
l2=si0;
i->g0=si0;
si0=l1;
si1=24U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+20U);
l4=si0;
si0=0U;
l5=si0;
si0=l0;
si0=i32_load8_u(&i->m0,(U64)si0);
l6=si0;
l7=si0;
si0=0U;
l8=si0;
L2:;
{
si0=l7;
si1=255U;
si0&=si1;
si0=!(si0);
if(si0){
goto L5;
}
si0=l5;
si1=12U;
si0*=si1;
si1=1834780U;
si0+=si1;
l1=si0;
si0=l5;
si1=3U;
si2=l5;
si3=3U;
si2=si2 > si3;
si0=si2?si0:si1;
si1=1U;
si0+=si1;
l9=si0;
L9:;
{
si0=l9;
si1=l5;
si2=1U;
si1+=si2;
l5=si1;
si0=si0 == si1;
if(si0){
goto L8;
}
si0=l1;
si1=20U;
si0+=si1;
l0=si0;
si0=l1;
si1=12U;
si0+=si1;
l10=si0;
l1=si0;
si0=l0;
si0=i32_load8_u(&i->m0,(U64)si0);
l0=si0;
si1=l6;
si0&=si1;
si1=l0;
si0=si0 != si1;
if(si0){
goto L9;
}
}
si0=l10;
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l9=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+12U);
l1=si0;
si0=l10;
si0=i32_load(&i->m0,(U64)si0);
l10=si0;
si0=l8;
si1=1U;
si0&=si1;
if(si0){
goto L7;
}
goto L3;
L8:;
si0=l2;
si1=l7;
i32_store8(&i->m0,(U64)si0+11U,si1);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+12U);
l1=si0;
si0=l8;
si1=1U;
si0&=si1;
si0=!(si0);
if(si0){
goto L6;
}
si0=l4;
si1=1834894U;
si2=3U;
si3=l1;
si0=TF(i->t0,si3,U32 (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
si0=!(si0);
if(si0){
goto L6;
}
goto L4;
L7:;
si0=l4;
si1=1834894U;
si2=3U;
si3=l1;
si0=TF(i->t0,si3,U32 (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
si0=!(si0);
if(si0){
goto L3;
}
si0=1U;
l8=si0;
goto L1;
L6:;
si0=l4;
si1=1834892U;
si2=2U;
si3=l1;
si0=TF(i->t0,si3,U32 (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
if(si0){
goto L4;
}
si0=l2;
si1=l2;
si2=11U;
si1+=si2;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l2;
si1=4195U;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l2;
si1=l2;
si2=12U;
si1+=si2;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l2;
sj1=1ULL;
i64_store(&i->m0,(U64)si0+36U,sj1);
si0=l2;
si1=1U;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l2;
si1=1914572U;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l2;
si1=l2;
si2=16U;
si1+=si2;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l4;
si1=l3;
si2=l2;
si3=24U;
si2+=si3;
si0=f690(i,si0,si1,si2);
if(si0){
goto L4;
}
L5:;
si0=0U;
l8=si0;
goto L1;
L4:;
si0=1U;
l8=si0;
goto L1;
L3:;
si0=l7;
si1=l0;
si2=-1U;
si1^=si2;
si0&=si1;
l7=si0;
si0=1U;
l8=si0;
si0=l4;
si1=l10;
si2=l9;
si3=l1;
si0=TF(i->t0,si3,U32 (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
si0=!(si0);
if(si0){
goto L2;
}
}
L1:;
si0=l2;
si1=48U;
si0+=si1;
i->g0=si0;
si0=l8;
L0:;
return si0;
}

U32 f9891(rustpythonInstance*i,U32 l0,U32 l1) {
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
U64 sj1;
si0=i->g0;
si1=48U;
si0-=si1;
l2=si0;
i->g0=si0;
si0=l1;
si1=24U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+20U);
l4=si0;
si0=0U;
l5=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
l7=si0;
si0=0U;
l8=si0;
L2:;
{
si0=l7;
si0=!(si0);
if(si0){
goto L5;
}
si0=l5;
si1=12U;
si0*=si1;
si1=1834720U;
si0+=si1;
l1=si0;
si0=l5;
si1=3U;
si2=l5;
si3=3U;
si2=si2 > si3;
si0=si2?si0:si1;
si1=1U;
si0+=si1;
l9=si0;
L9:;
{
si0=l9;
si1=l5;
si2=1U;
si1+=si2;
l5=si1;
si0=si0 == si1;
if(si0){
goto L8;
}
si0=l1;
si1=20U;
si0+=si1;
l0=si0;
si0=l1;
si1=12U;
si0+=si1;
l10=si0;
l1=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
l0=si0;
si1=l6;
si0&=si1;
si1=l0;
si0=si0 != si1;
if(si0){
goto L9;
}
}
si0=l10;
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l9=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+12U);
l1=si0;
si0=l10;
si0=i32_load(&i->m0,(U64)si0);
l10=si0;
si0=l8;
si1=1U;
si0&=si1;
if(si0){
goto L7;
}
goto L3;
L8:;
si0=l2;
si1=l7;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+12U);
l1=si0;
si0=l8;
si1=1U;
si0&=si1;
si0=!(si0);
if(si0){
goto L6;
}
si0=l4;
si1=1834894U;
si2=3U;
si3=l1;
si0=TF(i->t0,si3,U32 (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
si0=!(si0);
if(si0){
goto L6;
}
goto L4;
L7:;
si0=l4;
si1=1834894U;
si2=3U;
si3=l1;
si0=TF(i->t0,si3,U32 (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
si0=!(si0);
if(si0){
goto L3;
}
si0=1U;
l8=si0;
goto L1;
L6:;
si0=l4;
si1=1834892U;
si2=2U;
si3=l1;
si0=TF(i->t0,si3,U32 (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
if(si0){
goto L4;
}
si0=l2;
si1=l2;
si2=8U;
si1+=si2;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l2;
si1=4199U;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l2;
si1=l2;
si2=12U;
si1+=si2;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l2;
sj1=1ULL;
i64_store(&i->m0,(U64)si0+36U,sj1);
si0=l2;
si1=1U;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l2;
si1=1914572U;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l2;
si1=l2;
si2=16U;
si1+=si2;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l4;
si1=l3;
si2=l2;
si3=24U;
si2+=si3;
si0=f690(i,si0,si1,si2);
if(si0){
goto L4;
}
L5:;
si0=0U;
l8=si0;
goto L1;
L4:;
si0=1U;
l8=si0;
goto L1;
L3:;
si0=l7;
si1=l0;
si2=-1U;
si1^=si2;
si0&=si1;
l7=si0;
si0=1U;
l8=si0;
si0=l4;
si1=l10;
si2=l9;
si3=l1;
si0=TF(i->t0,si3,U32 (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
si0=!(si0);
if(si0){
goto L2;
}
}
L1:;
si0=l2;
si1=48U;
si0+=si1;
i->g0=si0;
si0=l8;
L0:;
return si0;
}

U32 f9892(rustpythonInstance*i,U32 l0,U64 l1,U32 l2) {
U32 l3=0;
U32 l4=0;
U64 l5=0;
U32 l6=0;
U32 l7=0;
U32 l8=0;
U64 l9=0;
U64 l10=0;
U32 l11=0;
U32 si0,si1,si2,si3;
U64 sj0,sj1,sj2,sj3;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si1=-4U;
si0+=si1;
l4=si0;
sj0=l1;
sj1=25ULL;
sj0>>=(sj1&63);
sj1=127ULL;
sj0&=sj1;
sj1=72340172838076673ULL;
sj0*=sj1;
l5=sj0;
si0=l0;
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
sj0=l1;
si0=(U32)(sj0);
l7=si0;
si0=0U;
l8=si0;
L2:;
{
si0=l3;
si1=l7;
si2=l6;
si1&=si2;
l7=si1;
si0+=si1;
sj0=i64_load(&i->m0,(U64)si0);
l9=sj0;
sj1=l5;
sj0^=sj1;
l1=sj0;
sj1=-1ULL;
sj0^=sj1;
sj1=l1;
sj2=-72340172838076673ULL;
sj1+=sj2;
sj0&=sj1;
sj1=-9187201950435737472ULL;
sj0&=sj1;
l10=sj0;
L3:;
{
sj0=l10;
l1=sj0;
sj1=0ULL;
si0=sj0 != sj1;
if(si0){
goto L4;
}
sj0=l9;
sj1=l9;
sj2=1ULL;
sj1<<=(sj2&63);
sj0&=sj1;
sj1=-9187201950435737472ULL;
sj0&=sj1;
si0=!(sj0);
si0=!(si0);
if(si0){
goto L1;
}
si0=l7;
si1=l8;
si2=8U;
si1+=si2;
l8=si1;
si0+=si1;
l7=si0;
goto L2;
L4:;
sj0=l1;
sj1=-1ULL;
sj0+=sj1;
sj1=l1;
sj0&=sj1;
l10=sj0;
si0=l4;
sj1=l1;
sj1=I64_CTZ(sj1);
si1=(U32)(sj1);
si2=3U;
si1>>=(si2&31);
si2=l7;
si1+=si2;
si2=l6;
si1&=si2;
l11=si1;
si2=2U;
si1<<=(si2&31);
si0-=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=l2;
si0=si0 != si1;
if(si0){
goto L3;
}
}
}
si0=128U;
l7=si0;
si0=l3;
si1=l11;
si2=2U;
si1<<=(si2&31);
si2=2U;
si1=(U32)((I32)si1>>(si2&31));
l2=si1;
si0+=si1;
l4=si0;
sj0=i64_load(&i->m0,(U64)si0);
l10=sj0;
sj1=l10;
sj2=1ULL;
sj1<<=(sj2&63);
sj0&=sj1;
sj1=-9187201950435737472ULL;
sj0&=sj1;
sj0=I64_CTZ(sj0);
si0=(U32)(sj0);
si1=3U;
si0>>=(si1&31);
si1=l3;
si2=l2;
si3=-8U;
si2+=si3;
si3=l6;
si2&=si3;
si1+=si2;
l6=si1;
sj1=i64_load(&i->m0,(U64)si1);
l10=sj1;
sj2=l10;
sj3=1ULL;
sj2<<=(sj3&63);
sj1&=sj2;
sj2=-9187201950435737472ULL;
sj1&=sj2;
sj1=I64_CLZ(sj1);
si1=(U32)(sj1);
si2=3U;
si1>>=(si2&31);
si0+=si1;
si1=7U;
si0=si0 > si1;
if(si0){
goto L5;
}
si0=l0;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+8U);
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=255U;
l7=si0;
L5:;
si0=l4;
si1=l7;
i32_store8(&i->m0,(U64)si0,si1);
si0=l6;
si1=8U;
si0+=si1;
si1=l7;
i32_store8(&i->m0,(U64)si0,si1);
si0=l0;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+12U);
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0+12U,si1);
L1:;
sj0=l1;
sj1=0ULL;
si0=sj0 != sj1;
L0:;
return si0;
}

void f9893(rustpythonInstance*i,U32 l0,U32 l1,U64 l2,U32 l3) {
U32 l4=0;
U32 l5=0;
U64 l6=0;
U32 l7=0;
U32 l8=0;
U32 l9=0;
U32 l10=0;
U64 l11=0;
U32 l12=0;
U32 l13=0;
U32 l14=0;
U32 si0,si1,si2,si3;
U64 sj0,sj1,sj2,sj3;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
si1=-4U;
si0+=si1;
l5=si0;
sj0=l2;
sj1=25ULL;
sj0>>=(sj1&63);
sj1=127ULL;
sj0&=sj1;
sj1=72340172838076673ULL;
sj0*=sj1;
l6=sj0;
si0=l1;
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
sj0=l2;
si0=(U32)(sj0);
l8=si0;
si0=0U;
l9=si0;
L4:;
{
si0=l4;
si1=l8;
si2=l7;
si1&=si2;
l10=si1;
si0+=si1;
sj0=i64_load(&i->m0,(U64)si0);
l11=sj0;
sj1=l6;
sj0^=sj1;
l2=sj0;
sj1=-1ULL;
sj0^=sj1;
sj1=l2;
sj2=-72340172838076673ULL;
sj1+=sj2;
sj0&=sj1;
sj1=-9187201950435737472ULL;
sj0&=sj1;
l2=sj0;
si0=!(sj0);
if(si0){
goto L5;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0+12U);
l12=si0;
L6:;
{
si0=l12;
si1=l5;
sj2=l2;
sj2=I64_CTZ(sj2);
si2=(U32)(sj2);
si3=3U;
si2>>=(si3&31);
si3=l10;
si2+=si3;
si3=l7;
si2&=si3;
l13=si2;
si3=2U;
si2<<=(si3&31);
si1-=si2;
si1=i32_load(&i->m0,(U64)si1);
l8=si1;
si0=si0 <= si1;
if(si0){
goto L1;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0+4U);
l14=si0;
si1=l3;
si1=i32_load(&i->m0,(U64)si1+8U);
si2=l8;
si3=20U;
si2*=si3;
si1+=si2;
l8=si1;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
si0=si0 != si1;
if(si0){
goto L7;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
si1=l8;
si1=i32_load(&i->m0,(U64)si1);
si2=l14;
si0=f15389(i,si0,si1,si2);
si0=!(si0);
if(si0){
goto L3;
}
L7:;
sj0=l2;
sj1=-1ULL;
sj0+=sj1;
sj1=l2;
sj0&=sj1;
l2=sj0;
si0=!(sj0);
si0=!(si0);
if(si0){
goto L6;
}
}
L5:;
sj0=l11;
sj1=l11;
sj2=1ULL;
sj1<<=(sj2&63);
sj0&=sj1;
sj1=-9187201950435737472ULL;
sj0&=sj1;
si0=!(sj0);
if(si0){
goto L8;
}
si0=0U;
l3=si0;
goto L2;
L8:;
si0=l10;
si1=l9;
si2=8U;
si1+=si2;
l9=si1;
si0+=si1;
l8=si0;
goto L4;
}
L3:;
si0=l4;
si1=0U;
si2=l13;
si1-=si2;
si2=2U;
si1<<=(si2&31);
si0+=si1;
l8=si0;
si0=128U;
l3=si0;
si0=l4;
si1=l13;
si2=2U;
si1<<=(si2&31);
si2=2U;
si1=(U32)((I32)si1>>(si2&31));
l14=si1;
si0+=si1;
l10=si0;
sj0=i64_load(&i->m0,(U64)si0);
l2=sj0;
sj1=l2;
sj2=1ULL;
sj1<<=(sj2&63);
sj0&=sj1;
sj1=-9187201950435737472ULL;
sj0&=sj1;
sj0=I64_CTZ(sj0);
si0=(U32)(sj0);
si1=3U;
si0>>=(si1&31);
si1=l4;
si2=l14;
si3=-8U;
si2+=si3;
si3=l7;
si2&=si3;
si1+=si2;
l14=si1;
sj1=i64_load(&i->m0,(U64)si1);
l2=sj1;
sj2=l2;
sj3=1ULL;
sj2<<=(sj3&63);
sj1&=sj2;
sj2=-9187201950435737472ULL;
sj1&=sj2;
sj1=I64_CLZ(sj1);
si1=(U32)(sj1);
si2=3U;
si1>>=(si2&31);
si0+=si1;
si1=7U;
si0=si0 > si1;
if(si0){
goto L9;
}
si0=l1;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+8U);
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=255U;
l3=si0;
L9:;
si0=l10;
si1=l3;
i32_store8(&i->m0,(U64)si0,si1);
si0=l14;
si1=8U;
si0+=si1;
si1=l3;
i32_store8(&i->m0,(U64)si0,si1);
si0=l1;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+12U);
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l8;
si1=-4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l8=si0;
si0=1U;
l3=si0;
L2:;
si0=l0;
si1=l8;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l3;
i32_store(&i->m0,(U64)si0,si1);
goto L0;
L1:;
si0=l8;
si1=l12;
si2=1835000U;
f663(i,si0,si1,si2);
UNREACHABLE;
L0:;
}

void f9894(rustpythonInstance*i,U32 l0,U32 l1,U64 l2,U32 l3) {
U32 l4=0;
U32 l5=0;
U64 l6=0;
U32 l7=0;
U32 l8=0;
U32 l9=0;
U32 l10=0;
U64 l11=0;
U32 l12=0;
U32 l13=0;
U32 si0,si1,si2,si3;
U64 sj0,sj1,sj2,sj3;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
si1=-4U;
si0+=si1;
l5=si0;
sj0=l2;
sj1=25ULL;
sj0>>=(sj1&63);
sj1=127ULL;
sj0&=sj1;
sj1=72340172838076673ULL;
sj0*=sj1;
l6=sj0;
si0=l1;
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
sj0=l2;
si0=(U32)(sj0);
l8=si0;
si0=0U;
l9=si0;
L1:;
{
si0=l4;
si1=l8;
si2=l7;
si1&=si2;
l10=si1;
si0+=si1;
sj0=i64_load(&i->m0,(U64)si0);
l11=sj0;
sj1=l6;
sj0^=sj1;
l2=sj0;
sj1=-1ULL;
sj0^=sj1;
sj1=l2;
sj2=-72340172838076673ULL;
sj1+=sj2;
sj0&=sj1;
sj1=-9187201950435737472ULL;
sj0&=sj1;
l2=sj0;
L5:;
{
sj0=l2;
sj1=0ULL;
si0=sj0 != sj1;
if(si0){
goto L6;
}
sj0=l11;
sj1=l11;
sj2=1ULL;
sj1<<=(sj2&63);
sj0&=sj1;
sj1=-9187201950435737472ULL;
sj0&=sj1;
si0=!(sj0);
if(si0){
goto L2;
}
si0=0U;
l3=si0;
goto L4;
L6:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+8U);
l12=si0;
si1=l5;
sj2=l2;
sj2=I64_CTZ(sj2);
si2=(U32)(sj2);
si3=3U;
si2>>=(si3&31);
si3=l10;
si2+=si3;
si3=l7;
si2&=si3;
l13=si2;
si3=2U;
si2<<=(si3&31);
si1-=si2;
si1=i32_load(&i->m0,(U64)si1);
l8=si1;
si0=si0 <= si1;
if(si0){
goto L3;
}
sj0=l2;
sj1=-1ULL;
sj0+=sj1;
sj1=l2;
sj0&=sj1;
l2=sj0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+4U);
si1=l8;
si2=12U;
si1*=si2;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=l3;
si1=i32_load(&i->m0,(U64)si1);
si0=si0 != si1;
if(si0){
goto L5;
}
}
si0=l4;
si1=0U;
si2=l13;
si1-=si2;
si2=2U;
si1<<=(si2&31);
si0+=si1;
l8=si0;
si0=128U;
l3=si0;
si0=l4;
si1=l13;
si2=2U;
si1<<=(si2&31);
si2=2U;
si1=(U32)((I32)si1>>(si2&31));
l10=si1;
si0+=si1;
l13=si0;
sj0=i64_load(&i->m0,(U64)si0);
l2=sj0;
sj1=l2;
sj2=1ULL;
sj1<<=(sj2&63);
sj0&=sj1;
sj1=-9187201950435737472ULL;
sj0&=sj1;
sj0=I64_CTZ(sj0);
si0=(U32)(sj0);
si1=3U;
si0>>=(si1&31);
si1=l4;
si2=l10;
si3=-8U;
si2+=si3;
si3=l7;
si2&=si3;
si1+=si2;
l7=si1;
sj1=i64_load(&i->m0,(U64)si1);
l2=sj1;
sj2=l2;
sj3=1ULL;
sj2<<=(sj3&63);
sj1&=sj2;
sj2=-9187201950435737472ULL;
sj1&=sj2;
sj1=I64_CLZ(sj1);
si1=(U32)(sj1);
si2=3U;
si1>>=(si2&31);
si0+=si1;
si1=7U;
si0=si0 > si1;
if(si0){
goto L7;
}
si0=l1;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+8U);
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=255U;
l3=si0;
L7:;
si0=l13;
si1=l3;
i32_store8(&i->m0,(U64)si0,si1);
si0=l7;
si1=8U;
si0+=si1;
si1=l3;
i32_store8(&i->m0,(U64)si0,si1);
si0=l1;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+12U);
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l8;
si1=-4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l8=si0;
si0=1U;
l3=si0;
L4:;
si0=l0;
si1=l8;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l3;
i32_store(&i->m0,(U64)si0,si1);
goto L0;
L3:;
si0=l8;
si1=l12;
si2=1835000U;
f663(i,si0,si1,si2);
UNREACHABLE;
L2:;
si0=l10;
si1=l9;
si2=8U;
si1+=si2;
l9=si1;
si0+=si1;
l8=si0;
goto L1;
}
L0:;
}

U32 f9895(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
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
U32 l18=0;
U32 si0,si1,si2,si3,si4,si5;
U64 sj0,sj1,sj2,sj3;
si0=i->g0;
si1=32U;
si0-=si1;
l3=si0;
i->g0=si0;
si0=l0;
si1=12U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
si1=1U;
si0+=si1;
l5=si0;
si0=!(si0);
if(si0){
goto L6;
}
si0=l5;
si1=l0;
si2=4U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
l6=si1;
si2=l6;
si3=1U;
si2+=si3;
l7=si2;
si3=3U;
si2>>=(si3&31);
l8=si2;
si3=7U;
si2*=si3;
si3=l6;
si4=8U;
si3=si3 < si4;
si1=si3?si1:si2;
l9=si1;
si2=1U;
si1>>=(si2&31);
si0=si0 <= si1;
if(si0){
goto L7;
}
si0=l3;
si1=8U;
si0+=si1;
si1=8U;
si2=l5;
si3=l9;
si4=1U;
si3+=si4;
l8=si3;
si4=l5;
si5=l8;
si4=si4 > si5;
si2=si4?si2:si3;
f9896(i,si0,si1,si2);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+12U);
l10=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+8U);
l11=si0;
si0=!(si0);
if(si0){
goto L1;
}
si0=l3;
si1=8U;
si0+=si1;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=l4;
si0-=si1;
l12=si0;
si0=l6;
si1=-1U;
si0=si0 == si1;
if(si0){
goto L9;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
l13=si0;
si1=-4U;
si0+=si1;
l14=si0;
si0=0U;
l7=si0;
L10:;
{
si0=l13;
si1=l7;
si0+=si1;
si0=i32_load8_s(&i->m0,(U64)si0);
si1=0U;
si0=(U32)((I32)si0<(I32)si1);
if(si0){
goto L11;
}
si0=l14;
si1=l7;
si2=2U;
si1<<=(si2&31);
l15=si1;
si0-=si1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si1=l2;
si0=si0 >= si1;
if(si0){
goto L5;
}
si0=l11;
si1=l1;
si2=l5;
si3=12U;
si2*=si3;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1+8U);
l16=si1;
si2=l10;
si1&=si2;
l8=si1;
si0+=si1;
sj0=i64_load(&i->m0,(U64)si0);
sj1=-9187201950435737472ULL;
sj0&=sj1;
l17=sj0;
sj1=0ULL;
si0=sj0 != sj1;
if(si0){
goto L12;
}
si0=8U;
l5=si0;
L13:;
{
si0=l8;
si1=l5;
si0+=si1;
l8=si0;
si0=l5;
si1=8U;
si0+=si1;
l5=si0;
si0=l11;
si1=l8;
si2=l10;
si1&=si2;
l8=si1;
si0+=si1;
sj0=i64_load(&i->m0,(U64)si0);
sj1=-9187201950435737472ULL;
sj0&=sj1;
l17=sj0;
si0=!(sj0);
if(si0){
goto L13;
}
}
L12:;
si0=l11;
sj1=l17;
sj1=I64_CTZ(sj1);
si1=(U32)(sj1);
si2=3U;
si1>>=(si2&31);
si2=l8;
si1+=si2;
si2=l10;
si1&=si2;
l5=si1;
si0+=si1;
si0=i32_load8_s(&i->m0,(U64)si0);
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L14;
}
si0=l11;
sj0=i64_load(&i->m0,(U64)si0);
sj1=-9187201950435737472ULL;
sj0&=sj1;
sj0=I64_CTZ(sj0);
si0=(U32)(sj0);
si1=3U;
si0>>=(si1&31);
l5=si0;
L14:;
si0=l11;
si1=l5;
si0+=si1;
si1=l16;
si2=25U;
si1>>=(si2&31);
l8=si1;
i32_store8(&i->m0,(U64)si0,si1);
si0=l5;
si1=-8U;
si0+=si1;
si1=l10;
si0&=si1;
si1=l11;
si0+=si1;
si1=8U;
si0+=si1;
si1=l8;
i32_store8(&i->m0,(U64)si0,si1);
si0=l11;
si1=l5;
si2=2U;
si1<<=(si2&31);
si0-=si1;
si1=-4U;
si0+=si1;
si1=l13;
si2=l15;
si1-=si2;
si2=-4U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
L11:;
si0=l7;
si1=l6;
si0=si0 == si1;
l5=si0;
si0=l7;
si1=1U;
si0+=si1;
l7=si0;
si0=l5;
si0=!(si0);
if(si0){
goto L10;
}
}
si0=l0;
si1=l12;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l0;
si1=l11;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=4U;
si0+=si1;
si1=l10;
i32_store(&i->m0,(U64)si0,si1);
si0=l6;
if(si0){
goto L8;
}
goto L2;
L9:;
si0=l0;
si1=l12;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l0;
si1=4U;
si0+=si1;
si1=l10;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
l13=si0;
si0=l0;
si1=l11;
i32_store(&i->m0,(U64)si0,si1);
L8:;
si0=l13;
si1=l6;
si2=2U;
si1<<=(si2&31);
si2=11U;
si1+=si2;
si2=-8U;
si1&=si2;
si0-=si1;
f15271(i,si0);
goto L2;
L7:;
si0=0U;
l5=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
l11=si0;
si0=l8;
si1=l7;
si2=7U;
si1&=si2;
si2=0U;
si1=si1 != si2;
si0+=si1;
l8=si0;
si0=!(si0);
if(si0){
goto L15;
}
si0=l8;
si1=1U;
si0&=si1;
l13=si0;
si0=l8;
si1=1U;
si0=si0 == si1;
if(si0){
goto L16;
}
si0=l8;
si1=1073741822U;
si0&=si1;
l10=si0;
si0=0U;
l5=si0;
L17:;
{
si0=l11;
si1=l5;
si0+=si1;
l8=si0;
si1=l8;
sj1=i64_load(&i->m0,(U64)si1);
l17=sj1;
sj2=-1ULL;
sj1^=sj2;
sj2=7ULL;
sj1>>=(sj2&63);
sj2=72340172838076673ULL;
sj1&=sj2;
sj2=l17;
sj3=9187201950435737471ULL;
sj2|=sj3;
sj1+=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l8;
si1=8U;
si0+=si1;
l8=si0;
si1=l8;
sj1=i64_load(&i->m0,(U64)si1);
l17=sj1;
sj2=-1ULL;
sj1^=sj2;
sj2=7ULL;
sj1>>=(sj2&63);
sj2=72340172838076673ULL;
sj1&=sj2;
sj2=l17;
sj3=9187201950435737471ULL;
sj2|=sj3;
sj1+=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=16U;
si0+=si1;
l5=si0;
si0=l10;
si1=-2U;
si0+=si1;
l10=si0;
if(si0){
goto L17;
}
}
L16:;
si0=l13;
si0=!(si0);
if(si0){
goto L15;
}
si0=l11;
si1=l5;
si0+=si1;
l5=si0;
si1=l5;
sj1=i64_load(&i->m0,(U64)si1);
l17=sj1;
sj2=-1ULL;
sj1^=sj2;
sj2=7ULL;
sj1>>=(sj2&63);
sj2=72340172838076673ULL;
sj1&=sj2;
sj2=l17;
sj3=9187201950435737471ULL;
sj2|=sj3;
sj1+=sj2;
i64_store(&i->m0,(U64)si0,sj1);
L15:;
si0=l7;
si1=8U;
si0=si0 < si1;
if(si0){
goto L18;
}
si0=l11;
si1=l7;
si0+=si1;
si1=l11;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
goto L4;
L18:;
si0=l11;
si1=8U;
si0+=si1;
si1=l11;
si2=l7;
si0=f15391(i,si0,si1,si2);
si0=l6;
si1=-1U;
si0=si0 != si1;
if(si0){
goto L4;
}
si0=0U;
l9=si0;
goto L3;
L6:;
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
si1=1171544U;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l3;
si1=1171552U;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l3;
si1=8U;
si0+=si1;
si1=1171656U;
f683(i,si0,si1);
UNREACHABLE;
L5:;
si0=l5;
si1=l2;
si2=1835016U;
f663(i,si0,si1,si2);
UNREACHABLE;
L4:;
si0=l11;
si1=-4U;
si0+=si1;
l18=si0;
si0=0U;
l5=si0;
L19:;
{
si0=l11;
si1=l5;
l16=si1;
si0+=si1;
l12=si0;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=128U;
si0=si0 != si1;
if(si0){
goto L20;
}
si0=l18;
si1=l16;
si2=2U;
si1<<=(si2&31);
l8=si1;
si0-=si1;
l14=si0;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si1=l2;
si0=si0 >= si1;
if(si0){
goto L23;
}
si0=l11;
si1=l8;
si0-=si1;
si1=-4U;
si0+=si1;
l10=si0;
L24:;
{
si0=l1;
si1=l5;
si2=12U;
si1*=si2;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0+8U);
l13=si0;
si1=l6;
si0&=si1;
l7=si0;
l8=si0;
si0=l11;
si1=l7;
si0+=si1;
sj0=i64_load(&i->m0,(U64)si0);
sj1=-9187201950435737472ULL;
sj0&=sj1;
l17=sj0;
sj1=0ULL;
si0=sj0 != sj1;
if(si0){
goto L25;
}
si0=8U;
l5=si0;
si0=l7;
l8=si0;
L26:;
{
si0=l8;
si1=l5;
si0+=si1;
l8=si0;
si0=l5;
si1=8U;
si0+=si1;
l5=si0;
si0=l11;
si1=l8;
si2=l6;
si1&=si2;
l8=si1;
si0+=si1;
sj0=i64_load(&i->m0,(U64)si0);
sj1=-9187201950435737472ULL;
sj0&=sj1;
l17=sj0;
si0=!(sj0);
if(si0){
goto L26;
}
}
L25:;
si0=l11;
sj1=l17;
sj1=I64_CTZ(sj1);
si1=(U32)(sj1);
si2=3U;
si1>>=(si2&31);
si2=l8;
si1+=si2;
si2=l6;
si1&=si2;
l8=si1;
si0+=si1;
si0=i32_load8_s(&i->m0,(U64)si0);
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L27;
}
si0=l11;
sj0=i64_load(&i->m0,(U64)si0);
sj1=-9187201950435737472ULL;
sj0&=sj1;
sj0=I64_CTZ(sj0);
si0=(U32)(sj0);
si1=3U;
si0>>=(si1&31);
l8=si0;
L27:;
si0=l8;
si1=l7;
si0-=si1;
si1=l16;
si2=l7;
si1-=si2;
si0^=si1;
si1=l6;
si0&=si1;
si1=8U;
si0=si0 < si1;
if(si0){
goto L21;
}
si0=l11;
si1=l8;
si2=2U;
si1<<=(si2&31);
si0-=si1;
si1=-4U;
si0+=si1;
l5=si0;
si0=l11;
si1=l8;
si0+=si1;
l7=si0;
si0=i32_load8_u(&i->m0,(U64)si0);
l15=si0;
si0=l7;
si1=l13;
si2=25U;
si1>>=(si2&31);
l13=si1;
i32_store8(&i->m0,(U64)si0,si1);
si0=l8;
si1=-8U;
si0+=si1;
si1=l6;
si0&=si1;
si1=l11;
si0+=si1;
si1=8U;
si0+=si1;
si1=l13;
i32_store8(&i->m0,(U64)si0,si1);
si0=l15;
si1=255U;
si0=si0 == si1;
if(si0){
goto L22;
}
si0=l10;
si0=i32_load8_u(&i->m0,(U64)si0);
l8=si0;
si0=l10;
si1=l5;
si1=i32_load8_u(&i->m0,(U64)si1);
i32_store8(&i->m0,(U64)si0,si1);
si0=l5;
si1=l8;
i32_store8(&i->m0,(U64)si0,si1);
si0=l10;
si0=i32_load8_u(&i->m0,(U64)si0+1U);
l8=si0;
si0=l10;
si1=l5;
si1=i32_load8_u(&i->m0,(U64)si1+1U);
i32_store8(&i->m0,(U64)si0+1U,si1);
si0=l5;
si1=l8;
i32_store8(&i->m0,(U64)si0+1U,si1);
si0=l10;
si0=i32_load8_u(&i->m0,(U64)si0+2U);
l8=si0;
si0=l10;
si1=l5;
si1=i32_load8_u(&i->m0,(U64)si1+2U);
i32_store8(&i->m0,(U64)si0+2U,si1);
si0=l5;
si1=l8;
i32_store8(&i->m0,(U64)si0+2U,si1);
si0=l10;
si0=i32_load8_u(&i->m0,(U64)si0+3U);
l8=si0;
si0=l10;
si1=l5;
si1=i32_load8_u(&i->m0,(U64)si1+3U);
i32_store8(&i->m0,(U64)si0+3U,si1);
si0=l5;
si1=l8;
i32_store8(&i->m0,(U64)si0+3U,si1);
si0=l14;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si1=l2;
si0=si0 < si1;
if(si0){
goto L24;
}
}
L23:;
si0=l5;
si1=l2;
si2=1835016U;
f663(i,si0,si1,si2);
UNREACHABLE;
L22:;
si0=l12;
si1=255U;
i32_store8(&i->m0,(U64)si0,si1);
si0=l16;
si1=-8U;
si0+=si1;
si1=l6;
si0&=si1;
si1=l11;
si0+=si1;
si1=8U;
si0+=si1;
si1=255U;
i32_store8(&i->m0,(U64)si0,si1);
si0=l5;
si1=l10;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
goto L20;
L21:;
si0=l12;
si1=l13;
si2=25U;
si1>>=(si2&31);
l5=si1;
i32_store8(&i->m0,(U64)si0,si1);
si0=l16;
si1=-8U;
si0+=si1;
si1=l6;
si0&=si1;
si1=l11;
si0+=si1;
si1=8U;
si0+=si1;
si1=l5;
i32_store8(&i->m0,(U64)si0,si1);
L20:;
si0=l16;
si1=1U;
si0+=si1;
l5=si0;
si0=l16;
si1=l6;
si0=si0 != si1;
if(si0){
goto L19;
}
}
L3:;
si0=l0;
si1=l9;
si2=l4;
si1-=si2;
i32_store(&i->m0,(U64)si0+8U,si1);
L2:;
si0=-2147483647U;
l10=si0;
L1:;
si0=l3;
si1=32U;
si0+=si1;
i->g0=si0;
si0=l10;
L0:;
return si0;
}

void f9896(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 si0,si1,si2,si3;
U64 sj1;
si0=i->g0;
si1=32U;
si0-=si1;
l3=si0;
i->g0=si0;
si0=l2;
if(si0){
goto L5;
}
si0=1834624U;
l2=si0;
si0=0U;
l1=si0;
si0=0U;
l4=si0;
goto L4;
L5:;
si0=l2;
si1=8U;
si0=si0 < si1;
if(si0){
goto L7;
}
si0=l2;
si1=536870912U;
si0=si0 >= si1;
if(si0){
goto L8;
}
si0=1U;
l4=si0;
si0=l2;
si1=3U;
si0<<=(si1&31);
l2=si0;
si1=14U;
si0=si0 < si1;
if(si0){
goto L6;
}
si0=-1U;
si1=l2;
si2=7U;
si1=DIV_U(si1,si2);
si2=-1U;
si1+=si2;
si1=I32_CLZ(si1);
si0>>=(si1&31);
si1=1U;
si0+=si1;
l4=si0;
si1=1073741823U;
si0=si0 <= si1;
if(si0){
goto L6;
}
goto L1;
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
si1=1171544U;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l3;
si1=1171552U;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l3;
si1=8U;
si0+=si1;
si1=1171656U;
f683(i,si0,si1);
UNREACHABLE;
L7:;
si0=4U;
si1=8U;
si2=l2;
si3=4U;
si2=si2 < si3;
si0=si2?si0:si1;
l4=si0;
L6:;
si0=l1;
si1=l4;
si2=2U;
si1<<=(si2&31);
l2=si1;
si0+=si1;
si1=-1U;
si0+=si1;
l5=si0;
si1=l2;
si0=si0 < si1;
if(si0){
goto L1;
}
si0=l5;
si1=0U;
si2=l1;
si1-=si2;
si0&=si1;
l5=si0;
si1=l4;
si2=8U;
si1+=si2;
l6=si1;
si0+=si1;
l2=si0;
si1=l5;
si0=si0 < si1;
if(si0){
goto L1;
}
si0=l2;
si1=0U;
si0=(U32)((I32)si0<(I32)si1);
if(si0){
goto L3;
}
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=l1;
si1=8U;
si0=si0 > si1;
if(si0){
goto L11;
}
si0=l2;
si1=l1;
si0=si0 >= si1;
if(si0){
goto L10;
}
L11:;
si0=l1;
si1=l2;
si0=f15277(i,si0,si1);
l7=si0;
if(si0){
goto L9;
}
goto L2;
L10:;
si0=l2;
si0=f15269(i,si0);
l7=si0;
si0=!(si0);
if(si0){
goto L2;
}
L9:;
si0=l7;
si1=l5;
si0+=si1;
l2=si0;
si1=255U;
si2=l6;
si0=f15392(i,si0,si1,si2);
si0=l4;
si1=-1U;
si0+=si1;
l1=si0;
si1=l4;
si2=3U;
si1>>=(si2&31);
si2=7U;
si1*=si2;
si2=l1;
si3=8U;
si2=si2 < si3;
si0=si2?si0:si1;
l4=si0;
L4:;
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l0;
si1=l4;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l0;
si1=l1;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l2;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=32U;
si0+=si1;
i->g0=si0;
goto L0;
L3:;
si0=l3;
si1=20U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=1U;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l3;
si1=1171544U;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l3;
si1=1171552U;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l3;
si1=8U;
si0+=si1;
si1=1171656U;
f683(i,si0,si1);
UNREACHABLE;
L2:;
si0=l1;
si1=l2;
f52(i,si0,si1);
UNREACHABLE;
L1:;
si0=l3;
si1=20U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=1U;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l3;
si1=1171544U;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l3;
si1=1171552U;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l3;
si1=8U;
si0+=si1;
si1=1171656U;
f683(i,si0,si1);
UNREACHABLE;
L0:;
}

U32 f9897(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
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
U32 l18=0;
U32 si0,si1,si2,si3,si4,si5;
U64 sj0,sj1,sj2,sj3;
si0=i->g0;
si1=32U;
si0-=si1;
l4=si0;
i->g0=si0;
si0=l0;
si1=12U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si1=l1;
si0+=si1;
l1=si0;
si1=l5;
si0=si0 < si1;
if(si0){
goto L6;
}
si0=l1;
si1=l0;
si2=4U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
l6=si1;
si2=l6;
si3=1U;
si2+=si3;
l7=si2;
si3=3U;
si2>>=(si3&31);
l8=si2;
si3=7U;
si2*=si3;
si3=l6;
si4=8U;
si3=si3 < si4;
si1=si3?si1:si2;
l9=si1;
si2=1U;
si1>>=(si2&31);
si0=si0 <= si1;
if(si0){
goto L7;
}
si0=l4;
si1=8U;
si0+=si1;
si1=8U;
si2=l1;
si3=l9;
si4=1U;
si3+=si4;
l8=si3;
si4=l1;
si5=l8;
si4=si4 > si5;
si2=si4?si2:si3;
f9896(i,si0,si1,si2);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+12U);
l10=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+8U);
l11=si0;
si0=!(si0);
if(si0){
goto L1;
}
si0=l4;
si1=8U;
si0+=si1;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=l5;
si0-=si1;
l12=si0;
si0=l6;
si1=-1U;
si0=si0 == si1;
if(si0){
goto L9;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
l13=si0;
si1=-4U;
si0+=si1;
l14=si0;
si0=0U;
l7=si0;
L10:;
{
si0=l13;
si1=l7;
si0+=si1;
si0=i32_load8_s(&i->m0,(U64)si0);
si1=0U;
si0=(U32)((I32)si0<(I32)si1);
if(si0){
goto L11;
}
si0=l14;
si1=l7;
si2=2U;
si1<<=(si2&31);
l15=si1;
si0-=si1;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si1=l3;
si0=si0 >= si1;
if(si0){
goto L5;
}
si0=l11;
si1=l2;
si2=l1;
si3=20U;
si2*=si3;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1+16U);
l16=si1;
si2=l10;
si1&=si2;
l8=si1;
si0+=si1;
sj0=i64_load(&i->m0,(U64)si0);
sj1=-9187201950435737472ULL;
sj0&=sj1;
l17=sj0;
sj1=0ULL;
si0=sj0 != sj1;
if(si0){
goto L12;
}
si0=8U;
l1=si0;
L13:;
{
si0=l8;
si1=l1;
si0+=si1;
l8=si0;
si0=l1;
si1=8U;
si0+=si1;
l1=si0;
si0=l11;
si1=l8;
si2=l10;
si1&=si2;
l8=si1;
si0+=si1;
sj0=i64_load(&i->m0,(U64)si0);
sj1=-9187201950435737472ULL;
sj0&=sj1;
l17=sj0;
si0=!(sj0);
if(si0){
goto L13;
}
}
L12:;
si0=l11;
sj1=l17;
sj1=I64_CTZ(sj1);
si1=(U32)(sj1);
si2=3U;
si1>>=(si2&31);
si2=l8;
si1+=si2;
si2=l10;
si1&=si2;
l1=si1;
si0+=si1;
si0=i32_load8_s(&i->m0,(U64)si0);
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L14;
}
si0=l11;
sj0=i64_load(&i->m0,(U64)si0);
sj1=-9187201950435737472ULL;
sj0&=sj1;
sj0=I64_CTZ(sj0);
si0=(U32)(sj0);
si1=3U;
si0>>=(si1&31);
l1=si0;
L14:;
si0=l11;
si1=l1;
si0+=si1;
si1=l16;
si2=25U;
si1>>=(si2&31);
l8=si1;
i32_store8(&i->m0,(U64)si0,si1);
si0=l1;
si1=-8U;
si0+=si1;
si1=l10;
si0&=si1;
si1=l11;
si0+=si1;
si1=8U;
si0+=si1;
si1=l8;
i32_store8(&i->m0,(U64)si0,si1);
si0=l11;
si1=l1;
si2=2U;
si1<<=(si2&31);
si0-=si1;
si1=-4U;
si0+=si1;
si1=l13;
si2=l15;
si1-=si2;
si2=-4U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
L11:;
si0=l7;
si1=l6;
si0=si0 == si1;
l1=si0;
si0=l7;
si1=1U;
si0+=si1;
l7=si0;
si0=l1;
si0=!(si0);
if(si0){
goto L10;
}
}
si0=l0;
si1=l12;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l0;
si1=l11;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=4U;
si0+=si1;
si1=l10;
i32_store(&i->m0,(U64)si0,si1);
si0=l6;
if(si0){
goto L8;
}
goto L2;
L9:;
si0=l0;
si1=l12;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l0;
si1=4U;
si0+=si1;
si1=l10;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
l13=si0;
si0=l0;
si1=l11;
i32_store(&i->m0,(U64)si0,si1);
L8:;
si0=l13;
si1=l6;
si2=2U;
si1<<=(si2&31);
si2=11U;
si1+=si2;
si2=-8U;
si1&=si2;
si0-=si1;
f15271(i,si0);
goto L2;
L7:;
si0=0U;
l1=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
l11=si0;
si0=l8;
si1=l7;
si2=7U;
si1&=si2;
si2=0U;
si1=si1 != si2;
si0+=si1;
l8=si0;
si0=!(si0);
if(si0){
goto L15;
}
si0=l8;
si1=1U;
si0&=si1;
l13=si0;
si0=l8;
si1=1U;
si0=si0 == si1;
if(si0){
goto L16;
}
si0=l8;
si1=1073741822U;
si0&=si1;
l10=si0;
si0=0U;
l1=si0;
L17:;
{
si0=l11;
si1=l1;
si0+=si1;
l8=si0;
si1=l8;
sj1=i64_load(&i->m0,(U64)si1);
l17=sj1;
sj2=-1ULL;
sj1^=sj2;
sj2=7ULL;
sj1>>=(sj2&63);
sj2=72340172838076673ULL;
sj1&=sj2;
sj2=l17;
sj3=9187201950435737471ULL;
sj2|=sj3;
sj1+=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l8;
si1=8U;
si0+=si1;
l8=si0;
si1=l8;
sj1=i64_load(&i->m0,(U64)si1);
l17=sj1;
sj2=-1ULL;
sj1^=sj2;
sj2=7ULL;
sj1>>=(sj2&63);
sj2=72340172838076673ULL;
sj1&=sj2;
sj2=l17;
sj3=9187201950435737471ULL;
sj2|=sj3;
sj1+=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si1=16U;
si0+=si1;
l1=si0;
si0=l10;
si1=-2U;
si0+=si1;
l10=si0;
if(si0){
goto L17;
}
}
L16:;
si0=l13;
si0=!(si0);
if(si0){
goto L15;
}
si0=l11;
si1=l1;
si0+=si1;
l1=si0;
si1=l1;
sj1=i64_load(&i->m0,(U64)si1);
l17=sj1;
sj2=-1ULL;
sj1^=sj2;
sj2=7ULL;
sj1>>=(sj2&63);
sj2=72340172838076673ULL;
sj1&=sj2;
sj2=l17;
sj3=9187201950435737471ULL;
sj2|=sj3;
sj1+=sj2;
i64_store(&i->m0,(U64)si0,sj1);
L15:;
si0=l7;
si1=8U;
si0=si0 < si1;
if(si0){
goto L18;
}
si0=l11;
si1=l7;
si0+=si1;
si1=l11;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
goto L4;
L18:;
si0=l11;
si1=8U;
si0+=si1;
si1=l11;
si2=l7;
si0=f15391(i,si0,si1,si2);
si0=l6;
si1=-1U;
si0=si0 != si1;
if(si0){
goto L4;
}
si0=0U;
l9=si0;
goto L3;
L6:;
si0=l4;
si1=8U;
si0+=si1;
si1=12U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=1U;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l4;
si1=1171544U;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l4;
si1=1171552U;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l4;
si1=8U;
si0+=si1;
si1=1171656U;
f683(i,si0,si1);
UNREACHABLE;
L5:;
si0=l1;
si1=l3;
si2=1835016U;
f663(i,si0,si1,si2);
UNREACHABLE;
L4:;
si0=l11;
si1=-4U;
si0+=si1;
l18=si0;
si0=0U;
l1=si0;
L19:;
{
si0=l11;
si1=l1;
l16=si1;
si0+=si1;
l12=si0;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=128U;
si0=si0 != si1;
if(si0){
goto L20;
}
si0=l18;
si1=l16;
si2=2U;
si1<<=(si2&31);
l8=si1;
si0-=si1;
l14=si0;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si1=l3;
si0=si0 >= si1;
if(si0){
goto L23;
}
si0=l11;
si1=l8;
si0-=si1;
si1=-4U;
si0+=si1;
l10=si0;
L24:;
{
si0=l2;
si1=l1;
si2=20U;
si1*=si2;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0+16U);
l13=si0;
si1=l6;
si0&=si1;
l7=si0;
l8=si0;
si0=l11;
si1=l7;
si0+=si1;
sj0=i64_load(&i->m0,(U64)si0);
sj1=-9187201950435737472ULL;
sj0&=sj1;
l17=sj0;
sj1=0ULL;
si0=sj0 != sj1;
if(si0){
goto L25;
}
si0=8U;
l1=si0;
si0=l7;
l8=si0;
L26:;
{
si0=l8;
si1=l1;
si0+=si1;
l8=si0;
si0=l1;
si1=8U;
si0+=si1;
l1=si0;
si0=l11;
si1=l8;
si2=l6;
si1&=si2;
l8=si1;
si0+=si1;
sj0=i64_load(&i->m0,(U64)si0);
sj1=-9187201950435737472ULL;
sj0&=sj1;
l17=sj0;
si0=!(sj0);
if(si0){
goto L26;
}
}
L25:;
si0=l11;
sj1=l17;
sj1=I64_CTZ(sj1);
si1=(U32)(sj1);
si2=3U;
si1>>=(si2&31);
si2=l8;
si1+=si2;
si2=l6;
si1&=si2;
l8=si1;
si0+=si1;
si0=i32_load8_s(&i->m0,(U64)si0);
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L27;
}
si0=l11;
sj0=i64_load(&i->m0,(U64)si0);
sj1=-9187201950435737472ULL;
sj0&=sj1;
sj0=I64_CTZ(sj0);
si0=(U32)(sj0);
si1=3U;
si0>>=(si1&31);
l8=si0;
L27:;
si0=l8;
si1=l7;
si0-=si1;
si1=l16;
si2=l7;
si1-=si2;
si0^=si1;
si1=l6;
si0&=si1;
si1=8U;
si0=si0 < si1;
if(si0){
goto L21;
}
si0=l11;
si1=l8;
si2=2U;
si1<<=(si2&31);
si0-=si1;
si1=-4U;
si0+=si1;
l1=si0;
si0=l11;
si1=l8;
si0+=si1;
l7=si0;
si0=i32_load8_u(&i->m0,(U64)si0);
l15=si0;
si0=l7;
si1=l13;
si2=25U;
si1>>=(si2&31);
l13=si1;
i32_store8(&i->m0,(U64)si0,si1);
si0=l8;
si1=-8U;
si0+=si1;
si1=l6;
si0&=si1;
si1=l11;
si0+=si1;
si1=8U;
si0+=si1;
si1=l13;
i32_store8(&i->m0,(U64)si0,si1);
si0=l15;
si1=255U;
si0=si0 == si1;
if(si0){
goto L22;
}
si0=l10;
si0=i32_load8_u(&i->m0,(U64)si0);
l8=si0;
si0=l10;
si1=l1;
si1=i32_load8_u(&i->m0,(U64)si1);
i32_store8(&i->m0,(U64)si0,si1);
si0=l1;
si1=l8;
i32_store8(&i->m0,(U64)si0,si1);
si0=l10;
si0=i32_load8_u(&i->m0,(U64)si0+1U);
l8=si0;
si0=l10;
si1=l1;
si1=i32_load8_u(&i->m0,(U64)si1+1U);
i32_store8(&i->m0,(U64)si0+1U,si1);
si0=l1;
si1=l8;
i32_store8(&i->m0,(U64)si0+1U,si1);
si0=l10;
si0=i32_load8_u(&i->m0,(U64)si0+2U);
l8=si0;
si0=l10;
si1=l1;
si1=i32_load8_u(&i->m0,(U64)si1+2U);
i32_store8(&i->m0,(U64)si0+2U,si1);
si0=l1;
si1=l8;
i32_store8(&i->m0,(U64)si0+2U,si1);
si0=l10;
si0=i32_load8_u(&i->m0,(U64)si0+3U);
l8=si0;
si0=l10;
si1=l1;
si1=i32_load8_u(&i->m0,(U64)si1+3U);
i32_store8(&i->m0,(U64)si0+3U,si1);
si0=l1;
si1=l8;
i32_store8(&i->m0,(U64)si0+3U,si1);
si0=l14;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si1=l3;
si0=si0 < si1;
if(si0){
goto L24;
}
}
L23:;
si0=l1;
si1=l3;
si2=1835016U;
f663(i,si0,si1,si2);
UNREACHABLE;
L22:;
si0=l12;
si1=255U;
i32_store8(&i->m0,(U64)si0,si1);
si0=l16;
si1=-8U;
si0+=si1;
si1=l6;
si0&=si1;
si1=l11;
si0+=si1;
si1=8U;
si0+=si1;
si1=255U;
i32_store8(&i->m0,(U64)si0,si1);
si0=l1;
si1=l10;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
goto L20;
L21:;
si0=l12;
si1=l13;
si2=25U;
si1>>=(si2&31);
l1=si1;
i32_store8(&i->m0,(U64)si0,si1);
si0=l16;
si1=-8U;
si0+=si1;
si1=l6;
si0&=si1;
si1=l11;
si0+=si1;
si1=8U;
si0+=si1;
si1=l1;
i32_store8(&i->m0,(U64)si0,si1);
L20:;
si0=l16;
si1=1U;
si0+=si1;
l1=si0;
si0=l16;
si1=l6;
si0=si0 != si1;
if(si0){
goto L19;
}
}
L3:;
si0=l0;
si1=l9;
si2=l5;
si1-=si2;
i32_store(&i->m0,(U64)si0+8U,si1);
L2:;
si0=-2147483647U;
l10=si0;
L1:;
si0=l4;
si1=32U;
si0+=si1;
i->g0=si0;
si0=l10;
L0:;
return si0;
}

U32 f9898(rustpythonInstance*i,U32 l0,U64 l1,U32 l2,U32 l3,U32 l4) {
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 l8=0;
U32 l9=0;
U32 si0,si1,si2;
U64 sj0,sj1,sj2;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si1=l0;
si2=4U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
l6=si1;
sj2=l1;
si2=(U32)(sj2);
l7=si2;
si1&=si2;
l8=si1;
si0+=si1;
sj0=i64_load(&i->m0,(U64)si0);
sj1=-9187201950435737472ULL;
sj0&=sj1;
l1=sj0;
sj1=0ULL;
si0=sj0 != sj1;
if(si0){
goto L1;
}
si0=8U;
l9=si0;
L2:;
{
si0=l8;
si1=l9;
si0+=si1;
l8=si0;
si0=l9;
si1=8U;
si0+=si1;
l9=si0;
si0=l5;
si1=l8;
si2=l6;
si1&=si2;
l8=si1;
si0+=si1;
sj0=i64_load(&i->m0,(U64)si0);
sj1=-9187201950435737472ULL;
sj0&=sj1;
l1=sj0;
si0=!(sj0);
if(si0){
goto L2;
}
}
L1:;
si0=l5;
sj1=l1;
sj1=I64_CTZ(sj1);
si1=(U32)(sj1);
si2=3U;
si1>>=(si2&31);
si2=l8;
si1+=si2;
si2=l6;
si1&=si2;
l9=si1;
si0+=si1;
si0=i32_load8_s(&i->m0,(U64)si0);
l8=si0;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L3;
}
si0=l5;
si1=l5;
sj1=i64_load(&i->m0,(U64)si1);
sj2=-9187201950435737472ULL;
sj1&=sj2;
sj1=I64_CTZ(sj1);
si1=(U32)(sj1);
si2=3U;
si1>>=(si2&31);
l9=si1;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
l8=si0;
L3:;
si0=l8;
si1=1U;
si0&=si1;
l8=si0;
si0=!(si0);
if(si0){
goto L4;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+8U);
if(si0){
goto L4;
}
si0=l0;
si1=l3;
si2=l4;
si0=f9895(i,si0,si1,si2);
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si1=l0;
si2=4U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
l6=si1;
si2=l7;
si1&=si2;
l4=si1;
si0+=si1;
sj0=i64_load(&i->m0,(U64)si0);
sj1=-9187201950435737472ULL;
sj0&=sj1;
l1=sj0;
sj1=0ULL;
si0=sj0 != sj1;
if(si0){
goto L5;
}
si0=8U;
l9=si0;
L6:;
{
si0=l4;
si1=l9;
si0+=si1;
l4=si0;
si0=l9;
si1=8U;
si0+=si1;
l9=si0;
si0=l5;
si1=l4;
si2=l6;
si1&=si2;
l4=si1;
si0+=si1;
sj0=i64_load(&i->m0,(U64)si0);
sj1=-9187201950435737472ULL;
sj0&=sj1;
l1=sj0;
si0=!(sj0);
if(si0){
goto L6;
}
}
L5:;
si0=l5;
sj1=l1;
sj1=I64_CTZ(sj1);
si1=(U32)(sj1);
si2=3U;
si1>>=(si2&31);
si2=l4;
si1+=si2;
si2=l6;
si1&=si2;
l9=si1;
si0+=si1;
si0=i32_load8_s(&i->m0,(U64)si0);
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L4;
}
si0=l5;
sj0=i64_load(&i->m0,(U64)si0);
sj1=-9187201950435737472ULL;
sj0&=sj1;
sj0=I64_CTZ(sj0);
si0=(U32)(sj0);
si1=3U;
si0>>=(si1&31);
l9=si0;
L4:;
si0=l5;
si1=l9;
si0+=si1;
si1=l7;
si2=25U;
si1>>=(si2&31);
l7=si1;
i32_store8(&i->m0,(U64)si0,si1);
si0=l9;
si1=-8U;
si0+=si1;
si1=l6;
si0&=si1;
si1=l5;
si0+=si1;
si1=8U;
si0+=si1;
si1=l7;
i32_store8(&i->m0,(U64)si0,si1);
si0=l0;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+8U);
si2=l8;
si1-=si2;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l0;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+12U);
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l5;
si1=l9;
si2=2U;
si1<<=(si2&31);
si0-=si1;
l9=si0;
si1=-4U;
si0+=si1;
si1=l2;
i32_store(&i->m0,(U64)si0,si1);
si0=l9;
L0:;
return si0;
}

U32 f9899(rustpythonInstance*i,U32 l0,U64 l1,U32 l2,U32 l3,U32 l4) {
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 l8=0;
U32 l9=0;
U32 si0,si1,si2,si3;
U64 sj0,sj1,sj2;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si1=l0;
si2=4U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
l6=si1;
sj2=l1;
si2=(U32)(sj2);
l7=si2;
si1&=si2;
l8=si1;
si0+=si1;
sj0=i64_load(&i->m0,(U64)si0);
sj1=-9187201950435737472ULL;
sj0&=sj1;
l1=sj0;
sj1=0ULL;
si0=sj0 != sj1;
if(si0){
goto L1;
}
si0=8U;
l9=si0;
L2:;
{
si0=l8;
si1=l9;
si0+=si1;
l8=si0;
si0=l9;
si1=8U;
si0+=si1;
l9=si0;
si0=l5;
si1=l8;
si2=l6;
si1&=si2;
l8=si1;
si0+=si1;
sj0=i64_load(&i->m0,(U64)si0);
sj1=-9187201950435737472ULL;
sj0&=sj1;
l1=sj0;
si0=!(sj0);
if(si0){
goto L2;
}
}
L1:;
si0=l5;
sj1=l1;
sj1=I64_CTZ(sj1);
si1=(U32)(sj1);
si2=3U;
si1>>=(si2&31);
si2=l8;
si1+=si2;
si2=l6;
si1&=si2;
l9=si1;
si0+=si1;
si0=i32_load8_s(&i->m0,(U64)si0);
l8=si0;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L3;
}
si0=l5;
si1=l5;
sj1=i64_load(&i->m0,(U64)si1);
sj2=-9187201950435737472ULL;
sj1&=sj2;
sj1=I64_CTZ(sj1);
si1=(U32)(sj1);
si2=3U;
si1>>=(si2&31);
l9=si1;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
l8=si0;
L3:;
si0=l8;
si1=1U;
si0&=si1;
l8=si0;
si0=!(si0);
if(si0){
goto L4;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+8U);
if(si0){
goto L4;
}
si0=l0;
si1=1U;
si2=l3;
si3=l4;
si0=f9897(i,si0,si1,si2,si3);
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si1=l0;
si2=4U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
l6=si1;
si2=l7;
si1&=si2;
l4=si1;
si0+=si1;
sj0=i64_load(&i->m0,(U64)si0);
sj1=-9187201950435737472ULL;
sj0&=sj1;
l1=sj0;
sj1=0ULL;
si0=sj0 != sj1;
if(si0){
goto L5;
}
si0=8U;
l9=si0;
L6:;
{
si0=l4;
si1=l9;
si0+=si1;
l4=si0;
si0=l9;
si1=8U;
si0+=si1;
l9=si0;
si0=l5;
si1=l4;
si2=l6;
si1&=si2;
l4=si1;
si0+=si1;
sj0=i64_load(&i->m0,(U64)si0);
sj1=-9187201950435737472ULL;
sj0&=sj1;
l1=sj0;
si0=!(sj0);
if(si0){
goto L6;
}
}
L5:;
si0=l5;
sj1=l1;
sj1=I64_CTZ(sj1);
si1=(U32)(sj1);
si2=3U;
si1>>=(si2&31);
si2=l4;
si1+=si2;
si2=l6;
si1&=si2;
l9=si1;
si0+=si1;
si0=i32_load8_s(&i->m0,(U64)si0);
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L4;
}
si0=l5;
sj0=i64_load(&i->m0,(U64)si0);
sj1=-9187201950435737472ULL;
sj0&=sj1;
sj0=I64_CTZ(sj0);
si0=(U32)(sj0);
si1=3U;
si0>>=(si1&31);
l9=si0;
L4:;
si0=l5;
si1=l9;
si0+=si1;
si1=l7;
si2=25U;
si1>>=(si2&31);
l7=si1;
i32_store8(&i->m0,(U64)si0,si1);
si0=l9;
si1=-8U;
si0+=si1;
si1=l6;
si0&=si1;
si1=l5;
si0+=si1;
si1=8U;
si0+=si1;
si1=l7;
i32_store8(&i->m0,(U64)si0,si1);
si0=l0;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+8U);
si2=l8;
si1-=si2;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l0;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+12U);
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l5;
si1=l9;
si2=2U;
si1<<=(si2&31);
si0-=si1;
l9=si0;
si1=-4U;
si0+=si1;
si1=l2;
i32_store(&i->m0,(U64)si0,si1);
si0=l9;
L0:;
return si0;
}

void f9900(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U32 l4=0;
U64 l5=0;
U32 l6=0;
U32 l7=0;
U32 si0,si1,si2;
U64 sj0,sj1;
si0=i->g0;
si1=16U;
si0-=si1;
l3=si0;
i->g0=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
if(si0){
goto L3;
}
goto L2;
L3:;
si0=l1;
sj0=i64_load(&i->m0,(U64)si0+4U);
l5=sj0;
sj1=4294967295ULL;
si0=sj0 > sj1;
if(si0){
goto L2;
}
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=15U;
si0=f15269(i,si0);
l1=si0;
si0=!(si0);
if(si0){
goto L5;
}
si0=l1;
si1=7U;
si0+=si1;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+1835039U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+1835032U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si0=i32_load(&i->m0,(U64)si0+88U);
si1=508U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si1=l6;
si1=i32_load(&i->m0,(U64)si1);
l7=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
sj1=64424509455ULL;
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l3;
si1=l1;
i32_store(&i->m0,(U64)si0,si1);
si0=l7;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 == si1;
if(si0){
goto L4;
}
si0=l2;
si1=l6;
si2=l3;
si0=f7173(i,si0,si1,si2);
l1=si0;
si0=l0;
si1=1U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l1;
i32_store(&i->m0,(U64)si0+4U,si1);
sj0=l5;
si0=!(sj0);
if(si0){
goto L1;
}
si0=l4;
f15271(i,si0);
goto L1;
L5:;
si0=1U;
si1=15U;
f52(i,si0,si1);
UNREACHABLE;
L4:;
f15042(i);
UNREACHABLE;
L2:;
si0=l0;
si1=l4;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=16U;
si0+=si1;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+12U);
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=8U;
si0+=si1;
sj1=l5;
i64_store(&i->m0,(U64)si0,sj1);
L1:;
si0=l3;
si1=16U;
si0+=si1;
i->g0=si0;
L0:;
}

void f9901(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 si0,si1,si2,si3,si4;
si0=i->g0;
si1=16U;
si0-=si1;
l4=si0;
i->g0=si0;
si0=l1;
if(si0){
goto L2;
}
si0=0U;
l5=si0;
goto L1;
L2:;
si0=l4;
si1=8U;
si0+=si1;
si1=l1;
si2=56U;
si1+=si2;
f5519(i,si0,si1);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+8U);
if(si0){
goto L4;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0+12U);
l5=si0;
goto L3;
L4:;
si0=2147483647U;
si1=-2147483648U;
si2=l1;
si3=72U;
si2+=si3;
si2=i32_load8_u(&i->m0,(U64)si2);
si0=si2?si0:si1;
l5=si0;
L3:;
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
goto L1;
}
si0=l1;
f7690(i,si0);
L1:;
si0=l3;
l1=si0;
si0=l2;
si0=!(si0);
if(si0){
goto L6;
}
si0=l4;
si1=l2;
si2=56U;
si1+=si2;
f5519(i,si0,si1);
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L8;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0+4U);
l1=si0;
goto L7;
L8:;
si0=2147483647U;
si1=-2147483648U;
si2=l2;
si3=72U;
si2+=si3;
si2=i32_load8_u(&i->m0,(U64)si2);
si0=si2?si0:si1;
l1=si0;
L7:;
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
goto L9;
}
si0=l2;
f7690(i,si0);
L9:;
si0=l3;
l2=si0;
si0=l1;
si1=l3;
si0=(U32)((I32)si0>(I32)si1);
if(si0){
goto L5;
}
L6:;
si0=l1;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L10;
}
si0=l1;
l2=si0;
goto L5;
L10:;
si0=l1;
si1=l3;
si0+=si1;
l2=si0;
si1=0U;
si2=l2;
si3=0U;
si2=(U32)((I32)si2>(I32)si3);
si0=si2?si0:si1;
l2=si0;
L5:;
si0=l0;
si1=l2;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l5;
si2=l3;
si1+=si2;
l2=si1;
si2=0U;
si3=l2;
si4=0U;
si3=(U32)((I32)si3>(I32)si4);
si1=si3?si1:si2;
si2=l5;
si3=l5;
si4=0U;
si3=(U32)((I32)si3<(I32)si4);
si1=si3?si1:si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=16U;
si0+=si1;
i->g0=si0;
L0:;
}

void f9902(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4) {
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 l8=0;
U32 si0,si1,si2;
U64 sj1;
si0=i->g0;
si1=16U;
si0-=si1;
l5=si0;
i->g0=si0;
si0=l4;
si1=l2;
si0+=si1;
l6=si0;
if(si0){
goto L4;
}
si0=1U;
l7=si0;
goto L3;
L4:;
si0=l6;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L2;
}
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=l6;
si0=f15269(i,si0);
l7=si0;
si0=!(si0);
if(si0){
goto L1;
}
L3:;
si0=0U;
l8=si0;
si0=l5;
si1=0U;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l5;
si1=l7;
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=l6;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l6;
si1=l2;
si0=si0 >= si1;
if(si0){
goto L5;
}
si0=l5;
si1=0U;
si2=l2;
f7248(i,si0,si1,si2);
si0=l5;
si0=i32_load(&i->m0,(U64)si0+4U);
l6=si0;
si0=l5;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+8U);
l8=si0;
L5:;
si0=l7;
si1=l8;
si0+=si1;
si1=l1;
si2=l2;
si0=f15390(i,si0,si1,si2);
si0=l5;
si1=l8;
si2=l2;
si1+=si2;
l2=si1;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l6;
si1=l2;
si0-=si1;
si1=l4;
si0=si0 >= si1;
if(si0){
goto L6;
}
si0=l5;
si1=l2;
si2=l4;
f7248(i,si0,si1,si2);
si0=l5;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+8U);
l2=si0;
L6:;
si0=l7;
si1=l2;
si0+=si1;
si1=l3;
si2=l4;
si0=f15390(i,si0,si1,si2);
si0=l0;
si1=8U;
si0+=si1;
si1=l2;
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
si1=l6;
f52(i,si0,si1);
UNREACHABLE;
L0:;
}

void f9903(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4) {
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 l8=0;
U32 si0,si1,si2;
U64 sj1;
si0=i->g0;
si1=16U;
si0-=si1;
l5=si0;
i->g0=si0;
si0=l4;
si1=l2;
si0+=si1;
l6=si0;
if(si0){
goto L4;
}
si0=1U;
l7=si0;
goto L3;
L4:;
si0=l6;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L2;
}
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=l6;
si0=f15269(i,si0);
l7=si0;
si0=!(si0);
if(si0){
goto L1;
}
L3:;
si0=0U;
l8=si0;
si0=l5;
si1=0U;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l5;
si1=l7;
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=l6;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l6;
si1=l2;
si0=si0 >= si1;
if(si0){
goto L5;
}
si0=l5;
si1=0U;
si2=l2;
f7248(i,si0,si1,si2);
si0=l5;
si0=i32_load(&i->m0,(U64)si0+4U);
l6=si0;
si0=l5;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+8U);
l8=si0;
L5:;
si0=l7;
si1=l8;
si0+=si1;
si1=l1;
si2=l2;
si0=f15390(i,si0,si1,si2);
si0=l5;
si1=l8;
si2=l2;
si1+=si2;
l2=si1;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l6;
si1=l2;
si0-=si1;
si1=l4;
si0=si0 >= si1;
if(si0){
goto L6;
}
si0=l5;
si1=l2;
si2=l4;
f7248(i,si0,si1,si2);
si0=l5;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+8U);
l2=si0;
L6:;
si0=l7;
si1=l2;
si0+=si1;
si1=l3;
si2=l4;
si0=f15390(i,si0,si1,si2);
si0=l0;
si1=8U;
si0+=si1;
si1=l2;
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
si1=l6;
f52(i,si0,si1);
UNREACHABLE;
L0:;
}

void f9904(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4,U32 l5,U32 l6,U32 l7) {
U32 l8=0;
U32 l9=0;
U64 l10=0;
U32 l11=0;
U32 l12=0;
U32 l13=0;
U32 l14=0;
U32 l15=0;
U32 l16=0;
U32 si0,si1,si2,si3,si4,si5;
U64 sj0,sj1;
si0=i->g0;
si1=128U;
si0-=si1;
l8=si0;
i->g0=si0;
si0=l8;
si1=l3;
si2=l4;
f9900(i,si0,si1,si2);
si0=l8;
si0=i32_load(&i->m0,(U64)si0+4U);
l3=si0;
si0=l8;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L9;
}
si0=l8;
si1=16U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l9=si0;
si0=l3;
si0=!(si0);
if(si0){
goto L8;
}
si0=l8;
si1=8U;
si0+=si1;
sj0=i64_load(&i->m0,(U64)si0);
l10=sj0;
sj1=32ULL;
sj0>>=(sj1&63);
si0=(U32)(sj0);
l11=si0;
si0=l9;
si1=0U;
si0=(U32)((I32)si0<(I32)si1);
if(si0){
goto L10;
}
si0=l9;
si1=1U;
si0+=si1;
l12=si0;
si0=2U;
l13=si0;
si0=1U;
l14=si0;
si0=l11;
l9=si0;
si0=l11;
switch(si0){
case 0:
goto L4;
case 1:
goto L7;
default:
goto L11;
}
L11:;
si0=l8;
si1=l3;
si2=l11;
f1407(i,si0,si1,si2);
si0=l8;
si1=112U;
si0+=si1;
si1=l8;
si2=13U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l8;
si1=119U;
si0+=si1;
si1=l8;
si2=20U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l8;
si1=l8;
sj1=i64_load(&i->m0,(U64)si1+5U);
i64_store(&i->m0,(U64)si0+104U,sj1);
si0=l8;
si0=i32_load8_u(&i->m0,(U64)si0+4U);
l15=si0;
si0=l8;
si0=i32_load(&i->m0,(U64)si0);
l13=si0;
si0=l3;
si1=l11;
si0+=si1;
l14=si0;
si1=-1U;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=1U;
si0<<=(si1&31);
si1=l14;
si2=-2U;
si1+=si2;
l7=si1;
si1=i32_load8_u(&i->m0,(U64)si1);
si0+=si1;
l9=si0;
si0=l7;
si1=l3;
si0=si0 != si1;
if(si0){
goto L12;
}
si0=2U;
l14=si0;
goto L4;
L12:;
si0=l11;
si1=-2U;
si0+=si1;
l16=si0;
si1=3U;
si0&=si1;
l5=si0;
si0=l11;
si1=-3U;
si0+=si1;
si1=3U;
si0=si0 >= si1;
if(si0){
goto L14;
}
si0=2U;
l14=si0;
goto L13;
L14:;
si0=l16;
si1=-4U;
si0&=si1;
l16=si0;
si0=l14;
si1=-6U;
si0+=si1;
l7=si0;
si0=2U;
l14=si0;
L15:;
{
si0=l9;
si1=1U;
si0<<=(si1&31);
si1=l7;
si2=3U;
si1+=si2;
si1=i32_load8_u(&i->m0,(U64)si1);
si0+=si1;
si1=1U;
si0<<=(si1&31);
si1=l7;
si2=2U;
si1+=si2;
si1=i32_load8_u(&i->m0,(U64)si1);
si0+=si1;
si1=1U;
si0<<=(si1&31);
si1=l7;
si2=1U;
si1+=si2;
si1=i32_load8_u(&i->m0,(U64)si1);
si0+=si1;
si1=1U;
si0<<=(si1&31);
si1=l7;
si1=i32_load8_u(&i->m0,(U64)si1);
si0+=si1;
l9=si0;
si0=l7;
si1=-4U;
si0+=si1;
l7=si0;
si0=l14;
si1=4U;
si0<<=(si1&31);
l14=si0;
si0=l16;
si1=-4U;
si0+=si1;
l16=si0;
if(si0){
goto L15;
}
}
si0=l7;
si1=4U;
si0+=si1;
l7=si0;
L13:;
si0=l5;
si0=!(si0);
if(si0){
goto L4;
}
si0=l7;
si1=-1U;
si0+=si1;
l7=si0;
L16:;
{
si0=l14;
si1=1U;
si0<<=(si1&31);
l14=si0;
si0=l9;
si1=1U;
si0<<=(si1&31);
si1=l7;
si1=i32_load8_u(&i->m0,(U64)si1);
si0+=si1;
l9=si0;
si0=l7;
si1=-1U;
si0+=si1;
l7=si0;
si0=l5;
si1=-1U;
si0+=si1;
l5=si0;
if(si0){
goto L16;
}
goto L4;
}
L10:;
si0=2U;
l13=si0;
si0=1U;
l9=si0;
si0=l11;
l14=si0;
si0=l11;
switch(si0){
case 0:
goto L5;
case 1:
goto L6;
default:
goto L17;
}
L17:;
si0=l8;
si1=l3;
si2=l11;
f1407(i,si0,si1,si2);
si0=l8;
si1=112U;
si0+=si1;
si1=l8;
si2=13U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l8;
si1=119U;
si0+=si1;
si1=l8;
si2=20U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l8;
si1=l8;
sj1=i64_load(&i->m0,(U64)si1+5U);
i64_store(&i->m0,(U64)si0+104U,sj1);
si0=l8;
si0=i32_load8_u(&i->m0,(U64)si0+4U);
l15=si0;
si0=l8;
si0=i32_load(&i->m0,(U64)si0);
l13=si0;
si0=l3;
si1=l11;
si0+=si1;
l9=si0;
si1=-1U;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=1U;
si0<<=(si1&31);
si1=l9;
si2=-2U;
si1+=si2;
l7=si1;
si1=i32_load8_u(&i->m0,(U64)si1);
si0+=si1;
l14=si0;
si0=l7;
si1=l3;
si0=si0 != si1;
if(si0){
goto L18;
}
si0=2U;
l9=si0;
goto L5;
L18:;
si0=l11;
si1=-2U;
si0+=si1;
l16=si0;
si1=3U;
si0&=si1;
l6=si0;
si0=l11;
si1=-3U;
si0+=si1;
si1=3U;
si0=si0 >= si1;
if(si0){
goto L20;
}
si0=2U;
l9=si0;
goto L19;
L20:;
si0=l16;
si1=-4U;
si0&=si1;
l16=si0;
si0=l9;
si1=-6U;
si0+=si1;
l7=si0;
si0=2U;
l9=si0;
L21:;
{
si0=l14;
si1=1U;
si0<<=(si1&31);
si1=l7;
si2=3U;
si1+=si2;
si1=i32_load8_u(&i->m0,(U64)si1);
si0+=si1;
si1=1U;
si0<<=(si1&31);
si1=l7;
si2=2U;
si1+=si2;
si1=i32_load8_u(&i->m0,(U64)si1);
si0+=si1;
si1=1U;
si0<<=(si1&31);
si1=l7;
si2=1U;
si1+=si2;
si1=i32_load8_u(&i->m0,(U64)si1);
si0+=si1;
si1=1U;
si0<<=(si1&31);
si1=l7;
si1=i32_load8_u(&i->m0,(U64)si1);
si0+=si1;
l14=si0;
si0=l7;
si1=-4U;
si0+=si1;
l7=si0;
si0=l9;
si1=4U;
si0<<=(si1&31);
l9=si0;
si0=l16;
si1=-4U;
si0+=si1;
l16=si0;
if(si0){
goto L21;
}
}
si0=l7;
si1=4U;
si0+=si1;
l7=si0;
L19:;
si0=l6;
si0=!(si0);
if(si0){
goto L5;
}
si0=l7;
si1=-1U;
si0+=si1;
l7=si0;
L22:;
{
si0=l9;
si1=1U;
si0<<=(si1&31);
l9=si0;
si0=l14;
si1=1U;
si0<<=(si1&31);
si1=l7;
si1=i32_load8_u(&i->m0,(U64)si1);
si0+=si1;
l14=si0;
si0=l7;
si1=-1U;
si0+=si1;
l7=si0;
si0=l6;
si1=-1U;
si0+=si1;
l6=si0;
if(si0){
goto L22;
}
goto L5;
}
L9:;
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l3;
i32_store(&i->m0,(U64)si0+4U,si1);
goto L1;
L8:;
si0=l8;
si1=104U;
si0+=si1;
si1=l1;
si2=l2;
si3=l9;
si4=l7;
si5=l4;
f11007(i,si0,si1,si2,si3,si4,si5);
goto L2;
L7:;
si0=3U;
l13=si0;
si0=1U;
l14=si0;
si0=l3;
si0=i32_load8_u(&i->m0,(U64)si0);
l15=si0;
l9=si0;
goto L4;
L6:;
si0=3U;
l13=si0;
si0=1U;
l9=si0;
si0=l3;
si0=i32_load8_u(&i->m0,(U64)si0);
l15=si0;
l14=si0;
L5:;
si0=l8;
si1=28U;
si0+=si1;
si1=l8;
si2=119U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l8;
si1=21U;
si0+=si1;
si1=l8;
si2=112U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l8;
si1=92U;
si0+=si1;
si1=l4;
i32_store(&i->m0,(U64)si0,si1);
si0=l8;
si1=l8;
sj1=i64_load(&i->m0,(U64)si1+104U);
i64_store(&i->m0,(U64)si0+13U,sj1);
si0=l8;
si1=l5;
i32_store(&i->m0,(U64)si0+88U,si1);
si0=l8;
si1=0U;
i32_store8(&i->m0,(U64)si0+84U,si1);
si0=l8;
si1=l2;
i32_store(&i->m0,(U64)si0+80U,si1);
si0=l8;
si1=l11;
i32_store(&i->m0,(U64)si0+76U,si1);
si0=l8;
si1=l3;
i32_store(&i->m0,(U64)si0+72U,si1);
si0=l8;
si1=l2;
i32_store(&i->m0,(U64)si0+68U,si1);
si0=l8;
si1=l1;
i32_store(&i->m0,(U64)si0+64U,si1);
si0=l8;
si1=l2;
i32_store(&i->m0,(U64)si0+60U,si1);
si0=l8;
si1=l1;
i32_store(&i->m0,(U64)si0+56U,si1);
si0=l8;
si1=l11;
i32_store(&i->m0,(U64)si0+48U,si1);
si0=l8;
si1=l3;
i32_store(&i->m0,(U64)si0+44U,si1);
si0=l8;
si1=0U;
i32_store(&i->m0,(U64)si0+40U,si1);
si0=l8;
si1=l9;
i32_store(&i->m0,(U64)si0+36U,si1);
si0=l8;
si1=l14;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l8;
si1=l15;
i32_store8(&i->m0,(U64)si0+12U,si1);
si0=l8;
si1=l13;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l8;
si1=l2;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l8;
si1=1U;
i32_store(&i->m0,(U64)si0,si1);
si0=l8;
si1=104U;
si0+=si1;
si1=l8;
f11261(i,si0,si1);
goto L3;
L4:;
si0=l8;
si1=28U;
si0+=si1;
si1=l8;
si2=119U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l8;
si1=21U;
si0+=si1;
si1=l8;
si2=112U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l8;
si1=100U;
si0+=si1;
si1=l4;
i32_store(&i->m0,(U64)si0,si1);
si0=l8;
si1=l8;
sj1=i64_load(&i->m0,(U64)si1+104U);
i64_store(&i->m0,(U64)si0+13U,sj1);
si0=l8;
si1=l6;
i32_store(&i->m0,(U64)si0+96U,si1);
si0=l8;
si1=0U;
i32_store(&i->m0,(U64)si0+92U,si1);
si0=l8;
si1=l12;
i32_store(&i->m0,(U64)si0+88U,si1);
si0=l8;
si1=0U;
i32_store8(&i->m0,(U64)si0+84U,si1);
si0=l8;
si1=l2;
i32_store(&i->m0,(U64)si0+80U,si1);
si0=l8;
si1=l11;
i32_store(&i->m0,(U64)si0+76U,si1);
si0=l8;
si1=l3;
i32_store(&i->m0,(U64)si0+72U,si1);
si0=l8;
si1=l2;
i32_store(&i->m0,(U64)si0+68U,si1);
si0=l8;
si1=l1;
i32_store(&i->m0,(U64)si0+64U,si1);
si0=l8;
si1=l2;
i32_store(&i->m0,(U64)si0+60U,si1);
si0=l8;
si1=l1;
i32_store(&i->m0,(U64)si0+56U,si1);
si0=l8;
si1=l11;
i32_store(&i->m0,(U64)si0+48U,si1);
si0=l8;
si1=l3;
i32_store(&i->m0,(U64)si0+44U,si1);
si0=l8;
si1=0U;
i32_store(&i->m0,(U64)si0+40U,si1);
si0=l8;
si1=l14;
i32_store(&i->m0,(U64)si0+36U,si1);
si0=l8;
si1=l9;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l8;
si1=l15;
i32_store8(&i->m0,(U64)si0+12U,si1);
si0=l8;
si1=l13;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l8;
si1=l2;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l8;
si1=1U;
i32_store(&i->m0,(U64)si0,si1);
si0=l8;
si1=104U;
si0+=si1;
si1=l8;
f11281(i,si0,si1);
L3:;
sj0=l10;
si0=(U32)(sj0);
si0=!(si0);
if(si0){
goto L2;
}
si0=l3;
f15271(i,si0);
L2:;
si0=l0;
si1=l8;
sj1=i64_load(&i->m0,(U64)si1+104U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=8U;
si0+=si1;
si1=l8;
si2=104U;
si1+=si2;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
L1:;
si0=l8;
si1=128U;
si0+=si1;
i->g0=si0;
L0:;
}

void f9905(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4,U32 l5) {
U32 l6=0;
U32 l7=0;
U32 l8=0;
U32 si0,si1,si2,si3,si4;
U64 sj1;
si0=i->g0;
si1=112U;
si0-=si1;
l6=si0;
i->g0=si0;
si0=l3;
si0=!(si0);
if(si0){
goto L6;
}
si0=l3;
si1=68U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
if(si0){
goto L5;
}
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=15U;
si0=f15269(i,si0);
l2=si0;
si0=!(si0);
if(si0){
goto L2;
}
si0=l2;
si1=7U;
si0+=si1;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+1835039U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+1835032U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si0=i32_load(&i->m0,(U64)si0+88U);
si1=508U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
si1=l4;
si1=i32_load(&i->m0,(U64)si1);
l1=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l6;
sj1=64424509455ULL;
i64_store(&i->m0,(U64)si0+20U,sj1);
si0=l6;
si1=l2;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l1;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 == si1;
if(si0){
goto L1;
}
si0=l5;
si1=l4;
si2=l6;
si3=16U;
si2+=si3;
si0=f7173(i,si0,si1,si2);
l5=si0;
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
goto L7;
}
si0=l3;
f7690(i,si0);
L7:;
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l5;
i32_store(&i->m0,(U64)si0+4U,si1);
goto L3;
L6:;
si0=l6;
si1=l1;
si2=l2;
si3=l4;
si4=l5;
f10968(i,si0,si1,si2,si3,si4);
goto L4;
L5:;
si0=l3;
si1=64U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l8=si0;
si0=l4;
si1=0U;
si0=(U32)((I32)si0<(I32)si1);
if(si0){
goto L9;
}
si0=l6;
si1=16U;
si0+=si1;
si1=l1;
si2=l2;
si3=l8;
si4=l7;
f760(i,si0,si1,si2,si3,si4);
si0=l6;
si1=l5;
i32_store(&i->m0,(U64)si0+104U,si1);
si0=l6;
si1=l2;
i32_store(&i->m0,(U64)si0+84U,si1);
si0=l6;
si1=0U;
i32_store(&i->m0,(U64)si0+80U,si1);
si0=l6;
si1=1U;
i32_store16(&i->m0,(U64)si0+88U,si1);
si0=l6;
si1=l4;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0+96U,si1);
si0=l6;
si1=l6;
si2=16U;
si1+=si2;
f11305(i,si0,si1);
goto L8;
L9:;
si0=l6;
si1=16U;
si0+=si1;
si1=l1;
si2=l2;
si3=l8;
si4=l7;
f760(i,si0,si1,si2,si3,si4);
si0=l6;
si1=l5;
i32_store(&i->m0,(U64)si0+96U,si1);
si0=l6;
si1=1U;
i32_store16(&i->m0,(U64)si0+88U,si1);
si0=l6;
si1=l2;
i32_store(&i->m0,(U64)si0+84U,si1);
si0=l6;
si1=0U;
i32_store(&i->m0,(U64)si0+80U,si1);
si0=l6;
si1=l6;
si2=16U;
si1+=si2;
f11302(i,si0,si1);
L8:;
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
goto L4;
}
si0=l3;
f7690(i,si0);
L4:;
si0=l0;
si1=l6;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=8U;
si0+=si1;
si1=l6;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
L3:;
si0=l6;
si1=112U;
si0+=si1;
i->g0=si0;
goto L0;
L2:;
si0=1U;
si1=15U;
f52(i,si0,si1);
UNREACHABLE;
L1:;
f15042(i);
UNREACHABLE;
L0:;
}

void f9906(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4,U32 l5,U32 l6,U32 l7) {
U32 l8=0;
U32 l9=0;
U64 l10=0;
U32 l11=0;
U32 l12=0;
U32 l13=0;
U32 l14=0;
U32 l15=0;
U32 l16=0;
U32 si0,si1,si2,si3,si4,si5;
U64 sj0,sj1;
si0=i->g0;
si1=128U;
si0-=si1;
l8=si0;
i->g0=si0;
si0=l8;
si1=l3;
si2=l4;
f9900(i,si0,si1,si2);
si0=l8;
si0=i32_load(&i->m0,(U64)si0+4U);
l3=si0;
si0=l8;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L9;
}
si0=l8;
si1=16U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l9=si0;
si0=l3;
si0=!(si0);
if(si0){
goto L8;
}
si0=l8;
si1=8U;
si0+=si1;
sj0=i64_load(&i->m0,(U64)si0);
l10=sj0;
sj1=32ULL;
sj0>>=(sj1&63);
si0=(U32)(sj0);
l11=si0;
si0=l9;
si1=0U;
si0=(U32)((I32)si0<(I32)si1);
if(si0){
goto L10;
}
si0=l9;
si1=1U;
si0+=si1;
l12=si0;
si0=2U;
l13=si0;
si0=1U;
l14=si0;
si0=l11;
l9=si0;
si0=l11;
switch(si0){
case 0:
goto L4;
case 1:
goto L7;
default:
goto L11;
}
L11:;
si0=l8;
si1=l3;
si2=l11;
f1407(i,si0,si1,si2);
si0=l8;
si1=112U;
si0+=si1;
si1=l8;
si2=13U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l8;
si1=119U;
si0+=si1;
si1=l8;
si2=20U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l8;
si1=l8;
sj1=i64_load(&i->m0,(U64)si1+5U);
i64_store(&i->m0,(U64)si0+104U,sj1);
si0=l8;
si0=i32_load8_u(&i->m0,(U64)si0+4U);
l15=si0;
si0=l8;
si0=i32_load(&i->m0,(U64)si0);
l13=si0;
si0=l3;
si1=l11;
si0+=si1;
l14=si0;
si1=-1U;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=1U;
si0<<=(si1&31);
si1=l14;
si2=-2U;
si1+=si2;
l7=si1;
si1=i32_load8_u(&i->m0,(U64)si1);
si0+=si1;
l9=si0;
si0=l7;
si1=l3;
si0=si0 != si1;
if(si0){
goto L12;
}
si0=2U;
l14=si0;
goto L4;
L12:;
si0=l11;
si1=-2U;
si0+=si1;
l16=si0;
si1=3U;
si0&=si1;
l5=si0;
si0=l11;
si1=-3U;
si0+=si1;
si1=3U;
si0=si0 >= si1;
if(si0){
goto L14;
}
si0=2U;
l14=si0;
goto L13;
L14:;
si0=l16;
si1=-4U;
si0&=si1;
l16=si0;
si0=l14;
si1=-6U;
si0+=si1;
l7=si0;
si0=2U;
l14=si0;
L15:;
{
si0=l9;
si1=1U;
si0<<=(si1&31);
si1=l7;
si2=3U;
si1+=si2;
si1=i32_load8_u(&i->m0,(U64)si1);
si0+=si1;
si1=1U;
si0<<=(si1&31);
si1=l7;
si2=2U;
si1+=si2;
si1=i32_load8_u(&i->m0,(U64)si1);
si0+=si1;
si1=1U;
si0<<=(si1&31);
si1=l7;
si2=1U;
si1+=si2;
si1=i32_load8_u(&i->m0,(U64)si1);
si0+=si1;
si1=1U;
si0<<=(si1&31);
si1=l7;
si1=i32_load8_u(&i->m0,(U64)si1);
si0+=si1;
l9=si0;
si0=l7;
si1=-4U;
si0+=si1;
l7=si0;
si0=l14;
si1=4U;
si0<<=(si1&31);
l14=si0;
si0=l16;
si1=-4U;
si0+=si1;
l16=si0;
if(si0){
goto L15;
}
}
si0=l7;
si1=4U;
si0+=si1;
l7=si0;
L13:;
si0=l5;
si0=!(si0);
if(si0){
goto L4;
}
si0=l7;
si1=-1U;
si0+=si1;
l7=si0;
L16:;
{
si0=l14;
si1=1U;
si0<<=(si1&31);
l14=si0;
si0=l9;
si1=1U;
si0<<=(si1&31);
si1=l7;
si1=i32_load8_u(&i->m0,(U64)si1);
si0+=si1;
l9=si0;
si0=l7;
si1=-1U;
si0+=si1;
l7=si0;
si0=l5;
si1=-1U;
si0+=si1;
l5=si0;
if(si0){
goto L16;
}
goto L4;
}
L10:;
si0=2U;
l13=si0;
si0=1U;
l9=si0;
si0=l11;
l14=si0;
si0=l11;
switch(si0){
case 0:
goto L5;
case 1:
goto L6;
default:
goto L17;
}
L17:;
si0=l8;
si1=l3;
si2=l11;
f1407(i,si0,si1,si2);
si0=l8;
si1=112U;
si0+=si1;
si1=l8;
si2=13U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l8;
si1=119U;
si0+=si1;
si1=l8;
si2=20U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l8;
si1=l8;
sj1=i64_load(&i->m0,(U64)si1+5U);
i64_store(&i->m0,(U64)si0+104U,sj1);
si0=l8;
si0=i32_load8_u(&i->m0,(U64)si0+4U);
l15=si0;
si0=l8;
si0=i32_load(&i->m0,(U64)si0);
l13=si0;
si0=l3;
si1=l11;
si0+=si1;
l9=si0;
si1=-1U;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=1U;
si0<<=(si1&31);
si1=l9;
si2=-2U;
si1+=si2;
l7=si1;
si1=i32_load8_u(&i->m0,(U64)si1);
si0+=si1;
l14=si0;
si0=l7;
si1=l3;
si0=si0 != si1;
if(si0){
goto L18;
}
si0=2U;
l9=si0;
goto L5;
L18:;
si0=l11;
si1=-2U;
si0+=si1;
l16=si0;
si1=3U;
si0&=si1;
l6=si0;
si0=l11;
si1=-3U;
si0+=si1;
si1=3U;
si0=si0 >= si1;
if(si0){
goto L20;
}
si0=2U;
l9=si0;
goto L19;
L20:;
si0=l16;
si1=-4U;
si0&=si1;
l16=si0;
si0=l9;
si1=-6U;
si0+=si1;
l7=si0;
si0=2U;
l9=si0;
L21:;
{
si0=l14;
si1=1U;
si0<<=(si1&31);
si1=l7;
si2=3U;
si1+=si2;
si1=i32_load8_u(&i->m0,(U64)si1);
si0+=si1;
si1=1U;
si0<<=(si1&31);
si1=l7;
si2=2U;
si1+=si2;
si1=i32_load8_u(&i->m0,(U64)si1);
si0+=si1;
si1=1U;
si0<<=(si1&31);
si1=l7;
si2=1U;
si1+=si2;
si1=i32_load8_u(&i->m0,(U64)si1);
si0+=si1;
si1=1U;
si0<<=(si1&31);
si1=l7;
si1=i32_load8_u(&i->m0,(U64)si1);
si0+=si1;
l14=si0;
si0=l7;
si1=-4U;
si0+=si1;
l7=si0;
si0=l9;
si1=4U;
si0<<=(si1&31);
l9=si0;
si0=l16;
si1=-4U;
si0+=si1;
l16=si0;
if(si0){
goto L21;
}
}
si0=l7;
si1=4U;
si0+=si1;
l7=si0;
L19:;
si0=l6;
si0=!(si0);
if(si0){
goto L5;
}
si0=l7;
si1=-1U;
si0+=si1;
l7=si0;
L22:;
{
si0=l9;
si1=1U;
si0<<=(si1&31);
l9=si0;
si0=l14;
si1=1U;
si0<<=(si1&31);
si1=l7;
si1=i32_load8_u(&i->m0,(U64)si1);
si0+=si1;
l14=si0;
si0=l7;
si1=-1U;
si0+=si1;
l7=si0;
si0=l6;
si1=-1U;
si0+=si1;
l6=si0;
if(si0){
goto L22;
}
goto L5;
}
L9:;
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l3;
i32_store(&i->m0,(U64)si0+4U,si1);
goto L1;
L8:;
si0=l8;
si1=104U;
si0+=si1;
si1=l1;
si2=l2;
si3=l9;
si4=l7;
si5=l4;
f11008(i,si0,si1,si2,si3,si4,si5);
goto L2;
L7:;
si0=3U;
l13=si0;
si0=1U;
l14=si0;
si0=l3;
si0=i32_load8_u(&i->m0,(U64)si0);
l15=si0;
l9=si0;
goto L4;
L6:;
si0=3U;
l13=si0;
si0=1U;
l9=si0;
si0=l3;
si0=i32_load8_u(&i->m0,(U64)si0);
l15=si0;
l14=si0;
L5:;
si0=l8;
si1=28U;
si0+=si1;
si1=l8;
si2=119U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l8;
si1=21U;
si0+=si1;
si1=l8;
si2=112U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l8;
si1=92U;
si0+=si1;
si1=l4;
i32_store(&i->m0,(U64)si0,si1);
si0=l8;
si1=l8;
sj1=i64_load(&i->m0,(U64)si1+104U);
i64_store(&i->m0,(U64)si0+13U,sj1);
si0=l8;
si1=l5;
i32_store(&i->m0,(U64)si0+88U,si1);
si0=l8;
si1=0U;
i32_store8(&i->m0,(U64)si0+84U,si1);
si0=l8;
si1=l2;
i32_store(&i->m0,(U64)si0+80U,si1);
si0=l8;
si1=l11;
i32_store(&i->m0,(U64)si0+76U,si1);
si0=l8;
si1=l3;
i32_store(&i->m0,(U64)si0+72U,si1);
si0=l8;
si1=l2;
i32_store(&i->m0,(U64)si0+68U,si1);
si0=l8;
si1=l1;
i32_store(&i->m0,(U64)si0+64U,si1);
si0=l8;
si1=l2;
i32_store(&i->m0,(U64)si0+60U,si1);
si0=l8;
si1=l1;
i32_store(&i->m0,(U64)si0+56U,si1);
si0=l8;
si1=l11;
i32_store(&i->m0,(U64)si0+48U,si1);
si0=l8;
si1=l3;
i32_store(&i->m0,(U64)si0+44U,si1);
si0=l8;
si1=0U;
i32_store(&i->m0,(U64)si0+40U,si1);
si0=l8;
si1=l9;
i32_store(&i->m0,(U64)si0+36U,si1);
si0=l8;
si1=l14;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l8;
si1=l15;
i32_store8(&i->m0,(U64)si0+12U,si1);
si0=l8;
si1=l13;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l8;
si1=l2;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l8;
si1=1U;
i32_store(&i->m0,(U64)si0,si1);
si0=l8;
si1=104U;
si0+=si1;
si1=l8;
f11340(i,si0,si1);
goto L3;
L4:;
si0=l8;
si1=28U;
si0+=si1;
si1=l8;
si2=119U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l8;
si1=21U;
si0+=si1;
si1=l8;
si2=112U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l8;
si1=100U;
si0+=si1;
si1=l4;
i32_store(&i->m0,(U64)si0,si1);
si0=l8;
si1=l8;
sj1=i64_load(&i->m0,(U64)si1+104U);
i64_store(&i->m0,(U64)si0+13U,sj1);
si0=l8;
si1=l6;
i32_store(&i->m0,(U64)si0+96U,si1);
si0=l8;
si1=0U;
i32_store(&i->m0,(U64)si0+92U,si1);
si0=l8;
si1=l12;
i32_store(&i->m0,(U64)si0+88U,si1);
si0=l8;
si1=0U;
i32_store8(&i->m0,(U64)si0+84U,si1);
si0=l8;
si1=l2;
i32_store(&i->m0,(U64)si0+80U,si1);
si0=l8;
si1=l11;
i32_store(&i->m0,(U64)si0+76U,si1);
si0=l8;
si1=l3;
i32_store(&i->m0,(U64)si0+72U,si1);
si0=l8;
si1=l2;
i32_store(&i->m0,(U64)si0+68U,si1);
si0=l8;
si1=l1;
i32_store(&i->m0,(U64)si0+64U,si1);
si0=l8;
si1=l2;
i32_store(&i->m0,(U64)si0+60U,si1);
si0=l8;
si1=l1;
i32_store(&i->m0,(U64)si0+56U,si1);
si0=l8;
si1=l11;
i32_store(&i->m0,(U64)si0+48U,si1);
si0=l8;
si1=l3;
i32_store(&i->m0,(U64)si0+44U,si1);
si0=l8;
si1=0U;
i32_store(&i->m0,(U64)si0+40U,si1);
si0=l8;
si1=l14;
i32_store(&i->m0,(U64)si0+36U,si1);
si0=l8;
si1=l9;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l8;
si1=l15;
i32_store8(&i->m0,(U64)si0+12U,si1);
si0=l8;
si1=l13;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l8;
si1=l2;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l8;
si1=1U;
i32_store(&i->m0,(U64)si0,si1);
si0=l8;
si1=104U;
si0+=si1;
si1=l8;
f11248(i,si0,si1);
L3:;
sj0=l10;
si0=(U32)(sj0);
si0=!(si0);
if(si0){
goto L2;
}
si0=l3;
f15271(i,si0);
L2:;
si0=l0;
si1=l8;
sj1=i64_load(&i->m0,(U64)si1+104U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=8U;
si0+=si1;
si1=l8;
si2=104U;
si1+=si2;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
L1:;
si0=l8;
si1=128U;
si0+=si1;
i->g0=si0;
L0:;
}

void f9907(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4,U32 l5,U32 l6,U32 l7) {
U32 l8=0;
U32 l9=0;
U64 l10=0;
U32 si0,si1,si2,si3,si4,si5;
U64 sj0,sj1;
si0=i->g0;
si1=176U;
si0-=si1;
l8=si0;
i->g0=si0;
si0=l8;
si1=l3;
si2=l4;
f9900(i,si0,si1,si2);
si0=l8;
si0=i32_load(&i->m0,(U64)si0+4U);
l3=si0;
si0=l8;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L4;
}
si0=l8;
si1=16U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l9=si0;
si0=l3;
si0=!(si0);
if(si0){
goto L3;
}
si0=l8;
si1=8U;
si0+=si1;
sj0=i64_load(&i->m0,(U64)si0);
l10=sj0;
sj1=32ULL;
sj0>>=(sj1&63);
si0=(U32)(sj0);
l7=si0;
si0=l9;
si1=0U;
si0=(U32)((I32)si0<(I32)si1);
if(si0){
goto L6;
}
si0=l8;
si1=120U;
si0+=si1;
si1=1U;
si2=l3;
si3=l7;
f1403(i,si0,si1,si2,si3);
si0=l8;
si1=40U;
si0+=si1;
si1=l8;
sj1=i64_load(&i->m0,(U64)si1+120U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l8;
si1=48U;
si0+=si1;
si1=l8;
si2=128U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l8;
si1=56U;
si0+=si1;
si1=l8;
si2=120U;
si1+=si2;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l8;
si1=64U;
si0+=si1;
si1=l8;
si2=120U;
si1+=si2;
si2=24U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l8;
si1=72U;
si0+=si1;
si1=l8;
si2=120U;
si1+=si2;
si2=32U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l8;
si1=80U;
si0+=si1;
si1=l8;
si2=120U;
si1+=si2;
si2=40U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l8;
si1=88U;
si0+=si1;
si1=l8;
si2=120U;
si1+=si2;
si2=48U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l8;
si1=116U;
si0+=si1;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l8;
si1=112U;
si0+=si1;
si1=l9;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l8;
si1=108U;
si0+=si1;
si1=0U;
i32_store8(&i->m0,(U64)si0,si1);
si0=l8;
si1=104U;
si0+=si1;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l8;
si1=96U;
si0+=si1;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l8;
si1=36U;
si0+=si1;
si1=l2;
i32_store(&i->m0,(U64)si0,si1);
si0=l8;
si1=32U;
si0+=si1;
si1=l1;
i32_store(&i->m0,(U64)si0,si1);
si0=l8;
si1=28U;
si0+=si1;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l8;
si1=20U;
si0+=si1;
si1=l7;
i32_store(&i->m0,(U64)si0,si1);
si0=l8;
si1=16U;
si0+=si1;
si1=l3;
i32_store(&i->m0,(U64)si0,si1);
si0=l8;
si1=12U;
si0+=si1;
si1=l2;
i32_store(&i->m0,(U64)si0,si1);
si0=l8;
si1=24U;
si0+=si1;
si1=l8;
si1=i32_load(&i->m0,(U64)si1+156U);
si2=0U;
si1=si1 != si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l8;
si1=l1;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l8;
si1=l4;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l8;
si1=l6;
i32_store(&i->m0,(U64)si0,si1);
si0=l8;
si1=120U;
si0+=si1;
si1=l8;
f11365(i,si0,si1);
goto L5;
L6:;
si0=l8;
si1=120U;
si0+=si1;
si1=1U;
si2=l3;
si3=l7;
f1403(i,si0,si1,si2,si3);
si0=l8;
si1=40U;
si0+=si1;
si1=l8;
sj1=i64_load(&i->m0,(U64)si1+120U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l8;
si1=48U;
si0+=si1;
si1=l8;
si2=128U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l8;
si1=56U;
si0+=si1;
si1=l8;
si2=120U;
si1+=si2;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l8;
si1=64U;
si0+=si1;
si1=l8;
si2=120U;
si1+=si2;
si2=24U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l8;
si1=72U;
si0+=si1;
si1=l8;
si2=120U;
si1+=si2;
si2=32U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l8;
si1=80U;
si0+=si1;
si1=l8;
si2=120U;
si1+=si2;
si2=40U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l8;
si1=88U;
si0+=si1;
si1=l8;
si2=120U;
si1+=si2;
si2=48U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l8;
si1=108U;
si0+=si1;
si1=0U;
i32_store8(&i->m0,(U64)si0,si1);
si0=l8;
si1=104U;
si0+=si1;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l8;
si1=96U;
si0+=si1;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l8;
si1=36U;
si0+=si1;
si1=l2;
i32_store(&i->m0,(U64)si0,si1);
si0=l8;
si1=32U;
si0+=si1;
si1=l1;
i32_store(&i->m0,(U64)si0,si1);
si0=l8;
si1=28U;
si0+=si1;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l8;
si1=20U;
si0+=si1;
si1=l7;
i32_store(&i->m0,(U64)si0,si1);
si0=l8;
si1=16U;
si0+=si1;
si1=l3;
i32_store(&i->m0,(U64)si0,si1);
si0=l8;
si1=12U;
si0+=si1;
si1=l2;
i32_store(&i->m0,(U64)si0,si1);
si0=l8;
si1=24U;
si0+=si1;
si1=l8;
si1=i32_load(&i->m0,(U64)si1+156U);
si2=0U;
si1=si1 != si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l8;
si1=l1;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l8;
si1=l4;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l8;
si1=l5;
i32_store(&i->m0,(U64)si0,si1);
si0=l8;
si1=120U;
si0+=si1;
si1=l8;
f11357(i,si0,si1);
L5:;
sj0=l10;
si0=(U32)(sj0);
si0=!(si0);
if(si0){
goto L2;
}
si0=l3;
f15271(i,si0);
goto L2;
L4:;
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l3;
i32_store(&i->m0,(U64)si0+4U,si1);
goto L1;
L3:;
si0=l8;
si1=120U;
si0+=si1;
si1=l1;
si2=l2;
si3=l9;
si4=l7;
si5=l4;
f11006(i,si0,si1,si2,si3,si4,si5);
L2:;
si0=l0;
si1=l8;
sj1=i64_load(&i->m0,(U64)si1+120U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=8U;
si0+=si1;
si1=l8;
si2=120U;
si1+=si2;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
L1:;
si0=l8;
si1=176U;
si0+=si1;
i->g0=si0;
L0:;
}

void f9908(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4,U32 l5) {
U32 l6=0;
U32 l7=0;
U32 l8=0;
U32 si0,si1,si2,si3,si4;
U64 sj1;
si0=i->g0;
si1=112U;
si0-=si1;
l6=si0;
i->g0=si0;
si0=l3;
si0=!(si0);
if(si0){
goto L6;
}
si0=l3;
si1=68U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
if(si0){
goto L5;
}
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=15U;
si0=f15269(i,si0);
l2=si0;
si0=!(si0);
if(si0){
goto L2;
}
si0=l2;
si1=7U;
si0+=si1;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+1835039U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+1835032U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si0=i32_load(&i->m0,(U64)si0+88U);
si1=508U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
si1=l4;
si1=i32_load(&i->m0,(U64)si1);
l1=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l6;
sj1=64424509455ULL;
i64_store(&i->m0,(U64)si0+20U,sj1);
si0=l6;
si1=l2;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l1;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 == si1;
if(si0){
goto L1;
}
si0=l5;
si1=l4;
si2=l6;
si3=16U;
si2+=si3;
si0=f7173(i,si0,si1,si2);
l5=si0;
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
goto L7;
}
si0=l3;
f7690(i,si0);
L7:;
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l5;
i32_store(&i->m0,(U64)si0+4U,si1);
goto L3;
L6:;
si0=l6;
si1=l1;
si2=l2;
si3=l4;
si4=l5;
f10969(i,si0,si1,si2,si3,si4);
goto L4;
L5:;
si0=l3;
si1=64U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l8=si0;
si0=l4;
si1=0U;
si0=(U32)((I32)si0<(I32)si1);
if(si0){
goto L9;
}
si0=l6;
si1=16U;
si0+=si1;
si1=l1;
si2=l2;
si3=l8;
si4=l7;
f760(i,si0,si1,si2,si3,si4);
si0=l6;
si1=l5;
i32_store(&i->m0,(U64)si0+104U,si1);
si0=l6;
si1=l2;
i32_store(&i->m0,(U64)si0+84U,si1);
si0=l6;
si1=0U;
i32_store(&i->m0,(U64)si0+80U,si1);
si0=l6;
si1=1U;
i32_store16(&i->m0,(U64)si0+88U,si1);
si0=l6;
si1=l4;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0+96U,si1);
si0=l6;
si1=l6;
si2=16U;
si1+=si2;
f11359(i,si0,si1);
goto L8;
L9:;
si0=l6;
si1=16U;
si0+=si1;
si1=l1;
si2=l2;
si3=l8;
si4=l7;
f760(i,si0,si1,si2,si3,si4);
si0=l6;
si1=l5;
i32_store(&i->m0,(U64)si0+96U,si1);
si0=l6;
si1=1U;
i32_store16(&i->m0,(U64)si0+88U,si1);
si0=l6;
si1=l2;
i32_store(&i->m0,(U64)si0+84U,si1);
si0=l6;
si1=0U;
i32_store(&i->m0,(U64)si0+80U,si1);
si0=l6;
si1=l6;
si2=16U;
si1+=si2;
f11250(i,si0,si1);
L8:;
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
goto L4;
}
si0=l3;
f7690(i,si0);
L4:;
si0=l0;
si1=l6;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=8U;
si0+=si1;
si1=l6;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
L3:;
si0=l6;
si1=112U;
si0+=si1;
i->g0=si0;
goto L0;
L2:;
si0=1U;
si1=15U;
f52(i,si0,si1);
UNREACHABLE;
L1:;
f15042(i);
UNREACHABLE;
L0:;
}

void f9909(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4,U32 l5,U32 l6,U32 l7) {
U32 l8=0;
U32 l9=0;
U64 l10=0;
U32 si0,si1,si2,si3,si4,si5;
U64 sj0,sj1;
si0=i->g0;
si1=176U;
si0-=si1;
l8=si0;
i->g0=si0;
si0=l8;
si1=l3;
si2=l4;
f9900(i,si0,si1,si2);
si0=l8;
si0=i32_load(&i->m0,(U64)si0+4U);
l3=si0;
si0=l8;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L4;
}
si0=l8;
si1=16U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l9=si0;
si0=l3;
si0=!(si0);
if(si0){
goto L3;
}
si0=l8;
si1=8U;
si0+=si1;
sj0=i64_load(&i->m0,(U64)si0);
l10=sj0;
sj1=32ULL;
sj0>>=(sj1&63);
si0=(U32)(sj0);
l7=si0;
si0=l9;
si1=0U;
si0=(U32)((I32)si0<(I32)si1);
if(si0){
goto L6;
}
si0=l8;
si1=120U;
si0+=si1;
si1=1U;
si2=l3;
si3=l7;
f1403(i,si0,si1,si2,si3);
si0=l8;
si1=40U;
si0+=si1;
si1=l8;
sj1=i64_load(&i->m0,(U64)si1+120U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l8;
si1=48U;
si0+=si1;
si1=l8;
si2=128U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l8;
si1=56U;
si0+=si1;
si1=l8;
si2=120U;
si1+=si2;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l8;
si1=64U;
si0+=si1;
si1=l8;
si2=120U;
si1+=si2;
si2=24U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l8;
si1=72U;
si0+=si1;
si1=l8;
si2=120U;
si1+=si2;
si2=32U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l8;
si1=80U;
si0+=si1;
si1=l8;
si2=120U;
si1+=si2;
si2=40U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l8;
si1=88U;
si0+=si1;
si1=l8;
si2=120U;
si1+=si2;
si2=48U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l8;
si1=116U;
si0+=si1;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l8;
si1=112U;
si0+=si1;
si1=l9;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l8;
si1=108U;
si0+=si1;
si1=0U;
i32_store8(&i->m0,(U64)si0,si1);
si0=l8;
si1=104U;
si0+=si1;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l8;
si1=96U;
si0+=si1;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l8;
si1=36U;
si0+=si1;
si1=l2;
i32_store(&i->m0,(U64)si0,si1);
si0=l8;
si1=32U;
si0+=si1;
si1=l1;
i32_store(&i->m0,(U64)si0,si1);
si0=l8;
si1=28U;
si0+=si1;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l8;
si1=20U;
si0+=si1;
si1=l7;
i32_store(&i->m0,(U64)si0,si1);
si0=l8;
si1=16U;
si0+=si1;
si1=l3;
i32_store(&i->m0,(U64)si0,si1);
si0=l8;
si1=12U;
si0+=si1;
si1=l2;
i32_store(&i->m0,(U64)si0,si1);
si0=l8;
si1=24U;
si0+=si1;
si1=l8;
si1=i32_load(&i->m0,(U64)si1+156U);
si2=0U;
si1=si1 != si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l8;
si1=l1;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l8;
si1=l4;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l8;
si1=l6;
i32_store(&i->m0,(U64)si0,si1);
si0=l8;
si1=120U;
si0+=si1;
si1=l8;
f11324(i,si0,si1);
goto L5;
L6:;
si0=l8;
si1=120U;
si0+=si1;
si1=1U;
si2=l3;
si3=l7;
f1403(i,si0,si1,si2,si3);
si0=l8;
si1=40U;
si0+=si1;
si1=l8;
sj1=i64_load(&i->m0,(U64)si1+120U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l8;
si1=48U;
si0+=si1;
si1=l8;
si2=128U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l8;
si1=56U;
si0+=si1;
si1=l8;
si2=120U;
si1+=si2;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l8;
si1=64U;
si0+=si1;
si1=l8;
si2=120U;
si1+=si2;
si2=24U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l8;
si1=72U;
si0+=si1;
si1=l8;
si2=120U;
si1+=si2;
si2=32U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l8;
si1=80U;
si0+=si1;
si1=l8;
si2=120U;
si1+=si2;
si2=40U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l8;
si1=88U;
si0+=si1;
si1=l8;
si2=120U;
si1+=si2;
si2=48U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l8;
si1=108U;
si0+=si1;
si1=0U;
i32_store8(&i->m0,(U64)si0,si1);
si0=l8;
si1=104U;
si0+=si1;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l8;
si1=96U;
si0+=si1;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l8;
si1=36U;
si0+=si1;
si1=l2;
i32_store(&i->m0,(U64)si0,si1);
si0=l8;
si1=32U;
si0+=si1;
si1=l1;
i32_store(&i->m0,(U64)si0,si1);
si0=l8;
si1=28U;
si0+=si1;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l8;
si1=20U;
si0+=si1;
si1=l7;
i32_store(&i->m0,(U64)si0,si1);
si0=l8;
si1=16U;
si0+=si1;
si1=l3;
i32_store(&i->m0,(U64)si0,si1);
si0=l8;
si1=12U;
si0+=si1;
si1=l2;
i32_store(&i->m0,(U64)si0,si1);
si0=l8;
si1=24U;
si0+=si1;
si1=l8;
si1=i32_load(&i->m0,(U64)si1+156U);
si2=0U;
si1=si1 != si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l8;
si1=l1;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l8;
si1=l4;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l8;
si1=l5;
i32_store(&i->m0,(U64)si0,si1);
si0=l8;
si1=120U;
si0+=si1;
si1=l8;
f11348(i,si0,si1);
L5:;
sj0=l10;
si0=(U32)(sj0);
si0=!(si0);
if(si0){
goto L2;
}
si0=l3;
f15271(i,si0);
goto L2;
L4:;
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l3;
i32_store(&i->m0,(U64)si0+4U,si1);
goto L1;
L3:;
si0=l8;
si1=120U;
si0+=si1;
si1=l1;
si2=l2;
si3=l9;
si4=l7;
si5=l4;
f11005(i,si0,si1,si2,si3,si4,si5);
L2:;
si0=l0;
si1=l8;
sj1=i64_load(&i->m0,(U64)si1+120U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=8U;
si0+=si1;
si1=l8;
si2=120U;
si1+=si2;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
L1:;
si0=l8;
si1=176U;
si0+=si1;
i->g0=si0;
L0:;
}

void f9910(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4,U32 l5) {
U32 l6=0;
U32 l7=0;
U32 l8=0;
U32 si0,si1,si2,si3,si4;
U64 sj1;
si0=i->g0;
si1=192U;
si0-=si1;
l6=si0;
i->g0=si0;
si0=l3;
si0=!(si0);
if(si0){
goto L6;
}
si0=l3;
si1=68U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
if(si0){
goto L5;
}
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=15U;
si0=f15269(i,si0);
l2=si0;
si0=!(si0);
if(si0){
goto L2;
}
si0=l2;
si1=7U;
si0+=si1;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+1835039U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+1835032U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si0=i32_load(&i->m0,(U64)si0+88U);
si1=508U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si1=l1;
si1=i32_load(&i->m0,(U64)si1);
l4=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l6;
sj1=64424509455ULL;
i64_store(&i->m0,(U64)si0+20U,sj1);
si0=l6;
si1=l2;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l4;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 == si1;
if(si0){
goto L1;
}
si0=l5;
si1=l1;
si2=l6;
si3=16U;
si2+=si3;
si0=f7173(i,si0,si1,si2);
l5=si0;
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
goto L7;
}
si0=l3;
f7690(i,si0);
L7:;
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l5;
i32_store(&i->m0,(U64)si0+4U,si1);
goto L3;
L6:;
si0=l6;
si1=l1;
si2=l2;
si3=l4;
si4=l5;
f11004(i,si0,si1,si2,si3,si4);
goto L4;
L5:;
si0=l3;
si1=64U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l8=si0;
si0=l4;
si1=0U;
si0=(U32)((I32)si0<(I32)si1);
if(si0){
goto L9;
}
si0=l6;
si1=136U;
si0+=si1;
si1=1U;
si2=l8;
si3=l7;
f1403(i,si0,si1,si2,si3);
si0=l6;
si1=16U;
si0+=si1;
si1=40U;
si0+=si1;
si1=l6;
si2=144U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l6;
si1=16U;
si0+=si1;
si1=48U;
si0+=si1;
si1=l6;
si2=152U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l6;
si1=72U;
si0+=si1;
si1=l6;
si2=160U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l6;
si1=80U;
si0+=si1;
si1=l6;
si2=168U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l6;
si1=88U;
si0+=si1;
si1=l6;
si2=136U;
si1+=si2;
si2=40U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l6;
si1=96U;
si0+=si1;
si1=l6;
si2=136U;
si1+=si2;
si2=48U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l6;
si1=l6;
sj1=i64_load(&i->m0,(U64)si1+136U);
i64_store(&i->m0,(U64)si0+48U,sj1);
si0=l6;
si1=l5;
i32_store(&i->m0,(U64)si0+128U,si1);
si0=l6;
si1=0U;
i32_store(&i->m0,(U64)si0+124U,si1);
si0=l6;
si1=l4;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0+120U,si1);
si0=l6;
si1=0U;
i32_store8(&i->m0,(U64)si0+116U,si1);
si0=l6;
si1=0U;
i32_store(&i->m0,(U64)si0+112U,si1);
si0=l6;
si1=0U;
i32_store(&i->m0,(U64)si0+104U,si1);
si0=l6;
si1=l2;
i32_store(&i->m0,(U64)si0+44U,si1);
si0=l6;
si1=l1;
i32_store(&i->m0,(U64)si0+40U,si1);
si0=l6;
si1=0U;
i32_store(&i->m0,(U64)si0+36U,si1);
si0=l6;
si1=l7;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l6;
si1=l8;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l6;
si1=l2;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l6;
si1=l1;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l6;
si1=l6;
si1=i32_load(&i->m0,(U64)si1+172U);
si2=0U;
si1=si1 != si2;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l6;
si1=l6;
si2=16U;
si1+=si2;
f11294(i,si0,si1);
goto L8;
L9:;
si0=l6;
si1=136U;
si0+=si1;
si1=1U;
si2=l8;
si3=l7;
f1403(i,si0,si1,si2,si3);
si0=l6;
si1=16U;
si0+=si1;
si1=40U;
si0+=si1;
si1=l6;
si2=144U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l6;
si1=16U;
si0+=si1;
si1=48U;
si0+=si1;
si1=l6;
si2=152U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l6;
si1=72U;
si0+=si1;
si1=l6;
si2=160U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l6;
si1=80U;
si0+=si1;
si1=l6;
si2=168U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l6;
si1=88U;
si0+=si1;
si1=l6;
si2=136U;
si1+=si2;
si2=40U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l6;
si1=96U;
si0+=si1;
si1=l6;
si2=136U;
si1+=si2;
si2=48U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l6;
si1=l6;
sj1=i64_load(&i->m0,(U64)si1+136U);
i64_store(&i->m0,(U64)si0+48U,sj1);
si0=l6;
si1=l5;
i32_store(&i->m0,(U64)si0+120U,si1);
si0=l6;
si1=0U;
i32_store8(&i->m0,(U64)si0+116U,si1);
si0=l6;
si1=0U;
i32_store(&i->m0,(U64)si0+112U,si1);
si0=l6;
si1=0U;
i32_store(&i->m0,(U64)si0+104U,si1);
si0=l6;
si1=l2;
i32_store(&i->m0,(U64)si0+44U,si1);
si0=l6;
si1=l1;
i32_store(&i->m0,(U64)si0+40U,si1);
si0=l6;
si1=0U;
i32_store(&i->m0,(U64)si0+36U,si1);
si0=l6;
si1=l7;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l6;
si1=l8;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l6;
si1=l2;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l6;
si1=l1;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l6;
si1=l6;
si1=i32_load(&i->m0,(U64)si1+172U);
si2=0U;
si1=si1 != si2;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l6;
si1=l6;
si2=16U;
si1+=si2;
f11366(i,si0,si1);
L8:;
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
goto L4;
}
si0=l3;
f7690(i,si0);
L4:;
si0=l0;
si1=l6;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=8U;
si0+=si1;
si1=l6;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
L3:;
si0=l6;
si1=192U;
si0+=si1;
i->g0=si0;
goto L0;
L2:;
si0=1U;
si1=15U;
f52(i,si0,si1);
UNREACHABLE;
L1:;
f15042(i);
UNREACHABLE;
L0:;
}

void f9911(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4,U32 l5) {
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
si0=1U;
l7=si0;
si0=l3;
si1=l5;
si0-=si1;
l8=si0;
si1=l2;
si0+=si1;
l9=si0;
si0=!(si0);
if(si0){
goto L3;
}
si0=l9;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L2;
}
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=l9;
si0=f15269(i,si0);
l7=si0;
si0=!(si0);
if(si0){
goto L1;
}
L3:;
si0=0U;
l5=si0;
si0=l6;
si1=0U;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l6;
si1=l7;
i32_store(&i->m0,(U64)si0,si1);
si0=l6;
si1=l9;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l9;
si1=l8;
si2=1U;
si1>>=(si2&31);
si2=l3;
si3=l8;
si2&=si3;
si3=1U;
si2&=si3;
si1+=si2;
l3=si1;
si0=si0 >= si1;
if(si0){
goto L6;
}
si0=l6;
si1=0U;
si2=l3;
f7248(i,si0,si1,si2);
si0=l6;
si0=i32_load(&i->m0,(U64)si0+4U);
l9=si0;
si0=l6;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
si0=l6;
si0=i32_load(&i->m0,(U64)si0+8U);
l5=si0;
goto L5;
L6:;
si0=l3;
si0=!(si0);
if(si0){
goto L4;
}
L5:;
si0=l7;
si1=l5;
si0+=si1;
si1=l4;
si2=l3;
si0=f15392(i,si0,si1,si2);
si0=l5;
si1=l3;
si0+=si1;
l5=si0;
L4:;
si0=l8;
si1=l3;
si0-=si1;
l10=si0;
si0=l6;
si1=l5;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l9;
si1=l5;
si0-=si1;
si1=l2;
si0=si0 >= si1;
if(si0){
goto L7;
}
si0=l6;
si1=l5;
si2=l2;
f7248(i,si0,si1,si2);
si0=l6;
si0=i32_load(&i->m0,(U64)si0+4U);
l9=si0;
si0=l6;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
si0=l6;
si0=i32_load(&i->m0,(U64)si0+8U);
l5=si0;
L7:;
si0=l7;
si1=l5;
si0+=si1;
si1=l1;
si2=l2;
si0=f15390(i,si0,si1,si2);
si0=l6;
si1=l5;
si2=l2;
si1+=si2;
l5=si1;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l9;
si1=l5;
si0-=si1;
si1=l10;
si0=si0 >= si1;
if(si0){
goto L10;
}
si0=l6;
si1=l5;
si2=l10;
f7248(i,si0,si1,si2);
si0=l6;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
si0=l6;
si0=i32_load(&i->m0,(U64)si0+8U);
l5=si0;
goto L9;
L10:;
si0=l8;
si1=l3;
si0=si0 == si1;
if(si0){
goto L8;
}
L9:;
si0=l7;
si1=l5;
si0+=si1;
si1=l4;
si2=l10;
si0=f15392(i,si0,si1,si2);
si0=l5;
si1=l10;
si0+=si1;
l5=si0;
L8:;
si0=l0;
si1=l6;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=8U;
si0+=si1;
si1=l5;
i32_store(&i->m0,(U64)si0,si1);
si0=l6;
si1=16U;
si0+=si1;
i->g0=si0;
goto L0;
L2:;
f53(i);
UNREACHABLE;
L1:;
si0=1U;
si1=l9;
f52(i,si0,si1);
UNREACHABLE;
L0:;
}

void f9912(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4,U32 l5) {
U32 l6=0;
U32 l7=0;
U32 l8=0;
U32 si0,si1,si2,si3,si4;
U64 sj1;
si0=i->g0;
si1=16U;
si0-=si1;
l6=si0;
i->g0=si0;
si0=l3;
si1=l5;
si0-=si1;
l5=si0;
si0=1U;
l7=si0;
si0=l4;
si1=128U;
si0=si0 < si1;
if(si0){
goto L1;
}
si0=2U;
l7=si0;
si0=l4;
si1=2048U;
si0=si0 < si1;
if(si0){
goto L1;
}
si0=3U;
si1=4U;
si2=l4;
si3=65536U;
si2=si2 < si3;
si0=si2?si0:si1;
l7=si0;
L1:;
si0=1U;
l8=si0;
si0=l7;
si1=l5;
si0*=si1;
si1=l2;
si0+=si1;
l7=si0;
si0=!(si0);
if(si0){
goto L4;
}
si0=l7;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L3;
}
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=l7;
si0=f15269(i,si0);
l8=si0;
si0=!(si0);
if(si0){
goto L2;
}
L4:;
si0=l6;
si1=0U;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l6;
si1=l7;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l6;
si1=l8;
i32_store(&i->m0,(U64)si0,si1);
si0=l6;
si1=l4;
si2=l5;
si3=1U;
si2>>=(si3&31);
si3=l3;
si4=l5;
si3&=si4;
si4=1U;
si3&=si4;
si2+=si3;
l3=si2;
f11746(i,si0,si1,si2);
si0=l6;
si0=i32_load(&i->m0,(U64)si0+4U);
si1=l6;
si1=i32_load(&i->m0,(U64)si1+8U);
l7=si1;
si0-=si1;
si1=l2;
si0=si0 >= si1;
if(si0){
goto L5;
}
si0=l6;
si1=l7;
si2=l2;
f7248(i,si0,si1,si2);
si0=l6;
si0=i32_load(&i->m0,(U64)si0+8U);
l7=si0;
L5:;
si0=l6;
si0=i32_load(&i->m0,(U64)si0);
si1=l7;
si0+=si1;
si1=l1;
si2=l2;
si0=f15390(i,si0,si1,si2);
si0=l6;
si1=8U;
si0+=si1;
l8=si0;
si1=l7;
si2=l2;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l6;
si1=l4;
si2=l5;
si3=l3;
si2-=si3;
f11746(i,si0,si1,si2);
si0=l0;
si1=8U;
si0+=si1;
si1=l8;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l6;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l6;
si1=16U;
si0+=si1;
i->g0=si0;
goto L0;
L3:;
f53(i);
UNREACHABLE;
L2:;
si0=1U;
si1=l7;
f52(i,si0,si1);
UNREACHABLE;
L0:;
}

void f9913(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4,U32 l5) {
U32 l6=0;
U32 l7=0;
U32 l8=0;
U32 l9=0;
U32 l10=0;
U32 si0,si1,si2;
U64 sj1;
si0=i->g0;
si1=16U;
si0-=si1;
l6=si0;
i->g0=si0;
si0=l3;
si1=l5;
si0-=si1;
l7=si0;
si1=l2;
si0+=si1;
l8=si0;
if(si0){
goto L4;
}
si0=1U;
l9=si0;
goto L3;
L4:;
si0=l8;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L2;
}
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=l8;
si0=f15269(i,si0);
l9=si0;
si0=!(si0);
if(si0){
goto L1;
}
L3:;
si0=0U;
l10=si0;
si0=l6;
si1=0U;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l6;
si1=l9;
i32_store(&i->m0,(U64)si0,si1);
si0=l6;
si1=l8;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l8;
si1=l2;
si0=si0 >= si1;
if(si0){
goto L5;
}
si0=l6;
si1=0U;
si2=l2;
f7248(i,si0,si1,si2);
si0=l6;
si0=i32_load(&i->m0,(U64)si0+4U);
l8=si0;
si0=l6;
si0=i32_load(&i->m0,(U64)si0);
l9=si0;
si0=l6;
si0=i32_load(&i->m0,(U64)si0+8U);
l10=si0;
L5:;
si0=l9;
si1=l10;
si0+=si1;
si1=l1;
si2=l2;
si0=f15390(i,si0,si1,si2);
si0=l6;
si1=l10;
si2=l2;
si1+=si2;
l2=si1;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l8;
si1=l2;
si0-=si1;
si1=l7;
si0=si0 >= si1;
if(si0){
goto L8;
}
si0=l6;
si1=l2;
si2=l7;
f7248(i,si0,si1,si2);
si0=l6;
si0=i32_load(&i->m0,(U64)si0);
l9=si0;
si0=l6;
si0=i32_load(&i->m0,(U64)si0+8U);
l2=si0;
goto L7;
L8:;
si0=l3;
si1=l5;
si0=si0 == si1;
if(si0){
goto L6;
}
L7:;
si0=l9;
si1=l2;
si0+=si1;
si1=l4;
si2=l7;
si0=f15392(i,si0,si1,si2);
si0=l2;
si1=l7;
si0+=si1;
l2=si0;
L6:;
si0=l0;
si1=l6;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=8U;
si0+=si1;
si1=l2;
i32_store(&i->m0,(U64)si0,si1);
si0=l6;
si1=16U;
si0+=si1;
i->g0=si0;
goto L0;
L2:;
f53(i);
UNREACHABLE;
L1:;
si0=1U;
si1=l8;
f52(i,si0,si1);
UNREACHABLE;
L0:;
}

void f9914(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4,U32 l5) {
U32 l6=0;
U32 l7=0;
U32 si0,si1,si2,si3;
U64 sj1;
si0=i->g0;
si1=16U;
si0-=si1;
l6=si0;
i->g0=si0;
si0=l3;
si1=l5;
si0-=si1;
l3=si0;
si0=1U;
l7=si0;
si0=1U;
l5=si0;
si0=l4;
si1=128U;
si0=si0 < si1;
if(si0){
goto L1;
}
si0=2U;
l5=si0;
si0=l4;
si1=2048U;
si0=si0 < si1;
if(si0){
goto L1;
}
si0=3U;
si1=4U;
si2=l4;
si3=65536U;
si2=si2 < si3;
si0=si2?si0:si1;
l5=si0;
L1:;
si0=l5;
si1=l3;
si0*=si1;
si1=l2;
si0+=si1;
l5=si0;
si0=!(si0);
if(si0){
goto L4;
}
si0=l5;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L3;
}
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=l5;
si0=f15269(i,si0);
l7=si0;
si0=!(si0);
if(si0){
goto L2;
}
L4:;
si0=l6;
si1=0U;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l6;
si1=l5;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l6;
si1=l7;
i32_store(&i->m0,(U64)si0,si1);
si0=l6;
si1=l4;
si2=0U;
f11746(i,si0,si1,si2);
si0=l6;
si0=i32_load(&i->m0,(U64)si0+4U);
si1=l6;
si1=i32_load(&i->m0,(U64)si1+8U);
l5=si1;
si0-=si1;
si1=l2;
si0=si0 >= si1;
if(si0){
goto L5;
}
si0=l6;
si1=l5;
si2=l2;
f7248(i,si0,si1,si2);
si0=l6;
si0=i32_load(&i->m0,(U64)si0+8U);
l5=si0;
L5:;
si0=l6;
si0=i32_load(&i->m0,(U64)si0);
si1=l5;
si0+=si1;
si1=l1;
si2=l2;
si0=f15390(i,si0,si1,si2);
si0=l6;
si1=8U;
si0+=si1;
l7=si0;
si1=l5;
si2=l2;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l6;
si1=l4;
si2=l3;
f11746(i,si0,si1,si2);
si0=l0;
si1=8U;
si0+=si1;
si1=l7;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l6;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l6;
si1=16U;
si0+=si1;
i->g0=si0;
goto L0;
L3:;
f53(i);
UNREACHABLE;
L2:;
si0=1U;
si1=l5;
f52(i,si0,si1);
UNREACHABLE;
L0:;
}

void f9915(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4,U32 l5) {
U32 l6=0;
U32 l7=0;
U32 l8=0;
U32 l9=0;
U32 l10=0;
U32 si0,si1,si2;
U64 sj1;
si0=i->g0;
si1=16U;
si0-=si1;
l6=si0;
i->g0=si0;
si0=l3;
si1=l5;
si0-=si1;
l7=si0;
si1=l2;
si0+=si1;
l8=si0;
if(si0){
goto L4;
}
si0=1U;
l9=si0;
goto L3;
L4:;
si0=l8;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L2;
}
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=l8;
si0=f15269(i,si0);
l9=si0;
si0=!(si0);
if(si0){
goto L1;
}
L3:;
si0=0U;
l10=si0;
si0=l6;
si1=0U;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l6;
si1=l9;
i32_store(&i->m0,(U64)si0,si1);
si0=l6;
si1=l8;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l8;
si1=l7;
si0=si0 >= si1;
if(si0){
goto L7;
}
si0=l6;
si1=0U;
si2=l7;
f7248(i,si0,si1,si2);
si0=l6;
si0=i32_load(&i->m0,(U64)si0+4U);
l8=si0;
si0=l6;
si0=i32_load(&i->m0,(U64)si0);
l9=si0;
si0=l6;
si0=i32_load(&i->m0,(U64)si0+8U);
l10=si0;
goto L6;
L7:;
si0=l3;
si1=l5;
si0=si0 == si1;
if(si0){
goto L5;
}
L6:;
si0=l9;
si1=l10;
si0+=si1;
si1=l4;
si2=l7;
si0=f15392(i,si0,si1,si2);
si0=l10;
si1=l7;
si0+=si1;
l10=si0;
L5:;
si0=l6;
si1=l10;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l8;
si1=l10;
si0-=si1;
si1=l2;
si0=si0 >= si1;
if(si0){
goto L8;
}
si0=l6;
si1=l10;
si2=l2;
f7248(i,si0,si1,si2);
si0=l6;
si0=i32_load(&i->m0,(U64)si0);
l9=si0;
si0=l6;
si0=i32_load(&i->m0,(U64)si0+8U);
l10=si0;
L8:;
si0=l9;
si1=l10;
si0+=si1;
si1=l1;
si2=l2;
si0=f15390(i,si0,si1,si2);
si0=l0;
si1=8U;
si0+=si1;
si1=l10;
si2=l2;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l6;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l6;
si1=16U;
si0+=si1;
i->g0=si0;
goto L0;
L2:;
f53(i);
UNREACHABLE;
L1:;
si0=1U;
si1=l8;
f52(i,si0,si1);
UNREACHABLE;
L0:;
}

void f9916(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4,U32 l5) {
U32 l6=0;
U32 l7=0;
U32 si0,si1,si2,si3;
U64 sj1;
si0=i->g0;
si1=16U;
si0-=si1;
l6=si0;
i->g0=si0;
si0=l3;
si1=l5;
si0-=si1;
l3=si0;
si0=1U;
l7=si0;
si0=1U;
l5=si0;
si0=l4;
si1=128U;
si0=si0 < si1;
if(si0){
goto L1;
}
si0=2U;
l5=si0;
si0=l4;
si1=2048U;
si0=si0 < si1;
if(si0){
goto L1;
}
si0=3U;
si1=4U;
si2=l4;
si3=65536U;
si2=si2 < si3;
si0=si2?si0:si1;
l5=si0;
L1:;
si0=l5;
si1=l3;
si0*=si1;
si1=l2;
si0+=si1;
l5=si0;
si0=!(si0);
if(si0){
goto L4;
}
si0=l5;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L3;
}
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=l5;
si0=f15269(i,si0);
l7=si0;
si0=!(si0);
if(si0){
goto L2;
}
L4:;
si0=l6;
si1=0U;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l6;
si1=l5;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l6;
si1=l7;
i32_store(&i->m0,(U64)si0,si1);
si0=l6;
si1=l4;
si2=l3;
f11746(i,si0,si1,si2);
si0=l6;
si0=i32_load(&i->m0,(U64)si0+4U);
si1=l6;
si1=i32_load(&i->m0,(U64)si1+8U);
l5=si1;
si0-=si1;
si1=l2;
si0=si0 >= si1;
if(si0){
goto L5;
}
si0=l6;
si1=l5;
si2=l2;
f7248(i,si0,si1,si2);
si0=l6;
si0=i32_load(&i->m0,(U64)si0+8U);
l5=si0;
L5:;
si0=l6;
si0=i32_load(&i->m0,(U64)si0);
si1=l5;
si0+=si1;
si1=l1;
si2=l2;
si0=f15390(i,si0,si1,si2);
si0=l6;
si1=8U;
si0+=si1;
l3=si0;
si1=l5;
si2=l2;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l6;
si1=l4;
si2=0U;
f11746(i,si0,si1,si2);
si0=l0;
si1=8U;
si0+=si1;
si1=l3;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l6;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l6;
si1=16U;
si0+=si1;
i->g0=si0;
goto L0;
L3:;
f53(i);
UNREACHABLE;
L2:;
si0=1U;
si1=l5;
f52(i,si0,si1);
UNREACHABLE;
L0:;
}

void f9917(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 l8=0;
U32 l9=0;
U32 si0,si1,si2;
U64 sj1;
si0=i->g0;
si1=48U;
si0-=si1;
l4=si0;
i->g0=si0;
si0=l4;
si1=32U;
si0+=si1;
si1=l3;
f14844(i,si0,si1);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+32U);
si0=!(si0);
if(si0){
goto L7;
}
si0=l4;
si1=40U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+36U);
l6=si0;
si0=!(si0);
if(si0){
goto L4;
}
si0=l4;
si1=44U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
if(si0){
goto L9;
}
si0=1U;
l8=si0;
goto L8;
L9:;
si0=l7;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L6;
}
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=l7;
si0=f15269(i,si0);
l8=si0;
si0=!(si0);
if(si0){
goto L5;
}
L8:;
si0=l8;
si1=l6;
si2=l7;
si0=f15390(i,si0,si1,si2);
l9=si0;
si0=l4;
si1=l7;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l4;
si1=l7;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l4;
si1=l9;
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si0=!(si0);
if(si0){
goto L10;
}
si0=l6;
f15271(i,si0);
L10:;
si0=l4;
si1=16U;
si0+=si1;
si1=8U;
si0+=si1;
si1=l3;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=l3;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+16U,sj1);
si0=l4;
si1=32U;
si0+=si1;
si1=l4;
si2=16U;
si1+=si2;
f14844(i,si0,si1);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+32U);
si0=!(si0);
if(si0){
goto L2;
}
L12:;
{
si0=l4;
si0=i32_load(&i->m0,(U64)si0+40U);
l5=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+36U);
l6=si0;
si0=!(si0);
if(si0){
goto L11;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0+44U);
l3=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+4U);
l9=si0;
si1=l7;
si0-=si1;
si1=l2;
si0=si0 >= si1;
if(si0){
goto L13;
}
si0=l4;
si1=l7;
si2=l2;
f7248(i,si0,si1,si2);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+4U);
l9=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
l8=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+8U);
l7=si0;
L13:;
si0=l8;
si1=l7;
si0+=si1;
si1=l1;
si2=l2;
si0=f15390(i,si0,si1,si2);
si0=l4;
si1=l7;
si2=l2;
si1+=si2;
l7=si1;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l9;
si1=l7;
si0-=si1;
si1=l3;
si0=si0 >= si1;
if(si0){
goto L14;
}
si0=l4;
si1=l7;
si2=l3;
f7248(i,si0,si1,si2);
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
l8=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+8U);
l7=si0;
L14:;
si0=l8;
si1=l7;
si0+=si1;
si1=l6;
si2=l3;
si0=f15390(i,si0,si1,si2);
si0=l4;
si1=l7;
si2=l3;
si1+=si2;
l7=si1;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l5;
si0=!(si0);
if(si0){
goto L15;
}
si0=l6;
f15271(i,si0);
L15:;
si0=l4;
si1=32U;
si0+=si1;
si1=l4;
si2=16U;
si1+=si2;
f14844(i,si0,si1);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+32U);
si0=!(si0);
if(si0){
goto L2;
}
goto L12;
}
L11:;
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l5;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+28U);
l7=si0;
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
goto L16;
}
si0=l7;
f7690(i,si0);
L16:;
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
L7:;
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l0;
sj1=1ULL;
i64_store(&i->m0,(U64)si0,sj1);
goto L3;
L6:;
f53(i);
UNREACHABLE;
L5:;
si0=1U;
si1=l7;
f52(i,si0,si1);
UNREACHABLE;
L4:;
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l5;
i32_store(&i->m0,(U64)si0+4U,si1);
L3:;
si0=l3;
si1=12U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
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
goto L1;
}
si0=l7;
f7690(i,si0);
goto L1;
L2:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+28U);
l7=si0;
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
goto L17;
}
si0=l7;
f7690(i,si0);
L17:;
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
si1=48U;
si0+=si1;
i->g0=si0;
L0:;
}

void f9918(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 l8=0;
U32 l9=0;
U32 l10=0;
U32 si0,si1,si2;
U64 sj1;
si0=i->g0;
si1=64U;
si0-=si1;
l4=si0;
i->g0=si0;
si0=l3;
si1=16U;
si0+=si1;
l5=si0;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si0=l5;
si1=3U;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=24U;
si0+=si1;
l7=si0;
si0=i32_load(&i->m0,(U64)si0);
l8=si0;
si0=l3;
si1=20U;
si0+=si1;
l9=si0;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si0=l6;
si1=-2U;
si0+=si1;
switch(si0){
case 0:
goto L10;
case 1:
goto L11;
default:
goto L9;
}
L11:;
si0=l4;
si1=8U;
si0+=si1;
si1=l3;
f14843(i,si0,si1);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+12U);
l8=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+8U);
l5=si0;
L10:;
si0=l5;
si1=2U;
si0=si0 == si1;
if(si0){
goto L5;
}
si0=l5;
if(si0){
goto L7;
}
si0=l8;
l5=si0;
goto L8;
L9:;
si0=l3;
si1=28U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l10=si0;
si0=l3;
si1=2U;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l7;
si1=l10;
i32_store(&i->m0,(U64)si0,si1);
si0=l9;
si1=l8;
i32_store(&i->m0,(U64)si0,si1);
si0=l6;
if(si0){
goto L6;
}
L8:;
si0=l5;
si1=64U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
si0=1U;
l8=si0;
si0=l5;
si1=68U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si0=!(si0);
if(si0){
goto L12;
}
si0=l6;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L4;
}
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=l6;
si0=f15269(i,si0);
l8=si0;
si0=!(si0);
if(si0){
goto L3;
}
L12:;
si0=l8;
si1=l7;
si2=l6;
si0=f15390(i,si0,si1,si2);
l8=si0;
si0=l4;
si1=l6;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l4;
si1=l6;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l4;
si1=l8;
i32_store(&i->m0,(U64)si0+16U,si1);
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
goto L13;
}
si0=l5;
f7690(i,si0);
L13:;
si0=l4;
si1=32U;
si0+=si1;
si1=24U;
si0+=si1;
si1=l3;
si2=24U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=32U;
si0+=si1;
si1=16U;
si0+=si1;
si1=l3;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=32U;
si0+=si1;
si1=8U;
si0+=si1;
si1=l3;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=l3;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+32U,sj1);
L17:;
{
si0=l4;
si0=i32_load(&i->m0,(U64)si0+48U);
l6=si0;
si0=l4;
si1=3U;
i32_store(&i->m0,(U64)si0+48U,si1);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+56U);
l5=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+52U);
l3=si0;
si0=l6;
si1=-2U;
si0+=si1;
switch(si0){
case 0:
goto L20;
case 1:
goto L21;
default:
goto L19;
}
L21:;
si0=l4;
si1=l4;
si2=32U;
si1+=si2;
f14843(i,si0,si1);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+4U);
l5=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
L20:;
si0=l3;
if(si0){
goto L22;
}
si0=l5;
l3=si0;
goto L18;
L22:;
si0=l3;
si1=2U;
si0=si0 != si1;
if(si0){
goto L16;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0+44U);
l3=si0;
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
goto L23;
}
si0=l3;
f7690(i,si0);
L23:;
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
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
goto L1;
L19:;
si0=l4;
si1=l4;
si1=i32_load(&i->m0,(U64)si1+60U);
l8=si1;
i32_store(&i->m0,(U64)si0+56U,si1);
si0=l4;
si1=l5;
i32_store(&i->m0,(U64)si0+52U,si1);
si0=l4;
si1=2U;
i32_store(&i->m0,(U64)si0+48U,si1);
si0=l6;
if(si0){
goto L15;
}
L18:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+20U);
l6=si0;
si1=l4;
si1=i32_load(&i->m0,(U64)si1+24U);
l5=si1;
si0-=si1;
si1=l2;
si0=si0 >= si1;
if(si0){
goto L24;
}
si0=l4;
si1=16U;
si0+=si1;
si1=l5;
si2=l2;
f7248(i,si0,si1,si2);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+20U);
l6=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+24U);
l5=si0;
L24:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+16U);
l8=si0;
si1=l5;
si0+=si1;
si1=l1;
si2=l2;
si0=f15390(i,si0,si1,si2);
si0=l4;
si1=l5;
si2=l2;
si1+=si2;
l5=si1;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l3;
si1=64U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
si0=l6;
si1=l5;
si0-=si1;
si1=l3;
si2=68U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
l6=si1;
si0=si0 >= si1;
if(si0){
goto L25;
}
si0=l4;
si1=16U;
si0+=si1;
si1=l5;
si2=l6;
f7248(i,si0,si1,si2);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+16U);
l8=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+24U);
l5=si0;
L25:;
si0=l8;
si1=l5;
si0+=si1;
si1=l7;
si2=l6;
si0=f15390(i,si0,si1,si2);
si0=l4;
si1=l5;
si2=l6;
si1+=si2;
i32_store(&i->m0,(U64)si0+24U,si1);
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
goto L17;
}
si0=l3;
f7690(i,si0);
goto L17;
}
L16:;
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l5;
i32_store(&i->m0,(U64)si0+4U,si1);
goto L14;
L15:;
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
goto L14;
}
si0=l8;
f7690(i,si0);
L14:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+44U);
l3=si0;
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
goto L26;
}
si0=l3;
f7690(i,si0);
L26:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+20U);
si0=!(si0);
if(si0){
goto L1;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0+16U);
f15271(i,si0);
goto L1;
L7:;
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l8;
i32_store(&i->m0,(U64)si0+4U,si1);
goto L2;
L6:;
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l5;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l10;
si1=l10;
si1=i32_load(&i->m0,(U64)si1);
l5=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=1U;
si0=si0 != si1;
if(si0){
goto L2;
}
si0=l10;
f7690(i,si0);
goto L2;
L5:;
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l0;
sj1=1ULL;
i64_store(&i->m0,(U64)si0,sj1);
goto L2;
L4:;
f53(i);
UNREACHABLE;
L3:;
si0=1U;
si1=l6;
f52(i,si0,si1);
UNREACHABLE;
L2:;
si0=l3;
si1=12U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
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
goto L1;
}
si0=l3;
f7690(i,si0);
L1:;
si0=l4;
si1=64U;
si0+=si1;
i->g0=si0;
L0:;
}

void f9919(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4,U32 l5,U32 l6,U32 l7) {
U32 l8=0;
U32 l9=0;
U32 l10=0;
U32 l11=0;
U32 l12=0;
U32 l13=0;
U32 l14=0;
U32 l15=0;
U32 si0,si1,si2,si3;
U64 sj1;
si0=i->g0;
si1=144U;
si0-=si1;
l8=si0;
i->g0=si0;
si0=l4;
si0=!(si0);
if(si0){
goto L9;
}
si0=l6;
si0=i32_load(&i->m0,(U64)si0);
l9=si0;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+8U);
l10=si0;
si0=l5;
si0=i32_load(&i->m0,(U64)si0);
l11=si0;
si0=2U;
l12=si0;
si0=1U;
l5=si0;
si0=l6;
si0=i32_load(&i->m0,(U64)si0+8U);
l13=si0;
l4=si0;
si0=l13;
switch(si0){
case 0:
goto L5;
case 1:
goto L8;
default:
goto L10;
}
L10:;
si0=l8;
si1=24U;
si0+=si1;
si1=l9;
si2=l13;
f1407(i,si0,si1,si2);
si0=l8;
si1=128U;
si0+=si1;
si1=l8;
si2=37U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l8;
si1=135U;
si0+=si1;
si1=l8;
si2=44U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l8;
si1=l8;
sj1=i64_load(&i->m0,(U64)si1+29U);
i64_store(&i->m0,(U64)si0+120U,sj1);
si0=l8;
si0=i32_load8_u(&i->m0,(U64)si0+28U);
l14=si0;
si0=l8;
si0=i32_load(&i->m0,(U64)si0+24U);
l12=si0;
si0=l9;
si1=l13;
si0+=si1;
l5=si0;
si1=-1U;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=1U;
si0<<=(si1&31);
si1=l5;
si2=-2U;
si1+=si2;
l6=si1;
si1=i32_load8_u(&i->m0,(U64)si1);
si0+=si1;
l4=si0;
si0=l6;
si1=l9;
si0=si0 != si1;
if(si0){
goto L11;
}
si0=2U;
l5=si0;
goto L5;
L11:;
si0=l13;
si1=-2U;
si0+=si1;
l15=si0;
si1=3U;
si0&=si1;
l7=si0;
si0=l13;
si1=-3U;
si0+=si1;
si1=3U;
si0=si0 >= si1;
if(si0){
goto L13;
}
si0=2U;
l5=si0;
goto L12;
L13:;
si0=l15;
si1=-4U;
si0&=si1;
l15=si0;
si0=l5;
si1=-6U;
si0+=si1;
l6=si0;
si0=2U;
l5=si0;
L14:;
{
si0=l4;
si1=1U;
si0<<=(si1&31);
si1=l6;
si2=3U;
si1+=si2;
si1=i32_load8_u(&i->m0,(U64)si1);
si0+=si1;
si1=1U;
si0<<=(si1&31);
si1=l6;
si2=2U;
si1+=si2;
si1=i32_load8_u(&i->m0,(U64)si1);
si0+=si1;
si1=1U;
si0<<=(si1&31);
si1=l6;
si2=1U;
si1+=si2;
si1=i32_load8_u(&i->m0,(U64)si1);
si0+=si1;
si1=1U;
si0<<=(si1&31);
si1=l6;
si1=i32_load8_u(&i->m0,(U64)si1);
si0+=si1;
l4=si0;
si0=l6;
si1=-4U;
si0+=si1;
l6=si0;
si0=l5;
si1=4U;
si0<<=(si1&31);
l5=si0;
si0=l15;
si1=-4U;
si0+=si1;
l15=si0;
if(si0){
goto L14;
}
}
si0=l6;
si1=4U;
si0+=si1;
l6=si0;
L12:;
si0=l7;
si0=!(si0);
if(si0){
goto L5;
}
si0=l6;
si1=-1U;
si0+=si1;
l6=si0;
L15:;
{
si0=l5;
si1=1U;
si0<<=(si1&31);
l5=si0;
si0=l4;
si1=1U;
si0<<=(si1&31);
si1=l6;
si1=i32_load8_u(&i->m0,(U64)si1);
si0+=si1;
l4=si0;
si0=l6;
si1=-1U;
si0+=si1;
l6=si0;
si0=l7;
si1=-1U;
si0+=si1;
l7=si0;
if(si0){
goto L15;
}
goto L5;
}
L9:;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=15U;
si0=f15269(i,si0);
l6=si0;
si0=!(si0);
if(si0){
goto L7;
}
si0=l6;
si1=7U;
si0+=si1;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+1835039U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l6;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+1835032U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l7;
si0=i32_load(&i->m0,(U64)si0+88U);
si1=508U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si1=l5;
si1=i32_load(&i->m0,(U64)si1);
l4=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l8;
sj1=64424509455ULL;
i64_store(&i->m0,(U64)si0+28U,sj1);
si0=l8;
si1=l6;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l4;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 == si1;
if(si0){
goto L6;
}
si0=l7;
si1=l5;
si2=l8;
si3=24U;
si2+=si3;
si0=f7173(i,si0,si1,si2);
l6=si0;
si0=l0;
si1=2U;
i32_store8(&i->m0,(U64)si0+12U,si1);
si0=l0;
si1=l6;
i32_store(&i->m0,(U64)si0,si1);
goto L4;
L8:;
si0=3U;
l12=si0;
si0=1U;
l5=si0;
si0=l9;
si0=i32_load8_u(&i->m0,(U64)si0);
l14=si0;
l4=si0;
goto L5;
L7:;
si0=1U;
si1=15U;
f52(i,si0,si1);
UNREACHABLE;
L6:;
f15042(i);
UNREACHABLE;
L5:;
si0=l8;
si1=52U;
si0+=si1;
si1=l8;
si2=135U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l8;
si1=45U;
si0+=si1;
si1=l8;
si2=128U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l8;
si1=l8;
sj1=i64_load(&i->m0,(U64)si1+120U);
i64_store(&i->m0,(U64)si0+37U,sj1);
si0=l8;
sj1=2ULL;
i64_store(&i->m0,(U64)si0+112U,sj1);
si0=l8;
si1=0U;
i32_store8(&i->m0,(U64)si0+108U,si1);
si0=l8;
si1=l10;
i32_store(&i->m0,(U64)si0+104U,si1);
si0=l8;
si1=l13;
i32_store(&i->m0,(U64)si0+100U,si1);
si0=l8;
si1=l9;
i32_store(&i->m0,(U64)si0+96U,si1);
si0=l8;
si1=l10;
i32_store(&i->m0,(U64)si0+92U,si1);
si0=l8;
si1=l11;
i32_store(&i->m0,(U64)si0+88U,si1);
si0=l8;
si1=l10;
i32_store(&i->m0,(U64)si0+84U,si1);
si0=l8;
si1=l11;
i32_store(&i->m0,(U64)si0+80U,si1);
si0=l8;
si1=l13;
i32_store(&i->m0,(U64)si0+72U,si1);
si0=l8;
si1=l9;
i32_store(&i->m0,(U64)si0+68U,si1);
si0=l8;
si1=0U;
i32_store(&i->m0,(U64)si0+64U,si1);
si0=l8;
si1=l5;
i32_store(&i->m0,(U64)si0+60U,si1);
si0=l8;
si1=l4;
i32_store(&i->m0,(U64)si0+56U,si1);
si0=l8;
si1=l14;
i32_store8(&i->m0,(U64)si0+36U,si1);
si0=l8;
si1=l12;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l8;
si1=l10;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l8;
si1=1U;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l8;
si1=16U;
si0+=si1;
si1=l8;
si2=24U;
si1+=si2;
f9889(i,si0,si1);
si0=l8;
si0=i32_load(&i->m0,(U64)si0+16U);
l7=si0;
if(si0){
goto L16;
}
si0=1833076U;
si1=43U;
si2=1835136U;
f673(i,si0,si1,si2);
UNREACHABLE;
L16:;
si0=1U;
l4=si0;
si0=1U;
l5=si0;
si0=l8;
si0=i32_load(&i->m0,(U64)si0+20U);
l6=si0;
si0=!(si0);
if(si0){
goto L17;
}
si0=l6;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L3;
}
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=l6;
si0=f15269(i,si0);
l5=si0;
si0=!(si0);
if(si0){
goto L2;
}
L17:;
si0=l5;
si1=l7;
si2=l6;
si0=f15390(i,si0,si1,si2);
l15=si0;
si0=l8;
si1=8U;
si0+=si1;
si1=l8;
si2=24U;
si1+=si2;
f9889(i,si0,si1);
si0=0U;
l5=si0;
si0=l8;
si0=i32_load(&i->m0,(U64)si0+8U);
l7=si0;
si0=!(si0);
if(si0){
goto L18;
}
si0=l8;
si0=i32_load(&i->m0,(U64)si0+12U);
l5=si0;
if(si0){
goto L20;
}
si0=1U;
l4=si0;
goto L19;
L20:;
si0=l5;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L3;
}
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=l5;
si0=f15269(i,si0);
l4=si0;
si0=!(si0);
if(si0){
goto L1;
}
L19:;
si0=l4;
si1=l7;
si2=l5;
si0=f15390(i,si0,si1,si2);
L18:;
si0=l0;
si1=l5;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l0;
si1=l5;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l0;
si1=l4;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l0;
si1=l6;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l0;
si1=l6;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l15;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l7;
si2=0U;
si1=si1 != si2;
i32_store8(&i->m0,(U64)si0+12U,si1);
si0=l8;
si0=i32_load(&i->m0,(U64)si0+64U);
si0=!(si0);
if(si0){
goto L4;
}
si0=l8;
si0=i32_load(&i->m0,(U64)si0+72U);
si0=!(si0);
if(si0){
goto L4;
}
si0=l8;
si0=i32_load(&i->m0,(U64)si0+68U);
f15271(i,si0);
L4:;
si0=l8;
si1=144U;
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
si0=1U;
si1=l5;
f52(i,si0,si1);
UNREACHABLE;
L0:;
}

void f9920(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4,U32 l5,U32 l6,U32 l7) {
U32 l8=0;
U32 l9=0;
U32 l10=0;
U32 l11=0;
U32 si0,si1,si2,si3,si4,si5;
U64 sj1;
si0=i->g0;
si1=112U;
si0-=si1;
l8=si0;
i->g0=si0;
si0=l4;
si0=!(si0);
if(si0){
goto L10;
}
si0=l8;
si1=8U;
si0+=si1;
si1=l5;
si1=i32_load(&i->m0,(U64)si1+8U);
si2=l5;
si3=12U;
si2+=si3;
si2=i32_load(&i->m0,(U64)si2);
l5=si2;
si3=l6;
si3=i32_load(&i->m0,(U64)si3);
l4=si3;
si4=64U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si4=l4;
si5=68U;
si4+=si5;
si4=i32_load(&i->m0,(U64)si4);
f760(i,si0,si1,si2,si3,si4);
si0=l8;
si1=1U;
i32_store(&i->m0,(U64)si0+88U,si1);
si0=l8;
si1=1U;
i32_store16(&i->m0,(U64)si0+80U,si1);
si0=l8;
si1=l5;
i32_store(&i->m0,(U64)si0+76U,si1);
si0=l8;
si1=0U;
i32_store(&i->m0,(U64)si0+72U,si1);
si0=l8;
si0=i32_load(&i->m0,(U64)si0+56U);
l7=si0;
si0=l8;
si1=96U;
si0+=si1;
si1=l8;
si2=8U;
si1+=si2;
f9884(i,si0,si1);
si0=l8;
si0=i32_load(&i->m0,(U64)si0+96U);
if(si0){
goto L8;
}
si0=l8;
si0=i32_load8_u(&i->m0,(U64)si0+81U);
if(si0){
goto L9;
}
si0=l8;
si1=1U;
i32_store8(&i->m0,(U64)si0+81U,si1);
si0=l8;
si0=i32_load(&i->m0,(U64)si0+72U);
l9=si0;
si0=l8;
si0=i32_load(&i->m0,(U64)si0+76U);
l5=si0;
si0=l8;
si0=i32_load8_u(&i->m0,(U64)si0+80U);
if(si0){
goto L11;
}
si0=l5;
si1=l9;
si0=si0 == si1;
if(si0){
goto L9;
}
L11:;
si0=l5;
si1=l9;
si0-=si1;
l5=si0;
si0=l8;
si0=i32_load(&i->m0,(U64)si0+56U);
si1=l9;
si0+=si1;
l10=si0;
goto L7;
L10:;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=15U;
si0=f15269(i,si0);
l5=si0;
si0=!(si0);
if(si0){
goto L5;
}
si0=l5;
si1=7U;
si0+=si1;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+1835039U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+1835032U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l7;
si0=i32_load(&i->m0,(U64)si0+88U);
si1=508U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
si1=l4;
si1=i32_load(&i->m0,(U64)si1);
l6=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l8;
sj1=64424509455ULL;
i64_store(&i->m0,(U64)si0+12U,sj1);
si0=l8;
si1=l5;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l6;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 == si1;
if(si0){
goto L4;
}
si0=l7;
si1=l4;
si2=l8;
si3=8U;
si2+=si3;
si0=f7173(i,si0,si1,si2);
l5=si0;
si0=l0;
si1=2U;
i32_store8(&i->m0,(U64)si0+12U,si1);
si0=l0;
si1=l5;
i32_store(&i->m0,(U64)si0,si1);
goto L6;
L9:;
si0=1833076U;
si1=43U;
si2=1835136U;
f673(i,si0,si1,si2);
UNREACHABLE;
L8:;
si0=l8;
si0=i32_load(&i->m0,(U64)si0+72U);
l4=si0;
si0=l8;
si1=l8;
si2=104U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
l9=si1;
i32_store(&i->m0,(U64)si0+72U,si1);
si0=l8;
si0=i32_load(&i->m0,(U64)si0+100U);
si1=l4;
si0-=si1;
l5=si0;
si0=l7;
si1=l4;
si0+=si1;
l10=si0;
L7:;
si0=1U;
l6=si0;
si0=l8;
si0=i32_load(&i->m0,(U64)si0+88U);
l4=si0;
si0=1U;
l7=si0;
si0=l5;
si0=!(si0);
if(si0){
goto L12;
}
si0=l5;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L3;
}
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=l5;
si0=f15269(i,si0);
l7=si0;
si0=!(si0);
if(si0){
goto L2;
}
L12:;
si0=l7;
si1=l10;
si2=l5;
si0=f15390(i,si0,si1,si2);
l10=si0;
si0=0U;
l7=si0;
si0=l4;
switch(si0){
case 0:
goto L13;
case 1:
goto L17;
default:
goto L18;
}
L18:;
si0=l8;
si1=l4;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0+88U,si1);
si0=0U;
l4=si0;
si0=l8;
si0=i32_load8_u(&i->m0,(U64)si0+81U);
si0=!(si0);
if(si0){
goto L19;
}
si0=0U;
l7=si0;
goto L13;
L19:;
si0=l8;
si0=i32_load(&i->m0,(U64)si0+56U);
l7=si0;
si0=l8;
si1=96U;
si0+=si1;
si1=l8;
si2=8U;
si1+=si2;
f9884(i,si0,si1);
si0=l8;
si0=i32_load(&i->m0,(U64)si0+96U);
if(si0){
goto L15;
}
si0=l8;
si0=i32_load8_u(&i->m0,(U64)si0+81U);
if(si0){
goto L16;
}
si0=l8;
si0=i32_load(&i->m0,(U64)si0+72U);
l7=si0;
si0=l8;
si0=i32_load(&i->m0,(U64)si0+76U);
l4=si0;
si0=l8;
si0=i32_load8_u(&i->m0,(U64)si0+80U);
if(si0){
goto L20;
}
si0=l4;
si1=l7;
si0=si0 == si1;
if(si0){
goto L16;
}
L20:;
si0=l4;
si1=l7;
si0-=si1;
l4=si0;
si0=l8;
si0=i32_load(&i->m0,(U64)si0+56U);
si1=l7;
si0+=si1;
l9=si0;
goto L14;
L17:;
si0=0U;
l4=si0;
si0=l8;
si0=i32_load8_u(&i->m0,(U64)si0+81U);
si0=!(si0);
if(si0){
goto L21;
}
si0=0U;
l7=si0;
goto L13;
L21:;
si0=l8;
si0=i32_load(&i->m0,(U64)si0+76U);
l11=si0;
si0=l8;
si0=i32_load8_u(&i->m0,(U64)si0+80U);
if(si0){
goto L22;
}
si0=0U;
l4=si0;
si0=0U;
l7=si0;
si0=l11;
si1=l9;
si0=si0 == si1;
if(si0){
goto L13;
}
L22:;
si0=l11;
si1=l9;
si0-=si1;
l4=si0;
si0=l8;
si0=i32_load(&i->m0,(U64)si0+56U);
si1=l9;
si0+=si1;
l9=si0;
goto L14;
L16:;
si0=0U;
l4=si0;
si0=0U;
l7=si0;
goto L13;
L15:;
si0=l8;
si0=i32_load(&i->m0,(U64)si0+100U);
si1=l8;
si1=i32_load(&i->m0,(U64)si1+72U);
l6=si1;
si0-=si1;
l4=si0;
si0=l7;
si1=l6;
si0+=si1;
l9=si0;
L14:;
si0=1U;
l7=si0;
si0=1U;
l6=si0;
si0=l4;
si0=!(si0);
if(si0){
goto L23;
}
si0=l4;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L3;
}
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=l4;
si0=f15269(i,si0);
l6=si0;
si0=!(si0);
if(si0){
goto L1;
}
L23:;
si0=l6;
si1=l9;
si2=l4;
si0=f15390(i,si0,si1,si2);
L13:;
si0=l0;
si1=l4;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l0;
si1=l4;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l0;
si1=l6;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l0;
si1=l7;
i32_store8(&i->m0,(U64)si0+12U,si1);
si0=l0;
si1=l5;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l0;
si1=l5;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l10;
i32_store(&i->m0,(U64)si0,si1);
L6:;
si0=l8;
si1=112U;
si0+=si1;
i->g0=si0;
goto L0;
L5:;
si0=1U;
si1=15U;
f52(i,si0,si1);
UNREACHABLE;
L4:;
f15042(i);
UNREACHABLE;
L3:;
f53(i);
UNREACHABLE;
L2:;
si0=1U;
si1=l5;
f52(i,si0,si1);
UNREACHABLE;
L1:;
si0=1U;
si1=l4;
f52(i,si0,si1);
UNREACHABLE;
L0:;
}

void f9921(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4,U32 l5,U32 l6,U32 l7) {
U32 l8=0;
U32 l9=0;
U32 l10=0;
U32 l11=0;
U32 si0,si1,si2,si3,si4,si5;
U64 sj1;
si0=i->g0;
si1=112U;
si0-=si1;
l8=si0;
i->g0=si0;
si0=l4;
si0=!(si0);
if(si0){
goto L8;
}
si0=l8;
si1=24U;
si0+=si1;
si1=l5;
si1=i32_load(&i->m0,(U64)si1+8U);
si2=l5;
si3=12U;
si2+=si3;
si2=i32_load(&i->m0,(U64)si2);
l5=si2;
si3=l6;
si3=i32_load(&i->m0,(U64)si3);
l4=si3;
si4=64U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si4=l4;
si5=68U;
si4+=si5;
si4=i32_load(&i->m0,(U64)si4);
f760(i,si0,si1,si2,si3,si4);
si0=1U;
l7=si0;
si0=l8;
si1=1U;
i32_store(&i->m0,(U64)si0+104U,si1);
si0=l8;
si1=1U;
i32_store16(&i->m0,(U64)si0+96U,si1);
si0=l8;
si1=l5;
i32_store(&i->m0,(U64)si0+92U,si1);
si0=l8;
si1=0U;
i32_store(&i->m0,(U64)si0+88U,si1);
si0=l8;
si1=16U;
si0+=si1;
si1=l8;
si2=24U;
si1+=si2;
f9873(i,si0,si1);
si0=l8;
si0=i32_load(&i->m0,(U64)si0+16U);
l6=si0;
if(si0){
goto L7;
}
si0=1833076U;
si1=43U;
si2=1835136U;
f673(i,si0,si1,si2);
UNREACHABLE;
L8:;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=15U;
si0=f15269(i,si0);
l5=si0;
si0=!(si0);
if(si0){
goto L5;
}
si0=l5;
si1=7U;
si0+=si1;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+1835039U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+1835032U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l7;
si0=i32_load(&i->m0,(U64)si0+88U);
si1=508U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
si1=l4;
si1=i32_load(&i->m0,(U64)si1);
l6=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l8;
sj1=64424509455ULL;
i64_store(&i->m0,(U64)si0+28U,sj1);
si0=l8;
si1=l5;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l6;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 == si1;
if(si0){
goto L4;
}
si0=l7;
si1=l4;
si2=l8;
si3=24U;
si2+=si3;
si0=f7173(i,si0,si1,si2);
l5=si0;
si0=l0;
si1=2U;
i32_store8(&i->m0,(U64)si0+12U,si1);
si0=l0;
si1=l5;
i32_store(&i->m0,(U64)si0,si1);
goto L6;
L7:;
si0=l8;
si0=i32_load(&i->m0,(U64)si0+104U);
l5=si0;
si0=l8;
si0=i32_load(&i->m0,(U64)si0+20U);
l4=si0;
si0=!(si0);
if(si0){
goto L9;
}
si0=l4;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L3;
}
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=l4;
si0=f15269(i,si0);
l7=si0;
si0=!(si0);
if(si0){
goto L2;
}
L9:;
si0=l7;
si1=l6;
si2=l4;
si0=f15390(i,si0,si1,si2);
l9=si0;
si0=1U;
l6=si0;
si0=0U;
l7=si0;
si0=l5;
switch(si0){
case 0:
goto L10;
case 1:
goto L13;
default:
goto L12;
}
L13:;
si0=0U;
l5=si0;
si0=l8;
si0=i32_load8_u(&i->m0,(U64)si0+97U);
si0=!(si0);
if(si0){
goto L14;
}
si0=0U;
l7=si0;
goto L10;
L14:;
si0=l8;
si0=i32_load(&i->m0,(U64)si0+88U);
l10=si0;
si0=l8;
si0=i32_load(&i->m0,(U64)si0+92U);
l11=si0;
si0=l8;
si0=i32_load8_u(&i->m0,(U64)si0+96U);
if(si0){
goto L15;
}
si0=0U;
l5=si0;
si0=0U;
l7=si0;
si0=l11;
si1=l10;
si0=si0 == si1;
if(si0){
goto L10;
}
L15:;
si0=l11;
si1=l10;
si0-=si1;
l5=si0;
si0=l8;
si0=i32_load(&i->m0,(U64)si0+72U);
si1=l10;
si0+=si1;
l10=si0;
goto L11;
L12:;
si0=l8;
si1=l5;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0+104U,si1);
si0=l8;
si1=8U;
si0+=si1;
si1=l8;
si2=24U;
si1+=si2;
f9873(i,si0,si1);
si0=l8;
si0=i32_load(&i->m0,(U64)si0+8U);
l10=si0;
if(si0){
goto L16;
}
si0=0U;
l5=si0;
si0=0U;
l7=si0;
goto L10;
L16:;
si0=l8;
si0=i32_load(&i->m0,(U64)si0+12U);
l5=si0;
L11:;
si0=1U;
l7=si0;
si0=1U;
l6=si0;
si0=l5;
si0=!(si0);
if(si0){
goto L17;
}
si0=l5;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L3;
}
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=l5;
si0=f15269(i,si0);
l6=si0;
si0=!(si0);
if(si0){
goto L1;
}
L17:;
si0=l6;
si1=l10;
si2=l5;
si0=f15390(i,si0,si1,si2);
L10:;
si0=l0;
si1=l5;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l0;
si1=l5;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l0;
si1=l6;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l0;
si1=l7;
i32_store8(&i->m0,(U64)si0+12U,si1);
si0=l0;
si1=l4;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l0;
si1=l4;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l9;
i32_store(&i->m0,(U64)si0,si1);
L6:;
si0=l8;
si1=112U;
si0+=si1;
i->g0=si0;
goto L0;
L5:;
si0=1U;
si1=15U;
f52(i,si0,si1);
UNREACHABLE;
L4:;
f15042(i);
UNREACHABLE;
L3:;
f53(i);
UNREACHABLE;
L2:;
si0=1U;
si1=l4;
f52(i,si0,si1);
UNREACHABLE;
L1:;
si0=1U;
si1=l5;
f52(i,si0,si1);
UNREACHABLE;
L0:;
}

void f9922(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4,U32 l5,U32 l6,U32 l7) {
U32 l8=0;
U32 l9=0;
U32 si0,si1,si2,si3;
U64 sj1;
si0=i->g0;
si1=192U;
si0-=si1;
l8=si0;
i->g0=si0;
si0=l4;
si0=!(si0);
if(si0){
goto L8;
}
si0=l5;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+8U);
l5=si0;
si0=1U;
l7=si0;
si0=l8;
si1=136U;
si0+=si1;
si1=1U;
si2=l6;
si2=i32_load(&i->m0,(U64)si2);
l9=si2;
si3=l6;
si3=i32_load(&i->m0,(U64)si3+8U);
l6=si3;
f1403(i,si0,si1,si2,si3);
si0=l8;
si1=24U;
si0+=si1;
si1=40U;
si0+=si1;
si1=l8;
si2=144U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l8;
si1=24U;
si0+=si1;
si1=48U;
si0+=si1;
si1=l8;
si2=152U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l8;
si1=80U;
si0+=si1;
si1=l8;
si2=160U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l8;
si1=88U;
si0+=si1;
si1=l8;
si2=168U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l8;
si1=96U;
si0+=si1;
si1=l8;
si2=136U;
si1+=si2;
si2=40U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l8;
si1=104U;
si0+=si1;
si1=l8;
si2=136U;
si1+=si2;
si2=48U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l8;
si1=l8;
sj1=i64_load(&i->m0,(U64)si1+136U);
i64_store(&i->m0,(U64)si0+56U,sj1);
si0=l8;
sj1=2ULL;
i64_store(&i->m0,(U64)si0+128U,sj1);
si0=l8;
si1=0U;
i32_store8(&i->m0,(U64)si0+124U,si1);
si0=l8;
si1=0U;
i32_store(&i->m0,(U64)si0+120U,si1);
si0=l8;
si1=0U;
i32_store(&i->m0,(U64)si0+112U,si1);
si0=l8;
si1=l5;
i32_store(&i->m0,(U64)si0+52U,si1);
si0=l8;
si1=l4;
i32_store(&i->m0,(U64)si0+48U,si1);
si0=l8;
si1=0U;
i32_store(&i->m0,(U64)si0+44U,si1);
si0=l8;
si1=l6;
i32_store(&i->m0,(U64)si0+36U,si1);
si0=l8;
si1=l9;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l8;
si1=l5;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l8;
si1=l4;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l8;
si1=l8;
si1=i32_load(&i->m0,(U64)si1+172U);
si2=0U;
si1=si1 != si2;
i32_store(&i->m0,(U64)si0+40U,si1);
si0=l8;
si1=16U;
si0+=si1;
si1=l8;
si2=24U;
si1+=si2;
f9885(i,si0,si1);
si0=l8;
si0=i32_load(&i->m0,(U64)si0+16U);
l5=si0;
if(si0){
goto L7;
}
si0=1833076U;
si1=43U;
si2=1835136U;
f673(i,si0,si1,si2);
UNREACHABLE;
L8:;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=15U;
si0=f15269(i,si0);
l6=si0;
si0=!(si0);
if(si0){
goto L5;
}
si0=l6;
si1=7U;
si0+=si1;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+1835039U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l6;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+1835032U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l7;
si0=i32_load(&i->m0,(U64)si0+88U);
si1=508U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si1=l5;
si1=i32_load(&i->m0,(U64)si1);
l4=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l8;
sj1=64424509455ULL;
i64_store(&i->m0,(U64)si0+28U,sj1);
si0=l8;
si1=l6;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l4;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 == si1;
if(si0){
goto L4;
}
si0=l7;
si1=l5;
si2=l8;
si3=24U;
si2+=si3;
si0=f7173(i,si0,si1,si2);
l6=si0;
si0=l0;
si1=2U;
i32_store8(&i->m0,(U64)si0+12U,si1);
si0=l0;
si1=l6;
i32_store(&i->m0,(U64)si0,si1);
goto L6;
L7:;
si0=l8;
si0=i32_load(&i->m0,(U64)si0+20U);
l6=si0;
si0=!(si0);
if(si0){
goto L9;
}
si0=l6;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L3;
}
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=l6;
si0=f15269(i,si0);
l7=si0;
si0=!(si0);
if(si0){
goto L2;
}
L9:;
si0=l7;
si1=l5;
si2=l6;
si0=f15390(i,si0,si1,si2);
l9=si0;
si0=l8;
si1=8U;
si0+=si1;
si1=l8;
si2=24U;
si1+=si2;
f9885(i,si0,si1);
si0=l8;
si0=i32_load(&i->m0,(U64)si0+8U);
l4=si0;
if(si0){
goto L11;
}
si0=1U;
l7=si0;
si0=0U;
l5=si0;
goto L10;
L11:;
si0=l8;
si0=i32_load(&i->m0,(U64)si0+12U);
l5=si0;
if(si0){
goto L13;
}
si0=1U;
l7=si0;
goto L12;
L13:;
si0=l5;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L3;
}
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=l5;
si0=f15269(i,si0);
l7=si0;
si0=!(si0);
if(si0){
goto L1;
}
L12:;
si0=l7;
si1=l4;
si2=l5;
si0=f15390(i,si0,si1,si2);
L10:;
si0=l0;
si1=l5;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l0;
si1=l5;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l0;
si1=l7;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l0;
si1=l6;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l0;
si1=l6;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l9;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l4;
si2=0U;
si1=si1 != si2;
i32_store8(&i->m0,(U64)si0+12U,si1);
si0=l8;
si1=96U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L6;
}
si0=l8;
si1=104U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L6;
}
si0=l8;
si1=100U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
f15271(i,si0);
L6:;
si0=l8;
si1=192U;
si0+=si1;
i->g0=si0;
goto L0;
L5:;
si0=1U;
si1=15U;
f52(i,si0,si1);
UNREACHABLE;
L4:;
f15042(i);
UNREACHABLE;
L3:;
f53(i);
UNREACHABLE;
L2:;
si0=1U;
si1=l6;
f52(i,si0,si1);
UNREACHABLE;
L1:;
si0=1U;
si1=l5;
f52(i,si0,si1);
UNREACHABLE;
L0:;
}

void f9923(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4) {
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
U64 sj1;
si0=i->g0;
si1=48U;
si0-=si1;
l5=si0;
i->g0=si0;
si0=l5;
si1=0U;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l5;
sj1=4ULL;
i64_store(&i->m0,(U64)si0+8U,sj1);
si0=2U;
si1=0U;
si2=l3;
si0=si2?si0:si1;
l6=si0;
si0=l1;
si1=l2;
si0+=si1;
l7=si0;
si0=0U;
l8=si0;
si0=l1;
l9=si0;
si0=0U;
l10=si0;
si0=0U;
l11=si0;
L5:;
{
si0=l10;
si0=!(si0);
if(si0){
goto L11;
}
si0=l8;
l12=si0;
si0=l9;
l13=si0;
si0=l14;
l8=si0;
si0=l15;
l9=si0;
goto L10;
L11:;
si0=l9;
si1=l7;
si0=si0 == si1;
if(si0){
goto L9;
}
si0=l9;
si1=l9;
si2=l7;
si1=si1 != si2;
l12=si1;
si0+=si1;
l13=si0;
si0=l8;
si1=l12;
si0+=si1;
l12=si0;
L10:;
si0=l9;
si0=!(si0);
if(si0){
goto L9;
}
si0=1U;
l16=si0;
si0=0U;
l10=si0;
si0=l3;
l17=si0;
si0=l9;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=-10U;
si0+=si1;
switch(si0){
case 0:
goto L6;
case 1:
goto L14;
case 2:
goto L14;
case 3:
goto L13;
default:
goto L14;
}
L14:;
L15:;
{
si0=l13;
si0=!(si0);
if(si0){
goto L9;
}
si0=l13;
si1=l7;
si0=si0 == si1;
if(si0){
goto L9;
}
si0=l13;
si0=i32_load8_u(&i->m0,(U64)si0);
l9=si0;
si0=l12;
si1=1U;
si0+=si1;
l12=si0;
si0=l13;
si1=1U;
si0+=si1;
l13=si0;
si0=l9;
si1=-10U;
si0+=si1;
switch(si0){
case 0:
goto L12;
case 1:
goto L15;
case 2:
goto L15;
case 3:
goto L16;
default:
goto L15;
}
L16:;
}
si0=l12;
si1=-1U;
si0+=si1;
l8=si0;
L13:;
si0=l13;
si1=0U;
si2=l13;
si3=l7;
si2=si2 != si3;
l9=si2;
si0=si2?si0:si1;
l15=si0;
si0=l13;
si1=l9;
si0+=si1;
l17=si0;
si0=l12;
l14=si0;
si1=l9;
si0+=si1;
l12=si0;
si0=1U;
l16=si0;
si0=l13;
si1=l7;
si0=si0 == si1;
if(si0){
goto L8;
}
si0=l15;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=10U;
si0=si0 != si1;
if(si0){
goto L8;
}
si0=2U;
l16=si0;
si0=l17;
l13=si0;
si0=l6;
l17=si0;
goto L6;
L12:;
si0=l12;
si1=-1U;
si0+=si1;
l8=si0;
goto L7;
L9:;
si0=l11;
si1=l2;
si0=si0 == si1;
if(si0){
goto L19;
}
si0=l11;
si1=l2;
si0=si0 > si1;
if(si0){
goto L18;
}
si0=l2;
si1=l11;
si0-=si1;
l13=si0;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L3;
}
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=l13;
si0=f15269(i,si0);
l12=si0;
si0=!(si0);
if(si0){
goto L17;
}
si0=l12;
si1=l1;
si2=l11;
si1+=si2;
si2=l13;
si0=f15390(i,si0,si1,si2);
l9=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+88U);
si1=32U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l12=si0;
si1=l12;
si1=i32_load(&i->m0,(U64)si1);
l11=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=0U;
i32_store(&i->m0,(U64)si0+40U,si1);
si0=l5;
si1=l13;
i32_store(&i->m0,(U64)si0+36U,si1);
si0=l5;
si1=l13;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l5;
si1=l9;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l5;
si1=0U;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l11;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 == si1;
if(si0){
goto L1;
}
si0=l5;
si1=24U;
si0+=si1;
si1=l12;
si2=0U;
si0=f8105(i,si0,si1,si2);
l12=si0;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+16U);
l13=si0;
si1=l5;
si1=i32_load(&i->m0,(U64)si1+12U);
si0=si0 != si1;
if(si0){
goto L20;
}
si0=l5;
si1=8U;
si0+=si1;
si1=l13;
f7257(i,si0,si1);
si0=l5;
si0=i32_load(&i->m0,(U64)si0+16U);
l13=si0;
L20:;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+8U);
si1=l13;
si2=2U;
si1<<=(si2&31);
si0+=si1;
si1=l12;
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=l5;
si1=i32_load(&i->m0,(U64)si1+16U);
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0+16U,si1);
L19:;
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
si0=l5;
si1=48U;
si0+=si1;
i->g0=si0;
goto L0;
L18:;
si0=l11;
si1=l2;
si2=1865484U;
f675(i,si0,si1,si2);
UNREACHABLE;
L17:;
si0=1U;
si1=l13;
f52(i,si0,si1);
UNREACHABLE;
L8:;
si0=l17;
l13=si0;
si0=1U;
l10=si0;
L7:;
si0=l3;
l17=si0;
L6:;
si0=l17;
si1=l8;
si0+=si1;
l17=si0;
si1=l11;
si0=si0 < si1;
if(si0){
goto L21;
}
si0=l17;
si1=l2;
si0=si0 > si1;
if(si0){
goto L4;
}
si0=l17;
si1=l11;
si0-=si1;
l9=si0;
si0=1U;
l18=si0;
si0=l17;
si1=l11;
si0=si0 == si1;
if(si0){
goto L22;
}
si0=l9;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L3;
}
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=l9;
si0=f15269(i,si0);
l18=si0;
si0=!(si0);
if(si0){
goto L2;
}
L22:;
si0=l18;
si1=l1;
si2=l11;
si1+=si2;
si2=l9;
si0=f15390(i,si0,si1,si2);
l17=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+88U);
si1=32U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l11=si0;
si1=l11;
si1=i32_load(&i->m0,(U64)si1);
l18=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=0U;
i32_store(&i->m0,(U64)si0+40U,si1);
si0=l5;
si1=l9;
i32_store(&i->m0,(U64)si0+36U,si1);
si0=l5;
si1=l9;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l5;
si1=l17;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l5;
si1=0U;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l18;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 == si1;
if(si0){
goto L1;
}
si0=l5;
si1=24U;
si0+=si1;
si1=l11;
si2=0U;
si0=f8105(i,si0,si1,si2);
l17=si0;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+16U);
l9=si0;
si1=l5;
si1=i32_load(&i->m0,(U64)si1+12U);
si0=si0 != si1;
if(si0){
goto L23;
}
si0=l5;
si1=8U;
si0+=si1;
si1=l9;
f7257(i,si0,si1);
si0=l5;
si0=i32_load(&i->m0,(U64)si0+16U);
l9=si0;
L23:;
si0=l16;
si1=l8;
si0+=si1;
l11=si0;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+8U);
si1=l9;
si2=2U;
si1<<=(si2&31);
si0+=si1;
si1=l17;
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=l5;
si1=i32_load(&i->m0,(U64)si1+16U);
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l12;
l8=si0;
si0=l13;
l9=si0;
goto L5;
L21:;
}
si0=l11;
si1=l17;
si2=1865484U;
f675(i,si0,si1,si2);
UNREACHABLE;
L4:;
si0=l17;
si1=l2;
si2=1865484U;
f666(i,si0,si1,si2);
UNREACHABLE;
L3:;
f53(i);
UNREACHABLE;
L2:;
si0=1U;
si1=l9;
f52(i,si0,si1);
UNREACHABLE;
L1:;
f15042(i);
UNREACHABLE;
L0:;
}

void f9924(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4) {
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
U32 si0,si1,si2,si3;
U64 sj1;
si0=i->g0;
si1=32U;
si0-=si1;
l5=si0;
i->g0=si0;
si0=l5;
si1=0U;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l5;
sj1=4ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=2U;
si1=0U;
si2=l3;
si0=si2?si0:si1;
l6=si0;
si0=l1;
si1=l2;
si0+=si1;
l7=si0;
si0=0U;
l8=si0;
si0=l1;
l9=si0;
si0=0U;
l10=si0;
si0=0U;
l11=si0;
L5:;
{
si0=l10;
si0=!(si0);
if(si0){
goto L11;
}
si0=l8;
l12=si0;
si0=l9;
l13=si0;
si0=l14;
l8=si0;
si0=l15;
l9=si0;
goto L10;
L11:;
si0=l9;
si1=l7;
si0=si0 == si1;
if(si0){
goto L9;
}
si0=l9;
si1=l9;
si2=l7;
si1=si1 != si2;
l12=si1;
si0+=si1;
l13=si0;
si0=l8;
si1=l12;
si0+=si1;
l12=si0;
L10:;
si0=l9;
si0=!(si0);
if(si0){
goto L9;
}
si0=1U;
l16=si0;
si0=0U;
l10=si0;
si0=l3;
l17=si0;
si0=l9;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=-10U;
si0+=si1;
switch(si0){
case 0:
goto L6;
case 1:
goto L14;
case 2:
goto L14;
case 3:
goto L13;
default:
goto L14;
}
L14:;
L15:;
{
si0=l13;
si0=!(si0);
if(si0){
goto L9;
}
si0=l13;
si1=l7;
si0=si0 == si1;
if(si0){
goto L9;
}
si0=l13;
si0=i32_load8_u(&i->m0,(U64)si0);
l9=si0;
si0=l12;
si1=1U;
si0+=si1;
l12=si0;
si0=l13;
si1=1U;
si0+=si1;
l13=si0;
si0=l9;
si1=-10U;
si0+=si1;
switch(si0){
case 0:
goto L12;
case 1:
goto L15;
case 2:
goto L15;
case 3:
goto L16;
default:
goto L15;
}
L16:;
}
si0=l12;
si1=-1U;
si0+=si1;
l8=si0;
L13:;
si0=l13;
si1=0U;
si2=l13;
si3=l7;
si2=si2 != si3;
l9=si2;
si0=si2?si0:si1;
l15=si0;
si0=l13;
si1=l9;
si0+=si1;
l17=si0;
si0=l12;
l14=si0;
si1=l9;
si0+=si1;
l12=si0;
si0=1U;
l16=si0;
si0=l13;
si1=l7;
si0=si0 == si1;
if(si0){
goto L8;
}
si0=l15;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=10U;
si0=si0 != si1;
if(si0){
goto L8;
}
si0=2U;
l16=si0;
si0=l17;
l13=si0;
si0=l6;
l17=si0;
goto L6;
L12:;
si0=l12;
si1=-1U;
si0+=si1;
l8=si0;
goto L7;
L9:;
si0=l11;
si1=l2;
si0=si0 == si1;
if(si0){
goto L19;
}
si0=l11;
si1=l2;
si0=si0 > si1;
if(si0){
goto L18;
}
si0=l2;
si1=l11;
si0-=si1;
l13=si0;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L3;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0+88U);
l12=si0;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=l13;
si0=f15269(i,si0);
l9=si0;
si0=!(si0);
if(si0){
goto L17;
}
si0=l9;
si1=l1;
si2=l11;
si1+=si2;
si2=l13;
si0=f15390(i,si0,si1,si2);
l9=si0;
si0=l12;
si1=24U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l12=si0;
si1=l12;
si1=i32_load(&i->m0,(U64)si1);
l11=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=l13;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l5;
si1=l13;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l5;
si1=l9;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l11;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 == si1;
if(si0){
goto L1;
}
si0=l5;
si1=16U;
si0+=si1;
si1=l12;
si2=0U;
si0=f8110(i,si0,si1,si2);
l12=si0;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+8U);
l13=si0;
si1=l5;
si1=i32_load(&i->m0,(U64)si1+4U);
si0=si0 != si1;
if(si0){
goto L20;
}
si0=l5;
si1=l13;
f7257(i,si0,si1);
si0=l5;
si0=i32_load(&i->m0,(U64)si0+8U);
l13=si0;
L20:;
si0=l5;
si0=i32_load(&i->m0,(U64)si0);
si1=l13;
si2=2U;
si1<<=(si2&31);
si0+=si1;
si1=l12;
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=l5;
si1=i32_load(&i->m0,(U64)si1+8U);
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0+8U,si1);
L19:;
si0=l0;
si1=l5;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=8U;
si0+=si1;
si1=l5;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=32U;
si0+=si1;
i->g0=si0;
goto L0;
L18:;
si0=l11;
si1=l2;
si2=1865484U;
f675(i,si0,si1,si2);
UNREACHABLE;
L17:;
si0=1U;
si1=l13;
f52(i,si0,si1);
UNREACHABLE;
L8:;
si0=l17;
l13=si0;
si0=1U;
l10=si0;
L7:;
si0=l3;
l17=si0;
L6:;
si0=l17;
si1=l8;
si0+=si1;
l17=si0;
si1=l11;
si0=si0 < si1;
if(si0){
goto L21;
}
si0=l17;
si1=l2;
si0=si0 > si1;
if(si0){
goto L4;
}
si0=l17;
si1=l11;
si0-=si1;
l9=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+88U);
l18=si0;
si0=1U;
l19=si0;
si0=l17;
si1=l11;
si0=si0 == si1;
if(si0){
goto L22;
}
si0=l9;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L3;
}
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=l9;
si0=f15269(i,si0);
l19=si0;
si0=!(si0);
if(si0){
goto L2;
}
L22:;
si0=l19;
si1=l1;
si2=l11;
si1+=si2;
si2=l9;
si0=f15390(i,si0,si1,si2);
l17=si0;
si0=l18;
si1=24U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l11=si0;
si1=l11;
si1=i32_load(&i->m0,(U64)si1);
l19=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=l9;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l5;
si1=l9;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l5;
si1=l17;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l19;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 == si1;
if(si0){
goto L1;
}
si0=l5;
si1=16U;
si0+=si1;
si1=l11;
si2=0U;
si0=f8110(i,si0,si1,si2);
l17=si0;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+8U);
l9=si0;
si1=l5;
si1=i32_load(&i->m0,(U64)si1+4U);
si0=si0 != si1;
if(si0){
goto L23;
}
si0=l5;
si1=l9;
f7257(i,si0,si1);
si0=l5;
si0=i32_load(&i->m0,(U64)si0+8U);
l9=si0;
L23:;
si0=l16;
si1=l8;
si0+=si1;
l11=si0;
si0=l5;
si0=i32_load(&i->m0,(U64)si0);
si1=l9;
si2=2U;
si1<<=(si2&31);
si0+=si1;
si1=l17;
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=l5;
si1=i32_load(&i->m0,(U64)si1+8U);
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l12;
l8=si0;
si0=l13;
l9=si0;
goto L5;
L21:;
}
si0=l11;
si1=l17;
si2=1865484U;
f675(i,si0,si1,si2);
UNREACHABLE;
L4:;
si0=l17;
si1=l2;
si2=1865484U;
f666(i,si0,si1,si2);
UNREACHABLE;
L3:;
f53(i);
UNREACHABLE;
L2:;
si0=1U;
si1=l9;
f52(i,si0,si1);
UNREACHABLE;
L1:;
f15042(i);
UNREACHABLE;
L0:;
}

U32 f9925(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 si0,si1,si2;
si0=l1;
if(si0){
goto L2;
}
si0=0U;
l2=si0;
goto L1;
L2:;
si0=l0;
si1=l1;
si0+=si1;
l3=si0;
si0=0U;
l2=si0;
L3:;
{
si0=l2;
l4=si0;
si0=l0;
si0=i32_load8_s(&i->m0,(U64)si0);
l1=si0;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L5;
}
si0=l0;
si1=1U;
si0+=si1;
l0=si0;
si0=l1;
si1=255U;
si0&=si1;
l1=si0;
goto L4;
L5:;
si0=l0;
si0=i32_load8_u(&i->m0,(U64)si0+1U);
si1=63U;
si0&=si1;
l2=si0;
si0=l1;
si1=31U;
si0&=si1;
l5=si0;
si0=l1;
si1=-33U;
si0=si0 > si1;
if(si0){
goto L6;
}
si0=l5;
si1=6U;
si0<<=(si1&31);
si1=l2;
si0|=si1;
l1=si0;
si0=l0;
si1=2U;
si0+=si1;
l0=si0;
goto L4;
L6:;
si0=l2;
si1=6U;
si0<<=(si1&31);
si1=l0;
si1=i32_load8_u(&i->m0,(U64)si1+2U);
si2=63U;
si1&=si2;
si0|=si1;
l2=si0;
si0=l1;
si1=-16U;
si0=si0 >= si1;
if(si0){
goto L7;
}
si0=l2;
si1=l5;
si2=12U;
si1<<=(si2&31);
si0|=si1;
l1=si0;
si0=l0;
si1=3U;
si0+=si1;
l0=si0;
goto L4;
L7:;
si0=l2;
si1=6U;
si0<<=(si1&31);
si1=l0;
si1=i32_load8_u(&i->m0,(U64)si1+3U);
si2=63U;
si1&=si2;
si0|=si1;
si1=l5;
si2=18U;
si1<<=(si2&31);
si2=1835008U;
si1&=si2;
si0|=si1;
l1=si0;
si1=1114112U;
si0=si0 != si1;
if(si0){
goto L8;
}
si0=l4;
l2=si0;
goto L1;
L8:;
si0=l0;
si1=4U;
si0+=si1;
l0=si0;
L4:;
si0=0U;
l2=si0;
si0=l1;
si1=-65U;
si0+=si1;
si1=26U;
si0=si0 < si1;
if(si0){
goto L1;
}
si0=l1;
si1=128U;
si0=si0 < si1;
if(si0){
goto L11;
}
si0=l1;
si0=f808(i,si0);
si0=!(si0);
if(si0){
goto L10;
}
goto L1;
L11:;
si0=0U;
l2=si0;
si0=l4;
si1=1U;
si0&=si1;
if(si0){
goto L9;
}
si0=l1;
si1=-97U;
si0+=si1;
si1=26U;
si0=si0 < si1;
l2=si0;
goto L9;
L10:;
si0=0U;
l2=si0;
si0=l4;
si1=1U;
si0&=si1;
if(si0){
goto L9;
}
si0=l1;
si0=f806(i,si0);
l2=si0;
L9:;
si0=l2;
si1=l4;
si0|=si1;
l2=si0;
si0=l0;
si1=l3;
si0=si0 != si1;
if(si0){
goto L3;
}
}
L1:;
si0=l2;
si1=1U;
si0&=si1;
L0:;
return si0;
}

U32 f9926(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 si0,si1,si2;
si0=l1;
if(si0){
goto L2;
}
si0=0U;
l2=si0;
goto L1;
L2:;
si0=l0;
si1=l1;
si0+=si1;
l3=si0;
si0=0U;
l2=si0;
L3:;
{
si0=l2;
l4=si0;
si0=l0;
si0=i32_load8_s(&i->m0,(U64)si0);
l1=si0;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L5;
}
si0=l0;
si1=1U;
si0+=si1;
l0=si0;
si0=l1;
si1=255U;
si0&=si1;
l1=si0;
goto L4;
L5:;
si0=l0;
si0=i32_load8_u(&i->m0,(U64)si0+1U);
si1=63U;
si0&=si1;
l2=si0;
si0=l1;
si1=31U;
si0&=si1;
l5=si0;
si0=l1;
si1=-33U;
si0=si0 > si1;
if(si0){
goto L6;
}
si0=l5;
si1=6U;
si0<<=(si1&31);
si1=l2;
si0|=si1;
l1=si0;
si0=l0;
si1=2U;
si0+=si1;
l0=si0;
goto L4;
L6:;
si0=l2;
si1=6U;
si0<<=(si1&31);
si1=l0;
si1=i32_load8_u(&i->m0,(U64)si1+2U);
si2=63U;
si1&=si2;
si0|=si1;
l2=si0;
si0=l1;
si1=-16U;
si0=si0 >= si1;
if(si0){
goto L7;
}
si0=l2;
si1=l5;
si2=12U;
si1<<=(si2&31);
si0|=si1;
l1=si0;
si0=l0;
si1=3U;
si0+=si1;
l0=si0;
goto L4;
L7:;
si0=l2;
si1=6U;
si0<<=(si1&31);
si1=l0;
si1=i32_load8_u(&i->m0,(U64)si1+3U);
si2=63U;
si1&=si2;
si0|=si1;
si1=l5;
si2=18U;
si1<<=(si2&31);
si2=1835008U;
si1&=si2;
si0|=si1;
l1=si0;
si1=1114112U;
si0=si0 != si1;
if(si0){
goto L8;
}
si0=l4;
l2=si0;
goto L1;
L8:;
si0=l0;
si1=4U;
si0+=si1;
l0=si0;
L4:;
si0=0U;
l2=si0;
si0=l1;
si1=-97U;
si0+=si1;
si1=26U;
si0=si0 < si1;
if(si0){
goto L1;
}
si0=l1;
si1=128U;
si0=si0 < si1;
if(si0){
goto L11;
}
si0=l1;
si0=f806(i,si0);
si0=!(si0);
if(si0){
goto L10;
}
goto L1;
L11:;
si0=0U;
l2=si0;
si0=l4;
si1=1U;
si0&=si1;
if(si0){
goto L9;
}
si0=l1;
si1=-65U;
si0+=si1;
si1=26U;
si0=si0 < si1;
l2=si0;
goto L9;
L10:;
si0=0U;
l2=si0;
si0=l4;
si1=1U;
si0&=si1;
if(si0){
goto L9;
}
si0=l1;
si0=f808(i,si0);
l2=si0;
L9:;
si0=l2;
si1=l4;
si0|=si1;
l2=si0;
si0=l0;
si1=l3;
si0=si0 != si1;
if(si0){
goto L3;
}
}
L1:;
si0=l2;
si1=1U;
si0&=si1;
L0:;
return si0;
}

void f9927(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4) {
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 l8=0;
U32 l9=0;
U32 l10=0;
U32 l11=0;
U32 si0,si1,si2,si3,si4,si5;
U64 sj0,sj1,sj2;
si0=i->g0;
si1=80U;
si0-=si1;
l5=si0;
i->g0=si0;
si0=l5;
si1=40U;
si0+=si1;
si1=l4;
si2=l1;
f10461(i,si0,si1,si2);
si0=l5;
si0=i32_load(&i->m0,(U64)si0+40U);
l6=si0;
si0=!(si0);
if(si0){
goto L2;
}
si0=l5;
si0=i32_load(&i->m0,(U64)si0+44U);
l7=si0;
si0=0U;
l8=si0;
si0=l2;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=l5;
si1=i32_load(&i->m0,(U64)si1+48U);
l4=si1;
si0=si0 < si1;
if(si0){
goto L3;
}
si0=l6;
si1=l2;
si1=i32_load(&i->m0,(U64)si1+4U);
si2=l4;
si0=f15389(i,si0,si1,si2);
si0=!(si0);
l8=si0;
L3:;
si0=l7;
si0=!(si0);
if(si0){
goto L4;
}
si0=l6;
f15271(i,si0);
L4:;
si0=l0;
si1=0U;
i32_store8(&i->m0,(U64)si0,si1);
si0=l0;
si1=l8;
i32_store8(&i->m0,(U64)si0+1U,si1);
goto L1;
L2:;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+44U);
l9=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+88U);
l10=si0;
si1=176U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l11=si0;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+28U);
l8=si1;
si0=si0 == si1;
if(si0){
goto L11;
}
si0=l8;
si1=468U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=2U;
si0<<=(si1&31);
l6=si0;
si0=l8;
si1=460U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l8=si0;
L12:;
{
si0=l6;
si0=!(si0);
if(si0){
goto L10;
}
si0=l6;
si1=-4U;
si0+=si1;
l6=si0;
si0=l8;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
si0=l8;
si1=4U;
si0+=si1;
l8=si0;
si0=l7;
si1=l11;
si0=si0 != si1;
if(si0){
goto L12;
}
}
L11:;
si0=l1;
sj0=i64_load(&i->m0,(U64)si0+8U);
sj1=6024102831536450768ULL;
sj0^=sj1;
si1=l1;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
sj2=-3796322966896913709ULL;
sj1^=sj2;
sj0|=sj1;
si0=!(sj0);
if(si0){
goto L13;
}
si0=l4;
si1=1682360U;
si2=7U;
si3=l10;
si4=476U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si4=l11;
si5=l1;
si0=f7151(i,si0,si1,si2,si3,si4,si5);
l6=si0;
goto L9;
L13:;
si0=l1;
si1=60U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=2U;
si0<<=(si1&31);
l6=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+56U);
l8=si0;
L16:;
{
si0=l6;
si0=!(si0);
if(si0){
goto L15;
}
si0=l5;
si1=40U;
si0+=si1;
si1=l8;
si1=i32_load(&i->m0,(U64)si1);
si2=l2;
si3=l3;
si4=l4;
f9927(i,si0,si1,si2,si3,si4);
si0=l5;
si0=i32_load8_u(&i->m0,(U64)si0+40U);
if(si0){
goto L14;
}
si0=l6;
si1=-4U;
si0+=si1;
l6=si0;
si0=l8;
si1=4U;
si0+=si1;
l8=si0;
si0=l5;
si0=i32_load8_u(&i->m0,(U64)si0+41U);
si1=255U;
si0&=si1;
si0=!(si0);
if(si0){
goto L16;
}
}
si0=l0;
si1=1U;
i32_store8(&i->m0,(U64)si0+1U,si1);
si0=0U;
l6=si0;
goto L7;
L15:;
si0=l0;
si1=0U;
i32_store16(&i->m0,(U64)si0,si1);
si0=l9;
si1=l9;
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
goto L5;
L14:;
si0=l0;
si1=l5;
si1=i32_load(&i->m0,(U64)si1+44U);
i32_store(&i->m0,(U64)si0+4U,si1);
goto L8;
L10:;
si0=l4;
si1=1679036U;
si2=4U;
si3=l10;
si4=504U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si4=l11;
si5=l1;
si0=f7151(i,si0,si1,si2,si3,si4,si5);
l6=si0;
L9:;
si0=l3;
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l8=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
si0=l5;
si1=16U;
si0+=si1;
si1=12U;
si0+=si1;
sj1=4ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=68U;
si0+=si1;
si1=1843U;
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=60U;
si0+=si1;
si1=1215U;
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=40U;
si0+=si1;
si1=12U;
si0+=si1;
si1=1215U;
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=4U;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l5;
si1=1835088U;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l5;
si1=l8;
i32_store(&i->m0,(U64)si0+56U,si1);
si0=l5;
si1=l8;
i32_store(&i->m0,(U64)si0+48U,si1);
si0=l5;
si1=1215U;
i32_store(&i->m0,(U64)si0+44U,si1);
si0=l5;
si1=l7;
i32_store(&i->m0,(U64)si0+40U,si1);
si0=l5;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+28U);
i32_store(&i->m0,(U64)si0+76U,si1);
si0=l5;
si1=l5;
si2=40U;
si1+=si2;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l5;
si1=l5;
si2=76U;
si1+=si2;
i32_store(&i->m0,(U64)si0+64U,si1);
si0=l5;
si1=l5;
si2=16U;
si1+=si2;
f63(i,si0,si1);
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
goto L6;
}
si0=l4;
si1=l8;
si2=l5;
si0=f7173(i,si0,si1,si2);
l8=si0;
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
goto L17;
}
si0=l6;
f7690(i,si0);
L17:;
si0=l0;
si1=l8;
i32_store(&i->m0,(U64)si0+4U,si1);
L8:;
si0=1U;
l6=si0;
L7:;
si0=l0;
si1=l6;
i32_store8(&i->m0,(U64)si0,si1);
si0=l9;
si1=l9;
si1=i32_load(&i->m0,(U64)si1);
l6=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l6;
si1=1U;
si0=si0 == si1;
if(si0){
goto L5;
}
goto L1;
L6:;
f15042(i);
UNREACHABLE;
L5:;
si0=l9;
f7690(i,si0);
L1:;
si0=l5;
si1=80U;
si0+=si1;
i->g0=si0;
L0:;
}

void f9928(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4) {
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 l8=0;
U32 l9=0;
U32 l10=0;
U32 l11=0;
U32 si0,si1,si2,si3,si4,si5;
U64 sj0,sj1,sj2;
si0=i->g0;
si1=80U;
si0-=si1;
l5=si0;
i->g0=si0;
si0=l5;
si1=40U;
si0+=si1;
si1=l4;
si2=l1;
f10461(i,si0,si1,si2);
si0=l5;
si0=i32_load(&i->m0,(U64)si0+40U);
l6=si0;
si0=!(si0);
if(si0){
goto L2;
}
si0=l5;
si0=i32_load(&i->m0,(U64)si0+44U);
l7=si0;
si0=0U;
l8=si0;
si0=l2;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l9=si0;
si1=l5;
si1=i32_load(&i->m0,(U64)si1+48U);
l4=si1;
si0=si0 < si1;
if(si0){
goto L3;
}
si0=l6;
si1=l2;
si1=i32_load(&i->m0,(U64)si1+4U);
si2=l9;
si3=l4;
si2-=si3;
si1+=si2;
si2=l4;
si0=f15389(i,si0,si1,si2);
si0=!(si0);
l8=si0;
L3:;
si0=l7;
si0=!(si0);
if(si0){
goto L4;
}
si0=l6;
f15271(i,si0);
L4:;
si0=l0;
si1=0U;
i32_store8(&i->m0,(U64)si0,si1);
si0=l0;
si1=l8;
i32_store8(&i->m0,(U64)si0+1U,si1);
goto L1;
L2:;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+44U);
l10=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+88U);
l11=si0;
si1=176U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l9=si0;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+28U);
l8=si1;
si0=si0 == si1;
if(si0){
goto L11;
}
si0=l8;
si1=468U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=2U;
si0<<=(si1&31);
l6=si0;
si0=l8;
si1=460U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l8=si0;
L12:;
{
si0=l6;
si0=!(si0);
if(si0){
goto L10;
}
si0=l6;
si1=-4U;
si0+=si1;
l6=si0;
si0=l8;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
si0=l8;
si1=4U;
si0+=si1;
l8=si0;
si0=l7;
si1=l9;
si0=si0 != si1;
if(si0){
goto L12;
}
}
L11:;
si0=l1;
sj0=i64_load(&i->m0,(U64)si0+8U);
sj1=6024102831536450768ULL;
sj0^=sj1;
si1=l1;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
sj2=-3796322966896913709ULL;
sj1^=sj2;
sj0|=sj1;
si0=!(sj0);
if(si0){
goto L13;
}
si0=l4;
si1=1682360U;
si2=7U;
si3=l11;
si4=476U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si4=l9;
si5=l1;
si0=f7151(i,si0,si1,si2,si3,si4,si5);
l6=si0;
goto L9;
L13:;
si0=l1;
si1=60U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=2U;
si0<<=(si1&31);
l6=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+56U);
l8=si0;
L16:;
{
si0=l6;
si0=!(si0);
if(si0){
goto L15;
}
si0=l5;
si1=40U;
si0+=si1;
si1=l8;
si1=i32_load(&i->m0,(U64)si1);
si2=l2;
si3=l3;
si4=l4;
f9928(i,si0,si1,si2,si3,si4);
si0=l5;
si0=i32_load8_u(&i->m0,(U64)si0+40U);
if(si0){
goto L14;
}
si0=l6;
si1=-4U;
si0+=si1;
l6=si0;
si0=l8;
si1=4U;
si0+=si1;
l8=si0;
si0=l5;
si0=i32_load8_u(&i->m0,(U64)si0+41U);
si1=255U;
si0&=si1;
si0=!(si0);
if(si0){
goto L16;
}
}
si0=l0;
si1=1U;
i32_store8(&i->m0,(U64)si0+1U,si1);
si0=0U;
l6=si0;
goto L7;
L15:;
si0=l0;
si1=0U;
i32_store16(&i->m0,(U64)si0,si1);
si0=l10;
si1=l10;
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
goto L5;
L14:;
si0=l0;
si1=l5;
si1=i32_load(&i->m0,(U64)si1+44U);
i32_store(&i->m0,(U64)si0+4U,si1);
goto L8;
L10:;
si0=l4;
si1=1679036U;
si2=4U;
si3=l11;
si4=504U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si4=l9;
si5=l1;
si0=f7151(i,si0,si1,si2,si3,si4,si5);
l6=si0;
L9:;
si0=l3;
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l8=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
si0=l5;
si1=16U;
si0+=si1;
si1=12U;
si0+=si1;
sj1=4ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=68U;
si0+=si1;
si1=1843U;
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=60U;
si0+=si1;
si1=1215U;
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=40U;
si0+=si1;
si1=12U;
si0+=si1;
si1=1215U;
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=4U;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l5;
si1=1835088U;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l5;
si1=l8;
i32_store(&i->m0,(U64)si0+56U,si1);
si0=l5;
si1=l8;
i32_store(&i->m0,(U64)si0+48U,si1);
si0=l5;
si1=1215U;
i32_store(&i->m0,(U64)si0+44U,si1);
si0=l5;
si1=l7;
i32_store(&i->m0,(U64)si0+40U,si1);
si0=l5;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+28U);
i32_store(&i->m0,(U64)si0+76U,si1);
si0=l5;
si1=l5;
si2=40U;
si1+=si2;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l5;
si1=l5;
si2=76U;
si1+=si2;
i32_store(&i->m0,(U64)si0+64U,si1);
si0=l5;
si1=l5;
si2=16U;
si1+=si2;
f63(i,si0,si1);
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
goto L6;
}
si0=l4;
si1=l8;
si2=l5;
si0=f7173(i,si0,si1,si2);
l8=si0;
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
goto L17;
}
si0=l6;
f7690(i,si0);
L17:;
si0=l0;
si1=l8;
i32_store(&i->m0,(U64)si0+4U,si1);
L8:;
si0=1U;
l6=si0;
L7:;
si0=l0;
si1=l6;
i32_store8(&i->m0,(U64)si0,si1);
si0=l10;
si1=l10;
si1=i32_load(&i->m0,(U64)si1);
l6=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l6;
si1=1U;
si0=si0 == si1;
if(si0){
goto L5;
}
goto L1;
L6:;
f15042(i);
UNREACHABLE;
L5:;
si0=l10;
f7690(i,si0);
L1:;
si0=l5;
si1=80U;
si0+=si1;
i->g0=si0;
L0:;
}

void f9929(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4) {
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 l8=0;
U32 l9=0;
U32 l10=0;
U32 l11=0;
U32 si0,si1,si2,si3,si4,si5;
U64 sj0,sj1,sj2;
si0=i->g0;
si1=80U;
si0-=si1;
l5=si0;
i->g0=si0;
si0=l5;
si1=40U;
si0+=si1;
si1=l4;
si2=l1;
f10461(i,si0,si1,si2);
si0=l5;
si0=i32_load(&i->m0,(U64)si0+40U);
l6=si0;
si0=!(si0);
if(si0){
goto L2;
}
si0=l5;
si0=i32_load(&i->m0,(U64)si0+44U);
l7=si0;
si0=0U;
l8=si0;
si0=l2;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=l5;
si1=i32_load(&i->m0,(U64)si1+48U);
l4=si1;
si0=si0 < si1;
if(si0){
goto L3;
}
si0=l6;
si1=l2;
si1=i32_load(&i->m0,(U64)si1+4U);
si2=l4;
si0=f15389(i,si0,si1,si2);
si0=!(si0);
l8=si0;
L3:;
si0=l7;
si0=!(si0);
if(si0){
goto L4;
}
si0=l6;
f15271(i,si0);
L4:;
si0=l0;
si1=0U;
i32_store8(&i->m0,(U64)si0,si1);
si0=l0;
si1=l8;
i32_store8(&i->m0,(U64)si0+1U,si1);
goto L1;
L2:;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+44U);
l9=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+88U);
l10=si0;
si1=176U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l11=si0;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+28U);
l8=si1;
si0=si0 == si1;
if(si0){
goto L11;
}
si0=l8;
si1=468U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=2U;
si0<<=(si1&31);
l6=si0;
si0=l8;
si1=460U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l8=si0;
L12:;
{
si0=l6;
si0=!(si0);
if(si0){
goto L10;
}
si0=l6;
si1=-4U;
si0+=si1;
l6=si0;
si0=l8;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
si0=l8;
si1=4U;
si0+=si1;
l8=si0;
si0=l7;
si1=l11;
si0=si0 != si1;
if(si0){
goto L12;
}
}
L11:;
si0=l1;
sj0=i64_load(&i->m0,(U64)si0+8U);
sj1=6024102831536450768ULL;
sj0^=sj1;
si1=l1;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
sj2=-3796322966896913709ULL;
sj1^=sj2;
sj0|=sj1;
si0=!(sj0);
if(si0){
goto L13;
}
si0=l4;
si1=1682360U;
si2=7U;
si3=l10;
si4=476U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si4=l11;
si5=l1;
si0=f7151(i,si0,si1,si2,si3,si4,si5);
l6=si0;
goto L9;
L13:;
si0=l1;
si1=60U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=2U;
si0<<=(si1&31);
l6=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+56U);
l8=si0;
L16:;
{
si0=l6;
si0=!(si0);
if(si0){
goto L15;
}
si0=l5;
si1=40U;
si0+=si1;
si1=l8;
si1=i32_load(&i->m0,(U64)si1);
si2=l2;
si3=l3;
si4=l4;
f9929(i,si0,si1,si2,si3,si4);
si0=l5;
si0=i32_load8_u(&i->m0,(U64)si0+40U);
if(si0){
goto L14;
}
si0=l6;
si1=-4U;
si0+=si1;
l6=si0;
si0=l8;
si1=4U;
si0+=si1;
l8=si0;
si0=l5;
si0=i32_load8_u(&i->m0,(U64)si0+41U);
si1=255U;
si0&=si1;
si0=!(si0);
if(si0){
goto L16;
}
}
si0=l0;
si1=1U;
i32_store8(&i->m0,(U64)si0+1U,si1);
si0=0U;
l6=si0;
goto L7;
L15:;
si0=l0;
si1=0U;
i32_store16(&i->m0,(U64)si0,si1);
si0=l9;
si1=l9;
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
goto L5;
L14:;
si0=l0;
si1=l5;
si1=i32_load(&i->m0,(U64)si1+44U);
i32_store(&i->m0,(U64)si0+4U,si1);
goto L8;
L10:;
si0=l4;
si1=1679036U;
si2=4U;
si3=l10;
si4=504U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si4=l11;
si5=l1;
si0=f7151(i,si0,si1,si2,si3,si4,si5);
l6=si0;
L9:;
si0=l3;
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l8=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
si0=l5;
si1=16U;
si0+=si1;
si1=12U;
si0+=si1;
sj1=4ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=68U;
si0+=si1;
si1=1843U;
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=60U;
si0+=si1;
si1=1215U;
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=40U;
si0+=si1;
si1=12U;
si0+=si1;
si1=1215U;
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=4U;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l5;
si1=1835088U;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l5;
si1=l8;
i32_store(&i->m0,(U64)si0+56U,si1);
si0=l5;
si1=l8;
i32_store(&i->m0,(U64)si0+48U,si1);
si0=l5;
si1=1215U;
i32_store(&i->m0,(U64)si0+44U,si1);
si0=l5;
si1=l7;
i32_store(&i->m0,(U64)si0+40U,si1);
si0=l5;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+28U);
i32_store(&i->m0,(U64)si0+76U,si1);
si0=l5;
si1=l5;
si2=40U;
si1+=si2;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l5;
si1=l5;
si2=76U;
si1+=si2;
i32_store(&i->m0,(U64)si0+64U,si1);
si0=l5;
si1=l5;
si2=16U;
si1+=si2;
f63(i,si0,si1);
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
goto L6;
}
si0=l4;
si1=l8;
si2=l5;
si0=f7173(i,si0,si1,si2);
l8=si0;
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
goto L17;
}
si0=l6;
f7690(i,si0);
L17:;
si0=l0;
si1=l8;
i32_store(&i->m0,(U64)si0+4U,si1);
L8:;
si0=1U;
l6=si0;
L7:;
si0=l0;
si1=l6;
i32_store8(&i->m0,(U64)si0,si1);
si0=l9;
si1=l9;
si1=i32_load(&i->m0,(U64)si1);
l6=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l6;
si1=1U;
si0=si0 == si1;
if(si0){
goto L5;
}
goto L1;
L6:;
f15042(i);
UNREACHABLE;
L5:;
si0=l9;
f7690(i,si0);
L1:;
si0=l5;
si1=80U;
si0+=si1;
i->g0=si0;
L0:;
}


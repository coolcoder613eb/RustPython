#include "w2c2_base.h"

#include "rustpython.h"

void f3130(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U32 l4=0;
U32 l5=0;
U64 l6=0;
U32 l7=0;
U32 si0,si1,si2,si3;
U64 sj0,sj1;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+8U);
l3=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+4U);
l4=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si0=l1;
sj0=i64_load(&i->m0,(U64)si0);
l6=sj0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+12U);
l7=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+28U);
l2=si0;
si0=l1;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si1=1U;
si0=si0 != si1;
if(si0){
goto L6;
}
si0=l5;
si1=98U;
si0=si0 == si1;
if(si0){
goto L5;
}
L6:;
si0=l7;
si1=l2;
si0=si0 > si1;
if(si0){
goto L2;
}
si0=l0;
sj1=l6;
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l0;
si1=36U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=24U;
si0+=si1;
si1=0U;
i32_store8(&i->m0,(U64)si0,si1);
si0=l0;
si1=20U;
si0+=si1;
si1=l2;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=16U;
si0+=si1;
si1=l7;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=12U;
si0+=si1;
si1=l1;
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=98U;
si0=si0 == si1;
if(si0){
goto L3;
}
si0=l5;
si1=-2U;
si0+=si1;
l0=si0;
si1=1U;
si2=l0;
si3=96U;
si2=si2 < si3;
si0=si2?si0:si1;
switch(si0){
case 0:
goto L9;
case 1:
goto L8;
case 2:
goto L3;
case 3:
goto L3;
case 4:
goto L7;
default:
goto L3;
}
L9:;
si0=l3;
if(si0){
goto L4;
}
goto L3;
L8:;
si0=l5;
si0=!(si0);
if(si0){
goto L3;
}
L7:;
si0=l3;
if(si0){
goto L4;
}
goto L3;
L5:;
sj0=l6;
si0=(U32)(sj0);
l4=si0;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si1=38U;
si0=si0 == si1;
if(si0){
goto L1;
}
si0=l0;
si1=l2;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1+4U);
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l0;
si1=12U;
si0+=si1;
si1=l4;
si2=12U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=20U;
si0+=si1;
si1=l4;
si2=20U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=28U;
si0+=si1;
si1=l4;
si2=28U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=36U;
si0+=si1;
si1=l4;
si2=36U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=44U;
si0+=si1;
si1=l4;
si2=44U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
sj0=l6;
sj1=4294967296ULL;
si0=sj0 < sj1;
if(si0){
goto L3;
}
L4:;
si0=l4;
f15271(i,si0);
L3:;
goto L0;
L2:;
si0=1531300U;
si1=38U;
si2=1531440U;
f673(i,si0,si1,si2);
UNREACHABLE;
L1:;
si0=1531456U;
si1=43U;
si2=1531956U;
f673(i,si0,si1,si2);
UNREACHABLE;
L0:;
}

void f3131(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4) {
U32 l5=0;
U32 l6=0;
U32 si0,si1,si2,si3;
U64 sj1;
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
si0=l3;
si0=i32_load(&i->m0,(U64)si0+8U);
l0=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+4U);
l5=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si1=-2U;
si0+=si1;
l2=si0;
si1=1U;
si2=l2;
si3=96U;
si2=si2 < si3;
si0=si2?si0:si1;
switch(si0){
case 0:
goto L5;
case 1:
goto L4;
case 2:
goto L1;
case 3:
goto L1;
case 4:
goto L3;
default:
goto L1;
}
L5:;
si0=l4;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L1;
}
goto L2;
L4:;
si0=l6;
si0=!(si0);
if(si0){
goto L1;
}
si0=l4;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L2;
}
goto L1;
L3:;
si0=l4;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L1;
}
L2:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+4U);
f15271(i,si0);
L1:;
si0=l3;
si1=98U;
si0=si0 == si1;
if(si0){
goto L6;
}
si0=l3;
si1=-2U;
si0+=si1;
l4=si0;
si1=1U;
si2=l4;
si3=96U;
si2=si2 < si3;
si0=si2?si0:si1;
switch(si0){
case 0:
goto L10;
case 1:
goto L9;
case 2:
goto L6;
case 3:
goto L6;
case 4:
goto L8;
default:
goto L6;
}
L10:;
si0=l0;
si0=!(si0);
if(si0){
goto L6;
}
goto L7;
L9:;
si0=l3;
si0=!(si0);
if(si0){
goto L6;
}
L8:;
si0=l0;
si0=!(si0);
if(si0){
goto L6;
}
L7:;
si0=l5;
f15271(i,si0);
L6:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
si1=-2U;
si0+=si1;
l3=si0;
si1=1U;
si2=l3;
si3=96U;
si2=si2 < si3;
si0=si2?si0:si1;
switch(si0){
case 0:
goto L15;
case 1:
goto L14;
case 2:
goto L12;
case 3:
goto L12;
case 4:
goto L13;
default:
goto L12;
}
L15:;
si0=l1;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L12;
}
goto L11;
L14:;
si0=l4;
si0=!(si0);
if(si0){
goto L12;
}
si0=l1;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L11;
}
goto L12;
L13:;
si0=l1;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L11;
}
L12:;
goto L0;
L11:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
f15271(i,si0);
L0:;
}

void f3132(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 si0,si1,si2,si3;
U64 sj1;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+24U);
l2=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+28U);
l3=si0;
si0=32U;
si0=f15269(i,si0);
l4=si0;
si0=!(si0);
if(si0){
goto L4;
}
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=1U;
si0=f15269(i,si0);
l5=si0;
si0=!(si0);
if(si0){
goto L3;
}
si0=l5;
si1=42U;
i32_store8(&i->m0,(U64)si0,si1);
si0=l2;
si1=l3;
si0=si0 > si1;
if(si0){
goto L2;
}
si0=l4;
si1=0U;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l4;
si1=l3;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l4;
si1=l2;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l4;
sj1=4294967297ULL;
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l4;
si1=l5;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
sj1=4294967297ULL;
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l0;
si1=l4;
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si1=-2U;
si0+=si1;
l4=si0;
si1=1U;
si2=l4;
si3=96U;
si2=si2 < si3;
si0=si2?si0:si1;
switch(si0){
case 0:
goto L8;
case 1:
goto L7;
case 2:
goto L5;
case 3:
goto L5;
case 4:
goto L6;
default:
goto L5;
}
L8:;
si0=l1;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L5;
}
goto L1;
L7:;
si0=l2;
si0=!(si0);
if(si0){
goto L5;
}
si0=l1;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L1;
}
goto L5;
L6:;
si0=l1;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L1;
}
L5:;
goto L0;
L4:;
si0=4U;
si1=32U;
f52(i,si0,si1);
UNREACHABLE;
L3:;
si0=1U;
si1=1U;
f52(i,si0,si1);
UNREACHABLE;
L2:;
si0=1531300U;
si1=38U;
si2=1531440U;
f673(i,si0,si1,si2);
UNREACHABLE;
L1:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
f15271(i,si0);
L0:;
}

void f3133(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4) {
U32 l5=0;
U32 l6=0;
U32 si0,si1,si2,si3;
U64 sj1;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+24U);
l5=si0;
si1=l4;
si1=i32_load(&i->m0,(U64)si1+16U);
l6=si1;
si0=si0 > si1;
if(si0){
goto L3;
}
si0=l0;
si1=20U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l0;
si1=12U;
si0+=si1;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=28U;
si0+=si1;
si1=l6;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=24U;
si0+=si1;
si1=l5;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=32U;
si0+=si1;
si1=l2;
sj1=i64_load(&i->m0,(U64)si1+8U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=20U;
si0+=si1;
si1=l4;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=40U;
si0+=si1;
si1=l2;
si2=16U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
si1=-2U;
si0+=si1;
l0=si0;
si1=1U;
si2=l0;
si3=96U;
si2=si2 < si3;
si0=si2?si0:si1;
switch(si0){
case 0:
goto L6;
case 1:
goto L5;
case 2:
goto L1;
case 3:
goto L1;
case 4:
goto L4;
default:
goto L1;
}
L6:;
si0=l3;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L1;
}
goto L2;
L5:;
si0=l4;
si0=!(si0);
if(si0){
goto L1;
}
si0=l3;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L2;
}
goto L1;
L4:;
si0=l3;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L2;
}
goto L1;
L3:;
si0=1531300U;
si1=38U;
si2=1531440U;
f673(i,si0,si1,si2);
UNREACHABLE;
L2:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+4U);
f15271(i,si0);
L1:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
si1=-2U;
si0+=si1;
l0=si0;
si1=1U;
si2=l0;
si3=96U;
si2=si2 < si3;
si0=si2?si0:si1;
switch(si0){
case 0:
goto L11;
case 1:
goto L10;
case 2:
goto L8;
case 3:
goto L8;
case 4:
goto L9;
default:
goto L8;
}
L11:;
si0=l1;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L8;
}
goto L7;
L10:;
si0=l4;
si0=!(si0);
if(si0){
goto L8;
}
si0=l1;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L7;
}
goto L8;
L9:;
si0=l1;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L7;
}
L8:;
goto L0;
L7:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
f15271(i,si0);
L0:;
}

void f3134(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4) {
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
U64 sj1;
si0=i->g0;
si1=144U;
si0-=si1;
l5=si0;
i->g0=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+24U);
l6=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+52U);
l7=si0;
si0=l5;
si1=8U;
si0+=si1;
si1=40U;
si0+=si1;
si1=l2;
si2=44U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=8U;
si0+=si1;
si1=32U;
si0+=si1;
si1=l2;
si2=36U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=8U;
si0+=si1;
si1=24U;
si0+=si1;
si1=l2;
si2=28U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=8U;
si0+=si1;
si1=16U;
si0+=si1;
si1=l2;
si2=20U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=8U;
si0+=si1;
si1=8U;
si0+=si1;
si1=l2;
si2=12U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=l2;
sj1=i64_load(&i->m0,(U64)si1+4U);
i64_store(&i->m0,(U64)si0+8U,sj1);
si0=l5;
si1=56U;
si0+=si1;
si1=40U;
si0+=si1;
si1=l4;
si2=40U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=56U;
si0+=si1;
si1=32U;
si0+=si1;
si1=l4;
si2=32U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=56U;
si0+=si1;
si1=24U;
si0+=si1;
si1=l4;
si2=24U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=56U;
si0+=si1;
si1=16U;
si0+=si1;
si1=l4;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=56U;
si0+=si1;
si1=8U;
si0+=si1;
si1=l4;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+56U,sj1);
si0=l5;
si0=i32_load(&i->m0,(U64)si0+8U);
si0=!(si0);
if(si0){
goto L3;
}
si0=l5;
si1=120U;
si0+=si1;
si1=l5;
si2=8U;
si1+=si2;
f3474(i,si0,si1);
si0=l5;
si1=l5;
sj1=i64_load(&i->m0,(U64)si1+125U);
i64_store(&i->m0,(U64)si0+104U,sj1);
si0=l5;
si1=l5;
si2=120U;
si1+=si2;
si2=12U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+111U,sj1);
si0=l5;
si0=i32_load(&i->m0,(U64)si0+120U);
l4=si0;
si1=-2U;
si0&=si1;
si1=16U;
si0=si0 != si1;
if(si0){
goto L4;
}
si0=l5;
si0=i32_load(&i->m0,(U64)si0+8U);
l2=si0;
si0=!(si0);
if(si0){
goto L3;
}
si0=l5;
si0=i32_load(&i->m0,(U64)si0+12U);
l8=si0;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+16U);
l9=si0;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+20U);
l10=si0;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+24U);
l11=si0;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+28U);
l12=si0;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+32U);
l13=si0;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+36U);
l14=si0;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+40U);
l15=si0;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+44U);
l16=si0;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+48U);
l17=si0;
goto L2;
L4:;
si0=l5;
si0=i32_load8_u(&i->m0,(U64)si0+124U);
l2=si0;
si0=l0;
si1=l5;
sj1=i64_load(&i->m0,(U64)si1+104U);
i64_store(&i->m0,(U64)si0+17U,sj1);
si0=l0;
si1=24U;
si0+=si1;
si1=l5;
sj1=i64_load(&i->m0,(U64)si1+111U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=16U;
si0+=si1;
si1=l2;
i32_store8(&i->m0,(U64)si0,si1);
si0=l0;
si1=12U;
si0+=si1;
si1=l4;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=4U;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l0;
sj1=1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=56U;
si0+=si1;
f3007(i,si0);
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si1=-2U;
si0+=si1;
l4=si0;
si1=1U;
si2=l4;
si3=96U;
si2=si2 < si3;
si0=si2?si0:si1;
switch(si0){
case 0:
goto L9;
case 1:
goto L8;
case 2:
goto L5;
case 3:
goto L5;
case 4:
goto L7;
default:
goto L5;
}
L9:;
si0=l3;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L5;
}
goto L6;
L8:;
si0=l2;
si0=!(si0);
if(si0){
goto L5;
}
si0=l3;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L6;
}
goto L5;
L7:;
si0=l3;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L5;
}
L6:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+4U);
f15271(i,si0);
L5:;
si0=l5;
si1=8U;
si0+=si1;
f3009(i,si0);
goto L1;
L3:;
si0=0U;
l8=si0;
si0=4U;
l2=si0;
si0=0U;
l9=si0;
si0=4U;
l10=si0;
si0=0U;
l11=si0;
si0=0U;
l12=si0;
si0=4U;
l13=si0;
si0=0U;
l17=si0;
si0=0U;
l16=si0;
si0=0U;
l14=si0;
si0=0U;
l15=si0;
L2:;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=44U;
si0=f15269(i,si0);
l4=si0;
si0=!(si0);
if(si0){
goto L13;
}
si0=l4;
si1=l17;
i32_store(&i->m0,(U64)si0+40U,si1);
si0=l4;
si1=l16;
i32_store(&i->m0,(U64)si0+36U,si1);
si0=l4;
si1=l15;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l4;
si1=l14;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l4;
si1=l13;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l4;
si1=l12;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l4;
si1=l11;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l4;
si1=l10;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l4;
si1=l9;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l4;
si1=l8;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l4;
si1=l2;
i32_store(&i->m0,(U64)si0,si1);
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=48U;
si0=f15269(i,si0);
l2=si0;
si0=!(si0);
if(si0){
goto L12;
}
si0=l2;
si1=l5;
sj1=i64_load(&i->m0,(U64)si1+56U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=40U;
si0+=si1;
si1=l5;
si2=56U;
si1+=si2;
si2=40U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=32U;
si0+=si1;
si1=l5;
si2=56U;
si1+=si2;
si2=32U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=24U;
si0+=si1;
si1=l5;
si2=56U;
si1+=si2;
si2=24U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=16U;
si0+=si1;
si1=l5;
si2=56U;
si1+=si2;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=8U;
si0+=si1;
si1=l5;
si2=56U;
si1+=si2;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l6;
si1=l7;
si0=si0 > si1;
if(si0){
goto L11;
}
si0=l0;
si1=15U;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l0;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=24U;
si0+=si1;
si1=l7;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=20U;
si0+=si1;
si1=l6;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=16U;
si0+=si1;
si1=l2;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=12U;
si0+=si1;
si1=l4;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si1=-2U;
si0+=si1;
l4=si0;
si1=1U;
si2=l4;
si3=96U;
si2=si2 < si3;
si0=si2?si0:si1;
switch(si0){
case 0:
goto L16;
case 1:
goto L15;
case 2:
goto L1;
case 3:
goto L1;
case 4:
goto L14;
default:
goto L1;
}
L16:;
si0=l3;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L1;
}
goto L10;
L15:;
si0=l2;
si0=!(si0);
if(si0){
goto L1;
}
si0=l3;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L10;
}
goto L1;
L14:;
si0=l3;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L10;
}
goto L1;
L13:;
si0=4U;
si1=44U;
f52(i,si0,si1);
UNREACHABLE;
L12:;
si0=8U;
si1=48U;
f52(i,si0,si1);
UNREACHABLE;
L11:;
si0=1531300U;
si1=38U;
si2=1531440U;
f673(i,si0,si1,si2);
UNREACHABLE;
L10:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+4U);
f15271(i,si0);
L1:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si1=-2U;
si0+=si1;
l4=si0;
si1=1U;
si2=l4;
si3=96U;
si2=si2 < si3;
si0=si2?si0:si1;
switch(si0){
case 0:
goto L21;
case 1:
goto L20;
case 2:
goto L17;
case 3:
goto L17;
case 4:
goto L19;
default:
goto L17;
}
L21:;
si0=l1;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L17;
}
goto L18;
L20:;
si0=l2;
si0=!(si0);
if(si0){
goto L17;
}
si0=l1;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L18;
}
goto L17;
L19:;
si0=l1;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L17;
}
L18:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
f15271(i,si0);
L17:;
si0=l5;
si1=144U;
si0+=si1;
i->g0=si0;
L0:;
}

void f3135(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U64 l8=0;
U64 l9=0;
U32 si0,si1,si2;
U64 sj1;
si0=i->g0;
si1=112U;
si0-=si1;
l2=si0;
i->g0=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+12U);
l3=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+16U);
l4=si0;
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
si0=l2;
si1=40U;
si0+=si1;
si1=l2;
f3416(i,si0,si1);
si0=l2;
si0=i32_load(&i->m0,(U64)si0+40U);
l5=si0;
si1=38U;
si0=si0 == si1;
if(si0){
goto L3;
}
si0=l2;
si1=16U;
si0+=si1;
si1=16U;
si0+=si1;
l6=si0;
si1=l2;
si2=40U;
si1+=si2;
si2=20U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=16U;
si0+=si1;
si1=8U;
si0+=si1;
si1=l2;
si2=40U;
si1+=si2;
si2=12U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=88U;
si0+=si1;
si1=8U;
si0+=si1;
si1=l2;
si2=40U;
si1+=si2;
si2=32U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=88U;
si0+=si1;
si1=16U;
si0+=si1;
l7=si0;
si1=l2;
si2=40U;
si1+=si2;
si2=40U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=l2;
sj1=i64_load(&i->m0,(U64)si1+44U);
i64_store(&i->m0,(U64)si0+16U,sj1);
si0=l2;
si1=l2;
sj1=i64_load(&i->m0,(U64)si1+64U);
i64_store(&i->m0,(U64)si0+88U,sj1);
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=48U;
si0=f15269(i,si0);
l1=si0;
si0=!(si0);
if(si0){
goto L1;
}
si0=l1;
si1=l5;
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
si1=l2;
sj1=i64_load(&i->m0,(U64)si1+16U);
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l1;
si1=l2;
sj1=i64_load(&i->m0,(U64)si1+88U);
i64_store(&i->m0,(U64)si0+24U,sj1);
si0=l1;
si1=12U;
si0+=si1;
si1=l2;
si2=16U;
si1+=si2;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si1=20U;
si0+=si1;
si1=l6;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
si1=32U;
si0+=si1;
si1=l2;
si2=88U;
si1+=si2;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si1=40U;
si0+=si1;
si1=l7;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=l4;
si0=si0 > si1;
if(si0){
goto L4;
}
si0=l0;
si1=l4;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l0;
si1=l3;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l0;
si1=l1;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
goto L2;
L4:;
si0=1531300U;
si1=38U;
si2=1531440U;
f673(i,si0,si1,si2);
UNREACHABLE;
L3:;
si0=l2;
si1=32U;
si0+=si1;
si1=l2;
si2=40U;
si1+=si2;
si2=20U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
l1=si1;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=16U;
si0+=si1;
si1=8U;
si0+=si1;
si1=l2;
si2=40U;
si1+=si2;
si2=12U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
l8=sj1;
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=l2;
sj1=i64_load(&i->m0,(U64)si1+44U);
l9=sj1;
i64_store(&i->m0,(U64)si0+16U,sj1);
si0=l0;
si1=4U;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l0;
si1=12U;
si0+=si1;
sj1=l9;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=20U;
si0+=si1;
sj1=l8;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=28U;
si0+=si1;
si1=l1;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=8U;
i32_store(&i->m0,(U64)si0,si1);
L2:;
si0=l2;
si1=112U;
si0+=si1;
i->g0=si0;
goto L0;
L1:;
si0=8U;
si1=48U;
f52(i,si0,si1);
UNREACHABLE;
L0:;
}

void f3136(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U32 l4=0;
U32 si0,si1,si2,si3;
U64 sj1;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+24U);
l3=si0;
si1=l2;
si1=i32_load(&i->m0,(U64)si1+28U);
l4=si1;
si0=si0 > si1;
if(si0){
goto L3;
}
si0=l0;
sj1=34359738371ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=36U;
si0+=si1;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=32U;
si0+=si1;
si1=l4;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=28U;
si0+=si1;
si1=l3;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=24U;
si0+=si1;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=16U;
si0+=si1;
sj1=8ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=8U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si1=-2U;
si0+=si1;
l0=si0;
si1=1U;
si2=l0;
si3=96U;
si2=si2 < si3;
si0=si2?si0:si1;
switch(si0){
case 0:
goto L6;
case 1:
goto L5;
case 2:
goto L1;
case 3:
goto L1;
case 4:
goto L4;
default:
goto L1;
}
L6:;
si0=l2;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L1;
}
goto L2;
L5:;
si0=l3;
si0=!(si0);
if(si0){
goto L1;
}
si0=l2;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L2;
}
goto L1;
L4:;
si0=l2;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L2;
}
goto L1;
L3:;
si0=1531300U;
si1=38U;
si2=1531440U;
f673(i,si0,si1,si2);
UNREACHABLE;
L2:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+4U);
f15271(i,si0);
L1:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si1=-2U;
si0+=si1;
l0=si0;
si1=1U;
si2=l0;
si3=96U;
si2=si2 < si3;
si0=si2?si0:si1;
switch(si0){
case 0:
goto L11;
case 1:
goto L10;
case 2:
goto L8;
case 3:
goto L8;
case 4:
goto L9;
default:
goto L8;
}
L11:;
si0=l1;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L8;
}
goto L7;
L10:;
si0=l2;
si0=!(si0);
if(si0){
goto L8;
}
si0=l1;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L7;
}
goto L8;
L9:;
si0=l1;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L7;
}
L8:;
goto L0;
L7:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
f15271(i,si0);
L0:;
}

void f3137(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4,U32 l5) {
U32 l6=0;
U32 l7=0;
U32 l8=0;
U32 l9=0;
U32 si0,si1,si2,si3;
U64 sj1;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+24U);
l6=si0;
si1=l5;
si1=i32_load(&i->m0,(U64)si1+28U);
l7=si1;
si0=si0 > si1;
if(si0){
goto L3;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0+8U);
l8=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+4U);
l9=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
si0=l0;
sj1=34359738371ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=32U;
si0+=si1;
si1=l7;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=28U;
si0+=si1;
si1=l6;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=24U;
si0+=si1;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=16U;
si0+=si1;
sj1=8ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=8U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=36U;
si0+=si1;
si1=l3;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=44U;
si0+=si1;
si1=l3;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si1=-2U;
si0+=si1;
l0=si0;
si1=1U;
si2=l0;
si3=96U;
si2=si2 < si3;
si0=si2?si0:si1;
switch(si0){
case 0:
goto L6;
case 1:
goto L5;
case 2:
goto L1;
case 3:
goto L1;
case 4:
goto L4;
default:
goto L1;
}
L6:;
si0=l5;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L1;
}
goto L2;
L5:;
si0=l3;
si0=!(si0);
if(si0){
goto L1;
}
si0=l5;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L2;
}
goto L1;
L4:;
si0=l5;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L2;
}
goto L1;
L3:;
si0=1531300U;
si1=38U;
si2=1531440U;
f673(i,si0,si1,si2);
UNREACHABLE;
L2:;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+4U);
f15271(i,si0);
L1:;
si0=l4;
si1=98U;
si0=si0 == si1;
if(si0){
goto L7;
}
si0=l4;
si1=-2U;
si0+=si1;
l0=si0;
si1=1U;
si2=l0;
si3=96U;
si2=si2 < si3;
si0=si2?si0:si1;
switch(si0){
case 0:
goto L9;
case 1:
goto L11;
case 2:
goto L7;
case 3:
goto L7;
case 4:
goto L10;
default:
goto L7;
}
L11:;
si0=l4;
si0=!(si0);
if(si0){
goto L7;
}
L10:;
si0=l8;
si0=!(si0);
if(si0){
goto L7;
}
goto L8;
L9:;
si0=l8;
si0=!(si0);
if(si0){
goto L7;
}
L8:;
si0=l9;
f15271(i,si0);
L7:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si1=-2U;
si0+=si1;
l0=si0;
si1=1U;
si2=l0;
si3=96U;
si2=si2 < si3;
si0=si2?si0:si1;
switch(si0){
case 0:
goto L16;
case 1:
goto L15;
case 2:
goto L12;
case 3:
goto L12;
case 4:
goto L14;
default:
goto L12;
}
L16:;
si0=l2;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L12;
}
goto L13;
L15:;
si0=l5;
si0=!(si0);
if(si0){
goto L12;
}
si0=l2;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L13;
}
goto L12;
L14:;
si0=l2;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L12;
}
L13:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+4U);
f15271(i,si0);
L12:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si1=-2U;
si0+=si1;
l0=si0;
si1=1U;
si2=l0;
si3=96U;
si2=si2 < si3;
si0=si2?si0:si1;
switch(si0){
case 0:
goto L21;
case 1:
goto L20;
case 2:
goto L18;
case 3:
goto L18;
case 4:
goto L19;
default:
goto L18;
}
L21:;
si0=l1;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L18;
}
goto L17;
L20:;
si0=l5;
si0=!(si0);
if(si0){
goto L18;
}
si0=l1;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L17;
}
goto L18;
L19:;
si0=l1;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L17;
}
L18:;
goto L0;
L17:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
f15271(i,si0);
L0:;
}

void f3138(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4) {
U32 l5=0;
U32 l6=0;
U32 si0,si1,si2,si3;
U64 sj1;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+24U);
l5=si0;
si1=l4;
si1=i32_load(&i->m0,(U64)si1+28U);
l6=si1;
si0=si0 > si1;
if(si0){
goto L3;
}
si0=l0;
sj1=34359738371ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=32U;
si0+=si1;
si1=l6;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=28U;
si0+=si1;
si1=l5;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=24U;
si0+=si1;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=16U;
si0+=si1;
sj1=8ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=8U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=36U;
si0+=si1;
si1=l3;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=44U;
si0+=si1;
si1=l3;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si1=-2U;
si0+=si1;
l0=si0;
si1=1U;
si2=l0;
si3=96U;
si2=si2 < si3;
si0=si2?si0:si1;
switch(si0){
case 0:
goto L6;
case 1:
goto L5;
case 2:
goto L1;
case 3:
goto L1;
case 4:
goto L4;
default:
goto L1;
}
L6:;
si0=l4;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L1;
}
goto L2;
L5:;
si0=l3;
si0=!(si0);
if(si0){
goto L1;
}
si0=l4;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L2;
}
goto L1;
L4:;
si0=l4;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L2;
}
goto L1;
L3:;
si0=1531300U;
si1=38U;
si2=1531440U;
f673(i,si0,si1,si2);
UNREACHABLE;
L2:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+4U);
f15271(i,si0);
L1:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
si1=-2U;
si0+=si1;
l0=si0;
si1=1U;
si2=l0;
si3=96U;
si2=si2 < si3;
si0=si2?si0:si1;
switch(si0){
case 0:
goto L11;
case 1:
goto L10;
case 2:
goto L7;
case 3:
goto L7;
case 4:
goto L9;
default:
goto L7;
}
L11:;
si0=l2;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L7;
}
goto L8;
L10:;
si0=l4;
si0=!(si0);
if(si0){
goto L7;
}
si0=l2;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L8;
}
goto L7;
L9:;
si0=l2;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L7;
}
L8:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+4U);
f15271(i,si0);
L7:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
si1=-2U;
si0+=si1;
l0=si0;
si1=1U;
si2=l0;
si3=96U;
si2=si2 < si3;
si0=si2?si0:si1;
switch(si0){
case 0:
goto L16;
case 1:
goto L15;
case 2:
goto L13;
case 3:
goto L13;
case 4:
goto L14;
default:
goto L13;
}
L16:;
si0=l1;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L13;
}
goto L12;
L15:;
si0=l4;
si0=!(si0);
if(si0){
goto L13;
}
si0=l1;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L12;
}
goto L13;
L14:;
si0=l1;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L12;
}
L13:;
goto L0;
L12:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
f15271(i,si0);
L0:;
}

void f3139(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U32 l5=0;
U64 l6=0;
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
U64 sj0,sj1;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+12U);
l4=si0;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+16U);
l5=si1;
si0=si0 > si1;
if(si0){
goto L2;
}
si0=l3;
sj0=i64_load(&i->m0,(U64)si0+40U);
l6=sj0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+36U);
l7=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+32U);
l8=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+28U);
l9=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+24U);
l10=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+20U);
l11=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+16U);
l12=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+12U);
l13=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+8U);
l14=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+4U);
l15=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
l16=si0;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=48U;
si0=f15269(i,si0);
l17=si0;
si0=!(si0);
if(si0){
goto L3;
}
si0=l17;
si1=34U;
i32_store(&i->m0,(U64)si0,si1);
si0=l17;
si1=1U;
i32_store8(&i->m0,(U64)si0+24U,si1);
si0=l17;
si1=l5;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l17;
si1=l4;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l17;
si1=l1;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l17;
si1=12U;
si0+=si1;
si1=l1;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l11;
l1=si0;
si0=l16;
si1=-11U;
si0+=si1;
l3=si0;
si1=19U;
si2=l3;
si3=27U;
si2=si2 < si3;
si0=si2?si0:si1;
switch(si0){
case 0:
goto L4;
case 1:
goto L19;
case 2:
goto L19;
case 3:
goto L18;
case 4:
goto L17;
case 5:
goto L4;
case 6:
goto L16;
case 7:
goto L4;
case 8:
goto L15;
case 9:
goto L15;
case 10:
goto L14;
case 11:
goto L13;
case 12:
goto L12;
case 13:
goto L5;
case 14:
goto L12;
case 15:
goto L11;
case 16:
goto L11;
case 17:
goto L10;
case 18:
goto L4;
case 19:
goto L9;
case 20:
goto L8;
case 21:
goto L7;
case 22:
goto L6;
case 23:
goto L4;
case 24:
goto L4;
case 25:
goto L4;
case 26:
goto L5;
default:
goto L4;
}
L19:;
si0=l12;
l1=si0;
goto L4;
L18:;
si0=l13;
l1=si0;
goto L4;
L17:;
si0=l12;
l1=si0;
goto L4;
L16:;
si0=l8;
l1=si0;
goto L4;
L15:;
si0=l10;
l1=si0;
goto L4;
L14:;
si0=l9;
l1=si0;
goto L4;
L13:;
si0=l10;
l1=si0;
goto L4;
L12:;
si0=l13;
l1=si0;
goto L4;
L11:;
si0=l7;
l1=si0;
goto L4;
L10:;
si0=l13;
l1=si0;
goto L4;
L9:;
si0=l9;
l1=si0;
goto L4;
L8:;
si0=l10;
l1=si0;
goto L4;
L7:;
si0=l12;
l1=si0;
goto L4;
L6:;
si0=l13;
l1=si0;
goto L4;
L5:;
si0=l14;
l1=si0;
L4:;
si0=l1;
si1=l4;
si0=si0 < si1;
if(si0){
goto L21;
}
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=48U;
si0=f15269(i,si0);
l3=si0;
if(si0){
goto L20;
}
si0=8U;
si1=48U;
f52(i,si0,si1);
UNREACHABLE;
L21:;
si0=1531300U;
si1=38U;
si2=1531440U;
f673(i,si0,si1,si2);
UNREACHABLE;
L20:;
si0=l3;
sj1=l6;
i64_store(&i->m0,(U64)si0+40U,sj1);
si0=l3;
si1=l7;
i32_store(&i->m0,(U64)si0+36U,si1);
si0=l3;
si1=l8;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l3;
si1=l9;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l3;
si1=l10;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l3;
si1=l11;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l3;
si1=l12;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l3;
si1=l13;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l3;
si1=l14;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l3;
si1=l15;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l3;
si1=l16;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l17;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=12U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=16U;
si0+=si1;
si1=l1;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=12U;
si0+=si1;
si1=l4;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=8U;
si0+=si1;
si1=l3;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si0=i32_load(&i->m0,(U64)si0);
l17=si0;
si1=-2U;
si0+=si1;
l3=si0;
si1=1U;
si2=l3;
si3=96U;
si2=si2 < si3;
si0=si2?si0:si1;
switch(si0){
case 0:
goto L25;
case 1:
goto L24;
case 2:
goto L22;
case 3:
goto L22;
case 4:
goto L23;
default:
goto L22;
}
L25:;
si0=l2;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L22;
}
goto L1;
L24:;
si0=l17;
si0=!(si0);
if(si0){
goto L22;
}
si0=l2;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L1;
}
goto L22;
L23:;
si0=l2;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L1;
}
L22:;
goto L0;
L3:;
si0=8U;
si1=48U;
f52(i,si0,si1);
UNREACHABLE;
L2:;
si0=1531300U;
si1=38U;
si2=1531440U;
f673(i,si0,si1,si2);
UNREACHABLE;
L1:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+4U);
f15271(i,si0);
L0:;
}

void f3140(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 si0,si1,si2,si3;
U64 sj1;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+24U);
l3=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+52U);
l4=si0;
si0=48U;
si0=f15269(i,si0);
l5=si0;
si0=!(si0);
if(si0){
goto L3;
}
si0=l5;
si1=l2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=40U;
si0+=si1;
si1=l2;
si2=40U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=32U;
si0+=si1;
si1=l2;
si2=32U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=24U;
si0+=si1;
si1=l2;
si2=24U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=16U;
si0+=si1;
si1=l2;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=8U;
si0+=si1;
si1=l2;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=l4;
si0=si0 > si1;
if(si0){
goto L2;
}
si0=l0;
si1=l5;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=14U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=16U;
si0+=si1;
si1=1U;
i32_store8(&i->m0,(U64)si0,si1);
si0=l0;
si1=12U;
si0+=si1;
si1=l4;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=8U;
si0+=si1;
si1=l3;
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si1=-2U;
si0+=si1;
l2=si0;
si1=1U;
si2=l2;
si3=96U;
si2=si2 < si3;
si0=si2?si0:si1;
switch(si0){
case 0:
goto L7;
case 1:
goto L6;
case 2:
goto L4;
case 3:
goto L4;
case 4:
goto L5;
default:
goto L4;
}
L7:;
si0=l1;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L4;
}
goto L1;
L6:;
si0=l5;
si0=!(si0);
if(si0){
goto L4;
}
si0=l1;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L1;
}
goto L4;
L5:;
si0=l1;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L1;
}
L4:;
goto L0;
L3:;
si0=8U;
si1=48U;
f52(i,si0,si1);
UNREACHABLE;
L2:;
si0=1531300U;
si1=38U;
si2=1531440U;
f673(i,si0,si1,si2);
UNREACHABLE;
L1:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
f15271(i,si0);
L0:;
}

void f3141(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4,U32 l5,U32 l6,U32 l7,U32 l8) {
U32 l9=0;
U32 l10=0;
U32 l11=0;
U32 l12=0;
U32 l13=0;
U32 si0,si1,si2,si3,si4;
U64 sj1;
si0=i->g0;
si1=96U;
si0-=si1;
l9=si0;
i->g0=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
l10=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+24U);
l11=si0;
si0=l5;
si0=i32_load(&i->m0,(U64)si0);
l12=si0;
si1=-2U;
si0+=si1;
l13=si0;
si1=1U;
si2=l13;
si3=96U;
si2=si2 < si3;
si0=si2?si0:si1;
switch(si0){
case 0:
goto L5;
case 1:
goto L4;
case 2:
goto L1;
case 3:
goto L1;
case 4:
goto L3;
default:
goto L1;
}
L5:;
si0=l5;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L1;
}
goto L2;
L4:;
si0=l12;
si0=!(si0);
if(si0){
goto L1;
}
si0=l5;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L2;
}
goto L1;
L3:;
si0=l5;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L1;
}
L2:;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+4U);
f15271(i,si0);
L1:;
si0=l10;
if(si0){
goto L10;
}
si0=0U;
l5=si0;
goto L9;
L10:;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=36U;
si0=f15269(i,si0);
l5=si0;
si0=!(si0);
if(si0){
goto L8;
}
si0=l5;
si1=l10;
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=l4;
si2=4U;
si1+=si2;
l4=si1;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l5;
si1=12U;
si0+=si1;
si1=l4;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=20U;
si0+=si1;
si1=l4;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=28U;
si0+=si1;
si1=l4;
si2=24U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
L9:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
l10=si0;
si1=-2U;
si0+=si1;
l4=si0;
si1=1U;
si2=l4;
si3=96U;
si2=si2 < si3;
si0=si2?si0:si1;
switch(si0){
case 0:
goto L13;
case 1:
goto L12;
case 2:
goto L6;
case 3:
goto L6;
case 4:
goto L11;
default:
goto L6;
}
L13:;
si0=l3;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L6;
}
goto L7;
L12:;
si0=l10;
si0=!(si0);
if(si0){
goto L6;
}
si0=l3;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L7;
}
goto L6;
L11:;
si0=l3;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L7;
}
goto L6;
L8:;
si0=4U;
si1=36U;
f52(i,si0,si1);
UNREACHABLE;
L7:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+4U);
f15271(i,si0);
L6:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+8U);
l3=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+4U);
l4=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0);
l10=si0;
si1=-2U;
si0+=si1;
l2=si0;
si1=1U;
si2=l2;
si3=96U;
si2=si2 < si3;
si0=si2?si0:si1;
switch(si0){
case 0:
goto L18;
case 1:
goto L17;
case 2:
goto L14;
case 3:
goto L14;
case 4:
goto L16;
default:
goto L14;
}
L18:;
si0=l3;
si0=!(si0);
if(si0){
goto L14;
}
goto L15;
L17:;
si0=l10;
si0=!(si0);
if(si0){
goto L14;
}
L16:;
si0=l3;
si0=!(si0);
if(si0){
goto L14;
}
L15:;
si0=l4;
f15271(i,si0);
L14:;
si0=l9;
si1=20U;
si0+=si1;
si1=l6;
i32_store(&i->m0,(U64)si0,si1);
si0=l9;
si1=16U;
si0+=si1;
si1=l5;
i32_store(&i->m0,(U64)si0,si1);
si0=l9;
si1=12U;
si0+=si1;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l9;
si1=l7;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l9;
sj1=4ULL;
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l9;
si1=l11;
i32_store(&i->m0,(U64)si0,si1);
si0=l9;
si1=32U;
si0+=si1;
si1=24U;
si0+=si1;
si1=l1;
si2=24U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l9;
si1=32U;
si0+=si1;
si1=16U;
si0+=si1;
si1=l1;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l9;
si1=32U;
si0+=si1;
si1=8U;
si0+=si1;
si1=l1;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l9;
si1=l1;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+32U,sj1);
si0=l9;
si1=64U;
si0+=si1;
si1=16U;
si0+=si1;
si1=l8;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l9;
si1=64U;
si0+=si1;
si1=8U;
si0+=si1;
si1=l8;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l9;
si1=l8;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+64U,sj1);
si0=l9;
si1=l8;
sj1=i64_load(&i->m0,(U64)si1+24U);
i64_store(&i->m0,(U64)si0+88U,sj1);
si0=l0;
si1=l9;
si2=32U;
si1+=si2;
si2=l9;
si3=l9;
si4=64U;
si3+=si4;
f3022(i,si0,si1,si2,si3);
si0=l9;
si1=96U;
si0+=si1;
i->g0=si0;
L0:;
}

void f3142(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4,U64 l5,U32 l6,U32 l7,U32 l8,U32 l9,U32 l10) {
U32 l11=0;
U32 l12=0;
U32 l13=0;
U32 l14=0;
U32 l15=0;
U32 si0,si1,si2,si3,si4;
U64 sj1;
si0=i->g0;
si1=96U;
si0-=si1;
l11=si0;
i->g0=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
l12=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+24U);
l13=si0;
si0=l7;
si0=i32_load(&i->m0,(U64)si0);
l14=si0;
si1=-2U;
si0+=si1;
l15=si0;
si1=1U;
si2=l15;
si3=96U;
si2=si2 < si3;
si0=si2?si0:si1;
switch(si0){
case 0:
goto L5;
case 1:
goto L4;
case 2:
goto L1;
case 3:
goto L1;
case 4:
goto L3;
default:
goto L1;
}
L5:;
si0=l7;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L1;
}
goto L2;
L4:;
si0=l14;
si0=!(si0);
if(si0){
goto L1;
}
si0=l7;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L2;
}
goto L1;
L3:;
si0=l7;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L1;
}
L2:;
si0=l7;
si0=i32_load(&i->m0,(U64)si0+4U);
f15271(i,si0);
L1:;
si0=l12;
if(si0){
goto L10;
}
si0=0U;
l7=si0;
goto L9;
L10:;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=36U;
si0=f15269(i,si0);
l7=si0;
si0=!(si0);
if(si0){
goto L8;
}
si0=l7;
si1=l12;
i32_store(&i->m0,(U64)si0,si1);
si0=l7;
si1=l4;
si2=4U;
si1+=si2;
l4=si1;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l7;
si1=12U;
si0+=si1;
si1=l4;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l7;
si1=20U;
si0+=si1;
si1=l4;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l7;
si1=28U;
si0+=si1;
si1=l4;
si2=24U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
L9:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
l12=si0;
si1=-2U;
si0+=si1;
l4=si0;
si1=1U;
si2=l4;
si3=96U;
si2=si2 < si3;
si0=si2?si0:si1;
switch(si0){
case 0:
goto L13;
case 1:
goto L12;
case 2:
goto L6;
case 3:
goto L6;
case 4:
goto L11;
default:
goto L6;
}
L13:;
si0=l3;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L6;
}
goto L7;
L12:;
si0=l12;
si0=!(si0);
if(si0){
goto L6;
}
si0=l3;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L7;
}
goto L6;
L11:;
si0=l3;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L7;
}
goto L6;
L8:;
si0=4U;
si1=36U;
f52(i,si0,si1);
UNREACHABLE;
L7:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+4U);
f15271(i,si0);
L6:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+8U);
l3=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+4U);
l4=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0);
l12=si0;
si1=-2U;
si0+=si1;
l2=si0;
si1=1U;
si2=l2;
si3=96U;
si2=si2 < si3;
si0=si2?si0:si1;
switch(si0){
case 0:
goto L18;
case 1:
goto L17;
case 2:
goto L14;
case 3:
goto L14;
case 4:
goto L16;
default:
goto L14;
}
L18:;
si0=l3;
si0=!(si0);
if(si0){
goto L14;
}
goto L15;
L17:;
si0=l12;
si0=!(si0);
if(si0){
goto L14;
}
L16:;
si0=l3;
si0=!(si0);
if(si0){
goto L14;
}
L15:;
si0=l4;
f15271(i,si0);
L14:;
si0=l11;
si1=20U;
si0+=si1;
si1=l8;
i32_store(&i->m0,(U64)si0,si1);
si0=l11;
si1=16U;
si0+=si1;
si1=l7;
i32_store(&i->m0,(U64)si0,si1);
si0=l11;
si1=12U;
si0+=si1;
si1=l6;
i32_store(&i->m0,(U64)si0,si1);
si0=l11;
si1=l9;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l11;
sj1=l5;
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l11;
si1=l13;
i32_store(&i->m0,(U64)si0,si1);
si0=l11;
si1=32U;
si0+=si1;
si1=24U;
si0+=si1;
si1=l1;
si2=24U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l11;
si1=32U;
si0+=si1;
si1=16U;
si0+=si1;
si1=l1;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l11;
si1=32U;
si0+=si1;
si1=8U;
si0+=si1;
si1=l1;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l11;
si1=l1;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+32U,sj1);
si0=l11;
si1=64U;
si0+=si1;
si1=16U;
si0+=si1;
si1=l10;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l11;
si1=64U;
si0+=si1;
si1=8U;
si0+=si1;
si1=l10;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l11;
si1=l10;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+64U,sj1);
si0=l11;
si1=l10;
sj1=i64_load(&i->m0,(U64)si1+24U);
i64_store(&i->m0,(U64)si0+88U,sj1);
si0=l0;
si1=l11;
si2=32U;
si1+=si2;
si2=l11;
si3=l11;
si4=64U;
si3+=si4;
f3022(i,si0,si1,si2,si3);
si0=l11;
si1=96U;
si0+=si1;
i->g0=si0;
L0:;
}

void f3143(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4,U32 l5) {
U32 l6=0;
U32 l7=0;
U32 l8=0;
U64 l9=0;
U64 l10=0;
U32 si0,si1,si2,si3;
U64 sj1;
si0=i->g0;
si1=112U;
si0-=si1;
l6=si0;
i->g0=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+40U);
l7=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+24U);
l8=si0;
si0=l6;
si1=l2;
si2=l3;
si3=l4;
f3060(i,si0,si1,si2,si3);
si0=l6;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
si1=5U;
si0=si0 != si1;
if(si0){
goto L2;
}
si0=l6;
si1=48U;
si0+=si1;
si1=12U;
si0+=si1;
si1=l6;
si2=12U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l6;
si1=48U;
si0+=si1;
si1=20U;
si0+=si1;
si1=l6;
si2=20U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l6;
si1=l6;
sj1=i64_load(&i->m0,(U64)si1+4U);
i64_store(&i->m0,(U64)si0+52U,sj1);
si0=l6;
si1=l7;
i32_store(&i->m0,(U64)si0+72U,si1);
si0=l6;
si1=l8;
i32_store(&i->m0,(U64)si0+48U,si1);
si0=l6;
si1=80U;
si0+=si1;
si1=24U;
si0+=si1;
si1=l1;
si2=24U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l6;
si1=80U;
si0+=si1;
si1=16U;
si0+=si1;
si1=l1;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l6;
si1=80U;
si0+=si1;
si1=8U;
si0+=si1;
si1=l1;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l6;
si1=l1;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+80U,sj1);
si0=l6;
si1=16U;
si0+=si1;
si1=l5;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l6;
si1=8U;
si0+=si1;
si1=l5;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l6;
si1=l5;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l6;
si1=l5;
sj1=i64_load(&i->m0,(U64)si1+24U);
i64_store(&i->m0,(U64)si0+24U,sj1);
si0=l0;
si1=l6;
si2=80U;
si1+=si2;
si2=l6;
si3=48U;
si2+=si3;
si3=l6;
f3022(i,si0,si1,si2,si3);
goto L1;
L2:;
si0=l0;
si1=l6;
sj1=i64_load(&i->m0,(U64)si1+24U);
i64_store(&i->m0,(U64)si0+24U,sj1);
si0=l6;
si1=96U;
si0+=si1;
si1=l6;
si2=20U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
l2=si1;
i32_store(&i->m0,(U64)si0,si1);
si0=l6;
si1=80U;
si0+=si1;
si1=8U;
si0+=si1;
si1=l6;
si2=12U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
l9=sj1;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=32U;
si0+=si1;
si1=l6;
si2=32U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=40U;
si0+=si1;
si1=l6;
si2=40U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l6;
si1=l6;
sj1=i64_load(&i->m0,(U64)si1+4U);
l10=sj1;
i64_store(&i->m0,(U64)si0+80U,sj1);
si0=l0;
si1=20U;
si0+=si1;
si1=l2;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=12U;
si0+=si1;
sj1=l9;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
sj1=l10;
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l0;
si1=l4;
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
si1=-2U;
si0+=si1;
l0=si0;
si1=1U;
si2=l0;
si3=96U;
si2=si2 < si3;
si0=si2?si0:si1;
switch(si0){
case 0:
goto L7;
case 1:
goto L6;
case 2:
goto L3;
case 3:
goto L3;
case 4:
goto L5;
default:
goto L3;
}
L7:;
si0=l5;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L3;
}
goto L4;
L6:;
si0=l4;
si0=!(si0);
if(si0){
goto L3;
}
si0=l5;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L4;
}
goto L3;
L5:;
si0=l5;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L3;
}
L4:;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+4U);
f15271(i,si0);
L3:;
si0=l1;
f3385(i,si0);
si0=l1;
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L8;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
f15271(i,si0);
L8:;
si0=l1;
si1=12U;
si0+=si1;
l0=si0;
f3385(i,si0);
si0=l1;
si1=16U;
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
si0=l6;
si1=112U;
si0+=si1;
i->g0=si0;
L0:;
}

void f3144(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4) {
U32 l5=0;
U32 l6=0;
U32 l7=0;
U64 l8=0;
U64 l9=0;
U32 si0,si1,si2,si3;
U64 sj1;
si0=i->g0;
si1=112U;
si0-=si1;
l5=si0;
i->g0=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+28U);
l6=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+24U);
l7=si0;
si0=l5;
si1=l2;
si2=l3;
f3061(i,si0,si1,si2);
si0=l5;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si1=5U;
si0=si0 != si1;
if(si0){
goto L2;
}
si0=l5;
si1=48U;
si0+=si1;
si1=12U;
si0+=si1;
si1=l5;
si2=12U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=48U;
si0+=si1;
si1=20U;
si0+=si1;
si1=l5;
si2=20U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=l5;
sj1=i64_load(&i->m0,(U64)si1+4U);
i64_store(&i->m0,(U64)si0+52U,sj1);
si0=l5;
si1=l6;
i32_store(&i->m0,(U64)si0+72U,si1);
si0=l5;
si1=l7;
i32_store(&i->m0,(U64)si0+48U,si1);
si0=l5;
si1=80U;
si0+=si1;
si1=24U;
si0+=si1;
si1=l1;
si2=24U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=80U;
si0+=si1;
si1=16U;
si0+=si1;
si1=l1;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=80U;
si0+=si1;
si1=8U;
si0+=si1;
si1=l1;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=l1;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+80U,sj1);
si0=l5;
si1=16U;
si0+=si1;
si1=l4;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=8U;
si0+=si1;
si1=l4;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1+24U);
i64_store(&i->m0,(U64)si0+24U,sj1);
si0=l0;
si1=l5;
si2=80U;
si1+=si2;
si2=l5;
si3=48U;
si2+=si3;
si3=l5;
f3022(i,si0,si1,si2,si3);
goto L1;
L2:;
si0=l0;
si1=l5;
sj1=i64_load(&i->m0,(U64)si1+24U);
i64_store(&i->m0,(U64)si0+24U,sj1);
si0=l5;
si1=96U;
si0+=si1;
si1=l5;
si2=20U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
l2=si1;
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=80U;
si0+=si1;
si1=8U;
si0+=si1;
si1=l5;
si2=12U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
l8=sj1;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=32U;
si0+=si1;
si1=l5;
si2=32U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=40U;
si0+=si1;
si1=l5;
si2=40U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=l5;
sj1=i64_load(&i->m0,(U64)si1+4U);
l9=sj1;
i64_store(&i->m0,(U64)si0+80U,sj1);
si0=l0;
si1=20U;
si0+=si1;
si1=l2;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=12U;
si0+=si1;
sj1=l8;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
sj1=l9;
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l0;
si1=l3;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si1=-2U;
si0+=si1;
l0=si0;
si1=1U;
si2=l0;
si3=96U;
si2=si2 < si3;
si0=si2?si0:si1;
switch(si0){
case 0:
goto L7;
case 1:
goto L6;
case 2:
goto L3;
case 3:
goto L3;
case 4:
goto L5;
default:
goto L3;
}
L7:;
si0=l4;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L3;
}
goto L4;
L6:;
si0=l3;
si0=!(si0);
if(si0){
goto L3;
}
si0=l4;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L4;
}
goto L3;
L5:;
si0=l4;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L3;
}
L4:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+4U);
f15271(i,si0);
L3:;
si0=l1;
f3385(i,si0);
si0=l1;
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L8;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
f15271(i,si0);
L8:;
si0=l1;
si1=12U;
si0+=si1;
l0=si0;
f3385(i,si0);
si0=l1;
si1=16U;
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
si0=l5;
si1=112U;
si0+=si1;
i->g0=si0;
L0:;
}

void f3145(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4,U32 l5,U32 l6) {
U32 l7=0;
U32 l8=0;
U32 l9=0;
U64 l10=0;
U64 l11=0;
U32 si0,si1,si2,si3,si4;
U64 sj1;
si0=i->g0;
si1=112U;
si0-=si1;
l7=si0;
i->g0=si0;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+16U);
l8=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+24U);
l9=si0;
si0=l7;
si1=l2;
si2=l3;
si3=l4;
si4=l5;
f3062(i,si0,si1,si2,si3,si4);
si0=l7;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si1=5U;
si0=si0 != si1;
if(si0){
goto L2;
}
si0=l7;
si1=48U;
si0+=si1;
si1=12U;
si0+=si1;
si1=l7;
si2=12U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l7;
si1=48U;
si0+=si1;
si1=20U;
si0+=si1;
si1=l7;
si2=20U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l7;
si1=l7;
sj1=i64_load(&i->m0,(U64)si1+4U);
i64_store(&i->m0,(U64)si0+52U,sj1);
si0=l7;
si1=l8;
i32_store(&i->m0,(U64)si0+72U,si1);
si0=l7;
si1=l9;
i32_store(&i->m0,(U64)si0+48U,si1);
si0=l7;
si1=80U;
si0+=si1;
si1=24U;
si0+=si1;
si1=l1;
si2=24U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l7;
si1=80U;
si0+=si1;
si1=16U;
si0+=si1;
si1=l1;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l7;
si1=80U;
si0+=si1;
si1=8U;
si0+=si1;
si1=l1;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l7;
si1=l1;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+80U,sj1);
si0=l7;
si1=16U;
si0+=si1;
si1=l6;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l7;
si1=8U;
si0+=si1;
si1=l6;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l7;
si1=l6;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l7;
si1=l6;
sj1=i64_load(&i->m0,(U64)si1+24U);
i64_store(&i->m0,(U64)si0+24U,sj1);
si0=l0;
si1=l7;
si2=80U;
si1+=si2;
si2=l7;
si3=48U;
si2+=si3;
si3=l7;
f3022(i,si0,si1,si2,si3);
goto L1;
L2:;
si0=l0;
si1=l7;
sj1=i64_load(&i->m0,(U64)si1+24U);
i64_store(&i->m0,(U64)si0+24U,sj1);
si0=l7;
si1=96U;
si0+=si1;
si1=l7;
si2=20U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
l2=si1;
i32_store(&i->m0,(U64)si0,si1);
si0=l7;
si1=80U;
si0+=si1;
si1=8U;
si0+=si1;
si1=l7;
si2=12U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
l10=sj1;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=32U;
si0+=si1;
si1=l7;
si2=32U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=40U;
si0+=si1;
si1=l7;
si2=40U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l7;
si1=l7;
sj1=i64_load(&i->m0,(U64)si1+4U);
l11=sj1;
i64_store(&i->m0,(U64)si0+80U,sj1);
si0=l0;
si1=20U;
si0+=si1;
si1=l2;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=12U;
si0+=si1;
sj1=l10;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
sj1=l11;
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l0;
si1=l5;
i32_store(&i->m0,(U64)si0,si1);
si0=l6;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si1=-2U;
si0+=si1;
l0=si0;
si1=1U;
si2=l0;
si3=96U;
si2=si2 < si3;
si0=si2?si0:si1;
switch(si0){
case 0:
goto L7;
case 1:
goto L6;
case 2:
goto L3;
case 3:
goto L3;
case 4:
goto L5;
default:
goto L3;
}
L7:;
si0=l6;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L3;
}
goto L4;
L6:;
si0=l5;
si0=!(si0);
if(si0){
goto L3;
}
si0=l6;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L4;
}
goto L3;
L5:;
si0=l6;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L3;
}
L4:;
si0=l6;
si0=i32_load(&i->m0,(U64)si0+4U);
f15271(i,si0);
L3:;
si0=l1;
f3385(i,si0);
si0=l1;
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L8;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
f15271(i,si0);
L8:;
si0=l1;
si1=12U;
si0+=si1;
l0=si0;
f3385(i,si0);
si0=l1;
si1=16U;
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
si0=l7;
si1=112U;
si0+=si1;
i->g0=si0;
L0:;
}

void f3146(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4,U32 l5) {
U32 l6=0;
U32 l7=0;
U32 l8=0;
U64 l9=0;
U64 l10=0;
U32 si0,si1,si2,si3;
U64 sj1;
si0=i->g0;
si1=112U;
si0-=si1;
l6=si0;
i->g0=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+16U);
l7=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+24U);
l8=si0;
si0=l6;
si1=l2;
si2=l3;
si3=l4;
f3063(i,si0,si1,si2,si3);
si0=l6;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
si1=5U;
si0=si0 != si1;
if(si0){
goto L2;
}
si0=l6;
si1=48U;
si0+=si1;
si1=12U;
si0+=si1;
si1=l6;
si2=12U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l6;
si1=48U;
si0+=si1;
si1=20U;
si0+=si1;
si1=l6;
si2=20U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l6;
si1=l6;
sj1=i64_load(&i->m0,(U64)si1+4U);
i64_store(&i->m0,(U64)si0+52U,sj1);
si0=l6;
si1=l7;
i32_store(&i->m0,(U64)si0+72U,si1);
si0=l6;
si1=l8;
i32_store(&i->m0,(U64)si0+48U,si1);
si0=l6;
si1=80U;
si0+=si1;
si1=24U;
si0+=si1;
si1=l1;
si2=24U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l6;
si1=80U;
si0+=si1;
si1=16U;
si0+=si1;
si1=l1;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l6;
si1=80U;
si0+=si1;
si1=8U;
si0+=si1;
si1=l1;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l6;
si1=l1;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+80U,sj1);
si0=l6;
si1=16U;
si0+=si1;
si1=l5;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l6;
si1=8U;
si0+=si1;
si1=l5;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l6;
si1=l5;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l6;
si1=l5;
sj1=i64_load(&i->m0,(U64)si1+24U);
i64_store(&i->m0,(U64)si0+24U,sj1);
si0=l0;
si1=l6;
si2=80U;
si1+=si2;
si2=l6;
si3=48U;
si2+=si3;
si3=l6;
f3022(i,si0,si1,si2,si3);
goto L1;
L2:;
si0=l0;
si1=l6;
sj1=i64_load(&i->m0,(U64)si1+24U);
i64_store(&i->m0,(U64)si0+24U,sj1);
si0=l6;
si1=96U;
si0+=si1;
si1=l6;
si2=20U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
l2=si1;
i32_store(&i->m0,(U64)si0,si1);
si0=l6;
si1=80U;
si0+=si1;
si1=8U;
si0+=si1;
si1=l6;
si2=12U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
l9=sj1;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=32U;
si0+=si1;
si1=l6;
si2=32U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=40U;
si0+=si1;
si1=l6;
si2=40U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l6;
si1=l6;
sj1=i64_load(&i->m0,(U64)si1+4U);
l10=sj1;
i64_store(&i->m0,(U64)si0+80U,sj1);
si0=l0;
si1=20U;
si0+=si1;
si1=l2;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=12U;
si0+=si1;
sj1=l9;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
sj1=l10;
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l0;
si1=l4;
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
si1=-2U;
si0+=si1;
l0=si0;
si1=1U;
si2=l0;
si3=96U;
si2=si2 < si3;
si0=si2?si0:si1;
switch(si0){
case 0:
goto L7;
case 1:
goto L6;
case 2:
goto L3;
case 3:
goto L3;
case 4:
goto L5;
default:
goto L3;
}
L7:;
si0=l5;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L3;
}
goto L4;
L6:;
si0=l4;
si0=!(si0);
if(si0){
goto L3;
}
si0=l5;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L4;
}
goto L3;
L5:;
si0=l5;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L3;
}
L4:;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+4U);
f15271(i,si0);
L3:;
si0=l1;
f3385(i,si0);
si0=l1;
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L8;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
f15271(i,si0);
L8:;
si0=l1;
si1=12U;
si0+=si1;
l0=si0;
f3385(i,si0);
si0=l1;
si1=16U;
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
si0=l6;
si1=112U;
si0+=si1;
i->g0=si0;
L0:;
}

void f3147(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4,U32 l5,U32 l6,U32 l7) {
U32 l8=0;
U32 l9=0;
U32 l10=0;
U32 l11=0;
U32 l12=0;
U32 si0,si1,si2,si3,si4;
U64 sj1;
si0=i->g0;
si1=96U;
si0-=si1;
l8=si0;
i->g0=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
l9=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+24U);
l10=si0;
si0=l5;
si0=i32_load(&i->m0,(U64)si0);
l11=si0;
si1=-2U;
si0+=si1;
l12=si0;
si1=1U;
si2=l12;
si3=96U;
si2=si2 < si3;
si0=si2?si0:si1;
switch(si0){
case 0:
goto L5;
case 1:
goto L4;
case 2:
goto L1;
case 3:
goto L1;
case 4:
goto L3;
default:
goto L1;
}
L5:;
si0=l5;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L1;
}
goto L2;
L4:;
si0=l11;
si0=!(si0);
if(si0){
goto L1;
}
si0=l5;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L2;
}
goto L1;
L3:;
si0=l5;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L1;
}
L2:;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+4U);
f15271(i,si0);
L1:;
si0=l9;
if(si0){
goto L10;
}
si0=0U;
l5=si0;
goto L9;
L10:;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=36U;
si0=f15269(i,si0);
l5=si0;
si0=!(si0);
if(si0){
goto L8;
}
si0=l5;
si1=l9;
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=l4;
si2=4U;
si1+=si2;
l4=si1;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l5;
si1=12U;
si0+=si1;
si1=l4;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=20U;
si0+=si1;
si1=l4;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=28U;
si0+=si1;
si1=l4;
si2=24U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
L9:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
l9=si0;
si1=-2U;
si0+=si1;
l4=si0;
si1=1U;
si2=l4;
si3=96U;
si2=si2 < si3;
si0=si2?si0:si1;
switch(si0){
case 0:
goto L13;
case 1:
goto L12;
case 2:
goto L6;
case 3:
goto L6;
case 4:
goto L11;
default:
goto L6;
}
L13:;
si0=l3;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L6;
}
goto L7;
L12:;
si0=l9;
si0=!(si0);
if(si0){
goto L6;
}
si0=l3;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L7;
}
goto L6;
L11:;
si0=l3;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L7;
}
goto L6;
L8:;
si0=4U;
si1=36U;
f52(i,si0,si1);
UNREACHABLE;
L7:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+4U);
f15271(i,si0);
L6:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+8U);
l3=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+4U);
l4=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0);
l9=si0;
si1=-2U;
si0+=si1;
l2=si0;
si1=1U;
si2=l2;
si3=96U;
si2=si2 < si3;
si0=si2?si0:si1;
switch(si0){
case 0:
goto L18;
case 1:
goto L17;
case 2:
goto L14;
case 3:
goto L14;
case 4:
goto L16;
default:
goto L14;
}
L18:;
si0=l3;
si0=!(si0);
if(si0){
goto L14;
}
goto L15;
L17:;
si0=l9;
si0=!(si0);
if(si0){
goto L14;
}
L16:;
si0=l3;
si0=!(si0);
if(si0){
goto L14;
}
L15:;
si0=l4;
f15271(i,si0);
L14:;
si0=l8;
si1=20U;
si0+=si1;
si1=l6;
i32_store(&i->m0,(U64)si0,si1);
si0=l8;
si1=16U;
si0+=si1;
si1=l5;
i32_store(&i->m0,(U64)si0,si1);
si0=l8;
si1=12U;
si0+=si1;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l8;
si1=l7;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l8;
sj1=4ULL;
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l8;
si1=l10;
i32_store(&i->m0,(U64)si0,si1);
si0=l8;
si1=32U;
si0+=si1;
si1=24U;
si0+=si1;
si1=l1;
si2=24U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l8;
si1=32U;
si0+=si1;
si1=16U;
si0+=si1;
si1=l1;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l8;
si1=32U;
si0+=si1;
si1=8U;
si0+=si1;
si1=l1;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l8;
si1=l1;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+32U,sj1);
si0=l8;
si1=l7;
i32_store(&i->m0,(U64)si0+92U,si1);
si0=l8;
si1=98U;
i32_store(&i->m0,(U64)si0+64U,si1);
si0=l8;
si1=l7;
i32_store(&i->m0,(U64)si0+88U,si1);
si0=l0;
si1=l8;
si2=32U;
si1+=si2;
si2=l8;
si3=l8;
si4=64U;
si3+=si4;
f3022(i,si0,si1,si2,si3);
si0=l8;
si1=96U;
si0+=si1;
i->g0=si0;
L0:;
}

void f3148(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4,U64 l5,U32 l6,U32 l7,U32 l8,U32 l9) {
U32 l10=0;
U32 l11=0;
U32 l12=0;
U32 l13=0;
U32 l14=0;
U32 si0,si1,si2,si3,si4;
U64 sj1;
si0=i->g0;
si1=96U;
si0-=si1;
l10=si0;
i->g0=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
l11=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+24U);
l12=si0;
si0=l7;
si0=i32_load(&i->m0,(U64)si0);
l13=si0;
si1=-2U;
si0+=si1;
l14=si0;
si1=1U;
si2=l14;
si3=96U;
si2=si2 < si3;
si0=si2?si0:si1;
switch(si0){
case 0:
goto L5;
case 1:
goto L4;
case 2:
goto L1;
case 3:
goto L1;
case 4:
goto L3;
default:
goto L1;
}
L5:;
si0=l7;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L1;
}
goto L2;
L4:;
si0=l13;
si0=!(si0);
if(si0){
goto L1;
}
si0=l7;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L2;
}
goto L1;
L3:;
si0=l7;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L1;
}
L2:;
si0=l7;
si0=i32_load(&i->m0,(U64)si0+4U);
f15271(i,si0);
L1:;
si0=l11;
if(si0){
goto L10;
}
si0=0U;
l7=si0;
goto L9;
L10:;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=36U;
si0=f15269(i,si0);
l7=si0;
si0=!(si0);
if(si0){
goto L8;
}
si0=l7;
si1=l11;
i32_store(&i->m0,(U64)si0,si1);
si0=l7;
si1=l4;
si2=4U;
si1+=si2;
l4=si1;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l7;
si1=12U;
si0+=si1;
si1=l4;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l7;
si1=20U;
si0+=si1;
si1=l4;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l7;
si1=28U;
si0+=si1;
si1=l4;
si2=24U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
L9:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
l11=si0;
si1=-2U;
si0+=si1;
l4=si0;
si1=1U;
si2=l4;
si3=96U;
si2=si2 < si3;
si0=si2?si0:si1;
switch(si0){
case 0:
goto L13;
case 1:
goto L12;
case 2:
goto L6;
case 3:
goto L6;
case 4:
goto L11;
default:
goto L6;
}
L13:;
si0=l3;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L6;
}
goto L7;
L12:;
si0=l11;
si0=!(si0);
if(si0){
goto L6;
}
si0=l3;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L7;
}
goto L6;
L11:;
si0=l3;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L7;
}
goto L6;
L8:;
si0=4U;
si1=36U;
f52(i,si0,si1);
UNREACHABLE;
L7:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+4U);
f15271(i,si0);
L6:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+8U);
l3=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+4U);
l4=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0);
l11=si0;
si1=-2U;
si0+=si1;
l2=si0;
si1=1U;
si2=l2;
si3=96U;
si2=si2 < si3;
si0=si2?si0:si1;
switch(si0){
case 0:
goto L18;
case 1:
goto L17;
case 2:
goto L14;
case 3:
goto L14;
case 4:
goto L16;
default:
goto L14;
}
L18:;
si0=l3;
si0=!(si0);
if(si0){
goto L14;
}
goto L15;
L17:;
si0=l11;
si0=!(si0);
if(si0){
goto L14;
}
L16:;
si0=l3;
si0=!(si0);
if(si0){
goto L14;
}
L15:;
si0=l4;
f15271(i,si0);
L14:;
si0=l10;
si1=20U;
si0+=si1;
si1=l8;
i32_store(&i->m0,(U64)si0,si1);
si0=l10;
si1=16U;
si0+=si1;
si1=l7;
i32_store(&i->m0,(U64)si0,si1);
si0=l10;
si1=12U;
si0+=si1;
si1=l6;
i32_store(&i->m0,(U64)si0,si1);
si0=l10;
si1=l9;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l10;
sj1=l5;
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l10;
si1=l12;
i32_store(&i->m0,(U64)si0,si1);
si0=l10;
si1=32U;
si0+=si1;
si1=24U;
si0+=si1;
si1=l1;
si2=24U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l10;
si1=32U;
si0+=si1;
si1=16U;
si0+=si1;
si1=l1;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l10;
si1=32U;
si0+=si1;
si1=8U;
si0+=si1;
si1=l1;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l10;
si1=l1;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+32U,sj1);
si0=l10;
si1=l9;
i32_store(&i->m0,(U64)si0+92U,si1);
si0=l10;
si1=98U;
i32_store(&i->m0,(U64)si0+64U,si1);
si0=l10;
si1=l9;
i32_store(&i->m0,(U64)si0+88U,si1);
si0=l0;
si1=l10;
si2=32U;
si1+=si2;
si2=l10;
si3=l10;
si4=64U;
si3+=si4;
f3022(i,si0,si1,si2,si3);
si0=l10;
si1=96U;
si0+=si1;
i->g0=si0;
L0:;
}

void f3149(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4) {
U32 l5=0;
U32 l6=0;
U32 l7=0;
U64 l8=0;
U64 l9=0;
U32 si0,si1,si2,si3;
U64 sj1;
si0=i->g0;
si1=112U;
si0-=si1;
l5=si0;
i->g0=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+40U);
l6=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+24U);
l7=si0;
si0=l5;
si1=l2;
si2=l3;
si3=l4;
f3060(i,si0,si1,si2,si3);
si0=l5;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
si1=5U;
si0=si0 != si1;
if(si0){
goto L2;
}
si0=l5;
si1=48U;
si0+=si1;
si1=12U;
si0+=si1;
si1=l5;
si2=12U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=48U;
si0+=si1;
si1=20U;
si0+=si1;
si1=l5;
si2=20U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=l5;
sj1=i64_load(&i->m0,(U64)si1+4U);
i64_store(&i->m0,(U64)si0+52U,sj1);
si0=l5;
si1=l6;
i32_store(&i->m0,(U64)si0+72U,si1);
si0=l5;
si1=l7;
i32_store(&i->m0,(U64)si0+48U,si1);
si0=l5;
si1=80U;
si0+=si1;
si1=24U;
si0+=si1;
si1=l1;
si2=24U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=80U;
si0+=si1;
si1=16U;
si0+=si1;
si1=l1;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=80U;
si0+=si1;
si1=8U;
si0+=si1;
si1=l1;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=l1;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+80U,sj1);
si0=l5;
si1=l6;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l5;
si1=98U;
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=l6;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l0;
si1=l5;
si2=80U;
si1+=si2;
si2=l5;
si3=48U;
si2+=si3;
si3=l5;
f3022(i,si0,si1,si2,si3);
goto L1;
L2:;
si0=l0;
si1=l5;
sj1=i64_load(&i->m0,(U64)si1+24U);
i64_store(&i->m0,(U64)si0+24U,sj1);
si0=l5;
si1=80U;
si0+=si1;
si1=16U;
si0+=si1;
si1=l5;
si2=20U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
l2=si1;
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=88U;
si0+=si1;
si1=l5;
si2=12U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
l8=sj1;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=32U;
si0+=si1;
si1=l5;
si2=32U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=40U;
si0+=si1;
si1=l5;
si2=40U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=l5;
sj1=i64_load(&i->m0,(U64)si1+4U);
l9=sj1;
i64_store(&i->m0,(U64)si0+80U,sj1);
si0=l0;
si1=20U;
si0+=si1;
si1=l2;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=12U;
si0+=si1;
sj1=l8;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
sj1=l9;
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l0;
si1=l4;
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
f3385(i,si0);
si0=l1;
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L3;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
f15271(i,si0);
L3:;
si0=l1;
si1=12U;
si0+=si1;
l0=si0;
f3385(i,si0);
si0=l1;
si1=16U;
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
si0=l5;
si1=112U;
si0+=si1;
i->g0=si0;
L0:;
}

void f3150(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U32 l5=0;
U32 l6=0;
U64 l7=0;
U64 l8=0;
U32 si0,si1,si2,si3;
U64 sj1;
si0=i->g0;
si1=112U;
si0-=si1;
l4=si0;
i->g0=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+28U);
l5=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+24U);
l6=si0;
si0=l4;
si1=l2;
si2=l3;
f3061(i,si0,si1,si2);
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si1=5U;
si0=si0 != si1;
if(si0){
goto L2;
}
si0=l4;
si1=48U;
si0+=si1;
si1=12U;
si0+=si1;
si1=l4;
si2=12U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=48U;
si0+=si1;
si1=20U;
si0+=si1;
si1=l4;
si2=20U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1+4U);
i64_store(&i->m0,(U64)si0+52U,sj1);
si0=l4;
si1=l5;
i32_store(&i->m0,(U64)si0+72U,si1);
si0=l4;
si1=l6;
i32_store(&i->m0,(U64)si0+48U,si1);
si0=l4;
si1=80U;
si0+=si1;
si1=24U;
si0+=si1;
si1=l1;
si2=24U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=80U;
si0+=si1;
si1=16U;
si0+=si1;
si1=l1;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=80U;
si0+=si1;
si1=8U;
si0+=si1;
si1=l1;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=l1;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+80U,sj1);
si0=l4;
si1=l5;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l4;
si1=98U;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=l5;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l0;
si1=l4;
si2=80U;
si1+=si2;
si2=l4;
si3=48U;
si2+=si3;
si3=l4;
f3022(i,si0,si1,si2,si3);
goto L1;
L2:;
si0=l0;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1+24U);
i64_store(&i->m0,(U64)si0+24U,sj1);
si0=l4;
si1=80U;
si0+=si1;
si1=16U;
si0+=si1;
si1=l4;
si2=20U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
l2=si1;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=88U;
si0+=si1;
si1=l4;
si2=12U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
l7=sj1;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=32U;
si0+=si1;
si1=l4;
si2=32U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=40U;
si0+=si1;
si1=l4;
si2=40U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1+4U);
l8=sj1;
i64_store(&i->m0,(U64)si0+80U,sj1);
si0=l0;
si1=20U;
si0+=si1;
si1=l2;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=12U;
si0+=si1;
sj1=l7;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
sj1=l8;
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l0;
si1=l3;
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
f3385(i,si0);
si0=l1;
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L3;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
f15271(i,si0);
L3:;
si0=l1;
si1=12U;
si0+=si1;
l0=si0;
f3385(i,si0);
si0=l1;
si1=16U;
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
si0=l4;
si1=112U;
si0+=si1;
i->g0=si0;
L0:;
}

void f3151(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4,U32 l5) {
U32 l6=0;
U32 l7=0;
U32 l8=0;
U64 l9=0;
U64 l10=0;
U32 si0,si1,si2,si3,si4;
U64 sj1;
si0=i->g0;
si1=112U;
si0-=si1;
l6=si0;
i->g0=si0;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+16U);
l7=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+24U);
l8=si0;
si0=l6;
si1=l2;
si2=l3;
si3=l4;
si4=l5;
f3062(i,si0,si1,si2,si3,si4);
si0=l6;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si1=5U;
si0=si0 != si1;
if(si0){
goto L2;
}
si0=l6;
si1=48U;
si0+=si1;
si1=12U;
si0+=si1;
si1=l6;
si2=12U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l6;
si1=48U;
si0+=si1;
si1=20U;
si0+=si1;
si1=l6;
si2=20U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l6;
si1=l6;
sj1=i64_load(&i->m0,(U64)si1+4U);
i64_store(&i->m0,(U64)si0+52U,sj1);
si0=l6;
si1=l7;
i32_store(&i->m0,(U64)si0+72U,si1);
si0=l6;
si1=l8;
i32_store(&i->m0,(U64)si0+48U,si1);
si0=l6;
si1=80U;
si0+=si1;
si1=24U;
si0+=si1;
si1=l1;
si2=24U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l6;
si1=80U;
si0+=si1;
si1=16U;
si0+=si1;
si1=l1;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l6;
si1=80U;
si0+=si1;
si1=8U;
si0+=si1;
si1=l1;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l6;
si1=l1;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+80U,sj1);
si0=l6;
si1=l7;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l6;
si1=98U;
i32_store(&i->m0,(U64)si0,si1);
si0=l6;
si1=l7;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l0;
si1=l6;
si2=80U;
si1+=si2;
si2=l6;
si3=48U;
si2+=si3;
si3=l6;
f3022(i,si0,si1,si2,si3);
goto L1;
L2:;
si0=l0;
si1=l6;
sj1=i64_load(&i->m0,(U64)si1+24U);
i64_store(&i->m0,(U64)si0+24U,sj1);
si0=l6;
si1=80U;
si0+=si1;
si1=16U;
si0+=si1;
si1=l6;
si2=20U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
l2=si1;
i32_store(&i->m0,(U64)si0,si1);
si0=l6;
si1=88U;
si0+=si1;
si1=l6;
si2=12U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
l9=sj1;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=32U;
si0+=si1;
si1=l6;
si2=32U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=40U;
si0+=si1;
si1=l6;
si2=40U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l6;
si1=l6;
sj1=i64_load(&i->m0,(U64)si1+4U);
l10=sj1;
i64_store(&i->m0,(U64)si0+80U,sj1);
si0=l0;
si1=20U;
si0+=si1;
si1=l2;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=12U;
si0+=si1;
sj1=l9;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
sj1=l10;
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l0;
si1=l5;
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
f3385(i,si0);
si0=l1;
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L3;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
f15271(i,si0);
L3:;
si0=l1;
si1=12U;
si0+=si1;
l0=si0;
f3385(i,si0);
si0=l1;
si1=16U;
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
si0=l6;
si1=112U;
si0+=si1;
i->g0=si0;
L0:;
}

void f3152(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4) {
U32 l5=0;
U32 l6=0;
U32 l7=0;
U64 l8=0;
U64 l9=0;
U32 si0,si1,si2,si3;
U64 sj1;
si0=i->g0;
si1=112U;
si0-=si1;
l5=si0;
i->g0=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+16U);
l6=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+24U);
l7=si0;
si0=l5;
si1=l2;
si2=l3;
si3=l4;
f3063(i,si0,si1,si2,si3);
si0=l5;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
si1=5U;
si0=si0 != si1;
if(si0){
goto L2;
}
si0=l5;
si1=48U;
si0+=si1;
si1=12U;
si0+=si1;
si1=l5;
si2=12U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=48U;
si0+=si1;
si1=20U;
si0+=si1;
si1=l5;
si2=20U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=l5;
sj1=i64_load(&i->m0,(U64)si1+4U);
i64_store(&i->m0,(U64)si0+52U,sj1);
si0=l5;
si1=l6;
i32_store(&i->m0,(U64)si0+72U,si1);
si0=l5;
si1=l7;
i32_store(&i->m0,(U64)si0+48U,si1);
si0=l5;
si1=80U;
si0+=si1;
si1=24U;
si0+=si1;
si1=l1;
si2=24U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=80U;
si0+=si1;
si1=16U;
si0+=si1;
si1=l1;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=80U;
si0+=si1;
si1=8U;
si0+=si1;
si1=l1;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=l1;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+80U,sj1);
si0=l5;
si1=l6;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l5;
si1=98U;
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=l6;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l0;
si1=l5;
si2=80U;
si1+=si2;
si2=l5;
si3=48U;
si2+=si3;
si3=l5;
f3022(i,si0,si1,si2,si3);
goto L1;
L2:;
si0=l0;
si1=l5;
sj1=i64_load(&i->m0,(U64)si1+24U);
i64_store(&i->m0,(U64)si0+24U,sj1);
si0=l5;
si1=80U;
si0+=si1;
si1=16U;
si0+=si1;
si1=l5;
si2=20U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
l2=si1;
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=88U;
si0+=si1;
si1=l5;
si2=12U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
l8=sj1;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=32U;
si0+=si1;
si1=l5;
si2=32U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=40U;
si0+=si1;
si1=l5;
si2=40U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=l5;
sj1=i64_load(&i->m0,(U64)si1+4U);
l9=sj1;
i64_store(&i->m0,(U64)si0+80U,sj1);
si0=l0;
si1=20U;
si0+=si1;
si1=l2;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=12U;
si0+=si1;
sj1=l8;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
sj1=l9;
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l0;
si1=l4;
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
f3385(i,si0);
si0=l1;
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L3;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
f15271(i,si0);
L3:;
si0=l1;
si1=12U;
si0+=si1;
l0=si0;
f3385(i,si0);
si0=l1;
si1=16U;
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
si0=l5;
si1=112U;
si0+=si1;
i->g0=si0;
L0:;
}

void f3153(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4,U32 l5) {
U32 l6=0;
U32 l7=0;
U32 l8=0;
U32 si0,si1,si2,si3;
U64 sj1;
si0=l4;
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
si1=-2U;
si0+=si1;
l8=si0;
si1=1U;
si2=l8;
si3=96U;
si2=si2 < si3;
si0=si2?si0:si1;
switch(si0){
case 0:
goto L5;
case 1:
goto L4;
case 2:
goto L1;
case 3:
goto L1;
case 4:
goto L3;
default:
goto L1;
}
L5:;
si0=l3;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L1;
}
goto L2;
L4:;
si0=l7;
si0=!(si0);
if(si0){
goto L1;
}
si0=l3;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L2;
}
goto L1;
L3:;
si0=l3;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L1;
}
L2:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+4U);
f15271(i,si0);
L1:;
si0=l4;
if(si0){
goto L10;
}
si0=0U;
l3=si0;
goto L9;
L10:;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=36U;
si0=f15269(i,si0);
l3=si0;
si0=!(si0);
if(si0){
goto L8;
}
si0=l3;
si1=l4;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=l2;
si2=4U;
si1+=si2;
l2=si1;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l3;
si1=12U;
si0+=si1;
si1=l2;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=20U;
si0+=si1;
si1=l2;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=28U;
si0+=si1;
si1=l2;
si2=24U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
L9:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
si1=-2U;
si0+=si1;
l2=si0;
si1=1U;
si2=l2;
si3=96U;
si2=si2 < si3;
si0=si2?si0:si1;
switch(si0){
case 0:
goto L13;
case 1:
goto L12;
case 2:
goto L6;
case 3:
goto L6;
case 4:
goto L11;
default:
goto L6;
}
L13:;
si0=l1;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L6;
}
goto L7;
L12:;
si0=l4;
si0=!(si0);
if(si0){
goto L6;
}
si0=l1;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L7;
}
goto L6;
L11:;
si0=l1;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L7;
}
goto L6;
L8:;
si0=4U;
si1=36U;
f52(i,si0,si1);
UNREACHABLE;
L7:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
f15271(i,si0);
L6:;
si0=l5;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si1=98U;
si0=si0 == si1;
if(si0){
goto L14;
}
si0=l5;
si0=i32_load(&i->m0,(U64)si0+8U);
l2=si0;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+4U);
l4=si0;
si0=l1;
si1=-2U;
si0+=si1;
l5=si0;
si1=1U;
si2=l5;
si3=96U;
si2=si2 < si3;
si0=si2?si0:si1;
switch(si0){
case 0:
goto L18;
case 1:
goto L17;
case 2:
goto L14;
case 3:
goto L14;
case 4:
goto L16;
default:
goto L14;
}
L18:;
si0=l2;
si0=!(si0);
if(si0){
goto L14;
}
goto L15;
L17:;
si0=l1;
si0=!(si0);
if(si0){
goto L14;
}
L16:;
si0=l2;
si0=!(si0);
if(si0){
goto L14;
}
L15:;
si0=l4;
f15271(i,si0);
L14:;
si0=l0;
sj1=17179869189ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=44U;
si0+=si1;
si1=l6;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=40U;
si0+=si1;
si1=l3;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=32U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=24U;
si0+=si1;
sj1=17179869184ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=16U;
si0+=si1;
sj1=4ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=8U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
L0:;
}

void f3154(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4) {
U32 l5=0;
U32 l6=0;
U32 si0,si1,si2,si3;
U64 sj1;
si0=l3;
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si1=-2U;
si0+=si1;
l6=si0;
si1=1U;
si2=l6;
si3=96U;
si2=si2 < si3;
si0=si2?si0:si1;
switch(si0){
case 0:
goto L5;
case 1:
goto L4;
case 2:
goto L1;
case 3:
goto L1;
case 4:
goto L3;
default:
goto L1;
}
L5:;
si0=l2;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L1;
}
goto L2;
L4:;
si0=l5;
si0=!(si0);
if(si0){
goto L1;
}
si0=l2;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L2;
}
goto L1;
L3:;
si0=l2;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L1;
}
L2:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+4U);
f15271(i,si0);
L1:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si1=-2U;
si0+=si1;
l2=si0;
si1=1U;
si2=l2;
si3=96U;
si2=si2 < si3;
si0=si2?si0:si1;
switch(si0){
case 0:
goto L10;
case 1:
goto L9;
case 2:
goto L6;
case 3:
goto L6;
case 4:
goto L8;
default:
goto L6;
}
L10:;
si0=l1;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L6;
}
goto L7;
L9:;
si0=l6;
si0=!(si0);
if(si0){
goto L6;
}
si0=l1;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L7;
}
goto L6;
L8:;
si0=l1;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L6;
}
L7:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
f15271(i,si0);
L6:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si1=98U;
si0=si0 == si1;
if(si0){
goto L11;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0+8U);
l6=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+4U);
l4=si0;
si0=l2;
si1=-2U;
si0+=si1;
l1=si0;
si1=1U;
si2=l1;
si3=96U;
si2=si2 < si3;
si0=si2?si0:si1;
switch(si0){
case 0:
goto L15;
case 1:
goto L14;
case 2:
goto L11;
case 3:
goto L11;
case 4:
goto L13;
default:
goto L11;
}
L15:;
si0=l6;
si0=!(si0);
if(si0){
goto L11;
}
goto L12;
L14:;
si0=l2;
si0=!(si0);
if(si0){
goto L11;
}
L13:;
si0=l6;
si0=!(si0);
if(si0){
goto L11;
}
L12:;
si0=l4;
f15271(i,si0);
L11:;
si0=l0;
sj1=17179869189ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=44U;
si0+=si1;
si1=l3;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=40U;
si0+=si1;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=32U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=24U;
si0+=si1;
sj1=17179869184ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=16U;
si0+=si1;
sj1=4ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=8U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
L0:;
}

void f3155(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4,U32 l5,U32 l6) {
U32 l7=0;
U32 l8=0;
U64 l9=0;
U32 l10=0;
U32 si0,si1,si2,si3;
U64 sj0,sj1;
si0=l5;
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
si0=l3;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l8=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si0=l3;
sj0=i64_load(&i->m0,(U64)si0);
l9=sj0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
l10=si0;
si1=-2U;
si0+=si1;
l3=si0;
si1=1U;
si2=l3;
si3=96U;
si2=si2 < si3;
si0=si2?si0:si1;
switch(si0){
case 0:
goto L5;
case 1:
goto L4;
case 2:
goto L1;
case 3:
goto L1;
case 4:
goto L3;
default:
goto L1;
}
L5:;
si0=l4;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L1;
}
goto L2;
L4:;
si0=l10;
si0=!(si0);
if(si0){
goto L1;
}
si0=l4;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L2;
}
goto L1;
L3:;
si0=l4;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L1;
}
L2:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+4U);
f15271(i,si0);
L1:;
si0=l5;
if(si0){
goto L10;
}
si0=0U;
l4=si0;
goto L9;
L10:;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=36U;
si0=f15269(i,si0);
l4=si0;
si0=!(si0);
if(si0){
goto L8;
}
si0=l4;
si1=l5;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=l2;
si2=4U;
si1+=si2;
l3=si1;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l4;
si1=12U;
si0+=si1;
si1=l3;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=20U;
si0+=si1;
si1=l3;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=28U;
si0+=si1;
si1=l3;
si2=24U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
L9:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si1=-2U;
si0+=si1;
l3=si0;
si1=1U;
si2=l3;
si3=96U;
si2=si2 < si3;
si0=si2?si0:si1;
switch(si0){
case 0:
goto L13;
case 1:
goto L12;
case 2:
goto L6;
case 3:
goto L6;
case 4:
goto L11;
default:
goto L6;
}
L13:;
si0=l1;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L6;
}
goto L7;
L12:;
si0=l2;
si0=!(si0);
if(si0){
goto L6;
}
si0=l1;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L7;
}
goto L6;
L11:;
si0=l1;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L7;
}
goto L6;
L8:;
si0=4U;
si1=36U;
f52(i,si0,si1);
UNREACHABLE;
L7:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
f15271(i,si0);
L6:;
si0=l6;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si1=98U;
si0=si0 == si1;
if(si0){
goto L14;
}
si0=l6;
si0=i32_load(&i->m0,(U64)si0+8U);
l2=si0;
si0=l6;
si0=i32_load(&i->m0,(U64)si0+4U);
l6=si0;
si0=l1;
si1=-2U;
si0+=si1;
l3=si0;
si1=1U;
si2=l3;
si3=96U;
si2=si2 < si3;
si0=si2?si0:si1;
switch(si0){
case 0:
goto L18;
case 1:
goto L17;
case 2:
goto L14;
case 3:
goto L14;
case 4:
goto L16;
default:
goto L14;
}
L18:;
si0=l2;
si0=!(si0);
if(si0){
goto L14;
}
goto L15;
L17:;
si0=l1;
si0=!(si0);
if(si0){
goto L14;
}
L16:;
si0=l2;
si0=!(si0);
if(si0){
goto L14;
}
L15:;
si0=l6;
f15271(i,si0);
L14:;
si0=l0;
sj1=17179869189ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=44U;
si0+=si1;
si1=l7;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=40U;
si0+=si1;
si1=l4;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=36U;
si0+=si1;
si1=l8;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=28U;
si0+=si1;
sj1=l9;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=24U;
si0+=si1;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=16U;
si0+=si1;
sj1=4ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=8U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
L0:;
}

void f3156(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4,U32 l5) {
U32 l6=0;
U64 l7=0;
U32 l8=0;
U32 si0,si1,si2,si3;
U64 sj0,sj1;
si0=l4;
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
si0=l2;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si0=l2;
sj0=i64_load(&i->m0,(U64)si0);
l7=sj0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
l8=si0;
si1=-2U;
si0+=si1;
l2=si0;
si1=1U;
si2=l2;
si3=96U;
si2=si2 < si3;
si0=si2?si0:si1;
switch(si0){
case 0:
goto L5;
case 1:
goto L4;
case 2:
goto L1;
case 3:
goto L1;
case 4:
goto L3;
default:
goto L1;
}
L5:;
si0=l3;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L1;
}
goto L2;
L4:;
si0=l8;
si0=!(si0);
if(si0){
goto L1;
}
si0=l3;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L2;
}
goto L1;
L3:;
si0=l3;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L1;
}
L2:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+4U);
f15271(i,si0);
L1:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si1=-2U;
si0+=si1;
l3=si0;
si1=1U;
si2=l3;
si3=96U;
si2=si2 < si3;
si0=si2?si0:si1;
switch(si0){
case 0:
goto L10;
case 1:
goto L9;
case 2:
goto L6;
case 3:
goto L6;
case 4:
goto L8;
default:
goto L6;
}
L10:;
si0=l1;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L6;
}
goto L7;
L9:;
si0=l2;
si0=!(si0);
if(si0){
goto L6;
}
si0=l1;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L7;
}
goto L6;
L8:;
si0=l1;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L6;
}
L7:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
f15271(i,si0);
L6:;
si0=l5;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si1=98U;
si0=si0 == si1;
if(si0){
goto L11;
}
si0=l5;
si0=i32_load(&i->m0,(U64)si0+8U);
l2=si0;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+4U);
l5=si0;
si0=l3;
si1=-2U;
si0+=si1;
l1=si0;
si1=1U;
si2=l1;
si3=96U;
si2=si2 < si3;
si0=si2?si0:si1;
switch(si0){
case 0:
goto L15;
case 1:
goto L14;
case 2:
goto L11;
case 3:
goto L11;
case 4:
goto L13;
default:
goto L11;
}
L15:;
si0=l2;
si0=!(si0);
if(si0){
goto L11;
}
goto L12;
L14:;
si0=l3;
si0=!(si0);
if(si0){
goto L11;
}
L13:;
si0=l2;
si0=!(si0);
if(si0){
goto L11;
}
L12:;
si0=l5;
f15271(i,si0);
L11:;
si0=l0;
sj1=17179869189ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=44U;
si0+=si1;
si1=l4;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=40U;
si0+=si1;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=36U;
si0+=si1;
si1=l6;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=28U;
si0+=si1;
sj1=l7;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=24U;
si0+=si1;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=16U;
si0+=si1;
sj1=4ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=8U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
L0:;
}

void f3157(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U32 l5=0;
U32 l6=0;
U64 l7=0;
U32 l8=0;
U64 l9=0;
U32 si0,si1,si2,si3,si4,si5;
U64 sj0,sj1;
si0=i->g0;
si1=160U;
si0-=si1;
l4=si0;
i->g0=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+24U);
l5=si0;
si0=l4;
si1=72U;
si0+=si1;
si1=12U;
si0+=si1;
si1=l2;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=72U;
si0+=si1;
si1=20U;
si0+=si1;
si1=l2;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=100U;
si0+=si1;
si1=l2;
si2=24U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=108U;
si0+=si1;
si1=l2;
si2=32U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=l2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+76U,sj1);
si0=l4;
si1=l2;
si1=i32_load(&i->m0,(U64)si1+40U);
l6=si1;
i32_store(&i->m0,(U64)si0+112U,si1);
si0=l4;
si1=l2;
si1=i32_load(&i->m0,(U64)si1+36U);
i32_store(&i->m0,(U64)si0+72U,si1);
si0=l4;
si1=l5;
i32_store(&i->m0,(U64)si0+152U,si1);
si0=l4;
si1=l5;
i32_store(&i->m0,(U64)si0+148U,si1);
si0=l4;
si1=l5;
i32_store(&i->m0,(U64)si0+144U,si1);
si0=l4;
si1=l6;
i32_store(&i->m0,(U64)si0+136U,si1);
si0=l4;
si1=0U;
i32_store(&i->m0,(U64)si0+128U,si1);
si0=l4;
sj1=4ULL;
i64_store(&i->m0,(U64)si0+120U,sj1);
si0=l4;
si1=l6;
i32_store(&i->m0,(U64)si0+132U,si1);
si0=l4;
si1=24U;
si0+=si1;
si1=l4;
si2=144U;
si1+=si2;
si2=l1;
si3=l4;
si4=72U;
si3+=si4;
si4=l4;
si5=120U;
si4+=si5;
f3027(i,si0,si1,si2,si3,si4);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+24U);
l2=si0;
si1=5U;
si0=si0 != si1;
if(si0){
goto L4;
}
si0=l4;
si1=8U;
si0+=si1;
si1=8U;
si0+=si1;
si1=l4;
si2=24U;
si1+=si2;
si2=12U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
l2=si1;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1+28U);
l7=sj1;
i64_store(&i->m0,(U64)si0+8U,sj1);
si0=l4;
si1=24U;
si0+=si1;
si1=16U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si0=l4;
si1=24U;
si0+=si1;
si1=20U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si0=l4;
si1=24U;
si0+=si1;
si1=8U;
si0+=si1;
si1=l2;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
sj1=l7;
i64_store(&i->m0,(U64)si0+24U,sj1);
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si1=98U;
si0=si0 == si1;
if(si0){
goto L2;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0+8U);
l6=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+4U);
l8=si0;
si0=l2;
si1=-2U;
si0+=si1;
l3=si0;
si1=1U;
si2=l3;
si3=96U;
si2=si2 < si3;
si0=si2?si0:si1;
switch(si0){
case 0:
goto L7;
case 1:
goto L6;
case 2:
goto L2;
case 3:
goto L2;
case 4:
goto L5;
default:
goto L2;
}
L7:;
si0=l6;
si0=!(si0);
if(si0){
goto L2;
}
goto L3;
L6:;
si0=l2;
si0=!(si0);
if(si0){
goto L2;
}
L5:;
si0=l6;
if(si0){
goto L3;
}
goto L2;
L4:;
si0=l0;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1+48U);
i64_store(&i->m0,(U64)si0+24U,sj1);
si0=l4;
si1=8U;
si0+=si1;
si1=8U;
si0+=si1;
si1=l4;
si2=24U;
si1+=si2;
si2=12U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
l5=si1;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=32U;
si0+=si1;
si1=l4;
si2=24U;
si1+=si2;
si2=32U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=40U;
si0+=si1;
si1=l4;
si2=24U;
si1+=si2;
si2=40U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1+28U);
l7=sj1;
i64_store(&i->m0,(U64)si0+8U,sj1);
si0=l4;
sj0=i64_load(&i->m0,(U64)si0+40U);
l9=sj0;
si0=l0;
si1=12U;
si0+=si1;
si1=l5;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
sj1=l7;
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l0;
sj1=l9;
i64_store(&i->m0,(U64)si0+16U,sj1);
si0=l0;
si1=l2;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si1=-2U;
si0+=si1;
l0=si0;
si1=1U;
si2=l0;
si3=96U;
si2=si2 < si3;
si0=si2?si0:si1;
switch(si0){
case 0:
goto L11;
case 1:
goto L10;
case 2:
goto L1;
case 3:
goto L1;
case 4:
goto L9;
default:
goto L1;
}
L11:;
si0=l3;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L1;
}
goto L8;
L10:;
si0=l2;
si0=!(si0);
if(si0){
goto L1;
}
si0=l3;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L8;
}
goto L1;
L9:;
si0=l3;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L1;
}
L8:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+4U);
f15271(i,si0);
goto L1;
L3:;
si0=l8;
f15271(i,si0);
L2:;
si0=l0;
sj1=17179869189ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=24U;
si0+=si1;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=16U;
si0+=si1;
sj1=4ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=8U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=28U;
si0+=si1;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1+24U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=44U;
si0+=si1;
si1=l1;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=40U;
si0+=si1;
si1=l5;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=36U;
si0+=si1;
si1=l4;
si2=24U;
si1+=si2;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
L1:;
si0=l4;
si1=160U;
si0+=si1;
i->g0=si0;
L0:;
}

void f3158(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U32 l4=0;
U32 l5=0;
U64 l6=0;
U32 l7=0;
U32 l8=0;
U32 l9=0;
U64 l10=0;
U32 si0,si1,si2,si3,si4,si5;
U64 sj0,sj1;
si0=i->g0;
si1=160U;
si0-=si1;
l3=si0;
i->g0=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+24U);
l4=si0;
si0=l3;
si1=0U;
i32_store(&i->m0,(U64)si0+76U,si1);
si0=l3;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+28U);
l5=si1;
i32_store(&i->m0,(U64)si0+112U,si1);
si0=l3;
si1=l5;
i32_store(&i->m0,(U64)si0+72U,si1);
si0=l3;
si1=l4;
i32_store(&i->m0,(U64)si0+152U,si1);
si0=l3;
si1=l4;
i32_store(&i->m0,(U64)si0+148U,si1);
si0=l3;
si1=l4;
i32_store(&i->m0,(U64)si0+144U,si1);
si0=l3;
si1=l5;
i32_store(&i->m0,(U64)si0+136U,si1);
si0=l3;
si1=0U;
i32_store(&i->m0,(U64)si0+128U,si1);
si0=l3;
sj1=4ULL;
i64_store(&i->m0,(U64)si0+120U,sj1);
si0=l3;
si1=l5;
i32_store(&i->m0,(U64)si0+132U,si1);
si0=l3;
si1=24U;
si0+=si1;
si1=l3;
si2=144U;
si1+=si2;
si2=l1;
si3=l3;
si4=72U;
si3+=si4;
si4=l3;
si5=120U;
si4+=si5;
f3027(i,si0,si1,si2,si3,si4);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+24U);
l1=si0;
si1=5U;
si0=si0 != si1;
if(si0){
goto L4;
}
si0=l3;
si1=8U;
si0+=si1;
si1=8U;
si0+=si1;
si1=l3;
si2=36U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
l1=si1;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=l3;
sj1=i64_load(&i->m0,(U64)si1+28U);
l6=sj1;
i64_store(&i->m0,(U64)si0+8U,sj1);
si0=l3;
si1=24U;
si0+=si1;
si1=16U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
si0=l3;
si1=44U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si0=l3;
si1=24U;
si0+=si1;
si1=8U;
si0+=si1;
l7=si0;
si1=l1;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
sj1=l6;
i64_store(&i->m0,(U64)si0+24U,sj1);
si0=l2;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si1=98U;
si0=si0 == si1;
if(si0){
goto L2;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0+8U);
l8=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+4U);
l9=si0;
si0=l1;
si1=-2U;
si0+=si1;
l2=si0;
si1=1U;
si2=l2;
si3=96U;
si2=si2 < si3;
si0=si2?si0:si1;
switch(si0){
case 0:
goto L7;
case 1:
goto L6;
case 2:
goto L2;
case 3:
goto L2;
case 4:
goto L5;
default:
goto L2;
}
L7:;
si0=l8;
si0=!(si0);
if(si0){
goto L2;
}
goto L3;
L6:;
si0=l1;
si0=!(si0);
if(si0){
goto L2;
}
L5:;
si0=l8;
if(si0){
goto L3;
}
goto L2;
L4:;
si0=l0;
si1=l3;
sj1=i64_load(&i->m0,(U64)si1+48U);
i64_store(&i->m0,(U64)si0+24U,sj1);
si0=l3;
si1=8U;
si0+=si1;
si1=8U;
si0+=si1;
si1=l3;
si2=24U;
si1+=si2;
si2=12U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
l4=si1;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=32U;
si0+=si1;
si1=l3;
si2=24U;
si1+=si2;
si2=32U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=40U;
si0+=si1;
si1=l3;
si2=24U;
si1+=si2;
si2=40U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=l3;
sj1=i64_load(&i->m0,(U64)si1+28U);
l6=sj1;
i64_store(&i->m0,(U64)si0+8U,sj1);
si0=l3;
sj0=i64_load(&i->m0,(U64)si0+40U);
l10=sj0;
si0=l0;
si1=12U;
si0+=si1;
si1=l4;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
sj1=l6;
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l0;
sj1=l10;
i64_store(&i->m0,(U64)si0+16U,sj1);
si0=l0;
si1=l1;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si1=-2U;
si0+=si1;
l0=si0;
si1=1U;
si2=l0;
si3=96U;
si2=si2 < si3;
si0=si2?si0:si1;
switch(si0){
case 0:
goto L11;
case 1:
goto L10;
case 2:
goto L1;
case 3:
goto L1;
case 4:
goto L9;
default:
goto L1;
}
L11:;
si0=l2;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L1;
}
goto L8;
L10:;
si0=l1;
si0=!(si0);
if(si0){
goto L1;
}
si0=l2;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L8;
}
goto L1;
L9:;
si0=l2;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L1;
}
L8:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+4U);
f15271(i,si0);
goto L1;
L3:;
si0=l9;
f15271(i,si0);
L2:;
si0=l0;
sj1=17179869189ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=24U;
si0+=si1;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=16U;
si0+=si1;
sj1=4ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=8U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=28U;
si0+=si1;
si1=l3;
sj1=i64_load(&i->m0,(U64)si1+24U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=44U;
si0+=si1;
si1=l5;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=40U;
si0+=si1;
si1=l4;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=36U;
si0+=si1;
si1=l7;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
L1:;
si0=l3;
si1=160U;
si0+=si1;
i->g0=si0;
L0:;
}

void f3159(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4) {
U32 l5=0;
U32 l6=0;
U64 l7=0;
U32 l8=0;
U64 l9=0;
U32 si0,si1,si2,si3,si4,si5;
U64 sj0,sj1;
si0=i->g0;
si1=160U;
si0-=si1;
l5=si0;
i->g0=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+24U);
l6=si0;
si0=l5;
si1=72U;
si0+=si1;
si1=12U;
si0+=si1;
si1=l2;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=72U;
si0+=si1;
si1=20U;
si0+=si1;
si1=l2;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=100U;
si0+=si1;
si1=l2;
si2=24U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=108U;
si0+=si1;
si1=l2;
si2=32U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=l2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+76U,sj1);
si0=l5;
si1=l2;
si1=i32_load(&i->m0,(U64)si1+40U);
i32_store(&i->m0,(U64)si0+112U,si1);
si0=l5;
si1=l2;
si1=i32_load(&i->m0,(U64)si1+36U);
i32_store(&i->m0,(U64)si0+72U,si1);
si0=l5;
si1=l6;
i32_store(&i->m0,(U64)si0+152U,si1);
si0=l5;
si1=l6;
i32_store(&i->m0,(U64)si0+148U,si1);
si0=l5;
si1=l6;
i32_store(&i->m0,(U64)si0+144U,si1);
si0=l5;
si1=120U;
si0+=si1;
si1=8U;
si0+=si1;
si1=l3;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=l3;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+120U,sj1);
si0=l5;
si1=l3;
sj1=i64_load(&i->m0,(U64)si1+12U);
i64_store(&i->m0,(U64)si0+132U,sj1);
si0=l5;
si1=24U;
si0+=si1;
si1=l5;
si2=144U;
si1+=si2;
si2=l1;
si3=l5;
si4=72U;
si3+=si4;
si4=l5;
si5=120U;
si4+=si5;
f3027(i,si0,si1,si2,si3,si4);
si0=l5;
si0=i32_load(&i->m0,(U64)si0+24U);
l2=si0;
si1=5U;
si0=si0 != si1;
if(si0){
goto L4;
}
si0=l5;
si1=8U;
si0+=si1;
si1=8U;
si0+=si1;
si1=l5;
si2=24U;
si1+=si2;
si2=12U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
l2=si1;
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=l5;
sj1=i64_load(&i->m0,(U64)si1+28U);
l7=sj1;
i64_store(&i->m0,(U64)si0+8U,sj1);
si0=l5;
si1=24U;
si0+=si1;
si1=16U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=l5;
si1=24U;
si0+=si1;
si1=20U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si0=l5;
si1=24U;
si0+=si1;
si1=8U;
si0+=si1;
si1=l2;
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
sj1=l7;
i64_store(&i->m0,(U64)si0+24U,sj1);
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si1=98U;
si0=si0 == si1;
if(si0){
goto L2;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0+8U);
l1=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+4U);
l8=si0;
si0=l2;
si1=-2U;
si0+=si1;
l4=si0;
si1=1U;
si2=l4;
si3=96U;
si2=si2 < si3;
si0=si2?si0:si1;
switch(si0){
case 0:
goto L7;
case 1:
goto L6;
case 2:
goto L2;
case 3:
goto L2;
case 4:
goto L5;
default:
goto L2;
}
L7:;
si0=l1;
si0=!(si0);
if(si0){
goto L2;
}
goto L3;
L6:;
si0=l2;
si0=!(si0);
if(si0){
goto L2;
}
L5:;
si0=l1;
if(si0){
goto L3;
}
goto L2;
L4:;
si0=l0;
si1=l5;
sj1=i64_load(&i->m0,(U64)si1+48U);
i64_store(&i->m0,(U64)si0+24U,sj1);
si0=l5;
si1=8U;
si0+=si1;
si1=8U;
si0+=si1;
si1=l5;
si2=24U;
si1+=si2;
si2=12U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
l3=si1;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=32U;
si0+=si1;
si1=l5;
si2=24U;
si1+=si2;
si2=32U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=40U;
si0+=si1;
si1=l5;
si2=24U;
si1+=si2;
si2=40U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=l5;
sj1=i64_load(&i->m0,(U64)si1+28U);
l7=sj1;
i64_store(&i->m0,(U64)si0+8U,sj1);
si0=l5;
sj0=i64_load(&i->m0,(U64)si0+40U);
l9=sj0;
si0=l0;
si1=12U;
si0+=si1;
si1=l3;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
sj1=l7;
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l0;
sj1=l9;
i64_store(&i->m0,(U64)si0+16U,sj1);
si0=l0;
si1=l2;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si1=-2U;
si0+=si1;
l0=si0;
si1=1U;
si2=l0;
si3=96U;
si2=si2 < si3;
si0=si2?si0:si1;
switch(si0){
case 0:
goto L11;
case 1:
goto L10;
case 2:
goto L1;
case 3:
goto L1;
case 4:
goto L9;
default:
goto L1;
}
L11:;
si0=l4;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L1;
}
goto L8;
L10:;
si0=l2;
si0=!(si0);
if(si0){
goto L1;
}
si0=l4;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L8;
}
goto L1;
L9:;
si0=l4;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L1;
}
L8:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+4U);
f15271(i,si0);
goto L1;
L3:;
si0=l8;
f15271(i,si0);
L2:;
si0=l0;
sj1=17179869189ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=24U;
si0+=si1;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=16U;
si0+=si1;
sj1=4ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=8U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=28U;
si0+=si1;
si1=l5;
sj1=i64_load(&i->m0,(U64)si1+24U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=44U;
si0+=si1;
si1=l6;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=40U;
si0+=si1;
si1=l3;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=36U;
si0+=si1;
si1=l5;
si2=24U;
si1+=si2;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
L1:;
si0=l5;
si1=160U;
si0+=si1;
i->g0=si0;
L0:;
}

void f3160(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U32 l5=0;
U32 l6=0;
U64 l7=0;
U32 l8=0;
U64 l9=0;
U32 si0,si1,si2,si3,si4,si5;
U64 sj0,sj1;
si0=i->g0;
si1=160U;
si0-=si1;
l4=si0;
i->g0=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+24U);
l5=si0;
si0=l4;
si1=0U;
i32_store(&i->m0,(U64)si0+76U,si1);
si0=l4;
si1=l2;
si1=i32_load(&i->m0,(U64)si1+12U);
l6=si1;
i32_store(&i->m0,(U64)si0+112U,si1);
si0=l4;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+28U);
i32_store(&i->m0,(U64)si0+72U,si1);
si0=l4;
si1=l5;
i32_store(&i->m0,(U64)si0+152U,si1);
si0=l4;
si1=l5;
i32_store(&i->m0,(U64)si0+148U,si1);
si0=l4;
si1=l5;
i32_store(&i->m0,(U64)si0+144U,si1);
si0=l4;
si1=120U;
si0+=si1;
si1=8U;
si0+=si1;
si1=l2;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=l6;
i32_store(&i->m0,(U64)si0+132U,si1);
si0=l4;
si1=l2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+120U,sj1);
si0=l4;
si1=l2;
si1=i32_load(&i->m0,(U64)si1+16U);
i32_store(&i->m0,(U64)si0+136U,si1);
si0=l4;
si1=24U;
si0+=si1;
si1=l4;
si2=144U;
si1+=si2;
si2=l1;
si3=l4;
si4=72U;
si3+=si4;
si4=l4;
si5=120U;
si4+=si5;
f3027(i,si0,si1,si2,si3,si4);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+24U);
l2=si0;
si1=5U;
si0=si0 != si1;
if(si0){
goto L4;
}
si0=l4;
si1=8U;
si0+=si1;
si1=8U;
si0+=si1;
si1=l4;
si2=36U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
l2=si1;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1+28U);
l7=sj1;
i64_store(&i->m0,(U64)si0+8U,sj1);
si0=l4;
si1=24U;
si0+=si1;
si1=16U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si0=l4;
si1=44U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si0=l4;
si1=24U;
si0+=si1;
si1=8U;
si0+=si1;
si1=l2;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
sj1=l7;
i64_store(&i->m0,(U64)si0+24U,sj1);
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si1=98U;
si0=si0 == si1;
if(si0){
goto L2;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0+8U);
l6=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+4U);
l8=si0;
si0=l2;
si1=-2U;
si0+=si1;
l3=si0;
si1=1U;
si2=l3;
si3=96U;
si2=si2 < si3;
si0=si2?si0:si1;
switch(si0){
case 0:
goto L7;
case 1:
goto L6;
case 2:
goto L2;
case 3:
goto L2;
case 4:
goto L5;
default:
goto L2;
}
L7:;
si0=l6;
si0=!(si0);
if(si0){
goto L2;
}
goto L3;
L6:;
si0=l2;
si0=!(si0);
if(si0){
goto L2;
}
L5:;
si0=l6;
if(si0){
goto L3;
}
goto L2;
L4:;
si0=l0;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1+48U);
i64_store(&i->m0,(U64)si0+24U,sj1);
si0=l4;
si1=8U;
si0+=si1;
si1=8U;
si0+=si1;
si1=l4;
si2=24U;
si1+=si2;
si2=12U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
l1=si1;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=32U;
si0+=si1;
si1=l4;
si2=24U;
si1+=si2;
si2=32U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=40U;
si0+=si1;
si1=l4;
si2=24U;
si1+=si2;
si2=40U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1+28U);
l7=sj1;
i64_store(&i->m0,(U64)si0+8U,sj1);
si0=l4;
sj0=i64_load(&i->m0,(U64)si0+40U);
l9=sj0;
si0=l0;
si1=12U;
si0+=si1;
si1=l1;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
sj1=l7;
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l0;
sj1=l9;
i64_store(&i->m0,(U64)si0+16U,sj1);
si0=l0;
si1=l2;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si1=-2U;
si0+=si1;
l0=si0;
si1=1U;
si2=l0;
si3=96U;
si2=si2 < si3;
si0=si2?si0:si1;
switch(si0){
case 0:
goto L11;
case 1:
goto L10;
case 2:
goto L1;
case 3:
goto L1;
case 4:
goto L9;
default:
goto L1;
}
L11:;
si0=l3;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L1;
}
goto L8;
L10:;
si0=l2;
si0=!(si0);
if(si0){
goto L1;
}
si0=l3;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L8;
}
goto L1;
L9:;
si0=l3;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L1;
}
L8:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+4U);
f15271(i,si0);
goto L1;
L3:;
si0=l8;
f15271(i,si0);
L2:;
si0=l0;
sj1=17179869189ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=24U;
si0+=si1;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=16U;
si0+=si1;
sj1=4ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=8U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=28U;
si0+=si1;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1+24U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=44U;
si0+=si1;
si1=l5;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=40U;
si0+=si1;
si1=l1;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=36U;
si0+=si1;
si1=l4;
si2=24U;
si1+=si2;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
L1:;
si0=l4;
si1=160U;
si0+=si1;
i->g0=si0;
L0:;
}

void f3161(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4) {
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 si0,si1,si2,si3;
U64 sj1;
si0=l4;
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si1=-2U;
si0+=si1;
l7=si0;
si1=1U;
si2=l7;
si3=96U;
si2=si2 < si3;
si0=si2?si0:si1;
switch(si0){
case 0:
goto L5;
case 1:
goto L4;
case 2:
goto L1;
case 3:
goto L1;
case 4:
goto L3;
default:
goto L1;
}
L5:;
si0=l3;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L1;
}
goto L2;
L4:;
si0=l6;
si0=!(si0);
if(si0){
goto L1;
}
si0=l3;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L2;
}
goto L1;
L3:;
si0=l3;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L1;
}
L2:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+4U);
f15271(i,si0);
L1:;
si0=l4;
if(si0){
goto L10;
}
si0=0U;
l3=si0;
goto L9;
L10:;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=36U;
si0=f15269(i,si0);
l3=si0;
si0=!(si0);
if(si0){
goto L8;
}
si0=l3;
si1=l4;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=l2;
si2=4U;
si1+=si2;
l2=si1;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l3;
si1=12U;
si0+=si1;
si1=l2;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=20U;
si0+=si1;
si1=l2;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=28U;
si0+=si1;
si1=l2;
si2=24U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
L9:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
si1=-2U;
si0+=si1;
l2=si0;
si1=1U;
si2=l2;
si3=96U;
si2=si2 < si3;
si0=si2?si0:si1;
switch(si0){
case 0:
goto L13;
case 1:
goto L12;
case 2:
goto L6;
case 3:
goto L6;
case 4:
goto L11;
default:
goto L6;
}
L13:;
si0=l1;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L6;
}
goto L7;
L12:;
si0=l4;
si0=!(si0);
if(si0){
goto L6;
}
si0=l1;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L7;
}
goto L6;
L11:;
si0=l1;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L7;
}
goto L6;
L8:;
si0=4U;
si1=36U;
f52(i,si0,si1);
UNREACHABLE;
L7:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
f15271(i,si0);
L6:;
si0=l0;
sj1=17179869189ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=44U;
si0+=si1;
si1=l5;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=40U;
si0+=si1;
si1=l3;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=32U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=24U;
si0+=si1;
sj1=17179869184ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=16U;
si0+=si1;
sj1=4ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=8U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
L0:;
}

void f3162(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U32 l5=0;
U32 si0,si1,si2,si3;
U64 sj1;
si0=l3;
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
si1=-2U;
si0+=si1;
l5=si0;
si1=1U;
si2=l5;
si3=96U;
si2=si2 < si3;
si0=si2?si0:si1;
switch(si0){
case 0:
goto L5;
case 1:
goto L4;
case 2:
goto L1;
case 3:
goto L1;
case 4:
goto L3;
default:
goto L1;
}
L5:;
si0=l2;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L1;
}
goto L2;
L4:;
si0=l4;
si0=!(si0);
if(si0){
goto L1;
}
si0=l2;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L2;
}
goto L1;
L3:;
si0=l2;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L1;
}
L2:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+4U);
f15271(i,si0);
L1:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si1=-2U;
si0+=si1;
l2=si0;
si1=1U;
si2=l2;
si3=96U;
si2=si2 < si3;
si0=si2?si0:si1;
switch(si0){
case 0:
goto L10;
case 1:
goto L9;
case 2:
goto L6;
case 3:
goto L6;
case 4:
goto L8;
default:
goto L6;
}
L10:;
si0=l1;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L6;
}
goto L7;
L9:;
si0=l5;
si0=!(si0);
if(si0){
goto L6;
}
si0=l1;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L7;
}
goto L6;
L8:;
si0=l1;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L6;
}
L7:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
f15271(i,si0);
L6:;
si0=l0;
sj1=17179869189ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=44U;
si0+=si1;
si1=l3;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=40U;
si0+=si1;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=32U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=24U;
si0+=si1;
sj1=17179869184ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=16U;
si0+=si1;
sj1=4ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=8U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
L0:;
}

void f3163(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4,U32 l5) {
U32 l6=0;
U32 l7=0;
U64 l8=0;
U32 l9=0;
U32 si0,si1,si2,si3;
U64 sj0,sj1;
si0=l5;
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si0=l3;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si0=l3;
sj0=i64_load(&i->m0,(U64)si0);
l8=sj0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
l9=si0;
si1=-2U;
si0+=si1;
l3=si0;
si1=1U;
si2=l3;
si3=96U;
si2=si2 < si3;
si0=si2?si0:si1;
switch(si0){
case 0:
goto L5;
case 1:
goto L4;
case 2:
goto L1;
case 3:
goto L1;
case 4:
goto L3;
default:
goto L1;
}
L5:;
si0=l4;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L1;
}
goto L2;
L4:;
si0=l9;
si0=!(si0);
if(si0){
goto L1;
}
si0=l4;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L2;
}
goto L1;
L3:;
si0=l4;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L1;
}
L2:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+4U);
f15271(i,si0);
L1:;
si0=l5;
if(si0){
goto L10;
}
si0=0U;
l4=si0;
goto L9;
L10:;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=36U;
si0=f15269(i,si0);
l4=si0;
si0=!(si0);
if(si0){
goto L8;
}
si0=l4;
si1=l5;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=l2;
si2=4U;
si1+=si2;
l3=si1;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l4;
si1=12U;
si0+=si1;
si1=l3;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=20U;
si0+=si1;
si1=l3;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=28U;
si0+=si1;
si1=l3;
si2=24U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
L9:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si1=-2U;
si0+=si1;
l3=si0;
si1=1U;
si2=l3;
si3=96U;
si2=si2 < si3;
si0=si2?si0:si1;
switch(si0){
case 0:
goto L13;
case 1:
goto L12;
case 2:
goto L6;
case 3:
goto L6;
case 4:
goto L11;
default:
goto L6;
}
L13:;
si0=l1;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L6;
}
goto L7;
L12:;
si0=l2;
si0=!(si0);
if(si0){
goto L6;
}
si0=l1;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L7;
}
goto L6;
L11:;
si0=l1;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L7;
}
goto L6;
L8:;
si0=4U;
si1=36U;
f52(i,si0,si1);
UNREACHABLE;
L7:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
f15271(i,si0);
L6:;
si0=l0;
sj1=17179869189ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=44U;
si0+=si1;
si1=l6;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=40U;
si0+=si1;
si1=l4;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=36U;
si0+=si1;
si1=l7;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=28U;
si0+=si1;
sj1=l8;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=24U;
si0+=si1;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=16U;
si0+=si1;
sj1=4ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=8U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
L0:;
}

void f3164(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4) {
U32 l5=0;
U64 l6=0;
U32 l7=0;
U32 si0,si1,si2,si3;
U64 sj0,sj1;
si0=l4;
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
si0=l2;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si0=l2;
sj0=i64_load(&i->m0,(U64)si0);
l6=sj0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
si1=-2U;
si0+=si1;
l2=si0;
si1=1U;
si2=l2;
si3=96U;
si2=si2 < si3;
si0=si2?si0:si1;
switch(si0){
case 0:
goto L5;
case 1:
goto L4;
case 2:
goto L1;
case 3:
goto L1;
case 4:
goto L3;
default:
goto L1;
}
L5:;
si0=l3;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L1;
}
goto L2;
L4:;
si0=l7;
si0=!(si0);
if(si0){
goto L1;
}
si0=l3;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L2;
}
goto L1;
L3:;
si0=l3;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L1;
}
L2:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+4U);
f15271(i,si0);
L1:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si1=-2U;
si0+=si1;
l3=si0;
si1=1U;
si2=l3;
si3=96U;
si2=si2 < si3;
si0=si2?si0:si1;
switch(si0){
case 0:
goto L10;
case 1:
goto L9;
case 2:
goto L6;
case 3:
goto L6;
case 4:
goto L8;
default:
goto L6;
}
L10:;
si0=l1;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L6;
}
goto L7;
L9:;
si0=l2;
si0=!(si0);
if(si0){
goto L6;
}
si0=l1;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L7;
}
goto L6;
L8:;
si0=l1;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L6;
}
L7:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
f15271(i,si0);
L6:;
si0=l0;
sj1=17179869189ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=44U;
si0+=si1;
si1=l4;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=40U;
si0+=si1;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=36U;
si0+=si1;
si1=l5;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=28U;
si0+=si1;
sj1=l6;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=24U;
si0+=si1;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=16U;
si0+=si1;
sj1=4ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=8U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
L0:;
}

void f3165(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U32 l4=0;
U32 l5=0;
U64 l6=0;
U64 l7=0;
U32 si0,si1,si2,si3,si4,si5;
U64 sj0,sj1;
si0=i->g0;
si1=160U;
si0-=si1;
l3=si0;
i->g0=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+24U);
l4=si0;
si0=l3;
si1=72U;
si0+=si1;
si1=12U;
si0+=si1;
si1=l2;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=72U;
si0+=si1;
si1=20U;
si0+=si1;
si1=l2;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=72U;
si0+=si1;
si1=28U;
si0+=si1;
si1=l2;
si2=24U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=72U;
si0+=si1;
si1=36U;
si0+=si1;
si1=l2;
si2=32U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=l2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+76U,sj1);
si0=l3;
si1=l2;
si1=i32_load(&i->m0,(U64)si1+40U);
l5=si1;
i32_store(&i->m0,(U64)si0+112U,si1);
si0=l3;
si1=l2;
si1=i32_load(&i->m0,(U64)si1+36U);
i32_store(&i->m0,(U64)si0+72U,si1);
si0=l3;
si1=l4;
i32_store(&i->m0,(U64)si0+152U,si1);
si0=l3;
si1=l4;
i32_store(&i->m0,(U64)si0+148U,si1);
si0=l3;
si1=l4;
i32_store(&i->m0,(U64)si0+144U,si1);
si0=l3;
si1=l5;
i32_store(&i->m0,(U64)si0+136U,si1);
si0=l3;
si1=0U;
i32_store(&i->m0,(U64)si0+128U,si1);
si0=l3;
sj1=4ULL;
i64_store(&i->m0,(U64)si0+120U,sj1);
si0=l3;
si1=l5;
i32_store(&i->m0,(U64)si0+132U,si1);
si0=l3;
si1=24U;
si0+=si1;
si1=l3;
si2=144U;
si1+=si2;
si2=l1;
si3=l3;
si4=72U;
si3+=si4;
si4=l3;
si5=120U;
si4+=si5;
f3027(i,si0,si1,si2,si3,si4);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+24U);
l2=si0;
si1=5U;
si0=si0 != si1;
if(si0){
goto L2;
}
si0=l3;
si1=8U;
si0+=si1;
si1=8U;
si0+=si1;
si1=l3;
si2=24U;
si1+=si2;
si2=12U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
l4=si1;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=l3;
sj1=i64_load(&i->m0,(U64)si1+28U);
l6=sj1;
i64_store(&i->m0,(U64)si0+8U,sj1);
si0=l3;
si1=24U;
si0+=si1;
si1=16U;
si0+=si1;
sj0=i64_load(&i->m0,(U64)si0);
l7=sj0;
si0=l3;
si1=24U;
si0+=si1;
si1=8U;
si0+=si1;
si1=l4;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
sj1=l6;
i64_store(&i->m0,(U64)si0+24U,sj1);
si0=l0;
si1=20U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=12U;
si0+=si1;
sj1=17179869184ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
sj1=4ULL;
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l0;
si1=28U;
si0+=si1;
sj1=l6;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=36U;
si0+=si1;
si1=l4;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=40U;
si0+=si1;
sj1=l7;
i64_store(&i->m0,(U64)si0,sj1);
goto L1;
L2:;
si0=l0;
si1=l3;
sj1=i64_load(&i->m0,(U64)si1+48U);
i64_store(&i->m0,(U64)si0+24U,sj1);
si0=l3;
si1=8U;
si0+=si1;
si1=8U;
si0+=si1;
si1=l3;
si2=24U;
si1+=si2;
si2=12U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
l4=si1;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=32U;
si0+=si1;
si1=l3;
si2=24U;
si1+=si2;
si2=32U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=40U;
si0+=si1;
si1=l3;
si2=24U;
si1+=si2;
si2=40U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=l3;
sj1=i64_load(&i->m0,(U64)si1+28U);
l6=sj1;
i64_store(&i->m0,(U64)si0+8U,sj1);
si0=l3;
sj0=i64_load(&i->m0,(U64)si0+40U);
l7=sj0;
si0=l0;
si1=12U;
si0+=si1;
si1=l4;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
sj1=l6;
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l0;
sj1=l7;
i64_store(&i->m0,(U64)si0+16U,sj1);
L1:;
si0=l0;
si1=l2;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=160U;
si0+=si1;
i->g0=si0;
L0:;
}

void f3166(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 l3=0;
U32 l4=0;
U64 l5=0;
U64 l6=0;
U32 si0,si1,si2,si3,si4,si5;
U64 sj0,sj1;
si0=i->g0;
si1=160U;
si0-=si1;
l2=si0;
i->g0=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+24U);
l3=si0;
si0=l2;
si1=0U;
i32_store(&i->m0,(U64)si0+76U,si1);
si0=l2;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+28U);
l4=si1;
i32_store(&i->m0,(U64)si0+112U,si1);
si0=l2;
si1=l4;
i32_store(&i->m0,(U64)si0+72U,si1);
si0=l2;
si1=l3;
i32_store(&i->m0,(U64)si0+152U,si1);
si0=l2;
si1=l3;
i32_store(&i->m0,(U64)si0+148U,si1);
si0=l2;
si1=l3;
i32_store(&i->m0,(U64)si0+144U,si1);
si0=l2;
si1=l4;
i32_store(&i->m0,(U64)si0+136U,si1);
si0=l2;
si1=0U;
i32_store(&i->m0,(U64)si0+128U,si1);
si0=l2;
sj1=4ULL;
i64_store(&i->m0,(U64)si0+120U,sj1);
si0=l2;
si1=l4;
i32_store(&i->m0,(U64)si0+132U,si1);
si0=l2;
si1=24U;
si0+=si1;
si1=l2;
si2=144U;
si1+=si2;
si2=l1;
si3=l2;
si4=72U;
si3+=si4;
si4=l2;
si5=120U;
si4+=si5;
f3027(i,si0,si1,si2,si3,si4);
si0=l2;
si0=i32_load(&i->m0,(U64)si0+24U);
l1=si0;
si1=5U;
si0=si0 != si1;
if(si0){
goto L2;
}
si0=l2;
si1=8U;
si0+=si1;
si1=8U;
si0+=si1;
si1=l2;
si2=24U;
si1+=si2;
si2=12U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
l3=si1;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=l2;
sj1=i64_load(&i->m0,(U64)si1+28U);
l5=sj1;
i64_store(&i->m0,(U64)si0+8U,sj1);
si0=l2;
si1=40U;
si0+=si1;
sj0=i64_load(&i->m0,(U64)si0);
l6=sj0;
si0=l2;
si1=24U;
si0+=si1;
si1=8U;
si0+=si1;
si1=l3;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
sj1=l5;
i64_store(&i->m0,(U64)si0+24U,sj1);
si0=l0;
si1=20U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=12U;
si0+=si1;
sj1=17179869184ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
sj1=4ULL;
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l0;
si1=28U;
si0+=si1;
sj1=l5;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=36U;
si0+=si1;
si1=l3;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=40U;
si0+=si1;
sj1=l6;
i64_store(&i->m0,(U64)si0,sj1);
goto L1;
L2:;
si0=l0;
si1=l2;
sj1=i64_load(&i->m0,(U64)si1+48U);
i64_store(&i->m0,(U64)si0+24U,sj1);
si0=l2;
si1=16U;
si0+=si1;
si1=l2;
si2=24U;
si1+=si2;
si2=12U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
l3=si1;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=32U;
si0+=si1;
si1=l2;
si2=24U;
si1+=si2;
si2=32U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=40U;
si0+=si1;
si1=l2;
si2=24U;
si1+=si2;
si2=40U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=l2;
sj1=i64_load(&i->m0,(U64)si1+28U);
l5=sj1;
i64_store(&i->m0,(U64)si0+8U,sj1);
si0=l2;
sj0=i64_load(&i->m0,(U64)si0+40U);
l6=sj0;
si0=l0;
si1=12U;
si0+=si1;
si1=l3;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
sj1=l5;
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l0;
sj1=l6;
i64_store(&i->m0,(U64)si0+16U,sj1);
L1:;
si0=l0;
si1=l1;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=160U;
si0+=si1;
i->g0=si0;
L0:;
}

void f3167(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U32 l5=0;
U64 l6=0;
U64 l7=0;
U32 si0,si1,si2,si3,si4,si5;
U64 sj0,sj1;
si0=i->g0;
si1=160U;
si0-=si1;
l4=si0;
i->g0=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+24U);
l5=si0;
si0=l4;
si1=72U;
si0+=si1;
si1=12U;
si0+=si1;
si1=l2;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=72U;
si0+=si1;
si1=20U;
si0+=si1;
si1=l2;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=72U;
si0+=si1;
si1=28U;
si0+=si1;
si1=l2;
si2=24U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=72U;
si0+=si1;
si1=36U;
si0+=si1;
si1=l2;
si2=32U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=l2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+76U,sj1);
si0=l4;
si1=l2;
si1=i32_load(&i->m0,(U64)si1+40U);
i32_store(&i->m0,(U64)si0+112U,si1);
si0=l4;
si1=l2;
si1=i32_load(&i->m0,(U64)si1+36U);
i32_store(&i->m0,(U64)si0+72U,si1);
si0=l4;
si1=l5;
i32_store(&i->m0,(U64)si0+152U,si1);
si0=l4;
si1=l5;
i32_store(&i->m0,(U64)si0+148U,si1);
si0=l4;
si1=l5;
i32_store(&i->m0,(U64)si0+144U,si1);
si0=l4;
si1=120U;
si0+=si1;
si1=8U;
si0+=si1;
si1=l3;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=l3;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+120U,sj1);
si0=l4;
si1=l3;
sj1=i64_load(&i->m0,(U64)si1+12U);
i64_store(&i->m0,(U64)si0+132U,sj1);
si0=l4;
si1=24U;
si0+=si1;
si1=l4;
si2=144U;
si1+=si2;
si2=l1;
si3=l4;
si4=72U;
si3+=si4;
si4=l4;
si5=120U;
si4+=si5;
f3027(i,si0,si1,si2,si3,si4);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+24U);
l2=si0;
si1=5U;
si0=si0 != si1;
if(si0){
goto L2;
}
si0=l4;
si1=8U;
si0+=si1;
si1=8U;
si0+=si1;
si1=l4;
si2=24U;
si1+=si2;
si2=12U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
l3=si1;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1+28U);
l6=sj1;
i64_store(&i->m0,(U64)si0+8U,sj1);
si0=l4;
si1=24U;
si0+=si1;
si1=16U;
si0+=si1;
sj0=i64_load(&i->m0,(U64)si0);
l7=sj0;
si0=l4;
si1=24U;
si0+=si1;
si1=8U;
si0+=si1;
si1=l3;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
sj1=l6;
i64_store(&i->m0,(U64)si0+24U,sj1);
si0=l0;
si1=20U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=12U;
si0+=si1;
sj1=17179869184ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
sj1=4ULL;
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l0;
si1=28U;
si0+=si1;
sj1=l6;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=36U;
si0+=si1;
si1=l3;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=40U;
si0+=si1;
sj1=l7;
i64_store(&i->m0,(U64)si0,sj1);
goto L1;
L2:;
si0=l0;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1+48U);
i64_store(&i->m0,(U64)si0+24U,sj1);
si0=l4;
si1=8U;
si0+=si1;
si1=8U;
si0+=si1;
si1=l4;
si2=24U;
si1+=si2;
si2=12U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
l3=si1;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=32U;
si0+=si1;
si1=l4;
si2=24U;
si1+=si2;
si2=32U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=40U;
si0+=si1;
si1=l4;
si2=24U;
si1+=si2;
si2=40U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1+28U);
l6=sj1;
i64_store(&i->m0,(U64)si0+8U,sj1);
si0=l4;
sj0=i64_load(&i->m0,(U64)si0+40U);
l7=sj0;
si0=l0;
si1=12U;
si0+=si1;
si1=l3;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
sj1=l6;
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l0;
sj1=l7;
i64_store(&i->m0,(U64)si0+16U,sj1);
L1:;
si0=l0;
si1=l2;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=160U;
si0+=si1;
i->g0=si0;
L0:;
}

void f3168(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U32 l4=0;
U32 l5=0;
U64 l6=0;
U64 l7=0;
U32 si0,si1,si2,si3,si4,si5;
U64 sj0,sj1;
si0=i->g0;
si1=160U;
si0-=si1;
l3=si0;
i->g0=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+24U);
l4=si0;
si0=l3;
si1=0U;
i32_store(&i->m0,(U64)si0+76U,si1);
si0=l3;
si1=l2;
si1=i32_load(&i->m0,(U64)si1+12U);
l5=si1;
i32_store(&i->m0,(U64)si0+112U,si1);
si0=l3;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+28U);
i32_store(&i->m0,(U64)si0+72U,si1);
si0=l3;
si1=l4;
i32_store(&i->m0,(U64)si0+152U,si1);
si0=l3;
si1=l4;
i32_store(&i->m0,(U64)si0+148U,si1);
si0=l3;
si1=l4;
i32_store(&i->m0,(U64)si0+144U,si1);
si0=l3;
si1=120U;
si0+=si1;
si1=8U;
si0+=si1;
si1=l2;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=l5;
i32_store(&i->m0,(U64)si0+132U,si1);
si0=l3;
si1=l2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+120U,sj1);
si0=l3;
si1=l2;
si1=i32_load(&i->m0,(U64)si1+16U);
i32_store(&i->m0,(U64)si0+136U,si1);
si0=l3;
si1=24U;
si0+=si1;
si1=l3;
si2=144U;
si1+=si2;
si2=l1;
si3=l3;
si4=72U;
si3+=si4;
si4=l3;
si5=120U;
si4+=si5;
f3027(i,si0,si1,si2,si3,si4);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+24U);
l2=si0;
si1=5U;
si0=si0 != si1;
if(si0){
goto L2;
}
si0=l3;
si1=8U;
si0+=si1;
si1=8U;
si0+=si1;
si1=l3;
si2=24U;
si1+=si2;
si2=12U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
l1=si1;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=l3;
sj1=i64_load(&i->m0,(U64)si1+28U);
l6=sj1;
i64_store(&i->m0,(U64)si0+8U,sj1);
si0=l3;
si1=40U;
si0+=si1;
sj0=i64_load(&i->m0,(U64)si0);
l7=sj0;
si0=l3;
si1=24U;
si0+=si1;
si1=8U;
si0+=si1;
si1=l1;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
sj1=l6;
i64_store(&i->m0,(U64)si0+24U,sj1);
si0=l0;
si1=20U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=12U;
si0+=si1;
sj1=17179869184ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
sj1=4ULL;
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l0;
si1=28U;
si0+=si1;
sj1=l6;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=36U;
si0+=si1;
si1=l1;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=40U;
si0+=si1;
sj1=l7;
i64_store(&i->m0,(U64)si0,sj1);
goto L1;
L2:;
si0=l0;
si1=l3;
sj1=i64_load(&i->m0,(U64)si1+48U);
i64_store(&i->m0,(U64)si0+24U,sj1);
si0=l3;
si1=8U;
si0+=si1;
si1=8U;
si0+=si1;
si1=l3;
si2=24U;
si1+=si2;
si2=12U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
l1=si1;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=32U;
si0+=si1;
si1=l3;
si2=24U;
si1+=si2;
si2=32U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=40U;
si0+=si1;
si1=l3;
si2=24U;
si1+=si2;
si2=40U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=l3;
sj1=i64_load(&i->m0,(U64)si1+28U);
l6=sj1;
i64_store(&i->m0,(U64)si0+8U,sj1);
si0=l3;
sj0=i64_load(&i->m0,(U64)si0+40U);
l7=sj0;
si0=l0;
si1=12U;
si0+=si1;
si1=l1;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
sj1=l6;
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l0;
sj1=l7;
i64_store(&i->m0,(U64)si0+16U,sj1);
L1:;
si0=l0;
si1=l2;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=160U;
si0+=si1;
i->g0=si0;
L0:;
}

void f3169(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4,U32 l5,U32 l6,U32 l7,U32 l8) {
U32 l9=0;
U32 l10=0;
U32 l11=0;
U32 l12=0;
U32 l13=0;
U32 si0,si1,si2,si3,si4;
U64 sj1;
si0=i->g0;
si1=96U;
si0-=si1;
l9=si0;
i->g0=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
l10=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+24U);
l11=si0;
si0=l5;
si0=i32_load(&i->m0,(U64)si0);
l12=si0;
si1=-2U;
si0+=si1;
l13=si0;
si1=1U;
si2=l13;
si3=96U;
si2=si2 < si3;
si0=si2?si0:si1;
switch(si0){
case 0:
goto L5;
case 1:
goto L4;
case 2:
goto L1;
case 3:
goto L1;
case 4:
goto L3;
default:
goto L1;
}
L5:;
si0=l5;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L1;
}
goto L2;
L4:;
si0=l12;
si0=!(si0);
if(si0){
goto L1;
}
si0=l5;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L2;
}
goto L1;
L3:;
si0=l5;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L1;
}
L2:;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+4U);
f15271(i,si0);
L1:;
si0=l10;
if(si0){
goto L10;
}
si0=0U;
l5=si0;
goto L9;
L10:;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=36U;
si0=f15269(i,si0);
l5=si0;
si0=!(si0);
if(si0){
goto L8;
}
si0=l5;
si1=l10;
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=l4;
si2=4U;
si1+=si2;
l4=si1;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l5;
si1=12U;
si0+=si1;
si1=l4;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=20U;
si0+=si1;
si1=l4;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=28U;
si0+=si1;
si1=l4;
si2=24U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
L9:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
l10=si0;
si1=-2U;
si0+=si1;
l4=si0;
si1=1U;
si2=l4;
si3=96U;
si2=si2 < si3;
si0=si2?si0:si1;
switch(si0){
case 0:
goto L13;
case 1:
goto L12;
case 2:
goto L6;
case 3:
goto L6;
case 4:
goto L11;
default:
goto L6;
}
L13:;
si0=l3;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L6;
}
goto L7;
L12:;
si0=l10;
si0=!(si0);
if(si0){
goto L6;
}
si0=l3;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L7;
}
goto L6;
L11:;
si0=l3;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L7;
}
goto L6;
L8:;
si0=4U;
si1=36U;
f52(i,si0,si1);
UNREACHABLE;
L7:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+4U);
f15271(i,si0);
L6:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+8U);
l3=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+4U);
l4=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0);
l10=si0;
si1=-2U;
si0+=si1;
l2=si0;
si1=1U;
si2=l2;
si3=96U;
si2=si2 < si3;
si0=si2?si0:si1;
switch(si0){
case 0:
goto L18;
case 1:
goto L17;
case 2:
goto L14;
case 3:
goto L14;
case 4:
goto L16;
default:
goto L14;
}
L18:;
si0=l3;
si0=!(si0);
if(si0){
goto L14;
}
goto L15;
L17:;
si0=l10;
si0=!(si0);
if(si0){
goto L14;
}
L16:;
si0=l3;
si0=!(si0);
if(si0){
goto L14;
}
L15:;
si0=l4;
f15271(i,si0);
L14:;
si0=l9;
si1=20U;
si0+=si1;
si1=l6;
i32_store(&i->m0,(U64)si0,si1);
si0=l9;
si1=16U;
si0+=si1;
si1=l5;
i32_store(&i->m0,(U64)si0,si1);
si0=l9;
si1=12U;
si0+=si1;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l9;
si1=l7;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l9;
sj1=4ULL;
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l9;
si1=l11;
i32_store(&i->m0,(U64)si0,si1);
si0=l9;
si1=32U;
si0+=si1;
si1=24U;
si0+=si1;
si1=l1;
si2=24U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l9;
si1=32U;
si0+=si1;
si1=16U;
si0+=si1;
si1=l1;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l9;
si1=32U;
si0+=si1;
si1=8U;
si0+=si1;
si1=l1;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l9;
si1=l1;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+32U,sj1);
si0=l9;
si1=64U;
si0+=si1;
si1=16U;
si0+=si1;
si1=l8;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l9;
si1=64U;
si0+=si1;
si1=8U;
si0+=si1;
si1=l8;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l9;
si1=l8;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+64U,sj1);
si0=l9;
si1=l8;
sj1=i64_load(&i->m0,(U64)si1+24U);
i64_store(&i->m0,(U64)si0+88U,sj1);
si0=l0;
si1=l9;
si2=32U;
si1+=si2;
si2=l9;
si3=l9;
si4=64U;
si3+=si4;
f3022(i,si0,si1,si2,si3);
si0=l9;
si1=96U;
si0+=si1;
i->g0=si0;
L0:;
}

void f3170(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4,U64 l5,U32 l6,U32 l7,U32 l8,U32 l9,U32 l10) {
U32 l11=0;
U32 l12=0;
U32 l13=0;
U32 l14=0;
U32 l15=0;
U32 si0,si1,si2,si3,si4;
U64 sj1;
si0=i->g0;
si1=96U;
si0-=si1;
l11=si0;
i->g0=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
l12=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+24U);
l13=si0;
si0=l7;
si0=i32_load(&i->m0,(U64)si0);
l14=si0;
si1=-2U;
si0+=si1;
l15=si0;
si1=1U;
si2=l15;
si3=96U;
si2=si2 < si3;
si0=si2?si0:si1;
switch(si0){
case 0:
goto L5;
case 1:
goto L4;
case 2:
goto L1;
case 3:
goto L1;
case 4:
goto L3;
default:
goto L1;
}
L5:;
si0=l7;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L1;
}
goto L2;
L4:;
si0=l14;
si0=!(si0);
if(si0){
goto L1;
}
si0=l7;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L2;
}
goto L1;
L3:;
si0=l7;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L1;
}
L2:;
si0=l7;
si0=i32_load(&i->m0,(U64)si0+4U);
f15271(i,si0);
L1:;
si0=l12;
if(si0){
goto L10;
}
si0=0U;
l7=si0;
goto L9;
L10:;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=36U;
si0=f15269(i,si0);
l7=si0;
si0=!(si0);
if(si0){
goto L8;
}
si0=l7;
si1=l12;
i32_store(&i->m0,(U64)si0,si1);
si0=l7;
si1=l4;
si2=4U;
si1+=si2;
l4=si1;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l7;
si1=12U;
si0+=si1;
si1=l4;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l7;
si1=20U;
si0+=si1;
si1=l4;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l7;
si1=28U;
si0+=si1;
si1=l4;
si2=24U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
L9:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
l12=si0;
si1=-2U;
si0+=si1;
l4=si0;
si1=1U;
si2=l4;
si3=96U;
si2=si2 < si3;
si0=si2?si0:si1;
switch(si0){
case 0:
goto L13;
case 1:
goto L12;
case 2:
goto L6;
case 3:
goto L6;
case 4:
goto L11;
default:
goto L6;
}
L13:;
si0=l3;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L6;
}
goto L7;
L12:;
si0=l12;
si0=!(si0);
if(si0){
goto L6;
}
si0=l3;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L7;
}
goto L6;
L11:;
si0=l3;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L7;
}
goto L6;
L8:;
si0=4U;
si1=36U;
f52(i,si0,si1);
UNREACHABLE;
L7:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+4U);
f15271(i,si0);
L6:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+8U);
l3=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+4U);
l4=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0);
l12=si0;
si1=-2U;
si0+=si1;
l2=si0;
si1=1U;
si2=l2;
si3=96U;
si2=si2 < si3;
si0=si2?si0:si1;
switch(si0){
case 0:
goto L18;
case 1:
goto L17;
case 2:
goto L14;
case 3:
goto L14;
case 4:
goto L16;
default:
goto L14;
}
L18:;
si0=l3;
si0=!(si0);
if(si0){
goto L14;
}
goto L15;
L17:;
si0=l12;
si0=!(si0);
if(si0){
goto L14;
}
L16:;
si0=l3;
si0=!(si0);
if(si0){
goto L14;
}
L15:;
si0=l4;
f15271(i,si0);
L14:;
si0=l11;
si1=20U;
si0+=si1;
si1=l8;
i32_store(&i->m0,(U64)si0,si1);
si0=l11;
si1=16U;
si0+=si1;
si1=l7;
i32_store(&i->m0,(U64)si0,si1);
si0=l11;
si1=12U;
si0+=si1;
si1=l6;
i32_store(&i->m0,(U64)si0,si1);
si0=l11;
si1=l9;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l11;
sj1=l5;
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l11;
si1=l13;
i32_store(&i->m0,(U64)si0,si1);
si0=l11;
si1=32U;
si0+=si1;
si1=24U;
si0+=si1;
si1=l1;
si2=24U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l11;
si1=32U;
si0+=si1;
si1=16U;
si0+=si1;
si1=l1;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l11;
si1=32U;
si0+=si1;
si1=8U;
si0+=si1;
si1=l1;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l11;
si1=l1;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+32U,sj1);
si0=l11;
si1=64U;
si0+=si1;
si1=16U;
si0+=si1;
si1=l10;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l11;
si1=64U;
si0+=si1;
si1=8U;
si0+=si1;
si1=l10;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l11;
si1=l10;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+64U,sj1);
si0=l11;
si1=l10;
sj1=i64_load(&i->m0,(U64)si1+24U);
i64_store(&i->m0,(U64)si0+88U,sj1);
si0=l0;
si1=l11;
si2=32U;
si1+=si2;
si2=l11;
si3=l11;
si4=64U;
si3+=si4;
f3022(i,si0,si1,si2,si3);
si0=l11;
si1=96U;
si0+=si1;
i->g0=si0;
L0:;
}

void f3171(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4,U32 l5) {
U32 l6=0;
U32 l7=0;
U32 l8=0;
U64 l9=0;
U64 l10=0;
U32 si0,si1,si2,si3;
U64 sj1;
si0=i->g0;
si1=112U;
si0-=si1;
l6=si0;
i->g0=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+40U);
l7=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+24U);
l8=si0;
si0=l6;
si1=l2;
si2=l3;
si3=l4;
f3081(i,si0,si1,si2,si3);
si0=l6;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
si1=5U;
si0=si0 != si1;
if(si0){
goto L2;
}
si0=l6;
si1=48U;
si0+=si1;
si1=12U;
si0+=si1;
si1=l6;
si2=12U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l6;
si1=48U;
si0+=si1;
si1=20U;
si0+=si1;
si1=l6;
si2=20U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l6;
si1=l6;
sj1=i64_load(&i->m0,(U64)si1+4U);
i64_store(&i->m0,(U64)si0+52U,sj1);
si0=l6;
si1=l7;
i32_store(&i->m0,(U64)si0+72U,si1);
si0=l6;
si1=l8;
i32_store(&i->m0,(U64)si0+48U,si1);
si0=l6;
si1=80U;
si0+=si1;
si1=24U;
si0+=si1;
si1=l1;
si2=24U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l6;
si1=80U;
si0+=si1;
si1=16U;
si0+=si1;
si1=l1;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l6;
si1=80U;
si0+=si1;
si1=8U;
si0+=si1;
si1=l1;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l6;
si1=l1;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+80U,sj1);
si0=l6;
si1=16U;
si0+=si1;
si1=l5;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l6;
si1=8U;
si0+=si1;
si1=l5;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l6;
si1=l5;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l6;
si1=l5;
sj1=i64_load(&i->m0,(U64)si1+24U);
i64_store(&i->m0,(U64)si0+24U,sj1);
si0=l0;
si1=l6;
si2=80U;
si1+=si2;
si2=l6;
si3=48U;
si2+=si3;
si3=l6;
f3022(i,si0,si1,si2,si3);
goto L1;
L2:;
si0=l0;
si1=l6;
sj1=i64_load(&i->m0,(U64)si1+24U);
i64_store(&i->m0,(U64)si0+24U,sj1);
si0=l6;
si1=96U;
si0+=si1;
si1=l6;
si2=20U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
l2=si1;
i32_store(&i->m0,(U64)si0,si1);
si0=l6;
si1=80U;
si0+=si1;
si1=8U;
si0+=si1;
si1=l6;
si2=12U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
l9=sj1;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=32U;
si0+=si1;
si1=l6;
si2=32U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=40U;
si0+=si1;
si1=l6;
si2=40U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l6;
si1=l6;
sj1=i64_load(&i->m0,(U64)si1+4U);
l10=sj1;
i64_store(&i->m0,(U64)si0+80U,sj1);
si0=l0;
si1=20U;
si0+=si1;
si1=l2;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=12U;
si0+=si1;
sj1=l9;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
sj1=l10;
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l0;
si1=l4;
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
si1=-2U;
si0+=si1;
l0=si0;
si1=1U;
si2=l0;
si3=96U;
si2=si2 < si3;
si0=si2?si0:si1;
switch(si0){
case 0:
goto L7;
case 1:
goto L6;
case 2:
goto L3;
case 3:
goto L3;
case 4:
goto L5;
default:
goto L3;
}
L7:;
si0=l5;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L3;
}
goto L4;
L6:;
si0=l4;
si0=!(si0);
if(si0){
goto L3;
}
si0=l5;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L4;
}
goto L3;
L5:;
si0=l5;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L3;
}
L4:;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+4U);
f15271(i,si0);
L3:;
si0=l1;
f3385(i,si0);
si0=l1;
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L8;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
f15271(i,si0);
L8:;
si0=l1;
si1=12U;
si0+=si1;
l0=si0;
f3385(i,si0);
si0=l1;
si1=16U;
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
si0=l6;
si1=112U;
si0+=si1;
i->g0=si0;
L0:;
}

void f3172(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4) {
U32 l5=0;
U32 l6=0;
U32 l7=0;
U64 l8=0;
U64 l9=0;
U32 si0,si1,si2,si3;
U64 sj1;
si0=i->g0;
si1=112U;
si0-=si1;
l5=si0;
i->g0=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+28U);
l6=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+24U);
l7=si0;
si0=l5;
si1=l2;
si2=l3;
f3082(i,si0,si1,si2);
si0=l5;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si1=5U;
si0=si0 != si1;
if(si0){
goto L2;
}
si0=l5;
si1=48U;
si0+=si1;
si1=12U;
si0+=si1;
si1=l5;
si2=12U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=48U;
si0+=si1;
si1=20U;
si0+=si1;
si1=l5;
si2=20U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=l5;
sj1=i64_load(&i->m0,(U64)si1+4U);
i64_store(&i->m0,(U64)si0+52U,sj1);
si0=l5;
si1=l6;
i32_store(&i->m0,(U64)si0+72U,si1);
si0=l5;
si1=l7;
i32_store(&i->m0,(U64)si0+48U,si1);
si0=l5;
si1=80U;
si0+=si1;
si1=24U;
si0+=si1;
si1=l1;
si2=24U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=80U;
si0+=si1;
si1=16U;
si0+=si1;
si1=l1;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=80U;
si0+=si1;
si1=8U;
si0+=si1;
si1=l1;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=l1;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+80U,sj1);
si0=l5;
si1=16U;
si0+=si1;
si1=l4;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=8U;
si0+=si1;
si1=l4;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1+24U);
i64_store(&i->m0,(U64)si0+24U,sj1);
si0=l0;
si1=l5;
si2=80U;
si1+=si2;
si2=l5;
si3=48U;
si2+=si3;
si3=l5;
f3022(i,si0,si1,si2,si3);
goto L1;
L2:;
si0=l0;
si1=l5;
sj1=i64_load(&i->m0,(U64)si1+24U);
i64_store(&i->m0,(U64)si0+24U,sj1);
si0=l5;
si1=96U;
si0+=si1;
si1=l5;
si2=20U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
l2=si1;
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=80U;
si0+=si1;
si1=8U;
si0+=si1;
si1=l5;
si2=12U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
l8=sj1;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=32U;
si0+=si1;
si1=l5;
si2=32U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=40U;
si0+=si1;
si1=l5;
si2=40U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=l5;
sj1=i64_load(&i->m0,(U64)si1+4U);
l9=sj1;
i64_store(&i->m0,(U64)si0+80U,sj1);
si0=l0;
si1=20U;
si0+=si1;
si1=l2;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=12U;
si0+=si1;
sj1=l8;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
sj1=l9;
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l0;
si1=l3;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si1=-2U;
si0+=si1;
l0=si0;
si1=1U;
si2=l0;
si3=96U;
si2=si2 < si3;
si0=si2?si0:si1;
switch(si0){
case 0:
goto L7;
case 1:
goto L6;
case 2:
goto L3;
case 3:
goto L3;
case 4:
goto L5;
default:
goto L3;
}
L7:;
si0=l4;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L3;
}
goto L4;
L6:;
si0=l3;
si0=!(si0);
if(si0){
goto L3;
}
si0=l4;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L4;
}
goto L3;
L5:;
si0=l4;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L3;
}
L4:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+4U);
f15271(i,si0);
L3:;
si0=l1;
f3385(i,si0);
si0=l1;
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L8;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
f15271(i,si0);
L8:;
si0=l1;
si1=12U;
si0+=si1;
l0=si0;
f3385(i,si0);
si0=l1;
si1=16U;
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
si0=l5;
si1=112U;
si0+=si1;
i->g0=si0;
L0:;
}

void f3173(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4,U32 l5,U32 l6) {
U32 l7=0;
U32 l8=0;
U32 l9=0;
U64 l10=0;
U64 l11=0;
U32 si0,si1,si2,si3,si4;
U64 sj1;
si0=i->g0;
si1=112U;
si0-=si1;
l7=si0;
i->g0=si0;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+16U);
l8=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+24U);
l9=si0;
si0=l7;
si1=l2;
si2=l3;
si3=l4;
si4=l5;
f3083(i,si0,si1,si2,si3,si4);
si0=l7;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si1=5U;
si0=si0 != si1;
if(si0){
goto L2;
}
si0=l7;
si1=48U;
si0+=si1;
si1=12U;
si0+=si1;
si1=l7;
si2=12U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l7;
si1=48U;
si0+=si1;
si1=20U;
si0+=si1;
si1=l7;
si2=20U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l7;
si1=l7;
sj1=i64_load(&i->m0,(U64)si1+4U);
i64_store(&i->m0,(U64)si0+52U,sj1);
si0=l7;
si1=l8;
i32_store(&i->m0,(U64)si0+72U,si1);
si0=l7;
si1=l9;
i32_store(&i->m0,(U64)si0+48U,si1);
si0=l7;
si1=80U;
si0+=si1;
si1=24U;
si0+=si1;
si1=l1;
si2=24U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l7;
si1=80U;
si0+=si1;
si1=16U;
si0+=si1;
si1=l1;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l7;
si1=80U;
si0+=si1;
si1=8U;
si0+=si1;
si1=l1;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l7;
si1=l1;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+80U,sj1);
si0=l7;
si1=16U;
si0+=si1;
si1=l6;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l7;
si1=8U;
si0+=si1;
si1=l6;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l7;
si1=l6;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l7;
si1=l6;
sj1=i64_load(&i->m0,(U64)si1+24U);
i64_store(&i->m0,(U64)si0+24U,sj1);
si0=l0;
si1=l7;
si2=80U;
si1+=si2;
si2=l7;
si3=48U;
si2+=si3;
si3=l7;
f3022(i,si0,si1,si2,si3);
goto L1;
L2:;
si0=l0;
si1=l7;
sj1=i64_load(&i->m0,(U64)si1+24U);
i64_store(&i->m0,(U64)si0+24U,sj1);
si0=l7;
si1=96U;
si0+=si1;
si1=l7;
si2=20U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
l2=si1;
i32_store(&i->m0,(U64)si0,si1);
si0=l7;
si1=80U;
si0+=si1;
si1=8U;
si0+=si1;
si1=l7;
si2=12U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
l10=sj1;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=32U;
si0+=si1;
si1=l7;
si2=32U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=40U;
si0+=si1;
si1=l7;
si2=40U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l7;
si1=l7;
sj1=i64_load(&i->m0,(U64)si1+4U);
l11=sj1;
i64_store(&i->m0,(U64)si0+80U,sj1);
si0=l0;
si1=20U;
si0+=si1;
si1=l2;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=12U;
si0+=si1;
sj1=l10;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
sj1=l11;
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l0;
si1=l5;
i32_store(&i->m0,(U64)si0,si1);
si0=l6;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si1=-2U;
si0+=si1;
l0=si0;
si1=1U;
si2=l0;
si3=96U;
si2=si2 < si3;
si0=si2?si0:si1;
switch(si0){
case 0:
goto L7;
case 1:
goto L6;
case 2:
goto L3;
case 3:
goto L3;
case 4:
goto L5;
default:
goto L3;
}
L7:;
si0=l6;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L3;
}
goto L4;
L6:;
si0=l5;
si0=!(si0);
if(si0){
goto L3;
}
si0=l6;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L4;
}
goto L3;
L5:;
si0=l6;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L3;
}
L4:;
si0=l6;
si0=i32_load(&i->m0,(U64)si0+4U);
f15271(i,si0);
L3:;
si0=l1;
f3385(i,si0);
si0=l1;
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L8;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
f15271(i,si0);
L8:;
si0=l1;
si1=12U;
si0+=si1;
l0=si0;
f3385(i,si0);
si0=l1;
si1=16U;
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
si0=l7;
si1=112U;
si0+=si1;
i->g0=si0;
L0:;
}

void f3174(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4,U32 l5) {
U32 l6=0;
U32 l7=0;
U32 l8=0;
U64 l9=0;
U64 l10=0;
U32 si0,si1,si2,si3;
U64 sj1;
si0=i->g0;
si1=112U;
si0-=si1;
l6=si0;
i->g0=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+16U);
l7=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+24U);
l8=si0;
si0=l6;
si1=l2;
si2=l3;
si3=l4;
f3084(i,si0,si1,si2,si3);
si0=l6;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
si1=5U;
si0=si0 != si1;
if(si0){
goto L2;
}
si0=l6;
si1=48U;
si0+=si1;
si1=12U;
si0+=si1;
si1=l6;
si2=12U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l6;
si1=48U;
si0+=si1;
si1=20U;
si0+=si1;
si1=l6;
si2=20U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l6;
si1=l6;
sj1=i64_load(&i->m0,(U64)si1+4U);
i64_store(&i->m0,(U64)si0+52U,sj1);
si0=l6;
si1=l7;
i32_store(&i->m0,(U64)si0+72U,si1);
si0=l6;
si1=l8;
i32_store(&i->m0,(U64)si0+48U,si1);
si0=l6;
si1=80U;
si0+=si1;
si1=24U;
si0+=si1;
si1=l1;
si2=24U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l6;
si1=80U;
si0+=si1;
si1=16U;
si0+=si1;
si1=l1;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l6;
si1=80U;
si0+=si1;
si1=8U;
si0+=si1;
si1=l1;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l6;
si1=l1;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+80U,sj1);
si0=l6;
si1=16U;
si0+=si1;
si1=l5;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l6;
si1=8U;
si0+=si1;
si1=l5;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l6;
si1=l5;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l6;
si1=l5;
sj1=i64_load(&i->m0,(U64)si1+24U);
i64_store(&i->m0,(U64)si0+24U,sj1);
si0=l0;
si1=l6;
si2=80U;
si1+=si2;
si2=l6;
si3=48U;
si2+=si3;
si3=l6;
f3022(i,si0,si1,si2,si3);
goto L1;
L2:;
si0=l0;
si1=l6;
sj1=i64_load(&i->m0,(U64)si1+24U);
i64_store(&i->m0,(U64)si0+24U,sj1);
si0=l6;
si1=96U;
si0+=si1;
si1=l6;
si2=20U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
l2=si1;
i32_store(&i->m0,(U64)si0,si1);
si0=l6;
si1=80U;
si0+=si1;
si1=8U;
si0+=si1;
si1=l6;
si2=12U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
l9=sj1;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=32U;
si0+=si1;
si1=l6;
si2=32U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=40U;
si0+=si1;
si1=l6;
si2=40U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l6;
si1=l6;
sj1=i64_load(&i->m0,(U64)si1+4U);
l10=sj1;
i64_store(&i->m0,(U64)si0+80U,sj1);
si0=l0;
si1=20U;
si0+=si1;
si1=l2;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=12U;
si0+=si1;
sj1=l9;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
sj1=l10;
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l0;
si1=l4;
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
si1=-2U;
si0+=si1;
l0=si0;
si1=1U;
si2=l0;
si3=96U;
si2=si2 < si3;
si0=si2?si0:si1;
switch(si0){
case 0:
goto L7;
case 1:
goto L6;
case 2:
goto L3;
case 3:
goto L3;
case 4:
goto L5;
default:
goto L3;
}
L7:;
si0=l5;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L3;
}
goto L4;
L6:;
si0=l4;
si0=!(si0);
if(si0){
goto L3;
}
si0=l5;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L4;
}
goto L3;
L5:;
si0=l5;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L3;
}
L4:;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+4U);
f15271(i,si0);
L3:;
si0=l1;
f3385(i,si0);
si0=l1;
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L8;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
f15271(i,si0);
L8:;
si0=l1;
si1=12U;
si0+=si1;
l0=si0;
f3385(i,si0);
si0=l1;
si1=16U;
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
si0=l6;
si1=112U;
si0+=si1;
i->g0=si0;
L0:;
}

void f3175(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4,U32 l5,U32 l6,U32 l7) {
U32 l8=0;
U32 l9=0;
U32 l10=0;
U32 l11=0;
U32 l12=0;
U32 si0,si1,si2,si3,si4;
U64 sj1;
si0=i->g0;
si1=96U;
si0-=si1;
l8=si0;
i->g0=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
l9=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+24U);
l10=si0;
si0=l5;
si0=i32_load(&i->m0,(U64)si0);
l11=si0;
si1=-2U;
si0+=si1;
l12=si0;
si1=1U;
si2=l12;
si3=96U;
si2=si2 < si3;
si0=si2?si0:si1;
switch(si0){
case 0:
goto L5;
case 1:
goto L4;
case 2:
goto L1;
case 3:
goto L1;
case 4:
goto L3;
default:
goto L1;
}
L5:;
si0=l5;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L1;
}
goto L2;
L4:;
si0=l11;
si0=!(si0);
if(si0){
goto L1;
}
si0=l5;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L2;
}
goto L1;
L3:;
si0=l5;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L1;
}
L2:;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+4U);
f15271(i,si0);
L1:;
si0=l9;
if(si0){
goto L10;
}
si0=0U;
l5=si0;
goto L9;
L10:;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=36U;
si0=f15269(i,si0);
l5=si0;
si0=!(si0);
if(si0){
goto L8;
}
si0=l5;
si1=l9;
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=l4;
si2=4U;
si1+=si2;
l4=si1;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l5;
si1=12U;
si0+=si1;
si1=l4;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=20U;
si0+=si1;
si1=l4;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=28U;
si0+=si1;
si1=l4;
si2=24U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
L9:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
l9=si0;
si1=-2U;
si0+=si1;
l4=si0;
si1=1U;
si2=l4;
si3=96U;
si2=si2 < si3;
si0=si2?si0:si1;
switch(si0){
case 0:
goto L13;
case 1:
goto L12;
case 2:
goto L6;
case 3:
goto L6;
case 4:
goto L11;
default:
goto L6;
}
L13:;
si0=l3;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L6;
}
goto L7;
L12:;
si0=l9;
si0=!(si0);
if(si0){
goto L6;
}
si0=l3;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L7;
}
goto L6;
L11:;
si0=l3;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L7;
}
goto L6;
L8:;
si0=4U;
si1=36U;
f52(i,si0,si1);
UNREACHABLE;
L7:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+4U);
f15271(i,si0);
L6:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+8U);
l3=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+4U);
l4=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0);
l9=si0;
si1=-2U;
si0+=si1;
l2=si0;
si1=1U;
si2=l2;
si3=96U;
si2=si2 < si3;
si0=si2?si0:si1;
switch(si0){
case 0:
goto L18;
case 1:
goto L17;
case 2:
goto L14;
case 3:
goto L14;
case 4:
goto L16;
default:
goto L14;
}
L18:;
si0=l3;
si0=!(si0);
if(si0){
goto L14;
}
goto L15;
L17:;
si0=l9;
si0=!(si0);
if(si0){
goto L14;
}
L16:;
si0=l3;
si0=!(si0);
if(si0){
goto L14;
}
L15:;
si0=l4;
f15271(i,si0);
L14:;
si0=l8;
si1=20U;
si0+=si1;
si1=l6;
i32_store(&i->m0,(U64)si0,si1);
si0=l8;
si1=16U;
si0+=si1;
si1=l5;
i32_store(&i->m0,(U64)si0,si1);
si0=l8;
si1=12U;
si0+=si1;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l8;
si1=l7;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l8;
sj1=4ULL;
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l8;
si1=l10;
i32_store(&i->m0,(U64)si0,si1);
si0=l8;
si1=32U;
si0+=si1;
si1=24U;
si0+=si1;
si1=l1;
si2=24U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l8;
si1=32U;
si0+=si1;
si1=16U;
si0+=si1;
si1=l1;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l8;
si1=32U;
si0+=si1;
si1=8U;
si0+=si1;
si1=l1;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l8;
si1=l1;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+32U,sj1);
si0=l8;
si1=l7;
i32_store(&i->m0,(U64)si0+92U,si1);
si0=l8;
si1=98U;
i32_store(&i->m0,(U64)si0+64U,si1);
si0=l8;
si1=l7;
i32_store(&i->m0,(U64)si0+88U,si1);
si0=l0;
si1=l8;
si2=32U;
si1+=si2;
si2=l8;
si3=l8;
si4=64U;
si3+=si4;
f3022(i,si0,si1,si2,si3);
si0=l8;
si1=96U;
si0+=si1;
i->g0=si0;
L0:;
}

void f3176(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4,U64 l5,U32 l6,U32 l7,U32 l8,U32 l9) {
U32 l10=0;
U32 l11=0;
U32 l12=0;
U32 l13=0;
U32 l14=0;
U32 si0,si1,si2,si3,si4;
U64 sj1;
si0=i->g0;
si1=96U;
si0-=si1;
l10=si0;
i->g0=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
l11=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+24U);
l12=si0;
si0=l7;
si0=i32_load(&i->m0,(U64)si0);
l13=si0;
si1=-2U;
si0+=si1;
l14=si0;
si1=1U;
si2=l14;
si3=96U;
si2=si2 < si3;
si0=si2?si0:si1;
switch(si0){
case 0:
goto L5;
case 1:
goto L4;
case 2:
goto L1;
case 3:
goto L1;
case 4:
goto L3;
default:
goto L1;
}
L5:;
si0=l7;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L1;
}
goto L2;
L4:;
si0=l13;
si0=!(si0);
if(si0){
goto L1;
}
si0=l7;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L2;
}
goto L1;
L3:;
si0=l7;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L1;
}
L2:;
si0=l7;
si0=i32_load(&i->m0,(U64)si0+4U);
f15271(i,si0);
L1:;
si0=l11;
if(si0){
goto L10;
}
si0=0U;
l7=si0;
goto L9;
L10:;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=36U;
si0=f15269(i,si0);
l7=si0;
si0=!(si0);
if(si0){
goto L8;
}
si0=l7;
si1=l11;
i32_store(&i->m0,(U64)si0,si1);
si0=l7;
si1=l4;
si2=4U;
si1+=si2;
l4=si1;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l7;
si1=12U;
si0+=si1;
si1=l4;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l7;
si1=20U;
si0+=si1;
si1=l4;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l7;
si1=28U;
si0+=si1;
si1=l4;
si2=24U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
L9:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
l11=si0;
si1=-2U;
si0+=si1;
l4=si0;
si1=1U;
si2=l4;
si3=96U;
si2=si2 < si3;
si0=si2?si0:si1;
switch(si0){
case 0:
goto L13;
case 1:
goto L12;
case 2:
goto L6;
case 3:
goto L6;
case 4:
goto L11;
default:
goto L6;
}
L13:;
si0=l3;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L6;
}
goto L7;
L12:;
si0=l11;
si0=!(si0);
if(si0){
goto L6;
}
si0=l3;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L7;
}
goto L6;
L11:;
si0=l3;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L7;
}
goto L6;
L8:;
si0=4U;
si1=36U;
f52(i,si0,si1);
UNREACHABLE;
L7:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+4U);
f15271(i,si0);
L6:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+8U);
l3=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+4U);
l4=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0);
l11=si0;
si1=-2U;
si0+=si1;
l2=si0;
si1=1U;
si2=l2;
si3=96U;
si2=si2 < si3;
si0=si2?si0:si1;
switch(si0){
case 0:
goto L18;
case 1:
goto L17;
case 2:
goto L14;
case 3:
goto L14;
case 4:
goto L16;
default:
goto L14;
}
L18:;
si0=l3;
si0=!(si0);
if(si0){
goto L14;
}
goto L15;
L17:;
si0=l11;
si0=!(si0);
if(si0){
goto L14;
}
L16:;
si0=l3;
si0=!(si0);
if(si0){
goto L14;
}
L15:;
si0=l4;
f15271(i,si0);
L14:;
si0=l10;
si1=20U;
si0+=si1;
si1=l8;
i32_store(&i->m0,(U64)si0,si1);
si0=l10;
si1=16U;
si0+=si1;
si1=l7;
i32_store(&i->m0,(U64)si0,si1);
si0=l10;
si1=12U;
si0+=si1;
si1=l6;
i32_store(&i->m0,(U64)si0,si1);
si0=l10;
si1=l9;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l10;
sj1=l5;
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l10;
si1=l12;
i32_store(&i->m0,(U64)si0,si1);
si0=l10;
si1=32U;
si0+=si1;
si1=24U;
si0+=si1;
si1=l1;
si2=24U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l10;
si1=32U;
si0+=si1;
si1=16U;
si0+=si1;
si1=l1;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l10;
si1=32U;
si0+=si1;
si1=8U;
si0+=si1;
si1=l1;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l10;
si1=l1;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+32U,sj1);
si0=l10;
si1=l9;
i32_store(&i->m0,(U64)si0+92U,si1);
si0=l10;
si1=98U;
i32_store(&i->m0,(U64)si0+64U,si1);
si0=l10;
si1=l9;
i32_store(&i->m0,(U64)si0+88U,si1);
si0=l0;
si1=l10;
si2=32U;
si1+=si2;
si2=l10;
si3=l10;
si4=64U;
si3+=si4;
f3022(i,si0,si1,si2,si3);
si0=l10;
si1=96U;
si0+=si1;
i->g0=si0;
L0:;
}

void f3177(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4) {
U32 l5=0;
U32 l6=0;
U32 l7=0;
U64 l8=0;
U64 l9=0;
U32 si0,si1,si2,si3;
U64 sj1;
si0=i->g0;
si1=112U;
si0-=si1;
l5=si0;
i->g0=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+40U);
l6=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+24U);
l7=si0;
si0=l5;
si1=l2;
si2=l3;
si3=l4;
f3081(i,si0,si1,si2,si3);
si0=l5;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
si1=5U;
si0=si0 != si1;
if(si0){
goto L2;
}
si0=l5;
si1=48U;
si0+=si1;
si1=12U;
si0+=si1;
si1=l5;
si2=12U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=48U;
si0+=si1;
si1=20U;
si0+=si1;
si1=l5;
si2=20U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=l5;
sj1=i64_load(&i->m0,(U64)si1+4U);
i64_store(&i->m0,(U64)si0+52U,sj1);
si0=l5;
si1=l6;
i32_store(&i->m0,(U64)si0+72U,si1);
si0=l5;
si1=l7;
i32_store(&i->m0,(U64)si0+48U,si1);
si0=l5;
si1=80U;
si0+=si1;
si1=24U;
si0+=si1;
si1=l1;
si2=24U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=80U;
si0+=si1;
si1=16U;
si0+=si1;
si1=l1;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=80U;
si0+=si1;
si1=8U;
si0+=si1;
si1=l1;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=l1;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+80U,sj1);
si0=l5;
si1=l6;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l5;
si1=98U;
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=l6;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l0;
si1=l5;
si2=80U;
si1+=si2;
si2=l5;
si3=48U;
si2+=si3;
si3=l5;
f3022(i,si0,si1,si2,si3);
goto L1;
L2:;
si0=l0;
si1=l5;
sj1=i64_load(&i->m0,(U64)si1+24U);
i64_store(&i->m0,(U64)si0+24U,sj1);
si0=l5;
si1=80U;
si0+=si1;
si1=16U;
si0+=si1;
si1=l5;
si2=20U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
l2=si1;
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=88U;
si0+=si1;
si1=l5;
si2=12U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
l8=sj1;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=32U;
si0+=si1;
si1=l5;
si2=32U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=40U;
si0+=si1;
si1=l5;
si2=40U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=l5;
sj1=i64_load(&i->m0,(U64)si1+4U);
l9=sj1;
i64_store(&i->m0,(U64)si0+80U,sj1);
si0=l0;
si1=20U;
si0+=si1;
si1=l2;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=12U;
si0+=si1;
sj1=l8;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
sj1=l9;
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l0;
si1=l4;
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
f3385(i,si0);
si0=l1;
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L3;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
f15271(i,si0);
L3:;
si0=l1;
si1=12U;
si0+=si1;
l0=si0;
f3385(i,si0);
si0=l1;
si1=16U;
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
si0=l5;
si1=112U;
si0+=si1;
i->g0=si0;
L0:;
}

void f3178(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U32 l5=0;
U32 l6=0;
U64 l7=0;
U64 l8=0;
U32 si0,si1,si2,si3;
U64 sj1;
si0=i->g0;
si1=112U;
si0-=si1;
l4=si0;
i->g0=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+28U);
l5=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+24U);
l6=si0;
si0=l4;
si1=l2;
si2=l3;
f3082(i,si0,si1,si2);
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si1=5U;
si0=si0 != si1;
if(si0){
goto L2;
}
si0=l4;
si1=48U;
si0+=si1;
si1=12U;
si0+=si1;
si1=l4;
si2=12U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=48U;
si0+=si1;
si1=20U;
si0+=si1;
si1=l4;
si2=20U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1+4U);
i64_store(&i->m0,(U64)si0+52U,sj1);
si0=l4;
si1=l5;
i32_store(&i->m0,(U64)si0+72U,si1);
si0=l4;
si1=l6;
i32_store(&i->m0,(U64)si0+48U,si1);
si0=l4;
si1=80U;
si0+=si1;
si1=24U;
si0+=si1;
si1=l1;
si2=24U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=80U;
si0+=si1;
si1=16U;
si0+=si1;
si1=l1;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=80U;
si0+=si1;
si1=8U;
si0+=si1;
si1=l1;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=l1;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+80U,sj1);
si0=l4;
si1=l5;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l4;
si1=98U;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=l5;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l0;
si1=l4;
si2=80U;
si1+=si2;
si2=l4;
si3=48U;
si2+=si3;
si3=l4;
f3022(i,si0,si1,si2,si3);
goto L1;
L2:;
si0=l0;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1+24U);
i64_store(&i->m0,(U64)si0+24U,sj1);
si0=l4;
si1=80U;
si0+=si1;
si1=16U;
si0+=si1;
si1=l4;
si2=20U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
l2=si1;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=88U;
si0+=si1;
si1=l4;
si2=12U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
l7=sj1;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=32U;
si0+=si1;
si1=l4;
si2=32U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=40U;
si0+=si1;
si1=l4;
si2=40U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1+4U);
l8=sj1;
i64_store(&i->m0,(U64)si0+80U,sj1);
si0=l0;
si1=20U;
si0+=si1;
si1=l2;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=12U;
si0+=si1;
sj1=l7;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
sj1=l8;
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l0;
si1=l3;
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
f3385(i,si0);
si0=l1;
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L3;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
f15271(i,si0);
L3:;
si0=l1;
si1=12U;
si0+=si1;
l0=si0;
f3385(i,si0);
si0=l1;
si1=16U;
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
si0=l4;
si1=112U;
si0+=si1;
i->g0=si0;
L0:;
}

void f3179(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4,U32 l5) {
U32 l6=0;
U32 l7=0;
U32 l8=0;
U64 l9=0;
U64 l10=0;
U32 si0,si1,si2,si3,si4;
U64 sj1;
si0=i->g0;
si1=112U;
si0-=si1;
l6=si0;
i->g0=si0;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+16U);
l7=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+24U);
l8=si0;
si0=l6;
si1=l2;
si2=l3;
si3=l4;
si4=l5;
f3083(i,si0,si1,si2,si3,si4);
si0=l6;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si1=5U;
si0=si0 != si1;
if(si0){
goto L2;
}
si0=l6;
si1=48U;
si0+=si1;
si1=12U;
si0+=si1;
si1=l6;
si2=12U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l6;
si1=48U;
si0+=si1;
si1=20U;
si0+=si1;
si1=l6;
si2=20U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l6;
si1=l6;
sj1=i64_load(&i->m0,(U64)si1+4U);
i64_store(&i->m0,(U64)si0+52U,sj1);
si0=l6;
si1=l7;
i32_store(&i->m0,(U64)si0+72U,si1);
si0=l6;
si1=l8;
i32_store(&i->m0,(U64)si0+48U,si1);
si0=l6;
si1=80U;
si0+=si1;
si1=24U;
si0+=si1;
si1=l1;
si2=24U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l6;
si1=80U;
si0+=si1;
si1=16U;
si0+=si1;
si1=l1;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l6;
si1=80U;
si0+=si1;
si1=8U;
si0+=si1;
si1=l1;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l6;
si1=l1;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+80U,sj1);
si0=l6;
si1=l7;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l6;
si1=98U;
i32_store(&i->m0,(U64)si0,si1);
si0=l6;
si1=l7;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l0;
si1=l6;
si2=80U;
si1+=si2;
si2=l6;
si3=48U;
si2+=si3;
si3=l6;
f3022(i,si0,si1,si2,si3);
goto L1;
L2:;
si0=l0;
si1=l6;
sj1=i64_load(&i->m0,(U64)si1+24U);
i64_store(&i->m0,(U64)si0+24U,sj1);
si0=l6;
si1=80U;
si0+=si1;
si1=16U;
si0+=si1;
si1=l6;
si2=20U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
l2=si1;
i32_store(&i->m0,(U64)si0,si1);
si0=l6;
si1=88U;
si0+=si1;
si1=l6;
si2=12U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
l9=sj1;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=32U;
si0+=si1;
si1=l6;
si2=32U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=40U;
si0+=si1;
si1=l6;
si2=40U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l6;
si1=l6;
sj1=i64_load(&i->m0,(U64)si1+4U);
l10=sj1;
i64_store(&i->m0,(U64)si0+80U,sj1);
si0=l0;
si1=20U;
si0+=si1;
si1=l2;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=12U;
si0+=si1;
sj1=l9;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
sj1=l10;
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l0;
si1=l5;
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
f3385(i,si0);
si0=l1;
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L3;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
f15271(i,si0);
L3:;
si0=l1;
si1=12U;
si0+=si1;
l0=si0;
f3385(i,si0);
si0=l1;
si1=16U;
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
si0=l6;
si1=112U;
si0+=si1;
i->g0=si0;
L0:;
}

void f3180(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4) {
U32 l5=0;
U32 l6=0;
U32 l7=0;
U64 l8=0;
U64 l9=0;
U32 si0,si1,si2,si3;
U64 sj1;
si0=i->g0;
si1=112U;
si0-=si1;
l5=si0;
i->g0=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+16U);
l6=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+24U);
l7=si0;
si0=l5;
si1=l2;
si2=l3;
si3=l4;
f3084(i,si0,si1,si2,si3);
si0=l5;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
si1=5U;
si0=si0 != si1;
if(si0){
goto L2;
}
si0=l5;
si1=48U;
si0+=si1;
si1=12U;
si0+=si1;
si1=l5;
si2=12U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=48U;
si0+=si1;
si1=20U;
si0+=si1;
si1=l5;
si2=20U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=l5;
sj1=i64_load(&i->m0,(U64)si1+4U);
i64_store(&i->m0,(U64)si0+52U,sj1);
si0=l5;
si1=l6;
i32_store(&i->m0,(U64)si0+72U,si1);
si0=l5;
si1=l7;
i32_store(&i->m0,(U64)si0+48U,si1);
si0=l5;
si1=80U;
si0+=si1;
si1=24U;
si0+=si1;
si1=l1;
si2=24U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=80U;
si0+=si1;
si1=16U;
si0+=si1;
si1=l1;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=80U;
si0+=si1;
si1=8U;
si0+=si1;
si1=l1;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=l1;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+80U,sj1);
si0=l5;
si1=l6;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l5;
si1=98U;
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=l6;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l0;
si1=l5;
si2=80U;
si1+=si2;
si2=l5;
si3=48U;
si2+=si3;
si3=l5;
f3022(i,si0,si1,si2,si3);
goto L1;
L2:;
si0=l0;
si1=l5;
sj1=i64_load(&i->m0,(U64)si1+24U);
i64_store(&i->m0,(U64)si0+24U,sj1);
si0=l5;
si1=80U;
si0+=si1;
si1=16U;
si0+=si1;
si1=l5;
si2=20U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
l2=si1;
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=88U;
si0+=si1;
si1=l5;
si2=12U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
l8=sj1;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=32U;
si0+=si1;
si1=l5;
si2=32U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=40U;
si0+=si1;
si1=l5;
si2=40U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=l5;
sj1=i64_load(&i->m0,(U64)si1+4U);
l9=sj1;
i64_store(&i->m0,(U64)si0+80U,sj1);
si0=l0;
si1=20U;
si0+=si1;
si1=l2;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=12U;
si0+=si1;
sj1=l8;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
sj1=l9;
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l0;
si1=l4;
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
f3385(i,si0);
si0=l1;
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L3;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
f15271(i,si0);
L3:;
si0=l1;
si1=12U;
si0+=si1;
l0=si0;
f3385(i,si0);
si0=l1;
si1=16U;
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
si0=l5;
si1=112U;
si0+=si1;
i->g0=si0;
L0:;
}

void f3181(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4,U32 l5) {
U32 l6=0;
U32 l7=0;
U32 l8=0;
U32 si0,si1,si2,si3;
U64 sj1;
si0=l4;
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
si1=-2U;
si0+=si1;
l8=si0;
si1=1U;
si2=l8;
si3=96U;
si2=si2 < si3;
si0=si2?si0:si1;
switch(si0){
case 0:
goto L5;
case 1:
goto L4;
case 2:
goto L1;
case 3:
goto L1;
case 4:
goto L3;
default:
goto L1;
}
L5:;
si0=l3;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L1;
}
goto L2;
L4:;
si0=l7;
si0=!(si0);
if(si0){
goto L1;
}
si0=l3;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L2;
}
goto L1;
L3:;
si0=l3;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L1;
}
L2:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+4U);
f15271(i,si0);
L1:;
si0=l4;
if(si0){
goto L10;
}
si0=0U;
l3=si0;
goto L9;
L10:;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=36U;
si0=f15269(i,si0);
l3=si0;
si0=!(si0);
if(si0){
goto L8;
}
si0=l3;
si1=l4;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=l2;
si2=4U;
si1+=si2;
l2=si1;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l3;
si1=12U;
si0+=si1;
si1=l2;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=20U;
si0+=si1;
si1=l2;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=28U;
si0+=si1;
si1=l2;
si2=24U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
L9:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
si1=-2U;
si0+=si1;
l2=si0;
si1=1U;
si2=l2;
si3=96U;
si2=si2 < si3;
si0=si2?si0:si1;
switch(si0){
case 0:
goto L13;
case 1:
goto L12;
case 2:
goto L6;
case 3:
goto L6;
case 4:
goto L11;
default:
goto L6;
}
L13:;
si0=l1;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L6;
}
goto L7;
L12:;
si0=l4;
si0=!(si0);
if(si0){
goto L6;
}
si0=l1;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L7;
}
goto L6;
L11:;
si0=l1;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L7;
}
goto L6;
L8:;
si0=4U;
si1=36U;
f52(i,si0,si1);
UNREACHABLE;
L7:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
f15271(i,si0);
L6:;
si0=l5;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si1=98U;
si0=si0 == si1;
if(si0){
goto L14;
}
si0=l5;
si0=i32_load(&i->m0,(U64)si0+8U);
l2=si0;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+4U);
l4=si0;
si0=l1;
si1=-2U;
si0+=si1;
l5=si0;
si1=1U;
si2=l5;
si3=96U;
si2=si2 < si3;
si0=si2?si0:si1;
switch(si0){
case 0:
goto L18;
case 1:
goto L17;
case 2:
goto L14;
case 3:
goto L14;
case 4:
goto L16;
default:
goto L14;
}
L18:;
si0=l2;
si0=!(si0);
if(si0){
goto L14;
}
goto L15;
L17:;
si0=l1;
si0=!(si0);
if(si0){
goto L14;
}
L16:;
si0=l2;
si0=!(si0);
if(si0){
goto L14;
}
L15:;
si0=l4;
f15271(i,si0);
L14:;
si0=l0;
sj1=17179869189ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=44U;
si0+=si1;
si1=l6;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=40U;
si0+=si1;
si1=l3;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=32U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=24U;
si0+=si1;
sj1=17179869184ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=16U;
si0+=si1;
sj1=4ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=8U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
L0:;
}

void f3182(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4,U32 l5,U32 l6) {
U32 l7=0;
U32 l8=0;
U64 l9=0;
U32 l10=0;
U32 si0,si1,si2,si3;
U64 sj0,sj1;
si0=l5;
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
si0=l3;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l8=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si0=l3;
sj0=i64_load(&i->m0,(U64)si0);
l9=sj0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
l10=si0;
si1=-2U;
si0+=si1;
l3=si0;
si1=1U;
si2=l3;
si3=96U;
si2=si2 < si3;
si0=si2?si0:si1;
switch(si0){
case 0:
goto L5;
case 1:
goto L4;
case 2:
goto L1;
case 3:
goto L1;
case 4:
goto L3;
default:
goto L1;
}
L5:;
si0=l4;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L1;
}
goto L2;
L4:;
si0=l10;
si0=!(si0);
if(si0){
goto L1;
}
si0=l4;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L2;
}
goto L1;
L3:;
si0=l4;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L1;
}
L2:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+4U);
f15271(i,si0);
L1:;
si0=l5;
if(si0){
goto L10;
}
si0=0U;
l4=si0;
goto L9;
L10:;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=36U;
si0=f15269(i,si0);
l4=si0;
si0=!(si0);
if(si0){
goto L8;
}
si0=l4;
si1=l5;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=l2;
si2=4U;
si1+=si2;
l3=si1;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l4;
si1=12U;
si0+=si1;
si1=l3;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=20U;
si0+=si1;
si1=l3;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=28U;
si0+=si1;
si1=l3;
si2=24U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
L9:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si1=-2U;
si0+=si1;
l3=si0;
si1=1U;
si2=l3;
si3=96U;
si2=si2 < si3;
si0=si2?si0:si1;
switch(si0){
case 0:
goto L13;
case 1:
goto L12;
case 2:
goto L6;
case 3:
goto L6;
case 4:
goto L11;
default:
goto L6;
}
L13:;
si0=l1;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L6;
}
goto L7;
L12:;
si0=l2;
si0=!(si0);
if(si0){
goto L6;
}
si0=l1;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L7;
}
goto L6;
L11:;
si0=l1;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L7;
}
goto L6;
L8:;
si0=4U;
si1=36U;
f52(i,si0,si1);
UNREACHABLE;
L7:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
f15271(i,si0);
L6:;
si0=l6;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si1=98U;
si0=si0 == si1;
if(si0){
goto L14;
}
si0=l6;
si0=i32_load(&i->m0,(U64)si0+8U);
l2=si0;
si0=l6;
si0=i32_load(&i->m0,(U64)si0+4U);
l6=si0;
si0=l1;
si1=-2U;
si0+=si1;
l3=si0;
si1=1U;
si2=l3;
si3=96U;
si2=si2 < si3;
si0=si2?si0:si1;
switch(si0){
case 0:
goto L18;
case 1:
goto L17;
case 2:
goto L14;
case 3:
goto L14;
case 4:
goto L16;
default:
goto L14;
}
L18:;
si0=l2;
si0=!(si0);
if(si0){
goto L14;
}
goto L15;
L17:;
si0=l1;
si0=!(si0);
if(si0){
goto L14;
}
L16:;
si0=l2;
si0=!(si0);
if(si0){
goto L14;
}
L15:;
si0=l6;
f15271(i,si0);
L14:;
si0=l0;
sj1=17179869189ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=44U;
si0+=si1;
si1=l7;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=40U;
si0+=si1;
si1=l4;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=36U;
si0+=si1;
si1=l8;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=28U;
si0+=si1;
sj1=l9;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=24U;
si0+=si1;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=16U;
si0+=si1;
sj1=4ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=8U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
L0:;
}

void f3183(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U32 l5=0;
U64 l6=0;
U32 l7=0;
U32 l8=0;
U64 l9=0;
U32 si0,si1,si2,si3,si4,si5;
U64 sj0,sj1;
si0=i->g0;
si1=160U;
si0-=si1;
l4=si0;
i->g0=si0;
si0=l4;
si1=72U;
si0+=si1;
si1=12U;
si0+=si1;
si1=l2;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=72U;
si0+=si1;
si1=20U;
si0+=si1;
si1=l2;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=100U;
si0+=si1;
si1=l2;
si2=24U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=108U;
si0+=si1;
si1=l2;
si2=32U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=l2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+76U,sj1);
si0=l4;
si1=l2;
si1=i32_load(&i->m0,(U64)si1+40U);
l5=si1;
i32_store(&i->m0,(U64)si0+112U,si1);
si0=l4;
si1=l2;
si1=i32_load(&i->m0,(U64)si1+36U);
i32_store(&i->m0,(U64)si0+72U,si1);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+24U);
l2=si0;
si0=l4;
si1=l5;
i32_store(&i->m0,(U64)si0+136U,si1);
si0=l4;
si1=0U;
i32_store(&i->m0,(U64)si0+128U,si1);
si0=l4;
sj1=4ULL;
i64_store(&i->m0,(U64)si0+120U,sj1);
si0=l4;
si1=l5;
i32_store(&i->m0,(U64)si0+132U,si1);
si0=l4;
si1=l2;
i32_store(&i->m0,(U64)si0+152U,si1);
si0=l4;
si1=l2;
i32_store(&i->m0,(U64)si0+148U,si1);
si0=l4;
si1=l2;
i32_store(&i->m0,(U64)si0+144U,si1);
si0=l4;
si1=24U;
si0+=si1;
si1=l4;
si2=144U;
si1+=si2;
si2=l1;
si3=l4;
si4=72U;
si3+=si4;
si4=l4;
si5=120U;
si4+=si5;
f3027(i,si0,si1,si2,si3,si4);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+24U);
l2=si0;
si1=5U;
si0=si0 != si1;
if(si0){
goto L4;
}
si0=l4;
si1=8U;
si0+=si1;
si1=8U;
si0+=si1;
si1=l4;
si2=24U;
si1+=si2;
si2=12U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
l2=si1;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1+28U);
l6=sj1;
i64_store(&i->m0,(U64)si0+8U,sj1);
si0=l4;
si1=24U;
si0+=si1;
si1=16U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si0=l4;
si1=24U;
si0+=si1;
si1=20U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si0=l4;
si1=24U;
si0+=si1;
si1=8U;
si0+=si1;
si1=l2;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
sj1=l6;
i64_store(&i->m0,(U64)si0+24U,sj1);
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si1=98U;
si0=si0 == si1;
if(si0){
goto L2;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0+8U);
l7=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+4U);
l8=si0;
si0=l2;
si1=-2U;
si0+=si1;
l3=si0;
si1=1U;
si2=l3;
si3=96U;
si2=si2 < si3;
si0=si2?si0:si1;
switch(si0){
case 0:
goto L7;
case 1:
goto L6;
case 2:
goto L2;
case 3:
goto L2;
case 4:
goto L5;
default:
goto L2;
}
L7:;
si0=l7;
si0=!(si0);
if(si0){
goto L2;
}
goto L3;
L6:;
si0=l2;
si0=!(si0);
if(si0){
goto L2;
}
L5:;
si0=l7;
if(si0){
goto L3;
}
goto L2;
L4:;
si0=l0;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1+48U);
i64_store(&i->m0,(U64)si0+24U,sj1);
si0=l4;
si1=8U;
si0+=si1;
si1=8U;
si0+=si1;
si1=l4;
si2=24U;
si1+=si2;
si2=12U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
l1=si1;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=32U;
si0+=si1;
si1=l4;
si2=24U;
si1+=si2;
si2=32U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=40U;
si0+=si1;
si1=l4;
si2=24U;
si1+=si2;
si2=40U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1+28U);
l6=sj1;
i64_store(&i->m0,(U64)si0+8U,sj1);
si0=l4;
sj0=i64_load(&i->m0,(U64)si0+40U);
l9=sj0;
si0=l0;
si1=12U;
si0+=si1;
si1=l1;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
sj1=l6;
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l0;
sj1=l9;
i64_store(&i->m0,(U64)si0+16U,sj1);
si0=l0;
si1=l2;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si1=-2U;
si0+=si1;
l0=si0;
si1=1U;
si2=l0;
si3=96U;
si2=si2 < si3;
si0=si2?si0:si1;
switch(si0){
case 0:
goto L11;
case 1:
goto L10;
case 2:
goto L1;
case 3:
goto L1;
case 4:
goto L9;
default:
goto L1;
}
L11:;
si0=l3;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L1;
}
goto L8;
L10:;
si0=l2;
si0=!(si0);
if(si0){
goto L1;
}
si0=l3;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L8;
}
goto L1;
L9:;
si0=l3;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L1;
}
L8:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+4U);
f15271(i,si0);
goto L1;
L3:;
si0=l8;
f15271(i,si0);
L2:;
si0=l0;
sj1=17179869189ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=24U;
si0+=si1;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=16U;
si0+=si1;
sj1=4ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=8U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=28U;
si0+=si1;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1+24U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=44U;
si0+=si1;
si1=l5;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=40U;
si0+=si1;
si1=l1;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=36U;
si0+=si1;
si1=l4;
si2=24U;
si1+=si2;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
L1:;
si0=l4;
si1=160U;
si0+=si1;
i->g0=si0;
L0:;
}

void f3184(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U32 l4=0;
U32 l5=0;
U64 l6=0;
U32 l7=0;
U32 l8=0;
U32 l9=0;
U64 l10=0;
U32 si0,si1,si2,si3,si4,si5;
U64 sj0,sj1;
si0=i->g0;
si1=160U;
si0-=si1;
l3=si0;
i->g0=si0;
si0=l3;
si1=0U;
i32_store(&i->m0,(U64)si0+76U,si1);
si0=l3;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+28U);
l4=si1;
i32_store(&i->m0,(U64)si0+112U,si1);
si0=l3;
si1=l4;
i32_store(&i->m0,(U64)si0+72U,si1);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+24U);
l5=si0;
si0=l3;
si1=l4;
i32_store(&i->m0,(U64)si0+136U,si1);
si0=l3;
si1=0U;
i32_store(&i->m0,(U64)si0+128U,si1);
si0=l3;
sj1=4ULL;
i64_store(&i->m0,(U64)si0+120U,sj1);
si0=l3;
si1=l4;
i32_store(&i->m0,(U64)si0+132U,si1);
si0=l3;
si1=l5;
i32_store(&i->m0,(U64)si0+152U,si1);
si0=l3;
si1=l5;
i32_store(&i->m0,(U64)si0+148U,si1);
si0=l3;
si1=l5;
i32_store(&i->m0,(U64)si0+144U,si1);
si0=l3;
si1=24U;
si0+=si1;
si1=l3;
si2=144U;
si1+=si2;
si2=l1;
si3=l3;
si4=72U;
si3+=si4;
si4=l3;
si5=120U;
si4+=si5;
f3027(i,si0,si1,si2,si3,si4);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+24U);
l1=si0;
si1=5U;
si0=si0 != si1;
if(si0){
goto L4;
}
si0=l3;
si1=8U;
si0+=si1;
si1=8U;
si0+=si1;
si1=l3;
si2=36U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
l1=si1;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=l3;
sj1=i64_load(&i->m0,(U64)si1+28U);
l6=sj1;
i64_store(&i->m0,(U64)si0+8U,sj1);
si0=l3;
si1=24U;
si0+=si1;
si1=16U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
si0=l3;
si1=44U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si0=l3;
si1=24U;
si0+=si1;
si1=8U;
si0+=si1;
l7=si0;
si1=l1;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
sj1=l6;
i64_store(&i->m0,(U64)si0+24U,sj1);
si0=l2;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si1=98U;
si0=si0 == si1;
if(si0){
goto L2;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0+8U);
l8=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+4U);
l9=si0;
si0=l1;
si1=-2U;
si0+=si1;
l2=si0;
si1=1U;
si2=l2;
si3=96U;
si2=si2 < si3;
si0=si2?si0:si1;
switch(si0){
case 0:
goto L7;
case 1:
goto L6;
case 2:
goto L2;
case 3:
goto L2;
case 4:
goto L5;
default:
goto L2;
}
L7:;
si0=l8;
si0=!(si0);
if(si0){
goto L2;
}
goto L3;
L6:;
si0=l1;
si0=!(si0);
if(si0){
goto L2;
}
L5:;
si0=l8;
if(si0){
goto L3;
}
goto L2;
L4:;
si0=l0;
si1=l3;
sj1=i64_load(&i->m0,(U64)si1+48U);
i64_store(&i->m0,(U64)si0+24U,sj1);
si0=l3;
si1=8U;
si0+=si1;
si1=8U;
si0+=si1;
si1=l3;
si2=24U;
si1+=si2;
si2=12U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
l4=si1;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=32U;
si0+=si1;
si1=l3;
si2=24U;
si1+=si2;
si2=32U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=40U;
si0+=si1;
si1=l3;
si2=24U;
si1+=si2;
si2=40U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=l3;
sj1=i64_load(&i->m0,(U64)si1+28U);
l6=sj1;
i64_store(&i->m0,(U64)si0+8U,sj1);
si0=l3;
sj0=i64_load(&i->m0,(U64)si0+40U);
l10=sj0;
si0=l0;
si1=12U;
si0+=si1;
si1=l4;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
sj1=l6;
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l0;
sj1=l10;
i64_store(&i->m0,(U64)si0+16U,sj1);
si0=l0;
si1=l1;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si1=-2U;
si0+=si1;
l0=si0;
si1=1U;
si2=l0;
si3=96U;
si2=si2 < si3;
si0=si2?si0:si1;
switch(si0){
case 0:
goto L11;
case 1:
goto L10;
case 2:
goto L1;
case 3:
goto L1;
case 4:
goto L9;
default:
goto L1;
}
L11:;
si0=l2;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L1;
}
goto L8;
L10:;
si0=l1;
si0=!(si0);
if(si0){
goto L1;
}
si0=l2;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L8;
}
goto L1;
L9:;
si0=l2;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L1;
}
L8:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+4U);
f15271(i,si0);
goto L1;
L3:;
si0=l9;
f15271(i,si0);
L2:;
si0=l0;
sj1=17179869189ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=24U;
si0+=si1;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=16U;
si0+=si1;
sj1=4ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=8U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=28U;
si0+=si1;
si1=l3;
sj1=i64_load(&i->m0,(U64)si1+24U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=44U;
si0+=si1;
si1=l5;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=40U;
si0+=si1;
si1=l4;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=36U;
si0+=si1;
si1=l7;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
L1:;
si0=l3;
si1=160U;
si0+=si1;
i->g0=si0;
L0:;
}

void f3185(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4) {
U32 l5=0;
U64 l6=0;
U32 l7=0;
U32 l8=0;
U64 l9=0;
U32 si0,si1,si2,si3,si4,si5;
U64 sj0,sj1;
si0=i->g0;
si1=160U;
si0-=si1;
l5=si0;
i->g0=si0;
si0=l5;
si1=72U;
si0+=si1;
si1=12U;
si0+=si1;
si1=l2;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=72U;
si0+=si1;
si1=20U;
si0+=si1;
si1=l2;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=100U;
si0+=si1;
si1=l2;
si2=24U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=108U;
si0+=si1;
si1=l2;
si2=32U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=l2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+76U,sj1);
si0=l5;
si1=l2;
si1=i32_load(&i->m0,(U64)si1+40U);
i32_store(&i->m0,(U64)si0+112U,si1);
si0=l5;
si1=l2;
si1=i32_load(&i->m0,(U64)si1+36U);
i32_store(&i->m0,(U64)si0+72U,si1);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+24U);
l2=si0;
si0=l5;
si1=120U;
si0+=si1;
si1=8U;
si0+=si1;
si1=l3;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=l3;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+120U,sj1);
si0=l5;
si1=l3;
sj1=i64_load(&i->m0,(U64)si1+12U);
i64_store(&i->m0,(U64)si0+132U,sj1);
si0=l5;
si1=l2;
i32_store(&i->m0,(U64)si0+152U,si1);
si0=l5;
si1=l2;
i32_store(&i->m0,(U64)si0+148U,si1);
si0=l5;
si1=l2;
i32_store(&i->m0,(U64)si0+144U,si1);
si0=l5;
si1=24U;
si0+=si1;
si1=l5;
si2=144U;
si1+=si2;
si2=l1;
si3=l5;
si4=72U;
si3+=si4;
si4=l5;
si5=120U;
si4+=si5;
f3027(i,si0,si1,si2,si3,si4);
si0=l5;
si0=i32_load(&i->m0,(U64)si0+24U);
l2=si0;
si1=5U;
si0=si0 != si1;
if(si0){
goto L4;
}
si0=l5;
si1=8U;
si0+=si1;
si1=8U;
si0+=si1;
si1=l5;
si2=24U;
si1+=si2;
si2=12U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
l2=si1;
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=l5;
sj1=i64_load(&i->m0,(U64)si1+28U);
l6=sj1;
i64_store(&i->m0,(U64)si0+8U,sj1);
si0=l5;
si1=24U;
si0+=si1;
si1=16U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=l5;
si1=24U;
si0+=si1;
si1=20U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si0=l5;
si1=24U;
si0+=si1;
si1=8U;
si0+=si1;
si1=l2;
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
sj1=l6;
i64_store(&i->m0,(U64)si0+24U,sj1);
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si1=98U;
si0=si0 == si1;
if(si0){
goto L2;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0+8U);
l7=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+4U);
l8=si0;
si0=l2;
si1=-2U;
si0+=si1;
l4=si0;
si1=1U;
si2=l4;
si3=96U;
si2=si2 < si3;
si0=si2?si0:si1;
switch(si0){
case 0:
goto L7;
case 1:
goto L6;
case 2:
goto L2;
case 3:
goto L2;
case 4:
goto L5;
default:
goto L2;
}
L7:;
si0=l7;
si0=!(si0);
if(si0){
goto L2;
}
goto L3;
L6:;
si0=l2;
si0=!(si0);
if(si0){
goto L2;
}
L5:;
si0=l7;
if(si0){
goto L3;
}
goto L2;
L4:;
si0=l0;
si1=l5;
sj1=i64_load(&i->m0,(U64)si1+48U);
i64_store(&i->m0,(U64)si0+24U,sj1);
si0=l5;
si1=8U;
si0+=si1;
si1=8U;
si0+=si1;
si1=l5;
si2=24U;
si1+=si2;
si2=12U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
l3=si1;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=32U;
si0+=si1;
si1=l5;
si2=24U;
si1+=si2;
si2=32U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=40U;
si0+=si1;
si1=l5;
si2=24U;
si1+=si2;
si2=40U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=l5;
sj1=i64_load(&i->m0,(U64)si1+28U);
l6=sj1;
i64_store(&i->m0,(U64)si0+8U,sj1);
si0=l5;
sj0=i64_load(&i->m0,(U64)si0+40U);
l9=sj0;
si0=l0;
si1=12U;
si0+=si1;
si1=l3;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
sj1=l6;
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l0;
sj1=l9;
i64_store(&i->m0,(U64)si0+16U,sj1);
si0=l0;
si1=l2;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si1=-2U;
si0+=si1;
l0=si0;
si1=1U;
si2=l0;
si3=96U;
si2=si2 < si3;
si0=si2?si0:si1;
switch(si0){
case 0:
goto L11;
case 1:
goto L10;
case 2:
goto L1;
case 3:
goto L1;
case 4:
goto L9;
default:
goto L1;
}
L11:;
si0=l4;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L1;
}
goto L8;
L10:;
si0=l2;
si0=!(si0);
if(si0){
goto L1;
}
si0=l4;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L8;
}
goto L1;
L9:;
si0=l4;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L1;
}
L8:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+4U);
f15271(i,si0);
goto L1;
L3:;
si0=l8;
f15271(i,si0);
L2:;
si0=l0;
sj1=17179869189ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=24U;
si0+=si1;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=16U;
si0+=si1;
sj1=4ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=8U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=28U;
si0+=si1;
si1=l5;
sj1=i64_load(&i->m0,(U64)si1+24U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=44U;
si0+=si1;
si1=l1;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=40U;
si0+=si1;
si1=l3;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=36U;
si0+=si1;
si1=l5;
si2=24U;
si1+=si2;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
L1:;
si0=l5;
si1=160U;
si0+=si1;
i->g0=si0;
L0:;
}

void f3186(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U32 l5=0;
U32 l6=0;
U64 l7=0;
U32 l8=0;
U64 l9=0;
U32 si0,si1,si2,si3,si4,si5;
U64 sj0,sj1;
si0=i->g0;
si1=160U;
si0-=si1;
l4=si0;
i->g0=si0;
si0=l4;
si1=0U;
i32_store(&i->m0,(U64)si0+76U,si1);
si0=l4;
si1=l2;
si1=i32_load(&i->m0,(U64)si1+12U);
l5=si1;
i32_store(&i->m0,(U64)si0+112U,si1);
si0=l4;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+28U);
i32_store(&i->m0,(U64)si0+72U,si1);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+24U);
l6=si0;
si0=l4;
si1=120U;
si0+=si1;
si1=8U;
si0+=si1;
si1=l2;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=l5;
i32_store(&i->m0,(U64)si0+132U,si1);
si0=l4;
si1=l2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+120U,sj1);
si0=l4;
si1=l2;
si1=i32_load(&i->m0,(U64)si1+16U);
i32_store(&i->m0,(U64)si0+136U,si1);
si0=l4;
si1=l6;
i32_store(&i->m0,(U64)si0+152U,si1);
si0=l4;
si1=l6;
i32_store(&i->m0,(U64)si0+148U,si1);
si0=l4;
si1=l6;
i32_store(&i->m0,(U64)si0+144U,si1);
si0=l4;
si1=24U;
si0+=si1;
si1=l4;
si2=144U;
si1+=si2;
si2=l1;
si3=l4;
si4=72U;
si3+=si4;
si4=l4;
si5=120U;
si4+=si5;
f3027(i,si0,si1,si2,si3,si4);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+24U);
l2=si0;
si1=5U;
si0=si0 != si1;
if(si0){
goto L4;
}
si0=l4;
si1=8U;
si0+=si1;
si1=8U;
si0+=si1;
si1=l4;
si2=36U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
l2=si1;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1+28U);
l7=sj1;
i64_store(&i->m0,(U64)si0+8U,sj1);
si0=l4;
si1=24U;
si0+=si1;
si1=16U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si0=l4;
si1=44U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si0=l4;
si1=24U;
si0+=si1;
si1=8U;
si0+=si1;
si1=l2;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
sj1=l7;
i64_store(&i->m0,(U64)si0+24U,sj1);
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si1=98U;
si0=si0 == si1;
if(si0){
goto L2;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0+8U);
l5=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+4U);
l8=si0;
si0=l2;
si1=-2U;
si0+=si1;
l3=si0;
si1=1U;
si2=l3;
si3=96U;
si2=si2 < si3;
si0=si2?si0:si1;
switch(si0){
case 0:
goto L7;
case 1:
goto L6;
case 2:
goto L2;
case 3:
goto L2;
case 4:
goto L5;
default:
goto L2;
}
L7:;
si0=l5;
si0=!(si0);
if(si0){
goto L2;
}
goto L3;
L6:;
si0=l2;
si0=!(si0);
if(si0){
goto L2;
}
L5:;
si0=l5;
if(si0){
goto L3;
}
goto L2;
L4:;
si0=l0;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1+48U);
i64_store(&i->m0,(U64)si0+24U,sj1);
si0=l4;
si1=8U;
si0+=si1;
si1=8U;
si0+=si1;
si1=l4;
si2=24U;
si1+=si2;
si2=12U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
l1=si1;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=32U;
si0+=si1;
si1=l4;
si2=24U;
si1+=si2;
si2=32U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=40U;
si0+=si1;
si1=l4;
si2=24U;
si1+=si2;
si2=40U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1+28U);
l7=sj1;
i64_store(&i->m0,(U64)si0+8U,sj1);
si0=l4;
sj0=i64_load(&i->m0,(U64)si0+40U);
l9=sj0;
si0=l0;
si1=12U;
si0+=si1;
si1=l1;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
sj1=l7;
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l0;
sj1=l9;
i64_store(&i->m0,(U64)si0+16U,sj1);
si0=l0;
si1=l2;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si1=-2U;
si0+=si1;
l0=si0;
si1=1U;
si2=l0;
si3=96U;
si2=si2 < si3;
si0=si2?si0:si1;
switch(si0){
case 0:
goto L11;
case 1:
goto L10;
case 2:
goto L1;
case 3:
goto L1;
case 4:
goto L9;
default:
goto L1;
}
L11:;
si0=l3;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L1;
}
goto L8;
L10:;
si0=l2;
si0=!(si0);
if(si0){
goto L1;
}
si0=l3;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L8;
}
goto L1;
L9:;
si0=l3;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L1;
}
L8:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+4U);
f15271(i,si0);
goto L1;
L3:;
si0=l8;
f15271(i,si0);
L2:;
si0=l0;
sj1=17179869189ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=24U;
si0+=si1;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=16U;
si0+=si1;
sj1=4ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=8U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=28U;
si0+=si1;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1+24U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=44U;
si0+=si1;
si1=l6;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=40U;
si0+=si1;
si1=l1;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=36U;
si0+=si1;
si1=l4;
si2=24U;
si1+=si2;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
L1:;
si0=l4;
si1=160U;
si0+=si1;
i->g0=si0;
L0:;
}

void f3187(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4) {
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 si0,si1,si2,si3;
U64 sj1;
si0=l4;
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si1=-2U;
si0+=si1;
l7=si0;
si1=1U;
si2=l7;
si3=96U;
si2=si2 < si3;
si0=si2?si0:si1;
switch(si0){
case 0:
goto L5;
case 1:
goto L4;
case 2:
goto L1;
case 3:
goto L1;
case 4:
goto L3;
default:
goto L1;
}
L5:;
si0=l3;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L1;
}
goto L2;
L4:;
si0=l6;
si0=!(si0);
if(si0){
goto L1;
}
si0=l3;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L2;
}
goto L1;
L3:;
si0=l3;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L1;
}
L2:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+4U);
f15271(i,si0);
L1:;
si0=l4;
if(si0){
goto L10;
}
si0=0U;
l3=si0;
goto L9;
L10:;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=36U;
si0=f15269(i,si0);
l3=si0;
si0=!(si0);
if(si0){
goto L8;
}
si0=l3;
si1=l4;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=l2;
si2=4U;
si1+=si2;
l2=si1;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l3;
si1=12U;
si0+=si1;
si1=l2;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=20U;
si0+=si1;
si1=l2;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=28U;
si0+=si1;
si1=l2;
si2=24U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
L9:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
si1=-2U;
si0+=si1;
l2=si0;
si1=1U;
si2=l2;
si3=96U;
si2=si2 < si3;
si0=si2?si0:si1;
switch(si0){
case 0:
goto L13;
case 1:
goto L12;
case 2:
goto L6;
case 3:
goto L6;
case 4:
goto L11;
default:
goto L6;
}
L13:;
si0=l1;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L6;
}
goto L7;
L12:;
si0=l4;
si0=!(si0);
if(si0){
goto L6;
}
si0=l1;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L7;
}
goto L6;
L11:;
si0=l1;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L7;
}
goto L6;
L8:;
si0=4U;
si1=36U;
f52(i,si0,si1);
UNREACHABLE;
L7:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
f15271(i,si0);
L6:;
si0=l0;
sj1=17179869189ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=44U;
si0+=si1;
si1=l5;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=40U;
si0+=si1;
si1=l3;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=32U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=24U;
si0+=si1;
sj1=17179869184ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=16U;
si0+=si1;
sj1=4ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=8U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
L0:;
}

void f3188(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4,U32 l5) {
U32 l6=0;
U32 l7=0;
U64 l8=0;
U32 l9=0;
U32 si0,si1,si2,si3;
U64 sj0,sj1;
si0=l5;
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si0=l3;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si0=l3;
sj0=i64_load(&i->m0,(U64)si0);
l8=sj0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
l9=si0;
si1=-2U;
si0+=si1;
l3=si0;
si1=1U;
si2=l3;
si3=96U;
si2=si2 < si3;
si0=si2?si0:si1;
switch(si0){
case 0:
goto L5;
case 1:
goto L4;
case 2:
goto L1;
case 3:
goto L1;
case 4:
goto L3;
default:
goto L1;
}
L5:;
si0=l4;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L1;
}
goto L2;
L4:;
si0=l9;
si0=!(si0);
if(si0){
goto L1;
}
si0=l4;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L2;
}
goto L1;
L3:;
si0=l4;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L1;
}
L2:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+4U);
f15271(i,si0);
L1:;
si0=l5;
if(si0){
goto L10;
}
si0=0U;
l4=si0;
goto L9;
L10:;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=36U;
si0=f15269(i,si0);
l4=si0;
si0=!(si0);
if(si0){
goto L8;
}
si0=l4;
si1=l5;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=l2;
si2=4U;
si1+=si2;
l3=si1;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l4;
si1=12U;
si0+=si1;
si1=l3;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=20U;
si0+=si1;
si1=l3;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=28U;
si0+=si1;
si1=l3;
si2=24U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
L9:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si1=-2U;
si0+=si1;
l3=si0;
si1=1U;
si2=l3;
si3=96U;
si2=si2 < si3;
si0=si2?si0:si1;
switch(si0){
case 0:
goto L13;
case 1:
goto L12;
case 2:
goto L6;
case 3:
goto L6;
case 4:
goto L11;
default:
goto L6;
}
L13:;
si0=l1;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L6;
}
goto L7;
L12:;
si0=l2;
si0=!(si0);
if(si0){
goto L6;
}
si0=l1;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L7;
}
goto L6;
L11:;
si0=l1;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L7;
}
goto L6;
L8:;
si0=4U;
si1=36U;
f52(i,si0,si1);
UNREACHABLE;
L7:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
f15271(i,si0);
L6:;
si0=l0;
sj1=17179869189ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=44U;
si0+=si1;
si1=l6;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=40U;
si0+=si1;
si1=l4;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=36U;
si0+=si1;
si1=l7;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=28U;
si0+=si1;
sj1=l8;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=24U;
si0+=si1;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=16U;
si0+=si1;
sj1=4ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=8U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
L0:;
}

void f3189(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U32 l4=0;
U64 l5=0;
U64 l6=0;
U32 si0,si1,si2,si3,si4,si5;
U64 sj0,sj1;
si0=i->g0;
si1=160U;
si0-=si1;
l3=si0;
i->g0=si0;
si0=l3;
si1=72U;
si0+=si1;
si1=12U;
si0+=si1;
si1=l2;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=72U;
si0+=si1;
si1=20U;
si0+=si1;
si1=l2;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=72U;
si0+=si1;
si1=28U;
si0+=si1;
si1=l2;
si2=24U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=72U;
si0+=si1;
si1=36U;
si0+=si1;
si1=l2;
si2=32U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=l2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+76U,sj1);
si0=l3;
si1=l2;
si1=i32_load(&i->m0,(U64)si1+40U);
l4=si1;
i32_store(&i->m0,(U64)si0+112U,si1);
si0=l3;
si1=l2;
si1=i32_load(&i->m0,(U64)si1+36U);
i32_store(&i->m0,(U64)si0+72U,si1);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+24U);
l2=si0;
si0=l3;
si1=l4;
i32_store(&i->m0,(U64)si0+136U,si1);
si0=l3;
si1=0U;
i32_store(&i->m0,(U64)si0+128U,si1);
si0=l3;
sj1=4ULL;
i64_store(&i->m0,(U64)si0+120U,sj1);
si0=l3;
si1=l4;
i32_store(&i->m0,(U64)si0+132U,si1);
si0=l3;
si1=l2;
i32_store(&i->m0,(U64)si0+152U,si1);
si0=l3;
si1=l2;
i32_store(&i->m0,(U64)si0+148U,si1);
si0=l3;
si1=l2;
i32_store(&i->m0,(U64)si0+144U,si1);
si0=l3;
si1=24U;
si0+=si1;
si1=l3;
si2=144U;
si1+=si2;
si2=l1;
si3=l3;
si4=72U;
si3+=si4;
si4=l3;
si5=120U;
si4+=si5;
f3027(i,si0,si1,si2,si3,si4);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+24U);
l2=si0;
si1=5U;
si0=si0 != si1;
if(si0){
goto L2;
}
si0=l3;
si1=8U;
si0+=si1;
si1=8U;
si0+=si1;
si1=l3;
si2=24U;
si1+=si2;
si2=12U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
l1=si1;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=l3;
sj1=i64_load(&i->m0,(U64)si1+28U);
l5=sj1;
i64_store(&i->m0,(U64)si0+8U,sj1);
si0=l3;
si1=24U;
si0+=si1;
si1=16U;
si0+=si1;
sj0=i64_load(&i->m0,(U64)si0);
l6=sj0;
si0=l3;
si1=24U;
si0+=si1;
si1=8U;
si0+=si1;
si1=l1;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
sj1=l5;
i64_store(&i->m0,(U64)si0+24U,sj1);
si0=l0;
si1=20U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=12U;
si0+=si1;
sj1=17179869184ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
sj1=4ULL;
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l0;
si1=28U;
si0+=si1;
sj1=l5;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=36U;
si0+=si1;
si1=l1;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=40U;
si0+=si1;
sj1=l6;
i64_store(&i->m0,(U64)si0,sj1);
goto L1;
L2:;
si0=l0;
si1=l3;
sj1=i64_load(&i->m0,(U64)si1+48U);
i64_store(&i->m0,(U64)si0+24U,sj1);
si0=l3;
si1=8U;
si0+=si1;
si1=8U;
si0+=si1;
si1=l3;
si2=24U;
si1+=si2;
si2=12U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
l1=si1;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=32U;
si0+=si1;
si1=l3;
si2=24U;
si1+=si2;
si2=32U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=40U;
si0+=si1;
si1=l3;
si2=24U;
si1+=si2;
si2=40U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=l3;
sj1=i64_load(&i->m0,(U64)si1+28U);
l5=sj1;
i64_store(&i->m0,(U64)si0+8U,sj1);
si0=l3;
sj0=i64_load(&i->m0,(U64)si0+40U);
l6=sj0;
si0=l0;
si1=12U;
si0+=si1;
si1=l1;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
sj1=l5;
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l0;
sj1=l6;
i64_store(&i->m0,(U64)si0+16U,sj1);
L1:;
si0=l0;
si1=l2;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=160U;
si0+=si1;
i->g0=si0;
L0:;
}

void f3190(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 l3=0;
U32 l4=0;
U64 l5=0;
U64 l6=0;
U32 si0,si1,si2,si3,si4,si5;
U64 sj0,sj1;
si0=i->g0;
si1=160U;
si0-=si1;
l2=si0;
i->g0=si0;
si0=l2;
si1=0U;
i32_store(&i->m0,(U64)si0+76U,si1);
si0=l2;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+28U);
l3=si1;
i32_store(&i->m0,(U64)si0+112U,si1);
si0=l2;
si1=l3;
i32_store(&i->m0,(U64)si0+72U,si1);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+24U);
l4=si0;
si0=l2;
si1=l3;
i32_store(&i->m0,(U64)si0+136U,si1);
si0=l2;
si1=0U;
i32_store(&i->m0,(U64)si0+128U,si1);
si0=l2;
sj1=4ULL;
i64_store(&i->m0,(U64)si0+120U,sj1);
si0=l2;
si1=l3;
i32_store(&i->m0,(U64)si0+132U,si1);
si0=l2;
si1=l4;
i32_store(&i->m0,(U64)si0+152U,si1);
si0=l2;
si1=l4;
i32_store(&i->m0,(U64)si0+148U,si1);
si0=l2;
si1=l4;
i32_store(&i->m0,(U64)si0+144U,si1);
si0=l2;
si1=24U;
si0+=si1;
si1=l2;
si2=144U;
si1+=si2;
si2=l1;
si3=l2;
si4=72U;
si3+=si4;
si4=l2;
si5=120U;
si4+=si5;
f3027(i,si0,si1,si2,si3,si4);
si0=l2;
si0=i32_load(&i->m0,(U64)si0+24U);
l1=si0;
si1=5U;
si0=si0 != si1;
if(si0){
goto L2;
}
si0=l2;
si1=8U;
si0+=si1;
si1=8U;
si0+=si1;
si1=l2;
si2=24U;
si1+=si2;
si2=12U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
l3=si1;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=l2;
sj1=i64_load(&i->m0,(U64)si1+28U);
l5=sj1;
i64_store(&i->m0,(U64)si0+8U,sj1);
si0=l2;
si1=40U;
si0+=si1;
sj0=i64_load(&i->m0,(U64)si0);
l6=sj0;
si0=l2;
si1=24U;
si0+=si1;
si1=8U;
si0+=si1;
si1=l3;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
sj1=l5;
i64_store(&i->m0,(U64)si0+24U,sj1);
si0=l0;
si1=20U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=12U;
si0+=si1;
sj1=17179869184ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
sj1=4ULL;
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l0;
si1=28U;
si0+=si1;
sj1=l5;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=36U;
si0+=si1;
si1=l3;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=40U;
si0+=si1;
sj1=l6;
i64_store(&i->m0,(U64)si0,sj1);
goto L1;
L2:;
si0=l0;
si1=l2;
sj1=i64_load(&i->m0,(U64)si1+48U);
i64_store(&i->m0,(U64)si0+24U,sj1);
si0=l2;
si1=16U;
si0+=si1;
si1=l2;
si2=24U;
si1+=si2;
si2=12U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
l3=si1;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=32U;
si0+=si1;
si1=l2;
si2=24U;
si1+=si2;
si2=32U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=40U;
si0+=si1;
si1=l2;
si2=24U;
si1+=si2;
si2=40U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=l2;
sj1=i64_load(&i->m0,(U64)si1+28U);
l5=sj1;
i64_store(&i->m0,(U64)si0+8U,sj1);
si0=l2;
sj0=i64_load(&i->m0,(U64)si0+40U);
l6=sj0;
si0=l0;
si1=12U;
si0+=si1;
si1=l3;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
sj1=l5;
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l0;
sj1=l6;
i64_store(&i->m0,(U64)si0+16U,sj1);
L1:;
si0=l0;
si1=l1;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=160U;
si0+=si1;
i->g0=si0;
L0:;
}

void f3191(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U64 l5=0;
U64 l6=0;
U32 si0,si1,si2,si3,si4,si5;
U64 sj0,sj1;
si0=i->g0;
si1=160U;
si0-=si1;
l4=si0;
i->g0=si0;
si0=l4;
si1=72U;
si0+=si1;
si1=12U;
si0+=si1;
si1=l2;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=72U;
si0+=si1;
si1=20U;
si0+=si1;
si1=l2;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=72U;
si0+=si1;
si1=28U;
si0+=si1;
si1=l2;
si2=24U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=72U;
si0+=si1;
si1=36U;
si0+=si1;
si1=l2;
si2=32U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=l2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+76U,sj1);
si0=l4;
si1=l2;
si1=i32_load(&i->m0,(U64)si1+40U);
i32_store(&i->m0,(U64)si0+112U,si1);
si0=l4;
si1=l2;
si1=i32_load(&i->m0,(U64)si1+36U);
i32_store(&i->m0,(U64)si0+72U,si1);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+24U);
l2=si0;
si0=l4;
si1=120U;
si0+=si1;
si1=8U;
si0+=si1;
si1=l3;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=l3;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+120U,sj1);
si0=l4;
si1=l3;
sj1=i64_load(&i->m0,(U64)si1+12U);
i64_store(&i->m0,(U64)si0+132U,sj1);
si0=l4;
si1=l2;
i32_store(&i->m0,(U64)si0+152U,si1);
si0=l4;
si1=l2;
i32_store(&i->m0,(U64)si0+148U,si1);
si0=l4;
si1=l2;
i32_store(&i->m0,(U64)si0+144U,si1);
si0=l4;
si1=24U;
si0+=si1;
si1=l4;
si2=144U;
si1+=si2;
si2=l1;
si3=l4;
si4=72U;
si3+=si4;
si4=l4;
si5=120U;
si4+=si5;
f3027(i,si0,si1,si2,si3,si4);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+24U);
l2=si0;
si1=5U;
si0=si0 != si1;
if(si0){
goto L2;
}
si0=l4;
si1=8U;
si0+=si1;
si1=8U;
si0+=si1;
si1=l4;
si2=24U;
si1+=si2;
si2=12U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
l3=si1;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1+28U);
l5=sj1;
i64_store(&i->m0,(U64)si0+8U,sj1);
si0=l4;
si1=24U;
si0+=si1;
si1=16U;
si0+=si1;
sj0=i64_load(&i->m0,(U64)si0);
l6=sj0;
si0=l4;
si1=24U;
si0+=si1;
si1=8U;
si0+=si1;
si1=l3;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
sj1=l5;
i64_store(&i->m0,(U64)si0+24U,sj1);
si0=l0;
si1=20U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=12U;
si0+=si1;
sj1=17179869184ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
sj1=4ULL;
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l0;
si1=28U;
si0+=si1;
sj1=l5;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=36U;
si0+=si1;
si1=l3;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=40U;
si0+=si1;
sj1=l6;
i64_store(&i->m0,(U64)si0,sj1);
goto L1;
L2:;
si0=l0;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1+48U);
i64_store(&i->m0,(U64)si0+24U,sj1);
si0=l4;
si1=8U;
si0+=si1;
si1=8U;
si0+=si1;
si1=l4;
si2=24U;
si1+=si2;
si2=12U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
l3=si1;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=32U;
si0+=si1;
si1=l4;
si2=24U;
si1+=si2;
si2=32U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=40U;
si0+=si1;
si1=l4;
si2=24U;
si1+=si2;
si2=40U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1+28U);
l5=sj1;
i64_store(&i->m0,(U64)si0+8U,sj1);
si0=l4;
sj0=i64_load(&i->m0,(U64)si0+40U);
l6=sj0;
si0=l0;
si1=12U;
si0+=si1;
si1=l3;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
sj1=l5;
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l0;
sj1=l6;
i64_store(&i->m0,(U64)si0+16U,sj1);
L1:;
si0=l0;
si1=l2;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=160U;
si0+=si1;
i->g0=si0;
L0:;
}

void f3192(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U32 l4=0;
U32 l5=0;
U64 l6=0;
U64 l7=0;
U32 si0,si1,si2,si3,si4,si5;
U64 sj0,sj1;
si0=i->g0;
si1=160U;
si0-=si1;
l3=si0;
i->g0=si0;
si0=l3;
si1=0U;
i32_store(&i->m0,(U64)si0+76U,si1);
si0=l3;
si1=l2;
si1=i32_load(&i->m0,(U64)si1+12U);
l4=si1;
i32_store(&i->m0,(U64)si0+112U,si1);
si0=l3;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+28U);
i32_store(&i->m0,(U64)si0+72U,si1);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+24U);
l5=si0;
si0=l3;
si1=120U;
si0+=si1;
si1=8U;
si0+=si1;
si1=l2;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=l4;
i32_store(&i->m0,(U64)si0+132U,si1);
si0=l3;
si1=l2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+120U,sj1);
si0=l3;
si1=l2;
si1=i32_load(&i->m0,(U64)si1+16U);
i32_store(&i->m0,(U64)si0+136U,si1);
si0=l3;
si1=l5;
i32_store(&i->m0,(U64)si0+152U,si1);
si0=l3;
si1=l5;
i32_store(&i->m0,(U64)si0+148U,si1);
si0=l3;
si1=l5;
i32_store(&i->m0,(U64)si0+144U,si1);
si0=l3;
si1=24U;
si0+=si1;
si1=l3;
si2=144U;
si1+=si2;
si2=l1;
si3=l3;
si4=72U;
si3+=si4;
si4=l3;
si5=120U;
si4+=si5;
f3027(i,si0,si1,si2,si3,si4);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+24U);
l2=si0;
si1=5U;
si0=si0 != si1;
if(si0){
goto L2;
}
si0=l3;
si1=8U;
si0+=si1;
si1=8U;
si0+=si1;
si1=l3;
si2=24U;
si1+=si2;
si2=12U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
l1=si1;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=l3;
sj1=i64_load(&i->m0,(U64)si1+28U);
l6=sj1;
i64_store(&i->m0,(U64)si0+8U,sj1);
si0=l3;
si1=40U;
si0+=si1;
sj0=i64_load(&i->m0,(U64)si0);
l7=sj0;
si0=l3;
si1=24U;
si0+=si1;
si1=8U;
si0+=si1;
si1=l1;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
sj1=l6;
i64_store(&i->m0,(U64)si0+24U,sj1);
si0=l0;
si1=20U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=12U;
si0+=si1;
sj1=17179869184ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
sj1=4ULL;
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l0;
si1=28U;
si0+=si1;
sj1=l6;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=36U;
si0+=si1;
si1=l1;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=40U;
si0+=si1;
sj1=l7;
i64_store(&i->m0,(U64)si0,sj1);
goto L1;
L2:;
si0=l0;
si1=l3;
sj1=i64_load(&i->m0,(U64)si1+48U);
i64_store(&i->m0,(U64)si0+24U,sj1);
si0=l3;
si1=8U;
si0+=si1;
si1=8U;
si0+=si1;
si1=l3;
si2=24U;
si1+=si2;
si2=12U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
l1=si1;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=32U;
si0+=si1;
si1=l3;
si2=24U;
si1+=si2;
si2=32U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=40U;
si0+=si1;
si1=l3;
si2=24U;
si1+=si2;
si2=40U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=l3;
sj1=i64_load(&i->m0,(U64)si1+28U);
l6=sj1;
i64_store(&i->m0,(U64)si0+8U,sj1);
si0=l3;
sj0=i64_load(&i->m0,(U64)si0+40U);
l7=sj0;
si0=l0;
si1=12U;
si0+=si1;
si1=l1;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
sj1=l6;
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l0;
sj1=l7;
i64_store(&i->m0,(U64)si0+16U,sj1);
L1:;
si0=l0;
si1=l2;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=160U;
si0+=si1;
i->g0=si0;
L0:;
}

void f3193(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
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
U32 si0,si1,si2,si3;
U64 sj0,sj1;
si0=i->g0;
si1=96U;
si0-=si1;
l4=si0;
i->g0=si0;
si0=l4;
si1=48U;
si0+=si1;
si1=l2;
si2=44U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=40U;
si0+=si1;
si1=l2;
si2=36U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=32U;
si0+=si1;
si1=l2;
si2=28U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=8U;
si0+=si1;
si1=16U;
si0+=si1;
si1=l2;
si2=20U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=16U;
si0+=si1;
si1=l2;
si2=12U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=l2;
sj1=i64_load(&i->m0,(U64)si1+4U);
l5=sj1;
i64_store(&i->m0,(U64)si0+8U,sj1);
sj0=l5;
si0=(U32)(sj0);
si0=!(si0);
if(si0){
goto L3;
}
si0=l4;
si1=72U;
si0+=si1;
si1=l4;
si2=8U;
si1+=si2;
f3474(i,si0,si1);
si0=l4;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1+77U);
i64_store(&i->m0,(U64)si0+56U,sj1);
si0=l4;
si1=l4;
si2=72U;
si1+=si2;
si2=12U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+63U,sj1);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+72U);
l2=si0;
si1=-2U;
si0&=si1;
si1=16U;
si0=si0 != si1;
if(si0){
goto L4;
}
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
si0=l4;
si0=i32_load(&i->m0,(U64)si0+16U);
l7=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+20U);
l8=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+24U);
l9=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+28U);
l10=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+32U);
l11=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+36U);
l12=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+40U);
l13=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+44U);
l14=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+48U);
l15=si0;
goto L2;
L4:;
si0=l4;
si0=i32_load8_u(&i->m0,(U64)si0+76U);
l6=si0;
si0=l0;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1+56U);
i64_store(&i->m0,(U64)si0+9U,sj1);
si0=l0;
si1=16U;
si0+=si1;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1+63U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=l6;
i32_store8(&i->m0,(U64)si0+8U,si1);
si0=l0;
si1=l2;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=4U;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si1=-2U;
si0+=si1;
l0=si0;
si1=1U;
si2=l0;
si3=96U;
si2=si2 < si3;
si0=si2?si0:si1;
switch(si0){
case 0:
goto L9;
case 1:
goto L8;
case 2:
goto L5;
case 3:
goto L5;
case 4:
goto L7;
default:
goto L5;
}
L9:;
si0=l3;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L5;
}
goto L6;
L8:;
si0=l2;
si0=!(si0);
if(si0){
goto L5;
}
si0=l3;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L6;
}
goto L5;
L7:;
si0=l3;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L5;
}
L6:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+4U);
f15271(i,si0);
L5:;
si0=l4;
si1=8U;
si0+=si1;
f3009(i,si0);
goto L1;
L3:;
si0=0U;
l6=si0;
si0=4U;
l2=si0;
si0=0U;
l7=si0;
si0=4U;
l8=si0;
si0=0U;
l9=si0;
si0=0U;
l10=si0;
si0=4U;
l11=si0;
si0=0U;
l15=si0;
si0=0U;
l14=si0;
si0=0U;
l12=si0;
si0=0U;
l13=si0;
L2:;
si0=l0;
si1=l2;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=5U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=44U;
si0+=si1;
si1=l15;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=40U;
si0+=si1;
si1=l14;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=36U;
si0+=si1;
si1=l13;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=32U;
si0+=si1;
si1=l12;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=28U;
si0+=si1;
si1=l11;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=24U;
si0+=si1;
si1=l10;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=20U;
si0+=si1;
si1=l9;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=16U;
si0+=si1;
si1=l8;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=12U;
si0+=si1;
si1=l7;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=8U;
si0+=si1;
si1=l6;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si1=-2U;
si0+=si1;
l0=si0;
si1=1U;
si2=l0;
si3=96U;
si2=si2 < si3;
si0=si2?si0:si1;
switch(si0){
case 0:
goto L13;
case 1:
goto L12;
case 2:
goto L1;
case 3:
goto L1;
case 4:
goto L11;
default:
goto L1;
}
L13:;
si0=l3;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L1;
}
goto L10;
L12:;
si0=l2;
si0=!(si0);
if(si0){
goto L1;
}
si0=l3;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L10;
}
goto L1;
L11:;
si0=l3;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L1;
}
L10:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+4U);
f15271(i,si0);
L1:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si1=-2U;
si0+=si1;
l0=si0;
si1=1U;
si2=l0;
si3=96U;
si2=si2 < si3;
si0=si2?si0:si1;
switch(si0){
case 0:
goto L18;
case 1:
goto L17;
case 2:
goto L14;
case 3:
goto L14;
case 4:
goto L16;
default:
goto L14;
}
L18:;
si0=l1;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L14;
}
goto L15;
L17:;
si0=l2;
si0=!(si0);
if(si0){
goto L14;
}
si0=l1;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L15;
}
goto L14;
L16:;
si0=l1;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L14;
}
L15:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
f15271(i,si0);
L14:;
si0=l4;
si1=96U;
si0+=si1;
i->g0=si0;
L0:;
}

void f3194(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 si0,si1,si2,si3;
U64 sj1;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+56U);
l3=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+28U);
l4=si0;
si0=56U;
si0=f15269(i,si0);
l5=si0;
si0=!(si0);
if(si0){
goto L3;
}
si0=l5;
si1=l1;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=48U;
si0+=si1;
si1=l1;
si2=48U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=40U;
si0+=si1;
si1=l1;
si2=40U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=32U;
si0+=si1;
si1=l1;
si2=32U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=24U;
si0+=si1;
si1=l1;
si2=24U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=16U;
si0+=si1;
si1=l1;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=8U;
si0+=si1;
si1=l1;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=l4;
si0=si0 > si1;
if(si0){
goto L2;
}
si0=l0;
si1=l5;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=2U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=20U;
si0+=si1;
si1=l4;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=16U;
si0+=si1;
si1=l3;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=8U;
si0+=si1;
sj1=4294967297ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si1=-2U;
si0+=si1;
l1=si0;
si1=1U;
si2=l1;
si3=96U;
si2=si2 < si3;
si0=si2?si0:si1;
switch(si0){
case 0:
goto L7;
case 1:
goto L6;
case 2:
goto L4;
case 3:
goto L4;
case 4:
goto L5;
default:
goto L4;
}
L7:;
si0=l2;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L4;
}
goto L1;
L6:;
si0=l5;
si0=!(si0);
if(si0){
goto L4;
}
si0=l2;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L1;
}
goto L4;
L5:;
si0=l2;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L1;
}
L4:;
goto L0;
L3:;
si0=8U;
si1=56U;
f52(i,si0,si1);
UNREACHABLE;
L2:;
si0=1531300U;
si1=38U;
si2=1531440U;
f673(i,si0,si1,si2);
UNREACHABLE;
L1:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+4U);
f15271(i,si0);
L0:;
}

void f3195(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 si0,si1,si2,si3;
U64 sj1;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+48U);
l4=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+52U);
l5=si0;
si0=48U;
si0=f15269(i,si0);
l6=si0;
si0=!(si0);
if(si0){
goto L4;
}
si0=l6;
si1=l1;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l6;
si1=40U;
si0+=si1;
si1=l1;
si2=40U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l6;
si1=32U;
si0+=si1;
si1=l1;
si2=32U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l6;
si1=24U;
si0+=si1;
si1=l1;
si2=24U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l6;
si1=16U;
si0+=si1;
si1=l1;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l6;
si1=8U;
si0+=si1;
si1=l1;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=48U;
si0=f15269(i,si0);
l1=si0;
si0=!(si0);
if(si0){
goto L3;
}
si0=l1;
si1=l3;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si1=40U;
si0+=si1;
si1=l3;
si2=40U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si1=32U;
si0+=si1;
si1=l3;
si2=32U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si1=24U;
si0+=si1;
si1=l3;
si2=24U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si1=16U;
si0+=si1;
si1=l3;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si1=8U;
si0+=si1;
si1=l3;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=l5;
si0=si0 > si1;
if(si0){
goto L2;
}
si0=l0;
si1=l6;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=13U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=20U;
si0+=si1;
si1=6U;
i32_store8(&i->m0,(U64)si0,si1);
si0=l0;
si1=16U;
si0+=si1;
si1=l5;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=12U;
si0+=si1;
si1=l4;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=8U;
si0+=si1;
si1=l1;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si1=-2U;
si0+=si1;
l1=si0;
si1=1U;
si2=l1;
si3=96U;
si2=si2 < si3;
si0=si2?si0:si1;
switch(si0){
case 0:
goto L8;
case 1:
goto L7;
case 2:
goto L5;
case 3:
goto L5;
case 4:
goto L6;
default:
goto L5;
}
L8:;
si0=l2;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L5;
}
goto L1;
L7:;
si0=l6;
si0=!(si0);
if(si0){
goto L5;
}
si0=l2;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L1;
}
goto L5;
L6:;
si0=l2;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L1;
}
L5:;
goto L0;
L4:;
si0=8U;
si1=48U;
f52(i,si0,si1);
UNREACHABLE;
L3:;
si0=8U;
si1=48U;
f52(i,si0,si1);
UNREACHABLE;
L2:;
si0=1531300U;
si1=38U;
si2=1531440U;
f673(i,si0,si1,si2);
UNREACHABLE;
L1:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+4U);
f15271(i,si0);
L0:;
}

void f3196(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U32 l4=0;
U32 si0,si1,si2,si3;
U64 sj1;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+24U);
l3=si0;
si1=l2;
si1=i32_load(&i->m0,(U64)si1+28U);
l4=si1;
si0=si0 > si1;
if(si0){
goto L3;
}
si0=l0;
sj1=34359738370ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=20U;
si0+=si1;
si1=l4;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=16U;
si0+=si1;
si1=l3;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=8U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si1=-2U;
si0+=si1;
l0=si0;
si1=1U;
si2=l0;
si3=96U;
si2=si2 < si3;
si0=si2?si0:si1;
switch(si0){
case 0:
goto L6;
case 1:
goto L5;
case 2:
goto L1;
case 3:
goto L1;
case 4:
goto L4;
default:
goto L1;
}
L6:;
si0=l2;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L1;
}
goto L2;
L5:;
si0=l3;
si0=!(si0);
if(si0){
goto L1;
}
si0=l2;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L2;
}
goto L1;
L4:;
si0=l2;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L2;
}
goto L1;
L3:;
si0=1531300U;
si1=38U;
si2=1531440U;
f673(i,si0,si1,si2);
UNREACHABLE;
L2:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+4U);
f15271(i,si0);
L1:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si1=-2U;
si0+=si1;
l0=si0;
si1=1U;
si2=l0;
si3=96U;
si2=si2 < si3;
si0=si2?si0:si1;
switch(si0){
case 0:
goto L11;
case 1:
goto L10;
case 2:
goto L8;
case 3:
goto L8;
case 4:
goto L9;
default:
goto L8;
}
L11:;
si0=l1;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L8;
}
goto L7;
L10:;
si0=l2;
si0=!(si0);
if(si0){
goto L8;
}
si0=l1;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L7;
}
goto L8;
L9:;
si0=l1;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L7;
}
L8:;
goto L0;
L7:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
f15271(i,si0);
L0:;
}

void f3197(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4) {
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 si0,si1,si2,si3;
U64 sj1;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+24U);
l5=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+28U);
l6=si0;
si0=56U;
si0=f15269(i,si0);
l7=si0;
si0=!(si0);
if(si0){
goto L4;
}
si0=l7;
si1=l2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l7;
si1=48U;
si0+=si1;
si1=l2;
si2=48U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l7;
si1=40U;
si0+=si1;
si1=l2;
si2=40U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l7;
si1=32U;
si0+=si1;
si1=l2;
si2=32U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l7;
si1=24U;
si0+=si1;
si1=l2;
si2=24U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l7;
si1=16U;
si0+=si1;
si1=l2;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l7;
si1=8U;
si0+=si1;
si1=l2;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=l6;
si0=si0 > si1;
if(si0){
goto L3;
}
si0=l0;
si1=l7;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=2U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=20U;
si0+=si1;
si1=l6;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=16U;
si0+=si1;
si1=l5;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=8U;
si0+=si1;
sj1=4294967297ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si1=-2U;
si0+=si1;
l7=si0;
si1=1U;
si2=l7;
si3=96U;
si2=si2 < si3;
si0=si2?si0:si1;
switch(si0){
case 0:
goto L7;
case 1:
goto L6;
case 2:
goto L1;
case 3:
goto L1;
case 4:
goto L5;
default:
goto L1;
}
L7:;
si0=l4;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L1;
}
goto L2;
L6:;
si0=l2;
si0=!(si0);
if(si0){
goto L1;
}
si0=l4;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L2;
}
goto L1;
L5:;
si0=l4;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L2;
}
goto L1;
L4:;
si0=8U;
si1=56U;
f52(i,si0,si1);
UNREACHABLE;
L3:;
si0=1531300U;
si1=38U;
si2=1531440U;
f673(i,si0,si1,si2);
UNREACHABLE;
L2:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+4U);
f15271(i,si0);
L1:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si1=-2U;
si0+=si1;
l7=si0;
si1=1U;
si2=l7;
si3=96U;
si2=si2 < si3;
si0=si2?si0:si1;
switch(si0){
case 0:
goto L12;
case 1:
goto L11;
case 2:
goto L8;
case 3:
goto L8;
case 4:
goto L10;
default:
goto L8;
}
L12:;
si0=l3;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L8;
}
goto L9;
L11:;
si0=l2;
si0=!(si0);
if(si0){
goto L8;
}
si0=l3;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L9;
}
goto L8;
L10:;
si0=l3;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L8;
}
L9:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+4U);
f15271(i,si0);
L8:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si1=-2U;
si0+=si1;
l7=si0;
si1=1U;
si2=l7;
si3=96U;
si2=si2 < si3;
si0=si2?si0:si1;
switch(si0){
case 0:
goto L17;
case 1:
goto L16;
case 2:
goto L14;
case 3:
goto L14;
case 4:
goto L15;
default:
goto L14;
}
L17:;
si0=l1;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L14;
}
goto L13;
L16:;
si0=l2;
si0=!(si0);
if(si0){
goto L14;
}
si0=l1;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L13;
}
goto L14;
L15:;
si0=l1;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L13;
}
L14:;
goto L0;
L13:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
f15271(i,si0);
L0:;
}

void f3198(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4,U32 l5) {
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
l6=si0;
i->g0=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+8U);
l7=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+4U);
l8=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
l9=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+24U);
l10=si0;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+28U);
l11=si0;
si0=l6;
si1=8U;
si0+=si1;
si1=l2;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
l12=si1;
i32_store(&i->m0,(U64)si0,si1);
si0=l6;
si1=l2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l12;
si1=l6;
si1=i32_load(&i->m0,(U64)si1+4U);
si0=si0 != si1;
if(si0){
goto L1;
}
si0=l6;
si1=l12;
f3341(i,si0,si1);
si0=l6;
si0=i32_load(&i->m0,(U64)si0+8U);
l12=si0;
L1:;
si0=l6;
si0=i32_load(&i->m0,(U64)si0);
si1=l12;
si2=56U;
si1*=si2;
si0+=si1;
l4=si0;
si1=l3;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=8U;
si0+=si1;
si1=l3;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=16U;
si0+=si1;
si1=l3;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
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
si1=l3;
si2=32U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=40U;
si0+=si1;
si1=l3;
si2=40U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=48U;
si0+=si1;
si1=l3;
si2=48U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l6;
si1=l12;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l10;
si1=l11;
si0=si0 > si1;
if(si0){
goto L4;
}
si0=l0;
si1=l6;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l0;
si1=2U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=20U;
si0+=si1;
si1=l11;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=16U;
si0+=si1;
si1=l10;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=12U;
si0+=si1;
si1=l6;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
si1=-2U;
si0+=si1;
l3=si0;
si1=1U;
si2=l3;
si3=96U;
si2=si2 < si3;
si0=si2?si0:si1;
switch(si0){
case 0:
goto L7;
case 1:
goto L6;
case 2:
goto L2;
case 3:
goto L2;
case 4:
goto L5;
default:
goto L2;
}
L7:;
si0=l5;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L2;
}
goto L3;
L6:;
si0=l4;
si0=!(si0);
if(si0){
goto L2;
}
si0=l5;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L3;
}
goto L2;
L5:;
si0=l5;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L3;
}
goto L2;
L4:;
si0=1531300U;
si1=38U;
si2=1531440U;
f673(i,si0,si1,si2);
UNREACHABLE;
L3:;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+4U);
f15271(i,si0);
L2:;
si0=l9;
si1=98U;
si0=si0 == si1;
if(si0){
goto L8;
}
si0=l9;
si1=-2U;
si0+=si1;
l3=si0;
si1=1U;
si2=l3;
si3=96U;
si2=si2 < si3;
si0=si2?si0:si1;
switch(si0){
case 0:
goto L10;
case 1:
goto L12;
case 2:
goto L8;
case 3:
goto L8;
case 4:
goto L11;
default:
goto L8;
}
L12:;
si0=l9;
si0=!(si0);
if(si0){
goto L8;
}
L11:;
si0=l7;
si0=!(si0);
if(si0){
goto L8;
}
goto L9;
L10:;
si0=l7;
si0=!(si0);
if(si0){
goto L8;
}
L9:;
si0=l8;
f15271(i,si0);
L8:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
si1=-2U;
si0+=si1;
l3=si0;
si1=1U;
si2=l3;
si3=96U;
si2=si2 < si3;
si0=si2?si0:si1;
switch(si0){
case 0:
goto L17;
case 1:
goto L16;
case 2:
goto L13;
case 3:
goto L13;
case 4:
goto L15;
default:
goto L13;
}
L17:;
si0=l1;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L13;
}
goto L14;
L16:;
si0=l4;
si0=!(si0);
if(si0){
goto L13;
}
si0=l1;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L14;
}
goto L13;
L15:;
si0=l1;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L13;
}
L14:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
f15271(i,si0);
L13:;
si0=l6;
si1=16U;
si0+=si1;
i->g0=si0;
L0:;
}

void f3199(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4) {
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 l8=0;
U32 si0,si1,si2,si3;
U64 sj1;
si0=i->g0;
si1=16U;
si0-=si1;
l5=si0;
i->g0=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+24U);
l6=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+28U);
l7=si0;
si0=l5;
si1=8U;
si0+=si1;
si1=l2;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
l8=si1;
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=l2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l8;
si1=l5;
si1=i32_load(&i->m0,(U64)si1+4U);
si0=si0 != si1;
if(si0){
goto L1;
}
si0=l5;
si1=l8;
f3341(i,si0,si1);
si0=l5;
si0=i32_load(&i->m0,(U64)si0+8U);
l8=si0;
L1:;
si0=l5;
si0=i32_load(&i->m0,(U64)si0);
si1=l8;
si2=56U;
si1*=si2;
si0+=si1;
l2=si0;
si1=l3;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=8U;
si0+=si1;
si1=l3;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=16U;
si0+=si1;
si1=l3;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=24U;
si0+=si1;
si1=l3;
si2=24U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=32U;
si0+=si1;
si1=l3;
si2=32U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=40U;
si0+=si1;
si1=l3;
si2=40U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=48U;
si0+=si1;
si1=l3;
si2=48U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=l8;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l6;
si1=l7;
si0=si0 > si1;
if(si0){
goto L4;
}
si0=l0;
si1=l5;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l0;
si1=2U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=20U;
si0+=si1;
si1=l7;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=16U;
si0+=si1;
si1=l6;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=12U;
si0+=si1;
si1=l5;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si1=-2U;
si0+=si1;
l3=si0;
si1=1U;
si2=l3;
si3=96U;
si2=si2 < si3;
si0=si2?si0:si1;
switch(si0){
case 0:
goto L7;
case 1:
goto L6;
case 2:
goto L2;
case 3:
goto L2;
case 4:
goto L5;
default:
goto L2;
}
L7:;
si0=l4;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L2;
}
goto L3;
L6:;
si0=l2;
si0=!(si0);
if(si0){
goto L2;
}
si0=l4;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L3;
}
goto L2;
L5:;
si0=l4;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L3;
}
goto L2;
L4:;
si0=1531300U;
si1=38U;
si2=1531440U;
f673(i,si0,si1,si2);
UNREACHABLE;
L3:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+4U);
f15271(i,si0);
L2:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si1=-2U;
si0+=si1;
l3=si0;
si1=1U;
si2=l3;
si3=96U;
si2=si2 < si3;
si0=si2?si0:si1;
switch(si0){
case 0:
goto L12;
case 1:
goto L11;
case 2:
goto L8;
case 3:
goto L8;
case 4:
goto L10;
default:
goto L8;
}
L12:;
si0=l1;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L8;
}
goto L9;
L11:;
si0=l2;
si0=!(si0);
if(si0){
goto L8;
}
si0=l1;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L9;
}
goto L8;
L10:;
si0=l1;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L8;
}
L9:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
f15271(i,si0);
L8:;
si0=l5;
si1=16U;
si0+=si1;
i->g0=si0;
L0:;
}

void f3200(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 si0,si1,si2,si3;
U64 sj1;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+24U);
l3=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+52U);
l4=si0;
si0=48U;
si0=f15269(i,si0);
l5=si0;
si0=!(si0);
if(si0){
goto L3;
}
si0=l5;
si1=l2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=40U;
si0+=si1;
si1=l2;
si2=40U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=32U;
si0+=si1;
si1=l2;
si2=32U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=24U;
si0+=si1;
si1=l2;
si2=24U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=16U;
si0+=si1;
si1=l2;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=8U;
si0+=si1;
si1=l2;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=l4;
si0=si0 > si1;
if(si0){
goto L2;
}
si0=l0;
si1=l5;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=33U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=16U;
si0+=si1;
si1=0U;
i32_store8(&i->m0,(U64)si0,si1);
si0=l0;
si1=12U;
si0+=si1;
si1=l4;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=8U;
si0+=si1;
si1=l3;
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si1=-2U;
si0+=si1;
l2=si0;
si1=1U;
si2=l2;
si3=96U;
si2=si2 < si3;
si0=si2?si0:si1;
switch(si0){
case 0:
goto L7;
case 1:
goto L6;
case 2:
goto L4;
case 3:
goto L4;
case 4:
goto L5;
default:
goto L4;
}
L7:;
si0=l1;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L4;
}
goto L1;
L6:;
si0=l5;
si0=!(si0);
if(si0){
goto L4;
}
si0=l1;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L1;
}
goto L4;
L5:;
si0=l1;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L1;
}
L4:;
goto L0;
L3:;
si0=8U;
si1=48U;
f52(i,si0,si1);
UNREACHABLE;
L2:;
si0=1531300U;
si1=38U;
si2=1531440U;
f673(i,si0,si1,si2);
UNREACHABLE;
L1:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
f15271(i,si0);
L0:;
}

void f3201(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4) {
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 l8=0;
U32 l9=0;
U32 l10=0;
U32 l11=0;
U32 si0,si1,si2,si3;
U64 sj1;
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+48U);
l7=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+52U);
l8=si0;
si0=0U;
l9=si0;
si0=0U;
l10=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l11=si0;
si1=38U;
si0=si0 == si1;
if(si0){
goto L6;
}
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=48U;
si0=f15269(i,si0);
l10=si0;
si0=!(si0);
if(si0){
goto L5;
}
si0=l10;
si1=l11;
i32_store(&i->m0,(U64)si0,si1);
si0=l10;
si1=l1;
si2=4U;
si1+=si2;
l1=si1;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l10;
si1=12U;
si0+=si1;
si1=l1;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l10;
si1=20U;
si0+=si1;
si1=l1;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l10;
si1=28U;
si0+=si1;
si1=l1;
si2=24U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l10;
si1=36U;
si0+=si1;
si1=l1;
si2=32U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l10;
si1=44U;
si0+=si1;
si1=l1;
si2=40U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
L6:;
si0=l6;
si1=38U;
si0=si0 == si1;
if(si0){
goto L7;
}
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=48U;
si0=f15269(i,si0);
l9=si0;
si0=!(si0);
if(si0){
goto L4;
}
si0=l9;
si1=l6;
i32_store(&i->m0,(U64)si0,si1);
si0=l9;
si1=l3;
si2=4U;
si1+=si2;
l1=si1;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l9;
si1=12U;
si0+=si1;
si1=l1;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l9;
si1=20U;
si0+=si1;
si1=l1;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l9;
si1=28U;
si0+=si1;
si1=l1;
si2=24U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l9;
si1=36U;
si0+=si1;
si1=l1;
si2=32U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l9;
si1=44U;
si0+=si1;
si1=l1;
si2=40U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
L7:;
si0=0U;
l1=si0;
si0=l5;
si1=-2U;
si0&=si1;
si1=38U;
si0=si0 == si1;
if(si0){
goto L8;
}
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=48U;
si0=f15269(i,si0);
l1=si0;
si0=!(si0);
if(si0){
goto L3;
}
si0=l1;
si1=l5;
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
si1=l4;
si2=4U;
si1+=si2;
l4=si1;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l1;
si1=12U;
si0+=si1;
si1=l4;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si1=20U;
si0+=si1;
si1=l4;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si1=28U;
si0+=si1;
si1=l4;
si2=24U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si1=36U;
si0+=si1;
si1=l4;
si2=32U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si1=44U;
si0+=si1;
si1=l4;
si2=40U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
L8:;
si0=l7;
si1=l8;
si0=si0 > si1;
if(si0){
goto L2;
}
si0=l0;
si1=l7;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=37U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=20U;
si0+=si1;
si1=l1;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=16U;
si0+=si1;
si1=l9;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=12U;
si0+=si1;
si1=l10;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=8U;
si0+=si1;
si1=l8;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si0=i32_load(&i->m0,(U64)si0);
l10=si0;
si1=-2U;
si0+=si1;
l0=si0;
si1=1U;
si2=l0;
si3=96U;
si2=si2 < si3;
si0=si2?si0:si1;
switch(si0){
case 0:
goto L12;
case 1:
goto L11;
case 2:
goto L9;
case 3:
goto L9;
case 4:
goto L10;
default:
goto L9;
}
L12:;
si0=l2;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L9;
}
goto L1;
L11:;
si0=l10;
si0=!(si0);
if(si0){
goto L9;
}
si0=l2;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L1;
}
goto L9;
L10:;
si0=l2;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L1;
}
L9:;
goto L0;
L5:;
si0=8U;
si1=48U;
f52(i,si0,si1);
UNREACHABLE;
L4:;
si0=8U;
si1=48U;
f52(i,si0,si1);
UNREACHABLE;
L3:;
si0=8U;
si1=48U;
f52(i,si0,si1);
UNREACHABLE;
L2:;
si0=1531300U;
si1=38U;
si2=1531440U;
f673(i,si0,si1,si2);
UNREACHABLE;
L1:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+4U);
f15271(i,si0);
L0:;
}

void f3202(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 si0,si1,si2,si3;
U64 sj1;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+48U);
l3=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+28U);
l4=si0;
si0=48U;
si0=f15269(i,si0);
l5=si0;
si0=!(si0);
if(si0){
goto L3;
}
si0=l5;
si1=l1;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=40U;
si0+=si1;
si1=l1;
si2=40U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=32U;
si0+=si1;
si1=l1;
si2=32U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=24U;
si0+=si1;
si1=l1;
si2=24U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=16U;
si0+=si1;
si1=l1;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=8U;
si0+=si1;
si1=l1;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=l4;
si0=si0 > si1;
if(si0){
goto L2;
}
si0=l0;
si1=l5;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=36U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=24U;
si0+=si1;
si1=0U;
i32_store8(&i->m0,(U64)si0,si1);
si0=l0;
si1=20U;
si0+=si1;
si1=l4;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=16U;
si0+=si1;
si1=l3;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=8U;
si0+=si1;
sj1=4294967297ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si1=-2U;
si0+=si1;
l1=si0;
si1=1U;
si2=l1;
si3=96U;
si2=si2 < si3;
si0=si2?si0:si1;
switch(si0){
case 0:
goto L7;
case 1:
goto L6;
case 2:
goto L4;
case 3:
goto L4;
case 4:
goto L5;
default:
goto L4;
}
L7:;
si0=l2;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L4;
}
goto L1;
L6:;
si0=l5;
si0=!(si0);
if(si0){
goto L4;
}
si0=l2;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L1;
}
goto L4;
L5:;
si0=l2;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L1;
}
L4:;
goto L0;
L3:;
si0=8U;
si1=48U;
f52(i,si0,si1);
UNREACHABLE;
L2:;
si0=1531300U;
si1=38U;
si2=1531440U;
f673(i,si0,si1,si2);
UNREACHABLE;
L1:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+4U);
f15271(i,si0);
L0:;
}

void f3203(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4,U32 l5) {
U32 l6=0;
U32 l7=0;
U32 l8=0;
U32 si0,si1,si2,si3;
U64 sj1;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+48U);
l6=si0;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+52U);
l7=si0;
si0=48U;
si0=f15269(i,si0);
l8=si0;
si0=!(si0);
if(si0){
goto L6;
}
si0=l8;
si1=l3;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l8;
si1=40U;
si0+=si1;
si1=l3;
si2=40U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l8;
si1=32U;
si0+=si1;
si1=l3;
si2=32U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l8;
si1=24U;
si0+=si1;
si1=l3;
si2=24U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l8;
si1=16U;
si0+=si1;
si1=l3;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l8;
si1=8U;
si0+=si1;
si1=l3;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=48U;
si0=f15269(i,si0);
l3=si0;
si0=!(si0);
if(si0){
goto L5;
}
si0=l3;
si1=l1;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=40U;
si0+=si1;
si1=l1;
si2=40U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=32U;
si0+=si1;
si1=l1;
si2=32U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=24U;
si0+=si1;
si1=l1;
si2=24U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=16U;
si0+=si1;
si1=l1;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=8U;
si0+=si1;
si1=l1;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=48U;
si0=f15269(i,si0);
l1=si0;
si0=!(si0);
if(si0){
goto L4;
}
si0=l1;
si1=l5;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si1=40U;
si0+=si1;
si1=l5;
si2=40U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si1=32U;
si0+=si1;
si1=l5;
si2=32U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si1=24U;
si0+=si1;
si1=l5;
si2=24U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si1=16U;
si0+=si1;
si1=l5;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si1=8U;
si0+=si1;
si1=l5;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l6;
si1=l7;
si0=si0 > si1;
if(si0){
goto L3;
}
si0=l0;
si1=l8;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=16U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=20U;
si0+=si1;
si1=l7;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=16U;
si0+=si1;
si1=l6;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=12U;
si0+=si1;
si1=l1;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=8U;
si0+=si1;
si1=l3;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si1=-2U;
si0+=si1;
l8=si0;
si1=1U;
si2=l8;
si3=96U;
si2=si2 < si3;
si0=si2?si0:si1;
switch(si0){
case 0:
goto L9;
case 1:
goto L8;
case 2:
goto L1;
case 3:
goto L1;
case 4:
goto L7;
default:
goto L1;
}
L9:;
si0=l4;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L1;
}
goto L2;
L8:;
si0=l1;
si0=!(si0);
if(si0){
goto L1;
}
si0=l4;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L2;
}
goto L1;
L7:;
si0=l4;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L2;
}
goto L1;
L6:;
si0=8U;
si1=48U;
f52(i,si0,si1);
UNREACHABLE;
L5:;
si0=8U;
si1=48U;
f52(i,si0,si1);
UNREACHABLE;
L4:;
si0=8U;
si1=48U;
f52(i,si0,si1);
UNREACHABLE;
L3:;
si0=1531300U;
si1=38U;
si2=1531440U;
f673(i,si0,si1,si2);
UNREACHABLE;
L2:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+4U);
f15271(i,si0);
L1:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si1=-2U;
si0+=si1;
l8=si0;
si1=1U;
si2=l8;
si3=96U;
si2=si2 < si3;
si0=si2?si0:si1;
switch(si0){
case 0:
goto L14;
case 1:
goto L13;
case 2:
goto L11;
case 3:
goto L11;
case 4:
goto L12;
default:
goto L11;
}
L14:;
si0=l2;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L11;
}
goto L10;
L13:;
si0=l1;
si0=!(si0);
if(si0){
goto L11;
}
si0=l2;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L10;
}
goto L11;
L12:;
si0=l2;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L10;
}
L11:;
goto L0;
L10:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+4U);
f15271(i,si0);
L0:;
}

void f3204(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4,U32 l5,U32 l6,U32 l7,U32 l8,U32 l9,U32 l10) {
U32 l11=0;
U32 l12=0;
U64 l13=0;
U32 si0,si1,si2,si3,si4,si5,si6,si7;
U64 sj0,sj6,sj8;
si0=l9;
si0=i32_load(&i->m0,(U64)si0);
l11=si0;
si1=-2U;
si0+=si1;
l12=si0;
si1=1U;
si2=l12;
si3=96U;
si2=si2 < si3;
si0=si2?si0:si1;
switch(si0){
case 0:
goto L5;
case 1:
goto L4;
case 2:
goto L1;
case 3:
goto L1;
case 4:
goto L3;
default:
goto L1;
}
L5:;
si0=l9;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L1;
}
goto L2;
L4:;
si0=l11;
si0=!(si0);
if(si0){
goto L1;
}
si0=l9;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L2;
}
goto L1;
L3:;
si0=l9;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L1;
}
L2:;
si0=l9;
si0=i32_load(&i->m0,(U64)si0+4U);
f15271(i,si0);
L1:;
si0=l8;
si0=i32_load(&i->m0,(U64)si0);
l12=si0;
si1=-2U;
si0+=si1;
l9=si0;
si1=1U;
si2=l9;
si3=96U;
si2=si2 < si3;
si0=si2?si0:si1;
switch(si0){
case 0:
goto L10;
case 1:
goto L9;
case 2:
goto L6;
case 3:
goto L6;
case 4:
goto L8;
default:
goto L6;
}
L10:;
si0=l8;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L6;
}
goto L7;
L9:;
si0=l12;
si0=!(si0);
if(si0){
goto L6;
}
si0=l8;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L7;
}
goto L6;
L8:;
si0=l8;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L6;
}
L7:;
si0=l8;
si0=i32_load(&i->m0,(U64)si0+4U);
f15271(i,si0);
L6:;
si0=l10;
sj0=i64_load(&i->m0,(U64)si0+4U);
l13=sj0;
si0=l10;
si0=i32_load(&i->m0,(U64)si0);
l9=si0;
si0=l6;
si0=i32_load(&i->m0,(U64)si0);
l10=si0;
si1=-2U;
si0+=si1;
l8=si0;
si1=1U;
si2=l8;
si3=96U;
si2=si2 < si3;
si0=si2?si0:si1;
switch(si0){
case 0:
goto L15;
case 1:
goto L14;
case 2:
goto L11;
case 3:
goto L11;
case 4:
goto L13;
default:
goto L11;
}
L15:;
si0=l6;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L11;
}
goto L12;
L14:;
si0=l10;
si0=!(si0);
if(si0){
goto L11;
}
si0=l6;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L12;
}
goto L11;
L13:;
si0=l6;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L11;
}
L12:;
si0=l6;
si0=i32_load(&i->m0,(U64)si0+4U);
f15271(i,si0);
L11:;
si0=l5;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si1=-2U;
si0+=si1;
l8=si0;
si1=1U;
si2=l8;
si3=96U;
si2=si2 < si3;
si0=si2?si0:si1;
switch(si0){
case 0:
goto L20;
case 1:
goto L19;
case 2:
goto L16;
case 3:
goto L16;
case 4:
goto L18;
default:
goto L16;
}
L20:;
si0=l5;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L16;
}
goto L17;
L19:;
si0=l6;
si0=!(si0);
if(si0){
goto L16;
}
si0=l5;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L17;
}
goto L16;
L18:;
si0=l5;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L16;
}
L17:;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+4U);
f15271(i,si0);
L16:;
si0=l0;
si1=l1;
si2=l2;
si3=l3;
si4=l4;
si5=l7;
si5=i32_load(&i->m0,(U64)si5);
si6=l7;
sj6=i64_load(&i->m0,(U64)si6+4U);
si7=l9;
sj8=l13;
f3045(i,si0,si1,si2,si3,si4,si5,sj6,si7,sj8);
L0:;
}

void f3205(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4,U32 l5,U32 l6,U32 l7) {
U32 l8=0;
U32 l9=0;
U64 l10=0;
U32 si0,si1,si2,si3,si4,si5,si6,si7;
U64 sj6,sj8;
si0=l6;
si0=i32_load(&i->m0,(U64)si0);
l8=si0;
si1=-2U;
si0+=si1;
l9=si0;
si1=1U;
si2=l9;
si3=96U;
si2=si2 < si3;
si0=si2?si0:si1;
switch(si0){
case 0:
goto L5;
case 1:
goto L4;
case 2:
goto L1;
case 3:
goto L1;
case 4:
goto L3;
default:
goto L1;
}
L5:;
si0=l6;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L1;
}
goto L2;
L4:;
si0=l8;
si0=!(si0);
if(si0){
goto L1;
}
si0=l6;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L2;
}
goto L1;
L3:;
si0=l6;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L1;
}
L2:;
si0=l6;
si0=i32_load(&i->m0,(U64)si0+4U);
f15271(i,si0);
L1:;
si0=l5;
si0=i32_load(&i->m0,(U64)si0);
l9=si0;
si1=-2U;
si0+=si1;
l6=si0;
si1=1U;
si2=l6;
si3=96U;
si2=si2 < si3;
si0=si2?si0:si1;
switch(si0){
case 0:
goto L10;
case 1:
goto L9;
case 2:
goto L6;
case 3:
goto L6;
case 4:
goto L8;
default:
goto L6;
}
L10:;
si0=l5;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L6;
}
goto L7;
L9:;
si0=l9;
si0=!(si0);
if(si0){
goto L6;
}
si0=l5;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L7;
}
goto L6;
L8:;
si0=l5;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L6;
}
L7:;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+4U);
f15271(i,si0);
L6:;
si0=l0;
si1=l1;
si2=l2;
si3=l3;
si4=l4;
si5=l7;
si5=i32_load(&i->m0,(U64)si5);
si6=l7;
sj6=i64_load(&i->m0,(U64)si6+4U);
si7=0U;
sj8=l10;
f3045(i,si0,si1,si2,si3,si4,si5,sj6,si7,sj8);
L0:;
}

void f3206(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4,U32 l5,U32 l6,U32 l7) {
U32 l8=0;
U32 l9=0;
U64 l10=0;
U32 si0,si1,si2,si3,si4,si5,si7,si8;
U64 sj6,sj8;
si0=l6;
si0=i32_load(&i->m0,(U64)si0);
l8=si0;
si1=-2U;
si0+=si1;
l9=si0;
si1=1U;
si2=l9;
si3=96U;
si2=si2 < si3;
si0=si2?si0:si1;
switch(si0){
case 0:
goto L5;
case 1:
goto L4;
case 2:
goto L1;
case 3:
goto L1;
case 4:
goto L3;
default:
goto L1;
}
L5:;
si0=l6;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L1;
}
goto L2;
L4:;
si0=l8;
si0=!(si0);
if(si0){
goto L1;
}
si0=l6;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L2;
}
goto L1;
L3:;
si0=l6;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L1;
}
L2:;
si0=l6;
si0=i32_load(&i->m0,(U64)si0+4U);
f15271(i,si0);
L1:;
si0=l5;
si0=i32_load(&i->m0,(U64)si0);
l9=si0;
si1=-2U;
si0+=si1;
l6=si0;
si1=1U;
si2=l6;
si3=96U;
si2=si2 < si3;
si0=si2?si0:si1;
switch(si0){
case 0:
goto L10;
case 1:
goto L9;
case 2:
goto L6;
case 3:
goto L6;
case 4:
goto L8;
default:
goto L6;
}
L10:;
si0=l5;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L6;
}
goto L7;
L9:;
si0=l9;
si0=!(si0);
if(si0){
goto L6;
}
si0=l5;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L7;
}
goto L6;
L8:;
si0=l5;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L6;
}
L7:;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+4U);
f15271(i,si0);
L6:;
si0=l0;
si1=l1;
si2=l2;
si3=l3;
si4=l4;
si5=0U;
sj6=l10;
si7=l7;
si7=i32_load(&i->m0,(U64)si7);
si8=l7;
sj8=i64_load(&i->m0,(U64)si8+4U);
f3045(i,si0,si1,si2,si3,si4,si5,sj6,si7,sj8);
L0:;
}

void f3207(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4) {
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 l8=0;
U32 si0,si1,si2,si3;
U64 sj1;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+8U);
l5=si0;
si0=!(si0);
if(si0){
goto L4;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si0=!(si0);
if(si0){
goto L4;
}
si0=l5;
si1=36U;
si0*=si1;
si1=l6;
si0+=si1;
si1=-20U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+24U);
l8=si1;
si0=si0 < si1;
if(si0){
goto L3;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0+4U);
l4=si0;
si0=l0;
si1=16U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l3;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l0;
si1=56U;
si0+=si1;
si1=l7;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=52U;
si0+=si1;
si1=l8;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=48U;
si0+=si1;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=40U;
si0+=si1;
sj1=4ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=32U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=28U;
si0+=si1;
si1=4U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=24U;
si0+=si1;
si1=l5;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=20U;
si0+=si1;
si1=l4;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=16U;
si0+=si1;
si1=l6;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=12U;
si0+=si1;
si1=l3;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
si1=-2U;
si0+=si1;
l0=si0;
si1=1U;
si2=l0;
si3=96U;
si2=si2 < si3;
si0=si2?si0:si1;
switch(si0){
case 0:
goto L7;
case 1:
goto L6;
case 2:
goto L1;
case 3:
goto L1;
case 4:
goto L5;
default:
goto L1;
}
L7:;
si0=l2;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L1;
}
goto L2;
L6:;
si0=l4;
si0=!(si0);
if(si0){
goto L1;
}
si0=l2;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L2;
}
goto L1;
L5:;
si0=l2;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L2;
}
goto L1;
L4:;
si0=1531456U;
si1=43U;
si2=1531796U;
f673(i,si0,si1,si2);
UNREACHABLE;
L3:;
si0=1531300U;
si1=38U;
si2=1531440U;
f673(i,si0,si1,si2);
UNREACHABLE;
L2:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+4U);
f15271(i,si0);
L1:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
si1=-2U;
si0+=si1;
l0=si0;
si1=1U;
si2=l0;
si3=96U;
si2=si2 < si3;
si0=si2?si0:si1;
switch(si0){
case 0:
goto L12;
case 1:
goto L11;
case 2:
goto L9;
case 3:
goto L9;
case 4:
goto L10;
default:
goto L9;
}
L12:;
si0=l1;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L9;
}
goto L8;
L11:;
si0=l4;
si0=!(si0);
if(si0){
goto L9;
}
si0=l1;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L8;
}
goto L9;
L10:;
si0=l1;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L8;
}
L9:;
goto L0;
L8:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
f15271(i,si0);
L0:;
}

void f3208(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4,U32 l5,U32 l6,U32 l7,U32 l8,U32 l9,U32 l10) {
U32 l11=0;
U32 l12=0;
U64 l13=0;
U32 si0,si1,si2,si3,si4,si5,si6,si7;
U64 sj0,sj6,sj8;
si0=l9;
si0=i32_load(&i->m0,(U64)si0);
l11=si0;
si1=-2U;
si0+=si1;
l12=si0;
si1=1U;
si2=l12;
si3=96U;
si2=si2 < si3;
si0=si2?si0:si1;
switch(si0){
case 0:
goto L5;
case 1:
goto L4;
case 2:
goto L1;
case 3:
goto L1;
case 4:
goto L3;
default:
goto L1;
}
L5:;
si0=l9;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L1;
}
goto L2;
L4:;
si0=l11;
si0=!(si0);
if(si0){
goto L1;
}
si0=l9;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L2;
}
goto L1;
L3:;
si0=l9;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L1;
}
L2:;
si0=l9;
si0=i32_load(&i->m0,(U64)si0+4U);
f15271(i,si0);
L1:;
si0=l8;
si0=i32_load(&i->m0,(U64)si0);
l12=si0;
si1=-2U;
si0+=si1;
l9=si0;
si1=1U;
si2=l9;
si3=96U;
si2=si2 < si3;
si0=si2?si0:si1;
switch(si0){
case 0:
goto L10;
case 1:
goto L9;
case 2:
goto L6;
case 3:
goto L6;
case 4:
goto L8;
default:
goto L6;
}
L10:;
si0=l8;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L6;
}
goto L7;
L9:;
si0=l12;
si0=!(si0);
if(si0){
goto L6;
}
si0=l8;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L7;
}
goto L6;
L8:;
si0=l8;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L6;
}
L7:;
si0=l8;
si0=i32_load(&i->m0,(U64)si0+4U);
f15271(i,si0);
L6:;
si0=l10;
sj0=i64_load(&i->m0,(U64)si0+4U);
l13=sj0;
si0=l10;
si0=i32_load(&i->m0,(U64)si0);
l9=si0;
si0=l6;
si0=i32_load(&i->m0,(U64)si0);
l10=si0;
si1=-2U;
si0+=si1;
l8=si0;
si1=1U;
si2=l8;
si3=96U;
si2=si2 < si3;
si0=si2?si0:si1;
switch(si0){
case 0:
goto L15;
case 1:
goto L14;
case 2:
goto L11;
case 3:
goto L11;
case 4:
goto L13;
default:
goto L11;
}
L15:;
si0=l6;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L11;
}
goto L12;
L14:;
si0=l10;
si0=!(si0);
if(si0){
goto L11;
}
si0=l6;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L12;
}
goto L11;
L13:;
si0=l6;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L11;
}
L12:;
si0=l6;
si0=i32_load(&i->m0,(U64)si0+4U);
f15271(i,si0);
L11:;
si0=l5;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si1=-2U;
si0+=si1;
l8=si0;
si1=1U;
si2=l8;
si3=96U;
si2=si2 < si3;
si0=si2?si0:si1;
switch(si0){
case 0:
goto L20;
case 1:
goto L19;
case 2:
goto L16;
case 3:
goto L16;
case 4:
goto L18;
default:
goto L16;
}
L20:;
si0=l5;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L16;
}
goto L17;
L19:;
si0=l6;
si0=!(si0);
if(si0){
goto L16;
}
si0=l5;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L17;
}
goto L16;
L18:;
si0=l5;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L16;
}
L17:;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+4U);
f15271(i,si0);
L16:;
si0=l0;
si1=l1;
si2=l2;
si3=l3;
si4=l4;
si5=l7;
si5=i32_load(&i->m0,(U64)si5);
si6=l7;
sj6=i64_load(&i->m0,(U64)si6+4U);
si7=l9;
sj8=l13;
f3046(i,si0,si1,si2,si3,si4,si5,sj6,si7,sj8);
L0:;
}

void f3209(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4,U32 l5,U32 l6,U32 l7) {
U32 l8=0;
U32 l9=0;
U64 l10=0;
U32 si0,si1,si2,si3,si4,si5,si6,si7;
U64 sj6,sj8;
si0=l6;
si0=i32_load(&i->m0,(U64)si0);
l8=si0;
si1=-2U;
si0+=si1;
l9=si0;
si1=1U;
si2=l9;
si3=96U;
si2=si2 < si3;
si0=si2?si0:si1;
switch(si0){
case 0:
goto L5;
case 1:
goto L4;
case 2:
goto L1;
case 3:
goto L1;
case 4:
goto L3;
default:
goto L1;
}
L5:;
si0=l6;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L1;
}
goto L2;
L4:;
si0=l8;
si0=!(si0);
if(si0){
goto L1;
}
si0=l6;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L2;
}
goto L1;
L3:;
si0=l6;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L1;
}
L2:;
si0=l6;
si0=i32_load(&i->m0,(U64)si0+4U);
f15271(i,si0);
L1:;
si0=l5;
si0=i32_load(&i->m0,(U64)si0);
l9=si0;
si1=-2U;
si0+=si1;
l6=si0;
si1=1U;
si2=l6;
si3=96U;
si2=si2 < si3;
si0=si2?si0:si1;
switch(si0){
case 0:
goto L10;
case 1:
goto L9;
case 2:
goto L6;
case 3:
goto L6;
case 4:
goto L8;
default:
goto L6;
}
L10:;
si0=l5;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L6;
}
goto L7;
L9:;
si0=l9;
si0=!(si0);
if(si0){
goto L6;
}
si0=l5;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L7;
}
goto L6;
L8:;
si0=l5;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L6;
}
L7:;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+4U);
f15271(i,si0);
L6:;
si0=l0;
si1=l1;
si2=l2;
si3=l3;
si4=l4;
si5=l7;
si5=i32_load(&i->m0,(U64)si5);
si6=l7;
sj6=i64_load(&i->m0,(U64)si6+4U);
si7=0U;
sj8=l10;
f3046(i,si0,si1,si2,si3,si4,si5,sj6,si7,sj8);
L0:;
}

void f3210(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4,U32 l5,U32 l6,U32 l7) {
U32 l8=0;
U32 l9=0;
U64 l10=0;
U32 si0,si1,si2,si3,si4,si5,si7,si8;
U64 sj6,sj8;
si0=l6;
si0=i32_load(&i->m0,(U64)si0);
l8=si0;
si1=-2U;
si0+=si1;
l9=si0;
si1=1U;
si2=l9;
si3=96U;
si2=si2 < si3;
si0=si2?si0:si1;
switch(si0){
case 0:
goto L5;
case 1:
goto L4;
case 2:
goto L1;
case 3:
goto L1;
case 4:
goto L3;
default:
goto L1;
}
L5:;
si0=l6;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L1;
}
goto L2;
L4:;
si0=l8;
si0=!(si0);
if(si0){
goto L1;
}
si0=l6;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L2;
}
goto L1;
L3:;
si0=l6;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L1;
}
L2:;
si0=l6;
si0=i32_load(&i->m0,(U64)si0+4U);
f15271(i,si0);
L1:;
si0=l5;
si0=i32_load(&i->m0,(U64)si0);
l9=si0;
si1=-2U;
si0+=si1;
l6=si0;
si1=1U;
si2=l6;
si3=96U;
si2=si2 < si3;
si0=si2?si0:si1;
switch(si0){
case 0:
goto L10;
case 1:
goto L9;
case 2:
goto L6;
case 3:
goto L6;
case 4:
goto L8;
default:
goto L6;
}
L10:;
si0=l5;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L6;
}
goto L7;
L9:;
si0=l9;
si0=!(si0);
if(si0){
goto L6;
}
si0=l5;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L7;
}
goto L6;
L8:;
si0=l5;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L6;
}
L7:;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+4U);
f15271(i,si0);
L6:;
si0=l0;
si1=l1;
si2=l2;
si3=l3;
si4=l4;
si5=0U;
sj6=l10;
si7=l7;
si7=i32_load(&i->m0,(U64)si7);
si8=l7;
sj8=i64_load(&i->m0,(U64)si8+4U);
f3046(i,si0,si1,si2,si3,si4,si5,sj6,si7,sj8);
L0:;
}

void f3211(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4) {
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 l8=0;
U32 si0,si1,si2,si3;
U64 sj1;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+8U);
l5=si0;
si0=!(si0);
if(si0){
goto L4;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si0=!(si0);
if(si0){
goto L4;
}
si0=l5;
si1=36U;
si0*=si1;
si1=l6;
si0+=si1;
si1=-20U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+24U);
l8=si1;
si0=si0 < si1;
if(si0){
goto L3;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0+4U);
l4=si0;
si0=l0;
si1=17U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l3;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l0;
si1=56U;
si0+=si1;
si1=l7;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=52U;
si0+=si1;
si1=l8;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=48U;
si0+=si1;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=40U;
si0+=si1;
sj1=4ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=32U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=28U;
si0+=si1;
si1=4U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=24U;
si0+=si1;
si1=l5;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=20U;
si0+=si1;
si1=l4;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=16U;
si0+=si1;
si1=l6;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=12U;
si0+=si1;
si1=l3;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
si1=-2U;
si0+=si1;
l0=si0;
si1=1U;
si2=l0;
si3=96U;
si2=si2 < si3;
si0=si2?si0:si1;
switch(si0){
case 0:
goto L7;
case 1:
goto L6;
case 2:
goto L1;
case 3:
goto L1;
case 4:
goto L5;
default:
goto L1;
}
L7:;
si0=l2;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L1;
}
goto L2;
L6:;
si0=l4;
si0=!(si0);
if(si0){
goto L1;
}
si0=l2;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L2;
}
goto L1;
L5:;
si0=l2;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L2;
}
goto L1;
L4:;
si0=1531456U;
si1=43U;
si2=1531812U;
f673(i,si0,si1,si2);
UNREACHABLE;
L3:;
si0=1531300U;
si1=38U;
si2=1531440U;
f673(i,si0,si1,si2);
UNREACHABLE;
L2:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+4U);
f15271(i,si0);
L1:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
si1=-2U;
si0+=si1;
l0=si0;
si1=1U;
si2=l0;
si3=96U;
si2=si2 < si3;
si0=si2?si0:si1;
switch(si0){
case 0:
goto L12;
case 1:
goto L11;
case 2:
goto L9;
case 3:
goto L9;
case 4:
goto L10;
default:
goto L9;
}
L12:;
si0=l1;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L9;
}
goto L8;
L11:;
si0=l4;
si0=!(si0);
if(si0){
goto L9;
}
si0=l1;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L8;
}
goto L9;
L10:;
si0=l1;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L8;
}
L9:;
goto L0;
L8:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
f15271(i,si0);
L0:;
}

void f3212(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 si0,si1,si2,si3;
U64 sj1;
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+52U);
l5=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si1=-2U;
si0+=si1;
l7=si0;
si1=1U;
si2=l7;
si3=96U;
si2=si2 < si3;
si0=si2?si0:si1;
switch(si0){
case 0:
goto L5;
case 1:
goto L4;
case 2:
goto L1;
case 3:
goto L1;
case 4:
goto L3;
default:
goto L1;
}
L5:;
si0=l2;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L1;
}
goto L2;
L4:;
si0=l6;
si0=!(si0);
if(si0){
goto L1;
}
si0=l2;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L2;
}
goto L1;
L3:;
si0=l2;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L1;
}
L2:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+4U);
f15271(i,si0);
L1:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+12U);
l7=si0;
si0=0U;
l2=si0;
si0=l4;
si1=38U;
si0=si0 == si1;
if(si0){
goto L8;
}
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=48U;
si0=f15269(i,si0);
l2=si0;
si0=!(si0);
if(si0){
goto L7;
}
si0=l2;
si1=l4;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=l3;
si2=4U;
si1+=si2;
l3=si1;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l2;
si1=12U;
si0+=si1;
si1=l3;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=20U;
si0+=si1;
si1=l3;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=28U;
si0+=si1;
si1=l3;
si2=24U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=36U;
si0+=si1;
si1=l3;
si2=32U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=44U;
si0+=si1;
si1=l3;
si2=40U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
L8:;
si0=l7;
si1=l5;
si0=si0 > si1;
if(si0){
goto L6;
}
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0+36U,si1);
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l0;
si1=l2;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l0;
si1=l5;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l0;
si1=l7;
i32_store(&i->m0,(U64)si0+12U,si1);
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
goto L0;
L7:;
si0=8U;
si1=48U;
f52(i,si0,si1);
UNREACHABLE;
L6:;
si0=1531300U;
si1=38U;
si2=1531440U;
f673(i,si0,si1,si2);
UNREACHABLE;
L0:;
}

void f3213(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U32 si0,si1,si2,si3;
U64 sj1;
si0=i->g0;
si1=96U;
si0-=si1;
l4=si0;
i->g0=si0;
si0=l4;
si1=40U;
si0+=si1;
si1=l3;
si2=40U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=32U;
si0+=si1;
si1=l3;
si2=32U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=24U;
si0+=si1;
si1=l3;
si2=24U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=16U;
si0+=si1;
si1=l3;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
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
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=48U;
si0+=si1;
si1=l4;
si2=1U;
f3485(i,si0,si1,si2);
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=48U;
si0=f15269(i,si0);
l3=si0;
si0=!(si0);
if(si0){
goto L3;
}
si0=l3;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1+48U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=40U;
si0+=si1;
si1=l4;
si2=48U;
si1+=si2;
si2=40U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=32U;
si0+=si1;
si1=l4;
si2=48U;
si1+=si2;
si2=32U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=24U;
si0+=si1;
si1=l4;
si2=48U;
si1+=si2;
si2=24U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=16U;
si0+=si1;
si1=l4;
si2=48U;
si1+=si2;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=8U;
si0+=si1;
si1=l4;
si2=48U;
si1+=si2;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=l3;
i32_store(&i->m0,(U64)si0+48U,si1);
si0=l0;
si1=40U;
si0+=si1;
si1=l1;
si2=40U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=32U;
si0+=si1;
si1=l1;
si2=32U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=24U;
si0+=si1;
si1=l1;
si2=24U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=16U;
si0+=si1;
si1=l1;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=8U;
si0+=si1;
si1=l1;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=l1;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si1=-2U;
si0+=si1;
l0=si0;
si1=1U;
si2=l0;
si3=96U;
si2=si2 < si3;
si0=si2?si0:si1;
switch(si0){
case 0:
goto L6;
case 1:
goto L5;
case 2:
goto L1;
case 3:
goto L1;
case 4:
goto L4;
default:
goto L1;
}
L6:;
si0=l2;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L1;
}
goto L2;
L5:;
si0=l3;
si0=!(si0);
if(si0){
goto L1;
}
si0=l2;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L2;
}
goto L1;
L4:;
si0=l2;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L2;
}
goto L1;
L3:;
si0=8U;
si1=48U;
f52(i,si0,si1);
UNREACHABLE;
L2:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+4U);
f15271(i,si0);
L1:;
si0=l4;
si1=96U;
si0+=si1;
i->g0=si0;
L0:;
}

void f3214(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 si0,si1,si2,si3;
U64 sj1;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+48U);
l4=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+52U);
l5=si0;
si0=48U;
si0=f15269(i,si0);
l6=si0;
si0=!(si0);
if(si0){
goto L4;
}
si0=l6;
si1=l1;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l6;
si1=40U;
si0+=si1;
si1=l1;
si2=40U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l6;
si1=32U;
si0+=si1;
si1=l1;
si2=32U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l6;
si1=24U;
si0+=si1;
si1=l1;
si2=24U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l6;
si1=16U;
si0+=si1;
si1=l1;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l6;
si1=8U;
si0+=si1;
si1=l1;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=48U;
si0=f15269(i,si0);
l1=si0;
si0=!(si0);
if(si0){
goto L3;
}
si0=l1;
si1=l3;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si1=40U;
si0+=si1;
si1=l3;
si2=40U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si1=32U;
si0+=si1;
si1=l3;
si2=32U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si1=24U;
si0+=si1;
si1=l3;
si2=24U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si1=16U;
si0+=si1;
si1=l3;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si1=8U;
si0+=si1;
si1=l3;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=l5;
si0=si0 > si1;
if(si0){
goto L2;
}
si0=l0;
si1=l6;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=13U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=20U;
si0+=si1;
si1=10U;
i32_store8(&i->m0,(U64)si0,si1);
si0=l0;
si1=16U;
si0+=si1;
si1=l5;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=12U;
si0+=si1;
si1=l4;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=8U;
si0+=si1;
si1=l1;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si1=-2U;
si0+=si1;
l1=si0;
si1=1U;
si2=l1;
si3=96U;
si2=si2 < si3;
si0=si2?si0:si1;
switch(si0){
case 0:
goto L8;
case 1:
goto L7;
case 2:
goto L5;
case 3:
goto L5;
case 4:
goto L6;
default:
goto L5;
}
L8:;
si0=l2;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L5;
}
goto L1;
L7:;
si0=l6;
si0=!(si0);
if(si0){
goto L5;
}
si0=l2;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L1;
}
goto L5;
L6:;
si0=l2;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L1;
}
L5:;
goto L0;
L4:;
si0=8U;
si1=48U;
f52(i,si0,si1);
UNREACHABLE;
L3:;
si0=8U;
si1=48U;
f52(i,si0,si1);
UNREACHABLE;
L2:;
si0=1531300U;
si1=38U;
si2=1531440U;
f673(i,si0,si1,si2);
UNREACHABLE;
L1:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+4U);
f15271(i,si0);
L0:;
}

void f3215(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 si0,si1,si2,si3;
U64 sj1;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+24U);
l4=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+52U);
l5=si0;
si0=48U;
si0=f15269(i,si0);
l6=si0;
si0=!(si0);
if(si0){
goto L4;
}
si0=l6;
si1=l3;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l6;
si1=40U;
si0+=si1;
si1=l3;
si2=40U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l6;
si1=32U;
si0+=si1;
si1=l3;
si2=32U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l6;
si1=24U;
si0+=si1;
si1=l3;
si2=24U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l6;
si1=16U;
si0+=si1;
si1=l3;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l6;
si1=8U;
si0+=si1;
si1=l3;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=l5;
si0=si0 > si1;
if(si0){
goto L3;
}
si0=l0;
si1=l6;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=25U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=12U;
si0+=si1;
si1=l5;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=8U;
si0+=si1;
si1=l4;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si1=-2U;
si0+=si1;
l3=si0;
si1=1U;
si2=l3;
si3=96U;
si2=si2 < si3;
si0=si2?si0:si1;
switch(si0){
case 0:
goto L7;
case 1:
goto L6;
case 2:
goto L1;
case 3:
goto L1;
case 4:
goto L5;
default:
goto L1;
}
L7:;
si0=l2;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L1;
}
goto L2;
L6:;
si0=l6;
si0=!(si0);
if(si0){
goto L1;
}
si0=l2;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L2;
}
goto L1;
L5:;
si0=l2;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L2;
}
goto L1;
L4:;
si0=8U;
si1=48U;
f52(i,si0,si1);
UNREACHABLE;
L3:;
si0=1531300U;
si1=38U;
si2=1531440U;
f673(i,si0,si1,si2);
UNREACHABLE;
L2:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+4U);
f15271(i,si0);
L1:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si1=-2U;
si0+=si1;
l3=si0;
si1=1U;
si2=l3;
si3=96U;
si2=si2 < si3;
si0=si2?si0:si1;
switch(si0){
case 0:
goto L12;
case 1:
goto L11;
case 2:
goto L9;
case 3:
goto L9;
case 4:
goto L10;
default:
goto L9;
}
L12:;
si0=l1;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L9;
}
goto L8;
L11:;
si0=l6;
si0=!(si0);
if(si0){
goto L9;
}
si0=l1;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L8;
}
goto L9;
L10:;
si0=l1;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L8;
}
L9:;
goto L0;
L8:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
f15271(i,si0);
L0:;
}

void f3216(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4) {
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 si0,si1,si2,si3;
U64 sj1;
si0=i->g0;
si1=48U;
si0-=si1;
l5=si0;
i->g0=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+16U);
l6=si0;
si0=l5;
si1=l2;
si1=i32_load(&i->m0,(U64)si1+12U);
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l5;
si1=44U;
si0+=si1;
si1=l5;
si2=20U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=l2;
si1=i32_load(&i->m0,(U64)si1);
l7=si1;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l5;
si1=l2;
si1=i32_load(&i->m0,(U64)si1+4U);
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l5;
si1=l7;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l2;
si0=i32_load(&i->m0,(U64)si0+8U);
l2=si0;
si0=l5;
si1=l6;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l5;
si1=l7;
si2=l2;
si3=48U;
si2*=si3;
si1+=si2;
i32_store(&i->m0,(U64)si0+36U,si1);
si0=l5;
si1=l5;
si2=16U;
si1+=si2;
i32_store(&i->m0,(U64)si0+40U,si1);
si0=l5;
si1=l5;
si2=24U;
si1+=si2;
f3377(i,si0,si1);
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
si0=l3;
si0=i32_load(&i->m0,(U64)si0+8U);
l0=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+4U);
l6=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
si1=-2U;
si0+=si1;
l3=si0;
si1=1U;
si2=l3;
si3=96U;
si2=si2 < si3;
si0=si2?si0:si1;
switch(si0){
case 0:
goto L5;
case 1:
goto L4;
case 2:
goto L1;
case 3:
goto L1;
case 4:
goto L3;
default:
goto L1;
}
L5:;
si0=l4;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L1;
}
goto L2;
L4:;
si0=l7;
si0=!(si0);
if(si0){
goto L1;
}
si0=l4;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L2;
}
goto L1;
L3:;
si0=l4;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L1;
}
L2:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+4U);
f15271(i,si0);
L1:;
si0=l2;
si1=98U;
si0=si0 == si1;
if(si0){
goto L6;
}
si0=l2;
si1=-2U;
si0+=si1;
l3=si0;
si1=1U;
si2=l3;
si3=96U;
si2=si2 < si3;
si0=si2?si0:si1;
switch(si0){
case 0:
goto L10;
case 1:
goto L9;
case 2:
goto L6;
case 3:
goto L6;
case 4:
goto L8;
default:
goto L6;
}
L10:;
si0=l0;
si0=!(si0);
if(si0){
goto L6;
}
goto L7;
L9:;
si0=l2;
si0=!(si0);
if(si0){
goto L6;
}
L8:;
si0=l0;
si0=!(si0);
if(si0){
goto L6;
}
L7:;
si0=l6;
f15271(i,si0);
L6:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si1=-2U;
si0+=si1;
l2=si0;
si1=1U;
si2=l2;
si3=96U;
si2=si2 < si3;
si0=si2?si0:si1;
switch(si0){
case 0:
goto L15;
case 1:
goto L14;
case 2:
goto L11;
case 3:
goto L11;
case 4:
goto L13;
default:
goto L11;
}
L15:;
si0=l1;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L11;
}
goto L12;
L14:;
si0=l3;
si0=!(si0);
if(si0){
goto L11;
}
si0=l1;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L12;
}
goto L11;
L13:;
si0=l1;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L11;
}
L12:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
f15271(i,si0);
L11:;
si0=l5;
si1=48U;
si0+=si1;
i->g0=si0;
L0:;
}

void f3217(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 si0,si1,si2,si3;
U64 sj1;
si0=i->g0;
si1=48U;
si0-=si1;
l4=si0;
i->g0=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+16U);
l5=si0;
si0=l4;
si1=l2;
si1=i32_load(&i->m0,(U64)si1+12U);
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l4;
si1=44U;
si0+=si1;
si1=l4;
si2=20U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=l2;
si1=i32_load(&i->m0,(U64)si1);
l6=si1;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l4;
si1=l2;
si1=i32_load(&i->m0,(U64)si1+4U);
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l4;
si1=l6;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l2;
si0=i32_load(&i->m0,(U64)si0+8U);
l2=si0;
si0=l4;
si1=l5;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l4;
si1=l6;
si2=l2;
si3=48U;
si2*=si3;
si1+=si2;
i32_store(&i->m0,(U64)si0+36U,si1);
si0=l4;
si1=l4;
si2=16U;
si1+=si2;
i32_store(&i->m0,(U64)si0+40U,si1);
si0=l4;
si1=l4;
si2=24U;
si1+=si2;
f3377(i,si0,si1);
si0=l0;
si1=8U;
si0+=si1;
si1=l4;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
l0=si0;
si1=-2U;
si0+=si1;
l2=si0;
si1=1U;
si2=l2;
si3=96U;
si2=si2 < si3;
si0=si2?si0:si1;
switch(si0){
case 0:
goto L5;
case 1:
goto L4;
case 2:
goto L1;
case 3:
goto L1;
case 4:
goto L3;
default:
goto L1;
}
L5:;
si0=l3;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L1;
}
goto L2;
L4:;
si0=l0;
si0=!(si0);
if(si0){
goto L1;
}
si0=l3;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L2;
}
goto L1;
L3:;
si0=l3;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L1;
}
L2:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+4U);
f15271(i,si0);
L1:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si1=-2U;
si0+=si1;
l2=si0;
si1=1U;
si2=l2;
si3=96U;
si2=si2 < si3;
si0=si2?si0:si1;
switch(si0){
case 0:
goto L10;
case 1:
goto L9;
case 2:
goto L6;
case 3:
goto L6;
case 4:
goto L8;
default:
goto L6;
}
L10:;
si0=l1;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L6;
}
goto L7;
L9:;
si0=l3;
si0=!(si0);
if(si0){
goto L6;
}
si0=l1;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L7;
}
goto L6;
L8:;
si0=l1;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L6;
}
L7:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
f15271(i,si0);
L6:;
si0=l4;
si1=48U;
si0+=si1;
i->g0=si0;
L0:;
}

void f3218(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4,U32 l5,U32 l6) {
U32 l7=0;
U32 l8=0;
U32 l9=0;
U32 si0,si1,si2,si3;
U64 sj1;
si0=i->g0;
si1=160U;
si0-=si1;
l7=si0;
i->g0=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+16U);
l8=si0;
si0=l7;
si1=l2;
si1=i32_load(&i->m0,(U64)si1+12U);
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l7;
si1=44U;
si0+=si1;
si1=l7;
si2=20U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l7;
si1=l2;
si1=i32_load(&i->m0,(U64)si1);
l9=si1;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l7;
si1=l2;
si1=i32_load(&i->m0,(U64)si1+4U);
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l7;
si1=l9;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l2;
si0=i32_load(&i->m0,(U64)si0+8U);
l2=si0;
si0=l7;
si1=l8;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l7;
si1=l9;
si2=l2;
si3=48U;
si2*=si3;
si1+=si2;
i32_store(&i->m0,(U64)si0+36U,si1);
si0=l7;
si1=l7;
si2=16U;
si1+=si2;
i32_store(&i->m0,(U64)si0+40U,si1);
si0=l7;
si1=l7;
si2=24U;
si1+=si2;
f3377(i,si0,si1);
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
l9=si0;
si1=-2U;
si0+=si1;
l2=si0;
si1=1U;
si2=l2;
si3=96U;
si2=si2 < si3;
si0=si2?si0:si1;
switch(si0){
case 0:
goto L5;
case 1:
goto L4;
case 2:
goto L1;
case 3:
goto L1;
case 4:
goto L3;
default:
goto L1;
}
L5:;
si0=l3;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L1;
}
goto L2;
L4:;
si0=l9;
si0=!(si0);
if(si0){
goto L1;
}
si0=l3;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L2;
}
goto L1;
L3:;
si0=l3;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L1;
}
L2:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+4U);
f15271(i,si0);
L1:;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+8U);
l3=si0;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+4U);
l9=si0;
si0=l5;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si0=l7;
si1=80U;
si0+=si1;
si1=l4;
si2=48U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l7;
si1=24U;
si0+=si1;
si1=48U;
si0+=si1;
si1=l4;
si2=40U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l7;
si1=24U;
si0+=si1;
si1=40U;
si0+=si1;
si1=l4;
si2=32U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l7;
si1=24U;
si0+=si1;
si1=32U;
si0+=si1;
si1=l4;
si2=24U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l7;
si1=24U;
si0+=si1;
si1=24U;
si0+=si1;
si1=l4;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l7;
si1=24U;
si0+=si1;
si1=16U;
si0+=si1;
si1=l4;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l7;
sj1=4294967296ULL;
i64_store(&i->m0,(U64)si0+88U,sj1);
si0=l7;
sj1=1ULL;
i64_store(&i->m0,(U64)si0+24U,sj1);
si0=l7;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+32U,sj1);
si0=l7;
si1=1U;
i32_store(&i->m0,(U64)si0+96U,si1);
si0=l7;
si1=152U;
si0+=si1;
sj1=34359738376ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l7;
si1=108U;
si0+=si1;
si1=l7;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l7;
si1=0U;
i32_store(&i->m0,(U64)si0+112U,si1);
si0=l7;
si1=0U;
i32_store(&i->m0,(U64)si0+128U,si1);
si0=l7;
sj1=8ULL;
i64_store(&i->m0,(U64)si0+144U,sj1);
si0=l7;
si1=l7;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+100U,sj1);
si0=l0;
si1=l7;
si2=24U;
si1+=si2;
f3395(i,si0,si1);
si0=l6;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si1=-2U;
si0+=si1;
l4=si0;
si1=1U;
si2=l4;
si3=96U;
si2=si2 < si3;
si0=si2?si0:si1;
switch(si0){
case 0:
goto L10;
case 1:
goto L9;
case 2:
goto L6;
case 3:
goto L6;
case 4:
goto L8;
default:
goto L6;
}
L10:;
si0=l6;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L6;
}
goto L7;
L9:;
si0=l5;
si0=!(si0);
if(si0){
goto L6;
}
si0=l6;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L7;
}
goto L6;
L8:;
si0=l6;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L6;
}
L7:;
si0=l6;
si0=i32_load(&i->m0,(U64)si0+4U);
f15271(i,si0);
L6:;
si0=l2;
si1=98U;
si0=si0 == si1;
if(si0){
goto L11;
}
si0=l2;
si1=-2U;
si0+=si1;
l4=si0;
si1=1U;
si2=l4;
si3=96U;
si2=si2 < si3;
si0=si2?si0:si1;
switch(si0){
case 0:
goto L15;
case 1:
goto L14;
case 2:
goto L11;
case 3:
goto L11;
case 4:
goto L13;
default:
goto L11;
}
L15:;
si0=l3;
si0=!(si0);
if(si0){
goto L11;
}
goto L12;
L14:;
si0=l2;
si0=!(si0);
if(si0){
goto L11;
}
L13:;
si0=l3;
si0=!(si0);
if(si0){
goto L11;
}
L12:;
si0=l9;
f15271(i,si0);
L11:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si1=-2U;
si0+=si1;
l4=si0;
si1=1U;
si2=l4;
si3=96U;
si2=si2 < si3;
si0=si2?si0:si1;
switch(si0){
case 0:
goto L20;
case 1:
goto L19;
case 2:
goto L16;
case 3:
goto L16;
case 4:
goto L18;
default:
goto L16;
}
L20:;
si0=l1;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L16;
}
goto L17;
L19:;
si0=l2;
si0=!(si0);
if(si0){
goto L16;
}
si0=l1;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L17;
}
goto L16;
L18:;
si0=l1;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L16;
}
L17:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
f15271(i,si0);
L16:;
si0=l7;
si1=160U;
si0+=si1;
i->g0=si0;
L0:;
}

void f3219(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4) {
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 si0,si1,si2,si3;
U64 sj1;
si0=i->g0;
si1=144U;
si0-=si1;
l5=si0;
i->g0=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+8U);
l6=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+4U);
l7=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=l5;
si1=136U;
si0+=si1;
sj1=34359738376ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=64U;
si0+=si1;
si1=l2;
si2=48U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=8U;
si0+=si1;
si1=48U;
si0+=si1;
si1=l2;
si2=40U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=8U;
si0+=si1;
si1=40U;
si0+=si1;
si1=l2;
si2=32U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=8U;
si0+=si1;
si1=32U;
si0+=si1;
si1=l2;
si2=24U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=8U;
si0+=si1;
si1=24U;
si0+=si1;
si1=l2;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=8U;
si0+=si1;
si1=16U;
si0+=si1;
si1=l2;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
sj1=8ULL;
i64_store(&i->m0,(U64)si0+128U,sj1);
si0=l5;
si1=0U;
i32_store(&i->m0,(U64)si0+112U,si1);
si0=l5;
si1=0U;
i32_store(&i->m0,(U64)si0+96U,si1);
si0=l5;
sj1=1ULL;
i64_store(&i->m0,(U64)si0+80U,sj1);
si0=l5;
sj1=4294967296ULL;
i64_store(&i->m0,(U64)si0+72U,sj1);
si0=l5;
sj1=1ULL;
i64_store(&i->m0,(U64)si0+8U,sj1);
si0=l5;
si1=l2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+16U,sj1);
si0=l0;
si1=l5;
si2=8U;
si1+=si2;
f3395(i,si0,si1);
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
l0=si0;
si1=-2U;
si0+=si1;
l2=si0;
si1=1U;
si2=l2;
si3=96U;
si2=si2 < si3;
si0=si2?si0:si1;
switch(si0){
case 0:
goto L5;
case 1:
goto L4;
case 2:
goto L1;
case 3:
goto L1;
case 4:
goto L3;
default:
goto L1;
}
L5:;
si0=l4;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L1;
}
goto L2;
L4:;
si0=l0;
si0=!(si0);
if(si0){
goto L1;
}
si0=l4;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L2;
}
goto L1;
L3:;
si0=l4;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L1;
}
L2:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+4U);
f15271(i,si0);
L1:;
si0=l3;
si1=98U;
si0=si0 == si1;
if(si0){
goto L6;
}
si0=l3;
si1=-2U;
si0+=si1;
l2=si0;
si1=1U;
si2=l2;
si3=96U;
si2=si2 < si3;
si0=si2?si0:si1;
switch(si0){
case 0:
goto L10;
case 1:
goto L9;
case 2:
goto L6;
case 3:
goto L6;
case 4:
goto L8;
default:
goto L6;
}
L10:;
si0=l6;
si0=!(si0);
if(si0){
goto L6;
}
goto L7;
L9:;
si0=l3;
si0=!(si0);
if(si0){
goto L6;
}
L8:;
si0=l6;
si0=!(si0);
if(si0){
goto L6;
}
L7:;
si0=l7;
f15271(i,si0);
L6:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si1=-2U;
si0+=si1;
l2=si0;
si1=1U;
si2=l2;
si3=96U;
si2=si2 < si3;
si0=si2?si0:si1;
switch(si0){
case 0:
goto L15;
case 1:
goto L14;
case 2:
goto L11;
case 3:
goto L11;
case 4:
goto L13;
default:
goto L11;
}
L15:;
si0=l1;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L11;
}
goto L12;
L14:;
si0=l3;
si0=!(si0);
if(si0){
goto L11;
}
si0=l1;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L12;
}
goto L11;
L13:;
si0=l1;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L11;
}
L12:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
f15271(i,si0);
L11:;
si0=l5;
si1=144U;
si0+=si1;
i->g0=si0;
L0:;
}

void f3220(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4,U32 l5,U32 l6,U32 l7) {
U32 l8=0;
U32 l9=0;
U32 l10=0;
U32 si0,si1,si2,si3;
U64 sj1;
si0=i->g0;
si1=160U;
si0-=si1;
l8=si0;
i->g0=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+16U);
l9=si0;
si0=l8;
si1=l2;
si1=i32_load(&i->m0,(U64)si1+12U);
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l8;
si1=44U;
si0+=si1;
si1=l8;
si2=20U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l8;
si1=l2;
si1=i32_load(&i->m0,(U64)si1);
l10=si1;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l8;
si1=l2;
si1=i32_load(&i->m0,(U64)si1+4U);
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l8;
si1=l10;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l2;
si0=i32_load(&i->m0,(U64)si0+8U);
l2=si0;
si0=l8;
si1=l9;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l8;
si1=l10;
si2=l2;
si3=48U;
si2*=si3;
si1+=si2;
i32_store(&i->m0,(U64)si0+36U,si1);
si0=l8;
si1=l8;
si2=16U;
si1+=si2;
i32_store(&i->m0,(U64)si0+40U,si1);
si0=l8;
si1=l8;
si2=24U;
si1+=si2;
f3377(i,si0,si1);
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
l10=si0;
si1=-2U;
si0+=si1;
l2=si0;
si1=1U;
si2=l2;
si3=96U;
si2=si2 < si3;
si0=si2?si0:si1;
switch(si0){
case 0:
goto L5;
case 1:
goto L4;
case 2:
goto L1;
case 3:
goto L1;
case 4:
goto L3;
default:
goto L1;
}
L5:;
si0=l3;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L1;
}
goto L2;
L4:;
si0=l10;
si0=!(si0);
if(si0){
goto L1;
}
si0=l3;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L2;
}
goto L1;
L3:;
si0=l3;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L1;
}
L2:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+4U);
f15271(i,si0);
L1:;
si0=l6;
si0=i32_load(&i->m0,(U64)si0+8U);
l10=si0;
si0=l6;
si0=i32_load(&i->m0,(U64)si0+4U);
l9=si0;
si0=l6;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+8U);
l3=si0;
si0=l5;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+4U);
l5=si0;
si0=l8;
si1=24U;
si0+=si1;
si1=56U;
si0+=si1;
si1=l4;
si2=48U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l8;
si1=24U;
si0+=si1;
si1=48U;
si0+=si1;
si1=l4;
si2=40U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l8;
si1=24U;
si0+=si1;
si1=40U;
si0+=si1;
si1=l4;
si2=32U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l8;
si1=24U;
si0+=si1;
si1=32U;
si0+=si1;
si1=l4;
si2=24U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l8;
si1=24U;
si0+=si1;
si1=24U;
si0+=si1;
si1=l4;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l8;
si1=24U;
si0+=si1;
si1=16U;
si0+=si1;
si1=l4;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l8;
sj1=4294967296ULL;
i64_store(&i->m0,(U64)si0+88U,sj1);
si0=l8;
sj1=1ULL;
i64_store(&i->m0,(U64)si0+24U,sj1);
si0=l8;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+32U,sj1);
si0=l8;
si1=1U;
i32_store(&i->m0,(U64)si0+96U,si1);
si0=l8;
si1=148U;
si0+=si1;
si1=l5;
i32_store(&i->m0,(U64)si0,si1);
si0=l8;
si1=152U;
si0+=si1;
si1=l2;
i32_store(&i->m0,(U64)si0,si1);
si0=l8;
si1=156U;
si0+=si1;
si1=l2;
si2=l3;
si3=56U;
si2*=si3;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l8;
si1=108U;
si0+=si1;
si1=l8;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l8;
si1=0U;
i32_store(&i->m0,(U64)si0+112U,si1);
si0=l8;
si1=0U;
i32_store(&i->m0,(U64)si0+128U,si1);
si0=l8;
si1=l2;
i32_store(&i->m0,(U64)si0+144U,si1);
si0=l8;
si1=l8;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+100U,sj1);
si0=l0;
si1=l8;
si2=24U;
si1+=si2;
f3395(i,si0,si1);
si0=l7;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si1=-2U;
si0+=si1;
l4=si0;
si1=1U;
si2=l4;
si3=96U;
si2=si2 < si3;
si0=si2?si0:si1;
switch(si0){
case 0:
goto L10;
case 1:
goto L9;
case 2:
goto L6;
case 3:
goto L6;
case 4:
goto L8;
default:
goto L6;
}
L10:;
si0=l7;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L6;
}
goto L7;
L9:;
si0=l2;
si0=!(si0);
if(si0){
goto L6;
}
si0=l7;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L7;
}
goto L6;
L8:;
si0=l7;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L6;
}
L7:;
si0=l7;
si0=i32_load(&i->m0,(U64)si0+4U);
f15271(i,si0);
L6:;
si0=l6;
si1=98U;
si0=si0 == si1;
if(si0){
goto L11;
}
si0=l6;
si1=-2U;
si0+=si1;
l4=si0;
si1=1U;
si2=l4;
si3=96U;
si2=si2 < si3;
si0=si2?si0:si1;
switch(si0){
case 0:
goto L15;
case 1:
goto L14;
case 2:
goto L11;
case 3:
goto L11;
case 4:
goto L13;
default:
goto L11;
}
L15:;
si0=l10;
si0=!(si0);
if(si0){
goto L11;
}
goto L12;
L14:;
si0=l6;
si0=!(si0);
if(si0){
goto L11;
}
L13:;
si0=l10;
si0=!(si0);
if(si0){
goto L11;
}
L12:;
si0=l9;
f15271(i,si0);
L11:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si1=-2U;
si0+=si1;
l4=si0;
si1=1U;
si2=l4;
si3=96U;
si2=si2 < si3;
si0=si2?si0:si1;
switch(si0){
case 0:
goto L20;
case 1:
goto L19;
case 2:
goto L16;
case 3:
goto L16;
case 4:
goto L18;
default:
goto L16;
}
L20:;
si0=l1;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L16;
}
goto L17;
L19:;
si0=l2;
si0=!(si0);
if(si0){
goto L16;
}
si0=l1;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L17;
}
goto L16;
L18:;
si0=l1;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L16;
}
L17:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
f15271(i,si0);
L16:;
si0=l8;
si1=160U;
si0+=si1;
i->g0=si0;
L0:;
}

void f3221(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4,U32 l5) {
U32 l6=0;
U32 l7=0;
U32 l8=0;
U32 l9=0;
U32 l10=0;
U32 l11=0;
U32 si0,si1,si2,si3;
U64 sj1;
si0=i->g0;
si1=144U;
si0-=si1;
l6=si0;
i->g0=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+8U);
l7=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+4U);
l8=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
l9=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+8U);
l10=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+4U);
l11=si0;
si0=l6;
si1=136U;
si0+=si1;
si1=l3;
si1=i32_load(&i->m0,(U64)si1);
l4=si1;
i32_store(&i->m0,(U64)si0,si1);
si0=l6;
si1=132U;
si0+=si1;
si1=l11;
i32_store(&i->m0,(U64)si0,si1);
si0=l6;
si1=8U;
si0+=si1;
si1=56U;
si0+=si1;
si1=l2;
si2=48U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l6;
si1=8U;
si0+=si1;
si1=48U;
si0+=si1;
si1=l2;
si2=40U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l6;
si1=8U;
si0+=si1;
si1=40U;
si0+=si1;
si1=l2;
si2=32U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l6;
si1=8U;
si0+=si1;
si1=32U;
si0+=si1;
si1=l2;
si2=24U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l6;
si1=8U;
si0+=si1;
si1=24U;
si0+=si1;
si1=l2;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l6;
si1=8U;
si0+=si1;
si1=16U;
si0+=si1;
si1=l2;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l6;
si1=140U;
si0+=si1;
si1=l4;
si2=l10;
si3=56U;
si2*=si3;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l6;
si1=l4;
i32_store(&i->m0,(U64)si0+128U,si1);
si0=l6;
si1=0U;
i32_store(&i->m0,(U64)si0+112U,si1);
si0=l6;
si1=0U;
i32_store(&i->m0,(U64)si0+96U,si1);
si0=l6;
sj1=1ULL;
i64_store(&i->m0,(U64)si0+80U,sj1);
si0=l6;
sj1=4294967296ULL;
i64_store(&i->m0,(U64)si0+72U,sj1);
si0=l6;
sj1=1ULL;
i64_store(&i->m0,(U64)si0+8U,sj1);
si0=l6;
si1=l2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+16U,sj1);
si0=l0;
si1=l6;
si2=8U;
si1+=si2;
f3395(i,si0,si1);
si0=l5;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
si1=-2U;
si0+=si1;
l2=si0;
si1=1U;
si2=l2;
si3=96U;
si2=si2 < si3;
si0=si2?si0:si1;
switch(si0){
case 0:
goto L5;
case 1:
goto L4;
case 2:
goto L1;
case 3:
goto L1;
case 4:
goto L3;
default:
goto L1;
}
L5:;
si0=l5;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L1;
}
goto L2;
L4:;
si0=l4;
si0=!(si0);
if(si0){
goto L1;
}
si0=l5;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L2;
}
goto L1;
L3:;
si0=l5;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L1;
}
L2:;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+4U);
f15271(i,si0);
L1:;
si0=l9;
si1=98U;
si0=si0 == si1;
if(si0){
goto L6;
}
si0=l9;
si1=-2U;
si0+=si1;
l2=si0;
si1=1U;
si2=l2;
si3=96U;
si2=si2 < si3;
si0=si2?si0:si1;
switch(si0){
case 0:
goto L10;
case 1:
goto L9;
case 2:
goto L6;
case 3:
goto L6;
case 4:
goto L8;
default:
goto L6;
}
L10:;
si0=l7;
si0=!(si0);
if(si0){
goto L6;
}
goto L7;
L9:;
si0=l9;
si0=!(si0);
if(si0){
goto L6;
}
L8:;
si0=l7;
si0=!(si0);
if(si0){
goto L6;
}
L7:;
si0=l8;
f15271(i,si0);
L6:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
si1=-2U;
si0+=si1;
l2=si0;
si1=1U;
si2=l2;
si3=96U;
si2=si2 < si3;
si0=si2?si0:si1;
switch(si0){
case 0:
goto L15;
case 1:
goto L14;
case 2:
goto L11;
case 3:
goto L11;
case 4:
goto L13;
default:
goto L11;
}
L15:;
si0=l1;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L11;
}
goto L12;
L14:;
si0=l4;
si0=!(si0);
if(si0){
goto L11;
}
si0=l1;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L12;
}
goto L11;
L13:;
si0=l1;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L11;
}
L12:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
f15271(i,si0);
L11:;
si0=l6;
si1=144U;
si0+=si1;
i->g0=si0;
L0:;
}

void f3222(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4,U32 l5) {
U32 l6=0;
U32 l7=0;
U32 l8=0;
U32 si0,si1,si2,si3;
U64 sj1;
si0=i->g0;
si1=160U;
si0-=si1;
l6=si0;
i->g0=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+16U);
l7=si0;
si0=l6;
si1=l2;
si1=i32_load(&i->m0,(U64)si1+12U);
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l6;
si1=44U;
si0+=si1;
si1=l6;
si2=20U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l6;
si1=l2;
si1=i32_load(&i->m0,(U64)si1);
l8=si1;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l6;
si1=l2;
si1=i32_load(&i->m0,(U64)si1+4U);
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l6;
si1=l8;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l2;
si0=i32_load(&i->m0,(U64)si0+8U);
l2=si0;
si0=l6;
si1=l7;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l6;
si1=l8;
si2=l2;
si3=48U;
si2*=si3;
si1+=si2;
i32_store(&i->m0,(U64)si0+36U,si1);
si0=l6;
si1=l6;
si2=16U;
si1+=si2;
i32_store(&i->m0,(U64)si0+40U,si1);
si0=l6;
si1=l6;
si2=24U;
si1+=si2;
f3377(i,si0,si1);
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
l8=si0;
si1=-2U;
si0+=si1;
l2=si0;
si1=1U;
si2=l2;
si3=96U;
si2=si2 < si3;
si0=si2?si0:si1;
switch(si0){
case 0:
goto L5;
case 1:
goto L4;
case 2:
goto L1;
case 3:
goto L1;
case 4:
goto L3;
default:
goto L1;
}
L5:;
si0=l3;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L1;
}
goto L2;
L4:;
si0=l8;
si0=!(si0);
if(si0){
goto L1;
}
si0=l3;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L2;
}
goto L1;
L3:;
si0=l3;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L1;
}
L2:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+4U);
f15271(i,si0);
L1:;
si0=l6;
si1=80U;
si0+=si1;
si1=l4;
si2=48U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l6;
si1=24U;
si0+=si1;
si1=48U;
si0+=si1;
si1=l4;
si2=40U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l6;
si1=24U;
si0+=si1;
si1=40U;
si0+=si1;
si1=l4;
si2=32U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l6;
si1=24U;
si0+=si1;
si1=32U;
si0+=si1;
si1=l4;
si2=24U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l6;
si1=24U;
si0+=si1;
si1=24U;
si0+=si1;
si1=l4;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l6;
si1=24U;
si0+=si1;
si1=16U;
si0+=si1;
si1=l4;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l6;
sj1=4294967296ULL;
i64_store(&i->m0,(U64)si0+88U,sj1);
si0=l6;
sj1=1ULL;
i64_store(&i->m0,(U64)si0+24U,sj1);
si0=l6;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+32U,sj1);
si0=l6;
si1=1U;
i32_store(&i->m0,(U64)si0+96U,si1);
si0=l6;
si1=152U;
si0+=si1;
sj1=34359738376ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l6;
si1=108U;
si0+=si1;
si1=l6;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l6;
si1=0U;
i32_store(&i->m0,(U64)si0+112U,si1);
si0=l6;
si1=0U;
i32_store(&i->m0,(U64)si0+128U,si1);
si0=l6;
sj1=8ULL;
i64_store(&i->m0,(U64)si0+144U,sj1);
si0=l6;
si1=l6;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+100U,sj1);
si0=l0;
si1=l6;
si2=24U;
si1+=si2;
f3395(i,si0,si1);
si0=l5;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si1=-2U;
si0+=si1;
l4=si0;
si1=1U;
si2=l4;
si3=96U;
si2=si2 < si3;
si0=si2?si0:si1;
switch(si0){
case 0:
goto L10;
case 1:
goto L9;
case 2:
goto L6;
case 3:
goto L6;
case 4:
goto L8;
default:
goto L6;
}
L10:;
si0=l5;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L6;
}
goto L7;
L9:;
si0=l2;
si0=!(si0);
if(si0){
goto L6;
}
si0=l5;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L7;
}
goto L6;
L8:;
si0=l5;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L6;
}
L7:;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+4U);
f15271(i,si0);
L6:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si1=-2U;
si0+=si1;
l4=si0;
si1=1U;
si2=l4;
si3=96U;
si2=si2 < si3;
si0=si2?si0:si1;
switch(si0){
case 0:
goto L15;
case 1:
goto L14;
case 2:
goto L11;
case 3:
goto L11;
case 4:
goto L13;
default:
goto L11;
}
L15:;
si0=l1;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L11;
}
goto L12;
L14:;
si0=l2;
si0=!(si0);
if(si0){
goto L11;
}
si0=l1;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L12;
}
goto L11;
L13:;
si0=l1;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L11;
}
L12:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
f15271(i,si0);
L11:;
si0=l6;
si1=160U;
si0+=si1;
i->g0=si0;
L0:;
}

void f3223(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U32 si0,si1,si2,si3;
U64 sj1;
si0=i->g0;
si1=144U;
si0-=si1;
l4=si0;
i->g0=si0;
si0=l4;
si1=136U;
si0+=si1;
sj1=34359738376ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=64U;
si0+=si1;
si1=l2;
si2=48U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=8U;
si0+=si1;
si1=48U;
si0+=si1;
si1=l2;
si2=40U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=8U;
si0+=si1;
si1=40U;
si0+=si1;
si1=l2;
si2=32U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=8U;
si0+=si1;
si1=32U;
si0+=si1;
si1=l2;
si2=24U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=8U;
si0+=si1;
si1=24U;
si0+=si1;
si1=l2;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=8U;
si0+=si1;
si1=16U;
si0+=si1;
si1=l2;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
sj1=8ULL;
i64_store(&i->m0,(U64)si0+128U,sj1);
si0=l4;
si1=0U;
i32_store(&i->m0,(U64)si0+112U,si1);
si0=l4;
si1=0U;
i32_store(&i->m0,(U64)si0+96U,si1);
si0=l4;
sj1=1ULL;
i64_store(&i->m0,(U64)si0+80U,sj1);
si0=l4;
sj1=4294967296ULL;
i64_store(&i->m0,(U64)si0+72U,sj1);
si0=l4;
sj1=1ULL;
i64_store(&i->m0,(U64)si0+8U,sj1);
si0=l4;
si1=l2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+16U,sj1);
si0=l0;
si1=l4;
si2=8U;
si1+=si2;
f3395(i,si0,si1);
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
l0=si0;
si1=-2U;
si0+=si1;
l2=si0;
si1=1U;
si2=l2;
si3=96U;
si2=si2 < si3;
si0=si2?si0:si1;
switch(si0){
case 0:
goto L5;
case 1:
goto L4;
case 2:
goto L1;
case 3:
goto L1;
case 4:
goto L3;
default:
goto L1;
}
L5:;
si0=l3;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L1;
}
goto L2;
L4:;
si0=l0;
si0=!(si0);
if(si0){
goto L1;
}
si0=l3;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L2;
}
goto L1;
L3:;
si0=l3;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L1;
}
L2:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+4U);
f15271(i,si0);
L1:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si1=-2U;
si0+=si1;
l2=si0;
si1=1U;
si2=l2;
si3=96U;
si2=si2 < si3;
si0=si2?si0:si1;
switch(si0){
case 0:
goto L10;
case 1:
goto L9;
case 2:
goto L6;
case 3:
goto L6;
case 4:
goto L8;
default:
goto L6;
}
L10:;
si0=l1;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L6;
}
goto L7;
L9:;
si0=l3;
si0=!(si0);
if(si0){
goto L6;
}
si0=l1;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L7;
}
goto L6;
L8:;
si0=l1;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L6;
}
L7:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
f15271(i,si0);
L6:;
si0=l4;
si1=144U;
si0+=si1;
i->g0=si0;
L0:;
}

void f3224(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4,U32 l5,U32 l6) {
U32 l7=0;
U32 l8=0;
U32 l9=0;
U32 si0,si1,si2,si3;
U64 sj1;
si0=i->g0;
si1=160U;
si0-=si1;
l7=si0;
i->g0=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+16U);
l8=si0;
si0=l7;
si1=l2;
si1=i32_load(&i->m0,(U64)si1+12U);
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l7;
si1=44U;
si0+=si1;
si1=l7;
si2=20U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l7;
si1=l2;
si1=i32_load(&i->m0,(U64)si1);
l9=si1;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l7;
si1=l2;
si1=i32_load(&i->m0,(U64)si1+4U);
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l7;
si1=l9;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l2;
si0=i32_load(&i->m0,(U64)si0+8U);
l2=si0;
si0=l7;
si1=l8;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l7;
si1=l9;
si2=l2;
si3=48U;
si2*=si3;
si1+=si2;
i32_store(&i->m0,(U64)si0+36U,si1);
si0=l7;
si1=l7;
si2=16U;
si1+=si2;
i32_store(&i->m0,(U64)si0+40U,si1);
si0=l7;
si1=l7;
si2=24U;
si1+=si2;
f3377(i,si0,si1);
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
l9=si0;
si1=-2U;
si0+=si1;
l2=si0;
si1=1U;
si2=l2;
si3=96U;
si2=si2 < si3;
si0=si2?si0:si1;
switch(si0){
case 0:
goto L5;
case 1:
goto L4;
case 2:
goto L1;
case 3:
goto L1;
case 4:
goto L3;
default:
goto L1;
}
L5:;
si0=l3;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L1;
}
goto L2;
L4:;
si0=l9;
si0=!(si0);
if(si0){
goto L1;
}
si0=l3;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L2;
}
goto L1;
L3:;
si0=l3;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L1;
}
L2:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+4U);
f15271(i,si0);
L1:;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+8U);
l3=si0;
si0=l5;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+4U);
l5=si0;
si0=l7;
si1=24U;
si0+=si1;
si1=56U;
si0+=si1;
si1=l4;
si2=48U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l7;
si1=24U;
si0+=si1;
si1=48U;
si0+=si1;
si1=l4;
si2=40U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l7;
si1=24U;
si0+=si1;
si1=40U;
si0+=si1;
si1=l4;
si2=32U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l7;
si1=24U;
si0+=si1;
si1=32U;
si0+=si1;
si1=l4;
si2=24U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l7;
si1=24U;
si0+=si1;
si1=24U;
si0+=si1;
si1=l4;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l7;
si1=24U;
si0+=si1;
si1=16U;
si0+=si1;
si1=l4;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l7;
sj1=4294967296ULL;
i64_store(&i->m0,(U64)si0+88U,sj1);
si0=l7;
sj1=1ULL;
i64_store(&i->m0,(U64)si0+24U,sj1);
si0=l7;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+32U,sj1);
si0=l7;
si1=1U;
i32_store(&i->m0,(U64)si0+96U,si1);
si0=l7;
si1=148U;
si0+=si1;
si1=l5;
i32_store(&i->m0,(U64)si0,si1);
si0=l7;
si1=152U;
si0+=si1;
si1=l2;
i32_store(&i->m0,(U64)si0,si1);
si0=l7;
si1=156U;
si0+=si1;
si1=l2;
si2=l3;
si3=56U;
si2*=si3;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l7;
si1=108U;
si0+=si1;
si1=l7;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l7;
si1=0U;
i32_store(&i->m0,(U64)si0+112U,si1);
si0=l7;
si1=0U;
i32_store(&i->m0,(U64)si0+128U,si1);
si0=l7;
si1=l2;
i32_store(&i->m0,(U64)si0+144U,si1);
si0=l7;
si1=l7;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+100U,sj1);
si0=l0;
si1=l7;
si2=24U;
si1+=si2;
f3395(i,si0,si1);
si0=l6;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si1=-2U;
si0+=si1;
l4=si0;
si1=1U;
si2=l4;
si3=96U;
si2=si2 < si3;
si0=si2?si0:si1;
switch(si0){
case 0:
goto L10;
case 1:
goto L9;
case 2:
goto L6;
case 3:
goto L6;
case 4:
goto L8;
default:
goto L6;
}
L10:;
si0=l6;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L6;
}
goto L7;
L9:;
si0=l2;
si0=!(si0);
if(si0){
goto L6;
}
si0=l6;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L7;
}
goto L6;
L8:;
si0=l6;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L6;
}
L7:;
si0=l6;
si0=i32_load(&i->m0,(U64)si0+4U);
f15271(i,si0);
L6:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si1=-2U;
si0+=si1;
l4=si0;
si1=1U;
si2=l4;
si3=96U;
si2=si2 < si3;
si0=si2?si0:si1;
switch(si0){
case 0:
goto L15;
case 1:
goto L14;
case 2:
goto L11;
case 3:
goto L11;
case 4:
goto L13;
default:
goto L11;
}
L15:;
si0=l1;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L11;
}
goto L12;
L14:;
si0=l2;
si0=!(si0);
if(si0){
goto L11;
}
si0=l1;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L12;
}
goto L11;
L13:;
si0=l1;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L11;
}
L12:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
f15271(i,si0);
L11:;
si0=l7;
si1=160U;
si0+=si1;
i->g0=si0;
L0:;
}

void f3225(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4) {
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 si0,si1,si2,si3;
U64 sj1;
si0=i->g0;
si1=144U;
si0-=si1;
l5=si0;
i->g0=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+8U);
l6=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+4U);
l7=si0;
si0=l5;
si1=136U;
si0+=si1;
si1=l3;
si1=i32_load(&i->m0,(U64)si1);
l3=si1;
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=132U;
si0+=si1;
si1=l7;
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=8U;
si0+=si1;
si1=56U;
si0+=si1;
si1=l2;
si2=48U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=8U;
si0+=si1;
si1=48U;
si0+=si1;
si1=l2;
si2=40U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=8U;
si0+=si1;
si1=40U;
si0+=si1;
si1=l2;
si2=32U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=8U;
si0+=si1;
si1=32U;
si0+=si1;
si1=l2;
si2=24U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=8U;
si0+=si1;
si1=24U;
si0+=si1;
si1=l2;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=8U;
si0+=si1;
si1=16U;
si0+=si1;
si1=l2;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=140U;
si0+=si1;
si1=l3;
si2=l6;
si3=56U;
si2*=si3;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=l3;
i32_store(&i->m0,(U64)si0+128U,si1);
si0=l5;
si1=0U;
i32_store(&i->m0,(U64)si0+112U,si1);
si0=l5;
si1=0U;
i32_store(&i->m0,(U64)si0+96U,si1);
si0=l5;
sj1=1ULL;
i64_store(&i->m0,(U64)si0+80U,sj1);
si0=l5;
sj1=4294967296ULL;
i64_store(&i->m0,(U64)si0+72U,sj1);
si0=l5;
sj1=1ULL;
i64_store(&i->m0,(U64)si0+8U,sj1);
si0=l5;
si1=l2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+16U,sj1);
si0=l0;
si1=l5;
si2=8U;
si1+=si2;
f3395(i,si0,si1);
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si1=-2U;
si0+=si1;
l2=si0;
si1=1U;
si2=l2;
si3=96U;
si2=si2 < si3;
si0=si2?si0:si1;
switch(si0){
case 0:
goto L5;
case 1:
goto L4;
case 2:
goto L1;
case 3:
goto L1;
case 4:
goto L3;
default:
goto L1;
}
L5:;
si0=l4;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L1;
}
goto L2;
L4:;
si0=l3;
si0=!(si0);
if(si0){
goto L1;
}
si0=l4;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L2;
}
goto L1;
L3:;
si0=l4;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L1;
}
L2:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+4U);
f15271(i,si0);
L1:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si1=-2U;
si0+=si1;
l2=si0;
si1=1U;
si2=l2;
si3=96U;
si2=si2 < si3;
si0=si2?si0:si1;
switch(si0){
case 0:
goto L10;
case 1:
goto L9;
case 2:
goto L6;
case 3:
goto L6;
case 4:
goto L8;
default:
goto L6;
}
L10:;
si0=l1;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L6;
}
goto L7;
L9:;
si0=l3;
si0=!(si0);
if(si0){
goto L6;
}
si0=l1;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L7;
}
goto L6;
L8:;
si0=l1;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L6;
}
L7:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
f15271(i,si0);
L6:;
si0=l5;
si1=144U;
si0+=si1;
i->g0=si0;
L0:;
}

void f3226(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U64 l7=0;
U64 l8=0;
U32 si0,si1,si2;
U64 sj1;
si0=i->g0;
si1=64U;
si0-=si1;
l2=si0;
i->g0=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=0U;
l4=si0;
si0=l2;
si1=0U;
i32_store(&i->m0,(U64)si0+48U,si1);
si0=l2;
sj1=8ULL;
i64_store(&i->m0,(U64)si0+40U,sj1);
si0=8U;
l5=si0;
si0=0U;
l6=si0;
si0=l3;
si1=2U;
si0=si0 == si1;
if(si0){
goto L1;
}
si0=l2;
si1=40U;
si0+=si1;
si1=0U;
f3333(i,si0,si1);
si0=l2;
si0=i32_load(&i->m0,(U64)si0+40U);
si1=l2;
si1=i32_load(&i->m0,(U64)si1+48U);
l4=si1;
si2=72U;
si1*=si2;
si0+=si1;
l5=si0;
si1=l3;
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=4U;
si0+=si1;
si1=l1;
si2=4U;
si1+=si2;
si2=68U;
si0=f15390(i,si0,si1,si2);
si0=l4;
si1=1U;
si0+=si1;
l4=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+44U);
l6=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+40U);
l5=si0;
L1:;
si0=l2;
si1=l4;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l2;
si1=l6;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l2;
si1=l5;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=40U;
si0+=si1;
si1=l2;
f3476(i,si0,si1);
si0=l2;
si0=i32_load(&i->m0,(U64)si0+40U);
l1=si0;
si0=!(si0);
if(si0){
goto L3;
}
si0=l2;
si1=16U;
si0+=si1;
si1=16U;
si0+=si1;
si1=l2;
si2=60U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
l3=si1;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=16U;
si0+=si1;
si1=8U;
si0+=si1;
si1=l2;
si2=52U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
l7=sj1;
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=l2;
sj1=i64_load(&i->m0,(U64)si1+44U);
l8=sj1;
i64_store(&i->m0,(U64)si0+16U,sj1);
si0=l0;
si1=24U;
si0+=si1;
si1=l3;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=16U;
si0+=si1;
sj1=l7;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=8U;
si0+=si1;
sj1=l8;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=l1;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=5U;
l1=si0;
goto L2;
L3:;
si0=l2;
si1=32U;
si0+=si1;
si1=l2;
si2=40U;
si1+=si2;
si2=20U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
l1=si1;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=24U;
si0+=si1;
si1=l2;
si2=40U;
si1+=si2;
si2=12U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
l7=sj1;
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=l2;
sj1=i64_load(&i->m0,(U64)si1+44U);
l8=sj1;
i64_store(&i->m0,(U64)si0+16U,sj1);
si0=l0;
si1=20U;
si0+=si1;
si1=l1;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=12U;
si0+=si1;
sj1=l7;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
sj1=l8;
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=4U;
l1=si0;
L2:;
si0=l0;
si1=l1;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=64U;
si0+=si1;
i->g0=si0;
L0:;
}

void f3227(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U32 l4=0;
U32 l5=0;
U64 l6=0;
U64 l7=0;
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
sj1=8ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=40U;
si0+=si1;
si1=l3;
f3476(i,si0,si1);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+40U);
l4=si0;
si0=!(si0);
if(si0){
goto L2;
}
si0=l3;
si1=16U;
si0+=si1;
si1=16U;
si0+=si1;
si1=l3;
si2=60U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
l5=si1;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=16U;
si0+=si1;
si1=8U;
si0+=si1;
si1=l3;
si2=52U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
l6=sj1;
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=l3;
sj1=i64_load(&i->m0,(U64)si1+44U);
l7=sj1;
i64_store(&i->m0,(U64)si0+16U,sj1);
si0=l0;
si1=24U;
si0+=si1;
si1=l5;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=16U;
si0+=si1;
sj1=l6;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=8U;
si0+=si1;
sj1=l7;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=l4;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=5U;
l4=si0;
goto L1;
L2:;
si0=l3;
si1=32U;
si0+=si1;
si1=l3;
si2=40U;
si1+=si2;
si2=20U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
l4=si1;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=24U;
si0+=si1;
si1=l3;
si2=40U;
si1+=si2;
si2=12U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
l6=sj1;
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=l3;
sj1=i64_load(&i->m0,(U64)si1+44U);
l7=sj1;
i64_store(&i->m0,(U64)si0+16U,sj1);
si0=l0;
si1=20U;
si0+=si1;
si1=l4;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=12U;
si0+=si1;
sj1=l6;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
sj1=l7;
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=4U;
l4=si0;
L1:;
si0=l0;
si1=l4;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=64U;
si0+=si1;
i->g0=si0;
L0:;
}

void f3228(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U32 l4=0;
U32 l5=0;
U64 l6=0;
U64 l7=0;
U32 si0,si1,si2;
U64 sj1;
si0=i->g0;
si1=64U;
si0-=si1;
l3=si0;
i->g0=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
si0=l3;
si1=40U;
si0+=si1;
si1=8U;
si0+=si1;
si1=l1;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=l1;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+40U,sj1);
si0=l4;
si1=2U;
si0=si0 == si1;
if(si0){
goto L1;
}
si0=l2;
si1=4U;
si0+=si1;
l2=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+48U);
l1=si0;
si1=l3;
si1=i32_load(&i->m0,(U64)si1+44U);
si0=si0 != si1;
if(si0){
goto L2;
}
si0=l3;
si1=40U;
si0+=si1;
si1=l1;
f3333(i,si0,si1);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+48U);
l1=si0;
L2:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+40U);
si1=l1;
si2=72U;
si1*=si2;
si0+=si1;
l5=si0;
si1=l4;
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=4U;
si0+=si1;
si1=l2;
si2=68U;
si0=f15390(i,si0,si1,si2);
si0=l3;
si1=l1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0+48U,si1);
si0=l3;
si1=40U;
si0+=si1;
l1=si0;
L1:;
si0=l3;
si1=8U;
si0+=si1;
si1=l1;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=l1;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=40U;
si0+=si1;
si1=l3;
f3476(i,si0,si1);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+40U);
l1=si0;
si0=!(si0);
if(si0){
goto L4;
}
si0=l3;
si1=16U;
si0+=si1;
si1=16U;
si0+=si1;
si1=l3;
si2=60U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
l2=si1;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=16U;
si0+=si1;
si1=8U;
si0+=si1;
si1=l3;
si2=52U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
l6=sj1;
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=l3;
sj1=i64_load(&i->m0,(U64)si1+44U);
l7=sj1;
i64_store(&i->m0,(U64)si0+16U,sj1);
si0=l0;
si1=24U;
si0+=si1;
si1=l2;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=16U;
si0+=si1;
sj1=l6;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=8U;
si0+=si1;
sj1=l7;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=l1;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=5U;
l1=si0;
goto L3;
L4:;
si0=l3;
si1=32U;
si0+=si1;
si1=l3;
si2=40U;
si1+=si2;
si2=20U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
l1=si1;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=24U;
si0+=si1;
si1=l3;
si2=40U;
si1+=si2;
si2=12U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
l6=sj1;
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=l3;
sj1=i64_load(&i->m0,(U64)si1+44U);
l7=sj1;
i64_store(&i->m0,(U64)si0+16U,sj1);
si0=l0;
si1=20U;
si0+=si1;
si1=l1;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=12U;
si0+=si1;
sj1=l6;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
sj1=l7;
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=4U;
l1=si0;
L3:;
si0=l0;
si1=l1;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=64U;
si0+=si1;
i->g0=si0;
L0:;
}

void f3229(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 l3=0;
U64 l4=0;
U64 l5=0;
U32 si0,si1,si2;
U64 sj1;
si0=i->g0;
si1=64U;
si0-=si1;
l2=si0;
i->g0=si0;
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
si0=l2;
si1=40U;
si0+=si1;
si1=l2;
f3476(i,si0,si1);
si0=l2;
si0=i32_load(&i->m0,(U64)si0+40U);
l1=si0;
si0=!(si0);
if(si0){
goto L2;
}
si0=l2;
si1=16U;
si0+=si1;
si1=16U;
si0+=si1;
si1=l2;
si2=60U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
l3=si1;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=16U;
si0+=si1;
si1=8U;
si0+=si1;
si1=l2;
si2=52U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
l4=sj1;
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=l2;
sj1=i64_load(&i->m0,(U64)si1+44U);
l5=sj1;
i64_store(&i->m0,(U64)si0+16U,sj1);
si0=l0;
si1=24U;
si0+=si1;
si1=l3;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=16U;
si0+=si1;
sj1=l4;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=8U;
si0+=si1;
sj1=l5;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=l1;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=5U;
l1=si0;
goto L1;
L2:;
si0=l2;
si1=32U;
si0+=si1;
si1=l2;
si2=40U;
si1+=si2;
si2=20U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
l1=si1;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=16U;
si0+=si1;
si1=8U;
si0+=si1;
si1=l2;
si2=40U;
si1+=si2;
si2=12U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
l4=sj1;
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=l2;
sj1=i64_load(&i->m0,(U64)si1+44U);
l5=sj1;
i64_store(&i->m0,(U64)si0+16U,sj1);
si0=l0;
si1=20U;
si0+=si1;
si1=l1;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=12U;
si0+=si1;
sj1=l4;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
sj1=l5;
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=4U;
l1=si0;
L1:;
si0=l0;
si1=l1;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=64U;
si0+=si1;
i->g0=si0;
L0:;
}


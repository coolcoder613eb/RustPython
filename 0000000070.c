#include "w2c2_base.h"

#include "rustpython.h"

void f7030(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 l8=0;
U32 si0,si1,si2,si3;
si0=i->g0;
si1=16U;
si0-=si1;
l4=si0;
i->g0=si0;
si0=l4;
si1=8U;
si0+=si1;
si1=l3;
si2=l2;
f6134(i,si0,si1,si2);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+12U);
l3=si0;
si0=1U;
l5=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+8U);
l6=si0;
si1=2U;
si0=si0 == si1;
if(si0){
goto L1;
}
si0=0U;
l5=si0;
si0=l2;
si1=96U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=392U;
si0+=si1;
l7=si0;
si0=i32_load(&i->m0,(U64)si0);
l8=si0;
si0=l7;
si1=0U;
si2=l3;
si3=l6;
si1=si3?si1:si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l8;
si1=l2;
si0=f12593(i,si0,si1);
l3=si0;
L1:;
si0=l0;
si1=l3;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l5;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=16U;
si0+=si1;
i->g0=si0;
L0:;
}

void f7031(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 si0,si1,si2,si3,si4;
si0=i->g0;
si1=32U;
si0-=si1;
l4=si0;
i->g0=si0;
si0=l4;
si1=8U;
si0+=si1;
si1=l3;
si2=l2;
f6186(i,si0,si1,si2);
si0=1U;
l5=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+12U);
l3=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+8U);
si0=!(si0);
if(si0){
goto L3;
}
si0=l3;
l2=si0;
goto L2;
L3:;
si0=l3;
si1=64U;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=1U;
si0&=si1;
si0=!(si0);
if(si0){
goto L4;
}
si0=l3;
si1=60U;
si0+=si1;
l5=si0;
si1=l5;
si1=i32_load(&i->m0,(U64)si1);
si2=-1U;
si1+=si2;
l5=si1;
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
if(si0){
goto L4;
}
si0=l3;
si1=0U;
i32_store(&i->m0,(U64)si0+56U,si1);
si0=l3;
si1=0U;
si2=l3;
si2=i32_load8_u(&i->m0,(U64)si2+64U);
l5=si2;
si3=l5;
si4=1U;
si3=si3 == si4;
l5=si3;
si1=si3?si1:si2;
i32_store8(&i->m0,(U64)si0+64U,si1);
si0=l5;
if(si0){
goto L4;
}
si0=l3;
si1=64U;
si0+=si1;
si1=0U;
f1440(i,si0,si1);
L4:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+88U);
si1=1272U;
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
goto L1;
}
si0=l3;
si1=l3;
si1=i32_load(&i->m0,(U64)si1);
l6=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=0U;
l5=si0;
si0=l6;
si1=1U;
si0=si0 != si1;
if(si0){
goto L2;
}
si0=l3;
f7690(i,si0);
L2:;
si0=l0;
si1=l2;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l5;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=32U;
si0+=si1;
i->g0=si0;
goto L0;
L1:;
f15042(i);
UNREACHABLE;
L0:;
}

void f7032(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 si0,si1,si2;
si0=i->g0;
si1=16U;
si0-=si1;
l4=si0;
i->g0=si0;
si0=l4;
si1=8U;
si0+=si1;
si1=l3;
si2=l2;
f5588(i,si0,si1,si2);
si0=1U;
l5=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+12U);
l3=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+8U);
si0=!(si0);
if(si0){
goto L2;
}
si0=l3;
l6=si0;
goto L1;
L2:;
si0=l3;
si1=l2;
si0=f6727(i,si0,si1);
l6=si0;
si0=l3;
si1=l3;
si1=i32_load(&i->m0,(U64)si1);
l7=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=1U;
l5=si0;
si0=l7;
si1=1U;
si0=si0 != si1;
if(si0){
goto L3;
}
si0=l3;
f7690(i,si0);
L3:;
si0=l6;
if(si0){
goto L1;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0+88U);
si1=1272U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si1=l6;
si1=i32_load(&i->m0,(U64)si1);
l3=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=0U;
l5=si0;
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
si1=l6;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l5;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=16U;
si0+=si1;
i->g0=si0;
L0:;
}

void f7033(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 si0,si1,si2,si3,si4;
U64 sj0,sj1;
si0=i->g0;
si1=96U;
si0-=si1;
l3=si0;
i->g0=si0;
si0=l3;
si1=24U;
si0+=si1;
si1=l1;
si2=l2;
f7726(i,si0,si1,si2);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+28U);
l4=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+24U);
switch(si0){
case 0:
goto L4;
case 1:
goto L5;
case 2:
goto L6;
default:
goto L4;
}
L6:;
si0=l3;
si1=60U;
si0+=si1;
sj1=1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=2U;
i32_store(&i->m0,(U64)si0+52U,si1);
si0=l3;
si1=1659252U;
i32_store(&i->m0,(U64)si0+48U,si1);
si0=l3;
si1=1843U;
i32_store(&i->m0,(U64)si0+36U,si1);
si0=l3;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+28U);
i32_store(&i->m0,(U64)si0+72U,si1);
si0=l3;
si1=l3;
si2=32U;
si1+=si2;
i32_store(&i->m0,(U64)si0+56U,si1);
si0=l3;
si1=l3;
si2=72U;
si1+=si2;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l3;
si1=80U;
si0+=si1;
si1=l3;
si2=48U;
si1+=si2;
f63(i,si0,si1);
si0=l2;
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
si3=80U;
si2+=si3;
si0=f7173(i,si0,si1,si2);
l4=si0;
L5:;
si0=l0;
si1=1U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l4;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l1;
si1=l1;
si1=i32_load(&i->m0,(U64)si1);
l4=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=1U;
si0=si0 == si1;
if(si0){
goto L3;
}
goto L2;
L4:;
si0=l3;
si1=8U;
si0+=si1;
si1=l4;
si2=56U;
si1+=si2;
f5521(i,si0,si1);
si0=l3;
sj0=i64_load(&i->m0,(U64)si0+8U);
si0=(U32)(sj0);
l5=si0;
if(si0){
goto L8;
}
si0=l0;
si1=l3;
sj1=i64_load(&i->m0,(U64)si1+16U);
i64_store(&i->m0,(U64)si0+8U,sj1);
goto L7;
L8:;
si0=l3;
si1=80U;
si0+=si1;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+28U);
si2=56U;
si1+=si2;
f9877(i,si0,si1);
si0=l3;
si1=60U;
si0+=si1;
sj1=1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=847U;
i32_store(&i->m0,(U64)si0+76U,si1);
si0=l3;
si1=2U;
i32_store(&i->m0,(U64)si0+52U,si1);
si0=l3;
si1=1661316U;
i32_store(&i->m0,(U64)si0+48U,si1);
si0=l3;
si1=l3;
si2=80U;
si1+=si2;
i32_store(&i->m0,(U64)si0+72U,si1);
si0=l3;
si1=l3;
si2=72U;
si1+=si2;
i32_store(&i->m0,(U64)si0+56U,si1);
si0=l3;
si1=32U;
si0+=si1;
si1=l3;
si2=48U;
si1+=si2;
f63(i,si0,si1);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+80U);
switch(si0){
case 0:
goto L9;
case 1:
goto L12;
case 2:
goto L11;
case 3:
goto L10;
default:
goto L13;
}
L13:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+84U);
l6=si0;
si1=l6;
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
goto L9;
}
si0=l6;
f1433(i,si0);
goto L9;
L12:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+84U);
l6=si0;
si1=0U;
si2=l6;
si2=i32_load8_u(&i->m0,(U64)si2);
l7=si2;
si3=l7;
si4=1U;
si3=si3 == si4;
l7=si3;
si1=si3?si1:si2;
i32_store8(&i->m0,(U64)si0,si1);
si0=l7;
if(si0){
goto L9;
}
si0=l6;
si1=0U;
f1440(i,si0,si1);
goto L9;
L11:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+84U);
l6=si0;
si1=0U;
si2=l6;
si2=i32_load8_u(&i->m0,(U64)si2);
l7=si2;
si3=l7;
si4=1U;
si3=si3 == si4;
l7=si3;
si1=si3?si1:si2;
i32_store8(&i->m0,(U64)si0,si1);
si0=l7;
if(si0){
goto L9;
}
si0=l6;
si1=0U;
f1440(i,si0,si1);
goto L9;
L10:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+84U);
l6=si0;
si1=l6;
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
goto L9;
}
si0=l6;
f1433(i,si0);
L9:;
si0=l3;
si1=48U;
si0+=si1;
si1=8U;
si0+=si1;
si1=l3;
si2=32U;
si1+=si2;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=l3;
sj1=i64_load(&i->m0,(U64)si1+32U);
i64_store(&i->m0,(U64)si0+48U,sj1);
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
si0=l7;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 == si1;
if(si0){
goto L1;
}
si0=l0;
si1=l2;
si2=l6;
si3=l3;
si4=48U;
si3+=si4;
si1=f7173(i,si1,si2,si3);
i32_store(&i->m0,(U64)si0+4U,si1);
L7:;
si0=l0;
si1=l5;
si2=0U;
si1=si1 != si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=l4;
si1=i32_load(&i->m0,(U64)si1);
l2=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=1U;
si0=si0 != si1;
if(si0){
goto L14;
}
si0=l4;
f7690(i,si0);
L14:;
si0=l1;
si1=l1;
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
L3:;
si0=l1;
f7690(i,si0);
L2:;
si0=l3;
si1=96U;
si0+=si1;
i->g0=si0;
goto L0;
L1:;
f15042(i);
UNREACHABLE;
L0:;
}

void f7034(rustpythonInstance*i,U32 l0,U32 l1,U64 l2,U32 l3,U32 l4) {
U32 l5=0;
U32 l6=0;
U32 l7=0;
U64 l8=0;
U64 l9=0;
U64 l10=0;
U64 l11=0;
U64 l12=0;
U32 si0,si1,si2,si3,si4;
U64 sj0,sj1,sj2,sj3,sj4;
si0=i->g0;
si1=16U;
si0-=si1;
l5=si0;
i->g0=si0;
si0=l1;
si0=i32_load8_u(&i->m0,(U64)si0+64U);
l6=si0;
si0=l3;
si1=1U;
si0=si0 > si1;
if(si0){
goto L2;
}
si0=l6;
si1=4U;
si0&=si1;
l7=si0;
si0=!(si0);
if(si0){
goto L2;
}
si0=l1;
sj0=i64_load(&i->m0,(U64)si0);
l8=sj0;
sj1=-1ULL;
si0=sj0 != sj1;
if(si0){
goto L4;
}
si0=l5;
si1=l1;
si2=l4;
f6998(i,si0,si1,si2);
si0=l5;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L3;
}
si0=l5;
sj0=i64_load(&i->m0,(U64)si0+8U);
l8=sj0;
si0=l1;
si0=i32_load8_u(&i->m0,(U64)si0+64U);
l6=si0;
si1=4U;
si0&=si1;
l7=si0;
L4:;
si0=l1;
sj0=i64_load(&i->m0,(U64)si0+24U);
l9=sj0;
si1=l1;
sj1=i64_load(&i->m0,(U64)si1+8U);
l10=sj1;
sj0-=sj1;
sj1=0ULL;
si2=l7;
si3=0U;
si2=si2 != si3;
sj3=l9;
sj4=-1ULL;
si3=sj3 != sj4;
si2&=si3;
l7=si2;
sj0=si2?sj0:sj1;
l11=sj0;
sj1=0ULL;
si0=(U64)((I64)sj0<=(I64)sj1);
if(si0){
goto L2;
}
sj0=l2;
l9=sj0;
si0=l3;
if(si0){
goto L5;
}
si0=l7;
if(si0){
goto L8;
}
sj0=0ULL;
l9=sj0;
si0=l6;
si1=2U;
si0&=si1;
si0=!(si0);
if(si0){
goto L6;
}
si0=l1;
sj0=i64_load(&i->m0,(U64)si0+40U);
sj1=-1ULL;
si0=sj0 == sj1;
if(si0){
goto L6;
}
si0=l1;
sj0=i64_load(&i->m0,(U64)si0+16U);
l12=sj0;
sj1=-1ULL;
si0=(U64)((I64)sj0>(I64)sj1);
if(si0){
goto L7;
}
goto L6;
L8:;
sj0=0ULL;
l9=sj0;
si0=l1;
sj0=i64_load(&i->m0,(U64)si0+16U);
l12=sj0;
sj1=0ULL;
si0=(U64)((I64)sj0<(I64)sj1);
if(si0){
goto L6;
}
L7:;
sj0=l12;
sj1=l10;
sj0-=sj1;
l9=sj0;
L6:;
sj0=l2;
sj1=l8;
sj0-=sj1;
sj1=l9;
sj0+=sj1;
l9=sj0;
L5:;
sj0=l9;
sj1=0ULL;
sj2=l10;
sj1-=sj2;
si0=(U64)((I64)sj0<(I64)sj1);
if(si0){
goto L2;
}
sj0=l9;
sj1=l11;
si0=(U64)((I64)sj0>(I64)sj1);
if(si0){
goto L2;
}
si0=l1;
sj1=l9;
sj2=l10;
sj1+=sj2;
i64_store(&i->m0,(U64)si0+8U,sj1);
si0=l0;
sj1=l8;
sj2=l11;
sj1-=sj2;
sj2=l9;
sj1+=sj2;
i64_store(&i->m0,(U64)si0+8U,sj1);
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
goto L1;
L3:;
si0=l0;
si1=l5;
si1=i32_load(&i->m0,(U64)si1+4U);
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=1U;
i32_store(&i->m0,(U64)si0,si1);
goto L1;
L2:;
si0=l6;
si1=2U;
si0&=si1;
si0=!(si0);
if(si0){
goto L9;
}
si0=l1;
si1=l4;
si0=f6979(i,si0,si1);
l6=si0;
si0=!(si0);
if(si0){
goto L9;
}
si0=l0;
si1=1U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l6;
i32_store(&i->m0,(U64)si0+4U,si1);
goto L1;
L9:;
si0=l3;
si1=1U;
si0=si0 != si1;
if(si0){
goto L11;
}
si0=l1;
si0=i32_load8_u(&i->m0,(U64)si0+64U);
l3=si0;
si1=4U;
si0&=si1;
si0=!(si0);
if(si0){
goto L15;
}
si0=l1;
sj0=i64_load(&i->m0,(U64)si0+24U);
sj1=-1ULL;
si0=sj0 != sj1;
if(si0){
goto L14;
}
L15:;
sj0=0ULL;
l9=sj0;
si0=l3;
si1=2U;
si0&=si1;
si0=!(si0);
if(si0){
goto L12;
}
si0=l1;
sj0=i64_load(&i->m0,(U64)si0+40U);
sj1=-1ULL;
si0=sj0 == sj1;
if(si0){
goto L12;
}
si0=l1;
sj0=i64_load(&i->m0,(U64)si0+16U);
l10=sj0;
sj1=-1ULL;
si0=(U64)((I64)sj0>(I64)sj1);
if(si0){
goto L13;
}
goto L12;
L14:;
sj0=0ULL;
l9=sj0;
si0=l1;
sj0=i64_load(&i->m0,(U64)si0+16U);
l10=sj0;
sj1=0ULL;
si0=(U64)((I64)sj0<(I64)sj1);
if(si0){
goto L12;
}
L13:;
si0=l1;
sj0=i64_load(&i->m0,(U64)si0+8U);
sj1=l10;
sj0-=sj1;
l9=sj0;
L12:;
si0=l5;
si1=l1;
sj2=l9;
sj3=l2;
sj2+=sj3;
si3=1U;
si4=l4;
f6988(i,si0,si1,sj2,si3,si4);
goto L10;
L11:;
si0=l5;
si1=l1;
sj2=l2;
si3=l3;
si4=l4;
f6988(i,si0,si1,sj2,si3,si4);
L10:;
si0=l1;
sj1=-1ULL;
i64_store(&i->m0,(U64)si0+16U,sj1);
si0=l5;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L16;
}
si0=l1;
si0=i32_load8_u(&i->m0,(U64)si0+64U);
si1=4U;
si0&=si1;
si0=!(si0);
if(si0){
goto L16;
}
si0=l1;
sj1=-1ULL;
i64_store(&i->m0,(U64)si0+24U,sj1);
L16:;
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
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
L1:;
si0=l5;
si1=16U;
si0+=si1;
i->g0=si0;
L0:;
}

void f7035(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 si0,si1,si2;
si0=i->g0;
si1=16U;
si0-=si1;
l4=si0;
i->g0=si0;
si0=l4;
si1=8U;
si0+=si1;
si1=l3;
si2=l2;
f5919(i,si0,si1,si2);
si0=1U;
l5=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+12U);
l3=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+8U);
si0=!(si0);
if(si0){
goto L2;
}
si0=l3;
l2=si0;
goto L1;
L2:;
si0=l4;
si1=l3;
si2=56U;
si1+=si2;
si2=l2;
f6531(i,si0,si1,si2);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+4U);
l2=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
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
goto L1;
}
si0=l3;
f7690(i,si0);
L1:;
si0=l0;
si1=l2;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l5;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=16U;
si0+=si1;
i->g0=si0;
L0:;
}

void f7036(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 si0,si1,si2,si3,si4;
si0=i->g0;
si1=16U;
si0-=si1;
l4=si0;
i->g0=si0;
si0=l4;
si1=8U;
si0+=si1;
si1=l3;
si2=l2;
f6186(i,si0,si1,si2);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+12U);
l3=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+8U);
l5=si0;
si0=!(si0);
if(si0){
goto L3;
}
si0=l3;
l2=si0;
goto L2;
L3:;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967832U);
if(si0){
goto L4;
}
si0=0U;
si1=1U;
i32_store16(&i->m0,(U64)si0+2967832U,si1);
L4:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+88U);
si1=1264U;
si2=1268U;
si3=l3;
si3=i32_load(&i->m0,(U64)si3+56U);
si4=2967833U;
si3=si3 == si4;
si1=si3?si1:si2;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
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
si0=si0 == si1;
if(si0){
goto L1;
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
goto L2;
}
si0=l3;
f7690(i,si0);
L2:;
si0=l0;
si1=l2;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l5;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=16U;
si0+=si1;
i->g0=si0;
goto L0;
L1:;
f15042(i);
UNREACHABLE;
L0:;
}

void f7037(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 si0,si1,si2,si3;
si0=i->g0;
si1=16U;
si0-=si1;
l4=si0;
i->g0=si0;
si0=l4;
si1=8U;
si0+=si1;
si1=l3;
si2=l2;
f6192(i,si0,si1,si2);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+12U);
l5=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+8U);
l3=si0;
if(si0){
goto L2;
}
si0=l5;
l2=si0;
goto L1;
L2:;
si0=l2;
si1=l3;
si2=1661574U;
si3=5U;
si0=f6580(i,si0,si1,si2,si3);
l2=si0;
si0=l5;
si0=!(si0);
if(si0){
goto L3;
}
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
goto L3;
}
si0=l5;
f7690(i,si0);
L3:;
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
goto L1;
}
si0=l3;
f7690(i,si0);
L1:;
si0=l0;
si1=l2;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=1U;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=16U;
si0+=si1;
i->g0=si0;
L0:;
}

void f7038(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 si0,si1,si2,si3,si4;
si0=i->g0;
si1=16U;
si0-=si1;
l4=si0;
i->g0=si0;
si0=l4;
si1=8U;
si0+=si1;
si1=l3;
si2=l2;
f6179(i,si0,si1,si2);
si0=1U;
l5=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+12U);
l3=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+8U);
si0=!(si0);
if(si0){
goto L3;
}
si0=l3;
l2=si0;
goto L2;
L3:;
si0=l3;
si0=i32_load8_u(&i->m0,(U64)si0+56U);
si1=1U;
si0&=si1;
si0=!(si0);
if(si0){
goto L4;
}
si0=l3;
si1=0U;
si2=l3;
si2=i32_load8_u(&i->m0,(U64)si2+56U);
l5=si2;
si3=l5;
si4=1U;
si3=si3 == si4;
l5=si3;
si1=si3?si1:si2;
i32_store8(&i->m0,(U64)si0+56U,si1);
si0=l5;
if(si0){
goto L4;
}
si0=l3;
si1=56U;
si0+=si1;
si1=0U;
f1440(i,si0,si1);
L4:;
si0=0U;
l5=si0;
si0=l3;
si1=0U;
i32_store8(&i->m0,(U64)si0+56U,si1);
si0=l2;
si0=i32_load(&i->m0,(U64)si0+88U);
si1=1272U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
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
si0=si0 == si1;
if(si0){
goto L1;
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
goto L2;
}
si0=l3;
f7690(i,si0);
L2:;
si0=l0;
si1=l2;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l5;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=16U;
si0+=si1;
i->g0=si0;
goto L0;
L1:;
f15042(i);
UNREACHABLE;
L0:;
}

void f7039(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U32 si0,si1;
si0=1U;
l4=si0;
si0=l3;
si1=l2;
si0=f5689(i,si0,si1);
l3=si0;
if(si0){
goto L1;
}
si0=0U;
l4=si0;
si0=l2;
si1=96U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=396U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=l2;
si0=f12593(i,si0,si1);
l3=si0;
L1:;
si0=l0;
si1=l3;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l4;
i32_store(&i->m0,(U64)si0,si1);
L0:;
}

void f7040(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U32 l5=0;
F64 l6=0;
F64 l7=0;
U32 l8=0;
U32 l9=0;
U32 si0,si1,si2;
U64 sj1;
F64 sd0,sd1;
si0=i->g0;
si1=32U;
si0-=si1;
l4=si0;
i->g0=si0;
si0=l4;
si1=8U;
si0+=si1;
si1=l3;
si2=l2;
f6058(i,si0,si1,si2);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+12U);
l3=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+8U);
l5=si0;
si0=!(si0);
if(si0){
goto L3;
}
si0=l3;
l2=si0;
goto L2;
L3:;
si0=l3;
si1=64U;
si0+=si1;
sd0=f64_load(&i->m0,(U64)si0);
l6=sd0;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=l3;
si1=56U;
si0+=si1;
sd0=f64_load(&i->m0,(U64)si0);
l7=sd0;
si0=8U;
si0=f15269(i,si0);
l8=si0;
si0=!(si0);
if(si0){
goto L1;
}
sd0=l7;
si1=l2;
si0=f12206(i,sd0,si1);
l9=si0;
si0=l8;
sd1=l6;
si2=l2;
si1=f12206(i,sd1,si2);
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l8;
si1=l9;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
sj1=8589934594ULL;
i64_store(&i->m0,(U64)si0+20U,sj1);
si0=l4;
si1=l8;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l4;
si1=16U;
si0+=si1;
si1=l2;
si1=i32_load(&i->m0,(U64)si1+88U);
si2=8U;
si1+=si2;
si0=f5724(i,si0,si1);
l2=si0;
si0=l3;
si1=l3;
si1=i32_load(&i->m0,(U64)si1);
l8=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l8;
si1=1U;
si0=si0 != si1;
if(si0){
goto L2;
}
si0=l3;
f7690(i,si0);
L2:;
si0=l0;
si1=l2;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l5;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=32U;
si0+=si1;
i->g0=si0;
goto L0;
L1:;
si0=4U;
si1=8U;
f52(i,si0,si1);
UNREACHABLE;
L0:;
}

void f7041(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 si0,si1,si2,si3;
si0=i->g0;
si1=16U;
si0-=si1;
l4=si0;
i->g0=si0;
si0=l4;
si1=l3;
si2=l2;
f5973(i,si0,si1,si2);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+4U);
l3=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
if(si0){
goto L2;
}
si0=1U;
l6=si0;
goto L1;
L2:;
si0=l5;
si1=l3;
si2=l4;
si2=i32_load(&i->m0,(U64)si2+8U);
si3=l2;
si0=f6570(i,si0,si1,si2,si3);
l3=si0;
si0=l5;
si1=l5;
si1=i32_load(&i->m0,(U64)si1);
l7=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=1U;
l6=si0;
si0=l7;
si1=1U;
si0=si0 != si1;
if(si0){
goto L3;
}
si0=l5;
f7690(i,si0);
L3:;
si0=l3;
if(si0){
goto L1;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0+88U);
si1=1272U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si1=l3;
si1=i32_load(&i->m0,(U64)si1);
l5=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=0U;
l6=si0;
si0=l5;
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
si1=l3;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l6;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=16U;
si0+=si1;
i->g0=si0;
L0:;
}

void f7042(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4) {
U32 l5=0;
U64 l6=0;
U64 l7=0;
U32 l8=0;
U32 si0,si1,si2,si3,si4;
U64 sj1,sj2,sj3,sj4;
si0=i->g0;
si1=48U;
si0-=si1;
l5=si0;
i->g0=si0;
si0=l2;
if(si0){
goto L2;
}
si0=l5;
si1=0U;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l5;
sj1=1ULL;
i64_store(&i->m0,(U64)si0+16U,sj1);
si0=l5;
si1=32U;
si0+=si1;
si1=l1;
si2=10U;
si3=l5;
si4=16U;
si3+=si4;
f8409(i,si0,si1,si2,si3);
si0=l5;
si0=i32_load8_u(&i->m0,(U64)si0+32U);
si1=4U;
si0=si0 == si1;
if(si0){
goto L3;
}
si0=l5;
si1=l5;
sj1=i64_load(&i->m0,(U64)si1+32U);
i64_store(&i->m0,(U64)si0+40U,sj1);
si0=l5;
si1=40U;
si0+=si1;
si1=l4;
si0=f12100(i,si0,si1);
l3=si0;
si0=l5;
si0=i32_load8_u(&i->m0,(U64)si0+40U);
si1=3U;
si0=si0 != si1;
if(si0){
goto L4;
}
si0=l5;
si0=i32_load(&i->m0,(U64)si0+44U);
l1=si0;
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
goto L5;
}
si0=l4;
f15271(i,si0);
L5:;
si0=l1;
f15271(i,si0);
L4:;
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l3;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l5;
si0=i32_load(&i->m0,(U64)si0+20U);
si0=!(si0);
if(si0){
goto L1;
}
si0=l5;
si0=i32_load(&i->m0,(U64)si0+16U);
f15271(i,si0);
goto L1;
L3:;
si0=l0;
si1=l5;
sj1=i64_load(&i->m0,(U64)si1+16U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=8U;
si0+=si1;
si1=l5;
si2=16U;
si1+=si2;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
goto L1;
L2:;
si0=l3;
si0=!(si0);
if(si0){
goto L6;
}
si0=l1;
si1=16U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si1=l1;
sj1=i64_load(&i->m0,(U64)si1);
l6=sj1;
si2=l2;
sj2=(U64)(si2);
l7=sj2;
sj3=l6;
sj4=l7;
si3=sj3 < sj4;
sj1=si3?sj1:sj2;
si1=(U32)(sj1);
l4=si1;
si0=si0 < si1;
if(si0){
goto L12;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+8U);
si1=l4;
si0+=si1;
l8=si0;
si0=l2;
si1=l4;
si0-=si1;
l2=si0;
si1=l3;
si0=si0 > si1;
if(si0){
goto L15;
}
si0=l2;
l3=si0;
si0=l2;
if(si0){
goto L15;
}
si0=1U;
l4=si0;
si0=0U;
l2=si0;
goto L14;
L15:;
si0=l5;
si1=8U;
si0+=si1;
si1=10U;
si2=l8;
si3=l3;
f1413(i,si0,si1,si2,si3);
si0=l5;
si0=i32_load(&i->m0,(U64)si0+8U);
si1=1U;
si0=si0 != si1;
if(si0){
goto L16;
}
si0=l5;
si0=i32_load(&i->m0,(U64)si0+12U);
l4=si0;
si1=-1U;
si0=si0 == si1;
if(si0){
goto L11;
}
si0=l4;
si1=1U;
si0+=si1;
l2=si0;
si0=l4;
si1=l3;
si0=si0 >= si1;
if(si0){
goto L10;
}
si0=l2;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L9;
}
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=l2;
si0=f15269(i,si0);
l4=si0;
si0=!(si0);
if(si0){
goto L8;
}
si0=l4;
si1=l8;
si2=l2;
si0=f15390(i,si0,si1,si2);
goto L13;
L16:;
si0=l3;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L9;
}
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=l3;
si0=f15269(i,si0);
l4=si0;
si0=!(si0);
if(si0){
goto L7;
}
si0=l3;
l2=si0;
L14:;
si0=l4;
si1=l8;
si2=l2;
si0=f15390(i,si0,si1,si2);
L13:;
si0=l0;
si1=l2;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l0;
si1=l2;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l4;
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
sj1=l6;
si2=l2;
sj2=(U64)(si2);
sj1+=sj2;
i64_store(&i->m0,(U64)si0,sj1);
goto L1;
L12:;
si0=l4;
si1=l2;
si2=1894464U;
f662(i,si0,si1,si2);
UNREACHABLE;
L11:;
si0=1660240U;
f754(i,si0);
UNREACHABLE;
L10:;
si0=l2;
si1=l3;
si2=1660240U;
f666(i,si0,si1,si2);
UNREACHABLE;
L9:;
f53(i);
UNREACHABLE;
L8:;
si0=1U;
si1=l2;
f52(i,si0,si1);
UNREACHABLE;
L7:;
si0=1U;
si1=l3;
f52(i,si0,si1);
UNREACHABLE;
L6:;
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l0;
sj1=1ULL;
i64_store(&i->m0,(U64)si0,sj1);
L1:;
si0=l5;
si1=48U;
si0+=si1;
i->g0=si0;
L0:;
}

void f7043(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 si0,si1,si2,si3,si4,si5;
F64 sd3,sd4,sd5;
si0=i->g0;
si1=16U;
si0-=si1;
l4=si0;
i->g0=si0;
si0=l4;
si1=8U;
si0+=si1;
si1=l3;
si2=l2;
f6058(i,si0,si1,si2);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+12U);
l3=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+8U);
l5=si0;
si0=!(si0);
if(si0){
goto L3;
}
si0=l3;
l2=si0;
goto L2;
L3:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+88U);
si1=1264U;
si2=1264U;
si3=1268U;
si4=l3;
si5=64U;
si4+=si5;
sd4=f64_load(&i->m0,(U64)si4);
sd5=0;
si4=sd4 != sd5;
si2=si4?si2:si3;
si3=l3;
si4=56U;
si3+=si4;
sd3=f64_load(&i->m0,(U64)si3);
sd4=0;
si3=sd3 != sd4;
si1=si3?si1:si2;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
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
si0=si0 == si1;
if(si0){
goto L1;
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
goto L2;
}
si0=l3;
f7690(i,si0);
L2:;
si0=l0;
si1=l2;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l5;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=16U;
si0+=si1;
i->g0=si0;
goto L0;
L1:;
f15042(i);
UNREACHABLE;
L0:;
}

void f7044(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 si0,si1,si2;
si0=i->g0;
si1=16U;
si0-=si1;
l4=si0;
i->g0=si0;
si0=l4;
si1=8U;
si0+=si1;
si1=l3;
si2=l2;
f5919(i,si0,si1,si2);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+12U);
l3=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+8U);
l5=si0;
si0=!(si0);
if(si0){
goto L3;
}
si0=l3;
l2=si0;
goto L2;
L3:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+88U);
si1=1264U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
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
si0=si0 == si1;
if(si0){
goto L1;
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
goto L2;
}
si0=l3;
f7690(i,si0);
L2:;
si0=l0;
si1=l2;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l5;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=16U;
si0+=si1;
i->g0=si0;
goto L0;
L1:;
f15042(i);
UNREACHABLE;
L0:;
}

void f7045(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U32 l5=0;
F64 l6=0;
F64 l7=0;
U32 l8=0;
U32 si0,si1,si2,si3;
F64 sd0,sd1;
si0=i->g0;
si1=16U;
si0-=si1;
l4=si0;
i->g0=si0;
si0=l4;
si1=8U;
si0+=si1;
si1=l3;
si2=l2;
f6058(i,si0,si1,si2);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+12U);
l3=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+8U);
l5=si0;
si0=!(si0);
if(si0){
goto L3;
}
si0=l3;
l2=si0;
goto L2;
L3:;
si0=l3;
si1=64U;
si0+=si1;
sd0=f64_load(&i->m0,(U64)si0);
l6=sd0;
si0=l3;
si1=56U;
si0+=si1;
sd0=f64_load(&i->m0,(U64)si0);
l7=sd0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+88U);
si1=108U;
si0+=si1;
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
goto L1;
}
sd0=l7;
sd1=l6;
sd1=-(sd1);
si2=l2;
si3=0U;
si0=f8099(i,sd0,sd1,si2,si3);
l2=si0;
si0=l3;
si1=l3;
si1=i32_load(&i->m0,(U64)si1);
l8=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l8;
si1=1U;
si0=si0 != si1;
if(si0){
goto L2;
}
si0=l3;
f7690(i,si0);
L2:;
si0=l0;
si1=l2;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l5;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=16U;
si0+=si1;
i->g0=si0;
goto L0;
L1:;
f15042(i);
UNREACHABLE;
L0:;
}

void f7046(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 si0,si1,si2,si3;
si0=i->g0;
si1=16U;
si0-=si1;
l4=si0;
i->g0=si0;
si0=l4;
si1=8U;
si0+=si1;
si1=l3;
si2=l2;
f5687(i,si0,si1,si2);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+12U);
l5=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+8U);
l3=si0;
if(si0){
goto L2;
}
si0=l5;
l2=si0;
goto L1;
L2:;
si0=l2;
si1=l3;
si2=1660636U;
si3=5U;
si0=f6580(i,si0,si1,si2,si3);
l2=si0;
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
goto L3;
}
si0=l5;
f7690(i,si0);
L3:;
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
goto L1;
}
si0=l3;
f7690(i,si0);
L1:;
si0=l0;
si1=l2;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=1U;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=16U;
si0+=si1;
i->g0=si0;
L0:;
}

void f7047(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U32 l5=0;
U32 si0,si1,si2,si3,si4,si5;
U64 sj1;
si0=i->g0;
si1=48U;
si0-=si1;
l4=si0;
i->g0=si0;
si0=l4;
si1=16U;
si0+=si1;
si1=l3;
si2=l2;
f5588(i,si0,si1,si2);
si0=1U;
l5=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+20U);
l3=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+16U);
if(si0){
goto L1;
}
si0=l4;
si1=1U;
i32_store8(&i->m0,(U64)si0+44U,si1);
si0=l4;
sj1=0ULL;
i64_store(&i->m0,(U64)si0+32U,sj1);
si0=l4;
sj1=4294967295ULL;
i64_store(&i->m0,(U64)si0+24U,sj1);
si0=l4;
si1=0U;
i32_store(&i->m0,(U64)si0+40U,si1);
si0=l4;
si1=8U;
si0+=si1;
si1=l3;
si2=1661868U;
si3=2U;
si4=l4;
si5=24U;
si4+=si5;
si5=l2;
f6606(i,si0,si1,si2,si3,si4,si5);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+12U);
l3=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+8U);
l5=si0;
L1:;
si0=l0;
si1=l3;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l5;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=48U;
si0+=si1;
i->g0=si0;
L0:;
}

void f7048(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U32 l5=0;
U32 l6=0;
F64 l7=0;
F64 l8=0;
U32 l9=0;
U32 l10=0;
U32 si0,si1,si2,si3;
U64 sj1;
F64 sd0,sd1;
si0=i->g0;
si1=48U;
si0-=si1;
l4=si0;
i->g0=si0;
si0=l4;
si1=l3;
si2=l2;
f6058(i,si0,si1,si2);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+4U);
l3=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si0=!(si0);
if(si0){
goto L4;
}
si0=l3;
l2=si0;
goto L3;
L4:;
si0=l2;
si1=88U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si1=108U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si1=l3;
si0=si0 != si1;
if(si0){
goto L5;
}
si0=l3;
l2=si0;
goto L3;
L5:;
si0=l3;
si1=64U;
si0+=si1;
sd0=f64_load(&i->m0,(U64)si0);
l7=sd0;
si0=l3;
sd0=f64_load(&i->m0,(U64)si0+56U);
l8=sd0;
si0=l2;
si1=l2;
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
goto L2;
}
si0=0U;
l9=si0;
si0=l2;
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
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=64U;
si0=f15269(i,si0);
l9=si0;
si0=!(si0);
if(si0){
goto L1;
}
si0=l9;
sj1=-1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l9;
si1=56U;
si0+=si1;
sj1=-1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l9;
si1=48U;
si0+=si1;
sj1=-1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l9;
si1=40U;
si0+=si1;
sj1=-1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l9;
si1=32U;
si0+=si1;
sj1=-1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l9;
si1=24U;
si0+=si1;
sj1=-1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l9;
si1=16U;
si0+=si1;
sj1=-1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=8U;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l9;
si1=8U;
si0+=si1;
sj1=-1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=36U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l6;
si1=68U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si1=l6;
si1=i32_load(&i->m0,(U64)si1);
l10=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
sj1=0ULL;
i64_store(&i->m0,(U64)si0+28U,sj1);
si0=l4;
sj1=34359738376ULL;
i64_store(&i->m0,(U64)si0+16U,sj1);
si0=l4;
si1=l9;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l4;
si1=0U;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l10;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 == si1;
if(si0){
goto L2;
}
si0=l4;
si1=8U;
si0+=si1;
si1=l6;
si2=0U;
si0=f8146(i,si0,si1,si2);
l9=si0;
L6:;
sd0=l8;
sd1=l7;
si2=l2;
si3=l9;
si0=f8099(i,sd0,sd1,si2,si3);
l2=si0;
si0=l3;
si1=l3;
si1=i32_load(&i->m0,(U64)si1);
l9=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l9;
si1=1U;
si0=si0 != si1;
if(si0){
goto L3;
}
si0=l3;
f7690(i,si0);
L3:;
si0=l0;
si1=l2;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l5;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=48U;
si0+=si1;
i->g0=si0;
goto L0;
L2:;
f15042(i);
UNREACHABLE;
L1:;
si0=8U;
si1=64U;
f52(i,si0,si1);
UNREACHABLE;
L0:;
}

void f7049(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4) {
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 l8=0;
U32 l9=0;
U32 l10=0;
U64 l11=0;
U32 si0,si1,si2,si3,si4;
U64 sj1,sj2;
si0=i->g0;
si1=48U;
si0-=si1;
l5=si0;
i->g0=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+88U);
l6=si0;
si1=1208U;
si0+=si1;
l7=si0;
si0=i32_load(&i->m0,(U64)si0);
l8=si0;
si1=8U;
si0&=si1;
if(si0){
goto L2;
}
si0=l8;
si1=16U;
si0+=si1;
l9=si0;
si1=l8;
si0=si0 < si1;
if(si0){
goto L2;
}
si0=l6;
si1=l9;
si2=l6;
si2=i32_load(&i->m0,(U64)si2+1208U);
l10=si2;
si3=l10;
si4=l8;
si3=si3 == si4;
si1=si3?si1:si2;
i32_store(&i->m0,(U64)si0+1208U,si1);
si0=l10;
si1=l8;
si0=si0 == si1;
if(si0){
goto L1;
}
L2:;
si0=l7;
si1=0U;
sj2=l11;
si3=1000000000U;
si0=f1432(i,si0,si1,sj2,si3);
L1:;
si0=l6;
si1=1216U;
si0+=si1;
si1=1661728U;
si2=6U;
si0=f13453(i,si0,si1,si2);
l8=si0;
if(si0){
goto L4;
}
si0=0U;
l8=si0;
goto L3;
L4:;
si0=l8;
si0=i32_load(&i->m0,(U64)si0);
l8=si0;
L3:;
si0=l6;
si1=l6;
si1=i32_load(&i->m0,(U64)si1+1208U);
l10=si1;
si2=-16U;
si1+=si2;
i32_store(&i->m0,(U64)si0+1208U,si1);
si0=l10;
si1=-14U;
si0&=si1;
si1=18U;
si0=si0 != si1;
if(si0){
goto L5;
}
si0=l6;
si1=1208U;
si0+=si1;
f1433(i,si0);
L5:;
si0=l8;
l6=si0;
si0=l8;
if(si0){
goto L11;
}
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+88U);
l10=si0;
si0=6U;
si0=f15269(i,si0);
l6=si0;
si0=!(si0);
if(si0){
goto L10;
}
si0=l6;
si1=4U;
si0+=si1;
si1=0U;
si1=i32_load16_u(&i->m0,(U64)si1+1661732U);
i32_store16(&i->m0,(U64)si0,si1);
si0=l6;
si1=0U;
si1=i32_load(&i->m0,(U64)si1+1661728U);
i32_store(&i->m0,(U64)si0,si1);
si0=1U;
l9=si0;
si0=4U;
si1=l6;
si2=3U;
si1+=si2;
si2=-4U;
si1&=si2;
l7=si1;
si2=l6;
si1-=si2;
si2=l7;
si3=l6;
si2=si2 == si3;
si0=si2?si0:si1;
l7=si0;
si1=1U;
si0=si0 > si1;
if(si0){
goto L13;
}
si0=l6;
si1=l7;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=-2139062144U;
si0&=si1;
if(si0){
goto L12;
}
L13:;
si0=0U;
l9=si0;
L12:;
si0=l5;
si1=36U;
si0+=si1;
si1=6U;
i32_store(&i->m0,(U64)si0,si1);
si0=l10;
si1=200U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l10=si0;
si1=l10;
si1=i32_load(&i->m0,(U64)si1);
l7=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=l6;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l5;
sj1=-1ULL;
i64_store(&i->m0,(U64)si0+40U,sj1);
si0=l5;
si1=-1U;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l5;
si1=l9;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l7;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 == si1;
if(si0){
goto L9;
}
si0=l5;
si1=24U;
si0+=si1;
si1=l10;
si2=0U;
si0=f8078(i,si0,si1,si2);
l6=si0;
L11:;
si0=l2;
si1=l2;
si1=i32_load(&i->m0,(U64)si1);
l10=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l10;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 == si1;
if(si0){
goto L9;
}
si0=l5;
si1=24U;
si0+=si1;
si1=l2;
si2=l6;
si3=l1;
f11879(i,si0,si1,si2,si3);
si0=l5;
si0=i32_load(&i->m0,(U64)si0+28U);
l2=si0;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+24U);
if(si0){
goto L14;
}
si0=l5;
si1=l5;
si2=32U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l5;
si1=l2;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l5;
si1=8U;
si0+=si1;
si1=l5;
si2=16U;
si1+=si2;
si2=l3;
si3=l4;
si4=l1;
f11979(i,si0,si1,si2,si3,si4);
si0=l5;
si0=i32_load(&i->m0,(U64)si0+12U);
l2=si0;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+8U);
l1=si0;
si0=l8;
if(si0){
goto L6;
}
si0=l6;
si1=l6;
si1=i32_load(&i->m0,(U64)si1);
l8=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l6;
l3=si0;
si0=l8;
si1=1U;
si0=si0 != si1;
if(si0){
goto L6;
}
goto L7;
L14:;
si0=l8;
if(si0){
goto L8;
}
si0=l6;
si1=l6;
si1=i32_load(&i->m0,(U64)si1);
l8=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l8;
si1=1U;
si0=si0 != si1;
if(si0){
goto L8;
}
si0=l6;
f7690(i,si0);
goto L8;
L10:;
si0=1U;
si1=6U;
f52(i,si0,si1);
UNREACHABLE;
L9:;
f15042(i);
UNREACHABLE;
L8:;
si0=l3;
si1=l3;
si1=i32_load(&i->m0,(U64)si1);
l6=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=1U;
l1=si0;
si0=l6;
si1=1U;
si0=si0 != si1;
if(si0){
goto L6;
}
L7:;
si0=l3;
f7690(i,si0);
L6:;
si0=l0;
si1=l2;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l1;
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=48U;
si0+=si1;
i->g0=si0;
L0:;
}

void f7050(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U32 si0,si1,si2;
si0=l3;
si1=l2;
si0=f5689(i,si0,si1);
l3=si0;
if(si0){
goto L2;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0+88U);
si1=320U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
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
si1=l3;
si0=f7573(i,si0,si1);
l3=si0;
L2:;
si0=l0;
si1=l3;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=1U;
i32_store(&i->m0,(U64)si0,si1);
goto L0;
L1:;
f15042(i);
UNREACHABLE;
L0:;
}

void f7051(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 si0,si1,si2,si3,si4;
si0=i->g0;
si1=32U;
si0-=si1;
l4=si0;
i->g0=si0;
si0=l4;
si1=16U;
si0+=si1;
si1=l3;
si2=l2;
f6250(i,si0,si1,si2);
si0=1U;
l5=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+20U);
l3=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+16U);
si0=!(si0);
if(si0){
goto L2;
}
si0=l3;
l6=si0;
goto L1;
L2:;
si0=l4;
si1=24U;
si0+=si1;
si1=l3;
si2=56U;
si1+=si2;
si2=l2;
f6613(i,si0,si1,si2);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+28U);
l6=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+24U);
l7=si0;
if(si0){
goto L4;
}
si0=1U;
l5=si0;
goto L3;
L4:;
si0=l4;
si1=8U;
si0+=si1;
si1=l2;
si2=l6;
si2=i32_load(&i->m0,(U64)si2+44U);
si3=1660256U;
si4=8U;
f6614(i,si0,si1,si2,si3,si4);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+12U);
l6=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+8U);
l5=si0;
si0=l7;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l7;
si1=0U;
si2=l7;
si2=i32_load8_u(&i->m0,(U64)si2+4U);
l2=si2;
si3=l2;
si4=1U;
si3=si3 == si4;
l2=si3;
si1=si3?si1:si2;
i32_store8(&i->m0,(U64)si0+4U,si1);
si0=l2;
if(si0){
goto L3;
}
si0=l7;
si1=4U;
si0+=si1;
si1=0U;
f1440(i,si0,si1);
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
f7690(i,si0);
L1:;
si0=l0;
si1=l6;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l5;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=32U;
si0+=si1;
i->g0=si0;
L0:;
}

void f7052(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U32 l5=0;
U32 l6=0;
U64 l7=0;
U32 si0,si1,si2,si3,si4;
U64 sj0,sj1,sj2;
si0=i->g0;
si1=16U;
si0-=si1;
l4=si0;
i->g0=si0;
si0=l4;
si1=l3;
si2=l2;
f5955(i,si0,si1,si2);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+4U);
l3=si0;
si0=1U;
l5=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si1=2U;
si0=si0 == si1;
if(si0){
goto L1;
}
si0=1U;
l5=si0;
si0=l4;
sj0=i64_load(&i->m0,(U64)si0+8U);
l7=sj0;
si0=(U32)(sj0);
sj1=l7;
sj2=32ULL;
sj1>>=(sj2&63);
si1=(U32)(sj1);
si2=1U;
si3=l3;
si4=l6;
si2=si4?si2:si3;
si3=0U;
si4=l2;
si0=f12413(i,si0,si1,si2,si3,si4);
l3=si0;
if(si0){
goto L1;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0+88U);
si1=1272U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si1=l3;
si1=i32_load(&i->m0,(U64)si1);
l2=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=0U;
l5=si0;
si0=l2;
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
si1=l3;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l5;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=16U;
si0+=si1;
i->g0=si0;
L0:;
}

void f7053(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 si0,si1,si2;
si0=i->g0;
si1=16U;
si0-=si1;
l4=si0;
i->g0=si0;
si0=l4;
si1=8U;
si0+=si1;
si1=l3;
si2=l2;
f5588(i,si0,si1,si2);
si0=1U;
l5=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+12U);
l3=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+8U);
si0=!(si0);
if(si0){
goto L2;
}
si0=l3;
l6=si0;
goto L1;
L2:;
si0=l3;
si1=l2;
si0=f6565(i,si0,si1);
l6=si0;
si0=l3;
si1=l3;
si1=i32_load(&i->m0,(U64)si1);
l7=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=1U;
l5=si0;
si0=l7;
si1=1U;
si0=si0 != si1;
if(si0){
goto L3;
}
si0=l3;
f7690(i,si0);
L3:;
si0=l6;
if(si0){
goto L1;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0+88U);
si1=1272U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si1=l6;
si1=i32_load(&i->m0,(U64)si1);
l3=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=0U;
l5=si0;
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
si1=l6;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l5;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=16U;
si0+=si1;
i->g0=si0;
L0:;
}

void f7054(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U32 l5=0;
U32 si0,si1,si2,si3;
si0=i->g0;
si1=16U;
si0-=si1;
l4=si0;
i->g0=si0;
si0=l4;
si1=8U;
si0+=si1;
si1=l3;
si2=l2;
f5588(i,si0,si1,si2);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+12U);
l3=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+8U);
si0=!(si0);
if(si0){
goto L2;
}
si0=l3;
l2=si0;
goto L1;
L2:;
si0=l2;
si1=l3;
si2=1662688U;
si3=6U;
si0=f6580(i,si0,si1,si2,si3);
l2=si0;
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
goto L1;
}
si0=l3;
f7690(i,si0);
L1:;
si0=l0;
si1=l2;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=1U;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=16U;
si0+=si1;
i->g0=si0;
L0:;
}

void f7055(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U32 l5=0;
U64 l6=0;
U32 si0,si1,si2;
U64 sj0;
si0=i->g0;
si1=16U;
si0-=si1;
l4=si0;
i->g0=si0;
si0=1U;
l5=si0;
si0=l3;
si1=l2;
si0=f5689(i,si0,si1);
l3=si0;
if(si0){
goto L2;
}
si0=f14975(i);
l5=si0;
si0=!(si0);
if(si0){
goto L1;
}
si0=l4;
si1=l5;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l5;
si1=l5;
si1=i32_load(&i->m0,(U64)si1);
l3=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
sj0=i64_load(&i->m0,(U64)si0+8U);
l6=sj0;
si0=l3;
si1=1U;
si0=si0 != si1;
if(si0){
goto L3;
}
si0=l4;
si1=12U;
si0+=si1;
f8995(i,si0);
L3:;
si0=0U;
l5=si0;
sj0=l6;
si1=l2;
si0=f12760(i,sj0,si1);
l3=si0;
L2:;
si0=l0;
si1=l3;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l5;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=16U;
si0+=si1;
i->g0=si0;
goto L0;
L1:;
si0=1986655U;
si1=94U;
si2=1986780U;
f703(i,si0,si1,si2);
UNREACHABLE;
L0:;
}

void f7056(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 si0,si1,si2,si3,si4;
si0=i->g0;
si1=32U;
si0-=si1;
l4=si0;
i->g0=si0;
si0=l4;
si1=16U;
si0+=si1;
si1=l3;
si2=l2;
f6250(i,si0,si1,si2);
si0=1U;
l5=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+20U);
l3=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+16U);
si0=!(si0);
if(si0){
goto L2;
}
si0=l3;
l6=si0;
goto L1;
L2:;
si0=l4;
si1=24U;
si0+=si1;
si1=l3;
si2=56U;
si1+=si2;
si2=l2;
f6613(i,si0,si1,si2);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+28U);
l6=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+24U);
l7=si0;
if(si0){
goto L4;
}
si0=1U;
l5=si0;
goto L3;
L4:;
si0=l4;
si1=8U;
si0+=si1;
si1=l2;
si2=l6;
si2=i32_load(&i->m0,(U64)si2+44U);
si3=1660333U;
si4=8U;
f6614(i,si0,si1,si2,si3,si4);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+12U);
l6=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+8U);
l5=si0;
si0=l7;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l7;
si1=0U;
si2=l7;
si2=i32_load8_u(&i->m0,(U64)si2+4U);
l2=si2;
si3=l2;
si4=1U;
si3=si3 == si4;
l2=si3;
si1=si3?si1:si2;
i32_store8(&i->m0,(U64)si0+4U,si1);
si0=l2;
if(si0){
goto L3;
}
si0=l7;
si1=4U;
si0+=si1;
si1=0U;
f1440(i,si0,si1);
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
f7690(i,si0);
L1:;
si0=l0;
si1=l6;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l5;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=32U;
si0+=si1;
i->g0=si0;
L0:;
}

void f7057(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 si0,si1,si2,si3;
si0=i->g0;
si1=16U;
si0-=si1;
l4=si0;
i->g0=si0;
si0=l4;
si1=8U;
si0+=si1;
si1=l3;
si2=l2;
f6192(i,si0,si1,si2);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+12U);
l5=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+8U);
l3=si0;
if(si0){
goto L2;
}
si0=l5;
l2=si0;
goto L1;
L2:;
si0=l2;
si1=l3;
si2=1662512U;
si3=8U;
si0=f6580(i,si0,si1,si2,si3);
l2=si0;
si0=l5;
si0=!(si0);
if(si0){
goto L3;
}
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
goto L3;
}
si0=l5;
f7690(i,si0);
L3:;
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
goto L1;
}
si0=l3;
f7690(i,si0);
L1:;
si0=l0;
si1=l2;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=1U;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=16U;
si0+=si1;
i->g0=si0;
L0:;
}

void f7058(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
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
l4=si0;
i->g0=si0;
si0=l4;
si1=8U;
si0+=si1;
si1=l3;
si2=l2;
f6186(i,si0,si1,si2);
si0=1U;
l5=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+12U);
l3=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+8U);
si0=!(si0);
if(si0){
goto L4;
}
si0=l3;
l2=si0;
goto L3;
L4:;
si0=l3;
si1=64U;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=1U;
si0&=si1;
si0=!(si0);
if(si0){
goto L6;
}
si0=l3;
si1=60U;
si0+=si1;
l5=si0;
si1=l5;
si1=i32_load(&i->m0,(U64)si1);
si2=-1U;
si1+=si2;
l5=si1;
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
if(si0){
goto L7;
}
si0=l3;
si1=0U;
i32_store(&i->m0,(U64)si0+56U,si1);
si0=l3;
si1=0U;
si2=l3;
si2=i32_load8_u(&i->m0,(U64)si2+64U);
l5=si2;
si3=l5;
si4=1U;
si3=si3 == si4;
l5=si3;
si1=si3?si1:si2;
i32_store8(&i->m0,(U64)si0+64U,si1);
si0=l5;
if(si0){
goto L7;
}
si0=l3;
si1=64U;
si0+=si1;
si1=0U;
f1440(i,si0,si1);
L7:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+88U);
si1=1272U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si1=l2;
si1=i32_load(&i->m0,(U64)si1);
l6=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=0U;
l5=si0;
si0=l6;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 != si1;
if(si0){
goto L5;
}
goto L1;
L6:;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=21U;
si0=f15269(i,si0);
l6=si0;
si0=!(si0);
if(si0){
goto L2;
}
si0=l6;
si1=13U;
si0+=si1;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+1668408U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l6;
si1=8U;
si0+=si1;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+1668403U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l6;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+1668395U);
i64_store(&i->m0,(U64)si0,sj1);
si0=1U;
l5=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+88U);
si1=476U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
si1=l7;
si1=i32_load(&i->m0,(U64)si1);
l8=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
sj1=90194313237ULL;
i64_store(&i->m0,(U64)si0+20U,sj1);
si0=l4;
si1=l6;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l8;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 == si1;
if(si0){
goto L1;
}
si0=l2;
si1=l7;
si2=l4;
si3=16U;
si2+=si3;
si0=f7173(i,si0,si1,si2);
l2=si0;
L5:;
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
f7690(i,si0);
L3:;
si0=l0;
si1=l2;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l5;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=32U;
si0+=si1;
i->g0=si0;
goto L0;
L2:;
si0=1U;
si1=21U;
f52(i,si0,si1);
UNREACHABLE;
L1:;
f15042(i);
UNREACHABLE;
L0:;
}

void f7059(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U32 l5=0;
U32 si0,si1,si2,si3,si4,si5;
si0=i->g0;
si1=16U;
si0-=si1;
l4=si0;
i->g0=si0;
si0=l4;
si1=8U;
si0+=si1;
si1=l3;
si2=l2;
f5687(i,si0,si1,si2);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+12U);
l3=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+8U);
l5=si0;
if(si0){
goto L2;
}
si0=1U;
l5=si0;
goto L1;
L2:;
si0=l4;
si1=8U;
si0+=si1;
si1=l5;
si2=l3;
si3=1661107U;
si4=4U;
si5=l2;
f6713(i,si0,si1,si2,si3,si4,si5);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+8U);
if(si0){
goto L3;
}
si0=0U;
l5=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+12U);
si1=l2;
si0=f12593(i,si0,si1);
l3=si0;
goto L1;
L3:;
si0=1U;
l5=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+12U);
l3=si0;
L1:;
si0=l0;
si1=l3;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l5;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=16U;
si0+=si1;
i->g0=si0;
L0:;
}

void f7060(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 si0,si1,si2,si3,si4;
U64 sj1;
si0=i->g0;
si1=48U;
si0-=si1;
l2=si0;
i->g0=si0;
si0=l2;
si1=l1;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+8U);
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l2;
si1=l1;
sj1=i64_load(&i->m0,(U64)si1+12U);
i64_store(&i->m0,(U64)si0+12U,sj1);
si0=l2;
si1=l1;
si1=i32_load8_u(&i->m0,(U64)si1+24U);
i32_store8(&i->m0,(U64)si0+20U,si1);
si0=l2;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+20U);
i32_store(&i->m0,(U64)si0+21U,si1);
si0=l2;
si1=32U;
si0+=si1;
sj1=8ULL;
si2=l2;
si3=l2;
si4=25U;
si3+=si4;
f10601(i,si0,sj1,si2,si3);
si0=l0;
si1=8U;
si0+=si1;
si1=l2;
si2=32U;
si1+=si2;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=l2;
sj1=i64_load(&i->m0,(U64)si1+32U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=1U;
i32_store8(&i->m0,(U64)si0+16U,si1);
si0=l2;
si1=48U;
si0+=si1;
i->g0=si0;
L0:;
}

void f7061(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4) {
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 si0,si1,si2,si3,si4,si5,si6,si7;
si0=i->g0;
si1=32U;
si0-=si1;
l5=si0;
i->g0=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+88U);
l6=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
si0=1U;
l2=si0;
si0=l4;
si0=!(si0);
if(si0){
goto L6;
}
si0=l4;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L5;
}
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=l4;
si0=f15269(i,si0);
l2=si0;
si0=!(si0);
if(si0){
goto L4;
}
L6:;
si0=l2;
si1=l3;
si2=l4;
si0=f15390(i,si0,si1,si2);
l3=si0;
si0=l6;
si1=24U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si1=l2;
si1=i32_load(&i->m0,(U64)si1);
l6=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=l4;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l5;
si1=l4;
i32_store(&i->m0,(U64)si0+20U,si1);
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
si0=l5;
si1=8U;
si0+=si1;
si1=l1;
si2=l7;
si3=1661728U;
si4=6U;
si5=l5;
si6=16U;
si5+=si6;
si6=l2;
si7=0U;
si5=f8110(i,si5,si6,si7);
f7103(i,si0,si1,si2,si3,si4,si5);
si0=l5;
si0=i32_load(&i->m0,(U64)si0+12U);
l4=si0;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+8U);
if(si0){
goto L2;
}
si0=l5;
si1=l4;
si2=l1;
f7004(i,si0,si1,si2);
si0=l5;
si0=i32_load(&i->m0,(U64)si0+4U);
l4=si0;
si0=l5;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L7;
}
si0=l4;
si1=68U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
l1=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+56U);
si0=!(si0);
if(si0){
goto L8;
}
si0=l4;
si1=60U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si1=-1U;
si0=si0 != si1;
if(si0){
goto L8;
}
si0=l4;
si1=56U;
si0+=si1;
si0=f2125(i,si0);
l1=si0;
L8:;
si0=l0;
si1=l2;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=8U;
si0+=si1;
si1=l1;
i32_store(&i->m0,(U64)si0,si1);
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
goto L1;
}
si0=l4;
f7690(i,si0);
goto L1;
L7:;
si0=l0;
si1=1U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l4;
i32_store(&i->m0,(U64)si0+4U,si1);
goto L1;
L5:;
f53(i);
UNREACHABLE;
L4:;
si0=1U;
si1=l4;
f52(i,si0,si1);
UNREACHABLE;
L3:;
f15042(i);
UNREACHABLE;
L2:;
si0=l0;
si1=1U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l4;
i32_store(&i->m0,(U64)si0+4U,si1);
L1:;
si0=l5;
si1=32U;
si0+=si1;
i->g0=si0;
L0:;
}

void f7062(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 si0,si1,si2,si3,si4;
U64 sj0,sj1,sj2;
si0=i->g0;
si1=80U;
si0-=si1;
l3=si0;
i->g0=si0;
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
goto L11;
}
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=21U;
si0=f15269(i,si0);
l4=si0;
si0=!(si0);
if(si0){
goto L10;
}
si0=l4;
si1=13U;
si0+=si1;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+1661626U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=8U;
si0+=si1;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+1661621U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+1661613U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
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
si0=l3;
sj1=90194313237ULL;
i64_store(&i->m0,(U64)si0+52U,sj1);
si0=l3;
si1=l4;
i32_store(&i->m0,(U64)si0+48U,si1);
si0=l6;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 == si1;
if(si0){
goto L4;
}
si0=l2;
si1=l5;
si2=l3;
si3=48U;
si2+=si3;
si0=f7173(i,si0,si1,si2);
l2=si0;
si0=l1;
si1=l1;
si1=i32_load(&i->m0,(U64)si1);
l4=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=1U;
si0=si0 != si1;
if(si0){
goto L12;
}
si0=l1;
f7690(i,si0);
L12:;
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l2;
i32_store(&i->m0,(U64)si0+4U,si1);
goto L1;
L11:;
si0=l1;
si1=60U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=2U;
si0=si0 == si1;
if(si0){
goto L13;
}
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=21U;
si0=f15269(i,si0);
l4=si0;
si0=!(si0);
if(si0){
goto L9;
}
si0=l4;
si1=13U;
si0+=si1;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+1661626U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=8U;
si0+=si1;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+1661621U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+1661613U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
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
si0=l3;
sj1=90194313237ULL;
i64_store(&i->m0,(U64)si0+52U,sj1);
si0=l3;
si1=l4;
i32_store(&i->m0,(U64)si0+48U,si1);
si0=l6;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 == si1;
if(si0){
goto L4;
}
si0=l2;
si1=l5;
si2=l3;
si3=48U;
si2+=si3;
si0=f7173(i,si0,si1,si2);
l2=si0;
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l2;
i32_store(&i->m0,(U64)si0+4U,si1);
goto L2;
L13:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+56U);
l6=si0;
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
goto L4;
}
si0=l4;
sj0=i64_load(&i->m0,(U64)si0+8U);
sj1=-2107831292826120692ULL;
sj0^=sj1;
si1=l4;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
sj2=3044701271088271634ULL;
sj1^=sj2;
sj0|=sj1;
si0=!(sj0);
if(si0){
goto L14;
}
si0=l3;
si1=32U;
si0+=si1;
si1=l4;
si1=i32_load(&i->m0,(U64)si1+28U);
si2=56U;
si1+=si2;
f9877(i,si0,si1);
si0=l3;
si1=60U;
si0+=si1;
sj1=1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=847U;
i32_store(&i->m0,(U64)si0+76U,si1);
si0=l3;
si1=2U;
i32_store(&i->m0,(U64)si0+52U,si1);
si0=l3;
si1=1661704U;
i32_store(&i->m0,(U64)si0+48U,si1);
si0=l3;
si1=l3;
si2=32U;
si1+=si2;
i32_store(&i->m0,(U64)si0+72U,si1);
si0=l3;
si1=l3;
si2=72U;
si1+=si2;
i32_store(&i->m0,(U64)si0+56U,si1);
si0=l3;
si1=16U;
si0+=si1;
si1=l3;
si2=48U;
si1+=si2;
f63(i,si0,si1);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+32U);
switch(si0){
case 0:
goto L15;
case 1:
goto L18;
case 2:
goto L17;
case 3:
goto L16;
default:
goto L19;
}
L19:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+36U);
l5=si0;
si1=l5;
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
goto L15;
}
si0=l5;
f1433(i,si0);
goto L15;
L18:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+36U);
l5=si0;
si1=0U;
si2=l5;
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
goto L15;
}
si0=l5;
si1=0U;
f1440(i,si0,si1);
goto L15;
L17:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+36U);
l5=si0;
si1=0U;
si2=l5;
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
goto L15;
}
si0=l5;
si1=0U;
f1440(i,si0,si1);
goto L15;
L16:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+36U);
l5=si0;
si1=l5;
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
goto L15;
}
si0=l5;
f1433(i,si0);
L15:;
si0=l3;
si1=48U;
si0+=si1;
si1=8U;
si0+=si1;
si1=l3;
si2=16U;
si1+=si2;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=l3;
sj1=i64_load(&i->m0,(U64)si1+16U);
i64_store(&i->m0,(U64)si0+48U,sj1);
si0=l2;
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
goto L4;
}
si0=l2;
si1=l5;
si2=l3;
si3=48U;
si2+=si3;
si0=f7173(i,si0,si1,si2);
l2=si0;
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
goto L20;
}
si0=l4;
f7690(i,si0);
L20:;
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l2;
i32_store(&i->m0,(U64)si0+4U,si1);
goto L3;
L14:;
si0=l6;
si0=i32_load(&i->m0,(U64)si0+4U);
l5=si0;
sj0=i64_load(&i->m0,(U64)si0+8U);
sj1=-8433930480299741807ULL;
sj0^=sj1;
si1=l5;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
sj2=1156462258252325731ULL;
sj1^=sj2;
sj0|=sj1;
si0=!(sj0);
if(si0){
goto L7;
}
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=21U;
si0=f15269(i,si0);
l5=si0;
si0=!(si0);
if(si0){
goto L8;
}
si0=l5;
si1=13U;
si0+=si1;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+1661626U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=8U;
si0+=si1;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+1661621U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+1661613U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
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
si0=l3;
sj1=90194313237ULL;
i64_store(&i->m0,(U64)si0+52U,sj1);
si0=l3;
si1=l5;
i32_store(&i->m0,(U64)si0+48U,si1);
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
si3=48U;
si2+=si3;
si0=f7173(i,si0,si1,si2);
l2=si0;
goto L6;
L10:;
si0=1U;
si1=21U;
f52(i,si0,si1);
UNREACHABLE;
L9:;
si0=1U;
si1=21U;
f52(i,si0,si1);
UNREACHABLE;
L8:;
si0=1U;
si1=21U;
f52(i,si0,si1);
UNREACHABLE;
L7:;
si0=l3;
si1=8U;
si0+=si1;
si1=l5;
si2=56U;
si1+=si2;
f5520(i,si0,si1);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+8U);
si0=!(si0);
if(si0){
goto L5;
}
si0=l3;
si1=60U;
si0+=si1;
sj1=1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=1919896U;
i32_store(&i->m0,(U64)si0+48U,si1);
si0=l3;
si1=1215U;
i32_store(&i->m0,(U64)si0+76U,si1);
si0=l3;
si1=3U;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l3;
si1=1919907U;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l3;
si1=l3;
si2=72U;
si1+=si2;
i32_store(&i->m0,(U64)si0+56U,si1);
si0=l3;
si1=l3;
si2=16U;
si1+=si2;
i32_store(&i->m0,(U64)si0+72U,si1);
si0=l3;
si1=1U;
i32_store(&i->m0,(U64)si0+52U,si1);
si0=l3;
si1=32U;
si0+=si1;
si1=l3;
si2=48U;
si1+=si2;
f63(i,si0,si1);
si0=l2;
si0=i32_load(&i->m0,(U64)si0+88U);
si1=352U;
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
goto L4;
}
si0=l2;
si1=l5;
si2=l3;
si3=32U;
si2+=si3;
si0=f7173(i,si0,si1,si2);
l2=si0;
L6:;
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l2;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l4;
si1=l4;
si1=i32_load(&i->m0,(U64)si1);
l0=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=1U;
si0=si0 != si1;
if(si0){
goto L3;
}
si0=l4;
f7690(i,si0);
goto L3;
L5:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+12U);
l2=si0;
si0=l0;
si1=l4;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l2;
i32_store(&i->m0,(U64)si0+4U,si1);
goto L2;
L4:;
f15042(i);
UNREACHABLE;
L3:;
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
f7690(i,si0);
goto L1;
L2:;
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
f7690(i,si0);
L1:;
si0=l3;
si1=80U;
si0+=si1;
i->g0=si0;
L0:;
}

void f7063(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
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
l4=si0;
i->g0=si0;
si0=l4;
si1=8U;
si0+=si1;
si1=l3;
si2=l2;
f5940(i,si0,si1,si2);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+8U);
l5=si0;
si0=1U;
l3=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+12U);
si1=2U;
si0=si0 != si1;
if(si0){
goto L4;
}
si0=l5;
l6=si0;
goto L3;
L4:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+88U);
l7=si0;
si1=1272U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=l5;
si0=si0 == si1;
if(si0){
goto L6;
}
si0=l7;
si1=200U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l8=si0;
si1=l5;
si1=i32_load(&i->m0,(U64)si1+28U);
l6=si1;
si0=si0 == si1;
if(si0){
goto L8;
}
si0=l6;
si1=468U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=2U;
si0<<=(si1&31);
l3=si0;
si0=l6;
si1=460U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
L9:;
{
si0=l3;
si0=!(si0);
if(si0){
goto L7;
}
si0=l3;
si1=-4U;
si0+=si1;
l3=si0;
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
goto L9;
}
}
L8:;
si0=0U;
l3=si0;
si0=l5;
sj0=i64_load(&i->m0,(U64)si0+8U);
sj1=-1851977428690684601ULL;
sj0^=sj1;
si1=l5;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
sj2=-786598182489054301ULL;
sj1^=sj2;
sj0|=sj1;
si0=!(sj0);
si0=!(si0);
if(si0){
goto L10;
}
si0=l5;
l6=si0;
goto L3;
L10:;
si0=l2;
si1=1682360U;
si2=7U;
si3=l7;
si4=476U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si4=l8;
si5=l5;
si0=f7151(i,si0,si1,si2,si3,si4,si5);
l6=si0;
si0=l5;
si1=l5;
si1=i32_load(&i->m0,(U64)si1);
l9=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=1U;
l3=si0;
si0=l9;
si1=1U;
si0=si0 == si1;
if(si0){
goto L5;
}
goto L3;
L7:;
si0=l2;
si1=1679036U;
si2=4U;
si3=l7;
si4=504U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si4=l8;
si5=l5;
si0=f7151(i,si0,si1,si2,si3,si4,si5);
l6=si0;
si0=l5;
si1=l5;
si1=i32_load(&i->m0,(U64)si1);
l9=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=1U;
l3=si0;
si0=l9;
si1=1U;
si0=si0 == si1;
if(si0){
goto L5;
}
goto L3;
L6:;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=5U;
si0=f15269(i,si0);
l3=si0;
si0=!(si0);
if(si0){
goto L2;
}
si0=l3;
si1=4U;
si0+=si1;
si1=0U;
si1=i32_load8_u(&i->m0,(U64)si1+1661556U);
i32_store8(&i->m0,(U64)si0,si1);
si0=l3;
si1=0U;
si1=i32_load(&i->m0,(U64)si1+1661552U);
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=20U;
si0+=si1;
si1=5U;
i32_store(&i->m0,(U64)si0,si1);
si0=l7;
si1=200U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si1=l6;
si1=i32_load(&i->m0,(U64)si1);
l9=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=l3;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l4;
sj1=-1ULL;
i64_store(&i->m0,(U64)si0+24U,sj1);
si0=l4;
sj1=-4294967296ULL;
i64_store(&i->m0,(U64)si0+8U,sj1);
si0=l9;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 == si1;
if(si0){
goto L1;
}
si0=0U;
l3=si0;
si0=l4;
si1=8U;
si0+=si1;
si1=l6;
si2=0U;
si0=f8078(i,si0,si1,si2);
l6=si0;
si0=l5;
si1=l5;
si1=i32_load(&i->m0,(U64)si1);
l9=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l9;
si1=1U;
si0=si0 != si1;
if(si0){
goto L3;
}
L5:;
si0=l5;
f7690(i,si0);
L3:;
si0=l0;
si1=l6;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l3;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=32U;
si0+=si1;
i->g0=si0;
goto L0;
L2:;
si0=1U;
si1=5U;
f52(i,si0,si1);
UNREACHABLE;
L1:;
f15042(i);
UNREACHABLE;
L0:;
}

void f7064(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U32 si0,si1,si2;
si0=l2;
si1=88U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=1272U;
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
goto L1;
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
goto L2;
}
si0=l3;
f7690(i,si0);
L2:;
si0=l0;
si1=l2;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
goto L0;
L1:;
f15042(i);
UNREACHABLE;
L0:;
}

void f7065(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 l8=0;
U32 si0,si1,si2,si3,si4,si5;
U64 sj0,sj1,sj2;
si0=i->g0;
si1=16U;
si0-=si1;
l4=si0;
i->g0=si0;
si0=0U;
si0=i32_load(&i->m0,(U64)si0+2969244U);
si1=2U;
si0=si0 != si1;
if(si0){
goto L1;
}
si0=0U;
si0=i32_load(&i->m0,(U64)si0+2969248U);
l5=si0;
si1=l3;
si1=i32_load(&i->m0,(U64)si1+28U);
l6=si1;
si0=si0 == si1;
if(si0){
goto L6;
}
si0=l6;
si1=468U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=2U;
si0<<=(si1&31);
l7=si0;
si0=l6;
si1=460U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
L7:;
{
si0=l7;
si0=!(si0);
if(si0){
goto L5;
}
si0=l7;
si1=-4U;
si0+=si1;
l7=si0;
si0=l6;
si0=i32_load(&i->m0,(U64)si0);
l8=si0;
si0=l6;
si1=4U;
si0+=si1;
l6=si0;
si0=l8;
si1=l5;
si0=si0 != si1;
if(si0){
goto L7;
}
}
L6:;
si0=l3;
sj0=i64_load(&i->m0,(U64)si0+8U);
sj1=-7534083915750282801ULL;
sj0^=sj1;
si1=l3;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
sj2=1401055887256743456ULL;
sj1^=sj2;
sj0|=sj1;
si0=!(sj0);
if(si0){
goto L4;
}
si0=l2;
si1=1682360U;
si2=7U;
si3=l2;
si3=i32_load(&i->m0,(U64)si3+88U);
si4=476U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si4=l5;
si5=l3;
si0=f7151(i,si0,si1,si2,si3,si4,si5);
l7=si0;
si0=l3;
si1=l3;
si1=i32_load(&i->m0,(U64)si1);
l8=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=1U;
l6=si0;
si0=l8;
si1=1U;
si0=si0 == si1;
if(si0){
goto L3;
}
goto L2;
L5:;
si0=l2;
si1=1679036U;
si2=4U;
si3=l2;
si3=i32_load(&i->m0,(U64)si3+88U);
si4=504U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si4=l5;
si5=l3;
si0=f7151(i,si0,si1,si2,si3,si4,si5);
l7=si0;
si0=l3;
si1=l3;
si1=i32_load(&i->m0,(U64)si1);
l8=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=1U;
l6=si0;
si0=l8;
si1=1U;
si0=si0 == si1;
if(si0){
goto L3;
}
goto L2;
L4:;
si0=l4;
si1=8U;
si0+=si1;
si1=l3;
si2=136U;
si1+=si2;
si2=l2;
f6668(i,si0,si1,si2);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+12U);
l7=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+8U);
l6=si0;
si0=l3;
si1=l3;
si1=i32_load(&i->m0,(U64)si1);
l8=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l8;
si1=1U;
si0=si0 != si1;
if(si0){
goto L2;
}
L3:;
si0=l3;
f7690(i,si0);
L2:;
si0=l0;
si1=l7;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l6;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=16U;
si0+=si1;
i->g0=si0;
goto L0;
L1:;
si0=1649248U;
si1=36U;
si2=1649300U;
f703(i,si0,si1,si2);
UNREACHABLE;
L0:;
}

void f7066(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 si0,si1,si2,si3,si4;
si0=i->g0;
si1=16U;
si0-=si1;
l4=si0;
i->g0=si0;
si0=l4;
si1=8U;
si0+=si1;
si1=l3;
si2=1660450U;
si3=8U;
si4=l2;
f8199(i,si0,si1,si2,si3,si4);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+12U);
l2=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+8U);
l5=si0;
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
goto L1;
}
si0=l3;
f7690(i,si0);
L1:;
si0=l0;
si1=l5;
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

void f7067(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 l8=0;
U32 si0,si1,si2,si3,si4,si5;
U64 sj0,sj1,sj2;
F64 sd0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+88U);
l4=si0;
si1=108U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si1=l3;
si1=i32_load(&i->m0,(U64)si1+28U);
l6=si1;
si0=si0 == si1;
if(si0){
goto L5;
}
si0=l6;
si1=468U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=2U;
si0<<=(si1&31);
l7=si0;
si0=l6;
si1=460U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
L6:;
{
si0=l7;
si0=!(si0);
if(si0){
goto L4;
}
si0=l7;
si1=-4U;
si0+=si1;
l7=si0;
si0=l6;
si0=i32_load(&i->m0,(U64)si0);
l8=si0;
si0=l6;
si1=4U;
si0+=si1;
l6=si0;
si0=l8;
si1=l5;
si0=si0 != si1;
if(si0){
goto L6;
}
}
L5:;
si0=l3;
sj0=i64_load(&i->m0,(U64)si0+8U);
sj1=-653005602437147053ULL;
sj0^=sj1;
si1=l3;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
sj2=-4170606783940748660ULL;
sj1^=sj2;
sj0|=sj1;
si0=!(sj0);
if(si0){
goto L3;
}
si0=l2;
si1=1682360U;
si2=7U;
si3=l4;
si4=476U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si4=l5;
si5=l3;
si0=f7151(i,si0,si1,si2,si3,si4,si5);
l7=si0;
si0=l3;
si1=l3;
si1=i32_load(&i->m0,(U64)si1);
l8=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=1U;
l6=si0;
si0=l8;
si1=1U;
si0=si0 == si1;
if(si0){
goto L2;
}
goto L1;
L4:;
si0=l2;
si1=1679036U;
si2=4U;
si3=l4;
si4=504U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si4=l5;
si5=l3;
si0=f7151(i,si0,si1,si2,si3,si4,si5);
l7=si0;
si0=l3;
si1=l3;
si1=i32_load(&i->m0,(U64)si1);
l8=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=1U;
l6=si0;
si0=l8;
si1=1U;
si0=si0 == si1;
if(si0){
goto L2;
}
goto L1;
L3:;
si0=l3;
sd0=f64_load(&i->m0,(U64)si0+56U);
si1=l2;
si0=f12206(i,sd0,si1);
l7=si0;
si0=l3;
si1=l3;
si1=i32_load(&i->m0,(U64)si1);
l8=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=0U;
l6=si0;
si0=l8;
si1=1U;
si0=si0 != si1;
if(si0){
goto L1;
}
L2:;
si0=l3;
f7690(i,si0);
L1:;
si0=l0;
si1=l7;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l6;
i32_store(&i->m0,(U64)si0,si1);
L0:;
}

void f7068(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 l8=0;
U32 si0,si1,si2,si3,si4,si5;
U64 sj0,sj1,sj2;
F64 sd0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+88U);
l4=si0;
si1=108U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si1=l3;
si1=i32_load(&i->m0,(U64)si1+28U);
l6=si1;
si0=si0 == si1;
if(si0){
goto L5;
}
si0=l6;
si1=468U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=2U;
si0<<=(si1&31);
l7=si0;
si0=l6;
si1=460U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
L6:;
{
si0=l7;
si0=!(si0);
if(si0){
goto L4;
}
si0=l7;
si1=-4U;
si0+=si1;
l7=si0;
si0=l6;
si0=i32_load(&i->m0,(U64)si0);
l8=si0;
si0=l6;
si1=4U;
si0+=si1;
l6=si0;
si0=l8;
si1=l5;
si0=si0 != si1;
if(si0){
goto L6;
}
}
L5:;
si0=l3;
sj0=i64_load(&i->m0,(U64)si0+8U);
sj1=-653005602437147053ULL;
sj0^=sj1;
si1=l3;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
sj2=-4170606783940748660ULL;
sj1^=sj2;
sj0|=sj1;
si0=!(sj0);
if(si0){
goto L3;
}
si0=l2;
si1=1682360U;
si2=7U;
si3=l4;
si4=476U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si4=l5;
si5=l3;
si0=f7151(i,si0,si1,si2,si3,si4,si5);
l7=si0;
si0=l3;
si1=l3;
si1=i32_load(&i->m0,(U64)si1);
l8=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=1U;
l6=si0;
si0=l8;
si1=1U;
si0=si0 == si1;
if(si0){
goto L2;
}
goto L1;
L4:;
si0=l2;
si1=1679036U;
si2=4U;
si3=l4;
si4=504U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si4=l5;
si5=l3;
si0=f7151(i,si0,si1,si2,si3,si4,si5);
l7=si0;
si0=l3;
si1=l3;
si1=i32_load(&i->m0,(U64)si1);
l8=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=1U;
l6=si0;
si0=l8;
si1=1U;
si0=si0 == si1;
if(si0){
goto L2;
}
goto L1;
L3:;
si0=l3;
si1=64U;
si0+=si1;
sd0=f64_load(&i->m0,(U64)si0);
si1=l2;
si0=f12206(i,sd0,si1);
l7=si0;
si0=l3;
si1=l3;
si1=i32_load(&i->m0,(U64)si1);
l8=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=0U;
l6=si0;
si0=l8;
si1=1U;
si0=si0 != si1;
if(si0){
goto L1;
}
L2:;
si0=l3;
f7690(i,si0);
L1:;
si0=l0;
si1=l7;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l6;
i32_store(&i->m0,(U64)si0,si1);
L0:;
}

void f7069(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 l8=0;
U32 si0,si1,si2,si3,si4,si5;
U64 sj0,sj1,sj2;
si0=i->g0;
si1=16U;
si0-=si1;
l4=si0;
i->g0=si0;
si0=0U;
si0=i32_load(&i->m0,(U64)si0+2969228U);
si1=2U;
si0=si0 != si1;
if(si0){
goto L1;
}
si0=0U;
si0=i32_load(&i->m0,(U64)si0+2969232U);
l5=si0;
si1=l3;
si1=i32_load(&i->m0,(U64)si1+28U);
l6=si1;
si0=si0 == si1;
if(si0){
goto L6;
}
si0=l6;
si1=468U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=2U;
si0<<=(si1&31);
l7=si0;
si0=l6;
si1=460U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
L7:;
{
si0=l7;
si0=!(si0);
if(si0){
goto L5;
}
si0=l7;
si1=-4U;
si0+=si1;
l7=si0;
si0=l6;
si0=i32_load(&i->m0,(U64)si0);
l8=si0;
si0=l6;
si1=4U;
si0+=si1;
l6=si0;
si0=l8;
si1=l5;
si0=si0 != si1;
if(si0){
goto L7;
}
}
L6:;
si0=l3;
sj0=i64_load(&i->m0,(U64)si0+8U);
sj1=1391140019264218756ULL;
sj0^=sj1;
si1=l3;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
sj2=-1104844118896335946ULL;
sj1^=sj2;
sj0|=sj1;
si0=!(sj0);
if(si0){
goto L4;
}
si0=l2;
si1=1682360U;
si2=7U;
si3=l2;
si3=i32_load(&i->m0,(U64)si3+88U);
si4=476U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si4=l5;
si5=l3;
si0=f7151(i,si0,si1,si2,si3,si4,si5);
l7=si0;
si0=l3;
si1=l3;
si1=i32_load(&i->m0,(U64)si1);
l8=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=1U;
l6=si0;
si0=l8;
si1=1U;
si0=si0 == si1;
if(si0){
goto L3;
}
goto L2;
L5:;
si0=l2;
si1=1679036U;
si2=4U;
si3=l2;
si3=i32_load(&i->m0,(U64)si3+88U);
si4=504U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si4=l5;
si5=l3;
si0=f7151(i,si0,si1,si2,si3,si4,si5);
l7=si0;
si0=l3;
si1=l3;
si1=i32_load(&i->m0,(U64)si1);
l8=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=1U;
l6=si0;
si0=l8;
si1=1U;
si0=si0 == si1;
if(si0){
goto L3;
}
goto L2;
L4:;
si0=l4;
si1=8U;
si0+=si1;
si1=l3;
si2=56U;
si1+=si2;
si2=l2;
f6668(i,si0,si1,si2);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+12U);
l7=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+8U);
l6=si0;
si0=l3;
si1=l3;
si1=i32_load(&i->m0,(U64)si1);
l8=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l8;
si1=1U;
si0=si0 != si1;
if(si0){
goto L2;
}
L3:;
si0=l3;
f7690(i,si0);
L2:;
si0=l0;
si1=l7;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l6;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=16U;
si0+=si1;
i->g0=si0;
goto L0;
L1:;
si0=1649248U;
si1=36U;
si2=1649300U;
f703(i,si0,si1,si2);
UNREACHABLE;
L0:;
}

void f7070(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 l8=0;
U32 si0,si1,si2,si3,si4,si5;
U64 sj0,sj1,sj2;
si0=i->g0;
si1=16U;
si0-=si1;
l4=si0;
i->g0=si0;
si0=0U;
si0=i32_load(&i->m0,(U64)si0+2969252U);
si1=2U;
si0=si0 != si1;
if(si0){
goto L2;
}
si0=0U;
si0=i32_load(&i->m0,(U64)si0+2969256U);
l5=si0;
si1=l3;
si1=i32_load(&i->m0,(U64)si1+28U);
l6=si1;
si0=si0 == si1;
if(si0){
goto L7;
}
si0=l6;
si1=468U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=2U;
si0<<=(si1&31);
l7=si0;
si0=l6;
si1=460U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
L8:;
{
si0=l7;
si0=!(si0);
if(si0){
goto L6;
}
si0=l7;
si1=-4U;
si0+=si1;
l7=si0;
si0=l6;
si0=i32_load(&i->m0,(U64)si0);
l8=si0;
si0=l6;
si1=4U;
si0+=si1;
l6=si0;
si0=l8;
si1=l5;
si0=si0 != si1;
if(si0){
goto L8;
}
}
L7:;
si0=l3;
sj0=i64_load(&i->m0,(U64)si0+8U);
sj1=-7215485279141357787ULL;
sj0^=sj1;
si1=l3;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
sj2=2151535569456304994ULL;
sj1^=sj2;
sj0|=sj1;
si0=!(sj0);
if(si0){
goto L5;
}
si0=l2;
si1=1682360U;
si2=7U;
si3=l2;
si3=i32_load(&i->m0,(U64)si3+88U);
si4=476U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si4=l5;
si5=l3;
si0=f7151(i,si0,si1,si2,si3,si4,si5);
l7=si0;
si0=l3;
si1=l3;
si1=i32_load(&i->m0,(U64)si1);
l8=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=1U;
l6=si0;
si0=l8;
si1=1U;
si0=si0 == si1;
if(si0){
goto L4;
}
goto L3;
L6:;
si0=l2;
si1=1679036U;
si2=4U;
si3=l2;
si3=i32_load(&i->m0,(U64)si3+88U);
si4=504U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si4=l5;
si5=l3;
si0=f7151(i,si0,si1,si2,si3,si4,si5);
l7=si0;
si0=l3;
si1=l3;
si1=i32_load(&i->m0,(U64)si1);
l8=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=1U;
l6=si0;
si0=l8;
si1=1U;
si0=si0 == si1;
if(si0){
goto L4;
}
goto L3;
L5:;
si0=l4;
si1=8U;
si0+=si1;
si1=l3;
si2=56U;
si1+=si2;
si2=l2;
f6613(i,si0,si1,si2);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+12U);
l7=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+8U);
l8=si0;
if(si0){
goto L10;
}
si0=1U;
l6=si0;
goto L9;
L10:;
si0=l7;
si0=i32_load(&i->m0,(U64)si0+48U);
l7=si0;
si1=l7;
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
si0=0U;
l6=si0;
si0=l8;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l8;
si1=0U;
si2=l8;
si2=i32_load8_u(&i->m0,(U64)si2+4U);
l5=si2;
si3=l5;
si4=1U;
si3=si3 == si4;
l5=si3;
si1=si3?si1:si2;
i32_store8(&i->m0,(U64)si0+4U,si1);
si0=l5;
if(si0){
goto L9;
}
si0=0U;
l6=si0;
si0=l8;
si1=4U;
si0+=si1;
si1=0U;
f1440(i,si0,si1);
L9:;
si0=l3;
si1=l3;
si1=i32_load(&i->m0,(U64)si1);
l8=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l8;
si1=1U;
si0=si0 != si1;
if(si0){
goto L3;
}
L4:;
si0=l3;
f7690(i,si0);
L3:;
si0=l0;
si1=l7;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l6;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=16U;
si0+=si1;
i->g0=si0;
goto L0;
L2:;
si0=1649248U;
si1=36U;
si2=1649300U;
f703(i,si0,si1,si2);
UNREACHABLE;
L1:;
f15042(i);
UNREACHABLE;
L0:;
}

void f7071(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 l8=0;
U32 si0,si1,si2,si3,si4,si5;
U64 sj0,sj1,sj2;
si0=i->g0;
si1=16U;
si0-=si1;
l4=si0;
i->g0=si0;
si0=0U;
si0=i32_load(&i->m0,(U64)si0+2969252U);
si1=2U;
si0=si0 != si1;
if(si0){
goto L1;
}
si0=0U;
si0=i32_load(&i->m0,(U64)si0+2969256U);
l5=si0;
si1=l3;
si1=i32_load(&i->m0,(U64)si1+28U);
l6=si1;
si0=si0 == si1;
if(si0){
goto L6;
}
si0=l6;
si1=468U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=2U;
si0<<=(si1&31);
l7=si0;
si0=l6;
si1=460U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
L7:;
{
si0=l7;
si0=!(si0);
if(si0){
goto L5;
}
si0=l7;
si1=-4U;
si0+=si1;
l7=si0;
si0=l6;
si0=i32_load(&i->m0,(U64)si0);
l8=si0;
si0=l6;
si1=4U;
si0+=si1;
l6=si0;
si0=l8;
si1=l5;
si0=si0 != si1;
if(si0){
goto L7;
}
}
L6:;
si0=l3;
sj0=i64_load(&i->m0,(U64)si0+8U);
sj1=-7215485279141357787ULL;
sj0^=sj1;
si1=l3;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
sj2=2151535569456304994ULL;
sj1^=sj2;
sj0|=sj1;
si0=!(sj0);
if(si0){
goto L4;
}
si0=l2;
si1=1682360U;
si2=7U;
si3=l2;
si3=i32_load(&i->m0,(U64)si3+88U);
si4=476U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si4=l5;
si5=l3;
si0=f7151(i,si0,si1,si2,si3,si4,si5);
l7=si0;
si0=l3;
si1=l3;
si1=i32_load(&i->m0,(U64)si1);
l8=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=1U;
l6=si0;
si0=l8;
si1=1U;
si0=si0 == si1;
if(si0){
goto L3;
}
goto L2;
L5:;
si0=l2;
si1=1679036U;
si2=4U;
si3=l2;
si3=i32_load(&i->m0,(U64)si3+88U);
si4=504U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si4=l5;
si5=l3;
si0=f7151(i,si0,si1,si2,si3,si4,si5);
l7=si0;
si0=l3;
si1=l3;
si1=i32_load(&i->m0,(U64)si1);
l8=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=1U;
l6=si0;
si0=l8;
si1=1U;
si0=si0 == si1;
if(si0){
goto L3;
}
goto L2;
L4:;
si0=l4;
si1=8U;
si0+=si1;
si1=l3;
si2=56U;
si1+=si2;
si2=l2;
f6613(i,si0,si1,si2);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+12U);
l7=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+8U);
l8=si0;
if(si0){
goto L9;
}
si0=1U;
l6=si0;
goto L8;
L9:;
si0=l7;
si0=i32_load(&i->m0,(U64)si0+36U);
l7=si0;
si0=0U;
l6=si0;
si0=l8;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l8;
si1=0U;
si2=l8;
si2=i32_load8_u(&i->m0,(U64)si2+4U);
l5=si2;
si3=l5;
si4=1U;
si3=si3 == si4;
l5=si3;
si1=si3?si1:si2;
i32_store8(&i->m0,(U64)si0+4U,si1);
si0=l5;
if(si0){
goto L10;
}
si0=l8;
si1=4U;
si0+=si1;
si1=0U;
f1440(i,si0,si1);
L10:;
si0=l7;
si1=l2;
si0=f12593(i,si0,si1);
l7=si0;
L8:;
si0=l3;
si1=l3;
si1=i32_load(&i->m0,(U64)si1);
l8=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l8;
si1=1U;
si0=si0 != si1;
if(si0){
goto L2;
}
L3:;
si0=l3;
f7690(i,si0);
L2:;
si0=l0;
si1=l7;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l6;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=16U;
si0+=si1;
i->g0=si0;
goto L0;
L1:;
si0=1649248U;
si1=36U;
si2=1649300U;
f703(i,si0,si1,si2);
UNREACHABLE;
L0:;
}

void f7072(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 l8=0;
U32 si0,si1,si2,si3,si4,si5;
U64 sj0,sj1,sj2;
si0=i->g0;
si1=16U;
si0-=si1;
l4=si0;
i->g0=si0;
si0=0U;
si0=i32_load(&i->m0,(U64)si0+2969252U);
si1=2U;
si0=si0 != si1;
if(si0){
goto L2;
}
si0=0U;
si0=i32_load(&i->m0,(U64)si0+2969256U);
l5=si0;
si1=l3;
si1=i32_load(&i->m0,(U64)si1+28U);
l6=si1;
si0=si0 == si1;
if(si0){
goto L7;
}
si0=l6;
si1=468U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=2U;
si0<<=(si1&31);
l7=si0;
si0=l6;
si1=460U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
L8:;
{
si0=l7;
si0=!(si0);
if(si0){
goto L6;
}
si0=l7;
si1=-4U;
si0+=si1;
l7=si0;
si0=l6;
si0=i32_load(&i->m0,(U64)si0);
l8=si0;
si0=l6;
si1=4U;
si0+=si1;
l6=si0;
si0=l8;
si1=l5;
si0=si0 != si1;
if(si0){
goto L8;
}
}
L7:;
si0=l3;
sj0=i64_load(&i->m0,(U64)si0+8U);
sj1=-7215485279141357787ULL;
sj0^=sj1;
si1=l3;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
sj2=2151535569456304994ULL;
sj1^=sj2;
sj0|=sj1;
si0=!(sj0);
if(si0){
goto L5;
}
si0=l2;
si1=1682360U;
si2=7U;
si3=l2;
si3=i32_load(&i->m0,(U64)si3+88U);
si4=476U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si4=l5;
si5=l3;
si0=f7151(i,si0,si1,si2,si3,si4,si5);
l7=si0;
si0=l3;
si1=l3;
si1=i32_load(&i->m0,(U64)si1);
l8=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=1U;
l6=si0;
si0=l8;
si1=1U;
si0=si0 == si1;
if(si0){
goto L4;
}
goto L3;
L6:;
si0=l2;
si1=1679036U;
si2=4U;
si3=l2;
si3=i32_load(&i->m0,(U64)si3+88U);
si4=504U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si4=l5;
si5=l3;
si0=f7151(i,si0,si1,si2,si3,si4,si5);
l7=si0;
si0=l3;
si1=l3;
si1=i32_load(&i->m0,(U64)si1);
l8=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=1U;
l6=si0;
si0=l8;
si1=1U;
si0=si0 == si1;
if(si0){
goto L4;
}
goto L3;
L5:;
si0=l4;
si1=8U;
si0+=si1;
si1=l3;
si2=56U;
si1+=si2;
si2=l2;
f6613(i,si0,si1,si2);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+12U);
l7=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+8U);
l8=si0;
if(si0){
goto L10;
}
si0=1U;
l6=si0;
goto L9;
L10:;
si0=l7;
si0=i32_load(&i->m0,(U64)si0+44U);
l7=si0;
si1=l7;
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
si0=0U;
l6=si0;
si0=l8;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l8;
si1=0U;
si2=l8;
si2=i32_load8_u(&i->m0,(U64)si2+4U);
l5=si2;
si3=l5;
si4=1U;
si3=si3 == si4;
l5=si3;
si1=si3?si1:si2;
i32_store8(&i->m0,(U64)si0+4U,si1);
si0=l5;
if(si0){
goto L9;
}
si0=0U;
l6=si0;
si0=l8;
si1=4U;
si0+=si1;
si1=0U;
f1440(i,si0,si1);
L9:;
si0=l3;
si1=l3;
si1=i32_load(&i->m0,(U64)si1);
l8=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l8;
si1=1U;
si0=si0 != si1;
if(si0){
goto L3;
}
L4:;
si0=l3;
f7690(i,si0);
L3:;
si0=l0;
si1=l7;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l6;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=16U;
si0+=si1;
i->g0=si0;
goto L0;
L2:;
si0=1649248U;
si1=36U;
si2=1649300U;
f703(i,si0,si1,si2);
UNREACHABLE;
L1:;
f15042(i);
UNREACHABLE;
L0:;
}

void f7073(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 l8=0;
U32 si0,si1,si2,si3,si4,si5;
U64 sj0,sj1,sj2;
si0=i->g0;
si1=16U;
si0-=si1;
l4=si0;
i->g0=si0;
si0=0U;
si0=i32_load(&i->m0,(U64)si0+2969252U);
si1=2U;
si0=si0 != si1;
if(si0){
goto L2;
}
si0=0U;
si0=i32_load(&i->m0,(U64)si0+2969256U);
l5=si0;
si1=l3;
si1=i32_load(&i->m0,(U64)si1+28U);
l6=si1;
si0=si0 == si1;
if(si0){
goto L7;
}
si0=l6;
si1=468U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=2U;
si0<<=(si1&31);
l7=si0;
si0=l6;
si1=460U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
L8:;
{
si0=l7;
si0=!(si0);
if(si0){
goto L6;
}
si0=l7;
si1=-4U;
si0+=si1;
l7=si0;
si0=l6;
si0=i32_load(&i->m0,(U64)si0);
l8=si0;
si0=l6;
si1=4U;
si0+=si1;
l6=si0;
si0=l8;
si1=l5;
si0=si0 != si1;
if(si0){
goto L8;
}
}
L7:;
si0=l3;
sj0=i64_load(&i->m0,(U64)si0+8U);
sj1=-7215485279141357787ULL;
sj0^=sj1;
si1=l3;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
sj2=2151535569456304994ULL;
sj1^=sj2;
sj0|=sj1;
si0=!(sj0);
if(si0){
goto L5;
}
si0=l2;
si1=1682360U;
si2=7U;
si3=l2;
si3=i32_load(&i->m0,(U64)si3+88U);
si4=476U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si4=l5;
si5=l3;
si0=f7151(i,si0,si1,si2,si3,si4,si5);
l7=si0;
si0=l3;
si1=l3;
si1=i32_load(&i->m0,(U64)si1);
l8=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=1U;
l6=si0;
si0=l8;
si1=1U;
si0=si0 == si1;
if(si0){
goto L4;
}
goto L3;
L6:;
si0=l2;
si1=1679036U;
si2=4U;
si3=l2;
si3=i32_load(&i->m0,(U64)si3+88U);
si4=504U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si4=l5;
si5=l3;
si0=f7151(i,si0,si1,si2,si3,si4,si5);
l7=si0;
si0=l3;
si1=l3;
si1=i32_load(&i->m0,(U64)si1);
l8=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=1U;
l6=si0;
si0=l8;
si1=1U;
si0=si0 == si1;
if(si0){
goto L4;
}
goto L3;
L5:;
si0=l4;
si1=8U;
si0+=si1;
si1=l3;
si2=56U;
si1+=si2;
si2=l2;
f6613(i,si0,si1,si2);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+12U);
l7=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+8U);
l8=si0;
if(si0){
goto L10;
}
si0=1U;
l6=si0;
goto L9;
L10:;
si0=l7;
si0=i32_load(&i->m0,(U64)si0+52U);
l7=si0;
si1=l7;
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
si0=0U;
l6=si0;
si0=l8;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l8;
si1=0U;
si2=l8;
si2=i32_load8_u(&i->m0,(U64)si2+4U);
l5=si2;
si3=l5;
si4=1U;
si3=si3 == si4;
l5=si3;
si1=si3?si1:si2;
i32_store8(&i->m0,(U64)si0+4U,si1);
si0=l5;
if(si0){
goto L9;
}
si0=0U;
l6=si0;
si0=l8;
si1=4U;
si0+=si1;
si1=0U;
f1440(i,si0,si1);
L9:;
si0=l3;
si1=l3;
si1=i32_load(&i->m0,(U64)si1);
l8=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l8;
si1=1U;
si0=si0 != si1;
if(si0){
goto L3;
}
L4:;
si0=l3;
f7690(i,si0);
L3:;
si0=l0;
si1=l7;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l6;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=16U;
si0+=si1;
i->g0=si0;
goto L0;
L2:;
si0=1649248U;
si1=36U;
si2=1649300U;
f703(i,si0,si1,si2);
UNREACHABLE;
L1:;
f15042(i);
UNREACHABLE;
L0:;
}

U32 f7074(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 si0,si1,si2;
U64 sj1;
si0=i->g0;
si1=48U;
si0-=si1;
l3=si0;
i->g0=si0;
si0=0U;
l4=si0;
si0=l1;
si1=77U;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=1U;
si0&=si1;
si0=!(si0);
if(si0){
goto L3;
}
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=64U;
si0=f15269(i,si0);
l4=si0;
si0=!(si0);
if(si0){
goto L2;
}
si0=l4;
sj1=-1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=56U;
si0+=si1;
sj1=-1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=48U;
si0+=si1;
sj1=-1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=40U;
si0+=si1;
sj1=-1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=32U;
si0+=si1;
sj1=-1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=24U;
si0+=si1;
sj1=-1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=16U;
si0+=si1;
sj1=-1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=8U;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l4;
si1=8U;
si0+=si1;
sj1=-1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=36U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si0=i32_load(&i->m0,(U64)si0+60U);
l2=si0;
si1=l2;
si1=i32_load(&i->m0,(U64)si1);
l5=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
sj1=0ULL;
i64_store(&i->m0,(U64)si0+28U,sj1);
si0=l3;
sj1=34359738376ULL;
i64_store(&i->m0,(U64)si0+16U,sj1);
si0=l3;
si1=l4;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l3;
si1=0U;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l5;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 == si1;
if(si0){
goto L1;
}
si0=l3;
si1=8U;
si0+=si1;
si1=l2;
si2=0U;
si0=f8146(i,si0,si1,si2);
l4=si0;
L3:;
si0=l0;
si1=l1;
si2=l4;
si0=f8110(i,si0,si1,si2);
l4=si0;
si0=l3;
si1=48U;
si0+=si1;
i->g0=si0;
si0=l4;
goto L0;
L2:;
si0=8U;
si1=64U;
f52(i,si0,si1);
UNREACHABLE;
L1:;
f15042(i);
UNREACHABLE;
L0:;
return si0;
}

void f7075(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 l8=0;
U32 si0,si1,si2,si3,si4;
si0=i->g0;
si1=48U;
si0-=si1;
l2=si0;
i->g0=si0;
si0=l0;
si1=20U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L5;
}
si0=l0;
si1=16U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=!(si0);
if(si0){
goto L5;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+8U);
l4=si0;
si0=l3;
si1=12U;
si0*=si1;
l5=si0;
si0=l0;
si1=24U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
L6:;
{
si0=l4;
si1=l5;
si0+=si1;
l7=si0;
si1=-12U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l8=si0;
si1=2U;
si0=si0 < si1;
if(si0){
goto L7;
}
si0=l7;
si1=-8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=l6;
si0=si0 != si1;
if(si0){
goto L4;
}
L7:;
si0=l8;
si1=l6;
si0*=si1;
l6=si0;
si0=l5;
si1=-12U;
si0+=si1;
l5=si0;
if(si0){
goto L6;
}
}
L5:;
si0=l2;
si1=l0;
si2=l0;
si2=i32_load(&i->m0,(U64)si2+4U);
l5=si2;
si2=i32_load(&i->m0,(U64)si2);
TF(i->t0,si2,void (*)(rustpythonInstance*,U32,U32))(i,si0,si1);
si0=l2;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si1=5U;
si0=si0 != si1;
if(si0){
goto L8;
}
si0=l0;
si1=16U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
goto L3;
L8:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+12U);
l7=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+8U);
l5=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+4U);
l8=si0;
si0=l6;
switch(si0){
case 0:
goto L13;
case 1:
goto L12;
case 2:
goto L10;
case 3:
goto L11;
case 4:
goto L10;
default:
goto L13;
}
L13:;
si0=l8;
l0=si0;
goto L9;
L12:;
si0=l8;
si1=1U;
si0+=si1;
l0=si0;
goto L9;
L11:;
si0=l8;
si1=4U;
si0+=si1;
l0=si0;
goto L9;
L10:;
si0=l5;
l0=si0;
si0=l7;
l5=si0;
L9:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
si1=l1;
si1=i32_load(&i->m0,(U64)si1+8U);
l7=si1;
si0-=si1;
si1=l5;
si0=si0 >= si1;
if(si0){
goto L14;
}
si0=l1;
si1=l7;
si2=l5;
f7248(i,si0,si1,si2);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+8U);
l7=si0;
L14:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
si1=l7;
si0+=si1;
si1=l0;
si2=l5;
si0=f15390(i,si0,si1,si2);
si0=l1;
si1=l7;
si2=l5;
si1+=si2;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l6;
switch(si0){
case 0:
goto L2;
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
si0=l8;
si1=l8;
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
goto L2;
}
si0=l8;
f1433(i,si0);
goto L2;
L17:;
si0=l8;
si1=0U;
si2=l8;
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
goto L2;
}
si0=l8;
si1=0U;
f1440(i,si0,si1);
goto L2;
L16:;
si0=l8;
si1=0U;
si2=l8;
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
goto L2;
}
si0=l8;
si1=0U;
f1440(i,si0,si1);
goto L2;
L15:;
si0=l8;
si1=l8;
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
goto L2;
}
si0=l8;
f1433(i,si0);
goto L2;
L4:;
si0=l2;
si1=5U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si0=i32_load(&i->m0,(U64)si0+4U);
l5=si0;
L3:;
si0=l2;
si1=16U;
si0+=si1;
si1=l0;
si2=l5;
si2=i32_load(&i->m0,(U64)si2);
TF(i->t0,si2,void (*)(rustpythonInstance*,U32,U32))(i,si0,si1);
si0=l2;
si0=i32_load(&i->m0,(U64)si0+16U);
l8=si0;
switch(si0){
case 0:
goto L24;
case 1:
goto L23;
case 2:
goto L22;
case 3:
goto L21;
case 4:
goto L20;
default:
goto L24;
}
L24:;
si0=l2;
si1=24U;
si0+=si1;
l6=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+20U);
l5=si0;
goto L19;
L23:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=1U;
si0+=si1;
l5=si0;
si0=l2;
si1=24U;
si0+=si1;
l6=si0;
goto L19;
L22:;
si0=l2;
si1=28U;
si0+=si1;
l6=si0;
si0=l2;
si1=24U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
goto L19;
L21:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=4U;
si0+=si1;
l5=si0;
si0=l2;
si1=24U;
si0+=si1;
l6=si0;
goto L19;
L20:;
si0=l2;
si1=28U;
si0+=si1;
l6=si0;
si0=l2;
si1=24U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
L19:;
si0=l2;
si1=32U;
si0+=si1;
si1=8U;
si0+=si1;
si1=l6;
si1=i32_load(&i->m0,(U64)si1);
l7=si1;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=l5;
i32_store(&i->m0,(U64)si0+36U,si1);
si0=l2;
si1=l1;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l3;
if(si0){
goto L26;
}
si0=l7;
si1=l0;
si2=24U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
l6=si1;
si0=si0 < si1;
if(si0){
goto L1;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
si1=l1;
si1=i32_load(&i->m0,(U64)si1+8U);
l7=si1;
si0-=si1;
si1=l6;
si0=si0 >= si1;
if(si0){
goto L27;
}
si0=l1;
si1=l7;
si2=l6;
f7248(i,si0,si1,si2);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+8U);
l7=si0;
L27:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
si1=l7;
si0+=si1;
si1=l5;
si2=l6;
si0=f15390(i,si0,si1,si2);
si0=l1;
si1=l7;
si2=l6;
si1+=si2;
i32_store(&i->m0,(U64)si0+8U,si1);
goto L25;
L26:;
si0=l0;
si1=8U;
si0+=si1;
l5=si0;
si0=i32_load(&i->m0,(U64)si0);
si1=l3;
si2=-1U;
si1+=si2;
si2=12U;
si1*=si2;
si0+=si1;
l6=si0;
si0=i32_load(&i->m0,(U64)si0+8U);
if(si0){
goto L29;
}
si0=l6;
si0=i32_load(&i->m0,(U64)si0+4U);
si1=l0;
si2=24U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
si0=si0 == si1;
if(si0){
goto L28;
}
L29:;
si0=l5;
si1=0U;
si2=0U;
si3=l2;
si4=32U;
si3+=si4;
f7076(i,si0,si1,si2,si3);
goto L25;
L28:;
si0=l5;
si1=0U;
si2=0U;
si3=l2;
si4=32U;
si3+=si4;
f7077(i,si0,si1,si2,si3);
L25:;
si0=l8;
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
si0=l2;
si0=i32_load(&i->m0,(U64)si0+20U);
l5=si0;
si1=l5;
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
goto L30;
}
si0=l5;
f1433(i,si0);
goto L30;
L33:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+20U);
l5=si0;
si1=0U;
si2=l5;
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
goto L30;
}
si0=l5;
si1=0U;
f1440(i,si0,si1);
goto L30;
L32:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+20U);
l5=si0;
si1=0U;
si2=l5;
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
goto L30;
}
si0=l5;
si1=0U;
f1440(i,si0,si1);
goto L30;
L31:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+20U);
l5=si0;
si1=l5;
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
goto L30;
}
si0=l5;
f1433(i,si0);
L30:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si1=5U;
si0=si0 == si1;
if(si0){
goto L2;
}
si0=l5;
switch(si0){
case 0:
goto L2;
case 1:
goto L37;
case 2:
goto L36;
case 3:
goto L35;
default:
goto L38;
}
L38:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+4U);
l5=si0;
si1=l5;
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
goto L2;
}
si0=l5;
f1433(i,si0);
goto L2;
L37:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+4U);
l5=si0;
si1=0U;
si2=l5;
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
goto L2;
}
si0=l5;
si1=0U;
f1440(i,si0,si1);
goto L2;
L36:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+4U);
l5=si0;
si1=0U;
si2=l5;
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
goto L2;
}
si0=l5;
si1=0U;
f1440(i,si0,si1);
goto L2;
L35:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+4U);
l5=si0;
si1=l5;
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
goto L2;
}
si0=l5;
f1433(i,si0);
L2:;
si0=l2;
si1=48U;
si0+=si1;
i->g0=si0;
goto L0;
L1:;
si0=l6;
si1=l7;
si2=1658956U;
f666(i,si0,si1,si2);
UNREACHABLE;
L0:;
}

void f7076(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 l8=0;
U32 si0,si1,si2,si3;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+8U);
l4=si0;
si1=l2;
si0=si0 <= si1;
if(si0){
goto L2;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
si1=l2;
si2=12U;
si1*=si2;
si0+=si1;
l5=si0;
si0=i32_load(&i->m0,(U64)si0+8U);
l6=si0;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+4U);
l7=si0;
si0=l5;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si0=l2;
si1=1U;
si0+=si1;
l8=si0;
si1=l4;
si0=si0 == si1;
if(si0){
goto L3;
}
si0=l5;
si0=!(si0);
if(si0){
goto L1;
}
si0=l6;
si1=l1;
si0+=si1;
l2=si0;
L4:;
{
si0=l0;
si1=l2;
si2=l8;
si3=l3;
f7076(i,si0,si1,si2,si3);
si0=l2;
si1=l7;
si0+=si1;
l2=si0;
si0=l5;
si1=-1U;
si0+=si1;
l5=si0;
if(si0){
goto L4;
}
goto L1;
}
L3:;
si0=l5;
si0=!(si0);
if(si0){
goto L1;
}
si0=l6;
si1=l1;
si0+=si1;
l8=si0;
si0=l3;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+4U);
l6=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+16U);
l2=si0;
L7:;
{
si0=l2;
si1=l8;
si0+=si1;
l0=si0;
si1=l2;
si0=si0 < si1;
if(si0){
goto L6;
}
si0=l1;
si1=l0;
si0=si0 < si1;
if(si0){
goto L5;
}
si0=l6;
si1=l8;
si0+=si1;
l4=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+4U);
si1=l3;
si1=i32_load(&i->m0,(U64)si1+8U);
l0=si1;
si0-=si1;
si1=l2;
si0=si0 >= si1;
if(si0){
goto L8;
}
si0=l3;
si1=l0;
si2=l2;
f7248(i,si0,si1,si2);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+8U);
l0=si0;
L8:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
si1=l0;
si0+=si1;
si1=l4;
si2=l2;
si0=f15390(i,si0,si1,si2);
si0=l3;
si1=l0;
si2=l2;
si1+=si2;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l8;
si1=l7;
si0+=si1;
l8=si0;
si0=l5;
si1=-1U;
si0+=si1;
l5=si0;
si0=!(si0);
if(si0){
goto L1;
}
goto L7;
}
L6:;
si0=l8;
si1=l0;
si2=1658956U;
f675(i,si0,si1,si2);
UNREACHABLE;
L5:;
si0=l0;
si1=l1;
si2=1658956U;
f666(i,si0,si1,si2);
UNREACHABLE;
L2:;
si0=l2;
si1=l4;
si2=1659108U;
f663(i,si0,si1,si2);
UNREACHABLE;
L1:;
L0:;
}

void f7077(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 si0,si1,si2,si3;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+8U);
l4=si0;
si1=l2;
si0=si0 <= si1;
if(si0){
goto L3;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
si1=l2;
si2=12U;
si1*=si2;
si0+=si1;
l5=si0;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si0=l2;
si1=1U;
si0+=si1;
l7=si0;
si1=l4;
si0=si0 == si1;
if(si0){
goto L4;
}
si0=l6;
si0=!(si0);
if(si0){
goto L5;
}
si0=l5;
si0=i32_load(&i->m0,(U64)si0+4U);
l4=si0;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+8U);
si1=l1;
si0+=si1;
l2=si0;
L6:;
{
si0=l0;
si1=l2;
si2=l7;
si3=l3;
f7077(i,si0,si1,si2,si3);
si0=l2;
si1=l4;
si0+=si1;
l2=si0;
si0=l6;
si1=-1U;
si0+=si1;
l6=si0;
if(si0){
goto L6;
}
}
L5:;
goto L0;
L4:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+16U);
si1=l6;
si0*=si1;
l2=si0;
si1=l1;
si0+=si1;
l6=si0;
si1=l2;
si0=si0 < si1;
if(si0){
goto L2;
}
si0=l3;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l0=si0;
si1=l6;
si0=si0 < si1;
if(si0){
goto L1;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0+4U);
si1=l1;
si0+=si1;
l7=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si0=i32_load(&i->m0,(U64)si0+4U);
si1=l6;
si1=i32_load(&i->m0,(U64)si1+8U);
l0=si1;
si0-=si1;
si1=l2;
si0=si0 >= si1;
if(si0){
goto L7;
}
si0=l6;
si1=l0;
si2=l2;
f7248(i,si0,si1,si2);
si0=l6;
si0=i32_load(&i->m0,(U64)si0+8U);
l0=si0;
L7:;
si0=l6;
si0=i32_load(&i->m0,(U64)si0);
si1=l0;
si0+=si1;
si1=l7;
si2=l2;
si0=f15390(i,si0,si1,si2);
si0=l6;
si1=l0;
si2=l2;
si1+=si2;
i32_store(&i->m0,(U64)si0+8U,si1);
goto L0;
L3:;
si0=l2;
si1=l4;
si2=1659108U;
f663(i,si0,si1,si2);
UNREACHABLE;
L2:;
si0=l1;
si1=l6;
si2=1658956U;
f675(i,si0,si1,si2);
UNREACHABLE;
L1:;
si0=l6;
si1=l0;
si2=1658956U;
f666(i,si0,si1,si2);
UNREACHABLE;
L0:;
}

void f7078(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
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
si1=192U;
si0-=si1;
l3=si0;
i->g0=si0;
si0=l1;
si1=20U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L3;
}
si0=l1;
si1=16U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
si0=!(si0);
if(si0){
goto L3;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+8U);
l5=si0;
si0=l4;
si1=12U;
si0*=si1;
l4=si0;
si0=l1;
si1=24U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
L4:;
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
goto L5;
}
si0=l7;
si1=-8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=l6;
si0=si0 != si1;
if(si0){
goto L2;
}
L5:;
si0=l8;
si1=l6;
si0*=si1;
l6=si0;
si0=l4;
si1=-12U;
si0+=si1;
l4=si0;
if(si0){
goto L4;
}
}
L3:;
si0=l3;
si1=24U;
si0+=si1;
si1=l1;
si2=l1;
si2=i32_load(&i->m0,(U64)si2+4U);
si2=i32_load(&i->m0,(U64)si2);
TF(i->t0,si2,void (*)(rustpythonInstance*,U32,U32))(i,si0,si1);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+24U);
l5=si0;
si1=5U;
si0=si0 == si1;
if(si0){
goto L2;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0+36U);
l6=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+32U);
l4=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+28U);
l1=si0;
si0=l5;
switch(si0){
case 0:
goto L9;
case 1:
goto L8;
case 2:
goto L6;
case 3:
goto L7;
case 4:
goto L6;
default:
goto L9;
}
L9:;
si0=0U;
l9=si0;
si0=l1;
l7=si0;
goto L1;
L8:;
si0=l1;
si1=1U;
si0+=si1;
l7=si0;
si0=0U;
l9=si0;
goto L1;
L7:;
si0=l1;
si1=4U;
si0+=si1;
l7=si0;
si0=0U;
l9=si0;
goto L1;
L6:;
si0=0U;
l9=si0;
si0=l4;
l7=si0;
si0=l6;
l4=si0;
goto L1;
L2:;
si0=l3;
si1=0U;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l3;
sj1=1ULL;
i64_store(&i->m0,(U64)si0+8U,sj1);
si0=l1;
si1=l3;
si2=8U;
si1+=si2;
f7075(i,si0,si1);
si0=1U;
l9=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+16U);
l4=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+8U);
l7=si0;
L1:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+4U);
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+8U);
si0=i32_load(&i->m0,(U64)si0);
l8=si0;
si0=l3;
si1=164U;
si0+=si1;
si1=l2;
si1=i32_load(&i->m0,(U64)si1);
l10=si1;
si1=i32_load(&i->m0,(U64)si1);
l11=si1;
si2=68U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=l7;
i32_store(&i->m0,(U64)si0+152U,si1);
si0=0U;
l7=si0;
si0=l3;
si1=0U;
i32_store16(&i->m0,(U64)si0+176U,si1);
si0=l3;
si1=l11;
si2=60U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0+160U,si1);
si0=l3;
si1=l4;
i32_store(&i->m0,(U64)si0+156U,si1);
si0=l3;
si1=l8;
si2=l4;
si3=l8;
si4=l4;
si3=si3 < si4;
si1=si3?si1:si2;
l4=si1;
i32_store(&i->m0,(U64)si0+172U,si1);
si0=l3;
si1=l6;
si2=l4;
si3=l6;
si4=l4;
si3=si3 < si4;
si1=si3?si1:si2;
l4=si1;
i32_store(&i->m0,(U64)si0+168U,si1);
si0=l3;
si1=109U;
si0+=si1;
si1=2U;
i32_store8(&i->m0,(U64)si0,si1);
si0=l3;
si1=80U;
si0+=si1;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=64U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=48U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=40U;
si0+=si1;
sj1=17179869184ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=56U;
si0+=si1;
sj1=21474836479ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=0U;
i32_store16(&i->m0,(U64)si0+112U,si1);
si0=l3;
sj1=4ULL;
i64_store(&i->m0,(U64)si0+72U,sj1);
si0=l3;
sj1=4ULL;
i64_store(&i->m0,(U64)si0+32U,sj1);
si0=l3;
si1=l4;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l3;
si1=l4;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l3;
si1=60U;
si0+=si1;
si1=0U;
f7267(i,si0,si1);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+60U);
si1=l3;
si2=68U;
si1+=si2;
l8=si1;
si1=i32_load(&i->m0,(U64)si1);
si2=28U;
si1*=si2;
si0+=si1;
l6=si0;
si1=258U;
i32_store16(&i->m0,(U64)si0+24U,si1);
si0=l6;
sj1=-1ULL;
i64_store(&i->m0,(U64)si0+16U,sj1);
si0=l6;
sj1=0ULL;
i64_store(&i->m0,(U64)si0+8U,sj1);
si0=l6;
si1=l4;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l6;
si1=l4;
i32_store(&i->m0,(U64)si0,si1);
si0=l8;
si1=l8;
si1=i32_load(&i->m0,(U64)si1);
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=24U;
si0+=si1;
si1=l3;
si2=152U;
si1+=si2;
f12027(i,si0,si1);
si0=l2;
si0=i32_load(&i->m0,(U64)si0+12U);
l4=si0;
si0=l3;
si0=i32_load8_u(&i->m0,(U64)si0+113U);
si0=!(si0);
if(si0){
goto L15;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0+16U);
l7=si0;
si0=l10;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si1=l6;
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
goto L13;
}
si0=l3;
si1=120U;
si0+=si1;
si1=l3;
si2=24U;
si1+=si2;
si2=l6;
si3=l4;
f14859(i,si0,si1,si2,si3);
si0=0U;
si0=i32_load(&i->m0,(U64)si0+2972340U);
si1=2U;
si0=si0 != si1;
if(si0){
goto L12;
}
si0=l7;
si0=i32_load(&i->m0,(U64)si0+88U);
l8=si0;
si0=0U;
si0=i32_load(&i->m0,(U64)si0+2972344U);
l6=si0;
si1=l6;
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
goto L13;
}
si0=0U;
l4=si0;
si0=l6;
si1=77U;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=1U;
si0&=si1;
si0=!(si0);
if(si0){
goto L16;
}
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=64U;
si0=f15269(i,si0);
l4=si0;
si0=!(si0);
if(si0){
goto L11;
}
si0=l4;
sj1=-1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=56U;
si0+=si1;
sj1=-1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=48U;
si0+=si1;
sj1=-1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=40U;
si0+=si1;
sj1=-1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=32U;
si0+=si1;
sj1=-1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=24U;
si0+=si1;
sj1=-1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=16U;
si0+=si1;
sj1=-1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=8U;
i32_store(&i->m0,(U64)si0+168U,si1);
si0=l4;
si1=8U;
si0+=si1;
sj1=-1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=180U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l8;
si1=68U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l8=si0;
si1=l8;
si1=i32_load(&i->m0,(U64)si1);
l7=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
sj1=0ULL;
i64_store(&i->m0,(U64)si0+172U,sj1);
si0=l3;
sj1=34359738376ULL;
i64_store(&i->m0,(U64)si0+160U,sj1);
si0=l3;
si1=l4;
i32_store(&i->m0,(U64)si0+156U,si1);
si0=l3;
si1=0U;
i32_store(&i->m0,(U64)si0+152U,si1);
si0=l7;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 == si1;
if(si0){
goto L13;
}
si0=l3;
si1=152U;
si0+=si1;
si1=l8;
si2=0U;
si0=f8146(i,si0,si1,si2);
l4=si0;
L16:;
si0=l3;
si1=120U;
si0+=si1;
si1=l6;
si2=l4;
si0=f8175(i,si0,si1,si2);
l7=si0;
goto L14;
L15:;
si0=l4;
si1=l4;
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
si0=l4;
f7690(i,si0);
L14:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+36U);
si0=!(si0);
if(si0){
goto L17;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0+32U);
f15271(i,si0);
L17:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+52U);
l6=si0;
si0=!(si0);
if(si0){
goto L18;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0+44U);
l4=si0;
L19:;
{
si0=l4;
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L20;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
f15271(i,si0);
L20:;
si0=l4;
si1=16U;
si0+=si1;
l4=si0;
si0=l6;
si1=-1U;
si0+=si1;
l6=si0;
if(si0){
goto L19;
}
}
L18:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+48U);
si0=!(si0);
if(si0){
goto L21;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0+44U);
f15271(i,si0);
L21:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+64U);
si0=!(si0);
if(si0){
goto L22;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0+60U);
f15271(i,si0);
L22:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+76U);
si0=!(si0);
if(si0){
goto L23;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0+72U);
f15271(i,si0);
L23:;
si0=l9;
si0=!(si0);
if(si0){
goto L24;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0+12U);
si0=!(si0);
if(si0){
goto L10;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0+8U);
f15271(i,si0);
goto L10;
L24:;
si0=l5;
switch(si0){
case 0:
goto L10;
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
si0=l1;
si1=l1;
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
goto L10;
}
si0=l1;
f1433(i,si0);
goto L10;
L27:;
si0=l1;
si1=0U;
si2=l1;
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
goto L10;
}
si0=l1;
si1=0U;
f1440(i,si0,si1);
goto L10;
L26:;
si0=l1;
si1=0U;
si2=l1;
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
goto L10;
}
si0=l1;
si1=0U;
f1440(i,si0,si1);
goto L10;
L25:;
si0=l1;
si1=l1;
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
goto L10;
}
si0=l1;
f1433(i,si0);
goto L10;
L13:;
f15042(i);
UNREACHABLE;
L12:;
si0=1975972U;
si1=36U;
si2=1976024U;
f703(i,si0,si1,si2);
UNREACHABLE;
L11:;
si0=8U;
si1=64U;
f52(i,si0,si1);
UNREACHABLE;
L10:;
si0=l0;
si1=l7;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=192U;
si0+=si1;
i->g0=si0;
L0:;
}

void f7079(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
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
si1=80U;
si0-=si1;
l3=si0;
i->g0=si0;
si0=l1;
si1=20U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L3;
}
si0=l1;
si1=16U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
si0=!(si0);
if(si0){
goto L3;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+8U);
l5=si0;
si0=l4;
si1=12U;
si0*=si1;
l4=si0;
si0=l1;
si1=24U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
L4:;
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
goto L5;
}
si0=l7;
si1=-8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=l6;
si0=si0 != si1;
if(si0){
goto L2;
}
L5:;
si0=l8;
si1=l6;
si0*=si1;
l6=si0;
si0=l4;
si1=-12U;
si0+=si1;
l4=si0;
if(si0){
goto L4;
}
}
L3:;
si0=l3;
si1=48U;
si0+=si1;
si1=l1;
si2=l1;
si2=i32_load(&i->m0,(U64)si2+4U);
si2=i32_load(&i->m0,(U64)si2);
TF(i->t0,si2,void (*)(rustpythonInstance*,U32,U32))(i,si0,si1);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+48U);
l9=si0;
si1=5U;
si0=si0 == si1;
if(si0){
goto L2;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0+60U);
l4=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+56U);
l8=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+52U);
l1=si0;
si0=l9;
switch(si0){
case 0:
goto L9;
case 1:
goto L8;
case 2:
goto L6;
case 3:
goto L7;
case 4:
goto L6;
default:
goto L9;
}
L9:;
si0=0U;
l10=si0;
si0=l1;
l6=si0;
goto L1;
L8:;
si0=l1;
si1=1U;
si0+=si1;
l6=si0;
si0=0U;
l10=si0;
goto L1;
L7:;
si0=l1;
si1=4U;
si0+=si1;
l6=si0;
si0=0U;
l10=si0;
goto L1;
L6:;
si0=0U;
l10=si0;
si0=l8;
l6=si0;
si0=l4;
l8=si0;
goto L1;
L2:;
si0=l3;
si1=0U;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l3;
sj1=1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si1=l3;
f7075(i,si0,si1);
si0=1U;
l10=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+8U);
l8=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
L1:;
si0=l3;
si1=l8;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l3;
si1=l6;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l2;
si0=i32_load(&i->m0,(U64)si0+4U);
l7=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+8U);
l5=si0;
if(si0){
goto L16;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0+12U);
l5=si0;
si1=16U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L11;
}
si0=l5;
si0=i32_load(&i->m0,(U64)si0+8U);
l5=si0;
si0=i32_load(&i->m0,(U64)si0+4U);
l11=si0;
si1=l5;
si1=i32_load(&i->m0,(U64)si1);
l5=si1;
si0|=si1;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L15;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0+16U);
l2=si0;
si0=l3;
si1=l5;
i32_store(&i->m0,(U64)si0+60U,si1);
si0=l3;
si1=l11;
i32_store(&i->m0,(U64)si0+56U,si1);
si0=l3;
si1=l6;
i32_store(&i->m0,(U64)si0+48U,si1);
si0=l3;
si1=l6;
si2=l8;
si1+=si2;
i32_store(&i->m0,(U64)si0+52U,si1);
si0=l2;
si0=i32_load(&i->m0,(U64)si0+88U);
l6=si0;
si0=l3;
si1=32U;
si0+=si1;
si1=l3;
si2=48U;
si1+=si2;
f11335(i,si0,si1);
si0=l6;
si1=24U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l8=si0;
si1=l8;
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
goto L13;
}
f15042(i);
UNREACHABLE;
L16:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+12U);
l8=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+16U);
l6=si0;
si0=l3;
si1=0U;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l3;
si1=l6;
i32_store(&i->m0,(U64)si0+68U,si1);
si0=l3;
si1=l8;
i32_store(&i->m0,(U64)si0+64U,si1);
si0=l3;
si1=l4;
si2=l5;
si3=2U;
si2<<=(si3&31);
si1+=si2;
i32_store(&i->m0,(U64)si0+60U,si1);
si0=l3;
si1=l4;
i32_store(&i->m0,(U64)si0+56U,si1);
si0=l3;
si1=l7;
i32_store(&i->m0,(U64)si0+52U,si1);
si0=l3;
si1=l4;
i32_store(&i->m0,(U64)si0+48U,si1);
si0=l3;
si1=l3;
si2=16U;
si1+=si2;
i32_store(&i->m0,(U64)si0+72U,si1);
si0=l3;
si1=l3;
si2=28U;
si1+=si2;
i32_store(&i->m0,(U64)si0+76U,si1);
si0=l3;
si1=32U;
si0+=si1;
si1=l3;
si2=48U;
si1+=si2;
f11191(i,si0,si1);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+28U);
l5=si0;
si0=!(si0);
if(si0){
goto L17;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0+40U);
l8=si0;
si0=!(si0);
if(si0){
goto L18;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0+32U);
l4=si0;
L19:;
{
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
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
goto L20;
}
si0=l6;
f7690(i,si0);
L20:;
si0=l4;
si1=4U;
si0+=si1;
l4=si0;
si0=l8;
si1=-1U;
si0+=si1;
l8=si0;
if(si0){
goto L19;
}
}
L18:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+36U);
si0=!(si0);
if(si0){
goto L21;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0+32U);
f15271(i,si0);
L21:;
si0=1U;
l6=si0;
goto L12;
L17:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+36U);
l5=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+32U);
l4=si0;
if(si0){
goto L14;
}
si0=1U;
l6=si0;
goto L12;
L15:;
si0=1647592U;
si1=43U;
si2=1664656U;
f673(i,si0,si1,si2);
UNREACHABLE;
L14:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+40U);
l8=si0;
si1=1U;
si0=si0 == si1;
if(si0){
goto L22;
}
si0=l6;
si0=i32_load(&i->m0,(U64)si0+88U);
l6=si0;
si0=l3;
si1=l8;
i32_store(&i->m0,(U64)si0+56U,si1);
si0=l3;
si1=l5;
i32_store(&i->m0,(U64)si0+52U,si1);
si0=l3;
si1=l4;
i32_store(&i->m0,(U64)si0+48U,si1);
si0=l3;
si1=48U;
si0+=si1;
si1=l6;
si2=8U;
si1+=si2;
si0=f5724(i,si0,si1);
l5=si0;
si0=0U;
l6=si0;
goto L12;
L22:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
l8=si0;
si0=0U;
l6=si0;
si0=l5;
if(si0){
goto L23;
}
si0=l8;
l5=si0;
goto L12;
L23:;
si0=l4;
f15271(i,si0);
si0=l8;
l5=si0;
goto L12;
L13:;
si0=0U;
l6=si0;
si0=l3;
si1=32U;
si0+=si1;
si1=l8;
si2=0U;
si0=f8110(i,si0,si1,si2);
l5=si0;
si0=l7;
si0=!(si0);
if(si0){
goto L12;
}
si0=l4;
f15271(i,si0);
L12:;
si0=l10;
si0=!(si0);
if(si0){
goto L24;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0+4U);
si0=!(si0);
if(si0){
goto L10;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
f15271(i,si0);
goto L10;
L24:;
si0=l9;
switch(si0){
case 0:
goto L10;
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
si0=l1;
si1=l1;
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
goto L10;
}
si0=l1;
f1433(i,si0);
goto L10;
L27:;
si0=l1;
si1=0U;
si2=l1;
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
goto L10;
}
si0=l1;
si1=0U;
f1440(i,si0,si1);
goto L10;
L26:;
si0=l1;
si1=0U;
si2=l1;
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
goto L10;
}
si0=l1;
si1=0U;
f1440(i,si0,si1);
goto L10;
L25:;
si0=l1;
si1=l1;
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
goto L10;
}
si0=l1;
f1433(i,si0);
goto L10;
L11:;
si0=0U;
si1=0U;
si2=1981580U;
f663(i,si0,si1,si2);
UNREACHABLE;
L10:;
si0=l0;
si1=l5;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l6;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=80U;
si0+=si1;
i->g0=si0;
L0:;
}

void f7080(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
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
si0=l1;
si1=20U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L4;
}
si0=l1;
si1=16U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
si0=!(si0);
if(si0){
goto L4;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+8U);
l5=si0;
si0=l4;
si1=12U;
si0*=si1;
l4=si0;
si0=l1;
si1=24U;
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
si0=l3;
si1=16U;
si0+=si1;
si1=l1;
si2=l1;
si2=i32_load(&i->m0,(U64)si2+4U);
si2=i32_load(&i->m0,(U64)si2);
TF(i->t0,si2,void (*)(rustpythonInstance*,U32,U32))(i,si0,si1);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+16U);
l6=si0;
si1=5U;
si0=si0 != si1;
if(si0){
goto L2;
}
L3:;
si0=l3;
si1=0U;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l3;
sj1=1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si1=l3;
f7075(i,si0,si1);
si0=l0;
si1=l2;
si2=l3;
si2=i32_load(&i->m0,(U64)si2);
si3=l3;
si3=i32_load(&i->m0,(U64)si3+8U);
f2376(i,si0,si1,si2,si3);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+4U);
si0=!(si0);
if(si0){
goto L1;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
f15271(i,si0);
goto L1;
L2:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+28U);
l7=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+24U);
l8=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+20U);
l4=si0;
si0=l6;
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
si0=l0;
si1=l2;
si2=l4;
si3=l8;
f2376(i,si0,si1,si2,si3);
goto L1;
L10:;
si0=l0;
si1=l2;
si2=l8;
si3=l7;
f2376(i,si0,si1,si2,si3);
si0=l4;
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
f1433(i,si0);
goto L1;
L9:;
si0=l0;
si1=l2;
si2=l4;
si3=1U;
si2+=si3;
si3=l8;
f2376(i,si0,si1,si2,si3);
si0=l4;
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
f1440(i,si0,si1);
goto L1;
L8:;
si0=l0;
si1=l2;
si2=l8;
si3=l7;
f2376(i,si0,si1,si2,si3);
si0=l4;
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
f1440(i,si0,si1);
goto L1;
L7:;
si0=l0;
si1=l2;
si2=l4;
si3=4U;
si2+=si3;
si3=l8;
f2376(i,si0,si1,si2,si3);
si0=l4;
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
f1433(i,si0);
L1:;
si0=l3;
si1=32U;
si0+=si1;
i->g0=si0;
L0:;
}

void f7081(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
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
l3=si0;
i->g0=si0;
si0=l1;
si1=20U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L3;
}
si0=l1;
si1=16U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
si0=!(si0);
if(si0){
goto L3;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+8U);
l5=si0;
si0=l4;
si1=12U;
si0*=si1;
l4=si0;
si0=l1;
si1=24U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
L4:;
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
goto L5;
}
si0=l7;
si1=-8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=l6;
si0=si0 != si1;
if(si0){
goto L2;
}
L5:;
si0=l8;
si1=l6;
si0*=si1;
l6=si0;
si0=l4;
si1=-12U;
si0+=si1;
l4=si0;
if(si0){
goto L4;
}
}
L3:;
si0=l3;
si1=24U;
si0+=si1;
si1=l1;
si2=l1;
si2=i32_load(&i->m0,(U64)si2+4U);
si2=i32_load(&i->m0,(U64)si2);
TF(i->t0,si2,void (*)(rustpythonInstance*,U32,U32))(i,si0,si1);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+24U);
l6=si0;
si1=5U;
si0=si0 == si1;
if(si0){
goto L2;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0+36U);
l7=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+32U);
l4=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+28U);
l8=si0;
si0=l6;
switch(si0){
case 0:
goto L9;
case 1:
goto L8;
case 2:
goto L6;
case 3:
goto L7;
case 4:
goto L6;
default:
goto L9;
}
L9:;
si0=0U;
l5=si0;
si0=l8;
l1=si0;
goto L1;
L8:;
si0=l8;
si1=1U;
si0+=si1;
l1=si0;
si0=0U;
l5=si0;
goto L1;
L7:;
si0=l8;
si1=4U;
si0+=si1;
l1=si0;
si0=0U;
l5=si0;
goto L1;
L6:;
si0=0U;
l5=si0;
si0=l4;
l1=si0;
si0=l7;
l4=si0;
goto L1;
L2:;
si0=l3;
si1=0U;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l3;
sj1=1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si1=l3;
f7075(i,si0,si1);
si0=1U;
l5=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+8U);
l4=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
L1:;
si0=l3;
si1=44U;
si0+=si1;
si1=l2;
si1=i32_load(&i->m0,(U64)si1);
l7=si1;
si2=16U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=1U;
i32_store(&i->m0,(U64)si0+40U,si1);
si0=l3;
si1=l4;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l3;
si1=l1;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l3;
si1=l2;
si1=i32_load(&i->m0,(U64)si1+8U);
i32_store(&i->m0,(U64)si0+36U,si1);
si0=l3;
si1=l2;
si1=i32_load(&i->m0,(U64)si1+4U);
l4=si1;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l3;
si1=l7;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l3;
si1=l3;
si2=16U;
si1+=si2;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l3;
si1=48U;
si0+=si1;
si1=l3;
si2=24U;
si1+=si2;
f11295(i,si0,si1);
si0=l3;
si1=48U;
si0+=si1;
si1=l4;
si1=i32_load(&i->m0,(U64)si1+88U);
si2=8U;
si1+=si2;
si0=f5724(i,si0,si1);
l4=si0;
si0=l5;
si0=!(si0);
if(si0){
goto L11;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0+4U);
si0=!(si0);
if(si0){
goto L10;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
f15271(i,si0);
goto L10;
L11:;
si0=l6;
switch(si0){
case 0:
goto L10;
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
si0=l8;
si1=l8;
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
goto L10;
}
si0=l8;
f1433(i,si0);
goto L10;
L14:;
si0=l8;
si1=0U;
si2=l8;
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
goto L10;
}
si0=l8;
si1=0U;
f1440(i,si0,si1);
goto L10;
L13:;
si0=l8;
si1=0U;
si2=l8;
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
goto L10;
}
si0=l8;
si1=0U;
f1440(i,si0,si1);
goto L10;
L12:;
si0=l8;
si1=l8;
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
goto L10;
}
si0=l8;
f1433(i,si0);
L10:;
si0=l0;
si1=l4;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=64U;
si0+=si1;
i->g0=si0;
L0:;
}

void f7082(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
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
U32 si0,si1,si2,si3,si4;
U64 sj1;
si0=i->g0;
si1=240U;
si0-=si1;
l3=si0;
i->g0=si0;
si0=l1;
si1=20U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L3;
}
si0=l1;
si1=16U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
si0=!(si0);
if(si0){
goto L3;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+8U);
l5=si0;
si0=l4;
si1=12U;
si0*=si1;
l4=si0;
si0=l1;
si1=24U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
L4:;
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
goto L5;
}
si0=l7;
si1=-8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=l6;
si0=si0 != si1;
if(si0){
goto L2;
}
L5:;
si0=l8;
si1=l6;
si0*=si1;
l6=si0;
si0=l4;
si1=-12U;
si0+=si1;
l4=si0;
if(si0){
goto L4;
}
}
L3:;
si0=l3;
si1=48U;
si0+=si1;
si1=l1;
si2=l1;
si2=i32_load(&i->m0,(U64)si2+4U);
si2=i32_load(&i->m0,(U64)si2);
TF(i->t0,si2,void (*)(rustpythonInstance*,U32,U32))(i,si0,si1);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+48U);
l9=si0;
si1=5U;
si0=si0 == si1;
if(si0){
goto L2;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0+60U);
l6=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+56U);
l4=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+52U);
l10=si0;
si0=l9;
switch(si0){
case 0:
goto L9;
case 1:
goto L8;
case 2:
goto L6;
case 3:
goto L7;
case 4:
goto L6;
default:
goto L9;
}
L9:;
si0=0U;
l11=si0;
si0=l10;
l1=si0;
goto L1;
L8:;
si0=l10;
si1=1U;
si0+=si1;
l1=si0;
si0=0U;
l11=si0;
goto L1;
L7:;
si0=l10;
si1=4U;
si0+=si1;
l1=si0;
si0=0U;
l11=si0;
goto L1;
L6:;
si0=0U;
l11=si0;
si0=l4;
l1=si0;
si0=l6;
l4=si0;
goto L1;
L2:;
si0=l3;
si1=0U;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l3;
sj1=1ULL;
i64_store(&i->m0,(U64)si0+16U,sj1);
si0=l1;
si1=l3;
si2=16U;
si1+=si2;
f7075(i,si0,si1);
si0=1U;
l11=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+24U);
l4=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+16U);
l1=si0;
L1:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si1=60U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
si0=l6;
si1=68U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l12=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+8U);
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+12U);
si0=i32_load(&i->m0,(U64)si0);
l8=si0;
si0=l3;
si1=0U;
i32_store(&i->m0,(U64)si0+40U,si1);
si0=l3;
sj1=4ULL;
i64_store(&i->m0,(U64)si0+32U,sj1);
si0=l3;
si1=164U;
si0+=si1;
si1=0U;
i32_store16(&i->m0,(U64)si0,si1);
si0=l3;
si1=161U;
si0+=si1;
si1=2U;
i32_store8(&i->m0,(U64)si0,si1);
si0=l3;
si1=128U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=120U;
si0+=si1;
sj1=17179869184ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=112U;
si0+=si1;
sj1=4ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=104U;
si0+=si1;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=96U;
si0+=si1;
sj1=4ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=84U;
si0+=si1;
sj1=4ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
sj1=0ULL;
i64_store(&i->m0,(U64)si0+76U,sj1);
si0=l3;
si1=0U;
i32_store16(&i->m0,(U64)si0+72U,si1);
si0=l3;
si1=l12;
i32_store(&i->m0,(U64)si0+60U,si1);
si0=l3;
si1=l7;
i32_store(&i->m0,(U64)si0+56U,si1);
si0=l3;
si1=l4;
i32_store(&i->m0,(U64)si0+52U,si1);
si0=l3;
si1=l8;
si2=l4;
si3=l8;
si4=l4;
si3=si3 < si4;
si1=si3?si1:si2;
l8=si1;
i32_store(&i->m0,(U64)si0+68U,si1);
si0=l3;
si1=l6;
si2=l8;
si3=l6;
si4=l8;
si3=si3 < si4;
si1=si3?si1:si2;
l8=si1;
i32_store(&i->m0,(U64)si0+64U,si1);
si0=l3;
si1=l1;
i32_store(&i->m0,(U64)si0+48U,si1);
si0=l1;
si1=l4;
si0+=si1;
l12=si0;
si0=l3;
si1=76U;
si0+=si1;
l7=si0;
L11:;
{
si0=l3;
si1=0U;
i32_store(&i->m0,(U64)si0+92U,si1);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+104U);
l6=si0;
si0=l3;
sj1=-4294967296ULL;
i64_store(&i->m0,(U64)si0+104U,sj1);
si0=l6;
si0=!(si0);
if(si0){
goto L12;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0+96U);
l4=si0;
L13:;
{
si0=l4;
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L14;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
f15271(i,si0);
L14:;
si0=l4;
si1=16U;
si0+=si1;
l4=si0;
si0=l6;
si1=-1U;
si0+=si1;
l6=si0;
if(si0){
goto L13;
}
}
L12:;
si0=l3;
si1=0U;
i32_store(&i->m0,(U64)si0+132U,si1);
si0=l3;
si1=0U;
i32_store(&i->m0,(U64)si0+120U,si1);
si0=l3;
si1=0U;
i32_store16(&i->m0,(U64)si0+164U,si1);
si0=l3;
si1=2U;
i32_store8(&i->m0,(U64)si0+161U,si1);
si0=l3;
si1=l8;
i32_store(&i->m0,(U64)si0+80U,si1);
si0=l3;
si1=l8;
i32_store(&i->m0,(U64)si0+76U,si1);
si0=l3;
si1=168U;
si0+=si1;
si1=24U;
si0+=si1;
si1=l3;
si2=48U;
si1+=si2;
si2=24U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=168U;
si0+=si1;
si1=16U;
si0+=si1;
si1=l3;
si2=48U;
si1+=si2;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=168U;
si0+=si1;
si1=8U;
si0+=si1;
si1=l3;
si2=48U;
si1+=si2;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=l3;
sj1=i64_load(&i->m0,(U64)si1+48U);
i64_store(&i->m0,(U64)si0+168U,sj1);
si0=l7;
si1=l3;
si2=168U;
si1+=si2;
f12029(i,si0,si1);
si0=l3;
si0=i32_load8_u(&i->m0,(U64)si0+165U);
si0=!(si0);
if(si0){
goto L15;
}
si0=l3;
si1=l3;
si1=i32_load(&i->m0,(U64)si1+80U);
l4=si1;
i32_store(&i->m0,(U64)si0+64U,si1);
si0=l3;
si1=l4;
si2=l3;
si2=i32_load(&i->m0,(U64)si2+76U);
si1=si1 == si2;
i32_store8(&i->m0,(U64)si0+73U,si1);
si0=l5;
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
goto L18;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0+4U);
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si1=l6;
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
goto L18;
}
si0=l3;
si1=168U;
si0+=si1;
si1=l7;
si2=l4;
si3=l6;
f14859(i,si0,si1,si2,si3);
si0=l2;
si0=i32_load(&i->m0,(U64)si0+16U);
l4=si0;
si0=l5;
si0=i32_load(&i->m0,(U64)si0);
si1=88U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si1=2U;
si0=si0 < si1;
if(si0){
goto L19;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0+88U);
si1=200U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si1=l6;
si1=i32_load(&i->m0,(U64)si1);
l8=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
sj1=-1ULL;
i64_store(&i->m0,(U64)si0+216U,sj1);
si0=l3;
sj1=1ULL;
i64_store(&i->m0,(U64)si0+208U,sj1);
si0=l3;
sj1=-4294967296ULL;
i64_store(&i->m0,(U64)si0+200U,sj1);
si0=l8;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 == si1;
if(si0){
goto L18;
}
si0=l3;
si1=8U;
si0+=si1;
si1=l3;
si2=168U;
si1+=si2;
si2=l3;
si3=200U;
si2+=si3;
si3=l6;
si4=0U;
si2=f8078(i,si2,si3,si4);
si3=l4;
f14467(i,si0,si1,si2,si3);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+12U);
l6=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+8U);
si0=!(si0);
if(si0){
goto L16;
}
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l6;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+168U);
l4=si0;
si1=l4;
si1=i32_load(&i->m0,(U64)si1);
l6=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l6;
si1=1U;
si0=si0 != si1;
if(si0){
goto L20;
}
si0=l4;
f7690(i,si0);
L20:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+172U);
l4=si0;
si1=l4;
si1=i32_load(&i->m0,(U64)si1);
l6=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l6;
si1=1U;
si0=si0 != si1;
if(si0){
goto L21;
}
si0=l4;
f7690(i,si0);
L21:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+180U);
si0=!(si0);
if(si0){
goto L22;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0+176U);
f15271(i,si0);
L22:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+88U);
si0=!(si0);
if(si0){
goto L23;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0+84U);
f15271(i,si0);
L23:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+104U);
l6=si0;
si0=!(si0);
if(si0){
goto L24;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0+96U);
l4=si0;
L25:;
{
si0=l4;
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L26;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
f15271(i,si0);
L26:;
si0=l4;
si1=16U;
si0+=si1;
l4=si0;
si0=l6;
si1=-1U;
si0+=si1;
l6=si0;
if(si0){
goto L25;
}
}
L24:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+100U);
si0=!(si0);
if(si0){
goto L27;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0+96U);
f15271(i,si0);
L27:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+116U);
si0=!(si0);
if(si0){
goto L28;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0+112U);
f15271(i,si0);
L28:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+128U);
si0=!(si0);
if(si0){
goto L29;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0+124U);
f15271(i,si0);
L29:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+40U);
l8=si0;
si0=!(si0);
if(si0){
goto L30;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0+32U);
l4=si0;
L31:;
{
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si1=l6;
si1=i32_load(&i->m0,(U64)si1);
l2=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=1U;
si0=si0 != si1;
if(si0){
goto L32;
}
si0=l6;
f7690(i,si0);
L32:;
si0=l4;
si1=4U;
si0+=si1;
l4=si0;
si0=l8;
si1=-1U;
si0+=si1;
l8=si0;
if(si0){
goto L31;
}
}
L30:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+36U);
si0=!(si0);
if(si0){
goto L10;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0+32U);
f15271(i,si0);
goto L10;
L19:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+184U);
l8=si0;
si1=l6;
si0=si0 <= si1;
if(si0){
goto L17;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0+176U);
si1=l6;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l6=si0;
si0=i32_load(&i->m0,(U64)si0+4U);
l8=si0;
si1=l6;
si1=i32_load(&i->m0,(U64)si1);
l6=si1;
si0|=si1;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L33;
}
si0=l3;
si1=l6;
i32_store(&i->m0,(U64)si0+212U,si1);
si0=l3;
si1=l8;
i32_store(&i->m0,(U64)si0+208U,si1);
si0=l3;
si1=l12;
i32_store(&i->m0,(U64)si0+204U,si1);
si0=l3;
si1=l1;
i32_store(&i->m0,(U64)si0+200U,si1);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+88U);
l4=si0;
si0=l3;
si1=224U;
si0+=si1;
si1=l3;
si2=200U;
si1+=si2;
f11335(i,si0,si1);
si0=l4;
si1=24U;
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
goto L18;
}
si0=l3;
si1=224U;
si0+=si1;
si1=l4;
si2=0U;
si0=f8110(i,si0,si1,si2);
l6=si0;
goto L16;
L33:;
si0=l4;
si1=88U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=1272U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si1=l6;
si1=i32_load(&i->m0,(U64)si1);
l4=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 != si1;
if(si0){
goto L16;
}
L18:;
f15042(i);
UNREACHABLE;
L17:;
si0=l6;
si1=l8;
si2=1981580U;
f663(i,si0,si1,si2);
UNREACHABLE;
L16:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+40U);
l4=si0;
si1=l3;
si1=i32_load(&i->m0,(U64)si1+36U);
si0=si0 != si1;
if(si0){
goto L34;
}
si0=l3;
si1=32U;
si0+=si1;
si1=l4;
f7257(i,si0,si1);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+40U);
l4=si0;
L34:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+32U);
si1=l4;
si2=2U;
si1<<=(si2&31);
si0+=si1;
si1=l6;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=l3;
si1=i32_load(&i->m0,(U64)si1+40U);
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0+40U,si1);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+168U);
l4=si0;
si1=l4;
si1=i32_load(&i->m0,(U64)si1);
l6=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l6;
si1=1U;
si0=si0 != si1;
if(si0){
goto L35;
}
si0=l4;
f7690(i,si0);
L35:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+172U);
l4=si0;
si1=l4;
si1=i32_load(&i->m0,(U64)si1);
l6=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l6;
si1=1U;
si0=si0 != si1;
if(si0){
goto L36;
}
si0=l4;
f7690(i,si0);
L36:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+180U);
si0=!(si0);
if(si0){
goto L37;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0+176U);
f15271(i,si0);
L37:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+64U);
l8=si0;
si1=l3;
si1=i32_load(&i->m0,(U64)si1+68U);
si0=si0 <= si1;
if(si0){
goto L11;
}
L15:;
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
si0=l3;
si0=i32_load(&i->m0,(U64)si0+88U);
si0=!(si0);
if(si0){
goto L38;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0+84U);
f15271(i,si0);
L38:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+104U);
l6=si0;
si0=!(si0);
if(si0){
goto L39;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0+96U);
l4=si0;
L40:;
{
si0=l4;
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L41;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
f15271(i,si0);
L41:;
si0=l4;
si1=16U;
si0+=si1;
l4=si0;
si0=l6;
si1=-1U;
si0+=si1;
l6=si0;
if(si0){
goto L40;
}
}
L39:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+100U);
si0=!(si0);
if(si0){
goto L42;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0+96U);
f15271(i,si0);
L42:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+116U);
si0=!(si0);
if(si0){
goto L43;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0+112U);
f15271(i,si0);
L43:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+128U);
si0=!(si0);
if(si0){
goto L10;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0+124U);
f15271(i,si0);
L10:;
si0=l11;
si0=!(si0);
if(si0){
goto L45;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0+20U);
si0=!(si0);
if(si0){
goto L44;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0+16U);
f15271(i,si0);
goto L44;
L45:;
si0=l9;
switch(si0){
case 0:
goto L44;
case 1:
goto L49;
case 2:
goto L48;
case 3:
goto L47;
default:
goto L50;
}
L50:;
si0=l10;
si1=l10;
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
goto L46;
}
goto L44;
L49:;
si0=l10;
si1=0U;
si2=l10;
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
goto L44;
}
si0=l10;
si1=0U;
f1440(i,si0,si1);
goto L44;
L48:;
si0=l10;
si1=0U;
si2=l10;
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
goto L44;
}
si0=l10;
si1=0U;
f1440(i,si0,si1);
goto L44;
L47:;
si0=l10;
si1=l10;
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
goto L44;
}
L46:;
si0=l10;
f1433(i,si0);
L44:;
si0=l3;
si1=240U;
si0+=si1;
i->g0=si0;
L0:;
}

void f7083(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
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
si0=i->g0;
si1=192U;
si0-=si1;
l4=si0;
i->g0=si0;
si0=l1;
si1=20U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L3;
}
si0=l1;
si1=16U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si0=!(si0);
if(si0){
goto L3;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+8U);
l6=si0;
si0=l5;
si1=12U;
si0*=si1;
l5=si0;
si0=l1;
si1=24U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
L4:;
{
si0=l6;
si1=l5;
si0+=si1;
l8=si0;
si1=-12U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l9=si0;
si1=2U;
si0=si0 < si1;
if(si0){
goto L5;
}
si0=l8;
si1=-8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=l7;
si0=si0 != si1;
if(si0){
goto L2;
}
L5:;
si0=l9;
si1=l7;
si0*=si1;
l7=si0;
si0=l5;
si1=-12U;
si0+=si1;
l5=si0;
if(si0){
goto L4;
}
}
L3:;
si0=l4;
si1=24U;
si0+=si1;
si1=l1;
si2=l1;
si2=i32_load(&i->m0,(U64)si2+4U);
si2=i32_load(&i->m0,(U64)si2);
TF(i->t0,si2,void (*)(rustpythonInstance*,U32,U32))(i,si0,si1);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+24U);
l6=si0;
si1=5U;
si0=si0 == si1;
if(si0){
goto L2;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0+36U);
l7=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+32U);
l5=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+28U);
l1=si0;
si0=l6;
switch(si0){
case 0:
goto L9;
case 1:
goto L8;
case 2:
goto L6;
case 3:
goto L7;
case 4:
goto L6;
default:
goto L9;
}
L9:;
si0=0U;
l10=si0;
si0=l1;
l11=si0;
goto L1;
L8:;
si0=l1;
si1=1U;
si0+=si1;
l11=si0;
si0=0U;
l10=si0;
goto L1;
L7:;
si0=l1;
si1=4U;
si0+=si1;
l11=si0;
si0=0U;
l10=si0;
goto L1;
L6:;
si0=0U;
l10=si0;
si0=l5;
l11=si0;
si0=l7;
l5=si0;
goto L1;
L2:;
si0=l4;
si1=0U;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l4;
sj1=1ULL;
i64_store(&i->m0,(U64)si0+8U,sj1);
si0=l1;
si1=l4;
si2=8U;
si1+=si2;
f7075(i,si0,si1);
si0=1U;
l10=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+16U);
l5=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+8U);
l11=si0;
L1:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
si1=60U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l12=si0;
si0=l7;
si1=68U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l13=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+8U);
l7=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+12U);
l9=si0;
si0=0U;
l8=si0;
si0=l4;
si1=80U;
si0+=si1;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=64U;
si0+=si1;
l14=si0;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=48U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=40U;
si0+=si1;
sj1=17179869184ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=56U;
si0+=si1;
sj1=21474836479ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=109U;
si0+=si1;
si1=2U;
i32_store8(&i->m0,(U64)si0,si1);
si0=l4;
sj1=4ULL;
i64_store(&i->m0,(U64)si0+72U,sj1);
si0=l4;
sj1=4ULL;
i64_store(&i->m0,(U64)si0+32U,sj1);
si0=l4;
sj1=0ULL;
i64_store(&i->m0,(U64)si0+24U,sj1);
si0=l4;
si1=0U;
i32_store16(&i->m0,(U64)si0+112U,si1);
si0=l4;
si1=l2;
si1=i32_load8_u(&i->m0,(U64)si1+16U);
si2=0U;
si1=si1 != si2;
i32_store8(&i->m0,(U64)si0+177U,si1);
si0=l4;
si1=0U;
i32_store8(&i->m0,(U64)si0+176U,si1);
si0=l4;
si1=l13;
i32_store(&i->m0,(U64)si0+164U,si1);
si0=l4;
si1=l12;
i32_store(&i->m0,(U64)si0+160U,si1);
si0=l4;
si1=l11;
i32_store(&i->m0,(U64)si0+152U,si1);
si0=l4;
si1=l5;
i32_store(&i->m0,(U64)si0+156U,si1);
si0=l4;
si1=l9;
si2=l5;
si3=l9;
si4=l5;
si3=si3 < si4;
si1=si3?si1:si2;
l5=si1;
i32_store(&i->m0,(U64)si0+172U,si1);
si0=l4;
si1=l7;
si2=l5;
si3=l7;
si4=l5;
si3=si3 < si4;
si1=si3?si1:si2;
l5=si1;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l4;
si1=l5;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l4;
si1=l5;
i32_store(&i->m0,(U64)si0+168U,si1);
si0=l4;
si1=68U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
si1=l14;
si1=i32_load(&i->m0,(U64)si1);
si0=si0 != si1;
if(si0){
goto L10;
}
si0=l4;
si1=60U;
si0+=si1;
si1=l7;
f7267(i,si0,si1);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+68U);
l7=si0;
L10:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+60U);
si1=l7;
si2=28U;
si1*=si2;
si0+=si1;
l7=si0;
si1=258U;
i32_store16(&i->m0,(U64)si0+24U,si1);
si0=l7;
sj1=-1ULL;
i64_store(&i->m0,(U64)si0+16U,sj1);
si0=l7;
sj1=0ULL;
i64_store(&i->m0,(U64)si0+8U,sj1);
si0=l7;
si1=l5;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l7;
si1=l5;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=l4;
si1=i32_load(&i->m0,(U64)si1+68U);
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0+68U,si1);
si0=l4;
si1=24U;
si0+=si1;
si1=l4;
si2=152U;
si1+=si2;
f12027(i,si0,si1);
si0=l2;
si1=l4;
si1=i32_load(&i->m0,(U64)si1+28U);
l5=si1;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l2;
si1=l5;
si2=l4;
si2=i32_load(&i->m0,(U64)si2+24U);
si1=si1 == si2;
i32_store8(&i->m0,(U64)si0+16U,si1);
si0=l4;
si0=i32_load8_u(&i->m0,(U64)si0+113U);
si0=!(si0);
if(si0){
goto L15;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si1=l5;
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
goto L14;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0+4U);
l7=si0;
si1=l7;
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
goto L14;
}
si0=l4;
si1=120U;
si0+=si1;
si1=l4;
si2=24U;
si1+=si2;
si2=l5;
si3=l7;
f14859(i,si0,si1,si2,si3);
si0=0U;
si0=i32_load(&i->m0,(U64)si0+2972340U);
si1=2U;
si0=si0 != si1;
if(si0){
goto L13;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0+88U);
l9=si0;
si0=0U;
si0=i32_load(&i->m0,(U64)si0+2972344U);
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
goto L14;
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
goto L16;
}
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=64U;
si0=f15269(i,si0);
l5=si0;
si0=!(si0);
if(si0){
goto L12;
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
i32_store(&i->m0,(U64)si0+168U,si1);
si0=l5;
si1=8U;
si0+=si1;
sj1=-1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=180U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l9;
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
i64_store(&i->m0,(U64)si0+172U,sj1);
si0=l4;
sj1=34359738376ULL;
i64_store(&i->m0,(U64)si0+160U,sj1);
si0=l4;
si1=l5;
i32_store(&i->m0,(U64)si0+156U,si1);
si0=l4;
si1=0U;
i32_store(&i->m0,(U64)si0+152U,si1);
si0=l8;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 == si1;
if(si0){
goto L14;
}
si0=l4;
si1=152U;
si0+=si1;
si1=l9;
si2=0U;
si0=f8146(i,si0,si1,si2);
l5=si0;
L16:;
si0=l4;
si1=120U;
si0+=si1;
si1=l7;
si2=l5;
si0=f8175(i,si0,si1,si2);
l8=si0;
L15:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+36U);
si0=!(si0);
if(si0){
goto L17;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0+32U);
f15271(i,si0);
L17:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+52U);
l7=si0;
si0=!(si0);
if(si0){
goto L18;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0+44U);
l5=si0;
L19:;
{
si0=l5;
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L20;
}
si0=l5;
si0=i32_load(&i->m0,(U64)si0);
f15271(i,si0);
L20:;
si0=l5;
si1=16U;
si0+=si1;
l5=si0;
si0=l7;
si1=-1U;
si0+=si1;
l7=si0;
if(si0){
goto L19;
}
}
L18:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+48U);
si0=!(si0);
if(si0){
goto L21;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0+44U);
f15271(i,si0);
L21:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+64U);
si0=!(si0);
if(si0){
goto L22;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0+60U);
f15271(i,si0);
L22:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+76U);
si0=!(si0);
if(si0){
goto L23;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0+72U);
f15271(i,si0);
L23:;
si0=l10;
si0=!(si0);
if(si0){
goto L24;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0+12U);
si0=!(si0);
if(si0){
goto L11;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0+8U);
f15271(i,si0);
goto L11;
L24:;
si0=l6;
switch(si0){
case 0:
goto L11;
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
si0=l1;
si1=l1;
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
goto L11;
}
si0=l1;
f1433(i,si0);
goto L11;
L27:;
si0=l1;
si1=0U;
si2=l1;
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
goto L11;
}
si0=l1;
si1=0U;
f1440(i,si0,si1);
goto L11;
L26:;
si0=l1;
si1=0U;
si2=l1;
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
goto L11;
}
si0=l1;
si1=0U;
f1440(i,si0,si1);
goto L11;
L25:;
si0=l1;
si1=l1;
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
goto L11;
}
si0=l1;
f1433(i,si0);
goto L11;
L14:;
f15042(i);
UNREACHABLE;
L13:;
si0=1975972U;
si1=36U;
si2=1976024U;
f703(i,si0,si1,si2);
UNREACHABLE;
L12:;
si0=8U;
si1=64U;
f52(i,si0,si1);
UNREACHABLE;
L11:;
si0=l0;
si1=l8;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=192U;
si0+=si1;
i->g0=si0;
L0:;
}

void f7084(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
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
si1=32U;
si0-=si1;
l2=si0;
i->g0=si0;
si0=l1;
si1=20U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L3;
}
si0=l1;
si1=16U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=!(si0);
if(si0){
goto L3;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+8U);
l4=si0;
si0=l3;
si1=12U;
si0*=si1;
l3=si0;
si0=l1;
si1=24U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
L4:;
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
goto L5;
}
si0=l6;
si1=-8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=l5;
si0=si0 != si1;
if(si0){
goto L2;
}
L5:;
si0=l7;
si1=l5;
si0*=si1;
l5=si0;
si0=l3;
si1=-12U;
si0+=si1;
l3=si0;
if(si0){
goto L4;
}
}
L3:;
si0=l2;
si1=16U;
si0+=si1;
si1=l1;
si2=l1;
si2=i32_load(&i->m0,(U64)si2+4U);
si2=i32_load(&i->m0,(U64)si2);
TF(i->t0,si2,void (*)(rustpythonInstance*,U32,U32))(i,si0,si1);
si0=l2;
si0=i32_load(&i->m0,(U64)si0+16U);
l8=si0;
si1=5U;
si0=si0 == si1;
if(si0){
goto L2;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0+28U);
l3=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+24U);
l1=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+20U);
l9=si0;
si0=l8;
switch(si0){
case 0:
goto L9;
case 1:
goto L8;
case 2:
goto L6;
case 3:
goto L7;
case 4:
goto L6;
default:
goto L9;
}
L9:;
si0=0U;
l10=si0;
si0=l9;
l4=si0;
goto L1;
L8:;
si0=l9;
si1=1U;
si0+=si1;
l4=si0;
si0=0U;
l10=si0;
goto L1;
L7:;
si0=l9;
si1=4U;
si0+=si1;
l4=si0;
si0=0U;
l10=si0;
goto L1;
L6:;
si0=0U;
l10=si0;
si0=l1;
l4=si0;
si0=l3;
l1=si0;
goto L1;
L2:;
si0=l2;
si1=0U;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l2;
sj1=1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si1=l2;
f7075(i,si0,si1);
si0=1U;
l10=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+8U);
l1=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
L1:;
si0=l1;
si1=8U;
si0=si0 < si1;
if(si0){
goto L14;
}
si0=l4;
si1=3U;
si0+=si1;
si1=-4U;
si0&=si1;
l3=si0;
si1=l4;
si0=si0 == si1;
if(si0){
goto L13;
}
si0=l3;
si1=l4;
si0-=si1;
l5=si0;
si0=!(si0);
if(si0){
goto L13;
}
si0=l4;
si1=l3;
si0-=si1;
l7=si0;
si0=1U;
l6=si0;
si0=l4;
l3=si0;
L15:;
{
si0=l3;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=92U;
si0=si0 == si1;
if(si0){
goto L10;
}
si0=l3;
si1=1U;
si0+=si1;
l3=si0;
si0=l7;
si1=1U;
si0+=si1;
l7=si0;
if(si0){
goto L15;
}
}
si0=l5;
si1=l1;
si2=-8U;
si1+=si2;
l6=si1;
si0=si0 > si1;
if(si0){
goto L11;
}
goto L12;
L14:;
si0=l1;
if(si0){
goto L16;
}
si0=0U;
l6=si0;
goto L10;
L16:;
si0=l4;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=92U;
si0=si0 == si1;
l6=si0;
if(si0){
goto L10;
}
si0=l1;
si1=1U;
si0=si0 == si1;
if(si0){
goto L10;
}
si0=l4;
si0=i32_load8_u(&i->m0,(U64)si0+1U);
si1=92U;
si0=si0 == si1;
l6=si0;
if(si0){
goto L10;
}
si0=l1;
si1=2U;
si0=si0 == si1;
if(si0){
goto L10;
}
si0=l4;
si0=i32_load8_u(&i->m0,(U64)si0+2U);
si1=92U;
si0=si0 == si1;
l6=si0;
if(si0){
goto L10;
}
si0=l1;
si1=3U;
si0=si0 == si1;
if(si0){
goto L10;
}
si0=l4;
si0=i32_load8_u(&i->m0,(U64)si0+3U);
si1=92U;
si0=si0 == si1;
l6=si0;
if(si0){
goto L10;
}
si0=l1;
si1=4U;
si0=si0 == si1;
if(si0){
goto L10;
}
si0=l4;
si0=i32_load8_u(&i->m0,(U64)si0+4U);
si1=92U;
si0=si0 == si1;
l6=si0;
if(si0){
goto L10;
}
si0=l1;
si1=5U;
si0=si0 == si1;
if(si0){
goto L10;
}
si0=l4;
si0=i32_load8_u(&i->m0,(U64)si0+5U);
si1=92U;
si0=si0 == si1;
l6=si0;
if(si0){
goto L10;
}
si0=l1;
si1=6U;
si0=si0 == si1;
if(si0){
goto L10;
}
si0=l4;
si0=i32_load8_u(&i->m0,(U64)si0+6U);
si1=92U;
si0=si0 == si1;
l6=si0;
goto L10;
L13:;
si0=l1;
si1=-8U;
si0+=si1;
l6=si0;
si0=0U;
l5=si0;
L12:;
L17:;
{
si0=l4;
si1=l5;
si0+=si1;
l7=si0;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si1=-1U;
si0^=si1;
si1=l3;
si2=1549556828U;
si1^=si2;
si2=-16843009U;
si1+=si2;
si0&=si1;
si1=-2139062144U;
si0&=si1;
if(si0){
goto L11;
}
si0=l7;
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si1=-1U;
si0^=si1;
si1=l3;
si2=1549556828U;
si1^=si2;
si2=-16843009U;
si1+=si2;
si0&=si1;
si1=-2139062144U;
si0&=si1;
if(si0){
goto L11;
}
si0=l5;
si1=8U;
si0+=si1;
l5=si0;
si1=l6;
si0=si0 <= si1;
if(si0){
goto L17;
}
}
L11:;
si0=0U;
l6=si0;
si0=l1;
si1=l5;
si0=si0 == si1;
if(si0){
goto L10;
}
si0=l4;
si1=l5;
si0+=si1;
l3=si0;
si0=l5;
si1=-1U;
si0^=si1;
si1=l1;
si0+=si1;
l7=si0;
L18:;
{
si0=l7;
l5=si0;
si0=l3;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=92U;
si0=si0 == si1;
l6=si0;
if(si0){
goto L10;
}
si0=l3;
si1=1U;
si0+=si1;
l3=si0;
si0=l5;
si1=-1U;
si0+=si1;
l7=si0;
si0=l5;
if(si0){
goto L18;
}
}
L10:;
si0=l0;
si1=0U;
i32_store8(&i->m0,(U64)si0,si1);
si0=l0;
si1=l6;
i32_store8(&i->m0,(U64)si0+1U,si1);
si0=l10;
si0=!(si0);
if(si0){
goto L20;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0+4U);
si0=!(si0);
if(si0){
goto L19;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0);
f15271(i,si0);
goto L19;
L20:;
si0=l8;
switch(si0){
case 0:
goto L19;
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
si0=l9;
si1=l9;
si1=i32_load(&i->m0,(U64)si1);
l3=si1;
si2=-16U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=-14U;
si0&=si1;
si1=18U;
si0=si0 != si1;
if(si0){
goto L19;
}
si0=l9;
f1433(i,si0);
goto L19;
L23:;
si0=l9;
si1=0U;
si2=l9;
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
goto L19;
}
si0=l9;
si1=0U;
f1440(i,si0,si1);
goto L19;
L22:;
si0=l9;
si1=0U;
si2=l9;
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
goto L19;
}
si0=l9;
si1=0U;
f1440(i,si0,si1);
goto L19;
L21:;
si0=l9;
si1=l9;
si1=i32_load(&i->m0,(U64)si1);
l3=si1;
si2=-16U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=-14U;
si0&=si1;
si1=18U;
si0=si0 != si1;
if(si0){
goto L19;
}
si0=l9;
f1433(i,si0);
L19:;
si0=l2;
si1=32U;
si0+=si1;
i->g0=si0;
L0:;
}

void f7085(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
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
si1=224U;
si0-=si1;
l3=si0;
i->g0=si0;
si0=l1;
si1=20U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L3;
}
si0=l1;
si1=16U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
si0=!(si0);
if(si0){
goto L3;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+8U);
l5=si0;
si0=l4;
si1=12U;
si0*=si1;
l4=si0;
si0=l1;
si1=24U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
L4:;
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
goto L5;
}
si0=l7;
si1=-8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=l6;
si0=si0 != si1;
if(si0){
goto L2;
}
L5:;
si0=l8;
si1=l6;
si0*=si1;
l6=si0;
si0=l4;
si1=-12U;
si0+=si1;
l4=si0;
if(si0){
goto L4;
}
}
L3:;
si0=l3;
si1=40U;
si0+=si1;
si1=l1;
si2=l1;
si2=i32_load(&i->m0,(U64)si2+4U);
si2=i32_load(&i->m0,(U64)si2);
TF(i->t0,si2,void (*)(rustpythonInstance*,U32,U32))(i,si0,si1);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+40U);
l9=si0;
si1=5U;
si0=si0 == si1;
if(si0){
goto L2;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0+52U);
l4=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+48U);
l10=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+44U);
l11=si0;
si0=l9;
switch(si0){
case 0:
goto L9;
case 1:
goto L8;
case 2:
goto L6;
case 3:
goto L7;
case 4:
goto L6;
default:
goto L9;
}
L9:;
si0=0U;
l12=si0;
si0=l11;
l13=si0;
goto L1;
L8:;
si0=l11;
si1=1U;
si0+=si1;
l13=si0;
si0=0U;
l12=si0;
goto L1;
L7:;
si0=l11;
si1=4U;
si0+=si1;
l13=si0;
si0=0U;
l12=si0;
goto L1;
L6:;
si0=0U;
l12=si0;
si0=l10;
l13=si0;
si0=l4;
l10=si0;
goto L1;
L2:;
si0=l3;
si1=0U;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l3;
sj1=1ULL;
i64_store(&i->m0,(U64)si0+8U,sj1);
si0=l1;
si1=l3;
si2=8U;
si1+=si2;
f7075(i,si0,si1);
si0=1U;
l12=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+16U);
l10=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+8U);
l13=si0;
L1:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0);
l14=si0;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
si1=60U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si0=l4;
si1=68U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
si0=0U;
l7=si0;
si0=l3;
si1=0U;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l3;
sj1=4ULL;
i64_store(&i->m0,(U64)si0+24U,sj1);
si0=l3;
si1=156U;
si0+=si1;
si1=0U;
i32_store16(&i->m0,(U64)si0,si1);
si0=l3;
si1=153U;
si0+=si1;
si1=2U;
i32_store8(&i->m0,(U64)si0,si1);
si0=l3;
si1=124U;
si0+=si1;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=116U;
si0+=si1;
sj1=4ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=40U;
si0+=si1;
si1=68U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=40U;
si0+=si1;
si1=60U;
si0+=si1;
sj1=21474836479ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=92U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=84U;
si0+=si1;
sj1=17179869184ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=76U;
si0+=si1;
sj1=4ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
sj1=0ULL;
i64_store(&i->m0,(U64)si0+68U,sj1);
si0=l3;
si1=0U;
i32_store16(&i->m0,(U64)si0+64U,si1);
si0=l3;
si1=l10;
i32_store(&i->m0,(U64)si0+60U,si1);
si0=l3;
si1=0U;
i32_store(&i->m0,(U64)si0+56U,si1);
si0=l3;
si1=l4;
i32_store(&i->m0,(U64)si0+52U,si1);
si0=l3;
si1=l6;
i32_store(&i->m0,(U64)si0+48U,si1);
si0=l3;
si1=l10;
i32_store(&i->m0,(U64)si0+44U,si1);
si0=l3;
si1=l13;
i32_store(&i->m0,(U64)si0+40U,si1);
si0=l2;
si0=i32_load(&i->m0,(U64)si0+8U);
l15=si0;
si0=i32_load(&i->m0,(U64)si0);
si1=0U;
si0=(U32)((I32)si0<(I32)si1);
if(si0){
goto L11;
}
si0=l3;
si1=68U;
si0+=si1;
l16=si0;
si0=l13;
si1=l10;
si0+=si1;
l17=si0;
si0=0U;
l7=si0;
si0=0U;
l18=si0;
L12:;
{
si0=l3;
si0=i32_load(&i->m0,(U64)si0+56U);
l8=si0;
si1=l3;
si1=i32_load(&i->m0,(U64)si1+60U);
si0=si0 > si1;
if(si0){
goto L11;
}
si0=l3;
si1=0U;
i32_store(&i->m0,(U64)si0+84U,si1);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+96U);
l6=si0;
si0=l3;
sj1=-4294967296ULL;
i64_store(&i->m0,(U64)si0+96U,sj1);
si0=l6;
si0=!(si0);
if(si0){
goto L13;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0+88U);
l4=si0;
L14:;
{
si0=l4;
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L15;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
f15271(i,si0);
L15:;
si0=l4;
si1=16U;
si0+=si1;
l4=si0;
si0=l6;
si1=-1U;
si0+=si1;
l6=si0;
if(si0){
goto L14;
}
}
L13:;
si0=l3;
si1=0U;
i32_store(&i->m0,(U64)si0+124U,si1);
si0=l3;
si1=0U;
i32_store(&i->m0,(U64)si0+112U,si1);
si0=l3;
si1=0U;
i32_store16(&i->m0,(U64)si0+156U,si1);
si0=l3;
si1=2U;
i32_store8(&i->m0,(U64)si0+153U,si1);
si0=l3;
si1=l8;
i32_store(&i->m0,(U64)si0+72U,si1);
si0=l3;
si1=l8;
i32_store(&i->m0,(U64)si0+68U,si1);
si0=l3;
si1=160U;
si0+=si1;
si1=24U;
si0+=si1;
si1=l3;
si2=40U;
si1+=si2;
si2=24U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=160U;
si0+=si1;
si1=16U;
si0+=si1;
si1=l3;
si2=40U;
si1+=si2;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=160U;
si0+=si1;
si1=8U;
si0+=si1;
si1=l3;
si2=40U;
si1+=si2;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=l3;
sj1=i64_load(&i->m0,(U64)si1+40U);
i64_store(&i->m0,(U64)si0+160U,sj1);
si0=l16;
si1=l3;
si2=160U;
si1+=si2;
f12029(i,si0,si1);
si0=l3;
si0=i32_load8_u(&i->m0,(U64)si0+157U);
si0=!(si0);
if(si0){
goto L11;
}
si0=l3;
si1=l3;
si1=i32_load(&i->m0,(U64)si1+72U);
l4=si1;
i32_store(&i->m0,(U64)si0+56U,si1);
si0=l3;
si1=l4;
si2=l3;
si2=i32_load(&i->m0,(U64)si2+68U);
l6=si2;
si1=si1 == si2;
i32_store8(&i->m0,(U64)si0+65U,si1);
si0=l2;
si0=i32_load(&i->m0,(U64)si0+12U);
l4=si0;
si0=l3;
si1=l7;
i32_store(&i->m0,(U64)si0+172U,si1);
si0=l3;
si1=l6;
i32_store(&i->m0,(U64)si0+168U,si1);
si0=l3;
si1=l17;
i32_store(&i->m0,(U64)si0+164U,si1);
si0=l3;
si1=l13;
i32_store(&i->m0,(U64)si0+160U,si1);
si0=l4;
si1=88U;
si0+=si1;
l19=si0;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
si0=l3;
si1=192U;
si0+=si1;
si1=l3;
si2=160U;
si1+=si2;
f11335(i,si0,si1);
si0=l4;
si1=24U;
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
goto L10;
}
si0=l3;
si1=192U;
si0+=si1;
si1=l4;
si2=0U;
si0=f8110(i,si0,si1,si2);
l6=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+32U);
l4=si0;
si1=l3;
si1=i32_load(&i->m0,(U64)si1+28U);
si0=si0 != si1;
if(si0){
goto L16;
}
si0=l3;
si1=24U;
si0+=si1;
si1=l4;
f7257(i,si0,si1);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+32U);
l4=si0;
L16:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+24U);
si1=l4;
si2=2U;
si1<<=(si2&31);
si0+=si1;
si1=l6;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=l3;
si1=i32_load(&i->m0,(U64)si1+32U);
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l14;
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
goto L10;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0+4U);
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si1=l6;
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
goto L10;
}
si0=l3;
si1=160U;
si0+=si1;
si1=l16;
si2=l4;
si3=l6;
f14859(i,si0,si1,si2,si3);
si0=l14;
si0=i32_load(&i->m0,(U64)si0);
si1=88U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l8=si0;
si0=!(si0);
if(si0){
goto L17;
}
si0=1U;
l6=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+168U);
l20=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+176U);
l21=si0;
L22:;
{
si0=l21;
si1=l6;
si0=si0 <= si1;
if(si0){
goto L21;
}
si0=l20;
si1=l6;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l4=si0;
si0=i32_load(&i->m0,(U64)si0+4U);
l7=si0;
si1=l4;
si1=i32_load(&i->m0,(U64)si1);
l4=si1;
si0|=si1;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L24;
}
si0=l3;
si1=l4;
i32_store(&i->m0,(U64)si0+204U,si1);
si0=l3;
si1=l7;
i32_store(&i->m0,(U64)si0+200U,si1);
si0=l3;
si1=l17;
i32_store(&i->m0,(U64)si0+196U,si1);
si0=l3;
si1=l13;
i32_store(&i->m0,(U64)si0+192U,si1);
si0=l19;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
si0=l3;
si1=208U;
si0+=si1;
si1=l3;
si2=192U;
si1+=si2;
f11335(i,si0,si1);
si0=l4;
si1=24U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
si1=l7;
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
goto L10;
}
si0=l7;
si1=352U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
if(si0){
goto L26;
}
si0=4U;
l1=si0;
goto L25;
L26:;
si0=l5;
si1=268435455U;
si0=si0 > si1;
if(si0){
goto L20;
}
si0=l5;
si1=3U;
si0<<=(si1&31);
l4=si0;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L20;
}
si0=l5;
si1=268435456U;
si0=si0 < si1;
si1=2U;
si0<<=(si1&31);
l22=si0;
si0=l4;
if(si0){
goto L28;
}
si0=l22;
l1=si0;
goto L27;
L28:;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=l22;
si1=l4;
si0=si0 <= si1;
if(si0){
goto L29;
}
si0=l22;
si1=l4;
si0=f15277(i,si0,si1);
l1=si0;
goto L27;
L29:;
si0=l4;
si0=f15269(i,si0);
l1=si0;
L27:;
si0=l1;
si0=!(si0);
if(si0){
goto L19;
}
si0=l1;
si1=0U;
si2=l4;
si0=f15392(i,si0,si1,si2);
L25:;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=72U;
si0=f15269(i,si0);
l4=si0;
si0=!(si0);
if(si0){
goto L18;
}
si0=l4;
sj1=-2107831292826120692ULL;
i64_store(&i->m0,(U64)si0+8U,sj1);
si0=l4;
si1=l5;
i32_store(&i->m0,(U64)si0+52U,si1);
si0=l4;
si1=l1;
i32_store(&i->m0,(U64)si0+48U,si1);
si0=l4;
si1=0U;
i32_store(&i->m0,(U64)si0+44U,si1);
si0=l4;
si1=0U;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l4;
si1=l7;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l4;
si1=1805776U;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l4;
si1=1U;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=l3;
sj1=i64_load(&i->m0,(U64)si1+208U);
i64_store(&i->m0,(U64)si0+56U,sj1);
si0=l4;
si1=16U;
si0+=si1;
sj1=3044701271088271634ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=64U;
si0+=si1;
si1=l3;
si2=208U;
si1+=si2;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
goto L23;
L24:;
si0=l19;
si0=i32_load(&i->m0,(U64)si0);
si1=1272U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
si1=l4;
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
goto L10;
}
L23:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+32U);
l7=si0;
si1=l3;
si1=i32_load(&i->m0,(U64)si1+28U);
si0=si0 != si1;
if(si0){
goto L30;
}
si0=l3;
si1=24U;
si0+=si1;
si1=l7;
f7257(i,si0,si1);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+32U);
l7=si0;
L30:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+24U);
si1=l7;
si2=2U;
si1<<=(si2&31);
si0+=si1;
si1=l4;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=l3;
si1=i32_load(&i->m0,(U64)si1+32U);
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l6;
si1=l8;
si0=si0 >= si1;
if(si0){
goto L17;
}
si0=l6;
si1=l6;
si2=l8;
si1=si1 < si2;
si0+=si1;
l6=si0;
si1=l8;
si0=si0 <= si1;
if(si0){
goto L22;
}
goto L17;
}
L21:;
si0=l6;
si1=l21;
si2=1981580U;
f663(i,si0,si1,si2);
UNREACHABLE;
L20:;
f53(i);
UNREACHABLE;
L19:;
si0=l22;
si1=l4;
f52(i,si0,si1);
UNREACHABLE;
L18:;
si0=8U;
si1=72U;
f52(i,si0,si1);
UNREACHABLE;
L17:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+72U);
l7=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+160U);
l4=si0;
si1=l4;
si1=i32_load(&i->m0,(U64)si1);
l6=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l6;
si1=1U;
si0=si0 != si1;
if(si0){
goto L31;
}
si0=l4;
f7690(i,si0);
L31:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+164U);
l4=si0;
si1=l4;
si1=i32_load(&i->m0,(U64)si1);
l6=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l6;
si1=1U;
si0=si0 != si1;
if(si0){
goto L32;
}
si0=l4;
f7690(i,si0);
L32:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+172U);
si0=!(si0);
if(si0){
goto L33;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0+168U);
f15271(i,si0);
L33:;
si0=l18;
si1=1U;
si0+=si1;
l18=si0;
si0=l15;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
si0=!(si0);
if(si0){
goto L12;
}
si0=l18;
si1=l4;
si0=(U32)((I32)si0<(I32)si1);
if(si0){
goto L12;
}
}
L11:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+12U);
l4=si0;
si0=l3;
si1=l7;
i32_store(&i->m0,(U64)si0+172U,si1);
si0=l3;
si1=l13;
i32_store(&i->m0,(U64)si0+160U,si1);
si0=l3;
si1=l10;
i32_store(&i->m0,(U64)si0+168U,si1);
si0=l3;
si1=l13;
si2=l10;
si1+=si2;
i32_store(&i->m0,(U64)si0+164U,si1);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+88U);
l4=si0;
si0=l3;
si1=192U;
si0+=si1;
si1=l3;
si2=160U;
si1+=si2;
f11335(i,si0,si1);
si0=l4;
si1=24U;
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
goto L10;
}
si0=l3;
si1=192U;
si0+=si1;
si1=l4;
si2=0U;
si0=f8110(i,si0,si1,si2);
l6=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+32U);
l4=si0;
si1=l3;
si1=i32_load(&i->m0,(U64)si1+28U);
si0=si0 != si1;
if(si0){
goto L34;
}
si0=l3;
si1=24U;
si0+=si1;
si1=l4;
f7257(i,si0,si1);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+32U);
l4=si0;
L34:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+24U);
si1=l4;
si2=2U;
si1<<=(si2&31);
si0+=si1;
si1=l6;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l3;
sj1=i64_load(&i->m0,(U64)si1+24U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=24U;
si0+=si1;
si1=8U;
si0+=si1;
l4=si0;
si1=l4;
si1=i32_load(&i->m0,(U64)si1);
si2=1U;
si1+=si2;
l4=si1;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=8U;
si0+=si1;
si1=l4;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+80U);
si0=!(si0);
if(si0){
goto L35;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0+76U);
f15271(i,si0);
L35:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+96U);
l6=si0;
si0=!(si0);
if(si0){
goto L36;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0+88U);
l4=si0;
L37:;
{
si0=l4;
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L38;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
f15271(i,si0);
L38:;
si0=l4;
si1=16U;
si0+=si1;
l4=si0;
si0=l6;
si1=-1U;
si0+=si1;
l6=si0;
if(si0){
goto L37;
}
}
L36:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+92U);
si0=!(si0);
if(si0){
goto L39;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0+88U);
f15271(i,si0);
L39:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+108U);
si0=!(si0);
if(si0){
goto L40;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0+104U);
f15271(i,si0);
L40:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+120U);
si0=!(si0);
if(si0){
goto L41;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0+116U);
f15271(i,si0);
L41:;
si0=l12;
si0=!(si0);
if(si0){
goto L43;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0+12U);
si0=!(si0);
if(si0){
goto L42;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0+8U);
f15271(i,si0);
goto L42;
L43:;
si0=l9;
switch(si0){
case 0:
goto L42;
case 1:
goto L47;
case 2:
goto L46;
case 3:
goto L45;
default:
goto L48;
}
L48:;
si0=l11;
si1=l11;
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
goto L44;
}
goto L42;
L47:;
si0=l11;
si1=0U;
si2=l11;
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
goto L42;
}
si0=l11;
si1=0U;
f1440(i,si0,si1);
goto L42;
L46:;
si0=l11;
si1=0U;
si2=l11;
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
goto L42;
}
si0=l11;
si1=0U;
f1440(i,si0,si1);
goto L42;
L45:;
si0=l11;
si1=l11;
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
goto L42;
}
L44:;
si0=l11;
f1433(i,si0);
L42:;
si0=l3;
si1=224U;
si0+=si1;
i->g0=si0;
goto L0;
L10:;
f15042(i);
UNREACHABLE;
L0:;
}

void f7086(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
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
si1=64U;
si0-=si1;
l3=si0;
i->g0=si0;
si0=l1;
si1=20U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L3;
}
si0=l1;
si1=16U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
si0=!(si0);
if(si0){
goto L3;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+8U);
l5=si0;
si0=l4;
si1=12U;
si0*=si1;
l4=si0;
si0=l1;
si1=24U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
L4:;
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
goto L5;
}
si0=l7;
si1=-8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=l6;
si0=si0 != si1;
if(si0){
goto L2;
}
L5:;
si0=l8;
si1=l6;
si0*=si1;
l6=si0;
si0=l4;
si1=-12U;
si0+=si1;
l4=si0;
if(si0){
goto L4;
}
}
L3:;
si0=l3;
si1=32U;
si0+=si1;
si1=l1;
si2=l1;
si2=i32_load(&i->m0,(U64)si2+4U);
si2=i32_load(&i->m0,(U64)si2);
TF(i->t0,si2,void (*)(rustpythonInstance*,U32,U32))(i,si0,si1);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+32U);
l4=si0;
si1=5U;
si0=si0 == si1;
if(si0){
goto L2;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0+44U);
l6=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+40U);
l9=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+36U);
l7=si0;
si0=l4;
switch(si0){
case 0:
goto L9;
case 1:
goto L8;
case 2:
goto L6;
case 3:
goto L7;
case 4:
goto L6;
default:
goto L9;
}
L9:;
si0=0U;
l5=si0;
si0=l7;
l1=si0;
goto L1;
L8:;
si0=l7;
si1=1U;
si0+=si1;
l1=si0;
si0=0U;
l5=si0;
goto L1;
L7:;
si0=l7;
si1=4U;
si0+=si1;
l1=si0;
si0=0U;
l5=si0;
goto L1;
L6:;
si0=0U;
l5=si0;
si0=l9;
l1=si0;
si0=l6;
l9=si0;
goto L1;
L2:;
si0=l3;
si1=0U;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l3;
sj1=1ULL;
i64_store(&i->m0,(U64)si0+16U,sj1);
si0=l1;
si1=l3;
si2=16U;
si1+=si2;
f7075(i,si0,si1);
si0=1U;
l5=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+24U);
l9=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+16U);
l1=si0;
L1:;
si0=l3;
si1=8U;
si0+=si1;
si1=l2;
si1=i32_load(&i->m0,(U64)si1);
l6=si1;
si2=l2;
si2=i32_load(&i->m0,(U64)si2+4U);
si3=l2;
si3=i32_load(&i->m0,(U64)si3+8U);
l8=si3;
f14785(i,si0,si1,si2,si3);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+8U);
si0=!(si0);
if(si0){
goto L14;
}
si0=l6;
si1=16U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l10=si0;
si1=l3;
si1=i32_load(&i->m0,(U64)si1+12U);
l2=si1;
si0=si0 <= si1;
if(si0){
goto L16;
}
si0=l6;
si0=i32_load(&i->m0,(U64)si0+8U);
si1=l2;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l6=si0;
si0=i32_load(&i->m0,(U64)si0+4U);
l2=si0;
si1=l6;
si1=i32_load(&i->m0,(U64)si1);
l6=si1;
si0|=si1;
si1=-1U;
si0=(U32)((I32)si0>(I32)si1);
if(si0){
goto L15;
}
si0=0U;
l8=si0;
si0=0U;
l6=si0;
goto L13;
L16:;
si0=l2;
si1=l10;
si2=1981580U;
f663(i,si0,si1,si2);
UNREACHABLE;
L15:;
si0=l3;
si1=l6;
i32_store(&i->m0,(U64)si0+44U,si1);
si0=l3;
si1=l2;
i32_store(&i->m0,(U64)si0+40U,si1);
si0=l3;
si1=l1;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l3;
si1=l1;
si2=l9;
si1+=si2;
i32_store(&i->m0,(U64)si0+36U,si1);
si0=l8;
si0=i32_load(&i->m0,(U64)si0+88U);
l6=si0;
si0=l3;
si1=48U;
si0+=si1;
si1=l3;
si2=32U;
si1+=si2;
f11335(i,si0,si1);
si0=l6;
si1=24U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l8=si0;
si1=l8;
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
goto L12;
}
si0=0U;
l6=si0;
si0=l3;
si1=48U;
si0+=si1;
si1=l8;
si2=0U;
si0=f8110(i,si0,si1,si2);
l8=si0;
goto L13;
L14:;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=13U;
si0=f15269(i,si0);
l1=si0;
si0=!(si0);
if(si0){
goto L11;
}
si0=l1;
si1=5U;
si0+=si1;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+1664677U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+1664672U);
i64_store(&i->m0,(U64)si0,sj1);
si0=1U;
l6=si0;
si0=l8;
si0=i32_load(&i->m0,(U64)si0+88U);
si1=388U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si1=l2;
si1=i32_load(&i->m0,(U64)si1);
l9=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
sj1=55834574861ULL;
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
goto L12;
}
si0=l8;
si1=l2;
si2=l3;
si3=32U;
si2+=si3;
si0=f7173(i,si0,si1,si2);
l8=si0;
L13:;
si0=l5;
si0=!(si0);
if(si0){
goto L17;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0+20U);
si0=!(si0);
if(si0){
goto L10;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0+16U);
f15271(i,si0);
goto L10;
L17:;
si0=l4;
switch(si0){
case 0:
goto L10;
case 1:
goto L20;
case 2:
goto L19;
case 3:
goto L18;
default:
goto L21;
}
L21:;
si0=l7;
si1=l7;
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
goto L10;
}
si0=l7;
f1433(i,si0);
goto L10;
L20:;
si0=l7;
si1=0U;
si2=l7;
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
goto L10;
}
si0=l7;
si1=0U;
f1440(i,si0,si1);
goto L10;
L19:;
si0=l7;
si1=0U;
si2=l7;
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
goto L10;
}
si0=l7;
si1=0U;
f1440(i,si0,si1);
goto L10;
L18:;
si0=l7;
si1=l7;
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
goto L10;
}
si0=l7;
f1433(i,si0);
goto L10;
L12:;
f15042(i);
UNREACHABLE;
L11:;
si0=1U;
si1=13U;
f52(i,si0,si1);
UNREACHABLE;
L10:;
si0=l0;
si1=l8;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l6;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=64U;
si0+=si1;
i->g0=si0;
L0:;
}

void f7087(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
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
U64 l15=0;
U32 l16=0;
U32 l17=0;
U32 si0,si1,si2,si3,si4;
U64 sj0,sj1,sj2,sj3;
si0=i->g0;
si1=80U;
si0-=si1;
l3=si0;
i->g0=si0;
si0=l1;
si1=20U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L3;
}
si0=l1;
si1=16U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
si0=!(si0);
if(si0){
goto L3;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+8U);
l5=si0;
si0=l4;
si1=12U;
si0*=si1;
l4=si0;
si0=l1;
si1=24U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
L4:;
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
goto L5;
}
si0=l7;
si1=-8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=l6;
si0=si0 != si1;
if(si0){
goto L2;
}
L5:;
si0=l8;
si1=l6;
si0*=si1;
l6=si0;
si0=l4;
si1=-12U;
si0+=si1;
l4=si0;
if(si0){
goto L4;
}
}
L3:;
si0=l3;
si1=24U;
si0+=si1;
si1=l1;
si2=l1;
si2=i32_load(&i->m0,(U64)si2+4U);
si2=i32_load(&i->m0,(U64)si2);
TF(i->t0,si2,void (*)(rustpythonInstance*,U32,U32))(i,si0,si1);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+24U);
l9=si0;
si1=5U;
si0=si0 == si1;
if(si0){
goto L2;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0+36U);
l4=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+32U);
l1=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+28U);
l10=si0;
si0=l9;
switch(si0){
case 0:
goto L9;
case 1:
goto L8;
case 2:
goto L6;
case 3:
goto L7;
case 4:
goto L6;
default:
goto L9;
}
L9:;
si0=0U;
l11=si0;
si0=l10;
l12=si0;
goto L1;
L8:;
si0=l10;
si1=1U;
si0+=si1;
l12=si0;
si0=0U;
l11=si0;
goto L1;
L7:;
si0=l10;
si1=4U;
si0+=si1;
l12=si0;
si0=0U;
l11=si0;
goto L1;
L6:;
si0=0U;
l11=si0;
si0=l1;
l12=si0;
si0=l4;
l1=si0;
goto L1;
L2:;
si0=l3;
si1=0U;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l3;
sj1=1ULL;
i64_store(&i->m0,(U64)si0+8U,sj1);
si0=l1;
si1=l3;
si2=8U;
si1+=si2;
f7075(i,si0,si1);
si0=1U;
l11=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+16U);
l1=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+8U);
l12=si0;
L1:;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=l2;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si0=i32_load(&i->m0,(U64)si0+88U);
l8=si0;
si0=64U;
si0=f15269(i,si0);
l4=si0;
si0=!(si0);
if(si0){
goto L13;
}
si0=l4;
sj1=-1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=56U;
si0+=si1;
sj1=-1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=48U;
si0+=si1;
sj1=-1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=40U;
si0+=si1;
sj1=-1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=32U;
si0+=si1;
sj1=-1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=24U;
si0+=si1;
sj1=-1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=16U;
si0+=si1;
sj1=-1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=8U;
i32_store(&i->m0,(U64)si0+40U,si1);
si0=l4;
si1=8U;
si0+=si1;
sj1=-1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=52U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l8;
si1=68U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l8=si0;
si1=l8;
si1=i32_load(&i->m0,(U64)si1);
l7=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
sj1=0ULL;
i64_store(&i->m0,(U64)si0+44U,sj1);
si0=l3;
sj1=34359738376ULL;
i64_store(&i->m0,(U64)si0+32U,sj1);
si0=l3;
si1=l4;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l3;
si1=0U;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l7;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 == si1;
if(si0){
goto L12;
}
si0=l3;
si1=24U;
si0+=si1;
si1=l8;
si2=0U;
si0=f8146(i,si0,si1,si2);
l5=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+4U);
l7=si0;
si0=i32_load(&i->m0,(U64)si0+4U);
si1=72U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l13=si0;
si1=l13;
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
goto L12;
}
si0=l3;
si1=24U;
si0+=si1;
si1=l13;
si2=56U;
si1+=si2;
l14=si1;
si2=0U;
f13636(i,si0,si1,si2);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+24U);
l4=si0;
si0=!(si0);
if(si0){
goto L17;
}
si0=l3;
sj0=i64_load(&i->m0,(U64)si0+28U);
l15=sj0;
si0=l5;
si1=56U;
si0+=si1;
l16=si0;
si0=l12;
si1=l1;
si0+=si1;
l17=si0;
L18:;
{
si0=l3;
si1=l7;
sj2=l15;
sj3=32ULL;
sj2>>=(sj3&63);
si2=(U32)(sj2);
si3=l6;
f14785(i,si0,si1,si2,si3);
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L20;
}
si0=l7;
si0=i32_load(&i->m0,(U64)si0+16U);
l1=si0;
si1=l3;
si1=i32_load(&i->m0,(U64)si1+4U);
l8=si1;
si0=si0 <= si1;
if(si0){
goto L11;
}
si0=l7;
si0=i32_load(&i->m0,(U64)si0+8U);
si1=l8;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l8=si0;
si0=i32_load(&i->m0,(U64)si0+4U);
l1=si0;
si1=l8;
si1=i32_load(&i->m0,(U64)si1);
l8=si1;
si0|=si1;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L20;
}
si0=l3;
si1=l8;
i32_store(&i->m0,(U64)si0+36U,si1);
si0=l3;
si1=l1;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l3;
si1=l17;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l3;
si1=l12;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l6;
si0=i32_load(&i->m0,(U64)si0+88U);
l8=si0;
si0=l3;
si1=64U;
si0+=si1;
si1=l3;
si2=24U;
si1+=si2;
f11335(i,si0,si1);
si0=l8;
si1=24U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l8=si0;
si1=l8;
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
goto L12;
}
si0=l3;
si1=64U;
si0+=si1;
si1=l8;
si2=0U;
si0=f8110(i,si0,si1,si2);
l8=si0;
goto L19;
L20:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+8U);
si0=i32_load(&i->m0,(U64)si0);
l8=si0;
si1=l8;
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
goto L12;
}
L19:;
si0=l6;
si0=i32_load(&i->m0,(U64)si0+88U);
si1=68U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=l5;
si1=i32_load(&i->m0,(U64)si1+28U);
si0=si0 == si1;
if(si0){
goto L22;
}
si0=l5;
si1=l4;
si2=l8;
si3=l6;
si0=f7727(i,si0,si1,si2,si3);
l8=si0;
goto L21;
L22:;
si0=l16;
si1=l6;
si2=l4;
si3=l8;
si0=f13616(i,si0,si1,si2,si3);
l8=si0;
L21:;
si0=l4;
si1=l4;
si1=i32_load(&i->m0,(U64)si1);
l1=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l8;
if(si0){
goto L16;
}
sj0=l15;
si0=(U32)(sj0);
l8=si0;
si0=l1;
si1=1U;
si0=si0 != si1;
if(si0){
goto L23;
}
si0=l4;
f7690(i,si0);
L23:;
si0=l3;
si1=24U;
si0+=si1;
si1=l14;
si2=l8;
f13636(i,si0,si1,si2);
si0=l3;
sj0=i64_load(&i->m0,(U64)si0+28U);
l15=sj0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+24U);
l4=si0;
if(si0){
goto L18;
}
}
L17:;
si0=l13;
si1=l13;
si1=i32_load(&i->m0,(U64)si1);
l6=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=0U;
l4=si0;
si0=l6;
si1=1U;
si0=si0 == si1;
if(si0){
goto L15;
}
goto L14;
L16:;
si0=l1;
si1=1U;
si0=si0 != si1;
if(si0){
goto L24;
}
si0=l4;
f7690(i,si0);
L24:;
si0=l13;
si1=l13;
si1=i32_load(&i->m0,(U64)si1);
l4=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=1U;
si0=si0 != si1;
if(si0){
goto L25;
}
si0=l13;
f7690(i,si0);
L25:;
si0=l5;
si1=l5;
si1=i32_load(&i->m0,(U64)si1);
l6=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=1U;
l4=si0;
si0=l5;
l13=si0;
si0=l8;
l5=si0;
si0=l6;
si1=1U;
si0=si0 != si1;
if(si0){
goto L14;
}
L15:;
si0=l13;
f7690(i,si0);
L14:;
si0=l11;
si0=!(si0);
if(si0){
goto L26;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0+12U);
si0=!(si0);
if(si0){
goto L10;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0+8U);
f15271(i,si0);
goto L10;
L26:;
si0=l9;
switch(si0){
case 0:
goto L10;
case 1:
goto L29;
case 2:
goto L28;
case 3:
goto L27;
default:
goto L30;
}
L30:;
si0=l10;
si1=l10;
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
goto L10;
}
si0=l10;
f1433(i,si0);
goto L10;
L29:;
si0=l10;
si1=0U;
si2=l10;
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
goto L10;
}
si0=l10;
si1=0U;
f1440(i,si0,si1);
goto L10;
L28:;
si0=l10;
si1=0U;
si2=l10;
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
goto L10;
}
si0=l10;
si1=0U;
f1440(i,si0,si1);
goto L10;
L27:;
si0=l10;
si1=l10;
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
goto L10;
}
si0=l10;
f1433(i,si0);
goto L10;
L13:;
si0=8U;
si1=64U;
f52(i,si0,si1);
UNREACHABLE;
L12:;
f15042(i);
UNREACHABLE;
L11:;
si0=l8;
si1=l1;
si2=1981580U;
f663(i,si0,si1,si2);
UNREACHABLE;
L10:;
si0=l0;
si1=l5;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l4;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=80U;
si0+=si1;
i->g0=si0;
L0:;
}

void f7088(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 l8=0;
U32 l9=0;
U32 l10=0;
U64 l11=0;
U32 si0,si1,si2,si3,si4,si5,si6;
U64 sj1;
si0=i->g0;
si1=144U;
si0-=si1;
l4=si0;
i->g0=si0;
si0=l1;
si1=20U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L3;
}
si0=l1;
si1=16U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si0=!(si0);
if(si0){
goto L3;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+8U);
l6=si0;
si0=l5;
si1=12U;
si0*=si1;
l5=si0;
si0=l1;
si1=24U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
L4:;
{
si0=l6;
si1=l5;
si0+=si1;
l8=si0;
si1=-12U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l9=si0;
si1=2U;
si0=si0 < si1;
if(si0){
goto L5;
}
si0=l8;
si1=-8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=l7;
si0=si0 != si1;
if(si0){
goto L2;
}
L5:;
si0=l9;
si1=l7;
si0*=si1;
l7=si0;
si0=l5;
si1=-12U;
si0+=si1;
l5=si0;
if(si0){
goto L4;
}
}
L3:;
si0=l4;
si1=80U;
si0+=si1;
si1=l1;
si2=l1;
si2=i32_load(&i->m0,(U64)si2+4U);
si2=i32_load(&i->m0,(U64)si2);
TF(i->t0,si2,void (*)(rustpythonInstance*,U32,U32))(i,si0,si1);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+80U);
l8=si0;
si1=5U;
si0=si0 == si1;
if(si0){
goto L2;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0+92U);
l7=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+88U);
l9=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+84U);
l6=si0;
si0=l8;
switch(si0){
case 0:
goto L9;
case 1:
goto L8;
case 2:
goto L6;
case 3:
goto L7;
case 4:
goto L6;
default:
goto L9;
}
L9:;
si0=0U;
l1=si0;
si0=l6;
l5=si0;
goto L1;
L8:;
si0=l6;
si1=1U;
si0+=si1;
l5=si0;
si0=0U;
l1=si0;
goto L1;
L7:;
si0=l6;
si1=4U;
si0+=si1;
l5=si0;
si0=0U;
l1=si0;
goto L1;
L6:;
si0=0U;
l1=si0;
si0=l9;
l5=si0;
si0=l7;
l9=si0;
goto L1;
L2:;
si0=l4;
si1=0U;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l4;
sj1=1ULL;
i64_store(&i->m0,(U64)si0+8U,sj1);
si0=l1;
si1=l4;
si2=8U;
si1+=si2;
f7075(i,si0,si1);
si0=1U;
l1=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+16U);
l9=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+8U);
l5=si0;
L1:;
si0=l2;
si1=72U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L11;
}
si0=l2;
si1=64U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
si0=i32_load(&i->m0,(U64)si0+4U);
l2=si0;
si1=l7;
si1=i32_load(&i->m0,(U64)si1);
l10=si1;
si0|=si1;
si1=0U;
si0=(U32)((I32)si0<(I32)si1);
if(si0){
goto L13;
}
si0=l4;
si1=l10;
i32_store(&i->m0,(U64)si0+124U,si1);
si0=l4;
si1=l2;
i32_store(&i->m0,(U64)si0+120U,si1);
si0=l4;
si1=l5;
i32_store(&i->m0,(U64)si0+112U,si1);
si0=l4;
si1=l5;
si2=l9;
si1+=si2;
i32_store(&i->m0,(U64)si0+116U,si1);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+88U);
l5=si0;
si0=l4;
si1=128U;
si0+=si1;
si1=l4;
si2=112U;
si1+=si2;
f11335(i,si0,si1);
si0=l5;
si1=24U;
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
si0=si0 != si1;
if(si0){
goto L12;
}
f15042(i);
UNREACHABLE;
L13:;
si0=1647592U;
si1=43U;
si2=1664768U;
f673(i,si0,si1,si2);
UNREACHABLE;
L12:;
si0=l4;
si1=l3;
si2=1807769U;
si3=35U;
si4=l4;
si5=128U;
si4+=si5;
si5=l5;
si6=0U;
si4=f8110(i,si4,si5,si6);
l5=si4;
si5=l3;
f7340(i,si0,si1,si2,si3,si4,si5);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+4U);
l9=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L15;
}
si0=l4;
si1=100U;
si0+=si1;
si1=2024U;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=80U;
si0+=si1;
si1=12U;
si0+=si1;
si1=55U;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=56U;
si0+=si1;
si1=12U;
si0+=si1;
sj1=3ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=l7;
si2=4U;
si1+=si2;
i32_store(&i->m0,(U64)si0+88U,si1);
si0=l4;
si1=55U;
i32_store(&i->m0,(U64)si0+84U,si1);
si0=l4;
si1=l7;
i32_store(&i->m0,(U64)si0+80U,si1);
si0=l4;
si1=l9;
i32_store(&i->m0,(U64)si0+108U,si1);
si0=l4;
si1=4U;
i32_store(&i->m0,(U64)si0+60U,si1);
si0=l4;
si1=1664720U;
i32_store(&i->m0,(U64)si0+56U,si1);
si0=l4;
si1=l4;
si2=108U;
si1+=si2;
i32_store(&i->m0,(U64)si0+96U,si1);
si0=l4;
si1=l4;
si2=80U;
si1+=si2;
i32_store(&i->m0,(U64)si0+64U,si1);
si0=l4;
si1=40U;
si0+=si1;
si1=l4;
si2=56U;
si1+=si2;
f63(i,si0,si1);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+108U);
l7=si0;
si1=l7;
si1=i32_load(&i->m0,(U64)si1);
l9=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l9;
si1=1U;
si0=si0 != si1;
if(si0){
goto L16;
}
si0=l7;
f7690(i,si0);
L16:;
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
goto L17;
}
si0=l5;
f7690(i,si0);
L17:;
si0=l4;
si1=24U;
si0+=si1;
si1=8U;
si0+=si1;
si1=l4;
si2=40U;
si1+=si2;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
l5=si1;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1+40U);
l11=sj1;
i64_store(&i->m0,(U64)si0+24U,sj1);
si0=l0;
si1=8U;
si0+=si1;
si1=l5;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
sj1=l11;
i64_store(&i->m0,(U64)si0,sj1);
goto L14;
L15:;
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l9;
i32_store(&i->m0,(U64)si0+4U,si1);
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
goto L14;
}
si0=l5;
f7690(i,si0);
L14:;
si0=l1;
si0=!(si0);
if(si0){
goto L18;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0+12U);
si0=!(si0);
if(si0){
goto L10;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0+8U);
f15271(i,si0);
goto L10;
L18:;
si0=l8;
switch(si0){
case 0:
goto L10;
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
si1=l6;
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
goto L10;
}
si0=l6;
f1433(i,si0);
goto L10;
L21:;
si0=l6;
si1=0U;
si2=l6;
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
goto L10;
}
si0=l6;
si1=0U;
f1440(i,si0,si1);
goto L10;
L20:;
si0=l6;
si1=0U;
si2=l6;
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
goto L10;
}
si0=l6;
si1=0U;
f1440(i,si0,si1);
goto L10;
L19:;
si0=l6;
si1=l6;
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
goto L10;
}
si0=l6;
f1433(i,si0);
goto L10;
L11:;
si0=0U;
si1=0U;
si2=1664752U;
f663(i,si0,si1,si2);
UNREACHABLE;
L10:;
si0=l4;
si1=144U;
si0+=si1;
i->g0=si0;
L0:;
}

void f7089(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
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
U64 l19=0;
U32 si0,si1,si2,si3,si4,si5;
U64 sj0,sj1,sj2;
si0=i->g0;
si1=272U;
si0-=si1;
l3=si0;
i->g0=si0;
si0=l1;
si1=20U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L3;
}
si0=l1;
si1=16U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
si0=!(si0);
if(si0){
goto L3;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+8U);
l5=si0;
si0=l4;
si1=12U;
si0*=si1;
l4=si0;
si0=l1;
si1=24U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
L4:;
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
goto L5;
}
si0=l7;
si1=-8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=l6;
si0=si0 != si1;
if(si0){
goto L2;
}
L5:;
si0=l8;
si1=l6;
si0*=si1;
l6=si0;
si0=l4;
si1=-12U;
si0+=si1;
l4=si0;
if(si0){
goto L4;
}
}
L3:;
si0=l3;
si1=56U;
si0+=si1;
si1=l1;
si2=l1;
si2=i32_load(&i->m0,(U64)si2+4U);
si2=i32_load(&i->m0,(U64)si2);
TF(i->t0,si2,void (*)(rustpythonInstance*,U32,U32))(i,si0,si1);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+56U);
l9=si0;
si1=5U;
si0=si0 == si1;
if(si0){
goto L2;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0+68U);
l6=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+64U);
l4=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+60U);
l10=si0;
si0=l9;
switch(si0){
case 0:
goto L9;
case 1:
goto L8;
case 2:
goto L6;
case 3:
goto L7;
case 4:
goto L6;
default:
goto L9;
}
L9:;
si0=0U;
l11=si0;
si0=l10;
l12=si0;
goto L1;
L8:;
si0=l10;
si1=1U;
si0+=si1;
l12=si0;
si0=0U;
l11=si0;
goto L1;
L7:;
si0=l10;
si1=4U;
si0+=si1;
l12=si0;
si0=0U;
l11=si0;
goto L1;
L6:;
si0=0U;
l11=si0;
si0=l4;
l12=si0;
si0=l6;
l4=si0;
goto L1;
L2:;
si0=l3;
si1=0U;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l3;
sj1=1ULL;
i64_store(&i->m0,(U64)si0+24U,sj1);
si0=l1;
si1=l3;
si2=24U;
si1+=si2;
f7075(i,si0,si1);
si0=1U;
l11=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+32U);
l4=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+24U);
l12=si0;
L1:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0);
l13=si0;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si1=60U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l8=si0;
si0=l6;
si1=68U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si0=l3;
si1=0U;
i32_store(&i->m0,(U64)si0+48U,si1);
si0=l3;
sj1=4ULL;
i64_store(&i->m0,(U64)si0+40U,sj1);
si0=l3;
si1=172U;
si0+=si1;
si1=0U;
i32_store16(&i->m0,(U64)si0,si1);
si0=l3;
si1=169U;
si0+=si1;
si1=2U;
i32_store8(&i->m0,(U64)si0,si1);
si0=l3;
si1=140U;
si0+=si1;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=132U;
si0+=si1;
sj1=4ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=56U;
si0+=si1;
si1=68U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=56U;
si0+=si1;
si1=60U;
si0+=si1;
sj1=21474836479ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=108U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=100U;
si0+=si1;
sj1=17179869184ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=92U;
si0+=si1;
sj1=4ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
sj1=0ULL;
i64_store(&i->m0,(U64)si0+84U,sj1);
si0=l3;
si1=0U;
i32_store16(&i->m0,(U64)si0+80U,si1);
si0=l3;
si1=l4;
i32_store(&i->m0,(U64)si0+76U,si1);
si0=l3;
si1=0U;
i32_store(&i->m0,(U64)si0+72U,si1);
si0=l3;
si1=l6;
i32_store(&i->m0,(U64)si0+68U,si1);
si0=l3;
si1=l8;
i32_store(&i->m0,(U64)si0+64U,si1);
si0=l3;
si1=l4;
i32_store(&i->m0,(U64)si0+60U,si1);
si0=l3;
si1=l12;
i32_store(&i->m0,(U64)si0+56U,si1);
si0=l12;
si1=l4;
si0+=si1;
l14=si0;
si0=l3;
si1=228U;
si0+=si1;
l15=si0;
si0=l3;
si1=84U;
si0+=si1;
l1=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+4U);
l16=si0;
si0=0U;
l5=si0;
si0=0U;
l7=si0;
L21:;
{
si0=l3;
si0=i32_load(&i->m0,(U64)si0+72U);
l8=si0;
si1=l3;
si1=i32_load(&i->m0,(U64)si1+76U);
si0=si0 > si1;
if(si0){
goto L16;
}
si0=l3;
si1=0U;
i32_store(&i->m0,(U64)si0+100U,si1);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+112U);
l6=si0;
si0=l3;
sj1=-4294967296ULL;
i64_store(&i->m0,(U64)si0+112U,sj1);
si0=l6;
si0=!(si0);
if(si0){
goto L22;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0+104U);
l4=si0;
L23:;
{
si0=l4;
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L24;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
f15271(i,si0);
L24:;
si0=l4;
si1=16U;
si0+=si1;
l4=si0;
si0=l6;
si1=-1U;
si0+=si1;
l6=si0;
if(si0){
goto L23;
}
}
L22:;
si0=l3;
si1=0U;
i32_store(&i->m0,(U64)si0+140U,si1);
si0=l3;
si1=0U;
i32_store(&i->m0,(U64)si0+128U,si1);
si0=l3;
si1=0U;
i32_store16(&i->m0,(U64)si0+172U,si1);
si0=l3;
si1=2U;
i32_store8(&i->m0,(U64)si0+169U,si1);
si0=l3;
si1=l8;
i32_store(&i->m0,(U64)si0+88U,si1);
si0=l3;
si1=l8;
i32_store(&i->m0,(U64)si0+84U,si1);
si0=l3;
si1=208U;
si0+=si1;
si1=24U;
si0+=si1;
si1=l3;
si2=56U;
si1+=si2;
si2=24U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=208U;
si0+=si1;
si1=16U;
si0+=si1;
si1=l3;
si2=56U;
si1+=si2;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=208U;
si0+=si1;
si1=8U;
si0+=si1;
si1=l3;
si2=56U;
si1+=si2;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=l3;
sj1=i64_load(&i->m0,(U64)si1+56U);
i64_store(&i->m0,(U64)si0+208U,sj1);
si0=l1;
si1=l3;
si2=208U;
si1+=si2;
f12029(i,si0,si1);
si0=l3;
si0=i32_load8_u(&i->m0,(U64)si0+173U);
si0=!(si0);
if(si0){
goto L16;
}
si0=l3;
si1=l3;
si1=i32_load(&i->m0,(U64)si1+88U);
l6=si1;
i32_store(&i->m0,(U64)si0+72U,si1);
si0=l3;
si1=l6;
si2=l3;
si2=i32_load(&i->m0,(U64)si2+84U);
l4=si2;
si1=si1 == si2;
i32_store8(&i->m0,(U64)si0+81U,si1);
si0=l7;
si1=l4;
si0=si0 >= si1;
if(si0){
goto L25;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0+8U);
l6=si0;
si0=l3;
si1=l7;
i32_store(&i->m0,(U64)si0+220U,si1);
si0=l3;
si1=l4;
i32_store(&i->m0,(U64)si0+216U,si1);
si0=l3;
si1=l14;
i32_store(&i->m0,(U64)si0+212U,si1);
si0=l3;
si1=l12;
i32_store(&i->m0,(U64)si0+208U,si1);
si0=l6;
si0=i32_load(&i->m0,(U64)si0+88U);
l4=si0;
si0=l3;
si1=176U;
si0+=si1;
si1=l3;
si2=208U;
si1+=si2;
f11335(i,si0,si1);
si0=l4;
si1=24U;
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
goto L14;
}
si0=l3;
si1=176U;
si0+=si1;
si1=l4;
si2=0U;
si0=f8110(i,si0,si1,si2);
l6=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+48U);
l4=si0;
si1=l3;
si1=i32_load(&i->m0,(U64)si1+44U);
si0=si0 != si1;
if(si0){
goto L26;
}
si0=l3;
si1=40U;
si0+=si1;
si1=l4;
f7257(i,si0,si1);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+48U);
l4=si0;
L26:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+40U);
si1=l4;
si2=2U;
si1<<=(si2&31);
si0+=si1;
si1=l6;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=l3;
si1=i32_load(&i->m0,(U64)si1+48U);
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0+48U,si1);
L25:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+12U);
si0=i32_load8_u(&i->m0,(U64)si0);
if(si0){
goto L29;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0+20U);
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
goto L14;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0+48U);
l6=si0;
si1=l3;
si1=i32_load(&i->m0,(U64)si1+44U);
si0=si0 != si1;
if(si0){
goto L30;
}
si0=l3;
si1=40U;
si0+=si1;
si1=l6;
f7257(i,si0,si1);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+48U);
l6=si0;
L30:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+40U);
si1=l6;
si2=2U;
si1<<=(si2&31);
si0+=si1;
si1=l4;
i32_store(&i->m0,(U64)si0,si1);
goto L28;
L29:;
si0=l13;
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
goto L14;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0+16U);
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si1=l6;
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
goto L14;
}
si0=l3;
si1=176U;
si0+=si1;
si1=l1;
si2=l4;
si3=l6;
f14859(i,si0,si1,si2,si3);
si0=0U;
si0=i32_load(&i->m0,(U64)si0+2972340U);
si1=2U;
si0=si0 != si1;
if(si0){
goto L20;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0+8U);
l8=si0;
si0=i32_load(&i->m0,(U64)si0+88U);
l17=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+20U);
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
si0=0U;
si0=i32_load(&i->m0,(U64)si0+2972344U);
l6=si0;
si1=l6;
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
goto L14;
}
si0=0U;
l4=si0;
si0=l6;
si1=77U;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=1U;
si0&=si1;
si0=!(si0);
if(si0){
goto L31;
}
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=64U;
si0=f15269(i,si0);
l4=si0;
si0=!(si0);
if(si0){
goto L19;
}
si0=l4;
sj1=-1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=56U;
si0+=si1;
sj1=-1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=48U;
si0+=si1;
sj1=-1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=40U;
si0+=si1;
sj1=-1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=32U;
si0+=si1;
sj1=-1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=24U;
si0+=si1;
sj1=-1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=16U;
si0+=si1;
sj1=-1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=8U;
i32_store(&i->m0,(U64)si0+224U,si1);
si0=l4;
si1=8U;
si0+=si1;
sj1=-1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l15;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l15;
si1=8U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l17;
si1=68U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l17=si0;
si1=l17;
si1=i32_load(&i->m0,(U64)si1);
l18=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
sj1=34359738376ULL;
i64_store(&i->m0,(U64)si0+216U,sj1);
si0=l3;
si1=l4;
i32_store(&i->m0,(U64)si0+212U,si1);
si0=l3;
si1=0U;
i32_store(&i->m0,(U64)si0+208U,si1);
si0=l18;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 == si1;
if(si0){
goto L14;
}
si0=l3;
si1=208U;
si0+=si1;
si1=l17;
si2=0U;
si0=f8146(i,si0,si1,si2);
l4=si0;
L31:;
si0=l3;
si1=176U;
si0+=si1;
si1=l6;
si2=l4;
si0=f8175(i,si0,si1,si2);
l6=si0;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=4U;
si0=f15269(i,si0);
l4=si0;
si0=!(si0);
if(si0){
goto L18;
}
si0=l4;
si1=l6;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
sj1=4294967297ULL;
i64_store(&i->m0,(U64)si0+260U,sj1);
si0=l3;
si1=l4;
i32_store(&i->m0,(U64)si0+256U,si1);
si0=0U;
si0=f5566(i,si0);
l4=si0;
si0=!(si0);
if(si0){
goto L17;
}
si0=l4;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1);
l19=sj1;
sj2=1ULL;
sj1+=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
sj1=0ULL;
i64_store(&i->m0,(U64)si0+244U,sj1);
si0=l3;
sj1=17179869184ULL;
i64_store(&i->m0,(U64)si0+236U,sj1);
si0=l3;
sj1=0ULL;
i64_store(&i->m0,(U64)si0+228U,sj1);
si0=l3;
si1=1862528U;
i32_store(&i->m0,(U64)si0+224U,si1);
si0=l3;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1+8U);
i64_store(&i->m0,(U64)si0+216U,sj1);
si0=l3;
sj1=l19;
i64_store(&i->m0,(U64)si0+208U,sj1);
si0=l3;
si1=16U;
si0+=si1;
si1=l7;
si2=l3;
si3=208U;
si2+=si3;
si3=l8;
f7705(i,si0,si1,si2,si3);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+20U);
l7=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+16U);
if(si0){
goto L27;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0+48U);
l4=si0;
si1=l3;
si1=i32_load(&i->m0,(U64)si1+44U);
si0=si0 != si1;
if(si0){
goto L32;
}
si0=l3;
si1=40U;
si0+=si1;
si1=l4;
f7257(i,si0,si1);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+48U);
l4=si0;
L32:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+40U);
si1=l4;
si2=2U;
si1<<=(si2&31);
si0+=si1;
si1=l7;
i32_store(&i->m0,(U64)si0,si1);
L28:;
si0=l3;
si1=l3;
si1=i32_load(&i->m0,(U64)si1+48U);
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0+48U,si1);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+88U);
l7=si0;
si0=l16;
si0=i32_load(&i->m0,(U64)si0);
si1=-1U;
si0+=si1;
si1=l5;
si2=1U;
si1+=si2;
l5=si1;
si0=si0 >= si1;
if(si0){
goto L21;
}
goto L16;
L27:;
}
si0=1U;
l2=si0;
goto L15;
L20:;
si0=1975972U;
si1=36U;
si2=1976024U;
f703(i,si0,si1,si2);
UNREACHABLE;
L19:;
si0=8U;
si1=64U;
f52(i,si0,si1);
UNREACHABLE;
L18:;
si0=4U;
si1=4U;
f52(i,si0,si1);
UNREACHABLE;
L17:;
si0=1914132U;
si1=70U;
si2=l3;
si3=176U;
si2+=si3;
si3=1914204U;
si4=1914300U;
f712(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L16:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+8U);
l4=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+76U);
l6=si0;
si0=l3;
si1=l7;
i32_store(&i->m0,(U64)si0+220U,si1);
si0=l3;
si1=l6;
i32_store(&i->m0,(U64)si0+216U,si1);
si0=l3;
si1=l14;
i32_store(&i->m0,(U64)si0+212U,si1);
si0=l3;
si1=l12;
i32_store(&i->m0,(U64)si0+208U,si1);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+88U);
l6=si0;
si0=l3;
si1=176U;
si0+=si1;
si1=l3;
si2=208U;
si1+=si2;
f11335(i,si0,si1);
si0=l6;
si1=24U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si1=l6;
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
goto L14;
}
si0=l3;
si1=176U;
si0+=si1;
si1=l6;
si2=0U;
si0=f8110(i,si0,si1,si2);
l8=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+48U);
l6=si0;
si1=l3;
si1=i32_load(&i->m0,(U64)si1+44U);
si0=si0 != si1;
if(si0){
goto L33;
}
si0=l3;
si1=40U;
si0+=si1;
si1=l6;
f7257(i,si0,si1);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+48U);
l6=si0;
L33:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+40U);
si1=l6;
si2=2U;
si1<<=(si2&31);
si0+=si1;
si1=l8;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=48U;
si0+=si1;
l6=si0;
si1=l6;
si1=i32_load(&i->m0,(U64)si1);
si2=1U;
si1+=si2;
l6=si1;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=188U;
si0+=si1;
si1=l6;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
sj0=i64_load(&i->m0,(U64)si0+40U);
l19=sj0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+88U);
l7=si0;
si1=112U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l8=si0;
si1=l8;
si1=i32_load(&i->m0,(U64)si1);
l6=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
sj1=l19;
i64_store(&i->m0,(U64)si0+180U,sj1);
si0=l3;
si1=0U;
i32_store(&i->m0,(U64)si0+176U,si1);
si0=l6;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 == si1;
if(si0){
goto L14;
}
si0=0U;
l6=si0;
si0=l8;
si1=77U;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=1U;
si0&=si1;
si0=!(si0);
if(si0){
goto L34;
}
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=64U;
si0=f15269(i,si0);
l6=si0;
si0=!(si0);
if(si0){
goto L13;
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
si0=l3;
si1=8U;
i32_store(&i->m0,(U64)si0+224U,si1);
si0=l6;
si1=8U;
si0+=si1;
sj1=-1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=236U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l7;
si1=68U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
si1=l7;
si1=i32_load(&i->m0,(U64)si1);
l1=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
sj1=0ULL;
i64_store(&i->m0,(U64)si0+228U,sj1);
si0=l3;
sj1=34359738376ULL;
i64_store(&i->m0,(U64)si0+216U,sj1);
si0=l3;
si1=l6;
i32_store(&i->m0,(U64)si0+212U,si1);
si0=l3;
si1=0U;
i32_store(&i->m0,(U64)si0+208U,si1);
si0=l1;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 == si1;
if(si0){
goto L14;
}
si0=l3;
si1=208U;
si0+=si1;
si1=l7;
si2=0U;
si0=f8146(i,si0,si1,si2);
l6=si0;
L34:;
si0=l3;
si1=176U;
si0+=si1;
si1=l8;
si2=l6;
si0=f8137(i,si0,si1,si2);
l8=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+88U);
l6=si0;
si0=l13;
si0=i32_load(&i->m0,(U64)si0);
si1=94U;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
if(si0){
goto L36;
}
si0=l6;
si1=200U;
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
sj1=-1ULL;
i64_store(&i->m0,(U64)si0+224U,sj1);
si0=l3;
sj1=1ULL;
i64_store(&i->m0,(U64)si0+216U,sj1);
si0=l3;
sj1=-4294967296ULL;
i64_store(&i->m0,(U64)si0+208U,sj1);
si0=l7;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 == si1;
if(si0){
goto L14;
}
si0=l3;
si1=208U;
si0+=si1;
si1=l6;
si2=0U;
si0=f8078(i,si0,si1,si2);
l6=si0;
goto L35;
L36:;
si0=l6;
si1=24U;
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
si1=0U;
i32_store(&i->m0,(U64)si0+216U,si1);
si0=l3;
sj1=1ULL;
i64_store(&i->m0,(U64)si0+208U,sj1);
si0=l7;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 == si1;
if(si0){
goto L14;
}
si0=l3;
si1=208U;
si0+=si1;
si1=l6;
si2=0U;
si0=f8110(i,si0,si1,si2);
l6=si0;
L35:;
si0=l3;
si1=8U;
si0+=si1;
si1=l4;
si2=l6;
si3=1664632U;
si4=4U;
si5=l8;
f6992(i,si0,si1,si2,si3,si4,si5);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+12U);
l7=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+8U);
if(si0){
goto L37;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0+24U);
si0=i32_load8_u(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L38;
}
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=8U;
si0=f15269(i,si0);
l2=si0;
si0=!(si0);
if(si0){
goto L12;
}
si0=l2;
si1=l5;
si2=l4;
si1=f12593(i,si1,si2);
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l2;
si1=l7;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
sj1=8589934594ULL;
i64_store(&i->m0,(U64)si0+212U,sj1);
si0=l3;
si1=l2;
i32_store(&i->m0,(U64)si0+208U,si1);
si0=l3;
si1=208U;
si0+=si1;
si1=l4;
si1=i32_load(&i->m0,(U64)si1+88U);
si2=8U;
si1+=si2;
si0=f5724(i,si0,si1);
l7=si0;
L38:;
si0=l6;
si1=l6;
si1=i32_load(&i->m0,(U64)si1);
l4=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=1U;
si0=si0 != si1;
if(si0){
goto L39;
}
si0=l6;
f7690(i,si0);
L39:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+96U);
si0=!(si0);
if(si0){
goto L40;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0+92U);
f15271(i,si0);
L40:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+112U);
l6=si0;
si0=!(si0);
if(si0){
goto L41;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0+104U);
l4=si0;
L42:;
{
si0=l4;
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L43;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
f15271(i,si0);
L43:;
si0=l4;
si1=16U;
si0+=si1;
l4=si0;
si0=l6;
si1=-1U;
si0+=si1;
l6=si0;
if(si0){
goto L42;
}
}
L41:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+108U);
si0=!(si0);
if(si0){
goto L44;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0+104U);
f15271(i,si0);
L44:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+124U);
si0=!(si0);
if(si0){
goto L45;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0+120U);
f15271(i,si0);
L45:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+136U);
si0=!(si0);
if(si0){
goto L46;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0+132U);
f15271(i,si0);
L46:;
si0=0U;
l4=si0;
goto L10;
L37:;
si0=l6;
si1=l6;
si1=i32_load(&i->m0,(U64)si1);
l4=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=0U;
l2=si0;
si0=l4;
si1=1U;
si0=si0 != si1;
if(si0){
goto L15;
}
si0=l6;
f7690(i,si0);
L15:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+96U);
si0=!(si0);
if(si0){
goto L47;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0+92U);
f15271(i,si0);
L47:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+112U);
l6=si0;
si0=!(si0);
if(si0){
goto L48;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0+104U);
l4=si0;
L49:;
{
si0=l4;
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L50;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
f15271(i,si0);
L50:;
si0=l4;
si1=16U;
si0+=si1;
l4=si0;
si0=l6;
si1=-1U;
si0+=si1;
l6=si0;
if(si0){
goto L49;
}
}
L48:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+108U);
si0=!(si0);
if(si0){
goto L51;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0+104U);
f15271(i,si0);
L51:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+124U);
si0=!(si0);
if(si0){
goto L52;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0+120U);
f15271(i,si0);
L52:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+136U);
si0=!(si0);
if(si0){
goto L53;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0+132U);
f15271(i,si0);
L53:;
si0=l2;
si0=!(si0);
if(si0){
goto L11;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0+48U);
l2=si0;
si0=!(si0);
if(si0){
goto L54;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0+40U);
l4=si0;
L55:;
{
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si1=l6;
si1=i32_load(&i->m0,(U64)si1);
l8=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l8;
si1=1U;
si0=si0 != si1;
if(si0){
goto L56;
}
si0=l6;
f7690(i,si0);
L56:;
si0=l4;
si1=4U;
si0+=si1;
l4=si0;
si0=l2;
si1=-1U;
si0+=si1;
l2=si0;
if(si0){
goto L55;
}
}
L54:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+44U);
si0=!(si0);
if(si0){
goto L11;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0+40U);
f15271(i,si0);
goto L11;
L14:;
f15042(i);
UNREACHABLE;
L13:;
si0=8U;
si1=64U;
f52(i,si0,si1);
UNREACHABLE;
L12:;
si0=4U;
si1=8U;
f52(i,si0,si1);
UNREACHABLE;
L11:;
si0=1U;
l4=si0;
L10:;
si0=l11;
si0=!(si0);
if(si0){
goto L58;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0+28U);
si0=!(si0);
if(si0){
goto L57;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0+24U);
f15271(i,si0);
goto L57;
L58:;
si0=l9;
switch(si0){
case 0:
goto L57;
case 1:
goto L62;
case 2:
goto L61;
case 3:
goto L60;
default:
goto L63;
}
L63:;
si0=l10;
si1=l10;
si1=i32_load(&i->m0,(U64)si1);
l6=si1;
si2=-16U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l6;
si1=-14U;
si0&=si1;
si1=18U;
si0=si0 == si1;
if(si0){
goto L59;
}
goto L57;
L62:;
si0=l10;
si1=0U;
si2=l10;
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
goto L57;
}
si0=l10;
si1=0U;
f1440(i,si0,si1);
goto L57;
L61:;
si0=l10;
si1=0U;
si2=l10;
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
goto L57;
}
si0=l10;
si1=0U;
f1440(i,si0,si1);
goto L57;
L60:;
si0=l10;
si1=l10;
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
goto L57;
}
L59:;
si0=l10;
f1433(i,si0);
L57:;
si0=l0;
si1=l7;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l4;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=272U;
si0+=si1;
i->g0=si0;
L0:;
}

void f7090(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
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
U64 sj1;
si0=i->g0;
si1=192U;
si0-=si1;
l3=si0;
i->g0=si0;
si0=l1;
si1=20U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L3;
}
si0=l1;
si1=16U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
si0=!(si0);
if(si0){
goto L3;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+8U);
l5=si0;
si0=l4;
si1=12U;
si0*=si1;
l4=si0;
si0=l1;
si1=24U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
L4:;
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
goto L5;
}
si0=l7;
si1=-8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=l6;
si0=si0 != si1;
if(si0){
goto L2;
}
L5:;
si0=l8;
si1=l6;
si0*=si1;
l6=si0;
si0=l4;
si1=-12U;
si0+=si1;
l4=si0;
if(si0){
goto L4;
}
}
L3:;
si0=l3;
si1=24U;
si0+=si1;
si1=l1;
si2=l1;
si2=i32_load(&i->m0,(U64)si2+4U);
si2=i32_load(&i->m0,(U64)si2);
TF(i->t0,si2,void (*)(rustpythonInstance*,U32,U32))(i,si0,si1);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+24U);
l5=si0;
si1=5U;
si0=si0 == si1;
if(si0){
goto L2;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0+36U);
l6=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+32U);
l4=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+28U);
l1=si0;
si0=l5;
switch(si0){
case 0:
goto L9;
case 1:
goto L8;
case 2:
goto L6;
case 3:
goto L7;
case 4:
goto L6;
default:
goto L9;
}
L9:;
si0=0U;
l9=si0;
si0=l1;
l10=si0;
goto L1;
L8:;
si0=l1;
si1=1U;
si0+=si1;
l10=si0;
si0=0U;
l9=si0;
goto L1;
L7:;
si0=l1;
si1=4U;
si0+=si1;
l10=si0;
si0=0U;
l9=si0;
goto L1;
L6:;
si0=0U;
l9=si0;
si0=l4;
l10=si0;
si0=l6;
l4=si0;
goto L1;
L2:;
si0=l3;
si1=0U;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l3;
sj1=1ULL;
i64_store(&i->m0,(U64)si0+8U,sj1);
si0=l1;
si1=l3;
si2=8U;
si1+=si2;
f7075(i,si0,si1);
si0=1U;
l9=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+16U);
l4=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+8U);
l10=si0;
L1:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0);
l11=si0;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si1=60U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l12=si0;
si0=l6;
si1=68U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l13=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+8U);
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+12U);
si0=i32_load(&i->m0,(U64)si0);
l8=si0;
si0=l3;
si1=109U;
si0+=si1;
si1=2U;
i32_store8(&i->m0,(U64)si0,si1);
si0=0U;
l7=si0;
si0=l3;
si1=80U;
si0+=si1;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=64U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=48U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=40U;
si0+=si1;
sj1=17179869184ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=56U;
si0+=si1;
sj1=21474836479ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=0U;
i32_store16(&i->m0,(U64)si0+112U,si1);
si0=l3;
sj1=4ULL;
i64_store(&i->m0,(U64)si0+72U,sj1);
si0=l3;
sj1=4ULL;
i64_store(&i->m0,(U64)si0+32U,sj1);
si0=l3;
si1=l13;
i32_store(&i->m0,(U64)si0+164U,si1);
si0=l3;
si1=l12;
i32_store(&i->m0,(U64)si0+160U,si1);
si0=l3;
si1=l10;
i32_store(&i->m0,(U64)si0+152U,si1);
si0=l3;
si1=l4;
i32_store(&i->m0,(U64)si0+156U,si1);
si0=l3;
si1=l8;
si2=l4;
si3=l8;
si4=l4;
si3=si3 < si4;
si1=si3?si1:si2;
l4=si1;
i32_store(&i->m0,(U64)si0+172U,si1);
si0=l3;
si1=l6;
si2=l4;
si3=l6;
si4=l4;
si3=si3 < si4;
si1=si3?si1:si2;
l4=si1;
i32_store(&i->m0,(U64)si0+168U,si1);
si0=l3;
si1=l4;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l3;
si1=l4;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l3;
si1=1U;
i32_store16(&i->m0,(U64)si0+176U,si1);
si0=l3;
si1=60U;
si0+=si1;
si1=0U;
f7267(i,si0,si1);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+60U);
si1=l3;
si2=68U;
si1+=si2;
l8=si1;
si1=i32_load(&i->m0,(U64)si1);
si2=28U;
si1*=si2;
si0+=si1;
l6=si0;
si1=258U;
i32_store16(&i->m0,(U64)si0+24U,si1);
si0=l6;
sj1=-1ULL;
i64_store(&i->m0,(U64)si0+16U,sj1);
si0=l6;
sj1=0ULL;
i64_store(&i->m0,(U64)si0+8U,sj1);
si0=l6;
si1=l4;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l6;
si1=l4;
i32_store(&i->m0,(U64)si0,si1);
si0=l8;
si1=l8;
si1=i32_load(&i->m0,(U64)si1);
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=24U;
si0+=si1;
si1=l3;
si2=152U;
si1+=si2;
f12027(i,si0,si1);
si0=l2;
si0=i32_load(&i->m0,(U64)si0+4U);
l4=si0;
si0=l3;
si0=i32_load8_u(&i->m0,(U64)si0+113U);
si0=!(si0);
if(si0){
goto L15;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0+16U);
l7=si0;
si0=l11;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si1=l6;
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
goto L13;
}
si0=l3;
si1=120U;
si0+=si1;
si1=l3;
si2=24U;
si1+=si2;
si2=l6;
si3=l4;
f14859(i,si0,si1,si2,si3);
si0=0U;
si0=i32_load(&i->m0,(U64)si0+2972340U);
si1=2U;
si0=si0 != si1;
if(si0){
goto L12;
}
si0=l7;
si0=i32_load(&i->m0,(U64)si0+88U);
l8=si0;
si0=0U;
si0=i32_load(&i->m0,(U64)si0+2972344U);
l6=si0;
si1=l6;
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
goto L13;
}
si0=0U;
l4=si0;
si0=l6;
si1=77U;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=1U;
si0&=si1;
si0=!(si0);
if(si0){
goto L16;
}
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=64U;
si0=f15269(i,si0);
l4=si0;
si0=!(si0);
if(si0){
goto L11;
}
si0=l4;
sj1=-1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=56U;
si0+=si1;
sj1=-1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=48U;
si0+=si1;
sj1=-1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=40U;
si0+=si1;
sj1=-1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=32U;
si0+=si1;
sj1=-1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=24U;
si0+=si1;
sj1=-1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=16U;
si0+=si1;
sj1=-1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=8U;
i32_store(&i->m0,(U64)si0+168U,si1);
si0=l4;
si1=8U;
si0+=si1;
sj1=-1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=180U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l8;
si1=68U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l8=si0;
si1=l8;
si1=i32_load(&i->m0,(U64)si1);
l7=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
sj1=0ULL;
i64_store(&i->m0,(U64)si0+172U,sj1);
si0=l3;
sj1=34359738376ULL;
i64_store(&i->m0,(U64)si0+160U,sj1);
si0=l3;
si1=l4;
i32_store(&i->m0,(U64)si0+156U,si1);
si0=l3;
si1=0U;
i32_store(&i->m0,(U64)si0+152U,si1);
si0=l7;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 == si1;
if(si0){
goto L13;
}
si0=l3;
si1=152U;
si0+=si1;
si1=l8;
si2=0U;
si0=f8146(i,si0,si1,si2);
l4=si0;
L16:;
si0=l3;
si1=120U;
si0+=si1;
si1=l6;
si2=l4;
si0=f8175(i,si0,si1,si2);
l7=si0;
goto L14;
L15:;
si0=l4;
si1=l4;
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
si0=l4;
f7690(i,si0);
L14:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+36U);
si0=!(si0);
if(si0){
goto L17;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0+32U);
f15271(i,si0);
L17:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+52U);
l6=si0;
si0=!(si0);
if(si0){
goto L18;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0+44U);
l4=si0;
L19:;
{
si0=l4;
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L20;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
f15271(i,si0);
L20:;
si0=l4;
si1=16U;
si0+=si1;
l4=si0;
si0=l6;
si1=-1U;
si0+=si1;
l6=si0;
if(si0){
goto L19;
}
}
L18:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+48U);
si0=!(si0);
if(si0){
goto L21;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0+44U);
f15271(i,si0);
L21:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+64U);
si0=!(si0);
if(si0){
goto L22;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0+60U);
f15271(i,si0);
L22:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+76U);
si0=!(si0);
if(si0){
goto L23;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0+72U);
f15271(i,si0);
L23:;
si0=l9;
si0=!(si0);
if(si0){
goto L24;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0+12U);
si0=!(si0);
if(si0){
goto L10;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0+8U);
f15271(i,si0);
goto L10;
L24:;
si0=l5;
switch(si0){
case 0:
goto L10;
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
si0=l1;
si1=l1;
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
goto L10;
}
si0=l1;
f1433(i,si0);
goto L10;
L27:;
si0=l1;
si1=0U;
si2=l1;
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
goto L10;
}
si0=l1;
si1=0U;
f1440(i,si0,si1);
goto L10;
L26:;
si0=l1;
si1=0U;
si2=l1;
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
goto L10;
}
si0=l1;
si1=0U;
f1440(i,si0,si1);
goto L10;
L25:;
si0=l1;
si1=l1;
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
goto L10;
}
si0=l1;
f1433(i,si0);
goto L10;
L13:;
f15042(i);
UNREACHABLE;
L12:;
si0=1975972U;
si1=36U;
si2=1976024U;
f703(i,si0,si1,si2);
UNREACHABLE;
L11:;
si0=8U;
si1=64U;
f52(i,si0,si1);
UNREACHABLE;
L10:;
si0=l0;
si1=l7;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=192U;
si0+=si1;
i->g0=si0;
L0:;
}

void f7091(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
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
U64 sj1;
si0=i->g0;
si1=192U;
si0-=si1;
l4=si0;
i->g0=si0;
si0=l1;
si1=20U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L3;
}
si0=l1;
si1=16U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si0=!(si0);
if(si0){
goto L3;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+8U);
l6=si0;
si0=l5;
si1=12U;
si0*=si1;
l5=si0;
si0=l1;
si1=24U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
L4:;
{
si0=l6;
si1=l5;
si0+=si1;
l8=si0;
si1=-12U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l9=si0;
si1=2U;
si0=si0 < si1;
if(si0){
goto L5;
}
si0=l8;
si1=-8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=l7;
si0=si0 != si1;
if(si0){
goto L2;
}
L5:;
si0=l9;
si1=l7;
si0*=si1;
l7=si0;
si0=l5;
si1=-12U;
si0+=si1;
l5=si0;
if(si0){
goto L4;
}
}
L3:;
si0=l4;
si1=24U;
si0+=si1;
si1=l1;
si2=l1;
si2=i32_load(&i->m0,(U64)si2+4U);
si2=i32_load(&i->m0,(U64)si2);
TF(i->t0,si2,void (*)(rustpythonInstance*,U32,U32))(i,si0,si1);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+24U);
l6=si0;
si1=5U;
si0=si0 == si1;
if(si0){
goto L2;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0+36U);
l7=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+32U);
l5=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+28U);
l1=si0;
si0=l6;
switch(si0){
case 0:
goto L9;
case 1:
goto L8;
case 2:
goto L6;
case 3:
goto L7;
case 4:
goto L6;
default:
goto L9;
}
L9:;
si0=0U;
l10=si0;
si0=l1;
l11=si0;
goto L1;
L8:;
si0=l1;
si1=1U;
si0+=si1;
l11=si0;
si0=0U;
l10=si0;
goto L1;
L7:;
si0=l1;
si1=4U;
si0+=si1;
l11=si0;
si0=0U;
l10=si0;
goto L1;
L6:;
si0=0U;
l10=si0;
si0=l5;
l11=si0;
si0=l7;
l5=si0;
goto L1;
L2:;
si0=l4;
si1=0U;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l4;
sj1=1ULL;
i64_store(&i->m0,(U64)si0+8U,sj1);
si0=l1;
si1=l4;
si2=8U;
si1+=si2;
f7075(i,si0,si1);
si0=1U;
l10=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+16U);
l5=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+8U);
l11=si0;
L1:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
si1=60U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l12=si0;
si0=l7;
si1=68U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l13=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+8U);
l7=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+12U);
l9=si0;
si0=0U;
l8=si0;
si0=l4;
si1=80U;
si0+=si1;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=64U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=48U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=40U;
si0+=si1;
sj1=17179869184ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=56U;
si0+=si1;
sj1=21474836479ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=109U;
si0+=si1;
si1=2U;
i32_store8(&i->m0,(U64)si0,si1);
si0=l4;
sj1=4ULL;
i64_store(&i->m0,(U64)si0+72U,sj1);
si0=l4;
sj1=4ULL;
i64_store(&i->m0,(U64)si0+32U,sj1);
si0=l4;
si1=0U;
i32_store16(&i->m0,(U64)si0+112U,si1);
si0=l4;
sj1=0ULL;
i64_store(&i->m0,(U64)si0+24U,sj1);
si0=l4;
si1=l2;
si1=i32_load8_u(&i->m0,(U64)si1+16U);
si2=0U;
si1=si1 != si2;
i32_store8(&i->m0,(U64)si0+177U,si1);
si0=l4;
si1=0U;
i32_store8(&i->m0,(U64)si0+176U,si1);
si0=l4;
si1=l13;
i32_store(&i->m0,(U64)si0+164U,si1);
si0=l4;
si1=l12;
i32_store(&i->m0,(U64)si0+160U,si1);
si0=l4;
si1=l11;
i32_store(&i->m0,(U64)si0+152U,si1);
si0=l4;
si1=l5;
i32_store(&i->m0,(U64)si0+156U,si1);
si0=l4;
si1=l9;
si2=l5;
si3=l9;
si4=l5;
si3=si3 < si4;
si1=si3?si1:si2;
l5=si1;
i32_store(&i->m0,(U64)si0+172U,si1);
si0=l4;
si1=l7;
si2=l5;
si3=l7;
si4=l5;
si3=si3 < si4;
si1=si3?si1:si2;
i32_store(&i->m0,(U64)si0+168U,si1);
si0=l4;
si1=24U;
si0+=si1;
si1=l4;
si2=152U;
si1+=si2;
f12029(i,si0,si1);
si0=l2;
si1=l4;
si1=i32_load(&i->m0,(U64)si1+28U);
l5=si1;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l2;
si1=l5;
si2=l4;
si2=i32_load(&i->m0,(U64)si2+24U);
si1=si1 == si2;
i32_store8(&i->m0,(U64)si0+16U,si1);
si0=l4;
si0=i32_load8_u(&i->m0,(U64)si0+113U);
si0=!(si0);
if(si0){
goto L14;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si1=l5;
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
goto L13;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0+4U);
l7=si0;
si1=l7;
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
goto L13;
}
si0=l4;
si1=120U;
si0+=si1;
si1=l4;
si2=24U;
si1+=si2;
si2=l5;
si3=l7;
f14859(i,si0,si1,si2,si3);
si0=0U;
si0=i32_load(&i->m0,(U64)si0+2972340U);
si1=2U;
si0=si0 != si1;
if(si0){
goto L12;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0+88U);
l9=si0;
si0=0U;
si0=i32_load(&i->m0,(U64)si0+2972344U);
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
goto L13;
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
goto L15;
}
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=64U;
si0=f15269(i,si0);
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
si0=l4;
si1=8U;
i32_store(&i->m0,(U64)si0+168U,si1);
si0=l5;
si1=8U;
si0+=si1;
sj1=-1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=180U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l9;
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
i64_store(&i->m0,(U64)si0+172U,sj1);
si0=l4;
sj1=34359738376ULL;
i64_store(&i->m0,(U64)si0+160U,sj1);
si0=l4;
si1=l5;
i32_store(&i->m0,(U64)si0+156U,si1);
si0=l4;
si1=0U;
i32_store(&i->m0,(U64)si0+152U,si1);
si0=l8;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 == si1;
if(si0){
goto L13;
}
si0=l4;
si1=152U;
si0+=si1;
si1=l9;
si2=0U;
si0=f8146(i,si0,si1,si2);
l5=si0;
L15:;
si0=l4;
si1=120U;
si0+=si1;
si1=l7;
si2=l5;
si0=f8175(i,si0,si1,si2);
l8=si0;
L14:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+36U);
si0=!(si0);
if(si0){
goto L16;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0+32U);
f15271(i,si0);
L16:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+52U);
l7=si0;
si0=!(si0);
if(si0){
goto L17;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0+44U);
l5=si0;
L18:;
{
si0=l5;
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L19;
}
si0=l5;
si0=i32_load(&i->m0,(U64)si0);
f15271(i,si0);
L19:;
si0=l5;
si1=16U;
si0+=si1;
l5=si0;
si0=l7;
si1=-1U;
si0+=si1;
l7=si0;
if(si0){
goto L18;
}
}
L17:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+48U);
si0=!(si0);
if(si0){
goto L20;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0+44U);
f15271(i,si0);
L20:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+64U);
si0=!(si0);
if(si0){
goto L21;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0+60U);
f15271(i,si0);
L21:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+76U);
si0=!(si0);
if(si0){
goto L22;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0+72U);
f15271(i,si0);
L22:;
si0=l10;
si0=!(si0);
if(si0){
goto L23;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0+12U);
si0=!(si0);
if(si0){
goto L10;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0+8U);
f15271(i,si0);
goto L10;
L23:;
si0=l6;
switch(si0){
case 0:
goto L10;
case 1:
goto L26;
case 2:
goto L25;
case 3:
goto L24;
default:
goto L27;
}
L27:;
si0=l1;
si1=l1;
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
goto L10;
}
si0=l1;
f1433(i,si0);
goto L10;
L26:;
si0=l1;
si1=0U;
si2=l1;
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
goto L10;
}
si0=l1;
si1=0U;
f1440(i,si0,si1);
goto L10;
L25:;
si0=l1;
si1=0U;
si2=l1;
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
goto L10;
}
si0=l1;
si1=0U;
f1440(i,si0,si1);
goto L10;
L24:;
si0=l1;
si1=l1;
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
goto L10;
}
si0=l1;
f1433(i,si0);
goto L10;
L13:;
f15042(i);
UNREACHABLE;
L12:;
si0=1975972U;
si1=36U;
si2=1976024U;
f703(i,si0,si1,si2);
UNREACHABLE;
L11:;
si0=8U;
si1=64U;
f52(i,si0,si1);
UNREACHABLE;
L10:;
si0=l0;
si1=l8;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=192U;
si0+=si1;
i->g0=si0;
L0:;
}

void f7092(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
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
si1=192U;
si0-=si1;
l3=si0;
i->g0=si0;
si0=l1;
si1=20U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L3;
}
si0=l1;
si1=16U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
si0=!(si0);
if(si0){
goto L3;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+8U);
l5=si0;
si0=l4;
si1=12U;
si0*=si1;
l4=si0;
si0=l1;
si1=24U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
L4:;
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
goto L5;
}
si0=l7;
si1=-8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=l6;
si0=si0 != si1;
if(si0){
goto L2;
}
L5:;
si0=l8;
si1=l6;
si0*=si1;
l6=si0;
si0=l4;
si1=-12U;
si0+=si1;
l4=si0;
if(si0){
goto L4;
}
}
L3:;
si0=l3;
si1=24U;
si0+=si1;
si1=l1;
si2=l1;
si2=i32_load(&i->m0,(U64)si2+4U);
si2=i32_load(&i->m0,(U64)si2);
TF(i->t0,si2,void (*)(rustpythonInstance*,U32,U32))(i,si0,si1);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+24U);
l5=si0;
si1=5U;
si0=si0 == si1;
if(si0){
goto L2;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0+36U);
l6=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+32U);
l4=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+28U);
l1=si0;
si0=l5;
switch(si0){
case 0:
goto L9;
case 1:
goto L8;
case 2:
goto L6;
case 3:
goto L7;
case 4:
goto L6;
default:
goto L9;
}
L9:;
si0=0U;
l9=si0;
si0=l1;
l7=si0;
goto L1;
L8:;
si0=l1;
si1=1U;
si0+=si1;
l7=si0;
si0=0U;
l9=si0;
goto L1;
L7:;
si0=l1;
si1=4U;
si0+=si1;
l7=si0;
si0=0U;
l9=si0;
goto L1;
L6:;
si0=0U;
l9=si0;
si0=l4;
l7=si0;
si0=l6;
l4=si0;
goto L1;
L2:;
si0=l3;
si1=0U;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l3;
sj1=1ULL;
i64_store(&i->m0,(U64)si0+8U,sj1);
si0=l1;
si1=l3;
si2=8U;
si1+=si2;
f7075(i,si0,si1);
si0=1U;
l9=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+16U);
l4=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+8U);
l7=si0;
L1:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+8U);
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+12U);
si0=i32_load(&i->m0,(U64)si0);
l8=si0;
si0=l3;
si1=164U;
si0+=si1;
si1=l2;
si1=i32_load(&i->m0,(U64)si1);
l10=si1;
si1=i32_load(&i->m0,(U64)si1);
l11=si1;
si2=68U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=l7;
i32_store(&i->m0,(U64)si0+152U,si1);
si0=0U;
l7=si0;
si0=l3;
si1=0U;
i32_store16(&i->m0,(U64)si0+176U,si1);
si0=l3;
si1=l11;
si2=60U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0+160U,si1);
si0=l3;
si1=l4;
i32_store(&i->m0,(U64)si0+156U,si1);
si0=l3;
si1=l8;
si2=l4;
si3=l8;
si4=l4;
si3=si3 < si4;
si1=si3?si1:si2;
l4=si1;
i32_store(&i->m0,(U64)si0+172U,si1);
si0=l3;
si1=l6;
si2=l4;
si3=l6;
si4=l4;
si3=si3 < si4;
si1=si3?si1:si2;
i32_store(&i->m0,(U64)si0+168U,si1);
si0=l3;
si1=80U;
si0+=si1;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=64U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=48U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=40U;
si0+=si1;
sj1=17179869184ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=56U;
si0+=si1;
sj1=21474836479ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=109U;
si0+=si1;
si1=2U;
i32_store8(&i->m0,(U64)si0,si1);
si0=l3;
sj1=4ULL;
i64_store(&i->m0,(U64)si0+72U,sj1);
si0=l3;
sj1=4ULL;
i64_store(&i->m0,(U64)si0+32U,sj1);
si0=l3;
si1=0U;
i32_store16(&i->m0,(U64)si0+112U,si1);
si0=l3;
sj1=0ULL;
i64_store(&i->m0,(U64)si0+24U,sj1);
si0=l3;
si1=24U;
si0+=si1;
si1=l3;
si2=152U;
si1+=si2;
f12029(i,si0,si1);
si0=l2;
si0=i32_load(&i->m0,(U64)si0+4U);
l4=si0;
si0=l3;
si0=i32_load8_u(&i->m0,(U64)si0+113U);
si0=!(si0);
if(si0){
goto L15;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0+16U);
l7=si0;
si0=l10;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si1=l6;
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
goto L13;
}
si0=l3;
si1=120U;
si0+=si1;
si1=l3;
si2=24U;
si1+=si2;
si2=l6;
si3=l4;
f14859(i,si0,si1,si2,si3);
si0=0U;
si0=i32_load(&i->m0,(U64)si0+2972340U);
si1=2U;
si0=si0 != si1;
if(si0){
goto L12;
}
si0=l7;
si0=i32_load(&i->m0,(U64)si0+88U);
l8=si0;
si0=0U;
si0=i32_load(&i->m0,(U64)si0+2972344U);
l6=si0;
si1=l6;
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
goto L13;
}
si0=0U;
l4=si0;
si0=l6;
si1=77U;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=1U;
si0&=si1;
si0=!(si0);
if(si0){
goto L16;
}
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=64U;
si0=f15269(i,si0);
l4=si0;
si0=!(si0);
if(si0){
goto L11;
}
si0=l4;
sj1=-1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=56U;
si0+=si1;
sj1=-1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=48U;
si0+=si1;
sj1=-1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=40U;
si0+=si1;
sj1=-1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=32U;
si0+=si1;
sj1=-1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=24U;
si0+=si1;
sj1=-1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=16U;
si0+=si1;
sj1=-1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=8U;
i32_store(&i->m0,(U64)si0+168U,si1);
si0=l4;
si1=8U;
si0+=si1;
sj1=-1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=180U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l8;
si1=68U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l8=si0;
si1=l8;
si1=i32_load(&i->m0,(U64)si1);
l7=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
sj1=0ULL;
i64_store(&i->m0,(U64)si0+172U,sj1);
si0=l3;
sj1=34359738376ULL;
i64_store(&i->m0,(U64)si0+160U,sj1);
si0=l3;
si1=l4;
i32_store(&i->m0,(U64)si0+156U,si1);
si0=l3;
si1=0U;
i32_store(&i->m0,(U64)si0+152U,si1);
si0=l7;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 == si1;
if(si0){
goto L13;
}
si0=l3;
si1=152U;
si0+=si1;
si1=l8;
si2=0U;
si0=f8146(i,si0,si1,si2);
l4=si0;
L16:;
si0=l3;
si1=120U;
si0+=si1;
si1=l6;
si2=l4;
si0=f8175(i,si0,si1,si2);
l7=si0;
goto L14;
L15:;
si0=l4;
si1=l4;
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
si0=l4;
f7690(i,si0);
L14:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+36U);
si0=!(si0);
if(si0){
goto L17;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0+32U);
f15271(i,si0);
L17:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+52U);
l6=si0;
si0=!(si0);
if(si0){
goto L18;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0+44U);
l4=si0;
L19:;
{
si0=l4;
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L20;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
f15271(i,si0);
L20:;
si0=l4;
si1=16U;
si0+=si1;
l4=si0;
si0=l6;
si1=-1U;
si0+=si1;
l6=si0;
if(si0){
goto L19;
}
}
L18:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+48U);
si0=!(si0);
if(si0){
goto L21;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0+44U);
f15271(i,si0);
L21:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+64U);
si0=!(si0);
if(si0){
goto L22;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0+60U);
f15271(i,si0);
L22:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+76U);
si0=!(si0);
if(si0){
goto L23;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0+72U);
f15271(i,si0);
L23:;
si0=l9;
si0=!(si0);
if(si0){
goto L24;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0+12U);
si0=!(si0);
if(si0){
goto L10;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0+8U);
f15271(i,si0);
goto L10;
L24:;
si0=l5;
switch(si0){
case 0:
goto L10;
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
si0=l1;
si1=l1;
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
goto L10;
}
si0=l1;
f1433(i,si0);
goto L10;
L27:;
si0=l1;
si1=0U;
si2=l1;
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
goto L10;
}
si0=l1;
si1=0U;
f1440(i,si0,si1);
goto L10;
L26:;
si0=l1;
si1=0U;
si2=l1;
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
goto L10;
}
si0=l1;
si1=0U;
f1440(i,si0,si1);
goto L10;
L25:;
si0=l1;
si1=l1;
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
goto L10;
}
si0=l1;
f1433(i,si0);
goto L10;
L13:;
f15042(i);
UNREACHABLE;
L12:;
si0=1975972U;
si1=36U;
si2=1976024U;
f703(i,si0,si1,si2);
UNREACHABLE;
L11:;
si0=8U;
si1=64U;
f52(i,si0,si1);
UNREACHABLE;
L10:;
si0=l0;
si1=l7;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=192U;
si0+=si1;
i->g0=si0;
L0:;
}

void f7093(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4) {
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
si1=64U;
si0-=si1;
l5=si0;
i->g0=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+8U);
si1=12U;
si0*=si1;
l6=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
si0=l3;
if(si0){
goto L4;
}
si0=0U;
l8=si0;
si0=l7;
l1=si0;
goto L3;
L4:;
si0=l3;
si1=2U;
si0<<=(si1&31);
l9=si0;
si0=l6;
l10=si0;
si0=0U;
l8=si0;
si0=l7;
l1=si0;
L5:;
{
si0=l10;
si0=!(si0);
if(si0){
goto L1;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+8U);
l11=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
l12=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l13=si0;
si0=l5;
si1=l2;
si1=i32_load(&i->m0,(U64)si1);
l3=si1;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l3;
si1=l13;
si2=l3;
si3=31U;
si2=(U32)((I32)si2>>(si3&31));
si1&=si2;
si0+=si1;
l3=si0;
si1=0U;
si0=(U32)((I32)si0<(I32)si1);
if(si0){
goto L6;
}
si0=l3;
si1=l13;
si0=si0 >= si1;
if(si0){
goto L6;
}
si0=l2;
si1=4U;
si0+=si1;
l2=si0;
si0=l11;
si1=l8;
si0+=si1;
si1=l3;
si2=l12;
si1*=si2;
si0+=si1;
l8=si0;
si0=l10;
si1=-12U;
si0+=si1;
l10=si0;
si0=l1;
si1=12U;
si0+=si1;
l1=si0;
si0=l9;
si1=-4U;
si0+=si1;
l9=si0;
si0=!(si0);
if(si0){
goto L3;
}
goto L5;
L6:;
}
si0=l5;
si1=44U;
si0+=si1;
sj1=1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=1659100U;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l5;
si1=55U;
i32_store(&i->m0,(U64)si0+60U,si1);
si0=l5;
si1=l5;
si2=56U;
si1+=si2;
i32_store(&i->m0,(U64)si0+40U,si1);
si0=l5;
si1=l5;
si2=12U;
si1+=si2;
i32_store(&i->m0,(U64)si0+56U,si1);
si0=l5;
si1=1U;
i32_store(&i->m0,(U64)si0+36U,si1);
si0=l5;
si1=16U;
si0+=si1;
si1=l5;
si2=32U;
si1+=si2;
f63(i,si0,si1);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+88U);
si1=388U;
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
goto L7;
}
si0=l4;
si1=l1;
si2=l5;
si3=16U;
si2+=si3;
si0=f7173(i,si0,si1,si2);
l1=si0;
si0=l0;
si1=1U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l1;
i32_store(&i->m0,(U64)si0+4U,si1);
goto L2;
L7:;
f15042(i);
UNREACHABLE;
L3:;
si0=l1;
si1=l7;
si2=l6;
si1+=si2;
si0=si0 != si1;
if(si0){
goto L1;
}
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l8;
i32_store(&i->m0,(U64)si0+4U,si1);
L2:;
si0=l5;
si1=64U;
si0+=si1;
i->g0=si0;
goto L0;
L1:;
si0=1832600U;
si1=65U;
si2=1832776U;
f10193(i,si0,si1,si2);
UNREACHABLE;
L0:;
}

void f7094(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U32 l4=0;
U32 si0,si1,si2,si3;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+8U);
l3=si0;
if(si0){
goto L3;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0);
si0=i32_load(&i->m0,(U64)si0+48U);
l3=si0;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+16U);
l1=si1;
si0+=si1;
l0=si0;
si1=l3;
si0=si0 < si1;
if(si0){
goto L2;
}
si0=l0;
si1=l2;
si2=12U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
l4=si1;
si0=si0 > si1;
if(si0){
goto L1;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0+8U);
si1=l3;
si0+=si1;
l3=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+4U);
l0=si0;
si0=i32_load(&i->m0,(U64)si0+4U);
si1=l0;
si1=i32_load(&i->m0,(U64)si1+8U);
l2=si1;
si0-=si1;
si1=l1;
si0=si0 >= si1;
if(si0){
goto L4;
}
si0=l0;
si1=l2;
si2=l1;
f7248(i,si0,si1,si2);
si0=l0;
si0=i32_load(&i->m0,(U64)si0+8U);
l2=si0;
L4:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
si1=l2;
si0+=si1;
si1=l3;
si2=l1;
si0=f15390(i,si0,si1,si2);
si0=l0;
si1=l2;
si2=l1;
si1+=si2;
i32_store(&i->m0,(U64)si0+8U,si1);
goto L0;
L3:;
si0=l1;
si0=!(si0);
if(si0){
goto L6;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
si1=l3;
si2=-1U;
si1+=si2;
si2=12U;
si1*=si2;
si0+=si1;
l1=si0;
si0=i32_load(&i->m0,(U64)si0+8U);
if(si0){
goto L6;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
si1=l0;
si1=i32_load(&i->m0,(U64)si1+16U);
si0=si0 == si1;
if(si0){
goto L5;
}
L6:;
si0=l0;
si1=0U;
si2=0U;
si3=l2;
f7095(i,si0,si1,si2,si3);
goto L0;
L5:;
si0=l0;
si1=0U;
si2=0U;
si3=l2;
f7096(i,si0,si1,si2,si3);
goto L0;
L2:;
si0=l3;
si1=l0;
si2=1649184U;
f675(i,si0,si1,si2);
UNREACHABLE;
L1:;
si0=l0;
si1=l4;
si2=1649184U;
f666(i,si0,si1,si2);
UNREACHABLE;
L0:;
}

void f7095(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 l8=0;
U32 l9=0;
U32 l10=0;
U32 si0,si1,si2,si3;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+8U);
l4=si0;
si1=l2;
si0=si0 <= si1;
if(si0){
goto L2;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
si1=l2;
si2=12U;
si1*=si2;
si0+=si1;
l5=si0;
si0=i32_load(&i->m0,(U64)si0+8U);
l6=si0;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+4U);
l7=si0;
si0=l5;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si0=l2;
si1=1U;
si0+=si1;
l8=si0;
si1=l4;
si0=si0 == si1;
if(si0){
goto L3;
}
si0=l5;
si0=!(si0);
if(si0){
goto L1;
}
si0=l6;
si1=l1;
si0+=si1;
l2=si0;
L4:;
{
si0=l0;
si1=l2;
si2=l8;
si3=l3;
f7095(i,si0,si1,si2,si3);
si0=l2;
si1=l7;
si0+=si1;
l2=si0;
si0=l5;
si1=-1U;
si0+=si1;
l5=si0;
if(si0){
goto L4;
}
goto L1;
}
L3:;
si0=l5;
si0=!(si0);
if(si0){
goto L1;
}
si0=l6;
si1=l1;
si0+=si1;
l8=si0;
si0=l3;
si1=12U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+8U);
l9=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+4U);
l2=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+16U);
l0=si0;
L7:;
{
si0=l8;
si1=l6;
si1=i32_load(&i->m0,(U64)si1+48U);
l10=si1;
si0+=si1;
l3=si0;
si1=l0;
si0+=si1;
l4=si0;
si1=l3;
si0=si0 < si1;
if(si0){
goto L6;
}
si0=l4;
si1=l1;
si0=si0 > si1;
if(si0){
goto L5;
}
si0=l9;
si1=l3;
si0+=si1;
l4=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+4U);
si1=l2;
si1=i32_load(&i->m0,(U64)si1+8U);
l3=si1;
si0-=si1;
si1=l0;
si0=si0 >= si1;
if(si0){
goto L8;
}
si0=l2;
si1=l3;
si2=l0;
f7248(i,si0,si1,si2);
si0=l2;
si0=i32_load(&i->m0,(U64)si0+8U);
l3=si0;
L8:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0);
si1=l3;
si0+=si1;
si1=l4;
si2=l0;
si0=f15390(i,si0,si1,si2);
si0=l2;
si1=l3;
si2=l0;
si1+=si2;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l8;
si1=l7;
si0+=si1;
l8=si0;
si0=l5;
si1=-1U;
si0+=si1;
l5=si0;
si0=!(si0);
if(si0){
goto L1;
}
goto L7;
}
L6:;
si0=l3;
si1=l4;
si2=1649184U;
f675(i,si0,si1,si2);
UNREACHABLE;
L5:;
si0=l0;
si1=l8;
si0+=si1;
si1=l10;
si0+=si1;
si1=l1;
si2=1649184U;
f666(i,si0,si1,si2);
UNREACHABLE;
L2:;
si0=l2;
si1=l4;
si2=1659108U;
f663(i,si0,si1,si2);
UNREACHABLE;
L1:;
L0:;
}

void f7096(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 si0,si1,si2,si3;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+8U);
l4=si0;
si1=l2;
si0=si0 <= si1;
if(si0){
goto L3;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
si1=l2;
si2=12U;
si1*=si2;
si0+=si1;
l5=si0;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si0=l2;
si1=1U;
si0+=si1;
l7=si0;
si1=l4;
si0=si0 == si1;
if(si0){
goto L4;
}
si0=l6;
si0=!(si0);
if(si0){
goto L5;
}
si0=l5;
si0=i32_load(&i->m0,(U64)si0+4U);
l4=si0;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+8U);
si1=l1;
si0+=si1;
l2=si0;
L6:;
{
si0=l0;
si1=l2;
si2=l7;
si3=l3;
f7096(i,si0,si1,si2,si3);
si0=l2;
si1=l4;
si0+=si1;
l2=si0;
si0=l6;
si1=-1U;
si0+=si1;
l6=si0;
if(si0){
goto L6;
}
}
L5:;
goto L0;
L4:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
si0=i32_load(&i->m0,(U64)si0+48U);
si1=l1;
si0+=si1;
l2=si0;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+16U);
si2=l6;
si1*=si2;
l6=si1;
si0+=si1;
l0=si0;
si1=l2;
si0=si0 < si1;
if(si0){
goto L2;
}
si0=l0;
si1=l3;
si2=12U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
l7=si1;
si0=si0 > si1;
if(si0){
goto L1;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0+8U);
si1=l2;
si0+=si1;
l7=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+4U);
l2=si0;
si0=i32_load(&i->m0,(U64)si0+4U);
si1=l2;
si1=i32_load(&i->m0,(U64)si1+8U);
l0=si1;
si0-=si1;
si1=l6;
si0=si0 >= si1;
if(si0){
goto L7;
}
si0=l2;
si1=l0;
si2=l6;
f7248(i,si0,si1,si2);
si0=l2;
si0=i32_load(&i->m0,(U64)si0+8U);
l0=si0;
L7:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0);
si1=l0;
si0+=si1;
si1=l7;
si2=l6;
si0=f15390(i,si0,si1,si2);
si0=l2;
si1=l0;
si2=l6;
si1+=si2;
i32_store(&i->m0,(U64)si0+8U,si1);
goto L0;
L3:;
si0=l2;
si1=l4;
si2=1659108U;
f663(i,si0,si1,si2);
UNREACHABLE;
L2:;
si0=l2;
si1=l0;
si2=1649184U;
f675(i,si0,si1,si2);
UNREACHABLE;
L1:;
si0=l0;
si1=l7;
si2=1649184U;
f666(i,si0,si1,si2);
UNREACHABLE;
L0:;
}

void f7097(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U32 si0,si1,si2,si3,si4,si5;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+8U);
l4=si0;
if(si0){
goto L1;
}
si0=l3;
si1=0U;
si2=l0;
si2=i32_load(&i->m0,(U64)si2+16U);
si3=0U;
si4=l1;
si4=i32_load(&i->m0,(U64)si4+16U);
si0=f6895(i,si0,si1,si2,si3,si4);
goto L0;
L1:;
si0=l2;
si0=!(si0);
if(si0){
goto L3;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
si1=l4;
si2=-1U;
si1+=si2;
si2=12U;
si1*=si2;
si0+=si1;
l2=si0;
si0=i32_load(&i->m0,(U64)si0+8U);
if(si0){
goto L3;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0+4U);
si1=l0;
si1=i32_load(&i->m0,(U64)si1+16U);
si0=si0 == si1;
if(si0){
goto L2;
}
L3:;
si0=l0;
si1=l1;
si2=0U;
si3=0U;
si4=0U;
si5=l3;
f7098(i,si0,si1,si2,si3,si4,si5);
goto L0;
L2:;
si0=l0;
si1=l1;
si2=0U;
si3=0U;
si4=0U;
si5=l3;
f7099(i,si0,si1,si2,si3,si4,si5);
L0:;
}

void f7098(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4,U32 l5) {
U32 l6=0;
U32 l7=0;
U32 l8=0;
U32 l9=0;
U32 l10=0;
U32 l11=0;
U32 l12=0;
U32 si0,si1,si2,si3,si4,si5;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+8U);
l6=si0;
si1=l4;
si0=si0 <= si1;
if(si0){
goto L2;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+8U);
l7=si0;
si1=l4;
si0=si0 <= si1;
if(si0){
goto L3;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
si1=l4;
si2=12U;
si1*=si2;
l8=si1;
si0+=si1;
l7=si0;
si0=i32_load(&i->m0,(U64)si0+8U);
l9=si0;
si0=l7;
si0=i32_load(&i->m0,(U64)si0+4U);
l10=si0;
si0=l7;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
si1=l8;
si0+=si1;
l8=si0;
si0=i32_load(&i->m0,(U64)si0+8U);
l11=si0;
si0=l8;
si0=i32_load(&i->m0,(U64)si0+4U);
l8=si0;
si0=l4;
si1=1U;
si0+=si1;
l12=si0;
si1=l6;
si0=si0 == si1;
if(si0){
goto L4;
}
si0=l7;
si0=!(si0);
if(si0){
goto L1;
}
si0=l11;
si1=l3;
si0+=si1;
l4=si0;
si0=l9;
si1=l2;
si0+=si1;
l6=si0;
L5:;
{
si0=l0;
si1=l1;
si2=l6;
si3=l4;
si4=l12;
si5=l5;
f7098(i,si0,si1,si2,si3,si4,si5);
si0=l4;
si1=l8;
si0+=si1;
l4=si0;
si0=l6;
si1=l10;
si0+=si1;
l6=si0;
si0=l7;
si1=-1U;
si0+=si1;
l7=si0;
if(si0){
goto L5;
}
goto L1;
}
L4:;
si0=l7;
si0=!(si0);
if(si0){
goto L1;
}
si0=l11;
si1=l3;
si0+=si1;
l4=si0;
si0=l9;
si1=l2;
si0+=si1;
l6=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+16U);
l1=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+16U);
l0=si0;
L6:;
{
si0=l5;
si1=l6;
si2=l0;
si3=l6;
si2+=si3;
si3=l4;
si4=l1;
si5=l4;
si4+=si5;
si0=f6895(i,si0,si1,si2,si3,si4);
if(si0){
goto L1;
}
si0=l4;
si1=l8;
si0+=si1;
l4=si0;
si0=l6;
si1=l10;
si0+=si1;
l6=si0;
si0=l7;
si1=-1U;
si0+=si1;
l7=si0;
si0=!(si0);
if(si0){
goto L1;
}
goto L6;
}
L3:;
si0=l4;
si1=l7;
si2=1659140U;
f663(i,si0,si1,si2);
UNREACHABLE;
L2:;
si0=l4;
si1=l6;
si2=1659124U;
f663(i,si0,si1,si2);
UNREACHABLE;
L1:;
L0:;
}

void f7099(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4,U32 l5) {
U32 l6=0;
U32 l7=0;
U32 l8=0;
U32 l9=0;
U32 l10=0;
U32 si0,si1,si2,si3,si4,si5;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+8U);
l6=si0;
si1=l4;
si0=si0 <= si1;
if(si0){
goto L2;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+8U);
l7=si0;
si1=l4;
si0=si0 <= si1;
if(si0){
goto L1;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
si1=l4;
si2=12U;
si1*=si2;
l8=si1;
si0+=si1;
l9=si0;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
si0=l4;
si1=1U;
si0+=si1;
l10=si0;
si1=l6;
si0=si0 == si1;
if(si0){
goto L3;
}
si0=l7;
si0=!(si0);
if(si0){
goto L4;
}
si0=l9;
si0=i32_load(&i->m0,(U64)si0+4U);
l6=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
si1=l8;
si0+=si1;
l4=si0;
si0=i32_load(&i->m0,(U64)si0+4U);
l8=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+8U);
si1=l3;
si0+=si1;
l4=si0;
si0=l9;
si0=i32_load(&i->m0,(U64)si0+8U);
si1=l2;
si0+=si1;
l3=si0;
L5:;
{
si0=l0;
si1=l1;
si2=l3;
si3=l4;
si4=l10;
si5=l5;
f7099(i,si0,si1,si2,si3,si4,si5);
si0=l4;
si1=l8;
si0+=si1;
l4=si0;
si0=l3;
si1=l6;
si0+=si1;
l3=si0;
si0=l7;
si1=-1U;
si0+=si1;
l7=si0;
if(si0){
goto L5;
}
}
L4:;
goto L0;
L3:;
si0=l5;
si1=l2;
si2=l0;
si2=i32_load(&i->m0,(U64)si2+16U);
si3=l7;
si2*=si3;
si3=l2;
si2+=si3;
si3=l3;
si4=l1;
si4=i32_load(&i->m0,(U64)si4+16U);
si5=l7;
si4*=si5;
si5=l3;
si4+=si5;
si0=f6895(i,si0,si1,si2,si3,si4);
goto L0;
L2:;
si0=l4;
si1=l6;
si2=1659124U;
f663(i,si0,si1,si2);
UNREACHABLE;
L1:;
si0=l4;
si1=l7;
si2=1659140U;
f663(i,si0,si1,si2);
UNREACHABLE;
L0:;
}

void f7100(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4,U32 l5) {
U32 l6=0;
U32 l7=0;
U32 l8=0;
U32 l9=0;
U32 l10=0;
U32 l11=0;
U32 l12=0;
U32 si0,si1,si2,si3,si4,si5;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+8U);
l6=si0;
si1=l4;
si0=si0 <= si1;
if(si0){
goto L2;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+8U);
l7=si0;
si1=l4;
si0=si0 <= si1;
if(si0){
goto L3;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
si1=l4;
si2=12U;
si1*=si2;
l8=si1;
si0+=si1;
l7=si0;
si0=i32_load(&i->m0,(U64)si0+8U);
l9=si0;
si0=l7;
si0=i32_load(&i->m0,(U64)si0+4U);
l10=si0;
si0=l7;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
si1=l8;
si0+=si1;
l8=si0;
si0=i32_load(&i->m0,(U64)si0+8U);
l11=si0;
si0=l8;
si0=i32_load(&i->m0,(U64)si0+4U);
l8=si0;
si0=l4;
si1=1U;
si0+=si1;
l12=si0;
si1=l6;
si0=si0 == si1;
if(si0){
goto L4;
}
si0=l7;
si0=!(si0);
if(si0){
goto L1;
}
si0=l11;
si1=l3;
si0+=si1;
l4=si0;
si0=l9;
si1=l2;
si0+=si1;
l6=si0;
L5:;
{
si0=l0;
si1=l1;
si2=l6;
si3=l4;
si4=l12;
si5=l5;
f7100(i,si0,si1,si2,si3,si4,si5);
si0=l4;
si1=l8;
si0+=si1;
l4=si0;
si0=l6;
si1=l10;
si0+=si1;
l6=si0;
si0=l7;
si1=-1U;
si0+=si1;
l7=si0;
if(si0){
goto L5;
}
goto L1;
}
L4:;
si0=l7;
si0=!(si0);
if(si0){
goto L1;
}
si0=l11;
si1=l3;
si0+=si1;
l4=si0;
si0=l9;
si1=l2;
si0+=si1;
l6=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+16U);
l1=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+16U);
l0=si0;
L6:;
{
si0=l5;
si1=l6;
si2=l0;
si3=l6;
si2+=si3;
si3=l4;
si4=l1;
si5=l4;
si4+=si5;
f6896(i,si0,si1,si2,si3,si4);
si0=l4;
si1=l8;
si0+=si1;
l4=si0;
si0=l6;
si1=l10;
si0+=si1;
l6=si0;
si0=l7;
si1=-1U;
si0+=si1;
l7=si0;
if(si0){
goto L6;
}
goto L1;
}
L3:;
si0=l4;
si1=l7;
si2=1659140U;
f663(i,si0,si1,si2);
UNREACHABLE;
L2:;
si0=l4;
si1=l6;
si2=1659124U;
f663(i,si0,si1,si2);
UNREACHABLE;
L1:;
L0:;
}

void f7101(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4,U32 l5) {
U32 l6=0;
U32 l7=0;
U32 l8=0;
U32 l9=0;
U32 l10=0;
U32 si0,si1,si2,si3,si4,si5;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+8U);
l6=si0;
si1=l4;
si0=si0 <= si1;
if(si0){
goto L2;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+8U);
l7=si0;
si1=l4;
si0=si0 <= si1;
if(si0){
goto L1;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
si1=l4;
si2=12U;
si1*=si2;
l8=si1;
si0+=si1;
l9=si0;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
si0=l4;
si1=1U;
si0+=si1;
l10=si0;
si1=l6;
si0=si0 == si1;
if(si0){
goto L3;
}
si0=l7;
si0=!(si0);
if(si0){
goto L4;
}
si0=l9;
si0=i32_load(&i->m0,(U64)si0+4U);
l6=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
si1=l8;
si0+=si1;
l4=si0;
si0=i32_load(&i->m0,(U64)si0+4U);
l8=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+8U);
si1=l3;
si0+=si1;
l4=si0;
si0=l9;
si0=i32_load(&i->m0,(U64)si0+8U);
si1=l2;
si0+=si1;
l3=si0;
L5:;
{
si0=l0;
si1=l1;
si2=l3;
si3=l4;
si4=l10;
si5=l5;
f7101(i,si0,si1,si2,si3,si4,si5);
si0=l4;
si1=l8;
si0+=si1;
l4=si0;
si0=l3;
si1=l6;
si0+=si1;
l3=si0;
si0=l7;
si1=-1U;
si0+=si1;
l7=si0;
if(si0){
goto L5;
}
}
L4:;
goto L0;
L3:;
si0=l5;
si1=l2;
si2=l0;
si2=i32_load(&i->m0,(U64)si2+16U);
si3=l7;
si2*=si3;
si3=l2;
si2+=si3;
si3=l3;
si4=l1;
si4=i32_load(&i->m0,(U64)si4+16U);
si5=l7;
si4*=si5;
si5=l3;
si4+=si5;
f6896(i,si0,si1,si2,si3,si4);
goto L0;
L2:;
si0=l4;
si1=l6;
si2=1659124U;
f663(i,si0,si1,si2);
UNREACHABLE;
L1:;
si0=l4;
si1=l7;
si2=1659140U;
f663(i,si0,si1,si2);
UNREACHABLE;
L0:;
}

void f7102(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4,U32 l5) {
U32 l6=0;
U32 l7=0;
U32 l8=0;
U32 l9=0;
U32 l10=0;
U32 l11=0;
U64 l12=0;
U32 si0,si1,si2,si3,si4;
U64 sj2;
si0=i->g0;
si1=48U;
si0-=si1;
l6=si0;
i->g0=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+88U);
l7=si0;
si1=1208U;
si0+=si1;
l8=si0;
si0=i32_load(&i->m0,(U64)si0);
l9=si0;
si1=8U;
si0&=si1;
if(si0){
goto L2;
}
si0=l9;
si1=16U;
si0+=si1;
l10=si0;
si1=l9;
si0=si0 < si1;
if(si0){
goto L2;
}
si0=l7;
si1=l10;
si2=l7;
si2=i32_load(&i->m0,(U64)si2+1208U);
l11=si2;
si3=l11;
si4=l9;
si3=si3 == si4;
si1=si3?si1:si2;
i32_store(&i->m0,(U64)si0+1208U,si1);
si0=l11;
si1=l9;
si0=si0 == si1;
if(si0){
goto L1;
}
L2:;
si0=l8;
si1=0U;
sj2=l12;
si3=1000000000U;
si0=f1432(i,si0,si1,sj2,si3);
L1:;
si0=l7;
si1=1216U;
si0+=si1;
si1=l3;
si2=l4;
si0=f13453(i,si0,si1,si2);
l9=si0;
if(si0){
goto L4;
}
si0=0U;
l9=si0;
goto L3;
L4:;
si0=l9;
si0=i32_load(&i->m0,(U64)si0);
l9=si0;
L3:;
si0=l7;
si1=l7;
si1=i32_load(&i->m0,(U64)si1+1208U);
l11=si1;
si2=-16U;
si1+=si2;
i32_store(&i->m0,(U64)si0+1208U,si1);
si0=l11;
si1=-14U;
si0&=si1;
si1=18U;
si0=si0 != si1;
if(si0){
goto L5;
}
si0=l7;
si1=1208U;
si0+=si1;
f1433(i,si0);
L5:;
si0=l9;
l7=si0;
si0=l9;
if(si0){
goto L10;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+88U);
l7=si0;
si0=l6;
si1=24U;
si0+=si1;
si1=l3;
si2=l4;
f10675(i,si0,si1,si2);
si0=l7;
si1=200U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
si1=l7;
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
goto L9;
}
si0=l6;
si1=24U;
si0+=si1;
si1=l7;
si2=0U;
si0=f8078(i,si0,si1,si2);
l7=si0;
L10:;
si0=l2;
si1=l2;
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
goto L9;
}
si0=l6;
si1=24U;
si0+=si1;
si1=l2;
si2=l7;
si3=l1;
f11879(i,si0,si1,si2,si3);
si0=l6;
si0=i32_load(&i->m0,(U64)si0+28U);
l2=si0;
si0=l6;
si0=i32_load(&i->m0,(U64)si0+24U);
if(si0){
goto L11;
}
si0=l6;
si1=l6;
si2=32U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l6;
si1=l2;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l6;
si1=8U;
si0+=si1;
si1=l6;
si2=16U;
si1+=si2;
si2=l5;
si3=l1;
f11986(i,si0,si1,si2,si3);
si0=l6;
si0=i32_load(&i->m0,(U64)si0+12U);
l2=si0;
si0=l6;
si0=i32_load(&i->m0,(U64)si0+8U);
l1=si0;
si0=l9;
if(si0){
goto L6;
}
si0=l7;
si1=l7;
si1=i32_load(&i->m0,(U64)si1);
l9=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l7;
l5=si0;
si0=l9;
si1=1U;
si0=si0 != si1;
if(si0){
goto L6;
}
goto L7;
L11:;
si0=l9;
if(si0){
goto L8;
}
si0=l7;
si1=l7;
si1=i32_load(&i->m0,(U64)si1);
l9=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l9;
si1=1U;
si0=si0 != si1;
if(si0){
goto L8;
}
si0=l7;
f7690(i,si0);
goto L8;
L9:;
f15042(i);
UNREACHABLE;
L8:;
si0=l5;
si1=l5;
si1=i32_load(&i->m0,(U64)si1);
l7=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=1U;
l1=si0;
si0=l7;
si1=1U;
si0=si0 != si1;
if(si0){
goto L6;
}
L7:;
si0=l5;
f7690(i,si0);
L6:;
si0=l0;
si1=l2;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l1;
i32_store(&i->m0,(U64)si0,si1);
si0=l6;
si1=48U;
si0+=si1;
i->g0=si0;
L0:;
}

void f7103(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4,U32 l5) {
U32 l6=0;
U32 l7=0;
U32 l8=0;
U32 l9=0;
U32 l10=0;
U32 l11=0;
U64 l12=0;
U32 si0,si1,si2,si3,si4;
U64 sj2;
si0=i->g0;
si1=48U;
si0-=si1;
l6=si0;
i->g0=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+88U);
l7=si0;
si1=1208U;
si0+=si1;
l8=si0;
si0=i32_load(&i->m0,(U64)si0);
l9=si0;
si1=8U;
si0&=si1;
if(si0){
goto L2;
}
si0=l9;
si1=16U;
si0+=si1;
l10=si0;
si1=l9;
si0=si0 < si1;
if(si0){
goto L2;
}
si0=l7;
si1=l10;
si2=l7;
si2=i32_load(&i->m0,(U64)si2+1208U);
l11=si2;
si3=l11;
si4=l9;
si3=si3 == si4;
si1=si3?si1:si2;
i32_store(&i->m0,(U64)si0+1208U,si1);
si0=l11;
si1=l9;
si0=si0 == si1;
if(si0){
goto L1;
}
L2:;
si0=l8;
si1=0U;
sj2=l12;
si3=1000000000U;
si0=f1432(i,si0,si1,sj2,si3);
L1:;
si0=l7;
si1=1216U;
si0+=si1;
si1=l3;
si2=l4;
si0=f13453(i,si0,si1,si2);
l9=si0;
if(si0){
goto L4;
}
si0=0U;
l9=si0;
goto L3;
L4:;
si0=l9;
si0=i32_load(&i->m0,(U64)si0);
l9=si0;
L3:;
si0=l7;
si1=l7;
si1=i32_load(&i->m0,(U64)si1+1208U);
l11=si1;
si2=-16U;
si1+=si2;
i32_store(&i->m0,(U64)si0+1208U,si1);
si0=l11;
si1=-14U;
si0&=si1;
si1=18U;
si0=si0 != si1;
if(si0){
goto L5;
}
si0=l7;
si1=1208U;
si0+=si1;
f1433(i,si0);
L5:;
si0=l9;
l7=si0;
si0=l9;
if(si0){
goto L10;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+88U);
l7=si0;
si0=l6;
si1=24U;
si0+=si1;
si1=l3;
si2=l4;
f10675(i,si0,si1,si2);
si0=l7;
si1=200U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
si1=l7;
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
goto L9;
}
si0=l6;
si1=24U;
si0+=si1;
si1=l7;
si2=0U;
si0=f8078(i,si0,si1,si2);
l7=si0;
L10:;
si0=l2;
si1=l2;
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
goto L9;
}
si0=l6;
si1=24U;
si0+=si1;
si1=l2;
si2=l7;
si3=l1;
f11879(i,si0,si1,si2,si3);
si0=l6;
si0=i32_load(&i->m0,(U64)si0+28U);
l2=si0;
si0=l6;
si0=i32_load(&i->m0,(U64)si0+24U);
if(si0){
goto L11;
}
si0=l6;
si1=l6;
si2=32U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l6;
si1=l2;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l6;
si1=8U;
si0+=si1;
si1=l6;
si2=16U;
si1+=si2;
si2=l5;
si3=l1;
f11986(i,si0,si1,si2,si3);
si0=l6;
si0=i32_load(&i->m0,(U64)si0+12U);
l2=si0;
si0=l6;
si0=i32_load(&i->m0,(U64)si0+8U);
l1=si0;
si0=l9;
if(si0){
goto L6;
}
si0=l7;
si1=l7;
si1=i32_load(&i->m0,(U64)si1);
l9=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l7;
l5=si0;
si0=l9;
si1=1U;
si0=si0 != si1;
if(si0){
goto L6;
}
goto L7;
L11:;
si0=l9;
if(si0){
goto L8;
}
si0=l7;
si1=l7;
si1=i32_load(&i->m0,(U64)si1);
l9=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l9;
si1=1U;
si0=si0 != si1;
if(si0){
goto L8;
}
si0=l7;
f7690(i,si0);
goto L8;
L9:;
f15042(i);
UNREACHABLE;
L8:;
si0=l5;
si1=l5;
si1=i32_load(&i->m0,(U64)si1);
l7=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=1U;
l1=si0;
si0=l7;
si1=1U;
si0=si0 != si1;
if(si0){
goto L6;
}
L7:;
si0=l5;
f7690(i,si0);
L6:;
si0=l0;
si1=l2;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l1;
i32_store(&i->m0,(U64)si0,si1);
si0=l6;
si1=48U;
si0+=si1;
i->g0=si0;
L0:;
}

void f7104(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 si0,si1,si2,si3,si4,si5;
U64 sj2,sj3;
si0=i->g0;
si1=32U;
si0-=si1;
l3=si0;
i->g0=si0;
si0=l2;
si1=56U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
si0=!(si0);
if(si0){
goto L2;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0+48U);
l5=si0;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si0=l5;
si1=l5;
si2=4U;
si1+=si2;
si2=l4;
si3=-1U;
si2+=si3;
l4=si2;
si3=2U;
si2<<=(si3&31);
si0=f15391(i,si0,si1,si2);
si0=l2;
si1=l4;
i32_store(&i->m0,(U64)si0+56U,si1);
goto L1;
L2:;
si0=0U;
l6=si0;
si0=l2;
si1=28U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L3;
}
si0=l3;
si1=8U;
si0+=si1;
si1=l2;
si2=16U;
si1+=si2;
si2=l2;
sj2=i64_load(&i->m0,(U64)si2);
si3=l2;
si4=8U;
si3+=si4;
sj3=i64_load(&i->m0,(U64)si3);
si4=1659648U;
si5=4U;
si2=f10928(i,sj2,sj3,si4,si5);
si3=1659648U;
si4=4U;
f12864(i,si0,si1,si2,si3,si4);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+8U);
l4=si0;
si0=!(si0);
if(si0){
goto L3;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0+24U);
l6=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+12U);
si0=!(si0);
if(si0){
goto L3;
}
si0=l4;
f15271(i,si0);
L3:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+56U);
l4=si0;
L1:;
si0=l4;
si0=!(si0);
if(si0){
goto L5;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0+48U);
l7=si0;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si0=l7;
si1=l7;
si2=4U;
si1+=si2;
si2=l4;
si3=-1U;
si2+=si3;
l4=si2;
si3=2U;
si2<<=(si3&31);
si0=f15391(i,si0,si1,si2);
si0=l2;
si1=l4;
i32_store(&i->m0,(U64)si0+56U,si1);
goto L4;
L5:;
si0=0U;
l5=si0;
si0=l2;
si1=28U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L4;
}
si0=l3;
si1=8U;
si0+=si1;
si1=l2;
si2=16U;
si1+=si2;
si2=l2;
sj2=i64_load(&i->m0,(U64)si2);
si3=l2;
si4=8U;
si3+=si4;
sj3=i64_load(&i->m0,(U64)si3);
si4=1659644U;
si5=4U;
si2=f10928(i,sj2,sj3,si4,si5);
si3=1659644U;
si4=4U;
f12864(i,si0,si1,si2,si3,si4);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+8U);
l2=si0;
si0=!(si0);
if(si0){
goto L4;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0+24U);
l5=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+12U);
si0=!(si0);
if(si0){
goto L4;
}
si0=l2;
f15271(i,si0);
L4:;
si0=l0;
si1=l6;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=5U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=8U;
si0+=si1;
si1=l5;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=32U;
si0+=si1;
i->g0=si0;
L0:;
}

void f7105(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
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
U32 si0,si1,si2,si3,si4,si5;
U64 sj0,sj1,sj2,sj3;
si0=i->g0;
si1=48U;
si0-=si1;
l3=si0;
i->g0=si0;
si0=l2;
si1=56U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
si0=!(si0);
if(si0){
goto L7;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0+48U);
l5=si0;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si0=l5;
si1=l5;
si2=4U;
si1+=si2;
si2=l4;
si3=-1U;
si2+=si3;
l4=si2;
si3=2U;
si2<<=(si3&31);
si0=f15391(i,si0,si1,si2);
si0=l2;
si1=l4;
i32_store(&i->m0,(U64)si0+56U,si1);
goto L6;
L7:;
si0=l2;
si1=28U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L5;
}
si0=l3;
si1=24U;
si0+=si1;
si1=l2;
si2=16U;
si1+=si2;
si2=l2;
sj2=i64_load(&i->m0,(U64)si2);
si3=l2;
si4=8U;
si3+=si4;
sj3=i64_load(&i->m0,(U64)si3);
si4=1664532U;
si5=4U;
si2=f10928(i,sj2,sj3,si4,si5);
si3=1664532U;
si4=4U;
f12864(i,si0,si1,si2,si3,si4);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+24U);
l4=si0;
si0=!(si0);
if(si0){
goto L5;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0+40U);
l6=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+28U);
si0=!(si0);
if(si0){
goto L8;
}
si0=l4;
f15271(i,si0);
L8:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+56U);
l4=si0;
L6:;
si0=l4;
si0=!(si0);
if(si0){
goto L12;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0+48U);
l5=si0;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
si0=l5;
si1=l5;
si2=4U;
si1+=si2;
si2=l4;
si3=-1U;
si2+=si3;
l4=si2;
si3=2U;
si2<<=(si3&31);
si0=f15391(i,si0,si1,si2);
si0=l2;
si1=l4;
i32_store(&i->m0,(U64)si0+56U,si1);
goto L11;
L12:;
si0=l2;
si1=28U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L10;
}
si0=l3;
si1=24U;
si0+=si1;
si1=l2;
si2=16U;
si1+=si2;
si2=l2;
sj2=i64_load(&i->m0,(U64)si2);
si3=l2;
si4=8U;
si3+=si4;
sj3=i64_load(&i->m0,(U64)si3);
si4=1662256U;
si5=4U;
si2=f10928(i,sj2,sj3,si4,si5);
si3=1662256U;
si4=4U;
f12864(i,si0,si1,si2,si3,si4);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+24U);
l4=si0;
si0=!(si0);
if(si0){
goto L10;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0+40U);
l7=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+28U);
si0=!(si0);
if(si0){
goto L11;
}
si0=l4;
f15271(i,si0);
L11:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+88U);
l8=si0;
si1=200U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l9=si0;
si1=l7;
si1=i32_load(&i->m0,(U64)si1+28U);
l5=si1;
si0=si0 == si1;
if(si0){
goto L14;
}
si0=l5;
si1=468U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=2U;
si0<<=(si1&31);
l4=si0;
si0=l5;
si1=460U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
L15:;
{
si0=l4;
si0=!(si0);
if(si0){
goto L13;
}
si0=l4;
si1=-4U;
si0+=si1;
l4=si0;
si0=l5;
si0=i32_load(&i->m0,(U64)si0);
l10=si0;
si0=l5;
si1=4U;
si0+=si1;
l5=si0;
si0=l10;
si1=l9;
si0=si0 != si1;
if(si0){
goto L15;
}
}
L14:;
si0=l7;
sj0=i64_load(&i->m0,(U64)si0+8U);
sj1=-1851977428690684601ULL;
sj0^=sj1;
si1=l7;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
sj2=-786598182489054301ULL;
sj1^=sj2;
sj0|=sj1;
si0=!(sj0);
if(si0){
goto L9;
}
si0=l1;
si1=1682360U;
si2=7U;
si3=l8;
si4=476U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si4=l9;
si5=l7;
si0=f7151(i,si0,si1,si2,si3,si4,si5);
l4=si0;
si0=l7;
si1=l7;
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
goto L4;
L13:;
si0=l1;
si1=1679036U;
si2=4U;
si3=l8;
si4=504U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si4=l9;
si5=l7;
si0=f7151(i,si0,si1,si2,si3,si4,si5);
l4=si0;
si0=l7;
si1=l7;
si1=i32_load(&i->m0,(U64)si1);
l5=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=1U;
si0=si0 == si1;
if(si0){
goto L4;
}
goto L3;
L10:;
si0=0U;
l7=si0;
L9:;
si0=l3;
si1=24U;
si0+=si1;
si1=l1;
si2=l2;
f7131(i,si0,si1,si2);
si0=l3;
si0=i32_load8_u(&i->m0,(U64)si0+44U);
l4=si0;
si1=2U;
si0=si0 == si1;
if(si0){
goto L16;
}
si0=l0;
si1=l3;
si1=i32_load16_u(&i->m0,(U64)si1+45U);
i32_store16(&i->m0,(U64)si0+29U,si1);
si0=l3;
si1=16U;
si0+=si1;
si1=l3;
si2=24U;
si1+=si2;
si2=16U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
l5=si1;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=8U;
si0+=si1;
si1=l3;
si2=24U;
si1+=si2;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
l11=sj1;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=31U;
si0+=si1;
si1=l3;
si2=47U;
si1+=si2;
si1=i32_load8_u(&i->m0,(U64)si1);
i32_store8(&i->m0,(U64)si0,si1);
si0=l3;
si1=l3;
sj1=i64_load(&i->m0,(U64)si1+24U);
l12=sj1;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=l6;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l7;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
sj1=l12;
i64_store(&i->m0,(U64)si0+8U,sj1);
si0=l0;
si1=16U;
si0+=si1;
sj1=l11;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=24U;
si0+=si1;
si1=l5;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l4;
i32_store8(&i->m0,(U64)si0+28U,si1);
goto L1;
L16:;
si0=l3;
si1=8U;
si0+=si1;
si1=l3;
si2=24U;
si1+=si2;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
l11=sj1;
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=l3;
sj1=i64_load(&i->m0,(U64)si1+24U);
l12=sj1;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=8U;
si0+=si1;
sj1=l11;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
sj1=l12;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=2U;
i32_store8(&i->m0,(U64)si0+28U,si1);
si0=l7;
si0=!(si0);
if(si0){
goto L17;
}
si0=l7;
si1=l7;
si1=i32_load(&i->m0,(U64)si1);
l4=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=1U;
si0=si0 != si1;
if(si0){
goto L17;
}
si0=l7;
f7690(i,si0);
L17:;
si0=l6;
si1=l6;
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
goto L2;
L5:;
si0=l0;
si1=2U;
i32_store8(&i->m0,(U64)si0+28U,si1);
si0=l0;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
goto L1;
L4:;
si0=l7;
f7690(i,si0);
L3:;
si0=l0;
si1=2U;
i32_store8(&i->m0,(U64)si0+28U,si1);
si0=l0;
si1=4U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l4;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l6;
si1=l6;
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
L2:;
si0=l6;
f7690(i,si0);
L1:;
si0=l3;
si1=48U;
si0+=si1;
i->g0=si0;
L0:;
}

void f7106(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
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
U64 sj0,sj1,sj2,sj3;
si0=i->g0;
si1=32U;
si0-=si1;
l3=si0;
i->g0=si0;
si0=l2;
si1=56U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
si0=!(si0);
if(si0){
goto L7;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0+48U);
l5=si0;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si0=l5;
si1=l5;
si2=4U;
si1+=si2;
si2=l4;
si3=-1U;
si2+=si3;
l7=si2;
si3=2U;
si2<<=(si3&31);
si0=f15391(i,si0,si1,si2);
si0=l2;
si1=l7;
i32_store(&i->m0,(U64)si0+56U,si1);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+88U);
l8=si0;
si1=200U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l9=si0;
si1=l6;
si1=i32_load(&i->m0,(U64)si1+28U);
l10=si1;
si0=si0 == si1;
if(si0){
goto L9;
}
si0=l10;
si1=468U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=2U;
si0<<=(si1&31);
l5=si0;
si0=l10;
si1=460U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l10=si0;
L10:;
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
si0=l10;
si0=i32_load(&i->m0,(U64)si0);
l11=si0;
si0=l10;
si1=4U;
si0+=si1;
l10=si0;
si0=l11;
si1=l9;
si0=si0 != si1;
if(si0){
goto L10;
}
}
L9:;
si0=l6;
sj0=i64_load(&i->m0,(U64)si0+8U);
sj1=-1851977428690684601ULL;
sj0^=sj1;
si1=l6;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
sj2=-786598182489054301ULL;
sj1^=sj2;
sj0|=sj1;
si0=!(sj0);
if(si0){
goto L11;
}
si0=l1;
si1=1682360U;
si2=7U;
si3=l8;
si4=476U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si4=l9;
si5=l6;
si0=f7151(i,si0,si1,si2,si3,si4,si5);
l5=si0;
si0=l6;
si1=l6;
si1=i32_load(&i->m0,(U64)si1);
l10=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l10;
si1=1U;
si0=si0 != si1;
if(si0){
goto L2;
}
goto L3;
L11:;
si0=l7;
si0=!(si0);
if(si0){
goto L12;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0+48U);
l5=si0;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
si0=l5;
si1=l5;
si2=4U;
si1+=si2;
si2=l4;
si3=-2U;
si2+=si3;
l10=si2;
si3=2U;
si2<<=(si3&31);
si0=f15391(i,si0,si1,si2);
si0=l2;
si1=l10;
i32_store(&i->m0,(U64)si0+56U,si1);
goto L5;
L12:;
si0=l2;
si1=28U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L6;
}
si0=l3;
si1=8U;
si0+=si1;
si1=l2;
si2=16U;
si1+=si2;
si2=l2;
sj2=i64_load(&i->m0,(U64)si2);
si3=l2;
si4=8U;
si3+=si4;
sj3=i64_load(&i->m0,(U64)si3);
si4=1668598U;
si5=8U;
si2=f10928(i,sj2,sj3,si4,si5);
si3=1668598U;
si4=8U;
f12864(i,si0,si1,si2,si3,si4);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+8U);
l5=si0;
si0=!(si0);
if(si0){
goto L6;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0+24U);
l7=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+12U);
si0=!(si0);
if(si0){
goto L5;
}
si0=l5;
f15271(i,si0);
goto L5;
L8:;
si0=l1;
si1=1679036U;
si2=4U;
si3=l8;
si4=504U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si4=l9;
si5=l6;
si0=f7151(i,si0,si1,si2,si3,si4,si5);
l5=si0;
si0=l6;
si1=l6;
si1=i32_load(&i->m0,(U64)si1);
l10=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l10;
si1=1U;
si0=si0 == si1;
if(si0){
goto L3;
}
goto L2;
L7:;
si0=l0;
sj1=1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=8U;
si0+=si1;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
goto L1;
L6:;
si0=0U;
l7=si0;
goto L4;
L5:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+88U);
l4=si0;
si1=220U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l9=si0;
si1=l7;
si1=i32_load(&i->m0,(U64)si1+28U);
l10=si1;
si0=si0 == si1;
if(si0){
goto L16;
}
si0=l10;
si1=468U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=2U;
si0<<=(si1&31);
l5=si0;
si0=l10;
si1=460U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l10=si0;
L17:;
{
si0=l5;
si0=!(si0);
if(si0){
goto L15;
}
si0=l5;
si1=-4U;
si0+=si1;
l5=si0;
si0=l10;
si0=i32_load(&i->m0,(U64)si0);
l11=si0;
si0=l10;
si1=4U;
si0+=si1;
l10=si0;
si0=l11;
si1=l9;
si0=si0 != si1;
if(si0){
goto L17;
}
}
L16:;
si0=l7;
sj0=i64_load(&i->m0,(U64)si0+8U);
sj1=3320200219022213590ULL;
sj0^=sj1;
si1=l7;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
sj2=-3806347648170214779ULL;
sj1^=sj2;
sj0|=sj1;
si0=!(sj0);
if(si0){
goto L4;
}
si0=l1;
si1=1682360U;
si2=7U;
si3=l4;
si4=476U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si4=l9;
si5=l7;
si0=f7151(i,si0,si1,si2,si3,si4,si5);
l5=si0;
si0=l7;
si1=l7;
si1=i32_load(&i->m0,(U64)si1);
l10=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l10;
si1=1U;
si0=si0 == si1;
if(si0){
goto L14;
}
goto L13;
L15:;
si0=l1;
si1=1679036U;
si2=4U;
si3=l4;
si4=504U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si4=l9;
si5=l7;
si0=f7151(i,si0,si1,si2,si3,si4,si5);
l5=si0;
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
goto L13;
}
L14:;
si0=l7;
f7690(i,si0);
L13:;
si0=l0;
sj1=17179869185ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=8U;
si0+=si1;
si1=l5;
i32_store(&i->m0,(U64)si0,si1);
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
goto L1;
}
si0=l6;
f7690(i,si0);
goto L1;
L4:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+56U);
l10=si0;
si0=!(si0);
if(si0){
goto L22;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0+48U);
l5=si0;
si0=i32_load(&i->m0,(U64)si0);
l11=si0;
si0=l5;
si1=l5;
si2=4U;
si1+=si2;
si2=l10;
si3=-1U;
si2+=si3;
l10=si2;
si3=2U;
si2<<=(si3&31);
si0=f15391(i,si0,si1,si2);
si0=l2;
si1=l10;
i32_store(&i->m0,(U64)si0+56U,si1);
goto L21;
L22:;
si0=l2;
si1=28U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L20;
}
si0=l3;
si1=8U;
si0+=si1;
si1=l2;
si2=16U;
si1+=si2;
si2=l2;
sj2=i64_load(&i->m0,(U64)si2);
si3=l2;
si4=8U;
si3+=si4;
sj3=i64_load(&i->m0,(U64)si3);
si4=1668606U;
si5=10U;
si2=f10928(i,sj2,sj3,si4,si5);
si3=1668606U;
si4=10U;
f12864(i,si0,si1,si2,si3,si4);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+8U);
l5=si0;
si0=!(si0);
if(si0){
goto L20;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0+24U);
l11=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+12U);
si0=!(si0);
if(si0){
goto L21;
}
si0=l5;
f15271(i,si0);
L21:;
si0=l3;
si1=8U;
si0+=si1;
si1=l1;
si2=l11;
f9091(i,si0,si1,si2);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+12U);
l5=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+8U);
switch(si0){
case 0:
goto L23;
case 1:
goto L24;
case 2:
goto L19;
default:
goto L23;
}
L24:;
si0=l0;
sj1=17179869185ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=8U;
si0+=si1;
si1=l5;
i32_store(&i->m0,(U64)si0,si1);
si0=l7;
si0=!(si0);
if(si0){
goto L25;
}
si0=l7;
si1=l7;
si1=i32_load(&i->m0,(U64)si1);
l5=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=1U;
si0=si0 != si1;
if(si0){
goto L25;
}
si0=l7;
f7690(i,si0);
L25:;
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
goto L1;
}
si0=l6;
f7690(i,si0);
goto L1;
L23:;
si0=0U;
l10=si0;
si0=1U;
if(si0){
goto L18;
}
goto L19;
L20:;
L19:;
si0=1U;
l10=si0;
L18:;
si0=l0;
si1=l10;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=16U;
si0+=si1;
si1=l7;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=12U;
si0+=si1;
si1=l6;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=8U;
si0+=si1;
si1=l5;
i32_store(&i->m0,(U64)si0,si1);
goto L1;
L3:;
si0=l6;
f7690(i,si0);
L2:;
si0=l0;
sj1=17179869185ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=8U;
si0+=si1;
si1=l5;
i32_store(&i->m0,(U64)si0,si1);
L1:;
si0=l3;
si1=32U;
si0+=si1;
i->g0=si0;
L0:;
}

U32 f7107(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 si0,si1,si2,si3,si4,si5,si6,si7,si8,si9,si10,si11,si12,si13,si14,si15,si16,si17,si18,si19,si20,si21,si22;
si0=i->g0;
si1=16U;
si0-=si1;
l2=si0;
i->g0=si0;
si0=l2;
si1=l0;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l1;
si1=1659976U;
si2=16U;
si3=1659992U;
si4=3U;
si5=l0;
si6=12U;
si5+=si6;
si6=1658888U;
si7=1659995U;
si8=8U;
si9=l0;
si10=32U;
si9+=si10;
si10=1660004U;
si11=1660020U;
si12=8U;
si13=l0;
si14=16U;
si13+=si14;
si14=1658888U;
si15=1660028U;
si16=6U;
si17=l0;
si18=20U;
si17+=si18;
si18=1660036U;
si19=1660052U;
si20=8U;
si21=l2;
si22=12U;
si21+=si22;
si22=1660060U;
si0=f744(i,si0,si1,si2,si3,si4,si5,si6,si7,si8,si9,si10,si11,si12,si13,si14,si15,si16,si17,si18,si19,si20,si21,si22);
l0=si0;
si0=l2;
si1=16U;
si0+=si1;
i->g0=si0;
si0=l0;
L0:;
return si0;
}

void f7108(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4,U32 l5) {
U32 l6=0;
U32 l7=0;
U32 l8=0;
U32 l9=0;
U32 l10=0;
U32 l11=0;
U64 l12=0;
U32 l13=0;
U32 l14=0;
U32 l15=0;
U32 si0,si1,si2,si3,si4,si5;
U64 sj0,sj1,sj2;
si0=i->g0;
si1=576U;
si0-=si1;
l6=si0;
i->g0=si0;
si0=l6;
si1=0U;
si2=l4;
si3=l3;
si2-=si3;
l7=si2;
si3=l7;
si4=l4;
si3=si3 > si4;
si1=si3?si1:si2;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l2;
si0=i32_load8_u(&i->m0,(U64)si0+40U);
l8=si0;
si1=2U;
si0=si0 == si1;
if(si0){
goto L16;
}
si0=l6;
si1=32U;
si0+=si1;
si1=40U;
si0+=si1;
si1=l2;
si2=40U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l6;
si1=32U;
si0+=si1;
si1=32U;
si0+=si1;
si1=l2;
si2=32U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l6;
si1=32U;
si0+=si1;
si1=24U;
si0+=si1;
si1=l2;
si2=24U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l6;
si1=32U;
si0+=si1;
si1=16U;
si0+=si1;
si1=l2;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l6;
si1=32U;
si0+=si1;
si1=8U;
si0+=si1;
si1=l2;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l6;
si1=l2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+32U,sj1);
si0=l6;
si1=232U;
si0+=si1;
si1=l6;
si2=32U;
si1+=si2;
si2=l3;
si3=l4;
si4=l5;
f9028(i,si0,si1,si2,si3,si4);
si0=l6;
si0=i32_load(&i->m0,(U64)si0+232U);
l9=si0;
si0=l6;
si0=i32_load8_u(&i->m0,(U64)si0+360U);
l4=si0;
si1=2U;
si0=si0 != si1;
if(si0){
goto L15;
}
goto L2;
L16:;
si0=l6;
si1=216U;
si0+=si1;
si1=8U;
si0+=si1;
si1=l1;
si2=60U;
si1+=si2;
l7=si1;
si1=i32_load(&i->m0,(U64)si1);
l10=si1;
i32_store(&i->m0,(U64)si0,si1);
si0=l7;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
si1=52U;
si0+=si1;
l11=si0;
sj0=i64_load(&i->m0,(U64)si0);
l12=sj0;
si0=l11;
sj1=1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l6;
sj1=l12;
i64_store(&i->m0,(U64)si0+216U,sj1);
si0=l6;
si1=243U;
si0+=si1;
si1=l10;
i32_store(&i->m0,(U64)si0,si1);
si0=l6;
sj1=l12;
i64_store(&i->m0,(U64)si0+235U,sj1);
si0=l6;
si1=368U;
si0+=si1;
si1=8U;
si0+=si1;
si1=l6;
si2=239U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l6;
si1=0U;
i32_store8(&i->m0,(U64)si0+368U,si1);
si0=l6;
si1=l6;
sj1=i64_load(&i->m0,(U64)si1+232U);
i64_store(&i->m0,(U64)si0+369U,sj1);
si0=0U;
si0=i32_load(&i->m0,(U64)si0+2969180U);
si1=2U;
si0=si0 != si1;
if(si0){
goto L13;
}
si0=l5;
si0=i32_load(&i->m0,(U64)si0+88U);
l13=si0;
si0=0U;
l7=si0;
si0=0U;
si0=i32_load(&i->m0,(U64)si0+2969184U);
l10=si0;
si1=l10;
si1=i32_load(&i->m0,(U64)si1);
l14=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l14;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 == si1;
if(si0){
goto L12;
}
si0=l10;
si1=77U;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=1U;
si0&=si1;
si0=!(si0);
if(si0){
goto L17;
}
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=64U;
si0=f15269(i,si0);
l7=si0;
si0=!(si0);
if(si0){
goto L11;
}
si0=l7;
sj1=-1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l7;
si1=56U;
si0+=si1;
sj1=-1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l7;
si1=48U;
si0+=si1;
sj1=-1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l7;
si1=40U;
si0+=si1;
sj1=-1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l7;
si1=32U;
si0+=si1;
sj1=-1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l7;
si1=24U;
si0+=si1;
sj1=-1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l7;
si1=16U;
si0+=si1;
sj1=-1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l6;
si1=8U;
i32_store(&i->m0,(U64)si0+248U,si1);
si0=l7;
si1=8U;
si0+=si1;
sj1=-1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l6;
si1=260U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l13;
si1=68U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l14=si0;
si1=l14;
si1=i32_load(&i->m0,(U64)si1);
l13=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l6;
sj1=0ULL;
i64_store(&i->m0,(U64)si0+252U,sj1);
si0=l6;
sj1=34359738376ULL;
i64_store(&i->m0,(U64)si0+240U,sj1);
si0=l6;
si1=l7;
i32_store(&i->m0,(U64)si0+236U,si1);
si0=l6;
si1=0U;
i32_store(&i->m0,(U64)si0+232U,si1);
si0=l13;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 == si1;
if(si0){
goto L12;
}
si0=l6;
si1=232U;
si0+=si1;
si1=l14;
si2=0U;
si0=f8146(i,si0,si1,si2);
l7=si0;
L17:;
si0=l6;
si1=368U;
si0+=si1;
si1=l10;
si2=l7;
si0=f8108(i,si0,si1,si2);
l13=si0;
si1=l13;
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
goto L12;
}
si0=l13;
si1=l13;
si1=i32_load8_u(&i->m0,(U64)si1+56U);
l7=si1;
si2=1U;
si3=l7;
si1=si3?si1:si2;
i32_store8(&i->m0,(U64)si0+56U,si1);
si0=l7;
si0=!(si0);
if(si0){
goto L18;
}
si0=l13;
si1=56U;
si0+=si1;
sj1=l12;
si2=1000000000U;
si0=f1439(i,si0,sj1,si2);
L18:;
si0=l13;
si1=0U;
si2=l13;
si2=i32_load8_u(&i->m0,(U64)si2+56U);
l7=si2;
si3=l7;
si4=1U;
si3=si3 == si4;
l7=si3;
si1=si3?si1:si2;
i32_store8(&i->m0,(U64)si0+56U,si1);
si0=l13;
si1=68U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l10=si0;
si0=l7;
if(si0){
goto L19;
}
si0=l13;
si1=56U;
si0+=si1;
si1=0U;
f1440(i,si0,si1);
L19:;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=12U;
si0=f15269(i,si0);
l7=si0;
si0=!(si0);
if(si0){
goto L10;
}
si0=l7;
sj1=1ULL;
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l7;
si1=l10;
i32_store(&i->m0,(U64)si0,si1);
si0=l6;
si1=1U;
i32_store8(&i->m0,(U64)si0+408U,si1);
si0=l6;
si1=1U;
i32_store(&i->m0,(U64)si0+404U,si1);
si0=l6;
si1=1659028U;
i32_store(&i->m0,(U64)si0+400U,si1);
si0=l6;
sj1=1ULL;
i64_store(&i->m0,(U64)si0+392U,sj1);
si0=l6;
si1=l10;
i32_store(&i->m0,(U64)si0+388U,si1);
si0=l6;
sj1=4294967297ULL;
i64_store(&i->m0,(U64)si0+380U,sj1);
si0=l6;
si1=l7;
i32_store(&i->m0,(U64)si0+376U,si1);
si0=l6;
si1=1669136U;
i32_store(&i->m0,(U64)si0+372U,si1);
si0=l6;
si1=l13;
i32_store(&i->m0,(U64)si0+368U,si1);
si0=l6;
si1=232U;
si0+=si1;
si1=l6;
si2=368U;
si1+=si2;
si2=l3;
si3=l4;
si4=l5;
f9028(i,si0,si1,si2,si3,si4);
si0=l6;
si0=i32_load(&i->m0,(U64)si0+232U);
l4=si0;
si0=l6;
si0=i32_load8_u(&i->m0,(U64)si0+360U);
l7=si0;
si1=2U;
si0=si0 != si1;
if(si0){
goto L14;
}
si0=l0;
si1=2U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l4;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l13;
si1=l13;
si1=i32_load(&i->m0,(U64)si1);
l4=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=1U;
si0=si0 != si1;
if(si0){
goto L3;
}
goto L4;
L15:;
si0=l6;
si1=80U;
si0+=si1;
si1=4U;
si0|=si1;
si1=l6;
si2=232U;
si1+=si2;
si2=4U;
si1|=si2;
si2=124U;
si0=f15390(i,si0,si1,si2);
si0=l6;
si1=80U;
si0+=si1;
si1=132U;
si0+=si1;
si1=l6;
si2=232U;
si1+=si2;
si2=132U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l6;
si1=l6;
si1=i32_load(&i->m0,(U64)si1+361U);
i32_store(&i->m0,(U64)si0+209U,si1);
si0=l5;
si0=i32_load(&i->m0,(U64)si0+88U);
l10=si0;
si1=168U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si1=l3;
si1=i32_load(&i->m0,(U64)si1);
l7=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l6;
si1=l4;
i32_store8(&i->m0,(U64)si0+208U,si1);
si0=l6;
si1=l9;
i32_store(&i->m0,(U64)si0+80U,si1);
si0=l7;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 == si1;
if(si0){
goto L12;
}
si0=0U;
l4=si0;
si0=l3;
si1=77U;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=1U;
si0&=si1;
si0=!(si0);
if(si0){
goto L20;
}
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=64U;
si0=f15269(i,si0);
l4=si0;
si0=!(si0);
if(si0){
goto L9;
}
si0=l4;
sj1=-1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=56U;
si0+=si1;
sj1=-1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=48U;
si0+=si1;
sj1=-1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=40U;
si0+=si1;
sj1=-1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=32U;
si0+=si1;
sj1=-1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=24U;
si0+=si1;
sj1=-1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=16U;
si0+=si1;
sj1=-1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l6;
si1=8U;
i32_store(&i->m0,(U64)si0+248U,si1);
si0=l4;
si1=8U;
si0+=si1;
sj1=-1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l6;
si1=260U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l10;
si1=68U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
si1=l7;
si1=i32_load(&i->m0,(U64)si1);
l10=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l6;
sj1=0ULL;
i64_store(&i->m0,(U64)si0+252U,sj1);
si0=l6;
sj1=34359738376ULL;
i64_store(&i->m0,(U64)si0+240U,sj1);
si0=l6;
si1=l4;
i32_store(&i->m0,(U64)si0+236U,si1);
si0=l6;
si1=0U;
i32_store(&i->m0,(U64)si0+232U,si1);
si0=l10;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 == si1;
if(si0){
goto L12;
}
si0=l6;
si1=232U;
si0+=si1;
si1=l7;
si2=0U;
si0=f8146(i,si0,si1,si2);
l4=si0;
L20:;
si0=l6;
si1=80U;
si0+=si1;
si1=l3;
si2=l4;
si0=f8091(i,si0,si1,si2);
l4=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+48U);
l3=si0;
si0=!(si0);
if(si0){
goto L8;
}
si0=l6;
si1=8U;
si0+=si1;
si1=l5;
si2=l3;
si3=1660636U;
si4=5U;
si5=l4;
f6992(i,si0,si1,si2,si3,si4,si5);
si0=l6;
si0=i32_load(&i->m0,(U64)si0+12U);
l9=si0;
si0=l6;
si0=i32_load(&i->m0,(U64)si0+8U);
if(si0){
goto L2;
}
goto L5;
L14:;
si0=l6;
si1=416U;
si0+=si1;
si1=4U;
si0|=si1;
si1=l6;
si2=232U;
si1+=si2;
si2=4U;
si1|=si2;
si2=124U;
si0=f15390(i,si0,si1,si2);
si0=l6;
si1=416U;
si0+=si1;
si1=132U;
si0+=si1;
si1=l6;
si2=232U;
si1+=si2;
si2=132U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l6;
si1=l6;
si1=i32_load(&i->m0,(U64)si1+361U);
i32_store(&i->m0,(U64)si0+545U,si1);
si0=l5;
si0=i32_load(&i->m0,(U64)si0+88U);
l14=si0;
si1=168U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si1=l3;
si1=i32_load(&i->m0,(U64)si1);
l10=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l6;
si1=l7;
i32_store8(&i->m0,(U64)si0+544U,si1);
si0=l6;
si1=l4;
i32_store(&i->m0,(U64)si0+416U,si1);
si0=l10;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 == si1;
if(si0){
goto L12;
}
si0=0U;
l4=si0;
si0=l3;
si1=77U;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=1U;
si0&=si1;
si0=!(si0);
if(si0){
goto L21;
}
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=64U;
si0=f15269(i,si0);
l4=si0;
si0=!(si0);
if(si0){
goto L7;
}
si0=l4;
sj1=-1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=56U;
si0+=si1;
sj1=-1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=48U;
si0+=si1;
sj1=-1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=40U;
si0+=si1;
sj1=-1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=32U;
si0+=si1;
sj1=-1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=24U;
si0+=si1;
sj1=-1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=16U;
si0+=si1;
sj1=-1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l6;
si1=8U;
i32_store(&i->m0,(U64)si0+248U,si1);
si0=l4;
si1=8U;
si0+=si1;
sj1=-1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l6;
si1=260U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l14;
si1=68U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
si1=l7;
si1=i32_load(&i->m0,(U64)si1);
l10=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l6;
sj1=0ULL;
i64_store(&i->m0,(U64)si0+252U,sj1);
si0=l6;
sj1=34359738376ULL;
i64_store(&i->m0,(U64)si0+240U,sj1);
si0=l6;
si1=l4;
i32_store(&i->m0,(U64)si0+236U,si1);
si0=l6;
si1=0U;
i32_store(&i->m0,(U64)si0+232U,si1);
si0=l10;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 == si1;
if(si0){
goto L12;
}
si0=l6;
si1=232U;
si0+=si1;
si1=l7;
si2=0U;
si0=f8146(i,si0,si1,si2);
l4=si0;
L21:;
si0=l6;
si1=416U;
si0+=si1;
si1=l3;
si2=l4;
si0=f8091(i,si0,si1,si2);
l3=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+48U);
l4=si0;
si0=!(si0);
if(si0){
goto L6;
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
goto L12;
}
si0=l6;
si1=16U;
si0+=si1;
si1=l5;
si2=l4;
si3=1660636U;
si4=5U;
si5=l3;
f7102(i,si0,si1,si2,si3,si4,si5);
si0=l6;
si0=i32_load(&i->m0,(U64)si0+20U);
l9=si0;
si0=l6;
si0=i32_load(&i->m0,(U64)si0+16U);
l15=si0;
si0=0U;
l10=si0;
si0=0U;
l4=si0;
L24:;
{
si0=l4;
si1=255U;
si0&=si1;
l7=si0;
si0=l3;
si1=1U;
si2=l3;
si2=i32_load8_u(&i->m0,(U64)si2+188U);
l4=si2;
si3=l4;
si4=l7;
si3=si3 == si4;
l7=si3;
si1=si3?si1:si2;
i32_store8(&i->m0,(U64)si0+188U,si1);
si0=l7;
if(si0){
goto L23;
}
si0=l10;
si1=255U;
si0&=si1;
l7=si0;
si0=l4;
si1=0U;
si0=si0 != si1;
l14=si0;
l10=si0;
si0=l7;
si0=!(si0);
si1=l14;
si0^=si1;
if(si0){
goto L24;
}
goto L22;
}
L23:;
si0=l3;
si1=108U;
si0+=si1;
si1=l3;
si2=112U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
si1=i32_load(&i->m0,(U64)si1+8U);
TF(i->t0,si1,void (*)(rustpythonInstance*,U32))(i,si0);
L22:;
si0=l13;
si1=l13;
si1=i32_load8_u(&i->m0,(U64)si1+56U);
l4=si1;
si2=1U;
si3=l4;
si1=si3?si1:si2;
i32_store8(&i->m0,(U64)si0+56U,si1);
si0=l4;
si0=!(si0);
if(si0){
goto L25;
}
si0=l13;
si1=56U;
si0+=si1;
sj1=l12;
si2=1000000000U;
si0=f1439(i,si0,sj1,si2);
L25:;
si0=l6;
si1=240U;
si0+=si1;
si1=l13;
si2=68U;
si1+=si2;
l4=si1;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l13;
si1=60U;
si0+=si1;
l4=si0;
sj0=i64_load(&i->m0,(U64)si0);
l12=sj0;
si0=l4;
sj1=1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l13;
si1=0U;
si2=l13;
si2=i32_load8_u(&i->m0,(U64)si2+56U);
l4=si2;
si3=l4;
si4=1U;
si3=si3 == si4;
l4=si3;
si1=si3?si1:si2;
i32_store8(&i->m0,(U64)si0+56U,si1);
si0=l6;
sj1=l12;
i64_store(&i->m0,(U64)si0+232U,sj1);
si0=l4;
if(si0){
goto L26;
}
si0=l13;
si1=56U;
si0+=si1;
si1=0U;
f1440(i,si0,si1);
L26:;
si0=l1;
si1=56U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L27;
}
si0=l11;
si0=i32_load(&i->m0,(U64)si0);
f15271(i,si0);
L27:;
si0=l11;
si1=l6;
sj1=i64_load(&i->m0,(U64)si1+232U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l11;
si1=8U;
si0+=si1;
si1=l6;
si2=232U;
si1+=si2;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l15;
if(si0){
goto L28;
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
goto L29;
}
si0=l3;
f7690(i,si0);
L29:;
si0=l13;
si1=l13;
si1=i32_load(&i->m0,(U64)si1);
l4=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=1U;
si0=si0 != si1;
if(si0){
goto L5;
}
si0=l13;
f7690(i,si0);
goto L5;
L28:;
si0=l0;
si1=2U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l9;
i32_store(&i->m0,(U64)si0+4U,si1);
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
goto L30;
}
si0=l3;
f7690(i,si0);
L30:;
si0=l13;
si1=l13;
si1=i32_load(&i->m0,(U64)si1);
l4=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=1U;
si0=si0 == si1;
if(si0){
goto L4;
}
goto L3;
L13:;
si0=1649248U;
si1=36U;
si2=1649300U;
f703(i,si0,si1,si2);
UNREACHABLE;
L12:;
f15042(i);
UNREACHABLE;
L11:;
si0=8U;
si1=64U;
f52(i,si0,si1);
UNREACHABLE;
L10:;
si0=4U;
si1=12U;
f52(i,si0,si1);
UNREACHABLE;
L9:;
si0=8U;
si1=64U;
f52(i,si0,si1);
UNREACHABLE;
L8:;
si0=1647592U;
si1=43U;
si2=1660620U;
f673(i,si0,si1,si2);
UNREACHABLE;
L7:;
si0=8U;
si1=64U;
f52(i,si0,si1);
UNREACHABLE;
L6:;
si0=1647592U;
si1=43U;
si2=1660644U;
f673(i,si0,si1,si2);
UNREACHABLE;
L5:;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+88U);
si1=1272U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=l9;
si0=si0 == si1;
if(si0){
goto L31;
}
si0=l6;
si1=232U;
si0+=si1;
si1=l9;
si2=l5;
si3=l5;
f7756(i,si0,si1,si2,si3);
si0=l9;
si1=l9;
si1=i32_load(&i->m0,(U64)si1);
l4=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=1U;
si0=si0 != si1;
if(si0){
goto L32;
}
si0=l9;
f7690(i,si0);
L32:;
si0=l6;
si0=i32_load(&i->m0,(U64)si0+236U);
l4=si0;
si0=l6;
si0=i32_load(&i->m0,(U64)si0+232U);
if(si0){
goto L33;
}
si0=l6;
si1=l4;
i32_store(&i->m0,(U64)si0+556U,si1);
si0=l4;
si1=0U;
si0=(U32)((I32)si0<(I32)si1);
if(si0){
goto L34;
}
si0=l6;
si0=i32_load(&i->m0,(U64)si0+28U);
si1=l4;
si0=si0 < si1;
if(si0){
goto L34;
}
si0=l1;
sj0=i64_load(&i->m0,(U64)si0);
l12=sj0;
sj1=-1ULL;
si0=sj0 == sj1;
if(si0){
goto L35;
}
si0=l1;
sj1=l12;
si2=l4;
sj2=(U64)(si2);
sj1+=sj2;
i64_store(&i->m0,(U64)si0,sj1);
L35:;
si0=l0;
si1=l4;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=1U;
i32_store(&i->m0,(U64)si0,si1);
si0=l8;
si1=2U;
si0=si0 != si1;
if(si0){
goto L1;
}
si0=l2;
si0=i32_load8_u(&i->m0,(U64)si0+40U);
si1=255U;
si0&=si1;
si1=2U;
si0=si0 == si1;
if(si0){
goto L1;
}
si0=l2;
f6860(i,si0);
goto L1;
L34:;
si0=l6;
si1=232U;
si0+=si1;
si1=12U;
si0+=si1;
sj1=2ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l6;
si1=368U;
si0+=si1;
si1=12U;
si0+=si1;
si1=3U;
i32_store(&i->m0,(U64)si0,si1);
si0=l6;
si1=3U;
i32_store(&i->m0,(U64)si0+236U,si1);
si0=l6;
si1=1660732U;
i32_store(&i->m0,(U64)si0+232U,si1);
si0=l6;
si1=55U;
i32_store(&i->m0,(U64)si0+372U,si1);
si0=l6;
si1=l6;
si2=368U;
si1+=si2;
i32_store(&i->m0,(U64)si0+240U,si1);
si0=l6;
si1=l6;
si2=28U;
si1+=si2;
i32_store(&i->m0,(U64)si0+376U,si1);
si0=l6;
si1=l6;
si2=556U;
si1+=si2;
i32_store(&i->m0,(U64)si0+368U,si1);
si0=l6;
si1=560U;
si0+=si1;
si1=l6;
si2=232U;
si1+=si2;
f63(i,si0,si1);
si0=l5;
si1=l6;
si2=560U;
si1+=si2;
si0=f7578(i,si0,si1);
l4=si0;
L33:;
si0=l0;
si1=2U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l4;
i32_store(&i->m0,(U64)si0+4U,si1);
goto L3;
L31:;
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l9;
si1=l9;
si1=i32_load(&i->m0,(U64)si1);
l4=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=1U;
si0=si0 != si1;
if(si0){
goto L3;
}
si0=l9;
f7690(i,si0);
goto L3;
L4:;
si0=l13;
f7690(i,si0);
L3:;
si0=l8;
si1=2U;
si0=si0 != si1;
if(si0){
goto L1;
}
si0=l2;
si0=i32_load8_u(&i->m0,(U64)si0+40U);
si1=255U;
si0&=si1;
si1=2U;
si0=si0 == si1;
if(si0){
goto L1;
}
si0=l2;
si1=l2;
si1=i32_load(&i->m0,(U64)si1+4U);
si1=i32_load(&i->m0,(U64)si1+8U);
TF(i->t0,si1,void (*)(rustpythonInstance*,U32))(i,si0);
si0=l2;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
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
goto L36;
}
si0=l4;
f7690(i,si0);
L36:;
si0=l2;
si1=28U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
si0=!(si0);
if(si0){
goto L37;
}
si0=l2;
si1=32U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L37;
}
si0=l4;
f15271(i,si0);
L37:;
si0=l2;
si1=12U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L1;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0+8U);
f15271(i,si0);
goto L1;
L2:;
si0=l0;
si1=2U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l9;
i32_store(&i->m0,(U64)si0+4U,si1);
L1:;
si0=l6;
si1=576U;
si0+=si1;
i->g0=si0;
L0:;
}

void f7109(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 l8=0;
U64 l9=0;
U32 si0,si1,si2,si3,si4,si5;
U64 sj1,sj2;
si0=i->g0;
si1=112U;
si0-=si1;
l3=si0;
i->g0=si0;
si0=l3;
si1=32U;
si0+=si1;
si1=l1;
si2=1661332U;
si3=4U;
si4=l2;
f8199(i,si0,si1,si2,si3,si4);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+36U);
l4=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+32U);
si0=!(si0);
if(si0){
goto L2;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0+88U);
l5=si0;
si1=364U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si1=l4;
si1=i32_load(&i->m0,(U64)si1+28U);
l1=si1;
si0=si0 == si1;
if(si0){
goto L3;
}
si0=l1;
si1=468U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=2U;
si0<<=(si1&31);
l2=si0;
si0=l1;
si1=460U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
L5:;
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
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
si0=l1;
si1=4U;
si0+=si1;
l1=si0;
si0=l7;
si1=l6;
si0=si0 != si1;
if(si0){
goto L5;
}
goto L3;
}
L4:;
si0=l5;
si1=508U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si1=l4;
si1=i32_load(&i->m0,(U64)si1+28U);
l1=si1;
si0=si0 == si1;
if(si0){
goto L3;
}
si0=l1;
si1=468U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=2U;
si0<<=(si1&31);
l2=si0;
si0=l1;
si1=460U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
L6:;
{
si0=l2;
if(si0){
goto L7;
}
si0=1U;
l1=si0;
si0=l4;
l2=si0;
goto L1;
L7:;
si0=l2;
si1=-4U;
si0+=si1;
l2=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
si0=l1;
si1=4U;
si0+=si1;
l1=si0;
si0=l7;
si1=l6;
si0=si0 != si1;
if(si0){
goto L6;
}
}
L3:;
si0=l4;
si1=l4;
si1=i32_load(&i->m0,(U64)si1);
l7=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=0U;
l2=si0;
si0=0U;
l1=si0;
si0=l7;
si1=1U;
si0=si0 != si1;
if(si0){
goto L1;
}
si0=l4;
f7690(i,si0);
si0=0U;
l2=si0;
si0=0U;
l1=si0;
goto L1;
L2:;
si0=l3;
si1=24U;
si0+=si1;
si1=l2;
si2=l1;
f10561(i,si0,si1,si2);
si0=l3;
si1=l3;
si1=i32_load(&i->m0,(U64)si1+28U);
l6=si1;
i32_store(&i->m0,(U64)si0+44U,si1);
si0=l3;
si1=l3;
si1=i32_load(&i->m0,(U64)si1+24U);
l7=si1;
i32_store(&i->m0,(U64)si0+40U,si1);
si0=l7;
si0=!(si0);
if(si0){
goto L13;
}
si0=l3;
si1=l6;
i32_store(&i->m0,(U64)si0+68U,si1);
si0=l3;
si1=l7;
i32_store(&i->m0,(U64)si0+64U,si1);
si0=l3;
si1=16U;
si0+=si1;
si1=l2;
si2=1807769U;
si3=35U;
si4=l4;
si5=l2;
f7340(i,si0,si1,si2,si3,si4,si5);
si0=l7;
si0=i32_load(&i->m0,(U64)si0+40U);
if(si0){
goto L12;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0+20U);
l2=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+16U);
l1=si0;
si0=l7;
si1=-1U;
i32_store(&i->m0,(U64)si0+40U,si1);
si0=l3;
si1=8U;
si0+=si1;
si1=l7;
si2=48U;
si1+=si2;
si2=l7;
si3=64U;
si2+=si3;
si3=l3;
si4=64U;
si3+=si4;
si4=4U;
si3|=si4;
l6=si3;
sj2=f11720(i,si2,si3);
si3=l6;
f11748(i,si0,si1,sj2,si3);
si0=l7;
si1=l7;
si1=i32_load(&i->m0,(U64)si1+40U);
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0+40U,si1);
goto L8;
L13:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+28U);
l1=si0;
si1=73U;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=2U;
si0&=si1;
si0=!(si0);
if(si0){
goto L11;
}
si0=l1;
si1=476U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si0=!(si0);
if(si0){
goto L10;
}
si0=l1;
si1=32U;
si0+=si1;
l7=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+32U);
l6=si0;
si1=8U;
si0&=si1;
if(si0){
goto L15;
}
si0=l6;
si1=16U;
si0+=si1;
l5=si0;
si1=l6;
si0=si0 < si1;
if(si0){
goto L15;
}
si0=l7;
si1=l5;
si2=l7;
si2=i32_load(&i->m0,(U64)si2);
l8=si2;
si3=l8;
si4=l6;
si3=si3 == si4;
l6=si3;
si1=si3?si1:si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l6;
if(si0){
goto L14;
}
L15:;
si0=l7;
si1=0U;
sj2=l9;
si3=1000000000U;
si0=f1432(i,si0,si1,sj2,si3);
L14:;
si0=l3;
si1=104U;
si0+=si1;
si1=l1;
si2=36U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
si2=64U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=l7;
i32_store(&i->m0,(U64)si0+100U,si1);
si0=4U;
l1=si0;
goto L9;
L12:;
si0=1857413U;
si1=16U;
si2=l3;
si3=96U;
si2+=si3;
si3=1857432U;
si4=1857484U;
f712(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L11:;
si0=l3;
si1=l1;
sj1=i64_load(&i->m0,(U64)si1+56U);
i64_store(&i->m0,(U64)si0+100U,sj1);
si0=0U;
l1=si0;
goto L9;
L10:;
si0=1833076U;
si1=43U;
si2=1836632U;
f673(i,si0,si1,si2);
UNREACHABLE;
L9:;
si0=l3;
si1=76U;
si0+=si1;
sj1=1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=847U;
i32_store(&i->m0,(U64)si0+92U,si1);
si0=l3;
si1=l1;
i32_store(&i->m0,(U64)si0+96U,si1);
si0=l3;
si1=2U;
i32_store(&i->m0,(U64)si0+68U,si1);
si0=l3;
si1=1661368U;
i32_store(&i->m0,(U64)si0+64U,si1);
si0=l3;
si1=l3;
si2=96U;
si1+=si2;
i32_store(&i->m0,(U64)si0+88U,si1);
si0=l3;
si1=l3;
si2=88U;
si1+=si2;
i32_store(&i->m0,(U64)si0+72U,si1);
si0=l3;
si1=48U;
si0+=si1;
si1=l3;
si2=64U;
si1+=si2;
f63(i,si0,si1);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+96U);
switch(si0){
case 0:
goto L16;
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
si0=i32_load(&i->m0,(U64)si0+100U);
l1=si0;
si1=l1;
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
goto L16;
}
si0=l1;
f1433(i,si0);
goto L16;
L19:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+100U);
l1=si0;
si1=0U;
si2=l1;
si2=i32_load8_u(&i->m0,(U64)si2);
l7=si2;
si3=l7;
si4=1U;
si3=si3 == si4;
l7=si3;
si1=si3?si1:si2;
i32_store8(&i->m0,(U64)si0,si1);
si0=l7;
if(si0){
goto L16;
}
si0=l1;
si1=0U;
f1440(i,si0,si1);
goto L16;
L18:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+100U);
l1=si0;
si1=0U;
si2=l1;
si2=i32_load8_u(&i->m0,(U64)si2);
l7=si2;
si3=l7;
si4=1U;
si3=si3 == si4;
l7=si3;
si1=si3?si1:si2;
i32_store8(&i->m0,(U64)si0,si1);
si0=l7;
if(si0){
goto L16;
}
si0=l1;
si1=0U;
f1440(i,si0,si1);
goto L16;
L17:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+100U);
l1=si0;
si1=l1;
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
goto L16;
}
si0=l1;
f1433(i,si0);
L16:;
si0=l3;
si1=64U;
si0+=si1;
si1=8U;
si0+=si1;
si1=l3;
si2=48U;
si1+=si2;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=l3;
sj1=i64_load(&i->m0,(U64)si1+48U);
i64_store(&i->m0,(U64)si0+64U,sj1);
si0=1U;
l1=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+88U);
si1=476U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
si1=l7;
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
goto L22;
}
si0=l2;
si1=l7;
si2=l3;
si3=64U;
si2+=si3;
si0=f7173(i,si0,si1,si2);
l2=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+40U);
l7=si0;
si0=!(si0);
if(si0){
goto L8;
}
si0=l7;
si0=i32_load(&i->m0,(U64)si0+40U);
if(si0){
goto L21;
}
si0=l7;
si1=-1U;
i32_store(&i->m0,(U64)si0+40U,si1);
si0=l3;
si1=l7;
si2=48U;
si1+=si2;
si2=l7;
si3=64U;
si2+=si3;
si3=l3;
si4=40U;
si3+=si4;
si4=4U;
si3|=si4;
l1=si3;
sj2=f11720(i,si2,si3);
si3=l1;
f11748(i,si0,si1,sj2,si3);
si0=1U;
l1=si0;
si0=l7;
si1=l7;
si1=i32_load(&i->m0,(U64)si1+40U);
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0+40U,si1);
goto L8;
L22:;
f15042(i);
UNREACHABLE;
L21:;
si0=1857413U;
si1=16U;
si2=l3;
si3=96U;
si2+=si3;
si3=1857432U;
si4=1857484U;
f712(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L8:;
si0=l4;
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
goto L1;
}
si0=l4;
f7690(i,si0);
L1:;
si0=l0;
si1=l2;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l1;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=112U;
si0+=si1;
i->g0=si0;
L0:;
}

U32 f7110(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4) {
U32 l5=0;
U32 l6=0;
U64 l7=0;
U32 l8=0;
U32 si0,si1,si2,si3,si4;
U64 sj1;
si0=i->g0;
si1=16U;
si0-=si1;
l5=si0;
i->g0=si0;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967832U);
if(si0){
goto L1;
}
si0=0U;
si1=1U;
i32_store16(&i->m0,(U64)si0+2967832U,si1);
L1:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
si1=2967833U;
si0=si0 == si1;
if(si0){
goto L10;
}
si0=l0;
si1=l0;
si1=i32_load8_u(&i->m0,(U64)si1+4U);
l6=si1;
si2=1U;
si3=l6;
si1=si3?si1:si2;
i32_store8(&i->m0,(U64)si0+4U,si1);
si0=l6;
si0=!(si0);
if(si0){
goto L11;
}
si0=l0;
si1=4U;
si0+=si1;
sj1=l7;
si2=1000000000U;
si0=f1439(i,si0,sj1,si2);
L11:;
si0=l0;
si1=2967833U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=56U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si0=!(si0);
if(si0){
goto L12;
}
si0=l6;
si1=l6;
si1=i32_load(&i->m0,(U64)si1);
l8=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l8;
si1=1U;
si0=si0 != si1;
if(si0){
goto L12;
}
si0=l6;
f7690(i,si0);
L12:;
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0+56U,si1);
si0=l0;
si1=72U;
si0+=si1;
l6=si0;
si1=l6;
si1=i32_load8_u(&i->m0,(U64)si1);
si2=-2U;
si1&=si2;
l8=si1;
i32_store8(&i->m0,(U64)si0,si1);
si0=8192U;
l6=si0;
si0=l2;
if(si0){
goto L13;
}
si0=l3;
l6=si0;
si0=l3;
si1=0U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L9;
}
L13:;
si0=l0;
si1=l8;
si2=4U;
si1|=si2;
i32_store8(&i->m0,(U64)si0+72U,si1);
si0=l1;
si1=l4;
si0=f6710(i,si0,si1);
l4=si0;
if(si0){
goto L8;
}
si0=l6;
si1=1U;
si0=f15273(i,si0,si1);
l4=si0;
si0=!(si0);
if(si0){
goto L2;
}
si0=l0;
si1=64U;
si0+=si1;
l2=si0;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L14;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+60U);
f15271(i,si0);
L14:;
si0=l0;
si1=l4;
i32_store(&i->m0,(U64)si0+60U,si1);
si0=l0;
si1=68U;
si0+=si1;
si1=l6;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=l6;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=32U;
si0+=si1;
sj1=-1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si0=i32_load(&i->m0,(U64)si0+56U);
l4=si0;
si0=!(si0);
if(si0){
goto L15;
}
si0=l4;
si1=l4;
si1=i32_load(&i->m0,(U64)si1);
l2=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=1U;
si0=si0 != si1;
if(si0){
goto L15;
}
si0=l4;
f7690(i,si0);
L15:;
si0=0U;
l4=si0;
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l1;
i32_store(&i->m0,(U64)si0+56U,si1);
si0=l0;
si1=0U;
si2=l0;
si2=i32_load8_u(&i->m0,(U64)si2+4U);
l1=si2;
si3=l1;
si4=1U;
si3=si3 == si4;
l1=si3;
si1=si3?si1:si2;
i32_store8(&i->m0,(U64)si0+4U,si1);
si0=l1;
if(si0){
goto L6;
}
si0=0U;
l4=si0;
si0=l0;
si1=4U;
si0+=si1;
si1=0U;
f1440(i,si0,si1);
goto L6;
L10:;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=33U;
si0=f15269(i,si0);
l0=si0;
si0=!(si0);
if(si0){
goto L5;
}
si0=l0;
si1=32U;
si0+=si1;
si1=0U;
si1=i32_load8_u(&i->m0,(U64)si1+1662936U);
i32_store8(&i->m0,(U64)si0,si1);
si0=l0;
si1=24U;
si0+=si1;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+1662928U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=16U;
si0+=si1;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+1662920U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=8U;
si0+=si1;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+1662912U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+1662904U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+88U);
si1=476U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si1=l2;
si1=i32_load(&i->m0,(U64)si1);
l6=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
sj1=141733920801ULL;
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l5;
si1=l0;
i32_store(&i->m0,(U64)si0,si1);
si0=l6;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 == si1;
if(si0){
goto L4;
}
si0=l4;
si1=l2;
si2=l5;
si0=f7173(i,si0,si1,si2);
l4=si0;
goto L7;
L9:;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=37U;
si0=f15269(i,si0);
l2=si0;
si0=!(si0);
if(si0){
goto L3;
}
si0=l2;
si1=29U;
si0+=si1;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+1663009U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=24U;
si0+=si1;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+1663004U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=16U;
si0+=si1;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+1662996U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=8U;
si0+=si1;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+1662988U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+1662980U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+88U);
si1=508U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si1=l6;
si1=i32_load(&i->m0,(U64)si1);
l3=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
sj1=158913789989ULL;
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l5;
si1=l2;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 == si1;
if(si0){
goto L4;
}
si0=l4;
si1=l6;
si2=l5;
si0=f7173(i,si0,si1,si2);
l4=si0;
L8:;
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=0U;
si2=l0;
si2=i32_load8_u(&i->m0,(U64)si2+4U);
l2=si2;
si3=l2;
si4=1U;
si3=si3 == si4;
l2=si3;
si1=si3?si1:si2;
i32_store8(&i->m0,(U64)si0+4U,si1);
si0=l2;
if(si0){
goto L7;
}
si0=l0;
si1=4U;
si0+=si1;
si1=0U;
f1440(i,si0,si1);
L7:;
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
goto L6;
}
si0=l1;
f7690(i,si0);
L6:;
si0=l5;
si1=16U;
si0+=si1;
i->g0=si0;
si0=l4;
goto L0;
L5:;
si0=1U;
si1=33U;
f52(i,si0,si1);
UNREACHABLE;
L4:;
f15042(i);
UNREACHABLE;
L3:;
si0=1U;
si1=37U;
f52(i,si0,si1);
UNREACHABLE;
L2:;
si0=1U;
si1=l6;
f52(i,si0,si1);
UNREACHABLE;
L0:;
return si0;
}

U32 f7111(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4) {
U32 l5=0;
U32 l6=0;
U64 l7=0;
U32 l8=0;
U32 si0,si1,si2,si3,si4;
U64 sj1;
si0=i->g0;
si1=16U;
si0-=si1;
l5=si0;
i->g0=si0;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967832U);
if(si0){
goto L1;
}
si0=0U;
si1=1U;
i32_store16(&i->m0,(U64)si0+2967832U,si1);
L1:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
si1=2967833U;
si0=si0 == si1;
if(si0){
goto L10;
}
si0=l0;
si1=l0;
si1=i32_load8_u(&i->m0,(U64)si1+4U);
l6=si1;
si2=1U;
si3=l6;
si1=si3?si1:si2;
i32_store8(&i->m0,(U64)si0+4U,si1);
si0=l6;
si0=!(si0);
if(si0){
goto L11;
}
si0=l0;
si1=4U;
si0+=si1;
sj1=l7;
si2=1000000000U;
si0=f1439(i,si0,sj1,si2);
L11:;
si0=l0;
si1=2967833U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=56U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si0=!(si0);
if(si0){
goto L12;
}
si0=l6;
si1=l6;
si1=i32_load(&i->m0,(U64)si1);
l8=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l8;
si1=1U;
si0=si0 != si1;
if(si0){
goto L12;
}
si0=l6;
f7690(i,si0);
L12:;
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0+56U,si1);
si0=l0;
si1=72U;
si0+=si1;
l6=si0;
si1=l6;
si1=i32_load8_u(&i->m0,(U64)si1);
si2=-2U;
si1&=si2;
l8=si1;
i32_store8(&i->m0,(U64)si0,si1);
si0=8192U;
l6=si0;
si0=l2;
if(si0){
goto L13;
}
si0=l3;
l6=si0;
si0=l3;
si1=0U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L9;
}
L13:;
si0=l0;
si1=l8;
si2=2U;
si1|=si2;
i32_store8(&i->m0,(U64)si0+72U,si1);
si0=l1;
si1=l4;
si0=f6727(i,si0,si1);
l4=si0;
if(si0){
goto L8;
}
si0=l6;
si1=1U;
si0=f15273(i,si0,si1);
l4=si0;
si0=!(si0);
if(si0){
goto L2;
}
si0=l0;
si1=64U;
si0+=si1;
l2=si0;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L14;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+60U);
f15271(i,si0);
L14:;
si0=l0;
si1=l4;
i32_store(&i->m0,(U64)si0+60U,si1);
si0=l0;
si1=68U;
si0+=si1;
si1=l6;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=l6;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=48U;
si0+=si1;
sj1=-1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=40U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si0=i32_load(&i->m0,(U64)si0+56U);
l4=si0;
si0=!(si0);
if(si0){
goto L15;
}
si0=l4;
si1=l4;
si1=i32_load(&i->m0,(U64)si1);
l2=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=1U;
si0=si0 != si1;
if(si0){
goto L15;
}
si0=l4;
f7690(i,si0);
L15:;
si0=0U;
l4=si0;
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l1;
i32_store(&i->m0,(U64)si0+56U,si1);
si0=l0;
si1=0U;
si2=l0;
si2=i32_load8_u(&i->m0,(U64)si2+4U);
l1=si2;
si3=l1;
si4=1U;
si3=si3 == si4;
l1=si3;
si1=si3?si1:si2;
i32_store8(&i->m0,(U64)si0+4U,si1);
si0=l1;
if(si0){
goto L6;
}
si0=0U;
l4=si0;
si0=l0;
si1=4U;
si0+=si1;
si1=0U;
f1440(i,si0,si1);
goto L6;
L10:;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=33U;
si0=f15269(i,si0);
l0=si0;
si0=!(si0);
if(si0){
goto L5;
}
si0=l0;
si1=32U;
si0+=si1;
si1=0U;
si1=i32_load8_u(&i->m0,(U64)si1+1662936U);
i32_store8(&i->m0,(U64)si0,si1);
si0=l0;
si1=24U;
si0+=si1;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+1662928U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=16U;
si0+=si1;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+1662920U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=8U;
si0+=si1;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+1662912U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+1662904U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+88U);
si1=476U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si1=l2;
si1=i32_load(&i->m0,(U64)si1);
l6=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
sj1=141733920801ULL;
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l5;
si1=l0;
i32_store(&i->m0,(U64)si0,si1);
si0=l6;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 == si1;
if(si0){
goto L4;
}
si0=l4;
si1=l2;
si2=l5;
si0=f7173(i,si0,si1,si2);
l4=si0;
goto L7;
L9:;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=37U;
si0=f15269(i,si0);
l2=si0;
si0=!(si0);
if(si0){
goto L3;
}
si0=l2;
si1=29U;
si0+=si1;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+1663009U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=24U;
si0+=si1;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+1663004U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=16U;
si0+=si1;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+1662996U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=8U;
si0+=si1;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+1662988U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+1662980U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+88U);
si1=508U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si1=l6;
si1=i32_load(&i->m0,(U64)si1);
l3=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
sj1=158913789989ULL;
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l5;
si1=l2;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 == si1;
if(si0){
goto L4;
}
si0=l4;
si1=l6;
si2=l5;
si0=f7173(i,si0,si1,si2);
l4=si0;
L8:;
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=0U;
si2=l0;
si2=i32_load8_u(&i->m0,(U64)si2+4U);
l2=si2;
si3=l2;
si4=1U;
si3=si3 == si4;
l2=si3;
si1=si3?si1:si2;
i32_store8(&i->m0,(U64)si0+4U,si1);
si0=l2;
if(si0){
goto L7;
}
si0=l0;
si1=4U;
si0+=si1;
si1=0U;
f1440(i,si0,si1);
L7:;
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
goto L6;
}
si0=l1;
f7690(i,si0);
L6:;
si0=l5;
si1=16U;
si0+=si1;
i->g0=si0;
si0=l4;
goto L0;
L5:;
si0=1U;
si1=33U;
f52(i,si0,si1);
UNREACHABLE;
L4:;
f15042(i);
UNREACHABLE;
L3:;
si0=1U;
si1=37U;
f52(i,si0,si1);
UNREACHABLE;
L2:;
si0=1U;
si1=l6;
f52(i,si0,si1);
UNREACHABLE;
L0:;
return si0;
}

void f7112(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 si0,si1,si2,si3,si4;
U64 sj0,sj1,sj2;
si0=i->g0;
si1=80U;
si0-=si1;
l3=si0;
i->g0=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+88U);
si1=1272U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=l2;
si0=si0 == si1;
if(si0){
goto L4;
}
si0=l2;
sj0=i64_load(&i->m0,(U64)si0+8U);
sj1=-1851977428690684601ULL;
sj0^=sj1;
si1=l2;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
sj2=-786598182489054301ULL;
sj1^=sj2;
sj0|=sj1;
si0=!(sj0);
if(si0){
goto L2;
}
si0=l3;
si1=64U;
si0+=si1;
si1=l2;
si1=i32_load(&i->m0,(U64)si1+28U);
si2=56U;
si1+=si2;
f9877(i,si0,si1);
si0=l3;
si1=44U;
si0+=si1;
sj1=1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=847U;
i32_store(&i->m0,(U64)si0+60U,si1);
si0=l3;
si1=1U;
i32_store(&i->m0,(U64)si0+36U,si1);
si0=l3;
si1=1661496U;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l3;
si1=l3;
si2=64U;
si1+=si2;
i32_store(&i->m0,(U64)si0+56U,si1);
si0=l3;
si1=l3;
si2=56U;
si1+=si2;
i32_store(&i->m0,(U64)si0+40U,si1);
si0=l3;
si1=16U;
si0+=si1;
si1=l3;
si2=32U;
si1+=si2;
f63(i,si0,si1);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+64U);
switch(si0){
case 0:
goto L5;
case 1:
goto L8;
case 2:
goto L7;
case 3:
goto L6;
default:
goto L9;
}
L9:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+68U);
l4=si0;
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
goto L5;
}
si0=l4;
f1433(i,si0);
goto L5;
L8:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+68U);
l4=si0;
si1=0U;
si2=l4;
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
goto L5;
}
si0=l4;
si1=0U;
f1440(i,si0,si1);
goto L5;
L7:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+68U);
l4=si0;
si1=0U;
si2=l4;
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
goto L5;
}
si0=l4;
si1=0U;
f1440(i,si0,si1);
goto L5;
L6:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+68U);
l4=si0;
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
goto L5;
}
si0=l4;
f1433(i,si0);
L5:;
si0=l3;
si1=32U;
si0+=si1;
si1=8U;
si0+=si1;
si1=l3;
si2=16U;
si1+=si2;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=l3;
sj1=i64_load(&i->m0,(U64)si1+16U);
i64_store(&i->m0,(U64)si0+32U,sj1);
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
si0=l5;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 == si1;
if(si0){
goto L3;
}
si0=l1;
si1=l4;
si2=l3;
si3=32U;
si2+=si3;
si0=f7173(i,si0,si1,si2);
l1=si0;
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
goto L10;
}
si0=l2;
f7690(i,si0);
L10:;
si0=l0;
si1=1U;
i32_store8(&i->m0,(U64)si0,si1);
si0=l0;
si1=l1;
i32_store(&i->m0,(U64)si0+4U,si1);
goto L1;
L4:;
si0=l0;
si1=0U;
i32_store16(&i->m0,(U64)si0,si1);
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
goto L1;
}
si0=l2;
f7690(i,si0);
goto L1;
L3:;
f15042(i);
UNREACHABLE;
L2:;
si0=l3;
si1=l2;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l2;
si1=64U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si0=1U;
l4=si0;
si0=l2;
si1=68U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
switch(si0){
case 0:
goto L11;
case 1:
goto L13;
case 2:
goto L14;
default:
goto L12;
}
L14:;
si0=l5;
si0=i32_load16_u(&i->m0,(U64)si0);
si1=2573U;
si0=si0 != si1;
if(si0){
goto L12;
}
si0=4U;
l4=si0;
goto L11;
L13:;
si0=2U;
l4=si0;
si0=l5;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=10U;
si0=si0 == si1;
if(si0){
goto L11;
}
si0=3U;
l4=si0;
si0=l5;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=13U;
si0=si0 == si1;
if(si0){
goto L11;
}
L12:;
si0=l3;
si1=44U;
si0+=si1;
sj1=1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=1U;
i32_store(&i->m0,(U64)si0+36U,si1);
si0=l3;
si1=1661444U;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l3;
si1=2024U;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l3;
si1=l3;
si2=16U;
si1+=si2;
i32_store(&i->m0,(U64)si0+40U,si1);
si0=l3;
si1=l3;
si2=12U;
si1+=si2;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l3;
si1=64U;
si0+=si1;
si1=l3;
si2=32U;
si1+=si2;
f63(i,si0,si1);
si0=l1;
si1=l3;
si2=64U;
si1+=si2;
si0=f7580(i,si0,si1);
l2=si0;
si0=l0;
si1=1U;
i32_store8(&i->m0,(U64)si0,si1);
si0=l0;
si1=l2;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+12U);
l2=si0;
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
goto L1;
}
si0=l2;
f7690(i,si0);
goto L1;
L11:;
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
goto L15;
}
si0=l2;
f7690(i,si0);
L15:;
si0=l0;
si1=0U;
i32_store8(&i->m0,(U64)si0,si1);
si0=l0;
si1=l4;
i32_store8(&i->m0,(U64)si0+1U,si1);
L1:;
si0=l3;
si1=80U;
si0+=si1;
i->g0=si0;
L0:;
}

void f7113(rustpythonInstance*i,U32 l0,U32 l1) {
U32 si0,si1;
si0=l0;
si1=l1;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
L0:;
}

U32 f7114(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
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
U32 si0,si1,si2,si3,si4,si5;
U64 sj1,sj2;
si0=i->g0;
si1=192U;
si0-=si1;
l3=si0;
i->g0=si0;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967832U);
if(si0){
goto L1;
}
si0=0U;
si1=1U;
i32_store16(&i->m0,(U64)si0+2967832U,si1);
L1:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+56U);
si1=2967833U;
si0=si0 == si1;
if(si0){
goto L23;
}
si0=l0;
si1=60U;
si0+=si1;
l4=si0;
si1=l4;
si1=i32_load8_u(&i->m0,(U64)si1);
l5=si1;
si2=1U;
si3=l5;
si1=si3?si1:si2;
i32_store8(&i->m0,(U64)si0,si1);
si0=l5;
si0=!(si0);
if(si0){
goto L24;
}
si0=l4;
sj1=l6;
si2=1000000000U;
si0=f1439(i,si0,sj1,si2);
L24:;
si0=l0;
si1=2967833U;
i32_store(&i->m0,(U64)si0+56U,si1);
si0=l0;
si1=64U;
si0+=si1;
l7=si0;
f6867(i,si0);
si0=l0;
si1=120U;
si0+=si1;
si1=3U;
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l8=si0;
if(si0){
goto L22;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0+96U);
si1=108U;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L18;
}
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=5U;
si0=f15269(i,si0);
l5=si0;
si0=!(si0);
if(si0){
goto L20;
}
si0=l5;
si1=4U;
si0+=si1;
si1=0U;
si1=i32_load8_u(&i->m0,(U64)si1+1661556U);
i32_store8(&i->m0,(U64)si0,si1);
si0=l5;
si1=0U;
si1=i32_load(&i->m0,(U64)si1+1661552U);
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=180U;
si0+=si1;
si1=5U;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si0=i32_load(&i->m0,(U64)si0+88U);
l9=si0;
si1=200U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
si1=l4;
si1=i32_load(&i->m0,(U64)si1);
l10=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=l5;
i32_store(&i->m0,(U64)si0+176U,si1);
si0=l3;
sj1=-1ULL;
i64_store(&i->m0,(U64)si0+184U,sj1);
si0=l3;
sj1=-4294967296ULL;
i64_store(&i->m0,(U64)si0+168U,sj1);
si0=l10;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 == si1;
if(si0){
goto L12;
}
si0=0U;
l11=si0;
si0=0U;
l5=si0;
si0=l4;
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
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=64U;
si0=f15269(i,si0);
l5=si0;
si0=!(si0);
if(si0){
goto L19;
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
i32_store(&i->m0,(U64)si0+120U,si1);
si0=l5;
si1=8U;
si0+=si1;
sj1=-1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=132U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l9;
si1=68U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l10=si0;
si1=l10;
si1=i32_load(&i->m0,(U64)si1);
l9=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
sj1=0ULL;
i64_store(&i->m0,(U64)si0+124U,sj1);
si0=l3;
sj1=34359738376ULL;
i64_store(&i->m0,(U64)si0+112U,sj1);
si0=l3;
si1=l5;
i32_store(&i->m0,(U64)si0+108U,si1);
si0=l3;
si1=0U;
i32_store(&i->m0,(U64)si0+104U,si1);
si0=l9;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 == si1;
if(si0){
goto L12;
}
si0=l3;
si1=104U;
si0+=si1;
si1=l10;
si2=0U;
si0=f8146(i,si0,si1,si2);
l5=si0;
L25:;
si0=l3;
si1=168U;
si0+=si1;
si1=l4;
si2=l5;
si0=f8078(i,si0,si1,si2);
l12=si0;
si0=1U;
l10=si0;
goto L13;
L23:;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=28U;
si0=f15269(i,si0);
l5=si0;
si0=!(si0);
if(si0){
goto L21;
}
si0=l5;
si1=24U;
si0+=si1;
si1=0U;
si1=i32_load(&i->m0,(U64)si1+1661609U);
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=16U;
si0+=si1;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+1661601U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=8U;
si0+=si1;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+1661593U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+1661585U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si0=i32_load(&i->m0,(U64)si0+88U);
si1=476U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
si1=l4;
si1=i32_load(&i->m0,(U64)si1);
l10=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
sj1=120259084316ULL;
i64_store(&i->m0,(U64)si0+108U,sj1);
si0=l3;
si1=l5;
i32_store(&i->m0,(U64)si0+104U,si1);
si0=l10;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 == si1;
if(si0){
goto L12;
}
si0=l2;
si1=l4;
si2=l3;
si3=104U;
si2+=si3;
si0=f7173(i,si0,si1,si2);
l4=si0;
goto L17;
L22:;
si0=0U;
l10=si0;
si0=1U;
l11=si0;
si0=l8;
si1=68U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=6U;
si0=si0 == si1;
if(si0){
goto L26;
}
si0=l8;
l12=si0;
goto L13;
L26:;
si0=l8;
l12=si0;
si0=l8;
si1=64U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=1661557U;
si2=6U;
si0=f15389(i,si0,si1,si2);
si0=!(si0);
if(si0){
goto L18;
}
goto L13;
L21:;
si0=1U;
si1=28U;
f52(i,si0,si1);
UNREACHABLE;
L20:;
si0=1U;
si1=5U;
f52(i,si0,si1);
UNREACHABLE;
L19:;
si0=8U;
si1=64U;
f52(i,si0,si1);
UNREACHABLE;
L18:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+88U);
l10=si0;
si1=200U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si1=l5;
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
goto L12;
}
si0=l3;
si1=96U;
si0+=si1;
si1=l2;
si2=l10;
si3=1208U;
si2+=si3;
si3=1661557U;
si4=6U;
si5=l5;
si2=f12275(i,si2,si3,si4,si5);
si3=0U;
si4=0U;
f7564(i,si0,si1,si2,si3,si4);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+100U);
l5=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+96U);
si0=!(si0);
if(si0){
goto L28;
}
si0=l5;
l4=si0;
goto L27;
L28:;
si0=l3;
si1=88U;
si0+=si1;
si1=l5;
si2=1661563U;
si3=11U;
si4=l2;
f8199(i,si0,si1,si2,si3,si4);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+92U);
l9=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+88U);
si0=!(si0);
if(si0){
goto L30;
}
si0=l9;
l4=si0;
goto L29;
L30:;
si0=0U;
si0=f5566(i,si0);
l4=si0;
si0=!(si0);
if(si0){
goto L14;
}
si0=l4;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1);
l6=sj1;
sj2=1ULL;
sj1+=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=140U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=132U;
si0+=si1;
sj1=17179869184ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=124U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=160U;
si0+=si1;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=1862528U;
i32_store(&i->m0,(U64)si0+120U,si1);
si0=l3;
sj1=4ULL;
i64_store(&i->m0,(U64)si0+152U,sj1);
si0=l3;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1+8U);
i64_store(&i->m0,(U64)si0+112U,sj1);
si0=l3;
sj1=l6;
i64_store(&i->m0,(U64)si0+104U,sj1);
si0=l3;
si1=80U;
si0+=si1;
si1=l9;
si2=l3;
si3=104U;
si2+=si3;
si3=l2;
f7705(i,si0,si1,si2,si3);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+84U);
l4=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+80U);
if(si0){
goto L31;
}
si0=l3;
si1=72U;
si0+=si1;
si1=l2;
si2=l4;
f6976(i,si0,si1,si2);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+76U);
l12=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+72U);
si0=!(si0);
if(si0){
goto L16;
}
si0=l12;
l4=si0;
L31:;
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
goto L29;
}
si0=l9;
f7690(i,si0);
L29:;
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
goto L27;
}
si0=l5;
f7690(i,si0);
L27:;
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0+56U,si1);
si0=l0;
si1=0U;
si2=l0;
si2=i32_load8_u(&i->m0,(U64)si2+60U);
l2=si2;
si3=l2;
si4=1U;
si3=si3 == si4;
l2=si3;
si1=si3?si1:si2;
i32_store8(&i->m0,(U64)si0+60U,si1);
si0=l2;
if(si0){
goto L17;
}
si0=l0;
si1=60U;
si0+=si1;
si1=0U;
f1440(i,si0,si1);
L17:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+8U);
l5=si0;
si1=l5;
si1=i32_load(&i->m0,(U64)si1);
l10=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=1U;
l2=si0;
si0=l10;
si1=1U;
si0=si0 == si1;
if(si0){
goto L15;
}
si0=1U;
l10=si0;
goto L4;
L16:;
si0=l9;
si1=l9;
si1=i32_load(&i->m0,(U64)si1);
l4=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=1U;
l10=si0;
si0=l4;
si1=1U;
si0=si0 != si1;
if(si0){
goto L32;
}
si0=l9;
f7690(i,si0);
L32:;
si0=l5;
si1=l5;
si1=i32_load(&i->m0,(U64)si1);
l4=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=0U;
l11=si0;
si0=l4;
si1=1U;
si0=si0 != si1;
if(si0){
goto L13;
}
si0=l5;
f7690(i,si0);
goto L13;
L15:;
si0=l5;
f7690(i,si0);
si0=1U;
l10=si0;
goto L4;
L14:;
si0=1914132U;
si1=70U;
si2=l3;
si3=104U;
si2+=si3;
si3=1914204U;
si4=1914300U;
f712(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L13:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
l9=si0;
if(si0){
goto L33;
}
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=6U;
si0=f15269(i,si0);
l5=si0;
si0=!(si0);
if(si0){
goto L11;
}
si0=l5;
si1=4U;
si0+=si1;
si1=0U;
si1=i32_load16_u(&i->m0,(U64)si1+1661583U);
i32_store16(&i->m0,(U64)si0,si1);
si0=l5;
si1=0U;
si1=i32_load(&i->m0,(U64)si1+1661579U);
i32_store(&i->m0,(U64)si0,si1);
si0=1U;
l9=si0;
si0=4U;
si1=l5;
si2=3U;
si1+=si2;
si2=-4U;
si1&=si2;
l4=si1;
si2=l5;
si1-=si2;
si2=l4;
si3=l5;
si2=si2 == si3;
si0=si2?si0:si1;
l4=si0;
si1=1U;
si0=si0 > si1;
if(si0){
goto L35;
}
si0=l5;
si1=l4;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=-2139062144U;
si0&=si1;
if(si0){
goto L34;
}
L35:;
si0=0U;
l9=si0;
L34:;
si0=l3;
si1=180U;
si0+=si1;
si1=6U;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si0=i32_load(&i->m0,(U64)si0+88U);
l13=si0;
si1=200U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
si1=l4;
si1=i32_load(&i->m0,(U64)si1);
l14=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=l5;
i32_store(&i->m0,(U64)si0+176U,si1);
si0=l3;
sj1=-1ULL;
i64_store(&i->m0,(U64)si0+184U,sj1);
si0=l3;
si1=-1U;
i32_store(&i->m0,(U64)si0+172U,si1);
si0=l3;
si1=l9;
i32_store(&i->m0,(U64)si0+168U,si1);
si0=l14;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 == si1;
if(si0){
goto L12;
}
si0=0U;
l5=si0;
si0=l4;
si1=77U;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=1U;
si0&=si1;
si0=!(si0);
if(si0){
goto L36;
}
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=64U;
si0=f15269(i,si0);
l5=si0;
si0=!(si0);
if(si0){
goto L10;
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
i32_store(&i->m0,(U64)si0+120U,si1);
si0=l5;
si1=8U;
si0+=si1;
sj1=-1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=132U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l13;
si1=68U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l9=si0;
si1=l9;
si1=i32_load(&i->m0,(U64)si1);
l14=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
sj1=0ULL;
i64_store(&i->m0,(U64)si0+124U,sj1);
si0=l3;
sj1=34359738376ULL;
i64_store(&i->m0,(U64)si0+112U,sj1);
si0=l3;
si1=l5;
i32_store(&i->m0,(U64)si0+108U,si1);
si0=l3;
si1=0U;
i32_store(&i->m0,(U64)si0+104U,si1);
si0=l14;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 == si1;
if(si0){
goto L12;
}
si0=l3;
si1=104U;
si0+=si1;
si1=l9;
si2=0U;
si0=f8146(i,si0,si1,si2);
l5=si0;
L36:;
si0=l3;
si1=168U;
si0+=si1;
si1=l4;
si2=l5;
si0=f8078(i,si0,si1,si2);
l9=si0;
L33:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+8U);
l5=si0;
si1=l5;
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
goto L12;
}
si0=l3;
si1=64U;
si0+=si1;
si1=l2;
si2=l5;
si3=1661574U;
si4=5U;
f7446(i,si0,si1,si2,si3,si4);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+68U);
l14=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+64U);
si0=!(si0);
if(si0){
goto L37;
}
si0=l14;
l4=si0;
goto L5;
L37:;
si0=l14;
si0=!(si0);
if(si0){
goto L38;
}
si0=l14;
si1=l14;
si1=i32_load(&i->m0,(U64)si1);
l4=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=1U;
si0=si0 != si1;
if(si0){
goto L38;
}
si0=l14;
f7690(i,si0);
L38:;
si0=l3;
si1=56U;
si0+=si1;
si1=l2;
si2=l5;
si3=1660333U;
si4=8U;
f6614(i,si0,si1,si2,si3,si4);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+60U);
l4=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+56U);
if(si0){
goto L5;
}
si0=l3;
si1=104U;
si0+=si1;
si1=l4;
si2=l2;
f7740(i,si0,si1,si2);
si0=l3;
si0=i32_load8_u(&i->m0,(U64)si0+104U);
si0=!(si0);
if(si0){
goto L39;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0+108U);
l4=si0;
goto L5;
L39:;
si0=l3;
si0=i32_load8_u(&i->m0,(U64)si0+105U);
l13=si0;
si0=l3;
si1=48U;
si0+=si1;
si1=l2;
si1=i32_load(&i->m0,(U64)si1+96U);
si2=256U;
si1+=si2;
si2=l12;
si3=64U;
si2+=si3;
si2=i32_load(&i->m0,(U64)si2);
si3=l12;
si4=68U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si4=l2;
f13319(i,si0,si1,si2,si3,si4);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+52U);
l4=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+48U);
if(si0){
goto L5;
}
si0=l3;
si1=l4;
i32_store(&i->m0,(U64)si0+168U,si1);
si0=l3;
si1=40U;
si0+=si1;
si1=l2;
si2=l5;
si3=1660294U;
si4=8U;
f6614(i,si0,si1,si2,si3,si4);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+44U);
l4=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+40U);
if(si0){
goto L6;
}
si0=l3;
si1=104U;
si0+=si1;
si1=l4;
si2=l2;
f7740(i,si0,si1,si2);
si0=l3;
si0=i32_load8_u(&i->m0,(U64)si0+104U);
si0=!(si0);
if(si0){
goto L40;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0+108U);
l4=si0;
goto L6;
L40:;
si0=l3;
si0=i32_load8_u(&i->m0,(U64)si0+105U);
si1=255U;
si0&=si1;
if(si0){
goto L42;
}
si0=0U;
l15=si0;
goto L41;
L42:;
si0=l9;
si1=l9;
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
goto L12;
}
si0=l3;
si1=32U;
si0+=si1;
si1=l3;
si2=168U;
si1+=si2;
si2=l9;
si3=l2;
f13311(i,si0,si1,si2,si3);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+36U);
l15=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+32U);
si0=!(si0);
if(si0){
goto L43;
}
si0=l15;
l4=si0;
goto L6;
L43:;
si0=l15;
si1=l15;
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
goto L12;
}
si0=l3;
si1=24U;
si0+=si1;
si1=l2;
si2=l15;
si3=1661332U;
si4=4U;
f7446(i,si0,si1,si2,si3,si4);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+28U);
l4=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+24U);
if(si0){
goto L45;
}
si0=l4;
if(si0){
goto L44;
}
si0=0U;
l16=si0;
goto L41;
L45:;
si0=l15;
si1=l15;
si1=i32_load(&i->m0,(U64)si1);
l2=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=1U;
si0=si0 == si1;
if(si0){
goto L7;
}
goto L6;
L44:;
si0=l4;
si0=f7115(i,si0);
l16=si0;
L41:;
si0=l3;
si1=16U;
si0+=si1;
si1=l2;
si2=l5;
si3=1660256U;
si4=8U;
f6614(i,si0,si1,si2,si3,si4);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+20U);
l4=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+16U);
if(si0){
goto L8;
}
si0=l3;
si1=104U;
si0+=si1;
si1=l4;
si2=l2;
f7740(i,si0,si1,si2);
si0=l3;
si0=i32_load8_u(&i->m0,(U64)si0+104U);
si0=!(si0);
if(si0){
goto L46;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0+108U);
l4=si0;
goto L8;
L46:;
si0=0U;
l4=si0;
si0=l3;
si0=i32_load8_u(&i->m0,(U64)si0+105U);
si1=255U;
si0&=si1;
si0=!(si0);
if(si0){
goto L47;
}
si0=l9;
si1=l9;
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
goto L12;
}
si0=l3;
si1=8U;
si0+=si1;
si1=l3;
si2=168U;
si1+=si2;
si2=l9;
si3=l2;
f13313(i,si0,si1,si2,si3);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+12U);
l4=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+8U);
if(si0){
goto L8;
}
L47:;
si0=l1;
si0=i32_load16_u(&i->m0,(U64)si0+12U);
l2=si0;
si0=l1;
si0=i32_load8_u(&i->m0,(U64)si0+14U);
l1=si0;
si0=l7;
f6867(i,si0);
si0=l0;
si1=76U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=68U;
si0+=si1;
si1=l16;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l15;
i32_store(&i->m0,(U64)si0+64U,si1);
si0=l0;
si1=84U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=92U;
si0+=si1;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l13;
si2=0U;
si1=si1 != si2;
l10=si1;
i32_store8(&i->m0,(U64)si0+145U,si1);
si0=l0;
si1=144U;
si0+=si1;
si1=l14;
si2=0U;
si1=si1 != si2;
i32_store8(&i->m0,(U64)si0,si1);
si0=l0;
si1=l10;
i32_store8(&i->m0,(U64)si0+143U,si1);
si0=l0;
si1=l1;
i32_store8(&i->m0,(U64)si0+142U,si1);
si0=l0;
si1=140U;
si0+=si1;
si1=l2;
i32_store16(&i->m0,(U64)si0,si1);
si0=l0;
si1=136U;
si0+=si1;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0+120U,si1);
si0=l0;
si1=116U;
si0+=si1;
si1=l9;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=112U;
si0+=si1;
si1=l12;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=108U;
si0+=si1;
si1=l5;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=100U;
si0+=si1;
sj1=8192ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=96U;
si0+=si1;
si1=l4;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+168U);
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
goto L48;
}
si0=l1;
f7690(i,si0);
L48:;
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0+56U,si1);
si0=l0;
si1=0U;
si2=l0;
si2=i32_load8_u(&i->m0,(U64)si2+60U);
l1=si2;
si3=l1;
si4=1U;
si3=si3 == si4;
l1=si3;
si1=si3?si1:si2;
i32_store8(&i->m0,(U64)si0+60U,si1);
si0=l1;
if(si0){
goto L49;
}
si0=l0;
si1=60U;
si0+=si1;
si1=0U;
f1440(i,si0,si1);
L49:;
si0=l8;
si1=0U;
si0=si0 != si1;
si1=l11;
si2=1U;
si1^=si2;
si0&=si1;
si0=!(si0);
if(si0){
goto L9;
}
si0=l8;
si1=l8;
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
si0=l8;
f7690(i,si0);
goto L9;
L12:;
f15042(i);
UNREACHABLE;
L11:;
si0=1U;
si1=6U;
f52(i,si0,si1);
UNREACHABLE;
L10:;
si0=8U;
si1=64U;
f52(i,si0,si1);
UNREACHABLE;
L9:;
si0=l0;
si1=l0;
si1=i32_load(&i->m0,(U64)si1);
l1=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=0U;
l4=si0;
si0=l1;
si1=1U;
si0=si0 != si1;
if(si0){
goto L2;
}
goto L3;
L8:;
si0=l15;
si0=!(si0);
if(si0){
goto L6;
}
si0=l15;
si1=l15;
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
L7:;
si0=l15;
f7690(i,si0);
L6:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+168U);
l2=si0;
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
goto L5;
}
si0=l2;
f7690(i,si0);
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
goto L50;
}
si0=l5;
f7690(i,si0);
L50:;
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
goto L51;
}
si0=l9;
f7690(i,si0);
L51:;
si0=l12;
si1=l12;
si1=i32_load(&i->m0,(U64)si1);
l2=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=1U;
si0=si0 != si1;
if(si0){
goto L52;
}
si0=l12;
f7690(i,si0);
L52:;
si0=0U;
l2=si0;
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0+56U,si1);
si0=l0;
si1=0U;
si2=l0;
si2=i32_load8_u(&i->m0,(U64)si2+60U);
l5=si2;
si3=l5;
si4=1U;
si3=si3 == si4;
l5=si3;
si1=si3?si1:si2;
i32_store8(&i->m0,(U64)si0+60U,si1);
si0=l5;
if(si0){
goto L4;
}
si0=0U;
l2=si0;
si0=l0;
si1=60U;
si0+=si1;
si1=0U;
f1440(i,si0,si1);
L4:;
si0=l10;
si0=!(si0);
if(si0){
goto L53;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si0=!(si0);
if(si0){
goto L53;
}
si0=l5;
si1=l5;
si1=i32_load(&i->m0,(U64)si1);
l10=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l10;
si1=1U;
si0=si0 != si1;
if(si0){
goto L53;
}
si0=l5;
f7690(i,si0);
L53:;
si0=l2;
si0=!(si0);
if(si0){
goto L54;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
l1=si0;
si0=!(si0);
if(si0){
goto L54;
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
goto L54;
}
si0=l1;
f7690(i,si0);
L54:;
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
L3:;
si0=l0;
f7690(i,si0);
L2:;
si0=l3;
si1=192U;
si0+=si1;
i->g0=si0;
si0=l4;
L0:;
return si0;
}

U32 f7115(rustpythonInstance*i,U32 l0) {
U32 l1=0;
U32 l2=0;
U32 si0,si1,si2,si3,si4;
U64 sj0,sj1,sj2;
si0=l0;
sj0=i64_load(&i->m0,(U64)si0+8U);
sj1=-1851977428690684601ULL;
sj0^=sj1;
si1=l0;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
sj2=-786598182489054301ULL;
sj1^=sj2;
sj0|=sj1;
sj1=0ULL;
si0=sj0 != sj1;
if(si0){
goto L3;
}
si0=0U;
l1=si0;
si0=l0;
si1=68U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=5U;
si0=si0 != si1;
if(si0){
goto L4;
}
si0=0U;
si1=2373U;
si2=l0;
si3=64U;
si2+=si3;
si2=i32_load(&i->m0,(U64)si2);
si3=1661552U;
si4=5U;
si2=f15389(i,si2,si3,si4);
si0=si2?si0:si1;
l1=si0;
L4:;
si0=l0;
si1=l0;
si1=i32_load(&i->m0,(U64)si1);
l2=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=1U;
si0=si0 == si1;
if(si0){
goto L2;
}
goto L1;
L3:;
si0=l0;
si1=l0;
si1=i32_load(&i->m0,(U64)si1);
l2=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=0U;
l1=si0;
si0=l2;
si1=1U;
si0=si0 != si1;
if(si0){
goto L1;
}
L2:;
si0=l0;
f7690(i,si0);
L1:;
si0=l1;
L0:;
return si0;
}

void f7116(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 l3=0;
U32 si0,si1,si2;
U64 sj1;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+40U);
l2=si0;
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
si0=l2;
f7690(i,si0);
L1:;
si0=l0;
sj1=0ULL;
i64_store(&i->m0,(U64)si0+16U,sj1);
si0=l0;
si1=l1;
i32_store(&i->m0,(U64)si0+40U,si1);
L0:;
}

void f7117(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
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
si1=96U;
si0-=si1;
l4=si0;
i->g0=si0;
si0=1U;
l5=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L7;
}
si0=0U;
l6=si0;
goto L6;
L7:;
si0=0U;
l6=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+4U);
l2=si0;
si0=!(si0);
if(si0){
goto L6;
}
si0=l2;
si1=64U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
si0=1U;
l5=si0;
si0=l2;
si1=68U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si0=!(si0);
if(si0){
goto L8;
}
si0=l6;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L5;
}
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=l6;
si0=f15269(i,si0);
l5=si0;
si0=!(si0);
if(si0){
goto L4;
}
L8:;
si0=l5;
si1=l7;
si2=l6;
si0=f15390(i,si0,si1,si2);
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
goto L6;
}
si0=l2;
f7690(i,si0);
L6:;
si0=l4;
si1=l1;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=0U;
si0=i32_load(&i->m0,(U64)si0+2969260U);
si1=2U;
si0=si0 != si1;
if(si0){
goto L3;
}
si0=0U;
l8=si0;
si0=0U;
si0=i32_load(&i->m0,(U64)si0+2969264U);
l9=si0;
si1=l1;
si0=si0 == si1;
if(si0){
goto L11;
}
si0=l1;
si1=468U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=2U;
si0<<=(si1&31);
l2=si0;
si0=l1;
si1=460U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
L12:;
{
si0=l2;
si0=!(si0);
if(si0){
goto L10;
}
si0=l2;
si1=-4U;
si0+=si1;
l2=si0;
si0=l7;
si0=i32_load(&i->m0,(U64)si0);
l10=si0;
si0=l7;
si1=4U;
si0+=si1;
l7=si0;
si0=l10;
si1=l9;
si0=si0 != si1;
if(si0){
goto L12;
}
}
L11:;
si0=l4;
si1=52U;
si0+=si1;
si1=l4;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=0U;
i32_store8(&i->m0,(U64)si0+48U,si1);
si0=l4;
si1=l6;
i32_store(&i->m0,(U64)si0+40U,si1);
si0=l4;
si1=l6;
i32_store(&i->m0,(U64)si0+36U,si1);
si0=l4;
si1=l5;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l4;
sj1=0ULL;
i64_store(&i->m0,(U64)si0+24U,sj1);
si0=l4;
si1=0U;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l4;
si1=l4;
si1=i32_load(&i->m0,(U64)si1+5U);
i32_store(&i->m0,(U64)si0+49U,si1);
si0=l1;
si1=77U;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=1U;
si0&=si1;
si0=!(si0);
if(si0){
goto L13;
}
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+88U);
l7=si0;
si0=64U;
si0=f15269(i,si0);
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
si0=l4;
si1=8U;
i32_store(&i->m0,(U64)si0+72U,si1);
si0=l2;
si1=8U;
si0+=si1;
sj1=-1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=84U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l7;
si1=68U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
si1=l7;
si1=i32_load(&i->m0,(U64)si1);
l10=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
sj1=0ULL;
i64_store(&i->m0,(U64)si0+76U,sj1);
si0=l4;
sj1=34359738376ULL;
i64_store(&i->m0,(U64)si0+64U,sj1);
si0=l4;
si1=l2;
i32_store(&i->m0,(U64)si0+60U,si1);
si0=l4;
si1=0U;
i32_store(&i->m0,(U64)si0+56U,si1);
si0=l10;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 == si1;
if(si0){
goto L1;
}
si0=l4;
si1=56U;
si0+=si1;
si1=l7;
si2=0U;
si0=f8146(i,si0,si1,si2);
l8=si0;
L13:;
si0=l4;
si1=16U;
si0+=si1;
si1=l1;
si2=l8;
si0=f8166(i,si0,si1,si2);
l2=si0;
si0=0U;
l7=si0;
goto L9;
L10:;
si0=l3;
si1=l4;
si2=12U;
si1+=si2;
si2=l9;
si0=f9936(i,si0,si1,si2);
l2=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+12U);
l10=si0;
si1=l10;
si1=i32_load(&i->m0,(U64)si1);
l9=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=1U;
l7=si0;
si0=l9;
si1=1U;
si0=si0 != si1;
if(si0){
goto L14;
}
si0=l10;
f7690(i,si0);
L14:;
si0=l6;
si0=!(si0);
if(si0){
goto L9;
}
si0=l5;
f15271(i,si0);
L9:;
si0=l0;
si1=l2;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l7;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=96U;
si0+=si1;
i->g0=si0;
goto L0;
L5:;
f53(i);
UNREACHABLE;
L4:;
si0=1U;
si1=l6;
f52(i,si0,si1);
UNREACHABLE;
L3:;
si0=1649248U;
si1=36U;
si2=1649300U;
f703(i,si0,si1,si2);
UNREACHABLE;
L2:;
si0=8U;
si1=64U;
f52(i,si0,si1);
UNREACHABLE;
L1:;
f15042(i);
UNREACHABLE;
L0:;
}

void f7118(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4) {
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 l8=0;
U32 l9=0;
U32 l10=0;
U32 si0,si1,si2;
U64 sj1;
si0=i->g0;
si1=96U;
si0-=si1;
l5=si0;
i->g0=si0;
si0=1U;
l6=si0;
si0=l2;
si0=!(si0);
if(si0){
goto L7;
}
si0=0U;
l7=si0;
goto L6;
L7:;
si0=0U;
l7=si0;
si0=l3;
si0=!(si0);
if(si0){
goto L6;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0+56U);
l2=si0;
si0=1U;
l6=si0;
si0=l3;
si1=64U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
si0=!(si0);
if(si0){
goto L8;
}
si0=l7;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L5;
}
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=l7;
si0=f15269(i,si0);
l6=si0;
si0=!(si0);
if(si0){
goto L4;
}
L8:;
si0=l6;
si1=l2;
si2=l7;
si0=f15390(i,si0,si1,si2);
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
goto L6;
}
si0=l3;
f7690(i,si0);
L6:;
si0=l5;
si1=l1;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=0U;
si0=i32_load(&i->m0,(U64)si0+2969268U);
si1=2U;
si0=si0 != si1;
if(si0){
goto L3;
}
si0=0U;
l8=si0;
si0=0U;
si0=i32_load(&i->m0,(U64)si0+2969272U);
l9=si0;
si1=l1;
si0=si0 == si1;
if(si0){
goto L11;
}
si0=l1;
si1=468U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=2U;
si0<<=(si1&31);
l3=si0;
si0=l1;
si1=460U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
L12:;
{
si0=l3;
si0=!(si0);
if(si0){
goto L10;
}
si0=l3;
si1=-4U;
si0+=si1;
l3=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0);
l10=si0;
si0=l2;
si1=4U;
si0+=si1;
l2=si0;
si0=l10;
si1=l9;
si0=si0 != si1;
if(si0){
goto L12;
}
}
L11:;
si0=l5;
si1=55U;
si0+=si1;
si1=l5;
si2=11U;
si1+=si2;
si1=i32_load8_u(&i->m0,(U64)si1);
i32_store8(&i->m0,(U64)si0,si1);
si0=l5;
si1=0U;
i32_store8(&i->m0,(U64)si0+52U,si1);
si0=l5;
si1=0U;
i32_store(&i->m0,(U64)si0+48U,si1);
si0=l5;
si1=l7;
i32_store(&i->m0,(U64)si0+40U,si1);
si0=l5;
si1=l7;
i32_store(&i->m0,(U64)si0+36U,si1);
si0=l5;
si1=l6;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l5;
sj1=0ULL;
i64_store(&i->m0,(U64)si0+24U,sj1);
si0=l5;
si1=0U;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l5;
si1=l5;
si1=i32_load16_u(&i->m0,(U64)si1+9U);
i32_store16(&i->m0,(U64)si0+53U,si1);
si0=l1;
si1=77U;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=1U;
si0&=si1;
si0=!(si0);
if(si0){
goto L13;
}
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+88U);
l2=si0;
si0=64U;
si0=f15269(i,si0);
l3=si0;
si0=!(si0);
if(si0){
goto L2;
}
si0=l3;
sj1=-1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=56U;
si0+=si1;
sj1=-1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=48U;
si0+=si1;
sj1=-1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=40U;
si0+=si1;
sj1=-1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=32U;
si0+=si1;
sj1=-1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=24U;
si0+=si1;
sj1=-1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=16U;
si0+=si1;
sj1=-1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=8U;
i32_store(&i->m0,(U64)si0+72U,si1);
si0=l3;
si1=8U;
si0+=si1;
sj1=-1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=84U;
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
l10=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
sj1=0ULL;
i64_store(&i->m0,(U64)si0+76U,sj1);
si0=l5;
sj1=34359738376ULL;
i64_store(&i->m0,(U64)si0+64U,sj1);
si0=l5;
si1=l3;
i32_store(&i->m0,(U64)si0+60U,si1);
si0=l5;
si1=0U;
i32_store(&i->m0,(U64)si0+56U,si1);
si0=l10;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 == si1;
if(si0){
goto L1;
}
si0=l5;
si1=56U;
si0+=si1;
si1=l2;
si2=0U;
si0=f8146(i,si0,si1,si2);
l8=si0;
L13:;
si0=l5;
si1=16U;
si0+=si1;
si1=l1;
si2=l8;
si0=f8080(i,si0,si1,si2);
l3=si0;
si0=0U;
l2=si0;
goto L9;
L10:;
si0=l4;
si1=l5;
si2=12U;
si1+=si2;
si2=l9;
si0=f9936(i,si0,si1,si2);
l3=si0;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+12U);
l10=si0;
si1=l10;
si1=i32_load(&i->m0,(U64)si1);
l9=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=1U;
l2=si0;
si0=l9;
si1=1U;
si0=si0 != si1;
if(si0){
goto L14;
}
si0=l10;
f7690(i,si0);
L14:;
si0=l7;
si0=!(si0);
if(si0){
goto L9;
}
si0=l6;
f15271(i,si0);
L9:;
si0=l0;
si1=l3;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l2;
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=96U;
si0+=si1;
i->g0=si0;
goto L0;
L5:;
f53(i);
UNREACHABLE;
L4:;
si0=1U;
si1=l7;
f52(i,si0,si1);
UNREACHABLE;
L3:;
si0=1649248U;
si1=36U;
si2=1649300U;
f703(i,si0,si1,si2);
UNREACHABLE;
L2:;
si0=8U;
si1=64U;
f52(i,si0,si1);
UNREACHABLE;
L1:;
f15042(i);
UNREACHABLE;
L0:;
}

U32 f7119(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 l8=0;
U32 si0,si1,si2,si3;
si0=l1;
if(si0){
goto L2;
}
si0=2U;
l2=si0;
si0=3U;
l3=si0;
si0=96U;
l4=si0;
goto L1;
L2:;
si0=l0;
si1=l1;
si0+=si1;
l5=si0;
si0=0U;
l6=si0;
si0=96U;
l7=si0;
si0=97U;
l8=si0;
L3:;
{
si0=l7;
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
l7=si0;
si0=l1;
si1=31U;
si0&=si1;
l3=si0;
si0=l1;
si1=-33U;
si0=si0 > si1;
if(si0){
goto L6;
}
si0=l3;
si1=6U;
si0<<=(si1&31);
si1=l7;
si0|=si1;
l1=si0;
si0=l0;
si1=2U;
si0+=si1;
l0=si0;
goto L4;
L6:;
si0=l7;
si1=6U;
si0<<=(si1&31);
si1=l0;
si1=i32_load8_u(&i->m0,(U64)si1+2U);
si2=63U;
si1&=si2;
si0|=si1;
l7=si0;
si0=l1;
si1=-16U;
si0=si0 >= si1;
if(si0){
goto L7;
}
si0=l7;
si1=l3;
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
si0=l7;
si1=6U;
si0<<=(si1&31);
si1=l0;
si1=i32_load8_u(&i->m0,(U64)si1+3U);
si2=63U;
si1&=si2;
si0|=si1;
si1=l3;
si2=18U;
si1<<=(si2&31);
si2=1835008U;
si1&=si2;
si0|=si1;
l1=si0;
si0=l0;
si1=4U;
si0+=si1;
l0=si0;
L4:;
si0=2U;
l2=si0;
si0=0U;
l3=si0;
si0=l1;
si1=-97U;
si0+=si1;
switch(si0){
case 0:
goto L14;
case 1:
goto L19;
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
goto L1;
case 17:
goto L15;
case 18:
goto L1;
case 19:
goto L20;
case 20:
goto L1;
case 21:
goto L1;
case 22:
goto L12;
case 23:
goto L11;
default:
goto L21;
}
L21:;
si0=l1;
si1=43U;
si0=si0 == si1;
if(si0){
goto L22;
}
si0=l4;
l7=si0;
si0=l1;
si1=1114112U;
si0=si0 != si1;
if(si0){
goto L1;
}
goto L8;
L22:;
si0=l6;
si1=1U;
si0&=si1;
if(si0){
goto L1;
}
si0=1U;
l6=si0;
goto L18;
L20:;
si0=l8;
si1=255U;
si0&=si1;
l1=si0;
si0=116U;
l8=si0;
si0=l1;
si1=97U;
si0=si0 == si1;
if(si0){
goto L18;
}
si0=l1;
si1=116U;
si0=si0 == si1;
if(si0){
goto L1;
}
goto L16;
L19:;
si0=l8;
si1=255U;
si0&=si1;
l1=si0;
si0=98U;
l8=si0;
si0=l1;
si1=97U;
si0=si0 != si1;
if(si0){
goto L17;
}
L18:;
si0=l4;
l7=si0;
goto L9;
L17:;
si0=l1;
si1=98U;
si0=si0 == si1;
if(si0){
goto L1;
}
L16:;
si0=2U;
l3=si0;
si0=2U;
l2=si0;
goto L1;
L15:;
si0=114U;
l7=si0;
si0=l4;
si1=255U;
si0&=si1;
l1=si0;
si1=96U;
si0=si0 == si1;
if(si0){
goto L9;
}
si0=l1;
si1=114U;
si0=si0 == si1;
if(si0){
goto L1;
}
goto L13;
L14:;
si0=97U;
l7=si0;
si0=l4;
si1=255U;
si0&=si1;
l1=si0;
si1=96U;
si0=si0 == si1;
if(si0){
goto L9;
}
si0=l1;
si1=97U;
si0=si0 == si1;
if(si0){
goto L1;
}
L13:;
si0=1U;
l3=si0;
goto L1;
L12:;
si0=119U;
l7=si0;
si0=l4;
si1=255U;
si0&=si1;
l1=si0;
si1=96U;
si0=si0 == si1;
if(si0){
goto L9;
}
si0=l1;
si1=119U;
si0=si0 == si1;
if(si0){
goto L1;
}
goto L10;
L11:;
si0=120U;
l7=si0;
si0=l4;
si1=255U;
si0&=si1;
l1=si0;
si1=96U;
si0=si0 == si1;
if(si0){
goto L9;
}
si0=l1;
si1=120U;
si0=si0 == si1;
if(si0){
goto L1;
}
L10:;
si0=1U;
l3=si0;
goto L1;
L9:;
si0=l0;
si1=l5;
si0=si0 != si1;
if(si0){
goto L3;
}
L8:;
}
si0=96U;
l4=si0;
si0=3U;
l3=si0;
si0=l7;
si1=255U;
si0&=si1;
si1=96U;
si0=si0 == si1;
if(si0){
goto L1;
}
si0=116U;
si1=l8;
si2=l8;
si3=255U;
si2&=si3;
si3=97U;
si2=si2 == si3;
si0=si2?si0:si1;
l3=si0;
si0=l6;
si1=1U;
si0&=si1;
l2=si0;
si0=l7;
l4=si0;
L1:;
si0=l3;
si1=255U;
si0&=si1;
si1=8U;
si0<<=(si1&31);
si1=l4;
si2=16U;
si1<<=(si2&31);
si0|=si1;
si1=l2;
si0|=si1;
L0:;
return si0;
}

U32 f7120(rustpythonInstance*i,U32 l0) {
U32 l1=0;
U32 l2=0;
U32 l3=0;
U32 l4=0;
U32 l5=0;
U64 l6=0;
U64 l7=0;
U64 l8=0;
U64 l9=0;
U32 si0,si1,si2,si3,si4,si5,si6,si7;
U64 sj1,sj2;
si0=i->g0;
si1=400U;
si0-=si1;
l1=si0;
i->g0=si0;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=8U;
si0=f15269(i,si0);
l2=si0;
si0=!(si0);
if(si0){
goto L3;
}
si0=l0;
si1=400U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
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
goto L2;
}
si0=l0;
si1=500U;
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
goto L2;
}
si0=l2;
si1=l4;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l2;
si1=l3;
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
sj1=8589934594ULL;
i64_store(&i->m0,(U64)si0+20U,sj1);
si0=l1;
si1=l2;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=2967024U;
si0=f10432(i,si0);
l2=si0;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si1=l2;
si1=i32_load(&i->m0,(U64)si1+4U);
l4=si1;
si1=i32_load(&i->m0,(U64)si1+12U);
si0=TF(i->t0,si1,U32 (*)(rustpythonInstance*,U32))(i,si0);
l2=si0;
si0=l3;
si1=l4;
si1=i32_load(&i->m0,(U64)si1+16U);
si0=TF(i->t0,si1,U32 (*)(rustpythonInstance*,U32))(i,si0);
l3=si0;
si0=l1;
si1=84U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si1=76U;
si0+=si1;
sj1=17179869184ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si1=68U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si1=1862528U;
i32_store(&i->m0,(U64)si0+64U,si1);
si0=l1;
si1=l2;
sj1=i64_load(&i->m0,(U64)si1);
l6=sj1;
si2=l3;
sj2=(U64)(si2);
sj1^=sj2;
sj2=6364136223846793005ULL;
sj1*=sj2;
si2=l2;
sj2=i64_load(&i->m0,(U64)si2+8U);
sj1^=sj2;
sj2=8ULL;
sj1=I64_ROTL(sj1,sj2);
sj2=6364136223846793005ULL;
sj1*=sj2;
l7=sj1;
sj2=l6;
sj1^=sj2;
sj2=24ULL;
sj1=I64_ROTL(sj1,sj2);
l6=sj1;
si2=l2;
si3=56U;
si2+=si3;
sj2=i64_load(&i->m0,(U64)si2);
sj1^=sj2;
sj2=6364136223846793005ULL;
sj1*=sj2;
sj2=l7;
sj1^=sj2;
sj2=8ULL;
sj1=I64_ROTL(sj1,sj2);
sj2=6364136223846793005ULL;
sj1*=sj2;
l8=sj1;
sj2=l6;
sj1^=sj2;
sj2=24ULL;
sj1=I64_ROTL(sj1,sj2);
l9=sj1;
sj2=6364136223846793005ULL;
sj1*=sj2;
sj2=l8;
sj1^=sj2;
sj2=l9;
sj1=I64_ROTL(sj1,sj2);
i64_store(&i->m0,(U64)si0+56U,sj1);
si0=l1;
sj1=l6;
si2=l2;
si3=48U;
si2+=si3;
sj2=i64_load(&i->m0,(U64)si2);
sj1^=sj2;
sj2=6364136223846793005ULL;
sj1*=sj2;
sj2=l7;
sj1^=sj2;
sj2=8ULL;
sj1=I64_ROTL(sj1,sj2);
sj2=6364136223846793005ULL;
sj1*=sj2;
l8=sj1;
sj2=l6;
sj1^=sj2;
sj2=24ULL;
sj1=I64_ROTL(sj1,sj2);
l9=sj1;
sj2=6364136223846793005ULL;
sj1*=sj2;
sj2=l8;
sj1^=sj2;
sj2=l9;
sj1=I64_ROTL(sj1,sj2);
i64_store(&i->m0,(U64)si0+48U,sj1);
si0=l1;
sj1=l6;
si2=l2;
si3=40U;
si2+=si3;
sj2=i64_load(&i->m0,(U64)si2);
sj1^=sj2;
sj2=6364136223846793005ULL;
sj1*=sj2;
sj2=l7;
sj1^=sj2;
sj2=8ULL;
sj1=I64_ROTL(sj1,sj2);
sj2=6364136223846793005ULL;
sj1*=sj2;
l8=sj1;
sj2=l6;
sj1^=sj2;
sj2=24ULL;
sj1=I64_ROTL(sj1,sj2);
l9=sj1;
sj2=6364136223846793005ULL;
sj1*=sj2;
sj2=l8;
sj1^=sj2;
sj2=l9;
sj1=I64_ROTL(sj1,sj2);
i64_store(&i->m0,(U64)si0+40U,sj1);
si0=l1;
sj1=l6;
si2=l2;
sj2=i64_load(&i->m0,(U64)si2+32U);
sj1^=sj2;
sj2=6364136223846793005ULL;
sj1*=sj2;
sj2=l7;
sj1^=sj2;
sj2=8ULL;
sj1=I64_ROTL(sj1,sj2);
sj2=6364136223846793005ULL;
sj1*=sj2;
l7=sj1;
sj2=l6;
sj1^=sj2;
sj2=24ULL;
sj1=I64_ROTL(sj1,sj2);
l6=sj1;
sj2=6364136223846793005ULL;
sj1*=sj2;
sj2=l7;
sj1^=sj2;
sj2=l6;
sj1=I64_ROTL(sj1,sj2);
i64_store(&i->m0,(U64)si0+32U,sj1);
si0=l1;
si1=0U;
i32_store(&i->m0,(U64)si0+100U,si1);
si0=l1;
si1=1810412U;
i32_store(&i->m0,(U64)si0+96U,si1);
si0=l1;
si1=128U;
si0+=si1;
si1=0U;
si2=244U;
si0=f15392(i,si0,si1,si2);
si0=l1;
si1=108U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si1=96U;
si0+=si1;
si1=20U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si1=380U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si1=388U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si0=i32_load(&i->m0,(U64)si0+212U);
l2=si0;
si1=l2;
si1=i32_load(&i->m0,(U64)si1);
l3=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
si1=1810412U;
i32_store(&i->m0,(U64)si0+104U,si1);
si0=l1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0+372U,sj1);
si0=l3;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 == si1;
if(si0){
goto L2;
}
si0=l1;
si1=1662260U;
si2=20U;
si3=l1;
si4=16U;
si3+=si4;
si4=l1;
si5=32U;
si4+=si5;
si5=l1;
si6=96U;
si5+=si6;
si6=l2;
si7=l0;
f9964(i,si0,si1,si2,si3,si4,si5,si6,si7);
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L1;
}
si0=l1;
si1=96U;
si0+=si1;
si1=8U;
si0+=si1;
si1=l1;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
si1=l1;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+96U,sj1);
si0=1648112U;
si1=43U;
si2=l1;
si3=96U;
si2+=si3;
si3=1649428U;
si4=1662280U;
f712(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L3:;
si0=4U;
si1=8U;
f52(i,si0,si1);
UNREACHABLE;
L2:;
f15042(i);
UNREACHABLE;
L1:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
l2=si0;
si0=l1;
si1=400U;
si0+=si1;
i->g0=si0;
si0=l2;
L0:;
return si0;
}

U32 f7121(rustpythonInstance*i,U32 l0) {
U32 l1=0;
U32 l2=0;
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 si0,si1,si2,si3;
U64 sj1;
si0=i->g0;
si1=48U;
si0-=si1;
l1=si0;
i->g0=si0;
si0=0U;
si0=i32_load(&i->m0,(U64)si0+2969300U);
si1=2U;
si0=si0 == si1;
if(si0){
goto L1;
}
si0=2969276U;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+88U);
si2=8U;
si1+=si2;
f12977(i,si0,si1);
L1:;
si0=0U;
si0=i32_load(&i->m0,(U64)si0+2969276U);
l2=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+88U);
l3=si0;
si1=252U;
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
goto L5;
}
si0=0U;
l5=si0;
si0=l4;
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
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=64U;
si0=f15269(i,si0);
l5=si0;
si0=!(si0);
if(si0){
goto L4;
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
si0=l1;
si1=8U;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l5;
si1=8U;
si0+=si1;
sj1=-1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si1=36U;
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
l6=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0+28U,sj1);
si0=l1;
sj1=34359738376ULL;
i64_store(&i->m0,(U64)si0+16U,sj1);
si0=l1;
si1=l5;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l1;
si1=0U;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l6;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 == si1;
if(si0){
goto L5;
}
si0=l1;
si1=8U;
si0+=si1;
si1=l3;
si2=0U;
si0=f8146(i,si0,si1,si2);
l5=si0;
L6:;
si0=2969276U;
si1=l2;
si2=l4;
si3=l5;
si0=f8074(i,si0,si1,si2,si3);
l5=si0;
si0=i32_load(&i->m0,(U64)si0+56U);
l4=si0;
si0=!(si0);
if(si0){
goto L3;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0+12U);
l4=si0;
si0=!(si0);
if(si0){
goto L7;
}
si0=l4;
si1=l4;
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
goto L5;
}
L7:;
si0=l5;
si1=60U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si0=!(si0);
if(si0){
goto L2;
}
si0=l5;
si1=l2;
si2=l4;
si3=l0;
f7738(i,si0,si1,si2,si3);
si0=l0;
si1=l5;
si0=f7122(i,si0,si1);
si0=l1;
si1=48U;
si0+=si1;
i->g0=si0;
si0=l5;
goto L0;
L5:;
f15042(i);
UNREACHABLE;
L4:;
si0=8U;
si1=64U;
f52(i,si0,si1);
UNREACHABLE;
L3:;
si0=1860456U;
si1=43U;
si2=1862824U;
f673(i,si0,si1,si2);
UNREACHABLE;
L2:;
si0=1860456U;
si1=43U;
si2=1862840U;
f673(i,si0,si1,si2);
UNREACHABLE;
L0:;
return si0;
}

U32 f7122(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 l8=0;
U64 l9=0;
U64 l10=0;
U32 si0,si1,si2,si3,si4;
U64 sj1,sj2,sj3;
si0=i->g0;
si1=112U;
si0-=si1;
l2=si0;
i->g0=si0;
si0=l1;
si1=l0;
si0=f7732(i,si0,si1);
l3=si0;
if(si0){
goto L25;
}
si0=0U;
si0=i32_load(&i->m0,(U64)si0+2969188U);
si1=2U;
si0=si0 == si1;
if(si0){
goto L26;
}
si0=2969188U;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+88U);
si2=8U;
si1+=si2;
f12999(i,si0,si1);
L26:;
si0=0U;
si0=i32_load(&i->m0,(U64)si0+2969192U);
l4=si0;
si1=l4;
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
goto L23;
}
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=l0;
si1=88U;
si0+=si1;
l3=si0;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si1=948U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si0=3U;
si0=f15269(i,si0);
l7=si0;
si0=!(si0);
if(si0){
goto L22;
}
si0=l7;
si1=2U;
si0+=si1;
si1=0U;
si1=i32_load8_u(&i->m0,(U64)si1+1649539U);
i32_store8(&i->m0,(U64)si0,si1);
si0=l7;
si1=0U;
si1=i32_load16_u(&i->m0,(U64)si1+1649537U);
i32_store16(&i->m0,(U64)si0,si1);
si0=l2;
si1=100U;
si0+=si1;
si1=3U;
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=200U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si1=l5;
si1=i32_load(&i->m0,(U64)si1);
l8=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=l7;
i32_store(&i->m0,(U64)si0+96U,si1);
si0=l2;
sj1=-1ULL;
i64_store(&i->m0,(U64)si0+104U,sj1);
si0=l2;
sj1=-4294967296ULL;
i64_store(&i->m0,(U64)si0+88U,sj1);
si0=l8;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 == si1;
if(si0){
goto L23;
}
si0=l2;
si1=88U;
si0+=si1;
si1=l5;
si2=0U;
si0=f8078(i,si0,si1,si2);
l8=si0;
si0=l4;
si1=376U;
si0+=si1;
l5=si0;
si1=l5;
si1=i32_load(&i->m0,(U64)si1);
l7=si1;
si2=8U;
si3=l7;
si1=si3?si1:si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l7;
si0=!(si0);
if(si0){
goto L27;
}
si0=l5;
sj1=l9;
si2=1000000000U;
si0=f1429(i,si0,sj1,si2);
L27:;
si0=l2;
si1=80U;
si0+=si1;
si1=l4;
si2=416U;
si1+=si2;
si2=l4;
si3=384U;
si2+=si3;
sj2=i64_load(&i->m0,(U64)si2);
l9=sj2;
si3=l6;
sj3=(U64)(si3);
sj2^=sj3;
sj3=6364136223846793005ULL;
sj2*=sj3;
si3=l4;
si4=392U;
si3+=si4;
sj3=i64_load(&i->m0,(U64)si3);
sj2^=sj3;
sj3=8ULL;
sj2=I64_ROTL(sj2,sj3);
sj3=6364136223846793005ULL;
sj2*=sj3;
l10=sj2;
sj3=l9;
sj2^=sj3;
sj3=24ULL;
sj2=I64_ROTL(sj2,sj3);
l9=sj2;
sj3=6364136223846793005ULL;
sj2*=sj3;
sj3=l10;
sj2^=sj3;
sj3=l9;
sj2=I64_ROTL(sj2,sj3);
si2=(U32)(sj2);
si3=l6;
si4=l8;
f12861(i,si0,si1,si2,si3,si4);
si0=l2;
si0=i32_load(&i->m0,(U64)si0+84U);
l7=si0;
si0=!(si0);
if(si0){
goto L28;
}
si0=l7;
si1=l7;
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
si0=l7;
f7690(i,si0);
L28:;
si0=l4;
si1=0U;
si2=l4;
si2=i32_load(&i->m0,(U64)si2+376U);
l7=si2;
si3=l7;
si4=8U;
si3=si3 == si4;
l7=si3;
si1=si3?si1:si2;
i32_store(&i->m0,(U64)si0+376U,si1);
si0=l7;
if(si0){
goto L29;
}
si0=l4;
si1=376U;
si0+=si1;
si1=0U;
f1431(i,si0,si1);
L29:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si1=200U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
si1=l7;
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
goto L23;
}
si0=l1;
si1=l5;
si2=1208U;
si1+=si2;
si2=1652564U;
si3=7U;
si4=l7;
si1=f12275(i,si1,si2,si3,si4);
si2=l4;
si3=l0;
si0=f7734(i,si0,si1,si2,si3);
l4=si0;
if(si0){
goto L20;
}
si0=0U;
si0=i32_load(&i->m0,(U64)si0+2969196U);
si1=2U;
si0=si0 == si1;
if(si0){
goto L30;
}
si0=2969196U;
si1=l3;
si1=i32_load(&i->m0,(U64)si1);
si2=8U;
si1+=si2;
f12911(i,si0,si1);
L30:;
si0=0U;
si0=i32_load(&i->m0,(U64)si0+2969200U);
l4=si0;
si1=l4;
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
goto L23;
}
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si1=948U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si0=3U;
si0=f15269(i,si0);
l7=si0;
si0=!(si0);
if(si0){
goto L21;
}
si0=l7;
si1=2U;
si0+=si1;
si1=0U;
si1=i32_load8_u(&i->m0,(U64)si1+1649539U);
i32_store8(&i->m0,(U64)si0,si1);
si0=l7;
si1=0U;
si1=i32_load16_u(&i->m0,(U64)si1+1649537U);
i32_store16(&i->m0,(U64)si0,si1);
si0=l2;
si1=100U;
si0+=si1;
si1=3U;
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=200U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si1=l5;
si1=i32_load(&i->m0,(U64)si1);
l8=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=l7;
i32_store(&i->m0,(U64)si0+96U,si1);
si0=l2;
sj1=-1ULL;
i64_store(&i->m0,(U64)si0+104U,sj1);
si0=l2;
sj1=-4294967296ULL;
i64_store(&i->m0,(U64)si0+88U,sj1);
si0=l8;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 == si1;
if(si0){
goto L23;
}
si0=l2;
si1=88U;
si0+=si1;
si1=l5;
si2=0U;
si0=f8078(i,si0,si1,si2);
l8=si0;
si0=l4;
si1=376U;
si0+=si1;
l5=si0;
si1=l5;
si1=i32_load(&i->m0,(U64)si1);
l7=si1;
si2=8U;
si3=l7;
si1=si3?si1:si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l7;
si0=!(si0);
if(si0){
goto L31;
}
si0=l5;
sj1=l9;
si2=1000000000U;
si0=f1429(i,si0,sj1,si2);
L31:;
si0=l2;
si1=72U;
si0+=si1;
si1=l4;
si2=416U;
si1+=si2;
si2=l4;
si3=384U;
si2+=si3;
sj2=i64_load(&i->m0,(U64)si2);
l9=sj2;
si3=l6;
sj3=(U64)(si3);
sj2^=sj3;
sj3=6364136223846793005ULL;
sj2*=sj3;
si3=l4;
si4=392U;
si3+=si4;
sj3=i64_load(&i->m0,(U64)si3);
sj2^=sj3;
sj3=8ULL;
sj2=I64_ROTL(sj2,sj3);
sj3=6364136223846793005ULL;
sj2*=sj3;
l10=sj2;
sj3=l9;
sj2^=sj3;
sj3=24ULL;
sj2=I64_ROTL(sj2,sj3);
l9=sj2;
sj3=6364136223846793005ULL;
sj2*=sj3;
sj3=l10;
sj2^=sj3;
sj3=l9;
sj2=I64_ROTL(sj2,sj3);
si2=(U32)(sj2);
si3=l6;
si4=l8;
f12861(i,si0,si1,si2,si3,si4);
si0=l2;
si0=i32_load(&i->m0,(U64)si0+76U);
l7=si0;
si0=!(si0);
if(si0){
goto L32;
}
si0=l7;
si1=l7;
si1=i32_load(&i->m0,(U64)si1);
l6=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l6;
si1=1U;
si0=si0 != si1;
if(si0){
goto L32;
}
si0=l7;
f7690(i,si0);
L32:;
si0=l4;
si1=0U;
si2=l4;
si2=i32_load(&i->m0,(U64)si2+376U);
l7=si2;
si3=l7;
si4=8U;
si3=si3 == si4;
l7=si3;
si1=si3?si1:si2;
i32_store(&i->m0,(U64)si0+376U,si1);
si0=l7;
if(si0){
goto L33;
}
si0=l4;
si1=376U;
si0+=si1;
si1=0U;
f1431(i,si0,si1);
L33:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si1=200U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
si1=l7;
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
goto L23;
}
si0=l1;
si1=l5;
si2=1208U;
si1+=si2;
si2=1649540U;
si3=10U;
si4=l7;
si1=f12275(i,si1,si2,si3,si4);
si2=l4;
si3=l0;
si0=f7734(i,si0,si1,si2,si3);
l4=si0;
if(si0){
goto L18;
}
si0=0U;
si0=i32_load(&i->m0,(U64)si0+2969204U);
si1=2U;
si0=si0 == si1;
if(si0){
goto L34;
}
si0=2969204U;
si1=l3;
si1=i32_load(&i->m0,(U64)si1);
si2=8U;
si1+=si2;
f13007(i,si0,si1);
L34:;
si0=0U;
si0=i32_load(&i->m0,(U64)si0+2969208U);
l4=si0;
si1=l4;
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
goto L23;
}
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si1=948U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si0=3U;
si0=f15269(i,si0);
l7=si0;
si0=!(si0);
if(si0){
goto L19;
}
si0=l7;
si1=2U;
si0+=si1;
si1=0U;
si1=i32_load8_u(&i->m0,(U64)si1+1649539U);
i32_store8(&i->m0,(U64)si0,si1);
si0=l7;
si1=0U;
si1=i32_load16_u(&i->m0,(U64)si1+1649537U);
i32_store16(&i->m0,(U64)si0,si1);
si0=l2;
si1=100U;
si0+=si1;
si1=3U;
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=200U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si1=l5;
si1=i32_load(&i->m0,(U64)si1);
l8=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=l7;
i32_store(&i->m0,(U64)si0+96U,si1);
si0=l2;
sj1=-1ULL;
i64_store(&i->m0,(U64)si0+104U,sj1);
si0=l2;
sj1=-4294967296ULL;
i64_store(&i->m0,(U64)si0+88U,sj1);
si0=l8;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 == si1;
if(si0){
goto L23;
}
si0=l2;
si1=88U;
si0+=si1;
si1=l5;
si2=0U;
si0=f8078(i,si0,si1,si2);
l8=si0;
si0=l4;
si1=376U;
si0+=si1;
l5=si0;
si1=l5;
si1=i32_load(&i->m0,(U64)si1);
l7=si1;
si2=8U;
si3=l7;
si1=si3?si1:si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l7;
si0=!(si0);
if(si0){
goto L35;
}
si0=l5;
sj1=l9;
si2=1000000000U;
si0=f1429(i,si0,sj1,si2);
L35:;
si0=l2;
si1=64U;
si0+=si1;
si1=l4;
si2=416U;
si1+=si2;
si2=l4;
si3=384U;
si2+=si3;
sj2=i64_load(&i->m0,(U64)si2);
l9=sj2;
si3=l6;
sj3=(U64)(si3);
sj2^=sj3;
sj3=6364136223846793005ULL;
sj2*=sj3;
si3=l4;
si4=392U;
si3+=si4;
sj3=i64_load(&i->m0,(U64)si3);
sj2^=sj3;
sj3=8ULL;
sj2=I64_ROTL(sj2,sj3);
sj3=6364136223846793005ULL;
sj2*=sj3;
l10=sj2;
sj3=l9;
sj2^=sj3;
sj3=24ULL;
sj2=I64_ROTL(sj2,sj3);
l9=sj2;
sj3=6364136223846793005ULL;
sj2*=sj3;
sj3=l10;
sj2^=sj3;
sj3=l9;
sj2=I64_ROTL(sj2,sj3);
si2=(U32)(sj2);
si3=l6;
si4=l8;
f12861(i,si0,si1,si2,si3,si4);
si0=l2;
si0=i32_load(&i->m0,(U64)si0+68U);
l7=si0;
si0=!(si0);
if(si0){
goto L36;
}
si0=l7;
si1=l7;
si1=i32_load(&i->m0,(U64)si1);
l6=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l6;
si1=1U;
si0=si0 != si1;
if(si0){
goto L36;
}
si0=l7;
f7690(i,si0);
L36:;
si0=l4;
si1=0U;
si2=l4;
si2=i32_load(&i->m0,(U64)si2+376U);
l7=si2;
si3=l7;
si4=8U;
si3=si3 == si4;
l7=si3;
si1=si3?si1:si2;
i32_store(&i->m0,(U64)si0+376U,si1);
si0=l7;
if(si0){
goto L37;
}
si0=l4;
si1=376U;
si0+=si1;
si1=0U;
f1431(i,si0,si1);
L37:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si1=200U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
si1=l7;
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
goto L23;
}
si0=l1;
si1=l5;
si2=1208U;
si1+=si2;
si2=1650302U;
si3=15U;
si4=l7;
si1=f12275(i,si1,si2,si3,si4);
si2=l4;
si3=l0;
si0=f7734(i,si0,si1,si2,si3);
l4=si0;
if(si0){
goto L16;
}
si0=0U;
si0=i32_load(&i->m0,(U64)si0+2969212U);
si1=2U;
si0=si0 == si1;
if(si0){
goto L38;
}
si0=2969212U;
si1=l3;
si1=i32_load(&i->m0,(U64)si1);
si2=8U;
si1+=si2;
f13029(i,si0,si1);
L38:;
si0=0U;
si0=i32_load(&i->m0,(U64)si0+2969216U);
l4=si0;
si1=l4;
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
goto L23;
}
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si1=948U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si0=3U;
si0=f15269(i,si0);
l7=si0;
si0=!(si0);
if(si0){
goto L17;
}
si0=l7;
si1=2U;
si0+=si1;
si1=0U;
si1=i32_load8_u(&i->m0,(U64)si1+1649539U);
i32_store8(&i->m0,(U64)si0,si1);
si0=l7;
si1=0U;
si1=i32_load16_u(&i->m0,(U64)si1+1649537U);
i32_store16(&i->m0,(U64)si0,si1);
si0=l2;
si1=100U;
si0+=si1;
si1=3U;
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=200U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si1=l5;
si1=i32_load(&i->m0,(U64)si1);
l8=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=l7;
i32_store(&i->m0,(U64)si0+96U,si1);
si0=l2;
sj1=-1ULL;
i64_store(&i->m0,(U64)si0+104U,sj1);
si0=l2;
sj1=-4294967296ULL;
i64_store(&i->m0,(U64)si0+88U,sj1);
si0=l8;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 == si1;
if(si0){
goto L23;
}
si0=l2;
si1=88U;
si0+=si1;
si1=l5;
si2=0U;
si0=f8078(i,si0,si1,si2);
l8=si0;
si0=l4;
si1=376U;
si0+=si1;
l5=si0;
si1=l5;
si1=i32_load(&i->m0,(U64)si1);
l7=si1;
si2=8U;
si3=l7;
si1=si3?si1:si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l7;
si0=!(si0);
if(si0){
goto L39;
}
si0=l5;
sj1=l9;
si2=1000000000U;
si0=f1429(i,si0,sj1,si2);
L39:;
si0=l2;
si1=56U;
si0+=si1;
si1=l4;
si2=416U;
si1+=si2;
si2=l4;
si3=384U;
si2+=si3;
sj2=i64_load(&i->m0,(U64)si2);
l9=sj2;
si3=l6;
sj3=(U64)(si3);
sj2^=sj3;
sj3=6364136223846793005ULL;
sj2*=sj3;
si3=l4;
si4=392U;
si3+=si4;
sj3=i64_load(&i->m0,(U64)si3);
sj2^=sj3;
sj3=8ULL;
sj2=I64_ROTL(sj2,sj3);
sj3=6364136223846793005ULL;
sj2*=sj3;
l10=sj2;
sj3=l9;
sj2^=sj3;
sj3=24ULL;
sj2=I64_ROTL(sj2,sj3);
l9=sj2;
sj3=6364136223846793005ULL;
sj2*=sj3;
sj3=l10;
sj2^=sj3;
sj3=l9;
sj2=I64_ROTL(sj2,sj3);
si2=(U32)(sj2);
si3=l6;
si4=l8;
f12861(i,si0,si1,si2,si3,si4);
si0=l2;
si0=i32_load(&i->m0,(U64)si0+60U);
l7=si0;
si0=!(si0);
if(si0){
goto L40;
}
si0=l7;
si1=l7;
si1=i32_load(&i->m0,(U64)si1);
l6=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l6;
si1=1U;
si0=si0 != si1;
if(si0){
goto L40;
}
si0=l7;
f7690(i,si0);
L40:;
si0=l4;
si1=0U;
si2=l4;
si2=i32_load(&i->m0,(U64)si2+376U);
l7=si2;
si3=l7;
si4=8U;
si3=si3 == si4;
l7=si3;
si1=si3?si1:si2;
i32_store(&i->m0,(U64)si0+376U,si1);
si0=l7;
if(si0){
goto L41;
}
si0=l4;
si1=376U;
si0+=si1;
si1=0U;
f1431(i,si0,si1);
L41:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si1=200U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
si1=l7;
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
goto L23;
}
si0=l1;
si1=l5;
si2=1208U;
si1+=si2;
si2=1650029U;
si3=11U;
si4=l7;
si1=f12275(i,si1,si2,si3,si4);
si2=l4;
si3=l0;
si0=f7734(i,si0,si1,si2,si3);
l4=si0;
if(si0){
goto L14;
}
si0=0U;
si0=i32_load(&i->m0,(U64)si0+2969220U);
si1=2U;
si0=si0 == si1;
if(si0){
goto L42;
}
si0=2969220U;
si1=l3;
si1=i32_load(&i->m0,(U64)si1);
si2=8U;
si1+=si2;
f13074(i,si0,si1);
L42:;
si0=0U;
si0=i32_load(&i->m0,(U64)si0+2969224U);
l4=si0;
si1=l4;
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
goto L23;
}
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si1=948U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si0=3U;
si0=f15269(i,si0);
l7=si0;
si0=!(si0);
if(si0){
goto L15;
}
si0=l7;
si1=2U;
si0+=si1;
si1=0U;
si1=i32_load8_u(&i->m0,(U64)si1+1649539U);
i32_store8(&i->m0,(U64)si0,si1);
si0=l7;
si1=0U;
si1=i32_load16_u(&i->m0,(U64)si1+1649537U);
i32_store16(&i->m0,(U64)si0,si1);
si0=l2;
si1=100U;
si0+=si1;
si1=3U;
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=200U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si1=l5;
si1=i32_load(&i->m0,(U64)si1);
l8=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=l7;
i32_store(&i->m0,(U64)si0+96U,si1);
si0=l2;
sj1=-1ULL;
i64_store(&i->m0,(U64)si0+104U,sj1);
si0=l2;
sj1=-4294967296ULL;
i64_store(&i->m0,(U64)si0+88U,sj1);
si0=l8;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 == si1;
if(si0){
goto L23;
}
si0=l2;
si1=88U;
si0+=si1;
si1=l5;
si2=0U;
si0=f8078(i,si0,si1,si2);
l8=si0;
si0=l4;
si1=376U;
si0+=si1;
l5=si0;
si1=l5;
si1=i32_load(&i->m0,(U64)si1);
l7=si1;
si2=8U;
si3=l7;
si1=si3?si1:si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l7;
si0=!(si0);
if(si0){
goto L43;
}
si0=l5;
sj1=l9;
si2=1000000000U;
si0=f1429(i,si0,sj1,si2);
L43:;
si0=l2;
si1=48U;
si0+=si1;
si1=l4;
si2=416U;
si1+=si2;
si2=l4;
si3=384U;
si2+=si3;
sj2=i64_load(&i->m0,(U64)si2);
l9=sj2;
si3=l6;
sj3=(U64)(si3);
sj2^=sj3;
sj3=6364136223846793005ULL;
sj2*=sj3;
si3=l4;
si4=392U;
si3+=si4;
sj3=i64_load(&i->m0,(U64)si3);
sj2^=sj3;
sj3=8ULL;
sj2=I64_ROTL(sj2,sj3);
sj3=6364136223846793005ULL;
sj2*=sj3;
l10=sj2;
sj3=l9;
sj2^=sj3;
sj3=24ULL;
sj2=I64_ROTL(sj2,sj3);
l9=sj2;
sj3=6364136223846793005ULL;
sj2*=sj3;
sj3=l10;
sj2^=sj3;
sj3=l9;
sj2=I64_ROTL(sj2,sj3);
si2=(U32)(sj2);
si3=l6;
si4=l8;
f12861(i,si0,si1,si2,si3,si4);
si0=l2;
si0=i32_load(&i->m0,(U64)si0+52U);
l7=si0;
si0=!(si0);
if(si0){
goto L44;
}
si0=l7;
si1=l7;
si1=i32_load(&i->m0,(U64)si1);
l6=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l6;
si1=1U;
si0=si0 != si1;
if(si0){
goto L44;
}
si0=l7;
f7690(i,si0);
L44:;
si0=l4;
si1=0U;
si2=l4;
si2=i32_load(&i->m0,(U64)si2+376U);
l7=si2;
si3=l7;
si4=8U;
si3=si3 == si4;
l7=si3;
si1=si3?si1:si2;
i32_store(&i->m0,(U64)si0+376U,si1);
si0=l7;
if(si0){
goto L45;
}
si0=l4;
si1=376U;
si0+=si1;
si1=0U;
f1431(i,si0,si1);
L45:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si1=200U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
si1=l7;
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
goto L23;
}
si0=l1;
si1=l5;
si2=1208U;
si1+=si2;
si2=1650220U;
si3=14U;
si4=l7;
si1=f12275(i,si1,si2,si3,si4);
si2=l4;
si3=l0;
si0=f7734(i,si0,si1,si2,si3);
l4=si0;
if(si0){
goto L12;
}
si0=0U;
si0=i32_load(&i->m0,(U64)si0+2969228U);
si1=2U;
si0=si0 == si1;
if(si0){
goto L46;
}
si0=2969228U;
si1=l3;
si1=i32_load(&i->m0,(U64)si1);
si2=8U;
si1+=si2;
f12957(i,si0,si1);
L46:;
si0=0U;
si0=i32_load(&i->m0,(U64)si0+2969232U);
l4=si0;
si1=l4;
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
goto L23;
}
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si1=948U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si0=3U;
si0=f15269(i,si0);
l7=si0;
si0=!(si0);
if(si0){
goto L13;
}
si0=l7;
si1=2U;
si0+=si1;
si1=0U;
si1=i32_load8_u(&i->m0,(U64)si1+1649539U);
i32_store8(&i->m0,(U64)si0,si1);
si0=l7;
si1=0U;
si1=i32_load16_u(&i->m0,(U64)si1+1649537U);
i32_store16(&i->m0,(U64)si0,si1);
si0=l2;
si1=100U;
si0+=si1;
si1=3U;
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=200U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si1=l5;
si1=i32_load(&i->m0,(U64)si1);
l8=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=l7;
i32_store(&i->m0,(U64)si0+96U,si1);
si0=l2;
sj1=-1ULL;
i64_store(&i->m0,(U64)si0+104U,sj1);
si0=l2;
sj1=-4294967296ULL;
i64_store(&i->m0,(U64)si0+88U,sj1);
si0=l8;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 == si1;
if(si0){
goto L23;
}
si0=l2;
si1=88U;
si0+=si1;
si1=l5;
si2=0U;
si0=f8078(i,si0,si1,si2);
l8=si0;
si0=l4;
si1=376U;
si0+=si1;
l5=si0;
si1=l5;
si1=i32_load(&i->m0,(U64)si1);
l7=si1;
si2=8U;
si3=l7;
si1=si3?si1:si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l7;
si0=!(si0);
if(si0){
goto L47;
}
si0=l5;
sj1=l9;
si2=1000000000U;
si0=f1429(i,si0,sj1,si2);
L47:;
si0=l2;
si1=40U;
si0+=si1;
si1=l4;
si2=416U;
si1+=si2;
si2=l4;
si3=384U;
si2+=si3;
sj2=i64_load(&i->m0,(U64)si2);
l9=sj2;
si3=l6;
sj3=(U64)(si3);
sj2^=sj3;
sj3=6364136223846793005ULL;
sj2*=sj3;
si3=l4;
si4=392U;
si3+=si4;
sj3=i64_load(&i->m0,(U64)si3);
sj2^=sj3;
sj3=8ULL;
sj2=I64_ROTL(sj2,sj3);
sj3=6364136223846793005ULL;
sj2*=sj3;
l10=sj2;
sj3=l9;
sj2^=sj3;
sj3=24ULL;
sj2=I64_ROTL(sj2,sj3);
l9=sj2;
sj3=6364136223846793005ULL;
sj2*=sj3;
sj3=l10;
sj2^=sj3;
sj3=l9;
sj2=I64_ROTL(sj2,sj3);
si2=(U32)(sj2);
si3=l6;
si4=l8;
f12861(i,si0,si1,si2,si3,si4);
si0=l2;
si0=i32_load(&i->m0,(U64)si0+44U);
l7=si0;
si0=!(si0);
if(si0){
goto L48;
}
si0=l7;
si1=l7;
si1=i32_load(&i->m0,(U64)si1);
l6=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l6;
si1=1U;
si0=si0 != si1;
if(si0){
goto L48;
}
si0=l7;
f7690(i,si0);
L48:;
si0=l4;
si1=0U;
si2=l4;
si2=i32_load(&i->m0,(U64)si2+376U);
l7=si2;
si3=l7;
si4=8U;
si3=si3 == si4;
l7=si3;
si1=si3?si1:si2;
i32_store(&i->m0,(U64)si0+376U,si1);
si0=l7;
if(si0){
goto L49;
}
si0=l4;
si1=376U;
si0+=si1;
si1=0U;
f1431(i,si0,si1);
L49:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si1=200U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
si1=l7;
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
goto L23;
}
si0=l1;
si1=l5;
si2=1208U;
si1+=si2;
si2=1649819U;
si3=14U;
si4=l7;
si1=f12275(i,si1,si2,si3,si4);
si2=l4;
si3=l0;
si0=f7734(i,si0,si1,si2,si3);
l4=si0;
if(si0){
goto L10;
}
si0=0U;
si0=i32_load(&i->m0,(U64)si0+2969236U);
si1=2U;
si0=si0 == si1;
if(si0){
goto L50;
}
si0=2969236U;
si1=l3;
si1=i32_load(&i->m0,(U64)si1);
si2=8U;
si1+=si2;
f12987(i,si0,si1);
L50:;
si0=0U;
si0=i32_load(&i->m0,(U64)si0+2969240U);
l4=si0;
si1=l4;
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
goto L23;
}
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si1=948U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si0=3U;
si0=f15269(i,si0);
l7=si0;
si0=!(si0);
if(si0){
goto L11;
}
si0=l7;
si1=2U;
si0+=si1;
si1=0U;
si1=i32_load8_u(&i->m0,(U64)si1+1649539U);
i32_store8(&i->m0,(U64)si0,si1);
si0=l7;
si1=0U;
si1=i32_load16_u(&i->m0,(U64)si1+1649537U);
i32_store16(&i->m0,(U64)si0,si1);
si0=l2;
si1=100U;
si0+=si1;
si1=3U;
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=200U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si1=l5;
si1=i32_load(&i->m0,(U64)si1);
l8=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=l7;
i32_store(&i->m0,(U64)si0+96U,si1);
si0=l2;
sj1=-1ULL;
i64_store(&i->m0,(U64)si0+104U,sj1);
si0=l2;
sj1=-4294967296ULL;
i64_store(&i->m0,(U64)si0+88U,sj1);
si0=l8;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 == si1;
if(si0){
goto L23;
}
si0=l2;
si1=88U;
si0+=si1;
si1=l5;
si2=0U;
si0=f8078(i,si0,si1,si2);
l8=si0;
si0=l4;
si1=376U;
si0+=si1;
l5=si0;
si1=l5;
si1=i32_load(&i->m0,(U64)si1);
l7=si1;
si2=8U;
si3=l7;
si1=si3?si1:si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l7;
si0=!(si0);
if(si0){
goto L51;
}
si0=l5;
sj1=l9;
si2=1000000000U;
si0=f1429(i,si0,sj1,si2);
L51:;
si0=l2;
si1=32U;
si0+=si1;
si1=l4;
si2=416U;
si1+=si2;
si2=l4;
si3=384U;
si2+=si3;
sj2=i64_load(&i->m0,(U64)si2);
l9=sj2;
si3=l6;
sj3=(U64)(si3);
sj2^=sj3;
sj3=6364136223846793005ULL;
sj2*=sj3;
si3=l4;
si4=392U;
si3+=si4;
sj3=i64_load(&i->m0,(U64)si3);
sj2^=sj3;
sj3=8ULL;
sj2=I64_ROTL(sj2,sj3);
sj3=6364136223846793005ULL;
sj2*=sj3;
l10=sj2;
sj3=l9;
sj2^=sj3;
sj3=24ULL;
sj2=I64_ROTL(sj2,sj3);
l9=sj2;
sj3=6364136223846793005ULL;
sj2*=sj3;
sj3=l10;
sj2^=sj3;
sj3=l9;
sj2=I64_ROTL(sj2,sj3);
si2=(U32)(sj2);
si3=l6;
si4=l8;
f12861(i,si0,si1,si2,si3,si4);
si0=l2;
si0=i32_load(&i->m0,(U64)si0+36U);
l7=si0;
si0=!(si0);
if(si0){
goto L52;
}
si0=l7;
si1=l7;
si1=i32_load(&i->m0,(U64)si1);
l6=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l6;
si1=1U;
si0=si0 != si1;
if(si0){
goto L52;
}
si0=l7;
f7690(i,si0);
L52:;
si0=l4;
si1=0U;
si2=l4;
si2=i32_load(&i->m0,(U64)si2+376U);
l7=si2;
si3=l7;
si4=8U;
si3=si3 == si4;
l7=si3;
si1=si3?si1:si2;
i32_store(&i->m0,(U64)si0+376U,si1);
si0=l7;
if(si0){
goto L53;
}
si0=l4;
si1=376U;
si0+=si1;
si1=0U;
f1431(i,si0,si1);
L53:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si1=200U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
si1=l7;
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
goto L23;
}
si0=l1;
si1=l5;
si2=1208U;
si1+=si2;
si2=1649580U;
si3=14U;
si4=l7;
si1=f12275(i,si1,si2,si3,si4);
si2=l4;
si3=l0;
si0=f7734(i,si0,si1,si2,si3);
l4=si0;
if(si0){
goto L8;
}
si0=0U;
si0=i32_load(&i->m0,(U64)si0+2969244U);
si1=2U;
si0=si0 == si1;
if(si0){
goto L54;
}
si0=2969244U;
si1=l3;
si1=i32_load(&i->m0,(U64)si1);
si2=8U;
si1+=si2;
f13025(i,si0,si1);
L54:;
si0=0U;
si0=i32_load(&i->m0,(U64)si0+2969248U);
l4=si0;
si1=l4;
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
goto L23;
}
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si1=948U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si0=3U;
si0=f15269(i,si0);
l7=si0;
si0=!(si0);
if(si0){
goto L9;
}
si0=l7;
si1=2U;
si0+=si1;
si1=0U;
si1=i32_load8_u(&i->m0,(U64)si1+1649539U);
i32_store8(&i->m0,(U64)si0,si1);
si0=l7;
si1=0U;
si1=i32_load16_u(&i->m0,(U64)si1+1649537U);
i32_store16(&i->m0,(U64)si0,si1);
si0=l2;
si1=100U;
si0+=si1;
si1=3U;
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=200U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si1=l5;
si1=i32_load(&i->m0,(U64)si1);
l8=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=l7;
i32_store(&i->m0,(U64)si0+96U,si1);
si0=l2;
sj1=-1ULL;
i64_store(&i->m0,(U64)si0+104U,sj1);
si0=l2;
sj1=-4294967296ULL;
i64_store(&i->m0,(U64)si0+88U,sj1);
si0=l8;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 == si1;
if(si0){
goto L23;
}
si0=l2;
si1=88U;
si0+=si1;
si1=l5;
si2=0U;
si0=f8078(i,si0,si1,si2);
l8=si0;
si0=l4;
si1=376U;
si0+=si1;
l5=si0;
si1=l5;
si1=i32_load(&i->m0,(U64)si1);
l7=si1;
si2=8U;
si3=l7;
si1=si3?si1:si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l7;
si0=!(si0);
if(si0){
goto L55;
}
si0=l5;
sj1=l9;
si2=1000000000U;
si0=f1429(i,si0,sj1,si2);
L55:;
si0=l2;
si1=24U;
si0+=si1;
si1=l4;
si2=416U;
si1+=si2;
si2=l4;
si3=384U;
si2+=si3;
sj2=i64_load(&i->m0,(U64)si2);
l9=sj2;
si3=l6;
sj3=(U64)(si3);
sj2^=sj3;
sj3=6364136223846793005ULL;
sj2*=sj3;
si3=l4;
si4=392U;
si3+=si4;
sj3=i64_load(&i->m0,(U64)si3);
sj2^=sj3;
sj3=8ULL;
sj2=I64_ROTL(sj2,sj3);
sj3=6364136223846793005ULL;
sj2*=sj3;
l10=sj2;
sj3=l9;
sj2^=sj3;
sj3=24ULL;
sj2=I64_ROTL(sj2,sj3);
l9=sj2;
sj3=6364136223846793005ULL;
sj2*=sj3;
sj3=l10;
sj2^=sj3;
sj3=l9;
sj2=I64_ROTL(sj2,sj3);
si2=(U32)(sj2);
si3=l6;
si4=l8;
f12861(i,si0,si1,si2,si3,si4);
si0=l2;
si0=i32_load(&i->m0,(U64)si0+28U);
l7=si0;
si0=!(si0);
if(si0){
goto L56;
}
si0=l7;
si1=l7;
si1=i32_load(&i->m0,(U64)si1);
l6=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l6;
si1=1U;
si0=si0 != si1;
if(si0){
goto L56;
}
si0=l7;
f7690(i,si0);
L56:;
si0=l4;
si1=0U;
si2=l4;
si2=i32_load(&i->m0,(U64)si2+376U);
l7=si2;
si3=l7;
si4=8U;
si3=si3 == si4;
l7=si3;
si1=si3?si1:si2;
i32_store(&i->m0,(U64)si0+376U,si1);
si0=l7;
if(si0){
goto L57;
}
si0=l4;
si1=376U;
si0+=si1;
si1=0U;
f1431(i,si0,si1);
L57:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si1=200U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
si1=l7;
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
goto L23;
}
si0=l1;
si1=l5;
si2=1208U;
si1+=si2;
si2=1650813U;
si3=14U;
si4=l7;
si1=f12275(i,si1,si2,si3,si4);
si2=l4;
si3=l0;
si0=f7734(i,si0,si1,si2,si3);
l4=si0;
if(si0){
goto L6;
}
si0=0U;
si0=i32_load(&i->m0,(U64)si0+2969252U);
si1=2U;
si0=si0 == si1;
if(si0){
goto L58;
}
si0=2969252U;
si1=l3;
si1=i32_load(&i->m0,(U64)si1);
si2=8U;
si1+=si2;
f12968(i,si0,si1);
L58:;
si0=0U;
si0=i32_load(&i->m0,(U64)si0+2969256U);
l4=si0;
si1=l4;
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
goto L23;
}
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si1=948U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si0=3U;
si0=f15269(i,si0);
l7=si0;
si0=!(si0);
if(si0){
goto L7;
}
si0=l7;
si1=2U;
si0+=si1;
si1=0U;
si1=i32_load8_u(&i->m0,(U64)si1+1649539U);
i32_store8(&i->m0,(U64)si0,si1);
si0=l7;
si1=0U;
si1=i32_load16_u(&i->m0,(U64)si1+1649537U);
i32_store16(&i->m0,(U64)si0,si1);
si0=l2;
si1=100U;
si0+=si1;
si1=3U;
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=200U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si1=l5;
si1=i32_load(&i->m0,(U64)si1);
l8=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=l7;
i32_store(&i->m0,(U64)si0+96U,si1);
si0=l2;
sj1=-1ULL;
i64_store(&i->m0,(U64)si0+104U,sj1);
si0=l2;
sj1=-4294967296ULL;
i64_store(&i->m0,(U64)si0+88U,sj1);
si0=l8;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 == si1;
if(si0){
goto L23;
}
si0=l2;
si1=88U;
si0+=si1;
si1=l5;
si2=0U;
si0=f8078(i,si0,si1,si2);
l8=si0;
si0=l4;
si1=376U;
si0+=si1;
l5=si0;
si1=l5;
si1=i32_load(&i->m0,(U64)si1);
l7=si1;
si2=8U;
si3=l7;
si1=si3?si1:si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l7;
si0=!(si0);
if(si0){
goto L59;
}
si0=l5;
sj1=l9;
si2=1000000000U;
si0=f1429(i,si0,sj1,si2);
L59:;
si0=l2;
si1=16U;
si0+=si1;
si1=l4;
si2=416U;
si1+=si2;
si2=l4;
si3=384U;
si2+=si3;
sj2=i64_load(&i->m0,(U64)si2);
l9=sj2;
si3=l6;
sj3=(U64)(si3);
sj2^=sj3;
sj3=6364136223846793005ULL;
sj2*=sj3;
si3=l4;
si4=392U;
si3+=si4;
sj3=i64_load(&i->m0,(U64)si3);
sj2^=sj3;
sj3=8ULL;
sj2=I64_ROTL(sj2,sj3);
sj3=6364136223846793005ULL;
sj2*=sj3;
l10=sj2;
sj3=l9;
sj2^=sj3;
sj3=24ULL;
sj2=I64_ROTL(sj2,sj3);
l9=sj2;
sj3=6364136223846793005ULL;
sj2*=sj3;
sj3=l10;
sj2^=sj3;
sj3=l9;
sj2=I64_ROTL(sj2,sj3);
si2=(U32)(sj2);
si3=l6;
si4=l8;
f12861(i,si0,si1,si2,si3,si4);
si0=l2;
si0=i32_load(&i->m0,(U64)si0+20U);
l7=si0;
si0=!(si0);
if(si0){
goto L60;
}
si0=l7;
si1=l7;
si1=i32_load(&i->m0,(U64)si1);
l6=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l6;
si1=1U;
si0=si0 != si1;
if(si0){
goto L60;
}
si0=l7;
f7690(i,si0);
L60:;
si0=l4;
si1=0U;
si2=l4;
si2=i32_load(&i->m0,(U64)si2+376U);
l7=si2;
si3=l7;
si4=8U;
si3=si3 == si4;
l7=si3;
si1=si3?si1:si2;
i32_store(&i->m0,(U64)si0+376U,si1);
si0=l7;
if(si0){
goto L61;
}
si0=l4;
si1=376U;
si0+=si1;
si1=0U;
f1431(i,si0,si1);
L61:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si1=200U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
si1=l7;
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
goto L23;
}
si0=l1;
si1=l5;
si2=1208U;
si1+=si2;
si2=1651201U;
si3=13U;
si4=l7;
si1=f12275(i,si1,si2,si3,si4);
si2=l4;
si3=l0;
si0=f7734(i,si0,si1,si2,si3);
l4=si0;
if(si0){
goto L4;
}
si0=0U;
si0=i32_load(&i->m0,(U64)si0+2969260U);
si1=2U;
si0=si0 == si1;
if(si0){
goto L62;
}
si0=2969260U;
si1=l3;
si1=i32_load(&i->m0,(U64)si1);
si2=8U;
si1+=si2;
f12962(i,si0,si1);
L62:;
si0=0U;
si0=i32_load(&i->m0,(U64)si0+2969264U);
l4=si0;
si1=l4;
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
goto L23;
}
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si1=948U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si0=3U;
si0=f15269(i,si0);
l7=si0;
si0=!(si0);
if(si0){
goto L5;
}
si0=l7;
si1=2U;
si0+=si1;
si1=0U;
si1=i32_load8_u(&i->m0,(U64)si1+1649539U);
i32_store8(&i->m0,(U64)si0,si1);
si0=l7;
si1=0U;
si1=i32_load16_u(&i->m0,(U64)si1+1649537U);
i32_store16(&i->m0,(U64)si0,si1);
si0=l2;
si1=100U;
si0+=si1;
si1=3U;
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=200U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si1=l5;
si1=i32_load(&i->m0,(U64)si1);
l8=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=l7;
i32_store(&i->m0,(U64)si0+96U,si1);
si0=l2;
sj1=-1ULL;
i64_store(&i->m0,(U64)si0+104U,sj1);
si0=l2;
sj1=-4294967296ULL;
i64_store(&i->m0,(U64)si0+88U,sj1);
si0=l8;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 == si1;
if(si0){
goto L23;
}
si0=l2;
si1=88U;
si0+=si1;
si1=l5;
si2=0U;
si0=f8078(i,si0,si1,si2);
l8=si0;
si0=l4;
si1=376U;
si0+=si1;
l5=si0;
si1=l5;
si1=i32_load(&i->m0,(U64)si1);
l7=si1;
si2=8U;
si3=l7;
si1=si3?si1:si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l7;
si0=!(si0);
if(si0){
goto L63;
}
si0=l5;
sj1=l9;
si2=1000000000U;
si0=f1429(i,si0,sj1,si2);
L63:;
si0=l2;
si1=8U;
si0+=si1;
si1=l4;
si2=416U;
si1+=si2;
si2=l4;
si3=384U;
si2+=si3;
sj2=i64_load(&i->m0,(U64)si2);
l9=sj2;
si3=l6;
sj3=(U64)(si3);
sj2^=sj3;
sj3=6364136223846793005ULL;
sj2*=sj3;
si3=l4;
si4=392U;
si3+=si4;
sj3=i64_load(&i->m0,(U64)si3);
sj2^=sj3;
sj3=8ULL;
sj2=I64_ROTL(sj2,sj3);
sj3=6364136223846793005ULL;
sj2*=sj3;
l10=sj2;
sj3=l9;
sj2^=sj3;
sj3=24ULL;
sj2=I64_ROTL(sj2,sj3);
l9=sj2;
sj3=6364136223846793005ULL;
sj2*=sj3;
sj3=l10;
sj2^=sj3;
sj3=l9;
sj2=I64_ROTL(sj2,sj3);
si2=(U32)(sj2);
si3=l6;
si4=l8;
f12861(i,si0,si1,si2,si3,si4);
si0=l2;
si0=i32_load(&i->m0,(U64)si0+12U);
l7=si0;
si0=!(si0);
if(si0){
goto L64;
}
si0=l7;
si1=l7;
si1=i32_load(&i->m0,(U64)si1);
l6=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l6;
si1=1U;
si0=si0 != si1;
if(si0){
goto L64;
}
si0=l7;
f7690(i,si0);
L64:;
si0=l4;
si1=0U;
si2=l4;
si2=i32_load(&i->m0,(U64)si2+376U);
l7=si2;
si3=l7;
si4=8U;
si3=si3 == si4;
l7=si3;
si1=si3?si1:si2;
i32_store(&i->m0,(U64)si0+376U,si1);
si0=l7;
if(si0){
goto L65;
}
si0=l4;
si1=376U;
si0+=si1;
si1=0U;
f1431(i,si0,si1);
L65:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si1=200U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
si1=l7;
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
goto L23;
}
si0=l1;
si1=l5;
si2=1208U;
si1+=si2;
si2=1653806U;
si3=8U;
si4=l7;
si1=f12275(i,si1,si2,si3,si4);
si2=l4;
si3=l0;
si0=f7734(i,si0,si1,si2,si3);
l4=si0;
if(si0){
goto L2;
}
si0=0U;
si0=i32_load(&i->m0,(U64)si0+2969268U);
si1=2U;
si0=si0 == si1;
if(si0){
goto L66;
}
si0=2969268U;
si1=l3;
si1=i32_load(&i->m0,(U64)si1);
si2=8U;
si1+=si2;
f13047(i,si0,si1);
L66:;
si0=0U;
si0=i32_load(&i->m0,(U64)si0+2969272U);
l4=si0;
si1=l4;
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
goto L23;
}
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si1=948U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si0=3U;
si0=f15269(i,si0);
l7=si0;
si0=!(si0);
if(si0){
goto L3;
}
si0=l7;
si1=2U;
si0+=si1;
si1=0U;
si1=i32_load8_u(&i->m0,(U64)si1+1649539U);
i32_store8(&i->m0,(U64)si0,si1);
si0=l7;
si1=0U;
si1=i32_load16_u(&i->m0,(U64)si1+1649537U);
i32_store16(&i->m0,(U64)si0,si1);
si0=l2;
si1=100U;
si0+=si1;
si1=3U;
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=200U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si1=l5;
si1=i32_load(&i->m0,(U64)si1);
l8=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=l7;
i32_store(&i->m0,(U64)si0+96U,si1);
si0=l2;
sj1=-1ULL;
i64_store(&i->m0,(U64)si0+104U,sj1);
si0=l2;
sj1=-4294967296ULL;
i64_store(&i->m0,(U64)si0+88U,sj1);
si0=l8;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 == si1;
if(si0){
goto L23;
}
si0=l2;
si1=88U;
si0+=si1;
si1=l5;
si2=0U;
si0=f8078(i,si0,si1,si2);
l8=si0;
si0=l4;
si1=376U;
si0+=si1;
l5=si0;
si1=l5;
si1=i32_load(&i->m0,(U64)si1);
l7=si1;
si2=8U;
si3=l7;
si1=si3?si1:si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l7;
si0=!(si0);
if(si0){
goto L67;
}
si0=l5;
sj1=l9;
si2=1000000000U;
si0=f1429(i,si0,sj1,si2);
L67:;
si0=l2;
si1=l4;
si2=416U;
si1+=si2;
si2=l4;
si3=384U;
si2+=si3;
sj2=i64_load(&i->m0,(U64)si2);
l9=sj2;
si3=l6;
sj3=(U64)(si3);
sj2^=sj3;
sj3=6364136223846793005ULL;
sj2*=sj3;
si3=l4;
si4=392U;
si3+=si4;
sj3=i64_load(&i->m0,(U64)si3);
sj2^=sj3;
sj3=8ULL;
sj2=I64_ROTL(sj2,sj3);
sj3=6364136223846793005ULL;
sj2*=sj3;
l10=sj2;
sj3=l9;
sj2^=sj3;
sj3=24ULL;
sj2=I64_ROTL(sj2,sj3);
l9=sj2;
sj3=6364136223846793005ULL;
sj2*=sj3;
sj3=l10;
sj2^=sj3;
sj3=l9;
sj2=I64_ROTL(sj2,sj3);
si2=(U32)(sj2);
si3=l6;
si4=l8;
f12861(i,si0,si1,si2,si3,si4);
si0=l2;
si0=i32_load(&i->m0,(U64)si0+4U);
l7=si0;
si0=!(si0);
if(si0){
goto L68;
}
si0=l7;
si1=l7;
si1=i32_load(&i->m0,(U64)si1);
l6=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l6;
si1=1U;
si0=si0 != si1;
if(si0){
goto L68;
}
si0=l7;
f7690(i,si0);
L68:;
si0=l4;
si1=0U;
si2=l4;
si2=i32_load(&i->m0,(U64)si2+376U);
l7=si2;
si3=l7;
si4=8U;
si3=si3 == si4;
l7=si3;
si1=si3?si1:si2;
i32_store(&i->m0,(U64)si0+376U,si1);
si0=l7;
if(si0){
goto L69;
}
si0=l4;
si1=376U;
si0+=si1;
si1=0U;
f1431(i,si0,si1);
L69:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si1=200U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
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
goto L23;
}
si0=l1;
si1=l6;
si2=1208U;
si1+=si2;
si2=1649470U;
si3=7U;
si4=l3;
si1=f12275(i,si1,si2,si3,si4);
si2=l4;
si3=l0;
si0=f7734(i,si0,si1,si2,si3);
l3=si0;
if(si0){
goto L1;
}
si0=8192U;
si1=l0;
si0=f12593(i,si0,si1);
l7=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+88U);
l6=si0;
si1=200U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
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
goto L23;
}
si0=l1;
si1=l6;
si2=1208U;
si1+=si2;
si2=1662442U;
si3=19U;
si4=l3;
si1=f12275(i,si1,si2,si3,si4);
si2=l7;
si3=l0;
si0=f7734(i,si0,si1,si2,si3);
l3=si0;
si0=!(si0);
if(si0){
goto L24;
}
si0=l2;
si1=l3;
i32_store(&i->m0,(U64)si0+88U,si1);
si0=1648112U;
si1=43U;
si2=l2;
si3=88U;
si2+=si3;
si3=1662296U;
si4=1662464U;
f712(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L25:;
si0=l2;
si1=l3;
i32_store(&i->m0,(U64)si0+88U,si1);
si0=1648112U;
si1=43U;
si2=l2;
si3=88U;
si2+=si3;
si3=1662296U;
si4=1662312U;
f712(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L24:;
si0=l2;
si1=112U;
si0+=si1;
i->g0=si0;
si0=0U;
goto L0;
L23:;
f15042(i);
UNREACHABLE;
L22:;
si0=1U;
si1=3U;
f52(i,si0,si1);
UNREACHABLE;
L21:;
si0=1U;
si1=3U;
f52(i,si0,si1);
UNREACHABLE;
L20:;
si0=l2;
si1=l4;
i32_store(&i->m0,(U64)si0+88U,si1);
si0=1648112U;
si1=43U;
si2=l2;
si3=88U;
si2+=si3;
si3=1662296U;
si4=1662312U;
f712(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L19:;
si0=1U;
si1=3U;
f52(i,si0,si1);
UNREACHABLE;
L18:;
si0=l2;
si1=l4;
i32_store(&i->m0,(U64)si0+88U,si1);
si0=1648112U;
si1=43U;
si2=l2;
si3=88U;
si2+=si3;
si3=1662296U;
si4=1662312U;
f712(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L17:;
si0=1U;
si1=3U;
f52(i,si0,si1);
UNREACHABLE;
L16:;
si0=l2;
si1=l4;
i32_store(&i->m0,(U64)si0+88U,si1);
si0=1648112U;
si1=43U;
si2=l2;
si3=88U;
si2+=si3;
si3=1662296U;
si4=1662312U;
f712(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L15:;
si0=1U;
si1=3U;
f52(i,si0,si1);
UNREACHABLE;
L14:;
si0=l2;
si1=l4;
i32_store(&i->m0,(U64)si0+88U,si1);
si0=1648112U;
si1=43U;
si2=l2;
si3=88U;
si2+=si3;
si3=1662296U;
si4=1662312U;
f712(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L13:;
si0=1U;
si1=3U;
f52(i,si0,si1);
UNREACHABLE;
L12:;
si0=l2;
si1=l4;
i32_store(&i->m0,(U64)si0+88U,si1);
si0=1648112U;
si1=43U;
si2=l2;
si3=88U;
si2+=si3;
si3=1662296U;
si4=1662312U;
f712(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L11:;
si0=1U;
si1=3U;
f52(i,si0,si1);
UNREACHABLE;
L10:;
si0=l2;
si1=l4;
i32_store(&i->m0,(U64)si0+88U,si1);
si0=1648112U;
si1=43U;
si2=l2;
si3=88U;
si2+=si3;
si3=1662296U;
si4=1662312U;
f712(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L9:;
si0=1U;
si1=3U;
f52(i,si0,si1);
UNREACHABLE;
L8:;
si0=l2;
si1=l4;
i32_store(&i->m0,(U64)si0+88U,si1);
si0=1648112U;
si1=43U;
si2=l2;
si3=88U;
si2+=si3;
si3=1662296U;
si4=1662312U;
f712(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L7:;
si0=1U;
si1=3U;
f52(i,si0,si1);
UNREACHABLE;
L6:;
si0=l2;
si1=l4;
i32_store(&i->m0,(U64)si0+88U,si1);
si0=1648112U;
si1=43U;
si2=l2;
si3=88U;
si2+=si3;
si3=1662296U;
si4=1662312U;
f712(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L5:;
si0=1U;
si1=3U;
f52(i,si0,si1);
UNREACHABLE;
L4:;
si0=l2;
si1=l4;
i32_store(&i->m0,(U64)si0+88U,si1);
si0=1648112U;
si1=43U;
si2=l2;
si3=88U;
si2+=si3;
si3=1662296U;
si4=1662312U;
f712(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L3:;
si0=1U;
si1=3U;
f52(i,si0,si1);
UNREACHABLE;
L2:;
si0=l2;
si1=l4;
i32_store(&i->m0,(U64)si0+88U,si1);
si0=1648112U;
si1=43U;
si2=l2;
si3=88U;
si2+=si3;
si3=1662296U;
si4=1662312U;
f712(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L1:;
si0=l2;
si1=l3;
i32_store(&i->m0,(U64)si0+88U,si1);
si0=1648112U;
si1=43U;
si2=l2;
si3=88U;
si2+=si3;
si3=1662296U;
si4=1662312U;
f712(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L0:;
return si0;
}

void f7123(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 si0,si1,si2;
U64 sj1;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+8U);
l2=si0;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+4U);
si0=si0 != si1;
if(si0){
goto L1;
}
si0=l1;
si1=l2;
f7267(i,si0,si1);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+8U);
l2=si0;
L1:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
si1=l2;
si2=28U;
si1*=si2;
si0+=si1;
l2=si0;
si1=19U;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l2;
si1=1662328U;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l2;
si1=0U;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l2;
si1=1655952U;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l2;
sj1=4294967300ULL;
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l2;
si1=1662347U;
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+8U);
si2=1U;
si1+=si2;
l2=si1;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l2;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+4U);
si0=si0 != si1;
if(si0){
goto L2;
}
si0=l1;
si1=l2;
f7267(i,si0,si1);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+8U);
l2=si0;
L2:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
si1=l2;
si2=28U;
si1*=si2;
si0+=si1;
l2=si0;
si1=24U;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l2;
si1=1662351U;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l2;
si1=0U;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l2;
si1=1657920U;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l2;
sj1=4294967305ULL;
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l2;
si1=1662375U;
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+8U);
si2=1U;
si1+=si2;
l2=si1;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l2;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+4U);
si0=si0 != si1;
if(si0){
goto L3;
}
si0=l1;
si1=l2;
f7267(i,si0,si1);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+8U);
l2=si0;
L3:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
si1=l2;
si2=28U;
si1*=si2;
si0+=si1;
l2=si0;
si1=45U;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l2;
si1=1662384U;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l2;
si1=0U;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l2;
si1=1655592U;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l2;
sj1=4294967309ULL;
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l2;
si1=1662429U;
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+8U);
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0+8U,si1);
L0:;
}

void f7124(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 si0,si1,si2,si3,si4,si5;
U64 sj2,sj3;
si0=i->g0;
si1=32U;
si0-=si1;
l3=si0;
i->g0=si0;
si0=l2;
si1=56U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
si0=!(si0);
if(si0){
goto L6;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0+48U);
l5=si0;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si0=l5;
si1=l5;
si2=4U;
si1+=si2;
si2=l4;
si3=-1U;
si2+=si3;
l4=si2;
si3=2U;
si2<<=(si3&31);
si0=f15391(i,si0,si1,si2);
si0=l2;
si1=l4;
i32_store(&i->m0,(U64)si0+56U,si1);
goto L5;
L6:;
si0=l2;
si1=28U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L4;
}
si0=l3;
si1=8U;
si0+=si1;
si1=l2;
si2=16U;
si1+=si2;
si2=l2;
sj2=i64_load(&i->m0,(U64)si2);
si3=l2;
si4=8U;
si3+=si4;
sj3=i64_load(&i->m0,(U64)si3);
si4=1662711U;
si5=11U;
si2=f10928(i,sj2,sj3,si4,si5);
si3=1662711U;
si4=11U;
f12864(i,si0,si1,si2,si3,si4);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+8U);
l2=si0;
si0=!(si0);
if(si0){
goto L4;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0+24U);
l6=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+12U);
si0=!(si0);
if(si0){
goto L5;
}
si0=l2;
f15271(i,si0);
L5:;
si0=l3;
si1=8U;
si0+=si1;
si1=l6;
si2=l1;
si3=l1;
f7756(i,si0,si1,si2,si3);
si0=l6;
si1=l6;
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
si0=l6;
f7690(i,si0);
L7:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+12U);
l2=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+8U);
switch(si0){
case 0:
goto L8;
case 1:
goto L9;
case 2:
goto L3;
default:
goto L8;
}
L9:;
si0=l0;
si1=l2;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=4U;
l2=si0;
goto L1;
L8:;
si0=0U;
l6=si0;
si0=1U;
if(si0){
goto L2;
}
goto L3;
L4:;
L3:;
si0=1U;
l6=si0;
L2:;
si0=l0;
si1=l6;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=8U;
si0+=si1;
si1=l2;
i32_store(&i->m0,(U64)si0,si1);
si0=5U;
l2=si0;
L1:;
si0=l0;
si1=l2;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=32U;
si0+=si1;
i->g0=si0;
L0:;
}

U32 f7125(rustpythonInstance*i,U32 l0,U32 l1) {
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
si2=1662722U;
si3=13U;
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
si2=1662736U;
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

void f7126(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
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
U64 sj1,sj2,sj3;
si0=i->g0;
si1=48U;
si0-=si1;
l3=si0;
i->g0=si0;
si0=l2;
si1=56U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
si0=!(si0);
if(si0){
goto L5;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0+48U);
l5=si0;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si0=l5;
si1=l5;
si2=4U;
si1+=si2;
si2=l4;
si3=-1U;
si2+=si3;
l4=si2;
si3=2U;
si2<<=(si3&31);
si0=f15391(i,si0,si1,si2);
si0=l2;
si1=l4;
i32_store(&i->m0,(U64)si0+56U,si1);
goto L4;
L5:;
si0=l2;
si1=28U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L3;
}
si0=l3;
si1=24U;
si0+=si1;
si1=l2;
si2=16U;
si1+=si2;
si2=l2;
sj2=i64_load(&i->m0,(U64)si2);
si3=l2;
si4=8U;
si3+=si4;
sj3=i64_load(&i->m0,(U64)si3);
si4=1662767U;
si5=6U;
si2=f10928(i,sj2,sj3,si4,si5);
si3=1662767U;
si4=6U;
f12864(i,si0,si1,si2,si3,si4);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+24U);
l4=si0;
si0=!(si0);
if(si0){
goto L3;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0+40U);
l6=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+28U);
si0=!(si0);
if(si0){
goto L6;
}
si0=l4;
f15271(i,si0);
L6:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+56U);
l4=si0;
L4:;
si0=l4;
si0=!(si0);
if(si0){
goto L9;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0+48U);
l5=si0;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
si0=l5;
si1=l5;
si2=4U;
si1+=si2;
si2=l4;
si3=-1U;
si2+=si3;
l4=si2;
si3=2U;
si2<<=(si3&31);
si0=f15391(i,si0,si1,si2);
si0=l2;
si1=l4;
i32_store(&i->m0,(U64)si0+56U,si1);
goto L8;
L9:;
si0=l2;
si1=28U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L7;
}
si0=l3;
si1=24U;
si0+=si1;
si1=l2;
si2=16U;
si1+=si2;
si2=l2;
sj2=i64_load(&i->m0,(U64)si2);
si3=l2;
si4=8U;
si3+=si4;
sj3=i64_load(&i->m0,(U64)si3);
si4=1662703U;
si5=8U;
si2=f10928(i,sj2,sj3,si4,si5);
si3=1662703U;
si4=8U;
f12864(i,si0,si1,si2,si3,si4);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+24U);
l4=si0;
si0=!(si0);
if(si0){
goto L7;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0+40U);
l7=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+28U);
si0=!(si0);
if(si0){
goto L8;
}
si0=l4;
f15271(i,si0);
L8:;
si0=l3;
si1=16U;
si0+=si1;
si1=l1;
si2=l7;
f14773(i,si0,si1,si2);
si0=0U;
l4=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+20U);
l5=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+16U);
switch(si0){
case 0:
goto L10;
case 1:
goto L11;
case 2:
goto L2;
default:
goto L10;
}
L11:;
si0=l0;
sj1=17179869185ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=8U;
si0+=si1;
si1=l5;
i32_store(&i->m0,(U64)si0,si1);
si0=l6;
si1=l6;
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
si0=l6;
f7690(i,si0);
goto L1;
L10:;
si0=l5;
l4=si0;
goto L2;
L7:;
si0=0U;
l4=si0;
goto L2;
L3:;
si0=l0;
sj1=1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=8U;
si0+=si1;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
goto L1;
L2:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+56U);
l7=si0;
si0=!(si0);
if(si0){
goto L15;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0+48U);
l5=si0;
si0=i32_load(&i->m0,(U64)si0);
l8=si0;
si0=l5;
si1=l5;
si2=4U;
si1+=si2;
si2=l7;
si3=-1U;
si2+=si3;
l7=si2;
si3=2U;
si2<<=(si3&31);
si0=f15391(i,si0,si1,si2);
si0=l2;
si1=l7;
i32_store(&i->m0,(U64)si0+56U,si1);
goto L14;
L15:;
si0=l2;
si1=28U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L13;
}
si0=l3;
si1=24U;
si0+=si1;
si1=l2;
si2=16U;
si1+=si2;
si2=l2;
sj2=i64_load(&i->m0,(U64)si2);
si3=l2;
si4=8U;
si3+=si4;
sj3=i64_load(&i->m0,(U64)si3);
si4=1663403U;
si5=6U;
si2=f10928(i,sj2,sj3,si4,si5);
si3=1663403U;
si4=6U;
f12864(i,si0,si1,si2,si3,si4);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+24U);
l5=si0;
si0=!(si0);
if(si0){
goto L13;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0+40U);
l8=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+28U);
si0=!(si0);
if(si0){
goto L14;
}
si0=l5;
f15271(i,si0);
L14:;
si0=l3;
si1=8U;
si0+=si1;
si1=l1;
si2=l8;
f14773(i,si0,si1,si2);
si0=0U;
l5=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+12U);
l7=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+8U);
switch(si0){
case 0:
goto L16;
case 1:
goto L17;
case 2:
goto L12;
default:
goto L16;
}
L17:;
si0=l0;
sj1=17179869185ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=8U;
si0+=si1;
si1=l7;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si0=!(si0);
if(si0){
goto L18;
}
si0=l4;
si1=l4;
si1=i32_load(&i->m0,(U64)si1);
l2=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=1U;
si0=si0 != si1;
if(si0){
goto L18;
}
si0=l4;
f7690(i,si0);
L18:;
si0=l6;
si1=l6;
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
si0=l6;
f7690(i,si0);
goto L1;
L16:;
si0=l7;
l5=si0;
goto L12;
L13:;
si0=0U;
l5=si0;
L12:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+56U);
l8=si0;
si0=!(si0);
if(si0){
goto L27;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0+48U);
l7=si0;
si0=i32_load(&i->m0,(U64)si0);
l9=si0;
si0=l7;
si1=l7;
si2=4U;
si1+=si2;
si2=l8;
si3=-1U;
si2+=si3;
l8=si2;
si3=2U;
si2<<=(si3&31);
si0=f15391(i,si0,si1,si2);
si0=l2;
si1=l8;
i32_store(&i->m0,(U64)si0+56U,si1);
goto L26;
L27:;
si0=l2;
si1=28U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L25;
}
si0=l3;
si1=24U;
si0+=si1;
si1=l2;
si2=16U;
si1+=si2;
si2=l2;
sj2=i64_load(&i->m0,(U64)si2);
si3=l2;
si4=8U;
si3+=si4;
sj3=i64_load(&i->m0,(U64)si3);
si4=1663409U;
si5=7U;
si2=f10928(i,sj2,sj3,si4,si5);
si3=1663409U;
si4=7U;
f12864(i,si0,si1,si2,si3,si4);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+24U);
l7=si0;
si0=!(si0);
if(si0){
goto L25;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0+40U);
l9=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+28U);
si0=!(si0);
if(si0){
goto L26;
}
si0=l7;
f15271(i,si0);
L26:;
si0=l3;
si1=24U;
si0+=si1;
si1=l1;
si2=l9;
f7112(i,si0,si1,si2);
si0=l3;
si0=i32_load8_u(&i->m0,(U64)si0+24U);
l7=si0;
si1=2U;
si0=si0 == si1;
if(si0){
goto L25;
}
si0=l7;
si1=1U;
si0&=si1;
if(si0){
goto L23;
}
si0=l3;
si0=i32_load8_u(&i->m0,(U64)si0+25U);
l9=si0;
si1=255U;
si0&=si1;
si1=5U;
si0=si0 != si1;
if(si0){
goto L24;
}
L25:;
si0=0U;
l9=si0;
L24:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+56U);
l10=si0;
si0=!(si0);
if(si0){
goto L22;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0+48U);
l8=si0;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
si0=l8;
si1=l8;
si2=4U;
si1+=si2;
si2=l10;
si3=-1U;
si2+=si3;
l10=si2;
si3=2U;
si2<<=(si3&31);
si0=f15391(i,si0,si1,si2);
si0=l2;
si1=l10;
i32_store(&i->m0,(U64)si0+56U,si1);
goto L21;
L23:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+28U);
l2=si0;
si0=l0;
sj1=17179869185ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=8U;
si0+=si1;
si1=l2;
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si0=!(si0);
if(si0){
goto L28;
}
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
goto L28;
}
si0=l5;
f7690(i,si0);
L28:;
si0=l4;
si0=!(si0);
if(si0){
goto L29;
}
si0=l4;
si1=l4;
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
f7690(i,si0);
L29:;
si0=l6;
si1=l6;
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
si0=l6;
f7690(i,si0);
goto L1;
L22:;
si0=l2;
si1=28U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L20;
}
si0=l3;
si1=24U;
si0+=si1;
si1=l2;
si2=16U;
si1+=si2;
si2=l2;
sj2=i64_load(&i->m0,(U64)si2);
si3=l2;
si4=8U;
si3+=si4;
sj3=i64_load(&i->m0,(U64)si3);
si4=1663416U;
si5=14U;
si2=f10928(i,sj2,sj3,si4,si5);
si3=1663416U;
si4=14U;
f12864(i,si0,si1,si2,si3,si4);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+24U);
l8=si0;
si0=!(si0);
if(si0){
goto L20;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0+40U);
l7=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+28U);
si0=!(si0);
if(si0){
goto L21;
}
si0=l8;
f15271(i,si0);
L21:;
si0=l3;
si1=24U;
si0+=si1;
si1=l1;
si2=l7;
f10457(i,si0,si1,si2);
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
goto L30;
}
si0=l7;
f7690(i,si0);
L30:;
si0=0U;
l8=si0;
si0=l3;
si0=i32_load8_u(&i->m0,(U64)si0+24U);
l7=si0;
si1=2U;
si0=si0 == si1;
if(si0){
goto L19;
}
si0=l7;
si1=1U;
si0&=si1;
if(si0){
goto L31;
}
si0=l3;
si0=i32_load8_u(&i->m0,(U64)si0+25U);
si1=1U;
si0&=si1;
si1=0U;
si0=si0 != si1;
l8=si0;
goto L19;
L31:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+28U);
l2=si0;
si0=l0;
sj1=17179869185ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=8U;
si0+=si1;
si1=l2;
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si0=!(si0);
if(si0){
goto L32;
}
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
goto L32;
}
si0=l5;
f7690(i,si0);
L32:;
si0=l4;
si0=!(si0);
if(si0){
goto L33;
}
si0=l4;
si1=l4;
si1=i32_load(&i->m0,(U64)si1);
l2=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=1U;
si0=si0 != si1;
if(si0){
goto L33;
}
si0=l4;
f7690(i,si0);
L33:;
si0=l6;
si1=l6;
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
si0=l6;
f7690(i,si0);
goto L1;
L20:;
si0=0U;
l8=si0;
L19:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+56U);
l11=si0;
si0=!(si0);
if(si0){
goto L37;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0+48U);
l10=si0;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
si0=l10;
si1=l10;
si2=4U;
si1+=si2;
si2=l11;
si3=-1U;
si2+=si3;
l11=si2;
si3=2U;
si2<<=(si3&31);
si0=f15391(i,si0,si1,si2);
si0=l2;
si1=l11;
i32_store(&i->m0,(U64)si0+56U,si1);
goto L36;
L37:;
si0=l2;
si1=28U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L35;
}
si0=l3;
si1=24U;
si0+=si1;
si1=l2;
si2=16U;
si1+=si2;
si2=l2;
sj2=i64_load(&i->m0,(U64)si2);
si3=l2;
si4=8U;
si3+=si4;
sj3=i64_load(&i->m0,(U64)si3);
si4=1663430U;
si5=13U;
si2=f10928(i,sj2,sj3,si4,si5);
si3=1663430U;
si4=13U;
f12864(i,si0,si1,si2,si3,si4);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+24U);
l2=si0;
si0=!(si0);
if(si0){
goto L35;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0+40U);
l7=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+28U);
si0=!(si0);
if(si0){
goto L36;
}
si0=l2;
f15271(i,si0);
L36:;
si0=l3;
si1=24U;
si0+=si1;
si1=l1;
si2=l7;
f10457(i,si0,si1,si2);
si0=l7;
si1=l7;
si1=i32_load(&i->m0,(U64)si1);
l2=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=1U;
si0=si0 != si1;
if(si0){
goto L38;
}
si0=l7;
f7690(i,si0);
L38:;
si0=0U;
l2=si0;
si0=l3;
si0=i32_load8_u(&i->m0,(U64)si0+24U);
l1=si0;
si1=2U;
si0=si0 == si1;
if(si0){
goto L34;
}
si0=l1;
si1=1U;
si0&=si1;
if(si0){
goto L39;
}
si0=l3;
si0=i32_load8_u(&i->m0,(U64)si0+25U);
si1=1U;
si0&=si1;
si1=0U;
si0=si0 != si1;
l2=si0;
goto L34;
L39:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+28U);
l2=si0;
si0=l0;
sj1=17179869185ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=8U;
si0+=si1;
si1=l2;
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si0=!(si0);
if(si0){
goto L40;
}
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
goto L40;
}
si0=l5;
f7690(i,si0);
L40:;
si0=l4;
si0=!(si0);
if(si0){
goto L41;
}
si0=l4;
si1=l4;
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
si0=l4;
f7690(i,si0);
L41:;
si0=l6;
si1=l6;
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
si0=l6;
f7690(i,si0);
goto L1;
L35:;
si0=0U;
l2=si0;
L34:;
si0=l0;
si1=l4;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=18U;
si0+=si1;
si1=l2;
i32_store8(&i->m0,(U64)si0,si1);
si0=l0;
si1=17U;
si0+=si1;
si1=l8;
i32_store8(&i->m0,(U64)si0,si1);
si0=l0;
si1=16U;
si0+=si1;
si1=l9;
i32_store8(&i->m0,(U64)si0,si1);
si0=l0;
si1=12U;
si0+=si1;
si1=l6;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=8U;
si0+=si1;
si1=l5;
i32_store(&i->m0,(U64)si0,si1);
L1:;
si0=l3;
si1=48U;
si0+=si1;
i->g0=si0;
L0:;
}

U32 f7127(rustpythonInstance*i,U32 l0,U32 l1) {
U32 si0,si1,si2,si3,si4;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=l0;
si1=i32_load8_u(&i->m0,(U64)si1);
si2=2U;
si1<<=(si2&31);
l0=si1;
si2=1669188U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
si2=l0;
si3=1669168U;
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

U32 f7128(rustpythonInstance*i,U32 l0,U32 l1) {
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
si2=4U;
si1+=si2;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=1663471U;
si2=8U;
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
si1=1663479U;
si2=5U;
si3=l0;
si4=1658888U;
si0=f715(i,si0,si1,si2,si3,si4);
si0=l2;
si1=8U;
si0+=si1;
si1=1663484U;
si2=5U;
si3=l2;
si4=4U;
si3+=si4;
si4=1647760U;
si0=f715(i,si0,si1,si2,si3,si4);
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
si0=l2;
si0=i32_load(&i->m0,(U64)si0+8U);
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

U32 f7129(rustpythonInstance*i,U32 l0,U32 l1) {
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
si1=1663722U;
si2=13U;
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
si1=1663735U;
si2=9U;
si3=l0;
si4=16U;
si3+=si4;
si4=1658888U;
si0=f715(i,si0,si1,si2,si3,si4);
si0=l2;
si1=8U;
si0+=si1;
si1=1647641U;
si2=4U;
si3=l2;
si4=4U;
si3+=si4;
si4=1663744U;
si0=f715(i,si0,si1,si2,si3,si4);
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
si0=l2;
si0=i32_load(&i->m0,(U64)si0+8U);
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


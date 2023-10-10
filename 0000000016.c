#include "w2c2_base.h"

#include "rustpython.h"

void f1630(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
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
U32 si0,si1,si2,si3,si4;
U64 sj0,sj1;
si0=i->g0;
si1=112U;
si0-=si1;
l3=si0;
i->g0=si0;
si0=l2;
si1=16U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
si0=l2;
si1=28U;
si0+=si1;
sj0=i64_load(&i->m0,(U64)si0);
l5=sj0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+24U);
l6=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+20U);
l7=si0;
si0=l3;
si1=8U;
si0+=si1;
si1=l1;
si1=i32_load(&i->m0,(U64)si1);
l8=si1;
si2=l2;
si2=i32_load(&i->m0,(U64)si2+12U);
f3534(i,si0,si1,si2);
si0=l3;
si1=20U;
si0+=si1;
l9=si0;
si0=i32_load(&i->m0,(U64)si0);
l10=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+12U);
l11=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+8U);
l12=si0;
si0=l8;
si0=i32_load(&i->m0,(U64)si0+8U);
l13=si0;
si0=l7;
if(si0){
goto L3;
}
si0=0U;
l14=si0;
goto L2;
L3:;
si0=l3;
si1=64U;
si0+=si1;
si1=40U;
si0+=si1;
si1=l7;
si2=40U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=64U;
si0+=si1;
si1=32U;
si0+=si1;
si1=l7;
si2=32U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=64U;
si0+=si1;
si1=24U;
si0+=si1;
si1=l7;
si2=24U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=64U;
si0+=si1;
si1=16U;
si0+=si1;
si1=l7;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=64U;
si0+=si1;
si1=8U;
si0+=si1;
si1=l7;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=l7;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+64U,sj1);
si0=l3;
si1=8U;
si0+=si1;
si1=l1;
si2=l3;
si3=64U;
si2+=si3;
f1595(i,si0,si1,si2);
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=56U;
si0=f15269(i,si0);
l14=si0;
si0=!(si0);
if(si0){
goto L1;
}
si0=l14;
si1=l3;
sj1=i64_load(&i->m0,(U64)si1+8U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l14;
si1=48U;
si0+=si1;
si1=l3;
si2=8U;
si1+=si2;
si2=48U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l14;
si1=40U;
si0+=si1;
si1=l3;
si2=8U;
si1+=si2;
si2=40U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l14;
si1=32U;
si0+=si1;
si1=l3;
si2=8U;
si1+=si2;
si2=32U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l14;
si1=24U;
si0+=si1;
si1=l3;
si2=8U;
si1+=si2;
si2=24U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l14;
si1=16U;
si0+=si1;
si1=l3;
si2=8U;
si1+=si2;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l14;
si1=8U;
si0+=si1;
si1=l3;
si2=8U;
si1+=si2;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l7;
f15271(i,si0);
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l8=si0;
L2:;
si0=l3;
si1=8U;
si0+=si1;
si1=l8;
si2=l4;
f3534(i,si0,si1,si2);
si0=l9;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+12U);
l1=si0;
si0=l0;
si1=l3;
si1=i32_load(&i->m0,(U64)si1+8U);
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l0;
si1=l12;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l13;
si2=l10;
si3=l11;
si4=2U;
si3=si3 == si4;
si1=si3?si1:si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
sj1=l5;
i64_store(&i->m0,(U64)si0+36U,sj1);
si0=l0;
si1=l6;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l0;
si1=l14;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l0;
si1=l2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+16U,sj1);
si0=l0;
si1=24U;
si0+=si1;
si1=l2;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l8;
si1=i32_load(&i->m0,(U64)si1+8U);
si2=l7;
si3=l1;
si4=2U;
si3=si3 == si4;
si1=si3?si1:si2;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l3;
si1=112U;
si0+=si1;
i->g0=si0;
goto L0;
L1:;
si0=8U;
si1=56U;
f52(i,si0,si1);
UNREACHABLE;
L0:;
}

void f1631(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U64 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 l8=0;
U32 l9=0;
U32 l10=0;
U32 l11=0;
U32 si0,si1,si2;
U64 sj0,sj1;
si0=i->g0;
si1=128U;
si0-=si1;
l3=si0;
i->g0=si0;
si0=l2;
si1=60U;
si0+=si1;
sj0=i64_load(&i->m0,(U64)si0);
l4=sj0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+56U);
l5=si0;
si0=l3;
si1=40U;
si0+=si1;
si1=l2;
si2=40U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=32U;
si0+=si1;
si1=l2;
si2=32U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=24U;
si0+=si1;
si1=l2;
si2=24U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=16U;
si0+=si1;
si1=l2;
si2=16U;
si1+=si2;
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
si0=l3;
si1=l2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=52U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si0=l3;
si1=48U;
si0+=si1;
si1=l1;
si2=l2;
si2=i32_load(&i->m0,(U64)si2+48U);
l7=si2;
f3534(i,si0,si1,si2);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+48U);
l2=si0;
si0=l3;
si1=104U;
si0+=si1;
si1=8U;
si0+=si1;
l8=si0;
si1=l3;
si2=48U;
si1+=si2;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=104U;
si0+=si1;
si1=16U;
si0+=si1;
l9=si0;
si1=l3;
si2=48U;
si1+=si2;
si2=24U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=l3;
si2=48U;
si1+=si2;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+104U,sj1);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+52U);
l10=si0;
si1=2U;
si0=si0 == si1;
if(si0){
goto L2;
}
si0=l1;
si1=l3;
sj1=i64_load(&i->m0,(U64)si1+104U);
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l1;
si1=l10;
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
si1=20U;
si0+=si1;
si1=l9;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
si1=12U;
si0+=si1;
si1=l8;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
goto L1;
L2:;
si0=l1;
si1=l7;
i32_store(&i->m0,(U64)si0+16U,si1);
L1:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+8U);
l7=si0;
si0=l3;
si1=48U;
si0+=si1;
si1=l1;
si2=l3;
f1594(i,si0,si1,si2);
si0=l3;
si1=l1;
si2=l6;
f3534(i,si0,si1,si2);
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
l8=si0;
si0=l3;
si1=104U;
si0+=si1;
si1=8U;
si0+=si1;
l9=si0;
si1=l3;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=104U;
si0+=si1;
si1=16U;
si0+=si1;
l10=si0;
si1=l3;
si2=24U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=l3;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+104U,sj1);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+4U);
l11=si0;
si1=2U;
si0=si0 == si1;
if(si0){
goto L4;
}
si0=l1;
si1=l3;
sj1=i64_load(&i->m0,(U64)si1+104U);
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l1;
si1=l11;
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
si1=20U;
si0+=si1;
si1=l10;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
si1=12U;
si0+=si1;
si1=l9;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
goto L3;
L4:;
si0=l1;
si1=l6;
i32_store(&i->m0,(U64)si0+16U,si1);
L3:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+8U);
l1=si0;
si0=l0;
si1=48U;
si0+=si1;
si1=l3;
si2=48U;
si1+=si2;
si2=48U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=40U;
si0+=si1;
si1=l3;
si2=48U;
si1+=si2;
si2=40U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=32U;
si0+=si1;
si1=l3;
si2=48U;
si1+=si2;
si2=32U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=24U;
si0+=si1;
si1=l3;
si2=48U;
si1+=si2;
si2=24U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=16U;
si0+=si1;
si1=l3;
si2=48U;
si1+=si2;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=8U;
si0+=si1;
si1=l3;
si2=48U;
si1+=si2;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=l3;
sj1=i64_load(&i->m0,(U64)si1+48U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
sj1=l4;
i64_store(&i->m0,(U64)si0+76U,sj1);
si0=l0;
si1=l5;
i32_store(&i->m0,(U64)si0+72U,si1);
si0=l0;
si1=l8;
i32_store(&i->m0,(U64)si0+68U,si1);
si0=l0;
si1=l1;
i32_store(&i->m0,(U64)si0+64U,si1);
si0=l0;
si1=l2;
i32_store(&i->m0,(U64)si0+60U,si1);
si0=l0;
si1=l7;
i32_store(&i->m0,(U64)si0+56U,si1);
si0=l3;
si1=128U;
si0+=si1;
i->g0=si0;
L0:;
}

void f1632(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U64 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 l8=0;
U32 l9=0;
U32 l10=0;
U32 l11=0;
U32 si0,si1,si2,si3,si4;
U64 sj0,sj1;
si0=i->g0;
si1=80U;
si0-=si1;
l3=si0;
i->g0=si0;
si0=l2;
si1=60U;
si0+=si1;
sj0=i64_load(&i->m0,(U64)si0);
l4=sj0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+56U);
l5=si0;
si0=l3;
si1=40U;
si0+=si1;
si1=l2;
si2=40U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=32U;
si0+=si1;
si1=l2;
si2=32U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=24U;
si0+=si1;
si1=l2;
si2=24U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=16U;
si0+=si1;
si1=l2;
si2=16U;
si1+=si2;
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
si0=l3;
si1=l2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=52U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si0=l3;
si1=48U;
si0+=si1;
si1=l1;
si1=i32_load(&i->m0,(U64)si1);
l7=si1;
si2=l2;
si2=i32_load(&i->m0,(U64)si2+48U);
f3534(i,si0,si1,si2);
si0=l3;
si1=48U;
si0+=si1;
si1=12U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+52U);
l8=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+48U);
l9=si0;
si0=l7;
si0=i32_load(&i->m0,(U64)si0+8U);
l7=si0;
si0=l0;
si1=l1;
si2=l3;
f1595(i,si0,si1,si2);
si0=l3;
si1=l1;
si1=i32_load(&i->m0,(U64)si1);
l1=si1;
si2=l6;
f3534(i,si0,si1,si2);
si0=l3;
si1=12U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+4U);
l10=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
l11=si0;
si0=l0;
sj1=l4;
i64_store(&i->m0,(U64)si0+76U,sj1);
si0=l0;
si1=l5;
i32_store(&i->m0,(U64)si0+72U,si1);
si0=l0;
si1=l11;
i32_store(&i->m0,(U64)si0+68U,si1);
si0=l0;
si1=l9;
i32_store(&i->m0,(U64)si0+60U,si1);
si0=l0;
si1=l7;
si2=l2;
si3=l8;
si4=2U;
si3=si3 == si4;
si1=si3?si1:si2;
i32_store(&i->m0,(U64)si0+56U,si1);
si0=l0;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+8U);
si2=l6;
si3=l10;
si4=2U;
si3=si3 == si4;
si1=si3?si1:si2;
i32_store(&i->m0,(U64)si0+64U,si1);
si0=l3;
si1=80U;
si0+=si1;
i->g0=si0;
L0:;
}

void f1633(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
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
U32 si0,si1,si2;
U64 sj0,sj1;
si0=i->g0;
si1=64U;
si0-=si1;
l3=si0;
i->g0=si0;
si0=l2;
si1=16U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
si0=l2;
si1=24U;
si0+=si1;
sj0=i64_load(&i->m0,(U64)si0);
l5=sj0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+20U);
l6=si0;
si0=l3;
si1=32U;
si0+=si1;
si1=l1;
si2=l2;
si2=i32_load(&i->m0,(U64)si2+12U);
l7=si2;
f3534(i,si0,si1,si2);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+32U);
l8=si0;
si0=l3;
si1=8U;
si0+=si1;
si1=8U;
si0+=si1;
l9=si0;
si1=l3;
si2=32U;
si1+=si2;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=8U;
si0+=si1;
si1=16U;
si0+=si1;
l10=si0;
si1=l3;
si2=32U;
si1+=si2;
si2=24U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=l3;
si2=32U;
si1+=si2;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+8U,sj1);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+36U);
l11=si0;
si1=2U;
si0=si0 == si1;
if(si0){
goto L2;
}
si0=l1;
si1=l3;
sj1=i64_load(&i->m0,(U64)si1+8U);
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l1;
si1=l11;
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
si1=20U;
si0+=si1;
si1=l10;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
si1=12U;
si0+=si1;
si1=l9;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
goto L1;
L2:;
si0=l1;
si1=l7;
i32_store(&i->m0,(U64)si0+16U,si1);
L1:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+8U);
l7=si0;
si0=l3;
si1=32U;
si0+=si1;
si1=l1;
si2=l4;
f3534(i,si0,si1,si2);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+32U);
l9=si0;
si0=l3;
si1=8U;
si0+=si1;
si1=8U;
si0+=si1;
l10=si0;
si1=l3;
si2=32U;
si1+=si2;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=8U;
si0+=si1;
si1=16U;
si0+=si1;
l11=si0;
si1=l3;
si2=56U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=l3;
si2=32U;
si1+=si2;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+8U,sj1);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+36U);
l12=si0;
si1=2U;
si0=si0 == si1;
if(si0){
goto L4;
}
si0=l1;
si1=l3;
sj1=i64_load(&i->m0,(U64)si1+8U);
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l1;
si1=l12;
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
si1=20U;
si0+=si1;
si1=l11;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
si1=12U;
si0+=si1;
si1=l10;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
goto L3;
L4:;
si0=l1;
si1=l4;
i32_store(&i->m0,(U64)si0+16U,si1);
L3:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+8U);
l1=si0;
si0=l0;
si1=l9;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l0;
si1=l1;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l0;
si1=l8;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l7;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
sj1=l5;
i64_store(&i->m0,(U64)si0+32U,sj1);
si0=l0;
si1=l6;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l0;
si1=l2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+16U,sj1);
si0=l0;
si1=24U;
si0+=si1;
si1=l2;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=64U;
si0+=si1;
i->g0=si0;
L0:;
}

void f1634(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 si0,si1,si2,si3;
U64 sj1;
si0=i->g0;
si1=240U;
si0-=si1;
l3=si0;
i->g0=si0;
si0=l3;
si1=48U;
si0+=si1;
si1=l2;
si2=48U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=40U;
si0+=si1;
si1=l2;
si2=40U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=32U;
si0+=si1;
si1=l2;
si2=32U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=24U;
si0+=si1;
si1=l2;
si2=24U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=16U;
si0+=si1;
si1=l2;
si2=16U;
si1+=si2;
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
si0=l3;
si1=l2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=60U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
si0=l2;
si1=64U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+68U);
l6=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+56U);
l7=si0;
si0=l3;
si1=56U;
si0+=si1;
si1=l1;
si2=l3;
f1635(i,si0,si1,si2);
si0=l6;
if(si0){
goto L3;
}
si0=0U;
l2=si0;
goto L2;
L3:;
si0=l3;
si1=192U;
si0+=si1;
si1=40U;
si0+=si1;
si1=l6;
si2=40U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=192U;
si0+=si1;
si1=32U;
si0+=si1;
si1=l6;
si2=32U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=192U;
si0+=si1;
si1=24U;
si0+=si1;
si1=l6;
si2=24U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=192U;
si0+=si1;
si1=16U;
si0+=si1;
si1=l6;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=192U;
si0+=si1;
si1=8U;
si0+=si1;
si1=l6;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=l6;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+192U,sj1);
si0=l3;
si1=136U;
si0+=si1;
si1=l1;
si2=l3;
si3=192U;
si2+=si3;
f1594(i,si0,si1,si2);
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=56U;
si0=f15269(i,si0);
l2=si0;
si0=!(si0);
if(si0){
goto L1;
}
si0=l2;
si1=l3;
sj1=i64_load(&i->m0,(U64)si1+136U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=48U;
si0+=si1;
si1=l3;
si2=136U;
si1+=si2;
si2=48U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=40U;
si0+=si1;
si1=l3;
si2=136U;
si1+=si2;
si2=40U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=32U;
si0+=si1;
si1=l3;
si2=136U;
si1+=si2;
si2=32U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=24U;
si0+=si1;
si1=l3;
si2=136U;
si1+=si2;
si2=24U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=16U;
si0+=si1;
si1=l3;
si2=136U;
si1+=si2;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=8U;
si0+=si1;
si1=l3;
si2=136U;
si1+=si2;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l6;
f15271(i,si0);
L2:;
si0=l3;
si1=l1;
i32_store(&i->m0,(U64)si0+152U,si1);
si0=l3;
si1=l7;
i32_store(&i->m0,(U64)si0+144U,si1);
si0=l3;
si1=l4;
i32_store(&i->m0,(U64)si0+140U,si1);
si0=l3;
si1=l7;
i32_store(&i->m0,(U64)si0+136U,si1);
si0=l3;
si1=l7;
si2=l5;
si3=72U;
si2*=si3;
si1+=si2;
i32_store(&i->m0,(U64)si0+148U,si1);
si0=l3;
si1=l3;
si2=192U;
si1+=si2;
i32_store(&i->m0,(U64)si0+156U,si1);
si0=l3;
si1=56U;
si0+=si1;
si1=64U;
si0+=si1;
si1=l3;
si2=136U;
si1+=si2;
f1654(i,si0,si1);
si0=l0;
si1=l3;
si2=56U;
si1+=si2;
si2=76U;
si0=f15390(i,si0,si1,si2);
si1=l2;
i32_store(&i->m0,(U64)si0+76U,si1);
si0=l3;
si1=240U;
si0+=si1;
i->g0=si0;
goto L0;
L1:;
si0=8U;
si1=56U;
f52(i,si0,si1);
UNREACHABLE;
L0:;
}

void f1635(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
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
si1=272U;
si0-=si1;
l3=si0;
i->g0=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
switch(si0){
case 0:
goto L9;
case 1:
goto L8;
case 2:
goto L7;
case 3:
goto L6;
case 4:
goto L5;
case 5:
goto L4;
case 6:
goto L3;
case 7:
goto L2;
default:
goto L9;
}
L9:;
si0=l3;
si1=72U;
si0+=si1;
si1=l2;
si2=12U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=l2;
sj1=i64_load(&i->m0,(U64)si1+4U);
i64_store(&i->m0,(U64)si0+64U,sj1);
si0=l3;
si1=8U;
si0+=si1;
si1=l1;
si2=l3;
si3=64U;
si2+=si3;
f1593(i,si0,si1,si2);
goto L1;
L8:;
si0=l2;
si1=36U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si0=l3;
si1=8U;
si0+=si1;
si1=l1;
si2=l2;
si3=32U;
si2+=si3;
si2=i32_load(&i->m0,(U64)si2);
l6=si2;
f3534(i,si0,si1,si2);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+8U);
l7=si0;
si0=l3;
si1=248U;
si0+=si1;
si1=8U;
si0+=si1;
l8=si0;
si1=l3;
si2=8U;
si1+=si2;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=248U;
si0+=si1;
si1=16U;
si0+=si1;
l9=si0;
si1=l3;
si2=32U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=l3;
si2=8U;
si1+=si2;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+248U,sj1);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+12U);
l10=si0;
si1=2U;
si0=si0 == si1;
if(si0){
goto L11;
}
si0=l1;
si1=l3;
sj1=i64_load(&i->m0,(U64)si1+248U);
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l1;
si1=l10;
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
si1=20U;
si0+=si1;
si1=l9;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
si1=12U;
si0+=si1;
si1=l8;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
goto L10;
L11:;
si0=l1;
si1=l6;
i32_store(&i->m0,(U64)si0+16U,si1);
L10:;
si0=l2;
si1=8U;
si0+=si1;
l2=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+8U);
l6=si0;
si0=l3;
si1=8U;
si0+=si1;
si1=l1;
si2=l5;
f3534(i,si0,si1,si2);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+8U);
l8=si0;
si0=l3;
si1=248U;
si0+=si1;
si1=8U;
si0+=si1;
l9=si0;
si1=l3;
si2=8U;
si1+=si2;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=248U;
si0+=si1;
si1=16U;
si0+=si1;
l10=si0;
si1=l3;
si2=32U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=l3;
si2=8U;
si1+=si2;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+248U,sj1);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+12U);
l11=si0;
si1=2U;
si0=si0 == si1;
if(si0){
goto L13;
}
si0=l1;
si1=l3;
sj1=i64_load(&i->m0,(U64)si1+248U);
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l1;
si1=l11;
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
si1=20U;
si0+=si1;
si1=l10;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
si1=12U;
si0+=si1;
si1=l9;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
goto L12;
L13:;
si0=l1;
si1=l5;
i32_store(&i->m0,(U64)si0+16U,si1);
L12:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+8U);
l1=si0;
si0=l3;
si1=20U;
si0+=si1;
si1=l2;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=28U;
si0+=si1;
si1=l2;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=l8;
i32_store(&i->m0,(U64)si0+48U,si1);
si0=l3;
si1=l7;
i32_store(&i->m0,(U64)si0+40U,si1);
si0=l3;
si1=l6;
i32_store(&i->m0,(U64)si0+36U,si1);
si0=l3;
si1=l1;
i32_store(&i->m0,(U64)si0+44U,si1);
si0=l3;
si1=l2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+12U,sj1);
goto L1;
L7:;
si0=l3;
si1=96U;
si0+=si1;
si1=l2;
si2=20U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=88U;
si0+=si1;
si1=l2;
si2=12U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=l2;
sj1=i64_load(&i->m0,(U64)si1+4U);
i64_store(&i->m0,(U64)si0+80U,sj1);
si0=l3;
si1=8U;
si0+=si1;
si1=l1;
si2=l3;
si3=80U;
si2+=si3;
f1636(i,si0,si1,si2);
goto L1;
L6:;
si0=l3;
si1=144U;
si0+=si1;
si1=l2;
si2=44U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=136U;
si0+=si1;
si1=l2;
si2=36U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=128U;
si0+=si1;
si1=l2;
si2=28U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=120U;
si0+=si1;
si1=l2;
si2=20U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=112U;
si0+=si1;
si1=l2;
si2=12U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=l2;
sj1=i64_load(&i->m0,(U64)si1+4U);
i64_store(&i->m0,(U64)si0+104U,sj1);
si0=l3;
si1=8U;
si0+=si1;
si1=l1;
si2=l3;
si3=104U;
si2+=si3;
f1637(i,si0,si1,si2);
goto L1;
L5:;
si0=l3;
si1=192U;
si0+=si1;
si1=l2;
si2=44U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=184U;
si0+=si1;
si1=l2;
si2=36U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=176U;
si0+=si1;
si1=l2;
si2=28U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=168U;
si0+=si1;
si1=l2;
si2=20U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=160U;
si0+=si1;
si1=l2;
si2=12U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=l2;
sj1=i64_load(&i->m0,(U64)si1+4U);
i64_store(&i->m0,(U64)si0+152U,sj1);
si0=l3;
si1=8U;
si0+=si1;
si1=l1;
si2=l3;
si3=152U;
si2+=si3;
f1638(i,si0,si1,si2);
goto L1;
L4:;
si0=l2;
si1=16U;
si0+=si1;
sj0=i64_load(&i->m0,(U64)si0);
l12=sj0;
si0=l2;
si1=12U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
si0=l2;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si0=l3;
si1=8U;
si0+=si1;
si1=l1;
si2=l2;
si2=i32_load(&i->m0,(U64)si2+4U);
l6=si2;
f3534(i,si0,si1,si2);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+8U);
l2=si0;
si0=l3;
si1=248U;
si0+=si1;
si1=8U;
si0+=si1;
l8=si0;
si1=l3;
si2=8U;
si1+=si2;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=248U;
si0+=si1;
si1=16U;
si0+=si1;
l9=si0;
si1=l3;
si2=32U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=l3;
si2=8U;
si1+=si2;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+248U,sj1);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+12U);
l10=si0;
si1=2U;
si0=si0 == si1;
if(si0){
goto L15;
}
si0=l1;
si1=l3;
sj1=i64_load(&i->m0,(U64)si1+248U);
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l1;
si1=l10;
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
si1=20U;
si0+=si1;
si1=l9;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
si1=12U;
si0+=si1;
si1=l8;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
goto L14;
L15:;
si0=l1;
si1=l6;
i32_store(&i->m0,(U64)si0+16U,si1);
L14:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+8U);
l6=si0;
si0=l3;
si1=8U;
si0+=si1;
si1=l1;
si2=l5;
f3534(i,si0,si1,si2);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+8U);
l8=si0;
si0=l3;
si1=248U;
si0+=si1;
si1=8U;
si0+=si1;
l9=si0;
si1=l3;
si2=8U;
si1+=si2;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=248U;
si0+=si1;
si1=16U;
si0+=si1;
l10=si0;
si1=l3;
si2=32U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=l3;
si2=8U;
si1+=si2;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+248U,sj1);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+12U);
l11=si0;
si1=2U;
si0=si0 == si1;
if(si0){
goto L17;
}
si0=l1;
si1=l3;
sj1=i64_load(&i->m0,(U64)si1+248U);
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l1;
si1=l11;
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
si1=20U;
si0+=si1;
si1=l10;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
si1=12U;
si0+=si1;
si1=l9;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
goto L16;
L17:;
si0=l1;
si1=l5;
i32_store(&i->m0,(U64)si0+16U,si1);
L16:;
si0=l3;
sj1=l12;
i64_store(&i->m0,(U64)si0+28U,sj1);
si0=l3;
si1=l7;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l3;
si1=l8;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l3;
si1=l2;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l3;
si1=l6;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l3;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+8U);
i32_store(&i->m0,(U64)si0+16U,si1);
goto L1;
L3:;
si0=l3;
si1=216U;
si0+=si1;
si1=l2;
si2=20U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=208U;
si0+=si1;
si1=l2;
si2=12U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=l2;
sj1=i64_load(&i->m0,(U64)si1+4U);
i64_store(&i->m0,(U64)si0+200U,sj1);
si0=l3;
si1=8U;
si0+=si1;
si1=l1;
si2=l3;
si3=200U;
si2+=si3;
f1639(i,si0,si1,si2);
goto L1;
L2:;
si0=l3;
si1=240U;
si0+=si1;
si1=l2;
si2=20U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=232U;
si0+=si1;
si1=l2;
si2=12U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=l2;
sj1=i64_load(&i->m0,(U64)si1+4U);
i64_store(&i->m0,(U64)si0+224U,sj1);
si0=l3;
si1=8U;
si0+=si1;
si1=l1;
si2=l3;
si3=224U;
si2+=si3;
f1636(i,si0,si1,si2);
L1:;
si0=l0;
si1=l3;
sj1=i64_load(&i->m0,(U64)si1+8U);
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l0;
si1=l4;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=52U;
si0+=si1;
si1=l3;
si2=56U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=44U;
si0+=si1;
si1=l3;
si2=48U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=36U;
si0+=si1;
si1=l3;
si2=40U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=28U;
si0+=si1;
si1=l3;
si2=32U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=20U;
si0+=si1;
si1=l3;
si2=24U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=12U;
si0+=si1;
si1=l3;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=272U;
si0+=si1;
i->g0=si0;
L0:;
}

void f1636(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
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
U64 sj1;
si0=i->g0;
si1=80U;
si0-=si1;
l3=si0;
i->g0=si0;
si0=l2;
si1=16U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+8U);
l5=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+4U);
l6=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
si0=l3;
si1=48U;
si0+=si1;
si1=l1;
si2=l2;
si2=i32_load(&i->m0,(U64)si2+12U);
l8=si2;
f3534(i,si0,si1,si2);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+48U);
l2=si0;
si0=l3;
si1=24U;
si0+=si1;
si1=8U;
si0+=si1;
l9=si0;
si1=l3;
si2=48U;
si1+=si2;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=24U;
si0+=si1;
si1=16U;
si0+=si1;
l10=si0;
si1=l3;
si2=72U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=l3;
si2=48U;
si1+=si2;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+24U,sj1);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+52U);
l11=si0;
si1=2U;
si0=si0 == si1;
if(si0){
goto L2;
}
si0=l1;
si1=l3;
sj1=i64_load(&i->m0,(U64)si1+24U);
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l1;
si1=l11;
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
si1=20U;
si0+=si1;
si1=l10;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
si1=12U;
si0+=si1;
si1=l9;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
goto L1;
L2:;
si0=l1;
si1=l8;
i32_store(&i->m0,(U64)si0+16U,si1);
L1:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+8U);
l8=si0;
si0=l3;
si1=l1;
i32_store(&i->m0,(U64)si0+64U,si1);
si0=l3;
si1=l7;
si2=l5;
si3=56U;
si2*=si3;
si1+=si2;
i32_store(&i->m0,(U64)si0+60U,si1);
si0=l3;
si1=l7;
i32_store(&i->m0,(U64)si0+56U,si1);
si0=l3;
si1=l6;
i32_store(&i->m0,(U64)si0+52U,si1);
si0=l3;
si1=l7;
i32_store(&i->m0,(U64)si0+48U,si1);
si0=l3;
si1=l3;
si2=24U;
si1+=si2;
i32_store(&i->m0,(U64)si0+68U,si1);
si0=l3;
si1=8U;
si0+=si1;
si1=l3;
si2=48U;
si1+=si2;
f1650(i,si0,si1);
si0=l3;
si1=48U;
si0+=si1;
si1=l1;
si2=l4;
f3534(i,si0,si1,si2);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+48U);
l7=si0;
si0=l3;
si1=24U;
si0+=si1;
si1=8U;
si0+=si1;
l5=si0;
si1=l3;
si2=48U;
si1+=si2;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=24U;
si0+=si1;
si1=16U;
si0+=si1;
l6=si0;
si1=l3;
si2=72U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=l3;
si2=48U;
si1+=si2;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+24U,sj1);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+52U);
l9=si0;
si1=2U;
si0=si0 == si1;
if(si0){
goto L4;
}
si0=l1;
si1=l3;
sj1=i64_load(&i->m0,(U64)si1+24U);
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l1;
si1=l9;
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
si1=20U;
si0+=si1;
si1=l6;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
si1=12U;
si0+=si1;
si1=l5;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
goto L3;
L4:;
si0=l1;
si1=l4;
i32_store(&i->m0,(U64)si0+16U,si1);
L3:;
si0=l3;
si1=48U;
si0+=si1;
si1=8U;
si0+=si1;
si1=l3;
si2=8U;
si1+=si2;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
l4=si1;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=l3;
sj1=i64_load(&i->m0,(U64)si1+8U);
l12=sj1;
i64_store(&i->m0,(U64)si0+48U,sj1);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+8U);
l1=si0;
si0=l0;
si1=l7;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l0;
si1=l1;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l0;
si1=l2;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l8;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
sj1=l12;
i64_store(&i->m0,(U64)si0+16U,sj1);
si0=l0;
si1=24U;
si0+=si1;
si1=l4;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=80U;
si0+=si1;
i->g0=si0;
L0:;
}

void f1637(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
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
U32 l16=0;
U64 l17=0;
U32 si0,si1,si2,si3;
U64 sj0,sj1;
si0=i->g0;
si1=112U;
si0-=si1;
l3=si0;
i->g0=si0;
si0=l2;
si1=28U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
si0=l2;
si1=36U;
si0+=si1;
sj0=i64_load(&i->m0,(U64)si0);
l5=sj0;
si0=l2;
si1=20U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si0=l2;
si1=16U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+32U);
l8=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+12U);
l9=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+8U);
l10=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+4U);
l11=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0);
l12=si0;
si0=l3;
si1=80U;
si0+=si1;
si1=l1;
si2=l2;
si2=i32_load(&i->m0,(U64)si2+24U);
l13=si2;
f3534(i,si0,si1,si2);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+80U);
l2=si0;
si0=l3;
si1=56U;
si0+=si1;
si1=8U;
si0+=si1;
l14=si0;
si1=l3;
si2=80U;
si1+=si2;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=56U;
si0+=si1;
si1=16U;
si0+=si1;
l15=si0;
si1=l3;
si2=104U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=l3;
si2=80U;
si1+=si2;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+56U,sj1);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+84U);
l16=si0;
si1=2U;
si0=si0 == si1;
if(si0){
goto L2;
}
si0=l1;
si1=l3;
sj1=i64_load(&i->m0,(U64)si1+56U);
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l1;
si1=l16;
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
si1=20U;
si0+=si1;
si1=l15;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
si1=12U;
si0+=si1;
si1=l14;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
goto L1;
L2:;
si0=l1;
si1=l13;
i32_store(&i->m0,(U64)si0+16U,si1);
L1:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+8U);
l13=si0;
si0=l3;
si1=l1;
i32_store(&i->m0,(U64)si0+96U,si1);
si0=l3;
si1=l12;
si2=l10;
si3=48U;
si2*=si3;
si1+=si2;
i32_store(&i->m0,(U64)si0+92U,si1);
si0=l3;
si1=l12;
i32_store(&i->m0,(U64)si0+88U,si1);
si0=l3;
si1=l11;
i32_store(&i->m0,(U64)si0+84U,si1);
si0=l3;
si1=l12;
i32_store(&i->m0,(U64)si0+80U,si1);
si0=l3;
si1=l3;
si2=56U;
si1+=si2;
i32_store(&i->m0,(U64)si0+100U,si1);
si0=l3;
si1=24U;
si0+=si1;
si1=l3;
si2=80U;
si1+=si2;
f1653(i,si0,si1);
si0=l3;
si1=l1;
i32_store(&i->m0,(U64)si0+96U,si1);
si0=l3;
si1=l9;
si2=l6;
si3=56U;
si2*=si3;
si1+=si2;
i32_store(&i->m0,(U64)si0+92U,si1);
si0=l3;
si1=l9;
i32_store(&i->m0,(U64)si0+88U,si1);
si0=l3;
si1=l7;
i32_store(&i->m0,(U64)si0+84U,si1);
si0=l3;
si1=l9;
i32_store(&i->m0,(U64)si0+80U,si1);
si0=l3;
si1=l3;
si2=56U;
si1+=si2;
i32_store(&i->m0,(U64)si0+100U,si1);
si0=l3;
si1=40U;
si0+=si1;
si1=l3;
si2=80U;
si1+=si2;
f1650(i,si0,si1);
si0=l3;
si1=80U;
si0+=si1;
si1=l1;
si2=l4;
f3534(i,si0,si1,si2);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+80U);
l9=si0;
si0=l3;
si1=56U;
si0+=si1;
si1=8U;
si0+=si1;
l12=si0;
si1=l3;
si2=80U;
si1+=si2;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=56U;
si0+=si1;
si1=16U;
si0+=si1;
l6=si0;
si1=l3;
si2=104U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=l3;
si2=80U;
si1+=si2;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+56U,sj1);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+84U);
l7=si0;
si1=2U;
si0=si0 == si1;
if(si0){
goto L4;
}
si0=l1;
si1=l3;
sj1=i64_load(&i->m0,(U64)si1+56U);
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l1;
si1=l7;
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
si1=20U;
si0+=si1;
si1=l6;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
si1=12U;
si0+=si1;
si1=l12;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
goto L3;
L4:;
si0=l1;
si1=l4;
i32_store(&i->m0,(U64)si0+16U,si1);
L3:;
si0=l3;
si1=80U;
si0+=si1;
si1=8U;
si0+=si1;
si1=l3;
si2=24U;
si1+=si2;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
l12=si1;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=8U;
si0+=si1;
si1=8U;
si0+=si1;
l4=si0;
si1=l3;
si2=40U;
si1+=si2;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=l3;
sj1=i64_load(&i->m0,(U64)si1+24U);
l17=sj1;
i64_store(&i->m0,(U64)si0+80U,sj1);
si0=l3;
si1=l3;
sj1=i64_load(&i->m0,(U64)si1+40U);
i64_store(&i->m0,(U64)si0+8U,sj1);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+8U);
l1=si0;
si0=l0;
si1=l9;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l0;
si1=l1;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l0;
si1=l2;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l13;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
sj1=l17;
i64_store(&i->m0,(U64)si0+16U,sj1);
si0=l0;
si1=24U;
si0+=si1;
si1=l12;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
sj1=l5;
i64_store(&i->m0,(U64)si0+44U,sj1);
si0=l0;
si1=l8;
i32_store(&i->m0,(U64)si0+40U,si1);
si0=l0;
si1=l3;
sj1=i64_load(&i->m0,(U64)si1+8U);
i64_store(&i->m0,(U64)si0+28U,sj1);
si0=l0;
si1=36U;
si0+=si1;
si1=l4;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=112U;
si0+=si1;
i->g0=si0;
L0:;
}

void f1638(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
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
U32 si0,si1,si2,si3;
U64 sj1;
si0=i->g0;
si1=160U;
si0-=si1;
l3=si0;
i->g0=si0;
si0=l2;
si1=44U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
si0=l2;
si1=36U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si0=l2;
si1=32U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si0=l2;
si1=24U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
si0=l2;
si1=20U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l8=si0;
si0=l2;
si1=12U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l9=si0;
si0=l2;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l10=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+28U);
l11=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+16U);
l12=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+4U);
l13=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0);
l14=si0;
si0=l3;
si1=56U;
si0+=si1;
si1=l1;
si2=l2;
si2=i32_load(&i->m0,(U64)si2+40U);
l2=si2;
f3534(i,si0,si1,si2);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+56U);
l15=si0;
si0=l3;
si1=112U;
si0+=si1;
si1=8U;
si0+=si1;
l16=si0;
si1=l3;
si2=56U;
si1+=si2;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=112U;
si0+=si1;
si1=16U;
si0+=si1;
l17=si0;
si1=l3;
si2=56U;
si1+=si2;
si2=24U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=l3;
si2=56U;
si1+=si2;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+112U,sj1);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+60U);
l18=si0;
si1=2U;
si0=si0 == si1;
if(si0){
goto L2;
}
si0=l1;
si1=l3;
sj1=i64_load(&i->m0,(U64)si1+112U);
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l1;
si1=l18;
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
si1=20U;
si0+=si1;
si1=l17;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
si1=12U;
si0+=si1;
si1=l16;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
goto L1;
L2:;
si0=l1;
si1=l2;
i32_store(&i->m0,(U64)si0+16U,si1);
L1:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+8U);
l16=si0;
si0=l3;
si1=112U;
si0+=si1;
si1=40U;
si0+=si1;
si1=l14;
si2=40U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=112U;
si0+=si1;
si1=32U;
si0+=si1;
si1=l14;
si2=32U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=112U;
si0+=si1;
si1=24U;
si0+=si1;
si1=l14;
si2=24U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=112U;
si0+=si1;
si1=16U;
si0+=si1;
l17=si0;
si1=l14;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=112U;
si0+=si1;
si1=8U;
si0+=si1;
l18=si0;
si1=l14;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=l14;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+112U,sj1);
si0=l3;
si1=56U;
si0+=si1;
si1=l1;
si2=l3;
si3=112U;
si2+=si3;
f1594(i,si0,si1,si2);
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=56U;
si0=f15269(i,si0);
l2=si0;
si0=!(si0);
if(si0){
goto L3;
}
si0=l2;
si1=l3;
sj1=i64_load(&i->m0,(U64)si1+56U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=48U;
si0+=si1;
si1=l3;
si2=56U;
si1+=si2;
si2=48U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=40U;
si0+=si1;
si1=l3;
si2=56U;
si1+=si2;
si2=40U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=32U;
si0+=si1;
si1=l3;
si2=56U;
si1+=si2;
si2=32U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=24U;
si0+=si1;
si1=l3;
si2=56U;
si1+=si2;
si2=24U;
si1+=si2;
l19=si1;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=16U;
si0+=si1;
si1=l3;
si2=56U;
si1+=si2;
si2=16U;
si1+=si2;
l20=si1;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=8U;
si0+=si1;
si1=l3;
si2=56U;
si1+=si2;
si2=8U;
si1+=si2;
l21=si1;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l14;
f15271(i,si0);
si0=l3;
si1=l1;
i32_store(&i->m0,(U64)si0+72U,si1);
si0=l3;
si1=l13;
si2=l9;
si3=56U;
si2*=si3;
si1+=si2;
i32_store(&i->m0,(U64)si0+68U,si1);
si0=l3;
si1=l13;
i32_store(&i->m0,(U64)si0+64U,si1);
si0=l3;
si1=l10;
i32_store(&i->m0,(U64)si0+60U,si1);
si0=l3;
si1=l13;
i32_store(&i->m0,(U64)si0+56U,si1);
si0=l3;
si1=l3;
si2=112U;
si1+=si2;
i32_store(&i->m0,(U64)si0+76U,si1);
si0=l3;
si1=40U;
si0+=si1;
si1=l3;
si2=56U;
si1+=si2;
f1650(i,si0,si1);
si0=l3;
si1=l1;
i32_store(&i->m0,(U64)si0+72U,si1);
si0=l3;
si1=l12;
si2=l7;
si3=12U;
si2*=si3;
si1+=si2;
i32_store(&i->m0,(U64)si0+68U,si1);
si0=l3;
si1=l12;
i32_store(&i->m0,(U64)si0+64U,si1);
si0=l3;
si1=l8;
i32_store(&i->m0,(U64)si0+60U,si1);
si0=l3;
si1=l12;
i32_store(&i->m0,(U64)si0+56U,si1);
si0=l3;
si1=l3;
si2=112U;
si1+=si2;
i32_store(&i->m0,(U64)si0+76U,si1);
si0=l3;
si1=24U;
si0+=si1;
si1=l3;
si2=56U;
si1+=si2;
f1659(i,si0,si1);
si0=l3;
si1=l1;
i32_store(&i->m0,(U64)si0+72U,si1);
si0=l3;
si1=l11;
si2=l5;
si3=56U;
si2*=si3;
si1+=si2;
i32_store(&i->m0,(U64)si0+68U,si1);
si0=l3;
si1=l11;
i32_store(&i->m0,(U64)si0+64U,si1);
si0=l3;
si1=l6;
i32_store(&i->m0,(U64)si0+60U,si1);
si0=l3;
si1=l11;
i32_store(&i->m0,(U64)si0+56U,si1);
si0=l3;
si1=l3;
si2=112U;
si1+=si2;
i32_store(&i->m0,(U64)si0+76U,si1);
si0=l3;
si1=8U;
si0+=si1;
si1=l3;
si2=56U;
si1+=si2;
f1650(i,si0,si1);
si0=l3;
si1=56U;
si0+=si1;
si1=l1;
si2=l4;
f3534(i,si0,si1,si2);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+56U);
l14=si0;
si0=l18;
si1=l20;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l17;
si1=l19;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=l21;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+112U,sj1);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+60U);
l11=si0;
si1=2U;
si0=si0 == si1;
if(si0){
goto L5;
}
si0=l1;
si1=l3;
sj1=i64_load(&i->m0,(U64)si1+112U);
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l1;
si1=l11;
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
si1=20U;
si0+=si1;
si1=l3;
si2=128U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
si1=12U;
si0+=si1;
si1=l3;
si2=120U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
goto L4;
L5:;
si0=l1;
si1=l4;
i32_store(&i->m0,(U64)si0+16U,si1);
L4:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+8U);
l1=si0;
si0=l0;
si1=l2;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l0;
si1=l14;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l0;
si1=l1;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l0;
si1=l15;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l16;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l3;
sj1=i64_load(&i->m0,(U64)si1+40U);
i64_store(&i->m0,(U64)si0+20U,sj1);
si0=l0;
si1=28U;
si0+=si1;
si1=l3;
si2=40U;
si1+=si2;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l3;
sj1=i64_load(&i->m0,(U64)si1+24U);
i64_store(&i->m0,(U64)si0+32U,sj1);
si0=l0;
si1=40U;
si0+=si1;
si1=l3;
si2=24U;
si1+=si2;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l3;
sj1=i64_load(&i->m0,(U64)si1+8U);
i64_store(&i->m0,(U64)si0+44U,sj1);
si0=l0;
si1=52U;
si0+=si1;
si1=l3;
si2=8U;
si1+=si2;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=160U;
si0+=si1;
i->g0=si0;
goto L0;
L3:;
si0=8U;
si1=56U;
f52(i,si0,si1);
UNREACHABLE;
L0:;
}

void f1639(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U64 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 l8=0;
U32 l9=0;
U32 l10=0;
U32 l11=0;
U32 l12=0;
U32 si0,si1,si2,si3;
U64 sj0,sj1;
si0=i->g0;
si1=128U;
si0-=si1;
l3=si0;
i->g0=si0;
si0=l2;
si1=16U;
si0+=si1;
sj0=i64_load(&i->m0,(U64)si0);
l4=sj0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+4U);
l5=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+12U);
l6=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+8U);
l7=si0;
si0=l3;
si1=8U;
si0+=si1;
si1=l1;
si2=l2;
si2=i32_load(&i->m0,(U64)si2);
l2=si2;
f3534(i,si0,si1,si2);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+8U);
l8=si0;
si0=l3;
si1=72U;
si0+=si1;
si1=8U;
si0+=si1;
l9=si0;
si1=l3;
si2=8U;
si1+=si2;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=72U;
si0+=si1;
si1=16U;
si0+=si1;
l10=si0;
si1=l3;
si2=32U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=l3;
si2=8U;
si1+=si2;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+72U,sj1);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+12U);
l11=si0;
si1=2U;
si0=si0 == si1;
if(si0){
goto L2;
}
si0=l1;
si1=l3;
sj1=i64_load(&i->m0,(U64)si1+72U);
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l1;
si1=l11;
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
si1=20U;
si0+=si1;
si1=l10;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
si1=12U;
si0+=si1;
si1=l9;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
goto L1;
L2:;
si0=l1;
si1=l2;
i32_store(&i->m0,(U64)si0+16U,si1);
L1:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+8U);
l9=si0;
si0=l7;
if(si0){
goto L5;
}
si0=0U;
l2=si0;
goto L4;
L5:;
si0=l3;
si1=72U;
si0+=si1;
si1=48U;
si0+=si1;
si1=l7;
si2=48U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=72U;
si0+=si1;
si1=40U;
si0+=si1;
si1=l7;
si2=40U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=72U;
si0+=si1;
si1=32U;
si0+=si1;
si1=l7;
si2=32U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=72U;
si0+=si1;
si1=24U;
si0+=si1;
si1=l7;
si2=24U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=72U;
si0+=si1;
si1=16U;
si0+=si1;
si1=l7;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=72U;
si0+=si1;
si1=8U;
si0+=si1;
si1=l7;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=l7;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+72U,sj1);
si0=l3;
si1=8U;
si0+=si1;
si1=l1;
si2=l3;
si3=72U;
si2+=si3;
f1635(i,si0,si1,si2);
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=64U;
si0=f15269(i,si0);
l2=si0;
si0=!(si0);
if(si0){
goto L3;
}
si0=l2;
si1=l3;
sj1=i64_load(&i->m0,(U64)si1+8U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=56U;
si0+=si1;
si1=l3;
si2=8U;
si1+=si2;
si2=56U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=48U;
si0+=si1;
si1=l3;
si2=8U;
si1+=si2;
si2=48U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=40U;
si0+=si1;
si1=l3;
si2=8U;
si1+=si2;
si2=40U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=32U;
si0+=si1;
si1=l3;
si2=8U;
si1+=si2;
si2=32U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=24U;
si0+=si1;
si1=l3;
si2=8U;
si1+=si2;
si2=24U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=16U;
si0+=si1;
si1=l3;
si2=8U;
si1+=si2;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=8U;
si0+=si1;
si1=l3;
si2=8U;
si1+=si2;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l7;
f15271(i,si0);
L4:;
si0=l3;
si1=8U;
si0+=si1;
si1=l1;
si2=l5;
f3534(i,si0,si1,si2);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+8U);
l7=si0;
si0=l3;
si1=72U;
si0+=si1;
si1=8U;
si0+=si1;
l10=si0;
si1=l3;
si2=8U;
si1+=si2;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=72U;
si0+=si1;
si1=16U;
si0+=si1;
l11=si0;
si1=l3;
si2=32U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=l3;
si2=8U;
si1+=si2;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+72U,sj1);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+12U);
l12=si0;
si1=2U;
si0=si0 == si1;
if(si0){
goto L7;
}
si0=l1;
si1=l3;
sj1=i64_load(&i->m0,(U64)si1+72U);
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l1;
si1=l12;
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
si1=20U;
si0+=si1;
si1=l11;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
si1=12U;
si0+=si1;
si1=l10;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
goto L6;
L7:;
si0=l1;
si1=l5;
i32_store(&i->m0,(U64)si0+16U,si1);
L6:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+8U);
l1=si0;
si0=l0;
sj1=l4;
i64_store(&i->m0,(U64)si0+24U,sj1);
si0=l0;
si1=l6;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l0;
si1=l2;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l0;
si1=l7;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l0;
si1=l1;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l0;
si1=l8;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l9;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=128U;
si0+=si1;
i->g0=si0;
goto L0;
L3:;
si0=8U;
si1=64U;
f52(i,si0,si1);
UNREACHABLE;
L0:;
}

U32 f1640(rustpythonInstance*i,U32 l0,U32 l1) {
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
si0=i32_load(&i->m0,(U64)si0);
l0=si0;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
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
L2:;
{
si0=l2;
si1=l0;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l2;
si1=l2;
si2=12U;
si1+=si2;
si2=1288612U;
f717(i,si0,si1,si2);
si0=l0;
si1=1U;
si0+=si1;
l0=si0;
si0=l3;
si1=-1U;
si0+=si1;
l3=si0;
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

U32 f1641(rustpythonInstance*i,U32 l0,U32 l1) {
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
si0=i32_load(&i->m0,(U64)si0);
l0=si0;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
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
si1=24U;
si0*=si1;
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
si2=1288596U;
f717(i,si0,si1,si2);
si0=l0;
si1=24U;
si0+=si1;
l0=si0;
si0=l1;
si1=-24U;
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

void f1642(rustpythonInstance*i,U32 l0) {
U32 l1=0;
U32 l2=0;
U32 l3=0;
U32 si0,si1,si2,si3;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si1=-2U;
si0+=si1;
l2=si0;
si1=4U;
si2=l2;
si3=9U;
si2=si2 < si3;
si0=si2?si0:si1;
si1=-2U;
si0+=si1;
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
goto L1;
}
L6:;
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
l3=si0;
goto L2;
L5:;
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
l3=si0;
goto L2;
L4:;
si0=l1;
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
si0=l0;
si0=i32_load(&i->m0,(U64)si0+4U);
l3=si0;
goto L2;
L3:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+4U);
l3=si0;
si0=l0;
si1=12U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si0=!(si0);
if(si0){
goto L7;
}
si0=l3;
l2=si0;
L8:;
{
si0=l2;
f1642(i,si0);
si0=l2;
si1=24U;
si0+=si1;
l2=si0;
si0=l1;
si1=-1U;
si0+=si1;
l1=si0;
if(si0){
goto L8;
}
}
L7:;
si0=l0;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L1;
}
L2:;
si0=l3;
f15271(i,si0);
L1:;
L0:;
}

void f1643(rustpythonInstance*i,U32 l0) {
U32 l1=0;
U32 l2=0;
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 si0,si1,si2,si3;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
si1=-11U;
si0+=si1;
l1=si0;
si1=19U;
si2=l1;
si3=27U;
si2=si2 < si3;
si0=si2?si0:si1;
switch(si0){
case 0:
goto L27;
case 1:
goto L26;
case 2:
goto L25;
case 3:
goto L24;
case 4:
goto L23;
case 5:
goto L22;
case 6:
goto L21;
case 7:
goto L20;
case 8:
goto L19;
case 9:
goto L18;
case 10:
goto L17;
case 11:
goto L16;
case 12:
goto L15;
case 13:
goto L14;
case 14:
goto L13;
case 15:
goto L12;
case 16:
goto L11;
case 17:
goto L10;
case 18:
goto L9;
case 19:
goto L8;
case 20:
goto L7;
case 21:
goto L6;
case 22:
goto L5;
case 23:
goto L4;
case 24:
goto L3;
case 25:
goto L2;
default:
goto L28;
}
L28:;
si0=l0;
si1=12U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si0=!(si0);
if(si0){
goto L29;
}
si0=l1;
f1643(i,si0);
si0=l1;
f15271(i,si0);
L29:;
si0=l0;
si1=16U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si0=!(si0);
if(si0){
goto L30;
}
si0=l1;
f1643(i,si0);
si0=l1;
f15271(i,si0);
L30:;
si0=l0;
si1=20U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si0=!(si0);
if(si0){
goto L1;
}
si0=l1;
f1643(i,si0);
si0=l1;
f15271(i,si0);
goto L0;
L27:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+4U);
l2=si0;
si0=l0;
si1=12U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=!(si0);
if(si0){
goto L31;
}
si0=l2;
l1=si0;
L32:;
{
si0=l1;
f1643(i,si0);
si0=l1;
si1=48U;
si0+=si1;
l1=si0;
si0=l3;
si1=-1U;
si0+=si1;
l3=si0;
if(si0){
goto L32;
}
}
L31:;
si0=l0;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L1;
}
si0=l2;
f15271(i,si0);
goto L0;
L26:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+4U);
l1=si0;
f1643(i,si0);
si0=l1;
f15271(i,si0);
si0=l0;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
f1643(i,si0);
si0=l1;
f15271(i,si0);
goto L0;
L25:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+4U);
l1=si0;
f1643(i,si0);
si0=l1;
f15271(i,si0);
si0=l0;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
f1643(i,si0);
si0=l1;
f15271(i,si0);
goto L0;
L24:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+4U);
l1=si0;
f1643(i,si0);
si0=l1;
f15271(i,si0);
goto L0;
L23:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+4U);
l4=si0;
si0=i32_load(&i->m0,(U64)si0+8U);
l2=si0;
si0=!(si0);
if(si0){
goto L33;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
L34:;
{
si0=l1;
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L35;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
f15271(i,si0);
L35:;
si0=l1;
si1=20U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=!(si0);
if(si0){
goto L36;
}
si0=l3;
f1643(i,si0);
si0=l3;
f15271(i,si0);
L36:;
si0=l1;
si1=24U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=!(si0);
if(si0){
goto L37;
}
si0=l1;
si1=28U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L37;
}
si0=l3;
f15271(i,si0);
L37:;
si0=l1;
si1=36U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=!(si0);
if(si0){
goto L38;
}
si0=l3;
f1643(i,si0);
si0=l3;
f15271(i,si0);
L38:;
si0=l1;
si1=40U;
si0+=si1;
l1=si0;
si0=l2;
si1=-1U;
si0+=si1;
l2=si0;
if(si0){
goto L34;
}
}
L33:;
si0=l4;
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L39;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
f15271(i,si0);
L39:;
si0=l4;
si1=20U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si0=!(si0);
if(si0){
goto L40;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0+12U);
l1=si0;
L41:;
{
si0=l1;
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L42;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
f15271(i,si0);
L42:;
si0=l1;
si1=20U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=!(si0);
if(si0){
goto L43;
}
si0=l3;
f1643(i,si0);
si0=l3;
f15271(i,si0);
L43:;
si0=l1;
si1=24U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=!(si0);
if(si0){
goto L44;
}
si0=l1;
si1=28U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L44;
}
si0=l3;
f15271(i,si0);
L44:;
si0=l1;
si1=36U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=!(si0);
if(si0){
goto L45;
}
si0=l3;
f1643(i,si0);
si0=l3;
f15271(i,si0);
L45:;
si0=l1;
si1=40U;
si0+=si1;
l1=si0;
si0=l2;
si1=-1U;
si0+=si1;
l2=si0;
if(si0){
goto L41;
}
}
L40:;
si0=l4;
si1=16U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L46;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0+12U);
f15271(i,si0);
L46:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+36U);
l1=si0;
si0=!(si0);
if(si0){
goto L47;
}
si0=l1;
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L48;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
f15271(i,si0);
L48:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+20U);
si0=!(si0);
if(si0){
goto L49;
}
si0=l1;
si1=20U;
si0+=si1;
f1644(i,si0);
L49:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+24U);
l3=si0;
si0=!(si0);
if(si0){
goto L50;
}
si0=l1;
si1=28U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L50;
}
si0=l3;
f15271(i,si0);
L50:;
si0=l1;
f15271(i,si0);
L47:;
si0=l4;
si1=32U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si0=!(si0);
if(si0){
goto L51;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0+24U);
l1=si0;
L52:;
{
si0=l1;
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L53;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
f15271(i,si0);
L53:;
si0=l1;
si1=20U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=!(si0);
if(si0){
goto L54;
}
si0=l3;
f1643(i,si0);
si0=l3;
f15271(i,si0);
L54:;
si0=l1;
si1=24U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=!(si0);
if(si0){
goto L55;
}
si0=l1;
si1=28U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L55;
}
si0=l3;
f15271(i,si0);
L55:;
si0=l1;
si1=36U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=!(si0);
if(si0){
goto L56;
}
si0=l3;
f1643(i,si0);
si0=l3;
f15271(i,si0);
L56:;
si0=l1;
si1=40U;
si0+=si1;
l1=si0;
si0=l2;
si1=-1U;
si0+=si1;
l2=si0;
if(si0){
goto L52;
}
}
L51:;
si0=l4;
si1=28U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L57;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0+24U);
f15271(i,si0);
L57:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+40U);
l1=si0;
si0=!(si0);
if(si0){
goto L58;
}
si0=l1;
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L59;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
f15271(i,si0);
L59:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+20U);
si0=!(si0);
if(si0){
goto L60;
}
si0=l1;
si1=20U;
si0+=si1;
f1644(i,si0);
L60:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+24U);
l3=si0;
si0=!(si0);
if(si0){
goto L61;
}
si0=l1;
si1=28U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L61;
}
si0=l3;
f15271(i,si0);
L61:;
si0=l1;
f15271(i,si0);
L58:;
si0=l4;
f15271(i,si0);
si0=l0;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
f1643(i,si0);
si0=l1;
f15271(i,si0);
goto L0;
L22:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+4U);
l1=si0;
f1643(i,si0);
si0=l1;
f15271(i,si0);
si0=l0;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
f1643(i,si0);
si0=l1;
f15271(i,si0);
si0=l0;
si1=12U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
f1643(i,si0);
si0=l1;
f15271(i,si0);
goto L0;
L21:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+4U);
l2=si0;
si0=l0;
si1=12U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=!(si0);
if(si0){
goto L62;
}
si0=l2;
l1=si0;
L63:;
{
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
si1=38U;
si0=si0 == si1;
if(si0){
goto L64;
}
si0=l1;
f1643(i,si0);
L64:;
si0=l1;
si1=48U;
si0+=si1;
l1=si0;
si0=l3;
si1=-1U;
si0+=si1;
l3=si0;
if(si0){
goto L63;
}
}
L62:;
si0=l0;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L65;
}
si0=l2;
f15271(i,si0);
L65:;
si0=l0;
si1=16U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si0=l0;
si1=24U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=!(si0);
if(si0){
goto L66;
}
si0=l2;
l1=si0;
L67:;
{
si0=l1;
f1643(i,si0);
si0=l1;
si1=48U;
si0+=si1;
l1=si0;
si0=l3;
si1=-1U;
si0+=si1;
l3=si0;
if(si0){
goto L67;
}
}
L66:;
si0=l0;
si1=20U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L1;
}
si0=l2;
f15271(i,si0);
goto L0;
L20:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+4U);
l2=si0;
si0=l0;
si1=12U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=!(si0);
if(si0){
goto L68;
}
si0=l2;
l1=si0;
L69:;
{
si0=l1;
f1643(i,si0);
si0=l1;
si1=48U;
si0+=si1;
l1=si0;
si0=l3;
si1=-1U;
si0+=si1;
l3=si0;
if(si0){
goto L69;
}
}
L68:;
si0=l0;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L1;
}
si0=l2;
f15271(i,si0);
goto L0;
L19:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+4U);
l1=si0;
f1643(i,si0);
si0=l1;
f15271(i,si0);
si0=l0;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si0=l0;
si1=16U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si0=!(si0);
if(si0){
goto L70;
}
si0=0U;
l2=si0;
L71:;
{
si0=l5;
si1=l2;
si2=112U;
si1*=si2;
si0+=si1;
l1=si0;
f1643(i,si0);
si0=l1;
si1=48U;
si0+=si1;
f1643(i,si0);
si0=l1;
si1=96U;
si0+=si1;
l4=si0;
si0=l1;
si1=104U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=!(si0);
if(si0){
goto L72;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+96U);
l1=si0;
L73:;
{
si0=l1;
f1643(i,si0);
si0=l1;
si1=48U;
si0+=si1;
l1=si0;
si0=l3;
si1=-1U;
si0+=si1;
l3=si0;
if(si0){
goto L73;
}
}
L72:;
si0=l2;
si1=1U;
si0+=si1;
l2=si0;
si0=l4;
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L74;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
f15271(i,si0);
L74:;
si0=l2;
si1=l6;
si0=si0 != si1;
if(si0){
goto L71;
}
}
L70:;
si0=l0;
si1=12U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L1;
}
si0=l5;
f15271(i,si0);
goto L0;
L18:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+4U);
l1=si0;
f1643(i,si0);
si0=l1;
f15271(i,si0);
si0=l0;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si0=l0;
si1=16U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si0=!(si0);
if(si0){
goto L75;
}
si0=0U;
l2=si0;
L76:;
{
si0=l5;
si1=l2;
si2=112U;
si1*=si2;
si0+=si1;
l1=si0;
f1643(i,si0);
si0=l1;
si1=48U;
si0+=si1;
f1643(i,si0);
si0=l1;
si1=96U;
si0+=si1;
l4=si0;
si0=l1;
si1=104U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=!(si0);
if(si0){
goto L77;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+96U);
l1=si0;
L78:;
{
si0=l1;
f1643(i,si0);
si0=l1;
si1=48U;
si0+=si1;
l1=si0;
si0=l3;
si1=-1U;
si0+=si1;
l3=si0;
if(si0){
goto L78;
}
}
L77:;
si0=l2;
si1=1U;
si0+=si1;
l2=si0;
si0=l4;
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L79;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
f15271(i,si0);
L79:;
si0=l2;
si1=l6;
si0=si0 != si1;
if(si0){
goto L76;
}
}
L75:;
si0=l0;
si1=12U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L1;
}
si0=l5;
f15271(i,si0);
goto L0;
L17:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+4U);
l1=si0;
f1643(i,si0);
si0=l1;
f15271(i,si0);
si0=l0;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
f1643(i,si0);
si0=l1;
f15271(i,si0);
si0=l0;
si1=12U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si0=l0;
si1=20U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si0=!(si0);
if(si0){
goto L80;
}
si0=0U;
l2=si0;
L81:;
{
si0=l5;
si1=l2;
si2=112U;
si1*=si2;
si0+=si1;
l1=si0;
f1643(i,si0);
si0=l1;
si1=48U;
si0+=si1;
f1643(i,si0);
si0=l1;
si1=96U;
si0+=si1;
l4=si0;
si0=l1;
si1=104U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=!(si0);
if(si0){
goto L82;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+96U);
l1=si0;
L83:;
{
si0=l1;
f1643(i,si0);
si0=l1;
si1=48U;
si0+=si1;
l1=si0;
si0=l3;
si1=-1U;
si0+=si1;
l3=si0;
if(si0){
goto L83;
}
}
L82:;
si0=l2;
si1=1U;
si0+=si1;
l2=si0;
si0=l4;
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L84;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
f15271(i,si0);
L84:;
si0=l2;
si1=l6;
si0=si0 != si1;
if(si0){
goto L81;
}
}
L80:;
si0=l0;
si1=16U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L1;
}
si0=l5;
f15271(i,si0);
goto L0;
L16:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+4U);
l1=si0;
f1643(i,si0);
si0=l1;
f15271(i,si0);
si0=l0;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si0=l0;
si1=16U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si0=!(si0);
if(si0){
goto L85;
}
si0=0U;
l2=si0;
L86:;
{
si0=l5;
si1=l2;
si2=112U;
si1*=si2;
si0+=si1;
l1=si0;
f1643(i,si0);
si0=l1;
si1=48U;
si0+=si1;
f1643(i,si0);
si0=l1;
si1=96U;
si0+=si1;
l4=si0;
si0=l1;
si1=104U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=!(si0);
if(si0){
goto L87;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+96U);
l1=si0;
L88:;
{
si0=l1;
f1643(i,si0);
si0=l1;
si1=48U;
si0+=si1;
l1=si0;
si0=l3;
si1=-1U;
si0+=si1;
l3=si0;
if(si0){
goto L88;
}
}
L87:;
si0=l2;
si1=1U;
si0+=si1;
l2=si0;
si0=l4;
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L89;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
f15271(i,si0);
L89:;
si0=l2;
si1=l6;
si0=si0 != si1;
if(si0){
goto L86;
}
}
L85:;
si0=l0;
si1=12U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L1;
}
si0=l5;
f15271(i,si0);
goto L0;
L15:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+4U);
l1=si0;
f1643(i,si0);
si0=l1;
f15271(i,si0);
goto L0;
L14:;
si0=l0;
si1=12U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si0=!(si0);
if(si0){
goto L1;
}
si0=l1;
f1643(i,si0);
si0=l1;
f15271(i,si0);
goto L0;
L13:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+4U);
l1=si0;
f1643(i,si0);
si0=l1;
f15271(i,si0);
goto L0;
L12:;
si0=l0;
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
f1643(i,si0);
si0=l1;
f15271(i,si0);
si0=l0;
si1=12U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L90;
}
si0=l0;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
f15271(i,si0);
L90:;
si0=l0;
si1=20U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si0=l0;
si1=28U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=!(si0);
if(si0){
goto L91;
}
si0=l2;
l1=si0;
L92:;
{
si0=l1;
f1643(i,si0);
si0=l1;
si1=48U;
si0+=si1;
l1=si0;
si0=l3;
si1=-1U;
si0+=si1;
l3=si0;
if(si0){
goto L92;
}
}
L91:;
si0=l0;
si1=24U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L1;
}
si0=l2;
f15271(i,si0);
goto L0;
L11:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+4U);
l1=si0;
f1643(i,si0);
si0=l1;
f15271(i,si0);
si0=l0;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si0=l0;
si1=16U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=!(si0);
if(si0){
goto L93;
}
si0=l2;
l1=si0;
L94:;
{
si0=l1;
f1643(i,si0);
si0=l1;
si1=48U;
si0+=si1;
l1=si0;
si0=l3;
si1=-1U;
si0+=si1;
l3=si0;
if(si0){
goto L94;
}
}
L93:;
si0=l0;
si1=12U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L95;
}
si0=l2;
f15271(i,si0);
L95:;
si0=l0;
si1=20U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
si0=l0;
si1=28U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=!(si0);
if(si0){
goto L96;
}
si0=l4;
l1=si0;
L97:;
{
si0=l1;
si1=56U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si0=!(si0);
if(si0){
goto L98;
}
si0=l1;
si1=60U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L98;
}
si0=l2;
f15271(i,si0);
L98:;
si0=l1;
f1643(i,si0);
si0=l1;
si1=72U;
si0+=si1;
l1=si0;
si0=l3;
si1=-1U;
si0+=si1;
l3=si0;
if(si0){
goto L97;
}
}
L96:;
si0=l0;
si1=24U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L1;
}
si0=l4;
f15271(i,si0);
goto L0;
L10:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+4U);
l1=si0;
f1643(i,si0);
si0=l1;
f15271(i,si0);
si0=l0;
si1=16U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si0=!(si0);
if(si0){
goto L1;
}
si0=l1;
f1643(i,si0);
si0=l1;
f15271(i,si0);
goto L0;
L9:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+4U);
l2=si0;
si0=l0;
si1=12U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=!(si0);
if(si0){
goto L99;
}
si0=l2;
l1=si0;
L100:;
{
si0=l1;
f1643(i,si0);
si0=l1;
si1=48U;
si0+=si1;
l1=si0;
si0=l3;
si1=-1U;
si0+=si1;
l3=si0;
if(si0){
goto L100;
}
}
L99:;
si0=l0;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L1;
}
si0=l2;
f15271(i,si0);
goto L0;
L8:;
si0=l0;
f1642(i,si0);
si0=l0;
si0=i32_load(&i->m0,(U64)si0+32U);
l1=si0;
si0=!(si0);
if(si0){
goto L1;
}
si0=l0;
si1=36U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L1;
}
si0=l1;
f15271(i,si0);
goto L0;
L7:;
si0=l0;
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
f1643(i,si0);
si0=l1;
f15271(i,si0);
si0=l0;
si1=12U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L1;
}
si0=l0;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
f15271(i,si0);
goto L0;
L6:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+4U);
l1=si0;
f1643(i,si0);
si0=l1;
f15271(i,si0);
si0=l0;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
f1643(i,si0);
si0=l1;
f15271(i,si0);
goto L0;
L5:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+4U);
l1=si0;
f1643(i,si0);
si0=l1;
f15271(i,si0);
goto L0;
L4:;
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
goto L0;
L3:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+4U);
l2=si0;
si0=l0;
si1=12U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=!(si0);
if(si0){
goto L101;
}
si0=l2;
l1=si0;
L102:;
{
si0=l1;
f1643(i,si0);
si0=l1;
si1=48U;
si0+=si1;
l1=si0;
si0=l3;
si1=-1U;
si0+=si1;
l3=si0;
if(si0){
goto L102;
}
}
L101:;
si0=l0;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L1;
}
si0=l2;
f15271(i,si0);
goto L0;
L2:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+4U);
l2=si0;
si0=l0;
si1=12U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=!(si0);
if(si0){
goto L103;
}
si0=l2;
l1=si0;
L104:;
{
si0=l1;
f1643(i,si0);
si0=l1;
si1=48U;
si0+=si1;
l1=si0;
si0=l3;
si1=-1U;
si0+=si1;
l3=si0;
if(si0){
goto L104;
}
}
L103:;
si0=l0;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L1;
}
si0=l2;
f15271(i,si0);
L1:;
L0:;
}

void f1644(rustpythonInstance*i,U32 l0) {
U32 si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
l0=si0;
f1643(i,si0);
si0=l0;
f15271(i,si0);
L0:;
}

void f1645(rustpythonInstance*i,U32 l0) {
U32 l1=0;
U32 l2=0;
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 si0,si1,si2;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
switch(si0){
case 0:
goto L25;
case 1:
goto L24;
case 2:
goto L23;
case 3:
goto L22;
case 4:
goto L21;
case 5:
goto L20;
case 6:
goto L19;
case 7:
goto L18;
case 8:
goto L17;
case 9:
goto L16;
case 10:
goto L15;
case 11:
goto L14;
case 12:
goto L13;
case 13:
goto L12;
case 14:
goto L11;
case 15:
goto L10;
case 16:
goto L9;
case 17:
goto L8;
case 18:
goto L7;
case 19:
goto L6;
case 20:
goto L5;
case 21:
goto L4;
case 22:
goto L3;
case 23:
goto L2;
default:
goto L1;
}
L25:;
si0=l0;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L26;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+4U);
f15271(i,si0);
L26:;
si0=l0;
si1=16U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
f1646(i,si0);
si0=l0;
si1=20U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si0=l0;
si1=28U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si0=!(si0);
if(si0){
goto L27;
}
si0=l1;
l3=si0;
L28:;
{
si0=l3;
f1645(i,si0);
si0=l3;
si1=72U;
si0+=si1;
l3=si0;
si0=l2;
si1=-1U;
si0+=si1;
l2=si0;
if(si0){
goto L28;
}
}
L27:;
si0=l0;
si1=24U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L29;
}
si0=l1;
f15271(i,si0);
L29:;
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
goto L30;
}
si0=l1;
l3=si0;
L31:;
{
si0=l3;
f1643(i,si0);
si0=l3;
si1=48U;
si0+=si1;
l3=si0;
si0=l2;
si1=-1U;
si0+=si1;
l2=si0;
if(si0){
goto L31;
}
}
L30:;
si0=l0;
si1=36U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L32;
}
si0=l1;
f15271(i,si0);
L32:;
si0=l0;
si1=52U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=!(si0);
if(si0){
goto L33;
}
si0=l3;
f1643(i,si0);
si0=l3;
f15271(i,si0);
L33:;
si0=l0;
si1=56U;
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
si0=!(si0);
if(si0){
goto L1;
}
si0=l3;
f15271(i,si0);
goto L0;
L24:;
si0=l0;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L34;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+4U);
f15271(i,si0);
L34:;
si0=l0;
si1=16U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
f1646(i,si0);
si0=l0;
si1=20U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si0=l0;
si1=28U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si0=!(si0);
if(si0){
goto L35;
}
si0=l1;
l3=si0;
L36:;
{
si0=l3;
f1645(i,si0);
si0=l3;
si1=72U;
si0+=si1;
l3=si0;
si0=l2;
si1=-1U;
si0+=si1;
l2=si0;
if(si0){
goto L36;
}
}
L35:;
si0=l0;
si1=24U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L37;
}
si0=l1;
f15271(i,si0);
L37:;
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
goto L38;
}
si0=l1;
l3=si0;
L39:;
{
si0=l3;
f1643(i,si0);
si0=l3;
si1=48U;
si0+=si1;
l3=si0;
si0=l2;
si1=-1U;
si0+=si1;
l2=si0;
if(si0){
goto L39;
}
}
L38:;
si0=l0;
si1=36U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L40;
}
si0=l1;
f15271(i,si0);
L40:;
si0=l0;
si1=52U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=!(si0);
if(si0){
goto L41;
}
si0=l3;
f1643(i,si0);
si0=l3;
f15271(i,si0);
L41:;
si0=l0;
si1=56U;
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
si0=!(si0);
if(si0){
goto L1;
}
si0=l3;
f15271(i,si0);
goto L0;
L23:;
si0=l0;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L42;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+4U);
f15271(i,si0);
L42:;
si0=l0;
si1=16U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si0=l0;
si1=24U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si0=!(si0);
if(si0){
goto L43;
}
si0=l1;
l3=si0;
L44:;
{
si0=l3;
f1643(i,si0);
si0=l3;
si1=48U;
si0+=si1;
l3=si0;
si0=l2;
si1=-1U;
si0+=si1;
l2=si0;
if(si0){
goto L44;
}
}
L43:;
si0=l0;
si1=20U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L45;
}
si0=l1;
f15271(i,si0);
L45:;
si0=l0;
si1=28U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
si0=l0;
si1=36U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si0=!(si0);
if(si0){
goto L46;
}
si0=l4;
l3=si0;
L47:;
{
si0=l3;
si1=56U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si0=!(si0);
if(si0){
goto L48;
}
si0=l3;
si1=60U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L48;
}
si0=l1;
f15271(i,si0);
L48:;
si0=l3;
f1643(i,si0);
si0=l3;
si1=72U;
si0+=si1;
l3=si0;
si0=l2;
si1=-1U;
si0+=si1;
l2=si0;
if(si0){
goto L47;
}
}
L46:;
si0=l0;
si1=32U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L49;
}
si0=l4;
f15271(i,si0);
L49:;
si0=l0;
si1=40U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si0=l0;
si1=48U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si0=!(si0);
if(si0){
goto L50;
}
si0=l1;
l3=si0;
L51:;
{
si0=l3;
f1645(i,si0);
si0=l3;
si1=72U;
si0+=si1;
l3=si0;
si0=l2;
si1=-1U;
si0+=si1;
l2=si0;
if(si0){
goto L51;
}
}
L50:;
si0=l0;
si1=44U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L52;
}
si0=l1;
f15271(i,si0);
L52:;
si0=l0;
si1=52U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si0=l0;
si1=60U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si0=!(si0);
if(si0){
goto L53;
}
si0=l1;
l3=si0;
L54:;
{
si0=l3;
f1643(i,si0);
si0=l3;
si1=48U;
si0+=si1;
l3=si0;
si0=l2;
si1=-1U;
si0+=si1;
l2=si0;
if(si0){
goto L54;
}
}
L53:;
si0=l0;
si1=56U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L1;
}
si0=l1;
f15271(i,si0);
goto L0;
L22:;
si0=l0;
si1=12U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=!(si0);
if(si0){
goto L1;
}
si0=l3;
f1643(i,si0);
si0=l3;
f15271(i,si0);
goto L0;
L21:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+4U);
l1=si0;
si0=l0;
si1=12U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si0=!(si0);
if(si0){
goto L55;
}
si0=l1;
l3=si0;
L56:;
{
si0=l3;
f1643(i,si0);
si0=l3;
si1=48U;
si0+=si1;
l3=si0;
si0=l2;
si1=-1U;
si0+=si1;
l2=si0;
if(si0){
goto L56;
}
}
L55:;
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
goto L0;
L20:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+4U);
l1=si0;
si0=l0;
si1=12U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si0=!(si0);
if(si0){
goto L57;
}
si0=l1;
l3=si0;
L58:;
{
si0=l3;
f1643(i,si0);
si0=l3;
si1=48U;
si0+=si1;
l3=si0;
si0=l2;
si1=-1U;
si0+=si1;
l2=si0;
if(si0){
goto L58;
}
}
L57:;
si0=l0;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L59;
}
si0=l1;
f15271(i,si0);
L59:;
si0=l0;
si1=16U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
f1643(i,si0);
si0=l3;
f15271(i,si0);
si0=l0;
si1=28U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=!(si0);
if(si0){
goto L1;
}
si0=l0;
si1=32U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L1;
}
si0=l3;
f15271(i,si0);
goto L0;
L19:;
si0=l0;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=l0;
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
f1643(i,si0);
si0=l2;
f15271(i,si0);
si0=l3;
f1643(i,si0);
si0=l3;
f15271(i,si0);
goto L0;
L18:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+4U);
l3=si0;
f1643(i,si0);
si0=l3;
f15271(i,si0);
si0=l0;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
f1643(i,si0);
si0=l3;
f15271(i,si0);
si0=l0;
si1=20U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=!(si0);
if(si0){
goto L1;
}
si0=l3;
f1643(i,si0);
si0=l3;
f15271(i,si0);
goto L0;
L17:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+4U);
l3=si0;
f1643(i,si0);
si0=l3;
f15271(i,si0);
si0=l0;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
f1643(i,si0);
si0=l3;
f15271(i,si0);
si0=l0;
si1=12U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si0=l0;
si1=20U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si0=!(si0);
if(si0){
goto L60;
}
si0=l1;
l3=si0;
L61:;
{
si0=l3;
f1645(i,si0);
si0=l3;
si1=72U;
si0+=si1;
l3=si0;
si0=l2;
si1=-1U;
si0+=si1;
l2=si0;
if(si0){
goto L61;
}
}
L60:;
si0=l0;
si1=16U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L62;
}
si0=l1;
f15271(i,si0);
L62:;
si0=l0;
si1=24U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si0=l0;
si1=32U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si0=!(si0);
if(si0){
goto L63;
}
si0=l1;
l3=si0;
L64:;
{
si0=l3;
f1645(i,si0);
si0=l3;
si1=72U;
si0+=si1;
l3=si0;
si0=l2;
si1=-1U;
si0+=si1;
l2=si0;
if(si0){
goto L64;
}
}
L63:;
si0=l0;
si1=28U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L65;
}
si0=l1;
f15271(i,si0);
L65:;
si0=l0;
si1=44U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=!(si0);
if(si0){
goto L1;
}
si0=l0;
si1=48U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L1;
}
si0=l3;
f15271(i,si0);
goto L0;
L16:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+4U);
l3=si0;
f1643(i,si0);
si0=l3;
f15271(i,si0);
si0=l0;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
f1643(i,si0);
si0=l3;
f15271(i,si0);
si0=l0;
si1=12U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si0=l0;
si1=20U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si0=!(si0);
if(si0){
goto L66;
}
si0=l1;
l3=si0;
L67:;
{
si0=l3;
f1645(i,si0);
si0=l3;
si1=72U;
si0+=si1;
l3=si0;
si0=l2;
si1=-1U;
si0+=si1;
l2=si0;
if(si0){
goto L67;
}
}
L66:;
si0=l0;
si1=16U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L68;
}
si0=l1;
f15271(i,si0);
L68:;
si0=l0;
si1=24U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si0=l0;
si1=32U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si0=!(si0);
if(si0){
goto L69;
}
si0=l1;
l3=si0;
L70:;
{
si0=l3;
f1645(i,si0);
si0=l3;
si1=72U;
si0+=si1;
l3=si0;
si0=l2;
si1=-1U;
si0+=si1;
l2=si0;
if(si0){
goto L70;
}
}
L69:;
si0=l0;
si1=28U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L71;
}
si0=l1;
f15271(i,si0);
L71:;
si0=l0;
si1=44U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=!(si0);
if(si0){
goto L1;
}
si0=l0;
si1=48U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L1;
}
si0=l3;
f15271(i,si0);
goto L0;
L15:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+4U);
l3=si0;
f1643(i,si0);
si0=l3;
f15271(i,si0);
si0=l0;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si0=l0;
si1=16U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si0=!(si0);
if(si0){
goto L72;
}
si0=l1;
l3=si0;
L73:;
{
si0=l3;
f1645(i,si0);
si0=l3;
si1=72U;
si0+=si1;
l3=si0;
si0=l2;
si1=-1U;
si0+=si1;
l2=si0;
if(si0){
goto L73;
}
}
L72:;
si0=l0;
si1=12U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L74;
}
si0=l1;
f15271(i,si0);
L74:;
si0=l0;
si1=20U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si0=l0;
si1=28U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si0=!(si0);
if(si0){
goto L75;
}
si0=l1;
l3=si0;
L76:;
{
si0=l3;
f1645(i,si0);
si0=l3;
si1=72U;
si0+=si1;
l3=si0;
si0=l2;
si1=-1U;
si0+=si1;
l2=si0;
if(si0){
goto L76;
}
}
L75:;
si0=l0;
si1=24U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L1;
}
si0=l1;
f15271(i,si0);
goto L0;
L14:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+4U);
l3=si0;
f1643(i,si0);
si0=l3;
f15271(i,si0);
si0=l0;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si0=l0;
si1=16U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si0=!(si0);
if(si0){
goto L77;
}
si0=l1;
l3=si0;
L78:;
{
si0=l3;
f1645(i,si0);
si0=l3;
si1=72U;
si0+=si1;
l3=si0;
si0=l2;
si1=-1U;
si0+=si1;
l2=si0;
if(si0){
goto L78;
}
}
L77:;
si0=l0;
si1=12U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L79;
}
si0=l1;
f15271(i,si0);
L79:;
si0=l0;
si1=20U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si0=l0;
si1=28U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si0=!(si0);
if(si0){
goto L80;
}
si0=l1;
l3=si0;
L81:;
{
si0=l3;
f1645(i,si0);
si0=l3;
si1=72U;
si0+=si1;
l3=si0;
si0=l2;
si1=-1U;
si0+=si1;
l2=si0;
if(si0){
goto L81;
}
}
L80:;
si0=l0;
si1=24U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L1;
}
si0=l1;
f15271(i,si0);
goto L0;
L13:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+4U);
l4=si0;
si0=l0;
si1=12U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si0=!(si0);
if(si0){
goto L82;
}
si0=l4;
l3=si0;
L83:;
{
si0=l3;
f1643(i,si0);
si0=l3;
si1=48U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si0=!(si0);
if(si0){
goto L84;
}
si0=l2;
f1643(i,si0);
si0=l2;
f15271(i,si0);
L84:;
si0=l3;
si1=56U;
si0+=si1;
l3=si0;
si0=l1;
si1=-1U;
si0+=si1;
l1=si0;
if(si0){
goto L83;
}
}
L82:;
si0=l0;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L85;
}
si0=l4;
f15271(i,si0);
L85:;
si0=l0;
si1=16U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si0=l0;
si1=24U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si0=!(si0);
if(si0){
goto L86;
}
si0=l1;
l3=si0;
L87:;
{
si0=l3;
f1645(i,si0);
si0=l3;
si1=72U;
si0+=si1;
l3=si0;
si0=l2;
si1=-1U;
si0+=si1;
l2=si0;
if(si0){
goto L87;
}
}
L86:;
si0=l0;
si1=20U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L88;
}
si0=l1;
f15271(i,si0);
L88:;
si0=l0;
si1=36U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=!(si0);
if(si0){
goto L1;
}
si0=l0;
si1=40U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L1;
}
si0=l3;
f15271(i,si0);
goto L0;
L12:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+4U);
l4=si0;
si0=l0;
si1=12U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si0=!(si0);
if(si0){
goto L89;
}
si0=l4;
l3=si0;
L90:;
{
si0=l3;
f1643(i,si0);
si0=l3;
si1=48U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si0=!(si0);
if(si0){
goto L91;
}
si0=l2;
f1643(i,si0);
si0=l2;
f15271(i,si0);
L91:;
si0=l3;
si1=56U;
si0+=si1;
l3=si0;
si0=l1;
si1=-1U;
si0+=si1;
l1=si0;
if(si0){
goto L90;
}
}
L89:;
si0=l0;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L92;
}
si0=l4;
f15271(i,si0);
L92:;
si0=l0;
si1=16U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si0=l0;
si1=24U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si0=!(si0);
if(si0){
goto L93;
}
si0=l1;
l3=si0;
L94:;
{
si0=l3;
f1645(i,si0);
si0=l3;
si1=72U;
si0+=si1;
l3=si0;
si0=l2;
si1=-1U;
si0+=si1;
l2=si0;
if(si0){
goto L94;
}
}
L93:;
si0=l0;
si1=20U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L95;
}
si0=l1;
f15271(i,si0);
L95:;
si0=l0;
si1=36U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=!(si0);
if(si0){
goto L1;
}
si0=l0;
si1=40U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L1;
}
si0=l3;
f15271(i,si0);
goto L0;
L11:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+4U);
l3=si0;
f1643(i,si0);
si0=l3;
f15271(i,si0);
si0=l0;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si0=l0;
si1=16U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si0=!(si0);
if(si0){
goto L96;
}
si0=0U;
l1=si0;
L97:;
{
si0=l5;
si1=l1;
si2=72U;
si1*=si2;
si0+=si1;
l3=si0;
f1647(i,si0);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+68U);
l2=si0;
si0=!(si0);
if(si0){
goto L98;
}
si0=l2;
f1643(i,si0);
si0=l2;
f15271(i,si0);
L98:;
si0=l3;
si1=56U;
si0+=si1;
l4=si0;
si0=l3;
si1=64U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si0=!(si0);
if(si0){
goto L99;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0+56U);
l3=si0;
L100:;
{
si0=l3;
f1645(i,si0);
si0=l3;
si1=72U;
si0+=si1;
l3=si0;
si0=l2;
si1=-1U;
si0+=si1;
l2=si0;
if(si0){
goto L100;
}
}
L99:;
si0=l1;
si1=1U;
si0+=si1;
l1=si0;
si0=l4;
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L101;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
f15271(i,si0);
L101:;
si0=l1;
si1=l6;
si0=si0 != si1;
if(si0){
goto L97;
}
}
L96:;
si0=l0;
si1=12U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L1;
}
si0=l5;
f15271(i,si0);
goto L0;
L10:;
si0=l0;
si1=16U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=l0;
si1=12U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si0=!(si0);
if(si0){
goto L102;
}
si0=l2;
f1643(i,si0);
si0=l2;
f15271(i,si0);
L102:;
si0=l3;
si0=!(si0);
if(si0){
goto L1;
}
si0=l3;
f1643(i,si0);
si0=l3;
f15271(i,si0);
goto L0;
L9:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+4U);
l1=si0;
si0=l0;
si1=12U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si0=!(si0);
if(si0){
goto L103;
}
si0=l1;
l3=si0;
L104:;
{
si0=l3;
f1645(i,si0);
si0=l3;
si1=72U;
si0+=si1;
l3=si0;
si0=l2;
si1=-1U;
si0+=si1;
l2=si0;
if(si0){
goto L104;
}
}
L103:;
si0=l0;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L105;
}
si0=l1;
f15271(i,si0);
L105:;
si0=l0;
si1=16U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si0=l0;
si1=24U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si0=!(si0);
if(si0){
goto L106;
}
si0=0U;
l4=si0;
L107:;
{
si0=l5;
si1=l4;
si2=36U;
si1*=si2;
si0+=si1;
l1=si0;
si0=i32_load(&i->m0,(U64)si0+20U);
l3=si0;
si0=!(si0);
if(si0){
goto L108;
}
si0=l3;
f1643(i,si0);
si0=l3;
f15271(i,si0);
L108:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+24U);
l3=si0;
si0=!(si0);
if(si0){
goto L109;
}
si0=l1;
si1=28U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L109;
}
si0=l3;
f15271(i,si0);
L109:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+8U);
l2=si0;
si0=!(si0);
if(si0){
goto L110;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
L111:;
{
si0=l3;
f1645(i,si0);
si0=l3;
si1=72U;
si0+=si1;
l3=si0;
si0=l2;
si1=-1U;
si0+=si1;
l2=si0;
if(si0){
goto L111;
}
}
L110:;
si0=l4;
si1=1U;
si0+=si1;
l4=si0;
si0=l1;
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L112;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
f15271(i,si0);
L112:;
si0=l4;
si1=l6;
si0=si0 != si1;
if(si0){
goto L107;
}
}
L106:;
si0=l0;
si1=20U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L113;
}
si0=l5;
f15271(i,si0);
L113:;
si0=l0;
si1=28U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si0=l0;
si1=36U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si0=!(si0);
if(si0){
goto L114;
}
si0=l1;
l3=si0;
L115:;
{
si0=l3;
f1645(i,si0);
si0=l3;
si1=72U;
si0+=si1;
l3=si0;
si0=l2;
si1=-1U;
si0+=si1;
l2=si0;
if(si0){
goto L115;
}
}
L114:;
si0=l0;
si1=32U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L116;
}
si0=l1;
f15271(i,si0);
L116:;
si0=l0;
si1=40U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si0=l0;
si1=48U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si0=!(si0);
if(si0){
goto L117;
}
si0=l1;
l3=si0;
L118:;
{
si0=l3;
f1645(i,si0);
si0=l3;
si1=72U;
si0+=si1;
l3=si0;
si0=l2;
si1=-1U;
si0+=si1;
l2=si0;
if(si0){
goto L118;
}
}
L117:;
si0=l0;
si1=44U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L1;
}
si0=l1;
f15271(i,si0);
goto L0;
L8:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+4U);
l1=si0;
si0=l0;
si1=12U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si0=!(si0);
if(si0){
goto L119;
}
si0=l1;
l3=si0;
L120:;
{
si0=l3;
f1645(i,si0);
si0=l3;
si1=72U;
si0+=si1;
l3=si0;
si0=l2;
si1=-1U;
si0+=si1;
l2=si0;
if(si0){
goto L120;
}
}
L119:;
si0=l0;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L121;
}
si0=l1;
f15271(i,si0);
L121:;
si0=l0;
si1=16U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si0=l0;
si1=24U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si0=!(si0);
if(si0){
goto L122;
}
si0=0U;
l4=si0;
L123:;
{
si0=l5;
si1=l4;
si2=36U;
si1*=si2;
si0+=si1;
l1=si0;
si0=i32_load(&i->m0,(U64)si0+20U);
l3=si0;
si0=!(si0);
if(si0){
goto L124;
}
si0=l3;
f1643(i,si0);
si0=l3;
f15271(i,si0);
L124:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+24U);
l3=si0;
si0=!(si0);
if(si0){
goto L125;
}
si0=l1;
si1=28U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L125;
}
si0=l3;
f15271(i,si0);
L125:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+8U);
l2=si0;
si0=!(si0);
if(si0){
goto L126;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
L127:;
{
si0=l3;
f1645(i,si0);
si0=l3;
si1=72U;
si0+=si1;
l3=si0;
si0=l2;
si1=-1U;
si0+=si1;
l2=si0;
if(si0){
goto L127;
}
}
L126:;
si0=l4;
si1=1U;
si0+=si1;
l4=si0;
si0=l1;
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L128;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
f15271(i,si0);
L128:;
si0=l4;
si1=l6;
si0=si0 != si1;
if(si0){
goto L123;
}
}
L122:;
si0=l0;
si1=20U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L129;
}
si0=l5;
f15271(i,si0);
L129:;
si0=l0;
si1=28U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si0=l0;
si1=36U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si0=!(si0);
if(si0){
goto L130;
}
si0=l1;
l3=si0;
L131:;
{
si0=l3;
f1645(i,si0);
si0=l3;
si1=72U;
si0+=si1;
l3=si0;
si0=l2;
si1=-1U;
si0+=si1;
l2=si0;
if(si0){
goto L131;
}
}
L130:;
si0=l0;
si1=32U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L132;
}
si0=l1;
f15271(i,si0);
L132:;
si0=l0;
si1=40U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si0=l0;
si1=48U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si0=!(si0);
if(si0){
goto L133;
}
si0=l1;
l3=si0;
L134:;
{
si0=l3;
f1645(i,si0);
si0=l3;
si1=72U;
si0+=si1;
l3=si0;
si0=l2;
si1=-1U;
si0+=si1;
l2=si0;
if(si0){
goto L134;
}
}
L133:;
si0=l0;
si1=44U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L1;
}
si0=l1;
f15271(i,si0);
goto L0;
L7:;
si0=l0;
si1=16U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=l0;
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
f1643(i,si0);
si0=l2;
f15271(i,si0);
si0=l3;
si0=!(si0);
if(si0){
goto L1;
}
si0=l3;
f1643(i,si0);
si0=l3;
f15271(i,si0);
goto L0;
L6:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+4U);
l4=si0;
si0=l0;
si1=12U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si0=!(si0);
if(si0){
goto L135;
}
si0=l4;
l3=si0;
L136:;
{
si0=l3;
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L137;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
f15271(i,si0);
L137:;
si0=l3;
si1=20U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si0=!(si0);
if(si0){
goto L138;
}
si0=l3;
si1=24U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L138;
}
si0=l1;
f15271(i,si0);
L138:;
si0=l3;
si1=32U;
si0+=si1;
l3=si0;
si0=l2;
si1=-1U;
si0+=si1;
l2=si0;
if(si0){
goto L136;
}
}
L135:;
si0=l0;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L1;
}
si0=l4;
f15271(i,si0);
goto L0;
L5:;
si0=l0;
si1=32U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=!(si0);
if(si0){
goto L139;
}
si0=l0;
si1=36U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L139;
}
si0=l3;
f15271(i,si0);
L139:;
si0=l0;
si1=12U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
si0=l0;
si1=20U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si0=!(si0);
if(si0){
goto L140;
}
si0=l4;
l3=si0;
L141:;
{
si0=l3;
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L142;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
f15271(i,si0);
L142:;
si0=l3;
si1=20U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si0=!(si0);
if(si0){
goto L143;
}
si0=l3;
si1=24U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L143;
}
si0=l1;
f15271(i,si0);
L143:;
si0=l3;
si1=32U;
si0+=si1;
l3=si0;
si0=l2;
si1=-1U;
si0+=si1;
l2=si0;
if(si0){
goto L141;
}
}
L140:;
si0=l0;
si1=16U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L1;
}
si0=l4;
f15271(i,si0);
goto L0;
L4:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+4U);
l1=si0;
si0=l0;
si1=12U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si0=!(si0);
if(si0){
goto L144;
}
si0=l1;
l3=si0;
L145:;
{
si0=l3;
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L146;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
f15271(i,si0);
L146:;
si0=l3;
si1=12U;
si0+=si1;
l3=si0;
si0=l2;
si1=-1U;
si0+=si1;
l2=si0;
if(si0){
goto L145;
}
}
L144:;
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
goto L0;
L3:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+4U);
l1=si0;
si0=l0;
si1=12U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si0=!(si0);
if(si0){
goto L147;
}
si0=l1;
l3=si0;
L148:;
{
si0=l3;
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L149;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
f15271(i,si0);
L149:;
si0=l3;
si1=12U;
si0+=si1;
l3=si0;
si0=l2;
si1=-1U;
si0+=si1;
l2=si0;
if(si0){
goto L148;
}
}
L147:;
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
goto L0;
L2:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+4U);
l3=si0;
f1643(i,si0);
si0=l3;
f15271(i,si0);
L1:;
L0:;
}

void f1646(rustpythonInstance*i,U32 l0) {
U32 l1=0;
U32 l2=0;
U32 si0,si1;
si0=l0;
f1648(i,si0);
si0=l0;
si1=12U;
si0+=si1;
f1648(i,si0);
si0=l0;
si0=i32_load(&i->m0,(U64)si0+36U);
l1=si0;
si0=!(si0);
if(si0){
goto L1;
}
si0=l1;
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L2;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
f15271(i,si0);
L2:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+20U);
l2=si0;
si0=!(si0);
if(si0){
goto L3;
}
si0=l2;
f1643(i,si0);
si0=l2;
f15271(i,si0);
L3:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+24U);
l2=si0;
si0=!(si0);
if(si0){
goto L4;
}
si0=l1;
si1=28U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L4;
}
si0=l2;
f15271(i,si0);
L4:;
si0=l1;
f15271(i,si0);
L1:;
si0=l0;
si1=24U;
si0+=si1;
f1648(i,si0);
si0=l0;
si0=i32_load(&i->m0,(U64)si0+40U);
l1=si0;
si0=!(si0);
if(si0){
goto L5;
}
si0=l1;
si1=4U;
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
si0=l1;
si0=i32_load(&i->m0,(U64)si0+20U);
l2=si0;
si0=!(si0);
if(si0){
goto L7;
}
si0=l2;
f1643(i,si0);
si0=l2;
f15271(i,si0);
L7:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+24U);
l2=si0;
si0=!(si0);
if(si0){
goto L8;
}
si0=l1;
si1=28U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L8;
}
si0=l2;
f15271(i,si0);
L8:;
si0=l1;
f15271(i,si0);
L5:;
si0=l0;
f15271(i,si0);
L0:;
}

void f1647(rustpythonInstance*i,U32 l0) {
U32 l1=0;
U32 l2=0;
U32 l3=0;
U32 si0,si1;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
switch(si0){
case 0:
goto L8;
case 1:
goto L7;
case 2:
goto L6;
case 3:
goto L5;
case 4:
goto L4;
case 5:
goto L3;
case 6:
goto L2;
default:
goto L9;
}
L9:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+4U);
l1=si0;
si0=l0;
si1=12U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si0=!(si0);
if(si0){
goto L10;
}
si0=l1;
l3=si0;
L11:;
{
si0=l3;
f1647(i,si0);
si0=l3;
si1=56U;
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
L10:;
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
goto L0;
L8:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+4U);
l3=si0;
f1643(i,si0);
si0=l3;
f15271(i,si0);
goto L0;
L7:;
si0=l0;
si1=8U;
si0+=si1;
f1642(i,si0);
goto L0;
L6:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+4U);
l1=si0;
si0=l0;
si1=12U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si0=!(si0);
if(si0){
goto L12;
}
si0=l1;
l3=si0;
L13:;
{
si0=l3;
f1647(i,si0);
si0=l3;
si1=56U;
si0+=si1;
l3=si0;
si0=l2;
si1=-1U;
si0+=si1;
l2=si0;
if(si0){
goto L13;
}
}
L12:;
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
goto L0;
L5:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+4U);
l1=si0;
si0=l0;
si1=12U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si0=!(si0);
if(si0){
goto L14;
}
si0=l1;
l3=si0;
L15:;
{
si0=l3;
f1643(i,si0);
si0=l3;
si1=48U;
si0+=si1;
l3=si0;
si0=l2;
si1=-1U;
si0+=si1;
l2=si0;
if(si0){
goto L15;
}
}
L14:;
si0=l0;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L16;
}
si0=l1;
f15271(i,si0);
L16:;
si0=l0;
si1=16U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si0=l0;
si1=24U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si0=!(si0);
if(si0){
goto L17;
}
si0=l1;
l3=si0;
L18:;
{
si0=l3;
f1647(i,si0);
si0=l3;
si1=56U;
si0+=si1;
l3=si0;
si0=l2;
si1=-1U;
si0+=si1;
l2=si0;
if(si0){
goto L18;
}
}
L17:;
si0=l0;
si1=20U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L19;
}
si0=l1;
f15271(i,si0);
L19:;
si0=l0;
si1=36U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=!(si0);
if(si0){
goto L1;
}
si0=l0;
si1=40U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L1;
}
si0=l3;
f15271(i,si0);
goto L0;
L4:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+4U);
l3=si0;
f1643(i,si0);
si0=l3;
f15271(i,si0);
si0=l0;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si0=l0;
si1=16U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si0=!(si0);
if(si0){
goto L20;
}
si0=l1;
l3=si0;
L21:;
{
si0=l3;
f1647(i,si0);
si0=l3;
si1=56U;
si0+=si1;
l3=si0;
si0=l2;
si1=-1U;
si0+=si1;
l2=si0;
if(si0){
goto L21;
}
}
L20:;
si0=l0;
si1=12U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L22;
}
si0=l1;
f15271(i,si0);
L22:;
si0=l0;
si1=20U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si0=l0;
si1=28U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si0=!(si0);
if(si0){
goto L23;
}
si0=l1;
l3=si0;
L24:;
{
si0=l3;
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L25;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
f15271(i,si0);
L25:;
si0=l3;
si1=12U;
si0+=si1;
l3=si0;
si0=l2;
si1=-1U;
si0+=si1;
l2=si0;
if(si0){
goto L24;
}
}
L23:;
si0=l0;
si1=24U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L26;
}
si0=l1;
f15271(i,si0);
L26:;
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
goto L27;
}
si0=l1;
l3=si0;
L28:;
{
si0=l3;
f1647(i,si0);
si0=l3;
si1=56U;
si0+=si1;
l3=si0;
si0=l2;
si1=-1U;
si0+=si1;
l2=si0;
if(si0){
goto L28;
}
}
L27:;
si0=l0;
si1=36U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L1;
}
si0=l1;
f15271(i,si0);
goto L0;
L3:;
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
si1=16U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L1;
}
si0=l3;
f15271(i,si0);
goto L0;
L2:;
si0=l0;
si1=12U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=!(si0);
if(si0){
goto L29;
}
si0=l3;
f1647(i,si0);
si0=l3;
f15271(i,si0);
L29:;
si0=l0;
si1=16U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=!(si0);
if(si0){
goto L1;
}
si0=l0;
si1=20U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L1;
}
si0=l3;
f15271(i,si0);
L1:;
L0:;
}

void f1648(rustpythonInstance*i,U32 l0) {
U32 l1=0;
U32 l2=0;
U32 l3=0;
U32 l4=0;
U32 si0,si1;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+8U);
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
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L3;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
f15271(i,si0);
L3:;
si0=l3;
si1=20U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
si0=!(si0);
if(si0){
goto L4;
}
si0=l4;
f1643(i,si0);
si0=l4;
f15271(i,si0);
L4:;
si0=l3;
si1=24U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
si0=!(si0);
if(si0){
goto L5;
}
si0=l3;
si1=28U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L5;
}
si0=l4;
f15271(i,si0);
L5:;
si0=l3;
si1=36U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
si0=!(si0);
if(si0){
goto L6;
}
si0=l4;
f1643(i,si0);
si0=l4;
f15271(i,si0);
L6:;
si0=l3;
si1=40U;
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
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L7;
}
si0=l1;
f15271(i,si0);
L7:;
L0:;
}

void f1649(rustpythonInstance*i,U32 l0,U32 l1) {
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
U32 si0,si1,si2,si3;
U64 sj1;
si0=i->g0;
si1=352U;
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
si0=i32_load(&i->m0,(U64)si0+8U);
l5=si0;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+12U);
l6=si1;
si0=si0 == si1;
if(si0){
goto L5;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+16U);
l7=si0;
si0=l2;
si1=248U;
si0+=si1;
si1=4U;
si0|=si1;
l1=si0;
si0=l2;
si1=304U;
si0+=si1;
si1=4U;
si0|=si1;
l8=si0;
L7:;
{
si0=l5;
si0=i32_load(&i->m0,(U64)si0);
l9=si0;
si1=39U;
si0=si0 == si1;
if(si0){
goto L6;
}
si0=l9;
si1=38U;
si0=si0 == si1;
if(si0){
goto L9;
}
si0=l8;
si1=l5;
sj1=i64_load(&i->m0,(U64)si1+4U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l8;
si1=8U;
si0+=si1;
si1=l5;
si2=12U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l8;
si1=16U;
si0+=si1;
si1=l5;
si2=20U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l8;
si1=24U;
si0+=si1;
si1=l5;
si2=28U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l8;
si1=32U;
si0+=si1;
si1=l5;
si2=36U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l8;
si1=40U;
si0+=si1;
si1=l5;
si2=44U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=l9;
i32_store(&i->m0,(U64)si0+304U,si1);
si0=l2;
si1=248U;
si0+=si1;
si1=l7;
si2=l2;
si3=304U;
si2+=si3;
f1595(i,si0,si1,si2);
si0=l2;
si1=192U;
si0+=si1;
si1=8U;
si0+=si1;
l10=si0;
si1=l1;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=192U;
si0+=si1;
si1=16U;
si0+=si1;
l11=si0;
si1=l1;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=192U;
si0+=si1;
si1=24U;
si0+=si1;
l12=si0;
si1=l1;
si2=24U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=192U;
si0+=si1;
si1=32U;
si0+=si1;
l13=si0;
si1=l1;
si2=32U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=192U;
si0+=si1;
si1=40U;
si0+=si1;
l14=si0;
si1=l1;
si2=40U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=192U;
si0+=si1;
si1=48U;
si0+=si1;
l15=si0;
si1=l1;
si2=48U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=l1;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+192U,sj1);
si0=l2;
si0=i32_load(&i->m0,(U64)si0+248U);
l9=si0;
si1=38U;
si0=si0 != si1;
if(si0){
goto L8;
}
L9:;
si0=38U;
l9=si0;
goto L3;
L8:;
si0=l2;
si1=136U;
si0+=si1;
si1=48U;
si0+=si1;
l16=si0;
si1=l15;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=136U;
si0+=si1;
si1=40U;
si0+=si1;
l15=si0;
si1=l14;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=136U;
si0+=si1;
si1=32U;
si0+=si1;
l14=si0;
si1=l13;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=136U;
si0+=si1;
si1=24U;
si0+=si1;
l13=si0;
si1=l12;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=136U;
si0+=si1;
si1=16U;
si0+=si1;
l12=si0;
si1=l11;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=136U;
si0+=si1;
si1=8U;
si0+=si1;
l11=si0;
si1=l10;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=l2;
sj1=i64_load(&i->m0,(U64)si1+192U);
i64_store(&i->m0,(U64)si0+136U,sj1);
si0=l9;
si1=39U;
si0=si0 == si1;
if(si0){
goto L10;
}
si0=l2;
si1=80U;
si0+=si1;
si1=48U;
si0+=si1;
si1=l16;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=80U;
si0+=si1;
si1=40U;
si0+=si1;
si1=l15;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=80U;
si0+=si1;
si1=32U;
si0+=si1;
si1=l14;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=80U;
si0+=si1;
si1=24U;
si0+=si1;
si1=l13;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=80U;
si0+=si1;
si1=16U;
si0+=si1;
si1=l12;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=80U;
si0+=si1;
si1=8U;
si0+=si1;
si1=l11;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=l2;
sj1=i64_load(&i->m0,(U64)si1+136U);
i64_store(&i->m0,(U64)si0+80U,sj1);
si0=l9;
si1=40U;
si0=si0 != si1;
if(si0){
goto L3;
}
L10:;
si0=l5;
si1=48U;
si0+=si1;
l5=si0;
si1=l6;
si0=si0 != si1;
if(si0){
goto L7;
}
}
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l0;
sj1=8ULL;
i64_store(&i->m0,(U64)si0,sj1);
goto L4;
L6:;
si0=l5;
si1=48U;
si0+=si1;
l5=si0;
L5:;
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l0;
sj1=8ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l6;
si1=l5;
si0-=si1;
si1=48U;
si0=DIV_U(si0,si1);
l1=si0;
si0=l6;
si1=l5;
si0=si0 == si1;
if(si0){
goto L4;
}
L11:;
{
si0=l5;
si0=i32_load(&i->m0,(U64)si0);
si1=38U;
si0=si0 == si1;
if(si0){
goto L12;
}
si0=l5;
f1684(i,si0);
L12:;
si0=l5;
si1=48U;
si0+=si1;
l5=si0;
si0=l1;
si1=-1U;
si0+=si1;
l1=si0;
if(si0){
goto L11;
}
}
L4:;
si0=l3;
si0=!(si0);
if(si0){
goto L2;
}
si0=l4;
f15271(i,si0);
goto L2;
L3:;
si0=l2;
si1=24U;
si0+=si1;
si1=48U;
si0+=si1;
l1=si0;
si1=l2;
si2=80U;
si1+=si2;
si2=48U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=24U;
si0+=si1;
si1=40U;
si0+=si1;
l8=si0;
si1=l2;
si2=80U;
si1+=si2;
si2=40U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=24U;
si0+=si1;
si1=32U;
si0+=si1;
l10=si0;
si1=l2;
si2=80U;
si1+=si2;
si2=32U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=24U;
si0+=si1;
si1=24U;
si0+=si1;
l11=si0;
si1=l2;
si2=80U;
si1+=si2;
si2=24U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=24U;
si0+=si1;
si1=16U;
si0+=si1;
l12=si0;
si1=l2;
si2=80U;
si1+=si2;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=24U;
si0+=si1;
si1=8U;
si0+=si1;
l13=si0;
si1=l2;
si2=80U;
si1+=si2;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=l2;
sj1=i64_load(&i->m0,(U64)si1+80U);
i64_store(&i->m0,(U64)si0+24U,sj1);
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=224U;
si0=f15269(i,si0);
l17=si0;
si0=!(si0);
if(si0){
goto L1;
}
si0=l17;
si1=l9;
i32_store(&i->m0,(U64)si0,si1);
si0=l17;
si1=l2;
sj1=i64_load(&i->m0,(U64)si1+24U);
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l17;
si1=12U;
si0+=si1;
si1=l13;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l17;
si1=20U;
si0+=si1;
si1=l12;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l17;
si1=28U;
si0+=si1;
si1=l11;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l17;
si1=36U;
si0+=si1;
si1=l10;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l17;
si1=44U;
si0+=si1;
si1=l8;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l17;
si1=52U;
si0+=si1;
si1=l1;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
sj1=4294967300ULL;
i64_store(&i->m0,(U64)si0+12U,sj1);
si0=l2;
si1=l17;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l5;
si1=48U;
si0+=si1;
l5=si0;
si1=l6;
si0=si0 == si1;
if(si0){
goto L13;
}
si0=l6;
si1=-48U;
si0+=si1;
l18=si0;
si0=l2;
si1=248U;
si0+=si1;
si1=4U;
si0|=si1;
l1=si0;
si0=l2;
si1=304U;
si0+=si1;
si1=4U;
si0|=si1;
l8=si0;
si0=1U;
l19=si0;
L14:;
{
si0=l18;
si1=l5;
si0-=si1;
l10=si0;
L17:;
{
si0=l5;
si0=i32_load(&i->m0,(U64)si0);
l9=si0;
si1=39U;
si0=si0 == si1;
if(si0){
goto L16;
}
si0=l9;
si1=38U;
si0=si0 == si1;
if(si0){
goto L19;
}
si0=l8;
si1=l5;
sj1=i64_load(&i->m0,(U64)si1+4U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l8;
si1=8U;
si0+=si1;
si1=l5;
si2=12U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l8;
si1=16U;
si0+=si1;
si1=l5;
si2=20U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l8;
si1=24U;
si0+=si1;
si1=l5;
si2=28U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l8;
si1=32U;
si0+=si1;
si1=l5;
si2=36U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l8;
si1=40U;
si0+=si1;
si1=l5;
si2=44U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=l9;
i32_store(&i->m0,(U64)si0+304U,si1);
si0=l2;
si1=248U;
si0+=si1;
si1=l7;
si2=l2;
si3=304U;
si2+=si3;
f1595(i,si0,si1,si2);
si0=l2;
si1=192U;
si0+=si1;
si1=8U;
si0+=si1;
l11=si0;
si1=l1;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=192U;
si0+=si1;
si1=16U;
si0+=si1;
l12=si0;
si1=l1;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=192U;
si0+=si1;
si1=24U;
si0+=si1;
l13=si0;
si1=l1;
si2=24U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=192U;
si0+=si1;
si1=32U;
si0+=si1;
l14=si0;
si1=l1;
si2=32U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=192U;
si0+=si1;
si1=40U;
si0+=si1;
l15=si0;
si1=l1;
si2=40U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=192U;
si0+=si1;
si1=48U;
si0+=si1;
l16=si0;
si1=l1;
si2=48U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=l1;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+192U,sj1);
si0=l2;
si0=i32_load(&i->m0,(U64)si0+248U);
l9=si0;
si1=38U;
si0=si0 != si1;
if(si0){
goto L18;
}
L19:;
si0=38U;
l9=si0;
goto L15;
L18:;
si0=l2;
si1=136U;
si0+=si1;
si1=48U;
si0+=si1;
l20=si0;
si1=l16;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=136U;
si0+=si1;
si1=40U;
si0+=si1;
l16=si0;
si1=l15;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=136U;
si0+=si1;
si1=32U;
si0+=si1;
l15=si0;
si1=l14;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=136U;
si0+=si1;
si1=24U;
si0+=si1;
l14=si0;
si1=l13;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=136U;
si0+=si1;
si1=16U;
si0+=si1;
l13=si0;
si1=l12;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=136U;
si0+=si1;
si1=8U;
si0+=si1;
l12=si0;
si1=l11;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=l2;
sj1=i64_load(&i->m0,(U64)si1+192U);
i64_store(&i->m0,(U64)si0+136U,sj1);
si0=l9;
si1=39U;
si0=si0 == si1;
if(si0){
goto L20;
}
si0=l2;
si1=80U;
si0+=si1;
si1=48U;
si0+=si1;
si1=l20;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=80U;
si0+=si1;
si1=40U;
si0+=si1;
si1=l16;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=80U;
si0+=si1;
si1=32U;
si0+=si1;
si1=l15;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=80U;
si0+=si1;
si1=24U;
si0+=si1;
si1=l14;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=80U;
si0+=si1;
si1=16U;
si0+=si1;
si1=l13;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=80U;
si0+=si1;
si1=8U;
si0+=si1;
si1=l12;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=l2;
sj1=i64_load(&i->m0,(U64)si1+136U);
i64_store(&i->m0,(U64)si0+80U,sj1);
si0=l9;
si1=40U;
si0=si0 != si1;
if(si0){
goto L15;
}
L20:;
si0=l10;
si1=-48U;
si0+=si1;
l10=si0;
si0=l5;
si1=48U;
si0+=si1;
l5=si0;
si1=l6;
si0=si0 != si1;
if(si0){
goto L17;
}
goto L13;
}
L16:;
si0=l5;
si1=48U;
si0+=si1;
l5=si0;
si1=l6;
si0=si0 == si1;
if(si0){
goto L13;
}
si0=l10;
si1=48U;
si0=DIV_U(si0,si1);
l1=si0;
L21:;
{
si0=l5;
si0=i32_load(&i->m0,(U64)si0);
si1=38U;
si0=si0 == si1;
if(si0){
goto L22;
}
si0=l5;
f1684(i,si0);
L22:;
si0=l5;
si1=48U;
si0+=si1;
l5=si0;
si0=l1;
si1=-1U;
si0+=si1;
l1=si0;
if(si0){
goto L21;
}
goto L13;
}
L15:;
si0=l2;
si1=24U;
si0+=si1;
si1=48U;
si0+=si1;
l11=si0;
si1=l2;
si2=80U;
si1+=si2;
si2=48U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=24U;
si0+=si1;
si1=40U;
si0+=si1;
l12=si0;
si1=l2;
si2=80U;
si1+=si2;
si2=40U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=24U;
si0+=si1;
si1=32U;
si0+=si1;
l13=si0;
si1=l2;
si2=80U;
si1+=si2;
si2=32U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=24U;
si0+=si1;
si1=24U;
si0+=si1;
l14=si0;
si1=l2;
si2=80U;
si1+=si2;
si2=24U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=24U;
si0+=si1;
si1=16U;
si0+=si1;
l15=si0;
si1=l2;
si2=80U;
si1+=si2;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=24U;
si0+=si1;
si1=8U;
si0+=si1;
l16=si0;
si1=l2;
si2=80U;
si1+=si2;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=l2;
sj1=i64_load(&i->m0,(U64)si1+80U);
i64_store(&i->m0,(U64)si0+24U,sj1);
si0=l5;
si1=48U;
si0+=si1;
l5=si0;
si0=l19;
si1=l2;
si1=i32_load(&i->m0,(U64)si1+12U);
si0=si0 != si1;
if(si0){
goto L23;
}
si0=l2;
si1=8U;
si0+=si1;
si1=l19;
si2=1U;
f1671(i,si0,si1,si2);
si0=l2;
si0=i32_load(&i->m0,(U64)si0+8U);
l17=si0;
L23:;
si0=l17;
si1=l19;
si2=56U;
si1*=si2;
si0+=si1;
l10=si0;
si1=l9;
i32_store(&i->m0,(U64)si0,si1);
si0=l10;
si1=l2;
sj1=i64_load(&i->m0,(U64)si1+24U);
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l10;
si1=12U;
si0+=si1;
si1=l16;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l10;
si1=20U;
si0+=si1;
si1=l15;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l10;
si1=28U;
si0+=si1;
si1=l14;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l10;
si1=36U;
si0+=si1;
si1=l13;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l10;
si1=44U;
si0+=si1;
si1=l12;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l10;
si1=52U;
si0+=si1;
si1=l11;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=l19;
si2=1U;
si1+=si2;
l19=si1;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l5;
si1=l6;
si0=si0 != si1;
if(si0){
goto L14;
}
}
L13:;
si0=l3;
si0=!(si0);
if(si0){
goto L24;
}
si0=l4;
f15271(i,si0);
L24:;
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
si1=352U;
si0+=si1;
i->g0=si0;
goto L0;
L1:;
si0=8U;
si1=224U;
f52(i,si0,si1);
UNREACHABLE;
L0:;
}

void f1650(rustpythonInstance*i,U32 l0,U32 l1) {
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
U32 si0,si1,si2,si3;
U64 sj1;
si0=i->g0;
si1=272U;
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
si0=i32_load(&i->m0,(U64)si0+8U);
l5=si0;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+12U);
l6=si1;
si0=si0 == si1;
if(si0){
goto L5;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+16U);
l7=si0;
si0=l2;
si1=152U;
si0+=si1;
si1=4U;
si0|=si1;
l1=si0;
si0=l2;
si1=216U;
si0+=si1;
si1=4U;
si0|=si1;
l8=si0;
si1=48U;
si0+=si1;
l9=si0;
si0=l8;
si1=40U;
si0+=si1;
l10=si0;
si0=l8;
si1=32U;
si0+=si1;
l11=si0;
si0=l8;
si1=24U;
si0+=si1;
l12=si0;
si0=l8;
si1=16U;
si0+=si1;
l13=si0;
L7:;
{
si0=l5;
si0=i32_load(&i->m0,(U64)si0);
l14=si0;
si1=8U;
si0=si0 == si1;
if(si0){
goto L6;
}
si0=l8;
si1=l5;
sj1=i64_load(&i->m0,(U64)si1+4U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l9;
si1=l5;
si2=52U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l10;
si1=l5;
si2=44U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l11;
si1=l5;
si2=36U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l12;
si1=l5;
si2=28U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l13;
si1=l5;
si2=20U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l8;
si1=8U;
si0+=si1;
si1=l5;
si2=12U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=l14;
i32_store(&i->m0,(U64)si0+216U,si1);
si0=l2;
si1=152U;
si0+=si1;
si1=l7;
si2=l2;
si3=216U;
si2+=si3;
f1635(i,si0,si1,si2);
si0=l2;
si0=i32_load(&i->m0,(U64)si0+152U);
l14=si0;
si1=8U;
si0=si0 == si1;
if(si0){
goto L8;
}
si0=l2;
si1=88U;
si0+=si1;
si1=56U;
si0+=si1;
si1=l1;
si2=56U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=88U;
si0+=si1;
si1=48U;
si0+=si1;
si1=l1;
si2=48U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=88U;
si0+=si1;
si1=40U;
si0+=si1;
si1=l1;
si2=40U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=88U;
si0+=si1;
si1=32U;
si0+=si1;
si1=l1;
si2=32U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=88U;
si0+=si1;
si1=24U;
si0+=si1;
si1=l1;
si2=24U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=88U;
si0+=si1;
si1=16U;
si0+=si1;
si1=l1;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=88U;
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
i64_store(&i->m0,(U64)si0+88U,sj1);
si0=l14;
si1=9U;
si0=si0 != si1;
if(si0){
goto L3;
}
L8:;
si0=l5;
si1=56U;
si0+=si1;
l5=si0;
si1=l6;
si0=si0 != si1;
if(si0){
goto L7;
}
}
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l0;
sj1=8ULL;
i64_store(&i->m0,(U64)si0,sj1);
goto L4;
L6:;
si0=l5;
si1=56U;
si0+=si1;
l5=si0;
L5:;
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l0;
sj1=8ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l6;
si1=l5;
si0-=si1;
si1=56U;
si0=DIV_U(si0,si1);
l1=si0;
si0=l6;
si1=l5;
si0=si0 == si1;
if(si0){
goto L4;
}
L9:;
{
si0=l5;
f1686(i,si0);
si0=l5;
si1=56U;
si0+=si1;
l5=si0;
si0=l1;
si1=-1U;
si0+=si1;
l1=si0;
if(si0){
goto L9;
}
}
L4:;
si0=l3;
si0=!(si0);
if(si0){
goto L2;
}
si0=l4;
f15271(i,si0);
goto L2;
L3:;
si0=l2;
si1=24U;
si0+=si1;
si1=56U;
si0+=si1;
l1=si0;
si1=l2;
si2=88U;
si1+=si2;
si2=56U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=24U;
si0+=si1;
si1=48U;
si0+=si1;
l8=si0;
si1=l2;
si2=88U;
si1+=si2;
si2=48U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=24U;
si0+=si1;
si1=40U;
si0+=si1;
l9=si0;
si1=l2;
si2=88U;
si1+=si2;
si2=40U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=24U;
si0+=si1;
si1=32U;
si0+=si1;
l11=si0;
si1=l2;
si2=88U;
si1+=si2;
si2=32U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=24U;
si0+=si1;
si1=24U;
si0+=si1;
l12=si0;
si1=l2;
si2=88U;
si1+=si2;
si2=24U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=24U;
si0+=si1;
si1=16U;
si0+=si1;
l13=si0;
si1=l2;
si2=88U;
si1+=si2;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=24U;
si0+=si1;
si1=8U;
si0+=si1;
l15=si0;
si1=l2;
si2=88U;
si1+=si2;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=l2;
sj1=i64_load(&i->m0,(U64)si1+88U);
i64_store(&i->m0,(U64)si0+24U,sj1);
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=256U;
si0=f15269(i,si0);
l10=si0;
si0=!(si0);
if(si0){
goto L1;
}
si0=l10;
si1=l14;
i32_store(&i->m0,(U64)si0,si1);
si0=l10;
si1=l2;
sj1=i64_load(&i->m0,(U64)si1+24U);
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l10;
si1=12U;
si0+=si1;
si1=l15;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l10;
si1=20U;
si0+=si1;
si1=l13;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l10;
si1=28U;
si0+=si1;
si1=l12;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l10;
si1=36U;
si0+=si1;
si1=l11;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l10;
si1=44U;
si0+=si1;
si1=l9;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l10;
si1=52U;
si0+=si1;
si1=l8;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l10;
si1=60U;
si0+=si1;
si1=l1;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
sj1=4294967300ULL;
i64_store(&i->m0,(U64)si0+12U,sj1);
si0=l2;
si1=l10;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l5;
si1=56U;
si0+=si1;
l5=si0;
si1=l6;
si0=si0 == si1;
if(si0){
goto L10;
}
si0=l6;
si1=-56U;
si0+=si1;
l16=si0;
si0=l2;
si1=152U;
si0+=si1;
si1=4U;
si0|=si1;
l1=si0;
si0=l2;
si1=216U;
si0+=si1;
si1=4U;
si0|=si1;
l8=si0;
si1=48U;
si0+=si1;
l11=si0;
si0=l8;
si1=40U;
si0+=si1;
l12=si0;
si0=l8;
si1=32U;
si0+=si1;
l13=si0;
si0=l8;
si1=24U;
si0+=si1;
l15=si0;
si0=l8;
si1=16U;
si0+=si1;
l17=si0;
si0=1U;
l18=si0;
L11:;
{
si0=l16;
si1=l5;
si0-=si1;
l14=si0;
L15:;
{
si0=l5;
si0=i32_load(&i->m0,(U64)si0);
l9=si0;
si1=8U;
si0=si0 == si1;
if(si0){
goto L14;
}
si0=l8;
si1=l5;
sj1=i64_load(&i->m0,(U64)si1+4U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l11;
si1=l5;
si2=52U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l12;
si1=l5;
si2=44U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l13;
si1=l5;
si2=36U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l15;
si1=l5;
si2=28U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l17;
si1=l5;
si2=20U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l8;
si1=8U;
si0+=si1;
si1=l5;
si2=12U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=l9;
i32_store(&i->m0,(U64)si0+216U,si1);
si0=l2;
si1=152U;
si0+=si1;
si1=l7;
si2=l2;
si3=216U;
si2+=si3;
f1635(i,si0,si1,si2);
si0=l2;
si0=i32_load(&i->m0,(U64)si0+152U);
l9=si0;
si1=8U;
si0=si0 == si1;
if(si0){
goto L17;
}
si0=l2;
si1=88U;
si0+=si1;
si1=56U;
si0+=si1;
l19=si0;
si1=l1;
si2=56U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=88U;
si0+=si1;
si1=48U;
si0+=si1;
l20=si0;
si1=l1;
si2=48U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=88U;
si0+=si1;
si1=40U;
si0+=si1;
l21=si0;
si1=l1;
si2=40U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=88U;
si0+=si1;
si1=32U;
si0+=si1;
l22=si0;
si1=l1;
si2=32U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=88U;
si0+=si1;
si1=24U;
si0+=si1;
l23=si0;
si1=l1;
si2=24U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=88U;
si0+=si1;
si1=16U;
si0+=si1;
l24=si0;
si1=l1;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=88U;
si0+=si1;
si1=8U;
si0+=si1;
l25=si0;
si1=l1;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=l1;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+88U,sj1);
si0=l9;
si1=9U;
si0=si0 != si1;
if(si0){
goto L16;
}
L17:;
si0=l14;
si1=-56U;
si0+=si1;
l14=si0;
si0=l5;
si1=56U;
si0+=si1;
l5=si0;
si1=l6;
si0=si0 != si1;
if(si0){
goto L15;
}
goto L10;
L16:;
}
si0=l2;
si1=24U;
si0+=si1;
si1=56U;
si0+=si1;
l26=si0;
si1=l19;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=24U;
si0+=si1;
si1=48U;
si0+=si1;
l19=si0;
si1=l20;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=24U;
si0+=si1;
si1=40U;
si0+=si1;
l20=si0;
si1=l21;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=24U;
si0+=si1;
si1=32U;
si0+=si1;
l21=si0;
si1=l22;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=24U;
si0+=si1;
si1=24U;
si0+=si1;
l22=si0;
si1=l23;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=24U;
si0+=si1;
si1=16U;
si0+=si1;
l23=si0;
si1=l24;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=24U;
si0+=si1;
si1=8U;
si0+=si1;
l24=si0;
si1=l25;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=l2;
sj1=i64_load(&i->m0,(U64)si1+88U);
i64_store(&i->m0,(U64)si0+24U,sj1);
si0=l5;
si1=56U;
si0+=si1;
l5=si0;
si0=l18;
si1=l2;
si1=i32_load(&i->m0,(U64)si1+12U);
si0=si0 == si1;
if(si0){
goto L13;
}
goto L12;
L14:;
si0=l5;
si1=56U;
si0+=si1;
l5=si0;
si1=l6;
si0=si0 == si1;
if(si0){
goto L10;
}
si0=l14;
si1=56U;
si0=DIV_U(si0,si1);
l1=si0;
L18:;
{
si0=l5;
f1686(i,si0);
si0=l5;
si1=56U;
si0+=si1;
l5=si0;
si0=l1;
si1=-1U;
si0+=si1;
l1=si0;
if(si0){
goto L18;
}
goto L10;
}
L13:;
si0=l2;
si1=8U;
si0+=si1;
si1=l18;
si2=1U;
f1675(i,si0,si1,si2);
si0=l2;
si0=i32_load(&i->m0,(U64)si0+8U);
l10=si0;
L12:;
si0=l10;
si1=l18;
si2=6U;
si1<<=(si2&31);
si0+=si1;
l14=si0;
si1=l9;
i32_store(&i->m0,(U64)si0,si1);
si0=l14;
si1=l2;
sj1=i64_load(&i->m0,(U64)si1+24U);
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l14;
si1=12U;
si0+=si1;
si1=l24;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l14;
si1=20U;
si0+=si1;
si1=l23;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l14;
si1=28U;
si0+=si1;
si1=l22;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l14;
si1=36U;
si0+=si1;
si1=l21;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l14;
si1=44U;
si0+=si1;
si1=l20;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l14;
si1=52U;
si0+=si1;
si1=l19;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l14;
si1=60U;
si0+=si1;
si1=l26;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=l18;
si2=1U;
si1+=si2;
l18=si1;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l5;
si1=l6;
si0=si0 != si1;
if(si0){
goto L11;
}
}
L10:;
si0=l3;
si0=!(si0);
if(si0){
goto L19;
}
si0=l4;
f15271(i,si0);
L19:;
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
si1=272U;
si0+=si1;
i->g0=si0;
goto L0;
L1:;
si0=8U;
si1=256U;
f52(i,si0,si1);
UNREACHABLE;
L0:;
}

void f1651(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U64 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 l8=0;
U32 l9=0;
U32 l10=0;
U32 si0,si1,si2,si3;
U64 sj0,sj1;
si0=i->g0;
si1=560U;
si0-=si1;
l2=si0;
i->g0=si0;
si0=l2;
si1=8U;
si0+=si1;
si1=8U;
si0+=si1;
si1=l1;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
l3=sj1;
i64_store(&i->m0,(U64)si0,sj1);
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
si1=l1;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+8U,sj1);
sj0=l3;
si0=(U32)(sj0);
l1=si0;
si1=l2;
si1=i32_load(&i->m0,(U64)si1+20U);
l4=si1;
si0=si0 == si1;
if(si0){
goto L4;
}
si0=l2;
si1=448U;
si0+=si1;
si1=4U;
si0|=si1;
l5=si0;
si0=l2;
si1=320U;
si0+=si1;
si1=4U;
si0|=si1;
l6=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+24U);
l7=si0;
L7:;
{
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l8=si0;
si1=38U;
si0=si0 == si1;
if(si0){
goto L6;
}
si0=l5;
si1=l1;
si2=4U;
si1+=si2;
si2=108U;
si0=f15390(i,si0,si1,si2);
si0=l2;
si1=l8;
i32_store(&i->m0,(U64)si0+448U,si1);
si0=l2;
si1=320U;
si0+=si1;
si1=l7;
si2=l2;
si3=448U;
si2+=si3;
f1626(i,si0,si1,si2);
si0=l2;
si0=i32_load(&i->m0,(U64)si0+320U);
l8=si0;
si1=38U;
si0=si0 == si1;
if(si0){
goto L8;
}
si0=l2;
si1=196U;
si0+=si1;
si1=l6;
si2=124U;
si0=f15390(i,si0,si1,si2);
si0=l8;
si1=39U;
si0=si0 != si1;
if(si0){
goto L3;
}
L8:;
si0=l1;
si1=112U;
si0+=si1;
l1=si0;
si1=l4;
si0=si0 != si1;
if(si0){
goto L7;
}
goto L5;
}
L6:;
si0=l1;
si1=112U;
si0+=si1;
l4=si0;
L5:;
si0=l2;
si1=l4;
i32_store(&i->m0,(U64)si0+16U,si1);
L4:;
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l0;
sj1=8ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=8U;
si0+=si1;
f1690(i,si0);
goto L2;
L3:;
si0=l2;
si1=l1;
si2=112U;
si1+=si2;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l2;
si1=72U;
si0+=si1;
si1=l2;
si2=196U;
si1+=si2;
si2=124U;
si0=f15390(i,si0,si1,si2);
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=512U;
si0=f15269(i,si0);
l9=si0;
si0=!(si0);
if(si0){
goto L1;
}
si0=l9;
si1=l8;
i32_store(&i->m0,(U64)si0,si1);
si0=l9;
si1=4U;
si0+=si1;
si1=l2;
si2=72U;
si1+=si2;
si2=124U;
si0=f15390(i,si0,si1,si2);
si0=l2;
sj1=4294967300ULL;
i64_store(&i->m0,(U64)si0+36U,sj1);
si0=l2;
si1=l9;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l2;
si1=48U;
si0+=si1;
si1=8U;
si0+=si1;
si1=l2;
si2=8U;
si1+=si2;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
l3=sj1;
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=48U;
si0+=si1;
si1=16U;
si0+=si1;
si1=l2;
si2=8U;
si1+=si2;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=l2;
sj1=i64_load(&i->m0,(U64)si1+8U);
i64_store(&i->m0,(U64)si0+48U,sj1);
sj0=l3;
si0=(U32)(sj0);
l1=si0;
si1=l2;
si1=i32_load(&i->m0,(U64)si1+60U);
l4=si1;
si0=si0 == si1;
if(si0){
goto L9;
}
si0=l2;
si1=448U;
si0+=si1;
si1=4U;
si0|=si1;
l7=si0;
si0=l2;
si1=320U;
si0+=si1;
si1=4U;
si0|=si1;
l6=si0;
si0=1U;
l10=si0;
L10:;
{
si0=l2;
si0=i32_load(&i->m0,(U64)si0+64U);
l5=si0;
L14:;
{
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l8=si0;
si1=38U;
si0=si0 == si1;
if(si0){
goto L13;
}
si0=l7;
si1=l1;
si2=4U;
si1+=si2;
si2=108U;
si0=f15390(i,si0,si1,si2);
si0=l2;
si1=l8;
i32_store(&i->m0,(U64)si0+448U,si1);
si0=l2;
si1=320U;
si0+=si1;
si1=l5;
si2=l2;
si3=448U;
si2+=si3;
f1626(i,si0,si1,si2);
si0=l2;
si0=i32_load(&i->m0,(U64)si0+320U);
l8=si0;
si1=38U;
si0=si0 == si1;
if(si0){
goto L16;
}
si0=l2;
si1=196U;
si0+=si1;
si1=l6;
si2=124U;
si0=f15390(i,si0,si1,si2);
si0=l8;
si1=39U;
si0=si0 != si1;
if(si0){
goto L15;
}
L16:;
si0=l1;
si1=112U;
si0+=si1;
l1=si0;
si1=l4;
si0=si0 != si1;
if(si0){
goto L14;
}
goto L12;
L15:;
}
si0=l2;
si1=l1;
si2=112U;
si1+=si2;
i32_store(&i->m0,(U64)si0+56U,si1);
si0=l2;
si1=72U;
si0+=si1;
si1=l2;
si2=196U;
si1+=si2;
si2=124U;
si0=f15390(i,si0,si1,si2);
si0=l10;
si1=l2;
si1=i32_load(&i->m0,(U64)si1+36U);
si0=si0 != si1;
if(si0){
goto L11;
}
si0=l2;
si1=32U;
si0+=si1;
si1=l10;
si2=1U;
f1673(i,si0,si1,si2);
si0=l2;
si0=i32_load(&i->m0,(U64)si0+32U);
l9=si0;
goto L11;
L13:;
si0=l1;
si1=112U;
si0+=si1;
l4=si0;
L12:;
si0=l2;
si1=l4;
i32_store(&i->m0,(U64)si0+56U,si1);
goto L9;
L11:;
si0=l9;
si1=l10;
si2=7U;
si1<<=(si2&31);
si0+=si1;
l1=si0;
si1=l8;
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
si1=4U;
si0+=si1;
si1=l2;
si2=72U;
si1+=si2;
si2=124U;
si0=f15390(i,si0,si1,si2);
si0=l2;
si1=l10;
si2=1U;
si1+=si2;
l10=si1;
i32_store(&i->m0,(U64)si0+40U,si1);
si0=l2;
si0=i32_load(&i->m0,(U64)si0+56U);
l1=si0;
si1=l2;
si1=i32_load(&i->m0,(U64)si1+60U);
l4=si1;
si0=si0 != si1;
if(si0){
goto L10;
}
}
L9:;
si0=l2;
si1=48U;
si0+=si1;
f1690(i,si0);
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
si0=l0;
si1=l2;
sj1=i64_load(&i->m0,(U64)si1+32U);
i64_store(&i->m0,(U64)si0,sj1);
L2:;
si0=l2;
si1=560U;
si0+=si1;
i->g0=si0;
goto L0;
L1:;
si0=8U;
si1=512U;
f52(i,si0,si1);
UNREACHABLE;
L0:;
}

void f1652(rustpythonInstance*i,U32 l0,U32 l1) {
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
U32 si0,si1,si2,si3;
U64 sj1;
si0=i->g0;
si1=144U;
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
si0=i32_load(&i->m0,(U64)si0+8U);
l5=si0;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+12U);
l6=si1;
si0=si0 == si1;
if(si0){
goto L3;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+16U);
l7=si0;
si0=l2;
si1=96U;
si0+=si1;
si1=4U;
si0|=si1;
l8=si0;
L5:;
{
si0=l5;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L4;
}
si0=l5;
si0=i32_load(&i->m0,(U64)si0+36U);
l1=si0;
si0=l2;
si1=56U;
si0+=si1;
si1=32U;
si0+=si1;
si1=l5;
si2=32U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=56U;
si0+=si1;
si1=24U;
si0+=si1;
si1=l5;
si2=24U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=56U;
si0+=si1;
si1=16U;
si0+=si1;
si1=l5;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=56U;
si0+=si1;
si1=8U;
si0+=si1;
si1=l5;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=l5;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+56U,sj1);
si0=l2;
si1=96U;
si0+=si1;
si1=l7;
si2=l2;
si3=56U;
si2+=si3;
f1629(i,si0,si1,si2);
si0=l1;
if(si0){
goto L7;
}
si0=0U;
l1=si0;
goto L6;
L7:;
si0=l1;
si1=l7;
si0=f1701(i,si0,si1);
l1=si0;
L6:;
si0=l2;
si1=40U;
si0+=si1;
si1=8U;
si0+=si1;
si1=l8;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=l8;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+40U,sj1);
si0=l2;
si0=i32_load(&i->m0,(U64)si0+96U);
l9=si0;
if(si0){
goto L2;
}
si0=l5;
si1=40U;
si0+=si1;
l5=si0;
si1=l6;
si0=si0 != si1;
if(si0){
goto L5;
}
}
si0=l6;
l5=si0;
goto L3;
L4:;
si0=l5;
si1=40U;
si0+=si1;
l5=si0;
L3:;
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l0;
sj1=4ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=l6;
si2=l5;
si1-=si2;
si2=40U;
si1=DIV_U(si1,si2);
f1688(i,si0,si1);
si0=l3;
si0=!(si0);
if(si0){
goto L1;
}
si0=l4;
f15271(i,si0);
goto L1;
L2:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+112U);
l8=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+116U);
l10=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+120U);
l11=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+124U);
l12=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+128U);
l13=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+132U);
l14=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+136U);
l15=si0;
si0=l2;
si1=24U;
si0+=si1;
si1=8U;
si0+=si1;
l16=si0;
si1=l2;
si2=40U;
si1+=si2;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=l2;
sj1=i64_load(&i->m0,(U64)si1+40U);
i64_store(&i->m0,(U64)si0+24U,sj1);
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=192U;
si0=f15269(i,si0);
l17=si0;
si0=!(si0);
if(si0){
goto L10;
}
si0=l17;
si1=l9;
i32_store(&i->m0,(U64)si0,si1);
si0=l17;
si1=l2;
sj1=i64_load(&i->m0,(U64)si1+24U);
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l17;
si1=l1;
i32_store(&i->m0,(U64)si0+44U,si1);
si0=l17;
si1=l15;
i32_store(&i->m0,(U64)si0+40U,si1);
si0=l17;
si1=l14;
i32_store(&i->m0,(U64)si0+36U,si1);
si0=l17;
si1=l13;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l17;
si1=l12;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l17;
si1=l11;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l17;
si1=l10;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l17;
si1=l8;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l17;
si1=12U;
si0+=si1;
si1=l16;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
sj1=4294967300ULL;
i64_store(&i->m0,(U64)si0+12U,sj1);
si0=l2;
si1=l17;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l5;
si1=40U;
si0+=si1;
l5=si0;
si1=l6;
si0=si0 == si1;
if(si0){
goto L9;
}
si0=l2;
si1=96U;
si0+=si1;
si1=4U;
si0|=si1;
l9=si0;
si0=1U;
l12=si0;
L11:;
{
si0=l5;
si1=40U;
si0+=si1;
l8=si0;
L12:;
{
si0=l5;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L13;
}
si0=l5;
si1=40U;
si0+=si1;
l5=si0;
goto L8;
L13:;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+36U);
l1=si0;
si0=l2;
si1=56U;
si0+=si1;
si1=32U;
si0+=si1;
si1=l5;
si2=32U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=56U;
si0+=si1;
si1=24U;
si0+=si1;
si1=l5;
si2=24U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=56U;
si0+=si1;
si1=16U;
si0+=si1;
si1=l5;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=56U;
si0+=si1;
si1=8U;
si0+=si1;
si1=l5;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=l5;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+56U,sj1);
si0=l2;
si1=96U;
si0+=si1;
si1=l7;
si2=l2;
si3=56U;
si2+=si3;
f1629(i,si0,si1,si2);
si0=l1;
if(si0){
goto L15;
}
si0=0U;
l1=si0;
goto L14;
L15:;
si0=l1;
si1=l7;
si0=f1701(i,si0,si1);
l1=si0;
L14:;
si0=l2;
si1=40U;
si0+=si1;
si1=8U;
si0+=si1;
l10=si0;
si1=l9;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=l9;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+40U,sj1);
si0=l2;
si0=i32_load(&i->m0,(U64)si0+96U);
l11=si0;
if(si0){
goto L16;
}
si0=l8;
si1=40U;
si0+=si1;
l8=si0;
si0=l5;
si1=40U;
si0+=si1;
l5=si0;
si1=l6;
si0=si0 == si1;
if(si0){
goto L9;
}
goto L12;
L16:;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0+112U);
l13=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+116U);
l14=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+120U);
l15=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+124U);
l16=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+128U);
l18=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+132U);
l19=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+136U);
l20=si0;
si0=l2;
si1=24U;
si0+=si1;
si1=8U;
si0+=si1;
l21=si0;
si1=l10;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=l2;
sj1=i64_load(&i->m0,(U64)si1+40U);
i64_store(&i->m0,(U64)si0+24U,sj1);
si0=l5;
si1=40U;
si0+=si1;
l5=si0;
si0=l12;
si1=l2;
si1=i32_load(&i->m0,(U64)si1+12U);
si0=si0 != si1;
if(si0){
goto L17;
}
si0=l2;
si1=8U;
si0+=si1;
si1=l12;
si2=1U;
f1677(i,si0,si1,si2);
si0=l2;
si0=i32_load(&i->m0,(U64)si0+8U);
l17=si0;
L17:;
si0=l17;
si1=l12;
si2=48U;
si1*=si2;
si0+=si1;
l8=si0;
si1=l11;
i32_store(&i->m0,(U64)si0,si1);
si0=l8;
si1=l2;
sj1=i64_load(&i->m0,(U64)si1+24U);
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l8;
si1=12U;
si0+=si1;
si1=l21;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l8;
si1=l1;
i32_store(&i->m0,(U64)si0+44U,si1);
si0=l8;
si1=l20;
i32_store(&i->m0,(U64)si0+40U,si1);
si0=l8;
si1=l19;
i32_store(&i->m0,(U64)si0+36U,si1);
si0=l8;
si1=l18;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l8;
si1=l16;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l8;
si1=l15;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l8;
si1=l14;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l8;
si1=l13;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l2;
si1=l12;
si2=1U;
si1+=si2;
l12=si1;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l5;
si1=l6;
si0=si0 == si1;
if(si0){
goto L9;
}
goto L11;
}
L10:;
si0=4U;
si1=192U;
f52(i,si0,si1);
UNREACHABLE;
L9:;
si0=l6;
l8=si0;
si0=l6;
l5=si0;
L8:;
si0=l5;
si1=l6;
si2=l8;
si1-=si2;
si2=40U;
si1=DIV_U(si1,si2);
f1688(i,si0,si1);
si0=l3;
si0=!(si0);
if(si0){
goto L18;
}
si0=l4;
f15271(i,si0);
L18:;
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
L1:;
si0=l2;
si1=144U;
si0+=si1;
i->g0=si0;
L0:;
}

void f1653(rustpythonInstance*i,U32 l0,U32 l1) {
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
U32 si0,si1,si2,si3;
U64 sj1;
si0=i->g0;
si1=240U;
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
si0=i32_load(&i->m0,(U64)si0+8U);
l5=si0;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+12U);
l6=si1;
si0=si0 == si1;
if(si0){
goto L5;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+16U);
l7=si0;
si0=l2;
si1=136U;
si0+=si1;
si1=4U;
si0|=si1;
l1=si0;
si0=l2;
si1=192U;
si0+=si1;
si1=4U;
si0|=si1;
l8=si0;
si1=40U;
si0+=si1;
l9=si0;
si0=l8;
si1=32U;
si0+=si1;
l10=si0;
si0=l8;
si1=24U;
si0+=si1;
l11=si0;
si0=l8;
si1=16U;
si0+=si1;
l12=si0;
si0=l8;
si1=8U;
si0+=si1;
l13=si0;
L7:;
{
si0=l5;
si0=i32_load(&i->m0,(U64)si0);
l14=si0;
si1=38U;
si0=si0 == si1;
if(si0){
goto L6;
}
si0=l8;
si1=l5;
sj1=i64_load(&i->m0,(U64)si1+4U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l9;
si1=l5;
si2=44U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l10;
si1=l5;
si2=36U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l11;
si1=l5;
si2=28U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l12;
si1=l5;
si2=20U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l13;
si1=l5;
si2=12U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=l14;
i32_store(&i->m0,(U64)si0+192U,si1);
si0=l2;
si1=136U;
si0+=si1;
si1=l7;
si2=l2;
si3=192U;
si2+=si3;
f1594(i,si0,si1,si2);
si0=l2;
si0=i32_load(&i->m0,(U64)si0+136U);
l14=si0;
si1=38U;
si0=si0 == si1;
if(si0){
goto L8;
}
si0=l2;
si1=80U;
si0+=si1;
si1=48U;
si0+=si1;
si1=l1;
si2=48U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=80U;
si0+=si1;
si1=40U;
si0+=si1;
si1=l1;
si2=40U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=80U;
si0+=si1;
si1=32U;
si0+=si1;
si1=l1;
si2=32U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=80U;
si0+=si1;
si1=24U;
si0+=si1;
si1=l1;
si2=24U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=80U;
si0+=si1;
si1=16U;
si0+=si1;
si1=l1;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=80U;
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
i64_store(&i->m0,(U64)si0+80U,sj1);
si0=l14;
si1=39U;
si0=si0 != si1;
if(si0){
goto L3;
}
L8:;
si0=l5;
si1=48U;
si0+=si1;
l5=si0;
si1=l6;
si0=si0 != si1;
if(si0){
goto L7;
}
}
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l0;
sj1=8ULL;
i64_store(&i->m0,(U64)si0,sj1);
goto L4;
L6:;
si0=l5;
si1=48U;
si0+=si1;
l5=si0;
L5:;
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l0;
sj1=8ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l6;
si1=l5;
si0-=si1;
si1=48U;
si0=DIV_U(si0,si1);
l1=si0;
si0=l6;
si1=l5;
si0=si0 == si1;
if(si0){
goto L4;
}
L9:;
{
si0=l5;
f1684(i,si0);
si0=l5;
si1=48U;
si0+=si1;
l5=si0;
si0=l1;
si1=-1U;
si0+=si1;
l1=si0;
if(si0){
goto L9;
}
}
L4:;
si0=l3;
si0=!(si0);
if(si0){
goto L2;
}
si0=l4;
f15271(i,si0);
goto L2;
L3:;
si0=l2;
si1=24U;
si0+=si1;
si1=48U;
si0+=si1;
l1=si0;
si1=l2;
si2=80U;
si1+=si2;
si2=48U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=24U;
si0+=si1;
si1=40U;
si0+=si1;
l8=si0;
si1=l2;
si2=80U;
si1+=si2;
si2=40U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=24U;
si0+=si1;
si1=32U;
si0+=si1;
l9=si0;
si1=l2;
si2=80U;
si1+=si2;
si2=32U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=24U;
si0+=si1;
si1=24U;
si0+=si1;
l10=si0;
si1=l2;
si2=80U;
si1+=si2;
si2=24U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=24U;
si0+=si1;
si1=16U;
si0+=si1;
l11=si0;
si1=l2;
si2=80U;
si1+=si2;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=24U;
si0+=si1;
si1=8U;
si0+=si1;
l12=si0;
si1=l2;
si2=80U;
si1+=si2;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=l2;
sj1=i64_load(&i->m0,(U64)si1+80U);
i64_store(&i->m0,(U64)si0+24U,sj1);
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=224U;
si0=f15269(i,si0);
l15=si0;
si0=!(si0);
if(si0){
goto L1;
}
si0=l15;
si1=l14;
i32_store(&i->m0,(U64)si0,si1);
si0=l15;
si1=l2;
sj1=i64_load(&i->m0,(U64)si1+24U);
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l15;
si1=12U;
si0+=si1;
si1=l12;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l15;
si1=20U;
si0+=si1;
si1=l11;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l15;
si1=28U;
si0+=si1;
si1=l10;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l15;
si1=36U;
si0+=si1;
si1=l9;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l15;
si1=44U;
si0+=si1;
si1=l8;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l15;
si1=52U;
si0+=si1;
si1=l1;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
sj1=4294967300ULL;
i64_store(&i->m0,(U64)si0+12U,sj1);
si0=l2;
si1=l15;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l5;
si1=48U;
si0+=si1;
l5=si0;
si1=l6;
si0=si0 == si1;
if(si0){
goto L10;
}
si0=l6;
si1=-48U;
si0+=si1;
l16=si0;
si0=l2;
si1=136U;
si0+=si1;
si1=4U;
si0|=si1;
l1=si0;
si0=l2;
si1=192U;
si0+=si1;
si1=4U;
si0|=si1;
l9=si0;
si1=40U;
si0+=si1;
l10=si0;
si0=l9;
si1=32U;
si0+=si1;
l11=si0;
si0=l9;
si1=24U;
si0+=si1;
l12=si0;
si0=l9;
si1=16U;
si0+=si1;
l13=si0;
si0=l9;
si1=8U;
si0+=si1;
l17=si0;
si0=1U;
l18=si0;
L11:;
{
si0=l16;
si1=l5;
si0-=si1;
l14=si0;
L15:;
{
si0=l5;
si0=i32_load(&i->m0,(U64)si0);
l8=si0;
si1=38U;
si0=si0 == si1;
if(si0){
goto L14;
}
si0=l9;
si1=l5;
sj1=i64_load(&i->m0,(U64)si1+4U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l10;
si1=l5;
si2=44U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l11;
si1=l5;
si2=36U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l12;
si1=l5;
si2=28U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l13;
si1=l5;
si2=20U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l17;
si1=l5;
si2=12U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=l8;
i32_store(&i->m0,(U64)si0+192U,si1);
si0=l2;
si1=136U;
si0+=si1;
si1=l7;
si2=l2;
si3=192U;
si2+=si3;
f1594(i,si0,si1,si2);
si0=l2;
si0=i32_load(&i->m0,(U64)si0+136U);
l8=si0;
si1=38U;
si0=si0 == si1;
if(si0){
goto L17;
}
si0=l2;
si1=80U;
si0+=si1;
si1=48U;
si0+=si1;
l19=si0;
si1=l1;
si2=48U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=80U;
si0+=si1;
si1=40U;
si0+=si1;
l20=si0;
si1=l1;
si2=40U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=80U;
si0+=si1;
si1=32U;
si0+=si1;
l21=si0;
si1=l1;
si2=32U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=80U;
si0+=si1;
si1=24U;
si0+=si1;
l22=si0;
si1=l1;
si2=24U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=80U;
si0+=si1;
si1=16U;
si0+=si1;
l23=si0;
si1=l1;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=80U;
si0+=si1;
si1=8U;
si0+=si1;
l24=si0;
si1=l1;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=l1;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+80U,sj1);
si0=l8;
si1=39U;
si0=si0 != si1;
if(si0){
goto L16;
}
L17:;
si0=l14;
si1=-48U;
si0+=si1;
l14=si0;
si0=l5;
si1=48U;
si0+=si1;
l5=si0;
si1=l6;
si0=si0 != si1;
if(si0){
goto L15;
}
goto L10;
L16:;
}
si0=l2;
si1=24U;
si0+=si1;
si1=48U;
si0+=si1;
l25=si0;
si1=l19;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=24U;
si0+=si1;
si1=40U;
si0+=si1;
l19=si0;
si1=l20;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=24U;
si0+=si1;
si1=32U;
si0+=si1;
l20=si0;
si1=l21;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=24U;
si0+=si1;
si1=24U;
si0+=si1;
l21=si0;
si1=l22;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=24U;
si0+=si1;
si1=16U;
si0+=si1;
l22=si0;
si1=l23;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=24U;
si0+=si1;
si1=8U;
si0+=si1;
l23=si0;
si1=l24;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=l2;
sj1=i64_load(&i->m0,(U64)si1+80U);
i64_store(&i->m0,(U64)si0+24U,sj1);
si0=l5;
si1=48U;
si0+=si1;
l5=si0;
si0=l18;
si1=l2;
si1=i32_load(&i->m0,(U64)si1+12U);
si0=si0 == si1;
if(si0){
goto L13;
}
goto L12;
L14:;
si0=l5;
si1=48U;
si0+=si1;
l5=si0;
si1=l6;
si0=si0 == si1;
if(si0){
goto L10;
}
si0=l14;
si1=48U;
si0=DIV_U(si0,si1);
l1=si0;
L18:;
{
si0=l5;
f1684(i,si0);
si0=l5;
si1=48U;
si0+=si1;
l5=si0;
si0=l1;
si1=-1U;
si0+=si1;
l1=si0;
if(si0){
goto L18;
}
goto L10;
}
L13:;
si0=l2;
si1=8U;
si0+=si1;
si1=l18;
si2=1U;
f1671(i,si0,si1,si2);
si0=l2;
si0=i32_load(&i->m0,(U64)si0+8U);
l15=si0;
L12:;
si0=l15;
si1=l18;
si2=56U;
si1*=si2;
si0+=si1;
l14=si0;
si1=l8;
i32_store(&i->m0,(U64)si0,si1);
si0=l14;
si1=l2;
sj1=i64_load(&i->m0,(U64)si1+24U);
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l14;
si1=12U;
si0+=si1;
si1=l23;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l14;
si1=20U;
si0+=si1;
si1=l22;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l14;
si1=28U;
si0+=si1;
si1=l21;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l14;
si1=36U;
si0+=si1;
si1=l20;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l14;
si1=44U;
si0+=si1;
si1=l19;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l14;
si1=52U;
si0+=si1;
si1=l25;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=l18;
si2=1U;
si1+=si2;
l18=si1;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l5;
si1=l6;
si0=si0 != si1;
if(si0){
goto L11;
}
}
L10:;
si0=l3;
si0=!(si0);
if(si0){
goto L19;
}
si0=l4;
f15271(i,si0);
L19:;
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
si1=240U;
si0+=si1;
i->g0=si0;
goto L0;
L1:;
si0=8U;
si1=224U;
f52(i,si0,si1);
UNREACHABLE;
L0:;
}

void f1654(rustpythonInstance*i,U32 l0,U32 l1) {
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
si0=i->g0;
si1=400U;
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
si0=i32_load(&i->m0,(U64)si0+8U);
l5=si0;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+12U);
l6=si1;
si0=si0 == si1;
if(si0){
goto L6;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+16U);
l7=si0;
si0=l2;
si1=248U;
si0+=si1;
si1=4U;
si0|=si1;
l8=si0;
L7:;
{
si0=l2;
si1=96U;
si0+=si1;
si1=l5;
si2=72U;
si0=f15390(i,si0,si1,si2);
si0=l2;
si0=i32_load(&i->m0,(U64)si0+96U);
si1=27U;
si0=si0 == si1;
if(si0){
goto L5;
}
si0=l2;
si1=328U;
si0+=si1;
si1=l5;
si2=72U;
si0=f15390(i,si0,si1,si2);
si0=l2;
si1=248U;
si0+=si1;
si1=l7;
si2=l2;
si3=328U;
si2+=si3;
f1577(i,si0,si1,si2);
si0=l2;
si0=i32_load(&i->m0,(U64)si0+248U);
l1=si0;
si1=27U;
si0=si0 == si1;
if(si0){
goto L8;
}
si0=l2;
si1=172U;
si0+=si1;
si1=l8;
si2=76U;
si0=f15390(i,si0,si1,si2);
si0=l1;
si1=28U;
si0=si0 != si1;
if(si0){
goto L3;
}
L8:;
si0=l5;
si1=72U;
si0+=si1;
l5=si0;
si1=l6;
si0=si0 != si1;
if(si0){
goto L7;
}
}
si0=l6;
l5=si0;
L6:;
si0=l2;
si1=27U;
i32_store(&i->m0,(U64)si0+96U,si1);
goto L4;
L5:;
si0=l5;
si1=72U;
si0+=si1;
l5=si0;
L4:;
si0=l2;
si1=96U;
si0+=si1;
f1682(i,si0);
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l0;
sj1=4ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=l6;
si2=l5;
si1-=si2;
si2=72U;
si1=DIV_U(si1,si2);
f1687(i,si0,si1);
si0=l3;
si0=!(si0);
if(si0){
goto L2;
}
si0=l4;
f15271(i,si0);
goto L2;
L3:;
si0=l2;
si1=20U;
si0+=si1;
si1=l2;
si2=172U;
si1+=si2;
si2=76U;
si0=f15390(i,si0,si1,si2);
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=320U;
si0=f15269(i,si0);
l9=si0;
si0=!(si0);
if(si0){
goto L1;
}
si0=l9;
si1=l1;
i32_store(&i->m0,(U64)si0,si1);
si0=l9;
si1=4U;
si0+=si1;
si1=l2;
si2=20U;
si1+=si2;
si2=76U;
si0=f15390(i,si0,si1,si2);
si0=l2;
sj1=4294967300ULL;
i64_store(&i->m0,(U64)si0+12U,sj1);
si0=l2;
si1=l9;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l5;
si1=72U;
si0+=si1;
l5=si0;
si1=l6;
si0=si0 == si1;
if(si0){
goto L10;
}
si0=l2;
si1=248U;
si0+=si1;
si1=4U;
si0|=si1;
l10=si0;
si0=1U;
l11=si0;
L11:;
{
si0=l5;
si1=72U;
si0+=si1;
l1=si0;
L14:;
{
si0=l2;
si1=96U;
si0+=si1;
si1=l5;
si2=72U;
si0=f15390(i,si0,si1,si2);
si0=l2;
si0=i32_load(&i->m0,(U64)si0+96U);
si1=27U;
si0=si0 == si1;
if(si0){
goto L13;
}
si0=l2;
si1=328U;
si0+=si1;
si1=l5;
si2=72U;
si0=f15390(i,si0,si1,si2);
si0=l2;
si1=248U;
si0+=si1;
si1=l7;
si2=l2;
si3=328U;
si2+=si3;
f1577(i,si0,si1,si2);
si0=l2;
si0=i32_load(&i->m0,(U64)si0+248U);
l8=si0;
si1=27U;
si0=si0 == si1;
if(si0){
goto L16;
}
si0=l2;
si1=172U;
si0+=si1;
si1=l10;
si2=76U;
si0=f15390(i,si0,si1,si2);
si0=l8;
si1=28U;
si0=si0 != si1;
if(si0){
goto L15;
}
L16:;
si0=l1;
si1=72U;
si0+=si1;
l1=si0;
si0=l5;
si1=72U;
si0+=si1;
l5=si0;
si1=l6;
si0=si0 != si1;
if(si0){
goto L14;
}
goto L10;
L15:;
}
si0=l2;
si1=20U;
si0+=si1;
si1=l2;
si2=172U;
si1+=si2;
si2=76U;
si0=f15390(i,si0,si1,si2);
si0=l5;
si1=72U;
si0+=si1;
l5=si0;
si0=l11;
si1=l2;
si1=i32_load(&i->m0,(U64)si1+12U);
si0=si0 != si1;
if(si0){
goto L12;
}
si0=l2;
si1=8U;
si0+=si1;
si1=l11;
si2=1U;
f1679(i,si0,si1,si2);
si0=l2;
si0=i32_load(&i->m0,(U64)si0+8U);
l9=si0;
goto L12;
L13:;
si0=l5;
si1=72U;
si0+=si1;
l5=si0;
goto L9;
L12:;
si0=l9;
si1=l11;
si2=80U;
si1*=si2;
si0+=si1;
l1=si0;
si1=l8;
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
si1=4U;
si0+=si1;
si1=l2;
si2=20U;
si1+=si2;
si2=76U;
si0=f15390(i,si0,si1,si2);
si0=l2;
si1=l11;
si2=1U;
si1+=si2;
l11=si1;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l5;
si1=l6;
si0=si0 != si1;
if(si0){
goto L11;
}
}
L10:;
si0=l2;
si1=27U;
i32_store(&i->m0,(U64)si0+96U,si1);
si0=l6;
l1=si0;
si0=l6;
l5=si0;
L9:;
si0=l2;
si1=96U;
si0+=si1;
f1682(i,si0);
si0=l5;
si1=l6;
si2=l1;
si1-=si2;
si2=72U;
si1=DIV_U(si1,si2);
f1687(i,si0,si1);
si0=l3;
si0=!(si0);
if(si0){
goto L17;
}
si0=l4;
f15271(i,si0);
L17:;
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
si1=400U;
si0+=si1;
i->g0=si0;
goto L0;
L1:;
si0=4U;
si1=320U;
f52(i,si0,si1);
UNREACHABLE;
L0:;
}

void f1655(rustpythonInstance*i,U32 l0,U32 l1) {
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
U32 si0,si1,si2,si3;
U64 sj1;
si0=i->g0;
si1=240U;
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
si0=i32_load(&i->m0,(U64)si0+8U);
l5=si0;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+12U);
l6=si1;
si0=si0 == si1;
if(si0){
goto L5;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+16U);
l7=si0;
si0=l2;
si1=136U;
si0+=si1;
si1=4U;
si0|=si1;
l1=si0;
si0=l2;
si1=192U;
si0+=si1;
si1=4U;
si0|=si1;
l8=si0;
si1=40U;
si0+=si1;
l9=si0;
si0=l8;
si1=32U;
si0+=si1;
l10=si0;
si0=l8;
si1=24U;
si0+=si1;
l11=si0;
si0=l8;
si1=16U;
si0+=si1;
l12=si0;
si0=l8;
si1=8U;
si0+=si1;
l13=si0;
L7:;
{
si0=l5;
si0=i32_load(&i->m0,(U64)si0);
l14=si0;
si1=38U;
si0=si0 == si1;
if(si0){
goto L6;
}
si0=l8;
si1=l5;
sj1=i64_load(&i->m0,(U64)si1+4U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l9;
si1=l5;
si2=44U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l10;
si1=l5;
si2=36U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l11;
si1=l5;
si2=28U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l12;
si1=l5;
si2=20U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l13;
si1=l5;
si2=12U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=l14;
i32_store(&i->m0,(U64)si0+192U,si1);
si0=l2;
si1=136U;
si0+=si1;
si1=l7;
si2=l2;
si3=192U;
si2+=si3;
f1595(i,si0,si1,si2);
si0=l2;
si0=i32_load(&i->m0,(U64)si0+136U);
l14=si0;
si1=38U;
si0=si0 == si1;
if(si0){
goto L8;
}
si0=l2;
si1=80U;
si0+=si1;
si1=48U;
si0+=si1;
si1=l1;
si2=48U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=80U;
si0+=si1;
si1=40U;
si0+=si1;
si1=l1;
si2=40U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=80U;
si0+=si1;
si1=32U;
si0+=si1;
si1=l1;
si2=32U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=80U;
si0+=si1;
si1=24U;
si0+=si1;
si1=l1;
si2=24U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=80U;
si0+=si1;
si1=16U;
si0+=si1;
si1=l1;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=80U;
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
i64_store(&i->m0,(U64)si0+80U,sj1);
si0=l14;
si1=39U;
si0=si0 != si1;
if(si0){
goto L3;
}
L8:;
si0=l5;
si1=48U;
si0+=si1;
l5=si0;
si1=l6;
si0=si0 != si1;
if(si0){
goto L7;
}
}
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l0;
sj1=8ULL;
i64_store(&i->m0,(U64)si0,sj1);
goto L4;
L6:;
si0=l5;
si1=48U;
si0+=si1;
l5=si0;
L5:;
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l0;
sj1=8ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l6;
si1=l5;
si0-=si1;
si1=48U;
si0=DIV_U(si0,si1);
l1=si0;
si0=l6;
si1=l5;
si0=si0 == si1;
if(si0){
goto L4;
}
L9:;
{
si0=l5;
f1684(i,si0);
si0=l5;
si1=48U;
si0+=si1;
l5=si0;
si0=l1;
si1=-1U;
si0+=si1;
l1=si0;
if(si0){
goto L9;
}
}
L4:;
si0=l3;
si0=!(si0);
if(si0){
goto L2;
}
si0=l4;
f15271(i,si0);
goto L2;
L3:;
si0=l2;
si1=24U;
si0+=si1;
si1=48U;
si0+=si1;
l1=si0;
si1=l2;
si2=80U;
si1+=si2;
si2=48U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=24U;
si0+=si1;
si1=40U;
si0+=si1;
l8=si0;
si1=l2;
si2=80U;
si1+=si2;
si2=40U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=24U;
si0+=si1;
si1=32U;
si0+=si1;
l9=si0;
si1=l2;
si2=80U;
si1+=si2;
si2=32U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=24U;
si0+=si1;
si1=24U;
si0+=si1;
l10=si0;
si1=l2;
si2=80U;
si1+=si2;
si2=24U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=24U;
si0+=si1;
si1=16U;
si0+=si1;
l11=si0;
si1=l2;
si2=80U;
si1+=si2;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=24U;
si0+=si1;
si1=8U;
si0+=si1;
l12=si0;
si1=l2;
si2=80U;
si1+=si2;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=l2;
sj1=i64_load(&i->m0,(U64)si1+80U);
i64_store(&i->m0,(U64)si0+24U,sj1);
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=224U;
si0=f15269(i,si0);
l15=si0;
si0=!(si0);
if(si0){
goto L1;
}
si0=l15;
si1=l14;
i32_store(&i->m0,(U64)si0,si1);
si0=l15;
si1=l2;
sj1=i64_load(&i->m0,(U64)si1+24U);
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l15;
si1=12U;
si0+=si1;
si1=l12;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l15;
si1=20U;
si0+=si1;
si1=l11;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l15;
si1=28U;
si0+=si1;
si1=l10;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l15;
si1=36U;
si0+=si1;
si1=l9;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l15;
si1=44U;
si0+=si1;
si1=l8;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l15;
si1=52U;
si0+=si1;
si1=l1;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
sj1=4294967300ULL;
i64_store(&i->m0,(U64)si0+12U,sj1);
si0=l2;
si1=l15;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l5;
si1=48U;
si0+=si1;
l5=si0;
si1=l6;
si0=si0 == si1;
if(si0){
goto L10;
}
si0=l6;
si1=-48U;
si0+=si1;
l16=si0;
si0=l2;
si1=136U;
si0+=si1;
si1=4U;
si0|=si1;
l1=si0;
si0=l2;
si1=192U;
si0+=si1;
si1=4U;
si0|=si1;
l9=si0;
si1=40U;
si0+=si1;
l10=si0;
si0=l9;
si1=32U;
si0+=si1;
l11=si0;
si0=l9;
si1=24U;
si0+=si1;
l12=si0;
si0=l9;
si1=16U;
si0+=si1;
l13=si0;
si0=l9;
si1=8U;
si0+=si1;
l17=si0;
si0=1U;
l18=si0;
L11:;
{
si0=l16;
si1=l5;
si0-=si1;
l14=si0;
L15:;
{
si0=l5;
si0=i32_load(&i->m0,(U64)si0);
l8=si0;
si1=38U;
si0=si0 == si1;
if(si0){
goto L14;
}
si0=l9;
si1=l5;
sj1=i64_load(&i->m0,(U64)si1+4U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l10;
si1=l5;
si2=44U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l11;
si1=l5;
si2=36U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l12;
si1=l5;
si2=28U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l13;
si1=l5;
si2=20U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l17;
si1=l5;
si2=12U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=l8;
i32_store(&i->m0,(U64)si0+192U,si1);
si0=l2;
si1=136U;
si0+=si1;
si1=l7;
si2=l2;
si3=192U;
si2+=si3;
f1595(i,si0,si1,si2);
si0=l2;
si0=i32_load(&i->m0,(U64)si0+136U);
l8=si0;
si1=38U;
si0=si0 == si1;
if(si0){
goto L17;
}
si0=l2;
si1=80U;
si0+=si1;
si1=48U;
si0+=si1;
l19=si0;
si1=l1;
si2=48U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=80U;
si0+=si1;
si1=40U;
si0+=si1;
l20=si0;
si1=l1;
si2=40U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=80U;
si0+=si1;
si1=32U;
si0+=si1;
l21=si0;
si1=l1;
si2=32U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=80U;
si0+=si1;
si1=24U;
si0+=si1;
l22=si0;
si1=l1;
si2=24U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=80U;
si0+=si1;
si1=16U;
si0+=si1;
l23=si0;
si1=l1;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=80U;
si0+=si1;
si1=8U;
si0+=si1;
l24=si0;
si1=l1;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=l1;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+80U,sj1);
si0=l8;
si1=39U;
si0=si0 != si1;
if(si0){
goto L16;
}
L17:;
si0=l14;
si1=-48U;
si0+=si1;
l14=si0;
si0=l5;
si1=48U;
si0+=si1;
l5=si0;
si1=l6;
si0=si0 != si1;
if(si0){
goto L15;
}
goto L10;
L16:;
}
si0=l2;
si1=24U;
si0+=si1;
si1=48U;
si0+=si1;
l25=si0;
si1=l19;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=24U;
si0+=si1;
si1=40U;
si0+=si1;
l19=si0;
si1=l20;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=24U;
si0+=si1;
si1=32U;
si0+=si1;
l20=si0;
si1=l21;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=24U;
si0+=si1;
si1=24U;
si0+=si1;
l21=si0;
si1=l22;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=24U;
si0+=si1;
si1=16U;
si0+=si1;
l22=si0;
si1=l23;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=24U;
si0+=si1;
si1=8U;
si0+=si1;
l23=si0;
si1=l24;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=l2;
sj1=i64_load(&i->m0,(U64)si1+80U);
i64_store(&i->m0,(U64)si0+24U,sj1);
si0=l5;
si1=48U;
si0+=si1;
l5=si0;
si0=l18;
si1=l2;
si1=i32_load(&i->m0,(U64)si1+12U);
si0=si0 == si1;
if(si0){
goto L13;
}
goto L12;
L14:;
si0=l5;
si1=48U;
si0+=si1;
l5=si0;
si1=l6;
si0=si0 == si1;
if(si0){
goto L10;
}
si0=l14;
si1=48U;
si0=DIV_U(si0,si1);
l1=si0;
L18:;
{
si0=l5;
f1684(i,si0);
si0=l5;
si1=48U;
si0+=si1;
l5=si0;
si0=l1;
si1=-1U;
si0+=si1;
l1=si0;
if(si0){
goto L18;
}
goto L10;
}
L13:;
si0=l2;
si1=8U;
si0+=si1;
si1=l18;
si2=1U;
f1671(i,si0,si1,si2);
si0=l2;
si0=i32_load(&i->m0,(U64)si0+8U);
l15=si0;
L12:;
si0=l15;
si1=l18;
si2=56U;
si1*=si2;
si0+=si1;
l14=si0;
si1=l8;
i32_store(&i->m0,(U64)si0,si1);
si0=l14;
si1=l2;
sj1=i64_load(&i->m0,(U64)si1+24U);
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l14;
si1=12U;
si0+=si1;
si1=l23;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l14;
si1=20U;
si0+=si1;
si1=l22;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l14;
si1=28U;
si0+=si1;
si1=l21;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l14;
si1=36U;
si0+=si1;
si1=l20;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l14;
si1=44U;
si0+=si1;
si1=l19;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l14;
si1=52U;
si0+=si1;
si1=l25;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=l18;
si2=1U;
si1+=si2;
l18=si1;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l5;
si1=l6;
si0=si0 != si1;
if(si0){
goto L11;
}
}
L10:;
si0=l3;
si0=!(si0);
if(si0){
goto L19;
}
si0=l4;
f15271(i,si0);
L19:;
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
si1=240U;
si0+=si1;
i->g0=si0;
goto L0;
L1:;
si0=8U;
si1=224U;
f52(i,si0,si1);
UNREACHABLE;
L0:;
}

void f1656(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 si0,si1,si2,si3;
U64 sj1;
si0=i->g0;
si1=304U;
si0-=si1;
l2=si0;
i->g0=si0;
si0=l2;
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
si1=l1;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=l1;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=216U;
si0+=si1;
si1=l2;
si2=l2;
si3=296U;
si2+=si3;
si3=l2;
si3=i32_load(&i->m0,(U64)si3+20U);
f1681(i,si0,si1,si2,si3);
si0=l2;
si0=i32_load(&i->m0,(U64)si0+216U);
l1=si0;
si1=9U;
si0=si0 == si1;
if(si0){
goto L4;
}
si0=l2;
si1=140U;
si0+=si1;
si1=l2;
si2=216U;
si1+=si2;
si2=4U;
si1|=si2;
si2=76U;
si0=f15390(i,si0,si1,si2);
si0=l1;
si1=8U;
si0=si0 != si1;
if(si0){
goto L3;
}
L4:;
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l0;
sj1=8ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
f1689(i,si0);
goto L2;
L3:;
si0=l2;
si1=64U;
si0+=si1;
si1=l2;
si2=140U;
si1+=si2;
si2=76U;
si0=f15390(i,si0,si1,si2);
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=320U;
si0=f15269(i,si0);
l3=si0;
si0=!(si0);
if(si0){
goto L1;
}
si0=l3;
si1=l1;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=4U;
si0+=si1;
si1=l2;
si2=64U;
si1+=si2;
si2=76U;
si0=f15390(i,si0,si1,si2);
si0=l2;
sj1=4294967300ULL;
i64_store(&i->m0,(U64)si0+28U,sj1);
si0=l2;
si1=l3;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l2;
si1=40U;
si0+=si1;
si1=16U;
si0+=si1;
si1=l2;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=40U;
si0+=si1;
si1=8U;
si0+=si1;
si1=l2;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=l2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+40U,sj1);
si0=l2;
si1=216U;
si0+=si1;
si1=l2;
si2=40U;
si1+=si2;
si2=l2;
si3=296U;
si2+=si3;
si3=l2;
si3=i32_load(&i->m0,(U64)si3+60U);
f1681(i,si0,si1,si2,si3);
si0=l2;
si0=i32_load(&i->m0,(U64)si0+216U);
l1=si0;
si1=9U;
si0=si0 == si1;
if(si0){
goto L5;
}
si0=l2;
si1=216U;
si0+=si1;
si1=4U;
si0|=si1;
l4=si0;
si0=84U;
l5=si0;
si0=1U;
l6=si0;
L6:;
{
si0=l2;
si1=140U;
si0+=si1;
si1=l4;
si2=76U;
si0=f15390(i,si0,si1,si2);
si0=l1;
si1=8U;
si0=si0 == si1;
if(si0){
goto L5;
}
si0=l2;
si1=64U;
si0+=si1;
si1=l2;
si2=140U;
si1+=si2;
si2=76U;
si0=f15390(i,si0,si1,si2);
si0=l6;
si1=l2;
si1=i32_load(&i->m0,(U64)si1+28U);
si0=si0 != si1;
if(si0){
goto L7;
}
si0=l2;
si1=24U;
si0+=si1;
si1=l6;
si2=1U;
f1672(i,si0,si1,si2);
si0=l2;
si0=i32_load(&i->m0,(U64)si0+24U);
l3=si0;
L7:;
si0=l3;
si1=l5;
si0+=si1;
l7=si0;
si1=-4U;
si0+=si1;
si1=l1;
i32_store(&i->m0,(U64)si0,si1);
si0=l7;
si1=l2;
si2=64U;
si1+=si2;
si2=76U;
si0=f15390(i,si0,si1,si2);
si0=l2;
si1=l6;
si2=1U;
si1+=si2;
l6=si1;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l2;
si1=216U;
si0+=si1;
si1=l2;
si2=40U;
si1+=si2;
si2=l2;
si3=296U;
si2+=si3;
si3=l2;
si3=i32_load(&i->m0,(U64)si3+60U);
f1681(i,si0,si1,si2,si3);
si0=l5;
si1=80U;
si0+=si1;
l5=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+216U);
l1=si0;
si1=9U;
si0=si0 != si1;
if(si0){
goto L6;
}
}
L5:;
si0=l2;
si1=40U;
si0+=si1;
f1689(i,si0);
si0=l0;
si1=8U;
si0+=si1;
si1=l2;
si2=24U;
si1+=si2;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l2;
sj1=i64_load(&i->m0,(U64)si1+24U);
i64_store(&i->m0,(U64)si0,sj1);
L2:;
si0=l2;
si1=304U;
si0+=si1;
i->g0=si0;
goto L0;
L1:;
si0=8U;
si1=320U;
f52(i,si0,si1);
UNREACHABLE;
L0:;
}

void f1657(rustpythonInstance*i,U32 l0,U32 l1) {
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
U32 si0,si1,si2,si3;
U64 sj1;
si0=i->g0;
si1=144U;
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
si0=i32_load(&i->m0,(U64)si0+8U);
l5=si0;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+12U);
l6=si1;
si0=si0 == si1;
if(si0){
goto L3;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+16U);
l7=si0;
si0=l2;
si1=96U;
si0+=si1;
si1=4U;
si0|=si1;
l8=si0;
L5:;
{
si0=l5;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L4;
}
si0=l5;
si0=i32_load(&i->m0,(U64)si0+36U);
l1=si0;
si0=l2;
si1=56U;
si0+=si1;
si1=32U;
si0+=si1;
si1=l5;
si2=32U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=56U;
si0+=si1;
si1=24U;
si0+=si1;
si1=l5;
si2=24U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=56U;
si0+=si1;
si1=16U;
si0+=si1;
si1=l5;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=56U;
si0+=si1;
si1=8U;
si0+=si1;
si1=l5;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=l5;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+56U,sj1);
si0=l2;
si1=96U;
si0+=si1;
si1=l7;
si2=l2;
si3=56U;
si2+=si3;
f1630(i,si0,si1,si2);
si0=l1;
if(si0){
goto L7;
}
si0=0U;
l1=si0;
goto L6;
L7:;
si0=l1;
si1=l7;
si0=f1702(i,si0,si1);
l1=si0;
L6:;
si0=l2;
si1=40U;
si0+=si1;
si1=8U;
si0+=si1;
si1=l8;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=l8;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+40U,sj1);
si0=l2;
si0=i32_load(&i->m0,(U64)si0+96U);
l9=si0;
if(si0){
goto L2;
}
si0=l5;
si1=40U;
si0+=si1;
l5=si0;
si1=l6;
si0=si0 != si1;
if(si0){
goto L5;
}
}
si0=l6;
l5=si0;
goto L3;
L4:;
si0=l5;
si1=40U;
si0+=si1;
l5=si0;
L3:;
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l0;
sj1=4ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=l6;
si2=l5;
si1-=si2;
si2=40U;
si1=DIV_U(si1,si2);
f1688(i,si0,si1);
si0=l3;
si0=!(si0);
if(si0){
goto L1;
}
si0=l4;
f15271(i,si0);
goto L1;
L2:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+112U);
l8=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+116U);
l10=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+120U);
l11=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+124U);
l12=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+128U);
l13=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+132U);
l14=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+136U);
l15=si0;
si0=l2;
si1=24U;
si0+=si1;
si1=8U;
si0+=si1;
l16=si0;
si1=l2;
si2=40U;
si1+=si2;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=l2;
sj1=i64_load(&i->m0,(U64)si1+40U);
i64_store(&i->m0,(U64)si0+24U,sj1);
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=192U;
si0=f15269(i,si0);
l17=si0;
si0=!(si0);
if(si0){
goto L10;
}
si0=l17;
si1=l9;
i32_store(&i->m0,(U64)si0,si1);
si0=l17;
si1=l2;
sj1=i64_load(&i->m0,(U64)si1+24U);
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l17;
si1=l1;
i32_store(&i->m0,(U64)si0+44U,si1);
si0=l17;
si1=l15;
i32_store(&i->m0,(U64)si0+40U,si1);
si0=l17;
si1=l14;
i32_store(&i->m0,(U64)si0+36U,si1);
si0=l17;
si1=l13;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l17;
si1=l12;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l17;
si1=l11;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l17;
si1=l10;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l17;
si1=l8;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l17;
si1=12U;
si0+=si1;
si1=l16;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
sj1=4294967300ULL;
i64_store(&i->m0,(U64)si0+12U,sj1);
si0=l2;
si1=l17;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l5;
si1=40U;
si0+=si1;
l5=si0;
si1=l6;
si0=si0 == si1;
if(si0){
goto L9;
}
si0=l2;
si1=96U;
si0+=si1;
si1=4U;
si0|=si1;
l9=si0;
si0=1U;
l12=si0;
L11:;
{
si0=l5;
si1=40U;
si0+=si1;
l8=si0;
L12:;
{
si0=l5;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L13;
}
si0=l5;
si1=40U;
si0+=si1;
l5=si0;
goto L8;
L13:;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+36U);
l1=si0;
si0=l2;
si1=56U;
si0+=si1;
si1=32U;
si0+=si1;
si1=l5;
si2=32U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=56U;
si0+=si1;
si1=24U;
si0+=si1;
si1=l5;
si2=24U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=56U;
si0+=si1;
si1=16U;
si0+=si1;
si1=l5;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=56U;
si0+=si1;
si1=8U;
si0+=si1;
si1=l5;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=l5;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+56U,sj1);
si0=l2;
si1=96U;
si0+=si1;
si1=l7;
si2=l2;
si3=56U;
si2+=si3;
f1630(i,si0,si1,si2);
si0=l1;
if(si0){
goto L15;
}
si0=0U;
l1=si0;
goto L14;
L15:;
si0=l1;
si1=l7;
si0=f1702(i,si0,si1);
l1=si0;
L14:;
si0=l2;
si1=40U;
si0+=si1;
si1=8U;
si0+=si1;
l10=si0;
si1=l9;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=l9;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+40U,sj1);
si0=l2;
si0=i32_load(&i->m0,(U64)si0+96U);
l11=si0;
if(si0){
goto L16;
}
si0=l8;
si1=40U;
si0+=si1;
l8=si0;
si0=l5;
si1=40U;
si0+=si1;
l5=si0;
si1=l6;
si0=si0 == si1;
if(si0){
goto L9;
}
goto L12;
L16:;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0+112U);
l13=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+116U);
l14=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+120U);
l15=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+124U);
l16=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+128U);
l18=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+132U);
l19=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+136U);
l20=si0;
si0=l2;
si1=24U;
si0+=si1;
si1=8U;
si0+=si1;
l21=si0;
si1=l10;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=l2;
sj1=i64_load(&i->m0,(U64)si1+40U);
i64_store(&i->m0,(U64)si0+24U,sj1);
si0=l5;
si1=40U;
si0+=si1;
l5=si0;
si0=l12;
si1=l2;
si1=i32_load(&i->m0,(U64)si1+12U);
si0=si0 != si1;
if(si0){
goto L17;
}
si0=l2;
si1=8U;
si0+=si1;
si1=l12;
si2=1U;
f1677(i,si0,si1,si2);
si0=l2;
si0=i32_load(&i->m0,(U64)si0+8U);
l17=si0;
L17:;
si0=l17;
si1=l12;
si2=48U;
si1*=si2;
si0+=si1;
l8=si0;
si1=l11;
i32_store(&i->m0,(U64)si0,si1);
si0=l8;
si1=l2;
sj1=i64_load(&i->m0,(U64)si1+24U);
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l8;
si1=12U;
si0+=si1;
si1=l21;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l8;
si1=l1;
i32_store(&i->m0,(U64)si0+44U,si1);
si0=l8;
si1=l20;
i32_store(&i->m0,(U64)si0+40U,si1);
si0=l8;
si1=l19;
i32_store(&i->m0,(U64)si0+36U,si1);
si0=l8;
si1=l18;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l8;
si1=l16;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l8;
si1=l15;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l8;
si1=l14;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l8;
si1=l13;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l2;
si1=l12;
si2=1U;
si1+=si2;
l12=si1;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l5;
si1=l6;
si0=si0 == si1;
if(si0){
goto L9;
}
goto L11;
}
L10:;
si0=4U;
si1=192U;
f52(i,si0,si1);
UNREACHABLE;
L9:;
si0=l6;
l8=si0;
si0=l6;
l5=si0;
L8:;
si0=l5;
si1=l6;
si2=l8;
si1-=si2;
si2=40U;
si1=DIV_U(si1,si2);
f1688(i,si0,si1);
si0=l3;
si0=!(si0);
if(si0){
goto L18;
}
si0=l4;
f15271(i,si0);
L18:;
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
L1:;
si0=l2;
si1=144U;
si0+=si1;
i->g0=si0;
L0:;
}

void f1658(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U64 l3=0;
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
U64 sj0,sj1;
si0=i->g0;
si1=240U;
si0-=si1;
l2=si0;
i->g0=si0;
si0=l2;
si1=8U;
si0+=si1;
si1=8U;
si0+=si1;
si1=l1;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
l3=sj1;
i64_store(&i->m0,(U64)si0,sj1);
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
si1=l1;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+8U,sj1);
sj0=l3;
si0=(U32)(sj0);
l1=si0;
si1=l2;
si1=i32_load(&i->m0,(U64)si1+20U);
l4=si1;
si0=si0 == si1;
if(si0){
goto L4;
}
si0=l2;
si1=152U;
si0+=si1;
si1=4U;
si0|=si1;
l5=si0;
si0=l2;
si1=200U;
si0+=si1;
si1=4U;
si0|=si1;
l6=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+24U);
l7=si0;
L7:;
{
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l8=si0;
si0=!(si0);
if(si0){
goto L6;
}
si0=l6;
si1=l1;
sj1=i64_load(&i->m0,(U64)si1+4U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l6;
si1=24U;
si0+=si1;
si1=l1;
si2=28U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l6;
si1=16U;
si0+=si1;
si1=l1;
si2=20U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l6;
si1=8U;
si0+=si1;
si1=l1;
si2=12U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=l8;
i32_store(&i->m0,(U64)si0+200U,si1);
si0=l2;
si1=152U;
si0+=si1;
si1=l7;
si2=l2;
si3=200U;
si2+=si3;
f1627(i,si0,si1,si2);
si0=l2;
si1=112U;
si0+=si1;
si1=8U;
si0+=si1;
si1=l5;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=112U;
si0+=si1;
si1=16U;
si0+=si1;
si1=l5;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=112U;
si0+=si1;
si1=24U;
si0+=si1;
si1=l5;
si2=24U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=112U;
si0+=si1;
si1=32U;
si0+=si1;
si1=l5;
si2=32U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=l5;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+112U,sj1);
si0=l2;
si0=i32_load(&i->m0,(U64)si0+152U);
l8=si0;
if(si0){
goto L3;
}
si0=l1;
si1=36U;
si0+=si1;
l1=si0;
si1=l4;
si0=si0 != si1;
if(si0){
goto L7;
}
goto L5;
}
L6:;
si0=l1;
si1=36U;
si0+=si1;
l4=si0;
L5:;
si0=l2;
si1=l4;
i32_store(&i->m0,(U64)si0+16U,si1);
L4:;
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l0;
sj1=4ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=8U;
si0+=si1;
f1691(i,si0);
goto L2;
L3:;
si0=l2;
si1=72U;
si0+=si1;
si1=8U;
si0+=si1;
l5=si0;
si1=l2;
si2=112U;
si1+=si2;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=72U;
si0+=si1;
si1=16U;
si0+=si1;
l6=si0;
si1=l2;
si2=112U;
si1+=si2;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=72U;
si0+=si1;
si1=24U;
si0+=si1;
l4=si0;
si1=l2;
si2=112U;
si1+=si2;
si2=24U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=72U;
si0+=si1;
si1=32U;
si0+=si1;
l7=si0;
si1=l2;
si2=112U;
si1+=si2;
si2=32U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=l2;
sj1=i64_load(&i->m0,(U64)si1+112U);
i64_store(&i->m0,(U64)si0+72U,sj1);
si0=l2;
si1=l1;
si2=36U;
si1+=si2;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=176U;
si0=f15269(i,si0);
l9=si0;
si0=!(si0);
if(si0){
goto L1;
}
si0=l9;
si1=l8;
i32_store(&i->m0,(U64)si0,si1);
si0=l9;
si1=l2;
sj1=i64_load(&i->m0,(U64)si1+72U);
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l9;
si1=12U;
si0+=si1;
si1=l5;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l9;
si1=20U;
si0+=si1;
si1=l6;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l9;
si1=28U;
si0+=si1;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l9;
si1=36U;
si0+=si1;
si1=l7;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
sj1=4294967300ULL;
i64_store(&i->m0,(U64)si0+36U,sj1);
si0=l2;
si1=l9;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l2;
si1=48U;
si0+=si1;
si1=8U;
si0+=si1;
si1=l2;
si2=8U;
si1+=si2;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
l3=sj1;
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=48U;
si0+=si1;
si1=16U;
si0+=si1;
si1=l2;
si2=8U;
si1+=si2;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=l2;
sj1=i64_load(&i->m0,(U64)si1+8U);
i64_store(&i->m0,(U64)si0+48U,sj1);
sj0=l3;
si0=(U32)(sj0);
l1=si0;
si1=l2;
si1=i32_load(&i->m0,(U64)si1+60U);
l4=si1;
si0=si0 == si1;
if(si0){
goto L8;
}
si0=l2;
si1=152U;
si0+=si1;
si1=4U;
si0|=si1;
l5=si0;
si0=l2;
si1=200U;
si0+=si1;
si1=4U;
si0|=si1;
l6=si0;
si0=1U;
l10=si0;
L9:;
{
si0=l2;
si0=i32_load(&i->m0,(U64)si0+64U);
l7=si0;
L13:;
{
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l8=si0;
si0=!(si0);
if(si0){
goto L12;
}
si0=l6;
si1=l1;
sj1=i64_load(&i->m0,(U64)si1+4U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l6;
si1=24U;
si0+=si1;
si1=l1;
si2=28U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l6;
si1=16U;
si0+=si1;
si1=l1;
si2=20U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l6;
si1=8U;
si0+=si1;
si1=l1;
si2=12U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=l8;
i32_store(&i->m0,(U64)si0+200U,si1);
si0=l2;
si1=152U;
si0+=si1;
si1=l7;
si2=l2;
si3=200U;
si2+=si3;
f1627(i,si0,si1,si2);
si0=l2;
si1=112U;
si0+=si1;
si1=8U;
si0+=si1;
l8=si0;
si1=l5;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=112U;
si0+=si1;
si1=16U;
si0+=si1;
l11=si0;
si1=l5;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=112U;
si0+=si1;
si1=24U;
si0+=si1;
l12=si0;
si1=l5;
si2=24U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=112U;
si0+=si1;
si1=32U;
si0+=si1;
l13=si0;
si1=l5;
si2=32U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=l5;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+112U,sj1);
si0=l2;
si0=i32_load(&i->m0,(U64)si0+152U);
l14=si0;
if(si0){
goto L14;
}
si0=l1;
si1=36U;
si0+=si1;
l1=si0;
si1=l4;
si0=si0 != si1;
if(si0){
goto L13;
}
goto L11;
L14:;
}
si0=l2;
si1=72U;
si0+=si1;
si1=8U;
si0+=si1;
l4=si0;
si1=l8;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=72U;
si0+=si1;
si1=16U;
si0+=si1;
l8=si0;
si1=l11;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=72U;
si0+=si1;
si1=24U;
si0+=si1;
l7=si0;
si1=l12;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=72U;
si0+=si1;
si1=32U;
si0+=si1;
l11=si0;
si1=l13;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=l2;
sj1=i64_load(&i->m0,(U64)si1+112U);
i64_store(&i->m0,(U64)si0+72U,sj1);
si0=l2;
si1=l1;
si2=36U;
si1+=si2;
i32_store(&i->m0,(U64)si0+56U,si1);
si0=l10;
si1=l2;
si1=i32_load(&i->m0,(U64)si1+36U);
si0=si0 != si1;
if(si0){
goto L10;
}
si0=l2;
si1=32U;
si0+=si1;
si1=l10;
si2=1U;
f1674(i,si0,si1,si2);
si0=l2;
si0=i32_load(&i->m0,(U64)si0+32U);
l9=si0;
goto L10;
L12:;
si0=l1;
si1=36U;
si0+=si1;
l4=si0;
L11:;
si0=l2;
si1=l4;
i32_store(&i->m0,(U64)si0+56U,si1);
goto L8;
L10:;
si0=l9;
si1=l10;
si2=44U;
si1*=si2;
si0+=si1;
l1=si0;
si1=l14;
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
si1=l2;
sj1=i64_load(&i->m0,(U64)si1+72U);
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l1;
si1=20U;
si0+=si1;
si1=l8;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si1=12U;
si0+=si1;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si1=28U;
si0+=si1;
si1=l7;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si1=36U;
si0+=si1;
si1=l11;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=l10;
si2=1U;
si1+=si2;
l10=si1;
i32_store(&i->m0,(U64)si0+40U,si1);
si0=l2;
si0=i32_load(&i->m0,(U64)si0+56U);
l1=si0;
si1=l2;
si1=i32_load(&i->m0,(U64)si1+60U);
l4=si1;
si0=si0 != si1;
if(si0){
goto L9;
}
}
L8:;
si0=l2;
si1=48U;
si0+=si1;
f1691(i,si0);
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
si0=l0;
si1=l2;
sj1=i64_load(&i->m0,(U64)si1+32U);
i64_store(&i->m0,(U64)si0,sj1);
L2:;
si0=l2;
si1=240U;
si0+=si1;
i->g0=si0;
goto L0;
L1:;
si0=4U;
si1=176U;
f52(i,si0,si1);
UNREACHABLE;
L0:;
}

void f1659(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 l8=0;
U32 si0,si1,si2;
U64 sj1;
si0=l1;
si1=12U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
l3=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
l5=si0;
si0=l1;
si1=8U;
si0+=si1;
l6=si0;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
si1=l2;
si0=si0 == si1;
if(si0){
goto L1;
}
si0=l4;
l5=si0;
L3:;
{
si0=l7;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=!(si0);
if(si0){
goto L2;
}
si0=l5;
si1=l7;
sj1=i64_load(&i->m0,(U64)si1+4U);
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l5;
si1=l3;
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=12U;
si0+=si1;
l5=si0;
si0=l7;
si1=12U;
si0+=si1;
l7=si0;
si1=l2;
si0=si0 != si1;
if(si0){
goto L3;
}
}
si0=l2;
l3=si0;
goto L1;
L2:;
si0=l7;
si1=12U;
si0+=si1;
l3=si0;
L1:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
l8=si0;
si0=l1;
sj1=4ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l6;
sj1=17179869188ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=l3;
si0-=si1;
si1=12U;
si0=DIV_U(si0,si1);
l7=si0;
si0=l2;
si1=l3;
si0=si0 == si1;
if(si0){
goto L4;
}
L5:;
{
si0=l3;
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L6;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
f15271(i,si0);
L6:;
si0=l3;
si1=12U;
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
si0=l0;
si1=l8;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l4;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l5;
si2=l4;
si1-=si2;
si2=12U;
si1=DIV_U(si1,si2);
i32_store(&i->m0,(U64)si0+8U,si1);
L0:;
}

void f1660(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U64 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 l8=0;
U32 l9=0;
U32 l10=0;
U32 si0,si1,si2,si3;
U64 sj0,sj1;
si0=i->g0;
si1=560U;
si0-=si1;
l2=si0;
i->g0=si0;
si0=l2;
si1=8U;
si0+=si1;
si1=8U;
si0+=si1;
si1=l1;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
l3=sj1;
i64_store(&i->m0,(U64)si0,sj1);
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
si1=l1;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+8U,sj1);
sj0=l3;
si0=(U32)(sj0);
l1=si0;
si1=l2;
si1=i32_load(&i->m0,(U64)si1+20U);
l4=si1;
si0=si0 == si1;
if(si0){
goto L4;
}
si0=l2;
si1=448U;
si0+=si1;
si1=4U;
si0|=si1;
l5=si0;
si0=l2;
si1=320U;
si0+=si1;
si1=4U;
si0|=si1;
l6=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+24U);
l7=si0;
L7:;
{
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l8=si0;
si1=38U;
si0=si0 == si1;
if(si0){
goto L6;
}
si0=l5;
si1=l1;
si2=4U;
si1+=si2;
si2=108U;
si0=f15390(i,si0,si1,si2);
si0=l2;
si1=l8;
i32_store(&i->m0,(U64)si0+448U,si1);
si0=l2;
si1=320U;
si0+=si1;
si1=l7;
si2=l2;
si3=448U;
si2+=si3;
f1625(i,si0,si1,si2);
si0=l2;
si0=i32_load(&i->m0,(U64)si0+320U);
l8=si0;
si1=38U;
si0=si0 == si1;
if(si0){
goto L8;
}
si0=l2;
si1=196U;
si0+=si1;
si1=l6;
si2=124U;
si0=f15390(i,si0,si1,si2);
si0=l8;
si1=39U;
si0=si0 != si1;
if(si0){
goto L3;
}
L8:;
si0=l1;
si1=112U;
si0+=si1;
l1=si0;
si1=l4;
si0=si0 != si1;
if(si0){
goto L7;
}
goto L5;
}
L6:;
si0=l1;
si1=112U;
si0+=si1;
l4=si0;
L5:;
si0=l2;
si1=l4;
i32_store(&i->m0,(U64)si0+16U,si1);
L4:;
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l0;
sj1=8ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=8U;
si0+=si1;
f1690(i,si0);
goto L2;
L3:;
si0=l2;
si1=l1;
si2=112U;
si1+=si2;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l2;
si1=72U;
si0+=si1;
si1=l2;
si2=196U;
si1+=si2;
si2=124U;
si0=f15390(i,si0,si1,si2);
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=512U;
si0=f15269(i,si0);
l9=si0;
si0=!(si0);
if(si0){
goto L1;
}
si0=l9;
si1=l8;
i32_store(&i->m0,(U64)si0,si1);
si0=l9;
si1=4U;
si0+=si1;
si1=l2;
si2=72U;
si1+=si2;
si2=124U;
si0=f15390(i,si0,si1,si2);
si0=l2;
sj1=4294967300ULL;
i64_store(&i->m0,(U64)si0+36U,sj1);
si0=l2;
si1=l9;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l2;
si1=48U;
si0+=si1;
si1=8U;
si0+=si1;
si1=l2;
si2=8U;
si1+=si2;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
l3=sj1;
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=48U;
si0+=si1;
si1=16U;
si0+=si1;
si1=l2;
si2=8U;
si1+=si2;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=l2;
sj1=i64_load(&i->m0,(U64)si1+8U);
i64_store(&i->m0,(U64)si0+48U,sj1);
sj0=l3;
si0=(U32)(sj0);
l1=si0;
si1=l2;
si1=i32_load(&i->m0,(U64)si1+60U);
l4=si1;
si0=si0 == si1;
if(si0){
goto L9;
}
si0=l2;
si1=448U;
si0+=si1;
si1=4U;
si0|=si1;
l7=si0;
si0=l2;
si1=320U;
si0+=si1;
si1=4U;
si0|=si1;
l6=si0;
si0=1U;
l10=si0;
L10:;
{
si0=l2;
si0=i32_load(&i->m0,(U64)si0+64U);
l5=si0;
L14:;
{
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l8=si0;
si1=38U;
si0=si0 == si1;
if(si0){
goto L13;
}
si0=l7;
si1=l1;
si2=4U;
si1+=si2;
si2=108U;
si0=f15390(i,si0,si1,si2);
si0=l2;
si1=l8;
i32_store(&i->m0,(U64)si0+448U,si1);
si0=l2;
si1=320U;
si0+=si1;
si1=l5;
si2=l2;
si3=448U;
si2+=si3;
f1625(i,si0,si1,si2);
si0=l2;
si0=i32_load(&i->m0,(U64)si0+320U);
l8=si0;
si1=38U;
si0=si0 == si1;
if(si0){
goto L16;
}
si0=l2;
si1=196U;
si0+=si1;
si1=l6;
si2=124U;
si0=f15390(i,si0,si1,si2);
si0=l8;
si1=39U;
si0=si0 != si1;
if(si0){
goto L15;
}
L16:;
si0=l1;
si1=112U;
si0+=si1;
l1=si0;
si1=l4;
si0=si0 != si1;
if(si0){
goto L14;
}
goto L12;
L15:;
}
si0=l2;
si1=l1;
si2=112U;
si1+=si2;
i32_store(&i->m0,(U64)si0+56U,si1);
si0=l2;
si1=72U;
si0+=si1;
si1=l2;
si2=196U;
si1+=si2;
si2=124U;
si0=f15390(i,si0,si1,si2);
si0=l10;
si1=l2;
si1=i32_load(&i->m0,(U64)si1+36U);
si0=si0 != si1;
if(si0){
goto L11;
}
si0=l2;
si1=32U;
si0+=si1;
si1=l10;
si2=1U;
f1673(i,si0,si1,si2);
si0=l2;
si0=i32_load(&i->m0,(U64)si0+32U);
l9=si0;
goto L11;
L13:;
si0=l1;
si1=112U;
si0+=si1;
l4=si0;
L12:;
si0=l2;
si1=l4;
i32_store(&i->m0,(U64)si0+56U,si1);
goto L9;
L11:;
si0=l9;
si1=l10;
si2=7U;
si1<<=(si2&31);
si0+=si1;
l1=si0;
si1=l8;
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
si1=4U;
si0+=si1;
si1=l2;
si2=72U;
si1+=si2;
si2=124U;
si0=f15390(i,si0,si1,si2);
si0=l2;
si1=l10;
si2=1U;
si1+=si2;
l10=si1;
i32_store(&i->m0,(U64)si0+40U,si1);
si0=l2;
si0=i32_load(&i->m0,(U64)si0+56U);
l1=si0;
si1=l2;
si1=i32_load(&i->m0,(U64)si1+60U);
l4=si1;
si0=si0 != si1;
if(si0){
goto L10;
}
}
L9:;
si0=l2;
si1=48U;
si0+=si1;
f1690(i,si0);
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
si0=l0;
si1=l2;
sj1=i64_load(&i->m0,(U64)si1+32U);
i64_store(&i->m0,(U64)si0,sj1);
L2:;
si0=l2;
si1=560U;
si0+=si1;
i->g0=si0;
goto L0;
L1:;
si0=8U;
si1=512U;
f52(i,si0,si1);
UNREACHABLE;
L0:;
}

void f1661(rustpythonInstance*i,U32 l0,U32 l1) {
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
U32 si0,si1,si2,si3;
U64 sj1;
si0=i->g0;
si1=352U;
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
si0=i32_load(&i->m0,(U64)si0+8U);
l5=si0;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+12U);
l6=si1;
si0=si0 == si1;
if(si0){
goto L5;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+16U);
l7=si0;
si0=l2;
si1=280U;
si0+=si1;
si1=4U;
si0|=si1;
l8=si0;
si0=l2;
si1=192U;
si0+=si1;
si1=4U;
si0|=si1;
l9=si0;
L7:;
{
si0=l5;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si1=38U;
si0=si0 == si1;
if(si0){
goto L6;
}
si0=l8;
si1=l5;
si2=4U;
si1+=si2;
si2=68U;
si0=f15390(i,si0,si1,si2);
si0=l2;
si1=l1;
i32_store(&i->m0,(U64)si0+280U,si1);
si0=l2;
si1=192U;
si0+=si1;
si1=l7;
si2=l2;
si3=280U;
si2+=si3;
f1631(i,si0,si1,si2);
si0=l2;
si0=i32_load(&i->m0,(U64)si0+192U);
l1=si0;
si1=38U;
si0=si0 == si1;
if(si0){
goto L8;
}
si0=l2;
si1=108U;
si0+=si1;
si1=l9;
si2=84U;
si0=f15390(i,si0,si1,si2);
si0=l1;
si1=39U;
si0=si0 != si1;
if(si0){
goto L3;
}
L8:;
si0=l5;
si1=72U;
si0+=si1;
l5=si0;
si1=l6;
si0=si0 != si1;
if(si0){
goto L7;
}
}
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l0;
sj1=8ULL;
i64_store(&i->m0,(U64)si0,sj1);
goto L4;
L6:;
si0=l5;
si1=72U;
si0+=si1;
l5=si0;
L5:;
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l0;
sj1=8ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l6;
si1=l5;
si0-=si1;
si1=72U;
si0=DIV_U(si0,si1);
l1=si0;
si0=l6;
si1=l5;
si0=si0 == si1;
if(si0){
goto L4;
}
L9:;
{
si0=l5;
si1=56U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si0=!(si0);
if(si0){
goto L10;
}
si0=l5;
si1=60U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L10;
}
si0=l6;
f15271(i,si0);
L10:;
si0=l5;
f1684(i,si0);
si0=l5;
si1=72U;
si0+=si1;
l5=si0;
si0=l1;
si1=-1U;
si0+=si1;
l1=si0;
if(si0){
goto L9;
}
}
L4:;
si0=l3;
si0=!(si0);
if(si0){
goto L2;
}
si0=l4;
f15271(i,si0);
goto L2;
L3:;
si0=l2;
si1=24U;
si0+=si1;
si1=l2;
si2=108U;
si1+=si2;
si2=84U;
si0=f15390(i,si0,si1,si2);
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=352U;
si0=f15269(i,si0);
l10=si0;
si0=!(si0);
if(si0){
goto L1;
}
si0=l10;
si1=l1;
i32_store(&i->m0,(U64)si0,si1);
si0=l10;
si1=4U;
si0+=si1;
si1=l2;
si2=24U;
si1+=si2;
si2=84U;
si0=f15390(i,si0,si1,si2);
si0=l2;
sj1=4294967300ULL;
i64_store(&i->m0,(U64)si0+12U,sj1);
si0=l2;
si1=l10;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l5;
si1=72U;
si0+=si1;
l5=si0;
si1=l6;
si0=si0 == si1;
if(si0){
goto L11;
}
si0=l6;
si1=-72U;
si0+=si1;
l11=si0;
si0=l2;
si1=280U;
si0+=si1;
si1=4U;
si0|=si1;
l9=si0;
si0=l2;
si1=192U;
si0+=si1;
si1=4U;
si0|=si1;
l12=si0;
si0=1U;
l13=si0;
L12:;
{
si0=l11;
si1=l5;
si0-=si1;
l1=si0;
L16:;
{
si0=l5;
si0=i32_load(&i->m0,(U64)si0);
l8=si0;
si1=38U;
si0=si0 == si1;
if(si0){
goto L15;
}
si0=l9;
si1=l5;
si2=4U;
si1+=si2;
si2=68U;
si0=f15390(i,si0,si1,si2);
si0=l2;
si1=l8;
i32_store(&i->m0,(U64)si0+280U,si1);
si0=l2;
si1=192U;
si0+=si1;
si1=l7;
si2=l2;
si3=280U;
si2+=si3;
f1631(i,si0,si1,si2);
si0=l2;
si0=i32_load(&i->m0,(U64)si0+192U);
l8=si0;
si1=38U;
si0=si0 == si1;
if(si0){
goto L18;
}
si0=l2;
si1=108U;
si0+=si1;
si1=l12;
si2=84U;
si0=f15390(i,si0,si1,si2);
si0=l8;
si1=39U;
si0=si0 != si1;
if(si0){
goto L17;
}
L18:;
si0=l1;
si1=-72U;
si0+=si1;
l1=si0;
si0=l5;
si1=72U;
si0+=si1;
l5=si0;
si1=l6;
si0=si0 != si1;
if(si0){
goto L16;
}
goto L11;
L17:;
}
si0=l2;
si1=24U;
si0+=si1;
si1=l2;
si2=108U;
si1+=si2;
si2=84U;
si0=f15390(i,si0,si1,si2);
si0=l5;
si1=72U;
si0+=si1;
l5=si0;
si0=l13;
si1=l2;
si1=i32_load(&i->m0,(U64)si1+12U);
si0=si0 == si1;
if(si0){
goto L14;
}
goto L13;
L15:;
si0=l5;
si1=72U;
si0+=si1;
si1=l6;
si0=si0 == si1;
if(si0){
goto L11;
}
si0=l5;
si1=132U;
si0+=si1;
l5=si0;
si0=l1;
si1=72U;
si0=DIV_U(si0,si1);
l1=si0;
L19:;
{
si0=l5;
si1=-60U;
si0+=si1;
l6=si0;
si0=l5;
si1=-4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
si0=!(si0);
if(si0){
goto L20;
}
si0=l5;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L20;
}
si0=l7;
f15271(i,si0);
L20:;
si0=l6;
f1684(i,si0);
si0=l5;
si1=72U;
si0+=si1;
l5=si0;
si0=l1;
si1=-1U;
si0+=si1;
l1=si0;
if(si0){
goto L19;
}
goto L11;
}
L14:;
si0=l2;
si1=8U;
si0+=si1;
si1=l13;
si2=1U;
f1670(i,si0,si1,si2);
si0=l2;
si0=i32_load(&i->m0,(U64)si0+8U);
l10=si0;
L13:;
si0=l10;
si1=l13;
si2=88U;
si1*=si2;
si0+=si1;
l1=si0;
si1=l8;
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
si1=4U;
si0+=si1;
si1=l2;
si2=24U;
si1+=si2;
si2=84U;
si0=f15390(i,si0,si1,si2);
si0=l2;
si1=l13;
si2=1U;
si1+=si2;
l13=si1;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l5;
si1=l6;
si0=si0 != si1;
if(si0){
goto L12;
}
}
L11:;
si0=l3;
si0=!(si0);
if(si0){
goto L21;
}
si0=l4;
f15271(i,si0);
L21:;
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
si1=352U;
si0+=si1;
i->g0=si0;
goto L0;
L1:;
si0=8U;
si1=352U;
f52(i,si0,si1);
UNREACHABLE;
L0:;
}

void f1662(rustpythonInstance*i,U32 l0,U32 l1) {
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
U32 si0,si1,si2,si3;
U64 sj1;
si0=i->g0;
si1=128U;
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
si0=i32_load(&i->m0,(U64)si0+8U);
l5=si0;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+12U);
l6=si1;
si0=si0 == si1;
if(si0){
goto L5;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+16U);
l7=si0;
si0=l2;
si1=96U;
si0+=si1;
si1=4U;
si0|=si1;
l8=si0;
si1=24U;
si0+=si1;
l9=si0;
si0=l8;
si1=16U;
si0+=si1;
l10=si0;
si0=l8;
si1=8U;
si0+=si1;
l11=si0;
L7:;
{
si0=l5;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si0=!(si0);
if(si0){
goto L6;
}
si0=l8;
si1=l5;
sj1=i64_load(&i->m0,(U64)si1+4U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l9;
si1=l5;
si2=28U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l10;
si1=l5;
si2=20U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l11;
si1=l5;
si2=12U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=l1;
i32_store(&i->m0,(U64)si0+96U,si1);
si0=l2;
si1=56U;
si0+=si1;
si1=l7;
si2=l2;
si3=96U;
si2+=si3;
f1633(i,si0,si1,si2);
si0=l2;
si0=i32_load(&i->m0,(U64)si0+56U);
l1=si0;
if(si0){
goto L3;
}
si0=l5;
si1=32U;
si0+=si1;
l5=si0;
si1=l6;
si0=si0 != si1;
if(si0){
goto L7;
}
}
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l0;
sj1=4ULL;
i64_store(&i->m0,(U64)si0,sj1);
goto L4;
L6:;
si0=l5;
si1=32U;
si0+=si1;
l5=si0;
L5:;
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l0;
sj1=4ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l6;
si1=l5;
si0=si0 == si1;
if(si0){
goto L4;
}
si0=l6;
si1=l5;
si0-=si1;
si1=5U;
si0>>=(si1&31);
l1=si0;
L8:;
{
si0=l5;
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L9;
}
si0=l5;
si0=i32_load(&i->m0,(U64)si0);
f15271(i,si0);
L9:;
si0=l5;
si1=20U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si0=!(si0);
if(si0){
goto L10;
}
si0=l5;
si1=24U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L10;
}
si0=l6;
f15271(i,si0);
L10:;
si0=l5;
si1=32U;
si0+=si1;
l5=si0;
si0=l1;
si1=-1U;
si0+=si1;
l1=si0;
if(si0){
goto L8;
}
}
L4:;
si0=l3;
si0=!(si0);
if(si0){
goto L2;
}
si0=l4;
f15271(i,si0);
goto L2;
L3:;
si0=l2;
si1=16U;
si0+=si1;
si1=32U;
si0+=si1;
l8=si0;
si1=l2;
si2=56U;
si1+=si2;
si2=36U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=40U;
si0+=si1;
l9=si0;
si1=l2;
si2=56U;
si1+=si2;
si2=28U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=32U;
si0+=si1;
l10=si0;
si1=l2;
si2=56U;
si1+=si2;
si2=20U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=24U;
si0+=si1;
l11=si0;
si1=l2;
si2=56U;
si1+=si2;
si2=12U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=l2;
sj1=i64_load(&i->m0,(U64)si1+60U);
i64_store(&i->m0,(U64)si0+16U,sj1);
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=160U;
si0=f15269(i,si0);
l12=si0;
si0=!(si0);
if(si0){
goto L1;
}
si0=l12;
si1=l1;
i32_store(&i->m0,(U64)si0,si1);
si0=l12;
si1=l2;
sj1=i64_load(&i->m0,(U64)si1+16U);
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l12;
si1=12U;
si0+=si1;
si1=l11;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l12;
si1=20U;
si0+=si1;
si1=l10;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l12;
si1=28U;
si0+=si1;
si1=l9;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l12;
si1=36U;
si0+=si1;
si1=l8;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
sj1=4294967300ULL;
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l2;
si1=l12;
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=32U;
si0+=si1;
l5=si0;
si1=l6;
si0=si0 == si1;
if(si0){
goto L11;
}
si0=l6;
si1=-32U;
si0+=si1;
l13=si0;
si0=l2;
si1=56U;
si0+=si1;
si1=4U;
si0|=si1;
l14=si0;
si0=l2;
si1=96U;
si0+=si1;
si1=4U;
si0|=si1;
l9=si0;
si1=24U;
si0+=si1;
l10=si0;
si0=l9;
si1=16U;
si0+=si1;
l11=si0;
si0=l9;
si1=8U;
si0+=si1;
l15=si0;
si0=1U;
l16=si0;
L12:;
{
si0=l13;
si1=l5;
si0-=si1;
l1=si0;
L16:;
{
si0=l5;
si0=i32_load(&i->m0,(U64)si0);
l8=si0;
si0=!(si0);
if(si0){
goto L15;
}
si0=l9;
si1=l5;
sj1=i64_load(&i->m0,(U64)si1+4U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l10;
si1=l5;
si2=28U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l11;
si1=l5;
si2=20U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l15;
si1=l5;
si2=12U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=l8;
i32_store(&i->m0,(U64)si0+96U,si1);
si0=l2;
si1=56U;
si0+=si1;
si1=l7;
si2=l2;
si3=96U;
si2+=si3;
f1633(i,si0,si1,si2);
si0=l2;
si0=i32_load(&i->m0,(U64)si0+56U);
l8=si0;
if(si0){
goto L17;
}
si0=l1;
si1=-32U;
si0+=si1;
l1=si0;
si0=l5;
si1=32U;
si0+=si1;
l5=si0;
si1=l6;
si0=si0 != si1;
if(si0){
goto L16;
}
goto L11;
L17:;
}
si0=l2;
si1=16U;
si0+=si1;
si1=32U;
si0+=si1;
l17=si0;
si1=l14;
si2=32U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=16U;
si0+=si1;
si1=24U;
si0+=si1;
l18=si0;
si1=l14;
si2=24U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=16U;
si0+=si1;
si1=16U;
si0+=si1;
l19=si0;
si1=l14;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=16U;
si0+=si1;
si1=8U;
si0+=si1;
l20=si0;
si1=l14;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=l14;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+16U,sj1);
si0=l5;
si1=32U;
si0+=si1;
l5=si0;
si0=l16;
si1=l2;
si1=i32_load(&i->m0,(U64)si1+4U);
si0=si0 == si1;
if(si0){
goto L14;
}
goto L13;
L15:;
si0=l5;
si1=32U;
si0+=si1;
si1=l6;
si0=si0 == si1;
if(si0){
goto L11;
}
si0=l5;
si1=56U;
si0+=si1;
l5=si0;
si0=l1;
si1=5U;
si0>>=(si1&31);
l1=si0;
L18:;
{
si0=l5;
si1=-20U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L19;
}
si0=l5;
si1=-24U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
f15271(i,si0);
L19:;
si0=l5;
si1=-4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si0=!(si0);
if(si0){
goto L20;
}
si0=l5;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L20;
}
si0=l6;
f15271(i,si0);
L20:;
si0=l5;
si1=32U;
si0+=si1;
l5=si0;
si0=l1;
si1=-1U;
si0+=si1;
l1=si0;
if(si0){
goto L18;
}
goto L11;
}
L14:;
si0=l2;
si1=l16;
si2=1U;
f1676(i,si0,si1,si2);
si0=l2;
si0=i32_load(&i->m0,(U64)si0);
l12=si0;
L13:;
si0=l12;
si1=l16;
si2=40U;
si1*=si2;
si0+=si1;
l1=si0;
si1=l8;
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
si1=l2;
sj1=i64_load(&i->m0,(U64)si1+16U);
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l1;
si1=12U;
si0+=si1;
si1=l20;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si1=20U;
si0+=si1;
si1=l19;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si1=28U;
si0+=si1;
si1=l18;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si1=36U;
si0+=si1;
si1=l17;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=l16;
si2=1U;
si1+=si2;
l16=si1;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l5;
si1=l6;
si0=si0 != si1;
if(si0){
goto L12;
}
}
L11:;
si0=l3;
si0=!(si0);
if(si0){
goto L21;
}
si0=l4;
f15271(i,si0);
L21:;
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
si1=128U;
si0+=si1;
i->g0=si0;
goto L0;
L1:;
si0=4U;
si1=160U;
f52(i,si0,si1);
UNREACHABLE;
L0:;
}

void f1663(rustpythonInstance*i,U32 l0,U32 l1) {
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
U32 si0,si1,si2,si3;
U64 sj1;
si0=i->g0;
si1=352U;
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
si0=i32_load(&i->m0,(U64)si0+8U);
l5=si0;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+12U);
l6=si1;
si0=si0 == si1;
if(si0){
goto L5;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+16U);
l7=si0;
si0=l2;
si1=280U;
si0+=si1;
si1=4U;
si0|=si1;
l8=si0;
si0=l2;
si1=192U;
si0+=si1;
si1=4U;
si0|=si1;
l9=si0;
L7:;
{
si0=l5;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si1=38U;
si0=si0 == si1;
if(si0){
goto L6;
}
si0=l8;
si1=l5;
si2=4U;
si1+=si2;
si2=68U;
si0=f15390(i,si0,si1,si2);
si0=l2;
si1=l1;
i32_store(&i->m0,(U64)si0+280U,si1);
si0=l2;
si1=192U;
si0+=si1;
si1=l7;
si2=l2;
si3=280U;
si2+=si3;
f1632(i,si0,si1,si2);
si0=l2;
si0=i32_load(&i->m0,(U64)si0+192U);
l1=si0;
si1=38U;
si0=si0 == si1;
if(si0){
goto L8;
}
si0=l2;
si1=108U;
si0+=si1;
si1=l9;
si2=84U;
si0=f15390(i,si0,si1,si2);
si0=l1;
si1=39U;
si0=si0 != si1;
if(si0){
goto L3;
}
L8:;
si0=l5;
si1=72U;
si0+=si1;
l5=si0;
si1=l6;
si0=si0 != si1;
if(si0){
goto L7;
}
}
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l0;
sj1=8ULL;
i64_store(&i->m0,(U64)si0,sj1);
goto L4;
L6:;
si0=l5;
si1=72U;
si0+=si1;
l5=si0;
L5:;
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l0;
sj1=8ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l6;
si1=l5;
si0-=si1;
si1=72U;
si0=DIV_U(si0,si1);
l1=si0;
si0=l6;
si1=l5;
si0=si0 == si1;
if(si0){
goto L4;
}
L9:;
{
si0=l5;
si1=56U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si0=!(si0);
if(si0){
goto L10;
}
si0=l5;
si1=60U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L10;
}
si0=l6;
f15271(i,si0);
L10:;
si0=l5;
f1684(i,si0);
si0=l5;
si1=72U;
si0+=si1;
l5=si0;
si0=l1;
si1=-1U;
si0+=si1;
l1=si0;
if(si0){
goto L9;
}
}
L4:;
si0=l3;
si0=!(si0);
if(si0){
goto L2;
}
si0=l4;
f15271(i,si0);
goto L2;
L3:;
si0=l2;
si1=24U;
si0+=si1;
si1=l2;
si2=108U;
si1+=si2;
si2=84U;
si0=f15390(i,si0,si1,si2);
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=352U;
si0=f15269(i,si0);
l10=si0;
si0=!(si0);
if(si0){
goto L1;
}
si0=l10;
si1=l1;
i32_store(&i->m0,(U64)si0,si1);
si0=l10;
si1=4U;
si0+=si1;
si1=l2;
si2=24U;
si1+=si2;
si2=84U;
si0=f15390(i,si0,si1,si2);
si0=l2;
sj1=4294967300ULL;
i64_store(&i->m0,(U64)si0+12U,sj1);
si0=l2;
si1=l10;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l5;
si1=72U;
si0+=si1;
l5=si0;
si1=l6;
si0=si0 == si1;
if(si0){
goto L11;
}
si0=l6;
si1=-72U;
si0+=si1;
l11=si0;
si0=l2;
si1=280U;
si0+=si1;
si1=4U;
si0|=si1;
l9=si0;
si0=l2;
si1=192U;
si0+=si1;
si1=4U;
si0|=si1;
l12=si0;
si0=1U;
l13=si0;
L12:;
{
si0=l11;
si1=l5;
si0-=si1;
l1=si0;
L16:;
{
si0=l5;
si0=i32_load(&i->m0,(U64)si0);
l8=si0;
si1=38U;
si0=si0 == si1;
if(si0){
goto L15;
}
si0=l9;
si1=l5;
si2=4U;
si1+=si2;
si2=68U;
si0=f15390(i,si0,si1,si2);
si0=l2;
si1=l8;
i32_store(&i->m0,(U64)si0+280U,si1);
si0=l2;
si1=192U;
si0+=si1;
si1=l7;
si2=l2;
si3=280U;
si2+=si3;
f1632(i,si0,si1,si2);
si0=l2;
si0=i32_load(&i->m0,(U64)si0+192U);
l8=si0;
si1=38U;
si0=si0 == si1;
if(si0){
goto L18;
}
si0=l2;
si1=108U;
si0+=si1;
si1=l12;
si2=84U;
si0=f15390(i,si0,si1,si2);
si0=l8;
si1=39U;
si0=si0 != si1;
if(si0){
goto L17;
}
L18:;
si0=l1;
si1=-72U;
si0+=si1;
l1=si0;
si0=l5;
si1=72U;
si0+=si1;
l5=si0;
si1=l6;
si0=si0 != si1;
if(si0){
goto L16;
}
goto L11;
L17:;
}
si0=l2;
si1=24U;
si0+=si1;
si1=l2;
si2=108U;
si1+=si2;
si2=84U;
si0=f15390(i,si0,si1,si2);
si0=l5;
si1=72U;
si0+=si1;
l5=si0;
si0=l13;
si1=l2;
si1=i32_load(&i->m0,(U64)si1+12U);
si0=si0 == si1;
if(si0){
goto L14;
}
goto L13;
L15:;
si0=l5;
si1=72U;
si0+=si1;
si1=l6;
si0=si0 == si1;
if(si0){
goto L11;
}
si0=l5;
si1=132U;
si0+=si1;
l5=si0;
si0=l1;
si1=72U;
si0=DIV_U(si0,si1);
l1=si0;
L19:;
{
si0=l5;
si1=-60U;
si0+=si1;
l6=si0;
si0=l5;
si1=-4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
si0=!(si0);
if(si0){
goto L20;
}
si0=l5;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L20;
}
si0=l7;
f15271(i,si0);
L20:;
si0=l6;
f1684(i,si0);
si0=l5;
si1=72U;
si0+=si1;
l5=si0;
si0=l1;
si1=-1U;
si0+=si1;
l1=si0;
if(si0){
goto L19;
}
goto L11;
}
L14:;
si0=l2;
si1=8U;
si0+=si1;
si1=l13;
si2=1U;
f1670(i,si0,si1,si2);
si0=l2;
si0=i32_load(&i->m0,(U64)si0+8U);
l10=si0;
L13:;
si0=l10;
si1=l13;
si2=88U;
si1*=si2;
si0+=si1;
l1=si0;
si1=l8;
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
si1=4U;
si0+=si1;
si1=l2;
si2=24U;
si1+=si2;
si2=84U;
si0=f15390(i,si0,si1,si2);
si0=l2;
si1=l13;
si2=1U;
si1+=si2;
l13=si1;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l5;
si1=l6;
si0=si0 != si1;
if(si0){
goto L12;
}
}
L11:;
si0=l3;
si0=!(si0);
if(si0){
goto L21;
}
si0=l4;
f15271(i,si0);
L21:;
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
si1=352U;
si0+=si1;
i->g0=si0;
goto L0;
L1:;
si0=8U;
si1=352U;
f52(i,si0,si1);
UNREACHABLE;
L0:;
}

void f1664(rustpythonInstance*i,U32 l0,U32 l1) {
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
U32 si0,si1,si2,si3;
U64 sj1;
si0=i->g0;
si1=256U;
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
si0=i32_load(&i->m0,(U64)si0+8U);
l5=si0;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+12U);
l6=si1;
si0=si0 == si1;
if(si0){
goto L5;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+16U);
l7=si0;
si0=l2;
si1=144U;
si0+=si1;
si1=4U;
si0|=si1;
l1=si0;
si0=l2;
si1=208U;
si0+=si1;
si1=4U;
si0|=si1;
l8=si0;
si1=40U;
si0+=si1;
l9=si0;
si0=l8;
si1=32U;
si0+=si1;
l10=si0;
si0=l8;
si1=24U;
si0+=si1;
l11=si0;
si0=l8;
si1=16U;
si0+=si1;
l12=si0;
si0=l8;
si1=8U;
si0+=si1;
l13=si0;
L7:;
{
si0=l5;
si0=i32_load(&i->m0,(U64)si0);
l14=si0;
si1=38U;
si0=si0 == si1;
if(si0){
goto L6;
}
si0=l8;
si1=l5;
sj1=i64_load(&i->m0,(U64)si1+4U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l9;
si1=l5;
si2=44U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l10;
si1=l5;
si2=36U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l11;
si1=l5;
si2=28U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l12;
si1=l5;
si2=20U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l13;
si1=l5;
si2=12U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=l14;
i32_store(&i->m0,(U64)si0+208U,si1);
si0=l5;
si0=i32_load(&i->m0,(U64)si0+48U);
l14=si0;
si0=l2;
si1=144U;
si0+=si1;
si1=l7;
si2=l2;
si3=208U;
si2+=si3;
f1594(i,si0,si1,si2);
si0=l14;
if(si0){
goto L9;
}
si0=0U;
l14=si0;
goto L8;
L9:;
si0=l14;
si1=l7;
si0=f1701(i,si0,si1);
l14=si0;
L8:;
si0=l2;
si1=l14;
i32_store(&i->m0,(U64)si0+200U,si1);
si0=l2;
si0=i32_load(&i->m0,(U64)si0+144U);
l14=si0;
si1=38U;
si0=si0 == si1;
if(si0){
goto L10;
}
si0=l2;
si1=80U;
si0+=si1;
si1=56U;
si0+=si1;
si1=l1;
si2=56U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=80U;
si0+=si1;
si1=48U;
si0+=si1;
si1=l1;
si2=48U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=80U;
si0+=si1;
si1=40U;
si0+=si1;
si1=l1;
si2=40U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=80U;
si0+=si1;
si1=32U;
si0+=si1;
si1=l1;
si2=32U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=80U;
si0+=si1;
si1=24U;
si0+=si1;
si1=l1;
si2=24U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=80U;
si0+=si1;
si1=16U;
si0+=si1;
si1=l1;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=80U;
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
i64_store(&i->m0,(U64)si0+80U,sj1);
si0=l14;
si1=39U;
si0=si0 != si1;
if(si0){
goto L3;
}
L10:;
si0=l5;
si1=56U;
si0+=si1;
l5=si0;
si1=l6;
si0=si0 != si1;
if(si0){
goto L7;
}
}
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l0;
sj1=8ULL;
i64_store(&i->m0,(U64)si0,sj1);
goto L4;
L6:;
si0=l5;
si1=56U;
si0+=si1;
l5=si0;
L5:;
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l0;
sj1=8ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l6;
si1=l5;
si0-=si1;
si1=56U;
si0=DIV_U(si0,si1);
l14=si0;
si0=l6;
si1=l5;
si0=si0 == si1;
if(si0){
goto L4;
}
L11:;
{
si0=l5;
f1684(i,si0);
si0=l5;
si1=48U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si0=!(si0);
if(si0){
goto L12;
}
si0=l1;
f1684(i,si0);
si0=l1;
f15271(i,si0);
L12:;
si0=l5;
si1=56U;
si0+=si1;
l5=si0;
si0=l14;
si1=-1U;
si0+=si1;
l14=si0;
if(si0){
goto L11;
}
}
L4:;
si0=l3;
si0=!(si0);
if(si0){
goto L2;
}
si0=l4;
f15271(i,si0);
goto L2;
L3:;
si0=l2;
si1=16U;
si0+=si1;
si1=56U;
si0+=si1;
l1=si0;
si1=l2;
si2=80U;
si1+=si2;
si2=56U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=16U;
si0+=si1;
si1=48U;
si0+=si1;
l8=si0;
si1=l2;
si2=80U;
si1+=si2;
si2=48U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=16U;
si0+=si1;
si1=40U;
si0+=si1;
l9=si0;
si1=l2;
si2=80U;
si1+=si2;
si2=40U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=16U;
si0+=si1;
si1=32U;
si0+=si1;
l10=si0;
si1=l2;
si2=80U;
si1+=si2;
si2=32U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=16U;
si0+=si1;
si1=24U;
si0+=si1;
l11=si0;
si1=l2;
si2=80U;
si1+=si2;
si2=24U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=16U;
si0+=si1;
si1=16U;
si0+=si1;
l13=si0;
si1=l2;
si2=80U;
si1+=si2;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=16U;
si0+=si1;
si1=8U;
si0+=si1;
l15=si0;
si1=l2;
si2=80U;
si1+=si2;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=l2;
sj1=i64_load(&i->m0,(U64)si1+80U);
i64_store(&i->m0,(U64)si0+16U,sj1);
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=256U;
si0=f15269(i,si0);
l12=si0;
si0=!(si0);
if(si0){
goto L1;
}
si0=l12;
si1=l14;
i32_store(&i->m0,(U64)si0,si1);
si0=l12;
si1=l2;
sj1=i64_load(&i->m0,(U64)si1+16U);
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l12;
si1=12U;
si0+=si1;
si1=l15;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l12;
si1=20U;
si0+=si1;
si1=l13;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l12;
si1=28U;
si0+=si1;
si1=l11;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l12;
si1=36U;
si0+=si1;
si1=l10;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l12;
si1=44U;
si0+=si1;
si1=l9;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l12;
si1=52U;
si0+=si1;
si1=l8;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l12;
si1=60U;
si0+=si1;
si1=l1;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
sj1=4294967300ULL;
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l2;
si1=l12;
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=56U;
si0+=si1;
l9=si0;
si1=l6;
si0=si0 == si1;
if(si0){
goto L13;
}
si0=l2;
si1=144U;
si0+=si1;
si1=4U;
si0|=si1;
l1=si0;
si0=l2;
si1=208U;
si0+=si1;
si1=4U;
si0|=si1;
l11=si0;
si1=40U;
si0+=si1;
l13=si0;
si0=l11;
si1=32U;
si0+=si1;
l15=si0;
si0=l11;
si1=24U;
si0+=si1;
l16=si0;
si0=l11;
si1=16U;
si0+=si1;
l17=si0;
si0=l11;
si1=8U;
si0+=si1;
l18=si0;
si0=1U;
l19=si0;
L14:;
{
si0=0U;
l14=si0;
L18:;
{
si0=l9;
si1=l14;
si0+=si1;
l5=si0;
si0=i32_load(&i->m0,(U64)si0);
l10=si0;
si1=38U;
si0=si0 == si1;
if(si0){
goto L17;
}
si0=l13;
si1=l5;
si2=44U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l15;
si1=l5;
si2=36U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l16;
si1=l5;
si2=28U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l17;
si1=l5;
si2=20U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l18;
si1=l5;
si2=12U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l11;
si1=l5;
si2=4U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=48U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l8=si0;
si0=l2;
si1=l10;
i32_store(&i->m0,(U64)si0+208U,si1);
si0=l2;
si1=144U;
si0+=si1;
si1=l7;
si2=l2;
si3=208U;
si2+=si3;
f1594(i,si0,si1,si2);
si0=l8;
if(si0){
goto L20;
}
si0=0U;
l8=si0;
goto L19;
L20:;
si0=l8;
si1=l7;
si0=f1701(i,si0,si1);
l8=si0;
L19:;
si0=l2;
si1=l8;
i32_store(&i->m0,(U64)si0+200U,si1);
si0=l2;
si0=i32_load(&i->m0,(U64)si0+144U);
l8=si0;
si1=38U;
si0=si0 == si1;
if(si0){
goto L22;
}
si0=l2;
si1=80U;
si0+=si1;
si1=56U;
si0+=si1;
l10=si0;
si1=l1;
si2=56U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=80U;
si0+=si1;
si1=48U;
si0+=si1;
l20=si0;
si1=l1;
si2=48U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=80U;
si0+=si1;
si1=40U;
si0+=si1;
l21=si0;
si1=l1;
si2=40U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=80U;
si0+=si1;
si1=32U;
si0+=si1;
l22=si0;
si1=l1;
si2=32U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=80U;
si0+=si1;
si1=24U;
si0+=si1;
l23=si0;
si1=l1;
si2=24U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=80U;
si0+=si1;
si1=16U;
si0+=si1;
l24=si0;
si1=l1;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=80U;
si0+=si1;
si1=8U;
si0+=si1;
l25=si0;
si1=l1;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=l1;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+80U,sj1);
si0=l8;
si1=39U;
si0=si0 != si1;
if(si0){
goto L21;
}
L22:;
si0=l9;
si1=l14;
si2=56U;
si1+=si2;
l14=si1;
si0+=si1;
si1=l6;
si0=si0 != si1;
if(si0){
goto L18;
}
goto L13;
L21:;
}
si0=l2;
si1=16U;
si0+=si1;
si1=56U;
si0+=si1;
l14=si0;
si1=l10;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=16U;
si0+=si1;
si1=48U;
si0+=si1;
l10=si0;
si1=l20;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=16U;
si0+=si1;
si1=40U;
si0+=si1;
l20=si0;
si1=l21;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=16U;
si0+=si1;
si1=32U;
si0+=si1;
l21=si0;
si1=l22;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=16U;
si0+=si1;
si1=24U;
si0+=si1;
l22=si0;
si1=l23;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=16U;
si0+=si1;
si1=16U;
si0+=si1;
l23=si0;
si1=l24;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=16U;
si0+=si1;
si1=8U;
si0+=si1;
l24=si0;
si1=l25;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=l2;
sj1=i64_load(&i->m0,(U64)si1+80U);
i64_store(&i->m0,(U64)si0+16U,sj1);
si0=l5;
si1=56U;
si0+=si1;
l9=si0;
si0=l19;
si1=l2;
si1=i32_load(&i->m0,(U64)si1+4U);
si0=si0 == si1;
if(si0){
goto L16;
}
goto L15;
L17:;
si0=l5;
si1=56U;
si0+=si1;
si1=l6;
si0=si0 == si1;
if(si0){
goto L13;
}
si0=l5;
si1=104U;
si0+=si1;
l5=si0;
si0=l6;
si1=l9;
si0-=si1;
si1=l14;
si0-=si1;
si1=-56U;
si0+=si1;
si1=56U;
si0=DIV_U(si0,si1);
l14=si0;
L23:;
{
si0=l5;
si1=-48U;
si0+=si1;
f1684(i,si0);
si0=l5;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si0=!(si0);
if(si0){
goto L24;
}
si0=l1;
f1684(i,si0);
si0=l1;
f15271(i,si0);
L24:;
si0=l5;
si1=56U;
si0+=si1;
l5=si0;
si0=l14;
si1=-1U;
si0+=si1;
l14=si0;
if(si0){
goto L23;
}
goto L13;
}
L16:;
si0=l2;
si1=l19;
si2=1U;
f1675(i,si0,si1,si2);
si0=l2;
si0=i32_load(&i->m0,(U64)si0);
l12=si0;
L15:;
si0=l12;
si1=l19;
si2=6U;
si1<<=(si2&31);
si0+=si1;
l5=si0;
si1=l8;
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=l2;
sj1=i64_load(&i->m0,(U64)si1+16U);
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l5;
si1=12U;
si0+=si1;
si1=l24;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=20U;
si0+=si1;
si1=l23;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=28U;
si0+=si1;
si1=l22;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=36U;
si0+=si1;
si1=l21;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=44U;
si0+=si1;
si1=l20;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=52U;
si0+=si1;
si1=l10;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=60U;
si0+=si1;
si1=l14;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=l19;
si2=1U;
si1+=si2;
l19=si1;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l9;
si1=l6;
si0=si0 != si1;
if(si0){
goto L14;
}
}
L13:;
si0=l3;
si0=!(si0);
if(si0){
goto L25;
}
si0=l4;
f15271(i,si0);
L25:;
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
si1=256U;
si0+=si1;
i->g0=si0;
goto L0;
L1:;
si0=8U;
si1=256U;
f52(i,si0,si1);
UNREACHABLE;
L0:;
}

void f1665(rustpythonInstance*i,U32 l0) {
U32 l1=0;
U32 l2=0;
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 si0,si1,si2;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+8U);
l1=si0;
si0=!(si0);
if(si0){
goto L1;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si0=0U;
l3=si0;
L2:;
{
si0=l2;
si1=l3;
si2=72U;
si1*=si2;
si0+=si1;
l0=si0;
f1647(i,si0);
si0=l0;
si0=i32_load(&i->m0,(U64)si0+68U);
l4=si0;
si0=!(si0);
if(si0){
goto L3;
}
si0=l4;
f1643(i,si0);
si0=l4;
f15271(i,si0);
L3:;
si0=l0;
si1=56U;
si0+=si1;
l5=si0;
si0=l0;
si1=64U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
si0=!(si0);
if(si0){
goto L4;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+56U);
l0=si0;
L5:;
{
si0=l0;
f1645(i,si0);
si0=l0;
si1=72U;
si0+=si1;
l0=si0;
si0=l4;
si1=-1U;
si0+=si1;
l4=si0;
if(si0){
goto L5;
}
}
L4:;
si0=l3;
si1=1U;
si0+=si1;
l3=si0;
si0=l5;
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L6;
}
si0=l5;
si0=i32_load(&i->m0,(U64)si0);
f15271(i,si0);
L6:;
si0=l3;
si1=l1;
si0=si0 != si1;
if(si0){
goto L2;
}
}
L1:;
L0:;
}

void f1666(rustpythonInstance*i,U32 l0) {
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
si1=20U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si0=!(si0);
if(si0){
goto L4;
}
si0=l2;
f1643(i,si0);
si0=l2;
f15271(i,si0);
L4:;
si0=l0;
si1=24U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si0=!(si0);
if(si0){
goto L5;
}
si0=l0;
si1=28U;
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
si1=36U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si0=!(si0);
if(si0){
goto L6;
}
si0=l2;
f1643(i,si0);
si0=l2;
f15271(i,si0);
L6:;
si0=l0;
si1=40U;
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

void f1667(rustpythonInstance*i,U32 l0) {
U32 l1=0;
U32 l2=0;
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 si0,si1,si2;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+8U);
l1=si0;
si0=!(si0);
if(si0){
goto L1;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si0=0U;
l3=si0;
L2:;
{
si0=l2;
si1=l3;
si2=36U;
si1*=si2;
si0+=si1;
l4=si0;
si0=i32_load(&i->m0,(U64)si0+20U);
l0=si0;
si0=!(si0);
if(si0){
goto L3;
}
si0=l0;
f1643(i,si0);
si0=l0;
f15271(i,si0);
L3:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+24U);
l0=si0;
si0=!(si0);
if(si0){
goto L4;
}
si0=l4;
si1=28U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L4;
}
si0=l0;
f15271(i,si0);
L4:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+8U);
l5=si0;
si0=!(si0);
if(si0){
goto L5;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
l0=si0;
L6:;
{
si0=l0;
f1645(i,si0);
si0=l0;
si1=72U;
si0+=si1;
l0=si0;
si0=l5;
si1=-1U;
si0+=si1;
l5=si0;
if(si0){
goto L6;
}
}
L5:;
si0=l3;
si1=1U;
si0+=si1;
l3=si0;
si0=l4;
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L7;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
f15271(i,si0);
L7:;
si0=l3;
si1=l1;
si0=si0 != si1;
if(si0){
goto L2;
}
}
L1:;
L0:;
}

void f1668(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
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

void f1669(rustpythonInstance*i,U32 l0,U32 l1) {
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
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l2;
si1=l3;
si2=56U;
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
f1668(i,si0,si1,si2,si3);
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

void f1670(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
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
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l3;
si1=l1;
si2=88U;
si1*=si2;
i32_store(&i->m0,(U64)si0+24U,si1);
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
si1=l5;
si2=l4;
si3=l3;
si4=16U;
si3+=si4;
f1668(i,si0,si1,si2,si3);
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

void f1671(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
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
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l3;
si1=l1;
si2=56U;
si1*=si2;
i32_store(&i->m0,(U64)si0+24U,si1);
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
si1=l5;
si2=l4;
si3=l3;
si4=16U;
si3+=si4;
f1668(i,si0,si1,si2,si3);
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

void f1672(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
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
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l3;
si1=l1;
si2=80U;
si1*=si2;
i32_store(&i->m0,(U64)si0+24U,si1);
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
si1=l5;
si2=l4;
si3=l3;
si4=16U;
si3+=si4;
f1668(i,si0,si1,si2,si3);
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

void f1673(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
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
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l3;
si1=l1;
si2=7U;
si1<<=(si2&31);
i32_store(&i->m0,(U64)si0+24U,si1);
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
si1=l5;
si2=l4;
si3=l3;
si4=16U;
si3+=si4;
f1668(i,si0,si1,si2,si3);
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

void f1674(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
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
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l3;
si1=l1;
si2=44U;
si1*=si2;
i32_store(&i->m0,(U64)si0+24U,si1);
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
si1=l5;
si2=l4;
si3=l3;
si4=16U;
si3+=si4;
f1668(i,si0,si1,si2,si3);
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

void f1675(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
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
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l3;
si1=l1;
si2=6U;
si1<<=(si2&31);
i32_store(&i->m0,(U64)si0+24U,si1);
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
si1=l5;
si2=l4;
si3=l3;
si4=16U;
si3+=si4;
f1668(i,si0,si1,si2,si3);
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

void f1676(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
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
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l3;
si1=l1;
si2=40U;
si1*=si2;
i32_store(&i->m0,(U64)si0+24U,si1);
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
si1=l5;
si2=l4;
si3=l3;
si4=16U;
si3+=si4;
f1668(i,si0,si1,si2,si3);
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

void f1677(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
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
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l3;
si1=l1;
si2=48U;
si1*=si2;
i32_store(&i->m0,(U64)si0+24U,si1);
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
si1=l5;
si2=l4;
si3=l3;
si4=16U;
si3+=si4;
f1668(i,si0,si1,si2,si3);
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

void f1678(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
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
f1668(i,si0,si1,si2,si3);
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

void f1679(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
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
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l3;
si1=l1;
si2=80U;
si1*=si2;
i32_store(&i->m0,(U64)si0+24U,si1);
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
si1=l5;
si2=l4;
si3=l3;
si4=16U;
si3+=si4;
f1668(i,si0,si1,si2,si3);
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

void f1680(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4,U32 l5) {
U32 l6=0;
U32 l7=0;
U32 l8=0;
U32 l9=0;
U32 si0,si1;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+8U);
l6=si0;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+12U);
l7=si1;
si0=si0 == si1;
if(si0){
goto L1;
}
si0=l6;
si1=-1U;
si0^=si1;
si1=l7;
si0+=si1;
l8=si0;
si0=l7;
si1=l6;
si0-=si1;
si1=7U;
si0&=si1;
l9=si0;
si0=!(si0);
if(si0){
goto L2;
}
L3:;
{
si0=l3;
si1=l6;
si1=i32_load8_u(&i->m0,(U64)si1);
i32_store8(&i->m0,(U64)si0,si1);
si0=l3;
si1=1U;
si0+=si1;
l3=si0;
si0=l6;
si1=1U;
si0+=si1;
l6=si0;
si0=l9;
si1=-1U;
si0+=si1;
l9=si0;
if(si0){
goto L3;
}
}
L2:;
si0=l8;
si1=7U;
si0=si0 < si1;
if(si0){
goto L4;
}
L5:;
{
si0=l3;
si1=l6;
si1=i32_load8_u(&i->m0,(U64)si1);
i32_store8(&i->m0,(U64)si0,si1);
si0=l3;
si1=l6;
si1=i32_load8_u(&i->m0,(U64)si1+1U);
i32_store8(&i->m0,(U64)si0+1U,si1);
si0=l3;
si1=l6;
si1=i32_load8_u(&i->m0,(U64)si1+2U);
i32_store8(&i->m0,(U64)si0+2U,si1);
si0=l3;
si1=l6;
si1=i32_load8_u(&i->m0,(U64)si1+3U);
i32_store8(&i->m0,(U64)si0+3U,si1);
si0=l3;
si1=l6;
si1=i32_load8_u(&i->m0,(U64)si1+4U);
i32_store8(&i->m0,(U64)si0+4U,si1);
si0=l3;
si1=l6;
si1=i32_load8_u(&i->m0,(U64)si1+5U);
i32_store8(&i->m0,(U64)si0+5U,si1);
si0=l3;
si1=l6;
si1=i32_load8_u(&i->m0,(U64)si1+6U);
i32_store8(&i->m0,(U64)si0+6U,si1);
si0=l3;
si1=l6;
si1=i32_load8_u(&i->m0,(U64)si1+7U);
i32_store8(&i->m0,(U64)si0+7U,si1);
si0=l3;
si1=8U;
si0+=si1;
l3=si0;
si0=l6;
si1=8U;
si0+=si1;
l6=si0;
si1=l7;
si0=si0 != si1;
if(si0){
goto L5;
}
}
L4:;
si0=l1;
si1=l7;
i32_store(&i->m0,(U64)si0+8U,si1);
L1:;
si0=l0;
si1=l2;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=8U;
si0+=si1;
si1=l3;
i32_store(&i->m0,(U64)si0,si1);
L0:;
}

void f1681(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 l8=0;
U32 l9=0;
U32 l10=0;
U32 l11=0;
U32 si0,si1,si2,si3;
si0=i->g0;
si1=240U;
si0-=si1;
l4=si0;
i->g0=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+8U);
l5=si0;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+12U);
l6=si1;
si0=si0 != si1;
if(si0){
goto L2;
}
si0=9U;
l5=si0;
goto L1;
L2:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+16U);
l7=si0;
si0=l4;
si1=168U;
si0+=si1;
si1=4U;
si0|=si1;
l8=si0;
si0=l4;
si1=88U;
si0+=si1;
si1=4U;
si0|=si1;
l9=si0;
L4:;
{
si0=l1;
si1=l5;
si2=72U;
si1+=si2;
l10=si1;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l5;
si0=i32_load(&i->m0,(U64)si0);
l11=si0;
si1=8U;
si0=si0 != si1;
if(si0){
goto L5;
}
si0=9U;
l5=si0;
goto L1;
L5:;
si0=l8;
si1=l5;
si2=4U;
si1+=si2;
si2=68U;
si0=f15390(i,si0,si1,si2);
si0=l4;
si1=l11;
i32_store(&i->m0,(U64)si0+168U,si1);
si0=l4;
si1=88U;
si0+=si1;
si1=l7;
si2=l4;
si3=168U;
si2+=si3;
f1634(i,si0,si1,si2);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+88U);
l5=si0;
si1=8U;
si0=si0 == si1;
if(si0){
goto L6;
}
si0=l4;
si1=12U;
si0+=si1;
si1=l9;
si2=76U;
si0=f15390(i,si0,si1,si2);
si0=l5;
si1=9U;
si0=si0 != si1;
if(si0){
goto L3;
}
L6:;
si0=l10;
l5=si0;
si0=l10;
si1=l6;
si0=si0 != si1;
if(si0){
goto L4;
}
}
si0=9U;
l5=si0;
goto L1;
L3:;
si0=l0;
si1=4U;
si0+=si1;
si1=l4;
si2=12U;
si1+=si2;
si2=76U;
si0=f15390(i,si0,si1,si2);
L1:;
si0=l0;
si1=l5;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=240U;
si0+=si1;
i->g0=si0;
L0:;
}

void f1682(rustpythonInstance*i,U32 l0) {
U32 l1=0;
U32 l2=0;
U32 l3=0;
U32 l4=0;
U32 si0,si1;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
switch(si0){
case 0:
goto L25;
case 1:
goto L24;
case 2:
goto L23;
case 3:
goto L22;
case 4:
goto L21;
case 5:
goto L20;
case 6:
goto L19;
case 7:
goto L18;
case 8:
goto L17;
case 9:
goto L16;
case 10:
goto L15;
case 11:
goto L14;
case 12:
goto L13;
case 13:
goto L12;
case 14:
goto L11;
case 15:
goto L10;
case 16:
goto L9;
case 17:
goto L8;
case 18:
goto L7;
case 19:
goto L6;
case 20:
goto L5;
case 21:
goto L4;
case 22:
goto L3;
case 23:
goto L1;
default:
goto L2;
}
L25:;
si0=l0;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L26;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+4U);
f15271(i,si0);
L26:;
si0=l0;
si1=16U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
f1666(i,si0);
si0=l1;
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L27;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
f15271(i,si0);
L27:;
si0=l1;
si1=12U;
si0+=si1;
l2=si0;
f1666(i,si0);
si0=l1;
si1=16U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L28;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0);
f15271(i,si0);
L28:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+36U);
l2=si0;
si0=!(si0);
if(si0){
goto L29;
}
si0=l2;
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L30;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0);
f15271(i,si0);
L30:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+20U);
l3=si0;
si0=!(si0);
if(si0){
goto L31;
}
si0=l3;
f1683(i,si0);
si0=l3;
f15271(i,si0);
L31:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+24U);
l3=si0;
si0=!(si0);
if(si0){
goto L32;
}
si0=l2;
si1=28U;
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
f15271(i,si0);
L29:;
si0=l1;
si1=24U;
si0+=si1;
l2=si0;
f1666(i,si0);
si0=l1;
si1=28U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L33;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0);
f15271(i,si0);
L33:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+40U);
l2=si0;
si0=!(si0);
if(si0){
goto L34;
}
si0=l2;
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L35;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0);
f15271(i,si0);
L35:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+20U);
l3=si0;
si0=!(si0);
if(si0){
goto L36;
}
si0=l3;
f1683(i,si0);
si0=l3;
f15271(i,si0);
L36:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+24U);
l3=si0;
si0=!(si0);
if(si0){
goto L37;
}
si0=l2;
si1=28U;
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
f15271(i,si0);
L34:;
si0=l1;
f15271(i,si0);
si0=l0;
si1=20U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=l0;
si1=28U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si0=!(si0);
if(si0){
goto L38;
}
si0=l3;
l1=si0;
L39:;
{
si0=l1;
f1645(i,si0);
si0=l1;
si1=72U;
si0+=si1;
l1=si0;
si0=l2;
si1=-1U;
si0+=si1;
l2=si0;
if(si0){
goto L39;
}
}
L38:;
si0=l0;
si1=24U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L40;
}
si0=l3;
f15271(i,si0);
L40:;
si0=l0;
si1=32U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=l0;
si1=40U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si0=!(si0);
if(si0){
goto L41;
}
si0=l3;
l1=si0;
L42:;
{
si0=l1;
f1643(i,si0);
si0=l1;
si1=48U;
si0+=si1;
l1=si0;
si0=l2;
si1=-1U;
si0+=si1;
l2=si0;
if(si0){
goto L42;
}
}
L41:;
si0=l0;
si1=36U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L43;
}
si0=l3;
f15271(i,si0);
L43:;
si0=l0;
si1=52U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si0=!(si0);
if(si0){
goto L44;
}
si0=l1;
f1683(i,si0);
si0=l1;
f15271(i,si0);
L44:;
si0=l0;
si1=56U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si0=!(si0);
if(si0){
goto L2;
}
si0=l0;
si1=60U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L2;
}
si0=l1;
f15271(i,si0);
goto L0;
L24:;
si0=l0;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L45;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+4U);
f15271(i,si0);
L45:;
si0=l0;
si1=16U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
f1666(i,si0);
si0=l1;
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L46;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
f15271(i,si0);
L46:;
si0=l1;
si1=12U;
si0+=si1;
l2=si0;
f1666(i,si0);
si0=l1;
si1=16U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L47;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0);
f15271(i,si0);
L47:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+36U);
l2=si0;
si0=!(si0);
if(si0){
goto L48;
}
si0=l2;
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L49;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0);
f15271(i,si0);
L49:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+20U);
l3=si0;
si0=!(si0);
if(si0){
goto L50;
}
si0=l3;
f1683(i,si0);
si0=l3;
f15271(i,si0);
L50:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+24U);
l3=si0;
si0=!(si0);
if(si0){
goto L51;
}
si0=l2;
si1=28U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L51;
}
si0=l3;
f15271(i,si0);
L51:;
si0=l2;
f15271(i,si0);
L48:;
si0=l1;
si1=24U;
si0+=si1;
l2=si0;
f1666(i,si0);
si0=l1;
si1=28U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L52;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0);
f15271(i,si0);
L52:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+40U);
l2=si0;
si0=!(si0);
if(si0){
goto L53;
}
si0=l2;
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L54;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0);
f15271(i,si0);
L54:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+20U);
l3=si0;
si0=!(si0);
if(si0){
goto L55;
}
si0=l3;
f1683(i,si0);
si0=l3;
f15271(i,si0);
L55:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+24U);
l3=si0;
si0=!(si0);
if(si0){
goto L56;
}
si0=l2;
si1=28U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L56;
}
si0=l3;
f15271(i,si0);
L56:;
si0=l2;
f15271(i,si0);
L53:;
si0=l1;
f15271(i,si0);
si0=l0;
si1=20U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=l0;
si1=28U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si0=!(si0);
if(si0){
goto L57;
}
si0=l3;
l1=si0;
L58:;
{
si0=l1;
f1645(i,si0);
si0=l1;
si1=72U;
si0+=si1;
l1=si0;
si0=l2;
si1=-1U;
si0+=si1;
l2=si0;
if(si0){
goto L58;
}
}
L57:;
si0=l0;
si1=24U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L59;
}
si0=l3;
f15271(i,si0);
L59:;
si0=l0;
si1=32U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=l0;
si1=40U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si0=!(si0);
if(si0){
goto L60;
}
si0=l3;
l1=si0;
L61:;
{
si0=l1;
f1643(i,si0);
si0=l1;
si1=48U;
si0+=si1;
l1=si0;
si0=l2;
si1=-1U;
si0+=si1;
l2=si0;
if(si0){
goto L61;
}
}
L60:;
si0=l0;
si1=36U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L62;
}
si0=l3;
f15271(i,si0);
L62:;
si0=l0;
si1=52U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si0=!(si0);
if(si0){
goto L63;
}
si0=l1;
f1683(i,si0);
si0=l1;
f15271(i,si0);
L63:;
si0=l0;
si1=56U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si0=!(si0);
if(si0){
goto L2;
}
si0=l0;
si1=60U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L2;
}
si0=l1;
f15271(i,si0);
goto L0;
L23:;
si0=l0;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L64;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+4U);
f15271(i,si0);
L64:;
si0=l0;
si1=16U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=l0;
si1=24U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si0=!(si0);
if(si0){
goto L65;
}
si0=l3;
l1=si0;
L66:;
{
si0=l1;
f1643(i,si0);
si0=l1;
si1=48U;
si0+=si1;
l1=si0;
si0=l2;
si1=-1U;
si0+=si1;
l2=si0;
if(si0){
goto L66;
}
}
L65:;
si0=l0;
si1=20U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L67;
}
si0=l3;
f15271(i,si0);
L67:;
si0=l0;
si1=28U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
si0=l0;
si1=36U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si0=!(si0);
if(si0){
goto L68;
}
si0=l4;
l1=si0;
L69:;
{
si0=l1;
si1=56U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=!(si0);
if(si0){
goto L70;
}
si0=l1;
si1=60U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L70;
}
si0=l3;
f15271(i,si0);
L70:;
si0=l1;
f1643(i,si0);
si0=l1;
si1=72U;
si0+=si1;
l1=si0;
si0=l2;
si1=-1U;
si0+=si1;
l2=si0;
if(si0){
goto L69;
}
}
L68:;
si0=l0;
si1=32U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L71;
}
si0=l4;
f15271(i,si0);
L71:;
si0=l0;
si1=40U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=l0;
si1=48U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si0=!(si0);
if(si0){
goto L72;
}
si0=l3;
l1=si0;
L73:;
{
si0=l1;
f1645(i,si0);
si0=l1;
si1=72U;
si0+=si1;
l1=si0;
si0=l2;
si1=-1U;
si0+=si1;
l2=si0;
if(si0){
goto L73;
}
}
L72:;
si0=l0;
si1=44U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L74;
}
si0=l3;
f15271(i,si0);
L74:;
si0=l0;
si1=52U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=l0;
si1=60U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si0=!(si0);
if(si0){
goto L75;
}
si0=l3;
l1=si0;
L76:;
{
si0=l1;
f1643(i,si0);
si0=l1;
si1=48U;
si0+=si1;
l1=si0;
si0=l2;
si1=-1U;
si0+=si1;
l2=si0;
if(si0){
goto L76;
}
}
L75:;
si0=l0;
si1=56U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L2;
}
si0=l3;
f15271(i,si0);
goto L0;
L22:;
si0=l0;
si1=12U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l0=si0;
si0=!(si0);
if(si0){
goto L2;
}
si0=l0;
f1683(i,si0);
si0=l0;
f15271(i,si0);
goto L0;
L21:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+4U);
l3=si0;
si0=l0;
si1=12U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si0=!(si0);
if(si0){
goto L77;
}
si0=l3;
l1=si0;
L78:;
{
si0=l1;
f1643(i,si0);
si0=l1;
si1=48U;
si0+=si1;
l1=si0;
si0=l2;
si1=-1U;
si0+=si1;
l2=si0;
if(si0){
goto L78;
}
}
L77:;
si0=l0;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L2;
}
si0=l3;
f15271(i,si0);
goto L0;
L20:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+4U);
l3=si0;
si0=l0;
si1=12U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si0=!(si0);
if(si0){
goto L79;
}
si0=l3;
l1=si0;
L80:;
{
si0=l1;
f1643(i,si0);
si0=l1;
si1=48U;
si0+=si1;
l1=si0;
si0=l2;
si1=-1U;
si0+=si1;
l2=si0;
if(si0){
goto L80;
}
}
L79:;
si0=l0;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L81;
}
si0=l3;
f15271(i,si0);
L81:;
si0=l0;
si1=16U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
f1683(i,si0);
si0=l1;
f15271(i,si0);
si0=l0;
si1=28U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si0=!(si0);
if(si0){
goto L2;
}
si0=l0;
si1=32U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L2;
}
si0=l1;
f15271(i,si0);
goto L0;
L19:;
si0=l0;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si0=l0;
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l0=si0;
f1683(i,si0);
si0=l0;
f15271(i,si0);
si0=l1;
f1683(i,si0);
si0=l1;
f15271(i,si0);
goto L0;
L18:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+4U);
l1=si0;
f1683(i,si0);
si0=l1;
f15271(i,si0);
si0=l0;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
f1683(i,si0);
si0=l1;
f15271(i,si0);
si0=l0;
si1=20U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l0=si0;
si0=!(si0);
if(si0){
goto L2;
}
si0=l0;
f1683(i,si0);
si0=l0;
f15271(i,si0);
goto L0;
L17:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+4U);
l1=si0;
f1683(i,si0);
si0=l1;
f15271(i,si0);
si0=l0;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
f1683(i,si0);
si0=l1;
f15271(i,si0);
si0=l0;
si1=12U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=l0;
si1=20U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si0=!(si0);
if(si0){
goto L82;
}
si0=l3;
l1=si0;
L83:;
{
si0=l1;
f1645(i,si0);
si0=l1;
si1=72U;
si0+=si1;
l1=si0;
si0=l2;
si1=-1U;
si0+=si1;
l2=si0;
if(si0){
goto L83;
}
}
L82:;
si0=l0;
si1=16U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L84;
}
si0=l3;
f15271(i,si0);
L84:;
si0=l0;
si1=24U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=l0;
si1=32U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si0=!(si0);
if(si0){
goto L85;
}
si0=l3;
l1=si0;
L86:;
{
si0=l1;
f1645(i,si0);
si0=l1;
si1=72U;
si0+=si1;
l1=si0;
si0=l2;
si1=-1U;
si0+=si1;
l2=si0;
if(si0){
goto L86;
}
}
L85:;
si0=l0;
si1=28U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L87;
}
si0=l3;
f15271(i,si0);
L87:;
si0=l0;
si1=44U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si0=!(si0);
if(si0){
goto L2;
}
si0=l0;
si1=48U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L2;
}
si0=l1;
f15271(i,si0);
goto L0;
L16:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+4U);
l1=si0;
f1683(i,si0);
si0=l1;
f15271(i,si0);
si0=l0;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
f1683(i,si0);
si0=l1;
f15271(i,si0);
si0=l0;
si1=12U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=l0;
si1=20U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si0=!(si0);
if(si0){
goto L88;
}
si0=l3;
l1=si0;
L89:;
{
si0=l1;
f1645(i,si0);
si0=l1;
si1=72U;
si0+=si1;
l1=si0;
si0=l2;
si1=-1U;
si0+=si1;
l2=si0;
if(si0){
goto L89;
}
}
L88:;
si0=l0;
si1=16U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L90;
}
si0=l3;
f15271(i,si0);
L90:;
si0=l0;
si1=24U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=l0;
si1=32U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si0=!(si0);
if(si0){
goto L91;
}
si0=l3;
l1=si0;
L92:;
{
si0=l1;
f1645(i,si0);
si0=l1;
si1=72U;
si0+=si1;
l1=si0;
si0=l2;
si1=-1U;
si0+=si1;
l2=si0;
if(si0){
goto L92;
}
}
L91:;
si0=l0;
si1=28U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L93;
}
si0=l3;
f15271(i,si0);
L93:;
si0=l0;
si1=44U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si0=!(si0);
if(si0){
goto L2;
}
si0=l0;
si1=48U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L2;
}
si0=l1;
f15271(i,si0);
goto L0;
L15:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+4U);
l1=si0;
f1683(i,si0);
si0=l1;
f15271(i,si0);
si0=l0;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=l0;
si1=16U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si0=!(si0);
if(si0){
goto L94;
}
si0=l3;
l1=si0;
L95:;
{
si0=l1;
f1645(i,si0);
si0=l1;
si1=72U;
si0+=si1;
l1=si0;
si0=l2;
si1=-1U;
si0+=si1;
l2=si0;
if(si0){
goto L95;
}
}
L94:;
si0=l0;
si1=12U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L96;
}
si0=l3;
f15271(i,si0);
L96:;
si0=l0;
si1=20U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=l0;
si1=28U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si0=!(si0);
if(si0){
goto L97;
}
si0=l3;
l1=si0;
L98:;
{
si0=l1;
f1645(i,si0);
si0=l1;
si1=72U;
si0+=si1;
l1=si0;
si0=l2;
si1=-1U;
si0+=si1;
l2=si0;
if(si0){
goto L98;
}
}
L97:;
si0=l0;
si1=24U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L2;
}
si0=l3;
f15271(i,si0);
goto L0;
L14:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+4U);
l1=si0;
f1683(i,si0);
si0=l1;
f15271(i,si0);
si0=l0;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=l0;
si1=16U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si0=!(si0);
if(si0){
goto L99;
}
si0=l3;
l1=si0;
L100:;
{
si0=l1;
f1645(i,si0);
si0=l1;
si1=72U;
si0+=si1;
l1=si0;
si0=l2;
si1=-1U;
si0+=si1;
l2=si0;
if(si0){
goto L100;
}
}
L99:;
si0=l0;
si1=12U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L101;
}
si0=l3;
f15271(i,si0);
L101:;
si0=l0;
si1=20U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=l0;
si1=28U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si0=!(si0);
if(si0){
goto L102;
}
si0=l3;
l1=si0;
L103:;
{
si0=l1;
f1645(i,si0);
si0=l1;
si1=72U;
si0+=si1;
l1=si0;
si0=l2;
si1=-1U;
si0+=si1;
l2=si0;
if(si0){
goto L103;
}
}
L102:;
si0=l0;
si1=24U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L2;
}
si0=l3;
f15271(i,si0);
goto L0;
L13:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+4U);
l4=si0;
si0=l0;
si1=12U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=!(si0);
if(si0){
goto L104;
}
si0=l4;
l1=si0;
L105:;
{
si0=l1;
f1643(i,si0);
si0=l1;
si1=48U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si0=!(si0);
if(si0){
goto L106;
}
si0=l2;
f1643(i,si0);
si0=l2;
f15271(i,si0);
L106:;
si0=l1;
si1=56U;
si0+=si1;
l1=si0;
si0=l3;
si1=-1U;
si0+=si1;
l3=si0;
if(si0){
goto L105;
}
}
L104:;
si0=l0;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L107;
}
si0=l4;
f15271(i,si0);
L107:;
si0=l0;
si1=16U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=l0;
si1=24U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si0=!(si0);
if(si0){
goto L108;
}
si0=l3;
l1=si0;
L109:;
{
si0=l1;
f1645(i,si0);
si0=l1;
si1=72U;
si0+=si1;
l1=si0;
si0=l2;
si1=-1U;
si0+=si1;
l2=si0;
if(si0){
goto L109;
}
}
L108:;
si0=l0;
si1=20U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L110;
}
si0=l3;
f15271(i,si0);
L110:;
si0=l0;
si1=36U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si0=!(si0);
if(si0){
goto L2;
}
si0=l0;
si1=40U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L2;
}
si0=l1;
f15271(i,si0);
goto L0;
L12:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+4U);
l4=si0;
si0=l0;
si1=12U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=!(si0);
if(si0){
goto L111;
}
si0=l4;
l1=si0;
L112:;
{
si0=l1;
f1643(i,si0);
si0=l1;
si1=48U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si0=!(si0);
if(si0){
goto L113;
}
si0=l2;
f1643(i,si0);
si0=l2;
f15271(i,si0);
L113:;
si0=l1;
si1=56U;
si0+=si1;
l1=si0;
si0=l3;
si1=-1U;
si0+=si1;
l3=si0;
if(si0){
goto L112;
}
}
L111:;
si0=l0;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L114;
}
si0=l4;
f15271(i,si0);
L114:;
si0=l0;
si1=16U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=l0;
si1=24U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si0=!(si0);
if(si0){
goto L115;
}
si0=l3;
l1=si0;
L116:;
{
si0=l1;
f1645(i,si0);
si0=l1;
si1=72U;
si0+=si1;
l1=si0;
si0=l2;
si1=-1U;
si0+=si1;
l2=si0;
if(si0){
goto L116;
}
}
L115:;
si0=l0;
si1=20U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L117;
}
si0=l3;
f15271(i,si0);
L117:;
si0=l0;
si1=36U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si0=!(si0);
if(si0){
goto L2;
}
si0=l0;
si1=40U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L2;
}
si0=l1;
f15271(i,si0);
goto L0;
L11:;
si0=l0;
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
f1683(i,si0);
si0=l1;
f15271(i,si0);
si0=l0;
si1=8U;
si0+=si1;
l1=si0;
f1665(i,si0);
si0=l0;
si1=12U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L2;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
f15271(i,si0);
goto L0;
L10:;
si0=l0;
si1=16U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si0=l0;
si1=12U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l0=si0;
si0=!(si0);
if(si0){
goto L118;
}
si0=l0;
f1683(i,si0);
si0=l0;
f15271(i,si0);
L118:;
si0=l1;
si0=!(si0);
if(si0){
goto L2;
}
si0=l1;
f1683(i,si0);
si0=l1;
f15271(i,si0);
goto L0;
L9:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+4U);
l3=si0;
si0=l0;
si1=12U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si0=!(si0);
if(si0){
goto L119;
}
si0=l3;
l1=si0;
L120:;
{
si0=l1;
f1645(i,si0);
si0=l1;
si1=72U;
si0+=si1;
l1=si0;
si0=l2;
si1=-1U;
si0+=si1;
l2=si0;
if(si0){
goto L120;
}
}
L119:;
si0=l0;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L121;
}
si0=l3;
f15271(i,si0);
L121:;
si0=l0;
si1=16U;
si0+=si1;
l1=si0;
f1667(i,si0);
si0=l0;
si1=20U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L122;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
f15271(i,si0);
L122:;
si0=l0;
si1=28U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=l0;
si1=36U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si0=!(si0);
if(si0){
goto L123;
}
si0=l3;
l1=si0;
L124:;
{
si0=l1;
f1645(i,si0);
si0=l1;
si1=72U;
si0+=si1;
l1=si0;
si0=l2;
si1=-1U;
si0+=si1;
l2=si0;
if(si0){
goto L124;
}
}
L123:;
si0=l0;
si1=32U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L125;
}
si0=l3;
f15271(i,si0);
L125:;
si0=l0;
si1=40U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=l0;
si1=48U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si0=!(si0);
if(si0){
goto L126;
}
si0=l3;
l1=si0;
L127:;
{
si0=l1;
f1645(i,si0);
si0=l1;
si1=72U;
si0+=si1;
l1=si0;
si0=l2;
si1=-1U;
si0+=si1;
l2=si0;
if(si0){
goto L127;
}
}
L126:;
si0=l0;
si1=44U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L2;
}
si0=l3;
f15271(i,si0);
goto L0;
L8:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+4U);
l3=si0;
si0=l0;
si1=12U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si0=!(si0);
if(si0){
goto L128;
}
si0=l3;
l1=si0;
L129:;
{
si0=l1;
f1645(i,si0);
si0=l1;
si1=72U;
si0+=si1;
l1=si0;
si0=l2;
si1=-1U;
si0+=si1;
l2=si0;
if(si0){
goto L129;
}
}
L128:;
si0=l0;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L130;
}
si0=l3;
f15271(i,si0);
L130:;
si0=l0;
si1=16U;
si0+=si1;
l1=si0;
f1667(i,si0);
si0=l0;
si1=20U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L131;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
f15271(i,si0);
L131:;
si0=l0;
si1=28U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=l0;
si1=36U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si0=!(si0);
if(si0){
goto L132;
}
si0=l3;
l1=si0;
L133:;
{
si0=l1;
f1645(i,si0);
si0=l1;
si1=72U;
si0+=si1;
l1=si0;
si0=l2;
si1=-1U;
si0+=si1;
l2=si0;
if(si0){
goto L133;
}
}
L132:;
si0=l0;
si1=32U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L134;
}
si0=l3;
f15271(i,si0);
L134:;
si0=l0;
si1=40U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=l0;
si1=48U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si0=!(si0);
if(si0){
goto L135;
}
si0=l3;
l1=si0;
L136:;
{
si0=l1;
f1645(i,si0);
si0=l1;
si1=72U;
si0+=si1;
l1=si0;
si0=l2;
si1=-1U;
si0+=si1;
l2=si0;
if(si0){
goto L136;
}
}
L135:;
si0=l0;
si1=44U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L2;
}
si0=l3;
f15271(i,si0);
goto L0;
L7:;
si0=l0;
si1=16U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si0=l0;
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l0=si0;
f1683(i,si0);
si0=l0;
f15271(i,si0);
si0=l1;
si0=!(si0);
if(si0){
goto L2;
}
si0=l1;
f1683(i,si0);
si0=l1;
f15271(i,si0);
goto L0;
L6:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+4U);
l4=si0;
si0=l0;
si1=12U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si0=!(si0);
if(si0){
goto L137;
}
si0=l4;
l1=si0;
L138:;
{
si0=l1;
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L139;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
f15271(i,si0);
L139:;
si0=l1;
si1=20U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=!(si0);
if(si0){
goto L140;
}
si0=l1;
si1=24U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L140;
}
si0=l3;
f15271(i,si0);
L140:;
si0=l1;
si1=32U;
si0+=si1;
l1=si0;
si0=l2;
si1=-1U;
si0+=si1;
l2=si0;
if(si0){
goto L138;
}
}
L137:;
si0=l0;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L2;
}
si0=l4;
f15271(i,si0);
goto L0;
L5:;
si0=l0;
si1=32U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si0=!(si0);
if(si0){
goto L141;
}
si0=l0;
si1=36U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L141;
}
si0=l1;
f15271(i,si0);
L141:;
si0=l0;
si1=12U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
si0=l0;
si1=20U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si0=!(si0);
if(si0){
goto L142;
}
si0=l4;
l1=si0;
L143:;
{
si0=l1;
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L144;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
f15271(i,si0);
L144:;
si0=l1;
si1=20U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=!(si0);
if(si0){
goto L145;
}
si0=l1;
si1=24U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L145;
}
si0=l3;
f15271(i,si0);
L145:;
si0=l1;
si1=32U;
si0+=si1;
l1=si0;
si0=l2;
si1=-1U;
si0+=si1;
l2=si0;
if(si0){
goto L143;
}
}
L142:;
si0=l0;
si1=16U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L2;
}
si0=l4;
f15271(i,si0);
goto L0;
L4:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+4U);
l3=si0;
si0=l0;
si1=12U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si0=!(si0);
if(si0){
goto L146;
}
si0=l3;
l1=si0;
L147:;
{
si0=l1;
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L148;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
f15271(i,si0);
L148:;
si0=l1;
si1=12U;
si0+=si1;
l1=si0;
si0=l2;
si1=-1U;
si0+=si1;
l2=si0;
if(si0){
goto L147;
}
}
L146:;
si0=l0;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L2;
}
si0=l3;
f15271(i,si0);
goto L0;
L3:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+4U);
l3=si0;
si0=l0;
si1=12U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si0=!(si0);
if(si0){
goto L149;
}
si0=l3;
l1=si0;
L150:;
{
si0=l1;
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L151;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
f15271(i,si0);
L151:;
si0=l1;
si1=12U;
si0+=si1;
l1=si0;
si0=l2;
si1=-1U;
si0+=si1;
l2=si0;
if(si0){
goto L150;
}
}
L149:;
si0=l0;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L2;
}
si0=l3;
f15271(i,si0);
L2:;
goto L0;
L1:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+4U);
l0=si0;
f1683(i,si0);
si0=l0;
f15271(i,si0);
L0:;
}

void f1683(rustpythonInstance*i,U32 l0) {
U32 l1=0;
U32 l2=0;
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 si0,si1,si2,si3;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si1=-11U;
si0+=si1;
l2=si0;
si1=19U;
si2=l2;
si3=27U;
si2=si2 < si3;
si0=si2?si0:si1;
switch(si0){
case 0:
goto L30;
case 1:
goto L29;
case 2:
goto L28;
case 3:
goto L27;
case 4:
goto L26;
case 5:
goto L25;
case 6:
goto L24;
case 7:
goto L23;
case 8:
goto L22;
case 9:
goto L21;
case 10:
goto L20;
case 11:
goto L19;
case 12:
goto L18;
case 13:
goto L17;
case 14:
goto L16;
case 15:
goto L15;
case 16:
goto L14;
case 17:
goto L13;
case 18:
goto L12;
case 19:
goto L11;
case 20:
goto L10;
case 21:
goto L9;
case 22:
goto L8;
case 23:
goto L7;
case 24:
goto L6;
case 25:
goto L5;
default:
goto L31;
}
L31:;
si0=l0;
si1=12U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si0=!(si0);
if(si0){
goto L32;
}
si0=l2;
f1683(i,si0);
si0=l2;
f15271(i,si0);
L32:;
si0=l0;
si1=16U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si0=!(si0);
if(si0){
goto L33;
}
si0=l2;
f1683(i,si0);
si0=l2;
f15271(i,si0);
L33:;
si0=l0;
si1=20U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si0=!(si0);
if(si0){
goto L1;
}
si0=l2;
f1683(i,si0);
si0=l2;
f15271(i,si0);
goto L0;
L30:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+4U);
l3=si0;
si0=l0;
si1=12U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si0=!(si0);
if(si0){
goto L34;
}
si0=l3;
l2=si0;
L35:;
{
si0=l2;
f1643(i,si0);
si0=l2;
si1=48U;
si0+=si1;
l2=si0;
si0=l1;
si1=-1U;
si0+=si1;
l1=si0;
if(si0){
goto L35;
}
}
L34:;
si0=l0;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L1;
}
si0=l3;
f15271(i,si0);
goto L0;
L29:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+4U);
l2=si0;
f1683(i,si0);
si0=l2;
f15271(i,si0);
si0=l0;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
f1683(i,si0);
si0=l2;
f15271(i,si0);
goto L0;
L28:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+4U);
l2=si0;
f1683(i,si0);
si0=l2;
f15271(i,si0);
si0=l0;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
f1683(i,si0);
si0=l2;
f15271(i,si0);
goto L0;
L27:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+4U);
l2=si0;
f1683(i,si0);
si0=l2;
f15271(i,si0);
goto L0;
L26:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+4U);
l2=si0;
f1666(i,si0);
si0=l2;
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L36;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0);
f15271(i,si0);
L36:;
si0=l2;
si1=12U;
si0+=si1;
l1=si0;
f1666(i,si0);
si0=l2;
si1=16U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L37;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
f15271(i,si0);
L37:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+36U);
l1=si0;
si0=!(si0);
if(si0){
goto L38;
}
si0=l1;
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L39;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
f15271(i,si0);
L39:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+20U);
l3=si0;
si0=!(si0);
if(si0){
goto L40;
}
si0=l3;
f1683(i,si0);
si0=l3;
f15271(i,si0);
L40:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+24U);
l3=si0;
si0=!(si0);
if(si0){
goto L41;
}
si0=l1;
si1=28U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L41;
}
si0=l3;
f15271(i,si0);
L41:;
si0=l1;
f15271(i,si0);
L38:;
si0=l2;
si1=24U;
si0+=si1;
l1=si0;
f1666(i,si0);
si0=l2;
si1=28U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L42;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
f15271(i,si0);
L42:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+40U);
l1=si0;
si0=!(si0);
if(si0){
goto L43;
}
si0=l1;
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L44;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
f15271(i,si0);
L44:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+20U);
l3=si0;
si0=!(si0);
if(si0){
goto L45;
}
si0=l3;
f1683(i,si0);
si0=l3;
f15271(i,si0);
L45:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+24U);
l3=si0;
si0=!(si0);
if(si0){
goto L46;
}
si0=l1;
si1=28U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L46;
}
si0=l3;
f15271(i,si0);
L46:;
si0=l1;
f15271(i,si0);
L43:;
si0=l2;
f15271(i,si0);
si0=l0;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
f1683(i,si0);
si0=l2;
f15271(i,si0);
goto L0;
L25:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+4U);
l2=si0;
f1683(i,si0);
si0=l2;
f15271(i,si0);
si0=l0;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
f1683(i,si0);
si0=l2;
f15271(i,si0);
si0=l0;
si1=12U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
f1683(i,si0);
si0=l2;
f15271(i,si0);
goto L0;
L24:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+4U);
l3=si0;
si0=l0;
si1=12U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si0=!(si0);
if(si0){
goto L47;
}
si0=l3;
l2=si0;
L48:;
{
si0=l2;
si0=i32_load(&i->m0,(U64)si0);
si1=38U;
si0=si0 == si1;
if(si0){
goto L49;
}
si0=l2;
f1643(i,si0);
L49:;
si0=l2;
si1=48U;
si0+=si1;
l2=si0;
si0=l1;
si1=-1U;
si0+=si1;
l1=si0;
if(si0){
goto L48;
}
}
L47:;
si0=l0;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L50;
}
si0=l3;
f15271(i,si0);
L50:;
si0=l0;
si1=16U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=l0;
si1=24U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si0=!(si0);
if(si0){
goto L51;
}
si0=l3;
l2=si0;
L52:;
{
si0=l2;
f1643(i,si0);
si0=l2;
si1=48U;
si0+=si1;
l2=si0;
si0=l1;
si1=-1U;
si0+=si1;
l1=si0;
if(si0){
goto L52;
}
}
L51:;
si0=l0;
si1=20U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L1;
}
si0=l3;
f15271(i,si0);
goto L0;
L23:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+4U);
l3=si0;
si0=l0;
si1=12U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si0=!(si0);
if(si0){
goto L53;
}
si0=l3;
l2=si0;
L54:;
{
si0=l2;
f1643(i,si0);
si0=l2;
si1=48U;
si0+=si1;
l2=si0;
si0=l1;
si1=-1U;
si0+=si1;
l1=si0;
if(si0){
goto L54;
}
}
L53:;
si0=l0;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L1;
}
si0=l3;
f15271(i,si0);
goto L0;
L22:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+4U);
l2=si0;
f1683(i,si0);
si0=l2;
f15271(i,si0);
si0=l0;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
si0=l0;
si1=16U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si0=!(si0);
if(si0){
goto L55;
}
si0=0U;
l3=si0;
L56:;
{
si0=l4;
si1=l3;
si2=112U;
si1*=si2;
si0+=si1;
l2=si0;
f1643(i,si0);
si0=l2;
si1=48U;
si0+=si1;
f1643(i,si0);
si0=l2;
si1=96U;
si0+=si1;
l6=si0;
si0=l2;
si1=104U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si0=!(si0);
if(si0){
goto L57;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0+96U);
l2=si0;
L58:;
{
si0=l2;
f1643(i,si0);
si0=l2;
si1=48U;
si0+=si1;
l2=si0;
si0=l1;
si1=-1U;
si0+=si1;
l1=si0;
if(si0){
goto L58;
}
}
L57:;
si0=l3;
si1=1U;
si0+=si1;
l3=si0;
si0=l6;
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L59;
}
si0=l6;
si0=i32_load(&i->m0,(U64)si0);
f15271(i,si0);
L59:;
si0=l3;
si1=l5;
si0=si0 != si1;
if(si0){
goto L56;
}
}
L55:;
si0=l0;
si1=12U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L1;
}
si0=l4;
f15271(i,si0);
goto L0;
L21:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+4U);
l2=si0;
f1683(i,si0);
si0=l2;
f15271(i,si0);
si0=l0;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
si0=l0;
si1=16U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si0=!(si0);
if(si0){
goto L60;
}
si0=0U;
l3=si0;
L61:;
{
si0=l4;
si1=l3;
si2=112U;
si1*=si2;
si0+=si1;
l2=si0;
f1643(i,si0);
si0=l2;
si1=48U;
si0+=si1;
f1643(i,si0);
si0=l2;
si1=96U;
si0+=si1;
l6=si0;
si0=l2;
si1=104U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si0=!(si0);
if(si0){
goto L62;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0+96U);
l2=si0;
L63:;
{
si0=l2;
f1643(i,si0);
si0=l2;
si1=48U;
si0+=si1;
l2=si0;
si0=l1;
si1=-1U;
si0+=si1;
l1=si0;
if(si0){
goto L63;
}
}
L62:;
si0=l3;
si1=1U;
si0+=si1;
l3=si0;
si0=l6;
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L64;
}
si0=l6;
si0=i32_load(&i->m0,(U64)si0);
f15271(i,si0);
L64:;
si0=l3;
si1=l5;
si0=si0 != si1;
if(si0){
goto L61;
}
}
L60:;
si0=l0;
si1=12U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L1;
}
si0=l4;
f15271(i,si0);
goto L0;
L20:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+4U);
l2=si0;
f1683(i,si0);
si0=l2;
f15271(i,si0);
si0=l0;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
f1683(i,si0);
si0=l2;
f15271(i,si0);
si0=l0;
si1=12U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
si0=l0;
si1=20U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si0=!(si0);
if(si0){
goto L65;
}
si0=0U;
l3=si0;
L66:;
{
si0=l4;
si1=l3;
si2=112U;
si1*=si2;
si0+=si1;
l2=si0;
f1643(i,si0);
si0=l2;
si1=48U;
si0+=si1;
f1643(i,si0);
si0=l2;
si1=96U;
si0+=si1;
l6=si0;
si0=l2;
si1=104U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si0=!(si0);
if(si0){
goto L67;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0+96U);
l2=si0;
L68:;
{
si0=l2;
f1643(i,si0);
si0=l2;
si1=48U;
si0+=si1;
l2=si0;
si0=l1;
si1=-1U;
si0+=si1;
l1=si0;
if(si0){
goto L68;
}
}
L67:;
si0=l3;
si1=1U;
si0+=si1;
l3=si0;
si0=l6;
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L69;
}
si0=l6;
si0=i32_load(&i->m0,(U64)si0);
f15271(i,si0);
L69:;
si0=l3;
si1=l5;
si0=si0 != si1;
if(si0){
goto L66;
}
}
L65:;
si0=l0;
si1=16U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L1;
}
si0=l4;
f15271(i,si0);
goto L0;
L19:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+4U);
l2=si0;
f1683(i,si0);
si0=l2;
f15271(i,si0);
si0=l0;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
si0=l0;
si1=16U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si0=!(si0);
if(si0){
goto L70;
}
si0=0U;
l3=si0;
L71:;
{
si0=l4;
si1=l3;
si2=112U;
si1*=si2;
si0+=si1;
l2=si0;
f1643(i,si0);
si0=l2;
si1=48U;
si0+=si1;
f1643(i,si0);
si0=l2;
si1=96U;
si0+=si1;
l6=si0;
si0=l2;
si1=104U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si0=!(si0);
if(si0){
goto L72;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0+96U);
l2=si0;
L73:;
{
si0=l2;
f1643(i,si0);
si0=l2;
si1=48U;
si0+=si1;
l2=si0;
si0=l1;
si1=-1U;
si0+=si1;
l1=si0;
if(si0){
goto L73;
}
}
L72:;
si0=l3;
si1=1U;
si0+=si1;
l3=si0;
si0=l6;
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L74;
}
si0=l6;
si0=i32_load(&i->m0,(U64)si0);
f15271(i,si0);
L74:;
si0=l3;
si1=l5;
si0=si0 != si1;
if(si0){
goto L71;
}
}
L70:;
si0=l0;
si1=12U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L1;
}
si0=l4;
f15271(i,si0);
goto L0;
L18:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+4U);
l2=si0;
f1683(i,si0);
si0=l2;
f15271(i,si0);
goto L0;
L17:;
si0=l0;
si1=12U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si0=!(si0);
if(si0){
goto L1;
}
si0=l2;
f1683(i,si0);
si0=l2;
f15271(i,si0);
goto L0;
L16:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+4U);
l2=si0;
f1683(i,si0);
si0=l2;
f15271(i,si0);
goto L0;
L15:;
si0=l0;
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
f1683(i,si0);
si0=l2;
f15271(i,si0);
si0=l0;
si1=12U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L75;
}
si0=l0;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
f15271(i,si0);
L75:;
si0=l0;
si1=20U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=l0;
si1=28U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si0=!(si0);
if(si0){
goto L76;
}
si0=l3;
l2=si0;
L77:;
{
si0=l2;
f1643(i,si0);
si0=l2;
si1=48U;
si0+=si1;
l2=si0;
si0=l1;
si1=-1U;
si0+=si1;
l1=si0;
if(si0){
goto L77;
}
}
L76:;
si0=l0;
si1=24U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L1;
}
si0=l3;
f15271(i,si0);
goto L0;
L14:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+4U);
l2=si0;
f1683(i,si0);
si0=l2;
f15271(i,si0);
si0=l0;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=l0;
si1=16U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si0=!(si0);
if(si0){
goto L78;
}
si0=l3;
l2=si0;
L79:;
{
si0=l2;
f1643(i,si0);
si0=l2;
si1=48U;
si0+=si1;
l2=si0;
si0=l1;
si1=-1U;
si0+=si1;
l1=si0;
if(si0){
goto L79;
}
}
L78:;
si0=l0;
si1=12U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L80;
}
si0=l3;
f15271(i,si0);
L80:;
si0=l0;
si1=20U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si0=l0;
si1=28U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si0=!(si0);
if(si0){
goto L81;
}
si0=l6;
l2=si0;
L82:;
{
si0=l2;
si1=56U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=!(si0);
if(si0){
goto L83;
}
si0=l2;
si1=60U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L83;
}
si0=l3;
f15271(i,si0);
L83:;
si0=l2;
f1643(i,si0);
si0=l2;
si1=72U;
si0+=si1;
l2=si0;
si0=l1;
si1=-1U;
si0+=si1;
l1=si0;
if(si0){
goto L82;
}
}
L81:;
si0=l0;
si1=24U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L1;
}
si0=l6;
f15271(i,si0);
goto L0;
L13:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+4U);
l2=si0;
f1683(i,si0);
si0=l2;
f15271(i,si0);
si0=l0;
si1=16U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si0=!(si0);
if(si0){
goto L1;
}
si0=l2;
f1683(i,si0);
si0=l2;
f15271(i,si0);
goto L0;
L12:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+4U);
l3=si0;
si0=l0;
si1=12U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si0=!(si0);
if(si0){
goto L84;
}
si0=l3;
l2=si0;
L85:;
{
si0=l2;
f1643(i,si0);
si0=l2;
si1=48U;
si0+=si1;
l2=si0;
si0=l1;
si1=-1U;
si0+=si1;
l1=si0;
if(si0){
goto L85;
}
}
L84:;
si0=l0;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L1;
}
si0=l3;
f15271(i,si0);
goto L0;
L11:;
si0=l1;
si1=-2U;
si0+=si1;
l2=si0;
si1=4U;
si2=l2;
si3=9U;
si2=si2 < si3;
si0=si2?si0:si1;
si1=-2U;
si0+=si1;
switch(si0){
case 0:
goto L89;
case 1:
goto L88;
case 2:
goto L87;
case 3:
goto L86;
default:
goto L2;
}
L89:;
si0=l0;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L4;
}
goto L2;
L88:;
si0=l0;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L2;
}
goto L4;
L87:;
si0=l1;
si0=!(si0);
if(si0){
goto L2;
}
si0=l0;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L4;
}
goto L2;
L86:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+4U);
l3=si0;
si0=l0;
si1=12U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si0=!(si0);
if(si0){
goto L90;
}
si0=l3;
l2=si0;
L91:;
{
si0=l2;
f1642(i,si0);
si0=l2;
si1=24U;
si0+=si1;
l2=si0;
si0=l1;
si1=-1U;
si0+=si1;
l1=si0;
if(si0){
goto L91;
}
}
L90:;
si0=l0;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L3;
}
goto L2;
L10:;
si0=l0;
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
f1683(i,si0);
si0=l2;
f15271(i,si0);
si0=l0;
si1=12U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L1;
}
si0=l0;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
f15271(i,si0);
goto L0;
L9:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+4U);
l2=si0;
f1683(i,si0);
si0=l2;
f15271(i,si0);
si0=l0;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
f1683(i,si0);
si0=l2;
f15271(i,si0);
goto L0;
L8:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+4U);
l2=si0;
f1683(i,si0);
si0=l2;
f15271(i,si0);
goto L0;
L7:;
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
goto L0;
L6:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+4U);
l3=si0;
si0=l0;
si1=12U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si0=!(si0);
if(si0){
goto L92;
}
si0=l3;
l2=si0;
L93:;
{
si0=l2;
f1643(i,si0);
si0=l2;
si1=48U;
si0+=si1;
l2=si0;
si0=l1;
si1=-1U;
si0+=si1;
l1=si0;
if(si0){
goto L93;
}
}
L92:;
si0=l0;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L1;
}
si0=l3;
f15271(i,si0);
goto L0;
L5:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+4U);
l3=si0;
si0=l0;
si1=12U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si0=!(si0);
if(si0){
goto L94;
}
si0=l3;
l2=si0;
L95:;
{
si0=l2;
f1643(i,si0);
si0=l2;
si1=48U;
si0+=si1;
l2=si0;
si0=l1;
si1=-1U;
si0+=si1;
l1=si0;
if(si0){
goto L95;
}
}
L94:;
si0=l0;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L1;
}
si0=l3;
f15271(i,si0);
goto L1;
L4:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+4U);
l3=si0;
L3:;
si0=l3;
f15271(i,si0);
L2:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+32U);
l2=si0;
si0=!(si0);
if(si0){
goto L1;
}
si0=l0;
si1=36U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L1;
}
si0=l2;
f15271(i,si0);
goto L0;
L1:;
L0:;
}

void f1684(rustpythonInstance*i,U32 l0) {
U32 l1=0;
U32 l2=0;
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 si0,si1,si2,si3;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si1=-11U;
si0+=si1;
l2=si0;
si1=19U;
si2=l2;
si3=27U;
si2=si2 < si3;
si0=si2?si0:si1;
switch(si0){
case 0:
goto L30;
case 1:
goto L29;
case 2:
goto L28;
case 3:
goto L27;
case 4:
goto L26;
case 5:
goto L25;
case 6:
goto L24;
case 7:
goto L23;
case 8:
goto L22;
case 9:
goto L21;
case 10:
goto L20;
case 11:
goto L19;
case 12:
goto L18;
case 13:
goto L17;
case 14:
goto L16;
case 15:
goto L15;
case 16:
goto L14;
case 17:
goto L13;
case 18:
goto L12;
case 19:
goto L11;
case 20:
goto L10;
case 21:
goto L9;
case 22:
goto L8;
case 23:
goto L7;
case 24:
goto L6;
case 25:
goto L5;
default:
goto L31;
}
L31:;
si0=l0;
si1=12U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si0=!(si0);
if(si0){
goto L32;
}
si0=l2;
f1684(i,si0);
si0=l2;
f15271(i,si0);
L32:;
si0=l0;
si1=16U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si0=!(si0);
if(si0){
goto L33;
}
si0=l2;
f1684(i,si0);
si0=l2;
f15271(i,si0);
L33:;
si0=l0;
si1=20U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si0=!(si0);
if(si0){
goto L1;
}
si0=l2;
f1684(i,si0);
si0=l2;
f15271(i,si0);
goto L0;
L30:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+4U);
l3=si0;
si0=l0;
si1=12U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si0=!(si0);
if(si0){
goto L34;
}
si0=l3;
l2=si0;
L35:;
{
si0=l2;
f1643(i,si0);
si0=l2;
si1=48U;
si0+=si1;
l2=si0;
si0=l1;
si1=-1U;
si0+=si1;
l1=si0;
if(si0){
goto L35;
}
}
L34:;
si0=l0;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L1;
}
si0=l3;
f15271(i,si0);
goto L0;
L29:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+4U);
l2=si0;
f1684(i,si0);
si0=l2;
f15271(i,si0);
si0=l0;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
f1684(i,si0);
si0=l2;
f15271(i,si0);
goto L0;
L28:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+4U);
l2=si0;
f1684(i,si0);
si0=l2;
f15271(i,si0);
si0=l0;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
f1684(i,si0);
si0=l2;
f15271(i,si0);
goto L0;
L27:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+4U);
l2=si0;
f1684(i,si0);
si0=l2;
f15271(i,si0);
goto L0;
L26:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+4U);
l2=si0;
f1666(i,si0);
si0=l2;
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L36;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0);
f15271(i,si0);
L36:;
si0=l2;
si1=12U;
si0+=si1;
l1=si0;
f1666(i,si0);
si0=l2;
si1=16U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L37;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
f15271(i,si0);
L37:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+36U);
l1=si0;
si0=!(si0);
if(si0){
goto L38;
}
si0=l1;
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L39;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
f15271(i,si0);
L39:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+20U);
si0=!(si0);
if(si0){
goto L40;
}
si0=l1;
si1=20U;
si0+=si1;
f1685(i,si0);
L40:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+24U);
l3=si0;
si0=!(si0);
if(si0){
goto L41;
}
si0=l1;
si1=28U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L41;
}
si0=l3;
f15271(i,si0);
L41:;
si0=l1;
f15271(i,si0);
L38:;
si0=l2;
si1=24U;
si0+=si1;
l1=si0;
f1666(i,si0);
si0=l2;
si1=28U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L42;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
f15271(i,si0);
L42:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+40U);
l1=si0;
si0=!(si0);
if(si0){
goto L43;
}
si0=l1;
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L44;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
f15271(i,si0);
L44:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+20U);
si0=!(si0);
if(si0){
goto L45;
}
si0=l1;
si1=20U;
si0+=si1;
f1685(i,si0);
L45:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+24U);
l3=si0;
si0=!(si0);
if(si0){
goto L46;
}
si0=l1;
si1=28U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L46;
}
si0=l3;
f15271(i,si0);
L46:;
si0=l1;
f15271(i,si0);
L43:;
si0=l2;
f15271(i,si0);
si0=l0;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
f1684(i,si0);
si0=l2;
f15271(i,si0);
goto L0;
L25:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+4U);
l2=si0;
f1684(i,si0);
si0=l2;
f15271(i,si0);
si0=l0;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
f1684(i,si0);
si0=l2;
f15271(i,si0);
si0=l0;
si1=12U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
f1684(i,si0);
si0=l2;
f15271(i,si0);
goto L0;
L24:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+4U);
l3=si0;
si0=l0;
si1=12U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si0=!(si0);
if(si0){
goto L47;
}
si0=l3;
l2=si0;
L48:;
{
si0=l2;
si0=i32_load(&i->m0,(U64)si0);
si1=38U;
si0=si0 == si1;
if(si0){
goto L49;
}
si0=l2;
f1643(i,si0);
L49:;
si0=l2;
si1=48U;
si0+=si1;
l2=si0;
si0=l1;
si1=-1U;
si0+=si1;
l1=si0;
if(si0){
goto L48;
}
}
L47:;
si0=l0;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L50;
}
si0=l3;
f15271(i,si0);
L50:;
si0=l0;
si1=16U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=l0;
si1=24U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si0=!(si0);
if(si0){
goto L51;
}
si0=l3;
l2=si0;
L52:;
{
si0=l2;
f1643(i,si0);
si0=l2;
si1=48U;
si0+=si1;
l2=si0;
si0=l1;
si1=-1U;
si0+=si1;
l1=si0;
if(si0){
goto L52;
}
}
L51:;
si0=l0;
si1=20U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L1;
}
si0=l3;
f15271(i,si0);
goto L0;
L23:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+4U);
l3=si0;
si0=l0;
si1=12U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si0=!(si0);
if(si0){
goto L53;
}
si0=l3;
l2=si0;
L54:;
{
si0=l2;
f1643(i,si0);
si0=l2;
si1=48U;
si0+=si1;
l2=si0;
si0=l1;
si1=-1U;
si0+=si1;
l1=si0;
if(si0){
goto L54;
}
}
L53:;
si0=l0;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L1;
}
si0=l3;
f15271(i,si0);
goto L0;
L22:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+4U);
l2=si0;
f1684(i,si0);
si0=l2;
f15271(i,si0);
si0=l0;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
si0=l0;
si1=16U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si0=!(si0);
if(si0){
goto L55;
}
si0=0U;
l3=si0;
L56:;
{
si0=l4;
si1=l3;
si2=112U;
si1*=si2;
si0+=si1;
l2=si0;
f1643(i,si0);
si0=l2;
si1=48U;
si0+=si1;
f1643(i,si0);
si0=l2;
si1=96U;
si0+=si1;
l6=si0;
si0=l2;
si1=104U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si0=!(si0);
if(si0){
goto L57;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0+96U);
l2=si0;
L58:;
{
si0=l2;
f1643(i,si0);
si0=l2;
si1=48U;
si0+=si1;
l2=si0;
si0=l1;
si1=-1U;
si0+=si1;
l1=si0;
if(si0){
goto L58;
}
}
L57:;
si0=l3;
si1=1U;
si0+=si1;
l3=si0;
si0=l6;
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L59;
}
si0=l6;
si0=i32_load(&i->m0,(U64)si0);
f15271(i,si0);
L59:;
si0=l3;
si1=l5;
si0=si0 != si1;
if(si0){
goto L56;
}
}
L55:;
si0=l0;
si1=12U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L1;
}
si0=l4;
f15271(i,si0);
goto L0;
L21:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+4U);
l2=si0;
f1684(i,si0);
si0=l2;
f15271(i,si0);
si0=l0;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
si0=l0;
si1=16U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si0=!(si0);
if(si0){
goto L60;
}
si0=0U;
l3=si0;
L61:;
{
si0=l4;
si1=l3;
si2=112U;
si1*=si2;
si0+=si1;
l2=si0;
f1643(i,si0);
si0=l2;
si1=48U;
si0+=si1;
f1643(i,si0);
si0=l2;
si1=96U;
si0+=si1;
l6=si0;
si0=l2;
si1=104U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si0=!(si0);
if(si0){
goto L62;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0+96U);
l2=si0;
L63:;
{
si0=l2;
f1643(i,si0);
si0=l2;
si1=48U;
si0+=si1;
l2=si0;
si0=l1;
si1=-1U;
si0+=si1;
l1=si0;
if(si0){
goto L63;
}
}
L62:;
si0=l3;
si1=1U;
si0+=si1;
l3=si0;
si0=l6;
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L64;
}
si0=l6;
si0=i32_load(&i->m0,(U64)si0);
f15271(i,si0);
L64:;
si0=l3;
si1=l5;
si0=si0 != si1;
if(si0){
goto L61;
}
}
L60:;
si0=l0;
si1=12U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L1;
}
si0=l4;
f15271(i,si0);
goto L0;
L20:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+4U);
l2=si0;
f1684(i,si0);
si0=l2;
f15271(i,si0);
si0=l0;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
f1684(i,si0);
si0=l2;
f15271(i,si0);
si0=l0;
si1=12U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
si0=l0;
si1=20U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si0=!(si0);
if(si0){
goto L65;
}
si0=0U;
l3=si0;
L66:;
{
si0=l4;
si1=l3;
si2=112U;
si1*=si2;
si0+=si1;
l2=si0;
f1643(i,si0);
si0=l2;
si1=48U;
si0+=si1;
f1643(i,si0);
si0=l2;
si1=96U;
si0+=si1;
l6=si0;
si0=l2;
si1=104U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si0=!(si0);
if(si0){
goto L67;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0+96U);
l2=si0;
L68:;
{
si0=l2;
f1643(i,si0);
si0=l2;
si1=48U;
si0+=si1;
l2=si0;
si0=l1;
si1=-1U;
si0+=si1;
l1=si0;
if(si0){
goto L68;
}
}
L67:;
si0=l3;
si1=1U;
si0+=si1;
l3=si0;
si0=l6;
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L69;
}
si0=l6;
si0=i32_load(&i->m0,(U64)si0);
f15271(i,si0);
L69:;
si0=l3;
si1=l5;
si0=si0 != si1;
if(si0){
goto L66;
}
}
L65:;
si0=l0;
si1=16U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L1;
}
si0=l4;
f15271(i,si0);
goto L0;
L19:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+4U);
l2=si0;
f1684(i,si0);
si0=l2;
f15271(i,si0);
si0=l0;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
si0=l0;
si1=16U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si0=!(si0);
if(si0){
goto L70;
}
si0=0U;
l3=si0;
L71:;
{
si0=l4;
si1=l3;
si2=112U;
si1*=si2;
si0+=si1;
l2=si0;
f1643(i,si0);
si0=l2;
si1=48U;
si0+=si1;
f1643(i,si0);
si0=l2;
si1=96U;
si0+=si1;
l6=si0;
si0=l2;
si1=104U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si0=!(si0);
if(si0){
goto L72;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0+96U);
l2=si0;
L73:;
{
si0=l2;
f1643(i,si0);
si0=l2;
si1=48U;
si0+=si1;
l2=si0;
si0=l1;
si1=-1U;
si0+=si1;
l1=si0;
if(si0){
goto L73;
}
}
L72:;
si0=l3;
si1=1U;
si0+=si1;
l3=si0;
si0=l6;
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L74;
}
si0=l6;
si0=i32_load(&i->m0,(U64)si0);
f15271(i,si0);
L74:;
si0=l3;
si1=l5;
si0=si0 != si1;
if(si0){
goto L71;
}
}
L70:;
si0=l0;
si1=12U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L1;
}
si0=l4;
f15271(i,si0);
goto L0;
L18:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+4U);
l2=si0;
f1684(i,si0);
si0=l2;
f15271(i,si0);
goto L0;
L17:;
si0=l0;
si1=12U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si0=!(si0);
if(si0){
goto L1;
}
si0=l2;
f1684(i,si0);
si0=l2;
f15271(i,si0);
goto L0;
L16:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+4U);
l2=si0;
f1684(i,si0);
si0=l2;
f15271(i,si0);
goto L0;
L15:;
si0=l0;
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
f1684(i,si0);
si0=l2;
f15271(i,si0);
si0=l0;
si1=12U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L75;
}
si0=l0;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
f15271(i,si0);
L75:;
si0=l0;
si1=20U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=l0;
si1=28U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si0=!(si0);
if(si0){
goto L76;
}
si0=l3;
l2=si0;
L77:;
{
si0=l2;
f1643(i,si0);
si0=l2;
si1=48U;
si0+=si1;
l2=si0;
si0=l1;
si1=-1U;
si0+=si1;
l1=si0;
if(si0){
goto L77;
}
}
L76:;
si0=l0;
si1=24U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L1;
}
si0=l3;
f15271(i,si0);
goto L0;
L14:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+4U);
l2=si0;
f1684(i,si0);
si0=l2;
f15271(i,si0);
si0=l0;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=l0;
si1=16U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si0=!(si0);
if(si0){
goto L78;
}
si0=l3;
l2=si0;
L79:;
{
si0=l2;
f1643(i,si0);
si0=l2;
si1=48U;
si0+=si1;
l2=si0;
si0=l1;
si1=-1U;
si0+=si1;
l1=si0;
if(si0){
goto L79;
}
}
L78:;
si0=l0;
si1=12U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L80;
}
si0=l3;
f15271(i,si0);
L80:;
si0=l0;
si1=20U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si0=l0;
si1=28U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si0=!(si0);
if(si0){
goto L81;
}
si0=l6;
l2=si0;
L82:;
{
si0=l2;
si1=56U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=!(si0);
if(si0){
goto L83;
}
si0=l2;
si1=60U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L83;
}
si0=l3;
f15271(i,si0);
L83:;
si0=l2;
f1643(i,si0);
si0=l2;
si1=72U;
si0+=si1;
l2=si0;
si0=l1;
si1=-1U;
si0+=si1;
l1=si0;
if(si0){
goto L82;
}
}
L81:;
si0=l0;
si1=24U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L1;
}
si0=l6;
f15271(i,si0);
goto L0;
L13:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+4U);
l2=si0;
f1684(i,si0);
si0=l2;
f15271(i,si0);
si0=l0;
si1=16U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si0=!(si0);
if(si0){
goto L1;
}
si0=l2;
f1684(i,si0);
si0=l2;
f15271(i,si0);
goto L0;
L12:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+4U);
l3=si0;
si0=l0;
si1=12U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si0=!(si0);
if(si0){
goto L84;
}
si0=l3;
l2=si0;
L85:;
{
si0=l2;
f1643(i,si0);
si0=l2;
si1=48U;
si0+=si1;
l2=si0;
si0=l1;
si1=-1U;
si0+=si1;
l1=si0;
if(si0){
goto L85;
}
}
L84:;
si0=l0;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L1;
}
si0=l3;
f15271(i,si0);
goto L0;
L11:;
si0=l1;
si1=-2U;
si0+=si1;
l2=si0;
si1=4U;
si2=l2;
si3=9U;
si2=si2 < si3;
si0=si2?si0:si1;
si1=-2U;
si0+=si1;
switch(si0){
case 0:
goto L89;
case 1:
goto L88;
case 2:
goto L87;
case 3:
goto L86;
default:
goto L2;
}
L89:;
si0=l0;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L4;
}
goto L2;
L88:;
si0=l0;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L2;
}
goto L4;
L87:;
si0=l1;
si0=!(si0);
if(si0){
goto L2;
}
si0=l0;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L4;
}
goto L2;
L86:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+4U);
l3=si0;
si0=l0;
si1=12U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si0=!(si0);
if(si0){
goto L90;
}
si0=l3;
l2=si0;
L91:;
{
si0=l2;
f1642(i,si0);
si0=l2;
si1=24U;
si0+=si1;
l2=si0;
si0=l1;
si1=-1U;
si0+=si1;
l1=si0;
if(si0){
goto L91;
}
}
L90:;
si0=l0;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L3;
}
goto L2;
L10:;
si0=l0;
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
f1684(i,si0);
si0=l2;
f15271(i,si0);
si0=l0;
si1=12U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L1;
}
si0=l0;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
f15271(i,si0);
goto L0;
L9:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+4U);
l2=si0;
f1684(i,si0);
si0=l2;
f15271(i,si0);
si0=l0;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
f1684(i,si0);
si0=l2;
f15271(i,si0);
goto L0;
L8:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+4U);
l2=si0;
f1684(i,si0);
si0=l2;
f15271(i,si0);
goto L0;
L7:;
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
goto L0;
L6:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+4U);
l3=si0;
si0=l0;
si1=12U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si0=!(si0);
if(si0){
goto L92;
}
si0=l3;
l2=si0;
L93:;
{
si0=l2;
f1643(i,si0);
si0=l2;
si1=48U;
si0+=si1;
l2=si0;
si0=l1;
si1=-1U;
si0+=si1;
l1=si0;
if(si0){
goto L93;
}
}
L92:;
si0=l0;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L1;
}
si0=l3;
f15271(i,si0);
goto L0;
L5:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+4U);
l3=si0;
si0=l0;
si1=12U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si0=!(si0);
if(si0){
goto L94;
}
si0=l3;
l2=si0;
L95:;
{
si0=l2;
f1643(i,si0);
si0=l2;
si1=48U;
si0+=si1;
l2=si0;
si0=l1;
si1=-1U;
si0+=si1;
l1=si0;
if(si0){
goto L95;
}
}
L94:;
si0=l0;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L1;
}
si0=l3;
f15271(i,si0);
goto L1;
L4:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+4U);
l3=si0;
L3:;
si0=l3;
f15271(i,si0);
L2:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+32U);
l2=si0;
si0=!(si0);
if(si0){
goto L1;
}
si0=l0;
si1=36U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L1;
}
si0=l2;
f15271(i,si0);
goto L0;
L1:;
L0:;
}

void f1685(rustpythonInstance*i,U32 l0) {
U32 si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
l0=si0;
f1684(i,si0);
si0=l0;
f15271(i,si0);
L0:;
}

void f1686(rustpythonInstance*i,U32 l0) {
U32 l1=0;
U32 l2=0;
U32 l3=0;
U32 si0,si1,si2,si3;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
switch(si0){
case 0:
goto L9;
case 1:
goto L8;
case 2:
goto L7;
case 3:
goto L6;
case 4:
goto L5;
case 5:
goto L4;
case 6:
goto L3;
default:
goto L10;
}
L10:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+4U);
l1=si0;
si0=l0;
si1=12U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si0=!(si0);
if(si0){
goto L11;
}
si0=l1;
l3=si0;
L12:;
{
si0=l3;
f1647(i,si0);
si0=l3;
si1=56U;
si0+=si1;
l3=si0;
si0=l2;
si1=-1U;
si0+=si1;
l2=si0;
if(si0){
goto L12;
}
}
L11:;
si0=l0;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L2;
}
si0=l1;
f15271(i,si0);
goto L0;
L9:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+4U);
l3=si0;
f1684(i,si0);
si0=l3;
f15271(i,si0);
goto L0;
L8:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+8U);
l2=si0;
si1=-2U;
si0+=si1;
l3=si0;
si1=4U;
si2=l3;
si3=9U;
si2=si2 < si3;
si0=si2?si0:si1;
si1=-2U;
si0+=si1;
switch(si0){
case 0:
goto L16;
case 1:
goto L15;
case 2:
goto L14;
case 3:
goto L13;
default:
goto L2;
}
L16:;
si0=l0;
si1=16U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L2;
}
si0=l0;
si1=12U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
f15271(i,si0);
goto L0;
L15:;
si0=l0;
si1=16U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L2;
}
si0=l0;
si1=12U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
goto L1;
L14:;
si0=l2;
si0=!(si0);
if(si0){
goto L2;
}
si0=l0;
si1=16U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L2;
}
si0=l0;
si1=12U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
f15271(i,si0);
goto L0;
L13:;
si0=l0;
si1=12U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si0=l0;
si1=20U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si0=!(si0);
if(si0){
goto L17;
}
si0=l1;
l3=si0;
L18:;
{
si0=l3;
f1642(i,si0);
si0=l3;
si1=24U;
si0+=si1;
l3=si0;
si0=l2;
si1=-1U;
si0+=si1;
l2=si0;
if(si0){
goto L18;
}
}
L17:;
si0=l0;
si1=16U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L1;
}
goto L2;
L7:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+4U);
l1=si0;
si0=l0;
si1=12U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si0=!(si0);
if(si0){
goto L19;
}
si0=l1;
l3=si0;
L20:;
{
si0=l3;
f1647(i,si0);
si0=l3;
si1=56U;
si0+=si1;
l3=si0;
si0=l2;
si1=-1U;
si0+=si1;
l2=si0;
if(si0){
goto L20;
}
}
L19:;
si0=l0;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L2;
}
si0=l1;
f15271(i,si0);
goto L0;
L6:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+4U);
l1=si0;
si0=l0;
si1=12U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si0=!(si0);
if(si0){
goto L21;
}
si0=l1;
l3=si0;
L22:;
{
si0=l3;
f1643(i,si0);
si0=l3;
si1=48U;
si0+=si1;
l3=si0;
si0=l2;
si1=-1U;
si0+=si1;
l2=si0;
if(si0){
goto L22;
}
}
L21:;
si0=l0;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L23;
}
si0=l1;
f15271(i,si0);
L23:;
si0=l0;
si1=16U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si0=l0;
si1=24U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si0=!(si0);
if(si0){
goto L24;
}
si0=l1;
l3=si0;
L25:;
{
si0=l3;
f1647(i,si0);
si0=l3;
si1=56U;
si0+=si1;
l3=si0;
si0=l2;
si1=-1U;
si0+=si1;
l2=si0;
if(si0){
goto L25;
}
}
L24:;
si0=l0;
si1=20U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L26;
}
si0=l1;
f15271(i,si0);
L26:;
si0=l0;
si1=36U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=!(si0);
if(si0){
goto L2;
}
si0=l0;
si1=40U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L2;
}
si0=l3;
f15271(i,si0);
goto L0;
L5:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+4U);
l3=si0;
f1684(i,si0);
si0=l3;
f15271(i,si0);
si0=l0;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si0=l0;
si1=16U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si0=!(si0);
if(si0){
goto L27;
}
si0=l1;
l3=si0;
L28:;
{
si0=l3;
f1647(i,si0);
si0=l3;
si1=56U;
si0+=si1;
l3=si0;
si0=l2;
si1=-1U;
si0+=si1;
l2=si0;
if(si0){
goto L28;
}
}
L27:;
si0=l0;
si1=12U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L29;
}
si0=l1;
f15271(i,si0);
L29:;
si0=l0;
si1=20U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si0=l0;
si1=28U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si0=!(si0);
if(si0){
goto L30;
}
si0=l1;
l3=si0;
L31:;
{
si0=l3;
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L32;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
f15271(i,si0);
L32:;
si0=l3;
si1=12U;
si0+=si1;
l3=si0;
si0=l2;
si1=-1U;
si0+=si1;
l2=si0;
if(si0){
goto L31;
}
}
L30:;
si0=l0;
si1=24U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L33;
}
si0=l1;
f15271(i,si0);
L33:;
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
goto L34;
}
si0=l1;
l3=si0;
L35:;
{
si0=l3;
f1647(i,si0);
si0=l3;
si1=56U;
si0+=si1;
l3=si0;
si0=l2;
si1=-1U;
si0+=si1;
l2=si0;
if(si0){
goto L35;
}
}
L34:;
si0=l0;
si1=36U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L2;
}
si0=l1;
f15271(i,si0);
goto L0;
L4:;
si0=l0;
si1=12U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=!(si0);
if(si0){
goto L2;
}
si0=l0;
si1=16U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L2;
}
si0=l3;
f15271(i,si0);
goto L0;
L3:;
si0=l0;
si1=12U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=!(si0);
if(si0){
goto L36;
}
si0=l3;
f1686(i,si0);
si0=l3;
f15271(i,si0);
L36:;
si0=l0;
si1=16U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=!(si0);
if(si0){
goto L2;
}
si0=l0;
si1=20U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L2;
}
si0=l3;
f15271(i,si0);
L2:;
goto L0;
L1:;
si0=l1;
f15271(i,si0);
L0:;
}

void f1687(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 si0,si1;
si0=l1;
si0=!(si0);
if(si0){
goto L1;
}
si0=0U;
l2=si0;
L2:;
{
si0=l2;
si1=72U;
si0*=si1;
l3=si0;
si0=l2;
si1=1U;
si0+=si1;
l2=si0;
si0=l0;
si1=l3;
si0+=si1;
l3=si0;
si0=i32_load(&i->m0,(U64)si0);
switch(si0){
case 0:
goto L27;
case 1:
goto L26;
case 2:
goto L25;
case 3:
goto L24;
case 4:
goto L23;
case 5:
goto L22;
case 6:
goto L21;
case 7:
goto L20;
case 8:
goto L19;
case 9:
goto L18;
case 10:
goto L17;
case 11:
goto L16;
case 12:
goto L15;
case 13:
goto L14;
case 14:
goto L13;
case 15:
goto L12;
case 16:
goto L11;
case 17:
goto L10;
case 18:
goto L9;
case 19:
goto L8;
case 20:
goto L7;
case 21:
goto L6;
case 22:
goto L5;
case 23:
goto L4;
default:
goto L3;
}
L27:;
si0=l3;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L28;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0+4U);
f15271(i,si0);
L28:;
si0=l3;
si1=16U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
f1666(i,si0);
si0=l4;
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L29;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
f15271(i,si0);
L29:;
si0=l4;
si1=12U;
si0+=si1;
l5=si0;
f1666(i,si0);
si0=l4;
si1=16U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L30;
}
si0=l5;
si0=i32_load(&i->m0,(U64)si0);
f15271(i,si0);
L30:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+36U);
l5=si0;
si0=!(si0);
if(si0){
goto L31;
}
si0=l5;
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L32;
}
si0=l5;
si0=i32_load(&i->m0,(U64)si0);
f15271(i,si0);
L32:;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+20U);
l6=si0;
si0=!(si0);
if(si0){
goto L33;
}
si0=l6;
f1684(i,si0);
si0=l6;
f15271(i,si0);
L33:;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+24U);
l6=si0;
si0=!(si0);
if(si0){
goto L34;
}
si0=l5;
si1=28U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L34;
}
si0=l6;
f15271(i,si0);
L34:;
si0=l5;
f15271(i,si0);
L31:;
si0=l4;
si1=24U;
si0+=si1;
l5=si0;
f1666(i,si0);
si0=l4;
si1=28U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L35;
}
si0=l5;
si0=i32_load(&i->m0,(U64)si0);
f15271(i,si0);
L35:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+40U);
l5=si0;
si0=!(si0);
if(si0){
goto L36;
}
si0=l5;
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L37;
}
si0=l5;
si0=i32_load(&i->m0,(U64)si0);
f15271(i,si0);
L37:;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+20U);
l6=si0;
si0=!(si0);
if(si0){
goto L38;
}
si0=l6;
f1684(i,si0);
si0=l6;
f15271(i,si0);
L38:;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+24U);
l6=si0;
si0=!(si0);
if(si0){
goto L39;
}
si0=l5;
si1=28U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L39;
}
si0=l6;
f15271(i,si0);
L39:;
si0=l5;
f15271(i,si0);
L36:;
si0=l4;
f15271(i,si0);
si0=l3;
si1=20U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si0=l3;
si1=28U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si0=!(si0);
if(si0){
goto L40;
}
si0=l6;
l4=si0;
L41:;
{
si0=l4;
f1645(i,si0);
si0=l4;
si1=72U;
si0+=si1;
l4=si0;
si0=l5;
si1=-1U;
si0+=si1;
l5=si0;
if(si0){
goto L41;
}
}
L40:;
si0=l3;
si1=24U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L42;
}
si0=l6;
f15271(i,si0);
L42:;
si0=l3;
si1=32U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si0=l3;
si1=40U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si0=!(si0);
if(si0){
goto L43;
}
si0=l6;
l4=si0;
L44:;
{
si0=l4;
f1643(i,si0);
si0=l4;
si1=48U;
si0+=si1;
l4=si0;
si0=l5;
si1=-1U;
si0+=si1;
l5=si0;
if(si0){
goto L44;
}
}
L43:;
si0=l3;
si1=36U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L45;
}
si0=l6;
f15271(i,si0);
L45:;
si0=l3;
si1=52U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
si0=!(si0);
if(si0){
goto L46;
}
si0=l4;
f1684(i,si0);
si0=l4;
f15271(i,si0);
L46:;
si0=l3;
si1=56U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
si0=!(si0);
if(si0){
goto L3;
}
si0=l3;
si1=60U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L3;
}
si0=l4;
f15271(i,si0);
goto L3;
L26:;
si0=l3;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L47;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0+4U);
f15271(i,si0);
L47:;
si0=l3;
si1=16U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
f1666(i,si0);
si0=l4;
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L48;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
f15271(i,si0);
L48:;
si0=l4;
si1=12U;
si0+=si1;
l5=si0;
f1666(i,si0);
si0=l4;
si1=16U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L49;
}
si0=l5;
si0=i32_load(&i->m0,(U64)si0);
f15271(i,si0);
L49:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+36U);
l5=si0;
si0=!(si0);
if(si0){
goto L50;
}
si0=l5;
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L51;
}
si0=l5;
si0=i32_load(&i->m0,(U64)si0);
f15271(i,si0);
L51:;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+20U);
l6=si0;
si0=!(si0);
if(si0){
goto L52;
}
si0=l6;
f1684(i,si0);
si0=l6;
f15271(i,si0);
L52:;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+24U);
l6=si0;
si0=!(si0);
if(si0){
goto L53;
}
si0=l5;
si1=28U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L53;
}
si0=l6;
f15271(i,si0);
L53:;
si0=l5;
f15271(i,si0);
L50:;
si0=l4;
si1=24U;
si0+=si1;
l5=si0;
f1666(i,si0);
si0=l4;
si1=28U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L54;
}
si0=l5;
si0=i32_load(&i->m0,(U64)si0);
f15271(i,si0);
L54:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+40U);
l5=si0;
si0=!(si0);
if(si0){
goto L55;
}
si0=l5;
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L56;
}
si0=l5;
si0=i32_load(&i->m0,(U64)si0);
f15271(i,si0);
L56:;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+20U);
l6=si0;
si0=!(si0);
if(si0){
goto L57;
}
si0=l6;
f1684(i,si0);
si0=l6;
f15271(i,si0);
L57:;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+24U);
l6=si0;
si0=!(si0);
if(si0){
goto L58;
}
si0=l5;
si1=28U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L58;
}
si0=l6;
f15271(i,si0);
L58:;
si0=l5;
f15271(i,si0);
L55:;
si0=l4;
f15271(i,si0);
si0=l3;
si1=20U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si0=l3;
si1=28U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si0=!(si0);
if(si0){
goto L59;
}
si0=l6;
l4=si0;
L60:;
{
si0=l4;
f1645(i,si0);
si0=l4;
si1=72U;
si0+=si1;
l4=si0;
si0=l5;
si1=-1U;
si0+=si1;
l5=si0;
if(si0){
goto L60;
}
}
L59:;
si0=l3;
si1=24U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L61;
}
si0=l6;
f15271(i,si0);
L61:;
si0=l3;
si1=32U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si0=l3;
si1=40U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si0=!(si0);
if(si0){
goto L62;
}
si0=l6;
l4=si0;
L63:;
{
si0=l4;
f1643(i,si0);
si0=l4;
si1=48U;
si0+=si1;
l4=si0;
si0=l5;
si1=-1U;
si0+=si1;
l5=si0;
if(si0){
goto L63;
}
}
L62:;
si0=l3;
si1=36U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L64;
}
si0=l6;
f15271(i,si0);
L64:;
si0=l3;
si1=52U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
si0=!(si0);
if(si0){
goto L65;
}
si0=l4;
f1684(i,si0);
si0=l4;
f15271(i,si0);
L65:;
si0=l3;
si1=56U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
si0=!(si0);
if(si0){
goto L3;
}
si0=l3;
si1=60U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L3;
}
si0=l4;
f15271(i,si0);
goto L3;
L25:;
si0=l3;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L66;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0+4U);
f15271(i,si0);
L66:;
si0=l3;
si1=16U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si0=l3;
si1=24U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si0=!(si0);
if(si0){
goto L67;
}
si0=l6;
l4=si0;
L68:;
{
si0=l4;
f1643(i,si0);
si0=l4;
si1=48U;
si0+=si1;
l4=si0;
si0=l5;
si1=-1U;
si0+=si1;
l5=si0;
if(si0){
goto L68;
}
}
L67:;
si0=l3;
si1=20U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L69;
}
si0=l6;
f15271(i,si0);
L69:;
si0=l3;
si1=28U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
si0=l3;
si1=36U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si0=!(si0);
if(si0){
goto L70;
}
si0=l7;
l4=si0;
L71:;
{
si0=l4;
si1=56U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si0=!(si0);
if(si0){
goto L72;
}
si0=l4;
si1=60U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L72;
}
si0=l6;
f15271(i,si0);
L72:;
si0=l4;
f1643(i,si0);
si0=l4;
si1=72U;
si0+=si1;
l4=si0;
si0=l5;
si1=-1U;
si0+=si1;
l5=si0;
if(si0){
goto L71;
}
}
L70:;
si0=l3;
si1=32U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L73;
}
si0=l7;
f15271(i,si0);
L73:;
si0=l3;
si1=40U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si0=l3;
si1=48U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si0=!(si0);
if(si0){
goto L74;
}
si0=l6;
l4=si0;
L75:;
{
si0=l4;
f1645(i,si0);
si0=l4;
si1=72U;
si0+=si1;
l4=si0;
si0=l5;
si1=-1U;
si0+=si1;
l5=si0;
if(si0){
goto L75;
}
}
L74:;
si0=l3;
si1=44U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L76;
}
si0=l6;
f15271(i,si0);
L76:;
si0=l3;
si1=52U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si0=l3;
si1=60U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si0=!(si0);
if(si0){
goto L77;
}
si0=l6;
l4=si0;
L78:;
{
si0=l4;
f1643(i,si0);
si0=l4;
si1=48U;
si0+=si1;
l4=si0;
si0=l5;
si1=-1U;
si0+=si1;
l5=si0;
if(si0){
goto L78;
}
}
L77:;
si0=l3;
si1=56U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L3;
}
si0=l6;
f15271(i,si0);
goto L3;
L24:;
si0=l3;
si1=12U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=!(si0);
if(si0){
goto L3;
}
si0=l3;
f1684(i,si0);
si0=l3;
f15271(i,si0);
goto L3;
L23:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+4U);
l6=si0;
si0=l3;
si1=12U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si0=!(si0);
if(si0){
goto L79;
}
si0=l6;
l4=si0;
L80:;
{
si0=l4;
f1643(i,si0);
si0=l4;
si1=48U;
si0+=si1;
l4=si0;
si0=l5;
si1=-1U;
si0+=si1;
l5=si0;
if(si0){
goto L80;
}
}
L79:;
si0=l3;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L3;
}
si0=l6;
f15271(i,si0);
goto L3;
L22:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+4U);
l6=si0;
si0=l3;
si1=12U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si0=!(si0);
if(si0){
goto L81;
}
si0=l6;
l4=si0;
L82:;
{
si0=l4;
f1643(i,si0);
si0=l4;
si1=48U;
si0+=si1;
l4=si0;
si0=l5;
si1=-1U;
si0+=si1;
l5=si0;
if(si0){
goto L82;
}
}
L81:;
si0=l3;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L83;
}
si0=l6;
f15271(i,si0);
L83:;
si0=l3;
si1=16U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
f1684(i,si0);
si0=l4;
f15271(i,si0);
si0=l3;
si1=28U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
si0=!(si0);
if(si0){
goto L3;
}
si0=l3;
si1=32U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L3;
}
si0=l4;
f15271(i,si0);
goto L3;
L21:;
si0=l3;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
si0=l3;
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
f1684(i,si0);
si0=l3;
f15271(i,si0);
si0=l4;
f1684(i,si0);
si0=l4;
f15271(i,si0);
goto L3;
L20:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+4U);
l4=si0;
f1684(i,si0);
si0=l4;
f15271(i,si0);
si0=l3;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
f1684(i,si0);
si0=l4;
f15271(i,si0);
si0=l3;
si1=20U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=!(si0);
if(si0){
goto L3;
}
si0=l3;
f1684(i,si0);
si0=l3;
f15271(i,si0);
goto L3;
L19:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+4U);
l4=si0;
f1684(i,si0);
si0=l4;
f15271(i,si0);
si0=l3;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
f1684(i,si0);
si0=l4;
f15271(i,si0);
si0=l3;
si1=12U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si0=l3;
si1=20U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si0=!(si0);
if(si0){
goto L84;
}
si0=l6;
l4=si0;
L85:;
{
si0=l4;
f1645(i,si0);
si0=l4;
si1=72U;
si0+=si1;
l4=si0;
si0=l5;
si1=-1U;
si0+=si1;
l5=si0;
if(si0){
goto L85;
}
}
L84:;
si0=l3;
si1=16U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L86;
}
si0=l6;
f15271(i,si0);
L86:;
si0=l3;
si1=24U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si0=l3;
si1=32U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si0=!(si0);
if(si0){
goto L87;
}
si0=l6;
l4=si0;
L88:;
{
si0=l4;
f1645(i,si0);
si0=l4;
si1=72U;
si0+=si1;
l4=si0;
si0=l5;
si1=-1U;
si0+=si1;
l5=si0;
if(si0){
goto L88;
}
}
L87:;
si0=l3;
si1=28U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L89;
}
si0=l6;
f15271(i,si0);
L89:;
si0=l3;
si1=44U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
si0=!(si0);
if(si0){
goto L3;
}
si0=l3;
si1=48U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L3;
}
si0=l4;
f15271(i,si0);
goto L3;
L18:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+4U);
l4=si0;
f1684(i,si0);
si0=l4;
f15271(i,si0);
si0=l3;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
f1684(i,si0);
si0=l4;
f15271(i,si0);
si0=l3;
si1=12U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si0=l3;
si1=20U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si0=!(si0);
if(si0){
goto L90;
}
si0=l6;
l4=si0;
L91:;
{
si0=l4;
f1645(i,si0);
si0=l4;
si1=72U;
si0+=si1;
l4=si0;
si0=l5;
si1=-1U;
si0+=si1;
l5=si0;
if(si0){
goto L91;
}
}
L90:;
si0=l3;
si1=16U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L92;
}
si0=l6;
f15271(i,si0);
L92:;
si0=l3;
si1=24U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si0=l3;
si1=32U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si0=!(si0);
if(si0){
goto L93;
}
si0=l6;
l4=si0;
L94:;
{
si0=l4;
f1645(i,si0);
si0=l4;
si1=72U;
si0+=si1;
l4=si0;
si0=l5;
si1=-1U;
si0+=si1;
l5=si0;
if(si0){
goto L94;
}
}
L93:;
si0=l3;
si1=28U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L95;
}
si0=l6;
f15271(i,si0);
L95:;
si0=l3;
si1=44U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
si0=!(si0);
if(si0){
goto L3;
}
si0=l3;
si1=48U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L3;
}
si0=l4;
f15271(i,si0);
goto L3;
L17:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+4U);
l4=si0;
f1684(i,si0);
si0=l4;
f15271(i,si0);
si0=l3;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si0=l3;
si1=16U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si0=!(si0);
if(si0){
goto L96;
}
si0=l6;
l4=si0;
L97:;
{
si0=l4;
f1645(i,si0);
si0=l4;
si1=72U;
si0+=si1;
l4=si0;
si0=l5;
si1=-1U;
si0+=si1;
l5=si0;
if(si0){
goto L97;
}
}
L96:;
si0=l3;
si1=12U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L98;
}
si0=l6;
f15271(i,si0);
L98:;
si0=l3;
si1=20U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si0=l3;
si1=28U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si0=!(si0);
if(si0){
goto L99;
}
si0=l6;
l4=si0;
L100:;
{
si0=l4;
f1645(i,si0);
si0=l4;
si1=72U;
si0+=si1;
l4=si0;
si0=l5;
si1=-1U;
si0+=si1;
l5=si0;
if(si0){
goto L100;
}
}
L99:;
si0=l3;
si1=24U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L3;
}
si0=l6;
f15271(i,si0);
goto L3;
L16:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+4U);
l4=si0;
f1684(i,si0);
si0=l4;
f15271(i,si0);
si0=l3;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si0=l3;
si1=16U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si0=!(si0);
if(si0){
goto L101;
}
si0=l6;
l4=si0;
L102:;
{
si0=l4;
f1645(i,si0);
si0=l4;
si1=72U;
si0+=si1;
l4=si0;
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
si1=12U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L103;
}
si0=l6;
f15271(i,si0);
L103:;
si0=l3;
si1=20U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si0=l3;
si1=28U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si0=!(si0);
if(si0){
goto L104;
}
si0=l6;
l4=si0;
L105:;
{
si0=l4;
f1645(i,si0);
si0=l4;
si1=72U;
si0+=si1;
l4=si0;
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
si1=24U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L3;
}
si0=l6;
f15271(i,si0);
goto L3;
L15:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+4U);
l7=si0;
si0=l3;
si1=12U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si0=!(si0);
if(si0){
goto L106;
}
si0=l7;
l4=si0;
L107:;
{
si0=l4;
f1643(i,si0);
si0=l4;
si1=48U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si0=!(si0);
if(si0){
goto L108;
}
si0=l5;
f1643(i,si0);
si0=l5;
f15271(i,si0);
L108:;
si0=l4;
si1=56U;
si0+=si1;
l4=si0;
si0=l6;
si1=-1U;
si0+=si1;
l6=si0;
if(si0){
goto L107;
}
}
L106:;
si0=l3;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L109;
}
si0=l7;
f15271(i,si0);
L109:;
si0=l3;
si1=16U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si0=l3;
si1=24U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si0=!(si0);
if(si0){
goto L110;
}
si0=l6;
l4=si0;
L111:;
{
si0=l4;
f1645(i,si0);
si0=l4;
si1=72U;
si0+=si1;
l4=si0;
si0=l5;
si1=-1U;
si0+=si1;
l5=si0;
if(si0){
goto L111;
}
}
L110:;
si0=l3;
si1=20U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L112;
}
si0=l6;
f15271(i,si0);
L112:;
si0=l3;
si1=36U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
si0=!(si0);
if(si0){
goto L3;
}
si0=l3;
si1=40U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L3;
}
si0=l4;
f15271(i,si0);
goto L3;
L14:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+4U);
l7=si0;
si0=l3;
si1=12U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si0=!(si0);
if(si0){
goto L113;
}
si0=l7;
l4=si0;
L114:;
{
si0=l4;
f1643(i,si0);
si0=l4;
si1=48U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si0=!(si0);
if(si0){
goto L115;
}
si0=l5;
f1643(i,si0);
si0=l5;
f15271(i,si0);
L115:;
si0=l4;
si1=56U;
si0+=si1;
l4=si0;
si0=l6;
si1=-1U;
si0+=si1;
l6=si0;
if(si0){
goto L114;
}
}
L113:;
si0=l3;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L116;
}
si0=l7;
f15271(i,si0);
L116:;
si0=l3;
si1=16U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si0=l3;
si1=24U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si0=!(si0);
if(si0){
goto L117;
}
si0=l6;
l4=si0;
L118:;
{
si0=l4;
f1645(i,si0);
si0=l4;
si1=72U;
si0+=si1;
l4=si0;
si0=l5;
si1=-1U;
si0+=si1;
l5=si0;
if(si0){
goto L118;
}
}
L117:;
si0=l3;
si1=20U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L119;
}
si0=l6;
f15271(i,si0);
L119:;
si0=l3;
si1=36U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
si0=!(si0);
if(si0){
goto L3;
}
si0=l3;
si1=40U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L3;
}
si0=l4;
f15271(i,si0);
goto L3;
L13:;
si0=l3;
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
f1684(i,si0);
si0=l4;
f15271(i,si0);
si0=l3;
si1=8U;
si0+=si1;
l4=si0;
f1665(i,si0);
si0=l3;
si1=12U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L3;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
f15271(i,si0);
goto L3;
L12:;
si0=l3;
si1=16U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
si0=l3;
si1=12U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=!(si0);
if(si0){
goto L120;
}
si0=l3;
f1684(i,si0);
si0=l3;
f15271(i,si0);
L120:;
si0=l4;
si0=!(si0);
if(si0){
goto L3;
}
si0=l4;
f1684(i,si0);
si0=l4;
f15271(i,si0);
goto L3;
L11:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+4U);
l6=si0;
si0=l3;
si1=12U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si0=!(si0);
if(si0){
goto L121;
}
si0=l6;
l4=si0;
L122:;
{
si0=l4;
f1645(i,si0);
si0=l4;
si1=72U;
si0+=si1;
l4=si0;
si0=l5;
si1=-1U;
si0+=si1;
l5=si0;
if(si0){
goto L122;
}
}
L121:;
si0=l3;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L123;
}
si0=l6;
f15271(i,si0);
L123:;
si0=l3;
si1=16U;
si0+=si1;
l4=si0;
f1667(i,si0);
si0=l3;
si1=20U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L124;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
f15271(i,si0);
L124:;
si0=l3;
si1=28U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si0=l3;
si1=36U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si0=!(si0);
if(si0){
goto L125;
}
si0=l6;
l4=si0;
L126:;
{
si0=l4;
f1645(i,si0);
si0=l4;
si1=72U;
si0+=si1;
l4=si0;
si0=l5;
si1=-1U;
si0+=si1;
l5=si0;
if(si0){
goto L126;
}
}
L125:;
si0=l3;
si1=32U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L127;
}
si0=l6;
f15271(i,si0);
L127:;
si0=l3;
si1=40U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si0=l3;
si1=48U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si0=!(si0);
if(si0){
goto L128;
}
si0=l6;
l4=si0;
L129:;
{
si0=l4;
f1645(i,si0);
si0=l4;
si1=72U;
si0+=si1;
l4=si0;
si0=l5;
si1=-1U;
si0+=si1;
l5=si0;
if(si0){
goto L129;
}
}
L128:;
si0=l3;
si1=44U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L3;
}
si0=l6;
f15271(i,si0);
goto L3;
L10:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+4U);
l6=si0;
si0=l3;
si1=12U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si0=!(si0);
if(si0){
goto L130;
}
si0=l6;
l4=si0;
L131:;
{
si0=l4;
f1645(i,si0);
si0=l4;
si1=72U;
si0+=si1;
l4=si0;
si0=l5;
si1=-1U;
si0+=si1;
l5=si0;
if(si0){
goto L131;
}
}
L130:;
si0=l3;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L132;
}
si0=l6;
f15271(i,si0);
L132:;
si0=l3;
si1=16U;
si0+=si1;
l4=si0;
f1667(i,si0);
si0=l3;
si1=20U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L133;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
f15271(i,si0);
L133:;
si0=l3;
si1=28U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si0=l3;
si1=36U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si0=!(si0);
if(si0){
goto L134;
}
si0=l6;
l4=si0;
L135:;
{
si0=l4;
f1645(i,si0);
si0=l4;
si1=72U;
si0+=si1;
l4=si0;
si0=l5;
si1=-1U;
si0+=si1;
l5=si0;
if(si0){
goto L135;
}
}
L134:;
si0=l3;
si1=32U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L136;
}
si0=l6;
f15271(i,si0);
L136:;
si0=l3;
si1=40U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si0=l3;
si1=48U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si0=!(si0);
if(si0){
goto L137;
}
si0=l6;
l4=si0;
L138:;
{
si0=l4;
f1645(i,si0);
si0=l4;
si1=72U;
si0+=si1;
l4=si0;
si0=l5;
si1=-1U;
si0+=si1;
l5=si0;
if(si0){
goto L138;
}
}
L137:;
si0=l3;
si1=44U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L3;
}
si0=l6;
f15271(i,si0);
goto L3;
L9:;
si0=l3;
si1=16U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
si0=l3;
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
f1684(i,si0);
si0=l3;
f15271(i,si0);
si0=l4;
si0=!(si0);
if(si0){
goto L3;
}
si0=l4;
f1684(i,si0);
si0=l4;
f15271(i,si0);
goto L3;
L8:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+4U);
l7=si0;
si0=l3;
si1=12U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si0=!(si0);
if(si0){
goto L139;
}
si0=l7;
l4=si0;
L140:;
{
si0=l4;
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L141;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
f15271(i,si0);
L141:;
si0=l4;
si1=20U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si0=!(si0);
if(si0){
goto L142;
}
si0=l4;
si1=24U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L142;
}
si0=l6;
f15271(i,si0);
L142:;
si0=l4;
si1=32U;
si0+=si1;
l4=si0;
si0=l5;
si1=-1U;
si0+=si1;
l5=si0;
if(si0){
goto L140;
}
}
L139:;
si0=l3;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L3;
}
si0=l7;
f15271(i,si0);
goto L3;
L7:;
si0=l3;
si1=32U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
si0=!(si0);
if(si0){
goto L143;
}
si0=l3;
si1=36U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L143;
}
si0=l4;
f15271(i,si0);
L143:;
si0=l3;
si1=12U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
si0=l3;
si1=20U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si0=!(si0);
if(si0){
goto L144;
}
si0=l7;
l4=si0;
L145:;
{
si0=l4;
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L146;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
f15271(i,si0);
L146:;
si0=l4;
si1=20U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si0=!(si0);
if(si0){
goto L147;
}
si0=l4;
si1=24U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L147;
}
si0=l6;
f15271(i,si0);
L147:;
si0=l4;
si1=32U;
si0+=si1;
l4=si0;
si0=l5;
si1=-1U;
si0+=si1;
l5=si0;
if(si0){
goto L145;
}
}
L144:;
si0=l3;
si1=16U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L3;
}
si0=l7;
f15271(i,si0);
goto L3;
L6:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+4U);
l6=si0;
si0=l3;
si1=12U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si0=!(si0);
if(si0){
goto L148;
}
si0=l6;
l4=si0;
L149:;
{
si0=l4;
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L150;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
f15271(i,si0);
L150:;
si0=l4;
si1=12U;
si0+=si1;
l4=si0;
si0=l5;
si1=-1U;
si0+=si1;
l5=si0;
if(si0){
goto L149;
}
}
L148:;
si0=l3;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L3;
}
si0=l6;
f15271(i,si0);
goto L3;
L5:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+4U);
l6=si0;
si0=l3;
si1=12U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si0=!(si0);
if(si0){
goto L151;
}
si0=l6;
l4=si0;
L152:;
{
si0=l4;
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L153;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
f15271(i,si0);
L153:;
si0=l4;
si1=12U;
si0+=si1;
l4=si0;
si0=l5;
si1=-1U;
si0+=si1;
l5=si0;
if(si0){
goto L152;
}
}
L151:;
si0=l3;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L3;
}
si0=l6;
f15271(i,si0);
goto L3;
L4:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+4U);
l3=si0;
f1684(i,si0);
si0=l3;
f15271(i,si0);
L3:;
si0=l2;
si1=l1;
si0=si0 != si1;
if(si0){
goto L2;
}
}
L1:;
L0:;
}

void f1688(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 si0,si1;
si0=l1;
si0=!(si0);
if(si0){
goto L1;
}
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
si1=20U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si0=!(si0);
if(si0){
goto L4;
}
si0=l2;
f1684(i,si0);
si0=l2;
f15271(i,si0);
L4:;
si0=l0;
si1=24U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si0=!(si0);
if(si0){
goto L5;
}
si0=l0;
si1=28U;
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
si1=36U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si0=!(si0);
if(si0){
goto L6;
}
si0=l2;
f1684(i,si0);
si0=l2;
f15271(i,si0);
L6:;
si0=l0;
si1=40U;
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

void f1689(rustpythonInstance*i,U32 l0) {
U32 l1=0;
U32 l2=0;
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 si0,si1,si2;
si0=l0;
si1=12U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si1=l0;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
l2=si1;
si0-=si1;
si1=72U;
si0=DIV_U(si0,si1);
l3=si0;
si0=l1;
si1=l2;
si0=si0 == si1;
if(si0){
goto L1;
}
si0=0U;
l4=si0;
L2:;
{
si0=l2;
si1=l4;
si2=72U;
si1*=si2;
si0+=si1;
l1=si0;
f1686(i,si0);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+68U);
l5=si0;
si0=!(si0);
if(si0){
goto L3;
}
si0=l5;
f1684(i,si0);
si0=l5;
f15271(i,si0);
L3:;
si0=l1;
si1=56U;
si0+=si1;
l6=si0;
si0=l1;
si1=64U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si0=!(si0);
if(si0){
goto L4;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+56U);
l1=si0;
L5:;
{
si0=l1;
f1645(i,si0);
si0=l1;
si1=72U;
si0+=si1;
l1=si0;
si0=l5;
si1=-1U;
si0+=si1;
l5=si0;
if(si0){
goto L5;
}
}
L4:;
si0=l4;
si1=1U;
si0+=si1;
l4=si0;
si0=l6;
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L6;
}
si0=l6;
si0=i32_load(&i->m0,(U64)si0);
f15271(i,si0);
L6:;
si0=l4;
si1=l3;
si0=si0 != si1;
if(si0){
goto L2;
}
}
L1:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+4U);
si0=!(si0);
if(si0){
goto L7;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
f15271(i,si0);
L7:;
L0:;
}

void f1690(rustpythonInstance*i,U32 l0) {
U32 l1=0;
U32 l2=0;
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 si0,si1,si2;
si0=l0;
si1=12U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si1=l0;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
l2=si1;
si0-=si1;
si1=112U;
si0=DIV_U(si0,si1);
l3=si0;
si0=l1;
si1=l2;
si0=si0 == si1;
if(si0){
goto L1;
}
si0=0U;
l4=si0;
L2:;
{
si0=l2;
si1=l4;
si2=112U;
si1*=si2;
si0+=si1;
l1=si0;
f1684(i,si0);
si0=l1;
si1=48U;
si0+=si1;
f1684(i,si0);
si0=l1;
si1=96U;
si0+=si1;
l5=si0;
si0=l1;
si1=104U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si0=!(si0);
if(si0){
goto L3;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+96U);
l1=si0;
L4:;
{
si0=l1;
f1643(i,si0);
si0=l1;
si1=48U;
si0+=si1;
l1=si0;
si0=l6;
si1=-1U;
si0+=si1;
l6=si0;
if(si0){
goto L4;
}
}
L3:;
si0=l4;
si1=1U;
si0+=si1;
l4=si0;
si0=l5;
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L5;
}
si0=l5;
si0=i32_load(&i->m0,(U64)si0);
f15271(i,si0);
L5:;
si0=l4;
si1=l3;
si0=si0 != si1;
if(si0){
goto L2;
}
}
L1:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+4U);
si0=!(si0);
if(si0){
goto L6;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
f15271(i,si0);
L6:;
L0:;
}

void f1691(rustpythonInstance*i,U32 l0) {
U32 l1=0;
U32 l2=0;
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 si0,si1,si2;
si0=l0;
si1=12U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si1=l0;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
l2=si1;
si0-=si1;
si1=36U;
si0=DIV_U(si0,si1);
l3=si0;
si0=l1;
si1=l2;
si0=si0 == si1;
if(si0){
goto L1;
}
si0=0U;
l4=si0;
L2:;
{
si0=l2;
si1=l4;
si2=36U;
si1*=si2;
si0+=si1;
l5=si0;
si0=i32_load(&i->m0,(U64)si0+20U);
l1=si0;
si0=!(si0);
if(si0){
goto L3;
}
si0=l1;
f1684(i,si0);
si0=l1;
f15271(i,si0);
L3:;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+24U);
l1=si0;
si0=!(si0);
if(si0){
goto L4;
}
si0=l5;
si1=28U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L4;
}
si0=l1;
f15271(i,si0);
L4:;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+8U);
l6=si0;
si0=!(si0);
if(si0){
goto L5;
}
si0=l5;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
L6:;
{
si0=l1;
f1645(i,si0);
si0=l1;
si1=72U;
si0+=si1;
l1=si0;
si0=l6;
si1=-1U;
si0+=si1;
l6=si0;
if(si0){
goto L6;
}
}
L5:;
si0=l4;
si1=1U;
si0+=si1;
l4=si0;
si0=l5;
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L7;
}
si0=l5;
si0=i32_load(&i->m0,(U64)si0);
f15271(i,si0);
L7:;
si0=l4;
si1=l3;
si0=si0 != si1;
if(si0){
goto L2;
}
}
L1:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+4U);
si0=!(si0);
if(si0){
goto L8;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
f15271(i,si0);
L8:;
L0:;
}

void f1692(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4) {
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
U32 si0,si1,si2;
U64 sj1;
si0=i->g0;
si1=48U;
si0-=si1;
l5=si0;
i->g0=si0;
si0=0U;
l6=si0;
si0=l5;
si1=0U;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l5;
sj1=1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=128U;
si0=si0 >= si1;
if(si0){
goto L2;
}
si0=1U;
l7=si0;
goto L1;
L2:;
si0=l3;
si1=2048U;
si0=si0 < si1;
if(si0){
goto L3;
}
si0=l3;
si1=65536U;
si0=si0 >= si1;
if(si0){
goto L4;
}
si0=l3;
si1=12U;
si0>>=(si1&31);
si1=l3;
si2=2U;
si1<<=(si2&31);
si2=16128U;
si1&=si2;
si0|=si1;
si1=l3;
si2=16U;
si1<<=(si2&31);
si2=4128768U;
si1&=si2;
si0|=si1;
si1=8421600U;
si0|=si1;
l3=si0;
si0=3U;
l7=si0;
goto L1;
L4:;
si0=4U;
l7=si0;
si0=l3;
si1=18U;
si0>>=(si1&31);
si1=7U;
si0&=si1;
si1=l3;
si2=4U;
si1>>=(si2&31);
si2=16128U;
si1&=si2;
si0|=si1;
si1=l3;
si2=10U;
si1<<=(si2&31);
si2=4128768U;
si1&=si2;
si0|=si1;
si1=l3;
si2=24U;
si1<<=(si2&31);
si2=1056964608U;
si1&=si2;
si0|=si1;
si1=-2139062032U;
si0|=si1;
l3=si0;
goto L1;
L3:;
si0=l3;
si1=6U;
si0>>=(si1&31);
si1=l3;
si2=8U;
si1<<=(si2&31);
si2=16128U;
si1&=si2;
si0|=si1;
si1=32960U;
si0|=si1;
l3=si0;
si0=2U;
l7=si0;
L1:;
si0=l5;
si1=l3;
i32_store(&i->m0,(U64)si0+40U,si1);
si0=l5;
si1=l7;
i32_store(&i->m0,(U64)si0+36U,si1);
si0=l7;
si1=l5;
si2=40U;
si1+=si2;
l8=si1;
si0|=si1;
si1=-1U;
si0+=si1;
l9=si0;
si0=1U;
l10=si0;
si0=0U;
l11=si0;
si0=0U;
l12=si0;
L5:;
{
si0=l9;
si0=i32_load8_u(&i->m0,(U64)si0);
l13=si0;
si1=16843009U;
si0*=si1;
l14=si0;
L7:;
{
si0=l1;
si1=l12;
si0+=si1;
l15=si0;
si0=l2;
si1=l12;
si0-=si1;
l16=si0;
si1=8U;
si0=si0 < si1;
if(si0){
goto L9;
}
si0=l15;
si1=3U;
si0+=si1;
si1=-4U;
si0&=si1;
l3=si0;
si1=l15;
si0=si0 == si1;
if(si0){
goto L12;
}
si0=l3;
si1=l15;
si0-=si1;
l17=si0;
si0=!(si0);
if(si0){
goto L12;
}
si0=0U;
l3=si0;
L13:;
{
si0=l15;
si1=l3;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=l13;
si0=si0 == si1;
if(si0){
goto L8;
}
si0=l17;
si1=l3;
si2=1U;
si1+=si2;
l3=si1;
si0=si0 != si1;
if(si0){
goto L13;
}
}
si0=l17;
si1=l16;
si2=-8U;
si1+=si2;
l18=si1;
si0=si0 <= si1;
if(si0){
goto L11;
}
goto L10;
L12:;
si0=l16;
si1=-8U;
si0+=si1;
l18=si0;
si0=0U;
l17=si0;
L11:;
L14:;
{
si0=l15;
si1=l17;
si0+=si1;
l19=si0;
si0=i32_load(&i->m0,(U64)si0);
si1=l14;
si0^=si1;
l3=si0;
si1=-1U;
si0^=si1;
si1=l3;
si2=-16843009U;
si1+=si2;
si0&=si1;
si1=-2139062144U;
si0&=si1;
if(si0){
goto L10;
}
si0=l19;
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=l14;
si0^=si1;
l3=si0;
si1=-1U;
si0^=si1;
si1=l3;
si2=-16843009U;
si1+=si2;
si0&=si1;
si1=-2139062144U;
si0&=si1;
if(si0){
goto L10;
}
si0=l17;
si1=8U;
si0+=si1;
l17=si0;
si1=l18;
si0=si0 <= si1;
if(si0){
goto L14;
}
}
L10:;
si0=l16;
si1=l17;
si0=si0 == si1;
if(si0){
goto L6;
}
L15:;
{
si0=l15;
si1=l17;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=l13;
si0=si0 != si1;
if(si0){
goto L16;
}
si0=l17;
l3=si0;
goto L8;
L16:;
si0=l16;
si1=l17;
si2=1U;
si1+=si2;
l17=si1;
si0=si0 != si1;
if(si0){
goto L15;
}
goto L6;
}
L9:;
si0=l12;
si1=l2;
si0=si0 == si1;
if(si0){
goto L6;
}
si0=0U;
l3=si0;
L17:;
{
si0=l15;
si1=l3;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=l13;
si0=si0 == si1;
if(si0){
goto L8;
}
si0=l16;
si1=l3;
si2=1U;
si1+=si2;
l3=si1;
si0=si0 != si1;
if(si0){
goto L17;
}
goto L6;
}
L8:;
si0=l3;
si1=l12;
si0+=si1;
si1=1U;
si0+=si1;
l12=si0;
si1=l7;
si0=si0 < si1;
if(si0){
goto L18;
}
si0=l12;
si1=l2;
si0=si0 > si1;
if(si0){
goto L18;
}
si0=l1;
si1=l12;
si2=l7;
si1-=si2;
l3=si1;
si0+=si1;
si1=l8;
si2=l7;
si0=f15389(i,si0,si1,si2);
if(si0){
goto L18;
}
si0=l1;
si1=l11;
si0+=si1;
l15=si0;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+4U);
l17=si0;
si1=l6;
si0-=si1;
si1=l3;
si2=l11;
si1-=si2;
l3=si1;
si0=si0 >= si1;
if(si0){
goto L19;
}
si0=l5;
si1=l6;
si2=l3;
f1678(i,si0,si1,si2);
si0=l5;
si0=i32_load(&i->m0,(U64)si0+4U);
l17=si0;
si0=l5;
si0=i32_load(&i->m0,(U64)si0);
l10=si0;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+8U);
l6=si0;
L19:;
si0=l10;
si1=l6;
si0+=si1;
si1=l15;
si2=l3;
si0=f15390(i,si0,si1,si2);
si0=l5;
si1=l6;
si2=l3;
si1+=si2;
l3=si1;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l17;
si1=l3;
si0-=si1;
si1=1U;
si0=si0 > si1;
if(si0){
goto L20;
}
si0=l5;
si1=l3;
si2=2U;
f1678(i,si0,si1,si2);
si0=l5;
si0=i32_load(&i->m0,(U64)si0);
l10=si0;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+8U);
l3=si0;
L20:;
si0=l10;
si1=l3;
si0+=si1;
si1=l4;
si1=i32_load16_u(&i->m0,(U64)si1);
i32_store16(&i->m0,(U64)si0,si1);
si0=l5;
si1=l3;
si2=2U;
si1+=si2;
l6=si1;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l12;
l11=si0;
goto L5;
L18:;
si0=l12;
si1=l2;
si0=si0 <= si1;
if(si0){
goto L7;
}
}
L6:;
}
si0=l5;
si0=i32_load(&i->m0,(U64)si0+4U);
si1=l6;
si0-=si1;
si1=l2;
si2=l11;
si1-=si2;
l3=si1;
si0=si0 >= si1;
if(si0){
goto L21;
}
si0=l5;
si1=l6;
si2=l3;
f1678(i,si0,si1,si2);
si0=l5;
si0=i32_load(&i->m0,(U64)si0+8U);
l6=si0;
L21:;
si0=l5;
si0=i32_load(&i->m0,(U64)si0);
si1=l6;
si0+=si1;
si1=l1;
si2=l11;
si1+=si2;
si2=l3;
si0=f15390(i,si0,si1,si2);
si0=l0;
si1=8U;
si0+=si1;
si1=l6;
si2=l3;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l5;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=48U;
si0+=si1;
i->g0=si0;
L0:;
}

U32 f1693(rustpythonInstance*i,U32 l0,U32 l1) {
U32 si0,si1,si2,si3,si4;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=1288105U;
si2=1288102U;
si3=l0;
si3=i32_load8_u(&i->m0,(U64)si3);
l0=si3;
si1=si3?si1:si2;
si2=2U;
si3=3U;
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

U32 f1694(rustpythonInstance*i,U32 l0,U32 l1) {
U32 si0,si1,si2,si3,si4;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=l0;
si1=i32_load8_u(&i->m0,(U64)si1);
si2=2U;
si1<<=(si2&31);
l0=si1;
si2=1288272U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
si2=l0;
si3=1288220U;
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

U32 f1695(rustpythonInstance*i,U32 l0,U32 l1) {
U32 si0,si1,si2,si3,si4;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=l0;
si1=i32_load8_u(&i->m0,(U64)si1);
si2=2U;
si1<<=(si2&31);
l0=si1;
si2=1288340U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
si2=l0;
si3=1288324U;
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

void f1696(rustpythonInstance*i,U32 l0,U32 l1) {
U32 si0,si1,si2;
U64 sj1;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
switch(si0){
case 0:
goto L28;
case 1:
goto L27;
case 2:
goto L26;
case 3:
goto L25;
case 4:
goto L24;
case 5:
goto L23;
case 6:
goto L22;
case 7:
goto L21;
case 8:
goto L20;
case 9:
goto L19;
case 10:
goto L18;
case 11:
goto L17;
case 12:
goto L16;
case 13:
goto L15;
case 14:
goto L14;
case 15:
goto L13;
case 16:
goto L12;
case 17:
goto L11;
case 18:
goto L10;
case 19:
goto L9;
case 20:
goto L8;
case 21:
goto L7;
case 22:
goto L6;
case 23:
goto L5;
case 24:
goto L4;
case 25:
goto L3;
case 26:
goto L2;
default:
goto L28;
}
L28:;
si0=l1;
si1=4U;
si0+=si1;
l1=si0;
goto L1;
L27:;
si0=l1;
si1=4U;
si0+=si1;
l1=si0;
goto L1;
L26:;
si0=l1;
si1=4U;
si0+=si1;
l1=si0;
goto L1;
L25:;
si0=l1;
si1=4U;
si0+=si1;
l1=si0;
goto L1;
L24:;
si0=l1;
si1=4U;
si0+=si1;
l1=si0;
goto L1;
L23:;
si0=l1;
si1=4U;
si0+=si1;
l1=si0;
goto L1;
L22:;
si0=l1;
si1=4U;
si0+=si1;
l1=si0;
goto L1;
L21:;
si0=l1;
si1=4U;
si0+=si1;
l1=si0;
goto L1;
L20:;
si0=l1;
si1=4U;
si0+=si1;
l1=si0;
goto L1;
L19:;
si0=l1;
si1=4U;
si0+=si1;
l1=si0;
goto L1;
L18:;
si0=l1;
si1=4U;
si0+=si1;
l1=si0;
goto L1;
L17:;
si0=l1;
si1=4U;
si0+=si1;
l1=si0;
goto L1;
L16:;
si0=l1;
si1=4U;
si0+=si1;
l1=si0;
goto L1;
L15:;
si0=l1;
si1=4U;
si0+=si1;
l1=si0;
goto L1;
L14:;
si0=l1;
si1=4U;
si0+=si1;
l1=si0;
goto L1;
L13:;
si0=l1;
si1=4U;
si0+=si1;
l1=si0;
goto L1;
L12:;
si0=l1;
si1=4U;
si0+=si1;
l1=si0;
goto L1;
L11:;
si0=l1;
si1=4U;
si0+=si1;
l1=si0;
goto L1;
L10:;
si0=l1;
si1=4U;
si0+=si1;
l1=si0;
goto L1;
L9:;
si0=l1;
si1=4U;
si0+=si1;
l1=si0;
goto L1;
L8:;
si0=l1;
si1=12U;
si0+=si1;
l1=si0;
goto L1;
L7:;
si0=l1;
si1=4U;
si0+=si1;
l1=si0;
goto L1;
L6:;
si0=l1;
si1=4U;
si0+=si1;
l1=si0;
goto L1;
L5:;
si0=l1;
si1=4U;
si0+=si1;
l1=si0;
goto L1;
L4:;
si0=l1;
si1=4U;
si0+=si1;
l1=si0;
goto L1;
L3:;
si0=l1;
si1=4U;
si0+=si1;
l1=si0;
goto L1;
L2:;
si0=l1;
si1=4U;
si0+=si1;
l1=si0;
L1:;
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
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
L0:;
}

void f1697(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 si0,si1,si2,si3;
U64 sj1;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
si1=-11U;
si0+=si1;
l2=si0;
si1=19U;
si2=l2;
si3=27U;
si2=si2 < si3;
si0=si2?si0:si1;
switch(si0){
case 0:
goto L27;
case 1:
goto L26;
case 2:
goto L25;
case 3:
goto L24;
case 4:
goto L23;
case 5:
goto L22;
case 6:
goto L21;
case 7:
goto L20;
case 8:
goto L19;
case 9:
goto L18;
case 10:
goto L17;
case 11:
goto L16;
case 12:
goto L15;
case 13:
goto L14;
case 14:
goto L13;
case 15:
goto L12;
case 16:
goto L11;
case 17:
goto L10;
case 18:
goto L9;
case 19:
goto L8;
case 20:
goto L7;
case 21:
goto L6;
case 22:
goto L5;
case 23:
goto L4;
case 24:
goto L3;
case 25:
goto L2;
case 26:
goto L1;
default:
goto L27;
}
L27:;
si0=l0;
si1=l1;
sj1=i64_load(&i->m0,(U64)si1+4U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=8U;
si0+=si1;
si1=l1;
si2=12U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
goto L0;
L26:;
si0=l0;
si1=l1;
sj1=i64_load(&i->m0,(U64)si1+4U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=8U;
si0+=si1;
si1=l1;
si2=12U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
goto L0;
L25:;
si0=l0;
si1=l1;
sj1=i64_load(&i->m0,(U64)si1+4U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=8U;
si0+=si1;
si1=l1;
si2=12U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
goto L0;
L24:;
si0=l0;
si1=l1;
sj1=i64_load(&i->m0,(U64)si1+4U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=8U;
si0+=si1;
si1=l1;
si2=12U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
goto L0;
L23:;
si0=l0;
si1=l1;
sj1=i64_load(&i->m0,(U64)si1+4U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=8U;
si0+=si1;
si1=l1;
si2=12U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
goto L0;
L22:;
si0=l0;
si1=l1;
sj1=i64_load(&i->m0,(U64)si1+4U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=8U;
si0+=si1;
si1=l1;
si2=12U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
goto L0;
L21:;
si0=l0;
si1=l1;
sj1=i64_load(&i->m0,(U64)si1+4U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=8U;
si0+=si1;
si1=l1;
si2=12U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
goto L0;
L20:;
si0=l0;
si1=l1;
sj1=i64_load(&i->m0,(U64)si1+4U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=8U;
si0+=si1;
si1=l1;
si2=12U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
goto L0;
L19:;
si0=l0;
si1=l1;
sj1=i64_load(&i->m0,(U64)si1+4U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=8U;
si0+=si1;
si1=l1;
si2=12U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
goto L0;
L18:;
si0=l0;
si1=l1;
sj1=i64_load(&i->m0,(U64)si1+4U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=8U;
si0+=si1;
si1=l1;
si2=12U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
goto L0;
L17:;
si0=l0;
si1=l1;
sj1=i64_load(&i->m0,(U64)si1+4U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=8U;
si0+=si1;
si1=l1;
si2=12U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
goto L0;
L16:;
si0=l0;
si1=l1;
sj1=i64_load(&i->m0,(U64)si1+4U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=8U;
si0+=si1;
si1=l1;
si2=12U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
goto L0;
L15:;
si0=l0;
si1=l1;
sj1=i64_load(&i->m0,(U64)si1+4U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=8U;
si0+=si1;
si1=l1;
si2=12U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
goto L0;
L14:;
si0=l0;
si1=l1;
sj1=i64_load(&i->m0,(U64)si1+4U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=8U;
si0+=si1;
si1=l1;
si2=12U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
goto L0;
L13:;
si0=l0;
si1=l1;
sj1=i64_load(&i->m0,(U64)si1+4U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=8U;
si0+=si1;
si1=l1;
si2=12U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
goto L0;
L12:;
si0=l0;
si1=l1;
sj1=i64_load(&i->m0,(U64)si1+4U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=8U;
si0+=si1;
si1=l1;
si2=12U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
goto L0;
L11:;
si0=l0;
si1=l1;
sj1=i64_load(&i->m0,(U64)si1+4U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=8U;
si0+=si1;
si1=l1;
si2=12U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
goto L0;
L10:;
si0=l0;
si1=l1;
sj1=i64_load(&i->m0,(U64)si1+4U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=8U;
si0+=si1;
si1=l1;
si2=12U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
goto L0;
L9:;
si0=l0;
si1=l1;
sj1=i64_load(&i->m0,(U64)si1+4U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=8U;
si0+=si1;
si1=l1;
si2=12U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
goto L0;
L8:;
si0=l0;
si1=l1;
sj1=i64_load(&i->m0,(U64)si1+24U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=8U;
si0+=si1;
si1=l1;
si2=32U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
goto L0;
L7:;
si0=l0;
si1=l1;
sj1=i64_load(&i->m0,(U64)si1+4U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=8U;
si0+=si1;
si1=l1;
si2=12U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
goto L0;
L6:;
si0=l0;
si1=l1;
sj1=i64_load(&i->m0,(U64)si1+4U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=8U;
si0+=si1;
si1=l1;
si2=12U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
goto L0;
L5:;
si0=l0;
si1=l1;
sj1=i64_load(&i->m0,(U64)si1+4U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=8U;
si0+=si1;
si1=l1;
si2=12U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
goto L0;
L4:;
si0=l0;
si1=l1;
sj1=i64_load(&i->m0,(U64)si1+4U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=8U;
si0+=si1;
si1=l1;
si2=12U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
goto L0;
L3:;
si0=l0;
si1=l1;
sj1=i64_load(&i->m0,(U64)si1+4U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=8U;
si0+=si1;
si1=l1;
si2=12U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
goto L0;
L2:;
si0=l0;
si1=l1;
sj1=i64_load(&i->m0,(U64)si1+4U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=8U;
si0+=si1;
si1=l1;
si2=12U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
goto L0;
L1:;
si0=l0;
si1=l1;
sj1=i64_load(&i->m0,(U64)si1+4U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=8U;
si0+=si1;
si1=l1;
si2=12U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
L0:;
}

U32 f1698(rustpythonInstance*i,U32 l0,U32 l1) {
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
si1=80U;
si0-=si1;
l2=si0;
i->g0=si0;
si0=l0;
si1=16U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=!(si0);
if(si0){
goto L2;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+12U);
l4=si0;
si1=l3;
si0+=si1;
l5=si0;
si0=34U;
si1=39U;
si2=l0;
si2=i32_load8_u(&i->m0,(U64)si2+8U);
si0=si2?si0:si1;
l6=si0;
si0=l1;
si1=24U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+20U);
l8=si0;
L3:;
{
si0=l4;
si0=i32_load8_s(&i->m0,(U64)si0);
l0=si0;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L5;
}
si0=l4;
si1=1U;
si0+=si1;
l4=si0;
si0=l0;
si1=255U;
si0&=si1;
l0=si0;
goto L4;
L5:;
si0=l4;
si0=i32_load8_u(&i->m0,(U64)si0+1U);
si1=63U;
si0&=si1;
l1=si0;
si0=l0;
si1=31U;
si0&=si1;
l3=si0;
si0=l0;
si1=-33U;
si0=si0 > si1;
if(si0){
goto L6;
}
si0=l3;
si1=6U;
si0<<=(si1&31);
si1=l1;
si0|=si1;
l0=si0;
si0=l4;
si1=2U;
si0+=si1;
l4=si0;
goto L4;
L6:;
si0=l1;
si1=6U;
si0<<=(si1&31);
si1=l4;
si1=i32_load8_u(&i->m0,(U64)si1+2U);
si2=63U;
si1&=si2;
si0|=si1;
l1=si0;
si0=l0;
si1=-16U;
si0=si0 >= si1;
if(si0){
goto L7;
}
si0=l1;
si1=l3;
si2=12U;
si1<<=(si2&31);
si0|=si1;
l0=si0;
si0=l4;
si1=3U;
si0+=si1;
l4=si0;
goto L4;
L7:;
si0=l1;
si1=6U;
si0<<=(si1&31);
si1=l4;
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
l0=si0;
si1=1114112U;
si0=si0 == si1;
if(si0){
goto L2;
}
si0=l4;
si1=4U;
si0+=si1;
l4=si0;
L4:;
si0=l0;
si1=-9U;
si0+=si1;
switch(si0){
case 0:
goto L15;
case 1:
goto L12;
case 2:
goto L13;
case 3:
goto L13;
case 4:
goto L14;
default:
goto L13;
}
L15:;
si0=l8;
si1=1288358U;
si2=2U;
si3=l7;
si3=i32_load(&i->m0,(U64)si3+12U);
si0=TF(i->t0,si3,U32 (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
si0=!(si0);
if(si0){
goto L8;
}
si0=1U;
l0=si0;
goto L1;
L14:;
si0=l8;
si1=1288360U;
si2=2U;
si3=l7;
si3=i32_load(&i->m0,(U64)si3+12U);
si0=TF(i->t0,si3,U32 (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
si0=!(si0);
if(si0){
goto L8;
}
si0=1U;
l0=si0;
goto L1;
L13:;
si0=l0;
si1=-32U;
si0+=si1;
si1=95U;
si0=si0 < si1;
if(si0){
goto L9;
}
si0=l0;
si1=128U;
si0=si0 < si1;
if(si0){
goto L11;
}
si0=0U;
l1=si0;
si0=3054U;
l9=si0;
si0=3054U;
l3=si0;
L20:;
{
si0=l9;
si1=1U;
si0>>=(si1&31);
si1=l1;
si0+=si1;
l10=si0;
si1=12U;
si0*=si1;
l9=si0;
si1=2035376U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l11=si0;
si1=l9;
si2=2035380U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
l12=si1;
si0=si0 > si1;
if(si0){
goto L10;
}
si0=-1U;
si1=l11;
si2=l0;
si1=si1 > si2;
si2=l12;
si3=l0;
si2=si2 < si3;
si0=si2?si0:si1;
l11=si0;
si1=1U;
si0=si0 != si1;
if(si0){
goto L23;
}
si0=l10;
l3=si0;
goto L22;
L23:;
si0=l11;
si1=255U;
si0&=si1;
si1=255U;
si0=si0 != si1;
if(si0){
goto L21;
}
si0=l10;
si1=1U;
si0+=si1;
l1=si0;
L22:;
si0=l3;
si1=l1;
si0-=si1;
l9=si0;
si0=l3;
si1=l1;
si0=si0 > si1;
if(si0){
goto L20;
}
goto L19;
L21:;
}
si0=l9;
si1=2035384U;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=22U;
si0=si0 < si1;
if(si0){
goto L18;
}
L19:;
si0=l0;
si1=256U;
si0=si0 < si1;
if(si0){
goto L17;
}
si0=l0;
si1=65536U;
si0=si0 < si1;
if(si0){
goto L16;
}
si0=l2;
si1=499U;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l2;
si1=l0;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l2;
si1=l2;
si2=20U;
si1+=si2;
i32_store(&i->m0,(U64)si0+8U,si1);
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
sj1=34359738368ULL;
i64_store(&i->m0,(U64)si0+32U,sj1);
si0=l2;
si1=2U;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=1U;
l0=si0;
si0=l2;
si1=1U;
i32_store(&i->m0,(U64)si0+76U,si1);
si0=l2;
si1=1U;
i32_store(&i->m0,(U64)si0+68U,si1);
si0=l2;
si1=1U;
i32_store(&i->m0,(U64)si0+60U,si1);
si0=l2;
si1=1288364U;
i32_store(&i->m0,(U64)si0+56U,si1);
si0=l2;
si1=l2;
si2=24U;
si1+=si2;
i32_store(&i->m0,(U64)si0+72U,si1);
si0=l2;
si1=l2;
si2=8U;
si1+=si2;
i32_store(&i->m0,(U64)si0+64U,si1);
si0=l8;
si1=l7;
si2=l2;
si3=56U;
si2+=si3;
si0=f690(i,si0,si1,si2);
si0=!(si0);
if(si0){
goto L8;
}
goto L1;
L18:;
si0=l8;
si1=l0;
si2=l7;
si2=i32_load(&i->m0,(U64)si2+16U);
si0=TF(i->t0,si2,U32 (*)(rustpythonInstance*,U32,U32))(i,si0,si1);
si0=!(si0);
if(si0){
goto L8;
}
si0=1U;
l0=si0;
goto L1;
L17:;
si0=l2;
si1=499U;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l2;
si1=l0;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l2;
si1=l2;
si2=20U;
si1+=si2;
i32_store(&i->m0,(U64)si0+8U,si1);
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
sj1=8589934592ULL;
i64_store(&i->m0,(U64)si0+32U,sj1);
si0=l2;
si1=2U;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=1U;
l0=si0;
si0=l2;
si1=1U;
i32_store(&i->m0,(U64)si0+76U,si1);
si0=l2;
si1=1U;
i32_store(&i->m0,(U64)si0+68U,si1);
si0=l2;
si1=1U;
i32_store(&i->m0,(U64)si0+60U,si1);
si0=l2;
si1=1288388U;
i32_store(&i->m0,(U64)si0+56U,si1);
si0=l2;
si1=l2;
si2=24U;
si1+=si2;
i32_store(&i->m0,(U64)si0+72U,si1);
si0=l2;
si1=l2;
si2=8U;
si1+=si2;
i32_store(&i->m0,(U64)si0+64U,si1);
si0=l8;
si1=l7;
si2=l2;
si3=56U;
si2+=si3;
si0=f690(i,si0,si1,si2);
si0=!(si0);
if(si0){
goto L8;
}
goto L1;
L16:;
si0=l2;
si1=499U;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l2;
si1=l0;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l2;
si1=l2;
si2=20U;
si1+=si2;
i32_store(&i->m0,(U64)si0+8U,si1);
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
sj1=17179869184ULL;
i64_store(&i->m0,(U64)si0+32U,sj1);
si0=l2;
si1=2U;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=1U;
l0=si0;
si0=l2;
si1=1U;
i32_store(&i->m0,(U64)si0+76U,si1);
si0=l2;
si1=1U;
i32_store(&i->m0,(U64)si0+68U,si1);
si0=l2;
si1=1U;
i32_store(&i->m0,(U64)si0+60U,si1);
si0=l2;
si1=1288376U;
i32_store(&i->m0,(U64)si0+56U,si1);
si0=l2;
si1=l2;
si2=24U;
si1+=si2;
i32_store(&i->m0,(U64)si0+72U,si1);
si0=l2;
si1=l2;
si2=8U;
si1+=si2;
i32_store(&i->m0,(U64)si0+64U,si1);
si0=l8;
si1=l7;
si2=l2;
si3=56U;
si2+=si3;
si0=f690(i,si0,si1,si2);
si0=!(si0);
if(si0){
goto L8;
}
goto L1;
L12:;
si0=l8;
si1=1288356U;
si2=2U;
si3=l7;
si3=i32_load(&i->m0,(U64)si3+12U);
si0=TF(i->t0,si3,U32 (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
si0=!(si0);
if(si0){
goto L8;
}
si0=1U;
l0=si0;
goto L1;
L11:;
si0=l2;
si1=500U;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l2;
si1=l0;
i32_store8(&i->m0,(U64)si0+20U,si1);
si0=l2;
si1=l2;
si2=20U;
si1+=si2;
i32_store(&i->m0,(U64)si0+8U,si1);
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
sj1=8589934592ULL;
i64_store(&i->m0,(U64)si0+32U,sj1);
si0=l2;
si1=2U;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=1U;
l0=si0;
si0=l2;
si1=1U;
i32_store(&i->m0,(U64)si0+76U,si1);
si0=l2;
si1=1U;
i32_store(&i->m0,(U64)si0+68U,si1);
si0=l2;
si1=1U;
i32_store(&i->m0,(U64)si0+60U,si1);
si0=l2;
si1=1288388U;
i32_store(&i->m0,(U64)si0+56U,si1);
si0=l2;
si1=l2;
si2=24U;
si1+=si2;
i32_store(&i->m0,(U64)si0+72U,si1);
si0=l2;
si1=l2;
si2=8U;
si1+=si2;
i32_store(&i->m0,(U64)si0+64U,si1);
si0=l8;
si1=l7;
si2=l2;
si3=56U;
si2+=si3;
si0=f690(i,si0,si1,si2);
if(si0){
goto L1;
}
goto L8;
L10:;
si0=1996348U;
si1=37U;
si2=1996492U;
f673(i,si0,si1,si2);
UNREACHABLE;
L9:;
si0=l7;
si0=i32_load(&i->m0,(U64)si0+16U);
l1=si0;
si0=l0;
si1=92U;
si0=si0 == si1;
if(si0){
goto L25;
}
si0=l6;
si1=l0;
si0=si0 != si1;
if(si0){
goto L24;
}
L25:;
si0=l8;
si1=92U;
si2=l1;
si0=TF(i->t0,si2,U32 (*)(rustpythonInstance*,U32,U32))(i,si0,si1);
si0=!(si0);
if(si0){
goto L24;
}
si0=1U;
l0=si0;
goto L1;
L24:;
si0=l8;
si1=l0;
si2=l1;
si0=TF(i->t0,si2,U32 (*)(rustpythonInstance*,U32,U32))(i,si0,si1);
si0=!(si0);
if(si0){
goto L8;
}
si0=1U;
l0=si0;
goto L1;
L8:;
si0=l4;
si1=l5;
si0=si0 != si1;
if(si0){
goto L3;
}
}
L2:;
si0=0U;
l0=si0;
L1:;
si0=l2;
si1=80U;
si0+=si1;
i->g0=si0;
si0=l0;
L0:;
return si0;
}

void f1699(rustpythonInstance*i,U32 l0) {
U32 l1=0;
U32 l2=0;
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 si0,si1,si2,si3;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si1=-11U;
si0+=si1;
l2=si0;
si1=19U;
si2=l2;
si3=27U;
si2=si2 < si3;
si0=si2?si0:si1;
switch(si0){
case 0:
goto L27;
case 1:
goto L26;
case 2:
goto L25;
case 3:
goto L24;
case 4:
goto L23;
case 5:
goto L22;
case 6:
goto L21;
case 7:
goto L20;
case 8:
goto L19;
case 9:
goto L18;
case 10:
goto L17;
case 11:
goto L16;
case 12:
goto L15;
case 13:
goto L14;
case 14:
goto L13;
case 15:
goto L12;
case 16:
goto L11;
case 17:
goto L10;
case 18:
goto L9;
case 19:
goto L8;
case 20:
goto L7;
case 21:
goto L6;
case 22:
goto L5;
case 23:
goto L4;
case 24:
goto L3;
case 25:
goto L2;
default:
goto L28;
}
L28:;
si0=l0;
si1=12U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si0=!(si0);
if(si0){
goto L29;
}
si0=l2;
f1699(i,si0);
si0=l2;
f15271(i,si0);
L29:;
si0=l0;
si1=16U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si0=!(si0);
if(si0){
goto L30;
}
si0=l2;
f1699(i,si0);
si0=l2;
f15271(i,si0);
L30:;
si0=l0;
si1=20U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si0=!(si0);
if(si0){
goto L1;
}
si0=l2;
f1699(i,si0);
si0=l2;
f15271(i,si0);
goto L0;
L27:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+4U);
l3=si0;
si0=l0;
si1=12U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si0=!(si0);
if(si0){
goto L31;
}
si0=l3;
l2=si0;
L32:;
{
si0=l2;
f1643(i,si0);
si0=l2;
si1=48U;
si0+=si1;
l2=si0;
si0=l1;
si1=-1U;
si0+=si1;
l1=si0;
if(si0){
goto L32;
}
}
L31:;
si0=l0;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L1;
}
si0=l3;
f15271(i,si0);
goto L0;
L26:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+4U);
l2=si0;
f1699(i,si0);
si0=l2;
f15271(i,si0);
si0=l0;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
f1699(i,si0);
si0=l2;
f15271(i,si0);
goto L0;
L25:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+4U);
l2=si0;
f1699(i,si0);
si0=l2;
f15271(i,si0);
si0=l0;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
f1699(i,si0);
si0=l2;
f15271(i,si0);
goto L0;
L24:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+4U);
l2=si0;
f1699(i,si0);
si0=l2;
f15271(i,si0);
goto L0;
L23:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+4U);
l2=si0;
f1666(i,si0);
si0=l2;
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L33;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0);
f15271(i,si0);
L33:;
si0=l2;
si1=12U;
si0+=si1;
l1=si0;
f1666(i,si0);
si0=l2;
si1=16U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L34;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
f15271(i,si0);
L34:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+36U);
l1=si0;
si0=!(si0);
if(si0){
goto L35;
}
si0=l1;
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L36;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
f15271(i,si0);
L36:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+20U);
si0=!(si0);
if(si0){
goto L37;
}
si0=l1;
si1=20U;
si0+=si1;
f1700(i,si0);
L37:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+24U);
l3=si0;
si0=!(si0);
if(si0){
goto L38;
}
si0=l1;
si1=28U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L38;
}
si0=l3;
f15271(i,si0);
L38:;
si0=l1;
f15271(i,si0);
L35:;
si0=l2;
si1=24U;
si0+=si1;
l1=si0;
f1666(i,si0);
si0=l2;
si1=28U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L39;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
f15271(i,si0);
L39:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+40U);
l1=si0;
si0=!(si0);
if(si0){
goto L40;
}
si0=l1;
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L41;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
f15271(i,si0);
L41:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+20U);
si0=!(si0);
if(si0){
goto L42;
}
si0=l1;
si1=20U;
si0+=si1;
f1700(i,si0);
L42:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+24U);
l3=si0;
si0=!(si0);
if(si0){
goto L43;
}
si0=l1;
si1=28U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L43;
}
si0=l3;
f15271(i,si0);
L43:;
si0=l1;
f15271(i,si0);
L40:;
si0=l2;
f15271(i,si0);
si0=l0;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
f1699(i,si0);
si0=l2;
f15271(i,si0);
goto L0;
L22:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+4U);
l2=si0;
f1699(i,si0);
si0=l2;
f15271(i,si0);
si0=l0;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
f1699(i,si0);
si0=l2;
f15271(i,si0);
si0=l0;
si1=12U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
f1699(i,si0);
si0=l2;
f15271(i,si0);
goto L0;
L21:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+4U);
l3=si0;
si0=l0;
si1=12U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si0=!(si0);
if(si0){
goto L44;
}
si0=l3;
l2=si0;
L45:;
{
si0=l2;
si0=i32_load(&i->m0,(U64)si0);
si1=38U;
si0=si0 == si1;
if(si0){
goto L46;
}
si0=l2;
f1643(i,si0);
L46:;
si0=l2;
si1=48U;
si0+=si1;
l2=si0;
si0=l1;
si1=-1U;
si0+=si1;
l1=si0;
if(si0){
goto L45;
}
}
L44:;
si0=l0;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L47;
}
si0=l3;
f15271(i,si0);
L47:;
si0=l0;
si1=16U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=l0;
si1=24U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si0=!(si0);
if(si0){
goto L48;
}
si0=l3;
l2=si0;
L49:;
{
si0=l2;
f1643(i,si0);
si0=l2;
si1=48U;
si0+=si1;
l2=si0;
si0=l1;
si1=-1U;
si0+=si1;
l1=si0;
if(si0){
goto L49;
}
}
L48:;
si0=l0;
si1=20U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L1;
}
si0=l3;
f15271(i,si0);
goto L0;
L20:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+4U);
l3=si0;
si0=l0;
si1=12U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si0=!(si0);
if(si0){
goto L50;
}
si0=l3;
l2=si0;
L51:;
{
si0=l2;
f1643(i,si0);
si0=l2;
si1=48U;
si0+=si1;
l2=si0;
si0=l1;
si1=-1U;
si0+=si1;
l1=si0;
if(si0){
goto L51;
}
}
L50:;
si0=l0;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L1;
}
si0=l3;
f15271(i,si0);
goto L0;
L19:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+4U);
l2=si0;
f1699(i,si0);
si0=l2;
f15271(i,si0);
si0=l0;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
si0=l0;
si1=16U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si0=!(si0);
if(si0){
goto L52;
}
si0=0U;
l3=si0;
L53:;
{
si0=l4;
si1=l3;
si2=112U;
si1*=si2;
si0+=si1;
l2=si0;
f1643(i,si0);
si0=l2;
si1=48U;
si0+=si1;
f1643(i,si0);
si0=l2;
si1=96U;
si0+=si1;
l6=si0;
si0=l2;
si1=104U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si0=!(si0);
if(si0){
goto L54;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0+96U);
l2=si0;
L55:;
{
si0=l2;
f1643(i,si0);
si0=l2;
si1=48U;
si0+=si1;
l2=si0;
si0=l1;
si1=-1U;
si0+=si1;
l1=si0;
if(si0){
goto L55;
}
}
L54:;
si0=l3;
si1=1U;
si0+=si1;
l3=si0;
si0=l6;
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L56;
}
si0=l6;
si0=i32_load(&i->m0,(U64)si0);
f15271(i,si0);
L56:;
si0=l3;
si1=l5;
si0=si0 != si1;
if(si0){
goto L53;
}
}
L52:;
si0=l0;
si1=12U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L1;
}
si0=l4;
f15271(i,si0);
goto L0;
L18:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+4U);
l2=si0;
f1699(i,si0);
si0=l2;
f15271(i,si0);
si0=l0;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
si0=l0;
si1=16U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si0=!(si0);
if(si0){
goto L57;
}
si0=0U;
l3=si0;
L58:;
{
si0=l4;
si1=l3;
si2=112U;
si1*=si2;
si0+=si1;
l2=si0;
f1643(i,si0);
si0=l2;
si1=48U;
si0+=si1;
f1643(i,si0);
si0=l2;
si1=96U;
si0+=si1;
l6=si0;
si0=l2;
si1=104U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si0=!(si0);
if(si0){
goto L59;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0+96U);
l2=si0;
L60:;
{
si0=l2;
f1643(i,si0);
si0=l2;
si1=48U;
si0+=si1;
l2=si0;
si0=l1;
si1=-1U;
si0+=si1;
l1=si0;
if(si0){
goto L60;
}
}
L59:;
si0=l3;
si1=1U;
si0+=si1;
l3=si0;
si0=l6;
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L61;
}
si0=l6;
si0=i32_load(&i->m0,(U64)si0);
f15271(i,si0);
L61:;
si0=l3;
si1=l5;
si0=si0 != si1;
if(si0){
goto L58;
}
}
L57:;
si0=l0;
si1=12U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L1;
}
si0=l4;
f15271(i,si0);
goto L0;
L17:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+4U);
l2=si0;
f1699(i,si0);
si0=l2;
f15271(i,si0);
si0=l0;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
f1699(i,si0);
si0=l2;
f15271(i,si0);
si0=l0;
si1=12U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
si0=l0;
si1=20U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si0=!(si0);
if(si0){
goto L62;
}
si0=0U;
l3=si0;
L63:;
{
si0=l4;
si1=l3;
si2=112U;
si1*=si2;
si0+=si1;
l2=si0;
f1643(i,si0);
si0=l2;
si1=48U;
si0+=si1;
f1643(i,si0);
si0=l2;
si1=96U;
si0+=si1;
l6=si0;
si0=l2;
si1=104U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si0=!(si0);
if(si0){
goto L64;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0+96U);
l2=si0;
L65:;
{
si0=l2;
f1643(i,si0);
si0=l2;
si1=48U;
si0+=si1;
l2=si0;
si0=l1;
si1=-1U;
si0+=si1;
l1=si0;
if(si0){
goto L65;
}
}
L64:;
si0=l3;
si1=1U;
si0+=si1;
l3=si0;
si0=l6;
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L66;
}
si0=l6;
si0=i32_load(&i->m0,(U64)si0);
f15271(i,si0);
L66:;
si0=l3;
si1=l5;
si0=si0 != si1;
if(si0){
goto L63;
}
}
L62:;
si0=l0;
si1=16U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L1;
}
si0=l4;
f15271(i,si0);
goto L0;
L16:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+4U);
l2=si0;
f1699(i,si0);
si0=l2;
f15271(i,si0);
si0=l0;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
si0=l0;
si1=16U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si0=!(si0);
if(si0){
goto L67;
}
si0=0U;
l3=si0;
L68:;
{
si0=l4;
si1=l3;
si2=112U;
si1*=si2;
si0+=si1;
l2=si0;
f1643(i,si0);
si0=l2;
si1=48U;
si0+=si1;
f1643(i,si0);
si0=l2;
si1=96U;
si0+=si1;
l6=si0;
si0=l2;
si1=104U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si0=!(si0);
if(si0){
goto L69;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0+96U);
l2=si0;
L70:;
{
si0=l2;
f1643(i,si0);
si0=l2;
si1=48U;
si0+=si1;
l2=si0;
si0=l1;
si1=-1U;
si0+=si1;
l1=si0;
if(si0){
goto L70;
}
}
L69:;
si0=l3;
si1=1U;
si0+=si1;
l3=si0;
si0=l6;
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L71;
}
si0=l6;
si0=i32_load(&i->m0,(U64)si0);
f15271(i,si0);
L71:;
si0=l3;
si1=l5;
si0=si0 != si1;
if(si0){
goto L68;
}
}
L67:;
si0=l0;
si1=12U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L1;
}
si0=l4;
f15271(i,si0);
goto L0;
L15:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+4U);
l2=si0;
f1699(i,si0);
si0=l2;
f15271(i,si0);
goto L0;
L14:;
si0=l0;
si1=12U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si0=!(si0);
if(si0){
goto L1;
}
si0=l2;
f1699(i,si0);
si0=l2;
f15271(i,si0);
goto L0;
L13:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+4U);
l2=si0;
f1699(i,si0);
si0=l2;
f15271(i,si0);
goto L0;
L12:;
si0=l0;
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
f1699(i,si0);
si0=l2;
f15271(i,si0);
si0=l0;
si1=12U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L72;
}
si0=l0;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
f15271(i,si0);
L72:;
si0=l0;
si1=20U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=l0;
si1=28U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si0=!(si0);
if(si0){
goto L73;
}
si0=l3;
l2=si0;
L74:;
{
si0=l2;
f1643(i,si0);
si0=l2;
si1=48U;
si0+=si1;
l2=si0;
si0=l1;
si1=-1U;
si0+=si1;
l1=si0;
if(si0){
goto L74;
}
}
L73:;
si0=l0;
si1=24U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L1;
}
si0=l3;
f15271(i,si0);
goto L0;
L11:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+4U);
l2=si0;
f1699(i,si0);
si0=l2;
f15271(i,si0);
si0=l0;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=l0;
si1=16U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si0=!(si0);
if(si0){
goto L75;
}
si0=l3;
l2=si0;
L76:;
{
si0=l2;
f1643(i,si0);
si0=l2;
si1=48U;
si0+=si1;
l2=si0;
si0=l1;
si1=-1U;
si0+=si1;
l1=si0;
if(si0){
goto L76;
}
}
L75:;
si0=l0;
si1=12U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L77;
}
si0=l3;
f15271(i,si0);
L77:;
si0=l0;
si1=20U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si0=l0;
si1=28U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si0=!(si0);
if(si0){
goto L78;
}
si0=l6;
l2=si0;
L79:;
{
si0=l2;
si1=56U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=!(si0);
if(si0){
goto L80;
}
si0=l2;
si1=60U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L80;
}
si0=l3;
f15271(i,si0);
L80:;
si0=l2;
f1643(i,si0);
si0=l2;
si1=72U;
si0+=si1;
l2=si0;
si0=l1;
si1=-1U;
si0+=si1;
l1=si0;
if(si0){
goto L79;
}
}
L78:;
si0=l0;
si1=24U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L1;
}
si0=l6;
f15271(i,si0);
goto L0;
L10:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+4U);
l2=si0;
f1699(i,si0);
si0=l2;
f15271(i,si0);
si0=l0;
si1=16U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si0=!(si0);
if(si0){
goto L1;
}
si0=l2;
f1699(i,si0);
si0=l2;
f15271(i,si0);
goto L0;
L9:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+4U);
l3=si0;
si0=l0;
si1=12U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si0=!(si0);
if(si0){
goto L81;
}
si0=l3;
l2=si0;
L82:;
{
si0=l2;
f1643(i,si0);
si0=l2;
si1=48U;
si0+=si1;
l2=si0;
si0=l1;
si1=-1U;
si0+=si1;
l1=si0;
if(si0){
goto L82;
}
}
L81:;
si0=l0;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L1;
}
si0=l3;
f15271(i,si0);
goto L0;
L8:;
si0=l1;
si1=-2U;
si0+=si1;
l2=si0;
si1=4U;
si2=l2;
si3=9U;
si2=si2 < si3;
si0=si2?si0:si1;
si1=-2U;
si0+=si1;
switch(si0){
case 0:
goto L88;
case 1:
goto L87;
case 2:
goto L86;
case 3:
goto L85;
default:
goto L83;
}
L88:;
si0=l0;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L83;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+4U);
l3=si0;
goto L84;
L87:;
si0=l0;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L83;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+4U);
l3=si0;
goto L84;
L86:;
si0=l1;
si0=!(si0);
if(si0){
goto L83;
}
si0=l0;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L83;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+4U);
l3=si0;
goto L84;
L85:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+4U);
l3=si0;
si0=l0;
si1=12U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si0=!(si0);
if(si0){
goto L89;
}
si0=l3;
l2=si0;
L90:;
{
si0=l2;
f1642(i,si0);
si0=l2;
si1=24U;
si0+=si1;
l2=si0;
si0=l1;
si1=-1U;
si0+=si1;
l1=si0;
if(si0){
goto L90;
}
}
L89:;
si0=l0;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L83;
}
L84:;
si0=l3;
f15271(i,si0);
L83:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+32U);
l2=si0;
si0=!(si0);
if(si0){
goto L1;
}
si0=l0;
si1=36U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L1;
}
si0=l2;
f15271(i,si0);
goto L0;
L7:;
si0=l0;
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
f1699(i,si0);
si0=l2;
f15271(i,si0);
si0=l0;
si1=12U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L1;
}
si0=l0;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
f15271(i,si0);
goto L0;
L6:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+4U);
l2=si0;
f1699(i,si0);
si0=l2;
f15271(i,si0);
si0=l0;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
f1699(i,si0);
si0=l2;
f15271(i,si0);
goto L0;
L5:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+4U);
l2=si0;
f1699(i,si0);
si0=l2;
f15271(i,si0);
goto L0;
L4:;
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
goto L0;
L3:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+4U);
l3=si0;
si0=l0;
si1=12U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si0=!(si0);
if(si0){
goto L91;
}
si0=l3;
l2=si0;
L92:;
{
si0=l2;
f1643(i,si0);
si0=l2;
si1=48U;
si0+=si1;
l2=si0;
si0=l1;
si1=-1U;
si0+=si1;
l1=si0;
if(si0){
goto L92;
}
}
L91:;
si0=l0;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L1;
}
si0=l3;
f15271(i,si0);
goto L0;
L2:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+4U);
l3=si0;
si0=l0;
si1=12U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si0=!(si0);
if(si0){
goto L93;
}
si0=l3;
l2=si0;
L94:;
{
si0=l2;
f1643(i,si0);
si0=l2;
si1=48U;
si0+=si1;
l2=si0;
si0=l1;
si1=-1U;
si0+=si1;
l1=si0;
if(si0){
goto L94;
}
}
L93:;
si0=l0;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L1;
}
si0=l3;
f15271(i,si0);
L1:;
L0:;
}

void f1700(rustpythonInstance*i,U32 l0) {
U32 si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
l0=si0;
f1699(i,si0);
si0=l0;
f15271(i,si0);
L0:;
}

U32 f1701(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 si0,si1,si2,si3;
U64 sj1;
si0=i->g0;
si1=112U;
si0-=si1;
l2=si0;
i->g0=si0;
si0=l2;
si1=64U;
si0+=si1;
si1=40U;
si0+=si1;
si1=l0;
si2=40U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=64U;
si0+=si1;
si1=32U;
si0+=si1;
si1=l0;
si2=32U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=64U;
si0+=si1;
si1=24U;
si0+=si1;
si1=l0;
si2=24U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=64U;
si0+=si1;
si1=16U;
si0+=si1;
si1=l0;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=64U;
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
i64_store(&i->m0,(U64)si0+64U,sj1);
si0=l2;
si1=8U;
si0+=si1;
si1=l1;
si2=l2;
si3=64U;
si2+=si3;
f1594(i,si0,si1,si2);
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=56U;
si0=f15269(i,si0);
l1=si0;
if(si0){
goto L1;
}
si0=8U;
si1=56U;
f52(i,si0,si1);
UNREACHABLE;
L1:;
si0=l1;
si1=l2;
sj1=i64_load(&i->m0,(U64)si1+8U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si1=48U;
si0+=si1;
si1=l2;
si2=8U;
si1+=si2;
si2=48U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si1=40U;
si0+=si1;
si1=l2;
si2=8U;
si1+=si2;
si2=40U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si1=32U;
si0+=si1;
si1=l2;
si2=8U;
si1+=si2;
si2=32U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si1=24U;
si0+=si1;
si1=l2;
si2=8U;
si1+=si2;
si2=24U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si1=16U;
si0+=si1;
si1=l2;
si2=8U;
si1+=si2;
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
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
f15271(i,si0);
si0=l2;
si1=112U;
si0+=si1;
i->g0=si0;
si0=l1;
L0:;
return si0;
}

U32 f1702(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 si0,si1,si2,si3;
U64 sj1;
si0=i->g0;
si1=112U;
si0-=si1;
l2=si0;
i->g0=si0;
si0=l2;
si1=64U;
si0+=si1;
si1=40U;
si0+=si1;
si1=l0;
si2=40U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=64U;
si0+=si1;
si1=32U;
si0+=si1;
si1=l0;
si2=32U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=64U;
si0+=si1;
si1=24U;
si0+=si1;
si1=l0;
si2=24U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=64U;
si0+=si1;
si1=16U;
si0+=si1;
si1=l0;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=64U;
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
i64_store(&i->m0,(U64)si0+64U,sj1);
si0=l2;
si1=8U;
si0+=si1;
si1=l1;
si2=l2;
si3=64U;
si2+=si3;
f1595(i,si0,si1,si2);
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=56U;
si0=f15269(i,si0);
l1=si0;
if(si0){
goto L1;
}
si0=8U;
si1=56U;
f52(i,si0,si1);
UNREACHABLE;
L1:;
si0=l1;
si1=l2;
sj1=i64_load(&i->m0,(U64)si1+8U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si1=48U;
si0+=si1;
si1=l2;
si2=8U;
si1+=si2;
si2=48U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si1=40U;
si0+=si1;
si1=l2;
si2=8U;
si1+=si2;
si2=40U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si1=32U;
si0+=si1;
si1=l2;
si2=8U;
si1+=si2;
si2=32U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si1=24U;
si0+=si1;
si1=l2;
si2=8U;
si1+=si2;
si2=24U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si1=16U;
si0+=si1;
si1=l2;
si2=8U;
si1+=si2;
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
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
f15271(i,si0);
si0=l2;
si1=112U;
si0+=si1;
i->g0=si0;
si0=l1;
L0:;
return si0;
}

void f1703(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
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
U64 l29=0;
U32 si0,si1,si2,si3;
U64 sj0,sj1;
si0=i->g0;
si1=416U;
si0-=si1;
l4=si0;
i->g0=si0;
si0=l2;
sj0=i64_load(&i->m0,(U64)si0);
l5=sj0;
si0=(U32)(sj0);
l6=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+8U);
l2=si0;
if(si0){
goto L2;
}
si0=l4;
si1=0U;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l4;
sj1=8ULL;
i64_store(&i->m0,(U64)si0+8U,sj1);
goto L1;
L2:;
si0=l2;
si1=38347922U;
si0=si0 > si1;
if(si0){
goto L3;
}
si0=l2;
si1=56U;
si0*=si1;
l7=si0;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L3;
}
si0=l2;
si1=38347923U;
si0=si0 < si1;
si1=3U;
si0<<=(si1&31);
l8=si0;
si0=l7;
if(si0){
goto L5;
}
si0=l8;
l9=si0;
goto L4;
L5:;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=l8;
si1=l7;
si0=si0 <= si1;
if(si0){
goto L6;
}
si0=l8;
si1=l7;
si0=f15277(i,si0,si1);
l9=si0;
goto L4;
L6:;
si0=l7;
si0=f15269(i,si0);
l9=si0;
L4:;
si0=l9;
si0=!(si0);
if(si0){
goto L7;
}
si0=l4;
si1=0U;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l4;
si1=l9;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l3;
si1=5U;
si0+=si1;
l10=si0;
si0=l4;
si1=l2;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l2;
si1=48U;
si0*=si1;
l11=si0;
si0=l4;
si1=280U;
si0+=si1;
si1=4U;
si0|=si1;
l12=si0;
si0=l4;
si1=280U;
si0+=si1;
si1=8U;
si0+=si1;
l13=si0;
si0=l4;
si1=72U;
si0+=si1;
si1=24U;
si0+=si1;
l14=si0;
si0=l4;
si1=72U;
si0+=si1;
si1=4U;
si0|=si1;
l7=si0;
si0=l4;
si1=24U;
si0+=si1;
si1=16U;
si0+=si1;
l15=si0;
si0=l4;
si1=24U;
si0+=si1;
si1=32U;
si0+=si1;
l16=si0;
si0=l4;
si1=24U;
si0+=si1;
si1=40U;
si0+=si1;
l17=si0;
si0=l4;
si1=336U;
si0+=si1;
si1=2U;
si0+=si1;
l18=si0;
si0=0U;
l19=si0;
L8:;
{
si0=l4;
si1=24U;
si0+=si1;
si1=8U;
si0+=si1;
l9=si0;
si1=l6;
si2=l19;
si1+=si2;
l2=si1;
si2=12U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l15;
si1=l2;
si2=20U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=24U;
si0+=si1;
si1=24U;
si0+=si1;
l20=si0;
si1=l2;
si2=28U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l16;
si1=l2;
si2=36U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l17;
si1=l2;
si2=44U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=l2;
si2=4U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+24U,sj1);
si0=l2;
si0=i32_load(&i->m0,(U64)si0);
l8=si0;
si1=38U;
si0=si0 != si1;
if(si0){
goto L9;
}
si0=l11;
si1=-48U;
si0+=si1;
si1=l19;
si0=si0 == si1;
if(si0){
goto L1;
}
si0=l2;
si1=48U;
si0+=si1;
l2=si0;
si0=l11;
si1=l19;
si0-=si1;
si1=-48U;
si0+=si1;
si1=48U;
si0=DIV_U(si0,si1);
l7=si0;
L10:;
{
si0=l2;
f1684(i,si0);
si0=l2;
si1=48U;
si0+=si1;
l2=si0;
si0=l7;
si1=-1U;
si0+=si1;
l7=si0;
if(si0){
goto L10;
}
goto L1;
}
L9:;
si0=l7;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1+24U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l7;
si1=8U;
si0+=si1;
si1=l9;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l7;
si1=16U;
si0+=si1;
si1=l15;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l7;
si1=24U;
si0+=si1;
si1=l20;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l7;
si1=32U;
si0+=si1;
si1=l16;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l7;
si1=40U;
si0+=si1;
si1=l17;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=l8;
i32_store(&i->m0,(U64)si0+72U,si1);
si0=l8;
si1=-11U;
si0+=si1;
l2=si0;
si1=19U;
si2=l2;
si3=27U;
si2=si2 < si3;
si0=si2?si0:si1;
si1=-17U;
si0+=si1;
switch(si0){
case 0:
goto L14;
case 1:
goto L15;
case 2:
goto L13;
default:
goto L15;
}
L15:;
si0=l4;
si1=292U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=1U;
i32_store(&i->m0,(U64)si0+284U,si1);
si0=l4;
si1=1288472U;
i32_store(&i->m0,(U64)si0+280U,si1);
si0=l4;
si1=l4;
si2=408U;
si1+=si2;
i32_store(&i->m0,(U64)si0+288U,si1);
si0=l4;
si1=280U;
si0+=si1;
si1=1288580U;
f683(i,si0,si1);
UNREACHABLE;
L14:;
si0=l4;
si0=i32_load8_u(&i->m0,(U64)si0+92U);
l21=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+88U);
l8=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+76U);
l2=si0;
si0=l4;
si1=120U;
si0+=si1;
si1=8U;
si0+=si1;
l22=si0;
si1=l3;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=l3;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+120U,sj1);
si0=l4;
si1=136U;
si0+=si1;
si1=40U;
si0+=si1;
l20=si0;
si1=l2;
si2=40U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=136U;
si0+=si1;
si1=32U;
si0+=si1;
l23=si0;
si1=l2;
si2=32U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=136U;
si0+=si1;
si1=24U;
si0+=si1;
l24=si0;
si1=l2;
si2=24U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=136U;
si0+=si1;
si1=16U;
si0+=si1;
l25=si0;
si1=l2;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=136U;
si0+=si1;
si1=8U;
si0+=si1;
l26=si0;
si1=l2;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=l2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+136U,sj1);
si0=l4;
si1=280U;
si0+=si1;
si1=l1;
si2=l4;
si3=136U;
si2+=si3;
f1594(i,si0,si1,si2);
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=56U;
si0=f15269(i,si0);
l9=si0;
si0=!(si0);
if(si0){
goto L16;
}
si0=l9;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1+280U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l9;
si1=48U;
si0+=si1;
si1=l4;
si2=280U;
si1+=si2;
si2=48U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l9;
si1=40U;
si0+=si1;
si1=l4;
si2=280U;
si1+=si2;
si2=40U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l9;
si1=32U;
si0+=si1;
si1=l4;
si2=280U;
si1+=si2;
si2=32U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l9;
si1=24U;
si0+=si1;
si1=l4;
si2=280U;
si1+=si2;
si2=24U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l9;
si1=16U;
si0+=si1;
si1=l4;
si2=280U;
si1+=si2;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l9;
si1=8U;
si0+=si1;
si1=l13;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
f15271(i,si0);
si0=l8;
si0=!(si0);
if(si0){
goto L19;
}
si0=l8;
si0=i32_load(&i->m0,(U64)si0);
si1=29U;
si0=si0 == si1;
if(si0){
goto L21;
}
si0=l4;
si1=360U;
si0+=si1;
si1=40U;
si0+=si1;
si1=l8;
si2=40U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=360U;
si0+=si1;
si1=32U;
si0+=si1;
si1=l8;
si2=32U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=360U;
si0+=si1;
si1=24U;
si0+=si1;
si1=l8;
si2=24U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=360U;
si0+=si1;
si1=16U;
si0+=si1;
si1=l8;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=360U;
si0+=si1;
si1=8U;
si0+=si1;
si1=l8;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=l8;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+360U,sj1);
si0=l4;
si1=280U;
si0+=si1;
si1=l1;
si2=l4;
si3=360U;
si2+=si3;
f1594(i,si0,si1,si2);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+280U);
l2=si0;
goto L20;
L21:;
si0=l4;
si1=336U;
si0+=si1;
si1=16U;
si0+=si1;
si1=l8;
si2=20U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=336U;
si0+=si1;
si1=8U;
si0+=si1;
si1=l8;
si2=12U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=l8;
sj1=i64_load(&i->m0,(U64)si1+4U);
i64_store(&i->m0,(U64)si0+336U,sj1);
si0=l4;
si1=360U;
si0+=si1;
si1=l1;
si2=l4;
si3=336U;
si2+=si3;
si3=l3;
f1703(i,si0,si1,si2,si3);
si0=l12;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1+360U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l12;
si1=8U;
si0+=si1;
si1=l4;
si2=360U;
si1+=si2;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l12;
si1=16U;
si0+=si1;
si1=l4;
si2=360U;
si1+=si2;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l12;
si1=24U;
si0+=si1;
si1=l4;
si2=360U;
si1+=si2;
si2=24U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=29U;
l2=si0;
si0=l4;
si1=29U;
i32_store(&i->m0,(U64)si0+280U,si1);
si0=l8;
si0=i32_load(&i->m0,(U64)si0);
si1=29U;
si0=si0 == si1;
if(si0){
goto L20;
}
si0=l8;
f1699(i,si0);
L20:;
si0=l8;
f15271(i,si0);
si0=l26;
si1=l12;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l25;
si1=l12;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l24;
si1=l12;
si2=24U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l23;
si1=l12;
si2=32U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l20;
si1=l12;
si2=40U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=136U;
si0+=si1;
si1=48U;
si0+=si1;
l8=si0;
si1=l12;
si2=48U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=l12;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+136U,sj1);
si0=l2;
si1=38U;
si0=si0 != si1;
if(si0){
goto L18;
}
L19:;
si0=0U;
l20=si0;
goto L17;
L18:;
si0=l4;
si1=192U;
si0+=si1;
si1=48U;
si0+=si1;
l27=si0;
si1=l8;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=192U;
si0+=si1;
si1=40U;
si0+=si1;
l8=si0;
si1=l20;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=192U;
si0+=si1;
si1=32U;
si0+=si1;
l28=si0;
si1=l23;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=192U;
si0+=si1;
si1=24U;
si0+=si1;
l23=si0;
si1=l24;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=192U;
si0+=si1;
si1=16U;
si0+=si1;
l24=si0;
si1=l25;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=192U;
si0+=si1;
si1=8U;
si0+=si1;
l25=si0;
si1=l26;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1+136U);
i64_store(&i->m0,(U64)si0+192U,sj1);
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=56U;
si0=f15269(i,si0);
l20=si0;
si0=!(si0);
if(si0){
goto L12;
}
si0=l20;
si1=l2;
i32_store(&i->m0,(U64)si0,si1);
si0=l20;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1+192U);
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l20;
si1=12U;
si0+=si1;
si1=l25;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l20;
si1=20U;
si0+=si1;
si1=l24;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l20;
si1=28U;
si0+=si1;
si1=l23;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l20;
si1=36U;
si0+=si1;
si1=l28;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l20;
si1=44U;
si0+=si1;
si1=l8;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l20;
si1=52U;
si0+=si1;
si1=l27;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
L17:;
si0=l26;
si1=l22;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1+120U);
i64_store(&i->m0,(U64)si0+136U,sj1);
si0=28U;
l8=si0;
goto L11;
L16:;
si0=8U;
si1=56U;
f52(i,si0,si1);
UNREACHABLE;
L13:;
si0=l4;
si1=136U;
si0+=si1;
si1=8U;
si0+=si1;
si1=l9;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l13;
si1=l14;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=280U;
si0+=si1;
si1=16U;
si0+=si1;
si1=l14;
si2=16U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l18;
si1=l10;
si2=2U;
si1+=si2;
si1=i32_load8_u(&i->m0,(U64)si1);
i32_store8(&i->m0,(U64)si0,si1);
si0=l4;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1+24U);
i64_store(&i->m0,(U64)si0+136U,sj1);
si0=l4;
si1=l14;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+280U,sj1);
si0=l4;
si1=l10;
si1=i32_load16_u(&i->m0,(U64)si1);
i32_store16(&i->m0,(U64)si0+336U,si1);
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
l20=si0;
si0=l3;
si0=i32_load8_u(&i->m0,(U64)si0+4U);
l21=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+92U);
l9=si0;
si0=l4;
si1=360U;
si0+=si1;
si1=8U;
si0+=si1;
si1=l13;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=l13;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+360U,sj1);
si0=l3;
sj0=i64_load(&i->m0,(U64)si0+8U);
l29=sj0;
goto L11;
L12:;
si0=8U;
si1=56U;
f52(i,si0,si1);
UNREACHABLE;
L11:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+16U);
l2=si0;
si1=l4;
si1=i32_load(&i->m0,(U64)si1+12U);
si0=si0 != si1;
if(si0){
goto L22;
}
si0=l4;
si1=8U;
si0+=si1;
si1=l2;
f1669(i,si0,si1);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+16U);
l2=si0;
L22:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+8U);
si1=l2;
si2=56U;
si1*=si2;
si0+=si1;
l2=si0;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1+136U);
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l2;
si1=l8;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=l21;
i32_store8(&i->m0,(U64)si0+28U,si1);
si0=l2;
si1=l20;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l2;
si1=l9;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l2;
si1=l4;
si1=i32_load16_u(&i->m0,(U64)si1+336U);
i32_store16(&i->m0,(U64)si0+29U,si1);
si0=l2;
sj1=l29;
i64_store(&i->m0,(U64)si0+32U,sj1);
si0=l2;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1+360U);
i64_store(&i->m0,(U64)si0+40U,sj1);
si0=l2;
si1=31U;
si0+=si1;
si1=l18;
si1=i32_load8_u(&i->m0,(U64)si1);
i32_store8(&i->m0,(U64)si0,si1);
si0=l2;
si1=48U;
si0+=si1;
si1=l4;
si2=360U;
si1+=si2;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=12U;
si0+=si1;
si1=l4;
si2=136U;
si1+=si2;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=l4;
si1=i32_load(&i->m0,(U64)si1+16U);
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+72U);
si1=-11U;
si0+=si1;
l2=si0;
si1=19U;
si2=l2;
si3=27U;
si2=si2 < si3;
si0=si2?si0:si1;
si1=-17U;
si0+=si1;
switch(si0){
case 0:
goto L23;
case 1:
goto L24;
case 2:
goto L23;
default:
goto L24;
}
L24:;
si0=l4;
si1=72U;
si0+=si1;
f1699(i,si0);
L23:;
si0=l11;
si1=l19;
si2=48U;
si1+=si2;
l19=si1;
si0=si0 != si1;
if(si0){
goto L8;
}
goto L1;
}
L7:;
si0=l8;
si1=l7;
f52(i,si0,si1);
UNREACHABLE;
L3:;
f53(i);
UNREACHABLE;
L1:;
sj0=l5;
sj1=4294967296ULL;
si0=sj0 < sj1;
if(si0){
goto L25;
}
si0=l6;
f15271(i,si0);
L25:;
si0=l0;
si1=l3;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=16U;
si0+=si1;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1+8U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=8U;
si0+=si1;
si1=l3;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=24U;
si0+=si1;
si1=l4;
si2=8U;
si1+=si2;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=416U;
si0+=si1;
i->g0=si0;
L0:;
}

void f1704(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 si0,si1,si2;
si0=l0;
si1=l1;
si2=l2;
f1630(i,si0,si1,si2);
L0:;
}

U32 f1705(rustpythonInstance*i,U32 l0,U32 l1) {
U32 si0,si1,si2;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
l0=si0;
si0=i32_load(&i->m0,(U64)si0);
si1=l0;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
si2=l1;
si0=f749(i,si0,si1,si2);
L0:;
return si0;
}

U32 f1706(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U64 l3=0;
F64 l4=0;
F64 l5=0;
U32 si0,si1,si2,si3,si4;
U64 sj0,sj1;
F64 sd0,sd1,sd2;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+28U);
si1=1U;
si0&=si1;
l2=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
l0=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+8U);
si0=!(si0);
if(si0){
goto L1;
}
si0=l1;
si1=l0;
sd1=f64_load(&i->m0,(U64)si1);
si2=l2;
si3=l1;
si4=12U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si0=f720(i,si0,sd1,si2,si3);
goto L0;
L1:;
si0=l0;
sj0=i64_load(&i->m0,(U64)si0);
l3=sj0;
sd0=f64_reinterpret_i64(sj0);
l4=sd0;
sj0=l3;
sj1=9223372036854775807ULL;
sj0&=sj1;
sd0=f64_reinterpret_i64(sj0);
l5=sd0;
sd1=10000000000000000;
si0=sd0 >= sd1;
if(si0){
goto L2;
}
sd0=l5;
sd1=0;
si0=sd0 != sd1;
sd1=l5;
sd2=0.0001;
si1=sd1 < sd2;
si0&=si1;
if(si0){
goto L2;
}
si0=l1;
sd1=l4;
si2=l2;
si3=1U;
si0=f723(i,si0,sd1,si2,si3);
goto L0;
L2:;
si0=l1;
sd1=l4;
si2=l2;
si3=0U;
si0=f727(i,si0,sd1,si2,si3);
L0:;
return si0;
}

U32 f1707(rustpythonInstance*i,U32 l0,U32 l1) {
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
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=i32_load8_u(&i->m0,(U64)si0+16U);
if(si0){
goto L2;
}
si0=1U;
l0=si0;
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
si1=l3;
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
l0=si0;
goto L1;
L2:;
si0=l3;
si1=l1;
si0=f983(i,si0,si1);
l0=si0;
L1:;
si0=l2;
si1=80U;
si0+=si1;
i->g0=si0;
si0=l0;
L0:;
return si0;
}

U32 f1708(rustpythonInstance*i,U32 l0,U32 l1) {
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

U32 f1709(rustpythonInstance*i,U32 l0,U32 l1) {
U32 si0,si1,si2;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
si0=i32_load8_u(&i->m0,(U64)si0);
if(si0){
goto L1;
}
si0=l1;
si1=1104164U;
si2=5U;
si0=f713(i,si0,si1,si2);
goto L0;
L1:;
si0=l1;
si1=1104169U;
si2=4U;
si0=f713(i,si0,si1,si2);
L0:;
return si0;
}

U32 f1710(rustpythonInstance*i,U32 l0,U32 l1) {
U32 si0,si1;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
si1=l1;
si0=f1711(i,si0,si1);
L0:;
return si0;
}

U32 f1711(rustpythonInstance*i,U32 l0,U32 l1) {
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
si1=-2U;
si0+=si1;
l3=si0;
si1=4U;
si2=l3;
si3=9U;
si2=si2 < si3;
si0=si2?si0:si1;
switch(si0){
case 0:
goto L16;
case 1:
goto L15;
case 2:
goto L14;
case 3:
goto L13;
case 4:
goto L12;
case 5:
goto L11;
case 6:
goto L10;
case 7:
goto L9;
case 8:
goto L8;
default:
goto L16;
}
L16:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=1288628U;
si2=4U;
si3=l1;
si4=24U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si3=i32_load(&i->m0,(U64)si3+12U);
si0=TF(i->t0,si3,U32 (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
l1=si0;
goto L1;
L15:;
si0=l2;
si1=l0;
si2=4U;
si1+=si2;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l2;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+20U);
si2=1288924U;
si3=4U;
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
si2=1288928U;
si0=f716(i,si0,si1,si2);
l1=si0;
si0=l2;
si0=i32_load8_u(&i->m0,(U64)si0+24U);
l0=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
if(si0){
goto L17;
}
si0=l0;
si1=255U;
si0&=si1;
si1=0U;
si0=si0 != si1;
l1=si0;
goto L1;
L17:;
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
L14:;
si0=l2;
si1=l0;
si2=4U;
si1+=si2;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l2;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+20U);
si2=1288944U;
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
si2=1288888U;
si0=f716(i,si0,si1,si2);
l1=si0;
si0=l2;
si0=i32_load8_u(&i->m0,(U64)si0+24U);
l0=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
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
si0=!(si0);
if(si0){
goto L3;
}
goto L1;
L13:;
si0=l2;
si1=l0;
si2=4U;
si1+=si2;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l2;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+20U);
si2=1288947U;
si3=5U;
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
si2=1288952U;
si0=f716(i,si0,si1,si2);
l1=si0;
si0=l2;
si0=i32_load8_u(&i->m0,(U64)si0+24U);
l0=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
if(si0){
goto L19;
}
si0=l0;
si1=255U;
si0&=si1;
si1=0U;
si0=si0 != si1;
l1=si0;
goto L1;
L19:;
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
goto L4;
}
si0=l2;
si0=i32_load8_u(&i->m0,(U64)si0+25U);
si1=255U;
si0&=si1;
si0=!(si0);
if(si0){
goto L4;
}
si0=l0;
si0=i32_load8_u(&i->m0,(U64)si0+28U);
si1=4U;
si0&=si1;
if(si0){
goto L4;
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
goto L4;
}
goto L1;
L12:;
si0=l2;
si1=l0;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l2;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+20U);
si2=1288904U;
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
si2=1288968U;
si0=f716(i,si0,si1,si2);
l1=si0;
si0=l2;
si0=i32_load8_u(&i->m0,(U64)si0+24U);
l0=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
if(si0){
goto L20;
}
si0=l0;
si1=255U;
si0&=si1;
si1=0U;
si0=si0 != si1;
l1=si0;
goto L1;
L20:;
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
goto L5;
}
si0=l2;
si0=i32_load8_u(&i->m0,(U64)si0+25U);
si1=255U;
si0&=si1;
si0=!(si0);
if(si0){
goto L5;
}
si0=l0;
si0=i32_load8_u(&i->m0,(U64)si0+28U);
si1=4U;
si0&=si1;
if(si0){
goto L5;
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
goto L5;
}
goto L1;
L11:;
si0=l2;
si1=l0;
si2=4U;
si1+=si2;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l2;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+20U);
si2=1288984U;
si3=5U;
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
si2=1288992U;
si0=f716(i,si0,si1,si2);
l1=si0;
si0=l2;
si0=i32_load8_u(&i->m0,(U64)si0+24U);
l0=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
if(si0){
goto L21;
}
si0=l0;
si1=255U;
si0&=si1;
si1=0U;
si0=si0 != si1;
l1=si0;
goto L1;
L21:;
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
si0=!(si0);
if(si0){
goto L6;
}
goto L1;
L10:;
si0=l2;
si1=l0;
si2=8U;
si1+=si2;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l2;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+20U);
si2=1289008U;
si3=5U;
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
si2=1289016U;
si0=f716(i,si0,si1,si2);
l1=si0;
si0=l2;
si0=i32_load8_u(&i->m0,(U64)si0+24U);
l0=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
if(si0){
goto L22;
}
si0=l0;
si1=255U;
si0&=si1;
si1=0U;
si0=si0 != si1;
l1=si0;
goto L1;
L22:;
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
goto L7;
}
si0=l2;
si0=i32_load8_u(&i->m0,(U64)si0+25U);
si1=255U;
si0&=si1;
si0=!(si0);
if(si0){
goto L7;
}
si0=l0;
si0=i32_load8_u(&i->m0,(U64)si0+28U);
si1=4U;
si0&=si1;
if(si0){
goto L7;
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
goto L7;
}
goto L1;
L9:;
si0=l2;
si1=l0;
si2=16U;
si1+=si2;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=1289032U;
si2=7U;
si3=l1;
si4=24U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si3=i32_load(&i->m0,(U64)si3+12U);
si0=TF(i->t0,si3,U32 (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
l3=si0;
si0=l2;
si1=0U;
i32_store8(&i->m0,(U64)si0+21U,si1);
si0=l2;
si1=l3;
i32_store8(&i->m0,(U64)si0+20U,si1);
si0=l2;
si1=l1;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l2;
si1=16U;
si0+=si1;
si1=1289039U;
si2=4U;
si3=l0;
si4=8U;
si3+=si4;
si4=1289044U;
si0=f715(i,si0,si1,si2,si3,si4);
si1=1289060U;
si2=4U;
si3=l2;
si4=12U;
si3+=si4;
si4=1289016U;
si0=f715(i,si0,si1,si2,si3,si4);
l3=si0;
si0=l2;
si0=i32_load8_u(&i->m0,(U64)si0+20U);
l0=si0;
si0=l2;
si0=i32_load8_u(&i->m0,(U64)si0+21U);
if(si0){
goto L23;
}
si0=l0;
si1=255U;
si0&=si1;
si1=0U;
si0=si0 != si1;
l1=si0;
goto L1;
L23:;
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
goto L24;
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
L24:;
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
L8:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=1289064U;
si2=8U;
si3=l1;
si4=24U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si3=i32_load(&i->m0,(U64)si3+12U);
si0=TF(i->t0,si3,U32 (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
l1=si0;
goto L1;
L7:;
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
L5:;
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
L4:;
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

U32 f1712(rustpythonInstance*i,U32 l0,U32 l1) {
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
sj0=i64_load8_u(&i->m0,(U64)si0);
si1=1U;
si2=l1;
si0=f787(i,sj0,si1,si2);
l0=si0;
goto L1;
L4:;
si0=l0;
si0=i32_load8_u(&i->m0,(U64)si0);
l3=si0;
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
si3=l3;
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
si0=l3;
si1=255U;
si0&=si1;
l4=si0;
si1=4U;
si0>>=(si1&31);
l3=si0;
si0=l4;
si1=16U;
si0=si0 >= si1;
if(si0){
goto L5;
}
goto L2;
}
L3:;
si0=l0;
si0=i32_load8_u(&i->m0,(U64)si0);
l3=si0;
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
si3=l3;
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
si0=l3;
si1=255U;
si0&=si1;
l4=si0;
si1=4U;
si0>>=(si1&31);
l3=si0;
si0=l4;
si1=16U;
si0=si0 >= si1;
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

U32 f1713(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
F64 l3=0;
U32 si0,si1,si2,si3,si4;
F64 sd0,sd1;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+28U);
si1=1U;
si0&=si1;
l2=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
sd0=f64_load(&i->m0,(U64)si0);
l3=sd0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+8U);
si0=!(si0);
if(si0){
goto L1;
}
si0=l1;
sd1=l3;
si2=l2;
si3=l1;
si4=12U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si0=f720(i,si0,sd1,si2,si3);
goto L0;
L1:;
si0=l1;
sd1=l3;
si2=l2;
si3=0U;
si0=f723(i,si0,sd1,si2,si3);
L0:;
return si0;
}

U32 f1714(rustpythonInstance*i,U32 l0,U32 l1) {
U32 si0,si1;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
si1=l1;
si0=f1715(i,si0,si1);
L0:;
return si0;
}

U32 f1715(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 l8=0;
U32 l9=0;
U32 si0,si1,si2,si3,si4;
U64 sj1;
F64 sd0,sd1;
si0=i->g0;
si1=112U;
si0-=si1;
l2=si0;
i->g0=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
si1=-2U;
si0+=si1;
l3=si0;
si1=4U;
si2=l3;
si3=9U;
si2=si2 < si3;
si0=si2?si0:si1;
switch(si0){
case 0:
goto L14;
case 1:
goto L13;
case 2:
goto L12;
case 3:
goto L11;
case 4:
goto L10;
case 5:
goto L7;
case 6:
goto L9;
case 7:
goto L6;
case 8:
goto L8;
default:
goto L14;
}
L14:;
si0=l1;
si1=1288628U;
si2=4U;
si0=f713(i,si0,si1,si2);
l3=si0;
goto L1;
L13:;
si0=l1;
si1=1288637U;
si2=1288632U;
si3=l0;
si3=i32_load8_u(&i->m0,(U64)si3+4U);
l0=si3;
si1=si3?si1:si2;
si2=4U;
si3=5U;
si4=l0;
si2=si4?si2:si3;
si0=f713(i,si0,si1,si2);
l3=si0;
goto L1;
L12:;
si0=l2;
si1=24U;
si0+=si1;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+4U);
l4=si1;
si2=l0;
si3=12U;
si2+=si3;
si2=i32_load(&i->m0,(U64)si2);
l0=si2;
si3=0U;
f2438(i,si0,si1,si2,si3);
si0=l2;
si1=40U;
si0+=si1;
si1=l0;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=l4;
i32_store(&i->m0,(U64)si0+36U,si1);
si0=1U;
l3=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+20U);
l5=si0;
si1=34U;
si2=39U;
si3=l2;
si3=i32_load8_u(&i->m0,(U64)si3+32U);
si1=si3?si1:si2;
l6=si1;
si2=l1;
si3=24U;
si2+=si3;
si2=i32_load(&i->m0,(U64)si2);
l7=si2;
si2=i32_load(&i->m0,(U64)si2+16U);
l8=si2;
si0=TF(i->t0,si2,U32 (*)(rustpythonInstance*,U32,U32))(i,si0,si1);
if(si0){
goto L1;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0+24U);
si0=!(si0);
if(si0){
goto L16;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0+28U);
si1=l0;
si0=si0 == si1;
if(si0){
goto L15;
}
L16:;
si0=l2;
si1=24U;
si0+=si1;
si1=l1;
si0=f1698(i,si0,si1);
if(si0){
goto L1;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=l6;
si2=l1;
si2=i32_load(&i->m0,(U64)si2+24U);
si2=i32_load(&i->m0,(U64)si2+16U);
si0=TF(i->t0,si2,U32 (*)(rustpythonInstance*,U32,U32))(i,si0,si1);
l3=si0;
goto L1;
L15:;
si0=l5;
si1=l4;
si2=l0;
si3=l7;
si3=i32_load(&i->m0,(U64)si3+12U);
si0=TF(i->t0,si3,U32 (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
if(si0){
goto L1;
}
si0=l5;
si1=l6;
si2=l8;
si0=TF(i->t0,si2,U32 (*)(rustpythonInstance*,U32,U32))(i,si0,si1);
l3=si0;
goto L1;
L11:;
si0=l0;
si1=12U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+4U);
l6=si0;
si0=3U;
l3=si0;
si0=0U;
l0=si0;
si0=0U;
l8=si0;
si0=0U;
l9=si0;
L17:;
{
si0=l3;
l4=si0;
si0=l7;
si1=l0;
si0=si0 != si1;
if(si0){
goto L18;
}
si0=l8;
si1=l9;
si2=l8;
si2=!(si2);
si3=l9;
si4=0U;
si3=si3 != si4;
si2&=si3;
l0=si2;
si0=si2?si0:si1;
l3=si0;
si1=0U;
si0=(U32)((I32)si0<(I32)si1);
si1=l4;
si2=l3;
si1+=si2;
l3=si1;
si2=l4;
si1=(U32)((I32)si1<(I32)si2);
si0^=si1;
if(si0){
goto L5;
}
si0=l2;
si1=1U;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l2;
si1=l0;
i32_store8(&i->m0,(U64)si0+32U,si1);
si0=l2;
si1=l3;
si2=-3U;
si1+=si2;
i32_store(&i->m0,(U64)si0+28U,si1);
goto L2;
L18:;
si0=2U;
l3=si0;
si0=l6;
si1=l0;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
l5=si0;
si1=-9U;
si0+=si1;
switch(si0){
case 0:
goto L19;
case 1:
goto L19;
case 2:
goto L22;
case 3:
goto L22;
case 4:
goto L19;
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
goto L22;
case 23:
goto L22;
case 24:
goto L22;
case 25:
goto L20;
case 26:
goto L22;
case 27:
goto L22;
case 28:
goto L22;
case 29:
goto L22;
case 30:
goto L21;
default:
goto L23;
}
L23:;
si0=l5;
si1=92U;
si0=si0 == si1;
if(si0){
goto L19;
}
L22:;
si0=1U;
si1=4U;
si2=l5;
si3=-32U;
si2+=si3;
si3=255U;
si2&=si3;
si3=95U;
si2=si2 < si3;
si0=si2?si0:si1;
l3=si0;
goto L19;
L21:;
si0=1U;
l3=si0;
si0=l9;
si1=1U;
si0+=si1;
l9=si0;
goto L19;
L20:;
si0=1U;
l3=si0;
si0=l8;
si1=1U;
si0+=si1;
l8=si0;
L19:;
si0=l0;
si1=1U;
si0+=si1;
l0=si0;
si0=l3;
si1=0U;
si0=(U32)((I32)si0<(I32)si1);
si1=l4;
si2=l3;
si1+=si2;
l3=si1;
si2=l4;
si1=(U32)((I32)si1<(I32)si2);
si0=si0 == si1;
if(si0){
goto L17;
}
}
si0=l2;
si1=0U;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l2;
si1=l8;
si1=!(si1);
si2=l9;
si3=0U;
si2=si2 != si3;
si1&=si2;
i32_store8(&i->m0,(U64)si0+32U,si1);
goto L2;
L10:;
si0=l2;
si1=501U;
i32_store(&i->m0,(U64)si0+92U,si1);
si0=l2;
si1=l0;
i32_store(&i->m0,(U64)si0+88U,si1);
si0=l1;
si1=24U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l0=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+20U);
l3=si0;
si0=l2;
sj1=1ULL;
i64_store(&i->m0,(U64)si0+36U,sj1);
si0=l2;
si1=1U;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l2;
si1=1288792U;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l2;
si1=l2;
si2=88U;
si1+=si2;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l3;
si1=l0;
si2=l2;
si3=24U;
si2+=si3;
si0=f690(i,si0,si1,si2);
l3=si0;
goto L1;
L9:;
si0=l2;
si1=24U;
si0+=si1;
si1=l0;
sd1=f64_load(&i->m0,(U64)si1+8U);
f2423(i,si0,sd1);
si0=l1;
si1=l2;
si1=i32_load(&i->m0,(U64)si1+24U);
l0=si1;
si2=l2;
si2=i32_load(&i->m0,(U64)si2+32U);
si0=f713(i,si0,si1,si2);
l3=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+28U);
si0=!(si0);
if(si0){
goto L1;
}
si0=l0;
f15271(i,si0);
goto L1;
L8:;
si0=l1;
si1=1288872U;
si2=3U;
si0=f713(i,si0,si1,si2);
l3=si0;
goto L1;
L7:;
si0=1U;
l3=si0;
si0=l0;
si1=12U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si1=1U;
si0=si0 == si1;
if(si0){
goto L4;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+20U);
l4=si0;
si1=1288800U;
si2=1U;
si3=l1;
si4=24U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si3=i32_load(&i->m0,(U64)si3+12U);
l7=si3;
si0=TF(i->t0,si3,U32 (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
if(si0){
goto L1;
}
si0=l5;
si0=!(si0);
if(si0){
goto L3;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+4U);
l0=si0;
si1=l1;
si0=f1715(i,si0,si1);
if(si0){
goto L1;
}
si0=l0;
si1=24U;
si0+=si1;
l4=si0;
si0=l5;
si1=24U;
si0*=si1;
si1=-24U;
si0+=si1;
l0=si0;
L24:;
{
si0=l0;
if(si0){
goto L25;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+20U);
l4=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+24U);
si0=i32_load(&i->m0,(U64)si0+12U);
l7=si0;
goto L3;
L25:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=1288802U;
si2=2U;
si3=l1;
si3=i32_load(&i->m0,(U64)si3+24U);
si3=i32_load(&i->m0,(U64)si3+12U);
si0=TF(i->t0,si3,U32 (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
if(si0){
goto L1;
}
si0=l0;
si1=-24U;
si0+=si1;
l0=si0;
si0=l4;
si1=l1;
si0=f1715(i,si0,si1);
l5=si0;
si0=l4;
si1=24U;
si0+=si1;
l4=si0;
si0=l5;
if(si0){
goto L1;
}
goto L24;
}
L6:;
si0=l2;
si1=l0;
si2=8U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=l0;
si2=16U;
si1+=si2;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
sd0=f64_load(&i->m0,(U64)si0+8U);
sd1=0;
si0=sd0 == sd1;
if(si0){
goto L26;
}
si0=l2;
si1=20U;
si0+=si1;
si1=502U;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=502U;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l2;
si1=l2;
si2=4U;
si1+=si2;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l2;
si1=l2;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l2;
si1=84U;
si0+=si1;
si1=3U;
i32_store8(&i->m0,(U64)si0,si1);
si0=l2;
si1=80U;
si0+=si1;
si1=1U;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=72U;
si0+=si1;
sj1=4294967328ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=64U;
si0+=si1;
si1=2U;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=2U;
i32_store(&i->m0,(U64)si0+56U,si1);
si0=l2;
si1=3U;
i32_store8(&i->m0,(U64)si0+52U,si1);
si0=l2;
si1=0U;
i32_store(&i->m0,(U64)si0+48U,si1);
si0=l2;
sj1=32ULL;
i64_store(&i->m0,(U64)si0+40U,sj1);
si0=l2;
si1=2U;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l2;
si1=2U;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l1;
si1=24U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l0=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+20U);
l3=si0;
si0=l2;
si1=2U;
i32_store(&i->m0,(U64)si0+108U,si1);
si0=l2;
si1=2U;
i32_store(&i->m0,(U64)si0+100U,si1);
si0=l2;
si1=3U;
i32_store(&i->m0,(U64)si0+92U,si1);
si0=l2;
si1=1288828U;
i32_store(&i->m0,(U64)si0+88U,si1);
si0=l2;
si1=l2;
si2=24U;
si1+=si2;
i32_store(&i->m0,(U64)si0+104U,si1);
si0=l2;
si1=l2;
si2=8U;
si1+=si2;
i32_store(&i->m0,(U64)si0+96U,si1);
si0=l3;
si1=l0;
si2=l2;
si3=88U;
si2+=si3;
si0=f690(i,si0,si1,si2);
l3=si0;
goto L1;
L26:;
si0=l2;
si1=502U;
i32_store(&i->m0,(U64)si0+92U,si1);
si0=l1;
si1=24U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l0=si0;
si0=l2;
si1=l2;
si2=4U;
si1+=si2;
i32_store(&i->m0,(U64)si0+88U,si1);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+20U);
l3=si0;
si0=l2;
sj1=1ULL;
i64_store(&i->m0,(U64)si0+36U,sj1);
si0=l2;
si1=2U;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l2;
si1=1288856U;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l2;
si1=l2;
si2=88U;
si1+=si2;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l3;
si1=l0;
si2=l2;
si3=24U;
si2+=si3;
si0=f690(i,si0,si1,si2);
l3=si0;
goto L1;
L5:;
si0=l2;
si1=0U;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l2;
si1=l0;
i32_store8(&i->m0,(U64)si0+32U,si1);
goto L2;
L4:;
si0=l2;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+4U);
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l2;
si1=503U;
i32_store(&i->m0,(U64)si0+92U,si1);
si0=l1;
si1=24U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l0=si0;
si0=l2;
si1=l2;
si2=8U;
si1+=si2;
i32_store(&i->m0,(U64)si0+88U,si1);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+20U);
l3=si0;
si0=l2;
sj1=1ULL;
i64_store(&i->m0,(U64)si0+36U,sj1);
si0=l2;
si1=2U;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l2;
si1=1288808U;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l2;
si1=l2;
si2=88U;
si1+=si2;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l3;
si1=l0;
si2=l2;
si3=24U;
si2+=si3;
si0=f690(i,si0,si1,si2);
l3=si0;
goto L1;
L3:;
si0=l4;
si1=1288801U;
si2=1U;
si3=l7;
si0=TF(i->t0,si3,U32 (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
l3=si0;
goto L1;
L2:;
si0=l2;
si1=40U;
si0+=si1;
si1=l7;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=l6;
i32_store(&i->m0,(U64)si0+36U,si1);
si0=l2;
si1=l2;
si2=24U;
si1+=si2;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l2;
si1=88U;
si0+=si1;
si1=l2;
si2=8U;
si1+=si2;
f2440(i,si0,si1);
si0=l2;
si0=i32_load(&i->m0,(U64)si0+88U);
l0=si0;
if(si0){
goto L27;
}
si0=1288641U;
si1=43U;
si2=1288776U;
f673(i,si0,si1,si2);
UNREACHABLE;
L27:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+92U);
l4=si0;
si0=l1;
si1=l0;
si2=l2;
si2=i32_load(&i->m0,(U64)si2+96U);
si0=f713(i,si0,si1,si2);
l3=si0;
si0=l4;
si0=!(si0);
if(si0){
goto L1;
}
si0=l0;
f15271(i,si0);
L1:;
si0=l2;
si1=112U;
si0+=si1;
i->g0=si0;
si0=l3;
L0:;
return si0;
}

void f1716(rustpythonInstance*i,U32 l0) {
L0:;
}

void f1717(rustpythonInstance*i,U32 l0) {
L0:;
}

void f1718(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4) {
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
si2=1288908U;
si3=l5;
si4=4U;
si3+=si4;
si4=1288908U;
si5=l5;
si6=8U;
si5+=si6;
si6=l4;
f709(i,si0,si1,si2,si3,si4,si5,si6);
UNREACHABLE;
L0:;
}

U32 f1719(rustpythonInstance*i,U32 l0,U32 l1) {
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
si2=1288875U;
si3=10U;
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
si2=1288888U;
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

void f1720(rustpythonInstance*i,U32 l0) {
U32 l1=0;
U32 l2=0;
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 si0,si1,si2,si3;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si1=-11U;
si0+=si1;
l2=si0;
si1=19U;
si2=l2;
si3=27U;
si2=si2 < si3;
si0=si2?si0:si1;
switch(si0){
case 0:
goto L27;
case 1:
goto L26;
case 2:
goto L25;
case 3:
goto L24;
case 4:
goto L23;
case 5:
goto L22;
case 6:
goto L21;
case 7:
goto L20;
case 8:
goto L19;
case 9:
goto L18;
case 10:
goto L17;
case 11:
goto L16;
case 12:
goto L15;
case 13:
goto L14;
case 14:
goto L13;
case 15:
goto L12;
case 16:
goto L11;
case 17:
goto L10;
case 18:
goto L9;
case 19:
goto L8;
case 20:
goto L7;
case 21:
goto L6;
case 22:
goto L5;
case 23:
goto L4;
case 24:
goto L3;
case 25:
goto L2;
default:
goto L28;
}
L28:;
si0=l0;
si1=12U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si0=!(si0);
if(si0){
goto L29;
}
si0=l2;
f1720(i,si0);
si0=l2;
f15271(i,si0);
L29:;
si0=l0;
si1=16U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si0=!(si0);
if(si0){
goto L30;
}
si0=l2;
f1720(i,si0);
si0=l2;
f15271(i,si0);
L30:;
si0=l0;
si1=20U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si0=!(si0);
if(si0){
goto L1;
}
si0=l2;
f1720(i,si0);
si0=l2;
f15271(i,si0);
goto L0;
L27:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+4U);
l3=si0;
si0=l0;
si1=12U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si0=!(si0);
if(si0){
goto L31;
}
si0=l3;
l2=si0;
L32:;
{
si0=l2;
f1643(i,si0);
si0=l2;
si1=48U;
si0+=si1;
l2=si0;
si0=l1;
si1=-1U;
si0+=si1;
l1=si0;
if(si0){
goto L32;
}
}
L31:;
si0=l0;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L1;
}
si0=l3;
f15271(i,si0);
goto L0;
L26:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+4U);
l2=si0;
f1720(i,si0);
si0=l2;
f15271(i,si0);
si0=l0;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
f1720(i,si0);
si0=l2;
f15271(i,si0);
goto L0;
L25:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+4U);
l2=si0;
f1720(i,si0);
si0=l2;
f15271(i,si0);
si0=l0;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
f1720(i,si0);
si0=l2;
f15271(i,si0);
goto L0;
L24:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+4U);
l2=si0;
f1720(i,si0);
si0=l2;
f15271(i,si0);
goto L0;
L23:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+4U);
l2=si0;
f1666(i,si0);
si0=l2;
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L33;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0);
f15271(i,si0);
L33:;
si0=l2;
si1=12U;
si0+=si1;
l1=si0;
f1666(i,si0);
si0=l2;
si1=16U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L34;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
f15271(i,si0);
L34:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+36U);
l1=si0;
si0=!(si0);
if(si0){
goto L35;
}
si0=l1;
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L36;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
f15271(i,si0);
L36:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+20U);
si0=!(si0);
if(si0){
goto L37;
}
si0=l1;
si1=20U;
si0+=si1;
f1721(i,si0);
L37:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+24U);
l3=si0;
si0=!(si0);
if(si0){
goto L38;
}
si0=l1;
si1=28U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L38;
}
si0=l3;
f15271(i,si0);
L38:;
si0=l1;
f15271(i,si0);
L35:;
si0=l2;
si1=24U;
si0+=si1;
l1=si0;
f1666(i,si0);
si0=l2;
si1=28U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L39;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
f15271(i,si0);
L39:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+40U);
l1=si0;
si0=!(si0);
if(si0){
goto L40;
}
si0=l1;
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L41;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
f15271(i,si0);
L41:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+20U);
si0=!(si0);
if(si0){
goto L42;
}
si0=l1;
si1=20U;
si0+=si1;
f1721(i,si0);
L42:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+24U);
l3=si0;
si0=!(si0);
if(si0){
goto L43;
}
si0=l1;
si1=28U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L43;
}
si0=l3;
f15271(i,si0);
L43:;
si0=l1;
f15271(i,si0);
L40:;
si0=l2;
f15271(i,si0);
si0=l0;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
f1720(i,si0);
si0=l2;
f15271(i,si0);
goto L0;
L22:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+4U);
l2=si0;
f1720(i,si0);
si0=l2;
f15271(i,si0);
si0=l0;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
f1720(i,si0);
si0=l2;
f15271(i,si0);
si0=l0;
si1=12U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
f1720(i,si0);
si0=l2;
f15271(i,si0);
goto L0;
L21:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+4U);
l3=si0;
si0=l0;
si1=12U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si0=!(si0);
if(si0){
goto L44;
}
si0=l3;
l2=si0;
L45:;
{
si0=l2;
si0=i32_load(&i->m0,(U64)si0);
si1=38U;
si0=si0 == si1;
if(si0){
goto L46;
}
si0=l2;
f1643(i,si0);
L46:;
si0=l2;
si1=48U;
si0+=si1;
l2=si0;
si0=l1;
si1=-1U;
si0+=si1;
l1=si0;
if(si0){
goto L45;
}
}
L44:;
si0=l0;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L47;
}
si0=l3;
f15271(i,si0);
L47:;
si0=l0;
si1=16U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=l0;
si1=24U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si0=!(si0);
if(si0){
goto L48;
}
si0=l3;
l2=si0;
L49:;
{
si0=l2;
f1643(i,si0);
si0=l2;
si1=48U;
si0+=si1;
l2=si0;
si0=l1;
si1=-1U;
si0+=si1;
l1=si0;
if(si0){
goto L49;
}
}
L48:;
si0=l0;
si1=20U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L1;
}
si0=l3;
f15271(i,si0);
goto L0;
L20:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+4U);
l3=si0;
si0=l0;
si1=12U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si0=!(si0);
if(si0){
goto L50;
}
si0=l3;
l2=si0;
L51:;
{
si0=l2;
f1643(i,si0);
si0=l2;
si1=48U;
si0+=si1;
l2=si0;
si0=l1;
si1=-1U;
si0+=si1;
l1=si0;
if(si0){
goto L51;
}
}
L50:;
si0=l0;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L1;
}
si0=l3;
f15271(i,si0);
goto L0;
L19:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+4U);
l2=si0;
f1720(i,si0);
si0=l2;
f15271(i,si0);
si0=l0;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
si0=l0;
si1=16U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si0=!(si0);
if(si0){
goto L52;
}
si0=0U;
l3=si0;
L53:;
{
si0=l4;
si1=l3;
si2=112U;
si1*=si2;
si0+=si1;
l2=si0;
f1643(i,si0);
si0=l2;
si1=48U;
si0+=si1;
f1643(i,si0);
si0=l2;
si1=96U;
si0+=si1;
l6=si0;
si0=l2;
si1=104U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si0=!(si0);
if(si0){
goto L54;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0+96U);
l2=si0;
L55:;
{
si0=l2;
f1643(i,si0);
si0=l2;
si1=48U;
si0+=si1;
l2=si0;
si0=l1;
si1=-1U;
si0+=si1;
l1=si0;
if(si0){
goto L55;
}
}
L54:;
si0=l3;
si1=1U;
si0+=si1;
l3=si0;
si0=l6;
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L56;
}
si0=l6;
si0=i32_load(&i->m0,(U64)si0);
f15271(i,si0);
L56:;
si0=l3;
si1=l5;
si0=si0 != si1;
if(si0){
goto L53;
}
}
L52:;
si0=l0;
si1=12U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L1;
}
si0=l4;
f15271(i,si0);
goto L0;
L18:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+4U);
l2=si0;
f1720(i,si0);
si0=l2;
f15271(i,si0);
si0=l0;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
si0=l0;
si1=16U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si0=!(si0);
if(si0){
goto L57;
}
si0=0U;
l3=si0;
L58:;
{
si0=l4;
si1=l3;
si2=112U;
si1*=si2;
si0+=si1;
l2=si0;
f1643(i,si0);
si0=l2;
si1=48U;
si0+=si1;
f1643(i,si0);
si0=l2;
si1=96U;
si0+=si1;
l6=si0;
si0=l2;
si1=104U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si0=!(si0);
if(si0){
goto L59;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0+96U);
l2=si0;
L60:;
{
si0=l2;
f1643(i,si0);
si0=l2;
si1=48U;
si0+=si1;
l2=si0;
si0=l1;
si1=-1U;
si0+=si1;
l1=si0;
if(si0){
goto L60;
}
}
L59:;
si0=l3;
si1=1U;
si0+=si1;
l3=si0;
si0=l6;
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L61;
}
si0=l6;
si0=i32_load(&i->m0,(U64)si0);
f15271(i,si0);
L61:;
si0=l3;
si1=l5;
si0=si0 != si1;
if(si0){
goto L58;
}
}
L57:;
si0=l0;
si1=12U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L1;
}
si0=l4;
f15271(i,si0);
goto L0;
L17:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+4U);
l2=si0;
f1720(i,si0);
si0=l2;
f15271(i,si0);
si0=l0;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
f1720(i,si0);
si0=l2;
f15271(i,si0);
si0=l0;
si1=12U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
si0=l0;
si1=20U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si0=!(si0);
if(si0){
goto L62;
}
si0=0U;
l3=si0;
L63:;
{
si0=l4;
si1=l3;
si2=112U;
si1*=si2;
si0+=si1;
l2=si0;
f1643(i,si0);
si0=l2;
si1=48U;
si0+=si1;
f1643(i,si0);
si0=l2;
si1=96U;
si0+=si1;
l6=si0;
si0=l2;
si1=104U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si0=!(si0);
if(si0){
goto L64;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0+96U);
l2=si0;
L65:;
{
si0=l2;
f1643(i,si0);
si0=l2;
si1=48U;
si0+=si1;
l2=si0;
si0=l1;
si1=-1U;
si0+=si1;
l1=si0;
if(si0){
goto L65;
}
}
L64:;
si0=l3;
si1=1U;
si0+=si1;
l3=si0;
si0=l6;
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L66;
}
si0=l6;
si0=i32_load(&i->m0,(U64)si0);
f15271(i,si0);
L66:;
si0=l3;
si1=l5;
si0=si0 != si1;
if(si0){
goto L63;
}
}
L62:;
si0=l0;
si1=16U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L1;
}
si0=l4;
f15271(i,si0);
goto L0;
L16:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+4U);
l2=si0;
f1720(i,si0);
si0=l2;
f15271(i,si0);
si0=l0;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
si0=l0;
si1=16U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si0=!(si0);
if(si0){
goto L67;
}
si0=0U;
l3=si0;
L68:;
{
si0=l4;
si1=l3;
si2=112U;
si1*=si2;
si0+=si1;
l2=si0;
f1643(i,si0);
si0=l2;
si1=48U;
si0+=si1;
f1643(i,si0);
si0=l2;
si1=96U;
si0+=si1;
l6=si0;
si0=l2;
si1=104U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si0=!(si0);
if(si0){
goto L69;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0+96U);
l2=si0;
L70:;
{
si0=l2;
f1643(i,si0);
si0=l2;
si1=48U;
si0+=si1;
l2=si0;
si0=l1;
si1=-1U;
si0+=si1;
l1=si0;
if(si0){
goto L70;
}
}
L69:;
si0=l3;
si1=1U;
si0+=si1;
l3=si0;
si0=l6;
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L71;
}
si0=l6;
si0=i32_load(&i->m0,(U64)si0);
f15271(i,si0);
L71:;
si0=l3;
si1=l5;
si0=si0 != si1;
if(si0){
goto L68;
}
}
L67:;
si0=l0;
si1=12U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L1;
}
si0=l4;
f15271(i,si0);
goto L0;
L15:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+4U);
l2=si0;
f1720(i,si0);
si0=l2;
f15271(i,si0);
goto L0;
L14:;
si0=l0;
si1=12U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si0=!(si0);
if(si0){
goto L1;
}
si0=l2;
f1720(i,si0);
si0=l2;
f15271(i,si0);
goto L0;
L13:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+4U);
l2=si0;
f1720(i,si0);
si0=l2;
f15271(i,si0);
goto L0;
L12:;
si0=l0;
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
f1720(i,si0);
si0=l2;
f15271(i,si0);
si0=l0;
si1=12U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L72;
}
si0=l0;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
f15271(i,si0);
L72:;
si0=l0;
si1=20U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=l0;
si1=28U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si0=!(si0);
if(si0){
goto L73;
}
si0=l3;
l2=si0;
L74:;
{
si0=l2;
f1643(i,si0);
si0=l2;
si1=48U;
si0+=si1;
l2=si0;
si0=l1;
si1=-1U;
si0+=si1;
l1=si0;
if(si0){
goto L74;
}
}
L73:;
si0=l0;
si1=24U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L1;
}
si0=l3;
f15271(i,si0);
goto L0;
L11:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+4U);
l2=si0;
f1720(i,si0);
si0=l2;
f15271(i,si0);
si0=l0;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=l0;
si1=16U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si0=!(si0);
if(si0){
goto L75;
}
si0=l3;
l2=si0;
L76:;
{
si0=l2;
f1643(i,si0);
si0=l2;
si1=48U;
si0+=si1;
l2=si0;
si0=l1;
si1=-1U;
si0+=si1;
l1=si0;
if(si0){
goto L76;
}
}
L75:;
si0=l0;
si1=12U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L77;
}
si0=l3;
f15271(i,si0);
L77:;
si0=l0;
si1=20U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si0=l0;
si1=28U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si0=!(si0);
if(si0){
goto L78;
}
si0=l6;
l2=si0;
L79:;
{
si0=l2;
si1=56U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=!(si0);
if(si0){
goto L80;
}
si0=l2;
si1=60U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L80;
}
si0=l3;
f15271(i,si0);
L80:;
si0=l2;
f1643(i,si0);
si0=l2;
si1=72U;
si0+=si1;
l2=si0;
si0=l1;
si1=-1U;
si0+=si1;
l1=si0;
if(si0){
goto L79;
}
}
L78:;
si0=l0;
si1=24U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L1;
}
si0=l6;
f15271(i,si0);
goto L0;
L10:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+4U);
l2=si0;
f1720(i,si0);
si0=l2;
f15271(i,si0);
si0=l0;
si1=16U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si0=!(si0);
if(si0){
goto L1;
}
si0=l2;
f1720(i,si0);
si0=l2;
f15271(i,si0);
goto L0;
L9:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+4U);
l3=si0;
si0=l0;
si1=12U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si0=!(si0);
if(si0){
goto L81;
}
si0=l3;
l2=si0;
L82:;
{
si0=l2;
f1643(i,si0);
si0=l2;
si1=48U;
si0+=si1;
l2=si0;
si0=l1;
si1=-1U;
si0+=si1;
l1=si0;
if(si0){
goto L82;
}
}
L81:;
si0=l0;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L1;
}
si0=l3;
f15271(i,si0);
goto L0;
L8:;
si0=l1;
si1=-2U;
si0+=si1;
l2=si0;
si1=4U;
si2=l2;
si3=9U;
si2=si2 < si3;
si0=si2?si0:si1;
si1=-2U;
si0+=si1;
switch(si0){
case 0:
goto L88;
case 1:
goto L87;
case 2:
goto L86;
case 3:
goto L85;
default:
goto L83;
}
L88:;
si0=l0;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L83;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+4U);
l3=si0;
goto L84;
L87:;
si0=l0;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L83;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+4U);
l3=si0;
goto L84;
L86:;
si0=l1;
si0=!(si0);
if(si0){
goto L83;
}
si0=l0;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L83;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+4U);
l3=si0;
goto L84;
L85:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+4U);
l3=si0;
si0=l0;
si1=12U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si0=!(si0);
if(si0){
goto L89;
}
si0=l3;
l2=si0;
L90:;
{
si0=l2;
f1642(i,si0);
si0=l2;
si1=24U;
si0+=si1;
l2=si0;
si0=l1;
si1=-1U;
si0+=si1;
l1=si0;
if(si0){
goto L90;
}
}
L89:;
si0=l0;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L83;
}
L84:;
si0=l3;
f15271(i,si0);
L83:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+32U);
l2=si0;
si0=!(si0);
if(si0){
goto L1;
}
si0=l0;
si1=36U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L1;
}
si0=l2;
f15271(i,si0);
goto L0;
L7:;
si0=l0;
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
f1720(i,si0);
si0=l2;
f15271(i,si0);
si0=l0;
si1=12U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L1;
}
si0=l0;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
f15271(i,si0);
goto L0;
L6:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+4U);
l2=si0;
f1720(i,si0);
si0=l2;
f15271(i,si0);
si0=l0;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
f1720(i,si0);
si0=l2;
f15271(i,si0);
goto L0;
L5:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+4U);
l2=si0;
f1720(i,si0);
si0=l2;
f15271(i,si0);
goto L0;
L4:;
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
goto L0;
L3:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+4U);
l3=si0;
si0=l0;
si1=12U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si0=!(si0);
if(si0){
goto L91;
}
si0=l3;
l2=si0;
L92:;
{
si0=l2;
f1643(i,si0);
si0=l2;
si1=48U;
si0+=si1;
l2=si0;
si0=l1;
si1=-1U;
si0+=si1;
l1=si0;
if(si0){
goto L92;
}
}
L91:;
si0=l0;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L1;
}
si0=l3;
f15271(i,si0);
goto L0;
L2:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+4U);
l3=si0;
si0=l0;
si1=12U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si0=!(si0);
if(si0){
goto L93;
}
si0=l3;
l2=si0;
L94:;
{
si0=l2;
f1643(i,si0);
si0=l2;
si1=48U;
si0+=si1;
l2=si0;
si0=l1;
si1=-1U;
si0+=si1;
l1=si0;
if(si0){
goto L94;
}
}
L93:;
si0=l0;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L1;
}
si0=l3;
f15271(i,si0);
L1:;
L0:;
}

void f1721(rustpythonInstance*i,U32 l0) {
U32 si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
l0=si0;
f1720(i,si0);
si0=l0;
f15271(i,si0);
L0:;
}

void f1722(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U32 l4=0;
U32 l5=0;
U64 l6=0;
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
U32 l21=0;
U32 l22=0;
U32 l23=0;
U32 l24=0;
U64 l25=0;
U64 l26=0;
U64 l27=0;
U64 l28=0;
U64 l29=0;
U32 l30=0;
U32 l31=0;
U32 l32=0;
U32 l33=0;
U32 l34=0;
U32 l35=0;
U32 si0,si1,si2,si3,si4;
U64 sj0,sj1;
si0=i->g0;
si1=352U;
si0-=si1;
l3=si0;
i->g0=si0;
si0=l2;
si1=20U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
si0=l2;
si1=28U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si0=l2;
sj0=i64_load(&i->m0,(U64)si0+12U);
l6=sj0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+8U);
l7=si0;
si0=l2;
sj0=i64_load(&i->m0,(U64)si0);
l8=sj0;
si0=l3;
si1=296U;
si0+=si1;
si1=l1;
si2=l2;
si2=i32_load(&i->m0,(U64)si2+24U);
l2=si2;
f3534(i,si0,si1,si2);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+296U);
l9=si0;
si0=l3;
si1=240U;
si0+=si1;
si1=8U;
si0+=si1;
l10=si0;
si1=l3;
si2=296U;
si1+=si2;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=240U;
si0+=si1;
si1=16U;
si0+=si1;
l11=si0;
si1=l3;
si2=320U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=l3;
si2=296U;
si1+=si2;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+240U,sj1);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+300U);
l12=si0;
si1=2U;
si0=si0 == si1;
if(si0){
goto L2;
}
si0=l1;
si1=l3;
sj1=i64_load(&i->m0,(U64)si1+240U);
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l1;
si1=l12;
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
si1=20U;
si0+=si1;
si1=l11;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
si1=12U;
si0+=si1;
si1=l10;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
goto L1;
L2:;
si0=l1;
si1=l2;
i32_store(&i->m0,(U64)si0+16U,si1);
L1:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+8U);
l13=si0;
si0=l3;
si1=l7;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l3;
si1=l4;
i32_store(&i->m0,(U64)si0+240U,si1);
si0=l7;
si1=l4;
si0=si0 != si1;
if(si0){
goto L5;
}
sj0=l8;
si0=(U32)(sj0);
l14=si0;
sj0=l6;
si0=(U32)(sj0);
l15=si0;
si0=l7;
if(si0){
goto L6;
}
si0=l3;
si1=0U;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l3;
sj1=8ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=0U;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l3;
si1=8U;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l3;
si1=l7;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l15;
si1=l7;
si2=48U;
si1*=si2;
l7=si1;
si0+=si1;
l16=si0;
si0=l14;
si1=l7;
si0+=si1;
l17=si0;
si0=l14;
l2=si0;
si0=l15;
l7=si0;
goto L4;
L6:;
si0=l7;
si1=38347922U;
si0=si0 > si1;
if(si0){
goto L9;
}
si0=l7;
si1=56U;
si0*=si1;
l2=si0;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L9;
}
si0=l7;
si1=38347923U;
si0=si0 < si1;
si1=3U;
si0<<=(si1&31);
l10=si0;
si0=l2;
if(si0){
goto L11;
}
si0=l10;
l4=si0;
goto L10;
L11:;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=l10;
si1=l2;
si0=si0 <= si1;
if(si0){
goto L12;
}
si0=l10;
si1=l2;
si0=f15277(i,si0,si1);
l4=si0;
goto L10;
L12:;
si0=l2;
si0=f15269(i,si0);
l4=si0;
L10:;
si0=l4;
si0=!(si0);
if(si0){
goto L8;
}
si0=0U;
l10=si0;
si0=l3;
si1=0U;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l3;
si1=l7;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l3;
si1=l4;
i32_store(&i->m0,(U64)si0,si1);
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=l2;
si0=f15269(i,si0);
l4=si0;
si0=!(si0);
if(si0){
goto L7;
}
si0=l3;
si1=0U;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l3;
si1=l4;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l3;
si1=l7;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l15;
si1=l7;
si2=48U;
si1*=si2;
l18=si1;
si0+=si1;
l16=si0;
si0=l14;
si1=l18;
si0+=si1;
l17=si0;
si0=l3;
si1=240U;
si0+=si1;
si1=4U;
si0|=si1;
l19=si0;
si0=l3;
si1=80U;
si0+=si1;
si1=4U;
si0|=si1;
l4=si0;
si0=l3;
si1=296U;
si0+=si1;
si1=4U;
si0|=si1;
l12=si0;
si1=40U;
si0+=si1;
l20=si0;
si0=l12;
si1=32U;
si0+=si1;
l21=si0;
si0=l12;
si1=24U;
si0+=si1;
l22=si0;
si0=l12;
si1=16U;
si0+=si1;
l23=si0;
si0=l12;
si1=8U;
si0+=si1;
l24=si0;
L13:;
{
si0=l15;
si1=l10;
si0+=si1;
l7=si0;
si0=l14;
si1=l10;
si0+=si1;
l2=si0;
si0=i32_load(&i->m0,(U64)si0);
l11=si0;
si1=39U;
si0=si0 == si1;
if(si0){
goto L15;
}
si0=l3;
si1=l11;
i32_store(&i->m0,(U64)si0+296U,si1);
si0=l2;
si1=4U;
si0+=si1;
sj0=i64_load(&i->m0,(U64)si0);
l25=sj0;
si0=l2;
si1=12U;
si0+=si1;
sj0=i64_load(&i->m0,(U64)si0);
l26=sj0;
si0=l2;
si1=20U;
si0+=si1;
sj0=i64_load(&i->m0,(U64)si0);
l27=sj0;
si0=l2;
si1=28U;
si0+=si1;
sj0=i64_load(&i->m0,(U64)si0);
l28=sj0;
si0=l2;
si1=36U;
si0+=si1;
sj0=i64_load(&i->m0,(U64)si0);
l29=sj0;
si0=l20;
si1=l2;
si2=44U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l21;
sj1=l29;
i64_store(&i->m0,(U64)si0,sj1);
si0=l22;
sj1=l28;
i64_store(&i->m0,(U64)si0,sj1);
si0=l23;
sj1=l27;
i64_store(&i->m0,(U64)si0,sj1);
si0=l24;
sj1=l26;
i64_store(&i->m0,(U64)si0,sj1);
si0=l12;
sj1=l25;
i64_store(&i->m0,(U64)si0,sj1);
si0=l18;
si1=l10;
si0=si0 != si1;
if(si0){
goto L17;
}
si0=l16;
l7=si0;
goto L16;
L17:;
si0=l7;
si0=i32_load(&i->m0,(U64)si0);
l30=si0;
si1=38U;
si0=si0 != si1;
if(si0){
goto L14;
}
si0=l7;
si1=48U;
si0+=si1;
l7=si0;
L16:;
si0=l2;
si1=48U;
si0+=si1;
l2=si0;
si0=l11;
si1=38U;
si0=si0 == si1;
if(si0){
goto L4;
}
si0=l3;
si1=296U;
si0+=si1;
f1720(i,si0);
goto L4;
L15:;
si0=l2;
si1=48U;
si0+=si1;
l2=si0;
goto L4;
L14:;
si0=l3;
si1=32U;
si0+=si1;
si1=8U;
si0+=si1;
l31=si0;
si1=l24;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=32U;
si0+=si1;
si1=16U;
si0+=si1;
l32=si0;
si1=l23;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=32U;
si0+=si1;
si1=24U;
si0+=si1;
l33=si0;
si1=l22;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=32U;
si0+=si1;
si1=32U;
si0+=si1;
l34=si0;
si1=l21;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=32U;
si0+=si1;
si1=40U;
si0+=si1;
l35=si0;
si1=l20;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=40U;
si0+=si1;
si1=l7;
si2=44U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=32U;
si0+=si1;
si1=l7;
si2=36U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=24U;
si0+=si1;
si1=l7;
si2=28U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=16U;
si0+=si1;
si1=l7;
si2=20U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=8U;
si0+=si1;
si1=l7;
si2=12U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=l7;
si2=4U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=l12;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+32U,sj1);
si0=l3;
si1=l30;
i32_store(&i->m0,(U64)si0+80U,si1);
si0=38U;
l30=si0;
si0=l11;
si1=38U;
si0=si0 == si1;
if(si0){
goto L18;
}
si0=l19;
si1=l3;
sj1=i64_load(&i->m0,(U64)si1+32U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l19;
si1=8U;
si0+=si1;
si1=l31;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l19;
si1=16U;
si0+=si1;
si1=l32;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l19;
si1=24U;
si0+=si1;
si1=l33;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l19;
si1=32U;
si0+=si1;
si1=l34;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l19;
si1=40U;
si0+=si1;
si1=l35;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=l11;
i32_store(&i->m0,(U64)si0+240U,si1);
si0=l3;
si1=296U;
si0+=si1;
si1=l1;
si2=l3;
si3=240U;
si2+=si3;
f1594(i,si0,si1,si2);
si0=l3;
si1=240U;
si0+=si1;
si1=8U;
si0+=si1;
l7=si0;
si1=l24;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=240U;
si0+=si1;
si1=16U;
si0+=si1;
l11=si0;
si1=l23;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=240U;
si0+=si1;
si1=24U;
si0+=si1;
l31=si0;
si1=l22;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=240U;
si0+=si1;
si1=32U;
si0+=si1;
l32=si0;
si1=l21;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=240U;
si0+=si1;
si1=40U;
si0+=si1;
l33=si0;
si1=l20;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=240U;
si0+=si1;
si1=48U;
si0+=si1;
l34=si0;
si1=l12;
si2=48U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=l12;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+240U,sj1);
si0=38U;
l30=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+296U);
l35=si0;
si1=38U;
si0=si0 == si1;
if(si0){
goto L18;
}
si0=l3;
si1=128U;
si0+=si1;
si1=48U;
si0+=si1;
si1=l34;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=128U;
si0+=si1;
si1=40U;
si0+=si1;
si1=l33;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=128U;
si0+=si1;
si1=32U;
si0+=si1;
si1=l32;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=128U;
si0+=si1;
si1=24U;
si0+=si1;
si1=l31;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=128U;
si0+=si1;
si1=16U;
si0+=si1;
si1=l11;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=128U;
si0+=si1;
si1=8U;
si0+=si1;
si1=l7;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=l3;
sj1=i64_load(&i->m0,(U64)si1+240U);
i64_store(&i->m0,(U64)si0+128U,sj1);
si0=l35;
l30=si0;
L18:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+8U);
l11=si0;
si1=l3;
si1=i32_load(&i->m0,(U64)si1+4U);
si0=si0 != si1;
if(si0){
goto L19;
}
si0=l3;
si1=l11;
f1669(i,si0,si1);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+8U);
l11=si0;
L19:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
si1=l11;
si2=56U;
si1*=si2;
si0+=si1;
l7=si0;
si1=l3;
sj1=i64_load(&i->m0,(U64)si1+128U);
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l7;
si1=l30;
i32_store(&i->m0,(U64)si0,si1);
si0=l7;
si1=12U;
si0+=si1;
si1=l3;
si2=128U;
si1+=si2;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l7;
si1=20U;
si0+=si1;
si1=l3;
si2=128U;
si1+=si2;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l7;
si1=28U;
si0+=si1;
si1=l3;
si2=128U;
si1+=si2;
si2=24U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l7;
si1=36U;
si0+=si1;
si1=l3;
si2=128U;
si1+=si2;
si2=32U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l7;
si1=44U;
si0+=si1;
si1=l3;
si2=128U;
si1+=si2;
si2=40U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l7;
si1=52U;
si0+=si1;
si1=l3;
si2=128U;
si1+=si2;
si2=48U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=l11;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l3;
si1=184U;
si0+=si1;
si1=l1;
si2=l3;
si3=80U;
si2+=si3;
f1594(i,si0,si1,si2);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+24U);
l11=si0;
si1=l3;
si1=i32_load(&i->m0,(U64)si1+20U);
si0=si0 != si1;
if(si0){
goto L20;
}
si0=l3;
si1=16U;
si0+=si1;
si1=l11;
f1669(i,si0,si1);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+24U);
l11=si0;
L20:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+16U);
si1=l11;
si2=56U;
si1*=si2;
si0+=si1;
l7=si0;
si1=l3;
sj1=i64_load(&i->m0,(U64)si1+184U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l7;
si1=8U;
si0+=si1;
si1=l3;
si2=184U;
si1+=si2;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l7;
si1=16U;
si0+=si1;
si1=l3;
si2=184U;
si1+=si2;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l7;
si1=24U;
si0+=si1;
si1=l3;
si2=184U;
si1+=si2;
si2=24U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l7;
si1=32U;
si0+=si1;
si1=l3;
si2=184U;
si1+=si2;
si2=32U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l7;
si1=40U;
si0+=si1;
si1=l3;
si2=184U;
si1+=si2;
si2=40U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l7;
si1=48U;
si0+=si1;
si1=l3;
si2=184U;
si1+=si2;
si2=48U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=l11;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l10;
si1=48U;
si0+=si1;
l10=si0;
si0=l2;
si1=48U;
si0+=si1;
si1=l17;
si0=si0 != si1;
if(si0){
goto L13;
}
}
si0=l15;
si1=l10;
si0+=si1;
l7=si0;
goto L3;
L9:;
f53(i);
UNREACHABLE;
L8:;
si0=l10;
si1=l2;
f52(i,si0,si1);
UNREACHABLE;
L7:;
si0=8U;
si1=l2;
f52(i,si0,si1);
UNREACHABLE;
L5:;
si0=l3;
si1=0U;
i32_store(&i->m0,(U64)si0+296U,si1);
si0=0U;
si1=l3;
si2=16U;
si1+=si2;
si2=l3;
si3=240U;
si2+=si3;
si3=l3;
si4=296U;
si3+=si4;
si4=1289172U;
f1718(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L4:;
si0=l17;
si1=l2;
si0-=si1;
si1=48U;
si0=DIV_U(si0,si1);
l4=si0;
si0=l17;
si1=l2;
si0=si0 == si1;
if(si0){
goto L3;
}
L21:;
{
si0=l2;
si0=i32_load(&i->m0,(U64)si0);
si1=38U;
si0=si0 == si1;
if(si0){
goto L22;
}
si0=l2;
f1684(i,si0);
L22:;
si0=l2;
si1=48U;
si0+=si1;
l2=si0;
si0=l4;
si1=-1U;
si0+=si1;
l4=si0;
if(si0){
goto L21;
}
}
L3:;
sj0=l8;
sj1=4294967296ULL;
si0=sj0 < sj1;
if(si0){
goto L23;
}
si0=l14;
f15271(i,si0);
L23:;
si0=l16;
si1=l7;
si0-=si1;
si1=48U;
si0=DIV_U(si0,si1);
l2=si0;
si0=l16;
si1=l7;
si0=si0 == si1;
if(si0){
goto L24;
}
L25:;
{
si0=l7;
f1684(i,si0);
si0=l7;
si1=48U;
si0+=si1;
l7=si0;
si0=l2;
si1=-1U;
si0+=si1;
l2=si0;
if(si0){
goto L25;
}
}
L24:;
sj0=l6;
sj1=4294967296ULL;
si0=sj0 < sj1;
if(si0){
goto L26;
}
si0=l15;
f15271(i,si0);
L26:;
si0=l3;
si1=296U;
si0+=si1;
si1=l1;
si2=l5;
f3534(i,si0,si1,si2);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+296U);
l7=si0;
si0=l3;
si1=240U;
si0+=si1;
si1=8U;
si0+=si1;
l2=si0;
si1=l3;
si2=296U;
si1+=si2;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=240U;
si0+=si1;
si1=16U;
si0+=si1;
l4=si0;
si1=l3;
si2=320U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=l3;
si2=296U;
si1+=si2;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+240U,sj1);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+300U);
l10=si0;
si1=2U;
si0=si0 == si1;
if(si0){
goto L28;
}
si0=l1;
si1=l3;
sj1=i64_load(&i->m0,(U64)si1+240U);
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l1;
si1=l10;
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
si1=20U;
si0+=si1;
si1=l4;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
si1=12U;
si0+=si1;
si1=l2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
goto L27;
L28:;
si0=l1;
si1=l5;
i32_store(&i->m0,(U64)si0+16U,si1);
L27:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+8U);
l2=si0;
si0=l0;
si1=l7;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l0;
si1=l2;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l0;
si1=l9;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l13;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l3;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+16U,sj1);
si0=l0;
si1=24U;
si0+=si1;
si1=l3;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l3;
sj1=i64_load(&i->m0,(U64)si1+16U);
i64_store(&i->m0,(U64)si0+28U,sj1);
si0=l0;
si1=36U;
si0+=si1;
si1=l3;
si2=16U;
si1+=si2;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=352U;
si0+=si1;
i->g0=si0;
L0:;
}

void f1723(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
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
si1=112U;
si0-=si1;
l3=si0;
i->g0=si0;
si0=l2;
si1=16U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+8U);
l5=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+4U);
l6=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
si0=l3;
si1=8U;
si0+=si1;
si1=l1;
si2=l2;
si2=i32_load(&i->m0,(U64)si2+12U);
l2=si2;
f3534(i,si0,si1,si2);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+8U);
l8=si0;
si0=l3;
si1=64U;
si0+=si1;
si1=8U;
si0+=si1;
l9=si0;
si1=l3;
si2=8U;
si1+=si2;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=64U;
si0+=si1;
si1=16U;
si0+=si1;
l10=si0;
si1=l3;
si2=32U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=l3;
si2=8U;
si1+=si2;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+64U,sj1);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+12U);
l11=si0;
si1=2U;
si0=si0 == si1;
if(si0){
goto L2;
}
si0=l1;
si1=l3;
sj1=i64_load(&i->m0,(U64)si1+64U);
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l1;
si1=l11;
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
si1=20U;
si0+=si1;
si1=l10;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
si1=12U;
si0+=si1;
si1=l9;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
goto L1;
L2:;
si0=l1;
si1=l2;
i32_store(&i->m0,(U64)si0+16U,si1);
L1:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+8U);
l12=si0;
si0=l3;
si1=64U;
si0+=si1;
si1=40U;
si0+=si1;
l9=si0;
si1=l6;
si2=40U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=64U;
si0+=si1;
si1=32U;
si0+=si1;
l10=si0;
si1=l6;
si2=32U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=64U;
si0+=si1;
si1=24U;
si0+=si1;
l11=si0;
si1=l6;
si2=24U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=64U;
si0+=si1;
si1=16U;
si0+=si1;
l13=si0;
si1=l6;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=64U;
si0+=si1;
si1=8U;
si0+=si1;
l14=si0;
si1=l6;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=l6;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+64U,sj1);
si0=l3;
si1=8U;
si0+=si1;
si1=l1;
si2=l3;
si3=64U;
si2+=si3;
f1594(i,si0,si1,si2);
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=56U;
si0=f15269(i,si0);
l2=si0;
si0=!(si0);
if(si0){
goto L5;
}
si0=l2;
si1=l3;
sj1=i64_load(&i->m0,(U64)si1+8U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=48U;
si0+=si1;
si1=l3;
si2=8U;
si1+=si2;
si2=48U;
si1+=si2;
l15=si1;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=40U;
si0+=si1;
si1=l3;
si2=8U;
si1+=si2;
si2=40U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=32U;
si0+=si1;
si1=l3;
si2=8U;
si1+=si2;
si2=32U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=24U;
si0+=si1;
si1=l3;
si2=8U;
si1+=si2;
si2=24U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=16U;
si0+=si1;
si1=l3;
si2=8U;
si1+=si2;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=8U;
si0+=si1;
si1=l3;
si2=8U;
si1+=si2;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l6;
f15271(i,si0);
si0=l9;
si1=l7;
si2=40U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l10;
si1=l7;
si2=32U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l11;
si1=l7;
si2=24U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l13;
si1=l7;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l14;
si1=l7;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=l7;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+64U,sj1);
si0=l3;
si1=8U;
si0+=si1;
si1=l1;
si2=l3;
si3=64U;
si2+=si3;
f1594(i,si0,si1,si2);
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=56U;
si0=f15269(i,si0);
l6=si0;
si0=!(si0);
if(si0){
goto L4;
}
si0=l6;
si1=l3;
sj1=i64_load(&i->m0,(U64)si1+8U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l6;
si1=48U;
si0+=si1;
si1=l15;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l6;
si1=40U;
si0+=si1;
si1=l3;
si2=8U;
si1+=si2;
si2=40U;
si1+=si2;
l13=si1;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l6;
si1=32U;
si0+=si1;
si1=l3;
si2=8U;
si1+=si2;
si2=32U;
si1+=si2;
l14=si1;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l6;
si1=24U;
si0+=si1;
si1=l3;
si2=8U;
si1+=si2;
si2=24U;
si1+=si2;
l9=si1;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l6;
si1=16U;
si0+=si1;
si1=l3;
si2=8U;
si1+=si2;
si2=16U;
si1+=si2;
l10=si1;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l6;
si1=8U;
si0+=si1;
si1=l3;
si2=8U;
si1+=si2;
si2=8U;
si1+=si2;
l11=si1;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l7;
f15271(i,si0);
si0=l3;
si1=64U;
si0+=si1;
si1=40U;
si0+=si1;
si1=l5;
si2=40U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=64U;
si0+=si1;
si1=32U;
si0+=si1;
si1=l5;
si2=32U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=64U;
si0+=si1;
si1=24U;
si0+=si1;
si1=l5;
si2=24U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=64U;
si0+=si1;
si1=16U;
si0+=si1;
l15=si0;
si1=l5;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=64U;
si0+=si1;
si1=8U;
si0+=si1;
l16=si0;
si1=l5;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=l5;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+64U,sj1);
si0=l3;
si1=8U;
si0+=si1;
si1=l1;
si2=l3;
si3=64U;
si2+=si3;
f1594(i,si0,si1,si2);
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=56U;
si0=f15269(i,si0);
l7=si0;
si0=!(si0);
if(si0){
goto L3;
}
si0=l7;
si1=l3;
sj1=i64_load(&i->m0,(U64)si1+8U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l7;
si1=48U;
si0+=si1;
si1=l3;
si2=8U;
si1+=si2;
si2=48U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l7;
si1=40U;
si0+=si1;
si1=l13;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l7;
si1=32U;
si0+=si1;
si1=l14;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l7;
si1=24U;
si0+=si1;
si1=l9;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l7;
si1=16U;
si0+=si1;
si1=l10;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l7;
si1=8U;
si0+=si1;
si1=l11;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
f15271(i,si0);
si0=l3;
si1=8U;
si0+=si1;
si1=l1;
si2=l4;
f3534(i,si0,si1,si2);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+8U);
l5=si0;
si0=l16;
si1=l10;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l15;
si1=l9;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=l11;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+64U,sj1);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+12U);
l9=si0;
si1=2U;
si0=si0 == si1;
if(si0){
goto L7;
}
si0=l1;
si1=l3;
sj1=i64_load(&i->m0,(U64)si1+64U);
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l1;
si1=l9;
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
si1=20U;
si0+=si1;
si1=l3;
si2=80U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
si1=12U;
si0+=si1;
si1=l3;
si2=72U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
goto L6;
L7:;
si0=l1;
si1=l4;
i32_store(&i->m0,(U64)si0+16U,si1);
L6:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+8U);
l1=si0;
si0=l0;
si1=l7;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l0;
si1=l2;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l0;
si1=l6;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l0;
si1=l5;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l0;
si1=l1;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l0;
si1=l8;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l12;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=112U;
si0+=si1;
i->g0=si0;
goto L0;
L5:;
si0=8U;
si1=56U;
f52(i,si0,si1);
UNREACHABLE;
L4:;
si0=8U;
si1=56U;
f52(i,si0,si1);
UNREACHABLE;
L3:;
si0=8U;
si1=56U;
f52(i,si0,si1);
UNREACHABLE;
L0:;
}

void f1724(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
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
U64 sj1;
si0=i->g0;
si1=128U;
si0-=si1;
l3=si0;
i->g0=si0;
si0=l2;
si1=64U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
si0=l2;
si1=44U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si0=l2;
si1=40U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si0=l2;
si1=32U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
si0=l2;
si1=28U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l8=si0;
si0=l2;
si1=20U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l9=si0;
si0=l2;
si1=16U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l10=si0;
si0=l2;
si1=52U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l11=si0;
si0=l2;
si1=56U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l12=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+36U);
l13=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+24U);
l14=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+12U);
l15=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+60U);
l16=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+48U);
l17=si0;
si0=l3;
si1=l1;
i32_store(&i->m0,(U64)si0+112U,si1);
si0=l3;
si1=l17;
si2=l12;
si3=48U;
si2*=si3;
si1+=si2;
i32_store(&i->m0,(U64)si0+108U,si1);
si0=l3;
si1=l17;
i32_store(&i->m0,(U64)si0+104U,si1);
si0=l3;
si1=l11;
i32_store(&i->m0,(U64)si0+100U,si1);
si0=l3;
si1=l17;
i32_store(&i->m0,(U64)si0+96U,si1);
si0=l3;
si1=l3;
si2=72U;
si1+=si2;
i32_store(&i->m0,(U64)si0+116U,si1);
si0=l3;
si1=8U;
si0+=si1;
si1=l3;
si2=96U;
si1+=si2;
f1653(i,si0,si1);
si0=l3;
si1=96U;
si0+=si1;
si1=l1;
si2=l16;
f3534(i,si0,si1,si2);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+96U);
l17=si0;
si0=l3;
si1=72U;
si0+=si1;
si1=8U;
si0+=si1;
l11=si0;
si1=l3;
si2=96U;
si1+=si2;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=72U;
si0+=si1;
si1=16U;
si0+=si1;
l12=si0;
si1=l3;
si2=120U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=l3;
si2=96U;
si1+=si2;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+72U,sj1);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+100U);
l18=si0;
si1=2U;
si0=si0 == si1;
if(si0){
goto L2;
}
si0=l1;
si1=l3;
sj1=i64_load(&i->m0,(U64)si1+72U);
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l1;
si1=l18;
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
si1=20U;
si0+=si1;
si1=l12;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
si1=12U;
si0+=si1;
si1=l11;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
goto L1;
L2:;
si0=l1;
si1=l16;
i32_store(&i->m0,(U64)si0+16U,si1);
L1:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+8U);
l16=si0;
si0=l3;
si1=l1;
i32_store(&i->m0,(U64)si0+112U,si1);
si0=l3;
si1=l15;
si2=l9;
si3=48U;
si2*=si3;
si1+=si2;
i32_store(&i->m0,(U64)si0+108U,si1);
si0=l3;
si1=l15;
i32_store(&i->m0,(U64)si0+104U,si1);
si0=l3;
si1=l10;
i32_store(&i->m0,(U64)si0+100U,si1);
si0=l3;
si1=l15;
i32_store(&i->m0,(U64)si0+96U,si1);
si0=l3;
si1=l3;
si2=72U;
si1+=si2;
i32_store(&i->m0,(U64)si0+116U,si1);
si0=l3;
si1=24U;
si0+=si1;
si1=l3;
si2=96U;
si1+=si2;
f1653(i,si0,si1);
si0=l3;
si1=l1;
i32_store(&i->m0,(U64)si0+112U,si1);
si0=l3;
si1=l14;
si2=l7;
si3=72U;
si2*=si3;
si1+=si2;
i32_store(&i->m0,(U64)si0+108U,si1);
si0=l3;
si1=l14;
i32_store(&i->m0,(U64)si0+104U,si1);
si0=l3;
si1=l8;
i32_store(&i->m0,(U64)si0+100U,si1);
si0=l3;
si1=l14;
i32_store(&i->m0,(U64)si0+96U,si1);
si0=l3;
si1=l3;
si2=72U;
si1+=si2;
i32_store(&i->m0,(U64)si0+116U,si1);
si0=l3;
si1=40U;
si0+=si1;
si1=l3;
si2=96U;
si1+=si2;
f1661(i,si0,si1);
si0=l3;
si1=l1;
i32_store(&i->m0,(U64)si0+112U,si1);
si0=l3;
si1=l13;
si2=l5;
si3=72U;
si2*=si3;
si1+=si2;
i32_store(&i->m0,(U64)si0+108U,si1);
si0=l3;
si1=l13;
i32_store(&i->m0,(U64)si0+104U,si1);
si0=l3;
si1=l6;
i32_store(&i->m0,(U64)si0+100U,si1);
si0=l3;
si1=l13;
i32_store(&i->m0,(U64)si0+96U,si1);
si0=l3;
si1=l3;
si2=72U;
si1+=si2;
i32_store(&i->m0,(U64)si0+116U,si1);
si0=l3;
si1=56U;
si0+=si1;
si1=l3;
si2=96U;
si1+=si2;
f1654(i,si0,si1);
si0=l3;
si1=96U;
si0+=si1;
si1=l1;
si2=l4;
f3534(i,si0,si1,si2);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+96U);
l13=si0;
si0=l3;
si1=72U;
si0+=si1;
si1=8U;
si0+=si1;
l14=si0;
si1=l3;
si2=96U;
si1+=si2;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=72U;
si0+=si1;
si1=16U;
si0+=si1;
l15=si0;
si1=l3;
si2=120U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=l3;
si2=96U;
si1+=si2;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+72U,sj1);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+100U);
l5=si0;
si1=2U;
si0=si0 == si1;
if(si0){
goto L4;
}
si0=l1;
si1=l3;
sj1=i64_load(&i->m0,(U64)si1+72U);
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l1;
si1=l5;
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
si1=20U;
si0+=si1;
si1=l15;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
si1=12U;
si0+=si1;
si1=l14;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
goto L3;
L4:;
si0=l1;
si1=l4;
i32_store(&i->m0,(U64)si0+16U,si1);
L3:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+8U);
l1=si0;
si0=l0;
si1=l13;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l0;
si1=l1;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l0;
si1=l17;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l16;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l3;
sj1=i64_load(&i->m0,(U64)si1+24U);
i64_store(&i->m0,(U64)si0+28U,sj1);
si0=l0;
si1=36U;
si0+=si1;
si1=l3;
si2=24U;
si1+=si2;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l3;
sj1=i64_load(&i->m0,(U64)si1+40U);
i64_store(&i->m0,(U64)si0+40U,sj1);
si0=l0;
si1=48U;
si0+=si1;
si1=l3;
si2=40U;
si1+=si2;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+16U,sj1);
si0=l0;
si1=24U;
si0+=si1;
si1=l2;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l3;
sj1=i64_load(&i->m0,(U64)si1+56U);
i64_store(&i->m0,(U64)si0+52U,sj1);
si0=l0;
si1=60U;
si0+=si1;
si1=l3;
si2=56U;
si1+=si2;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=72U;
si0+=si1;
si1=l3;
si2=8U;
si1+=si2;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l3;
sj1=i64_load(&i->m0,(U64)si1+8U);
i64_store(&i->m0,(U64)si0+64U,sj1);
si0=l3;
si1=128U;
si0+=si1;
i->g0=si0;
L0:;
}

void f1725(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
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
U32 l16=0;
U32 si0,si1,si2,si3;
U64 sj0,sj1;
si0=i->g0;
si1=144U;
si0-=si1;
l3=si0;
i->g0=si0;
si0=l2;
si1=44U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
si0=l2;
si1=56U;
si0+=si1;
sj0=i64_load(&i->m0,(U64)si0);
l5=sj0;
si0=l2;
si1=24U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si0=l2;
si1=20U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
si0=l2;
si1=32U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l8=si0;
si0=l2;
si1=36U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l9=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+52U);
l10=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+48U);
l11=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+16U);
l12=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+12U);
l13=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+40U);
l14=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+28U);
l15=si0;
si0=l3;
si1=l1;
i32_store(&i->m0,(U64)si0+56U,si1);
si0=l3;
si1=l15;
si2=l9;
si3=48U;
si2*=si3;
si1+=si2;
i32_store(&i->m0,(U64)si0+52U,si1);
si0=l3;
si1=l15;
i32_store(&i->m0,(U64)si0+48U,si1);
si0=l3;
si1=l8;
i32_store(&i->m0,(U64)si0+44U,si1);
si0=l3;
si1=l15;
i32_store(&i->m0,(U64)si0+40U,si1);
si0=l3;
si1=l3;
si2=96U;
si1+=si2;
i32_store(&i->m0,(U64)si0+60U,si1);
si0=l3;
si1=8U;
si0+=si1;
si1=l3;
si2=40U;
si1+=si2;
f1653(i,si0,si1);
si0=l3;
si1=40U;
si0+=si1;
si1=l1;
si2=l14;
f3534(i,si0,si1,si2);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+40U);
l8=si0;
si0=l3;
si1=96U;
si0+=si1;
si1=8U;
si0+=si1;
l15=si0;
si1=l3;
si2=40U;
si1+=si2;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=96U;
si0+=si1;
si1=16U;
si0+=si1;
l9=si0;
si1=l3;
si2=40U;
si1+=si2;
si2=24U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=l3;
si2=40U;
si1+=si2;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+96U,sj1);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+44U);
l16=si0;
si1=2U;
si0=si0 == si1;
if(si0){
goto L2;
}
si0=l1;
si1=l3;
sj1=i64_load(&i->m0,(U64)si1+96U);
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l1;
si1=l16;
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
si1=20U;
si0+=si1;
si1=l9;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
si1=12U;
si0+=si1;
si1=l15;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
goto L1;
L2:;
si0=l1;
si1=l14;
i32_store(&i->m0,(U64)si0+16U,si1);
L1:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+8U);
l9=si0;
si0=l3;
si1=40U;
si0+=si1;
si1=40U;
si0+=si1;
si1=l13;
si2=40U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=40U;
si0+=si1;
si1=32U;
si0+=si1;
si1=l13;
si2=32U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=40U;
si0+=si1;
si1=24U;
si0+=si1;
si1=l13;
si2=24U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=40U;
si0+=si1;
si1=16U;
si0+=si1;
si1=l13;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=40U;
si0+=si1;
si1=8U;
si0+=si1;
si1=l13;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=l13;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+40U,sj1);
si0=l3;
si1=96U;
si0+=si1;
si1=l1;
si2=l3;
si3=40U;
si2+=si3;
f1628(i,si0,si1,si2);
si0=0U;
l14=si0;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=44U;
si0=f15269(i,si0);
l15=si0;
si0=!(si0);
if(si0){
goto L4;
}
si0=l15;
si1=l3;
sj1=i64_load(&i->m0,(U64)si1+96U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l15;
si1=40U;
si0+=si1;
si1=l3;
si2=96U;
si1+=si2;
si2=40U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l15;
si1=32U;
si0+=si1;
si1=l3;
si2=96U;
si1+=si2;
si2=32U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l15;
si1=24U;
si0+=si1;
si1=l3;
si2=96U;
si1+=si2;
si2=24U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l15;
si1=16U;
si0+=si1;
si1=l3;
si2=96U;
si1+=si2;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l15;
si1=8U;
si0+=si1;
si1=l3;
si2=96U;
si1+=si2;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l13;
f15271(i,si0);
si0=l11;
si0=!(si0);
if(si0){
goto L5;
}
si0=l3;
si1=96U;
si0+=si1;
si1=40U;
si0+=si1;
si1=l11;
si2=40U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=96U;
si0+=si1;
si1=32U;
si0+=si1;
si1=l11;
si2=32U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=96U;
si0+=si1;
si1=24U;
si0+=si1;
si1=l11;
si2=24U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=96U;
si0+=si1;
si1=16U;
si0+=si1;
si1=l11;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=96U;
si0+=si1;
si1=8U;
si0+=si1;
si1=l11;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=l11;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+96U,sj1);
si0=l3;
si1=40U;
si0+=si1;
si1=l1;
si2=l3;
si3=96U;
si2+=si3;
f1594(i,si0,si1,si2);
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=56U;
si0=f15269(i,si0);
l14=si0;
si0=!(si0);
if(si0){
goto L3;
}
si0=l14;
si1=l3;
sj1=i64_load(&i->m0,(U64)si1+40U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l14;
si1=48U;
si0+=si1;
si1=l3;
si2=40U;
si1+=si2;
si2=48U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l14;
si1=40U;
si0+=si1;
si1=l3;
si2=40U;
si1+=si2;
si2=40U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l14;
si1=32U;
si0+=si1;
si1=l3;
si2=40U;
si1+=si2;
si2=32U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l14;
si1=24U;
si0+=si1;
si1=l3;
si2=40U;
si1+=si2;
si2=24U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l14;
si1=16U;
si0+=si1;
si1=l3;
si2=40U;
si1+=si2;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l14;
si1=8U;
si0+=si1;
si1=l3;
si2=40U;
si1+=si2;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l11;
f15271(i,si0);
L5:;
si0=l3;
si1=l1;
i32_store(&i->m0,(U64)si0+56U,si1);
si0=l3;
si1=l12;
si2=l6;
si3=72U;
si2*=si3;
si1+=si2;
i32_store(&i->m0,(U64)si0+52U,si1);
si0=l3;
si1=l12;
i32_store(&i->m0,(U64)si0+48U,si1);
si0=l3;
si1=l7;
i32_store(&i->m0,(U64)si0+44U,si1);
si0=l3;
si1=l12;
i32_store(&i->m0,(U64)si0+40U,si1);
si0=l3;
si1=l3;
si2=96U;
si1+=si2;
i32_store(&i->m0,(U64)si0+60U,si1);
si0=l3;
si1=24U;
si0+=si1;
si1=l3;
si2=40U;
si1+=si2;
f1654(i,si0,si1);
si0=l3;
si1=40U;
si0+=si1;
si1=l1;
si2=l4;
f3534(i,si0,si1,si2);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+40U);
l13=si0;
si0=l3;
si1=96U;
si0+=si1;
si1=8U;
si0+=si1;
l11=si0;
si1=l3;
si2=40U;
si1+=si2;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=96U;
si0+=si1;
si1=16U;
si0+=si1;
l12=si0;
si1=l3;
si2=64U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=l3;
si2=40U;
si1+=si2;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+96U,sj1);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+44U);
l6=si0;
si1=2U;
si0=si0 == si1;
if(si0){
goto L7;
}
si0=l1;
si1=l3;
sj1=i64_load(&i->m0,(U64)si1+96U);
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l1;
si1=l6;
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
si1=20U;
si0+=si1;
si1=l12;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
si1=12U;
si0+=si1;
si1=l11;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
goto L6;
L7:;
si0=l1;
si1=l4;
i32_store(&i->m0,(U64)si0+16U,si1);
L6:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+8U);
l1=si0;
si0=l0;
si1=l13;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l0;
si1=l1;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l0;
si1=l8;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l9;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l15;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l0;
si1=l3;
sj1=i64_load(&i->m0,(U64)si1+24U);
i64_store(&i->m0,(U64)si0+32U,sj1);
si0=l0;
si1=40U;
si0+=si1;
si1=l3;
si2=24U;
si1+=si2;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l3;
sj1=i64_load(&i->m0,(U64)si1+8U);
i64_store(&i->m0,(U64)si0+44U,sj1);
si0=l0;
si1=52U;
si0+=si1;
si1=l3;
si2=8U;
si1+=si2;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l14;
i32_store(&i->m0,(U64)si0+56U,si1);
si0=l0;
si1=l10;
i32_store(&i->m0,(U64)si0+60U,si1);
si0=l0;
sj1=l5;
i64_store(&i->m0,(U64)si0+64U,sj1);
si0=l0;
si1=l2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+16U,sj1);
si0=l0;
si1=24U;
si0+=si1;
si1=l2;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=144U;
si0+=si1;
i->g0=si0;
goto L0;
L4:;
si0=4U;
si1=44U;
f52(i,si0,si1);
UNREACHABLE;
L3:;
si0=8U;
si1=56U;
f52(i,si0,si1);
UNREACHABLE;
L0:;
}

void f1726(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
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
U64 sj1;
si0=i->g0;
si1=144U;
si0-=si1;
l3=si0;
i->g0=si0;
si0=l2;
si1=24U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
si0=l2;
si1=20U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si0=l2;
si1=12U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si0=l2;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
si0=l2;
si1=32U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l8=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+16U);
l9=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+4U);
l10=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0);
l11=si0;
si0=l3;
si1=32U;
si0+=si1;
si1=l1;
si2=l2;
si2=i32_load(&i->m0,(U64)si2+28U);
l2=si2;
f3534(i,si0,si1,si2);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+32U);
l12=si0;
si0=l3;
si1=88U;
si0+=si1;
si1=8U;
si0+=si1;
l13=si0;
si1=l3;
si2=32U;
si1+=si2;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=88U;
si0+=si1;
si1=16U;
si0+=si1;
l14=si0;
si1=l3;
si2=32U;
si1+=si2;
si2=24U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=l3;
si2=32U;
si1+=si2;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+88U,sj1);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+36U);
l15=si0;
si1=2U;
si0=si0 == si1;
if(si0){
goto L2;
}
si0=l1;
si1=l3;
sj1=i64_load(&i->m0,(U64)si1+88U);
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l1;
si1=l15;
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
si1=20U;
si0+=si1;
si1=l14;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
si1=12U;
si0+=si1;
si1=l13;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
goto L1;
L2:;
si0=l1;
si1=l2;
i32_store(&i->m0,(U64)si0+16U,si1);
L1:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+8U);
l13=si0;
si0=l3;
si1=88U;
si0+=si1;
si1=40U;
si0+=si1;
si1=l11;
si2=40U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=88U;
si0+=si1;
si1=32U;
si0+=si1;
si1=l11;
si2=32U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=88U;
si0+=si1;
si1=24U;
si0+=si1;
si1=l11;
si2=24U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=88U;
si0+=si1;
si1=16U;
si0+=si1;
l14=si0;
si1=l11;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=88U;
si0+=si1;
si1=8U;
si0+=si1;
l15=si0;
si1=l11;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=l11;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+88U,sj1);
si0=l3;
si1=32U;
si0+=si1;
si1=l1;
si2=l3;
si3=88U;
si2+=si3;
f1594(i,si0,si1,si2);
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=56U;
si0=f15269(i,si0);
l2=si0;
si0=!(si0);
if(si0){
goto L3;
}
si0=l2;
si1=l3;
sj1=i64_load(&i->m0,(U64)si1+32U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=48U;
si0+=si1;
si1=l3;
si2=32U;
si1+=si2;
si2=48U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=40U;
si0+=si1;
si1=l3;
si2=32U;
si1+=si2;
si2=40U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=32U;
si0+=si1;
si1=l3;
si2=32U;
si1+=si2;
si2=32U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=24U;
si0+=si1;
si1=l3;
si2=32U;
si1+=si2;
si2=24U;
si1+=si2;
l16=si1;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=16U;
si0+=si1;
si1=l3;
si2=32U;
si1+=si2;
si2=16U;
si1+=si2;
l17=si1;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=8U;
si0+=si1;
si1=l3;
si2=32U;
si1+=si2;
si2=8U;
si1+=si2;
l18=si1;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l11;
f15271(i,si0);
si0=l3;
si1=l1;
i32_store(&i->m0,(U64)si0+88U,si1);
si0=l3;
si1=l9;
si2=l4;
si3=72U;
si2*=si3;
si1+=si2;
i32_store(&i->m0,(U64)si0+44U,si1);
si0=l3;
si1=l9;
i32_store(&i->m0,(U64)si0+40U,si1);
si0=l3;
si1=l5;
i32_store(&i->m0,(U64)si0+36U,si1);
si0=l3;
si1=l9;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l3;
si1=l3;
si2=136U;
si1+=si2;
i32_store(&i->m0,(U64)si0+52U,si1);
si0=l3;
si1=l3;
si2=88U;
si1+=si2;
i32_store(&i->m0,(U64)si0+48U,si1);
si0=l3;
si1=l3;
si2=32U;
si1+=si2;
f1663(i,si0,si1);
si0=l3;
si1=l1;
i32_store(&i->m0,(U64)si0+48U,si1);
si0=l3;
si1=l10;
si2=l6;
si3=48U;
si2*=si3;
si1+=si2;
i32_store(&i->m0,(U64)si0+44U,si1);
si0=l3;
si1=l10;
i32_store(&i->m0,(U64)si0+40U,si1);
si0=l3;
si1=l7;
i32_store(&i->m0,(U64)si0+36U,si1);
si0=l3;
si1=l10;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l3;
si1=l3;
si2=136U;
si1+=si2;
i32_store(&i->m0,(U64)si0+52U,si1);
si0=l3;
si1=16U;
si0+=si1;
si1=l3;
si2=32U;
si1+=si2;
f1653(i,si0,si1);
si0=l3;
si1=32U;
si0+=si1;
si1=l1;
si2=l8;
f3534(i,si0,si1,si2);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+32U);
l11=si0;
si0=l15;
si1=l17;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l14;
si1=l16;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=l18;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+88U,sj1);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+36U);
l9=si0;
si1=2U;
si0=si0 == si1;
if(si0){
goto L5;
}
si0=l1;
si1=l3;
sj1=i64_load(&i->m0,(U64)si1+88U);
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l1;
si1=l9;
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
si1=20U;
si0+=si1;
si1=l3;
si2=104U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
si1=12U;
si0+=si1;
si1=l3;
si2=96U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
goto L4;
L5:;
si0=l1;
si1=l8;
i32_store(&i->m0,(U64)si0+16U,si1);
L4:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+8U);
l1=si0;
si0=l0;
si1=l2;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l0;
si1=l11;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l0;
si1=l1;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l0;
si1=l12;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l13;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l3;
sj1=i64_load(&i->m0,(U64)si1+16U);
i64_store(&i->m0,(U64)si0+20U,sj1);
si0=l0;
si1=28U;
si0+=si1;
si1=l3;
si2=16U;
si1+=si2;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l3;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+32U,sj1);
si0=l0;
si1=40U;
si0+=si1;
si1=l3;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=144U;
si0+=si1;
i->g0=si0;
goto L0;
L3:;
si0=8U;
si1=56U;
f52(i,si0,si1);
UNREACHABLE;
L0:;
}

void f1727(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 si0,si1,si2;
si0=l0;
si1=l1;
si2=l2;
f1628(i,si0,si1,si2);
L0:;
}

U32 f1728(rustpythonInstance*i) {
U32 si0;
si0=13U;
L0:;
return si0;
}

U32 f1729(rustpythonInstance*i) {
U32 si0;
si0=6U;
L0:;
return si0;
}


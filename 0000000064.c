#include "w2c2_base.h"

#include "rustpython.h"

void f6430(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 si0,si1,si2;
U64 sj0,sj1,sj2;
si0=i->g0;
si1=48U;
si0-=si1;
l3=si0;
i->g0=si0;
si0=l0;
si1=l1;
si0=si0 == si1;
if(si0){
goto L2;
}
si0=l1;
si1=l0;
si0-=si1;
si1=2U;
si0>>=(si1&31);
l4=si0;
L3:;
{
si0=l3;
si1=l0;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
sj0=i64_load(&i->m0,(U64)si0+8U);
sj1=-4559927925765661819ULL;
sj0^=sj1;
si1=l1;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
sj2=8798821908827603765ULL;
sj1^=sj2;
sj0|=sj1;
si0=!(sj0);
if(si0){
goto L5;
}
si0=l3;
si1=1U;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l3;
si1=1654396U;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l3;
sj1=1ULL;
i64_store(&i->m0,(U64)si0+28U,sj1);
si0=l3;
si1=2337U;
i32_store(&i->m0,(U64)si0+44U,si1);
si0=l3;
si1=l3;
si2=40U;
si1+=si2;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l3;
si1=l3;
si2=12U;
si1+=si2;
i32_store(&i->m0,(U64)si0+40U,si1);
si0=l3;
si1=l3;
si2=16U;
si1+=si2;
f63(i,si0,si1);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+8U);
l5=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+4U);
l6=si0;
goto L4;
L5:;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=12U;
si0=f15269(i,si0);
l1=si0;
si0=!(si0);
if(si0){
goto L1;
}
si0=l1;
si1=8U;
si0+=si1;
si1=0U;
si1=i32_load(&i->m0,(U64)si1+1654412U);
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+1654404U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=l1;
i32_store(&i->m0,(U64)si0,si1);
si0=12U;
l5=si0;
si0=12U;
l6=si0;
L4:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+4U);
si1=l2;
si1=i32_load(&i->m0,(U64)si1+8U);
l7=si1;
si0-=si1;
si1=l5;
si0=si0 >= si1;
if(si0){
goto L6;
}
si0=l2;
si1=l7;
si2=l5;
f7248(i,si0,si1,si2);
si0=l2;
si0=i32_load(&i->m0,(U64)si0+8U);
l7=si0;
L6:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0);
si1=l7;
si0+=si1;
si1=l1;
si2=l5;
si0=f15390(i,si0,si1,si2);
si0=l2;
si1=l7;
si2=l5;
si1+=si2;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l6;
si0=!(si0);
if(si0){
goto L7;
}
si0=l1;
f15271(i,si0);
L7:;
si0=l0;
si1=4U;
si0+=si1;
l0=si0;
si0=l4;
si1=-1U;
si0+=si1;
l4=si0;
if(si0){
goto L3;
}
}
L2:;
si0=l3;
si1=48U;
si0+=si1;
i->g0=si0;
goto L0;
L1:;
si0=1U;
si1=12U;
f52(i,si0,si1);
UNREACHABLE;
L0:;
}

void f6431(rustpythonInstance*i,U32 l0,U32 l1) {
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
U32 si0,si1,si2;
si0=i->g0;
si1=32U;
si0-=si1;
l2=si0;
i->g0=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
l3=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+16U);
l5=si0;
si1=l0;
si2=20U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
l6=si1;
si0=si0 >= si1;
if(si0){
goto L3;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+12U);
l7=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+4U);
l8=si0;
si0=l5;
si1=3U;
si0<<=(si1&31);
l9=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+8U);
si1=l3;
si2=2U;
si1<<=(si2&31);
si0+=si1;
l1=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
l10=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+8U);
l11=si0;
L4:;
{
si0=l10;
si0=i32_load(&i->m0,(U64)si0+16U);
l0=si0;
si1=l5;
si0=si0 <= si1;
if(si0){
goto L2;
}
si0=l10;
si0=i32_load(&i->m0,(U64)si0+8U);
si1=l9;
si0+=si1;
l0=si0;
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l12=si0;
si1=l0;
si1=i32_load(&i->m0,(U64)si1);
l13=si1;
si0|=si1;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L6;
}
si0=l8;
si0=i32_load(&i->m0,(U64)si0+4U);
l14=si0;
si0=l8;
si0=i32_load(&i->m0,(U64)si0);
l0=si0;
si0=l2;
si1=l13;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l2;
si1=l12;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l2;
si1=l0;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=l0;
si2=l14;
si1+=si2;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l11;
si0=i32_load(&i->m0,(U64)si0+88U);
l0=si0;
si0=l2;
si1=16U;
si0+=si1;
si1=l2;
f11335(i,si0,si1);
si0=l0;
si1=24U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l0=si0;
si1=l0;
si1=i32_load(&i->m0,(U64)si1);
l12=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l12;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 == si1;
if(si0){
goto L1;
}
si0=l2;
si1=16U;
si0+=si1;
si1=l0;
si2=0U;
si0=f8110(i,si0,si1,si2);
l0=si0;
goto L5;
L6:;
si0=l7;
si0=i32_load(&i->m0,(U64)si0);
l0=si0;
si1=l0;
si1=i32_load(&i->m0,(U64)si1);
l12=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l12;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 == si1;
if(si0){
goto L1;
}
L5:;
si0=l1;
si1=l0;
i32_store(&i->m0,(U64)si0,si1);
si0=l9;
si1=8U;
si0+=si1;
l9=si0;
si0=l1;
si1=4U;
si0+=si1;
l1=si0;
si0=l3;
si1=1U;
si0+=si1;
l3=si0;
si0=l6;
si1=l5;
si2=1U;
si1+=si2;
l5=si1;
si0=si0 != si1;
if(si0){
goto L4;
}
}
L3:;
si0=l4;
si1=l3;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=32U;
si0+=si1;
i->g0=si0;
goto L0;
L2:;
si0=l5;
si1=l0;
si2=1981580U;
f663(i,si0,si1,si2);
UNREACHABLE;
L1:;
f15042(i);
UNREACHABLE;
L0:;
}

void f6432(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 si0,si1,si2;
U64 sj1;
si0=i->g0;
si1=64U;
si0-=si1;
l3=si0;
i->g0=si0;
si0=l0;
si1=l1;
si0=si0 == si1;
if(si0){
goto L1;
}
si0=l1;
si1=l0;
si0-=si1;
si1=4U;
si0>>=(si1&31);
l4=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+8U);
l1=si0;
L2:;
{
si0=l3;
si1=l0;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l3;
si1=1U;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l3;
si1=1654396U;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l3;
sj1=1ULL;
i64_store(&i->m0,(U64)si0+28U,sj1);
si0=l3;
si1=2338U;
i32_store(&i->m0,(U64)si0+44U,si1);
si0=l3;
si1=l3;
si2=40U;
si1+=si2;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l3;
si1=l3;
si2=12U;
si1+=si2;
i32_store(&i->m0,(U64)si0+40U,si1);
si0=l3;
si1=48U;
si0+=si1;
si1=l3;
si2=16U;
si1+=si2;
f63(i,si0,si1);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+48U);
l5=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+4U);
si1=l1;
si0-=si1;
si1=l3;
si1=i32_load(&i->m0,(U64)si1+56U);
l6=si1;
si0=si0 >= si1;
if(si0){
goto L3;
}
si0=l2;
si1=l1;
si2=l6;
f7248(i,si0,si1,si2);
si0=l2;
si0=i32_load(&i->m0,(U64)si0+8U);
l1=si0;
L3:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0);
si1=l1;
si0+=si1;
si1=l5;
si2=l6;
si0=f15390(i,si0,si1,si2);
si0=l2;
si1=l1;
si2=l6;
si1+=si2;
l1=si1;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+52U);
si0=!(si0);
if(si0){
goto L4;
}
si0=l5;
f15271(i,si0);
L4:;
si0=l0;
si1=16U;
si0+=si1;
l0=si0;
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
si1=64U;
si0+=si1;
i->g0=si0;
L0:;
}

void f6433(rustpythonInstance*i,U32 l0,U32 l1) {
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
U32 si0,si1,si2,si3;
U64 sj1;
si0=i->g0;
si1=192U;
si0-=si1;
l2=si0;
i->g0=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
l3=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+4U);
l6=si1;
si0=si0 == si1;
if(si0){
goto L6;
}
si0=l5;
si1=93U;
si0+=si1;
l7=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+8U);
si1=l3;
si2=2U;
si1<<=(si2&31);
si0+=si1;
l8=si0;
si0=l6;
si1=l5;
si0-=si1;
si1=96U;
si0=DIV_U(si0,si1);
l6=si0;
si0=l2;
si1=116U;
si0+=si1;
l9=si0;
si0=l2;
si1=96U;
si0+=si1;
si1=32U;
si0+=si1;
l10=si0;
si0=l2;
si1=176U;
si0+=si1;
l11=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+8U);
l12=si0;
L7:;
{
si0=l7;
si1=-25U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si0=1U;
l1=si0;
si0=l7;
si1=-17U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l0=si0;
si0=!(si0);
if(si0){
goto L8;
}
si0=l0;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L5;
}
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=l0;
si0=f15269(i,si0);
l1=si0;
si0=!(si0);
if(si0){
goto L4;
}
L8:;
si0=l1;
si1=l5;
si2=l0;
si0=f15390(i,si0,si1,si2);
l1=si0;
si0=l2;
si1=l0;
i32_store(&i->m0,(U64)si0+172U,si1);
si0=l2;
si1=l0;
i32_store(&i->m0,(U64)si0+168U,si1);
si0=l2;
si1=l1;
i32_store(&i->m0,(U64)si0+164U,si1);
si0=l7;
si1=-1U;
si0+=si1;
si0=i32_load16_u(&i->m0,(U64)si0);
l0=si0;
si0=l7;
si1=-29U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si0=l10;
si1=l7;
si2=-61U;
si1+=si2;
f12855(i,si0,si1);
si0=l2;
si1=l7;
si2=-69U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+120U,sj1);
si0=l2;
si1=l7;
si2=-77U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+112U,sj1);
si0=l2;
si1=l7;
si2=-85U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+104U,sj1);
si0=l2;
si1=l7;
si2=-93U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+96U,sj1);
si0=l11;
si1=l7;
si2=-13U;
si1+=si2;
f11208(i,si0,si1);
si0=l2;
si1=l1;
i32_store(&i->m0,(U64)si0+160U,si1);
si0=l2;
si1=l0;
i32_store16(&i->m0,(U64)si0+188U,si1);
si0=l2;
si1=l2;
si2=96U;
si1+=si2;
si2=96U;
si0=f15390(i,si0,si1,si2);
l1=si0;
si0=0U;
si0=i32_load(&i->m0,(U64)si0+2970172U);
si1=2U;
si0=si0 != si1;
if(si0){
goto L3;
}
si0=l12;
si0=i32_load(&i->m0,(U64)si0+88U);
l13=si0;
si0=0U;
si0=i32_load(&i->m0,(U64)si0+2970176U);
l5=si0;
si1=l5;
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
si0=0U;
l0=si0;
si0=l5;
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
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=64U;
si0=f15269(i,si0);
l0=si0;
si0=!(si0);
if(si0){
goto L1;
}
si0=l0;
sj1=-1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=56U;
si0+=si1;
sj1=-1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=48U;
si0+=si1;
sj1=-1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=40U;
si0+=si1;
sj1=-1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=32U;
si0+=si1;
sj1=-1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=24U;
si0+=si1;
sj1=-1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=16U;
si0+=si1;
sj1=-1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si1=8U;
i32_store(&i->m0,(U64)si0+112U,si1);
si0=l0;
si1=8U;
si0+=si1;
sj1=-1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l9;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l9;
si1=8U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l13;
si1=68U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l13=si0;
si1=l13;
si1=i32_load(&i->m0,(U64)si1);
l14=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
sj1=34359738376ULL;
i64_store(&i->m0,(U64)si0+104U,sj1);
si0=l1;
si1=l0;
i32_store(&i->m0,(U64)si0+100U,si1);
si0=l1;
si1=0U;
i32_store(&i->m0,(U64)si0+96U,si1);
si0=l14;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 == si1;
if(si0){
goto L2;
}
si0=l1;
si1=96U;
si0+=si1;
si1=l13;
si2=0U;
si0=f8146(i,si0,si1,si2);
l0=si0;
L9:;
si0=l8;
si1=l1;
si2=l5;
si3=l0;
si1=f8132(i,si1,si2,si3);
i32_store(&i->m0,(U64)si0,si1);
si0=l7;
si1=96U;
si0+=si1;
l7=si0;
si0=l8;
si1=4U;
si0+=si1;
l8=si0;
si0=l3;
si1=1U;
si0+=si1;
l3=si0;
si0=l6;
si1=-1U;
si0+=si1;
l6=si0;
if(si0){
goto L7;
}
}
L6:;
si0=l4;
si1=l3;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=192U;
si0+=si1;
i->g0=si0;
goto L0;
L5:;
f53(i);
UNREACHABLE;
L4:;
si0=1U;
si1=l0;
f52(i,si0,si1);
UNREACHABLE;
L3:;
si0=1881832U;
si1=36U;
si2=1881884U;
f703(i,si0,si1,si2);
UNREACHABLE;
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

void f6434(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 l8=0;
U32 l9=0;
U32 l10=0;
U32 si0,si1,si2;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
l2=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+4U);
l4=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+8U);
l6=si0;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+12U);
l7=si1;
si0=si0 == si1;
if(si0){
goto L3;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+8U);
si1=l2;
si2=12U;
si1*=si2;
si0+=si1;
l1=si0;
L4:;
{
si0=l6;
si0=i32_load(&i->m0,(U64)si0);
l8=si0;
si1=64U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l9=si0;
si0=1U;
l10=si0;
si0=l8;
si1=68U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l0=si0;
si0=!(si0);
if(si0){
goto L5;
}
si0=l0;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L2;
}
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=l0;
si0=f15269(i,si0);
l10=si0;
si0=!(si0);
if(si0){
goto L1;
}
L5:;
si0=l6;
si1=4U;
si0+=si1;
l6=si0;
si0=l10;
si1=l9;
si2=l0;
si0=f15390(i,si0,si1,si2);
l10=si0;
si0=l8;
si1=l8;
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
si0=l8;
f7690(i,si0);
L6:;
si0=l1;
si1=l10;
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
si1=8U;
si0+=si1;
si1=l0;
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
si1=4U;
si0+=si1;
si1=l0;
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
si1=12U;
si0+=si1;
l1=si0;
si0=l2;
si1=1U;
si0+=si1;
l2=si0;
si0=l6;
si1=l7;
si0=si0 != si1;
if(si0){
goto L4;
}
}
L3:;
si0=l3;
si1=l2;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si0=!(si0);
if(si0){
goto L7;
}
si0=l5;
f15271(i,si0);
L7:;
goto L0;
L2:;
f53(i);
UNREACHABLE;
L1:;
si0=1U;
si1=l0;
f52(i,si0,si1);
UNREACHABLE;
L0:;
}

void f6435(rustpythonInstance*i,U32 l0,U32 l1) {
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
U32 si0,si1,si2;
U64 sj1;
si0=i->g0;
si1=64U;
si0-=si1;
l2=si0;
i->g0=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
l3=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+4U);
l5=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+8U);
l7=si0;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+12U);
l8=si1;
si0=si0 == si1;
if(si0){
goto L2;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+16U);
l9=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+8U);
si1=l3;
si2=2U;
si1<<=(si2&31);
si0+=si1;
l0=si0;
si0=l2;
si1=8U;
si0+=si1;
si1=4U;
si0|=si1;
l10=si0;
si1=8U;
si0+=si1;
l11=si0;
si0=l10;
si1=16U;
si0+=si1;
l12=si0;
si0=l10;
si1=24U;
si0+=si1;
l13=si0;
si0=l10;
si1=32U;
si0+=si1;
l14=si0;
si0=l10;
si1=40U;
si0+=si1;
l15=si0;
si0=l10;
si1=48U;
si0+=si1;
l16=si0;
L4:;
{
si0=l7;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si1=39U;
si0=si0 == si1;
if(si0){
goto L3;
}
si0=l1;
si1=38U;
si0=si0 != si1;
if(si0){
goto L6;
}
si0=l9;
si0=i32_load(&i->m0,(U64)si0+88U);
si1=1272U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si1=l1;
si1=i32_load(&i->m0,(U64)si1);
l17=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l17;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 != si1;
if(si0){
goto L5;
}
f15042(i);
UNREACHABLE;
L6:;
si0=l10;
si1=l7;
sj1=i64_load(&i->m0,(U64)si1+4U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l11;
si1=l7;
si2=12U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l12;
si1=l7;
si2=20U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l13;
si1=l7;
si2=28U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l14;
si1=l7;
si2=36U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l15;
si1=l7;
si2=44U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l16;
si1=l7;
si2=52U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=l1;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l2;
si1=8U;
si0+=si1;
si1=l9;
si0=f7386(i,si0,si1);
l1=si0;
L5:;
si0=l0;
si1=l1;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=4U;
si0+=si1;
l0=si0;
si0=l3;
si1=1U;
si0+=si1;
l3=si0;
si0=l7;
si1=56U;
si0+=si1;
l7=si0;
si1=l8;
si0=si0 != si1;
if(si0){
goto L4;
}
}
si0=l4;
si1=l3;
i32_store(&i->m0,(U64)si0,si1);
goto L1;
L3:;
si0=l7;
si1=56U;
si0+=si1;
l7=si0;
L2:;
si0=l4;
si1=l3;
i32_store(&i->m0,(U64)si0,si1);
si0=l8;
si1=l7;
si0-=si1;
si1=56U;
si0=DIV_U(si0,si1);
l0=si0;
si0=l8;
si1=l7;
si0=si0 == si1;
if(si0){
goto L1;
}
L7:;
{
si0=l7;
si0=i32_load(&i->m0,(U64)si0);
si1=38U;
si0=si0 == si1;
if(si0){
goto L8;
}
si0=l7;
f13834(i,si0);
L8:;
si0=l7;
si1=56U;
si0+=si1;
l7=si0;
si0=l0;
si1=-1U;
si0+=si1;
l0=si0;
if(si0){
goto L7;
}
}
L1:;
si0=l5;
si0=!(si0);
if(si0){
goto L9;
}
si0=l6;
f15271(i,si0);
L9:;
si0=l2;
si1=64U;
si0+=si1;
i->g0=si0;
L0:;
}

void f6436(rustpythonInstance*i,U32 l0,U32 l1) {
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
U32 si0,si1,si2;
U64 sj1;
si0=i->g0;
si1=48U;
si0-=si1;
l2=si0;
i->g0=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
l3=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+4U);
l5=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+8U);
l7=si0;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+12U);
l8=si1;
si0=si0 == si1;
if(si0){
goto L2;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+16U);
l9=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+8U);
si1=l3;
si2=2U;
si1<<=(si2&31);
si0+=si1;
l0=si0;
si0=l2;
si1=8U;
si0+=si1;
si1=4U;
si0|=si1;
l10=si0;
si1=32U;
si0+=si1;
l11=si0;
si0=l10;
si1=24U;
si0+=si1;
l12=si0;
si0=l10;
si1=16U;
si0+=si1;
l13=si0;
si0=l10;
si1=8U;
si0+=si1;
l14=si0;
L4:;
{
si0=l7;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si0=!(si0);
if(si0){
goto L3;
}
si0=l10;
si1=l7;
sj1=i64_load(&i->m0,(U64)si1+4U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l11;
si1=l7;
si2=36U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l12;
si1=l7;
si2=28U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l13;
si1=l7;
si2=20U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l14;
si1=l7;
si2=12U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=l1;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l0;
si1=l2;
si2=8U;
si1+=si2;
si2=l9;
si1=f7532(i,si1,si2);
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=4U;
si0+=si1;
l0=si0;
si0=l3;
si1=1U;
si0+=si1;
l3=si0;
si0=l7;
si1=40U;
si0+=si1;
l7=si0;
si1=l8;
si0=si0 != si1;
if(si0){
goto L4;
}
}
si0=l4;
si1=l3;
i32_store(&i->m0,(U64)si0,si1);
goto L1;
L3:;
si0=l7;
si1=40U;
si0+=si1;
l7=si0;
L2:;
si0=l4;
si1=l3;
i32_store(&i->m0,(U64)si0,si1);
si0=l8;
si1=l7;
si0-=si1;
si1=40U;
si0=DIV_U(si0,si1);
l0=si0;
si0=l8;
si1=l7;
si0=si0 == si1;
if(si0){
goto L1;
}
si0=l7;
si1=32U;
si0+=si1;
l7=si0;
L5:;
{
si0=l7;
si1=-12U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L6;
}
si0=l7;
si1=-16U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
f15271(i,si0);
L6:;
si0=l7;
si1=-4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=!(si0);
if(si0){
goto L7;
}
si0=l7;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L7;
}
si0=l3;
f15271(i,si0);
L7:;
si0=l7;
si1=40U;
si0+=si1;
l7=si0;
si0=l0;
si1=-1U;
si0+=si1;
l0=si0;
if(si0){
goto L5;
}
}
L1:;
si0=l5;
si0=!(si0);
if(si0){
goto L8;
}
si0=l6;
f15271(i,si0);
L8:;
si0=l2;
si1=48U;
si0+=si1;
i->g0=si0;
L0:;
}

void f6437(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 l8=0;
U32 l9=0;
U32 si0,si1,si2,si3;
U64 sj1;
si0=i->g0;
si1=32U;
si0-=si1;
l2=si0;
i->g0=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
l3=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
si0=l0;
si1=12U;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
if(si0){
goto L2;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+4U);
l5=si0;
si1=l0;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
l6=si1;
si0=(U32)((I32)si0>(I32)si1);
if(si0){
goto L2;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+8U);
l7=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
l0=si0;
si0=l5;
si1=l6;
si0=(U32)((I32)si0>=(I32)si1);
if(si0){
goto L4;
}
si0=l7;
si1=l3;
si2=2U;
si1<<=(si2&31);
si0+=si1;
l1=si0;
L5:;
{
si0=l0;
si1=l0;
si1=i32_load(&i->m0,(U64)si1);
l8=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=0U;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l2;
si1=l5;
si2=-1U;
si1=(U32)((I32)si1>(I32)si2);
i32_store8(&i->m0,(U64)si0+24U,si1);
si0=l2;
si1=l5;
si2=l5;
si3=31U;
si2=(U32)((I32)si2>>(si3&31));
l9=si2;
si1^=si2;
si2=l9;
si1-=si2;
sj1=(U64)(si1);
i64_store(&i->m0,(U64)si0+16U,sj1);
si0=l8;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 == si1;
if(si0){
goto L1;
}
si0=l1;
si1=l2;
si2=8U;
si1+=si2;
si2=l0;
si3=0U;
si1=f8067(i,si1,si2,si3);
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
si1=4U;
si0+=si1;
l1=si0;
si0=l3;
si1=1U;
si0+=si1;
l3=si0;
si0=l6;
si1=l5;
si2=1U;
si1+=si2;
l5=si1;
si0=si0 != si1;
if(si0){
goto L5;
}
goto L3;
}
L4:;
si0=l5;
si1=l6;
si0=si0 != si1;
if(si0){
goto L2;
}
L3:;
si0=l0;
si1=l0;
si1=i32_load(&i->m0,(U64)si1);
l5=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=0U;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l2;
si1=l6;
si2=-1U;
si1=(U32)((I32)si1>(I32)si2);
i32_store8(&i->m0,(U64)si0+24U,si1);
si0=l2;
si1=l6;
si2=l6;
si3=31U;
si2=(U32)((I32)si2>>(si3&31));
l1=si2;
si1^=si2;
si2=l1;
si1-=si2;
sj1=(U64)(si1);
i64_store(&i->m0,(U64)si0+16U,sj1);
si0=l5;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 == si1;
if(si0){
goto L1;
}
si0=l7;
si1=l3;
si2=2U;
si1<<=(si2&31);
si0+=si1;
si1=l2;
si2=8U;
si1+=si2;
si2=l0;
si3=0U;
si1=f8067(i,si1,si2,si3);
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=1U;
si0+=si1;
l3=si0;
L2:;
si0=l4;
si1=l3;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=32U;
si0+=si1;
i->g0=si0;
goto L0;
L1:;
f15042(i);
UNREACHABLE;
L0:;
}

void f6438(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 l8=0;
U32 l9=0;
U64 l10=0;
U32 l11=0;
U32 l12=0;
U32 si0,si1,si2,si3;
U64 sj0,sj2,sj3;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
l2=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+4U);
l4=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+8U);
l6=si0;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+12U);
l7=si1;
si0=si0 == si1;
if(si0){
goto L3;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+16U);
l8=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+8U);
si1=l2;
si2=2U;
si1<<=(si2&31);
si0+=si1;
l0=si0;
L5:;
{
si0=l6;
si0=i32_load(&i->m0,(U64)si0);
l9=si0;
si0=!(si0);
if(si0){
goto L4;
}
si0=l6;
sj0=i64_load(&i->m0,(U64)si0+4U);
l10=sj0;
si0=l8;
si0=i32_load(&i->m0,(U64)si0);
l11=si0;
si0=i32_load(&i->m0,(U64)si0+192U);
l1=si0;
si1=l1;
si1=i32_load(&i->m0,(U64)si1);
l12=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l12;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 == si1;
if(si0){
goto L1;
}
si0=l11;
si1=1200U;
si0+=si1;
si1=l9;
sj2=l10;
sj3=32ULL;
sj2>>=(sj3&63);
si2=(U32)(sj2);
si3=l1;
si0=f12275(i,si0,si1,si2,si3);
l1=si0;
sj0=l10;
si0=(U32)(sj0);
si0=!(si0);
if(si0){
goto L6;
}
si0=l9;
f15271(i,si0);
L6:;
si0=l0;
si1=l1;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=4U;
si0+=si1;
l0=si0;
si0=l2;
si1=1U;
si0+=si1;
l2=si0;
si0=l6;
si1=12U;
si0+=si1;
l6=si0;
si1=l7;
si0=si0 != si1;
if(si0){
goto L5;
}
}
si0=l3;
si1=l2;
i32_store(&i->m0,(U64)si0,si1);
goto L2;
L4:;
si0=l6;
si1=12U;
si0+=si1;
l6=si0;
L3:;
si0=l3;
si1=l2;
i32_store(&i->m0,(U64)si0,si1);
si0=l7;
si1=l6;
si0-=si1;
si1=12U;
si0=DIV_U(si0,si1);
l0=si0;
si0=l7;
si1=l6;
si0=si0 == si1;
if(si0){
goto L2;
}
L7:;
{
si0=l6;
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L8;
}
si0=l6;
si0=i32_load(&i->m0,(U64)si0);
f15271(i,si0);
L8:;
si0=l6;
si1=12U;
si0+=si1;
l6=si0;
si0=l0;
si1=-1U;
si0+=si1;
l0=si0;
if(si0){
goto L7;
}
}
L2:;
si0=l4;
si0=!(si0);
if(si0){
goto L9;
}
si0=l5;
f15271(i,si0);
L9:;
goto L0;
L1:;
f15042(i);
UNREACHABLE;
L0:;
}

void f6439(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 l8=0;
U32 l9=0;
U32 l10=0;
U32 si0,si1,si2;
si0=i->g0;
si1=96U;
si0-=si1;
l2=si0;
i->g0=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
l3=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+4U);
l5=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+8U);
l7=si0;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+12U);
l8=si1;
si0=si0 == si1;
if(si0){
goto L2;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+16U);
l9=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+8U);
si1=l3;
si2=2U;
si1<<=(si2&31);
si0+=si1;
l0=si0;
si0=l2;
si1=8U;
si0+=si1;
si1=4U;
si0|=si1;
l10=si0;
L4:;
{
si0=l7;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si1=38U;
si0=si0 == si1;
if(si0){
goto L3;
}
si0=l10;
si1=l7;
si2=4U;
si1+=si2;
si2=84U;
si0=f15390(i,si0,si1,si2);
si0=l2;
si1=l1;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l0;
si1=l2;
si2=8U;
si1+=si2;
si2=l9;
si1=f7530(i,si1,si2);
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=4U;
si0+=si1;
l0=si0;
si0=l3;
si1=1U;
si0+=si1;
l3=si0;
si0=l7;
si1=88U;
si0+=si1;
l7=si0;
si1=l8;
si0=si0 != si1;
if(si0){
goto L4;
}
}
si0=l4;
si1=l3;
i32_store(&i->m0,(U64)si0,si1);
goto L1;
L3:;
si0=l7;
si1=88U;
si0+=si1;
l7=si0;
L2:;
si0=l4;
si1=l3;
i32_store(&i->m0,(U64)si0,si1);
si0=l8;
si1=l7;
si0-=si1;
si1=88U;
si0=DIV_U(si0,si1);
l0=si0;
si0=l8;
si1=l7;
si0=si0 == si1;
if(si0){
goto L1;
}
L5:;
{
si0=l7;
si1=72U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=!(si0);
if(si0){
goto L6;
}
si0=l7;
si1=76U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L6;
}
si0=l3;
f15271(i,si0);
L6:;
si0=l7;
f13834(i,si0);
si0=l7;
si1=88U;
si0+=si1;
l7=si0;
si0=l0;
si1=-1U;
si0+=si1;
l0=si0;
if(si0){
goto L5;
}
}
L1:;
si0=l5;
si0=!(si0);
if(si0){
goto L7;
}
si0=l6;
f15271(i,si0);
L7:;
si0=l2;
si1=96U;
si0+=si1;
i->g0=si0;
L0:;
}

void f6440(rustpythonInstance*i,U32 l0,U32 l1) {
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
U32 si0,si1,si2;
U64 sj1;
si0=i->g0;
si1=64U;
si0-=si1;
l2=si0;
i->g0=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
l3=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+4U);
l5=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+8U);
l7=si0;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+12U);
l8=si1;
si0=si0 == si1;
if(si0){
goto L2;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+16U);
l9=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+8U);
si1=l3;
si2=2U;
si1<<=(si2&31);
si0+=si1;
l0=si0;
si0=l2;
si1=4U;
si0|=si1;
l10=si0;
si1=56U;
si0+=si1;
l11=si0;
si0=l10;
si1=48U;
si0+=si1;
l12=si0;
si0=l10;
si1=40U;
si0+=si1;
l13=si0;
si0=l10;
si1=32U;
si0+=si1;
l14=si0;
si0=l10;
si1=24U;
si0+=si1;
l15=si0;
si0=l10;
si1=16U;
si0+=si1;
l16=si0;
si0=l10;
si1=8U;
si0+=si1;
l17=si0;
L4:;
{
si0=l7;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si1=38U;
si0=si0 == si1;
if(si0){
goto L3;
}
si0=l10;
si1=l7;
sj1=i64_load(&i->m0,(U64)si1+4U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l11;
si1=l7;
si2=60U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l12;
si1=l7;
si2=52U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l13;
si1=l7;
si2=44U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l14;
si1=l7;
si2=36U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l15;
si1=l7;
si2=28U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l16;
si1=l7;
si2=20U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l17;
si1=l7;
si2=12U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=l1;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l2;
si2=l9;
si1=f7534(i,si1,si2);
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=4U;
si0+=si1;
l0=si0;
si0=l3;
si1=1U;
si0+=si1;
l3=si0;
si0=l7;
si1=64U;
si0+=si1;
l7=si0;
si1=l8;
si0=si0 != si1;
if(si0){
goto L4;
}
}
si0=l4;
si1=l3;
i32_store(&i->m0,(U64)si0,si1);
goto L1;
L3:;
si0=l7;
si1=64U;
si0+=si1;
l7=si0;
L2:;
si0=l4;
si1=l3;
i32_store(&i->m0,(U64)si0,si1);
si0=l8;
si1=l7;
si0=si0 == si1;
if(si0){
goto L1;
}
si0=l8;
si1=l7;
si0-=si1;
si1=6U;
si0>>=(si1&31);
l3=si0;
L5:;
{
si0=l7;
f13834(i,si0);
si0=l7;
si1=56U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l0=si0;
si0=!(si0);
if(si0){
goto L6;
}
si0=l0;
f13834(i,si0);
si0=l0;
f15271(i,si0);
L6:;
si0=l7;
si1=64U;
si0+=si1;
l7=si0;
si0=l3;
si1=-1U;
si0+=si1;
l3=si0;
if(si0){
goto L5;
}
}
L1:;
si0=l5;
si0=!(si0);
if(si0){
goto L7;
}
si0=l6;
f15271(i,si0);
L7:;
si0=l2;
si1=64U;
si0+=si1;
i->g0=si0;
L0:;
}

void f6441(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 l8=0;
U32 l9=0;
U32 si0,si1,si2,si3;
si0=i->g0;
si1=32U;
si0-=si1;
l2=si0;
i->g0=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+4U);
l3=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+8U);
l5=si0;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+12U);
l6=si1;
si0=si0 == si1;
if(si0){
goto L4;
}
L6:;
{
si0=l5;
si0=i32_load(&i->m0,(U64)si0);
l0=si0;
si0=!(si0);
if(si0){
goto L5;
}
si0=l0;
si1=64U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+4U);
l8=si0;
si0=l0;
si1=68U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l0=si0;
if(si0){
goto L8;
}
si0=1U;
l9=si0;
goto L7;
L8:;
si0=l0;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L2;
}
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=l0;
si0=f15269(i,si0);
l9=si0;
si0=!(si0);
if(si0){
goto L1;
}
L7:;
si0=l9;
si1=l7;
si2=l0;
si0=f15390(i,si0,si1,si2);
l7=si0;
si0=l2;
si1=l0;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l2;
si1=l0;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l2;
si1=l7;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l2;
si1=8U;
si0+=si1;
si1=l1;
si2=l2;
si3=16U;
si2+=si3;
si3=l8;
f10599(i,si0,si1,si2,si3);
si0=l2;
si0=i32_load(&i->m0,(U64)si0+12U);
l0=si0;
si0=!(si0);
if(si0){
goto L9;
}
si0=l0;
si1=l0;
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
si0=l0;
f7690(i,si0);
L9:;
si0=l5;
si1=12U;
si0+=si1;
l5=si0;
si1=l6;
si0=si0 != si1;
if(si0){
goto L6;
}
goto L3;
}
L5:;
si0=l5;
si1=12U;
si0+=si1;
l5=si0;
L4:;
si0=l6;
si1=l5;
si0-=si1;
si1=12U;
si0=DIV_U(si0,si1);
l7=si0;
si0=l6;
si1=l5;
si0=si0 == si1;
if(si0){
goto L3;
}
si0=l5;
si1=4U;
si0+=si1;
l0=si0;
L10:;
{
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
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
goto L11;
}
si0=l5;
f7690(i,si0);
L11:;
si0=l0;
si1=12U;
si0+=si1;
l0=si0;
si0=l7;
si1=-1U;
si0+=si1;
l7=si0;
if(si0){
goto L10;
}
}
L3:;
si0=l3;
si0=!(si0);
if(si0){
goto L12;
}
si0=l4;
f15271(i,si0);
L12:;
si0=l2;
si1=32U;
si0+=si1;
i->g0=si0;
goto L0;
L2:;
f53(i);
UNREACHABLE;
L1:;
si0=1U;
si1=l0;
f52(i,si0,si1);
UNREACHABLE;
L0:;
}

void f6442(rustpythonInstance*i,U32 l0,U32 l1) {
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
U32 si0,si1,si2;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
l2=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+4U);
l5=si1;
si0=si0 == si1;
if(si0){
goto L2;
}
si0=l0;
si1=16U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si0=l0;
si1=12U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+8U);
l8=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+8U);
l9=si0;
si0=l5;
si1=l4;
si0-=si1;
si1=2U;
si0>>=(si1&31);
l10=si0;
si0=0U;
l11=si0;
L3:;
{
si0=l4;
si1=l11;
si2=2U;
si1<<=(si2&31);
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l12=si0;
si0=l9;
si0=i32_load(&i->m0,(U64)si0);
l0=si0;
si1=60U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si0=!(si0);
if(si0){
goto L6;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+56U);
l0=si0;
si0=l1;
si1=2U;
si0<<=(si1&31);
l13=si0;
si0=0U;
l1=si0;
si0=l7;
l5=si0;
L7:;
{
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
si1=l12;
si0=si0 == si1;
if(si0){
goto L5;
}
si0=l5;
si1=4U;
si0+=si1;
l5=si0;
si0=l1;
si1=1U;
si0+=si1;
l1=si0;
si0=l0;
si1=4U;
si0+=si1;
l0=si0;
si0=l13;
si1=-4U;
si0+=si1;
l13=si0;
if(si0){
goto L7;
}
}
L6:;
si0=l12;
si1=l12;
si1=i32_load(&i->m0,(U64)si1);
l0=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 != si1;
if(si0){
goto L4;
}
goto L1;
L5:;
si0=l1;
si1=l6;
si0=si0 < si1;
if(si0){
goto L8;
}
si0=l1;
si1=l6;
si2=1648928U;
f663(i,si0,si1,si2);
UNREACHABLE;
L8:;
si0=l5;
si0=i32_load(&i->m0,(U64)si0);
l12=si0;
si1=l12;
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
goto L1;
}
L4:;
si0=l8;
si1=l2;
si2=2U;
si1<<=(si2&31);
si0+=si1;
si1=l12;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=1U;
si0+=si1;
l2=si0;
si0=l11;
si1=1U;
si0+=si1;
l11=si0;
si1=l10;
si0=si0 != si1;
if(si0){
goto L3;
}
}
L2:;
si0=l3;
si1=l2;
i32_store(&i->m0,(U64)si0,si1);
goto L0;
L1:;
f15042(i);
UNREACHABLE;
L0:;
}

void f6443(rustpythonInstance*i,U32 l0,U32 l1) {
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
si1=48U;
si0-=si1;
l2=si0;
i->g0=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
l3=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+16U);
l5=si0;
si1=l0;
si2=20U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
l6=si1;
si0=si0 >= si1;
if(si0){
goto L3;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+12U);
l7=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+4U);
l8=si0;
si0=l5;
si1=3U;
si0<<=(si1&31);
l9=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+8U);
si1=l3;
si2=2U;
si1<<=(si2&31);
si0+=si1;
l1=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
l10=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+8U);
l11=si0;
L4:;
{
si0=l10;
si0=i32_load(&i->m0,(U64)si0+16U);
l0=si0;
si1=l5;
si0=si0 <= si1;
if(si0){
goto L2;
}
si0=l10;
si0=i32_load(&i->m0,(U64)si0+8U);
si1=l9;
si0+=si1;
l0=si0;
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l12=si0;
si1=l0;
si1=i32_load(&i->m0,(U64)si1);
l13=si1;
si0|=si1;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L6;
}
si0=l8;
si0=i32_load(&i->m0,(U64)si0+4U);
l14=si0;
si0=l8;
si0=i32_load(&i->m0,(U64)si0);
l0=si0;
si0=l11;
si0=i32_load(&i->m0,(U64)si0+88U);
l15=si0;
si0=l2;
si1=l13;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l2;
si1=l12;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l2;
si1=l0;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l2;
si1=l0;
si2=l14;
si1+=si2;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l2;
si1=32U;
si0+=si1;
si1=8U;
si0+=si1;
l0=si0;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
sj1=1ULL;
i64_store(&i->m0,(U64)si0+32U,sj1);
si0=l2;
si1=32U;
si0+=si1;
si1=l2;
si2=16U;
si1+=si2;
f11744(i,si0,si1);
si0=l2;
si1=8U;
si0+=si1;
si1=l0;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=l2;
sj1=i64_load(&i->m0,(U64)si1+32U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=l15;
si2=8U;
si1+=si2;
si0=f10804(i,si0,si1);
l0=si0;
goto L5;
L6:;
si0=l7;
si0=i32_load(&i->m0,(U64)si0);
l0=si0;
si1=l0;
si1=i32_load(&i->m0,(U64)si1);
l12=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l12;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 == si1;
if(si0){
goto L1;
}
L5:;
si0=l1;
si1=l0;
i32_store(&i->m0,(U64)si0,si1);
si0=l9;
si1=8U;
si0+=si1;
l9=si0;
si0=l1;
si1=4U;
si0+=si1;
l1=si0;
si0=l3;
si1=1U;
si0+=si1;
l3=si0;
si0=l6;
si1=l5;
si2=1U;
si1+=si2;
l5=si1;
si0=si0 != si1;
if(si0){
goto L4;
}
}
L3:;
si0=l4;
si1=l3;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=48U;
si0+=si1;
i->g0=si0;
goto L0;
L2:;
si0=l5;
si1=l0;
si2=1981580U;
f663(i,si0,si1,si2);
UNREACHABLE;
L1:;
f15042(i);
UNREACHABLE;
L0:;
}

void f6444(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 l3=0;
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
si1=16U;
si0-=si1;
l2=si0;
i->g0=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
l3=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+4U);
l6=si1;
si0=si0 == si1;
if(si0){
goto L3;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+8U);
l7=si0;
si0=l5;
si1=4U;
si0+=si1;
l0=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+8U);
si1=l3;
si2=2U;
si1<<=(si2&31);
si0+=si1;
l1=si0;
si0=l6;
si1=l5;
si0-=si1;
si1=4U;
si0>>=(si1&31);
l5=si0;
L4:;
{
si0=l0;
si1=-4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
switch(si0){
case 0:
goto L8;
case 1:
goto L7;
case 2:
goto L6;
default:
goto L8;
}
L8:;
si0=1U;
si1=l0;
si2=l7;
si0=f11999(i,si0,si1,si2);
l6=si0;
goto L5;
L7:;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
l8=si0;
si0=8U;
si0=f15269(i,si0);
l6=si0;
si0=!(si0);
if(si0){
goto L2;
}
si0=l7;
si0=i32_load(&i->m0,(U64)si0+88U);
si1=1268U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l9=si0;
si1=l9;
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
goto L1;
}
si0=l6;
si1=l8;
si2=l7;
si1=f12593(i,si1,si2);
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l6;
si1=l9;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
sj1=8589934594ULL;
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l2;
si1=l6;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=l7;
si1=i32_load(&i->m0,(U64)si1+88U);
si2=8U;
si1+=si2;
si0=f5724(i,si0,si1);
l6=si0;
goto L5;
L6:;
si0=0U;
si1=l0;
si2=l7;
si0=f11999(i,si0,si1,si2);
l6=si0;
L5:;
si0=l1;
si1=l6;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=16U;
si0+=si1;
l0=si0;
si0=l1;
si1=4U;
si0+=si1;
l1=si0;
si0=l3;
si1=1U;
si0+=si1;
l3=si0;
si0=l5;
si1=-1U;
si0+=si1;
l5=si0;
if(si0){
goto L4;
}
}
L3:;
si0=l4;
si1=l3;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=16U;
si0+=si1;
i->g0=si0;
goto L0;
L2:;
si0=4U;
si1=8U;
f52(i,si0,si1);
UNREACHABLE;
L1:;
f15042(i);
UNREACHABLE;
L0:;
}

void f6445(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 l8=0;
U32 l9=0;
U32 si0,si1,si2,si3;
U64 sj1;
si0=i->g0;
si1=16U;
si0-=si1;
l2=si0;
i->g0=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
l3=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+4U);
l6=si1;
si0=si0 == si1;
if(si0){
goto L2;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+8U);
l7=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+8U);
si1=l3;
si2=2U;
si1<<=(si2&31);
si0+=si1;
l1=si0;
si0=l6;
si1=l5;
si0-=si1;
si1=3U;
si0>>=(si1&31);
l6=si0;
L3:;
{
si0=l5;
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l8=si0;
si0=l5;
si0=i32_load(&i->m0,(U64)si0);
l9=si0;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=8U;
si0=f15269(i,si0);
l0=si0;
si0=!(si0);
if(si0){
goto L1;
}
si0=l9;
si1=l7;
si0=f13365(i,si0,si1);
l9=si0;
si0=l0;
si1=l8;
si2=l7;
si1=f13365(i,si1,si2);
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l9;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
sj1=8589934594ULL;
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l2;
si1=l0;
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
si1=l2;
si2=l7;
si2=i32_load(&i->m0,(U64)si2+88U);
si3=8U;
si2+=si3;
si1=f5724(i,si1,si2);
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=8U;
si0+=si1;
l5=si0;
si0=l1;
si1=4U;
si0+=si1;
l1=si0;
si0=l3;
si1=1U;
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
si0=l4;
si1=l3;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=16U;
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

void f6446(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 si0,si1,si2;
U64 sj1;
si0=i->g0;
si1=80U;
si0-=si1;
l4=si0;
i->g0=si0;
si0=l4;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+12U);
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l4;
si1=40U;
si0+=si1;
si1=l4;
si2=8U;
si1+=si2;
si2=l1;
si2=i32_load(&i->m0,(U64)si2+8U);
f14699(i,si0,si1,si2);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+44U);
l5=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+40U);
switch(si0){
case 0:
goto L5;
case 1:
goto L6;
case 2:
goto L4;
default:
goto L5;
}
L6:;
si0=l5;
si0=!(si0);
if(si0){
goto L7;
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
goto L7;
}
si0=l5;
f7690(i,si0);
L7:;
si0=0U;
l5=si0;
goto L1;
L5:;
si0=l4;
si1=40U;
si0+=si1;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+16U);
si1=i32_load(&i->m0,(U64)si1);
si2=l5;
f7533(i,si0,si1,si2);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+44U);
l5=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+40U);
l1=si0;
si0=!(si0);
if(si0){
goto L3;
}
si0=l4;
si1=8U;
si0+=si1;
si1=24U;
si0+=si1;
si1=l4;
si2=72U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=8U;
si0+=si1;
si1=16U;
si0+=si1;
si1=l4;
si2=40U;
si1+=si2;
si2=24U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=16U;
si0+=si1;
si1=l4;
si2=40U;
si1+=si2;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1+48U);
i64_store(&i->m0,(U64)si0+8U,sj1);
goto L2;
L4:;
si0=l4;
si1=0U;
i32_store(&i->m0,(U64)si0+40U,si1);
si0=l4;
si1=l5;
i32_store(&i->m0,(U64)si0+44U,si1);
L3:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si0=!(si0);
if(si0){
goto L8;
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
goto L8;
}
si0=l1;
f7690(i,si0);
L8:;
si0=l3;
si1=l5;
i32_store(&i->m0,(U64)si0,si1);
si0=0U;
l1=si0;
L2:;
si0=l0;
si1=12U;
si0+=si1;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1+8U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=36U;
si0+=si1;
si1=l4;
si2=32U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=28U;
si0+=si1;
si1=l4;
si2=24U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=20U;
si0+=si1;
si1=l4;
si2=8U;
si1+=si2;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=8U;
si0+=si1;
si1=l5;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l1;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=1U;
l5=si0;
L1:;
si0=l0;
si1=l5;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=80U;
si0+=si1;
i->g0=si0;
L0:;
}

void f6447(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4) {
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
U64 sj2,sj3,sj4;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+8U);
l5=si0;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+12U);
si0=si0 == si1;
if(si0){
goto L1;
}
L2:;
{
si0=l1;
si1=l5;
si2=4U;
si1+=si2;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l5;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si1=0U;
si2=l5;
sj2=i64_load(&i->m0,(U64)si2+8U);
sj3=-1851977428690684601ULL;
sj2^=sj3;
si3=l5;
si4=16U;
si3+=si4;
sj3=i64_load(&i->m0,(U64)si3);
sj4=-786598182489054301ULL;
sj3^=sj4;
sj2|=sj3;
si2=!(sj2);
l6=si2;
si0=si2?si0:si1;
l7=si0;
si0=l5;
si0=i32_load(&i->m0,(U64)si0);
si1=0U;
si0=(U32)((I32)si0<(I32)si1);
if(si0){
goto L6;
}
si0=l6;
si0=!(si0);
if(si0){
goto L4;
}
si0=l7;
si1=68U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l8=si0;
si0=l7;
si1=64U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l9=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+16U);
si0=i32_load(&i->m0,(U64)si0+88U);
l7=si0;
si1=1208U;
si0+=si1;
l10=si0;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si1=8U;
si0&=si1;
if(si0){
goto L7;
}
si0=l6;
si1=16U;
si0+=si1;
l11=si0;
si1=l6;
si0=si0 < si1;
if(si0){
goto L7;
}
si0=l7;
si1=l11;
si2=l7;
si2=i32_load(&i->m0,(U64)si2+1208U);
l12=si2;
si3=l12;
si4=l6;
si3=si3 == si4;
si1=si3?si1:si2;
i32_store(&i->m0,(U64)si0+1208U,si1);
si0=l12;
si1=l6;
si0=si0 == si1;
if(si0){
goto L5;
}
L7:;
si0=l10;
si1=0U;
sj2=l13;
si3=1000000000U;
si0=f1432(i,si0,si1,sj2,si3);
goto L5;
L6:;
si0=l6;
si0=!(si0);
if(si0){
goto L8;
}
si0=l5;
l6=si0;
si0=l7;
si0=i32_load(&i->m0,(U64)si0);
si1=0U;
si0=(U32)((I32)si0>=(I32)si1);
if(si0){
goto L4;
}
goto L3;
L8:;
si0=1647592U;
si1=43U;
si2=1658752U;
f673(i,si0,si1,si2);
UNREACHABLE;
L5:;
si0=l7;
si1=1216U;
si0+=si1;
si1=l9;
si2=l8;
si0=f13453(i,si0,si1,si2);
l6=si0;
if(si0){
goto L10;
}
si0=0U;
l6=si0;
goto L9;
L10:;
si0=l6;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
L9:;
si0=l7;
si1=l7;
si1=i32_load(&i->m0,(U64)si1+1208U);
l12=si1;
si2=-16U;
si1+=si2;
i32_store(&i->m0,(U64)si0+1208U,si1);
si0=l12;
si1=-14U;
si0&=si1;
si1=18U;
si0=si0 != si1;
if(si0){
goto L11;
}
si0=l10;
f1433(i,si0);
L11:;
si0=l6;
if(si0){
goto L3;
}
L4:;
si0=1647592U;
si1=43U;
si2=1659384U;
f673(i,si0,si1,si2);
UNREACHABLE;
L3:;
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
goto L12;
}
si0=l5;
f7690(i,si0);
L12:;
si0=l3;
si1=l6;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=4U;
si0+=si1;
l3=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+8U);
l5=si0;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+12U);
si0=si0 != si1;
if(si0){
goto L2;
}
}
L1:;
si0=l0;
si1=l3;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l2;
i32_store(&i->m0,(U64)si0,si1);
L0:;
}

void f6448(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U64 l8=0;
U32 si0,si1,si2,si3,si4,si5,si6;
U64 sj0,sj1;
si0=i->g0;
si1=80U;
si0-=si1;
l4=si0;
i->g0=si0;
si0=0U;
l5=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+16U);
l6=si0;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+20U);
si0=si0 >= si1;
if(si0){
goto L1;
}
si0=l1;
si1=l6;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+28U);
l5=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
si0=l4;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+8U);
si2=l6;
si3=3U;
si2<<=(si3&31);
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+8U,sj1);
si0=l4;
si1=l5;
si2=1807769U;
si3=35U;
si4=l7;
si5=l6;
si6=2U;
si5<<=(si6&31);
si4+=si5;
si4=i32_load(&i->m0,(U64)si4);
si5=l5;
f7340(i,si0,si1,si2,si3,si4,si5);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+4U);
l1=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L4;
}
si0=l4;
si1=l1;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l4;
si1=40U;
si0+=si1;
si1=12U;
si0+=si1;
sj1=2ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=64U;
si0+=si1;
si1=12U;
si0+=si1;
si1=2024U;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=2U;
i32_store(&i->m0,(U64)si0+44U,si1);
si0=l4;
si1=1668932U;
i32_store(&i->m0,(U64)si0+40U,si1);
si0=l4;
si1=1215U;
i32_store(&i->m0,(U64)si0+68U,si1);
si0=l4;
si1=l4;
si2=64U;
si1+=si2;
i32_store(&i->m0,(U64)si0+48U,si1);
si0=l4;
si1=l4;
si2=20U;
si1+=si2;
i32_store(&i->m0,(U64)si0+72U,si1);
si0=l4;
si1=l4;
si2=8U;
si1+=si2;
i32_store(&i->m0,(U64)si0+64U,si1);
si0=l4;
si1=24U;
si0+=si1;
si1=l4;
si2=40U;
si1+=si2;
f63(i,si0,si1);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+24U);
l5=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+28U);
l1=si0;
si0=l4;
sj0=i64_load32_u(&i->m0,(U64)si0+32U);
l8=sj0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+20U);
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
goto L5;
}
si0=l6;
f7690(i,si0);
L5:;
si0=l5;
if(si0){
goto L3;
}
L4:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si0=!(si0);
if(si0){
goto L6;
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
goto L6;
}
si0=l5;
f7690(i,si0);
L6:;
si0=l3;
si1=l1;
i32_store(&i->m0,(U64)si0,si1);
si0=0U;
l5=si0;
goto L2;
L3:;
sj0=l8;
sj1=32ULL;
sj0<<=(sj1&63);
si1=l1;
sj1=(U64)(si1);
sj0|=sj1;
l8=sj0;
L2:;
si0=l0;
si1=l5;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=8U;
si0+=si1;
sj1=l8;
i64_store(&i->m0,(U64)si0,sj1);
si0=1U;
l5=si0;
L1:;
si0=l0;
si1=l5;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=80U;
si0+=si1;
i->g0=si0;
L0:;
}

void f6449(rustpythonInstance*i,U32 l0) {
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
f11218(i,si0);
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
f11218(i,si0);
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
f6858(i,si0);
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
f11218(i,si0);
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
f6858(i,si0);
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
f11166(i,si0);
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
f11164(i,si0);
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
f6858(i,si0);
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
f11218(i,si0);
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
f11218(i,si0);
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
f6858(i,si0);
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
f11218(i,si0);
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
f6858(i,si0);
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
f11166(i,si0);
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
f11164(i,si0);
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
f6858(i,si0);
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
f11164(i,si0);
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
f11164(i,si0);
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
f11166(i,si0);
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
f11164(i,si0);
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
f6858(i,si0);
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
f11164(i,si0);
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
f11164(i,si0);
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
f6858(i,si0);
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
f6858(i,si0);
si0=l0;
f15271(i,si0);
si0=l1;
f6858(i,si0);
si0=l1;
f15271(i,si0);
goto L0;
L18:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+4U);
l1=si0;
f6858(i,si0);
si0=l1;
f15271(i,si0);
si0=l0;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
f6858(i,si0);
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
f6858(i,si0);
si0=l0;
f15271(i,si0);
goto L0;
L17:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+4U);
l1=si0;
f6858(i,si0);
si0=l1;
f15271(i,si0);
si0=l0;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
f6858(i,si0);
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
f11166(i,si0);
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
f11166(i,si0);
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
f6858(i,si0);
si0=l1;
f15271(i,si0);
si0=l0;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
f6858(i,si0);
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
f11166(i,si0);
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
f11166(i,si0);
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
f6858(i,si0);
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
f11166(i,si0);
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
f11166(i,si0);
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
f6858(i,si0);
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
f11166(i,si0);
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
f11166(i,si0);
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
f11164(i,si0);
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
f11164(i,si0);
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
f11166(i,si0);
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
f11164(i,si0);
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
f11164(i,si0);
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
f11166(i,si0);
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
f6858(i,si0);
si0=l1;
f15271(i,si0);
si0=l0;
si1=8U;
si0+=si1;
l1=si0;
f11219(i,si0);
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
f6858(i,si0);
si0=l0;
f15271(i,si0);
L118:;
si0=l1;
si0=!(si0);
if(si0){
goto L2;
}
si0=l1;
f6858(i,si0);
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
f11166(i,si0);
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
f11224(i,si0);
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
f11166(i,si0);
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
f11166(i,si0);
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
f11166(i,si0);
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
f11224(i,si0);
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
f11166(i,si0);
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
f11166(i,si0);
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
f6858(i,si0);
si0=l0;
f15271(i,si0);
si0=l1;
si0=!(si0);
if(si0){
goto L2;
}
si0=l1;
f6858(i,si0);
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
f6858(i,si0);
si0=l0;
f15271(i,si0);
L0:;
}

void f6450(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
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
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+4U);
si0=si0 != si1;
if(si0){
goto L3;
}
si0=2U;
l6=si0;
goto L2;
L3:;
si0=l1;
si1=l5;
si2=4U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=1U;
l6=si0;
si0=l5;
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
goto L1;
}
si0=l4;
si1=8U;
si0+=si1;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+8U);
si1=i32_load(&i->m0,(U64)si1);
si2=l5;
f14773(i,si0,si1,si2);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+12U);
l1=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+8U);
si0=!(si0);
if(si0){
goto L2;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si0=!(si0);
if(si0){
goto L4;
}
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
goto L4;
}
si0=l6;
f7690(i,si0);
L4:;
si0=l3;
si1=l1;
i32_store(&i->m0,(U64)si0,si1);
si0=0U;
l6=si0;
L2:;
si0=l0;
si1=l1;
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
f15042(i);
UNREACHABLE;
L0:;
}

void f6451(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 l8=0;
U32 si0,si1,si2,si3,si4,si5;
si0=i->g0;
si1=16U;
si0-=si1;
l4=si0;
i->g0=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+4U);
si0=si0 != si1;
if(si0){
goto L3;
}
si0=0U;
l6=si0;
goto L2;
L3:;
si0=l1;
si1=l5;
si2=4U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+8U);
l7=si1;
si0=f7307(i,si0,si1);
if(si0){
goto L5;
}
si0=1U;
l6=si0;
si0=l5;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si1=l5;
si1=i32_load(&i->m0,(U64)si1);
l8=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l8;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 != si1;
if(si0){
goto L4;
}
goto L1;
L5:;
si0=l1;
si1=12U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si1=60U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l8=si0;
si0=!(si0);
if(si0){
goto L7;
}
si0=l6;
si0=i32_load(&i->m0,(U64)si0+56U);
l3=si0;
si0=l5;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
si0=l8;
si1=2U;
si0<<=(si1&31);
l8=si0;
si0=0U;
l5=si0;
si0=0U;
l6=si0;
L8:;
{
si0=l3;
si1=l5;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=l7;
si0=si0 == si1;
if(si0){
goto L6;
}
si0=l6;
si1=1U;
si0+=si1;
l6=si0;
si0=l8;
si1=l5;
si2=4U;
si1+=si2;
l5=si1;
si0=si0 != si1;
if(si0){
goto L8;
}
}
L7:;
si0=1647592U;
si1=43U;
si2=1648944U;
f673(i,si0,si1,si2);
UNREACHABLE;
L6:;
si0=l6;
si1=l1;
si2=20U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
l3=si1;
si0=si0 >= si1;
if(si0){
goto L9;
}
si0=1U;
l6=si0;
si0=l1;
si1=16U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=l5;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si1=l5;
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
goto L2;
L9:;
si0=l6;
si1=l3;
si2=1648960U;
f663(i,si0,si1,si2);
UNREACHABLE;
L4:;
si0=l4;
si1=8U;
si0+=si1;
si1=l5;
si2=l1;
si3=12U;
si2+=si3;
si2=i32_load(&i->m0,(U64)si2);
si3=l1;
si4=16U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si4=l1;
si5=20U;
si4+=si5;
si4=i32_load(&i->m0,(U64)si4);
si5=l7;
f7309(i,si0,si1,si2,si3,si4,si5);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+12U);
l5=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+8U);
si0=!(si0);
if(si0){
goto L2;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
si0=!(si0);
if(si0){
goto L10;
}
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
goto L10;
}
si0=l7;
f7690(i,si0);
L10:;
si0=l3;
si1=l5;
i32_store(&i->m0,(U64)si0,si1);
si0=0U;
l5=si0;
L2:;
si0=l0;
si1=l5;
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
f15042(i);
UNREACHABLE;
L0:;
}

void f6452(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U64 l8=0;
U32 si0,si1,si2;
U64 sj0,sj1;
si0=i->g0;
si1=16U;
si0-=si1;
l4=si0;
i->g0=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+4U);
si0=si0 != si1;
if(si0){
goto L3;
}
si0=0U;
l1=si0;
goto L2;
L3:;
si0=l1;
si1=l5;
si2=4U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
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
goto L1;
}
si0=l4;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+8U);
si1=i32_load(&i->m0,(U64)si1);
si2=l5;
f10151(i,si0,si1,si2);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+4U);
l1=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
if(si0){
goto L5;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si0=!(si0);
if(si0){
goto L6;
}
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
goto L6;
}
si0=l6;
f7690(i,si0);
L6:;
si0=l3;
si1=l1;
i32_store(&i->m0,(U64)si0,si1);
goto L4;
L5:;
si0=l4;
sj0=i64_load32_u(&i->m0,(U64)si0+8U);
sj1=32ULL;
sj0<<=(sj1&63);
si1=l1;
sj1=(U64)(si1);
sj0|=sj1;
l8=sj0;
L4:;
si0=l0;
si1=l5;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=8U;
si0+=si1;
sj1=l8;
i64_store(&i->m0,(U64)si0,sj1);
si0=1U;
l1=si0;
L2:;
si0=l0;
si1=l1;
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

void f6453(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 si0,si1,si2;
U64 sj1;
si0=i->g0;
si1=96U;
si0-=si1;
l4=si0;
i->g0=si0;
si0=l4;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+12U);
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l4;
si1=48U;
si0+=si1;
si1=l4;
si2=8U;
si1+=si2;
si2=l1;
si2=i32_load(&i->m0,(U64)si2+8U);
f14699(i,si0,si1,si2);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+52U);
l5=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+48U);
switch(si0){
case 0:
goto L5;
case 1:
goto L6;
case 2:
goto L4;
default:
goto L5;
}
L6:;
si0=l5;
si0=!(si0);
if(si0){
goto L7;
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
goto L7;
}
si0=l5;
f7690(i,si0);
L7:;
si0=0U;
l5=si0;
goto L1;
L5:;
si0=l4;
si1=48U;
si0+=si1;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+16U);
si1=i32_load(&i->m0,(U64)si1);
si2=l5;
f7523(i,si0,si1,si2);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+52U);
l5=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+48U);
l1=si0;
si0=!(si0);
if(si0){
goto L3;
}
si0=l4;
si1=8U;
si0+=si1;
si1=32U;
si0+=si1;
si1=l4;
si2=88U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=8U;
si0+=si1;
si1=24U;
si0+=si1;
si1=l4;
si2=48U;
si1+=si2;
si2=32U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=8U;
si0+=si1;
si1=16U;
si0+=si1;
si1=l4;
si2=48U;
si1+=si2;
si2=24U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=16U;
si0+=si1;
si1=l4;
si2=48U;
si1+=si2;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1+56U);
i64_store(&i->m0,(U64)si0+8U,sj1);
goto L2;
L4:;
si0=l4;
si1=0U;
i32_store(&i->m0,(U64)si0+48U,si1);
si0=l4;
si1=l5;
i32_store(&i->m0,(U64)si0+52U,si1);
L3:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si0=!(si0);
if(si0){
goto L8;
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
goto L8;
}
si0=l1;
f7690(i,si0);
L8:;
si0=l3;
si1=l5;
i32_store(&i->m0,(U64)si0,si1);
si0=0U;
l1=si0;
L2:;
si0=l0;
si1=12U;
si0+=si1;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1+8U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=44U;
si0+=si1;
si1=l4;
si2=40U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=36U;
si0+=si1;
si1=l4;
si2=32U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=28U;
si0+=si1;
si1=l4;
si2=24U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=20U;
si0+=si1;
si1=l4;
si2=8U;
si1+=si2;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=8U;
si0+=si1;
si1=l5;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l1;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=1U;
l5=si0;
L1:;
si0=l0;
si1=l5;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=96U;
si0+=si1;
i->g0=si0;
L0:;
}

void f6454(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 l8=0;
U32 si0,si1,si2,si3,si4;
U64 sj0,sj1,sj2;
si0=i->g0;
si1=32U;
si0-=si1;
l4=si0;
i->g0=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+4U);
si0=si0 != si1;
if(si0){
goto L5;
}
si0=0U;
l6=si0;
goto L4;
L5:;
si0=l1;
si1=l5;
si2=4U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=1U;
l6=si0;
si0=l5;
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
goto L3;
}
si0=l5;
sj0=i64_load(&i->m0,(U64)si0+8U);
sj1=3320200219022213590ULL;
sj0^=sj1;
si1=l5;
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
si0=l4;
si1=8U;
si0+=si1;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+8U);
l1=si1;
si2=l5;
si3=l1;
si3=i32_load(&i->m0,(U64)si3+88U);
si4=952U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
f7640(i,si0,si1,si2,si3);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+12U);
l5=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+8U);
if(si0){
goto L6;
}
si0=l5;
si0=!(si0);
if(si0){
goto L7;
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
goto L8;
}
si0=l5;
f7690(i,si0);
L8:;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=66U;
si0=f15269(i,si0);
l5=si0;
si0=!(si0);
if(si0){
goto L1;
}
si0=l5;
si1=1659819U;
si2=66U;
si0=f15390(i,si0,si1,si2);
l7=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+88U);
si1=504U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si1=l5;
si1=i32_load(&i->m0,(U64)si1);
l8=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
sj1=283467841602ULL;
i64_store(&i->m0,(U64)si0+20U,sj1);
si0=l4;
si1=l7;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l8;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 == si1;
if(si0){
goto L3;
}
si0=l1;
si1=l5;
si2=l4;
si3=16U;
si2+=si3;
si0=f7173(i,si0,si1,si2);
l5=si0;
goto L6;
L7:;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=19U;
si0=f15269(i,si0);
l5=si0;
si0=!(si0);
if(si0){
goto L2;
}
si0=l5;
si1=15U;
si0+=si1;
si1=0U;
si1=i32_load(&i->m0,(U64)si1+1659815U);
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=8U;
si0+=si1;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+1659808U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+1659800U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+88U);
si1=504U;
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
sj1=81604378643ULL;
i64_store(&i->m0,(U64)si0+20U,sj1);
si0=l4;
si1=l5;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l8;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 == si1;
if(si0){
goto L3;
}
si0=l1;
si1=l7;
si2=l4;
si3=16U;
si2+=si3;
si0=f7173(i,si0,si1,si2);
l5=si0;
L6:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si0=!(si0);
if(si0){
goto L9;
}
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
goto L9;
}
si0=l1;
f7690(i,si0);
L9:;
si0=l3;
si1=l5;
i32_store(&i->m0,(U64)si0,si1);
si0=0U;
l5=si0;
L4:;
si0=l0;
si1=l5;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l6;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=32U;
si0+=si1;
i->g0=si0;
goto L0;
L3:;
f15042(i);
UNREACHABLE;
L2:;
si0=1U;
si1=19U;
f52(i,si0,si1);
UNREACHABLE;
L1:;
si0=1U;
si1=66U;
f52(i,si0,si1);
UNREACHABLE;
L0:;
}

void f6455(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 si0,si1,si2;
U64 sj1;
si0=i->g0;
si1=160U;
si0-=si1;
l4=si0;
i->g0=si0;
si0=l4;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+12U);
i32_store(&i->m0,(U64)si0+56U,si1);
si0=l4;
si1=104U;
si0+=si1;
si1=l4;
si2=56U;
si1+=si2;
si2=l1;
si2=i32_load(&i->m0,(U64)si2+8U);
f14699(i,si0,si1,si2);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+108U);
l5=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+104U);
switch(si0){
case 0:
goto L5;
case 1:
goto L6;
case 2:
goto L4;
default:
goto L5;
}
L6:;
si0=l5;
si0=!(si0);
if(si0){
goto L7;
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
goto L7;
}
si0=l5;
f7690(i,si0);
L7:;
si0=l0;
si1=40U;
i32_store(&i->m0,(U64)si0,si1);
goto L1;
L5:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+16U);
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si0=i32_load(&i->m0,(U64)si0+88U);
si1=1272U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=l5;
si0=si0 == si1;
if(si0){
goto L9;
}
si0=l4;
si1=104U;
si0+=si1;
si1=l1;
si2=l5;
f7387(i,si0,si1,si2);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+104U);
l1=si0;
si1=38U;
si0=si0 == si1;
if(si0){
goto L8;
}
si0=l4;
si1=64U;
si0+=si1;
si1=l4;
si2=104U;
si1+=si2;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=56U;
si0+=si1;
si1=16U;
si0+=si1;
si1=l4;
si2=104U;
si1+=si2;
si2=24U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=56U;
si0+=si1;
si1=24U;
si0+=si1;
si1=l4;
si2=104U;
si1+=si2;
si2=32U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=56U;
si0+=si1;
si1=32U;
si0+=si1;
si1=l4;
si2=104U;
si1+=si2;
si2=40U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=56U;
si0+=si1;
si1=40U;
si0+=si1;
si1=l4;
si2=152U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1+112U);
i64_store(&i->m0,(U64)si0+56U,sj1);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+108U);
l5=si0;
goto L3;
L9:;
si0=l5;
si1=l5;
si1=i32_load(&i->m0,(U64)si1);
l3=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=38U;
l1=si0;
si0=l3;
si1=1U;
si0=si0 != si1;
if(si0){
goto L10;
}
si0=l5;
f7690(i,si0);
L10:;
goto L3;
L8:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+108U);
l5=si0;
L4:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si0=!(si0);
if(si0){
goto L11;
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
goto L11;
}
si0=l1;
f7690(i,si0);
L11:;
si0=l3;
si1=l5;
i32_store(&i->m0,(U64)si0,si1);
si0=39U;
l1=si0;
goto L2;
L3:;
si0=l4;
si1=8U;
si0+=si1;
si1=40U;
si0+=si1;
si1=l4;
si2=56U;
si1+=si2;
si2=40U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=8U;
si0+=si1;
si1=32U;
si0+=si1;
si1=l4;
si2=56U;
si1+=si2;
si2=32U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=8U;
si0+=si1;
si1=24U;
si0+=si1;
si1=l4;
si2=56U;
si1+=si2;
si2=24U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=8U;
si0+=si1;
si1=16U;
si0+=si1;
si1=l4;
si2=56U;
si1+=si2;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=8U;
si0+=si1;
si1=8U;
si0+=si1;
si1=l4;
si2=56U;
si1+=si2;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1+56U);
i64_store(&i->m0,(U64)si0+8U,sj1);
L2:;
si0=l0;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1+8U);
i64_store(&i->m0,(U64)si0+8U,sj1);
si0=l0;
si1=48U;
si0+=si1;
si1=l4;
si2=8U;
si1+=si2;
si2=40U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=40U;
si0+=si1;
si1=l4;
si2=8U;
si1+=si2;
si2=32U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=32U;
si0+=si1;
si1=l4;
si2=8U;
si1+=si2;
si2=24U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=24U;
si0+=si1;
si1=l4;
si2=8U;
si1+=si2;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=16U;
si0+=si1;
si1=l4;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=l5;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l1;
i32_store(&i->m0,(U64)si0,si1);
L1:;
si0=l4;
si1=160U;
si0+=si1;
i->g0=si0;
L0:;
}

void f6456(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U32 l5=0;
U64 l6=0;
U32 l7=0;
U32 si0,si1,si2;
U64 sj0,sj1;
si0=i->g0;
si1=32U;
si0-=si1;
l4=si0;
i->g0=si0;
si0=l4;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+12U);
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l4;
si1=8U;
si0+=si1;
si1=l4;
si2=28U;
si1+=si2;
si2=l1;
si2=i32_load(&i->m0,(U64)si2+8U);
f14699(i,si0,si1,si2);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+12U);
l5=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+8U);
switch(si0){
case 0:
goto L5;
case 1:
goto L6;
case 2:
goto L4;
default:
goto L5;
}
L6:;
si0=l5;
si0=!(si0);
if(si0){
goto L7;
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
goto L7;
}
si0=l5;
f7690(i,si0);
L7:;
si0=0U;
l5=si0;
goto L1;
L5:;
si0=l4;
si1=8U;
si0+=si1;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+16U);
si1=i32_load(&i->m0,(U64)si1);
si2=l5;
f7557(i,si0,si1,si2);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+12U);
l5=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+8U);
l1=si0;
si0=!(si0);
if(si0){
goto L3;
}
si0=l4;
sj0=i64_load(&i->m0,(U64)si0+16U);
l6=sj0;
goto L2;
L4:;
si0=l4;
si1=0U;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l4;
si1=l5;
i32_store(&i->m0,(U64)si0+12U,si1);
L3:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si0=!(si0);
if(si0){
goto L8;
}
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
goto L8;
}
si0=l1;
f7690(i,si0);
L8:;
si0=l3;
si1=l5;
i32_store(&i->m0,(U64)si0,si1);
si0=0U;
l1=si0;
L2:;
si0=l0;
si1=l1;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=12U;
si0+=si1;
sj1=l6;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=8U;
si0+=si1;
si1=l5;
i32_store(&i->m0,(U64)si0,si1);
si0=1U;
l5=si0;
L1:;
si0=l0;
si1=l5;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=32U;
si0+=si1;
i->g0=si0;
L0:;
}

void f6457(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
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
si1=112U;
si0-=si1;
l4=si0;
i->g0=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+16U);
l5=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+8U);
l6=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+12U);
l7=si0;
si0=l4;
si1=56U;
si0+=si1;
si1=8U;
si0+=si1;
l1=si0;
L1:;
{
si0=l4;
si1=l7;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l4;
si1=56U;
si0+=si1;
si1=l4;
si2=8U;
si1+=si2;
si2=l6;
f14699(i,si0,si1,si2);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+60U);
l8=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+56U);
l9=si0;
si0=!(si0);
if(si0){
goto L7;
}
si0=l9;
si1=-1U;
si0+=si1;
switch(si0){
case 0:
goto L8;
case 1:
goto L6;
default:
goto L8;
}
L8:;
si0=l8;
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
L9:;
si0=l0;
si1=39U;
i32_store(&i->m0,(U64)si0,si1);
goto L3;
L7:;
si0=l4;
si1=56U;
si0+=si1;
si1=l5;
si1=i32_load(&i->m0,(U64)si1);
si2=l8;
f7387(i,si0,si1,si2);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+60U);
l8=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+56U);
l9=si0;
si1=38U;
si0=si0 == si1;
if(si0){
goto L5;
}
si0=l4;
si1=8U;
si0+=si1;
si1=40U;
si0+=si1;
si1=l1;
si2=40U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=8U;
si0+=si1;
si1=32U;
si0+=si1;
si1=l1;
si2=32U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=8U;
si0+=si1;
si1=24U;
si0+=si1;
si1=l1;
si2=24U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=8U;
si0+=si1;
si1=16U;
si0+=si1;
si1=l1;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=8U;
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
i64_store(&i->m0,(U64)si0+8U,sj1);
si0=l9;
si1=39U;
si0=si0 == si1;
if(si0){
goto L2;
}
si0=l8;
l10=si0;
goto L4;
L6:;
si0=l4;
si1=38U;
i32_store(&i->m0,(U64)si0+56U,si1);
si0=l4;
si1=l8;
i32_store(&i->m0,(U64)si0+60U,si1);
L5:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si0=!(si0);
if(si0){
goto L10;
}
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
goto L10;
}
si0=l1;
f7690(i,si0);
L10:;
si0=l3;
si1=l8;
i32_store(&i->m0,(U64)si0,si1);
si0=38U;
l9=si0;
L4:;
si0=l0;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1+8U);
i64_store(&i->m0,(U64)si0+8U,sj1);
si0=l0;
si1=48U;
si0+=si1;
si1=l4;
si2=8U;
si1+=si2;
si2=40U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=40U;
si0+=si1;
si1=l4;
si2=8U;
si1+=si2;
si2=32U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=32U;
si0+=si1;
si1=l4;
si2=8U;
si1+=si2;
si2=24U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=24U;
si0+=si1;
si1=l4;
si2=8U;
si1+=si2;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=16U;
si0+=si1;
si1=l4;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=l10;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l9;
i32_store(&i->m0,(U64)si0,si1);
L3:;
si0=l4;
si1=112U;
si0+=si1;
i->g0=si0;
goto L0;
L2:;
si0=l8;
l10=si0;
goto L1;
}
L0:;
}

void f6458(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 l8=0;
U32 l9=0;
U32 l10=0;
U32 si0,si1,si2;
si0=i->g0;
si1=160U;
si0-=si1;
l4=si0;
i->g0=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+16U);
l5=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+8U);
l6=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+12U);
l7=si0;
si0=l4;
si1=80U;
si0+=si1;
si1=8U;
si0+=si1;
l8=si0;
L1:;
{
si0=l4;
si1=l7;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l4;
si1=80U;
si0+=si1;
si1=l4;
si2=8U;
si1+=si2;
si2=l6;
f14699(i,si0,si1,si2);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+84U);
l1=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+80U);
l9=si0;
si0=!(si0);
if(si0){
goto L7;
}
si0=l9;
si1=-1U;
si0+=si1;
switch(si0){
case 0:
goto L8;
case 1:
goto L6;
default:
goto L8;
}
L8:;
si0=l1;
si0=!(si0);
if(si0){
goto L9;
}
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
goto L9;
}
si0=l1;
f7690(i,si0);
L9:;
si0=l0;
si1=9U;
i32_store(&i->m0,(U64)si0,si1);
goto L3;
L7:;
si0=l4;
si1=80U;
si0+=si1;
si1=l5;
si1=i32_load(&i->m0,(U64)si1);
si2=l1;
f7537(i,si0,si1,si2);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+84U);
l1=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+80U);
l9=si0;
si1=8U;
si0=si0 == si1;
if(si0){
goto L5;
}
si0=l4;
si1=8U;
si0+=si1;
si1=l8;
si2=72U;
si0=f15390(i,si0,si1,si2);
si0=l9;
si1=9U;
si0=si0 == si1;
if(si0){
goto L2;
}
si0=l1;
l10=si0;
goto L4;
L6:;
si0=l4;
si1=8U;
i32_store(&i->m0,(U64)si0+80U,si1);
si0=l4;
si1=l1;
i32_store(&i->m0,(U64)si0+84U,si1);
L5:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
l9=si0;
si0=!(si0);
if(si0){
goto L10;
}
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
goto L10;
}
si0=l9;
f7690(i,si0);
L10:;
si0=l3;
si1=l1;
i32_store(&i->m0,(U64)si0,si1);
si0=8U;
l9=si0;
L4:;
si0=l0;
si1=8U;
si0+=si1;
si1=l4;
si2=8U;
si1+=si2;
si2=72U;
si0=f15390(i,si0,si1,si2);
si0=l0;
si1=l10;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l9;
i32_store(&i->m0,(U64)si0,si1);
L3:;
si0=l4;
si1=160U;
si0+=si1;
i->g0=si0;
goto L0;
L2:;
si0=l1;
l10=si0;
goto L1;
}
L0:;
}

U32 f6459(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 si0,si1,si2;
si0=i->g0;
si1=16U;
si0-=si1;
l3=si0;
i->g0=si0;
si0=l3;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+12U);
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l3;
si1=l3;
si2=12U;
si1+=si2;
si2=l0;
si2=i32_load(&i->m0,(U64)si2+8U);
f14699(i,si0,si1,si2);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+4U);
l4=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
switch(si0){
case 0:
goto L3;
case 1:
goto L5;
case 2:
goto L4;
default:
goto L3;
}
L5:;
si0=l4;
si0=!(si0);
if(si0){
goto L6;
}
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
goto L6;
}
si0=l4;
f7690(i,si0);
L6:;
si0=2U;
l0=si0;
goto L1;
L4:;
si0=l4;
l5=si0;
goto L2;
L3:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+16U);
l0=si0;
si0=i32_load(&i->m0,(U64)si0);
si0=i32_load(&i->m0,(U64)si0);
si0=i32_load(&i->m0,(U64)si0+56U);
si1=8U;
si0+=si1;
si1=l0;
si2=4U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
si2=l4;
si0=f13614(i,si0,si1,si2);
l5=si0;
si0=l4;
si1=l4;
si1=i32_load(&i->m0,(U64)si1);
l6=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=1U;
l0=si0;
si0=l6;
si1=1U;
si0=si0 != si1;
if(si0){
goto L7;
}
si0=l4;
f7690(i,si0);
L7:;
si0=l5;
si0=!(si0);
if(si0){
goto L1;
}
L2:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0);
l0=si0;
si0=!(si0);
if(si0){
goto L8;
}
si0=l0;
si1=l0;
si1=i32_load(&i->m0,(U64)si1);
l4=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=1U;
si0=si0 != si1;
if(si0){
goto L8;
}
si0=l0;
f7690(i,si0);
L8:;
si0=l2;
si1=l5;
i32_store(&i->m0,(U64)si0,si1);
si0=0U;
l0=si0;
L1:;
si0=l3;
si1=16U;
si0+=si1;
i->g0=si0;
si0=l0;
L0:;
return si0;
}

void f6460(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
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
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+4U);
si0=si0 != si1;
if(si0){
goto L3;
}
si0=2U;
l6=si0;
goto L2;
L3:;
si0=l1;
si1=l5;
si2=4U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=1U;
l6=si0;
si0=l5;
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
goto L1;
}
si0=l4;
si1=8U;
si0+=si1;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+8U);
si1=i32_load(&i->m0,(U64)si1);
si2=l5;
f9091(i,si0,si1,si2);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+12U);
l1=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+8U);
si0=!(si0);
if(si0){
goto L2;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si0=!(si0);
if(si0){
goto L4;
}
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
goto L4;
}
si0=l6;
f7690(i,si0);
L4:;
si0=l3;
si1=l1;
i32_store(&i->m0,(U64)si0,si1);
si0=0U;
l6=si0;
L2:;
si0=l0;
si1=l1;
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
f15042(i);
UNREACHABLE;
L0:;
}

void f6461(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 l8=0;
U32 l9=0;
U32 si0,si1,si2,si3,si4,si5;
U64 sj0,sj1,sj2;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+4U);
si0=si0 != si1;
if(si0){
goto L2;
}
si0=0U;
l1=si0;
goto L1;
L2:;
si0=l1;
si1=l4;
si2=4U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
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
goto L5;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+8U);
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si0=i32_load(&i->m0,(U64)si0+88U);
l7=si0;
si1=200U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l8=si0;
si1=l5;
si1=i32_load(&i->m0,(U64)si1+28U);
l4=si1;
si0=si0 == si1;
if(si0){
goto L7;
}
si0=l4;
si1=468U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=2U;
si0<<=(si1&31);
l1=si0;
si0=l4;
si1=460U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
L8:;
{
si0=l1;
si0=!(si0);
if(si0){
goto L6;
}
si0=l1;
si1=-4U;
si0+=si1;
l1=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
l9=si0;
si0=l4;
si1=4U;
si0+=si1;
l4=si0;
si0=l9;
si1=l8;
si0=si0 != si1;
if(si0){
goto L8;
}
}
L7:;
si0=1U;
l1=si0;
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
if(si0){
goto L1;
}
si0=l6;
si1=1682360U;
si2=7U;
si3=l7;
si4=476U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si4=l8;
si5=l5;
si0=f7151(i,si0,si1,si2,si3,si4,si5);
l4=si0;
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
goto L3;
}
goto L4;
L6:;
si0=l6;
si1=1679036U;
si2=4U;
si3=l7;
si4=504U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si4=l8;
si5=l5;
si0=f7151(i,si0,si1,si2,si3,si4,si5);
l4=si0;
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
goto L4;
}
goto L3;
L5:;
f15042(i);
UNREACHABLE;
L4:;
si0=l5;
f7690(i,si0);
L3:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si0=!(si0);
if(si0){
goto L9;
}
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
goto L9;
}
si0=l1;
f7690(i,si0);
L9:;
si0=l3;
si1=l4;
i32_store(&i->m0,(U64)si0,si1);
si0=1U;
l1=si0;
si0=0U;
l5=si0;
L1:;
si0=l0;
si1=l5;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l1;
i32_store(&i->m0,(U64)si0,si1);
L0:;
}

void f6462(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U32 l5=0;
U64 l6=0;
U32 l7=0;
U32 si0,si1,si2;
U64 sj0,sj1;
si0=i->g0;
si1=16U;
si0-=si1;
l4=si0;
i->g0=si0;
si0=l4;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+12U);
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l4;
si1=l4;
si2=12U;
si1+=si2;
si2=l1;
si2=i32_load(&i->m0,(U64)si2+8U);
f14699(i,si0,si1,si2);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+4U);
l5=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
switch(si0){
case 0:
goto L5;
case 1:
goto L6;
case 2:
goto L4;
default:
goto L5;
}
L6:;
si0=l5;
si0=!(si0);
if(si0){
goto L7;
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
goto L7;
}
si0=l5;
f7690(i,si0);
L7:;
si0=0U;
l5=si0;
goto L1;
L5:;
si0=l4;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+16U);
si1=i32_load(&i->m0,(U64)si1);
si2=l5;
f10151(i,si0,si1,si2);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+4U);
l5=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si0=!(si0);
if(si0){
goto L3;
}
si0=l4;
sj0=i64_load32_u(&i->m0,(U64)si0+8U);
sj1=32ULL;
sj0<<=(sj1&63);
si1=l5;
sj1=(U64)(si1);
sj0|=sj1;
l6=sj0;
goto L2;
L4:;
si0=l4;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=l5;
i32_store(&i->m0,(U64)si0+4U,si1);
L3:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si0=!(si0);
if(si0){
goto L8;
}
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
goto L8;
}
si0=l1;
f7690(i,si0);
L8:;
si0=l3;
si1=l5;
i32_store(&i->m0,(U64)si0,si1);
si0=0U;
l1=si0;
L2:;
si0=l0;
si1=l1;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=8U;
si0+=si1;
sj1=l6;
i64_store(&i->m0,(U64)si0,sj1);
si0=1U;
l5=si0;
L1:;
si0=l0;
si1=l5;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=16U;
si0+=si1;
i->g0=si0;
L0:;
}

void f6463(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4,U32 l5) {
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
si1=64U;
si0-=si1;
l6=si0;
i->g0=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+8U);
l7=si0;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+12U);
l8=si1;
si0=si0 == si1;
if(si0){
goto L2;
}
si0=l1;
si1=24U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l9=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+16U);
l10=si0;
si0=l1;
si1=20U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l11=si0;
si1=88U;
si0+=si1;
l12=si0;
L3:;
{
si0=l1;
si1=l7;
si2=4U;
si1+=si2;
l13=si1;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l6;
si1=8U;
si0+=si1;
si1=l10;
si2=l7;
si2=i32_load(&i->m0,(U64)si2);
si3=l11;
f14785(i,si0,si1,si2,si3);
si0=l6;
si0=i32_load(&i->m0,(U64)si0+8U);
si0=!(si0);
if(si0){
goto L8;
}
si0=l10;
si0=i32_load(&i->m0,(U64)si0+16U);
l14=si0;
si1=l6;
si1=i32_load(&i->m0,(U64)si1+12U);
l7=si1;
si0=si0 <= si1;
if(si0){
goto L7;
}
si0=l12;
si0=i32_load(&i->m0,(U64)si0);
l14=si0;
si0=l10;
si0=i32_load(&i->m0,(U64)si0+8U);
si1=l7;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l7=si0;
si0=i32_load(&i->m0,(U64)si0+4U);
l15=si0;
si1=l7;
si1=i32_load(&i->m0,(U64)si1);
l16=si1;
si0|=si1;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L9;
}
si0=l9;
si0=i32_load(&i->m0,(U64)si0+4U);
l17=si0;
si0=l9;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
si0=l6;
si1=l16;
i32_store(&i->m0,(U64)si0+44U,si1);
si0=l6;
si1=l15;
i32_store(&i->m0,(U64)si0+40U,si1);
si0=l6;
si1=l7;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l6;
si1=l7;
si2=l17;
si1+=si2;
i32_store(&i->m0,(U64)si0+36U,si1);
si0=l6;
si1=48U;
si0+=si1;
si1=8U;
si0+=si1;
l7=si0;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l6;
sj1=1ULL;
i64_store(&i->m0,(U64)si0+48U,sj1);
si0=l6;
si1=48U;
si0+=si1;
si1=l6;
si2=32U;
si1+=si2;
f11744(i,si0,si1);
si0=l6;
si1=16U;
si0+=si1;
si1=8U;
si0+=si1;
si1=l7;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l6;
si1=l6;
sj1=i64_load(&i->m0,(U64)si1+48U);
i64_store(&i->m0,(U64)si0+16U,sj1);
si0=l6;
si1=16U;
si0+=si1;
si1=l14;
si2=8U;
si1+=si2;
si0=f10804(i,si0,si1);
l7=si0;
goto L4;
L9:;
si0=l14;
si1=1272U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
si1=l7;
si1=i32_load(&i->m0,(U64)si1);
l14=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l14;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 != si1;
if(si0){
goto L4;
}
goto L5;
L8:;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=13U;
si0=f15269(i,si0);
l7=si0;
si0=!(si0);
if(si0){
goto L6;
}
si0=l7;
si1=5U;
si0+=si1;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+1664677U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l7;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+1664672U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l11;
si1=88U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=388U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l10=si0;
si1=l10;
si1=i32_load(&i->m0,(U64)si1);
l13=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l6;
sj1=55834574861ULL;
i64_store(&i->m0,(U64)si0+36U,sj1);
si0=l6;
si1=l7;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l13;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 == si1;
if(si0){
goto L5;
}
si0=l11;
si1=l10;
si2=l6;
si3=32U;
si2+=si3;
si0=f7173(i,si0,si1,si2);
l10=si0;
si0=l5;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
si0=!(si0);
if(si0){
goto L10;
}
si0=l7;
si1=l7;
si1=i32_load(&i->m0,(U64)si1);
l13=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l13;
si1=1U;
si0=si0 != si1;
if(si0){
goto L10;
}
si0=l7;
f7690(i,si0);
L10:;
si0=l0;
si1=l2;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l5;
si1=l10;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=8U;
si0+=si1;
si1=l3;
i32_store(&i->m0,(U64)si0,si1);
si0=1U;
l3=si0;
goto L1;
L7:;
si0=l7;
si1=l14;
si2=1981580U;
f663(i,si0,si1,si2);
UNREACHABLE;
L6:;
si0=1U;
si1=13U;
f52(i,si0,si1);
UNREACHABLE;
L5:;
f15042(i);
UNREACHABLE;
L4:;
si0=l3;
si1=l7;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=4U;
si0+=si1;
l3=si0;
si0=l13;
l7=si0;
si0=l13;
si1=l8;
si0=si0 != si1;
if(si0){
goto L3;
}
}
L2:;
si0=l0;
si1=l2;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=8U;
si0+=si1;
si1=l3;
i32_store(&i->m0,(U64)si0,si1);
si0=0U;
l3=si0;
L1:;
si0=l0;
si1=l3;
i32_store(&i->m0,(U64)si0,si1);
si0=l6;
si1=64U;
si0+=si1;
i->g0=si0;
L0:;
}

void f6464(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 si0,si1,si2;
U64 sj1;
si0=i->g0;
si1=112U;
si0-=si1;
l4=si0;
i->g0=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+4U);
si0=si0 == si1;
if(si0){
goto L4;
}
si0=l1;
si1=l5;
si2=4U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+8U);
l6=si0;
si0=l5;
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
goto L5;
}
si0=l6;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si0=i32_load(&i->m0,(U64)si0+88U);
si1=1272U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=l1;
si0=si0 == si1;
if(si0){
goto L7;
}
si0=l4;
si1=56U;
si0+=si1;
si1=l5;
si2=l1;
f7387(i,si0,si1,si2);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+56U);
l5=si0;
si1=38U;
si0=si0 == si1;
if(si0){
goto L6;
}
si0=l4;
si1=16U;
si0+=si1;
si1=l4;
si2=56U;
si1+=si2;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=8U;
si0+=si1;
si1=16U;
si0+=si1;
si1=l4;
si2=56U;
si1+=si2;
si2=24U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=8U;
si0+=si1;
si1=24U;
si0+=si1;
si1=l4;
si2=56U;
si1+=si2;
si2=32U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=8U;
si0+=si1;
si1=32U;
si0+=si1;
si1=l4;
si2=56U;
si1+=si2;
si2=40U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=8U;
si0+=si1;
si1=40U;
si0+=si1;
si1=l4;
si2=104U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1+64U);
i64_store(&i->m0,(U64)si0+8U,sj1);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+60U);
l1=si0;
goto L3;
L7:;
si0=l1;
si1=l1;
si1=i32_load(&i->m0,(U64)si1);
l3=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=38U;
l5=si0;
si0=l3;
si1=1U;
si0=si0 != si1;
if(si0){
goto L8;
}
si0=l1;
f7690(i,si0);
L8:;
goto L3;
L6:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+60U);
l5=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si0=!(si0);
if(si0){
goto L9;
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
goto L9;
}
si0=l1;
f7690(i,si0);
L9:;
si0=l3;
si1=l5;
i32_store(&i->m0,(U64)si0,si1);
si0=39U;
l5=si0;
goto L2;
L5:;
f15042(i);
UNREACHABLE;
L4:;
si0=l0;
si1=40U;
i32_store(&i->m0,(U64)si0,si1);
goto L1;
L3:;
si0=l4;
si1=56U;
si0+=si1;
si1=40U;
si0+=si1;
si1=l4;
si2=8U;
si1+=si2;
si2=40U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=56U;
si0+=si1;
si1=32U;
si0+=si1;
si1=l4;
si2=8U;
si1+=si2;
si2=32U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=56U;
si0+=si1;
si1=24U;
si0+=si1;
si1=l4;
si2=8U;
si1+=si2;
si2=24U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=56U;
si0+=si1;
si1=16U;
si0+=si1;
si1=l4;
si2=8U;
si1+=si2;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=56U;
si0+=si1;
si1=8U;
si0+=si1;
si1=l4;
si2=8U;
si1+=si2;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1+8U);
i64_store(&i->m0,(U64)si0+56U,sj1);
L2:;
si0=l0;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1+56U);
i64_store(&i->m0,(U64)si0+8U,sj1);
si0=l0;
si1=48U;
si0+=si1;
si1=l4;
si2=56U;
si1+=si2;
si2=40U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=40U;
si0+=si1;
si1=l4;
si2=56U;
si1+=si2;
si2=32U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=32U;
si0+=si1;
si1=l4;
si2=56U;
si1+=si2;
si2=24U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=24U;
si0+=si1;
si1=l4;
si2=56U;
si1+=si2;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=16U;
si0+=si1;
si1=l4;
si2=64U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=l1;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l5;
i32_store(&i->m0,(U64)si0,si1);
L1:;
si0=l4;
si1=112U;
si0+=si1;
i->g0=si0;
L0:;
}

void f6465(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
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
f5539(i,si0,si1,si2);
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

void f6466(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 l8=0;
U32 l9=0;
U32 l10=0;
U32 si0,si1,si2,si3,si4,si5;
U64 sj0,sj1,sj2;
si0=i->g0;
si1=16U;
si0-=si1;
l4=si0;
i->g0=si0;
si0=l4;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+12U);
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l4;
si1=l4;
si2=12U;
si1+=si2;
si2=l1;
si2=i32_load(&i->m0,(U64)si2+8U);
f14699(i,si0,si1,si2);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+4U);
l5=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
switch(si0){
case 0:
goto L3;
case 1:
goto L5;
case 2:
goto L4;
default:
goto L3;
}
L5:;
si0=l5;
si0=!(si0);
if(si0){
goto L6;
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
goto L6;
}
si0=l5;
f7690(i,si0);
L6:;
si0=0U;
l1=si0;
goto L1;
L4:;
si0=l5;
l6=si0;
goto L2;
L3:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+16U);
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
si0=i32_load(&i->m0,(U64)si0+88U);
l8=si0;
si1=200U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l9=si0;
si1=l5;
si1=i32_load(&i->m0,(U64)si1+28U);
l6=si1;
si0=si0 == si1;
if(si0){
goto L9;
}
si0=l6;
si1=468U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=2U;
si0<<=(si1&31);
l1=si0;
si0=l6;
si1=460U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
L10:;
{
si0=l1;
si0=!(si0);
if(si0){
goto L8;
}
si0=l1;
si1=-4U;
si0+=si1;
l1=si0;
si0=l6;
si0=i32_load(&i->m0,(U64)si0);
l10=si0;
si0=l6;
si1=4U;
si0+=si1;
l6=si0;
si0=l10;
si1=l9;
si0=si0 != si1;
if(si0){
goto L10;
}
}
L9:;
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
goto L11;
}
si0=1U;
l1=si0;
goto L1;
L11:;
si0=l7;
si1=1682360U;
si2=7U;
si3=l8;
si4=476U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si4=l9;
si5=l5;
si0=f7151(i,si0,si1,si2,si3,si4,si5);
l6=si0;
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
goto L2;
}
goto L7;
L8:;
si0=l7;
si1=1679036U;
si2=4U;
si3=l8;
si4=504U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si4=l9;
si5=l5;
si0=f7151(i,si0,si1,si2,si3,si4,si5);
l6=si0;
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
goto L2;
}
L7:;
si0=l5;
f7690(i,si0);
L2:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si0=!(si0);
if(si0){
goto L12;
}
si0=l1;
si1=l1;
si1=i32_load(&i->m0,(U64)si1);
l10=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l10;
si1=1U;
si0=si0 != si1;
if(si0){
goto L12;
}
si0=l1;
f7690(i,si0);
L12:;
si0=l3;
si1=l6;
i32_store(&i->m0,(U64)si0,si1);
si0=1U;
l1=si0;
si0=0U;
l5=si0;
L1:;
si0=l0;
si1=l5;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l1;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=16U;
si0+=si1;
i->g0=si0;
L0:;
}

void f6467(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U64 l5=0;
U32 l6=0;
U32 l7=0;
U64 l8=0;
U32 l9=0;
U32 l10=0;
U32 l11=0;
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
si1=l1;
f14992(i,si0,si1);
si0=l4;
sj0=i64_load(&i->m0,(U64)si0+48U);
si0=!(sj0);
if(si0){
goto L5;
}
si0=l4;
sj0=i64_load(&i->m0,(U64)si0+56U);
l5=sj0;
si0=l4;
si1=48U;
si0+=si1;
si1=44U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si0=!(si0);
if(si0){
goto L7;
}
si0=l4;
si1=8U;
si0+=si1;
si1=32U;
si0+=si1;
si1=l4;
si2=48U;
si1+=si2;
si2=40U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
l7=si1;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=8U;
si0+=si1;
si1=24U;
si0+=si1;
si1=l4;
si2=48U;
si1+=si2;
si2=32U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
l8=sj1;
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=8U;
si0+=si1;
si1=16U;
si0+=si1;
si1=l4;
si2=48U;
si1+=si2;
si2=24U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=l4;
si2=48U;
si1+=si2;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+16U,sj1);
si0=l4;
si1=l6;
i32_store(&i->m0,(U64)si0+44U,si1);
si0=l4;
sj1=l5;
i64_store(&i->m0,(U64)si0+8U,sj1);
si0=l1;
si1=44U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l9=si0;
si0=l1;
si1=40U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=i32_load8_u(&i->m0,(U64)si0+12U);
l1=si0;
si0=l7;
if(si0){
goto L9;
}
si0=1U;
l10=si0;
goto L8;
L9:;
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
l10=si0;
si0=!(si0);
if(si0){
goto L2;
}
L8:;
si0=l10;
sj1=l8;
si1=(U32)(sj1);
l11=si1;
si2=l7;
si0=f15390(i,si0,si1,si2);
l10=si0;
si0=l4;
si1=l7;
i32_store(&i->m0,(U64)si0+56U,si1);
si0=l4;
si1=l7;
i32_store(&i->m0,(U64)si0+52U,si1);
si0=l4;
si1=l10;
i32_store(&i->m0,(U64)si0+48U,si1);
si0=l4;
si1=l1;
si2=255U;
si1&=si2;
si2=0U;
si1=si1 != si2;
si2=l4;
si3=48U;
si2+=si3;
si3=l9;
f11113(i,si0,si1,si2,si3);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+4U);
l1=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
l9=si0;
si0=l4;
si1=36U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L10;
}
si0=l11;
f15271(i,si0);
L10:;
si0=l6;
si1=l6;
si1=i32_load(&i->m0,(U64)si1);
l10=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=1U;
l7=si0;
si0=l10;
si1=1U;
si0=si0 != si1;
if(si0){
goto L11;
}
si0=l4;
si1=44U;
si0+=si1;
f8997(i,si0);
L11:;
si0=l9;
if(si0){
goto L6;
}
goto L4;
L7:;
si0=l1;
si1=44U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si0=l1;
si1=40U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
si0=i32_load(&i->m0,(U64)si0);
l9=si0;
si0=l7;
si0=i32_load(&i->m0,(U64)si0+8U);
l1=si0;
if(si0){
goto L13;
}
si0=1U;
l10=si0;
goto L12;
L13:;
si0=l1;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L3;
}
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=l1;
si0=f15269(i,si0);
l10=si0;
si0=!(si0);
if(si0){
goto L1;
}
L12:;
si0=l10;
si1=l9;
si2=l1;
si0=f15390(i,si0,si1,si2);
l9=si0;
si0=l4;
si1=3U;
i32_store8(&i->m0,(U64)si0+84U,si1);
si0=l4;
si1=l1;
i32_store(&i->m0,(U64)si0+64U,si1);
si0=l4;
si1=l1;
i32_store(&i->m0,(U64)si0+60U,si1);
si0=l4;
si1=l9;
i32_store(&i->m0,(U64)si0+56U,si1);
si0=l4;
sj1=l5;
i64_store(&i->m0,(U64)si0+48U,sj1);
si0=l4;
si1=l7;
si1=i32_load8_u(&i->m0,(U64)si1+12U);
i32_store8(&i->m0,(U64)si0+68U,si1);
si0=l4;
si1=48U;
si0+=si1;
si1=l6;
si0=f11118(i,si0,si1);
l1=si0;
L6:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
si0=!(si0);
if(si0){
goto L14;
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
goto L14;
}
si0=l7;
f7690(i,si0);
L14:;
si0=l3;
si1=l1;
i32_store(&i->m0,(U64)si0,si1);
si0=1U;
l7=si0;
si0=0U;
l1=si0;
goto L4;
L5:;
si0=0U;
l7=si0;
L4:;
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
goto L0;
L3:;
f53(i);
UNREACHABLE;
L2:;
si0=1U;
si1=l7;
f52(i,si0,si1);
UNREACHABLE;
L1:;
si0=1U;
si1=l1;
f52(i,si0,si1);
UNREACHABLE;
L0:;
}

void f6468(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
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
si1=128U;
si0-=si1;
l4=si0;
i->g0=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+16U);
l5=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+8U);
l6=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+12U);
l7=si0;
si0=l4;
si1=64U;
si0+=si1;
si1=8U;
si0+=si1;
l1=si0;
L1:;
{
si0=l4;
si1=l7;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l4;
si1=64U;
si0+=si1;
si1=l4;
si2=8U;
si1+=si2;
si2=l6;
f14699(i,si0,si1,si2);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+68U);
l8=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+64U);
l9=si0;
si0=!(si0);
if(si0){
goto L7;
}
si0=l9;
si1=-1U;
si0+=si1;
switch(si0){
case 0:
goto L8;
case 1:
goto L6;
default:
goto L8;
}
L8:;
si0=l8;
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
L9:;
si0=l0;
si1=9U;
i32_store(&i->m0,(U64)si0,si1);
goto L3;
L7:;
si0=l4;
si1=64U;
si0+=si1;
si1=l5;
si1=i32_load(&i->m0,(U64)si1);
si2=l8;
f7538(i,si0,si1,si2);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+68U);
l8=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+64U);
l9=si0;
si1=8U;
si0=si0 == si1;
if(si0){
goto L5;
}
si0=l4;
si1=8U;
si0+=si1;
si1=48U;
si0+=si1;
si1=l1;
si2=48U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=8U;
si0+=si1;
si1=40U;
si0+=si1;
si1=l1;
si2=40U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=8U;
si0+=si1;
si1=32U;
si0+=si1;
si1=l1;
si2=32U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=8U;
si0+=si1;
si1=24U;
si0+=si1;
si1=l1;
si2=24U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=8U;
si0+=si1;
si1=16U;
si0+=si1;
si1=l1;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=8U;
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
i64_store(&i->m0,(U64)si0+8U,sj1);
si0=l9;
si1=9U;
si0=si0 == si1;
if(si0){
goto L2;
}
si0=l8;
l10=si0;
goto L4;
L6:;
si0=l4;
si1=8U;
i32_store(&i->m0,(U64)si0+64U,si1);
si0=l4;
si1=l8;
i32_store(&i->m0,(U64)si0+68U,si1);
L5:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si0=!(si0);
if(si0){
goto L10;
}
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
goto L10;
}
si0=l1;
f7690(i,si0);
L10:;
si0=l3;
si1=l8;
i32_store(&i->m0,(U64)si0,si1);
si0=8U;
l9=si0;
L4:;
si0=l0;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1+8U);
i64_store(&i->m0,(U64)si0+8U,sj1);
si0=l0;
si1=56U;
si0+=si1;
si1=l4;
si2=8U;
si1+=si2;
si2=48U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=48U;
si0+=si1;
si1=l4;
si2=8U;
si1+=si2;
si2=40U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=40U;
si0+=si1;
si1=l4;
si2=8U;
si1+=si2;
si2=32U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=32U;
si0+=si1;
si1=l4;
si2=8U;
si1+=si2;
si2=24U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=24U;
si0+=si1;
si1=l4;
si2=8U;
si1+=si2;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=16U;
si0+=si1;
si1=l4;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=l10;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l9;
i32_store(&i->m0,(U64)si0,si1);
L3:;
si0=l4;
si1=128U;
si0+=si1;
i->g0=si0;
goto L0;
L2:;
si0=l8;
l10=si0;
goto L1;
}
L0:;
}

void f6469(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 l8=0;
U32 l9=0;
U32 l10=0;
U32 si0,si1,si2;
si0=i->g0;
si1=176U;
si0-=si1;
l4=si0;
i->g0=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+16U);
l5=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+8U);
l6=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+12U);
l7=si0;
si0=l4;
si1=96U;
si0+=si1;
l8=si0;
L1:;
{
si0=l4;
si1=l7;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l4;
si1=88U;
si0+=si1;
si1=l4;
si2=8U;
si1+=si2;
si2=l6;
f14699(i,si0,si1,si2);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+92U);
l1=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+88U);
l9=si0;
si0=!(si0);
if(si0){
goto L7;
}
si0=l9;
si1=-1U;
si0+=si1;
switch(si0){
case 0:
goto L8;
case 1:
goto L6;
default:
goto L8;
}
L8:;
si0=l1;
si0=!(si0);
if(si0){
goto L9;
}
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
goto L9;
}
si0=l1;
f7690(i,si0);
L9:;
si0=l0;
si1=39U;
i32_store(&i->m0,(U64)si0,si1);
goto L3;
L7:;
si0=l4;
si1=88U;
si0+=si1;
si1=l5;
si1=i32_load(&i->m0,(U64)si1);
si2=l1;
f7531(i,si0,si1,si2);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+92U);
l1=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+88U);
l9=si0;
si1=38U;
si0=si0 == si1;
if(si0){
goto L5;
}
si0=l4;
si1=8U;
si0+=si1;
si1=l8;
si2=80U;
si0=f15390(i,si0,si1,si2);
si0=l9;
si1=39U;
si0=si0 == si1;
if(si0){
goto L2;
}
si0=l1;
l10=si0;
goto L4;
L6:;
si0=l4;
si1=38U;
i32_store(&i->m0,(U64)si0+88U,si1);
si0=l4;
si1=l1;
i32_store(&i->m0,(U64)si0+92U,si1);
L5:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
l9=si0;
si0=!(si0);
if(si0){
goto L10;
}
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
goto L10;
}
si0=l9;
f7690(i,si0);
L10:;
si0=l3;
si1=l1;
i32_store(&i->m0,(U64)si0,si1);
si0=38U;
l9=si0;
L4:;
si0=l0;
si1=8U;
si0+=si1;
si1=l4;
si2=8U;
si1+=si2;
si2=80U;
si0=f15390(i,si0,si1,si2);
si0=l0;
si1=l10;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l9;
i32_store(&i->m0,(U64)si0,si1);
L3:;
si0=l4;
si1=176U;
si0+=si1;
i->g0=si0;
goto L0;
L2:;
si0=l1;
l10=si0;
goto L1;
}
L0:;
}

void f6470(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4) {
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
U64 sj2,sj3,sj4;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+8U);
l5=si0;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+12U);
si0=si0 == si1;
if(si0){
goto L1;
}
L2:;
{
si0=l1;
si1=l5;
si2=4U;
si1+=si2;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l5;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si1=0U;
si2=l5;
sj2=i64_load(&i->m0,(U64)si2+8U);
sj3=-1851977428690684601ULL;
sj2^=sj3;
si3=l5;
si4=16U;
si3+=si4;
sj3=i64_load(&i->m0,(U64)si3);
sj4=-786598182489054301ULL;
sj3^=sj4;
sj2|=sj3;
si2=!(sj2);
l6=si2;
si0=si2?si0:si1;
l7=si0;
si0=l5;
si0=i32_load(&i->m0,(U64)si0);
si1=0U;
si0=(U32)((I32)si0<(I32)si1);
if(si0){
goto L6;
}
si0=l6;
si0=!(si0);
if(si0){
goto L4;
}
si0=l7;
si1=68U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l8=si0;
si0=l7;
si1=64U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l9=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+16U);
si0=i32_load(&i->m0,(U64)si0+88U);
l7=si0;
si1=1208U;
si0+=si1;
l10=si0;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si1=8U;
si0&=si1;
if(si0){
goto L7;
}
si0=l6;
si1=16U;
si0+=si1;
l11=si0;
si1=l6;
si0=si0 < si1;
if(si0){
goto L7;
}
si0=l7;
si1=l11;
si2=l7;
si2=i32_load(&i->m0,(U64)si2+1208U);
l12=si2;
si3=l12;
si4=l6;
si3=si3 == si4;
si1=si3?si1:si2;
i32_store(&i->m0,(U64)si0+1208U,si1);
si0=l12;
si1=l6;
si0=si0 == si1;
if(si0){
goto L5;
}
L7:;
si0=l10;
si1=0U;
sj2=l13;
si3=1000000000U;
si0=f1432(i,si0,si1,sj2,si3);
goto L5;
L6:;
si0=l6;
si0=!(si0);
if(si0){
goto L8;
}
si0=l5;
l6=si0;
si0=l7;
si0=i32_load(&i->m0,(U64)si0);
si1=0U;
si0=(U32)((I32)si0>=(I32)si1);
if(si0){
goto L4;
}
goto L3;
L8:;
si0=1647592U;
si1=43U;
si2=1658752U;
f673(i,si0,si1,si2);
UNREACHABLE;
L5:;
si0=l7;
si1=1216U;
si0+=si1;
si1=l9;
si2=l8;
si0=f13453(i,si0,si1,si2);
l6=si0;
if(si0){
goto L10;
}
si0=0U;
l6=si0;
goto L9;
L10:;
si0=l6;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
L9:;
si0=l7;
si1=l7;
si1=i32_load(&i->m0,(U64)si1+1208U);
l12=si1;
si2=-16U;
si1+=si2;
i32_store(&i->m0,(U64)si0+1208U,si1);
si0=l12;
si1=-14U;
si0&=si1;
si1=18U;
si0=si0 != si1;
if(si0){
goto L11;
}
si0=l10;
f1433(i,si0);
L11:;
si0=l6;
if(si0){
goto L3;
}
L4:;
si0=1647592U;
si1=43U;
si2=1659400U;
f673(i,si0,si1,si2);
UNREACHABLE;
L3:;
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
goto L12;
}
si0=l5;
f7690(i,si0);
L12:;
si0=l3;
si1=l6;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=4U;
si0+=si1;
l3=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+8U);
l5=si0;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+12U);
si0=si0 != si1;
if(si0){
goto L2;
}
}
L1:;
si0=l0;
si1=l3;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l2;
i32_store(&i->m0,(U64)si0,si1);
L0:;
}

void f6471(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
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
l4=si0;
i->g0=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+8U);
l5=si0;
si1=l1;
si2=12U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
si0=si0 < si1;
if(si0){
goto L3;
}
si0=0U;
l6=si0;
goto L2;
L3:;
si0=1U;
l6=si0;
si0=l1;
si1=l5;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=0U;
l5=si0;
si0=0U;
l7=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l8=si0;
si0=i32_load(&i->m0,(U64)si0+4U);
l9=si0;
si1=4U;
si0=si0 < si1;
if(si0){
goto L5;
}
si0=l1;
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l10=si0;
si0=l8;
si1=l9;
si2=-4U;
si1+=si2;
l9=si1;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l8;
si1=l8;
si1=i32_load(&i->m0,(U64)si1);
l1=si1;
si2=4U;
si1+=si2;
l11=si1;
i32_store(&i->m0,(U64)si0,si1);
si0=0U;
si1=l1;
si1=i32_load(&i->m0,(U64)si1);
l1=si1;
si2=l9;
si3=l1;
si2=si2 < si3;
l12=si2;
si0=si2?si0:si1;
l7=si0;
si0=l12;
if(si0){
goto L5;
}
si0=l8;
si1=l9;
si2=l1;
si1-=si2;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l8;
si1=l11;
si2=l1;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=l11;
si2=l7;
f756(i,si0,si1,si2);
si0=2U;
l7=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L4;
}
L5:;
si0=l3;
si1=l7;
i32_store8(&i->m0,(U64)si0,si1);
goto L2;
L4:;
si0=l4;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l8=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+4U);
l3=si0;
si0=1U;
l6=si0;
si0=l10;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
si0=i32_load(&i->m0,(U64)si0+192U);
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
goto L1;
}
si0=l7;
si1=1200U;
si0+=si1;
si1=l3;
si2=l8;
si3=l1;
si0=f12275(i,si0,si1,si2,si3);
l5=si0;
L2:;
si0=l0;
si1=l5;
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
f15042(i);
UNREACHABLE;
L0:;
}

void f6472(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4,U32 l5) {
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
si1=48U;
si0-=si1;
l6=si0;
i->g0=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+8U);
l7=si0;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+12U);
l8=si1;
si0=si0 == si1;
if(si0){
goto L6;
}
si0=l1;
si1=24U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l9=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+16U);
l10=si0;
si0=l1;
si1=20U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l11=si0;
si1=88U;
si0+=si1;
l12=si0;
L7:;
{
si0=l1;
si1=l7;
si2=4U;
si1+=si2;
l13=si1;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l6;
si1=8U;
si0+=si1;
si1=l10;
si2=l7;
si2=i32_load(&i->m0,(U64)si2);
si3=l11;
f14785(i,si0,si1,si2,si3);
si0=l6;
si0=i32_load(&i->m0,(U64)si0+8U);
si0=!(si0);
if(si0){
goto L5;
}
si0=l10;
si0=i32_load(&i->m0,(U64)si0+16U);
l14=si0;
si1=l6;
si1=i32_load(&i->m0,(U64)si1+12U);
l7=si1;
si0=si0 <= si1;
if(si0){
goto L3;
}
si0=l10;
si0=i32_load(&i->m0,(U64)si0+8U);
si1=l7;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l7=si0;
si0=i32_load(&i->m0,(U64)si0+4U);
l14=si0;
si1=l7;
si1=i32_load(&i->m0,(U64)si1);
l15=si1;
si0|=si1;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L9;
}
si0=l9;
si0=i32_load(&i->m0,(U64)si0+4U);
l16=si0;
si0=l9;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
si0=l6;
si1=l15;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l6;
si1=l14;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l6;
si1=l7;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l6;
si1=l7;
si2=l16;
si1+=si2;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l12;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
si0=l6;
si1=32U;
si0+=si1;
si1=l6;
si2=16U;
si1+=si2;
f11335(i,si0,si1);
si0=l7;
si1=24U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
si1=l7;
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
goto L2;
}
si0=l6;
si1=32U;
si0+=si1;
si1=l7;
si2=0U;
si0=f8110(i,si0,si1,si2);
l7=si0;
goto L8;
L9:;
si0=l12;
si0=i32_load(&i->m0,(U64)si0);
si1=1272U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
si1=l7;
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
goto L2;
}
L8:;
si0=l3;
si1=l7;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=4U;
si0+=si1;
l3=si0;
si0=l13;
l7=si0;
si0=l13;
si1=l8;
si0=si0 != si1;
if(si0){
goto L7;
}
}
L6:;
si0=l0;
si1=l2;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=8U;
si0+=si1;
si1=l3;
i32_store(&i->m0,(U64)si0,si1);
si0=0U;
l3=si0;
goto L4;
L5:;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=13U;
si0=f15269(i,si0);
l7=si0;
si0=!(si0);
if(si0){
goto L1;
}
si0=l7;
si1=5U;
si0+=si1;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+1664677U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l7;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+1664672U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l11;
si1=88U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=388U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l10=si0;
si1=l10;
si1=i32_load(&i->m0,(U64)si1);
l13=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l6;
sj1=55834574861ULL;
i64_store(&i->m0,(U64)si0+20U,sj1);
si0=l6;
si1=l7;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l13;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 == si1;
if(si0){
goto L2;
}
si0=l11;
si1=l10;
si2=l6;
si3=16U;
si2+=si3;
si0=f7173(i,si0,si1,si2);
l10=si0;
si0=l5;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
si0=!(si0);
if(si0){
goto L10;
}
si0=l7;
si1=l7;
si1=i32_load(&i->m0,(U64)si1);
l13=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l13;
si1=1U;
si0=si0 != si1;
if(si0){
goto L10;
}
si0=l7;
f7690(i,si0);
L10:;
si0=l0;
si1=l2;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l5;
si1=l10;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=8U;
si0+=si1;
si1=l3;
i32_store(&i->m0,(U64)si0,si1);
si0=1U;
l3=si0;
L4:;
si0=l0;
si1=l3;
i32_store(&i->m0,(U64)si0,si1);
si0=l6;
si1=48U;
si0+=si1;
i->g0=si0;
goto L0;
L3:;
si0=l7;
si1=l14;
si2=1981580U;
f663(i,si0,si1,si2);
UNREACHABLE;
L2:;
f15042(i);
UNREACHABLE;
L1:;
si0=1U;
si1=13U;
f52(i,si0,si1);
UNREACHABLE;
L0:;
}

void f6473(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
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
si1=128U;
si0-=si1;
l4=si0;
i->g0=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+16U);
l5=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+8U);
l6=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+12U);
l7=si0;
si0=l4;
si1=64U;
si0+=si1;
si1=8U;
si0+=si1;
l1=si0;
L1:;
{
si0=l4;
si1=l7;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l4;
si1=64U;
si0+=si1;
si1=l4;
si2=8U;
si1+=si2;
si2=l6;
f14699(i,si0,si1,si2);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+68U);
l8=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+64U);
l9=si0;
si0=!(si0);
if(si0){
goto L7;
}
si0=l9;
si1=-1U;
si0+=si1;
switch(si0){
case 0:
goto L8;
case 1:
goto L6;
default:
goto L8;
}
L8:;
si0=l8;
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
L9:;
si0=l0;
si1=39U;
i32_store(&i->m0,(U64)si0,si1);
goto L3;
L7:;
si0=l4;
si1=64U;
si0+=si1;
si1=l5;
si1=i32_load(&i->m0,(U64)si1);
si2=l8;
f7535(i,si0,si1,si2);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+68U);
l8=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+64U);
l9=si0;
si1=38U;
si0=si0 == si1;
if(si0){
goto L5;
}
si0=l4;
si1=8U;
si0+=si1;
si1=48U;
si0+=si1;
si1=l1;
si2=48U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=8U;
si0+=si1;
si1=40U;
si0+=si1;
si1=l1;
si2=40U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=8U;
si0+=si1;
si1=32U;
si0+=si1;
si1=l1;
si2=32U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=8U;
si0+=si1;
si1=24U;
si0+=si1;
si1=l1;
si2=24U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=8U;
si0+=si1;
si1=16U;
si0+=si1;
si1=l1;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=8U;
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
i64_store(&i->m0,(U64)si0+8U,sj1);
si0=l9;
si1=39U;
si0=si0 == si1;
if(si0){
goto L2;
}
si0=l8;
l10=si0;
goto L4;
L6:;
si0=l4;
si1=38U;
i32_store(&i->m0,(U64)si0+64U,si1);
si0=l4;
si1=l8;
i32_store(&i->m0,(U64)si0+68U,si1);
L5:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si0=!(si0);
if(si0){
goto L10;
}
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
goto L10;
}
si0=l1;
f7690(i,si0);
L10:;
si0=l3;
si1=l8;
i32_store(&i->m0,(U64)si0,si1);
si0=38U;
l9=si0;
L4:;
si0=l0;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1+8U);
i64_store(&i->m0,(U64)si0+8U,sj1);
si0=l0;
si1=56U;
si0+=si1;
si1=l4;
si2=8U;
si1+=si2;
si2=48U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=48U;
si0+=si1;
si1=l4;
si2=8U;
si1+=si2;
si2=40U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=40U;
si0+=si1;
si1=l4;
si2=8U;
si1+=si2;
si2=32U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=32U;
si0+=si1;
si1=l4;
si2=8U;
si1+=si2;
si2=24U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=24U;
si0+=si1;
si1=l4;
si2=8U;
si1+=si2;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=16U;
si0+=si1;
si1=l4;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=l10;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l9;
i32_store(&i->m0,(U64)si0,si1);
L3:;
si0=l4;
si1=128U;
si0+=si1;
i->g0=si0;
goto L0;
L2:;
si0=l8;
l10=si0;
goto L1;
}
L0:;
}

void f6474(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U64 l8=0;
U32 si0,si1,si2,si3,si4;
U64 sj1,sj2;
si0=i->g0;
si1=80U;
si0-=si1;
l4=si0;
i->g0=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+4U);
si0=si0 != si1;
if(si0){
goto L5;
}
si0=0U;
l5=si0;
goto L4;
L5:;
si0=l1;
si1=l5;
si2=4U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
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
goto L3;
}
si0=l1;
si1=12U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si0=l1;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
si0=l5;
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
goto L3;
}
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=4U;
si0=f15269(i,si0);
l1=si0;
si0=!(si0);
if(si0){
goto L2;
}
si0=l1;
si1=l5;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=60U;
si0+=si1;
sj1=4294967297ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=l1;
i32_store(&i->m0,(U64)si0+56U,si1);
si0=0U;
si0=f5566(i,si0);
l1=si0;
si0=!(si0);
if(si0){
goto L1;
}
si0=l1;
si1=l1;
sj1=i64_load(&i->m0,(U64)si1);
l8=sj1;
sj2=1ULL;
sj1+=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=44U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=36U;
si0+=si1;
sj1=17179869184ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=28U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=1862528U;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l4;
si1=l1;
sj1=i64_load(&i->m0,(U64)si1+8U);
i64_store(&i->m0,(U64)si0+16U,sj1);
si0=l4;
sj1=l8;
i64_store(&i->m0,(U64)si0+8U,sj1);
si0=l4;
si1=l7;
si2=l4;
si3=8U;
si2+=si3;
si3=l6;
f7705(i,si0,si1,si2,si3);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+4U);
l1=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L6;
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
goto L7;
}
si0=l5;
f7690(i,si0);
L7:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si0=!(si0);
if(si0){
goto L8;
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
goto L8;
}
si0=l5;
f7690(i,si0);
L8:;
si0=l3;
si1=l1;
i32_store(&i->m0,(U64)si0,si1);
si0=0U;
l5=si0;
L6:;
si0=l0;
si1=l5;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=8U;
si0+=si1;
si1=l1;
i32_store(&i->m0,(U64)si0,si1);
si0=1U;
l5=si0;
L4:;
si0=l0;
si1=l5;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=80U;
si0+=si1;
i->g0=si0;
goto L0;
L3:;
f15042(i);
UNREACHABLE;
L2:;
si0=4U;
si1=4U;
f52(i,si0,si1);
UNREACHABLE;
L1:;
si0=1914132U;
si1=70U;
si2=l4;
si3=72U;
si2+=si3;
si3=1914204U;
si4=1914300U;
f712(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L0:;
}

void f6475(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 si0,si1,si2;
U64 sj1;
si0=i->g0;
si1=96U;
si0-=si1;
l4=si0;
i->g0=si0;
si0=l4;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+12U);
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l4;
si1=48U;
si0+=si1;
si1=l4;
si2=8U;
si1+=si2;
si2=l1;
si2=i32_load(&i->m0,(U64)si2+8U);
f14699(i,si0,si1,si2);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+52U);
l5=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+48U);
switch(si0){
case 0:
goto L5;
case 1:
goto L6;
case 2:
goto L4;
default:
goto L5;
}
L6:;
si0=l5;
si0=!(si0);
if(si0){
goto L7;
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
goto L7;
}
si0=l5;
f7690(i,si0);
L7:;
si0=0U;
l5=si0;
goto L1;
L5:;
si0=l4;
si1=48U;
si0+=si1;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+16U);
si1=i32_load(&i->m0,(U64)si1);
si2=l5;
f7529(i,si0,si1,si2);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+52U);
l5=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+48U);
l1=si0;
si0=!(si0);
if(si0){
goto L3;
}
si0=l4;
si1=8U;
si0+=si1;
si1=32U;
si0+=si1;
si1=l4;
si2=88U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=8U;
si0+=si1;
si1=24U;
si0+=si1;
si1=l4;
si2=48U;
si1+=si2;
si2=32U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=8U;
si0+=si1;
si1=16U;
si0+=si1;
si1=l4;
si2=48U;
si1+=si2;
si2=24U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=16U;
si0+=si1;
si1=l4;
si2=48U;
si1+=si2;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1+56U);
i64_store(&i->m0,(U64)si0+8U,sj1);
goto L2;
L4:;
si0=l4;
si1=0U;
i32_store(&i->m0,(U64)si0+48U,si1);
si0=l4;
si1=l5;
i32_store(&i->m0,(U64)si0+52U,si1);
L3:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si0=!(si0);
if(si0){
goto L8;
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
goto L8;
}
si0=l1;
f7690(i,si0);
L8:;
si0=l3;
si1=l5;
i32_store(&i->m0,(U64)si0,si1);
si0=0U;
l1=si0;
L2:;
si0=l0;
si1=12U;
si0+=si1;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1+8U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=44U;
si0+=si1;
si1=l4;
si2=40U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=36U;
si0+=si1;
si1=l4;
si2=32U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=28U;
si0+=si1;
si1=l4;
si2=24U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=20U;
si0+=si1;
si1=l4;
si2=8U;
si1+=si2;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=8U;
si0+=si1;
si1=l5;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l1;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=1U;
l5=si0;
L1:;
si0=l0;
si1=l5;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=96U;
si0+=si1;
i->g0=si0;
L0:;
}

void f6476(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
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
si1=l1;
si1=i32_load(&i->m0,(U64)si1+12U);
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l4;
si1=l4;
si2=12U;
si1+=si2;
si2=l1;
si2=i32_load(&i->m0,(U64)si2+8U);
f14699(i,si0,si1,si2);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+4U);
l5=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
switch(si0){
case 0:
goto L4;
case 1:
goto L5;
case 2:
goto L3;
default:
goto L4;
}
L5:;
si0=l5;
si0=!(si0);
if(si0){
goto L6;
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
goto L6;
}
si0=l5;
f7690(i,si0);
L6:;
si0=2U;
l1=si0;
goto L1;
L4:;
si0=l4;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+16U);
si1=i32_load(&i->m0,(U64)si1);
si2=l5;
f9091(i,si0,si1,si2);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+4U);
l5=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L2;
}
si0=1U;
l1=si0;
goto L1;
L3:;
si0=l4;
si1=1U;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=l5;
i32_store(&i->m0,(U64)si0+4U,si1);
L2:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si0=!(si0);
if(si0){
goto L7;
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
goto L7;
}
si0=l1;
f7690(i,si0);
L7:;
si0=l3;
si1=l5;
i32_store(&i->m0,(U64)si0,si1);
si0=0U;
l1=si0;
L1:;
si0=l0;
si1=l5;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l1;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=16U;
si0+=si1;
i->g0=si0;
L0:;
}

void f6477(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
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
si1=l1;
si1=i32_load(&i->m0,(U64)si1+12U);
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l4;
si1=l4;
si2=12U;
si1+=si2;
si2=l1;
si2=i32_load(&i->m0,(U64)si2+8U);
f14699(i,si0,si1,si2);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+4U);
l5=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
switch(si0){
case 0:
goto L4;
case 1:
goto L5;
case 2:
goto L3;
default:
goto L4;
}
L5:;
si0=l5;
si0=!(si0);
if(si0){
goto L6;
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
goto L6;
}
si0=l5;
f7690(i,si0);
L6:;
si0=2U;
l1=si0;
goto L1;
L4:;
si0=l4;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+16U);
si1=i32_load(&i->m0,(U64)si1);
si2=l5;
f10462(i,si0,si1,si2);
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
goto L2;
}
si0=l5;
f7690(i,si0);
goto L2;
L3:;
si0=l4;
si1=1U;
i32_store8(&i->m0,(U64)si0,si1);
si0=l4;
si1=l5;
i32_store(&i->m0,(U64)si0+4U,si1);
L2:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si1=255U;
si0&=si1;
l1=si0;
if(si0){
goto L8;
}
si0=l5;
si1=8U;
si0>>=(si1&31);
l5=si0;
goto L7;
L8:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+4U);
l6=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
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
si0=l3;
si1=l6;
i32_store(&i->m0,(U64)si0,si1);
L7:;
si0=l1;
si0=!(si0);
l1=si0;
L1:;
si0=l0;
si1=l5;
i32_store8(&i->m0,(U64)si0+1U,si1);
si0=l0;
si1=l1;
i32_store8(&i->m0,(U64)si0,si1);
si0=l4;
si1=16U;
si0+=si1;
i->g0=si0;
L0:;
}

void f6478(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 si0,si1,si2;
si0=i->g0;
si1=32U;
si0-=si1;
l4=si0;
i->g0=si0;
si0=l4;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+12U);
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l4;
si1=16U;
si0+=si1;
si1=l4;
si2=28U;
si1+=si2;
si2=l1;
si2=i32_load(&i->m0,(U64)si2+8U);
f14699(i,si0,si1,si2);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+20U);
l5=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+16U);
switch(si0){
case 0:
goto L3;
case 1:
goto L4;
case 2:
goto L2;
default:
goto L3;
}
L4:;
si0=l5;
si0=!(si0);
if(si0){
goto L5;
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
goto L5;
}
si0=l5;
f7690(i,si0);
L5:;
si0=2U;
l1=si0;
goto L1;
L3:;
si0=l4;
si1=8U;
si0+=si1;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+16U);
si1=i32_load(&i->m0,(U64)si1);
si2=l5;
f14773(i,si0,si1,si2);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+12U);
l5=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+8U);
if(si0){
goto L2;
}
si0=1U;
l1=si0;
goto L1;
L2:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si0=!(si0);
if(si0){
goto L6;
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
goto L6;
}
si0=l1;
f7690(i,si0);
L6:;
si0=l3;
si1=l5;
i32_store(&i->m0,(U64)si0,si1);
si0=0U;
l1=si0;
L1:;
si0=l0;
si1=l5;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l1;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=32U;
si0+=si1;
i->g0=si0;
L0:;
}

U32 f6479(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 si0,si1,si2;
si0=i->g0;
si1=16U;
si0-=si1;
l3=si0;
i->g0=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+16U);
l4=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+8U);
l5=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+12U);
l6=si0;
L2:;
{
si0=l3;
si1=l6;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l3;
si1=l3;
si2=12U;
si1+=si2;
si2=l5;
f14699(i,si0,si1,si2);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+4U);
l0=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
switch(si0){
case 0:
goto L4;
case 1:
goto L6;
case 2:
goto L5;
default:
goto L4;
}
L6:;
si0=l0;
si0=!(si0);
if(si0){
goto L7;
}
si0=l0;
si1=l0;
si1=i32_load(&i->m0,(U64)si1);
l5=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=1U;
si0=si0 != si1;
if(si0){
goto L7;
}
si0=l0;
f7690(i,si0);
L7:;
si0=11U;
l0=si0;
goto L1;
L5:;
si0=l3;
si1=1U;
i32_store8(&i->m0,(U64)si0,si1);
si0=l3;
si1=l0;
i32_store(&i->m0,(U64)si0+4U,si1);
goto L3;
L4:;
si0=l3;
si1=l4;
si1=i32_load(&i->m0,(U64)si1);
si2=l0;
f7521(i,si0,si1,si2);
L3:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
l0=si0;
si1=255U;
si0&=si1;
si0=!(si0);
if(si0){
goto L8;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0+4U);
l5=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0);
l0=si0;
si0=!(si0);
if(si0){
goto L9;
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
goto L9;
}
si0=l0;
f7690(i,si0);
L9:;
si0=l2;
si1=l5;
i32_store(&i->m0,(U64)si0,si1);
si0=10U;
l0=si0;
goto L1;
L8:;
si0=l0;
si1=65280U;
si0&=si1;
si1=2816U;
si0=si0 == si1;
if(si0){
goto L2;
}
}
si0=l0;
si1=8U;
si0>>=(si1&31);
l0=si0;
L1:;
si0=l3;
si1=16U;
si0+=si1;
i->g0=si0;
si0=l0;
L0:;
return si0;
}

void f6480(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 l8=0;
U32 l9=0;
U32 l10=0;
U32 si0,si1,si2;
si0=i->g0;
si1=256U;
si0-=si1;
l4=si0;
i->g0=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+16U);
l5=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+8U);
l6=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+12U);
l7=si0;
si0=l4;
si1=136U;
si0+=si1;
l8=si0;
L1:;
{
si0=l4;
si1=l7;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l4;
si1=128U;
si0+=si1;
si1=l4;
si2=8U;
si1+=si2;
si2=l6;
f14699(i,si0,si1,si2);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+132U);
l1=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+128U);
l9=si0;
si0=!(si0);
if(si0){
goto L7;
}
si0=l9;
si1=-1U;
si0+=si1;
switch(si0){
case 0:
goto L8;
case 1:
goto L6;
default:
goto L8;
}
L8:;
si0=l1;
si0=!(si0);
if(si0){
goto L9;
}
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
goto L9;
}
si0=l1;
f7690(i,si0);
L9:;
si0=l0;
si1=39U;
i32_store(&i->m0,(U64)si0,si1);
goto L3;
L7:;
si0=l4;
si1=128U;
si0+=si1;
si1=l5;
si1=i32_load(&i->m0,(U64)si1);
si2=l1;
f7522(i,si0,si1,si2);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+132U);
l1=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+128U);
l9=si0;
si1=38U;
si0=si0 == si1;
if(si0){
goto L5;
}
si0=l4;
si1=8U;
si0+=si1;
si1=l8;
si2=120U;
si0=f15390(i,si0,si1,si2);
si0=l9;
si1=39U;
si0=si0 == si1;
if(si0){
goto L2;
}
si0=l1;
l10=si0;
goto L4;
L6:;
si0=l4;
si1=38U;
i32_store(&i->m0,(U64)si0+128U,si1);
si0=l4;
si1=l1;
i32_store(&i->m0,(U64)si0+132U,si1);
L5:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
l9=si0;
si0=!(si0);
if(si0){
goto L10;
}
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
goto L10;
}
si0=l9;
f7690(i,si0);
L10:;
si0=l3;
si1=l1;
i32_store(&i->m0,(U64)si0,si1);
si0=38U;
l9=si0;
L4:;
si0=l0;
si1=8U;
si0+=si1;
si1=l4;
si2=8U;
si1+=si2;
si2=120U;
si0=f15390(i,si0,si1,si2);
si0=l0;
si1=l10;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l9;
i32_store(&i->m0,(U64)si0,si1);
L3:;
si0=l4;
si1=256U;
si0+=si1;
i->g0=si0;
goto L0;
L2:;
si0=l1;
l10=si0;
goto L1;
}
L0:;
}

void f6481(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 l8=0;
U32 l9=0;
U32 l10=0;
U32 si0,si1,si2;
si0=i->g0;
si1=160U;
si0-=si1;
l4=si0;
i->g0=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+16U);
l5=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+8U);
l6=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+12U);
l7=si0;
si0=l4;
si1=88U;
si0+=si1;
l8=si0;
L1:;
{
si0=l4;
si1=l7;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l4;
si1=80U;
si0+=si1;
si1=l4;
si2=8U;
si1+=si2;
si2=l6;
f14699(i,si0,si1,si2);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+84U);
l1=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+80U);
l9=si0;
si0=!(si0);
if(si0){
goto L7;
}
si0=l9;
si1=-1U;
si0+=si1;
switch(si0){
case 0:
goto L8;
case 1:
goto L6;
default:
goto L8;
}
L8:;
si0=l1;
si0=!(si0);
if(si0){
goto L9;
}
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
goto L9;
}
si0=l1;
f7690(i,si0);
L9:;
si0=l0;
si1=28U;
i32_store(&i->m0,(U64)si0,si1);
goto L3;
L7:;
si0=l4;
si1=80U;
si0+=si1;
si1=l5;
si1=i32_load(&i->m0,(U64)si1);
si2=l1;
f7417(i,si0,si1,si2);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+84U);
l1=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+80U);
l9=si0;
si1=27U;
si0=si0 == si1;
if(si0){
goto L5;
}
si0=l4;
si1=8U;
si0+=si1;
si1=l8;
si2=72U;
si0=f15390(i,si0,si1,si2);
si0=l9;
si1=28U;
si0=si0 == si1;
if(si0){
goto L2;
}
si0=l1;
l10=si0;
goto L4;
L6:;
si0=l4;
si1=27U;
i32_store(&i->m0,(U64)si0+80U,si1);
si0=l4;
si1=l1;
i32_store(&i->m0,(U64)si0+84U,si1);
L5:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
l9=si0;
si0=!(si0);
if(si0){
goto L10;
}
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
goto L10;
}
si0=l9;
f7690(i,si0);
L10:;
si0=l3;
si1=l1;
i32_store(&i->m0,(U64)si0,si1);
si0=27U;
l9=si0;
L4:;
si0=l0;
si1=8U;
si0+=si1;
si1=l4;
si2=8U;
si1+=si2;
si2=72U;
si0=f15390(i,si0,si1,si2);
si0=l0;
si1=l10;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l9;
i32_store(&i->m0,(U64)si0,si1);
L3:;
si0=l4;
si1=160U;
si0+=si1;
i->g0=si0;
goto L0;
L2:;
si0=l1;
l10=si0;
goto L1;
}
L0:;
}

void f6482(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 si0,si1,si2,si3;
U64 sj1;
si0=i->g0;
si1=64U;
si0-=si1;
l4=si0;
i->g0=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+4U);
si0=si0 != si1;
if(si0){
goto L3;
}
si0=2U;
l5=si0;
goto L2;
L3:;
si0=l1;
si1=l5;
si2=4U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+8U);
l1=si0;
si0=l4;
si1=l5;
si1=i32_load(&i->m0,(U64)si1);
si2=56U;
si1+=si2;
f5519(i,si0,si1);
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L4;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0+4U);
l1=si0;
si0=1U;
l5=si0;
goto L2;
L4:;
si0=l4;
si1=36U;
si0+=si1;
sj1=1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=1919896U;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l4;
si1=1215U;
i32_store(&i->m0,(U64)si0+52U,si1);
si0=l4;
si1=5U;
i32_store(&i->m0,(U64)si0+60U,si1);
si0=l4;
si1=1919924U;
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
si1=8U;
si0+=si1;
si1=l4;
si2=24U;
si1+=si2;
f63(i,si0,si1);
si0=l1;
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
goto L1;
}
si0=l1;
si1=l5;
si2=l4;
si3=8U;
si2+=si3;
si0=f7173(i,si0,si1,si2);
l1=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si0=!(si0);
if(si0){
goto L5;
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
goto L5;
}
si0=l5;
f7690(i,si0);
L5:;
si0=l3;
si1=l1;
i32_store(&i->m0,(U64)si0,si1);
si0=0U;
l5=si0;
L2:;
si0=l0;
si1=l1;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l5;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=64U;
si0+=si1;
i->g0=si0;
goto L0;
L1:;
f15042(i);
UNREACHABLE;
L0:;
}

U32 f6483(rustpythonInstance*i,U32 l0,U32 l1) {
U32 si0,si1,si2;
si0=l0;
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

U32 f6484(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
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
si1=1649580U;
si2=14U;
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
si1=1647641U;
si2=4U;
si3=l2;
si4=4U;
si3+=si4;
si4=1669092U;
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

U32 f6485(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 si0,si1,si2,si3,si4;
si0=i->g0;
si1=160U;
si0-=si1;
l2=si0;
i->g0=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
l0=si0;
si0=l2;
si1=140U;
si0+=si1;
si1=1663696U;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=132U;
si0+=si1;
si1=1663680U;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=124U;
si0+=si1;
si1=1663664U;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=116U;
si0+=si1;
si1=1663648U;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=108U;
si0+=si1;
si1=1660004U;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=100U;
si0+=si1;
si1=1663632U;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=92U;
si0+=si1;
si1=1660004U;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=8U;
si0+=si1;
si1=76U;
si0+=si1;
si1=1660004U;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=76U;
si0+=si1;
si1=1658888U;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=68U;
si0+=si1;
si1=1660004U;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=8U;
si0+=si1;
si1=52U;
si0+=si1;
si1=1660004U;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=8U;
si0+=si1;
si1=44U;
si0+=si1;
si1=1663616U;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=8U;
si0+=si1;
si1=36U;
si0+=si1;
si1=1663600U;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=36U;
si0+=si1;
si1=1663600U;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=28U;
si0+=si1;
si1=1662812U;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=20U;
si0+=si1;
si1=1663584U;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=l0;
si2=16U;
si1+=si2;
i32_store(&i->m0,(U64)si0+128U,si1);
si0=l2;
si1=l0;
si2=40U;
si1+=si2;
i32_store(&i->m0,(U64)si0+120U,si1);
si0=l2;
si1=l0;
si2=8U;
si1+=si2;
i32_store(&i->m0,(U64)si0+112U,si1);
si0=l2;
si1=l0;
si2=81U;
si1+=si2;
i32_store(&i->m0,(U64)si0+104U,si1);
si0=l2;
si1=l0;
si2=56U;
si1+=si2;
i32_store(&i->m0,(U64)si0+96U,si1);
si0=l2;
si1=l0;
si2=80U;
si1+=si2;
i32_store(&i->m0,(U64)si0+88U,si1);
si0=l2;
si1=l0;
si2=79U;
si1+=si2;
i32_store(&i->m0,(U64)si0+80U,si1);
si0=l2;
si1=l0;
si2=36U;
si1+=si2;
i32_store(&i->m0,(U64)si0+72U,si1);
si0=l2;
si1=l0;
si2=78U;
si1+=si2;
i32_store(&i->m0,(U64)si0+64U,si1);
si0=l2;
si1=l0;
si2=77U;
si1+=si2;
i32_store(&i->m0,(U64)si0+56U,si1);
si0=l2;
si1=l0;
si2=76U;
si1+=si2;
i32_store(&i->m0,(U64)si0+48U,si1);
si0=l2;
si1=l0;
si2=52U;
si1+=si2;
i32_store(&i->m0,(U64)si0+40U,si1);
si0=l2;
si1=l0;
si2=48U;
si1+=si2;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l2;
si1=l0;
si2=32U;
si1+=si2;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l2;
si1=l0;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l2;
si1=1659916U;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l2;
si1=l0;
si2=44U;
si1+=si2;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l2;
si1=l0;
si2=24U;
si1+=si2;
i32_store(&i->m0,(U64)si0+148U,si1);
si0=l2;
si1=l2;
si2=148U;
si1+=si2;
i32_store(&i->m0,(U64)si0+136U,si1);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=1663712U;
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
i32_store8(&i->m0,(U64)si0+157U,si1);
si0=l2;
si1=l0;
i32_store8(&i->m0,(U64)si0+156U,si1);
si0=l2;
si1=l1;
i32_store(&i->m0,(U64)si0+152U,si1);
si0=l2;
si1=152U;
si0+=si1;
si1=1662767U;
si2=6U;
si3=l2;
si4=8U;
si3+=si4;
si4=1104132U;
si0=f715(i,si0,si1,si2,si3,si4);
si0=l2;
si1=152U;
si0+=si1;
si1=1663489U;
si2=7U;
si3=l2;
si4=8U;
si3+=si4;
si4=8U;
si3+=si4;
si4=1104132U;
si0=f715(i,si0,si1,si2,si3,si4);
si0=l2;
si1=152U;
si0+=si1;
si1=1663496U;
si2=7U;
si3=l2;
si4=8U;
si3+=si4;
si4=16U;
si3+=si4;
si4=1104132U;
si0=f715(i,si0,si1,si2,si3,si4);
si0=l2;
si1=152U;
si0+=si1;
si1=1662703U;
si2=8U;
si3=l2;
si4=8U;
si3+=si4;
si4=24U;
si3+=si4;
si4=1104132U;
si0=f715(i,si0,si1,si2,si3,si4);
si0=l2;
si1=152U;
si0+=si1;
si1=1663403U;
si2=6U;
si3=l2;
si4=8U;
si3+=si4;
si4=32U;
si3+=si4;
si4=1104132U;
si0=f715(i,si0,si1,si2,si3,si4);
si0=l2;
si1=152U;
si0+=si1;
si1=1663409U;
si2=7U;
si3=l2;
si4=8U;
si3+=si4;
si4=40U;
si3+=si4;
si4=1104132U;
si0=f715(i,si0,si1,si2,si3,si4);
si0=l2;
si1=152U;
si0+=si1;
si1=1663416U;
si2=14U;
si3=l2;
si4=8U;
si3+=si4;
si4=48U;
si3+=si4;
si4=1104132U;
si0=f715(i,si0,si1,si2,si3,si4);
si0=l2;
si1=152U;
si0+=si1;
si1=1663430U;
si2=13U;
si3=l2;
si4=8U;
si3+=si4;
si4=56U;
si3+=si4;
si4=1104132U;
si0=f715(i,si0,si1,si2,si3,si4);
si0=l2;
si1=152U;
si0+=si1;
si1=1663503U;
si2=10U;
si3=l2;
si4=72U;
si3+=si4;
si4=1104132U;
si0=f715(i,si0,si1,si2,si3,si4);
si0=l2;
si1=152U;
si0+=si1;
si1=1660333U;
si2=8U;
si3=l2;
si4=80U;
si3+=si4;
si4=1104132U;
si0=f715(i,si0,si1,si2,si3,si4);
si0=l2;
si1=152U;
si0+=si1;
si1=1663513U;
si2=9U;
si3=l2;
si4=8U;
si3+=si4;
si4=80U;
si3+=si4;
si4=1104132U;
si0=f715(i,si0,si1,si2,si3,si4);
si0=l2;
si1=152U;
si0+=si1;
si1=1663522U;
si2=7U;
si3=l2;
si4=96U;
si3+=si4;
si4=1104132U;
si0=f715(i,si0,si1,si2,si3,si4);
si0=l2;
si1=152U;
si0+=si1;
si1=1663529U;
si2=7U;
si3=l2;
si4=104U;
si3+=si4;
si4=1104132U;
si0=f715(i,si0,si1,si2,si3,si4);
si0=l2;
si1=152U;
si0+=si1;
si1=1663536U;
si2=8U;
si3=l2;
si4=112U;
si3+=si4;
si4=1104132U;
si0=f715(i,si0,si1,si2,si3,si4);
si0=l2;
si1=152U;
si0+=si1;
si1=1663544U;
si2=13U;
si3=l2;
si4=120U;
si3+=si4;
si4=1104132U;
si0=f715(i,si0,si1,si2,si3,si4);
si0=l2;
si1=152U;
si0+=si1;
si1=1663557U;
si2=18U;
si3=l2;
si4=128U;
si3+=si4;
si4=1104132U;
si0=f715(i,si0,si1,si2,si3,si4);
si0=l2;
si1=152U;
si0+=si1;
si1=1663575U;
si2=8U;
si3=l2;
si4=136U;
si3+=si4;
si4=1104132U;
si0=f715(i,si0,si1,si2,si3,si4);
si0=l2;
si0=i32_load8_u(&i->m0,(U64)si0+156U);
l1=si0;
si0=l2;
si0=i32_load8_u(&i->m0,(U64)si0+157U);
if(si0){
goto L2;
}
si0=l1;
si1=255U;
si0&=si1;
si1=0U;
si0=si0 != si1;
l0=si0;
goto L1;
L2:;
si0=1U;
l0=si0;
si0=l1;
si1=255U;
si0&=si1;
if(si0){
goto L1;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0+152U);
l0=si0;
si0=i32_load8_u(&i->m0,(U64)si0+28U);
si1=4U;
si0&=si1;
if(si0){
goto L3;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=1103462U;
si2=2U;
si3=l0;
si4=24U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si3=i32_load(&i->m0,(U64)si3+12U);
si0=TF(i->t0,si3,U32 (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
l0=si0;
goto L1;
L3:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=1103461U;
si2=1U;
si3=l0;
si4=24U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si3=i32_load(&i->m0,(U64)si3+12U);
si0=TF(i->t0,si3,U32 (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
l0=si0;
L1:;
si0=l2;
si1=160U;
si0+=si1;
i->g0=si0;
si0=l0;
L0:;
return si0;
}

U32 f6486(rustpythonInstance*i,U32 l0,U32 l1) {
U32 si0,si1,si2;
si0=l1;
si1=1664784U;
si2=4U;
si0=f713(i,si0,si1,si2);
L0:;
return si0;
}

U32 f6487(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
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
si1=1659416U;
si2=9U;
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
si1=1659425U;
si2=5U;
si3=l2;
si4=4U;
si3+=si4;
si4=1659432U;
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

U32 f6488(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
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
si1=1649819U;
si2=14U;
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
si1=1647641U;
si2=4U;
si3=l2;
si4=4U;
si3+=si4;
si4=1669092U;
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

U32 f6489(rustpythonInstance*i,U32 l0,U32 l1) {
U32 si0,si1;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
si1=l1;
si0=f6490(i,si0,si1);
L0:;
return si0;
}

U32 f6490(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 si0,si1,si2,si3,si4,si5;
si0=i->g0;
si1=16U;
si0-=si1;
l2=si0;
i->g0=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si1=8U;
si0&=si1;
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
si2=i32_load(&i->m0,(U64)si2);
l5=si2;
si3=l5;
si4=l3;
si3=si3 == si4;
l3=si3;
si1=si3?si1:si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
if(si0){
goto L2;
}
L3:;
si0=l0;
si1=0U;
si0=f1428(i,si0,si1);
if(si0){
goto L2;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=1647635U;
si2=6U;
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
si1=1647641U;
si2=4U;
si3=1647416U;
si4=1647648U;
si0=f715(i,si0,si1,si2,si3,si4);
l0=si0;
si0=i32_load8_u(&i->m0,(U64)si0+4U);
l3=si0;
si0=l0;
si0=i32_load8_u(&i->m0,(U64)si0+5U);
if(si0){
goto L4;
}
si0=l3;
si1=255U;
si0&=si1;
si1=0U;
si0=si0 != si1;
l1=si0;
goto L1;
L4:;
si0=1U;
l1=si0;
si0=l3;
si1=255U;
si0&=si1;
if(si0){
goto L5;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si0=i32_load8_u(&i->m0,(U64)si0+28U);
si1=4U;
si0&=si1;
if(si0){
goto L6;
}
si0=l0;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+20U);
si2=1103462U;
si3=2U;
si4=l1;
si5=24U;
si4+=si5;
si4=i32_load(&i->m0,(U64)si4);
si4=i32_load(&i->m0,(U64)si4+12U);
si1=TF(i->t0,si4,U32 (*)(rustpythonInstance*,U32,U32,U32))(i,si1,si2,si3);
l1=si1;
i32_store8(&i->m0,(U64)si0+4U,si1);
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
L5:;
si0=l0;
si1=l1;
i32_store8(&i->m0,(U64)si0+4U,si1);
goto L1;
L2:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=1647635U;
si2=6U;
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
si1=1647641U;
si2=4U;
si3=l2;
si4=4U;
si3+=si4;
si4=1647824U;
si0=f715(i,si0,si1,si2,si3,si4);
l3=si0;
si0=i32_load8_u(&i->m0,(U64)si0+4U);
l4=si0;
si0=l3;
si0=i32_load8_u(&i->m0,(U64)si0+5U);
if(si0){
goto L8;
}
si0=l4;
si1=255U;
si0&=si1;
si1=0U;
si0=si0 != si1;
l1=si0;
goto L7;
L8:;
si0=1U;
l1=si0;
si0=l4;
si1=255U;
si0&=si1;
if(si0){
goto L9;
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
goto L9;
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
L9:;
si0=l3;
si1=l1;
i32_store8(&i->m0,(U64)si0+4U,si1);
L7:;
si0=l0;
si1=l0;
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
goto L1;
}
si0=l0;
f1433(i,si0);
L1:;
si0=l2;
si1=16U;
si0+=si1;
i->g0=si0;
si0=l1;
L0:;
return si0;
}

U32 f6491(rustpythonInstance*i,U32 l0,U32 l1) {
U32 si0,si1,si2;
si0=l1;
si1=1649808U;
si2=5U;
si0=f713(i,si0,si1,si2);
L0:;
return si0;
}

U32 f6492(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 si0,si1,si2,si3,si4,si5,si6,si7,si8,si9,si10,si11,si12,si13,si14;
si0=i->g0;
si1=16U;
si0-=si1;
l2=si0;
i->g0=si0;
si0=l2;
si1=l0;
si1=i32_load(&i->m0,(U64)si1);
l0=si1;
si2=32U;
si1+=si2;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l1;
si1=1649470U;
si2=7U;
si3=1662767U;
si4=6U;
si5=l0;
si6=1668972U;
si7=1660076U;
si8=6U;
si9=l0;
si10=36U;
si9+=si10;
si10=1668988U;
si11=1669004U;
si12=7U;
si13=l2;
si14=12U;
si13+=si14;
si14=1669012U;
si0=f742(i,si0,si1,si2,si3,si4,si5,si6,si7,si8,si9,si10,si11,si12,si13,si14);
l0=si0;
si0=l2;
si1=16U;
si0+=si1;
i->g0=si0;
si0=l0;
L0:;
return si0;
}

U32 f6493(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 si0,si1,si2,si3,si4,si5;
si0=i->g0;
si1=16U;
si0-=si1;
l2=si0;
i->g0=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
l0=si0;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si1=8U;
si0&=si1;
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
si2=i32_load(&i->m0,(U64)si2);
l5=si2;
si3=l5;
si4=l3;
si3=si3 == si4;
l3=si3;
si1=si3?si1:si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
if(si0){
goto L2;
}
L3:;
si0=l0;
si1=0U;
si0=f1428(i,si0,si1);
if(si0){
goto L2;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=1647635U;
si2=6U;
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
si1=1647641U;
si2=4U;
si3=1647416U;
si4=1647648U;
si0=f715(i,si0,si1,si2,si3,si4);
l0=si0;
si0=i32_load8_u(&i->m0,(U64)si0+4U);
l3=si0;
si0=l0;
si0=i32_load8_u(&i->m0,(U64)si0+5U);
if(si0){
goto L4;
}
si0=l3;
si1=255U;
si0&=si1;
si1=0U;
si0=si0 != si1;
l1=si0;
goto L1;
L4:;
si0=1U;
l1=si0;
si0=l3;
si1=255U;
si0&=si1;
if(si0){
goto L5;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si0=i32_load8_u(&i->m0,(U64)si0+28U);
si1=4U;
si0&=si1;
if(si0){
goto L6;
}
si0=l0;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+20U);
si2=1103462U;
si3=2U;
si4=l1;
si5=24U;
si4+=si5;
si4=i32_load(&i->m0,(U64)si4);
si4=i32_load(&i->m0,(U64)si4+12U);
si1=TF(i->t0,si4,U32 (*)(rustpythonInstance*,U32,U32,U32))(i,si1,si2,si3);
l1=si1;
i32_store8(&i->m0,(U64)si0+4U,si1);
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
L5:;
si0=l0;
si1=l1;
i32_store8(&i->m0,(U64)si0+4U,si1);
goto L1;
L2:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=1647635U;
si2=6U;
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
si1=1647641U;
si2=4U;
si3=l2;
si4=4U;
si3+=si4;
si4=1647872U;
si0=f715(i,si0,si1,si2,si3,si4);
l3=si0;
si0=i32_load8_u(&i->m0,(U64)si0+4U);
l4=si0;
si0=l3;
si0=i32_load8_u(&i->m0,(U64)si0+5U);
if(si0){
goto L8;
}
si0=l4;
si1=255U;
si0&=si1;
si1=0U;
si0=si0 != si1;
l1=si0;
goto L7;
L8:;
si0=1U;
l1=si0;
si0=l4;
si1=255U;
si0&=si1;
if(si0){
goto L9;
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
goto L9;
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
L9:;
si0=l3;
si1=l1;
i32_store8(&i->m0,(U64)si0+4U,si1);
L7:;
si0=l0;
si1=l0;
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
goto L1;
}
si0=l0;
f1433(i,si0);
L1:;
si0=l2;
si1=16U;
si0+=si1;
i->g0=si0;
si0=l1;
L0:;
return si0;
}

U32 f6494(rustpythonInstance*i,U32 l0,U32 l1) {
U32 si0,si1;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
si1=l1;
si0=f6495(i,si0,si1);
L0:;
return si0;
}

U32 f6495(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 si0,si1,si2,si3,si4,si5;
si0=i->g0;
si1=16U;
si0-=si1;
l2=si0;
i->g0=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si1=8U;
si0&=si1;
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
si2=i32_load(&i->m0,(U64)si2);
l5=si2;
si3=l5;
si4=l3;
si3=si3 == si4;
l3=si3;
si1=si3?si1:si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
if(si0){
goto L2;
}
L3:;
si0=l0;
si1=0U;
si0=f1428(i,si0,si1);
if(si0){
goto L2;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=1647635U;
si2=6U;
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
si1=1647641U;
si2=4U;
si3=1647416U;
si4=1647648U;
si0=f715(i,si0,si1,si2,si3,si4);
l0=si0;
si0=i32_load8_u(&i->m0,(U64)si0+4U);
l3=si0;
si0=l0;
si0=i32_load8_u(&i->m0,(U64)si0+5U);
if(si0){
goto L4;
}
si0=l3;
si1=255U;
si0&=si1;
si1=0U;
si0=si0 != si1;
l1=si0;
goto L1;
L4:;
si0=1U;
l1=si0;
si0=l3;
si1=255U;
si0&=si1;
if(si0){
goto L5;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si0=i32_load8_u(&i->m0,(U64)si0+28U);
si1=4U;
si0&=si1;
if(si0){
goto L6;
}
si0=l0;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+20U);
si2=1103462U;
si3=2U;
si4=l1;
si5=24U;
si4+=si5;
si4=i32_load(&i->m0,(U64)si4);
si4=i32_load(&i->m0,(U64)si4+12U);
si1=TF(i->t0,si4,U32 (*)(rustpythonInstance*,U32,U32,U32))(i,si1,si2,si3);
l1=si1;
i32_store8(&i->m0,(U64)si0+4U,si1);
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
L5:;
si0=l0;
si1=l1;
i32_store8(&i->m0,(U64)si0+4U,si1);
goto L1;
L2:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=1647635U;
si2=6U;
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
si1=1647641U;
si2=4U;
si3=l2;
si4=4U;
si3+=si4;
si4=1647792U;
si0=f715(i,si0,si1,si2,si3,si4);
l3=si0;
si0=i32_load8_u(&i->m0,(U64)si0+4U);
l4=si0;
si0=l3;
si0=i32_load8_u(&i->m0,(U64)si0+5U);
if(si0){
goto L8;
}
si0=l4;
si1=255U;
si0&=si1;
si1=0U;
si0=si0 != si1;
l1=si0;
goto L7;
L8:;
si0=1U;
l1=si0;
si0=l4;
si1=255U;
si0&=si1;
if(si0){
goto L9;
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
goto L9;
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
L9:;
si0=l3;
si1=l1;
i32_store8(&i->m0,(U64)si0+4U,si1);
L7:;
si0=l0;
si1=l0;
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
goto L1;
}
si0=l0;
f1433(i,si0);
L1:;
si0=l2;
si1=16U;
si0+=si1;
i->g0=si0;
si0=l1;
L0:;
return si0;
}

U32 f6496(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
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
si1=1669108U;
si2=9U;
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
si1=1647641U;
si2=4U;
si3=l2;
si4=4U;
si3+=si4;
si4=1669120U;
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

U32 f6497(rustpythonInstance*i,U32 l0,U32 l1) {
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
l0=si0;
si0=i32_load(&i->m0,(U64)si0);
switch(si0){
case 0:
goto L5;
case 1:
goto L4;
case 2:
goto L3;
default:
goto L5;
}
L5:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=1649052U;
si2=4U;
si3=l1;
si4=24U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si3=i32_load(&i->m0,(U64)si3+12U);
si0=TF(i->t0,si3,U32 (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
l1=si0;
goto L1;
L4:;
si0=l2;
si1=l0;
si2=4U;
si1+=si2;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l2;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+20U);
si2=1663760U;
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
si2=1663764U;
si0=f716(i,si0,si1,si2);
l1=si0;
si0=l2;
si0=i32_load8_u(&i->m0,(U64)si0+24U);
l0=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
if(si0){
goto L6;
}
si0=l0;
si1=255U;
si0&=si1;
si1=0U;
si0=si0 != si1;
l1=si0;
goto L1;
L6:;
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
L3:;
si0=l2;
si1=l0;
si2=4U;
si1+=si2;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l2;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+20U);
si2=1663780U;
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
si2=1663784U;
si0=f716(i,si0,si1,si2);
l1=si0;
si0=l2;
si0=i32_load8_u(&i->m0,(U64)si0+24U);
l0=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
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
si0=l2;
si0=i32_load(&i->m0,(U64)si0+20U);
l0=si0;
si0=l3;
si1=1U;
si0=si0 != si1;
if(si0){
goto L8;
}
si0=l2;
si0=i32_load8_u(&i->m0,(U64)si0+25U);
si1=255U;
si0&=si1;
si0=!(si0);
if(si0){
goto L8;
}
si0=l0;
si0=i32_load8_u(&i->m0,(U64)si0+28U);
si1=4U;
si0&=si1;
if(si0){
goto L8;
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
L8:;
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

U32 f6498(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 si0,si1,si2,si3,si4,si5;
si0=i->g0;
si1=16U;
si0-=si1;
l2=si0;
i->g0=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
l0=si0;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si1=8U;
si0&=si1;
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
si2=i32_load(&i->m0,(U64)si2);
l5=si2;
si3=l5;
si4=l3;
si3=si3 == si4;
l3=si3;
si1=si3?si1:si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
if(si0){
goto L2;
}
L3:;
si0=l0;
si1=0U;
si0=f1428(i,si0,si1);
if(si0){
goto L2;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=1647635U;
si2=6U;
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
si1=1647641U;
si2=4U;
si3=1647416U;
si4=1647648U;
si0=f715(i,si0,si1,si2,si3,si4);
l0=si0;
si0=i32_load8_u(&i->m0,(U64)si0+4U);
l3=si0;
si0=l0;
si0=i32_load8_u(&i->m0,(U64)si0+5U);
if(si0){
goto L4;
}
si0=l3;
si1=255U;
si0&=si1;
si1=0U;
si0=si0 != si1;
l1=si0;
goto L1;
L4:;
si0=1U;
l1=si0;
si0=l3;
si1=255U;
si0&=si1;
if(si0){
goto L5;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si0=i32_load8_u(&i->m0,(U64)si0+28U);
si1=4U;
si0&=si1;
if(si0){
goto L6;
}
si0=l0;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+20U);
si2=1103462U;
si3=2U;
si4=l1;
si5=24U;
si4+=si5;
si4=i32_load(&i->m0,(U64)si4);
si4=i32_load(&i->m0,(U64)si4+12U);
si1=TF(i->t0,si4,U32 (*)(rustpythonInstance*,U32,U32,U32))(i,si1,si2,si3);
l1=si1;
i32_store8(&i->m0,(U64)si0+4U,si1);
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
L5:;
si0=l0;
si1=l1;
i32_store8(&i->m0,(U64)si0+4U,si1);
goto L1;
L2:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=1647635U;
si2=6U;
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
si1=1647641U;
si2=4U;
si3=l2;
si4=4U;
si3+=si4;
si4=1647712U;
si0=f715(i,si0,si1,si2,si3,si4);
l3=si0;
si0=i32_load8_u(&i->m0,(U64)si0+4U);
l4=si0;
si0=l3;
si0=i32_load8_u(&i->m0,(U64)si0+5U);
if(si0){
goto L8;
}
si0=l4;
si1=255U;
si0&=si1;
si1=0U;
si0=si0 != si1;
l1=si0;
goto L7;
L8:;
si0=1U;
l1=si0;
si0=l4;
si1=255U;
si0&=si1;
if(si0){
goto L9;
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
goto L9;
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
L9:;
si0=l3;
si1=l1;
i32_store8(&i->m0,(U64)si0+4U,si1);
L7:;
si0=l0;
si1=l0;
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
goto L1;
}
si0=l0;
f1433(i,si0);
L1:;
si0=l2;
si1=16U;
si0+=si1;
i->g0=si0;
si0=l1;
L0:;
return si0;
}

U32 f6499(rustpythonInstance*i,U32 l0,U32 l1) {
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
si0=i32_load8_u(&i->m0,(U64)si0);
l0=si0;
si0=!(si0);
if(si0){
goto L2;
}
si0=l2;
si1=l0;
i32_store8(&i->m0,(U64)si0+8U,si1);
si0=l2;
si1=8U;
si0+=si1;
si1=l1;
si0=f9890(i,si0,si1);
l1=si0;
goto L1;
L2:;
si0=l2;
si1=500U;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l2;
si1=1659207U;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=3U;
i32_store8(&i->m0,(U64)si0+36U,si1);
si0=l2;
si1=4U;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l2;
sj1=32ULL;
i64_store(&i->m0,(U64)si0+24U,sj1);
si0=l2;
si1=2U;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l2;
si1=2U;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l1;
si1=24U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l0=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+20U);
l1=si0;
si0=l2;
si1=1U;
i32_store(&i->m0,(U64)si0+60U,si1);
si0=l2;
si1=1U;
i32_store(&i->m0,(U64)si0+52U,si1);
si0=l2;
si1=1U;
i32_store(&i->m0,(U64)si0+44U,si1);
si0=l2;
si1=1647496U;
i32_store(&i->m0,(U64)si0+40U,si1);
si0=l2;
si1=l2;
si2=8U;
si1+=si2;
i32_store(&i->m0,(U64)si0+56U,si1);
si0=l2;
si1=l2;
i32_store(&i->m0,(U64)si0+48U,si1);
si0=l1;
si1=l0;
si2=l2;
si3=40U;
si2+=si3;
si0=f690(i,si0,si1,si2);
l1=si0;
L1:;
si0=l2;
si1=64U;
si0+=si1;
i->g0=si0;
si0=l1;
L0:;
return si0;
}

U32 f6500(rustpythonInstance*i,U32 l0,U32 l1) {
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
l0=si1;
si2=80U;
si1+=si2;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=1650813U;
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
si1=1661107U;
si2=4U;
si3=l0;
si4=1669060U;
si0=f715(i,si0,si1,si2,si3,si4);
si0=l2;
si1=8U;
si0+=si1;
si1=1660636U;
si2=5U;
si3=l2;
si4=4U;
si3+=si4;
si4=1669076U;
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

U32 f6501(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
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
si1=1650220U;
si2=14U;
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
si1=1647641U;
si2=4U;
si3=l2;
si4=4U;
si3+=si4;
si4=1669092U;
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

U32 f6502(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 si0,si1,si2,si3,si4,si5,si6,si7,si8,si9,si10,si11,si12,si13,si14;
si0=i->g0;
si1=16U;
si0-=si1;
l2=si0;
i->g0=si0;
si0=l2;
si1=l0;
si1=i32_load(&i->m0,(U64)si1);
l0=si1;
si2=4U;
si1+=si2;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l1;
si1=1659904U;
si2=8U;
si3=1659912U;
si4=3U;
si5=l0;
si6=1659916U;
si7=1659932U;
si8=4U;
si9=l0;
si10=8U;
si9+=si10;
si10=1659936U;
si11=1659952U;
si12=7U;
si13=l2;
si14=12U;
si13+=si14;
si14=1659960U;
si0=f742(i,si0,si1,si2,si3,si4,si5,si6,si7,si8,si9,si10,si11,si12,si13,si14);
l0=si0;
si0=l2;
si1=16U;
si0+=si1;
i->g0=si0;
si0=l0;
L0:;
return si0;
}

U32 f6503(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 l3=0;
U32 si0,si1,si2,si3,si4;
si0=i->g0;
si1=32U;
si0-=si1;
l2=si0;
i->g0=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
si0=i32_load(&i->m0,(U64)si0);
l0=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=1658864U;
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
si1=l0;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l2;
si1=8U;
si0+=si1;
si1=1658877U;
si2=9U;
si3=l2;
si4=16U;
si3+=si4;
si4=1658888U;
si0=f715(i,si0,si1,si2,si3,si4);
l1=si0;
si0=l2;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+4U);
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l1;
si1=1658904U;
si2=13U;
si3=l2;
si4=20U;
si3+=si4;
si4=1658888U;
si0=f715(i,si0,si1,si2,si3,si4);
l1=si0;
si0=l2;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+8U);
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l1;
si1=1658917U;
si2=7U;
si3=l2;
si4=24U;
si3+=si4;
si4=1658888U;
si0=f715(i,si0,si1,si2,si3,si4);
l1=si0;
si0=l2;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+12U);
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l1;
si1=1658924U;
si2=6U;
si3=l2;
si4=28U;
si3+=si4;
si4=1658888U;
si0=f715(i,si0,si1,si2,si3,si4);
l0=si0;
si0=i32_load8_u(&i->m0,(U64)si0+4U);
l3=si0;
si0=l0;
si0=i32_load8_u(&i->m0,(U64)si0+5U);
if(si0){
goto L2;
}
si0=l3;
si1=255U;
si0&=si1;
si1=0U;
si0=si0 != si1;
l1=si0;
goto L1;
L2:;
si0=1U;
l1=si0;
si0=l3;
si1=255U;
si0&=si1;
if(si0){
goto L3;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si0=i32_load8_u(&i->m0,(U64)si0+28U);
si1=4U;
si0&=si1;
if(si0){
goto L4;
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
goto L3;
L4:;
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
L3:;
si0=l0;
si1=l1;
i32_store8(&i->m0,(U64)si0+4U,si1);
L1:;
si0=l2;
si1=32U;
si0+=si1;
i->g0=si0;
si0=l1;
L0:;
return si0;
}

U32 f6504(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 si0,si1,si2,si3,si4;
si0=i->g0;
si1=96U;
si0-=si1;
l2=si0;
i->g0=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
l0=si0;
si0=l2;
si1=76U;
si0+=si1;
si1=1662876U;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=68U;
si0+=si1;
si1=1662844U;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=8U;
si0+=si1;
si1=52U;
si0+=si1;
si1=1662844U;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=52U;
si0+=si1;
si1=1662844U;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=44U;
si0+=si1;
si1=1662844U;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=36U;
si0+=si1;
si1=1662860U;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=28U;
si0+=si1;
si1=1662844U;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=8U;
si0+=si1;
si1=12U;
si0+=si1;
si1=1662828U;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=l0;
si2=32U;
si1+=si2;
i32_store(&i->m0,(U64)si0+64U,si1);
si0=l2;
si1=l0;
si2=24U;
si1+=si2;
i32_store(&i->m0,(U64)si0+56U,si1);
si0=l2;
si1=l0;
si2=16U;
si1+=si2;
i32_store(&i->m0,(U64)si0+48U,si1);
si0=l2;
si1=l0;
si2=8U;
si1+=si2;
i32_store(&i->m0,(U64)si0+40U,si1);
si0=l2;
si1=l0;
si2=52U;
si1+=si2;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l2;
si1=l0;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l2;
si1=l0;
si2=64U;
si1+=si2;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l2;
si1=1662812U;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l2;
si1=l0;
si2=48U;
si1+=si2;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l2;
si1=l0;
si2=40U;
si1+=si2;
i32_store(&i->m0,(U64)si0+84U,si1);
si0=l2;
si1=l2;
si2=84U;
si1+=si2;
i32_store(&i->m0,(U64)si0+72U,si1);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=1662892U;
si2=12U;
si3=l1;
si4=24U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si3=i32_load(&i->m0,(U64)si3+12U);
si0=TF(i->t0,si3,U32 (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
l0=si0;
si0=l2;
si1=0U;
i32_store8(&i->m0,(U64)si0+93U,si1);
si0=l2;
si1=l0;
i32_store8(&i->m0,(U64)si0+92U,si1);
si0=l2;
si1=l1;
i32_store(&i->m0,(U64)si0+88U,si1);
si0=l2;
si1=88U;
si0+=si1;
si1=1662752U;
si2=3U;
si3=l2;
si4=8U;
si3+=si4;
si4=1104132U;
si0=f715(i,si0,si1,si2,si3,si4);
si0=l2;
si1=88U;
si0+=si1;
si1=1662755U;
si2=5U;
si3=l2;
si4=8U;
si3+=si4;
si4=8U;
si3+=si4;
si4=1104132U;
si0=f715(i,si0,si1,si2,si3,si4);
si0=l2;
si1=88U;
si0+=si1;
si1=1662760U;
si2=7U;
si3=l2;
si4=8U;
si3+=si4;
si4=16U;
si3+=si4;
si4=1104132U;
si0=f715(i,si0,si1,si2,si3,si4);
si0=l2;
si1=88U;
si0+=si1;
si1=1662767U;
si2=6U;
si3=l2;
si4=8U;
si3+=si4;
si4=24U;
si3+=si4;
si4=1104132U;
si0=f715(i,si0,si1,si2,si3,si4);
si0=l2;
si1=88U;
si0+=si1;
si1=1662773U;
si2=3U;
si3=l2;
si4=8U;
si3+=si4;
si4=32U;
si3+=si4;
si4=1104132U;
si0=f715(i,si0,si1,si2,si3,si4);
si0=l2;
si1=88U;
si0+=si1;
si1=1662776U;
si2=7U;
si3=l2;
si4=8U;
si3+=si4;
si4=40U;
si3+=si4;
si4=1104132U;
si0=f715(i,si0,si1,si2,si3,si4);
si0=l2;
si1=88U;
si0+=si1;
si1=1662783U;
si2=8U;
si3=l2;
si4=8U;
si3+=si4;
si4=48U;
si3+=si4;
si4=1104132U;
si0=f715(i,si0,si1,si2,si3,si4);
si0=l2;
si1=88U;
si0+=si1;
si1=1662791U;
si2=9U;
si3=l2;
si4=64U;
si3+=si4;
si4=1104132U;
si0=f715(i,si0,si1,si2,si3,si4);
si0=l2;
si1=88U;
si0+=si1;
si1=1662800U;
si2=9U;
si3=l2;
si4=8U;
si3+=si4;
si4=64U;
si3+=si4;
si4=1104132U;
si0=f715(i,si0,si1,si2,si3,si4);
si0=l2;
si0=i32_load8_u(&i->m0,(U64)si0+92U);
l1=si0;
si0=l2;
si0=i32_load8_u(&i->m0,(U64)si0+93U);
if(si0){
goto L2;
}
si0=l1;
si1=255U;
si0&=si1;
si1=0U;
si0=si0 != si1;
l0=si0;
goto L1;
L2:;
si0=1U;
l0=si0;
si0=l1;
si1=255U;
si0&=si1;
if(si0){
goto L1;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0+88U);
l0=si0;
si0=i32_load8_u(&i->m0,(U64)si0+28U);
si1=4U;
si0&=si1;
if(si0){
goto L3;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=1103462U;
si2=2U;
si3=l0;
si4=24U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si3=i32_load(&i->m0,(U64)si3+12U);
si0=TF(i->t0,si3,U32 (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
l0=si0;
goto L1;
L3:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=1103461U;
si2=1U;
si3=l0;
si4=24U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si3=i32_load(&i->m0,(U64)si3+12U);
si0=TF(i->t0,si3,U32 (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
l0=si0;
L1:;
si0=l2;
si1=96U;
si0+=si1;
i->g0=si0;
si0=l0;
L0:;
return si0;
}

U32 f6505(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
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
si1=1668948U;
si2=5U;
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
si1=1647641U;
si2=4U;
si3=l2;
si4=4U;
si3+=si4;
si4=1668956U;
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

U32 f6506(rustpythonInstance*i,U32 l0,U32 l1) {
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
l0=si1;
si2=32U;
si1+=si2;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=1653806U;
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
si1=1662767U;
si2=6U;
si3=l0;
si4=1668972U;
si0=f715(i,si0,si1,si2,si3,si4);
si0=l2;
si1=8U;
si0+=si1;
si1=1660076U;
si2=6U;
si3=l2;
si4=4U;
si3+=si4;
si4=1669028U;
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

U32 f6507(rustpythonInstance*i,U32 l0,U32 l1) {
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
l0=si0;
si1=4U;
si0+=si1;
l3=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L3;
}
si0=l2;
si1=l3;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l2;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+20U);
si2=1663800U;
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
si2=1663804U;
si0=f716(i,si0,si1,si2);
l1=si0;
si0=l2;
si0=i32_load8_u(&i->m0,(U64)si0+24U);
l0=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
if(si0){
goto L4;
}
si0=l0;
si1=255U;
si0&=si1;
si1=0U;
si0=si0 != si1;
l1=si0;
goto L1;
L4:;
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
L3:;
si0=l2;
si1=l3;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l2;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+20U);
si2=1663820U;
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
si2=1663828U;
si0=f716(i,si0,si1,si2);
l1=si0;
si0=l2;
si0=i32_load8_u(&i->m0,(U64)si0+24U);
l0=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
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
if(si0){
goto L1;
}
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

U32 f6508(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 si0,si1,si2,si3,si4,si5;
si0=i->g0;
si1=16U;
si0-=si1;
l2=si0;
i->g0=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
l0=si0;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si1=8U;
si0&=si1;
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
si2=i32_load(&i->m0,(U64)si2);
l5=si2;
si3=l5;
si4=l3;
si3=si3 == si4;
l3=si3;
si1=si3?si1:si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
if(si0){
goto L2;
}
L3:;
si0=l0;
si1=0U;
si0=f1428(i,si0,si1);
if(si0){
goto L2;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=1647635U;
si2=6U;
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
si1=1647641U;
si2=4U;
si3=1647416U;
si4=1647648U;
si0=f715(i,si0,si1,si2,si3,si4);
l0=si0;
si0=i32_load8_u(&i->m0,(U64)si0+4U);
l3=si0;
si0=l0;
si0=i32_load8_u(&i->m0,(U64)si0+5U);
if(si0){
goto L4;
}
si0=l3;
si1=255U;
si0&=si1;
si1=0U;
si0=si0 != si1;
l1=si0;
goto L1;
L4:;
si0=1U;
l1=si0;
si0=l3;
si1=255U;
si0&=si1;
if(si0){
goto L5;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si0=i32_load8_u(&i->m0,(U64)si0+28U);
si1=4U;
si0&=si1;
if(si0){
goto L6;
}
si0=l0;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+20U);
si2=1103462U;
si3=2U;
si4=l1;
si5=24U;
si4+=si5;
si4=i32_load(&i->m0,(U64)si4);
si4=i32_load(&i->m0,(U64)si4+12U);
si1=TF(i->t0,si4,U32 (*)(rustpythonInstance*,U32,U32,U32))(i,si1,si2,si3);
l1=si1;
i32_store8(&i->m0,(U64)si0+4U,si1);
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
L5:;
si0=l0;
si1=l1;
i32_store8(&i->m0,(U64)si0+4U,si1);
goto L1;
L2:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=1647635U;
si2=6U;
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
si1=1647641U;
si2=4U;
si3=l2;
si4=4U;
si3+=si4;
si4=1647776U;
si0=f715(i,si0,si1,si2,si3,si4);
l3=si0;
si0=i32_load8_u(&i->m0,(U64)si0+4U);
l4=si0;
si0=l3;
si0=i32_load8_u(&i->m0,(U64)si0+5U);
if(si0){
goto L8;
}
si0=l4;
si1=255U;
si0&=si1;
si1=0U;
si0=si0 != si1;
l1=si0;
goto L7;
L8:;
si0=1U;
l1=si0;
si0=l4;
si1=255U;
si0&=si1;
if(si0){
goto L9;
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
goto L9;
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
L9:;
si0=l3;
si1=l1;
i32_store8(&i->m0,(U64)si0+4U,si1);
L7:;
si0=l0;
si1=l0;
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
goto L1;
}
si0=l0;
f1433(i,si0);
L1:;
si0=l2;
si1=16U;
si0+=si1;
i->g0=si0;
si0=l1;
L0:;
return si0;
}

U32 f6509(rustpythonInstance*i,U32 l0,U32 l1) {
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
si1=20U;
si0+=si1;
si1=1215U;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=12U;
si0+=si1;
si1=1215U;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=4U;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l2;
si1=1649048U;
si2=1649052U;
si3=l0;
si3=i32_load(&i->m0,(U64)si3+16U);
si1=si3?si1:si2;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l2;
si1=1260U;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l2;
si1=l0;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=4U;
i32_store(&i->m0,(U64)si0+36U,si1);
si0=l2;
si1=1649048U;
si2=1649052U;
si3=l0;
si3=i32_load(&i->m0,(U64)si3+24U);
si1=si3?si1:si2;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l1;
si1=24U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l0=si0;
si0=l2;
si1=l2;
si2=32U;
si1+=si2;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l2;
si1=l2;
si2=24U;
si1+=si2;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+20U);
l1=si0;
si0=l2;
sj1=3ULL;
i64_store(&i->m0,(U64)si0+52U,sj1);
si0=l2;
si1=4U;
i32_store(&i->m0,(U64)si0+44U,si1);
si0=l2;
si1=1649016U;
i32_store(&i->m0,(U64)si0+40U,si1);
si0=l2;
si1=l2;
i32_store(&i->m0,(U64)si0+48U,si1);
si0=l1;
si1=l0;
si2=l2;
si3=40U;
si2+=si3;
si0=f690(i,si0,si1,si2);
l0=si0;
si0=l2;
si1=64U;
si0+=si1;
i->g0=si0;
si0=l0;
L0:;
return si0;
}

U32 f6510(rustpythonInstance*i,U32 l0,U32 l1) {
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

U32 f6511(rustpythonInstance*i,U32 l0,U32 l1) {
U32 si0,si1;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
si1=l1;
si0=f6512(i,si0,si1);
L0:;
return si0;
}

U32 f6512(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 si0,si1,si2,si3,si4,si5;
si0=i->g0;
si1=16U;
si0-=si1;
l2=si0;
i->g0=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si1=8U;
si0&=si1;
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
si2=i32_load(&i->m0,(U64)si2);
l5=si2;
si3=l5;
si4=l3;
si3=si3 == si4;
l3=si3;
si1=si3?si1:si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
if(si0){
goto L2;
}
L3:;
si0=l0;
si1=0U;
si0=f1428(i,si0,si1);
if(si0){
goto L2;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=1647635U;
si2=6U;
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
si1=1647641U;
si2=4U;
si3=1647416U;
si4=1647648U;
si0=f715(i,si0,si1,si2,si3,si4);
l0=si0;
si0=i32_load8_u(&i->m0,(U64)si0+4U);
l3=si0;
si0=l0;
si0=i32_load8_u(&i->m0,(U64)si0+5U);
if(si0){
goto L4;
}
si0=l3;
si1=255U;
si0&=si1;
si1=0U;
si0=si0 != si1;
l1=si0;
goto L1;
L4:;
si0=1U;
l1=si0;
si0=l3;
si1=255U;
si0&=si1;
if(si0){
goto L5;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si0=i32_load8_u(&i->m0,(U64)si0+28U);
si1=4U;
si0&=si1;
if(si0){
goto L6;
}
si0=l0;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+20U);
si2=1103462U;
si3=2U;
si4=l1;
si5=24U;
si4+=si5;
si4=i32_load(&i->m0,(U64)si4);
si4=i32_load(&i->m0,(U64)si4+12U);
si1=TF(i->t0,si4,U32 (*)(rustpythonInstance*,U32,U32,U32))(i,si1,si2,si3);
l1=si1;
i32_store8(&i->m0,(U64)si0+4U,si1);
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
L5:;
si0=l0;
si1=l1;
i32_store8(&i->m0,(U64)si0+4U,si1);
goto L1;
L2:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=1647635U;
si2=6U;
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
si1=1647641U;
si2=4U;
si3=l2;
si4=4U;
si3+=si4;
si4=1647856U;
si0=f715(i,si0,si1,si2,si3,si4);
l3=si0;
si0=i32_load8_u(&i->m0,(U64)si0+4U);
l4=si0;
si0=l3;
si0=i32_load8_u(&i->m0,(U64)si0+5U);
if(si0){
goto L8;
}
si0=l4;
si1=255U;
si0&=si1;
si1=0U;
si0=si0 != si1;
l1=si0;
goto L7;
L8:;
si0=1U;
l1=si0;
si0=l4;
si1=255U;
si0&=si1;
if(si0){
goto L9;
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
goto L9;
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
L9:;
si0=l3;
si1=l1;
i32_store8(&i->m0,(U64)si0+4U,si1);
L7:;
si0=l0;
si1=l0;
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
goto L1;
}
si0=l0;
f1433(i,si0);
L1:;
si0=l2;
si1=16U;
si0+=si1;
i->g0=si0;
si0=l1;
L0:;
return si0;
}

U32 f6513(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
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
si1=1662480U;
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
si1=1662490U;
si2=6U;
si3=l2;
si4=4U;
si3+=si4;
si4=1662496U;
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

U32 f6514(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
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
si1=1651201U;
si2=13U;
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
si1=1647641U;
si2=4U;
si3=l2;
si4=4U;
si3+=si4;
si4=1669044U;
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

U32 f6515(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 si0,si1,si2,si3,si4,si5;
si0=i->g0;
si1=16U;
si0-=si1;
l2=si0;
i->g0=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
l0=si0;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si1=8U;
si0&=si1;
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
si2=i32_load(&i->m0,(U64)si2);
l5=si2;
si3=l5;
si4=l3;
si3=si3 == si4;
l3=si3;
si1=si3?si1:si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
if(si0){
goto L2;
}
L3:;
si0=l0;
si1=0U;
si0=f1428(i,si0,si1);
if(si0){
goto L2;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=1647635U;
si2=6U;
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
si1=1647641U;
si2=4U;
si3=1647416U;
si4=1647648U;
si0=f715(i,si0,si1,si2,si3,si4);
l0=si0;
si0=i32_load8_u(&i->m0,(U64)si0+4U);
l3=si0;
si0=l0;
si0=i32_load8_u(&i->m0,(U64)si0+5U);
if(si0){
goto L4;
}
si0=l3;
si1=255U;
si0&=si1;
si1=0U;
si0=si0 != si1;
l1=si0;
goto L1;
L4:;
si0=1U;
l1=si0;
si0=l3;
si1=255U;
si0&=si1;
if(si0){
goto L5;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si0=i32_load8_u(&i->m0,(U64)si0+28U);
si1=4U;
si0&=si1;
if(si0){
goto L6;
}
si0=l0;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+20U);
si2=1103462U;
si3=2U;
si4=l1;
si5=24U;
si4+=si5;
si4=i32_load(&i->m0,(U64)si4);
si4=i32_load(&i->m0,(U64)si4+12U);
si1=TF(i->t0,si4,U32 (*)(rustpythonInstance*,U32,U32,U32))(i,si1,si2,si3);
l1=si1;
i32_store8(&i->m0,(U64)si0+4U,si1);
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
L5:;
si0=l0;
si1=l1;
i32_store8(&i->m0,(U64)si0+4U,si1);
goto L1;
L2:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=1647635U;
si2=6U;
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
si1=1647641U;
si2=4U;
si3=l2;
si4=4U;
si3+=si4;
si4=1647760U;
si0=f715(i,si0,si1,si2,si3,si4);
l3=si0;
si0=i32_load8_u(&i->m0,(U64)si0+4U);
l4=si0;
si0=l3;
si0=i32_load8_u(&i->m0,(U64)si0+5U);
if(si0){
goto L8;
}
si0=l4;
si1=255U;
si0&=si1;
si1=0U;
si0=si0 != si1;
l1=si0;
goto L7;
L8:;
si0=1U;
l1=si0;
si0=l4;
si1=255U;
si0&=si1;
if(si0){
goto L9;
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
goto L9;
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
L9:;
si0=l3;
si1=l1;
i32_store8(&i->m0,(U64)si0+4U,si1);
L7:;
si0=l0;
si1=l0;
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
goto L1;
}
si0=l0;
f1433(i,si0);
L1:;
si0=l2;
si1=16U;
si0+=si1;
i->g0=si0;
si0=l1;
L0:;
return si0;
}

U32 f6516(rustpythonInstance*i,U32 l0,U32 l1) {
U32 si0,si1;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
si1=l1;
si0=f6517(i,si0,si1);
L0:;
return si0;
}

U32 f6517(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 si0,si1,si2,si3,si4,si5;
si0=i->g0;
si1=16U;
si0-=si1;
l2=si0;
i->g0=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si1=8U;
si0&=si1;
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
si2=i32_load(&i->m0,(U64)si2);
l5=si2;
si3=l5;
si4=l3;
si3=si3 == si4;
l3=si3;
si1=si3?si1:si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
if(si0){
goto L2;
}
L3:;
si0=l0;
si1=0U;
si0=f1428(i,si0,si1);
if(si0){
goto L2;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=1647635U;
si2=6U;
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
si1=1647641U;
si2=4U;
si3=1647416U;
si4=1647648U;
si0=f715(i,si0,si1,si2,si3,si4);
l0=si0;
si0=i32_load8_u(&i->m0,(U64)si0+4U);
l3=si0;
si0=l0;
si0=i32_load8_u(&i->m0,(U64)si0+5U);
if(si0){
goto L4;
}
si0=l3;
si1=255U;
si0&=si1;
si1=0U;
si0=si0 != si1;
l1=si0;
goto L1;
L4:;
si0=1U;
l1=si0;
si0=l3;
si1=255U;
si0&=si1;
if(si0){
goto L5;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si0=i32_load8_u(&i->m0,(U64)si0+28U);
si1=4U;
si0&=si1;
if(si0){
goto L6;
}
si0=l0;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+20U);
si2=1103462U;
si3=2U;
si4=l1;
si5=24U;
si4+=si5;
si4=i32_load(&i->m0,(U64)si4);
si4=i32_load(&i->m0,(U64)si4+12U);
si1=TF(i->t0,si4,U32 (*)(rustpythonInstance*,U32,U32,U32))(i,si1,si2,si3);
l1=si1;
i32_store8(&i->m0,(U64)si0+4U,si1);
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
L5:;
si0=l0;
si1=l1;
i32_store8(&i->m0,(U64)si0+4U,si1);
goto L1;
L2:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=1647635U;
si2=6U;
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
si1=1647641U;
si2=4U;
si3=l2;
si4=4U;
si3+=si4;
si4=1647888U;
si0=f715(i,si0,si1,si2,si3,si4);
l3=si0;
si0=i32_load8_u(&i->m0,(U64)si0+4U);
l4=si0;
si0=l3;
si0=i32_load8_u(&i->m0,(U64)si0+5U);
if(si0){
goto L8;
}
si0=l4;
si1=255U;
si0&=si1;
si1=0U;
si0=si0 != si1;
l1=si0;
goto L7;
L8:;
si0=1U;
l1=si0;
si0=l4;
si1=255U;
si0&=si1;
if(si0){
goto L9;
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
goto L9;
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
L9:;
si0=l3;
si1=l1;
i32_store8(&i->m0,(U64)si0+4U,si1);
L7:;
si0=l0;
si1=l0;
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
goto L1;
}
si0=l0;
f1433(i,si0);
L1:;
si0=l2;
si1=16U;
si0+=si1;
i->g0=si0;
si0=l1;
L0:;
return si0;
}

U32 f6518(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 l3=0;
U64 l4=0;
U64 l5=0;
U32 si0,si1,si2,si3,si4,si5,si6;
U64 sj0,sj1,sj2,sj3;
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
sj0=i64_load(&i->m0,(U64)si0);
l4=sj0;
sj1=l4;
sj2=63ULL;
sj1=(U64)((I64)sj1>>(sj2&63));
l5=sj1;
sj0^=sj1;
sj1=l5;
sj0-=sj1;
sj1=l4;
sj2=-1ULL;
si1=(U64)((I64)sj1>(I64)sj2);
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

U32 f6519(rustpythonInstance*i,U32 l0,U32 l1) {
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

void f6520(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 si0,si1,si2;
U64 sj1;
si0=i->g0;
si1=80U;
si0-=si1;
l4=si0;
i->g0=si0;
si0=l4;
si1=72U;
si0+=si1;
si1=l3;
si2=56U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=8U;
si0+=si1;
si1=56U;
si0+=si1;
si1=l3;
si2=48U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=8U;
si0+=si1;
si1=48U;
si0+=si1;
si1=l3;
si2=40U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=8U;
si0+=si1;
si1=40U;
si0+=si1;
si1=l3;
si2=32U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=8U;
si0+=si1;
si1=32U;
si0+=si1;
si1=l3;
si2=24U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=8U;
si0+=si1;
si1=24U;
si0+=si1;
si1=l3;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=8U;
si0+=si1;
si1=16U;
si0+=si1;
si1=l3;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=l2;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l4;
si1=l3;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+16U,sj1);
si0=l4;
si1=l4;
si2=8U;
si1+=si2;
si2=8U;
si1+=si2;
si2=l2;
f5875(i,si0,si1,si2);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+4U);
l3=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
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
si1=80U;
si0+=si1;
i->g0=si0;
goto L0;
L1:;
f15042(i);
UNREACHABLE;
L0:;
}

void f6521(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 si0,si1,si2;
U64 sj1;
si0=i->g0;
si1=224U;
si0-=si1;
l4=si0;
i->g0=si0;
si0=l4;
si1=8U;
si0+=si1;
si1=64U;
si0+=si1;
si1=l3;
si2=56U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=8U;
si0+=si1;
si1=56U;
si0+=si1;
si1=l3;
si2=48U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=8U;
si0+=si1;
si1=48U;
si0+=si1;
si1=l3;
si2=40U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=8U;
si0+=si1;
si1=40U;
si0+=si1;
si1=l3;
si2=32U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=8U;
si0+=si1;
si1=32U;
si0+=si1;
si1=l3;
si2=24U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=8U;
si0+=si1;
si1=24U;
si0+=si1;
si1=l3;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=8U;
si0+=si1;
si1=16U;
si0+=si1;
si1=l3;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=l2;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l4;
si1=l3;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+16U,sj1);
si0=l4;
si1=80U;
si0+=si1;
si1=l4;
si2=8U;
si1+=si2;
si2=8U;
si1+=si2;
si2=l2;
f6148(i,si0,si1,si2);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+80U);
l3=si0;
si0=!(si0);
if(si0){
goto L3;
}
si0=l4;
si1=152U;
si0+=si1;
si1=56U;
si0+=si1;
si1=l4;
si2=80U;
si1+=si2;
si2=64U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=152U;
si0+=si1;
si1=48U;
si0+=si1;
si1=l4;
si2=80U;
si1+=si2;
si2=56U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=152U;
si0+=si1;
si1=40U;
si0+=si1;
si1=l4;
si2=80U;
si1+=si2;
si2=48U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=152U;
si0+=si1;
si1=32U;
si0+=si1;
si1=l4;
si2=80U;
si1+=si2;
si2=40U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=152U;
si0+=si1;
si1=24U;
si0+=si1;
si1=l4;
si2=80U;
si1+=si2;
si2=32U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=152U;
si0+=si1;
si1=16U;
si0+=si1;
si1=l4;
si2=80U;
si1+=si2;
si2=24U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=152U;
si0+=si1;
si1=8U;
si0+=si1;
si1=l4;
si2=80U;
si1+=si2;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1+88U);
i64_store(&i->m0,(U64)si0+152U,sj1);
si0=l4;
si1=l2;
i32_store(&i->m0,(U64)si0+220U,si1);
si0=l4;
si1=l3;
si2=56U;
si1+=si2;
l5=si1;
i32_store(&i->m0,(U64)si0+216U,si1);
si0=1U;
l6=si0;
si0=l5;
si1=l4;
si2=152U;
si1+=si2;
si2=l2;
si0=f6522(i,si0,si1,si2);
l5=si0;
if(si0){
goto L4;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0+88U);
si1=1272U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si1=l5;
si1=i32_load(&i->m0,(U64)si1);
l2=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=0U;
l6=si0;
si0=l2;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 == si1;
if(si0){
goto L1;
}
L4:;
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
goto L2;
}
si0=l3;
f7690(i,si0);
goto L2;
L3:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+84U);
l5=si0;
si0=1U;
l6=si0;
L2:;
si0=l0;
si1=l5;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l6;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=224U;
si0+=si1;
i->g0=si0;
goto L0;
L1:;
f15042(i);
UNREACHABLE;
L0:;
}

U32 f6522(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U64 l7=0;
U32 l8=0;
U32 si0,si1,si2,si3,si4;
U64 sj1;
si0=i->g0;
si1=80U;
si0-=si1;
l3=si0;
i->g0=si0;
si0=l3;
si1=8U;
si0+=si1;
si1=l1;
si2=l2;
f6270(i,si0,si1,si2);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+8U);
l1=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+12U);
l4=si0;
si1=2U;
si0=si0 != si1;
if(si0){
goto L6;
}
si0=l1;
si1=56U;
si0+=si1;
si1=l2;
si0=f13675(i,si0,si1);
l0=si0;
si0=l3;
si1=64U;
si0+=si1;
si1=12U;
si0+=si1;
si1=2339U;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=40U;
si0+=si1;
si1=12U;
si0+=si1;
sj1=2ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=l0;
i32_store(&i->m0,(U64)si0+72U,si1);
si0=l3;
si1=1215U;
i32_store(&i->m0,(U64)si0+68U,si1);
si0=l3;
si1=1662956U;
i32_store(&i->m0,(U64)si0+64U,si1);
si0=l3;
si1=2U;
i32_store(&i->m0,(U64)si0+44U,si1);
si0=l3;
si1=1662940U;
i32_store(&i->m0,(U64)si0+40U,si1);
si0=l3;
si1=l3;
si2=64U;
si1+=si2;
i32_store(&i->m0,(U64)si0+48U,si1);
si0=l3;
si1=24U;
si0+=si1;
si1=l3;
si2=40U;
si1+=si2;
f63(i,si0,si1);
si0=l0;
si1=l0;
si1=i32_load(&i->m0,(U64)si1);
l4=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=1U;
si0=si0 != si1;
if(si0){
goto L7;
}
si0=l0;
f7690(i,si0);
L7:;
si0=l3;
si1=40U;
si0+=si1;
si1=8U;
si0+=si1;
si1=l3;
si2=24U;
si1+=si2;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=l3;
sj1=i64_load(&i->m0,(U64)si1+24U);
i64_store(&i->m0,(U64)si0+40U,sj1);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+28U);
l0=si0;
si1=l0;
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
goto L3;
}
si0=l2;
si1=l0;
si2=l3;
si3=40U;
si2+=si3;
si0=f7173(i,si0,si1,si2);
l4=si0;
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
goto L5;
}
goto L4;
L6:;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967832U);
if(si0){
goto L8;
}
si0=0U;
si1=1U;
i32_store16(&i->m0,(U64)si0+2967832U,si1);
L8:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
si1=2967833U;
si0=si0 == si1;
if(si0){
goto L12;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0+16U);
l5=si0;
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
goto L13;
}
si0=l0;
si1=4U;
si0+=si1;
sj1=l7;
si2=1000000000U;
si0=f1439(i,si0,sj1,si2);
L13:;
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
goto L14;
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
goto L14;
}
si0=l6;
f7690(i,si0);
L14:;
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0+56U,si1);
si0=l0;
si1=72U;
si0+=si1;
l6=si0;
si1=l6;
si1=i32_load8_u(&i->m0,(U64)si1);
si2=254U;
si1&=si2;
i32_store8(&i->m0,(U64)si0,si1);
si0=8192U;
l6=si0;
si0=l4;
if(si0){
goto L15;
}
si0=l5;
l6=si0;
si0=l5;
si1=0U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L11;
}
L15:;
si0=l1;
si1=l2;
si0=f6823(i,si0,si1);
l4=si0;
if(si0){
goto L10;
}
si0=l0;
si1=l0;
si1=i32_load8_u(&i->m0,(U64)si1+72U);
si2=4U;
si1|=si2;
i32_store8(&i->m0,(U64)si0+72U,si1);
si0=l1;
si1=l2;
si0=f6710(i,si0,si1);
l4=si0;
if(si0){
goto L10;
}
si0=l0;
si1=l0;
si1=i32_load8_u(&i->m0,(U64)si1+72U);
si2=2U;
si1|=si2;
i32_store8(&i->m0,(U64)si0+72U,si1);
si0=l1;
si1=l2;
si0=f6727(i,si0,si1);
l4=si0;
if(si0){
goto L10;
}
si0=l3;
si1=l6;
si2=1U;
f7251(i,si0,si1,si2);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+4U);
l2=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
si0=l0;
si1=64U;
si0+=si1;
l5=si0;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L16;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+60U);
f15271(i,si0);
L16:;
si0=l0;
si1=l4;
i32_store(&i->m0,(U64)si0+60U,si1);
si0=l0;
si1=68U;
si0+=si1;
si1=l6;
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=l2;
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
si1=32U;
si0+=si1;
sj1=-1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=16U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si0=i32_load(&i->m0,(U64)si0+56U);
l2=si0;
si0=!(si0);
if(si0){
goto L17;
}
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
goto L17;
}
si0=l2;
f7690(i,si0);
L17:;
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
goto L4;
}
si0=0U;
l4=si0;
si0=l0;
si1=4U;
si0+=si1;
si1=0U;
f1440(i,si0,si1);
goto L4;
L12:;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=33U;
si0=f15269(i,si0);
l0=si0;
si0=!(si0);
if(si0){
goto L2;
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
si0=l2;
si0=i32_load(&i->m0,(U64)si0+88U);
si1=476U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
si1=l4;
si1=i32_load(&i->m0,(U64)si1);
l6=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
sj1=141733920801ULL;
i64_store(&i->m0,(U64)si0+44U,sj1);
si0=l3;
si1=l0;
i32_store(&i->m0,(U64)si0+40U,si1);
si0=l6;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 == si1;
if(si0){
goto L3;
}
si0=l2;
si1=l4;
si2=l3;
si3=40U;
si2+=si3;
si0=f7173(i,si0,si1,si2);
l4=si0;
goto L9;
L11:;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=37U;
si0=f15269(i,si0);
l4=si0;
si0=!(si0);
if(si0){
goto L1;
}
si0=l4;
si1=29U;
si0+=si1;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+1663009U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=24U;
si0+=si1;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+1663004U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=16U;
si0+=si1;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+1662996U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=8U;
si0+=si1;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+1662988U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+1662980U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si0=i32_load(&i->m0,(U64)si0+88U);
si1=508U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si1=l6;
si1=i32_load(&i->m0,(U64)si1);
l5=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
sj1=158913789989ULL;
i64_store(&i->m0,(U64)si0+44U,sj1);
si0=l3;
si1=l4;
i32_store(&i->m0,(U64)si0+40U,si1);
si0=l5;
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
si3=40U;
si2+=si3;
si0=f7173(i,si0,si1,si2);
l4=si0;
L10:;
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
goto L9;
}
si0=l0;
si1=4U;
si0+=si1;
si1=0U;
f1440(i,si0,si1);
L9:;
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
goto L4;
}
L5:;
si0=l1;
f7690(i,si0);
L4:;
si0=l3;
si1=80U;
si0+=si1;
i->g0=si0;
si0=l4;
goto L0;
L3:;
f15042(i);
UNREACHABLE;
L2:;
si0=1U;
si1=33U;
f52(i,si0,si1);
UNREACHABLE;
L1:;
si0=1U;
si1=37U;
f52(i,si0,si1);
UNREACHABLE;
L0:;
return si0;
}

void f6523(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U32 l5=0;
U32 l6=0;
U64 l7=0;
U32 si0,si1,si2,si3,si4;
U64 sj0,sj1,sj2;
si0=i->g0;
si1=96U;
si0-=si1;
l4=si0;
i->g0=si0;
si0=l4;
si1=72U;
si0+=si1;
si1=l3;
si2=56U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=8U;
si0+=si1;
si1=56U;
si0+=si1;
si1=l3;
si2=48U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=8U;
si0+=si1;
si1=48U;
si0+=si1;
si1=l3;
si2=40U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=8U;
si0+=si1;
si1=40U;
si0+=si1;
si1=l3;
si2=32U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=8U;
si0+=si1;
si1=32U;
si0+=si1;
si1=l3;
si2=24U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=8U;
si0+=si1;
si1=24U;
si0+=si1;
si1=l3;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=8U;
si0+=si1;
si1=16U;
si0+=si1;
si1=l3;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=l2;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l4;
si1=l3;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+16U,sj1);
si0=l4;
si1=80U;
si0+=si1;
si1=l4;
si2=8U;
si1+=si2;
si2=8U;
si1+=si2;
si2=l2;
f5955(i,si0,si1,si2);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+84U);
l3=si0;
si0=1U;
l5=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+80U);
l6=si0;
si1=2U;
si0=si0 == si1;
if(si0){
goto L1;
}
si0=1U;
l5=si0;
si0=l4;
sj0=i64_load(&i->m0,(U64)si0+88U);
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
si1=96U;
si0+=si1;
i->g0=si0;
L0:;
}

void f6524(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 si0,si1,si2;
U64 sj1;
si0=i->g0;
si1=80U;
si0-=si1;
l4=si0;
i->g0=si0;
si0=l4;
si1=72U;
si0+=si1;
si1=l3;
si2=56U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=8U;
si0+=si1;
si1=56U;
si0+=si1;
si1=l3;
si2=48U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=8U;
si0+=si1;
si1=48U;
si0+=si1;
si1=l3;
si2=40U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=8U;
si0+=si1;
si1=40U;
si0+=si1;
si1=l3;
si2=32U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=8U;
si0+=si1;
si1=32U;
si0+=si1;
si1=l3;
si2=24U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=8U;
si0+=si1;
si1=24U;
si0+=si1;
si1=l3;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=8U;
si0+=si1;
si1=16U;
si0+=si1;
si1=l3;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=l2;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l4;
si1=l3;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+16U,sj1);
si0=l4;
si1=l4;
si2=8U;
si1+=si2;
si2=8U;
si1+=si2;
si2=l2;
f6183(i,si0,si1,si2);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+4U);
l3=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
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
si1=80U;
si0+=si1;
i->g0=si0;
goto L0;
L1:;
f15042(i);
UNREACHABLE;
L0:;
}

void f6525(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U32 si0,si1,si2,si3,si4;
U64 sj1;
si0=i->g0;
si1=80U;
si0-=si1;
l4=si0;
i->g0=si0;
si0=l4;
si1=72U;
si0+=si1;
si1=l3;
si2=56U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=8U;
si0+=si1;
si1=56U;
si0+=si1;
si1=l3;
si2=48U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=8U;
si0+=si1;
si1=48U;
si0+=si1;
si1=l3;
si2=40U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=8U;
si0+=si1;
si1=40U;
si0+=si1;
si1=l3;
si2=32U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=8U;
si0+=si1;
si1=32U;
si0+=si1;
si1=l3;
si2=24U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=8U;
si0+=si1;
si1=24U;
si0+=si1;
si1=l3;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=8U;
si0+=si1;
si1=16U;
si0+=si1;
si1=l3;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=l2;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l4;
si1=l3;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+16U,sj1);
si0=l4;
si1=l4;
si2=l2;
si3=l4;
si4=8U;
si3+=si4;
si4=8U;
si3+=si4;
f6526(i,si0,si1,si2,si3);
si0=l0;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=80U;
si0+=si1;
i->g0=si0;
L0:;
}

void f6526(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
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
U64 l20=0;
U64 l21=0;
U32 l22=0;
U32 si0,si1,si2,si3,si4,si5;
U64 sj0,sj1,sj2;
si0=i->g0;
si1=240U;
si0-=si1;
l4=si0;
i->g0=si0;
si0=l4;
si1=192U;
si0+=si1;
si1=l3;
si2=l2;
f6221(i,si0,si1,si2);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+192U);
l3=si0;
si0=1U;
l5=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+200U);
l6=si0;
si1=2U;
si0=si0 != si1;
if(si0){
goto L2;
}
si0=l3;
l6=si0;
goto L1;
L2:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+196U);
l7=si0;
si0=l4;
si1=0U;
si2=l4;
si2=i32_load(&i->m0,(U64)si2+204U);
si3=l6;
si1=si3?si1:si2;
l5=si1;
i32_store(&i->m0,(U64)si0+164U,si1);
si0=l4;
si1=192U;
si0+=si1;
si1=l3;
si2=56U;
si1+=si2;
l8=si1;
si2=l2;
f6613(i,si0,si1,si2);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+196U);
l6=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+192U);
l9=si0;
if(si0){
goto L6;
}
si0=1U;
l5=si0;
goto L5;
L6:;
si0=l6;
si0=i32_load8_u(&i->m0,(U64)si0+79U);
si0=!(si0);
if(si0){
goto L34;
}
si0=0U;
l10=si0;
si0=l7;
l11=si0;
si0=l5;
switch(si0){
case 0:
goto L20;
case 1:
goto L32;
case 2:
goto L31;
default:
goto L33;
}
L34:;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=33U;
si0=f15269(i,si0);
l6=si0;
si0=!(si0);
if(si0){
goto L30;
}
si0=l6;
si1=32U;
si0+=si1;
si1=0U;
si1=i32_load8_u(&i->m0,(U64)si1+1664092U);
i32_store8(&i->m0,(U64)si0,si1);
si0=l6;
si1=24U;
si0+=si1;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+1664084U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l6;
si1=16U;
si0+=si1;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+1664076U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l6;
si1=8U;
si0+=si1;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+1664068U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l6;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+1664060U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
sj1=141733920801ULL;
i64_store(&i->m0,(U64)si0+196U,sj1);
si0=l4;
si1=l6;
i32_store(&i->m0,(U64)si0+192U,si1);
si0=0U;
si0=i32_load(&i->m0,(U64)si0+2969404U);
si1=2U;
si0=si0 != si1;
if(si0){
goto L29;
}
si0=0U;
si0=i32_load(&i->m0,(U64)si0+2969408U);
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
goto L12;
}
si0=l2;
si1=l6;
si2=l4;
si3=192U;
si2+=si3;
si0=f7173(i,si0,si1,si2);
l6=si0;
goto L18;
L33:;
si0=l4;
si1=204U;
si0+=si1;
sj1=1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=2U;
i32_store(&i->m0,(U64)si0+196U,si1);
si0=l4;
si1=1664044U;
i32_store(&i->m0,(U64)si0+192U,si1);
si0=l4;
si1=55U;
i32_store(&i->m0,(U64)si0+180U,si1);
si0=l4;
si1=l4;
si2=176U;
si1+=si2;
i32_store(&i->m0,(U64)si0+200U,si1);
si0=l4;
si1=l4;
si2=164U;
si1+=si2;
i32_store(&i->m0,(U64)si0+176U,si1);
si0=l4;
si1=224U;
si0+=si1;
si1=l4;
si2=192U;
si1+=si2;
f63(i,si0,si1);
si0=l2;
si0=i32_load(&i->m0,(U64)si0+88U);
si1=508U;
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
goto L12;
}
si0=l2;
si1=l6;
si2=l4;
si3=224U;
si2+=si3;
si0=f7173(i,si0,si1,si2);
l6=si0;
goto L18;
L32:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+88U);
l5=si0;
si1=1308U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l12=si0;
si1=6U;
si0=si0 < si1;
if(si0){
goto L28;
}
si0=l5;
si1=1300U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=i32_load(&i->m0,(U64)si0+20U);
l13=si0;
si1=l13;
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
goto L12;
}
si0=l4;
si1=4U;
i32_store8(&i->m0,(U64)si0+168U,si1);
si0=l4;
si1=4U;
i32_store8(&i->m0,(U64)si0+172U,si1);
si0=l4;
si1=l2;
i32_store(&i->m0,(U64)si0+216U,si1);
si0=0U;
l10=si0;
si0=l13;
si0=i32_load(&i->m0,(U64)si0+28U);
l12=si0;
si1=l7;
si1=i32_load(&i->m0,(U64)si1+28U);
l11=si1;
si0=si0 == si1;
if(si0){
goto L36;
}
si0=l12;
si1=468U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=2U;
si0<<=(si1&31);
l5=si0;
si0=l12;
si1=460U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l12=si0;
L37:;
{
si0=l5;
si0=!(si0);
if(si0){
goto L36;
}
si0=l5;
si1=-4U;
si0+=si1;
l5=si0;
si0=l12;
si0=i32_load(&i->m0,(U64)si0);
l14=si0;
si0=l12;
si1=4U;
si0+=si1;
l12=si0;
si0=l14;
si1=l11;
si0=si0 != si1;
if(si0){
goto L37;
}
}
si0=l4;
si1=l7;
i32_store(&i->m0,(U64)si0+200U,si1);
si0=l4;
si1=l13;
i32_store(&i->m0,(U64)si0+196U,si1);
si0=l4;
si1=l4;
si2=172U;
si1+=si2;
i32_store(&i->m0,(U64)si0+204U,si1);
si0=l4;
si1=l4;
si2=216U;
si1+=si2;
i32_store(&i->m0,(U64)si0+192U,si1);
si0=l4;
si1=224U;
si0+=si1;
si1=l2;
si2=1659268U;
si3=13U;
si4=l4;
si5=192U;
si4+=si5;
f7605(i,si0,si1,si2,si3,si4);
si0=l4;
si0=i32_load8_u(&i->m0,(U64)si0+224U);
l5=si0;
si1=3U;
si0=si0 == si1;
if(si0){
goto L27;
}
si0=1U;
l10=si0;
si0=l5;
si1=2U;
si0=si0 != si1;
if(si0){
goto L35;
}
L36:;
si0=l4;
si1=l13;
i32_store(&i->m0,(U64)si0+200U,si1);
si0=l4;
si1=l7;
i32_store(&i->m0,(U64)si0+196U,si1);
si0=l4;
si1=l4;
si2=168U;
si1+=si2;
i32_store(&i->m0,(U64)si0+204U,si1);
si0=l4;
si1=l4;
si2=216U;
si1+=si2;
i32_store(&i->m0,(U64)si0+192U,si1);
si0=l4;
si1=224U;
si0+=si1;
si1=l2;
si2=1659268U;
si3=13U;
si4=l4;
si5=192U;
si4+=si5;
f7605(i,si0,si1,si2,si3,si4);
si0=l4;
si0=i32_load8_u(&i->m0,(U64)si0+224U);
l5=si0;
si1=3U;
si0=si0 == si1;
if(si0){
goto L27;
}
si0=l5;
si1=2U;
si0=si0 == si1;
if(si0){
goto L38;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0+228U);
l12=si0;
si0=l4;
si0=i32_load16_u(&i->m0,(U64)si0+225U);
si1=l4;
si1=i32_load8_u(&i->m0,(U64)si1+227U);
si2=16U;
si1<<=(si2&31);
si0|=si1;
si1=8U;
si0<<=(si1&31);
si1=l5;
si0|=si1;
l5=si0;
goto L21;
L38:;
si0=l10;
if(si0){
goto L22;
}
si0=l4;
si1=l7;
i32_store(&i->m0,(U64)si0+200U,si1);
si0=l4;
si1=l13;
i32_store(&i->m0,(U64)si0+196U,si1);
si0=l4;
si1=l4;
si2=172U;
si1+=si2;
i32_store(&i->m0,(U64)si0+204U,si1);
si0=l4;
si1=l4;
si2=216U;
si1+=si2;
i32_store(&i->m0,(U64)si0+192U,si1);
si0=l4;
si1=224U;
si0+=si1;
si1=l2;
si2=1659268U;
si3=13U;
si4=l4;
si5=192U;
si4+=si5;
f7605(i,si0,si1,si2,si3,si4);
si0=l4;
si0=i32_load8_u(&i->m0,(U64)si0+224U);
l5=si0;
si1=3U;
si0=si0 == si1;
if(si0){
goto L27;
}
si0=l5;
si1=2U;
si0=si0 == si1;
if(si0){
goto L22;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0+228U);
l12=si0;
si0=l4;
si0=i32_load16_u(&i->m0,(U64)si0+225U);
si1=l4;
si1=i32_load8_u(&i->m0,(U64)si1+227U);
si2=16U;
si1<<=(si2&31);
si0|=si1;
si1=8U;
si0<<=(si1&31);
si1=l5;
si0|=si1;
l5=si0;
goto L21;
L35:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+228U);
l12=si0;
si0=l4;
si0=i32_load16_u(&i->m0,(U64)si0+225U);
si1=l4;
si1=i32_load8_u(&i->m0,(U64)si1+227U);
si2=16U;
si1<<=(si2&31);
si0|=si1;
si1=8U;
si0<<=(si1&31);
si1=l5;
si0|=si1;
l5=si0;
goto L21;
L31:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+88U);
l6=si0;
si1=1308U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si1=6U;
si0=si0 < si1;
if(si0){
goto L26;
}
si0=l6;
si1=1300U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=i32_load(&i->m0,(U64)si0+20U);
l11=si0;
si1=l11;
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
si0=l4;
si1=4U;
i32_store8(&i->m0,(U64)si0+168U,si1);
si0=l4;
si1=4U;
i32_store8(&i->m0,(U64)si0+172U,si1);
si0=l4;
si1=l2;
i32_store(&i->m0,(U64)si0+216U,si1);
si0=0U;
l13=si0;
si0=l11;
si0=i32_load(&i->m0,(U64)si0+28U);
l5=si0;
si1=l7;
si1=i32_load(&i->m0,(U64)si1+28U);
l14=si1;
si0=si0 == si1;
if(si0){
goto L40;
}
si0=l5;
si1=468U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=2U;
si0<<=(si1&31);
l6=si0;
si0=l5;
si1=460U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
L41:;
{
si0=l6;
si0=!(si0);
if(si0){
goto L40;
}
si0=l6;
si1=-4U;
si0+=si1;
l6=si0;
si0=l5;
si0=i32_load(&i->m0,(U64)si0);
l12=si0;
si0=l5;
si1=4U;
si0+=si1;
l5=si0;
si0=l12;
si1=l14;
si0=si0 != si1;
if(si0){
goto L41;
}
}
si0=l4;
si1=l7;
i32_store(&i->m0,(U64)si0+200U,si1);
si0=l4;
si1=l11;
i32_store(&i->m0,(U64)si0+196U,si1);
si0=l4;
si1=l4;
si2=172U;
si1+=si2;
i32_store(&i->m0,(U64)si0+204U,si1);
si0=l4;
si1=l4;
si2=216U;
si1+=si2;
i32_store(&i->m0,(U64)si0+192U,si1);
si0=l4;
si1=224U;
si0+=si1;
si1=l2;
si2=1659268U;
si3=13U;
si4=l4;
si5=192U;
si4+=si5;
f7605(i,si0,si1,si2,si3,si4);
si0=l4;
si0=i32_load8_u(&i->m0,(U64)si0+224U);
l5=si0;
si1=3U;
si0=si0 == si1;
if(si0){
goto L25;
}
si0=1U;
l13=si0;
si0=l5;
si1=2U;
si0=si0 != si1;
if(si0){
goto L39;
}
L40:;
si0=l4;
si1=l11;
i32_store(&i->m0,(U64)si0+200U,si1);
si0=l4;
si1=l7;
i32_store(&i->m0,(U64)si0+196U,si1);
si0=l4;
si1=l4;
si2=168U;
si1+=si2;
i32_store(&i->m0,(U64)si0+204U,si1);
si0=l4;
si1=l4;
si2=216U;
si1+=si2;
i32_store(&i->m0,(U64)si0+192U,si1);
si0=l4;
si1=224U;
si0+=si1;
si1=l2;
si2=1659268U;
si3=13U;
si4=l4;
si5=192U;
si4+=si5;
f7605(i,si0,si1,si2,si3,si4);
si0=l4;
si0=i32_load8_u(&i->m0,(U64)si0+224U);
l5=si0;
si1=3U;
si0=si0 == si1;
if(si0){
goto L25;
}
si0=l5;
si1=2U;
si0=si0 == si1;
if(si0){
goto L42;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0+228U);
l6=si0;
si0=l4;
si0=i32_load16_u(&i->m0,(U64)si0+225U);
si1=l4;
si1=i32_load8_u(&i->m0,(U64)si1+227U);
si2=16U;
si1<<=(si2&31);
si0|=si1;
si1=8U;
si0<<=(si1&31);
si1=l5;
si0|=si1;
l5=si0;
goto L23;
L42:;
si0=l13;
if(si0){
goto L24;
}
si0=l4;
si1=l7;
i32_store(&i->m0,(U64)si0+200U,si1);
si0=l4;
si1=l11;
i32_store(&i->m0,(U64)si0+196U,si1);
si0=l4;
si1=l4;
si2=172U;
si1+=si2;
i32_store(&i->m0,(U64)si0+204U,si1);
si0=l4;
si1=l4;
si2=216U;
si1+=si2;
i32_store(&i->m0,(U64)si0+192U,si1);
si0=l4;
si1=224U;
si0+=si1;
si1=l2;
si2=1659268U;
si3=13U;
si4=l4;
si5=192U;
si4+=si5;
f7605(i,si0,si1,si2,si3,si4);
si0=l4;
si0=i32_load8_u(&i->m0,(U64)si0+224U);
l5=si0;
si1=3U;
si0=si0 == si1;
if(si0){
goto L25;
}
si0=l5;
si1=2U;
si0=si0 == si1;
if(si0){
goto L24;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0+228U);
l6=si0;
si0=l4;
si0=i32_load16_u(&i->m0,(U64)si0+225U);
si1=l4;
si1=i32_load8_u(&i->m0,(U64)si1+227U);
si2=16U;
si1<<=(si2&31);
si0|=si1;
si1=8U;
si0<<=(si1&31);
si1=l5;
si0|=si1;
l5=si0;
goto L23;
L39:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+228U);
l6=si0;
si0=l4;
si0=i32_load16_u(&i->m0,(U64)si0+225U);
si1=l4;
si1=i32_load8_u(&i->m0,(U64)si1+227U);
si2=16U;
si1<<=(si2&31);
si0|=si1;
si1=8U;
si0<<=(si1&31);
si1=l5;
si0|=si1;
l5=si0;
goto L23;
L30:;
si0=1U;
si1=33U;
f52(i,si0,si1);
UNREACHABLE;
L29:;
si0=1647592U;
si1=43U;
si2=1660104U;
f673(i,si0,si1,si2);
UNREACHABLE;
L28:;
si0=5U;
si1=l12;
si2=1659344U;
f663(i,si0,si1,si2);
UNREACHABLE;
L27:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+228U);
l12=si0;
si0=2U;
l5=si0;
goto L21;
L26:;
si0=5U;
si1=l5;
si2=1659344U;
f663(i,si0,si1,si2);
UNREACHABLE;
L25:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+228U);
l6=si0;
si0=2U;
l5=si0;
goto L23;
L24:;
si0=1810698U;
l6=si0;
si0=l4;
si0=i32_load8_u(&i->m0,(U64)si0+168U);
l12=si0;
si1=-1U;
si0+=si1;
switch(si0){
case 0:
goto L45;
case 1:
goto L48;
case 2:
goto L44;
case 3:
goto L43;
case 4:
goto L47;
case 5:
goto L46;
default:
goto L45;
}
L48:;
si0=1U;
l12=si0;
si0=1810898U;
l6=si0;
goto L45;
L47:;
si0=2U;
l12=si0;
si0=1825884U;
l6=si0;
goto L45;
L46:;
si0=2U;
l12=si0;
si0=1825886U;
l6=si0;
L45:;
si0=2U;
l5=si0;
si0=l2;
si1=l7;
si2=l11;
si3=l6;
si4=l12;
si0=f7577(i,si0,si1,si2,si3,si4);
l6=si0;
goto L23;
L44:;
si0=1U;
si1=257U;
si2=l11;
si3=l7;
si2=si2 == si3;
si0=si2?si0:si1;
l5=si0;
goto L23;
L43:;
si0=257U;
si1=1U;
si2=l11;
si3=l7;
si2=si2 == si3;
si0=si2?si0:si1;
l5=si0;
L23:;
si0=l5;
si1=255U;
si0&=si1;
si1=2U;
si0=si0 == si1;
if(si0){
goto L50;
}
si0=l5;
si1=1U;
si0&=si1;
si0=!(si0);
if(si0){
goto L51;
}
si0=l5;
si1=256U;
si0&=si1;
si1=8U;
si0>>=(si1&31);
l6=si0;
goto L49;
L51:;
si0=l4;
si1=176U;
si0+=si1;
si1=l6;
si2=l2;
f7740(i,si0,si1,si2);
si0=l4;
si0=i32_load8_u(&i->m0,(U64)si0+176U);
if(si0){
goto L52;
}
si0=l4;
si0=i32_load8_u(&i->m0,(U64)si0+177U);
si1=0U;
si0=si0 != si1;
l6=si0;
goto L49;
L52:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+180U);
l6=si0;
L50:;
si0=l11;
si1=l11;
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
si0=l11;
f7690(i,si0);
goto L18;
L49:;
si0=l11;
si1=l11;
si1=i32_load(&i->m0,(U64)si1);
l5=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=1U;
si0=si0 != si1;
if(si0){
goto L53;
}
si0=l11;
f7690(i,si0);
L53:;
si0=l6;
si0=!(si0);
if(si0){
goto L58;
}
si0=l9;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=1U;
l5=si0;
si0=l9;
si1=0U;
si2=l9;
si2=i32_load8_u(&i->m0,(U64)si2+4U);
l6=si2;
si3=l6;
si4=1U;
si3=si3 == si4;
l6=si3;
si1=si3?si1:si2;
i32_store8(&i->m0,(U64)si0+4U,si1);
si0=l6;
if(si0){
goto L59;
}
si0=l9;
si1=4U;
si0+=si1;
si1=0U;
f1440(i,si0,si1);
L59:;
si0=l4;
si1=144U;
si0+=si1;
si1=l2;
si2=l3;
si3=1660445U;
si4=5U;
f6614(i,si0,si1,si2,si3,si4);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+148U);
l6=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+144U);
if(si0){
goto L5;
}
si0=l6;
si1=l6;
si1=i32_load(&i->m0,(U64)si1);
l12=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=1U;
l5=si0;
si0=l12;
si1=1U;
si0=si0 != si1;
if(si0){
goto L60;
}
si0=l6;
f7690(i,si0);
L60:;
si0=l4;
si1=192U;
si0+=si1;
si1=l8;
si2=l2;
f6613(i,si0,si1,si2);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+196U);
l12=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+192U);
l9=si0;
if(si0){
goto L57;
}
si0=l12;
l6=si0;
goto L5;
L58:;
si0=l4;
si1=152U;
si0+=si1;
si1=35U;
si2=0U;
f7251(i,si0,si1,si2);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+156U);
l5=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+152U);
l6=si0;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+1663968U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l6;
si1=31U;
si0+=si1;
si1=0U;
si1=i32_load(&i->m0,(U64)si1+1663999U);
i32_store(&i->m0,(U64)si0,si1);
si0=l6;
si1=24U;
si0+=si1;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+1663992U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l6;
si1=16U;
si0+=si1;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+1663984U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l6;
si1=8U;
si0+=si1;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+1663976U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=35U;
i32_store(&i->m0,(U64)si0+200U,si1);
si0=l4;
si1=l5;
i32_store(&i->m0,(U64)si0+196U,si1);
si0=l4;
si1=l6;
i32_store(&i->m0,(U64)si0+192U,si1);
si0=0U;
si0=i32_load(&i->m0,(U64)si0+2969404U);
si1=2U;
si0=si0 != si1;
if(si0){
goto L56;
}
si0=0U;
si0=i32_load(&i->m0,(U64)si0+2969408U);
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
goto L12;
}
si0=l2;
si1=l6;
si2=l4;
si3=192U;
si2+=si3;
si0=f7173(i,si0,si1,si2);
l6=si0;
goto L18;
L57:;
si0=l12;
si0=i32_load(&i->m0,(U64)si0+40U);
l6=si0;
si0=!(si0);
if(si0){
goto L61;
}
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
goto L61;
}
si0=l6;
f7690(i,si0);
L61:;
si0=l12;
sj1=0ULL;
i64_store(&i->m0,(U64)si0+16U,sj1);
si0=l12;
si1=0U;
i32_store(&i->m0,(U64)si0+40U,si1);
si0=l12;
si1=12U;
si0+=si1;
l5=si0;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si0=!(si0);
if(si0){
goto L62;
}
si0=l6;
si1=l6;
si1=i32_load(&i->m0,(U64)si1);
l14=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l14;
si1=1U;
si0=si0 != si1;
if(si0){
goto L62;
}
si0=l6;
f7690(i,si0);
L62:;
si0=l5;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l12;
si0=i32_load(&i->m0,(U64)si0+32U);
l6=si0;
si0=!(si0);
if(si0){
goto L55;
}
si0=l4;
si1=136U;
si0+=si1;
si1=l2;
si2=l6;
si3=1661544U;
si4=5U;
f6614(i,si0,si1,si2,si3,si4);
si0=1U;
l5=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+140U);
l6=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+136U);
if(si0){
goto L54;
}
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
goto L55;
}
si0=l6;
f7690(i,si0);
goto L55;
L56:;
si0=1647592U;
si1=43U;
si2=1660104U;
f673(i,si0,si1,si2);
UNREACHABLE;
L55:;
si0=l4;
si1=128U;
si0+=si1;
si1=l2;
si2=l12;
si2=i32_load(&i->m0,(U64)si2+44U);
si3=2U;
f6610(i,si0,si1,si2,si3);
si0=1U;
l5=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+132U);
l11=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+128U);
si0=!(si0);
if(si0){
goto L63;
}
si0=l11;
l6=si0;
goto L54;
L63:;
si0=l12;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L64;
}
si0=0U;
l5=si0;
si0=l11;
l6=si0;
goto L54;
L64:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+88U);
si1=8U;
si0+=si1;
si0=f7000(i,si0);
l13=si0;
si0=l4;
si1=4U;
i32_store8(&i->m0,(U64)si0+168U,si1);
si0=l4;
si1=4U;
i32_store8(&i->m0,(U64)si0+172U,si1);
si0=l4;
si1=l2;
i32_store(&i->m0,(U64)si0+216U,si1);
si0=0U;
l10=si0;
si0=l13;
si0=i32_load(&i->m0,(U64)si0+28U);
l5=si0;
si1=l11;
si1=i32_load(&i->m0,(U64)si1+28U);
l8=si1;
si0=si0 == si1;
if(si0){
goto L69;
}
si0=l5;
si1=468U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=2U;
si0<<=(si1&31);
l6=si0;
si0=l5;
si1=460U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
L70:;
{
si0=l6;
si0=!(si0);
if(si0){
goto L69;
}
si0=l6;
si1=-4U;
si0+=si1;
l6=si0;
si0=l5;
si0=i32_load(&i->m0,(U64)si0);
l14=si0;
si0=l5;
si1=4U;
si0+=si1;
l5=si0;
si0=l14;
si1=l8;
si0=si0 != si1;
if(si0){
goto L70;
}
}
si0=l4;
si1=l11;
i32_store(&i->m0,(U64)si0+200U,si1);
si0=l4;
si1=l13;
i32_store(&i->m0,(U64)si0+196U,si1);
si0=l4;
si1=l4;
si2=172U;
si1+=si2;
i32_store(&i->m0,(U64)si0+204U,si1);
si0=l4;
si1=l4;
si2=216U;
si1+=si2;
i32_store(&i->m0,(U64)si0+192U,si1);
si0=l4;
si1=224U;
si0+=si1;
si1=l2;
si2=1659268U;
si3=13U;
si4=l4;
si5=192U;
si4+=si5;
f7605(i,si0,si1,si2,si3,si4);
si0=l4;
si0=i32_load8_u(&i->m0,(U64)si0+224U);
l5=si0;
si1=3U;
si0=si0 == si1;
if(si0){
goto L67;
}
si0=1U;
l10=si0;
si0=l5;
si1=2U;
si0=si0 != si1;
if(si0){
goto L68;
}
L69:;
si0=l4;
si1=l13;
i32_store(&i->m0,(U64)si0+200U,si1);
si0=l4;
si1=l11;
i32_store(&i->m0,(U64)si0+196U,si1);
si0=l4;
si1=l4;
si2=168U;
si1+=si2;
i32_store(&i->m0,(U64)si0+204U,si1);
si0=l4;
si1=l4;
si2=216U;
si1+=si2;
i32_store(&i->m0,(U64)si0+192U,si1);
si0=l4;
si1=224U;
si0+=si1;
si1=l2;
si2=1659268U;
si3=13U;
si4=l4;
si5=192U;
si4+=si5;
f7605(i,si0,si1,si2,si3,si4);
si0=l4;
si0=i32_load8_u(&i->m0,(U64)si0+224U);
l5=si0;
si1=3U;
si0=si0 == si1;
if(si0){
goto L67;
}
si0=l5;
si1=2U;
si0=si0 == si1;
if(si0){
goto L71;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0+228U);
l6=si0;
si0=l4;
si0=i32_load16_u(&i->m0,(U64)si0+225U);
si1=l4;
si1=i32_load8_u(&i->m0,(U64)si1+227U);
si2=16U;
si1<<=(si2&31);
si0|=si1;
si1=8U;
si0<<=(si1&31);
si1=l5;
si0|=si1;
l5=si0;
goto L65;
L71:;
si0=l10;
if(si0){
goto L66;
}
si0=l4;
si1=l11;
i32_store(&i->m0,(U64)si0+200U,si1);
si0=l4;
si1=l13;
i32_store(&i->m0,(U64)si0+196U,si1);
si0=l4;
si1=l4;
si2=172U;
si1+=si2;
i32_store(&i->m0,(U64)si0+204U,si1);
si0=l4;
si1=l4;
si2=216U;
si1+=si2;
i32_store(&i->m0,(U64)si0+192U,si1);
si0=l4;
si1=224U;
si0+=si1;
si1=l2;
si2=1659268U;
si3=13U;
si4=l4;
si5=192U;
si4+=si5;
f7605(i,si0,si1,si2,si3,si4);
si0=l4;
si0=i32_load8_u(&i->m0,(U64)si0+224U);
l5=si0;
si1=3U;
si0=si0 == si1;
if(si0){
goto L67;
}
si0=l5;
si1=2U;
si0=si0 == si1;
if(si0){
goto L66;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0+228U);
l6=si0;
si0=l4;
si0=i32_load16_u(&i->m0,(U64)si0+225U);
si1=l4;
si1=i32_load8_u(&i->m0,(U64)si1+227U);
si2=16U;
si1<<=(si2&31);
si0|=si1;
si1=8U;
si0<<=(si1&31);
si1=l5;
si0|=si1;
l5=si0;
goto L65;
L68:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+228U);
l6=si0;
si0=l4;
si0=i32_load16_u(&i->m0,(U64)si0+225U);
si1=l4;
si1=i32_load8_u(&i->m0,(U64)si1+227U);
si2=16U;
si1<<=(si2&31);
si0|=si1;
si1=8U;
si0<<=(si1&31);
si1=l5;
si0|=si1;
l5=si0;
goto L65;
L67:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+228U);
l6=si0;
si0=2U;
l5=si0;
goto L65;
L66:;
si0=1810698U;
l14=si0;
si0=l4;
si0=i32_load8_u(&i->m0,(U64)si0+168U);
l6=si0;
si1=-1U;
si0+=si1;
switch(si0){
case 0:
goto L74;
case 1:
goto L77;
case 2:
goto L73;
case 3:
goto L72;
case 4:
goto L76;
case 5:
goto L75;
default:
goto L74;
}
L77:;
si0=1U;
l6=si0;
si0=1810898U;
l14=si0;
goto L74;
L76:;
si0=2U;
l6=si0;
si0=1825884U;
l14=si0;
goto L74;
L75:;
si0=2U;
l6=si0;
si0=1825886U;
l14=si0;
L74:;
si0=2U;
l5=si0;
si0=l2;
si1=l11;
si2=l13;
si3=l14;
si4=l6;
si0=f7577(i,si0,si1,si2,si3,si4);
l6=si0;
goto L65;
L73:;
si0=1U;
si1=257U;
si2=l13;
si3=l11;
si2=si2 == si3;
si0=si2?si0:si1;
l5=si0;
goto L65;
L72:;
si0=257U;
si1=1U;
si2=l13;
si3=l11;
si2=si2 == si3;
si0=si2?si0:si1;
l5=si0;
L65:;
si0=l5;
si1=255U;
si0&=si1;
si1=2U;
si0=si0 == si1;
if(si0){
goto L81;
}
si0=l5;
si1=1U;
si0&=si1;
si0=!(si0);
if(si0){
goto L84;
}
si0=l5;
si1=8U;
si0>>=(si1&31);
si1=1U;
si0&=si1;
l5=si0;
goto L83;
L84:;
si0=l4;
si1=176U;
si0+=si1;
si1=l6;
si2=l2;
f7740(i,si0,si1,si2);
si0=l4;
si0=i32_load8_u(&i->m0,(U64)si0+176U);
if(si0){
goto L82;
}
si0=l4;
si0=i32_load8_u(&i->m0,(U64)si0+177U);
l5=si0;
L83:;
si0=l13;
si1=l13;
si1=i32_load(&i->m0,(U64)si1);
l6=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l6;
si1=1U;
si0=si0 != si1;
if(si0){
goto L85;
}
si0=l13;
f7690(i,si0);
L85:;
si0=l12;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si0=l5;
si1=255U;
si0&=si1;
if(si0){
goto L87;
}
si0=l4;
si1=112U;
si0+=si1;
si1=l2;
si2=l6;
si3=1661536U;
si4=8U;
si5=0U;
f7001(i,si0,si1,si2,si3,si4,si5);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+116U);
l2=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+112U);
l6=si0;
goto L86;
L87:;
si0=l4;
si1=120U;
si0+=si1;
si1=l2;
si2=l6;
si3=1661544U;
si4=5U;
f6614(i,si0,si1,si2,si3,si4);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+124U);
l2=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+120U);
l6=si0;
L86:;
si0=l6;
si0=!(si0);
if(si0){
goto L79;
}
si0=l2;
l6=si0;
goto L80;
L82:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+180U);
l6=si0;
L81:;
si0=l13;
si1=l13;
si1=i32_load(&i->m0,(U64)si1);
l2=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=1U;
si0=si0 != si1;
if(si0){
goto L80;
}
si0=l13;
f7690(i,si0);
L80:;
si0=l11;
si1=l11;
si1=i32_load(&i->m0,(U64)si1);
l12=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=1U;
l5=si0;
si0=l11;
l2=si0;
si0=l12;
si1=1U;
si0=si0 == si1;
if(si0){
goto L78;
}
goto L54;
L79:;
si0=l2;
si1=l2;
si1=i32_load(&i->m0,(U64)si1);
l12=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=0U;
l5=si0;
si0=l11;
l6=si0;
si0=l12;
si1=1U;
si0=si0 != si1;
if(si0){
goto L54;
}
L78:;
si0=l2;
f7690(i,si0);
L54:;
si0=l9;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l9;
si1=0U;
si2=l9;
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
goto L5;
}
si0=l9;
si1=4U;
si0+=si1;
si1=0U;
f1440(i,si0,si1);
goto L5;
L22:;
si0=1810698U;
l12=si0;
si0=l4;
si0=i32_load8_u(&i->m0,(U64)si0+168U);
l14=si0;
si1=-1U;
si0+=si1;
switch(si0){
case 0:
goto L90;
case 1:
goto L93;
case 2:
goto L89;
case 3:
goto L88;
case 4:
goto L92;
case 5:
goto L91;
default:
goto L90;
}
L93:;
si0=1U;
l14=si0;
si0=1810898U;
l12=si0;
goto L90;
L92:;
si0=2U;
l14=si0;
si0=1825884U;
l12=si0;
goto L90;
L91:;
si0=2U;
l14=si0;
si0=1825886U;
l12=si0;
L90:;
si0=2U;
l5=si0;
si0=l2;
si1=l7;
si2=l13;
si3=l12;
si4=l14;
si0=f7577(i,si0,si1,si2,si3,si4);
l12=si0;
goto L21;
L89:;
si0=1U;
si1=257U;
si2=l13;
si3=l7;
si2=si2 == si3;
si0=si2?si0:si1;
l5=si0;
goto L21;
L88:;
si0=257U;
si1=1U;
si2=l13;
si3=l7;
si2=si2 == si3;
si0=si2?si0:si1;
l5=si0;
L21:;
si0=l5;
si1=255U;
si0&=si1;
si1=2U;
si0=si0 == si1;
if(si0){
goto L95;
}
si0=l5;
si1=1U;
si0&=si1;
si0=!(si0);
if(si0){
goto L96;
}
si0=l5;
si1=256U;
si0&=si1;
si1=8U;
si0>>=(si1&31);
l5=si0;
goto L94;
L96:;
si0=l4;
si1=176U;
si0+=si1;
si1=l12;
si2=l2;
f7740(i,si0,si1,si2);
si0=l4;
si0=i32_load8_u(&i->m0,(U64)si0+176U);
if(si0){
goto L97;
}
si0=l4;
si0=i32_load8_u(&i->m0,(U64)si0+177U);
si1=0U;
si0=si0 != si1;
l5=si0;
goto L94;
L97:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+180U);
l12=si0;
L95:;
si0=l13;
si1=l13;
si1=i32_load(&i->m0,(U64)si1);
l2=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=1U;
si0=si0 != si1;
if(si0){
goto L98;
}
si0=l13;
f7690(i,si0);
L98:;
si0=l12;
l6=si0;
goto L18;
L94:;
si0=l13;
si1=l13;
si1=i32_load(&i->m0,(U64)si1);
l12=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l12;
si1=1U;
si0=si0 != si1;
if(si0){
goto L99;
}
si0=l13;
f7690(i,si0);
L99:;
si0=l5;
si0=!(si0);
if(si0){
goto L19;
}
si0=l4;
si1=96U;
si0+=si1;
si1=l2;
si2=l6;
si2=i32_load(&i->m0,(U64)si2+44U);
si3=1660616U;
si4=4U;
f6614(i,si0,si1,si2,si3,si4);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+100U);
l11=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+96U);
si0=!(si0);
if(si0){
goto L100;
}
si0=l11;
l6=si0;
goto L18;
L100:;
si0=1U;
l10=si0;
L20:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+88U);
l6=si0;
si1=1308U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si1=6U;
si0=si0 < si1;
if(si0){
goto L17;
}
si0=l6;
si1=1300U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=i32_load(&i->m0,(U64)si0+20U);
l13=si0;
si1=l13;
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
si0=l4;
si1=1U;
i32_store8(&i->m0,(U64)si0+168U,si1);
si0=l4;
si1=2U;
i32_store8(&i->m0,(U64)si0+172U,si1);
si0=l4;
si1=l2;
i32_store(&i->m0,(U64)si0+216U,si1);
si0=0U;
l15=si0;
si0=l13;
si0=i32_load(&i->m0,(U64)si0+28U);
l5=si0;
si1=l11;
si1=i32_load(&i->m0,(U64)si1+28U);
l14=si1;
si0=si0 == si1;
if(si0){
goto L102;
}
si0=l5;
si1=468U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=2U;
si0<<=(si1&31);
l6=si0;
si0=l5;
si1=460U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
L103:;
{
si0=l6;
si0=!(si0);
if(si0){
goto L102;
}
si0=l6;
si1=-4U;
si0+=si1;
l6=si0;
si0=l5;
si0=i32_load(&i->m0,(U64)si0);
l12=si0;
si0=l5;
si1=4U;
si0+=si1;
l5=si0;
si0=l12;
si1=l14;
si0=si0 != si1;
if(si0){
goto L103;
}
}
si0=l4;
si1=l11;
i32_store(&i->m0,(U64)si0+200U,si1);
si0=l4;
si1=l13;
i32_store(&i->m0,(U64)si0+196U,si1);
si0=l4;
si1=l4;
si2=172U;
si1+=si2;
i32_store(&i->m0,(U64)si0+204U,si1);
si0=l4;
si1=l4;
si2=216U;
si1+=si2;
i32_store(&i->m0,(U64)si0+192U,si1);
si0=l4;
si1=224U;
si0+=si1;
si1=l2;
si2=1659268U;
si3=13U;
si4=l4;
si5=192U;
si4+=si5;
f7605(i,si0,si1,si2,si3,si4);
si0=l4;
si0=i32_load8_u(&i->m0,(U64)si0+224U);
l5=si0;
si1=3U;
si0=si0 == si1;
if(si0){
goto L16;
}
si0=1U;
l15=si0;
si0=l5;
si1=2U;
si0=si0 != si1;
if(si0){
goto L101;
}
L102:;
si0=l4;
si1=l13;
i32_store(&i->m0,(U64)si0+200U,si1);
si0=l4;
si1=l11;
i32_store(&i->m0,(U64)si0+196U,si1);
si0=l4;
si1=l4;
si2=168U;
si1+=si2;
i32_store(&i->m0,(U64)si0+204U,si1);
si0=l4;
si1=l4;
si2=216U;
si1+=si2;
i32_store(&i->m0,(U64)si0+192U,si1);
si0=l4;
si1=224U;
si0+=si1;
si1=l2;
si2=1659268U;
si3=13U;
si4=l4;
si5=192U;
si4+=si5;
f7605(i,si0,si1,si2,si3,si4);
si0=l4;
si0=i32_load8_u(&i->m0,(U64)si0+224U);
l5=si0;
si1=3U;
si0=si0 == si1;
if(si0){
goto L16;
}
si0=l5;
si1=2U;
si0=si0 == si1;
if(si0){
goto L104;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0+228U);
l6=si0;
si0=l4;
si0=i32_load16_u(&i->m0,(U64)si0+225U);
si1=l4;
si1=i32_load8_u(&i->m0,(U64)si1+227U);
si2=16U;
si1<<=(si2&31);
si0|=si1;
si1=8U;
si0<<=(si1&31);
si1=l5;
si0|=si1;
l5=si0;
goto L13;
L104:;
si0=l15;
if(si0){
goto L14;
}
si0=l4;
si1=l11;
i32_store(&i->m0,(U64)si0+200U,si1);
si0=l4;
si1=l13;
i32_store(&i->m0,(U64)si0+196U,si1);
si0=l4;
si1=l4;
si2=172U;
si1+=si2;
i32_store(&i->m0,(U64)si0+204U,si1);
si0=l4;
si1=l4;
si2=216U;
si1+=si2;
i32_store(&i->m0,(U64)si0+192U,si1);
si0=l4;
si1=224U;
si0+=si1;
si1=l2;
si2=1659268U;
si3=13U;
si4=l4;
si5=192U;
si4+=si5;
f7605(i,si0,si1,si2,si3,si4);
si0=l4;
si0=i32_load8_u(&i->m0,(U64)si0+224U);
l5=si0;
si1=3U;
si0=si0 == si1;
if(si0){
goto L16;
}
si0=l5;
si1=2U;
si0=si0 == si1;
if(si0){
goto L14;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0+228U);
l6=si0;
si0=l4;
si0=i32_load16_u(&i->m0,(U64)si0+225U);
si1=l4;
si1=i32_load8_u(&i->m0,(U64)si1+227U);
si2=16U;
si1<<=(si2&31);
si0|=si1;
si1=8U;
si0<<=(si1&31);
si1=l5;
si0|=si1;
l5=si0;
goto L13;
L101:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+228U);
l6=si0;
si0=l4;
si0=i32_load16_u(&i->m0,(U64)si0+225U);
si1=l4;
si1=i32_load8_u(&i->m0,(U64)si1+227U);
si2=16U;
si1<<=(si2&31);
si0|=si1;
si1=8U;
si0<<=(si1&31);
si1=l5;
si0|=si1;
l5=si0;
goto L13;
L19:;
si0=l4;
si1=104U;
si0+=si1;
si1=35U;
si2=0U;
f7251(i,si0,si1,si2);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+108U);
l5=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+104U);
l6=si0;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+1663867U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l6;
si1=31U;
si0+=si1;
si1=0U;
si1=i32_load(&i->m0,(U64)si1+1663898U);
i32_store(&i->m0,(U64)si0,si1);
si0=l6;
si1=24U;
si0+=si1;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+1663891U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l6;
si1=16U;
si0+=si1;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+1663883U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l6;
si1=8U;
si0+=si1;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+1663875U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=35U;
i32_store(&i->m0,(U64)si0+200U,si1);
si0=l4;
si1=l5;
i32_store(&i->m0,(U64)si0+196U,si1);
si0=l4;
si1=l6;
i32_store(&i->m0,(U64)si0+192U,si1);
si0=0U;
si0=i32_load(&i->m0,(U64)si0+2969404U);
si1=2U;
si0=si0 != si1;
if(si0){
goto L15;
}
si0=0U;
si0=i32_load(&i->m0,(U64)si0+2969408U);
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
goto L12;
}
si0=l2;
si1=l6;
si2=l4;
si3=192U;
si2+=si3;
si0=f7173(i,si0,si1,si2);
l6=si0;
L18:;
si0=l9;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=1U;
l5=si0;
si0=l9;
si1=0U;
si2=l9;
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
goto L5;
}
si0=l9;
si1=4U;
si0+=si1;
si1=0U;
f1440(i,si0,si1);
goto L5;
L17:;
si0=5U;
si1=l5;
si2=1659344U;
f663(i,si0,si1,si2);
UNREACHABLE;
L16:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+228U);
l6=si0;
si0=2U;
l5=si0;
goto L13;
L15:;
si0=1647592U;
si1=43U;
si2=1660104U;
f673(i,si0,si1,si2);
UNREACHABLE;
L14:;
si0=1810698U;
l6=si0;
si0=l4;
si0=i32_load8_u(&i->m0,(U64)si0+168U);
l12=si0;
si1=-1U;
si0+=si1;
switch(si0){
case 0:
goto L107;
case 1:
goto L110;
case 2:
goto L106;
case 3:
goto L105;
case 4:
goto L109;
case 5:
goto L108;
default:
goto L107;
}
L110:;
si0=1U;
l12=si0;
si0=1810898U;
l6=si0;
goto L107;
L109:;
si0=2U;
l12=si0;
si0=1825884U;
l6=si0;
goto L107;
L108:;
si0=2U;
l12=si0;
si0=1825886U;
l6=si0;
L107:;
si0=2U;
l5=si0;
si0=l2;
si1=l11;
si2=l13;
si3=l6;
si4=l12;
si0=f7577(i,si0,si1,si2,si3,si4);
l6=si0;
goto L13;
L106:;
si0=1U;
si1=257U;
si2=l13;
si3=l11;
si2=si2 == si3;
si0=si2?si0:si1;
l5=si0;
goto L13;
L105:;
si0=257U;
si1=1U;
si2=l13;
si3=l11;
si2=si2 == si3;
si0=si2?si0:si1;
l5=si0;
L13:;
si0=l5;
si1=255U;
si0&=si1;
si1=2U;
si0=si0 == si1;
if(si0){
goto L115;
}
si0=l5;
si1=1U;
si0&=si1;
si0=!(si0);
if(si0){
goto L116;
}
si0=l5;
si1=8U;
si0>>=(si1&31);
si1=1U;
si0&=si1;
l6=si0;
goto L114;
L116:;
si0=l4;
si1=176U;
si0+=si1;
si1=l6;
si2=l2;
f7740(i,si0,si1,si2);
si0=l4;
si0=i32_load8_u(&i->m0,(U64)si0+176U);
if(si0){
goto L117;
}
si0=l4;
si0=i32_load8_u(&i->m0,(U64)si0+177U);
l6=si0;
goto L114;
L117:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+180U);
l6=si0;
L115:;
si0=l13;
si1=l13;
si1=i32_load(&i->m0,(U64)si1);
l2=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=1U;
si0=si0 != si1;
if(si0){
goto L113;
}
si0=l13;
f7690(i,si0);
goto L113;
L114:;
si0=l13;
si1=l13;
si1=i32_load(&i->m0,(U64)si1);
l5=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=1U;
si0=si0 != si1;
if(si0){
goto L118;
}
si0=l13;
f7690(i,si0);
L118:;
si0=l6;
si1=255U;
si0&=si1;
if(si0){
goto L121;
}
si0=l9;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l9;
si1=0U;
si2=l9;
si2=i32_load8_u(&i->m0,(U64)si2+4U);
l6=si2;
si3=l6;
si4=1U;
si3=si3 == si4;
l6=si3;
si1=si3?si1:si2;
i32_store8(&i->m0,(U64)si0+4U,si1);
si0=l6;
if(si0){
goto L122;
}
si0=l9;
si1=4U;
si0+=si1;
si1=0U;
f1440(i,si0,si1);
L122:;
si0=l4;
si1=80U;
si0+=si1;
si1=l2;
si2=l3;
si3=1660445U;
si4=5U;
f6614(i,si0,si1,si2,si3,si4);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+84U);
l6=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+80U);
if(si0){
goto L120;
}
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
goto L123;
}
si0=l6;
f7690(i,si0);
L123:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+88U);
l14=si0;
si1=96U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l9=si0;
si1=l11;
si1=i32_load(&i->m0,(U64)si1+28U);
l5=si1;
si0=si0 == si1;
if(si0){
goto L127;
}
si0=l5;
si1=468U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=2U;
si0<<=(si1&31);
l6=si0;
si0=l5;
si1=460U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
L128:;
{
si0=l6;
si0=!(si0);
if(si0){
goto L126;
}
si0=l6;
si1=-4U;
si0+=si1;
l6=si0;
si0=l5;
si0=i32_load(&i->m0,(U64)si0);
l12=si0;
si0=l5;
si1=4U;
si0+=si1;
l5=si0;
si0=l12;
si1=l9;
si0=si0 != si1;
if(si0){
goto L128;
}
}
L127:;
si0=l11;
sj0=i64_load(&i->m0,(U64)si0+8U);
sj1=-8433930480299741807ULL;
sj0^=sj1;
si1=l11;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
sj2=1156462258252325731ULL;
sj1^=sj2;
sj0|=sj1;
si0=!(sj0);
if(si0){
goto L124;
}
si0=l2;
si1=1682360U;
si2=7U;
si3=l14;
si4=476U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si4=l9;
si5=l11;
si0=f7151(i,si0,si1,si2,si3,si4,si5);
l6=si0;
si0=l11;
si1=l11;
si1=i32_load(&i->m0,(U64)si1);
l2=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=1U;
si0=si0 == si1;
if(si0){
goto L125;
}
goto L112;
L126:;
si0=l2;
si1=1679036U;
si2=4U;
si3=l14;
si4=504U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si4=l9;
si5=l11;
si0=f7151(i,si0,si1,si2,si3,si4,si5);
l6=si0;
si0=l11;
si1=l11;
si1=i32_load(&i->m0,(U64)si1);
l2=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=1U;
si0=si0 != si1;
if(si0){
goto L112;
}
L125:;
si0=l11;
f7690(i,si0);
goto L112;
L124:;
si0=l4;
si1=192U;
si0+=si1;
si1=4U;
si0|=si1;
si1=l11;
si2=56U;
si1+=si2;
sj2=8ULL;
f10600(i,si0,si1,sj2);
si0=l4;
si1=232U;
si0+=si1;
si1=l4;
si2=204U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
l6=si1;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1+196U);
i64_store(&i->m0,(U64)si0+224U,sj1);
si0=l6;
si1=25U;
si0=si0 > si1;
if(si0){
goto L130;
}
si0=l4;
si1=224U;
si0+=si1;
si1=25U;
si2=0U;
f11182(i,si0,si1,si2);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+232U);
si1=25U;
si0=si0 != si1;
if(si0){
goto L131;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0+224U);
l6=si0;
if(si0){
goto L129;
}
L131:;
si0=1648112U;
si1=43U;
si2=l4;
si3=176U;
si2+=si3;
si3=1661504U;
si4=1661520U;
f712(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L130:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+228U);
si0=!(si0);
if(si0){
goto L132;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0+224U);
f15271(i,si0);
L132:;
si0=l4;
si1=8U;
si0+=si1;
si1=14U;
si2=0U;
f7251(i,si0,si1,si2);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+12U);
l5=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+8U);
l6=si0;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+1664093U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l6;
si1=6U;
si0+=si1;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+1664099U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=14U;
i32_store(&i->m0,(U64)si0+200U,si1);
si0=l4;
si1=l5;
i32_store(&i->m0,(U64)si0+196U,si1);
si0=l4;
si1=l6;
i32_store(&i->m0,(U64)si0+192U,si1);
si0=l2;
si1=l4;
si2=192U;
si1+=si2;
si0=f7580(i,si0,si1);
l6=si0;
goto L8;
L129:;
si0=l6;
si0=i32_load(&i->m0,(U64)si0+21U);
l16=si0;
si0=l6;
si0=i32_load8_u(&i->m0,(U64)si0+20U);
l17=si0;
si0=l6;
si0=i32_load(&i->m0,(U64)si0+16U);
l18=si0;
si0=l6;
si0=i32_load(&i->m0,(U64)si0+12U);
l19=si0;
si0=l6;
si0=i32_load(&i->m0,(U64)si0+8U);
l15=si0;
si0=l6;
sj0=i64_load32_u(&i->m0,(U64)si0+4U);
l20=sj0;
si0=l6;
sj0=i64_load32_u(&i->m0,(U64)si0);
l21=sj0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+228U);
si0=!(si0);
if(si0){
goto L133;
}
si0=l6;
f15271(i,si0);
L133:;
si0=l4;
si1=192U;
si0+=si1;
si1=l8;
si2=l2;
f6613(i,si0,si1,si2);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+196U);
l9=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+192U);
l5=si0;
if(si0){
goto L134;
}
si0=l9;
l6=si0;
goto L8;
L134:;
si0=l9;
si0=i32_load(&i->m0,(U64)si0+44U);
l14=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+88U);
l6=si0;
si1=1208U;
si0+=si1;
l22=si0;
si0=i32_load(&i->m0,(U64)si0);
l12=si0;
si1=8U;
si0&=si1;
if(si0){
goto L135;
}
si0=l12;
si1=16U;
si0+=si1;
l13=si0;
si1=l12;
si0=si0 < si1;
if(si0){
goto L135;
}
si0=l6;
si1=l13;
si2=l6;
si2=i32_load(&i->m0,(U64)si2+1208U);
l8=si2;
si3=l8;
si4=l12;
si3=si3 == si4;
si1=si3?si1:si2;
i32_store(&i->m0,(U64)si0+1208U,si1);
si0=l8;
si1=l12;
si0=si0 == si1;
if(si0){
goto L111;
}
L135:;
si0=l22;
si1=0U;
sj2=l20;
si3=1000000000U;
si0=f1432(i,si0,si1,sj2,si3);
goto L111;
L121:;
si0=l4;
si1=88U;
si0+=si1;
si1=l2;
si2=1807769U;
si3=35U;
si4=l11;
si5=l2;
f7340(i,si0,si1,si2,si3,si4,si5);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+92U);
l6=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+88U);
si0=!(si0);
if(si0){
goto L119;
}
goto L113;
L120:;
si0=l11;
si1=l11;
si1=i32_load(&i->m0,(U64)si1);
l2=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=1U;
l5=si0;
si0=l2;
si1=1U;
si0=si0 != si1;
if(si0){
goto L7;
}
si0=l11;
f7690(i,si0);
goto L7;
L119:;
si0=l4;
si1=204U;
si0+=si1;
sj1=1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=l6;
i32_store(&i->m0,(U64)si0+172U,si1);
si0=l4;
si1=2340U;
i32_store(&i->m0,(U64)si0+220U,si1);
si0=l4;
si1=1663960U;
i32_store(&i->m0,(U64)si0+192U,si1);
si0=l4;
si1=l4;
si2=172U;
si1+=si2;
i32_store(&i->m0,(U64)si0+168U,si1);
si0=l4;
si1=l4;
si2=168U;
si1+=si2;
i32_store(&i->m0,(U64)si0+216U,si1);
si0=l4;
si1=l4;
si2=216U;
si1+=si2;
i32_store(&i->m0,(U64)si0+200U,si1);
si0=l4;
si1=1U;
i32_store(&i->m0,(U64)si0+196U,si1);
si0=l4;
si1=224U;
si0+=si1;
si1=l4;
si2=192U;
si1+=si2;
f63(i,si0,si1);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+172U);
l6=si0;
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
goto L136;
}
si0=l6;
f7690(i,si0);
L136:;
si0=l4;
si1=176U;
si0+=si1;
si1=8U;
si0+=si1;
si1=l4;
si2=224U;
si1+=si2;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1+224U);
i64_store(&i->m0,(U64)si0+176U,sj1);
si0=l2;
si1=l4;
si2=176U;
si1+=si2;
si0=f7580(i,si0,si1);
l6=si0;
L113:;
si0=l11;
si1=l11;
si1=i32_load(&i->m0,(U64)si1);
l2=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=1U;
si0=si0 != si1;
if(si0){
goto L137;
}
si0=l11;
f7690(i,si0);
L137:;
si0=l9;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l9;
si1=0U;
si2=l9;
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
goto L112;
}
si0=l9;
si1=4U;
si0+=si1;
si1=0U;
f1440(i,si0,si1);
L112:;
si0=1U;
l5=si0;
si0=l10;
if(si0){
goto L5;
}
goto L4;
L111:;
si0=l6;
si1=1216U;
si0+=si1;
si1=1660564U;
si2=4U;
si0=f13453(i,si0,si1,si2);
l12=si0;
if(si0){
goto L139;
}
si0=0U;
l12=si0;
goto L138;
L139:;
si0=l12;
si0=i32_load(&i->m0,(U64)si0);
l12=si0;
L138:;
si0=l6;
si1=l6;
si1=i32_load(&i->m0,(U64)si1+1208U);
l8=si1;
si2=-16U;
si1+=si2;
i32_store(&i->m0,(U64)si0+1208U,si1);
si0=l8;
si1=-14U;
si0&=si1;
si1=18U;
si0=si0 != si1;
if(si0){
goto L140;
}
si0=l6;
si1=1208U;
si0+=si1;
f1433(i,si0);
L140:;
si0=l12;
l8=si0;
si0=l12;
if(si0){
goto L141;
}
si0=1660564U;
si1=4U;
si2=l2;
si2=i32_load(&i->m0,(U64)si2+88U);
si3=8U;
si2+=si3;
si0=f10959(i,si0,si1,si2);
l8=si0;
L141:;
si0=l14;
si1=l14;
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
sj0=l20;
sj1=32ULL;
sj0<<=(sj1&63);
sj1=l21;
sj0|=sj1;
l20=sj0;
si0=l4;
si1=192U;
si0+=si1;
si1=l14;
si2=l8;
si3=l2;
f11879(i,si0,si1,si2,si3);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+196U);
l6=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+192U);
if(si0){
goto L144;
}
si0=l4;
si1=l4;
si2=200U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0+228U,si1);
si0=l4;
si1=l6;
i32_store(&i->m0,(U64)si0+224U,si1);
si0=l4;
si1=72U;
si0+=si1;
si1=l4;
si2=224U;
si1+=si2;
sj2=l20;
si3=l2;
f11980(i,si0,si1,sj2,si3);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+76U);
l6=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+72U);
l14=si0;
si0=l12;
if(si0){
goto L142;
}
si0=l8;
si1=l8;
si1=i32_load(&i->m0,(U64)si1);
l12=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l12;
si1=1U;
si0=si0 != si1;
if(si0){
goto L142;
}
goto L143;
L144:;
si0=l12;
if(si0){
goto L9;
}
si0=l8;
si1=l8;
si1=i32_load(&i->m0,(U64)si1);
l12=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=1U;
l14=si0;
si0=l12;
si1=1U;
si0=si0 != si1;
if(si0){
goto L9;
}
L143:;
si0=l8;
f7690(i,si0);
L142:;
si0=l14;
if(si0){
goto L9;
}
si0=l6;
si1=l6;
si1=i32_load(&i->m0,(U64)si1);
l12=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l12;
si1=1U;
si0=si0 != si1;
if(si0){
goto L145;
}
si0=l6;
f7690(i,si0);
L145:;
si0=l9;
si0=i32_load(&i->m0,(U64)si0+40U);
l6=si0;
si0=!(si0);
if(si0){
goto L146;
}
si0=l6;
si1=l6;
si1=i32_load(&i->m0,(U64)si1);
l12=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l12;
si1=1U;
si0=si0 != si1;
if(si0){
goto L146;
}
si0=l6;
f7690(i,si0);
L146:;
si0=l9;
sj1=0ULL;
i64_store(&i->m0,(U64)si0+16U,sj1);
si0=l9;
si1=0U;
i32_store(&i->m0,(U64)si0+40U,si1);
si0=l9;
si1=12U;
si0+=si1;
l12=si0;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si0=!(si0);
if(si0){
goto L147;
}
si0=l6;
si1=l6;
si1=i32_load(&i->m0,(U64)si1);
l14=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l14;
si1=1U;
si0=si0 != si1;
if(si0){
goto L147;
}
si0=l6;
f7690(i,si0);
L147:;
si0=l12;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l9;
si0=i32_load(&i->m0,(U64)si0+32U);
l6=si0;
si0=!(si0);
if(si0){
goto L148;
}
sj0=l20;
si1=l15;
si2=l6;
si3=l2;
si0=f7002(i,sj0,si1,si2,si3);
l6=si0;
if(si0){
goto L9;
}
L148:;
si0=l18;
si0=!(si0);
if(si0){
goto L150;
}
si0=l9;
si0=i32_load(&i->m0,(U64)si0+32U);
if(si0){
goto L149;
}
si0=l4;
si1=32U;
si0+=si1;
si1=14U;
si2=0U;
f7251(i,si0,si1,si2);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+36U);
l12=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+32U);
l6=si0;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+1664093U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l6;
si1=6U;
si0+=si1;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+1664099U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=14U;
i32_store(&i->m0,(U64)si0+200U,si1);
si0=l4;
si1=l12;
i32_store(&i->m0,(U64)si0+196U,si1);
si0=l4;
si1=l6;
i32_store(&i->m0,(U64)si0+192U,si1);
si0=l2;
si1=l4;
si2=192U;
si1+=si2;
si0=f7580(i,si0,si1);
l6=si0;
goto L9;
L150:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+88U);
l8=si0;
si1=24U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si1=l6;
si1=i32_load(&i->m0,(U64)si1);
l14=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=0U;
l12=si0;
si0=l4;
si1=0U;
i32_store(&i->m0,(U64)si0+200U,si1);
si0=l4;
sj1=1ULL;
i64_store(&i->m0,(U64)si0+192U,sj1);
si0=l14;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 == si1;
if(si0){
goto L12;
}
si0=l6;
si1=77U;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=1U;
si0&=si1;
si0=!(si0);
if(si0){
goto L151;
}
si0=l8;
si1=8U;
si0+=si1;
si0=f10437(i,si0);
l12=si0;
L151:;
si0=l4;
si1=192U;
si0+=si1;
si1=l6;
si2=l12;
si0=f8110(i,si0,si1,si2);
l12=si0;
si0=l9;
si1=12U;
si0+=si1;
l14=si0;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si0=!(si0);
if(si0){
goto L152;
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
goto L152;
}
si0=l6;
f7690(i,si0);
L152:;
si0=l9;
si1=l15;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l14;
si1=l12;
i32_store(&i->m0,(U64)si0,si1);
goto L10;
L149:;
si0=l4;
si1=64U;
si0+=si1;
si1=l2;
si2=l9;
si2=i32_load(&i->m0,(U64)si2+44U);
si3=1661107U;
si4=4U;
si5=l19;
f7001(i,si0,si1,si2,si3,si4,si5);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+68U);
l12=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+64U);
si0=!(si0);
if(si0){
goto L153;
}
si0=l12;
l6=si0;
goto L9;
L153:;
si0=l12;
sj0=i64_load(&i->m0,(U64)si0+8U);
sj1=-2107831292826120692ULL;
sj0^=sj1;
si1=l12;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
sj2=3044701271088271634ULL;
sj1^=sj2;
sj0|=sj1;
si0=!(sj0);
if(si0){
goto L154;
}
si0=l4;
si1=224U;
si0+=si1;
si1=l12;
si1=i32_load(&i->m0,(U64)si1+28U);
si2=56U;
si1+=si2;
f9877(i,si0,si1);
si0=l4;
si1=204U;
si0+=si1;
sj1=1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=847U;
i32_store(&i->m0,(U64)si0+220U,si1);
si0=l4;
si1=2U;
i32_store(&i->m0,(U64)si0+196U,si1);
si0=l4;
si1=1664168U;
i32_store(&i->m0,(U64)si0+192U,si1);
si0=l4;
si1=l4;
si2=224U;
si1+=si2;
i32_store(&i->m0,(U64)si0+216U,si1);
si0=l4;
si1=l4;
si2=216U;
si1+=si2;
i32_store(&i->m0,(U64)si0+200U,si1);
si0=l4;
si1=176U;
si0+=si1;
si1=l4;
si2=192U;
si1+=si2;
f63(i,si0,si1);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+224U);
switch(si0){
case 0:
goto L155;
case 1:
goto L158;
case 2:
goto L157;
case 3:
goto L156;
default:
goto L159;
}
L159:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+228U);
l6=si0;
si1=l6;
si1=i32_load(&i->m0,(U64)si1);
l9=si1;
si2=-16U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l9;
si1=-14U;
si0&=si1;
si1=18U;
si0=si0 != si1;
if(si0){
goto L155;
}
si0=l6;
f1433(i,si0);
goto L155;
L158:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+228U);
l6=si0;
si1=0U;
si2=l6;
si2=i32_load8_u(&i->m0,(U64)si2);
l9=si2;
si3=l9;
si4=1U;
si3=si3 == si4;
l9=si3;
si1=si3?si1:si2;
i32_store8(&i->m0,(U64)si0,si1);
si0=l9;
if(si0){
goto L155;
}
si0=l6;
si1=0U;
f1440(i,si0,si1);
goto L155;
L157:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+228U);
l6=si0;
si1=0U;
si2=l6;
si2=i32_load8_u(&i->m0,(U64)si2);
l9=si2;
si3=l9;
si4=1U;
si3=si3 == si4;
l9=si3;
si1=si3?si1:si2;
i32_store8(&i->m0,(U64)si0,si1);
si0=l9;
if(si0){
goto L155;
}
si0=l6;
si1=0U;
f1440(i,si0,si1);
goto L155;
L156:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+228U);
l6=si0;
si1=l6;
si1=i32_load(&i->m0,(U64)si1);
l9=si1;
si2=-16U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l9;
si1=-14U;
si0&=si1;
si1=18U;
si0=si0 != si1;
if(si0){
goto L155;
}
si0=l6;
f1433(i,si0);
L155:;
si0=l4;
si1=192U;
si0+=si1;
si1=8U;
si0+=si1;
si1=l4;
si2=176U;
si1+=si2;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1+176U);
i64_store(&i->m0,(U64)si0+192U,sj1);
si0=l2;
si1=l4;
si2=192U;
si1+=si2;
si0=f7418(i,si0,si1);
l6=si0;
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
goto L9;
}
si0=l12;
f7690(i,si0);
goto L9;
L154:;
si0=l12;
si1=l12;
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
si0=l9;
si1=12U;
si0+=si1;
l14=si0;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si0=!(si0);
if(si0){
goto L160;
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
goto L160;
}
si0=l6;
f7690(i,si0);
L160:;
si0=l9;
si1=l15;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l14;
si1=l12;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=56U;
si0+=si1;
si1=l2;
si2=l9;
si2=i32_load(&i->m0,(U64)si2+32U);
si3=l12;
si4=l17;
si5=255U;
si4&=si5;
si5=0U;
si4=si4 != si5;
f7003(i,si0,si1,si2,si3,si4);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+60U);
l6=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+56U);
if(si0){
goto L9;
}
si0=l4;
si1=48U;
si0+=si1;
si1=l6;
si2=l2;
f7004(i,si0,si1,si2);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+52U);
l6=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+48U);
if(si0){
goto L9;
}
si0=l16;
if(si0){
goto L162;
}
si0=l9;
si0=i32_load(&i->m0,(U64)si0+40U);
l12=si0;
si0=!(si0);
if(si0){
goto L163;
}
si0=l12;
si1=l12;
si1=i32_load(&i->m0,(U64)si1);
l14=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l14;
si1=1U;
si0=si0 != si1;
if(si0){
goto L163;
}
si0=l12;
f7690(i,si0);
L163:;
si0=l9;
si1=l6;
i32_store(&i->m0,(U64)si0+40U,si1);
goto L161;
L162:;
si0=l16;
si1=l6;
si2=68U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
l12=si1;
si0=si0 < si1;
if(si0){
goto L164;
}
si0=l9;
si0=i32_load(&i->m0,(U64)si0+40U);
l14=si0;
si0=!(si0);
if(si0){
goto L165;
}
si0=l14;
si1=l14;
si1=i32_load(&i->m0,(U64)si1);
l8=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l8;
si1=1U;
si0=si0 != si1;
if(si0){
goto L165;
}
si0=l14;
f7690(i,si0);
L165:;
si0=l9;
sj1=0ULL;
i64_store(&i->m0,(U64)si0+16U,sj1);
si0=l9;
si1=l6;
i32_store(&i->m0,(U64)si0+40U,si1);
si0=l16;
si1=l12;
si0=si0 == si1;
if(si0){
goto L161;
}
goto L11;
L164:;
si0=l6;
si1=64U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=l16;
si0+=si1;
si0=i32_load8_s(&i->m0,(U64)si0);
l14=si0;
si0=l9;
si0=i32_load(&i->m0,(U64)si0+40U);
l12=si0;
si0=!(si0);
if(si0){
goto L166;
}
si0=l12;
si1=l12;
si1=i32_load(&i->m0,(U64)si1);
l8=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l8;
si1=1U;
si0=si0 != si1;
if(si0){
goto L166;
}
si0=l12;
f7690(i,si0);
L166:;
si0=l9;
sj1=0ULL;
i64_store(&i->m0,(U64)si0+16U,sj1);
si0=l9;
si1=l6;
i32_store(&i->m0,(U64)si0+40U,si1);
si0=l14;
si1=-64U;
si0=(U32)((I32)si0<(I32)si1);
if(si0){
goto L11;
}
L161:;
si0=l9;
si1=l18;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l9;
si1=l16;
i32_store(&i->m0,(U64)si0+16U,si1);
goto L10;
L12:;
f15042(i);
UNREACHABLE;
L11:;
si0=l4;
si1=40U;
si0+=si1;
si1=35U;
si2=0U;
f7251(i,si0,si1,si2);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+44U);
l12=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+40U);
l6=si0;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+1663902U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l6;
si1=31U;
si0+=si1;
si1=0U;
si1=i32_load(&i->m0,(U64)si1+1663933U);
i32_store(&i->m0,(U64)si0,si1);
si0=l6;
si1=24U;
si0+=si1;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+1663926U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l6;
si1=16U;
si0+=si1;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+1663918U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l6;
si1=8U;
si0+=si1;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+1663910U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=35U;
i32_store(&i->m0,(U64)si0+200U,si1);
si0=l4;
si1=l12;
i32_store(&i->m0,(U64)si0+196U,si1);
si0=l4;
si1=l6;
i32_store(&i->m0,(U64)si0+192U,si1);
si0=l2;
si1=l4;
si2=192U;
si1+=si2;
si0=f7578(i,si0,si1);
l6=si0;
goto L9;
L10:;
si0=l9;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si0=!(si0);
if(si0){
goto L167;
}
sj0=l20;
sj1=0ULL;
si0=sj0 != sj1;
if(si0){
goto L170;
}
si0=l15;
si0=!(si0);
if(si0){
goto L169;
}
L170:;
si0=l4;
si1=24U;
si0+=si1;
si1=l2;
si2=l6;
si3=1661536U;
si4=8U;
si5=0U;
f7001(i,si0,si1,si2,si3,si4,si5);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+28U);
l6=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+24U);
l2=si0;
goto L168;
L169:;
si0=l4;
si1=16U;
si0+=si1;
si1=l2;
si2=l6;
si3=1661544U;
si4=5U;
f6614(i,si0,si1,si2,si3,si4);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+20U);
l6=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+16U);
l2=si0;
L168:;
si0=l2;
if(si0){
goto L9;
}
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
goto L167;
}
si0=l6;
f7690(i,si0);
L167:;
si0=l5;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=0U;
si2=l5;
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
goto L171;
}
si0=l5;
si1=4U;
si0+=si1;
si1=0U;
f1440(i,si0,si1);
L171:;
si0=l10;
si0=!(si0);
if(si0){
goto L172;
}
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
goto L172;
}
si0=l7;
f7690(i,si0);
L172:;
si0=l3;
si1=l3;
si1=i32_load(&i->m0,(U64)si1);
l2=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=0U;
l5=si0;
si0=l11;
l6=si0;
si0=l2;
si1=1U;
si0=si0 != si1;
if(si0){
goto L1;
}
goto L3;
L9:;
si0=l5;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=0U;
si2=l5;
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
goto L8;
}
si0=l5;
si1=4U;
si0+=si1;
si1=0U;
f1440(i,si0,si1);
L8:;
si0=l11;
si1=l11;
si1=i32_load(&i->m0,(U64)si1);
l2=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=1U;
l5=si0;
si0=l2;
si1=1U;
si0=si0 != si1;
if(si0){
goto L7;
}
si0=l11;
f7690(i,si0);
si0=l10;
si0=!(si0);
if(si0){
goto L4;
}
goto L5;
L7:;
si0=l10;
si0=!(si0);
if(si0){
goto L4;
}
L5:;
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
goto L4;
}
si0=l7;
f7690(i,si0);
L4:;
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
L3:;
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
si1=240U;
si0+=si1;
i->g0=si0;
L0:;
}

void f6527(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U32 si0,si1,si2,si3,si4;
U64 sj1;
si0=i->g0;
si1=80U;
si0-=si1;
l4=si0;
i->g0=si0;
si0=l4;
si1=72U;
si0+=si1;
si1=l3;
si2=56U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=8U;
si0+=si1;
si1=56U;
si0+=si1;
si1=l3;
si2=48U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=8U;
si0+=si1;
si1=48U;
si0+=si1;
si1=l3;
si2=40U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=8U;
si0+=si1;
si1=40U;
si0+=si1;
si1=l3;
si2=32U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=8U;
si0+=si1;
si1=32U;
si0+=si1;
si1=l3;
si2=24U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=8U;
si0+=si1;
si1=24U;
si0+=si1;
si1=l3;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=8U;
si0+=si1;
si1=16U;
si0+=si1;
si1=l3;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=l2;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l4;
si1=l3;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+16U,sj1);
si0=l4;
si1=l4;
si2=l2;
si3=l4;
si4=8U;
si3+=si4;
si4=8U;
si3+=si4;
f6528(i,si0,si1,si2,si3);
si0=l0;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=80U;
si0+=si1;
i->g0=si0;
L0:;
}

void f6528(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U32 l5=0;
U32 l6=0;
F64 l7=0;
F64 l8=0;
U32 l9=0;
U32 l10=0;
U32 l11=0;
U32 l12=0;
F64 l13=0;
U64 l14=0;
U32 si0,si1,si2,si3;
U64 sj0,sj1,sj2;
F64 sd0,sd1,sd2;
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
f6093(i,si0,si1,si2);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+20U);
l5=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+16U);
l6=si0;
if(si0){
goto L3;
}
si0=1U;
l3=si0;
goto L2;
L3:;
si0=l6;
si1=64U;
si0+=si1;
sd0=f64_load(&i->m0,(U64)si0);
l7=sd0;
si0=l6;
si1=56U;
si0+=si1;
sd0=f64_load(&i->m0,(U64)si0);
l8=sd0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+88U);
l9=si0;
si1=108U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l10=si0;
si1=l5;
si1=i32_load(&i->m0,(U64)si1+28U);
l11=si1;
si0=si0 == si1;
if(si0){
goto L10;
}
si0=l11;
si1=468U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=2U;
si0<<=(si1&31);
l3=si0;
si0=l11;
si1=460U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l11=si0;
L11:;
{
si0=l3;
si0=!(si0);
if(si0){
goto L9;
}
si0=l3;
si1=-4U;
si0+=si1;
l3=si0;
si0=l11;
si0=i32_load(&i->m0,(U64)si0);
l12=si0;
si0=l11;
si1=4U;
si0+=si1;
l11=si0;
si0=l12;
si1=l10;
si0=si0 != si1;
if(si0){
goto L11;
}
}
L10:;
si0=l5;
sj0=i64_load(&i->m0,(U64)si0+8U);
sj1=-653005602437147053ULL;
sj0^=sj1;
si1=l5;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
sj2=-4170606783940748660ULL;
sj1^=sj2;
sj0|=sj1;
sj1=0ULL;
si0=sj0 != sj1;
if(si0){
goto L9;
}
si0=l5;
si1=64U;
si0+=si1;
sd0=f64_load(&i->m0,(U64)si0);
l13=sd0;
si0=l4;
si1=l5;
sj1=i64_load(&i->m0,(U64)si1+56U);
i64_store(&i->m0,(U64)si0+16U,sj1);
goto L8;
L9:;
si0=l9;
si1=80U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l10=si0;
si1=l5;
si1=i32_load(&i->m0,(U64)si1+28U);
l11=si1;
si0=si0 == si1;
if(si0){
goto L14;
}
si0=l11;
si1=468U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=2U;
si0<<=(si1&31);
l3=si0;
si0=l11;
si1=460U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l11=si0;
L15:;
{
si0=l3;
si0=!(si0);
if(si0){
goto L13;
}
si0=l3;
si1=-4U;
si0+=si1;
l3=si0;
si0=l11;
si0=i32_load(&i->m0,(U64)si0);
l12=si0;
si0=l11;
si1=4U;
si0+=si1;
l11=si0;
si0=l12;
si1=l10;
si0=si0 != si1;
if(si0){
goto L15;
}
}
L14:;
si0=l5;
sj0=i64_load(&i->m0,(U64)si0+8U);
sj1=-6979522882521804547ULL;
sj0^=sj1;
si1=l5;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
sj2=-3115833051707837487ULL;
sj1^=sj2;
sj0|=sj1;
sj1=0ULL;
si0=sj0 != sj1;
if(si0){
goto L13;
}
si0=l5;
sj0=i64_load(&i->m0,(U64)si0+56U);
l14=sj0;
goto L12;
L13:;
si0=l9;
si1=96U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l10=si0;
si1=l5;
si1=i32_load(&i->m0,(U64)si1+28U);
l11=si1;
si0=si0 == si1;
if(si0){
goto L16;
}
si0=l11;
si1=468U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=2U;
si0<<=(si1&31);
l3=si0;
si0=l11;
si1=460U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l11=si0;
L17:;
{
si0=l3;
si0=!(si0);
if(si0){
goto L6;
}
si0=l3;
si1=-4U;
si0+=si1;
l3=si0;
si0=l11;
si0=i32_load(&i->m0,(U64)si0);
l12=si0;
si0=l11;
si1=4U;
si0+=si1;
l11=si0;
si0=l12;
si1=l10;
si0=si0 != si1;
if(si0){
goto L17;
}
}
L16:;
si0=l5;
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
sj1=0ULL;
si0=sj0 != sj1;
if(si0){
goto L6;
}
si0=l4;
si1=16U;
si0+=si1;
si1=l5;
si2=56U;
si1+=si2;
si2=l2;
f13307(i,si0,si1,si2);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+16U);
if(si0){
goto L7;
}
si0=l4;
sj0=i64_load(&i->m0,(U64)si0+24U);
l14=sj0;
L12:;
si0=l4;
sj1=l14;
i64_store(&i->m0,(U64)si0+16U,sj1);
sd0=0;
l13=sd0;
L8:;
si0=l4;
sd1=l8;
si2=l4;
sd2=f64_load(&i->m0,(U64)si2+16U);
sd1-=sd2;
f64_store(&i->m0,(U64)si0+8U,sd1);
sd0=l7;
sd1=l13;
sd0-=sd1;
l7=sd0;
si0=1U;
l3=si0;
goto L5;
L7:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+20U);
l3=si0;
si0=l5;
si1=l5;
si1=i32_load(&i->m0,(U64)si1);
l11=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=l3;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=1U;
l3=si0;
si0=l11;
si1=1U;
si0=si0 != si1;
if(si0){
goto L18;
}
si0=l5;
f7690(i,si0);
L18:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+8U);
l5=si0;
goto L4;
L6:;
si0=0U;
l3=si0;
L5:;
si0=l5;
si1=l5;
si1=i32_load(&i->m0,(U64)si1);
l11=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l11;
si1=1U;
si0=si0 != si1;
if(si0){
goto L19;
}
si0=l5;
f7690(i,si0);
L19:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+88U);
l11=si0;
si0=l3;
si0=!(si0);
if(si0){
goto L20;
}
si0=l4;
sd0=f64_load(&i->m0,(U64)si0+8U);
l8=sd0;
si0=l11;
si1=108U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l11=si0;
si1=l11;
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
si0=0U;
l3=si0;
sd0=l8;
sd1=l7;
si2=l11;
si3=0U;
si0=f8099(i,sd0,sd1,si2,si3);
l5=si0;
goto L4;
L20:;
si0=l11;
si1=1296U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si1=l5;
si1=i32_load(&i->m0,(U64)si1);
l11=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=0U;
l3=si0;
si0=l11;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 == si1;
if(si0){
goto L1;
}
L4:;
si0=l6;
si1=l6;
si1=i32_load(&i->m0,(U64)si1);
l11=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l11;
si1=1U;
si0=si0 != si1;
if(si0){
goto L2;
}
si0=l6;
f7690(i,si0);
L2:;
si0=l0;
si1=l5;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l3;
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

void f6529(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 si0,si1,si2;
U64 sj1;
si0=i->g0;
si1=80U;
si0-=si1;
l4=si0;
i->g0=si0;
si0=l4;
si1=72U;
si0+=si1;
si1=l3;
si2=56U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=8U;
si0+=si1;
si1=56U;
si0+=si1;
si1=l3;
si2=48U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=8U;
si0+=si1;
si1=48U;
si0+=si1;
si1=l3;
si2=40U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=8U;
si0+=si1;
si1=40U;
si0+=si1;
si1=l3;
si2=32U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=8U;
si0+=si1;
si1=32U;
si0+=si1;
si1=l3;
si2=24U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=8U;
si0+=si1;
si1=24U;
si0+=si1;
si1=l3;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=8U;
si0+=si1;
si1=16U;
si0+=si1;
si1=l3;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=l2;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l4;
si1=l3;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+16U,sj1);
si0=l4;
si1=l4;
si2=8U;
si1+=si2;
si2=8U;
si1+=si2;
si2=l2;
f5967(i,si0,si1,si2);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+4U);
l3=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
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
si1=80U;
si0+=si1;
i->g0=si0;
goto L0;
L1:;
f15042(i);
UNREACHABLE;
L0:;
}


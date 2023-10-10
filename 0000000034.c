#include "w2c2_base.h"

#include "rustpython.h"

U32 f3430(rustpythonInstance*i,U32 l0) {
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
si0=1U;
si1=l0;
si2=4U;
si1+=si2;
l2=si1;
si2=2U;
f3481(i,si0,si1,si2);
si0=l0;
si0=i32_load(&i->m0,(U64)si0+12U);
l3=si0;
si1=l0;
si2=16U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
si0=si0 != si1;
if(si0){
goto L2;
}
si0=1114112U;
l4=si0;
goto L1;
L2:;
si0=l0;
si1=l3;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l3;
si0=i32_load8_u(&i->m0,(U64)si0);
l4=si0;
si0=(U32)(U32)(I8)(U8)(si0);
si1=-1U;
si0=(U32)((I32)si0>(I32)si1);
if(si0){
goto L1;
}
si0=l0;
si1=l3;
si2=2U;
si1+=si2;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l3;
si0=i32_load8_u(&i->m0,(U64)si0+1U);
si1=63U;
si0&=si1;
l5=si0;
si0=l4;
si1=31U;
si0&=si1;
l6=si0;
si0=l4;
si1=223U;
si0=si0 > si1;
if(si0){
goto L3;
}
si0=l6;
si1=6U;
si0<<=(si1&31);
si1=l5;
si0|=si1;
l4=si0;
goto L1;
L3:;
si0=l0;
si1=l3;
si2=3U;
si1+=si2;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l5;
si1=6U;
si0<<=(si1&31);
si1=l3;
si1=i32_load8_u(&i->m0,(U64)si1+2U);
si2=63U;
si1&=si2;
si0|=si1;
l5=si0;
si0=l4;
si1=240U;
si0=si0 >= si1;
if(si0){
goto L4;
}
si0=l5;
si1=l6;
si2=12U;
si1<<=(si2&31);
si0|=si1;
l4=si0;
goto L1;
L4:;
si0=l0;
si1=l3;
si2=4U;
si1+=si2;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l5;
si1=6U;
si0<<=(si1&31);
si1=l3;
si1=i32_load8_u(&i->m0,(U64)si1+3U);
si2=63U;
si1&=si2;
si0|=si1;
si1=l6;
si2=18U;
si1<<=(si2&31);
si2=1835008U;
si1&=si2;
si0|=si1;
l4=si0;
L1:;
si0=l0;
si1=l4;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l1;
si1=13U;
si0=si0 == si1;
if(si0){
goto L9;
}
si0=l1;
si1=1114112U;
si0=si0 == si1;
if(si0){
goto L5;
}
si0=1U;
l3=si0;
si0=l1;
si1=128U;
si0=si0 >= si1;
if(si0){
goto L8;
}
goto L6;
L9:;
si0=10U;
l1=si0;
si0=1U;
l3=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
si1=10U;
si0=si0 != si1;
if(si0){
goto L6;
}
si0=1U;
l3=si0;
si0=l0;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+48U);
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0+48U,si1);
si0=1U;
si1=l2;
si2=2U;
f3481(i,si0,si1,si2);
si0=l0;
si0=i32_load(&i->m0,(U64)si0+12U);
l4=si0;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+16U);
si0=si0 != si1;
if(si0){
goto L7;
}
si0=l0;
si1=1114112U;
i32_store(&i->m0,(U64)si0+8U,si1);
goto L6;
L8:;
si0=2U;
l3=si0;
si0=l1;
si1=2048U;
si0=si0 < si1;
if(si0){
goto L6;
}
si0=3U;
si1=4U;
si2=l1;
si3=65536U;
si2=si2 < si3;
si0=si2?si0:si1;
l3=si0;
goto L6;
L7:;
si0=l0;
si1=l4;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l4;
si0=i32_load8_u(&i->m0,(U64)si0);
l2=si0;
si0=(U32)(U32)(I8)(U8)(si0);
si1=-1U;
si0=(U32)((I32)si0>(I32)si1);
if(si0){
goto L10;
}
si0=l0;
si1=l4;
si2=2U;
si1+=si2;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l4;
si0=i32_load8_u(&i->m0,(U64)si0+1U);
si1=63U;
si0&=si1;
l5=si0;
si0=l2;
si1=31U;
si0&=si1;
l6=si0;
si0=l2;
si1=223U;
si0=si0 > si1;
if(si0){
goto L11;
}
si0=l0;
si1=l6;
si2=6U;
si1<<=(si2&31);
si2=l5;
si1|=si2;
i32_store(&i->m0,(U64)si0+8U,si1);
goto L6;
L11:;
si0=l0;
si1=l4;
si2=3U;
si1+=si2;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l5;
si1=6U;
si0<<=(si1&31);
si1=l4;
si1=i32_load8_u(&i->m0,(U64)si1+2U);
si2=63U;
si1&=si2;
si0|=si1;
l5=si0;
si0=l2;
si1=240U;
si0=si0 >= si1;
if(si0){
goto L12;
}
si0=l0;
si1=l5;
si2=l6;
si3=12U;
si2<<=(si3&31);
si1|=si2;
i32_store(&i->m0,(U64)si0+8U,si1);
goto L6;
L12:;
si0=l0;
si1=l4;
si2=4U;
si1+=si2;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l5;
si1=6U;
si0<<=(si1&31);
si1=l4;
si1=i32_load8_u(&i->m0,(U64)si1+3U);
si2=63U;
si1&=si2;
si0|=si1;
si1=l6;
si2=18U;
si1<<=(si2&31);
si2=1835008U;
si1&=si2;
si0|=si1;
l2=si0;
L10:;
si0=l0;
si1=l2;
i32_store(&i->m0,(U64)si0+8U,si1);
L6:;
si0=l0;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+48U);
si2=l3;
si1+=si2;
i32_store(&i->m0,(U64)si0+48U,si1);
L5:;
si0=l1;
L0:;
return si0;
}

void f3431(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 l8=0;
U32 l9=0;
U64 l10=0;
U32 l11=0;
U32 si0,si1,si2,si3,si4;
U64 sj0,sj1;
si0=i->g0;
si1=80U;
si0-=si1;
l4=si0;
i->g0=si0;
si0=l4;
si1=l1;
si2=l3;
f3432(i,si0,si1,si2);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+48U);
l5=si0;
si0=1U;
l6=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+8U);
l7=si0;
if(si0){
goto L2;
}
si0=0U;
l8=si0;
si0=l1;
l9=si0;
goto L1;
L2:;
si0=l1;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=45U;
si0=si0 != si1;
if(si0){
goto L3;
}
si0=l1;
si1=1U;
si0+=si1;
l9=si0;
si0=0U;
l6=si0;
si0=0U;
l8=si0;
si0=l7;
si1=2U;
si0=si0 < si1;
if(si0){
goto L1;
}
si0=l9;
si0=i32_load8_s(&i->m0,(U64)si0);
l8=si0;
si1=-65U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L4;
}
si0=l8;
si1=43U;
si0=si0 != si1;
if(si0){
goto L5;
}
si0=0U;
l6=si0;
goto L3;
L5:;
si0=l7;
si1=-1U;
si0+=si1;
l8=si0;
goto L1;
L4:;
si0=l1;
si1=l7;
si2=1U;
si3=l7;
si4=1533956U;
f737(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L3:;
si0=l7;
l8=si0;
si0=l1;
l9=si0;
L1:;
si0=l4;
si1=48U;
si0+=si1;
si1=l9;
si2=l8;
si3=l3;
f972(i,si0,si1,si2,si3);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+48U);
l3=si0;
si1=2U;
si0=si0 == si1;
if(si0){
goto L9;
}
si0=l4;
sj0=i64_load(&i->m0,(U64)si0+56U);
l10=sj0;
si0=1U;
l9=si0;
si0=l6;
if(si0){
goto L10;
}
si0=l3;
si0=!(si0);
sj1=l10;
si1=!(sj1);
si0&=si1;
l9=si0;
L10:;
si0=l4;
si0=i32_load8_u(&i->m0,(U64)si0+55U);
l6=si0;
si0=l4;
si0=i32_load16_u(&i->m0,(U64)si0+53U);
l7=si0;
si0=l4;
si0=i32_load8_u(&i->m0,(U64)si0+52U);
l11=si0;
si0=l4;
si1=32U;
si0+=si1;
si1=8U;
si0+=si1;
l8=si0;
si1=l9;
i32_store8(&i->m0,(U64)si0,si1);
si0=l4;
si1=16U;
si0+=si1;
si1=8U;
si0+=si1;
si1=l8;
si1=i32_load(&i->m0,(U64)si1);
l9=si1;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
sj1=l10;
i64_store(&i->m0,(U64)si0+16U,sj1);
si0=l4;
si1=48U;
si0+=si1;
si1=8U;
si0+=si1;
l8=si0;
si1=l9;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
sj1=l10;
i64_store(&i->m0,(U64)si0+48U,sj1);
si0=l5;
si1=l2;
si0=si0 < si1;
if(si0){
goto L6;
}
si0=l0;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1+48U);
i64_store(&i->m0,(U64)si0+8U,sj1);
si0=l0;
si1=16U;
si0+=si1;
si1=l8;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l5;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l0;
si1=l2;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l0;
si1=l7;
si2=l6;
si3=16U;
si2<<=(si3&31);
si1|=si2;
si2=8U;
si1<<=(si2&31);
si2=l11;
si1|=si2;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l3;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+4U);
if(si0){
goto L8;
}
goto L7;
L9:;
si0=l4;
si1=l4;
si1=i32_load8_u(&i->m0,(U64)si1+52U);
i32_store8(&i->m0,(U64)si0+47U,si1);
si0=l4;
si1=60U;
si0+=si1;
sj1=1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=1U;
i32_store(&i->m0,(U64)si0+52U,si1);
si0=l4;
si1=1535816U;
i32_store(&i->m0,(U64)si0+48U,si1);
si0=l4;
si1=737U;
i32_store(&i->m0,(U64)si0+76U,si1);
si0=l4;
si1=l4;
si2=72U;
si1+=si2;
i32_store(&i->m0,(U64)si0+56U,si1);
si0=l4;
si1=l4;
si2=47U;
si1+=si2;
i32_store(&i->m0,(U64)si0+72U,si1);
si0=l4;
si1=32U;
si0+=si1;
si1=l4;
si2=48U;
si1+=si2;
f63(i,si0,si1);
si0=l4;
si1=16U;
si0+=si1;
si1=8U;
si0+=si1;
si1=l4;
si2=32U;
si1+=si2;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
l3=si1;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1+32U);
l10=sj1;
i64_store(&i->m0,(U64)si0+16U,sj1);
si0=l0;
si1=16U;
si0+=si1;
si1=l3;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=8U;
si0+=si1;
sj1=l10;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=20U;
si0+=si1;
si1=l2;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
sj1=64424509538ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+4U);
si0=!(si0);
if(si0){
goto L7;
}
L8:;
si0=l1;
f15271(i,si0);
L7:;
si0=l4;
si1=80U;
si0+=si1;
i->g0=si0;
goto L0;
L6:;
si0=1535600U;
si1=38U;
si2=1535740U;
f673(i,si0,si1,si2);
UNREACHABLE;
L0:;
}

void f3432(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 si0,si1,si2;
U64 sj1;
si0=i->g0;
si1=48U;
si0-=si1;
l3=si0;
i->g0=si0;
si0=l3;
si1=0U;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l3;
sj1=1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=31U;
si0<<=(si1&31);
si1=l2;
si2=-2U;
si1+=si2;
si2=1U;
si1>>=(si2&31);
si0|=si1;
l4=si0;
si1=7U;
si0=si0 > si1;
if(si0){
goto L1;
}
si0=1U;
si1=l4;
si0<<=(si1&31);
si1=153U;
si0&=si1;
si0=!(si0);
if(si0){
goto L1;
}
L2:;
{
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si0=l4;
switch(si0){
case 0:
goto L7;
case 1:
goto L9;
case 2:
goto L9;
case 3:
goto L10;
case 4:
goto L8;
default:
goto L9;
}
L10:;
si0=l5;
si1=2097144U;
si0&=si1;
si1=48U;
si0=si0 == si1;
if(si0){
goto L3;
}
goto L6;
L9:;
si0=l5;
si1=1114112U;
si0=si0 == si1;
if(si0){
goto L4;
}
si0=l5;
si1=-48U;
si0+=si1;
si1=10U;
si0=si0 < si1;
if(si0){
goto L3;
}
si0=l5;
si1=-65U;
si0+=si1;
switch(si0){
case 0:
goto L3;
case 1:
goto L3;
case 2:
goto L3;
case 3:
goto L3;
case 4:
goto L3;
case 5:
goto L3;
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
goto L4;
case 13:
goto L4;
case 14:
goto L4;
case 15:
goto L4;
case 16:
goto L4;
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
goto L5;
case 31:
goto L4;
case 32:
goto L3;
case 33:
goto L3;
case 34:
goto L3;
case 35:
goto L3;
case 36:
goto L3;
case 37:
goto L3;
default:
goto L4;
}
L8:;
si0=l5;
si1=-48U;
si0+=si1;
si1=9U;
si0=si0 > si1;
if(si0){
goto L6;
}
goto L3;
L7:;
si0=l5;
si1=2097150U;
si0&=si1;
si1=48U;
si0=si0 == si1;
if(si0){
goto L3;
}
L6:;
si0=l5;
si1=95U;
si0=si0 != si1;
if(si0){
goto L4;
}
L5:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
l5=si0;
si0=l4;
switch(si0){
case 0:
goto L12;
case 1:
goto L16;
case 2:
goto L16;
case 3:
goto L15;
case 4:
goto L13;
case 5:
goto L16;
case 6:
goto L16;
case 7:
goto L14;
default:
goto L16;
}
L16:;
si0=l3;
si1=l2;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l3;
si1=28U;
si0+=si1;
sj1=1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=1U;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l3;
si1=1536088U;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l3;
si1=3U;
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
si1=16U;
si0+=si1;
si1=1536096U;
f683(i,si0,si1);
UNREACHABLE;
L15:;
si0=l5;
si1=2097144U;
si0&=si1;
si1=48U;
si0=si0 != si1;
if(si0){
goto L4;
}
goto L11;
L14:;
si0=l5;
si1=1114112U;
si0=si0 == si1;
if(si0){
goto L4;
}
si0=l5;
si1=-48U;
si0+=si1;
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
goto L4;
case 13:
goto L4;
case 14:
goto L4;
case 15:
goto L4;
case 16:
goto L4;
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
goto L4;
}
L13:;
si0=l5;
si1=-48U;
si0+=si1;
si1=10U;
si0=si0 < si1;
if(si0){
goto L11;
}
goto L4;
L12:;
si0=l5;
si1=2097150U;
si0&=si1;
si1=48U;
si0=si0 != si1;
if(si0){
goto L4;
}
L11:;
si0=l1;
si0=f3430(i,si0);
goto L2;
L4:;
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
si0=l3;
si1=48U;
si0+=si1;
i->g0=si0;
goto L0;
L3:;
si0=l1;
si0=f3430(i,si0);
l5=si0;
si1=1114112U;
si0=si0 == si1;
if(si0){
goto L19;
}
si0=l5;
si1=128U;
si0=si0 < si1;
if(si0){
goto L20;
}
si0=l3;
si1=0U;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l5;
si1=2048U;
si0=si0 < si1;
if(si0){
goto L18;
}
si0=l5;
si1=65536U;
si0=si0 >= si1;
if(si0){
goto L21;
}
si0=l3;
si1=l5;
si2=63U;
si1&=si2;
si2=128U;
si1|=si2;
i32_store8(&i->m0,(U64)si0+18U,si1);
si0=l3;
si1=l5;
si2=12U;
si1>>=(si2&31);
si2=224U;
si1|=si2;
i32_store8(&i->m0,(U64)si0+16U,si1);
si0=l3;
si1=l5;
si2=6U;
si1>>=(si2&31);
si2=63U;
si1&=si2;
si2=128U;
si1|=si2;
i32_store8(&i->m0,(U64)si0+17U,si1);
si0=3U;
l5=si0;
goto L17;
L21:;
si0=l3;
si1=l5;
si2=63U;
si1&=si2;
si2=128U;
si1|=si2;
i32_store8(&i->m0,(U64)si0+19U,si1);
si0=l3;
si1=l5;
si2=18U;
si1>>=(si2&31);
si2=240U;
si1|=si2;
i32_store8(&i->m0,(U64)si0+16U,si1);
si0=l3;
si1=l5;
si2=6U;
si1>>=(si2&31);
si2=63U;
si1&=si2;
si2=128U;
si1|=si2;
i32_store8(&i->m0,(U64)si0+18U,si1);
si0=l3;
si1=l5;
si2=12U;
si1>>=(si2&31);
si2=63U;
si1&=si2;
si2=128U;
si1|=si2;
i32_store8(&i->m0,(U64)si0+17U,si1);
si0=4U;
l5=si0;
goto L17;
L20:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+8U);
l6=si0;
si1=l3;
si1=i32_load(&i->m0,(U64)si1+4U);
si0=si0 != si1;
if(si0){
goto L22;
}
si0=l3;
si1=l6;
f3344(i,si0,si1);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+8U);
l6=si0;
L22:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
si1=l6;
si0+=si1;
si1=l5;
i32_store8(&i->m0,(U64)si0,si1);
si0=l3;
si1=l3;
si1=i32_load(&i->m0,(U64)si1+8U);
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0+8U,si1);
goto L2;
L19:;
si0=1535756U;
si1=43U;
si2=1536032U;
f673(i,si0,si1,si2);
UNREACHABLE;
L18:;
si0=l3;
si1=l5;
si2=63U;
si1&=si2;
si2=128U;
si1|=si2;
i32_store8(&i->m0,(U64)si0+17U,si1);
si0=l3;
si1=l5;
si2=6U;
si1>>=(si2&31);
si2=192U;
si1|=si2;
i32_store8(&i->m0,(U64)si0+16U,si1);
si0=2U;
l5=si0;
L17:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+4U);
si1=l3;
si1=i32_load(&i->m0,(U64)si1+8U);
l6=si1;
si0-=si1;
si1=l5;
si0=si0 >= si1;
if(si0){
goto L23;
}
si0=l3;
si1=l6;
si2=l5;
f3355(i,si0,si1,si2);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+8U);
l6=si0;
L23:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
si1=l6;
si0+=si1;
si1=l3;
si2=16U;
si1+=si2;
si2=l5;
si0=f15390(i,si0,si1,si2);
si0=l3;
si1=l6;
si2=l5;
si1+=si2;
i32_store(&i->m0,(U64)si0+8U,si1);
goto L2;
}
L1:;
si0=l3;
si1=l2;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l3;
si1=28U;
si0+=si1;
sj1=1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=1U;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l3;
si1=1536088U;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l3;
si1=3U;
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
si1=16U;
si0+=si1;
si1=1536096U;
f683(i,si0,si1);
UNREACHABLE;
L0:;
}

void f3433(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 l8=0;
U32 si0,si1,si2,si3;
U64 sj1;
si0=i->g0;
si1=16U;
si0-=si1;
l3=si0;
i->g0=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+48U);
l4=si0;
si0=1U;
l5=si0;
si0=1U;
si1=l2;
si2=255U;
si1&=si2;
si0<<=(si1&31);
l6=si0;
si1=78U;
si0&=si1;
if(si0){
goto L2;
}
si0=l6;
si1=48U;
si0&=si1;
si0=!(si0);
if(si0){
goto L1;
}
si0=2U;
l5=si0;
L2:;
L3:;
{
si0=l1;
si0=f3430(i,si0);
si0=l5;
si1=-1U;
si0+=si1;
l5=si0;
if(si0){
goto L3;
}
}
L1:;
si0=l1;
si0=f3430(i,si0);
l7=si0;
si1=1114112U;
si0=si0 == si1;
if(si0){
goto L6;
}
si0=0U;
l8=si0;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=5U;
si0=f15269(i,si0);
l5=si0;
si0=!(si0);
if(si0){
goto L7;
}
si0=l3;
sj1=5ULL;
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l3;
si1=l5;
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si1=1114112U;
si0=si0 == si1;
if(si0){
goto L8;
}
si0=l5;
si1=l7;
si0=si0 != si1;
if(si0){
goto L8;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
l5=si0;
si1=1114112U;
si0=si0 == si1;
if(si0){
goto L8;
}
si0=l5;
si1=l7;
si0=si0 != si1;
if(si0){
goto L8;
}
si0=l1;
si0=f3430(i,si0);
si0=l1;
si0=f3430(i,si0);
si0=1U;
l8=si0;
L8:;
L9:;
{
si0=l1;
si0=f3430(i,si0);
l5=si0;
si1=10U;
si0=si0 == si1;
if(si0){
goto L21;
}
si0=l5;
si1=92U;
si0=si0 == si1;
if(si0){
goto L22;
}
si0=l5;
si1=1114112U;
si0=si0 != si1;
if(si0){
goto L20;
}
si0=l0;
si1=14U;
si2=0U;
si3=l8;
si1=si3?si1:si2;
i32_store(&i->m0,(U64)si0+4U,si1);
goto L5;
L22:;
si0=l1;
si0=f3430(i,si0);
l6=si0;
si1=1114112U;
si0=si0 == si1;
if(si0){
goto L20;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0+8U);
l5=si0;
si1=l3;
si1=i32_load(&i->m0,(U64)si1+4U);
si0=si0 != si1;
if(si0){
goto L23;
}
si0=l3;
si1=l5;
f3344(i,si0,si1);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+8U);
l5=si0;
L23:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
si1=l5;
si0+=si1;
si1=92U;
i32_store8(&i->m0,(U64)si0,si1);
si0=l3;
si1=l3;
si1=i32_load(&i->m0,(U64)si1+8U);
si2=1U;
si1+=si2;
l5=si1;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l6;
si1=128U;
si0=si0 < si1;
if(si0){
goto L24;
}
si0=l3;
si1=0U;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l6;
si1=2048U;
si0=si0 < si1;
if(si0){
goto L17;
}
si0=l6;
si1=65536U;
si0=si0 >= si1;
if(si0){
goto L25;
}
si0=l3;
si1=l6;
si2=63U;
si1&=si2;
si2=128U;
si1|=si2;
i32_store8(&i->m0,(U64)si0+14U,si1);
si0=l3;
si1=l6;
si2=12U;
si1>>=(si2&31);
si2=224U;
si1|=si2;
i32_store8(&i->m0,(U64)si0+12U,si1);
si0=l3;
si1=l6;
si2=6U;
si1>>=(si2&31);
si2=63U;
si1&=si2;
si2=128U;
si1|=si2;
i32_store8(&i->m0,(U64)si0+13U,si1);
si0=3U;
l6=si0;
goto L10;
L25:;
si0=l3;
si1=l6;
si2=63U;
si1&=si2;
si2=128U;
si1|=si2;
i32_store8(&i->m0,(U64)si0+15U,si1);
si0=l3;
si1=l6;
si2=18U;
si1>>=(si2&31);
si2=240U;
si1|=si2;
i32_store8(&i->m0,(U64)si0+12U,si1);
si0=l3;
si1=l6;
si2=6U;
si1>>=(si2&31);
si2=63U;
si1&=si2;
si2=128U;
si1|=si2;
i32_store8(&i->m0,(U64)si0+14U,si1);
si0=l3;
si1=l6;
si2=12U;
si1>>=(si2&31);
si2=63U;
si1&=si2;
si2=128U;
si1|=si2;
i32_store8(&i->m0,(U64)si0+13U,si1);
si0=4U;
l6=si0;
goto L10;
L24:;
si0=l5;
si1=l3;
si1=i32_load(&i->m0,(U64)si1+4U);
si0=si0 != si1;
if(si0){
goto L26;
}
si0=l3;
si1=l5;
f3344(i,si0,si1);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+8U);
l5=si0;
L26:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
si1=l5;
si0+=si1;
si1=l6;
i32_store8(&i->m0,(U64)si0,si1);
si0=l3;
si1=l3;
si1=i32_load(&i->m0,(U64)si1+8U);
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0+8U,si1);
goto L9;
L21:;
si0=l8;
if(si0){
goto L19;
}
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=33U;
si0=f15269(i,si0);
l5=si0;
si0=!(si0);
if(si0){
goto L16;
}
si0=l0;
si1=15U;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l5;
si1=32U;
si0+=si1;
si1=0U;
si1=i32_load8_u(&i->m0,(U64)si1+1536176U);
i32_store8(&i->m0,(U64)si0,si1);
si0=l5;
si1=24U;
si0+=si1;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+1536168U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=16U;
si0+=si1;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+1536160U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=8U;
si0+=si1;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+1536152U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+1536144U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=12U;
si0+=si1;
sj1=141733920801ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=8U;
si0+=si1;
si1=l5;
i32_store(&i->m0,(U64)si0,si1);
goto L5;
L20:;
si0=l5;
si1=l7;
si0=si0 != si1;
if(si0){
goto L14;
}
si0=l8;
if(si0){
goto L18;
}
goto L15;
L19:;
si0=l7;
si1=10U;
si0=si0 != si1;
if(si0){
goto L13;
}
L18:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si1=1114112U;
si0=si0 == si1;
if(si0){
goto L14;
}
si0=l6;
si1=l7;
si0=si0 != si1;
if(si0){
goto L14;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
l6=si0;
si1=1114112U;
si0=si0 == si1;
if(si0){
goto L14;
}
si0=l6;
si1=l7;
si0=si0 != si1;
if(si0){
goto L14;
}
si0=l1;
si0=f3430(i,si0);
si0=l1;
si0=f3430(i,si0);
goto L15;
L17:;
si0=l3;
si1=l6;
si2=63U;
si1&=si2;
si2=128U;
si1|=si2;
i32_store8(&i->m0,(U64)si0+13U,si1);
si0=l3;
si1=l6;
si2=6U;
si1>>=(si2&31);
si2=192U;
si1|=si2;
i32_store8(&i->m0,(U64)si0+12U,si1);
si0=2U;
l6=si0;
goto L10;
L16:;
si0=1U;
si1=33U;
f52(i,si0,si1);
UNREACHABLE;
L15:;
si0=l4;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+48U);
l5=si1;
si0=si0 > si1;
if(si0){
goto L27;
}
si0=l0;
si1=l3;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l0;
si1=l5;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l0;
si1=l4;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l0;
si1=l8;
i32_store8(&i->m0,(U64)si0+17U,si1);
si0=l0;
si1=l2;
i32_store8(&i->m0,(U64)si0+16U,si1);
si0=l0;
si1=6U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=12U;
si0+=si1;
si1=l3;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
goto L4;
L27:;
si0=1535600U;
si1=38U;
si2=1535740U;
f673(i,si0,si1,si2);
UNREACHABLE;
L14:;
si0=l5;
si1=128U;
si0=si0 < si1;
if(si0){
goto L13;
}
si0=l3;
si1=0U;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l5;
si1=2048U;
si0=si0 < si1;
if(si0){
goto L12;
}
si0=l5;
si1=65536U;
si0=si0 >= si1;
if(si0){
goto L28;
}
si0=l3;
si1=l5;
si2=63U;
si1&=si2;
si2=128U;
si1|=si2;
i32_store8(&i->m0,(U64)si0+14U,si1);
si0=l3;
si1=l5;
si2=12U;
si1>>=(si2&31);
si2=224U;
si1|=si2;
i32_store8(&i->m0,(U64)si0+12U,si1);
si0=l3;
si1=l5;
si2=6U;
si1>>=(si2&31);
si2=63U;
si1&=si2;
si2=128U;
si1|=si2;
i32_store8(&i->m0,(U64)si0+13U,si1);
si0=3U;
l5=si0;
goto L11;
L28:;
si0=l3;
si1=l5;
si2=63U;
si1&=si2;
si2=128U;
si1|=si2;
i32_store8(&i->m0,(U64)si0+15U,si1);
si0=l3;
si1=l5;
si2=18U;
si1>>=(si2&31);
si2=240U;
si1|=si2;
i32_store8(&i->m0,(U64)si0+12U,si1);
si0=l3;
si1=l5;
si2=6U;
si1>>=(si2&31);
si2=63U;
si1&=si2;
si2=128U;
si1|=si2;
i32_store8(&i->m0,(U64)si0+14U,si1);
si0=l3;
si1=l5;
si2=12U;
si1>>=(si2&31);
si2=63U;
si1&=si2;
si2=128U;
si1|=si2;
i32_store8(&i->m0,(U64)si0+13U,si1);
si0=4U;
l5=si0;
goto L11;
L13:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+8U);
l6=si0;
si1=l3;
si1=i32_load(&i->m0,(U64)si1+4U);
si0=si0 != si1;
if(si0){
goto L29;
}
si0=l3;
si1=l6;
f3344(i,si0,si1);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+8U);
l6=si0;
L29:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
si1=l6;
si0+=si1;
si1=l5;
i32_store8(&i->m0,(U64)si0,si1);
si0=l3;
si1=l3;
si1=i32_load(&i->m0,(U64)si1+8U);
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0+8U,si1);
goto L9;
L12:;
si0=l3;
si1=l5;
si2=63U;
si1&=si2;
si2=128U;
si1|=si2;
i32_store8(&i->m0,(U64)si0+13U,si1);
si0=l3;
si1=l5;
si2=6U;
si1>>=(si2&31);
si2=192U;
si1|=si2;
i32_store8(&i->m0,(U64)si0+12U,si1);
si0=2U;
l5=si0;
L11:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+4U);
si1=l3;
si1=i32_load(&i->m0,(U64)si1+8U);
l6=si1;
si0-=si1;
si1=l5;
si0=si0 >= si1;
if(si0){
goto L30;
}
si0=l3;
si1=l6;
si2=l5;
f3355(i,si0,si1,si2);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+8U);
l6=si0;
L30:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
si1=l6;
si0+=si1;
si1=l3;
si2=12U;
si1+=si2;
si2=l5;
si0=f15390(i,si0,si1,si2);
si0=l3;
si1=l6;
si2=l5;
si1+=si2;
i32_store(&i->m0,(U64)si0+8U,si1);
goto L9;
L10:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+4U);
si1=l5;
si0-=si1;
si1=l6;
si0=si0 >= si1;
if(si0){
goto L31;
}
si0=l3;
si1=l5;
si2=l6;
f3355(i,si0,si1,si2);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+8U);
l5=si0;
L31:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
si1=l5;
si0+=si1;
si1=l3;
si2=12U;
si1+=si2;
si2=l6;
si0=f15390(i,si0,si1,si2);
si0=l3;
si1=l5;
si2=l6;
si1+=si2;
i32_store(&i->m0,(U64)si0+8U,si1);
goto L9;
}
L7:;
si0=1U;
si1=5U;
f52(i,si0,si1);
UNREACHABLE;
L6:;
si0=1535756U;
si1=43U;
si2=1536128U;
f673(i,si0,si1,si2);
UNREACHABLE;
L5:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+48U);
l5=si0;
si0=l0;
si1=98U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=20U;
si0+=si1;
si1=l5;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+4U);
si0=!(si0);
if(si0){
goto L4;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
f15271(i,si0);
L4:;
si0=l3;
si1=16U;
si0+=si1;
i->g0=si0;
L0:;
}

void f3434(rustpythonInstance*i,U32 l0,U32 l1) {
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
U64 l19=0;
U64 l20=0;
U32 l21=0;
F64 l22=0;
U32 si0,si1,si2,si3,si4;
U64 sj0,sj1,sj2;
F64 sd0,sd1;
si0=i->g0;
si1=80U;
si0-=si1;
l2=si0;
i->g0=si0;
si0=l1;
si1=40U;
si0+=si1;
l3=si0;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
if(si0){
goto L2;
}
si0=l1;
si1=36U;
si0+=si1;
l5=si0;
si0=l1;
si1=32U;
si0+=si1;
l6=si0;
si0=l1;
si1=48U;
si0+=si1;
l7=si0;
si0=l1;
si1=20U;
si0+=si1;
l8=si0;
si0=l2;
si1=16U;
si0+=si1;
si1=4U;
si0|=si1;
l9=si0;
L3:;
{
si0=l1;
si0=i32_load8_u(&i->m0,(U64)si0+52U);
si0=!(si0);
if(si0){
goto L4;
}
L5:;
{
si0=0U;
l10=si0;
si0=0U;
l11=si0;
L6:;
{
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
si1=32U;
si0=si0 != si1;
if(si0){
goto L7;
}
si0=l1;
si0=f3430(i,si0);
si0=l11;
si1=-1U;
si0+=si1;
l11=si0;
goto L6;
L7:;
si0=l4;
si1=-9U;
si0+=si1;
switch(si0){
case 0:
goto L12;
case 1:
goto L15;
case 2:
goto L18;
case 3:
goto L16;
case 4:
goto L15;
case 5:
goto L18;
case 6:
goto L18;
case 7:
goto L18;
case 8:
goto L18;
case 9:
goto L18;
case 10:
goto L18;
case 11:
goto L18;
case 12:
goto L18;
case 13:
goto L18;
case 14:
goto L18;
case 15:
goto L18;
case 16:
goto L18;
case 17:
goto L18;
case 18:
goto L18;
case 19:
goto L18;
case 20:
goto L18;
case 21:
goto L18;
case 22:
goto L18;
case 23:
goto L18;
case 24:
goto L18;
case 25:
goto L18;
case 26:
goto L17;
default:
goto L19;
}
L19:;
si0=l4;
si1=1114112U;
si0=si0 == si1;
if(si0){
goto L14;
}
L18:;
si0=l1;
si1=0U;
i32_store8(&i->m0,(U64)si0+52U,si1);
si0=0U;
si1=l11;
si0-=si1;
l12=si0;
goto L13;
L17:;
L20:;
{
si0=l4;
si1=-10U;
si0+=si1;
switch(si0){
case 0:
goto L5;
case 1:
goto L21;
case 2:
goto L21;
case 3:
goto L5;
default:
goto L22;
}
L22:;
si0=l4;
si1=1114112U;
si0=si0 == si1;
if(si0){
goto L5;
}
L21:;
si0=l1;
si0=f3430(i,si0);
si1=1114112U;
si0=si0 == si1;
if(si0){
goto L23;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
goto L20;
L23:;
}
si0=1535756U;
si1=43U;
si2=1536112U;
f673(i,si0,si1,si2);
UNREACHABLE;
L16:;
si0=l1;
si0=f3430(i,si0);
goto L5;
L15:;
si0=l1;
si0=f3430(i,si0);
goto L5;
L14:;
si0=0U;
l10=si0;
si0=0U;
l12=si0;
L13:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+44U);
if(si0){
goto L4;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+28U);
l4=si0;
si0=!(si0);
if(si0){
goto L24;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+20U);
l13=si0;
if(si0){
goto L11;
}
L24:;
si0=1533972U;
si1=41U;
si2=1534108U;
f703(i,si0,si1,si2);
UNREACHABLE;
L12:;
si0=l11;
si0=!(si0);
if(si0){
goto L8;
}
si0=l7;
si0=i32_load(&i->m0,(U64)si0);
l11=si0;
si0=5U;
l1=si0;
goto L10;
L11:;
si0=l7;
si0=i32_load(&i->m0,(U64)si0);
l11=si0;
si0=-1U;
si1=l10;
si2=l13;
si3=l4;
si4=-1U;
si3+=si4;
si4=3U;
si3<<=(si4&31);
si2+=si3;
l14=si2;
si2=i32_load(&i->m0,(U64)si2);
l15=si2;
si1=si1 != si2;
si2=l10;
si3=l15;
si2=si2 < si3;
si0=si2?si0:si1;
si1=255U;
si0&=si1;
switch(si0){
case 0:
goto L27;
case 1:
goto L26;
default:
goto L28;
}
L28:;
si0=l12;
si1=l14;
si1=i32_load(&i->m0,(U64)si1+4U);
si0=si0 <= si1;
if(si0){
goto L25;
}
si0=4U;
l1=si0;
goto L10;
L27:;
si0=l12;
si1=l14;
si1=i32_load(&i->m0,(U64)si1+4U);
l11=si1;
si0=si0 < si1;
if(si0){
goto L25;
}
si0=l12;
si1=l11;
si0=si0 == si1;
if(si0){
goto L4;
}
goto L9;
L26:;
si0=l12;
si1=l14;
si1=i32_load(&i->m0,(U64)si1+4U);
si0=si0 >= si1;
if(si0){
goto L9;
}
si0=4U;
l1=si0;
goto L10;
L25:;
L31:;
{
si0=l7;
si0=i32_load(&i->m0,(U64)si0);
l11=si0;
si0=-1U;
si1=l10;
si2=l13;
si3=l4;
si4=-1U;
si3+=si4;
l16=si3;
si4=3U;
si3<<=(si4&31);
si2+=si3;
l15=si2;
si2=i32_load(&i->m0,(U64)si2);
l14=si2;
si1=si1 != si2;
si2=l10;
si3=l14;
si2=si2 < si3;
si0=si2?si0:si1;
si1=255U;
si0&=si1;
switch(si0){
case 0:
goto L33;
case 1:
goto L34;
default:
goto L35;
}
L35:;
si0=l12;
si1=l15;
si1=i32_load(&i->m0,(U64)si1+4U);
si0=si0 <= si1;
if(si0){
goto L32;
}
si0=4U;
l1=si0;
goto L10;
L34:;
si0=4U;
l1=si0;
si0=l12;
si1=l13;
si2=l16;
si3=3U;
si2<<=(si3&31);
si1+=si2;
si1=i32_load(&i->m0,(U64)si1+4U);
si0=si0 >= si1;
if(si0){
goto L29;
}
goto L10;
L33:;
si0=l12;
si1=l15;
si1=i32_load(&i->m0,(U64)si1+4U);
l13=si1;
si0=si0 >= si1;
if(si0){
goto L30;
}
L32:;
si0=l4;
si1=2U;
si0=si0 < si1;
if(si0){
goto L36;
}
si0=l1;
si1=l16;
i32_store(&i->m0,(U64)si0+28U,si1);
L36:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
si1=l5;
si1=i32_load(&i->m0,(U64)si1);
si0=si0 != si1;
if(si0){
goto L37;
}
si0=l6;
si1=l4;
f3339(i,si0,si1);
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
L37:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+32U);
si1=l4;
si2=5U;
si1<<=(si2&31);
si0+=si1;
l4=si0;
si1=l11;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l4;
si1=l11;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l4;
si1=9U;
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+40U);
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0+40U,si1);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+28U);
l4=si0;
si0=!(si0);
if(si0){
goto L38;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+20U);
l13=si0;
if(si0){
goto L31;
}
L38:;
}
si0=1533972U;
si1=41U;
si2=1534108U;
f703(i,si0,si1,si2);
UNREACHABLE;
L30:;
si0=l12;
si1=l13;
si0=si0 == si1;
if(si0){
goto L4;
}
L29:;
si0=3U;
l1=si0;
L10:;
si0=l0;
si1=l1;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=98U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=8U;
si0+=si1;
si1=255U;
i32_store8(&i->m0,(U64)si0,si1);
si0=l0;
si1=16U;
si0+=si1;
si1=l11;
sj1=(U64)(si1);
sj2=32ULL;
sj1<<=(sj2&63);
i64_store(&i->m0,(U64)si0,sj1);
goto L1;
L9:;
si0=l4;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+24U);
si0=si0 != si1;
if(si0){
goto L39;
}
si0=l8;
si1=l4;
f3351(i,si0,si1);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+20U);
l13=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+28U);
l4=si0;
L39:;
si0=l13;
si1=l4;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l4=si0;
si1=l12;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l4;
si1=l10;
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+28U);
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+48U);
l4=si0;
si1=l12;
si2=l10;
si1+=si2;
l11=si1;
si0=si0 < si1;
if(si0){
goto L40;
}
si0=l4;
si1=l11;
si0-=si1;
l10=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
l11=si0;
si1=l5;
si1=i32_load(&i->m0,(U64)si1);
si0=si0 != si1;
if(si0){
goto L41;
}
si0=l6;
si1=l11;
f3339(i,si0,si1);
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
l11=si0;
L41:;
si0=l6;
si0=i32_load(&i->m0,(U64)si0);
si1=l11;
si2=5U;
si1<<=(si2&31);
si0+=si1;
l11=si0;
si1=l4;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l11;
si1=l10;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l11;
si1=8U;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=l3;
si1=i32_load(&i->m0,(U64)si1);
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
goto L4;
L40:;
si0=1535600U;
si1=38U;
si2=1535740U;
f673(i,si0,si1,si2);
UNREACHABLE;
L8:;
si0=l1;
si0=f3430(i,si0);
si0=l10;
si1=1U;
si0+=si1;
l10=si0;
si0=0U;
l11=si0;
goto L6;
}
}
L4:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
si1=1114112U;
si0=si0 == si1;
if(si0){
goto L67;
}
si0=l4;
si1=-97U;
si0+=si1;
si1=25U;
si0=si0 <= si1;
if(si0){
goto L68;
}
si0=l4;
si1=65U;
si0=si0 < si1;
if(si0){
goto L69;
}
si0=l4;
si1=91U;
si0=si0 < si1;
if(si0){
goto L68;
}
si0=l4;
si1=95U;
si0=si0 == si1;
if(si0){
goto L68;
}
L69:;
si0=2076820U;
si1=l4;
si0=f15119(i,si0,si1);
si0=!(si0);
if(si0){
goto L66;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
si1=1114112U;
si0=si0 == si1;
if(si0){
goto L48;
}
L68:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
l11=si0;
si1=-34U;
si0+=si1;
switch(si0){
case 0:
goto L65;
case 1:
goto L63;
case 2:
goto L63;
case 3:
goto L63;
case 4:
goto L63;
case 5:
goto L65;
default:
goto L64;
}
L67:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+48U);
l11=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+44U);
si0=!(si0);
if(si0){
goto L62;
}
si0=14U;
l10=si0;
si0=l17;
l13=si0;
sj0=l19;
l18=sj0;
goto L42;
L66:;
si0=l4;
si1=-48U;
si0+=si1;
si1=10U;
si0=si0 < si1;
if(si0){
goto L70;
}
si0=l4;
si1=-9U;
si0+=si1;
switch(si0){
case 0:
goto L74;
case 1:
goto L75;
case 2:
goto L71;
case 3:
goto L74;
case 4:
goto L75;
case 5:
goto L71;
case 6:
goto L71;
case 7:
goto L71;
case 8:
goto L71;
case 9:
goto L71;
case 10:
goto L71;
case 11:
goto L71;
case 12:
goto L71;
case 13:
goto L71;
case 14:
goto L71;
case 15:
goto L71;
case 16:
goto L71;
case 17:
goto L71;
case 18:
goto L71;
case 19:
goto L71;
case 20:
goto L71;
case 21:
goto L71;
case 22:
goto L71;
case 23:
goto L74;
case 24:
goto L114;
case 25:
goto L101;
case 26:
goto L118;
case 27:
goto L71;
case 28:
goto L92;
case 29:
goto L89;
case 30:
goto L101;
case 31:
goto L112;
case 32:
goto L111;
case 33:
goto L117;
case 34:
goto L99;
case 35:
goto L103;
case 36:
goto L115;
case 37:
goto L76;
case 38:
goto L116;
case 39:
goto L71;
case 40:
goto L71;
case 41:
goto L71;
case 42:
goto L71;
case 43:
goto L71;
case 44:
goto L71;
case 45:
goto L71;
case 46:
goto L71;
case 47:
goto L71;
case 48:
goto L71;
case 49:
goto L83;
case 50:
goto L106;
case 51:
goto L105;
case 52:
goto L100;
case 53:
goto L104;
case 54:
goto L71;
case 55:
goto L85;
case 56:
goto L71;
case 57:
goto L71;
case 58:
goto L71;
case 59:
goto L71;
case 60:
goto L71;
case 61:
goto L71;
case 62:
goto L71;
case 63:
goto L71;
case 64:
goto L71;
case 65:
goto L71;
case 66:
goto L71;
case 67:
goto L71;
case 68:
goto L71;
case 69:
goto L71;
case 70:
goto L71;
case 71:
goto L71;
case 72:
goto L71;
case 73:
goto L71;
case 74:
goto L71;
case 75:
goto L71;
case 76:
goto L71;
case 77:
goto L71;
case 78:
goto L71;
case 79:
goto L71;
case 80:
goto L71;
case 81:
goto L71;
case 82:
goto L110;
case 83:
goto L102;
case 84:
goto L109;
case 85:
goto L90;
case 86:
goto L71;
case 87:
goto L71;
case 88:
goto L71;
case 89:
goto L71;
case 90:
goto L71;
case 91:
goto L71;
case 92:
goto L71;
case 93:
goto L71;
case 94:
goto L71;
case 95:
goto L71;
case 96:
goto L71;
case 97:
goto L71;
case 98:
goto L71;
case 99:
goto L71;
case 100:
goto L71;
case 101:
goto L71;
case 102:
goto L71;
case 103:
goto L71;
case 104:
goto L71;
case 105:
goto L71;
case 106:
goto L71;
case 107:
goto L71;
case 108:
goto L71;
case 109:
goto L71;
case 110:
goto L71;
case 111:
goto L71;
case 112:
goto L71;
case 113:
goto L71;
case 114:
goto L108;
case 115:
goto L91;
case 116:
goto L107;
case 117:
goto L113;
default:
goto L71;
}
L118:;
L119:;
{
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
si1=-10U;
si0+=si1;
switch(si0){
case 0:
goto L43;
case 1:
goto L120;
case 2:
goto L120;
case 3:
goto L43;
default:
goto L121;
}
L121:;
si0=l4;
si1=1114112U;
si0=si0 == si1;
if(si0){
goto L43;
}
L120:;
si0=l1;
si0=f3430(i,si0);
si1=1114112U;
si0=si0 != si1;
if(si0){
goto L119;
}
}
si0=1535756U;
si1=43U;
si2=1536112U;
f673(i,si0,si1,si2);
UNREACHABLE;
L117:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+48U);
l4=si0;
si0=l1;
si0=f3430(i,si0);
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
si1=-42U;
si0+=si1;
switch(si0){
case 0:
goto L97;
case 1:
goto L96;
case 2:
goto L96;
case 3:
goto L96;
case 4:
goto L96;
case 5:
goto L96;
case 6:
goto L96;
case 7:
goto L96;
case 8:
goto L96;
case 9:
goto L96;
case 10:
goto L96;
case 11:
goto L96;
case 12:
goto L96;
case 13:
goto L96;
case 14:
goto L96;
case 15:
goto L96;
case 16:
goto L96;
case 17:
goto L96;
case 18:
goto L96;
case 19:
goto L98;
default:
goto L96;
}
L116:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+48U);
l4=si0;
si0=l1;
si0=f3430(i,si0);
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
si1=-47U;
si0+=si1;
switch(si0){
case 0:
goto L94;
case 1:
goto L93;
case 2:
goto L93;
case 3:
goto L93;
case 4:
goto L93;
case 5:
goto L93;
case 6:
goto L93;
case 7:
goto L93;
case 8:
goto L93;
case 9:
goto L93;
case 10:
goto L93;
case 11:
goto L93;
case 12:
goto L93;
case 13:
goto L93;
case 14:
goto L95;
default:
goto L93;
}
L115:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+48U);
l4=si0;
si0=l1;
si0=f3430(i,si0);
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
si1=-61U;
si0+=si1;
switch(si0){
case 0:
goto L88;
case 1:
goto L87;
default:
goto L86;
}
L114:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+48U);
l11=si0;
si0=l1;
si0=f3430(i,si0);
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
si1=61U;
si0=si0 == si1;
if(si0){
goto L84;
}
si0=33U;
l13=si0;
si0=11U;
l10=si0;
goto L42;
L113:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+48U);
l4=si0;
si0=l1;
si0=f3430(i,si0);
si0=l4;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+48U);
l10=si1;
si0=si0 > si1;
if(si0){
goto L60;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
l11=si0;
si1=l5;
si1=i32_load(&i->m0,(U64)si1);
si0=si0 != si1;
if(si0){
goto L122;
}
si0=l6;
si1=l11;
f3339(i,si0,si1);
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
l11=si0;
L122:;
si0=l6;
si0=i32_load(&i->m0,(U64)si0);
si1=l11;
si2=5U;
si1<<=(si2&31);
si0+=si1;
l11=si0;
si1=l10;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l11;
si1=l4;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l11;
si1=35U;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
si1=1U;
si0+=si1;
l4=si0;
goto L46;
L112:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+48U);
l4=si0;
si0=l1;
si0=f3430(i,si0);
si0=l4;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+48U);
l10=si1;
si0=si0 > si1;
if(si0){
goto L59;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
l11=si0;
si1=l5;
si1=i32_load(&i->m0,(U64)si1);
si0=si0 != si1;
if(si0){
goto L123;
}
si0=l6;
si1=l11;
f3339(i,si0,si1);
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
l11=si0;
L123:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+32U);
si1=l11;
si2=5U;
si1<<=(si2&31);
si0+=si1;
l11=si0;
si1=l10;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l11;
si1=l4;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l11;
si1=11U;
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+40U);
si2=1U;
si1+=si2;
l4=si1;
i32_store(&i->m0,(U64)si0+40U,si1);
si0=l1;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+44U);
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0+44U,si1);
si0=l4;
si0=!(si0);
if(si0){
goto L3;
}
goto L2;
L111:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+48U);
l4=si0;
si0=l1;
si0=f3430(i,si0);
si0=l4;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+48U);
l10=si1;
si0=si0 > si1;
if(si0){
goto L58;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
l11=si0;
si1=l5;
si1=i32_load(&i->m0,(U64)si1);
si0=si0 != si1;
if(si0){
goto L124;
}
si0=l6;
si1=l11;
f3339(i,si0,si1);
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
l11=si0;
L124:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+32U);
si1=l11;
si2=5U;
si1<<=(si2&31);
si0+=si1;
l11=si0;
si1=l10;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l11;
si1=l4;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l11;
si1=12U;
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+40U);
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0+40U,si1);
goto L44;
L110:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+48U);
l4=si0;
si0=l1;
si0=f3430(i,si0);
si0=l4;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+48U);
l10=si1;
si0=si0 > si1;
if(si0){
goto L57;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
l11=si0;
si1=l5;
si1=i32_load(&i->m0,(U64)si1);
si0=si0 != si1;
if(si0){
goto L125;
}
si0=l6;
si1=l11;
f3339(i,si0,si1);
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
l11=si0;
L125:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+32U);
si1=l11;
si2=5U;
si1<<=(si2&31);
si0+=si1;
l11=si0;
si1=l10;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l11;
si1=l4;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l11;
si1=13U;
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+40U);
si2=1U;
si1+=si2;
l4=si1;
i32_store(&i->m0,(U64)si0+40U,si1);
si0=l1;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+44U);
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0+44U,si1);
si0=l4;
si0=!(si0);
if(si0){
goto L3;
}
goto L2;
L109:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+48U);
l4=si0;
si0=l1;
si0=f3430(i,si0);
si0=l4;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+48U);
l10=si1;
si0=si0 > si1;
if(si0){
goto L56;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
l11=si0;
si1=l5;
si1=i32_load(&i->m0,(U64)si1);
si0=si0 != si1;
if(si0){
goto L126;
}
si0=l6;
si1=l11;
f3339(i,si0,si1);
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
l11=si0;
L126:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+32U);
si1=l11;
si2=5U;
si1<<=(si2&31);
si0+=si1;
l11=si0;
si1=l10;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l11;
si1=l4;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l11;
si1=14U;
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+40U);
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0+40U,si1);
goto L44;
L108:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+48U);
l4=si0;
si0=l1;
si0=f3430(i,si0);
si0=l4;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+48U);
l10=si1;
si0=si0 > si1;
if(si0){
goto L55;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
l11=si0;
si1=l5;
si1=i32_load(&i->m0,(U64)si1);
si0=si0 != si1;
if(si0){
goto L127;
}
si0=l6;
si1=l11;
f3339(i,si0,si1);
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
l11=si0;
L127:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+32U);
si1=l11;
si2=5U;
si1<<=(si2&31);
si0+=si1;
l11=si0;
si1=l10;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l11;
si1=l4;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l11;
si1=29U;
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+40U);
si2=1U;
si1+=si2;
l4=si1;
i32_store(&i->m0,(U64)si0+40U,si1);
si0=l1;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+44U);
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0+44U,si1);
si0=l4;
si0=!(si0);
if(si0){
goto L3;
}
goto L2;
L107:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+48U);
l4=si0;
si0=l1;
si0=f3430(i,si0);
si0=l4;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+48U);
l10=si1;
si0=si0 > si1;
if(si0){
goto L54;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
l11=si0;
si1=l5;
si1=i32_load(&i->m0,(U64)si1);
si0=si0 != si1;
if(si0){
goto L128;
}
si0=l6;
si1=l11;
f3339(i,si0,si1);
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
l11=si0;
L128:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+32U);
si1=l11;
si2=5U;
si1<<=(si2&31);
si0+=si1;
l11=si0;
si1=l10;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l11;
si1=l4;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l11;
si1=30U;
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+40U);
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0+40U,si1);
goto L44;
L106:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+48U);
l4=si0;
si0=l1;
si0=f3430(i,si0);
si0=l4;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+48U);
l10=si1;
si0=si0 > si1;
if(si0){
goto L53;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
l11=si0;
si1=l5;
si1=i32_load(&i->m0,(U64)si1);
si0=si0 != si1;
if(si0){
goto L129;
}
si0=l6;
si1=l11;
f3339(i,si0,si1);
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
l11=si0;
L129:;
si0=l6;
si0=i32_load(&i->m0,(U64)si0);
si1=l11;
si2=5U;
si1<<=(si2&31);
si0+=si1;
l11=si0;
si1=l10;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l11;
si1=l4;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l11;
si1=17U;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
si1=1U;
si0+=si1;
l4=si0;
goto L46;
L105:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+48U);
l4=si0;
si0=l1;
si0=f3430(i,si0);
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
si1=-60U;
si0+=si1;
switch(si0){
case 0:
goto L82;
case 1:
goto L81;
default:
goto L80;
}
L104:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+48U);
l4=si0;
si0=l1;
si0=f3430(i,si0);
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
si1=-61U;
si0+=si1;
switch(si0){
case 0:
goto L78;
case 1:
goto L79;
default:
goto L77;
}
L103:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+48U);
l4=si0;
si0=l1;
si0=f3430(i,si0);
si0=l4;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+48U);
l10=si1;
si0=si0 > si1;
if(si0){
goto L52;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
l11=si0;
si1=l5;
si1=i32_load(&i->m0,(U64)si1);
si0=si0 != si1;
if(si0){
goto L130;
}
si0=l6;
si1=l11;
f3339(i,si0,si1);
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
l11=si0;
L130:;
si0=l6;
si0=i32_load(&i->m0,(U64)si0);
si1=l11;
si2=5U;
si1<<=(si2&31);
si0+=si1;
l11=si0;
si1=l10;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l11;
si1=l4;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l11;
si1=16U;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
si1=1U;
si0+=si1;
l4=si0;
goto L46;
L102:;
si0=l1;
si0=f3430(i,si0);
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
si1=-10U;
si0+=si1;
switch(si0){
case 0:
goto L72;
case 1:
goto L73;
case 2:
goto L73;
case 3:
goto L72;
default:
goto L73;
}
L101:;
si0=l2;
si1=16U;
si0+=si1;
si1=l1;
si2=0U;
f3433(i,si0,si1,si2);
si0=l2;
si0=i32_load(&i->m0,(U64)si0+36U);
l11=si0;
si0=l2;
sj0=i64_load(&i->m0,(U64)si0+28U);
l18=sj0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+24U);
l13=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+20U);
l10=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+16U);
l14=si0;
si1=98U;
si0=si0 == si1;
if(si0){
goto L61;
}
si0=l2;
sj0=i64_load(&i->m0,(U64)si0+40U);
l20=sj0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
si1=l5;
si1=i32_load(&i->m0,(U64)si1);
si0=si0 != si1;
if(si0){
goto L131;
}
si0=l6;
si1=l4;
f3339(i,si0,si1);
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
L131:;
si0=l6;
si0=i32_load(&i->m0,(U64)si0);
si1=l4;
si2=5U;
si1<<=(si2&31);
si0+=si1;
l4=si0;
sj1=l20;
i64_store(&i->m0,(U64)si0+24U,sj1);
si0=l4;
si1=l11;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l4;
sj1=l18;
i64_store(&i->m0,(U64)si0+12U,sj1);
si0=l4;
si1=l13;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l4;
si1=l10;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l4;
si1=l14;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
si1=1U;
si0+=si1;
l4=si0;
goto L46;
L100:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+48U);
l4=si0;
si0=l1;
si0=f3430(i,si0);
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
si1=61U;
si0=si0 == si1;
if(si0){
goto L133;
}
si0=l4;
si1=l7;
si1=i32_load(&i->m0,(U64)si1);
l10=si1;
si0=si0 > si1;
if(si0){
goto L132;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
l11=si0;
si1=l5;
si1=i32_load(&i->m0,(U64)si1);
si0=si0 != si1;
if(si0){
goto L134;
}
si0=l6;
si1=l11;
f3339(i,si0,si1);
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
l11=si0;
L134:;
si0=l6;
si0=i32_load(&i->m0,(U64)si0);
si1=l11;
si2=5U;
si1<<=(si2&31);
si0+=si1;
l11=si0;
si1=l10;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l11;
si1=l4;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l11;
si1=26U;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
si1=1U;
si0+=si1;
l4=si0;
goto L46;
L133:;
si0=l1;
si0=f3430(i,si0);
si0=l4;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+48U);
l10=si1;
si0=si0 > si1;
if(si0){
goto L135;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
l11=si0;
si1=l5;
si1=i32_load(&i->m0,(U64)si1);
si0=si0 != si1;
if(si0){
goto L136;
}
si0=l6;
si1=l11;
f3339(i,si0,si1);
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
l11=si0;
L136:;
si0=l6;
si0=i32_load(&i->m0,(U64)si0);
si1=l11;
si2=5U;
si1<<=(si2&31);
si0+=si1;
l11=si0;
si1=l10;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l11;
si1=l4;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l11;
si1=31U;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
si1=1U;
si0+=si1;
l4=si0;
goto L46;
L135:;
si0=1535600U;
si1=38U;
si2=1535740U;
f673(i,si0,si1,si2);
UNREACHABLE;
L132:;
si0=1535600U;
si1=38U;
si2=1535740U;
f673(i,si0,si1,si2);
UNREACHABLE;
L99:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+48U);
l4=si0;
si0=l1;
si0=f3430(i,si0);
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
si1=61U;
si0=si0 == si1;
if(si0){
goto L138;
}
si0=l4;
si1=l7;
si1=i32_load(&i->m0,(U64)si1);
l10=si1;
si0=si0 > si1;
if(si0){
goto L137;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
l11=si0;
si1=l5;
si1=i32_load(&i->m0,(U64)si1);
si0=si0 != si1;
if(si0){
goto L139;
}
si0=l6;
si1=l11;
f3339(i,si0,si1);
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
l11=si0;
L139:;
si0=l6;
si0=i32_load(&i->m0,(U64)si0);
si1=l11;
si2=5U;
si1<<=(si2&31);
si0+=si1;
l11=si0;
si1=l10;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l11;
si1=l4;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l11;
si1=18U;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
si1=1U;
si0+=si1;
l4=si0;
goto L46;
L138:;
si0=l1;
si0=f3430(i,si0);
si0=l4;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+48U);
l10=si1;
si0=si0 > si1;
if(si0){
goto L140;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
l11=si0;
si1=l5;
si1=i32_load(&i->m0,(U64)si1);
si0=si0 != si1;
if(si0){
goto L141;
}
si0=l6;
si1=l11;
f3339(i,si0,si1);
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
l11=si0;
L141:;
si0=l6;
si0=i32_load(&i->m0,(U64)si0);
si1=l11;
si2=5U;
si1<<=(si2&31);
si0+=si1;
l11=si0;
si1=l10;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l11;
si1=l4;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l11;
si1=41U;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
si1=1U;
si0+=si1;
l4=si0;
goto L46;
L140:;
si0=1535600U;
si1=38U;
si2=1535740U;
f673(i,si0,si1,si2);
UNREACHABLE;
L137:;
si0=1535600U;
si1=38U;
si2=1535740U;
f673(i,si0,si1,si2);
UNREACHABLE;
L98:;
si0=l1;
si0=f3430(i,si0);
si0=l4;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+48U);
l10=si1;
si0=si0 > si1;
if(si0){
goto L142;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
l11=si0;
si1=l5;
si1=i32_load(&i->m0,(U64)si1);
si0=si0 != si1;
if(si0){
goto L143;
}
si0=l6;
si1=l11;
f3339(i,si0,si1);
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
l11=si0;
L143:;
si0=l6;
si0=i32_load(&i->m0,(U64)si0);
si1=l11;
si2=5U;
si1<<=(si2&31);
si0+=si1;
l11=si0;
si1=l10;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l11;
si1=l4;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l11;
si1=43U;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
si1=1U;
si0+=si1;
l4=si0;
goto L46;
L142:;
si0=1535600U;
si1=38U;
si2=1535740U;
f673(i,si0,si1,si2);
UNREACHABLE;
L97:;
si0=l1;
si0=f3430(i,si0);
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
si1=61U;
si0=si0 == si1;
if(si0){
goto L145;
}
si0=l4;
si1=l7;
si1=i32_load(&i->m0,(U64)si1);
l10=si1;
si0=si0 > si1;
if(si0){
goto L144;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
l11=si0;
si1=l5;
si1=i32_load(&i->m0,(U64)si1);
si0=si0 != si1;
if(si0){
goto L146;
}
si0=l6;
si1=l11;
f3339(i,si0,si1);
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
l11=si0;
L146:;
si0=l6;
si0=i32_load(&i->m0,(U64)si0);
si1=l11;
si2=5U;
si1<<=(si2&31);
si0+=si1;
l11=si0;
si1=l10;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l11;
si1=l4;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l11;
si1=39U;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
si1=1U;
si0+=si1;
l4=si0;
goto L46;
L145:;
si0=l1;
si0=f3430(i,si0);
si0=l4;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+48U);
l10=si1;
si0=si0 > si1;
if(si0){
goto L147;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
l11=si0;
si1=l5;
si1=i32_load(&i->m0,(U64)si1);
si0=si0 != si1;
if(si0){
goto L148;
}
si0=l6;
si1=l11;
f3339(i,si0,si1);
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
l11=si0;
L148:;
si0=l6;
si0=i32_load(&i->m0,(U64)si0);
si1=l11;
si2=5U;
si1<<=(si2&31);
si0+=si1;
l11=si0;
si1=l10;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l11;
si1=l4;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l11;
si1=40U;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
si1=1U;
si0+=si1;
l4=si0;
goto L46;
L147:;
si0=1535600U;
si1=38U;
si2=1535740U;
f673(i,si0,si1,si2);
UNREACHABLE;
L144:;
si0=1535600U;
si1=38U;
si2=1535740U;
f673(i,si0,si1,si2);
UNREACHABLE;
L96:;
si0=l4;
si1=l7;
si1=i32_load(&i->m0,(U64)si1);
l10=si1;
si0=si0 > si1;
if(si0){
goto L149;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
l11=si0;
si1=l5;
si1=i32_load(&i->m0,(U64)si1);
si0=si0 != si1;
if(si0){
goto L150;
}
si0=l6;
si1=l11;
f3339(i,si0,si1);
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
l11=si0;
L150:;
si0=l6;
si0=i32_load(&i->m0,(U64)si0);
si1=l11;
si2=5U;
si1<<=(si2&31);
si0+=si1;
l11=si0;
si1=l10;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l11;
si1=l4;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l11;
si1=20U;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
si1=1U;
si0+=si1;
l4=si0;
goto L46;
L149:;
si0=1535600U;
si1=38U;
si2=1535740U;
f673(i,si0,si1,si2);
UNREACHABLE;
L95:;
si0=l1;
si0=f3430(i,si0);
si0=l4;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+48U);
l10=si1;
si0=si0 > si1;
if(si0){
goto L151;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
l11=si0;
si1=l5;
si1=i32_load(&i->m0,(U64)si1);
si0=si0 != si1;
if(si0){
goto L152;
}
si0=l6;
si1=l11;
f3339(i,si0,si1);
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
l11=si0;
L152:;
si0=l6;
si0=i32_load(&i->m0,(U64)si0);
si1=l11;
si2=5U;
si1<<=(si2&31);
si0+=si1;
l11=si0;
si1=l10;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l11;
si1=l4;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l11;
si1=44U;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
si1=1U;
si0+=si1;
l4=si0;
goto L46;
L151:;
si0=1535600U;
si1=38U;
si2=1535740U;
f673(i,si0,si1,si2);
UNREACHABLE;
L94:;
si0=l1;
si0=f3430(i,si0);
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
si1=61U;
si0=si0 == si1;
if(si0){
goto L154;
}
si0=l4;
si1=l7;
si1=i32_load(&i->m0,(U64)si1);
l10=si1;
si0=si0 > si1;
if(si0){
goto L153;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
l11=si0;
si1=l5;
si1=i32_load(&i->m0,(U64)si1);
si0=si0 != si1;
if(si0){
goto L155;
}
si0=l6;
si1=l11;
f3339(i,si0,si1);
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
l11=si0;
L155:;
si0=l6;
si0=i32_load(&i->m0,(U64)si0);
si1=l11;
si2=5U;
si1<<=(si2&31);
si0+=si1;
l11=si0;
si1=l10;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l11;
si1=l4;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l11;
si1=51U;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
si1=1U;
si0+=si1;
l4=si0;
goto L46;
L154:;
si0=l1;
si0=f3430(i,si0);
si0=l4;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+48U);
l10=si1;
si0=si0 > si1;
if(si0){
goto L156;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
l11=si0;
si1=l5;
si1=i32_load(&i->m0,(U64)si1);
si0=si0 != si1;
if(si0){
goto L157;
}
si0=l6;
si1=l11;
f3339(i,si0,si1);
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
l11=si0;
L157:;
si0=l6;
si0=i32_load(&i->m0,(U64)si0);
si1=l11;
si2=5U;
si1<<=(si2&31);
si0+=si1;
l11=si0;
si1=l10;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l11;
si1=l4;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l11;
si1=52U;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
si1=1U;
si0+=si1;
l4=si0;
goto L46;
L156:;
si0=1535600U;
si1=38U;
si2=1535740U;
f673(i,si0,si1,si2);
UNREACHABLE;
L153:;
si0=1535600U;
si1=38U;
si2=1535740U;
f673(i,si0,si1,si2);
UNREACHABLE;
L93:;
si0=l4;
si1=l7;
si1=i32_load(&i->m0,(U64)si1);
l10=si1;
si0=si0 > si1;
if(si0){
goto L158;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
l11=si0;
si1=l5;
si1=i32_load(&i->m0,(U64)si1);
si0=si0 != si1;
if(si0){
goto L159;
}
si0=l6;
si1=l11;
f3339(i,si0,si1);
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
l11=si0;
L159:;
si0=l6;
si0=i32_load(&i->m0,(U64)si0);
si1=l11;
si2=5U;
si1<<=(si2&31);
si0+=si1;
l11=si0;
si1=l10;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l11;
si1=l4;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l11;
si1=21U;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
si1=1U;
si0+=si1;
l4=si0;
goto L46;
L158:;
si0=1535600U;
si1=38U;
si2=1535740U;
f673(i,si0,si1,si2);
UNREACHABLE;
L92:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+48U);
l4=si0;
si0=l1;
si0=f3430(i,si0);
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
si1=61U;
si0=si0 == si1;
if(si0){
goto L161;
}
si0=l4;
si1=l7;
si1=i32_load(&i->m0,(U64)si1);
l10=si1;
si0=si0 > si1;
if(si0){
goto L160;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
l11=si0;
si1=l5;
si1=i32_load(&i->m0,(U64)si1);
si0=si0 != si1;
if(si0){
goto L162;
}
si0=l6;
si1=l11;
f3339(i,si0,si1);
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
l11=si0;
L162:;
si0=l6;
si0=i32_load(&i->m0,(U64)si0);
si1=l11;
si2=5U;
si1<<=(si2&31);
si0+=si1;
l11=si0;
si1=l10;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l11;
si1=l4;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l11;
si1=28U;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
si1=1U;
si0+=si1;
l4=si0;
goto L46;
L161:;
si0=l1;
si0=f3430(i,si0);
si0=l4;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+48U);
l10=si1;
si0=si0 > si1;
if(si0){
goto L163;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
l11=si0;
si1=l5;
si1=i32_load(&i->m0,(U64)si1);
si0=si0 != si1;
if(si0){
goto L164;
}
si0=l6;
si1=l11;
f3339(i,si0,si1);
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
l11=si0;
L164:;
si0=l6;
si0=i32_load(&i->m0,(U64)si0);
si1=l11;
si2=5U;
si1<<=(si2&31);
si0+=si1;
l11=si0;
si1=l10;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l11;
si1=l4;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l11;
si1=45U;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
si1=1U;
si0+=si1;
l4=si0;
goto L46;
L163:;
si0=1535600U;
si1=38U;
si2=1535740U;
f673(i,si0,si1,si2);
UNREACHABLE;
L160:;
si0=1535600U;
si1=38U;
si2=1535740U;
f673(i,si0,si1,si2);
UNREACHABLE;
L91:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+48U);
l4=si0;
si0=l1;
si0=f3430(i,si0);
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
si1=61U;
si0=si0 == si1;
if(si0){
goto L166;
}
si0=l4;
si1=l7;
si1=i32_load(&i->m0,(U64)si1);
l10=si1;
si0=si0 > si1;
if(si0){
goto L165;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
l11=si0;
si1=l5;
si1=i32_load(&i->m0,(U64)si1);
si0=si0 != si1;
if(si0){
goto L167;
}
si0=l6;
si1=l11;
f3339(i,si0,si1);
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
l11=si0;
L167:;
si0=l6;
si0=i32_load(&i->m0,(U64)si0);
si1=l11;
si2=5U;
si1<<=(si2&31);
si0+=si1;
l11=si0;
si1=l10;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l11;
si1=l4;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l11;
si1=22U;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
si1=1U;
si0+=si1;
l4=si0;
goto L46;
L166:;
si0=l1;
si0=f3430(i,si0);
si0=l4;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+48U);
l10=si1;
si0=si0 > si1;
if(si0){
goto L168;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
l11=si0;
si1=l5;
si1=i32_load(&i->m0,(U64)si1);
si0=si0 != si1;
if(si0){
goto L169;
}
si0=l6;
si1=l11;
f3339(i,si0,si1);
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
l11=si0;
L169:;
si0=l6;
si0=i32_load(&i->m0,(U64)si0);
si1=l11;
si2=5U;
si1<<=(si2&31);
si0+=si1;
l11=si0;
si1=l10;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l11;
si1=l4;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l11;
si1=47U;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
si1=1U;
si0+=si1;
l4=si0;
goto L46;
L168:;
si0=1535600U;
si1=38U;
si2=1535740U;
f673(i,si0,si1,si2);
UNREACHABLE;
L165:;
si0=1535600U;
si1=38U;
si2=1535740U;
f673(i,si0,si1,si2);
UNREACHABLE;
L90:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+48U);
l4=si0;
si0=l1;
si0=f3430(i,si0);
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
si1=61U;
si0=si0 == si1;
if(si0){
goto L171;
}
si0=l4;
si1=l7;
si1=i32_load(&i->m0,(U64)si1);
l10=si1;
si0=si0 > si1;
if(si0){
goto L170;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
l11=si0;
si1=l5;
si1=i32_load(&i->m0,(U64)si1);
si0=si0 != si1;
if(si0){
goto L172;
}
si0=l6;
si1=l11;
f3339(i,si0,si1);
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
l11=si0;
L172:;
si0=l6;
si0=i32_load(&i->m0,(U64)si0);
si1=l11;
si2=5U;
si1<<=(si2&31);
si0+=si1;
l11=si0;
si1=l10;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l11;
si1=l4;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l11;
si1=36U;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
si1=1U;
si0+=si1;
l4=si0;
goto L46;
L171:;
si0=l1;
si0=f3430(i,si0);
si0=l4;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+48U);
l10=si1;
si0=si0 > si1;
if(si0){
goto L173;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
l11=si0;
si1=l5;
si1=i32_load(&i->m0,(U64)si1);
si0=si0 != si1;
if(si0){
goto L174;
}
si0=l6;
si1=l11;
f3339(i,si0,si1);
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
l11=si0;
L174:;
si0=l6;
si0=i32_load(&i->m0,(U64)si0);
si1=l11;
si2=5U;
si1<<=(si2&31);
si0+=si1;
l11=si0;
si1=l10;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l11;
si1=l4;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l11;
si1=48U;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
si1=1U;
si0+=si1;
l4=si0;
goto L46;
L173:;
si0=1535600U;
si1=38U;
si2=1535740U;
f673(i,si0,si1,si2);
UNREACHABLE;
L170:;
si0=1535600U;
si1=38U;
si2=1535740U;
f673(i,si0,si1,si2);
UNREACHABLE;
L89:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+48U);
l4=si0;
si0=l1;
si0=f3430(i,si0);
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
si1=61U;
si0=si0 == si1;
if(si0){
goto L176;
}
si0=l4;
si1=l7;
si1=i32_load(&i->m0,(U64)si1);
l10=si1;
si0=si0 > si1;
if(si0){
goto L175;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
l11=si0;
si1=l5;
si1=i32_load(&i->m0,(U64)si1);
si0=si0 != si1;
if(si0){
goto L177;
}
si0=l6;
si1=l11;
f3339(i,si0,si1);
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
l11=si0;
L177:;
si0=l6;
si0=i32_load(&i->m0,(U64)si0);
si1=l11;
si2=5U;
si1<<=(si2&31);
si0+=si1;
l11=si0;
si1=l10;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l11;
si1=l4;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l11;
si1=23U;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
si1=1U;
si0+=si1;
l4=si0;
goto L46;
L176:;
si0=l1;
si0=f3430(i,si0);
si0=l4;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+48U);
l10=si1;
si0=si0 > si1;
if(si0){
goto L178;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
l11=si0;
si1=l5;
si1=i32_load(&i->m0,(U64)si1);
si0=si0 != si1;
if(si0){
goto L179;
}
si0=l6;
si1=l11;
f3339(i,si0,si1);
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
l11=si0;
L179:;
si0=l6;
si0=i32_load(&i->m0,(U64)si0);
si1=l11;
si2=5U;
si1<<=(si2&31);
si0+=si1;
l11=si0;
si1=l10;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l11;
si1=l4;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l11;
si1=46U;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
si1=1U;
si0+=si1;
l4=si0;
goto L46;
L178:;
si0=1535600U;
si1=38U;
si2=1535740U;
f673(i,si0,si1,si2);
UNREACHABLE;
L175:;
si0=1535600U;
si1=38U;
si2=1535740U;
f673(i,si0,si1,si2);
UNREACHABLE;
L88:;
si0=l1;
si0=f3430(i,si0);
si0=l4;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+48U);
l10=si1;
si0=si0 > si1;
if(si0){
goto L180;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
l11=si0;
si1=l5;
si1=i32_load(&i->m0,(U64)si1);
si0=si0 != si1;
if(si0){
goto L181;
}
si0=l6;
si1=l11;
f3339(i,si0,si1);
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
l11=si0;
L181:;
si0=l6;
si0=i32_load(&i->m0,(U64)si0);
si1=l11;
si2=5U;
si1<<=(si2&31);
si0+=si1;
l11=si0;
si1=l10;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l11;
si1=l4;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l11;
si1=42U;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
si1=1U;
si0+=si1;
l4=si0;
goto L46;
L180:;
si0=1535600U;
si1=38U;
si2=1535740U;
f673(i,si0,si1,si2);
UNREACHABLE;
L87:;
si0=l1;
si0=f3430(i,si0);
si0=l4;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+48U);
l10=si1;
si0=si0 > si1;
if(si0){
goto L182;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
l11=si0;
si1=l5;
si1=i32_load(&i->m0,(U64)si1);
si0=si0 != si1;
if(si0){
goto L183;
}
si0=l6;
si1=l11;
f3339(i,si0,si1);
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
l11=si0;
L183:;
si0=l6;
si0=i32_load(&i->m0,(U64)si0);
si1=l11;
si2=5U;
si1<<=(si2&31);
si0+=si1;
l11=si0;
si1=l10;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l11;
si1=l4;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l11;
si1=56U;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
si1=1U;
si0+=si1;
l4=si0;
goto L46;
L182:;
si0=1535600U;
si1=38U;
si2=1535740U;
f673(i,si0,si1,si2);
UNREACHABLE;
L86:;
si0=l4;
si1=l7;
si1=i32_load(&i->m0,(U64)si1);
l10=si1;
si0=si0 > si1;
if(si0){
goto L184;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
l11=si0;
si1=l5;
si1=i32_load(&i->m0,(U64)si1);
si0=si0 != si1;
if(si0){
goto L185;
}
si0=l6;
si1=l11;
f3339(i,si0,si1);
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
l11=si0;
L185:;
si0=l6;
si0=i32_load(&i->m0,(U64)si0);
si1=l11;
si2=5U;
si1<<=(si2&31);
si0+=si1;
l11=si0;
si1=l10;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l11;
si1=l4;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l11;
si1=19U;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
si1=1U;
si0+=si1;
l4=si0;
goto L46;
L184:;
si0=1535600U;
si1=38U;
si2=1535740U;
f673(i,si0,si1,si2);
UNREACHABLE;
L85:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+48U);
l4=si0;
si0=l1;
si0=f3430(i,si0);
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
si1=61U;
si0=si0 == si1;
if(si0){
goto L187;
}
si0=l4;
si1=l7;
si1=i32_load(&i->m0,(U64)si1);
l10=si1;
si0=si0 > si1;
if(si0){
goto L186;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
l11=si0;
si1=l5;
si1=i32_load(&i->m0,(U64)si1);
si0=si0 != si1;
if(si0){
goto L188;
}
si0=l6;
si1=l11;
f3339(i,si0,si1);
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
l11=si0;
L188:;
si0=l6;
si0=i32_load(&i->m0,(U64)si0);
si1=l11;
si2=5U;
si1<<=(si2&31);
si0+=si1;
l11=si0;
si1=l10;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l11;
si1=l4;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l11;
si1=54U;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
si1=1U;
si0+=si1;
l4=si0;
goto L46;
L187:;
si0=l1;
si0=f3430(i,si0);
si0=l4;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+48U);
l10=si1;
si0=si0 > si1;
if(si0){
goto L189;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
l11=si0;
si1=l5;
si1=i32_load(&i->m0,(U64)si1);
si0=si0 != si1;
if(si0){
goto L190;
}
si0=l6;
si1=l11;
f3339(i,si0,si1);
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
l11=si0;
L190:;
si0=l6;
si0=i32_load(&i->m0,(U64)si0);
si1=l11;
si2=5U;
si1<<=(si2&31);
si0+=si1;
l11=si0;
si1=l10;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l11;
si1=l4;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l11;
si1=55U;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
si1=1U;
si0+=si1;
l4=si0;
goto L46;
L189:;
si0=1535600U;
si1=38U;
si2=1535740U;
f673(i,si0,si1,si2);
UNREACHABLE;
L186:;
si0=1535600U;
si1=38U;
si2=1535740U;
f673(i,si0,si1,si2);
UNREACHABLE;
L84:;
si0=l1;
si0=f3430(i,si0);
si0=l11;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+48U);
l10=si1;
si0=si0 > si1;
if(si0){
goto L191;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
si1=l5;
si1=i32_load(&i->m0,(U64)si1);
si0=si0 != si1;
if(si0){
goto L192;
}
si0=l6;
si1=l4;
f3339(i,si0,si1);
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
L192:;
si0=l6;
si0=i32_load(&i->m0,(U64)si0);
si1=l4;
si2=5U;
si1<<=(si2&31);
si0+=si1;
l4=si0;
si1=l10;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l4;
si1=l11;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l4;
si1=32U;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
si1=1U;
si0+=si1;
l4=si0;
goto L46;
L191:;
si0=1535600U;
si1=38U;
si2=1535740U;
f673(i,si0,si1,si2);
UNREACHABLE;
L83:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+48U);
l4=si0;
si0=l1;
si0=f3430(i,si0);
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
si1=61U;
si0=si0 == si1;
if(si0){
goto L194;
}
si0=l4;
si1=l7;
si1=i32_load(&i->m0,(U64)si1);
l10=si1;
si0=si0 > si1;
if(si0){
goto L193;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
l11=si0;
si1=l5;
si1=i32_load(&i->m0,(U64)si1);
si0=si0 != si1;
if(si0){
goto L195;
}
si0=l6;
si1=l11;
f3339(i,si0,si1);
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
l11=si0;
L195:;
si0=l6;
si0=i32_load(&i->m0,(U64)si0);
si1=l11;
si2=5U;
si1<<=(si2&31);
si0+=si1;
l11=si0;
si1=l10;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l11;
si1=l4;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l11;
si1=15U;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
si1=1U;
si0+=si1;
l4=si0;
goto L46;
L194:;
si0=l1;
si0=f3430(i,si0);
si0=l4;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+48U);
l10=si1;
si0=si0 > si1;
if(si0){
goto L196;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
l11=si0;
si1=l5;
si1=i32_load(&i->m0,(U64)si1);
si0=si0 != si1;
if(si0){
goto L197;
}
si0=l6;
si1=l11;
f3339(i,si0,si1);
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
l11=si0;
L197:;
si0=l6;
si0=i32_load(&i->m0,(U64)si0);
si1=l11;
si2=5U;
si1<<=(si2&31);
si0+=si1;
l11=si0;
si1=l10;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l11;
si1=l4;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l11;
si1=53U;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
si1=1U;
si0+=si1;
l4=si0;
goto L46;
L196:;
si0=1535600U;
si1=38U;
si2=1535740U;
f673(i,si0,si1,si2);
UNREACHABLE;
L193:;
si0=1535600U;
si1=38U;
si2=1535740U;
f673(i,si0,si1,si2);
UNREACHABLE;
L82:;
si0=l1;
si0=f3430(i,si0);
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
si1=61U;
si0=si0 == si1;
if(si0){
goto L199;
}
si0=l4;
si1=l7;
si1=i32_load(&i->m0,(U64)si1);
l10=si1;
si0=si0 > si1;
if(si0){
goto L198;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
l11=si0;
si1=l5;
si1=i32_load(&i->m0,(U64)si1);
si0=si0 != si1;
if(si0){
goto L200;
}
si0=l6;
si1=l11;
f3339(i,si0,si1);
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
l11=si0;
L200:;
si0=l6;
si0=i32_load(&i->m0,(U64)si0);
si1=l11;
si2=5U;
si1<<=(si2&31);
si0+=si1;
l11=si0;
si1=l10;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l11;
si1=l4;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l11;
si1=37U;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
si1=1U;
si0+=si1;
l4=si0;
goto L46;
L199:;
si0=l1;
si0=f3430(i,si0);
si0=l4;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+48U);
l10=si1;
si0=si0 > si1;
if(si0){
goto L201;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
l11=si0;
si1=l5;
si1=i32_load(&i->m0,(U64)si1);
si0=si0 != si1;
if(si0){
goto L202;
}
si0=l6;
si1=l11;
f3339(i,si0,si1);
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
l11=si0;
L202:;
si0=l6;
si0=i32_load(&i->m0,(U64)si0);
si1=l11;
si2=5U;
si1<<=(si2&31);
si0+=si1;
l11=si0;
si1=l10;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l11;
si1=l4;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l11;
si1=49U;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
si1=1U;
si0+=si1;
l4=si0;
goto L46;
L201:;
si0=1535600U;
si1=38U;
si2=1535740U;
f673(i,si0,si1,si2);
UNREACHABLE;
L198:;
si0=1535600U;
si1=38U;
si2=1535740U;
f673(i,si0,si1,si2);
UNREACHABLE;
L81:;
si0=l1;
si0=f3430(i,si0);
si0=l4;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+48U);
l10=si1;
si0=si0 > si1;
if(si0){
goto L203;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
l11=si0;
si1=l5;
si1=i32_load(&i->m0,(U64)si1);
si0=si0 != si1;
if(si0){
goto L204;
}
si0=l6;
si1=l11;
f3339(i,si0,si1);
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
l11=si0;
L204:;
si0=l6;
si0=i32_load(&i->m0,(U64)si0);
si1=l11;
si2=5U;
si1<<=(si2&31);
si0+=si1;
l11=si0;
si1=l10;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l11;
si1=l4;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l11;
si1=33U;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
si1=1U;
si0+=si1;
l4=si0;
goto L46;
L203:;
si0=1535600U;
si1=38U;
si2=1535740U;
f673(i,si0,si1,si2);
UNREACHABLE;
L80:;
si0=l4;
si1=l7;
si1=i32_load(&i->m0,(U64)si1);
l10=si1;
si0=si0 > si1;
if(si0){
goto L205;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
l11=si0;
si1=l5;
si1=i32_load(&i->m0,(U64)si1);
si0=si0 != si1;
if(si0){
goto L206;
}
si0=l6;
si1=l11;
f3339(i,si0,si1);
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
l11=si0;
L206:;
si0=l6;
si0=i32_load(&i->m0,(U64)si0);
si1=l11;
si2=5U;
si1<<=(si2&31);
si0+=si1;
l11=si0;
si1=l10;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l11;
si1=l4;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l11;
si1=24U;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
si1=1U;
si0+=si1;
l4=si0;
goto L46;
L205:;
si0=1535600U;
si1=38U;
si2=1535740U;
f673(i,si0,si1,si2);
UNREACHABLE;
L79:;
si0=l1;
si0=f3430(i,si0);
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
si1=61U;
si0=si0 == si1;
if(si0){
goto L208;
}
si0=l4;
si1=l7;
si1=i32_load(&i->m0,(U64)si1);
l10=si1;
si0=si0 > si1;
if(si0){
goto L207;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
l11=si0;
si1=l5;
si1=i32_load(&i->m0,(U64)si1);
si0=si0 != si1;
if(si0){
goto L209;
}
si0=l6;
si1=l11;
f3339(i,si0,si1);
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
l11=si0;
L209:;
si0=l6;
si0=i32_load(&i->m0,(U64)si0);
si1=l11;
si2=5U;
si1<<=(si2&31);
si0+=si1;
l11=si0;
si1=l10;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l11;
si1=l4;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l11;
si1=38U;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
si1=1U;
si0+=si1;
l4=si0;
goto L46;
L208:;
si0=l1;
si0=f3430(i,si0);
si0=l4;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+48U);
l10=si1;
si0=si0 > si1;
if(si0){
goto L210;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
l11=si0;
si1=l5;
si1=i32_load(&i->m0,(U64)si1);
si0=si0 != si1;
if(si0){
goto L211;
}
si0=l6;
si1=l11;
f3339(i,si0,si1);
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
l11=si0;
L211:;
si0=l6;
si0=i32_load(&i->m0,(U64)si0);
si1=l11;
si2=5U;
si1<<=(si2&31);
si0+=si1;
l11=si0;
si1=l10;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l11;
si1=l4;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l11;
si1=50U;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
si1=1U;
si0+=si1;
l4=si0;
goto L46;
L210:;
si0=1535600U;
si1=38U;
si2=1535740U;
f673(i,si0,si1,si2);
UNREACHABLE;
L207:;
si0=1535600U;
si1=38U;
si2=1535740U;
f673(i,si0,si1,si2);
UNREACHABLE;
L78:;
si0=l1;
si0=f3430(i,si0);
si0=l4;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+48U);
l10=si1;
si0=si0 > si1;
if(si0){
goto L212;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
l11=si0;
si1=l5;
si1=i32_load(&i->m0,(U64)si1);
si0=si0 != si1;
if(si0){
goto L213;
}
si0=l6;
si1=l11;
f3339(i,si0,si1);
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
l11=si0;
L213:;
si0=l6;
si0=i32_load(&i->m0,(U64)si0);
si1=l11;
si2=5U;
si1<<=(si2&31);
si0+=si1;
l11=si0;
si1=l10;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l11;
si1=l4;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l11;
si1=34U;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
si1=1U;
si0+=si1;
l4=si0;
goto L46;
L212:;
si0=1535600U;
si1=38U;
si2=1535740U;
f673(i,si0,si1,si2);
UNREACHABLE;
L77:;
si0=l4;
si1=l7;
si1=i32_load(&i->m0,(U64)si1);
l10=si1;
si0=si0 > si1;
if(si0){
goto L214;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
l11=si0;
si1=l5;
si1=i32_load(&i->m0,(U64)si1);
si0=si0 != si1;
if(si0){
goto L215;
}
si0=l6;
si1=l11;
f3339(i,si0,si1);
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
l11=si0;
L215:;
si0=l6;
si0=i32_load(&i->m0,(U64)si0);
si1=l11;
si2=5U;
si1<<=(si2&31);
si0+=si1;
l11=si0;
si1=l10;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l11;
si1=l4;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l11;
si1=25U;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
si1=1U;
si0+=si1;
l4=si0;
goto L46;
L214:;
si0=1535600U;
si1=38U;
si2=1535740U;
f673(i,si0,si1,si2);
UNREACHABLE;
L76:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
si1=-48U;
si0+=si1;
si1=10U;
si0=si0 < si1;
if(si0){
goto L218;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+48U);
l4=si0;
si0=l1;
si0=f3430(i,si0);
si0=l1;
si1=1536180U;
si0=f3518(i,si0,si1);
if(si0){
goto L216;
}
si0=l4;
si1=l7;
si1=i32_load(&i->m0,(U64)si1);
l10=si1;
si0=si0 > si1;
if(si0){
goto L217;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
l11=si0;
si1=l5;
si1=i32_load(&i->m0,(U64)si1);
si0=si0 != si1;
if(si0){
goto L219;
}
si0=l6;
si1=l11;
f3339(i,si0,si1);
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
l11=si0;
L219:;
si0=l6;
si0=i32_load(&i->m0,(U64)si0);
si1=l11;
si2=5U;
si1<<=(si2&31);
si0+=si1;
l11=si0;
si1=l10;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l11;
si1=l4;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l11;
si1=27U;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
si1=1U;
si0+=si1;
l4=si0;
goto L46;
L218:;
si0=l2;
si1=16U;
si0+=si1;
si1=l1;
f3429(i,si0,si1);
si0=l2;
si0=i32_load(&i->m0,(U64)si0+36U);
l11=si0;
si0=l2;
sj0=i64_load(&i->m0,(U64)si0+28U);
l18=sj0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+24U);
l13=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+20U);
l10=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+16U);
l14=si0;
si1=98U;
si0=si0 == si1;
if(si0){
goto L61;
}
si0=l2;
sj0=i64_load(&i->m0,(U64)si0+40U);
l20=sj0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
si1=l5;
si1=i32_load(&i->m0,(U64)si1);
si0=si0 != si1;
if(si0){
goto L220;
}
si0=l6;
si1=l4;
f3339(i,si0,si1);
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
L220:;
si0=l6;
si0=i32_load(&i->m0,(U64)si0);
si1=l4;
si2=5U;
si1<<=(si2&31);
si0+=si1;
l4=si0;
sj1=l20;
i64_store(&i->m0,(U64)si0+24U,sj1);
si0=l4;
si1=l11;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l4;
sj1=l18;
i64_store(&i->m0,(U64)si0+12U,sj1);
si0=l4;
si1=l13;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l4;
si1=l10;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l4;
si1=l14;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
si1=1U;
si0+=si1;
l4=si0;
goto L46;
L217:;
si0=1535600U;
si1=38U;
si2=1535740U;
f673(i,si0,si1,si2);
UNREACHABLE;
L216:;
si0=l1;
si0=f3430(i,si0);
si0=l1;
si0=f3430(i,si0);
si0=l4;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+48U);
l10=si1;
si0=si0 > si1;
if(si0){
goto L221;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
l11=si0;
si1=l5;
si1=i32_load(&i->m0,(U64)si1);
si0=si0 != si1;
if(si0){
goto L222;
}
si0=l6;
si1=l11;
f3339(i,si0,si1);
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
l11=si0;
L222:;
si0=l6;
si0=i32_load(&i->m0,(U64)si0);
si1=l11;
si2=5U;
si1<<=(si2&31);
si0+=si1;
l11=si0;
si1=l10;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l11;
si1=l4;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l11;
si1=57U;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
si1=1U;
si0+=si1;
l4=si0;
goto L46;
L221:;
si0=1535600U;
si1=38U;
si2=1535740U;
f673(i,si0,si1,si2);
UNREACHABLE;
L75:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+48U);
l4=si0;
si0=l1;
si0=f3430(i,si0);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+44U);
if(si0){
goto L43;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+48U);
l11=si0;
si0=l1;
si1=1U;
i32_store8(&i->m0,(U64)si0+52U,si1);
si0=l4;
si1=l11;
si0=si0 > si1;
if(si0){
goto L223;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
l10=si0;
si1=l5;
si1=i32_load(&i->m0,(U64)si1);
si0=si0 != si1;
if(si0){
goto L224;
}
si0=l6;
si1=l10;
f3339(i,si0,si1);
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
l10=si0;
L224:;
si0=l6;
si0=i32_load(&i->m0,(U64)si0);
si1=l10;
si2=5U;
si1<<=(si2&31);
si0+=si1;
l10=si0;
si1=l11;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l10;
si1=l4;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l10;
si1=7U;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
si1=1U;
si0+=si1;
l4=si0;
goto L46;
L223:;
si0=1535600U;
si1=38U;
si2=1535740U;
f673(i,si0,si1,si2);
UNREACHABLE;
L74:;
L225:;
{
si0=l1;
si0=f3430(i,si0);
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
si1=-9U;
si0+=si1;
l4=si0;
si1=23U;
si0=si0 > si1;
if(si0){
goto L43;
}
si0=1U;
si1=l4;
si0<<=(si1&31);
si1=8388617U;
si0&=si1;
si0=!(si0);
if(si0){
goto L43;
}
goto L225;
}
L73:;
si0=l7;
si0=i32_load(&i->m0,(U64)si0);
l11=si0;
si0=13U;
l10=si0;
goto L42;
L72:;
si0=l1;
si0=f3430(i,si0);
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
si1=1114112U;
si0=si0 != si1;
if(si0){
goto L43;
}
si0=l7;
si0=i32_load(&i->m0,(U64)si0);
l11=si0;
si0=14U;
l10=si0;
goto L42;
L71:;
si0=1997200U;
si1=l4;
si0=f15116(i,si0,si1);
if(si0){
goto L226;
}
si0=l1;
si0=f3430(i,si0);
l13=si0;
si1=1114112U;
si0=si0 != si1;
if(si0){
goto L51;
}
si0=1535756U;
si1=43U;
si2=1536188U;
f673(i,si0,si1,si2);
UNREACHABLE;
L226:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+48U);
l10=si0;
si0=l1;
si0=f3430(i,si0);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+48U);
l13=si0;
si0=l2;
si1=0U;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l4;
si1=128U;
si0=si0 < si1;
if(si0){
goto L230;
}
si0=l4;
si1=2048U;
si0=si0 < si1;
if(si0){
goto L229;
}
si0=l4;
si1=65536U;
si0=si0 >= si1;
if(si0){
goto L228;
}
si0=l2;
si1=l4;
si2=63U;
si1&=si2;
si2=128U;
si1|=si2;
i32_store8(&i->m0,(U64)si0+18U,si1);
si0=l2;
si1=l4;
si2=12U;
si1>>=(si2&31);
si2=224U;
si1|=si2;
i32_store8(&i->m0,(U64)si0+16U,si1);
si0=l2;
si1=l4;
si2=6U;
si1>>=(si2&31);
si2=63U;
si1&=si2;
si2=128U;
si1|=si2;
i32_store8(&i->m0,(U64)si0+17U,si1);
si0=3U;
l11=si0;
goto L227;
L230:;
si0=l2;
si1=l4;
i32_store8(&i->m0,(U64)si0+16U,si1);
si0=1U;
l11=si0;
goto L227;
L229:;
si0=l2;
si1=l4;
si2=63U;
si1&=si2;
si2=128U;
si1|=si2;
i32_store8(&i->m0,(U64)si0+17U,si1);
si0=l2;
si1=l4;
si2=6U;
si1>>=(si2&31);
si2=192U;
si1|=si2;
i32_store8(&i->m0,(U64)si0+16U,si1);
si0=2U;
l11=si0;
goto L227;
L228:;
si0=l2;
si1=l4;
si2=63U;
si1&=si2;
si2=128U;
si1|=si2;
i32_store8(&i->m0,(U64)si0+19U,si1);
si0=l2;
si1=l4;
si2=18U;
si1>>=(si2&31);
si2=240U;
si1|=si2;
i32_store8(&i->m0,(U64)si0+16U,si1);
si0=l2;
si1=l4;
si2=6U;
si1>>=(si2&31);
si2=63U;
si1&=si2;
si2=128U;
si1|=si2;
i32_store8(&i->m0,(U64)si0+18U,si1);
si0=l2;
si1=l4;
si2=12U;
si1>>=(si2&31);
si2=63U;
si1&=si2;
si2=128U;
si1|=si2;
i32_store8(&i->m0,(U64)si0+17U,si1);
si0=4U;
l11=si0;
L227:;
si0=l2;
si1=8U;
si0+=si1;
si1=l11;
si2=0U;
f3331(i,si0,si1,si2);
si0=l2;
si0=i32_load(&i->m0,(U64)si0+12U);
l14=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+8U);
si1=l2;
si2=16U;
si1+=si2;
si2=l11;
si0=f15390(i,si0,si1,si2);
l15=si0;
si0=l10;
si1=l13;
si0=si0 > si1;
if(si0){
goto L231;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
si1=l5;
si1=i32_load(&i->m0,(U64)si1);
si0=si0 != si1;
if(si0){
goto L232;
}
si0=l6;
si1=l4;
f3339(i,si0,si1);
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
L232:;
si0=l6;
si0=i32_load(&i->m0,(U64)si0);
si1=l4;
si2=5U;
si1<<=(si2&31);
si0+=si1;
l4=si0;
si1=l13;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l4;
si1=l10;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l4;
si1=l11;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l4;
si1=l14;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l4;
si1=l15;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l4;
si1=2U;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
si1=1U;
si0+=si1;
l4=si0;
goto L46;
L231:;
si0=1535600U;
si1=38U;
si2=1535740U;
f673(i,si0,si1,si2);
UNREACHABLE;
L70:;
si0=l2;
si1=16U;
si0+=si1;
si1=l1;
f3429(i,si0,si1);
si0=l2;
si0=i32_load(&i->m0,(U64)si0+36U);
l11=si0;
si0=l2;
sj0=i64_load(&i->m0,(U64)si0+28U);
l18=sj0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+24U);
l13=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+20U);
l10=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+16U);
l14=si0;
si1=98U;
si0=si0 == si1;
if(si0){
goto L61;
}
si0=l2;
sj0=i64_load(&i->m0,(U64)si0+40U);
l20=sj0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
si1=l5;
si1=i32_load(&i->m0,(U64)si1);
si0=si0 != si1;
if(si0){
goto L233;
}
si0=l6;
si1=l4;
f3339(i,si0,si1);
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
L233:;
si0=l6;
si0=i32_load(&i->m0,(U64)si0);
si1=l4;
si2=5U;
si1<<=(si2&31);
si0+=si1;
l4=si0;
sj1=l20;
i64_store(&i->m0,(U64)si0+24U,sj1);
si0=l4;
si1=l10;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l4;
si1=l14;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=20U;
si0+=si1;
si1=l11;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=12U;
si0+=si1;
sj1=l18;
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=8U;
si0+=si1;
si1=l13;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
si1=1U;
si0+=si1;
l4=si0;
goto L46;
L65:;
si0=l2;
si1=64U;
si0+=si1;
si1=l4;
f3460(i,si0,si1);
si0=l2;
si0=i32_load(&i->m0,(U64)si0+64U);
l4=si0;
if(si0){
goto L234;
}
si0=l2;
si1=16U;
si0+=si1;
si1=l1;
si2=l2;
si2=i32_load8_u(&i->m0,(U64)si2+68U);
f3433(i,si0,si1,si2);
goto L47;
L234:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+68U);
si0=!(si0);
if(si0){
goto L48;
}
si0=l4;
f15271(i,si0);
goto L48;
L64:;
si0=l11;
si1=1114112U;
si0=si0 == si1;
if(si0){
goto L48;
}
L63:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+8U);
si1=-34U;
si0+=si1;
switch(si0){
case 0:
goto L235;
case 1:
goto L48;
case 2:
goto L48;
case 3:
goto L48;
case 4:
goto L48;
case 5:
goto L235;
default:
goto L48;
}
L235:;
si0=l2;
si1=l11;
i32_store(&i->m0,(U64)si0+52U,si1);
si0=l2;
si1=l4;
i32_store(&i->m0,(U64)si0+48U,si1);
si0=l2;
si1=64U;
si0+=si1;
si1=l2;
si2=48U;
si1+=si2;
f3461(i,si0,si1);
si0=l2;
si0=i32_load(&i->m0,(U64)si0+64U);
l4=si0;
if(si0){
goto L236;
}
si0=l2;
si1=16U;
si0+=si1;
si1=l1;
si2=l2;
si2=i32_load8_u(&i->m0,(U64)si2+68U);
f3433(i,si0,si1,si2);
goto L47;
L236:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+68U);
si0=!(si0);
if(si0){
goto L48;
}
si0=l4;
f15271(i,si0);
goto L48;
L62:;
si0=l1;
si0=i32_load8_u(&i->m0,(U64)si0+52U);
if(si0){
goto L50;
}
si0=l1;
si1=1U;
i32_store8(&i->m0,(U64)si0+52U,si1);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+40U);
l4=si0;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+36U);
si0=si0 != si1;
if(si0){
goto L237;
}
si0=l6;
si1=l4;
f3339(i,si0,si1);
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
L237:;
si0=l6;
si0=i32_load(&i->m0,(U64)si0);
si1=l4;
si2=5U;
si1<<=(si2&31);
si0+=si1;
l21=si0;
si1=7U;
i32_store(&i->m0,(U64)si0,si1);
si0=0U;
l4=si0;
goto L49;
L61:;
si0=l10;
si1=16U;
si0=si0 == si1;
if(si0){
goto L43;
}
goto L42;
L60:;
si0=1535600U;
si1=38U;
si2=1535740U;
f673(i,si0,si1,si2);
UNREACHABLE;
L59:;
si0=1535600U;
si1=38U;
si2=1535740U;
f673(i,si0,si1,si2);
UNREACHABLE;
L58:;
si0=1535600U;
si1=38U;
si2=1535740U;
f673(i,si0,si1,si2);
UNREACHABLE;
L57:;
si0=1535600U;
si1=38U;
si2=1535740U;
f673(i,si0,si1,si2);
UNREACHABLE;
L56:;
si0=1535600U;
si1=38U;
si2=1535740U;
f673(i,si0,si1,si2);
UNREACHABLE;
L55:;
si0=1535600U;
si1=38U;
si2=1535740U;
f673(i,si0,si1,si2);
UNREACHABLE;
L54:;
si0=1535600U;
si1=38U;
si2=1535740U;
f673(i,si0,si1,si2);
UNREACHABLE;
L53:;
si0=1535600U;
si1=38U;
si2=1535740U;
f673(i,si0,si1,si2);
UNREACHABLE;
L52:;
si0=1535600U;
si1=38U;
si2=1535740U;
f673(i,si0,si1,si2);
UNREACHABLE;
L51:;
si0=l7;
si0=i32_load(&i->m0,(U64)si0);
l11=si0;
si0=11U;
l10=si0;
goto L42;
L50:;
si0=1U;
l4=si0;
L49:;
L238:;
{
si0=l4;
switch(si0){
case 0:
goto L240;
case 1:
goto L239;
default:
goto L239;
}
L240:;
si0=l21;
si1=l11;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l21;
si1=l11;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l3;
si1=l3;
si1=i32_load(&i->m0,(U64)si1);
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=1U;
l4=si0;
goto L238;
L239:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+28U);
l4=si0;
switch(si0){
case 0:
goto L241;
case 1:
goto L243;
default:
goto L242;
}
L243:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
si1=l5;
si1=i32_load(&i->m0,(U64)si1);
si0=si0 != si1;
if(si0){
goto L244;
}
si0=l6;
si1=l4;
f3339(i,si0,si1);
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
L244:;
si0=l6;
si0=i32_load(&i->m0,(U64)si0);
si1=l4;
si2=5U;
si1<<=(si2&31);
si0+=si1;
l4=si0;
si1=l11;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l4;
si1=l11;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l4;
si1=10U;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
si1=1U;
si0+=si1;
l4=si0;
goto L46;
L242:;
si0=l1;
si1=l4;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0+28U,si1);
L241:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
si1=l5;
si1=i32_load(&i->m0,(U64)si1);
si0=si0 != si1;
if(si0){
goto L245;
}
si0=l6;
si1=l4;
f3339(i,si0,si1);
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
L245:;
si0=l6;
si0=i32_load(&i->m0,(U64)si0);
si1=l4;
si2=5U;
si1<<=(si2&31);
si0+=si1;
l21=si0;
si1=9U;
i32_store(&i->m0,(U64)si0,si1);
si0=0U;
l4=si0;
goto L238;
}
L48:;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=l7;
si0=i32_load(&i->m0,(U64)si0);
l10=si0;
si0=8U;
si0=f15269(i,si0);
l13=si0;
si0=!(si0);
if(si0){
goto L248;
}
si0=l2;
sj1=8ULL;
i64_store(&i->m0,(U64)si0+52U,sj1);
si0=l2;
si1=l13;
i32_store(&i->m0,(U64)si0+48U,si1);
si0=0U;
l11=si0;
si0=l10;
l14=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
si1=1114112U;
si0=si0 == si1;
if(si0){
goto L246;
}
L249:;
{
si0=l4;
si1=-97U;
si0+=si1;
si1=26U;
si0=si0 < si1;
if(si0){
goto L250;
}
si0=l4;
si1=65U;
si0=si0 < si1;
if(si0){
goto L252;
}
si0=l4;
si1=91U;
si0=si0 < si1;
if(si0){
goto L250;
}
si0=l4;
si1=95U;
si0=si0 == si1;
if(si0){
goto L250;
}
goto L251;
L252:;
si0=l4;
si1=-48U;
si0+=si1;
si1=10U;
si0=si0 < si1;
if(si0){
goto L250;
}
L251:;
si0=2082400U;
si1=l4;
si0=f15119(i,si0,si1);
if(si0){
goto L250;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0+56U);
l11=si0;
goto L247;
L250:;
si0=l1;
si0=f3430(i,si0);
l4=si0;
si1=1114112U;
si0=si0 != si1;
if(si0){
goto L253;
}
si0=1535756U;
si1=43U;
si2=1535800U;
f673(i,si0,si1,si2);
UNREACHABLE;
L253:;
si0=l4;
si1=128U;
si0=si0 < si1;
if(si0){
goto L257;
}
si0=l2;
si1=0U;
i32_store(&i->m0,(U64)si0+64U,si1);
si0=l4;
si1=2048U;
si0=si0 < si1;
if(si0){
goto L256;
}
si0=l4;
si1=65536U;
si0=si0 >= si1;
if(si0){
goto L258;
}
si0=l2;
si1=l4;
si2=63U;
si1&=si2;
si2=128U;
si1|=si2;
i32_store8(&i->m0,(U64)si0+66U,si1);
si0=l2;
si1=l4;
si2=12U;
si1>>=(si2&31);
si2=224U;
si1|=si2;
i32_store8(&i->m0,(U64)si0+64U,si1);
si0=l2;
si1=l4;
si2=6U;
si1>>=(si2&31);
si2=63U;
si1&=si2;
si2=128U;
si1|=si2;
i32_store8(&i->m0,(U64)si0+65U,si1);
si0=3U;
l4=si0;
goto L255;
L258:;
si0=l2;
si1=l4;
si2=63U;
si1&=si2;
si2=128U;
si1|=si2;
i32_store8(&i->m0,(U64)si0+67U,si1);
si0=l2;
si1=l4;
si2=18U;
si1>>=(si2&31);
si2=240U;
si1|=si2;
i32_store8(&i->m0,(U64)si0+64U,si1);
si0=l2;
si1=l4;
si2=6U;
si1>>=(si2&31);
si2=63U;
si1&=si2;
si2=128U;
si1|=si2;
i32_store8(&i->m0,(U64)si0+66U,si1);
si0=l2;
si1=l4;
si2=12U;
si1>>=(si2&31);
si2=63U;
si1&=si2;
si2=128U;
si1|=si2;
i32_store8(&i->m0,(U64)si0+65U,si1);
si0=4U;
l4=si0;
goto L255;
L257:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+56U);
l11=si0;
si1=l2;
si1=i32_load(&i->m0,(U64)si1+52U);
si0=si0 != si1;
if(si0){
goto L259;
}
si0=l2;
si1=48U;
si0+=si1;
si1=l11;
f3344(i,si0,si1);
si0=l2;
si0=i32_load(&i->m0,(U64)si0+56U);
l11=si0;
L259:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+48U);
si1=l11;
si0+=si1;
si1=l4;
i32_store8(&i->m0,(U64)si0,si1);
si0=l2;
si0=i32_load(&i->m0,(U64)si0+56U);
si1=1U;
si0+=si1;
l11=si0;
goto L254;
L256:;
si0=l2;
si1=l4;
si2=63U;
si1&=si2;
si2=128U;
si1|=si2;
i32_store8(&i->m0,(U64)si0+65U,si1);
si0=l2;
si1=l4;
si2=6U;
si1>>=(si2&31);
si2=192U;
si1|=si2;
i32_store8(&i->m0,(U64)si0+64U,si1);
si0=2U;
l4=si0;
L255:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+52U);
si1=l2;
si1=i32_load(&i->m0,(U64)si1+56U);
l11=si1;
si0-=si1;
si1=l4;
si0=si0 >= si1;
if(si0){
goto L260;
}
si0=l2;
si1=48U;
si0+=si1;
si1=l11;
si2=l4;
f3355(i,si0,si1,si2);
si0=l2;
si0=i32_load(&i->m0,(U64)si0+56U);
l11=si0;
L260:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+48U);
si1=l11;
si0+=si1;
si1=l2;
si2=64U;
si1+=si2;
si2=l4;
si0=f15390(i,si0,si1,si2);
si0=l11;
si1=l4;
si0+=si1;
l11=si0;
L254:;
si0=l2;
si1=l11;
i32_store(&i->m0,(U64)si0+56U,si1);
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
si1=1114112U;
si0=si0 != si1;
if(si0){
goto L249;
}
goto L247;
}
L248:;
si0=1U;
si1=8U;
f52(i,si0,si1);
UNREACHABLE;
L247:;
si0=l7;
si0=i32_load(&i->m0,(U64)si0);
l14=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+48U);
l13=si0;
L246:;
si0=1535576U;
si1=l13;
si2=l11;
si0=f3466(i,si0,si1,si2);
l13=si0;
si0=!(si0);
if(si0){
goto L263;
}
si0=7U;
l4=si0;
si0=l13;
si0=i32_load(&i->m0,(U64)si0);
l12=si0;
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
goto L361;
case 1:
goto L360;
case 2:
goto L359;
case 3:
goto L358;
case 4:
goto L357;
case 5:
goto L264;
case 6:
goto L356;
case 7:
goto L355;
case 8:
goto L354;
case 9:
goto L353;
case 10:
goto L352;
case 11:
goto L351;
case 12:
goto L350;
case 13:
goto L349;
case 14:
goto L348;
case 15:
goto L347;
case 16:
goto L346;
case 17:
goto L345;
case 18:
goto L344;
case 19:
goto L343;
case 20:
goto L342;
case 21:
goto L341;
case 22:
goto L340;
case 23:
goto L339;
case 24:
goto L338;
case 25:
goto L337;
case 26:
goto L336;
case 27:
goto L335;
case 28:
goto L334;
case 29:
goto L333;
case 30:
goto L332;
case 31:
goto L331;
case 32:
goto L330;
case 33:
goto L329;
case 34:
goto L328;
case 35:
goto L327;
case 36:
goto L326;
case 37:
goto L325;
case 38:
goto L324;
case 39:
goto L323;
case 40:
goto L322;
case 41:
goto L321;
case 42:
goto L320;
case 43:
goto L319;
case 44:
goto L318;
case 45:
goto L317;
case 46:
goto L316;
case 47:
goto L315;
case 48:
goto L314;
case 49:
goto L313;
case 50:
goto L312;
case 51:
goto L311;
case 52:
goto L310;
case 53:
goto L309;
case 54:
goto L308;
case 55:
goto L307;
case 56:
goto L306;
case 57:
goto L305;
case 58:
goto L304;
case 59:
goto L303;
case 60:
goto L302;
case 61:
goto L301;
case 62:
goto L300;
case 63:
goto L299;
case 64:
goto L298;
case 65:
goto L297;
case 66:
goto L296;
case 67:
goto L295;
case 68:
goto L294;
case 69:
goto L293;
case 70:
goto L292;
case 71:
goto L291;
case 72:
goto L290;
case 73:
goto L289;
case 74:
goto L288;
case 75:
goto L287;
case 76:
goto L286;
case 77:
goto L285;
case 78:
goto L284;
case 79:
goto L283;
case 80:
goto L282;
case 81:
goto L281;
case 82:
goto L280;
case 83:
goto L279;
case 84:
goto L278;
case 85:
goto L277;
case 86:
goto L276;
case 87:
goto L275;
case 88:
goto L274;
case 89:
goto L273;
case 90:
goto L272;
case 91:
goto L271;
case 92:
goto L270;
case 93:
goto L269;
case 94:
goto L268;
case 95:
goto L267;
default:
goto L361;
}
L361:;
si0=l2;
si1=64U;
si0+=si1;
si1=l13;
si2=4U;
si1+=si2;
f68(i,si0,si1);
si0=l2;
sj0=i64_load(&i->m0,(U64)si0+68U);
l18=sj0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+64U);
l11=si0;
si0=2U;
l4=si0;
goto L264;
L360:;
si0=l13;
sj0=i64_load8_u(&i->m0,(U64)si0+16U);
l20=sj0;
si0=l12;
if(si0){
goto L362;
}
si0=l13;
sj0=i64_load(&i->m0,(U64)si0+8U);
l18=sj0;
si0=0U;
l4=si0;
sj0=l20;
sd0=f64_reinterpret_i64(sj0);
l22=sd0;
goto L265;
L362:;
si0=l2;
si1=64U;
si0+=si1;
si1=l13;
si2=4U;
si1+=si2;
f3378(i,si0,si1);
si0=l2;
sj0=i64_load(&i->m0,(U64)si0+68U);
l18=sj0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+64U);
l11=si0;
si0=1U;
l4=si0;
sj0=l20;
sd0=f64_reinterpret_i64(sj0);
l22=sd0;
goto L264;
L359:;
si0=l13;
sj0=i64_load(&i->m0,(U64)si0+8U);
l18=sj0;
si0=4U;
l4=si0;
goto L265;
L358:;
si0=l13;
sd0=f64_load(&i->m0,(U64)si0+16U);
l22=sd0;
si0=l13;
sj0=i64_load(&i->m0,(U64)si0+8U);
l18=sj0;
si0=5U;
l4=si0;
goto L265;
L357:;
si0=l2;
si1=64U;
si0+=si1;
si1=l13;
si2=4U;
si1+=si2;
f68(i,si0,si1);
si0=l2;
sj0=i64_load(&i->m0,(U64)si0+68U);
l18=sj0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+64U);
l11=si0;
si0=l13;
sj0=i64_load16_u(&i->m0,(U64)si0+16U);
sd0=f64_reinterpret_i64(sj0);
l22=sd0;
si0=6U;
l4=si0;
goto L264;
L356:;
si0=8U;
l4=si0;
goto L266;
L355:;
si0=9U;
l4=si0;
goto L266;
L354:;
si0=10U;
l4=si0;
goto L266;
L353:;
si0=11U;
l4=si0;
goto L266;
L352:;
si0=12U;
l4=si0;
goto L266;
L351:;
si0=13U;
l4=si0;
goto L266;
L350:;
si0=14U;
l4=si0;
goto L266;
L349:;
si0=15U;
l4=si0;
goto L266;
L348:;
si0=16U;
l4=si0;
goto L266;
L347:;
si0=17U;
l4=si0;
goto L266;
L346:;
si0=18U;
l4=si0;
goto L266;
L345:;
si0=19U;
l4=si0;
goto L266;
L344:;
si0=20U;
l4=si0;
goto L266;
L343:;
si0=21U;
l4=si0;
goto L266;
L342:;
si0=22U;
l4=si0;
goto L266;
L341:;
si0=23U;
l4=si0;
goto L266;
L340:;
si0=24U;
l4=si0;
goto L266;
L339:;
si0=25U;
l4=si0;
goto L266;
L338:;
si0=26U;
l4=si0;
goto L266;
L337:;
si0=27U;
l4=si0;
goto L266;
L336:;
si0=28U;
l4=si0;
goto L266;
L335:;
si0=29U;
l4=si0;
goto L266;
L334:;
si0=30U;
l4=si0;
goto L266;
L333:;
si0=31U;
l4=si0;
goto L266;
L332:;
si0=32U;
l4=si0;
goto L266;
L331:;
si0=33U;
l4=si0;
goto L266;
L330:;
si0=34U;
l4=si0;
goto L266;
L329:;
si0=35U;
l4=si0;
goto L266;
L328:;
si0=36U;
l4=si0;
goto L266;
L327:;
si0=37U;
l4=si0;
goto L266;
L326:;
si0=38U;
l4=si0;
goto L266;
L325:;
si0=39U;
l4=si0;
goto L266;
L324:;
si0=40U;
l4=si0;
goto L266;
L323:;
si0=41U;
l4=si0;
goto L266;
L322:;
si0=42U;
l4=si0;
goto L266;
L321:;
si0=43U;
l4=si0;
goto L266;
L320:;
si0=44U;
l4=si0;
goto L266;
L319:;
si0=45U;
l4=si0;
goto L266;
L318:;
si0=46U;
l4=si0;
goto L266;
L317:;
si0=47U;
l4=si0;
goto L266;
L316:;
si0=48U;
l4=si0;
goto L266;
L315:;
si0=49U;
l4=si0;
goto L266;
L314:;
si0=50U;
l4=si0;
goto L266;
L313:;
si0=51U;
l4=si0;
goto L266;
L312:;
si0=52U;
l4=si0;
goto L266;
L311:;
si0=53U;
l4=si0;
goto L266;
L310:;
si0=54U;
l4=si0;
goto L266;
L309:;
si0=55U;
l4=si0;
goto L266;
L308:;
si0=56U;
l4=si0;
goto L266;
L307:;
si0=57U;
l4=si0;
goto L266;
L306:;
si0=58U;
l4=si0;
goto L266;
L305:;
si0=59U;
l4=si0;
goto L266;
L304:;
si0=60U;
l4=si0;
goto L266;
L303:;
si0=61U;
l4=si0;
goto L266;
L302:;
si0=62U;
l4=si0;
goto L266;
L301:;
si0=63U;
l4=si0;
goto L266;
L300:;
si0=64U;
l4=si0;
goto L266;
L299:;
si0=65U;
l4=si0;
goto L266;
L298:;
si0=66U;
l4=si0;
goto L266;
L297:;
si0=67U;
l4=si0;
goto L266;
L296:;
si0=68U;
l4=si0;
goto L266;
L295:;
si0=69U;
l4=si0;
goto L266;
L294:;
si0=70U;
l4=si0;
goto L266;
L293:;
si0=71U;
l4=si0;
goto L266;
L292:;
si0=72U;
l4=si0;
goto L266;
L291:;
si0=73U;
l4=si0;
goto L266;
L290:;
si0=74U;
l4=si0;
goto L266;
L289:;
si0=75U;
l4=si0;
goto L266;
L288:;
si0=76U;
l4=si0;
goto L266;
L287:;
si0=77U;
l4=si0;
goto L266;
L286:;
si0=78U;
l4=si0;
goto L266;
L285:;
si0=79U;
l4=si0;
goto L266;
L284:;
si0=80U;
l4=si0;
goto L266;
L283:;
si0=81U;
l4=si0;
goto L266;
L282:;
si0=82U;
l4=si0;
goto L266;
L281:;
si0=83U;
l4=si0;
goto L266;
L280:;
si0=84U;
l4=si0;
goto L266;
L279:;
si0=85U;
l4=si0;
goto L266;
L278:;
si0=86U;
l4=si0;
goto L266;
L277:;
si0=87U;
l4=si0;
goto L266;
L276:;
si0=88U;
l4=si0;
goto L266;
L275:;
si0=89U;
l4=si0;
goto L266;
L274:;
si0=90U;
l4=si0;
goto L266;
L273:;
si0=91U;
l4=si0;
goto L266;
L272:;
si0=92U;
l4=si0;
goto L266;
L271:;
si0=93U;
l4=si0;
goto L266;
L270:;
si0=94U;
l4=si0;
goto L266;
L269:;
si0=95U;
l4=si0;
goto L266;
L268:;
si0=96U;
l4=si0;
goto L266;
L267:;
si0=97U;
l4=si0;
L266:;
L265:;
L264:;
si0=l10;
si1=l14;
si0=si0 <= si1;
if(si0){
goto L262;
}
si0=1535600U;
si1=38U;
si2=1535740U;
f673(i,si0,si1,si2);
UNREACHABLE;
L263:;
si0=l10;
si1=l14;
si0=si0 > si1;
if(si0){
goto L261;
}
si0=l9;
si1=l2;
sj1=i64_load(&i->m0,(U64)si1+48U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l9;
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
si1=l14;
i32_store(&i->m0,(U64)si0+44U,si1);
si0=l2;
si1=l10;
i32_store(&i->m0,(U64)si0+40U,si1);
si0=l2;
si1=2U;
i32_store(&i->m0,(U64)si0+16U,si1);
goto L47;
L262:;
si0=l2;
si1=l14;
i32_store(&i->m0,(U64)si0+44U,si1);
si0=l2;
si1=l10;
i32_store(&i->m0,(U64)si0+40U,si1);
si0=l2;
sd1=l22;
f64_store(&i->m0,(U64)si0+32U,sd1);
si0=l2;
sj1=l18;
i64_store(&i->m0,(U64)si0+24U,sj1);
si0=l2;
si1=l11;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l2;
si1=l4;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l2;
si0=i32_load(&i->m0,(U64)si0+52U);
si0=!(si0);
if(si0){
goto L47;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0+48U);
f15271(i,si0);
goto L47;
L261:;
si0=1535600U;
si1=38U;
si2=1535740U;
f673(i,si0,si1,si2);
UNREACHABLE;
L47:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+36U);
l11=si0;
si0=l2;
sj0=i64_load(&i->m0,(U64)si0+28U);
l18=sj0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+24U);
l13=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+20U);
l10=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+16U);
l14=si0;
si1=98U;
si0=si0 == si1;
if(si0){
goto L45;
}
si0=l2;
sj0=i64_load(&i->m0,(U64)si0+40U);
l20=sj0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
si1=l5;
si1=i32_load(&i->m0,(U64)si1);
si0=si0 != si1;
if(si0){
goto L363;
}
si0=l6;
si1=l4;
f3339(i,si0,si1);
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
L363:;
si0=l6;
si0=i32_load(&i->m0,(U64)si0);
si1=l4;
si2=5U;
si1<<=(si2&31);
si0+=si1;
l4=si0;
sj1=l20;
i64_store(&i->m0,(U64)si0+24U,sj1);
si0=l4;
si1=l10;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l4;
si1=l14;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=20U;
si0+=si1;
si1=l11;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=12U;
si0+=si1;
sj1=l18;
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=8U;
si0+=si1;
si1=l13;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
si1=1U;
si0+=si1;
l4=si0;
L46:;
si0=l3;
si1=l4;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si0=!(si0);
if(si0){
goto L3;
}
goto L2;
L45:;
si0=l13;
l17=si0;
sj0=l18;
l19=sj0;
si0=l10;
si1=16U;
si0=si0 == si1;
if(si0){
goto L43;
}
goto L42;
L44:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+44U);
l4=si0;
if(si0){
goto L364;
}
si0=l7;
si0=i32_load(&i->m0,(U64)si0);
l11=si0;
si0=2U;
l10=si0;
goto L42;
L364:;
si0=l1;
si1=l4;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0+44U,si1);
L43:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
si0=!(si0);
if(si0){
goto L3;
}
goto L2;
L42:;
}
si0=l0;
si1=l10;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=98U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=20U;
si0+=si1;
si1=l11;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=12U;
si0+=si1;
sj1=l18;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=8U;
si0+=si1;
si1=l13;
i32_store(&i->m0,(U64)si0,si1);
goto L1;
L2:;
si0=l0;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+32U);
l11=si1;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=8U;
si0+=si1;
si1=l11;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=16U;
si0+=si1;
si1=l11;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=24U;
si0+=si1;
si1=l11;
si2=24U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l11;
si1=l11;
si2=32U;
si1+=si2;
si2=l4;
si3=-1U;
si2+=si3;
l4=si2;
si3=5U;
si2<<=(si3&31);
si0=f15391(i,si0,si1,si2);
si0=l1;
si1=l4;
i32_store(&i->m0,(U64)si0+40U,si1);
L1:;
si0=l2;
si1=80U;
si0+=si1;
i->g0=si0;
L0:;
}

void f3435(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 l3=0;
U32 l4=0;
U32 si0,si1,si2,si3,si4;
U64 sj1,sj2;
si0=i->g0;
si1=128U;
si0-=si1;
l2=si0;
i->g0=si0;
si0=l2;
si1=l1;
f3434(i,si0,si1);
si0=0U;
si0=i32_load(&i->m0,(U64)si0+2967828U);
si1=4U;
si0=si0 <= si1;
if(si0){
goto L1;
}
si0=l2;
si1=32U;
si0+=si1;
si1=20U;
si0+=si1;
si1=740U;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=32U;
si0+=si1;
si1=12U;
si0+=si1;
si1=788U;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=789U;
i32_store(&i->m0,(U64)si0+36U,si1);
si0=l2;
si1=l1;
si2=20U;
si1+=si2;
i32_store(&i->m0,(U64)si0+48U,si1);
si0=l2;
si1=l1;
si2=44U;
si1+=si2;
i32_store(&i->m0,(U64)si0+40U,si1);
si0=l2;
si1=l2;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=0U;
si0=i32_load(&i->m0,(U64)si0+2966000U);
l1=si0;
si0=0U;
si0=i32_load(&i->m0,(U64)si0+2965996U);
l3=si0;
si0=0U;
si0=i32_load(&i->m0,(U64)si0+2967824U);
l4=si0;
si0=l2;
si1=112U;
si0+=si1;
sj1=3ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=104U;
si0+=si1;
si1=3U;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=96U;
si0+=si1;
si1=24U;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=92U;
si0+=si1;
si1=1536264U;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=56U;
si0+=si1;
si1=24U;
si0+=si1;
si1=1534013U;
sj1=(U64)(si1);
sj2=395136991232ULL;
sj1|=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=56U;
si0+=si1;
si1=12U;
si0+=si1;
si1=1536264U;
sj1=(U64)(si1);
sj2=103079215104ULL;
sj1|=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=108U;
si0+=si1;
si1=l2;
si2=32U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=1536240U;
i32_store(&i->m0,(U64)si0+100U,si1);
si0=l2;
si1=5U;
i32_store(&i->m0,(U64)si0+88U,si1);
si0=l2;
si1=0U;
i32_store(&i->m0,(U64)si0+76U,si1);
si0=l2;
si1=0U;
i32_store(&i->m0,(U64)si0+64U,si1);
si0=l2;
sj1=5368709120001ULL;
i64_store(&i->m0,(U64)si0+56U,sj1);
si0=l3;
si1=1182932U;
si2=l4;
si3=2U;
si2=si2 == si3;
l4=si2;
si0=si2?si0:si1;
si1=l2;
si2=56U;
si1+=si2;
si2=l1;
si3=1182732U;
si4=l4;
si2=si4?si2:si3;
si2=i32_load(&i->m0,(U64)si2+20U);
TF(i->t0,si2,void (*)(rustpythonInstance*,U32,U32))(i,si0,si1);
L1:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0);
si1=10U;
si0=si0 == si1;
if(si0){
goto L3;
}
si0=l0;
si1=l2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=24U;
si0+=si1;
si1=l2;
si2=24U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=16U;
si0+=si1;
si1=l2;
si2=16U;
si1+=si2;
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
goto L2;
L3:;
si0=l0;
si1=99U;
i32_store(&i->m0,(U64)si0,si1);
L2:;
si0=l2;
si1=128U;
si0+=si1;
i->g0=si0;
L0:;
}

U32 f3436(rustpythonInstance*i,U32 l0,U32 l1) {
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
si1=1537080U;
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
si1=1537092U;
si2=12U;
si3=l2;
si4=4U;
si3+=si4;
si4=1537104U;
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

U32 f3437(rustpythonInstance*i,U32 l0,U32 l1) {
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
si2=16U;
si1+=si2;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=1537120U;
si2=12U;
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
si1=1537132U;
si2=5U;
si3=l0;
si4=1537140U;
si0=f715(i,si0,si1,si2,si3,si4);
si1=1537156U;
si2=8U;
si3=l2;
si4=4U;
si3+=si4;
si4=1537164U;
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

void f3438(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U64 l3=0;
U64 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 l8=0;
U32 l9=0;
U32 l10=0;
U32 l11=0;
U32 l12=0;
U64 l13=0;
U64 l14=0;
U64 l15=0;
U64 l16=0;
U64 l17=0;
U32 l18=0;
U32 si0,si1,si2;
U64 sj0,sj1;
si0=i->g0;
si1=128U;
si0-=si1;
l2=si0;
i->g0=si0;
si0=l0;
sj0=i64_load(&i->m0,(U64)si0);
l3=sj0;
si0=!(sj0);
if(si0){
goto L1;
}
si0=l2;
si1=8U;
si0+=si1;
si1=56U;
si0+=si1;
si1=l0;
si2=64U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
l4=sj1;
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=8U;
si0+=si1;
si1=48U;
si0+=si1;
si1=l0;
si2=56U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=8U;
si0+=si1;
si1=40U;
si0+=si1;
si1=l0;
si2=48U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=8U;
si0+=si1;
si1=32U;
si0+=si1;
si1=l0;
si2=40U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=8U;
si0+=si1;
si1=24U;
si0+=si1;
si1=l0;
si2=32U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=8U;
si0+=si1;
si1=16U;
si0+=si1;
si1=l0;
si2=24U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=16U;
si0+=si1;
si1=l0;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=l0;
sj1=i64_load(&i->m0,(U64)si1+8U);
i64_store(&i->m0,(U64)si0+8U,sj1);
si0=l2;
si1=68U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
sj1=l4;
si1=(U32)(sj1);
l6=si1;
si0=si0 == si1;
if(si0){
goto L1;
}
si0=l5;
si1=l6;
si2=-1U;
si1^=si2;
si0+=si1;
l7=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
l8=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+8U);
l9=si0;
si0=l5;
si1=l6;
si0-=si1;
si1=3U;
si0&=si1;
l10=si0;
si0=!(si0);
if(si0){
goto L2;
}
si0=l9;
si1=l8;
si2=56U;
si1*=si2;
si0+=si1;
l11=si0;
si0=l2;
si1=8U;
si0+=si1;
si1=l6;
si2=56U;
si1*=si2;
si0+=si1;
l12=si0;
L3:;
{
si0=l12;
si1=8U;
si0+=si1;
sj0=i64_load(&i->m0,(U64)si0);
l4=sj0;
si0=l12;
si1=16U;
si0+=si1;
sj0=i64_load(&i->m0,(U64)si0);
l13=sj0;
si0=l12;
si1=24U;
si0+=si1;
sj0=i64_load(&i->m0,(U64)si0);
l14=sj0;
si0=l12;
si1=32U;
si0+=si1;
sj0=i64_load(&i->m0,(U64)si0);
l15=sj0;
si0=l12;
si1=40U;
si0+=si1;
sj0=i64_load(&i->m0,(U64)si0);
l16=sj0;
si0=l12;
sj0=i64_load(&i->m0,(U64)si0);
l17=sj0;
si0=l11;
si1=48U;
si0+=si1;
si1=l12;
si2=48U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l11;
si1=40U;
si0+=si1;
sj1=l16;
i64_store(&i->m0,(U64)si0,sj1);
si0=l11;
si1=32U;
si0+=si1;
sj1=l15;
i64_store(&i->m0,(U64)si0,sj1);
si0=l11;
si1=24U;
si0+=si1;
sj1=l14;
i64_store(&i->m0,(U64)si0,sj1);
si0=l11;
si1=16U;
si0+=si1;
sj1=l13;
i64_store(&i->m0,(U64)si0,sj1);
si0=l11;
si1=8U;
si0+=si1;
sj1=l4;
i64_store(&i->m0,(U64)si0,sj1);
si0=l11;
sj1=l17;
i64_store(&i->m0,(U64)si0,sj1);
si0=l12;
si1=56U;
si0+=si1;
l12=si0;
si0=l11;
si1=56U;
si0+=si1;
l11=si0;
si0=l8;
si1=1U;
si0+=si1;
l8=si0;
si0=l6;
si1=1U;
si0+=si1;
l6=si0;
si0=l10;
si1=-1U;
si0+=si1;
l10=si0;
if(si0){
goto L3;
}
}
L2:;
si0=l7;
si1=3U;
si0=si0 < si1;
if(si0){
goto L4;
}
si0=l5;
si1=l6;
si0-=si1;
l10=si0;
si0=l9;
si1=l8;
si2=56U;
si1*=si2;
si0+=si1;
l9=si0;
si0=l2;
si1=8U;
si0+=si1;
si1=l6;
si2=56U;
si1*=si2;
si0+=si1;
l7=si0;
si0=0U;
l6=si0;
L5:;
{
si0=l7;
si1=l6;
si0+=si1;
l11=si0;
sj0=i64_load(&i->m0,(U64)si0);
l4=sj0;
si0=l11;
si1=8U;
si0+=si1;
sj0=i64_load(&i->m0,(U64)si0);
l13=sj0;
si0=l11;
si1=16U;
si0+=si1;
sj0=i64_load(&i->m0,(U64)si0);
l14=sj0;
si0=l11;
si1=24U;
si0+=si1;
sj0=i64_load(&i->m0,(U64)si0);
l15=sj0;
si0=l11;
si1=32U;
si0+=si1;
sj0=i64_load(&i->m0,(U64)si0);
l16=sj0;
si0=l11;
si1=40U;
si0+=si1;
sj0=i64_load(&i->m0,(U64)si0);
l17=sj0;
si0=l9;
si1=l6;
si0+=si1;
l12=si0;
si1=48U;
si0+=si1;
si1=l11;
si2=48U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l12;
si1=40U;
si0+=si1;
sj1=l17;
i64_store(&i->m0,(U64)si0,sj1);
si0=l12;
si1=32U;
si0+=si1;
sj1=l16;
i64_store(&i->m0,(U64)si0,sj1);
si0=l12;
si1=24U;
si0+=si1;
sj1=l15;
i64_store(&i->m0,(U64)si0,sj1);
si0=l12;
si1=16U;
si0+=si1;
sj1=l14;
i64_store(&i->m0,(U64)si0,sj1);
si0=l12;
si1=8U;
si0+=si1;
sj1=l13;
i64_store(&i->m0,(U64)si0,sj1);
si0=l12;
sj1=l4;
i64_store(&i->m0,(U64)si0,sj1);
si0=l11;
si1=56U;
si0+=si1;
sj0=i64_load(&i->m0,(U64)si0);
l4=sj0;
si0=l11;
si1=64U;
si0+=si1;
sj0=i64_load(&i->m0,(U64)si0);
l13=sj0;
si0=l11;
si1=72U;
si0+=si1;
sj0=i64_load(&i->m0,(U64)si0);
l14=sj0;
si0=l11;
si1=80U;
si0+=si1;
sj0=i64_load(&i->m0,(U64)si0);
l15=sj0;
si0=l11;
si1=88U;
si0+=si1;
sj0=i64_load(&i->m0,(U64)si0);
l16=sj0;
si0=l11;
si1=96U;
si0+=si1;
sj0=i64_load(&i->m0,(U64)si0);
l17=sj0;
si0=l12;
si1=104U;
si0+=si1;
si1=l11;
si2=104U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l12;
si1=96U;
si0+=si1;
sj1=l17;
i64_store(&i->m0,(U64)si0,sj1);
si0=l12;
si1=88U;
si0+=si1;
sj1=l16;
i64_store(&i->m0,(U64)si0,sj1);
si0=l12;
si1=80U;
si0+=si1;
sj1=l15;
i64_store(&i->m0,(U64)si0,sj1);
si0=l12;
si1=72U;
si0+=si1;
sj1=l14;
i64_store(&i->m0,(U64)si0,sj1);
si0=l12;
si1=64U;
si0+=si1;
sj1=l13;
i64_store(&i->m0,(U64)si0,sj1);
si0=l12;
si1=56U;
si0+=si1;
sj1=l4;
i64_store(&i->m0,(U64)si0,sj1);
si0=l11;
si1=112U;
si0+=si1;
sj0=i64_load(&i->m0,(U64)si0);
l4=sj0;
si0=l11;
si1=120U;
si0+=si1;
sj0=i64_load(&i->m0,(U64)si0);
l13=sj0;
si0=l11;
si1=128U;
si0+=si1;
sj0=i64_load(&i->m0,(U64)si0);
l14=sj0;
si0=l11;
si1=136U;
si0+=si1;
sj0=i64_load(&i->m0,(U64)si0);
l15=sj0;
si0=l11;
si1=144U;
si0+=si1;
sj0=i64_load(&i->m0,(U64)si0);
l16=sj0;
si0=l11;
si1=152U;
si0+=si1;
sj0=i64_load(&i->m0,(U64)si0);
l17=sj0;
si0=l12;
si1=160U;
si0+=si1;
si1=l11;
si2=160U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l12;
si1=152U;
si0+=si1;
sj1=l17;
i64_store(&i->m0,(U64)si0,sj1);
si0=l12;
si1=144U;
si0+=si1;
sj1=l16;
i64_store(&i->m0,(U64)si0,sj1);
si0=l12;
si1=136U;
si0+=si1;
sj1=l15;
i64_store(&i->m0,(U64)si0,sj1);
si0=l12;
si1=128U;
si0+=si1;
sj1=l14;
i64_store(&i->m0,(U64)si0,sj1);
si0=l12;
si1=120U;
si0+=si1;
sj1=l13;
i64_store(&i->m0,(U64)si0,sj1);
si0=l12;
si1=112U;
si0+=si1;
sj1=l4;
i64_store(&i->m0,(U64)si0,sj1);
si0=l11;
si1=168U;
si0+=si1;
sj0=i64_load(&i->m0,(U64)si0);
l4=sj0;
si0=l11;
si1=176U;
si0+=si1;
sj0=i64_load(&i->m0,(U64)si0);
l13=sj0;
si0=l11;
si1=184U;
si0+=si1;
sj0=i64_load(&i->m0,(U64)si0);
l14=sj0;
si0=l11;
si1=192U;
si0+=si1;
sj0=i64_load(&i->m0,(U64)si0);
l15=sj0;
si0=l11;
si1=200U;
si0+=si1;
sj0=i64_load(&i->m0,(U64)si0);
l16=sj0;
si0=l11;
si1=208U;
si0+=si1;
sj0=i64_load(&i->m0,(U64)si0);
l17=sj0;
si0=l12;
si1=216U;
si0+=si1;
si1=l11;
si2=216U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l12;
si1=208U;
si0+=si1;
sj1=l17;
i64_store(&i->m0,(U64)si0,sj1);
si0=l12;
si1=200U;
si0+=si1;
sj1=l16;
i64_store(&i->m0,(U64)si0,sj1);
si0=l12;
si1=192U;
si0+=si1;
sj1=l15;
i64_store(&i->m0,(U64)si0,sj1);
si0=l12;
si1=184U;
si0+=si1;
sj1=l14;
i64_store(&i->m0,(U64)si0,sj1);
si0=l12;
si1=176U;
si0+=si1;
sj1=l13;
i64_store(&i->m0,(U64)si0,sj1);
si0=l12;
si1=168U;
si0+=si1;
sj1=l4;
i64_store(&i->m0,(U64)si0,sj1);
si0=l6;
si1=224U;
si0+=si1;
l6=si0;
si0=l8;
si1=4U;
si0+=si1;
l8=si0;
si0=l10;
si1=-4U;
si0+=si1;
l10=si0;
if(si0){
goto L5;
}
}
L4:;
si0=l1;
si1=l8;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l2;
si1=l5;
i32_store(&i->m0,(U64)si0+64U,si1);
si0=l2;
si0=i32_load(&i->m0,(U64)si0+68U);
l11=si0;
si1=l5;
si0=si0 == si1;
if(si0){
goto L1;
}
si0=l11;
si1=l5;
si0-=si1;
l8=si0;
si0=l2;
si1=8U;
si0+=si1;
si1=l5;
si2=56U;
si1*=si2;
si0+=si1;
l11=si0;
L6:;
{
si0=l11;
f3514(i,si0);
si0=l11;
si1=48U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l12=si0;
si0=!(si0);
if(si0){
goto L7;
}
si0=l12;
f3514(i,si0);
si0=l12;
f15271(i,si0);
L7:;
si0=l11;
si1=56U;
si0+=si1;
l11=si0;
si0=l8;
si1=-1U;
si0+=si1;
l8=si0;
if(si0){
goto L6;
}
}
L1:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+72U);
l7=si0;
si0=!(si0);
if(si0){
goto L9;
}
si0=l0;
si1=76U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
l8=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l18=si0;
si0=l0;
si1=80U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l11=si0;
si1=l0;
si2=84U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
l9=si1;
si0=si0 == si1;
if(si0){
goto L11;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+8U);
si1=l8;
si2=56U;
si1*=si2;
si0+=si1;
l12=si0;
L13:;
{
si0=l11;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si1=38U;
si0=si0 == si1;
if(si0){
goto L12;
}
si0=l11;
si1=52U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l10=si0;
si0=l11;
si1=44U;
si0+=si1;
sj0=i64_load(&i->m0,(U64)si0);
l4=sj0;
si0=l11;
si1=36U;
si0+=si1;
sj0=i64_load(&i->m0,(U64)si0);
l13=sj0;
si0=l11;
si1=28U;
si0+=si1;
sj0=i64_load(&i->m0,(U64)si0);
l14=sj0;
si0=l11;
si1=20U;
si0+=si1;
sj0=i64_load(&i->m0,(U64)si0);
l15=sj0;
si0=l11;
si1=12U;
si0+=si1;
sj0=i64_load(&i->m0,(U64)si0);
l16=sj0;
si0=l11;
sj0=i64_load(&i->m0,(U64)si0+4U);
l17=sj0;
si0=l12;
si1=l6;
i32_store(&i->m0,(U64)si0,si1);
si0=l12;
si1=4U;
si0+=si1;
sj1=l17;
i64_store(&i->m0,(U64)si0,sj1);
si0=l12;
si1=12U;
si0+=si1;
sj1=l16;
i64_store(&i->m0,(U64)si0,sj1);
si0=l12;
si1=20U;
si0+=si1;
sj1=l15;
i64_store(&i->m0,(U64)si0,sj1);
si0=l12;
si1=28U;
si0+=si1;
sj1=l14;
i64_store(&i->m0,(U64)si0,sj1);
si0=l12;
si1=36U;
si0+=si1;
sj1=l13;
i64_store(&i->m0,(U64)si0,sj1);
si0=l12;
si1=44U;
si0+=si1;
sj1=l4;
i64_store(&i->m0,(U64)si0,sj1);
si0=l12;
si1=52U;
si0+=si1;
si1=l10;
i32_store(&i->m0,(U64)si0,si1);
si0=l12;
si1=56U;
si0+=si1;
l12=si0;
si0=l8;
si1=1U;
si0+=si1;
l8=si0;
si0=l11;
si1=56U;
si0+=si1;
l11=si0;
si1=l9;
si0=si0 != si1;
if(si0){
goto L13;
}
}
si0=l18;
si1=l8;
i32_store(&i->m0,(U64)si0,si1);
goto L10;
L12:;
si0=l11;
si1=56U;
si0+=si1;
l11=si0;
L11:;
si0=l18;
si1=l8;
i32_store(&i->m0,(U64)si0,si1);
si0=l9;
si1=l11;
si0-=si1;
si1=56U;
si0=DIV_U(si0,si1);
l8=si0;
si0=l9;
si1=l11;
si0=si0 == si1;
if(si0){
goto L10;
}
L14:;
{
si0=l11;
f3500(i,si0);
si0=l11;
si1=48U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l12=si0;
si0=!(si0);
if(si0){
goto L15;
}
si0=l12;
f3500(i,si0);
si0=l12;
f15271(i,si0);
L15:;
si0=l11;
si1=56U;
si0+=si1;
l11=si0;
si0=l8;
si1=-1U;
si0+=si1;
l8=si0;
if(si0){
goto L14;
}
}
L10:;
si0=l5;
si0=!(si0);
if(si0){
goto L8;
}
si0=l7;
f15271(i,si0);
goto L8;
L9:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
si1=l1;
si2=4U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
L8:;
sj0=l3;
sj1=0ULL;
si0=sj0 != sj1;
if(si0){
goto L16;
}
si0=l0;
sj0=i64_load(&i->m0,(U64)si0);
si0=!(sj0);
if(si0){
goto L16;
}
si0=l0;
si1=68U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l12=si0;
si1=l0;
si2=64U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
l11=si1;
si0=si0 == si1;
if(si0){
goto L16;
}
si0=l12;
si1=l11;
si0-=si1;
l8=si0;
si0=l11;
si1=56U;
si0*=si1;
si1=l0;
si0+=si1;
si1=56U;
si0+=si1;
l11=si0;
L17:;
{
si0=l11;
si1=-48U;
si0+=si1;
f3514(i,si0);
si0=l11;
si0=i32_load(&i->m0,(U64)si0);
l12=si0;
si0=!(si0);
if(si0){
goto L18;
}
si0=l12;
f3514(i,si0);
si0=l12;
f15271(i,si0);
L18:;
si0=l11;
si1=56U;
si0+=si1;
l11=si0;
si0=l8;
si1=-1U;
si0+=si1;
l8=si0;
if(si0){
goto L17;
}
}
L16:;
si0=l7;
if(si0){
goto L19;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+72U);
l6=si0;
si0=!(si0);
if(si0){
goto L19;
}
si0=l0;
si1=84U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l12=si0;
si1=l0;
si2=80U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
l11=si1;
si0-=si1;
si1=56U;
si0=DIV_U(si0,si1);
l8=si0;
si0=l12;
si1=l11;
si0=si0 == si1;
if(si0){
goto L20;
}
L21:;
{
si0=l11;
f3500(i,si0);
si0=l11;
si1=48U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l12=si0;
si0=!(si0);
if(si0){
goto L22;
}
si0=l12;
f3500(i,si0);
si0=l12;
f15271(i,si0);
L22:;
si0=l11;
si1=56U;
si0+=si1;
l11=si0;
si0=l8;
si1=-1U;
si0+=si1;
l8=si0;
if(si0){
goto L21;
}
}
L20:;
si0=l0;
si1=76U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L19;
}
si0=l6;
f15271(i,si0);
L19:;
si0=l2;
si1=128U;
si0+=si1;
i->g0=si0;
L0:;
}

U32 f3439(rustpythonInstance*i,U32 l0,U32 l1) {
U32 si0,si1;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
si1=l1;
si0=f3440(i,si0,si1);
L0:;
return si0;
}

U32 f3440(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 l3=0;
U32 si0,si1,si2,si3,si4,si5,si6,si7,si8,si9,si10,si11,si12,si13,si14;
si0=i->g0;
si1=16U;
si0-=si1;
l2=si0;
i->g0=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
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
goto L97;
case 1:
goto L96;
case 2:
goto L95;
case 3:
goto L94;
case 4:
goto L93;
case 5:
goto L92;
case 6:
goto L91;
case 7:
goto L90;
case 8:
goto L89;
case 9:
goto L88;
case 10:
goto L87;
case 11:
goto L86;
case 12:
goto L85;
case 13:
goto L84;
case 14:
goto L83;
case 15:
goto L82;
case 16:
goto L81;
case 17:
goto L80;
case 18:
goto L79;
case 19:
goto L78;
case 20:
goto L77;
case 21:
goto L76;
case 22:
goto L75;
case 23:
goto L74;
case 24:
goto L73;
case 25:
goto L72;
case 26:
goto L71;
case 27:
goto L70;
case 28:
goto L69;
case 29:
goto L68;
case 30:
goto L67;
case 31:
goto L66;
case 32:
goto L65;
case 33:
goto L64;
case 34:
goto L63;
case 35:
goto L62;
case 36:
goto L61;
case 37:
goto L60;
case 38:
goto L59;
case 39:
goto L58;
case 40:
goto L57;
case 41:
goto L56;
case 42:
goto L55;
case 43:
goto L54;
case 44:
goto L53;
case 45:
goto L52;
case 46:
goto L51;
case 47:
goto L50;
case 48:
goto L49;
case 49:
goto L48;
case 50:
goto L47;
case 51:
goto L46;
case 52:
goto L45;
case 53:
goto L44;
case 54:
goto L43;
case 55:
goto L42;
case 56:
goto L41;
case 57:
goto L40;
case 58:
goto L39;
case 59:
goto L38;
case 60:
goto L37;
case 61:
goto L36;
case 62:
goto L35;
case 63:
goto L34;
case 64:
goto L33;
case 65:
goto L32;
case 66:
goto L31;
case 67:
goto L30;
case 68:
goto L29;
case 69:
goto L28;
case 70:
goto L27;
case 71:
goto L26;
case 72:
goto L25;
case 73:
goto L24;
case 74:
goto L23;
case 75:
goto L22;
case 76:
goto L21;
case 77:
goto L20;
case 78:
goto L19;
case 79:
goto L18;
case 80:
goto L17;
case 81:
goto L16;
case 82:
goto L15;
case 83:
goto L14;
case 84:
goto L13;
case 85:
goto L12;
case 86:
goto L11;
case 87:
goto L10;
case 88:
goto L9;
case 89:
goto L8;
case 90:
goto L7;
case 91:
goto L6;
case 92:
goto L5;
case 93:
goto L4;
case 94:
goto L3;
case 95:
goto L2;
default:
goto L97;
}
L97:;
si0=l2;
si1=l0;
si2=4U;
si1+=si2;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l1;
si1=1538192U;
si2=4U;
si3=1538196U;
si4=4U;
si5=l2;
si6=12U;
si5+=si6;
si6=1538200U;
si0=f740(i,si0,si1,si2,si3,si4,si5,si6);
l1=si0;
goto L1;
L96:;
si0=l2;
si1=l0;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l1;
si1=1538216U;
si2=3U;
si3=1538219U;
si4=5U;
si5=l2;
si6=12U;
si5+=si6;
si6=1538224U;
si0=f740(i,si0,si1,si2,si3,si4,si5,si6);
l1=si0;
goto L1;
L95:;
si0=l2;
si1=l0;
si2=8U;
si1+=si2;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l1;
si1=1538240U;
si2=5U;
si3=1538219U;
si4=5U;
si5=l2;
si6=12U;
si5+=si6;
si6=1538248U;
si0=f740(i,si0,si1,si2,si3,si4,si5,si6);
l1=si0;
goto L1;
L94:;
si0=l2;
si1=l0;
si2=16U;
si1+=si2;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l1;
si1=1538264U;
si2=7U;
si3=1538271U;
si4=4U;
si5=l0;
si6=8U;
si5+=si6;
si6=1538276U;
si7=1538292U;
si8=4U;
si9=l2;
si10=12U;
si9+=si10;
si10=1538248U;
si0=f741(i,si0,si1,si2,si3,si4,si5,si6,si7,si8,si9,si10);
l1=si0;
goto L1;
L93:;
si0=l2;
si1=l0;
si2=17U;
si1+=si2;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l1;
si1=1538296U;
si2=6U;
si3=1538219U;
si4=5U;
si5=l0;
si6=4U;
si5+=si6;
si6=1538304U;
si7=1538320U;
si8=4U;
si9=l0;
si10=16U;
si9+=si10;
si10=1538324U;
si11=1538340U;
si12=13U;
si13=l2;
si14=12U;
si13+=si14;
si14=1538356U;
si0=f742(i,si0,si1,si2,si3,si4,si5,si6,si7,si8,si9,si10,si11,si12,si13,si14);
l1=si0;
goto L1;
L92:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=1537660U;
si2=7U;
si3=l1;
si4=24U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si3=i32_load(&i->m0,(U64)si3+12U);
si0=TF(i->t0,si3,U32 (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
l1=si0;
goto L1;
L91:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=1537667U;
si2=6U;
si3=l1;
si4=24U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si3=i32_load(&i->m0,(U64)si3+12U);
si0=TF(i->t0,si3,U32 (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
l1=si0;
goto L1;
L90:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=1537673U;
si2=6U;
si3=l1;
si4=24U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si3=i32_load(&i->m0,(U64)si3+12U);
si0=TF(i->t0,si3,U32 (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
l1=si0;
goto L1;
L89:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=1538372U;
si2=9U;
si3=l1;
si4=24U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si3=i32_load(&i->m0,(U64)si3+12U);
si0=TF(i->t0,si3,U32 (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
l1=si0;
goto L1;
L88:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=1538381U;
si2=4U;
si3=l1;
si4=24U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si3=i32_load(&i->m0,(U64)si3+12U);
si0=TF(i->t0,si3,U32 (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
l1=si0;
goto L1;
L87:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=1538385U;
si2=4U;
si3=l1;
si4=24U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si3=i32_load(&i->m0,(U64)si3+12U);
si0=TF(i->t0,si3,U32 (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
l1=si0;
goto L1;
L86:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=1538389U;
si2=4U;
si3=l1;
si4=24U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si3=i32_load(&i->m0,(U64)si3+12U);
si0=TF(i->t0,si3,U32 (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
l1=si0;
goto L1;
L85:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=1538393U;
si2=4U;
si3=l1;
si4=24U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si3=i32_load(&i->m0,(U64)si3+12U);
si0=TF(i->t0,si3,U32 (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
l1=si0;
goto L1;
L84:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=1538397U;
si2=5U;
si3=l1;
si4=24U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si3=i32_load(&i->m0,(U64)si3+12U);
si0=TF(i->t0,si3,U32 (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
l1=si0;
goto L1;
L83:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=1538402U;
si2=5U;
si3=l1;
si4=24U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si3=i32_load(&i->m0,(U64)si3+12U);
si0=TF(i->t0,si3,U32 (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
l1=si0;
goto L1;
L82:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=1538407U;
si2=4U;
si3=l1;
si4=24U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si3=i32_load(&i->m0,(U64)si3+12U);
si0=TF(i->t0,si3,U32 (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
l1=si0;
goto L1;
L81:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=1538411U;
si2=4U;
si3=l1;
si4=24U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si3=i32_load(&i->m0,(U64)si3+12U);
si0=TF(i->t0,si3,U32 (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
l1=si0;
goto L1;
L80:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=1538415U;
si2=5U;
si3=l1;
si4=24U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si3=i32_load(&i->m0,(U64)si3+12U);
si0=TF(i->t0,si3,U32 (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
l1=si0;
goto L1;
L79:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=1538420U;
si2=4U;
si3=l1;
si4=24U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si3=i32_load(&i->m0,(U64)si3+12U);
si0=TF(i->t0,si3,U32 (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
l1=si0;
goto L1;
L78:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=1538424U;
si2=5U;
si3=l1;
si4=24U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si3=i32_load(&i->m0,(U64)si3+12U);
si0=TF(i->t0,si3,U32 (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
l1=si0;
goto L1;
L77:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=1538429U;
si2=4U;
si3=l1;
si4=24U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si3=i32_load(&i->m0,(U64)si3+12U);
si0=TF(i->t0,si3,U32 (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
l1=si0;
goto L1;
L76:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=1538433U;
si2=5U;
si3=l1;
si4=24U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si3=i32_load(&i->m0,(U64)si3+12U);
si0=TF(i->t0,si3,U32 (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
l1=si0;
goto L1;
L75:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=1538438U;
si2=4U;
si3=l1;
si4=24U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si3=i32_load(&i->m0,(U64)si3+12U);
si0=TF(i->t0,si3,U32 (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
l1=si0;
goto L1;
L74:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=1538442U;
si2=7U;
si3=l1;
si4=24U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si3=i32_load(&i->m0,(U64)si3+12U);
si0=TF(i->t0,si3,U32 (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
l1=si0;
goto L1;
L73:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=1538449U;
si2=5U;
si3=l1;
si4=24U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si3=i32_load(&i->m0,(U64)si3+12U);
si0=TF(i->t0,si3,U32 (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
l1=si0;
goto L1;
L72:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=1538454U;
si2=3U;
si3=l1;
si4=24U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si3=i32_load(&i->m0,(U64)si3+12U);
si0=TF(i->t0,si3,U32 (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
l1=si0;
goto L1;
L71:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=1538457U;
si2=7U;
si3=l1;
si4=24U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si3=i32_load(&i->m0,(U64)si3+12U);
si0=TF(i->t0,si3,U32 (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
l1=si0;
goto L1;
L70:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=1538464U;
si2=6U;
si3=l1;
si4=24U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si3=i32_load(&i->m0,(U64)si3+12U);
si0=TF(i->t0,si3,U32 (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
l1=si0;
goto L1;
L69:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=1538470U;
si2=6U;
si3=l1;
si4=24U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si3=i32_load(&i->m0,(U64)si3+12U);
si0=TF(i->t0,si3,U32 (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
l1=si0;
goto L1;
L68:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=1538476U;
si2=7U;
si3=l1;
si4=24U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si3=i32_load(&i->m0,(U64)si3+12U);
si0=TF(i->t0,si3,U32 (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
l1=si0;
goto L1;
L67:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=1538483U;
si2=8U;
si3=l1;
si4=24U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si3=i32_load(&i->m0,(U64)si3+12U);
si0=TF(i->t0,si3,U32 (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
l1=si0;
goto L1;
L66:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=1538491U;
si2=9U;
si3=l1;
si4=24U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si3=i32_load(&i->m0,(U64)si3+12U);
si0=TF(i->t0,si3,U32 (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
l1=si0;
goto L1;
L65:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=1538500U;
si2=12U;
si3=l1;
si4=24U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si3=i32_load(&i->m0,(U64)si3+12U);
si0=TF(i->t0,si3,U32 (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
l1=si0;
goto L1;
L64:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=1538512U;
si2=5U;
si3=l1;
si4=24U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si3=i32_load(&i->m0,(U64)si3+12U);
si0=TF(i->t0,si3,U32 (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
l1=si0;
goto L1;
L63:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=1538517U;
si2=10U;
si3=l1;
si4=24U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si3=i32_load(&i->m0,(U64)si3+12U);
si0=TF(i->t0,si3,U32 (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
l1=si0;
goto L1;
L62:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=1538527U;
si2=9U;
si3=l1;
si4=24U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si3=i32_load(&i->m0,(U64)si3+12U);
si0=TF(i->t0,si3,U32 (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
l1=si0;
goto L1;
L61:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=1538536U;
si2=10U;
si3=l1;
si4=24U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si3=i32_load(&i->m0,(U64)si3+12U);
si0=TF(i->t0,si3,U32 (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
l1=si0;
goto L1;
L60:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=1538546U;
si2=10U;
si3=l1;
si4=24U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si3=i32_load(&i->m0,(U64)si3+12U);
si0=TF(i->t0,si3,U32 (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
l1=si0;
goto L1;
L59:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=1538556U;
si2=15U;
si3=l1;
si4=24U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si3=i32_load(&i->m0,(U64)si3+12U);
si0=TF(i->t0,si3,U32 (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
l1=si0;
goto L1;
L58:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=1538571U;
si2=9U;
si3=l1;
si4=24U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si3=i32_load(&i->m0,(U64)si3+12U);
si0=TF(i->t0,si3,U32 (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
l1=si0;
goto L1;
L57:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=1538580U;
si2=10U;
si3=l1;
si4=24U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si3=i32_load(&i->m0,(U64)si3+12U);
si0=TF(i->t0,si3,U32 (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
l1=si0;
goto L1;
L56:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=1538590U;
si2=9U;
si3=l1;
si4=24U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si3=i32_load(&i->m0,(U64)si3+12U);
si0=TF(i->t0,si3,U32 (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
l1=si0;
goto L1;
L55:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=1538599U;
si2=10U;
si3=l1;
si4=24U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si3=i32_load(&i->m0,(U64)si3+12U);
si0=TF(i->t0,si3,U32 (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
l1=si0;
goto L1;
L54:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=1538609U;
si2=12U;
si3=l1;
si4=24U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si3=i32_load(&i->m0,(U64)si3+12U);
si0=TF(i->t0,si3,U32 (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
l1=si0;
goto L1;
L53:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=1538621U;
si2=10U;
si3=l1;
si4=24U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si3=i32_load(&i->m0,(U64)si3+12U);
si0=TF(i->t0,si3,U32 (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
l1=si0;
goto L1;
L52:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=1538631U;
si2=9U;
si3=l1;
si4=24U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si3=i32_load(&i->m0,(U64)si3+12U);
si0=TF(i->t0,si3,U32 (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
l1=si0;
goto L1;
L51:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=1538640U;
si2=15U;
si3=l1;
si4=24U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si3=i32_load(&i->m0,(U64)si3+12U);
si0=TF(i->t0,si3,U32 (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
l1=si0;
goto L1;
L50:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=1538655U;
si2=14U;
si3=l1;
si4=24U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si3=i32_load(&i->m0,(U64)si3+12U);
si0=TF(i->t0,si3,U32 (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
l1=si0;
goto L1;
L49:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=1538669U;
si2=15U;
si3=l1;
si4=24U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si3=i32_load(&i->m0,(U64)si3+12U);
si0=TF(i->t0,si3,U32 (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
l1=si0;
goto L1;
L48:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=1538684U;
si2=11U;
si3=l1;
si4=24U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si3=i32_load(&i->m0,(U64)si3+12U);
si0=TF(i->t0,si3,U32 (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
l1=si0;
goto L1;
L47:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=1538695U;
si2=16U;
si3=l1;
si4=24U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si3=i32_load(&i->m0,(U64)si3+12U);
si0=TF(i->t0,si3,U32 (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
l1=si0;
goto L1;
L46:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=1538711U;
si2=10U;
si3=l1;
si4=24U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si3=i32_load(&i->m0,(U64)si3+12U);
si0=TF(i->t0,si3,U32 (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
l1=si0;
goto L1;
L45:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=1538721U;
si2=2U;
si3=l1;
si4=24U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si3=i32_load(&i->m0,(U64)si3+12U);
si0=TF(i->t0,si3,U32 (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
l1=si0;
goto L1;
L44:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=1538723U;
si2=7U;
si3=l1;
si4=24U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si3=i32_load(&i->m0,(U64)si3+12U);
si0=TF(i->t0,si3,U32 (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
l1=si0;
goto L1;
L43:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=1538730U;
si2=6U;
si3=l1;
si4=24U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si3=i32_load(&i->m0,(U64)si3+12U);
si0=TF(i->t0,si3,U32 (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
l1=si0;
goto L1;
L42:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=1538736U;
si2=8U;
si3=l1;
si4=24U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si3=i32_load(&i->m0,(U64)si3+12U);
si0=TF(i->t0,si3,U32 (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
l1=si0;
goto L1;
L41:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=1538744U;
si2=5U;
si3=l1;
si4=24U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si3=i32_load(&i->m0,(U64)si3+12U);
si0=TF(i->t0,si3,U32 (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
l1=si0;
goto L1;
L40:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=1538749U;
si2=4U;
si3=l1;
si4=24U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si3=i32_load(&i->m0,(U64)si3+12U);
si0=TF(i->t0,si3,U32 (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
l1=si0;
goto L1;
L39:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=1538753U;
si2=4U;
si3=l1;
si4=24U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si3=i32_load(&i->m0,(U64)si3+12U);
si0=TF(i->t0,si3,U32 (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
l1=si0;
goto L1;
L38:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=1538757U;
si2=3U;
si3=l1;
si4=24U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si3=i32_load(&i->m0,(U64)si3+12U);
si0=TF(i->t0,si3,U32 (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
l1=si0;
goto L1;
L37:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=1538760U;
si2=2U;
si3=l1;
si4=24U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si3=i32_load(&i->m0,(U64)si3+12U);
si0=TF(i->t0,si3,U32 (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
l1=si0;
goto L1;
L36:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=1538762U;
si2=6U;
si3=l1;
si4=24U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si3=i32_load(&i->m0,(U64)si3+12U);
si0=TF(i->t0,si3,U32 (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
l1=si0;
goto L1;
L35:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=1538768U;
si2=5U;
si3=l1;
si4=24U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si3=i32_load(&i->m0,(U64)si3+12U);
si0=TF(i->t0,si3,U32 (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
l1=si0;
goto L1;
L34:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=1538773U;
si2=5U;
si3=l1;
si4=24U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si3=i32_load(&i->m0,(U64)si3+12U);
si0=TF(i->t0,si3,U32 (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
l1=si0;
goto L1;
L33:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=1538778U;
si2=5U;
si3=l1;
si4=24U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si3=i32_load(&i->m0,(U64)si3+12U);
si0=TF(i->t0,si3,U32 (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
l1=si0;
goto L1;
L32:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=1538783U;
si2=5U;
si3=l1;
si4=24U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si3=i32_load(&i->m0,(U64)si3+12U);
si0=TF(i->t0,si3,U32 (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
l1=si0;
goto L1;
L31:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=1538788U;
si2=8U;
si3=l1;
si4=24U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si3=i32_load(&i->m0,(U64)si3+12U);
si0=TF(i->t0,si3,U32 (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
l1=si0;
goto L1;
L30:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=1538796U;
si2=3U;
si3=l1;
si4=24U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si3=i32_load(&i->m0,(U64)si3+12U);
si0=TF(i->t0,si3,U32 (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
l1=si0;
goto L1;
L29:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=1538799U;
si2=3U;
si3=l1;
si4=24U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si3=i32_load(&i->m0,(U64)si3+12U);
si0=TF(i->t0,si3,U32 (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
l1=si0;
goto L1;
L28:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=1538802U;
si2=4U;
si3=l1;
si4=24U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si3=i32_load(&i->m0,(U64)si3+12U);
si0=TF(i->t0,si3,U32 (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
l1=si0;
goto L1;
L27:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=1538806U;
si2=4U;
si3=l1;
si4=24U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si3=i32_load(&i->m0,(U64)si3+12U);
si0=TF(i->t0,si3,U32 (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
l1=si0;
goto L1;
L26:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=1538810U;
si2=6U;
si3=l1;
si4=24U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si3=i32_load(&i->m0,(U64)si3+12U);
si0=TF(i->t0,si3,U32 (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
l1=si0;
goto L1;
L25:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=1538816U;
si2=7U;
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
si1=1538823U;
si2=3U;
si3=l1;
si4=24U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si3=i32_load(&i->m0,(U64)si3+12U);
si0=TF(i->t0,si3,U32 (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
l1=si0;
goto L1;
L23:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=1538826U;
si2=4U;
si3=l1;
si4=24U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si3=i32_load(&i->m0,(U64)si3+12U);
si0=TF(i->t0,si3,U32 (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
l1=si0;
goto L1;
L22:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=1538830U;
si2=6U;
si3=l1;
si4=24U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si3=i32_load(&i->m0,(U64)si3+12U);
si0=TF(i->t0,si3,U32 (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
l1=si0;
goto L1;
L21:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=1538836U;
si2=2U;
si3=l1;
si4=24U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si3=i32_load(&i->m0,(U64)si3+12U);
si0=TF(i->t0,si3,U32 (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
l1=si0;
goto L1;
L20:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=1538838U;
si2=6U;
si3=l1;
si4=24U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si3=i32_load(&i->m0,(U64)si3+12U);
si0=TF(i->t0,si3,U32 (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
l1=si0;
goto L1;
L19:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=1538844U;
si2=2U;
si3=l1;
si4=24U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si3=i32_load(&i->m0,(U64)si3+12U);
si0=TF(i->t0,si3,U32 (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
l1=si0;
goto L1;
L18:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=1538846U;
si2=2U;
si3=l1;
si4=24U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si3=i32_load(&i->m0,(U64)si3+12U);
si0=TF(i->t0,si3,U32 (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
l1=si0;
goto L1;
L17:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=1538848U;
si2=6U;
si3=l1;
si4=24U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si3=i32_load(&i->m0,(U64)si3+12U);
si0=TF(i->t0,si3,U32 (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
l1=si0;
goto L1;
L16:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=1538854U;
si2=8U;
si3=l1;
si4=24U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si3=i32_load(&i->m0,(U64)si3+12U);
si0=TF(i->t0,si3,U32 (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
l1=si0;
goto L1;
L15:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=1538862U;
si2=3U;
si3=l1;
si4=24U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si3=i32_load(&i->m0,(U64)si3+12U);
si0=TF(i->t0,si3,U32 (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
l1=si0;
goto L1;
L14:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=1538865U;
si2=2U;
si3=l1;
si4=24U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si3=i32_load(&i->m0,(U64)si3+12U);
si0=TF(i->t0,si3,U32 (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
l1=si0;
goto L1;
L13:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=1538867U;
si2=4U;
si3=l1;
si4=24U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si3=i32_load(&i->m0,(U64)si3+12U);
si0=TF(i->t0,si3,U32 (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
l1=si0;
goto L1;
L12:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=1538871U;
si2=5U;
si3=l1;
si4=24U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si3=i32_load(&i->m0,(U64)si3+12U);
si0=TF(i->t0,si3,U32 (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
l1=si0;
goto L1;
L11:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=1538876U;
si2=6U;
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
si1=1538882U;
si2=3U;
si3=l1;
si4=24U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si3=i32_load(&i->m0,(U64)si3+12U);
si0=TF(i->t0,si3,U32 (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
l1=si0;
goto L1;
L9:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=1538885U;
si2=5U;
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
si1=1538890U;
si2=5U;
si3=l1;
si4=24U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si3=i32_load(&i->m0,(U64)si3+12U);
si0=TF(i->t0,si3,U32 (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
l1=si0;
goto L1;
L7:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=1538895U;
si2=4U;
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
si1=1538899U;
si2=4U;
si3=l1;
si4=24U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si3=i32_load(&i->m0,(U64)si3+12U);
si0=TF(i->t0,si3,U32 (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
l1=si0;
goto L1;
L5:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=1538903U;
si2=5U;
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
si1=1538908U;
si2=11U;
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
si1=1538102U;
si2=16U;
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
si1=1538118U;
si2=15U;
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

U32 f3441(rustpythonInstance*i,U32 l0,U32 l1) {
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
si0=l2;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+20U);
si2=1537504U;
si3=0U;
si4=l1;
si5=24U;
si4+=si5;
si4=i32_load(&i->m0,(U64)si4);
si4=i32_load(&i->m0,(U64)si4+12U);
si1=TF(i->t0,si4,U32 (*)(rustpythonInstance*,U32,U32,U32))(i,si1,si2,si3);
i32_store8(&i->m0,(U64)si0+16U,si1);
si0=l2;
si1=l1;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=1U;
l1=si0;
si0=l2;
si1=1U;
i32_store8(&i->m0,(U64)si0+17U,si1);
si0=l2;
si1=0U;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l2;
si1=l0;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l2;
si1=l0;
si2=24U;
si1+=si2;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l2;
si1=8U;
si0+=si1;
si1=l2;
si2=24U;
si1+=si2;
si2=1537504U;
si0=f716(i,si0,si1,si2);
si0=l2;
si1=8U;
si0+=si1;
si1=l2;
si2=28U;
si1+=si2;
si2=1537520U;
si0=f716(i,si0,si1,si2);
si0=l2;
si0=i32_load8_u(&i->m0,(U64)si0+16U);
l0=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+8U);
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
si0=l0;
si1=255U;
si0&=si1;
if(si0){
goto L1;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0+12U);
l0=si0;
si0=l3;
si1=1U;
si0=si0 != si1;
if(si0){
goto L3;
}
si0=l2;
si0=i32_load8_u(&i->m0,(U64)si0+17U);
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

U32 f3442(rustpythonInstance*i,U32 l0,U32 l1) {
U32 si0,si1;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
si0=i32_load(&i->m0,(U64)si0);
si1=l1;
si0=f3522(i,si0,si1);
L0:;
return si0;
}

U32 f3443(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 si0,si1,si2,si3;
U64 sj1;
si0=i->g0;
si1=48U;
si0-=si1;
l2=si0;
i->g0=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
l0=si0;
si0=l2;
si1=12U;
si0+=si1;
si1=3U;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=l0;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l2;
si1=3U;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l2;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+4U);
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
si0=l2;
si1=l2;
si2=16U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+20U);
l1=si0;
si0=l2;
sj1=2ULL;
i64_store(&i->m0,(U64)si0+36U,sj1);
si0=l2;
si1=2U;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l2;
si1=1283276U;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l2;
si1=l2;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l1;
si1=l0;
si2=l2;
si3=24U;
si2+=si3;
si0=f690(i,si0,si1,si2);
l1=si0;
si0=l2;
si1=48U;
si0+=si1;
i->g0=si0;
si0=l1;
L0:;
return si0;
}

U32 f3444(rustpythonInstance*i,U32 l0,U32 l1) {
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

U32 f3445(rustpythonInstance*i,U32 l0,U32 l1) {
U32 si0,si1;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
si1=l1;
si0=f3446(i,si0,si1);
L0:;
return si0;
}

U32 f3446(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 l3=0;
U32 si0,si1,si2,si3,si4,si5;
U64 sj1;
si0=i->g0;
si1=208U;
si0-=si1;
l2=si0;
i->g0=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
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
goto L97;
case 1:
goto L96;
case 2:
goto L95;
case 3:
goto L94;
case 4:
goto L93;
case 5:
goto L92;
case 6:
goto L91;
case 7:
goto L90;
case 8:
goto L89;
case 9:
goto L88;
case 10:
goto L87;
case 11:
goto L86;
case 12:
goto L85;
case 13:
goto L84;
case 14:
goto L83;
case 15:
goto L82;
case 16:
goto L81;
case 17:
goto L80;
case 18:
goto L79;
case 19:
goto L78;
case 20:
goto L77;
case 21:
goto L76;
case 22:
goto L75;
case 23:
goto L74;
case 24:
goto L73;
case 25:
goto L72;
case 26:
goto L71;
case 27:
goto L70;
case 28:
goto L69;
case 29:
goto L68;
case 30:
goto L67;
case 31:
goto L66;
case 32:
goto L65;
case 33:
goto L64;
case 34:
goto L63;
case 35:
goto L62;
case 36:
goto L61;
case 37:
goto L60;
case 38:
goto L59;
case 39:
goto L58;
case 40:
goto L57;
case 41:
goto L56;
case 42:
goto L55;
case 43:
goto L54;
case 44:
goto L53;
case 45:
goto L52;
case 46:
goto L51;
case 47:
goto L50;
case 48:
goto L49;
case 49:
goto L48;
case 50:
goto L47;
case 51:
goto L46;
case 52:
goto L45;
case 53:
goto L44;
case 54:
goto L43;
case 55:
goto L42;
case 56:
goto L41;
case 57:
goto L40;
case 58:
goto L39;
case 59:
goto L38;
case 60:
goto L37;
case 61:
goto L36;
case 62:
goto L35;
case 63:
goto L34;
case 64:
goto L33;
case 65:
goto L32;
case 66:
goto L31;
case 67:
goto L30;
case 68:
goto L29;
case 69:
goto L28;
case 70:
goto L27;
case 71:
goto L26;
case 72:
goto L25;
case 73:
goto L24;
case 74:
goto L23;
case 75:
goto L22;
case 76:
goto L21;
case 77:
goto L20;
case 78:
goto L19;
case 79:
goto L18;
case 80:
goto L17;
case 81:
goto L16;
case 82:
goto L15;
case 83:
goto L14;
case 84:
goto L13;
case 85:
goto L12;
case 86:
goto L11;
case 87:
goto L10;
case 88:
goto L9;
case 89:
goto L8;
case 90:
goto L7;
case 91:
goto L6;
case 92:
goto L5;
case 93:
goto L4;
case 94:
goto L3;
case 95:
goto L2;
default:
goto L97;
}
L97:;
si0=l2;
si1=l0;
si2=4U;
si1+=si2;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l2;
si1=786U;
i32_store(&i->m0,(U64)si0+188U,si1);
si0=l1;
si1=24U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l0=si0;
si0=l2;
si1=l2;
si2=32U;
si1+=si2;
i32_store(&i->m0,(U64)si0+184U,si1);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+20U);
l1=si0;
si0=l2;
sj1=1ULL;
i64_store(&i->m0,(U64)si0+68U,sj1);
si0=l2;
si1=2U;
i32_store(&i->m0,(U64)si0+60U,si1);
si0=l2;
si1=1537588U;
i32_store(&i->m0,(U64)si0+56U,si1);
si0=l2;
si1=l2;
si2=184U;
si1+=si2;
i32_store(&i->m0,(U64)si0+64U,si1);
si0=l1;
si1=l0;
si2=l2;
si3=56U;
si2+=si3;
si0=f690(i,si0,si1,si2);
l1=si0;
goto L1;
L96:;
si0=l2;
si1=l0;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l2;
si1=799U;
i32_store(&i->m0,(U64)si0+188U,si1);
si0=l1;
si1=24U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l0=si0;
si0=l2;
si1=l2;
si2=32U;
si1+=si2;
i32_store(&i->m0,(U64)si0+184U,si1);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+20U);
l1=si0;
si0=l2;
sj1=1ULL;
i64_store(&i->m0,(U64)si0+68U,sj1);
si0=l2;
si1=2U;
i32_store(&i->m0,(U64)si0+60U,si1);
si0=l2;
si1=1537588U;
i32_store(&i->m0,(U64)si0+56U,si1);
si0=l2;
si1=l2;
si2=184U;
si1+=si2;
i32_store(&i->m0,(U64)si0+64U,si1);
si0=l1;
si1=l0;
si2=l2;
si3=56U;
si2+=si3;
si0=f690(i,si0,si1,si2);
l1=si0;
goto L1;
L95:;
si0=l2;
si1=l0;
si2=8U;
si1+=si2;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l2;
si1=800U;
i32_store(&i->m0,(U64)si0+188U,si1);
si0=l1;
si1=24U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l0=si0;
si0=l2;
si1=l2;
si2=32U;
si1+=si2;
i32_store(&i->m0,(U64)si0+184U,si1);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+20U);
l1=si0;
si0=l2;
sj1=1ULL;
i64_store(&i->m0,(U64)si0+68U,sj1);
si0=l2;
si1=2U;
i32_store(&i->m0,(U64)si0+60U,si1);
si0=l2;
si1=1537588U;
i32_store(&i->m0,(U64)si0+56U,si1);
si0=l2;
si1=l2;
si2=184U;
si1+=si2;
i32_store(&i->m0,(U64)si0+64U,si1);
si0=l1;
si1=l0;
si2=l2;
si3=56U;
si2+=si3;
si0=f690(i,si0,si1,si2);
l1=si0;
goto L1;
L94:;
si0=l2;
si1=l0;
si2=8U;
si1+=si2;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l2;
si1=l0;
si2=16U;
si1+=si2;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l2;
si1=196U;
si0+=si1;
si1=800U;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=800U;
i32_store(&i->m0,(U64)si0+188U,si1);
si0=l1;
si1=24U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l0=si0;
si0=l2;
si1=l2;
si2=32U;
si1+=si2;
i32_store(&i->m0,(U64)si0+192U,si1);
si0=l2;
si1=l2;
si2=16U;
si1+=si2;
i32_store(&i->m0,(U64)si0+184U,si1);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+20U);
l1=si0;
si0=l2;
sj1=2ULL;
i64_store(&i->m0,(U64)si0+68U,sj1);
si0=l2;
si1=2U;
i32_store(&i->m0,(U64)si0+60U,si1);
si0=l2;
si1=1537608U;
i32_store(&i->m0,(U64)si0+56U,si1);
si0=l2;
si1=l2;
si2=184U;
si1+=si2;
i32_store(&i->m0,(U64)si0+64U,si1);
si0=l1;
si1=l0;
si2=l2;
si3=56U;
si2+=si3;
si0=f690(i,si0,si1,si2);
l1=si0;
goto L1;
L93:;
si0=l2;
si1=l0;
si2=4U;
si1+=si2;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l2;
si1=l0;
si2=16U;
si1+=si2;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l2;
si1=16U;
si0+=si1;
si1=1537624U;
si2=1U;
si3=3U;
si4=1U;
si5=l0;
si5=i32_load8_u(&i->m0,(U64)si5+17U);
si3=si5?si3:si4;
f66(i,si0,si1,si2,si3);
si0=l2;
si1=52U;
si0+=si1;
si1=786U;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=44U;
si0+=si1;
si1=801U;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=802U;
i32_store(&i->m0,(U64)si0+36U,si1);
si0=l2;
si1=l2;
si2=8U;
si1+=si2;
i32_store(&i->m0,(U64)si0+48U,si1);
si0=l2;
si1=l2;
si2=16U;
si1+=si2;
i32_store(&i->m0,(U64)si0+40U,si1);
si0=l2;
si1=l2;
si2=12U;
si1+=si2;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l2;
si1=180U;
si0+=si1;
si1=3U;
i32_store8(&i->m0,(U64)si0,si1);
si0=l2;
si1=176U;
si0+=si1;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=168U;
si0+=si1;
sj1=4294967328ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=160U;
si0+=si1;
si1=2U;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=148U;
si0+=si1;
si1=3U;
i32_store8(&i->m0,(U64)si0,si1);
si0=l2;
si1=144U;
si0+=si1;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=136U;
si0+=si1;
sj1=8589934624ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=128U;
si0+=si1;
si1=2U;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=116U;
si0+=si1;
si1=3U;
i32_store8(&i->m0,(U64)si0,si1);
si0=l2;
si1=112U;
si0+=si1;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=104U;
si0+=si1;
sj1=4294967328ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=96U;
si0+=si1;
si1=2U;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=2U;
i32_store(&i->m0,(U64)si0+152U,si1);
si0=l2;
si1=2U;
i32_store(&i->m0,(U64)si0+120U,si1);
si0=l2;
si1=2U;
i32_store(&i->m0,(U64)si0+88U,si1);
si0=l2;
si1=3U;
i32_store8(&i->m0,(U64)si0+84U,si1);
si0=l2;
si1=0U;
i32_store(&i->m0,(U64)si0+80U,si1);
si0=l2;
sj1=32ULL;
i64_store(&i->m0,(U64)si0+72U,sj1);
si0=l2;
si1=2U;
i32_store(&i->m0,(U64)si0+64U,si1);
si0=l2;
si1=2U;
i32_store(&i->m0,(U64)si0+56U,si1);
si0=l1;
si1=24U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l0=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+20U);
l1=si0;
si0=l2;
si1=4U;
i32_store(&i->m0,(U64)si0+204U,si1);
si0=l2;
si1=3U;
i32_store(&i->m0,(U64)si0+196U,si1);
si0=l2;
si1=4U;
i32_store(&i->m0,(U64)si0+188U,si1);
si0=l2;
si1=1537628U;
i32_store(&i->m0,(U64)si0+184U,si1);
si0=l2;
si1=l2;
si2=56U;
si1+=si2;
i32_store(&i->m0,(U64)si0+200U,si1);
si0=l2;
si1=l2;
si2=32U;
si1+=si2;
i32_store(&i->m0,(U64)si0+192U,si1);
si0=l1;
si1=l0;
si2=l2;
si3=184U;
si2+=si3;
si0=f690(i,si0,si1,si2);
l1=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+20U);
si0=!(si0);
if(si0){
goto L1;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0+16U);
f15271(i,si0);
goto L1;
L92:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=1537660U;
si2=7U;
si3=l1;
si4=24U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si3=i32_load(&i->m0,(U64)si3+12U);
si0=TF(i->t0,si3,U32 (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
l1=si0;
goto L1;
L91:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=1537667U;
si2=6U;
si3=l1;
si4=24U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si3=i32_load(&i->m0,(U64)si3+12U);
si0=TF(i->t0,si3,U32 (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
l1=si0;
goto L1;
L90:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=1537673U;
si2=6U;
si3=l1;
si4=24U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si3=i32_load(&i->m0,(U64)si3+12U);
si0=TF(i->t0,si3,U32 (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
l1=si0;
goto L1;
L89:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=1537679U;
si2=3U;
si3=l1;
si4=24U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si3=i32_load(&i->m0,(U64)si3+12U);
si0=TF(i->t0,si3,U32 (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
l1=si0;
goto L1;
L88:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=1537682U;
si2=3U;
si3=l1;
si4=24U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si3=i32_load(&i->m0,(U64)si3+12U);
si0=TF(i->t0,si3,U32 (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
l1=si0;
goto L1;
L87:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=1537685U;
si2=3U;
si3=l1;
si4=24U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si3=i32_load(&i->m0,(U64)si3+12U);
si0=TF(i->t0,si3,U32 (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
l1=si0;
goto L1;
L86:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=1537688U;
si2=3U;
si3=l1;
si4=24U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si3=i32_load(&i->m0,(U64)si3+12U);
si0=TF(i->t0,si3,U32 (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
l1=si0;
goto L1;
L85:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=1537691U;
si2=3U;
si3=l1;
si4=24U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si3=i32_load(&i->m0,(U64)si3+12U);
si0=TF(i->t0,si3,U32 (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
l1=si0;
goto L1;
L84:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=1537694U;
si2=3U;
si3=l1;
si4=24U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si3=i32_load(&i->m0,(U64)si3+12U);
si0=TF(i->t0,si3,U32 (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
l1=si0;
goto L1;
L83:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=1537697U;
si2=3U;
si3=l1;
si4=24U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si3=i32_load(&i->m0,(U64)si3+12U);
si0=TF(i->t0,si3,U32 (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
l1=si0;
goto L1;
L82:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=1537700U;
si2=3U;
si3=l1;
si4=24U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si3=i32_load(&i->m0,(U64)si3+12U);
si0=TF(i->t0,si3,U32 (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
l1=si0;
goto L1;
L81:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=1537703U;
si2=3U;
si3=l1;
si4=24U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si3=i32_load(&i->m0,(U64)si3+12U);
si0=TF(i->t0,si3,U32 (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
l1=si0;
goto L1;
L80:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=1537706U;
si2=3U;
si3=l1;
si4=24U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si3=i32_load(&i->m0,(U64)si3+12U);
si0=TF(i->t0,si3,U32 (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
l1=si0;
goto L1;
L79:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=1537709U;
si2=3U;
si3=l1;
si4=24U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si3=i32_load(&i->m0,(U64)si3+12U);
si0=TF(i->t0,si3,U32 (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
l1=si0;
goto L1;
L78:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=1537712U;
si2=3U;
si3=l1;
si4=24U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si3=i32_load(&i->m0,(U64)si3+12U);
si0=TF(i->t0,si3,U32 (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
l1=si0;
goto L1;
L77:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=1537715U;
si2=3U;
si3=l1;
si4=24U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si3=i32_load(&i->m0,(U64)si3+12U);
si0=TF(i->t0,si3,U32 (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
l1=si0;
goto L1;
L76:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=1537718U;
si2=3U;
si3=l1;
si4=24U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si3=i32_load(&i->m0,(U64)si3+12U);
si0=TF(i->t0,si3,U32 (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
l1=si0;
goto L1;
L75:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=1537721U;
si2=3U;
si3=l1;
si4=24U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si3=i32_load(&i->m0,(U64)si3+12U);
si0=TF(i->t0,si3,U32 (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
l1=si0;
goto L1;
L74:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=1537724U;
si2=3U;
si3=l1;
si4=24U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si3=i32_load(&i->m0,(U64)si3+12U);
si0=TF(i->t0,si3,U32 (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
l1=si0;
goto L1;
L73:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=1537727U;
si2=3U;
si3=l1;
si4=24U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si3=i32_load(&i->m0,(U64)si3+12U);
si0=TF(i->t0,si3,U32 (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
l1=si0;
goto L1;
L72:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=1537730U;
si2=3U;
si3=l1;
si4=24U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si3=i32_load(&i->m0,(U64)si3+12U);
si0=TF(i->t0,si3,U32 (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
l1=si0;
goto L1;
L71:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=1537733U;
si2=3U;
si3=l1;
si4=24U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si3=i32_load(&i->m0,(U64)si3+12U);
si0=TF(i->t0,si3,U32 (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
l1=si0;
goto L1;
L70:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=1537736U;
si2=3U;
si3=l1;
si4=24U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si3=i32_load(&i->m0,(U64)si3+12U);
si0=TF(i->t0,si3,U32 (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
l1=si0;
goto L1;
L69:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=1537739U;
si2=3U;
si3=l1;
si4=24U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si3=i32_load(&i->m0,(U64)si3+12U);
si0=TF(i->t0,si3,U32 (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
l1=si0;
goto L1;
L68:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=1537742U;
si2=4U;
si3=l1;
si4=24U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si3=i32_load(&i->m0,(U64)si3+12U);
si0=TF(i->t0,si3,U32 (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
l1=si0;
goto L1;
L67:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=1537746U;
si2=4U;
si3=l1;
si4=24U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si3=i32_load(&i->m0,(U64)si3+12U);
si0=TF(i->t0,si3,U32 (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
l1=si0;
goto L1;
L66:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=1537750U;
si2=4U;
si3=l1;
si4=24U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si3=i32_load(&i->m0,(U64)si3+12U);
si0=TF(i->t0,si3,U32 (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
l1=si0;
goto L1;
L65:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=1537754U;
si2=4U;
si3=l1;
si4=24U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si3=i32_load(&i->m0,(U64)si3+12U);
si0=TF(i->t0,si3,U32 (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
l1=si0;
goto L1;
L64:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=1537758U;
si2=3U;
si3=l1;
si4=24U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si3=i32_load(&i->m0,(U64)si3+12U);
si0=TF(i->t0,si3,U32 (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
l1=si0;
goto L1;
L63:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=1537761U;
si2=3U;
si3=l1;
si4=24U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si3=i32_load(&i->m0,(U64)si3+12U);
si0=TF(i->t0,si3,U32 (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
l1=si0;
goto L1;
L62:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=1537764U;
si2=4U;
si3=l1;
si4=24U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si3=i32_load(&i->m0,(U64)si3+12U);
si0=TF(i->t0,si3,U32 (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
l1=si0;
goto L1;
L61:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=1537768U;
si2=4U;
si3=l1;
si4=24U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si3=i32_load(&i->m0,(U64)si3+12U);
si0=TF(i->t0,si3,U32 (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
l1=si0;
goto L1;
L60:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=1537772U;
si2=4U;
si3=l1;
si4=24U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si3=i32_load(&i->m0,(U64)si3+12U);
si0=TF(i->t0,si3,U32 (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
l1=si0;
goto L1;
L59:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=1537776U;
si2=5U;
si3=l1;
si4=24U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si3=i32_load(&i->m0,(U64)si3+12U);
si0=TF(i->t0,si3,U32 (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
l1=si0;
goto L1;
L58:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=1537781U;
si2=4U;
si3=l1;
si4=24U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si3=i32_load(&i->m0,(U64)si3+12U);
si0=TF(i->t0,si3,U32 (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
l1=si0;
goto L1;
L57:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=1537785U;
si2=4U;
si3=l1;
si4=24U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si3=i32_load(&i->m0,(U64)si3+12U);
si0=TF(i->t0,si3,U32 (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
l1=si0;
goto L1;
L56:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=1537789U;
si2=4U;
si3=l1;
si4=24U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si3=i32_load(&i->m0,(U64)si3+12U);
si0=TF(i->t0,si3,U32 (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
l1=si0;
goto L1;
L55:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=1537793U;
si2=4U;
si3=l1;
si4=24U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si3=i32_load(&i->m0,(U64)si3+12U);
si0=TF(i->t0,si3,U32 (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
l1=si0;
goto L1;
L54:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=1537797U;
si2=4U;
si3=l1;
si4=24U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si3=i32_load(&i->m0,(U64)si3+12U);
si0=TF(i->t0,si3,U32 (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
l1=si0;
goto L1;
L53:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=1537801U;
si2=4U;
si3=l1;
si4=24U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si3=i32_load(&i->m0,(U64)si3+12U);
si0=TF(i->t0,si3,U32 (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
l1=si0;
goto L1;
L52:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=1537805U;
si2=4U;
si3=l1;
si4=24U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si3=i32_load(&i->m0,(U64)si3+12U);
si0=TF(i->t0,si3,U32 (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
l1=si0;
goto L1;
L51:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=1537809U;
si2=4U;
si3=l1;
si4=24U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si3=i32_load(&i->m0,(U64)si3+12U);
si0=TF(i->t0,si3,U32 (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
l1=si0;
goto L1;
L50:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=1537813U;
si2=5U;
si3=l1;
si4=24U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si3=i32_load(&i->m0,(U64)si3+12U);
si0=TF(i->t0,si3,U32 (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
l1=si0;
goto L1;
L49:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=1537818U;
si2=5U;
si3=l1;
si4=24U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si3=i32_load(&i->m0,(U64)si3+12U);
si0=TF(i->t0,si3,U32 (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
l1=si0;
goto L1;
L48:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=1537823U;
si2=4U;
si3=l1;
si4=24U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si3=i32_load(&i->m0,(U64)si3+12U);
si0=TF(i->t0,si3,U32 (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
l1=si0;
goto L1;
L47:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=1537827U;
si2=5U;
si3=l1;
si4=24U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si3=i32_load(&i->m0,(U64)si3+12U);
si0=TF(i->t0,si3,U32 (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
l1=si0;
goto L1;
L46:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=1537832U;
si2=4U;
si3=l1;
si4=24U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si3=i32_load(&i->m0,(U64)si3+12U);
si0=TF(i->t0,si3,U32 (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
l1=si0;
goto L1;
L45:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=1537836U;
si2=3U;
si3=l1;
si4=24U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si3=i32_load(&i->m0,(U64)si3+12U);
si0=TF(i->t0,si3,U32 (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
l1=si0;
goto L1;
L44:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=1537839U;
si2=4U;
si3=l1;
si4=24U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si3=i32_load(&i->m0,(U64)si3+12U);
si0=TF(i->t0,si3,U32 (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
l1=si0;
goto L1;
L43:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=1537843U;
si2=4U;
si3=l1;
si4=24U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si3=i32_load(&i->m0,(U64)si3+12U);
si0=TF(i->t0,si3,U32 (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
l1=si0;
goto L1;
L42:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=1537847U;
si2=5U;
si3=l1;
si4=24U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si3=i32_load(&i->m0,(U64)si3+12U);
si0=TF(i->t0,si3,U32 (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
l1=si0;
goto L1;
L41:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=1537852U;
si2=7U;
si3=l1;
si4=24U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si3=i32_load(&i->m0,(U64)si3+12U);
si0=TF(i->t0,si3,U32 (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
l1=si0;
goto L1;
L40:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=1537859U;
si2=6U;
si3=l1;
si4=24U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si3=i32_load(&i->m0,(U64)si3+12U);
si0=TF(i->t0,si3,U32 (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
l1=si0;
goto L1;
L39:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=1537865U;
si2=6U;
si3=l1;
si4=24U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si3=i32_load(&i->m0,(U64)si3+12U);
si0=TF(i->t0,si3,U32 (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
l1=si0;
goto L1;
L38:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=1537871U;
si2=5U;
si3=l1;
si4=24U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si3=i32_load(&i->m0,(U64)si3+12U);
si0=TF(i->t0,si3,U32 (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
l1=si0;
goto L1;
L37:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=1537876U;
si2=4U;
si3=l1;
si4=24U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si3=i32_load(&i->m0,(U64)si3+12U);
si0=TF(i->t0,si3,U32 (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
l1=si0;
goto L1;
L36:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=1537880U;
si2=8U;
si3=l1;
si4=24U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si3=i32_load(&i->m0,(U64)si3+12U);
si0=TF(i->t0,si3,U32 (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
l1=si0;
goto L1;
L35:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=1537888U;
si2=7U;
si3=l1;
si4=24U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si3=i32_load(&i->m0,(U64)si3+12U);
si0=TF(i->t0,si3,U32 (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
l1=si0;
goto L1;
L34:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=1537895U;
si2=7U;
si3=l1;
si4=24U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si3=i32_load(&i->m0,(U64)si3+12U);
si0=TF(i->t0,si3,U32 (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
l1=si0;
goto L1;
L33:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=1537902U;
si2=7U;
si3=l1;
si4=24U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si3=i32_load(&i->m0,(U64)si3+12U);
si0=TF(i->t0,si3,U32 (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
l1=si0;
goto L1;
L32:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=1537909U;
si2=7U;
si3=l1;
si4=24U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si3=i32_load(&i->m0,(U64)si3+12U);
si0=TF(i->t0,si3,U32 (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
l1=si0;
goto L1;
L31:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=1537916U;
si2=10U;
si3=l1;
si4=24U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si3=i32_load(&i->m0,(U64)si3+12U);
si0=TF(i->t0,si3,U32 (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
l1=si0;
goto L1;
L30:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=1537926U;
si2=5U;
si3=l1;
si4=24U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si3=i32_load(&i->m0,(U64)si3+12U);
si0=TF(i->t0,si3,U32 (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
l1=si0;
goto L1;
L29:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=1537931U;
si2=5U;
si3=l1;
si4=24U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si3=i32_load(&i->m0,(U64)si3+12U);
si0=TF(i->t0,si3,U32 (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
l1=si0;
goto L1;
L28:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=1537936U;
si2=6U;
si3=l1;
si4=24U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si3=i32_load(&i->m0,(U64)si3+12U);
si0=TF(i->t0,si3,U32 (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
l1=si0;
goto L1;
L27:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=1537942U;
si2=6U;
si3=l1;
si4=24U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si3=i32_load(&i->m0,(U64)si3+12U);
si0=TF(i->t0,si3,U32 (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
l1=si0;
goto L1;
L26:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=1537948U;
si2=8U;
si3=l1;
si4=24U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si3=i32_load(&i->m0,(U64)si3+12U);
si0=TF(i->t0,si3,U32 (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
l1=si0;
goto L1;
L25:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=1537956U;
si2=9U;
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
si1=1537965U;
si2=5U;
si3=l1;
si4=24U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si3=i32_load(&i->m0,(U64)si3+12U);
si0=TF(i->t0,si3,U32 (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
l1=si0;
goto L1;
L23:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=1537970U;
si2=6U;
si3=l1;
si4=24U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si3=i32_load(&i->m0,(U64)si3+12U);
si0=TF(i->t0,si3,U32 (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
l1=si0;
goto L1;
L22:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=1537976U;
si2=8U;
si3=l1;
si4=24U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si3=i32_load(&i->m0,(U64)si3+12U);
si0=TF(i->t0,si3,U32 (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
l1=si0;
goto L1;
L21:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=1537984U;
si2=4U;
si3=l1;
si4=24U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si3=i32_load(&i->m0,(U64)si3+12U);
si0=TF(i->t0,si3,U32 (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
l1=si0;
goto L1;
L20:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=1537988U;
si2=8U;
si3=l1;
si4=24U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si3=i32_load(&i->m0,(U64)si3+12U);
si0=TF(i->t0,si3,U32 (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
l1=si0;
goto L1;
L19:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=1537996U;
si2=4U;
si3=l1;
si4=24U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si3=i32_load(&i->m0,(U64)si3+12U);
si0=TF(i->t0,si3,U32 (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
l1=si0;
goto L1;
L18:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=1538000U;
si2=4U;
si3=l1;
si4=24U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si3=i32_load(&i->m0,(U64)si3+12U);
si0=TF(i->t0,si3,U32 (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
l1=si0;
goto L1;
L17:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=1538004U;
si2=8U;
si3=l1;
si4=24U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si3=i32_load(&i->m0,(U64)si3+12U);
si0=TF(i->t0,si3,U32 (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
l1=si0;
goto L1;
L16:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=1538012U;
si2=10U;
si3=l1;
si4=24U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si3=i32_load(&i->m0,(U64)si3+12U);
si0=TF(i->t0,si3,U32 (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
l1=si0;
goto L1;
L15:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=1538022U;
si2=5U;
si3=l1;
si4=24U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si3=i32_load(&i->m0,(U64)si3+12U);
si0=TF(i->t0,si3,U32 (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
l1=si0;
goto L1;
L14:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=1538027U;
si2=4U;
si3=l1;
si4=24U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si3=i32_load(&i->m0,(U64)si3+12U);
si0=TF(i->t0,si3,U32 (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
l1=si0;
goto L1;
L13:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=1538031U;
si2=6U;
si3=l1;
si4=24U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si3=i32_load(&i->m0,(U64)si3+12U);
si0=TF(i->t0,si3,U32 (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
l1=si0;
goto L1;
L12:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=1538037U;
si2=7U;
si3=l1;
si4=24U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si3=i32_load(&i->m0,(U64)si3+12U);
si0=TF(i->t0,si3,U32 (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
l1=si0;
goto L1;
L11:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=1538044U;
si2=8U;
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
si1=1538052U;
si2=5U;
si3=l1;
si4=24U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si3=i32_load(&i->m0,(U64)si3+12U);
si0=TF(i->t0,si3,U32 (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
l1=si0;
goto L1;
L9:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=1538057U;
si2=7U;
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
si1=1538064U;
si2=7U;
si3=l1;
si4=24U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si3=i32_load(&i->m0,(U64)si3+12U);
si0=TF(i->t0,si3,U32 (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
l1=si0;
goto L1;
L7:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=1538071U;
si2=6U;
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
si1=1538077U;
si2=6U;
si3=l1;
si4=24U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si3=i32_load(&i->m0,(U64)si3+12U);
si0=TF(i->t0,si3,U32 (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
l1=si0;
goto L1;
L5:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=1538083U;
si2=7U;
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
si1=1538090U;
si2=12U;
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
si1=1538102U;
si2=16U;
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
si1=1538118U;
si2=15U;
si3=l1;
si4=24U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si3=i32_load(&i->m0,(U64)si3+12U);
si0=TF(i->t0,si3,U32 (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
l1=si0;
L1:;
si0=l2;
si1=208U;
si0+=si1;
i->g0=si0;
si0=l1;
L0:;
return si0;
}

U32 f3447(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 si0,si1,si2,si3;
U64 sj1;
si0=i->g0;
si1=32U;
si0-=si1;
l2=si0;
i->g0=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
l0=si0;
si0=l2;
si1=501U;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l2;
si1=l0;
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
si1=24U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l0=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+20U);
l1=si0;
si0=l2;
sj1=1ULL;
i64_store(&i->m0,(U64)si0+20U,sj1);
si0=l2;
si1=1U;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l2;
si1=1537576U;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l2;
si1=l2;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l1;
si1=l0;
si2=l2;
si3=8U;
si2+=si3;
si0=f690(i,si0,si1,si2);
l1=si0;
si0=l2;
si1=32U;
si0+=si1;
i->g0=si0;
si0=l1;
L0:;
return si0;
}

U32 f3448(rustpythonInstance*i,U32 l0,U32 l1) {
U32 si0,si1;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
si1=l1;
si0=f3449(i,si0,si1);
L0:;
return si0;
}

U32 f3449(rustpythonInstance*i,U32 l0,U32 l1) {
U32 si0,si1,si2,si3,si4;
si0=l0;
si0=i32_load8_u(&i->m0,(U64)si0);
switch(si0){
case 0:
goto L7;
case 1:
goto L6;
case 2:
goto L5;
case 3:
goto L4;
case 4:
goto L3;
case 5:
goto L2;
case 6:
goto L1;
default:
goto L7;
}
L7:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=1537504U;
si2=0U;
si3=l1;
si4=24U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si3=i32_load(&i->m0,(U64)si3+12U);
si0=TF(i->t0,si3,U32 (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
goto L0;
L6:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=1538184U;
si2=1U;
si3=l1;
si4=24U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si3=i32_load(&i->m0,(U64)si3+12U);
si0=TF(i->t0,si3,U32 (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
goto L0;
L5:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=1538185U;
si2=1U;
si3=l1;
si4=24U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si3=i32_load(&i->m0,(U64)si3+12U);
si0=TF(i->t0,si3,U32 (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
goto L0;
L4:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=1538186U;
si2=1U;
si3=l1;
si4=24U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si3=i32_load(&i->m0,(U64)si3+12U);
si0=TF(i->t0,si3,U32 (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
goto L0;
L3:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=1538187U;
si2=2U;
si3=l1;
si4=24U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si3=i32_load(&i->m0,(U64)si3+12U);
si0=TF(i->t0,si3,U32 (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
goto L0;
L2:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=1538189U;
si2=2U;
si3=l1;
si4=24U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si3=i32_load(&i->m0,(U64)si3+12U);
si0=TF(i->t0,si3,U32 (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
goto L0;
L1:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=1538191U;
si2=1U;
si3=l1;
si4=24U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si3=i32_load(&i->m0,(U64)si3+12U);
si0=TF(i->t0,si3,U32 (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
L0:;
return si0;
}

U32 f3450(rustpythonInstance*i,U32 l0,U32 l1) {
U32 si0,si1;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
si0=i32_load(&i->m0,(U64)si0);
si1=l1;
si0=f3520(i,si0,si1);
L0:;
return si0;
}

void f3451(rustpythonInstance*i,U32 l0) {
L0:;
}

void f3452(rustpythonInstance*i,U32 l0) {
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

void f3453(rustpythonInstance*i,U32 l0) {
L0:;
}

void f3454(rustpythonInstance*i,U32 l0) {
L0:;
}

U32 f3455(rustpythonInstance*i,U32 l0,U32 l1) {
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

U32 f3456(rustpythonInstance*i,U32 l0,U32 l1) {
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

U32 f3457(rustpythonInstance*i,U32 l0,U32 l1) {
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
si1=98U;
si0=si0 == si1;
if(si0){
goto L3;
}
si0=l2;
si1=l0;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l2;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+20U);
si2=1537536U;
si3=2U;
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
si2=1537540U;
si0=f716(i,si0,si1,si2);
si0=l2;
si0=i32_load8_u(&i->m0,(U64)si0+24U);
l0=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+16U);
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
si1=l0;
si2=4U;
si1+=si2;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l2;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+20U);
si2=1537556U;
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
si2=1537560U;
si0=f716(i,si0,si1,si2);
si0=l2;
si0=i32_load8_u(&i->m0,(U64)si0+24U);
l0=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+16U);
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

U32 f3458(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
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
U64 l13=0;
U64 l14=0;
U32 l15=0;
U32 si0,si1,si2,si3;
U64 sj0,sj1,sj2;
si0=0U;
l3=si0;
si0=l2;
l4=si0;
si0=l1;
l5=si0;
si0=l2;
si1=4U;
si0=si0 < si1;
if(si0){
goto L1;
}
si0=l2;
si1=-4U;
si0+=si1;
l6=si0;
si1=2U;
si0>>=(si1&31);
si1=1U;
si0+=si1;
l3=si0;
si1=1U;
si0&=si1;
l7=si0;
si0=l6;
si1=4U;
si0=si0 >= si1;
if(si0){
goto L3;
}
si0=0U;
l3=si0;
si0=l1;
l5=si0;
si0=l2;
l4=si0;
goto L2;
L3:;
si0=l3;
si1=2147483646U;
si0&=si1;
l8=si0;
si0=0U;
l3=si0;
si0=l1;
l6=si0;
si0=l2;
l4=si0;
L4:;
{
si0=l4;
si1=-8U;
si0+=si1;
l4=si0;
si0=l6;
si0=i32_load(&i->m0,(U64)si0+4U);
si1=l6;
si1=i32_load(&i->m0,(U64)si1);
si2=l3;
si3=5U;
si2=I32_ROTL(si2,si3);
si1^=si2;
si2=-1640531527U;
si1*=si2;
si2=5U;
si1=I32_ROTL(si1,si2);
si0^=si1;
si1=-1640531527U;
si0*=si1;
l3=si0;
si0=l6;
si1=8U;
si0+=si1;
l5=si0;
l6=si0;
si0=l8;
si1=-2U;
si0+=si1;
l8=si0;
if(si0){
goto L4;
}
}
L2:;
si0=l7;
si0=!(si0);
if(si0){
goto L1;
}
si0=l4;
si1=-4U;
si0+=si1;
l4=si0;
si0=l5;
si0=i32_load(&i->m0,(U64)si0);
si1=l3;
si2=5U;
si1=I32_ROTL(si1,si2);
si0^=si1;
si1=-1640531527U;
si0*=si1;
l3=si0;
si0=l5;
si1=4U;
si0+=si1;
l5=si0;
L1:;
si0=l4;
si1=1U;
si0=si0 > si1;
if(si0){
goto L6;
}
si0=l5;
l6=si0;
goto L5;
L6:;
si0=l5;
si1=2U;
si0+=si1;
l6=si0;
si0=l4;
si1=-2U;
si0+=si1;
l4=si0;
si0=l3;
si1=5U;
si0=I32_ROTL(si0,si1);
si1=l5;
si1=i32_load16_u(&i->m0,(U64)si1);
si0^=si1;
si1=-1640531527U;
si0*=si1;
l3=si0;
L5:;
si0=l4;
si0=!(si0);
if(si0){
goto L7;
}
si0=l3;
si1=5U;
si0=I32_ROTL(si0,si1);
si1=l6;
si1=i32_load8_u(&i->m0,(U64)si1);
si0^=si1;
si1=-1640531527U;
si0*=si1;
l3=si0;
L7:;
si0=l3;
si1=5U;
si0=I32_ROTL(si0,si1);
si1=255U;
si0^=si1;
si1=-1640531527U;
si0*=si1;
l6=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+8U);
if(si0){
goto L8;
}
si0=l0;
si1=1U;
si2=l0;
si0=f3463(i,si0,si1,si2);
L8:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
l9=si0;
si1=-8U;
si0+=si1;
l8=si0;
si0=l6;
si1=25U;
si0>>=(si1&31);
l10=si0;
sj0=(U64)(si0);
sj1=72340172838076673ULL;
sj0*=sj1;
l11=sj0;
si0=l0;
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
si0=0U;
l12=si0;
si0=0U;
l7=si0;
L9:;
{
si0=l9;
si1=l6;
si2=l4;
si1&=si2;
l3=si1;
si0+=si1;
sj0=i64_load(&i->m0,(U64)si0);
l13=sj0;
sj1=l11;
sj0^=sj1;
l14=sj0;
sj1=-1ULL;
sj0^=sj1;
sj1=l14;
sj2=-72340172838076673ULL;
sj1+=sj2;
sj0&=sj1;
sj1=-9187201950435737472ULL;
sj0&=sj1;
l14=sj0;
si0=!(sj0);
if(si0){
goto L10;
}
L12:;
{
si0=l8;
sj1=l14;
sj1=I64_CTZ(sj1);
si1=(U32)(sj1);
si2=3U;
si1>>=(si2&31);
si2=l3;
si1+=si2;
si2=l4;
si1&=si2;
si2=3U;
si1<<=(si2&31);
si0-=si1;
l6=si0;
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=l2;
si0=si0 != si1;
if(si0){
goto L13;
}
si0=l1;
si1=l6;
si1=i32_load(&i->m0,(U64)si1);
si2=l2;
si0=f15389(i,si0,si1,si2);
si0=!(si0);
if(si0){
goto L11;
}
L13:;
sj0=l14;
sj1=-1ULL;
sj0+=sj1;
sj1=l14;
sj0&=sj1;
l14=sj0;
si0=!(sj0);
if(si0){
goto L10;
}
goto L12;
}
L11:;
si0=1U;
goto L0;
L10:;
sj0=l13;
sj1=-9187201950435737472ULL;
sj0&=sj1;
l14=sj0;
si0=1U;
l5=si0;
si0=l7;
si1=1U;
si0=si0 == si1;
if(si0){
goto L14;
}
sj0=l14;
sj1=0ULL;
si0=sj0 != sj1;
l5=si0;
sj0=l14;
sj0=I64_CTZ(sj0);
si0=(U32)(sj0);
si1=3U;
si0>>=(si1&31);
si1=l3;
si0+=si1;
si1=l4;
si0&=si1;
l15=si0;
L14:;
sj0=l14;
sj1=l13;
sj2=1ULL;
sj1<<=(sj2&63);
sj0&=sj1;
si0=!(sj0);
si0=!(si0);
if(si0){
goto L15;
}
si0=l3;
si1=l12;
si2=8U;
si1+=si2;
l12=si1;
si0+=si1;
l6=si0;
si0=l5;
l7=si0;
goto L9;
L15:;
}
si0=l9;
si1=l15;
si0+=si1;
si0=i32_load8_s(&i->m0,(U64)si0);
l6=si0;
si1=0U;
si0=(U32)((I32)si0<(I32)si1);
if(si0){
goto L16;
}
si0=l9;
si1=l9;
sj1=i64_load(&i->m0,(U64)si1);
sj2=-9187201950435737472ULL;
sj1&=sj2;
sj1=I64_CTZ(sj1);
si1=(U32)(sj1);
si2=3U;
si1>>=(si2&31);
l15=si1;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
l6=si0;
L16:;
si0=l9;
si1=l15;
si0+=si1;
si1=l10;
i32_store8(&i->m0,(U64)si0,si1);
si0=l15;
si1=-8U;
si0+=si1;
si1=l4;
si0&=si1;
si1=l9;
si0+=si1;
si1=8U;
si0+=si1;
si1=l10;
i32_store8(&i->m0,(U64)si0,si1);
si0=l0;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+8U);
si2=l6;
si3=1U;
si2&=si3;
si1-=si2;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l0;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+12U);
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l9;
si1=l15;
si2=3U;
si1<<=(si2&31);
si0-=si1;
si1=-8U;
si0+=si1;
l6=si0;
si1=l1;
i32_store(&i->m0,(U64)si0,si1);
si0=l6;
si1=4U;
si0+=si1;
si1=l2;
i32_store(&i->m0,(U64)si0,si1);
si0=0U;
L0:;
return si0;
}

U32 f3459(rustpythonInstance*i,U32 l0,U32 l1) {
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
U32 l13=0;
U64 l14=0;
U64 l15=0;
U32 l16=0;
U32 si0,si1,si2,si3,si4;
U64 sj0,sj1,sj2,sj3;
si0=0U;
l2=si0;
si0=l1;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
l4=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
l6=si0;
si0=l3;
si1=4U;
si0=si0 < si1;
if(si0){
goto L1;
}
si0=l3;
si1=-4U;
si0+=si1;
l7=si0;
si1=2U;
si0>>=(si1&31);
si1=1U;
si0+=si1;
l2=si0;
si1=1U;
si0&=si1;
l8=si0;
si0=l7;
si1=4U;
si0=si0 >= si1;
if(si0){
goto L3;
}
si0=0U;
l2=si0;
si0=l5;
l6=si0;
si0=l3;
l4=si0;
goto L2;
L3:;
si0=l2;
si1=2147483646U;
si0&=si1;
l9=si0;
si0=0U;
l2=si0;
si0=l5;
l7=si0;
si0=l3;
l4=si0;
L4:;
{
si0=l4;
si1=-8U;
si0+=si1;
l4=si0;
si0=l7;
si0=i32_load(&i->m0,(U64)si0+4U);
si1=l7;
si1=i32_load(&i->m0,(U64)si1);
si2=l2;
si3=5U;
si2=I32_ROTL(si2,si3);
si1^=si2;
si2=-1640531527U;
si1*=si2;
si2=5U;
si1=I32_ROTL(si1,si2);
si0^=si1;
si1=-1640531527U;
si0*=si1;
l2=si0;
si0=l7;
si1=8U;
si0+=si1;
l6=si0;
l7=si0;
si0=l9;
si1=-2U;
si0+=si1;
l9=si0;
if(si0){
goto L4;
}
}
L2:;
si0=l8;
si0=!(si0);
if(si0){
goto L1;
}
si0=l4;
si1=-4U;
si0+=si1;
l4=si0;
si0=l6;
si0=i32_load(&i->m0,(U64)si0);
si1=l2;
si2=5U;
si1=I32_ROTL(si1,si2);
si0^=si1;
si1=-1640531527U;
si0*=si1;
l2=si0;
si0=l6;
si1=4U;
si0+=si1;
l6=si0;
L1:;
si0=l4;
si1=1U;
si0=si0 > si1;
if(si0){
goto L6;
}
si0=l6;
l7=si0;
goto L5;
L6:;
si0=l6;
si1=2U;
si0+=si1;
l7=si0;
si0=l4;
si1=-2U;
si0+=si1;
l4=si0;
si0=l2;
si1=5U;
si0=I32_ROTL(si0,si1);
si1=l6;
si1=i32_load16_u(&i->m0,(U64)si1);
si0^=si1;
si1=-1640531527U;
si0*=si1;
l2=si0;
L5:;
si0=l4;
si0=!(si0);
if(si0){
goto L7;
}
si0=l2;
si1=5U;
si0=I32_ROTL(si0,si1);
si1=l7;
si1=i32_load8_u(&i->m0,(U64)si1);
si0^=si1;
si1=-1640531527U;
si0*=si1;
l2=si0;
L7:;
si0=l2;
si1=5U;
si0=I32_ROTL(si0,si1);
si1=255U;
si0^=si1;
si1=-1640531527U;
si0*=si1;
l7=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+8U);
if(si0){
goto L8;
}
si0=l0;
si1=1U;
si2=l0;
si0=f3464(i,si0,si1,si2);
L8:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
l10=si0;
si1=-12U;
si0+=si1;
l9=si0;
si0=l7;
si1=25U;
si0>>=(si1&31);
l11=si0;
sj0=(U64)(si0);
sj1=72340172838076673ULL;
sj0*=sj1;
l12=sj0;
si0=l0;
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
si0=0U;
l13=si0;
si0=0U;
l8=si0;
L10:;
{
si0=l10;
si1=l7;
si2=l4;
si1&=si2;
l2=si1;
si0+=si1;
sj0=i64_load(&i->m0,(U64)si0);
l14=sj0;
sj1=l12;
sj0^=sj1;
l15=sj0;
sj1=-1ULL;
sj0^=sj1;
sj1=l15;
sj2=-72340172838076673ULL;
sj1+=sj2;
sj0&=sj1;
sj1=-9187201950435737472ULL;
sj0&=sj1;
l15=sj0;
si0=!(sj0);
if(si0){
goto L11;
}
L13:;
{
si0=l3;
si1=l9;
si2=0U;
sj3=l15;
sj3=I64_CTZ(sj3);
si3=(U32)(sj3);
si4=3U;
si3>>=(si4&31);
si4=l2;
si3+=si4;
si4=l4;
si3&=si4;
si2-=si3;
si3=12U;
si2*=si3;
si1+=si2;
l7=si1;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
si0=si0 != si1;
if(si0){
goto L14;
}
si0=l5;
si1=l7;
si1=i32_load(&i->m0,(U64)si1);
si2=l3;
si0=f15389(i,si0,si1,si2);
si0=!(si0);
if(si0){
goto L12;
}
L14:;
sj0=l15;
sj1=-1ULL;
sj0+=sj1;
sj1=l15;
sj0&=sj1;
l15=sj0;
si0=!(sj0);
if(si0){
goto L11;
}
goto L13;
}
L12:;
si0=1U;
l3=si0;
si0=l1;
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L9;
}
si0=l5;
f15271(i,si0);
si0=1U;
goto L0;
L11:;
sj0=l14;
sj1=-9187201950435737472ULL;
sj0&=sj1;
l15=sj0;
si0=1U;
l6=si0;
si0=l8;
si1=1U;
si0=si0 == si1;
if(si0){
goto L15;
}
sj0=l15;
sj1=0ULL;
si0=sj0 != sj1;
l6=si0;
sj0=l15;
sj0=I64_CTZ(sj0);
si0=(U32)(sj0);
si1=3U;
si0>>=(si1&31);
si1=l2;
si0+=si1;
si1=l4;
si0&=si1;
l16=si0;
L15:;
sj0=l15;
sj1=l14;
sj2=1ULL;
sj1<<=(sj2&63);
sj0&=sj1;
si0=!(sj0);
si0=!(si0);
if(si0){
goto L16;
}
si0=l2;
si1=l13;
si2=8U;
si1+=si2;
l13=si1;
si0+=si1;
l7=si0;
si0=l6;
l8=si0;
goto L10;
L16:;
}
si0=0U;
l3=si0;
si0=l10;
si1=l16;
si0+=si1;
si0=i32_load8_s(&i->m0,(U64)si0);
l7=si0;
si1=0U;
si0=(U32)((I32)si0<(I32)si1);
if(si0){
goto L17;
}
si0=l10;
si1=l10;
sj1=i64_load(&i->m0,(U64)si1);
sj2=-9187201950435737472ULL;
sj1&=sj2;
sj1=I64_CTZ(sj1);
si1=(U32)(sj1);
si2=3U;
si1>>=(si2&31);
l16=si1;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
l7=si0;
L17:;
si0=l10;
si1=l16;
si0+=si1;
si1=l11;
i32_store8(&i->m0,(U64)si0,si1);
si0=l0;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+8U);
si2=l7;
si3=1U;
si2&=si3;
si1-=si2;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l0;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+12U);
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l16;
si1=-8U;
si0+=si1;
si1=l4;
si0&=si1;
si1=l10;
si0+=si1;
si1=8U;
si0+=si1;
si1=l11;
i32_store8(&i->m0,(U64)si0,si1);
si0=l10;
si1=0U;
si2=l16;
si1-=si2;
si2=12U;
si1*=si2;
si0+=si1;
si1=-12U;
si0+=si1;
l7=si0;
si1=8U;
si0+=si1;
si1=l1;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l7;
si1=l1;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
L9:;
si0=l3;
L0:;
return si0;
}

void f3460(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 si0,si1,si2;
U64 sj1;
si0=i->g0;
si1=64U;
si0-=si1;
l2=si0;
i->g0=si0;
si0=l1;
si1=-66U;
si0+=si1;
switch(si0){
case 0:
goto L2;
case 1:
goto L6;
case 2:
goto L6;
case 3:
goto L6;
case 4:
goto L4;
case 5:
goto L6;
case 6:
goto L6;
case 7:
goto L6;
case 8:
goto L6;
case 9:
goto L6;
case 10:
goto L6;
case 11:
goto L6;
case 12:
goto L6;
case 13:
goto L6;
case 14:
goto L6;
case 15:
goto L6;
case 16:
goto L5;
case 17:
goto L6;
case 18:
goto L6;
case 19:
goto L3;
case 20:
goto L6;
case 21:
goto L6;
case 22:
goto L6;
case 23:
goto L6;
case 24:
goto L6;
case 25:
goto L6;
case 26:
goto L6;
case 27:
goto L6;
case 28:
goto L6;
case 29:
goto L6;
case 30:
goto L6;
case 31:
goto L6;
case 32:
goto L2;
case 33:
goto L6;
case 34:
goto L6;
case 35:
goto L6;
case 36:
goto L4;
case 37:
goto L6;
case 38:
goto L6;
case 39:
goto L6;
case 40:
goto L6;
case 41:
goto L6;
case 42:
goto L6;
case 43:
goto L6;
case 44:
goto L6;
case 45:
goto L6;
case 46:
goto L6;
case 47:
goto L6;
case 48:
goto L5;
case 49:
goto L6;
case 50:
goto L6;
case 51:
goto L3;
default:
goto L6;
}
L6:;
si0=l2;
si1=l1;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l2;
si1=44U;
si0+=si1;
sj1=1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=1U;
i32_store(&i->m0,(U64)si0+36U,si1);
si0=l2;
si1=1538160U;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l2;
si1=21U;
i32_store(&i->m0,(U64)si0+60U,si1);
si0=l2;
si1=l2;
si2=56U;
si1+=si2;
i32_store(&i->m0,(U64)si0+40U,si1);
si0=l2;
si1=l2;
si2=12U;
si1+=si2;
i32_store(&i->m0,(U64)si0+56U,si1);
si0=l2;
si1=16U;
si0+=si1;
si1=l2;
si2=32U;
si1+=si2;
f63(i,si0,si1);
si0=l0;
si1=8U;
si0+=si1;
si1=l2;
si2=16U;
si1+=si2;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l2;
sj1=i64_load(&i->m0,(U64)si1+16U);
i64_store(&i->m0,(U64)si0,sj1);
goto L1;
L5:;
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=3U;
i32_store8(&i->m0,(U64)si0+4U,si1);
goto L1;
L4:;
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=1U;
i32_store8(&i->m0,(U64)si0+4U,si1);
goto L1;
L3:;
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=6U;
i32_store8(&i->m0,(U64)si0+4U,si1);
goto L1;
L2:;
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=2U;
i32_store8(&i->m0,(U64)si0+4U,si1);
L1:;
si0=l2;
si1=64U;
si0+=si1;
i->g0=si0;
L0:;
}

void f3461(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
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
si1=-66U;
si0+=si1;
l4=si0;
si1=30U;
si0=I32_ROTL(si0,si1);
l5=si0;
si1=12U;
si0=si0 > si1;
if(si0){
goto L7;
}
si0=1U;
si1=l5;
si0<<=(si1&31);
l6=si0;
si1=257U;
si0&=si1;
if(si0){
goto L3;
}
si0=l6;
si1=514U;
si0&=si1;
if(si0){
goto L5;
}
si0=1U;
si1=l5;
si0<<=(si1&31);
si1=4112U;
si0&=si1;
if(si0){
goto L6;
}
L7:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
l6=si0;
goto L2;
L6:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
l6=si0;
si1=32U;
si0|=si1;
si1=102U;
si0=si0 != si1;
if(si0){
goto L8;
}
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=4U;
i32_store8(&i->m0,(U64)si0+4U,si1);
goto L1;
L8:;
si0=l5;
si1=-4U;
si0+=si1;
switch(si0){
case 0:
goto L4;
case 1:
goto L2;
case 2:
goto L2;
case 3:
goto L2;
case 4:
goto L3;
case 5:
goto L5;
case 6:
goto L2;
case 7:
goto L2;
case 8:
goto L4;
default:
goto L2;
}
L5:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
l6=si0;
si1=32U;
si0|=si1;
si1=114U;
si0=si0 != si1;
if(si0){
goto L9;
}
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=4U;
i32_store8(&i->m0,(U64)si0+4U,si1);
goto L1;
L9:;
si0=l4;
si1=28U;
si0=I32_ROTL(si0,si1);
switch(si0){
case 0:
goto L3;
case 1:
goto L4;
case 2:
goto L3;
case 3:
goto L4;
default:
goto L2;
}
L4:;
si0=l6;
si1=32U;
si0|=si1;
si1=98U;
si0=si0 != si1;
if(si0){
goto L10;
}
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=5U;
i32_store8(&i->m0,(U64)si0+4U,si1);
goto L1;
L10:;
si0=l3;
si1=32U;
si0|=si1;
si1=98U;
si0=si0 != si1;
if(si0){
goto L2;
}
L3:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
l6=si0;
si1=32U;
si0|=si1;
si1=114U;
si0=si0 != si1;
if(si0){
goto L2;
}
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=5U;
i32_store8(&i->m0,(U64)si0+4U,si1);
goto L1;
L2:;
si0=l2;
si1=l3;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=l6;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l2;
si1=24U;
si0+=si1;
si1=12U;
si0+=si1;
sj1=2ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=48U;
si0+=si1;
si1=12U;
si0+=si1;
si1=21U;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=2U;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l2;
si1=1538168U;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l2;
si1=21U;
i32_store(&i->m0,(U64)si0+52U,si1);
si0=l2;
si1=l2;
si2=48U;
si1+=si2;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l2;
si1=l2;
si2=4U;
si1+=si2;
i32_store(&i->m0,(U64)si0+56U,si1);
si0=l2;
si1=l2;
i32_store(&i->m0,(U64)si0+48U,si1);
si0=l2;
si1=8U;
si0+=si1;
si1=l2;
si2=24U;
si1+=si2;
f63(i,si0,si1);
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
si0=l0;
si1=l2;
sj1=i64_load(&i->m0,(U64)si1+8U);
i64_store(&i->m0,(U64)si0,sj1);
L1:;
si0=l2;
si1=64U;
si0+=si1;
i->g0=si0;
L0:;
}

U32 f3462(rustpythonInstance*i,U32 l0,U32 l1) {
U32 si0,si1,si2,si3,si4;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=l0;
si1=i32_load8_u(&i->m0,(U64)si1);
si2=2U;
si1<<=(si2&31);
l0=si1;
si2=1538996U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
si2=l0;
si3=1538968U;
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

U32 f3463(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
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
U32 si0,si1,si2,si3,si4;
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
si1=l1;
si0+=si1;
l1=si0;
si1=l4;
si0=si0 < si1;
if(si0){
goto L7;
}
si0=l1;
si1=l0;
si2=4U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
l5=si1;
si2=l5;
si3=1U;
si2+=si3;
l6=si2;
si3=3U;
si2>>=(si3&31);
l7=si2;
si3=7U;
si2*=si3;
si3=l5;
si4=8U;
si3=si3 < si4;
si1=si3?si1:si2;
l8=si1;
si2=1U;
si1>>=(si2&31);
si0=si0 <= si1;
if(si0){
goto L6;
}
si0=l1;
si1=l8;
si2=1U;
si1+=si2;
l7=si1;
si2=l1;
si3=l7;
si2=si2 > si3;
si0=si2?si0:si1;
l7=si0;
si1=8U;
si0=si0 < si1;
if(si0){
goto L9;
}
si0=l7;
si1=536870912U;
si0=si0 >= si1;
if(si0){
goto L10;
}
si0=1U;
l1=si0;
si0=l7;
si1=3U;
si0<<=(si1&31);
l7=si0;
si1=14U;
si0=si0 < si1;
if(si0){
goto L8;
}
si0=-1U;
si1=l7;
si2=7U;
si1=DIV_U(si1,si2);
si2=-1U;
si1+=si2;
si1=I32_CLZ(si1);
si0>>=(si1&31);
si1=1U;
si0+=si1;
l1=si0;
si1=536870911U;
si0=si0 <= si1;
if(si0){
goto L8;
}
goto L1;
L10:;
si0=l3;
si1=20U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=1U;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l3;
si1=1171700U;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l3;
si1=1171708U;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l3;
si1=8U;
si0+=si1;
si1=1171792U;
f683(i,si0,si1);
UNREACHABLE;
L9:;
si0=4U;
si1=8U;
si2=l7;
si3=4U;
si2=si2 < si3;
si0=si2?si0:si1;
l1=si0;
L8:;
si0=l1;
si1=3U;
si0<<=(si1&31);
l9=si0;
si1=l1;
si2=8U;
si1+=si2;
l10=si1;
si0+=si1;
l7=si0;
si1=l9;
si0=si0 < si1;
if(si0){
goto L1;
}
si0=l7;
si1=2147483641U;
si0=si0 >= si1;
if(si0){
goto L1;
}
si0=8U;
l11=si0;
si0=l7;
si0=!(si0);
if(si0){
goto L12;
}
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=l7;
si1=7U;
si0=si0 > si1;
if(si0){
goto L14;
}
si0=8U;
si1=l7;
si0=f15277(i,si0,si1);
l11=si0;
goto L13;
L14:;
si0=l7;
si0=f15269(i,si0);
l11=si0;
L13:;
si0=l11;
si0=!(si0);
if(si0){
goto L11;
}
L12:;
si0=l11;
si1=l9;
si0+=si1;
si1=255U;
si2=l10;
si0=f15392(i,si0,si1,si2);
l9=si0;
si0=l1;
si1=-1U;
si0+=si1;
l12=si0;
si1=l1;
si2=3U;
si1>>=(si2&31);
si2=7U;
si1*=si2;
si2=l12;
si3=8U;
si2=si2 < si3;
si0=si2?si0:si1;
si1=l4;
si0-=si1;
l4=si0;
si0=l5;
si1=-1U;
si0=si0 == si1;
if(si0){
goto L4;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
l13=si0;
si1=-8U;
si0+=si1;
l14=si0;
si0=0U;
l15=si0;
L15:;
{
si0=l13;
si1=l15;
si0+=si1;
si0=i32_load8_s(&i->m0,(U64)si0);
si1=0U;
si0=(U32)((I32)si0<(I32)si1);
if(si0){
goto L16;
}
si0=l14;
si1=l15;
si2=3U;
si1<<=(si2&31);
si0-=si1;
l11=si0;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si0=0U;
l7=si0;
si0=l11;
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l11=si0;
si1=4U;
si0=si0 >= si1;
if(si0){
goto L18;
}
si0=l1;
l16=si0;
goto L17;
L18:;
si0=l11;
si1=-4U;
si0+=si1;
l10=si0;
si1=2U;
si0>>=(si1&31);
si1=1U;
si0+=si1;
l16=si0;
si1=1U;
si0&=si1;
l17=si0;
si0=0U;
l7=si0;
si0=l10;
si1=4U;
si0=si0 >= si1;
if(si0){
goto L20;
}
si0=l1;
l16=si0;
goto L19;
L20:;
si0=l16;
si1=2147483646U;
si0&=si1;
l10=si0;
si0=0U;
l7=si0;
L21:;
{
si0=l11;
si1=-8U;
si0+=si1;
l11=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
si1=l1;
si1=i32_load(&i->m0,(U64)si1);
si2=l7;
si3=5U;
si2=I32_ROTL(si2,si3);
si1^=si2;
si2=-1640531527U;
si1*=si2;
si2=5U;
si1=I32_ROTL(si1,si2);
si0^=si1;
si1=-1640531527U;
si0*=si1;
l7=si0;
si0=l1;
si1=8U;
si0+=si1;
l16=si0;
l1=si0;
si0=l10;
si1=-2U;
si0+=si1;
l10=si0;
if(si0){
goto L21;
}
}
L19:;
si0=l17;
si0=!(si0);
if(si0){
goto L17;
}
si0=l11;
si1=-4U;
si0+=si1;
l11=si0;
si0=l16;
si0=i32_load(&i->m0,(U64)si0);
si1=l7;
si2=5U;
si1=I32_ROTL(si1,si2);
si0^=si1;
si1=-1640531527U;
si0*=si1;
l7=si0;
si0=l16;
si1=4U;
si0+=si1;
l16=si0;
L17:;
si0=l11;
si1=1U;
si0=si0 > si1;
if(si0){
goto L23;
}
si0=l16;
l1=si0;
goto L22;
L23:;
si0=l16;
si1=2U;
si0+=si1;
l1=si0;
si0=l11;
si1=-2U;
si0+=si1;
l11=si0;
si0=l7;
si1=5U;
si0=I32_ROTL(si0,si1);
si1=l16;
si1=i32_load16_u(&i->m0,(U64)si1);
si0^=si1;
si1=-1640531527U;
si0*=si1;
l7=si0;
L22:;
si0=l11;
si0=!(si0);
if(si0){
goto L24;
}
si0=l7;
si1=5U;
si0=I32_ROTL(si0,si1);
si1=l1;
si1=i32_load8_u(&i->m0,(U64)si1);
si0^=si1;
si1=-1640531527U;
si0*=si1;
l7=si0;
L24:;
si0=l9;
si1=l7;
si2=5U;
si1=I32_ROTL(si1,si2);
si2=255U;
si1^=si2;
si2=-1640531527U;
si1*=si2;
l11=si1;
si2=l12;
si1&=si2;
l7=si1;
si0+=si1;
sj0=i64_load(&i->m0,(U64)si0);
sj1=-9187201950435737472ULL;
sj0&=sj1;
l18=sj0;
sj1=0ULL;
si0=sj0 != sj1;
if(si0){
goto L25;
}
si0=8U;
l1=si0;
L26:;
{
si0=l7;
si1=l1;
si0+=si1;
l7=si0;
si0=l1;
si1=8U;
si0+=si1;
l1=si0;
si0=l9;
si1=l7;
si2=l12;
si1&=si2;
l7=si1;
si0+=si1;
sj0=i64_load(&i->m0,(U64)si0);
sj1=-9187201950435737472ULL;
sj0&=sj1;
l18=sj0;
si0=!(sj0);
if(si0){
goto L26;
}
}
L25:;
si0=l9;
sj1=l18;
sj1=I64_CTZ(sj1);
si1=(U32)(sj1);
si2=3U;
si1>>=(si2&31);
si2=l7;
si1+=si2;
si2=l12;
si1&=si2;
l1=si1;
si0+=si1;
si0=i32_load8_s(&i->m0,(U64)si0);
si1=0U;
si0=(U32)((I32)si0<(I32)si1);
if(si0){
goto L27;
}
si0=l9;
sj0=i64_load(&i->m0,(U64)si0);
sj1=-9187201950435737472ULL;
sj0&=sj1;
sj0=I64_CTZ(sj0);
si0=(U32)(sj0);
si1=3U;
si0>>=(si1&31);
l1=si0;
L27:;
si0=l9;
si1=l1;
si0+=si1;
si1=l11;
si2=25U;
si1>>=(si2&31);
l7=si1;
i32_store8(&i->m0,(U64)si0,si1);
si0=l1;
si1=-8U;
si0+=si1;
si1=l12;
si0&=si1;
si1=l9;
si0+=si1;
si1=8U;
si0+=si1;
si1=l7;
i32_store8(&i->m0,(U64)si0,si1);
si0=l9;
si1=l1;
si2=-1U;
si1^=si2;
si2=3U;
si1<<=(si2&31);
si0+=si1;
si1=l13;
si2=l15;
si3=-1U;
si2^=si3;
si3=3U;
si2<<=(si3&31);
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
L16:;
si0=l15;
si1=l5;
si0=si0 == si1;
l1=si0;
si0=l15;
si1=1U;
si0+=si1;
l15=si0;
si0=l1;
if(si0){
goto L5;
}
goto L15;
}
L11:;
si0=8U;
si1=l7;
f52(i,si0,si1);
UNREACHABLE;
L7:;
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
si1=1171700U;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l3;
si1=1171708U;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l3;
si1=8U;
si0+=si1;
si1=1171792U;
f683(i,si0,si1);
UNREACHABLE;
L6:;
si0=0U;
l1=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
l9=si0;
si0=l7;
si1=l6;
si2=7U;
si1&=si2;
si2=0U;
si1=si1 != si2;
si0+=si1;
l7=si0;
si0=!(si0);
if(si0){
goto L28;
}
si0=l7;
si1=1U;
si0&=si1;
l10=si0;
si0=l7;
si1=1U;
si0=si0 == si1;
if(si0){
goto L29;
}
si0=l7;
si1=1073741822U;
si0&=si1;
l11=si0;
si0=0U;
l1=si0;
L30:;
{
si0=l9;
si1=l1;
si0+=si1;
l7=si0;
si1=l7;
sj1=i64_load(&i->m0,(U64)si1);
l18=sj1;
sj2=-1ULL;
sj1^=sj2;
sj2=7ULL;
sj1>>=(sj2&63);
sj2=72340172838076673ULL;
sj1&=sj2;
sj2=l18;
sj3=9187201950435737471ULL;
sj2|=sj3;
sj1+=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l7;
si1=8U;
si0+=si1;
l7=si0;
si1=l7;
sj1=i64_load(&i->m0,(U64)si1);
l18=sj1;
sj2=-1ULL;
sj1^=sj2;
sj2=7ULL;
sj1>>=(sj2&63);
sj2=72340172838076673ULL;
sj1&=sj2;
sj2=l18;
sj3=9187201950435737471ULL;
sj2|=sj3;
sj1+=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si1=16U;
si0+=si1;
l1=si0;
si0=l11;
si1=-2U;
si0+=si1;
l11=si0;
if(si0){
goto L30;
}
}
L29:;
si0=l10;
si0=!(si0);
if(si0){
goto L28;
}
si0=l9;
si1=l1;
si0+=si1;
l1=si0;
si1=l1;
sj1=i64_load(&i->m0,(U64)si1);
l18=sj1;
sj2=-1ULL;
sj1^=sj2;
sj2=7ULL;
sj1>>=(sj2&63);
sj2=72340172838076673ULL;
sj1&=sj2;
sj2=l18;
sj3=9187201950435737471ULL;
sj2|=sj3;
sj1+=sj2;
i64_store(&i->m0,(U64)si0,sj1);
L28:;
si0=l6;
si1=8U;
si0=si0 < si1;
if(si0){
goto L33;
}
si0=l9;
si1=l6;
si0+=si1;
si1=l9;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
goto L32;
L33:;
si0=l9;
si1=8U;
si0+=si1;
si1=l9;
si2=l6;
si0=f15391(i,si0,si1,si2);
si0=l5;
si1=-1U;
si0=si0 != si1;
if(si0){
goto L32;
}
si0=0U;
l8=si0;
goto L31;
L32:;
si0=l9;
si1=-8U;
si0+=si1;
l6=si0;
si0=0U;
l1=si0;
L34:;
{
si0=l9;
si1=l1;
l13=si1;
si0+=si1;
l17=si0;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=128U;
si0=si0 != si1;
if(si0){
goto L35;
}
si0=l6;
si1=l13;
si2=3U;
si1<<=(si2&31);
si0-=si1;
l15=si0;
si0=l9;
si1=l13;
si2=-1U;
si1^=si2;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l12=si0;
L37:;
{
si0=l15;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si0=0U;
l7=si0;
si0=l15;
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l11=si0;
si1=4U;
si0=si0 >= si1;
if(si0){
goto L39;
}
si0=l1;
l16=si0;
goto L38;
L39:;
si0=l11;
si1=-4U;
si0+=si1;
l10=si0;
si1=2U;
si0>>=(si1&31);
si1=1U;
si0+=si1;
l16=si0;
si1=1U;
si0&=si1;
l14=si0;
si0=0U;
l7=si0;
si0=l10;
si1=4U;
si0=si0 >= si1;
if(si0){
goto L41;
}
si0=l1;
l16=si0;
goto L40;
L41:;
si0=l16;
si1=2147483646U;
si0&=si1;
l10=si0;
si0=0U;
l7=si0;
L42:;
{
si0=l11;
si1=-8U;
si0+=si1;
l11=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
si1=l1;
si1=i32_load(&i->m0,(U64)si1);
si2=l7;
si3=5U;
si2=I32_ROTL(si2,si3);
si1^=si2;
si2=-1640531527U;
si1*=si2;
si2=5U;
si1=I32_ROTL(si1,si2);
si0^=si1;
si1=-1640531527U;
si0*=si1;
l7=si0;
si0=l1;
si1=8U;
si0+=si1;
l16=si0;
l1=si0;
si0=l10;
si1=-2U;
si0+=si1;
l10=si0;
if(si0){
goto L42;
}
}
L40:;
si0=l14;
si0=!(si0);
if(si0){
goto L38;
}
si0=l11;
si1=-4U;
si0+=si1;
l11=si0;
si0=l16;
si0=i32_load(&i->m0,(U64)si0);
si1=l7;
si2=5U;
si1=I32_ROTL(si1,si2);
si0^=si1;
si1=-1640531527U;
si0*=si1;
l7=si0;
si0=l16;
si1=4U;
si0+=si1;
l16=si0;
L38:;
si0=l11;
si1=1U;
si0=si0 > si1;
if(si0){
goto L44;
}
si0=l16;
l1=si0;
goto L43;
L44:;
si0=l16;
si1=2U;
si0+=si1;
l1=si0;
si0=l11;
si1=-2U;
si0+=si1;
l11=si0;
si0=l7;
si1=5U;
si0=I32_ROTL(si0,si1);
si1=l16;
si1=i32_load16_u(&i->m0,(U64)si1);
si0^=si1;
si1=-1640531527U;
si0*=si1;
l7=si0;
L43:;
si0=l11;
si0=!(si0);
if(si0){
goto L45;
}
si0=l7;
si1=5U;
si0=I32_ROTL(si0,si1);
si1=l1;
si1=i32_load8_u(&i->m0,(U64)si1);
si0^=si1;
si1=-1640531527U;
si0*=si1;
l7=si0;
L45:;
si0=l7;
si1=5U;
si0=I32_ROTL(si0,si1);
si1=255U;
si0^=si1;
si1=-1640531527U;
si0*=si1;
l10=si0;
si1=l5;
si0&=si1;
l11=si0;
l7=si0;
si0=l9;
si1=l11;
si0+=si1;
sj0=i64_load(&i->m0,(U64)si0);
sj1=-9187201950435737472ULL;
sj0&=sj1;
l18=sj0;
sj1=0ULL;
si0=sj0 != sj1;
if(si0){
goto L46;
}
si0=8U;
l1=si0;
si0=l11;
l7=si0;
L47:;
{
si0=l7;
si1=l1;
si0+=si1;
l7=si0;
si0=l1;
si1=8U;
si0+=si1;
l1=si0;
si0=l9;
si1=l7;
si2=l5;
si1&=si2;
l7=si1;
si0+=si1;
sj0=i64_load(&i->m0,(U64)si0);
sj1=-9187201950435737472ULL;
sj0&=sj1;
l18=sj0;
si0=!(sj0);
if(si0){
goto L47;
}
}
L46:;
si0=l9;
sj1=l18;
sj1=I64_CTZ(sj1);
si1=(U32)(sj1);
si2=3U;
si1>>=(si2&31);
si2=l7;
si1+=si2;
si2=l5;
si1&=si2;
l1=si1;
si0+=si1;
si0=i32_load8_s(&i->m0,(U64)si0);
si1=0U;
si0=(U32)((I32)si0<(I32)si1);
if(si0){
goto L48;
}
si0=l9;
sj0=i64_load(&i->m0,(U64)si0);
sj1=-9187201950435737472ULL;
sj0&=sj1;
sj0=I64_CTZ(sj0);
si0=(U32)(sj0);
si1=3U;
si0>>=(si1&31);
l1=si0;
L48:;
si0=l1;
si1=l11;
si0-=si1;
si1=l13;
si2=l11;
si1-=si2;
si0^=si1;
si1=l5;
si0&=si1;
si1=8U;
si0=si0 < si1;
if(si0){
goto L49;
}
si0=l9;
si1=l1;
si0+=si1;
l7=si0;
si0=i32_load8_u(&i->m0,(U64)si0);
l11=si0;
si0=l7;
si1=l10;
si2=25U;
si1>>=(si2&31);
l10=si1;
i32_store8(&i->m0,(U64)si0,si1);
si0=l1;
si1=-8U;
si0+=si1;
si1=l5;
si0&=si1;
si1=l9;
si0+=si1;
si1=8U;
si0+=si1;
si1=l10;
i32_store8(&i->m0,(U64)si0,si1);
si0=l9;
si1=l1;
si2=-1U;
si1^=si2;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l1=si0;
si0=l11;
si1=255U;
si0=si0 == si1;
if(si0){
goto L36;
}
si0=l12;
si0=i32_load8_u(&i->m0,(U64)si0);
l7=si0;
si0=l12;
si1=l1;
si1=i32_load8_u(&i->m0,(U64)si1);
i32_store8(&i->m0,(U64)si0,si1);
si0=l12;
si0=i32_load8_u(&i->m0,(U64)si0+1U);
l11=si0;
si0=l12;
si1=l1;
si1=i32_load8_u(&i->m0,(U64)si1+1U);
i32_store8(&i->m0,(U64)si0+1U,si1);
si0=l12;
si0=i32_load8_u(&i->m0,(U64)si0+2U);
l10=si0;
si0=l12;
si1=l1;
si1=i32_load8_u(&i->m0,(U64)si1+2U);
i32_store8(&i->m0,(U64)si0+2U,si1);
si0=l12;
si0=i32_load8_u(&i->m0,(U64)si0+3U);
l16=si0;
si0=l12;
si1=l1;
si1=i32_load8_u(&i->m0,(U64)si1+3U);
i32_store8(&i->m0,(U64)si0+3U,si1);
si0=l1;
si1=l7;
i32_store8(&i->m0,(U64)si0,si1);
si0=l1;
si1=l11;
i32_store8(&i->m0,(U64)si0+1U,si1);
si0=l1;
si1=l10;
i32_store8(&i->m0,(U64)si0+2U,si1);
si0=l1;
si1=l16;
i32_store8(&i->m0,(U64)si0+3U,si1);
si0=l12;
si0=i32_load8_u(&i->m0,(U64)si0+4U);
l7=si0;
si0=l12;
si1=l1;
si1=i32_load8_u(&i->m0,(U64)si1+4U);
i32_store8(&i->m0,(U64)si0+4U,si1);
si0=l1;
si1=l7;
i32_store8(&i->m0,(U64)si0+4U,si1);
si0=l12;
si0=i32_load8_u(&i->m0,(U64)si0+5U);
l7=si0;
si0=l12;
si1=l1;
si1=i32_load8_u(&i->m0,(U64)si1+5U);
i32_store8(&i->m0,(U64)si0+5U,si1);
si0=l1;
si1=l7;
i32_store8(&i->m0,(U64)si0+5U,si1);
si0=l12;
si0=i32_load8_u(&i->m0,(U64)si0+6U);
l7=si0;
si0=l12;
si1=l1;
si1=i32_load8_u(&i->m0,(U64)si1+6U);
i32_store8(&i->m0,(U64)si0+6U,si1);
si0=l1;
si1=l7;
i32_store8(&i->m0,(U64)si0+6U,si1);
si0=l12;
si0=i32_load8_u(&i->m0,(U64)si0+7U);
l7=si0;
si0=l12;
si1=l1;
si1=i32_load8_u(&i->m0,(U64)si1+7U);
i32_store8(&i->m0,(U64)si0+7U,si1);
si0=l1;
si1=l7;
i32_store8(&i->m0,(U64)si0+7U,si1);
goto L37;
L49:;
}
si0=l17;
si1=l10;
si2=25U;
si1>>=(si2&31);
l1=si1;
i32_store8(&i->m0,(U64)si0,si1);
si0=l13;
si1=-8U;
si0+=si1;
si1=l5;
si0&=si1;
si1=l9;
si0+=si1;
si1=8U;
si0+=si1;
si1=l1;
i32_store8(&i->m0,(U64)si0,si1);
goto L35;
L36:;
si0=l17;
si1=255U;
i32_store8(&i->m0,(U64)si0,si1);
si0=l13;
si1=-8U;
si0+=si1;
si1=l5;
si0&=si1;
si1=l9;
si0+=si1;
si1=8U;
si0+=si1;
si1=255U;
i32_store8(&i->m0,(U64)si0,si1);
si0=l1;
si1=l12;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
L35:;
si0=l13;
si1=1U;
si0+=si1;
l1=si0;
si0=l13;
si1=l5;
si0=si0 != si1;
if(si0){
goto L34;
}
}
L31:;
si0=l0;
si1=l8;
si2=l4;
si1-=si2;
i32_store(&i->m0,(U64)si0+8U,si1);
goto L2;
L5:;
si0=l0;
si1=l4;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l0;
si1=l9;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=4U;
si0+=si1;
si1=l12;
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si0=!(si0);
if(si0){
goto L2;
}
goto L3;
L4:;
si0=l0;
si1=l4;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l0;
si1=4U;
si0+=si1;
si1=l12;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
l13=si0;
si0=l0;
si1=l9;
i32_store(&i->m0,(U64)si0,si1);
L3:;
si0=l5;
si1=l6;
si2=3U;
si1<<=(si2&31);
l1=si1;
si0+=si1;
si1=-9U;
si0=si0 == si1;
if(si0){
goto L2;
}
si0=l13;
si1=l1;
si0-=si1;
f15271(i,si0);
L2:;
si0=l3;
si1=32U;
si0+=si1;
i->g0=si0;
si0=-2147483647U;
goto L0;
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
si1=1171700U;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l3;
si1=1171708U;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l3;
si1=8U;
si0+=si1;
si1=1171792U;
f683(i,si0,si1);
UNREACHABLE;
L0:;
return si0;
}

U32 f3464(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U32 l4=0;
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
U32 l15=0;
U32 l16=0;
U32 l17=0;
U32 l18=0;
U32 si0,si1,si2,si3,si4;
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
si1=l1;
si0+=si1;
l1=si0;
si1=l4;
si0=si0 < si1;
if(si0){
goto L6;
}
si0=l1;
si1=l0;
si2=4U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
l5=si1;
si2=l5;
si3=1U;
si2+=si3;
l6=si2;
si3=3U;
si2>>=(si3&31);
l7=si2;
si3=7U;
si2*=si3;
si3=l5;
si4=8U;
si3=si3 < si4;
si1=si3?si1:si2;
l8=si1;
si2=1U;
si1>>=(si2&31);
si0=si0 <= si1;
if(si0){
goto L5;
}
si0=l1;
si1=l8;
si2=1U;
si1+=si2;
l7=si1;
si2=l1;
si3=l7;
si2=si2 > si3;
si0=si2?si0:si1;
l7=si0;
si1=8U;
si0=si0 < si1;
if(si0){
goto L8;
}
si0=l7;
si1=536870912U;
si0=si0 >= si1;
if(si0){
goto L9;
}
si0=1U;
l1=si0;
si0=l7;
si1=3U;
si0<<=(si1&31);
l7=si0;
si1=14U;
si0=si0 < si1;
if(si0){
goto L7;
}
si0=-1U;
si1=l7;
si2=7U;
si1=DIV_U(si1,si2);
si2=-1U;
si1+=si2;
si1=I32_CLZ(si1);
si0>>=(si1&31);
si1=1U;
si0+=si1;
l1=si0;
goto L7;
L9:;
si0=l3;
si1=20U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=1U;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l3;
si1=1171700U;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l3;
si1=1171708U;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l3;
si1=8U;
si0+=si1;
si1=1171792U;
f683(i,si0,si1);
UNREACHABLE;
L8:;
si0=4U;
si1=8U;
si2=l7;
si3=4U;
si2=si2 < si3;
si0=si2?si0:si1;
l1=si0;
L7:;
si0=l1;
sj0=(U64)(si0);
sj1=12ULL;
sj0*=sj1;
l9=sj0;
sj1=32ULL;
sj0>>=(sj1&63);
si0=(U32)(sj0);
if(si0){
goto L10;
}
sj0=l9;
si0=(U32)(sj0);
l7=si0;
si1=7U;
si0+=si1;
l10=si0;
si1=l7;
si0=si0 < si1;
if(si0){
goto L10;
}
si0=l10;
si1=-8U;
si0&=si1;
l11=si0;
si1=l1;
si2=8U;
si1+=si2;
l12=si1;
si0+=si1;
l7=si0;
si1=l11;
si0=si0 < si1;
if(si0){
goto L10;
}
si0=l7;
si1=2147483641U;
si0=si0 >= si1;
if(si0){
goto L10;
}
si0=8U;
l10=si0;
si0=l7;
si0=!(si0);
if(si0){
goto L12;
}
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=l7;
si1=7U;
si0=si0 > si1;
if(si0){
goto L14;
}
si0=8U;
si1=l7;
si0=f15277(i,si0,si1);
l10=si0;
goto L13;
L14:;
si0=l7;
si0=f15269(i,si0);
l10=si0;
L13:;
si0=l10;
si0=!(si0);
if(si0){
goto L11;
}
L12:;
si0=l10;
si1=l11;
si0+=si1;
si1=255U;
si2=l12;
si0=f15392(i,si0,si1,si2);
l11=si0;
si0=l1;
si1=-1U;
si0+=si1;
l13=si0;
si1=l1;
si2=3U;
si1>>=(si2&31);
si2=7U;
si1*=si2;
si2=l13;
si3=8U;
si2=si2 < si3;
si0=si2?si0:si1;
si1=l4;
si0-=si1;
l4=si0;
si0=l5;
si1=-1U;
si0=si0 == si1;
if(si0){
goto L3;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
l14=si0;
si1=-12U;
si0+=si1;
l15=si0;
si0=0U;
l16=si0;
L15:;
{
si0=l14;
si1=l16;
si0+=si1;
si0=i32_load8_s(&i->m0,(U64)si0);
si1=0U;
si0=(U32)((I32)si0<(I32)si1);
if(si0){
goto L16;
}
si0=0U;
l7=si0;
si0=l15;
si1=0U;
si2=l16;
si1-=si2;
si2=12U;
si1*=si2;
si0+=si1;
l10=si0;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si0=l10;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l10=si0;
si1=4U;
si0=si0 >= si1;
if(si0){
goto L18;
}
si0=l1;
l17=si0;
goto L17;
L18:;
si0=l10;
si1=-4U;
si0+=si1;
l12=si0;
si1=2U;
si0>>=(si1&31);
si1=1U;
si0+=si1;
l17=si0;
si1=1U;
si0&=si1;
l18=si0;
si0=0U;
l7=si0;
si0=l12;
si1=4U;
si0=si0 >= si1;
if(si0){
goto L20;
}
si0=l1;
l17=si0;
goto L19;
L20:;
si0=l17;
si1=2147483646U;
si0&=si1;
l12=si0;
si0=0U;
l7=si0;
L21:;
{
si0=l10;
si1=-8U;
si0+=si1;
l10=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
si1=l1;
si1=i32_load(&i->m0,(U64)si1);
si2=l7;
si3=5U;
si2=I32_ROTL(si2,si3);
si1^=si2;
si2=-1640531527U;
si1*=si2;
si2=5U;
si1=I32_ROTL(si1,si2);
si0^=si1;
si1=-1640531527U;
si0*=si1;
l7=si0;
si0=l1;
si1=8U;
si0+=si1;
l17=si0;
l1=si0;
si0=l12;
si1=-2U;
si0+=si1;
l12=si0;
if(si0){
goto L21;
}
}
L19:;
si0=l18;
si0=!(si0);
if(si0){
goto L17;
}
si0=l10;
si1=-4U;
si0+=si1;
l10=si0;
si0=l17;
si0=i32_load(&i->m0,(U64)si0);
si1=l7;
si2=5U;
si1=I32_ROTL(si1,si2);
si0^=si1;
si1=-1640531527U;
si0*=si1;
l7=si0;
si0=l17;
si1=4U;
si0+=si1;
l17=si0;
L17:;
si0=l10;
si1=1U;
si0=si0 > si1;
if(si0){
goto L23;
}
si0=l17;
l1=si0;
goto L22;
L23:;
si0=l17;
si1=2U;
si0+=si1;
l1=si0;
si0=l10;
si1=-2U;
si0+=si1;
l10=si0;
si0=l7;
si1=5U;
si0=I32_ROTL(si0,si1);
si1=l17;
si1=i32_load16_u(&i->m0,(U64)si1);
si0^=si1;
si1=-1640531527U;
si0*=si1;
l7=si0;
L22:;
si0=l10;
si0=!(si0);
if(si0){
goto L24;
}
si0=l7;
si1=5U;
si0=I32_ROTL(si0,si1);
si1=l1;
si1=i32_load8_u(&i->m0,(U64)si1);
si0^=si1;
si1=-1640531527U;
si0*=si1;
l7=si0;
L24:;
si0=l11;
si1=l7;
si2=5U;
si1=I32_ROTL(si1,si2);
si2=255U;
si1^=si2;
si2=-1640531527U;
si1*=si2;
l10=si1;
si2=l13;
si1&=si2;
l7=si1;
si0+=si1;
sj0=i64_load(&i->m0,(U64)si0);
sj1=-9187201950435737472ULL;
sj0&=sj1;
l9=sj0;
sj1=0ULL;
si0=sj0 != sj1;
if(si0){
goto L25;
}
si0=8U;
l1=si0;
L26:;
{
si0=l7;
si1=l1;
si0+=si1;
l7=si0;
si0=l1;
si1=8U;
si0+=si1;
l1=si0;
si0=l11;
si1=l7;
si2=l13;
si1&=si2;
l7=si1;
si0+=si1;
sj0=i64_load(&i->m0,(U64)si0);
sj1=-9187201950435737472ULL;
sj0&=sj1;
l9=sj0;
si0=!(sj0);
if(si0){
goto L26;
}
}
L25:;
si0=l11;
sj1=l9;
sj1=I64_CTZ(sj1);
si1=(U32)(sj1);
si2=3U;
si1>>=(si2&31);
si2=l7;
si1+=si2;
si2=l13;
si1&=si2;
l1=si1;
si0+=si1;
si0=i32_load8_s(&i->m0,(U64)si0);
si1=0U;
si0=(U32)((I32)si0<(I32)si1);
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
l1=si0;
L27:;
si0=l11;
si1=l1;
si0+=si1;
si1=l10;
si2=25U;
si1>>=(si2&31);
l7=si1;
i32_store8(&i->m0,(U64)si0,si1);
si0=l1;
si1=-8U;
si0+=si1;
si1=l13;
si0&=si1;
si1=l11;
si0+=si1;
si1=8U;
si0+=si1;
si1=l7;
i32_store8(&i->m0,(U64)si0,si1);
si0=l11;
si1=l1;
si2=-1U;
si1^=si2;
si2=12U;
si1*=si2;
si0+=si1;
l1=si0;
si1=8U;
si0+=si1;
si1=l14;
si2=l16;
si3=-1U;
si2^=si3;
si3=12U;
si2*=si3;
si1+=si2;
l7=si1;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
si1=l7;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
L16:;
si0=l16;
si1=l5;
si0=si0 == si1;
l1=si0;
si0=l16;
si1=1U;
si0+=si1;
l16=si0;
si0=l1;
if(si0){
goto L4;
}
goto L15;
}
L11:;
si0=8U;
si1=l7;
f52(i,si0,si1);
UNREACHABLE;
L10:;
si0=l3;
si1=20U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=1U;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l3;
si1=1171700U;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l3;
si1=1171708U;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l3;
si1=8U;
si0+=si1;
si1=1171792U;
f683(i,si0,si1);
UNREACHABLE;
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
si1=1171700U;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l3;
si1=1171708U;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l3;
si1=8U;
si0+=si1;
si1=1171792U;
f683(i,si0,si1);
UNREACHABLE;
L5:;
si0=0U;
l1=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
l12=si0;
si0=l7;
si1=l6;
si2=7U;
si1&=si2;
si2=0U;
si1=si1 != si2;
si0+=si1;
l7=si0;
si0=!(si0);
if(si0){
goto L28;
}
si0=l7;
si1=1U;
si0&=si1;
l11=si0;
si0=l7;
si1=1U;
si0=si0 == si1;
if(si0){
goto L29;
}
si0=l7;
si1=1073741822U;
si0&=si1;
l10=si0;
si0=0U;
l1=si0;
L30:;
{
si0=l12;
si1=l1;
si0+=si1;
l7=si0;
si1=l7;
sj1=i64_load(&i->m0,(U64)si1);
l9=sj1;
sj2=-1ULL;
sj1^=sj2;
sj2=7ULL;
sj1>>=(sj2&63);
sj2=72340172838076673ULL;
sj1&=sj2;
sj2=l9;
sj3=9187201950435737471ULL;
sj2|=sj3;
sj1+=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l7;
si1=8U;
si0+=si1;
l7=si0;
si1=l7;
sj1=i64_load(&i->m0,(U64)si1);
l9=sj1;
sj2=-1ULL;
sj1^=sj2;
sj2=7ULL;
sj1>>=(sj2&63);
sj2=72340172838076673ULL;
sj1&=sj2;
sj2=l9;
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
goto L30;
}
}
L29:;
si0=l11;
si0=!(si0);
if(si0){
goto L28;
}
si0=l12;
si1=l1;
si0+=si1;
l1=si0;
si1=l1;
sj1=i64_load(&i->m0,(U64)si1);
l9=sj1;
sj2=-1ULL;
sj1^=sj2;
sj2=7ULL;
sj1>>=(sj2&63);
sj2=72340172838076673ULL;
sj1&=sj2;
sj2=l9;
sj3=9187201950435737471ULL;
sj2|=sj3;
sj1+=sj2;
i64_store(&i->m0,(U64)si0,sj1);
L28:;
si0=l6;
si1=8U;
si0=si0 < si1;
if(si0){
goto L33;
}
si0=l12;
si1=l6;
si0+=si1;
si1=l12;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
goto L32;
L33:;
si0=l12;
si1=8U;
si0+=si1;
si1=l12;
si2=l6;
si0=f15391(i,si0,si1,si2);
si0=l5;
si1=-1U;
si0=si0 != si1;
if(si0){
goto L32;
}
si0=0U;
l8=si0;
goto L31;
L32:;
si0=l12;
si1=-12U;
si0+=si1;
l6=si0;
si0=0U;
l1=si0;
L34:;
{
si0=l12;
si1=l1;
l14=si1;
si0+=si1;
l18=si0;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=128U;
si0=si0 != si1;
if(si0){
goto L35;
}
si0=l6;
si1=0U;
si2=l14;
si1-=si2;
si2=12U;
si1*=si2;
si0+=si1;
l16=si0;
si0=l12;
si1=l14;
si2=-1U;
si1^=si2;
si2=12U;
si1*=si2;
si0+=si1;
l10=si0;
L37:;
{
si0=l16;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si0=0U;
l7=si0;
si0=l16;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l11=si0;
si1=4U;
si0=si0 >= si1;
if(si0){
goto L39;
}
si0=l1;
l17=si0;
goto L38;
L39:;
si0=l11;
si1=-4U;
si0+=si1;
l13=si0;
si1=2U;
si0>>=(si1&31);
si1=1U;
si0+=si1;
l17=si0;
si1=1U;
si0&=si1;
l15=si0;
si0=0U;
l7=si0;
si0=l13;
si1=4U;
si0=si0 >= si1;
if(si0){
goto L41;
}
si0=l1;
l17=si0;
goto L40;
L41:;
si0=l17;
si1=2147483646U;
si0&=si1;
l13=si0;
si0=0U;
l7=si0;
L42:;
{
si0=l11;
si1=-8U;
si0+=si1;
l11=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
si1=l1;
si1=i32_load(&i->m0,(U64)si1);
si2=l7;
si3=5U;
si2=I32_ROTL(si2,si3);
si1^=si2;
si2=-1640531527U;
si1*=si2;
si2=5U;
si1=I32_ROTL(si1,si2);
si0^=si1;
si1=-1640531527U;
si0*=si1;
l7=si0;
si0=l1;
si1=8U;
si0+=si1;
l17=si0;
l1=si0;
si0=l13;
si1=-2U;
si0+=si1;
l13=si0;
if(si0){
goto L42;
}
}
L40:;
si0=l15;
si0=!(si0);
if(si0){
goto L38;
}
si0=l11;
si1=-4U;
si0+=si1;
l11=si0;
si0=l17;
si0=i32_load(&i->m0,(U64)si0);
si1=l7;
si2=5U;
si1=I32_ROTL(si1,si2);
si0^=si1;
si1=-1640531527U;
si0*=si1;
l7=si0;
si0=l17;
si1=4U;
si0+=si1;
l17=si0;
L38:;
si0=l11;
si1=1U;
si0=si0 > si1;
if(si0){
goto L44;
}
si0=l17;
l1=si0;
goto L43;
L44:;
si0=l17;
si1=2U;
si0+=si1;
l1=si0;
si0=l11;
si1=-2U;
si0+=si1;
l11=si0;
si0=l7;
si1=5U;
si0=I32_ROTL(si0,si1);
si1=l17;
si1=i32_load16_u(&i->m0,(U64)si1);
si0^=si1;
si1=-1640531527U;
si0*=si1;
l7=si0;
L43:;
si0=l11;
si0=!(si0);
if(si0){
goto L45;
}
si0=l7;
si1=5U;
si0=I32_ROTL(si0,si1);
si1=l1;
si1=i32_load8_u(&i->m0,(U64)si1);
si0^=si1;
si1=-1640531527U;
si0*=si1;
l7=si0;
L45:;
si0=l7;
si1=5U;
si0=I32_ROTL(si0,si1);
si1=255U;
si0^=si1;
si1=-1640531527U;
si0*=si1;
l13=si0;
si1=l5;
si0&=si1;
l11=si0;
l7=si0;
si0=l12;
si1=l11;
si0+=si1;
sj0=i64_load(&i->m0,(U64)si0);
sj1=-9187201950435737472ULL;
sj0&=sj1;
l9=sj0;
sj1=0ULL;
si0=sj0 != sj1;
if(si0){
goto L46;
}
si0=8U;
l1=si0;
si0=l11;
l7=si0;
L47:;
{
si0=l7;
si1=l1;
si0+=si1;
l7=si0;
si0=l1;
si1=8U;
si0+=si1;
l1=si0;
si0=l12;
si1=l7;
si2=l5;
si1&=si2;
l7=si1;
si0+=si1;
sj0=i64_load(&i->m0,(U64)si0);
sj1=-9187201950435737472ULL;
sj0&=sj1;
l9=sj0;
si0=!(sj0);
if(si0){
goto L47;
}
}
L46:;
si0=l12;
sj1=l9;
sj1=I64_CTZ(sj1);
si1=(U32)(sj1);
si2=3U;
si1>>=(si2&31);
si2=l7;
si1+=si2;
si2=l5;
si1&=si2;
l1=si1;
si0+=si1;
si0=i32_load8_s(&i->m0,(U64)si0);
si1=0U;
si0=(U32)((I32)si0<(I32)si1);
if(si0){
goto L48;
}
si0=l12;
sj0=i64_load(&i->m0,(U64)si0);
sj1=-9187201950435737472ULL;
sj0&=sj1;
sj0=I64_CTZ(sj0);
si0=(U32)(sj0);
si1=3U;
si0>>=(si1&31);
l1=si0;
L48:;
si0=l1;
si1=l11;
si0-=si1;
si1=l14;
si2=l11;
si1-=si2;
si0^=si1;
si1=l5;
si0&=si1;
si1=8U;
si0=si0 < si1;
if(si0){
goto L49;
}
si0=l12;
si1=l1;
si0+=si1;
l7=si0;
si0=i32_load8_u(&i->m0,(U64)si0);
l11=si0;
si0=l7;
si1=l13;
si2=25U;
si1>>=(si2&31);
l13=si1;
i32_store8(&i->m0,(U64)si0,si1);
si0=l1;
si1=-8U;
si0+=si1;
si1=l5;
si0&=si1;
si1=l12;
si0+=si1;
si1=8U;
si0+=si1;
si1=l13;
i32_store8(&i->m0,(U64)si0,si1);
si0=l12;
si1=l1;
si2=-1U;
si1^=si2;
si2=12U;
si1*=si2;
si0+=si1;
l1=si0;
si0=l11;
si1=255U;
si0=si0 == si1;
if(si0){
goto L36;
}
si0=l10;
si0=i32_load8_u(&i->m0,(U64)si0+1U);
l7=si0;
si0=l10;
si1=l1;
si1=i32_load8_u(&i->m0,(U64)si1+1U);
i32_store8(&i->m0,(U64)si0+1U,si1);
si0=l10;
si0=i32_load8_u(&i->m0,(U64)si0+2U);
l11=si0;
si0=l10;
si1=l1;
si1=i32_load8_u(&i->m0,(U64)si1+2U);
i32_store8(&i->m0,(U64)si0+2U,si1);
si0=l10;
si0=i32_load8_u(&i->m0,(U64)si0+3U);
l13=si0;
si0=l10;
si1=l1;
si1=i32_load8_u(&i->m0,(U64)si1+3U);
i32_store8(&i->m0,(U64)si0+3U,si1);
si0=l10;
si0=i32_load8_u(&i->m0,(U64)si0);
l17=si0;
si0=l10;
si1=l1;
si1=i32_load8_u(&i->m0,(U64)si1);
i32_store8(&i->m0,(U64)si0,si1);
si0=l1;
si1=l7;
i32_store8(&i->m0,(U64)si0+1U,si1);
si0=l1;
si1=l11;
i32_store8(&i->m0,(U64)si0+2U,si1);
si0=l1;
si1=l13;
i32_store8(&i->m0,(U64)si0+3U,si1);
si0=l1;
si1=l17;
i32_store8(&i->m0,(U64)si0,si1);
si0=l10;
si0=i32_load8_u(&i->m0,(U64)si0+5U);
l7=si0;
si0=l10;
si1=l1;
si1=i32_load8_u(&i->m0,(U64)si1+5U);
i32_store8(&i->m0,(U64)si0+5U,si1);
si0=l10;
si0=i32_load8_u(&i->m0,(U64)si0+6U);
l11=si0;
si0=l10;
si1=l1;
si1=i32_load8_u(&i->m0,(U64)si1+6U);
i32_store8(&i->m0,(U64)si0+6U,si1);
si0=l10;
si0=i32_load8_u(&i->m0,(U64)si0+7U);
l13=si0;
si0=l10;
si1=l1;
si1=i32_load8_u(&i->m0,(U64)si1+7U);
i32_store8(&i->m0,(U64)si0+7U,si1);
si0=l10;
si0=i32_load8_u(&i->m0,(U64)si0+4U);
l17=si0;
si0=l10;
si1=l1;
si1=i32_load8_u(&i->m0,(U64)si1+4U);
i32_store8(&i->m0,(U64)si0+4U,si1);
si0=l1;
si1=l7;
i32_store8(&i->m0,(U64)si0+5U,si1);
si0=l1;
si1=l11;
i32_store8(&i->m0,(U64)si0+6U,si1);
si0=l1;
si1=l13;
i32_store8(&i->m0,(U64)si0+7U,si1);
si0=l1;
si1=l17;
i32_store8(&i->m0,(U64)si0+4U,si1);
si0=l10;
si0=i32_load8_u(&i->m0,(U64)si0+9U);
l7=si0;
si0=l10;
si1=l1;
si1=i32_load8_u(&i->m0,(U64)si1+9U);
i32_store8(&i->m0,(U64)si0+9U,si1);
si0=l10;
si0=i32_load8_u(&i->m0,(U64)si0+10U);
l11=si0;
si0=l10;
si1=l1;
si1=i32_load8_u(&i->m0,(U64)si1+10U);
i32_store8(&i->m0,(U64)si0+10U,si1);
si0=l10;
si0=i32_load8_u(&i->m0,(U64)si0+11U);
l13=si0;
si0=l10;
si1=l1;
si1=i32_load8_u(&i->m0,(U64)si1+11U);
i32_store8(&i->m0,(U64)si0+11U,si1);
si0=l10;
si0=i32_load8_u(&i->m0,(U64)si0+8U);
l17=si0;
si0=l10;
si1=l1;
si1=i32_load8_u(&i->m0,(U64)si1+8U);
i32_store8(&i->m0,(U64)si0+8U,si1);
si0=l1;
si1=l7;
i32_store8(&i->m0,(U64)si0+9U,si1);
si0=l1;
si1=l11;
i32_store8(&i->m0,(U64)si0+10U,si1);
si0=l1;
si1=l13;
i32_store8(&i->m0,(U64)si0+11U,si1);
si0=l1;
si1=l17;
i32_store8(&i->m0,(U64)si0+8U,si1);
goto L37;
L49:;
}
si0=l18;
si1=l13;
si2=25U;
si1>>=(si2&31);
l1=si1;
i32_store8(&i->m0,(U64)si0,si1);
si0=l14;
si1=-8U;
si0+=si1;
si1=l5;
si0&=si1;
si1=l12;
si0+=si1;
si1=8U;
si0+=si1;
si1=l1;
i32_store8(&i->m0,(U64)si0,si1);
goto L35;
L36:;
si0=l18;
si1=255U;
i32_store8(&i->m0,(U64)si0,si1);
si0=l14;
si1=-8U;
si0+=si1;
si1=l5;
si0&=si1;
si1=l12;
si0+=si1;
si1=8U;
si0+=si1;
si1=255U;
i32_store8(&i->m0,(U64)si0,si1);
si0=l1;
si1=8U;
si0+=si1;
si1=l10;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
si1=l10;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
L35:;
si0=l14;
si1=1U;
si0+=si1;
l1=si0;
si0=l14;
si1=l5;
si0=si0 != si1;
if(si0){
goto L34;
}
}
L31:;
si0=l0;
si1=l8;
si2=l4;
si1-=si2;
i32_store(&i->m0,(U64)si0+8U,si1);
goto L1;
L4:;
si0=l0;
si1=l4;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l0;
si1=l11;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=4U;
si0+=si1;
si1=l13;
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si0=!(si0);
if(si0){
goto L1;
}
goto L2;
L3:;
si0=l0;
si1=l4;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l0;
si1=4U;
si0+=si1;
si1=l13;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
l14=si0;
si0=l0;
si1=l11;
i32_store(&i->m0,(U64)si0,si1);
L2:;
si0=l5;
si1=l6;
sj1=(U64)(si1);
sj2=12ULL;
sj1*=sj2;
si1=(U32)(sj1);
si2=7U;
si1+=si2;
si2=-8U;
si1&=si2;
l1=si1;
si0+=si1;
si1=-9U;
si0=si0 == si1;
if(si0){
goto L1;
}
si0=l14;
si1=l1;
si0-=si1;
f15271(i,si0);
L1:;
si0=l3;
si1=32U;
si0+=si1;
i->g0=si0;
si0=-2147483647U;
L0:;
return si0;
}

void f3465(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 l3=0;
U32 l4=0;
U64 l5=0;
U32 l6=0;
U32 l7=0;
U32 si0,si1,si2,si3;
U64 sj0,sj1;
si0=i->g0;
si1=32U;
si0-=si1;
l2=si0;
i->g0=si0;
si0=l1;
if(si0){
goto L4;
}
si0=1539024U;
l3=si0;
si0=0U;
l4=si0;
si0=0U;
l1=si0;
goto L3;
L4:;
si0=l1;
si1=8U;
si0=si0 < si1;
if(si0){
goto L6;
}
si0=l1;
si1=536870912U;
si0=si0 >= si1;
if(si0){
goto L7;
}
si0=1U;
l4=si0;
si0=l1;
si1=3U;
si0<<=(si1&31);
l1=si0;
si1=14U;
si0=si0 < si1;
if(si0){
goto L5;
}
si0=-1U;
si1=l1;
si2=7U;
si1=DIV_U(si1,si2);
si2=-1U;
si1+=si2;
si1=I32_CLZ(si1);
si0>>=(si1&31);
si1=1U;
si0+=si1;
l4=si0;
goto L5;
L7:;
si0=l2;
si1=20U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=1U;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l2;
si1=1171700U;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l2;
si1=1171708U;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l2;
si1=8U;
si0+=si1;
si1=1171792U;
f683(i,si0,si1);
UNREACHABLE;
L6:;
si0=4U;
si1=8U;
si2=l1;
si3=4U;
si2=si2 < si3;
si0=si2?si0:si1;
l4=si0;
L5:;
si0=l4;
sj0=(U64)(si0);
sj1=12ULL;
sj0*=sj1;
l5=sj0;
sj1=32ULL;
sj0>>=(sj1&63);
si0=(U32)(sj0);
if(si0){
goto L2;
}
sj0=l5;
si0=(U32)(sj0);
l1=si0;
si1=7U;
si0+=si1;
l3=si0;
si1=l1;
si0=si0 < si1;
if(si0){
goto L2;
}
si0=l3;
si1=-8U;
si0&=si1;
l6=si0;
si1=l4;
si2=8U;
si1+=si2;
l7=si1;
si0+=si1;
l1=si0;
si1=l6;
si0=si0 < si1;
if(si0){
goto L2;
}
si0=l1;
si1=2147483641U;
si0=si0 >= si1;
if(si0){
goto L2;
}
si0=8U;
l3=si0;
si0=l1;
si0=!(si0);
if(si0){
goto L8;
}
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=l1;
si1=7U;
si0=si0 > si1;
if(si0){
goto L10;
}
si0=8U;
si1=l1;
si0=f15277(i,si0,si1);
l3=si0;
goto L9;
L10:;
si0=l1;
si0=f15269(i,si0);
l3=si0;
L9:;
si0=l3;
si0=!(si0);
if(si0){
goto L1;
}
L8:;
si0=l3;
si1=l6;
si0+=si1;
l3=si0;
si1=255U;
si2=l7;
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
L3:;
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
si1=l3;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=32U;
si0+=si1;
i->g0=si0;
goto L0;
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
si1=1171700U;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l2;
si1=1171708U;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l2;
si1=8U;
si0+=si1;
si1=1171792U;
f683(i,si0,si1);
UNREACHABLE;
L1:;
si0=8U;
si1=l1;
f52(i,si0,si1);
UNREACHABLE;
L0:;
}

U32 f3466(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U32 l4=0;
U64 l5=0;
U64 l6=0;
U32 l7=0;
U64 l8=0;
U32 l9=0;
U64 l10=0;
U32 l11=0;
U64 l12=0;
U64 l13=0;
U64 l14=0;
U32 si0,si1,si2,si3,si4;
U64 sj0,sj1,sj2,sj3,sj4,sj5,sj6;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+4U);
l3=si0;
if(si0){
goto L1;
}
si0=0U;
goto L0;
L1:;
si0=l2;
si1=7U;
si0&=si1;
l4=si0;
si0=l0;
sj0=i64_load(&i->m0,(U64)si0+16U);
l5=sj0;
sj1=8387220255154660723ULL;
sj0^=sj1;
l6=sj0;
sj0=l5;
sj1=7237128888997146499ULL;
sj0^=sj1;
l5=sj0;
si0=0U;
l7=si0;
sj0=8317987319222330741ULL;
l8=sj0;
si0=l2;
si1=-8U;
si0&=si1;
l9=si0;
if(si0){
goto L3;
}
sj0=7816392313619706465ULL;
l10=sj0;
si0=0U;
l11=si0;
goto L2;
L3:;
si0=0U;
l11=si0;
sj0=7816392313619706465ULL;
l10=sj0;
L4:;
{
si0=l1;
si1=l11;
si0+=si1;
sj0=i64_load(&i->m0,(U64)si0);
l12=sj0;
sj1=l6;
sj0^=sj1;
l6=sj0;
sj1=l10;
sj0+=sj1;
l10=sj0;
sj1=l8;
sj2=l5;
sj1+=sj2;
l8=sj1;
sj2=l5;
sj3=13ULL;
sj2=I64_ROTL(sj2,sj3);
sj1^=sj2;
l5=sj1;
sj0+=sj1;
l13=sj0;
sj1=l5;
sj2=17ULL;
sj1=I64_ROTL(sj1,sj2);
sj0^=sj1;
l5=sj0;
sj0=l10;
sj1=l6;
sj2=16ULL;
sj1=I64_ROTL(sj1,sj2);
sj0^=sj1;
l6=sj0;
sj1=21ULL;
sj0=I64_ROTL(sj0,sj1);
sj1=l6;
sj2=l8;
sj3=32ULL;
sj2=I64_ROTL(sj2,sj3);
sj1+=sj2;
l8=sj1;
sj0^=sj1;
l6=sj0;
sj0=l13;
sj1=32ULL;
sj0=I64_ROTL(sj0,sj1);
l10=sj0;
sj0=l8;
sj1=l12;
sj0^=sj1;
l8=sj0;
si0=l11;
si1=8U;
si0+=si1;
l11=si0;
si1=l9;
si0=si0 < si1;
if(si0){
goto L4;
}
}
si0=l9;
si1=-1U;
si0+=si1;
si1=-8U;
si0&=si1;
si1=8U;
si0+=si1;
l11=si0;
L2:;
sj0=0ULL;
l12=sj0;
si0=l4;
si1=3U;
si0=si0 <= si1;
if(si0){
goto L5;
}
si0=l1;
si1=l11;
si0+=si1;
sj0=i64_load32_u(&i->m0,(U64)si0);
l12=sj0;
si0=4U;
l7=si0;
L5:;
si0=l7;
si1=1U;
si0|=si1;
si1=l4;
si0=si0 >= si1;
if(si0){
goto L6;
}
si0=l1;
si1=l7;
si2=l11;
si1+=si2;
si0+=si1;
sj0=i64_load16_u(&i->m0,(U64)si0);
si1=l7;
si2=3U;
si1<<=(si2&31);
sj1=(U64)(si1);
sj0<<=(sj1&63);
sj1=l12;
sj0|=sj1;
l12=sj0;
si0=l7;
si1=2U;
si0|=si1;
l7=si0;
L6:;
si0=l7;
si1=l4;
si0=si0 >= si1;
if(si0){
goto L7;
}
si0=l1;
si1=l7;
si2=l11;
si1+=si2;
si0+=si1;
sj0=i64_load8_u(&i->m0,(U64)si0);
si1=l7;
si2=3U;
si1<<=(si2&31);
sj1=(U64)(si1);
sj0<<=(sj1&63);
sj1=l12;
sj0|=sj1;
l12=sj0;
L7:;
si0=l0;
si1=12U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l9=si0;
si0=!(si0);
if(si0){
goto L8;
}
si0=0U;
l11=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+8U);
si1=l0;
si1=i32_load(&i->m0,(U64)si1);
sj2=l12;
si3=l2;
sj3=(U64)(si3);
sj4=56ULL;
sj3<<=(sj4&63);
sj2|=sj3;
l12=sj2;
sj3=l6;
sj2^=sj3;
l6=sj2;
sj3=16ULL;
sj2=I64_ROTL(sj2,sj3);
sj3=l6;
sj4=l10;
sj3+=sj4;
l6=sj3;
sj2^=sj3;
l10=sj2;
sj3=l8;
sj4=l5;
sj3+=sj4;
l8=sj3;
sj4=32ULL;
sj3=I64_ROTL(sj3,sj4);
sj2+=sj3;
l13=sj2;
sj3=l12;
sj2^=sj3;
sj3=l6;
sj4=l8;
sj5=l5;
sj6=13ULL;
sj5=I64_ROTL(sj5,sj6);
sj4^=sj5;
l5=sj4;
sj3+=sj4;
l6=sj3;
sj4=l5;
sj5=17ULL;
sj4=I64_ROTL(sj4,sj5);
sj3^=sj4;
l5=sj3;
sj2+=sj3;
l8=sj2;
sj3=l5;
sj4=13ULL;
sj3=I64_ROTL(sj3,sj4);
sj2^=sj3;
l5=sj2;
sj3=l10;
sj4=21ULL;
sj3=I64_ROTL(sj3,sj4);
sj4=l13;
sj3^=sj4;
l10=sj3;
sj4=l6;
sj5=32ULL;
sj4=I64_ROTL(sj4,sj5);
sj5=238ULL;
sj4^=sj5;
sj3+=sj4;
l6=sj3;
sj2+=sj3;
l12=sj2;
sj3=l5;
sj4=17ULL;
sj3=I64_ROTL(sj3,sj4);
sj2^=sj3;
l5=sj2;
sj3=13ULL;
sj2=I64_ROTL(sj2,sj3);
sj3=l5;
sj4=l10;
sj5=16ULL;
sj4=I64_ROTL(sj4,sj5);
sj5=l6;
sj4^=sj5;
l6=sj4;
sj5=l8;
sj6=32ULL;
sj5=I64_ROTL(sj5,sj6);
sj4+=sj5;
l8=sj4;
sj3+=sj4;
l5=sj3;
sj2^=sj3;
l10=sj2;
sj3=17ULL;
sj2=I64_ROTL(sj2,sj3);
sj3=l10;
sj4=l6;
sj5=21ULL;
sj4=I64_ROTL(sj4,sj5);
sj5=l8;
sj4^=sj5;
l6=sj4;
sj5=l12;
sj6=32ULL;
sj5=I64_ROTL(sj5,sj6);
sj4+=sj5;
l8=sj4;
sj3+=sj4;
l10=sj3;
sj2^=sj3;
l12=sj2;
sj3=13ULL;
sj2=I64_ROTL(sj2,sj3);
sj3=l12;
sj4=l6;
sj5=16ULL;
sj4=I64_ROTL(sj4,sj5);
sj5=l8;
sj4^=sj5;
l6=sj4;
sj5=l5;
sj6=32ULL;
sj5=I64_ROTL(sj5,sj6);
sj4+=sj5;
l5=sj4;
sj3+=sj4;
l8=sj3;
sj2^=sj3;
l12=sj2;
sj3=l6;
sj4=21ULL;
sj3=I64_ROTL(sj3,sj4);
sj4=l5;
sj3^=sj4;
l5=sj3;
sj4=l10;
sj5=32ULL;
sj4=I64_ROTL(sj4,sj5);
sj3+=sj4;
l6=sj3;
sj2+=sj3;
l10=sj2;
sj3=32ULL;
sj2=I64_ROTL(sj2,sj3);
l13=sj2;
sj3=l5;
sj4=16ULL;
sj3=I64_ROTL(sj3,sj4);
sj4=l6;
sj3^=sj4;
l6=sj3;
sj4=21ULL;
sj3=I64_ROTL(sj3,sj4);
l14=sj3;
sj2^=sj3;
sj3=l12;
sj4=17ULL;
sj3=I64_ROTL(sj3,sj4);
sj4=l10;
sj3^=sj4;
l5=sj3;
sj2^=sj3;
l10=sj2;
sj3=32ULL;
sj2>>=(sj3&63);
si2=(U32)(sj2);
si3=l3;
si2=REM_U(si2,si3);
si3=3U;
si2<<=(si3&31);
si1+=si2;
l0=si1;
si1=i32_load(&i->m0,(U64)si1+4U);
sj2=l5;
sj3=221ULL;
sj2^=sj3;
l12=sj2;
sj3=l6;
sj4=l8;
sj5=32ULL;
sj4=I64_ROTL(sj4,sj5);
sj3+=sj4;
l6=sj3;
sj2+=sj3;
l8=sj2;
sj3=32ULL;
sj2=I64_ROTL(sj2,sj3);
sj3=l14;
sj4=l6;
sj3^=sj4;
l6=sj3;
sj4=16ULL;
sj3=I64_ROTL(sj3,sj4);
sj4=l6;
sj5=l13;
sj4+=sj5;
l6=sj4;
sj3^=sj4;
l13=sj3;
sj2+=sj3;
l14=sj2;
sj3=l13;
sj4=21ULL;
sj3=I64_ROTL(sj3,sj4);
sj2^=sj3;
l13=sj2;
sj3=16ULL;
sj2=I64_ROTL(sj2,sj3);
sj3=l13;
sj4=l12;
sj5=13ULL;
sj4<<=(sj5&63);
sj5=l5;
sj6=51ULL;
sj5>>=(sj6&63);
sj4|=sj5;
sj5=l8;
sj4^=sj5;
l5=sj4;
sj5=l6;
sj4+=sj5;
l6=sj4;
sj5=32ULL;
sj4=I64_ROTL(sj4,sj5);
sj3+=sj4;
l8=sj3;
sj2^=sj3;
l12=sj2;
sj3=21ULL;
sj2=I64_ROTL(sj2,sj3);
sj3=l12;
sj4=l6;
sj5=l5;
sj6=17ULL;
sj5=I64_ROTL(sj5,sj6);
sj4^=sj5;
l5=sj4;
sj5=l14;
sj4+=sj5;
l6=sj4;
sj5=32ULL;
sj4=I64_ROTL(sj4,sj5);
sj3+=sj4;
l12=sj3;
sj2^=sj3;
l13=sj2;
sj3=16ULL;
sj2=I64_ROTL(sj2,sj3);
sj3=l13;
sj4=l5;
sj5=13ULL;
sj4=I64_ROTL(sj4,sj5);
sj5=l6;
sj4^=sj5;
l5=sj4;
sj5=l8;
sj4+=sj5;
l6=sj4;
sj5=32ULL;
sj4=I64_ROTL(sj4,sj5);
sj3+=sj4;
l8=sj3;
sj2^=sj3;
sj3=21ULL;
sj2=I64_ROTL(sj2,sj3);
sj3=l5;
sj4=17ULL;
sj3=I64_ROTL(sj3,sj4);
sj4=l6;
sj3^=sj4;
l5=sj3;
sj4=13ULL;
sj3=I64_ROTL(sj3,sj4);
sj4=l5;
sj5=l12;
sj4+=sj5;
sj3^=sj4;
l5=sj3;
sj4=17ULL;
sj3=I64_ROTL(sj3,sj4);
sj2^=sj3;
sj3=l5;
sj4=l8;
sj3+=sj4;
l5=sj3;
sj4=32ULL;
sj3>>=(sj4&63);
sj2^=sj3;
sj3=l5;
sj2^=sj3;
si2=(U32)(sj2);
si1+=si2;
si2=l0;
si2=i32_load(&i->m0,(U64)si2);
sj3=l10;
si3=(U32)(sj3);
si2*=si3;
si1+=si2;
si2=l9;
si1=REM_U(si1,si2);
si2=5U;
si1<<=(si2&31);
si0+=si1;
l9=si0;
si0=i32_load(&i->m0,(U64)si0+4U);
si1=l2;
si0=si0 != si1;
if(si0){
goto L9;
}
si0=0U;
si1=l9;
si2=8U;
si1+=si2;
si2=l9;
si2=i32_load(&i->m0,(U64)si2);
si3=l1;
si4=l2;
si2=f15389(i,si2,si3,si4);
si0=si2?si0:si1;
l11=si0;
L9:;
si0=l11;
goto L0;
L8:;
si0=1539136U;
si1=57U;
si2=1539196U;
f673(i,si0,si1,si2);
UNREACHABLE;
L0:;
return si0;
}

void f3467(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
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
U32 si0,si1,si2;
si0=l1;
si1=l2;
si0+=si1;
l3=si0;
si0=0U;
l4=si0;
si0=l2;
if(si0){
goto L4;
}
si0=1U;
l5=si0;
si0=l1;
l2=si0;
si0=0U;
l6=si0;
goto L3;
L4:;
si0=l1;
l2=si0;
L5:;
{
si0=l4;
l7=si0;
si0=l2;
l4=si0;
si0=i32_load8_s(&i->m0,(U64)si0);
l8=si0;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L7;
}
si0=l4;
si1=1U;
si0+=si1;
l2=si0;
si0=l8;
si1=255U;
si0&=si1;
l8=si0;
goto L6;
L7:;
si0=l4;
si0=i32_load8_u(&i->m0,(U64)si0+1U);
si1=63U;
si0&=si1;
l2=si0;
si0=l8;
si1=31U;
si0&=si1;
l9=si0;
si0=l8;
si1=-33U;
si0=si0 > si1;
if(si0){
goto L8;
}
si0=l9;
si1=6U;
si0<<=(si1&31);
si1=l2;
si0|=si1;
l8=si0;
si0=l4;
si1=2U;
si0+=si1;
l2=si0;
goto L6;
L8:;
si0=l2;
si1=6U;
si0<<=(si1&31);
si1=l4;
si1=i32_load8_u(&i->m0,(U64)si1+2U);
si2=63U;
si1&=si2;
si0|=si1;
l10=si0;
si0=l8;
si1=-16U;
si0=si0 >= si1;
if(si0){
goto L9;
}
si0=l10;
si1=l9;
si2=12U;
si1<<=(si2&31);
si0|=si1;
l8=si0;
si0=l4;
si1=3U;
si0+=si1;
l2=si0;
goto L6;
L9:;
si0=l4;
si1=4U;
si0+=si1;
l2=si0;
si0=l10;
si1=6U;
si0<<=(si1&31);
si1=l4;
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
l8=si0;
si1=1114112U;
si0=si0 != si1;
if(si0){
goto L6;
}
si0=0U;
l6=si0;
si0=1U;
l5=si0;
si0=l7;
l4=si0;
goto L3;
L6:;
si0=l2;
si1=l4;
si0-=si1;
si1=l7;
si0+=si1;
l4=si0;
si0=l8;
si1=-9U;
si0+=si1;
si1=5U;
si0=si0 < si1;
if(si0){
goto L10;
}
si0=l8;
si1=32U;
si0=si0 == si1;
if(si0){
goto L10;
}
si0=0U;
l5=si0;
si0=l8;
si1=128U;
si0=si0 >= si1;
if(si0){
goto L11;
}
si0=l4;
l6=si0;
goto L3;
L11:;
si0=l4;
l6=si0;
si0=l8;
si1=8U;
si0>>=(si1&31);
l9=si0;
si1=-22U;
si0+=si1;
switch(si0){
case 0:
goto L15;
case 1:
goto L3;
case 2:
goto L3;
case 3:
goto L3;
case 4:
goto L3;
case 5:
goto L3;
case 6:
goto L3;
case 7:
goto L3;
case 8:
goto L3;
case 9:
goto L3;
case 10:
goto L13;
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
goto L14;
default:
goto L16;
}
L16:;
si0=l9;
si0=!(si0);
if(si0){
goto L12;
}
si0=l4;
l6=si0;
goto L3;
L15:;
si0=l8;
si1=5760U;
si0=si0 == si1;
if(si0){
goto L10;
}
si0=l4;
l6=si0;
goto L3;
L14:;
si0=l8;
si1=12288U;
si0=si0 == si1;
if(si0){
goto L10;
}
si0=l4;
l6=si0;
goto L3;
L13:;
si0=l8;
si1=255U;
si0&=si1;
si1=1124490U;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=2U;
si0&=si1;
if(si0){
goto L10;
}
si0=l4;
l6=si0;
goto L3;
L12:;
si0=l8;
si1=255U;
si0&=si1;
si1=1124490U;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=1U;
si0&=si1;
if(si0){
goto L10;
}
si0=l4;
l6=si0;
goto L3;
L10:;
si0=l2;
si1=l3;
si0=si0 != si1;
if(si0){
goto L5;
}
}
si0=0U;
l6=si0;
goto L2;
L3:;
si0=l2;
si1=l3;
si0=si0 == si1;
if(si0){
goto L17;
}
L18:;
{
si0=l3;
l9=si0;
si1=-1U;
si0+=si1;
l3=si0;
si0=i32_load8_u(&i->m0,(U64)si0);
l8=si0;
si0=(U32)(U32)(I8)(U8)(si0);
l10=si0;
si1=-1U;
si0=(U32)((I32)si0>(I32)si1);
if(si0){
goto L19;
}
si0=l9;
si1=-2U;
si0+=si1;
l3=si0;
si0=i32_load8_u(&i->m0,(U64)si0);
l8=si0;
si0=(U32)(U32)(I8)(U8)(si0);
l11=si0;
si1=-64U;
si0=(U32)((I32)si0<(I32)si1);
if(si0){
goto L21;
}
si0=l8;
si1=31U;
si0&=si1;
l8=si0;
goto L20;
L21:;
si0=l9;
si1=-3U;
si0+=si1;
l3=si0;
si0=i32_load8_u(&i->m0,(U64)si0);
l8=si0;
si0=(U32)(U32)(I8)(U8)(si0);
l12=si0;
si1=-64U;
si0=(U32)((I32)si0<(I32)si1);
if(si0){
goto L23;
}
si0=l8;
si1=15U;
si0&=si1;
l8=si0;
goto L22;
L23:;
si0=l9;
si1=-4U;
si0+=si1;
l3=si0;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=7U;
si0&=si1;
si1=6U;
si0<<=(si1&31);
si1=l12;
si2=63U;
si1&=si2;
si0|=si1;
l8=si0;
L22:;
si0=l8;
si1=6U;
si0<<=(si1&31);
si1=l11;
si2=63U;
si1&=si2;
si0|=si1;
l8=si0;
L20:;
si0=l8;
si1=6U;
si0<<=(si1&31);
si1=l10;
si2=63U;
si1&=si2;
si0|=si1;
l8=si0;
si1=1114112U;
si0=si0 == si1;
if(si0){
goto L17;
}
L19:;
si0=l8;
si1=-9U;
si0+=si1;
si1=5U;
si0=si0 < si1;
if(si0){
goto L25;
}
si0=l8;
si1=32U;
si0=si0 == si1;
if(si0){
goto L25;
}
si0=l8;
si1=128U;
si0=si0 < si1;
if(si0){
goto L24;
}
si0=l8;
si1=8U;
si0>>=(si1&31);
l10=si0;
si1=-22U;
si0+=si1;
switch(si0){
case 0:
goto L29;
case 1:
goto L24;
case 2:
goto L24;
case 3:
goto L24;
case 4:
goto L24;
case 5:
goto L24;
case 6:
goto L24;
case 7:
goto L24;
case 8:
goto L24;
case 9:
goto L24;
case 10:
goto L27;
case 11:
goto L24;
case 12:
goto L24;
case 13:
goto L24;
case 14:
goto L24;
case 15:
goto L24;
case 16:
goto L24;
case 17:
goto L24;
case 18:
goto L24;
case 19:
goto L24;
case 20:
goto L24;
case 21:
goto L24;
case 22:
goto L24;
case 23:
goto L24;
case 24:
goto L24;
case 25:
goto L24;
case 26:
goto L28;
default:
goto L26;
}
L29:;
si0=l8;
si1=5760U;
si0=si0 == si1;
if(si0){
goto L25;
}
goto L24;
L28:;
si0=l8;
si1=12288U;
si0=si0 == si1;
if(si0){
goto L25;
}
goto L24;
L27:;
si0=l8;
si1=255U;
si0&=si1;
si1=1124490U;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=2U;
si0&=si1;
if(si0){
goto L25;
}
goto L24;
L26:;
si0=l10;
if(si0){
goto L24;
}
si0=l8;
si1=255U;
si0&=si1;
si1=1124490U;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=1U;
si0&=si1;
si0=!(si0);
if(si0){
goto L24;
}
L25:;
si0=l2;
si1=l3;
si0=si0 != si1;
if(si0){
goto L18;
}
goto L17;
L24:;
}
si0=l4;
si1=l2;
si0-=si1;
si1=l9;
si0+=si1;
l6=si0;
L17:;
si0=l5;
si0=!(si0);
if(si0){
goto L1;
}
L2:;
si0=0U;
l7=si0;
L1:;
si0=l0;
si1=l6;
si2=l7;
si1-=si2;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l1;
si2=l7;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
L0:;
}

void f3468(rustpythonInstance*i,U32 l0) {
L0:;
}

void f3469(rustpythonInstance*i,U32 l0) {
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

void f3470(rustpythonInstance*i,U32 l0) {
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
f3470(i,si0);
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
f3470(i,si0);
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
f3470(i,si0);
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
f3361(i,si0);
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
f3470(i,si0);
si0=l2;
f15271(i,si0);
si0=l0;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
f3470(i,si0);
si0=l2;
f15271(i,si0);
goto L0;
L25:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+4U);
l2=si0;
f3470(i,si0);
si0=l2;
f15271(i,si0);
si0=l0;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
f3470(i,si0);
si0=l2;
f15271(i,si0);
goto L0;
L24:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+4U);
l2=si0;
f3470(i,si0);
si0=l2;
f15271(i,si0);
goto L0;
L23:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+4U);
l2=si0;
f3385(i,si0);
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
f3385(i,si0);
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
f3471(i,si0);
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
f3385(i,si0);
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
f3471(i,si0);
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
f3470(i,si0);
si0=l2;
f15271(i,si0);
goto L0;
L22:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+4U);
l2=si0;
f3470(i,si0);
si0=l2;
f15271(i,si0);
si0=l0;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
f3470(i,si0);
si0=l2;
f15271(i,si0);
si0=l0;
si1=12U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
f3470(i,si0);
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
f3361(i,si0);
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
f3361(i,si0);
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
f3361(i,si0);
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
f3470(i,si0);
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
f3361(i,si0);
si0=l2;
si1=48U;
si0+=si1;
f3361(i,si0);
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
f3361(i,si0);
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
f3470(i,si0);
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
f3361(i,si0);
si0=l2;
si1=48U;
si0+=si1;
f3361(i,si0);
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
f3361(i,si0);
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
f3470(i,si0);
si0=l2;
f15271(i,si0);
si0=l0;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
f3470(i,si0);
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
f3361(i,si0);
si0=l2;
si1=48U;
si0+=si1;
f3361(i,si0);
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
f3361(i,si0);
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
f3470(i,si0);
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
f3361(i,si0);
si0=l2;
si1=48U;
si0+=si1;
f3361(i,si0);
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
f3361(i,si0);
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
f3470(i,si0);
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
f3470(i,si0);
si0=l2;
f15271(i,si0);
goto L0;
L13:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+4U);
l2=si0;
f3470(i,si0);
si0=l2;
f15271(i,si0);
goto L0;
L12:;
si0=l0;
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
f3470(i,si0);
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
f3361(i,si0);
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
f3470(i,si0);
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
f3361(i,si0);
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
f3361(i,si0);
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
f3470(i,si0);
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
f3470(i,si0);
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
f3361(i,si0);
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
f3373(i,si0);
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
f3470(i,si0);
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
f3470(i,si0);
si0=l2;
f15271(i,si0);
si0=l0;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
f3470(i,si0);
si0=l2;
f15271(i,si0);
goto L0;
L5:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+4U);
l2=si0;
f3470(i,si0);
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
f3361(i,si0);
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
f3361(i,si0);
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

void f3471(rustpythonInstance*i,U32 l0) {
U32 si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
l0=si0;
f3470(i,si0);
si0=l0;
f15271(i,si0);
L0:;
}

U32 f3472(rustpythonInstance*i,U32 l0,U32 l1) {
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
f3344(i,si0,si1);
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
f3355(i,si0,si1,si2);
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

U32 f3473(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
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
f3355(i,si0,si1,si2);
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

void f3474(rustpythonInstance*i,U32 l0,U32 l1) {
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
U32 si0,si1,si2;
U64 sj1;
si0=i->g0;
si1=32U;
si0-=si1;
l2=si0;
i->g0=si0;
si0=l2;
si1=0U;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l2;
sj1=0ULL;
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l2;
si1=1539400U;
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
si1=20U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=l1;
si1=32U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+36U);
l5=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+40U);
l6=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+8U);
l7=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+24U);
l8=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+12U);
l9=si0;
si0=l2;
si1=l1;
si1=i32_load(&i->m0,(U64)si1);
l1=si1;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l2;
si1=l9;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l2;
si1=l8;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l1;
si1=l7;
si2=40U;
si1*=si2;
si0+=si1;
l10=si0;
si0=l8;
si1=l4;
si2=40U;
si1*=si2;
si0+=si1;
l7=si0;
si0=l9;
si1=l3;
si2=40U;
si1*=si2;
si0+=si1;
l11=si0;
si0=1U;
l4=si0;
si0=1U;
l3=si0;
L7:;
{
si0=l5;
l9=si0;
si0=l6;
l8=si0;
si0=l3;
si1=2U;
si0=si0 != si1;
if(si0){
goto L10;
}
si0=l9;
l5=si0;
goto L9;
L10:;
si0=l4;
si1=2U;
si0=si0 == si1;
if(si0){
goto L11;
}
si0=l4;
si0=!(si0);
if(si0){
goto L13;
}
si0=l2;
si1=28U;
si0+=si1;
si1=0U;
si2=l4;
si0=si2?si0:si1;
l3=si0;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si0=!(si0);
if(si0){
goto L14;
}
si0=l1;
si1=l10;
si0=si0 == si1;
if(si0){
goto L15;
}
si0=l2;
si1=28U;
si0+=si1;
l3=si0;
si0=1U;
l4=si0;
goto L12;
L15:;
si0=l3;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
L14:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+24U);
l1=si0;
si0=!(si0);
if(si0){
goto L13;
}
si0=l11;
si1=l1;
si0=si0 == si1;
if(si0){
goto L13;
}
si0=l2;
si1=24U;
si0+=si1;
l3=si0;
si0=1U;
l4=si0;
goto L12;
L13:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+20U);
l1=si0;
si0=!(si0);
if(si0){
goto L11;
}
si0=l7;
si1=l1;
si0=si0 == si1;
if(si0){
goto L11;
}
si0=l2;
si1=20U;
si0+=si1;
l3=si0;
si0=0U;
l4=si0;
L12:;
si0=l3;
si1=l1;
si2=40U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=1U;
l3=si0;
si0=l8;
l6=si0;
si0=l9;
l5=si0;
goto L8;
L11:;
si0=1U;
l3=si0;
si0=0U;
l5=si0;
si0=2U;
l4=si0;
si0=l9;
si0=!(si0);
if(si0){
goto L9;
}
si0=l8;
l6=si0;
si0=l9;
l1=si0;
goto L8;
L9:;
si0=l8;
si0=!(si0);
if(si0){
goto L6;
}
si0=2U;
l3=si0;
si0=0U;
l6=si0;
si0=l8;
l1=si0;
L8:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+12U);
l8=si0;
si0=l2;
si1=l1;
si1=i32_load(&i->m0,(U64)si1);
l9=si1;
si2=l1;
si2=i32_load(&i->m0,(U64)si2+8U);
l1=si2;
si0=f3458(i,si0,si1,si2);
si0=!(si0);
if(si0){
goto L7;
}
}
si0=l1;
if(si0){
goto L5;
}
si0=1U;
l3=si0;
goto L4;
L6:;
si0=l0;
si1=16U;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si0=i32_load(&i->m0,(U64)si0+4U);
l1=si0;
si0=!(si0);
if(si0){
goto L1;
}
si0=l1;
si1=l1;
si2=3U;
si1<<=(si2&31);
l8=si1;
si0+=si1;
si1=-17U;
si0=si0 == si1;
if(si0){
goto L1;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0);
si1=l8;
si0-=si1;
si1=-8U;
si0+=si1;
f15271(i,si0);
goto L1;
L5:;
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
l3=si0;
si0=!(si0);
if(si0){
goto L2;
}
L4:;
si0=l3;
si1=l9;
si2=l1;
si0=f15390(i,si0,si1,si2);
l9=si0;
si0=l0;
si1=l8;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l0;
si1=l1;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l0;
si1=l1;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l0;
si1=l9;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=7U;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si0=i32_load(&i->m0,(U64)si0+4U);
l1=si0;
si0=!(si0);
if(si0){
goto L1;
}
si0=l1;
si1=l1;
si2=3U;
si1<<=(si2&31);
l8=si1;
si0+=si1;
si1=-17U;
si0=si0 == si1;
if(si0){
goto L1;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0);
si1=l8;
si0-=si1;
si1=-8U;
si0+=si1;
f15271(i,si0);
goto L1;
L3:;
f53(i);
UNREACHABLE;
L2:;
si0=1U;
si1=l1;
f52(i,si0,si1);
UNREACHABLE;
L1:;
si0=l2;
si1=32U;
si0+=si1;
i->g0=si0;
L0:;
}

void f3475(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 si0,si1,si2;
si0=l1;
si1=20U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=40U;
si0*=si1;
l2=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+12U);
l3=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+8U);
l4=si0;
si0=!(si0);
if(si0){
goto L5;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si0=l4;
si1=40U;
si0*=si1;
l6=si0;
si0=0U;
l1=si0;
L6:;
{
si0=l5;
si1=l1;
si0+=si1;
l4=si0;
si1=36U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L4;
}
si0=l6;
si1=l1;
si2=40U;
si1+=si2;
l1=si1;
si0=si0 != si1;
if(si0){
goto L6;
}
}
L5:;
si0=l3;
si1=-40U;
si0+=si1;
l5=si0;
si0=l2;
l1=si0;
L7:;
{
si0=l1;
si0=!(si0);
if(si0){
goto L1;
}
si0=l1;
si1=-40U;
si0+=si1;
l1=si0;
si0=l5;
si1=76U;
si0+=si1;
l6=si0;
si0=l5;
si1=40U;
si0+=si1;
l4=si0;
l5=si0;
si0=l6;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L7;
}
}
si0=l4;
si1=36U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L2;
}
si0=l4;
si1=40U;
si0+=si1;
l5=si0;
goto L3;
L4:;
si0=l4;
si1=36U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L2;
}
si0=l3;
l5=si0;
si0=l6;
si1=-40U;
si0+=si1;
si1=l1;
si0=si0 == si1;
if(si0){
goto L3;
}
si0=l4;
si1=40U;
si0+=si1;
l4=si0;
si0=l6;
si1=l1;
si0-=si1;
si1=-40U;
si0+=si1;
l1=si0;
L8:;
{
si0=l4;
si1=36U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L2;
}
si0=l4;
si1=40U;
si0+=si1;
l4=si0;
si0=l1;
si1=-40U;
si0+=si1;
l1=si0;
if(si0){
goto L8;
}
}
si0=l3;
l5=si0;
L3:;
si0=l5;
si1=l3;
si2=l2;
si1+=si2;
l1=si1;
si0=si0 == si1;
if(si0){
goto L1;
}
L10:;
{
si0=l5;
si1=36U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L9;
}
si0=l5;
si1=40U;
si0+=si1;
l5=si0;
si1=l1;
si0=si0 == si1;
if(si0){
goto L1;
}
goto L10;
}
L9:;
si0=l5;
l4=si0;
L2:;
si0=l0;
si1=l4;
si1=i32_load(&i->m0,(U64)si1+12U);
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l0;
si1=6U;
i32_store(&i->m0,(U64)si0,si1);
goto L0;
L1:;
si0=l0;
si1=16U;
i32_store(&i->m0,(U64)si0,si1);
L0:;
}

void f3476(rustpythonInstance*i,U32 l0,U32 l1) {
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
U64 l16=0;
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
U32 l28=0;
U32 l29=0;
U64 l30=0;
U64 l31=0;
U32 si0,si1,si2,si3,si4;
U64 sj0,sj1,sj2;
si0=i->g0;
si1=224U;
si0-=si1;
l2=si0;
i->g0=si0;
si0=l2;
si1=0U;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l2;
sj1=8ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=0U;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l2;
sj1=8ULL;
i64_store(&i->m0,(U64)si0+16U,sj1);
si0=l2;
si1=32U;
si0+=si1;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+8U);
l3=si1;
f3465(i,si0,si1);
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
si1=l3;
si2=72U;
si1*=si2;
l5=si1;
si0+=si1;
l6=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
l7=si0;
si0=l4;
l8=si0;
si0=l3;
si0=!(si0);
if(si0){
goto L3;
}
si0=l4;
si1=96U;
si0+=si1;
l1=si0;
si0=l5;
si1=-72U;
si0+=si1;
l9=si0;
si0=l2;
si1=48U;
si0+=si1;
si1=8U;
si0+=si1;
l10=si0;
si0=l2;
si1=48U;
si0+=si1;
si1=16U;
si0+=si1;
l11=si0;
si0=l2;
si1=48U;
si0+=si1;
si1=24U;
si0+=si1;
l12=si0;
si0=l4;
l3=si0;
si0=0U;
l13=si0;
L6:;
{
si0=l10;
si1=l3;
si2=32U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l11;
si1=l3;
si2=40U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l12;
si1=l3;
si2=48U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=48U;
si0+=si1;
si1=32U;
si0+=si1;
l5=si0;
si1=l3;
si2=56U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=48U;
si0+=si1;
si1=40U;
si0+=si1;
l14=si0;
si1=l3;
si2=64U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=l3;
sj1=i64_load(&i->m0,(U64)si1+24U);
i64_store(&i->m0,(U64)si0+48U,sj1);
si0=l3;
si1=72U;
si0+=si1;
l8=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
l15=si0;
si1=2U;
si0=si0 == si1;
if(si0){
goto L3;
}
si0=l3;
sj0=i64_load(&i->m0,(U64)si0+16U);
l16=sj0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+12U);
l17=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+8U);
l18=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+4U);
l19=si0;
si0=l2;
si1=96U;
si0+=si1;
si1=40U;
si0+=si1;
l20=si0;
si1=l14;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=96U;
si0+=si1;
si1=32U;
si0+=si1;
l21=si0;
si1=l5;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=96U;
si0+=si1;
si1=24U;
si0+=si1;
l22=si0;
si1=l12;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=96U;
si0+=si1;
si1=16U;
si0+=si1;
l23=si0;
si1=l11;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=96U;
si0+=si1;
si1=8U;
si0+=si1;
l24=si0;
si1=l10;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=l2;
sj1=i64_load(&i->m0,(U64)si1+48U);
i64_store(&i->m0,(U64)si0+96U,sj1);
si0=l15;
si0=!(si0);
if(si0){
goto L9;
}
si0=l17;
if(si0){
goto L13;
}
si0=1U;
l13=si0;
sj0=l25;
l16=sj0;
goto L12;
L13:;
sj0=l16;
sj1=32ULL;
sj0>>=(sj1&63);
l26=sj0;
si0=(U32)(sj0);
l3=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+44U);
si0=!(si0);
if(si0){
goto L14;
}
si0=0U;
l14=si0;
si0=l3;
l15=si0;
si0=l17;
l27=si0;
si0=l3;
si1=4U;
si0=si0 < si1;
if(si0){
goto L15;
}
si0=l3;
si1=-4U;
si0+=si1;
l5=si0;
si1=2U;
si0>>=(si1&31);
si1=1U;
si0+=si1;
l28=si0;
si1=1U;
si0&=si1;
l29=si0;
si0=0U;
l14=si0;
si0=l17;
l27=si0;
si0=l3;
l15=si0;
si0=l5;
si1=4U;
si0=si0 < si1;
if(si0){
goto L16;
}
si0=l28;
si1=2147483646U;
si0&=si1;
l28=si0;
si0=0U;
l14=si0;
si0=l17;
l5=si0;
si0=l3;
l15=si0;
L17:;
{
si0=l15;
si1=-8U;
si0+=si1;
l15=si0;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+4U);
si1=l5;
si1=i32_load(&i->m0,(U64)si1);
si2=l14;
si3=5U;
si2=I32_ROTL(si2,si3);
si1^=si2;
si2=-1640531527U;
si1*=si2;
si2=5U;
si1=I32_ROTL(si1,si2);
si0^=si1;
si1=-1640531527U;
si0*=si1;
l14=si0;
si0=l5;
si1=8U;
si0+=si1;
l27=si0;
l5=si0;
si0=l28;
si1=-2U;
si0+=si1;
l28=si0;
if(si0){
goto L17;
}
}
L16:;
si0=l29;
si0=!(si0);
if(si0){
goto L15;
}
si0=l15;
si1=-4U;
si0+=si1;
l15=si0;
si0=l27;
si0=i32_load(&i->m0,(U64)si0);
si1=l14;
si2=5U;
si1=I32_ROTL(si1,si2);
si0^=si1;
si1=-1640531527U;
si0*=si1;
l14=si0;
si0=l27;
si1=4U;
si0+=si1;
l27=si0;
L15:;
si0=l15;
si1=1U;
si0=si0 > si1;
if(si0){
goto L19;
}
si0=l27;
l5=si0;
goto L18;
L19:;
si0=l27;
si1=2U;
si0+=si1;
l5=si0;
si0=l15;
si1=-2U;
si0+=si1;
l15=si0;
si0=l14;
si1=5U;
si0=I32_ROTL(si0,si1);
si1=l27;
si1=i32_load16_u(&i->m0,(U64)si1);
si0^=si1;
si1=-1640531527U;
si0*=si1;
l14=si0;
L18:;
si0=l15;
si0=!(si0);
if(si0){
goto L20;
}
si0=l14;
si1=5U;
si0=I32_ROTL(si0,si1);
si1=l5;
si1=i32_load8_u(&i->m0,(U64)si1);
si0^=si1;
si1=-1640531527U;
si0*=si1;
l14=si0;
L20:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+32U);
l29=si0;
si1=-12U;
si0+=si1;
l28=si0;
si0=l14;
si1=5U;
si0=I32_ROTL(si0,si1);
si1=255U;
si0^=si1;
si1=-1640531527U;
si0*=si1;
l5=si0;
si1=25U;
si0>>=(si1&31);
sj0=(U64)(si0);
sj1=72340172838076673ULL;
sj0*=sj1;
l30=sj0;
si0=0U;
l27=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+36U);
l15=si0;
L21:;
{
si0=l29;
si1=l5;
si2=l15;
si1&=si2;
l14=si1;
si0+=si1;
sj0=i64_load(&i->m0,(U64)si0);
l31=sj0;
sj1=l30;
sj0^=sj1;
l25=sj0;
sj1=-1ULL;
sj0^=sj1;
sj1=l25;
sj2=-72340172838076673ULL;
sj1+=sj2;
sj0&=sj1;
sj1=-9187201950435737472ULL;
sj0&=sj1;
l25=sj0;
si0=!(sj0);
if(si0){
goto L22;
}
L24:;
{
si0=l28;
si1=0U;
sj2=l25;
sj2=I64_CTZ(sj2);
si2=(U32)(sj2);
si3=3U;
si2>>=(si3&31);
si3=l14;
si2+=si3;
si3=l15;
si2&=si3;
si1-=si2;
si2=12U;
si1*=si2;
si0+=si1;
l5=si0;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=l3;
si0=si0 != si1;
if(si0){
goto L25;
}
si0=l17;
si1=l5;
si1=i32_load(&i->m0,(U64)si1);
si2=l3;
si0=f15389(i,si0,si1,si2);
si0=!(si0);
if(si0){
goto L23;
}
L25:;
sj0=l25;
sj1=-1ULL;
sj0+=sj1;
sj1=l25;
sj0&=sj1;
l25=sj0;
si0=!(sj0);
if(si0){
goto L22;
}
goto L24;
}
L23:;
si0=l2;
si1=0U;
i32_store(&i->m0,(U64)si0+216U,si1);
si0=l2;
sj1=1ULL;
i64_store(&i->m0,(U64)si0+208U,sj1);
si0=l2;
si1=184U;
si0+=si1;
si1=1539212U;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=3U;
i32_store8(&i->m0,(U64)si0+192U,si1);
si0=l2;
si1=32U;
i32_store(&i->m0,(U64)si0+176U,si1);
si0=l2;
si1=0U;
i32_store(&i->m0,(U64)si0+188U,si1);
si0=l2;
si1=0U;
i32_store(&i->m0,(U64)si0+168U,si1);
si0=l2;
si1=0U;
i32_store(&i->m0,(U64)si0+160U,si1);
si0=l2;
si1=l2;
si2=208U;
si1+=si2;
i32_store(&i->m0,(U64)si0+180U,si1);
si0=l2;
si1=160U;
si0+=si1;
si1=l17;
sj2=l26;
si2=(U32)(sj2);
si0=f713(i,si0,si1,si2);
if(si0){
goto L26;
}
si0=l2;
si1=144U;
si0+=si1;
si1=8U;
si0+=si1;
si1=l2;
si2=208U;
si1+=si2;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
l3=si1;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=l2;
sj1=i64_load(&i->m0,(U64)si1+208U);
l25=sj1;
i64_store(&i->m0,(U64)si0+144U,sj1);
si0=l0;
sj1=42949672960ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=8U;
si0+=si1;
sj1=l25;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=16U;
si0+=si1;
si1=l3;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=20U;
si0+=si1;
si1=l19;
i32_store(&i->m0,(U64)si0,si1);
sj0=l16;
si0=(U32)(sj0);
si0=!(si0);
if(si0){
goto L4;
}
si0=l17;
f15271(i,si0);
goto L4;
L26:;
si0=1539236U;
si1=55U;
si2=l2;
si3=144U;
si2+=si3;
si3=1539292U;
si4=1539384U;
f712(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L22:;
sj0=l31;
sj1=l31;
sj2=1ULL;
sj1<<=(sj2&63);
sj0&=sj1;
sj1=-9187201950435737472ULL;
sj0&=sj1;
si0=!(sj0);
si0=!(si0);
if(si0){
goto L14;
}
si0=l14;
si1=l27;
si2=8U;
si1+=si2;
l27=si1;
si0+=si1;
l5=si0;
goto L21;
}
L14:;
si0=l3;
if(si0){
goto L28;
}
si0=1U;
l5=si0;
goto L27;
L28:;
sj0=l16;
sj1=-1ULL;
si0=(U64)((I64)sj0<=(I64)sj1);
if(si0){
goto L11;
}
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=l3;
si0=f15269(i,si0);
l5=si0;
si0=!(si0);
if(si0){
goto L10;
}
L27:;
si0=l5;
si1=l17;
si2=l3;
si0=f15390(i,si0,si1,si2);
l5=si0;
si0=l2;
si1=l3;
i32_store(&i->m0,(U64)si0+168U,si1);
si0=l2;
si1=l3;
i32_store(&i->m0,(U64)si0+164U,si1);
si0=l2;
si1=l5;
i32_store(&i->m0,(U64)si0+160U,si1);
si0=l2;
si1=32U;
si0+=si1;
si1=l2;
si2=160U;
si1+=si2;
si0=f3459(i,si0,si1);
L12:;
si0=l19;
si1=l18;
si0=si0 > si1;
if(si0){
goto L29;
}
si0=l2;
si1=160U;
si0+=si1;
si1=40U;
si0+=si1;
l5=si0;
si1=l20;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=160U;
si0+=si1;
si1=32U;
si0+=si1;
l14=si0;
si1=l21;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=160U;
si0+=si1;
si1=24U;
si0+=si1;
l15=si0;
si1=l22;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=160U;
si0+=si1;
si1=16U;
si0+=si1;
l28=si0;
si1=l23;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=160U;
si0+=si1;
si1=8U;
si0+=si1;
l27=si0;
si1=l24;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=l2;
sj1=i64_load(&i->m0,(U64)si1+96U);
i64_store(&i->m0,(U64)si0+160U,sj1);
si0=l2;
si0=i32_load(&i->m0,(U64)si0+24U);
l3=si0;
si1=l2;
si1=i32_load(&i->m0,(U64)si1+20U);
si0=si0 != si1;
if(si0){
goto L30;
}
si0=l2;
si1=16U;
si0+=si1;
si1=l3;
f3333(i,si0,si1);
si0=l2;
si0=i32_load(&i->m0,(U64)si0+24U);
l3=si0;
L30:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+16U);
si1=l3;
si2=72U;
si1*=si2;
si0+=si1;
l3=si0;
si1=l2;
sj1=i64_load(&i->m0,(U64)si1+160U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
sj1=l16;
i64_store(&i->m0,(U64)si0+60U,sj1);
si0=l3;
si1=l17;
i32_store(&i->m0,(U64)si0+56U,si1);
si0=l3;
si1=l18;
i32_store(&i->m0,(U64)si0+52U,si1);
si0=l3;
si1=l19;
i32_store(&i->m0,(U64)si0+48U,si1);
si0=l3;
si1=8U;
si0+=si1;
si1=l27;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=16U;
si0+=si1;
si1=l28;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=24U;
si0+=si1;
si1=l15;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=32U;
si0+=si1;
si1=l14;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=40U;
si0+=si1;
si1=l5;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=l2;
si1=i32_load(&i->m0,(U64)si1+24U);
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0+24U,si1);
sj0=l16;
l25=sj0;
goto L8;
L29:;
si0=1539408U;
si1=38U;
si2=1539548U;
f673(i,si0,si1,si2);
UNREACHABLE;
L11:;
f53(i);
UNREACHABLE;
L10:;
si0=1U;
sj1=l26;
si1=(U32)(sj1);
f52(i,si0,si1);
UNREACHABLE;
L9:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+96U);
l3=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+24U);
si0=!(si0);
if(si0){
goto L31;
}
si0=l3;
si1=33U;
si0=si0 != si1;
if(si0){
goto L7;
}
L31:;
si0=l13;
si1=1U;
si0&=si1;
if(si0){
goto L5;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0+8U);
l15=si0;
si1=l2;
si1=i32_load(&i->m0,(U64)si1+4U);
si0=si0 != si1;
if(si0){
goto L32;
}
si0=l2;
si1=l15;
f3347(i,si0,si1);
si0=l2;
si0=i32_load(&i->m0,(U64)si0+8U);
l15=si0;
L32:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0);
si1=l15;
si2=48U;
si1*=si2;
si0+=si1;
l3=si0;
si1=l2;
sj1=i64_load(&i->m0,(U64)si1+48U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=8U;
si0+=si1;
si1=l10;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=16U;
si0+=si1;
si1=l11;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=24U;
si0+=si1;
si1=l12;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=32U;
si0+=si1;
si1=l5;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=40U;
si0+=si1;
si1=l14;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=l15;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=0U;
l13=si0;
L8:;
si0=l9;
si1=-72U;
si0+=si1;
l9=si0;
si0=l1;
si1=72U;
si0+=si1;
l1=si0;
si0=l8;
l3=si0;
si0=l8;
si1=l6;
si0=si0 != si1;
if(si0){
goto L6;
}
goto L2;
L7:;
}
si0=l3;
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
goto L60;
case 1:
goto L59;
case 2:
goto L58;
case 3:
goto L57;
case 4:
goto L56;
case 5:
goto L55;
case 6:
goto L54;
case 7:
goto L53;
case 8:
goto L52;
case 9:
goto L51;
case 10:
goto L50;
case 11:
goto L49;
case 12:
goto L48;
case 13:
goto L47;
case 14:
goto L46;
case 15:
goto L45;
case 16:
goto L44;
case 17:
goto L43;
case 18:
goto L42;
case 19:
goto L41;
case 20:
goto L40;
case 21:
goto L39;
case 22:
goto L38;
case 23:
goto L37;
case 24:
goto L36;
case 25:
goto L35;
case 26:
goto L34;
default:
goto L60;
}
L60:;
si0=l2;
si1=112U;
si0+=si1;
l3=si0;
goto L33;
L59:;
si0=l2;
si1=108U;
si0+=si1;
l3=si0;
goto L33;
L58:;
si0=l2;
si1=108U;
si0+=si1;
l3=si0;
goto L33;
L57:;
si0=l2;
si1=104U;
si0+=si1;
l3=si0;
goto L33;
L56:;
si0=l2;
si1=108U;
si0+=si1;
l3=si0;
goto L33;
L55:;
si0=l2;
si1=112U;
si0+=si1;
l3=si0;
goto L33;
L54:;
si0=l2;
si1=124U;
si0+=si1;
l3=si0;
goto L33;
L53:;
si0=l2;
si1=112U;
si0+=si1;
l3=si0;
goto L33;
L52:;
si0=l2;
si1=116U;
si0+=si1;
l3=si0;
goto L33;
L51:;
si0=l2;
si1=116U;
si0+=si1;
l3=si0;
goto L33;
L50:;
si0=l2;
si1=120U;
si0+=si1;
l3=si0;
goto L33;
L49:;
si0=l2;
si1=116U;
si0+=si1;
l3=si0;
goto L33;
L48:;
si0=l2;
si1=104U;
si0+=si1;
l3=si0;
goto L33;
L47:;
si0=l2;
si1=96U;
si0+=si1;
si1=4U;
si0|=si1;
l3=si0;
goto L33;
L46:;
si0=l2;
si1=104U;
si0+=si1;
l3=si0;
goto L33;
L45:;
si0=l2;
si1=128U;
si0+=si1;
l3=si0;
goto L33;
L44:;
si0=l2;
si1=128U;
si0+=si1;
l3=si0;
goto L33;
L43:;
si0=l2;
si1=104U;
si0+=si1;
l3=si0;
goto L33;
L42:;
si0=l2;
si1=112U;
si0+=si1;
l3=si0;
goto L33;
L41:;
si0=l2;
si1=120U;
si0+=si1;
l3=si0;
goto L33;
L40:;
si0=l2;
si1=116U;
si0+=si1;
l3=si0;
goto L33;
L39:;
si0=l2;
si1=108U;
si0+=si1;
l3=si0;
goto L33;
L38:;
si0=l2;
si1=104U;
si0+=si1;
l3=si0;
goto L33;
L37:;
si0=l2;
si1=112U;
si0+=si1;
l3=si0;
goto L33;
L36:;
si0=l2;
si1=112U;
si0+=si1;
l3=si0;
goto L33;
L35:;
si0=l2;
si1=112U;
si0+=si1;
l3=si0;
goto L33;
L34:;
si0=l2;
si1=96U;
si0+=si1;
si1=4U;
si0|=si1;
l3=si0;
L33:;
si0=l0;
sj1=34359738368ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=20U;
si0+=si1;
si1=l3;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
goto L4;
L5:;
si0=l3;
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
goto L88;
case 1:
goto L87;
case 2:
goto L86;
case 3:
goto L85;
case 4:
goto L84;
case 5:
goto L83;
case 6:
goto L82;
case 7:
goto L81;
case 8:
goto L80;
case 9:
goto L79;
case 10:
goto L78;
case 11:
goto L77;
case 12:
goto L76;
case 13:
goto L75;
case 14:
goto L74;
case 15:
goto L73;
case 16:
goto L72;
case 17:
goto L71;
case 18:
goto L70;
case 19:
goto L69;
case 20:
goto L68;
case 21:
goto L67;
case 22:
goto L66;
case 23:
goto L65;
case 24:
goto L64;
case 25:
goto L63;
case 26:
goto L62;
default:
goto L88;
}
L88:;
si0=l2;
si1=112U;
si0+=si1;
l3=si0;
goto L61;
L87:;
si0=l2;
si1=108U;
si0+=si1;
l3=si0;
goto L61;
L86:;
si0=l2;
si1=108U;
si0+=si1;
l3=si0;
goto L61;
L85:;
si0=l2;
si1=104U;
si0+=si1;
l3=si0;
goto L61;
L84:;
si0=l2;
si1=108U;
si0+=si1;
l3=si0;
goto L61;
L83:;
si0=l2;
si1=112U;
si0+=si1;
l3=si0;
goto L61;
L82:;
si0=l2;
si1=124U;
si0+=si1;
l3=si0;
goto L61;
L81:;
si0=l2;
si1=112U;
si0+=si1;
l3=si0;
goto L61;
L80:;
si0=l2;
si1=116U;
si0+=si1;
l3=si0;
goto L61;
L79:;
si0=l2;
si1=116U;
si0+=si1;
l3=si0;
goto L61;
L78:;
si0=l2;
si1=120U;
si0+=si1;
l3=si0;
goto L61;
L77:;
si0=l2;
si1=116U;
si0+=si1;
l3=si0;
goto L61;
L76:;
si0=l2;
si1=104U;
si0+=si1;
l3=si0;
goto L61;
L75:;
si0=l2;
si1=96U;
si0+=si1;
si1=4U;
si0|=si1;
l3=si0;
goto L61;
L74:;
si0=l2;
si1=104U;
si0+=si1;
l3=si0;
goto L61;
L73:;
si0=l2;
si1=128U;
si0+=si1;
l3=si0;
goto L61;
L72:;
si0=l2;
si1=128U;
si0+=si1;
l3=si0;
goto L61;
L71:;
si0=l2;
si1=104U;
si0+=si1;
l3=si0;
goto L61;
L70:;
si0=l2;
si1=112U;
si0+=si1;
l3=si0;
goto L61;
L69:;
si0=l2;
si1=120U;
si0+=si1;
l3=si0;
goto L61;
L68:;
si0=l2;
si1=116U;
si0+=si1;
l3=si0;
goto L61;
L67:;
si0=l2;
si1=108U;
si0+=si1;
l3=si0;
goto L61;
L66:;
si0=l2;
si1=104U;
si0+=si1;
l3=si0;
goto L61;
L65:;
si0=l2;
si1=112U;
si0+=si1;
l3=si0;
goto L61;
L64:;
si0=l2;
si1=112U;
si0+=si1;
l3=si0;
goto L61;
L63:;
si0=l2;
si1=112U;
si0+=si1;
l3=si0;
goto L61;
L62:;
si0=l2;
si1=96U;
si0+=si1;
si1=4U;
si0|=si1;
l3=si0;
L61:;
si0=l0;
sj1=38654705664ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=20U;
si0+=si1;
si1=l3;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
L4:;
si0=l2;
si1=96U;
si0+=si1;
f3470(i,si0);
si0=l6;
si1=l8;
si0=si0 == si1;
if(si0){
goto L89;
}
si0=l9;
si1=72U;
si0=DIV_U(si0,si1);
l8=si0;
L90:;
{
si0=l1;
si1=-24U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L91;
}
si0=l1;
si1=-12U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=!(si0);
if(si0){
goto L91;
}
si0=l1;
si1=-8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L91;
}
si0=l3;
f15271(i,si0);
L91:;
si0=l1;
f3500(i,si0);
si0=l1;
si1=72U;
si0+=si1;
l1=si0;
si0=l8;
si1=-1U;
si0+=si1;
l8=si0;
if(si0){
goto L90;
}
}
L89:;
si0=l7;
si0=!(si0);
if(si0){
goto L92;
}
si0=l4;
f15271(i,si0);
L92:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+36U);
l14=si0;
si0=!(si0);
if(si0){
goto L93;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0+44U);
l5=si0;
if(si0){
goto L95;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0+32U);
l15=si0;
goto L94;
L95:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+32U);
l15=si0;
si1=8U;
si0+=si1;
l3=si0;
si0=l15;
sj0=i64_load(&i->m0,(U64)si0);
sj1=-1ULL;
sj0^=sj1;
sj1=-9187201950435737472ULL;
sj0&=sj1;
l25=sj0;
si0=l15;
l8=si0;
L96:;
{
sj0=l25;
sj1=0ULL;
si0=sj0 != sj1;
if(si0){
goto L97;
}
si0=l3;
l1=si0;
L98:;
{
si0=l8;
si1=-96U;
si0+=si1;
l8=si0;
si0=l1;
sj0=i64_load(&i->m0,(U64)si0);
l25=sj0;
si0=l1;
si1=8U;
si0+=si1;
l3=si0;
l1=si0;
sj0=l25;
sj1=-1ULL;
sj0^=sj1;
sj1=-9187201950435737472ULL;
sj0&=sj1;
l25=sj0;
si0=!(sj0);
if(si0){
goto L98;
}
}
L97:;
si0=l5;
si1=-1U;
si0+=si1;
l5=si0;
sj0=l25;
sj1=-1ULL;
sj0+=sj1;
l16=sj0;
si0=l8;
si1=0U;
sj2=l25;
sj2=I64_CTZ(sj2);
si2=(U32)(sj2);
si3=3U;
si2>>=(si3&31);
si1-=si2;
si2=12U;
si1*=si2;
si0+=si1;
si1=-12U;
si0+=si1;
l1=si0;
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L99;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
f15271(i,si0);
L99:;
sj0=l16;
sj1=l25;
sj0&=sj1;
l25=sj0;
si0=l5;
if(si0){
goto L96;
}
}
L94:;
si0=l14;
si1=l14;
si2=1U;
si1+=si2;
sj1=(U64)(si1);
sj2=12ULL;
sj1*=sj2;
si1=(U32)(sj1);
si2=7U;
si1+=si2;
si2=-8U;
si1&=si2;
l1=si1;
si0+=si1;
si1=-9U;
si0=si0 == si1;
if(si0){
goto L93;
}
si0=l15;
si1=l1;
si0-=si1;
f15271(i,si0);
L93:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+24U);
l8=si0;
si0=!(si0);
if(si0){
goto L100;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0+16U);
l1=si0;
L101:;
{
si0=l1;
si1=56U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=!(si0);
if(si0){
goto L102;
}
si0=l1;
si1=60U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L102;
}
si0=l3;
f15271(i,si0);
L102:;
si0=l1;
f3361(i,si0);
si0=l1;
si1=72U;
si0+=si1;
l1=si0;
si0=l8;
si1=-1U;
si0+=si1;
l8=si0;
if(si0){
goto L101;
}
}
L100:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+20U);
si0=!(si0);
if(si0){
goto L103;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0+16U);
f15271(i,si0);
L103:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+8U);
l8=si0;
si0=!(si0);
if(si0){
goto L104;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
L105:;
{
si0=l1;
f3361(i,si0);
si0=l1;
si1=48U;
si0+=si1;
l1=si0;
si0=l8;
si1=-1U;
si0+=si1;
l8=si0;
if(si0){
goto L105;
}
}
L104:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+4U);
si0=!(si0);
if(si0){
goto L1;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0);
f15271(i,si0);
goto L1;
L3:;
si0=l6;
si1=l8;
si0-=si1;
si1=72U;
si0=DIV_U(si0,si1);
l1=si0;
si0=l6;
si1=l8;
si0=si0 == si1;
if(si0){
goto L2;
}
L106:;
{
si0=l8;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L107;
}
si0=l8;
si1=12U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=!(si0);
if(si0){
goto L107;
}
si0=l8;
si1=16U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L107;
}
si0=l3;
f15271(i,si0);
L107:;
si0=l8;
si1=24U;
si0+=si1;
f3500(i,si0);
si0=l8;
si1=72U;
si0+=si1;
l8=si0;
si0=l1;
si1=-1U;
si0+=si1;
l1=si0;
if(si0){
goto L106;
}
}
L2:;
si0=l7;
si0=!(si0);
if(si0){
goto L108;
}
si0=l4;
f15271(i,si0);
L108:;
si0=l2;
si1=160U;
si0+=si1;
si1=8U;
si0+=si1;
l1=si0;
si1=l2;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=180U;
si0+=si1;
si1=l2;
si2=16U;
si1+=si2;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=l2;
sj1=i64_load(&i->m0,(U64)si1+16U);
i64_store(&i->m0,(U64)si0+172U,sj1);
si0=l0;
si1=8U;
si0+=si1;
si1=l1;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=16U;
si0+=si1;
si1=l2;
si2=160U;
si1+=si2;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si0=i32_load(&i->m0,(U64)si0+36U);
l14=si0;
si0=!(si0);
if(si0){
goto L1;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0+44U);
l5=si0;
if(si0){
goto L110;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0+32U);
l15=si0;
goto L109;
L110:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+32U);
l15=si0;
si1=8U;
si0+=si1;
l3=si0;
si0=l15;
sj0=i64_load(&i->m0,(U64)si0);
sj1=-1ULL;
sj0^=sj1;
sj1=-9187201950435737472ULL;
sj0&=sj1;
l25=sj0;
si0=l15;
l8=si0;
L111:;
{
sj0=l25;
sj1=0ULL;
si0=sj0 != sj1;
if(si0){
goto L112;
}
si0=l3;
l1=si0;
L113:;
{
si0=l8;
si1=-96U;
si0+=si1;
l8=si0;
si0=l1;
sj0=i64_load(&i->m0,(U64)si0);
l25=sj0;
si0=l1;
si1=8U;
si0+=si1;
l3=si0;
l1=si0;
sj0=l25;
sj1=-1ULL;
sj0^=sj1;
sj1=-9187201950435737472ULL;
sj0&=sj1;
l25=sj0;
si0=!(sj0);
if(si0){
goto L113;
}
}
L112:;
si0=l5;
si1=-1U;
si0+=si1;
l5=si0;
sj0=l25;
sj1=-1ULL;
sj0+=sj1;
l16=sj0;
si0=l8;
si1=0U;
sj2=l25;
sj2=I64_CTZ(sj2);
si2=(U32)(sj2);
si3=3U;
si2>>=(si3&31);
si1-=si2;
si2=12U;
si1*=si2;
si0+=si1;
si1=-12U;
si0+=si1;
l1=si0;
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L114;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
f15271(i,si0);
L114:;
sj0=l16;
sj1=l25;
sj0&=sj1;
l25=sj0;
si0=l5;
if(si0){
goto L111;
}
}
L109:;
si0=l14;
si1=l14;
si2=1U;
si1+=si2;
sj1=(U64)(si1);
sj2=12ULL;
sj1*=sj2;
si1=(U32)(sj1);
si2=7U;
si1+=si2;
si2=-8U;
si1&=si2;
l1=si1;
si0+=si1;
si1=-9U;
si0=si0 == si1;
if(si0){
goto L1;
}
si0=l15;
si1=l1;
si0-=si1;
f15271(i,si0);
L1:;
si0=l2;
si1=224U;
si0+=si1;
i->g0=si0;
L0:;
}

void f3477(rustpythonInstance*i,U32 l0) {
L0:;
}

void f3478(rustpythonInstance*i,U32 l0) {
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
f3478(i,si0);
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
f3478(i,si0);
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
f3478(i,si0);
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
f3361(i,si0);
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
f3478(i,si0);
si0=l2;
f15271(i,si0);
si0=l0;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
f3478(i,si0);
si0=l2;
f15271(i,si0);
goto L0;
L25:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+4U);
l2=si0;
f3478(i,si0);
si0=l2;
f15271(i,si0);
si0=l0;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
f3478(i,si0);
si0=l2;
f15271(i,si0);
goto L0;
L24:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+4U);
l2=si0;
f3478(i,si0);
si0=l2;
f15271(i,si0);
goto L0;
L23:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+4U);
l2=si0;
f3385(i,si0);
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
f3385(i,si0);
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
f3479(i,si0);
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
f3385(i,si0);
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
f3479(i,si0);
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
f3478(i,si0);
si0=l2;
f15271(i,si0);
goto L0;
L22:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+4U);
l2=si0;
f3478(i,si0);
si0=l2;
f15271(i,si0);
si0=l0;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
f3478(i,si0);
si0=l2;
f15271(i,si0);
si0=l0;
si1=12U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
f3478(i,si0);
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
f3361(i,si0);
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
f3361(i,si0);
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
f3361(i,si0);
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
f3478(i,si0);
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
f3361(i,si0);
si0=l2;
si1=48U;
si0+=si1;
f3361(i,si0);
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
f3361(i,si0);
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
f3478(i,si0);
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
f3361(i,si0);
si0=l2;
si1=48U;
si0+=si1;
f3361(i,si0);
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
f3361(i,si0);
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
f3478(i,si0);
si0=l2;
f15271(i,si0);
si0=l0;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
f3478(i,si0);
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
f3361(i,si0);
si0=l2;
si1=48U;
si0+=si1;
f3361(i,si0);
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
f3361(i,si0);
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
f3478(i,si0);
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
f3361(i,si0);
si0=l2;
si1=48U;
si0+=si1;
f3361(i,si0);
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
f3361(i,si0);
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
f3478(i,si0);
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
f3478(i,si0);
si0=l2;
f15271(i,si0);
goto L0;
L13:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+4U);
l2=si0;
f3478(i,si0);
si0=l2;
f15271(i,si0);
goto L0;
L12:;
si0=l0;
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
f3478(i,si0);
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
f3361(i,si0);
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
f3478(i,si0);
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
f3361(i,si0);
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
f3361(i,si0);
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
f3478(i,si0);
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
f3478(i,si0);
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
f3361(i,si0);
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
f3373(i,si0);
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
f3478(i,si0);
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
f3478(i,si0);
si0=l2;
f15271(i,si0);
si0=l0;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
f3478(i,si0);
si0=l2;
f15271(i,si0);
goto L0;
L5:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+4U);
l2=si0;
f3478(i,si0);
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
f3361(i,si0);
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
f3361(i,si0);
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

void f3479(rustpythonInstance*i,U32 l0) {
U32 si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
l0=si0;
f3478(i,si0);
si0=l0;
f15271(i,si0);
L0:;
}

void f3480(rustpythonInstance*i,U32 l0) {
L0:;
}

void f3481(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
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
U32 si0,si1,si2,si3;
si0=i->g0;
si1=128U;
si0-=si1;
l3=si0;
i->g0=si0;
si0=l0;
si0=!(si0);
if(si0){
goto L1;
}
si0=l2;
si0=!(si0);
if(si0){
goto L1;
}
L2:;
{
si0=l2;
si1=l0;
si0+=si1;
si1=24U;
si0=si0 < si1;
if(si0){
goto L5;
}
si0=l0;
si1=l2;
si2=l0;
si3=l2;
si2=si2 < si3;
l4=si2;
si0=si2?si0:si1;
si1=33U;
si0=si0 >= si1;
if(si0){
goto L3;
}
si0=l1;
si1=l0;
si2=2U;
si1<<=(si2&31);
l5=si1;
si0-=si1;
l4=si0;
si1=l2;
si2=2U;
si1<<=(si2&31);
l6=si1;
si0+=si1;
l7=si0;
si0=l0;
si1=l2;
si0=si0 <= si1;
if(si0){
goto L4;
}
si0=l3;
si1=l1;
si2=l6;
si0=f15390(i,si0,si1,si2);
l8=si0;
si0=l7;
si1=l4;
si2=l5;
si0=f15391(i,si0,si1,si2);
si0=l4;
si1=l8;
si2=l6;
si0=f15390(i,si0,si1,si2);
goto L1;
L5:;
si0=l2;
si1=2U;
si0<<=(si1&31);
l9=si0;
si0=0U;
si1=l0;
si0-=si1;
l10=si0;
si0=l1;
si1=l0;
si2=2U;
si1<<=(si2&31);
si0-=si1;
l8=si0;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si0=l2;
l11=si0;
si0=l2;
l5=si0;
L6:;
{
si0=l8;
si1=l5;
si2=2U;
si1<<=(si2&31);
si0+=si1;
l4=si0;
L8:;
{
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
si0=l4;
si1=l6;
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=l0;
si0=si0 >= si1;
if(si0){
goto L7;
}
si0=l4;
si1=l9;
si0+=si1;
l4=si0;
si0=l5;
si1=l2;
si0+=si1;
l5=si0;
si0=l7;
l6=si0;
goto L8;
}
L7:;
si0=l10;
si1=l5;
si0+=si1;
l5=si0;
if(si0){
goto L9;
}
si0=l8;
si1=l7;
i32_store(&i->m0,(U64)si0,si1);
si0=l11;
si1=2U;
si0=si0 < si1;
if(si0){
goto L1;
}
si0=1U;
l9=si0;
L10:;
{
si0=l9;
si1=l2;
si0+=si1;
l4=si0;
si0=l8;
si1=l9;
si2=2U;
si1<<=(si2&31);
si0+=si1;
l10=si0;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
L11:;
{
si0=l8;
si1=l4;
si2=2U;
si1<<=(si2&31);
si0+=si1;
l7=si0;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si0=l7;
si1=l5;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=l0;
si0=si0 >= si1;
if(si0){
goto L12;
}
si0=l4;
si1=l2;
si0+=si1;
l4=si0;
si0=l6;
l5=si0;
goto L11;
L12:;
si0=l6;
l5=si0;
si0=l4;
si1=l0;
si0-=si1;
l4=si0;
si1=l9;
si0=si0 != si1;
if(si0){
goto L11;
}
}
si0=l10;
si1=l6;
i32_store(&i->m0,(U64)si0,si1);
si0=l9;
si1=1U;
si0+=si1;
l9=si0;
si1=l11;
si0=si0 != si1;
if(si0){
goto L10;
}
goto L1;
}
L9:;
si0=l5;
si1=l11;
si2=l5;
si3=l11;
si2=si2 < si3;
si0=si2?si0:si1;
l11=si0;
si0=l7;
l6=si0;
goto L6;
}
L4:;
si0=l3;
si1=l4;
si2=l5;
si0=f15390(i,si0,si1,si2);
l8=si0;
si0=l4;
si1=l1;
si2=l6;
si0=f15391(i,si0,si1,si2);
si0=l7;
si1=l8;
si2=l5;
si0=f15390(i,si0,si1,si2);
goto L1;
L3:;
si0=l4;
if(si0){
goto L14;
}
si0=l2;
si1=3U;
si0&=si1;
l12=si0;
si0=l2;
si1=-1U;
si0+=si1;
l13=si0;
si0=0U;
si1=l2;
si0-=si1;
l14=si0;
si0=l1;
si1=l2;
si2=2U;
si1<<=(si2&31);
l4=si1;
si0-=si1;
l15=si0;
si0=0U;
si1=l4;
si0-=si1;
l11=si0;
si0=0U;
si1=l2;
si2=-4U;
si1&=si2;
si0-=si1;
l10=si0;
L15:;
{
si0=0U;
l4=si0;
si0=l13;
si1=3U;
si0=si0 < si1;
if(si0){
goto L16;
}
si0=0U;
l6=si0;
si0=l1;
l4=si0;
L17:;
{
si0=l4;
si1=l11;
si0+=si1;
l5=si0;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
si0=l5;
si1=l4;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=l7;
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=4U;
si0+=si1;
l7=si0;
si0=i32_load(&i->m0,(U64)si0);
l8=si0;
si0=l7;
si1=l4;
si2=4U;
si1+=si2;
l9=si1;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l9;
si1=l8;
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=8U;
si0+=si1;
l7=si0;
si0=i32_load(&i->m0,(U64)si0);
l8=si0;
si0=l7;
si1=l4;
si2=8U;
si1+=si2;
l9=si1;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l9;
si1=l8;
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=12U;
si0+=si1;
l5=si0;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
si0=l5;
si1=l4;
si2=12U;
si1+=si2;
l8=si1;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l8;
si1=l7;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=16U;
si0+=si1;
l4=si0;
si0=l10;
si1=l6;
si2=-4U;
si1+=si2;
l6=si1;
si0=si0 != si1;
if(si0){
goto L17;
}
}
si0=0U;
si1=l6;
si0-=si1;
l4=si0;
L16:;
si0=l14;
si1=2U;
si0<<=(si1&31);
l8=si0;
si0=l12;
si0=!(si0);
if(si0){
goto L18;
}
si0=l15;
si1=l4;
si2=2U;
si1<<=(si2&31);
l5=si1;
si0+=si1;
l4=si0;
si0=l1;
si1=l5;
si0+=si1;
l5=si0;
si0=l12;
l6=si0;
L19:;
{
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
si0=l4;
si1=l5;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=l7;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=4U;
si0+=si1;
l4=si0;
si0=l5;
si1=4U;
si0+=si1;
l5=si0;
si0=l6;
si1=-1U;
si0+=si1;
l6=si0;
if(si0){
goto L19;
}
}
L18:;
si0=l1;
si1=l8;
si0+=si1;
l1=si0;
si0=l15;
si1=l11;
si0+=si1;
l15=si0;
si0=l0;
si1=l2;
si0-=si1;
l0=si0;
si1=l2;
si0=si0 >= si1;
if(si0){
goto L15;
}
goto L13;
}
L14:;
si0=l0;
si1=3U;
si0&=si1;
l13=si0;
si0=l0;
si1=-1U;
si0+=si1;
l14=si0;
si0=l1;
si1=l0;
si2=2U;
si1<<=(si2&31);
l12=si1;
si0-=si1;
l15=si0;
si0=0U;
si1=l12;
si0-=si1;
l11=si0;
si0=0U;
si1=l0;
si2=-4U;
si1&=si2;
si0-=si1;
l10=si0;
L20:;
{
si0=0U;
l4=si0;
si0=l14;
si1=3U;
si0=si0 < si1;
if(si0){
goto L21;
}
si0=0U;
l6=si0;
si0=l1;
l4=si0;
L22:;
{
si0=l4;
si1=l11;
si0+=si1;
l5=si0;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
si0=l5;
si1=l4;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=l7;
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=4U;
si0+=si1;
l7=si0;
si0=i32_load(&i->m0,(U64)si0);
l8=si0;
si0=l7;
si1=l4;
si2=4U;
si1+=si2;
l9=si1;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l9;
si1=l8;
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=8U;
si0+=si1;
l7=si0;
si0=i32_load(&i->m0,(U64)si0);
l8=si0;
si0=l7;
si1=l4;
si2=8U;
si1+=si2;
l9=si1;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l9;
si1=l8;
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=12U;
si0+=si1;
l5=si0;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
si0=l5;
si1=l4;
si2=12U;
si1+=si2;
l8=si1;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l8;
si1=l7;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=16U;
si0+=si1;
l4=si0;
si0=l10;
si1=l6;
si2=-4U;
si1+=si2;
l6=si1;
si0=si0 != si1;
if(si0){
goto L22;
}
}
si0=0U;
si1=l6;
si0-=si1;
l4=si0;
L21:;
si0=l13;
si0=!(si0);
if(si0){
goto L23;
}
si0=l15;
si1=l4;
si2=2U;
si1<<=(si2&31);
l5=si1;
si0+=si1;
l4=si0;
si0=l1;
si1=l5;
si0+=si1;
l5=si0;
si0=l13;
l6=si0;
L24:;
{
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
si0=l4;
si1=l5;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=l7;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=4U;
si0+=si1;
l4=si0;
si0=l5;
si1=4U;
si0+=si1;
l5=si0;
si0=l6;
si1=-1U;
si0+=si1;
l6=si0;
if(si0){
goto L24;
}
}
L23:;
si0=l15;
si1=l12;
si0+=si1;
l15=si0;
si0=l1;
si1=l12;
si0+=si1;
l1=si0;
si0=l2;
si1=l0;
si0-=si1;
l2=si0;
si1=l0;
si0=si0 >= si1;
if(si0){
goto L20;
}
}
L13:;
si0=l2;
si0=!(si0);
if(si0){
goto L1;
}
si0=l0;
if(si0){
goto L2;
}
}
L1:;
si0=l3;
si1=128U;
si0+=si1;
i->g0=si0;
L0:;
}

void f3482(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4) {
U32 l5=0;
U32 l6=0;
U64 l7=0;
U32 l8=0;
U32 l9=0;
U32 l10=0;
U32 l11=0;
U32 l12=0;
U32 l13=0;
U32 si0,si1,si2;
U64 sj0,sj1;
si0=i->g0;
si1=16U;
si0-=si1;
l5=si0;
i->g0=si0;
si0=l2;
if(si0){
goto L2;
}
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l0;
sj1=1ULL;
i64_store(&i->m0,(U64)si0,sj1);
goto L1;
L2:;
si0=l4;
sj0=(U64)(si0);
si1=l2;
si2=12U;
si1*=si2;
l6=si1;
si2=-12U;
si1+=si2;
si2=12U;
si1=DIV_U(si1,si2);
sj1=(U64)(si1);
sj0*=sj1;
l7=sj0;
sj1=32ULL;
sj0>>=(sj1&63);
si0=(U32)(sj0);
if(si0){
goto L4;
}
si0=l1;
si1=l6;
si0+=si1;
l8=si0;
si0=l1;
si1=12U;
si0+=si1;
l9=si0;
sj0=l7;
si0=(U32)(sj0);
l6=si0;
si0=l2;
si1=12U;
si0*=si1;
l10=si0;
si0=l1;
l11=si0;
L5:;
{
si0=l10;
si0=!(si0);
if(si0){
goto L3;
}
si0=l10;
si1=-12U;
si0+=si1;
l10=si0;
si0=l6;
si1=l11;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
si0+=si1;
l12=si0;
si1=l6;
si0=si0 >= si1;
l13=si0;
si0=l11;
si1=12U;
si0+=si1;
l11=si0;
si0=l12;
l6=si0;
si0=l13;
if(si0){
goto L5;
}
}
L4:;
si0=1539599U;
si1=53U;
si2=1539724U;
f703(i,si0,si1,si2);
UNREACHABLE;
L3:;
si0=l6;
if(si0){
goto L21;
}
si0=1U;
l11=si0;
goto L20;
L21:;
si0=l6;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L19;
}
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=l6;
si0=f15269(i,si0);
l11=si0;
si0=!(si0);
if(si0){
goto L18;
}
L20:;
si0=0U;
l12=si0;
si0=l5;
si1=0U;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l5;
si1=l11;
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l10=si0;
si0=l5;
si1=l6;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l13=si0;
si0=l6;
si1=l10;
si0=si0 >= si1;
if(si0){
goto L22;
}
si0=l5;
si1=0U;
si2=l10;
f3355(i,si0,si1,si2);
si0=l5;
si0=i32_load(&i->m0,(U64)si0);
l11=si0;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+8U);
l12=si0;
L22:;
si0=l11;
si1=l12;
si0+=si1;
si1=l13;
si2=l10;
si0=f15390(i,si0,si1,si2);
si0=l6;
si1=l12;
si2=l10;
si1+=si2;
l12=si1;
si0-=si1;
l10=si0;
si0=l11;
si1=l12;
si0+=si1;
l11=si0;
si0=l4;
switch(si0){
case 0:
goto L24;
case 1:
goto L25;
case 2:
goto L26;
case 3:
goto L27;
case 4:
goto L28;
default:
goto L23;
}
L28:;
si0=l2;
si1=1U;
si0=si0 == si1;
if(si0){
goto L6;
}
L29:;
{
si0=l10;
si1=3U;
si0=si0 <= si1;
if(si0){
goto L10;
}
si0=l9;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l12=si0;
si0=l9;
si0=i32_load(&i->m0,(U64)si0);
l13=si0;
si0=l11;
si1=l3;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l10;
si1=-4U;
si0+=si1;
l10=si0;
si1=l12;
si0=si0 < si1;
if(si0){
goto L9;
}
si0=l10;
si1=l12;
si0-=si1;
l10=si0;
si0=l11;
si1=4U;
si0+=si1;
si1=l13;
si2=l12;
si0=f15390(i,si0,si1,si2);
si1=l12;
si0+=si1;
l11=si0;
si0=l9;
si1=12U;
si0+=si1;
l9=si0;
si1=l8;
si0=si0 != si1;
if(si0){
goto L29;
}
goto L6;
}
L27:;
si0=l2;
si1=1U;
si0=si0 == si1;
if(si0){
goto L6;
}
L30:;
{
si0=l10;
si1=2U;
si0=si0 <= si1;
if(si0){
goto L12;
}
si0=l9;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l12=si0;
si0=l9;
si0=i32_load(&i->m0,(U64)si0);
l13=si0;
si0=l11;
si1=l3;
si1=i32_load16_u(&i->m0,(U64)si1);
i32_store16(&i->m0,(U64)si0,si1);
si0=l11;
si1=2U;
si0+=si1;
si1=l3;
si2=2U;
si1+=si2;
si1=i32_load8_u(&i->m0,(U64)si1);
i32_store8(&i->m0,(U64)si0,si1);
si0=l10;
si1=-3U;
si0+=si1;
l10=si0;
si1=l12;
si0=si0 < si1;
if(si0){
goto L11;
}
si0=l10;
si1=l12;
si0-=si1;
l10=si0;
si0=l11;
si1=3U;
si0+=si1;
si1=l13;
si2=l12;
si0=f15390(i,si0,si1,si2);
si1=l12;
si0+=si1;
l11=si0;
si0=l9;
si1=12U;
si0+=si1;
l9=si0;
si1=l8;
si0=si0 != si1;
if(si0){
goto L30;
}
goto L6;
}
L26:;
si0=l2;
si1=1U;
si0=si0 == si1;
if(si0){
goto L6;
}
L31:;
{
si0=l10;
si1=1U;
si0=si0 <= si1;
if(si0){
goto L14;
}
si0=l9;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l12=si0;
si0=l9;
si0=i32_load(&i->m0,(U64)si0);
l13=si0;
si0=l11;
si1=l3;
si1=i32_load16_u(&i->m0,(U64)si1);
i32_store16(&i->m0,(U64)si0,si1);
si0=l10;
si1=-2U;
si0+=si1;
l10=si0;
si1=l12;
si0=si0 < si1;
if(si0){
goto L13;
}
si0=l10;
si1=l12;
si0-=si1;
l10=si0;
si0=l11;
si1=2U;
si0+=si1;
si1=l13;
si2=l12;
si0=f15390(i,si0,si1,si2);
si1=l12;
si0+=si1;
l11=si0;
si0=l9;
si1=12U;
si0+=si1;
l9=si0;
si1=l8;
si0=si0 != si1;
if(si0){
goto L31;
}
goto L6;
}
L25:;
si0=l2;
si1=1U;
si0=si0 == si1;
if(si0){
goto L6;
}
L32:;
{
si0=l10;
si0=!(si0);
if(si0){
goto L16;
}
si0=l9;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l12=si0;
si0=l9;
si0=i32_load(&i->m0,(U64)si0);
l13=si0;
si0=l11;
si1=l3;
si1=i32_load8_u(&i->m0,(U64)si1);
i32_store8(&i->m0,(U64)si0,si1);
si0=l10;
si1=-1U;
si0+=si1;
l10=si0;
si1=l12;
si0=si0 < si1;
if(si0){
goto L15;
}
si0=l10;
si1=l12;
si0-=si1;
l10=si0;
si0=l11;
si1=1U;
si0+=si1;
si1=l13;
si2=l12;
si0=f15390(i,si0,si1,si2);
si1=l12;
si0+=si1;
l11=si0;
si0=l9;
si1=12U;
si0+=si1;
l9=si0;
si1=l8;
si0=si0 != si1;
if(si0){
goto L32;
}
goto L6;
}
L24:;
si0=l2;
si1=1U;
si0=si0 == si1;
if(si0){
goto L6;
}
si0=l1;
si1=20U;
si0+=si1;
l12=si0;
si0=l2;
si1=12U;
si0*=si1;
si1=-12U;
si0+=si1;
l9=si0;
L33:;
{
si0=l10;
si1=l12;
si1=i32_load(&i->m0,(U64)si1);
l13=si1;
si0=si0 < si1;
if(si0){
goto L17;
}
si0=l12;
si1=-8U;
si0+=si1;
l3=si0;
si0=l12;
si1=12U;
si0+=si1;
l12=si0;
si0=l10;
si1=l13;
si0-=si1;
l10=si0;
si0=l11;
si1=l3;
si1=i32_load(&i->m0,(U64)si1);
si2=l13;
si0=f15390(i,si0,si1,si2);
si1=l13;
si0+=si1;
l11=si0;
si0=l9;
si1=-12U;
si0+=si1;
l9=si0;
if(si0){
goto L33;
}
goto L6;
}
L23:;
si0=l2;
si1=1U;
si0=si0 == si1;
if(si0){
goto L6;
}
L34:;
{
si0=l10;
si1=l4;
si0=si0 < si1;
if(si0){
goto L8;
}
si0=l9;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l12=si0;
si0=l9;
si0=i32_load(&i->m0,(U64)si0);
l13=si0;
si0=l11;
si1=l3;
si2=l4;
si0=f15390(i,si0,si1,si2);
l11=si0;
si0=l10;
si1=l4;
si0-=si1;
l10=si0;
si1=l12;
si0=si0 < si1;
if(si0){
goto L7;
}
si0=l10;
si1=l12;
si0-=si1;
l10=si0;
si0=l11;
si1=l4;
si0+=si1;
si1=l13;
si2=l12;
si0=f15390(i,si0,si1,si2);
si1=l12;
si0+=si1;
l11=si0;
si0=l9;
si1=12U;
si0+=si1;
l9=si0;
si1=l8;
si0=si0 == si1;
if(si0){
goto L6;
}
goto L34;
}
L19:;
f53(i);
UNREACHABLE;
L18:;
si0=1U;
si1=l6;
f52(i,si0,si1);
UNREACHABLE;
L17:;
si0=1539564U;
si1=35U;
si2=1539740U;
f673(i,si0,si1,si2);
UNREACHABLE;
L16:;
si0=1539564U;
si1=35U;
si2=1539740U;
f673(i,si0,si1,si2);
UNREACHABLE;
L15:;
si0=1539564U;
si1=35U;
si2=1539740U;
f673(i,si0,si1,si2);
UNREACHABLE;
L14:;
si0=1539564U;
si1=35U;
si2=1539740U;
f673(i,si0,si1,si2);
UNREACHABLE;
L13:;
si0=1539564U;
si1=35U;
si2=1539740U;
f673(i,si0,si1,si2);
UNREACHABLE;
L12:;
si0=1539564U;
si1=35U;
si2=1539740U;
f673(i,si0,si1,si2);
UNREACHABLE;
L11:;
si0=1539564U;
si1=35U;
si2=1539740U;
f673(i,si0,si1,si2);
UNREACHABLE;
L10:;
si0=1539564U;
si1=35U;
si2=1539740U;
f673(i,si0,si1,si2);
UNREACHABLE;
L9:;
si0=1539564U;
si1=35U;
si2=1539740U;
f673(i,si0,si1,si2);
UNREACHABLE;
L8:;
si0=1539564U;
si1=35U;
si2=1539740U;
f673(i,si0,si1,si2);
UNREACHABLE;
L7:;
si0=1539564U;
si1=35U;
si2=1539740U;
f673(i,si0,si1,si2);
UNREACHABLE;
L6:;
si0=l0;
si1=l5;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=8U;
si0+=si1;
si1=l6;
si2=l10;
si1-=si2;
i32_store(&i->m0,(U64)si0,si1);
L1:;
si0=l5;
si1=16U;
si0+=si1;
i->g0=si0;
L0:;
}

U32 f3483(rustpythonInstance*i,U32 l0,U32 l1) {
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

void f3484(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 l8=0;
U32 si0,si1,si2,si3,si4;
U64 sj1;
si0=i->g0;
si1=96U;
si0-=si1;
l4=si0;
i->g0=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si1=l1;
si2=4U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
l6=si1;
si0=si0 == si1;
if(si0){
goto L7;
}
si0=l1;
si1=l5;
si2=12U;
si1+=si2;
l7=si1;
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si0=i32_load(&i->m0,(U64)si0);
l8=si0;
if(si0){
goto L6;
}
L7:;
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l0;
sj1=1ULL;
i64_store(&i->m0,(U64)si0,sj1);
goto L5;
L6:;
si0=l4;
si1=l5;
sj1=i64_load(&i->m0,(U64)si1+4U);
i64_store(&i->m0,(U64)si0+12U,sj1);
si0=l4;
si1=l8;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=1U;
l8=si0;
si0=l6;
si1=l7;
si0-=si1;
si1=12U;
si0=DIV_U(si0,si1);
si1=l3;
si0*=si1;
l5=si0;
si0=!(si0);
if(si0){
goto L8;
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
l8=si0;
si0=!(si0);
if(si0){
goto L2;
}
L8:;
si0=l4;
si1=0U;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l4;
si1=l5;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l4;
si1=l8;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l4;
si1=l4;
si2=24U;
si1+=si2;
i32_store(&i->m0,(U64)si0+56U,si1);
si0=l4;
si1=821U;
i32_store(&i->m0,(U64)si0+44U,si1);
si0=l4;
si1=l4;
si2=8U;
si1+=si2;
i32_store(&i->m0,(U64)si0+40U,si1);
si0=l4;
sj1=1ULL;
i64_store(&i->m0,(U64)si0+76U,sj1);
si0=l4;
si1=1U;
i32_store(&i->m0,(U64)si0+68U,si1);
si0=l4;
si1=1539756U;
i32_store(&i->m0,(U64)si0+64U,si1);
si0=l4;
si1=l4;
si2=40U;
si1+=si2;
i32_store(&i->m0,(U64)si0+72U,si1);
si0=l4;
si1=56U;
si0+=si1;
si1=1539764U;
si2=l4;
si3=64U;
si2+=si3;
si0=f690(i,si0,si1,si2);
if(si0){
goto L4;
}
si0=l7;
si1=l6;
si0=si0 == si1;
if(si0){
goto L9;
}
L10:;
{
si0=l1;
si1=l7;
si2=12U;
si1+=si2;
l5=si1;
i32_store(&i->m0,(U64)si0,si1);
si0=l7;
si0=i32_load(&i->m0,(U64)si0);
l8=si0;
si0=!(si0);
if(si0){
goto L9;
}
si0=l4;
si1=l7;
sj1=i64_load(&i->m0,(U64)si1+4U);
i64_store(&i->m0,(U64)si0+44U,sj1);
si0=l4;
si1=l8;
i32_store(&i->m0,(U64)si0+40U,si1);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+28U);
si1=l4;
si1=i32_load(&i->m0,(U64)si1+32U);
l7=si1;
si0-=si1;
si1=l3;
si0=si0 >= si1;
if(si0){
goto L11;
}
si0=l4;
si1=24U;
si0+=si1;
si1=l7;
si2=l3;
f3355(i,si0,si1,si2);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+32U);
l7=si0;
L11:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+24U);
si1=l7;
si0+=si1;
si1=l2;
si2=l3;
si0=f15390(i,si0,si1,si2);
si0=l4;
si1=l7;
si2=l3;
si1+=si2;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l4;
si1=l4;
si2=24U;
si1+=si2;
i32_store(&i->m0,(U64)si0+52U,si1);
si0=l4;
si1=821U;
i32_store(&i->m0,(U64)si0+60U,si1);
si0=l4;
si1=l4;
si2=40U;
si1+=si2;
i32_store(&i->m0,(U64)si0+56U,si1);
si0=l4;
sj1=1ULL;
i64_store(&i->m0,(U64)si0+76U,sj1);
si0=l4;
si1=1U;
i32_store(&i->m0,(U64)si0+68U,si1);
si0=l4;
si1=1539756U;
i32_store(&i->m0,(U64)si0+64U,si1);
si0=l4;
si1=l4;
si2=56U;
si1+=si2;
i32_store(&i->m0,(U64)si0+72U,si1);
si0=l4;
si1=52U;
si0+=si1;
si1=1539764U;
si2=l4;
si3=64U;
si2+=si3;
si0=f690(i,si0,si1,si2);
if(si0){
goto L1;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0+44U);
si0=!(si0);
if(si0){
goto L12;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0+40U);
f15271(i,si0);
L12:;
si0=l5;
l7=si0;
si0=l5;
si1=l6;
si0=si0 != si1;
if(si0){
goto L10;
}
}
L9:;
si0=l0;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1+24U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=8U;
si0+=si1;
si1=l4;
si2=24U;
si1+=si2;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+12U);
si0=!(si0);
if(si0){
goto L5;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0+8U);
f15271(i,si0);
L5:;
si0=l4;
si1=96U;
si0+=si1;
i->g0=si0;
goto L0;
L4:;
si0=1539788U;
si1=43U;
si2=l4;
si3=88U;
si2+=si3;
si3=1539832U;
si4=1539948U;
f712(i,si0,si1,si2,si3,si4);
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
si0=1539788U;
si1=43U;
si2=l4;
si3=88U;
si2+=si3;
si3=1539832U;
si4=1539964U;
f712(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L0:;
}

void f3485(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
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
si1=96U;
si0-=si1;
l3=si0;
i->g0=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
si1=-11U;
si0+=si1;
l5=si0;
si1=19U;
si2=l5;
si3=27U;
si2=si2 < si3;
si0=si2?si0:si1;
si1=-20U;
si0+=si1;
switch(si0){
case 0:
goto L4;
case 1:
goto L10;
case 2:
goto L9;
case 3:
goto L8;
case 4:
goto L7;
case 5:
goto L6;
default:
goto L5;
}
L10:;
si0=l0;
si1=32U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=20U;
si0+=si1;
si1=l2;
i32_store8(&i->m0,(U64)si0,si1);
si0=l0;
si1=l1;
sj1=i64_load(&i->m0,(U64)si1+4U);
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l0;
si1=12U;
si0+=si1;
si1=l1;
si2=12U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
goto L3;
L9:;
si0=l1;
si1=12U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si0=l1;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
si0=l3;
si1=48U;
si0+=si1;
si1=40U;
si0+=si1;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+4U);
l8=si1;
si2=40U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=48U;
si0+=si1;
si1=32U;
si0+=si1;
si1=l8;
si2=32U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=48U;
si0+=si1;
si1=24U;
si0+=si1;
si1=l8;
si2=24U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=48U;
si0+=si1;
si1=16U;
si0+=si1;
si1=l8;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=48U;
si0+=si1;
si1=8U;
si0+=si1;
si1=l8;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=l8;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+48U,sj1);
si0=l3;
si1=l3;
si2=48U;
si1+=si2;
si2=l2;
f3485(i,si0,si1,si2);
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=48U;
si0=f15269(i,si0);
l5=si0;
si0=!(si0);
if(si0){
goto L2;
}
si0=l5;
si1=l3;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=40U;
si0+=si1;
si1=l3;
si2=40U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=32U;
si0+=si1;
si1=l3;
si2=32U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=24U;
si0+=si1;
si1=l3;
si2=24U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
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
si1=l3;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=16U;
si0+=si1;
si1=l2;
i32_store8(&i->m0,(U64)si0,si1);
si0=l0;
si1=12U;
si0+=si1;
si1=l6;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=8U;
si0+=si1;
si1=l7;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l5;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=33U;
i32_store(&i->m0,(U64)si0,si1);
si0=l8;
f15271(i,si0);
goto L3;
L8:;
si0=l0;
si1=34U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l1;
sj1=i64_load(&i->m0,(U64)si1+4U);
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l0;
si1=24U;
si0+=si1;
si1=l2;
i32_store8(&i->m0,(U64)si0,si1);
si0=l0;
si1=12U;
si0+=si1;
si1=l1;
si2=12U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=16U;
si0+=si1;
si1=l1;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
goto L3;
L7:;
si0=l1;
si1=12U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l9=si0;
si1=48U;
si0*=si1;
l10=si0;
si0=l1;
si1=20U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l11=si0;
si0=l1;
si1=16U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l12=si0;
si0=l1;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l13=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
l14=si0;
l8=si0;
si0=l14;
l5=si0;
si0=l9;
si0=!(si0);
if(si0){
goto L12;
}
si0=l3;
si1=48U;
si0+=si1;
si1=4U;
si0|=si1;
l8=si0;
si0=l10;
l6=si0;
si0=l14;
l5=si0;
L14:;
{
si0=l5;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
si1=38U;
si0=si0 == si1;
if(si0){
goto L13;
}
si0=l8;
si1=l5;
sj1=i64_load(&i->m0,(U64)si1+4U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l8;
si1=40U;
si0+=si1;
si1=l5;
si2=44U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l8;
si1=32U;
si0+=si1;
si1=l5;
si2=36U;
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
si1=16U;
si0+=si1;
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
si0=l3;
si1=l7;
i32_store(&i->m0,(U64)si0+48U,si1);
si0=l3;
si1=l3;
si2=48U;
si1+=si2;
si2=l2;
f3485(i,si0,si1,si2);
si0=l5;
si1=40U;
si0+=si1;
si1=l3;
si2=40U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=32U;
si0+=si1;
si1=l3;
si2=32U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=24U;
si0+=si1;
si1=l3;
si2=24U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
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
si1=l3;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=l3;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=48U;
si0+=si1;
l5=si0;
si0=l6;
si1=-48U;
si0+=si1;
l6=si0;
if(si0){
goto L14;
}
goto L11;
}
L13:;
si0=l5;
si1=48U;
si0+=si1;
l8=si0;
L12:;
si0=l14;
si1=l10;
si0+=si1;
l7=si0;
si1=l8;
si0-=si1;
si1=48U;
si0=DIV_U(si0,si1);
l6=si0;
si0=l5;
si1=l14;
si0-=si1;
si1=48U;
si0=DIV_U(si0,si1);
l9=si0;
si0=l7;
si1=l8;
si0=si0 == si1;
if(si0){
goto L11;
}
L15:;
{
si0=l8;
f3500(i,si0);
si0=l8;
si1=48U;
si0+=si1;
l8=si0;
si0=l6;
si1=-1U;
si0+=si1;
l6=si0;
if(si0){
goto L15;
}
}
L11:;
si0=l0;
si1=l14;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=35U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=24U;
si0+=si1;
si1=l2;
i32_store8(&i->m0,(U64)si0,si1);
si0=l0;
si1=20U;
si0+=si1;
si1=l11;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=16U;
si0+=si1;
si1=l12;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=12U;
si0+=si1;
si1=l9;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=8U;
si0+=si1;
si1=l13;
i32_store(&i->m0,(U64)si0,si1);
goto L3;
L6:;
si0=l1;
si1=12U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l9=si0;
si1=48U;
si0*=si1;
l10=si0;
si0=l1;
si1=20U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l11=si0;
si0=l1;
si1=16U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l12=si0;
si0=l1;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l13=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
l14=si0;
l8=si0;
si0=l14;
l5=si0;
si0=l9;
si0=!(si0);
if(si0){
goto L17;
}
si0=l3;
si1=48U;
si0+=si1;
si1=4U;
si0|=si1;
l8=si0;
si0=l10;
l6=si0;
si0=l14;
l5=si0;
L19:;
{
si0=l5;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
si1=38U;
si0=si0 == si1;
if(si0){
goto L18;
}
si0=l8;
si1=l5;
sj1=i64_load(&i->m0,(U64)si1+4U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l8;
si1=40U;
si0+=si1;
si1=l5;
si2=44U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l8;
si1=32U;
si0+=si1;
si1=l5;
si2=36U;
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
si1=16U;
si0+=si1;
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
si0=l3;
si1=l7;
i32_store(&i->m0,(U64)si0+48U,si1);
si0=l3;
si1=l3;
si2=48U;
si1+=si2;
si2=l2;
f3485(i,si0,si1,si2);
si0=l5;
si1=40U;
si0+=si1;
si1=l3;
si2=40U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=32U;
si0+=si1;
si1=l3;
si2=32U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=24U;
si0+=si1;
si1=l3;
si2=24U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
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
si1=l3;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=l3;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=48U;
si0+=si1;
l5=si0;
si0=l6;
si1=-48U;
si0+=si1;
l6=si0;
if(si0){
goto L19;
}
goto L16;
}
L18:;
si0=l5;
si1=48U;
si0+=si1;
l8=si0;
L17:;
si0=l14;
si1=l10;
si0+=si1;
l7=si0;
si1=l8;
si0-=si1;
si1=48U;
si0=DIV_U(si0,si1);
l6=si0;
si0=l5;
si1=l14;
si0-=si1;
si1=48U;
si0=DIV_U(si0,si1);
l9=si0;
si0=l7;
si1=l8;
si0=si0 == si1;
if(si0){
goto L16;
}
L20:;
{
si0=l8;
f3500(i,si0);
si0=l8;
si1=48U;
si0+=si1;
l8=si0;
si0=l6;
si1=-1U;
si0+=si1;
l6=si0;
if(si0){
goto L20;
}
}
L16:;
si0=l0;
si1=l14;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=36U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=24U;
si0+=si1;
si1=l2;
i32_store8(&i->m0,(U64)si0,si1);
si0=l0;
si1=20U;
si0+=si1;
si1=l11;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=16U;
si0+=si1;
si1=l12;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=12U;
si0+=si1;
si1=l9;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=8U;
si0+=si1;
si1=l13;
i32_store(&i->m0,(U64)si0,si1);
goto L3;
L5:;
si0=l0;
si1=l1;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
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
goto L1;
L4:;
si0=l0;
si1=31U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+4U);
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=28U;
si0+=si1;
si1=l2;
i32_store8(&i->m0,(U64)si0,si1);
si0=l0;
si1=8U;
si0+=si1;
si1=l1;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=16U;
si0+=si1;
si1=l1;
si2=16U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=20U;
si0+=si1;
si1=l1;
si2=20U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
L3:;
si0=l4;
si1=-31U;
si0+=si1;
si1=6U;
si0=si0 < si1;
if(si0){
goto L1;
}
si0=l1;
f3478(i,si0);
goto L1;
L2:;
si0=8U;
si1=48U;
f52(i,si0,si1);
UNREACHABLE;
L1:;
si0=l3;
si1=96U;
si0+=si1;
i->g0=si0;
L0:;
}

void f3486(rustpythonInstance*i,U32 l0,U32 l1) {
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
U64 l18=0;
U32 l19=0;
U32 l20=0;
U32 l21=0;
U32 l22=0;
U32 l23=0;
U32 l24=0;
U32 l25=0;
U32 l26=0;
U32 si0,si1,si2,si3,si4;
U64 sj0,sj1,sj2;
si0=i->g0;
si1=384U;
si0-=si1;
l2=si0;
i->g0=si0;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=2U;
si0=f15269(i,si0);
l3=si0;
si0=!(si0);
if(si0){
goto L8;
}
si0=l3;
si1=0U;
i32_store16(&i->m0,(U64)si0,si1);
si0=l2;
si1=8U;
si0+=si1;
si1=l1;
si2=112U;
si0=f15390(i,si0,si1,si2);
si0=l2;
si1=140U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=124U;
si0+=si1;
sj1=4294967297ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
sj1=8ULL;
i64_store(&i->m0,(U64)si0+132U,sj1);
si0=l2;
si1=l3;
i32_store(&i->m0,(U64)si0+120U,si1);
si0=l2;
si1=152U;
si0+=si1;
si1=4U;
si0|=si1;
l4=si0;
si0=l2;
si1=152U;
si0+=si1;
si1=24U;
si0+=si1;
l5=si0;
si0=l2;
si1=184U;
si0+=si1;
si1=8U;
si0+=si1;
l6=si0;
si0=l2;
si1=184U;
si0+=si1;
si1=4U;
si0|=si1;
l7=si0;
si0=l2;
si1=204U;
si0+=si1;
l8=si0;
si0=l2;
si1=336U;
si0+=si1;
si1=4U;
si0|=si1;
l9=si0;
si0=l2;
si1=132U;
si0+=si1;
l10=si0;
si0=l2;
si1=8U;
si0+=si1;
si1=112U;
si0+=si1;
l11=si0;
L12:;
{
si0=l2;
si1=184U;
si0+=si1;
si1=l2;
si2=8U;
si1+=si2;
f3523(i,si0,si1);
si0=l2;
si0=i32_load(&i->m0,(U64)si0+184U);
l1=si0;
si1=99U;
si0=si0 != si1;
if(si0){
goto L14;
}
si0=7U;
l3=si0;
goto L13;
L14:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+204U);
l12=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+200U);
l13=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+196U);
l14=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+192U);
l15=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+188U);
l16=si0;
si0=4U;
l3=si0;
si0=l1;
si1=98U;
si0=si0 != si1;
if(si0){
goto L15;
}
sj0=l18;
l17=sj0;
si0=l16;
l19=si0;
si0=l13;
l16=si0;
si0=l12;
l20=si0;
si0=l22;
l21=si0;
si0=l24;
l23=si0;
goto L13;
L15:;
si0=l2;
sj0=i64_load(&i->m0,(U64)si0+208U);
l18=sj0;
si0=l2;
si1=l12;
i32_store(&i->m0,(U64)si0+356U,si1);
si0=l2;
si1=l13;
i32_store(&i->m0,(U64)si0+352U,si1);
si0=l2;
si1=l14;
i32_store(&i->m0,(U64)si0+348U,si1);
si0=l2;
si1=l15;
i32_store(&i->m0,(U64)si0+344U,si1);
si0=l2;
si1=l16;
i32_store(&i->m0,(U64)si0+340U,si1);
si0=l2;
si1=l1;
i32_store(&i->m0,(U64)si0+336U,si1);
si0=l2;
sj1=l18;
i64_store(&i->m0,(U64)si0+360U,sj1);
si0=l2;
sj1=l18;
sj2=32ULL;
sj1>>=(sj2&63);
i64_store32(&i->m0,(U64)si0+144U,sj1);
si0=l2;
si1=l2;
si2=336U;
si1+=si2;
f2493(i,si0,si1);
si0=l2;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L17;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0+128U);
l3=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+120U);
l1=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+336U);
l25=si0;
si1=98U;
si0=si0 != si1;
if(si0){
goto L19;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0+144U);
l19=si0;
si0=l2;
si1=l3;
i32_store(&i->m0,(U64)si0+312U,si1);
si0=l2;
si1=l1;
i32_store(&i->m0,(U64)si0+308U,si1);
si0=l2;
si1=0U;
i32_store(&i->m0,(U64)si0+304U,si1);
si0=l2;
si1=1520712U;
i32_store(&i->m0,(U64)si0+300U,si1);
si0=l2;
si1=1519952U;
i32_store(&i->m0,(U64)si0+296U,si1);
si0=l6;
si1=l2;
si2=296U;
si1+=si2;
f3399(i,si0,si1);
si0=1U;
l3=si0;
goto L18;
L19:;
si0=l8;
si1=l9;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l8;
si1=8U;
si0+=si1;
si1=l9;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l8;
si1=16U;
si0+=si1;
si1=l9;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l8;
si1=24U;
si0+=si1;
si1=l9;
si2=24U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=l25;
i32_store(&i->m0,(U64)si0+200U,si1);
si0=l2;
si1=l3;
i32_store(&i->m0,(U64)si0+312U,si1);
si0=l2;
si1=l1;
i32_store(&i->m0,(U64)si0+308U,si1);
si0=l2;
si1=0U;
i32_store(&i->m0,(U64)si0+304U,si1);
si0=l2;
si1=1520712U;
i32_store(&i->m0,(U64)si0+300U,si1);
si0=l2;
si1=1519952U;
i32_store(&i->m0,(U64)si0+296U,si1);
si0=l7;
si1=l2;
si2=296U;
si1+=si2;
f3399(i,si0,si1);
si0=2U;
l3=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+188U);
l19=si0;
L18:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+228U);
l26=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+224U);
l25=si0;
si0=l2;
sj0=i64_load(&i->m0,(U64)si0+216U);
l17=sj0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+212U);
l23=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+208U);
l21=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+204U);
l20=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+200U);
l16=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+196U);
l14=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+192U);
l15=si0;
goto L16;
L17:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+4U);
l25=si0;
si0=l2;
sj0=i64_load(&i->m0,(U64)si0+360U);
l17=sj0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+356U);
l23=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+352U);
l21=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+348U);
l20=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+344U);
l16=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+340U);
l14=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+336U);
l15=si0;
si0=6U;
l3=si0;
L16:;
si0=l13;
l22=si0;
si0=l12;
l24=si0;
L13:;
si0=l3;
si1=-6U;
si0+=si1;
l1=si0;
si1=2U;
si2=l1;
si3=2U;
si2=si2 < si3;
si0=si2?si0:si1;
l1=si0;
si0=!(si0);
if(si0){
goto L20;
}
si0=l1;
si1=-1U;
si0+=si1;
switch(si0){
case 0:
goto L5;
case 1:
goto L6;
default:
goto L5;
}
L20:;
si0=l2;
sj1=l17;
i64_store(&i->m0,(U64)si0+176U,sj1);
si0=l2;
si1=l23;
i32_store(&i->m0,(U64)si0+172U,si1);
si0=l2;
si1=l21;
i32_store(&i->m0,(U64)si0+168U,si1);
si0=l2;
si1=l20;
i32_store(&i->m0,(U64)si0+164U,si1);
si0=l2;
si1=l16;
i32_store(&i->m0,(U64)si0+160U,si1);
si0=l2;
si1=l14;
i32_store(&i->m0,(U64)si0+156U,si1);
si0=l2;
si1=l15;
i32_store(&i->m0,(U64)si0+152U,si1);
L21:;
{
si0=l2;
si0=i32_load(&i->m0,(U64)si0+128U);
l1=si0;
si0=!(si0);
if(si0){
goto L23;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0+120U);
l12=si0;
if(si0){
goto L22;
}
L23:;
si0=1540093U;
si1=43U;
si2=1540184U;
f673(i,si0,si1,si2);
UNREACHABLE;
L22:;
si0=l1;
si1=1U;
si0<<=(si1&31);
si1=l12;
si0+=si1;
si1=-2U;
si0+=si1;
si0=i32_load16_s(&i->m0,(U64)si0);
si1=95U;
si0*=si1;
si1=l25;
si0+=si1;
l3=si0;
si1=103645U;
si0=si0 >= si1;
if(si0){
goto L9;
}
si0=l3;
si1=1U;
si0<<=(si1&31);
si1=1312060U;
si0+=si1;
si0=i32_load16_s(&i->m0,(U64)si0);
l3=si0;
si1=1U;
si0=(U32)((I32)si0<(I32)si1);
if(si0){
goto L24;
}
si0=l2;
si1=336U;
si0+=si1;
si1=16U;
si0+=si1;
si1=l2;
si2=152U;
si1+=si2;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=336U;
si0+=si1;
si1=8U;
si0+=si1;
si1=l2;
si2=152U;
si1+=si2;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=l2;
sj1=i64_load(&i->m0,(U64)si1+152U);
i64_store(&i->m0,(U64)si0+336U,sj1);
si0=l2;
si1=184U;
si0+=si1;
si1=l2;
si2=8U;
si1+=si2;
si2=l25;
si3=l2;
si4=336U;
si3+=si4;
f2491(i,si0,si1,si2,si3);
si0=l3;
si1=-1U;
si0+=si1;
l1=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+128U);
l3=si0;
si1=l2;
si1=i32_load(&i->m0,(U64)si1+124U);
si0=si0 != si1;
if(si0){
goto L25;
}
si0=l11;
si1=l3;
f3348(i,si0,si1);
si0=l2;
si0=i32_load(&i->m0,(U64)si0+128U);
l3=si0;
L25:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+120U);
si1=l3;
si2=1U;
si1<<=(si2&31);
si0+=si1;
si1=l1;
i32_store16(&i->m0,(U64)si0,si1);
si0=l2;
si1=l2;
si1=i32_load(&i->m0,(U64)si1+128U);
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0+128U,si1);
si0=l2;
si0=i32_load(&i->m0,(U64)si0+180U);
l1=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+176U);
l12=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+140U);
l3=si0;
si1=l2;
si1=i32_load(&i->m0,(U64)si1+136U);
si0=si0 != si1;
if(si0){
goto L26;
}
si0=l10;
si1=l3;
f3345(i,si0,si1);
si0=l2;
si0=i32_load(&i->m0,(U64)si0+140U);
l3=si0;
L26:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+132U);
si1=l3;
si2=120U;
si1*=si2;
si0+=si1;
si1=l2;
si2=184U;
si1+=si2;
si2=112U;
si0=f15390(i,si0,si1,si2);
l3=si0;
si1=l1;
i32_store(&i->m0,(U64)si0+116U,si1);
si0=l3;
si1=l12;
i32_store(&i->m0,(U64)si0+112U,si1);
si0=l2;
si1=l2;
si1=i32_load(&i->m0,(U64)si1+140U);
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0+140U,si1);
goto L12;
L24:;
si0=l3;
si1=-1U;
si0=(U32)((I32)si0>(I32)si1);
if(si0){
goto L11;
}
si0=l2;
si1=336U;
si0+=si1;
si1=l3;
si2=-1U;
si1^=si2;
si2=l5;
si3=l11;
si4=l10;
f2492(i,si0,si1,si2,si3,si4);
si0=l2;
si0=i32_load(&i->m0,(U64)si0+336U);
si1=6U;
si0=si0 == si1;
if(si0){
goto L21;
}
}
}
si0=l2;
si1=184U;
si0+=si1;
si1=40U;
si0+=si1;
si1=l2;
si2=336U;
si1+=si2;
si2=40U;
si1+=si2;
l3=si1;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=184U;
si0+=si1;
si1=32U;
si0+=si1;
si1=l2;
si2=336U;
si1+=si2;
si2=32U;
si1+=si2;
l1=si1;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=184U;
si0+=si1;
si1=24U;
si0+=si1;
si1=l2;
si2=336U;
si1+=si2;
si2=24U;
si1+=si2;
l12=si1;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=184U;
si0+=si1;
si1=16U;
si0+=si1;
si1=l2;
si2=336U;
si1+=si2;
si2=16U;
si1+=si2;
l25=si1;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=184U;
si0+=si1;
si1=8U;
si0+=si1;
si1=l2;
si2=336U;
si1+=si2;
si2=8U;
si1+=si2;
l10=si1;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=l2;
sj1=i64_load(&i->m0,(U64)si1+336U);
l17=sj1;
i64_store(&i->m0,(U64)si0+184U,sj1);
sj0=l17;
si0=(U32)(sj0);
si1=5U;
si0=si0 != si1;
if(si0){
goto L10;
}
si0=l2;
si1=296U;
si0+=si1;
si1=12U;
si0+=si1;
si1=l2;
si2=152U;
si1+=si2;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=296U;
si0+=si1;
si1=20U;
si0+=si1;
si1=l2;
si2=152U;
si1+=si2;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=296U;
si0+=si1;
si1=28U;
si0+=si1;
si1=l2;
si2=152U;
si1+=si2;
si2=24U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=3U;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=l2;
sj1=i64_load(&i->m0,(U64)si1+152U);
i64_store(&i->m0,(U64)si0+300U,sj1);
si0=l0;
si1=l2;
sj1=i64_load(&i->m0,(U64)si1+296U);
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l0;
si1=12U;
si0+=si1;
si1=l2;
si2=296U;
si1+=si2;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=20U;
si0+=si1;
si1=l2;
si2=296U;
si1+=si2;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=28U;
si0+=si1;
si1=l2;
si2=296U;
si1+=si2;
si2=24U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=36U;
si0+=si1;
si1=l2;
si2=296U;
si1+=si2;
si2=32U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=184U;
si0+=si1;
f3487(i,si0);
goto L4;
L11:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+152U);
l3=si0;
si1=98U;
si0=si0 != si1;
if(si0){
goto L28;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0+144U);
l3=si0;
si0=l2;
si1=352U;
si0+=si1;
si1=l1;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=l12;
i32_store(&i->m0,(U64)si0+348U,si1);
si0=l2;
si1=0U;
i32_store(&i->m0,(U64)si0+344U,si1);
si0=l2;
si1=1520712U;
i32_store(&i->m0,(U64)si0+340U,si1);
si0=l2;
si1=1519952U;
i32_store(&i->m0,(U64)si0+336U,si1);
si0=l2;
si1=192U;
si0+=si1;
si1=l2;
si2=336U;
si1+=si2;
f3399(i,si0,si1);
si0=l2;
si1=l3;
i32_store(&i->m0,(U64)si0+188U,si1);
si0=1U;
l3=si0;
goto L27;
L28:;
si0=l2;
si1=204U;
si0+=si1;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=212U;
si0+=si1;
si1=l4;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=220U;
si0+=si1;
si1=l4;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=228U;
si0+=si1;
si1=l4;
si2=24U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=l3;
i32_store(&i->m0,(U64)si0+200U,si1);
si0=l2;
si1=336U;
si0+=si1;
si1=16U;
si0+=si1;
si1=l1;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=l12;
i32_store(&i->m0,(U64)si0+348U,si1);
si0=l2;
si1=0U;
i32_store(&i->m0,(U64)si0+344U,si1);
si0=l2;
si1=1520712U;
i32_store(&i->m0,(U64)si0+340U,si1);
si0=l2;
si1=1519952U;
i32_store(&i->m0,(U64)si0+336U,si1);
si0=l2;
si1=184U;
si0+=si1;
si1=4U;
si0|=si1;
si1=l2;
si2=336U;
si1+=si2;
f3399(i,si0,si1);
si0=2U;
l3=si0;
L27:;
si0=l0;
si1=l2;
sj1=i64_load(&i->m0,(U64)si1+188U);
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l0;
si1=36U;
si0+=si1;
si1=l2;
si2=184U;
si1+=si2;
si2=36U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=28U;
si0+=si1;
si1=l2;
si2=184U;
si1+=si2;
si2=28U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=20U;
si0+=si1;
si1=l2;
si2=184U;
si1+=si2;
si2=20U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=12U;
si0+=si1;
si1=l2;
si2=184U;
si1+=si2;
si2=12U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=l2;
sj1=i64_load(&i->m0,(U64)si1+224U);
i64_store(&i->m0,(U64)si0+40U,sj1);
si0=l0;
si1=l3;
i32_store(&i->m0,(U64)si0,si1);
goto L4;
L10:;
si0=l0;
si1=l2;
sj1=i64_load(&i->m0,(U64)si1+336U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=40U;
si0+=si1;
si1=l3;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=32U;
si0+=si1;
si1=l1;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=24U;
si0+=si1;
si1=l12;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=16U;
si0+=si1;
si1=l25;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=8U;
si0+=si1;
si1=l10;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si0=i32_load(&i->m0,(U64)si0+152U);
l1=si0;
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
goto L31;
case 1:
goto L30;
case 2:
goto L4;
case 3:
goto L4;
case 4:
goto L29;
default:
goto L4;
}
L31:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+160U);
if(si0){
goto L7;
}
goto L4;
L30:;
si0=l1;
si0=!(si0);
if(si0){
goto L4;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0+160U);
si0=!(si0);
if(si0){
goto L4;
}
goto L7;
L29:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+160U);
if(si0){
goto L7;
}
goto L4;
L9:;
si0=l3;
si1=103645U;
si2=1519444U;
f663(i,si0,si1,si2);
UNREACHABLE;
L8:;
si0=2U;
si1=2U;
f52(i,si0,si1);
UNREACHABLE;
L7:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+156U);
f15271(i,si0);
goto L4;
L6:;
si0=l0;
sj1=l17;
i64_store(&i->m0,(U64)si0+32U,sj1);
si0=l0;
si1=l23;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l0;
si1=l21;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l0;
si1=l20;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l0;
si1=l16;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l0;
si1=l14;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l0;
si1=l15;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l0;
si1=l19;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l26;
i32_store(&i->m0,(U64)si0+44U,si1);
si0=l0;
si1=l25;
i32_store(&i->m0,(U64)si0+40U,si1);
si0=l0;
si1=l3;
i32_store(&i->m0,(U64)si0,si1);
goto L4;
L5:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+128U);
l3=si0;
si0=!(si0);
if(si0){
goto L35;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0+120U);
l1=si0;
si0=!(si0);
if(si0){
goto L35;
}
si0=l2;
si1=184U;
si0+=si1;
si1=8U;
si0+=si1;
l25=si0;
L36:;
{
si0=l3;
si1=1U;
si0<<=(si1&31);
si1=l1;
si0+=si1;
si1=-2U;
si0+=si1;
si0=i32_load16_s(&i->m0,(U64)si0);
l5=si0;
si1=65535U;
si0&=si1;
l12=si0;
si1=1091U;
si0=si0 >= si1;
if(si0){
goto L3;
}
si0=l12;
si1=1U;
si0<<=(si1&31);
si1=1540200U;
si0+=si1;
si0=i32_load16_s(&i->m0,(U64)si0);
l12=si0;
si1=-1U;
si0=(U32)((I32)si0>(I32)si1);
if(si0){
goto L38;
}
si0=l2;
si1=184U;
si0+=si1;
si1=l12;
si2=-1U;
si1^=si2;
si2=0U;
si3=l11;
si4=l10;
f2492(i,si0,si1,si2,si3,si4);
si0=l2;
si0=i32_load(&i->m0,(U64)si0+184U);
si1=6U;
si0=si0 == si1;
if(si0){
goto L37;
}
si0=l0;
si1=l2;
sj1=i64_load(&i->m0,(U64)si1+184U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=40U;
si0+=si1;
si1=l2;
si2=184U;
si1+=si2;
si2=40U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=32U;
si0+=si1;
si1=l2;
si2=184U;
si1+=si2;
si2=32U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=24U;
si0+=si1;
si1=l2;
si2=184U;
si1+=si2;
si2=24U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=16U;
si0+=si1;
si1=l2;
si2=184U;
si1+=si2;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=8U;
si0+=si1;
si1=l2;
si2=184U;
si1+=si2;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
goto L4;
L38:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+144U);
l12=si0;
si0=l2;
si1=l3;
i32_store(&i->m0,(U64)si0+312U,si1);
si0=l2;
si1=l1;
i32_store(&i->m0,(U64)si0+308U,si1);
si0=l2;
si1=0U;
i32_store(&i->m0,(U64)si0+304U,si1);
si0=l2;
si1=1520712U;
i32_store(&i->m0,(U64)si0+300U,si1);
si0=l2;
si1=1519952U;
i32_store(&i->m0,(U64)si0+296U,si1);
si0=l25;
si1=l2;
si2=296U;
si1+=si2;
f3399(i,si0,si1);
si0=l2;
si1=336U;
si0+=si1;
si1=8U;
si0+=si1;
si1=l25;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=336U;
si0+=si1;
si1=16U;
si0+=si1;
si1=l2;
si2=184U;
si1+=si2;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=336U;
si0+=si1;
si1=24U;
si0+=si1;
si1=l2;
si2=184U;
si1+=si2;
si2=24U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=336U;
si0+=si1;
si1=32U;
si0+=si1;
si1=l2;
si2=184U;
si1+=si2;
si2=32U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=336U;
si0+=si1;
si1=40U;
si0+=si1;
si1=l2;
si2=184U;
si1+=si2;
si2=40U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=l12;
i32_store(&i->m0,(U64)si0+188U,si1);
si0=l2;
si1=1U;
i32_store(&i->m0,(U64)si0+184U,si1);
si0=l2;
si1=l2;
sj1=i64_load(&i->m0,(U64)si1+184U);
l17=sj1;
i64_store(&i->m0,(U64)si0+336U,sj1);
sj0=l17;
si0=(U32)(sj0);
l1=si0;
si1=-6U;
si0+=si1;
l3=si0;
si1=2U;
si2=l3;
si3=2U;
si2=si2 < si3;
si0=si2?si0:si1;
l3=si0;
si1=1U;
si0=si0 == si1;
if(si0){
goto L37;
}
si0=l3;
switch(si0){
case 0:
goto L33;
case 1:
goto L34;
case 2:
goto L32;
default:
goto L33;
}
L37:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+128U);
l3=si0;
si0=!(si0);
if(si0){
goto L35;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0+120U);
l1=si0;
if(si0){
goto L36;
}
}
L35:;
si0=1540093U;
si1=43U;
si2=1540184U;
f673(i,si0,si1,si2);
L34:;
UNREACHABLE;
L33:;
si0=l2;
si1=196U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=1U;
i32_store(&i->m0,(U64)si0+188U,si1);
si0=l2;
si1=1540160U;
i32_store(&i->m0,(U64)si0+184U,si1);
si0=l2;
si1=1540168U;
i32_store(&i->m0,(U64)si0+192U,si1);
si0=l2;
si1=184U;
si0+=si1;
si1=1540168U;
f683(i,si0,si1);
UNREACHABLE;
L32:;
si0=l0;
si1=l2;
sj1=i64_load(&i->m0,(U64)si1+336U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=40U;
si0+=si1;
si1=l2;
si2=336U;
si1+=si2;
si2=40U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=32U;
si0+=si1;
si1=l2;
si2=336U;
si1+=si2;
si2=32U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=24U;
si0+=si1;
si1=l2;
si2=336U;
si1+=si2;
si2=24U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=16U;
si0+=si1;
si1=l2;
si2=336U;
si1+=si2;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=8U;
si0+=si1;
si1=l2;
si2=336U;
si1+=si2;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si1=6U;
si0&=si1;
si1=6U;
si0=si0 != si1;
if(si0){
goto L4;
}
si0=l2;
si1=336U;
si0+=si1;
f3487(i,si0);
L4:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+8U);
l3=si0;
si1=-98U;
si0+=si1;
switch(si0){
case 0:
goto L39;
case 1:
goto L1;
case 2:
goto L1;
default:
goto L40;
}
L40:;
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
goto L43;
case 1:
goto L42;
case 2:
goto L1;
case 3:
goto L1;
case 4:
goto L41;
default:
goto L1;
}
L43:;
si0=l2;
si1=16U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L1;
}
goto L2;
L42:;
si0=l3;
si0=!(si0);
if(si0){
goto L1;
}
si0=l2;
si1=16U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L2;
}
goto L1;
L41:;
si0=l2;
si1=16U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L2;
}
goto L1;
L39:;
si0=l2;
si1=8U;
si0+=si1;
si1=4U;
si0|=si1;
f3488(i,si0);
goto L1;
L3:;
si0=l5;
si1=1091U;
si2=1542476U;
f663(i,si0,si1,si2);
UNREACHABLE;
L2:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+12U);
f15271(i,si0);
L1:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+40U);
si1=-1114113U;
si0+=si1;
switch(si0){
case 0:
goto L45;
case 1:
goto L44;
default:
goto L46;
}
L46:;
si0=l2;
si1=64U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L47;
}
si0=l2;
si1=60U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
f15271(i,si0);
L47:;
si0=l2;
si1=80U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l12=si0;
si0=!(si0);
if(si0){
goto L48;
}
si0=0U;
l1=si0;
si0=l2;
si1=72U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
l3=si0;
L49:;
{
si0=l5;
si1=l1;
si2=5U;
si1<<=(si2&31);
si0+=si1;
l10=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
l11=si0;
si1=-2U;
si0+=si1;
l25=si0;
si1=1U;
si2=l25;
si3=96U;
si2=si2 < si3;
si0=si2?si0:si1;
switch(si0){
case 0:
goto L55;
case 1:
goto L54;
case 2:
goto L50;
case 3:
goto L50;
case 4:
goto L53;
default:
goto L50;
}
L55:;
si0=l3;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L50;
}
si0=l3;
si1=4U;
si0+=si1;
l25=si0;
goto L51;
L54:;
si0=l11;
si0=!(si0);
if(si0){
goto L50;
}
si0=l3;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L52;
}
goto L50;
L53:;
si0=l3;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L50;
}
L52:;
si0=l10;
si1=4U;
si0+=si1;
l25=si0;
L51:;
si0=l25;
si0=i32_load(&i->m0,(U64)si0);
f15271(i,si0);
L50:;
si0=l1;
si1=1U;
si0+=si1;
l1=si0;
si0=l3;
si1=32U;
si0+=si1;
l3=si0;
si0=l12;
si1=-1U;
si0+=si1;
l12=si0;
if(si0){
goto L49;
}
}
L48:;
si0=l2;
si1=76U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L45;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0+72U);
f15271(i,si0);
L45:;
si0=l2;
si1=96U;
si0+=si1;
f3527(i,si0);
si0=l2;
si1=100U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L44;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0+96U);
f15271(i,si0);
L44:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+124U);
si0=!(si0);
if(si0){
goto L56;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0+120U);
f15271(i,si0);
L56:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+132U);
si1=l2;
si1=i32_load(&i->m0,(U64)si1+140U);
f3367(i,si0,si1);
si0=l2;
si0=i32_load(&i->m0,(U64)si0+136U);
si0=!(si0);
if(si0){
goto L57;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0+132U);
f15271(i,si0);
L57:;
si0=l2;
si1=384U;
si0+=si1;
i->g0=si0;
L0:;
}

void f3487(rustpythonInstance*i,U32 l0) {
U32 l1=0;
U32 l2=0;
U32 l3=0;
U32 si0,si1,si2,si3;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
switch(si0){
case 0:
goto L1;
case 1:
goto L6;
case 2:
goto L5;
case 3:
goto L4;
case 4:
goto L7;
case 5:
goto L8;
default:
goto L7;
}
L8:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+4U);
switch(si0){
case 0:
goto L11;
case 1:
goto L10;
case 2:
goto L9;
default:
goto L12;
}
L12:;
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
goto L13;
}
si0=l1;
l3=si0;
L14:;
{
si0=l3;
f3361(i,si0);
si0=l3;
si1=48U;
si0+=si1;
l3=si0;
si0=l2;
si1=-1U;
si0+=si1;
l2=si0;
if(si0){
goto L14;
}
}
L13:;
si0=l0;
si1=12U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L15;
}
si0=l1;
f15271(i,si0);
L15:;
si0=l0;
si1=20U;
si0+=si1;
f3489(i,si0);
goto L0;
L11:;
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
goto L16;
}
si0=l1;
l3=si0;
L17:;
{
si0=l3;
f3370(i,si0);
si0=l3;
si1=72U;
si0+=si1;
l3=si0;
si0=l2;
si1=-1U;
si0+=si1;
l2=si0;
if(si0){
goto L17;
}
}
L16:;
si0=l0;
si1=12U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L18;
}
si0=l1;
f15271(i,si0);
L18:;
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
goto L19;
}
si0=l1;
l3=si0;
L20:;
{
si0=l3;
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L21;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
f15271(i,si0);
L21:;
si0=l3;
si1=16U;
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
L10:;
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
goto L22;
}
si0=l1;
l3=si0;
L23:;
{
si0=l3;
f3370(i,si0);
si0=l3;
si1=72U;
si0+=si1;
l3=si0;
si0=l2;
si1=-1U;
si0+=si1;
l2=si0;
if(si0){
goto L23;
}
}
L22:;
si0=l0;
si1=12U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L1;
}
si0=l1;
f15271(i,si0);
goto L0;
L9:;
si0=l0;
si1=8U;
si0+=si1;
f3489(i,si0);
goto L0;
L7:;
si0=l0;
si1=4U;
si0+=si1;
f3488(i,si0);
goto L0;
L6:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+8U);
l1=si0;
si0=l0;
si1=16U;
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
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L26;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
f15271(i,si0);
L26:;
si0=l3;
si1=12U;
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
si1=12U;
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
si0=i32_load(&i->m0,(U64)si0+16U);
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
goto L29;
case 1:
goto L28;
case 2:
goto L2;
case 3:
goto L2;
case 4:
goto L27;
default:
goto L2;
}
L29:;
si0=l0;
si1=24U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L3;
}
goto L2;
L28:;
si0=l2;
si0=!(si0);
if(si0){
goto L2;
}
si0=l0;
si1=24U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L2;
}
goto L3;
L27:;
si0=l0;
si1=24U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L3;
}
goto L2;
L4:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+8U);
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
goto L33;
case 1:
goto L32;
case 2:
goto L1;
case 3:
goto L1;
case 4:
goto L31;
default:
goto L1;
}
L33:;
si0=l0;
si1=16U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L30;
}
goto L1;
L32:;
si0=l2;
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
goto L30;
L31:;
si0=l0;
si1=16U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L1;
}
L30:;
si0=l0;
si1=12U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
f15271(i,si0);
goto L0;
L3:;
si0=l0;
si1=20U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
f15271(i,si0);
L2:;
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
goto L34;
}
si0=l1;
l3=si0;
L35:;
{
si0=l3;
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L36;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
f15271(i,si0);
L36:;
si0=l3;
si1=12U;
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
L1:;
L0:;
}

void f3488(rustpythonInstance*i,U32 l0) {
U32 l1=0;
U32 si0,si1;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
switch(si0){
case 0:
goto L1;
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
goto L6;
case 8:
goto L1;
case 9:
goto L1;
case 10:
goto L5;
case 11:
goto L1;
case 12:
goto L4;
case 13:
goto L1;
case 14:
goto L1;
default:
goto L7;
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
goto L3;
L6:;
si0=l0;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L3;
}
goto L1;
L5:;
si0=l0;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L3;
}
goto L1;
L4:;
si0=l0;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=1114115U;
si0=si0 != si1;
if(si0){
goto L1;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+4U);
l0=si0;
si0=i32_load(&i->m0,(U64)si0);
switch(si0){
case 0:
goto L2;
case 1:
goto L9;
case 2:
goto L2;
case 3:
goto L8;
default:
goto L10;
}
L10:;
si0=l0;
si1=4U;
si0+=si1;
f3488(i,si0);
goto L2;
L9:;
si0=l0;
si1=8U;
si0+=si1;
f3490(i,si0);
goto L2;
L8:;
si0=l0;
si1=16U;
si0+=si1;
f3490(i,si0);
si0=l0;
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si0=!(si0);
if(si0){
goto L2;
}
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
goto L2;
L3:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+4U);
l0=si0;
L2:;
si0=l0;
f15271(i,si0);
L1:;
L0:;
}

void f3489(rustpythonInstance*i,U32 l0) {
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
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si1=-11U;
si0+=si1;
l0=si0;
si1=19U;
si2=l0;
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
si0=l1;
si1=12U;
si0+=si1;
l0=si0;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L29;
}
si0=l0;
f3489(i,si0);
L29:;
si0=l1;
si1=16U;
si0+=si1;
l0=si0;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L30;
}
si0=l0;
f3489(i,si0);
L30:;
si0=l1;
si1=20U;
si0+=si1;
l0=si0;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L1;
}
si0=l0;
f3489(i,si0);
si0=l1;
f15271(i,si0);
goto L0;
L27:;
si0=l1;
si1=12U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si0=!(si0);
if(si0){
goto L31;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
l0=si0;
L32:;
{
si0=l0;
f3361(i,si0);
si0=l0;
si1=48U;
si0+=si1;
l0=si0;
si0=l2;
si1=-1U;
si0+=si1;
l2=si0;
if(si0){
goto L32;
}
}
L31:;
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
si0=l1;
f15271(i,si0);
goto L0;
L26:;
si0=l1;
si1=4U;
si0+=si1;
f3489(i,si0);
si0=l1;
si1=8U;
si0+=si1;
f3489(i,si0);
si0=l1;
f15271(i,si0);
goto L0;
L25:;
si0=l1;
si1=4U;
si0+=si1;
f3489(i,si0);
si0=l1;
si1=8U;
si0+=si1;
f3489(i,si0);
si0=l1;
f15271(i,si0);
goto L0;
L24:;
si0=l1;
si1=4U;
si0+=si1;
f3489(i,si0);
si0=l1;
f15271(i,si0);
goto L0;
L23:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
l0=si0;
f3385(i,si0);
si0=l0;
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L33;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
f15271(i,si0);
L33:;
si0=l0;
si1=12U;
si0+=si1;
l2=si0;
f3385(i,si0);
si0=l0;
si1=16U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L34;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0);
f15271(i,si0);
L34:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+36U);
l2=si0;
si0=!(si0);
if(si0){
goto L35;
}
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
si0=i32_load(&i->m0,(U64)si0+20U);
si0=!(si0);
if(si0){
goto L37;
}
si0=l2;
si1=20U;
si0+=si1;
f3489(i,si0);
L37:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+24U);
l3=si0;
si0=!(si0);
if(si0){
goto L38;
}
si0=l2;
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
si0=l2;
f15271(i,si0);
L35:;
si0=l0;
si1=24U;
si0+=si1;
l2=si0;
f3385(i,si0);
si0=l0;
si1=28U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L39;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0);
f15271(i,si0);
L39:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+40U);
l2=si0;
si0=!(si0);
if(si0){
goto L40;
}
si0=l2;
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L41;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0);
f15271(i,si0);
L41:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+20U);
si0=!(si0);
if(si0){
goto L42;
}
si0=l2;
si1=20U;
si0+=si1;
f3489(i,si0);
L42:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+24U);
l3=si0;
si0=!(si0);
if(si0){
goto L43;
}
si0=l2;
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
si0=l2;
f15271(i,si0);
L40:;
si0=l0;
f15271(i,si0);
si0=l1;
si1=8U;
si0+=si1;
f3489(i,si0);
si0=l1;
f15271(i,si0);
goto L0;
L22:;
si0=l1;
si1=4U;
si0+=si1;
f3489(i,si0);
si0=l1;
si1=8U;
si0+=si1;
f3489(i,si0);
si0=l1;
si1=12U;
si0+=si1;
f3489(i,si0);
si0=l1;
f15271(i,si0);
goto L0;
L21:;
si0=l1;
si1=12U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si0=!(si0);
if(si0){
goto L44;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
l0=si0;
L45:;
{
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
si1=38U;
si0=si0 == si1;
if(si0){
goto L46;
}
si0=l0;
f3361(i,si0);
L46:;
si0=l0;
si1=48U;
si0+=si1;
l0=si0;
si0=l2;
si1=-1U;
si0+=si1;
l2=si0;
if(si0){
goto L45;
}
}
L44:;
si0=l1;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L47;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
f15271(i,si0);
L47:;
si0=l1;
si1=24U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si0=!(si0);
if(si0){
goto L48;
}
si0=l1;
si1=16U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l0=si0;
L49:;
{
si0=l0;
f3361(i,si0);
si0=l0;
si1=48U;
si0+=si1;
l0=si0;
si0=l2;
si1=-1U;
si0+=si1;
l2=si0;
if(si0){
goto L49;
}
}
L48:;
si0=l1;
si1=20U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L1;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+16U);
f15271(i,si0);
si0=l1;
f15271(i,si0);
goto L0;
L20:;
si0=l1;
si1=12U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si0=!(si0);
if(si0){
goto L50;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
l0=si0;
L51:;
{
si0=l0;
f3361(i,si0);
si0=l0;
si1=48U;
si0+=si1;
l0=si0;
si0=l2;
si1=-1U;
si0+=si1;
l2=si0;
if(si0){
goto L51;
}
}
L50:;
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
si0=l1;
f15271(i,si0);
goto L0;
L19:;
si0=l1;
si1=4U;
si0+=si1;
f3489(i,si0);
si0=l1;
si1=16U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
si0=!(si0);
if(si0){
goto L52;
}
si0=l1;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si0=0U;
l3=si0;
L53:;
{
si0=l5;
si1=l3;
si2=112U;
si1*=si2;
si0+=si1;
l0=si0;
f3361(i,si0);
si0=l0;
si1=48U;
si0+=si1;
f3361(i,si0);
si0=l0;
si1=96U;
si0+=si1;
l6=si0;
si0=l0;
si1=104U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si0=!(si0);
if(si0){
goto L54;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+96U);
l0=si0;
L55:;
{
si0=l0;
f3361(i,si0);
si0=l0;
si1=48U;
si0+=si1;
l0=si0;
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
si1=l4;
si0=si0 != si1;
if(si0){
goto L53;
}
}
L52:;
si0=l1;
si1=12U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L1;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+8U);
f15271(i,si0);
si0=l1;
f15271(i,si0);
goto L0;
L18:;
si0=l1;
si1=4U;
si0+=si1;
f3489(i,si0);
si0=l1;
si1=16U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
si0=!(si0);
if(si0){
goto L57;
}
si0=l1;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si0=0U;
l3=si0;
L58:;
{
si0=l5;
si1=l3;
si2=112U;
si1*=si2;
si0+=si1;
l0=si0;
f3361(i,si0);
si0=l0;
si1=48U;
si0+=si1;
f3361(i,si0);
si0=l0;
si1=96U;
si0+=si1;
l6=si0;
si0=l0;
si1=104U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si0=!(si0);
if(si0){
goto L59;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+96U);
l0=si0;
L60:;
{
si0=l0;
f3361(i,si0);
si0=l0;
si1=48U;
si0+=si1;
l0=si0;
si0=l2;
si1=-1U;
si0+=si1;
l2=si0;
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
si1=l4;
si0=si0 != si1;
if(si0){
goto L58;
}
}
L57:;
si0=l1;
si1=12U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L1;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+8U);
f15271(i,si0);
si0=l1;
f15271(i,si0);
goto L0;
L17:;
si0=l1;
si1=4U;
si0+=si1;
f3489(i,si0);
si0=l1;
si1=8U;
si0+=si1;
f3489(i,si0);
si0=l1;
si1=20U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
si0=!(si0);
if(si0){
goto L62;
}
si0=l1;
si1=12U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si0=0U;
l3=si0;
L63:;
{
si0=l5;
si1=l3;
si2=112U;
si1*=si2;
si0+=si1;
l0=si0;
f3361(i,si0);
si0=l0;
si1=48U;
si0+=si1;
f3361(i,si0);
si0=l0;
si1=96U;
si0+=si1;
l6=si0;
si0=l0;
si1=104U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si0=!(si0);
if(si0){
goto L64;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+96U);
l0=si0;
L65:;
{
si0=l0;
f3361(i,si0);
si0=l0;
si1=48U;
si0+=si1;
l0=si0;
si0=l2;
si1=-1U;
si0+=si1;
l2=si0;
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
si1=l4;
si0=si0 != si1;
if(si0){
goto L63;
}
}
L62:;
si0=l1;
si1=16U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L1;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+12U);
f15271(i,si0);
si0=l1;
f15271(i,si0);
goto L0;
L16:;
si0=l1;
si1=4U;
si0+=si1;
f3489(i,si0);
si0=l1;
si1=16U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
si0=!(si0);
if(si0){
goto L67;
}
si0=l1;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si0=0U;
l3=si0;
L68:;
{
si0=l5;
si1=l3;
si2=112U;
si1*=si2;
si0+=si1;
l0=si0;
f3361(i,si0);
si0=l0;
si1=48U;
si0+=si1;
f3361(i,si0);
si0=l0;
si1=96U;
si0+=si1;
l6=si0;
si0=l0;
si1=104U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si0=!(si0);
if(si0){
goto L69;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+96U);
l0=si0;
L70:;
{
si0=l0;
f3361(i,si0);
si0=l0;
si1=48U;
si0+=si1;
l0=si0;
si0=l2;
si1=-1U;
si0+=si1;
l2=si0;
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
si1=l4;
si0=si0 != si1;
if(si0){
goto L68;
}
}
L67:;
si0=l1;
si1=12U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L1;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+8U);
f15271(i,si0);
si0=l1;
f15271(i,si0);
goto L0;
L15:;
si0=l1;
si1=4U;
si0+=si1;
f3489(i,si0);
si0=l1;
f15271(i,si0);
goto L0;
L14:;
si0=l1;
si1=12U;
si0+=si1;
l0=si0;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L1;
}
si0=l0;
f3489(i,si0);
si0=l1;
f15271(i,si0);
goto L0;
L13:;
si0=l1;
si1=4U;
si0+=si1;
f3489(i,si0);
si0=l1;
f15271(i,si0);
goto L0;
L12:;
si0=l1;
si1=4U;
si0+=si1;
f3489(i,si0);
si0=l1;
si1=12U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L72;
}
si0=l1;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
f15271(i,si0);
L72:;
si0=l1;
si1=28U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si0=!(si0);
if(si0){
goto L73;
}
si0=l1;
si1=20U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l0=si0;
L74:;
{
si0=l0;
f3361(i,si0);
si0=l0;
si1=48U;
si0+=si1;
l0=si0;
si0=l2;
si1=-1U;
si0+=si1;
l2=si0;
if(si0){
goto L74;
}
}
L73:;
si0=l1;
si1=24U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L1;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+20U);
f15271(i,si0);
si0=l1;
f15271(i,si0);
goto L0;
L11:;
si0=l1;
si1=4U;
si0+=si1;
f3489(i,si0);
si0=l1;
si1=16U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si0=!(si0);
if(si0){
goto L75;
}
si0=l1;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l0=si0;
L76:;
{
si0=l0;
f3361(i,si0);
si0=l0;
si1=48U;
si0+=si1;
l0=si0;
si0=l2;
si1=-1U;
si0+=si1;
l2=si0;
if(si0){
goto L76;
}
}
L75:;
si0=l1;
si1=12U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L77;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+8U);
f15271(i,si0);
L77:;
si0=l1;
si1=28U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si0=!(si0);
if(si0){
goto L78;
}
si0=l1;
si1=20U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l0=si0;
L79:;
{
si0=l0;
si1=56U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=!(si0);
if(si0){
goto L80;
}
si0=l0;
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
si0=l0;
f3361(i,si0);
si0=l0;
si1=72U;
si0+=si1;
l0=si0;
si0=l2;
si1=-1U;
si0+=si1;
l2=si0;
if(si0){
goto L79;
}
}
L78:;
si0=l1;
si1=24U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L1;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+20U);
f15271(i,si0);
si0=l1;
f15271(i,si0);
goto L0;
L10:;
si0=l1;
si1=4U;
si0+=si1;
f3489(i,si0);
si0=l1;
si1=16U;
si0+=si1;
l0=si0;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L1;
}
si0=l0;
f3489(i,si0);
si0=l1;
f15271(i,si0);
goto L0;
L9:;
si0=l1;
si1=12U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si0=!(si0);
if(si0){
goto L81;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
l0=si0;
L82:;
{
si0=l0;
f3361(i,si0);
si0=l0;
si1=48U;
si0+=si1;
l0=si0;
si0=l2;
si1=-1U;
si0+=si1;
l2=si0;
if(si0){
goto L82;
}
}
L81:;
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
si0=l1;
f15271(i,si0);
goto L0;
L8:;
si0=l2;
si1=-2U;
si0+=si1;
l0=si0;
si1=4U;
si2=l0;
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
si0=l1;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L83;
}
si0=l1;
si1=4U;
si0+=si1;
l0=si0;
goto L84;
L87:;
si0=l1;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L83;
}
si0=l1;
si1=4U;
si0+=si1;
l0=si0;
goto L84;
L86:;
si0=l2;
si0=!(si0);
if(si0){
goto L83;
}
si0=l1;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L83;
}
si0=l1;
si1=4U;
si0+=si1;
l0=si0;
goto L84;
L85:;
si0=l1;
si1=12U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si0=!(si0);
if(si0){
goto L89;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
l0=si0;
L90:;
{
si0=l0;
f3373(i,si0);
si0=l0;
si1=24U;
si0+=si1;
l0=si0;
si0=l2;
si1=-1U;
si0+=si1;
l2=si0;
if(si0){
goto L90;
}
}
L89:;
si0=l1;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L83;
}
si0=l1;
si1=4U;
si0+=si1;
l0=si0;
L84:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
f15271(i,si0);
L83:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+32U);
l0=si0;
si0=!(si0);
if(si0){
goto L1;
}
si0=l1;
si1=36U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L1;
}
si0=l0;
f15271(i,si0);
si0=l1;
f15271(i,si0);
goto L0;
L7:;
si0=l1;
si1=4U;
si0+=si1;
f3489(i,si0);
si0=l1;
si1=12U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L1;
}
si0=l1;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
f15271(i,si0);
si0=l1;
f15271(i,si0);
goto L0;
L6:;
si0=l1;
si1=4U;
si0+=si1;
f3489(i,si0);
si0=l1;
si1=8U;
si0+=si1;
f3489(i,si0);
si0=l1;
f15271(i,si0);
goto L0;
L5:;
si0=l1;
si1=4U;
si0+=si1;
f3489(i,si0);
si0=l1;
f15271(i,si0);
goto L0;
L4:;
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
si0=l1;
f15271(i,si0);
goto L0;
L3:;
si0=l1;
si1=12U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si0=!(si0);
if(si0){
goto L91;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
l0=si0;
L92:;
{
si0=l0;
f3361(i,si0);
si0=l0;
si1=48U;
si0+=si1;
l0=si0;
si0=l2;
si1=-1U;
si0+=si1;
l2=si0;
if(si0){
goto L92;
}
}
L91:;
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
si0=l1;
f15271(i,si0);
goto L0;
L2:;
si0=l1;
si1=12U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si0=!(si0);
if(si0){
goto L93;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
l0=si0;
L94:;
{
si0=l0;
f3361(i,si0);
si0=l0;
si1=48U;
si0+=si1;
l0=si0;
si0=l2;
si1=-1U;
si0+=si1;
l2=si0;
if(si0){
goto L94;
}
}
L93:;
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
si0=l1;
f15271(i,si0);
L0:;
}

void f3490(rustpythonInstance*i,U32 l0) {
U32 l1=0;
U32 l2=0;
U32 si0,si1,si2,si3;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
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
si0=l0;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L1;
}
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
if(si0){
goto L2;
}
goto L1;
L3:;
si0=l0;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L1;
}
L2:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+4U);
f15271(i,si0);
L1:;
L0:;
}

void f3491(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
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
U32 si0,si1,si2;
U64 sj1;
si0=i->g0;
si1=192U;
si0-=si1;
l3=si0;
i->g0=si0;
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
goto L1;
}
si0=l7;
si1=l6;
si0-=si1;
si1=-56U;
si0+=si1;
l8=si0;
si0=0U;
l9=si0;
si0=l3;
si1=96U;
si0+=si1;
si1=40U;
si0+=si1;
l10=si0;
si0=l3;
si1=96U;
si0+=si1;
si1=32U;
si0+=si1;
l11=si0;
si0=l3;
si1=96U;
si0+=si1;
si1=24U;
si0+=si1;
l12=si0;
si0=l3;
si1=96U;
si0+=si1;
si1=16U;
si0+=si1;
l13=si0;
L3:;
{
si0=l6;
si1=l9;
si0+=si1;
l0=si0;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l14=si0;
si1=38U;
si0=si0 == si1;
if(si0){
goto L2;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
l15=si0;
si0=l10;
si1=l0;
si2=52U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l11;
si1=l0;
si2=44U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l12;
si1=l0;
si2=36U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l13;
si1=l0;
si2=28U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=96U;
si0+=si1;
si1=8U;
si0+=si1;
l16=si0;
si1=l0;
si2=20U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=l0;
si2=12U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+96U,sj1);
si0=l15;
if(si0){
goto L5;
}
si0=38U;
l17=si0;
goto L4;
L5:;
si0=l3;
si1=144U;
si0+=si1;
si1=8U;
si0+=si1;
si1=l15;
si2=12U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=144U;
si0+=si1;
si1=16U;
si0+=si1;
si1=l15;
si2=20U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=144U;
si0+=si1;
si1=24U;
si0+=si1;
si1=l15;
si2=28U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=144U;
si0+=si1;
si1=32U;
si0+=si1;
si1=l15;
si2=36U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=144U;
si0+=si1;
si1=40U;
si0+=si1;
si1=l15;
si2=44U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=l15;
sj1=i64_load(&i->m0,(U64)si1+4U);
i64_store(&i->m0,(U64)si0+144U,sj1);
si0=l15;
si0=i32_load(&i->m0,(U64)si0);
l17=si0;
si0=l15;
f15271(i,si0);
L4:;
si0=l3;
si1=48U;
si0+=si1;
si1=40U;
si0+=si1;
l15=si0;
si1=l3;
si2=144U;
si1+=si2;
si2=40U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=48U;
si0+=si1;
si1=32U;
si0+=si1;
l18=si0;
si1=l3;
si2=144U;
si1+=si2;
si2=32U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=48U;
si0+=si1;
si1=24U;
si0+=si1;
l19=si0;
si1=l3;
si2=144U;
si1+=si2;
si2=24U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=48U;
si0+=si1;
si1=16U;
si0+=si1;
l20=si0;
si1=l3;
si2=144U;
si1+=si2;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=48U;
si0+=si1;
si1=8U;
si0+=si1;
l21=si0;
si1=l3;
si2=144U;
si1+=si2;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=8U;
si0+=si1;
l22=si0;
si1=l16;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=16U;
si0+=si1;
l16=si0;
si1=l13;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=24U;
si0+=si1;
l23=si0;
si1=l12;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=32U;
si0+=si1;
l24=si0;
si1=l11;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=40U;
si0+=si1;
l25=si0;
si1=l10;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=l3;
sj1=i64_load(&i->m0,(U64)si1+144U);
i64_store(&i->m0,(U64)si0+48U,sj1);
si0=l3;
si1=l3;
sj1=i64_load(&i->m0,(U64)si1+96U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+8U);
l0=si0;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+4U);
si0=si0 != si1;
if(si0){
goto L6;
}
si0=l1;
si1=l0;
f3347(i,si0,si1);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+8U);
l0=si0;
L6:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
si1=l0;
si2=48U;
si1*=si2;
si0+=si1;
l0=si0;
si1=l3;
sj1=i64_load(&i->m0,(U64)si1+48U);
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l0;
si1=l17;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=12U;
si0+=si1;
si1=l21;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=20U;
si0+=si1;
si1=l20;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=28U;
si0+=si1;
si1=l19;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=36U;
si0+=si1;
si1=l18;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=44U;
si0+=si1;
si1=l15;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+8U);
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l2;
si0=i32_load(&i->m0,(U64)si0+8U);
l0=si0;
si1=l2;
si1=i32_load(&i->m0,(U64)si1+4U);
si0=si0 != si1;
if(si0){
goto L7;
}
si0=l2;
si1=l0;
f3347(i,si0,si1);
si0=l2;
si0=i32_load(&i->m0,(U64)si0+8U);
l0=si0;
L7:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0);
si1=l0;
si2=48U;
si1*=si2;
si0+=si1;
l0=si0;
si1=l3;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l0;
si1=l14;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=12U;
si0+=si1;
si1=l22;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=20U;
si0+=si1;
si1=l16;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=28U;
si0+=si1;
si1=l23;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=36U;
si0+=si1;
si1=l24;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=44U;
si0+=si1;
si1=l25;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=l2;
si1=i32_load(&i->m0,(U64)si1+8U);
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l6;
si1=l9;
si2=56U;
si1+=si2;
l9=si1;
si0+=si1;
si1=l7;
si0=si0 != si1;
if(si0){
goto L3;
}
goto L1;
}
L2:;
si0=l0;
si1=56U;
si0+=si1;
si1=l7;
si0=si0 == si1;
if(si0){
goto L1;
}
si0=l0;
si1=64U;
si0+=si1;
l0=si0;
si0=l8;
si1=l9;
si0-=si1;
si1=56U;
si0=DIV_U(si0,si1);
l2=si0;
L8:;
{
si0=l0;
si1=-8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l15=si0;
si0=!(si0);
if(si0){
goto L9;
}
si0=l15;
f3500(i,si0);
si0=l15;
f15271(i,si0);
L9:;
si0=l0;
f3500(i,si0);
si0=l0;
si1=56U;
si0+=si1;
l0=si0;
si0=l2;
si1=-1U;
si0+=si1;
l2=si0;
if(si0){
goto L8;
}
}
L1:;
si0=l4;
si0=!(si0);
if(si0){
goto L10;
}
si0=l5;
f15271(i,si0);
L10:;
si0=l3;
si1=192U;
si0+=si1;
i->g0=si0;
L0:;
}

U32 f3492(rustpythonInstance*i,U32 l0,U32 l1) {
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

U32 f3493(rustpythonInstance*i,U32 l0,U32 l1) {
U32 si0,si1,si2,si3;
si0=l1;
si1=l0;
si1=i32_load(&i->m0,(U64)si1);
l0=si1;
si1=i32_load(&i->m0,(U64)si1);
si2=l0;
si3=8U;
si2+=si3;
si2=i32_load(&i->m0,(U64)si2);
si0=f713(i,si0,si1,si2);
L0:;
return si0;
}

U32 f3494(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 si0,si1,si2,si3;
U64 sj1;
si0=i->g0;
si1=32U;
si0-=si1;
l2=si0;
i->g0=si0;
si0=l2;
si1=l0;
i32_store(&i->m0,(U64)si0+4U,si1);
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
si1=8U;
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
i64_store(&i->m0,(U64)si0+8U,sj1);
si0=l2;
si1=4U;
si0+=si1;
si1=1542492U;
si2=l2;
si3=8U;
si2+=si3;
si0=f690(i,si0,si1,si2);
l1=si0;
si0=l2;
si1=32U;
si0+=si1;
i->g0=si0;
si0=l1;
L0:;
return si0;
}

void f3495(rustpythonInstance*i,U32 l0) {
L0:;
}

U32 f3496(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 l3=0;
U32 si0,si1,si2;
si0=i->g0;
si1=16U;
si0-=si1;
l2=si0;
i->g0=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
l0=si0;
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
f3344(i,si0,si1);
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
f3355(i,si0,si1,si2);
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

U32 f3497(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 si0,si1,si2,si3;
U64 sj1;
si0=i->g0;
si1=32U;
si0-=si1;
l2=si0;
i->g0=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
l0=si0;
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
si1=8U;
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
i64_store(&i->m0,(U64)si0+8U,sj1);
si0=l2;
si1=l0;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l2;
si1=4U;
si0+=si1;
si1=1542492U;
si2=l2;
si3=8U;
si2+=si3;
si0=f690(i,si0,si1,si2);
l1=si0;
si0=l2;
si1=32U;
si0+=si1;
i->g0=si0;
si0=l1;
L0:;
return si0;
}

U32 f3498(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U32 si0,si1,si2;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
l0=si0;
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
f3355(i,si0,si1,si2);
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

void f3499(rustpythonInstance*i,U32 l0,U32 l1) {
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
si0=i32_load(&i->m0,(U64)si0+16U);
l3=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+12U);
l4=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+8U);
l5=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+4U);
si1=l0;
si1=i32_load(&i->m0,(U64)si1+8U);
l6=si1;
si0-=si1;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+4U);
l7=si1;
si2=l1;
si2=i32_load(&i->m0,(U64)si2);
l1=si2;
si1-=si2;
si2=3U;
si1+=si2;
si2=2U;
si1>>=(si2&31);
l8=si1;
si0=si0 >= si1;
if(si0){
goto L1;
}
si0=l0;
si1=l6;
si2=l8;
f3355(i,si0,si1,si2);
L1:;
si0=l1;
si1=l7;
si0=si0 == si1;
if(si0){
goto L2;
}
L3:;
{
si0=l1;
si0=i32_load8_s(&i->m0,(U64)si0);
l6=si0;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L6;
}
si0=l1;
si1=1U;
si0+=si1;
l1=si0;
si0=l6;
si1=255U;
si0&=si1;
l6=si0;
goto L5;
L6:;
si0=l1;
si0=i32_load8_u(&i->m0,(U64)si0+1U);
si1=63U;
si0&=si1;
l8=si0;
si0=l6;
si1=31U;
si0&=si1;
l9=si0;
si0=l6;
si1=-33U;
si0=si0 > si1;
if(si0){
goto L8;
}
si0=l9;
si1=6U;
si0<<=(si1&31);
si1=l8;
si0|=si1;
l6=si0;
si0=l1;
si1=2U;
si0+=si1;
l1=si0;
goto L7;
L8:;
si0=l8;
si1=6U;
si0<<=(si1&31);
si1=l1;
si1=i32_load8_u(&i->m0,(U64)si1+2U);
si2=63U;
si1&=si2;
si0|=si1;
l8=si0;
si0=l6;
si1=-16U;
si0=si0 >= si1;
if(si0){
goto L9;
}
si0=l8;
si1=l9;
si2=12U;
si1<<=(si2&31);
si0|=si1;
l6=si0;
si0=l1;
si1=3U;
si0+=si1;
l1=si0;
goto L7;
L9:;
si0=l8;
si1=6U;
si0<<=(si1&31);
si1=l1;
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
l6=si0;
si1=1114112U;
si0=si0 == si1;
if(si0){
goto L2;
}
si0=l1;
si1=4U;
si0+=si1;
l1=si0;
L7:;
si0=l6;
si1=128U;
si0=si0 < si1;
if(si0){
goto L5;
}
si0=l2;
si1=0U;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l6;
si1=2048U;
si0=si0 < si1;
if(si0){
goto L11;
}
si0=l6;
si1=65536U;
si0=si0 >= si1;
if(si0){
goto L12;
}
si0=l2;
si1=l6;
si2=63U;
si1&=si2;
si2=128U;
si1|=si2;
i32_store8(&i->m0,(U64)si0+14U,si1);
si0=l2;
si1=l6;
si2=12U;
si1>>=(si2&31);
si2=224U;
si1|=si2;
i32_store8(&i->m0,(U64)si0+12U,si1);
si0=l2;
si1=l6;
si2=6U;
si1>>=(si2&31);
si2=63U;
si1&=si2;
si2=128U;
si1|=si2;
i32_store8(&i->m0,(U64)si0+13U,si1);
si0=3U;
l6=si0;
goto L10;
L12:;
si0=l2;
si1=l6;
si2=63U;
si1&=si2;
si2=128U;
si1|=si2;
i32_store8(&i->m0,(U64)si0+15U,si1);
si0=l2;
si1=l6;
si2=18U;
si1>>=(si2&31);
si2=240U;
si1|=si2;
i32_store8(&i->m0,(U64)si0+12U,si1);
si0=l2;
si1=l6;
si2=6U;
si1>>=(si2&31);
si2=63U;
si1&=si2;
si2=128U;
si1|=si2;
i32_store8(&i->m0,(U64)si0+14U,si1);
si0=l2;
si1=l6;
si2=12U;
si1>>=(si2&31);
si2=63U;
si1&=si2;
si2=128U;
si1|=si2;
i32_store8(&i->m0,(U64)si0+13U,si1);
si0=4U;
l6=si0;
goto L10;
L11:;
si0=l2;
si1=l6;
si2=63U;
si1&=si2;
si2=128U;
si1|=si2;
i32_store8(&i->m0,(U64)si0+13U,si1);
si0=l2;
si1=l6;
si2=6U;
si1>>=(si2&31);
si2=192U;
si1|=si2;
i32_store8(&i->m0,(U64)si0+12U,si1);
si0=2U;
l6=si0;
L10:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+4U);
si1=l0;
si1=i32_load(&i->m0,(U64)si1+8U);
l8=si1;
si0-=si1;
si1=l6;
si0=si0 >= si1;
if(si0){
goto L13;
}
si0=l0;
si1=l8;
si2=l6;
f3355(i,si0,si1,si2);
si0=l0;
si0=i32_load(&i->m0,(U64)si0+8U);
l8=si0;
L13:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
si1=l8;
si0+=si1;
si1=l2;
si2=12U;
si1+=si2;
si2=l6;
si0=f15390(i,si0,si1,si2);
si0=l0;
si1=l8;
si2=l6;
si1+=si2;
i32_store(&i->m0,(U64)si0+8U,si1);
goto L4;
L5:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+8U);
l8=si0;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+4U);
si0=si0 != si1;
if(si0){
goto L14;
}
si0=l0;
si1=l8;
f3344(i,si0,si1);
si0=l0;
si0=i32_load(&i->m0,(U64)si0+8U);
l8=si0;
L14:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
si1=l8;
si0+=si1;
si1=l6;
i32_store8(&i->m0,(U64)si0,si1);
si0=l0;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+8U);
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0+8U,si1);
L4:;
si0=l1;
si1=l7;
si0=si0 != si1;
if(si0){
goto L3;
}
}
L2:;
si0=l4;
si1=l3;
si0=si0 > si1;
if(si0){
goto L15;
}
si0=l5;
si0=i32_load(&i->m0,(U64)si0+8U);
l0=si0;
si1=l3;
si0=si0 < si1;
if(si0){
goto L15;
}
si0=l5;
si1=l4;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l0;
si1=l3;
si0-=si1;
l1=si0;
si0=l3;
si1=l4;
si0=si0 != si1;
if(si0){
goto L17;
}
si0=l0;
si1=l3;
si0=si0 != si1;
if(si0){
goto L16;
}
goto L15;
L17:;
si0=l0;
si1=l3;
si0=si0 == si1;
if(si0){
goto L15;
}
si0=l5;
si0=i32_load(&i->m0,(U64)si0);
l0=si0;
si1=l4;
si0+=si1;
si1=l0;
si2=l3;
si1+=si2;
si2=l1;
si0=f15391(i,si0,si1,si2);
L16:;
si0=l5;
si1=l1;
si2=l4;
si1+=si2;
i32_store(&i->m0,(U64)si0+8U,si1);
L15:;
si0=l2;
si1=16U;
si0+=si1;
i->g0=si0;
L0:;
}

void f3500(rustpythonInstance*i,U32 l0) {
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
f3500(i,si0);
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
f3500(i,si0);
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
f3500(i,si0);
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
f3361(i,si0);
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
f3500(i,si0);
si0=l2;
f15271(i,si0);
si0=l0;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
f3500(i,si0);
si0=l2;
f15271(i,si0);
goto L0;
L28:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+4U);
l2=si0;
f3500(i,si0);
si0=l2;
f15271(i,si0);
si0=l0;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
f3500(i,si0);
si0=l2;
f15271(i,si0);
goto L0;
L27:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+4U);
l2=si0;
f3500(i,si0);
si0=l2;
f15271(i,si0);
goto L0;
L26:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+4U);
l2=si0;
f3385(i,si0);
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
f3385(i,si0);
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
f3501(i,si0);
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
f3385(i,si0);
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
f3501(i,si0);
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
f3500(i,si0);
si0=l2;
f15271(i,si0);
goto L0;
L25:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+4U);
l2=si0;
f3500(i,si0);
si0=l2;
f15271(i,si0);
si0=l0;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
f3500(i,si0);
si0=l2;
f15271(i,si0);
si0=l0;
si1=12U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
f3500(i,si0);
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
f3361(i,si0);
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
f3361(i,si0);
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
f3361(i,si0);
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
f3500(i,si0);
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
f3361(i,si0);
si0=l2;
si1=48U;
si0+=si1;
f3361(i,si0);
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
f3361(i,si0);
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
f3500(i,si0);
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
f3361(i,si0);
si0=l2;
si1=48U;
si0+=si1;
f3361(i,si0);
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
f3361(i,si0);
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
f3500(i,si0);
si0=l2;
f15271(i,si0);
si0=l0;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
f3500(i,si0);
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
f3361(i,si0);
si0=l2;
si1=48U;
si0+=si1;
f3361(i,si0);
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
f3361(i,si0);
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
f3500(i,si0);
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
f3361(i,si0);
si0=l2;
si1=48U;
si0+=si1;
f3361(i,si0);
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
f3361(i,si0);
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
f3500(i,si0);
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
f3500(i,si0);
si0=l2;
f15271(i,si0);
goto L0;
L16:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+4U);
l2=si0;
f3500(i,si0);
si0=l2;
f15271(i,si0);
goto L0;
L15:;
si0=l0;
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
f3500(i,si0);
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
f3361(i,si0);
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
f3500(i,si0);
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
f3361(i,si0);
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
f3361(i,si0);
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
f3500(i,si0);
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
f3500(i,si0);
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
f3361(i,si0);
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
f3373(i,si0);
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
f3500(i,si0);
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
f3500(i,si0);
si0=l2;
f15271(i,si0);
si0=l0;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
f3500(i,si0);
si0=l2;
f15271(i,si0);
goto L0;
L8:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+4U);
l2=si0;
f3500(i,si0);
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
f3361(i,si0);
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
f3361(i,si0);
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

void f3501(rustpythonInstance*i,U32 l0) {
U32 si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
l0=si0;
f3500(i,si0);
si0=l0;
f15271(i,si0);
L0:;
}

void f3502(rustpythonInstance*i,U32 l0) {
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
f3371(i,si0);
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
f3500(i,si0);
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
f3373(i,si0);
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
f3371(i,si0);
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
f3361(i,si0);
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
f3371(i,si0);
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
f3500(i,si0);
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
f3371(i,si0);
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
f3371(i,si0);
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
f3502(i,si0);
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

void f3503(rustpythonInstance*i,U32 l0) {
U32 l1=0;
U32 l2=0;
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 si0,si1,si2,si3;
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
si1=40U;
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
si0=l2;
l1=si0;
L2:;
{
si0=l2;
si1=l4;
si2=40U;
si1*=si2;
si0+=si1;
l5=si0;
si0=l1;
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
si0=l1;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L3;
}
si0=l5;
si1=4U;
si0+=si1;
l7=si0;
goto L4;
L6:;
si0=l6;
si0=!(si0);
if(si0){
goto L3;
}
si0=l1;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L3;
}
si0=l5;
si1=4U;
si0+=si1;
l7=si0;
goto L4;
L5:;
si0=l1;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L3;
}
si0=l1;
si1=4U;
si0+=si1;
l7=si0;
L4:;
si0=l7;
si0=i32_load(&i->m0,(U64)si0);
f15271(i,si0);
L3:;
si0=l1;
si1=28U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L8;
}
si0=l1;
si1=24U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
f15271(i,si0);
L8:;
si0=l4;
si1=1U;
si0+=si1;
l4=si0;
si0=l1;
si1=40U;
si0+=si1;
l1=si0;
si0=l3;
si1=-1U;
si0+=si1;
l3=si0;
if(si0){
goto L2;
}
}
L1:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+4U);
si0=!(si0);
if(si0){
goto L9;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
f15271(i,si0);
L9:;
L0:;
}

void f3504(rustpythonInstance*i,U32 l0) {
U32 l1=0;
U32 l2=0;
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
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
si0=l4;
si1=72U;
si0*=si1;
l1=si0;
si0=l4;
si1=1U;
si0+=si1;
l4=si0;
si0=l2;
si1=l1;
si0+=si1;
l1=si0;
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
si0=l1;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L28;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
f15271(i,si0);
L28:;
si0=l1;
si1=16U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
f3385(i,si0);
si0=l5;
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L29;
}
si0=l5;
si0=i32_load(&i->m0,(U64)si0);
f15271(i,si0);
L29:;
si0=l5;
si1=12U;
si0+=si1;
l6=si0;
f3385(i,si0);
si0=l5;
si1=16U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L30;
}
si0=l6;
si0=i32_load(&i->m0,(U64)si0);
f15271(i,si0);
L30:;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+36U);
l6=si0;
si0=!(si0);
if(si0){
goto L31;
}
si0=l6;
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L32;
}
si0=l6;
si0=i32_load(&i->m0,(U64)si0);
f15271(i,si0);
L32:;
si0=l6;
si0=i32_load(&i->m0,(U64)si0+20U);
l7=si0;
si0=!(si0);
if(si0){
goto L33;
}
si0=l7;
f3500(i,si0);
si0=l7;
f15271(i,si0);
L33:;
si0=l6;
si0=i32_load(&i->m0,(U64)si0+24U);
l7=si0;
si0=!(si0);
if(si0){
goto L34;
}
si0=l6;
si1=28U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L34;
}
si0=l7;
f15271(i,si0);
L34:;
si0=l6;
f15271(i,si0);
L31:;
si0=l5;
si1=24U;
si0+=si1;
l6=si0;
f3385(i,si0);
si0=l5;
si1=28U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L35;
}
si0=l6;
si0=i32_load(&i->m0,(U64)si0);
f15271(i,si0);
L35:;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+40U);
l6=si0;
si0=!(si0);
if(si0){
goto L36;
}
si0=l6;
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L37;
}
si0=l6;
si0=i32_load(&i->m0,(U64)si0);
f15271(i,si0);
L37:;
si0=l6;
si0=i32_load(&i->m0,(U64)si0+20U);
l7=si0;
si0=!(si0);
if(si0){
goto L38;
}
si0=l7;
f3500(i,si0);
si0=l7;
f15271(i,si0);
L38:;
si0=l6;
si0=i32_load(&i->m0,(U64)si0+24U);
l7=si0;
si0=!(si0);
if(si0){
goto L39;
}
si0=l6;
si1=28U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L39;
}
si0=l7;
f15271(i,si0);
L39:;
si0=l6;
f15271(i,si0);
L36:;
si0=l5;
f15271(i,si0);
si0=l1;
si1=28U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si0=!(si0);
if(si0){
goto L40;
}
si0=l1;
si1=20U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
L41:;
{
si0=l5;
f3370(i,si0);
si0=l5;
si1=72U;
si0+=si1;
l5=si0;
si0=l6;
si1=-1U;
si0+=si1;
l6=si0;
if(si0){
goto L41;
}
}
L40:;
si0=l1;
si1=24U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L42;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+20U);
f15271(i,si0);
L42:;
si0=l1;
si1=40U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si0=!(si0);
if(si0){
goto L43;
}
si0=l1;
si1=32U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
L44:;
{
si0=l5;
f3361(i,si0);
si0=l5;
si1=48U;
si0+=si1;
l5=si0;
si0=l6;
si1=-1U;
si0+=si1;
l6=si0;
if(si0){
goto L44;
}
}
L43:;
si0=l1;
si1=36U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L45;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+32U);
f15271(i,si0);
L45:;
si0=l1;
si1=52U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si0=!(si0);
if(si0){
goto L46;
}
si0=l5;
f3500(i,si0);
si0=l5;
f15271(i,si0);
L46:;
si0=l1;
si1=56U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si0=!(si0);
if(si0){
goto L3;
}
si0=l1;
si1=60U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L3;
}
si0=l5;
f15271(i,si0);
goto L3;
L26:;
si0=l1;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L47;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
f15271(i,si0);
L47:;
si0=l1;
si1=16U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
f3385(i,si0);
si0=l5;
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L48;
}
si0=l5;
si0=i32_load(&i->m0,(U64)si0);
f15271(i,si0);
L48:;
si0=l5;
si1=12U;
si0+=si1;
l6=si0;
f3385(i,si0);
si0=l5;
si1=16U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L49;
}
si0=l6;
si0=i32_load(&i->m0,(U64)si0);
f15271(i,si0);
L49:;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+36U);
l6=si0;
si0=!(si0);
if(si0){
goto L50;
}
si0=l6;
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L51;
}
si0=l6;
si0=i32_load(&i->m0,(U64)si0);
f15271(i,si0);
L51:;
si0=l6;
si0=i32_load(&i->m0,(U64)si0+20U);
l7=si0;
si0=!(si0);
if(si0){
goto L52;
}
si0=l7;
f3500(i,si0);
si0=l7;
f15271(i,si0);
L52:;
si0=l6;
si0=i32_load(&i->m0,(U64)si0+24U);
l7=si0;
si0=!(si0);
if(si0){
goto L53;
}
si0=l6;
si1=28U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L53;
}
si0=l7;
f15271(i,si0);
L53:;
si0=l6;
f15271(i,si0);
L50:;
si0=l5;
si1=24U;
si0+=si1;
l6=si0;
f3385(i,si0);
si0=l5;
si1=28U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L54;
}
si0=l6;
si0=i32_load(&i->m0,(U64)si0);
f15271(i,si0);
L54:;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+40U);
l6=si0;
si0=!(si0);
if(si0){
goto L55;
}
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
si0=l6;
si0=i32_load(&i->m0,(U64)si0+20U);
l7=si0;
si0=!(si0);
if(si0){
goto L57;
}
si0=l7;
f3500(i,si0);
si0=l7;
f15271(i,si0);
L57:;
si0=l6;
si0=i32_load(&i->m0,(U64)si0+24U);
l7=si0;
si0=!(si0);
if(si0){
goto L58;
}
si0=l6;
si1=28U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L58;
}
si0=l7;
f15271(i,si0);
L58:;
si0=l6;
f15271(i,si0);
L55:;
si0=l5;
f15271(i,si0);
si0=l1;
si1=28U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si0=!(si0);
if(si0){
goto L59;
}
si0=l1;
si1=20U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
L60:;
{
si0=l5;
f3370(i,si0);
si0=l5;
si1=72U;
si0+=si1;
l5=si0;
si0=l6;
si1=-1U;
si0+=si1;
l6=si0;
if(si0){
goto L60;
}
}
L59:;
si0=l1;
si1=24U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L61;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+20U);
f15271(i,si0);
L61:;
si0=l1;
si1=40U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si0=!(si0);
if(si0){
goto L62;
}
si0=l1;
si1=32U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
L63:;
{
si0=l5;
f3361(i,si0);
si0=l5;
si1=48U;
si0+=si1;
l5=si0;
si0=l6;
si1=-1U;
si0+=si1;
l6=si0;
if(si0){
goto L63;
}
}
L62:;
si0=l1;
si1=36U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L64;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+32U);
f15271(i,si0);
L64:;
si0=l1;
si1=52U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si0=!(si0);
if(si0){
goto L65;
}
si0=l5;
f3500(i,si0);
si0=l5;
f15271(i,si0);
L65:;
si0=l1;
si1=56U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si0=!(si0);
if(si0){
goto L3;
}
si0=l1;
si1=60U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L3;
}
si0=l5;
f15271(i,si0);
goto L3;
L25:;
si0=l1;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L66;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
f15271(i,si0);
L66:;
si0=l1;
si1=24U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si0=!(si0);
if(si0){
goto L67;
}
si0=l1;
si1=16U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
L68:;
{
si0=l5;
f3361(i,si0);
si0=l5;
si1=48U;
si0+=si1;
l5=si0;
si0=l6;
si1=-1U;
si0+=si1;
l6=si0;
if(si0){
goto L68;
}
}
L67:;
si0=l1;
si1=20U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L69;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+16U);
f15271(i,si0);
L69:;
si0=l1;
si1=36U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si0=!(si0);
if(si0){
goto L70;
}
si0=l1;
si1=28U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
L71:;
{
si0=l5;
si1=56U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
si0=!(si0);
if(si0){
goto L72;
}
si0=l5;
si1=60U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L72;
}
si0=l7;
f15271(i,si0);
L72:;
si0=l5;
f3361(i,si0);
si0=l5;
si1=72U;
si0+=si1;
l5=si0;
si0=l6;
si1=-1U;
si0+=si1;
l6=si0;
if(si0){
goto L71;
}
}
L70:;
si0=l1;
si1=32U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L73;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+28U);
f15271(i,si0);
L73:;
si0=l1;
si1=48U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si0=!(si0);
if(si0){
goto L74;
}
si0=l1;
si1=40U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
L75:;
{
si0=l5;
f3370(i,si0);
si0=l5;
si1=72U;
si0+=si1;
l5=si0;
si0=l6;
si1=-1U;
si0+=si1;
l6=si0;
if(si0){
goto L75;
}
}
L74:;
si0=l1;
si1=44U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L76;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+40U);
f15271(i,si0);
L76:;
si0=l1;
si1=60U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si0=!(si0);
if(si0){
goto L77;
}
si0=l1;
si1=52U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
L78:;
{
si0=l5;
f3361(i,si0);
si0=l5;
si1=48U;
si0+=si1;
l5=si0;
si0=l6;
si1=-1U;
si0+=si1;
l6=si0;
if(si0){
goto L78;
}
}
L77:;
si0=l1;
si1=56U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L3;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+52U);
f15271(i,si0);
goto L3;
L24:;
si0=l1;
si1=12U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si0=!(si0);
if(si0){
goto L3;
}
si0=l1;
f3500(i,si0);
si0=l1;
f15271(i,si0);
goto L3;
L23:;
si0=l1;
si1=12U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si0=!(si0);
if(si0){
goto L79;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
l5=si0;
L80:;
{
si0=l5;
f3361(i,si0);
si0=l5;
si1=48U;
si0+=si1;
l5=si0;
si0=l6;
si1=-1U;
si0+=si1;
l6=si0;
if(si0){
goto L80;
}
}
L79:;
si0=l1;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L3;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
f15271(i,si0);
goto L3;
L22:;
si0=l1;
si1=12U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si0=!(si0);
if(si0){
goto L81;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
l5=si0;
L82:;
{
si0=l5;
f3361(i,si0);
si0=l5;
si1=48U;
si0+=si1;
l5=si0;
si0=l6;
si1=-1U;
si0+=si1;
l6=si0;
if(si0){
goto L82;
}
}
L81:;
si0=l1;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L83;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
f15271(i,si0);
L83:;
si0=l1;
si1=16U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
f3500(i,si0);
si0=l5;
f15271(i,si0);
si0=l1;
si1=28U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si0=!(si0);
if(si0){
goto L3;
}
si0=l1;
si1=32U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L3;
}
si0=l5;
f15271(i,si0);
goto L3;
L21:;
si0=l1;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si0=l1;
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
f3500(i,si0);
si0=l1;
f15271(i,si0);
si0=l5;
f3500(i,si0);
si0=l5;
f15271(i,si0);
goto L3;
L20:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
l5=si0;
f3500(i,si0);
si0=l5;
f15271(i,si0);
si0=l1;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
f3500(i,si0);
si0=l5;
f15271(i,si0);
si0=l1;
si1=20U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si0=!(si0);
if(si0){
goto L3;
}
si0=l1;
f3500(i,si0);
si0=l1;
f15271(i,si0);
goto L3;
L19:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
l5=si0;
f3500(i,si0);
si0=l5;
f15271(i,si0);
si0=l1;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
f3500(i,si0);
si0=l5;
f15271(i,si0);
si0=l1;
si1=20U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si0=!(si0);
if(si0){
goto L84;
}
si0=l1;
si1=12U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
L85:;
{
si0=l5;
f3370(i,si0);
si0=l5;
si1=72U;
si0+=si1;
l5=si0;
si0=l6;
si1=-1U;
si0+=si1;
l6=si0;
if(si0){
goto L85;
}
}
L84:;
si0=l1;
si1=16U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L86;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+12U);
f15271(i,si0);
L86:;
si0=l1;
si1=32U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si0=!(si0);
if(si0){
goto L87;
}
si0=l1;
si1=24U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
L88:;
{
si0=l5;
f3370(i,si0);
si0=l5;
si1=72U;
si0+=si1;
l5=si0;
si0=l6;
si1=-1U;
si0+=si1;
l6=si0;
if(si0){
goto L88;
}
}
L87:;
si0=l1;
si1=28U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L89;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+24U);
f15271(i,si0);
L89:;
si0=l1;
si1=44U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si0=!(si0);
if(si0){
goto L3;
}
si0=l1;
si1=48U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L3;
}
si0=l5;
f15271(i,si0);
goto L3;
L18:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
l5=si0;
f3500(i,si0);
si0=l5;
f15271(i,si0);
si0=l1;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
f3500(i,si0);
si0=l5;
f15271(i,si0);
si0=l1;
si1=20U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si0=!(si0);
if(si0){
goto L90;
}
si0=l1;
si1=12U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
L91:;
{
si0=l5;
f3370(i,si0);
si0=l5;
si1=72U;
si0+=si1;
l5=si0;
si0=l6;
si1=-1U;
si0+=si1;
l6=si0;
if(si0){
goto L91;
}
}
L90:;
si0=l1;
si1=16U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L92;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+12U);
f15271(i,si0);
L92:;
si0=l1;
si1=32U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si0=!(si0);
if(si0){
goto L93;
}
si0=l1;
si1=24U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
L94:;
{
si0=l5;
f3370(i,si0);
si0=l5;
si1=72U;
si0+=si1;
l5=si0;
si0=l6;
si1=-1U;
si0+=si1;
l6=si0;
if(si0){
goto L94;
}
}
L93:;
si0=l1;
si1=28U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L95;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+24U);
f15271(i,si0);
L95:;
si0=l1;
si1=44U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si0=!(si0);
if(si0){
goto L3;
}
si0=l1;
si1=48U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L3;
}
si0=l5;
f15271(i,si0);
goto L3;
L17:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
l5=si0;
f3500(i,si0);
si0=l5;
f15271(i,si0);
si0=l1;
si1=16U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si0=!(si0);
if(si0){
goto L96;
}
si0=l1;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
L97:;
{
si0=l5;
f3370(i,si0);
si0=l5;
si1=72U;
si0+=si1;
l5=si0;
si0=l6;
si1=-1U;
si0+=si1;
l6=si0;
if(si0){
goto L97;
}
}
L96:;
si0=l1;
si1=12U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L98;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+8U);
f15271(i,si0);
L98:;
si0=l1;
si1=28U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si0=!(si0);
if(si0){
goto L99;
}
si0=l1;
si1=20U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
L100:;
{
si0=l5;
f3370(i,si0);
si0=l5;
si1=72U;
si0+=si1;
l5=si0;
si0=l6;
si1=-1U;
si0+=si1;
l6=si0;
if(si0){
goto L100;
}
}
L99:;
si0=l1;
si1=24U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L3;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+20U);
f15271(i,si0);
goto L3;
L16:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
l5=si0;
f3500(i,si0);
si0=l5;
f15271(i,si0);
si0=l1;
si1=16U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si0=!(si0);
if(si0){
goto L101;
}
si0=l1;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
L102:;
{
si0=l5;
f3370(i,si0);
si0=l5;
si1=72U;
si0+=si1;
l5=si0;
si0=l6;
si1=-1U;
si0+=si1;
l6=si0;
if(si0){
goto L102;
}
}
L101:;
si0=l1;
si1=12U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L103;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+8U);
f15271(i,si0);
L103:;
si0=l1;
si1=28U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si0=!(si0);
if(si0){
goto L104;
}
si0=l1;
si1=20U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
L105:;
{
si0=l5;
f3370(i,si0);
si0=l5;
si1=72U;
si0+=si1;
l5=si0;
si0=l6;
si1=-1U;
si0+=si1;
l6=si0;
if(si0){
goto L105;
}
}
L104:;
si0=l1;
si1=24U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L3;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+20U);
f15271(i,si0);
goto L3;
L15:;
si0=l1;
si1=12U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
si0=!(si0);
if(si0){
goto L106;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
l5=si0;
L107:;
{
si0=l5;
f3361(i,si0);
si0=l5;
si1=48U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si0=!(si0);
if(si0){
goto L108;
}
si0=l6;
f3361(i,si0);
si0=l6;
f15271(i,si0);
L108:;
si0=l5;
si1=56U;
si0+=si1;
l5=si0;
si0=l7;
si1=-1U;
si0+=si1;
l7=si0;
if(si0){
goto L107;
}
}
L106:;
si0=l1;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L109;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
f15271(i,si0);
L109:;
si0=l1;
si1=24U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si0=!(si0);
if(si0){
goto L110;
}
si0=l1;
si1=16U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
L111:;
{
si0=l5;
f3370(i,si0);
si0=l5;
si1=72U;
si0+=si1;
l5=si0;
si0=l6;
si1=-1U;
si0+=si1;
l6=si0;
if(si0){
goto L111;
}
}
L110:;
si0=l1;
si1=20U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L112;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+16U);
f15271(i,si0);
L112:;
si0=l1;
si1=36U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si0=!(si0);
if(si0){
goto L3;
}
si0=l1;
si1=40U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L3;
}
si0=l5;
f15271(i,si0);
goto L3;
L14:;
si0=l1;
si1=12U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
si0=!(si0);
if(si0){
goto L113;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
l5=si0;
L114:;
{
si0=l5;
f3361(i,si0);
si0=l5;
si1=48U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si0=!(si0);
if(si0){
goto L115;
}
si0=l6;
f3361(i,si0);
si0=l6;
f15271(i,si0);
L115:;
si0=l5;
si1=56U;
si0+=si1;
l5=si0;
si0=l7;
si1=-1U;
si0+=si1;
l7=si0;
if(si0){
goto L114;
}
}
L113:;
si0=l1;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L116;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
f15271(i,si0);
L116:;
si0=l1;
si1=24U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si0=!(si0);
if(si0){
goto L117;
}
si0=l1;
si1=16U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
L118:;
{
si0=l5;
f3370(i,si0);
si0=l5;
si1=72U;
si0+=si1;
l5=si0;
si0=l6;
si1=-1U;
si0+=si1;
l6=si0;
if(si0){
goto L118;
}
}
L117:;
si0=l1;
si1=20U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L119;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+16U);
f15271(i,si0);
L119:;
si0=l1;
si1=36U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si0=!(si0);
if(si0){
goto L3;
}
si0=l1;
si1=40U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L3;
}
si0=l5;
f15271(i,si0);
goto L3;
L13:;
si0=l1;
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
f3500(i,si0);
si0=l5;
f15271(i,si0);
si0=l1;
si1=8U;
si0+=si1;
l5=si0;
f3380(i,si0);
si0=l1;
si1=12U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L3;
}
si0=l5;
si0=i32_load(&i->m0,(U64)si0);
f15271(i,si0);
goto L3;
L12:;
si0=l1;
si1=16U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si0=l1;
si1=12U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si0=!(si0);
if(si0){
goto L120;
}
si0=l1;
f3500(i,si0);
si0=l1;
f15271(i,si0);
L120:;
si0=l5;
si0=!(si0);
if(si0){
goto L3;
}
si0=l5;
f3500(i,si0);
si0=l5;
f15271(i,si0);
goto L3;
L11:;
si0=l1;
si1=12U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si0=!(si0);
if(si0){
goto L121;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
l5=si0;
L122:;
{
si0=l5;
f3370(i,si0);
si0=l5;
si1=72U;
si0+=si1;
l5=si0;
si0=l6;
si1=-1U;
si0+=si1;
l6=si0;
if(si0){
goto L122;
}
}
L121:;
si0=l1;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L123;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
f15271(i,si0);
L123:;
si0=l1;
si1=16U;
si0+=si1;
l5=si0;
f3379(i,si0);
si0=l1;
si1=20U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L124;
}
si0=l5;
si0=i32_load(&i->m0,(U64)si0);
f15271(i,si0);
L124:;
si0=l1;
si1=36U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si0=!(si0);
if(si0){
goto L125;
}
si0=l1;
si1=28U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
L126:;
{
si0=l5;
f3370(i,si0);
si0=l5;
si1=72U;
si0+=si1;
l5=si0;
si0=l6;
si1=-1U;
si0+=si1;
l6=si0;
if(si0){
goto L126;
}
}
L125:;
si0=l1;
si1=32U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L127;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+28U);
f15271(i,si0);
L127:;
si0=l1;
si1=48U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si0=!(si0);
if(si0){
goto L128;
}
si0=l1;
si1=40U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
L129:;
{
si0=l5;
f3370(i,si0);
si0=l5;
si1=72U;
si0+=si1;
l5=si0;
si0=l6;
si1=-1U;
si0+=si1;
l6=si0;
if(si0){
goto L129;
}
}
L128:;
si0=l1;
si1=44U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L3;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+40U);
f15271(i,si0);
goto L3;
L10:;
si0=l1;
si1=12U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si0=!(si0);
if(si0){
goto L130;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
l5=si0;
L131:;
{
si0=l5;
f3370(i,si0);
si0=l5;
si1=72U;
si0+=si1;
l5=si0;
si0=l6;
si1=-1U;
si0+=si1;
l6=si0;
if(si0){
goto L131;
}
}
L130:;
si0=l1;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L132;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
f15271(i,si0);
L132:;
si0=l1;
si1=16U;
si0+=si1;
l5=si0;
f3379(i,si0);
si0=l1;
si1=20U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L133;
}
si0=l5;
si0=i32_load(&i->m0,(U64)si0);
f15271(i,si0);
L133:;
si0=l1;
si1=36U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si0=!(si0);
if(si0){
goto L134;
}
si0=l1;
si1=28U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
L135:;
{
si0=l5;
f3370(i,si0);
si0=l5;
si1=72U;
si0+=si1;
l5=si0;
si0=l6;
si1=-1U;
si0+=si1;
l6=si0;
if(si0){
goto L135;
}
}
L134:;
si0=l1;
si1=32U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L136;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+28U);
f15271(i,si0);
L136:;
si0=l1;
si1=48U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si0=!(si0);
if(si0){
goto L137;
}
si0=l1;
si1=40U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
L138:;
{
si0=l5;
f3370(i,si0);
si0=l5;
si1=72U;
si0+=si1;
l5=si0;
si0=l6;
si1=-1U;
si0+=si1;
l6=si0;
if(si0){
goto L138;
}
}
L137:;
si0=l1;
si1=44U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L3;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+40U);
f15271(i,si0);
goto L3;
L9:;
si0=l1;
si1=16U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si0=l1;
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
f3500(i,si0);
si0=l1;
f15271(i,si0);
si0=l5;
si0=!(si0);
if(si0){
goto L3;
}
si0=l5;
f3500(i,si0);
si0=l5;
f15271(i,si0);
goto L3;
L8:;
si0=l1;
si1=12U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si0=!(si0);
if(si0){
goto L139;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
l5=si0;
L140:;
{
si0=l5;
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L141;
}
si0=l5;
si0=i32_load(&i->m0,(U64)si0);
f15271(i,si0);
L141:;
si0=l5;
si1=20U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
si0=!(si0);
if(si0){
goto L142;
}
si0=l5;
si1=24U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L142;
}
si0=l7;
f15271(i,si0);
L142:;
si0=l5;
si1=32U;
si0+=si1;
l5=si0;
si0=l6;
si1=-1U;
si0+=si1;
l6=si0;
if(si0){
goto L140;
}
}
L139:;
si0=l1;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L3;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
f15271(i,si0);
goto L3;
L7:;
si0=l1;
si1=32U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si0=!(si0);
if(si0){
goto L143;
}
si0=l1;
si1=36U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L143;
}
si0=l5;
f15271(i,si0);
L143:;
si0=l1;
si1=20U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si0=!(si0);
if(si0){
goto L144;
}
si0=l1;
si1=12U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
L145:;
{
si0=l5;
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L146;
}
si0=l5;
si0=i32_load(&i->m0,(U64)si0);
f15271(i,si0);
L146:;
si0=l5;
si1=20U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
si0=!(si0);
if(si0){
goto L147;
}
si0=l5;
si1=24U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L147;
}
si0=l7;
f15271(i,si0);
L147:;
si0=l5;
si1=32U;
si0+=si1;
l5=si0;
si0=l6;
si1=-1U;
si0+=si1;
l6=si0;
if(si0){
goto L145;
}
}
L144:;
si0=l1;
si1=16U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L3;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+12U);
f15271(i,si0);
goto L3;
L6:;
si0=l1;
si1=12U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si0=!(si0);
if(si0){
goto L148;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
l5=si0;
L149:;
{
si0=l5;
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L150;
}
si0=l5;
si0=i32_load(&i->m0,(U64)si0);
f15271(i,si0);
L150:;
si0=l5;
si1=12U;
si0+=si1;
l5=si0;
si0=l6;
si1=-1U;
si0+=si1;
l6=si0;
if(si0){
goto L149;
}
}
L148:;
si0=l1;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L3;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
f15271(i,si0);
goto L3;
L5:;
si0=l1;
si1=12U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si0=!(si0);
if(si0){
goto L151;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
l5=si0;
L152:;
{
si0=l5;
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L153;
}
si0=l5;
si0=i32_load(&i->m0,(U64)si0);
f15271(i,si0);
L153:;
si0=l5;
si1=12U;
si0+=si1;
l5=si0;
si0=l6;
si1=-1U;
si0+=si1;
l6=si0;
if(si0){
goto L152;
}
}
L151:;
si0=l1;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L3;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
f15271(i,si0);
goto L3;
L4:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
l1=si0;
f3500(i,si0);
si0=l1;
f15271(i,si0);
L3:;
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
goto L154;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
f15271(i,si0);
L154:;
L0:;
}

U32 f3505(rustpythonInstance*i,U32 l0,U32 l1) {
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

U32 f3506(rustpythonInstance*i,U32 l0,U32 l1) {
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

U32 f3507(rustpythonInstance*i,U32 l0,U32 l1) {
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
if(si0){
goto L2;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=1542532U;
si2=4U;
si3=l1;
si4=24U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si3=i32_load(&i->m0,(U64)si3+12U);
si0=TF(i->t0,si3,U32 (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
l1=si0;
goto L1;
L2:;
si0=l2;
si1=l0;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l2;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+20U);
si2=1542536U;
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
si2=1542540U;
si0=f716(i,si0,si1,si2);
si0=l2;
si0=i32_load8_u(&i->m0,(U64)si0+24U);
l0=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+16U);
l3=si0;
if(si0){
goto L3;
}
si0=l0;
si1=255U;
si0&=si1;
si1=0U;
si0=si0 != si1;
l1=si0;
goto L1;
L3:;
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
if(si0){
goto L1;
}
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
L1:;
si0=l2;
si1=32U;
si0+=si1;
i->g0=si0;
si0=l1;
L0:;
return si0;
}

U32 f3508(rustpythonInstance*i,U32 l0,U32 l1) {
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

U32 f3509(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 si0,si1,si2,si3;
U64 sj1;
si0=i->g0;
si1=32U;
si0-=si1;
l2=si0;
i->g0=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
l0=si0;
si0=l2;
si1=3U;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l2;
si1=l0;
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
si1=24U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l0=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+20U);
l1=si0;
si0=l2;
sj1=1ULL;
i64_store(&i->m0,(U64)si0+20U,sj1);
si0=l2;
si1=1U;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l2;
si1=1283292U;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l2;
si1=l2;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l1;
si1=l0;
si2=l2;
si3=8U;
si2+=si3;
si0=f690(i,si0,si1,si2);
l1=si0;
si0=l2;
si1=32U;
si0+=si1;
i->g0=si0;
si0=l1;
L0:;
return si0;
}

U32 f3510(rustpythonInstance*i,U32 l0,U32 l1) {
U32 si0,si1;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
si1=l1;
si0=f750(i,si0,si1);
L0:;
return si0;
}

U32 f3511(rustpythonInstance*i,U32 l0,U32 l1) {
U32 si0,si1;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
si1=l1;
si0=f751(i,si0,si1);
L0:;
return si0;
}

U32 f3512(rustpythonInstance*i,U32 l0,U32 l1) {
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

U32 f3513(rustpythonInstance*i,U32 l0,U32 l1) {
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

void f3514(rustpythonInstance*i,U32 l0) {
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
f3514(i,si0);
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
f3514(i,si0);
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
f3514(i,si0);
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
f3361(i,si0);
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
f3514(i,si0);
si0=l2;
f15271(i,si0);
si0=l0;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
f3514(i,si0);
si0=l2;
f15271(i,si0);
goto L0;
L25:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+4U);
l2=si0;
f3514(i,si0);
si0=l2;
f15271(i,si0);
si0=l0;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
f3514(i,si0);
si0=l2;
f15271(i,si0);
goto L0;
L24:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+4U);
l2=si0;
f3514(i,si0);
si0=l2;
f15271(i,si0);
goto L0;
L23:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+4U);
l2=si0;
f3385(i,si0);
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
f3385(i,si0);
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
f3515(i,si0);
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
f3385(i,si0);
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
f3515(i,si0);
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
f3514(i,si0);
si0=l2;
f15271(i,si0);
goto L0;
L22:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+4U);
l2=si0;
f3514(i,si0);
si0=l2;
f15271(i,si0);
si0=l0;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
f3514(i,si0);
si0=l2;
f15271(i,si0);
si0=l0;
si1=12U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
f3514(i,si0);
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
f3361(i,si0);
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
f3361(i,si0);
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
f3361(i,si0);
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
f3514(i,si0);
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
f3361(i,si0);
si0=l2;
si1=48U;
si0+=si1;
f3361(i,si0);
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
f3361(i,si0);
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
f3514(i,si0);
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
f3361(i,si0);
si0=l2;
si1=48U;
si0+=si1;
f3361(i,si0);
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
f3361(i,si0);
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
f3514(i,si0);
si0=l2;
f15271(i,si0);
si0=l0;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
f3514(i,si0);
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
f3361(i,si0);
si0=l2;
si1=48U;
si0+=si1;
f3361(i,si0);
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
f3361(i,si0);
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
f3514(i,si0);
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
f3361(i,si0);
si0=l2;
si1=48U;
si0+=si1;
f3361(i,si0);
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
f3361(i,si0);
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
f3514(i,si0);
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
f3514(i,si0);
si0=l2;
f15271(i,si0);
goto L0;
L13:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+4U);
l2=si0;
f3514(i,si0);
si0=l2;
f15271(i,si0);
goto L0;
L12:;
si0=l0;
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
f3514(i,si0);
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
f3361(i,si0);
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
f3514(i,si0);
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
f3361(i,si0);
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
f3361(i,si0);
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
f3514(i,si0);
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
f3514(i,si0);
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
f3361(i,si0);
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
f3373(i,si0);
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
f3514(i,si0);
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
f3514(i,si0);
si0=l2;
f15271(i,si0);
si0=l0;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
f3514(i,si0);
si0=l2;
f15271(i,si0);
goto L0;
L5:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+4U);
l2=si0;
f3514(i,si0);
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
f3361(i,si0);
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
f3361(i,si0);
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

void f3515(rustpythonInstance*i,U32 l0) {
U32 si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
l0=si0;
f3514(i,si0);
si0=l0;
f15271(i,si0);
L0:;
}

void f3516(rustpythonInstance*i,U32 l0) {
U32 l1=0;
U32 l2=0;
U32 si0,si1,si2,si3;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
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
si0=l0;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L1;
}
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
if(si0){
goto L2;
}
goto L1;
L3:;
si0=l0;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L1;
}
L2:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+4U);
f15271(i,si0);
L1:;
L0:;
}

void f3517(rustpythonInstance*i,U32 l0) {
L0:;
}

U32 f3518(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 l3=0;
U32 l4=0;
U32 si0,si1;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si1=1114112U;
si0=si0 != si1;
if(si0){
goto L3;
}
si0=0U;
l4=si0;
si0=l2;
si1=1114112U;
si0=si0 == si1;
if(si0){
goto L2;
}
goto L1;
L3:;
si0=0U;
l4=si0;
si0=l2;
si1=1114112U;
si0=si0 == si1;
if(si0){
goto L1;
}
si0=l3;
si1=l2;
si0=si0 != si1;
if(si0){
goto L1;
}
L2:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
l1=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+4U);
l0=si0;
si1=1114112U;
si0=si0 == si1;
if(si0){
goto L5;
}
si0=0U;
l4=si0;
si0=l1;
si1=1114112U;
si0=si0 == si1;
if(si0){
goto L1;
}
si0=l0;
si1=l1;
si0=si0 == si1;
if(si0){
goto L4;
}
goto L1;
L5:;
si0=0U;
l4=si0;
si0=l1;
si1=1114112U;
si0=si0 != si1;
if(si0){
goto L1;
}
L4:;
si0=1U;
l4=si0;
L1:;
si0=l4;
L0:;
return si0;
}

void f3519(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 l8=0;
U32 l9=0;
U32 l10=0;
U32 l11=0;
U64 l12=0;
U32 si0,si1,si2;
U64 sj0,sj1;
si0=i->g0;
si1=32U;
si0-=si1;
l4=si0;
i->g0=si0;
si0=l3;
if(si0){
goto L6;
}
si0=1U;
l5=si0;
goto L5;
L6:;
si0=l3;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L4;
}
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=l3;
si0=f15269(i,si0);
l5=si0;
si0=!(si0);
if(si0){
goto L3;
}
L5:;
si0=l5;
si1=l2;
si2=l3;
si0=f15390(i,si0,si1,si2);
l5=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
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
default:
goto L16;
}
L16:;
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l5;
i32_store(&i->m0,(U64)si0+40U,si1);
si0=l0;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+4U);
i32_store(&i->m0,(U64)si0+52U,si1);
si0=l0;
si1=48U;
si0+=si1;
si1=l3;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=44U;
si0+=si1;
si1=l3;
i32_store(&i->m0,(U64)si0,si1);
goto L1;
L15:;
si0=l1;
si1=12U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+8U);
l7=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
l8=si0;
si0=l1;
si1=16U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si1=1U;
si0=si0 != si1;
if(si0){
goto L11;
}
si0=0U;
l1=si0;
si0=l7;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=6U;
si0=si0 != si1;
if(si0){
goto L17;
}
si0=l7;
si0=i32_load(&i->m0,(U64)si0);
si1=1542556U;
si2=6U;
si0=f15389(i,si0,si1,si2);
if(si0){
goto L17;
}
si0=l0;
si1=3U;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=4U;
l1=si0;
L17:;
si0=l0;
si1=l8;
i32_store(&i->m0,(U64)si0+52U,si1);
si0=l0;
si1=l1;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l5;
i32_store(&i->m0,(U64)si0+40U,si1);
si0=l0;
si1=48U;
si0+=si1;
si1=l3;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=44U;
si0+=si1;
si1=l3;
i32_store(&i->m0,(U64)si0,si1);
goto L10;
L14:;
si0=1U;
l7=si0;
si0=l1;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l9=si0;
si0=l1;
si1=40U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l10=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
l6=si0;
si0=l1;
si1=12U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si1=1U;
si0=si0 == si1;
if(si0){
goto L8;
}
si0=0U;
l7=si0;
goto L7;
L13:;
si0=l1;
si1=32U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si0=l4;
si1=4U;
si0+=si1;
si1=12U;
si0+=si1;
si1=l1;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=4U;
si0+=si1;
si1=20U;
si0+=si1;
si1=l1;
si2=24U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=1U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l2;
i32_store(&i->m0,(U64)si0+52U,si1);
si0=l0;
si1=48U;
si0+=si1;
si1=l3;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=44U;
si0+=si1;
si1=l3;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l5;
i32_store(&i->m0,(U64)si0+40U,si1);
si0=l4;
si1=l1;
sj1=i64_load(&i->m0,(U64)si1+8U);
i64_store(&i->m0,(U64)si0+8U,sj1);
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
si2=4U;
si1+=si2;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=28U;
si0+=si1;
si1=l4;
si2=4U;
si1+=si2;
si2=24U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
goto L1;
L12:;
si0=l0;
si1=4U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l5;
i32_store(&i->m0,(U64)si0+40U,si1);
si0=l0;
si1=l1;
sj1=i64_load(&i->m0,(U64)si1+4U);
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l0;
si1=48U;
si0+=si1;
si1=l3;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=44U;
si0+=si1;
si1=l3;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=12U;
si0+=si1;
si1=l1;
si2=12U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=l1;
si2=20U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0+52U,si1);
goto L1;
L11:;
si0=l0;
si1=l8;
i32_store(&i->m0,(U64)si0+52U,si1);
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l5;
i32_store(&i->m0,(U64)si0+40U,si1);
si0=l0;
si1=48U;
si0+=si1;
si1=l3;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=44U;
si0+=si1;
si1=l3;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si0=!(si0);
if(si0){
goto L9;
}
L10:;
si0=l7;
l0=si0;
L18:;
{
si0=l0;
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L19;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
f15271(i,si0);
L19:;
si0=l0;
si1=12U;
si0+=si1;
l0=si0;
si0=l2;
si1=-1U;
si0+=si1;
l2=si0;
if(si0){
goto L18;
}
}
L9:;
si0=l6;
si0=!(si0);
if(si0){
goto L1;
}
si0=l7;
f15271(i,si0);
goto L1;
L8:;
si0=l6;
si0=i32_load(&i->m0,(U64)si0);
l11=si0;
si0=l6;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l8=si0;
si0=!(si0);
if(si0){
goto L20;
}
si0=l8;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L4;
}
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=l8;
si0=f15269(i,si0);
l7=si0;
si0=!(si0);
if(si0){
goto L2;
}
L20:;
si0=l7;
si1=l11;
si2=l8;
si0=f15390(i,si0,si1,si2);
si0=l8;
sj0=(U64)(si0);
l12=sj0;
sj1=32ULL;
sj0<<=(sj1&63);
sj1=l12;
sj0|=sj1;
l12=sj0;
L7:;
si0=l0;
si1=l10;
i32_store(&i->m0,(U64)si0+52U,si1);
si0=l0;
sj1=l12;
i64_store(&i->m0,(U64)si0+8U,sj1);
si0=l0;
si1=l7;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=3U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l5;
i32_store(&i->m0,(U64)si0+40U,si1);
si0=l0;
si1=l1;
si2=16U;
si1+=si2;
l1=si1;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+16U,sj1);
si0=l0;
si1=48U;
si0+=si1;
si1=l3;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=44U;
si0+=si1;
si1=l3;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=32U;
si0+=si1;
si1=l1;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=24U;
si0+=si1;
si1=l1;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si0=!(si0);
if(si0){
goto L21;
}
si0=l6;
l0=si0;
L22:;
{
si0=l0;
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L23;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
f15271(i,si0);
L23:;
si0=l0;
si1=12U;
si0+=si1;
l0=si0;
si0=l2;
si1=-1U;
si0+=si1;
l2=si0;
if(si0){
goto L22;
}
}
L21:;
si0=l9;
si0=!(si0);
if(si0){
goto L1;
}
si0=l6;
f15271(i,si0);
goto L1;
L4:;
f53(i);
UNREACHABLE;
L3:;
si0=1U;
si1=l3;
f52(i,si0,si1);
UNREACHABLE;
L2:;
si0=1U;
si1=l8;
f52(i,si0,si1);
UNREACHABLE;
L1:;
si0=l4;
si1=32U;
si0+=si1;
i->g0=si0;
L0:;
}

U32 f3520(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 l3=0;
U32 si0,si1,si2,si3;
U64 sj1;
si0=i->g0;
si1=48U;
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
goto L2;
case 4:
goto L3;
default:
goto L6;
}
L6:;
si0=l1;
si1=24U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l0=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+20U);
l1=si0;
si0=l2;
sj1=0ULL;
i64_store(&i->m0,(U64)si0+36U,sj1);
si0=l2;
si1=1542516U;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l2;
si1=1U;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l2;
si1=1542580U;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l1;
si1=l0;
si2=l2;
si3=24U;
si2+=si3;
si0=f690(i,si0,si1,si2);
l1=si0;
goto L1;
L5:;
si0=l2;
si1=l0;
si2=8U;
si1+=si2;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l2;
si1=805U;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l1;
si1=24U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l0=si0;
si0=l2;
si1=l2;
si2=12U;
si1+=si2;
i32_store(&i->m0,(U64)si0+16U,si1);
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
si1=1542612U;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l2;
si1=l2;
si2=16U;
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
L4:;
si0=l1;
si1=24U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l0=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+20U);
l1=si0;
si0=l2;
sj1=0ULL;
i64_store(&i->m0,(U64)si0+36U,sj1);
si0=l2;
si1=1542516U;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l2;
si1=1U;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l2;
si1=1542640U;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l1;
si1=l0;
si2=l2;
si3=24U;
si2+=si3;
si0=f690(i,si0,si1,si2);
l1=si0;
goto L1;
L3:;
si0=l2;
si1=l0;
si2=4U;
si1+=si2;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l2;
si1=828U;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l1;
si1=24U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l0=si0;
si0=l2;
si1=l2;
si2=12U;
si1+=si2;
i32_store(&i->m0,(U64)si0+16U,si1);
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
si1=1542760U;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l2;
si1=l2;
si2=16U;
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
si0=l2;
si1=l0;
si2=16U;
si1+=si2;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l0;
si0=i32_load(&i->m0,(U64)si0+16U);
si1=8U;
si0=si0 == si1;
if(si0){
goto L7;
}
si0=l0;
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=!(si0);
if(si0){
goto L9;
}
si0=l0;
si1=12U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=6U;
si0=si0 != si1;
if(si0){
goto L9;
}
si0=l3;
si1=1542556U;
si2=6U;
si0=f15389(i,si0,si1,si2);
si0=!(si0);
if(si0){
goto L8;
}
L9:;
si0=l2;
si1=829U;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l1;
si1=24U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l0=si0;
si0=l2;
si1=l2;
si2=12U;
si1+=si2;
i32_store(&i->m0,(U64)si0+16U,si1);
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
si1=1542688U;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l2;
si1=l2;
si2=16U;
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
L8:;
si0=l1;
si1=24U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l0=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+20U);
l1=si0;
si0=l2;
sj1=0ULL;
i64_store(&i->m0,(U64)si0+36U,sj1);
si0=l2;
si1=1542516U;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l2;
si1=1U;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l2;
si1=1542724U;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l1;
si1=l0;
si2=l2;
si3=24U;
si2+=si3;
si0=f690(i,si0,si1,si2);
l1=si0;
goto L1;
L7:;
si0=l1;
si1=24U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l0=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+20U);
l1=si0;
si0=l2;
sj1=0ULL;
i64_store(&i->m0,(U64)si0+36U,sj1);
si0=l2;
si1=1542516U;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l2;
si1=1U;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l2;
si1=1542752U;
i32_store(&i->m0,(U64)si0+24U,si1);
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

U32 f3521(rustpythonInstance*i,U32 l0) {
U32 l1=0;
U32 l2=0;
U32 l3=0;
U32 si0,si1,si2;
si0=0U;
l1=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
si1=-3U;
si0+=si1;
switch(si0){
case 0:
goto L5;
case 1:
goto L6;
default:
goto L4;
}
L6:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+4U);
si1=3U;
si0=si0 == si1;
goto L0;
L5:;
si0=1U;
l1=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+16U);
si1=8U;
si0=si0 == si1;
if(si0){
goto L4;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+4U);
l1=si0;
if(si0){
goto L8;
}
si0=0U;
l2=si0;
goto L7;
L8:;
si0=l0;
si1=12U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
if(si0){
goto L10;
}
si0=1U;
l2=si0;
goto L9;
L10:;
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
l2=si0;
si0=!(si0);
if(si0){
goto L2;
}
L9:;
si0=l2;
si1=l1;
si2=l3;
si0=f15390(i,si0,si1,si2);
L7:;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=6U;
si0=f15269(i,si0);
l0=si0;
si0=!(si0);
if(si0){
goto L1;
}
si0=l0;
si1=4U;
si0+=si1;
si1=0U;
si1=i32_load16_u(&i->m0,(U64)si1+1542560U);
i32_store16(&i->m0,(U64)si0,si1);
si0=l0;
si1=0U;
si1=i32_load(&i->m0,(U64)si1+1542556U);
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si0=!(si0);
if(si0){
goto L13;
}
si0=l3;
si1=6U;
si0=si0 != si1;
if(si0){
goto L12;
}
si0=l2;
si1=l0;
si2=6U;
si0=f15389(i,si0,si1,si2);
l1=si0;
si0=l0;
f15271(i,si0);
si0=l1;
si0=!(si0);
l1=si0;
goto L11;
L13:;
si0=l0;
f15271(i,si0);
si0=0U;
goto L0;
L12:;
si0=l0;
f15271(i,si0);
si0=0U;
l1=si0;
si0=l3;
si0=!(si0);
if(si0){
goto L4;
}
L11:;
si0=l2;
f15271(i,si0);
L4:;
si0=l1;
goto L0;
L3:;
f53(i);
UNREACHABLE;
L2:;
si0=1U;
si1=l3;
f52(i,si0,si1);
UNREACHABLE;
L1:;
si0=1U;
si1=6U;
f52(i,si0,si1);
UNREACHABLE;
L0:;
return si0;
}

U32 f3522(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 l3=0;
U32 si0,si1,si2,si3,si4,si5,si6;
si0=i->g0;
si1=32U;
si0-=si1;
l2=si0;
i->g0=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
switch(si0){
case 0:
goto L7;
case 1:
goto L6;
case 2:
goto L5;
case 3:
goto L4;
case 4:
goto L3;
default:
goto L7;
}
L7:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=1542768U;
si2=3U;
si3=l1;
si4=24U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si3=i32_load(&i->m0,(U64)si3+12U);
si0=TF(i->t0,si3,U32 (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
l1=si0;
goto L1;
L6:;
si0=l2;
si1=l0;
si2=8U;
si1+=si2;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l2;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+20U);
si2=1542771U;
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
si2=1542516U;
si0=f716(i,si0,si1,si2);
si0=l2;
si0=i32_load8_u(&i->m0,(U64)si0+24U);
l0=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+16U);
l3=si0;
if(si0){
goto L8;
}
si0=l0;
si1=255U;
si0&=si1;
si1=0U;
si0=si0 != si1;
l1=si0;
goto L1;
L8:;
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
L5:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=1542781U;
si2=12U;
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
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l1;
si1=1542793U;
si2=17U;
si3=l0;
si4=16U;
si3+=si4;
si4=1542812U;
si5=l2;
si6=16U;
si5+=si6;
si6=1542828U;
si0=f746(i,si0,si1,si2,si3,si4,si5,si6);
l1=si0;
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
si2=1542844U;
si3=7U;
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
si2=1542852U;
si0=f716(i,si0,si1,si2);
si0=l2;
si0=i32_load8_u(&i->m0,(U64)si0+24U);
l0=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+16U);
l3=si0;
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
si0=l2;
si0=i32_load(&i->m0,(U64)si0+20U);
l0=si0;
si0=l3;
si1=1U;
si0=si0 != si1;
if(si0){
goto L10;
}
si0=l2;
si0=i32_load8_u(&i->m0,(U64)si0+25U);
si1=255U;
si0&=si1;
si0=!(si0);
if(si0){
goto L10;
}
si0=l0;
si0=i32_load8_u(&i->m0,(U64)si0+28U);
si1=4U;
si0&=si1;
if(si0){
goto L10;
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
L10:;
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

void f3523(rustpythonInstance*i,U32 l0,U32 l1) {
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
U64 l26=0;
U32 l27=0;
U32 si0,si1,si2,si3,si4,si5;
U64 sj0,sj1;
si0=i->g0;
si1=160U;
si0-=si1;
l2=si0;
i->g0=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si1=-99U;
si0+=si1;
switch(si0){
case 0:
goto L11;
case 1:
goto L10;
default:
goto L9;
}
L11:;
si0=l1;
si1=100U;
i32_store(&i->m0,(U64)si0,si1);
L10:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+32U);
si1=1114114U;
si0=si0 == si1;
l3=si0;
if(si0){
goto L3;
}
si0=0U;
si1=l1;
si2=32U;
si1+=si2;
si2=l3;
si0=si2?si0:si1;
l1=si0;
si1=0U;
i32_store(&i->m0,(U64)si0+72U,si1);
si0=l1;
si1=68U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=!(si0);
if(si0){
goto L13;
}
si0=l1;
si1=l3;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0+68U,si1);
si0=l1;
si1=64U;
si0+=si1;
l3=si0;
si1=l3;
si1=i32_load(&i->m0,(U64)si1);
l3=si1;
si2=1U;
si1+=si2;
l4=si1;
si2=0U;
si3=l1;
si4=60U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
l5=si3;
si4=l4;
si5=l5;
si4=si4 < si5;
si2=si4?si2:si3;
si1-=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
si1=56U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=l3;
si2=5U;
si1<<=(si2&31);
si0+=si1;
l5=si0;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si1=99U;
si0=si0 != si1;
if(si0){
goto L12;
}
L13:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
si1=1114113U;
si0=si0 == si1;
if(si0){
goto L6;
}
si0=l2;
si1=80U;
si0+=si1;
si1=l1;
f3434(i,si0,si1);
si0=0U;
si0=i32_load(&i->m0,(U64)si0+2967828U);
si1=4U;
si0=si0 > si1;
if(si0){
goto L8;
}
goto L7;
L12:;
si0=l5;
si1=28U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si0=l5;
si1=24U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
si0=l5;
si1=16U;
si0+=si1;
sj0=i64_load(&i->m0,(U64)si0);
l8=sj0;
si0=l5;
si1=12U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
si0=l5;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l9=si0;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+4U);
l5=si0;
goto L4;
L9:;
si0=l1;
si1=99U;
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+28U);
l6=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+24U);
l7=si0;
si0=l1;
sj0=i64_load(&i->m0,(U64)si0+16U);
l8=sj0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+12U);
l4=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+8U);
l9=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
l5=si0;
goto L2;
L8:;
si0=l2;
si1=48U;
si0+=si1;
si1=20U;
si0+=si1;
si1=740U;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=48U;
si0+=si1;
si1=12U;
si0+=si1;
si1=788U;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=16U;
si0+=si1;
si1=12U;
si0+=si1;
sj1=3ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=3U;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l2;
si1=1536240U;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l2;
si1=l1;
si2=20U;
si1+=si2;
i32_store(&i->m0,(U64)si0+64U,si1);
si0=l2;
si1=l1;
si2=44U;
si1+=si2;
i32_store(&i->m0,(U64)si0+56U,si1);
si0=l2;
si1=789U;
i32_store(&i->m0,(U64)si0+52U,si1);
si0=l2;
si1=l2;
si2=48U;
si1+=si2;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l2;
si1=l2;
si2=80U;
si1+=si2;
i32_store(&i->m0,(U64)si0+48U,si1);
si0=l2;
si1=16U;
si0+=si1;
si1=5U;
si2=1536288U;
si3=0U;
si4=l1;
f954(i,si0,si1,si2,si3,si4);
L7:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+80U);
l3=si0;
si1=10U;
si0=si0 != si1;
if(si0){
goto L5;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
si1=1114113U;
si0=si0 == si1;
if(si0){
goto L14;
}
si0=l1;
si1=24U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L15;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+20U);
f15271(i,si0);
L15:;
si0=l1;
si1=40U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si0=!(si0);
if(si0){
goto L16;
}
si0=0U;
l4=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+32U);
l10=si0;
l3=si0;
L17:;
{
si0=l10;
si1=l4;
si2=5U;
si1<<=(si2&31);
si0+=si1;
l6=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
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
goto L23;
case 1:
goto L22;
case 2:
goto L18;
case 3:
goto L18;
case 4:
goto L21;
default:
goto L18;
}
L23:;
si0=l3;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L18;
}
si0=l3;
si1=4U;
si0+=si1;
l9=si0;
goto L19;
L22:;
si0=l7;
si0=!(si0);
if(si0){
goto L18;
}
si0=l3;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L20;
}
goto L18;
L21:;
si0=l3;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L18;
}
L20:;
si0=l6;
si1=4U;
si0+=si1;
l9=si0;
L19:;
si0=l9;
si0=i32_load(&i->m0,(U64)si0);
f15271(i,si0);
L18:;
si0=l4;
si1=1U;
si0+=si1;
l4=si0;
si0=l3;
si1=32U;
si0+=si1;
l3=si0;
si0=l5;
si1=-1U;
si0+=si1;
l5=si0;
if(si0){
goto L17;
}
}
L16:;
si0=l1;
si1=36U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L14;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+32U);
f15271(i,si0);
L14:;
si0=l1;
si1=1114113U;
i32_store(&i->m0,(U64)si0,si1);
L6:;
si0=l1;
si1=0U;
i32_store8(&i->m0,(U64)si0+76U,si1);
goto L3;
L5:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+108U);
l6=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+104U);
l7=si0;
si0=l2;
sj0=i64_load(&i->m0,(U64)si0+96U);
l8=sj0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+92U);
l4=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+88U);
l9=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+84U);
l5=si0;
L4:;
si0=l3;
si1=98U;
si0=si0 != si1;
if(si0){
goto L24;
}
si0=l1;
si1=0U;
i32_store8(&i->m0,(U64)si0+76U,si1);
si0=98U;
l3=si0;
goto L2;
L24:;
si0=l3;
si1=-2U;
si0+=si1;
l10=si0;
si1=1U;
si2=l10;
si3=96U;
si2=si2 < si3;
si0=si2?si0:si1;
l11=si0;
si1=-89U;
si0+=si1;
si1=1U;
si0=si0 > si1;
if(si0){
goto L26;
}
si0=l1;
si0=i32_load8_u(&i->m0,(U64)si0+76U);
si0=!(si0);
if(si0){
goto L33;
}
si0=l1;
si1=56U;
si0+=si1;
l12=si0;
si0=l2;
si1=48U;
si0+=si1;
si1=4U;
si0|=si1;
l13=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+72U);
l10=si0;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+68U);
l14=si1;
si0=si0 < si1;
if(si0){
goto L35;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
si1=1114113U;
si0=si0 == si1;
if(si0){
goto L28;
}
si0=l2;
si1=48U;
si0+=si1;
si1=l1;
f3435(i,si0,si1);
si0=0U;
l15=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+48U);
l14=si0;
si1=99U;
si0=si0 == si1;
if(si0){
goto L30;
}
si0=l2;
si1=16U;
si0+=si1;
si1=24U;
si0+=si1;
l16=si0;
si1=l13;
si2=24U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=16U;
si0+=si1;
si1=16U;
si0+=si1;
l17=si0;
si1=l13;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=16U;
si0+=si1;
si1=8U;
si0+=si1;
l18=si0;
si1=l13;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=l13;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+16U,sj1);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+68U);
l19=si0;
si1=l1;
si2=60U;
si1+=si2;
l20=si1;
si1=i32_load(&i->m0,(U64)si1);
l10=si1;
si0=si0 != si1;
if(si0){
goto L36;
}
si0=l12;
f3524(i,si0);
si0=l20;
si0=i32_load(&i->m0,(U64)si0);
l10=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+68U);
l19=si0;
L36:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+56U);
si1=l1;
si2=64U;
si1+=si2;
l20=si1;
si1=i32_load(&i->m0,(U64)si1);
si2=l19;
si1+=si2;
l19=si1;
si2=0U;
si3=l10;
si4=l19;
si5=l10;
si4=si4 < si5;
si2=si4?si2:si3;
si1-=si2;
si2=5U;
si1<<=(si2&31);
si0+=si1;
l10=si0;
si1=l2;
sj1=i64_load(&i->m0,(U64)si1+16U);
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l10;
si1=l14;
i32_store(&i->m0,(U64)si0,si1);
si0=l10;
si1=12U;
si0+=si1;
si1=l18;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l10;
si1=20U;
si0+=si1;
si1=l17;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l10;
si1=28U;
si0+=si1;
si1=l16;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+68U);
si2=1U;
si1+=si2;
l14=si1;
i32_store(&i->m0,(U64)si0+68U,si1);
si0=l14;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+72U);
l10=si1;
si0=si0 <= si1;
if(si0){
goto L31;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+56U);
l18=si0;
si1=l20;
si1=i32_load(&i->m0,(U64)si1);
l20=si1;
si2=l10;
si1+=si2;
l16=si1;
si2=0U;
si3=l1;
si4=60U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
l19=si3;
si4=l16;
si5=l19;
si4=si4 < si5;
si2=si4?si2:si3;
si1-=si2;
si2=5U;
si1<<=(si2&31);
si0+=si1;
l16=si0;
goto L34;
L35:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+56U);
l18=si0;
si1=l1;
si2=64U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
l20=si1;
si2=l10;
si1+=si2;
l16=si1;
si2=0U;
si3=l1;
si4=60U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
l19=si3;
si4=l16;
si5=l19;
si4=si4 < si5;
si2=si4?si2:si3;
si1-=si2;
si2=5U;
si1<<=(si2&31);
si0+=si1;
l16=si0;
L34:;
si0=l1;
si1=l10;
si2=1U;
si1+=si2;
l10=si1;
i32_store(&i->m0,(U64)si0+72U,si1);
si0=l16;
si0=i32_load(&i->m0,(U64)si0);
l16=si0;
si1=98U;
si0=si0 == si1;
if(si0){
goto L28;
}
si0=0U;
l21=si0;
si0=0U;
l22=si0;
si0=l16;
si1=-2U;
si0+=si1;
l16=si0;
si1=1U;
si2=l16;
si3=96U;
si2=si2 < si3;
si0=si2?si0:si1;
si1=-5U;
si0+=si1;
switch(si0){
case 0:
goto L28;
case 1:
goto L37;
case 2:
goto L37;
case 3:
goto L37;
case 4:
goto L39;
case 5:
goto L40;
case 6:
goto L39;
case 7:
goto L40;
case 8:
goto L37;
case 9:
goto L37;
case 10:
goto L37;
case 11:
goto L37;
case 12:
goto L37;
case 13:
goto L37;
case 14:
goto L37;
case 15:
goto L37;
case 16:
goto L37;
case 17:
goto L37;
case 18:
goto L37;
case 19:
goto L37;
case 20:
goto L37;
case 21:
goto L37;
case 22:
goto L39;
case 23:
goto L40;
case 24:
goto L37;
case 25:
goto L37;
case 26:
goto L37;
case 27:
goto L37;
case 28:
goto L37;
case 29:
goto L37;
case 30:
goto L37;
case 31:
goto L37;
case 32:
goto L37;
case 33:
goto L37;
case 34:
goto L37;
case 35:
goto L37;
case 36:
goto L37;
case 37:
goto L37;
case 38:
goto L37;
case 39:
goto L37;
case 40:
goto L37;
case 41:
goto L37;
case 42:
goto L37;
case 43:
goto L37;
case 44:
goto L37;
case 45:
goto L37;
case 46:
goto L37;
case 47:
goto L37;
case 48:
goto L37;
case 49:
goto L37;
case 50:
goto L37;
case 51:
goto L37;
case 52:
goto L37;
case 53:
goto L37;
case 54:
goto L37;
case 55:
goto L37;
case 56:
goto L37;
case 57:
goto L37;
case 58:
goto L37;
case 59:
goto L37;
case 60:
goto L37;
case 61:
goto L37;
case 62:
goto L37;
case 63:
goto L37;
case 64:
goto L37;
case 65:
goto L37;
case 66:
goto L37;
case 67:
goto L37;
case 68:
goto L37;
case 69:
goto L37;
case 70:
goto L37;
case 71:
goto L37;
case 72:
goto L37;
case 73:
goto L37;
case 74:
goto L37;
case 75:
goto L41;
default:
goto L37;
}
L41:;
si0=1U;
l22=si0;
si0=0U;
l21=si0;
goto L37;
L40:;
si0=-1U;
l21=si0;
goto L38;
L39:;
si0=1U;
l21=si0;
L38:;
si0=0U;
l22=si0;
L37:;
si0=l1;
si1=20U;
si0+=si1;
l23=si0;
si0=l1;
si1=44U;
si0+=si1;
l24=si0;
si0=l1;
si1=60U;
si0+=si1;
l17=si0;
si0=l1;
si1=64U;
si0+=si1;
l25=si0;
si0=0U;
l15=si0;
goto L32;
L33:;
si0=1543220U;
l3=si0;
si0=5U;
l4=si0;
si0=l11;
si1=-89U;
si0+=si1;
switch(si0){
case 0:
goto L42;
case 1:
goto L43;
default:
goto L44;
}
L44:;
si0=l2;
si1=92U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=1U;
i32_store(&i->m0,(U64)si0+84U,si1);
si0=l2;
si1=1543300U;
i32_store(&i->m0,(U64)si0+80U,si1);
si0=l2;
si1=l2;
si2=48U;
si1+=si2;
i32_store(&i->m0,(U64)si0+88U,si1);
si0=l2;
si1=80U;
si0+=si1;
si1=1543408U;
f683(i,si0,si1);
UNREACHABLE;
L43:;
si0=1543225U;
l3=si0;
si0=4U;
l4=si0;
L42:;
si0=l2;
si1=l4;
si2=0U;
f3331(i,si0,si1,si2);
si0=l2;
si0=i32_load(&i->m0,(U64)si0+4U);
l9=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si1=l3;
si2=l4;
si0=f15390(i,si0,si1,si2);
goto L27;
L32:;
L45:;
{
si0=l10;
si1=l14;
si0=si0 < si1;
if(si0){
goto L48;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
si1=1114113U;
si0=si0 == si1;
if(si0){
goto L50;
}
si0=l2;
si1=80U;
si0+=si1;
si1=l1;
f3434(i,si0,si1);
si0=0U;
si0=i32_load(&i->m0,(U64)si0+2967828U);
si1=4U;
si0=si0 > si1;
if(si0){
goto L49;
}
goto L47;
L50:;
si0=l15;
si1=1U;
si0&=si1;
if(si0){
goto L29;
}
goto L28;
L49:;
si0=l2;
si1=3U;
i32_store(&i->m0,(U64)si0+116U,si1);
si0=l2;
si1=1536240U;
i32_store(&i->m0,(U64)si0+112U,si1);
si0=l2;
sj1=3ULL;
i64_store(&i->m0,(U64)si0+124U,sj1);
si0=l2;
si1=740U;
i32_store(&i->m0,(U64)si0+156U,si1);
si0=l2;
si1=l23;
i32_store(&i->m0,(U64)si0+152U,si1);
si0=l2;
si1=788U;
i32_store(&i->m0,(U64)si0+148U,si1);
si0=l2;
si1=l24;
i32_store(&i->m0,(U64)si0+144U,si1);
si0=l2;
si1=789U;
i32_store(&i->m0,(U64)si0+140U,si1);
si0=l2;
si1=l2;
si2=136U;
si1+=si2;
i32_store(&i->m0,(U64)si0+120U,si1);
si0=l2;
si1=l2;
si2=80U;
si1+=si2;
i32_store(&i->m0,(U64)si0+136U,si1);
si0=l2;
si1=112U;
si0+=si1;
si1=5U;
si2=1536288U;
si3=0U;
si4=l1;
f954(i,si0,si1,si2,si3,si4);
goto L47;
L48:;
si0=l18;
si1=l10;
si2=l20;
si1+=si2;
l16=si1;
si2=0U;
si3=l19;
si4=l16;
si5=l19;
si4=si4 < si5;
si2=si4?si2:si3;
si1-=si2;
si2=5U;
si1<<=(si2&31);
si0+=si1;
l16=si0;
goto L46;
L47:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+80U);
si1=10U;
si0=si0 == si1;
if(si0){
goto L30;
}
si0=l2;
si1=48U;
si0+=si1;
si1=24U;
si0+=si1;
si1=l2;
si2=80U;
si1+=si2;
si2=24U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=48U;
si0+=si1;
si1=16U;
si0+=si1;
si1=l2;
si2=80U;
si1+=si2;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=48U;
si0+=si1;
si1=8U;
si0+=si1;
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
l26=sj1;
i64_store(&i->m0,(U64)si0+48U,sj1);
sj0=l26;
si0=(U32)(sj0);
l19=si0;
si1=99U;
si0=si0 == si1;
if(si0){
goto L30;
}
si0=l2;
si1=16U;
si0+=si1;
si1=24U;
si0+=si1;
l16=si0;
si1=l13;
si2=24U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=16U;
si0+=si1;
si1=16U;
si0+=si1;
l18=si0;
si1=l13;
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
si1=l13;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=l13;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+16U,sj1);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+68U);
l14=si0;
si1=l17;
si1=i32_load(&i->m0,(U64)si1);
l10=si1;
si0=si0 != si1;
if(si0){
goto L51;
}
si0=l12;
f3524(i,si0);
si0=l17;
si0=i32_load(&i->m0,(U64)si0);
l10=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+68U);
l14=si0;
L51:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+56U);
si1=l25;
si1=i32_load(&i->m0,(U64)si1);
si2=l14;
si1+=si2;
l14=si1;
si2=0U;
si3=l10;
si4=l14;
si5=l10;
si4=si4 < si5;
si2=si4?si2:si3;
si1-=si2;
si2=5U;
si1<<=(si2&31);
si0+=si1;
l10=si0;
si1=l2;
sj1=i64_load(&i->m0,(U64)si1+16U);
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l10;
si1=l19;
i32_store(&i->m0,(U64)si0,si1);
si0=l10;
si1=12U;
si0+=si1;
si1=l20;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l10;
si1=20U;
si0+=si1;
si1=l18;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l10;
si1=28U;
si0+=si1;
si1=l16;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+68U);
si2=1U;
si1+=si2;
l14=si1;
i32_store(&i->m0,(U64)si0+68U,si1);
si0=l14;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+72U);
l10=si1;
si0=si0 <= si1;
if(si0){
goto L31;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+56U);
l18=si0;
si1=l25;
si1=i32_load(&i->m0,(U64)si1);
l20=si1;
si2=l10;
si1+=si2;
l16=si1;
si2=0U;
si3=l17;
si3=i32_load(&i->m0,(U64)si3);
l19=si3;
si4=l16;
si5=l19;
si4=si4 < si5;
si2=si4?si2:si3;
si1-=si2;
si2=5U;
si1<<=(si2&31);
si0+=si1;
l16=si0;
L46:;
si0=l1;
si1=l10;
si2=1U;
si1+=si2;
l10=si1;
i32_store(&i->m0,(U64)si0+72U,si1);
si0=l16;
si0=i32_load(&i->m0,(U64)si0);
l16=si0;
si1=98U;
si0=si0 == si1;
if(si0){
goto L55;
}
si0=l16;
si1=-2U;
si0+=si1;
l16=si0;
si1=1U;
si2=l16;
si3=96U;
si2=si2 < si3;
si0=si2?si0:si1;
si1=-5U;
si0+=si1;
switch(si0){
case 0:
goto L55;
case 1:
goto L45;
case 2:
goto L45;
case 3:
goto L45;
case 4:
goto L52;
case 5:
goto L54;
case 6:
goto L52;
case 7:
goto L54;
case 8:
goto L53;
case 9:
goto L45;
case 10:
goto L45;
case 11:
goto L45;
case 12:
goto L45;
case 13:
goto L45;
case 14:
goto L45;
case 15:
goto L45;
case 16:
goto L45;
case 17:
goto L45;
case 18:
goto L45;
case 19:
goto L45;
case 20:
goto L45;
case 21:
goto L45;
case 22:
goto L52;
case 23:
goto L54;
case 24:
goto L45;
case 25:
goto L45;
case 26:
goto L45;
case 27:
goto L45;
case 28:
goto L45;
case 29:
goto L45;
case 30:
goto L45;
case 31:
goto L45;
case 32:
goto L45;
case 33:
goto L45;
case 34:
goto L45;
case 35:
goto L45;
case 36:
goto L45;
case 37:
goto L45;
case 38:
goto L45;
case 39:
goto L45;
case 40:
goto L45;
case 41:
goto L45;
case 42:
goto L45;
case 43:
goto L45;
case 44:
goto L45;
case 45:
goto L45;
case 46:
goto L45;
case 47:
goto L45;
case 48:
goto L45;
case 49:
goto L45;
case 50:
goto L45;
case 51:
goto L45;
case 52:
goto L45;
case 53:
goto L45;
case 54:
goto L45;
case 55:
goto L45;
case 56:
goto L45;
case 57:
goto L45;
case 58:
goto L45;
case 59:
goto L45;
case 60:
goto L45;
case 61:
goto L45;
case 62:
goto L45;
case 63:
goto L45;
case 64:
goto L45;
case 65:
goto L45;
case 66:
goto L45;
case 67:
goto L45;
case 68:
goto L45;
case 69:
goto L45;
case 70:
goto L45;
case 71:
goto L45;
case 72:
goto L45;
case 73:
goto L45;
case 74:
goto L45;
case 75:
goto L56;
default:
goto L45;
}
L56:;
si0=l21;
si0=!(si0);
si1=l22;
si0|=si1;
l22=si0;
goto L45;
L55:;
si0=l15;
si1=1U;
si0&=si1;
if(si0){
goto L29;
}
goto L28;
L54:;
si0=l21;
si1=-1U;
si0+=si1;
l21=si0;
goto L45;
L53:;
si0=l21;
si1=0U;
si0=si0 != si1;
l16=si0;
si1=l22;
si0|=si1;
l27=si0;
si0=l16;
si1=l22;
si0&=si1;
l22=si0;
si0=l27;
si1=1U;
si0&=si1;
if(si0){
goto L45;
}
si0=0U;
l21=si0;
si0=1U;
l15=si0;
si0=0U;
l22=si0;
goto L45;
L52:;
si0=l21;
si1=1U;
si0+=si1;
l21=si0;
goto L45;
}
L31:;
si0=1542868U;
si1=20U;
si2=1543000U;
f703(i,si0,si1,si2);
UNREACHABLE;
L30:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
si1=1114113U;
si0=si0 == si1;
if(si0){
goto L57;
}
si0=l1;
si1=24U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L58;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+20U);
f15271(i,si0);
L58:;
si0=l1;
si1=32U;
si0+=si1;
l10=si0;
f3381(i,si0);
si0=l1;
si1=36U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L57;
}
si0=l10;
si0=i32_load(&i->m0,(U64)si0);
f15271(i,si0);
L57:;
si0=l1;
si1=1114113U;
i32_store(&i->m0,(U64)si0,si1);
si0=l15;
si1=1U;
si0&=si1;
si0=!(si0);
if(si0){
goto L28;
}
L29:;
si0=0U;
l10=si0;
si0=l3;
si1=-2U;
si0&=si1;
si1=98U;
si0=si0 != si1;
if(si0){
goto L26;
}
goto L25;
L28:;
si0=1543220U;
l3=si0;
si0=5U;
l4=si0;
si0=l11;
si1=-89U;
si0+=si1;
switch(si0){
case 0:
goto L59;
case 1:
goto L60;
default:
goto L61;
}
L61:;
si0=l2;
si1=92U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=1U;
i32_store(&i->m0,(U64)si0+84U,si1);
si0=l2;
si1=1543300U;
i32_store(&i->m0,(U64)si0+80U,si1);
si0=l2;
si1=l2;
si2=48U;
si1+=si2;
i32_store(&i->m0,(U64)si0+88U,si1);
si0=l2;
si1=80U;
si0+=si1;
si1=1543408U;
f683(i,si0,si1);
UNREACHABLE;
L60:;
si0=1543225U;
l3=si0;
si0=4U;
l4=si0;
L59:;
si0=l2;
si1=8U;
si0+=si1;
si1=l4;
si2=0U;
f3331(i,si0,si1,si2);
si0=l2;
si0=i32_load(&i->m0,(U64)si0+12U);
l9=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+8U);
l5=si0;
si1=l3;
si2=l4;
si0=f15390(i,si0,si1,si2);
L27:;
si0=2U;
l3=si0;
L26:;
si0=l3;
si1=-2U;
si0+=si1;
l10=si0;
si1=1U;
si2=l10;
si3=96U;
si2=si2 < si3;
si0=si2?si0:si1;
l10=si0;
si1=-5U;
si0+=si1;
si1=3U;
si0=si0 < si1;
if(si0){
goto L62;
}
si0=l10;
si1=-93U;
si0+=si1;
si1=1U;
si0=si0 <= si1;
if(si0){
goto L62;
}
si0=0U;
l10=si0;
goto L25;
L62:;
si0=1U;
l10=si0;
L25:;
si0=l1;
si1=l10;
i32_store8(&i->m0,(U64)si0+76U,si1);
si0=l3;
si1=99U;
si0=si0 != si1;
if(si0){
goto L2;
}
L3:;
si0=l0;
si1=99U;
i32_store(&i->m0,(U64)si0,si1);
goto L1;
L2:;
si0=l0;
si1=l6;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l0;
si1=l7;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l0;
sj1=l8;
i64_store(&i->m0,(U64)si0+16U,sj1);
si0=l0;
si1=l4;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l0;
si1=l9;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l0;
si1=l5;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l3;
i32_store(&i->m0,(U64)si0,si1);
L1:;
si0=l2;
si1=160U;
si0+=si1;
i->g0=si0;
L0:;
}

void f3524(rustpythonInstance*i,U32 l0) {
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
f3339(i,si0,si1);
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
si2=5U;
si1<<=(si2&31);
si0+=si1;
si1=l1;
si2=l2;
si3=5U;
si2<<=(si3&31);
si1+=si2;
si2=l5;
si3=5U;
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
si2=5U;
si1<<=(si2&31);
si0+=si1;
si1=l0;
si2=l3;
si3=5U;
si2<<=(si3&31);
si0=f15390(i,si0,si1,si2);
L1:;
L0:;
}

void f3525(rustpythonInstance*i,U32 l0) {
U32 l1=0;
U32 l2=0;
U32 si0,si1,si2,si3;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
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
si0=l0;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L1;
}
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
if(si0){
goto L2;
}
goto L1;
L3:;
si0=l0;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L1;
}
L2:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+4U);
f15271(i,si0);
L1:;
L0:;
}

void f3526(rustpythonInstance*i,U32 l0) {
U32 l1=0;
U32 si0,si1;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
switch(si0){
case 0:
goto L1;
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
goto L6;
case 8:
goto L1;
case 9:
goto L1;
case 10:
goto L5;
case 11:
goto L1;
case 12:
goto L4;
case 13:
goto L1;
case 14:
goto L1;
default:
goto L7;
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
goto L3;
L6:;
si0=l0;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L3;
}
goto L1;
L5:;
si0=l0;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L3;
}
goto L1;
L4:;
si0=l0;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=1114115U;
si0=si0 != si1;
if(si0){
goto L1;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+4U);
l0=si0;
si0=i32_load(&i->m0,(U64)si0);
switch(si0){
case 0:
goto L2;
case 1:
goto L9;
case 2:
goto L2;
case 3:
goto L8;
default:
goto L10;
}
L10:;
si0=l0;
si1=4U;
si0+=si1;
f3526(i,si0);
goto L2;
L9:;
si0=l0;
si1=8U;
si0+=si1;
f3525(i,si0);
goto L2;
L8:;
si0=l0;
si1=16U;
si0+=si1;
f3525(i,si0);
si0=l0;
si0=i32_load(&i->m0,(U64)si0+4U);
l1=si0;
si0=!(si0);
if(si0){
goto L2;
}
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
goto L2;
L3:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+4U);
l0=si0;
L2:;
si0=l0;
f15271(i,si0);
L1:;
L0:;
}

void f3527(rustpythonInstance*i,U32 l0) {
U32 l1=0;
U32 l2=0;
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 l8=0;
U32 l9=0;
U32 si0,si1,si2,si3,si4,si5;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+12U);
l1=si0;
si0=!(si0);
if(si0){
goto L1;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si0=l0;
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si1=l0;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
l0=si1;
si2=0U;
si3=l3;
si4=l0;
si5=l3;
si4=si4 < si5;
si2=si4?si2:si3;
si1-=si2;
l0=si1;
si2=l1;
si1+=si2;
si2=l1;
si3=l3;
si4=l0;
si3-=si4;
l4=si3;
si2=si2 > si3;
si0=si2?si0:si1;
l3=si0;
si1=l0;
si0=si0 == si1;
if(si0){
goto L2;
}
si0=l3;
si1=l0;
si0-=si1;
l5=si0;
si0=l2;
si1=l0;
si2=5U;
si1<<=(si2&31);
si0+=si1;
l6=si0;
l0=si0;
si0=0U;
l3=si0;
L3:;
{
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
si1=98U;
si0=si0 == si1;
if(si0){
goto L5;
}
si0=l6;
si1=l3;
si2=5U;
si1<<=(si2&31);
si0+=si1;
l8=si0;
si0=l7;
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
goto L4;
case 3:
goto L4;
case 4:
goto L8;
default:
goto L4;
}
L10:;
si0=l0;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L4;
}
si0=l0;
si1=4U;
si0+=si1;
l7=si0;
goto L6;
L9:;
si0=l7;
si0=!(si0);
if(si0){
goto L4;
}
si0=l0;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L7;
}
goto L4;
L8:;
si0=l0;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L4;
}
L7:;
si0=l8;
si1=4U;
si0+=si1;
l7=si0;
L6:;
si0=l7;
si0=i32_load(&i->m0,(U64)si0);
f15271(i,si0);
goto L4;
L5:;
si0=l0;
si1=4U;
si0+=si1;
f3526(i,si0);
L4:;
si0=l3;
si1=1U;
si0+=si1;
l3=si0;
si0=l0;
si1=32U;
si0+=si1;
l0=si0;
si0=l5;
si1=-1U;
si0+=si1;
l5=si0;
if(si0){
goto L3;
}
}
L2:;
si0=l1;
si1=l4;
si0=si0 <= si1;
if(si0){
goto L1;
}
si0=0U;
si1=l1;
si2=l4;
si1-=si2;
l0=si1;
si2=l0;
si3=l1;
si2=si2 > si3;
si0=si2?si0:si1;
l5=si0;
si0=0U;
l3=si0;
si0=l2;
l0=si0;
L11:;
{
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
si1=98U;
si0=si0 == si1;
if(si0){
goto L13;
}
si0=l2;
si1=l3;
si2=5U;
si1<<=(si2&31);
si0+=si1;
l8=si0;
si0=l7;
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
goto L18;
case 1:
goto L17;
case 2:
goto L12;
case 3:
goto L12;
case 4:
goto L16;
default:
goto L12;
}
L18:;
si0=l0;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L12;
}
si0=l0;
si1=4U;
si0+=si1;
l7=si0;
goto L14;
L17:;
si0=l7;
si0=!(si0);
if(si0){
goto L12;
}
si0=l0;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L15;
}
goto L12;
L16:;
si0=l0;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L12;
}
L15:;
si0=l8;
si1=4U;
si0+=si1;
l7=si0;
L14:;
si0=l7;
si0=i32_load(&i->m0,(U64)si0);
f15271(i,si0);
goto L12;
L13:;
si0=l0;
si1=4U;
si0+=si1;
f3526(i,si0);
L12:;
si0=l3;
si1=1U;
si0+=si1;
l3=si0;
si0=l0;
si1=32U;
si0+=si1;
l0=si0;
si0=l5;
si1=-1U;
si0+=si1;
l5=si0;
if(si0){
goto L11;
}
}
L1:;
L0:;
}

void f3528(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4,U32 l5) {
U32 l6=0;
U32 l7=0;
U32 si0,si1,si2,si3,si4;
U64 sj1;
si0=i->g0;
si1=224U;
si0-=si1;
l6=si0;
i->g0=si0;
si0=l6;
si1=104U;
si0+=si1;
si1=32U;
si0+=si1;
l7=si0;
si1=l1;
si2=l2;
si3=2U;
si4=l5;
f3428(i,si0,si1,si2,si3,si4);
si0=l6;
sj1=0ULL;
i64_store(&i->m0,(U64)si0+128U,sj1);
si0=l6;
si1=97U;
i32_store(&i->m0,(U64)si0+104U,si1);
si0=l6;
si1=56U;
si0+=si1;
si1=l6;
si2=104U;
si1+=si2;
f3486(i,si0,si1);
si0=l6;
si0=i32_load(&i->m0,(U64)si0+56U);
si1=5U;
si0=si0 != si1;
if(si0){
goto L5;
}
si0=l6;
si1=28U;
si0+=si1;
si1=l6;
si2=56U;
si1+=si2;
si2=28U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l6;
si1=20U;
si0+=si1;
si1=l6;
si2=56U;
si1+=si2;
si2=20U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l6;
si1=12U;
si0+=si1;
si1=l6;
si2=56U;
si1+=si2;
si2=12U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l6;
si1=l6;
sj1=i64_load(&i->m0,(U64)si1+60U);
i64_store(&i->m0,(U64)si0+4U,sj1);
goto L4;
L5:;
si0=l6;
si1=104U;
si0+=si1;
si1=40U;
si0+=si1;
si1=l6;
si2=56U;
si1+=si2;
si2=40U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l7;
si1=l6;
si2=56U;
si1+=si2;
si2=32U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l6;
si1=104U;
si0+=si1;
si1=24U;
si0+=si1;
si1=l6;
si2=56U;
si1+=si2;
si2=24U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l6;
si1=104U;
si0+=si1;
si1=16U;
si0+=si1;
si1=l6;
si2=56U;
si1+=si2;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l6;
si1=104U;
si0+=si1;
si1=8U;
si0+=si1;
si1=l6;
si2=56U;
si1+=si2;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l6;
si1=l6;
sj1=i64_load(&i->m0,(U64)si1+56U);
i64_store(&i->m0,(U64)si0+104U,sj1);
si0=l6;
si1=l6;
si2=104U;
si1+=si2;
si2=l3;
si3=l4;
f3519(i,si0,si1,si2,si3);
si0=l6;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si1=5U;
si0=si0 != si1;
if(si0){
goto L3;
}
L4:;
si0=l6;
si0=i32_load(&i->m0,(U64)si0+4U);
si1=2U;
si0=si0 != si1;
if(si0){
goto L1;
}
si0=l6;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si0=l0;
si1=5U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l5;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+8U,sj1);
si0=l0;
si1=48U;
si0+=si1;
si1=l5;
si2=40U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=40U;
si0+=si1;
si1=l5;
si2=32U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=32U;
si0+=si1;
si1=l5;
si2=24U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=24U;
si0+=si1;
si1=l5;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=16U;
si0+=si1;
si1=l5;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
f15271(i,si0);
goto L2;
L3:;
si0=l0;
si1=l6;
sj1=i64_load(&i->m0,(U64)si1+12U);
i64_store(&i->m0,(U64)si0+12U,sj1);
si0=l0;
si1=l6;
sj1=i64_load(&i->m0,(U64)si1+32U);
i64_store(&i->m0,(U64)si0+32U,sj1);
si0=l0;
si1=20U;
si0+=si1;
si1=l6;
si2=20U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=28U;
si0+=si1;
si1=l6;
si2=28U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=40U;
si0+=si1;
si1=l6;
si2=40U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=48U;
si0+=si1;
si1=l6;
si2=48U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=l6;
sj1=i64_load(&i->m0,(U64)si1+4U);
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l0;
si1=l5;
i32_store(&i->m0,(U64)si0,si1);
L2:;
si0=l6;
si1=224U;
si0+=si1;
i->g0=si0;
goto L0;
L1:;
si0=l6;
si1=116U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l6;
si1=1U;
i32_store(&i->m0,(U64)si0+108U,si1);
si0=l6;
si1=1543100U;
i32_store(&i->m0,(U64)si0+104U,si1);
si0=l6;
si1=l6;
si2=216U;
si1+=si2;
i32_store(&i->m0,(U64)si0+112U,si1);
si0=l6;
si1=104U;
si0+=si1;
si1=1543204U;
f683(i,si0,si1);
UNREACHABLE;
L0:;
}

U32 f3529(rustpythonInstance*i,U32 l0,U32 l1) {
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
if(si0){
goto L2;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=1543516U;
si2=4U;
si3=l1;
si4=24U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si3=i32_load(&i->m0,(U64)si3+12U);
si0=TF(i->t0,si3,U32 (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
l1=si0;
goto L1;
L2:;
si0=l2;
si1=l0;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l2;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+20U);
si2=1543520U;
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
si2=1543524U;
si0=f716(i,si0,si1,si2);
l1=si0;
si0=l2;
si0=i32_load8_u(&i->m0,(U64)si0+24U);
l0=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
if(si0){
goto L3;
}
si0=l0;
si1=255U;
si0&=si1;
si1=0U;
si0=si0 != si1;
l1=si0;
goto L1;
L3:;
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
if(si0){
goto L1;
}
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
L1:;
si0=l2;
si1=32U;
si0+=si1;
i->g0=si0;
si0=l1;
L0:;
return si0;
}


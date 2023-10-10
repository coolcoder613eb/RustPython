#include "w2c2_base.h"

#include "rustpython.h"

void f1730(rustpythonInstance*i,U32 l0) {
U32 l1=0;
U32 l2=0;
U32 l3=0;
U32 l4=0;
U32 si0,si1,si2;
U64 sj1;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+24U);
l1=si0;
si0=!(si0);
if(si0){
goto L2;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+16U);
l2=si0;
si0=!(si0);
if(si0){
goto L2;
}
si0=l2;
si1=l1;
si2=-1U;
si1+=si2;
si2=384U;
si1*=si2;
si0+=si1;
l1=si0;
si1=368U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+332U);
l2=si1;
si0=si0 <= si1;
if(si0){
goto L1;
}
si0=l0;
si1=56U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+52U);
l4=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+360U);
si1=l2;
si2=4U;
si1<<=(si2&31);
si0+=si1;
l0=si0;
si0=i32_load(&i->m0,(U64)si0+8U);
l1=si0;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+4U);
si0=si0 != si1;
if(si0){
goto L3;
}
si0=l0;
si1=l1;
f1796(i,si0,si1);
si0=l0;
si0=i32_load(&i->m0,(U64)si0+8U);
l1=si0;
L3:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
si1=l1;
si2=20U;
si1*=si2;
si0+=si1;
l1=si0;
si1=65U;
i32_store8(&i->m0,(U64)si0+16U,si1);
si0=l1;
sj1=-4294967296ULL;
i64_store(&i->m0,(U64)si0+8U,sj1);
si0=l1;
si1=l3;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l1;
si1=l4;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+8U);
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0+8U,si1);
goto L0;
L2:;
si0=16960789U;
si1=16U;
si2=16960808U;
f634(i,si0,si1,si2);
UNREACHABLE;
L1:;
si0=l2;
si1=l3;
si2=16960824U;
f594(i,si0,si1,si2);
UNREACHABLE;
L0:;
}

void f1731(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 si0,si1,si2;
si0=l1;
si0=(U32)(U32)(I8)(U8)(si0);
si1=2U;
si0<<=(si1&31);
si1=16961036U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=l2;
if(si0){
goto L6;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+24U);
l1=si0;
si0=!(si0);
if(si0){
goto L4;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+16U);
l2=si0;
si0=!(si0);
if(si0){
goto L4;
}
si0=l2;
si1=l1;
si2=-1U;
si1+=si2;
si2=384U;
si1*=si2;
si0+=si1;
l1=si0;
si1=368U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+332U);
l4=si1;
si0=si0 <= si1;
if(si0){
goto L3;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+56U);
l2=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+52U);
l5=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+360U);
si1=l4;
si2=4U;
si1<<=(si2&31);
si0+=si1;
l0=si0;
si0=i32_load(&i->m0,(U64)si0+8U);
l4=si0;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+4U);
si0=si0 != si1;
if(si0){
goto L7;
}
si0=l0;
si1=l4;
f1796(i,si0,si1);
si0=l0;
si0=i32_load(&i->m0,(U64)si0+8U);
l4=si0;
L7:;
si0=l0;
si1=8U;
si0+=si1;
l1=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
si1=l4;
si2=20U;
si1*=si2;
si0+=si1;
l0=si0;
si1=l5;
i32_store(&i->m0,(U64)si0,si1);
si0=25U;
l4=si0;
goto L5;
L6:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+24U);
l1=si0;
si0=!(si0);
if(si0){
goto L2;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+16U);
l2=si0;
si0=!(si0);
if(si0){
goto L2;
}
si0=l2;
si1=l1;
si2=-1U;
si1+=si2;
si2=384U;
si1*=si2;
si0+=si1;
l1=si0;
si1=368U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+332U);
l4=si1;
si0=si0 <= si1;
if(si0){
goto L1;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+56U);
l2=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+52U);
l5=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+360U);
si1=l4;
si2=4U;
si1<<=(si2&31);
si0+=si1;
l0=si0;
si0=i32_load(&i->m0,(U64)si0+8U);
l4=si0;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+4U);
si0=si0 != si1;
if(si0){
goto L8;
}
si0=l0;
si1=l4;
f1796(i,si0,si1);
si0=l0;
si0=i32_load(&i->m0,(U64)si0+8U);
l4=si0;
L8:;
si0=l0;
si1=8U;
si0+=si1;
l1=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
si1=l4;
si2=20U;
si1*=si2;
si0+=si1;
l0=si0;
si1=l5;
i32_store(&i->m0,(U64)si0,si1);
si0=26U;
l4=si0;
L5:;
si0=l0;
si1=l4;
i32_store8(&i->m0,(U64)si0+16U,si1);
si0=l0;
si1=-1U;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l0;
si1=l3;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l0;
si1=l2;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l1;
si1=l1;
si1=i32_load(&i->m0,(U64)si1);
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
goto L0;
L4:;
si0=16960789U;
si1=16U;
si2=16960808U;
f634(i,si0,si1,si2);
UNREACHABLE;
L3:;
si0=l4;
si1=l2;
si2=16960824U;
f594(i,si0,si1,si2);
UNREACHABLE;
L2:;
si0=16960789U;
si1=16U;
si2=16960808U;
f634(i,si0,si1,si2);
UNREACHABLE;
L1:;
si0=l4;
si1=l2;
si2=16960824U;
f594(i,si0,si1,si2);
UNREACHABLE;
L0:;
}

void f1732(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 si0,si1,si2;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+24U);
l2=si0;
si0=!(si0);
if(si0){
goto L2;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+16U);
l3=si0;
si0=!(si0);
if(si0){
goto L2;
}
si0=l3;
si1=l2;
si2=-1U;
si1+=si2;
si2=384U;
si1*=si2;
si0+=si1;
l2=si0;
si1=368U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
si1=l2;
si1=i32_load(&i->m0,(U64)si1+332U);
l3=si1;
si0=si0 <= si1;
if(si0){
goto L1;
}
si0=l0;
si1=56U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+52U);
l5=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+360U);
si1=l3;
si2=4U;
si1<<=(si2&31);
si0+=si1;
l0=si0;
si0=i32_load(&i->m0,(U64)si0+8U);
l2=si0;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+4U);
si0=si0 != si1;
if(si0){
goto L3;
}
si0=l0;
si1=l2;
f1796(i,si0,si1);
si0=l0;
si0=i32_load(&i->m0,(U64)si0+8U);
l2=si0;
L3:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
si1=l2;
si2=20U;
si1*=si2;
si0+=si1;
l2=si0;
si1=17U;
i32_store8(&i->m0,(U64)si0+16U,si1);
si0=l2;
si1=-1U;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l2;
si1=l1;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l2;
si1=l4;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l2;
si1=l5;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+8U);
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0+8U,si1);
goto L0;
L2:;
si0=16960789U;
si1=16U;
si2=16960808U;
f634(i,si0,si1,si2);
UNREACHABLE;
L1:;
si0=l3;
si1=l4;
si2=16960824U;
f594(i,si0,si1,si2);
UNREACHABLE;
L0:;
}

void f1733(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 si0,si1,si2;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+24U);
l2=si0;
si0=!(si0);
if(si0){
goto L2;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+16U);
l3=si0;
si0=!(si0);
if(si0){
goto L2;
}
si0=l3;
si1=l2;
si2=-1U;
si1+=si2;
si2=384U;
si1*=si2;
si0+=si1;
l2=si0;
si1=368U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
si1=l2;
si1=i32_load(&i->m0,(U64)si1+332U);
l3=si1;
si0=si0 <= si1;
if(si0){
goto L1;
}
si0=l0;
si1=56U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+52U);
l5=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+360U);
si1=l3;
si2=4U;
si1<<=(si2&31);
si0+=si1;
l0=si0;
si0=i32_load(&i->m0,(U64)si0+8U);
l2=si0;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+4U);
si0=si0 != si1;
if(si0){
goto L3;
}
si0=l0;
si1=l2;
f1796(i,si0,si1);
si0=l0;
si0=i32_load(&i->m0,(U64)si0+8U);
l2=si0;
L3:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
si1=l2;
si2=20U;
si1*=si2;
si0+=si1;
l2=si0;
si1=10U;
i32_store8(&i->m0,(U64)si0+16U,si1);
si0=l2;
si1=-1U;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l2;
si1=l1;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l2;
si1=l4;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l2;
si1=l5;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+8U);
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0+8U,si1);
goto L0;
L2:;
si0=16960789U;
si1=16U;
si2=16960808U;
f634(i,si0,si1,si2);
UNREACHABLE;
L1:;
si0=l3;
si1=l4;
si2=16960824U;
f594(i,si0,si1,si2);
UNREACHABLE;
L0:;
}

U32 f1734(rustpythonInstance*i,U32 l0,U32 l1) {
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
U64 l13=0;
U32 l14=0;
U32 l15=0;
U32 si0,si1,si2,si3,si4;
U64 sj1,sj2,sj3,sj4,sj5,sj6,sj7;
si0=i->g0;
si1=80U;
si0-=si1;
l2=si0;
i->g0=si0;
si0=l1;
si1=76U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=!(si0);
if(si0){
goto L3;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+72U);
l4=si0;
si1=l3;
si2=12U;
si1*=si2;
si0+=si1;
l5=si0;
L6:;
{
si0=l2;
si1=l4;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l0;
si0=i32_load(&i->m0,(U64)si0+36U);
l6=si0;
si0=!(si0);
if(si0){
goto L9;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+28U);
l7=si0;
si1=l6;
si2=-1U;
si1+=si2;
l8=si1;
si2=96U;
si1*=si2;
si0+=si1;
l6=si0;
si1=44U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L11;
}
si0=l4;
si1=8U;
si0+=si1;
l9=si0;
si0=i32_load(&i->m0,(U64)si0);
l10=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
l11=si0;
si0=l2;
si1=l6;
sj1=i64_load(&i->m0,(U64)si1+16U);
i64_store(&i->m0,(U64)si0+48U,sj1);
si0=l2;
si1=l6;
sj1=i64_load(&i->m0,(U64)si1+8U);
i64_store(&i->m0,(U64)si0+72U,sj1);
si0=l2;
si1=l6;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+64U,sj1);
si0=l2;
si1=l6;
si2=24U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+56U,sj1);
si0=l2;
si1=48U;
si0+=si1;
si1=l11;
si2=l10;
f2027(i,si0,si1,si2);
si0=l2;
si1=8U;
si0+=si1;
si1=l6;
si2=32U;
si1+=si2;
si2=l2;
sj2=i64_load(&i->m0,(U64)si2+72U);
l12=sj2;
sj3=56ULL;
sj2<<=(sj3&63);
sj3=l12;
sj4=65280ULL;
sj3&=sj4;
sj4=40ULL;
sj3<<=(sj4&63);
sj2|=sj3;
sj3=l12;
sj4=16711680ULL;
sj3&=sj4;
sj4=24ULL;
sj3<<=(sj4&63);
sj4=l12;
sj5=4278190080ULL;
sj4&=sj5;
sj5=8ULL;
sj4<<=(sj5&63);
sj3|=sj4;
sj2|=sj3;
sj3=l12;
sj4=8ULL;
sj3>>=(sj4&63);
sj4=4278190080ULL;
sj3&=sj4;
sj4=l12;
sj5=24ULL;
sj4>>=(sj5&63);
sj5=16711680ULL;
sj4&=sj5;
sj3|=sj4;
sj4=l12;
sj5=40ULL;
sj4>>=(sj5&63);
sj5=65280ULL;
sj4&=sj5;
sj5=l12;
sj6=56ULL;
sj5>>=(sj6&63);
sj4|=sj5;
sj3|=sj4;
sj2|=sj3;
si3=l2;
sj3=i64_load(&i->m0,(U64)si3+64U);
l13=sj3;
sj2*=sj3;
sj3=l13;
sj4=56ULL;
sj3<<=(sj4&63);
sj4=l13;
sj5=65280ULL;
sj4&=sj5;
sj5=40ULL;
sj4<<=(sj5&63);
sj3|=sj4;
sj4=l13;
sj5=16711680ULL;
sj4&=sj5;
sj5=24ULL;
sj4<<=(sj5&63);
sj5=l13;
sj6=4278190080ULL;
sj5&=sj6;
sj6=8ULL;
sj5<<=(sj6&63);
sj4|=sj5;
sj3|=sj4;
sj4=l13;
sj5=8ULL;
sj4>>=(sj5&63);
sj5=4278190080ULL;
sj4&=sj5;
sj5=l13;
sj6=24ULL;
sj5>>=(sj6&63);
sj6=16711680ULL;
sj5&=sj6;
sj4|=sj5;
sj5=l13;
sj6=40ULL;
sj5>>=(sj6&63);
sj6=65280ULL;
sj5&=sj6;
sj6=l13;
sj7=56ULL;
sj6>>=(sj7&63);
sj5|=sj6;
sj4|=sj5;
sj3|=sj4;
sj4=l12;
sj5=-1ULL;
sj4^=sj5;
sj3*=sj4;
l12=sj3;
sj4=56ULL;
sj3<<=(sj4&63);
sj4=l12;
sj5=65280ULL;
sj4&=sj5;
sj5=40ULL;
sj4<<=(sj5&63);
sj3|=sj4;
sj4=l12;
sj5=16711680ULL;
sj4&=sj5;
sj5=24ULL;
sj4<<=(sj5&63);
sj5=l12;
sj6=4278190080ULL;
sj5&=sj6;
sj6=8ULL;
sj5<<=(sj6&63);
sj4|=sj5;
sj3|=sj4;
sj4=l12;
sj5=8ULL;
sj4>>=(sj5&63);
sj5=4278190080ULL;
sj4&=sj5;
sj5=l12;
sj6=24ULL;
sj5>>=(sj6&63);
sj6=16711680ULL;
sj5&=sj6;
sj4|=sj5;
sj5=l12;
sj6=40ULL;
sj5>>=(sj6&63);
sj6=65280ULL;
sj5&=sj6;
sj6=l12;
sj7=56ULL;
sj6>>=(sj7&63);
sj5|=sj6;
sj4|=sj5;
sj3|=sj4;
sj2^=sj3;
sj3=l13;
sj2=I64_ROTL(sj2,sj3);
si2=(U32)(sj2);
si3=l11;
si4=l10;
f2059(i,si0,si1,si2,si3,si4);
si0=l2;
si0=i32_load(&i->m0,(U64)si0+8U);
si1=1U;
si0=si0 != si1;
if(si0){
goto L11;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0+12U);
l14=si0;
si1=l6;
si2=56U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
l10=si1;
si0=si0 < si1;
if(si0){
goto L10;
}
si0=l14;
si1=l10;
si2=16969724U;
f594(i,si0,si1,si2);
UNREACHABLE;
L11:;
si0=l2;
si1=68U;
si0+=si1;
si1=509U;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=60U;
si0+=si1;
si1=509U;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=l0;
si2=40U;
si1+=si2;
i32_store(&i->m0,(U64)si0+64U,si1);
si0=l2;
si1=l1;
si2=28U;
si1+=si2;
i32_store(&i->m0,(U64)si0+56U,si1);
si0=l2;
si1=510U;
i32_store(&i->m0,(U64)si0+52U,si1);
si0=l2;
si1=l2;
si2=16U;
si1+=si2;
i32_store(&i->m0,(U64)si0+48U,si1);
si0=l2;
si1=24U;
si0+=si1;
si1=16959928U;
si2=3U;
si3=l2;
si4=48U;
si3+=si4;
si4=3U;
f1677(i,si0,si1,si2,si3,si4);
si0=l2;
si1=24U;
si0+=si1;
si1=16959952U;
f614(i,si0,si1);
UNREACHABLE;
L10:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+24U);
l10=si0;
si0=!(si0);
if(si0){
goto L8;
}
si0=l10;
si1=-1U;
si0+=si1;
l11=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+16U);
l10=si0;
si0=l6;
si1=48U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=l14;
si2=5U;
si1<<=(si2&31);
si0+=si1;
l6=si0;
si1=30U;
si0+=si1;
l15=si0;
si0=i32_load8_u(&i->m0,(U64)si0);
l14=si0;
si1=-4U;
si0+=si1;
switch(si0){
case 0:
goto L14;
case 1:
goto L13;
default:
goto L12;
}
L14:;
si0=l10;
si1=l11;
si2=384U;
si1*=si2;
si0+=si1;
si1=256U;
si0+=si1;
l6=si0;
goto L7;
L13:;
si0=l10;
si1=l11;
si2=384U;
si1*=si2;
si0+=si1;
si1=192U;
si0+=si1;
l6=si0;
goto L7;
L12:;
si0=l6;
si1=29U;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=1U;
si0&=si1;
si0=!(si0);
if(si0){
goto L15;
}
si0=l10;
si1=l11;
si2=384U;
si1*=si2;
si0+=si1;
si1=256U;
si0+=si1;
l6=si0;
goto L7;
L15:;
si0=l2;
si1=l14;
i32_store8(&i->m0,(U64)si0+23U,si1);
si0=l2;
si1=68U;
si0+=si1;
si1=511U;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=60U;
si0+=si1;
si1=512U;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=l7;
si2=l8;
si3=96U;
si2*=si3;
si1+=si2;
si2=92U;
si1+=si2;
i32_store(&i->m0,(U64)si0+56U,si1);
si0=l2;
si1=510U;
i32_store(&i->m0,(U64)si0+52U,si1);
si0=l2;
si1=l2;
si2=23U;
si1+=si2;
i32_store(&i->m0,(U64)si0+64U,si1);
si0=l2;
si1=l2;
si2=16U;
si1+=si2;
i32_store(&i->m0,(U64)si0+48U,si1);
si0=l2;
si1=24U;
si0+=si1;
si1=16959860U;
si2=3U;
si3=l2;
si4=48U;
si3+=si4;
si4=3U;
f1677(i,si0,si1,si2,si3,si4);
si0=l2;
si1=24U;
si0+=si1;
si1=16959884U;
f614(i,si0,si1);
UNREACHABLE;
L9:;
si0=16959195U;
si1=43U;
si2=16959724U;
f604(i,si0,si1,si2);
UNREACHABLE;
L8:;
si0=16959195U;
si1=43U;
si2=16959740U;
f604(i,si0,si1,si2);
UNREACHABLE;
L7:;
si0=l6;
si1=44U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L17;
}
si0=l9;
si0=i32_load(&i->m0,(U64)si0);
l14=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
l9=si0;
si0=l2;
si1=l6;
si2=24U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+56U,sj1);
si0=l2;
si1=l6;
sj1=i64_load(&i->m0,(U64)si1+16U);
i64_store(&i->m0,(U64)si0+48U,sj1);
si0=l2;
si1=l6;
sj1=i64_load(&i->m0,(U64)si1+8U);
i64_store(&i->m0,(U64)si0+72U,sj1);
si0=l2;
si1=l6;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+64U,sj1);
si0=l2;
si1=48U;
si0+=si1;
si1=l9;
si2=l14;
f2027(i,si0,si1,si2);
si0=l2;
si1=l6;
si2=32U;
si1+=si2;
si2=l2;
sj2=i64_load(&i->m0,(U64)si2+72U);
l12=sj2;
sj3=56ULL;
sj2<<=(sj3&63);
sj3=l12;
sj4=65280ULL;
sj3&=sj4;
sj4=40ULL;
sj3<<=(sj4&63);
sj2|=sj3;
sj3=l12;
sj4=16711680ULL;
sj3&=sj4;
sj4=24ULL;
sj3<<=(sj4&63);
sj4=l12;
sj5=4278190080ULL;
sj4&=sj5;
sj5=8ULL;
sj4<<=(sj5&63);
sj3|=sj4;
sj2|=sj3;
sj3=l12;
sj4=8ULL;
sj3>>=(sj4&63);
sj4=4278190080ULL;
sj3&=sj4;
sj4=l12;
sj5=24ULL;
sj4>>=(sj5&63);
sj5=16711680ULL;
sj4&=sj5;
sj3|=sj4;
sj4=l12;
sj5=40ULL;
sj4>>=(sj5&63);
sj5=65280ULL;
sj4&=sj5;
sj5=l12;
sj6=56ULL;
sj5>>=(sj6&63);
sj4|=sj5;
sj3|=sj4;
sj2|=sj3;
si3=l2;
sj3=i64_load(&i->m0,(U64)si3+64U);
l13=sj3;
sj2*=sj3;
sj3=l13;
sj4=56ULL;
sj3<<=(sj4&63);
sj4=l13;
sj5=65280ULL;
sj4&=sj5;
sj5=40ULL;
sj4<<=(sj5&63);
sj3|=sj4;
sj4=l13;
sj5=16711680ULL;
sj4&=sj5;
sj5=24ULL;
sj4<<=(sj5&63);
sj5=l13;
sj6=4278190080ULL;
sj5&=sj6;
sj6=8ULL;
sj5<<=(sj6&63);
sj4|=sj5;
sj3|=sj4;
sj4=l13;
sj5=8ULL;
sj4>>=(sj5&63);
sj5=4278190080ULL;
sj4&=sj5;
sj5=l13;
sj6=24ULL;
sj5>>=(sj6&63);
sj6=16711680ULL;
sj5&=sj6;
sj4|=sj5;
sj5=l13;
sj6=40ULL;
sj5>>=(sj6&63);
sj6=65280ULL;
sj5&=sj6;
sj6=l13;
sj7=56ULL;
sj6>>=(sj7&63);
sj5|=sj6;
sj4|=sj5;
sj3|=sj4;
sj4=l12;
sj5=-1ULL;
sj4^=sj5;
sj3*=sj4;
l12=sj3;
sj4=56ULL;
sj3<<=(sj4&63);
sj4=l12;
sj5=65280ULL;
sj4&=sj5;
sj5=40ULL;
sj4<<=(sj5&63);
sj3|=sj4;
sj4=l12;
sj5=16711680ULL;
sj4&=sj5;
sj5=24ULL;
sj4<<=(sj5&63);
sj5=l12;
sj6=4278190080ULL;
sj5&=sj6;
sj6=8ULL;
sj5<<=(sj6&63);
sj4|=sj5;
sj3|=sj4;
sj4=l12;
sj5=8ULL;
sj4>>=(sj5&63);
sj5=4278190080ULL;
sj4&=sj5;
sj5=l12;
sj6=24ULL;
sj5>>=(sj6&63);
sj6=16711680ULL;
sj5&=sj6;
sj4|=sj5;
sj5=l12;
sj6=40ULL;
sj5>>=(sj6&63);
sj6=65280ULL;
sj5&=sj6;
sj6=l12;
sj7=56ULL;
sj6>>=(sj7&63);
sj5|=sj6;
sj4|=sj5;
sj3|=sj4;
sj2^=sj3;
sj3=l13;
sj2=I64_ROTL(sj2,sj3);
si2=(U32)(sj2);
si3=l4;
f2058(i,si0,si1,si2,si3);
si0=l2;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L16;
}
L17:;
si0=16959195U;
si1=43U;
si2=16959756U;
f604(i,si0,si1,si2);
UNREACHABLE;
L16:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+4U);
l14=si0;
si0=l15;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=4U;
si0=si0 != si1;
if(si0){
goto L20;
}
si0=l10;
si1=l11;
si2=384U;
si1*=si2;
si0+=si1;
si1=236U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=l14;
si0+=si1;
l14=si0;
goto L19;
L20:;
si0=l10;
si0=!(si0);
if(si0){
goto L18;
}
L19:;
si0=l10;
si1=l11;
si2=384U;
si1*=si2;
si0+=si1;
l6=si0;
si1=368U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l11=si0;
si1=l6;
si1=i32_load(&i->m0,(U64)si1+332U);
l10=si1;
si0=si0 <= si1;
if(si0){
goto L5;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+56U);
l11=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+52U);
l9=si0;
si0=l6;
si0=i32_load(&i->m0,(U64)si0+360U);
si1=l10;
si2=4U;
si1<<=(si2&31);
si0+=si1;
l6=si0;
si0=i32_load(&i->m0,(U64)si0+8U);
l10=si0;
si1=l6;
si1=i32_load(&i->m0,(U64)si1+4U);
si0=si0 != si1;
if(si0){
goto L21;
}
si0=l6;
si1=l10;
f1796(i,si0,si1);
si0=l6;
si0=i32_load(&i->m0,(U64)si0+8U);
l10=si0;
L21:;
si0=l6;
si0=i32_load(&i->m0,(U64)si0);
si1=l10;
si2=20U;
si1*=si2;
si0+=si1;
l10=si0;
si1=17U;
i32_store8(&i->m0,(U64)si0+16U,si1);
si0=l10;
si1=-1U;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l10;
si1=l14;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l10;
si1=l11;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l10;
si1=l9;
i32_store(&i->m0,(U64)si0,si1);
si0=l6;
si1=l6;
si1=i32_load(&i->m0,(U64)si1+8U);
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l4;
si1=12U;
si0+=si1;
l4=si0;
si1=l5;
si0=si0 == si1;
if(si0){
goto L4;
}
goto L6;
L18:;
}
si0=16960789U;
si1=16U;
si2=16960808U;
f634(i,si0,si1,si2);
UNREACHABLE;
L5:;
si0=l10;
si1=l11;
si2=16960824U;
f594(i,si0,si1,si2);
UNREACHABLE;
L4:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+24U);
l6=si0;
si0=!(si0);
if(si0){
goto L2;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+16U);
l4=si0;
si0=!(si0);
if(si0){
goto L2;
}
si0=l4;
si1=l6;
si2=-1U;
si1+=si2;
si2=384U;
si1*=si2;
si0+=si1;
l6=si0;
si1=368U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l10=si0;
si1=l6;
si1=i32_load(&i->m0,(U64)si1+332U);
l4=si1;
si0=si0 <= si1;
if(si0){
goto L1;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+56U);
l10=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+52U);
l0=si0;
si0=l6;
si0=i32_load(&i->m0,(U64)si0+360U);
si1=l4;
si2=4U;
si1<<=(si2&31);
si0+=si1;
l6=si0;
si0=i32_load(&i->m0,(U64)si0+8U);
l4=si0;
si1=l6;
si1=i32_load(&i->m0,(U64)si1+4U);
si0=si0 != si1;
if(si0){
goto L22;
}
si0=l6;
si1=l4;
f1796(i,si0,si1);
si0=l6;
si0=i32_load(&i->m0,(U64)si0+8U);
l4=si0;
L22:;
si0=l6;
si0=i32_load(&i->m0,(U64)si0);
si1=l4;
si2=20U;
si1*=si2;
si0+=si1;
l4=si0;
si1=67U;
i32_store8(&i->m0,(U64)si0+16U,si1);
si0=l4;
si1=-1U;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l4;
si1=l3;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l4;
si1=l10;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l4;
si1=l0;
i32_store(&i->m0,(U64)si0,si1);
si0=l6;
si1=l6;
si1=i32_load(&i->m0,(U64)si1+8U);
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0+8U,si1);
L3:;
si0=l2;
si1=80U;
si0+=si1;
i->g0=si0;
si0=l3;
si1=0U;
si0=si0 != si1;
goto L0;
L2:;
si0=16960789U;
si1=16U;
si2=16960808U;
f634(i,si0,si1,si2);
UNREACHABLE;
L1:;
si0=l4;
si1=l10;
si2=16960824U;
f594(i,si0,si1,si2);
UNREACHABLE;
L0:;
return si0;
}

void f1735(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 si0,si1,si2;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+24U);
l2=si0;
si0=!(si0);
if(si0){
goto L2;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+16U);
l3=si0;
si0=!(si0);
if(si0){
goto L2;
}
si0=l3;
si1=l2;
si2=-1U;
si1+=si2;
si2=384U;
si1*=si2;
si0+=si1;
l2=si0;
si1=368U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
si1=l2;
si1=i32_load(&i->m0,(U64)si1+332U);
l3=si1;
si0=si0 <= si1;
if(si0){
goto L1;
}
si0=l0;
si1=56U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+52U);
l5=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+360U);
si1=l3;
si2=4U;
si1<<=(si2&31);
si0+=si1;
l0=si0;
si0=i32_load(&i->m0,(U64)si0+8U);
l2=si0;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+4U);
si0=si0 != si1;
if(si0){
goto L3;
}
si0=l0;
si1=l2;
f1796(i,si0,si1);
si0=l0;
si0=i32_load(&i->m0,(U64)si0+8U);
l2=si0;
L3:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
si1=l2;
si2=20U;
si1*=si2;
si0+=si1;
l2=si0;
si1=43U;
i32_store8(&i->m0,(U64)si0+16U,si1);
si0=l2;
si1=-1U;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l2;
si1=l1;
si2=255U;
si1&=si2;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l2;
si1=l4;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l2;
si1=l5;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+8U);
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0+8U,si1);
goto L0;
L2:;
si0=16960789U;
si1=16U;
si2=16960808U;
f634(i,si0,si1,si2);
UNREACHABLE;
L1:;
si0=l3;
si1=l4;
si2=16960824U;
f594(i,si0,si1,si2);
UNREACHABLE;
L0:;
}

void f1736(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4,U32 l5,U32 l6) {
U32 l7=0;
U32 l8=0;
U32 l9=0;
U32 l10=0;
U32 l11=0;
U32 l12=0;
U32 l13=0;
U64 l14=0;
U32 l15=0;
U32 si0,si1,si2,si3,si4;
U64 sj1;
si0=i->g0;
si1=176U;
si0-=si1;
l7=si0;
i->g0=si0;
si0=l7;
si1=32U;
si0+=si1;
si1=l1;
si2=l2;
si3=l3;
si4=l4;
f1743(i,si0,si1,si2,si3,si4);
si0=l7;
si0=i32_load(&i->m0,(U64)si0+32U);
l3=si0;
si1=20U;
si0=si0 != si1;
if(si0){
goto L7;
}
si0=l4;
si1=l2;
si0+=si1;
si1=l6;
si0+=si1;
l8=si0;
si0=l5;
si1=l6;
si2=88U;
si1*=si2;
l2=si1;
si0+=si1;
l9=si0;
si0=l7;
si1=40U;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
l10=si0;
si0=l7;
si0=i32_load(&i->m0,(U64)si0+36U);
l11=si0;
si0=l5;
l4=si0;
L9:;
{
si0=l2;
l3=si0;
si0=!(si0);
if(si0){
goto L8;
}
si0=l3;
si1=-88U;
si0+=si1;
l2=si0;
si0=l4;
si1=72U;
si0+=si1;
l12=si0;
si0=l4;
si1=88U;
si0+=si1;
l4=si0;
si0=l12;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L9;
}
}
L8:;
si0=l6;
si0=!(si0);
if(si0){
goto L6;
}
si0=l6;
si1=88U;
si0*=si1;
l2=si0;
si0=l5;
si1=80U;
si0+=si1;
l4=si0;
L14:;
{
si0=l4;
si1=-8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l12=si0;
si0=!(si0);
if(si0){
goto L15;
}
si0=l7;
si1=l4;
si1=i32_load(&i->m0,(U64)si1);
l13=si1;
i32_store(&i->m0,(U64)si0+128U,si1);
si0=l7;
si1=l12;
i32_store(&i->m0,(U64)si0+124U,si1);
si0=l13;
si1=9U;
si0=si0 != si1;
if(si0){
goto L15;
}
si0=16958928U;
si1=l12;
si2=9U;
si0=f15142(i,si0,si1,si2);
si0=!(si0);
if(si0){
goto L13;
}
L15:;
si0=l4;
si1=88U;
si0+=si1;
l4=si0;
si0=l2;
si1=-88U;
si0+=si1;
l2=si0;
if(si0){
goto L14;
}
}
si0=l10;
si1=255U;
si0&=si1;
if(si0){
goto L3;
}
si0=l3;
if(si0){
goto L3;
}
si0=l6;
si0=!(si0);
if(si0){
goto L5;
}
si0=l7;
si1=0U;
i32_store(&i->m0,(U64)si0+96U,si1);
si0=l7;
sj1=8ULL;
i64_store(&i->m0,(U64)si0+88U,sj1);
si0=l6;
si1=88U;
si0*=si1;
l3=si0;
L17:;
{
si0=l5;
si1=72U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
if(si0){
goto L18;
}
si0=l7;
si1=44U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l7;
si1=1U;
i32_store(&i->m0,(U64)si0+36U,si1);
si0=l7;
si1=16960496U;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l7;
si1=16958728U;
i32_store(&i->m0,(U64)si0+40U,si1);
si0=l7;
si1=32U;
si0+=si1;
si1=16960504U;
f614(i,si0,si1);
UNREACHABLE;
L18:;
si0=l7;
si1=0U;
i32_store(&i->m0,(U64)si0+144U,si1);
si0=l7;
sj1=1ULL;
i64_store(&i->m0,(U64)si0+136U,sj1);
si0=l7;
si1=3U;
i32_store8(&i->m0,(U64)si0+64U,si1);
si0=l7;
si1=32U;
i32_store(&i->m0,(U64)si0+48U,si1);
si0=l7;
si1=0U;
i32_store(&i->m0,(U64)si0+60U,si1);
si0=l7;
si1=16958520U;
i32_store(&i->m0,(U64)si0+56U,si1);
si0=l7;
si1=0U;
i32_store(&i->m0,(U64)si0+40U,si1);
si0=l7;
si1=0U;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l5;
si1=80U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si0=l7;
si1=l7;
si2=136U;
si1+=si2;
i32_store(&i->m0,(U64)si0+52U,si1);
si0=l7;
si1=32U;
si0+=si1;
si1=l4;
si2=l2;
si0=f642(i,si0,si1,si2);
if(si0){
goto L12;
}
si0=l7;
si1=8U;
si0+=si1;
l2=si0;
si1=l7;
si2=136U;
si1+=si2;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l7;
si1=l7;
sj1=i64_load(&i->m0,(U64)si1+136U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l7;
si0=i32_load(&i->m0,(U64)si0+96U);
l4=si0;
si1=l7;
si1=i32_load(&i->m0,(U64)si1+92U);
si0=si0 != si1;
if(si0){
goto L19;
}
si0=l7;
si1=88U;
si0+=si1;
si1=l4;
f1793(i,si0,si1);
si0=l7;
si0=i32_load(&i->m0,(U64)si0+96U);
l4=si0;
L19:;
si0=l7;
si0=i32_load(&i->m0,(U64)si0+88U);
si1=l4;
si2=24U;
si1*=si2;
si0+=si1;
l4=si0;
si1=l7;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l4;
si1=7U;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=12U;
si0+=si1;
si1=l2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l7;
si1=l7;
si1=i32_load(&i->m0,(U64)si1+96U);
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0+96U,si1);
si0=l7;
si1=32U;
si0+=si1;
si1=l1;
si2=l5;
f1709(i,si0,si1,si2);
si0=l7;
si0=i32_load(&i->m0,(U64)si0+32U);
l4=si0;
si1=20U;
si0=si0 != si1;
if(si0){
goto L16;
}
si0=l5;
si1=88U;
si0+=si1;
l5=si0;
si0=l3;
si1=-88U;
si0+=si1;
l3=si0;
if(si0){
goto L17;
}
}
si0=l7;
si1=44U;
si0+=si1;
si1=l7;
si2=96U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l7;
si1=l7;
sj1=i64_load(&i->m0,(U64)si1+88U);
i64_store(&i->m0,(U64)si0+36U,sj1);
si0=l7;
si1=2U;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l1;
si1=l7;
si2=32U;
si1+=si2;
f1704(i,si0,si1);
si0=1U;
l4=si0;
goto L4;
L16:;
si0=l0;
si1=l7;
sj1=i64_load(&i->m0,(U64)si1+36U);
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l0;
si1=28U;
si0+=si1;
si1=l7;
si2=32U;
si1+=si2;
si2=28U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=20U;
si0+=si1;
si1=l7;
si2=32U;
si1+=si2;
si2=20U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=12U;
si0+=si1;
si1=l7;
si2=32U;
si1+=si2;
si2=12U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=l4;
i32_store(&i->m0,(U64)si0,si1);
si0=l7;
si0=i32_load(&i->m0,(U64)si0+96U);
l2=si0;
si0=!(si0);
if(si0){
goto L20;
}
si0=l7;
si0=i32_load(&i->m0,(U64)si0+88U);
l4=si0;
L21:;
{
si0=l4;
f1821(i,si0);
si0=l4;
si1=24U;
si0+=si1;
l4=si0;
si0=l2;
si1=-1U;
si0+=si1;
l2=si0;
if(si0){
goto L21;
}
}
L20:;
si0=l7;
si0=i32_load(&i->m0,(U64)si0+92U);
si0=!(si0);
if(si0){
goto L1;
}
si0=l7;
si0=i32_load(&i->m0,(U64)si0+88U);
f15024(i,si0);
goto L1;
L13:;
si0=l7;
si1=16U;
i32_store(&i->m0,(U64)si0+92U,si1);
si0=l7;
si1=16959436U;
i32_store(&i->m0,(U64)si0+88U,si1);
si0=l7;
si1=32U;
si0+=si1;
si1=12U;
si0+=si1;
l2=si0;
sj1=2ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l7;
si1=136U;
si0+=si1;
si1=12U;
si0+=si1;
si1=502U;
i32_store(&i->m0,(U64)si0,si1);
si0=l7;
si1=2U;
i32_store(&i->m0,(U64)si0+36U,si1);
si0=l7;
si1=16959468U;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l7;
si1=502U;
i32_store(&i->m0,(U64)si0+140U,si1);
si0=l7;
si1=l7;
si2=136U;
si1+=si2;
i32_store(&i->m0,(U64)si0+40U,si1);
si0=l7;
si1=l7;
si2=124U;
si1+=si2;
i32_store(&i->m0,(U64)si0+144U,si1);
si0=l7;
si1=l7;
si2=88U;
si1+=si2;
i32_store(&i->m0,(U64)si0+136U,si1);
si0=l7;
si1=l7;
si2=32U;
si1+=si2;
f64(i,si0,si1);
si0=l1;
si1=56U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+40U);
l12=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+52U);
l13=si0;
si0=l1;
si1=48U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
if(si0){
goto L23;
}
si0=1U;
l1=si0;
goto L22;
L23:;
si0=l4;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L11;
}
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=l4;
si0=f15022(i,si0);
l1=si0;
si0=!(si0);
if(si0){
goto L10;
}
L22:;
si0=l1;
si1=l12;
si2=l4;
si0=f15143(i,si0,si1,si2);
l12=si0;
si0=l2;
si1=l7;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
l1=si1;
i32_store(&i->m0,(U64)si0,si1);
si0=l7;
si1=l7;
sj1=i64_load(&i->m0,(U64)si1);
l14=sj1;
i64_store(&i->m0,(U64)si0+36U,sj1);
si0=l0;
si1=12U;
si0+=si1;
si1=l1;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
sj1=l14;
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l0;
si1=l3;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l0;
si1=l13;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l0;
si1=l4;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l0;
si1=l4;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l0;
si1=l12;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l0;
si1=2U;
i32_store(&i->m0,(U64)si0,si1);
goto L1;
L12:;
si0=16958544U;
si1=55U;
si2=l7;
si3=175U;
si2+=si3;
si3=16958600U;
si4=16958692U;
f641(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L11:;
f53(i);
UNREACHABLE;
L10:;
si0=1U;
si1=l4;
f52(i,si0,si1);
UNREACHABLE;
L7:;
si0=l0;
si1=l7;
sj1=i64_load(&i->m0,(U64)si1+41U);
i64_store(&i->m0,(U64)si0+9U,sj1);
si0=l0;
si1=17U;
si0+=si1;
si1=l7;
si2=32U;
si1+=si2;
si2=17U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=25U;
si0+=si1;
si1=l7;
si2=32U;
si1+=si2;
si2=25U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=32U;
si0+=si1;
si1=l7;
si2=32U;
si1+=si2;
si2=32U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l7;
si0=i32_load(&i->m0,(U64)si0+36U);
l4=si0;
si0=l0;
si1=l7;
si1=i32_load8_u(&i->m0,(U64)si1+40U);
i32_store8(&i->m0,(U64)si0+8U,si1);
si0=l0;
si1=l4;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l3;
i32_store(&i->m0,(U64)si0,si1);
goto L1;
L6:;
si0=l10;
si1=255U;
si0&=si1;
if(si0){
goto L3;
}
si0=l3;
if(si0){
goto L3;
}
L5:;
si0=0U;
l4=si0;
L4:;
goto L2;
L3:;
si0=l10;
si1=255U;
si0&=si1;
if(si0){
goto L30;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+24U);
l4=si0;
si0=!(si0);
if(si0){
goto L25;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+16U);
l2=si0;
si0=!(si0);
if(si0){
goto L25;
}
si0=l2;
si1=l4;
si2=-1U;
si1+=si2;
si2=384U;
si1*=si2;
si0+=si1;
l4=si0;
si1=368U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si1=l4;
si1=i32_load(&i->m0,(U64)si1+332U);
l2=si1;
si0=si0 <= si1;
if(si0){
goto L26;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+56U);
l3=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+52U);
l13=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+360U);
si1=l2;
si2=4U;
si1<<=(si2&31);
si0+=si1;
l4=si0;
si0=i32_load(&i->m0,(U64)si0+8U);
l12=si0;
si1=l4;
si1=i32_load(&i->m0,(U64)si1+4U);
si0=si0 != si1;
if(si0){
goto L31;
}
si0=l4;
si1=l12;
f1796(i,si0,si1);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+8U);
l12=si0;
L31:;
si0=l4;
si1=8U;
si0+=si1;
l2=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
si1=l12;
si2=20U;
si1*=si2;
si0+=si1;
l4=si0;
si1=l13;
i32_store(&i->m0,(U64)si0,si1);
si0=67U;
l12=si0;
goto L29;
L30:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+24U);
l4=si0;
si0=!(si0);
if(si0){
goto L27;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+16U);
l2=si0;
si0=!(si0);
if(si0){
goto L27;
}
si0=l2;
si1=l4;
si2=-1U;
si1+=si2;
si2=384U;
si1*=si2;
si0+=si1;
l4=si0;
si1=368U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si1=l4;
si1=i32_load(&i->m0,(U64)si1+332U);
l2=si1;
si0=si0 <= si1;
if(si0){
goto L28;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+56U);
l3=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+52U);
l13=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+360U);
si1=l2;
si2=4U;
si1<<=(si2&31);
si0+=si1;
l4=si0;
si0=i32_load(&i->m0,(U64)si0+8U);
l12=si0;
si1=l4;
si1=i32_load(&i->m0,(U64)si1+4U);
si0=si0 != si1;
if(si0){
goto L32;
}
si0=l4;
si1=l12;
f1796(i,si0,si1);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+8U);
l12=si0;
L32:;
si0=l4;
si1=8U;
si0+=si1;
l2=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
si1=l12;
si2=20U;
si1*=si2;
si0+=si1;
l4=si0;
si1=l13;
i32_store(&i->m0,(U64)si0,si1);
si0=68U;
l12=si0;
L29:;
si0=l4;
si1=l12;
i32_store8(&i->m0,(U64)si0+16U,si1);
si0=l4;
si1=-1U;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l4;
si1=l11;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l4;
si1=l3;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l2;
si1=l2;
si1=i32_load(&i->m0,(U64)si1);
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l6;
si0=!(si0);
if(si0){
goto L24;
}
si0=l7;
si1=32U;
si0+=si1;
si1=20U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l7;
sj1=0ULL;
i64_store(&i->m0,(U64)si0+44U,sj1);
si0=l7;
si1=l9;
i32_store(&i->m0,(U64)si0+40U,si1);
si0=l7;
si1=l5;
i32_store(&i->m0,(U64)si0+36U,si1);
si0=l7;
si1=2U;
i32_store16(&i->m0,(U64)si0+76U,si1);
si0=l7;
sj1=0ULL;
i64_store(&i->m0,(U64)si0+68U,sj1);
si0=l7;
sj1=21474836479ULL;
i64_store(&i->m0,(U64)si0+60U,sj1);
si0=l7;
si1=1U;
i32_store(&i->m0,(U64)si0+80U,si1);
si0=l7;
si1=88U;
si0+=si1;
si1=4U;
si0|=si1;
l13=si0;
si0=l7;
si1=32U;
si0+=si1;
si1=32U;
si0+=si1;
l15=si0;
si0=l7;
si1=32U;
si0+=si1;
si1=4U;
si0+=si1;
l11=si0;
si0=0U;
l9=si0;
si0=1U;
l5=si0;
si0=0U;
l4=si0;
si0=0U;
l3=si0;
L36:;
{
si0=l7;
si1=-1U;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l7;
si0=i32_load(&i->m0,(U64)si0+52U);
si1=l4;
si0=si0 > si1;
if(si0){
goto L43;
}
si0=l7;
si0=i32_load(&i->m0,(U64)si0+48U);
l2=si0;
si1=l4;
si0=si0 > si1;
if(si0){
goto L46;
}
si0=l2;
si1=l4;
si0=si0 != si1;
if(si0){
goto L47;
}
si0=l7;
si0=i32_load(&i->m0,(U64)si0+72U);
si1=l2;
si2=l7;
si2=i32_load(&i->m0,(U64)si2+56U);
si1-=si2;
si0=si0 > si1;
if(si0){
goto L46;
}
L47:;
si0=l7;
si0=i32_load8_u(&i->m0,(U64)si0+77U);
if(si0){
goto L43;
}
si0=l2;
si1=l4;
si0=si0 == si1;
if(si0){
goto L48;
}
si0=l11;
si1=l4;
si0=f2017(i,si0,si1);
l2=si0;
goto L45;
L48:;
si0=l7;
si0=i32_load(&i->m0,(U64)si0+44U);
l2=si0;
si0=l7;
si1=0U;
i32_store(&i->m0,(U64)si0+44U,si1);
si0=l2;
if(si0){
goto L42;
}
si0=l7;
si0=i32_load(&i->m0,(U64)si0+36U);
l2=si0;
si1=l7;
si1=i32_load(&i->m0,(U64)si1+40U);
si0=si0 != si1;
if(si0){
goto L49;
}
si0=l7;
si1=1U;
i32_store8(&i->m0,(U64)si0+77U,si1);
goto L43;
L49:;
si0=l7;
si1=l2;
si2=88U;
si1+=si2;
i32_store(&i->m0,(U64)si0+36U,si1);
si0=l7;
si0=i32_load8_u(&i->m0,(U64)si0+76U);
l10=si0;
si0=l7;
si1=l2;
si1=i32_load(&i->m0,(U64)si1+72U);
si1=!(si1);
l12=si1;
i32_store8(&i->m0,(U64)si0+76U,si1);
si0=l10;
si1=2U;
si0=si0 == si1;
if(si0){
goto L50;
}
si0=l12;
si1=l10;
si2=0U;
si1=si1 != si2;
si0^=si1;
if(si0){
goto L44;
}
L50:;
si0=l7;
si1=2U;
i32_store8(&i->m0,(U64)si0+76U,si1);
goto L41;
L46:;
si0=l11;
si1=l4;
si0=f2018(i,si0,si1);
l2=si0;
L45:;
si0=l2;
if(si0){
goto L42;
}
si0=l7;
si0=i32_load(&i->m0,(U64)si0+32U);
si1=1U;
si0+=si1;
l9=si0;
goto L43;
L44:;
si0=l7;
si1=l5;
i32_store(&i->m0,(U64)si0+48U,si1);
si0=l7;
si1=l2;
i32_store(&i->m0,(U64)si0+44U,si1);
L43:;
si0=l7;
si1=l9;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l3;
si1=1U;
si0=si0 <= si1;
if(si0){
goto L51;
}
si0=l1;
si1=l3;
f1761(i,si0,si1);
L51:;
si0=l15;
f1838(i,si0);
si0=l7;
si0=i32_load(&i->m0,(U64)si0+68U);
si0=!(si0);
if(si0){
goto L24;
}
si0=l7;
si0=i32_load(&i->m0,(U64)si0+64U);
f15024(i,si0);
goto L24;
L42:;
si0=l7;
si0=i32_load8_u(&i->m0,(U64)si0+76U);
l12=si0;
si0=l7;
si1=2U;
i32_store8(&i->m0,(U64)si0+76U,si1);
si0=l12;
si1=2U;
si0=si0 == si1;
if(si0){
goto L40;
}
L41:;
si0=l7;
si0=i32_load(&i->m0,(U64)si0+36U);
l5=si0;
si1=l7;
si1=i32_load(&i->m0,(U64)si1+40U);
si0=si0 != si1;
if(si0){
goto L52;
}
si0=l7;
si1=1U;
i32_store8(&i->m0,(U64)si0+77U,si1);
goto L37;
L52:;
si0=l7;
si1=l5;
si2=88U;
si1+=si2;
i32_store(&i->m0,(U64)si0+36U,si1);
si0=l12;
si1=0U;
si0=si0 != si1;
si1=l5;
si1=i32_load(&i->m0,(U64)si1+72U);
si1=!(si1);
l10=si1;
si0^=si1;
if(si0){
goto L39;
}
goto L38;
L40:;
si0=16969556U;
si1=43U;
si2=16969600U;
f604(i,si0,si1,si2);
UNREACHABLE;
L39:;
si0=l7;
si1=l7;
si1=i32_load(&i->m0,(U64)si1+48U);
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0+48U,si1);
L38:;
si0=l7;
si1=l5;
i32_store(&i->m0,(U64)si0+44U,si1);
si0=l7;
si1=l10;
i32_store8(&i->m0,(U64)si0+76U,si1);
L37:;
si0=l7;
si1=l7;
si1=i32_load(&i->m0,(U64)si1+32U);
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l12;
si0=!(si0);
if(si0){
goto L61;
}
si0=l7;
si1=136U;
si0+=si1;
si1=l1;
si2=l2;
f1709(i,si0,si1,si2);
si0=l7;
si0=i32_load(&i->m0,(U64)si0+136U);
l12=si0;
si1=20U;
si0=si0 != si1;
if(si0){
goto L60;
}
si0=l3;
si1=1U;
si0+=si1;
l3=si0;
si0=l7;
si1=32U;
si0+=si1;
si1=l4;
si0=f2016(i,si0,si1);
l2=si0;
si0=!(si0);
if(si0){
goto L62;
}
L63:;
{
si0=l7;
si1=136U;
si0+=si1;
si1=l1;
si2=l2;
f1709(i,si0,si1,si2);
si0=l7;
si0=i32_load(&i->m0,(U64)si0+136U);
l12=si0;
si1=20U;
si0=si0 != si1;
if(si0){
goto L60;
}
si0=l3;
si1=1U;
si0+=si1;
l3=si0;
si0=l7;
si1=32U;
si0+=si1;
si1=l4;
si0=f2016(i,si0,si1);
l2=si0;
if(si0){
goto L63;
}
}
L62:;
si0=l7;
si0=i32_load(&i->m0,(U64)si0+32U);
if(si0){
goto L56;
}
si0=l7;
si0=i32_load(&i->m0,(U64)si0+60U);
l2=si0;
si1=-1U;
si0=si0 == si1;
if(si0){
goto L65;
}
si0=l2;
si1=l4;
si0=si0 >= si1;
if(si0){
goto L64;
}
L65:;
si0=l7;
si1=l4;
i32_store(&i->m0,(U64)si0+60U,si1);
L64:;
si0=0U;
l2=si0;
si0=l7;
si1=0U;
i32_store(&i->m0,(U64)si0+32U,si1);
goto L53;
L61:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+72U);
l12=si0;
if(si0){
goto L68;
}
si0=0U;
l5=si0;
goto L67;
L68:;
si0=l7;
si1=0U;
i32_store(&i->m0,(U64)si0+132U,si1);
si0=l7;
sj1=1ULL;
i64_store(&i->m0,(U64)si0+124U,sj1);
si0=l7;
si1=3U;
i32_store8(&i->m0,(U64)si0+168U,si1);
si0=l7;
si1=32U;
i32_store(&i->m0,(U64)si0+152U,si1);
si0=l7;
si1=0U;
i32_store(&i->m0,(U64)si0+164U,si1);
si0=l7;
si1=16958520U;
i32_store(&i->m0,(U64)si0+160U,si1);
si0=l7;
si1=0U;
i32_store(&i->m0,(U64)si0+144U,si1);
si0=l7;
si1=0U;
i32_store(&i->m0,(U64)si0+136U,si1);
si0=l2;
si1=80U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si0=l7;
si1=l7;
si2=124U;
si1+=si2;
i32_store(&i->m0,(U64)si0+156U,si1);
si0=l7;
si1=136U;
si0+=si1;
si1=l12;
si2=l5;
si0=f642(i,si0,si1,si2);
if(si0){
goto L58;
}
si0=l7;
si1=112U;
si0+=si1;
si1=8U;
si0+=si1;
si1=l7;
si2=124U;
si1+=si2;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
l12=si1;
i32_store(&i->m0,(U64)si0,si1);
si0=l7;
si1=l7;
sj1=i64_load(&i->m0,(U64)si1+124U);
l14=sj1;
i64_store(&i->m0,(U64)si0+112U,sj1);
si0=l13;
si1=8U;
si0+=si1;
si1=l12;
i32_store(&i->m0,(U64)si0,si1);
si0=l13;
sj1=l14;
i64_store(&i->m0,(U64)si0,sj1);
si0=l7;
si1=7U;
i32_store(&i->m0,(U64)si0+88U,si1);
si0=l1;
si1=l7;
si2=88U;
si1+=si2;
f1704(i,si0,si1);
si0=l7;
si1=136U;
si0+=si1;
si1=l1;
si2=l2;
f1709(i,si0,si1,si2);
si0=l7;
si0=i32_load(&i->m0,(U64)si0+136U);
l12=si0;
si1=20U;
si0=si0 != si1;
if(si0){
goto L66;
}
si0=1U;
l5=si0;
L67:;
si0=l7;
si1=32U;
si0+=si1;
si1=l4;
si0=f2016(i,si0,si1);
l2=si0;
si0=!(si0);
if(si0){
goto L54;
}
L69:;
{
si0=l2;
si0=i32_load(&i->m0,(U64)si0+72U);
l12=si0;
si0=!(si0);
if(si0){
goto L70;
}
si0=l7;
si1=0U;
i32_store(&i->m0,(U64)si0+132U,si1);
si0=l7;
sj1=1ULL;
i64_store(&i->m0,(U64)si0+124U,sj1);
si0=l7;
si1=3U;
i32_store8(&i->m0,(U64)si0+168U,si1);
si0=l7;
si1=32U;
i32_store(&i->m0,(U64)si0+152U,si1);
si0=l7;
si1=0U;
i32_store(&i->m0,(U64)si0+164U,si1);
si0=l7;
si1=16958520U;
i32_store(&i->m0,(U64)si0+160U,si1);
si0=l7;
si1=0U;
i32_store(&i->m0,(U64)si0+144U,si1);
si0=l7;
si1=0U;
i32_store(&i->m0,(U64)si0+136U,si1);
si0=l2;
si1=80U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l10=si0;
si0=l7;
si1=l7;
si2=124U;
si1+=si2;
i32_store(&i->m0,(U64)si0+156U,si1);
si0=l7;
si1=136U;
si0+=si1;
si1=l12;
si2=l10;
si0=f642(i,si0,si1,si2);
if(si0){
goto L58;
}
si0=l7;
si1=112U;
si0+=si1;
si1=8U;
si0+=si1;
si1=l7;
si2=124U;
si1+=si2;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
l12=si1;
i32_store(&i->m0,(U64)si0,si1);
si0=l7;
si1=l7;
sj1=i64_load(&i->m0,(U64)si1+124U);
l14=sj1;
i64_store(&i->m0,(U64)si0+112U,sj1);
si0=l13;
si1=8U;
si0+=si1;
si1=l12;
i32_store(&i->m0,(U64)si0,si1);
si0=l13;
sj1=l14;
i64_store(&i->m0,(U64)si0,sj1);
si0=l7;
si1=7U;
i32_store(&i->m0,(U64)si0+88U,si1);
si0=l1;
si1=l7;
si2=88U;
si1+=si2;
f1704(i,si0,si1);
si0=l7;
si1=136U;
si0+=si1;
si1=l1;
si2=l2;
f1709(i,si0,si1,si2);
si0=l7;
si0=i32_load(&i->m0,(U64)si0+136U);
l12=si0;
si1=20U;
si0=si0 != si1;
if(si0){
goto L66;
}
si0=l5;
si1=1U;
si0+=si1;
l5=si0;
L70:;
si0=l7;
si1=32U;
si0+=si1;
si1=l4;
si0=f2016(i,si0,si1);
l2=si0;
si0=!(si0);
if(si0){
goto L54;
}
goto L69;
}
L66:;
si0=l7;
si1=24U;
si0+=si1;
si1=l7;
si2=164U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l7;
si1=16U;
si0+=si1;
si1=l7;
si2=156U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l7;
si1=8U;
si0+=si1;
si1=l7;
si2=148U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l7;
si1=l7;
sj1=i64_load(&i->m0,(U64)si1+140U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l7;
si0=i32_load(&i->m0,(U64)si0+32U);
if(si0){
goto L57;
}
si0=l7;
si0=i32_load(&i->m0,(U64)si0+60U);
l2=si0;
si1=-1U;
si0=si0 == si1;
if(si0){
goto L72;
}
si0=l2;
si1=l4;
si0=si0 >= si1;
if(si0){
goto L71;
}
L72:;
si0=l7;
si1=l4;
i32_store(&i->m0,(U64)si0+60U,si1);
L71:;
si0=l7;
si1=0U;
i32_store(&i->m0,(U64)si0+32U,si1);
goto L59;
L60:;
si0=l7;
si1=24U;
si0+=si1;
si1=l7;
si2=164U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l7;
si1=16U;
si0+=si1;
si1=l7;
si2=156U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l7;
si1=8U;
si0+=si1;
si1=l7;
si2=148U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l7;
si1=l7;
sj1=i64_load(&i->m0,(U64)si1+140U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l7;
si0=i32_load(&i->m0,(U64)si0+32U);
if(si0){
goto L55;
}
si0=l7;
si0=i32_load(&i->m0,(U64)si0+60U);
l2=si0;
si1=-1U;
si0=si0 == si1;
if(si0){
goto L74;
}
si0=l2;
si1=l4;
si0=si0 >= si1;
if(si0){
goto L73;
}
L74:;
si0=l7;
si1=l4;
i32_store(&i->m0,(U64)si0+60U,si1);
L73:;
si0=l7;
si1=0U;
i32_store(&i->m0,(U64)si0+32U,si1);
L59:;
si0=l7;
si0=i32_load(&i->m0,(U64)si0+72U);
l2=si0;
si0=!(si0);
if(si0){
goto L75;
}
si0=l7;
si0=i32_load(&i->m0,(U64)si0+64U);
l4=si0;
L76:;
{
si0=l4;
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L77;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
f15024(i,si0);
L77:;
si0=l4;
si1=16U;
si0+=si1;
l4=si0;
si0=l2;
si1=-1U;
si0+=si1;
l2=si0;
if(si0){
goto L76;
}
}
L75:;
si0=l7;
si0=i32_load(&i->m0,(U64)si0+68U);
si0=!(si0);
if(si0){
goto L78;
}
si0=l7;
si0=i32_load(&i->m0,(U64)si0+64U);
f15024(i,si0);
L78:;
si0=l0;
si1=l7;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l0;
si1=28U;
si0+=si1;
si1=l7;
si2=24U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=20U;
si0+=si1;
si1=l7;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=12U;
si0+=si1;
si1=l7;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=l12;
i32_store(&i->m0,(U64)si0,si1);
goto L1;
L58:;
si0=16958544U;
si1=55U;
si2=l7;
si3=175U;
si2+=si3;
si3=16958600U;
si4=16958692U;
f641(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L57:;
si0=16969384U;
si1=16U;
si2=l7;
si3=175U;
si2+=si3;
si3=16969400U;
si4=16969524U;
f641(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L56:;
si0=16969384U;
si1=16U;
si2=l7;
si3=175U;
si2+=si3;
si3=16969400U;
si4=16969524U;
f641(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L55:;
si0=16969384U;
si1=16U;
si2=l7;
si3=175U;
si2+=si3;
si3=16969400U;
si4=16969524U;
f641(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L54:;
si0=l7;
si0=i32_load(&i->m0,(U64)si0+32U);
if(si0){
goto L35;
}
si0=l7;
si0=i32_load(&i->m0,(U64)si0+60U);
l2=si0;
si1=-1U;
si0=si0 == si1;
if(si0){
goto L80;
}
si0=l2;
si1=l4;
si0=si0 >= si1;
if(si0){
goto L79;
}
L80:;
si0=l7;
si1=l4;
i32_store(&i->m0,(U64)si0+60U,si1);
L79:;
si0=l7;
si1=0U;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+24U);
l4=si0;
si0=!(si0);
if(si0){
goto L34;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+16U);
l2=si0;
si0=!(si0);
if(si0){
goto L34;
}
si0=l2;
si1=l4;
si2=-1U;
si1+=si2;
si2=384U;
si1*=si2;
si0+=si1;
l4=si0;
si1=368U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l12=si0;
si1=l4;
si1=i32_load(&i->m0,(U64)si1+332U);
l2=si1;
si0=si0 <= si1;
if(si0){
goto L33;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+56U);
l12=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+52U);
l10=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+360U);
si1=l2;
si2=4U;
si1<<=(si2&31);
si0+=si1;
l4=si0;
si0=i32_load(&i->m0,(U64)si0+8U);
l2=si0;
si1=l4;
si1=i32_load(&i->m0,(U64)si1+4U);
si0=si0 != si1;
if(si0){
goto L81;
}
si0=l4;
si1=l2;
f1796(i,si0,si1);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+8U);
l2=si0;
L81:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
si1=l2;
si2=20U;
si1*=si2;
si0+=si1;
l2=si0;
si1=73U;
i32_store8(&i->m0,(U64)si0+16U,si1);
si0=l2;
si1=-1U;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l2;
si1=l5;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l2;
si1=l12;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l2;
si1=l10;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=l4;
si1=i32_load(&i->m0,(U64)si1+8U);
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l3;
si1=1U;
si0+=si1;
l3=si0;
si0=l7;
si0=i32_load(&i->m0,(U64)si0+32U);
l2=si0;
L53:;
si0=l7;
si1=l7;
si1=i32_load(&i->m0,(U64)si1+80U);
l4=si1;
si2=1U;
si1+=si2;
l5=si1;
i32_store(&i->m0,(U64)si0+80U,si1);
si0=l2;
si0=!(si0);
if(si0){
goto L36;
}
}
si0=16958364U;
si1=16U;
si2=l7;
si3=175U;
si2+=si3;
si3=16958380U;
si4=16958504U;
f641(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L35:;
si0=16969384U;
si1=16U;
si2=l7;
si3=175U;
si2+=si3;
si3=16969400U;
si4=16969524U;
f641(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L34:;
si0=16960789U;
si1=16U;
si2=16960808U;
f634(i,si0,si1,si2);
UNREACHABLE;
L33:;
si0=l2;
si1=l12;
si2=16960824U;
f594(i,si0,si1,si2);
UNREACHABLE;
L28:;
si0=l2;
si1=l3;
si2=16960824U;
f594(i,si0,si1,si2);
UNREACHABLE;
L27:;
si0=16960789U;
si1=16U;
si2=16960808U;
f634(i,si0,si1,si2);
UNREACHABLE;
L26:;
si0=l2;
si1=l3;
si2=16960824U;
f594(i,si0,si1,si2);
UNREACHABLE;
L25:;
si0=16960789U;
si1=16U;
si2=16960808U;
f634(i,si0,si1,si2);
UNREACHABLE;
L24:;
si0=l6;
si1=0U;
si0=si0 != si1;
l2=si0;
si0=2U;
l4=si0;
L2:;
si0=l0;
si1=l4;
i32_store8(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=20U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=8U;
si0+=si1;
si1=l8;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=5U;
si0+=si1;
si1=l2;
i32_store8(&i->m0,(U64)si0,si1);
L1:;
si0=l7;
si1=176U;
si0+=si1;
i->g0=si0;
L0:;
}

void f1737(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 si0,si1,si2;
si0=l1;
si0=i32_load8_u(&i->m0,(U64)si0);
switch(si0){
case 0:
goto L10;
case 1:
goto L9;
case 2:
goto L8;
default:
goto L10;
}
L10:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+24U);
l2=si0;
si0=!(si0);
if(si0){
goto L6;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+16U);
l3=si0;
si0=!(si0);
if(si0){
goto L6;
}
si0=l3;
si1=l2;
si2=-1U;
si1+=si2;
si2=384U;
si1*=si2;
si0+=si1;
l4=si0;
si1=368U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si1=l4;
si1=i32_load(&i->m0,(U64)si1+332U);
l5=si1;
si0=si0 <= si1;
if(si0){
goto L5;
}
si0=l0;
si1=56U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+52U);
l6=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
l3=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+360U);
si1=l5;
si2=4U;
si1<<=(si2&31);
si0+=si1;
l0=si0;
si0=i32_load(&i->m0,(U64)si0+8U);
l4=si0;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+4U);
si0=si0 != si1;
if(si0){
goto L11;
}
si0=l0;
si1=l4;
f1796(i,si0,si1);
si0=l0;
si0=i32_load(&i->m0,(U64)si0+8U);
l4=si0;
L11:;
si0=l0;
si1=8U;
si0+=si1;
l1=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
si1=l4;
si2=20U;
si1*=si2;
si0+=si1;
l0=si0;
si1=l6;
i32_store(&i->m0,(U64)si0,si1);
si0=44U;
l4=si0;
goto L7;
L9:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+24U);
l2=si0;
si0=!(si0);
if(si0){
goto L4;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+16U);
l3=si0;
si0=!(si0);
if(si0){
goto L4;
}
si0=l3;
si1=l2;
si2=-1U;
si1+=si2;
si2=384U;
si1*=si2;
si0+=si1;
l4=si0;
si1=368U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si1=l4;
si1=i32_load(&i->m0,(U64)si1+332U);
l5=si1;
si0=si0 <= si1;
if(si0){
goto L3;
}
si0=l0;
si1=56U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+52U);
l6=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
l3=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+360U);
si1=l5;
si2=4U;
si1<<=(si2&31);
si0+=si1;
l0=si0;
si0=i32_load(&i->m0,(U64)si0+8U);
l4=si0;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+4U);
si0=si0 != si1;
if(si0){
goto L12;
}
si0=l0;
si1=l4;
f1796(i,si0,si1);
si0=l0;
si0=i32_load(&i->m0,(U64)si0+8U);
l4=si0;
L12:;
si0=l0;
si1=8U;
si0+=si1;
l1=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
si1=l4;
si2=20U;
si1*=si2;
si0+=si1;
l0=si0;
si1=l6;
i32_store(&i->m0,(U64)si0,si1);
si0=45U;
l4=si0;
goto L7;
L8:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+24U);
l2=si0;
si0=!(si0);
if(si0){
goto L2;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+16U);
l3=si0;
si0=!(si0);
if(si0){
goto L2;
}
si0=l3;
si1=l2;
si2=-1U;
si1+=si2;
si2=384U;
si1*=si2;
si0+=si1;
l4=si0;
si1=368U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si1=l4;
si1=i32_load(&i->m0,(U64)si1+332U);
l5=si1;
si0=si0 <= si1;
if(si0){
goto L1;
}
si0=l0;
si1=56U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+52U);
l6=si0;
si0=l1;
si0=i32_load8_u(&i->m0,(U64)si0+1U);
l3=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+360U);
si1=l5;
si2=4U;
si1<<=(si2&31);
si0+=si1;
l0=si0;
si0=i32_load(&i->m0,(U64)si0+8U);
l4=si0;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+4U);
si0=si0 != si1;
if(si0){
goto L13;
}
si0=l0;
si1=l4;
f1796(i,si0,si1);
si0=l0;
si0=i32_load(&i->m0,(U64)si0+8U);
l4=si0;
L13:;
si0=l0;
si1=8U;
si0+=si1;
l1=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
si1=l4;
si2=20U;
si1*=si2;
si0+=si1;
l0=si0;
si1=l6;
i32_store(&i->m0,(U64)si0,si1);
si0=46U;
l4=si0;
L7:;
si0=l0;
si1=l4;
i32_store8(&i->m0,(U64)si0+16U,si1);
si0=l0;
si1=-1U;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l0;
si1=l3;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l0;
si1=l2;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l1;
si1=l1;
si1=i32_load(&i->m0,(U64)si1);
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
goto L0;
L6:;
si0=16960789U;
si1=16U;
si2=16960808U;
f634(i,si0,si1,si2);
UNREACHABLE;
L5:;
si0=l5;
si1=l2;
si2=16960824U;
f594(i,si0,si1,si2);
UNREACHABLE;
L4:;
si0=16960789U;
si1=16U;
si2=16960808U;
f634(i,si0,si1,si2);
UNREACHABLE;
L3:;
si0=l5;
si1=l2;
si2=16960824U;
f594(i,si0,si1,si2);
UNREACHABLE;
L2:;
si0=16960789U;
si1=16U;
si2=16960808U;
f634(i,si0,si1,si2);
UNREACHABLE;
L1:;
si0=l5;
si1=l2;
si2=16960824U;
f594(i,si0,si1,si2);
UNREACHABLE;
L0:;
}

void f1738(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 l8=0;
U32 l9=0;
U32 si0,si1,si2;
U64 sj1;
si0=l2;
si0=!(si0);
if(si0){
goto L3;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+24U);
l3=si0;
si0=!(si0);
if(si0){
goto L1;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+16U);
l4=si0;
si0=!(si0);
if(si0){
goto L1;
}
si0=l4;
si1=l3;
si2=-1U;
si1+=si2;
l5=si1;
si2=384U;
si1*=si2;
si0+=si1;
l3=si0;
si1=332U;
si0+=si1;
l6=si0;
si0=l3;
si1=360U;
si0+=si1;
l7=si0;
si0=l0;
si1=56U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l8=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+52U);
l9=si0;
si0=l2;
si1=56U;
si0*=si1;
l3=si0;
si0=l4;
si1=l5;
si2=384U;
si1*=si2;
si0+=si1;
si1=368U;
si0+=si1;
l4=si0;
L4:;
{
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si1=l6;
si1=i32_load(&i->m0,(U64)si1);
l0=si1;
si0=si0 <= si1;
if(si0){
goto L2;
}
si0=l7;
si0=i32_load(&i->m0,(U64)si0);
si1=l0;
si2=4U;
si1<<=(si2&31);
si0+=si1;
l0=si0;
si0=i32_load(&i->m0,(U64)si0+8U);
l2=si0;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+4U);
si0=si0 != si1;
if(si0){
goto L5;
}
si0=l0;
si1=l2;
f1796(i,si0,si1);
si0=l0;
si0=i32_load(&i->m0,(U64)si0+8U);
l2=si0;
L5:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
si1=l2;
si2=20U;
si1*=si2;
si0+=si1;
l2=si0;
si1=44U;
i32_store8(&i->m0,(U64)si0+16U,si1);
si0=l2;
sj1=-4294967295ULL;
i64_store(&i->m0,(U64)si0+8U,sj1);
si0=l2;
si1=l8;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l2;
si1=l9;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+8U);
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l3;
si1=-56U;
si0+=si1;
l3=si0;
if(si0){
goto L4;
}
}
L3:;
goto L0;
L2:;
si0=l0;
si1=l2;
si2=16960824U;
f594(i,si0,si1,si2);
UNREACHABLE;
L1:;
si0=16960789U;
si1=16U;
si2=16960808U;
f634(i,si0,si1,si2);
UNREACHABLE;
L0:;
}

void f1739(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4) {
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
U32 si0,si1,si2,si3,si4,si5,si6;
U64 sj1;
si0=i->g0;
si1=112U;
si0-=si1;
l5=si0;
i->g0=si0;
si0=l5;
si1=l4;
si1=i32_load(&i->m0,(U64)si1+12U);
l6=si1;
i32_store(&i->m0,(U64)si0+84U,si1);
si0=l5;
si1=l4;
si1=i32_load(&i->m0,(U64)si1);
l7=si1;
i32_store(&i->m0,(U64)si0+76U,si1);
si0=l5;
si1=l6;
si2=l4;
si3=20U;
si2+=si3;
si2=i32_load(&i->m0,(U64)si2);
l8=si2;
si3=48U;
si2*=si3;
si1+=si2;
l9=si1;
i32_store(&i->m0,(U64)si0+88U,si1);
si0=l5;
si1=l7;
si2=l4;
si2=i32_load(&i->m0,(U64)si2+8U);
l10=si2;
si3=48U;
si2*=si3;
si1+=si2;
l11=si1;
i32_store(&i->m0,(U64)si0+80U,si1);
si0=l5;
si1=12U;
si0+=si1;
si1=l5;
si2=76U;
si1+=si2;
f1845(i,si0,si1);
si0=l5;
si0=i32_load(&i->m0,(U64)si0+20U);
l12=si0;
si0=!(si0);
if(si0){
goto L3;
}
si0=l12;
si1=2U;
si0<<=(si1&31);
l13=si0;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+12U);
l14=si0;
L6:;
{
si0=l5;
si1=76U;
si0+=si1;
si1=l1;
si2=l14;
si2=i32_load(&i->m0,(U64)si2);
f1709(i,si0,si1,si2);
si0=l5;
si0=i32_load(&i->m0,(U64)si0+76U);
l15=si0;
si1=20U;
si0=si0 != si1;
if(si0){
goto L5;
}
si0=l14;
si1=4U;
si0+=si1;
l14=si0;
si0=l13;
si1=-4U;
si0+=si1;
l13=si0;
si0=!(si0);
if(si0){
goto L4;
}
goto L6;
}
L5:;
si0=l0;
si1=l5;
sj1=i64_load(&i->m0,(U64)si1+80U);
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l0;
si1=28U;
si0+=si1;
si1=l5;
si2=76U;
si1+=si2;
si2=28U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=20U;
si0+=si1;
si1=l5;
si2=76U;
si1+=si2;
si2=20U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=12U;
si0+=si1;
si1=l5;
si2=76U;
si1+=si2;
si2=12U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=l15;
i32_store(&i->m0,(U64)si0,si1);
goto L2;
L4:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+24U);
l14=si0;
si0=!(si0);
if(si0){
goto L8;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+16U);
l13=si0;
si0=!(si0);
if(si0){
goto L8;
}
si0=l13;
si1=l14;
si2=-1U;
si1+=si2;
si2=384U;
si1*=si2;
si0+=si1;
l14=si0;
si1=368U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l15=si0;
si1=l14;
si1=i32_load(&i->m0,(U64)si1+332U);
l13=si1;
si0=si0 <= si1;
if(si0){
goto L7;
}
si0=l1;
si1=56U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l15=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+52U);
l16=si0;
si0=l14;
si0=i32_load(&i->m0,(U64)si0+360U);
si1=l13;
si2=4U;
si1<<=(si2&31);
si0+=si1;
l14=si0;
si0=i32_load(&i->m0,(U64)si0+8U);
l13=si0;
si1=l14;
si1=i32_load(&i->m0,(U64)si1+4U);
si0=si0 != si1;
if(si0){
goto L9;
}
si0=l14;
si1=l13;
f1796(i,si0,si1);
si0=l14;
si0=i32_load(&i->m0,(U64)si0+8U);
l13=si0;
L9:;
si0=l14;
si0=i32_load(&i->m0,(U64)si0);
si1=l13;
si2=20U;
si1*=si2;
si0+=si1;
l13=si0;
si1=67U;
i32_store8(&i->m0,(U64)si0+16U,si1);
si0=l13;
si1=-1U;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l13;
si1=l12;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l13;
si1=l15;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l13;
si1=l16;
i32_store(&i->m0,(U64)si0,si1);
si0=l14;
si1=l14;
si1=i32_load(&i->m0,(U64)si1+8U);
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0+8U,si1);
goto L3;
L8:;
si0=16960789U;
si1=16U;
si2=16960808U;
f634(i,si0,si1,si2);
UNREACHABLE;
L7:;
si0=l13;
si1=l15;
si2=16960824U;
f594(i,si0,si1,si2);
UNREACHABLE;
L3:;
si0=0U;
l17=si0;
si0=l5;
si1=0U;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l5;
sj1=4ULL;
i64_store(&i->m0,(U64)si0+24U,sj1);
si0=l5;
si1=0U;
i32_store(&i->m0,(U64)si0+84U,si1);
si0=l5;
sj1=4ULL;
i64_store(&i->m0,(U64)si0+76U,sj1);
si0=l4;
si1=32U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l18=si0;
si0=!(si0);
if(si0){
goto L18;
}
si0=l5;
si1=76U;
si0+=si1;
si1=8U;
si0+=si1;
l19=si0;
si0=l5;
si1=24U;
si0+=si1;
si1=8U;
si0+=si1;
l20=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+24U);
l14=si0;
si0=l18;
si1=48U;
si0*=si1;
l15=si0;
L19:;
{
si0=l14;
si1=44U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l16=si0;
si0=!(si0);
if(si0){
goto L21;
}
si0=l5;
si0=i32_load(&i->m0,(U64)si0+84U);
l13=si0;
si1=l5;
si1=i32_load(&i->m0,(U64)si1+80U);
si0=si0 != si1;
if(si0){
goto L22;
}
si0=l5;
si1=76U;
si0+=si1;
si1=l13;
f1792(i,si0,si1);
si0=l5;
si0=i32_load(&i->m0,(U64)si0+84U);
l13=si0;
L22:;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+76U);
si1=l13;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l13=si0;
si1=l16;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l13;
si1=l14;
i32_store(&i->m0,(U64)si0,si1);
si0=l19;
l13=si0;
goto L20;
L21:;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+32U);
l13=si0;
si1=l5;
si1=i32_load(&i->m0,(U64)si1+28U);
si0=si0 != si1;
if(si0){
goto L23;
}
si0=l5;
si1=24U;
si0+=si1;
si1=l13;
f1789(i,si0,si1);
si0=l5;
si0=i32_load(&i->m0,(U64)si0+32U);
l13=si0;
L23:;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+24U);
si1=l13;
si2=2U;
si1<<=(si2&31);
si0+=si1;
si1=l14;
i32_store(&i->m0,(U64)si0,si1);
si0=l20;
l13=si0;
L20:;
si0=l14;
si1=48U;
si0+=si1;
l14=si0;
si0=l13;
si1=l13;
si1=i32_load(&i->m0,(U64)si1);
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l15;
si1=-48U;
si0+=si1;
l15=si0;
if(si0){
goto L19;
}
}
si0=l5;
si0=i32_load(&i->m0,(U64)si0+80U);
l21=si0;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+76U);
l22=si0;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+32U);
l23=si0;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+28U);
l17=si0;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+24U);
l24=si0;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+84U);
l20=si0;
si0=!(si0);
if(si0){
goto L17;
}
si0=l22;
si1=l20;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l19=si0;
si0=l5;
si1=24U;
si0+=si1;
si1=4U;
si0|=si1;
l15=si0;
si0=l22;
l14=si0;
L24:;
{
si0=l14;
si0=i32_load(&i->m0,(U64)si0);
l13=si0;
si0=l5;
si1=0U;
i32_store(&i->m0,(U64)si0+72U,si1);
si0=l5;
sj1=1ULL;
i64_store(&i->m0,(U64)si0+64U,sj1);
si0=l5;
si1=3U;
i32_store8(&i->m0,(U64)si0+108U,si1);
si0=l5;
si1=32U;
i32_store(&i->m0,(U64)si0+92U,si1);
si0=l5;
si1=0U;
i32_store(&i->m0,(U64)si0+104U,si1);
si0=l5;
si1=16958520U;
i32_store(&i->m0,(U64)si0+100U,si1);
si0=l5;
si1=0U;
i32_store(&i->m0,(U64)si0+84U,si1);
si0=l5;
si1=0U;
i32_store(&i->m0,(U64)si0+76U,si1);
si0=l13;
si1=24U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l16=si0;
si0=l5;
si1=l5;
si2=64U;
si1+=si2;
i32_store(&i->m0,(U64)si0+96U,si1);
si0=l5;
si1=76U;
si0+=si1;
si1=l13;
si1=i32_load(&i->m0,(U64)si1+16U);
si2=l16;
si0=f642(i,si0,si1,si2);
if(si0){
goto L15;
}
si0=l5;
si1=48U;
si0+=si1;
si1=8U;
si0+=si1;
si1=l5;
si2=64U;
si1+=si2;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
l13=si1;
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=l5;
sj1=i64_load(&i->m0,(U64)si1+64U);
l25=sj1;
i64_store(&i->m0,(U64)si0+48U,sj1);
si0=l15;
si1=8U;
si0+=si1;
si1=l13;
i32_store(&i->m0,(U64)si0,si1);
si0=l15;
sj1=l25;
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=7U;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l1;
si1=l5;
si2=24U;
si1+=si2;
f1704(i,si0,si1);
si0=l5;
si1=76U;
si0+=si1;
si1=l1;
si2=l14;
si3=4U;
si2+=si3;
si2=i32_load(&i->m0,(U64)si2);
f1709(i,si0,si1,si2);
si0=l5;
si0=i32_load(&i->m0,(U64)si0+76U);
l13=si0;
si1=20U;
si0=si0 != si1;
if(si0){
goto L10;
}
si0=l14;
si1=8U;
si0+=si1;
l14=si0;
si1=l19;
si0=si0 != si1;
if(si0){
goto L24;
}
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+24U);
l14=si0;
si0=!(si0);
if(si0){
goto L13;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+16U);
l13=si0;
si0=!(si0);
if(si0){
goto L13;
}
si0=l13;
si1=l14;
si2=-1U;
si1+=si2;
si2=384U;
si1*=si2;
si0+=si1;
l14=si0;
si1=368U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l15=si0;
si1=l14;
si1=i32_load(&i->m0,(U64)si1+332U);
l13=si1;
si0=si0 <= si1;
if(si0){
goto L14;
}
si0=l1;
si1=56U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l15=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+52U);
l16=si0;
si0=l14;
si0=i32_load(&i->m0,(U64)si0+360U);
si1=l13;
si2=4U;
si1<<=(si2&31);
si0+=si1;
l14=si0;
si0=i32_load(&i->m0,(U64)si0+8U);
l13=si0;
si1=l14;
si1=i32_load(&i->m0,(U64)si1+4U);
si0=si0 != si1;
if(si0){
goto L25;
}
si0=l14;
si1=l13;
f1796(i,si0,si1);
si0=l14;
si0=i32_load(&i->m0,(U64)si0+8U);
l13=si0;
L25:;
si0=l14;
si0=i32_load(&i->m0,(U64)si0);
si1=l13;
si2=20U;
si1*=si2;
si0+=si1;
l13=si0;
si1=73U;
i32_store8(&i->m0,(U64)si0+16U,si1);
si0=l13;
si1=-1U;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l13;
si1=l20;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l13;
si1=l15;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l13;
si1=l16;
i32_store(&i->m0,(U64)si0,si1);
si0=l14;
si1=l14;
si1=i32_load(&i->m0,(U64)si1+8U);
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=12U;
si1=4U;
si2=l12;
si0=si2?si0:si1;
l12=si0;
goto L16;
L18:;
si0=4U;
l24=si0;
si0=0U;
l23=si0;
si0=4U;
l22=si0;
si0=0U;
l21=si0;
L17:;
si0=0U;
l20=si0;
si0=l12;
si1=0U;
si0=si0 != si1;
si1=3U;
si0<<=(si1&31);
l12=si0;
L16:;
si0=1U;
l13=si0;
si0=1U;
l14=si0;
si0=l3;
si0=!(si0);
if(si0){
goto L26;
}
si0=l3;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L11;
}
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=l3;
si0=f15022(i,si0);
l14=si0;
si0=!(si0);
if(si0){
goto L12;
}
L26:;
si0=l14;
si1=l2;
si2=l3;
si0=f15143(i,si0,si1,si2);
l14=si0;
si0=l5;
si1=l3;
i32_store(&i->m0,(U64)si0+84U,si1);
si0=l5;
si1=l3;
i32_store(&i->m0,(U64)si0+80U,si1);
si0=l5;
si1=l14;
i32_store(&i->m0,(U64)si0+76U,si1);
si0=l1;
si1=33U;
si2=l10;
si3=l8;
si4=l10;
si3+=si4;
si4=l18;
si5=l5;
si6=76U;
si5+=si6;
f1710(i,si0,si1,si2,si3,si4,si5);
si0=l5;
si1=l6;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l5;
si1=l7;
i32_store(&i->m0,(U64)si0+64U,si1);
si0=l22;
si1=l20;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l3=si0;
si0=l24;
si1=l23;
si2=2U;
si1<<=(si2&31);
si0+=si1;
l20=si0;
si0=l22;
l15=si0;
si0=l24;
l16=si0;
L27:;
{
si0=l13;
si1=255U;
si0&=si1;
si1=-2U;
si0+=si1;
switch(si0){
case 0:
goto L32;
case 1:
goto L30;
case 2:
goto L29;
default:
goto L33;
}
L33:;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+64U);
l14=si0;
si0=!(si0);
if(si0){
goto L32;
}
si0=l11;
si1=l14;
si0=si0 == si1;
if(si0){
goto L32;
}
si0=l5;
si1=64U;
si0+=si1;
l19=si0;
si0=0U;
l13=si0;
goto L31;
L32:;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+24U);
l14=si0;
si0=!(si0);
if(si0){
goto L30;
}
si0=l9;
si1=l14;
si0=si0 == si1;
if(si0){
goto L30;
}
si0=l5;
si1=24U;
si0+=si1;
l19=si0;
si0=2U;
l13=si0;
L31:;
si0=l19;
si1=l14;
si2=48U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
goto L28;
L30:;
si0=l16;
si1=l20;
si0=si0 == si1;
if(si0){
goto L34;
}
si0=l16;
si0=i32_load(&i->m0,(U64)si0);
l14=si0;
si0=3U;
l13=si0;
si0=l16;
si1=4U;
si0+=si1;
l16=si0;
goto L28;
L34:;
si0=l17;
si0=!(si0);
if(si0){
goto L29;
}
si0=l24;
f15024(i,si0);
L29:;
si0=l15;
si1=l3;
si0=si0 == si1;
if(si0){
goto L35;
}
si0=l15;
si0=i32_load(&i->m0,(U64)si0);
l14=si0;
si0=4U;
l13=si0;
si0=l15;
si1=8U;
si0+=si1;
l15=si0;
goto L28;
L35:;
si0=l21;
si0=!(si0);
if(si0){
goto L36;
}
si0=l22;
f15024(i,si0);
L36:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+36U);
l14=si0;
si0=!(si0);
if(si0){
goto L41;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+24U);
l13=si0;
si0=!(si0);
if(si0){
goto L40;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+16U);
l15=si0;
si0=!(si0);
if(si0){
goto L40;
}
si0=l13;
si1=384U;
si0*=si1;
si1=l15;
si0+=si1;
si1=-8U;
si0+=si1;
l13=si0;
si1=l13;
si1=i32_load16_u(&i->m0,(U64)si1);
si2=8U;
si1|=si2;
i32_store16(&i->m0,(U64)si0,si1);
si0=l5;
si1=76U;
si0+=si1;
si1=l1;
si2=l14;
si2=i32_load(&i->m0,(U64)si2+16U);
si3=l14;
si4=24U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
f1711(i,si0,si1,si2,si3);
si0=l5;
si0=i32_load(&i->m0,(U64)si0+76U);
l14=si0;
si1=20U;
si0=si0 != si1;
if(si0){
goto L39;
}
L41:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+40U);
l14=si0;
si0=!(si0);
if(si0){
goto L42;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+24U);
l13=si0;
si0=!(si0);
if(si0){
goto L38;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+16U);
l15=si0;
si0=!(si0);
if(si0){
goto L38;
}
si0=l13;
si1=384U;
si0*=si1;
si1=l15;
si0+=si1;
si1=-8U;
si0+=si1;
l13=si0;
si1=l13;
si1=i32_load16_u(&i->m0,(U64)si1);
si2=16U;
si1|=si2;
i32_store16(&i->m0,(U64)si0,si1);
si0=l5;
si1=76U;
si0+=si1;
si1=l1;
si2=l14;
si2=i32_load(&i->m0,(U64)si2+16U);
si3=l14;
si4=24U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
f1711(i,si0,si1,si2,si3);
si0=l5;
si0=i32_load(&i->m0,(U64)si0+76U);
l14=si0;
si1=20U;
si0=si0 != si1;
if(si0){
goto L37;
}
L42:;
si0=l0;
si1=20U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l12;
i32_store8(&i->m0,(U64)si0+4U,si1);
si0=l5;
si0=i32_load(&i->m0,(U64)si0+16U);
si0=!(si0);
if(si0){
goto L1;
}
si0=l5;
si0=i32_load(&i->m0,(U64)si0+12U);
f15024(i,si0);
goto L1;
L40:;
si0=16960789U;
si1=16U;
si2=16960808U;
f634(i,si0,si1,si2);
UNREACHABLE;
L39:;
si0=l0;
si1=l5;
sj1=i64_load(&i->m0,(U64)si1+84U);
i64_store(&i->m0,(U64)si0+8U,sj1);
si0=l0;
si1=16U;
si0+=si1;
si1=l5;
si2=76U;
si1+=si2;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=24U;
si0+=si1;
si1=l5;
si2=76U;
si1+=si2;
si2=24U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=32U;
si0+=si1;
si1=l5;
si2=76U;
si1+=si2;
si2=32U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l5;
si1=i32_load(&i->m0,(U64)si1+80U);
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l14;
i32_store(&i->m0,(U64)si0,si1);
goto L2;
L38:;
si0=16960789U;
si1=16U;
si2=16960808U;
f634(i,si0,si1,si2);
UNREACHABLE;
L37:;
si0=l0;
si1=l5;
sj1=i64_load(&i->m0,(U64)si1+84U);
i64_store(&i->m0,(U64)si0+8U,sj1);
si0=l0;
si1=16U;
si0+=si1;
si1=l5;
si2=76U;
si1+=si2;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=24U;
si0+=si1;
si1=l5;
si2=76U;
si1+=si2;
si2=24U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=32U;
si0+=si1;
si1=l5;
si2=76U;
si1+=si2;
si2=32U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l5;
si1=i32_load(&i->m0,(U64)si1+80U);
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l14;
i32_store(&i->m0,(U64)si0,si1);
goto L2;
L28:;
si0=l5;
si1=76U;
si0+=si1;
si1=l1;
si2=l14;
si2=i32_load(&i->m0,(U64)si2+16U);
si3=l14;
si4=24U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
f1711(i,si0,si1,si2,si3);
si0=l5;
si0=i32_load(&i->m0,(U64)si0+76U);
l14=si0;
si1=20U;
si0=si0 == si1;
if(si0){
goto L27;
}
}
si0=l0;
si1=l5;
sj1=i64_load(&i->m0,(U64)si1+84U);
i64_store(&i->m0,(U64)si0+8U,sj1);
si0=l0;
si1=16U;
si0+=si1;
si1=l5;
si2=76U;
si1+=si2;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=24U;
si0+=si1;
si1=l5;
si2=76U;
si1+=si2;
si2=24U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=32U;
si0+=si1;
si1=l5;
si2=76U;
si1+=si2;
si2=32U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l5;
si1=i32_load(&i->m0,(U64)si1+80U);
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l14;
i32_store(&i->m0,(U64)si0,si1);
si0=l13;
si1=4U;
si0=si0 == si1;
if(si0){
goto L43;
}
si0=l17;
si0=!(si0);
if(si0){
goto L43;
}
si0=l24;
f15024(i,si0);
L43:;
si0=l21;
si0=!(si0);
if(si0){
goto L2;
}
si0=l22;
f15024(i,si0);
goto L2;
L15:;
si0=16958544U;
si1=55U;
si2=l5;
si3=48U;
si2+=si3;
si3=16958600U;
si4=16958692U;
f641(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L14:;
si0=l13;
si1=l15;
si2=16960824U;
f594(i,si0,si1,si2);
UNREACHABLE;
L13:;
si0=16960789U;
si1=16U;
si2=16960808U;
f634(i,si0,si1,si2);
UNREACHABLE;
L12:;
si0=1U;
si1=l3;
f52(i,si0,si1);
UNREACHABLE;
L11:;
f53(i);
UNREACHABLE;
L10:;
si0=l0;
si1=l5;
sj1=i64_load(&i->m0,(U64)si1+80U);
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l0;
si1=28U;
si0+=si1;
si1=l5;
si2=76U;
si1+=si2;
si2=28U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=20U;
si0+=si1;
si1=l5;
si2=76U;
si1+=si2;
si2=20U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=12U;
si0+=si1;
si1=l5;
si2=76U;
si1+=si2;
si2=12U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=l13;
i32_store(&i->m0,(U64)si0,si1);
si0=l21;
si0=!(si0);
if(si0){
goto L44;
}
si0=l22;
f15024(i,si0);
L44:;
si0=l17;
si0=!(si0);
if(si0){
goto L2;
}
si0=l24;
f15024(i,si0);
L2:;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+16U);
si0=!(si0);
if(si0){
goto L1;
}
si0=l5;
si0=i32_load(&i->m0,(U64)si0+12U);
f15024(i,si0);
L1:;
si0=l5;
si1=112U;
si0+=si1;
i->g0=si0;
L0:;
}

void f1740(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 si0,si1,si2;
si0=l1;
si1=255U;
si0&=si1;
switch(si0){
case 0:
goto L32;
case 1:
goto L31;
case 2:
goto L30;
case 3:
goto L29;
case 4:
goto L28;
case 5:
goto L27;
case 6:
goto L26;
case 7:
goto L25;
case 8:
goto L24;
case 9:
goto L23;
default:
goto L32;
}
L32:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+24U);
l1=si0;
si0=!(si0);
if(si0){
goto L20;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+16U);
l2=si0;
si0=!(si0);
if(si0){
goto L20;
}
si0=l2;
si1=l1;
si2=-1U;
si1+=si2;
si2=384U;
si1*=si2;
si0+=si1;
l1=si0;
si1=368U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+332U);
l3=si1;
si0=si0 <= si1;
if(si0){
goto L19;
}
si0=l0;
si1=56U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+52U);
l4=si0;
si0=4U;
l5=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+360U);
si1=l3;
si2=4U;
si1<<=(si2&31);
si0+=si1;
l0=si0;
si0=i32_load(&i->m0,(U64)si0+8U);
l3=si0;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+4U);
si0=si0 != si1;
if(si0){
goto L33;
}
si0=l0;
si1=l3;
f1796(i,si0,si1);
si0=l0;
si0=i32_load(&i->m0,(U64)si0+8U);
l3=si0;
L33:;
si0=l0;
si1=8U;
si0+=si1;
l1=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
si1=l3;
si2=20U;
si1*=si2;
si0+=si1;
l0=si0;
si1=l4;
i32_store(&i->m0,(U64)si0,si1);
si0=29U;
l3=si0;
goto L21;
L31:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+24U);
l1=si0;
si0=!(si0);
if(si0){
goto L18;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+16U);
l2=si0;
si0=!(si0);
if(si0){
goto L18;
}
si0=l2;
si1=l1;
si2=-1U;
si1+=si2;
si2=384U;
si1*=si2;
si0+=si1;
l1=si0;
si1=368U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+332U);
l5=si1;
si0=si0 <= si1;
if(si0){
goto L17;
}
si0=l0;
si1=56U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+52U);
l3=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+360U);
si1=l5;
si2=4U;
si1<<=(si2&31);
si0+=si1;
l0=si0;
si0=i32_load(&i->m0,(U64)si0+8U);
l5=si0;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+4U);
si0=si0 != si1;
if(si0){
goto L34;
}
si0=l0;
si1=l5;
f1796(i,si0,si1);
si0=l0;
si0=i32_load(&i->m0,(U64)si0+8U);
l5=si0;
L34:;
si0=l0;
si1=8U;
si0+=si1;
l1=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
si1=l5;
si2=20U;
si1*=si2;
si0+=si1;
l0=si0;
si1=l3;
i32_store(&i->m0,(U64)si0,si1);
si0=29U;
l3=si0;
si0=3U;
l5=si0;
goto L21;
L30:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+24U);
l1=si0;
si0=!(si0);
if(si0){
goto L16;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+16U);
l2=si0;
si0=!(si0);
if(si0){
goto L16;
}
si0=l2;
si1=l1;
si2=-1U;
si1+=si2;
si2=384U;
si1*=si2;
si0+=si1;
l1=si0;
si1=368U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+332U);
l5=si1;
si0=si0 <= si1;
if(si0){
goto L15;
}
si0=l0;
si1=56U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+52U);
l3=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+360U);
si1=l5;
si2=4U;
si1<<=(si2&31);
si0+=si1;
l0=si0;
si0=i32_load(&i->m0,(U64)si0+8U);
l5=si0;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+4U);
si0=si0 != si1;
if(si0){
goto L35;
}
si0=l0;
si1=l5;
f1796(i,si0,si1);
si0=l0;
si0=i32_load(&i->m0,(U64)si0+8U);
l5=si0;
L35:;
si0=l0;
si1=8U;
si0+=si1;
l1=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
si1=l5;
si2=20U;
si1*=si2;
si0+=si1;
l0=si0;
si1=l3;
i32_store(&i->m0,(U64)si0,si1);
si0=29U;
l3=si0;
goto L22;
L29:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+24U);
l1=si0;
si0=!(si0);
if(si0){
goto L14;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+16U);
l2=si0;
si0=!(si0);
if(si0){
goto L14;
}
si0=l2;
si1=l1;
si2=-1U;
si1+=si2;
si2=384U;
si1*=si2;
si0+=si1;
l1=si0;
si1=368U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+332U);
l5=si1;
si0=si0 <= si1;
if(si0){
goto L13;
}
si0=l0;
si1=56U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+52U);
l3=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+360U);
si1=l5;
si2=4U;
si1<<=(si2&31);
si0+=si1;
l0=si0;
si0=i32_load(&i->m0,(U64)si0+8U);
l5=si0;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+4U);
si0=si0 != si1;
if(si0){
goto L36;
}
si0=l0;
si1=l5;
f1796(i,si0,si1);
si0=l0;
si0=i32_load(&i->m0,(U64)si0+8U);
l5=si0;
L36:;
si0=l0;
si1=8U;
si0+=si1;
l1=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
si1=l5;
si2=20U;
si1*=si2;
si0+=si1;
l0=si0;
si1=l3;
i32_store(&i->m0,(U64)si0,si1);
si0=29U;
l3=si0;
si0=5U;
l5=si0;
goto L21;
L28:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+24U);
l1=si0;
si0=!(si0);
if(si0){
goto L12;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+16U);
l2=si0;
si0=!(si0);
if(si0){
goto L12;
}
si0=l2;
si1=l1;
si2=-1U;
si1+=si2;
si2=384U;
si1*=si2;
si0+=si1;
l1=si0;
si1=368U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+332U);
l5=si1;
si0=si0 <= si1;
if(si0){
goto L11;
}
si0=l0;
si1=56U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+52U);
l3=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+360U);
si1=l5;
si2=4U;
si1<<=(si2&31);
si0+=si1;
l0=si0;
si0=i32_load(&i->m0,(U64)si0+8U);
l5=si0;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+4U);
si0=si0 != si1;
if(si0){
goto L37;
}
si0=l0;
si1=l5;
f1796(i,si0,si1);
si0=l0;
si0=i32_load(&i->m0,(U64)si0+8U);
l5=si0;
L37:;
si0=l0;
si1=8U;
si0+=si1;
l1=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
si1=l5;
si2=20U;
si1*=si2;
si0+=si1;
l0=si0;
si1=l3;
i32_store(&i->m0,(U64)si0,si1);
si0=29U;
l3=si0;
si0=2U;
l5=si0;
goto L21;
L27:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+24U);
l1=si0;
si0=!(si0);
if(si0){
goto L10;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+16U);
l2=si0;
si0=!(si0);
if(si0){
goto L10;
}
si0=l2;
si1=l1;
si2=-1U;
si1+=si2;
si2=384U;
si1*=si2;
si0+=si1;
l1=si0;
si1=368U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+332U);
l5=si1;
si0=si0 <= si1;
if(si0){
goto L9;
}
si0=l0;
si1=56U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+52U);
l3=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+360U);
si1=l5;
si2=4U;
si1<<=(si2&31);
si0+=si1;
l0=si0;
si0=i32_load(&i->m0,(U64)si0+8U);
l5=si0;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+4U);
si0=si0 != si1;
if(si0){
goto L38;
}
si0=l0;
si1=l5;
f1796(i,si0,si1);
si0=l0;
si0=i32_load(&i->m0,(U64)si0+8U);
l5=si0;
L38:;
si0=l0;
si1=8U;
si0+=si1;
l1=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
si1=l5;
si2=20U;
si1*=si2;
si0+=si1;
l0=si0;
si1=l3;
i32_store(&i->m0,(U64)si0,si1);
si0=29U;
l3=si0;
si0=6U;
l5=si0;
goto L21;
L26:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+24U);
l1=si0;
si0=!(si0);
if(si0){
goto L8;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+16U);
l2=si0;
si0=!(si0);
if(si0){
goto L8;
}
si0=l2;
si1=l1;
si2=-1U;
si1+=si2;
si2=384U;
si1*=si2;
si0+=si1;
l1=si0;
si1=368U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+332U);
l5=si1;
si0=si0 <= si1;
if(si0){
goto L7;
}
si0=l0;
si1=56U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+52U);
l3=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+360U);
si1=l5;
si2=4U;
si1<<=(si2&31);
si0+=si1;
l0=si0;
si0=i32_load(&i->m0,(U64)si0+8U);
l5=si0;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+4U);
si0=si0 != si1;
if(si0){
goto L39;
}
si0=l0;
si1=l5;
f1796(i,si0,si1);
si0=l0;
si0=i32_load(&i->m0,(U64)si0+8U);
l5=si0;
L39:;
si0=l0;
si1=8U;
si0+=si1;
l1=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
si1=l5;
si2=20U;
si1*=si2;
si0+=si1;
l0=si0;
si1=l3;
i32_store(&i->m0,(U64)si0,si1);
si0=28U;
l3=si0;
si0=2U;
l5=si0;
goto L21;
L25:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+24U);
l1=si0;
si0=!(si0);
if(si0){
goto L6;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+16U);
l2=si0;
si0=!(si0);
if(si0){
goto L6;
}
si0=l2;
si1=l1;
si2=-1U;
si1+=si2;
si2=384U;
si1*=si2;
si0+=si1;
l1=si0;
si1=368U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+332U);
l5=si1;
si0=si0 <= si1;
if(si0){
goto L5;
}
si0=l0;
si1=56U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+52U);
l3=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+360U);
si1=l5;
si2=4U;
si1<<=(si2&31);
si0+=si1;
l0=si0;
si0=i32_load(&i->m0,(U64)si0+8U);
l5=si0;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+4U);
si0=si0 != si1;
if(si0){
goto L40;
}
si0=l0;
si1=l5;
f1796(i,si0,si1);
si0=l0;
si0=i32_load(&i->m0,(U64)si0+8U);
l5=si0;
L40:;
si0=l0;
si1=8U;
si0+=si1;
l1=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
si1=l5;
si2=20U;
si1*=si2;
si0+=si1;
l0=si0;
si1=l3;
i32_store(&i->m0,(U64)si0,si1);
si0=28U;
l3=si0;
si0=3U;
l5=si0;
goto L21;
L24:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+24U);
l1=si0;
si0=!(si0);
if(si0){
goto L4;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+16U);
l2=si0;
si0=!(si0);
if(si0){
goto L4;
}
si0=l2;
si1=l1;
si2=-1U;
si1+=si2;
si2=384U;
si1*=si2;
si0+=si1;
l1=si0;
si1=368U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+332U);
l5=si1;
si0=si0 <= si1;
if(si0){
goto L3;
}
si0=l0;
si1=56U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+52U);
l3=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+360U);
si1=l5;
si2=4U;
si1<<=(si2&31);
si0+=si1;
l0=si0;
si0=i32_load(&i->m0,(U64)si0+8U);
l5=si0;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+4U);
si0=si0 != si1;
if(si0){
goto L41;
}
si0=l0;
si1=l5;
f1796(i,si0,si1);
si0=l0;
si0=i32_load(&i->m0,(U64)si0+8U);
l5=si0;
L41:;
si0=l0;
si1=8U;
si0+=si1;
l1=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
si1=l5;
si2=20U;
si1*=si2;
si0+=si1;
l0=si0;
si1=l3;
i32_store(&i->m0,(U64)si0,si1);
si0=28U;
l3=si0;
si0=0U;
l5=si0;
goto L21;
L23:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+24U);
l1=si0;
si0=!(si0);
if(si0){
goto L2;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+16U);
l2=si0;
si0=!(si0);
if(si0){
goto L2;
}
si0=l2;
si1=l1;
si2=-1U;
si1+=si2;
si2=384U;
si1*=si2;
si0+=si1;
l1=si0;
si1=368U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+332U);
l5=si1;
si0=si0 <= si1;
if(si0){
goto L1;
}
si0=l0;
si1=56U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+52U);
l3=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+360U);
si1=l5;
si2=4U;
si1<<=(si2&31);
si0+=si1;
l0=si0;
si0=i32_load(&i->m0,(U64)si0+8U);
l5=si0;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+4U);
si0=si0 != si1;
if(si0){
goto L42;
}
si0=l0;
si1=l5;
f1796(i,si0,si1);
si0=l0;
si0=i32_load(&i->m0,(U64)si0+8U);
l5=si0;
L42:;
si0=l0;
si1=8U;
si0+=si1;
l1=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
si1=l5;
si2=20U;
si1*=si2;
si0+=si1;
l0=si0;
si1=l3;
i32_store(&i->m0,(U64)si0,si1);
si0=28U;
l3=si0;
L22:;
si0=1U;
l5=si0;
L21:;
si0=l0;
si1=l3;
i32_store8(&i->m0,(U64)si0+16U,si1);
si0=l0;
si1=-1U;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l0;
si1=l5;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l0;
si1=l2;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l1;
si1=l1;
si1=i32_load(&i->m0,(U64)si1);
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
goto L0;
L20:;
si0=16960789U;
si1=16U;
si2=16960808U;
f634(i,si0,si1,si2);
UNREACHABLE;
L19:;
si0=l3;
si1=l2;
si2=16960824U;
f594(i,si0,si1,si2);
UNREACHABLE;
L18:;
si0=16960789U;
si1=16U;
si2=16960808U;
f634(i,si0,si1,si2);
UNREACHABLE;
L17:;
si0=l5;
si1=l2;
si2=16960824U;
f594(i,si0,si1,si2);
UNREACHABLE;
L16:;
si0=16960789U;
si1=16U;
si2=16960808U;
f634(i,si0,si1,si2);
UNREACHABLE;
L15:;
si0=l5;
si1=l2;
si2=16960824U;
f594(i,si0,si1,si2);
UNREACHABLE;
L14:;
si0=16960789U;
si1=16U;
si2=16960808U;
f634(i,si0,si1,si2);
UNREACHABLE;
L13:;
si0=l5;
si1=l2;
si2=16960824U;
f594(i,si0,si1,si2);
UNREACHABLE;
L12:;
si0=16960789U;
si1=16U;
si2=16960808U;
f634(i,si0,si1,si2);
UNREACHABLE;
L11:;
si0=l5;
si1=l2;
si2=16960824U;
f594(i,si0,si1,si2);
UNREACHABLE;
L10:;
si0=16960789U;
si1=16U;
si2=16960808U;
f634(i,si0,si1,si2);
UNREACHABLE;
L9:;
si0=l5;
si1=l2;
si2=16960824U;
f594(i,si0,si1,si2);
UNREACHABLE;
L8:;
si0=16960789U;
si1=16U;
si2=16960808U;
f634(i,si0,si1,si2);
UNREACHABLE;
L7:;
si0=l5;
si1=l2;
si2=16960824U;
f594(i,si0,si1,si2);
UNREACHABLE;
L6:;
si0=16960789U;
si1=16U;
si2=16960808U;
f634(i,si0,si1,si2);
UNREACHABLE;
L5:;
si0=l5;
si1=l2;
si2=16960824U;
f594(i,si0,si1,si2);
UNREACHABLE;
L4:;
si0=16960789U;
si1=16U;
si2=16960808U;
f634(i,si0,si1,si2);
UNREACHABLE;
L3:;
si0=l5;
si1=l2;
si2=16960824U;
f594(i,si0,si1,si2);
UNREACHABLE;
L2:;
si0=16960789U;
si1=16U;
si2=16960808U;
f634(i,si0,si1,si2);
UNREACHABLE;
L1:;
si0=l5;
si1=l2;
si2=16960824U;
f594(i,si0,si1,si2);
UNREACHABLE;
L0:;
}

void f1741(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 si0,si1,si2;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+24U);
l2=si0;
si0=!(si0);
if(si0){
goto L2;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+16U);
l3=si0;
si0=!(si0);
if(si0){
goto L2;
}
si0=l3;
si1=l2;
si2=-1U;
si1+=si2;
si2=384U;
si1*=si2;
si0+=si1;
l2=si0;
si1=368U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
si1=l2;
si1=i32_load(&i->m0,(U64)si1+332U);
l3=si1;
si0=si0 <= si1;
if(si0){
goto L1;
}
si0=l0;
si1=56U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+52U);
l5=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+360U);
si1=l3;
si2=4U;
si1<<=(si2&31);
si0+=si1;
l0=si0;
si0=i32_load(&i->m0,(U64)si0+8U);
l2=si0;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+4U);
si0=si0 != si1;
if(si0){
goto L3;
}
si0=l0;
si1=l2;
f1796(i,si0,si1);
si0=l0;
si0=i32_load(&i->m0,(U64)si0+8U);
l2=si0;
L3:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
si1=l2;
si2=20U;
si1*=si2;
si0+=si1;
l2=si0;
si1=47U;
i32_store8(&i->m0,(U64)si0+16U,si1);
si0=l2;
si1=-1U;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l2;
si1=l1;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l2;
si1=l4;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l2;
si1=l5;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+8U);
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0+8U,si1);
goto L0;
L2:;
si0=16960789U;
si1=16U;
si2=16960808U;
f634(i,si0,si1,si2);
UNREACHABLE;
L1:;
si0=l3;
si1=l4;
si2=16960824U;
f594(i,si0,si1,si2);
UNREACHABLE;
L0:;
}

void f1742(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U64 l8=0;
U32 si0,si1,si2,si3;
U64 sj0,sj1;
F64 sd1;
si0=i->g0;
si1=32U;
si0-=si1;
l2=si0;
i->g0=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si1=-2U;
si0+=si1;
l4=si0;
si1=4U;
si2=l4;
si3=9U;
si2=si2 < si3;
si0=si2?si0:si1;
switch(si0){
case 0:
goto L17;
case 1:
goto L16;
case 2:
goto L15;
case 3:
goto L14;
case 4:
goto L9;
case 5:
goto L13;
case 6:
goto L12;
case 7:
goto L11;
case 8:
goto L10;
default:
goto L17;
}
L17:;
si0=l0;
si1=10U;
i32_store(&i->m0,(U64)si0,si1);
goto L1;
L16:;
si0=l0;
si1=6U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l1;
si1=i32_load8_u(&i->m0,(U64)si1+4U);
i32_store8(&i->m0,(U64)si0+4U,si1);
goto L1;
L15:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
l4=si0;
si0=l1;
si1=12U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
if(si0){
goto L19;
}
si0=1U;
l3=si0;
goto L18;
L19:;
si0=l1;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L8;
}
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=l1;
si0=f15022(i,si0);
l3=si0;
si0=!(si0);
if(si0){
goto L7;
}
L18:;
si0=l3;
si1=l4;
si2=l1;
si0=f15143(i,si0,si1,si2);
l4=si0;
si0=l0;
si1=12U;
si0+=si1;
si1=l1;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=8U;
si0+=si1;
si1=l1;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l4;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=7U;
i32_store(&i->m0,(U64)si0,si1);
goto L1;
L14:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
l4=si0;
si0=l1;
si1=12U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
if(si0){
goto L21;
}
si0=1U;
l3=si0;
goto L20;
L21:;
si0=l1;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L8;
}
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=l1;
si0=f15022(i,si0);
l3=si0;
si0=!(si0);
if(si0){
goto L6;
}
L20:;
si0=l3;
si1=l4;
si2=l1;
si0=f15143(i,si0,si1,si2);
l4=si0;
si0=l0;
si1=12U;
si0+=si1;
si1=l1;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=8U;
si0+=si1;
si1=l1;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l4;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=8U;
i32_store(&i->m0,(U64)si0,si1);
goto L1;
L13:;
si0=8U;
l5=si0;
si0=l1;
si1=12U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si0=!(si0);
if(si0){
goto L22;
}
si0=l6;
si1=89478486U;
si0=si0 >= si1;
if(si0){
goto L8;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
l7=si0;
si0=0U;
l1=si0;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=l6;
si1=24U;
si0*=si1;
l4=si0;
si0=f15022(i,si0);
l5=si0;
si0=!(si0);
if(si0){
goto L5;
}
si0=l6;
l3=si0;
L23:;
{
si0=l2;
si1=8U;
si0+=si1;
si1=l7;
si2=l1;
si1+=si2;
f1742(i,si0,si1);
si0=l5;
si1=l1;
si0+=si1;
l4=si0;
si1=16U;
si0+=si1;
si1=l2;
si2=8U;
si1+=si2;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=8U;
si0+=si1;
si1=l2;
si2=8U;
si1+=si2;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=l2;
sj1=i64_load(&i->m0,(U64)si1+8U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si1=24U;
si0+=si1;
l1=si0;
si0=l3;
si1=-1U;
si0+=si1;
l3=si0;
if(si0){
goto L23;
}
}
L22:;
si0=l0;
si1=l5;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=2U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=12U;
si0+=si1;
si1=l6;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=8U;
si0+=si1;
si1=l6;
i32_store(&i->m0,(U64)si0,si1);
goto L1;
L12:;
si0=l0;
si1=4U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l1;
sd1=f64_load(&i->m0,(U64)si1+8U);
f64_store(&i->m0,(U64)si0+8U,sd1);
goto L1;
L11:;
si0=l0;
si1=5U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=16U;
si0+=si1;
si1=l1;
sd1=f64_load(&i->m0,(U64)si1+16U);
f64_store(&i->m0,(U64)si0,sd1);
si0=l0;
si1=l1;
sd1=f64_load(&i->m0,(U64)si1+8U);
f64_store(&i->m0,(U64)si0+8U,sd1);
goto L1;
L10:;
si0=l0;
si1=11U;
i32_store(&i->m0,(U64)si0,si1);
goto L1;
L9:;
si0=l1;
si0=i32_load8_u(&i->m0,(U64)si0+16U);
l5=si0;
si0=l3;
si0=!(si0);
if(si0){
goto L3;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
l6=si0;
si0=8U;
l4=si0;
si0=0U;
l3=si0;
si0=l1;
si1=12U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si0=!(si0);
if(si0){
goto L24;
}
si0=l1;
si1=268435455U;
si0=si0 > si1;
if(si0){
goto L8;
}
si0=l1;
si1=3U;
si0<<=(si1&31);
l7=si0;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L8;
}
si0=l7;
si0=!(si0);
if(si0){
goto L24;
}
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=l7;
si0=f15022(i,si0);
l4=si0;
si0=!(si0);
if(si0){
goto L4;
}
si0=l7;
l3=si0;
L24:;
si0=l4;
si1=l6;
si2=l3;
si0=f15143(i,si0,si1,si2);
si0=l1;
sj0=(U64)(si0);
l8=sj0;
sj1=32ULL;
sj0<<=(sj1&63);
sj1=l8;
sj0|=sj1;
l8=sj0;
si0=1U;
l1=si0;
goto L2;
L8:;
f53(i);
UNREACHABLE;
L7:;
si0=1U;
si1=l1;
f52(i,si0,si1);
UNREACHABLE;
L6:;
si0=1U;
si1=l1;
f52(i,si0,si1);
UNREACHABLE;
L5:;
si0=8U;
si1=l4;
f52(i,si0,si1);
UNREACHABLE;
L4:;
si0=8U;
si1=l7;
f52(i,si0,si1);
UNREACHABLE;
L3:;
si0=l1;
sj0=i64_load(&i->m0,(U64)si0+8U);
l8=sj0;
si0=0U;
l1=si0;
L2:;
si0=l0;
si1=l5;
i32_store8(&i->m0,(U64)si0+16U,si1);
si0=l0;
sj1=l8;
i64_store(&i->m0,(U64)si0+8U,sj1);
si0=l0;
si1=l4;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l1;
i32_store(&i->m0,(U64)si0,si1);
L1:;
si0=l2;
si1=32U;
si0+=si1;
i->g0=si0;
L0:;
}

void f1743(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4) {
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
si1=128U;
si0-=si1;
l5=si0;
i->g0=si0;
si0=l3;
si1=l4;
si2=56U;
si1*=si2;
l6=si1;
si0+=si1;
l7=si0;
si0=0U;
l8=si0;
L9:;
{
si0=l6;
si1=l8;
l9=si1;
si0=si0 == si1;
if(si0){
goto L8;
}
si0=l9;
si1=56U;
si0+=si1;
l8=si0;
si0=l3;
si1=l9;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=33U;
si0=si0 != si1;
if(si0){
goto L9;
}
}
si0=0U;
l10=si0;
si0=l2;
if(si0){
goto L7;
}
goto L3;
L8:;
si0=l4;
si0=!(si0);
if(si0){
goto L10;
}
si0=l4;
si1=56U;
si0*=si1;
l8=si0;
L11:;
{
si0=l5;
si1=36U;
si0+=si1;
si1=l1;
si2=l3;
f1709(i,si0,si1,si2);
si0=l5;
si0=i32_load(&i->m0,(U64)si0+36U);
l11=si0;
si1=20U;
si0=si0 != si1;
if(si0){
goto L6;
}
si0=l3;
si1=56U;
si0+=si1;
l3=si0;
si0=l8;
si1=-56U;
si0+=si1;
l8=si0;
if(si0){
goto L11;
}
}
L10:;
si0=l4;
si1=l2;
si0+=si1;
l10=si0;
goto L2;
L7:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+24U);
l8=si0;
si0=!(si0);
if(si0){
goto L5;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+16U);
l11=si0;
si0=!(si0);
if(si0){
goto L5;
}
si0=l11;
si1=l8;
si2=-1U;
si1+=si2;
si2=384U;
si1*=si2;
si0+=si1;
l8=si0;
si1=368U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
si1=l8;
si1=i32_load(&i->m0,(U64)si1+332U);
l11=si1;
si0=si0 <= si1;
if(si0){
goto L4;
}
si0=l1;
si1=56U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+52U);
l10=si0;
si0=l8;
si0=i32_load(&i->m0,(U64)si0+360U);
si1=l11;
si2=4U;
si1<<=(si2&31);
si0+=si1;
l8=si0;
si0=i32_load(&i->m0,(U64)si0+8U);
l11=si0;
si1=l8;
si1=i32_load(&i->m0,(U64)si1+4U);
si0=si0 != si1;
if(si0){
goto L12;
}
si0=l8;
si1=l11;
f1796(i,si0,si1);
si0=l8;
si0=i32_load(&i->m0,(U64)si0+8U);
l11=si0;
L12:;
si0=l8;
si0=i32_load(&i->m0,(U64)si0);
si1=l11;
si2=20U;
si1*=si2;
si0+=si1;
l11=si0;
si1=67U;
i32_store8(&i->m0,(U64)si0+16U,si1);
si0=l11;
si1=-1U;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l11;
si1=l2;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l11;
si1=l4;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l11;
si1=l10;
i32_store(&i->m0,(U64)si0,si1);
si0=1U;
l10=si0;
si0=l8;
si1=l8;
si1=i32_load(&i->m0,(U64)si1+8U);
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0+8U,si1);
goto L3;
L6:;
si0=l0;
si1=l5;
sj1=i64_load(&i->m0,(U64)si1+40U);
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l0;
si1=28U;
si0+=si1;
si1=l5;
si2=36U;
si1+=si2;
si2=28U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=20U;
si0+=si1;
si1=l5;
si2=36U;
si1+=si2;
si2=20U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=12U;
si0+=si1;
si1=l5;
si2=36U;
si1+=si2;
si2=12U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=l11;
i32_store(&i->m0,(U64)si0,si1);
goto L1;
L5:;
si0=16960789U;
si1=16U;
si2=16960808U;
f634(i,si0,si1,si2);
UNREACHABLE;
L4:;
si0=l11;
si1=l4;
si2=16960824U;
f594(i,si0,si1,si2);
UNREACHABLE;
L3:;
si0=l5;
si1=2U;
i32_store16(&i->m0,(U64)si0+84U,si1);
si0=l5;
si1=0U;
i32_store(&i->m0,(U64)si0+80U,si1);
si0=l5;
sj1=4ULL;
i64_store(&i->m0,(U64)si0+72U,sj1);
si0=l5;
sj1=-4294967296ULL;
i64_store(&i->m0,(U64)si0+64U,sj1);
si0=l5;
sj1=0ULL;
i64_store(&i->m0,(U64)si0+56U,sj1);
si0=l5;
si1=2U;
i32_store8(&i->m0,(U64)si0+48U,si1);
si0=l5;
si1=l7;
i32_store(&i->m0,(U64)si0+44U,si1);
si0=l5;
si1=l3;
i32_store(&i->m0,(U64)si0+40U,si1);
si0=l5;
si1=1U;
i32_store(&i->m0,(U64)si0+88U,si1);
si0=l5;
si1=36U;
si0+=si1;
si1=4U;
si0+=si1;
l7=si0;
si0=1U;
l12=si0;
si0=0U;
l11=si0;
L18:;
{
si0=l5;
si1=-1U;
i32_store(&i->m0,(U64)si0+36U,si1);
si0=0U;
l8=si0;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+60U);
si1=l11;
si0=si0 > si1;
if(si0){
goto L21;
}
si0=l5;
si0=i32_load(&i->m0,(U64)si0+56U);
l3=si0;
si1=l11;
si0=si0 > si1;
if(si0){
goto L24;
}
si0=l3;
si1=l11;
si0=si0 != si1;
if(si0){
goto L25;
}
si0=l5;
si0=i32_load(&i->m0,(U64)si0+80U);
si1=l3;
si2=l5;
si2=i32_load(&i->m0,(U64)si2+64U);
si1-=si2;
si0=si0 > si1;
if(si0){
goto L24;
}
L25:;
si0=l5;
si0=i32_load8_u(&i->m0,(U64)si0+85U);
if(si0){
goto L21;
}
si0=l3;
si1=l11;
si0=si0 == si1;
if(si0){
goto L26;
}
si0=l5;
si1=24U;
si0+=si1;
si1=l7;
si2=l11;
f2020(i,si0,si1,si2);
si0=l5;
si0=i32_load(&i->m0,(U64)si0+28U);
l2=si0;
si0=l5;
si0=i32_load8_u(&i->m0,(U64)si0+24U);
l3=si0;
goto L23;
L26:;
si0=l5;
si0=i32_load8_u(&i->m0,(U64)si0+48U);
l3=si0;
si0=l5;
si1=2U;
i32_store8(&i->m0,(U64)si0+48U,si1);
si0=l3;
si1=2U;
si0=si0 == si1;
if(si0){
goto L27;
}
si0=l5;
si0=i32_load(&i->m0,(U64)si0+52U);
l2=si0;
goto L20;
L27:;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+40U);
l3=si0;
si1=l5;
si1=i32_load(&i->m0,(U64)si1+44U);
si0=si0 != si1;
if(si0){
goto L28;
}
si0=l5;
si1=1U;
i32_store8(&i->m0,(U64)si0+85U,si1);
goto L21;
L28:;
si0=l5;
si1=l3;
si2=56U;
si1+=si2;
i32_store(&i->m0,(U64)si0+40U,si1);
si0=l5;
si0=i32_load8_u(&i->m0,(U64)si0+84U);
l13=si0;
si0=l5;
si1=l3;
si1=i32_load(&i->m0,(U64)si1);
si2=33U;
si1=si1 == si2;
l4=si1;
i32_store8(&i->m0,(U64)si0+84U,si1);
si0=l3;
si1=20U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=l3;
si2=l4;
si0=si2?si0:si1;
l2=si0;
si0=l13;
si1=2U;
si0=si0 == si1;
if(si0){
goto L29;
}
si0=l4;
si1=l13;
si2=0U;
si1=si1 != si2;
si0^=si1;
if(si0){
goto L22;
}
L29:;
si0=l5;
si1=2U;
i32_store8(&i->m0,(U64)si0+84U,si1);
goto L19;
L24:;
si0=l5;
si1=16U;
si0+=si1;
si1=l7;
si2=l11;
f2021(i,si0,si1,si2);
si0=l5;
si0=i32_load(&i->m0,(U64)si0+20U);
l2=si0;
si0=l5;
si0=i32_load8_u(&i->m0,(U64)si0+16U);
l3=si0;
L23:;
si0=l3;
si1=255U;
si0&=si1;
si1=2U;
si0=si0 != si1;
if(si0){
goto L20;
}
si0=l5;
si0=i32_load(&i->m0,(U64)si0+36U);
si1=1U;
si0+=si1;
l8=si0;
goto L21;
L22:;
si0=l5;
si1=l12;
i32_store(&i->m0,(U64)si0+56U,si1);
si0=l5;
si1=l2;
i32_store(&i->m0,(U64)si0+52U,si1);
si0=l5;
si1=l4;
i32_store8(&i->m0,(U64)si0+48U,si1);
L21:;
si0=l5;
si1=l8;
i32_store(&i->m0,(U64)si0+36U,si1);
si0=l5;
si0=i32_load(&i->m0,(U64)si0+80U);
l8=si0;
si0=!(si0);
if(si0){
goto L30;
}
si0=l5;
si0=i32_load(&i->m0,(U64)si0+72U);
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
f15024(i,si0);
L32:;
si0=l3;
si1=16U;
si0+=si1;
l3=si0;
si0=l8;
si1=-1U;
si0+=si1;
l8=si0;
if(si0){
goto L31;
}
}
L30:;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+76U);
si0=!(si0);
if(si0){
goto L2;
}
si0=l5;
si0=i32_load(&i->m0,(U64)si0+72U);
f15024(i,si0);
goto L2;
L20:;
si0=l5;
si0=i32_load8_u(&i->m0,(U64)si0+84U);
l4=si0;
si0=l5;
si1=2U;
i32_store8(&i->m0,(U64)si0+84U,si1);
si0=l4;
si1=2U;
si0=si0 != si1;
if(si0){
goto L19;
}
si0=16969556U;
si1=43U;
si2=16969600U;
f604(i,si0,si1,si2);
UNREACHABLE;
L19:;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+40U);
l3=si0;
si1=l5;
si1=i32_load(&i->m0,(U64)si1+44U);
si0=si0 != si1;
if(si0){
goto L34;
}
si0=l5;
si1=1U;
i32_store8(&i->m0,(U64)si0+85U,si1);
goto L33;
L34:;
si0=l5;
si1=l3;
si2=56U;
si1+=si2;
i32_store(&i->m0,(U64)si0+40U,si1);
si0=l3;
si1=20U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=l3;
si2=l3;
si2=i32_load(&i->m0,(U64)si2);
si3=33U;
si2=si2 == si3;
l8=si2;
si0=si2?si0:si1;
l3=si0;
si0=l4;
si1=0U;
si0=si0 != si1;
si1=l8;
si0^=si1;
si0=!(si0);
if(si0){
goto L35;
}
si0=l5;
si1=l5;
si1=i32_load(&i->m0,(U64)si1+56U);
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0+56U,si1);
L35:;
si0=l5;
si1=l3;
i32_store(&i->m0,(U64)si0+52U,si1);
si0=l5;
si1=l8;
i32_store8(&i->m0,(U64)si0+48U,si1);
si0=l5;
si1=l8;
i32_store8(&i->m0,(U64)si0+84U,si1);
L33:;
si0=l5;
si1=l5;
si1=i32_load(&i->m0,(U64)si1+36U);
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0+36U,si1);
si0=l5;
si1=92U;
si0+=si1;
si1=l1;
si2=l2;
f1709(i,si0,si1,si2);
si0=l5;
si0=i32_load(&i->m0,(U64)si0+92U);
l8=si0;
si1=20U;
si0=si0 != si1;
if(si0){
goto L17;
}
si0=l5;
si1=8U;
si0+=si1;
si1=l5;
si2=36U;
si1+=si2;
si2=l11;
f2019(i,si0,si1,si2);
si0=1U;
l3=si0;
si0=l5;
si0=i32_load8_u(&i->m0,(U64)si0+8U);
si1=2U;
si0=si0 == si1;
if(si0){
goto L36;
}
si0=l5;
si0=i32_load(&i->m0,(U64)si0+12U);
l8=si0;
si0=1U;
l3=si0;
L37:;
{
si0=l5;
si1=92U;
si0+=si1;
si1=l1;
si2=l8;
f1709(i,si0,si1,si2);
si0=l5;
si0=i32_load(&i->m0,(U64)si0+92U);
l8=si0;
si1=20U;
si0=si0 != si1;
if(si0){
goto L17;
}
si0=l5;
si1=l5;
si2=36U;
si1+=si2;
si2=l11;
f2019(i,si0,si1,si2);
si0=l3;
si1=1U;
si0+=si1;
l3=si0;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+4U);
l8=si0;
si0=l5;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=2U;
si0=si0 != si1;
if(si0){
goto L37;
}
}
L36:;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+36U);
if(si0){
goto L16;
}
si0=l5;
si0=i32_load(&i->m0,(U64)si0+68U);
l8=si0;
si1=-1U;
si0=si0 == si1;
if(si0){
goto L39;
}
si0=l8;
si1=l11;
si0=si0 >= si1;
if(si0){
goto L38;
}
L39:;
si0=l5;
si1=l11;
i32_store(&i->m0,(U64)si0+68U,si1);
L38:;
si0=0U;
l8=si0;
si0=l5;
si1=0U;
i32_store(&i->m0,(U64)si0+36U,si1);
si0=l4;
if(si0){
goto L40;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+24U);
l8=si0;
si0=!(si0);
if(si0){
goto L15;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+16U);
l11=si0;
si0=!(si0);
if(si0){
goto L15;
}
si0=l11;
si1=l8;
si2=-1U;
si1+=si2;
si2=384U;
si1*=si2;
si0+=si1;
l8=si0;
si1=368U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
si1=l8;
si1=i32_load(&i->m0,(U64)si1+332U);
l11=si1;
si0=si0 <= si1;
if(si0){
goto L14;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+56U);
l4=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+52U);
l2=si0;
si0=l8;
si0=i32_load(&i->m0,(U64)si0+360U);
si1=l11;
si2=4U;
si1<<=(si2&31);
si0+=si1;
l8=si0;
si0=i32_load(&i->m0,(U64)si0+8U);
l11=si0;
si1=l8;
si1=i32_load(&i->m0,(U64)si1+4U);
si0=si0 != si1;
if(si0){
goto L41;
}
si0=l8;
si1=l11;
f1796(i,si0,si1);
si0=l8;
si0=i32_load(&i->m0,(U64)si0+8U);
l11=si0;
L41:;
si0=l8;
si0=i32_load(&i->m0,(U64)si0);
si1=l11;
si2=20U;
si1*=si2;
si0+=si1;
l11=si0;
si1=67U;
i32_store8(&i->m0,(U64)si0+16U,si1);
si0=l11;
si1=-1U;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l11;
si1=l3;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l11;
si1=l4;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l11;
si1=l2;
i32_store(&i->m0,(U64)si0,si1);
si0=1U;
l3=si0;
si0=l8;
si1=l8;
si1=i32_load(&i->m0,(U64)si1+8U);
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l5;
si0=i32_load(&i->m0,(U64)si0+36U);
l8=si0;
L40:;
si0=l5;
si1=l5;
si1=i32_load(&i->m0,(U64)si1+88U);
l11=si1;
si2=1U;
si1+=si2;
l12=si1;
i32_store(&i->m0,(U64)si0+88U,si1);
si0=l3;
si1=l10;
si0+=si1;
l10=si0;
si0=l8;
si0=!(si0);
if(si0){
goto L18;
}
}
si0=16958364U;
si1=16U;
si2=l5;
si3=92U;
si2+=si3;
si3=16958380U;
si4=16958504U;
f641(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L17:;
si0=l0;
si1=l5;
sj1=i64_load(&i->m0,(U64)si1+96U);
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l0;
si1=28U;
si0+=si1;
si1=l5;
si2=92U;
si1+=si2;
si2=28U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=20U;
si0+=si1;
si1=l5;
si2=92U;
si1+=si2;
si2=20U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=12U;
si0+=si1;
si1=l5;
si2=92U;
si1+=si2;
si2=12U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=l8;
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si0=i32_load(&i->m0,(U64)si0+36U);
if(si0){
goto L13;
}
si0=l5;
si0=i32_load(&i->m0,(U64)si0+68U);
l9=si0;
si1=-1U;
si0=si0 == si1;
if(si0){
goto L43;
}
si0=l9;
si1=l11;
si0=si0 >= si1;
if(si0){
goto L42;
}
L43:;
si0=l5;
si1=l11;
i32_store(&i->m0,(U64)si0+68U,si1);
L42:;
si0=l5;
si1=0U;
i32_store(&i->m0,(U64)si0+36U,si1);
si0=l5;
si0=i32_load(&i->m0,(U64)si0+80U);
l3=si0;
si0=!(si0);
if(si0){
goto L44;
}
si0=l5;
si0=i32_load(&i->m0,(U64)si0+72U);
l9=si0;
L45:;
{
si0=l9;
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L46;
}
si0=l9;
si0=i32_load(&i->m0,(U64)si0);
f15024(i,si0);
L46:;
si0=l9;
si1=16U;
si0+=si1;
l9=si0;
si0=l3;
si1=-1U;
si0+=si1;
l3=si0;
if(si0){
goto L45;
}
}
L44:;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+76U);
si0=!(si0);
if(si0){
goto L1;
}
si0=l5;
si0=i32_load(&i->m0,(U64)si0+72U);
f15024(i,si0);
goto L1;
L16:;
si0=16969384U;
si1=16U;
si2=l5;
si3=92U;
si2+=si3;
si3=16969400U;
si4=16969524U;
f641(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L15:;
si0=16960789U;
si1=16U;
si2=16960808U;
f634(i,si0,si1,si2);
UNREACHABLE;
L14:;
si0=l11;
si1=l4;
si2=16960824U;
f594(i,si0,si1,si2);
UNREACHABLE;
L13:;
si0=16969384U;
si1=16U;
si2=l5;
si3=92U;
si2+=si3;
si3=16969400U;
si4=16969524U;
f641(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L2:;
si0=l0;
si1=l10;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=20U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=8U;
si0+=si1;
si1=l6;
si2=l9;
si1=si1 != si2;
i32_store8(&i->m0,(U64)si0,si1);
L1:;
si0=l5;
si1=128U;
si0+=si1;
i->g0=si0;
L0:;
}

void f1744(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 si0,si1,si2;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+24U);
l2=si0;
si0=!(si0);
if(si0){
goto L2;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+16U);
l3=si0;
si0=!(si0);
if(si0){
goto L2;
}
si0=l3;
si1=l2;
si2=-1U;
si1+=si2;
si2=384U;
si1*=si2;
si0+=si1;
l2=si0;
si1=368U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
si1=l2;
si1=i32_load(&i->m0,(U64)si1+332U);
l3=si1;
si0=si0 <= si1;
if(si0){
goto L1;
}
si0=l0;
si1=56U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+52U);
l5=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+360U);
si1=l3;
si2=4U;
si1<<=(si2&31);
si0+=si1;
l0=si0;
si0=i32_load(&i->m0,(U64)si0+8U);
l2=si0;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+4U);
si0=si0 != si1;
if(si0){
goto L3;
}
si0=l0;
si1=l2;
f1796(i,si0,si1);
si0=l0;
si0=i32_load(&i->m0,(U64)si0+8U);
l2=si0;
L3:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
si1=l2;
si2=20U;
si1*=si2;
si0+=si1;
l2=si0;
si1=72U;
i32_store8(&i->m0,(U64)si0+16U,si1);
si0=l2;
si1=-1U;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l2;
si1=l1;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l2;
si1=l4;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l2;
si1=l5;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+8U);
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0+8U,si1);
goto L0;
L2:;
si0=16960789U;
si1=16U;
si2=16960808U;
f634(i,si0,si1,si2);
UNREACHABLE;
L1:;
si0=l3;
si1=l4;
si2=16960824U;
f594(i,si0,si1,si2);
UNREACHABLE;
L0:;
}

void f1745(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4,U32 l5,U32 l6,U32 l7,U32 l8) {
U32 l9=0;
U32 l10=0;
U32 l11=0;
U64 l12=0;
U32 l13=0;
U32 l14=0;
U32 l15=0;
U32 l16=0;
U32 l17=0;
U32 l18=0;
U32 l19=0;
U32 l20=0;
U32 si0,si1,si2,si3,si4,si5,si6;
U64 sj0,sj1;
si0=i->g0;
si1=192U;
si0-=si1;
l9=si0;
i->g0=si0;
si0=l1;
si0=i32_load16_u(&i->m0,(U64)si0+13U);
l10=si0;
si0=1U;
l11=si0;
si0=l1;
si1=1U;
i32_store8(&i->m0,(U64)si0+13U,si1);
si0=l1;
sj0=i64_load(&i->m0,(U64)si0);
l12=sj0;
si0=l1;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l9;
si1=16U;
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
si1=i32_load8_u(&i->m0,(U64)si1+12U);
l13=si1;
si2=1U;
si1&=si2;
i32_store8(&i->m0,(U64)si0+12U,si1);
si0=l9;
sj1=l12;
i64_store(&i->m0,(U64)si0+16U,sj1);
si0=l9;
si1=l10;
i32_store16(&i->m0,(U64)si0+8U,si1);
si0=l9;
si1=l1;
si2=15U;
si1+=si2;
si1=i32_load8_u(&i->m0,(U64)si1);
i32_store8(&i->m0,(U64)si0+10U,si1);
si0=l6;
si0=!(si0);
if(si0){
goto L11;
}
si0=l3;
si0=!(si0);
if(si0){
goto L12;
}
si0=l3;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L6;
}
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=l3;
si0=f15022(i,si0);
l11=si0;
si0=!(si0);
if(si0){
goto L10;
}
L12:;
si0=l11;
si1=l2;
si2=l3;
si0=f15143(i,si0,si1,si2);
l11=si0;
si0=l9;
si1=l3;
i32_store(&i->m0,(U64)si0+48U,si1);
si0=l9;
si1=l3;
i32_store(&i->m0,(U64)si0+44U,si1);
si0=l9;
si1=l11;
i32_store(&i->m0,(U64)si0+40U,si1);
si0=l1;
si1=33U;
si2=1U;
si3=1U;
si4=0U;
si5=l9;
si6=40U;
si5+=si6;
f1710(i,si0,si1,si2,si3,si4,si5);
si0=l9;
si1=40U;
si0+=si1;
si1=l1;
si2=16960570U;
si3=2U;
f1711(i,si0,si1,si2,si3);
si0=l9;
si0=i32_load(&i->m0,(U64)si0+40U);
l11=si0;
si1=20U;
si0=si0 != si1;
if(si0){
goto L9;
}
si0=l9;
si0=i32_load(&i->m0,(U64)si0+44U);
l14=si0;
si0=l4;
si1=255U;
si0&=si1;
si1=94U;
si0=si0 == si1;
if(si0){
goto L15;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+24U);
l11=si0;
si0=!(si0);
if(si0){
goto L13;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+16U);
l10=si0;
si0=!(si0);
if(si0){
goto L13;
}
si0=l10;
si1=l11;
si2=-1U;
si1+=si2;
si2=384U;
si1*=si2;
si0+=si1;
l11=si0;
si1=368U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l15=si0;
si1=l11;
si1=i32_load(&i->m0,(U64)si1+332U);
l10=si1;
si0=si0 <= si1;
if(si0){
goto L14;
}
si0=l1;
si1=56U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l15=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+52U);
l16=si0;
si0=l11;
si0=i32_load(&i->m0,(U64)si0+360U);
si1=l10;
si2=4U;
si1<<=(si2&31);
si0+=si1;
l11=si0;
si0=i32_load(&i->m0,(U64)si0+8U);
l10=si0;
si1=l11;
si1=i32_load(&i->m0,(U64)si1+4U);
si0=si0 != si1;
if(si0){
goto L16;
}
si0=l11;
si1=l10;
f1796(i,si0,si1);
si0=l11;
si0=i32_load(&i->m0,(U64)si0+8U);
l10=si0;
L16:;
si0=l11;
si0=i32_load(&i->m0,(U64)si0);
si1=l10;
si2=20U;
si1*=si2;
si0+=si1;
l10=si0;
si1=l4;
i32_store8(&i->m0,(U64)si0+16U,si1);
si0=l10;
sj1=-4294967296ULL;
i64_store(&i->m0,(U64)si0+8U,sj1);
si0=l10;
si1=l15;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l10;
si1=l16;
i32_store(&i->m0,(U64)si0,si1);
si0=l11;
si1=l11;
si1=i32_load(&i->m0,(U64)si1+8U);
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0+8U,si1);
L15:;
si0=l1;
si1=13U;
si0+=si1;
l17=si0;
si0=l9;
si1=0U;
i32_store(&i->m0,(U64)si0+36U,si1);
si0=l9;
sj1=4ULL;
i64_store(&i->m0,(U64)si0+28U,sj1);
si0=l5;
si1=l6;
si2=7U;
si1<<=(si2&31);
si0+=si1;
l18=si0;
si0=l5;
l16=si0;
L17:;
{
si0=l16;
si0=i32_load8_u(&i->m0,(U64)si0+124U);
if(si0){
goto L22;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+24U);
l11=si0;
si0=!(si0);
if(si0){
goto L24;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+16U);
l6=si0;
if(si0){
goto L23;
}
L24:;
si0=16960789U;
si1=16U;
si2=16960808U;
f634(i,si0,si1,si2);
UNREACHABLE;
L23:;
si0=l11;
si1=384U;
si0*=si1;
si1=l6;
si0+=si1;
l11=si0;
si1=-24U;
si0+=si1;
l6=si0;
si0=l11;
si1=-384U;
si0+=si1;
l19=si0;
si1=368U;
si0+=si1;
l11=si0;
si0=i32_load(&i->m0,(U64)si0);
l10=si0;
l15=si0;
si0=l10;
si1=l19;
si2=364U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
si0=si0 != si1;
if(si0){
goto L25;
}
si0=l6;
si1=l10;
f1791(i,si0,si1);
si0=l11;
si0=i32_load(&i->m0,(U64)si0);
l15=si0;
L25:;
si0=l6;
si0=i32_load(&i->m0,(U64)si0);
si1=l15;
si2=4U;
si1<<=(si2&31);
si0+=si1;
l6=si0;
sj1=-4294967296ULL;
i64_store(&i->m0,(U64)si0+8U,sj1);
si0=l6;
sj1=4ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l11;
si1=l11;
si1=i32_load(&i->m0,(U64)si1);
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+24U);
l11=si0;
si0=!(si0);
if(si0){
goto L26;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+16U);
l6=si0;
si0=!(si0);
if(si0){
goto L26;
}
si0=l11;
si1=384U;
si0*=si1;
si1=l6;
si0+=si1;
l11=si0;
si1=-24U;
si0+=si1;
l19=si0;
si0=l11;
si1=-384U;
si0+=si1;
l20=si0;
si1=368U;
si0+=si1;
l11=si0;
si0=i32_load(&i->m0,(U64)si0);
l15=si0;
l6=si0;
si0=l15;
si1=l20;
si2=364U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
si0=si0 != si1;
if(si0){
goto L27;
}
si0=l19;
si1=l15;
f1791(i,si0,si1);
si0=l11;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
L27:;
si0=l19;
si0=i32_load(&i->m0,(U64)si0);
si1=l6;
si2=4U;
si1<<=(si2&31);
si0+=si1;
l6=si0;
sj1=-4294967296ULL;
i64_store(&i->m0,(U64)si0+8U,sj1);
si0=l6;
sj1=4ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l11;
si1=l11;
si1=i32_load(&i->m0,(U64)si1);
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l9;
si0=i32_load(&i->m0,(U64)si0+36U);
if(si0){
goto L28;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+24U);
l11=si0;
si0=!(si0);
if(si0){
goto L21;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+16U);
l6=si0;
si0=!(si0);
if(si0){
goto L21;
}
si0=l6;
si1=l11;
si2=-1U;
si1+=si2;
si2=384U;
si1*=si2;
si0+=si1;
l11=si0;
si1=368U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l19=si0;
si1=l11;
si1=i32_load(&i->m0,(U64)si1+332U);
l6=si1;
si0=si0 <= si1;
if(si0){
goto L20;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+56U);
l19=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+52U);
l20=si0;
si0=l11;
si0=i32_load(&i->m0,(U64)si0+360U);
si1=l6;
si2=4U;
si1<<=(si2&31);
si0+=si1;
l11=si0;
si0=i32_load(&i->m0,(U64)si0+8U);
l6=si0;
si1=l11;
si1=i32_load(&i->m0,(U64)si1+4U);
si0=si0 != si1;
if(si0){
goto L29;
}
si0=l11;
si1=l6;
f1796(i,si0,si1);
si0=l11;
si0=i32_load(&i->m0,(U64)si0+8U);
l6=si0;
L29:;
si0=l11;
si0=i32_load(&i->m0,(U64)si0);
si1=l6;
si2=20U;
si1*=si2;
si0+=si1;
l6=si0;
si1=4U;
i32_store8(&i->m0,(U64)si0+16U,si1);
si0=l6;
si1=-1U;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l6;
si1=l14;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l6;
si1=l19;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l6;
si1=l20;
i32_store(&i->m0,(U64)si0,si1);
si0=l11;
si1=l11;
si1=i32_load(&i->m0,(U64)si1+8U);
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0+8U,si1);
goto L18;
L28:;
si0=l9;
si1=40U;
si0+=si1;
si1=l1;
si2=l16;
si3=56U;
si2+=si3;
f1709(i,si0,si1,si2);
si0=l9;
si0=i32_load(&i->m0,(U64)si0+40U);
l11=si0;
si1=20U;
si0=si0 == si1;
if(si0){
goto L19;
}
si0=l0;
si1=l9;
sj1=i64_load(&i->m0,(U64)si1+44U);
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l0;
si1=28U;
si0+=si1;
si1=l9;
si2=40U;
si1+=si2;
si2=28U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=20U;
si0+=si1;
si1=l9;
si2=40U;
si1+=si2;
si2=20U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=12U;
si0+=si1;
si1=l9;
si2=40U;
si1+=si2;
si2=12U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=l11;
i32_store(&i->m0,(U64)si0,si1);
goto L7;
L26:;
si0=16960789U;
si1=16U;
si2=16960808U;
f634(i,si0,si1,si2);
UNREACHABLE;
L22:;
si0=l9;
si1=40U;
si0+=si1;
si1=16960616U;
si2=1U;
si3=l9;
si4=188U;
si3+=si4;
si4=0U;
f1677(i,si0,si1,si2,si3,si4);
si0=l9;
si1=40U;
si0+=si1;
si1=16960624U;
f614(i,si0,si1);
UNREACHABLE;
L21:;
si0=16960789U;
si1=16U;
si2=16960808U;
f634(i,si0,si1,si2);
UNREACHABLE;
L20:;
si0=l6;
si1=l19;
si2=16960824U;
f594(i,si0,si1,si2);
UNREACHABLE;
L19:;
si0=l1;
si1=35U;
f1680(i,si0,si1);
L18:;
si0=l9;
si0=i32_load(&i->m0,(U64)si0+36U);
l11=si0;
si1=l9;
si1=i32_load(&i->m0,(U64)si1+32U);
si0=si0 != si1;
if(si0){
goto L30;
}
si0=l9;
si1=28U;
si0+=si1;
si1=l11;
f1792(i,si0,si1);
si0=l9;
si0=i32_load(&i->m0,(U64)si0+36U);
l11=si0;
L30:;
si0=l9;
si0=i32_load(&i->m0,(U64)si0+28U);
si1=l11;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l11=si0;
si1=l15;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l11;
si1=l10;
i32_store(&i->m0,(U64)si0,si1);
si0=l9;
si1=l9;
si1=i32_load(&i->m0,(U64)si1+36U);
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0+36U,si1);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+16U);
si1=l1;
si1=i32_load(&i->m0,(U64)si1+24U);
si2=l10;
f1717(i,si0,si1,si2);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+24U);
l11=si0;
si0=!(si0);
if(si0){
goto L33;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+16U);
l6=si0;
si0=!(si0);
if(si0){
goto L33;
}
si0=l6;
si1=l11;
si2=-1U;
si1+=si2;
si2=384U;
si1*=si2;
si0+=si1;
l11=si0;
si1=368U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l19=si0;
si1=l11;
si1=i32_load(&i->m0,(U64)si1+332U);
l6=si1;
si0=si0 <= si1;
if(si0){
goto L32;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+56U);
l19=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+52U);
l20=si0;
si0=l11;
si0=i32_load(&i->m0,(U64)si0+360U);
si1=l6;
si2=4U;
si1<<=(si2&31);
si0+=si1;
l11=si0;
si0=i32_load(&i->m0,(U64)si0+8U);
l6=si0;
si1=l11;
si1=i32_load(&i->m0,(U64)si1+4U);
si0=si0 != si1;
if(si0){
goto L34;
}
si0=l11;
si1=l6;
f1796(i,si0,si1);
si0=l11;
si0=i32_load(&i->m0,(U64)si0+8U);
l6=si0;
L34:;
si0=l11;
si0=i32_load(&i->m0,(U64)si0);
si1=l6;
si2=20U;
si1*=si2;
si0+=si1;
l6=si0;
si1=51U;
i32_store8(&i->m0,(U64)si0+16U,si1);
si0=l6;
si1=l15;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l6;
si1=0U;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l6;
si1=l19;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l6;
si1=l20;
i32_store(&i->m0,(U64)si0,si1);
si0=l11;
si1=l11;
si1=i32_load(&i->m0,(U64)si1+8U);
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l9;
si1=40U;
si0+=si1;
si1=l1;
si2=l16;
f1715(i,si0,si1,si2);
si0=l9;
si0=i32_load(&i->m0,(U64)si0+40U);
l11=si0;
si1=20U;
si0=si0 != si1;
if(si0){
goto L36;
}
si0=l16;
si1=120U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si0=!(si0);
if(si0){
goto L31;
}
si0=l16;
si0=i32_load(&i->m0,(U64)si0+112U);
l11=si0;
si0=l6;
si1=56U;
si0*=si1;
l6=si0;
L37:;
{
si0=l9;
si1=40U;
si0+=si1;
si1=l1;
si2=l11;
si3=0U;
si4=l10;
f1718(i,si0,si1,si2,si3,si4);
si0=l9;
si0=i32_load(&i->m0,(U64)si0+40U);
l15=si0;
si1=20U;
si0=si0 != si1;
if(si0){
goto L35;
}
si0=l11;
si1=56U;
si0+=si1;
l11=si0;
si0=l6;
si1=-56U;
si0+=si1;
l6=si0;
si0=!(si0);
if(si0){
goto L31;
}
goto L37;
}
L36:;
si0=l0;
si1=l9;
sj1=i64_load(&i->m0,(U64)si1+44U);
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l0;
si1=28U;
si0+=si1;
si1=l9;
si2=40U;
si1+=si2;
si2=28U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=20U;
si0+=si1;
si1=l9;
si2=40U;
si1+=si2;
si2=20U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=12U;
si0+=si1;
si1=l9;
si2=40U;
si1+=si2;
si2=12U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=l11;
i32_store(&i->m0,(U64)si0,si1);
goto L7;
L35:;
si0=l0;
si1=l9;
sj1=i64_load(&i->m0,(U64)si1+44U);
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l0;
si1=28U;
si0+=si1;
si1=l9;
si2=40U;
si1+=si2;
si2=28U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=20U;
si0+=si1;
si1=l9;
si2=40U;
si1+=si2;
si2=20U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=12U;
si0+=si1;
si1=l9;
si2=40U;
si1+=si2;
si2=12U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=l15;
i32_store(&i->m0,(U64)si0,si1);
goto L7;
L33:;
si0=16960789U;
si1=16U;
si2=16960808U;
f634(i,si0,si1,si2);
UNREACHABLE;
L32:;
si0=l6;
si1=l19;
si2=16960824U;
f594(i,si0,si1,si2);
UNREACHABLE;
L31:;
si0=l16;
si1=128U;
si0+=si1;
l16=si0;
si1=l18;
si0=si0 != si1;
if(si0){
goto L17;
}
}
si0=l9;
si1=40U;
si0+=si1;
si1=l7;
si2=l1;
si3=l8;
si3=i32_load(&i->m0,(U64)si3+20U);
TF(i->t0,si3,void (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
si0=l9;
si0=i32_load(&i->m0,(U64)si0+40U);
l11=si0;
si1=20U;
si0=si0 != si1;
if(si0){
goto L41;
}
si0=l9;
si0=i32_load(&i->m0,(U64)si0+36U);
l11=si0;
si0=!(si0);
if(si0){
goto L42;
}
si0=l9;
si0=i32_load(&i->m0,(U64)si0+28U);
l18=si0;
si0=l11;
si1=3U;
si0<<=(si1&31);
l10=si0;
L43:;
{
si0=l1;
si0=i32_load(&i->m0,(U64)si0+24U);
l11=si0;
si0=!(si0);
if(si0){
goto L40;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+16U);
l6=si0;
si0=!(si0);
if(si0){
goto L40;
}
si0=l6;
si1=l11;
si2=-1U;
si1+=si2;
si2=384U;
si1*=si2;
si0+=si1;
l11=si0;
si1=368U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l15=si0;
si1=l11;
si1=i32_load(&i->m0,(U64)si1+332U);
l6=si1;
si0=si0 <= si1;
if(si0){
goto L39;
}
si0=l18;
si1=l10;
si0+=si1;
l15=si0;
si1=-4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l16=si0;
si0=l15;
si1=-8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l15=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+56U);
l19=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+52U);
l20=si0;
si0=l11;
si0=i32_load(&i->m0,(U64)si0+360U);
si1=l6;
si2=4U;
si1<<=(si2&31);
si0+=si1;
l11=si0;
si0=i32_load(&i->m0,(U64)si0+8U);
l6=si0;
si1=l11;
si1=i32_load(&i->m0,(U64)si1+4U);
si0=si0 != si1;
if(si0){
goto L44;
}
si0=l11;
si1=l6;
f1796(i,si0,si1);
si0=l11;
si0=i32_load(&i->m0,(U64)si0+8U);
l6=si0;
L44:;
si0=l11;
si0=i32_load(&i->m0,(U64)si0);
si1=l6;
si2=20U;
si1*=si2;
si0+=si1;
l6=si0;
si1=38U;
i32_store8(&i->m0,(U64)si0+16U,si1);
si0=l6;
si1=l15;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l6;
si1=0U;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l6;
si1=l19;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l6;
si1=l20;
i32_store(&i->m0,(U64)si0,si1);
si0=l11;
si1=l11;
si1=i32_load(&i->m0,(U64)si1+8U);
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+16U);
si1=l1;
si1=i32_load(&i->m0,(U64)si1+24U);
si2=l16;
f1717(i,si0,si1,si2);
si0=l10;
si1=-8U;
si0+=si1;
l10=si0;
if(si0){
goto L43;
}
}
L42:;
si0=l4;
si1=255U;
si0&=si1;
si1=94U;
si0=si0 == si1;
if(si0){
goto L38;
}
goto L8;
L41:;
si0=l0;
si1=l9;
sj1=i64_load(&i->m0,(U64)si1+44U);
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l0;
si1=28U;
si0+=si1;
si1=l9;
si2=40U;
si1+=si2;
si2=28U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=20U;
si0+=si1;
si1=l9;
si2=40U;
si1+=si2;
si2=20U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=12U;
si0+=si1;
si1=l9;
si2=40U;
si1+=si2;
si2=12U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=l11;
i32_store(&i->m0,(U64)si0,si1);
goto L7;
L40:;
si0=16960789U;
si1=16U;
si2=16960808U;
f634(i,si0,si1,si2);
UNREACHABLE;
L39:;
si0=l6;
si1=l15;
si2=16960824U;
f594(i,si0,si1,si2);
UNREACHABLE;
L38:;
si0=l9;
si1=10U;
i32_store(&i->m0,(U64)si0+40U,si1);
si0=l1;
si1=l9;
si2=40U;
si1+=si2;
f1704(i,si0,si1);
goto L8;
L14:;
si0=l10;
si1=l15;
si2=16960824U;
f594(i,si0,si1,si2);
UNREACHABLE;
L13:;
si0=16960789U;
si1=16U;
si2=16960808U;
f634(i,si0,si1,si2);
UNREACHABLE;
L11:;
si0=16960640U;
si1=40U;
si2=16960680U;
f604(i,si0,si1,si2);
UNREACHABLE;
L10:;
si0=1U;
si1=l3;
f52(i,si0,si1);
UNREACHABLE;
L9:;
si0=l0;
si1=l9;
sj1=i64_load(&i->m0,(U64)si1+48U);
i64_store(&i->m0,(U64)si0+8U,sj1);
si0=l0;
si1=16U;
si0+=si1;
si1=l9;
si2=40U;
si1+=si2;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=24U;
si0+=si1;
si1=l9;
si2=40U;
si1+=si2;
si2=24U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=32U;
si0+=si1;
si1=l9;
si2=40U;
si1+=si2;
si2=32U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l9;
si1=i32_load(&i->m0,(U64)si1+44U);
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l11;
i32_store(&i->m0,(U64)si0,si1);
goto L1;
L8:;
si0=l1;
si1=52U;
f1680(i,si0,si1);
si0=l9;
si1=40U;
si0+=si1;
si1=l1;
f1708(i,si0,si1);
si0=l1;
si1=l13;
i32_store8(&i->m0,(U64)si0+12U,si1);
si0=l1;
si1=8U;
si0+=si1;
si1=l9;
si2=16U;
si1+=si2;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
si1=l9;
sj1=i64_load(&i->m0,(U64)si1+16U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l17;
si1=l9;
si1=i32_load16_u(&i->m0,(U64)si1+8U);
i32_store16(&i->m0,(U64)si0,si1);
si0=l17;
si1=2U;
si0+=si1;
si1=l9;
si1=i32_load8_u(&i->m0,(U64)si1+10U);
i32_store8(&i->m0,(U64)si0,si1);
si0=l1;
si1=l9;
si2=40U;
si1+=si2;
si0=f1734(i,si0,si1);
l6=si0;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=112U;
si0=f15022(i,si0);
l11=si0;
si0=!(si0);
if(si0){
goto L5;
}
si0=l11;
si1=l9;
si2=40U;
si1+=si2;
si2=112U;
si0=f15143(i,si0,si1,si2);
l11=si0;
si0=l9;
si1=9U;
i32_store(&i->m0,(U64)si0+152U,si1);
si0=l9;
si1=l11;
i32_store(&i->m0,(U64)si0+156U,si1);
si0=l1;
si1=l9;
si2=152U;
si1+=si2;
f1704(i,si0,si1);
si0=l3;
if(si0){
goto L46;
}
si0=1U;
l11=si0;
goto L45;
L46:;
si0=l3;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L6;
}
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=l3;
si0=f15022(i,si0);
l11=si0;
si0=!(si0);
if(si0){
goto L4;
}
L45:;
si0=l11;
si1=l2;
si2=l3;
si0=f15143(i,si0,si1,si2);
l11=si0;
si0=l9;
si1=152U;
si0+=si1;
si1=12U;
si0+=si1;
l10=si0;
si1=l3;
i32_store(&i->m0,(U64)si0,si1);
si0=l9;
si1=160U;
si0+=si1;
si1=l3;
i32_store(&i->m0,(U64)si0,si1);
si0=l9;
si1=l11;
i32_store(&i->m0,(U64)si0+156U,si1);
si0=l9;
si1=7U;
i32_store(&i->m0,(U64)si0+152U,si1);
si0=l1;
si1=l9;
si2=152U;
si1+=si2;
f1704(i,si0,si1);
si0=l1;
si1=l6;
f1735(i,si0,si1);
si0=l9;
si1=152U;
si0+=si1;
si1=l1;
si2=l5;
si3=56U;
si2+=si3;
f1709(i,si0,si1,si2);
si0=l9;
si0=i32_load(&i->m0,(U64)si0+152U);
l11=si0;
si1=20U;
si0=si0 != si1;
if(si0){
goto L47;
}
si0=l1;
si1=35U;
f1680(i,si0,si1);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+24U);
l11=si0;
si0=!(si0);
if(si0){
goto L3;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+16U);
l6=si0;
si0=!(si0);
if(si0){
goto L3;
}
si0=l6;
si1=l11;
si2=-1U;
si1+=si2;
si2=384U;
si1*=si2;
si0+=si1;
l11=si0;
si1=368U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l10=si0;
si1=l11;
si1=i32_load(&i->m0,(U64)si1+332U);
l6=si1;
si0=si0 <= si1;
if(si0){
goto L2;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+56U);
l10=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+52U);
l15=si0;
si0=l11;
si0=i32_load(&i->m0,(U64)si0+360U);
si1=l6;
si2=4U;
si1<<=(si2&31);
si0+=si1;
l1=si0;
si0=i32_load(&i->m0,(U64)si0+8U);
l11=si0;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+4U);
si0=si0 != si1;
if(si0){
goto L48;
}
si0=l1;
si1=l11;
f1796(i,si0,si1);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+8U);
l11=si0;
L48:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
si1=l11;
si2=20U;
si1*=si2;
si0+=si1;
l11=si0;
si1=44U;
i32_store8(&i->m0,(U64)si0+16U,si1);
si0=l11;
sj1=-4294967295ULL;
i64_store(&i->m0,(U64)si0+8U,sj1);
si0=l11;
si1=l10;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l11;
si1=l15;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=20U;
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+8U);
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l9;
si0=i32_load(&i->m0,(U64)si0+32U);
si0=!(si0);
if(si0){
goto L1;
}
si0=l9;
si0=i32_load(&i->m0,(U64)si0+28U);
f15024(i,si0);
goto L1;
L47:;
si0=l0;
si1=l9;
sj1=i64_load(&i->m0,(U64)si1+156U);
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l0;
si1=28U;
si0+=si1;
si1=l9;
si2=152U;
si1+=si2;
si2=28U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=20U;
si0+=si1;
si1=l9;
si2=152U;
si1+=si2;
si2=20U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=12U;
si0+=si1;
si1=l10;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=l11;
i32_store(&i->m0,(U64)si0,si1);
L7:;
si0=l9;
si0=i32_load(&i->m0,(U64)si0+32U);
si0=!(si0);
if(si0){
goto L1;
}
si0=l9;
si0=i32_load(&i->m0,(U64)si0+28U);
f15024(i,si0);
goto L1;
L6:;
f53(i);
UNREACHABLE;
L5:;
si0=4U;
si1=112U;
f52(i,si0,si1);
UNREACHABLE;
L4:;
si0=1U;
si1=l3;
f52(i,si0,si1);
UNREACHABLE;
L3:;
si0=16960789U;
si1=16U;
si2=16960808U;
f634(i,si0,si1,si2);
UNREACHABLE;
L2:;
si0=l6;
si1=l10;
si2=16960824U;
f594(i,si0,si1,si2);
UNREACHABLE;
L1:;
si0=l9;
si1=192U;
si0+=si1;
i->g0=si0;
L0:;
}

void f1746(rustpythonInstance*i,U32 l0,U32 l1) {
U32 si0,si1,si2;
si0=l1;
si0=!(si0);
if(si0){
goto L2;
}
si0=l0;
if(si0){
goto L1;
}
L2:;
si0=16960789U;
si1=16U;
si2=16960808U;
f634(i,si0,si1,si2);
UNREACHABLE;
L1:;
si0=l1;
si1=384U;
si0*=si1;
si1=l0;
si0+=si1;
si1=-8U;
si0+=si1;
l1=si0;
si1=l1;
si1=i32_load16_u(&i->m0,(U64)si1);
si2=2U;
si1|=si2;
i32_store16(&i->m0,(U64)si0,si1);
L0:;
}

void f1747(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 si0,si1,si2;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+24U);
l2=si0;
si0=!(si0);
if(si0){
goto L2;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+16U);
l3=si0;
si0=!(si0);
if(si0){
goto L2;
}
si0=l3;
si1=l2;
si2=-1U;
si1+=si2;
si2=384U;
si1*=si2;
si0+=si1;
l2=si0;
si1=368U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
si1=l2;
si1=i32_load(&i->m0,(U64)si1+332U);
l3=si1;
si0=si0 <= si1;
if(si0){
goto L1;
}
si0=l0;
si1=56U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+52U);
l5=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+360U);
si1=l3;
si2=4U;
si1<<=(si2&31);
si0+=si1;
l0=si0;
si0=i32_load(&i->m0,(U64)si0+8U);
l2=si0;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+4U);
si0=si0 != si1;
if(si0){
goto L3;
}
si0=l0;
si1=l2;
f1796(i,si0,si1);
si0=l0;
si0=i32_load(&i->m0,(U64)si0+8U);
l2=si0;
L3:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
si1=l2;
si2=20U;
si1*=si2;
si0+=si1;
l2=si0;
si1=84U;
i32_store8(&i->m0,(U64)si0+16U,si1);
si0=l2;
si1=-1U;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l2;
si1=l1;
si2=255U;
si1&=si2;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l2;
si1=l4;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l2;
si1=l5;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+8U);
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0+8U,si1);
goto L0;
L2:;
si0=16960789U;
si1=16U;
si2=16960808U;
f634(i,si0,si1,si2);
UNREACHABLE;
L1:;
si0=l3;
si1=l4;
si2=16960824U;
f594(i,si0,si1,si2);
UNREACHABLE;
L0:;
}

void f1748(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 si0,si1,si2;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+24U);
l2=si0;
si0=!(si0);
if(si0){
goto L2;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+16U);
l3=si0;
si0=!(si0);
if(si0){
goto L2;
}
si0=l3;
si1=l2;
si2=-1U;
si1+=si2;
si2=384U;
si1*=si2;
si0+=si1;
l2=si0;
si1=368U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
si1=l2;
si1=i32_load(&i->m0,(U64)si1+332U);
l3=si1;
si0=si0 <= si1;
if(si0){
goto L1;
}
si0=l0;
si1=56U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+52U);
l5=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+360U);
si1=l3;
si2=4U;
si1<<=(si2&31);
si0+=si1;
l0=si0;
si0=i32_load(&i->m0,(U64)si0+8U);
l2=si0;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+4U);
si0=si0 != si1;
if(si0){
goto L3;
}
si0=l0;
si1=l2;
f1796(i,si0,si1);
si0=l0;
si0=i32_load(&i->m0,(U64)si0+8U);
l2=si0;
L3:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
si1=l2;
si2=20U;
si1*=si2;
si0+=si1;
l2=si0;
si1=66U;
i32_store8(&i->m0,(U64)si0+16U,si1);
si0=l2;
si1=-1U;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l2;
si1=l1;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l2;
si1=l4;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l2;
si1=l5;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+8U);
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0+8U,si1);
goto L0;
L2:;
si0=16960789U;
si1=16U;
si2=16960808U;
f634(i,si0,si1,si2);
UNREACHABLE;
L1:;
si0=l3;
si1=l4;
si2=16960824U;
f594(i,si0,si1,si2);
UNREACHABLE;
L0:;
}

void f1749(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 si0,si1,si2;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+24U);
l2=si0;
si0=!(si0);
if(si0){
goto L2;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+16U);
l3=si0;
si0=!(si0);
if(si0){
goto L2;
}
si0=l3;
si1=l2;
si2=-1U;
si1+=si2;
si2=384U;
si1*=si2;
si0+=si1;
l2=si0;
si1=368U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
si1=l2;
si1=i32_load(&i->m0,(U64)si1+332U);
l3=si1;
si0=si0 <= si1;
if(si0){
goto L1;
}
si0=l0;
si1=56U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+52U);
l5=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+360U);
si1=l3;
si2=4U;
si1<<=(si2&31);
si0+=si1;
l0=si0;
si0=i32_load(&i->m0,(U64)si0+8U);
l2=si0;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+4U);
si0=si0 != si1;
if(si0){
goto L3;
}
si0=l0;
si1=l2;
f1796(i,si0,si1);
si0=l0;
si0=i32_load(&i->m0,(U64)si0+8U);
l2=si0;
L3:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
si1=l2;
si2=20U;
si1*=si2;
si0+=si1;
l2=si0;
si1=70U;
i32_store8(&i->m0,(U64)si0+16U,si1);
si0=l2;
si1=-1U;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l2;
si1=l1;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l2;
si1=l4;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l2;
si1=l5;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+8U);
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0+8U,si1);
goto L0;
L2:;
si0=16960789U;
si1=16U;
si2=16960808U;
f634(i,si0,si1,si2);
UNREACHABLE;
L1:;
si0=l3;
si1=l4;
si2=16960824U;
f594(i,si0,si1,si2);
UNREACHABLE;
L0:;
}

void f1750(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 si0,si1,si2;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+24U);
l2=si0;
si0=!(si0);
if(si0){
goto L2;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+16U);
l3=si0;
si0=!(si0);
if(si0){
goto L2;
}
si0=l3;
si1=l2;
si2=-1U;
si1+=si2;
si2=384U;
si1*=si2;
si0+=si1;
l2=si0;
si1=368U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
si1=l2;
si1=i32_load(&i->m0,(U64)si1+332U);
l3=si1;
si0=si0 <= si1;
if(si0){
goto L1;
}
si0=l0;
si1=56U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+52U);
l5=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+360U);
si1=l3;
si2=4U;
si1<<=(si2&31);
si0+=si1;
l0=si0;
si0=i32_load(&i->m0,(U64)si0+8U);
l2=si0;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+4U);
si0=si0 != si1;
if(si0){
goto L3;
}
si0=l0;
si1=l2;
f1796(i,si0,si1);
si0=l0;
si0=i32_load(&i->m0,(U64)si0+8U);
l2=si0;
L3:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
si1=l2;
si2=20U;
si1*=si2;
si0+=si1;
l2=si0;
si1=68U;
i32_store8(&i->m0,(U64)si0+16U,si1);
si0=l2;
si1=-1U;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l2;
si1=l1;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l2;
si1=l4;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l2;
si1=l5;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+8U);
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0+8U,si1);
goto L0;
L2:;
si0=16960789U;
si1=16U;
si2=16960808U;
f634(i,si0,si1,si2);
UNREACHABLE;
L1:;
si0=l3;
si1=l4;
si2=16960824U;
f594(i,si0,si1,si2);
UNREACHABLE;
L0:;
}

void f1751(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 si0,si1,si2;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+24U);
l2=si0;
si0=!(si0);
if(si0){
goto L2;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+16U);
l3=si0;
si0=!(si0);
if(si0){
goto L2;
}
si0=l3;
si1=l2;
si2=-1U;
si1+=si2;
si2=384U;
si1*=si2;
si0+=si1;
l2=si0;
si1=368U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
si1=l2;
si1=i32_load(&i->m0,(U64)si1+332U);
l3=si1;
si0=si0 <= si1;
if(si0){
goto L1;
}
si0=l0;
si1=56U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+52U);
l5=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+360U);
si1=l3;
si2=4U;
si1<<=(si2&31);
si0+=si1;
l0=si0;
si0=i32_load(&i->m0,(U64)si0+8U);
l2=si0;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+4U);
si0=si0 != si1;
if(si0){
goto L3;
}
si0=l0;
si1=l2;
f1796(i,si0,si1);
si0=l0;
si0=i32_load(&i->m0,(U64)si0+8U);
l2=si0;
L3:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
si1=l2;
si2=20U;
si1*=si2;
si0+=si1;
l2=si0;
si1=76U;
i32_store8(&i->m0,(U64)si0+16U,si1);
si0=l2;
si1=-1U;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l2;
si1=l1;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l2;
si1=l4;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l2;
si1=l5;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+8U);
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0+8U,si1);
goto L0;
L2:;
si0=16960789U;
si1=16U;
si2=16960808U;
f634(i,si0,si1,si2);
UNREACHABLE;
L1:;
si0=l3;
si1=l4;
si2=16960824U;
f594(i,si0,si1,si2);
UNREACHABLE;
L0:;
}

void f1752(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 si0,si1,si2;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+24U);
l2=si0;
si0=!(si0);
if(si0){
goto L2;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+16U);
l3=si0;
si0=!(si0);
if(si0){
goto L2;
}
si0=l3;
si1=l2;
si2=-1U;
si1+=si2;
si2=384U;
si1*=si2;
si0+=si1;
l2=si0;
si1=368U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
si1=l2;
si1=i32_load(&i->m0,(U64)si1+332U);
l3=si1;
si0=si0 <= si1;
if(si0){
goto L1;
}
si0=l0;
si1=56U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+52U);
l5=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+360U);
si1=l3;
si2=4U;
si1<<=(si2&31);
si0+=si1;
l0=si0;
si0=i32_load(&i->m0,(U64)si0+8U);
l2=si0;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+4U);
si0=si0 != si1;
if(si0){
goto L3;
}
si0=l0;
si1=l2;
f1796(i,si0,si1);
si0=l0;
si0=i32_load(&i->m0,(U64)si0+8U);
l2=si0;
L3:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
si1=l2;
si2=20U;
si1*=si2;
si0+=si1;
l2=si0;
si1=67U;
i32_store8(&i->m0,(U64)si0+16U,si1);
si0=l2;
si1=-1U;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l2;
si1=l1;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l2;
si1=l4;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l2;
si1=l5;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+8U);
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0+8U,si1);
goto L0;
L2:;
si0=16960789U;
si1=16U;
si2=16960808U;
f634(i,si0,si1,si2);
UNREACHABLE;
L1:;
si0=l3;
si1=l4;
si2=16960824U;
f594(i,si0,si1,si2);
UNREACHABLE;
L0:;
}

void f1753(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 si0,si1,si2;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+24U);
l2=si0;
si0=!(si0);
if(si0){
goto L2;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+16U);
l3=si0;
si0=!(si0);
if(si0){
goto L2;
}
si0=l3;
si1=l2;
si2=-1U;
si1+=si2;
si2=384U;
si1*=si2;
si0+=si1;
l2=si0;
si1=368U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
si1=l2;
si1=i32_load(&i->m0,(U64)si1+332U);
l3=si1;
si0=si0 <= si1;
if(si0){
goto L1;
}
si0=l0;
si1=56U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+52U);
l5=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+360U);
si1=l3;
si2=4U;
si1<<=(si2&31);
si0+=si1;
l0=si0;
si0=i32_load(&i->m0,(U64)si0+8U);
l2=si0;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+4U);
si0=si0 != si1;
if(si0){
goto L3;
}
si0=l0;
si1=l2;
f1796(i,si0,si1);
si0=l0;
si0=i32_load(&i->m0,(U64)si0+8U);
l2=si0;
L3:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
si1=l2;
si2=20U;
si1*=si2;
si0+=si1;
l2=si0;
si1=69U;
i32_store8(&i->m0,(U64)si0+16U,si1);
si0=l2;
si1=-1U;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l2;
si1=l1;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l2;
si1=l4;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l2;
si1=l5;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+8U);
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0+8U,si1);
goto L0;
L2:;
si0=16960789U;
si1=16U;
si2=16960808U;
f634(i,si0,si1,si2);
UNREACHABLE;
L1:;
si0=l3;
si1=l4;
si2=16960824U;
f594(i,si0,si1,si2);
UNREACHABLE;
L0:;
}

void f1754(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 si0,si1,si2;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+24U);
l2=si0;
si0=!(si0);
if(si0){
goto L2;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+16U);
l3=si0;
si0=!(si0);
if(si0){
goto L2;
}
si0=l3;
si1=l2;
si2=-1U;
si1+=si2;
si2=384U;
si1*=si2;
si0+=si1;
l2=si0;
si1=368U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
si1=l2;
si1=i32_load(&i->m0,(U64)si1+332U);
l3=si1;
si0=si0 <= si1;
if(si0){
goto L1;
}
si0=l0;
si1=56U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+52U);
l5=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+360U);
si1=l3;
si2=4U;
si1<<=(si2&31);
si0+=si1;
l0=si0;
si0=i32_load(&i->m0,(U64)si0+8U);
l2=si0;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+4U);
si0=si0 != si1;
if(si0){
goto L3;
}
si0=l0;
si1=l2;
f1796(i,si0,si1);
si0=l0;
si0=i32_load(&i->m0,(U64)si0+8U);
l2=si0;
L3:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
si1=l2;
si2=20U;
si1*=si2;
si0+=si1;
l2=si0;
si1=27U;
i32_store8(&i->m0,(U64)si0+16U,si1);
si0=l2;
si1=-1U;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l2;
si1=l1;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l2;
si1=l4;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l2;
si1=l5;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+8U);
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0+8U,si1);
goto L0;
L2:;
si0=16960789U;
si1=16U;
si2=16960808U;
f634(i,si0,si1,si2);
UNREACHABLE;
L1:;
si0=l3;
si1=l4;
si2=16960824U;
f594(i,si0,si1,si2);
UNREACHABLE;
L0:;
}

void f1755(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 si0,si1,si2;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+24U);
l2=si0;
si0=!(si0);
if(si0){
goto L2;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+16U);
l3=si0;
si0=!(si0);
if(si0){
goto L2;
}
si0=l3;
si1=l2;
si2=-1U;
si1+=si2;
si2=384U;
si1*=si2;
si0+=si1;
l2=si0;
si1=368U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
si1=l2;
si1=i32_load(&i->m0,(U64)si1+332U);
l3=si1;
si0=si0 <= si1;
if(si0){
goto L1;
}
si0=l0;
si1=56U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+52U);
l5=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+360U);
si1=l3;
si2=4U;
si1<<=(si2&31);
si0+=si1;
l0=si0;
si0=i32_load(&i->m0,(U64)si0+8U);
l2=si0;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+4U);
si0=si0 != si1;
if(si0){
goto L3;
}
si0=l0;
si1=l2;
f1796(i,si0,si1);
si0=l0;
si0=i32_load(&i->m0,(U64)si0+8U);
l2=si0;
L3:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
si1=l2;
si2=20U;
si1*=si2;
si0+=si1;
l2=si0;
si1=71U;
i32_store8(&i->m0,(U64)si0+16U,si1);
si0=l2;
si1=-1U;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l2;
si1=l1;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l2;
si1=l4;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l2;
si1=l5;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+8U);
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0+8U,si1);
goto L0;
L2:;
si0=16960789U;
si1=16U;
si2=16960808U;
f634(i,si0,si1,si2);
UNREACHABLE;
L1:;
si0=l3;
si1=l4;
si2=16960824U;
f594(i,si0,si1,si2);
UNREACHABLE;
L0:;
}

void f1756(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 si0,si1,si2;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+24U);
l2=si0;
si0=!(si0);
if(si0){
goto L2;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+16U);
l3=si0;
si0=!(si0);
if(si0){
goto L2;
}
si0=l3;
si1=l2;
si2=-1U;
si1+=si2;
si2=384U;
si1*=si2;
si0+=si1;
l2=si0;
si1=368U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
si1=l2;
si1=i32_load(&i->m0,(U64)si1+332U);
l3=si1;
si0=si0 <= si1;
if(si0){
goto L1;
}
si0=l0;
si1=56U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+52U);
l5=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+360U);
si1=l3;
si2=4U;
si1<<=(si2&31);
si0+=si1;
l0=si0;
si0=i32_load(&i->m0,(U64)si0+8U);
l2=si0;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+4U);
si0=si0 != si1;
if(si0){
goto L3;
}
si0=l0;
si1=l2;
f1796(i,si0,si1);
si0=l0;
si0=i32_load(&i->m0,(U64)si0+8U);
l2=si0;
L3:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
si1=l2;
si2=20U;
si1*=si2;
si0+=si1;
l2=si0;
si1=24U;
i32_store8(&i->m0,(U64)si0+16U,si1);
si0=l2;
si1=-1U;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l2;
si1=l1;
si2=255U;
si1&=si2;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l2;
si1=l4;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l2;
si1=l5;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+8U);
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0+8U,si1);
goto L0;
L2:;
si0=16960789U;
si1=16U;
si2=16960808U;
f634(i,si0,si1,si2);
UNREACHABLE;
L1:;
si0=l3;
si1=l4;
si2=16960824U;
f594(i,si0,si1,si2);
UNREACHABLE;
L0:;
}

void f1757(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 si0,si1,si2;
si0=l1;
si0=i32_load8_u(&i->m0,(U64)si0);
switch(si0){
case 0:
goto L10;
case 1:
goto L9;
case 2:
goto L8;
default:
goto L10;
}
L10:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+24U);
l2=si0;
si0=!(si0);
if(si0){
goto L6;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+16U);
l3=si0;
si0=!(si0);
if(si0){
goto L6;
}
si0=l3;
si1=l2;
si2=-1U;
si1+=si2;
si2=384U;
si1*=si2;
si0+=si1;
l4=si0;
si1=368U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si1=l4;
si1=i32_load(&i->m0,(U64)si1+332U);
l5=si1;
si0=si0 <= si1;
if(si0){
goto L5;
}
si0=l0;
si1=56U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+52U);
l6=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
l3=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+360U);
si1=l5;
si2=4U;
si1<<=(si2&31);
si0+=si1;
l0=si0;
si0=i32_load(&i->m0,(U64)si0+8U);
l4=si0;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+4U);
si0=si0 != si1;
if(si0){
goto L11;
}
si0=l0;
si1=l4;
f1796(i,si0,si1);
si0=l0;
si0=i32_load(&i->m0,(U64)si0+8U);
l4=si0;
L11:;
si0=l0;
si1=8U;
si0+=si1;
l1=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
si1=l4;
si2=20U;
si1*=si2;
si0+=si1;
l0=si0;
si1=l6;
i32_store(&i->m0,(U64)si0,si1);
si0=48U;
l4=si0;
goto L7;
L9:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+24U);
l2=si0;
si0=!(si0);
if(si0){
goto L4;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+16U);
l3=si0;
si0=!(si0);
if(si0){
goto L4;
}
si0=l3;
si1=l2;
si2=-1U;
si1+=si2;
si2=384U;
si1*=si2;
si0+=si1;
l4=si0;
si1=368U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si1=l4;
si1=i32_load(&i->m0,(U64)si1+332U);
l5=si1;
si0=si0 <= si1;
if(si0){
goto L3;
}
si0=l0;
si1=56U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+52U);
l6=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
l3=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+360U);
si1=l5;
si2=4U;
si1<<=(si2&31);
si0+=si1;
l0=si0;
si0=i32_load(&i->m0,(U64)si0+8U);
l4=si0;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+4U);
si0=si0 != si1;
if(si0){
goto L12;
}
si0=l0;
si1=l4;
f1796(i,si0,si1);
si0=l0;
si0=i32_load(&i->m0,(U64)si0+8U);
l4=si0;
L12:;
si0=l0;
si1=8U;
si0+=si1;
l1=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
si1=l4;
si2=20U;
si1*=si2;
si0+=si1;
l0=si0;
si1=l6;
i32_store(&i->m0,(U64)si0,si1);
si0=49U;
l4=si0;
goto L7;
L8:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+24U);
l2=si0;
si0=!(si0);
if(si0){
goto L2;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+16U);
l3=si0;
si0=!(si0);
if(si0){
goto L2;
}
si0=l3;
si1=l2;
si2=-1U;
si1+=si2;
si2=384U;
si1*=si2;
si0+=si1;
l4=si0;
si1=368U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si1=l4;
si1=i32_load(&i->m0,(U64)si1+332U);
l5=si1;
si0=si0 <= si1;
if(si0){
goto L1;
}
si0=l0;
si1=56U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+52U);
l6=si0;
si0=l1;
si0=i32_load8_u(&i->m0,(U64)si0+1U);
l3=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+360U);
si1=l5;
si2=4U;
si1<<=(si2&31);
si0+=si1;
l0=si0;
si0=i32_load(&i->m0,(U64)si0+8U);
l4=si0;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+4U);
si0=si0 != si1;
if(si0){
goto L13;
}
si0=l0;
si1=l4;
f1796(i,si0,si1);
si0=l0;
si0=i32_load(&i->m0,(U64)si0+8U);
l4=si0;
L13:;
si0=l0;
si1=8U;
si0+=si1;
l1=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
si1=l4;
si2=20U;
si1*=si2;
si0+=si1;
l0=si0;
si1=l6;
i32_store(&i->m0,(U64)si0,si1);
si0=50U;
l4=si0;
L7:;
si0=l0;
si1=l4;
i32_store8(&i->m0,(U64)si0+16U,si1);
si0=l0;
si1=-1U;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l0;
si1=l3;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l0;
si1=l2;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l1;
si1=l1;
si1=i32_load(&i->m0,(U64)si1);
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
goto L0;
L6:;
si0=16960789U;
si1=16U;
si2=16960808U;
f634(i,si0,si1,si2);
UNREACHABLE;
L5:;
si0=l5;
si1=l2;
si2=16960824U;
f594(i,si0,si1,si2);
UNREACHABLE;
L4:;
si0=16960789U;
si1=16U;
si2=16960808U;
f634(i,si0,si1,si2);
UNREACHABLE;
L3:;
si0=l5;
si1=l2;
si2=16960824U;
f594(i,si0,si1,si2);
UNREACHABLE;
L2:;
si0=16960789U;
si1=16U;
si2=16960808U;
f634(i,si0,si1,si2);
UNREACHABLE;
L1:;
si0=l5;
si1=l2;
si2=16960824U;
f594(i,si0,si1,si2);
UNREACHABLE;
L0:;
}

void f1758(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
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
l3=si0;
i->g0=si0;
si0=l3;
si1=12U;
si0+=si1;
si1=l2;
si2=l1;
si2=i32_load(&i->m0,(U64)si2);
f1679(i,si0,si1,si2);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+12U);
l4=si0;
si1=20U;
si0=si0 != si1;
if(si0){
goto L4;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0+24U);
l5=si0;
si0=!(si0);
if(si0){
goto L2;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0+16U);
l6=si0;
si0=!(si0);
if(si0){
goto L2;
}
si0=l6;
si1=l5;
si2=-1U;
si1+=si2;
si2=384U;
si1*=si2;
si0+=si1;
l5=si0;
si1=368U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
si1=l5;
si1=i32_load(&i->m0,(U64)si1+332U);
l6=si1;
si0=si0 <= si1;
if(si0){
goto L1;
}
si0=l2;
si1=56U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+52U);
l8=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
si0=i32_load(&i->m0,(U64)si0+8U);
l9=si0;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+360U);
si1=l6;
si2=4U;
si1<<=(si2&31);
si0+=si1;
l2=si0;
si0=i32_load(&i->m0,(U64)si0+8U);
l1=si0;
si1=l2;
si1=i32_load(&i->m0,(U64)si1+4U);
si0=si0 != si1;
if(si0){
goto L5;
}
si0=l2;
si1=l1;
f1796(i,si0,si1);
si0=l2;
si0=i32_load(&i->m0,(U64)si0+8U);
l1=si0;
L5:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0);
si1=l1;
si2=20U;
si1*=si2;
si0+=si1;
l1=si0;
si1=77U;
i32_store8(&i->m0,(U64)si0+16U,si1);
si0=l1;
si1=-1U;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l1;
si1=l9;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l1;
si1=l7;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l1;
si1=l8;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=l2;
si1=i32_load(&i->m0,(U64)si1+8U);
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0+8U,si1);
goto L3;
L4:;
si0=l0;
si1=l3;
sj1=i64_load(&i->m0,(U64)si1+16U);
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l0;
si1=28U;
si0+=si1;
si1=l3;
si2=12U;
si1+=si2;
si2=28U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=20U;
si0+=si1;
si1=l3;
si2=12U;
si1+=si2;
si2=20U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=12U;
si0+=si1;
si1=l3;
si2=12U;
si1+=si2;
si2=12U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
L3:;
si0=l0;
si1=l4;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=48U;
si0+=si1;
i->g0=si0;
goto L0;
L2:;
si0=16960789U;
si1=16U;
si2=16960808U;
f634(i,si0,si1,si2);
UNREACHABLE;
L1:;
si0=l6;
si1=l7;
si2=16960824U;
f594(i,si0,si1,si2);
UNREACHABLE;
L0:;
}

void f1759(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
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
l3=si0;
i->g0=si0;
si0=l3;
si1=12U;
si0+=si1;
si1=l2;
si2=l1;
si2=i32_load(&i->m0,(U64)si2);
f1679(i,si0,si1,si2);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+12U);
l4=si0;
si1=20U;
si0=si0 != si1;
if(si0){
goto L4;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0+24U);
l5=si0;
si0=!(si0);
if(si0){
goto L2;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0+16U);
l6=si0;
si0=!(si0);
if(si0){
goto L2;
}
si0=l6;
si1=l5;
si2=-1U;
si1+=si2;
si2=384U;
si1*=si2;
si0+=si1;
l5=si0;
si1=368U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
si1=l5;
si1=i32_load(&i->m0,(U64)si1+332U);
l6=si1;
si0=si0 <= si1;
if(si0){
goto L1;
}
si0=l2;
si1=56U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+52U);
l8=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
si0=i32_load(&i->m0,(U64)si0+8U);
l9=si0;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+360U);
si1=l6;
si2=4U;
si1<<=(si2&31);
si0+=si1;
l2=si0;
si0=i32_load(&i->m0,(U64)si0+8U);
l1=si0;
si1=l2;
si1=i32_load(&i->m0,(U64)si1+4U);
si0=si0 != si1;
if(si0){
goto L5;
}
si0=l2;
si1=l1;
f1796(i,si0,si1);
si0=l2;
si0=i32_load(&i->m0,(U64)si0+8U);
l1=si0;
L5:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0);
si1=l1;
si2=20U;
si1*=si2;
si0+=si1;
l1=si0;
si1=78U;
i32_store8(&i->m0,(U64)si0+16U,si1);
si0=l1;
si1=-1U;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l1;
si1=l9;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l1;
si1=l7;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l1;
si1=l8;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=l2;
si1=i32_load(&i->m0,(U64)si1+8U);
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0+8U,si1);
goto L3;
L4:;
si0=l0;
si1=l3;
sj1=i64_load(&i->m0,(U64)si1+16U);
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l0;
si1=28U;
si0+=si1;
si1=l3;
si2=12U;
si1+=si2;
si2=28U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=20U;
si0+=si1;
si1=l3;
si2=12U;
si1+=si2;
si2=20U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=12U;
si0+=si1;
si1=l3;
si2=12U;
si1+=si2;
si2=12U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
L3:;
si0=l0;
si1=l4;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=48U;
si0+=si1;
i->g0=si0;
goto L0;
L2:;
si0=16960789U;
si1=16U;
si2=16960808U;
f634(i,si0,si1,si2);
UNREACHABLE;
L1:;
si0=l6;
si1=l7;
si2=16960824U;
f594(i,si0,si1,si2);
UNREACHABLE;
L0:;
}

void f1760(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
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
si0=l3;
si1=12U;
si0+=si1;
si1=l2;
si2=l1;
si2=i32_load(&i->m0,(U64)si2);
f1679(i,si0,si1,si2);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+12U);
l1=si0;
si1=20U;
si0=si0 != si1;
if(si0){
goto L3;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0+24U);
l4=si0;
si0=!(si0);
if(si0){
goto L1;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0+16U);
l5=si0;
si0=!(si0);
if(si0){
goto L1;
}
si0=l4;
si1=384U;
si0*=si1;
si1=l5;
si0+=si1;
si1=-8U;
si0+=si1;
l4=si0;
si1=l4;
si1=i32_load16_u(&i->m0,(U64)si1);
si2=2U;
si1|=si2;
i32_store16(&i->m0,(U64)si0,si1);
si0=l2;
si1=53U;
f1680(i,si0,si1);
si0=l2;
si1=30U;
f1680(i,si0,si1);
goto L2;
L3:;
si0=l0;
si1=l3;
sj1=i64_load(&i->m0,(U64)si1+16U);
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l0;
si1=28U;
si0+=si1;
si1=l3;
si2=12U;
si1+=si2;
si2=28U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=20U;
si0+=si1;
si1=l3;
si2=12U;
si1+=si2;
si2=20U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=12U;
si0+=si1;
si1=l3;
si2=12U;
si1+=si2;
si2=12U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
L2:;
si0=l0;
si1=l1;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=48U;
si0+=si1;
i->g0=si0;
goto L0;
L1:;
si0=16960789U;
si1=16U;
si2=16960808U;
f634(i,si0,si1,si2);
UNREACHABLE;
L0:;
}

void f1761(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 si0,si1,si2;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+24U);
l2=si0;
si0=!(si0);
if(si0){
goto L2;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+16U);
l3=si0;
si0=!(si0);
if(si0){
goto L2;
}
si0=l3;
si1=l2;
si2=-1U;
si1+=si2;
si2=384U;
si1*=si2;
si0+=si1;
l2=si0;
si1=368U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
si1=l2;
si1=i32_load(&i->m0,(U64)si1+332U);
l3=si1;
si0=si0 <= si1;
if(si0){
goto L1;
}
si0=l0;
si1=56U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+52U);
l5=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+360U);
si1=l3;
si2=4U;
si1<<=(si2&31);
si0+=si1;
l0=si0;
si0=i32_load(&i->m0,(U64)si0+8U);
l2=si0;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+4U);
si0=si0 != si1;
if(si0){
goto L3;
}
si0=l0;
si1=l2;
f1796(i,si0,si1);
si0=l0;
si0=i32_load(&i->m0,(U64)si0+8U);
l2=si0;
L3:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
si1=l2;
si2=20U;
si1*=si2;
si0+=si1;
l2=si0;
si1=74U;
i32_store8(&i->m0,(U64)si0+16U,si1);
si0=l2;
si1=-1U;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l2;
si1=l1;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l2;
si1=l4;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l2;
si1=l5;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+8U);
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0+8U,si1);
goto L0;
L2:;
si0=16960789U;
si1=16U;
si2=16960808U;
f634(i,si0,si1,si2);
UNREACHABLE;
L1:;
si0=l3;
si1=l4;
si2=16960824U;
f594(i,si0,si1,si2);
UNREACHABLE;
L0:;
}

U32 f1762(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 si0,si1,si2,si3;
si0=i->g0;
si1=16U;
si0-=si1;
l2=si0;
i->g0=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=0U;
l0=si0;
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
si1=-18U;
si0+=si1;
switch(si0){
case 0:
goto L3;
case 1:
goto L2;
default:
goto L1;
}
L3:;
si0=l1;
si1=20U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l0=si0;
si0=l1;
si1=28U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si0=l2;
si1=l3;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l1;
si1=56U;
si0*=si1;
l1=si0;
L5:;
{
si0=l1;
l3=si0;
si0=!(si0);
if(si0){
goto L4;
}
si0=l3;
si1=-56U;
si0+=si1;
l1=si0;
si0=l2;
si1=12U;
si0+=si1;
si1=l0;
si0=f1762(i,si0,si1);
l5=si0;
si0=l0;
si1=56U;
si0+=si1;
l0=si0;
si0=l5;
if(si0){
goto L5;
}
}
L4:;
si0=l3;
si0=!(si0);
l0=si0;
goto L1;
L2:;
si0=l4;
si1=4U;
si0=si0 != si1;
if(si0){
goto L1;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
l5=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+4U);
si1=l3;
si1=i32_load(&i->m0,(U64)si1+8U);
l0=si1;
si0-=si1;
si1=l1;
si2=12U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
l1=si1;
si0=si0 >= si1;
if(si0){
goto L6;
}
si0=l3;
si1=l0;
si2=l1;
f1803(i,si0,si1,si2);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+8U);
l0=si0;
L6:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
si1=l0;
si0+=si1;
si1=l5;
si2=l1;
si0=f15143(i,si0,si1,si2);
si0=l3;
si1=l0;
si2=l1;
si1+=si2;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=1U;
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

void f1763(rustpythonInstance*i,U32 l0) {
L0:;
}

void f1764(rustpythonInstance*i,U32 l0) {
U32 si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+4U);
si0=!(si0);
if(si0){
goto L1;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
f15024(i,si0);
L1:;
L0:;
}

U32 f1765(rustpythonInstance*i,U32 l0,U32 l1) {
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
f1795(i,si0,si1);
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
f1803(i,si0,si1,si2);
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
si0=f15143(i,si0,si1,si2);
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

U32 f1766(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
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
f1803(i,si0,si1,si2);
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
si0=f15143(i,si0,si1,si2);
si0=l0;
si1=l3;
si2=l2;
si1+=si2;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=0U;
L0:;
return si0;
}

void f1767(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 l3=0;
U32 si0,si1,si2;
si0=l1;
si1=12U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
switch(si0){
case 0:
goto L7;
case 1:
goto L6;
default:
goto L5;
}
L7:;
si0=l2;
if(si0){
goto L5;
}
si0=1U;
l3=si0;
si0=0U;
l1=si0;
si0=16961276U;
l2=si0;
goto L3;
L6:;
si0=l2;
si0=!(si0);
if(si0){
goto L4;
}
L5:;
si0=l0;
si1=l1;
f64(i,si0,si1);
goto L0;
L4:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
l1=si0;
if(si0){
goto L8;
}
si0=1U;
l3=si0;
si0=0U;
l1=si0;
goto L3;
L8:;
si0=l1;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L2;
}
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=l1;
si0=f15022(i,si0);
l3=si0;
si0=!(si0);
if(si0){
goto L1;
}
L3:;
si0=l3;
si1=l2;
si2=l1;
si0=f15143(i,si0,si1,si2);
l2=si0;
si0=l0;
si1=l1;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l0;
si1=l1;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l2;
i32_store(&i->m0,(U64)si0,si1);
goto L0;
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

U32 f1768(rustpythonInstance*i,U32 l0,U32 l1) {
U32 si0,si1,si2;
si0=l1;
si1=l0;
si1=i32_load(&i->m0,(U64)si1);
si2=l0;
si2=i32_load(&i->m0,(U64)si2+8U);
si0=f642(i,si0,si1,si2);
L0:;
return si0;
}

void f1769(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 l8=0;
U32 l9=0;
U32 si0,si1,si2,si3,si4;
U64 sj1;
si0=i->g0;
si1=64U;
si0-=si1;
l3=si0;
i->g0=si0;
si0=l3;
si1=32U;
si0+=si1;
si1=24U;
si0+=si1;
l4=si0;
si1=0U;
i32_store8(&i->m0,(U64)si0,si1);
si0=l3;
si1=32U;
si0+=si1;
si1=8U;
si0+=si1;
l5=si0;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
sj1=8ULL;
i64_store(&i->m0,(U64)si0+32U,sj1);
si0=l3;
si1=32U;
si0+=si1;
si1=16961739U;
si2=3U;
si3=0U;
si4=0U;
f1770(i,si0,si1,si2,si3,si4);
si0=l3;
si1=24U;
si0+=si1;
l6=si0;
si1=l4;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=16U;
si0+=si1;
l7=si0;
si1=l3;
si2=32U;
si1+=si2;
si2=16U;
si1+=si2;
l8=si1;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=8U;
si0+=si1;
l9=si0;
si1=l5;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=l3;
sj1=i64_load(&i->m0,(U64)si1+32U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=32U;
si0+=si1;
si1=l3;
si2=l1;
si3=l2;
f1771(i,si0,si1,si2,si3);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+32U);
l2=si0;
if(si0){
goto L2;
}
si0=l4;
si1=l6;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l8;
si1=l7;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=l9;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=l3;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+32U,sj1);
si0=l0;
si1=l3;
si2=32U;
si1+=si2;
f1772(i,si0,si1);
goto L1;
L2:;
si0=l0;
si1=l3;
sj1=i64_load(&i->m0,(U64)si1+36U);
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l0;
si1=12U;
si0+=si1;
si1=l3;
si2=32U;
si1+=si2;
si2=12U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=2U;
i32_store8(&i->m0,(U64)si0+93U,si1);
si0=l0;
si1=l2;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+12U);
l0=si0;
si0=!(si0);
if(si0){
goto L3;
}
si0=l3;
si1=16U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L3;
}
si0=l0;
f15024(i,si0);
L3:;
si0=l3;
f1839(i,si0);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+4U);
si0=!(si0);
if(si0){
goto L1;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
f15024(i,si0);
L1:;
si0=l3;
si1=64U;
si0+=si1;
i->g0=si0;
L0:;
}

void f1770(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4) {
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 l8=0;
U32 l9=0;
U32 l10=0;
U32 si0,si1,si2,si3,si4;
U64 sj1;
si0=i->g0;
si1=112U;
si0-=si1;
l5=si0;
i->g0=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+8U);
l6=si0;
if(si0){
goto L2;
}
si0=0U;
l7=si0;
goto L1;
L2:;
si0=l6;
si1=96U;
si0*=si1;
si1=l0;
si1=i32_load(&i->m0,(U64)si1);
si0+=si1;
si1=-96U;
si0+=si1;
l6=si0;
si1=93U;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=0U;
si0=si0 != si1;
si1=l6;
si2=92U;
si1+=si2;
si1=i32_load8_u(&i->m0,(U64)si1);
si2=2U;
si1=si1 == si2;
si0|=si1;
l7=si0;
L1:;
si0=l2;
if(si0){
goto L6;
}
si0=1U;
l6=si0;
goto L5;
L6:;
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
L5:;
si0=l6;
si1=l1;
si2=l2;
si0=f15143(i,si0,si1,si2);
l8=si0;
si0=18657636U;
si0=f1992(i,si0);
l1=si0;
si0=i32_load(&i->m0,(U64)si0+4U);
l9=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l10=si0;
si0=0U;
si0=i32_load(&i->m0,(U64)si0+18657632U);
l1=si0;
if(si0){
goto L7;
}
si0=l5;
si1=64U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=56U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=48U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=40U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=32U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=24U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=16U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
sj1=0ULL;
i64_store(&i->m0,(U64)si0+8U,sj1);
si0=l5;
si1=8U;
si0+=si1;
si1=64U;
si0=wasi_snapshot_preview1__random_get(i,si0,si1);
l1=si0;
if(si0){
goto L9;
}
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=64U;
si0=f15022(i,si0);
l6=si0;
if(si0){
goto L8;
}
si0=8U;
si1=64U;
f52(i,si0,si1);
UNREACHABLE;
L9:;
si0=l5;
si1=l1;
i32_store(&i->m0,(U64)si0+108U,si1);
si0=16968920U;
si1=30U;
si2=l5;
si3=108U;
si2+=si3;
si3=16968952U;
si4=16969072U;
f641(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L8:;
si0=l6;
si1=l5;
sj1=i64_load(&i->m0,(U64)si1+8U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l6;
si1=56U;
si0+=si1;
si1=l5;
si2=8U;
si1+=si2;
si2=56U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l6;
si1=48U;
si0+=si1;
si1=l5;
si2=8U;
si1+=si2;
si2=48U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l6;
si1=40U;
si0+=si1;
si1=l5;
si2=8U;
si1+=si2;
si2=40U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l6;
si1=32U;
si0+=si1;
si1=l5;
si2=8U;
si1+=si2;
si2=32U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l6;
si1=24U;
si0+=si1;
si1=l5;
si2=8U;
si1+=si2;
si2=24U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l6;
si1=16U;
si0+=si1;
si1=l5;
si2=8U;
si1+=si2;
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
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=0U;
si1=0U;
si1=i32_load(&i->m0,(U64)si1+18657632U);
l1=si1;
si2=l6;
si3=l1;
si1=si3?si1:si2;
i32_store(&i->m0,(U64)si0+18657632U,si1);
si0=l1;
if(si0){
goto L10;
}
si0=l6;
l1=si0;
goto L7;
L10:;
si0=l6;
f15024(i,si0);
L7:;
si0=l5;
si1=8U;
si0+=si1;
si1=l1;
si2=l1;
si3=32U;
si2+=si3;
si3=l10;
si4=l9;
si4=i32_load(&i->m0,(U64)si4+12U);
si3=TF(i->t0,si4,U32 (*)(rustpythonInstance*,U32))(i,si3);
f37(i,si0,si1,si2,si3);
si0=l5;
si1=84U;
si0+=si1;
si1=l2;
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=80U;
si0+=si1;
si1=l2;
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=96U;
si0+=si1;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=l3;
i32_store8(&i->m0,(U64)si0+100U,si1);
si0=l5;
si1=l8;
i32_store(&i->m0,(U64)si0+76U,si1);
si0=l5;
si1=l7;
i32_store8(&i->m0,(U64)si0+101U,si1);
si0=l5;
si1=l4;
i32_store(&i->m0,(U64)si0+72U,si1);
si0=l5;
sj1=8ULL;
i64_store(&i->m0,(U64)si0+88U,sj1);
si0=l5;
sj1=0ULL;
i64_store(&i->m0,(U64)si0+60U,sj1);
si0=l5;
sj1=17179869184ULL;
i64_store(&i->m0,(U64)si0+52U,sj1);
si0=l5;
sj1=0ULL;
i64_store(&i->m0,(U64)si0+44U,sj1);
si0=l5;
si1=16961280U;
i32_store(&i->m0,(U64)si0+40U,si1);
si0=l0;
si0=i32_load(&i->m0,(U64)si0+8U);
l2=si0;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+4U);
si0=si0 != si1;
if(si0){
goto L11;
}
si0=l0;
si1=l2;
f1799(i,si0,si1);
si0=l0;
si0=i32_load(&i->m0,(U64)si0+8U);
l2=si0;
L11:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
si1=l2;
si2=96U;
si1*=si2;
si0+=si1;
si1=l5;
si2=8U;
si1+=si2;
si2=96U;
si0=f15143(i,si0,si1,si2);
si0=l0;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+8U);
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l5;
si1=112U;
si0+=si1;
i->g0=si0;
goto L0;
L4:;
f53(i);
UNREACHABLE;
L3:;
si0=1U;
si1=l2;
f52(i,si0,si1);
UNREACHABLE;
L0:;
}

void f1771(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
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
U32 si0,si1,si2,si3,si4,si5,si6,si7;
U64 sj1;
si0=i->g0;
si1=80U;
si0-=si1;
l4=si0;
i->g0=si0;
si0=l3;
si0=!(si0);
if(si0){
goto L4;
}
si0=l1;
si1=12U;
si0+=si1;
l5=si0;
si0=l2;
si1=l3;
si2=92U;
si1*=si2;
si0+=si1;
l6=si0;
L5:;
{
si0=l2;
si0=i32_load(&i->m0,(U64)si0);
switch(si0){
case 0:
goto L15;
case 1:
goto L15;
case 2:
goto L9;
case 3:
goto L28;
case 4:
goto L10;
case 5:
goto L11;
case 6:
goto L6;
case 7:
goto L17;
case 8:
goto L12;
case 9:
goto L18;
case 10:
goto L18;
case 11:
goto L19;
case 12:
goto L20;
case 13:
goto L21;
case 14:
goto L21;
case 15:
goto L29;
case 16:
goto L22;
case 17:
goto L23;
case 18:
goto L23;
case 19:
goto L24;
case 20:
goto L26;
case 21:
goto L30;
case 22:
goto L13;
case 23:
goto L14;
case 24:
goto L27;
case 25:
goto L6;
case 26:
goto L6;
case 27:
goto L6;
default:
goto L15;
}
L30:;
si0=l2;
si1=40U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=!(si0);
if(si0){
goto L31;
}
si0=l2;
si1=48U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=10U;
si0=si0 != si1;
if(si0){
goto L31;
}
si0=l3;
si1=16961812U;
si2=10U;
si0=f15142(i,si0,si1,si2);
if(si0){
goto L31;
}
si0=l2;
si1=36U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=!(si0);
if(si0){
goto L31;
}
si0=l3;
si1=40U;
si0*=si1;
l7=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+28U);
si1=24U;
si0+=si1;
l3=si0;
L32:;
{
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
si1=11U;
si0=si0 != si1;
if(si0){
goto L33;
}
si0=l3;
si1=-8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=16961822U;
si2=11U;
si0=f15142(i,si0,si1,si2);
if(si0){
goto L33;
}
si0=l1;
si1=1U;
i32_store8(&i->m0,(U64)si0+24U,si1);
L33:;
si0=l3;
si1=40U;
si0+=si1;
l3=si0;
si0=l7;
si1=-40U;
si0+=si1;
l7=si0;
if(si0){
goto L32;
}
}
L31:;
si0=l2;
si1=28U;
si0+=si1;
l3=si0;
si0=l2;
si1=12U;
si0+=si1;
l8=si0;
goto L25;
L29:;
si0=39U;
l9=si0;
si0=l4;
si1=8U;
si0+=si1;
si1=39U;
si2=0U;
f1788(i,si0,si1,si2);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+12U);
l1=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+8U);
l3=si0;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+16961862U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=31U;
si0+=si1;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+16961893U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=24U;
si0+=si1;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+16961886U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=16U;
si0+=si1;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+16961878U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=8U;
si0+=si1;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+16961870U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=44U;
si0+=si1;
si1=l2;
si2=20U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
f1653(i,si0,si1);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+48U);
l7=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+44U);
l10=si0;
goto L3;
L28:;
si0=l2;
si1=20U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
if(si0){
goto L16;
}
goto L6;
L27:;
si0=l4;
si1=44U;
si0+=si1;
si1=l1;
si2=l2;
si3=20U;
si2+=si3;
si2=i32_load(&i->m0,(U64)si2);
si3=0U;
f1774(i,si0,si1,si2,si3);
goto L8;
L26:;
si0=l2;
si1=20U;
si0+=si1;
l3=si0;
si0=l2;
si1=4U;
si0+=si1;
l8=si0;
L25:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+8U);
l7=si0;
si0=!(si0);
if(si0){
goto L6;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
l11=si0;
si1=l7;
si2=40U;
si1*=si2;
si0+=si1;
l12=si0;
L34:;
{
si0=l11;
si0=i32_load(&i->m0,(U64)si0+28U);
l3=si0;
si0=!(si0);
if(si0){
goto L36;
}
si0=l4;
si1=44U;
si0+=si1;
si1=l1;
si2=l3;
si3=l11;
si4=36U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si4=4U;
si5=l8;
si5=i32_load(&i->m0,(U64)si5);
si6=l8;
si6=i32_load(&i->m0,(U64)si6+4U);
f1780(i,si0,si1,si2,si3,si4,si5,si6);
goto L35;
L36:;
si0=0U;
l13=si0;
si0=l11;
si0=i32_load(&i->m0,(U64)si0+16U);
l14=si0;
l7=si0;
si0=l11;
si1=24U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l15=si0;
l9=si0;
L38:;
{
si0=l9;
si1=8U;
si0=si0 < si1;
if(si0){
goto L40;
}
si0=l7;
si1=3U;
si0+=si1;
si1=-4U;
si0&=si1;
l3=si0;
si1=l7;
si0=si0 == si1;
if(si0){
goto L43;
}
si0=l3;
si1=l7;
si0-=si1;
l3=si0;
si0=!(si0);
if(si0){
goto L43;
}
si0=0U;
l10=si0;
L44:;
{
si0=l7;
si1=l10;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=46U;
si0=si0 == si1;
if(si0){
goto L39;
}
si0=l3;
si1=l10;
si2=1U;
si1+=si2;
l10=si1;
si0=si0 != si1;
if(si0){
goto L44;
}
}
si0=l3;
si1=l9;
si2=-8U;
si1+=si2;
l16=si1;
si0=si0 <= si1;
if(si0){
goto L42;
}
goto L41;
L43:;
si0=l9;
si1=-8U;
si0+=si1;
l16=si0;
si0=0U;
l3=si0;
L42:;
L45:;
{
si0=l7;
si1=l3;
si0+=si1;
l17=si0;
si0=i32_load(&i->m0,(U64)si0);
l10=si0;
si1=-1U;
si0^=si1;
si1=l10;
si2=774778414U;
si1^=si2;
si2=-16843009U;
si1+=si2;
si0&=si1;
si1=-2139062144U;
si0&=si1;
if(si0){
goto L41;
}
si0=l17;
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l10=si0;
si1=-1U;
si0^=si1;
si1=l10;
si2=774778414U;
si1^=si2;
si2=-16843009U;
si1+=si2;
si0&=si1;
si1=-2139062144U;
si0&=si1;
if(si0){
goto L41;
}
si0=l3;
si1=8U;
si0+=si1;
l3=si0;
si1=l16;
si0=si0 <= si1;
if(si0){
goto L45;
}
}
L41:;
si0=l3;
si1=l9;
si0=si0 == si1;
if(si0){
goto L37;
}
L46:;
{
si0=l7;
si1=l3;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=46U;
si0=si0 != si1;
if(si0){
goto L47;
}
si0=l3;
l10=si0;
goto L39;
L47:;
si0=l9;
si1=l3;
si2=1U;
si1+=si2;
l3=si1;
si0=si0 != si1;
if(si0){
goto L46;
}
goto L37;
}
L40:;
si0=l9;
si0=!(si0);
if(si0){
goto L37;
}
si0=0U;
l10=si0;
si0=l7;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=46U;
si0=si0 == si1;
if(si0){
goto L39;
}
si0=l9;
si1=1U;
si0=si0 == si1;
if(si0){
goto L37;
}
si0=1U;
l10=si0;
si0=l7;
si0=i32_load8_u(&i->m0,(U64)si0+1U);
si1=46U;
si0=si0 == si1;
if(si0){
goto L39;
}
si0=l9;
si1=2U;
si0=si0 == si1;
if(si0){
goto L37;
}
si0=2U;
l10=si0;
si0=l7;
si0=i32_load8_u(&i->m0,(U64)si0+2U);
si1=46U;
si0=si0 == si1;
if(si0){
goto L39;
}
si0=l9;
si1=3U;
si0=si0 == si1;
if(si0){
goto L37;
}
si0=3U;
l10=si0;
si0=l7;
si0=i32_load8_u(&i->m0,(U64)si0+3U);
si1=46U;
si0=si0 == si1;
if(si0){
goto L39;
}
si0=l9;
si1=4U;
si0=si0 == si1;
if(si0){
goto L37;
}
si0=4U;
l10=si0;
si0=l7;
si0=i32_load8_u(&i->m0,(U64)si0+4U);
si1=46U;
si0=si0 == si1;
if(si0){
goto L39;
}
si0=l9;
si1=5U;
si0=si0 == si1;
if(si0){
goto L37;
}
si0=5U;
l10=si0;
si0=l7;
si0=i32_load8_u(&i->m0,(U64)si0+5U);
si1=46U;
si0=si0 == si1;
if(si0){
goto L39;
}
si0=l9;
si1=6U;
si0=si0 == si1;
if(si0){
goto L37;
}
si0=6U;
l10=si0;
si0=l7;
si0=i32_load8_u(&i->m0,(U64)si0+6U);
si1=46U;
si0=si0 != si1;
if(si0){
goto L37;
}
L39:;
si0=l10;
si1=l13;
si0+=si1;
l3=si0;
si1=l15;
si0=si0 >= si1;
if(si0){
goto L48;
}
si0=l14;
si1=l3;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=46U;
si0=si0 != si1;
if(si0){
goto L48;
}
si0=l3;
l15=si0;
goto L37;
L48:;
si0=l14;
si1=l3;
si2=1U;
si1+=si2;
l13=si1;
si0+=si1;
l7=si0;
si0=l15;
si1=l13;
si0-=si1;
l9=si0;
si0=l15;
si1=l13;
si0=si0 >= si1;
if(si0){
goto L38;
}
}
L37:;
si0=l4;
si1=44U;
si0+=si1;
si1=l1;
si2=l14;
si3=l15;
si4=4U;
si5=l8;
si5=i32_load(&i->m0,(U64)si5);
si6=l8;
si6=i32_load(&i->m0,(U64)si6+4U);
f1780(i,si0,si1,si2,si3,si4,si5,si6);
L35:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+44U);
l3=si0;
if(si0){
goto L7;
}
si0=l11;
si1=40U;
si0+=si1;
l11=si0;
si1=l12;
si0=si0 != si1;
if(si0){
goto L34;
}
goto L6;
}
L24:;
si0=l4;
si1=44U;
si0+=si1;
si1=l1;
si2=l2;
si3=20U;
si2+=si3;
si2=i32_load(&i->m0,(U64)si2);
si3=0U;
f1774(i,si0,si1,si2,si3);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+44U);
l3=si0;
if(si0){
goto L7;
}
si0=l2;
si1=24U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=!(si0);
if(si0){
goto L6;
}
si0=l4;
si1=44U;
si0+=si1;
si1=l1;
si2=l3;
si3=0U;
f1774(i,si0,si1,si2,si3);
goto L8;
L23:;
si0=l4;
si1=44U;
si0+=si1;
si1=l1;
si2=l2;
si3=20U;
si2+=si3;
si2=i32_load(&i->m0,(U64)si2);
si3=l2;
si4=28U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
f1771(i,si0,si1,si2,si3);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+44U);
l3=si0;
if(si0){
goto L7;
}
si0=l2;
si1=40U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=!(si0);
if(si0){
goto L49;
}
si0=l3;
si1=44U;
si0*=si1;
l10=si0;
si0=l2;
si1=32U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=24U;
si0+=si1;
l7=si0;
L50:;
{
si0=l7;
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=!(si0);
if(si0){
goto L51;
}
si0=l4;
si1=44U;
si0+=si1;
si1=l1;
si2=l3;
si3=0U;
f1774(i,si0,si1,si2,si3);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+44U);
l3=si0;
if(si0){
goto L7;
}
L51:;
si0=l7;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=!(si0);
if(si0){
goto L52;
}
si0=l4;
si1=44U;
si0+=si1;
si1=l1;
si2=l3;
si3=l7;
si4=16U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si4=3U;
si5=l2;
si5=i32_load(&i->m0,(U64)si5+4U);
si6=l2;
si6=i32_load(&i->m0,(U64)si6+8U);
f1780(i,si0,si1,si2,si3,si4,si5,si6);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+44U);
l3=si0;
if(si0){
goto L7;
}
L52:;
si0=l4;
si1=44U;
si0+=si1;
si1=l1;
si2=l7;
si3=-8U;
si2+=si3;
si2=i32_load(&i->m0,(U64)si2);
si3=l7;
si3=i32_load(&i->m0,(U64)si3);
f1771(i,si0,si1,si2,si3);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+44U);
l3=si0;
if(si0){
goto L7;
}
si0=l7;
si1=44U;
si0+=si1;
l7=si0;
si0=l10;
si1=-44U;
si0+=si1;
l10=si0;
if(si0){
goto L50;
}
}
L49:;
si0=l4;
si1=44U;
si0+=si1;
si1=l1;
si2=l2;
si2=i32_load(&i->m0,(U64)si2+44U);
si3=l2;
si4=52U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
f1771(i,si0,si1,si2,si3);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+44U);
l3=si0;
if(si0){
goto L7;
}
si0=l4;
si1=44U;
si0+=si1;
si1=l1;
si2=l2;
si2=i32_load(&i->m0,(U64)si2+56U);
si3=l2;
si4=64U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
f1771(i,si0,si1,si2,si3);
goto L8;
L22:;
si0=l2;
si1=20U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=!(si0);
if(si0){
goto L53;
}
si0=l4;
si1=44U;
si0+=si1;
si1=l1;
si2=l3;
si3=0U;
f1774(i,si0,si1,si2,si3);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+44U);
l3=si0;
if(si0){
goto L7;
}
L53:;
si0=l2;
si1=24U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=!(si0);
if(si0){
goto L6;
}
si0=l4;
si1=44U;
si0+=si1;
si1=l1;
si2=l3;
si3=0U;
f1774(i,si0,si1,si2,si3);
goto L8;
L21:;
si0=l2;
si1=28U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=!(si0);
if(si0){
goto L54;
}
si0=l2;
si1=20U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
si1=l3;
si2=6U;
si1<<=(si2&31);
si0+=si1;
l10=si0;
L55:;
{
si0=l4;
si1=44U;
si0+=si1;
si1=l1;
si2=l7;
si3=0U;
f1774(i,si0,si1,si2,si3);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+44U);
l3=si0;
if(si0){
goto L7;
}
si0=l7;
si1=56U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=!(si0);
if(si0){
goto L56;
}
si0=l4;
si1=44U;
si0+=si1;
si1=l1;
si2=l3;
si3=1U;
f1774(i,si0,si1,si2,si3);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+44U);
l3=si0;
if(si0){
goto L7;
}
L56:;
si0=l7;
si1=64U;
si0+=si1;
l7=si0;
si1=l10;
si0=si0 != si1;
if(si0){
goto L55;
}
}
L54:;
si0=l4;
si1=44U;
si0+=si1;
si1=l1;
si2=l2;
si2=i32_load(&i->m0,(U64)si2+32U);
si3=l2;
si4=40U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
f1771(i,si0,si1,si2,si3);
goto L8;
L20:;
si0=l4;
si1=44U;
si0+=si1;
si1=l1;
si2=l2;
si3=20U;
si2+=si3;
si2=i32_load(&i->m0,(U64)si2);
si3=0U;
f1774(i,si0,si1,si2,si3);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+44U);
l3=si0;
if(si0){
goto L7;
}
si0=l4;
si1=44U;
si0+=si1;
si1=l1;
si2=l2;
si3=24U;
si2+=si3;
si2=i32_load(&i->m0,(U64)si2);
si3=l2;
si4=32U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
f1771(i,si0,si1,si2,si3);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+44U);
l3=si0;
if(si0){
goto L7;
}
si0=l4;
si1=44U;
si0+=si1;
si1=l1;
si2=l2;
si3=36U;
si2+=si3;
si2=i32_load(&i->m0,(U64)si2);
si3=l2;
si4=44U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
f1771(i,si0,si1,si2,si3);
goto L8;
L19:;
si0=l4;
si1=44U;
si0+=si1;
si1=l1;
si2=l2;
si3=20U;
si2+=si3;
si2=i32_load(&i->m0,(U64)si2);
si3=0U;
f1774(i,si0,si1,si2,si3);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+44U);
l3=si0;
if(si0){
goto L7;
}
si0=l4;
si1=44U;
si0+=si1;
si1=l1;
si2=l2;
si3=24U;
si2+=si3;
si2=i32_load(&i->m0,(U64)si2);
si3=l2;
si4=32U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
f1771(i,si0,si1,si2,si3);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+44U);
l3=si0;
if(si0){
goto L7;
}
si0=l4;
si1=44U;
si0+=si1;
si1=l1;
si2=l2;
si3=36U;
si2+=si3;
si2=i32_load(&i->m0,(U64)si2);
si3=l2;
si4=44U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
f1771(i,si0,si1,si2,si3);
goto L8;
L18:;
si0=l4;
si1=44U;
si0+=si1;
si1=l1;
si2=l2;
si3=20U;
si2+=si3;
si2=i32_load(&i->m0,(U64)si2);
si3=1U;
f1774(i,si0,si1,si2,si3);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+44U);
l3=si0;
if(si0){
goto L7;
}
si0=l4;
si1=44U;
si0+=si1;
si1=l1;
si2=l2;
si3=24U;
si2+=si3;
si2=i32_load(&i->m0,(U64)si2);
si3=0U;
f1774(i,si0,si1,si2,si3);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+44U);
l3=si0;
if(si0){
goto L7;
}
si0=l4;
si1=44U;
si0+=si1;
si1=l1;
si2=l2;
si2=i32_load(&i->m0,(U64)si2+28U);
si3=l2;
si4=36U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
f1771(i,si0,si1,si2,si3);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+44U);
l3=si0;
if(si0){
goto L7;
}
si0=l4;
si1=44U;
si0+=si1;
si1=l1;
si2=l2;
si2=i32_load(&i->m0,(U64)si2+40U);
si3=l2;
si4=48U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
f1771(i,si0,si1,si2,si3);
goto L8;
L17:;
si0=l4;
si1=44U;
si0+=si1;
si1=l1;
si2=l2;
si3=20U;
si2+=si3;
si2=i32_load(&i->m0,(U64)si2);
si3=1U;
f1774(i,si0,si1,si2,si3);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+44U);
l3=si0;
if(si0){
goto L7;
}
si0=l4;
si1=44U;
si0+=si1;
si1=l1;
si2=l2;
si3=24U;
si2+=si3;
si2=i32_load(&i->m0,(U64)si2);
si3=0U;
f1774(i,si0,si1,si2,si3);
goto L8;
L16:;
si0=l4;
si1=44U;
si0+=si1;
si1=l1;
si2=l3;
si3=0U;
f1774(i,si0,si1,si2,si3);
goto L8;
L15:;
si0=l2;
si1=56U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=!(si0);
if(si0){
goto L57;
}
si0=l2;
si1=48U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
si0=l3;
si1=56U;
si0*=si1;
l10=si0;
L58:;
{
si0=l4;
si1=44U;
si0+=si1;
si1=l1;
si2=l7;
si3=0U;
f1774(i,si0,si1,si2,si3);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+44U);
l3=si0;
if(si0){
goto L7;
}
si0=l7;
si1=56U;
si0+=si1;
l7=si0;
si0=l10;
si1=-56U;
si0+=si1;
l10=si0;
if(si0){
goto L58;
}
}
L57:;
si0=l4;
si1=44U;
si0+=si1;
si1=l1;
si2=l2;
si2=i32_load(&i->m0,(U64)si2+20U);
l7=si2;
si3=l2;
si4=28U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
l10=si3;
si4=3U;
si5=l2;
si5=i32_load(&i->m0,(U64)si5+4U);
l9=si5;
si6=l2;
si7=8U;
si6+=si7;
si6=i32_load(&i->m0,(U64)si6);
f1780(i,si0,si1,si2,si3,si4,si5,si6);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+44U);
l3=si0;
if(si0){
goto L7;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0+72U);
l3=si0;
si0=!(si0);
if(si0){
goto L59;
}
si0=l1;
si0=i32_load8_u(&i->m0,(U64)si0+24U);
if(si0){
goto L59;
}
si0=l4;
si1=44U;
si0+=si1;
si1=l1;
si2=l3;
si3=0U;
f1774(i,si0,si1,si2,si3);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+44U);
l3=si0;
if(si0){
goto L7;
}
L59:;
si0=l4;
si1=44U;
si0+=si1;
si1=l1;
si2=l7;
si3=l10;
si4=l2;
si4=i32_load(&i->m0,(U64)si4+32U);
si5=l9;
f1781(i,si0,si1,si2,si3,si4,si5);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+44U);
l3=si0;
if(si0){
goto L7;
}
si0=l4;
si1=44U;
si0+=si1;
si1=l1;
si2=l2;
si2=i32_load(&i->m0,(U64)si2+36U);
si3=l2;
si4=44U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
f1771(i,si0,si1,si2,si3);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+44U);
l3=si0;
if(si0){
goto L7;
}
si0=l1;
f1779(i,si0);
goto L6;
L14:;
si0=l2;
si1=28U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=!(si0);
if(si0){
goto L6;
}
si0=l2;
si1=20U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
si1=l3;
si2=12U;
si1*=si2;
si0+=si1;
l17=si0;
si0=l2;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l10=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+4U);
l9=si0;
L60:;
{
si0=l4;
si1=44U;
si0+=si1;
si1=l1;
si2=l7;
si2=i32_load(&i->m0,(U64)si2);
si3=l7;
si4=8U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si4=1U;
si5=l9;
si6=l10;
f1780(i,si0,si1,si2,si3,si4,si5,si6);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+44U);
l3=si0;
if(si0){
goto L7;
}
si0=l7;
si1=12U;
si0+=si1;
l7=si0;
si1=l17;
si0=si0 != si1;
if(si0){
goto L60;
}
goto L6;
}
L13:;
si0=l2;
si1=28U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=!(si0);
if(si0){
goto L6;
}
si0=l2;
si1=20U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
si1=l3;
si2=12U;
si1*=si2;
si0+=si1;
l17=si0;
si0=l2;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l10=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+4U);
l9=si0;
L61:;
{
si0=l4;
si1=44U;
si0+=si1;
si1=l1;
si2=l7;
si2=i32_load(&i->m0,(U64)si2);
si3=l7;
si4=8U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si4=0U;
si5=l9;
si6=l10;
f1780(i,si0,si1,si2,si3,si4,si5,si6);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+44U);
l3=si0;
if(si0){
goto L7;
}
si0=l7;
si1=12U;
si0+=si1;
l7=si0;
si1=l17;
si0=si0 != si1;
if(si0){
goto L61;
}
goto L6;
}
L12:;
si0=l2;
si1=20U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=i32_load(&i->m0,(U64)si0);
si1=34U;
si0=si0 != si1;
if(si0){
goto L64;
}
si0=l2;
si1=32U;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=255U;
si0&=si1;
if(si0){
goto L63;
}
L64:;
si0=l4;
si1=44U;
si0+=si1;
si1=l1;
si2=l3;
si3=1U;
f1774(i,si0,si1,si2,si3);
goto L62;
L63:;
si0=l4;
si1=44U;
si0+=si1;
si1=l1;
si2=l3;
si3=20U;
si2+=si3;
si2=i32_load(&i->m0,(U64)si2);
si3=l3;
si4=28U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si4=5U;
si5=l2;
si5=i32_load(&i->m0,(U64)si5+4U);
si6=l2;
si7=8U;
si6+=si7;
si6=i32_load(&i->m0,(U64)si6);
f1780(i,si0,si1,si2,si3,si4,si5,si6);
L62:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+44U);
l3=si0;
if(si0){
goto L7;
}
si0=l1;
si0=i32_load8_u(&i->m0,(U64)si0+24U);
if(si0){
goto L65;
}
si0=l4;
si1=44U;
si0+=si1;
si1=l1;
si2=l2;
si3=24U;
si2+=si3;
si2=i32_load(&i->m0,(U64)si2);
si3=0U;
f1774(i,si0,si1,si2,si3);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+44U);
l3=si0;
if(si0){
goto L7;
}
L65:;
si0=l2;
si1=28U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=!(si0);
if(si0){
goto L6;
}
si0=l4;
si1=44U;
si0+=si1;
si1=l1;
si2=l3;
si3=0U;
f1774(i,si0,si1,si2,si3);
goto L8;
L11:;
si0=l2;
si1=28U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=!(si0);
if(si0){
goto L66;
}
si0=l2;
si1=20U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
si0=l3;
si1=56U;
si0*=si1;
l10=si0;
L67:;
{
si0=l4;
si1=44U;
si0+=si1;
si1=l1;
si2=l7;
si3=1U;
f1774(i,si0,si1,si2,si3);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+44U);
l3=si0;
if(si0){
goto L7;
}
si0=l7;
si1=56U;
si0+=si1;
l7=si0;
si0=l10;
si1=-56U;
si0+=si1;
l10=si0;
if(si0){
goto L67;
}
}
L66:;
si0=l4;
si1=44U;
si0+=si1;
si1=l1;
si2=l2;
si3=32U;
si2+=si3;
si2=i32_load(&i->m0,(U64)si2);
si3=0U;
f1774(i,si0,si1,si2,si3);
goto L8;
L10:;
si0=l2;
si1=28U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=!(si0);
if(si0){
goto L6;
}
si0=l2;
si1=20U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
si0=l3;
si1=56U;
si0*=si1;
l10=si0;
L68:;
{
si0=l4;
si1=44U;
si0+=si1;
si1=l1;
si2=l7;
si3=2U;
f1774(i,si0,si1,si2,si3);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+44U);
l3=si0;
if(si0){
goto L7;
}
si0=l7;
si1=56U;
si0+=si1;
l7=si0;
si0=l10;
si1=-56U;
si0+=si1;
l10=si0;
if(si0){
goto L68;
}
goto L6;
}
L9:;
si0=l1;
si1=l2;
si2=20U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
l16=si1;
si2=l2;
si3=28U;
si2+=si3;
si2=i32_load(&i->m0,(U64)si2);
l13=si2;
si3=1U;
si4=l2;
si4=i32_load(&i->m0,(U64)si4+4U);
l9=si4;
f1770(i,si0,si1,si2,si3,si4);
si0=l4;
si1=0U;
i32_store(&i->m0,(U64)si0+40U,si1);
si0=l4;
sj1=1ULL;
i64_store(&i->m0,(U64)si0+32U,sj1);
si0=l4;
si1=3U;
i32_store8(&i->m0,(U64)si0+76U,si1);
si0=l4;
si1=32U;
i32_store(&i->m0,(U64)si0+60U,si1);
si0=l4;
si1=0U;
i32_store(&i->m0,(U64)si0+72U,si1);
si0=l4;
si1=16961088U;
i32_store(&i->m0,(U64)si0+68U,si1);
si0=l4;
si1=0U;
i32_store(&i->m0,(U64)si0+52U,si1);
si0=l4;
si1=0U;
i32_store(&i->m0,(U64)si0+44U,si1);
si0=l4;
si1=l4;
si2=32U;
si1+=si2;
i32_store(&i->m0,(U64)si0+64U,si1);
si0=l4;
si1=44U;
si0+=si1;
si1=l16;
si2=l13;
si0=f642(i,si0,si1,si2);
if(si0){
goto L2;
}
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
l18=sj1;
i64_store(&i->m0,(U64)si0+16U,sj1);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+16U);
l15=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+12U);
l11=si0;
si0=l5;
sj1=l18;
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+20U);
l7=si0;
si0=l5;
si1=8U;
si0+=si1;
si1=l3;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=44U;
si0+=si1;
si1=l1;
si2=16961833U;
si3=10U;
si4=3U;
si5=l9;
si6=l2;
si7=8U;
si6+=si7;
si6=i32_load(&i->m0,(U64)si6);
l17=si6;
f1780(i,si0,si1,si2,si3,si4,si5,si6);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+44U);
l3=si0;
if(si0){
goto L69;
}
si0=l4;
si1=44U;
si0+=si1;
si1=l1;
si2=16961843U;
si3=12U;
si4=3U;
si5=l9;
si6=l17;
f1780(i,si0,si1,si2,si3,si4,si5,si6);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+44U);
l3=si0;
if(si0){
goto L69;
}
si0=l4;
si1=44U;
si0+=si1;
si1=l1;
si2=16961855U;
si3=7U;
si4=3U;
si5=l9;
si6=l17;
f1780(i,si0,si1,si2,si3,si4,si5,si6);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+44U);
l3=si0;
if(si0){
goto L69;
}
si0=l4;
si1=44U;
si0+=si1;
si1=l1;
si2=16961480U;
si3=9U;
si4=3U;
si5=l9;
si6=l17;
f1780(i,si0,si1,si2,si3,si4,si5,si6);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+44U);
l3=si0;
if(si0){
goto L69;
}
si0=l4;
si1=44U;
si0+=si1;
si1=l1;
si2=l2;
si3=56U;
si2+=si3;
si2=i32_load(&i->m0,(U64)si2);
si3=l2;
si4=64U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
f1771(i,si0,si1,si2,si3);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+44U);
l3=si0;
if(si0){
goto L69;
}
si0=l1;
f1779(i,si0);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+12U);
l3=si0;
si0=!(si0);
if(si0){
goto L70;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+16U);
si0=!(si0);
if(si0){
goto L70;
}
si0=l3;
f15024(i,si0);
L70:;
si0=l1;
si1=l7;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l1;
si1=l15;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l1;
si1=l11;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l2;
si1=40U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=!(si0);
if(si0){
goto L71;
}
si0=l2;
si1=32U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
si0=l3;
si1=56U;
si0*=si1;
l10=si0;
L72:;
{
si0=l4;
si1=44U;
si0+=si1;
si1=l1;
si2=l7;
si3=0U;
f1774(i,si0,si1,si2,si3);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+44U);
l3=si0;
if(si0){
goto L7;
}
si0=l7;
si1=56U;
si0+=si1;
l7=si0;
si0=l10;
si1=-56U;
si0+=si1;
l10=si0;
if(si0){
goto L72;
}
}
L71:;
si0=l2;
si1=52U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=!(si0);
if(si0){
goto L73;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0+44U);
l7=si0;
si0=l3;
si1=88U;
si0*=si1;
l10=si0;
L74:;
{
si0=l4;
si1=44U;
si0+=si1;
si1=l1;
si2=l7;
si3=0U;
f1774(i,si0,si1,si2,si3);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+44U);
l3=si0;
if(si0){
goto L7;
}
si0=l7;
si1=88U;
si0+=si1;
l7=si0;
si0=l10;
si1=-88U;
si0+=si1;
l10=si0;
if(si0){
goto L74;
}
}
L73:;
si0=l2;
si1=76U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=!(si0);
if(si0){
goto L75;
}
si0=l2;
si1=68U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
si0=l3;
si1=56U;
si0*=si1;
l10=si0;
L76:;
{
si0=l4;
si1=44U;
si0+=si1;
si1=l1;
si2=l7;
si3=0U;
f1774(i,si0,si1,si2,si3);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+44U);
l3=si0;
if(si0){
goto L7;
}
si0=l7;
si1=56U;
si0+=si1;
l7=si0;
si0=l10;
si1=-56U;
si0+=si1;
l10=si0;
if(si0){
goto L76;
}
}
L75:;
si0=l4;
si1=44U;
si0+=si1;
si1=l1;
si2=l16;
si3=l13;
si4=3U;
si5=l9;
si6=l17;
f1780(i,si0,si1,si2,si3,si4,si5,si6);
goto L8;
L69:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+60U);
l7=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+56U);
l10=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+52U);
l9=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+48U);
l1=si0;
si0=l11;
si0=!(si0);
if(si0){
goto L3;
}
si0=l15;
si0=!(si0);
if(si0){
goto L3;
}
si0=l11;
f15024(i,si0);
goto L3;
L8:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+44U);
l3=si0;
si0=!(si0);
if(si0){
goto L6;
}
L7:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+60U);
l7=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+56U);
l10=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+52U);
l9=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+48U);
l1=si0;
goto L3;
L6:;
si0=l2;
si1=92U;
si0+=si1;
l2=si0;
si1=l6;
si0=si0 != si1;
if(si0){
goto L5;
}
}
L4:;
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
goto L1;
L3:;
si0=l0;
si1=l7;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l0;
si1=l10;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l0;
si1=l9;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l0;
si1=l1;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l3;
i32_store(&i->m0,(U64)si0,si1);
goto L1;
L2:;
si0=16961112U;
si1=55U;
si2=l4;
si3=16U;
si2+=si3;
si3=16961168U;
si4=16961260U;
f641(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L1:;
si0=l4;
si1=80U;
si0+=si1;
i->g0=si0;
L0:;
}

void f1772(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 si0,si1,si2,si3,si4;
U64 sj1;
si0=i->g0;
si1=128U;
si0-=si1;
l2=si0;
i->g0=si0;
si0=l2;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+8U);
l3=si1;
i32_store(&i->m0,(U64)si0+96U,si1);
si0=l3;
si1=1U;
si0=si0 != si1;
if(si0){
goto L2;
}
si0=l1;
si1=0U;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
si0=i32_load8_u(&i->m0,(U64)si0+93U);
l5=si0;
si1=2U;
si0=si0 == si1;
if(si0){
goto L1;
}
si0=l4;
si0=i32_load16_u(&i->m0,(U64)si0+94U);
l6=si0;
si0=l2;
si1=l4;
si2=93U;
si0=f15143(i,si0,si1,si2);
l3=si0;
si1=l6;
i32_store16(&i->m0,(U64)si0+94U,si1);
si0=l3;
si1=l5;
i32_store8(&i->m0,(U64)si0+93U,si1);
si0=l3;
si1=0U;
i32_store(&i->m0,(U64)si0+124U,si1);
si0=l3;
sj1=4ULL;
i64_store(&i->m0,(U64)si0+116U,sj1);
si0=l3;
si1=96U;
si0+=si1;
si1=l3;
si2=116U;
si1+=si2;
si2=l3;
f1776(i,si0,si1,si2);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+120U);
si0=!(si0);
if(si0){
goto L3;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0+116U);
f15024(i,si0);
L3:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+96U);
l2=si0;
if(si0){
goto L5;
}
si0=l0;
si1=l3;
si2=96U;
si0=f15143(i,si0,si1,si2);
goto L4;
L5:;
si0=l0;
si1=l3;
sj1=i64_load(&i->m0,(U64)si1+100U);
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l0;
si1=12U;
si0+=si1;
si1=l3;
si2=96U;
si1+=si2;
si2=12U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=2U;
i32_store8(&i->m0,(U64)si0+93U,si1);
si0=l0;
si1=l2;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=72U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L6;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0+68U);
f15024(i,si0);
L6:;
si0=l3;
si1=36U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l0=si0;
si0=!(si0);
if(si0){
goto L7;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0+32U);
si1=l0;
si2=2U;
si1<<=(si2&31);
si2=11U;
si1+=si2;
si2=-8U;
si1&=si2;
si0-=si1;
f15024(i,si0);
L7:;
si0=l3;
si1=48U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si0=l3;
si1=56U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si0=!(si0);
if(si0){
goto L8;
}
si0=l5;
si1=16U;
si0+=si1;
l0=si0;
L9:;
{
si0=l0;
si1=-8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L10;
}
si0=l0;
si1=-12U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
f15024(i,si0);
L10:;
si0=l0;
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L11;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
f15024(i,si0);
L11:;
si0=l0;
si1=32U;
si0+=si1;
l0=si0;
si0=l2;
si1=-1U;
si0+=si1;
l2=si0;
if(si0){
goto L9;
}
}
L8:;
si0=l3;
si1=52U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L12;
}
si0=l5;
f15024(i,si0);
L12:;
si0=l3;
si1=80U;
si0+=si1;
f1839(i,si0);
si0=l3;
si1=84U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L4;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0+80U);
f15024(i,si0);
L4:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+12U);
l0=si0;
si0=!(si0);
if(si0){
goto L13;
}
si0=l1;
si1=16U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L13;
}
si0=l0;
f15024(i,si0);
L13:;
si0=l1;
f1839(i,si0);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
si0=!(si0);
if(si0){
goto L14;
}
si0=l4;
f15024(i,si0);
L14:;
si0=l3;
si1=128U;
si0+=si1;
i->g0=si0;
goto L0;
L2:;
si0=l2;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=0U;
si1=l2;
si2=96U;
si1+=si2;
si2=16961744U;
si3=l2;
si4=16961764U;
f1984(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L1:;
si0=16961489U;
si1=43U;
si2=16961748U;
f604(i,si0,si1,si2);
UNREACHABLE;
L0:;
}

void f1773(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
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
l2=si0;
i->g0=si0;
si0=l2;
si1=32U;
si0+=si1;
si1=24U;
si0+=si1;
l3=si0;
si1=0U;
i32_store8(&i->m0,(U64)si0,si1);
si0=l2;
si1=32U;
si0+=si1;
si1=8U;
si0+=si1;
l4=si0;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
sj1=8ULL;
i64_store(&i->m0,(U64)si0+32U,sj1);
si0=l2;
si1=32U;
si0+=si1;
si1=16961739U;
si2=3U;
si3=0U;
si4=0U;
f1770(i,si0,si1,si2,si3,si4);
si0=l2;
si1=24U;
si0+=si1;
l5=si0;
si1=l3;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=16U;
si0+=si1;
l6=si0;
si1=l2;
si2=32U;
si1+=si2;
si2=16U;
si1+=si2;
l7=si1;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=8U;
si0+=si1;
l8=si0;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=l2;
sj1=i64_load(&i->m0,(U64)si1+32U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=32U;
si0+=si1;
si1=l2;
si2=l1;
si3=0U;
f1774(i,si0,si1,si2,si3);
si0=l2;
si0=i32_load(&i->m0,(U64)si0+32U);
l1=si0;
if(si0){
goto L2;
}
si0=l3;
si1=l5;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l7;
si1=l6;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=l8;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=l2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+32U,sj1);
si0=l0;
si1=l2;
si2=32U;
si1+=si2;
f1772(i,si0,si1);
goto L1;
L2:;
si0=l0;
si1=l2;
sj1=i64_load(&i->m0,(U64)si1+36U);
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l0;
si1=12U;
si0+=si1;
si1=l2;
si2=32U;
si1+=si2;
si2=12U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=2U;
i32_store8(&i->m0,(U64)si0+93U,si1);
si0=l0;
si1=l1;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si0=i32_load(&i->m0,(U64)si0+12U);
l0=si0;
si0=!(si0);
if(si0){
goto L3;
}
si0=l2;
si1=16U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L3;
}
si0=l0;
f15024(i,si0);
L3:;
si0=l2;
f1839(i,si0);
si0=l2;
si0=i32_load(&i->m0,(U64)si0+4U);
si0=!(si0);
if(si0){
goto L1;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0);
f15024(i,si0);
L1:;
si0=l2;
si1=64U;
si0+=si1;
i->g0=si0;
L0:;
}

void f1774(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 l8=0;
U32 si0,si1,si2,si3,si4,si5,si6,si7,si8;
U64 sj1;
si0=i->g0;
si1=48U;
si0-=si1;
l4=si0;
i->g0=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0);
si1=-11U;
si0+=si1;
l5=si0;
si1=19U;
si2=l5;
si3=27U;
si2=si2 < si3;
si0=si2?si0:si1;
switch(si0){
case 0:
goto L46;
case 1:
goto L38;
case 2:
goto L37;
case 3:
goto L36;
case 4:
goto L35;
case 5:
goto L34;
case 6:
goto L45;
case 7:
goto L31;
case 8:
goto L29;
case 9:
goto L28;
case 10:
goto L27;
case 11:
goto L26;
case 12:
goto L25;
case 13:
goto L43;
case 14:
goto L23;
case 15:
goto L22;
case 16:
goto L21;
case 17:
goto L20;
case 18:
goto L44;
case 19:
goto L2;
case 20:
goto L18;
case 21:
goto L17;
case 22:
goto L16;
case 23:
goto L42;
case 24:
goto L41;
case 25:
goto L40;
case 26:
goto L10;
default:
goto L46;
}
L46:;
si0=l2;
si1=28U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si0=!(si0);
if(si0){
goto L2;
}
si0=l2;
si1=20U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si0=l5;
si1=56U;
si0*=si1;
l5=si0;
L47:;
{
si0=l4;
si1=28U;
si0+=si1;
si1=l1;
si2=l2;
si3=l3;
f1774(i,si0,si1,si2,si3);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+28U);
l6=si0;
if(si0){
goto L39;
}
si0=l2;
si1=56U;
si0+=si1;
l2=si0;
si0=l5;
si1=-56U;
si0+=si1;
l5=si0;
if(si0){
goto L47;
}
goto L2;
}
L45:;
si0=l2;
si1=28U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si1=l2;
si2=40U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
l6=si1;
si2=l5;
si3=l6;
si2=si2 < si3;
si0=si2?si0:si1;
l6=si0;
si0=!(si0);
if(si0){
goto L2;
}
si0=l2;
si1=32U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si0=l2;
si1=20U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
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
si0=l4;
si1=28U;
si0+=si1;
si1=l1;
si2=l2;
si3=l3;
f1774(i,si0,si1,si2,si3);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+28U);
l7=si0;
if(si0){
goto L33;
}
L49:;
si0=l4;
si1=28U;
si0+=si1;
si1=l1;
si2=l5;
si3=l3;
f1774(i,si0,si1,si2,si3);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+28U);
l7=si0;
if(si0){
goto L32;
}
si0=l2;
si1=56U;
si0+=si1;
l2=si0;
si0=l5;
si1=56U;
si0+=si1;
l5=si0;
si0=l6;
si1=-1U;
si0+=si1;
l6=si0;
if(si0){
goto L48;
}
goto L2;
}
L44:;
si0=l2;
si1=28U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=!(si0);
if(si0){
goto L2;
}
si0=l2;
si1=20U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si0=l3;
si1=56U;
si0*=si1;
l3=si0;
L50:;
{
si0=l4;
si1=28U;
si0+=si1;
si1=l1;
si2=l2;
si3=0U;
f1774(i,si0,si1,si2,si3);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+28U);
l5=si0;
if(si0){
goto L19;
}
si0=l2;
si1=56U;
si0+=si1;
l2=si0;
si0=l3;
si1=-56U;
si0+=si1;
l3=si0;
if(si0){
goto L50;
}
goto L2;
}
L43:;
si0=l2;
si1=20U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
if(si0){
goto L24;
}
goto L2;
L42:;
si0=l2;
si1=28U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si0=l2;
si1=20U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si0=l3;
si1=255U;
si0&=si1;
switch(si0){
case 0:
goto L12;
case 1:
goto L15;
case 2:
goto L14;
case 3:
goto L13;
case 4:
goto L12;
default:
goto L12;
}
L41:;
si0=l2;
si1=20U;
si0+=si1;
l5=si0;
goto L30;
L40:;
si0=l2;
si1=20U;
si0+=si1;
l5=si0;
goto L30;
L39:;
si0=l0;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1+32U);
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l0;
si1=12U;
si0+=si1;
si1=l4;
si2=28U;
si1+=si2;
si2=12U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=l6;
i32_store(&i->m0,(U64)si0,si1);
goto L1;
L38:;
si0=l3;
si1=255U;
si0&=si1;
si1=4U;
si0=si0 == si1;
if(si0){
goto L3;
}
si0=l4;
si1=28U;
si0+=si1;
si1=l1;
si2=l2;
si3=24U;
si2+=si3;
si2=i32_load(&i->m0,(U64)si2);
si3=0U;
f1774(i,si0,si1,si2,si3);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+28U);
l3=si0;
if(si0){
goto L9;
}
si0=l2;
si1=20U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=i32_load(&i->m0,(U64)si0);
si1=34U;
si0=si0 != si1;
if(si0){
goto L51;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+8U);
l5=si0;
si0=!(si0);
if(si0){
goto L8;
}
si0=l3;
si1=28U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si0=l3;
si1=20U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=l5;
si1=96U;
si0*=si1;
si1=l1;
si1=i32_load(&i->m0,(U64)si1);
si0+=si1;
si1=-4U;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=3U;
si0=si0 != si1;
if(si0){
goto L52;
}
si0=l4;
si1=28U;
si0+=si1;
si1=l1;
si2=l3;
si3=l6;
si4=8U;
si5=l2;
si5=i32_load(&i->m0,(U64)si5+4U);
si6=l2;
si6=i32_load(&i->m0,(U64)si6+8U);
f1780(i,si0,si1,si2,si3,si4,si5,si6);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+28U);
l1=si0;
si0=!(si0);
if(si0){
goto L2;
}
si0=l0;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1+32U);
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l0;
si1=12U;
si0+=si1;
si1=l4;
si2=28U;
si1+=si2;
si2=12U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=l1;
i32_store(&i->m0,(U64)si0,si1);
goto L1;
L52:;
si0=l4;
si1=28U;
si0+=si1;
si1=l1;
si2=l3;
si3=l6;
si4=3U;
si5=l2;
si5=i32_load(&i->m0,(U64)si5+4U);
si6=l2;
si6=i32_load(&i->m0,(U64)si6+8U);
f1780(i,si0,si1,si2,si3,si4,si5,si6);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+28U);
l1=si0;
si0=!(si0);
if(si0){
goto L2;
}
si0=l0;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1+32U);
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l0;
si1=12U;
si0+=si1;
si1=l4;
si2=28U;
si1+=si2;
si2=12U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=l1;
i32_store(&i->m0,(U64)si0,si1);
goto L1;
L51:;
si0=l4;
si1=28U;
si0+=si1;
si1=l1;
si2=l3;
si3=1U;
f1774(i,si0,si1,si2,si3);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+28U);
l1=si0;
si0=!(si0);
if(si0){
goto L2;
}
si0=l0;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1+32U);
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l0;
si1=12U;
si0+=si1;
si1=l4;
si2=28U;
si1+=si2;
si2=12U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=l1;
i32_store(&i->m0,(U64)si0,si1);
goto L1;
L37:;
si0=l4;
si1=28U;
si0+=si1;
si1=l1;
si2=l2;
si3=20U;
si2+=si3;
si2=i32_load(&i->m0,(U64)si2);
si3=l3;
f1774(i,si0,si1,si2,si3);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+28U);
l5=si0;
si0=!(si0);
if(si0){
goto L53;
}
si0=l0;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1+32U);
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l0;
si1=12U;
si0+=si1;
si1=l4;
si2=28U;
si1+=si2;
si2=12U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=l5;
i32_store(&i->m0,(U64)si0,si1);
goto L1;
L53:;
si0=l4;
si1=28U;
si0+=si1;
si1=l1;
si2=l2;
si3=24U;
si2+=si3;
si2=i32_load(&i->m0,(U64)si2);
si3=l3;
f1774(i,si0,si1,si2,si3);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+28U);
l1=si0;
si0=!(si0);
if(si0){
goto L2;
}
si0=l0;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1+32U);
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l0;
si1=12U;
si0+=si1;
si1=l4;
si2=28U;
si1+=si2;
si2=12U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=l1;
i32_store(&i->m0,(U64)si0,si1);
goto L1;
L36:;
si0=l4;
si1=28U;
si0+=si1;
si1=l1;
si2=l2;
si3=20U;
si2+=si3;
si2=i32_load(&i->m0,(U64)si2);
si3=l3;
f1774(i,si0,si1,si2,si3);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+28U);
l1=si0;
si0=!(si0);
if(si0){
goto L2;
}
si0=l0;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1+32U);
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l0;
si1=12U;
si0+=si1;
si1=l4;
si2=28U;
si1+=si2;
si2=12U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=l1;
i32_store(&i->m0,(U64)si0,si1);
goto L1;
L35:;
si0=l2;
si1=20U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si0=l4;
si1=12U;
si0+=si1;
si1=l2;
f1653(i,si0,si1);
si0=l4;
si1=28U;
si0+=si1;
si1=l1;
si2=16961992U;
si3=6U;
si4=l5;
si5=l4;
si5=i32_load(&i->m0,(U64)si5+12U);
f1781(i,si0,si1,si2,si3,si4,si5);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+28U);
l5=si0;
si0=!(si0);
if(si0){
goto L54;
}
si0=l0;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1+32U);
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l0;
si1=12U;
si0+=si1;
si1=l4;
si2=28U;
si1+=si2;
si2=12U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=l5;
i32_store(&i->m0,(U64)si0,si1);
goto L1;
L54:;
si0=l3;
si1=255U;
si0&=si1;
si1=4U;
si0=si0 == si1;
if(si0){
goto L56;
}
si0=l4;
si1=28U;
si0+=si1;
si1=l1;
si2=l2;
si2=i32_load(&i->m0,(U64)si2+24U);
si3=0U;
f1774(i,si0,si1,si2,si3);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+28U);
l2=si0;
if(si0){
goto L55;
}
goto L4;
L56:;
si0=l4;
si1=28U;
si0+=si1;
si1=l1;
si2=l2;
si2=i32_load(&i->m0,(U64)si2+24U);
si3=4U;
f1774(i,si0,si1,si2,si3);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+28U);
l2=si0;
si0=!(si0);
if(si0){
goto L4;
}
si0=l0;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1+32U);
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l0;
si1=12U;
si0+=si1;
si1=l4;
si2=28U;
si1+=si2;
si2=12U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=l2;
i32_store(&i->m0,(U64)si0,si1);
goto L1;
L55:;
si0=l0;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1+32U);
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l0;
si1=12U;
si0+=si1;
si1=l4;
si2=28U;
si1+=si2;
si2=12U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=l2;
i32_store(&i->m0,(U64)si0,si1);
goto L1;
L34:;
si0=l4;
si1=28U;
si0+=si1;
si1=l1;
si2=l2;
si3=20U;
si2+=si3;
si2=i32_load(&i->m0,(U64)si2);
si3=0U;
f1774(i,si0,si1,si2,si3);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+28U);
l3=si0;
si0=!(si0);
if(si0){
goto L57;
}
si0=l0;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1+32U);
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l0;
si1=12U;
si0+=si1;
si1=l4;
si2=28U;
si1+=si2;
si2=12U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=l3;
i32_store(&i->m0,(U64)si0,si1);
goto L1;
L57:;
si0=l4;
si1=28U;
si0+=si1;
si1=l1;
si2=l2;
si3=24U;
si2+=si3;
si2=i32_load(&i->m0,(U64)si2);
si3=0U;
f1774(i,si0,si1,si2,si3);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+28U);
l3=si0;
si0=!(si0);
if(si0){
goto L58;
}
si0=l0;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1+32U);
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l0;
si1=12U;
si0+=si1;
si1=l4;
si2=28U;
si1+=si2;
si2=12U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=l3;
i32_store(&i->m0,(U64)si0,si1);
goto L1;
L58:;
si0=l4;
si1=28U;
si0+=si1;
si1=l1;
si2=l2;
si3=28U;
si2+=si3;
si2=i32_load(&i->m0,(U64)si2);
si3=0U;
f1774(i,si0,si1,si2,si3);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+28U);
l1=si0;
si0=!(si0);
if(si0){
goto L2;
}
si0=l0;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1+32U);
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l0;
si1=12U;
si0+=si1;
si1=l4;
si2=28U;
si1+=si2;
si2=12U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=l1;
i32_store(&i->m0,(U64)si0,si1);
goto L1;
L33:;
si0=l0;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1+32U);
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l0;
si1=12U;
si0+=si1;
si1=l4;
si2=28U;
si1+=si2;
si2=12U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=l7;
i32_store(&i->m0,(U64)si0,si1);
goto L1;
L32:;
si0=l0;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1+32U);
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l0;
si1=12U;
si0+=si1;
si1=l4;
si2=28U;
si1+=si2;
si2=12U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=l7;
i32_store(&i->m0,(U64)si0,si1);
goto L1;
L31:;
si0=l2;
si1=20U;
si0+=si1;
l5=si0;
L30:;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+8U);
l5=si0;
si0=!(si0);
if(si0){
goto L2;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0+20U);
l2=si0;
si0=l5;
si1=56U;
si0*=si1;
l5=si0;
L59:;
{
si0=l4;
si1=28U;
si0+=si1;
si1=l1;
si2=l2;
si3=l3;
f1774(i,si0,si1,si2,si3);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+28U);
l6=si0;
if(si0){
goto L11;
}
si0=l2;
si1=56U;
si0+=si1;
l2=si0;
si0=l5;
si1=-56U;
si0+=si1;
l5=si0;
si0=!(si0);
if(si0){
goto L2;
}
goto L59;
}
L29:;
si0=l4;
si1=28U;
si0+=si1;
si1=l1;
si2=l2;
si3=20U;
si2+=si3;
si2=i32_load(&i->m0,(U64)si2);
si3=0U;
si4=l2;
si5=24U;
si4+=si5;
si4=i32_load(&i->m0,(U64)si4);
si5=l2;
si6=32U;
si5+=si6;
si5=i32_load(&i->m0,(U64)si5);
si6=l2;
si6=i32_load(&i->m0,(U64)si6+4U);
si7=l2;
si8=8U;
si7+=si8;
si7=i32_load(&i->m0,(U64)si7);
f1783(i,si0,si1,si2,si3,si4,si5,si6,si7);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+28U);
l1=si0;
si0=!(si0);
if(si0){
goto L2;
}
si0=l0;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1+32U);
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l0;
si1=12U;
si0+=si1;
si1=l4;
si2=28U;
si1+=si2;
si2=12U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=l1;
i32_store(&i->m0,(U64)si0,si1);
goto L1;
L28:;
si0=l4;
si1=28U;
si0+=si1;
si1=l1;
si2=l2;
si3=20U;
si2+=si3;
si2=i32_load(&i->m0,(U64)si2);
si3=0U;
si4=l2;
si5=24U;
si4+=si5;
si4=i32_load(&i->m0,(U64)si4);
si5=l2;
si6=32U;
si5+=si6;
si5=i32_load(&i->m0,(U64)si5);
si6=l2;
si6=i32_load(&i->m0,(U64)si6+4U);
si7=l2;
si8=8U;
si7+=si8;
si7=i32_load(&i->m0,(U64)si7);
f1783(i,si0,si1,si2,si3,si4,si5,si6,si7);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+28U);
l1=si0;
si0=!(si0);
if(si0){
goto L2;
}
si0=l0;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1+32U);
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l0;
si1=12U;
si0+=si1;
si1=l4;
si2=28U;
si1+=si2;
si2=12U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=l1;
i32_store(&i->m0,(U64)si0,si1);
goto L1;
L27:;
si0=l4;
si1=28U;
si0+=si1;
si1=l1;
si2=l2;
si3=20U;
si2+=si3;
si2=i32_load(&i->m0,(U64)si2);
si3=l2;
si4=24U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si4=l2;
si5=28U;
si4+=si5;
si4=i32_load(&i->m0,(U64)si4);
si5=l2;
si6=36U;
si5+=si6;
si5=i32_load(&i->m0,(U64)si5);
si6=l2;
si6=i32_load(&i->m0,(U64)si6+4U);
si7=l2;
si8=8U;
si7+=si8;
si7=i32_load(&i->m0,(U64)si7);
f1783(i,si0,si1,si2,si3,si4,si5,si6,si7);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+28U);
l1=si0;
si0=!(si0);
if(si0){
goto L2;
}
si0=l0;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1+32U);
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l0;
si1=12U;
si0+=si1;
si1=l4;
si2=28U;
si1+=si2;
si2=12U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=l1;
i32_store(&i->m0,(U64)si0,si1);
goto L1;
L26:;
si0=l4;
si1=28U;
si0+=si1;
si1=l1;
si2=l2;
si3=20U;
si2+=si3;
si2=i32_load(&i->m0,(U64)si2);
si3=0U;
si4=l2;
si5=24U;
si4+=si5;
si4=i32_load(&i->m0,(U64)si4);
si5=l2;
si6=32U;
si5+=si6;
si5=i32_load(&i->m0,(U64)si5);
si6=l2;
si6=i32_load(&i->m0,(U64)si6+4U);
si7=l2;
si8=8U;
si7+=si8;
si7=i32_load(&i->m0,(U64)si7);
f1783(i,si0,si1,si2,si3,si4,si5,si6,si7);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+28U);
l1=si0;
si0=!(si0);
if(si0){
goto L2;
}
si0=l0;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1+32U);
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l0;
si1=12U;
si0+=si1;
si1=l4;
si2=28U;
si1+=si2;
si2=12U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=l1;
i32_store(&i->m0,(U64)si0,si1);
goto L1;
L25:;
si0=l4;
si1=28U;
si0+=si1;
si1=l1;
si2=l2;
si3=20U;
si2+=si3;
si2=i32_load(&i->m0,(U64)si2);
si3=l3;
f1774(i,si0,si1,si2,si3);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+28U);
l1=si0;
si0=!(si0);
if(si0){
goto L2;
}
si0=l0;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1+32U);
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l0;
si1=12U;
si0+=si1;
si1=l4;
si2=28U;
si1+=si2;
si2=12U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=l1;
i32_store(&i->m0,(U64)si0,si1);
goto L1;
L24:;
si0=l4;
si1=28U;
si0+=si1;
si1=l1;
si2=l2;
si3=l3;
f1774(i,si0,si1,si2,si3);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+28U);
l1=si0;
si0=!(si0);
if(si0){
goto L2;
}
si0=l0;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1+32U);
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l0;
si1=12U;
si0+=si1;
si1=l4;
si2=28U;
si1+=si2;
si2=12U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=l1;
i32_store(&i->m0,(U64)si0,si1);
goto L1;
L23:;
si0=l4;
si1=28U;
si0+=si1;
si1=l1;
si2=l2;
si3=20U;
si2+=si3;
si2=i32_load(&i->m0,(U64)si2);
si3=l3;
f1774(i,si0,si1,si2,si3);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+28U);
l1=si0;
si0=!(si0);
if(si0){
goto L2;
}
si0=l0;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1+32U);
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l0;
si1=12U;
si0+=si1;
si1=l4;
si2=28U;
si1+=si2;
si2=12U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=l1;
i32_store(&i->m0,(U64)si0,si1);
goto L1;
L22:;
si0=l4;
si1=28U;
si0+=si1;
si1=l1;
si2=l2;
si3=20U;
si2+=si3;
si2=i32_load(&i->m0,(U64)si2);
si3=l3;
f1774(i,si0,si1,si2,si3);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+28U);
l5=si0;
si0=!(si0);
if(si0){
goto L60;
}
si0=l0;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1+32U);
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l0;
si1=12U;
si0+=si1;
si1=l4;
si2=28U;
si1+=si2;
si2=12U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=l5;
i32_store(&i->m0,(U64)si0,si1);
goto L1;
L60:;
si0=l4;
si1=28U;
si0+=si1;
si1=l1;
si2=l2;
si3=36U;
si2+=si3;
si2=i32_load(&i->m0,(U64)si2);
si3=l2;
si4=44U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si4=l3;
f1782(i,si0,si1,si2,si3,si4);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+28U);
l1=si0;
si0=!(si0);
if(si0){
goto L2;
}
si0=l0;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1+32U);
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l0;
si1=12U;
si0+=si1;
si1=l4;
si2=28U;
si1+=si2;
si2=12U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=l1;
i32_store(&i->m0,(U64)si0,si1);
goto L1;
L21:;
si0=l3;
si1=255U;
si0&=si1;
si1=4U;
si0=si0 == si1;
if(si0){
goto L62;
}
si0=l4;
si1=28U;
si0+=si1;
si1=l1;
si2=l2;
si2=i32_load(&i->m0,(U64)si2+20U);
si3=0U;
f1774(i,si0,si1,si2,si3);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+28U);
l3=si0;
if(si0){
goto L61;
}
goto L5;
L62:;
si0=l4;
si1=28U;
si0+=si1;
si1=l1;
si2=l2;
si2=i32_load(&i->m0,(U64)si2+20U);
si3=4U;
f1774(i,si0,si1,si2,si3);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+28U);
l3=si0;
si0=!(si0);
if(si0){
goto L5;
}
si0=l0;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1+32U);
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l0;
si1=12U;
si0+=si1;
si1=l4;
si2=28U;
si1+=si2;
si2=12U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=l3;
i32_store(&i->m0,(U64)si0,si1);
goto L1;
L61:;
si0=l0;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1+32U);
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l0;
si1=12U;
si0+=si1;
si1=l4;
si2=28U;
si1+=si2;
si2=12U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=l3;
i32_store(&i->m0,(U64)si0,si1);
goto L1;
L20:;
si0=l4;
si1=28U;
si0+=si1;
si1=l1;
si2=l2;
si3=20U;
si2+=si3;
si2=i32_load(&i->m0,(U64)si2);
si3=0U;
f1774(i,si0,si1,si2,si3);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+28U);
l3=si0;
si0=!(si0);
if(si0){
goto L63;
}
si0=l0;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1+32U);
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l0;
si1=12U;
si0+=si1;
si1=l4;
si2=28U;
si1+=si2;
si2=12U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=l3;
i32_store(&i->m0,(U64)si0,si1);
goto L1;
L63:;
si0=l2;
si1=24U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si0=!(si0);
if(si0){
goto L2;
}
si0=l4;
si1=28U;
si0+=si1;
si1=l1;
si2=l2;
si3=0U;
f1774(i,si0,si1,si2,si3);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+28U);
l1=si0;
si0=!(si0);
if(si0){
goto L2;
}
si0=l0;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1+32U);
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l0;
si1=12U;
si0+=si1;
si1=l4;
si2=28U;
si1+=si2;
si2=12U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=l1;
i32_store(&i->m0,(U64)si0,si1);
goto L1;
L19:;
si0=l0;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1+32U);
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l0;
si1=12U;
si0+=si1;
si1=l4;
si2=28U;
si1+=si2;
si2=12U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=l5;
i32_store(&i->m0,(U64)si0,si1);
goto L1;
L18:;
si0=l4;
si1=28U;
si0+=si1;
si1=l1;
si2=l2;
si3=20U;
si2+=si3;
si2=i32_load(&i->m0,(U64)si2);
si3=0U;
f1774(i,si0,si1,si2,si3);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+28U);
l1=si0;
si0=!(si0);
if(si0){
goto L2;
}
si0=l0;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1+32U);
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l0;
si1=12U;
si0+=si1;
si1=l4;
si2=28U;
si1+=si2;
si2=12U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=l1;
i32_store(&i->m0,(U64)si0,si1);
goto L1;
L17:;
si0=l4;
si1=28U;
si0+=si1;
si1=l1;
si2=l2;
si3=20U;
si2+=si3;
si2=i32_load(&i->m0,(U64)si2);
si3=0U;
f1774(i,si0,si1,si2,si3);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+28U);
l3=si0;
si0=!(si0);
if(si0){
goto L64;
}
si0=l0;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1+32U);
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l0;
si1=12U;
si0+=si1;
si1=l4;
si2=28U;
si1+=si2;
si2=12U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=l3;
i32_store(&i->m0,(U64)si0,si1);
goto L1;
L64:;
si0=l4;
si1=28U;
si0+=si1;
si1=l1;
si2=l2;
si3=24U;
si2+=si3;
si2=i32_load(&i->m0,(U64)si2);
si3=0U;
f1774(i,si0,si1,si2,si3);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+28U);
l1=si0;
si0=!(si0);
if(si0){
goto L2;
}
si0=l0;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1+32U);
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l0;
si1=12U;
si0+=si1;
si1=l4;
si2=28U;
si1+=si2;
si2=12U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=l1;
i32_store(&i->m0,(U64)si0,si1);
goto L1;
L16:;
si0=l4;
si1=28U;
si0+=si1;
si1=l1;
si2=l2;
si3=20U;
si2+=si3;
si2=i32_load(&i->m0,(U64)si2);
si3=l3;
f1774(i,si0,si1,si2,si3);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+28U);
l1=si0;
si0=!(si0);
if(si0){
goto L2;
}
si0=l0;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1+32U);
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l0;
si1=12U;
si0+=si1;
si1=l4;
si2=28U;
si1+=si2;
si2=12U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=l1;
i32_store(&i->m0,(U64)si0,si1);
goto L1;
L15:;
si0=l4;
si1=28U;
si0+=si1;
si1=l1;
si2=l6;
si3=l5;
si4=3U;
si5=l2;
si5=i32_load(&i->m0,(U64)si5+4U);
si6=l2;
si7=8U;
si6+=si7;
si6=i32_load(&i->m0,(U64)si6);
f1780(i,si0,si1,si2,si3,si4,si5,si6);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+28U);
l1=si0;
si0=!(si0);
if(si0){
goto L2;
}
si0=l0;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1+32U);
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l0;
si1=12U;
si0+=si1;
si1=l4;
si2=28U;
si1+=si2;
si2=12U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=l1;
i32_store(&i->m0,(U64)si0,si1);
goto L1;
L14:;
si0=l4;
si1=28U;
si0+=si1;
si1=l1;
si2=l6;
si3=l5;
si4=3U;
si5=l2;
si5=i32_load(&i->m0,(U64)si5+4U);
l3=si5;
si6=l2;
si7=8U;
si6+=si7;
si6=i32_load(&i->m0,(U64)si6);
l7=si6;
f1780(i,si0,si1,si2,si3,si4,si5,si6);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+28U);
l2=si0;
si0=!(si0);
if(si0){
goto L65;
}
si0=l0;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1+32U);
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l0;
si1=12U;
si0+=si1;
si1=l4;
si2=28U;
si1+=si2;
si2=12U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=l2;
i32_store(&i->m0,(U64)si0,si1);
goto L1;
L65:;
si0=l4;
si1=28U;
si0+=si1;
si1=l1;
si2=l6;
si3=l5;
si4=2U;
si5=l3;
si6=l7;
f1780(i,si0,si1,si2,si3,si4,si5,si6);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+28U);
l1=si0;
si0=!(si0);
if(si0){
goto L2;
}
si0=l0;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1+32U);
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l0;
si1=12U;
si0+=si1;
si1=l4;
si2=28U;
si1+=si2;
si2=12U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=l1;
i32_store(&i->m0,(U64)si0,si1);
goto L1;
L13:;
si0=l4;
si1=28U;
si0+=si1;
si1=l1;
si2=l6;
si3=l5;
si4=9U;
si5=l2;
si5=i32_load(&i->m0,(U64)si5+4U);
si6=l2;
si7=8U;
si6+=si7;
si6=i32_load(&i->m0,(U64)si6);
f1780(i,si0,si1,si2,si3,si4,si5,si6);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+28U);
l1=si0;
si0=!(si0);
if(si0){
goto L2;
}
si0=l0;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1+32U);
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l0;
si1=12U;
si0+=si1;
si1=l4;
si2=28U;
si1+=si2;
si2=12U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=l1;
i32_store(&i->m0,(U64)si0,si1);
goto L1;
L12:;
si0=l4;
si1=28U;
si0+=si1;
si1=l1;
si2=l6;
si3=l5;
si4=2U;
si5=l2;
si5=i32_load(&i->m0,(U64)si5+4U);
l7=si5;
si6=l2;
si7=8U;
si6+=si7;
si6=i32_load(&i->m0,(U64)si6);
l8=si6;
f1780(i,si0,si1,si2,si3,si4,si5,si6);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+28U);
l2=si0;
si0=!(si0);
if(si0){
goto L66;
}
si0=l0;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1+32U);
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l0;
si1=12U;
si0+=si1;
si1=l4;
si2=28U;
si1+=si2;
si2=12U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=l2;
i32_store(&i->m0,(U64)si0,si1);
goto L1;
L66:;
si0=l3;
si1=255U;
si0&=si1;
if(si0){
goto L2;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+8U);
l2=si0;
si0=!(si0);
if(si0){
goto L7;
}
si0=l5;
si1=5U;
si0=si0 != si1;
if(si0){
goto L2;
}
si0=l2;
si1=96U;
si0*=si1;
si1=l1;
si1=i32_load(&i->m0,(U64)si1);
si0+=si1;
si1=-4U;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=255U;
si0&=si1;
si1=2U;
si0=si0 != si1;
if(si0){
goto L2;
}
si0=l6;
si1=16962024U;
si2=5U;
si0=f15142(i,si0,si1,si2);
if(si0){
goto L2;
}
si0=l4;
si1=28U;
si0+=si1;
si1=l1;
si2=16961480U;
si3=9U;
si4=2U;
si5=l7;
si6=l8;
f1780(i,si0,si1,si2,si3,si4,si5,si6);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+28U);
l1=si0;
si0=!(si0);
if(si0){
goto L2;
}
si0=l0;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1+32U);
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l0;
si1=12U;
si0+=si1;
si1=l4;
si2=28U;
si1+=si2;
si2=12U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=l1;
i32_store(&i->m0,(U64)si0,si1);
goto L1;
L11:;
si0=l0;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1+32U);
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l0;
si1=12U;
si0+=si1;
si1=l4;
si2=28U;
si1+=si2;
si2=12U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=l6;
i32_store(&i->m0,(U64)si0,si1);
goto L1;
L10:;
si0=l2;
si1=20U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si0=!(si0);
if(si0){
goto L6;
}
si0=l4;
si1=28U;
si0+=si1;
si1=l1;
si2=l5;
si3=l3;
f1774(i,si0,si1,si2,si3);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+28U);
l5=si0;
si0=!(si0);
if(si0){
goto L6;
}
si0=l0;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1+32U);
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l0;
si1=12U;
si0+=si1;
si1=l4;
si2=28U;
si1+=si2;
si2=12U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=l5;
i32_store(&i->m0,(U64)si0,si1);
goto L1;
L9:;
si0=l0;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1+32U);
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l0;
si1=12U;
si0+=si1;
si1=l4;
si2=28U;
si1+=si2;
si2=12U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=l3;
i32_store(&i->m0,(U64)si0,si1);
goto L1;
L8:;
si0=16961489U;
si1=43U;
si2=16961976U;
f604(i,si0,si1,si2);
UNREACHABLE;
L7:;
si0=16961489U;
si1=43U;
si2=16962008U;
f604(i,si0,si1,si2);
UNREACHABLE;
L6:;
si0=l2;
si1=24U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si0=!(si0);
if(si0){
goto L68;
}
si0=l4;
si1=28U;
si0+=si1;
si1=l1;
si2=l5;
si3=l3;
f1774(i,si0,si1,si2,si3);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+28U);
l5=si0;
if(si0){
goto L67;
}
L68:;
si0=l2;
si1=28U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si0=!(si0);
if(si0){
goto L2;
}
si0=l4;
si1=28U;
si0+=si1;
si1=l1;
si2=l2;
si3=l3;
f1774(i,si0,si1,si2,si3);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+28U);
l1=si0;
si0=!(si0);
if(si0){
goto L2;
}
si0=l0;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1+32U);
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l0;
si1=12U;
si0+=si1;
si1=l4;
si2=28U;
si1+=si2;
si2=12U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=l1;
i32_store(&i->m0,(U64)si0,si1);
goto L1;
L67:;
si0=l0;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1+32U);
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l0;
si1=12U;
si0+=si1;
si1=l4;
si2=28U;
si1+=si2;
si2=12U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=l5;
i32_store(&i->m0,(U64)si0,si1);
goto L1;
L5:;
si0=l4;
si1=28U;
si0+=si1;
si1=l1;
si2=l2;
si3=24U;
si2+=si3;
si2=i32_load(&i->m0,(U64)si2);
si3=l2;
si4=32U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si4=0U;
f1782(i,si0,si1,si2,si3,si4);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+28U);
l3=si0;
if(si0){
goto L70;
}
si0=l2;
si1=44U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=!(si0);
if(si0){
goto L2;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0+36U);
l2=si0;
si0=l3;
si1=88U;
si0*=si1;
l3=si0;
L71:;
{
si0=l4;
si1=28U;
si0+=si1;
si1=l1;
si2=l2;
si3=0U;
f1774(i,si0,si1,si2,si3);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+28U);
l5=si0;
if(si0){
goto L69;
}
si0=l2;
si1=88U;
si0+=si1;
l2=si0;
si0=l3;
si1=-88U;
si0+=si1;
l3=si0;
si0=!(si0);
if(si0){
goto L2;
}
goto L71;
}
L70:;
si0=l0;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1+32U);
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l0;
si1=12U;
si0+=si1;
si1=l4;
si2=28U;
si1+=si2;
si2=12U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=l3;
i32_store(&i->m0,(U64)si0,si1);
goto L1;
L69:;
si0=l0;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1+32U);
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l0;
si1=12U;
si0+=si1;
si1=l4;
si2=28U;
si1+=si2;
si2=12U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=l5;
i32_store(&i->m0,(U64)si0,si1);
goto L1;
L4:;
si0=l1;
f1779(i,si0);
goto L2;
L3:;
si0=l4;
si1=75U;
si2=0U;
f1788(i,si0,si1,si2);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+4U);
l1=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
si1=16961901U;
si2=75U;
si0=f15143(i,si0,si1,si2);
l3=si0;
si0=l4;
si1=28U;
si0+=si1;
si1=l2;
si2=20U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
f1653(i,si0,si1);
si0=l0;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1+28U);
i64_store(&i->m0,(U64)si0+12U,sj1);
si0=l0;
si1=75U;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l0;
si1=l1;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l3;
i32_store(&i->m0,(U64)si0,si1);
goto L1;
L2:;
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
L1:;
si0=l4;
si1=48U;
si0+=si1;
i->g0=si0;
L0:;
}

U32 f1775(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 si0,si1,si2,si3;
U64 sj1;
si0=i->g0;
si1=32U;
si0-=si1;
l2=si0;
i->g0=si0;
si0=l0;
si0=i32_load8_u(&i->m0,(U64)si0);
switch(si0){
case 0:
goto L5;
case 1:
goto L4;
case 2:
goto L3;
case 3:
goto L2;
default:
goto L5;
}
L5:;
si0=l2;
si1=20U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=1U;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l2;
si1=16961296U;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l2;
si1=16961276U;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=l1;
si2=24U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
si2=l2;
si3=8U;
si2+=si3;
si0=f621(i,si0,si1,si2);
l1=si0;
goto L1;
L4:;
si0=l2;
si1=20U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=1U;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l2;
si1=16961312U;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l2;
si1=16961276U;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=l1;
si2=24U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
si2=l2;
si3=8U;
si2+=si3;
si0=f621(i,si0,si1,si2);
l1=si0;
goto L1;
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
si1=16961328U;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l2;
si1=16961276U;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=l1;
si2=24U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
si2=l2;
si3=8U;
si2+=si3;
si0=f621(i,si0,si1,si2);
l1=si0;
goto L1;
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
si1=16961352U;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l2;
si1=16961276U;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=l1;
si2=24U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
si2=l2;
si3=8U;
si2+=si3;
si0=f621(i,si0,si1,si2);
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

void f1776(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U64 l8=0;
U32 l9=0;
U32 l10=0;
U32 l11=0;
U64 l12=0;
U32 l13=0;
U32 l14=0;
U32 l15=0;
U32 l16=0;
U32 l17=0;
U32 l18=0;
U32 si0,si1,si2,si3,si4;
U64 sj0,sj1,sj2,sj3,sj4,sj5,sj6,sj7;
si0=i->g0;
si1=160U;
si0-=si1;
l3=si0;
i->g0=si0;
si0=18657636U;
si0=f1992(i,si0);
l4=si0;
si0=i32_load(&i->m0,(U64)si0+4U);
l5=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si0=0U;
si0=i32_load(&i->m0,(U64)si0+18657632U);
l4=si0;
if(si0){
goto L1;
}
si0=l3;
si1=88U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=80U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=72U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=64U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=56U;
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
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
sj1=0ULL;
i64_store(&i->m0,(U64)si0+32U,sj1);
si0=l3;
si1=32U;
si0+=si1;
si1=64U;
si0=wasi_snapshot_preview1__random_get(i,si0,si1);
l4=si0;
if(si0){
goto L3;
}
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=64U;
si0=f15022(i,si0);
l7=si0;
if(si0){
goto L2;
}
si0=8U;
si1=64U;
f52(i,si0,si1);
UNREACHABLE;
L3:;
si0=l3;
si1=l4;
i32_store(&i->m0,(U64)si0+128U,si1);
si0=16968920U;
si1=30U;
si2=l3;
si3=128U;
si2+=si3;
si3=16968952U;
si4=16969072U;
f641(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L2:;
si0=l7;
si1=l3;
sj1=i64_load(&i->m0,(U64)si1+32U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l7;
si1=56U;
si0+=si1;
si1=l3;
si2=32U;
si1+=si2;
si2=56U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l7;
si1=48U;
si0+=si1;
si1=l3;
si2=32U;
si1+=si2;
si2=48U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l7;
si1=40U;
si0+=si1;
si1=l3;
si2=32U;
si1+=si2;
si2=40U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l7;
si1=32U;
si0+=si1;
si1=l3;
si2=32U;
si1+=si2;
si2=32U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l7;
si1=24U;
si0+=si1;
si1=l3;
si2=32U;
si1+=si2;
si2=24U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l7;
si1=16U;
si0+=si1;
si1=l3;
si2=32U;
si1+=si2;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l7;
si1=8U;
si0+=si1;
si1=l3;
si2=32U;
si1+=si2;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=0U;
si1=0U;
si1=i32_load(&i->m0,(U64)si1+18657632U);
l4=si1;
si2=l7;
si3=l4;
si1=si3?si1:si2;
i32_store(&i->m0,(U64)si0+18657632U,si1);
si0=l4;
if(si0){
goto L4;
}
si0=l7;
l4=si0;
goto L1;
L4:;
si0=l7;
f15024(i,si0);
L1:;
si0=l3;
si1=128U;
si0+=si1;
si1=l4;
si2=l4;
si3=32U;
si2+=si3;
si3=l6;
si4=l5;
si4=i32_load(&i->m0,(U64)si4+12U);
si3=TF(i->t0,si4,U32 (*)(rustpythonInstance*,U32))(i,si3);
f37(i,si0,si1,si2,si3);
si0=l3;
si1=32U;
si0+=si1;
si1=56U;
si0+=si1;
si1=l2;
si2=56U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=32U;
si0+=si1;
si1=48U;
si0+=si1;
si1=l2;
si2=48U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=32U;
si0+=si1;
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
si1=32U;
si0+=si1;
si1=l2;
si2=32U;
si1+=si2;
l4=si1;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=32U;
si0+=si1;
si1=24U;
si0+=si1;
si1=l2;
si2=24U;
si1+=si2;
l7=si1;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=32U;
si0+=si1;
si1=16U;
si0+=si1;
si1=l2;
si2=16U;
si1+=si2;
l5=si1;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=32U;
si0+=si1;
si1=8U;
si0+=si1;
si1=l2;
si2=8U;
si1+=si2;
l6=si1;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
sj0=i64_load(&i->m0,(U64)si0);
l8=sj0;
si0=l2;
si1=l3;
sj1=i64_load(&i->m0,(U64)si1+128U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l6;
si1=l3;
si2=128U;
si1+=si2;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=l3;
si2=128U;
si1+=si2;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l7;
si1=l3;
si2=128U;
si1+=si2;
si2=24U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
sj1=l8;
i64_store(&i->m0,(U64)si0+32U,sj1);
si0=l2;
sj1=0ULL;
i64_store(&i->m0,(U64)si0+52U,sj1);
si0=l2;
sj1=17179869184ULL;
i64_store(&i->m0,(U64)si0+44U,sj1);
si0=l2;
sj1=0ULL;
i64_store(&i->m0,(U64)si0+36U,sj1);
si0=l4;
si1=16961280U;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=l2;
si1=i32_load8_u(&i->m0,(U64)si1+92U);
l9=si1;
i32_store8(&i->m0,(U64)si0+96U,si1);
si0=l2;
si1=88U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l10=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+80U);
l6=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+8U);
l4=si0;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+4U);
si0=si0 != si1;
if(si0){
goto L5;
}
si0=l1;
si1=l4;
f1789(i,si0,si1);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+8U);
l4=si0;
L5:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
si1=l4;
si2=2U;
si1<<=(si2&31);
si0+=si1;
si1=l3;
si2=32U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+8U);
si2=1U;
si1+=si2;
l4=si1;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l10;
if(si0){
goto L7;
}
si0=0U;
l7=si0;
si0=l1;
l11=si0;
si0=0U;
l5=si0;
goto L6;
L7:;
si0=l10;
si1=96U;
si0*=si1;
l7=si0;
si0=l6;
l4=si0;
L10:;
{
si0=l3;
si1=128U;
si0+=si1;
si1=l1;
si2=l4;
f1776(i,si0,si1,si2);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+128U);
l5=si0;
if(si0){
goto L9;
}
si0=l4;
si1=96U;
si0+=si1;
l4=si0;
si0=l7;
si1=-96U;
si0+=si1;
l7=si0;
if(si0){
goto L10;
}
}
si0=l10;
l7=si0;
si0=l1;
l11=si0;
goto L8;
L9:;
si0=l3;
sj0=i64_load(&i->m0,(U64)si0+140U);
l8=sj0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+136U);
l11=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+132U);
l7=si0;
L8:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+8U);
l4=si0;
L6:;
si0=l4;
si0=!(si0);
if(si0){
goto L11;
}
si0=l1;
si1=l4;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0+8U,si1);
L11:;
si0=l5;
if(si0){
goto L13;
}
si0=l2;
si1=l3;
sj1=i64_load(&i->m0,(U64)si1+32U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=56U;
si0+=si1;
si1=l3;
si2=32U;
si1+=si2;
si2=56U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
l8=sj1;
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
l12=sj1;
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
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
sj0=l8;
si0=(U32)(sj0);
l7=si0;
si0=!(si0);
if(si0){
goto L14;
}
sj0=l12;
si0=(U32)(sj0);
l4=si0;
si1=l7;
si2=5U;
si1<<=(si2&31);
si0+=si1;
l13=si0;
si0=l10;
si1=96U;
si0*=si1;
l14=si0;
si0=l9;
si1=255U;
si0&=si1;
l15=si0;
si1=3U;
si0=si0 != si1;
l11=si0;
L15:;
{
si0=l4;
si1=16U;
si0+=si1;
l2=si0;
si0=l4;
si1=28U;
si0+=si1;
si0=i32_load16_u(&i->m0,(U64)si0);
l7=si0;
si0=l11;
if(si0){
goto L27;
}
si0=l7;
si1=64U;
si0&=si1;
if(si0){
goto L26;
}
L27:;
si0=l4;
si1=30U;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
switch(si0){
case 0:
goto L28;
case 1:
goto L16;
case 2:
goto L16;
case 3:
goto L16;
case 4:
goto L29;
case 5:
goto L16;
default:
goto L28;
}
L29:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+8U);
l7=si0;
switch(si0){
case 0:
goto L23;
case 1:
goto L24;
default:
goto L25;
}
L28:;
si0=l4;
si1=24U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+16U);
l5=si0;
si0=l7;
si1=150U;
si0&=si1;
si0=!(si0);
if(si0){
goto L20;
}
si0=l10;
if(si0){
goto L30;
}
si0=1U;
l16=si0;
goto L17;
L30:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+8U);
l7=si0;
si0=l15;
si1=1U;
si0=si0 != si1;
if(si0){
goto L19;
}
si0=l7;
si0=!(si0);
if(si0){
goto L18;
}
si0=0U;
l9=si0;
L31:;
{
si0=l6;
si1=l9;
si0+=si1;
l7=si0;
si1=44U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L32;
}
si0=l3;
si1=l7;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+144U,sj1);
si0=l3;
si1=l7;
si2=24U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+136U,sj1);
si0=l3;
si1=l7;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+128U,sj1);
si0=l3;
si1=l7;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+152U,sj1);
si0=l3;
si1=128U;
si0+=si1;
si1=l5;
si2=l2;
f2027(i,si0,si1,si2);
si0=l3;
si1=8U;
si0+=si1;
si1=l7;
si2=32U;
si1+=si2;
si2=l3;
sj2=i64_load(&i->m0,(U64)si2+152U);
l12=sj2;
sj3=56ULL;
sj2<<=(sj3&63);
sj3=l12;
sj4=65280ULL;
sj3&=sj4;
sj4=40ULL;
sj3<<=(sj4&63);
sj2|=sj3;
sj3=l12;
sj4=16711680ULL;
sj3&=sj4;
sj4=24ULL;
sj3<<=(sj4&63);
sj4=l12;
sj5=4278190080ULL;
sj4&=sj5;
sj5=8ULL;
sj4<<=(sj5&63);
sj3|=sj4;
sj2|=sj3;
sj3=l12;
sj4=8ULL;
sj3>>=(sj4&63);
sj4=4278190080ULL;
sj3&=sj4;
sj4=l12;
sj5=24ULL;
sj4>>=(sj5&63);
sj5=16711680ULL;
sj4&=sj5;
sj3|=sj4;
sj4=l12;
sj5=40ULL;
sj4>>=(sj5&63);
sj5=65280ULL;
sj4&=sj5;
sj5=l12;
sj6=56ULL;
sj5>>=(sj6&63);
sj4|=sj5;
sj3|=sj4;
sj2|=sj3;
si3=l3;
sj3=i64_load(&i->m0,(U64)si3+144U);
l8=sj3;
sj2*=sj3;
sj3=l8;
sj4=56ULL;
sj3<<=(sj4&63);
sj4=l8;
sj5=65280ULL;
sj4&=sj5;
sj5=40ULL;
sj4<<=(sj5&63);
sj3|=sj4;
sj4=l8;
sj5=16711680ULL;
sj4&=sj5;
sj5=24ULL;
sj4<<=(sj5&63);
sj5=l8;
sj6=4278190080ULL;
sj5&=sj6;
sj6=8ULL;
sj5<<=(sj6&63);
sj4|=sj5;
sj3|=sj4;
sj4=l8;
sj5=8ULL;
sj4>>=(sj5&63);
sj5=4278190080ULL;
sj4&=sj5;
sj5=l8;
sj6=24ULL;
sj5>>=(sj6&63);
sj6=16711680ULL;
sj5&=sj6;
sj4|=sj5;
sj5=l8;
sj6=40ULL;
sj5>>=(sj6&63);
sj6=65280ULL;
sj5&=sj6;
sj6=l8;
sj7=56ULL;
sj6>>=(sj7&63);
sj5|=sj6;
sj4|=sj5;
sj3|=sj4;
sj4=l12;
sj5=-1ULL;
sj4^=sj5;
sj3*=sj4;
l12=sj3;
sj4=56ULL;
sj3<<=(sj4&63);
sj4=l12;
sj5=65280ULL;
sj4&=sj5;
sj5=40ULL;
sj4<<=(sj5&63);
sj3|=sj4;
sj4=l12;
sj5=16711680ULL;
sj4&=sj5;
sj5=24ULL;
sj4<<=(sj5&63);
sj5=l12;
sj6=4278190080ULL;
sj5&=sj6;
sj6=8ULL;
sj5<<=(sj6&63);
sj4|=sj5;
sj3|=sj4;
sj4=l12;
sj5=8ULL;
sj4>>=(sj5&63);
sj5=4278190080ULL;
sj4&=sj5;
sj5=l12;
sj6=24ULL;
sj5>>=(sj6&63);
sj6=16711680ULL;
sj5&=sj6;
sj4|=sj5;
sj5=l12;
sj6=40ULL;
sj5>>=(sj6&63);
sj6=65280ULL;
sj5&=sj6;
sj6=l12;
sj7=56ULL;
sj6>>=(sj7&63);
sj5|=sj6;
sj4|=sj5;
sj3|=sj4;
sj2^=sj3;
sj3=l8;
sj2=I64_ROTL(sj2,sj3);
si2=(U32)(sj2);
si3=l5;
si4=l2;
f2059(i,si0,si1,si2,si3,si4);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+8U);
si1=1U;
si0=si0 != si1;
if(si0){
goto L32;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0+12U);
l16=si0;
si1=l7;
si2=56U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
l17=si1;
si0=si0 >= si1;
if(si0){
goto L33;
}
si0=l7;
si1=48U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=l16;
si2=5U;
si1<<=(si2&31);
si0+=si1;
l7=si0;
si1=30U;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=4U;
si0=si0 == si1;
if(si0){
goto L35;
}
si0=l2;
si1=9U;
si0=si0 != si1;
if(si0){
goto L32;
}
si0=l7;
si1=28U;
si0+=si1;
si0=i32_load16_u(&i->m0,(U64)si0);
si1=256U;
si0&=si1;
if(si0){
goto L34;
}
goto L32;
L35:;
si0=l2;
si1=9U;
si0=si0 != si1;
if(si0){
goto L32;
}
L34:;
si0=l5;
si1=16961480U;
si2=l2;
si0=f15142(i,si0,si1,si2);
if(si0){
goto L32;
}
si0=5U;
l16=si0;
goto L17;
L33:;
si0=l16;
si1=l17;
si2=16969724U;
f594(i,si0,si1,si2);
UNREACHABLE;
L32:;
si0=l14;
si1=l9;
si2=96U;
si1+=si2;
l9=si1;
si0=si0 != si1;
if(si0){
goto L31;
}
}
si0=1U;
l16=si0;
goto L17;
L26:;
si0=l3;
si1=128U;
si0+=si1;
si1=l1;
si2=l2;
si3=0U;
f1777(i,si0,si1,si2,si3);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+128U);
l7=si0;
si0=!(si0);
if(si0){
goto L16;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0+144U);
l1=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+140U);
l4=si0;
si0=l3;
sj0=i64_load(&i->m0,(U64)si0+132U);
l8=sj0;
goto L21;
L25:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
si1=l7;
si2=l4;
si2=i32_load(&i->m0,(U64)si2+16U);
si3=l4;
si4=24U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si0=f1778(i,si0,si1,si2,si3);
si1=255U;
si0&=si1;
si1=4U;
si0=si0 == si1;
if(si0){
goto L16;
}
L24:;
si0=l3;
si1=2U;
i32_store(&i->m0,(U64)si0+132U,si1);
si0=l3;
si1=16961464U;
i32_store(&i->m0,(U64)si0+128U,si1);
si0=l3;
sj1=1ULL;
i64_store(&i->m0,(U64)si0+140U,sj1);
si0=l3;
si1=536U;
i32_store(&i->m0,(U64)si0+124U,si1);
si0=l3;
si1=l2;
i32_store(&i->m0,(U64)si0+120U,si1);
si0=l3;
si1=l3;
si2=120U;
si1+=si2;
i32_store(&i->m0,(U64)si0+136U,si1);
si0=l3;
si1=104U;
si0+=si1;
si1=l3;
si2=128U;
si1+=si2;
f64(i,si0,si1);
goto L22;
L23:;
si0=l3;
si1=2U;
i32_store(&i->m0,(U64)si0+132U,si1);
si0=l3;
si1=16961416U;
i32_store(&i->m0,(U64)si0+128U,si1);
si0=l3;
sj1=1ULL;
i64_store(&i->m0,(U64)si0+140U,sj1);
si0=l3;
si1=536U;
i32_store(&i->m0,(U64)si0+124U,si1);
si0=l3;
si1=l2;
i32_store(&i->m0,(U64)si0+120U,si1);
si0=l3;
si1=l3;
si2=120U;
si1+=si2;
i32_store(&i->m0,(U64)si0+136U,si1);
si0=l3;
si1=104U;
si0+=si1;
si1=l3;
si2=128U;
si1+=si2;
f64(i,si0,si1);
L22:;
si0=l3;
sj0=i64_load(&i->m0,(U64)si0+108U);
l8=sj0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+104U);
l7=si0;
si0=!(si0);
if(si0){
goto L16;
}
si0=0U;
l4=si0;
L21:;
si0=l0;
si1=l1;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l0;
si1=l4;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l0;
sj1=l8;
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l0;
si1=l7;
i32_store(&i->m0,(U64)si0,si1);
goto L12;
L20:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
si1=l1;
si1=i32_load(&i->m0,(U64)si1+8U);
si2=l5;
si3=l2;
si0=f1778(i,si0,si1,si2,si3);
l16=si0;
si1=255U;
si0&=si1;
si1=6U;
si0=si0 != si1;
if(si0){
goto L17;
}
si0=3U;
si1=0U;
si2=l1;
si2=i32_load(&i->m0,(U64)si2+8U);
si0=si2?si0:si1;
l16=si0;
goto L17;
L19:;
si0=l7;
si0=!(si0);
if(si0){
goto L38;
}
si0=0U;
l9=si0;
L39:;
{
si0=l6;
si1=l9;
si0+=si1;
l7=si0;
si1=44U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L40;
}
si0=l3;
si1=l7;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+144U,sj1);
si0=l3;
si1=l7;
si2=24U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+136U,sj1);
si0=l3;
si1=l7;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+128U,sj1);
si0=l3;
si1=l7;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+152U,sj1);
si0=l3;
si1=128U;
si0+=si1;
si1=l5;
si2=l2;
f2027(i,si0,si1,si2);
si0=l3;
si1=24U;
si0+=si1;
si1=l7;
si2=32U;
si1+=si2;
si2=l3;
sj2=i64_load(&i->m0,(U64)si2+152U);
l12=sj2;
sj3=56ULL;
sj2<<=(sj3&63);
sj3=l12;
sj4=65280ULL;
sj3&=sj4;
sj4=40ULL;
sj3<<=(sj4&63);
sj2|=sj3;
sj3=l12;
sj4=16711680ULL;
sj3&=sj4;
sj4=24ULL;
sj3<<=(sj4&63);
sj4=l12;
sj5=4278190080ULL;
sj4&=sj5;
sj5=8ULL;
sj4<<=(sj5&63);
sj3|=sj4;
sj2|=sj3;
sj3=l12;
sj4=8ULL;
sj3>>=(sj4&63);
sj4=4278190080ULL;
sj3&=sj4;
sj4=l12;
sj5=24ULL;
sj4>>=(sj5&63);
sj5=16711680ULL;
sj4&=sj5;
sj3|=sj4;
sj4=l12;
sj5=40ULL;
sj4>>=(sj5&63);
sj5=65280ULL;
sj4&=sj5;
sj5=l12;
sj6=56ULL;
sj5>>=(sj6&63);
sj4|=sj5;
sj3|=sj4;
sj2|=sj3;
si3=l3;
sj3=i64_load(&i->m0,(U64)si3+144U);
l8=sj3;
sj2*=sj3;
sj3=l8;
sj4=56ULL;
sj3<<=(sj4&63);
sj4=l8;
sj5=65280ULL;
sj4&=sj5;
sj5=40ULL;
sj4<<=(sj5&63);
sj3|=sj4;
sj4=l8;
sj5=16711680ULL;
sj4&=sj5;
sj5=24ULL;
sj4<<=(sj5&63);
sj5=l8;
sj6=4278190080ULL;
sj5&=sj6;
sj6=8ULL;
sj5<<=(sj6&63);
sj4|=sj5;
sj3|=sj4;
sj4=l8;
sj5=8ULL;
sj4>>=(sj5&63);
sj5=4278190080ULL;
sj4&=sj5;
sj5=l8;
sj6=24ULL;
sj5>>=(sj6&63);
sj6=16711680ULL;
sj5&=sj6;
sj4|=sj5;
sj5=l8;
sj6=40ULL;
sj5>>=(sj6&63);
sj6=65280ULL;
sj5&=sj6;
sj6=l8;
sj7=56ULL;
sj6>>=(sj7&63);
sj5|=sj6;
sj4|=sj5;
sj3|=sj4;
sj4=l12;
sj5=-1ULL;
sj4^=sj5;
sj3*=sj4;
l12=sj3;
sj4=56ULL;
sj3<<=(sj4&63);
sj4=l12;
sj5=65280ULL;
sj4&=sj5;
sj5=40ULL;
sj4<<=(sj5&63);
sj3|=sj4;
sj4=l12;
sj5=16711680ULL;
sj4&=sj5;
sj5=24ULL;
sj4<<=(sj5&63);
sj5=l12;
sj6=4278190080ULL;
sj5&=sj6;
sj6=8ULL;
sj5<<=(sj6&63);
sj4|=sj5;
sj3|=sj4;
sj4=l12;
sj5=8ULL;
sj4>>=(sj5&63);
sj5=4278190080ULL;
sj4&=sj5;
sj5=l12;
sj6=24ULL;
sj5>>=(sj6&63);
sj6=16711680ULL;
sj5&=sj6;
sj4|=sj5;
sj5=l12;
sj6=40ULL;
sj5>>=(sj6&63);
sj6=65280ULL;
sj5&=sj6;
sj6=l12;
sj7=56ULL;
sj6>>=(sj7&63);
sj5|=sj6;
sj4|=sj5;
sj3|=sj4;
sj2^=sj3;
sj3=l8;
sj2=I64_ROTL(sj2,sj3);
si2=(U32)(sj2);
si3=l5;
si4=l2;
f2059(i,si0,si1,si2,si3,si4);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+24U);
si1=1U;
si0=si0 != si1;
if(si0){
goto L40;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0+28U);
l17=si0;
si1=l7;
si2=56U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
l16=si1;
si0=si0 >= si1;
if(si0){
goto L37;
}
si0=5U;
l16=si0;
si0=l7;
si1=48U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
si1=l17;
si2=5U;
si1<<=(si2&31);
si0+=si1;
si1=30U;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=4U;
si0=si0 == si1;
if(si0){
goto L17;
}
si0=5U;
l16=si0;
si0=l7;
si1=l17;
si2=5U;
si1<<=(si2&31);
si0+=si1;
si1=29U;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=1U;
si0&=si1;
if(si0){
goto L17;
}
L40:;
si0=l14;
si1=l9;
si2=96U;
si1+=si2;
l9=si1;
si0=si0 != si1;
if(si0){
goto L39;
}
}
si0=1U;
l16=si0;
goto L17;
L38:;
si0=0U;
l9=si0;
L41:;
{
si0=l6;
si1=l9;
si0+=si1;
l7=si0;
si1=44U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L42;
}
si0=l3;
si1=l7;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+144U,sj1);
si0=l3;
si1=l7;
si2=24U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+136U,sj1);
si0=l3;
si1=l7;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+128U,sj1);
si0=l3;
si1=l7;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+152U,sj1);
si0=l3;
si1=128U;
si0+=si1;
si1=l5;
si2=l2;
f2027(i,si0,si1,si2);
si0=l3;
si1=16U;
si0+=si1;
si1=l7;
si2=32U;
si1+=si2;
si2=l3;
sj2=i64_load(&i->m0,(U64)si2+152U);
l12=sj2;
sj3=56ULL;
sj2<<=(sj3&63);
sj3=l12;
sj4=65280ULL;
sj3&=sj4;
sj4=40ULL;
sj3<<=(sj4&63);
sj2|=sj3;
sj3=l12;
sj4=16711680ULL;
sj3&=sj4;
sj4=24ULL;
sj3<<=(sj4&63);
sj4=l12;
sj5=4278190080ULL;
sj4&=sj5;
sj5=8ULL;
sj4<<=(sj5&63);
sj3|=sj4;
sj2|=sj3;
sj3=l12;
sj4=8ULL;
sj3>>=(sj4&63);
sj4=4278190080ULL;
sj3&=sj4;
sj4=l12;
sj5=24ULL;
sj4>>=(sj5&63);
sj5=16711680ULL;
sj4&=sj5;
sj3|=sj4;
sj4=l12;
sj5=40ULL;
sj4>>=(sj5&63);
sj5=65280ULL;
sj4&=sj5;
sj5=l12;
sj6=56ULL;
sj5>>=(sj6&63);
sj4|=sj5;
sj3|=sj4;
sj2|=sj3;
si3=l3;
sj3=i64_load(&i->m0,(U64)si3+144U);
l8=sj3;
sj2*=sj3;
sj3=l8;
sj4=56ULL;
sj3<<=(sj4&63);
sj4=l8;
sj5=65280ULL;
sj4&=sj5;
sj5=40ULL;
sj4<<=(sj5&63);
sj3|=sj4;
sj4=l8;
sj5=16711680ULL;
sj4&=sj5;
sj5=24ULL;
sj4<<=(sj5&63);
sj5=l8;
sj6=4278190080ULL;
sj5&=sj6;
sj6=8ULL;
sj5<<=(sj6&63);
sj4|=sj5;
sj3|=sj4;
sj4=l8;
sj5=8ULL;
sj4>>=(sj5&63);
sj5=4278190080ULL;
sj4&=sj5;
sj5=l8;
sj6=24ULL;
sj5>>=(sj6&63);
sj6=16711680ULL;
sj5&=sj6;
sj4|=sj5;
sj5=l8;
sj6=40ULL;
sj5>>=(sj6&63);
sj6=65280ULL;
sj5&=sj6;
sj6=l8;
sj7=56ULL;
sj6>>=(sj7&63);
sj5|=sj6;
sj4|=sj5;
sj3|=sj4;
sj4=l12;
sj5=-1ULL;
sj4^=sj5;
sj3*=sj4;
l12=sj3;
sj4=56ULL;
sj3<<=(sj4&63);
sj4=l12;
sj5=65280ULL;
sj4&=sj5;
sj5=40ULL;
sj4<<=(sj5&63);
sj3|=sj4;
sj4=l12;
sj5=16711680ULL;
sj4&=sj5;
sj5=24ULL;
sj4<<=(sj5&63);
sj5=l12;
sj6=4278190080ULL;
sj5&=sj6;
sj6=8ULL;
sj5<<=(sj6&63);
sj4|=sj5;
sj3|=sj4;
sj4=l12;
sj5=8ULL;
sj4>>=(sj5&63);
sj5=4278190080ULL;
sj4&=sj5;
sj5=l12;
sj6=24ULL;
sj5>>=(sj6&63);
sj6=16711680ULL;
sj5&=sj6;
sj4|=sj5;
sj5=l12;
sj6=40ULL;
sj5>>=(sj6&63);
sj6=65280ULL;
sj5&=sj6;
sj6=l12;
sj7=56ULL;
sj6>>=(sj7&63);
sj5|=sj6;
sj4|=sj5;
sj3|=sj4;
sj2^=sj3;
sj3=l8;
sj2=I64_ROTL(sj2,sj3);
si2=(U32)(sj2);
si3=l5;
si4=l2;
f2059(i,si0,si1,si2,si3,si4);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+16U);
si1=1U;
si0=si0 != si1;
if(si0){
goto L42;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0+20U);
l17=si0;
si1=l7;
si2=56U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
l16=si1;
si0=si0 >= si1;
if(si0){
goto L36;
}
si0=5U;
l16=si0;
si0=l7;
si1=48U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
si1=l17;
si2=5U;
si1<<=(si2&31);
si0+=si1;
si1=30U;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
l18=si0;
si1=4U;
si0=si0 == si1;
if(si0){
goto L17;
}
si0=5U;
l16=si0;
si0=l7;
si1=l17;
si2=5U;
si1<<=(si2&31);
si0+=si1;
si1=29U;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=1U;
si0&=si1;
if(si0){
goto L17;
}
si0=2U;
l16=si0;
si0=l18;
si1=2U;
si0=si0 == si1;
if(si0){
goto L17;
}
L42:;
si0=l14;
si1=l9;
si2=96U;
si1+=si2;
l9=si1;
si0=si0 != si1;
if(si0){
goto L41;
}
}
si0=1U;
l16=si0;
goto L17;
L37:;
si0=l17;
si1=l16;
si2=16969724U;
f594(i,si0,si1,si2);
UNREACHABLE;
L36:;
si0=l17;
si1=l16;
si2=16969724U;
f594(i,si0,si1,si2);
UNREACHABLE;
L18:;
si0=0U;
l9=si0;
L43:;
{
si0=l6;
si1=l9;
si0+=si1;
l7=si0;
si1=44U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L44;
}
si0=l3;
si1=l7;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+144U,sj1);
si0=l3;
si1=l7;
si2=24U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+136U,sj1);
si0=l3;
si1=l7;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+128U,sj1);
si0=l3;
si1=l7;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+152U,sj1);
si0=l3;
si1=128U;
si0+=si1;
si1=l5;
si2=l2;
f2027(i,si0,si1,si2);
si0=l3;
si1=l7;
si2=32U;
si1+=si2;
si2=l3;
sj2=i64_load(&i->m0,(U64)si2+152U);
l12=sj2;
sj3=56ULL;
sj2<<=(sj3&63);
sj3=l12;
sj4=65280ULL;
sj3&=sj4;
sj4=40ULL;
sj3<<=(sj4&63);
sj2|=sj3;
sj3=l12;
sj4=16711680ULL;
sj3&=sj4;
sj4=24ULL;
sj3<<=(sj4&63);
sj4=l12;
sj5=4278190080ULL;
sj4&=sj5;
sj5=8ULL;
sj4<<=(sj5&63);
sj3|=sj4;
sj2|=sj3;
sj3=l12;
sj4=8ULL;
sj3>>=(sj4&63);
sj4=4278190080ULL;
sj3&=sj4;
sj4=l12;
sj5=24ULL;
sj4>>=(sj5&63);
sj5=16711680ULL;
sj4&=sj5;
sj3|=sj4;
sj4=l12;
sj5=40ULL;
sj4>>=(sj5&63);
sj5=65280ULL;
sj4&=sj5;
sj5=l12;
sj6=56ULL;
sj5>>=(sj6&63);
sj4|=sj5;
sj3|=sj4;
sj2|=sj3;
si3=l3;
sj3=i64_load(&i->m0,(U64)si3+144U);
l8=sj3;
sj2*=sj3;
sj3=l8;
sj4=56ULL;
sj3<<=(sj4&63);
sj4=l8;
sj5=65280ULL;
sj4&=sj5;
sj5=40ULL;
sj4<<=(sj5&63);
sj3|=sj4;
sj4=l8;
sj5=16711680ULL;
sj4&=sj5;
sj5=24ULL;
sj4<<=(sj5&63);
sj5=l8;
sj6=4278190080ULL;
sj5&=sj6;
sj6=8ULL;
sj5<<=(sj6&63);
sj4|=sj5;
sj3|=sj4;
sj4=l8;
sj5=8ULL;
sj4>>=(sj5&63);
sj5=4278190080ULL;
sj4&=sj5;
sj5=l8;
sj6=24ULL;
sj5>>=(sj6&63);
sj6=16711680ULL;
sj5&=sj6;
sj4|=sj5;
sj5=l8;
sj6=40ULL;
sj5>>=(sj6&63);
sj6=65280ULL;
sj5&=sj6;
sj6=l8;
sj7=56ULL;
sj6>>=(sj7&63);
sj5|=sj6;
sj4|=sj5;
sj3|=sj4;
sj4=l12;
sj5=-1ULL;
sj4^=sj5;
sj3*=sj4;
l12=sj3;
sj4=56ULL;
sj3<<=(sj4&63);
sj4=l12;
sj5=65280ULL;
sj4&=sj5;
sj5=40ULL;
sj4<<=(sj5&63);
sj3|=sj4;
sj4=l12;
sj5=16711680ULL;
sj4&=sj5;
sj5=24ULL;
sj4<<=(sj5&63);
sj5=l12;
sj6=4278190080ULL;
sj5&=sj6;
sj6=8ULL;
sj5<<=(sj6&63);
sj4|=sj5;
sj3|=sj4;
sj4=l12;
sj5=8ULL;
sj4>>=(sj5&63);
sj5=4278190080ULL;
sj4&=sj5;
sj5=l12;
sj6=24ULL;
sj5>>=(sj6&63);
sj6=16711680ULL;
sj5&=sj6;
sj4|=sj5;
sj5=l12;
sj6=40ULL;
sj5>>=(sj6&63);
sj6=65280ULL;
sj5&=sj6;
sj6=l12;
sj7=56ULL;
sj6>>=(sj7&63);
sj5|=sj6;
sj4|=sj5;
sj3|=sj4;
sj2^=sj3;
sj3=l8;
sj2=I64_ROTL(sj2,sj3);
si2=(U32)(sj2);
si3=l5;
si4=l2;
f2059(i,si0,si1,si2,si3,si4);
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
si1=1U;
si0=si0 != si1;
if(si0){
goto L44;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0+4U);
l16=si0;
si1=l7;
si2=56U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
l17=si1;
si0=si0 >= si1;
if(si0){
goto L45;
}
si0=l7;
si1=48U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=l16;
si2=5U;
si1<<=(si2&31);
si0+=si1;
l7=si0;
si1=30U;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
l17=si0;
si1=4U;
si0=si0 == si1;
if(si0){
goto L46;
}
si0=l7;
si1=29U;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=1U;
si0&=si1;
if(si0){
goto L46;
}
si0=2U;
l16=si0;
si0=l17;
si1=2U;
si0=si0 == si1;
if(si0){
goto L17;
}
goto L44;
L46:;
si0=l2;
si1=9U;
si0=si0 != si1;
if(si0){
goto L44;
}
si0=l5;
si1=16961480U;
si2=9U;
si0=f15142(i,si0,si1,si2);
if(si0){
goto L44;
}
si0=5U;
l16=si0;
goto L17;
L45:;
si0=l16;
si1=l17;
si2=16969724U;
f594(i,si0,si1,si2);
UNREACHABLE;
L44:;
si0=l14;
si1=l9;
si2=96U;
si1+=si2;
l9=si1;
si0=si0 != si1;
if(si0){
goto L43;
}
}
si0=1U;
l16=si0;
L17:;
si0=l4;
si1=l16;
i32_store8(&i->m0,(U64)si0+30U,si1);
L16:;
si0=l4;
si1=32U;
si0+=si1;
l4=si0;
si1=l13;
si0=si0 != si1;
if(si0){
goto L15;
}
}
L14:;
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
goto L12;
L13:;
si0=l0;
sj1=l8;
i64_store(&i->m0,(U64)si0+12U,sj1);
si0=l0;
si1=l11;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l0;
si1=l7;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l5;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=68U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
si0=!(si0);
if(si0){
goto L47;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0+64U);
si1=l4;
si2=2U;
si1<<=(si2&31);
si2=11U;
si1+=si2;
si2=-8U;
si1&=si2;
si0-=si1;
f15024(i,si0);
L47:;
si0=l3;
si1=88U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si0=!(si0);
if(si0){
goto L48;
}
si0=l3;
si1=80U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=16U;
si0+=si1;
l4=si0;
L49:;
{
si0=l4;
si1=-8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L50;
}
si0=l4;
si1=-12U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
f15024(i,si0);
L50:;
si0=l4;
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L51;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
f15024(i,si0);
L51:;
si0=l4;
si1=32U;
si0+=si1;
l4=si0;
si0=l1;
si1=-1U;
si0+=si1;
l1=si0;
if(si0){
goto L49;
}
}
L48:;
si0=l3;
si1=84U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L12;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0+80U);
f15024(i,si0);
L12:;
si0=l3;
si1=160U;
si0+=si1;
i->g0=si0;
L0:;
}

void f1777(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 l8=0;
U64 l9=0;
U64 l10=0;
U32 l11=0;
U32 si0,si1,si2,si3,si4,si5;
U64 sj0,sj1,sj2,sj3,sj4,sj5,sj6,sj7;
si0=i->g0;
si1=80U;
si0-=si1;
l4=si0;
i->g0=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+8U);
l6=si1;
si2=2U;
si1<<=(si2&31);
si0+=si1;
l7=si0;
si0=l3;
si0=!(si0);
if(si0){
goto L11;
}
si0=l6;
si1=1073741823U;
si0&=si1;
si1=l3;
si2=-1U;
si1+=si2;
si0=si0 <= si1;
l8=si0;
si0=l3;
l6=si0;
L12:;
{
si0=l8;
if(si0){
goto L10;
}
si0=l7;
si1=-4U;
si0+=si1;
l7=si0;
si0=l6;
si1=-1U;
si0+=si1;
l6=si0;
if(si0){
goto L12;
}
}
L11:;
si0=l5;
si1=l7;
si0=si0 == si1;
if(si0){
goto L10;
}
si0=l2;
si0=i32_load8_u(&i->m0,(U64)si0+12U);
si1=128U;
si0&=si1;
si0=!(si0);
if(si0){
goto L13;
}
si0=l4;
si1=60U;
si0+=si1;
sj1=1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=1U;
i32_store(&i->m0,(U64)si0+52U,si1);
si0=l4;
si1=16961656U;
i32_store(&i->m0,(U64)si0+48U,si1);
si0=l4;
si1=536U;
i32_store(&i->m0,(U64)si0+40U,si1);
si0=l4;
si1=l2;
i32_store(&i->m0,(U64)si0+36U,si1);
si0=l4;
si1=l4;
si2=36U;
si1+=si2;
i32_store(&i->m0,(U64)si0+56U,si1);
si0=l4;
si1=16U;
si0+=si1;
si1=l4;
si2=48U;
si1+=si2;
f64(i,si0,si1);
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
si0=l0;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1+16U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0+12U,si1);
goto L1;
L13:;
si0=l7;
si1=-4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
si0=i32_load8_u(&i->m0,(U64)si0+64U);
switch(si0){
case 0:
goto L18;
case 1:
goto L21;
case 2:
goto L20;
case 3:
goto L19;
default:
goto L18;
}
L21:;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=75U;
si0=f15022(i,si0);
l7=si0;
si0=!(si0);
if(si0){
goto L9;
}
si0=l7;
si1=16961664U;
si2=75U;
si0=f15143(i,si0,si1,si2);
l7=si0;
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l0;
sj1=322122547275ULL;
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l0;
si1=l7;
i32_store(&i->m0,(U64)si0,si1);
goto L1;
L20:;
si0=l7;
si1=44U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L17;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0+8U);
l6=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0);
l8=si0;
si0=l4;
si1=l7;
si2=24U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+56U,sj1);
si0=l4;
si1=l7;
sj1=i64_load(&i->m0,(U64)si1+16U);
i64_store(&i->m0,(U64)si0+48U,sj1);
si0=l4;
si1=l7;
sj1=i64_load(&i->m0,(U64)si1+8U);
i64_store(&i->m0,(U64)si0+72U,sj1);
si0=l4;
si1=l7;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+64U,sj1);
si0=l4;
si1=48U;
si0+=si1;
si1=l8;
si2=l6;
f2027(i,si0,si1,si2);
si0=l4;
si1=l7;
si2=32U;
si1+=si2;
si2=l4;
sj2=i64_load(&i->m0,(U64)si2+72U);
l9=sj2;
sj3=56ULL;
sj2<<=(sj3&63);
sj3=l9;
sj4=65280ULL;
sj3&=sj4;
sj4=40ULL;
sj3<<=(sj4&63);
sj2|=sj3;
sj3=l9;
sj4=16711680ULL;
sj3&=sj4;
sj4=24ULL;
sj3<<=(sj4&63);
sj4=l9;
sj5=4278190080ULL;
sj4&=sj5;
sj5=8ULL;
sj4<<=(sj5&63);
sj3|=sj4;
sj2|=sj3;
sj3=l9;
sj4=8ULL;
sj3>>=(sj4&63);
sj4=4278190080ULL;
sj3&=sj4;
sj4=l9;
sj5=24ULL;
sj4>>=(sj5&63);
sj5=16711680ULL;
sj4&=sj5;
sj3|=sj4;
sj4=l9;
sj5=40ULL;
sj4>>=(sj5&63);
sj5=65280ULL;
sj4&=sj5;
sj5=l9;
sj6=56ULL;
sj5>>=(sj6&63);
sj4|=sj5;
sj3|=sj4;
sj2|=sj3;
si3=l4;
sj3=i64_load(&i->m0,(U64)si3+64U);
l10=sj3;
sj2*=sj3;
sj3=l10;
sj4=56ULL;
sj3<<=(sj4&63);
sj4=l10;
sj5=65280ULL;
sj4&=sj5;
sj5=40ULL;
sj4<<=(sj5&63);
sj3|=sj4;
sj4=l10;
sj5=16711680ULL;
sj4&=sj5;
sj5=24ULL;
sj4<<=(sj5&63);
sj5=l10;
sj6=4278190080ULL;
sj5&=sj6;
sj6=8ULL;
sj5<<=(sj6&63);
sj4|=sj5;
sj3|=sj4;
sj4=l10;
sj5=8ULL;
sj4>>=(sj5&63);
sj5=4278190080ULL;
sj4&=sj5;
sj5=l10;
sj6=24ULL;
sj5>>=(sj6&63);
sj6=16711680ULL;
sj5&=sj6;
sj4|=sj5;
sj5=l10;
sj6=40ULL;
sj5>>=(sj6&63);
sj6=65280ULL;
sj5&=sj6;
sj6=l10;
sj7=56ULL;
sj6>>=(sj7&63);
sj5|=sj6;
sj4|=sj5;
sj3|=sj4;
sj4=l9;
sj5=-1ULL;
sj4^=sj5;
sj3*=sj4;
l9=sj3;
sj4=56ULL;
sj3<<=(sj4&63);
sj4=l9;
sj5=65280ULL;
sj4&=sj5;
sj5=40ULL;
sj4<<=(sj5&63);
sj3|=sj4;
sj4=l9;
sj5=16711680ULL;
sj4&=sj5;
sj5=24ULL;
sj4<<=(sj5&63);
sj5=l9;
sj6=4278190080ULL;
sj5&=sj6;
sj6=8ULL;
sj5<<=(sj6&63);
sj4|=sj5;
sj3|=sj4;
sj4=l9;
sj5=8ULL;
sj4>>=(sj5&63);
sj5=4278190080ULL;
sj4&=sj5;
sj5=l9;
sj6=24ULL;
sj5>>=(sj6&63);
sj6=16711680ULL;
sj5&=sj6;
sj4|=sj5;
sj5=l9;
sj6=40ULL;
sj5>>=(sj6&63);
sj6=65280ULL;
sj5&=sj6;
sj6=l9;
sj7=56ULL;
sj6>>=(sj7&63);
sj5|=sj6;
sj4|=sj5;
sj3|=sj4;
sj2^=sj3;
sj3=l10;
sj2=I64_ROTL(sj2,sj3);
si2=(U32)(sj2);
si3=l2;
f2056(i,si0,si1,si2,si3);
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
si1=1U;
si0=si0 != si1;
if(si0){
goto L17;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0+4U);
l6=si0;
si1=l7;
si2=56U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
l8=si1;
si0=si0 < si1;
if(si0){
goto L16;
}
si0=l6;
si1=l8;
si2=16969740U;
f594(i,si0,si1,si2);
UNREACHABLE;
L19:;
si0=l7;
si1=44U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L15;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0+8U);
l6=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0);
l8=si0;
si0=l4;
si1=l7;
si2=24U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+56U,sj1);
si0=l4;
si1=l7;
sj1=i64_load(&i->m0,(U64)si1+16U);
i64_store(&i->m0,(U64)si0+48U,sj1);
si0=l4;
si1=l7;
sj1=i64_load(&i->m0,(U64)si1+8U);
i64_store(&i->m0,(U64)si0+72U,sj1);
si0=l4;
si1=l7;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+64U,sj1);
si0=l4;
si1=48U;
si0+=si1;
si1=l8;
si2=l6;
f2027(i,si0,si1,si2);
si0=l4;
si1=8U;
si0+=si1;
si1=l7;
si2=32U;
si1+=si2;
si2=l4;
sj2=i64_load(&i->m0,(U64)si2+72U);
l9=sj2;
sj3=56ULL;
sj2<<=(sj3&63);
sj3=l9;
sj4=65280ULL;
sj3&=sj4;
sj4=40ULL;
sj3<<=(sj4&63);
sj2|=sj3;
sj3=l9;
sj4=16711680ULL;
sj3&=sj4;
sj4=24ULL;
sj3<<=(sj4&63);
sj4=l9;
sj5=4278190080ULL;
sj4&=sj5;
sj5=8ULL;
sj4<<=(sj5&63);
sj3|=sj4;
sj2|=sj3;
sj3=l9;
sj4=8ULL;
sj3>>=(sj4&63);
sj4=4278190080ULL;
sj3&=sj4;
sj4=l9;
sj5=24ULL;
sj4>>=(sj5&63);
sj5=16711680ULL;
sj4&=sj5;
sj3|=sj4;
sj4=l9;
sj5=40ULL;
sj4>>=(sj5&63);
sj5=65280ULL;
sj4&=sj5;
sj5=l9;
sj6=56ULL;
sj5>>=(sj6&63);
sj4|=sj5;
sj3|=sj4;
sj2|=sj3;
si3=l4;
sj3=i64_load(&i->m0,(U64)si3+64U);
l10=sj3;
sj2*=sj3;
sj3=l10;
sj4=56ULL;
sj3<<=(sj4&63);
sj4=l10;
sj5=65280ULL;
sj4&=sj5;
sj5=40ULL;
sj4<<=(sj5&63);
sj3|=sj4;
sj4=l10;
sj5=16711680ULL;
sj4&=sj5;
sj5=24ULL;
sj4<<=(sj5&63);
sj5=l10;
sj6=4278190080ULL;
sj5&=sj6;
sj6=8ULL;
sj5<<=(sj6&63);
sj4|=sj5;
sj3|=sj4;
sj4=l10;
sj5=8ULL;
sj4>>=(sj5&63);
sj5=4278190080ULL;
sj4&=sj5;
sj5=l10;
sj6=24ULL;
sj5>>=(sj6&63);
sj6=16711680ULL;
sj5&=sj6;
sj4|=sj5;
sj5=l10;
sj6=40ULL;
sj5>>=(sj6&63);
sj6=65280ULL;
sj5&=sj6;
sj6=l10;
sj7=56ULL;
sj6>>=(sj7&63);
sj5|=sj6;
sj4|=sj5;
sj3|=sj4;
sj4=l9;
sj5=-1ULL;
sj4^=sj5;
sj3*=sj4;
l9=sj3;
sj4=56ULL;
sj3<<=(sj4&63);
sj4=l9;
sj5=65280ULL;
sj4&=sj5;
sj5=40ULL;
sj4<<=(sj5&63);
sj3|=sj4;
sj4=l9;
sj5=16711680ULL;
sj4&=sj5;
sj5=24ULL;
sj4<<=(sj5&63);
sj5=l9;
sj6=4278190080ULL;
sj5&=sj6;
sj6=8ULL;
sj5<<=(sj6&63);
sj4|=sj5;
sj3|=sj4;
sj4=l9;
sj5=8ULL;
sj4>>=(sj5&63);
sj5=4278190080ULL;
sj4&=sj5;
sj5=l9;
sj6=24ULL;
sj5>>=(sj6&63);
sj6=16711680ULL;
sj5&=sj6;
sj4|=sj5;
sj5=l9;
sj6=40ULL;
sj5>>=(sj6&63);
sj6=65280ULL;
sj5&=sj6;
sj6=l9;
sj7=56ULL;
sj6>>=(sj7&63);
sj5|=sj6;
sj4|=sj5;
sj3|=sj4;
sj2^=sj3;
sj3=l10;
sj2=I64_ROTL(sj2,sj3);
si2=(U32)(sj2);
si3=l2;
f2056(i,si0,si1,si2,si3);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+8U);
si1=1U;
si0=si0 != si1;
if(si0){
goto L15;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0+12U);
l6=si0;
si1=l7;
si2=56U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
l8=si1;
si0=si0 < si1;
if(si0){
goto L14;
}
si0=l6;
si1=l8;
si2=16969740U;
f594(i,si0,si1,si2);
UNREACHABLE;
L18:;
si0=l2;
si1=3U;
i32_store8(&i->m0,(U64)si0+14U,si1);
goto L2;
L17:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+8U);
l6=si0;
if(si0){
goto L23;
}
si0=l2;
si0=i32_load16_u(&i->m0,(U64)si0+12U);
l3=si0;
si0=1U;
l8=si0;
si0=1U;
l2=si0;
goto L22;
L23:;
si0=l6;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L8;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=l6;
si0=f15022(i,si0);
l8=si0;
si0=!(si0);
if(si0){
goto L7;
}
si0=l8;
si1=l3;
si2=l6;
si0=f15143(i,si0,si1,si2);
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=l2;
si0=i32_load16_u(&i->m0,(U64)si0+12U);
l3=si0;
si0=l6;
si0=f15022(i,si0);
l2=si0;
si0=!(si0);
if(si0){
goto L6;
}
L22:;
si0=l2;
si1=l8;
si2=l6;
si0=f15143(i,si0,si1,si2);
l2=si0;
si0=l4;
si1=5U;
i32_store8(&i->m0,(U64)si0+30U,si1);
si0=l4;
si1=l3;
i32_store16(&i->m0,(U64)si0+28U,si1);
si0=l4;
si1=l6;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l4;
si1=l6;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l4;
si1=l8;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l4;
si1=l7;
si2=24U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+56U,sj1);
si0=l4;
si1=l7;
sj1=i64_load(&i->m0,(U64)si1+16U);
i64_store(&i->m0,(U64)si0+48U,sj1);
si0=l4;
si1=l7;
sj1=i64_load(&i->m0,(U64)si1+8U);
i64_store(&i->m0,(U64)si0+72U,sj1);
si0=l4;
si1=l7;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+64U,sj1);
si0=l4;
si1=48U;
si0+=si1;
si1=l2;
si2=l6;
f2027(i,si0,si1,si2);
si0=l4;
sj0=i64_load(&i->m0,(U64)si0+72U);
l9=sj0;
si0=l4;
sj0=i64_load(&i->m0,(U64)si0+64U);
l10=sj0;
si0=l4;
si1=l6;
i32_store(&i->m0,(U64)si0+44U,si1);
si0=l4;
si1=l6;
i32_store(&i->m0,(U64)si0+40U,si1);
si0=l4;
si1=l2;
i32_store(&i->m0,(U64)si0+36U,si1);
si0=l4;
si1=48U;
si0+=si1;
si1=l7;
si2=32U;
si1+=si2;
sj2=l10;
sj3=l9;
sj4=56ULL;
sj3<<=(sj4&63);
sj4=l9;
sj5=65280ULL;
sj4&=sj5;
sj5=40ULL;
sj4<<=(sj5&63);
sj3|=sj4;
sj4=l9;
sj5=16711680ULL;
sj4&=sj5;
sj5=24ULL;
sj4<<=(sj5&63);
sj5=l9;
sj6=4278190080ULL;
sj5&=sj6;
sj6=8ULL;
sj5<<=(sj6&63);
sj4|=sj5;
sj3|=sj4;
sj4=l9;
sj5=8ULL;
sj4>>=(sj5&63);
sj5=4278190080ULL;
sj4&=sj5;
sj5=l9;
sj6=24ULL;
sj5>>=(sj6&63);
sj6=16711680ULL;
sj5&=sj6;
sj4|=sj5;
sj5=l9;
sj6=40ULL;
sj5>>=(sj6&63);
sj6=65280ULL;
sj5&=sj6;
sj6=l9;
sj7=56ULL;
sj6>>=(sj7&63);
sj5|=sj6;
sj4|=sj5;
sj3|=sj4;
sj2*=sj3;
sj3=l10;
sj4=56ULL;
sj3<<=(sj4&63);
sj4=l10;
sj5=65280ULL;
sj4&=sj5;
sj5=40ULL;
sj4<<=(sj5&63);
sj3|=sj4;
sj4=l10;
sj5=16711680ULL;
sj4&=sj5;
sj5=24ULL;
sj4<<=(sj5&63);
sj5=l10;
sj6=4278190080ULL;
sj5&=sj6;
sj6=8ULL;
sj5<<=(sj6&63);
sj4|=sj5;
sj3|=sj4;
sj4=l10;
sj5=8ULL;
sj4>>=(sj5&63);
sj5=4278190080ULL;
sj4&=sj5;
sj5=l10;
sj6=24ULL;
sj5>>=(sj6&63);
sj6=16711680ULL;
sj5&=sj6;
sj4|=sj5;
sj5=l10;
sj6=40ULL;
sj5>>=(sj6&63);
sj6=65280ULL;
sj5&=sj6;
sj6=l10;
sj7=56ULL;
sj6>>=(sj7&63);
sj5|=sj6;
sj4|=sj5;
sj3|=sj4;
sj4=l9;
sj5=-1ULL;
sj4^=sj5;
sj3*=sj4;
l9=sj3;
sj4=56ULL;
sj3<<=(sj4&63);
sj4=l9;
sj5=65280ULL;
sj4&=sj5;
sj5=40ULL;
sj4<<=(sj5&63);
sj3|=sj4;
sj4=l9;
sj5=16711680ULL;
sj4&=sj5;
sj5=24ULL;
sj4<<=(sj5&63);
sj5=l9;
sj6=4278190080ULL;
sj5&=sj6;
sj6=8ULL;
sj5<<=(sj6&63);
sj4|=sj5;
sj3|=sj4;
sj4=l9;
sj5=8ULL;
sj4>>=(sj5&63);
sj5=4278190080ULL;
sj4&=sj5;
sj5=l9;
sj6=24ULL;
sj5>>=(sj6&63);
sj6=16711680ULL;
sj5&=sj6;
sj4|=sj5;
sj5=l9;
sj6=40ULL;
sj5>>=(sj6&63);
sj6=65280ULL;
sj5&=sj6;
sj6=l9;
sj7=56ULL;
sj6>>=(sj7&63);
sj5|=sj6;
sj4|=sj5;
sj3|=sj4;
sj2^=sj3;
sj3=l10;
sj2=I64_ROTL(sj2,sj3);
si2=(U32)(sj2);
si3=l4;
si4=36U;
si3+=si4;
si4=l4;
si5=16U;
si4+=si5;
f2055(i,si0,si1,si2,si3,si4);
si0=l4;
si1=66U;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=6U;
si0=si0 == si1;
if(si0){
goto L2;
}
si0=l4;
si1=56U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L2;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0+52U);
f15024(i,si0);
goto L2;
L16:;
si0=l7;
si1=48U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=l6;
si2=5U;
si1<<=(si2&31);
si0+=si1;
l6=si0;
si1=30U;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
l7=si0;
if(si0){
goto L24;
}
si0=l6;
si1=28U;
si0+=si1;
l6=si0;
si1=l6;
si1=i32_load16_u(&i->m0,(U64)si1);
si2=2U;
si1|=si2;
i32_store16(&i->m0,(U64)si0,si1);
L24:;
si0=l2;
si1=l7;
si2=4U;
si3=l7;
si4=6U;
si3&=si4;
si4=2U;
si3=si3 == si4;
si1=si3?si1:si2;
i32_store8(&i->m0,(U64)si0+14U,si1);
goto L2;
L15:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+8U);
l6=si0;
if(si0){
goto L26;
}
si0=l2;
si0=i32_load16_u(&i->m0,(U64)si0+12U);
l11=si0;
si0=1U;
l8=si0;
si0=1U;
l5=si0;
goto L25;
L26:;
si0=l6;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L8;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=l6;
si0=f15022(i,si0);
l8=si0;
si0=!(si0);
if(si0){
goto L5;
}
si0=l8;
si1=l5;
si2=l6;
si0=f15143(i,si0,si1,si2);
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=l2;
si0=i32_load16_u(&i->m0,(U64)si0+12U);
l11=si0;
si0=l6;
si0=f15022(i,si0);
l5=si0;
si0=!(si0);
if(si0){
goto L4;
}
L25:;
si0=l5;
si1=l8;
si2=l6;
si0=f15143(i,si0,si1,si2);
l5=si0;
si0=l4;
si1=4U;
i32_store8(&i->m0,(U64)si0+30U,si1);
si0=l4;
si1=l11;
i32_store16(&i->m0,(U64)si0+28U,si1);
si0=l4;
si1=l6;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l4;
si1=l6;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l4;
si1=l8;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l4;
si1=l7;
si2=24U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+56U,sj1);
si0=l4;
si1=l7;
sj1=i64_load(&i->m0,(U64)si1+16U);
i64_store(&i->m0,(U64)si0+48U,sj1);
si0=l4;
si1=l7;
sj1=i64_load(&i->m0,(U64)si1+8U);
i64_store(&i->m0,(U64)si0+72U,sj1);
si0=l4;
si1=l7;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+64U,sj1);
si0=l4;
si1=48U;
si0+=si1;
si1=l5;
si2=l6;
f2027(i,si0,si1,si2);
si0=l4;
sj0=i64_load(&i->m0,(U64)si0+72U);
l9=sj0;
si0=l4;
sj0=i64_load(&i->m0,(U64)si0+64U);
l10=sj0;
si0=l4;
si1=l6;
i32_store(&i->m0,(U64)si0+44U,si1);
si0=l4;
si1=l6;
i32_store(&i->m0,(U64)si0+40U,si1);
si0=l4;
si1=l5;
i32_store(&i->m0,(U64)si0+36U,si1);
si0=l4;
si1=48U;
si0+=si1;
si1=l7;
si2=32U;
si1+=si2;
sj2=l10;
sj3=l9;
sj4=56ULL;
sj3<<=(sj4&63);
sj4=l9;
sj5=65280ULL;
sj4&=sj5;
sj5=40ULL;
sj4<<=(sj5&63);
sj3|=sj4;
sj4=l9;
sj5=16711680ULL;
sj4&=sj5;
sj5=24ULL;
sj4<<=(sj5&63);
sj5=l9;
sj6=4278190080ULL;
sj5&=sj6;
sj6=8ULL;
sj5<<=(sj6&63);
sj4|=sj5;
sj3|=sj4;
sj4=l9;
sj5=8ULL;
sj4>>=(sj5&63);
sj5=4278190080ULL;
sj4&=sj5;
sj5=l9;
sj6=24ULL;
sj5>>=(sj6&63);
sj6=16711680ULL;
sj5&=sj6;
sj4|=sj5;
sj5=l9;
sj6=40ULL;
sj5>>=(sj6&63);
sj6=65280ULL;
sj5&=sj6;
sj6=l9;
sj7=56ULL;
sj6>>=(sj7&63);
sj5|=sj6;
sj4|=sj5;
sj3|=sj4;
sj2*=sj3;
sj3=l10;
sj4=56ULL;
sj3<<=(sj4&63);
sj4=l10;
sj5=65280ULL;
sj4&=sj5;
sj5=40ULL;
sj4<<=(sj5&63);
sj3|=sj4;
sj4=l10;
sj5=16711680ULL;
sj4&=sj5;
sj5=24ULL;
sj4<<=(sj5&63);
sj5=l10;
sj6=4278190080ULL;
sj5&=sj6;
sj6=8ULL;
sj5<<=(sj6&63);
sj4|=sj5;
sj3|=sj4;
sj4=l10;
sj5=8ULL;
sj4>>=(sj5&63);
sj5=4278190080ULL;
sj4&=sj5;
sj5=l10;
sj6=24ULL;
sj5>>=(sj6&63);
sj6=16711680ULL;
sj5&=sj6;
sj4|=sj5;
sj5=l10;
sj6=40ULL;
sj5>>=(sj6&63);
sj6=65280ULL;
sj5&=sj6;
sj6=l10;
sj7=56ULL;
sj6>>=(sj7&63);
sj5|=sj6;
sj4|=sj5;
sj3|=sj4;
sj4=l9;
sj5=-1ULL;
sj4^=sj5;
sj3*=sj4;
l9=sj3;
sj4=56ULL;
sj3<<=(sj4&63);
sj4=l9;
sj5=65280ULL;
sj4&=sj5;
sj5=40ULL;
sj4<<=(sj5&63);
sj3|=sj4;
sj4=l9;
sj5=16711680ULL;
sj4&=sj5;
sj5=24ULL;
sj4<<=(sj5&63);
sj5=l9;
sj6=4278190080ULL;
sj5&=sj6;
sj6=8ULL;
sj5<<=(sj6&63);
sj4|=sj5;
sj3|=sj4;
sj4=l9;
sj5=8ULL;
sj4>>=(sj5&63);
sj5=4278190080ULL;
sj4&=sj5;
sj5=l9;
sj6=24ULL;
sj5>>=(sj6&63);
sj6=16711680ULL;
sj5&=sj6;
sj4|=sj5;
sj5=l9;
sj6=40ULL;
sj5>>=(sj6&63);
sj6=65280ULL;
sj5&=sj6;
sj6=l9;
sj7=56ULL;
sj6>>=(sj7&63);
sj5|=sj6;
sj4|=sj5;
sj3|=sj4;
sj2^=sj3;
sj3=l10;
sj2=I64_ROTL(sj2,sj3);
si2=(U32)(sj2);
si3=l4;
si4=36U;
si3+=si4;
si4=l4;
si5=16U;
si4+=si5;
f2055(i,si0,si1,si2,si3,si4);
si0=l4;
si1=66U;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=6U;
si0=si0 == si1;
if(si0){
goto L3;
}
si0=l4;
si1=56U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L3;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0+52U);
f15024(i,si0);
goto L3;
L14:;
si0=l7;
si1=48U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=l6;
si2=5U;
si1<<=(si2&31);
si0+=si1;
si1=28U;
si0+=si1;
l7=si0;
si0=i32_load16_u(&i->m0,(U64)si0);
l6=si0;
si1=128U;
si0&=si1;
si0=!(si0);
if(si0){
goto L27;
}
si0=l4;
si1=60U;
si0+=si1;
sj1=1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=1U;
i32_store(&i->m0,(U64)si0+52U,si1);
si0=l4;
si1=16961656U;
i32_store(&i->m0,(U64)si0+48U,si1);
si0=l4;
si1=536U;
i32_store(&i->m0,(U64)si0+40U,si1);
si0=l4;
si1=l2;
i32_store(&i->m0,(U64)si0+36U,si1);
si0=l4;
si1=l4;
si2=36U;
si1+=si2;
i32_store(&i->m0,(U64)si0+56U,si1);
si0=l4;
si1=16U;
si0+=si1;
si1=l4;
si2=48U;
si1+=si2;
f64(i,si0,si1);
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
si0=l0;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1+16U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0+12U,si1);
goto L1;
L27:;
si0=l7;
si1=l6;
si2=2U;
si1|=si2;
i32_store16(&i->m0,(U64)si0,si1);
goto L3;
L10:;
si0=16961489U;
si1=43U;
si2=16961568U;
f604(i,si0,si1,si2);
UNREACHABLE;
L9:;
si0=1U;
si1=75U;
f52(i,si0,si1);
UNREACHABLE;
L8:;
f53(i);
UNREACHABLE;
L7:;
si0=1U;
si1=l6;
f52(i,si0,si1);
UNREACHABLE;
L6:;
si0=1U;
si1=l6;
f52(i,si0,si1);
UNREACHABLE;
L5:;
si0=1U;
si1=l6;
f52(i,si0,si1);
UNREACHABLE;
L4:;
si0=1U;
si1=l6;
f52(i,si0,si1);
UNREACHABLE;
L3:;
si0=l4;
si1=48U;
si0+=si1;
si1=l1;
si2=l2;
si3=l3;
si4=1U;
si3+=si4;
f1777(i,si0,si1,si2,si3);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+48U);
l7=si0;
si0=!(si0);
if(si0){
goto L2;
}
si0=l0;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1+52U);
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l0;
si1=12U;
si0+=si1;
si1=l4;
si2=48U;
si1+=si2;
si2=12U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=l7;
i32_store(&i->m0,(U64)si0,si1);
goto L1;
L2:;
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
L1:;
si0=l4;
si1=80U;
si0+=si1;
i->g0=si0;
L0:;
}

U32 f1778(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 l8=0;
U32 l9=0;
U64 l10=0;
U64 l11=0;
U32 l12=0;
U32 l13=0;
U32 si0,si1,si2,si3,si4,si5;
U64 sj0,sj1,sj2,sj3,sj4,sj5,sj6,sj7;
si0=i->g0;
si1=96U;
si0-=si1;
l4=si0;
i->g0=si0;
si0=l1;
si0=!(si0);
if(si0){
goto L4;
}
si0=l0;
si1=-4U;
si0+=si1;
l5=si0;
si0=l1;
si1=2U;
si0<<=(si1&31);
l6=si0;
si0=0U;
l7=si0;
si0=l3;
si1=9U;
si0=si0 != si1;
l8=si0;
L5:;
{
si0=l5;
si1=l6;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l9=si0;
si0=i32_load8_u(&i->m0,(U64)si0+64U);
switch(si0){
case 0:
goto L6;
case 1:
goto L8;
default:
goto L7;
}
L8:;
si0=l8;
if(si0){
goto L6;
}
si0=l2;
si1=16961480U;
si2=9U;
si0=f15142(i,si0,si1,si2);
if(si0){
goto L6;
}
L7:;
si0=l9;
si1=44U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L6;
}
si0=l4;
si1=l9;
sj1=i64_load(&i->m0,(U64)si1+16U);
i64_store(&i->m0,(U64)si0+64U,sj1);
si0=l4;
si1=l9;
sj1=i64_load(&i->m0,(U64)si1+8U);
i64_store(&i->m0,(U64)si0+88U,sj1);
si0=l4;
si1=l9;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+80U,sj1);
si0=l4;
si1=l9;
si2=24U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+72U,sj1);
si0=l4;
si1=64U;
si0+=si1;
si1=l2;
si2=l3;
f2027(i,si0,si1,si2);
si0=l4;
si1=24U;
si0+=si1;
si1=l9;
si2=32U;
si1+=si2;
si2=l4;
sj2=i64_load(&i->m0,(U64)si2+88U);
l10=sj2;
sj3=56ULL;
sj2<<=(sj3&63);
sj3=l10;
sj4=65280ULL;
sj3&=sj4;
sj4=40ULL;
sj3<<=(sj4&63);
sj2|=sj3;
sj3=l10;
sj4=16711680ULL;
sj3&=sj4;
sj4=24ULL;
sj3<<=(sj4&63);
sj4=l10;
sj5=4278190080ULL;
sj4&=sj5;
sj5=8ULL;
sj4<<=(sj5&63);
sj3|=sj4;
sj2|=sj3;
sj3=l10;
sj4=8ULL;
sj3>>=(sj4&63);
sj4=4278190080ULL;
sj3&=sj4;
sj4=l10;
sj5=24ULL;
sj4>>=(sj5&63);
sj5=16711680ULL;
sj4&=sj5;
sj3|=sj4;
sj4=l10;
sj5=40ULL;
sj4>>=(sj5&63);
sj5=65280ULL;
sj4&=sj5;
sj5=l10;
sj6=56ULL;
sj5>>=(sj6&63);
sj4|=sj5;
sj3|=sj4;
sj2|=sj3;
si3=l4;
sj3=i64_load(&i->m0,(U64)si3+80U);
l11=sj3;
sj2*=sj3;
sj3=l11;
sj4=56ULL;
sj3<<=(sj4&63);
sj4=l11;
sj5=65280ULL;
sj4&=sj5;
sj5=40ULL;
sj4<<=(sj5&63);
sj3|=sj4;
sj4=l11;
sj5=16711680ULL;
sj4&=sj5;
sj5=24ULL;
sj4<<=(sj5&63);
sj5=l11;
sj6=4278190080ULL;
sj5&=sj6;
sj6=8ULL;
sj5<<=(sj6&63);
sj4|=sj5;
sj3|=sj4;
sj4=l11;
sj5=8ULL;
sj4>>=(sj5&63);
sj5=4278190080ULL;
sj4&=sj5;
sj5=l11;
sj6=24ULL;
sj5>>=(sj6&63);
sj6=16711680ULL;
sj5&=sj6;
sj4|=sj5;
sj5=l11;
sj6=40ULL;
sj5>>=(sj6&63);
sj6=65280ULL;
sj5&=sj6;
sj6=l11;
sj7=56ULL;
sj6>>=(sj7&63);
sj5|=sj6;
sj4|=sj5;
sj3|=sj4;
sj4=l10;
sj5=-1ULL;
sj4^=sj5;
sj3*=sj4;
l10=sj3;
sj4=56ULL;
sj3<<=(sj4&63);
sj4=l10;
sj5=65280ULL;
sj4&=sj5;
sj5=40ULL;
sj4<<=(sj5&63);
sj3|=sj4;
sj4=l10;
sj5=16711680ULL;
sj4&=sj5;
sj5=24ULL;
sj4<<=(sj5&63);
sj5=l10;
sj6=4278190080ULL;
sj5&=sj6;
sj6=8ULL;
sj5<<=(sj6&63);
sj4|=sj5;
sj3|=sj4;
sj4=l10;
sj5=8ULL;
sj4>>=(sj5&63);
sj5=4278190080ULL;
sj4&=sj5;
sj5=l10;
sj6=24ULL;
sj5>>=(sj6&63);
sj6=16711680ULL;
sj5&=sj6;
sj4|=sj5;
sj5=l10;
sj6=40ULL;
sj5>>=(sj6&63);
sj6=65280ULL;
sj5&=sj6;
sj6=l10;
sj7=56ULL;
sj6>>=(sj7&63);
sj5|=sj6;
sj4|=sj5;
sj3|=sj4;
sj2^=sj3;
sj3=l11;
sj2=I64_ROTL(sj2,sj3);
si2=(U32)(sj2);
si3=l2;
si4=l3;
f2059(i,si0,si1,si2,si3,si4);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+24U);
si1=1U;
si0=si0 != si1;
if(si0){
goto L6;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0+28U);
l12=si0;
si1=l9;
si2=56U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
l13=si1;
si0=si0 >= si1;
if(si0){
goto L2;
}
si0=2U;
l13=si0;
si0=l9;
si1=48U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=l12;
si2=5U;
si1<<=(si2&31);
si0+=si1;
l9=si0;
si1=30U;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=-2U;
si0+=si1;
switch(si0){
case 0:
goto L1;
case 1:
goto L6;
default:
goto L9;
}
L9:;
si0=l9;
si1=28U;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=150U;
si0&=si1;
if(si0){
goto L3;
}
L6:;
si0=l7;
si1=-1U;
si0+=si1;
l7=si0;
si0=l6;
si1=-4U;
si0+=si1;
l6=si0;
if(si0){
goto L5;
}
}
L4:;
si0=6U;
l13=si0;
goto L1;
L3:;
si0=l7;
if(si0){
goto L10;
}
si0=4U;
l13=si0;
goto L1;
L10:;
si0=l1;
si1=2U;
si0<<=(si1&31);
l9=si0;
si0=l0;
si1=-4U;
si0+=si1;
l5=si0;
si0=4U;
l13=si0;
si0=l3;
si1=-1U;
si0=(U32)((I32)si0>(I32)si1);
l1=si0;
L11:;
{
si0=l9;
si0=!(si0);
if(si0){
goto L1;
}
si0=l5;
si1=l9;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si0=i32_load8_u(&i->m0,(U64)si0+64U);
si1=1U;
si0=si0 != si1;
if(si0){
goto L22;
}
si0=l6;
si1=44U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L20;
}
si0=l4;
si1=l6;
sj1=i64_load(&i->m0,(U64)si1+16U);
i64_store(&i->m0,(U64)si0+64U,sj1);
si0=l4;
si1=l6;
sj1=i64_load(&i->m0,(U64)si1+8U);
i64_store(&i->m0,(U64)si0+88U,sj1);
si0=l4;
si1=l6;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+80U,sj1);
si0=l4;
si1=l6;
si2=24U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+72U,sj1);
si0=l4;
si1=64U;
si0+=si1;
si1=l2;
si2=l3;
f2027(i,si0,si1,si2);
si0=l4;
si1=8U;
si0+=si1;
si1=l6;
si2=32U;
si1+=si2;
si2=l4;
sj2=i64_load(&i->m0,(U64)si2+88U);
l10=sj2;
sj3=56ULL;
sj2<<=(sj3&63);
sj3=l10;
sj4=65280ULL;
sj3&=sj4;
sj4=40ULL;
sj3<<=(sj4&63);
sj2|=sj3;
sj3=l10;
sj4=16711680ULL;
sj3&=sj4;
sj4=24ULL;
sj3<<=(sj4&63);
sj4=l10;
sj5=4278190080ULL;
sj4&=sj5;
sj5=8ULL;
sj4<<=(sj5&63);
sj3|=sj4;
sj2|=sj3;
sj3=l10;
sj4=8ULL;
sj3>>=(sj4&63);
sj4=4278190080ULL;
sj3&=sj4;
sj4=l10;
sj5=24ULL;
sj4>>=(sj5&63);
sj5=16711680ULL;
sj4&=sj5;
sj3|=sj4;
sj4=l10;
sj5=40ULL;
sj4>>=(sj5&63);
sj5=65280ULL;
sj4&=sj5;
sj5=l10;
sj6=56ULL;
sj5>>=(sj6&63);
sj4|=sj5;
sj3|=sj4;
sj2|=sj3;
si3=l4;
sj3=i64_load(&i->m0,(U64)si3+80U);
l11=sj3;
sj2*=sj3;
sj3=l11;
sj4=56ULL;
sj3<<=(sj4&63);
sj4=l11;
sj5=65280ULL;
sj4&=sj5;
sj5=40ULL;
sj4<<=(sj5&63);
sj3|=sj4;
sj4=l11;
sj5=16711680ULL;
sj4&=sj5;
sj5=24ULL;
sj4<<=(sj5&63);
sj5=l11;
sj6=4278190080ULL;
sj5&=sj6;
sj6=8ULL;
sj5<<=(sj6&63);
sj4|=sj5;
sj3|=sj4;
sj4=l11;
sj5=8ULL;
sj4>>=(sj5&63);
sj5=4278190080ULL;
sj4&=sj5;
sj5=l11;
sj6=24ULL;
sj5>>=(sj6&63);
sj6=16711680ULL;
sj5&=sj6;
sj4|=sj5;
sj5=l11;
sj6=40ULL;
sj5>>=(sj6&63);
sj6=65280ULL;
sj5&=sj6;
sj6=l11;
sj7=56ULL;
sj6>>=(sj7&63);
sj5|=sj6;
sj4|=sj5;
sj3|=sj4;
sj4=l10;
sj5=-1ULL;
sj4^=sj5;
sj3*=sj4;
l10=sj3;
sj4=56ULL;
sj3<<=(sj4&63);
sj4=l10;
sj5=65280ULL;
sj4&=sj5;
sj5=40ULL;
sj4<<=(sj5&63);
sj3|=sj4;
sj4=l10;
sj5=16711680ULL;
sj4&=sj5;
sj5=24ULL;
sj4<<=(sj5&63);
sj5=l10;
sj6=4278190080ULL;
sj5&=sj6;
sj6=8ULL;
sj5<<=(sj6&63);
sj4|=sj5;
sj3|=sj4;
sj4=l10;
sj5=8ULL;
sj4>>=(sj5&63);
sj5=4278190080ULL;
sj4&=sj5;
sj5=l10;
sj6=24ULL;
sj5>>=(sj6&63);
sj6=16711680ULL;
sj5&=sj6;
sj4|=sj5;
sj5=l10;
sj6=40ULL;
sj5>>=(sj6&63);
sj6=65280ULL;
sj5&=sj6;
sj6=l10;
sj7=56ULL;
sj6>>=(sj7&63);
sj5|=sj6;
sj4|=sj5;
sj3|=sj4;
sj2^=sj3;
sj3=l11;
sj2=I64_ROTL(sj2,sj3);
si2=(U32)(sj2);
si3=l2;
si4=l3;
f2059(i,si0,si1,si2,si3,si4);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+8U);
si1=1U;
si0=si0 != si1;
if(si0){
goto L20;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0+12U);
l8=si0;
si1=l6;
si2=56U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
l12=si1;
si0=si0 < si1;
if(si0){
goto L21;
}
si0=l8;
si1=l12;
si2=16969740U;
f594(i,si0,si1,si2);
UNREACHABLE;
L22:;
si0=l6;
si1=44U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L23;
}
si0=l4;
si1=l6;
sj1=i64_load(&i->m0,(U64)si1+16U);
i64_store(&i->m0,(U64)si0+64U,sj1);
si0=l4;
si1=l6;
sj1=i64_load(&i->m0,(U64)si1+8U);
i64_store(&i->m0,(U64)si0+88U,sj1);
si0=l4;
si1=l6;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+80U,sj1);
si0=l4;
si1=l6;
si2=24U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+72U,sj1);
si0=l4;
si1=64U;
si0+=si1;
si1=l2;
si2=l3;
f2027(i,si0,si1,si2);
si0=l4;
si1=16U;
si0+=si1;
si1=l6;
si2=32U;
si1+=si2;
si2=l4;
sj2=i64_load(&i->m0,(U64)si2+88U);
l10=sj2;
sj3=56ULL;
sj2<<=(sj3&63);
sj3=l10;
sj4=65280ULL;
sj3&=sj4;
sj4=40ULL;
sj3<<=(sj4&63);
sj2|=sj3;
sj3=l10;
sj4=16711680ULL;
sj3&=sj4;
sj4=24ULL;
sj3<<=(sj4&63);
sj4=l10;
sj5=4278190080ULL;
sj4&=sj5;
sj5=8ULL;
sj4<<=(sj5&63);
sj3|=sj4;
sj2|=sj3;
sj3=l10;
sj4=8ULL;
sj3>>=(sj4&63);
sj4=4278190080ULL;
sj3&=sj4;
sj4=l10;
sj5=24ULL;
sj4>>=(sj5&63);
sj5=16711680ULL;
sj4&=sj5;
sj3|=sj4;
sj4=l10;
sj5=40ULL;
sj4>>=(sj5&63);
sj5=65280ULL;
sj4&=sj5;
sj5=l10;
sj6=56ULL;
sj5>>=(sj6&63);
sj4|=sj5;
sj3|=sj4;
sj2|=sj3;
si3=l4;
sj3=i64_load(&i->m0,(U64)si3+80U);
l11=sj3;
sj2*=sj3;
sj3=l11;
sj4=56ULL;
sj3<<=(sj4&63);
sj4=l11;
sj5=65280ULL;
sj4&=sj5;
sj5=40ULL;
sj4<<=(sj5&63);
sj3|=sj4;
sj4=l11;
sj5=16711680ULL;
sj4&=sj5;
sj5=24ULL;
sj4<<=(sj5&63);
sj5=l11;
sj6=4278190080ULL;
sj5&=sj6;
sj6=8ULL;
sj5<<=(sj6&63);
sj4|=sj5;
sj3|=sj4;
sj4=l11;
sj5=8ULL;
sj4>>=(sj5&63);
sj5=4278190080ULL;
sj4&=sj5;
sj5=l11;
sj6=24ULL;
sj5>>=(sj6&63);
sj6=16711680ULL;
sj5&=sj6;
sj4|=sj5;
sj5=l11;
sj6=40ULL;
sj5>>=(sj6&63);
sj6=65280ULL;
sj5&=sj6;
sj6=l11;
sj7=56ULL;
sj6>>=(sj7&63);
sj5|=sj6;
sj4|=sj5;
sj3|=sj4;
sj4=l10;
sj5=-1ULL;
sj4^=sj5;
sj3*=sj4;
l10=sj3;
sj4=56ULL;
sj3<<=(sj4&63);
sj4=l10;
sj5=65280ULL;
sj4&=sj5;
sj5=40ULL;
sj4<<=(sj5&63);
sj3|=sj4;
sj4=l10;
sj5=16711680ULL;
sj4&=sj5;
sj5=24ULL;
sj4<<=(sj5&63);
sj5=l10;
sj6=4278190080ULL;
sj5&=sj6;
sj6=8ULL;
sj5<<=(sj6&63);
sj4|=sj5;
sj3|=sj4;
sj4=l10;
sj5=8ULL;
sj4>>=(sj5&63);
sj5=4278190080ULL;
sj4&=sj5;
sj5=l10;
sj6=24ULL;
sj5>>=(sj6&63);
sj6=16711680ULL;
sj5&=sj6;
sj4|=sj5;
sj5=l10;
sj6=40ULL;
sj5>>=(sj6&63);
sj6=65280ULL;
sj5&=sj6;
sj6=l10;
sj7=56ULL;
sj6>>=(sj7&63);
sj5|=sj6;
sj4|=sj5;
sj3|=sj4;
sj2^=sj3;
sj3=l11;
sj2=I64_ROTL(sj2,sj3);
si2=(U32)(sj2);
si3=l2;
si4=l3;
f2059(i,si0,si1,si2,si3,si4);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+16U);
si1=1U;
si0=si0 == si1;
if(si0){
goto L12;
}
L23:;
si0=l3;
if(si0){
goto L19;
}
si0=1U;
l12=si0;
si0=1U;
l8=si0;
goto L18;
L21:;
si0=l6;
si1=48U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=l8;
si2=5U;
si1<<=(si2&31);
si0+=si1;
si1=28U;
si0+=si1;
l6=si0;
si1=l6;
si1=i32_load16_u(&i->m0,(U64)si1);
si2=256U;
si1|=si2;
i32_store16(&i->m0,(U64)si0,si1);
goto L12;
L20:;
si0=l3;
if(si0){
goto L25;
}
si0=1U;
l12=si0;
si0=1U;
l8=si0;
goto L24;
L25:;
si0=l1;
si0=!(si0);
if(si0){
goto L17;
}
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=l3;
si0=f15022(i,si0);
l12=si0;
si0=!(si0);
if(si0){
goto L16;
}
si0=l12;
si1=l2;
si2=l3;
si0=f15143(i,si0,si1,si2);
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=l3;
si0=f15022(i,si0);
l8=si0;
si0=!(si0);
if(si0){
goto L15;
}
L24:;
si0=l8;
si1=l2;
si2=l3;
si0=f15143(i,si0,si1,si2);
l8=si0;
si0=l4;
si1=4U;
i32_store8(&i->m0,(U64)si0+50U,si1);
si0=l4;
si1=256U;
i32_store16(&i->m0,(U64)si0+48U,si1);
si0=l4;
si1=l3;
i32_store(&i->m0,(U64)si0+44U,si1);
si0=l4;
si1=l3;
i32_store(&i->m0,(U64)si0+40U,si1);
si0=l4;
si1=l12;
i32_store(&i->m0,(U64)si0+36U,si1);
si0=l4;
si1=l6;
si2=24U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+72U,sj1);
si0=l4;
si1=l6;
sj1=i64_load(&i->m0,(U64)si1+16U);
i64_store(&i->m0,(U64)si0+64U,sj1);
si0=l4;
si1=l6;
sj1=i64_load(&i->m0,(U64)si1+8U);
i64_store(&i->m0,(U64)si0+88U,sj1);
si0=l4;
si1=l6;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+80U,sj1);
si0=l4;
si1=64U;
si0+=si1;
si1=l8;
si2=l3;
f2027(i,si0,si1,si2);
si0=l4;
sj0=i64_load(&i->m0,(U64)si0+88U);
l10=sj0;
si0=l4;
sj0=i64_load(&i->m0,(U64)si0+80U);
l11=sj0;
si0=l4;
si1=l3;
i32_store(&i->m0,(U64)si0+60U,si1);
si0=l4;
si1=l3;
i32_store(&i->m0,(U64)si0+56U,si1);
si0=l4;
si1=l8;
i32_store(&i->m0,(U64)si0+52U,si1);
si0=l4;
si1=64U;
si0+=si1;
si1=l6;
si2=32U;
si1+=si2;
sj2=l11;
sj3=l10;
sj4=56ULL;
sj3<<=(sj4&63);
sj4=l10;
sj5=65280ULL;
sj4&=sj5;
sj5=40ULL;
sj4<<=(sj5&63);
sj3|=sj4;
sj4=l10;
sj5=16711680ULL;
sj4&=sj5;
sj5=24ULL;
sj4<<=(sj5&63);
sj5=l10;
sj6=4278190080ULL;
sj5&=sj6;
sj6=8ULL;
sj5<<=(sj6&63);
sj4|=sj5;
sj3|=sj4;
sj4=l10;
sj5=8ULL;
sj4>>=(sj5&63);
sj5=4278190080ULL;
sj4&=sj5;
sj5=l10;
sj6=24ULL;
sj5>>=(sj6&63);
sj6=16711680ULL;
sj5&=sj6;
sj4|=sj5;
sj5=l10;
sj6=40ULL;
sj5>>=(sj6&63);
sj6=65280ULL;
sj5&=sj6;
sj6=l10;
sj7=56ULL;
sj6>>=(sj7&63);
sj5|=sj6;
sj4|=sj5;
sj3|=sj4;
sj2*=sj3;
sj3=l11;
sj4=56ULL;
sj3<<=(sj4&63);
sj4=l11;
sj5=65280ULL;
sj4&=sj5;
sj5=40ULL;
sj4<<=(sj5&63);
sj3|=sj4;
sj4=l11;
sj5=16711680ULL;
sj4&=sj5;
sj5=24ULL;
sj4<<=(sj5&63);
sj5=l11;
sj6=4278190080ULL;
sj5&=sj6;
sj6=8ULL;
sj5<<=(sj6&63);
sj4|=sj5;
sj3|=sj4;
sj4=l11;
sj5=8ULL;
sj4>>=(sj5&63);
sj5=4278190080ULL;
sj4&=sj5;
sj5=l11;
sj6=24ULL;
sj5>>=(sj6&63);
sj6=16711680ULL;
sj5&=sj6;
sj4|=sj5;
sj5=l11;
sj6=40ULL;
sj5>>=(sj6&63);
sj6=65280ULL;
sj5&=sj6;
sj6=l11;
sj7=56ULL;
sj6>>=(sj7&63);
sj5|=sj6;
sj4|=sj5;
sj3|=sj4;
sj4=l10;
sj5=-1ULL;
sj4^=sj5;
sj3*=sj4;
l10=sj3;
sj4=56ULL;
sj3<<=(sj4&63);
sj4=l10;
sj5=65280ULL;
sj4&=sj5;
sj5=40ULL;
sj4<<=(sj5&63);
sj3|=sj4;
sj4=l10;
sj5=16711680ULL;
sj4&=sj5;
sj5=24ULL;
sj4<<=(sj5&63);
sj5=l10;
sj6=4278190080ULL;
sj5&=sj6;
sj6=8ULL;
sj5<<=(sj6&63);
sj4|=sj5;
sj3|=sj4;
sj4=l10;
sj5=8ULL;
sj4>>=(sj5&63);
sj5=4278190080ULL;
sj4&=sj5;
sj5=l10;
sj6=24ULL;
sj5>>=(sj6&63);
sj6=16711680ULL;
sj5&=sj6;
sj4|=sj5;
sj5=l10;
sj6=40ULL;
sj5>>=(sj6&63);
sj6=65280ULL;
sj5&=sj6;
sj6=l10;
sj7=56ULL;
sj6>>=(sj7&63);
sj5|=sj6;
sj4|=sj5;
sj3|=sj4;
sj2^=sj3;
sj3=l11;
sj2=I64_ROTL(sj2,sj3);
si2=(U32)(sj2);
si3=l4;
si4=52U;
si3+=si4;
si4=l4;
si5=36U;
si4+=si5;
f2055(i,si0,si1,si2,si3,si4);
si0=l4;
si0=i32_load8_u(&i->m0,(U64)si0+82U);
si1=6U;
si0=si0 == si1;
if(si0){
goto L12;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0+72U);
si0=!(si0);
if(si0){
goto L12;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0+68U);
f15024(i,si0);
goto L12;
L19:;
si0=l1;
si0=!(si0);
if(si0){
goto L17;
}
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=l3;
si0=f15022(i,si0);
l12=si0;
si0=!(si0);
if(si0){
goto L14;
}
si0=l12;
si1=l2;
si2=l3;
si0=f15143(i,si0,si1,si2);
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=l3;
si0=f15022(i,si0);
l8=si0;
si0=!(si0);
if(si0){
goto L13;
}
L18:;
si0=l8;
si1=l2;
si2=l3;
si0=f15143(i,si0,si1,si2);
l8=si0;
si0=l4;
si1=4U;
i32_store8(&i->m0,(U64)si0+50U,si1);
si0=l4;
si1=0U;
i32_store16(&i->m0,(U64)si0+48U,si1);
si0=l4;
si1=l3;
i32_store(&i->m0,(U64)si0+44U,si1);
si0=l4;
si1=l3;
i32_store(&i->m0,(U64)si0+40U,si1);
si0=l4;
si1=l12;
i32_store(&i->m0,(U64)si0+36U,si1);
si0=l4;
si1=l6;
si2=24U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+72U,sj1);
si0=l4;
si1=l6;
sj1=i64_load(&i->m0,(U64)si1+16U);
i64_store(&i->m0,(U64)si0+64U,sj1);
si0=l4;
si1=l6;
sj1=i64_load(&i->m0,(U64)si1+8U);
i64_store(&i->m0,(U64)si0+88U,sj1);
si0=l4;
si1=l6;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+80U,sj1);
si0=l4;
si1=64U;
si0+=si1;
si1=l8;
si2=l3;
f2027(i,si0,si1,si2);
si0=l4;
sj0=i64_load(&i->m0,(U64)si0+88U);
l10=sj0;
si0=l4;
sj0=i64_load(&i->m0,(U64)si0+80U);
l11=sj0;
si0=l4;
si1=l3;
i32_store(&i->m0,(U64)si0+60U,si1);
si0=l4;
si1=l3;
i32_store(&i->m0,(U64)si0+56U,si1);
si0=l4;
si1=l8;
i32_store(&i->m0,(U64)si0+52U,si1);
si0=l4;
si1=64U;
si0+=si1;
si1=l6;
si2=32U;
si1+=si2;
sj2=l11;
sj3=l10;
sj4=56ULL;
sj3<<=(sj4&63);
sj4=l10;
sj5=65280ULL;
sj4&=sj5;
sj5=40ULL;
sj4<<=(sj5&63);
sj3|=sj4;
sj4=l10;
sj5=16711680ULL;
sj4&=sj5;
sj5=24ULL;
sj4<<=(sj5&63);
sj5=l10;
sj6=4278190080ULL;
sj5&=sj6;
sj6=8ULL;
sj5<<=(sj6&63);
sj4|=sj5;
sj3|=sj4;
sj4=l10;
sj5=8ULL;
sj4>>=(sj5&63);
sj5=4278190080ULL;
sj4&=sj5;
sj5=l10;
sj6=24ULL;
sj5>>=(sj6&63);
sj6=16711680ULL;
sj5&=sj6;
sj4|=sj5;
sj5=l10;
sj6=40ULL;
sj5>>=(sj6&63);
sj6=65280ULL;
sj5&=sj6;
sj6=l10;
sj7=56ULL;
sj6>>=(sj7&63);
sj5|=sj6;
sj4|=sj5;
sj3|=sj4;
sj2*=sj3;
sj3=l11;
sj4=56ULL;
sj3<<=(sj4&63);
sj4=l11;
sj5=65280ULL;
sj4&=sj5;
sj5=40ULL;
sj4<<=(sj5&63);
sj3|=sj4;
sj4=l11;
sj5=16711680ULL;
sj4&=sj5;
sj5=24ULL;
sj4<<=(sj5&63);
sj5=l11;
sj6=4278190080ULL;
sj5&=sj6;
sj6=8ULL;
sj5<<=(sj6&63);
sj4|=sj5;
sj3|=sj4;
sj4=l11;
sj5=8ULL;
sj4>>=(sj5&63);
sj5=4278190080ULL;
sj4&=sj5;
sj5=l11;
sj6=24ULL;
sj5>>=(sj6&63);
sj6=16711680ULL;
sj5&=sj6;
sj4|=sj5;
sj5=l11;
sj6=40ULL;
sj5>>=(sj6&63);
sj6=65280ULL;
sj5&=sj6;
sj6=l11;
sj7=56ULL;
sj6>>=(sj7&63);
sj5|=sj6;
sj4|=sj5;
sj3|=sj4;
sj4=l10;
sj5=-1ULL;
sj4^=sj5;
sj3*=sj4;
l10=sj3;
sj4=56ULL;
sj3<<=(sj4&63);
sj4=l10;
sj5=65280ULL;
sj4&=sj5;
sj5=40ULL;
sj4<<=(sj5&63);
sj3|=sj4;
sj4=l10;
sj5=16711680ULL;
sj4&=sj5;
sj5=24ULL;
sj4<<=(sj5&63);
sj5=l10;
sj6=4278190080ULL;
sj5&=sj6;
sj6=8ULL;
sj5<<=(sj6&63);
sj4|=sj5;
sj3|=sj4;
sj4=l10;
sj5=8ULL;
sj4>>=(sj5&63);
sj5=4278190080ULL;
sj4&=sj5;
sj5=l10;
sj6=24ULL;
sj5>>=(sj6&63);
sj6=16711680ULL;
sj5&=sj6;
sj4|=sj5;
sj5=l10;
sj6=40ULL;
sj5>>=(sj6&63);
sj6=65280ULL;
sj5&=sj6;
sj6=l10;
sj7=56ULL;
sj6>>=(sj7&63);
sj5|=sj6;
sj4|=sj5;
sj3|=sj4;
sj2^=sj3;
sj3=l11;
sj2=I64_ROTL(sj2,sj3);
si2=(U32)(sj2);
si3=l4;
si4=52U;
si3+=si4;
si4=l4;
si5=36U;
si4+=si5;
f2055(i,si0,si1,si2,si3,si4);
si0=l4;
si0=i32_load8_u(&i->m0,(U64)si0+82U);
si1=6U;
si0=si0 == si1;
if(si0){
goto L12;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0+72U);
si0=!(si0);
if(si0){
goto L12;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0+68U);
f15024(i,si0);
goto L12;
L17:;
f53(i);
UNREACHABLE;
L16:;
si0=1U;
si1=l3;
f52(i,si0,si1);
UNREACHABLE;
L15:;
si0=1U;
si1=l3;
f52(i,si0,si1);
UNREACHABLE;
L14:;
si0=1U;
si1=l3;
f52(i,si0,si1);
UNREACHABLE;
L13:;
si0=1U;
si1=l3;
f52(i,si0,si1);
UNREACHABLE;
L12:;
si0=l9;
si1=-4U;
si0+=si1;
l9=si0;
si0=l7;
si1=1U;
si0+=si1;
l7=si0;
si0=!(si0);
if(si0){
goto L1;
}
goto L11;
}
L2:;
si0=l12;
si1=l13;
si2=16969724U;
f594(i,si0,si1,si2);
UNREACHABLE;
L1:;
si0=l4;
si1=96U;
si0+=si1;
i->g0=si0;
si0=l13;
L0:;
return si0;
}

void f1779(rustpythonInstance*i,U32 l0) {
U32 l1=0;
U32 l2=0;
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 si0,si1,si2;
si0=i->g0;
si1=96U;
si0-=si1;
l1=si0;
i->g0=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+8U);
l2=si0;
si0=!(si0);
if(si0){
goto L2;
}
si0=l0;
si1=l2;
si2=-1U;
si1+=si2;
l3=si1;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
si1=l3;
si2=96U;
si1*=si2;
si0+=si1;
l0=si0;
si0=i32_load8_u(&i->m0,(U64)si0+93U);
l5=si0;
si1=2U;
si0=si0 == si1;
if(si0){
goto L2;
}
si0=l0;
si0=i32_load16_u(&i->m0,(U64)si0+94U);
l6=si0;
si0=l1;
si1=l0;
si2=93U;
si0=f15143(i,si0,si1,si2);
l1=si0;
si0=l3;
si0=!(si0);
if(si0){
goto L1;
}
si0=l2;
si1=96U;
si0*=si1;
si1=l4;
si0+=si1;
l0=si0;
si1=-112U;
si0+=si1;
l3=si0;
si0=l0;
si1=-192U;
si0+=si1;
l4=si0;
si1=88U;
si0+=si1;
l0=si0;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si1=l4;
si2=84U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
si0=si0 != si1;
if(si0){
goto L3;
}
si0=l3;
si1=l2;
f1799(i,si0,si1);
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
L3:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
si1=l2;
si2=96U;
si1*=si2;
si0+=si1;
si1=l1;
si2=93U;
si0=f15143(i,si0,si1,si2);
l2=si0;
si1=l6;
i32_store16(&i->m0,(U64)si0+94U,si1);
si0=l2;
si1=l5;
i32_store8(&i->m0,(U64)si0+93U,si1);
si0=l0;
si1=l0;
si1=i32_load(&i->m0,(U64)si1);
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
si1=96U;
si0+=si1;
i->g0=si0;
goto L0;
L2:;
si0=16961489U;
si1=43U;
si2=16961780U;
f604(i,si0,si1,si2);
UNREACHABLE;
L1:;
si0=16961489U;
si1=43U;
si2=16961796U;
f604(i,si0,si1,si2);
UNREACHABLE;
L0:;
}

void f1780(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4,U32 l5,U32 l6) {
U32 l7=0;
U32 l8=0;
U32 l9=0;
U32 l10=0;
U64 l11=0;
U64 l12=0;
U32 si0,si1,si2,si3,si4;
U64 sj0,sj1,sj2,sj3,sj4,sj5,sj6,sj7;
si0=i->g0;
si1=96U;
si0-=si1;
l7=si0;
i->g0=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+8U);
l8=si0;
si0=!(si0);
if(si0){
goto L11;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l9=si0;
si0=l7;
si1=20U;
si0+=si1;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+12U);
si2=l1;
si3=20U;
si2+=si3;
si2=i32_load(&i->m0,(U64)si2);
si3=l2;
si4=l3;
f1784(i,si0,si1,si2,si3,si4);
si0=l7;
si1=28U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=l7;
si0=i32_load(&i->m0,(U64)si0+24U);
l10=si0;
si0=l7;
si0=i32_load(&i->m0,(U64)si0+20U);
l2=si0;
si0=l9;
si1=l8;
si2=96U;
si1*=si2;
si0+=si1;
si1=-96U;
si0+=si1;
l1=si0;
si1=44U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L26;
}
si0=l7;
si1=l1;
sj1=i64_load(&i->m0,(U64)si1+16U);
i64_store(&i->m0,(U64)si0+64U,sj1);
si0=l7;
si1=l1;
sj1=i64_load(&i->m0,(U64)si1+8U);
i64_store(&i->m0,(U64)si0+88U,sj1);
si0=l7;
si1=l1;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+80U,sj1);
si0=l7;
si1=l1;
si2=24U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+72U,sj1);
si0=l7;
si1=64U;
si0+=si1;
si1=l2;
si2=l10;
si3=l2;
si1=si3?si1:si2;
l9=si1;
si2=l3;
f2027(i,si0,si1,si2);
si0=l7;
si1=8U;
si0+=si1;
si1=l1;
si2=32U;
si1+=si2;
si2=l7;
sj2=i64_load(&i->m0,(U64)si2+88U);
l11=sj2;
sj3=56ULL;
sj2<<=(sj3&63);
sj3=l11;
sj4=65280ULL;
sj3&=sj4;
sj4=40ULL;
sj3<<=(sj4&63);
sj2|=sj3;
sj3=l11;
sj4=16711680ULL;
sj3&=sj4;
sj4=24ULL;
sj3<<=(sj4&63);
sj4=l11;
sj5=4278190080ULL;
sj4&=sj5;
sj5=8ULL;
sj4<<=(sj5&63);
sj3|=sj4;
sj2|=sj3;
sj3=l11;
sj4=8ULL;
sj3>>=(sj4&63);
sj4=4278190080ULL;
sj3&=sj4;
sj4=l11;
sj5=24ULL;
sj4>>=(sj5&63);
sj5=16711680ULL;
sj4&=sj5;
sj3|=sj4;
sj4=l11;
sj5=40ULL;
sj4>>=(sj5&63);
sj5=65280ULL;
sj4&=sj5;
sj5=l11;
sj6=56ULL;
sj5>>=(sj6&63);
sj4|=sj5;
sj3|=sj4;
sj2|=sj3;
si3=l7;
sj3=i64_load(&i->m0,(U64)si3+80U);
l12=sj3;
sj2*=sj3;
sj3=l12;
sj4=56ULL;
sj3<<=(sj4&63);
sj4=l12;
sj5=65280ULL;
sj4&=sj5;
sj5=40ULL;
sj4<<=(sj5&63);
sj3|=sj4;
sj4=l12;
sj5=16711680ULL;
sj4&=sj5;
sj5=24ULL;
sj4<<=(sj5&63);
sj5=l12;
sj6=4278190080ULL;
sj5&=sj6;
sj6=8ULL;
sj5<<=(sj6&63);
sj4|=sj5;
sj3|=sj4;
sj4=l12;
sj5=8ULL;
sj4>>=(sj5&63);
sj5=4278190080ULL;
sj4&=sj5;
sj5=l12;
sj6=24ULL;
sj5>>=(sj6&63);
sj6=16711680ULL;
sj5&=sj6;
sj4|=sj5;
sj5=l12;
sj6=40ULL;
sj5>>=(sj6&63);
sj6=65280ULL;
sj5&=sj6;
sj6=l12;
sj7=56ULL;
sj6>>=(sj7&63);
sj5|=sj6;
sj4|=sj5;
sj3|=sj4;
sj4=l11;
sj5=-1ULL;
sj4^=sj5;
sj3*=sj4;
l11=sj3;
sj4=56ULL;
sj3<<=(sj4&63);
sj4=l11;
sj5=65280ULL;
sj4&=sj5;
sj5=40ULL;
sj4<<=(sj5&63);
sj3|=sj4;
sj4=l11;
sj5=16711680ULL;
sj4&=sj5;
sj5=24ULL;
sj4<<=(sj5&63);
sj5=l11;
sj6=4278190080ULL;
sj5&=sj6;
sj6=8ULL;
sj5<<=(sj6&63);
sj4|=sj5;
sj3|=sj4;
sj4=l11;
sj5=8ULL;
sj4>>=(sj5&63);
sj5=4278190080ULL;
sj4&=sj5;
sj5=l11;
sj6=24ULL;
sj5>>=(sj6&63);
sj6=16711680ULL;
sj5&=sj6;
sj4|=sj5;
sj5=l11;
sj6=40ULL;
sj5>>=(sj6&63);
sj6=65280ULL;
sj5&=sj6;
sj6=l11;
sj7=56ULL;
sj6>>=(sj7&63);
sj5|=sj6;
sj4|=sj5;
sj3|=sj4;
sj2^=sj3;
sj3=l12;
sj2=I64_ROTL(sj2,sj3);
si2=(U32)(sj2);
si3=l9;
si4=l3;
f2059(i,si0,si1,si2,si3,si4);
si0=l7;
si0=i32_load(&i->m0,(U64)si0+8U);
si1=1U;
si0=si0 != si1;
if(si0){
goto L26;
}
si0=l7;
si0=i32_load(&i->m0,(U64)si0+12U);
l10=si0;
si1=l1;
si2=56U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
l3=si1;
si0=si0 >= si1;
if(si0){
goto L10;
}
si0=l1;
si1=48U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l8=si0;
si1=l10;
si2=5U;
si1<<=(si2&31);
si0+=si1;
l1=si0;
si1=16U;
si0+=si1;
l3=si0;
si0=0U;
l2=si0;
si0=l4;
si1=255U;
si0&=si1;
switch(si0){
case 0:
goto L24;
case 1:
goto L25;
default:
goto L22;
}
L26:;
si0=l4;
si1=255U;
si0&=si1;
si1=1U;
si0=si0 != si1;
if(si0){
goto L23;
}
si0=l8;
si1=2U;
si0=si0 >= si1;
if(si0){
goto L23;
}
si0=l7;
si1=76U;
si0+=si1;
sj1=1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l7;
si1=2U;
i32_store(&i->m0,(U64)si0+68U,si1);
si0=l7;
si1=16962556U;
i32_store(&i->m0,(U64)si0+64U,si1);
si0=l7;
si1=537U;
i32_store(&i->m0,(U64)si0+36U,si1);
si0=l7;
si1=l7;
si2=32U;
si1+=si2;
i32_store(&i->m0,(U64)si0+72U,si1);
si0=l7;
si1=l7;
si2=20U;
si1+=si2;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l7;
si1=40U;
si0+=si1;
si1=l7;
si2=64U;
si1+=si2;
f64(i,si0,si1);
si0=l0;
si1=8U;
si0+=si1;
si1=l7;
si2=40U;
si1+=si2;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l7;
sj1=i64_load(&i->m0,(U64)si1+40U);
i64_store(&i->m0,(U64)si0,sj1);
goto L3;
L25:;
si0=l1;
si1=28U;
si0+=si1;
l1=si0;
si0=i32_load16_u(&i->m0,(U64)si0);
l10=si0;
si1=4U;
si0&=si1;
si0=!(si0);
if(si0){
goto L27;
}
si0=l7;
si1=76U;
si0+=si1;
sj1=1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l7;
si1=2U;
i32_store(&i->m0,(U64)si0+68U,si1);
si0=l7;
si1=16962348U;
i32_store(&i->m0,(U64)si0+64U,si1);
si0=l7;
si1=537U;
i32_store(&i->m0,(U64)si0+36U,si1);
si0=l7;
si1=l7;
si2=32U;
si1+=si2;
i32_store(&i->m0,(U64)si0+72U,si1);
si0=l7;
si1=l7;
si2=20U;
si1+=si2;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l7;
si1=40U;
si0+=si1;
si1=l7;
si2=64U;
si1+=si2;
f64(i,si0,si1);
si0=l0;
si1=8U;
si0+=si1;
si1=l7;
si2=40U;
si1+=si2;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l7;
sj1=i64_load(&i->m0,(U64)si1+40U);
i64_store(&i->m0,(U64)si0,sj1);
goto L3;
L27:;
si0=l10;
si1=1U;
si0&=si1;
si0=!(si0);
if(si0){
goto L28;
}
si0=l7;
si1=76U;
si0+=si1;
sj1=1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l7;
si1=2U;
i32_store(&i->m0,(U64)si0+68U,si1);
si0=l7;
si1=16962404U;
i32_store(&i->m0,(U64)si0+64U,si1);
si0=l7;
si1=537U;
i32_store(&i->m0,(U64)si0+36U,si1);
si0=l7;
si1=l7;
si2=32U;
si1+=si2;
i32_store(&i->m0,(U64)si0+72U,si1);
si0=l7;
si1=l7;
si2=20U;
si1+=si2;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l7;
si1=40U;
si0+=si1;
si1=l7;
si2=64U;
si1+=si2;
f64(i,si0,si1);
si0=l0;
si1=8U;
si0+=si1;
si1=l7;
si2=40U;
si1+=si2;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l7;
sj1=i64_load(&i->m0,(U64)si1+40U);
i64_store(&i->m0,(U64)si0,sj1);
goto L3;
L28:;
si0=l10;
si1=8U;
si0&=si1;
si0=!(si0);
if(si0){
goto L29;
}
si0=l7;
si1=76U;
si0+=si1;
sj1=1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l7;
si1=2U;
i32_store(&i->m0,(U64)si0+68U,si1);
si0=l7;
si1=16962440U;
i32_store(&i->m0,(U64)si0+64U,si1);
si0=l7;
si1=537U;
i32_store(&i->m0,(U64)si0+36U,si1);
si0=l7;
si1=l7;
si2=32U;
si1+=si2;
i32_store(&i->m0,(U64)si0+72U,si1);
si0=l7;
si1=l7;
si2=20U;
si1+=si2;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l7;
si1=40U;
si0+=si1;
si1=l7;
si2=64U;
si1+=si2;
f64(i,si0,si1);
si0=l0;
si1=8U;
si0+=si1;
si1=l7;
si2=40U;
si1+=si2;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l7;
sj1=i64_load(&i->m0,(U64)si1+40U);
i64_store(&i->m0,(U64)si0,sj1);
goto L3;
L29:;
si0=0U;
l2=si0;
si0=l10;
si1=2U;
si0&=si1;
si0=!(si0);
if(si0){
goto L21;
}
si0=l7;
si1=76U;
si0+=si1;
sj1=1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l7;
si1=2U;
i32_store(&i->m0,(U64)si0+68U,si1);
si0=l7;
si1=16962500U;
i32_store(&i->m0,(U64)si0+64U,si1);
si0=l7;
si1=537U;
i32_store(&i->m0,(U64)si0+36U,si1);
si0=l7;
si1=l7;
si2=32U;
si1+=si2;
i32_store(&i->m0,(U64)si0+72U,si1);
si0=l7;
si1=l7;
si2=20U;
si1+=si2;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l7;
si1=40U;
si0+=si1;
si1=l7;
si2=64U;
si1+=si2;
f1767(i,si0,si1);
si0=l0;
si1=8U;
si0+=si1;
si1=l7;
si2=40U;
si1+=si2;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l7;
sj1=i64_load(&i->m0,(U64)si1+40U);
i64_store(&i->m0,(U64)si0,sj1);
goto L3;
L24:;
si0=l1;
si1=30U;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=6U;
si0&=si1;
si1=2U;
si0=si0 != si1;
if(si0){
goto L7;
}
goto L6;
L23:;
si0=l2;
si1=l10;
si2=l2;
si0=si2?si0:si1;
l9=si0;
si0=l3;
si0=!(si0);
if(si0){
goto L32;
}
si0=l3;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L9;
}
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=l3;
si0=f15022(i,si0);
l8=si0;
si0=!(si0);
if(si0){
goto L8;
}
si0=l8;
si1=l9;
si2=l3;
si0=f15143(i,si0,si1,si2);
si0=l2;
if(si0){
goto L30;
}
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=l3;
si0=f15022(i,si0);
l9=si0;
if(si0){
goto L31;
}
si0=1U;
si1=l3;
f52(i,si0,si1);
UNREACHABLE;
L32:;
si0=1U;
l8=si0;
si0=1U;
si1=l9;
si2=l3;
si0=f15143(i,si0,si1,si2);
si0=1U;
l9=si0;
si0=l2;
if(si0){
goto L30;
}
L31:;
si0=l9;
si1=l10;
si2=l3;
si0=f15143(i,si0,si1,si2);
l2=si0;
si0=l3;
l10=si0;
si0=l2;
l2=si0;
L30:;
si0=l7;
si1=l1;
sj1=i64_load(&i->m0,(U64)si1+16U);
i64_store(&i->m0,(U64)si0+64U,sj1);
si0=l7;
si1=l1;
sj1=i64_load(&i->m0,(U64)si1+8U);
i64_store(&i->m0,(U64)si0+88U,sj1);
si0=l7;
si1=l1;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+80U,sj1);
si0=l7;
si1=l1;
si2=24U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+72U,sj1);
si0=l7;
si1=64U;
si0+=si1;
si1=l2;
si2=l3;
f2027(i,si0,si1,si2);
si0=l7;
sj0=i64_load(&i->m0,(U64)si0+88U);
l11=sj0;
si0=l7;
sj0=i64_load(&i->m0,(U64)si0+80U);
l12=sj0;
si0=l7;
si1=l3;
i32_store(&i->m0,(U64)si0+72U,si1);
si0=l7;
si1=l10;
i32_store(&i->m0,(U64)si0+68U,si1);
si0=l7;
si1=l2;
i32_store(&i->m0,(U64)si0+64U,si1);
si0=l7;
si1=40U;
si0+=si1;
si1=l1;
si2=32U;
si1+=si2;
sj2=l12;
sj3=l11;
sj4=56ULL;
sj3<<=(sj4&63);
sj4=l11;
sj5=65280ULL;
sj4&=sj5;
sj5=40ULL;
sj4<<=(sj5&63);
sj3|=sj4;
sj4=l11;
sj5=16711680ULL;
sj4&=sj5;
sj5=24ULL;
sj4<<=(sj5&63);
sj5=l11;
sj6=4278190080ULL;
sj5&=sj6;
sj6=8ULL;
sj5<<=(sj6&63);
sj4|=sj5;
sj3|=sj4;
sj4=l11;
sj5=8ULL;
sj4>>=(sj5&63);
sj5=4278190080ULL;
sj4&=sj5;
sj5=l11;
sj6=24ULL;
sj5>>=(sj6&63);
sj6=16711680ULL;
sj5&=sj6;
sj4|=sj5;
sj5=l11;
sj6=40ULL;
sj5>>=(sj6&63);
sj6=65280ULL;
sj5&=sj6;
sj6=l11;
sj7=56ULL;
sj6>>=(sj7&63);
sj5|=sj6;
sj4|=sj5;
sj3|=sj4;
sj2*=sj3;
sj3=l12;
sj4=56ULL;
sj3<<=(sj4&63);
sj4=l12;
sj5=65280ULL;
sj4&=sj5;
sj5=40ULL;
sj4<<=(sj5&63);
sj3|=sj4;
sj4=l12;
sj5=16711680ULL;
sj4&=sj5;
sj5=24ULL;
sj4<<=(sj5&63);
sj5=l12;
sj6=4278190080ULL;
sj5&=sj6;
sj6=8ULL;
sj5<<=(sj6&63);
sj4|=sj5;
sj3|=sj4;
sj4=l12;
sj5=8ULL;
sj4>>=(sj5&63);
sj5=4278190080ULL;
sj4&=sj5;
sj5=l12;
sj6=24ULL;
sj5>>=(sj6&63);
sj6=16711680ULL;
sj5&=sj6;
sj4|=sj5;
sj5=l12;
sj6=40ULL;
sj5>>=(sj6&63);
sj6=65280ULL;
sj5&=sj6;
sj6=l12;
sj7=56ULL;
sj6>>=(sj7&63);
sj5|=sj6;
sj4|=sj5;
sj3|=sj4;
sj4=l11;
sj5=-1ULL;
sj4^=sj5;
sj3*=sj4;
l11=sj3;
sj4=56ULL;
sj3<<=(sj4&63);
sj4=l11;
sj5=65280ULL;
sj4&=sj5;
sj5=40ULL;
sj4<<=(sj5&63);
sj3|=sj4;
sj4=l11;
sj5=16711680ULL;
sj4&=sj5;
sj5=24ULL;
sj4<<=(sj5&63);
sj5=l11;
sj6=4278190080ULL;
sj5&=sj6;
sj6=8ULL;
sj5<<=(sj6&63);
sj4|=sj5;
sj3|=sj4;
sj4=l11;
sj5=8ULL;
sj4>>=(sj5&63);
sj5=4278190080ULL;
sj4&=sj5;
sj5=l11;
sj6=24ULL;
sj5>>=(sj6&63);
sj6=16711680ULL;
sj5&=sj6;
sj4|=sj5;
sj5=l11;
sj6=40ULL;
sj5>>=(sj6&63);
sj6=65280ULL;
sj5&=sj6;
sj6=l11;
sj7=56ULL;
sj6>>=(sj7&63);
sj5|=sj6;
sj4|=sj5;
sj3|=sj4;
sj2^=sj3;
sj3=l12;
sj2=I64_ROTL(sj2,sj3);
si2=(U32)(sj2);
si3=l7;
si4=64U;
si3+=si4;
f2062(i,si0,si1,si2,si3);
si0=l7;
si1=0U;
i32_store8(&i->m0,(U64)si0+78U,si1);
si0=l7;
si1=0U;
i32_store16(&i->m0,(U64)si0+76U,si1);
si0=l7;
si1=l3;
i32_store(&i->m0,(U64)si0+72U,si1);
si0=l7;
si1=l3;
i32_store(&i->m0,(U64)si0+68U,si1);
si0=l7;
si1=l8;
i32_store(&i->m0,(U64)si0+64U,si1);
si0=l7;
si1=40U;
si0+=si1;
si1=l7;
si2=64U;
si1+=si2;
si0=f2052(i,si0,si1);
l3=si0;
si0=1U;
l2=si0;
L22:;
si0=l3;
si1=12U;
si0+=si1;
l1=si0;
si0=l4;
si1=255U;
si0&=si1;
switch(si0){
case 0:
goto L5;
case 1:
goto L21;
case 2:
goto L20;
case 3:
goto L19;
case 4:
goto L18;
case 5:
goto L17;
case 6:
goto L16;
case 7:
goto L15;
case 8:
goto L14;
case 9:
goto L13;
default:
goto L5;
}
L21:;
si0=l3;
si1=4U;
i32_store8(&i->m0,(U64)si0+14U,si1);
si0=l1;
si0=i32_load16_u(&i->m0,(U64)si0);
si1=32U;
si0|=si1;
l3=si0;
goto L12;
L20:;
si0=l1;
si0=i32_load16_u(&i->m0,(U64)si0);
si1=1U;
si0|=si1;
l3=si0;
goto L12;
L19:;
si0=l1;
si0=i32_load16_u(&i->m0,(U64)si0);
si1=2U;
si0|=si1;
l3=si0;
goto L12;
L18:;
si0=l1;
si0=i32_load16_u(&i->m0,(U64)si0);
si1=18U;
si0|=si1;
l3=si0;
goto L12;
L17:;
si0=l1;
si0=i32_load16_u(&i->m0,(U64)si0);
si1=10U;
si0|=si1;
l3=si0;
goto L12;
L16:;
si0=l1;
si0=i32_load16_u(&i->m0,(U64)si0);
si1=4U;
si0|=si1;
l3=si0;
goto L12;
L15:;
si0=l1;
si0=i32_load16_u(&i->m0,(U64)si0);
si1=12U;
si0|=si1;
l3=si0;
goto L12;
L14:;
si0=l1;
si0=i32_load16_u(&i->m0,(U64)si0);
si1=66U;
si0|=si1;
l3=si0;
goto L12;
L13:;
si0=l1;
si0=i32_load16_u(&i->m0,(U64)si0);
si1=128U;
si0|=si1;
l3=si0;
L12:;
si0=l1;
si1=l3;
i32_store16(&i->m0,(U64)si0,si1);
goto L4;
L11:;
si0=16961489U;
si1=43U;
si2=16962088U;
f604(i,si0,si1,si2);
UNREACHABLE;
L10:;
si0=l10;
si1=l3;
si2=16969740U;
f594(i,si0,si1,si2);
UNREACHABLE;
L9:;
f53(i);
UNREACHABLE;
L8:;
si0=1U;
si1=l3;
f52(i,si0,si1);
UNREACHABLE;
L7:;
si0=l8;
si1=l10;
si2=5U;
si1<<=(si2&31);
si0+=si1;
si1=28U;
si0+=si1;
si0=i32_load16_u(&i->m0,(U64)si0);
l1=si0;
si1=4U;
si0&=si1;
si0=!(si0);
if(si0){
goto L33;
}
si0=l7;
si1=76U;
si0+=si1;
sj1=1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l7;
si1=2U;
i32_store(&i->m0,(U64)si0+68U,si1);
si0=l7;
si1=16962136U;
i32_store(&i->m0,(U64)si0+64U,si1);
si0=l7;
si1=537U;
i32_store(&i->m0,(U64)si0+36U,si1);
si0=l7;
si1=l7;
si2=32U;
si1+=si2;
i32_store(&i->m0,(U64)si0+72U,si1);
si0=l7;
si1=l7;
si2=20U;
si1+=si2;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l7;
si1=40U;
si0+=si1;
si1=l7;
si2=64U;
si1+=si2;
f64(i,si0,si1);
si0=l0;
si1=8U;
si0+=si1;
si1=l7;
si2=40U;
si1+=si2;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l7;
sj1=i64_load(&i->m0,(U64)si1+40U);
i64_store(&i->m0,(U64)si0,sj1);
goto L3;
L33:;
si0=l1;
si1=1U;
si0&=si1;
si0=!(si0);
if(si0){
goto L34;
}
si0=l7;
si1=76U;
si0+=si1;
sj1=1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l7;
si1=2U;
i32_store(&i->m0,(U64)si0+68U,si1);
si0=l7;
si1=16962192U;
i32_store(&i->m0,(U64)si0+64U,si1);
si0=l7;
si1=537U;
i32_store(&i->m0,(U64)si0+36U,si1);
si0=l7;
si1=l7;
si2=32U;
si1+=si2;
i32_store(&i->m0,(U64)si0+72U,si1);
si0=l7;
si1=l7;
si2=20U;
si1+=si2;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l7;
si1=40U;
si0+=si1;
si1=l7;
si2=64U;
si1+=si2;
f64(i,si0,si1);
si0=l0;
si1=8U;
si0+=si1;
si1=l7;
si2=40U;
si1+=si2;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l7;
sj1=i64_load(&i->m0,(U64)si1+40U);
i64_store(&i->m0,(U64)si0,sj1);
goto L3;
L34:;
si0=l1;
si1=8U;
si0&=si1;
si0=!(si0);
if(si0){
goto L35;
}
si0=l7;
si1=76U;
si0+=si1;
sj1=1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l7;
si1=2U;
i32_store(&i->m0,(U64)si0+68U,si1);
si0=l7;
si1=16962244U;
i32_store(&i->m0,(U64)si0+64U,si1);
si0=l7;
si1=537U;
i32_store(&i->m0,(U64)si0+36U,si1);
si0=l7;
si1=l7;
si2=32U;
si1+=si2;
i32_store(&i->m0,(U64)si0+72U,si1);
si0=l7;
si1=l7;
si2=20U;
si1+=si2;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l7;
si1=40U;
si0+=si1;
si1=l7;
si2=64U;
si1+=si2;
f1767(i,si0,si1);
si0=l0;
si1=8U;
si0+=si1;
si1=l7;
si2=40U;
si1+=si2;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l7;
sj1=i64_load(&i->m0,(U64)si1+40U);
i64_store(&i->m0,(U64)si0,sj1);
goto L3;
L35:;
si0=l1;
si1=2U;
si0&=si1;
si0=!(si0);
if(si0){
goto L6;
}
si0=l7;
si1=76U;
si0+=si1;
sj1=1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l7;
si1=2U;
i32_store(&i->m0,(U64)si0+68U,si1);
si0=l7;
si1=16962304U;
i32_store(&i->m0,(U64)si0+64U,si1);
si0=l7;
si1=537U;
i32_store(&i->m0,(U64)si0+36U,si1);
si0=l7;
si1=l7;
si2=32U;
si1+=si2;
i32_store(&i->m0,(U64)si0+72U,si1);
si0=l7;
si1=l7;
si2=20U;
si1+=si2;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l7;
si1=40U;
si0+=si1;
si1=l7;
si2=64U;
si1+=si2;
f1767(i,si0,si1);
si0=l0;
si1=8U;
si0+=si1;
si1=l7;
si2=40U;
si1+=si2;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l7;
sj1=i64_load(&i->m0,(U64)si1+40U);
i64_store(&i->m0,(U64)si0,sj1);
goto L3;
L6:;
si0=l8;
si1=l10;
si2=5U;
si1<<=(si2&31);
si0+=si1;
si1=28U;
si0+=si1;
l1=si0;
si0=0U;
l2=si0;
L5:;
si0=l3;
si1=2U;
i32_store8(&i->m0,(U64)si0+14U,si1);
si0=l1;
si0=i32_load16_u(&i->m0,(U64)si0);
l3=si0;
L4:;
si0=l3;
si1=130U;
si0&=si1;
si1=130U;
si0=si0 != si1;
if(si0){
goto L37;
}
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=75U;
si0=f15022(i,si0);
l1=si0;
si0=!(si0);
if(si0){
goto L36;
}
si0=l1;
si1=16961901U;
si2=75U;
si0=f15143(i,si0,si1,si2);
l1=si0;
si0=l0;
si1=l6;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l0;
si1=l5;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l0;
sj1=322122547275ULL;
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l0;
si1=l1;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=l7;
si1=i32_load(&i->m0,(U64)si1+20U);
l1=si1;
si1=!(si1);
si0|=si1;
if(si0){
goto L1;
}
goto L2;
L37:;
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=l7;
si1=i32_load(&i->m0,(U64)si1+20U);
l1=si1;
si1=!(si1);
si0|=si1;
if(si0){
goto L1;
}
si0=l7;
si0=i32_load(&i->m0,(U64)si0+24U);
si0=!(si0);
if(si0){
goto L1;
}
si0=l1;
f15024(i,si0);
goto L1;
L36:;
si0=1U;
si1=75U;
f52(i,si0,si1);
UNREACHABLE;
L3:;
si0=l0;
si1=l6;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l0;
si1=l5;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l7;
si0=i32_load(&i->m0,(U64)si0+20U);
l1=si0;
si0=!(si0);
if(si0){
goto L1;
}
L2:;
si0=l7;
si0=i32_load(&i->m0,(U64)si0+24U);
si0=!(si0);
if(si0){
goto L1;
}
si0=l1;
f15024(i,si0);
L1:;
si0=l7;
si1=96U;
si0+=si1;
i->g0=si0;
L0:;
}

void f1781(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4,U32 l5) {
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
U32 si0,si1,si2,si3,si4,si5,si6,si7;
U64 sj1;
si0=i->g0;
si1=32U;
si0-=si1;
l6=si0;
i->g0=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
si1=l4;
si1=i32_load(&i->m0,(U64)si1+8U);
l8=si1;
si2=48U;
si1*=si2;
si0+=si1;
l9=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+24U);
l10=si0;
si1=l4;
si2=32U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
l11=si1;
si2=48U;
si1*=si2;
si0+=si1;
l12=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+12U);
l13=si0;
si1=l4;
si2=20U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
l14=si1;
si2=48U;
si1*=si2;
si0+=si1;
l15=si0;
si0=1U;
l16=si0;
si0=l10;
l17=si0;
si0=l13;
l18=si0;
si0=l7;
l19=si0;
L6:;
{
si0=l16;
if(si0){
goto L9;
}
si0=l19;
l20=si0;
goto L8;
L9:;
si0=l19;
si0=!(si0);
if(si0){
goto L10;
}
L11:;
{
si0=l19;
si1=l9;
si0=si0 == si1;
if(si0){
goto L10;
}
si0=l19;
si1=44U;
si0+=si1;
l21=si0;
si0=l19;
si1=48U;
si0+=si1;
l20=si0;
l19=si0;
si0=l21;
si0=i32_load(&i->m0,(U64)si0);
l21=si0;
si0=!(si0);
if(si0){
goto L11;
}
goto L7;
}
L10:;
si0=0U;
l20=si0;
si0=l18;
if(si0){
goto L12;
}
si0=0U;
l18=si0;
goto L8;
L12:;
L13:;
{
si0=l18;
si1=l15;
si0=si0 != si1;
if(si0){
goto L14;
}
si0=l15;
l18=si0;
goto L8;
L14:;
si0=l18;
si1=44U;
si0+=si1;
l19=si0;
si0=l18;
si1=48U;
si0+=si1;
l22=si0;
l18=si0;
si0=l19;
si0=i32_load(&i->m0,(U64)si0);
l21=si0;
si0=!(si0);
if(si0){
goto L13;
}
}
si0=0U;
l20=si0;
si0=l22;
l18=si0;
goto L7;
L8:;
si0=l17;
si0=!(si0);
if(si0){
goto L5;
}
L15:;
{
si0=l17;
si1=l12;
si0=si0 == si1;
if(si0){
goto L5;
}
si0=l17;
si1=44U;
si0+=si1;
l19=si0;
si0=l17;
si1=48U;
si0+=si1;
l22=si0;
l17=si0;
si0=l19;
si0=i32_load(&i->m0,(U64)si0);
l21=si0;
si0=!(si0);
if(si0){
goto L15;
}
}
si0=0U;
l16=si0;
si0=l22;
l17=si0;
L7:;
si0=l6;
si1=12U;
si0+=si1;
si1=l1;
si2=l21;
si3=0U;
f1774(i,si0,si1,si2,si3);
si0=l6;
si0=i32_load(&i->m0,(U64)si0+12U);
l21=si0;
if(si0){
goto L4;
}
si0=l20;
l19=si0;
goto L6;
}
L5:;
si0=1U;
l20=si0;
si0=l7;
l19=si0;
si0=l13;
l18=si0;
si0=l10;
l17=si0;
L17:;
{
si0=l20;
si0=!(si0);
if(si0){
goto L19;
}
si0=l19;
si0=!(si0);
if(si0){
goto L20;
}
L21:;
{
si0=l19;
si1=l9;
si0=si0 == si1;
if(si0){
goto L20;
}
si0=l19;
si1=28U;
si0+=si1;
l21=si0;
si0=l19;
si1=48U;
si0+=si1;
l22=si0;
l19=si0;
si0=l21;
si0=i32_load(&i->m0,(U64)si0);
l21=si0;
si0=!(si0);
if(si0){
goto L21;
}
}
si0=l22;
l19=si0;
goto L18;
L20:;
si0=0U;
l19=si0;
si0=l18;
if(si0){
goto L22;
}
si0=0U;
l18=si0;
goto L19;
L22:;
L23:;
{
si0=l18;
si1=l15;
si0=si0 != si1;
if(si0){
goto L24;
}
si0=l15;
l18=si0;
goto L19;
L24:;
si0=l18;
si1=28U;
si0+=si1;
l21=si0;
si0=l18;
si1=48U;
si0+=si1;
l22=si0;
l18=si0;
si0=l21;
si0=i32_load(&i->m0,(U64)si0);
l21=si0;
si0=!(si0);
if(si0){
goto L23;
}
}
si0=0U;
l19=si0;
si0=l22;
l18=si0;
goto L18;
L19:;
si0=l17;
si0=!(si0);
if(si0){
goto L16;
}
L25:;
{
si0=l17;
si1=l12;
si0=si0 == si1;
if(si0){
goto L16;
}
si0=l17;
si1=28U;
si0+=si1;
l21=si0;
si0=l17;
si1=48U;
si0+=si1;
l22=si0;
l17=si0;
si0=l21;
si0=i32_load(&i->m0,(U64)si0);
l21=si0;
si0=!(si0);
if(si0){
goto L25;
}
}
si0=0U;
l20=si0;
si0=l22;
l17=si0;
L18:;
si0=l1;
si0=i32_load8_u(&i->m0,(U64)si0+24U);
if(si0){
goto L17;
}
si0=l6;
si1=12U;
si0+=si1;
si1=l1;
si2=l21;
si3=0U;
f1774(i,si0,si1,si2,si3);
si0=l6;
si0=i32_load(&i->m0,(U64)si0+12U);
l21=si0;
si0=!(si0);
if(si0){
goto L17;
}
}
si0=l0;
si1=l6;
sj1=i64_load(&i->m0,(U64)si1+16U);
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l0;
si1=12U;
si0+=si1;
si1=l6;
si2=12U;
si1+=si2;
si2=12U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
goto L1;
L16:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+36U);
l19=si0;
if(si0){
goto L3;
}
goto L2;
L4:;
si0=l0;
si1=l6;
sj1=i64_load(&i->m0,(U64)si1+16U);
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l0;
si1=12U;
si0+=si1;
si1=l6;
si2=12U;
si1+=si2;
si2=12U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
goto L1;
L3:;
si0=l19;
si0=i32_load(&i->m0,(U64)si0+28U);
l17=si0;
si0=!(si0);
if(si0){
goto L2;
}
si0=l1;
si0=i32_load8_u(&i->m0,(U64)si0+24U);
if(si0){
goto L2;
}
si0=l6;
si1=12U;
si0+=si1;
si1=l1;
si2=l17;
si3=0U;
f1774(i,si0,si1,si2,si3);
si0=l6;
si0=i32_load(&i->m0,(U64)si0+12U);
l21=si0;
si0=!(si0);
if(si0){
goto L2;
}
si0=l0;
si1=l6;
sj1=i64_load(&i->m0,(U64)si1+16U);
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l0;
si1=12U;
si0+=si1;
si1=l6;
si2=12U;
si1+=si2;
si2=12U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
goto L1;
L2:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+40U);
l12=si0;
si0=!(si0);
if(si0){
goto L31;
}
si0=l12;
si0=i32_load(&i->m0,(U64)si0+28U);
l17=si0;
si0=!(si0);
if(si0){
goto L31;
}
si0=l1;
si0=i32_load8_u(&i->m0,(U64)si0+24U);
if(si0){
goto L31;
}
si0=l6;
si1=12U;
si0+=si1;
si1=l1;
si2=l17;
si3=0U;
f1774(i,si0,si1,si2,si3);
si0=l6;
si0=i32_load(&i->m0,(U64)si0+12U);
l21=si0;
if(si0){
goto L30;
}
L31:;
si0=l1;
si1=l2;
si2=l3;
si3=2U;
si4=l5;
f1770(i,si0,si1,si2,si3,si4);
si0=l8;
si0=!(si0);
if(si0){
goto L32;
}
si0=l8;
si1=48U;
si0*=si1;
l17=si0;
L33:;
{
si0=l6;
si1=12U;
si0+=si1;
si1=l1;
si2=l7;
si3=16U;
si2+=si3;
si2=i32_load(&i->m0,(U64)si2);
si3=l7;
si4=24U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si4=7U;
si5=6U;
si6=l7;
si7=28U;
si6+=si7;
si6=i32_load(&i->m0,(U64)si6);
si4=si6?si4:si5;
si5=l7;
si5=i32_load(&i->m0,(U64)si5);
si6=l7;
si6=i32_load(&i->m0,(U64)si6+4U);
f1780(i,si0,si1,si2,si3,si4,si5,si6);
si0=l6;
si0=i32_load(&i->m0,(U64)si0+12U);
l21=si0;
if(si0){
goto L29;
}
si0=l7;
si1=48U;
si0+=si1;
l7=si0;
si0=l17;
si1=-48U;
si0+=si1;
l17=si0;
if(si0){
goto L33;
}
}
L32:;
si0=l14;
si0=!(si0);
if(si0){
goto L34;
}
si0=l14;
si1=48U;
si0*=si1;
l17=si0;
L35:;
{
si0=l6;
si1=12U;
si0+=si1;
si1=l1;
si2=l13;
si3=16U;
si2+=si3;
si2=i32_load(&i->m0,(U64)si2);
si3=l13;
si4=24U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si4=7U;
si5=6U;
si6=l13;
si7=28U;
si6+=si7;
si6=i32_load(&i->m0,(U64)si6);
si4=si6?si4:si5;
si5=l13;
si5=i32_load(&i->m0,(U64)si5);
si6=l13;
si6=i32_load(&i->m0,(U64)si6+4U);
f1780(i,si0,si1,si2,si3,si4,si5,si6);
si0=l6;
si0=i32_load(&i->m0,(U64)si0+12U);
l21=si0;
if(si0){
goto L28;
}
si0=l13;
si1=48U;
si0+=si1;
l13=si0;
si0=l17;
si1=-48U;
si0+=si1;
l17=si0;
if(si0){
goto L35;
}
}
L34:;
si0=l11;
si0=!(si0);
if(si0){
goto L36;
}
si0=l11;
si1=48U;
si0*=si1;
l17=si0;
L37:;
{
si0=l6;
si1=12U;
si0+=si1;
si1=l1;
si2=l10;
si3=16U;
si2+=si3;
si2=i32_load(&i->m0,(U64)si2);
si3=l10;
si4=24U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si4=7U;
si5=6U;
si6=l10;
si7=28U;
si6+=si7;
si6=i32_load(&i->m0,(U64)si6);
si4=si6?si4:si5;
si5=l10;
si5=i32_load(&i->m0,(U64)si5);
si6=l10;
si6=i32_load(&i->m0,(U64)si6+4U);
f1780(i,si0,si1,si2,si3,si4,si5,si6);
si0=l6;
si0=i32_load(&i->m0,(U64)si0+12U);
l21=si0;
if(si0){
goto L27;
}
si0=l10;
si1=48U;
si0+=si1;
l10=si0;
si0=l17;
si1=-48U;
si0+=si1;
l17=si0;
if(si0){
goto L37;
}
}
L36:;
si0=l19;
si0=!(si0);
if(si0){
goto L38;
}
si0=l6;
si1=12U;
si0+=si1;
si1=l1;
si2=l19;
si2=i32_load(&i->m0,(U64)si2+16U);
si3=l19;
si4=24U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si4=7U;
si5=6U;
si6=l19;
si6=i32_load(&i->m0,(U64)si6+28U);
si4=si6?si4:si5;
si5=l19;
si5=i32_load(&i->m0,(U64)si5);
si6=l19;
si6=i32_load(&i->m0,(U64)si6+4U);
f1780(i,si0,si1,si2,si3,si4,si5,si6);
si0=l6;
si0=i32_load(&i->m0,(U64)si0+12U);
l21=si0;
if(si0){
goto L26;
}
L38:;
si0=0U;
l21=si0;
si0=l12;
si0=!(si0);
if(si0){
goto L1;
}
si0=l6;
si1=12U;
si0+=si1;
si1=l1;
si2=l12;
si2=i32_load(&i->m0,(U64)si2+16U);
si3=l12;
si4=24U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si4=7U;
si5=6U;
si6=l12;
si6=i32_load(&i->m0,(U64)si6+28U);
si4=si6?si4:si5;
si5=l12;
si5=i32_load(&i->m0,(U64)si5);
si6=l12;
si6=i32_load(&i->m0,(U64)si6+4U);
f1780(i,si0,si1,si2,si3,si4,si5,si6);
si0=l6;
si0=i32_load(&i->m0,(U64)si0+12U);
l17=si0;
si0=!(si0);
if(si0){
goto L1;
}
si0=l0;
si1=l6;
sj1=i64_load(&i->m0,(U64)si1+16U);
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l0;
si1=12U;
si0+=si1;
si1=l6;
si2=12U;
si1+=si2;
si2=12U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l17;
l21=si0;
goto L1;
L30:;
si0=l0;
si1=l6;
sj1=i64_load(&i->m0,(U64)si1+16U);
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l0;
si1=12U;
si0+=si1;
si1=l6;
si2=12U;
si1+=si2;
si2=12U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
goto L1;
L29:;
si0=l0;
si1=l6;
sj1=i64_load(&i->m0,(U64)si1+16U);
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l0;
si1=12U;
si0+=si1;
si1=l6;
si2=12U;
si1+=si2;
si2=12U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
goto L1;
L28:;
si0=l0;
si1=l6;
sj1=i64_load(&i->m0,(U64)si1+16U);
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l0;
si1=12U;
si0+=si1;
si1=l6;
si2=12U;
si1+=si2;
si2=12U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
goto L1;
L27:;
si0=l0;
si1=l6;
sj1=i64_load(&i->m0,(U64)si1+16U);
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l0;
si1=12U;
si0+=si1;
si1=l6;
si2=12U;
si1+=si2;
si2=12U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
goto L1;
L26:;
si0=l0;
si1=l6;
sj1=i64_load(&i->m0,(U64)si1+16U);
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l0;
si1=12U;
si0+=si1;
si1=l6;
si2=12U;
si1+=si2;
si2=12U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
L1:;
si0=l0;
si1=l21;
i32_store(&i->m0,(U64)si0,si1);
si0=l6;
si1=32U;
si0+=si1;
i->g0=si0;
L0:;
}

void f1782(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4) {
U32 l5=0;
U32 l6=0;
U32 si0,si1,si2,si3;
U64 sj1;
si0=i->g0;
si1=32U;
si0-=si1;
l5=si0;
i->g0=si0;
si0=l3;
if(si0){
goto L2;
}
si0=0U;
l6=si0;
goto L1;
L2:;
si0=l3;
si1=56U;
si0*=si1;
l3=si0;
L4:;
{
si0=l5;
si1=12U;
si0+=si1;
si1=l1;
si2=l2;
si3=l4;
f1774(i,si0,si1,si2,si3);
si0=l5;
si0=i32_load(&i->m0,(U64)si0+12U);
l6=si0;
if(si0){
goto L3;
}
si0=l2;
si1=56U;
si0+=si1;
l2=si0;
si0=l3;
si1=-56U;
si0+=si1;
l3=si0;
if(si0){
goto L4;
}
}
si0=0U;
l6=si0;
goto L1;
L3:;
si0=l0;
si1=l5;
sj1=i64_load(&i->m0,(U64)si1+16U);
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l0;
si1=12U;
si0+=si1;
si1=l5;
si2=12U;
si1+=si2;
si2=12U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
L1:;
si0=l0;
si1=l6;
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=32U;
si0+=si1;
i->g0=si0;
L0:;
}

void f1783(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4,U32 l5,U32 l6,U32 l7) {
U32 l8=0;
U32 l9=0;
U32 si0,si1,si2,si3,si4,si5,si6;
U64 sj1;
si0=i->g0;
si1=32U;
si0-=si1;
l8=si0;
i->g0=si0;
si0=l1;
si1=16961998U;
si2=7U;
si3=3U;
si4=l6;
f1770(i,si0,si1,si2,si3,si4);
si0=l8;
si1=12U;
si0+=si1;
si1=l1;
si2=16962029U;
si3=2U;
si4=6U;
si5=l6;
si6=l7;
f1780(i,si0,si1,si2,si3,si4,si5,si6);
si0=l8;
si0=i32_load(&i->m0,(U64)si0+12U);
l7=si0;
if(si0){
goto L5;
}
si0=l8;
si1=12U;
si0+=si1;
si1=l1;
si2=l2;
si3=0U;
f1774(i,si0,si1,si2,si3);
si0=l8;
si0=i32_load(&i->m0,(U64)si0+12U);
l7=si0;
if(si0){
goto L6;
}
si0=l3;
si0=!(si0);
if(si0){
goto L7;
}
si0=l8;
si1=12U;
si0+=si1;
si1=l1;
si2=l3;
si3=0U;
f1774(i,si0,si1,si2,si3);
si0=l8;
si0=i32_load(&i->m0,(U64)si0+12U);
l7=si0;
if(si0){
goto L2;
}
L7:;
si0=l5;
si0=!(si0);
if(si0){
goto L4;
}
si0=l4;
si1=l5;
si2=7U;
si1<<=(si2&31);
si0+=si1;
l9=si0;
si0=1U;
l6=si0;
si0=l4;
l3=si0;
L9:;
{
si0=l8;
si1=12U;
si0+=si1;
si1=l1;
si2=l3;
si3=3U;
f1774(i,si0,si1,si2,si3);
si0=l8;
si0=i32_load(&i->m0,(U64)si0+12U);
l7=si0;
if(si0){
goto L12;
}
si0=l6;
si1=1U;
si0&=si1;
si0=!(si0);
if(si0){
goto L11;
}
goto L10;
L12:;
si0=l0;
si1=l8;
sj1=i64_load(&i->m0,(U64)si1+16U);
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l0;
si1=12U;
si0+=si1;
si1=l8;
si2=12U;
si1+=si2;
si2=12U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
goto L1;
L11:;
si0=l8;
si1=12U;
si0+=si1;
si1=l1;
si2=l3;
si3=56U;
si2+=si3;
si3=4U;
f1774(i,si0,si1,si2,si3);
si0=l8;
si0=i32_load(&i->m0,(U64)si0+12U);
l7=si0;
si0=!(si0);
if(si0){
goto L10;
}
si0=l0;
si1=l8;
sj1=i64_load(&i->m0,(U64)si1+16U);
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l0;
si1=12U;
si0+=si1;
si1=l8;
si2=12U;
si1+=si2;
si2=12U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
goto L1;
L10:;
si0=l3;
si1=120U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
si0=!(si0);
if(si0){
goto L13;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0+112U);
l6=si0;
si0=l7;
si1=56U;
si0*=si1;
l2=si0;
L14:;
{
si0=l8;
si1=12U;
si0+=si1;
si1=l1;
si2=l6;
si3=0U;
f1774(i,si0,si1,si2,si3);
si0=l8;
si0=i32_load(&i->m0,(U64)si0+12U);
l7=si0;
if(si0){
goto L8;
}
si0=l6;
si1=56U;
si0+=si1;
l6=si0;
si0=l2;
si1=-56U;
si0+=si1;
l2=si0;
if(si0){
goto L14;
}
}
L13:;
si0=0U;
l6=si0;
si0=l3;
si1=128U;
si0+=si1;
l3=si0;
si1=l9;
si0=si0 != si1;
if(si0){
goto L9;
}
}
si0=l1;
f1779(i,si0);
si0=l5;
si0=!(si0);
if(si0){
goto L3;
}
si0=l8;
si1=12U;
si0+=si1;
si1=l1;
si2=l4;
si3=56U;
si2+=si3;
si3=4U;
f1774(i,si0,si1,si2,si3);
si0=l8;
si0=i32_load(&i->m0,(U64)si0+12U);
l7=si0;
if(si0){
goto L15;
}
si0=0U;
l7=si0;
goto L1;
L15:;
si0=l0;
si1=l8;
sj1=i64_load(&i->m0,(U64)si1+16U);
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l0;
si1=12U;
si0+=si1;
si1=l8;
si2=12U;
si1+=si2;
si2=12U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
goto L1;
L8:;
si0=l0;
si1=l8;
sj1=i64_load(&i->m0,(U64)si1+16U);
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l0;
si1=12U;
si0+=si1;
si1=l8;
si2=12U;
si1+=si2;
si2=12U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
goto L1;
L6:;
si0=l0;
si1=l8;
sj1=i64_load(&i->m0,(U64)si1+16U);
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l0;
si1=12U;
si0+=si1;
si1=l8;
si2=12U;
si1+=si2;
si2=12U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
goto L1;
L5:;
si0=l0;
si1=l8;
sj1=i64_load(&i->m0,(U64)si1+16U);
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l0;
si1=12U;
si0+=si1;
si1=l8;
si2=12U;
si1+=si2;
si2=12U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
goto L1;
L4:;
si0=l1;
f1779(i,si0);
L3:;
si0=16962031U;
si1=40U;
si2=16962072U;
f604(i,si0,si1,si2);
UNREACHABLE;
L2:;
si0=l0;
si1=l8;
sj1=i64_load(&i->m0,(U64)si1+16U);
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l0;
si1=12U;
si0+=si1;
si1=l8;
si2=12U;
si1+=si2;
si2=12U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
L1:;
si0=l0;
si1=l7;
i32_store(&i->m0,(U64)si0,si1);
si0=l8;
si1=32U;
si0+=si1;
i->g0=si0;
L0:;
}

void f1784(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4) {
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
l5=si0;
i->g0=si0;
si0=l1;
if(si0){
goto L2;
}
si0=l0;
si1=l3;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=8U;
si0+=si1;
si1=l4;
i32_store(&i->m0,(U64)si0,si1);
goto L1;
L2:;
si0=l4;
si1=2U;
si0=si0 < si1;
if(si0){
goto L3;
}
si0=l3;
si0=i32_load16_u(&i->m0,(U64)si0);
si1=24415U;
si0=si0 != si1;
if(si0){
goto L3;
}
si0=l4;
si1=l3;
si0+=si1;
si1=-2U;
si0+=si1;
si0=i32_load16_u(&i->m0,(U64)si0);
si1=24415U;
si0=si0 == si1;
if(si0){
goto L3;
}
si0=l4;
si1=7U;
si0=si0 > si1;
if(si0){
goto L5;
}
si0=l3;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=46U;
si0=si0 == si1;
if(si0){
goto L3;
}
si0=l4;
si1=1U;
si0=si0 == si1;
if(si0){
goto L4;
}
si0=l3;
si0=i32_load8_u(&i->m0,(U64)si0+1U);
si1=46U;
si0=si0 == si1;
if(si0){
goto L3;
}
si0=l4;
si1=2U;
si0=si0 == si1;
if(si0){
goto L4;
}
si0=l3;
si0=i32_load8_u(&i->m0,(U64)si0+2U);
si1=46U;
si0=si0 == si1;
if(si0){
goto L3;
}
si0=l4;
si1=3U;
si0=si0 == si1;
if(si0){
goto L4;
}
si0=l3;
si0=i32_load8_u(&i->m0,(U64)si0+3U);
si1=46U;
si0=si0 == si1;
if(si0){
goto L3;
}
si0=l4;
si1=4U;
si0=si0 == si1;
if(si0){
goto L4;
}
si0=l3;
si0=i32_load8_u(&i->m0,(U64)si0+4U);
si1=46U;
si0=si0 == si1;
if(si0){
goto L3;
}
si0=l4;
si1=5U;
si0=si0 == si1;
if(si0){
goto L4;
}
si0=l3;
si0=i32_load8_u(&i->m0,(U64)si0+5U);
si1=46U;
si0=si0 == si1;
if(si0){
goto L3;
}
si0=l4;
si1=6U;
si0=si0 == si1;
if(si0){
goto L4;
}
si0=l3;
si0=i32_load8_u(&i->m0,(U64)si0+6U);
si1=46U;
si0=si0 != si1;
if(si0){
goto L4;
}
goto L3;
L5:;
si0=l3;
si1=3U;
si0+=si1;
si1=-4U;
si0&=si1;
l6=si0;
si1=l3;
si0=si0 == si1;
if(si0){
goto L8;
}
si0=l6;
si1=l3;
si0-=si1;
l7=si0;
si0=!(si0);
if(si0){
goto L8;
}
si0=l3;
si1=l6;
si0-=si1;
l8=si0;
si0=l3;
l6=si0;
L9:;
{
si0=l6;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=46U;
si0=si0 == si1;
if(si0){
goto L3;
}
si0=l6;
si1=1U;
si0+=si1;
l6=si0;
si0=l8;
si1=1U;
si0+=si1;
l8=si0;
if(si0){
goto L9;
}
}
si0=l7;
si1=l4;
si2=-8U;
si1+=si2;
l9=si1;
si0=si0 > si1;
if(si0){
goto L6;
}
goto L7;
L8:;
si0=l4;
si1=-8U;
si0+=si1;
l9=si0;
si0=0U;
l7=si0;
L7:;
L10:;
{
si0=l3;
si1=l7;
si0+=si1;
l8=si0;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si1=-1U;
si0^=si1;
si1=l6;
si2=774778414U;
si1^=si2;
si2=-16843009U;
si1+=si2;
si0&=si1;
si1=-2139062144U;
si0&=si1;
if(si0){
goto L6;
}
si0=l8;
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si1=-1U;
si0^=si1;
si1=l6;
si2=774778414U;
si1^=si2;
si2=-16843009U;
si1+=si2;
si0&=si1;
si1=-2139062144U;
si0&=si1;
if(si0){
goto L6;
}
si0=l7;
si1=8U;
si0+=si1;
l7=si0;
si1=l9;
si0=si0 <= si1;
if(si0){
goto L10;
}
}
L6:;
si0=l4;
si1=l7;
si0=si0 == si1;
if(si0){
goto L4;
}
si0=l4;
si1=l7;
si0-=si1;
l8=si0;
si0=l3;
si1=l7;
si0+=si1;
l6=si0;
L11:;
{
si0=l6;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=46U;
si0=si0 == si1;
if(si0){
goto L3;
}
si0=l6;
si1=1U;
si0+=si1;
l6=si0;
si0=l8;
si1=-1U;
si0+=si1;
l8=si0;
if(si0){
goto L11;
}
}
L4:;
si0=0U;
l6=si0;
si0=l2;
if(si0){
goto L13;
}
goto L12;
L13:;
si0=l1;
si0=i32_load8_s(&i->m0,(U64)si0);
l7=si0;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L15;
}
si0=l1;
si1=1U;
si0+=si1;
l6=si0;
si0=l7;
si1=255U;
si0&=si1;
l8=si0;
goto L14;
L15:;
si0=l1;
si0=i32_load8_u(&i->m0,(U64)si0+1U);
si1=63U;
si0&=si1;
l8=si0;
si0=l7;
si1=31U;
si0&=si1;
l9=si0;
si0=l7;
si1=-33U;
si0=si0 > si1;
if(si0){
goto L16;
}
si0=l9;
si1=6U;
si0<<=(si1&31);
si1=l8;
si0|=si1;
l8=si0;
si0=l1;
si1=2U;
si0+=si1;
l6=si0;
goto L14;
L16:;
si0=l8;
si1=6U;
si0<<=(si1&31);
si1=l1;
si1=i32_load8_u(&i->m0,(U64)si1+2U);
si2=63U;
si1&=si2;
si0|=si1;
l8=si0;
si0=l7;
si1=-16U;
si0=si0 >= si1;
if(si0){
goto L17;
}
si0=l8;
si1=l9;
si2=12U;
si1<<=(si2&31);
si0|=si1;
l8=si0;
si0=l1;
si1=3U;
si0+=si1;
l6=si0;
goto L14;
L17:;
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
l8=si0;
si1=1114112U;
si0=si0 == si1;
if(si0){
goto L12;
}
si0=l1;
si1=4U;
si0+=si1;
l6=si0;
L14:;
si0=l1;
si1=l2;
si2=l1;
si3=l2;
si2+=si3;
si1-=si2;
si2=l6;
si1+=si2;
l7=si1;
si0+=si1;
si1=0U;
si2=l8;
si3=95U;
si2=si2 == si3;
si0=si2?si0:si1;
l6=si0;
si0=l2;
si1=l7;
si0-=si1;
l7=si0;
L12:;
si0=l4;
si1=l7;
si2=l2;
si3=l6;
si1=si3?si1:si2;
l2=si1;
si0+=si1;
si1=1U;
si0+=si1;
l7=si0;
si0=!(si0);
if(si0){
goto L21;
}
si0=l7;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L19;
}
si0=0U;
l9=si0;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=l7;
si0=f15022(i,si0);
l8=si0;
si0=!(si0);
if(si0){
goto L18;
}
si0=l5;
si1=0U;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l5;
si1=l7;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l5;
si1=l8;
i32_store(&i->m0,(U64)si0+4U,si1);
goto L20;
L21:;
si0=l5;
si1=0U;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l5;
sj1=1ULL;
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l5;
si1=4U;
si0+=si1;
si1=0U;
f1795(i,si0,si1);
si0=l5;
si0=i32_load(&i->m0,(U64)si0+4U);
l8=si0;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+12U);
l9=si0;
L20:;
si0=l6;
si1=l1;
si2=l6;
si0=si2?si0:si1;
l6=si0;
si0=l8;
si1=l9;
si0+=si1;
si1=95U;
i32_store8(&i->m0,(U64)si0,si1);
si0=l5;
si1=l5;
si1=i32_load(&i->m0,(U64)si1+12U);
si2=1U;
si1+=si2;
l1=si1;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l5;
si0=i32_load(&i->m0,(U64)si0+8U);
si1=l1;
si0-=si1;
si1=l2;
si0=si0 >= si1;
if(si0){
goto L22;
}
si0=l5;
si1=4U;
si0+=si1;
si1=l1;
si2=l2;
f1803(i,si0,si1,si2);
si0=l5;
si0=i32_load(&i->m0,(U64)si0+12U);
l1=si0;
L22:;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+4U);
si1=l1;
si0+=si1;
si1=l6;
si2=l2;
si0=f15143(i,si0,si1,si2);
si0=l5;
si1=l1;
si2=l2;
si1+=si2;
l1=si1;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l5;
si0=i32_load(&i->m0,(U64)si0+8U);
si1=l1;
si0-=si1;
si1=l4;
si0=si0 >= si1;
if(si0){
goto L23;
}
si0=l5;
si1=4U;
si0+=si1;
si1=l1;
si2=l4;
f1803(i,si0,si1,si2);
si0=l5;
si0=i32_load(&i->m0,(U64)si0+12U);
l1=si0;
L23:;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+4U);
si1=l1;
si0+=si1;
si1=l3;
si2=l4;
si0=f15143(i,si0,si1,si2);
si0=l0;
si1=8U;
si0+=si1;
si1=l1;
si2=l4;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l5;
sj1=i64_load(&i->m0,(U64)si1+4U);
i64_store(&i->m0,(U64)si0,sj1);
goto L1;
L19:;
f53(i);
UNREACHABLE;
L18:;
si0=1U;
si1=l7;
f52(i,si0,si1);
UNREACHABLE;
L3:;
si0=l0;
si1=l3;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=8U;
si0+=si1;
si1=l4;
i32_store(&i->m0,(U64)si0,si1);
L1:;
si0=l5;
si1=16U;
si0+=si1;
i->g0=si0;
L0:;
}

U32 f1785(rustpythonInstance*i,U32 l0,U32 l1) {
U32 si0,si1,si2,si3,si4;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=l0;
si1=i32_load8_u(&i->m0,(U64)si1);
si2=2U;
si1<<=(si2&31);
l0=si1;
si2=16962668U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
si2=l0;
si3=16962652U;
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

U32 f1786(rustpythonInstance*i,U32 l0,U32 l1) {
U32 si0,si1,si2,si3,si4;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=l0;
si1=i32_load8_u(&i->m0,(U64)si1);
si2=2U;
si1<<=(si2&31);
l0=si1;
si2=16962708U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
si2=l0;
si3=16962684U;
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

void f1787(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
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
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
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
si0=f15030(i,si0,si1);
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
si0=f15030(i,si0,si1);
l3=si0;
si0=!(si0);
if(si0){
goto L4;
}
si0=l3;
si1=l5;
si2=l4;
si0=f15143(i,si0,si1,si2);
si0=l5;
f15024(i,si0);
goto L5;
L12:;
si0=l5;
si1=l2;
si0=f15027(i,si0,si1);
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
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
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
si0=f15030(i,si0,si1);
l3=si0;
goto L6;
L7:;
si0=l2;
si0=f15022(i,si0);
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

void f1788(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 si0,si1;
si0=l1;
if(si0){
goto L4;
}
si0=1U;
l2=si0;
goto L3;
L4:;
si0=l1;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L2;
}
si0=l2;
if(si0){
goto L6;
}
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=l1;
si0=f15022(i,si0);
l2=si0;
goto L5;
L6:;
si0=l1;
si1=1U;
si0=f15026(i,si0,si1);
l2=si0;
L5:;
si0=l2;
si0=!(si0);
if(si0){
goto L1;
}
L3:;
si0=l0;
si1=l1;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l2;
i32_store(&i->m0,(U64)si0,si1);
goto L0;
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

void f1789(rustpythonInstance*i,U32 l0,U32 l1) {
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
si0=i32_load(&i->m0,(U64)si0+4U);
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
si1=2U;
si0<<=(si1&31);
l4=si0;
si0=l1;
si1=536870912U;
si0=si0 < si1;
si1=2U;
si0<<=(si1&31);
l5=si0;
si0=l3;
si0=!(si0);
if(si0){
goto L4;
}
si0=l2;
si1=4U;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l2;
si1=l3;
si2=2U;
si1<<=(si2&31);
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l2;
si1=l0;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0+20U,si1);
goto L3;
L4:;
si0=l2;
si1=0U;
i32_store(&i->m0,(U64)si0+24U,si1);
L3:;
si0=l2;
si1=8U;
si0+=si1;
si1=l5;
si2=l4;
si3=l2;
si4=20U;
si3+=si4;
f1787(i,si0,si1,si2,si3);
si0=l2;
si0=i32_load(&i->m0,(U64)si0+12U);
l3=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+8U);
if(si0){
goto L5;
}
si0=l0;
si1=l1;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l3;
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
si2=16U;
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

void f1790(rustpythonInstance*i,U32 l0,U32 l1) {
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
si0=i32_load(&i->m0,(U64)si0+4U);
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
si1=5U;
si0<<=(si1&31);
l4=si0;
si0=l1;
si1=67108864U;
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
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l2;
si1=l3;
si2=5U;
si1<<=(si2&31);
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l2;
si1=l0;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0+20U,si1);
goto L3;
L4:;
si0=l2;
si1=0U;
i32_store(&i->m0,(U64)si0+24U,si1);
L3:;
si0=l2;
si1=8U;
si0+=si1;
si1=l5;
si2=l4;
si3=l2;
si4=20U;
si3+=si4;
f1787(i,si0,si1,si2,si3);
si0=l2;
si0=i32_load(&i->m0,(U64)si0+12U);
l3=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+8U);
if(si0){
goto L5;
}
si0=l0;
si1=l1;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l3;
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
si2=16U;
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

void f1791(rustpythonInstance*i,U32 l0,U32 l1) {
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
si0=i32_load(&i->m0,(U64)si0+4U);
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
si1=4U;
si0<<=(si1&31);
l4=si0;
si0=l1;
si1=134217728U;
si0=si0 < si1;
si1=2U;
si0<<=(si1&31);
l5=si0;
si0=l3;
si0=!(si0);
if(si0){
goto L4;
}
si0=l2;
si1=l0;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l2;
si1=4U;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l2;
si1=l3;
si2=4U;
si1<<=(si2&31);
i32_store(&i->m0,(U64)si0+28U,si1);
goto L3;
L4:;
si0=l2;
si1=0U;
i32_store(&i->m0,(U64)si0+24U,si1);
L3:;
si0=l2;
si1=8U;
si0+=si1;
si1=l5;
si2=l4;
si3=l2;
si4=20U;
si3+=si4;
f1787(i,si0,si1,si2,si3);
si0=l2;
si0=i32_load(&i->m0,(U64)si0+12U);
l3=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+8U);
if(si0){
goto L5;
}
si0=l0;
si1=l1;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l3;
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
si2=16U;
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

void f1792(rustpythonInstance*i,U32 l0,U32 l1) {
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
si0=i32_load(&i->m0,(U64)si0+4U);
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
si1=3U;
si0<<=(si1&31);
l4=si0;
si0=l1;
si1=268435456U;
si0=si0 < si1;
si1=2U;
si0<<=(si1&31);
l5=si0;
si0=l3;
si0=!(si0);
if(si0){
goto L4;
}
si0=l2;
si1=4U;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l2;
si1=l3;
si2=3U;
si1<<=(si2&31);
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l2;
si1=l0;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0+20U,si1);
goto L3;
L4:;
si0=l2;
si1=0U;
i32_store(&i->m0,(U64)si0+24U,si1);
L3:;
si0=l2;
si1=8U;
si0+=si1;
si1=l5;
si2=l4;
si3=l2;
si4=20U;
si3+=si4;
f1787(i,si0,si1,si2,si3);
si0=l2;
si0=i32_load(&i->m0,(U64)si0+12U);
l3=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+8U);
if(si0){
goto L5;
}
si0=l0;
si1=l1;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l3;
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
si2=16U;
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

void f1793(rustpythonInstance*i,U32 l0,U32 l1) {
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
si0=i32_load(&i->m0,(U64)si0+4U);
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
si1=24U;
si0*=si1;
l4=si0;
si0=l1;
si1=89478486U;
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
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l2;
si1=l3;
si2=24U;
si1*=si2;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l2;
si1=l0;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0+20U,si1);
goto L3;
L4:;
si0=l2;
si1=0U;
i32_store(&i->m0,(U64)si0+24U,si1);
L3:;
si0=l2;
si1=8U;
si0+=si1;
si1=l5;
si2=l4;
si3=l2;
si4=20U;
si3+=si4;
f1787(i,si0,si1,si2,si3);
si0=l2;
si0=i32_load(&i->m0,(U64)si0+12U);
l3=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+8U);
if(si0){
goto L5;
}
si0=l0;
si1=l1;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l3;
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
si2=16U;
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

void f1794(rustpythonInstance*i,U32 l0,U32 l1) {
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
si0=i32_load(&i->m0,(U64)si0+4U);
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
si1=12U;
si0*=si1;
l4=si0;
si0=l1;
si1=178956971U;
si0=si0 < si1;
si1=2U;
si0<<=(si1&31);
l5=si0;
si0=l3;
si0=!(si0);
if(si0){
goto L4;
}
si0=l2;
si1=4U;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l2;
si1=l3;
si2=12U;
si1*=si2;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l2;
si1=l0;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0+20U,si1);
goto L3;
L4:;
si0=l2;
si1=0U;
i32_store(&i->m0,(U64)si0+24U,si1);
L3:;
si0=l2;
si1=8U;
si0+=si1;
si1=l5;
si2=l4;
si3=l2;
si4=20U;
si3+=si4;
f1787(i,si0,si1,si2,si3);
si0=l2;
si0=i32_load(&i->m0,(U64)si0+12U);
l3=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+8U);
if(si0){
goto L5;
}
si0=l0;
si1=l1;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l3;
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
si2=16U;
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

void f1795(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 l3=0;
U32 l4=0;
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
si0=i32_load(&i->m0,(U64)si0+4U);
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
si1=8U;
si2=l1;
si3=8U;
si2=si2 > si3;
si0=si2?si0:si1;
l1=si0;
si1=-1U;
si0^=si1;
si1=31U;
si0>>=(si1&31);
l4=si0;
si0=l3;
si0=!(si0);
if(si0){
goto L4;
}
si0=l2;
si1=l3;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l2;
si1=1U;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l2;
si1=l0;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0+20U,si1);
goto L3;
L4:;
si0=l2;
si1=0U;
i32_store(&i->m0,(U64)si0+24U,si1);
L3:;
si0=l2;
si1=8U;
si0+=si1;
si1=l4;
si2=l1;
si3=l2;
si4=20U;
si3+=si4;
f1787(i,si0,si1,si2,si3);
si0=l2;
si0=i32_load(&i->m0,(U64)si0+12U);
l3=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+8U);
if(si0){
goto L5;
}
si0=l0;
si1=l1;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l3;
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
si2=16U;
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

void f1796(rustpythonInstance*i,U32 l0,U32 l1) {
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
si0=i32_load(&i->m0,(U64)si0+4U);
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
si1=20U;
si0*=si1;
l4=si0;
si0=l1;
si1=107374183U;
si0=si0 < si1;
si1=2U;
si0<<=(si1&31);
l5=si0;
si0=l3;
si0=!(si0);
if(si0){
goto L4;
}
si0=l2;
si1=4U;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l2;
si1=l3;
si2=20U;
si1*=si2;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l2;
si1=l0;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0+20U,si1);
goto L3;
L4:;
si0=l2;
si1=0U;
i32_store(&i->m0,(U64)si0+24U,si1);
L3:;
si0=l2;
si1=8U;
si0+=si1;
si1=l5;
si2=l4;
si3=l2;
si4=20U;
si3+=si4;
f1787(i,si0,si1,si2,si3);
si0=l2;
si0=i32_load(&i->m0,(U64)si0+12U);
l3=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+8U);
if(si0){
goto L5;
}
si0=l0;
si1=l1;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l3;
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
si2=16U;
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

void f1797(rustpythonInstance*i,U32 l0,U32 l1) {
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
si0=i32_load(&i->m0,(U64)si0+4U);
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
si1=5U;
si0<<=(si1&31);
l4=si0;
si0=l1;
si1=67108864U;
si0=si0 < si1;
si1=2U;
si0<<=(si1&31);
l5=si0;
si0=l3;
si0=!(si0);
if(si0){
goto L4;
}
si0=l2;
si1=4U;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l2;
si1=l3;
si2=5U;
si1<<=(si2&31);
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l2;
si1=l0;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0+20U,si1);
goto L3;
L4:;
si0=l2;
si1=0U;
i32_store(&i->m0,(U64)si0+24U,si1);
L3:;
si0=l2;
si1=8U;
si0+=si1;
si1=l5;
si2=l4;
si3=l2;
si4=20U;
si3+=si4;
f1787(i,si0,si1,si2,si3);
si0=l2;
si0=i32_load(&i->m0,(U64)si0+12U);
l3=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+8U);
if(si0){
goto L5;
}
si0=l0;
si1=l1;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l3;
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
si2=16U;
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

void f1798(rustpythonInstance*i,U32 l0,U32 l1) {
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
si0=i32_load(&i->m0,(U64)si0+4U);
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
si1=384U;
si0*=si1;
l4=si0;
si0=l1;
si1=5592406U;
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
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l2;
si1=l3;
si2=384U;
si1*=si2;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l2;
si1=l0;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0+20U,si1);
goto L3;
L4:;
si0=l2;
si1=0U;
i32_store(&i->m0,(U64)si0+24U,si1);
L3:;
si0=l2;
si1=8U;
si0+=si1;
si1=l5;
si2=l4;
si3=l2;
si4=20U;
si3+=si4;
f1787(i,si0,si1,si2,si3);
si0=l2;
si0=i32_load(&i->m0,(U64)si0+12U);
l3=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+8U);
if(si0){
goto L5;
}
si0=l0;
si1=l1;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l3;
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
si2=16U;
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

void f1799(rustpythonInstance*i,U32 l0,U32 l1) {
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
si0=i32_load(&i->m0,(U64)si0+4U);
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
si1=96U;
si0*=si1;
l4=si0;
si0=l1;
si1=22369622U;
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
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l2;
si1=l3;
si2=96U;
si1*=si2;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l2;
si1=l0;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0+20U,si1);
goto L3;
L4:;
si0=l2;
si1=0U;
i32_store(&i->m0,(U64)si0+24U,si1);
L3:;
si0=l2;
si1=8U;
si0+=si1;
si1=l5;
si2=l4;
si3=l2;
si4=20U;
si3+=si4;
f1787(i,si0,si1,si2,si3);
si0=l2;
si0=i32_load(&i->m0,(U64)si0+12U);
l3=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+8U);
if(si0){
goto L5;
}
si0=l0;
si1=l1;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l3;
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
si2=16U;
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

void f1800(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
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
si0=i32_load(&i->m0,(U64)si0+4U);
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
si1=2U;
si0<<=(si1&31);
l4=si0;
si0=l2;
si1=536870912U;
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
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l3;
si1=l1;
si2=2U;
si1<<=(si2&31);
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l3;
si1=l0;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0+20U,si1);
goto L3;
L4:;
si0=l3;
si1=0U;
i32_store(&i->m0,(U64)si0+24U,si1);
L3:;
si0=l3;
si1=8U;
si0+=si1;
si1=l5;
si2=l4;
si3=l3;
si4=20U;
si3+=si4;
f1787(i,si0,si1,si2,si3);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+12U);
l1=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+8U);
if(si0){
goto L5;
}
si0=l0;
si1=l2;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l1;
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
si2=16U;
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

void f1801(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
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
si0=i32_load(&i->m0,(U64)si0+4U);
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
si1=12U;
si0*=si1;
l4=si0;
si0=l2;
si1=178956971U;
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
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l3;
si1=l1;
si2=12U;
si1*=si2;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l3;
si1=l0;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0+20U,si1);
goto L3;
L4:;
si0=l3;
si1=0U;
i32_store(&i->m0,(U64)si0+24U,si1);
L3:;
si0=l3;
si1=8U;
si0+=si1;
si1=l5;
si2=l4;
si3=l3;
si4=20U;
si3+=si4;
f1787(i,si0,si1,si2,si3);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+12U);
l1=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+8U);
if(si0){
goto L5;
}
si0=l0;
si1=l2;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l1;
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
si2=16U;
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

void f1802(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
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
si0=i32_load(&i->m0,(U64)si0+4U);
l4=si0;
si1=1U;
si0<<=(si1&31);
l1=si0;
si1=l2;
si2=l1;
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
si1=1073741824U;
si0=si0 < si1;
l5=si0;
si0=l2;
si1=1U;
si0<<=(si1&31);
l6=si0;
si0=l4;
si0=!(si0);
if(si0){
goto L4;
}
si0=l3;
si1=l1;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l3;
si1=1U;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l3;
si1=l0;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0+20U,si1);
goto L3;
L4:;
si0=l3;
si1=0U;
i32_store(&i->m0,(U64)si0+24U,si1);
L3:;
si0=l3;
si1=8U;
si0+=si1;
si1=l5;
si2=l6;
si3=l3;
si4=20U;
si3+=si4;
f1787(i,si0,si1,si2,si3);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+12U);
l1=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+8U);
if(si0){
goto L5;
}
si0=l0;
si1=l2;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l1;
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
si2=16U;
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

void f1803(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
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
si0=i32_load(&i->m0,(U64)si0+4U);
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
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l3;
si1=1U;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l3;
si1=l0;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0+20U,si1);
goto L3;
L4:;
si0=l3;
si1=0U;
i32_store(&i->m0,(U64)si0+24U,si1);
L3:;
si0=l3;
si1=8U;
si0+=si1;
si1=l4;
si2=l2;
si3=l3;
si4=20U;
si3+=si4;
f1787(i,si0,si1,si2,si3);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+12U);
l1=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+8U);
if(si0){
goto L5;
}
si0=l0;
si1=l2;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l1;
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
si2=16U;
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

U32 f1804(rustpythonInstance*i,U32 l0,U32 l1) {
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
si1=1102129U;
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
i32_store8(&i->m0,(U64)si0+9U,si1);
si0=l2;
si1=l5;
i32_store8(&i->m0,(U64)si0+8U,si1);
si0=l2;
si1=l1;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l3;
si0=!(si0);
if(si0){
goto L1;
}
si0=l3;
si1=80U;
si0*=si1;
l1=si0;
L2:;
{
si0=l2;
si1=l0;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l2;
si1=4U;
si0+=si1;
si1=l2;
si2=12U;
si1+=si2;
si2=16969880U;
f646(i,si0,si1,si2);
si0=l0;
si1=80U;
si0+=si1;
l0=si0;
si0=l1;
si1=-80U;
si0+=si1;
l1=si0;
if(si0){
goto L2;
}
}
si0=l2;
si0=i32_load8_u(&i->m0,(U64)si0+8U);
l5=si0;
L1:;
si0=l5;
si1=255U;
si0&=si1;
if(si0){
goto L3;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0+4U);
l0=si0;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=1102508U;
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

U32 f1805(rustpythonInstance*i,U32 l0,U32 l1) {
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
si0=i32_load(&i->m0,(U64)si0+8U);
l3=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
l0=si0;
si0=1U;
l4=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=1102129U;
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
i32_store8(&i->m0,(U64)si0+9U,si1);
si0=l2;
si1=l5;
i32_store8(&i->m0,(U64)si0+8U,si1);
si0=l2;
si1=l1;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l3;
si0=!(si0);
if(si0){
goto L1;
}
si0=l3;
si1=36U;
si0*=si1;
l1=si0;
L2:;
{
si0=l2;
si1=l0;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l2;
si1=4U;
si0+=si1;
si1=l2;
si2=12U;
si1+=si2;
si2=16970008U;
f646(i,si0,si1,si2);
si0=l0;
si1=36U;
si0+=si1;
l0=si0;
si0=l1;
si1=-36U;
si0+=si1;
l1=si0;
if(si0){
goto L2;
}
}
si0=l2;
si0=i32_load8_u(&i->m0,(U64)si0+8U);
l5=si0;
L1:;
si0=l5;
si1=255U;
si0&=si1;
if(si0){
goto L3;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0+4U);
l0=si0;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=1102508U;
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

U32 f1806(rustpythonInstance*i,U32 l0,U32 l1) {
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
si0=i32_load(&i->m0,(U64)si0+8U);
l3=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
l0=si0;
si0=1U;
l4=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=1102129U;
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
i32_store8(&i->m0,(U64)si0+9U,si1);
si0=l2;
si1=l5;
i32_store8(&i->m0,(U64)si0+8U,si1);
si0=l2;
si1=l1;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l3;
si0=!(si0);
if(si0){
goto L1;
}
si0=l3;
si1=56U;
si0*=si1;
l1=si0;
L2:;
{
si0=l2;
si1=l0;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l2;
si1=4U;
si0+=si1;
si1=l2;
si2=12U;
si1+=si2;
si2=16970088U;
f646(i,si0,si1,si2);
si0=l0;
si1=56U;
si0+=si1;
l0=si0;
si0=l1;
si1=-56U;
si0+=si1;
l1=si0;
if(si0){
goto L2;
}
}
si0=l2;
si0=i32_load8_u(&i->m0,(U64)si0+8U);
l5=si0;
L1:;
si0=l5;
si1=255U;
si0&=si1;
if(si0){
goto L3;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0+4U);
l0=si0;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=1102508U;
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

U32 f1807(rustpythonInstance*i,U32 l0,U32 l1) {
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
si0=i32_load(&i->m0,(U64)si0+8U);
l3=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
l0=si0;
si0=1U;
l4=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=1102129U;
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
i32_store8(&i->m0,(U64)si0+9U,si1);
si0=l2;
si1=l5;
i32_store8(&i->m0,(U64)si0+8U,si1);
si0=l2;
si1=l1;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l3;
si0=!(si0);
if(si0){
goto L1;
}
si0=l3;
si1=12U;
si0*=si1;
l1=si0;
L2:;
{
si0=l2;
si1=l0;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l2;
si1=4U;
si0+=si1;
si1=l2;
si2=12U;
si1+=si2;
si2=16970040U;
f646(i,si0,si1,si2);
si0=l0;
si1=12U;
si0+=si1;
l0=si0;
si0=l1;
si1=-12U;
si0+=si1;
l1=si0;
if(si0){
goto L2;
}
}
si0=l2;
si0=i32_load8_u(&i->m0,(U64)si0+8U);
l5=si0;
L1:;
si0=l5;
si1=255U;
si0&=si1;
if(si0){
goto L3;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0+4U);
l0=si0;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=1102508U;
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

U32 f1808(rustpythonInstance*i,U32 l0,U32 l1) {
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
si0=i32_load(&i->m0,(U64)si0+8U);
l3=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
l0=si0;
si0=1U;
l4=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=1102129U;
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
i32_store8(&i->m0,(U64)si0+9U,si1);
si0=l2;
si1=l5;
i32_store8(&i->m0,(U64)si0+8U,si1);
si0=l2;
si1=l1;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l3;
si0=!(si0);
if(si0){
goto L1;
}
si0=l3;
si1=40U;
si0*=si1;
l1=si0;
L2:;
{
si0=l2;
si1=l0;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l2;
si1=4U;
si0+=si1;
si1=l2;
si2=12U;
si1+=si2;
si2=16969976U;
f646(i,si0,si1,si2);
si0=l0;
si1=40U;
si0+=si1;
l0=si0;
si0=l1;
si1=-40U;
si0+=si1;
l1=si0;
if(si0){
goto L2;
}
}
si0=l2;
si0=i32_load8_u(&i->m0,(U64)si0+8U);
l5=si0;
L1:;
si0=l5;
si1=255U;
si0&=si1;
if(si0){
goto L3;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0+4U);
l0=si0;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=1102508U;
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

U32 f1809(rustpythonInstance*i,U32 l0,U32 l1) {
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
si0=i32_load(&i->m0,(U64)si0+8U);
l3=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
l0=si0;
si0=1U;
l4=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=1102129U;
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
i32_store8(&i->m0,(U64)si0+9U,si1);
si0=l2;
si1=l5;
i32_store8(&i->m0,(U64)si0+8U,si1);
si0=l2;
si1=l1;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l3;
si0=!(si0);
if(si0){
goto L1;
}
si0=l3;
si1=88U;
si0*=si1;
l1=si0;
L2:;
{
si0=l2;
si1=l0;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l2;
si1=4U;
si0+=si1;
si1=l2;
si2=12U;
si1+=si2;
si2=16970056U;
f646(i,si0,si1,si2);
si0=l0;
si1=88U;
si0+=si1;
l0=si0;
si0=l1;
si1=-88U;
si0+=si1;
l1=si0;
if(si0){
goto L2;
}
}
si0=l2;
si0=i32_load8_u(&i->m0,(U64)si0+8U);
l5=si0;
L1:;
si0=l5;
si1=255U;
si0&=si1;
if(si0){
goto L3;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0+4U);
l0=si0;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=1102508U;
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

U32 f1810(rustpythonInstance*i,U32 l0,U32 l1) {
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
si0=i32_load(&i->m0,(U64)si0+8U);
l3=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
l0=si0;
si0=1U;
l4=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=1102129U;
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
i32_store8(&i->m0,(U64)si0+9U,si1);
si0=l2;
si1=l5;
i32_store8(&i->m0,(U64)si0+8U,si1);
si0=l2;
si1=l1;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l3;
si0=!(si0);
if(si0){
goto L1;
}
si0=l3;
si1=6U;
si0<<=(si1&31);
l1=si0;
L2:;
{
si0=l2;
si1=l0;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l2;
si1=4U;
si0+=si1;
si1=l2;
si2=12U;
si1+=si2;
si2=16969992U;
f646(i,si0,si1,si2);
si0=l0;
si1=64U;
si0+=si1;
l0=si0;
si0=l1;
si1=-64U;
si0+=si1;
l1=si0;
if(si0){
goto L2;
}
}
si0=l2;
si0=i32_load8_u(&i->m0,(U64)si0+8U);
l5=si0;
L1:;
si0=l5;
si1=255U;
si0&=si1;
if(si0){
goto L3;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0+4U);
l0=si0;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=1102508U;
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

U32 f1811(rustpythonInstance*i,U32 l0,U32 l1) {
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
si0=i32_load(&i->m0,(U64)si0+8U);
l3=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
l0=si0;
si0=1U;
l4=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=1102129U;
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
i32_store8(&i->m0,(U64)si0+9U,si1);
si0=l2;
si1=l5;
i32_store8(&i->m0,(U64)si0+8U,si1);
si0=l2;
si1=l1;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l3;
si0=!(si0);
if(si0){
goto L1;
}
si0=l3;
si1=92U;
si0*=si1;
l1=si0;
L2:;
{
si0=l2;
si1=l0;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l2;
si1=4U;
si0+=si1;
si1=l2;
si2=12U;
si1+=si2;
si2=16970024U;
f646(i,si0,si1,si2);
si0=l0;
si1=92U;
si0+=si1;
l0=si0;
si0=l1;
si1=-92U;
si0+=si1;
l1=si0;
if(si0){
goto L2;
}
}
si0=l2;
si0=i32_load8_u(&i->m0,(U64)si0+8U);
l5=si0;
L1:;
si0=l5;
si1=255U;
si0&=si1;
if(si0){
goto L3;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0+4U);
l0=si0;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=1102508U;
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

U32 f1812(rustpythonInstance*i,U32 l0,U32 l1) {
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
si1=1102129U;
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
i32_store8(&i->m0,(U64)si0+9U,si1);
si0=l2;
si1=l5;
i32_store8(&i->m0,(U64)si0+8U,si1);
si0=l2;
si1=l1;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l3;
si0=!(si0);
if(si0){
goto L1;
}
si0=l3;
si1=7U;
si0<<=(si1&31);
l1=si0;
L2:;
{
si0=l2;
si1=l0;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l2;
si1=4U;
si0+=si1;
si1=l2;
si2=12U;
si1+=si2;
si2=16969944U;
f646(i,si0,si1,si2);
si0=l0;
si1=128U;
si0+=si1;
l0=si0;
si0=l1;
si1=-128U;
si0+=si1;
l1=si0;
if(si0){
goto L2;
}
}
si0=l2;
si0=i32_load8_u(&i->m0,(U64)si0+8U);
l5=si0;
L1:;
si0=l5;
si1=255U;
si0&=si1;
if(si0){
goto L3;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0+4U);
l0=si0;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=1102508U;
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

void f1813(rustpythonInstance*i,U32 l0) {
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
si1=20U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si0=!(si0);
if(si0){
goto L29;
}
si0=l2;
f1813(i,si0);
si0=l2;
f15024(i,si0);
L29:;
si0=l0;
si1=24U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si0=!(si0);
if(si0){
goto L30;
}
si0=l2;
f1813(i,si0);
si0=l2;
f15024(i,si0);
L30:;
si0=l0;
si1=28U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si0=!(si0);
if(si0){
goto L1;
}
si0=l2;
f1813(i,si0);
si0=l2;
f15024(i,si0);
goto L0;
L27:;
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
goto L31;
}
si0=l3;
l2=si0;
L32:;
{
si0=l2;
f1813(i,si0);
si0=l2;
si1=56U;
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
si1=24U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L1;
}
si0=l3;
f15024(i,si0);
goto L0;
L26:;
si0=l0;
si1=20U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
f1813(i,si0);
si0=l2;
f15024(i,si0);
si0=l0;
si1=24U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
f1813(i,si0);
si0=l2;
f15024(i,si0);
goto L0;
L25:;
si0=l0;
si1=20U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
f1813(i,si0);
si0=l2;
f15024(i,si0);
si0=l0;
si1=24U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
f1813(i,si0);
si0=l2;
f15024(i,si0);
goto L0;
L24:;
si0=l0;
si1=20U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
f1813(i,si0);
si0=l2;
f15024(i,si0);
goto L0;
L23:;
si0=l0;
si1=20U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
si0=i32_load(&i->m0,(U64)si0+8U);
l3=si0;
si0=!(si0);
if(si0){
goto L33;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
si1=44U;
si0+=si1;
l2=si0;
L34:;
{
si0=l2;
si1=-24U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L35;
}
si0=l2;
si1=-28U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
f15024(i,si0);
L35:;
si0=l2;
si1=-16U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si0=!(si0);
if(si0){
goto L36;
}
si0=l1;
f1813(i,si0);
si0=l1;
f15024(i,si0);
L36:;
si0=l2;
si1=-12U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si0=!(si0);
if(si0){
goto L37;
}
si0=l2;
si1=-8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L37;
}
si0=l1;
f15024(i,si0);
L37:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si0=!(si0);
if(si0){
goto L38;
}
si0=l1;
f1813(i,si0);
si0=l1;
f15024(i,si0);
L38:;
si0=l2;
si1=48U;
si0+=si1;
l2=si0;
si0=l3;
si1=-1U;
si0+=si1;
l3=si0;
if(si0){
goto L34;
}
}
L33:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+4U);
si0=!(si0);
if(si0){
goto L39;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
f15024(i,si0);
L39:;
si0=l4;
si1=20U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=!(si0);
if(si0){
goto L40;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0+12U);
si1=44U;
si0+=si1;
l2=si0;
L41:;
{
si0=l2;
si1=-24U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L42;
}
si0=l2;
si1=-28U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
f15024(i,si0);
L42:;
si0=l2;
si1=-16U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si0=!(si0);
if(si0){
goto L43;
}
si0=l1;
f1813(i,si0);
si0=l1;
f15024(i,si0);
L43:;
si0=l2;
si1=-12U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si0=!(si0);
if(si0){
goto L44;
}
si0=l2;
si1=-8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L44;
}
si0=l1;
f15024(i,si0);
L44:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si0=!(si0);
if(si0){
goto L45;
}
si0=l1;
f1813(i,si0);
si0=l1;
f15024(i,si0);
L45:;
si0=l2;
si1=48U;
si0+=si1;
l2=si0;
si0=l3;
si1=-1U;
si0+=si1;
l3=si0;
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
f15024(i,si0);
L46:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+36U);
l2=si0;
si0=!(si0);
if(si0){
goto L47;
}
si0=l2;
si1=20U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L48;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0+16U);
f15024(i,si0);
L48:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+28U);
si0=!(si0);
if(si0){
goto L49;
}
si0=l2;
si1=28U;
si0+=si1;
f1814(i,si0);
L49:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+32U);
l1=si0;
si0=!(si0);
if(si0){
goto L50;
}
si0=l2;
si1=36U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L50;
}
si0=l1;
f15024(i,si0);
L50:;
si0=l2;
f15024(i,si0);
L47:;
si0=l4;
si1=32U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=!(si0);
if(si0){
goto L51;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0+24U);
si1=44U;
si0+=si1;
l2=si0;
L52:;
{
si0=l2;
si1=-24U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L53;
}
si0=l2;
si1=-28U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
f15024(i,si0);
L53:;
si0=l2;
si1=-16U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si0=!(si0);
if(si0){
goto L54;
}
si0=l1;
f1813(i,si0);
si0=l1;
f15024(i,si0);
L54:;
si0=l2;
si1=-12U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si0=!(si0);
if(si0){
goto L55;
}
si0=l2;
si1=-8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L55;
}
si0=l1;
f15024(i,si0);
L55:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si0=!(si0);
if(si0){
goto L56;
}
si0=l1;
f1813(i,si0);
si0=l1;
f15024(i,si0);
L56:;
si0=l2;
si1=48U;
si0+=si1;
l2=si0;
si0=l3;
si1=-1U;
si0+=si1;
l3=si0;
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
f15024(i,si0);
L57:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+40U);
l2=si0;
si0=!(si0);
if(si0){
goto L58;
}
si0=l2;
si1=20U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L59;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0+16U);
f15024(i,si0);
L59:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+28U);
si0=!(si0);
if(si0){
goto L60;
}
si0=l2;
si1=28U;
si0+=si1;
f1814(i,si0);
L60:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+32U);
l1=si0;
si0=!(si0);
if(si0){
goto L61;
}
si0=l2;
si1=36U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L61;
}
si0=l1;
f15024(i,si0);
L61:;
si0=l2;
f15024(i,si0);
L58:;
si0=l4;
f15024(i,si0);
si0=l0;
si1=24U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
f1813(i,si0);
si0=l2;
f15024(i,si0);
goto L0;
L22:;
si0=l0;
si1=20U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
f1813(i,si0);
si0=l2;
f15024(i,si0);
si0=l0;
si1=24U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
f1813(i,si0);
si0=l2;
f15024(i,si0);
si0=l0;
si1=28U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
f1813(i,si0);
si0=l2;
f15024(i,si0);
goto L0;
L21:;
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
goto L62;
}
si0=l3;
l2=si0;
L63:;
{
si0=l2;
si0=i32_load(&i->m0,(U64)si0);
si1=38U;
si0=si0 == si1;
if(si0){
goto L64;
}
si0=l2;
f1813(i,si0);
L64:;
si0=l2;
si1=56U;
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
si0=l0;
si1=24U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L65;
}
si0=l3;
f15024(i,si0);
L65:;
si0=l0;
si1=32U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=l0;
si1=40U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si0=!(si0);
if(si0){
goto L66;
}
si0=l3;
l2=si0;
L67:;
{
si0=l2;
f1813(i,si0);
si0=l2;
si1=56U;
si0+=si1;
l2=si0;
si0=l1;
si1=-1U;
si0+=si1;
l1=si0;
if(si0){
goto L67;
}
}
L66:;
si0=l0;
si1=36U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L1;
}
si0=l3;
f15024(i,si0);
goto L0;
L20:;
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
goto L68;
}
si0=l3;
l2=si0;
L69:;
{
si0=l2;
f1813(i,si0);
si0=l2;
si1=56U;
si0+=si1;
l2=si0;
si0=l1;
si1=-1U;
si0+=si1;
l1=si0;
if(si0){
goto L69;
}
}
L68:;
si0=l0;
si1=24U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L1;
}
si0=l3;
f15024(i,si0);
goto L0;
L19:;
si0=l0;
si1=20U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
f1813(i,si0);
si0=l2;
f15024(i,si0);
si0=l0;
si1=24U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si0=l0;
si1=32U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si0=!(si0);
if(si0){
goto L70;
}
si0=0U;
l4=si0;
L71:;
{
si0=l5;
si1=l4;
si2=7U;
si1<<=(si2&31);
si0+=si1;
l3=si0;
f1813(i,si0);
si0=l3;
si1=56U;
si0+=si1;
f1813(i,si0);
si0=l3;
si1=120U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si0=!(si0);
if(si0){
goto L72;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0+112U);
l2=si0;
L73:;
{
si0=l2;
f1813(i,si0);
si0=l2;
si1=56U;
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
si1=112U;
si0+=si1;
l2=si0;
si0=i32_load(&i->m0,(U64)si0+4U);
si0=!(si0);
if(si0){
goto L74;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0);
f15024(i,si0);
L74:;
si0=l4;
si1=1U;
si0+=si1;
l4=si0;
si1=l6;
si0=si0 != si1;
if(si0){
goto L71;
}
}
L70:;
si0=l0;
si1=28U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L1;
}
si0=l5;
f15024(i,si0);
goto L0;
L18:;
si0=l0;
si1=20U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
f1813(i,si0);
si0=l2;
f15024(i,si0);
si0=l0;
si1=24U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si0=l0;
si1=32U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si0=!(si0);
if(si0){
goto L75;
}
si0=0U;
l4=si0;
L76:;
{
si0=l5;
si1=l4;
si2=7U;
si1<<=(si2&31);
si0+=si1;
l3=si0;
f1813(i,si0);
si0=l3;
si1=56U;
si0+=si1;
f1813(i,si0);
si0=l3;
si1=120U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si0=!(si0);
if(si0){
goto L77;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0+112U);
l2=si0;
L78:;
{
si0=l2;
f1813(i,si0);
si0=l2;
si1=56U;
si0+=si1;
l2=si0;
si0=l1;
si1=-1U;
si0+=si1;
l1=si0;
if(si0){
goto L78;
}
}
L77:;
si0=l3;
si1=112U;
si0+=si1;
l2=si0;
si0=i32_load(&i->m0,(U64)si0+4U);
si0=!(si0);
if(si0){
goto L79;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0);
f15024(i,si0);
L79:;
si0=l4;
si1=1U;
si0+=si1;
l4=si0;
si1=l6;
si0=si0 != si1;
if(si0){
goto L76;
}
}
L75:;
si0=l0;
si1=28U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L1;
}
si0=l5;
f15024(i,si0);
goto L0;
L17:;
si0=l0;
si1=20U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
f1813(i,si0);
si0=l2;
f15024(i,si0);
si0=l0;
si1=24U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
f1813(i,si0);
si0=l2;
f15024(i,si0);
si0=l0;
si1=28U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si0=l0;
si1=36U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si0=!(si0);
if(si0){
goto L80;
}
si0=0U;
l4=si0;
L81:;
{
si0=l5;
si1=l4;
si2=7U;
si1<<=(si2&31);
si0+=si1;
l3=si0;
f1813(i,si0);
si0=l3;
si1=56U;
si0+=si1;
f1813(i,si0);
si0=l3;
si1=120U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si0=!(si0);
if(si0){
goto L82;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0+112U);
l2=si0;
L83:;
{
si0=l2;
f1813(i,si0);
si0=l2;
si1=56U;
si0+=si1;
l2=si0;
si0=l1;
si1=-1U;
si0+=si1;
l1=si0;
if(si0){
goto L83;
}
}
L82:;
si0=l3;
si1=112U;
si0+=si1;
l2=si0;
si0=i32_load(&i->m0,(U64)si0+4U);
si0=!(si0);
if(si0){
goto L84;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0);
f15024(i,si0);
L84:;
si0=l4;
si1=1U;
si0+=si1;
l4=si0;
si1=l6;
si0=si0 != si1;
if(si0){
goto L81;
}
}
L80:;
si0=l0;
si1=32U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L1;
}
si0=l5;
f15024(i,si0);
goto L0;
L16:;
si0=l0;
si1=20U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
f1813(i,si0);
si0=l2;
f15024(i,si0);
si0=l0;
si1=24U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si0=l0;
si1=32U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si0=!(si0);
if(si0){
goto L85;
}
si0=0U;
l4=si0;
L86:;
{
si0=l5;
si1=l4;
si2=7U;
si1<<=(si2&31);
si0+=si1;
l3=si0;
f1813(i,si0);
si0=l3;
si1=56U;
si0+=si1;
f1813(i,si0);
si0=l3;
si1=120U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si0=!(si0);
if(si0){
goto L87;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0+112U);
l2=si0;
L88:;
{
si0=l2;
f1813(i,si0);
si0=l2;
si1=56U;
si0+=si1;
l2=si0;
si0=l1;
si1=-1U;
si0+=si1;
l1=si0;
if(si0){
goto L88;
}
}
L87:;
si0=l3;
si1=112U;
si0+=si1;
l2=si0;
si0=i32_load(&i->m0,(U64)si0+4U);
si0=!(si0);
if(si0){
goto L89;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0);
f15024(i,si0);
L89:;
si0=l4;
si1=1U;
si0+=si1;
l4=si0;
si1=l6;
si0=si0 != si1;
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
goto L1;
}
si0=l5;
f15024(i,si0);
goto L0;
L15:;
si0=l0;
si1=20U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
f1813(i,si0);
si0=l2;
f15024(i,si0);
goto L0;
L14:;
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
f1813(i,si0);
si0=l2;
f15024(i,si0);
goto L0;
L13:;
si0=l0;
si1=20U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
f1813(i,si0);
si0=l2;
f15024(i,si0);
goto L0;
L12:;
si0=l0;
si1=20U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
f1813(i,si0);
si0=l2;
f15024(i,si0);
si0=l0;
si1=28U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L90;
}
si0=l0;
si1=24U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
f15024(i,si0);
L90:;
si0=l0;
si1=36U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=l0;
si1=44U;
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
f1813(i,si0);
si0=l2;
si1=56U;
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
si1=40U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L1;
}
si0=l3;
f15024(i,si0);
goto L0;
L11:;
si0=l0;
si1=20U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
f1813(i,si0);
si0=l2;
f15024(i,si0);
si0=l0;
si1=24U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=l0;
si1=32U;
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
f1813(i,si0);
si0=l2;
si1=56U;
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
si1=28U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L95;
}
si0=l3;
f15024(i,si0);
L95:;
si0=l0;
si1=36U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
si0=l0;
si1=44U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si0=!(si0);
if(si0){
goto L96;
}
si0=l4;
l2=si0;
L97:;
{
si0=l2;
si1=72U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=!(si0);
if(si0){
goto L98;
}
si0=l2;
si1=76U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L98;
}
si0=l3;
f15024(i,si0);
L98:;
si0=l2;
f1813(i,si0);
si0=l2;
si1=88U;
si0+=si1;
l2=si0;
si0=l1;
si1=-1U;
si0+=si1;
l1=si0;
if(si0){
goto L97;
}
}
L96:;
si0=l0;
si1=40U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L1;
}
si0=l4;
f15024(i,si0);
goto L0;
L10:;
si0=l0;
si1=20U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
f1813(i,si0);
si0=l2;
f15024(i,si0);
si0=l0;
si1=24U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si0=!(si0);
if(si0){
goto L1;
}
si0=l2;
f1813(i,si0);
si0=l2;
f15024(i,si0);
goto L0;
L9:;
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
goto L99;
}
si0=l3;
l2=si0;
L100:;
{
si0=l2;
f1813(i,si0);
si0=l2;
si1=56U;
si0+=si1;
l2=si0;
si0=l1;
si1=-1U;
si0+=si1;
l1=si0;
if(si0){
goto L100;
}
}
L99:;
si0=l0;
si1=24U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L1;
}
si0=l3;
f15024(i,si0);
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
goto L106;
case 1:
goto L105;
case 2:
goto L104;
case 3:
goto L103;
default:
goto L101;
}
L106:;
si0=l0;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L101;
}
si0=l0;
si1=4U;
si0+=si1;
l2=si0;
goto L102;
L105:;
si0=l0;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L101;
}
si0=l0;
si1=4U;
si0+=si1;
l2=si0;
goto L102;
L104:;
si0=l1;
si0=!(si0);
if(si0){
goto L101;
}
si0=l0;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L101;
}
si0=l0;
si1=4U;
si0+=si1;
l2=si0;
goto L102;
L103:;
si0=l0;
si1=4U;
si0+=si1;
l2=si0;
f1815(i,si0);
si0=l0;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L101;
}
L102:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0);
f15024(i,si0);
L101:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+40U);
l2=si0;
si0=!(si0);
if(si0){
goto L1;
}
si0=l0;
si1=44U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L1;
}
si0=l2;
f15024(i,si0);
goto L0;
L7:;
si0=l0;
si1=20U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
f1813(i,si0);
si0=l2;
f15024(i,si0);
si0=l0;
si1=28U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L1;
}
si0=l0;
si1=24U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
f15024(i,si0);
goto L0;
L6:;
si0=l0;
si1=20U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
f1813(i,si0);
si0=l2;
f15024(i,si0);
si0=l0;
si1=24U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
f1813(i,si0);
si0=l2;
f15024(i,si0);
goto L0;
L5:;
si0=l0;
si1=20U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
f1813(i,si0);
si0=l2;
f15024(i,si0);
goto L0;
L4:;
si0=l0;
si1=24U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L1;
}
si0=l0;
si1=20U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
f15024(i,si0);
goto L0;
L3:;
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
goto L107;
}
si0=l3;
l2=si0;
L108:;
{
si0=l2;
f1813(i,si0);
si0=l2;
si1=56U;
si0+=si1;
l2=si0;
si0=l1;
si1=-1U;
si0+=si1;
l1=si0;
if(si0){
goto L108;
}
}
L107:;
si0=l0;
si1=24U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L1;
}
si0=l3;
f15024(i,si0);
goto L0;
L2:;
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
goto L109;
}
si0=l3;
l2=si0;
L110:;
{
si0=l2;
f1813(i,si0);
si0=l2;
si1=56U;
si0+=si1;
l2=si0;
si0=l1;
si1=-1U;
si0+=si1;
l1=si0;
if(si0){
goto L110;
}
}
L109:;
si0=l0;
si1=24U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L1;
}
si0=l3;
f15024(i,si0);
L1:;
L0:;
}

void f1814(rustpythonInstance*i,U32 l0) {
U32 si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
l0=si0;
f1813(i,si0);
si0=l0;
f15024(i,si0);
L0:;
}

void f1815(rustpythonInstance*i,U32 l0) {
U32 l1=0;
U32 l2=0;
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 si0,si1,si2,si3;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+8U);
l1=si0;
si0=!(si0);
if(si0){
goto L1;
}
si0=0U;
l2=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
l0=si0;
L2:;
{
si0=l3;
si1=l2;
si2=24U;
si1*=si2;
si0+=si1;
l4=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si1=-2U;
si0+=si1;
l6=si0;
si1=4U;
si2=l6;
si3=9U;
si2=si2 < si3;
si0=si2?si0:si1;
si1=-2U;
si0+=si1;
switch(si0){
case 0:
goto L8;
case 1:
goto L7;
case 2:
goto L6;
case 3:
goto L5;
default:
goto L3;
}
L8:;
si0=l0;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L3;
}
si0=l4;
si1=4U;
si0+=si1;
l6=si0;
goto L4;
L7:;
si0=l0;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L3;
}
si0=l4;
si1=4U;
si0+=si1;
l6=si0;
goto L4;
L6:;
si0=l5;
si0=!(si0);
if(si0){
goto L3;
}
si0=l0;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L3;
}
si0=l4;
si1=4U;
si0+=si1;
l6=si0;
goto L4;
L5:;
si0=l0;
si1=4U;
si0+=si1;
l6=si0;
f1815(i,si0);
si0=l0;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L3;
}
L4:;
si0=l6;
si0=i32_load(&i->m0,(U64)si0);
f15024(i,si0);
L3:;
si0=l2;
si1=1U;
si0+=si1;
l2=si0;
si0=l0;
si1=24U;
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

void f1816(rustpythonInstance*i,U32 l0) {
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
goto L26;
case 1:
goto L25;
case 2:
goto L24;
case 3:
goto L23;
case 4:
goto L22;
case 5:
goto L21;
case 6:
goto L20;
case 7:
goto L19;
case 8:
goto L18;
case 9:
goto L17;
case 10:
goto L16;
case 11:
goto L15;
case 12:
goto L14;
case 13:
goto L13;
case 14:
goto L12;
case 15:
goto L11;
case 16:
goto L10;
case 17:
goto L9;
case 18:
goto L8;
case 19:
goto L7;
case 20:
goto L6;
case 21:
goto L5;
case 22:
goto L4;
case 23:
goto L3;
case 24:
goto L2;
default:
goto L1;
}
L26:;
si0=l0;
si1=24U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L27;
}
si0=l0;
si1=20U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
f15024(i,si0);
L27:;
si0=l0;
si1=32U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
f1817(i,si0);
si0=l0;
si1=36U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si0=l0;
si1=44U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si0=!(si0);
if(si0){
goto L28;
}
si0=l1;
l3=si0;
L29:;
{
si0=l3;
f1816(i,si0);
si0=l3;
si1=92U;
si0+=si1;
l3=si0;
si0=l2;
si1=-1U;
si0+=si1;
l2=si0;
if(si0){
goto L29;
}
}
L28:;
si0=l0;
si1=40U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L30;
}
si0=l1;
f15024(i,si0);
L30:;
si0=l0;
si1=48U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si0=l0;
si1=56U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si0=!(si0);
if(si0){
goto L31;
}
si0=l1;
l3=si0;
L32:;
{
si0=l3;
f1813(i,si0);
si0=l3;
si1=56U;
si0+=si1;
l3=si0;
si0=l2;
si1=-1U;
si0+=si1;
l2=si0;
if(si0){
goto L32;
}
}
L31:;
si0=l0;
si1=52U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L33;
}
si0=l1;
f15024(i,si0);
L33:;
si0=l0;
si1=72U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=!(si0);
if(si0){
goto L34;
}
si0=l3;
f1813(i,si0);
si0=l3;
f15024(i,si0);
L34:;
si0=l0;
si1=76U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=!(si0);
if(si0){
goto L35;
}
si0=l0;
si1=80U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L35;
}
si0=l3;
f15024(i,si0);
L35:;
si0=l0;
si1=60U;
si0+=si1;
f1818(i,si0);
goto L0;
L25:;
si0=l0;
si1=24U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L36;
}
si0=l0;
si1=20U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
f15024(i,si0);
L36:;
si0=l0;
si1=32U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
f1817(i,si0);
si0=l0;
si1=36U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si0=l0;
si1=44U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si0=!(si0);
if(si0){
goto L37;
}
si0=l1;
l3=si0;
L38:;
{
si0=l3;
f1816(i,si0);
si0=l3;
si1=92U;
si0+=si1;
l3=si0;
si0=l2;
si1=-1U;
si0+=si1;
l2=si0;
if(si0){
goto L38;
}
}
L37:;
si0=l0;
si1=40U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L39;
}
si0=l1;
f15024(i,si0);
L39:;
si0=l0;
si1=48U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si0=l0;
si1=56U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si0=!(si0);
if(si0){
goto L40;
}
si0=l1;
l3=si0;
L41:;
{
si0=l3;
f1813(i,si0);
si0=l3;
si1=56U;
si0+=si1;
l3=si0;
si0=l2;
si1=-1U;
si0+=si1;
l2=si0;
if(si0){
goto L41;
}
}
L40:;
si0=l0;
si1=52U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L42;
}
si0=l1;
f15024(i,si0);
L42:;
si0=l0;
si1=72U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=!(si0);
if(si0){
goto L43;
}
si0=l3;
f1813(i,si0);
si0=l3;
f15024(i,si0);
L43:;
si0=l0;
si1=76U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=!(si0);
if(si0){
goto L44;
}
si0=l0;
si1=80U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L44;
}
si0=l3;
f15024(i,si0);
L44:;
si0=l0;
si1=60U;
si0+=si1;
f1818(i,si0);
goto L0;
L24:;
si0=l0;
si1=24U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L45;
}
si0=l0;
si1=20U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
f15024(i,si0);
L45:;
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
goto L46;
}
si0=l1;
l3=si0;
L47:;
{
si0=l3;
f1813(i,si0);
si0=l3;
si1=56U;
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
si1=36U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L48;
}
si0=l1;
f15024(i,si0);
L48:;
si0=l0;
si1=44U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
si0=l0;
si1=52U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si0=!(si0);
if(si0){
goto L49;
}
si0=l4;
l3=si0;
L50:;
{
si0=l3;
si1=72U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si0=!(si0);
if(si0){
goto L51;
}
si0=l3;
si1=76U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L51;
}
si0=l1;
f15024(i,si0);
L51:;
si0=l3;
f1813(i,si0);
si0=l3;
si1=88U;
si0+=si1;
l3=si0;
si0=l2;
si1=-1U;
si0+=si1;
l2=si0;
if(si0){
goto L50;
}
}
L49:;
si0=l0;
si1=48U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L52;
}
si0=l4;
f15024(i,si0);
L52:;
si0=l0;
si1=56U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si0=l0;
si1=64U;
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
f1816(i,si0);
si0=l3;
si1=92U;
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
si1=60U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L55;
}
si0=l1;
f15024(i,si0);
L55:;
si0=l0;
si1=68U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si0=l0;
si1=76U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si0=!(si0);
if(si0){
goto L56;
}
si0=l1;
l3=si0;
L57:;
{
si0=l3;
f1813(i,si0);
si0=l3;
si1=56U;
si0+=si1;
l3=si0;
si0=l2;
si1=-1U;
si0+=si1;
l2=si0;
if(si0){
goto L57;
}
}
L56:;
si0=l0;
si1=72U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L58;
}
si0=l1;
f15024(i,si0);
L58:;
si0=l0;
si1=80U;
si0+=si1;
f1818(i,si0);
goto L0;
L23:;
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
f1813(i,si0);
si0=l3;
f15024(i,si0);
goto L0;
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
goto L59;
}
si0=l1;
l3=si0;
L60:;
{
si0=l3;
f1813(i,si0);
si0=l3;
si1=56U;
si0+=si1;
l3=si0;
si0=l2;
si1=-1U;
si0+=si1;
l2=si0;
if(si0){
goto L60;
}
}
L59:;
si0=l0;
si1=24U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L1;
}
si0=l1;
f15024(i,si0);
goto L0;
L21:;
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
goto L61;
}
si0=l1;
l3=si0;
L62:;
{
si0=l3;
f1813(i,si0);
si0=l3;
si1=56U;
si0+=si1;
l3=si0;
si0=l2;
si1=-1U;
si0+=si1;
l2=si0;
if(si0){
goto L62;
}
}
L61:;
si0=l0;
si1=24U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L63;
}
si0=l1;
f15024(i,si0);
L63:;
si0=l0;
si1=32U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
f1813(i,si0);
si0=l3;
f15024(i,si0);
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
f15024(i,si0);
goto L0;
L20:;
si0=l0;
si1=20U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
f1813(i,si0);
si0=l3;
f15024(i,si0);
si0=l0;
si1=24U;
si0+=si1;
f1818(i,si0);
si0=l0;
si1=36U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
f1813(i,si0);
si0=l3;
f15024(i,si0);
goto L0;
L19:;
si0=l0;
si1=24U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=l0;
si1=20U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
f1813(i,si0);
si0=l2;
f15024(i,si0);
si0=l3;
f1813(i,si0);
si0=l3;
f15024(i,si0);
goto L0;
L18:;
si0=l0;
si1=20U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
f1813(i,si0);
si0=l3;
f15024(i,si0);
si0=l0;
si1=24U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
f1813(i,si0);
si0=l3;
f15024(i,si0);
si0=l0;
si1=28U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=!(si0);
if(si0){
goto L1;
}
si0=l3;
f1813(i,si0);
si0=l3;
f15024(i,si0);
goto L0;
L17:;
si0=l0;
si1=20U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
f1813(i,si0);
si0=l3;
f15024(i,si0);
si0=l0;
si1=24U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
f1813(i,si0);
si0=l3;
f15024(i,si0);
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
goto L64;
}
si0=l1;
l3=si0;
L65:;
{
si0=l3;
f1816(i,si0);
si0=l3;
si1=92U;
si0+=si1;
l3=si0;
si0=l2;
si1=-1U;
si0+=si1;
l2=si0;
if(si0){
goto L65;
}
}
L64:;
si0=l0;
si1=32U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L66;
}
si0=l1;
f15024(i,si0);
L66:;
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
goto L67;
}
si0=l1;
l3=si0;
L68:;
{
si0=l3;
f1816(i,si0);
si0=l3;
si1=92U;
si0+=si1;
l3=si0;
si0=l2;
si1=-1U;
si0+=si1;
l2=si0;
if(si0){
goto L68;
}
}
L67:;
si0=l0;
si1=44U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L69;
}
si0=l1;
f15024(i,si0);
L69:;
si0=l0;
si1=52U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=!(si0);
if(si0){
goto L1;
}
si0=l0;
si1=56U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L1;
}
si0=l3;
f15024(i,si0);
goto L0;
L16:;
si0=l0;
si1=20U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
f1813(i,si0);
si0=l3;
f15024(i,si0);
si0=l0;
si1=24U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
f1813(i,si0);
si0=l3;
f15024(i,si0);
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
goto L70;
}
si0=l1;
l3=si0;
L71:;
{
si0=l3;
f1816(i,si0);
si0=l3;
si1=92U;
si0+=si1;
l3=si0;
si0=l2;
si1=-1U;
si0+=si1;
l2=si0;
if(si0){
goto L71;
}
}
L70:;
si0=l0;
si1=32U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L72;
}
si0=l1;
f15024(i,si0);
L72:;
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
goto L73;
}
si0=l1;
l3=si0;
L74:;
{
si0=l3;
f1816(i,si0);
si0=l3;
si1=92U;
si0+=si1;
l3=si0;
si0=l2;
si1=-1U;
si0+=si1;
l2=si0;
if(si0){
goto L74;
}
}
L73:;
si0=l0;
si1=44U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L75;
}
si0=l1;
f15024(i,si0);
L75:;
si0=l0;
si1=52U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=!(si0);
if(si0){
goto L1;
}
si0=l0;
si1=56U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L1;
}
si0=l3;
f15024(i,si0);
goto L0;
L15:;
si0=l0;
si1=20U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
f1813(i,si0);
si0=l3;
f15024(i,si0);
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
goto L76;
}
si0=l1;
l3=si0;
L77:;
{
si0=l3;
f1816(i,si0);
si0=l3;
si1=92U;
si0+=si1;
l3=si0;
si0=l2;
si1=-1U;
si0+=si1;
l2=si0;
if(si0){
goto L77;
}
}
L76:;
si0=l0;
si1=28U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L78;
}
si0=l1;
f15024(i,si0);
L78:;
si0=l0;
si1=36U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si0=l0;
si1=44U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si0=!(si0);
if(si0){
goto L79;
}
si0=l1;
l3=si0;
L80:;
{
si0=l3;
f1816(i,si0);
si0=l3;
si1=92U;
si0+=si1;
l3=si0;
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
si1=40U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L1;
}
si0=l1;
f15024(i,si0);
goto L0;
L14:;
si0=l0;
si1=20U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
f1813(i,si0);
si0=l3;
f15024(i,si0);
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
goto L81;
}
si0=l1;
l3=si0;
L82:;
{
si0=l3;
f1816(i,si0);
si0=l3;
si1=92U;
si0+=si1;
l3=si0;
si0=l2;
si1=-1U;
si0+=si1;
l2=si0;
if(si0){
goto L82;
}
}
L81:;
si0=l0;
si1=28U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L83;
}
si0=l1;
f15024(i,si0);
L83:;
si0=l0;
si1=36U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si0=l0;
si1=44U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si0=!(si0);
if(si0){
goto L84;
}
si0=l1;
l3=si0;
L85:;
{
si0=l3;
f1816(i,si0);
si0=l3;
si1=92U;
si0+=si1;
l3=si0;
si0=l2;
si1=-1U;
si0+=si1;
l2=si0;
if(si0){
goto L85;
}
}
L84:;
si0=l0;
si1=40U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L1;
}
si0=l1;
f15024(i,si0);
goto L0;
L13:;
si0=l0;
si1=20U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
si0=l0;
si1=28U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si0=!(si0);
if(si0){
goto L86;
}
si0=l4;
l3=si0;
L87:;
{
si0=l3;
f1813(i,si0);
si0=l3;
si1=56U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si0=!(si0);
if(si0){
goto L88;
}
si0=l2;
f1813(i,si0);
si0=l2;
f15024(i,si0);
L88:;
si0=l3;
si1=64U;
si0+=si1;
l3=si0;
si0=l1;
si1=-1U;
si0+=si1;
l1=si0;
if(si0){
goto L87;
}
}
L86:;
si0=l0;
si1=24U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L89;
}
si0=l4;
f15024(i,si0);
L89:;
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
goto L90;
}
si0=l1;
l3=si0;
L91:;
{
si0=l3;
f1816(i,si0);
si0=l3;
si1=92U;
si0+=si1;
l3=si0;
si0=l2;
si1=-1U;
si0+=si1;
l2=si0;
if(si0){
goto L91;
}
}
L90:;
si0=l0;
si1=36U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L92;
}
si0=l1;
f15024(i,si0);
L92:;
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
f15024(i,si0);
goto L0;
L12:;
si0=l0;
si1=20U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
si0=l0;
si1=28U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si0=!(si0);
if(si0){
goto L93;
}
si0=l4;
l3=si0;
L94:;
{
si0=l3;
f1813(i,si0);
si0=l3;
si1=56U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si0=!(si0);
if(si0){
goto L95;
}
si0=l2;
f1813(i,si0);
si0=l2;
f15024(i,si0);
L95:;
si0=l3;
si1=64U;
si0+=si1;
l3=si0;
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
si1=24U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L96;
}
si0=l4;
f15024(i,si0);
L96:;
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
goto L97;
}
si0=l1;
l3=si0;
L98:;
{
si0=l3;
f1816(i,si0);
si0=l3;
si1=92U;
si0+=si1;
l3=si0;
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
si1=36U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L99;
}
si0=l1;
f15024(i,si0);
L99:;
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
f15024(i,si0);
goto L0;
L11:;
si0=l0;
si1=20U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
f1813(i,si0);
si0=l3;
f15024(i,si0);
si0=l0;
si1=24U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si0=l0;
si1=32U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si0=!(si0);
if(si0){
goto L100;
}
si0=0U;
l4=si0;
L101:;
{
si0=l5;
si1=l4;
si2=80U;
si1*=si2;
si0+=si1;
l1=si0;
f1819(i,si0);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+76U);
l3=si0;
si0=!(si0);
if(si0){
goto L102;
}
si0=l3;
f1813(i,si0);
si0=l3;
f15024(i,si0);
L102:;
si0=l1;
si1=72U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si0=!(si0);
if(si0){
goto L103;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+64U);
l3=si0;
L104:;
{
si0=l3;
f1816(i,si0);
si0=l3;
si1=92U;
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
si0=l1;
si1=64U;
si0+=si1;
l3=si0;
si0=i32_load(&i->m0,(U64)si0+4U);
si0=!(si0);
if(si0){
goto L105;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
f15024(i,si0);
L105:;
si0=l4;
si1=1U;
si0+=si1;
l4=si0;
si1=l6;
si0=si0 != si1;
if(si0){
goto L101;
}
}
L100:;
si0=l0;
si1=28U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L1;
}
si0=l5;
f15024(i,si0);
goto L0;
L10:;
si0=l0;
si1=24U;
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
goto L106;
}
si0=l2;
f1813(i,si0);
si0=l2;
f15024(i,si0);
L106:;
si0=l3;
si0=!(si0);
if(si0){
goto L1;
}
si0=l3;
f1813(i,si0);
si0=l3;
f15024(i,si0);
goto L0;
L9:;
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
goto L107;
}
si0=l1;
l3=si0;
L108:;
{
si0=l3;
f1816(i,si0);
si0=l3;
si1=92U;
si0+=si1;
l3=si0;
si0=l2;
si1=-1U;
si0+=si1;
l2=si0;
if(si0){
goto L108;
}
}
L107:;
si0=l0;
si1=24U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L109;
}
si0=l1;
f15024(i,si0);
L109:;
si0=l0;
si1=32U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si0=l0;
si1=40U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si0=!(si0);
if(si0){
goto L110;
}
si0=0U;
l4=si0;
L111:;
{
si0=l5;
si1=l4;
si2=44U;
si1*=si2;
si0+=si1;
l1=si0;
si0=i32_load(&i->m0,(U64)si0+28U);
l3=si0;
si0=!(si0);
if(si0){
goto L112;
}
si0=l3;
f1813(i,si0);
si0=l3;
f15024(i,si0);
L112:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+32U);
l3=si0;
si0=!(si0);
if(si0){
goto L113;
}
si0=l1;
si1=36U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L113;
}
si0=l3;
f15024(i,si0);
L113:;
si0=l1;
si1=24U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si0=!(si0);
if(si0){
goto L114;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+16U);
l3=si0;
L115:;
{
si0=l3;
f1816(i,si0);
si0=l3;
si1=92U;
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
si0=l1;
si1=20U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L116;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+16U);
f15024(i,si0);
L116:;
si0=l4;
si1=1U;
si0+=si1;
l4=si0;
si1=l6;
si0=si0 != si1;
if(si0){
goto L111;
}
}
L110:;
si0=l0;
si1=36U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L117;
}
si0=l5;
f15024(i,si0);
L117:;
si0=l0;
si1=44U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si0=l0;
si1=52U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si0=!(si0);
if(si0){
goto L118;
}
si0=l1;
l3=si0;
L119:;
{
si0=l3;
f1816(i,si0);
si0=l3;
si1=92U;
si0+=si1;
l3=si0;
si0=l2;
si1=-1U;
si0+=si1;
l2=si0;
if(si0){
goto L119;
}
}
L118:;
si0=l0;
si1=48U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L120;
}
si0=l1;
f15024(i,si0);
L120:;
si0=l0;
si1=56U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si0=l0;
si1=64U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si0=!(si0);
if(si0){
goto L121;
}
si0=l1;
l3=si0;
L122:;
{
si0=l3;
f1816(i,si0);
si0=l3;
si1=92U;
si0+=si1;
l3=si0;
si0=l2;
si1=-1U;
si0+=si1;
l2=si0;
if(si0){
goto L122;
}
}
L121:;
si0=l0;
si1=60U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L1;
}
si0=l1;
f15024(i,si0);
goto L0;
L8:;
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
goto L123;
}
si0=l1;
l3=si0;
L124:;
{
si0=l3;
f1816(i,si0);
si0=l3;
si1=92U;
si0+=si1;
l3=si0;
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
si1=24U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L125;
}
si0=l1;
f15024(i,si0);
L125:;
si0=l0;
si1=32U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si0=l0;
si1=40U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si0=!(si0);
if(si0){
goto L126;
}
si0=0U;
l4=si0;
L127:;
{
si0=l5;
si1=l4;
si2=44U;
si1*=si2;
si0+=si1;
l1=si0;
si0=i32_load(&i->m0,(U64)si0+28U);
l3=si0;
si0=!(si0);
if(si0){
goto L128;
}
si0=l3;
f1813(i,si0);
si0=l3;
f15024(i,si0);
L128:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+32U);
l3=si0;
si0=!(si0);
if(si0){
goto L129;
}
si0=l1;
si1=36U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L129;
}
si0=l3;
f15024(i,si0);
L129:;
si0=l1;
si1=24U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si0=!(si0);
if(si0){
goto L130;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+16U);
l3=si0;
L131:;
{
si0=l3;
f1816(i,si0);
si0=l3;
si1=92U;
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
si0=l1;
si1=20U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L132;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+16U);
f15024(i,si0);
L132:;
si0=l4;
si1=1U;
si0+=si1;
l4=si0;
si1=l6;
si0=si0 != si1;
if(si0){
goto L127;
}
}
L126:;
si0=l0;
si1=36U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L133;
}
si0=l5;
f15024(i,si0);
L133:;
si0=l0;
si1=44U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si0=l0;
si1=52U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si0=!(si0);
if(si0){
goto L134;
}
si0=l1;
l3=si0;
L135:;
{
si0=l3;
f1816(i,si0);
si0=l3;
si1=92U;
si0+=si1;
l3=si0;
si0=l2;
si1=-1U;
si0+=si1;
l2=si0;
if(si0){
goto L135;
}
}
L134:;
si0=l0;
si1=48U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L136;
}
si0=l1;
f15024(i,si0);
L136:;
si0=l0;
si1=56U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si0=l0;
si1=64U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si0=!(si0);
if(si0){
goto L137;
}
si0=l1;
l3=si0;
L138:;
{
si0=l3;
f1816(i,si0);
si0=l3;
si1=92U;
si0+=si1;
l3=si0;
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
si1=60U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L1;
}
si0=l1;
f15024(i,si0);
goto L0;
L7:;
si0=l0;
si1=24U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=l0;
si1=20U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
f1813(i,si0);
si0=l2;
f15024(i,si0);
si0=l3;
si0=!(si0);
if(si0){
goto L1;
}
si0=l3;
f1813(i,si0);
si0=l3;
f15024(i,si0);
goto L0;
L6:;
si0=l0;
si1=20U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
si0=l0;
si1=28U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si0=!(si0);
if(si0){
goto L139;
}
si0=l4;
si1=32U;
si0+=si1;
l3=si0;
L140:;
{
si0=l3;
si1=-12U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L141;
}
si0=l3;
si1=-16U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
f15024(i,si0);
L141:;
si0=l3;
si1=-4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si0=!(si0);
if(si0){
goto L142;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L142;
}
si0=l1;
f15024(i,si0);
L142:;
si0=l3;
si1=40U;
si0+=si1;
l3=si0;
si0=l2;
si1=-1U;
si0+=si1;
l2=si0;
if(si0){
goto L140;
}
}
L139:;
si0=l0;
si1=24U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L1;
}
si0=l4;
f15024(i,si0);
goto L0;
L5:;
si0=l0;
si1=40U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=!(si0);
if(si0){
goto L143;
}
si0=l0;
si1=44U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L143;
}
si0=l3;
f15024(i,si0);
L143:;
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
goto L144;
}
si0=l4;
si1=32U;
si0+=si1;
l3=si0;
L145:;
{
si0=l3;
si1=-12U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L146;
}
si0=l3;
si1=-16U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
f15024(i,si0);
L146:;
si0=l3;
si1=-4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si0=!(si0);
if(si0){
goto L147;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L147;
}
si0=l1;
f15024(i,si0);
L147:;
si0=l3;
si1=40U;
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
si1=32U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L1;
}
si0=l4;
f15024(i,si0);
goto L0;
L4:;
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
goto L148;
}
si0=l1;
l3=si0;
L149:;
{
si0=l3;
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L150;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
f15024(i,si0);
L150:;
si0=l3;
si1=12U;
si0+=si1;
l3=si0;
si0=l2;
si1=-1U;
si0+=si1;
l2=si0;
if(si0){
goto L149;
}
}
L148:;
si0=l0;
si1=24U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L1;
}
si0=l1;
f15024(i,si0);
goto L0;
L3:;
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
goto L151;
}
si0=l1;
l3=si0;
L152:;
{
si0=l3;
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L153;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
f15024(i,si0);
L153:;
si0=l3;
si1=12U;
si0+=si1;
l3=si0;
si0=l2;
si1=-1U;
si0+=si1;
l2=si0;
if(si0){
goto L152;
}
}
L151:;
si0=l0;
si1=24U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L1;
}
si0=l1;
f15024(i,si0);
goto L0;
L2:;
si0=l0;
si1=20U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
f1813(i,si0);
si0=l3;
f15024(i,si0);
L1:;
L0:;
}

void f1817(rustpythonInstance*i,U32 l0) {
U32 l1=0;
U32 l2=0;
U32 si0,si1;
si0=l0;
f1820(i,si0);
si0=l0;
si1=12U;
si0+=si1;
f1820(i,si0);
si0=l0;
si0=i32_load(&i->m0,(U64)si0+36U);
l1=si0;
si0=!(si0);
if(si0){
goto L1;
}
si0=l1;
si1=20U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L2;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+16U);
f15024(i,si0);
L2:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+28U);
l2=si0;
si0=!(si0);
if(si0){
goto L3;
}
si0=l2;
f1813(i,si0);
si0=l2;
f15024(i,si0);
L3:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+32U);
l2=si0;
si0=!(si0);
if(si0){
goto L4;
}
si0=l1;
si1=36U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L4;
}
si0=l2;
f15024(i,si0);
L4:;
si0=l1;
f15024(i,si0);
L1:;
si0=l0;
si1=24U;
si0+=si1;
f1820(i,si0);
si0=l0;
si0=i32_load(&i->m0,(U64)si0+40U);
l1=si0;
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
goto L6;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+16U);
f15024(i,si0);
L6:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+28U);
l2=si0;
si0=!(si0);
if(si0){
goto L7;
}
si0=l2;
f1813(i,si0);
si0=l2;
f15024(i,si0);
L7:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+32U);
l2=si0;
si0=!(si0);
if(si0){
goto L8;
}
si0=l1;
si1=36U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L8;
}
si0=l2;
f15024(i,si0);
L8:;
si0=l1;
f15024(i,si0);
L5:;
si0=l0;
f15024(i,si0);
L0:;
}

void f1818(rustpythonInstance*i,U32 l0) {
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
si0=i32_load(&i->m0,(U64)si0);
switch(si0){
case 0:
goto L6;
case 1:
goto L5;
default:
goto L7;
}
L7:;
si0=l3;
si1=24U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L3;
}
si0=l3;
si1=20U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
goto L4;
L6:;
si0=l3;
si1=24U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L8;
}
si0=l3;
si1=20U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
f15024(i,si0);
L8:;
si0=l3;
si1=32U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
si0=!(si0);
if(si0){
goto L3;
}
si0=l4;
f1813(i,si0);
goto L4;
L5:;
si0=l3;
si1=24U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L3;
}
si0=l3;
si1=20U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
L4:;
si0=l4;
f15024(i,si0);
L3:;
si0=l3;
si1=36U;
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
si0=i32_load(&i->m0,(U64)si0+4U);
si0=!(si0);
if(si0){
goto L9;
}
si0=l1;
f15024(i,si0);
L9:;
L0:;
}

void f1819(rustpythonInstance*i,U32 l0) {
U32 l1=0;
U32 l2=0;
U32 l3=0;
U32 si0,si1,si2,si3;
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
goto L10;
}
si0=l1;
l3=si0;
L11:;
{
si0=l3;
f1819(i,si0);
si0=l3;
si1=64U;
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
si1=24U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L1;
}
si0=l1;
f15024(i,si0);
goto L0;
L8:;
si0=l0;
si1=20U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
f1813(i,si0);
si0=l3;
f15024(i,si0);
goto L0;
L7:;
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
goto L15;
case 1:
goto L14;
case 2:
goto L13;
case 3:
goto L12;
default:
goto L1;
}
L15:;
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
f15024(i,si0);
goto L0;
L14:;
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
f15024(i,si0);
goto L0;
L13:;
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
si0=l0;
si1=12U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
f15024(i,si0);
goto L0;
L12:;
si0=l0;
si1=12U;
si0+=si1;
l3=si0;
f1815(i,si0);
si0=l0;
si1=16U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L1;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
f15024(i,si0);
goto L0;
L6:;
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
goto L16;
}
si0=l1;
l3=si0;
L17:;
{
si0=l3;
f1819(i,si0);
si0=l3;
si1=64U;
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
si1=24U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L1;
}
si0=l1;
f15024(i,si0);
goto L0;
L5:;
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
goto L18;
}
si0=l1;
l3=si0;
L19:;
{
si0=l3;
f1813(i,si0);
si0=l3;
si1=56U;
si0+=si1;
l3=si0;
si0=l2;
si1=-1U;
si0+=si1;
l2=si0;
if(si0){
goto L19;
}
}
L18:;
si0=l0;
si1=24U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L20;
}
si0=l1;
f15024(i,si0);
L20:;
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
goto L21;
}
si0=l1;
l3=si0;
L22:;
{
si0=l3;
f1819(i,si0);
si0=l3;
si1=64U;
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
si1=36U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L23;
}
si0=l1;
f15024(i,si0);
L23:;
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
f15024(i,si0);
goto L0;
L4:;
si0=l0;
si1=20U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
f1813(i,si0);
si0=l3;
f15024(i,si0);
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
goto L24;
}
si0=l1;
l3=si0;
L25:;
{
si0=l3;
f1819(i,si0);
si0=l3;
si1=64U;
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
si1=28U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L26;
}
si0=l1;
f15024(i,si0);
L26:;
si0=l0;
si1=36U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si0=l0;
si1=44U;
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
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L29;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
f15024(i,si0);
L29:;
si0=l3;
si1=12U;
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
si1=40U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L30;
}
si0=l1;
f15024(i,si0);
L30:;
si0=l0;
si1=48U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si0=l0;
si1=56U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si0=!(si0);
if(si0){
goto L31;
}
si0=l1;
l3=si0;
L32:;
{
si0=l3;
f1819(i,si0);
si0=l3;
si1=64U;
si0+=si1;
l3=si0;
si0=l2;
si1=-1U;
si0+=si1;
l2=si0;
if(si0){
goto L32;
}
}
L31:;
si0=l0;
si1=52U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L1;
}
si0=l1;
f15024(i,si0);
goto L0;
L3:;
si0=l0;
si1=20U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=!(si0);
if(si0){
goto L1;
}
si0=l0;
si1=24U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L1;
}
si0=l3;
f15024(i,si0);
goto L0;
L2:;
si0=l0;
si1=20U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=!(si0);
if(si0){
goto L33;
}
si0=l3;
f1819(i,si0);
si0=l3;
f15024(i,si0);
L33:;
si0=l0;
si1=24U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
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
si0=l3;
f15024(i,si0);
L1:;
L0:;
}

void f1820(rustpythonInstance*i,U32 l0) {
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
si1=44U;
si0+=si1;
l3=si0;
L2:;
{
si0=l3;
si1=-24U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L3;
}
si0=l3;
si1=-28U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
f15024(i,si0);
L3:;
si0=l3;
si1=-16U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
si0=!(si0);
if(si0){
goto L4;
}
si0=l4;
f1813(i,si0);
si0=l4;
f15024(i,si0);
L4:;
si0=l3;
si1=-12U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
si0=!(si0);
if(si0){
goto L5;
}
si0=l3;
si1=-8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L5;
}
si0=l4;
f15024(i,si0);
L5:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
si0=!(si0);
if(si0){
goto L6;
}
si0=l4;
f1813(i,si0);
si0=l4;
f15024(i,si0);
L6:;
si0=l3;
si1=48U;
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
si0=i32_load(&i->m0,(U64)si0+4U);
si0=!(si0);
if(si0){
goto L7;
}
si0=l1;
f15024(i,si0);
L7:;
L0:;
}

void f1821(rustpythonInstance*i,U32 l0) {
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
si1=1U;
si2=l2;
si3=10U;
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
goto L1;
case 5:
goto L4;
case 6:
goto L3;
case 7:
goto L2;
default:
goto L1;
}
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
goto L7;
}
si0=l3;
l2=si0;
L8:;
{
si0=l2;
f1821(i,si0);
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
si0=l3;
f15024(i,si0);
goto L0;
L5:;
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
f15024(i,si0);
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
f15024(i,si0);
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
si0=l0;
si0=i32_load(&i->m0,(U64)si0+4U);
f15024(i,si0);
goto L0;
L2:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+4U);
l0=si0;
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L9;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
f15024(i,si0);
L9:;
si0=l0;
si1=12U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L10;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+8U);
f15024(i,si0);
L10:;
si0=l0;
si1=20U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L11;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+16U);
f15024(i,si0);
L11:;
si0=l0;
si1=32U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L12;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+28U);
f15024(i,si0);
L12:;
si0=l0;
si1=100U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si0=!(si0);
if(si0){
goto L13;
}
si0=l0;
si1=104U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L13;
}
si0=l2;
f15024(i,si0);
L13:;
si0=l0;
si1=44U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si0=!(si0);
if(si0){
goto L14;
}
si0=l0;
si1=40U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
l2=si0;
L15:;
{
si0=l2;
f1821(i,si0);
si0=l2;
si1=24U;
si0+=si1;
l2=si0;
si0=l1;
si1=-1U;
si0+=si1;
l1=si0;
if(si0){
goto L15;
}
}
si0=l3;
f15024(i,si0);
L14:;
si0=l0;
si1=52U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si0=!(si0);
if(si0){
goto L16;
}
si0=l0;
si1=48U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
l2=si0;
L17:;
{
si0=l2;
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L18;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0);
f15024(i,si0);
L18:;
si0=l2;
si1=12U;
si0+=si1;
l2=si0;
si0=l1;
si1=-1U;
si0+=si1;
l1=si0;
if(si0){
goto L17;
}
}
si0=l3;
f15024(i,si0);
L16:;
si0=l0;
si1=60U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si0=!(si0);
if(si0){
goto L19;
}
si0=l0;
si1=56U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
l2=si0;
L20:;
{
si0=l2;
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L21;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0);
f15024(i,si0);
L21:;
si0=l2;
si1=12U;
si0+=si1;
l2=si0;
si0=l1;
si1=-1U;
si0+=si1;
l1=si0;
if(si0){
goto L20;
}
}
si0=l3;
f15024(i,si0);
L19:;
si0=l0;
si1=68U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si0=!(si0);
if(si0){
goto L22;
}
si0=l0;
si1=64U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
l2=si0;
L23:;
{
si0=l2;
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L24;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0);
f15024(i,si0);
L24:;
si0=l2;
si1=12U;
si0+=si1;
l2=si0;
si0=l1;
si1=-1U;
si0+=si1;
l1=si0;
if(si0){
goto L23;
}
}
si0=l3;
f15024(i,si0);
L22:;
si0=l0;
si1=76U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si0=!(si0);
if(si0){
goto L25;
}
si0=l0;
si1=72U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
l2=si0;
L26:;
{
si0=l2;
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L27;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0);
f15024(i,si0);
L27:;
si0=l2;
si1=12U;
si0+=si1;
l2=si0;
si0=l1;
si1=-1U;
si0+=si1;
l1=si0;
if(si0){
goto L26;
}
}
si0=l3;
f15024(i,si0);
L25:;
si0=l0;
f15024(i,si0);
goto L0;
L1:;
L0:;
}

void f1822(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 l8=0;
U32 si0,si1,si2;
U64 sj1;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+8U);
l2=si0;
if(si0){
goto L3;
}
si0=0U;
l3=si0;
si0=0U;
l4=si0;
goto L2;
L3:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si0=i32_load(&i->m0,(U64)si0);
si1=1U;
si0+=si1;
l4=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
l6=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
si0=0U;
l3=si0;
L4:;
{
si0=l5;
si1=l4;
si2=l3;
si1+=si2;
l8=si1;
i32_store(&i->m0,(U64)si0,si1);
si0=l8;
si1=l6;
si1=i32_load(&i->m0,(U64)si1);
si0=si0 > si1;
if(si0){
goto L5;
}
si0=1U;
l4=si0;
si0=l3;
si1=1U;
si0+=si1;
l3=si0;
si0=l7;
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L2;
}
si0=l7;
si0=i32_load(&i->m0,(U64)si0);
f15024(i,si0);
goto L2;
L5:;
si0=l7;
si1=16U;
si0+=si1;
l7=si0;
si0=l2;
si1=l3;
si2=1U;
si1+=si2;
l3=si1;
si0=si0 != si1;
if(si0){
goto L4;
}
}
si0=0U;
l4=si0;
goto L1;
L2:;
si0=l2;
si1=l3;
si0=si0 == si1;
if(si0){
goto L1;
}
si0=l2;
si1=l3;
si0-=si1;
l7=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
si1=l3;
si2=4U;
si1<<=(si2&31);
si0+=si1;
l3=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
l6=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l8=si0;
L6:;
{
si0=l8;
si1=l8;
si1=i32_load(&i->m0,(U64)si1);
si2=1U;
si1+=si2;
l5=si1;
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=l6;
si1=i32_load(&i->m0,(U64)si1);
si0=si0 > si1;
if(si0){
goto L8;
}
si0=l4;
si1=1U;
si0+=si1;
l4=si0;
si0=l3;
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L7;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
f15024(i,si0);
goto L7;
L8:;
si0=l3;
si1=l4;
si2=4U;
si1<<=(si2&31);
si0-=si1;
l5=si0;
si1=l3;
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
L7:;
si0=l3;
si1=16U;
si0+=si1;
l3=si0;
si0=l7;
si1=-1U;
si0+=si1;
l7=si0;
if(si0){
goto L6;
}
}
L1:;
si0=l0;
si1=l2;
si2=l4;
si1-=si2;
i32_store(&i->m0,(U64)si0+8U,si1);
L0:;
}

void f1823(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 l8=0;
U32 l9=0;
U32 l10=0;
U32 si0,si1;
U64 sj1;
si0=4U;
l2=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+12U);
l3=si0;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+8U);
l4=si1;
si0-=si1;
l5=si0;
si1=4U;
si0>>=(si1&31);
l6=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
l7=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l8=si0;
si0=l3;
si1=l4;
si0=si0 != si1;
if(si0){
goto L5;
}
si0=0U;
l9=si0;
si0=l6;
l1=si0;
goto L4;
L5:;
si0=l5;
si1=-1431655776U;
si0=si0 > si1;
if(si0){
goto L2;
}
si0=l6;
si1=12U;
si0*=si1;
l1=si0;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L2;
}
si0=0U;
l9=si0;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=l1;
si0=f15022(i,si0);
l2=si0;
si0=!(si0);
if(si0){
goto L1;
}
si0=l5;
si1=-16U;
si0+=si1;
l5=si0;
si0=l2;
l1=si0;
L7:;
{
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
l10=si0;
si0=!(si0);
if(si0){
goto L6;
}
si0=l1;
si1=4U;
si0+=si1;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1+4U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si1=l10;
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=-16U;
si0+=si1;
l5=si0;
si0=l1;
si1=12U;
si0+=si1;
l1=si0;
si0=l9;
si1=1U;
si0+=si1;
l9=si0;
si0=l4;
si1=16U;
si0+=si1;
l4=si0;
si1=l3;
si0=si0 != si1;
if(si0){
goto L7;
}
goto L3;
}
L6:;
si0=l4;
si1=16U;
si0+=si1;
l4=si0;
si0=l5;
si1=4U;
si0>>=(si1&31);
l1=si0;
L4:;
si0=l3;
si1=l4;
si0=si0 == si1;
if(si0){
goto L3;
}
L8:;
{
si0=l4;
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L9;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
f15024(i,si0);
L9:;
si0=l4;
si1=16U;
si0+=si1;
l4=si0;
si0=l1;
si1=-1U;
si0+=si1;
l1=si0;
if(si0){
goto L8;
}
}
L3:;
si0=l7;
si0=!(si0);
if(si0){
goto L10;
}
si0=l8;
f15024(i,si0);
L10:;
si0=l0;
si1=l9;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l0;
si1=l6;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l2;
i32_store(&i->m0,(U64)si0,si1);
goto L0;
L2:;
f53(i);
UNREACHABLE;
L1:;
si0=4U;
si1=l1;
f52(i,si0,si1);
UNREACHABLE;
L0:;
}

void f1824(rustpythonInstance*i,U32 l0,U32 l1) {
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
U64 l13=0;
U64 l14=0;
U32 si0,si1;
U64 sj0,sj1;
si0=i->g0;
si1=32U;
si0-=si1;
l2=si0;
i->g0=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+12U);
l3=si0;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+8U);
l4=si1;
si0-=si1;
l5=si0;
si1=5U;
si0>>=(si1&31);
l6=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
l7=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l8=si0;
si0=l3;
si1=l4;
si0=si0 != si1;
if(si0){
goto L5;
}
si0=0U;
l9=si0;
si0=8U;
l10=si0;
si0=l6;
l1=si0;
goto L4;
L5:;
si0=l5;
si1=-1431655776U;
si0=si0 > si1;
if(si0){
goto L2;
}
si0=l6;
si1=24U;
si0*=si1;
l1=si0;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L2;
}
si0=0U;
l9=si0;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=l1;
si0=f15022(i,si0);
l10=si0;
si0=!(si0);
if(si0){
goto L1;
}
si0=l5;
si1=-32U;
si0+=si1;
l5=si0;
si0=l10;
l1=si0;
L7:;
{
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
l11=si0;
si1=12U;
si0=si0 == si1;
if(si0){
goto L6;
}
si0=l4;
si1=20U;
si0+=si1;
sj0=i64_load(&i->m0,(U64)si0);
l12=sj0;
si0=l4;
si1=12U;
si0+=si1;
sj0=i64_load(&i->m0,(U64)si0);
l13=sj0;
si0=l4;
sj0=i64_load(&i->m0,(U64)si0+4U);
l14=sj0;
si0=l1;
si1=l11;
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
si1=4U;
si0+=si1;
sj1=l14;
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si1=12U;
si0+=si1;
sj1=l13;
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si1=20U;
si0+=si1;
sj1=l12;
i64_store32(&i->m0,(U64)si0,sj1);
si0=l5;
si1=-32U;
si0+=si1;
l5=si0;
si0=l1;
si1=24U;
si0+=si1;
l1=si0;
si0=l9;
si1=1U;
si0+=si1;
l9=si0;
si0=l4;
si1=32U;
si0+=si1;
l4=si0;
si1=l3;
si0=si0 != si1;
if(si0){
goto L7;
}
goto L3;
}
L6:;
si0=l4;
si1=32U;
si0+=si1;
l4=si0;
si0=l5;
si1=5U;
si0>>=(si1&31);
l1=si0;
L4:;
si0=l3;
si1=l4;
si0=si0 == si1;
if(si0){
goto L3;
}
L8:;
{
si0=l4;
f2030(i,si0);
si0=l4;
si1=32U;
si0+=si1;
l4=si0;
si0=l1;
si1=-1U;
si0+=si1;
l1=si0;
if(si0){
goto L8;
}
}
L3:;
si0=l7;
si0=!(si0);
if(si0){
goto L9;
}
si0=l8;
f15024(i,si0);
L9:;
si0=l0;
si1=l9;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l0;
si1=l6;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l10;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=32U;
si0+=si1;
i->g0=si0;
goto L0;
L2:;
f53(i);
UNREACHABLE;
L1:;
si0=8U;
si1=l1;
f52(i,si0,si1);
UNREACHABLE;
L0:;
}

U32 f1825(rustpythonInstance*i,U32 l0,U32 l1) {
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
si1=1102129U;
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
i32_store8(&i->m0,(U64)si0+9U,si1);
si0=l2;
si1=l5;
i32_store8(&i->m0,(U64)si0+8U,si1);
si0=l2;
si1=l1;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l3;
si0=!(si0);
if(si0){
goto L1;
}
si0=l3;
si1=48U;
si0*=si1;
l1=si0;
L2:;
{
si0=l2;
si1=l0;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l2;
si1=4U;
si0+=si1;
si1=l2;
si2=12U;
si1+=si2;
si2=16970072U;
f646(i,si0,si1,si2);
si0=l0;
si1=48U;
si0+=si1;
l0=si0;
si0=l1;
si1=-48U;
si0+=si1;
l1=si0;
if(si0){
goto L2;
}
}
si0=l2;
si0=i32_load8_u(&i->m0,(U64)si0+8U);
l5=si0;
L1:;
si0=l5;
si1=255U;
si0&=si1;
if(si0){
goto L3;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0+4U);
l0=si0;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=1102508U;
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

U32 f1826(rustpythonInstance*i,U32 l0,U32 l1) {
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
si1=1102129U;
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
i32_store8(&i->m0,(U64)si0+9U,si1);
si0=l2;
si1=l5;
i32_store8(&i->m0,(U64)si0+8U,si1);
si0=l2;
si1=l1;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l3;
si0=!(si0);
if(si0){
goto L1;
}
si0=l3;
si1=6U;
si0<<=(si1&31);
l1=si0;
L2:;
{
si0=l2;
si1=l0;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l2;
si1=4U;
si0+=si1;
si1=l2;
si2=12U;
si1+=si2;
si2=16969992U;
f646(i,si0,si1,si2);
si0=l0;
si1=64U;
si0+=si1;
l0=si0;
si0=l1;
si1=-64U;
si0+=si1;
l1=si0;
if(si0){
goto L2;
}
}
si0=l2;
si0=i32_load8_u(&i->m0,(U64)si0+8U);
l5=si0;
L1:;
si0=l5;
si1=255U;
si0&=si1;
if(si0){
goto L3;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0+4U);
l0=si0;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=1102508U;
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

U32 f1827(rustpythonInstance*i,U32 l0,U32 l1) {
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
si1=1102129U;
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
i32_store8(&i->m0,(U64)si0+9U,si1);
si0=l2;
si1=l5;
i32_store8(&i->m0,(U64)si0+8U,si1);
si0=l2;
si1=l1;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l3;
si0=!(si0);
if(si0){
goto L1;
}
si0=l3;
si1=36U;
si0*=si1;
l1=si0;
L2:;
{
si0=l2;
si1=l0;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l2;
si1=4U;
si0+=si1;
si1=l2;
si2=12U;
si1+=si2;
si2=16970008U;
f646(i,si0,si1,si2);
si0=l0;
si1=36U;
si0+=si1;
l0=si0;
si0=l1;
si1=-36U;
si0+=si1;
l1=si0;
if(si0){
goto L2;
}
}
si0=l2;
si0=i32_load8_u(&i->m0,(U64)si0+8U);
l5=si0;
L1:;
si0=l5;
si1=255U;
si0&=si1;
if(si0){
goto L3;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0+4U);
l0=si0;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=1102508U;
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

U32 f1828(rustpythonInstance*i,U32 l0,U32 l1) {
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
si1=1102129U;
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
i32_store8(&i->m0,(U64)si0+9U,si1);
si0=l2;
si1=l5;
i32_store8(&i->m0,(U64)si0+8U,si1);
si0=l2;
si1=l1;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l3;
si0=!(si0);
if(si0){
goto L1;
}
si0=l3;
si1=40U;
si0*=si1;
l1=si0;
L2:;
{
si0=l2;
si1=l0;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l2;
si1=4U;
si0+=si1;
si1=l2;
si2=12U;
si1+=si2;
si2=16969976U;
f646(i,si0,si1,si2);
si0=l0;
si1=40U;
si0+=si1;
l0=si0;
si0=l1;
si1=-40U;
si0+=si1;
l1=si0;
if(si0){
goto L2;
}
}
si0=l2;
si0=i32_load8_u(&i->m0,(U64)si0+8U);
l5=si0;
L1:;
si0=l5;
si1=255U;
si0&=si1;
if(si0){
goto L3;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0+4U);
l0=si0;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=1102508U;
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

U32 f1829(rustpythonInstance*i,U32 l0,U32 l1) {
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
si1=1102129U;
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
i32_store8(&i->m0,(U64)si0+9U,si1);
si0=l2;
si1=l5;
i32_store8(&i->m0,(U64)si0+8U,si1);
si0=l2;
si1=l1;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l3;
si0=!(si0);
if(si0){
goto L1;
}
si0=l3;
si1=56U;
si0*=si1;
l1=si0;
L2:;
{
si0=l2;
si1=l0;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l2;
si1=4U;
si0+=si1;
si1=l2;
si2=12U;
si1+=si2;
si2=16970088U;
f646(i,si0,si1,si2);
si0=l0;
si1=56U;
si0+=si1;
l0=si0;
si0=l1;
si1=-56U;
si0+=si1;
l1=si0;
if(si0){
goto L2;
}
}
si0=l2;
si0=i32_load8_u(&i->m0,(U64)si0+8U);
l5=si0;
L1:;
si0=l5;
si1=255U;
si0&=si1;
if(si0){
goto L3;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0+4U);
l0=si0;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=1102508U;
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


#include "w2c2_base.h"

#include "rustpython.h"

void f230(rustpythonInstance*i,U32 l0,U32 l1) {
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
goto L3;
}
si0=4U;
l4=si0;
goto L2;
L3:;
si0=l3;
si1=44739242U;
si0=si0 > si1;
if(si0){
goto L6;
}
si0=l3;
si1=48U;
si0*=si1;
l5=si0;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L6;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si0=l5;
if(si0){
goto L5;
}
si0=4U;
l4=si0;
goto L4;
L6:;
f53(i);
UNREACHABLE;
L5:;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=l5;
si0=f15022(i,si0);
l4=si0;
si0=!(si0);
if(si0){
goto L1;
}
L4:;
si0=l3;
si1=48U;
si0*=si1;
l7=si0;
si0=0U;
l5=si0;
si0=l3;
l8=si0;
L7:;
{
si0=l7;
si1=l5;
si0=si0 == si1;
if(si0){
goto L2;
}
si0=l2;
si1=l6;
si2=l5;
si1+=si2;
f562(i,si0,si1);
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
goto L7;
}
}
L2:;
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
L1:;
si0=4U;
si1=l5;
f52(i,si0,si1);
UNREACHABLE;
L0:;
}

void f231(rustpythonInstance*i,U32 l0,U32 l1) {
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
si0=i->g0;
si1=272U;
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
si0=l5;
if(si0){
goto L7;
}
si0=8U;
l4=si0;
goto L6;
L7:;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=l5;
si0=f15022(i,si0);
l4=si0;
si0=!(si0);
if(si0){
goto L3;
}
L6:;
si0=l3;
si1=272U;
si0*=si1;
l6=si0;
si0=l1;
si1=172U;
si0+=si1;
l7=si0;
si0=l2;
si1=184U;
si0+=si1;
l8=si0;
si0=0U;
l5=si0;
si0=l3;
l9=si0;
L8:;
{
si0=l6;
si1=l5;
si0=si0 == si1;
if(si0){
goto L4;
}
si0=l8;
si1=l1;
si2=184U;
si1+=si2;
f232(i,si0,si1);
si0=l1;
si1=160U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l10=si0;
si0=l1;
si1=156U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l11=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+152U);
l12=si0;
si0=l1;
si1=164U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l13=si0;
if(si0){
goto L10;
}
si0=0U;
l14=si0;
goto L9;
L10:;
si0=4U;
l14=si0;
si0=0U;
l15=si0;
si0=l7;
si1=l5;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l16=si0;
si0=!(si0);
if(si0){
goto L11;
}
si0=l16;
si1=178956970U;
si0=si0 > si1;
if(si0){
goto L2;
}
si0=l16;
si1=12U;
si0*=si1;
l17=si0;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L2;
}
si0=l17;
si0=!(si0);
if(si0){
goto L11;
}
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=l17;
si0=f15022(i,si0);
l14=si0;
si0=!(si0);
if(si0){
goto L1;
}
si0=l17;
l15=si0;
L11:;
si0=l14;
si1=l13;
si2=l15;
si0=f15143(i,si0,si1,si2);
si0=l16;
sj0=(U64)(si0);
l18=sj0;
sj1=32ULL;
sj0<<=(sj1&63);
sj1=l18;
sj0|=sj1;
l18=sj0;
L9:;
si0=l2;
sj1=l18;
i64_store(&i->m0,(U64)si0+168U,sj1);
si0=l2;
si1=l14;
i32_store(&i->m0,(U64)si0+164U,si1);
si0=l2;
si1=l10;
i32_store(&i->m0,(U64)si0+160U,si1);
si0=l2;
si1=l11;
i32_store(&i->m0,(U64)si0+156U,si1);
si0=l2;
si1=l12;
i32_store(&i->m0,(U64)si0+152U,si1);
si0=l2;
si1=l1;
si2=176U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+176U,sj1);
si0=l2;
si1=l1;
f233(i,si0,si1);
si0=l4;
si1=l5;
si0+=si1;
si1=l2;
si2=272U;
si0=f15143(i,si0,si1,si2);
si0=l5;
si1=272U;
si0+=si1;
l5=si0;
si0=l1;
si1=272U;
si0+=si1;
l1=si0;
si0=l9;
si1=-1U;
si0+=si1;
l9=si0;
if(si0){
goto L8;
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
si1=272U;
si0+=si1;
i->g0=si0;
goto L0;
L3:;
si0=8U;
si1=l5;
f52(i,si0,si1);
UNREACHABLE;
L2:;
f53(i);
UNREACHABLE;
L1:;
si0=4U;
si1=l17;
f52(i,si0,si1);
UNREACHABLE;
L0:;
}

void f232(rustpythonInstance*i,U32 l0,U32 l1) {
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
goto L11;
}
si0=0U;
l10=si0;
goto L10;
L11:;
si0=4U;
l10=si0;
si0=0U;
l11=si0;
si0=l1;
si1=32U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l12=si0;
si0=!(si0);
if(si0){
goto L12;
}
si0=l12;
si1=268435455U;
si0=si0 > si1;
if(si0){
goto L9;
}
si0=l12;
si1=3U;
si0<<=(si1&31);
l13=si0;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L9;
}
si0=l13;
si0=!(si0);
if(si0){
goto L12;
}
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=l13;
si0=f15022(i,si0);
l10=si0;
si0=!(si0);
if(si0){
goto L5;
}
si0=l13;
l11=si0;
L12:;
si0=l10;
si1=l9;
si2=l11;
si0=f15143(i,si0,si1,si2);
si0=l12;
sj0=(U64)(si0);
l14=sj0;
sj1=32ULL;
sj0<<=(sj1&63);
sj1=l14;
sj0|=sj1;
l14=sj0;
L10:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+36U);
l13=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+40U);
l9=si0;
if(si0){
goto L14;
}
goto L13;
L14:;
si0=4U;
l8=si0;
si0=0U;
l11=si0;
si0=l1;
si1=48U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l12=si0;
si0=!(si0);
if(si0){
goto L15;
}
si0=l12;
si1=268435455U;
si0=si0 > si1;
if(si0){
goto L9;
}
si0=l12;
si1=3U;
si0<<=(si1&31);
l15=si0;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L9;
}
si0=l15;
si0=!(si0);
if(si0){
goto L15;
}
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=l15;
si0=f15022(i,si0);
l8=si0;
si0=!(si0);
if(si0){
goto L4;
}
si0=l15;
l11=si0;
L15:;
si0=l8;
si1=l9;
si2=l11;
si0=f15143(i,si0,si1,si2);
si0=l12;
sj0=(U64)(si0);
l16=sj0;
sj1=32ULL;
sj0<<=(sj1&63);
sj1=l16;
sj0|=sj1;
l16=sj0;
L13:;
si0=0U;
l12=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+52U);
l15=si0;
if(si0){
goto L17;
}
si0=0U;
l9=si0;
goto L16;
L17:;
si0=4U;
l9=si0;
si0=0U;
l17=si0;
si0=l1;
si1=60U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l11=si0;
si0=!(si0);
if(si0){
goto L18;
}
si0=l11;
si1=268435455U;
si0=si0 > si1;
if(si0){
goto L9;
}
si0=l11;
si1=3U;
si0<<=(si1&31);
l18=si0;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L9;
}
si0=l18;
si0=!(si0);
if(si0){
goto L18;
}
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=l18;
si0=f15022(i,si0);
l9=si0;
si0=!(si0);
if(si0){
goto L3;
}
si0=l18;
l17=si0;
L18:;
si0=l9;
si1=l15;
si2=l17;
si0=f15143(i,si0,si1,si2);
si0=l11;
sj0=(U64)(si0);
l19=sj0;
sj1=32ULL;
sj0<<=(sj1&63);
sj1=l19;
sj0|=sj1;
l19=sj0;
L16:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+64U);
l15=si0;
if(si0){
goto L20;
}
goto L19;
L20:;
si0=4U;
l12=si0;
si0=0U;
l17=si0;
si0=l1;
si1=72U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l11=si0;
si0=!(si0);
if(si0){
goto L21;
}
si0=l11;
si1=268435455U;
si0=si0 > si1;
if(si0){
goto L9;
}
si0=l11;
si1=3U;
si0<<=(si1&31);
l18=si0;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L9;
}
si0=l18;
si0=!(si0);
if(si0){
goto L21;
}
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=l18;
si0=f15022(i,si0);
l12=si0;
si0=!(si0);
if(si0){
goto L2;
}
si0=l18;
l17=si0;
L21:;
si0=l12;
si1=l15;
si2=l17;
si0=f15143(i,si0,si1,si2);
si0=l11;
sj0=(U64)(si0);
l20=sj0;
sj1=32ULL;
sj0<<=(sj1&63);
sj1=l20;
sj0|=sj1;
l20=sj0;
L19:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+76U);
l15=si0;
if(si0){
goto L22;
}
si0=0U;
l1=si0;
goto L6;
L22:;
si0=0U;
l17=si0;
si0=l1;
si1=84U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l11=si0;
if(si0){
goto L23;
}
si0=4U;
l1=si0;
goto L7;
L23:;
si0=l11;
si1=134217727U;
si0=si0 > si1;
if(si0){
goto L9;
}
si0=l11;
si1=4U;
si0<<=(si1&31);
l18=si0;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L9;
}
si0=l18;
if(si0){
goto L8;
}
si0=4U;
l1=si0;
goto L7;
L9:;
f53(i);
UNREACHABLE;
L8:;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=l18;
si0=f15022(i,si0);
l1=si0;
si0=!(si0);
if(si0){
goto L1;
}
si0=l18;
l17=si0;
L7:;
si0=l1;
si1=l15;
si2=l17;
si0=f15143(i,si0,si1,si2);
si0=l11;
sj0=(U64)(si0);
l21=sj0;
sj1=32ULL;
sj0<<=(sj1&63);
sj1=l21;
sj0|=sj1;
l21=sj0;
L6:;
si0=l0;
si1=l1;
i32_store(&i->m0,(U64)si0+76U,si1);
si0=l0;
si1=l12;
i32_store(&i->m0,(U64)si0+64U,si1);
si0=l0;
si1=l9;
i32_store(&i->m0,(U64)si0+52U,si1);
si0=l0;
si1=l8;
i32_store(&i->m0,(U64)si0+40U,si1);
si0=l0;
si1=l13;
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
L5:;
si0=4U;
si1=l13;
f52(i,si0,si1);
UNREACHABLE;
L4:;
si0=4U;
si1=l15;
f52(i,si0,si1);
UNREACHABLE;
L3:;
si0=4U;
si1=l18;
f52(i,si0,si1);
UNREACHABLE;
L2:;
si0=4U;
si1=l18;
f52(i,si0,si1);
UNREACHABLE;
L1:;
si0=4U;
si1=l18;
f52(i,si0,si1);
UNREACHABLE;
L0:;
}

void f233(rustpythonInstance*i,U32 l0,U32 l1) {
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
si0=4U;
l4=si0;
si0=0U;
l5=si0;
si0=l1;
si1=124U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si0=!(si0);
if(si0){
goto L9;
}
si0=l6;
si1=268435455U;
si0=si0 > si1;
if(si0){
goto L2;
}
si0=l6;
si1=3U;
si0<<=(si1&31);
l7=si0;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L2;
}
si0=l7;
si0=!(si0);
if(si0){
goto L9;
}
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=l7;
si0=f15022(i,si0);
l4=si0;
si0=!(si0);
if(si0){
goto L6;
}
si0=l7;
l5=si0;
L9:;
si0=l4;
si1=l3;
si2=l5;
si0=f15143(i,si0,si1,si2);
si0=l6;
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
goto L11;
}
goto L10;
L11:;
si0=l1;
si1=60U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l9=si0;
si0=4U;
l2=si0;
si0=0U;
l5=si0;
si0=l1;
si1=56U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si0=!(si0);
if(si0){
goto L12;
}
si0=l6;
si1=268435455U;
si0=si0 > si1;
if(si0){
goto L2;
}
si0=l6;
si1=3U;
si0<<=(si1&31);
l7=si0;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L2;
}
si0=l7;
si0=!(si0);
if(si0){
goto L12;
}
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=l7;
si0=f15022(i,si0);
l2=si0;
si0=!(si0);
if(si0){
goto L5;
}
si0=l7;
l5=si0;
L12:;
si0=l2;
si1=l3;
si2=l5;
si0=f15143(i,si0,si1,si2);
si0=l6;
sj0=(U64)(si0);
l10=sj0;
sj1=32ULL;
sj0<<=(sj1&63);
sj1=l10;
sj0|=sj1;
l11=sj0;
L10:;
si0=l1;
si1=40U;
si0+=si1;
sj0=i64_load(&i->m0,(U64)si0);
l10=sj0;
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
l3=si0;
if(si0){
goto L14;
}
goto L13;
L14:;
si0=l3;
si1=l3;
si1=i32_load(&i->m0,(U64)si1);
si2=1U;
si1+=si2;
l6=si1;
i32_store(&i->m0,(U64)si0,si1);
si0=l6;
si0=!(si0);
if(si0){
goto L4;
}
si0=l1;
si1=68U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l17=si0;
L13:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+72U);
l5=si0;
if(si0){
goto L16;
}
goto L15;
L16:;
si0=l5;
si1=l5;
si1=i32_load(&i->m0,(U64)si1);
si2=1U;
si1+=si2;
l6=si1;
i32_store(&i->m0,(U64)si0,si1);
si0=l6;
si0=!(si0);
if(si0){
goto L4;
}
si0=l1;
si1=76U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l18=si0;
L15:;
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
goto L18;
}
si0=0U;
l7=si0;
goto L17;
L18:;
si0=l1;
si1=100U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l23=si0;
si0=4U;
l7=si0;
si0=0U;
l24=si0;
si0=l1;
si1=96U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si0=!(si0);
if(si0){
goto L19;
}
si0=l6;
si1=89478485U;
si0=si0 > si1;
if(si0){
goto L2;
}
si0=l6;
si1=24U;
si0*=si1;
l25=si0;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L2;
}
si0=l25;
si0=!(si0);
if(si0){
goto L19;
}
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=l25;
si0=f15022(i,si0);
l7=si0;
si0=!(si0);
if(si0){
goto L3;
}
si0=l25;
l24=si0;
L19:;
si0=l7;
si1=l22;
si2=l24;
si0=f15143(i,si0,si1,si2);
si0=l6;
sj0=(U64)(si0);
l26=sj0;
sj1=32ULL;
sj0<<=(sj1&63);
sj1=l26;
sj0|=sj1;
l26=sj0;
L17:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+128U);
l24=si0;
if(si0){
goto L21;
}
goto L20;
L21:;
si0=l1;
si1=144U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
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
goto L22;
}
si0=0U;
l22=si0;
goto L20;
L22:;
si0=l6;
if(si0){
goto L24;
}
si0=1U;
l22=si0;
goto L23;
L24:;
si0=l6;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L2;
}
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=l6;
si0=f15022(i,si0);
l22=si0;
si0=!(si0);
if(si0){
goto L1;
}
L23:;
si0=l22;
si1=l27;
si2=l6;
si0=f15143(i,si0,si1,si2);
L20:;
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
si1=l5;
i32_store(&i->m0,(U64)si0+72U,si1);
si0=l0;
si1=l3;
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
si1=l24;
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
sj1=l11;
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
sj1=l10;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=24U;
si0+=si1;
sj1=l12;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=144U;
si0+=si1;
si1=l6;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=140U;
si0+=si1;
si1=l6;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=136U;
si0+=si1;
si1=l22;
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
si0=4U;
si1=l7;
f52(i,si0,si1);
UNREACHABLE;
L5:;
si0=4U;
si1=l7;
f52(i,si0,si1);
UNREACHABLE;
L4:;
UNREACHABLE;
L3:;
si0=4U;
si1=l25;
f52(i,si0,si1);
UNREACHABLE;
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

void f234(rustpythonInstance*i,U32 l0,U32 l1) {
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
si0=8U;
l4=si0;
si0=l5;
si0=!(si0);
if(si0){
goto L5;
}
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=l5;
si0=f15022(i,si0);
l4=si0;
si0=!(si0);
if(si0){
goto L1;
}
L5:;
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
l10=si0;
L6:;
{
si0=l7;
si1=l1;
si0=si0 == si1;
if(si0){
goto L3;
}
sj0=2ULL;
l11=sj0;
si0=l6;
si1=l1;
si0+=si1;
l5=si0;
sj0=i64_load(&i->m0,(U64)si0);
sj1=2ULL;
si0=sj0 == sj1;
if(si0){
goto L7;
}
si0=l9;
si1=l5;
si2=152U;
si1+=si2;
f232(i,si0,si1);
si0=l2;
si1=248U;
si0+=si1;
si1=l5;
f233(i,si0,si1);
si0=l2;
si1=l5;
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
si0=f15143(i,si0,si1,si2);
L7:;
si0=l4;
si1=l1;
si0+=si1;
l5=si0;
sj1=l11;
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=8U;
si0+=si1;
si1=l2;
si2=8U;
si1+=si2;
si2=240U;
si0=f15143(i,si0,si1,si2);
si0=l1;
si1=248U;
si0+=si1;
l1=si0;
si0=l10;
si1=-1U;
si0+=si1;
l10=si0;
if(si0){
goto L6;
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
si0=8U;
si1=l5;
f52(i,si0,si1);
UNREACHABLE;
L0:;
}

void f235(rustpythonInstance*i,U32 l0,U32 l1) {
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
U32 l22=0;
U64 l23=0;
U32 si0,si1,si2;
U64 sj0,sj1;
si0=i->g0;
si1=480U;
si0-=si1;
l2=si0;
i->g0=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+8U);
l3=si0;
if(si0){
goto L6;
}
si0=8U;
l4=si0;
goto L5;
L6:;
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
si0=l5;
if(si0){
goto L8;
}
si0=8U;
l4=si0;
goto L7;
L8:;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=l5;
si0=f15022(i,si0);
l4=si0;
si0=!(si0);
if(si0){
goto L4;
}
L7:;
si0=l3;
si1=304U;
si0*=si1;
l7=si0;
si0=0U;
l8=si0;
si0=l3;
l9=si0;
si0=l6;
l1=si0;
L9:;
{
si0=l7;
si1=l8;
si0=si0 == si1;
if(si0){
goto L5;
}
si0=l2;
si1=240U;
si0+=si1;
si1=l1;
si2=200U;
si1+=si2;
f232(i,si0,si1);
si0=l1;
si1=176U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l10=si0;
si0=l1;
si1=172U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l11=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+168U);
l12=si0;
si0=0U;
l13=si0;
si0=0U;
l14=si0;
si0=l1;
si1=180U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l15=si0;
si0=!(si0);
if(si0){
goto L10;
}
si0=4U;
l14=si0;
si0=0U;
l16=si0;
si0=l6;
si1=l8;
si0+=si1;
si1=188U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si0=!(si0);
if(si0){
goto L11;
}
si0=l5;
si1=178956970U;
si0=si0 > si1;
if(si0){
goto L2;
}
si0=l5;
si1=12U;
si0*=si1;
l17=si0;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L2;
}
si0=l17;
si0=!(si0);
if(si0){
goto L11;
}
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=l17;
si0=f15022(i,si0);
l14=si0;
si0=!(si0);
if(si0){
goto L3;
}
si0=l17;
l16=si0;
L11:;
si0=l14;
si1=l15;
si2=l16;
si0=f15143(i,si0,si1,si2);
si0=l5;
sj0=(U64)(si0);
l18=sj0;
sj1=32ULL;
sj0<<=(sj1&63);
sj1=l18;
sj0|=sj1;
l18=sj0;
L10:;
si0=l1;
si1=196U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l16=si0;
si0=l1;
si1=192U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l17=si0;
si0=l2;
si1=328U;
si0+=si1;
si1=l1;
f233(i,si0,si1);
si0=l1;
si1=160U;
si0+=si1;
sj0=i64_load(&i->m0,(U64)si0);
l19=sj0;
si0=l1;
sj0=i64_load(&i->m0,(U64)si0+152U);
l20=sj0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+288U);
l15=si0;
si0=!(si0);
if(si0){
goto L12;
}
si0=4U;
l13=si0;
si0=0U;
l21=si0;
si0=l6;
si1=l8;
si0+=si1;
si1=296U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si0=!(si0);
if(si0){
goto L13;
}
si0=l5;
si1=134217727U;
si0=si0 > si1;
if(si0){
goto L2;
}
si0=l5;
si1=4U;
si0<<=(si1&31);
l22=si0;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L2;
}
si0=l22;
si0=!(si0);
if(si0){
goto L13;
}
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=l22;
si0=f15022(i,si0);
l13=si0;
si0=!(si0);
if(si0){
goto L1;
}
si0=l22;
l21=si0;
L13:;
si0=l13;
si1=l15;
si2=l21;
si0=f15143(i,si0,si1,si2);
si0=l5;
sj0=(U64)(si0);
l23=sj0;
sj1=32ULL;
sj0<<=(sj1&63);
sj1=l23;
sj0|=sj1;
l23=sj0;
L12:;
si0=l1;
si1=304U;
si0+=si1;
l1=si0;
si0=l2;
si1=l2;
si2=240U;
si1+=si2;
si2=88U;
si0=f15143(i,si0,si1,si2);
l15=si0;
si1=88U;
si0+=si1;
si1=l15;
si2=328U;
si1+=si2;
si2=152U;
si0=f15143(i,si0,si1,si2);
si0=l4;
si1=l8;
si0+=si1;
si1=l15;
si2=88U;
si1+=si2;
si2=152U;
si0=f15143(i,si0,si1,si2);
l5=si0;
si1=196U;
si0+=si1;
si1=l16;
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=192U;
si0+=si1;
si1=l17;
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=184U;
si0+=si1;
sj1=l18;
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=180U;
si0+=si1;
si1=l14;
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=176U;
si0+=si1;
si1=l10;
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=172U;
si0+=si1;
si1=l11;
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=168U;
si0+=si1;
si1=l12;
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=160U;
si0+=si1;
sj1=l19;
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=152U;
si0+=si1;
sj1=l20;
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=200U;
si0+=si1;
si1=l15;
si2=88U;
si0=f15143(i,si0,si1,si2);
si0=l5;
si1=292U;
si0+=si1;
sj1=l23;
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=288U;
si0+=si1;
si1=l13;
i32_store(&i->m0,(U64)si0,si1);
si0=l8;
si1=304U;
si0+=si1;
l8=si0;
si0=l9;
si1=-1U;
si0+=si1;
l9=si0;
if(si0){
goto L9;
}
}
L5:;
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
si1=480U;
si0+=si1;
i->g0=si0;
goto L0;
L4:;
si0=8U;
si1=l5;
f52(i,si0,si1);
UNREACHABLE;
L3:;
si0=4U;
si1=l17;
f52(i,si0,si1);
UNREACHABLE;
L2:;
f53(i);
UNREACHABLE;
L1:;
si0=4U;
si1=l22;
f52(i,si0,si1);
UNREACHABLE;
L0:;
}

void f236(rustpythonInstance*i,U32 l0,U32 l1) {
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
goto L3;
}
si0=8U;
l4=si0;
goto L2;
L3:;
si0=l3;
si1=6882960U;
si0=si0 > si1;
if(si0){
goto L6;
}
si0=l3;
si1=312U;
si0*=si1;
l5=si0;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L6;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si0=l5;
if(si0){
goto L5;
}
si0=8U;
l4=si0;
goto L4;
L6:;
f53(i);
UNREACHABLE;
L5:;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=l5;
si0=f15022(i,si0);
l4=si0;
si0=!(si0);
if(si0){
goto L1;
}
L4:;
si0=l3;
si1=312U;
si0*=si1;
l7=si0;
si0=0U;
l1=si0;
si0=l3;
l5=si0;
L7:;
{
si0=l7;
si1=l1;
si0=si0 == si1;
if(si0){
goto L2;
}
si0=l2;
si1=8U;
si0+=si1;
si1=l6;
si2=l1;
si1+=si2;
f360(i,si0,si1);
si0=l4;
si1=l1;
si0+=si1;
si1=l2;
si2=8U;
si1+=si2;
si2=312U;
si0=f15143(i,si0,si1,si2);
si0=l1;
si1=312U;
si0+=si1;
l1=si0;
si0=l5;
si1=-1U;
si0+=si1;
l5=si0;
if(si0){
goto L7;
}
}
L2:;
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
L1:;
si0=8U;
si1=l5;
f52(i,si0,si1);
UNREACHABLE;
L0:;
}

void f237(rustpythonInstance*i,U32 l0,U32 l1) {
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
si0=4U;
l3=si0;
si0=l4;
si0=!(si0);
if(si0){
goto L6;
}
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=l4;
si0=f15022(i,si0);
l3=si0;
si0=!(si0);
if(si0){
goto L3;
}
L6:;
si0=l2;
si1=12U;
si0*=si1;
l6=si0;
si0=0U;
l4=si0;
si0=l2;
l7=si0;
L7:;
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
goto L9;
}
si0=1U;
l9=si0;
goto L8;
L9:;
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
l9=si0;
si0=!(si0);
if(si0){
goto L1;
}
L8:;
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
si1=f15143(i,si1,si2,si3);
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
goto L7;
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
si0=4U;
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

void f238(rustpythonInstance*i,U32 l0,U32 l1) {
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
si0=i->g0;
si1=128U;
si0-=si1;
l2=si0;
i->g0=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+8U);
l3=si0;
if(si0){
goto L5;
}
si0=4U;
l4=si0;
goto L4;
L5:;
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
l1=si0;
si0=l5;
if(si0){
goto L7;
}
si0=4U;
l4=si0;
goto L6;
L7:;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=l5;
si0=f15022(i,si0);
l4=si0;
si0=!(si0);
if(si0){
goto L3;
}
L6:;
si0=l3;
si1=120U;
si0*=si1;
l6=si0;
si0=l1;
si1=20U;
si0+=si1;
l7=si0;
si0=l2;
si1=8U;
si0+=si1;
si1=32U;
si0+=si1;
l8=si0;
si0=0U;
l5=si0;
si0=l3;
l9=si0;
L8:;
{
si0=l6;
si1=l5;
si0=si0 == si1;
if(si0){
goto L4;
}
si0=l8;
si1=l1;
si2=32U;
si1+=si2;
f232(i,si0,si1);
si0=l1;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l10=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
l11=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l12=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+12U);
l13=si0;
if(si0){
goto L10;
}
si0=0U;
l14=si0;
goto L9;
L10:;
si0=4U;
l14=si0;
si0=0U;
l15=si0;
si0=l7;
si1=l5;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l16=si0;
si0=!(si0);
if(si0){
goto L11;
}
si0=l16;
si1=178956970U;
si0=si0 > si1;
if(si0){
goto L2;
}
si0=l16;
si1=12U;
si0*=si1;
l17=si0;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L2;
}
si0=l17;
si0=!(si0);
if(si0){
goto L11;
}
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=l17;
si0=f15022(i,si0);
l14=si0;
si0=!(si0);
if(si0){
goto L1;
}
si0=l17;
l15=si0;
L11:;
si0=l14;
si1=l13;
si2=l15;
si0=f15143(i,si0,si1,si2);
si0=l16;
sj0=(U64)(si0);
l18=sj0;
sj1=32ULL;
sj0<<=(sj1&63);
sj1=l18;
sj0|=sj1;
l18=sj0;
L9:;
si0=l2;
sj1=l18;
i64_store(&i->m0,(U64)si0+24U,sj1);
si0=l2;
si1=l14;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l2;
si1=l10;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l2;
si1=l11;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l2;
si1=l12;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l2;
si1=l1;
sj1=i64_load(&i->m0,(U64)si1+24U);
i64_store(&i->m0,(U64)si0+32U,sj1);
si0=l4;
si1=l5;
si0+=si1;
si1=l2;
si2=8U;
si1+=si2;
si2=120U;
si0=f15143(i,si0,si1,si2);
si0=l5;
si1=120U;
si0+=si1;
l5=si0;
si0=l1;
si1=120U;
si0+=si1;
l1=si0;
si0=l9;
si1=-1U;
si0+=si1;
l9=si0;
if(si0){
goto L8;
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
si1=128U;
si0+=si1;
i->g0=si0;
goto L0;
L3:;
si0=4U;
si1=l5;
f52(i,si0,si1);
UNREACHABLE;
L2:;
f53(i);
UNREACHABLE;
L1:;
si0=4U;
si1=l17;
f52(i,si0,si1);
UNREACHABLE;
L0:;
}

void f239(rustpythonInstance*i,U32 l0) {
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
f15024(i,si0);
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

void f240(rustpythonInstance*i,U32 l0) {
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
f453(i,si0);
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

void f241(rustpythonInstance*i,U32 l0,U32 l1) {
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
U32 si0,si1,si2;
si0=0U;
l2=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+12U);
l3=si0;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+16U);
l4=si1;
si0=si0 > si1;
if(si0){
goto L1;
}
si0=l4;
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
si1=l3;
si0+=si1;
l11=si0;
si0=l8;
si0=i32_load8_u(&i->m0,(U64)si0);
l12=si0;
si0=l4;
si1=l3;
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
l14=si0;
si1=l11;
si0=si0 == si1;
if(si0){
goto L7;
}
si0=l14;
si1=l11;
si0-=si1;
l15=si0;
si0=!(si0);
if(si0){
goto L7;
}
si0=0U;
l14=si0;
L9:;
{
si0=l11;
si1=l14;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=l12;
si0=si0 == si1;
if(si0){
goto L3;
}
si0=l15;
si1=l14;
si2=1U;
si1+=si2;
l14=si1;
si0=si0 != si1;
if(si0){
goto L9;
}
}
si0=l15;
si1=l13;
si2=-8U;
si1+=si2;
l16=si1;
si0=si0 > si1;
if(si0){
goto L5;
}
goto L6;
L8:;
si0=l4;
si1=l3;
si0=si0 == si1;
if(si0){
goto L4;
}
si0=0U;
l14=si0;
L10:;
{
si0=l11;
si1=l14;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=l12;
si0=si0 == si1;
if(si0){
goto L3;
}
si0=l13;
si1=l14;
si2=1U;
si1+=si2;
l14=si1;
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
l16=si0;
si0=0U;
l15=si0;
L6:;
si0=l12;
si1=16843009U;
si0*=si1;
l14=si0;
L11:;
{
si0=l11;
si1=l15;
si0+=si1;
l17=si0;
si0=i32_load(&i->m0,(U64)si0);
si1=l14;
si0^=si1;
l18=si0;
si1=-1U;
si0^=si1;
si1=l18;
si2=-16843009U;
si1+=si2;
si0&=si1;
si1=-2139062144U;
si0&=si1;
if(si0){
goto L5;
}
si0=l17;
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=l14;
si0^=si1;
l18=si0;
si1=-1U;
si0^=si1;
si1=l18;
si2=-16843009U;
si1+=si2;
si0&=si1;
si1=-2139062144U;
si0&=si1;
if(si0){
goto L5;
}
si0=l15;
si1=8U;
si0+=si1;
l15=si0;
si1=l16;
si0=si0 <= si1;
if(si0){
goto L11;
}
}
L5:;
si0=l15;
si1=l13;
si0=si0 == si1;
if(si0){
goto L4;
}
L12:;
{
si0=l11;
si1=l15;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=l12;
si0=si0 != si1;
if(si0){
goto L13;
}
si0=l15;
l14=si0;
goto L3;
L13:;
si0=l13;
si1=l15;
si2=1U;
si1+=si2;
l15=si1;
si0=si0 != si1;
if(si0){
goto L12;
}
}
L4:;
si0=l1;
si1=l4;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
goto L0;
L3:;
si0=l1;
si1=l14;
si2=l3;
si1+=si2;
si2=1U;
si1+=si2;
l3=si1;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l3;
si1=l6;
si0=si0 < si1;
if(si0){
goto L14;
}
si0=l3;
si1=l5;
si0=si0 > si1;
if(si0){
goto L14;
}
si0=l10;
si0=!(si0);
if(si0){
goto L15;
}
si0=l9;
si1=l3;
si2=l6;
si1-=si2;
l14=si1;
si0+=si1;
si1=l7;
si2=l6;
si0=f15142(i,si0,si1,si2);
if(si0){
goto L14;
}
si0=l0;
si1=l14;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=8U;
si0+=si1;
si1=l3;
i32_store(&i->m0,(U64)si0,si1);
si0=1U;
l2=si0;
goto L1;
L15:;
si0=l6;
si1=4U;
si2=1085508U;
f597(i,si0,si1,si2);
UNREACHABLE;
L14:;
si0=l3;
si1=l4;
si0=si0 <= si1;
if(si0){
goto L2;
}
}
L1:;
si0=l0;
si1=l2;
i32_store(&i->m0,(U64)si0,si1);
L0:;
}

void f242(rustpythonInstance*i,U32 l0,U32 l1) {
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
goto L4;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
l5=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
L6:;
{
si0=l5;
l7=si0;
si0=l6;
si1=l5;
si0=si0 == si1;
if(si0){
goto L7;
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
goto L5;
}
L7:;
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
goto L6;
}
goto L4;
}
L5:;
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
si1=1090024U;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l2;
si1=147U;
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
f64(i,si0,si1);
si0=l2;
si0=i32_load(&i->m0,(U64)si0+16U);
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
goto L10;
}
si0=l6;
si1=12U;
si0*=si1;
l10=si0;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L10;
}
si0=l10;
if(si0){
goto L9;
}
si0=4U;
l1=si0;
goto L8;
L10:;
f53(i);
UNREACHABLE;
L9:;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=l10;
si0=f15022(i,si0);
l1=si0;
si0=!(si0);
if(si0){
goto L1;
}
L8:;
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
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l2;
si1=l6;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l2;
si1=l1;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l3;
si1=l4;
si0=si0 >= si1;
if(si0){
goto L11;
}
si0=1U;
l10=si0;
L12:;
{
si0=l7;
l6=si0;
L14:;
{
si0=l5;
l7=si0;
si0=l6;
si1=l5;
si0=si0 == si1;
if(si0){
goto L15;
}
si0=l6;
si1=8U;
si0+=si1;
l7=si0;
si0=l6;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L13;
}
L15:;
si0=l7;
l6=si0;
si0=l4;
si1=l3;
si2=1U;
si1+=si2;
l3=si1;
si0=si0 != si1;
if(si0){
goto L14;
}
goto L11;
}
L13:;
si0=l2;
si1=l6;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l2;
si1=2U;
i32_store(&i->m0,(U64)si0+36U,si1);
si0=l2;
si1=1090024U;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l2;
sj1=1ULL;
i64_store(&i->m0,(U64)si0+44U,sj1);
si0=l2;
si1=147U;
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
f64(i,si0,si1);
si0=l2;
si0=i32_load(&i->m0,(U64)si0+16U);
si0=!(si0);
if(si0){
goto L11;
}
si0=l8;
si1=1U;
si0+=si1;
l8=si0;
si0=l10;
si1=l2;
si1=i32_load(&i->m0,(U64)si1+8U);
si0=si0 != si1;
if(si0){
goto L16;
}
si0=l2;
si1=4U;
si0+=si1;
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
f525(i,si0,si1,si2);
si0=l2;
si0=i32_load(&i->m0,(U64)si0+4U);
l1=si0;
L16:;
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
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l3;
si1=1U;
si0+=si1;
l3=si0;
si1=l4;
si0=si0 < si1;
if(si0){
goto L12;
}
}
L11:;
si0=l0;
si1=l2;
sj1=i64_load(&i->m0,(U64)si1+4U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=8U;
si0+=si1;
si1=l2;
si2=4U;
si1+=si2;
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
si1=l10;
f52(i,si0,si1);
UNREACHABLE;
L0:;
}

void f243(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
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
if(si0){
goto L3;
}
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
l4=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=32U;
si0=f15022(i,si0);
l6=si0;
si0=!(si0);
if(si0){
goto L5;
}
si0=l6;
si1=l4;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l6;
si1=l5;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
sj1=4294967300ULL;
i64_store(&i->m0,(U64)si0+8U,sj1);
si0=l3;
si1=l6;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l1;
si1=12U;
si0+=si1;
l1=si0;
si1=l2;
si0=si0 == si1;
if(si0){
goto L6;
}
si0=1U;
l4=si0;
L7:;
{
si0=l1;
si1=8U;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
if(si0){
goto L8;
}
si0=l1;
si1=12U;
si0+=si1;
l1=si0;
si1=l2;
si0=si0 == si1;
if(si0){
goto L6;
}
goto L7;
L8:;
si0=l1;
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
si0=l4;
si1=l3;
si1=i32_load(&i->m0,(U64)si1+8U);
si0=si0 != si1;
if(si0){
goto L9;
}
si0=l3;
si1=4U;
si0+=si1;
si1=l4;
si2=1U;
f524(i,si0,si1,si2);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+4U);
l6=si0;
L9:;
si0=l6;
si1=l4;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l8=si0;
si1=l5;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l8;
si1=l7;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=l4;
si2=1U;
si1+=si2;
l4=si1;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l1;
si1=12U;
si0+=si1;
l1=si0;
si1=l2;
si0=si0 != si1;
if(si0){
goto L7;
}
}
L6:;
si0=l0;
si1=l3;
sj1=i64_load(&i->m0,(U64)si1+4U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=8U;
si0+=si1;
si1=l3;
si2=4U;
si1+=si2;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
goto L1;
L5:;
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

void f244(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
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
l2=si0;
si0=4U;
l5=si0;
goto L4;
L5:;
si0=l3;
si1=2147483641U;
si0=si0 >= si1;
if(si0){
goto L3;
}
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=l3;
si0=f15022(i,si0);
l5=si0;
si0=!(si0);
if(si0){
goto L2;
}
si0=l4;
l6=si0;
si0=0U;
l3=si0;
L6:;
{
si0=l1;
si1=l3;
si0+=si1;
l2=si0;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
si0=l2;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
if(si0){
goto L8;
}
si0=1U;
l8=si0;
goto L7;
L8:;
si0=l2;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L3;
}
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=l2;
si0=f15022(i,si0);
l8=si0;
si0=!(si0);
if(si0){
goto L1;
}
L7:;
si0=l5;
si1=l3;
si0+=si1;
l9=si0;
si1=l8;
si2=l7;
si3=l2;
si1=f15143(i,si1,si2,si3);
i32_store(&i->m0,(U64)si0,si1);
si0=l9;
si1=8U;
si0+=si1;
si1=l2;
i32_store(&i->m0,(U64)si0,si1);
si0=l9;
si1=4U;
si0+=si1;
si1=l2;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=12U;
si0+=si1;
l3=si0;
si0=l6;
si1=-1U;
si0+=si1;
l6=si0;
if(si0){
goto L6;
}
}
si0=l4;
l2=si0;
L4:;
si0=l0;
si1=l2;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l0;
si1=l4;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l5;
i32_store(&i->m0,(U64)si0,si1);
goto L0;
L3:;
f53(i);
UNREACHABLE;
L2:;
si0=4U;
si1=l3;
f52(i,si0,si1);
UNREACHABLE;
L1:;
si0=1U;
si1=l2;
f52(i,si0,si1);
UNREACHABLE;
L0:;
}

void f245(rustpythonInstance*i,U32 l0,U32 l1) {
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
U32 si0,si1,si2,si3,si4,si5,si6;
U64 sj0,sj1;
si0=i->g0;
si1=96U;
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
goto L4;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+24U);
l5=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+20U);
l6=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
l7=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l8=si0;
L5:;
{
si0=l3;
l9=si0;
si0=l8;
l10=si0;
L7:;
{
si0=l7;
l8=si0;
si0=l10;
si1=l7;
si0=si0 == si1;
if(si0){
goto L8;
}
si0=l1;
si1=l10;
si2=248U;
si1+=si2;
l8=si1;
i32_store(&i->m0,(U64)si0,si1);
si0=l10;
sj0=i64_load(&i->m0,(U64)si0);
sj1=2ULL;
si0=sj0 != sj1;
if(si0){
goto L6;
}
L8:;
si0=l1;
si1=l9;
si2=1U;
si1+=si2;
l9=si1;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l8;
l10=si0;
si0=l4;
si1=l9;
si0=si0 != si1;
if(si0){
goto L7;
}
goto L4;
}
L6:;
si0=l1;
si1=l6;
si2=1U;
si1+=si2;
l6=si1;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l1;
si1=l9;
si2=1U;
si1+=si2;
l3=si1;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l5;
si0=i32_load(&i->m0,(U64)si0);
si1=l9;
si0=si0 < si1;
if(si0){
goto L10;
}
si0=l10;
si1=188U;
si0+=si1;
si0=i32_load16_u(&i->m0,(U64)si0);
si1=16401U;
si0&=si1;
si0=!(si0);
if(si0){
goto L9;
}
L10:;
si0=l3;
si1=l4;
si0=si0 < si1;
if(si0){
goto L5;
}
goto L4;
L9:;
}
si0=l2;
si1=76U;
si0+=si1;
si1=l10;
f406(i,si0,si1);
si0=l2;
si1=60U;
si0+=si1;
si1=12U;
si0+=si1;
si1=50U;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=36U;
si0+=si1;
si1=12U;
si0+=si1;
sj1=2ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=148U;
i32_store(&i->m0,(U64)si0+64U,si1);
si0=l2;
si1=1096416U;
i32_store(&i->m0,(U64)si0+36U,si1);
si0=l10;
si1=188U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si0=l10;
si1=60U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=l2;
si1=2U;
i32_store(&i->m0,(U64)si0+40U,si1);
si0=l2;
si1=3U;
si2=0U;
si3=l1;
si4=1U;
si3>>=(si4&31);
si4=l10;
si4=i32_load(&i->m0,(U64)si4+48U);
si4=!(si4);
si5=l3;
si6=2U;
si5=si5 < si6;
si4|=si5;
si3&=si4;
l10=si3;
si1=si3?si1:si2;
i32_store(&i->m0,(U64)si0+92U,si1);
si0=l2;
si1=1090040U;
si2=1088744U;
si3=l10;
si1=si3?si1:si2;
i32_store(&i->m0,(U64)si0+88U,si1);
si0=l2;
si1=l2;
si2=88U;
si1+=si2;
i32_store(&i->m0,(U64)si0+68U,si1);
si0=l2;
si1=l2;
si2=76U;
si1+=si2;
i32_store(&i->m0,(U64)si0+60U,si1);
si0=l2;
si1=l2;
si2=60U;
si1+=si2;
i32_store(&i->m0,(U64)si0+44U,si1);
si0=l2;
si1=24U;
si0+=si1;
si1=l2;
si2=36U;
si1+=si2;
f64(i,si0,si1);
si0=l2;
si0=i32_load(&i->m0,(U64)si0+76U);
l10=si0;
si0=!(si0);
if(si0){
goto L11;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0+80U);
si0=!(si0);
if(si0){
goto L11;
}
si0=l10;
f15024(i,si0);
L11:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+24U);
l10=si0;
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
si0=l2;
sj0=i64_load(&i->m0,(U64)si0+28U);
l11=sj0;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=48U;
si0=f15022(i,si0);
l3=si0;
si0=!(si0);
if(si0){
goto L1;
}
si0=l3;
sj1=l11;
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l3;
si1=l10;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
sj1=4294967300ULL;
i64_store(&i->m0,(U64)si0+16U,sj1);
si0=l2;
si1=l3;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l9;
si1=1U;
si0+=si1;
l1=si0;
si1=l4;
si0=si0 >= si1;
if(si0){
goto L12;
}
si0=1U;
l6=si0;
L13:;
{
si0=l1;
l9=si0;
si0=l8;
l10=si0;
L14:;
{
si0=l7;
l8=si0;
si0=l10;
si1=l7;
si0=si0 == si1;
if(si0){
goto L16;
}
si0=l10;
si1=248U;
si0+=si1;
l8=si0;
si0=l10;
sj0=i64_load(&i->m0,(U64)si0);
sj1=2ULL;
si0=sj0 != sj1;
if(si0){
goto L15;
}
L16:;
si0=l8;
l10=si0;
si0=l9;
si1=1U;
si0+=si1;
l9=si0;
si1=l4;
si0=si0 != si1;
if(si0){
goto L14;
}
goto L12;
L15:;
si0=l9;
si1=1U;
si0+=si1;
l1=si0;
si0=l5;
si0=i32_load(&i->m0,(U64)si0);
si1=l9;
si0=si0 < si1;
if(si0){
goto L18;
}
si0=l10;
si1=188U;
si0+=si1;
l9=si0;
si0=i32_load16_u(&i->m0,(U64)si0);
si1=16401U;
si0&=si1;
si0=!(si0);
if(si0){
goto L17;
}
L18:;
si0=l1;
l9=si0;
si0=l8;
l10=si0;
si0=l1;
si1=l4;
si0=si0 < si1;
if(si0){
goto L14;
}
goto L12;
L17:;
}
si0=l2;
si1=76U;
si0+=si1;
si1=l10;
f406(i,si0,si1);
si0=l2;
si1=50U;
i32_store(&i->m0,(U64)si0+72U,si1);
si0=l2;
si1=148U;
i32_store(&i->m0,(U64)si0+64U,si1);
si0=l2;
si1=1096416U;
i32_store(&i->m0,(U64)si0+36U,si1);
si0=l2;
sj1=2ULL;
i64_store(&i->m0,(U64)si0+48U,sj1);
si0=l9;
si0=i32_load(&i->m0,(U64)si0);
l9=si0;
si0=l10;
si1=60U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l12=si0;
si0=l2;
si1=2U;
i32_store(&i->m0,(U64)si0+40U,si1);
si0=l2;
si1=3U;
si2=0U;
si3=l9;
si4=1U;
si3>>=(si4&31);
si4=l10;
si4=i32_load(&i->m0,(U64)si4+48U);
si4=!(si4);
si5=l12;
si6=2U;
si5=si5 < si6;
si4|=si5;
si3&=si4;
l10=si3;
si1=si3?si1:si2;
i32_store(&i->m0,(U64)si0+92U,si1);
si0=l2;
si1=1090040U;
si2=1088744U;
si3=l10;
si1=si3?si1:si2;
i32_store(&i->m0,(U64)si0+88U,si1);
si0=l2;
si1=l2;
si2=88U;
si1+=si2;
i32_store(&i->m0,(U64)si0+68U,si1);
si0=l2;
si1=l2;
si2=76U;
si1+=si2;
i32_store(&i->m0,(U64)si0+60U,si1);
si0=l2;
si1=l2;
si2=60U;
si1+=si2;
i32_store(&i->m0,(U64)si0+44U,si1);
si0=l2;
si1=24U;
si0+=si1;
si1=l2;
si2=36U;
si1+=si2;
f64(i,si0,si1);
si0=l2;
si0=i32_load(&i->m0,(U64)si0+76U);
l10=si0;
si0=!(si0);
if(si0){
goto L19;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0+80U);
si0=!(si0);
if(si0){
goto L19;
}
si0=l10;
f15024(i,si0);
L19:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+24U);
l10=si0;
si0=!(si0);
if(si0){
goto L12;
}
si0=l2;
sj0=i64_load(&i->m0,(U64)si0+28U);
l11=sj0;
si0=l6;
si1=l2;
si1=i32_load(&i->m0,(U64)si1+16U);
si0=si0 != si1;
if(si0){
goto L20;
}
si0=l2;
si1=12U;
si0+=si1;
si1=l6;
si2=1U;
f525(i,si0,si1,si2);
si0=l2;
si0=i32_load(&i->m0,(U64)si0+12U);
l3=si0;
L20:;
si0=l3;
si1=l6;
si2=12U;
si1*=si2;
si0+=si1;
l9=si0;
sj1=l11;
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l9;
si1=l10;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=l6;
si2=1U;
si1+=si2;
l6=si1;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l1;
si1=l4;
si0=si0 < si1;
if(si0){
goto L13;
}
}
L12:;
si0=l0;
si1=l2;
sj1=i64_load(&i->m0,(U64)si1+12U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=8U;
si0+=si1;
si1=l2;
si2=12U;
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
si0=4U;
si1=48U;
f52(i,si0,si1);
UNREACHABLE;
L0:;
}

void f246(rustpythonInstance*i,U32 l0,U32 l1) {
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
si0=i32_load(&i->m0,(U64)si0+4U);
l3=si0;
si0=l2;
si1=24U;
si0+=si1;
si1=l1;
f241(i,si0,si1);
si0=l2;
si0=i32_load(&i->m0,(U64)si0+24U);
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
si0=i32_load(&i->m0,(U64)si0+4U);
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
si2=32U;
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
si0=l4;
if(si0){
goto L9;
}
si0=0U;
l4=si0;
goto L8;
L9:;
si0=l3;
si1=l4;
si2=-1U;
si1+=si2;
l5=si1;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=10U;
si0=si0 != si1;
if(si0){
goto L8;
}
si0=l4;
si1=-2U;
si0+=si1;
l4=si0;
si0=l5;
if(si0){
goto L11;
}
si0=0U;
l6=si0;
goto L10;
L11:;
si0=l3;
si1=0U;
si2=l3;
si3=l4;
si2+=si3;
si2=i32_load8_u(&i->m0,(U64)si2);
si3=13U;
si2=si2 == si3;
si0=si2?si0:si1;
l6=si0;
L10:;
si0=l4;
si1=l5;
si2=l6;
si0=si2?si0:si1;
l4=si0;
si0=l6;
si1=l3;
si2=l6;
si0=si2?si0:si1;
l3=si0;
L8:;
si0=l2;
si1=84U;
si0+=si1;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+40U);
si2=l3;
si3=l4;
f489(i,si0,si1,si2,si3);
si0=l2;
si0=i32_load(&i->m0,(U64)si0+84U);
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
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=48U;
si0=f15022(i,si0);
l6=si0;
si0=!(si0);
if(si0){
goto L1;
}
si0=l6;
si1=l2;
sj1=i64_load(&i->m0,(U64)si1+84U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l6;
si1=8U;
si0+=si1;
si1=l2;
si2=84U;
si1+=si2;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
sj1=4294967300ULL;
i64_store(&i->m0,(U64)si0+16U,sj1);
si0=l2;
si1=l6;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l2;
si1=24U;
si0+=si1;
si1=40U;
si0+=si1;
si1=l1;
si2=40U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=24U;
si0+=si1;
si1=32U;
si0+=si1;
si1=l1;
si2=32U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=24U;
si0+=si1;
si1=24U;
si0+=si1;
si1=l1;
si2=24U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=24U;
si0+=si1;
si1=16U;
si0+=si1;
si1=l1;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=24U;
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
i64_store(&i->m0,(U64)si0+24U,sj1);
si0=l2;
si0=i32_load8_u(&i->m0,(U64)si0+61U);
if(si0){
goto L12;
}
si0=12U;
l5=si0;
si0=1U;
l3=si0;
L13:;
{
si0=l2;
si0=i32_load(&i->m0,(U64)si0+28U);
l7=si0;
si0=l2;
si1=84U;
si0+=si1;
si1=l2;
si2=24U;
si1+=si2;
f241(i,si0,si1);
si0=l2;
si0=i32_load(&i->m0,(U64)si0+84U);
if(si0){
goto L15;
}
si0=l2;
si0=i32_load8_u(&i->m0,(U64)si0+61U);
if(si0){
goto L12;
}
si0=l2;
si1=1U;
i32_store8(&i->m0,(U64)si0+61U,si1);
si0=l2;
si0=i32_load(&i->m0,(U64)si0+52U);
l4=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+56U);
l1=si0;
si0=l2;
si0=i32_load8_u(&i->m0,(U64)si0+60U);
if(si0){
goto L16;
}
si0=l1;
si1=l4;
si0=si0 == si1;
if(si0){
goto L12;
}
L16:;
si0=l1;
si1=l4;
si0-=si1;
l1=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+28U);
si1=l4;
si0+=si1;
l4=si0;
goto L14;
L15:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+52U);
l4=si0;
si0=l2;
si1=l2;
si1=i32_load(&i->m0,(U64)si1+92U);
l1=si1;
i32_store(&i->m0,(U64)si0+52U,si1);
si0=l1;
si1=l4;
si0-=si1;
l1=si0;
si0=l7;
si1=l4;
si0+=si1;
l4=si0;
L14:;
si0=l1;
if(si0){
goto L18;
}
si0=0U;
l1=si0;
goto L17;
L18:;
si0=l4;
si1=l1;
si2=-1U;
si1+=si2;
l7=si1;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=10U;
si0=si0 != si1;
if(si0){
goto L17;
}
si0=l1;
si1=-2U;
si0+=si1;
l1=si0;
si0=l7;
if(si0){
goto L20;
}
si0=0U;
l8=si0;
goto L19;
L20:;
si0=l4;
si1=0U;
si2=l4;
si3=l1;
si2+=si3;
si2=i32_load8_u(&i->m0,(U64)si2);
si3=13U;
si2=si2 == si3;
si0=si2?si0:si1;
l8=si0;
L19:;
si0=l1;
si1=l7;
si2=l8;
si0=si2?si0:si1;
l1=si0;
si0=l8;
si1=l4;
si2=l8;
si0=si2?si0:si1;
l4=si0;
L17:;
si0=l2;
si1=72U;
si0+=si1;
si1=l2;
si1=i32_load(&i->m0,(U64)si1+64U);
si2=l4;
si3=l1;
f489(i,si0,si1,si2,si3);
si0=l2;
si0=i32_load(&i->m0,(U64)si0+72U);
si0=!(si0);
if(si0){
goto L12;
}
si0=l3;
si1=l2;
si1=i32_load(&i->m0,(U64)si1+16U);
si0=si0 != si1;
if(si0){
goto L21;
}
si0=l2;
si1=12U;
si0+=si1;
si1=l3;
si2=1U;
f525(i,si0,si1,si2);
si0=l2;
si0=i32_load(&i->m0,(U64)si0+12U);
l6=si0;
L21:;
si0=l6;
si1=l5;
si0+=si1;
l1=si0;
si1=l2;
sj1=i64_load(&i->m0,(U64)si1+72U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si1=8U;
si0+=si1;
si1=l2;
si2=72U;
si1+=si2;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=l3;
si2=1U;
si1+=si2;
l3=si1;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l5;
si1=12U;
si0+=si1;
l5=si0;
si0=l2;
si0=i32_load8_u(&i->m0,(U64)si0+61U);
si0=!(si0);
if(si0){
goto L13;
}
}
L12:;
si0=l0;
si1=l2;
sj1=i64_load(&i->m0,(U64)si1+12U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=8U;
si0+=si1;
si1=l2;
si2=12U;
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
si0=4U;
si1=48U;
f52(i,si0,si1);
UNREACHABLE;
L0:;
}

void f247(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
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
si1=-1073741836U;
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
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=l2;
si0=f15022(i,si0);
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
si1=4U;
si0+=si1;
si1=l1;
si1=i32_load(&i->m0,(U64)si1);
si2=l1;
si3=8U;
si2+=si3;
si2=i32_load(&i->m0,(U64)si2);
f686(i,si0,si1,si2);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+4U);
if(si0){
goto L1;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0+12U);
l7=si0;
si0=l2;
si1=l3;
si1=i32_load(&i->m0,(U64)si1+8U);
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=4U;
si0+=si1;
si1=l7;
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
si0=1090492U;
si1=35U;
si2=1090632U;
f634(i,si0,si1,si2);
UNREACHABLE;
L0:;
}

void f248(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U64 l8=0;
U32 l9=0;
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
goto L6;
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
goto L4;
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
goto L5;
L6:;
si0=l1;
si1=8U;
si0+=si1;
l5=si0;
si0=l1;
si1=4U;
si0+=si1;
l3=si0;
L5:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
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
si0=l1;
si0=i32_load(&i->m0,(U64)si0+16U);
l3=si0;
si0=i32_load(&i->m0,(U64)si0+12U);
si1=l3;
si1=i32_load(&i->m0,(U64)si1+8U);
si0-=si1;
si1=12U;
si0=DIV_U(si0,si1);
l4=si0;
si1=3U;
si2=l4;
si3=3U;
si2=si2 > si3;
si0=si2?si0:si1;
l4=si0;
si1=178956969U;
si0=si0 > si1;
if(si0){
goto L9;
}
si0=l4;
si1=1U;
si0+=si1;
l7=si0;
si1=12U;
si0*=si1;
l4=si0;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L9;
}
si0=l5;
sj0=i64_load(&i->m0,(U64)si0);
l8=sj0;
si0=l4;
if(si0){
goto L8;
}
si0=4U;
l9=si0;
goto L7;
L9:;
f53(i);
UNREACHABLE;
L8:;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=l4;
si0=f15022(i,si0);
l9=si0;
si0=!(si0);
if(si0){
goto L1;
}
L7:;
si0=l9;
sj1=l8;
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l9;
si1=l6;
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=1U;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l2;
si1=l7;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l2;
si1=l9;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+8U);
l4=si0;
si1=l3;
si1=i32_load(&i->m0,(U64)si1+12U);
si0=si0 == si1;
if(si0){
goto L10;
}
si0=l3;
si1=l4;
si2=12U;
si1+=si2;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si0=!(si0);
if(si0){
goto L10;
}
si0=l9;
si1=16U;
si0+=si1;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1+4U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l9;
si1=l5;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l1;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=2U;
l5=si0;
si0=l2;
si1=2U;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+8U);
l4=si0;
si1=l3;
si1=i32_load(&i->m0,(U64)si1+12U);
si0=si0 == si1;
if(si0){
goto L10;
}
si0=28U;
l6=si0;
L11:;
{
si0=l3;
si1=l4;
si2=12U;
si1+=si2;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
si0=!(si0);
if(si0){
goto L10;
}
si0=l4;
sj0=i64_load(&i->m0,(U64)si0+4U);
l8=sj0;
si0=l5;
si1=l2;
si1=i32_load(&i->m0,(U64)si1+8U);
si0=si0 != si1;
if(si0){
goto L12;
}
si0=l2;
si1=4U;
si0+=si1;
si1=l5;
si2=l3;
si2=i32_load(&i->m0,(U64)si2+12U);
si3=l3;
si3=i32_load(&i->m0,(U64)si3+8U);
si2-=si3;
si3=12U;
si2=DIV_U(si2,si3);
si3=1U;
si2+=si3;
f525(i,si0,si1,si2);
si0=l2;
si0=i32_load(&i->m0,(U64)si0+4U);
l9=si0;
L12:;
si0=l9;
si1=l6;
si0+=si1;
l4=si0;
sj1=l8;
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=-4U;
si0+=si1;
si1=l7;
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=l5;
si2=1U;
si1+=si2;
l5=si1;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l6;
si1=12U;
si0+=si1;
l6=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+8U);
l4=si0;
si1=l3;
si1=i32_load(&i->m0,(U64)si1+12U);
si0=si0 != si1;
if(si0){
goto L11;
}
}
L10:;
si0=l0;
si1=l2;
sj1=i64_load(&i->m0,(U64)si1+4U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=8U;
si0+=si1;
si1=l2;
si2=4U;
si1+=si2;
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
si0=4U;
si1=l4;
f52(i,si0,si1);
UNREACHABLE;
L0:;
}

void f249(rustpythonInstance*i,U32 l0,U32 l1) {
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
U32 si0,si1,si2,si3,si4;
U64 sj0,sj1,sj2;
si0=i->g0;
si1=16U;
si0-=si1;
l2=si0;
i->g0=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+24U);
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
si1=l3;
si2=-1U;
si1+=si2;
l3=si1;
i32_store(&i->m0,(U64)si0+24U,si1);
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
si1=l3;
si2=-1U;
si1+=si2;
l3=si1;
i32_store(&i->m0,(U64)si0+24U,si1);
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
l9=si0;
si0=i32_load(&i->m0,(U64)si0);
l10=si0;
si0=l9;
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l9=si0;
si0=l8;
if(si0){
goto L8;
}
si0=4U;
l11=si0;
goto L7;
L9:;
f53(i);
UNREACHABLE;
L8:;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=l8;
si0=f15022(i,si0);
l11=si0;
si0=!(si0);
if(si0){
goto L1;
}
L7:;
si0=l11;
si1=l9;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l11;
si1=l10;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=1U;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l2;
si1=l6;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l2;
si1=l11;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l3;
si0=!(si0);
if(si0){
goto L10;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+8U);
l8=si0;
si0=1U;
l1=si0;
L11:;
{
sj0=l7;
sj1=0ULL;
si0=sj0 != sj1;
if(si0){
goto L12;
}
si0=l8;
l6=si0;
L13:;
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
goto L13;
}
}
L12:;
si0=l3;
si1=-1U;
si0+=si1;
l3=si0;
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
si1=i32_load(&i->m0,(U64)si1+8U);
si0=si0 != si1;
if(si0){
goto L14;
}
si0=l2;
si1=4U;
si0+=si1;
si1=l1;
si2=l3;
si3=1U;
si2+=si3;
l10=si2;
si3=-1U;
si4=l10;
si2=si4?si2:si3;
f524(i,si0,si1,si2);
si0=l2;
si0=i32_load(&i->m0,(U64)si0+4U);
l11=si0;
L14:;
sj0=l7;
sj1=-1ULL;
sj0+=sj1;
sj1=l7;
sj0&=sj1;
l7=sj0;
si0=l11;
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
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l3;
if(si0){
goto L11;
}
}
L10:;
si0=l0;
si1=l2;
sj1=i64_load(&i->m0,(U64)si1+4U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=8U;
si0+=si1;
si1=l2;
si2=4U;
si1+=si2;
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
si0=4U;
si1=l8;
f52(i,si0,si1);
UNREACHABLE;
L0:;
}

void f250(rustpythonInstance*i,U32 l0,U32 l1) {
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
si0=f175(i,si0,si1);
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
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=16U;
si0=f15022(i,si0);
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
i64_store(&i->m0,(U64)si0+16U,sj1);
si0=l2;
si1=l4;
i32_store(&i->m0,(U64)si0+12U,si1);
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
si0=f175(i,si0,si1);
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
si0=l1;
si1=l2;
si1=i32_load(&i->m0,(U64)si1+16U);
si0=si0 != si1;
if(si0){
goto L9;
}
si0=l2;
si1=12U;
si0+=si1;
si1=l1;
si2=1U;
f526(i,si0,si1,si2);
si0=l2;
si0=i32_load(&i->m0,(U64)si0+12U);
l4=si0;
L9:;
si0=l4;
si1=l1;
si2=2U;
si1<<=(si2&31);
si0+=si1;
si1=l3;
si2=72U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=l1;
si2=1U;
si1+=si2;
l1=si1;
i32_store(&i->m0,(U64)si0+20U,si1);
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
sj1=i64_load(&i->m0,(U64)si1+12U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=8U;
si0+=si1;
si1=l2;
si2=12U;
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

void f251(rustpythonInstance*i,U32 l0,U32 l1) {
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
f218(i,si0,si1);
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
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=64U;
si0=f15022(i,si0);
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
i64_store(&i->m0,(U64)si0+56U,sj1);
si0=l2;
si1=l5;
i32_store(&i->m0,(U64)si0+52U,si1);
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
f218(i,si0,si1);
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
si1=i32_load(&i->m0,(U64)si1+56U);
si0=si0 != si1;
if(si0){
goto L6;
}
si0=l2;
si1=52U;
si0+=si1;
si1=l1;
si2=1U;
f527(i,si0,si1,si2);
si0=l2;
si0=i32_load(&i->m0,(U64)si0+52U);
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
i32_store(&i->m0,(U64)si0+60U,si1);
si0=l3;
si1=16U;
si0+=si1;
l3=si0;
si0=l2;
si1=l2;
si2=64U;
si1+=si2;
f218(i,si0,si1);
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
sj1=i64_load(&i->m0,(U64)si1+52U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=8U;
si0+=si1;
si1=l2;
si2=52U;
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

void f252(rustpythonInstance*i,U32 l0,U32 l1) {
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
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
l3=si0;
si1=l1;
si1=i32_load(&i->m0,(U64)si1);
l4=si1;
si0-=si1;
l5=si0;
si1=3U;
si0>>=(si1&31);
l6=si0;
si0=l3;
si1=l4;
si0=si0 != si1;
if(si0){
goto L3;
}
si0=0U;
l1=si0;
si0=4U;
l7=si0;
goto L2;
L3:;
si0=l5;
si1=1431655760U;
si0=si0 > si1;
if(si0){
goto L6;
}
si0=l6;
si1=12U;
si0*=si1;
l3=si0;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L6;
}
si0=l3;
if(si0){
goto L5;
}
si0=4U;
l7=si0;
goto L4;
L6:;
f53(i);
UNREACHABLE;
L5:;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=l3;
si0=f15022(i,si0);
l7=si0;
si0=!(si0);
if(si0){
goto L1;
}
L4:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+8U);
l5=si0;
si0=l7;
l1=si0;
si0=l6;
l3=si0;
L7:;
{
si0=l5;
si0=i32_load(&i->m0,(U64)si0);
si0=i32_load8_u(&i->m0,(U64)si0+16U);
switch(si0){
case 0:
goto L10;
case 1:
goto L10;
case 2:
goto L9;
default:
goto L10;
}
L10:;
si0=l2;
si1=2U;
i32_store(&i->m0,(U64)si0+56U,si1);
goto L8;
L9:;
si0=l2;
si1=3U;
i32_store(&i->m0,(U64)si0+56U,si1);
L8:;
si0=l2;
si1=l4;
i32_store(&i->m0,(U64)si0+60U,si1);
si0=l2;
si1=149U;
i32_store(&i->m0,(U64)si0+52U,si1);
si0=l2;
si1=1U;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l2;
si1=1090748U;
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
f64(i,si0,si1);
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
si0=l4;
si1=8U;
si0+=si1;
l4=si0;
si0=l3;
si1=-1U;
si0+=si1;
l3=si0;
if(si0){
goto L7;
}
}
si0=l6;
l1=si0;
L2:;
si0=l0;
si1=l1;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l0;
si1=l6;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l7;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=64U;
si0+=si1;
i->g0=si0;
goto L0;
L1:;
si0=4U;
si1=l3;
f52(i,si0,si1);
UNREACHABLE;
L0:;
}

void f253(rustpythonInstance*i,U32 l0,U32 l1) {
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
si0=i32_load(&i->m0,(U64)si0+4U);
l4=si0;
si0=l2;
si1=24U;
si0+=si1;
si1=l1;
f241(i,si0,si1);
si0=l2;
si0=i32_load(&i->m0,(U64)si0+24U);
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
si0=i32_load(&i->m0,(U64)si0+4U);
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
si0=i32_load(&i->m0,(U64)si0+4U);
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
si2=32U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l2;
si0=i32_load(&i->m0,(U64)si0+28U);
si1=l3;
si0-=si1;
l5=si0;
si0=l4;
si1=l3;
si0+=si1;
l3=si0;
L2:;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=32U;
si0=f15022(i,si0);
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
i64_store(&i->m0,(U64)si0+16U,sj1);
si0=l2;
si1=l6;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l2;
si1=24U;
si0+=si1;
si1=40U;
si0+=si1;
si1=l1;
si2=40U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=24U;
si0+=si1;
si1=32U;
si0+=si1;
si1=l1;
si2=32U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=24U;
si0+=si1;
si1=24U;
si0+=si1;
si1=l1;
si2=24U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=24U;
si0+=si1;
si1=16U;
si0+=si1;
si1=l1;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=24U;
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
i64_store(&i->m0,(U64)si0+24U,sj1);
si0=8U;
l3=si0;
si0=1U;
l1=si0;
L10:;
{
si0=l2;
si0=i32_load(&i->m0,(U64)si0+64U);
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
i32_store(&i->m0,(U64)si0+64U,si1);
si0=l2;
si0=i32_load8_u(&i->m0,(U64)si0+61U);
if(si0){
goto L12;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0+28U);
l7=si0;
si0=l2;
si1=68U;
si0+=si1;
si1=l2;
si2=24U;
si1+=si2;
f241(i,si0,si1);
si0=l2;
si0=i32_load(&i->m0,(U64)si0+68U);
if(si0){
goto L14;
}
si0=l2;
si0=i32_load8_u(&i->m0,(U64)si0+61U);
if(si0){
goto L12;
}
si0=l2;
si1=1U;
i32_store8(&i->m0,(U64)si0+61U,si1);
si0=l2;
si0=i32_load(&i->m0,(U64)si0+52U);
l5=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+56U);
l4=si0;
si0=l2;
si0=i32_load8_u(&i->m0,(U64)si0+60U);
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
si0=i32_load(&i->m0,(U64)si0+28U);
si1=l5;
si0+=si1;
l7=si0;
goto L13;
L15:;
si0=l2;
si1=0U;
i32_store(&i->m0,(U64)si0+64U,si1);
si0=l2;
si0=i32_load8_u(&i->m0,(U64)si0+61U);
if(si0){
goto L12;
}
si0=l2;
si1=1U;
i32_store8(&i->m0,(U64)si0+61U,si1);
si0=l2;
si0=i32_load(&i->m0,(U64)si0+52U);
l5=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+56U);
l4=si0;
si0=l2;
si0=i32_load8_u(&i->m0,(U64)si0+60U);
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
si0=i32_load(&i->m0,(U64)si0+28U);
si1=l5;
si0+=si1;
l7=si0;
goto L13;
L14:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+52U);
l5=si0;
si0=l2;
si1=l2;
si1=i32_load(&i->m0,(U64)si1+76U);
i32_store(&i->m0,(U64)si0+52U,si1);
si0=l2;
si0=i32_load(&i->m0,(U64)si0+72U);
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
si1=i32_load(&i->m0,(U64)si1+16U);
si0=si0 != si1;
if(si0){
goto L11;
}
si0=l2;
si1=12U;
si0+=si1;
si1=l1;
si2=1U;
f524(i,si0,si1,si2);
si0=l2;
si0=i32_load(&i->m0,(U64)si0+12U);
l6=si0;
goto L11;
L12:;
si0=l0;
si1=l2;
sj1=i64_load(&i->m0,(U64)si1+12U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=8U;
si0+=si1;
si1=l2;
si2=12U;
si1+=si2;
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
i32_store(&i->m0,(U64)si0+20U,si1);
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

void f254(rustpythonInstance*i,U32 l0,U32 l1) {
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
U32 si0,si1,si2,si3,si4,si5,si6;
U64 sj0,sj1;
si0=i->g0;
si1=96U;
si0-=si1;
l2=si0;
i->g0=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+20U);
l3=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
l4=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+8U);
l6=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+12U);
l7=si0;
L4:;
{
si0=l6;
si1=l7;
si0=si0 >= si1;
if(si0){
goto L3;
}
si0=l6;
l8=si0;
si0=l5;
l9=si0;
L6:;
{
si0=l4;
l5=si0;
si0=l9;
si1=l4;
si0=si0 == si1;
if(si0){
goto L7;
}
si0=l1;
si1=l9;
si2=248U;
si1+=si2;
l5=si1;
i32_store(&i->m0,(U64)si0,si1);
si0=l9;
sj0=i64_load(&i->m0,(U64)si0);
sj1=2ULL;
si0=sj0 != sj1;
if(si0){
goto L5;
}
L7:;
si0=l1;
si1=l8;
si2=1U;
si1+=si2;
l8=si1;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l5;
l9=si0;
si0=l7;
si1=l8;
si0=si0 != si1;
if(si0){
goto L6;
}
goto L3;
}
L5:;
si0=l1;
si1=l3;
si2=1U;
si1+=si2;
l3=si1;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l1;
si1=l8;
si2=1U;
si1+=si2;
l6=si1;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l9;
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
si1=76U;
si0+=si1;
si1=l9;
f406(i,si0,si1);
si0=l2;
si1=60U;
si0+=si1;
si1=12U;
si0+=si1;
si1=50U;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=36U;
si0+=si1;
si1=12U;
si0+=si1;
sj1=2ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=148U;
i32_store(&i->m0,(U64)si0+64U,si1);
si0=l2;
si1=1096416U;
i32_store(&i->m0,(U64)si0+36U,si1);
si0=l9;
si1=188U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si0=l9;
si1=60U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si0=l2;
si1=2U;
i32_store(&i->m0,(U64)si0+40U,si1);
si0=l2;
si1=3U;
si2=0U;
si3=l1;
si4=1U;
si3>>=(si4&31);
si4=l9;
si4=i32_load(&i->m0,(U64)si4+48U);
si4=!(si4);
si5=l6;
si6=2U;
si5=si5 < si6;
si4|=si5;
si3&=si4;
l9=si3;
si1=si3?si1:si2;
i32_store(&i->m0,(U64)si0+92U,si1);
si0=l2;
si1=1090040U;
si2=1088744U;
si3=l9;
si1=si3?si1:si2;
i32_store(&i->m0,(U64)si0+88U,si1);
si0=l2;
si1=l2;
si2=88U;
si1+=si2;
i32_store(&i->m0,(U64)si0+68U,si1);
si0=l2;
si1=l2;
si2=76U;
si1+=si2;
i32_store(&i->m0,(U64)si0+60U,si1);
si0=l2;
si1=l2;
si2=60U;
si1+=si2;
i32_store(&i->m0,(U64)si0+44U,si1);
si0=l2;
si1=24U;
si0+=si1;
si1=l2;
si2=36U;
si1+=si2;
f64(i,si0,si1);
si0=l2;
si0=i32_load(&i->m0,(U64)si0+76U);
l9=si0;
si0=!(si0);
if(si0){
goto L8;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0+80U);
si0=!(si0);
if(si0){
goto L8;
}
si0=l9;
f15024(i,si0);
L8:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+24U);
l9=si0;
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
sj0=i64_load(&i->m0,(U64)si0+28U);
l10=sj0;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=48U;
si0=f15022(i,si0);
l6=si0;
si0=!(si0);
if(si0){
goto L10;
}
si0=l8;
si1=1U;
si0+=si1;
l1=si0;
si0=l6;
sj1=l10;
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l6;
si1=l9;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
sj1=4294967300ULL;
i64_store(&i->m0,(U64)si0+16U,sj1);
si0=l2;
si1=l6;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=1U;
l3=si0;
L11:;
{
si0=l1;
si1=l7;
si0=si0 >= si1;
if(si0){
goto L9;
}
si0=l1;
l8=si0;
si0=l5;
l9=si0;
L13:;
{
si0=l4;
l5=si0;
si0=l9;
si1=l4;
si0=si0 == si1;
if(si0){
goto L14;
}
si0=l9;
si1=248U;
si0+=si1;
l5=si0;
si0=l9;
sj0=i64_load(&i->m0,(U64)si0);
sj1=2ULL;
si0=sj0 != sj1;
if(si0){
goto L12;
}
L14:;
si0=l5;
l9=si0;
si0=l7;
si1=l8;
si2=1U;
si1+=si2;
l8=si1;
si0=si0 != si1;
if(si0){
goto L13;
}
goto L9;
}
L12:;
si0=l8;
si1=1U;
si0+=si1;
l1=si0;
si0=l9;
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
si1=76U;
si0+=si1;
si1=l9;
f406(i,si0,si1);
si0=l2;
si1=50U;
i32_store(&i->m0,(U64)si0+72U,si1);
si0=l2;
si1=148U;
i32_store(&i->m0,(U64)si0+64U,si1);
si0=l2;
si1=1096416U;
i32_store(&i->m0,(U64)si0+36U,si1);
si0=l2;
sj1=2ULL;
i64_store(&i->m0,(U64)si0+48U,sj1);
si0=l11;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si0=l9;
si1=60U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l11=si0;
si0=l2;
si1=2U;
i32_store(&i->m0,(U64)si0+40U,si1);
si0=l2;
si1=3U;
si2=0U;
si3=l1;
si4=1U;
si3>>=(si4&31);
si4=l9;
si4=i32_load(&i->m0,(U64)si4+48U);
si4=!(si4);
si5=l11;
si6=2U;
si5=si5 < si6;
si4|=si5;
si3&=si4;
l9=si3;
si1=si3?si1:si2;
i32_store(&i->m0,(U64)si0+92U,si1);
si0=l2;
si1=1090040U;
si2=1088744U;
si3=l9;
si1=si3?si1:si2;
i32_store(&i->m0,(U64)si0+88U,si1);
si0=l2;
si1=l2;
si2=88U;
si1+=si2;
i32_store(&i->m0,(U64)si0+68U,si1);
si0=l2;
si1=l2;
si2=76U;
si1+=si2;
i32_store(&i->m0,(U64)si0+60U,si1);
si0=l2;
si1=l2;
si2=60U;
si1+=si2;
i32_store(&i->m0,(U64)si0+44U,si1);
si0=l2;
si1=24U;
si0+=si1;
si1=l2;
si2=36U;
si1+=si2;
f64(i,si0,si1);
si0=l2;
si0=i32_load(&i->m0,(U64)si0+76U);
l9=si0;
si0=!(si0);
if(si0){
goto L15;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0+80U);
si0=!(si0);
if(si0){
goto L15;
}
si0=l9;
f15024(i,si0);
L15:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+24U);
l9=si0;
si0=!(si0);
if(si0){
goto L9;
}
si0=l2;
sj0=i64_load(&i->m0,(U64)si0+28U);
l10=sj0;
si0=l3;
si1=l2;
si1=i32_load(&i->m0,(U64)si1+16U);
si0=si0 != si1;
if(si0){
goto L16;
}
si0=l2;
si1=12U;
si0+=si1;
si1=l3;
si2=1U;
f525(i,si0,si1,si2);
si0=l2;
si0=i32_load(&i->m0,(U64)si0+12U);
l6=si0;
L16:;
si0=l8;
si1=1U;
si0+=si1;
l1=si0;
si0=l6;
si1=l3;
si2=12U;
si1*=si2;
si0+=si1;
l8=si0;
sj1=l10;
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l8;
si1=l9;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=l3;
si2=1U;
si1+=si2;
l3=si1;
i32_store(&i->m0,(U64)si0+20U,si1);
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
sj1=i64_load(&i->m0,(U64)si1+12U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=8U;
si0+=si1;
si1=l2;
si2=12U;
si1+=si2;
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

void f255(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
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
f219(i,si0,si1);
si0=l2;
si0=i32_load(&i->m0,(U64)si0+24U);
l3=si0;
if(si0){
goto L3;
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
goto L4;
}
si0=l1;
si1=20U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L4;
}
si0=l4;
f15024(i,si0);
L4:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+32U);
l4=si0;
si0=!(si0);
if(si0){
goto L2;
}
si0=l1;
si1=36U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L2;
}
si0=l4;
f15024(i,si0);
goto L2;
L3:;
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
si2=i32_load(&i->m0,(U64)si2+32U);
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
si3=i32_load(&i->m0,(U64)si3+16U);
si1=si3?si1:si2;
si0+=si1;
l4=si0;
si1=3U;
si2=l4;
si3=3U;
si2=si2 > si3;
si0=si2?si0:si1;
l4=si0;
si1=268435454U;
si0=si0 > si1;
if(si0){
goto L7;
}
si0=l4;
si1=1U;
si0+=si1;
l5=si0;
si1=3U;
si0<<=(si1&31);
l4=si0;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L7;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0+28U);
l6=si0;
si0=l4;
if(si0){
goto L6;
}
si0=4U;
l7=si0;
goto L5;
L7:;
f53(i);
UNREACHABLE;
L6:;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=l4;
si0=f15022(i,si0);
l7=si0;
si0=!(si0);
if(si0){
goto L1;
}
L5:;
si0=l7;
si1=l6;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l7;
si1=l3;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=1U;
i32_store(&i->m0,(U64)si0+44U,si1);
si0=l2;
si1=l5;
i32_store(&i->m0,(U64)si0+40U,si1);
si0=l2;
si1=l7;
i32_store(&i->m0,(U64)si0+36U,si1);
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
f219(i,si0,si1);
si0=l2;
si0=i32_load(&i->m0,(U64)si0+16U);
l3=si0;
si0=!(si0);
if(si0){
goto L8;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0+20U);
l5=si0;
si0=8U;
l4=si0;
si0=1U;
l1=si0;
L9:;
{
si0=l1;
si1=l2;
si1=i32_load(&i->m0,(U64)si1+40U);
si0=si0 != si1;
if(si0){
goto L10;
}
si0=l2;
si1=36U;
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
f524(i,si0,si1,si2);
si0=l2;
si0=i32_load(&i->m0,(U64)si0+36U);
l7=si0;
L10:;
si0=l7;
si1=l4;
si0+=si1;
l6=si0;
si1=l3;
i32_store(&i->m0,(U64)si0,si1);
si0=l6;
si1=4U;
si0+=si1;
si1=l5;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=l1;
si2=1U;
si1+=si2;
l1=si1;
i32_store(&i->m0,(U64)si0+44U,si1);
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
f219(i,si0,si1);
si0=l2;
si0=i32_load(&i->m0,(U64)si0+12U);
l5=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+8U);
l3=si0;
if(si0){
goto L9;
}
}
L8:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+64U);
l1=si0;
si0=!(si0);
if(si0){
goto L11;
}
si0=l2;
si1=68U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L11;
}
si0=l1;
f15024(i,si0);
L11:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+80U);
l1=si0;
si0=!(si0);
if(si0){
goto L12;
}
si0=l2;
si1=84U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L12;
}
si0=l1;
f15024(i,si0);
L12:;
si0=l0;
si1=l2;
sj1=i64_load(&i->m0,(U64)si1+36U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=8U;
si0+=si1;
si1=l2;
si2=36U;
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
si0=4U;
si1=l4;
f52(i,si0,si1);
UNREACHABLE;
L0:;
}

void f256(rustpythonInstance*i,U32 l0,U32 l1) {
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
si1=i32_load(&i->m0,(U64)si1+4U);
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
si0=f579(i,si0,si1);
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
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
l7=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l8=si0;
si0=32U;
si0=f15022(i,si0);
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
i64_store(&i->m0,(U64)si0+16U,sj1);
si0=l2;
si1=l9;
i32_store(&i->m0,(U64)si0+12U,si1);
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
si0=f15142(i,si0,si1,si2);
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
si0=f15142(i,si0,si1,si2);
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
si0=f15142(i,si0,si1,si2);
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
si1=i32_load(&i->m0,(U64)si1+16U);
si0=si0 != si1;
if(si0){
goto L27;
}
si0=l2;
si1=12U;
si0+=si1;
si1=l11;
si2=1U;
f524(i,si0,si1,si2);
si0=l2;
si0=i32_load(&i->m0,(U64)si0+12U);
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
i32_store(&i->m0,(U64)si0+20U,si1);
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
sj1=i64_load(&i->m0,(U64)si1+12U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=8U;
si0+=si1;
si1=l2;
si2=12U;
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

void f257(rustpythonInstance*i,U32 l0,U32 l1) {
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
f217(i,si0,si1);
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
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=64U;
si0=f15022(i,si0);
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
i64_store(&i->m0,(U64)si0+64U,sj1);
si0=l2;
si1=l5;
i32_store(&i->m0,(U64)si0+60U,si1);
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
f217(i,si0,si1);
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
si1=i32_load(&i->m0,(U64)si1+64U);
si0=si0 != si1;
if(si0){
goto L6;
}
si0=l2;
si1=60U;
si0+=si1;
si1=l1;
si2=1U;
f527(i,si0,si1,si2);
si0=l2;
si0=i32_load(&i->m0,(U64)si0+60U);
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
i32_store(&i->m0,(U64)si0+68U,si1);
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
f217(i,si0,si1);
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
sj1=i64_load(&i->m0,(U64)si1+60U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=8U;
si0+=si1;
si1=l2;
si2=60U;
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

void f258(rustpythonInstance*i,U32 l0,U32 l1) {
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
U32 si0,si1,si2,si3;
si0=0U;
l2=si0;
si0=l1;
si0=i32_load8_u(&i->m0,(U64)si0+37U);
si0=!(si0);
if(si0){
goto L2;
}
goto L1;
L2:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
l3=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+12U);
l4=si0;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+16U);
l5=si1;
si0=si0 > si1;
if(si0){
goto L4;
}
si0=l5;
si1=l1;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
l6=si1;
si0=si0 > si1;
if(si0){
goto L4;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+20U);
l7=si0;
si1=l1;
si2=24U;
si1+=si2;
l8=si1;
si0+=si1;
si1=-1U;
si0+=si1;
l9=si0;
si0=l7;
si1=5U;
si0=si0 < si1;
l10=si0;
L5:;
{
si0=l3;
si1=l4;
si0+=si1;
l11=si0;
si0=l9;
si0=i32_load8_u(&i->m0,(U64)si0);
l12=si0;
si0=l5;
si1=l4;
si0-=si1;
l13=si0;
si1=8U;
si0=si0 < si1;
if(si0){
goto L11;
}
si0=l11;
si1=3U;
si0+=si1;
si1=-4U;
si0&=si1;
l14=si0;
si1=l11;
si0=si0 == si1;
if(si0){
goto L10;
}
si0=l14;
si1=l11;
si0-=si1;
l15=si0;
si0=!(si0);
if(si0){
goto L10;
}
si0=0U;
l14=si0;
L12:;
{
si0=l11;
si1=l14;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=l12;
si0=si0 == si1;
if(si0){
goto L6;
}
si0=l15;
si1=l14;
si2=1U;
si1+=si2;
l14=si1;
si0=si0 != si1;
if(si0){
goto L12;
}
}
si0=l15;
si1=l13;
si2=-8U;
si1+=si2;
l16=si1;
si0=si0 > si1;
if(si0){
goto L8;
}
goto L9;
L11:;
si0=l5;
si1=l4;
si0=si0 == si1;
if(si0){
goto L7;
}
si0=0U;
l14=si0;
L13:;
{
si0=l11;
si1=l14;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=l12;
si0=si0 == si1;
if(si0){
goto L6;
}
si0=l13;
si1=l14;
si2=1U;
si1+=si2;
l14=si1;
si0=si0 != si1;
if(si0){
goto L13;
}
goto L7;
}
L10:;
si0=l13;
si1=-8U;
si0+=si1;
l16=si0;
si0=0U;
l15=si0;
L9:;
si0=l12;
si1=16843009U;
si0*=si1;
l14=si0;
L14:;
{
si0=l11;
si1=l15;
si0+=si1;
l17=si0;
si0=i32_load(&i->m0,(U64)si0);
si1=l14;
si0^=si1;
l18=si0;
si1=-1U;
si0^=si1;
si1=l18;
si2=-16843009U;
si1+=si2;
si0&=si1;
si1=-2139062144U;
si0&=si1;
if(si0){
goto L8;
}
si0=l17;
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=l14;
si0^=si1;
l18=si0;
si1=-1U;
si0^=si1;
si1=l18;
si2=-16843009U;
si1+=si2;
si0&=si1;
si1=-2139062144U;
si0&=si1;
if(si0){
goto L8;
}
si0=l15;
si1=8U;
si0+=si1;
l15=si0;
si1=l16;
si0=si0 <= si1;
if(si0){
goto L14;
}
}
L8:;
si0=l15;
si1=l13;
si0=si0 == si1;
if(si0){
goto L7;
}
L15:;
{
si0=l11;
si1=l15;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=l12;
si0=si0 != si1;
if(si0){
goto L16;
}
si0=l15;
l14=si0;
goto L6;
L16:;
si0=l13;
si1=l15;
si2=1U;
si1+=si2;
l15=si1;
si0=si0 != si1;
if(si0){
goto L15;
}
}
L7:;
si0=l1;
si1=l5;
i32_store(&i->m0,(U64)si0+12U,si1);
goto L4;
L6:;
si0=l1;
si1=l14;
si2=l4;
si1+=si2;
si2=1U;
si1+=si2;
l4=si1;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l4;
si1=l7;
si0=si0 < si1;
if(si0){
goto L17;
}
si0=l4;
si1=l6;
si0=si0 > si1;
if(si0){
goto L17;
}
si0=l10;
si0=!(si0);
if(si0){
goto L18;
}
si0=l3;
si1=l4;
si2=l7;
si1-=si2;
si0+=si1;
si1=l8;
si2=l7;
si0=f15142(i,si0,si1,si2);
if(si0){
goto L17;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+28U);
l15=si0;
si0=l1;
si1=l4;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l4;
si1=l15;
si0-=si1;
l14=si0;
goto L3;
L18:;
si0=l7;
si1=4U;
si2=1085996U;
f597(i,si0,si1,si2);
UNREACHABLE;
L17:;
si0=l4;
si1=l5;
si0=si0 <= si1;
if(si0){
goto L5;
}
}
L4:;
si0=l1;
si1=1U;
i32_store8(&i->m0,(U64)si0+37U,si1);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+28U);
l15=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+32U);
l11=si0;
si0=l1;
si0=i32_load8_u(&i->m0,(U64)si0+36U);
if(si0){
goto L19;
}
si0=l11;
si1=l15;
si0=si0 == si1;
if(si0){
goto L1;
}
L19:;
si0=l11;
si1=l15;
si0-=si1;
l14=si0;
L3:;
si0=l3;
si1=l15;
si0+=si1;
l2=si0;
si0=l14;
if(si0){
goto L20;
}
si0=0U;
l14=si0;
goto L1;
L20:;
si0=l2;
si1=l14;
si2=-1U;
si1+=si2;
l15=si1;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=10U;
si0=si0 != si1;
if(si0){
goto L1;
}
si0=l14;
si1=-2U;
si0+=si1;
l14=si0;
si0=l15;
if(si0){
goto L22;
}
si0=0U;
l11=si0;
goto L21;
L22:;
si0=l2;
si1=0U;
si2=l2;
si3=l14;
si2+=si3;
si2=i32_load8_u(&i->m0,(U64)si2);
si3=13U;
si2=si2 == si3;
si0=si2?si0:si1;
l11=si0;
L21:;
si0=l14;
si1=l15;
si2=l11;
si0=si2?si0:si1;
l14=si0;
si0=l11;
si1=l2;
si2=l11;
si0=si2?si0:si1;
l2=si0;
L1:;
si0=l0;
si1=l14;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l2;
i32_store(&i->m0,(U64)si0,si1);
L0:;
}

U32 f259(rustpythonInstance*i,U32 l0,U32 l1) {
U32 si0,si1,si2;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
si1=l1;
si2=l0;
si2=i32_load(&i->m0,(U64)si2+4U);
si2=i32_load(&i->m0,(U64)si2+12U);
si0=TF(i->t0,si2,U32 (*)(rustpythonInstance*,U32,U32))(i,si0,si1);
L0:;
return si0;
}

void f260(rustpythonInstance*i,U32 l0) {
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
f15024(i,si0);
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
f15024(i,si0);
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
f15024(i,si0);
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
f15024(i,si0);
L4:;
si0=l0;
si1=212U;
si0+=si1;
l1=si0;
f223(i,si0);
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
f15024(i,si0);
L5:;
si0=l0;
si1=224U;
si0+=si1;
l1=si0;
f224(i,si0);
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
f15024(i,si0);
L6:;
si0=l0;
f225(i,si0);
si0=l0;
si0=i32_load(&i->m0,(U64)si0+4U);
si0=!(si0);
if(si0){
goto L7;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
f15024(i,si0);
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
f222(i,si0);
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
f15024(i,si0);
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
f15024(i,si0);
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
f15024(i,si0);
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
f15024(i,si0);
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
f15024(i,si0);
L16:;
si0=l0;
si1=260U;
si0+=si1;
l1=si0;
f226(i,si0);
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
f15024(i,si0);
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
f15024(i,si0);
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
f15024(i,si0);
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
f15024(i,si0);
L20:;
L0:;
}

void f261(rustpythonInstance*i,U32 l0) {
L0:;
}

void f262(rustpythonInstance*i,U32 l0) {
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

void f263(rustpythonInstance*i,U32 l0) {
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
f15024(i,si0);
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
f15024(i,si0);
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
f15024(i,si0);
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
f15024(i,si0);
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
f15024(i,si0);
L5:;
L0:;
}

void f264(rustpythonInstance*i,U32 l0) {
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
f15024(i,si0);
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
f15024(i,si0);
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
f15024(i,si0);
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
f15024(i,si0);
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
f15024(i,si0);
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
f15024(i,si0);
L6:;
L0:;
}

void f265(rustpythonInstance*i,U32 l0) {
U32 l1=0;
U32 si0,si1;
si0=l0;
si1=32U;
si0+=si1;
f263(i,si0);
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
f15024(i,si0);
L1:;
L0:;
}

void f266(rustpythonInstance*i,U32 l0) {
U32 l1=0;
U32 si0,si1;
si0=l0;
si1=184U;
si0+=si1;
f263(i,si0);
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
f15024(i,si0);
L1:;
si0=l0;
f264(i,si0);
L0:;
}

void f267(rustpythonInstance*i,U32 l0) {
U32 si0,si1;
si0=l0;
si1=152U;
si0+=si1;
f263(i,si0);
si0=l0;
f264(i,si0);
L0:;
}

void f268(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4,U32 l5,U32 l6) {
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
si0=l1;
si0=i32_load(&i->m0,(U64)si0+20U);
l7=si0;
si1=l5;
si2=-1U;
si1+=si2;
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
si1=l5;
si0+=si1;
si1=l8;
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
si2=l7;
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
si1=l7;
si2=l5;
si1+=si2;
l7=si1;
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
si1=l7;
si0+=si1;
l7=si0;
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
si1=l7;
si0+=si1;
l19=si0;
si0=l18;
l9=si0;
L15:;
{
si0=l7;
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
si1=l7;
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
si0=l7;
si1=l10;
si0+=si1;
l7=si0;
si0=l13;
l17=si0;
goto L12;
L13:;
si0=l14;
si1=l7;
si0+=si1;
si1=l9;
si0+=si1;
l7=si0;
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
si0=l5;
si1=l12;
si0=si0 > si1;
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
si0=l13;
l19=si0;
si0=l14;
l17=si0;
si0=l7;
l9=si0;
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
l7=si0;
goto L21;
L24:;
si0=l19;
si1=1U;
si0+=si1;
l19=si0;
si0=l9;
si1=1U;
si0+=si1;
l9=si0;
si0=l17;
si1=-1U;
si0+=si1;
l17=si0;
if(si0){
goto L22;
}
}
si0=l2;
si1=l7;
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
si0=l7;
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
si0=l7;
si1=l10;
si0+=si1;
l7=si0;
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
si1=l7;
si2=l5;
si1+=si2;
l7=si1;
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
si1=l7;
si2=l5;
si1+=si2;
l7=si1;
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
si1=l7;
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
si0=l7;
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
si1=l10;
si0+=si1;
l7=si0;
si1=l8;
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
si1=l7;
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
si2=1085932U;
f594(i,si0,si1,si2);
UNREACHABLE;
L3:;
si0=l19;
si1=l3;
si2=1085948U;
f594(i,si0,si1,si2);
UNREACHABLE;
L2:;
si0=l0;
si1=l7;
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
si2=l7;
si1+=si2;
l9=si1;
si2=l3;
si3=l9;
si2=si2 > si3;
si0=si2?si0:si1;
si1=l3;
si2=1085964U;
f594(i,si0,si1,si2);
UNREACHABLE;
L0:;
}

U32 f269(rustpythonInstance*i,U32 l0,U32 l1) {
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
f515(i,si0,si1);
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
f530(i,si0,si1,si2);
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

U32 f270(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
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
f530(i,si0,si1,si2);
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

U32 f271(rustpythonInstance*i,U32 l0,U32 l1) {
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

void f272(rustpythonInstance*i,U32 l0,U32 l1) {
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
goto L6;
}
si0=l1;
si1=14U;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
if(si0){
goto L7;
}
si0=l1;
si1=12U;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
l2=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+48U);
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
goto L12;
}
si0=l4;
si1=l6;
si0=si0 > si1;
if(si0){
goto L14;
}
si0=l4;
si1=l6;
si0=si0 == si1;
if(si0){
goto L13;
}
goto L11;
L14:;
si0=l3;
si1=l6;
si0+=si1;
si0=i32_load8_s(&i->m0,(U64)si0);
si1=-64U;
si0=(U32)((I32)si0<(I32)si1);
if(si0){
goto L11;
}
L13:;
si0=l4;
si1=l6;
si0-=si1;
l5=si0;
L12:;
si0=l5;
si0=!(si0);
if(si0){
goto L10;
}
si0=l3;
si1=l6;
si0+=si1;
l7=si0;
si0=i32_load8_s(&i->m0,(U64)si0);
l5=si0;
si1=-1U;
si0=(U32)((I32)si0>(I32)si1);
if(si0){
goto L16;
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
goto L17;
}
si0=l9;
si1=6U;
si0<<=(si1&31);
si1=l8;
si0|=si1;
l5=si0;
goto L15;
L17:;
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
goto L18;
}
si0=l8;
si1=l9;
si2=12U;
si1<<=(si2&31);
si0|=si1;
l5=si0;
goto L15;
L18:;
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
goto L15;
L16:;
si0=l5;
si1=255U;
si0&=si1;
l5=si0;
L15:;
si0=l2;
si1=255U;
si0&=si1;
if(si0){
goto L3;
}
si0=l5;
si1=1114112U;
si0=si0 == si1;
if(si0){
goto L9;
}
si0=1U;
l2=si0;
si0=l5;
si1=128U;
si0=si0 < si1;
if(si0){
goto L19;
}
si0=2U;
l2=si0;
si0=l5;
si1=2048U;
si0=si0 < si1;
if(si0){
goto L19;
}
si0=3U;
si1=4U;
si2=l5;
si3=65536U;
si2=si2 < si3;
si0=si2?si0:si1;
l2=si0;
L19:;
si0=l1;
si1=l2;
si2=l6;
si1+=si2;
l6=si1;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l6;
si0=!(si0);
if(si0){
goto L4;
}
si0=l4;
si1=l6;
si0=si0 > si1;
if(si0){
goto L21;
}
si0=l4;
si1=l6;
si0=si0 != si1;
if(si0){
goto L20;
}
goto L5;
L21:;
si0=l3;
si1=l6;
si0+=si1;
si0=i32_load8_s(&i->m0,(U64)si0);
si1=-65U;
si0=(U32)((I32)si0>(I32)si1);
if(si0){
goto L5;
}
L20:;
si0=1U;
l2=si0;
L11:;
si0=l1;
si1=l2;
si2=1U;
si1^=si2;
i32_store8(&i->m0,(U64)si0+12U,si1);
si0=l3;
si1=l4;
si2=l6;
si3=l4;
si4=1085980U;
f678(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L10:;
si0=l1;
si1=l2;
si2=1U;
si1^=si2;
i32_store8(&i->m0,(U64)si0+12U,si1);
si0=l2;
si1=255U;
si0&=si1;
if(si0){
goto L1;
}
goto L8;
L9:;
si0=l1;
si1=1U;
i32_store8(&i->m0,(U64)si0+12U,si1);
L8:;
si0=l1;
si1=1U;
i32_store8(&i->m0,(U64)si0+14U,si1);
L7:;
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
goto L0;
L6:;
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
l2=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+56U);
l5=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+48U);
l3=si0;
si0=l1;
si1=36U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=-1U;
si0=si0 == si1;
if(si0){
goto L22;
}
si0=l0;
si1=l6;
si2=l3;
si3=l2;
si4=l5;
si5=l4;
si6=0U;
f268(i,si0,si1,si2,si3,si4,si5,si6);
goto L0;
L22:;
si0=l0;
si1=l6;
si2=l3;
si3=l2;
si4=l5;
si5=l4;
si6=1U;
f268(i,si0,si1,si2,si3,si4,si5,si6);
goto L0;
L5:;
si0=l4;
si1=l6;
si0-=si1;
l4=si0;
L4:;
si0=l4;
if(si0){
goto L23;
}
si0=0U;
l4=si0;
goto L2;
L23:;
si0=1U;
l2=si0;
si0=l3;
si1=l6;
si0+=si1;
si0=i32_load8_s(&i->m0,(U64)si0);
l4=si0;
si1=-1U;
si0=(U32)((I32)si0>(I32)si1);
if(si0){
goto L3;
}
si0=l4;
si1=-32U;
si0=si0 < si1;
L3:;
si0=l2;
si1=1U;
si0^=si1;
l4=si0;
L2:;
si0=l1;
si1=l4;
i32_store8(&i->m0,(U64)si0+12U,si1);
L1:;
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
L0:;
}

U32 f273(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 si0,si1,si2,si3;
si0=l1;
if(si0){
goto L1;
}
si0=0U;
goto L0;
L1:;
si0=l0;
si1=l1;
si0+=si1;
l2=si0;
si0=0U;
l3=si0;
L3:;
{
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
l4=si0;
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
si1=l4;
si0|=si1;
l1=si0;
si0=l0;
si1=2U;
si0+=si1;
l0=si0;
goto L4;
L6:;
si0=l4;
si1=6U;
si0<<=(si1&31);
si1=l0;
si1=i32_load8_u(&i->m0,(U64)si1+2U);
si2=63U;
si1&=si2;
si0|=si1;
l4=si0;
si0=l1;
si1=-16U;
si0=si0 >= si1;
if(si0){
goto L7;
}
si0=l4;
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
si0=l4;
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
si0=si0 == si1;
if(si0){
goto L2;
}
si0=l0;
si1=4U;
si0+=si1;
l0=si0;
L4:;
si0=l1;
si1=127U;
si0=si0 < si1;
if(si0){
goto L11;
}
si0=0U;
l4=si0;
si0=l1;
si1=159U;
si0=si0 <= si1;
if(si0){
goto L8;
}
si0=l1;
si1=13U;
si0>>=(si1&31);
si1=18615312U;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=7U;
si0<<=(si1&31);
si1=l1;
si2=6U;
si1>>=(si2&31);
si2=127U;
si1&=si2;
si0|=si1;
l4=si0;
si1=2431U;
si0=si0 > si1;
if(si0){
goto L10;
}
si0=l4;
si1=18615568U;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=4U;
si0<<=(si1&31);
si1=l1;
si2=2U;
si1>>=(si2&31);
si2=15U;
si1&=si2;
si0|=si1;
l4=si0;
si1=3888U;
si0=si0 >= si1;
if(si0){
goto L9;
}
si0=1U;
si1=l4;
si2=18618000U;
si1+=si2;
si1=i32_load8_u(&i->m0,(U64)si1);
si2=l1;
si3=1U;
si2<<=(si3&31);
si3=6U;
si2&=si3;
si1>>=(si2&31);
si2=3U;
si1&=si2;
l1=si1;
si2=l1;
si3=3U;
si2=si2 == si3;
si0=si2?si0:si1;
l4=si0;
goto L8;
L11:;
si0=l1;
si1=31U;
si0=si0 > si1;
l4=si0;
goto L8;
L10:;
si0=l4;
si1=2432U;
si2=1085632U;
f594(i,si0,si1,si2);
UNREACHABLE;
L9:;
si0=l4;
si1=3888U;
si2=1085648U;
f594(i,si0,si1,si2);
UNREACHABLE;
L8:;
si0=l4;
si1=l3;
si0+=si1;
l3=si0;
si0=l0;
si1=l2;
si0=si0 != si1;
if(si0){
goto L3;
}
}
L2:;
si0=l3;
L0:;
return si0;
}

void f274(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4,U32 l5) {
U32 l6=0;
U64 l7=0;
U32 l8=0;
U32 l9=0;
U32 l10=0;
U64 l11=0;
U64 l12=0;
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
U32 si0,si1,si2,si3,si4,si5;
U64 sj0,sj1,sj2,sj3,sj4;
si0=i->g0;
si1=336U;
si0-=si1;
l6=si0;
i->g0=si0;
si0=l3;
sj0=i64_load(&i->m0,(U64)si0+16U);
l7=sj0;
si0=l6;
si1=200U;
si0+=si1;
si1=1091888U;
si2=4U;
f14731(i,si0,si1,si2);
sj0=l7;
si0=(U32)(sj0);
l8=si0;
si1=23U;
si0>>=(si1&31);
si1=1U;
si0&=si1;
si1=2U;
sj2=l7;
sj3=33554432ULL;
sj2&=sj3;
si2=!(sj2);
si0=si2?si0:si1;
l9=si0;
si0=l6;
si0=i32_load(&i->m0,(U64)si0+200U);
if(si0){
goto L2;
}
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=l6;
si0=i32_load(&i->m0,(U64)si0+204U);
l10=si0;
si0=!(si0);
if(si0){
goto L1;
}
si0=l6;
si1=208U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L1;
}
si0=l10;
f15024(i,si0);
goto L1;
L2:;
si0=l6;
si0=i32_load(&i->m0,(U64)si0+204U);
l10=si0;
si0=!(si0);
if(si0){
goto L3;
}
si0=l6;
si1=208U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L3;
}
si0=l10;
f15024(i,si0);
L3:;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
L1:;
si0=l9;
si1=2U;
si2=l9;
si0=si2?si0:si1;
l9=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+56U);
if(si0){
goto L5;
}
si0=l3;
si1=68U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l10=si0;
si1=120U;
si2=l10;
si3=120U;
si2=si2 < si3;
si0=si2?si0:si1;
si1=120U;
si2=l10;
si0=si2?si0:si1;
si1=120U;
si2=l3;
si3=64U;
si2+=si3;
si2=i32_load(&i->m0,(U64)si2);
si0=si2?si0:si1;
l10=si0;
goto L4;
L5:;
si0=l3;
si1=60U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l10=si0;
si1=-1U;
si2=l10;
si0=si2?si0:si1;
l10=si0;
L4:;
si0=l6;
si1=l2;
i32_store(&i->m0,(U64)si0+76U,si1);
si0=l6;
si1=l1;
i32_store(&i->m0,(U64)si0+72U,si1);
si0=l6;
si1=l10;
i32_store(&i->m0,(U64)si0+80U,si1);
si0=l6;
si1=l9;
i32_store8(&i->m0,(U64)si0+88U,si1);
si0=l6;
si1=l5;
i32_store8(&i->m0,(U64)si0+93U,si1);
si0=l6;
si1=0U;
i32_store8(&i->m0,(U64)si0+92U,si1);
si0=l6;
si1=0U;
i32_store(&i->m0,(U64)si0+84U,si1);
si0=l6;
si1=l8;
si2=19U;
si1>>=(si2&31);
si2=1U;
si1&=si2;
i32_store8(&i->m0,(U64)si0+90U,si1);
si0=l6;
si1=l8;
si2=20U;
si1>>=(si2&31);
si2=1U;
si1&=si2;
i32_store8(&i->m0,(U64)si0+89U,si1);
si0=l6;
si1=l8;
si2=22U;
si1>>=(si2&31);
si2=1U;
si1&=si2;
i32_store8(&i->m0,(U64)si0+91U,si1);
si0=l3;
si1=184U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l8=si0;
si0=!(si0);
if(si0){
goto L10;
}
si0=l6;
si1=l8;
i32_store(&i->m0,(U64)si0+264U,si1);
si0=l6;
si1=l3;
si2=188U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0+268U,si1);
si0=l6;
si1=300U;
si0+=si1;
sj1=1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l6;
si1=1U;
i32_store(&i->m0,(U64)si0+292U,si1);
si0=l6;
si1=1086468U;
i32_store(&i->m0,(U64)si0+288U,si1);
si0=l6;
si1=50U;
i32_store(&i->m0,(U64)si0+100U,si1);
si0=l6;
si1=l6;
si2=96U;
si1+=si2;
i32_store(&i->m0,(U64)si0+296U,si1);
si0=l6;
si1=l6;
si2=264U;
si1+=si2;
i32_store(&i->m0,(U64)si0+96U,si1);
si0=l6;
si1=152U;
si0+=si1;
si1=l1;
si2=l6;
si3=288U;
si2+=si3;
si3=l2;
si3=i32_load(&i->m0,(U64)si3+36U);
TF(i->t0,si3,void (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
si0=l6;
si0=i32_load8_u(&i->m0,(U64)si0+152U);
si1=4U;
si0=si0 == si1;
if(si0){
goto L9;
}
si0=l6;
si1=l6;
sj1=i64_load(&i->m0,(U64)si1+152U);
i64_store(&i->m0,(U64)si0+288U,sj1);
si0=l6;
si1=200U;
si0+=si1;
si1=l6;
si2=288U;
si1+=si2;
f578(i,si0,si1);
si0=l6;
si0=i32_load8_u(&i->m0,(U64)si0+224U);
l8=si0;
si1=20U;
si0=si0 == si1;
if(si0){
goto L9;
}
si0=l0;
si1=l6;
si1=i32_load16_u(&i->m0,(U64)si1+225U);
i32_store16(&i->m0,(U64)si0+25U,si1);
si0=l6;
si1=288U;
si0+=si1;
si1=16U;
si0+=si1;
si1=l6;
si2=200U;
si1+=si2;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
l7=sj1;
i64_store(&i->m0,(U64)si0,sj1);
si0=l6;
si1=288U;
si0+=si1;
si1=8U;
si0+=si1;
si1=l6;
si2=200U;
si1+=si2;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
l11=sj1;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=27U;
si0+=si1;
si1=l6;
si2=200U;
si1+=si2;
si2=27U;
si1+=si2;
si1=i32_load8_u(&i->m0,(U64)si1);
i32_store8(&i->m0,(U64)si0,si1);
si0=l6;
si1=l6;
sj1=i64_load(&i->m0,(U64)si1+200U);
l12=sj1;
i64_store(&i->m0,(U64)si0+288U,sj1);
si0=l0;
si1=16U;
si0+=si1;
sj1=l7;
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
si1=l8;
i32_store8(&i->m0,(U64)si0+24U,si1);
goto L7;
L10:;
si0=l3;
si1=196U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l8=si0;
si0=!(si0);
if(si0){
goto L11;
}
si0=l6;
si1=l3;
si2=200U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
l9=si1;
i32_store(&i->m0,(U64)si0+132U,si1);
si0=l6;
si1=l8;
i32_store(&i->m0,(U64)si0+128U,si1);
si0=l6;
sj1=0ULL;
i64_store(&i->m0,(U64)si0+136U,sj1);
si0=l6;
si1=l6;
si2=128U;
si1+=si2;
i32_store(&i->m0,(U64)si0+144U,si1);
si0=15U;
si1=1U;
si0=f15026(i,si0,si1);
l8=si0;
si0=!(si0);
if(si0){
goto L12;
}
si0=l6;
si1=152U;
si0+=si1;
si1=12U;
si0+=si1;
sj1=64424509455ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l6;
si1=l8;
i32_store(&i->m0,(U64)si0+160U,si1);
si0=l6;
sj1=0ULL;
i64_store(&i->m0,(U64)si0+152U,sj1);
si0=l6;
si1=312U;
si0+=si1;
l13=si0;
si0=l6;
si1=200U;
si0+=si1;
si1=25U;
si0+=si1;
l14=si0;
si0=l6;
si1=128U;
si0+=si1;
l5=si0;
si0=l6;
si1=152U;
si0+=si1;
si1=8U;
si0+=si1;
l15=si0;
si0=l6;
si1=294U;
si0+=si1;
l16=si0;
si0=l3;
si1=244U;
si0+=si1;
l17=si0;
si0=l3;
si1=236U;
si0+=si1;
l18=si0;
si0=0U;
l8=si0;
sj0=0ULL;
l7=sj0;
L16:;
{
si0=l9;
si1=l8;
si0=si0 == si1;
if(si0){
goto L24;
}
si0=l6;
sj1=l7;
sj2=1ULL;
sj1+=sj2;
i64_store(&i->m0,(U64)si0+136U,sj1);
si0=l5;
si0=i32_load(&i->m0,(U64)si0);
si1=l8;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
l8=si0;
si1=123U;
si0=si0 == si1;
if(si0){
goto L28;
}
si0=l6;
si1=l8;
i32_store8(&i->m0,(U64)si0+288U,si1);
si0=l6;
si1=200U;
si0+=si1;
si1=l1;
si2=l6;
si3=288U;
si2+=si3;
si3=1U;
si4=l2;
si4=i32_load(&i->m0,(U64)si4+12U);
TF(i->t0,si4,void (*)(rustpythonInstance*,U32,U32,U32,U32))(i,si0,si1,si2,si3);
si0=l6;
si0=i32_load8_u(&i->m0,(U64)si0+200U);
si1=4U;
si0=si0 != si1;
if(si0){
goto L27;
}
si0=l6;
si0=i32_load(&i->m0,(U64)si0+144U);
l5=si0;
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l9=si0;
si1=l6;
sj1=i64_load(&i->m0,(U64)si1+136U);
l7=sj1;
si2=l9;
sj2=(U64)(si2);
l11=sj2;
sj3=l7;
sj4=l11;
si3=sj3 < sj4;
sj1=si3?sj1:sj2;
si1=(U32)(sj1);
l8=si1;
si0=si0 >= si1;
if(si0){
goto L16;
}
goto L6;
L28:;
si0=l6;
sj1=0ULL;
i64_store(&i->m0,(U64)si0+152U,sj1);
si0=l6;
si1=l6;
si1=i32_load(&i->m0,(U64)si1+168U);
l9=si1;
sj1=(U64)(si1);
i64_store(&i->m0,(U64)si0+200U,sj1);
si0=l6;
si1=l6;
si2=136U;
si1+=si2;
i32_store(&i->m0,(U64)si0+208U,si1);
si0=l6;
si1=l6;
si2=200U;
si1+=si2;
i32_store(&i->m0,(U64)si0+264U,si1);
si0=l6;
si1=288U;
si0+=si1;
si1=l6;
si2=264U;
si1+=si2;
f356(i,si0,si1);
si0=l6;
si0=i32_load8_u(&i->m0,(U64)si0+288U);
l19=si0;
si1=5U;
si0=si0 == si1;
if(si0){
goto L26;
}
sj0=0ULL;
l7=sj0;
si0=0U;
l8=si0;
L29:;
{
si0=l6;
si0=i32_load8_u(&i->m0,(U64)si0+289U);
l10=si0;
si0=l19;
si1=255U;
si0&=si1;
si1=4U;
si0=si0 != si1;
if(si0){
goto L32;
}
si0=l10;
si1=255U;
si0&=si1;
si1=125U;
si0=si0 == si1;
if(si0){
goto L34;
}
sj0=l7;
sj1=4294967296ULL;
si0=sj0 == sj1;
if(si0){
goto L33;
}
si0=l8;
si1=1U;
si0+=si1;
l5=si0;
si1=-1U;
si2=l5;
si0=si2?si0:si1;
l19=si0;
si1=l6;
si1=i32_load(&i->m0,(U64)si1+164U);
l20=si1;
si0=si0 <= si1;
if(si0){
goto L30;
}
si0=l20;
si1=l9;
si0-=si1;
si1=l19;
si2=l9;
si1-=si2;
l19=si1;
si0=si0 >= si1;
if(si0){
goto L30;
}
si0=l15;
si1=l9;
si2=l19;
f530(i,si0,si1,si2);
si0=l6;
si0=i32_load(&i->m0,(U64)si0+168U);
l9=si0;
goto L30;
L34:;
si0=l6;
sj1=l7;
i64_store(&i->m0,(U64)si0+152U,sj1);
si0=4U;
l9=si0;
si0=l8;
l21=si0;
goto L25;
L33:;
si0=l6;
sj1=4294967296ULL;
i64_store(&i->m0,(U64)si0+152U,sj1);
si0=1093724U;
sj0=(U64)(si0);
sj1=32ULL;
sj0<<=(sj1&63);
sj1=2ULL;
sj0|=sj1;
l7=sj0;
goto L31;
L32:;
si0=l6;
sj1=l7;
i64_store(&i->m0,(U64)si0+152U,sj1);
si0=l10;
sj0=(U64)(si0);
sj1=255ULL;
sj0&=sj1;
sj1=8ULL;
sj0<<=(sj1&63);
si1=l19;
sj1=(U64)(si1);
sj2=255ULL;
sj1&=sj2;
sj0|=sj1;
si1=l16;
sj1=i64_load16_u(&i->m0,(U64)si1);
sj2=48ULL;
sj1<<=(sj2&63);
si2=l6;
sj2=i64_load32_u(&i->m0,(U64)si2+290U);
sj3=16ULL;
sj2<<=(sj3&63);
sj1|=sj2;
sj0|=sj1;
l7=sj0;
L31:;
sj0=l7;
sj1=32ULL;
sj0>>=(sj1&63);
si0=(U32)(sj0);
l21=si0;
sj0=l7;
sj1=8ULL;
sj0>>=(sj1&63);
si0=(U32)(sj0);
l22=si0;
sj0=l7;
si0=(U32)(sj0);
l9=si0;
goto L25;
L30:;
si0=l6;
si0=i32_load(&i->m0,(U64)si0+160U);
l19=si0;
si0=l9;
si1=l8;
si0=si0 >= si1;
if(si0){
goto L35;
}
si0=l19;
si1=l9;
si0+=si1;
si1=0U;
si2=l8;
si3=l9;
si2-=si3;
si0=f15145(i,si0,si1,si2);
si0=l6;
si1=l8;
i32_store(&i->m0,(U64)si0+168U,si1);
si0=l8;
l9=si0;
L35:;
si0=l19;
si1=l8;
si0+=si1;
si1=l10;
i32_store8(&i->m0,(U64)si0,si1);
si0=l5;
si1=l9;
si0=si0 <= si1;
if(si0){
goto L36;
}
si0=l6;
si1=l5;
i32_store(&i->m0,(U64)si0+168U,si1);
si0=l5;
l9=si0;
L36:;
sj0=l7;
sj1=1ULL;
sj0+=sj1;
l7=sj0;
si0=l6;
si1=288U;
si0+=si1;
si1=l6;
si2=264U;
si1+=si2;
f356(i,si0,si1);
si0=l5;
l8=si0;
si0=l6;
si0=i32_load8_u(&i->m0,(U64)si0+288U);
l19=si0;
si1=5U;
si0=si0 != si1;
if(si0){
goto L29;
}
}
si0=l6;
sj1=l7;
i64_store(&i->m0,(U64)si0+152U,sj1);
si0=l5;
if(si0){
goto L37;
}
si0=5U;
l9=si0;
goto L25;
L37:;
si0=l6;
si1=264U;
si0+=si1;
si1=l1;
si2=1087228U;
si3=1U;
si4=l2;
si4=i32_load(&i->m0,(U64)si4+12U);
l8=si4;
TF(i->t0,si4,void (*)(rustpythonInstance*,U32,U32,U32,U32))(i,si0,si1,si2,si3);
si0=l6;
si0=i32_load8_u(&i->m0,(U64)si0+264U);
si1=4U;
si0=si0 == si1;
if(si0){
goto L38;
}
si0=l6;
sj0=i64_load(&i->m0,(U64)si0+264U);
l7=sj0;
sj1=32ULL;
sj0>>=(sj1&63);
si0=(U32)(sj0);
l21=si0;
sj0=l7;
sj1=8ULL;
sj0>>=(sj1&63);
si0=(U32)(sj0);
l22=si0;
sj0=l7;
si0=(U32)(sj0);
l9=si0;
goto L25;
L38:;
si0=l5;
si1=l9;
si0=si0 > si1;
if(si0){
goto L39;
}
si0=l6;
si1=288U;
si0+=si1;
si1=l1;
si2=l6;
si2=i32_load(&i->m0,(U64)si2+160U);
si3=l5;
si4=l8;
TF(i->t0,si4,void (*)(rustpythonInstance*,U32,U32,U32,U32))(i,si0,si1,si2,si3);
si0=4U;
l9=si0;
si0=0U;
l21=si0;
si0=l6;
si0=i32_load8_u(&i->m0,(U64)si0+288U);
si1=4U;
si0=si0 == si1;
if(si0){
goto L25;
}
si0=l6;
sj0=i64_load(&i->m0,(U64)si0+288U);
l7=sj0;
sj1=32ULL;
sj0>>=(sj1&63);
si0=(U32)(sj0);
l21=si0;
sj0=l7;
sj1=8ULL;
sj0>>=(sj1&63);
si0=(U32)(sj0);
l22=si0;
sj0=l7;
si0=(U32)(sj0);
l9=si0;
goto L25;
L39:;
si0=l5;
si1=l9;
si2=1087232U;
f597(i,si0,si1,si2);
UNREACHABLE;
L27:;
si0=l6;
sj0=i64_load(&i->m0,(U64)si0+200U);
l7=sj0;
sj1=32ULL;
sj0>>=(sj1&63);
si0=(U32)(sj0);
l21=si0;
sj0=l7;
sj1=8ULL;
sj0>>=(sj1&63);
si0=(U32)(sj0);
l22=si0;
sj0=l7;
si0=(U32)(sj0);
l9=si0;
goto L25;
L26:;
si0=l6;
sj1=0ULL;
i64_store(&i->m0,(U64)si0+152U,sj1);
si0=5U;
l9=si0;
L25:;
si0=l9;
si1=255U;
si0&=si1;
l8=si0;
si1=4U;
si0=si0 == si1;
if(si0){
goto L23;
}
si0=l8;
si1=5U;
si0=si0 != si1;
if(si0){
goto L22;
}
L24:;
si0=l6;
si1=20U;
i32_store8(&i->m0,(U64)si0+120U,si1);
goto L13;
L23:;
si0=l21;
si0=!(si0);
if(si0){
goto L17;
}
si0=l21;
si1=l6;
si1=i32_load(&i->m0,(U64)si1+168U);
l8=si1;
si0=si0 > si1;
if(si0){
goto L40;
}
si0=l6;
si0=i32_load(&i->m0,(U64)si0+160U);
l8=si0;
si0=l21;
si1=-1U;
si0+=si1;
switch(si0){
case 0:
goto L48;
case 1:
goto L18;
case 2:
goto L47;
case 3:
goto L18;
case 4:
goto L44;
case 5:
goto L45;
case 6:
goto L46;
case 7:
goto L42;
case 8:
goto L18;
case 9:
goto L43;
case 10:
goto L41;
default:
goto L18;
}
L48:;
si0=l8;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=63U;
si0=si0 != si1;
if(si0){
goto L18;
}
si0=l6;
si1=288U;
si0+=si1;
si1=l6;
si1=i32_load(&i->m0,(U64)si1+72U);
si2=1087264U;
si3=25U;
si4=l6;
si4=i32_load(&i->m0,(U64)si4+76U);
si4=i32_load(&i->m0,(U64)si4+28U);
TF(i->t0,si4,void (*)(rustpythonInstance*,U32,U32,U32,U32))(i,si0,si1,si2,si3);
si0=l6;
si0=i32_load8_u(&i->m0,(U64)si0+288U);
l8=si0;
si1=4U;
si0=si0 == si1;
if(si0){
goto L17;
}
si0=l6;
si1=200U;
si0+=si1;
si1=4U;
si0+=si1;
si1=l6;
si2=288U;
si1+=si2;
si2=4U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l6;
si1=l6;
si1=i32_load(&i->m0,(U64)si1+289U);
i32_store(&i->m0,(U64)si0+201U,si1);
si0=l6;
si1=l8;
i32_store8(&i->m0,(U64)si0+200U,si1);
si0=l6;
si1=96U;
si0+=si1;
si1=l6;
si2=200U;
si1+=si2;
f578(i,si0,si1);
goto L13;
L47:;
si0=l8;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=98U;
si0=si0 != si1;
if(si0){
goto L18;
}
si0=l8;
si0=i32_load8_u(&i->m0,(U64)si0+1U);
si1=105U;
si0=si0 != si1;
if(si0){
goto L18;
}
si0=l8;
si0=i32_load8_u(&i->m0,(U64)si0+2U);
si1=110U;
si0=si0 != si1;
if(si0){
goto L18;
}
si0=l6;
si1=288U;
si0+=si1;
si1=l6;
si2=72U;
si1+=si2;
si2=l3;
f275(i,si0,si1,si2);
si0=l6;
si0=i32_load8_u(&i->m0,(U64)si0+288U);
l8=si0;
si1=4U;
si0=si0 == si1;
if(si0){
goto L17;
}
si0=l6;
si1=200U;
si0+=si1;
si1=4U;
si0+=si1;
si1=l6;
si2=288U;
si1+=si2;
si2=4U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l6;
si1=l6;
si1=i32_load(&i->m0,(U64)si1+289U);
i32_store(&i->m0,(U64)si0+201U,si1);
si0=l6;
si1=l8;
i32_store8(&i->m0,(U64)si0+200U,si1);
si0=l6;
si1=96U;
si0+=si1;
si1=l6;
si2=200U;
si1+=si2;
f578(i,si0,si1);
goto L13;
L46:;
si0=l8;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=-111U;
si0+=si1;
switch(si0){
case 0:
goto L49;
case 1:
goto L18;
case 2:
goto L18;
case 3:
goto L18;
case 4:
goto L18;
case 5:
goto L18;
case 6:
goto L50;
case 7:
goto L19;
default:
goto L18;
}
L50:;
si0=l8;
si0=i32_load8_u(&i->m0,(U64)si0+1U);
si1=110U;
si0=si0 != si1;
if(si0){
goto L18;
}
si0=l8;
si0=i32_load8_u(&i->m0,(U64)si0+2U);
si1=105U;
si0=si0 != si1;
if(si0){
goto L18;
}
si0=l8;
si0=i32_load8_u(&i->m0,(U64)si0+3U);
si1=102U;
si0=si0 != si1;
if(si0){
goto L18;
}
si0=l8;
si0=i32_load8_u(&i->m0,(U64)si0+4U);
si1=105U;
si0=si0 != si1;
if(si0){
goto L18;
}
si0=l8;
si0=i32_load8_u(&i->m0,(U64)si0+5U);
si1=101U;
si0=si0 != si1;
if(si0){
goto L18;
}
si0=l8;
si0=i32_load8_u(&i->m0,(U64)si0+6U);
si1=100U;
si0=si0 != si1;
if(si0){
goto L18;
}
si0=l6;
si1=l3;
si1=i32_load(&i->m0,(U64)si1+224U);
l8=si1;
i32_store(&i->m0,(U64)si0+184U,si1);
si0=l6;
si1=l3;
si1=i32_load(&i->m0,(U64)si1+212U);
l9=si1;
i32_store(&i->m0,(U64)si0+176U,si1);
si0=l6;
si1=l8;
si2=l3;
si2=i32_load(&i->m0,(U64)si2+232U);
si3=272U;
si2*=si3;
si1+=si2;
i32_store(&i->m0,(U64)si0+188U,si1);
si0=l6;
si1=l9;
si2=l3;
si2=i32_load(&i->m0,(U64)si2+220U);
si3=120U;
si2*=si3;
si1+=si2;
i32_store(&i->m0,(U64)si0+180U,si1);
si0=l6;
si1=288U;
si0+=si1;
si1=l6;
si2=72U;
si1+=si2;
si2=l6;
si3=176U;
si2+=si3;
f276(i,si0,si1,si2);
si0=l6;
si0=i32_load8_u(&i->m0,(U64)si0+288U);
l8=si0;
si1=4U;
si0=si0 == si1;
if(si0){
goto L17;
}
si0=l6;
si1=200U;
si0+=si1;
si1=4U;
si0+=si1;
si1=l6;
si2=288U;
si1+=si2;
si2=4U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l6;
si1=l6;
si1=i32_load(&i->m0,(U64)si1+289U);
i32_store(&i->m0,(U64)si0+201U,si1);
si0=l6;
si1=l8;
i32_store8(&i->m0,(U64)si0+200U,si1);
si0=l6;
si1=96U;
si0+=si1;
si1=l6;
si2=200U;
si1+=si2;
f578(i,si0,si1);
goto L13;
L49:;
si0=l8;
si0=i32_load8_u(&i->m0,(U64)si0+1U);
si1=112U;
si0=si0 != si1;
if(si0){
goto L18;
}
si0=l8;
si0=i32_load8_u(&i->m0,(U64)si0+2U);
si1=116U;
si0=si0 != si1;
if(si0){
goto L18;
}
si0=l8;
si0=i32_load8_u(&i->m0,(U64)si0+3U);
si1=105U;
si0=si0 != si1;
if(si0){
goto L18;
}
si0=l8;
si0=i32_load8_u(&i->m0,(U64)si0+4U);
si1=111U;
si0=si0 != si1;
if(si0){
goto L18;
}
si0=l8;
si0=i32_load8_u(&i->m0,(U64)si0+5U);
si1=110U;
si0=si0 != si1;
if(si0){
goto L18;
}
si0=l8;
si0=i32_load8_u(&i->m0,(U64)si0+6U);
si1=115U;
si0=si0 != si1;
if(si0){
goto L18;
}
si0=l6;
si1=288U;
si0+=si1;
si1=l6;
si2=72U;
si1+=si2;
si2=l3;
si2=i32_load(&i->m0,(U64)si2+224U);
l8=si2;
si3=l8;
si4=l3;
si4=i32_load(&i->m0,(U64)si4+232U);
si5=272U;
si4*=si5;
si3+=si4;
f277(i,si0,si1,si2,si3);
si0=l6;
si0=i32_load8_u(&i->m0,(U64)si0+288U);
l8=si0;
si1=4U;
si0=si0 == si1;
if(si0){
goto L17;
}
si0=l6;
si1=200U;
si0+=si1;
si1=4U;
si0+=si1;
si1=l6;
si2=288U;
si1+=si2;
si2=4U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l6;
si1=l6;
si1=i32_load(&i->m0,(U64)si1+289U);
i32_store(&i->m0,(U64)si0+201U,si1);
si0=l6;
si1=l8;
i32_store8(&i->m0,(U64)si0+200U,si1);
si0=l6;
si1=96U;
si0+=si1;
si1=l6;
si2=200U;
si1+=si2;
f578(i,si0,si1);
goto L13;
L45:;
si0=l8;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=97U;
si0=si0 != si1;
if(si0){
goto L18;
}
si0=l8;
si0=i32_load8_u(&i->m0,(U64)si0+1U);
si1=117U;
si0=si0 != si1;
if(si0){
goto L18;
}
si0=l8;
si0=i32_load8_u(&i->m0,(U64)si0+2U);
si1=116U;
si0=si0 != si1;
if(si0){
goto L18;
}
si0=l8;
si0=i32_load8_u(&i->m0,(U64)si0+3U);
si1=104U;
si0=si0 != si1;
if(si0){
goto L18;
}
si0=l8;
si0=i32_load8_u(&i->m0,(U64)si0+4U);
si1=111U;
si0=si0 != si1;
if(si0){
goto L18;
}
si0=l8;
si0=i32_load8_u(&i->m0,(U64)si0+5U);
si1=114U;
si0=si0 != si1;
if(si0){
goto L18;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0+96U);
l8=si0;
if(si0){
goto L52;
}
si0=14U;
l9=si0;
si0=1087304U;
l8=si0;
goto L51;
L52:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+100U);
l9=si0;
L51:;
si0=l6;
si0=i32_load(&i->m0,(U64)si0+72U);
l5=si0;
si0=l6;
si0=i32_load(&i->m0,(U64)si0+76U);
l1=si0;
si0=l6;
si1=l9;
i32_store(&i->m0,(U64)si0+292U,si1);
si0=l6;
si1=l8;
i32_store(&i->m0,(U64)si0+288U,si1);
si0=l6;
si1=50U;
i32_store(&i->m0,(U64)si0+268U,si1);
si0=l6;
si1=1U;
i32_store(&i->m0,(U64)si0+204U,si1);
si0=l6;
si1=1086468U;
i32_store(&i->m0,(U64)si0+200U,si1);
si0=l6;
sj1=1ULL;
i64_store(&i->m0,(U64)si0+212U,sj1);
si0=l6;
si1=l6;
si2=288U;
si1+=si2;
i32_store(&i->m0,(U64)si0+264U,si1);
si0=l6;
si1=l6;
si2=264U;
si1+=si2;
i32_store(&i->m0,(U64)si0+208U,si1);
si0=l6;
si1=320U;
si0+=si1;
si1=l5;
si2=l6;
si3=200U;
si2+=si3;
si3=l1;
si3=i32_load(&i->m0,(U64)si3+36U);
TF(i->t0,si3,void (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
si0=l6;
si0=i32_load8_u(&i->m0,(U64)si0+320U);
l8=si0;
si1=4U;
si0=si0 == si1;
if(si0){
goto L17;
}
si0=l6;
si1=200U;
si0+=si1;
si1=4U;
si0+=si1;
si1=l6;
si2=320U;
si1+=si2;
si2=4U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l6;
si1=l6;
si1=i32_load(&i->m0,(U64)si1+321U);
i32_store(&i->m0,(U64)si0+201U,si1);
si0=l6;
si1=l8;
i32_store8(&i->m0,(U64)si0+200U,si1);
si0=l6;
si1=96U;
si0+=si1;
si1=l6;
si2=200U;
si1+=si2;
f578(i,si0,si1);
goto L13;
L44:;
si0=l8;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=-97U;
si0+=si1;
switch(si0){
case 0:
goto L55;
case 1:
goto L18;
case 2:
goto L18;
case 3:
goto L18;
case 4:
goto L18;
case 5:
goto L53;
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
goto L54;
default:
goto L18;
}
L55:;
si0=l8;
si0=i32_load8_u(&i->m0,(U64)si0+1U);
si1=98U;
si0=si0 != si1;
if(si0){
goto L18;
}
si0=l8;
si0=i32_load8_u(&i->m0,(U64)si0+2U);
si1=111U;
si0=si0 != si1;
if(si0){
goto L18;
}
si0=l8;
si0=i32_load8_u(&i->m0,(U64)si0+3U);
si1=117U;
si0=si0 != si1;
if(si0){
goto L18;
}
si0=l8;
si0=i32_load8_u(&i->m0,(U64)si0+4U);
si1=116U;
si0=si0 != si1;
if(si0){
goto L18;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0+120U);
l8=si0;
if(si0){
goto L57;
}
si0=13U;
l1=si0;
si0=1087318U;
l8=si0;
goto L56;
L57:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+124U);
l1=si0;
L56:;
si0=l6;
si0=i32_load(&i->m0,(U64)si0+72U);
l9=si0;
si0=l6;
si0=i32_load(&i->m0,(U64)si0+76U);
l5=si0;
si0=l6;
si1=l1;
i32_store(&i->m0,(U64)si0+292U,si1);
si0=l6;
si1=l8;
i32_store(&i->m0,(U64)si0+288U,si1);
si0=l6;
si1=50U;
i32_store(&i->m0,(U64)si0+268U,si1);
si0=l6;
si1=1U;
i32_store(&i->m0,(U64)si0+204U,si1);
si0=l6;
si1=1086468U;
i32_store(&i->m0,(U64)si0+200U,si1);
si0=l6;
sj1=1ULL;
i64_store(&i->m0,(U64)si0+212U,sj1);
si0=l6;
si1=l6;
si2=288U;
si1+=si2;
i32_store(&i->m0,(U64)si0+264U,si1);
si0=l6;
si1=l6;
si2=264U;
si1+=si2;
i32_store(&i->m0,(U64)si0+208U,si1);
si0=l6;
si1=320U;
si0+=si1;
si1=l9;
si2=l6;
si3=200U;
si2+=si3;
si3=l5;
si3=i32_load(&i->m0,(U64)si3+36U);
TF(i->t0,si3,void (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
si0=l6;
si0=i32_load8_u(&i->m0,(U64)si0+320U);
l8=si0;
si1=4U;
si0=si0 == si1;
if(si0){
goto L17;
}
si0=l6;
si1=200U;
si0+=si1;
si1=4U;
si0+=si1;
si1=l6;
si2=320U;
si1+=si2;
si2=4U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l6;
si1=l6;
si1=i32_load(&i->m0,(U64)si1+321U);
i32_store(&i->m0,(U64)si0+201U,si1);
si0=l6;
si1=l8;
i32_store8(&i->m0,(U64)si0+200U,si1);
si0=l6;
si1=96U;
si0+=si1;
si1=l6;
si2=200U;
si1+=si2;
f578(i,si0,si1);
goto L13;
L54:;
si0=l8;
si0=i32_load8_u(&i->m0,(U64)si0+1U);
si1=115U;
si0=si0 != si1;
if(si0){
goto L18;
}
si0=l8;
si0=i32_load8_u(&i->m0,(U64)si0+2U);
si1=97U;
si0=si0 != si1;
if(si0){
goto L18;
}
si0=l8;
si0=i32_load8_u(&i->m0,(U64)si0+3U);
si1=103U;
si0=si0 != si1;
if(si0){
goto L18;
}
si0=l8;
si0=i32_load8_u(&i->m0,(U64)si0+4U);
si1=101U;
si0=si0 != si1;
if(si0){
goto L18;
}
si0=l6;
si0=i32_load(&i->m0,(U64)si0+72U);
l8=si0;
si0=l6;
si0=i32_load(&i->m0,(U64)si0+76U);
l9=si0;
si0=l6;
si1=288U;
si0+=si1;
si1=l3;
si2=1085852U;
si3=0U;
f585(i,si0,si1,si2,si3);
si0=l6;
si1=154U;
i32_store(&i->m0,(U64)si0+268U,si1);
si0=l6;
si1=1U;
i32_store(&i->m0,(U64)si0+204U,si1);
si0=l6;
si1=1086468U;
i32_store(&i->m0,(U64)si0+200U,si1);
si0=l6;
sj1=1ULL;
i64_store(&i->m0,(U64)si0+212U,sj1);
si0=l6;
si1=l6;
si2=288U;
si1+=si2;
i32_store(&i->m0,(U64)si0+264U,si1);
si0=l6;
si1=l6;
si2=264U;
si1+=si2;
i32_store(&i->m0,(U64)si0+208U,si1);
si0=l6;
si1=320U;
si0+=si1;
si1=l8;
si2=l6;
si3=200U;
si2+=si3;
si3=l9;
si3=i32_load(&i->m0,(U64)si3+36U);
TF(i->t0,si3,void (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
si0=l6;
si0=i32_load8_u(&i->m0,(U64)si0+320U);
l8=si0;
si1=4U;
si0=si0 != si1;
if(si0){
goto L58;
}
si0=l6;
si0=i32_load(&i->m0,(U64)si0+292U);
si0=!(si0);
if(si0){
goto L17;
}
si0=l6;
si0=i32_load(&i->m0,(U64)si0+288U);
f15024(i,si0);
goto L17;
L58:;
si0=l6;
si1=200U;
si0+=si1;
si1=4U;
si0+=si1;
si1=l6;
si2=320U;
si1+=si2;
si2=4U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l6;
si1=l6;
si1=i32_load(&i->m0,(U64)si1+321U);
i32_store(&i->m0,(U64)si0+201U,si1);
si0=l6;
si1=l8;
i32_store8(&i->m0,(U64)si0+200U,si1);
si0=l6;
si1=96U;
si0+=si1;
si1=l6;
si2=200U;
si1+=si2;
f578(i,si0,si1);
si0=l6;
si0=i32_load(&i->m0,(U64)si0+292U);
si0=!(si0);
if(si0){
goto L13;
}
si0=l6;
si0=i32_load(&i->m0,(U64)si0+288U);
f15024(i,si0);
goto L13;
L53:;
si0=l8;
si0=i32_load8_u(&i->m0,(U64)si0+1U);
si1=108U;
si0=si0 != si1;
if(si0){
goto L18;
}
si0=l8;
si0=i32_load8_u(&i->m0,(U64)si0+2U);
si1=97U;
si0=si0 != si1;
if(si0){
goto L18;
}
si0=l8;
si0=i32_load8_u(&i->m0,(U64)si0+3U);
si1=103U;
si0=si0 != si1;
if(si0){
goto L18;
}
si0=l8;
si0=i32_load8_u(&i->m0,(U64)si0+4U);
si1=115U;
si0=si0 != si1;
if(si0){
goto L18;
}
si0=l6;
si1=288U;
si0+=si1;
si1=l6;
si2=72U;
si1+=si2;
si2=l3;
si2=i32_load(&i->m0,(U64)si2+212U);
l8=si2;
si3=l8;
si4=l3;
si4=i32_load(&i->m0,(U64)si4+220U);
si5=120U;
si4*=si5;
si3+=si4;
f278(i,si0,si1,si2,si3);
si0=l6;
si0=i32_load8_u(&i->m0,(U64)si0+288U);
l8=si0;
si1=4U;
si0=si0 == si1;
if(si0){
goto L17;
}
si0=l6;
si1=200U;
si0+=si1;
si1=4U;
si0+=si1;
si1=l6;
si2=288U;
si1+=si2;
si2=4U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l6;
si1=l6;
si1=i32_load(&i->m0,(U64)si1+289U);
i32_store(&i->m0,(U64)si0+201U,si1);
si0=l6;
si1=l8;
i32_store8(&i->m0,(U64)si0+200U,si1);
si0=l6;
si1=96U;
si0+=si1;
si1=l6;
si2=200U;
si1+=si2;
f578(i,si0,si1);
goto L13;
L43:;
si0=l8;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=-97U;
si0+=si1;
switch(si0){
case 0:
goto L59;
case 1:
goto L18;
case 2:
goto L18;
case 3:
goto L18;
case 4:
goto L18;
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
goto L60;
default:
goto L18;
}
L60:;
si0=l8;
si0=i32_load8_u(&i->m0,(U64)si0+1U);
si1=111U;
si0=si0 != si1;
if(si0){
goto L18;
}
si0=l8;
si0=i32_load8_u(&i->m0,(U64)si0+2U);
si1=110U;
si0=si0 != si1;
if(si0){
goto L18;
}
si0=l8;
si0=i32_load8_u(&i->m0,(U64)si0+3U);
si1=103U;
si0=si0 != si1;
if(si0){
goto L18;
}
si0=l8;
si0=i32_load8_u(&i->m0,(U64)si0+4U);
si1=45U;
si0=si0 != si1;
if(si0){
goto L18;
}
si0=l8;
si0=i32_load8_u(&i->m0,(U64)si0+5U);
si1=97U;
si0=si0 != si1;
if(si0){
goto L18;
}
si0=l8;
si0=i32_load8_u(&i->m0,(U64)si0+6U);
si1=98U;
si0=si0 != si1;
if(si0){
goto L18;
}
si0=l8;
si0=i32_load8_u(&i->m0,(U64)si0+7U);
si1=111U;
si0=si0 != si1;
if(si0){
goto L18;
}
si0=l8;
si0=i32_load8_u(&i->m0,(U64)si0+8U);
si1=117U;
si0=si0 != si1;
if(si0){
goto L18;
}
si0=l8;
si0=i32_load8_u(&i->m0,(U64)si0+9U);
si1=116U;
si0=si0 != si1;
if(si0){
goto L18;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0+128U);
l8=si0;
if(si0){
goto L62;
}
si0=13U;
l9=si0;
si0=1087318U;
l8=si0;
goto L61;
L62:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+132U);
l9=si0;
L61:;
si0=l6;
si0=i32_load(&i->m0,(U64)si0+72U);
l5=si0;
si0=l6;
si0=i32_load(&i->m0,(U64)si0+76U);
l1=si0;
si0=l6;
si1=l9;
i32_store(&i->m0,(U64)si0+292U,si1);
si0=l6;
si1=l8;
i32_store(&i->m0,(U64)si0+288U,si1);
si0=l6;
si1=50U;
i32_store(&i->m0,(U64)si0+268U,si1);
si0=l6;
si1=1U;
i32_store(&i->m0,(U64)si0+204U,si1);
si0=l6;
si1=1086468U;
i32_store(&i->m0,(U64)si0+200U,si1);
si0=l6;
sj1=1ULL;
i64_store(&i->m0,(U64)si0+212U,sj1);
si0=l6;
si1=l6;
si2=288U;
si1+=si2;
i32_store(&i->m0,(U64)si0+264U,si1);
si0=l6;
si1=l6;
si2=264U;
si1+=si2;
i32_store(&i->m0,(U64)si0+208U,si1);
si0=l6;
si1=320U;
si0+=si1;
si1=l5;
si2=l6;
si3=200U;
si2+=si3;
si3=l1;
si3=i32_load(&i->m0,(U64)si3+36U);
TF(i->t0,si3,void (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
si0=l6;
si0=i32_load8_u(&i->m0,(U64)si0+320U);
l8=si0;
si1=4U;
si0=si0 == si1;
if(si0){
goto L17;
}
si0=l6;
si1=200U;
si0+=si1;
si1=4U;
si0+=si1;
si1=l6;
si2=320U;
si1+=si2;
si2=4U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l6;
si1=l6;
si1=i32_load(&i->m0,(U64)si1+321U);
i32_store(&i->m0,(U64)si0+201U,si1);
si0=l6;
si1=l8;
i32_store8(&i->m0,(U64)si0+200U,si1);
si0=l6;
si1=96U;
si0+=si1;
si1=l6;
si2=200U;
si1+=si2;
f578(i,si0,si1);
goto L13;
L59:;
si0=l8;
si0=i32_load8_u(&i->m0,(U64)si0+1U);
si1=102U;
si0=si0 != si1;
if(si0){
goto L18;
}
si0=l8;
si0=i32_load8_u(&i->m0,(U64)si0+2U);
si1=116U;
si0=si0 != si1;
if(si0){
goto L18;
}
si0=l8;
si0=i32_load8_u(&i->m0,(U64)si0+3U);
si1=101U;
si0=si0 != si1;
if(si0){
goto L18;
}
si0=l8;
si0=i32_load8_u(&i->m0,(U64)si0+4U);
si1=114U;
si0=si0 != si1;
if(si0){
goto L18;
}
si0=l8;
si0=i32_load8_u(&i->m0,(U64)si0+5U);
si1=45U;
si0=si0 != si1;
if(si0){
goto L18;
}
si0=l8;
si0=i32_load8_u(&i->m0,(U64)si0+6U);
si1=104U;
si0=si0 != si1;
if(si0){
goto L18;
}
si0=l8;
si0=i32_load8_u(&i->m0,(U64)si0+7U);
si1=101U;
si0=si0 != si1;
if(si0){
goto L18;
}
si0=l8;
si0=i32_load8_u(&i->m0,(U64)si0+8U);
si1=108U;
si0=si0 != si1;
if(si0){
goto L18;
}
si0=l8;
si0=i32_load8_u(&i->m0,(U64)si0+9U);
si1=112U;
si0=si0 != si1;
if(si0){
goto L18;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0+136U);
l8=si0;
if(si0){
goto L64;
}
si0=18U;
l9=si0;
si0=1087331U;
l8=si0;
goto L63;
L64:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+140U);
l9=si0;
L63:;
si0=l6;
si0=i32_load(&i->m0,(U64)si0+72U);
l5=si0;
si0=l6;
si0=i32_load(&i->m0,(U64)si0+76U);
l1=si0;
si0=l6;
si1=l9;
i32_store(&i->m0,(U64)si0+292U,si1);
si0=l6;
si1=l8;
i32_store(&i->m0,(U64)si0+288U,si1);
si0=l6;
si1=50U;
i32_store(&i->m0,(U64)si0+268U,si1);
si0=l6;
si1=1U;
i32_store(&i->m0,(U64)si0+204U,si1);
si0=l6;
si1=1086468U;
i32_store(&i->m0,(U64)si0+200U,si1);
si0=l6;
sj1=1ULL;
i64_store(&i->m0,(U64)si0+212U,sj1);
si0=l6;
si1=l6;
si2=288U;
si1+=si2;
i32_store(&i->m0,(U64)si0+264U,si1);
si0=l6;
si1=l6;
si2=264U;
si1+=si2;
i32_store(&i->m0,(U64)si0+208U,si1);
si0=l6;
si1=320U;
si0+=si1;
si1=l5;
si2=l6;
si3=200U;
si2+=si3;
si3=l1;
si3=i32_load(&i->m0,(U64)si3+36U);
TF(i->t0,si3,void (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
si0=l6;
si0=i32_load8_u(&i->m0,(U64)si0+320U);
l8=si0;
si1=4U;
si0=si0 == si1;
if(si0){
goto L17;
}
si0=l6;
si1=200U;
si0+=si1;
si1=4U;
si0+=si1;
si1=l6;
si2=320U;
si1+=si2;
si2=4U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l6;
si1=l6;
si1=i32_load(&i->m0,(U64)si1+321U);
i32_store(&i->m0,(U64)si0+201U,si1);
si0=l6;
si1=l8;
i32_store8(&i->m0,(U64)si0+200U,si1);
si0=l6;
si1=96U;
si0+=si1;
si1=l6;
si2=200U;
si1+=si2;
f578(i,si0,si1);
goto L13;
L42:;
si0=l8;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=97U;
si0=si0 != si1;
if(si0){
goto L18;
}
si0=l8;
si0=i32_load8_u(&i->m0,(U64)si0+1U);
si1=108U;
si0=si0 != si1;
if(si0){
goto L18;
}
si0=l8;
si0=i32_load8_u(&i->m0,(U64)si0+2U);
si1=108U;
si0=si0 != si1;
if(si0){
goto L18;
}
si0=l8;
si0=i32_load8_u(&i->m0,(U64)si0+3U);
si1=45U;
si0=si0 != si1;
if(si0){
goto L18;
}
si0=l8;
si0=i32_load8_u(&i->m0,(U64)si0+4U);
si1=97U;
si0=si0 != si1;
if(si0){
goto L18;
}
si0=l8;
si0=i32_load8_u(&i->m0,(U64)si0+5U);
si1=114U;
si0=si0 != si1;
if(si0){
goto L18;
}
si0=l8;
si0=i32_load8_u(&i->m0,(U64)si0+6U);
si1=103U;
si0=si0 != si1;
if(si0){
goto L18;
}
si0=l8;
si0=i32_load8_u(&i->m0,(U64)si0+7U);
si1=115U;
si0=si0 != si1;
if(si0){
goto L18;
}
si0=l6;
si1=200U;
si0+=si1;
si1=l6;
si2=72U;
si1+=si2;
si2=l3;
f279(i,si0,si1,si2);
si0=l6;
si0=i32_load8_u(&i->m0,(U64)si0+224U);
l8=si0;
si1=20U;
si0=si0 == si1;
if(si0){
goto L17;
}
si0=l6;
si1=96U;
si0+=si1;
si1=16U;
si0+=si1;
si1=l6;
si2=200U;
si1+=si2;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l6;
si1=96U;
si0+=si1;
si1=8U;
si0+=si1;
si1=l6;
si2=200U;
si1+=si2;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l6;
si1=123U;
si0+=si1;
si1=l14;
si2=2U;
si1+=si2;
si1=i32_load8_u(&i->m0,(U64)si1);
i32_store8(&i->m0,(U64)si0,si1);
si0=l6;
si1=l6;
sj1=i64_load(&i->m0,(U64)si1+200U);
i64_store(&i->m0,(U64)si0+96U,sj1);
si0=l6;
si1=l14;
si1=i32_load16_u(&i->m0,(U64)si1);
i32_store16(&i->m0,(U64)si0+121U,si1);
si0=l6;
si1=l8;
i32_store8(&i->m0,(U64)si0+120U,si1);
goto L13;
L41:;
si0=l8;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=-98U;
si0+=si1;
switch(si0){
case 0:
goto L21;
case 1:
goto L18;
case 2:
goto L18;
case 3:
goto L18;
case 4:
goto L18;
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
goto L65;
case 15:
goto L18;
case 16:
goto L18;
case 17:
goto L20;
default:
goto L18;
}
L65:;
si0=l8;
si0=i32_load8_u(&i->m0,(U64)si0+1U);
si1=111U;
si0=si0 != si1;
if(si0){
goto L18;
}
si0=l8;
si0=i32_load8_u(&i->m0,(U64)si0+2U);
si1=115U;
si0=si0 != si1;
if(si0){
goto L18;
}
si0=l8;
si0=i32_load8_u(&i->m0,(U64)si0+3U);
si1=105U;
si0=si0 != si1;
if(si0){
goto L18;
}
si0=l8;
si0=i32_load8_u(&i->m0,(U64)si0+4U);
si1=116U;
si0=si0 != si1;
if(si0){
goto L18;
}
si0=l8;
si0=i32_load8_u(&i->m0,(U64)si0+5U);
si1=105U;
si0=si0 != si1;
if(si0){
goto L18;
}
si0=l8;
si0=i32_load8_u(&i->m0,(U64)si0+6U);
si1=111U;
si0=si0 != si1;
if(si0){
goto L18;
}
si0=l8;
si0=i32_load8_u(&i->m0,(U64)si0+7U);
si1=110U;
si0=si0 != si1;
if(si0){
goto L18;
}
si0=l8;
si0=i32_load8_u(&i->m0,(U64)si0+8U);
si1=97U;
si0=si0 != si1;
if(si0){
goto L18;
}
si0=l8;
si0=i32_load8_u(&i->m0,(U64)si0+9U);
si1=108U;
si0=si0 != si1;
if(si0){
goto L18;
}
si0=l8;
si0=i32_load8_u(&i->m0,(U64)si0+10U);
si1=115U;
si0=si0 != si1;
if(si0){
goto L18;
}
si0=l6;
si1=2U;
i32_store(&i->m0,(U64)si0+84U,si1);
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
l8=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+8U);
l9=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+12U);
l5=si0;
si0=l6;
sj1=4ULL;
i64_store(&i->m0,(U64)si0+264U,sj1);
si0=l6;
sj1=0ULL;
i64_store(&i->m0,(U64)si0+272U,sj1);
si0=l6;
si1=l6;
si1=i32_load8_u(&i->m0,(U64)si1+93U);
i32_store8(&i->m0,(U64)si0+287U,si1);
si0=l6;
si1=0U;
i32_store(&i->m0,(U64)si0+308U,si1);
si0=l6;
si1=l5;
i32_store(&i->m0,(U64)si0+304U,si1);
si0=l6;
si1=l9;
i32_store(&i->m0,(U64)si0+300U,si1);
si0=l6;
si1=0U;
i32_store(&i->m0,(U64)si0+296U,si1);
si0=l6;
si1=l8;
si2=l9;
si3=248U;
si2*=si3;
si1+=si2;
i32_store(&i->m0,(U64)si0+292U,si1);
si0=l6;
si1=l8;
i32_store(&i->m0,(U64)si0+288U,si1);
si0=l6;
si1=l6;
si2=287U;
si1+=si2;
i32_store(&i->m0,(U64)si0+312U,si1);
si0=l6;
si1=64U;
si0+=si1;
si1=l6;
si2=288U;
si1+=si2;
si2=l13;
f435(i,si0,si1,si2);
si0=l6;
si0=i32_load(&i->m0,(U64)si0+64U);
l8=si0;
si0=!(si0);
if(si0){
goto L66;
}
si0=l6;
si0=i32_load(&i->m0,(U64)si0+68U);
l9=si0;
si0=2U;
l2=si0;
L67:;
{
si0=l8;
si1=l9;
si1=i32_load(&i->m0,(U64)si1+116U);
si0=TF(i->t0,si1,U32 (*)(rustpythonInstance*,U32))(i,si0);
si0=!(si0);
if(si0){
goto L68;
}
si0=l6;
si1=0U;
i32_store(&i->m0,(U64)si0+328U,si1);
si0=l6;
sj1=1ULL;
i64_store(&i->m0,(U64)si0+320U,sj1);
si0=l6;
si1=3U;
i32_store8(&i->m0,(U64)si0+232U,si1);
si0=l6;
si1=32U;
i32_store(&i->m0,(U64)si0+216U,si1);
si0=l6;
si1=0U;
i32_store(&i->m0,(U64)si0+228U,si1);
si0=l6;
si1=1085664U;
i32_store(&i->m0,(U64)si0+224U,si1);
si0=l6;
si1=0U;
i32_store(&i->m0,(U64)si0+208U,si1);
si0=l6;
si1=0U;
i32_store(&i->m0,(U64)si0+200U,si1);
si0=l6;
si1=l6;
si2=320U;
si1+=si2;
i32_store(&i->m0,(U64)si0+220U,si1);
si0=l8;
si1=l6;
si2=200U;
si1+=si2;
si2=l9;
si2=i32_load(&i->m0,(U64)si2+12U);
si0=TF(i->t0,si2,U32 (*)(rustpythonInstance*,U32,U32))(i,si0,si1);
if(si0){
goto L69;
}
si0=l6;
si0=i32_load(&i->m0,(U64)si0+324U);
l5=si0;
si0=l6;
si1=l2;
si2=l6;
si2=i32_load(&i->m0,(U64)si2+320U);
l10=si2;
si3=l6;
si3=i32_load(&i->m0,(U64)si3+328U);
si2=f273(i,si2,si3);
l1=si2;
si3=l2;
si4=l1;
si3=si3 > si4;
si1=si3?si1:si2;
l2=si1;
i32_store(&i->m0,(U64)si0+84U,si1);
si0=l5;
si0=!(si0);
if(si0){
goto L68;
}
si0=l10;
f15024(i,si0);
goto L68;
L69:;
si0=1085688U;
si1=55U;
si2=l6;
si3=332U;
si2+=si3;
si3=1085744U;
si4=1085836U;
f641(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L68:;
si0=l8;
si1=l9;
si1=i32_load(&i->m0,(U64)si1+124U);
si0=TF(i->t0,si1,U32 (*)(rustpythonInstance*,U32))(i,si0);
l5=si0;
si0=l6;
si0=i32_load(&i->m0,(U64)si0+272U);
si1=l5;
si0=si0 <= si1;
if(si0){
goto L71;
}
si0=1U;
l1=si0;
si0=l6;
si0=i32_load(&i->m0,(U64)si0+264U);
si1=l5;
si2=4U;
si1<<=(si2&31);
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L70;
}
L71:;
si0=0U;
l1=si0;
L70:;
si0=l6;
si1=l5;
i32_store(&i->m0,(U64)si0+328U,si1);
si0=l6;
si1=l1;
i32_store(&i->m0,(U64)si0+320U,si1);
si0=l6;
si1=l6;
si2=264U;
si1+=si2;
i32_store(&i->m0,(U64)si0+324U,si1);
si0=l6;
si1=0U;
i32_store(&i->m0,(U64)si0+208U,si1);
si0=l6;
si1=0U;
i32_store(&i->m0,(U64)si0+200U,si1);
si0=l6;
si1=320U;
si0+=si1;
si1=l6;
si2=200U;
si1+=si2;
si0=f351(i,si0,si1);
l5=si0;
si0=l6;
si1=56U;
si0+=si1;
si1=l8;
si2=l9;
si2=i32_load(&i->m0,(U64)si2+16U);
TF(i->t0,si2,void (*)(rustpythonInstance*,U32,U32))(i,si0,si1);
si0=l6;
si1=48U;
si0+=si1;
si1=l5;
si2=l6;
si2=i32_load(&i->m0,(U64)si2+56U);
si3=l6;
si3=i32_load(&i->m0,(U64)si3+60U);
si4=l8;
si5=l9;
f449(i,si0,si1,si2,si3,si4,si5);
si0=l6;
si1=40U;
si0+=si1;
si1=l6;
si2=288U;
si1+=si2;
si2=l13;
f435(i,si0,si1,si2);
si0=l6;
si0=i32_load(&i->m0,(U64)si0+44U);
l9=si0;
si0=l6;
si0=i32_load(&i->m0,(U64)si0+40U);
l8=si0;
if(si0){
goto L67;
}
}
L66:;
si0=l6;
si0=i32_load(&i->m0,(U64)si0+272U);
l2=si0;
si0=!(si0);
if(si0){
goto L72;
}
si0=l6;
si0=i32_load(&i->m0,(U64)si0+264U);
l9=si0;
si1=l2;
si2=4U;
si1<<=(si2&31);
si0+=si1;
l5=si0;
si0=0U;
l1=si0;
si0=1U;
l19=si0;
L73:;
{
si0=l9;
l8=si0;
L75:;
{
si0=l5;
l9=si0;
si0=l8;
si1=l5;
si0=si0 == si1;
if(si0){
goto L76;
}
si0=l8;
si1=16U;
si0+=si1;
l9=si0;
si0=l8;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L74;
}
L76:;
si0=l9;
l8=si0;
si0=l2;
si1=l1;
si2=1U;
si1+=si2;
l1=si1;
si0=si0 != si1;
if(si0){
goto L75;
}
goto L72;
}
L74:;
si0=l8;
si0=i32_load(&i->m0,(U64)si0+4U);
l10=si0;
if(si0){
goto L78;
}
si0=0U;
l8=si0;
si0=0U;
l20=si0;
goto L77;
L78:;
si0=l8;
si1=12U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l20=si0;
si0=l8;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l23=si0;
si0=1U;
l8=si0;
si0=l10;
l24=si0;
si0=l10;
l25=si0;
L77:;
si0=l6;
si1=l20;
i32_store(&i->m0,(U64)si0+232U,si1);
si0=l6;
si1=l23;
i32_store(&i->m0,(U64)si0+228U,si1);
si0=l6;
si1=l25;
i32_store(&i->m0,(U64)si0+224U,si1);
si0=l6;
si1=0U;
i32_store(&i->m0,(U64)si0+220U,si1);
si0=l6;
si1=l8;
i32_store(&i->m0,(U64)si0+216U,si1);
si0=l6;
si1=l23;
i32_store(&i->m0,(U64)si0+212U,si1);
si0=l6;
si1=l24;
i32_store(&i->m0,(U64)si0+208U,si1);
si0=l6;
si1=0U;
i32_store(&i->m0,(U64)si0+204U,si1);
si0=l6;
si1=l8;
i32_store(&i->m0,(U64)si0+200U,si1);
si0=l6;
si1=200U;
si0+=si1;
si0=f442(i,si0);
l8=si0;
si0=!(si0);
if(si0){
goto L79;
}
si0=l19;
si1=1U;
si0&=si1;
if(si0){
goto L82;
}
si0=l6;
si1=288U;
si0+=si1;
si1=l6;
si1=i32_load(&i->m0,(U64)si1+72U);
si2=1086476U;
si3=1U;
si4=l6;
si4=i32_load(&i->m0,(U64)si4+76U);
si4=i32_load(&i->m0,(U64)si4+28U);
TF(i->t0,si4,void (*)(rustpythonInstance*,U32,U32,U32,U32))(i,si0,si1,si2,si3);
si0=l6;
si0=i32_load8_u(&i->m0,(U64)si0+288U);
l10=si0;
si1=4U;
si0=si0 != si1;
if(si0){
goto L81;
}
L82:;
si0=l6;
si1=32U;
si0+=si1;
si1=l8;
si1=i32_load(&i->m0,(U64)si1);
si2=l8;
si2=i32_load(&i->m0,(U64)si2+4U);
si2=i32_load(&i->m0,(U64)si2+132U);
TF(i->t0,si2,void (*)(rustpythonInstance*,U32,U32))(i,si0,si1);
si0=l6;
si1=288U;
si0+=si1;
si1=l6;
si2=72U;
si1+=si2;
si2=l6;
si2=i32_load(&i->m0,(U64)si2+32U);
si3=l6;
si3=i32_load(&i->m0,(U64)si3+36U);
f280(i,si0,si1,si2,si3);
si0=l6;
si0=i32_load8_u(&i->m0,(U64)si0+288U);
l10=si0;
si1=4U;
si0=si0 != si1;
if(si0){
goto L83;
}
si0=0U;
l19=si0;
si0=l6;
si1=200U;
si0+=si1;
si0=f442(i,si0);
l8=si0;
si0=!(si0);
if(si0){
goto L79;
}
L84:;
{
si0=l6;
si1=288U;
si0+=si1;
si1=l6;
si1=i32_load(&i->m0,(U64)si1+72U);
si2=1086476U;
si3=1U;
si4=l6;
si4=i32_load(&i->m0,(U64)si4+76U);
si4=i32_load(&i->m0,(U64)si4+28U);
TF(i->t0,si4,void (*)(rustpythonInstance*,U32,U32,U32,U32))(i,si0,si1,si2,si3);
si0=l6;
si0=i32_load8_u(&i->m0,(U64)si0+288U);
l10=si0;
si1=4U;
si0=si0 != si1;
if(si0){
goto L81;
}
si0=l6;
si1=24U;
si0+=si1;
si1=l8;
si1=i32_load(&i->m0,(U64)si1);
si2=l8;
si2=i32_load(&i->m0,(U64)si2+4U);
si2=i32_load(&i->m0,(U64)si2+132U);
TF(i->t0,si2,void (*)(rustpythonInstance*,U32,U32))(i,si0,si1);
si0=l6;
si1=288U;
si0+=si1;
si1=l6;
si2=72U;
si1+=si2;
si2=l6;
si2=i32_load(&i->m0,(U64)si2+24U);
si3=l6;
si3=i32_load(&i->m0,(U64)si3+28U);
f280(i,si0,si1,si2,si3);
si0=l6;
si0=i32_load8_u(&i->m0,(U64)si0+288U);
l10=si0;
si1=4U;
si0=si0 != si1;
if(si0){
goto L83;
}
si0=l6;
si1=200U;
si0+=si1;
si0=f442(i,si0);
l8=si0;
si0=!(si0);
if(si0){
goto L79;
}
goto L84;
}
L83:;
si0=l6;
si1=l6;
si1=i32_load(&i->m0,(U64)si1+289U);
i32_store(&i->m0,(U64)si0+192U,si1);
si0=l6;
si1=l6;
si2=292U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0+195U,si1);
goto L80;
L81:;
si0=l6;
si1=l6;
si1=i32_load(&i->m0,(U64)si1+289U);
i32_store(&i->m0,(U64)si0+192U,si1);
si0=l6;
si1=l6;
si2=292U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0+195U,si1);
L80:;
si0=l6;
si1=264U;
si0+=si1;
f240(i,si0);
si0=l6;
si0=i32_load(&i->m0,(U64)si0+268U);
si0=!(si0);
if(si0){
goto L85;
}
si0=l6;
si0=i32_load(&i->m0,(U64)si0+264U);
f15024(i,si0);
L85:;
si0=l6;
si1=204U;
si0+=si1;
si1=l6;
si1=i32_load(&i->m0,(U64)si1+195U);
i32_store(&i->m0,(U64)si0,si1);
si0=l6;
si1=l6;
si1=i32_load(&i->m0,(U64)si1+192U);
i32_store(&i->m0,(U64)si0+201U,si1);
si0=l6;
si1=l10;
i32_store8(&i->m0,(U64)si0+200U,si1);
si0=l6;
si1=96U;
si0+=si1;
si1=l6;
si2=200U;
si1+=si2;
f578(i,si0,si1);
goto L13;
L79:;
si0=l1;
si1=1U;
si0+=si1;
l1=si0;
si1=l2;
si0=si0 < si1;
if(si0){
goto L73;
}
}
L72:;
si0=l6;
si1=264U;
si0+=si1;
f240(i,si0);
si0=l6;
si0=i32_load(&i->m0,(U64)si0+268U);
si0=!(si0);
if(si0){
goto L17;
}
si0=l6;
si0=i32_load(&i->m0,(U64)si0+264U);
f15024(i,si0);
goto L17;
L40:;
si0=l21;
si1=l8;
si2=1087248U;
f597(i,si0,si1,si2);
UNREACHABLE;
L22:;
si0=l6;
si1=l22;
sj1=(U64)(si1);
sj2=16777215ULL;
sj1&=sj2;
sj2=8ULL;
sj1<<=(sj2&63);
si2=l21;
sj2=(U64)(si2);
sj3=32ULL;
sj2<<=(sj3&63);
sj1|=sj2;
si2=l9;
sj2=(U64)(si2);
sj3=255ULL;
sj2&=sj3;
sj1|=sj2;
i64_store(&i->m0,(U64)si0+200U,sj1);
si0=l6;
si1=96U;
si0+=si1;
si1=l6;
si2=200U;
si1+=si2;
f578(i,si0,si1);
goto L13;
L21:;
si0=l8;
si0=i32_load8_u(&i->m0,(U64)si0+1U);
si1=101U;
si0=si0 != si1;
if(si0){
goto L18;
}
si0=l8;
si0=i32_load8_u(&i->m0,(U64)si0+2U);
si1=102U;
si0=si0 != si1;
if(si0){
goto L18;
}
si0=l8;
si0=i32_load8_u(&i->m0,(U64)si0+3U);
si1=111U;
si0=si0 != si1;
if(si0){
goto L18;
}
si0=l8;
si0=i32_load8_u(&i->m0,(U64)si0+4U);
si1=114U;
si0=si0 != si1;
if(si0){
goto L18;
}
si0=l8;
si0=i32_load8_u(&i->m0,(U64)si0+5U);
si1=101U;
si0=si0 != si1;
if(si0){
goto L18;
}
si0=l8;
si0=i32_load8_u(&i->m0,(U64)si0+6U);
si1=45U;
si0=si0 != si1;
if(si0){
goto L18;
}
si0=l8;
si0=i32_load8_u(&i->m0,(U64)si0+7U);
si1=104U;
si0=si0 != si1;
if(si0){
goto L18;
}
si0=l8;
si0=i32_load8_u(&i->m0,(U64)si0+8U);
si1=101U;
si0=si0 != si1;
if(si0){
goto L18;
}
si0=l8;
si0=i32_load8_u(&i->m0,(U64)si0+9U);
si1=108U;
si0=si0 != si1;
if(si0){
goto L18;
}
si0=l8;
si0=i32_load8_u(&i->m0,(U64)si0+10U);
si1=112U;
si0=si0 != si1;
if(si0){
goto L18;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0+144U);
l8=si0;
if(si0){
goto L87;
}
si0=19U;
l1=si0;
si0=1087349U;
l8=si0;
goto L86;
L87:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+148U);
l1=si0;
L86:;
si0=l6;
si0=i32_load(&i->m0,(U64)si0+72U);
l9=si0;
si0=l6;
si0=i32_load(&i->m0,(U64)si0+76U);
l5=si0;
si0=l6;
si1=l1;
i32_store(&i->m0,(U64)si0+292U,si1);
si0=l6;
si1=l8;
i32_store(&i->m0,(U64)si0+288U,si1);
si0=l6;
si1=50U;
i32_store(&i->m0,(U64)si0+268U,si1);
si0=l6;
si1=1U;
i32_store(&i->m0,(U64)si0+204U,si1);
si0=l6;
si1=1086468U;
i32_store(&i->m0,(U64)si0+200U,si1);
si0=l6;
sj1=1ULL;
i64_store(&i->m0,(U64)si0+212U,sj1);
si0=l6;
si1=l6;
si2=288U;
si1+=si2;
i32_store(&i->m0,(U64)si0+264U,si1);
si0=l6;
si1=l6;
si2=264U;
si1+=si2;
i32_store(&i->m0,(U64)si0+208U,si1);
si0=l6;
si1=320U;
si0+=si1;
si1=l9;
si2=l6;
si3=200U;
si2+=si3;
si3=l5;
si3=i32_load(&i->m0,(U64)si3+36U);
TF(i->t0,si3,void (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
si0=l6;
si0=i32_load8_u(&i->m0,(U64)si0+320U);
l8=si0;
si1=4U;
si0=si0 == si1;
if(si0){
goto L17;
}
si0=l6;
si1=200U;
si0+=si1;
si1=4U;
si0+=si1;
si1=l6;
si2=320U;
si1+=si2;
si2=4U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l6;
si1=l6;
si1=i32_load(&i->m0,(U64)si1+321U);
i32_store(&i->m0,(U64)si0+201U,si1);
si0=l6;
si1=l8;
i32_store8(&i->m0,(U64)si0+200U,si1);
si0=l6;
si1=96U;
si0+=si1;
si1=l6;
si2=200U;
si1+=si2;
f578(i,si0,si1);
goto L13;
L20:;
si0=l8;
si0=i32_load8_u(&i->m0,(U64)si0+1U);
si1=117U;
si0=si0 != si1;
if(si0){
goto L18;
}
si0=l8;
si0=i32_load8_u(&i->m0,(U64)si0+2U);
si1=98U;
si0=si0 != si1;
if(si0){
goto L18;
}
si0=l8;
si0=i32_load8_u(&i->m0,(U64)si0+3U);
si1=99U;
si0=si0 != si1;
if(si0){
goto L18;
}
si0=l8;
si0=i32_load8_u(&i->m0,(U64)si0+4U);
si1=111U;
si0=si0 != si1;
if(si0){
goto L18;
}
si0=l8;
si0=i32_load8_u(&i->m0,(U64)si0+5U);
si1=109U;
si0=si0 != si1;
if(si0){
goto L18;
}
si0=l8;
si0=i32_load8_u(&i->m0,(U64)si0+6U);
si1=109U;
si0=si0 != si1;
if(si0){
goto L18;
}
si0=l8;
si0=i32_load8_u(&i->m0,(U64)si0+7U);
si1=97U;
si0=si0 != si1;
if(si0){
goto L18;
}
si0=l8;
si0=i32_load8_u(&i->m0,(U64)si0+8U);
si1=110U;
si0=si0 != si1;
if(si0){
goto L18;
}
si0=l8;
si0=i32_load8_u(&i->m0,(U64)si0+9U);
si1=100U;
si0=si0 != si1;
if(si0){
goto L18;
}
si0=l8;
si0=i32_load8_u(&i->m0,(U64)si0+10U);
si1=115U;
si0=si0 != si1;
if(si0){
goto L18;
}
si0=l6;
si1=288U;
si0+=si1;
si1=l6;
si2=72U;
si1+=si2;
si2=l18;
si2=i32_load(&i->m0,(U64)si2);
si3=l17;
si3=i32_load(&i->m0,(U64)si3);
f281(i,si0,si1,si2,si3);
si0=l6;
si0=i32_load8_u(&i->m0,(U64)si0+288U);
l8=si0;
si1=4U;
si0=si0 == si1;
if(si0){
goto L17;
}
si0=l6;
si1=200U;
si0+=si1;
si1=4U;
si0+=si1;
si1=l6;
si2=288U;
si1+=si2;
si2=4U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l6;
si1=l6;
si1=i32_load(&i->m0,(U64)si1+289U);
i32_store(&i->m0,(U64)si0+201U,si1);
si0=l6;
si1=l8;
i32_store8(&i->m0,(U64)si0+200U,si1);
si0=l6;
si1=96U;
si0+=si1;
si1=l6;
si2=200U;
si1+=si2;
f578(i,si0,si1);
goto L13;
L19:;
si0=l8;
si0=i32_load8_u(&i->m0,(U64)si0+1U);
si1=101U;
si0=si0 != si1;
if(si0){
goto L18;
}
si0=l8;
si0=i32_load8_u(&i->m0,(U64)si0+2U);
si1=114U;
si0=si0 != si1;
if(si0){
goto L18;
}
si0=l8;
si0=i32_load8_u(&i->m0,(U64)si0+3U);
si1=115U;
si0=si0 != si1;
if(si0){
goto L18;
}
si0=l8;
si0=i32_load8_u(&i->m0,(U64)si0+4U);
si1=105U;
si0=si0 != si1;
if(si0){
goto L18;
}
si0=l8;
si0=i32_load8_u(&i->m0,(U64)si0+5U);
si1=111U;
si0=si0 != si1;
if(si0){
goto L18;
}
si0=l8;
si0=i32_load8_u(&i->m0,(U64)si0+6U);
si1=110U;
si0=si0 != si1;
if(si0){
goto L18;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0+104U);
l8=si0;
if(si0){
goto L89;
}
si0=15U;
l9=si0;
si0=1087289U;
l8=si0;
goto L88;
L89:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+108U);
l9=si0;
L88:;
si0=l6;
si0=i32_load(&i->m0,(U64)si0+72U);
l5=si0;
si0=l6;
si0=i32_load(&i->m0,(U64)si0+76U);
l1=si0;
si0=l6;
si1=l9;
i32_store(&i->m0,(U64)si0+292U,si1);
si0=l6;
si1=l8;
i32_store(&i->m0,(U64)si0+288U,si1);
si0=l6;
si1=50U;
i32_store(&i->m0,(U64)si0+268U,si1);
si0=l6;
si1=1U;
i32_store(&i->m0,(U64)si0+204U,si1);
si0=l6;
si1=1086468U;
i32_store(&i->m0,(U64)si0+200U,si1);
si0=l6;
sj1=1ULL;
i64_store(&i->m0,(U64)si0+212U,sj1);
si0=l6;
si1=l6;
si2=288U;
si1+=si2;
i32_store(&i->m0,(U64)si0+264U,si1);
si0=l6;
si1=l6;
si2=264U;
si1+=si2;
i32_store(&i->m0,(U64)si0+208U,si1);
si0=l6;
si1=320U;
si0+=si1;
si1=l5;
si2=l6;
si3=200U;
si2+=si3;
si3=l1;
si3=i32_load(&i->m0,(U64)si3+36U);
TF(i->t0,si3,void (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
si0=l6;
si0=i32_load8_u(&i->m0,(U64)si0+320U);
l8=si0;
si1=4U;
si0=si0 == si1;
if(si0){
goto L17;
}
si0=l6;
si1=200U;
si0+=si1;
si1=4U;
si0+=si1;
si1=l6;
si2=320U;
si1+=si2;
si2=4U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l6;
si1=l6;
si1=i32_load(&i->m0,(U64)si1+321U);
i32_store(&i->m0,(U64)si0+201U,si1);
si0=l6;
si1=l8;
i32_store8(&i->m0,(U64)si0+200U,si1);
si0=l6;
si1=96U;
si0+=si1;
si1=l6;
si2=200U;
si1+=si2;
f578(i,si0,si1);
goto L13;
L18:;
si0=l6;
si1=288U;
si0+=si1;
si1=l6;
si1=i32_load(&i->m0,(U64)si1+72U);
si2=1087228U;
si3=1U;
si4=l6;
si4=i32_load(&i->m0,(U64)si4+76U);
si4=i32_load(&i->m0,(U64)si4+28U);
TF(i->t0,si4,void (*)(rustpythonInstance*,U32,U32,U32,U32))(i,si0,si1,si2,si3);
si0=l6;
si0=i32_load8_u(&i->m0,(U64)si0+288U);
l9=si0;
si1=4U;
si0=si0 != si1;
if(si0){
goto L15;
}
si0=l6;
si1=288U;
si0+=si1;
si1=l6;
si1=i32_load(&i->m0,(U64)si1+72U);
si2=l8;
si3=l21;
si4=l6;
si4=i32_load(&i->m0,(U64)si4+76U);
si4=i32_load(&i->m0,(U64)si4+28U);
TF(i->t0,si4,void (*)(rustpythonInstance*,U32,U32,U32,U32))(i,si0,si1,si2,si3);
si0=l6;
si0=i32_load8_u(&i->m0,(U64)si0+288U);
l8=si0;
si1=4U;
si0=si0 != si1;
if(si0){
goto L14;
}
si0=l6;
si1=288U;
si0+=si1;
si1=l6;
si1=i32_load(&i->m0,(U64)si1+72U);
si2=1087368U;
si3=1U;
si4=l6;
si4=i32_load(&i->m0,(U64)si4+76U);
si4=i32_load(&i->m0,(U64)si4+28U);
TF(i->t0,si4,void (*)(rustpythonInstance*,U32,U32,U32,U32))(i,si0,si1,si2,si3);
si0=l6;
si0=i32_load8_u(&i->m0,(U64)si0+288U);
l8=si0;
si1=4U;
si0=si0 == si1;
if(si0){
goto L17;
}
si0=l6;
si1=200U;
si0+=si1;
si1=4U;
si0+=si1;
si1=l6;
si2=288U;
si1+=si2;
si2=4U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l6;
si1=l6;
si1=i32_load(&i->m0,(U64)si1+289U);
i32_store(&i->m0,(U64)si0+201U,si1);
si0=l6;
si1=l8;
i32_store8(&i->m0,(U64)si0+200U,si1);
si0=l6;
si1=96U;
si0+=si1;
si1=l6;
si2=200U;
si1+=si2;
f578(i,si0,si1);
goto L13;
L17:;
si0=l6;
si0=i32_load(&i->m0,(U64)si0+76U);
l2=si0;
si0=l6;
si0=i32_load(&i->m0,(U64)si0+72U);
l1=si0;
si0=l6;
si0=i32_load(&i->m0,(U64)si0+144U);
l5=si0;
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l9=si0;
si1=l6;
sj1=i64_load(&i->m0,(U64)si1+136U);
l7=sj1;
si2=l9;
sj2=(U64)(si2);
l11=sj2;
sj3=l7;
sj4=l11;
si3=sj3 < sj4;
sj1=si3?sj1:sj2;
si1=(U32)(sj1);
l8=si1;
si0=si0 >= si1;
if(si0){
goto L16;
}
goto L6;
}
L15:;
si0=l6;
si1=200U;
si0+=si1;
si1=4U;
si0+=si1;
si1=l6;
si2=288U;
si1+=si2;
si2=4U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l6;
si1=l6;
si1=i32_load(&i->m0,(U64)si1+289U);
i32_store(&i->m0,(U64)si0+201U,si1);
si0=l6;
si1=l9;
i32_store8(&i->m0,(U64)si0+200U,si1);
si0=l6;
si1=96U;
si0+=si1;
si1=l6;
si2=200U;
si1+=si2;
f578(i,si0,si1);
goto L13;
L14:;
si0=l6;
si1=200U;
si0+=si1;
si1=4U;
si0+=si1;
si1=l6;
si2=288U;
si1+=si2;
si2=4U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l6;
si1=l6;
si1=i32_load(&i->m0,(U64)si1+289U);
i32_store(&i->m0,(U64)si0+201U,si1);
si0=l6;
si1=l8;
i32_store8(&i->m0,(U64)si0+200U,si1);
si0=l6;
si1=96U;
si0+=si1;
si1=l6;
si2=200U;
si1+=si2;
f578(i,si0,si1);
L13:;
si0=l6;
si0=i32_load(&i->m0,(U64)si0+164U);
si0=!(si0);
if(si0){
goto L90;
}
si0=l6;
si0=i32_load(&i->m0,(U64)si0+160U);
f15024(i,si0);
L90:;
si0=l6;
si0=i32_load8_u(&i->m0,(U64)si0+120U);
l8=si0;
si1=20U;
si0=si0 == si1;
if(si0){
goto L9;
}
si0=l0;
si1=l6;
si1=i32_load16_u(&i->m0,(U64)si1+121U);
i32_store16(&i->m0,(U64)si0+25U,si1);
si0=l6;
si1=200U;
si0+=si1;
si1=16U;
si0+=si1;
si1=l6;
si2=96U;
si1+=si2;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
l7=sj1;
i64_store(&i->m0,(U64)si0,sj1);
si0=l6;
si1=200U;
si0+=si1;
si1=8U;
si0+=si1;
si1=l6;
si2=96U;
si1+=si2;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
l11=sj1;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=27U;
si0+=si1;
si1=l6;
si2=96U;
si1+=si2;
si2=27U;
si1+=si2;
si1=i32_load8_u(&i->m0,(U64)si1);
i32_store8(&i->m0,(U64)si0,si1);
si0=l6;
si1=l6;
sj1=i64_load(&i->m0,(U64)si1+96U);
l12=sj1;
i64_store(&i->m0,(U64)si0+200U,sj1);
si0=l0;
si1=16U;
si0+=si1;
sj1=l7;
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
si1=l8;
i32_store8(&i->m0,(U64)si0+24U,si1);
goto L7;
L12:;
si0=1U;
si1=15U;
f52(i,si0,si1);
UNREACHABLE;
L11:;
si0=l3;
si1=144U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l8=si0;
si0=!(si0);
if(si0){
goto L99;
}
si0=l6;
si1=96U;
si0+=si1;
si1=l6;
si2=72U;
si1+=si2;
si2=l8;
si3=l3;
si4=148U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
f282(i,si0,si1,si2,si3);
si0=l6;
si0=i32_load8_u(&i->m0,(U64)si0+96U);
l8=si0;
si1=4U;
si0=si0 != si1;
if(si0){
goto L98;
}
si0=l6;
si1=96U;
si0+=si1;
si1=l6;
si1=i32_load(&i->m0,(U64)si1+72U);
si2=1086988U;
si3=2U;
si4=l6;
si4=i32_load(&i->m0,(U64)si4+76U);
si4=i32_load(&i->m0,(U64)si4+28U);
TF(i->t0,si4,void (*)(rustpythonInstance*,U32,U32,U32,U32))(i,si0,si1,si2,si3);
si0=l6;
si0=i32_load8_u(&i->m0,(U64)si0+96U);
l8=si0;
si1=4U;
si0=si0 != si1;
if(si0){
goto L97;
}
L99:;
si0=l6;
si1=96U;
si0+=si1;
si1=l6;
si2=72U;
si1+=si2;
si2=l3;
f275(i,si0,si1,si2);
si0=l6;
si0=i32_load8_u(&i->m0,(U64)si0+96U);
l8=si0;
si1=4U;
si0=si0 != si1;
if(si0){
goto L96;
}
si0=l6;
si1=96U;
si0+=si1;
si1=l6;
si1=i32_load(&i->m0,(U64)si1+72U);
l8=si1;
si2=1086528U;
si3=1U;
si4=l6;
si4=i32_load(&i->m0,(U64)si4+76U);
l9=si4;
si4=i32_load(&i->m0,(U64)si4+28U);
l1=si4;
TF(i->t0,si4,void (*)(rustpythonInstance*,U32,U32,U32,U32))(i,si0,si1,si2,si3);
si0=l6;
si0=i32_load8_u(&i->m0,(U64)si0+96U);
l5=si0;
si1=4U;
si0=si0 != si1;
if(si0){
goto L95;
}
si0=l3;
si1=104U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
if(si0){
goto L101;
}
si0=0U;
l2=si0;
si0=1085852U;
l5=si0;
goto L100;
L101:;
si0=l3;
si1=108U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
L100:;
si0=l6;
si1=212U;
si0+=si1;
sj1=1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l6;
si1=l2;
i32_store(&i->m0,(U64)si0+100U,si1);
si0=l6;
si1=l5;
i32_store(&i->m0,(U64)si0+96U,si1);
si0=l6;
si1=50U;
i32_store(&i->m0,(U64)si0+156U,si1);
si0=l6;
si1=1U;
i32_store(&i->m0,(U64)si0+204U,si1);
si0=l6;
si1=1086468U;
i32_store(&i->m0,(U64)si0+200U,si1);
si0=l6;
si1=l6;
si2=96U;
si1+=si2;
i32_store(&i->m0,(U64)si0+152U,si1);
si0=l6;
si1=l6;
si2=152U;
si1+=si2;
i32_store(&i->m0,(U64)si0+208U,si1);
si0=l6;
si1=264U;
si0+=si1;
si1=l8;
si2=l6;
si3=200U;
si2+=si3;
si3=l9;
si3=i32_load(&i->m0,(U64)si3+36U);
TF(i->t0,si3,void (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
si0=l6;
si0=i32_load8_u(&i->m0,(U64)si0+264U);
l5=si0;
si1=4U;
si0=si0 != si1;
if(si0){
goto L94;
}
si0=l6;
si1=96U;
si0+=si1;
si1=l8;
si2=1086476U;
si3=1U;
si4=l1;
TF(i->t0,si4,void (*)(rustpythonInstance*,U32,U32,U32,U32))(i,si0,si1,si2,si3);
si0=l6;
si0=i32_load8_u(&i->m0,(U64)si0+96U);
l5=si0;
si1=4U;
si0=si0 != si1;
if(si0){
goto L93;
}
si0=l3;
si1=96U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si0=!(si0);
if(si0){
goto L105;
}
si0=0U;
l1=si0;
si0=l6;
si1=16U;
si0+=si1;
si1=l3;
si2=100U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
l10=si1;
si2=0U;
f512(i,si0,si1,si2);
si0=l6;
si0=i32_load(&i->m0,(U64)si0+20U);
l19=si0;
si0=l6;
si0=i32_load(&i->m0,(U64)si0+16U);
si1=l5;
si2=l10;
si0=f15143(i,si0,si1,si2);
l2=si0;
si0=l6;
si1=0U;
i32_store(&i->m0,(U64)si0+160U,si1);
si0=l6;
sj1=1ULL;
i64_store(&i->m0,(U64)si0+152U,sj1);
si0=l6;
si1=200U;
si0+=si1;
si1=l2;
si2=l10;
si3=1086780U;
si4=3U;
f690(i,si0,si1,si2,si3,si4);
si0=l6;
si1=96U;
si0+=si1;
si1=l6;
si2=200U;
si1+=si2;
f272(i,si0,si1);
si0=l6;
si0=i32_load(&i->m0,(U64)si0+96U);
si0=!(si0);
if(si0){
goto L106;
}
si0=0U;
l5=si0;
L107:;
{
si0=l6;
si0=i32_load(&i->m0,(U64)si0+104U);
l1=si0;
si0=l6;
si0=i32_load(&i->m0,(U64)si0+156U);
si1=l6;
si1=i32_load(&i->m0,(U64)si1+160U);
l8=si1;
si0-=si1;
si1=l6;
si1=i32_load(&i->m0,(U64)si1+100U);
si2=l5;
si1-=si2;
l9=si1;
si0=si0 >= si1;
if(si0){
goto L108;
}
si0=l6;
si1=152U;
si0+=si1;
si1=l8;
si2=l9;
f530(i,si0,si1,si2);
si0=l6;
si0=i32_load(&i->m0,(U64)si0+160U);
l8=si0;
L108:;
si0=l6;
si0=i32_load(&i->m0,(U64)si0+152U);
si1=l8;
si0+=si1;
si1=l2;
si2=l5;
si1+=si2;
si2=l9;
si0=f15143(i,si0,si1,si2);
si0=l6;
si1=l8;
si2=l9;
si1+=si2;
l8=si1;
i32_store(&i->m0,(U64)si0+160U,si1);
si0=l6;
si0=i32_load(&i->m0,(U64)si0+156U);
si1=l8;
si0=si0 != si1;
if(si0){
goto L109;
}
si0=l6;
si1=152U;
si0+=si1;
si1=l8;
si2=1U;
f530(i,si0,si1,si2);
si0=l6;
si0=i32_load(&i->m0,(U64)si0+160U);
l8=si0;
L109:;
si0=l6;
si0=i32_load(&i->m0,(U64)si0+152U);
si1=l8;
si0+=si1;
si1=10U;
i32_store8(&i->m0,(U64)si0,si1);
si0=l6;
si1=l8;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0+160U,si1);
si0=l6;
si1=96U;
si0+=si1;
si1=l6;
si2=200U;
si1+=si2;
f272(i,si0,si1);
si0=l1;
l5=si0;
si0=l6;
si0=i32_load(&i->m0,(U64)si0+96U);
if(si0){
goto L107;
}
}
L106:;
si0=l6;
si1=152U;
si0+=si1;
si1=l2;
si2=l1;
si1+=si2;
si2=l10;
si3=l1;
si2-=si3;
f229(i,si0,si1,si2);
si0=l6;
si0=i32_load(&i->m0,(U64)si0+160U);
l5=si0;
si0=l6;
si0=i32_load(&i->m0,(U64)si0+156U);
l10=si0;
si0=l6;
si0=i32_load(&i->m0,(U64)si0+152U);
l1=si0;
si0=l19;
si0=!(si0);
if(si0){
goto L110;
}
si0=l2;
f15024(i,si0);
L110:;
si0=l6;
si0=i32_load(&i->m0,(U64)si0+72U);
l8=si0;
si0=l6;
si0=i32_load(&i->m0,(U64)si0+76U);
l9=si0;
si0=l6;
si0=i32_load(&i->m0,(U64)si0+80U);
l2=si0;
si0=l6;
si1=108U;
si0+=si1;
l19=si0;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l6;
si1=0U;
i32_store8(&i->m0,(U64)si0+116U,si1);
si0=l6;
si1=17684584U;
i32_store(&i->m0,(U64)si0+104U,si1);
si0=l6;
si1=0U;
i32_store(&i->m0,(U64)si0+100U,si1);
si0=l6;
si1=17684584U;
i32_store(&i->m0,(U64)si0+96U,si1);
si0=l6;
si1=l2;
i32_store(&i->m0,(U64)si0+112U,si1);
si0=l6;
si1=0U;
i32_store16(&i->m0,(U64)si0+236U,si1);
si0=l6;
si1=l5;
i32_store(&i->m0,(U64)si0+232U,si1);
si0=l6;
si1=0U;
i32_store(&i->m0,(U64)si0+228U,si1);
si0=l6;
sj1=42949672961ULL;
i64_store(&i->m0,(U64)si0+220U,sj1);
si0=l6;
si1=l5;
i32_store(&i->m0,(U64)si0+216U,si1);
si0=l6;
si1=0U;
i32_store(&i->m0,(U64)si0+212U,si1);
si0=l6;
si1=l5;
i32_store(&i->m0,(U64)si0+208U,si1);
si0=l6;
si1=l1;
i32_store(&i->m0,(U64)si0+204U,si1);
si0=l6;
si1=10U;
i32_store(&i->m0,(U64)si0+200U,si1);
si0=l6;
si1=l6;
si2=96U;
si1+=si2;
i32_store(&i->m0,(U64)si0+240U,si1);
si0=l6;
si1=152U;
si0+=si1;
si1=l6;
si2=200U;
si1+=si2;
f246(i,si0,si1);
si0=l6;
si1=264U;
si0+=si1;
si1=l6;
si1=i32_load(&i->m0,(U64)si1+152U);
l5=si1;
si2=l6;
si2=i32_load(&i->m0,(U64)si2+160U);
si3=1086476U;
si4=1U;
f437(i,si0,si1,si2,si3,si4);
si0=l6;
si1=152U;
si0+=si1;
f239(i,si0);
si0=l6;
si0=i32_load(&i->m0,(U64)si0+156U);
si0=!(si0);
if(si0){
goto L111;
}
si0=l5;
f15024(i,si0);
L111:;
si0=l19;
sj1=1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l6;
si1=154U;
i32_store(&i->m0,(U64)si0+180U,si1);
si0=l6;
si1=2U;
i32_store(&i->m0,(U64)si0+100U,si1);
si0=l6;
si1=1087172U;
i32_store(&i->m0,(U64)si0+96U,si1);
si0=l6;
si1=l6;
si2=264U;
si1+=si2;
i32_store(&i->m0,(U64)si0+176U,si1);
si0=l6;
si1=l6;
si2=176U;
si1+=si2;
i32_store(&i->m0,(U64)si0+104U,si1);
si0=l6;
si1=136U;
si0+=si1;
si1=l8;
si2=l6;
si3=96U;
si2+=si3;
si3=l9;
si3=i32_load(&i->m0,(U64)si3+36U);
TF(i->t0,si3,void (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
si0=l6;
si0=i32_load8_u(&i->m0,(U64)si0+136U);
l5=si0;
si1=4U;
si0=si0 != si1;
if(si0){
goto L104;
}
si0=l10;
si0=!(si0);
if(si0){
goto L112;
}
si0=l1;
f15024(i,si0);
L112:;
si0=l6;
si0=i32_load(&i->m0,(U64)si0+268U);
si0=!(si0);
if(si0){
goto L105;
}
si0=l6;
si0=i32_load(&i->m0,(U64)si0+264U);
f15024(i,si0);
L105:;
si0=l3;
si1=128U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si0=!(si0);
if(si0){
goto L102;
}
si0=0U;
l1=si0;
si0=l6;
si1=8U;
si0+=si1;
si1=l3;
si2=132U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
l10=si1;
si2=0U;
f512(i,si0,si1,si2);
si0=l6;
si0=i32_load(&i->m0,(U64)si0+12U);
l19=si0;
si0=l6;
si0=i32_load(&i->m0,(U64)si0+8U);
si1=l5;
si2=l10;
si0=f15143(i,si0,si1,si2);
l2=si0;
si0=l6;
si1=0U;
i32_store(&i->m0,(U64)si0+160U,si1);
si0=l6;
sj1=1ULL;
i64_store(&i->m0,(U64)si0+152U,sj1);
si0=l6;
si1=200U;
si0+=si1;
si1=l2;
si2=l10;
si3=1086780U;
si4=3U;
f690(i,si0,si1,si2,si3,si4);
si0=l6;
si1=96U;
si0+=si1;
si1=l6;
si2=200U;
si1+=si2;
f272(i,si0,si1);
si0=l6;
si0=i32_load(&i->m0,(U64)si0+96U);
si0=!(si0);
if(si0){
goto L113;
}
si0=0U;
l5=si0;
L114:;
{
si0=l6;
si0=i32_load(&i->m0,(U64)si0+104U);
l1=si0;
si0=l6;
si0=i32_load(&i->m0,(U64)si0+156U);
si1=l6;
si1=i32_load(&i->m0,(U64)si1+160U);
l8=si1;
si0-=si1;
si1=l6;
si1=i32_load(&i->m0,(U64)si1+100U);
si2=l5;
si1-=si2;
l9=si1;
si0=si0 >= si1;
if(si0){
goto L115;
}
si0=l6;
si1=152U;
si0+=si1;
si1=l8;
si2=l9;
f530(i,si0,si1,si2);
si0=l6;
si0=i32_load(&i->m0,(U64)si0+160U);
l8=si0;
L115:;
si0=l6;
si0=i32_load(&i->m0,(U64)si0+152U);
si1=l8;
si0+=si1;
si1=l2;
si2=l5;
si1+=si2;
si2=l9;
si0=f15143(i,si0,si1,si2);
si0=l6;
si1=l8;
si2=l9;
si1+=si2;
l8=si1;
i32_store(&i->m0,(U64)si0+160U,si1);
si0=l6;
si0=i32_load(&i->m0,(U64)si0+156U);
si1=l8;
si0=si0 != si1;
if(si0){
goto L116;
}
si0=l6;
si1=152U;
si0+=si1;
si1=l8;
si2=1U;
f530(i,si0,si1,si2);
si0=l6;
si0=i32_load(&i->m0,(U64)si0+160U);
l8=si0;
L116:;
si0=l6;
si0=i32_load(&i->m0,(U64)si0+152U);
si1=l8;
si0+=si1;
si1=10U;
i32_store8(&i->m0,(U64)si0,si1);
si0=l6;
si1=l8;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0+160U,si1);
si0=l6;
si1=96U;
si0+=si1;
si1=l6;
si2=200U;
si1+=si2;
f272(i,si0,si1);
si0=l1;
l5=si0;
si0=l6;
si0=i32_load(&i->m0,(U64)si0+96U);
if(si0){
goto L114;
}
}
L113:;
si0=l6;
si1=152U;
si0+=si1;
si1=l2;
si2=l1;
si1+=si2;
si2=l10;
si3=l1;
si2-=si3;
f229(i,si0,si1,si2);
si0=l6;
si0=i32_load(&i->m0,(U64)si0+160U);
l5=si0;
si0=l6;
si0=i32_load(&i->m0,(U64)si0+156U);
l10=si0;
si0=l6;
si0=i32_load(&i->m0,(U64)si0+152U);
l1=si0;
si0=l19;
si0=!(si0);
if(si0){
goto L117;
}
si0=l2;
f15024(i,si0);
L117:;
si0=l6;
si0=i32_load(&i->m0,(U64)si0+72U);
l8=si0;
si0=l6;
si0=i32_load(&i->m0,(U64)si0+76U);
l9=si0;
si0=l6;
si0=i32_load(&i->m0,(U64)si0+80U);
l2=si0;
si0=l6;
si1=108U;
si0+=si1;
l19=si0;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l6;
si1=0U;
i32_store8(&i->m0,(U64)si0+116U,si1);
si0=l6;
si1=17684584U;
i32_store(&i->m0,(U64)si0+104U,si1);
si0=l6;
si1=0U;
i32_store(&i->m0,(U64)si0+100U,si1);
si0=l6;
si1=17684584U;
i32_store(&i->m0,(U64)si0+96U,si1);
si0=l6;
si1=l2;
i32_store(&i->m0,(U64)si0+112U,si1);
si0=l6;
si1=0U;
i32_store16(&i->m0,(U64)si0+236U,si1);
si0=l6;
si1=l5;
i32_store(&i->m0,(U64)si0+232U,si1);
si0=l6;
si1=0U;
i32_store(&i->m0,(U64)si0+228U,si1);
si0=l6;
sj1=42949672961ULL;
i64_store(&i->m0,(U64)si0+220U,sj1);
si0=l6;
si1=l5;
i32_store(&i->m0,(U64)si0+216U,si1);
si0=l6;
si1=0U;
i32_store(&i->m0,(U64)si0+212U,si1);
si0=l6;
si1=l5;
i32_store(&i->m0,(U64)si0+208U,si1);
si0=l6;
si1=l1;
i32_store(&i->m0,(U64)si0+204U,si1);
si0=l6;
si1=10U;
i32_store(&i->m0,(U64)si0+200U,si1);
si0=l6;
si1=l6;
si2=96U;
si1+=si2;
i32_store(&i->m0,(U64)si0+240U,si1);
si0=l6;
si1=152U;
si0+=si1;
si1=l6;
si2=200U;
si1+=si2;
f246(i,si0,si1);
si0=l6;
si1=264U;
si0+=si1;
si1=l6;
si1=i32_load(&i->m0,(U64)si1+152U);
l5=si1;
si2=l6;
si2=i32_load(&i->m0,(U64)si2+160U);
si3=1086476U;
si4=1U;
f437(i,si0,si1,si2,si3,si4);
si0=l6;
si1=152U;
si0+=si1;
f239(i,si0);
si0=l6;
si0=i32_load(&i->m0,(U64)si0+156U);
si0=!(si0);
if(si0){
goto L118;
}
si0=l5;
f15024(i,si0);
L118:;
si0=l19;
sj1=1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l6;
si1=154U;
i32_store(&i->m0,(U64)si0+180U,si1);
si0=l6;
si1=2U;
i32_store(&i->m0,(U64)si0+100U,si1);
si0=l6;
si1=1087172U;
i32_store(&i->m0,(U64)si0+96U,si1);
si0=l6;
si1=l6;
si2=264U;
si1+=si2;
i32_store(&i->m0,(U64)si0+176U,si1);
si0=l6;
si1=l6;
si2=176U;
si1+=si2;
i32_store(&i->m0,(U64)si0+104U,si1);
si0=l6;
si1=136U;
si0+=si1;
si1=l8;
si2=l6;
si3=96U;
si2+=si3;
si3=l9;
si3=i32_load(&i->m0,(U64)si3+36U);
TF(i->t0,si3,void (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
si0=l6;
si0=i32_load8_u(&i->m0,(U64)si0+136U);
l5=si0;
si1=4U;
si0=si0 != si1;
if(si0){
goto L103;
}
si0=l10;
si0=!(si0);
if(si0){
goto L119;
}
si0=l1;
f15024(i,si0);
L119:;
si0=l6;
si0=i32_load(&i->m0,(U64)si0+268U);
si0=!(si0);
if(si0){
goto L92;
}
si0=l6;
si0=i32_load(&i->m0,(U64)si0+264U);
f15024(i,si0);
goto L92;
L104:;
si0=l6;
si1=200U;
si0+=si1;
si1=4U;
si0+=si1;
si1=l6;
si2=136U;
si1+=si2;
si2=4U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l6;
si1=l6;
si1=i32_load(&i->m0,(U64)si1+137U);
i32_store(&i->m0,(U64)si0+201U,si1);
si0=l6;
si1=l5;
i32_store8(&i->m0,(U64)si0+200U,si1);
si0=l6;
si1=288U;
si0+=si1;
si1=l6;
si2=200U;
si1+=si2;
f578(i,si0,si1);
si0=l10;
si0=!(si0);
if(si0){
goto L120;
}
si0=l1;
f15024(i,si0);
L120:;
si0=l6;
si0=i32_load(&i->m0,(U64)si0+268U);
si0=!(si0);
if(si0){
goto L91;
}
si0=l6;
si0=i32_load(&i->m0,(U64)si0+264U);
f15024(i,si0);
goto L91;
L103:;
si0=l6;
si1=200U;
si0+=si1;
si1=4U;
si0+=si1;
si1=l6;
si2=136U;
si1+=si2;
si2=4U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l6;
si1=l6;
si1=i32_load(&i->m0,(U64)si1+137U);
i32_store(&i->m0,(U64)si0+201U,si1);
si0=l6;
si1=l5;
i32_store8(&i->m0,(U64)si0+200U,si1);
si0=l6;
si1=288U;
si0+=si1;
si1=l6;
si2=200U;
si1+=si2;
f578(i,si0,si1);
si0=l10;
si0=!(si0);
if(si0){
goto L121;
}
si0=l1;
f15024(i,si0);
L121:;
si0=l6;
si0=i32_load(&i->m0,(U64)si0+268U);
si0=!(si0);
if(si0){
goto L91;
}
si0=l6;
si0=i32_load(&i->m0,(U64)si0+264U);
f15024(i,si0);
goto L91;
L102:;
si0=l3;
si1=120U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si0=!(si0);
if(si0){
goto L92;
}
si0=0U;
l1=si0;
si0=l6;
si1=l3;
si2=124U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
l10=si1;
si2=0U;
f512(i,si0,si1,si2);
si0=l6;
si0=i32_load(&i->m0,(U64)si0+4U);
l19=si0;
si0=l6;
si0=i32_load(&i->m0,(U64)si0);
si1=l5;
si2=l10;
si0=f15143(i,si0,si1,si2);
l2=si0;
si0=l6;
si1=0U;
i32_store(&i->m0,(U64)si0+160U,si1);
si0=l6;
sj1=1ULL;
i64_store(&i->m0,(U64)si0+152U,sj1);
si0=l6;
si1=200U;
si0+=si1;
si1=l2;
si2=l10;
si3=1086780U;
si4=3U;
f690(i,si0,si1,si2,si3,si4);
si0=l6;
si1=96U;
si0+=si1;
si1=l6;
si2=200U;
si1+=si2;
f272(i,si0,si1);
si0=l6;
si0=i32_load(&i->m0,(U64)si0+96U);
si0=!(si0);
if(si0){
goto L122;
}
si0=0U;
l5=si0;
L123:;
{
si0=l6;
si0=i32_load(&i->m0,(U64)si0+104U);
l1=si0;
si0=l6;
si0=i32_load(&i->m0,(U64)si0+156U);
si1=l6;
si1=i32_load(&i->m0,(U64)si1+160U);
l8=si1;
si0-=si1;
si1=l6;
si1=i32_load(&i->m0,(U64)si1+100U);
si2=l5;
si1-=si2;
l9=si1;
si0=si0 >= si1;
if(si0){
goto L124;
}
si0=l6;
si1=152U;
si0+=si1;
si1=l8;
si2=l9;
f530(i,si0,si1,si2);
si0=l6;
si0=i32_load(&i->m0,(U64)si0+160U);
l8=si0;
L124:;
si0=l6;
si0=i32_load(&i->m0,(U64)si0+152U);
si1=l8;
si0+=si1;
si1=l2;
si2=l5;
si1+=si2;
si2=l9;
si0=f15143(i,si0,si1,si2);
si0=l6;
si1=l8;
si2=l9;
si1+=si2;
l8=si1;
i32_store(&i->m0,(U64)si0+160U,si1);
si0=l6;
si0=i32_load(&i->m0,(U64)si0+156U);
si1=l8;
si0=si0 != si1;
if(si0){
goto L125;
}
si0=l6;
si1=152U;
si0+=si1;
si1=l8;
si2=1U;
f530(i,si0,si1,si2);
si0=l6;
si0=i32_load(&i->m0,(U64)si0+160U);
l8=si0;
L125:;
si0=l6;
si0=i32_load(&i->m0,(U64)si0+152U);
si1=l8;
si0+=si1;
si1=10U;
i32_store8(&i->m0,(U64)si0,si1);
si0=l6;
si1=l8;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0+160U,si1);
si0=l6;
si1=96U;
si0+=si1;
si1=l6;
si2=200U;
si1+=si2;
f272(i,si0,si1);
si0=l1;
l5=si0;
si0=l6;
si0=i32_load(&i->m0,(U64)si0+96U);
if(si0){
goto L123;
}
}
L122:;
si0=l6;
si1=152U;
si0+=si1;
si1=l2;
si2=l1;
si1+=si2;
si2=l10;
si3=l1;
si2-=si3;
f229(i,si0,si1,si2);
si0=l6;
si0=i32_load(&i->m0,(U64)si0+160U);
l5=si0;
si0=l6;
si0=i32_load(&i->m0,(U64)si0+156U);
l10=si0;
si0=l6;
si0=i32_load(&i->m0,(U64)si0+152U);
l1=si0;
si0=l19;
si0=!(si0);
if(si0){
goto L126;
}
si0=l2;
f15024(i,si0);
L126:;
si0=l6;
si0=i32_load(&i->m0,(U64)si0+72U);
l8=si0;
si0=l6;
si0=i32_load(&i->m0,(U64)si0+76U);
l9=si0;
si0=l6;
si0=i32_load(&i->m0,(U64)si0+80U);
l2=si0;
si0=l6;
si1=108U;
si0+=si1;
l19=si0;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l6;
si1=0U;
i32_store8(&i->m0,(U64)si0+116U,si1);
si0=l6;
si1=17684584U;
i32_store(&i->m0,(U64)si0+104U,si1);
si0=l6;
si1=0U;
i32_store(&i->m0,(U64)si0+100U,si1);
si0=l6;
si1=17684584U;
i32_store(&i->m0,(U64)si0+96U,si1);
si0=l6;
si1=l2;
i32_store(&i->m0,(U64)si0+112U,si1);
si0=l6;
si1=0U;
i32_store16(&i->m0,(U64)si0+236U,si1);
si0=l6;
si1=l5;
i32_store(&i->m0,(U64)si0+232U,si1);
si0=l6;
si1=0U;
i32_store(&i->m0,(U64)si0+228U,si1);
si0=l6;
sj1=42949672961ULL;
i64_store(&i->m0,(U64)si0+220U,sj1);
si0=l6;
si1=l5;
i32_store(&i->m0,(U64)si0+216U,si1);
si0=l6;
si1=0U;
i32_store(&i->m0,(U64)si0+212U,si1);
si0=l6;
si1=l5;
i32_store(&i->m0,(U64)si0+208U,si1);
si0=l6;
si1=l1;
i32_store(&i->m0,(U64)si0+204U,si1);
si0=l6;
si1=10U;
i32_store(&i->m0,(U64)si0+200U,si1);
si0=l6;
si1=l6;
si2=96U;
si1+=si2;
i32_store(&i->m0,(U64)si0+240U,si1);
si0=l6;
si1=152U;
si0+=si1;
si1=l6;
si2=200U;
si1+=si2;
f246(i,si0,si1);
si0=l6;
si1=264U;
si0+=si1;
si1=l6;
si1=i32_load(&i->m0,(U64)si1+152U);
l5=si1;
si2=l6;
si2=i32_load(&i->m0,(U64)si2+160U);
si3=1086476U;
si4=1U;
f437(i,si0,si1,si2,si3,si4);
si0=l6;
si1=152U;
si0+=si1;
f239(i,si0);
si0=l6;
si0=i32_load(&i->m0,(U64)si0+156U);
si0=!(si0);
if(si0){
goto L127;
}
si0=l5;
f15024(i,si0);
L127:;
si0=l19;
sj1=1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l6;
si1=154U;
i32_store(&i->m0,(U64)si0+180U,si1);
si0=l6;
si1=2U;
i32_store(&i->m0,(U64)si0+100U,si1);
si0=l6;
si1=1087172U;
i32_store(&i->m0,(U64)si0+96U,si1);
si0=l6;
si1=l6;
si2=264U;
si1+=si2;
i32_store(&i->m0,(U64)si0+176U,si1);
si0=l6;
si1=l6;
si2=176U;
si1+=si2;
i32_store(&i->m0,(U64)si0+104U,si1);
si0=l6;
si1=136U;
si0+=si1;
si1=l8;
si2=l6;
si3=96U;
si2+=si3;
si3=l9;
si3=i32_load(&i->m0,(U64)si3+36U);
TF(i->t0,si3,void (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
si0=l6;
si0=i32_load8_u(&i->m0,(U64)si0+136U);
l5=si0;
si1=4U;
si0=si0 != si1;
if(si0){
goto L128;
}
si0=l10;
si0=!(si0);
if(si0){
goto L129;
}
si0=l1;
f15024(i,si0);
L129:;
si0=l6;
si0=i32_load(&i->m0,(U64)si0+268U);
si0=!(si0);
if(si0){
goto L92;
}
si0=l6;
si0=i32_load(&i->m0,(U64)si0+264U);
f15024(i,si0);
goto L92;
L128:;
si0=l6;
si1=200U;
si0+=si1;
si1=4U;
si0+=si1;
si1=l6;
si2=136U;
si1+=si2;
si2=4U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l6;
si1=l6;
si1=i32_load(&i->m0,(U64)si1+137U);
i32_store(&i->m0,(U64)si0+201U,si1);
si0=l6;
si1=l5;
i32_store8(&i->m0,(U64)si0+200U,si1);
si0=l6;
si1=288U;
si0+=si1;
si1=l6;
si2=200U;
si1+=si2;
f578(i,si0,si1);
si0=l10;
si0=!(si0);
if(si0){
goto L130;
}
si0=l1;
f15024(i,si0);
L130:;
si0=l6;
si0=i32_load(&i->m0,(U64)si0+268U);
si0=!(si0);
if(si0){
goto L91;
}
si0=l6;
si0=i32_load(&i->m0,(U64)si0+264U);
f15024(i,si0);
goto L91;
L98:;
si0=l6;
si1=200U;
si0+=si1;
si1=4U;
si0+=si1;
si1=l6;
si2=96U;
si1+=si2;
si2=4U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l6;
si1=l6;
si1=i32_load(&i->m0,(U64)si1+97U);
i32_store(&i->m0,(U64)si0+201U,si1);
si0=l6;
si1=l8;
i32_store8(&i->m0,(U64)si0+200U,si1);
si0=l6;
si1=288U;
si0+=si1;
si1=l6;
si2=200U;
si1+=si2;
f578(i,si0,si1);
goto L91;
L97:;
si0=l6;
si1=200U;
si0+=si1;
si1=4U;
si0+=si1;
si1=l6;
si2=96U;
si1+=si2;
si2=4U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l6;
si1=l6;
si1=i32_load(&i->m0,(U64)si1+97U);
i32_store(&i->m0,(U64)si0+201U,si1);
si0=l6;
si1=l8;
i32_store8(&i->m0,(U64)si0+200U,si1);
si0=l6;
si1=288U;
si0+=si1;
si1=l6;
si2=200U;
si1+=si2;
f578(i,si0,si1);
goto L91;
L96:;
si0=l6;
si1=200U;
si0+=si1;
si1=4U;
si0+=si1;
si1=l6;
si2=96U;
si1+=si2;
si2=4U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l6;
si1=l6;
si1=i32_load(&i->m0,(U64)si1+97U);
i32_store(&i->m0,(U64)si0+201U,si1);
si0=l6;
si1=l8;
i32_store8(&i->m0,(U64)si0+200U,si1);
si0=l6;
si1=288U;
si0+=si1;
si1=l6;
si2=200U;
si1+=si2;
f578(i,si0,si1);
goto L91;
L95:;
si0=l6;
si1=200U;
si0+=si1;
si1=4U;
si0+=si1;
si1=l6;
si2=96U;
si1+=si2;
si2=4U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l6;
si1=l6;
si1=i32_load(&i->m0,(U64)si1+97U);
i32_store(&i->m0,(U64)si0+201U,si1);
si0=l6;
si1=l5;
i32_store8(&i->m0,(U64)si0+200U,si1);
si0=l6;
si1=288U;
si0+=si1;
si1=l6;
si2=200U;
si1+=si2;
f578(i,si0,si1);
goto L91;
L94:;
si0=l6;
si1=200U;
si0+=si1;
si1=4U;
si0+=si1;
si1=l6;
si2=264U;
si1+=si2;
si2=4U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l6;
si1=l6;
si1=i32_load(&i->m0,(U64)si1+265U);
i32_store(&i->m0,(U64)si0+201U,si1);
si0=l6;
si1=l5;
i32_store8(&i->m0,(U64)si0+200U,si1);
si0=l6;
si1=288U;
si0+=si1;
si1=l6;
si2=200U;
si1+=si2;
f578(i,si0,si1);
goto L91;
L93:;
si0=l6;
si1=200U;
si0+=si1;
si1=4U;
si0+=si1;
si1=l6;
si2=96U;
si1+=si2;
si2=4U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l6;
si1=l6;
si1=i32_load(&i->m0,(U64)si1+97U);
i32_store(&i->m0,(U64)si0+201U,si1);
si0=l6;
si1=l5;
i32_store8(&i->m0,(U64)si0+200U,si1);
si0=l6;
si1=288U;
si0+=si1;
si1=l6;
si2=200U;
si1+=si2;
f578(i,si0,si1);
goto L91;
L92:;
si0=l6;
si0=i32_load8_u(&i->m0,(U64)si0+91U);
if(si0){
goto L132;
}
si0=l6;
si1=212U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l6;
si1=1U;
i32_store(&i->m0,(U64)si0+204U,si1);
si0=l6;
si1=1087196U;
i32_store(&i->m0,(U64)si0+200U,si1);
si0=l6;
si1=l6;
si2=332U;
si1+=si2;
i32_store(&i->m0,(U64)si0+208U,si1);
si0=l6;
si1=264U;
si0+=si1;
si1=l8;
si2=l6;
si3=200U;
si2+=si3;
si3=l9;
si3=i32_load(&i->m0,(U64)si3+36U);
l5=si3;
TF(i->t0,si3,void (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
goto L131;
L132:;
si0=l6;
si0=i32_load8_u(&i->m0,(U64)si0+88U);
switch(si0){
case 0:
goto L136;
case 1:
goto L135;
case 2:
goto L134;
default:
goto L136;
}
L136:;
si0=l6;
si1=104U;
si0+=si1;
si1=7U;
i32_store(&i->m0,(U64)si0,si1);
si0=l6;
si1=1087188U;
i32_store(&i->m0,(U64)si0+100U,si1);
si0=l6;
si1=1U;
i32_store(&i->m0,(U64)si0+96U,si1);
goto L133;
L135:;
si0=l6;
si1=104U;
si0+=si1;
si1=7U;
i32_store(&i->m0,(U64)si0,si1);
si0=l6;
si1=1087188U;
i32_store(&i->m0,(U64)si0+100U,si1);
si0=l6;
si1=1U;
i32_store(&i->m0,(U64)si0+96U,si1);
goto L133;
L134:;
si0=l6;
si1=104U;
si0+=si1;
si1=7U;
i32_store(&i->m0,(U64)si0,si1);
si0=l6;
si1=1087188U;
i32_store(&i->m0,(U64)si0+100U,si1);
si0=l6;
si1=3U;
i32_store(&i->m0,(U64)si0+96U,si1);
L133:;
si0=l6;
si1=212U;
si0+=si1;
sj1=1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l6;
si1=155U;
i32_store(&i->m0,(U64)si0+156U,si1);
si0=l6;
si1=1U;
i32_store(&i->m0,(U64)si0+204U,si1);
si0=l6;
si1=1086468U;
i32_store(&i->m0,(U64)si0+200U,si1);
si0=l6;
si1=l6;
si2=96U;
si1+=si2;
i32_store(&i->m0,(U64)si0+152U,si1);
si0=l6;
si1=l6;
si2=152U;
si1+=si2;
i32_store(&i->m0,(U64)si0+208U,si1);
si0=l6;
si1=264U;
si0+=si1;
si1=l8;
si2=l6;
si3=200U;
si2+=si3;
si3=l9;
si3=i32_load(&i->m0,(U64)si3+36U);
l5=si3;
TF(i->t0,si3,void (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
L131:;
si0=l6;
si0=i32_load8_u(&i->m0,(U64)si0+264U);
l1=si0;
si1=4U;
si0=si0 != si1;
if(si0){
goto L141;
}
si0=l6;
si1=152U;
si0+=si1;
si1=l3;
si2=1085852U;
si3=0U;
f585(i,si0,si1,si2,si3);
si0=l6;
si1=96U;
si0+=si1;
si1=12U;
si0+=si1;
si1=154U;
i32_store(&i->m0,(U64)si0,si1);
si0=l6;
si1=200U;
si0+=si1;
si1=12U;
si0+=si1;
sj1=2ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l6;
si1=50U;
i32_store(&i->m0,(U64)si0+100U,si1);
si0=l6;
si1=1086484U;
i32_store(&i->m0,(U64)si0+96U,si1);
si0=l6;
si1=3U;
i32_store(&i->m0,(U64)si0+204U,si1);
si0=l6;
si1=1087204U;
i32_store(&i->m0,(U64)si0+200U,si1);
si0=l6;
si1=l6;
si2=152U;
si1+=si2;
i32_store(&i->m0,(U64)si0+104U,si1);
si0=l6;
si1=l6;
si2=96U;
si1+=si2;
i32_store(&i->m0,(U64)si0+208U,si1);
si0=l6;
si1=264U;
si0+=si1;
si1=l8;
si2=l6;
si3=200U;
si2+=si3;
si3=l5;
TF(i->t0,si3,void (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
si0=l6;
si0=i32_load8_u(&i->m0,(U64)si0+264U);
l5=si0;
si1=4U;
si0=si0 != si1;
if(si0){
goto L143;
}
si0=l6;
si0=i32_load(&i->m0,(U64)si0+156U);
si0=!(si0);
if(si0){
goto L144;
}
si0=l6;
si0=i32_load(&i->m0,(U64)si0+152U);
f15024(i,si0);
L144:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+12U);
si1=l3;
si2=220U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
si0|=si1;
si1=l3;
si2=232U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
si0|=si1;
si1=l3;
si2=244U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
si0|=si1;
if(si0){
goto L142;
}
si0=l3;
si1=136U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si0=!(si0);
if(si0){
goto L138;
}
si0=l3;
si1=140U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
goto L139;
L143:;
si0=l6;
si1=200U;
si0+=si1;
si1=4U;
si0+=si1;
si1=l6;
si2=264U;
si1+=si2;
si2=4U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l6;
si1=l6;
si1=i32_load(&i->m0,(U64)si1+265U);
i32_store(&i->m0,(U64)si0+201U,si1);
si0=l6;
si1=l5;
i32_store8(&i->m0,(U64)si0+200U,si1);
si0=l6;
si1=288U;
si0+=si1;
si1=l6;
si2=200U;
si1+=si2;
f578(i,si0,si1);
si0=l6;
si0=i32_load(&i->m0,(U64)si0+156U);
si0=!(si0);
if(si0){
goto L91;
}
si0=l6;
si0=i32_load(&i->m0,(U64)si0+152U);
f15024(i,si0);
goto L91;
L142:;
si0=l6;
si1=200U;
si0+=si1;
si1=l6;
si2=72U;
si1+=si2;
si2=l3;
f279(i,si0,si1,si2);
si0=l6;
si0=i32_load8_u(&i->m0,(U64)si0+224U);
l8=si0;
si1=20U;
si0=si0 == si1;
if(si0){
goto L140;
}
si0=l6;
si1=288U;
si0+=si1;
si1=16U;
si0+=si1;
si1=l6;
si2=200U;
si1+=si2;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l6;
si1=288U;
si0+=si1;
si1=8U;
si0+=si1;
si1=l6;
si2=200U;
si1+=si2;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l6;
si1=288U;
si0+=si1;
si1=27U;
si0+=si1;
si1=l6;
si2=200U;
si1+=si2;
si2=27U;
si1+=si2;
si1=i32_load8_u(&i->m0,(U64)si1);
i32_store8(&i->m0,(U64)si0,si1);
si0=l6;
si1=l6;
sj1=i64_load(&i->m0,(U64)si1+200U);
i64_store(&i->m0,(U64)si0+288U,sj1);
si0=l6;
si1=l6;
si1=i32_load16_u(&i->m0,(U64)si1+225U);
i32_store16(&i->m0,(U64)si0+313U,si1);
si0=l6;
si1=l8;
i32_store8(&i->m0,(U64)si0+312U,si1);
goto L91;
L141:;
si0=l6;
si1=200U;
si0+=si1;
si1=4U;
si0+=si1;
si1=l6;
si2=264U;
si1+=si2;
si2=4U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l6;
si1=l6;
si1=i32_load(&i->m0,(U64)si1+265U);
i32_store(&i->m0,(U64)si0+201U,si1);
si0=l6;
si1=l1;
i32_store8(&i->m0,(U64)si0+200U,si1);
si0=l6;
si1=288U;
si0+=si1;
si1=l6;
si2=200U;
si1+=si2;
f578(i,si0,si1);
goto L91;
L140:;
si0=l6;
si0=i32_load(&i->m0,(U64)si0+76U);
l9=si0;
si0=l6;
si0=i32_load(&i->m0,(U64)si0+72U);
l8=si0;
si0=l3;
si1=136U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si0=!(si0);
if(si0){
goto L138;
}
si0=l3;
si1=140U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si0=l6;
si1=96U;
si0+=si1;
si1=l8;
si2=1086988U;
si3=2U;
si4=l9;
si4=i32_load(&i->m0,(U64)si4+28U);
TF(i->t0,si4,void (*)(rustpythonInstance*,U32,U32,U32,U32))(i,si0,si1,si2,si3);
si0=l6;
si0=i32_load8_u(&i->m0,(U64)si0+96U);
l8=si0;
si1=4U;
si0=si0 == si1;
if(si0){
goto L139;
}
si0=l6;
si1=200U;
si0+=si1;
si1=4U;
si0+=si1;
si1=l6;
si2=96U;
si1+=si2;
si2=4U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l6;
si1=l6;
si1=i32_load(&i->m0,(U64)si1+97U);
i32_store(&i->m0,(U64)si0+201U,si1);
si0=l6;
si1=l8;
i32_store8(&i->m0,(U64)si0+200U,si1);
si0=l6;
si1=288U;
si0+=si1;
si1=l6;
si2=200U;
si1+=si2;
f578(i,si0,si1);
goto L91;
L139:;
si0=l6;
si1=96U;
si0+=si1;
si1=l6;
si2=72U;
si1+=si2;
si2=l5;
si3=l1;
f282(i,si0,si1,si2,si3);
si0=l6;
si0=i32_load8_u(&i->m0,(U64)si0+96U);
l8=si0;
si1=4U;
si0=si0 != si1;
if(si0){
goto L137;
}
si0=l6;
si0=i32_load(&i->m0,(U64)si0+76U);
l9=si0;
si0=l6;
si0=i32_load(&i->m0,(U64)si0+72U);
l8=si0;
L138:;
si0=l6;
si1=96U;
si0+=si1;
si1=l8;
si2=l9;
si2=i32_load(&i->m0,(U64)si2+24U);
TF(i->t0,si2,void (*)(rustpythonInstance*,U32,U32))(i,si0,si1);
si0=l6;
si0=i32_load8_u(&i->m0,(U64)si0+96U);
si1=4U;
si0=si0 != si1;
if(si0){
goto L145;
}
si0=l6;
si1=20U;
i32_store8(&i->m0,(U64)si0+312U,si1);
goto L91;
L145:;
si0=l6;
si1=l6;
sj1=i64_load(&i->m0,(U64)si1+96U);
i64_store(&i->m0,(U64)si0+200U,sj1);
si0=l6;
si1=288U;
si0+=si1;
si1=l6;
si2=200U;
si1+=si2;
f578(i,si0,si1);
goto L91;
L137:;
si0=l6;
si1=200U;
si0+=si1;
si1=4U;
si0+=si1;
si1=l6;
si2=96U;
si1+=si2;
si2=4U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l6;
si1=l6;
si1=i32_load(&i->m0,(U64)si1+97U);
i32_store(&i->m0,(U64)si0+201U,si1);
si0=l6;
si1=l8;
i32_store8(&i->m0,(U64)si0+200U,si1);
si0=l6;
si1=288U;
si0+=si1;
si1=l6;
si2=200U;
si1+=si2;
f578(i,si0,si1);
L91:;
si0=l6;
si0=i32_load8_u(&i->m0,(U64)si0+312U);
l8=si0;
si1=20U;
si0=si0 != si1;
if(si0){
goto L8;
}
L9:;
si0=l0;
si1=20U;
i32_store8(&i->m0,(U64)si0+24U,si1);
goto L7;
L8:;
si0=l0;
si1=l6;
si1=i32_load16_u(&i->m0,(U64)si1+313U);
i32_store16(&i->m0,(U64)si0+25U,si1);
si0=l6;
si1=200U;
si0+=si1;
si1=16U;
si0+=si1;
si1=l6;
si2=288U;
si1+=si2;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
l7=sj1;
i64_store(&i->m0,(U64)si0,sj1);
si0=l6;
si1=200U;
si0+=si1;
si1=8U;
si0+=si1;
si1=l6;
si2=288U;
si1+=si2;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
l11=sj1;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=27U;
si0+=si1;
si1=l6;
si2=288U;
si1+=si2;
si2=27U;
si1+=si2;
si1=i32_load8_u(&i->m0,(U64)si1);
i32_store8(&i->m0,(U64)si0,si1);
si0=l6;
si1=l6;
sj1=i64_load(&i->m0,(U64)si1+288U);
l12=sj1;
i64_store(&i->m0,(U64)si0+200U,sj1);
si0=l0;
si1=16U;
si0+=si1;
sj1=l7;
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
si1=l8;
i32_store8(&i->m0,(U64)si0+24U,si1);
L7:;
si0=l6;
si1=336U;
si0+=si1;
i->g0=si0;
goto L0;
L6:;
si0=l8;
si1=l9;
si2=1093652U;
f593(i,si0,si1,si2);
UNREACHABLE;
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
U32 l12=0;
U32 si0,si1,si2,si3,si4;
U64 sj1;
si0=i->g0;
si1=144U;
si0-=si1;
l3=si0;
i->g0=si0;
si0=l2;
si1=84U;
si0+=si1;
l4=si0;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si0=!(si0);
if(si0){
goto L10;
}
si0=l2;
si1=92U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si1=7U;
si0=si0 > si1;
if(si0){
goto L11;
}
si0=l6;
si0=!(si0);
if(si0){
goto L6;
}
si0=l5;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=32U;
si0=si0 == si1;
if(si0){
goto L3;
}
si0=l6;
si1=1U;
si0=si0 == si1;
if(si0){
goto L6;
}
si0=l5;
si0=i32_load8_u(&i->m0,(U64)si0+1U);
si1=32U;
si0=si0 == si1;
if(si0){
goto L3;
}
si0=l6;
si1=2U;
si0=si0 == si1;
if(si0){
goto L6;
}
si0=l5;
si0=i32_load8_u(&i->m0,(U64)si0+2U);
si1=32U;
si0=si0 == si1;
if(si0){
goto L3;
}
si0=l6;
si1=3U;
si0=si0 == si1;
if(si0){
goto L6;
}
si0=l5;
si0=i32_load8_u(&i->m0,(U64)si0+3U);
si1=32U;
si0=si0 == si1;
if(si0){
goto L3;
}
si0=l6;
si1=4U;
si0=si0 == si1;
if(si0){
goto L6;
}
si0=l5;
si0=i32_load8_u(&i->m0,(U64)si0+4U);
si1=32U;
si0=si0 == si1;
if(si0){
goto L3;
}
si0=l6;
si1=5U;
si0=si0 == si1;
if(si0){
goto L6;
}
si0=l5;
si0=i32_load8_u(&i->m0,(U64)si0+5U);
si1=32U;
si0=si0 == si1;
if(si0){
goto L3;
}
si0=l6;
si1=6U;
si0=si0 == si1;
if(si0){
goto L6;
}
si0=l5;
si0=i32_load8_u(&i->m0,(U64)si0+6U);
si1=32U;
si0=si0 != si1;
if(si0){
goto L6;
}
goto L3;
L11:;
si0=l5;
si1=3U;
si0+=si1;
si1=-4U;
si0&=si1;
l7=si0;
si1=l5;
si0=si0 == si1;
if(si0){
goto L9;
}
si0=l7;
si1=l5;
si0-=si1;
l8=si0;
si0=!(si0);
if(si0){
goto L9;
}
si0=l5;
si1=l7;
si0-=si1;
l9=si0;
si0=l5;
l7=si0;
L12:;
{
si0=l7;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=32U;
si0=si0 == si1;
if(si0){
goto L3;
}
si0=l7;
si1=1U;
si0+=si1;
l7=si0;
si0=l9;
si1=1U;
si0+=si1;
l9=si0;
if(si0){
goto L12;
}
}
si0=l8;
si1=l6;
si2=-8U;
si1+=si2;
l10=si1;
si0=si0 > si1;
if(si0){
goto L7;
}
goto L8;
L10:;
si0=l2;
si1=72U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
si0=l2;
si1=80U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
if(si0){
goto L15;
}
si0=1U;
l8=si0;
goto L14;
L15:;
si0=l6;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L5;
}
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=l6;
si0=f15022(i,si0);
l8=si0;
si0=!(si0);
if(si0){
goto L13;
}
L14:;
si0=l8;
si1=l7;
si2=l6;
si0=f15143(i,si0,si1,si2);
l4=si0;
si0=0U;
l9=si0;
si0=l3;
si1=0U;
i32_store(&i->m0,(U64)si0+140U,si1);
si0=l3;
sj1=1ULL;
i64_store(&i->m0,(U64)si0+132U,sj1);
si0=l3;
si1=40U;
si0+=si1;
si1=l4;
si2=l6;
si3=1086780U;
si4=3U;
f690(i,si0,si1,si2,si3,si4);
si0=l3;
si1=104U;
si0+=si1;
si1=l3;
si2=40U;
si1+=si2;
f272(i,si0,si1);
si0=0U;
l7=si0;
si0=0U;
l5=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+104U);
si0=!(si0);
if(si0){
goto L16;
}
si0=0U;
l7=si0;
si0=1U;
l2=si0;
si0=0U;
l9=si0;
L17:;
{
si0=l3;
si0=i32_load(&i->m0,(U64)si0+112U);
l5=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+136U);
l10=si0;
si1=l7;
si0-=si1;
si1=l3;
si1=i32_load(&i->m0,(U64)si1+108U);
si2=l9;
si1-=si2;
l8=si1;
si0=si0 >= si1;
if(si0){
goto L18;
}
si0=l3;
si1=132U;
si0+=si1;
si1=l7;
si2=l8;
f530(i,si0,si1,si2);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+136U);
l10=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+132U);
l2=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+140U);
l7=si0;
L18:;
si0=l2;
si1=l7;
si0+=si1;
si1=l4;
si2=l9;
si1+=si2;
si2=l8;
si0=f15143(i,si0,si1,si2);
si0=l3;
si1=l7;
si2=l8;
si1+=si2;
l7=si1;
i32_store(&i->m0,(U64)si0+140U,si1);
si0=l10;
si1=l7;
si0=si0 != si1;
if(si0){
goto L19;
}
si0=l3;
si1=132U;
si0+=si1;
si1=l10;
si2=1U;
f530(i,si0,si1,si2);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+132U);
l2=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+140U);
l7=si0;
L19:;
si0=l2;
si1=l7;
si0+=si1;
si1=10U;
i32_store8(&i->m0,(U64)si0,si1);
si0=l3;
si1=l7;
si2=1U;
si1+=si2;
l7=si1;
i32_store(&i->m0,(U64)si0+140U,si1);
si0=l3;
si1=104U;
si0+=si1;
si1=l3;
si2=40U;
si1+=si2;
f272(i,si0,si1);
si0=l5;
l9=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+104U);
if(si0){
goto L17;
}
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0+136U);
l9=si0;
L16:;
si0=l4;
si1=l5;
si0+=si1;
l2=si0;
si0=l9;
si1=l7;
si0-=si1;
si1=l6;
si2=l5;
si1-=si2;
l8=si1;
si0=si0 >= si1;
if(si0){
goto L20;
}
si0=l3;
si1=132U;
si0+=si1;
si1=l7;
si2=l8;
f530(i,si0,si1,si2);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+136U);
l9=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+140U);
l7=si0;
L20:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+132U);
l5=si0;
si1=l7;
si0+=si1;
si1=l2;
si2=l8;
si0=f15143(i,si0,si1,si2);
si0=l6;
si0=!(si0);
if(si0){
goto L21;
}
si0=l4;
f15024(i,si0);
L21:;
si0=l7;
si1=l8;
si0+=si1;
l7=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
l2=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l10=si0;
si0=l1;
si0=i32_load8_u(&i->m0,(U64)si0+19U);
if(si0){
goto L23;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+8U);
l8=si0;
si0=l3;
si1=104U;
si0+=si1;
si1=12U;
si0+=si1;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=0U;
i32_store8(&i->m0,(U64)si0+124U,si1);
si0=l3;
si1=17684584U;
i32_store(&i->m0,(U64)si0+112U,si1);
si0=l3;
si1=0U;
i32_store(&i->m0,(U64)si0+108U,si1);
si0=l3;
si1=17684584U;
i32_store(&i->m0,(U64)si0+104U,si1);
si0=l3;
si1=l8;
i32_store(&i->m0,(U64)si0+120U,si1);
si0=l3;
si1=0U;
i32_store16(&i->m0,(U64)si0+76U,si1);
si0=l3;
si1=l7;
i32_store(&i->m0,(U64)si0+72U,si1);
si0=l3;
si1=0U;
i32_store(&i->m0,(U64)si0+68U,si1);
si0=l3;
sj1=42949672961ULL;
i64_store(&i->m0,(U64)si0+60U,sj1);
si0=l3;
si1=l7;
i32_store(&i->m0,(U64)si0+56U,si1);
si0=l3;
si1=0U;
i32_store(&i->m0,(U64)si0+52U,si1);
si0=l3;
si1=l7;
i32_store(&i->m0,(U64)si0+48U,si1);
si0=l3;
si1=l5;
i32_store(&i->m0,(U64)si0+44U,si1);
si0=l3;
si1=10U;
i32_store(&i->m0,(U64)si0+40U,si1);
si0=l3;
si1=l3;
si2=104U;
si1+=si2;
i32_store(&i->m0,(U64)si0+80U,si1);
si0=l3;
si1=132U;
si0+=si1;
si1=l3;
si2=40U;
si1+=si2;
f246(i,si0,si1);
si0=l3;
si1=24U;
si0+=si1;
si1=l3;
si1=i32_load(&i->m0,(U64)si1+132U);
l4=si1;
si2=l3;
si2=i32_load(&i->m0,(U64)si2+140U);
l8=si2;
si3=1086476U;
si4=1U;
f437(i,si0,si1,si2,si3,si4);
si0=l8;
si0=!(si0);
if(si0){
goto L24;
}
si0=l4;
l7=si0;
L25:;
{
si0=l7;
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L26;
}
si0=l7;
si0=i32_load(&i->m0,(U64)si0);
f15024(i,si0);
L26:;
si0=l7;
si1=12U;
si0+=si1;
l7=si0;
si0=l8;
si1=-1U;
si0+=si1;
l8=si0;
if(si0){
goto L25;
}
}
L24:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+136U);
si0=!(si0);
if(si0){
goto L27;
}
si0=l4;
f15024(i,si0);
L27:;
si0=l3;
si1=116U;
si0+=si1;
sj1=1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=154U;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l3;
si1=1U;
i32_store(&i->m0,(U64)si0+108U,si1);
si0=l3;
si1=1086468U;
i32_store(&i->m0,(U64)si0+104U,si1);
si0=l3;
si1=l3;
si2=24U;
si1+=si2;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l3;
si1=l3;
si2=16U;
si1+=si2;
i32_store(&i->m0,(U64)si0+112U,si1);
si0=l3;
si1=8U;
si0+=si1;
si1=l10;
si2=l3;
si3=104U;
si2+=si3;
si3=l2;
si3=i32_load(&i->m0,(U64)si3+36U);
TF(i->t0,si3,void (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+28U);
si0=!(si0);
if(si0){
goto L22;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0+24U);
f15024(i,si0);
goto L22;
L23:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+8U);
l8=si0;
si0=l3;
si1=104U;
si0+=si1;
si1=12U;
si0+=si1;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=0U;
i32_store8(&i->m0,(U64)si0+124U,si1);
si0=l3;
si1=17684584U;
i32_store(&i->m0,(U64)si0+112U,si1);
si0=l3;
si1=0U;
i32_store(&i->m0,(U64)si0+108U,si1);
si0=l3;
si1=17684584U;
i32_store(&i->m0,(U64)si0+104U,si1);
si0=l3;
si1=l8;
i32_store(&i->m0,(U64)si0+120U,si1);
si0=l3;
si1=0U;
i32_store16(&i->m0,(U64)si0+76U,si1);
si0=l3;
si1=l7;
i32_store(&i->m0,(U64)si0+72U,si1);
si0=l3;
si1=0U;
i32_store(&i->m0,(U64)si0+68U,si1);
si0=l3;
sj1=42949672961ULL;
i64_store(&i->m0,(U64)si0+60U,sj1);
si0=l3;
si1=l7;
i32_store(&i->m0,(U64)si0+56U,si1);
si0=l3;
si1=0U;
i32_store(&i->m0,(U64)si0+52U,si1);
si0=l3;
si1=l7;
i32_store(&i->m0,(U64)si0+48U,si1);
si0=l3;
si1=l5;
i32_store(&i->m0,(U64)si0+44U,si1);
si0=l3;
si1=10U;
i32_store(&i->m0,(U64)si0+40U,si1);
si0=l3;
si1=l3;
si2=104U;
si1+=si2;
i32_store(&i->m0,(U64)si0+80U,si1);
si0=l3;
si1=132U;
si0+=si1;
si1=l3;
si2=40U;
si1+=si2;
f246(i,si0,si1);
si0=l3;
si1=24U;
si0+=si1;
si1=l3;
si1=i32_load(&i->m0,(U64)si1+132U);
l4=si1;
si2=l3;
si2=i32_load(&i->m0,(U64)si2+140U);
l8=si2;
si3=1086476U;
si4=1U;
f437(i,si0,si1,si2,si3,si4);
si0=l8;
si0=!(si0);
if(si0){
goto L28;
}
si0=l4;
l7=si0;
L29:;
{
si0=l7;
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L30;
}
si0=l7;
si0=i32_load(&i->m0,(U64)si0);
f15024(i,si0);
L30:;
si0=l7;
si1=12U;
si0+=si1;
l7=si0;
si0=l8;
si1=-1U;
si0+=si1;
l8=si0;
if(si0){
goto L29;
}
}
L28:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+136U);
si0=!(si0);
if(si0){
goto L31;
}
si0=l4;
f15024(i,si0);
L31:;
si0=l1;
si0=i32_load8_u(&i->m0,(U64)si0+16U);
switch(si0){
case 0:
goto L35;
case 1:
goto L34;
case 2:
goto L33;
default:
goto L35;
}
L35:;
si0=l3;
si1=116U;
si0+=si1;
si1=l3;
si2=32U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=l3;
sj1=i64_load(&i->m0,(U64)si1+24U);
i64_store(&i->m0,(U64)si0+108U,sj1);
si0=l3;
si1=2U;
i32_store(&i->m0,(U64)si0+104U,si1);
goto L32;
L34:;
si0=l3;
si1=116U;
si0+=si1;
si1=l3;
si2=32U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=l3;
sj1=i64_load(&i->m0,(U64)si1+24U);
i64_store(&i->m0,(U64)si0+108U,sj1);
si0=l3;
si1=2U;
i32_store(&i->m0,(U64)si0+104U,si1);
goto L32;
L33:;
si0=l3;
si1=116U;
si0+=si1;
si1=l3;
si2=32U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=l3;
sj1=i64_load(&i->m0,(U64)si1+24U);
i64_store(&i->m0,(U64)si0+108U,sj1);
si0=l3;
si1=3U;
i32_store(&i->m0,(U64)si0+104U,si1);
L32:;
si0=l3;
si1=52U;
si0+=si1;
sj1=1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=156U;
i32_store(&i->m0,(U64)si0+136U,si1);
si0=l3;
si1=1U;
i32_store(&i->m0,(U64)si0+44U,si1);
si0=l3;
si1=1086468U;
i32_store(&i->m0,(U64)si0+40U,si1);
si0=l3;
si1=l3;
si2=104U;
si1+=si2;
i32_store(&i->m0,(U64)si0+132U,si1);
si0=l3;
si1=l3;
si2=132U;
si1+=si2;
i32_store(&i->m0,(U64)si0+48U,si1);
si0=l3;
si1=8U;
si0+=si1;
si1=l10;
si2=l3;
si3=40U;
si2+=si3;
si3=l2;
si3=i32_load(&i->m0,(U64)si3+36U);
TF(i->t0,si3,void (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
si0=l3;
si1=112U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L22;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0+108U);
f15024(i,si0);
L22:;
si0=l3;
si0=i32_load8_u(&i->m0,(U64)si0+8U);
l7=si0;
si1=4U;
si0=si0 != si1;
if(si0){
goto L36;
}
si0=l9;
si0=!(si0);
if(si0){
goto L2;
}
si0=l5;
f15024(i,si0);
goto L2;
L36:;
si0=l0;
si1=l3;
si1=i32_load(&i->m0,(U64)si1+9U);
i32_store(&i->m0,(U64)si0+1U,si1);
si0=l0;
si1=4U;
si0+=si1;
si1=l3;
si2=8U;
si1+=si2;
si2=4U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l7;
i32_store8(&i->m0,(U64)si0,si1);
si0=l9;
si0=!(si0);
if(si0){
goto L1;
}
si0=l5;
f15024(i,si0);
goto L1;
L13:;
si0=1U;
si1=l6;
f52(i,si0,si1);
UNREACHABLE;
L9:;
si0=l6;
si1=-8U;
si0+=si1;
l10=si0;
si0=0U;
l8=si0;
L8:;
L37:;
{
si0=l5;
si1=l8;
si0+=si1;
l9=si0;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
si1=-1U;
si0^=si1;
si1=l7;
si2=538976288U;
si1^=si2;
si2=-16843009U;
si1+=si2;
si0&=si1;
si1=-2139062144U;
si0&=si1;
if(si0){
goto L7;
}
si0=l9;
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
si1=-1U;
si0^=si1;
si1=l7;
si2=538976288U;
si1^=si2;
si2=-16843009U;
si1+=si2;
si0&=si1;
si1=-2139062144U;
si0&=si1;
if(si0){
goto L7;
}
si0=l8;
si1=8U;
si0+=si1;
l8=si0;
si1=l10;
si0=si0 <= si1;
if(si0){
goto L37;
}
}
L7:;
si0=l6;
si1=l8;
si0=si0 == si1;
if(si0){
goto L6;
}
si0=l6;
si1=l8;
si0-=si1;
l9=si0;
si0=l5;
si1=l8;
si0+=si1;
l7=si0;
L38:;
{
si0=l7;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=32U;
si0=si0 == si1;
if(si0){
goto L3;
}
si0=l7;
si1=1U;
si0+=si1;
l7=si0;
si0=l9;
si1=-1U;
si0+=si1;
l9=si0;
if(si0){
goto L38;
}
}
L6:;
si0=l2;
si1=72U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
si0=l2;
si1=80U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
if(si0){
goto L40;
}
si0=1U;
l8=si0;
goto L39;
L40:;
si0=l6;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L5;
}
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=l6;
si0=f15022(i,si0);
l8=si0;
si0=!(si0);
if(si0){
goto L4;
}
L39:;
si0=l8;
si1=l7;
si2=l6;
si0=f15143(i,si0,si1,si2);
l4=si0;
si0=0U;
l9=si0;
si0=l3;
si1=0U;
i32_store(&i->m0,(U64)si0+140U,si1);
si0=l3;
sj1=1ULL;
i64_store(&i->m0,(U64)si0+132U,sj1);
si0=l3;
si1=40U;
si0+=si1;
si1=l4;
si2=l6;
si3=1086780U;
si4=3U;
f690(i,si0,si1,si2,si3,si4);
si0=l3;
si1=104U;
si0+=si1;
si1=l3;
si2=40U;
si1+=si2;
f272(i,si0,si1);
si0=0U;
l7=si0;
si0=0U;
l5=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+104U);
si0=!(si0);
if(si0){
goto L41;
}
si0=0U;
l7=si0;
si0=1U;
l2=si0;
si0=0U;
l9=si0;
L42:;
{
si0=l3;
si0=i32_load(&i->m0,(U64)si0+112U);
l5=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+136U);
l10=si0;
si1=l7;
si0-=si1;
si1=l3;
si1=i32_load(&i->m0,(U64)si1+108U);
si2=l9;
si1-=si2;
l8=si1;
si0=si0 >= si1;
if(si0){
goto L43;
}
si0=l3;
si1=132U;
si0+=si1;
si1=l7;
si2=l8;
f530(i,si0,si1,si2);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+136U);
l10=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+132U);
l2=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+140U);
l7=si0;
L43:;
si0=l2;
si1=l7;
si0+=si1;
si1=l4;
si2=l9;
si1+=si2;
si2=l8;
si0=f15143(i,si0,si1,si2);
si0=l3;
si1=l7;
si2=l8;
si1+=si2;
l7=si1;
i32_store(&i->m0,(U64)si0+140U,si1);
si0=l10;
si1=l7;
si0=si0 != si1;
if(si0){
goto L44;
}
si0=l3;
si1=132U;
si0+=si1;
si1=l10;
si2=1U;
f530(i,si0,si1,si2);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+132U);
l2=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+140U);
l7=si0;
L44:;
si0=l2;
si1=l7;
si0+=si1;
si1=10U;
i32_store8(&i->m0,(U64)si0,si1);
si0=l3;
si1=l7;
si2=1U;
si1+=si2;
l7=si1;
i32_store(&i->m0,(U64)si0+140U,si1);
si0=l3;
si1=104U;
si0+=si1;
si1=l3;
si2=40U;
si1+=si2;
f272(i,si0,si1);
si0=l5;
l9=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+104U);
if(si0){
goto L42;
}
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0+136U);
l9=si0;
L41:;
si0=l4;
si1=l5;
si0+=si1;
l2=si0;
si0=l9;
si1=l7;
si0-=si1;
si1=l6;
si2=l5;
si1-=si2;
l8=si1;
si0=si0 >= si1;
if(si0){
goto L45;
}
si0=l3;
si1=132U;
si0+=si1;
si1=l7;
si2=l8;
f530(i,si0,si1,si2);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+136U);
l9=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+140U);
l7=si0;
L45:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+132U);
l5=si0;
si1=l7;
si0+=si1;
si1=l2;
si2=l8;
si0=f15143(i,si0,si1,si2);
si0=l6;
si0=!(si0);
if(si0){
goto L46;
}
si0=l4;
f15024(i,si0);
L46:;
si0=l7;
si1=l8;
si0+=si1;
l7=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
l10=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si0=l1;
si0=i32_load8_u(&i->m0,(U64)si0+19U);
if(si0){
goto L48;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+8U);
l8=si0;
si0=l3;
si1=104U;
si0+=si1;
si1=12U;
si0+=si1;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=0U;
i32_store8(&i->m0,(U64)si0+124U,si1);
si0=l3;
si1=17684584U;
i32_store(&i->m0,(U64)si0+112U,si1);
si0=l3;
si1=0U;
i32_store(&i->m0,(U64)si0+108U,si1);
si0=l3;
si1=17684584U;
i32_store(&i->m0,(U64)si0+104U,si1);
si0=l3;
si1=l8;
i32_store(&i->m0,(U64)si0+120U,si1);
si0=l3;
si1=0U;
i32_store16(&i->m0,(U64)si0+76U,si1);
si0=l3;
si1=l7;
i32_store(&i->m0,(U64)si0+72U,si1);
si0=l3;
si1=0U;
i32_store(&i->m0,(U64)si0+68U,si1);
si0=l3;
sj1=42949672961ULL;
i64_store(&i->m0,(U64)si0+60U,sj1);
si0=l3;
si1=l7;
i32_store(&i->m0,(U64)si0+56U,si1);
si0=l3;
si1=0U;
i32_store(&i->m0,(U64)si0+52U,si1);
si0=l3;
si1=l7;
i32_store(&i->m0,(U64)si0+48U,si1);
si0=l3;
si1=l5;
i32_store(&i->m0,(U64)si0+44U,si1);
si0=l3;
si1=10U;
i32_store(&i->m0,(U64)si0+40U,si1);
si0=l3;
si1=l3;
si2=104U;
si1+=si2;
i32_store(&i->m0,(U64)si0+80U,si1);
si0=l3;
si1=132U;
si0+=si1;
si1=l3;
si2=40U;
si1+=si2;
f246(i,si0,si1);
si0=l3;
si1=24U;
si0+=si1;
si1=l3;
si1=i32_load(&i->m0,(U64)si1+132U);
l4=si1;
si2=l3;
si2=i32_load(&i->m0,(U64)si2+140U);
l8=si2;
si3=1086476U;
si4=1U;
f437(i,si0,si1,si2,si3,si4);
si0=l8;
si0=!(si0);
if(si0){
goto L49;
}
si0=l4;
l7=si0;
L50:;
{
si0=l7;
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L51;
}
si0=l7;
si0=i32_load(&i->m0,(U64)si0);
f15024(i,si0);
L51:;
si0=l7;
si1=12U;
si0+=si1;
l7=si0;
si0=l8;
si1=-1U;
si0+=si1;
l8=si0;
if(si0){
goto L50;
}
}
L49:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+136U);
si0=!(si0);
if(si0){
goto L52;
}
si0=l4;
f15024(i,si0);
L52:;
si0=l3;
si1=116U;
si0+=si1;
sj1=1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=154U;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l3;
si1=1U;
i32_store(&i->m0,(U64)si0+108U,si1);
si0=l3;
si1=1086468U;
i32_store(&i->m0,(U64)si0+104U,si1);
si0=l3;
si1=l3;
si2=24U;
si1+=si2;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l3;
si1=l3;
si2=16U;
si1+=si2;
i32_store(&i->m0,(U64)si0+112U,si1);
si0=l3;
si1=8U;
si0+=si1;
si1=l2;
si2=l3;
si3=104U;
si2+=si3;
si3=l10;
si3=i32_load(&i->m0,(U64)si3+36U);
TF(i->t0,si3,void (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+28U);
si0=!(si0);
if(si0){
goto L47;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0+24U);
f15024(i,si0);
goto L47;
L48:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+8U);
l8=si0;
si0=l3;
si1=104U;
si0+=si1;
si1=12U;
si0+=si1;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=0U;
i32_store8(&i->m0,(U64)si0+124U,si1);
si0=l3;
si1=17684584U;
i32_store(&i->m0,(U64)si0+112U,si1);
si0=l3;
si1=0U;
i32_store(&i->m0,(U64)si0+108U,si1);
si0=l3;
si1=17684584U;
i32_store(&i->m0,(U64)si0+104U,si1);
si0=l3;
si1=l8;
i32_store(&i->m0,(U64)si0+120U,si1);
si0=l3;
si1=0U;
i32_store16(&i->m0,(U64)si0+76U,si1);
si0=l3;
si1=l7;
i32_store(&i->m0,(U64)si0+72U,si1);
si0=l3;
si1=0U;
i32_store(&i->m0,(U64)si0+68U,si1);
si0=l3;
sj1=42949672961ULL;
i64_store(&i->m0,(U64)si0+60U,sj1);
si0=l3;
si1=l7;
i32_store(&i->m0,(U64)si0+56U,si1);
si0=l3;
si1=0U;
i32_store(&i->m0,(U64)si0+52U,si1);
si0=l3;
si1=l7;
i32_store(&i->m0,(U64)si0+48U,si1);
si0=l3;
si1=l5;
i32_store(&i->m0,(U64)si0+44U,si1);
si0=l3;
si1=10U;
i32_store(&i->m0,(U64)si0+40U,si1);
si0=l3;
si1=l3;
si2=104U;
si1+=si2;
i32_store(&i->m0,(U64)si0+80U,si1);
si0=l3;
si1=132U;
si0+=si1;
si1=l3;
si2=40U;
si1+=si2;
f246(i,si0,si1);
si0=l3;
si1=24U;
si0+=si1;
si1=l3;
si1=i32_load(&i->m0,(U64)si1+132U);
l4=si1;
si2=l3;
si2=i32_load(&i->m0,(U64)si2+140U);
l8=si2;
si3=1086476U;
si4=1U;
f437(i,si0,si1,si2,si3,si4);
si0=l8;
si0=!(si0);
if(si0){
goto L53;
}
si0=l4;
l7=si0;
L54:;
{
si0=l7;
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L55;
}
si0=l7;
si0=i32_load(&i->m0,(U64)si0);
f15024(i,si0);
L55:;
si0=l7;
si1=12U;
si0+=si1;
l7=si0;
si0=l8;
si1=-1U;
si0+=si1;
l8=si0;
if(si0){
goto L54;
}
}
L53:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+136U);
si0=!(si0);
if(si0){
goto L56;
}
si0=l4;
f15024(i,si0);
L56:;
si0=l1;
si0=i32_load8_u(&i->m0,(U64)si0+16U);
switch(si0){
case 0:
goto L60;
case 1:
goto L59;
case 2:
goto L58;
default:
goto L60;
}
L60:;
si0=l3;
si1=116U;
si0+=si1;
si1=l3;
si2=32U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=l3;
sj1=i64_load(&i->m0,(U64)si1+24U);
i64_store(&i->m0,(U64)si0+108U,sj1);
si0=l3;
si1=2U;
i32_store(&i->m0,(U64)si0+104U,si1);
goto L57;
L59:;
si0=l3;
si1=116U;
si0+=si1;
si1=l3;
si2=32U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=l3;
sj1=i64_load(&i->m0,(U64)si1+24U);
i64_store(&i->m0,(U64)si0+108U,sj1);
si0=l3;
si1=2U;
i32_store(&i->m0,(U64)si0+104U,si1);
goto L57;
L58:;
si0=l3;
si1=116U;
si0+=si1;
si1=l3;
si2=32U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=l3;
sj1=i64_load(&i->m0,(U64)si1+24U);
i64_store(&i->m0,(U64)si0+108U,sj1);
si0=l3;
si1=3U;
i32_store(&i->m0,(U64)si0+104U,si1);
L57:;
si0=l3;
si1=52U;
si0+=si1;
sj1=1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=156U;
i32_store(&i->m0,(U64)si0+136U,si1);
si0=l3;
si1=1U;
i32_store(&i->m0,(U64)si0+44U,si1);
si0=l3;
si1=1086468U;
i32_store(&i->m0,(U64)si0+40U,si1);
si0=l3;
si1=l3;
si2=104U;
si1+=si2;
i32_store(&i->m0,(U64)si0+132U,si1);
si0=l3;
si1=l3;
si2=132U;
si1+=si2;
i32_store(&i->m0,(U64)si0+48U,si1);
si0=l3;
si1=8U;
si0+=si1;
si1=l2;
si2=l3;
si3=40U;
si2+=si3;
si3=l10;
si3=i32_load(&i->m0,(U64)si3+36U);
TF(i->t0,si3,void (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
si0=l3;
si1=112U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L47;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0+108U);
f15024(i,si0);
L47:;
si0=l3;
si0=i32_load8_u(&i->m0,(U64)si0+8U);
l7=si0;
si1=4U;
si0=si0 != si1;
if(si0){
goto L61;
}
si0=l9;
si0=!(si0);
if(si0){
goto L2;
}
si0=l5;
f15024(i,si0);
goto L2;
L61:;
si0=l0;
si1=l3;
si1=i32_load(&i->m0,(U64)si1+9U);
i32_store(&i->m0,(U64)si0+1U,si1);
si0=l0;
si1=4U;
si0+=si1;
si1=l3;
si2=8U;
si1+=si2;
si2=4U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l7;
i32_store8(&i->m0,(U64)si0,si1);
si0=l9;
si0=!(si0);
if(si0){
goto L1;
}
si0=l5;
f15024(i,si0);
goto L1;
L5:;
f53(i);
UNREACHABLE;
L4:;
si0=1U;
si1=l6;
f52(i,si0,si1);
UNREACHABLE;
L3:;
si0=l4;
si1=0U;
si2=l5;
si0=si2?si0:si1;
l7=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
l11=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l12=si0;
si0=l1;
si0=i32_load8_u(&i->m0,(U64)si0+19U);
if(si0){
goto L63;
}
si0=l7;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
si0=0U;
l8=si0;
si0=l3;
si1=0U;
i32_store(&i->m0,(U64)si0+140U,si1);
si0=l3;
sj1=1ULL;
i64_store(&i->m0,(U64)si0+132U,sj1);
si0=l3;
si1=40U;
si0+=si1;
si1=l4;
si2=l6;
si3=1086528U;
si4=1U;
f690(i,si0,si1,si2,si3,si4);
si0=l3;
si1=104U;
si0+=si1;
si1=l3;
si2=40U;
si1+=si2;
f272(i,si0,si1);
si0=0U;
l7=si0;
si0=0U;
l5=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+104U);
si0=!(si0);
if(si0){
goto L64;
}
si0=0U;
l7=si0;
si0=1U;
l2=si0;
si0=0U;
l9=si0;
L65:;
{
si0=l3;
si0=i32_load(&i->m0,(U64)si0+112U);
l5=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+136U);
l10=si0;
si1=l7;
si0-=si1;
si1=l3;
si1=i32_load(&i->m0,(U64)si1+108U);
si2=l9;
si1-=si2;
l8=si1;
si0=si0 >= si1;
if(si0){
goto L66;
}
si0=l3;
si1=132U;
si0+=si1;
si1=l7;
si2=l8;
f530(i,si0,si1,si2);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+136U);
l10=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+132U);
l2=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+140U);
l7=si0;
L66:;
si0=l2;
si1=l7;
si0+=si1;
si1=l4;
si2=l9;
si1+=si2;
si2=l8;
si0=f15143(i,si0,si1,si2);
si0=l3;
si1=l7;
si2=l8;
si1+=si2;
l7=si1;
i32_store(&i->m0,(U64)si0+140U,si1);
si0=l10;
si1=l7;
si0=si0 != si1;
if(si0){
goto L67;
}
si0=l3;
si1=132U;
si0+=si1;
si1=l10;
si2=1U;
f530(i,si0,si1,si2);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+132U);
l2=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+140U);
l7=si0;
L67:;
si0=l2;
si1=l7;
si0+=si1;
si1=45U;
i32_store8(&i->m0,(U64)si0,si1);
si0=l3;
si1=l7;
si2=1U;
si1+=si2;
l7=si1;
i32_store(&i->m0,(U64)si0+140U,si1);
si0=l3;
si1=104U;
si0+=si1;
si1=l3;
si2=40U;
si1+=si2;
f272(i,si0,si1);
si0=l5;
l9=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+104U);
if(si0){
goto L65;
}
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0+136U);
l8=si0;
L64:;
si0=l4;
si1=l5;
si0+=si1;
l9=si0;
si0=l8;
si1=l7;
si0-=si1;
si1=l6;
si2=l5;
si1-=si2;
l8=si1;
si0=si0 >= si1;
if(si0){
goto L68;
}
si0=l3;
si1=132U;
si0+=si1;
si1=l7;
si2=l8;
f530(i,si0,si1,si2);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+140U);
l7=si0;
L68:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+132U);
si1=l7;
si0+=si1;
si1=l9;
si2=l8;
si0=f15143(i,si0,si1,si2);
si0=l3;
si1=112U;
si0+=si1;
si1=l7;
si2=l8;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=52U;
si0+=si1;
sj1=1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=l3;
sj1=i64_load(&i->m0,(U64)si1+132U);
i64_store(&i->m0,(U64)si0+104U,sj1);
si0=l3;
si1=154U;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l3;
si1=1U;
i32_store(&i->m0,(U64)si0+44U,si1);
si0=l3;
si1=1086468U;
i32_store(&i->m0,(U64)si0+40U,si1);
si0=l3;
si1=l3;
si2=104U;
si1+=si2;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l3;
si1=l3;
si2=24U;
si1+=si2;
i32_store(&i->m0,(U64)si0+48U,si1);
si0=l3;
si1=16U;
si0+=si1;
si1=l12;
si2=l3;
si3=40U;
si2+=si3;
si3=l11;
si3=i32_load(&i->m0,(U64)si3+36U);
TF(i->t0,si3,void (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+108U);
si0=!(si0);
if(si0){
goto L62;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0+104U);
f15024(i,si0);
goto L62;
L63:;
si0=l7;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
si0=0U;
l8=si0;
si0=l3;
si1=0U;
i32_store(&i->m0,(U64)si0+140U,si1);
si0=l3;
sj1=1ULL;
i64_store(&i->m0,(U64)si0+132U,sj1);
si0=l3;
si1=40U;
si0+=si1;
si1=l4;
si2=l6;
si3=1086528U;
si4=1U;
f690(i,si0,si1,si2,si3,si4);
si0=l3;
si1=104U;
si0+=si1;
si1=l3;
si2=40U;
si1+=si2;
f272(i,si0,si1);
si0=0U;
l7=si0;
si0=0U;
l5=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+104U);
si0=!(si0);
if(si0){
goto L69;
}
si0=0U;
l7=si0;
si0=1U;
l2=si0;
si0=0U;
l9=si0;
L70:;
{
si0=l3;
si0=i32_load(&i->m0,(U64)si0+112U);
l5=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+136U);
l10=si0;
si1=l7;
si0-=si1;
si1=l3;
si1=i32_load(&i->m0,(U64)si1+108U);
si2=l9;
si1-=si2;
l8=si1;
si0=si0 >= si1;
if(si0){
goto L71;
}
si0=l3;
si1=132U;
si0+=si1;
si1=l7;
si2=l8;
f530(i,si0,si1,si2);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+136U);
l10=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+132U);
l2=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+140U);
l7=si0;
L71:;
si0=l2;
si1=l7;
si0+=si1;
si1=l4;
si2=l9;
si1+=si2;
si2=l8;
si0=f15143(i,si0,si1,si2);
si0=l3;
si1=l7;
si2=l8;
si1+=si2;
l7=si1;
i32_store(&i->m0,(U64)si0+140U,si1);
si0=l10;
si1=l7;
si0=si0 != si1;
if(si0){
goto L72;
}
si0=l3;
si1=132U;
si0+=si1;
si1=l10;
si2=1U;
f530(i,si0,si1,si2);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+132U);
l2=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+140U);
l7=si0;
L72:;
si0=l2;
si1=l7;
si0+=si1;
si1=45U;
i32_store8(&i->m0,(U64)si0,si1);
si0=l3;
si1=l7;
si2=1U;
si1+=si2;
l7=si1;
i32_store(&i->m0,(U64)si0+140U,si1);
si0=l3;
si1=104U;
si0+=si1;
si1=l3;
si2=40U;
si1+=si2;
f272(i,si0,si1);
si0=l5;
l9=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+104U);
if(si0){
goto L70;
}
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0+136U);
l8=si0;
L69:;
si0=l4;
si1=l5;
si0+=si1;
l9=si0;
si0=l8;
si1=l7;
si0-=si1;
si1=l6;
si2=l5;
si1-=si2;
l8=si1;
si0=si0 >= si1;
if(si0){
goto L73;
}
si0=l3;
si1=132U;
si0+=si1;
si1=l7;
si2=l8;
f530(i,si0,si1,si2);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+140U);
l7=si0;
L73:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+132U);
si1=l7;
si0+=si1;
si1=l9;
si2=l8;
si0=f15143(i,si0,si1,si2);
si0=l3;
si1=32U;
si0+=si1;
l9=si0;
si1=l7;
si2=l8;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=l3;
sj1=i64_load(&i->m0,(U64)si1+132U);
i64_store(&i->m0,(U64)si0+24U,sj1);
si0=l1;
si0=i32_load8_u(&i->m0,(U64)si0+16U);
switch(si0){
case 0:
goto L77;
case 1:
goto L76;
case 2:
goto L75;
default:
goto L77;
}
L77:;
si0=l3;
si1=116U;
si0+=si1;
si1=l9;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=l3;
sj1=i64_load(&i->m0,(U64)si1+24U);
i64_store(&i->m0,(U64)si0+108U,sj1);
si0=l3;
si1=2U;
i32_store(&i->m0,(U64)si0+104U,si1);
goto L74;
L76:;
si0=l3;
si1=116U;
si0+=si1;
si1=l9;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=l3;
sj1=i64_load(&i->m0,(U64)si1+24U);
i64_store(&i->m0,(U64)si0+108U,sj1);
si0=l3;
si1=2U;
i32_store(&i->m0,(U64)si0+104U,si1);
goto L74;
L75:;
si0=l3;
si1=116U;
si0+=si1;
si1=l9;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=l3;
sj1=i64_load(&i->m0,(U64)si1+24U);
i64_store(&i->m0,(U64)si0+108U,sj1);
si0=l3;
si1=3U;
i32_store(&i->m0,(U64)si0+104U,si1);
L74:;
si0=l3;
si1=52U;
si0+=si1;
sj1=1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=156U;
i32_store(&i->m0,(U64)si0+136U,si1);
si0=l3;
si1=1U;
i32_store(&i->m0,(U64)si0+44U,si1);
si0=l3;
si1=1086468U;
i32_store(&i->m0,(U64)si0+40U,si1);
si0=l3;
si1=l3;
si2=104U;
si1+=si2;
i32_store(&i->m0,(U64)si0+132U,si1);
si0=l3;
si1=l3;
si2=132U;
si1+=si2;
i32_store(&i->m0,(U64)si0+48U,si1);
si0=l3;
si1=16U;
si0+=si1;
si1=l12;
si2=l3;
si3=40U;
si2+=si3;
si3=l11;
si3=i32_load(&i->m0,(U64)si3+36U);
TF(i->t0,si3,void (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
si0=l3;
si1=112U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L62;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0+108U);
f15024(i,si0);
L62:;
si0=l3;
si0=i32_load8_u(&i->m0,(U64)si0+16U);
l7=si0;
si1=4U;
si0=si0 == si1;
if(si0){
goto L2;
}
si0=l0;
si1=l3;
si1=i32_load(&i->m0,(U64)si1+17U);
i32_store(&i->m0,(U64)si0+1U,si1);
si0=l0;
si1=4U;
si0+=si1;
si1=l3;
si2=16U;
si1+=si2;
si2=4U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l7;
i32_store8(&i->m0,(U64)si0,si1);
goto L1;
L2:;
si0=l0;
si1=4U;
i32_store8(&i->m0,(U64)si0,si1);
L1:;
si0=l3;
si1=144U;
si0+=si1;
i->g0=si0;
L0:;
}

void f276(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
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
U32 si0,si1,si2,si3,si4,si5;
U64 sj1;
si0=i->g0;
si1=112U;
si0-=si1;
l3=si0;
i->g0=si0;
si0=2U;
l4=si0;
si0=l1;
si1=2U;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l3;
sj1=4ULL;
i64_store(&i->m0,(U64)si0+44U,sj1);
si0=l3;
sj1=0ULL;
i64_store(&i->m0,(U64)si0+52U,sj1);
si0=l2;
si0=i32_load(&i->m0,(U64)si0+12U);
l5=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+8U);
l6=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+4U);
l7=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0);
l8=si0;
si0=l1;
si0=i32_load8_u(&i->m0,(U64)si0+21U);
si1=255U;
si0&=si1;
l9=si0;
L1:;
{
si0=l8;
si0=!(si0);
if(si0){
goto L10;
}
si0=l8;
si1=l7;
si0=si0 == si1;
if(si0){
goto L10;
}
si0=l9;
si0=!(si0);
if(si0){
goto L11;
}
si0=l8;
l2=si0;
L12:;
{
si0=l2;
si1=4U;
si0=f464(i,si0,si1);
if(si0){
goto L13;
}
si0=l2;
si1=17U;
si0=f464(i,si0,si1);
si0=!(si0);
if(si0){
goto L9;
}
si0=l2;
si1=16U;
si0=f464(i,si0,si1);
si0=l2;
si1=7U;
si0=f464(i,si0,si1);
if(si0){
goto L9;
}
L13:;
si0=l2;
si1=120U;
si0+=si1;
l2=si0;
si1=l7;
si0=si0 != si1;
if(si0){
goto L12;
}
goto L10;
}
L11:;
si0=l8;
l2=si0;
L14:;
{
si0=l2;
si1=4U;
si0=f464(i,si0,si1);
if(si0){
goto L15;
}
si0=l2;
si1=17U;
si0=f464(i,si0,si1);
si0=l2;
si1=16U;
si0=f464(i,si0,si1);
si0=!(si0);
if(si0){
goto L9;
}
si0=l2;
si1=7U;
si0=f464(i,si0,si1);
if(si0){
goto L9;
}
L15:;
si0=l2;
si1=120U;
si0+=si1;
l2=si0;
si1=l7;
si0=si0 != si1;
if(si0){
goto L14;
}
}
L10:;
si0=l6;
si0=!(si0);
if(si0){
goto L17;
}
si0=l6;
si1=l5;
si0=si0 == si1;
if(si0){
goto L17;
}
si0=l6;
l2=si0;
L18:;
{
si0=l2;
si1=4U;
si0=f385(i,si0,si1);
if(si0){
goto L19;
}
si0=l2;
si1=17U;
si0=f385(i,si0,si1);
l10=si0;
si0=l9;
si0=!(si0);
if(si0){
goto L20;
}
si0=l10;
si0=!(si0);
if(si0){
goto L16;
}
L20:;
si0=l2;
si1=16U;
si0=f385(i,si0,si1);
l10=si0;
si0=l9;
if(si0){
goto L21;
}
si0=l10;
si0=!(si0);
if(si0){
goto L16;
}
L21:;
si0=l2;
si1=7U;
si0=f385(i,si0,si1);
if(si0){
goto L16;
}
L19:;
si0=l2;
si1=272U;
si0+=si1;
l2=si0;
si1=l5;
si0=si0 != si1;
if(si0){
goto L18;
}
}
L17:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+52U);
l7=si0;
if(si0){
goto L7;
}
si0=l0;
si1=4U;
i32_store8(&i->m0,(U64)si0,si1);
goto L4;
L16:;
si0=l2;
si1=272U;
si0+=si1;
l6=si0;
si0=1086180U;
l10=si0;
si0=0U;
l8=si0;
goto L8;
L9:;
si0=l2;
si1=120U;
si0+=si1;
l8=si0;
si0=1086028U;
l10=si0;
L8:;
si0=l2;
si1=l10;
si1=i32_load(&i->m0,(U64)si1+116U);
si0=TF(i->t0,si1,U32 (*)(rustpythonInstance*,U32))(i,si0);
if(si0){
goto L6;
}
goto L2;
L7:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+44U);
l5=si0;
si1=l7;
si2=4U;
si1<<=(si2&31);
si0+=si1;
l9=si0;
si0=1U;
l4=si0;
si0=0U;
l10=si0;
L22:;
{
si0=l5;
l2=si0;
L24:;
{
si0=l9;
l5=si0;
si0=l2;
si1=l9;
si0=si0 == si1;
if(si0){
goto L25;
}
si0=l2;
si1=16U;
si0+=si1;
l5=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L23;
}
L25:;
si0=l5;
l2=si0;
si0=l7;
si1=l10;
si2=1U;
si1+=si2;
l10=si1;
si0=si0 != si1;
if(si0){
goto L24;
}
goto L5;
}
L23:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+4U);
l6=si0;
if(si0){
goto L27;
}
si0=0U;
l2=si0;
si0=0U;
l11=si0;
goto L26;
L27:;
si0=l2;
si1=12U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l11=si0;
si0=l2;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l8=si0;
si0=1U;
l2=si0;
si0=l6;
l12=si0;
si0=l6;
l13=si0;
L26:;
si0=l3;
si1=l11;
i32_store(&i->m0,(U64)si0+104U,si1);
si0=l3;
si1=l8;
i32_store(&i->m0,(U64)si0+100U,si1);
si0=l3;
si1=l13;
i32_store(&i->m0,(U64)si0+96U,si1);
si0=l3;
si1=0U;
i32_store(&i->m0,(U64)si0+92U,si1);
si0=l3;
si1=l2;
i32_store(&i->m0,(U64)si0+88U,si1);
si0=l3;
si1=l8;
i32_store(&i->m0,(U64)si0+84U,si1);
si0=l3;
si1=l12;
i32_store(&i->m0,(U64)si0+80U,si1);
si0=l3;
si1=0U;
i32_store(&i->m0,(U64)si0+76U,si1);
si0=l3;
si1=l2;
i32_store(&i->m0,(U64)si0+72U,si1);
si0=l3;
si1=72U;
si0+=si1;
si0=f442(i,si0);
l2=si0;
si0=!(si0);
if(si0){
goto L28;
}
si0=l4;
si1=1U;
si0&=si1;
if(si0){
goto L31;
}
si0=l3;
si1=60U;
si0+=si1;
si1=l1;
si1=i32_load(&i->m0,(U64)si1);
si2=1086476U;
si3=1U;
si4=l1;
si4=i32_load(&i->m0,(U64)si4+4U);
si4=i32_load(&i->m0,(U64)si4+28U);
TF(i->t0,si4,void (*)(rustpythonInstance*,U32,U32,U32,U32))(i,si0,si1,si2,si3);
si0=l3;
si0=i32_load8_u(&i->m0,(U64)si0+60U);
l6=si0;
si1=4U;
si0=si0 != si1;
if(si0){
goto L30;
}
L31:;
si0=l3;
si1=16U;
si0+=si1;
si1=l2;
si1=i32_load(&i->m0,(U64)si1);
si2=l2;
si2=i32_load(&i->m0,(U64)si2+4U);
si2=i32_load(&i->m0,(U64)si2+132U);
TF(i->t0,si2,void (*)(rustpythonInstance*,U32,U32))(i,si0,si1);
si0=l3;
si1=60U;
si0+=si1;
si1=l1;
si2=l3;
si2=i32_load(&i->m0,(U64)si2+16U);
si3=l3;
si3=i32_load(&i->m0,(U64)si3+20U);
f280(i,si0,si1,si2,si3);
si0=l3;
si0=i32_load8_u(&i->m0,(U64)si0+60U);
l6=si0;
si1=4U;
si0=si0 != si1;
if(si0){
goto L32;
}
si0=0U;
l4=si0;
si0=l3;
si1=72U;
si0+=si1;
si0=f442(i,si0);
l2=si0;
si0=!(si0);
if(si0){
goto L28;
}
L33:;
{
si0=l3;
si1=60U;
si0+=si1;
si1=l1;
si1=i32_load(&i->m0,(U64)si1);
si2=1086476U;
si3=1U;
si4=l1;
si4=i32_load(&i->m0,(U64)si4+4U);
si4=i32_load(&i->m0,(U64)si4+28U);
TF(i->t0,si4,void (*)(rustpythonInstance*,U32,U32,U32,U32))(i,si0,si1,si2,si3);
si0=l3;
si0=i32_load8_u(&i->m0,(U64)si0+60U);
l6=si0;
si1=4U;
si0=si0 != si1;
if(si0){
goto L30;
}
si0=l3;
si1=8U;
si0+=si1;
si1=l2;
si1=i32_load(&i->m0,(U64)si1);
si2=l2;
si2=i32_load(&i->m0,(U64)si2+4U);
si2=i32_load(&i->m0,(U64)si2+132U);
TF(i->t0,si2,void (*)(rustpythonInstance*,U32,U32))(i,si0,si1);
si0=l3;
si1=60U;
si0+=si1;
si1=l1;
si2=l3;
si2=i32_load(&i->m0,(U64)si2+8U);
si3=l3;
si3=i32_load(&i->m0,(U64)si3+12U);
f280(i,si0,si1,si2,si3);
si0=l3;
si0=i32_load8_u(&i->m0,(U64)si0+60U);
l6=si0;
si1=4U;
si0=si0 != si1;
if(si0){
goto L32;
}
si0=l3;
si1=72U;
si0+=si1;
si0=f442(i,si0);
l2=si0;
si0=!(si0);
if(si0){
goto L28;
}
goto L33;
}
L32:;
si0=l0;
si1=l3;
si1=i32_load(&i->m0,(U64)si1+61U);
i32_store(&i->m0,(U64)si0+1U,si1);
si0=l0;
si1=4U;
si0+=si1;
si1=l3;
si2=60U;
si1+=si2;
si2=4U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
goto L29;
L30:;
si0=l0;
si1=l3;
si1=i32_load(&i->m0,(U64)si1+61U);
i32_store(&i->m0,(U64)si0+1U,si1);
si0=l0;
si1=4U;
si0+=si1;
si1=l3;
si2=60U;
si1+=si2;
si2=4U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
L29:;
si0=l0;
si1=l6;
i32_store8(&i->m0,(U64)si0,si1);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+52U);
l5=si0;
si0=!(si0);
if(si0){
goto L34;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0+44U);
l2=si0;
L35:;
{
si0=l2;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L36;
}
si0=l2;
si1=4U;
si0+=si1;
f453(i,si0);
L36:;
si0=l2;
si1=16U;
si0+=si1;
l2=si0;
si0=l5;
si1=-1U;
si0+=si1;
l5=si0;
if(si0){
goto L35;
}
}
L34:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+48U);
si0=!(si0);
if(si0){
goto L3;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0+44U);
f15024(i,si0);
goto L3;
L28:;
si0=l10;
si1=1U;
si0+=si1;
l10=si0;
si1=l7;
si0=si0 < si1;
if(si0){
goto L22;
}
goto L5;
}
L6:;
si0=l3;
si1=0U;
i32_store(&i->m0,(U64)si0+68U,si1);
si0=l3;
sj1=1ULL;
i64_store(&i->m0,(U64)si0+60U,sj1);
si0=l3;
si1=3U;
i32_store8(&i->m0,(U64)si0+104U,si1);
si0=l3;
si1=32U;
i32_store(&i->m0,(U64)si0+88U,si1);
si0=l3;
si1=0U;
i32_store(&i->m0,(U64)si0+100U,si1);
si0=l3;
si1=1085664U;
i32_store(&i->m0,(U64)si0+96U,si1);
si0=l3;
si1=0U;
i32_store(&i->m0,(U64)si0+80U,si1);
si0=l3;
si1=0U;
i32_store(&i->m0,(U64)si0+72U,si1);
si0=l3;
si1=l3;
si2=60U;
si1+=si2;
i32_store(&i->m0,(U64)si0+92U,si1);
si0=l2;
si1=l3;
si2=72U;
si1+=si2;
si2=l10;
si2=i32_load(&i->m0,(U64)si2+12U);
si0=TF(i->t0,si2,U32 (*)(rustpythonInstance*,U32,U32))(i,si0,si1);
if(si0){
goto L37;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0+64U);
l13=si0;
si0=l1;
si1=l4;
si2=l3;
si2=i32_load(&i->m0,(U64)si2+60U);
l11=si2;
si3=l3;
si3=i32_load(&i->m0,(U64)si3+68U);
si2=f273(i,si2,si3);
l12=si2;
si3=l4;
si4=l12;
si3=si3 > si4;
si1=si3?si1:si2;
l4=si1;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l13;
si0=!(si0);
if(si0){
goto L2;
}
si0=l11;
f15024(i,si0);
goto L2;
L37:;
si0=1085688U;
si1=55U;
si2=l3;
si3=111U;
si2+=si3;
si3=1085744U;
si4=1085836U;
f641(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L5:;
si0=l0;
si1=4U;
i32_store8(&i->m0,(U64)si0,si1);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+52U);
l5=si0;
si0=!(si0);
if(si0){
goto L4;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0+44U);
l2=si0;
L38:;
{
si0=l2;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L39;
}
si0=l2;
si1=4U;
si0+=si1;
f453(i,si0);
L39:;
si0=l2;
si1=16U;
si0+=si1;
l2=si0;
si0=l5;
si1=-1U;
si0+=si1;
l5=si0;
if(si0){
goto L38;
}
}
L4:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+48U);
si0=!(si0);
if(si0){
goto L3;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0+44U);
f15024(i,si0);
L3:;
si0=l3;
si1=112U;
si0+=si1;
i->g0=si0;
goto L0;
L2:;
si0=l2;
si1=l10;
si1=i32_load(&i->m0,(U64)si1+124U);
si0=TF(i->t0,si1,U32 (*)(rustpythonInstance*,U32))(i,si0);
l13=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+52U);
si1=l13;
si0=si0 <= si1;
if(si0){
goto L41;
}
si0=1U;
l12=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+44U);
si1=l13;
si2=4U;
si1<<=(si2&31);
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L40;
}
L41:;
si0=0U;
l12=si0;
L40:;
si0=l3;
si1=l13;
i32_store(&i->m0,(U64)si0+68U,si1);
si0=l3;
si1=l12;
i32_store(&i->m0,(U64)si0+60U,si1);
si0=l3;
si1=l3;
si2=44U;
si1+=si2;
i32_store(&i->m0,(U64)si0+64U,si1);
si0=l3;
si1=0U;
i32_store(&i->m0,(U64)si0+80U,si1);
si0=l3;
si1=0U;
i32_store(&i->m0,(U64)si0+72U,si1);
si0=l3;
si1=60U;
si0+=si1;
si1=l3;
si2=72U;
si1+=si2;
si0=f351(i,si0,si1);
l13=si0;
si0=l3;
si1=32U;
si0+=si1;
si1=l2;
si2=l10;
si2=i32_load(&i->m0,(U64)si2+16U);
TF(i->t0,si2,void (*)(rustpythonInstance*,U32,U32))(i,si0,si1);
si0=l3;
si1=24U;
si0+=si1;
si1=l13;
si2=l3;
si2=i32_load(&i->m0,(U64)si2+32U);
si3=l3;
si3=i32_load(&i->m0,(U64)si3+36U);
si4=l2;
si5=l10;
f449(i,si0,si1,si2,si3,si4,si5);
goto L1;
}
L0:;
}

void f277(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
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
U32 si0,si1,si2,si3,si4,si5;
U64 sj1;
si0=i->g0;
si1=112U;
si0-=si1;
l4=si0;
i->g0=si0;
si0=2U;
l5=si0;
si0=l1;
si1=2U;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l4;
sj1=4ULL;
i64_store(&i->m0,(U64)si0+44U,sj1);
si0=l4;
sj1=0ULL;
i64_store(&i->m0,(U64)si0+52U,sj1);
si0=l2;
si1=l3;
si0=si0 == si1;
if(si0){
goto L1;
}
si0=l1;
si0=i32_load8_u(&i->m0,(U64)si0+21U);
si1=255U;
si0&=si1;
l6=si0;
L2:;
{
si0=l6;
si0=!(si0);
if(si0){
goto L4;
}
si0=l2;
l7=si0;
L5:;
{
si0=l7;
si1=4U;
si0=f385(i,si0,si1);
if(si0){
goto L6;
}
si0=l7;
si1=17U;
si0=f385(i,si0,si1);
si0=!(si0);
if(si0){
goto L3;
}
si0=l7;
si1=16U;
si0=f385(i,si0,si1);
si0=l7;
si1=7U;
si0=f385(i,si0,si1);
if(si0){
goto L3;
}
L6:;
si0=l7;
si1=272U;
si0+=si1;
l7=si0;
si1=l3;
si0=si0 != si1;
if(si0){
goto L5;
}
goto L1;
}
L4:;
si0=l2;
l7=si0;
L7:;
{
si0=l7;
si1=4U;
si0=f385(i,si0,si1);
if(si0){
goto L8;
}
si0=l7;
si1=17U;
si0=f385(i,si0,si1);
si0=l7;
si1=16U;
si0=f385(i,si0,si1);
si0=!(si0);
if(si0){
goto L3;
}
si0=l7;
si1=7U;
si0=f385(i,si0,si1);
if(si0){
goto L3;
}
L8:;
si0=l7;
si1=272U;
si0+=si1;
l7=si0;
si1=l3;
si0=si0 != si1;
if(si0){
goto L7;
}
goto L1;
}
L3:;
si0=l7;
si1=272U;
si0+=si1;
l2=si0;
si0=l7;
si0=f386(i,si0);
si0=!(si0);
if(si0){
goto L9;
}
si0=l4;
si1=0U;
i32_store(&i->m0,(U64)si0+68U,si1);
si0=l4;
sj1=1ULL;
i64_store(&i->m0,(U64)si0+60U,sj1);
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
si1=1085664U;
i32_store(&i->m0,(U64)si0+96U,si1);
si0=l4;
si1=0U;
i32_store(&i->m0,(U64)si0+80U,si1);
si0=l4;
si1=0U;
i32_store(&i->m0,(U64)si0+72U,si1);
si0=l4;
si1=l4;
si2=60U;
si1+=si2;
i32_store(&i->m0,(U64)si0+92U,si1);
si0=l7;
si1=l4;
si2=72U;
si1+=si2;
si0=f378(i,si0,si1);
if(si0){
goto L10;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0+64U);
l8=si0;
si0=l1;
si1=l5;
si2=l4;
si2=i32_load(&i->m0,(U64)si2+60U);
l9=si2;
si3=l4;
si3=i32_load(&i->m0,(U64)si3+68U);
si2=f273(i,si2,si3);
l10=si2;
si3=l5;
si4=l10;
si3=si3 > si4;
si1=si3?si1:si2;
l5=si1;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l8;
si0=!(si0);
if(si0){
goto L9;
}
si0=l9;
f15024(i,si0);
goto L9;
L10:;
si0=1085688U;
si1=55U;
si2=l4;
si3=111U;
si2+=si3;
si3=1085744U;
si4=1085836U;
f641(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L9:;
si0=l7;
si0=f404(i,si0);
l8=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+52U);
si1=l8;
si0=si0 <= si1;
if(si0){
goto L12;
}
si0=1U;
l10=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+44U);
si1=l8;
si2=4U;
si1<<=(si2&31);
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L11;
}
L12:;
si0=0U;
l10=si0;
L11:;
si0=l4;
si1=l8;
i32_store(&i->m0,(U64)si0+68U,si1);
si0=l4;
si1=l10;
i32_store(&i->m0,(U64)si0+60U,si1);
si0=l4;
si1=l4;
si2=44U;
si1+=si2;
i32_store(&i->m0,(U64)si0+64U,si1);
si0=l4;
si1=0U;
i32_store(&i->m0,(U64)si0+80U,si1);
si0=l4;
si1=0U;
i32_store(&i->m0,(U64)si0+72U,si1);
si0=l4;
si1=60U;
si0+=si1;
si1=l4;
si2=72U;
si1+=si2;
si0=f351(i,si0,si1);
l8=si0;
si0=l4;
si1=32U;
si0+=si1;
si1=l7;
f379(i,si0,si1);
si0=l4;
si1=24U;
si0+=si1;
si1=l8;
si2=l4;
si2=i32_load(&i->m0,(U64)si2+32U);
si3=l4;
si3=i32_load(&i->m0,(U64)si3+36U);
si4=l7;
si5=1086180U;
f449(i,si0,si1,si2,si3,si4,si5);
si0=l2;
si1=l3;
si0=si0 != si1;
if(si0){
goto L2;
}
}
L1:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+52U);
l5=si0;
if(si0){
goto L15;
}
si0=l0;
si1=4U;
i32_store8(&i->m0,(U64)si0,si1);
goto L14;
L15:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+44U);
l3=si0;
si1=l5;
si2=4U;
si1<<=(si2&31);
si0+=si1;
l2=si0;
si0=1U;
l11=si0;
si0=0U;
l8=si0;
L16:;
{
si0=l3;
l7=si0;
L19:;
{
si0=l2;
l3=si0;
si0=l7;
si1=l2;
si0=si0 == si1;
if(si0){
goto L20;
}
si0=l7;
si1=16U;
si0+=si1;
l3=si0;
si0=l7;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L18;
}
L20:;
si0=l3;
l7=si0;
si0=l5;
si1=l8;
si2=1U;
si1+=si2;
l8=si1;
si0=si0 != si1;
if(si0){
goto L19;
}
goto L17;
}
L18:;
si0=l7;
si0=i32_load(&i->m0,(U64)si0+4U);
l6=si0;
if(si0){
goto L22;
}
si0=0U;
l7=si0;
si0=0U;
l12=si0;
goto L21;
L22:;
si0=l7;
si1=12U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l12=si0;
si0=l7;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l10=si0;
si0=1U;
l7=si0;
si0=l6;
l13=si0;
si0=l6;
l9=si0;
L21:;
si0=l4;
si1=l12;
i32_store(&i->m0,(U64)si0+104U,si1);
si0=l4;
si1=l10;
i32_store(&i->m0,(U64)si0+100U,si1);
si0=l4;
si1=l9;
i32_store(&i->m0,(U64)si0+96U,si1);
si0=l4;
si1=0U;
i32_store(&i->m0,(U64)si0+92U,si1);
si0=l4;
si1=l7;
i32_store(&i->m0,(U64)si0+88U,si1);
si0=l4;
si1=l10;
i32_store(&i->m0,(U64)si0+84U,si1);
si0=l4;
si1=l13;
i32_store(&i->m0,(U64)si0+80U,si1);
si0=l4;
si1=0U;
i32_store(&i->m0,(U64)si0+76U,si1);
si0=l4;
si1=l7;
i32_store(&i->m0,(U64)si0+72U,si1);
si0=l4;
si1=72U;
si0+=si1;
si0=f442(i,si0);
l7=si0;
si0=!(si0);
if(si0){
goto L23;
}
si0=l11;
si1=1U;
si0&=si1;
if(si0){
goto L26;
}
si0=l4;
si1=60U;
si0+=si1;
si1=l1;
si1=i32_load(&i->m0,(U64)si1);
si2=1086476U;
si3=1U;
si4=l1;
si4=i32_load(&i->m0,(U64)si4+4U);
si4=i32_load(&i->m0,(U64)si4+28U);
TF(i->t0,si4,void (*)(rustpythonInstance*,U32,U32,U32,U32))(i,si0,si1,si2,si3);
si0=l4;
si0=i32_load8_u(&i->m0,(U64)si0+60U);
l6=si0;
si1=4U;
si0=si0 != si1;
if(si0){
goto L25;
}
L26:;
si0=l4;
si1=16U;
si0+=si1;
si1=l7;
si1=i32_load(&i->m0,(U64)si1);
si2=l7;
si2=i32_load(&i->m0,(U64)si2+4U);
si2=i32_load(&i->m0,(U64)si2+132U);
TF(i->t0,si2,void (*)(rustpythonInstance*,U32,U32))(i,si0,si1);
si0=l4;
si1=60U;
si0+=si1;
si1=l1;
si2=l4;
si2=i32_load(&i->m0,(U64)si2+16U);
si3=l4;
si3=i32_load(&i->m0,(U64)si3+20U);
f280(i,si0,si1,si2,si3);
si0=l4;
si0=i32_load8_u(&i->m0,(U64)si0+60U);
l6=si0;
si1=4U;
si0=si0 != si1;
if(si0){
goto L27;
}
si0=0U;
l11=si0;
si0=l4;
si1=72U;
si0+=si1;
si0=f442(i,si0);
l7=si0;
si0=!(si0);
if(si0){
goto L23;
}
L28:;
{
si0=l4;
si1=60U;
si0+=si1;
si1=l1;
si1=i32_load(&i->m0,(U64)si1);
si2=1086476U;
si3=1U;
si4=l1;
si4=i32_load(&i->m0,(U64)si4+4U);
si4=i32_load(&i->m0,(U64)si4+28U);
TF(i->t0,si4,void (*)(rustpythonInstance*,U32,U32,U32,U32))(i,si0,si1,si2,si3);
si0=l4;
si0=i32_load8_u(&i->m0,(U64)si0+60U);
l6=si0;
si1=4U;
si0=si0 != si1;
if(si0){
goto L25;
}
si0=l4;
si1=8U;
si0+=si1;
si1=l7;
si1=i32_load(&i->m0,(U64)si1);
si2=l7;
si2=i32_load(&i->m0,(U64)si2+4U);
si2=i32_load(&i->m0,(U64)si2+132U);
TF(i->t0,si2,void (*)(rustpythonInstance*,U32,U32))(i,si0,si1);
si0=l4;
si1=60U;
si0+=si1;
si1=l1;
si2=l4;
si2=i32_load(&i->m0,(U64)si2+8U);
si3=l4;
si3=i32_load(&i->m0,(U64)si3+12U);
f280(i,si0,si1,si2,si3);
si0=l4;
si0=i32_load8_u(&i->m0,(U64)si0+60U);
l6=si0;
si1=4U;
si0=si0 != si1;
if(si0){
goto L27;
}
si0=l4;
si1=72U;
si0+=si1;
si0=f442(i,si0);
l7=si0;
si0=!(si0);
if(si0){
goto L23;
}
goto L28;
}
L27:;
si0=l0;
si1=l4;
si1=i32_load(&i->m0,(U64)si1+61U);
i32_store(&i->m0,(U64)si0+1U,si1);
si0=l0;
si1=4U;
si0+=si1;
si1=l4;
si2=60U;
si1+=si2;
si2=4U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
goto L24;
L25:;
si0=l0;
si1=l4;
si1=i32_load(&i->m0,(U64)si1+61U);
i32_store(&i->m0,(U64)si0+1U,si1);
si0=l0;
si1=4U;
si0+=si1;
si1=l4;
si2=60U;
si1+=si2;
si2=4U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
L24:;
si0=l0;
si1=l6;
i32_store8(&i->m0,(U64)si0,si1);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+52U);
l3=si0;
si0=!(si0);
if(si0){
goto L29;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0+44U);
l7=si0;
L30:;
{
si0=l7;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L31;
}
si0=l7;
si1=4U;
si0+=si1;
f453(i,si0);
L31:;
si0=l7;
si1=16U;
si0+=si1;
l7=si0;
si0=l3;
si1=-1U;
si0+=si1;
l3=si0;
if(si0){
goto L30;
}
}
L29:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+48U);
si0=!(si0);
if(si0){
goto L13;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0+44U);
f15024(i,si0);
goto L13;
L23:;
si0=l8;
si1=1U;
si0+=si1;
l8=si0;
si1=l5;
si0=si0 < si1;
if(si0){
goto L16;
}
L17:;
}
si0=l0;
si1=4U;
i32_store8(&i->m0,(U64)si0,si1);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+52U);
l3=si0;
si0=!(si0);
if(si0){
goto L14;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0+44U);
l7=si0;
L32:;
{
si0=l7;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L33;
}
si0=l7;
si1=4U;
si0+=si1;
f453(i,si0);
L33:;
si0=l7;
si1=16U;
si0+=si1;
l7=si0;
si0=l3;
si1=-1U;
si0+=si1;
l3=si0;
if(si0){
goto L32;
}
}
L14:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+48U);
si0=!(si0);
if(si0){
goto L13;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0+44U);
f15024(i,si0);
L13:;
si0=l4;
si1=112U;
si0+=si1;
i->g0=si0;
L0:;
}

void f278(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
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
U32 si0,si1,si2,si3,si4,si5;
U64 sj1;
si0=i->g0;
si1=112U;
si0-=si1;
l4=si0;
i->g0=si0;
si0=2U;
l5=si0;
si0=l1;
si1=2U;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l4;
sj1=4ULL;
i64_store(&i->m0,(U64)si0+44U,sj1);
si0=l4;
sj1=0ULL;
i64_store(&i->m0,(U64)si0+52U,sj1);
si0=l2;
si1=l3;
si0=si0 == si1;
if(si0){
goto L1;
}
si0=l1;
si0=i32_load8_u(&i->m0,(U64)si0+21U);
si1=255U;
si0&=si1;
l6=si0;
L2:;
{
si0=l6;
si0=!(si0);
if(si0){
goto L4;
}
si0=l2;
l7=si0;
L5:;
{
si0=l7;
si1=4U;
si0=f464(i,si0,si1);
if(si0){
goto L6;
}
si0=l7;
si1=17U;
si0=f464(i,si0,si1);
si0=!(si0);
if(si0){
goto L3;
}
si0=l7;
si1=16U;
si0=f464(i,si0,si1);
si0=l7;
si1=7U;
si0=f464(i,si0,si1);
if(si0){
goto L3;
}
L6:;
si0=l7;
si1=120U;
si0+=si1;
l7=si0;
si1=l3;
si0=si0 != si1;
if(si0){
goto L5;
}
goto L1;
}
L4:;
si0=l2;
l7=si0;
L7:;
{
si0=l7;
si1=4U;
si0=f464(i,si0,si1);
if(si0){
goto L8;
}
si0=l7;
si1=17U;
si0=f464(i,si0,si1);
si0=l7;
si1=16U;
si0=f464(i,si0,si1);
si0=!(si0);
if(si0){
goto L3;
}
si0=l7;
si1=7U;
si0=f464(i,si0,si1);
if(si0){
goto L3;
}
L8:;
si0=l7;
si1=120U;
si0+=si1;
l7=si0;
si1=l3;
si0=si0 != si1;
if(si0){
goto L7;
}
goto L1;
}
L3:;
si0=l7;
si1=120U;
si0+=si1;
l2=si0;
si0=l7;
si0=f479(i,si0);
si0=!(si0);
if(si0){
goto L9;
}
si0=l4;
si1=0U;
i32_store(&i->m0,(U64)si0+68U,si1);
si0=l4;
sj1=1ULL;
i64_store(&i->m0,(U64)si0+60U,sj1);
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
si1=1085664U;
i32_store(&i->m0,(U64)si0+96U,si1);
si0=l4;
si1=0U;
i32_store(&i->m0,(U64)si0+80U,si1);
si0=l4;
si1=0U;
i32_store(&i->m0,(U64)si0+72U,si1);
si0=l4;
si1=l4;
si2=60U;
si1+=si2;
i32_store(&i->m0,(U64)si0+92U,si1);
si0=l7;
si1=l4;
si2=72U;
si1+=si2;
si0=f458(i,si0,si1);
if(si0){
goto L10;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0+64U);
l8=si0;
si0=l1;
si1=l5;
si2=l4;
si2=i32_load(&i->m0,(U64)si2+60U);
l9=si2;
si3=l4;
si3=i32_load(&i->m0,(U64)si3+68U);
si2=f273(i,si2,si3);
l10=si2;
si3=l5;
si4=l10;
si3=si3 > si4;
si1=si3?si1:si2;
l5=si1;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l8;
si0=!(si0);
if(si0){
goto L9;
}
si0=l9;
f15024(i,si0);
goto L9;
L10:;
si0=1085688U;
si1=55U;
si2=l4;
si3=111U;
si2+=si3;
si3=1085744U;
si4=1085836U;
f641(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L9:;
si0=l7;
si0=f481(i,si0);
l8=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+52U);
si1=l8;
si0=si0 <= si1;
if(si0){
goto L12;
}
si0=1U;
l10=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+44U);
si1=l8;
si2=4U;
si1<<=(si2&31);
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L11;
}
L12:;
si0=0U;
l10=si0;
L11:;
si0=l4;
si1=l8;
i32_store(&i->m0,(U64)si0+68U,si1);
si0=l4;
si1=l10;
i32_store(&i->m0,(U64)si0+60U,si1);
si0=l4;
si1=l4;
si2=44U;
si1+=si2;
i32_store(&i->m0,(U64)si0+64U,si1);
si0=l4;
si1=0U;
i32_store(&i->m0,(U64)si0+80U,si1);
si0=l4;
si1=0U;
i32_store(&i->m0,(U64)si0+72U,si1);
si0=l4;
si1=60U;
si0+=si1;
si1=l4;
si2=72U;
si1+=si2;
si0=f351(i,si0,si1);
l8=si0;
si0=l4;
si1=32U;
si0+=si1;
si1=l7;
f459(i,si0,si1);
si0=l4;
si1=24U;
si0+=si1;
si1=l8;
si2=l4;
si2=i32_load(&i->m0,(U64)si2+32U);
si3=l4;
si3=i32_load(&i->m0,(U64)si3+36U);
si4=l7;
si5=1086028U;
f449(i,si0,si1,si2,si3,si4,si5);
si0=l2;
si1=l3;
si0=si0 != si1;
if(si0){
goto L2;
}
}
L1:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+52U);
l5=si0;
if(si0){
goto L15;
}
si0=l0;
si1=4U;
i32_store8(&i->m0,(U64)si0,si1);
goto L14;
L15:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+44U);
l3=si0;
si1=l5;
si2=4U;
si1<<=(si2&31);
si0+=si1;
l2=si0;
si0=1U;
l11=si0;
si0=0U;
l8=si0;
L16:;
{
si0=l3;
l7=si0;
L19:;
{
si0=l2;
l3=si0;
si0=l7;
si1=l2;
si0=si0 == si1;
if(si0){
goto L20;
}
si0=l7;
si1=16U;
si0+=si1;
l3=si0;
si0=l7;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L18;
}
L20:;
si0=l3;
l7=si0;
si0=l5;
si1=l8;
si2=1U;
si1+=si2;
l8=si1;
si0=si0 != si1;
if(si0){
goto L19;
}
goto L17;
}
L18:;
si0=l7;
si0=i32_load(&i->m0,(U64)si0+4U);
l6=si0;
if(si0){
goto L22;
}
si0=0U;
l7=si0;
si0=0U;
l12=si0;
goto L21;
L22:;
si0=l7;
si1=12U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l12=si0;
si0=l7;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l10=si0;
si0=1U;
l7=si0;
si0=l6;
l13=si0;
si0=l6;
l9=si0;
L21:;
si0=l4;
si1=l12;
i32_store(&i->m0,(U64)si0+104U,si1);
si0=l4;
si1=l10;
i32_store(&i->m0,(U64)si0+100U,si1);
si0=l4;
si1=l9;
i32_store(&i->m0,(U64)si0+96U,si1);
si0=l4;
si1=0U;
i32_store(&i->m0,(U64)si0+92U,si1);
si0=l4;
si1=l7;
i32_store(&i->m0,(U64)si0+88U,si1);
si0=l4;
si1=l10;
i32_store(&i->m0,(U64)si0+84U,si1);
si0=l4;
si1=l13;
i32_store(&i->m0,(U64)si0+80U,si1);
si0=l4;
si1=0U;
i32_store(&i->m0,(U64)si0+76U,si1);
si0=l4;
si1=l7;
i32_store(&i->m0,(U64)si0+72U,si1);
si0=l4;
si1=72U;
si0+=si1;
si0=f442(i,si0);
l7=si0;
si0=!(si0);
if(si0){
goto L23;
}
si0=l11;
si1=1U;
si0&=si1;
if(si0){
goto L26;
}
si0=l4;
si1=60U;
si0+=si1;
si1=l1;
si1=i32_load(&i->m0,(U64)si1);
si2=1086476U;
si3=1U;
si4=l1;
si4=i32_load(&i->m0,(U64)si4+4U);
si4=i32_load(&i->m0,(U64)si4+28U);
TF(i->t0,si4,void (*)(rustpythonInstance*,U32,U32,U32,U32))(i,si0,si1,si2,si3);
si0=l4;
si0=i32_load8_u(&i->m0,(U64)si0+60U);
l6=si0;
si1=4U;
si0=si0 != si1;
if(si0){
goto L25;
}
L26:;
si0=l4;
si1=16U;
si0+=si1;
si1=l7;
si1=i32_load(&i->m0,(U64)si1);
si2=l7;
si2=i32_load(&i->m0,(U64)si2+4U);
si2=i32_load(&i->m0,(U64)si2+132U);
TF(i->t0,si2,void (*)(rustpythonInstance*,U32,U32))(i,si0,si1);
si0=l4;
si1=60U;
si0+=si1;
si1=l1;
si2=l4;
si2=i32_load(&i->m0,(U64)si2+16U);
si3=l4;
si3=i32_load(&i->m0,(U64)si3+20U);
f280(i,si0,si1,si2,si3);
si0=l4;
si0=i32_load8_u(&i->m0,(U64)si0+60U);
l6=si0;
si1=4U;
si0=si0 != si1;
if(si0){
goto L27;
}
si0=0U;
l11=si0;
si0=l4;
si1=72U;
si0+=si1;
si0=f442(i,si0);
l7=si0;
si0=!(si0);
if(si0){
goto L23;
}
L28:;
{
si0=l4;
si1=60U;
si0+=si1;
si1=l1;
si1=i32_load(&i->m0,(U64)si1);
si2=1086476U;
si3=1U;
si4=l1;
si4=i32_load(&i->m0,(U64)si4+4U);
si4=i32_load(&i->m0,(U64)si4+28U);
TF(i->t0,si4,void (*)(rustpythonInstance*,U32,U32,U32,U32))(i,si0,si1,si2,si3);
si0=l4;
si0=i32_load8_u(&i->m0,(U64)si0+60U);
l6=si0;
si1=4U;
si0=si0 != si1;
if(si0){
goto L25;
}
si0=l4;
si1=8U;
si0+=si1;
si1=l7;
si1=i32_load(&i->m0,(U64)si1);
si2=l7;
si2=i32_load(&i->m0,(U64)si2+4U);
si2=i32_load(&i->m0,(U64)si2+132U);
TF(i->t0,si2,void (*)(rustpythonInstance*,U32,U32))(i,si0,si1);
si0=l4;
si1=60U;
si0+=si1;
si1=l1;
si2=l4;
si2=i32_load(&i->m0,(U64)si2+8U);
si3=l4;
si3=i32_load(&i->m0,(U64)si3+12U);
f280(i,si0,si1,si2,si3);
si0=l4;
si0=i32_load8_u(&i->m0,(U64)si0+60U);
l6=si0;
si1=4U;
si0=si0 != si1;
if(si0){
goto L27;
}
si0=l4;
si1=72U;
si0+=si1;
si0=f442(i,si0);
l7=si0;
si0=!(si0);
if(si0){
goto L23;
}
goto L28;
}
L27:;
si0=l0;
si1=l4;
si1=i32_load(&i->m0,(U64)si1+61U);
i32_store(&i->m0,(U64)si0+1U,si1);
si0=l0;
si1=4U;
si0+=si1;
si1=l4;
si2=60U;
si1+=si2;
si2=4U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
goto L24;
L25:;
si0=l0;
si1=l4;
si1=i32_load(&i->m0,(U64)si1+61U);
i32_store(&i->m0,(U64)si0+1U,si1);
si0=l0;
si1=4U;
si0+=si1;
si1=l4;
si2=60U;
si1+=si2;
si2=4U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
L24:;
si0=l0;
si1=l6;
i32_store8(&i->m0,(U64)si0,si1);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+52U);
l3=si0;
si0=!(si0);
if(si0){
goto L29;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0+44U);
l7=si0;
L30:;
{
si0=l7;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L31;
}
si0=l7;
si1=4U;
si0+=si1;
f453(i,si0);
L31:;
si0=l7;
si1=16U;
si0+=si1;
l7=si0;
si0=l3;
si1=-1U;
si0+=si1;
l3=si0;
if(si0){
goto L30;
}
}
L29:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+48U);
si0=!(si0);
if(si0){
goto L13;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0+44U);
f15024(i,si0);
goto L13;
L23:;
si0=l8;
si1=1U;
si0+=si1;
l8=si0;
si1=l5;
si0=si0 < si1;
if(si0){
goto L16;
}
L17:;
}
si0=l0;
si1=4U;
i32_store8(&i->m0,(U64)si0,si1);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+52U);
l3=si0;
si0=!(si0);
if(si0){
goto L14;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0+44U);
l7=si0;
L32:;
{
si0=l7;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L33;
}
si0=l7;
si1=4U;
si0+=si1;
f453(i,si0);
L33:;
si0=l7;
si1=16U;
si0+=si1;
l7=si0;
si0=l3;
si1=-1U;
si0+=si1;
l3=si0;
if(si0){
goto L32;
}
}
L14:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+48U);
si0=!(si0);
if(si0){
goto L13;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0+44U);
f15024(i,si0);
L13:;
si0=l4;
si1=112U;
si0+=si1;
i->g0=si0;
L0:;
}

void f279(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
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
U32 si0,si1,si2,si3,si4,si5;
U64 sj0,sj1;
si0=i->g0;
si1=112U;
si0-=si1;
l3=si0;
i->g0=si0;
si0=l2;
si1=220U;
si0+=si1;
l4=si0;
si0=0U;
l5=si0;
si0=0U;
l6=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+8U);
l7=si0;
si0=!(si0);
if(si0){
goto L1;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0);
l8=si0;
si1=l7;
si2=248U;
si1*=si2;
si0+=si1;
l9=si0;
si0=0U;
l6=si0;
si0=0U;
l10=si0;
L2:;
{
si0=l9;
l11=si0;
si0=l8;
si1=l9;
si0=si0 == si1;
if(si0){
goto L4;
}
si0=l8;
si1=248U;
si0+=si1;
l11=si0;
si0=l8;
sj0=i64_load(&i->m0,(U64)si0);
sj1=2ULL;
si0=sj0 != sj1;
if(si0){
goto L3;
}
L4:;
si0=l11;
l8=si0;
si0=l7;
si1=l10;
si2=1U;
si1+=si2;
l10=si1;
si0=si0 != si1;
if(si0){
goto L2;
}
goto L1;
L3:;
si0=l8;
si1=188U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=-1U;
si0^=si1;
si1=4U;
si0>>=(si1&31);
si1=1U;
si0&=si1;
si1=l6;
si0+=si1;
l6=si0;
si0=l11;
l8=si0;
si0=l10;
si1=1U;
si0+=si1;
l10=si0;
si1=l7;
si0=si0 < si1;
if(si0){
goto L2;
}
}
L1:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
l9=si0;
si0=l2;
si1=232U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l10=si0;
si0=l2;
si1=244U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l8=si0;
si0=!(si0);
if(si0){
goto L5;
}
si0=l8;
si1=312U;
si0*=si1;
l11=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+236U);
si1=80U;
si0+=si1;
l8=si0;
L6:;
{
si0=l8;
si0=i32_load(&i->m0,(U64)si0);
si1=4U;
si0=si0 != si1;
if(si0){
goto L8;
}
si0=l8;
si1=-8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=i32_load(&i->m0,(U64)si0);
si1=1886152040U;
si0=si0 == si1;
if(si0){
goto L7;
}
L8:;
si0=l8;
si1=-63U;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=16U;
si0&=si1;
if(si0){
goto L7;
}
si0=1U;
l5=si0;
goto L5;
L7:;
si0=l8;
si1=312U;
si0+=si1;
l8=si0;
si0=l11;
si1=-312U;
si0+=si1;
l11=si0;
if(si0){
goto L6;
}
}
L5:;
si0=l10;
si1=l9;
si0|=si1;
si0=!(si0);
if(si0){
goto L33;
}
si0=l2;
sj0=i64_load(&i->m0,(U64)si0+16U);
sj1=32ULL;
sj0&=sj1;
sj1=0ULL;
si0=sj0 != sj1;
if(si0){
goto L32;
}
L33:;
si0=l9;
if(si0){
goto L34;
}
si0=l10;
if(si0){
goto L24;
}
si0=l6;
if(si0){
goto L19;
}
si0=l5;
if(si0){
goto L14;
}
goto L10;
L34:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
l8=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l11=si0;
si0=l1;
si0=i32_load8_u(&i->m0,(U64)si0+19U);
if(si0){
goto L31;
}
si0=l3;
si1=84U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=1U;
i32_store(&i->m0,(U64)si0+76U,si1);
si0=l3;
si1=1086980U;
i32_store(&i->m0,(U64)si0+72U,si1);
si0=l3;
si1=l3;
si2=108U;
si1+=si2;
i32_store(&i->m0,(U64)si0+80U,si1);
si0=l3;
si1=40U;
si0+=si1;
si1=l11;
si2=l3;
si3=72U;
si2+=si3;
si3=l8;
si3=i32_load(&i->m0,(U64)si3+36U);
TF(i->t0,si3,void (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
goto L25;
L32:;
si0=l3;
si1=24U;
si0+=si1;
si1=12U;
si0+=si1;
si1=l2;
si1=i32_load(&i->m0,(U64)si1+224U);
l8=si1;
si2=l10;
si3=272U;
si2*=si3;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=l8;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l3;
si1=l2;
si1=i32_load(&i->m0,(U64)si1+212U);
l8=si1;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l3;
si1=l8;
si2=l9;
si3=120U;
si2*=si3;
si1+=si2;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
l8=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l11=si0;
si0=l1;
si0=i32_load8_u(&i->m0,(U64)si0+19U);
si0=!(si0);
if(si0){
goto L39;
}
si0=l1;
si0=i32_load8_u(&i->m0,(U64)si0+16U);
switch(si0){
case 0:
goto L38;
case 1:
goto L37;
case 2:
goto L36;
default:
goto L38;
}
L39:;
si0=l3;
si1=72U;
si0+=si1;
si1=12U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=1U;
i32_store(&i->m0,(U64)si0+76U,si1);
si0=l3;
si1=1087000U;
i32_store(&i->m0,(U64)si0+72U,si1);
si0=l3;
si1=l3;
si2=108U;
si1+=si2;
i32_store(&i->m0,(U64)si0+80U,si1);
si0=l3;
si1=40U;
si0+=si1;
si1=l11;
si2=l3;
si3=72U;
si2+=si3;
si3=l8;
si3=i32_load(&i->m0,(U64)si3+36U);
TF(i->t0,si3,void (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
goto L30;
L38:;
si0=l3;
si1=68U;
si0+=si1;
si1=9U;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=1086990U;
i32_store(&i->m0,(U64)si0+64U,si1);
si0=l3;
si1=1U;
i32_store(&i->m0,(U64)si0+60U,si1);
goto L35;
L37:;
si0=l3;
si1=68U;
si0+=si1;
si1=9U;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=1086990U;
i32_store(&i->m0,(U64)si0+64U,si1);
si0=l3;
si1=1U;
i32_store(&i->m0,(U64)si0+60U,si1);
goto L35;
L36:;
si0=l3;
si1=68U;
si0+=si1;
si1=9U;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=1086990U;
i32_store(&i->m0,(U64)si0+64U,si1);
si0=l3;
si1=3U;
i32_store(&i->m0,(U64)si0+60U,si1);
L35:;
si0=l3;
si1=84U;
si0+=si1;
sj1=1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=155U;
i32_store(&i->m0,(U64)si0+52U,si1);
si0=l3;
si1=1U;
i32_store(&i->m0,(U64)si0+76U,si1);
si0=l3;
si1=1086468U;
i32_store(&i->m0,(U64)si0+72U,si1);
si0=l3;
si1=l3;
si2=60U;
si1+=si2;
i32_store(&i->m0,(U64)si0+48U,si1);
si0=l3;
si1=l3;
si2=48U;
si1+=si2;
i32_store(&i->m0,(U64)si0+80U,si1);
si0=l3;
si1=40U;
si0+=si1;
si1=l11;
si2=l3;
si3=72U;
si2+=si3;
si3=l8;
si3=i32_load(&i->m0,(U64)si3+36U);
TF(i->t0,si3,void (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
goto L30;
L31:;
si0=l1;
si0=i32_load8_u(&i->m0,(U64)si0+16U);
switch(si0){
case 0:
goto L27;
case 1:
goto L28;
case 2:
goto L29;
default:
goto L27;
}
L30:;
si0=l3;
si0=i32_load8_u(&i->m0,(U64)si0+40U);
l8=si0;
si1=4U;
si0=si0 != si1;
if(si0){
goto L40;
}
si0=l3;
si1=60U;
si0+=si1;
si1=l1;
si2=l3;
si3=24U;
si2+=si3;
f276(i,si0,si1,si2);
si0=l3;
si0=i32_load8_u(&i->m0,(U64)si0+60U);
l8=si0;
si1=4U;
si0=si0 == si1;
if(si0){
goto L20;
}
si0=l3;
si1=72U;
si0+=si1;
si1=4U;
si0+=si1;
si1=l3;
si2=60U;
si1+=si2;
si2=4U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=l3;
si1=i32_load(&i->m0,(U64)si1+61U);
i32_store(&i->m0,(U64)si0+73U,si1);
si0=l3;
si1=l8;
i32_store8(&i->m0,(U64)si0+72U,si1);
si0=l0;
si1=l3;
si2=72U;
si1+=si2;
f578(i,si0,si1);
goto L9;
L40:;
si0=l3;
si1=72U;
si0+=si1;
si1=4U;
si0+=si1;
si1=l3;
si2=40U;
si1+=si2;
si2=4U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=l3;
si1=i32_load(&i->m0,(U64)si1+41U);
i32_store(&i->m0,(U64)si0+73U,si1);
si0=l3;
si1=l8;
i32_store8(&i->m0,(U64)si0+72U,si1);
si0=l0;
si1=l3;
si2=72U;
si1+=si2;
f578(i,si0,si1);
goto L9;
L29:;
si0=l3;
si1=68U;
si0+=si1;
si1=7U;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=1086972U;
i32_store(&i->m0,(U64)si0+64U,si1);
si0=l3;
si1=3U;
i32_store(&i->m0,(U64)si0+60U,si1);
goto L26;
L28:;
si0=l3;
si1=68U;
si0+=si1;
si1=7U;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=1086972U;
i32_store(&i->m0,(U64)si0+64U,si1);
si0=l3;
si1=1U;
i32_store(&i->m0,(U64)si0+60U,si1);
goto L26;
L27:;
si0=l3;
si1=68U;
si0+=si1;
si1=7U;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=1086972U;
i32_store(&i->m0,(U64)si0+64U,si1);
si0=l3;
si1=1U;
i32_store(&i->m0,(U64)si0+60U,si1);
L26:;
si0=l3;
si1=84U;
si0+=si1;
sj1=1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=155U;
i32_store(&i->m0,(U64)si0+52U,si1);
si0=l3;
si1=1U;
i32_store(&i->m0,(U64)si0+76U,si1);
si0=l3;
si1=1086468U;
i32_store(&i->m0,(U64)si0+72U,si1);
si0=l3;
si1=l3;
si2=60U;
si1+=si2;
i32_store(&i->m0,(U64)si0+48U,si1);
si0=l3;
si1=l3;
si2=48U;
si1+=si2;
i32_store(&i->m0,(U64)si0+80U,si1);
si0=l3;
si1=40U;
si0+=si1;
si1=l11;
si2=l3;
si3=72U;
si2+=si3;
si3=l8;
si3=i32_load(&i->m0,(U64)si3+36U);
TF(i->t0,si3,void (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
L25:;
si0=l3;
si0=i32_load8_u(&i->m0,(U64)si0+40U);
l8=si0;
si1=4U;
si0=si0 != si1;
if(si0){
goto L43;
}
si0=l3;
si1=60U;
si0+=si1;
si1=l1;
si2=l2;
si2=i32_load(&i->m0,(U64)si2+212U);
l8=si2;
si3=l8;
si4=l2;
si4=i32_load(&i->m0,(U64)si4+220U);
si5=120U;
si4*=si5;
si3+=si4;
f278(i,si0,si1,si2,si3);
si0=l3;
si0=i32_load8_u(&i->m0,(U64)si0+60U);
l8=si0;
si1=4U;
si0=si0 != si1;
if(si0){
goto L42;
}
si0=l10;
if(si0){
goto L41;
}
goto L20;
L43:;
si0=l3;
si1=72U;
si0+=si1;
si1=4U;
si0+=si1;
si1=l3;
si2=40U;
si1+=si2;
si2=4U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=l3;
si1=i32_load(&i->m0,(U64)si1+41U);
i32_store(&i->m0,(U64)si0+73U,si1);
si0=l3;
si1=l8;
i32_store8(&i->m0,(U64)si0+72U,si1);
si0=l0;
si1=l3;
si2=72U;
si1+=si2;
f578(i,si0,si1);
goto L9;
L42:;
si0=l3;
si1=72U;
si0+=si1;
si1=4U;
si0+=si1;
si1=l3;
si2=60U;
si1+=si2;
si2=4U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=l3;
si1=i32_load(&i->m0,(U64)si1+61U);
i32_store(&i->m0,(U64)si0+73U,si1);
si0=l3;
si1=l8;
i32_store8(&i->m0,(U64)si0+72U,si1);
si0=l0;
si1=l3;
si2=72U;
si1+=si2;
f578(i,si0,si1);
goto L9;
L41:;
si0=l3;
si1=60U;
si0+=si1;
si1=l1;
si1=i32_load(&i->m0,(U64)si1);
si2=1086988U;
si3=2U;
si4=l1;
si4=i32_load(&i->m0,(U64)si4+4U);
si4=i32_load(&i->m0,(U64)si4+28U);
TF(i->t0,si4,void (*)(rustpythonInstance*,U32,U32,U32,U32))(i,si0,si1,si2,si3);
si0=l3;
si0=i32_load8_u(&i->m0,(U64)si0+60U);
l8=si0;
si1=4U;
si0=si0 != si1;
if(si0){
goto L23;
}
L24:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
l8=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l11=si0;
si0=l1;
si0=i32_load8_u(&i->m0,(U64)si0+19U);
if(si0){
goto L22;
}
si0=l3;
si1=84U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=1U;
i32_store(&i->m0,(U64)si0+76U,si1);
si0=l3;
si1=1087000U;
i32_store(&i->m0,(U64)si0+72U,si1);
si0=l3;
si1=l3;
si2=108U;
si1+=si2;
i32_store(&i->m0,(U64)si0+80U,si1);
si0=l3;
si1=40U;
si0+=si1;
si1=l11;
si2=l3;
si3=72U;
si2+=si3;
si3=l8;
si3=i32_load(&i->m0,(U64)si3+36U);
TF(i->t0,si3,void (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
goto L21;
L23:;
si0=l3;
si1=72U;
si0+=si1;
si1=4U;
si0+=si1;
si1=l3;
si2=60U;
si1+=si2;
si2=4U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=l3;
si1=i32_load(&i->m0,(U64)si1+61U);
i32_store(&i->m0,(U64)si0+73U,si1);
si0=l3;
si1=l8;
i32_store8(&i->m0,(U64)si0+72U,si1);
si0=l0;
si1=l3;
si2=72U;
si1+=si2;
f578(i,si0,si1);
goto L9;
L22:;
si0=l1;
si0=i32_load8_u(&i->m0,(U64)si0+16U);
switch(si0){
case 0:
goto L45;
case 1:
goto L46;
case 2:
goto L47;
default:
goto L45;
}
L47:;
si0=l3;
si1=68U;
si0+=si1;
si1=9U;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=1086990U;
i32_store(&i->m0,(U64)si0+64U,si1);
si0=l3;
si1=3U;
i32_store(&i->m0,(U64)si0+60U,si1);
goto L44;
L46:;
si0=l3;
si1=68U;
si0+=si1;
si1=9U;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=1086990U;
i32_store(&i->m0,(U64)si0+64U,si1);
si0=l3;
si1=1U;
i32_store(&i->m0,(U64)si0+60U,si1);
goto L44;
L45:;
si0=l3;
si1=68U;
si0+=si1;
si1=9U;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=1086990U;
i32_store(&i->m0,(U64)si0+64U,si1);
si0=l3;
si1=1U;
i32_store(&i->m0,(U64)si0+60U,si1);
L44:;
si0=l3;
si1=84U;
si0+=si1;
sj1=1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=155U;
i32_store(&i->m0,(U64)si0+52U,si1);
si0=l3;
si1=1U;
i32_store(&i->m0,(U64)si0+76U,si1);
si0=l3;
si1=1086468U;
i32_store(&i->m0,(U64)si0+72U,si1);
si0=l3;
si1=l3;
si2=60U;
si1+=si2;
i32_store(&i->m0,(U64)si0+48U,si1);
si0=l3;
si1=l3;
si2=48U;
si1+=si2;
i32_store(&i->m0,(U64)si0+80U,si1);
si0=l3;
si1=40U;
si0+=si1;
si1=l11;
si2=l3;
si3=72U;
si2+=si3;
si3=l8;
si3=i32_load(&i->m0,(U64)si3+36U);
TF(i->t0,si3,void (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
L21:;
si0=l3;
si0=i32_load8_u(&i->m0,(U64)si0+40U);
l8=si0;
si1=4U;
si0=si0 != si1;
if(si0){
goto L48;
}
si0=l3;
si1=60U;
si0+=si1;
si1=l1;
si2=l2;
si2=i32_load(&i->m0,(U64)si2+224U);
l8=si2;
si3=l8;
si4=l2;
si4=i32_load(&i->m0,(U64)si4+232U);
si5=272U;
si4*=si5;
si3+=si4;
f277(i,si0,si1,si2,si3);
si0=l3;
si0=i32_load8_u(&i->m0,(U64)si0+60U);
l8=si0;
si1=4U;
si0=si0 == si1;
if(si0){
goto L20;
}
si0=l3;
si1=72U;
si0+=si1;
si1=4U;
si0+=si1;
si1=l3;
si2=60U;
si1+=si2;
si2=4U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=l3;
si1=i32_load(&i->m0,(U64)si1+61U);
i32_store(&i->m0,(U64)si0+73U,si1);
si0=l3;
si1=l8;
i32_store8(&i->m0,(U64)si0+72U,si1);
si0=l0;
si1=l3;
si2=72U;
si1+=si2;
f578(i,si0,si1);
goto L9;
L48:;
si0=l3;
si1=72U;
si0+=si1;
si1=4U;
si0+=si1;
si1=l3;
si2=40U;
si1+=si2;
si2=4U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=l3;
si1=i32_load(&i->m0,(U64)si1+41U);
i32_store(&i->m0,(U64)si0+73U,si1);
si0=l3;
si1=l8;
i32_store8(&i->m0,(U64)si0+72U,si1);
si0=l0;
si1=l3;
si2=72U;
si1+=si2;
f578(i,si0,si1);
goto L9;
L20:;
si0=l6;
if(si0){
goto L49;
}
si0=l5;
si0=!(si0);
if(si0){
goto L10;
}
goto L15;
L49:;
si0=l3;
si1=60U;
si0+=si1;
si1=l1;
si1=i32_load(&i->m0,(U64)si1);
si2=1086988U;
si3=2U;
si4=l1;
si4=i32_load(&i->m0,(U64)si4+4U);
si4=i32_load(&i->m0,(U64)si4+28U);
TF(i->t0,si4,void (*)(rustpythonInstance*,U32,U32,U32,U32))(i,si0,si1,si2,si3);
si0=l3;
si0=i32_load8_u(&i->m0,(U64)si0+60U);
l8=si0;
si1=4U;
si0=si0 != si1;
if(si0){
goto L18;
}
L19:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
l8=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l11=si0;
si0=l1;
si0=i32_load8_u(&i->m0,(U64)si0+19U);
if(si0){
goto L17;
}
si0=l3;
si1=84U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=1U;
i32_store(&i->m0,(U64)si0+76U,si1);
si0=l3;
si1=1087016U;
i32_store(&i->m0,(U64)si0+72U,si1);
si0=l3;
si1=l3;
si2=108U;
si1+=si2;
i32_store(&i->m0,(U64)si0+80U,si1);
si0=l3;
si1=40U;
si0+=si1;
si1=l11;
si2=l3;
si3=72U;
si2+=si3;
si3=l8;
si3=i32_load(&i->m0,(U64)si3+36U);
TF(i->t0,si3,void (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
goto L16;
L18:;
si0=l3;
si1=72U;
si0+=si1;
si1=4U;
si0+=si1;
si1=l3;
si2=60U;
si1+=si2;
si2=4U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=l3;
si1=i32_load(&i->m0,(U64)si1+61U);
i32_store(&i->m0,(U64)si0+73U,si1);
si0=l3;
si1=l8;
i32_store8(&i->m0,(U64)si0+72U,si1);
si0=l0;
si1=l3;
si2=72U;
si1+=si2;
f578(i,si0,si1);
goto L9;
L17:;
si0=l1;
si0=i32_load8_u(&i->m0,(U64)si0+16U);
switch(si0){
case 0:
goto L51;
case 1:
goto L52;
case 2:
goto L53;
default:
goto L51;
}
L53:;
si0=l3;
si1=68U;
si0+=si1;
si1=6U;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=1087008U;
i32_store(&i->m0,(U64)si0+64U,si1);
si0=l3;
si1=3U;
i32_store(&i->m0,(U64)si0+60U,si1);
goto L50;
L52:;
si0=l3;
si1=68U;
si0+=si1;
si1=6U;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=1087008U;
i32_store(&i->m0,(U64)si0+64U,si1);
si0=l3;
si1=1U;
i32_store(&i->m0,(U64)si0+60U,si1);
goto L50;
L51:;
si0=l3;
si1=68U;
si0+=si1;
si1=6U;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=1087008U;
i32_store(&i->m0,(U64)si0+64U,si1);
si0=l3;
si1=1U;
i32_store(&i->m0,(U64)si0+60U,si1);
L50:;
si0=l3;
si1=84U;
si0+=si1;
sj1=1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=155U;
i32_store(&i->m0,(U64)si0+52U,si1);
si0=l3;
si1=1U;
i32_store(&i->m0,(U64)si0+76U,si1);
si0=l3;
si1=1086468U;
i32_store(&i->m0,(U64)si0+72U,si1);
si0=l3;
si1=l3;
si2=60U;
si1+=si2;
i32_store(&i->m0,(U64)si0+48U,si1);
si0=l3;
si1=l3;
si2=48U;
si1+=si2;
i32_store(&i->m0,(U64)si0+80U,si1);
si0=l3;
si1=40U;
si0+=si1;
si1=l11;
si2=l3;
si3=72U;
si2+=si3;
si3=l8;
si3=i32_load(&i->m0,(U64)si3+36U);
TF(i->t0,si3,void (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
L16:;
si0=l3;
si0=i32_load8_u(&i->m0,(U64)si0+40U);
l8=si0;
si1=4U;
si0=si0 == si1;
if(si0){
goto L54;
}
si0=l3;
si1=72U;
si0+=si1;
si1=4U;
si0+=si1;
si1=l3;
si2=40U;
si1+=si2;
si2=4U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=l3;
si1=i32_load(&i->m0,(U64)si1+41U);
i32_store(&i->m0,(U64)si0+73U,si1);
si0=l3;
si1=l8;
i32_store8(&i->m0,(U64)si0+72U,si1);
si0=l0;
si1=l3;
si2=72U;
si1+=si2;
f578(i,si0,si1);
goto L9;
L54:;
si0=l1;
si1=2U;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l2;
si0=i32_load(&i->m0,(U64)si0);
l8=si0;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=l2;
si0=i32_load(&i->m0,(U64)si0+8U);
l7=si0;
si0=80U;
si0=f15022(i,si0);
l11=si0;
si0=!(si0);
if(si0){
goto L56;
}
si0=l3;
sj1=10ULL;
i64_store(&i->m0,(U64)si0+52U,sj1);
si0=l3;
si1=l11;
i32_store(&i->m0,(U64)si0+48U,si1);
si0=l7;
if(si0){
goto L57;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0+52U);
l6=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+48U);
l9=si0;
goto L55;
L57:;
si0=l8;
si1=l7;
si2=248U;
si1*=si2;
si0+=si1;
l9=si0;
si0=l1;
si0=i32_load8_u(&i->m0,(U64)si0+21U);
si1=255U;
si0&=si1;
l12=si0;
si0=0U;
l4=si0;
si0=0U;
l11=si0;
L59:;
{
si0=l12;
if(si0){
goto L61;
}
L62:;
{
si0=l9;
l10=si0;
si0=l8;
si1=l9;
si0=si0 == si1;
if(si0){
goto L63;
}
si0=l8;
si1=248U;
si0+=si1;
l10=si0;
si0=l8;
sj0=i64_load(&i->m0,(U64)si0);
sj1=2ULL;
si0=sj0 == sj1;
if(si0){
goto L63;
}
si0=l11;
si1=1U;
si0+=si1;
l11=si0;
si0=l8;
si1=188U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si1=16U;
si0&=si1;
if(si0){
goto L64;
}
si0=l6;
si1=262272U;
si0&=si1;
si1=262144U;
si0=si0 == si1;
if(si0){
goto L64;
}
si0=l8;
l6=si0;
si0=l10;
l8=si0;
goto L60;
L64:;
si0=l10;
l8=si0;
si0=l11;
si1=l7;
si0=si0 < si1;
if(si0){
goto L62;
}
goto L58;
L63:;
si0=l10;
l8=si0;
si0=l11;
si1=1U;
si0+=si1;
l11=si0;
si1=l7;
si0=si0 != si1;
if(si0){
goto L62;
}
goto L58;
}
L61:;
L65:;
{
si0=l9;
l10=si0;
si0=l8;
si1=l9;
si0=si0 == si1;
if(si0){
goto L67;
}
si0=l8;
si1=248U;
si0+=si1;
l10=si0;
si0=l8;
sj0=i64_load(&i->m0,(U64)si0);
sj1=2ULL;
si0=sj0 != sj1;
if(si0){
goto L66;
}
L67:;
si0=l10;
l8=si0;
si0=l11;
si1=1U;
si0+=si1;
l11=si0;
si1=l7;
si0=si0 != si1;
if(si0){
goto L65;
}
goto L58;
L66:;
si0=l11;
si1=1U;
si0+=si1;
l11=si0;
si0=l8;
si1=188U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si1=16U;
si0&=si1;
if(si0){
goto L68;
}
si0=l6;
si1=524416U;
si0&=si1;
si1=524288U;
si0=si0 == si1;
if(si0){
goto L68;
}
si0=l8;
l6=si0;
si0=l10;
l8=si0;
goto L60;
L68:;
si0=l10;
l8=si0;
si0=l11;
si1=l7;
si0=si0 < si1;
if(si0){
goto L65;
}
goto L58;
}
L60:;
si0=l6;
si0=f386(i,si0);
si0=!(si0);
if(si0){
goto L69;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+12U);
l10=si0;
si0=l3;
si1=0U;
i32_store(&i->m0,(U64)si0+68U,si1);
si0=l3;
sj1=1ULL;
i64_store(&i->m0,(U64)si0+60U,sj1);
si0=l3;
si1=3U;
i32_store8(&i->m0,(U64)si0+104U,si1);
si0=l3;
si1=32U;
i32_store(&i->m0,(U64)si0+88U,si1);
si0=l3;
si1=0U;
i32_store(&i->m0,(U64)si0+100U,si1);
si0=l3;
si1=1085664U;
i32_store(&i->m0,(U64)si0+96U,si1);
si0=l3;
si1=0U;
i32_store(&i->m0,(U64)si0+80U,si1);
si0=l3;
si1=0U;
i32_store(&i->m0,(U64)si0+72U,si1);
si0=l3;
si1=l3;
si2=60U;
si1+=si2;
i32_store(&i->m0,(U64)si0+92U,si1);
si0=l6;
si1=l3;
si2=72U;
si1+=si2;
si0=f407(i,si0,si1);
if(si0){
goto L70;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0+64U);
l4=si0;
si0=l1;
si1=l10;
si2=l3;
si2=i32_load(&i->m0,(U64)si2+60U);
l13=si2;
si3=l3;
si3=i32_load(&i->m0,(U64)si3+68U);
si2=f273(i,si2,si3);
l14=si2;
si3=l10;
si4=l14;
si3=si3 > si4;
si1=si3?si1:si2;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l4;
si0=!(si0);
if(si0){
goto L69;
}
si0=l13;
f15024(i,si0);
goto L69;
L70:;
si0=1085688U;
si1=55U;
si2=l3;
si3=108U;
si2+=si3;
si3=1085744U;
si4=1085836U;
f641(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L69:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+56U);
l10=si0;
si1=l3;
si1=i32_load(&i->m0,(U64)si1+52U);
si0=si0 != si1;
if(si0){
goto L71;
}
si0=l3;
si1=48U;
si0+=si1;
si1=l10;
f517(i,si0,si1);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+56U);
l10=si0;
L71:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+48U);
si1=l10;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l10=si0;
si1=1086332U;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l10;
si1=l6;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=l3;
si1=i32_load(&i->m0,(U64)si1+56U);
si2=1U;
si1+=si2;
l4=si1;
i32_store(&i->m0,(U64)si0+56U,si1);
si0=l11;
si1=l7;
si0=si0 < si1;
if(si0){
goto L59;
}
}
L58:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+48U);
l9=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+52U);
l6=si0;
si0=l4;
si0=!(si0);
if(si0){
goto L55;
}
si0=l3;
si1=16U;
si0+=si1;
si1=l9;
si1=i32_load(&i->m0,(U64)si1);
si2=l9;
si2=i32_load(&i->m0,(U64)si2+4U);
si2=i32_load(&i->m0,(U64)si2+132U);
TF(i->t0,si2,void (*)(rustpythonInstance*,U32,U32))(i,si0,si1);
si0=l3;
si1=72U;
si0+=si1;
si1=l1;
si2=l3;
si2=i32_load(&i->m0,(U64)si2+16U);
si3=l3;
si3=i32_load(&i->m0,(U64)si3+20U);
f280(i,si0,si1,si2,si3);
si0=l3;
si0=i32_load8_u(&i->m0,(U64)si0+72U);
l11=si0;
si1=4U;
si0=si0 != si1;
if(si0){
goto L73;
}
si0=l4;
si1=1U;
si0=si0 == si1;
if(si0){
goto L55;
}
si0=l9;
si1=l4;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l4=si0;
si0=l9;
si1=8U;
si0+=si1;
l8=si0;
L74:;
{
si0=l8;
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l10=si0;
si0=l8;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
si0=l3;
si1=72U;
si0+=si1;
si1=l1;
si1=i32_load(&i->m0,(U64)si1);
si2=1086476U;
si3=1U;
si4=l1;
si4=i32_load(&i->m0,(U64)si4+4U);
si4=i32_load(&i->m0,(U64)si4+28U);
TF(i->t0,si4,void (*)(rustpythonInstance*,U32,U32,U32,U32))(i,si0,si1,si2,si3);
si0=l3;
si0=i32_load8_u(&i->m0,(U64)si0+72U);
l11=si0;
si1=4U;
si0=si0 == si1;
if(si0){
goto L75;
}
si0=l3;
si1=l3;
si1=i32_load(&i->m0,(U64)si1+73U);
i32_store(&i->m0,(U64)si0+40U,si1);
si0=l3;
si1=l3;
si2=76U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0+43U,si1);
goto L72;
L75:;
si0=l3;
si1=8U;
si0+=si1;
si1=l7;
si2=l10;
si2=i32_load(&i->m0,(U64)si2+132U);
TF(i->t0,si2,void (*)(rustpythonInstance*,U32,U32))(i,si0,si1);
si0=l3;
si1=72U;
si0+=si1;
si1=l1;
si2=l3;
si2=i32_load(&i->m0,(U64)si2+8U);
si3=l3;
si3=i32_load(&i->m0,(U64)si3+12U);
f280(i,si0,si1,si2,si3);
si0=l3;
si0=i32_load8_u(&i->m0,(U64)si0+72U);
l11=si0;
si1=4U;
si0=si0 != si1;
if(si0){
goto L73;
}
si0=l8;
si1=8U;
si0+=si1;
l8=si0;
si1=l4;
si0=si0 == si1;
if(si0){
goto L55;
}
goto L74;
}
L73:;
si0=l3;
si1=l3;
si1=i32_load(&i->m0,(U64)si1+73U);
i32_store(&i->m0,(U64)si0+40U,si1);
si0=l3;
si1=l3;
si2=72U;
si1+=si2;
si2=4U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0+43U,si1);
L72:;
si0=l6;
si0=!(si0);
if(si0){
goto L76;
}
si0=l9;
f15024(i,si0);
L76:;
si0=l3;
si1=76U;
si0+=si1;
si1=l3;
si1=i32_load(&i->m0,(U64)si1+43U);
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=l3;
si1=i32_load(&i->m0,(U64)si1+40U);
i32_store(&i->m0,(U64)si0+73U,si1);
si0=l3;
si1=l11;
i32_store8(&i->m0,(U64)si0+72U,si1);
si0=l0;
si1=l3;
si2=72U;
si1+=si2;
f578(i,si0,si1);
goto L9;
L56:;
si0=4U;
si1=80U;
f52(i,si0,si1);
UNREACHABLE;
L55:;
si0=l6;
si0=!(si0);
if(si0){
goto L77;
}
si0=l9;
f15024(i,si0);
L77:;
si0=l5;
si0=!(si0);
if(si0){
goto L10;
}
L15:;
si0=l3;
si1=60U;
si0+=si1;
si1=l1;
si1=i32_load(&i->m0,(U64)si1);
si2=1086988U;
si3=2U;
si4=l1;
si4=i32_load(&i->m0,(U64)si4+4U);
si4=i32_load(&i->m0,(U64)si4+28U);
TF(i->t0,si4,void (*)(rustpythonInstance*,U32,U32,U32,U32))(i,si0,si1,si2,si3);
si0=l3;
si0=i32_load8_u(&i->m0,(U64)si0+60U);
l8=si0;
si1=4U;
si0=si0 != si1;
if(si0){
goto L13;
}
L14:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
l8=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l11=si0;
si0=l1;
si0=i32_load8_u(&i->m0,(U64)si0+19U);
if(si0){
goto L12;
}
si0=l3;
si1=84U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=1U;
i32_store(&i->m0,(U64)si0+76U,si1);
si0=l3;
si1=1087040U;
i32_store(&i->m0,(U64)si0+72U,si1);
si0=l3;
si1=l3;
si2=108U;
si1+=si2;
i32_store(&i->m0,(U64)si0+80U,si1);
si0=l3;
si1=40U;
si0+=si1;
si1=l11;
si2=l3;
si3=72U;
si2+=si3;
si3=l8;
si3=i32_load(&i->m0,(U64)si3+36U);
TF(i->t0,si3,void (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
goto L11;
L13:;
si0=l3;
si1=72U;
si0+=si1;
si1=4U;
si0+=si1;
si1=l3;
si2=60U;
si1+=si2;
si2=4U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=l3;
si1=i32_load(&i->m0,(U64)si1+61U);
i32_store(&i->m0,(U64)si0+73U,si1);
si0=l3;
si1=l8;
i32_store8(&i->m0,(U64)si0+72U,si1);
si0=l0;
si1=l3;
si2=72U;
si1+=si2;
f578(i,si0,si1);
goto L9;
L12:;
si0=l1;
si0=i32_load8_u(&i->m0,(U64)si0+16U);
switch(si0){
case 0:
goto L79;
case 1:
goto L80;
case 2:
goto L81;
default:
goto L79;
}
L81:;
si0=l3;
si1=68U;
si0+=si1;
si1=13U;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=1087024U;
i32_store(&i->m0,(U64)si0+64U,si1);
si0=l3;
si1=3U;
i32_store(&i->m0,(U64)si0+60U,si1);
goto L78;
L80:;
si0=l3;
si1=68U;
si0+=si1;
si1=13U;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=1087024U;
i32_store(&i->m0,(U64)si0+64U,si1);
si0=l3;
si1=1U;
i32_store(&i->m0,(U64)si0+60U,si1);
goto L78;
L79:;
si0=l3;
si1=68U;
si0+=si1;
si1=13U;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=1087024U;
i32_store(&i->m0,(U64)si0+64U,si1);
si0=l3;
si1=1U;
i32_store(&i->m0,(U64)si0+60U,si1);
L78:;
si0=l3;
si1=84U;
si0+=si1;
sj1=1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=155U;
i32_store(&i->m0,(U64)si0+52U,si1);
si0=l3;
si1=1U;
i32_store(&i->m0,(U64)si0+76U,si1);
si0=l3;
si1=1086468U;
i32_store(&i->m0,(U64)si0+72U,si1);
si0=l3;
si1=l3;
si2=60U;
si1+=si2;
i32_store(&i->m0,(U64)si0+48U,si1);
si0=l3;
si1=l3;
si2=48U;
si1+=si2;
i32_store(&i->m0,(U64)si0+80U,si1);
si0=l3;
si1=40U;
si0+=si1;
si1=l11;
si2=l3;
si3=72U;
si2+=si3;
si3=l8;
si3=i32_load(&i->m0,(U64)si3+36U);
TF(i->t0,si3,void (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
L11:;
si0=l3;
si0=i32_load8_u(&i->m0,(U64)si0+40U);
l8=si0;
si1=4U;
si0=si0 != si1;
if(si0){
goto L82;
}
si0=l3;
si1=60U;
si0+=si1;
si1=l1;
si2=l2;
si3=236U;
si2+=si3;
si2=i32_load(&i->m0,(U64)si2);
si3=l2;
si4=244U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
f281(i,si0,si1,si2,si3);
si0=l3;
si0=i32_load8_u(&i->m0,(U64)si0+60U);
l8=si0;
si1=4U;
si0=si0 == si1;
if(si0){
goto L10;
}
si0=l3;
si1=72U;
si0+=si1;
si1=4U;
si0+=si1;
si1=l3;
si2=60U;
si1+=si2;
si2=4U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=l3;
si1=i32_load(&i->m0,(U64)si1+61U);
i32_store(&i->m0,(U64)si0+73U,si1);
si0=l3;
si1=l8;
i32_store8(&i->m0,(U64)si0+72U,si1);
si0=l0;
si1=l3;
si2=72U;
si1+=si2;
f578(i,si0,si1);
goto L9;
L82:;
si0=l3;
si1=72U;
si0+=si1;
si1=4U;
si0+=si1;
si1=l3;
si2=40U;
si1+=si2;
si2=4U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=l3;
si1=i32_load(&i->m0,(U64)si1+41U);
i32_store(&i->m0,(U64)si0+73U,si1);
si0=l3;
si1=l8;
i32_store8(&i->m0,(U64)si0+72U,si1);
si0=l0;
si1=l3;
si2=72U;
si1+=si2;
f578(i,si0,si1);
goto L9;
L10:;
si0=l0;
si1=20U;
i32_store8(&i->m0,(U64)si0+24U,si1);
L9:;
si0=l3;
si1=112U;
si0+=si1;
i->g0=si0;
L0:;
}

void f280(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
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
U64 l16=0;
U64 l17=0;
U32 l18=0;
U32 l19=0;
U32 l20=0;
U32 l21=0;
U32 l22=0;
U32 l23=0;
U32 si0,si1,si2,si3,si4;
U64 sj0,sj1,sj2,sj3,sj4;
F32 sf0,sf1;
si0=i->g0;
si1=384U;
si0-=si1;
l4=si0;
i->g0=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
l6=si0;
si0=l4;
si1=308U;
si0+=si1;
sj1=1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=1U;
i32_store(&i->m0,(U64)si0+300U,si1);
si0=l4;
si1=1086468U;
i32_store(&i->m0,(U64)si0+296U,si1);
si0=l4;
si1=50U;
i32_store(&i->m0,(U64)si0+364U,si1);
si0=l4;
si1=1086484U;
i32_store(&i->m0,(U64)si0+360U,si1);
si0=l4;
si1=l4;
si2=360U;
si1+=si2;
i32_store(&i->m0,(U64)si0+304U,si1);
si0=l4;
si1=272U;
si0+=si1;
si1=l5;
si2=l4;
si3=296U;
si2+=si3;
si3=l6;
si3=i32_load(&i->m0,(U64)si3+36U);
l7=si3;
TF(i->t0,si3,void (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
si0=l4;
si0=i32_load8_u(&i->m0,(U64)si0+272U);
l6=si0;
si1=4U;
si0=si0 != si1;
if(si0){
goto L27;
}
si0=l2;
si1=l3;
si1=i32_load(&i->m0,(U64)si1+76U);
l8=si1;
si0=TF(i->t0,si1,U32 (*)(rustpythonInstance*,U32))(i,si0);
l6=si0;
si1=1114112U;
si0=si0 == si1;
if(si0){
goto L30;
}
si0=l4;
si1=l6;
i32_store(&i->m0,(U64)si0+228U,si1);
si0=l1;
si0=i32_load8_u(&i->m0,(U64)si0+19U);
if(si0){
goto L31;
}
si0=l4;
si1=308U;
si0+=si1;
sj1=1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=1U;
i32_store(&i->m0,(U64)si0+300U,si1);
si0=l4;
si1=1086496U;
i32_store(&i->m0,(U64)si0+296U,si1);
si0=l4;
si1=19U;
i32_store(&i->m0,(U64)si0+364U,si1);
si0=l4;
si1=l4;
si2=360U;
si1+=si2;
i32_store(&i->m0,(U64)si0+304U,si1);
si0=l4;
si1=l4;
si2=228U;
si1+=si2;
i32_store(&i->m0,(U64)si0+360U,si1);
si0=l4;
si1=240U;
si0+=si1;
si1=l5;
si2=l4;
si3=296U;
si2+=si3;
si3=l7;
TF(i->t0,si3,void (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
goto L29;
L31:;
si0=l4;
si1=296U;
si0+=si1;
si1=12U;
si0+=si1;
sj1=1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=1U;
i32_store(&i->m0,(U64)si0+300U,si1);
si0=l4;
si1=1086496U;
i32_store(&i->m0,(U64)si0+296U,si1);
si0=l4;
si1=19U;
i32_store(&i->m0,(U64)si0+364U,si1);
si0=l4;
si1=l4;
si2=360U;
si1+=si2;
i32_store(&i->m0,(U64)si0+304U,si1);
si0=l4;
si1=l4;
si2=228U;
si1+=si2;
i32_store(&i->m0,(U64)si0+360U,si1);
si0=l4;
si1=272U;
si0+=si1;
si1=l4;
si2=296U;
si1+=si2;
f64(i,si0,si1);
si0=l1;
si0=i32_load8_u(&i->m0,(U64)si0+16U);
switch(si0){
case 0:
goto L35;
case 1:
goto L34;
case 2:
goto L33;
default:
goto L35;
}
L35:;
si0=l4;
si1=360U;
si0+=si1;
si1=12U;
si0+=si1;
si1=l4;
si2=280U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1+272U);
i64_store(&i->m0,(U64)si0+364U,sj1);
si0=l4;
si1=2U;
i32_store(&i->m0,(U64)si0+360U,si1);
goto L32;
L34:;
si0=l4;
si1=360U;
si0+=si1;
si1=12U;
si0+=si1;
si1=l4;
si2=280U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1+272U);
i64_store(&i->m0,(U64)si0+364U,sj1);
si0=l4;
si1=2U;
i32_store(&i->m0,(U64)si0+360U,si1);
goto L32;
L33:;
si0=l4;
si1=360U;
si0+=si1;
si1=12U;
si0+=si1;
si1=l4;
si2=280U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1+272U);
i64_store(&i->m0,(U64)si0+364U,sj1);
si0=l4;
si1=3U;
i32_store(&i->m0,(U64)si0+360U,si1);
L32:;
si0=l4;
si1=308U;
si0+=si1;
sj1=1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=156U;
i32_store(&i->m0,(U64)si0+264U,si1);
si0=l4;
si1=1U;
i32_store(&i->m0,(U64)si0+300U,si1);
si0=l4;
si1=1086468U;
i32_store(&i->m0,(U64)si0+296U,si1);
si0=l4;
si1=l4;
si2=360U;
si1+=si2;
i32_store(&i->m0,(U64)si0+260U,si1);
si0=l4;
si1=l4;
si2=260U;
si1+=si2;
i32_store(&i->m0,(U64)si0+304U,si1);
si0=l4;
si1=240U;
si0+=si1;
si1=l5;
si2=l4;
si3=296U;
si2+=si3;
si3=l7;
TF(i->t0,si3,void (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
si0=l4;
si1=368U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L29;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0+364U);
f15024(i,si0);
goto L29;
L30:;
si0=l2;
si1=l3;
si1=i32_load(&i->m0,(U64)si1+48U);
l9=si1;
si0=TF(i->t0,si1,U32 (*)(rustpythonInstance*,U32))(i,si0);
si0=!(si0);
if(si0){
goto L28;
}
si0=l4;
si1=308U;
si0+=si1;
sj1=1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=1U;
i32_store(&i->m0,(U64)si0+300U,si1);
si0=l4;
si1=1086468U;
i32_store(&i->m0,(U64)si0+296U,si1);
si0=l4;
si1=50U;
i32_store(&i->m0,(U64)si0+364U,si1);
si0=l4;
si1=1086484U;
i32_store(&i->m0,(U64)si0+360U,si1);
si0=l4;
si1=l4;
si2=360U;
si1+=si2;
i32_store(&i->m0,(U64)si0+304U,si1);
si0=l4;
si1=240U;
si0+=si1;
si1=l5;
si2=l4;
si3=296U;
si2+=si3;
si3=l7;
TF(i->t0,si3,void (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
L29:;
si0=l4;
si0=i32_load8_u(&i->m0,(U64)si0+240U);
l6=si0;
si1=4U;
si0=si0 != si1;
if(si0){
goto L26;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0+48U);
l9=si0;
L28:;
si0=l2;
si1=l9;
si0=TF(i->t0,si1,U32 (*)(rustpythonInstance*,U32))(i,si0);
l6=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+88U);
l5=si0;
si0=l6;
si0=!(si0);
if(si0){
goto L22;
}
si0=l2;
si1=l5;
si0=TF(i->t0,si1,U32 (*)(rustpythonInstance*,U32))(i,si0);
l7=si0;
si0=l4;
si1=168U;
si0+=si1;
si1=l2;
si2=l3;
si2=i32_load(&i->m0,(U64)si2+80U);
TF(i->t0,si2,void (*)(rustpythonInstance*,U32,U32))(i,si0,si1);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+172U);
l10=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+168U);
l6=si0;
si0=l7;
if(si0){
goto L39;
}
si0=l6;
si0=!(si0);
if(si0){
goto L22;
}
si0=l4;
si1=l6;
i32_store(&i->m0,(U64)si0+228U,si1);
si0=l4;
si1=l10;
i32_store(&i->m0,(U64)si0+232U,si1);
si0=l2;
si1=l8;
si0=TF(i->t0,si1,U32 (*)(rustpythonInstance*,U32))(i,si0);
l6=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
l7=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l8=si0;
si0=l6;
si1=1114112U;
si0=si0 == si1;
if(si0){
goto L40;
}
si0=l4;
si1=308U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=1U;
i32_store(&i->m0,(U64)si0+300U,si1);
si0=l4;
si1=1086508U;
i32_store(&i->m0,(U64)si0+296U,si1);
si0=l4;
si1=1085852U;
i32_store(&i->m0,(U64)si0+304U,si1);
si0=l4;
si1=360U;
si0+=si1;
si1=l8;
si2=l4;
si3=296U;
si2+=si3;
si3=l7;
si3=i32_load(&i->m0,(U64)si3+36U);
TF(i->t0,si3,void (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
si0=l4;
si0=i32_load8_u(&i->m0,(U64)si0+360U);
l6=si0;
si1=4U;
si0=si0 != si1;
if(si0){
goto L25;
}
L40:;
si0=l1;
si0=i32_load8_u(&i->m0,(U64)si0+19U);
if(si0){
goto L38;
}
si0=l4;
si1=308U;
si0+=si1;
sj1=1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=1U;
i32_store(&i->m0,(U64)si0+300U,si1);
si0=l4;
si1=1086520U;
i32_store(&i->m0,(U64)si0+296U,si1);
si0=l4;
si1=50U;
i32_store(&i->m0,(U64)si0+364U,si1);
si0=l4;
si1=l4;
si2=360U;
si1+=si2;
i32_store(&i->m0,(U64)si0+304U,si1);
si0=l4;
si1=l4;
si2=228U;
si1+=si2;
i32_store(&i->m0,(U64)si0+360U,si1);
si0=l4;
si1=240U;
si0+=si1;
si1=l8;
si2=l4;
si3=296U;
si2+=si3;
si3=l7;
si3=i32_load(&i->m0,(U64)si3+36U);
TF(i->t0,si3,void (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
goto L37;
L39:;
si0=l6;
if(si0){
goto L36;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
l7=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l8=si0;
goto L23;
L38:;
si0=l4;
si1=296U;
si0+=si1;
si1=12U;
si0+=si1;
sj1=1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=1U;
i32_store(&i->m0,(U64)si0+300U,si1);
si0=l4;
si1=1086520U;
i32_store(&i->m0,(U64)si0+296U,si1);
si0=l4;
si1=50U;
i32_store(&i->m0,(U64)si0+364U,si1);
si0=l4;
si1=l4;
si2=360U;
si1+=si2;
i32_store(&i->m0,(U64)si0+304U,si1);
si0=l4;
si1=l4;
si2=228U;
si1+=si2;
i32_store(&i->m0,(U64)si0+360U,si1);
si0=l4;
si1=272U;
si0+=si1;
si1=l4;
si2=296U;
si1+=si2;
f64(i,si0,si1);
si0=l1;
si0=i32_load8_u(&i->m0,(U64)si0+16U);
switch(si0){
case 0:
goto L44;
case 1:
goto L43;
case 2:
goto L42;
default:
goto L44;
}
L44:;
si0=l4;
si1=360U;
si0+=si1;
si1=12U;
si0+=si1;
si1=l4;
si2=280U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1+272U);
i64_store(&i->m0,(U64)si0+364U,sj1);
si0=l4;
si1=2U;
i32_store(&i->m0,(U64)si0+360U,si1);
goto L41;
L43:;
si0=l4;
si1=360U;
si0+=si1;
si1=12U;
si0+=si1;
si1=l4;
si2=280U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1+272U);
i64_store(&i->m0,(U64)si0+364U,sj1);
si0=l4;
si1=2U;
i32_store(&i->m0,(U64)si0+360U,si1);
goto L41;
L42:;
si0=l4;
si1=360U;
si0+=si1;
si1=12U;
si0+=si1;
si1=l4;
si2=280U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1+272U);
i64_store(&i->m0,(U64)si0+364U,sj1);
si0=l4;
si1=3U;
i32_store(&i->m0,(U64)si0+360U,si1);
L41:;
si0=l4;
si1=308U;
si0+=si1;
sj1=1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=156U;
i32_store(&i->m0,(U64)si0+264U,si1);
si0=l4;
si1=1U;
i32_store(&i->m0,(U64)si0+300U,si1);
si0=l4;
si1=1086468U;
i32_store(&i->m0,(U64)si0+296U,si1);
si0=l4;
si1=l4;
si2=360U;
si1+=si2;
i32_store(&i->m0,(U64)si0+260U,si1);
si0=l4;
si1=l4;
si2=260U;
si1+=si2;
i32_store(&i->m0,(U64)si0+304U,si1);
si0=l4;
si1=240U;
si0+=si1;
si1=l8;
si2=l4;
si3=296U;
si2+=si3;
si3=l7;
si3=i32_load(&i->m0,(U64)si3+36U);
TF(i->t0,si3,void (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
si0=l4;
si1=368U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L37;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0+364U);
f15024(i,si0);
L37:;
si0=l4;
si0=i32_load8_u(&i->m0,(U64)si0+240U);
l6=si0;
si1=4U;
si0=si0 == si1;
if(si0){
goto L22;
}
si0=l4;
si1=l4;
si1=i32_load(&i->m0,(U64)si1+241U);
i32_store(&i->m0,(U64)si0+216U,si1);
si0=l4;
si1=l4;
si2=240U;
si1+=si2;
si2=4U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0+219U,si1);
goto L16;
L36:;
si0=l4;
si1=l6;
i32_store(&i->m0,(U64)si0+228U,si1);
si0=l4;
si1=l10;
i32_store(&i->m0,(U64)si0+232U,si1);
si0=l2;
si1=l8;
si0=TF(i->t0,si1,U32 (*)(rustpythonInstance*,U32))(i,si0);
l6=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
l7=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l8=si0;
si0=l6;
si1=1114112U;
si0=si0 == si1;
if(si0){
goto L24;
}
si0=l4;
si1=308U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=1U;
i32_store(&i->m0,(U64)si0+300U,si1);
si0=l4;
si1=1086508U;
i32_store(&i->m0,(U64)si0+296U,si1);
si0=l4;
si1=1085852U;
i32_store(&i->m0,(U64)si0+304U,si1);
si0=l4;
si1=360U;
si0+=si1;
si1=l8;
si2=l4;
si3=296U;
si2+=si3;
si3=l7;
si3=i32_load(&i->m0,(U64)si3+36U);
TF(i->t0,si3,void (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
si0=l4;
si0=i32_load8_u(&i->m0,(U64)si0+360U);
l6=si0;
si1=4U;
si0=si0 == si1;
if(si0){
goto L24;
}
si0=l4;
si1=l4;
si1=i32_load(&i->m0,(U64)si1+361U);
i32_store(&i->m0,(U64)si0+216U,si1);
si0=l4;
si1=l4;
si2=360U;
si1+=si2;
si2=4U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0+219U,si1);
goto L16;
L27:;
si0=l4;
si1=240U;
si0+=si1;
si1=4U;
si0+=si1;
si1=l4;
si2=272U;
si1+=si2;
si2=4U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=l4;
si1=i32_load(&i->m0,(U64)si1+273U);
i32_store(&i->m0,(U64)si0+241U,si1);
L26:;
si0=l0;
si1=l4;
si1=i32_load(&i->m0,(U64)si1+241U);
i32_store(&i->m0,(U64)si0+1U,si1);
si0=l0;
si1=4U;
si0+=si1;
si1=l4;
si2=240U;
si1+=si2;
si2=4U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l6;
i32_store8(&i->m0,(U64)si0,si1);
goto L1;
L25:;
si0=l4;
si1=l4;
si1=i32_load(&i->m0,(U64)si1+361U);
i32_store(&i->m0,(U64)si0+216U,si1);
si0=l4;
si1=l4;
si2=360U;
si1+=si2;
si2=4U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0+219U,si1);
goto L16;
L24:;
si0=l1;
si0=i32_load8_u(&i->m0,(U64)si0+19U);
if(si0){
goto L46;
}
si0=l4;
si1=308U;
si0+=si1;
sj1=1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=1U;
i32_store(&i->m0,(U64)si0+300U,si1);
si0=l4;
si1=1086520U;
i32_store(&i->m0,(U64)si0+296U,si1);
si0=l4;
si1=50U;
i32_store(&i->m0,(U64)si0+364U,si1);
si0=l4;
si1=l4;
si2=360U;
si1+=si2;
i32_store(&i->m0,(U64)si0+304U,si1);
si0=l4;
si1=l4;
si2=228U;
si1+=si2;
i32_store(&i->m0,(U64)si0+360U,si1);
si0=l4;
si1=240U;
si0+=si1;
si1=l8;
si2=l4;
si3=296U;
si2+=si3;
si3=l7;
si3=i32_load(&i->m0,(U64)si3+36U);
TF(i->t0,si3,void (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
goto L45;
L46:;
si0=l4;
si1=296U;
si0+=si1;
si1=12U;
si0+=si1;
sj1=1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=1U;
i32_store(&i->m0,(U64)si0+300U,si1);
si0=l4;
si1=1086520U;
i32_store(&i->m0,(U64)si0+296U,si1);
si0=l4;
si1=50U;
i32_store(&i->m0,(U64)si0+364U,si1);
si0=l4;
si1=l4;
si2=360U;
si1+=si2;
i32_store(&i->m0,(U64)si0+304U,si1);
si0=l4;
si1=l4;
si2=228U;
si1+=si2;
i32_store(&i->m0,(U64)si0+360U,si1);
si0=l4;
si1=272U;
si0+=si1;
si1=l4;
si2=296U;
si1+=si2;
f64(i,si0,si1);
si0=l1;
si0=i32_load8_u(&i->m0,(U64)si0+16U);
switch(si0){
case 0:
goto L50;
case 1:
goto L49;
case 2:
goto L48;
default:
goto L50;
}
L50:;
si0=l4;
si1=360U;
si0+=si1;
si1=12U;
si0+=si1;
si1=l4;
si2=280U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1+272U);
i64_store(&i->m0,(U64)si0+364U,sj1);
si0=l4;
si1=2U;
i32_store(&i->m0,(U64)si0+360U,si1);
goto L47;
L49:;
si0=l4;
si1=360U;
si0+=si1;
si1=12U;
si0+=si1;
si1=l4;
si2=280U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1+272U);
i64_store(&i->m0,(U64)si0+364U,sj1);
si0=l4;
si1=2U;
i32_store(&i->m0,(U64)si0+360U,si1);
goto L47;
L48:;
si0=l4;
si1=360U;
si0+=si1;
si1=12U;
si0+=si1;
si1=l4;
si2=280U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1+272U);
i64_store(&i->m0,(U64)si0+364U,sj1);
si0=l4;
si1=3U;
i32_store(&i->m0,(U64)si0+360U,si1);
L47:;
si0=l4;
si1=308U;
si0+=si1;
sj1=1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=156U;
i32_store(&i->m0,(U64)si0+264U,si1);
si0=l4;
si1=1U;
i32_store(&i->m0,(U64)si0+300U,si1);
si0=l4;
si1=1086468U;
i32_store(&i->m0,(U64)si0+296U,si1);
si0=l4;
si1=l4;
si2=360U;
si1+=si2;
i32_store(&i->m0,(U64)si0+260U,si1);
si0=l4;
si1=l4;
si2=260U;
si1+=si2;
i32_store(&i->m0,(U64)si0+304U,si1);
si0=l4;
si1=240U;
si0+=si1;
si1=l8;
si2=l4;
si3=296U;
si2+=si3;
si3=l7;
si3=i32_load(&i->m0,(U64)si3+36U);
TF(i->t0,si3,void (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
si0=l4;
si1=368U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L45;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0+364U);
f15024(i,si0);
L45:;
si0=l4;
si0=i32_load8_u(&i->m0,(U64)si0+240U);
l6=si0;
si1=4U;
si0=si0 != si1;
if(si0){
goto L21;
}
L23:;
si0=l2;
si1=11U;
si2=l3;
si2=i32_load(&i->m0,(U64)si2+40U);
si0=TF(i->t0,si2,U32 (*)(rustpythonInstance*,U32,U32))(i,si0,si1);
l6=si0;
si0=l4;
si1=1U;
i32_store(&i->m0,(U64)si0+264U,si1);
si0=l4;
si1=1086529U;
si2=1086528U;
si3=l6;
si1=si3?si1:si2;
i32_store(&i->m0,(U64)si0+260U,si1);
si0=l4;
si1=308U;
si0+=si1;
sj1=1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=1U;
i32_store(&i->m0,(U64)si0+300U,si1);
si0=l4;
si1=1086468U;
i32_store(&i->m0,(U64)si0+296U,si1);
si0=l4;
si1=50U;
i32_store(&i->m0,(U64)si0+364U,si1);
si0=l4;
si1=l4;
si2=360U;
si1+=si2;
i32_store(&i->m0,(U64)si0+304U,si1);
si0=l4;
si1=l4;
si2=260U;
si1+=si2;
i32_store(&i->m0,(U64)si0+360U,si1);
si0=l4;
si1=272U;
si0+=si1;
si1=l8;
si2=l4;
si3=296U;
si2+=si3;
si3=l7;
si3=i32_load(&i->m0,(U64)si3+36U);
TF(i->t0,si3,void (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
si0=l4;
si0=i32_load8_u(&i->m0,(U64)si0+272U);
l6=si0;
si1=4U;
si0=si0 == si1;
if(si0){
goto L22;
}
si0=l4;
si1=l4;
si1=i32_load(&i->m0,(U64)si1+273U);
i32_store(&i->m0,(U64)si0+216U,si1);
si0=l4;
si1=l4;
si2=272U;
si1+=si2;
si2=4U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0+219U,si1);
goto L16;
L22:;
si0=l4;
si1=l3;
i32_store(&i->m0,(U64)si0+184U,si1);
si0=l4;
si1=l2;
i32_store(&i->m0,(U64)si0+180U,si1);
si0=l3;
l8=si0;
si0=l2;
l7=si0;
si0=l2;
si1=l5;
si0=TF(i->t0,si1,U32 (*)(rustpythonInstance*,U32))(i,si0);
si0=!(si0);
if(si0){
goto L2;
}
si0=32U;
l5=si0;
si0=l2;
si1=8U;
si2=l3;
si2=i32_load(&i->m0,(U64)si2+40U);
si0=TF(i->t0,si2,U32 (*)(rustpythonInstance*,U32,U32))(i,si0,si1);
si0=!(si0);
if(si0){
goto L51;
}
si0=l2;
si1=l3;
si1=i32_load(&i->m0,(U64)si1+84U);
si0=TF(i->t0,si1,U32 (*)(rustpythonInstance*,U32))(i,si0);
l5=si0;
si1=1114112U;
si0=si0 == si1;
if(si0){
goto L20;
}
L51:;
si0=l4;
si1=l5;
i32_store(&i->m0,(U64)si0+216U,si1);
si0=l2;
si1=l3;
si1=i32_load(&i->m0,(U64)si1+92U);
si0=TF(i->t0,si1,U32 (*)(rustpythonInstance*,U32))(i,si0);
l11=si0;
si0=!(si0);
if(si0){
goto L52;
}
si0=l11;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si1=l11;
si1=i32_load(&i->m0,(U64)si1+8U);
l12=si1;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l7=si0;
si0=l4;
si1=364U;
si0+=si1;
l13=si0;
si0=0U;
l6=si0;
si0=1U;
l14=si0;
goto L4;
L52:;
si0=l4;
si1=152U;
si0+=si1;
si1=l2;
si2=l3;
si2=i32_load(&i->m0,(U64)si2+60U);
TF(i->t0,si2,void (*)(rustpythonInstance*,U32,U32))(i,si0,si1);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+152U);
si1=1U;
si0=si0 != si1;
if(si0){
goto L53;
}
si0=l4;
sj0=i64_load(&i->m0,(U64)si0+160U);
l15=sj0;
si0=l4;
si1=364U;
si0+=si1;
l7=si0;
sj0=0ULL;
l16=sj0;
sj0=2ULL;
l17=sj0;
L54:;
{
sj0=l17;
sj1=-1ULL;
sj0+=sj1;
l17=sj0;
sj1=1ULL;
si0=sj0 > sj1;
if(si0){
goto L57;
}
sj0=l17;
si0=(U32)(sj0);
switch(si0){
case 0:
goto L58;
case 1:
goto L59;
default:
goto L58;
}
L59:;
sj0=l16;
sj1=l15;
si0=sj0 >= sj1;
if(si0){
goto L57;
}
sj0=l16;
sj1=1ULL;
sj0+=sj1;
l16=sj0;
L58:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
l5=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si0=l1;
si0=i32_load8_u(&i->m0,(U64)si0+19U);
if(si0){
goto L56;
}
si0=l4;
si1=120U;
si0+=si1;
si1=l4;
si1=i32_load(&i->m0,(U64)si1+180U);
si2=l4;
si2=i32_load(&i->m0,(U64)si2+184U);
si2=i32_load(&i->m0,(U64)si2+16U);
TF(i->t0,si2,void (*)(rustpythonInstance*,U32,U32))(i,si0,si1);
si0=l4;
si1=50U;
i32_store(&i->m0,(U64)si0+276U,si1);
si0=l4;
si1=2U;
i32_store(&i->m0,(U64)si0+300U,si1);
si0=l4;
si1=1086752U;
i32_store(&i->m0,(U64)si0+296U,si1);
si0=l4;
sj1=1ULL;
i64_store(&i->m0,(U64)si0+308U,sj1);
si0=l4;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1+120U);
i64_store(&i->m0,(U64)si0+360U,sj1);
si0=l4;
si1=l4;
si2=360U;
si1+=si2;
i32_store(&i->m0,(U64)si0+272U,si1);
si0=l4;
si1=l4;
si2=272U;
si1+=si2;
i32_store(&i->m0,(U64)si0+304U,si1);
si0=l4;
si1=228U;
si0+=si1;
si1=l6;
si2=l4;
si3=296U;
si2+=si3;
si3=l5;
si3=i32_load(&i->m0,(U64)si3+36U);
TF(i->t0,si3,void (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
goto L55;
L57:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+180U);
si1=1U;
si2=l4;
si2=i32_load(&i->m0,(U64)si2+184U);
si2=i32_load(&i->m0,(U64)si2+40U);
si0=TF(i->t0,si2,U32 (*)(rustpythonInstance*,U32,U32))(i,si0,si1);
si0=!(si0);
if(si0){
goto L3;
}
sj0=l15;
sj1=1ULL;
si0=sj0 != sj1;
if(si0){
goto L3;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
l5=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si0=l1;
si0=i32_load8_u(&i->m0,(U64)si0+19U);
if(si0){
goto L18;
}
si0=l4;
si1=308U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=1U;
i32_store(&i->m0,(U64)si0+300U,si1);
si0=l4;
si1=1086772U;
i32_store(&i->m0,(U64)si0+296U,si1);
si0=l4;
si1=l4;
si2=272U;
si1+=si2;
i32_store(&i->m0,(U64)si0+304U,si1);
si0=l4;
si1=260U;
si0+=si1;
si1=l6;
si2=l4;
si3=296U;
si2+=si3;
si3=l5;
si3=i32_load(&i->m0,(U64)si3+36U);
TF(i->t0,si3,void (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
goto L5;
L56:;
si0=l4;
si1=128U;
si0+=si1;
si1=l4;
si1=i32_load(&i->m0,(U64)si1+180U);
si2=l4;
si2=i32_load(&i->m0,(U64)si2+184U);
si2=i32_load(&i->m0,(U64)si2+16U);
TF(i->t0,si2,void (*)(rustpythonInstance*,U32,U32))(i,si0,si1);
si0=l4;
si1=50U;
i32_store(&i->m0,(U64)si0+244U,si1);
si0=l4;
si1=2U;
i32_store(&i->m0,(U64)si0+300U,si1);
si0=l4;
si1=1086752U;
i32_store(&i->m0,(U64)si0+296U,si1);
si0=l4;
sj1=1ULL;
i64_store(&i->m0,(U64)si0+308U,sj1);
si0=l4;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1+128U);
i64_store(&i->m0,(U64)si0+260U,sj1);
si0=l4;
si1=l4;
si2=260U;
si1+=si2;
i32_store(&i->m0,(U64)si0+240U,si1);
si0=l4;
si1=l4;
si2=240U;
si1+=si2;
i32_store(&i->m0,(U64)si0+304U,si1);
si0=l4;
si1=272U;
si0+=si1;
si1=l4;
si2=296U;
si1+=si2;
f64(i,si0,si1);
si0=l1;
si0=i32_load8_u(&i->m0,(U64)si0+16U);
switch(si0){
case 0:
goto L63;
case 1:
goto L62;
case 2:
goto L61;
default:
goto L63;
}
L63:;
si0=l7;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1+272U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l7;
si1=8U;
si0+=si1;
si1=l4;
si2=272U;
si1+=si2;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=2U;
i32_store(&i->m0,(U64)si0+360U,si1);
goto L60;
L62:;
si0=l7;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1+272U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l7;
si1=8U;
si0+=si1;
si1=l4;
si2=272U;
si1+=si2;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=2U;
i32_store(&i->m0,(U64)si0+360U,si1);
goto L60;
L61:;
si0=l7;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1+272U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l7;
si1=8U;
si0+=si1;
si1=l4;
si2=272U;
si1+=si2;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=3U;
i32_store(&i->m0,(U64)si0+360U,si1);
L60:;
si0=l4;
si1=156U;
i32_store(&i->m0,(U64)si0+264U,si1);
si0=l4;
si1=1U;
i32_store(&i->m0,(U64)si0+300U,si1);
si0=l4;
si1=1086468U;
i32_store(&i->m0,(U64)si0+296U,si1);
si0=l4;
sj1=1ULL;
i64_store(&i->m0,(U64)si0+308U,sj1);
si0=l4;
si1=l4;
si2=360U;
si1+=si2;
i32_store(&i->m0,(U64)si0+260U,si1);
si0=l4;
si1=l4;
si2=260U;
si1+=si2;
i32_store(&i->m0,(U64)si0+304U,si1);
si0=l4;
si1=228U;
si0+=si1;
si1=l6;
si2=l4;
si3=296U;
si2+=si3;
si3=l5;
si3=i32_load(&i->m0,(U64)si3+36U);
TF(i->t0,si3,void (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+368U);
si0=!(si0);
if(si0){
goto L55;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0+364U);
f15024(i,si0);
L55:;
si0=l4;
sj0=i64_load8_u(&i->m0,(U64)si0+228U);
l17=sj0;
sj1=4ULL;
si0=sj0 != sj1;
if(si0){
goto L19;
}
sj0=0ULL;
l17=sj0;
sj0=l16;
sj1=l15;
si0=sj0 >= sj1;
if(si0){
goto L54;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
l6=si0;
si0=l4;
si1=1U;
i32_store(&i->m0,(U64)si0+300U,si1);
si0=l4;
si1=1086468U;
i32_store(&i->m0,(U64)si0+296U,si1);
si0=l4;
sj1=1ULL;
i64_store(&i->m0,(U64)si0+308U,sj1);
si0=l4;
si1=19U;
i32_store(&i->m0,(U64)si0+364U,si1);
si0=l4;
si1=l4;
si2=360U;
si1+=si2;
i32_store(&i->m0,(U64)si0+304U,si1);
si0=l4;
si1=l4;
si2=216U;
si1+=si2;
i32_store(&i->m0,(U64)si0+360U,si1);
si0=l4;
si1=272U;
si0+=si1;
si1=l5;
si2=l4;
si3=296U;
si2+=si3;
si3=l6;
si3=i32_load(&i->m0,(U64)si3+36U);
TF(i->t0,si3,void (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
si0=l4;
sj0=i64_load8_u(&i->m0,(U64)si0+272U);
l17=sj0;
sj1=4ULL;
si0=sj0 != sj1;
if(si0){
goto L64;
}
sj0=1ULL;
l17=sj0;
sj0=l16;
sj1=1ULL;
sj0+=sj1;
l16=sj0;
goto L54;
L64:;
}
si0=l0;
si1=l4;
sj1=i64_load32_u(&i->m0,(U64)si1+273U);
si2=l4;
si3=279U;
si2+=si3;
sj2=i64_load8_u(&i->m0,(U64)si2);
sj3=48ULL;
sj2<<=(sj3&63);
si3=l4;
si4=277U;
si3+=si4;
sj3=i64_load16_u(&i->m0,(U64)si3);
sj4=32ULL;
sj3<<=(sj4&63);
sj2|=sj3;
sj1|=sj2;
sj2=8ULL;
sj1<<=(sj2&63);
sj2=l17;
sj1|=sj2;
i64_store(&i->m0,(U64)si0,sj1);
goto L1;
L53:;
si0=l2;
si1=l9;
si0=TF(i->t0,si1,U32 (*)(rustpythonInstance*,U32))(i,si0);
if(si0){
goto L65;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
l5=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si0=l1;
si0=i32_load8_u(&i->m0,(U64)si0+19U);
if(si0){
goto L17;
}
si0=l4;
si1=308U;
si0+=si1;
sj1=1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=1U;
i32_store(&i->m0,(U64)si0+300U,si1);
si0=l4;
si1=1086468U;
i32_store(&i->m0,(U64)si0+296U,si1);
si0=l4;
si1=157U;
i32_store(&i->m0,(U64)si0+364U,si1);
si0=l4;
si1=l4;
si2=360U;
si1+=si2;
i32_store(&i->m0,(U64)si0+304U,si1);
si0=l4;
si1=l4;
si2=180U;
si1+=si2;
i32_store(&i->m0,(U64)si0+360U,si1);
si0=l4;
si1=240U;
si0+=si1;
si1=l6;
si2=l4;
si3=296U;
si2+=si3;
si3=l5;
si3=i32_load(&i->m0,(U64)si3+36U);
TF(i->t0,si3,void (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
goto L10;
L65:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
l5=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si0=l1;
si0=i32_load8_u(&i->m0,(U64)si0+19U);
si0=!(si0);
if(si0){
goto L70;
}
si0=l4;
si1=144U;
si0+=si1;
si1=l2;
si2=l3;
si2=i32_load(&i->m0,(U64)si2+16U);
TF(i->t0,si2,void (*)(rustpythonInstance*,U32,U32))(i,si0,si1);
si0=l4;
si1=296U;
si0+=si1;
si1=12U;
si0+=si1;
sj1=1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=50U;
i32_store(&i->m0,(U64)si0+264U,si1);
si0=l4;
si1=2U;
i32_store(&i->m0,(U64)si0+300U,si1);
si0=l4;
si1=1086752U;
i32_store(&i->m0,(U64)si0+296U,si1);
si0=l4;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1+144U);
i64_store(&i->m0,(U64)si0+360U,sj1);
si0=l4;
si1=l4;
si2=360U;
si1+=si2;
i32_store(&i->m0,(U64)si0+260U,si1);
si0=l4;
si1=l4;
si2=260U;
si1+=si2;
i32_store(&i->m0,(U64)si0+304U,si1);
si0=l4;
si1=272U;
si0+=si1;
si1=l4;
si2=296U;
si1+=si2;
f64(i,si0,si1);
si0=l1;
si0=i32_load8_u(&i->m0,(U64)si0+16U);
switch(si0){
case 0:
goto L69;
case 1:
goto L68;
case 2:
goto L67;
default:
goto L69;
}
L70:;
si0=l4;
si1=136U;
si0+=si1;
si1=l2;
si2=l3;
si2=i32_load(&i->m0,(U64)si2+16U);
TF(i->t0,si2,void (*)(rustpythonInstance*,U32,U32))(i,si0,si1);
si0=l4;
si1=308U;
si0+=si1;
sj1=1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=50U;
i32_store(&i->m0,(U64)si0+276U,si1);
si0=l4;
si1=2U;
i32_store(&i->m0,(U64)si0+300U,si1);
si0=l4;
si1=1086752U;
i32_store(&i->m0,(U64)si0+296U,si1);
si0=l4;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1+136U);
i64_store(&i->m0,(U64)si0+360U,sj1);
si0=l4;
si1=l4;
si2=360U;
si1+=si2;
i32_store(&i->m0,(U64)si0+272U,si1);
si0=l4;
si1=l4;
si2=272U;
si1+=si2;
i32_store(&i->m0,(U64)si0+304U,si1);
si0=l4;
si1=240U;
si0+=si1;
si1=l6;
si2=l4;
si3=296U;
si2+=si3;
si3=l5;
si3=i32_load(&i->m0,(U64)si3+36U);
TF(i->t0,si3,void (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
goto L15;
L69:;
si0=l4;
si1=360U;
si0+=si1;
si1=12U;
si0+=si1;
si1=l4;
si2=280U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1+272U);
i64_store(&i->m0,(U64)si0+364U,sj1);
si0=l4;
si1=2U;
i32_store(&i->m0,(U64)si0+360U,si1);
goto L66;
L68:;
si0=l4;
si1=360U;
si0+=si1;
si1=12U;
si0+=si1;
si1=l4;
si2=280U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1+272U);
i64_store(&i->m0,(U64)si0+364U,sj1);
si0=l4;
si1=2U;
i32_store(&i->m0,(U64)si0+360U,si1);
goto L66;
L67:;
si0=l4;
si1=360U;
si0+=si1;
si1=12U;
si0+=si1;
si1=l4;
si2=280U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1+272U);
i64_store(&i->m0,(U64)si0+364U,sj1);
si0=l4;
si1=3U;
i32_store(&i->m0,(U64)si0+360U,si1);
L66:;
si0=l4;
si1=308U;
si0+=si1;
sj1=1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=156U;
i32_store(&i->m0,(U64)si0+264U,si1);
si0=l4;
si1=1U;
i32_store(&i->m0,(U64)si0+300U,si1);
si0=l4;
si1=1086468U;
i32_store(&i->m0,(U64)si0+296U,si1);
si0=l4;
si1=l4;
si2=360U;
si1+=si2;
i32_store(&i->m0,(U64)si0+260U,si1);
si0=l4;
si1=l4;
si2=260U;
si1+=si2;
i32_store(&i->m0,(U64)si0+304U,si1);
si0=l4;
si1=240U;
si0+=si1;
si1=l6;
si2=l4;
si3=296U;
si2+=si3;
si3=l5;
si3=i32_load(&i->m0,(U64)si3+36U);
TF(i->t0,si3,void (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
si0=l4;
si1=368U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L15;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0+364U);
f15024(i,si0);
goto L15;
L21:;
si0=l4;
si1=l4;
si1=i32_load(&i->m0,(U64)si1+241U);
i32_store(&i->m0,(U64)si0+216U,si1);
si0=l4;
si1=l4;
si2=240U;
si1+=si2;
si2=4U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0+219U,si1);
goto L16;
L20:;
si0=1086530U;
si1=99U;
si2=1086732U;
f634(i,si0,si1,si2);
UNREACHABLE;
L19:;
si0=l0;
si1=l4;
sj1=i64_load32_u(&i->m0,(U64)si1+229U);
si2=l4;
si3=235U;
si2+=si3;
sj2=i64_load8_u(&i->m0,(U64)si2);
sj3=48ULL;
sj2<<=(sj3&63);
si3=l4;
si4=233U;
si3+=si4;
sj3=i64_load16_u(&i->m0,(U64)si3);
sj4=32ULL;
sj3<<=(sj4&63);
sj2|=sj3;
sj1|=sj2;
sj2=8ULL;
sj1<<=(sj2&63);
sj2=l17;
sj1|=sj2;
i64_store(&i->m0,(U64)si0,sj1);
goto L1;
L18:;
si0=l1;
si0=i32_load8_u(&i->m0,(U64)si0+16U);
switch(si0){
case 0:
goto L7;
case 1:
goto L8;
case 2:
goto L9;
default:
goto L7;
}
L17:;
si0=l4;
si1=296U;
si0+=si1;
si1=12U;
si0+=si1;
sj1=1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=1U;
i32_store(&i->m0,(U64)si0+300U,si1);
si0=l4;
si1=1086468U;
i32_store(&i->m0,(U64)si0+296U,si1);
si0=l4;
si1=157U;
i32_store(&i->m0,(U64)si0+364U,si1);
si0=l4;
si1=l4;
si2=360U;
si1+=si2;
i32_store(&i->m0,(U64)si0+304U,si1);
si0=l4;
si1=l4;
si2=180U;
si1+=si2;
i32_store(&i->m0,(U64)si0+360U,si1);
si0=l4;
si1=272U;
si0+=si1;
si1=l4;
si2=296U;
si1+=si2;
f64(i,si0,si1);
si0=l1;
si0=i32_load8_u(&i->m0,(U64)si0+16U);
switch(si0){
case 0:
goto L12;
case 1:
goto L13;
case 2:
goto L14;
default:
goto L12;
}
L16:;
si0=l0;
si1=l4;
si1=i32_load(&i->m0,(U64)si1+216U);
i32_store(&i->m0,(U64)si0+1U,si1);
si0=l0;
si1=4U;
si0+=si1;
si1=l4;
si1=i32_load(&i->m0,(U64)si1+219U);
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l6;
i32_store8(&i->m0,(U64)si0,si1);
goto L1;
L15:;
si0=l4;
sj0=i64_load8_u(&i->m0,(U64)si0+240U);
l16=sj0;
sj1=4ULL;
si0=sj0 != sj1;
if(si0){
goto L73;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0+180U);
si1=1U;
si2=l4;
si2=i32_load(&i->m0,(U64)si2+184U);
si2=i32_load(&i->m0,(U64)si2+40U);
si0=TF(i->t0,si2,U32 (*)(rustpythonInstance*,U32,U32))(i,si0,si1);
si0=!(si0);
if(si0){
goto L3;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
l5=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si0=l1;
si0=i32_load8_u(&i->m0,(U64)si0+19U);
if(si0){
goto L72;
}
si0=l4;
si1=308U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=1U;
i32_store(&i->m0,(U64)si0+300U,si1);
si0=l4;
si1=1086772U;
i32_store(&i->m0,(U64)si0+296U,si1);
si0=l4;
si1=l4;
si2=272U;
si1+=si2;
i32_store(&i->m0,(U64)si0+304U,si1);
si0=l4;
si1=260U;
si0+=si1;
si1=l6;
si2=l4;
si3=296U;
si2+=si3;
si3=l5;
si3=i32_load(&i->m0,(U64)si3+36U);
TF(i->t0,si3,void (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
goto L71;
L73:;
si0=l0;
si1=l4;
sj1=i64_load32_u(&i->m0,(U64)si1+241U);
si2=l4;
si3=247U;
si2+=si3;
sj2=i64_load8_u(&i->m0,(U64)si2);
sj3=48ULL;
sj2<<=(sj3&63);
si3=l4;
si4=245U;
si3+=si4;
sj3=i64_load16_u(&i->m0,(U64)si3);
sj4=32ULL;
sj3<<=(sj4&63);
sj2|=sj3;
sj1|=sj2;
sj2=8ULL;
sj1<<=(sj2&63);
sj2=l16;
sj1|=sj2;
i64_store(&i->m0,(U64)si0,sj1);
goto L1;
L72:;
si0=l1;
si0=i32_load8_u(&i->m0,(U64)si0+16U);
switch(si0){
case 0:
goto L75;
case 1:
goto L76;
case 2:
goto L77;
default:
goto L75;
}
L77:;
si0=l4;
si1=368U;
si0+=si1;
si1=3U;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=1086768U;
i32_store(&i->m0,(U64)si0+364U,si1);
si0=l4;
si1=3U;
i32_store(&i->m0,(U64)si0+360U,si1);
goto L74;
L76:;
si0=l4;
si1=368U;
si0+=si1;
si1=3U;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=1086768U;
i32_store(&i->m0,(U64)si0+364U,si1);
si0=l4;
si1=2U;
i32_store(&i->m0,(U64)si0+360U,si1);
goto L74;
L75:;
si0=l4;
si1=368U;
si0+=si1;
si1=3U;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=1086768U;
i32_store(&i->m0,(U64)si0+364U,si1);
si0=l4;
si1=2U;
i32_store(&i->m0,(U64)si0+360U,si1);
L74:;
si0=l4;
si1=308U;
si0+=si1;
sj1=1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=155U;
i32_store(&i->m0,(U64)si0+276U,si1);
si0=l4;
si1=1U;
i32_store(&i->m0,(U64)si0+300U,si1);
si0=l4;
si1=1086468U;
i32_store(&i->m0,(U64)si0+296U,si1);
si0=l4;
si1=l4;
si2=360U;
si1+=si2;
i32_store(&i->m0,(U64)si0+272U,si1);
si0=l4;
si1=l4;
si2=272U;
si1+=si2;
i32_store(&i->m0,(U64)si0+304U,si1);
si0=l4;
si1=260U;
si0+=si1;
si1=l6;
si2=l4;
si3=296U;
si2+=si3;
si3=l5;
si3=i32_load(&i->m0,(U64)si3+36U);
TF(i->t0,si3,void (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
L71:;
si0=l4;
sj0=i64_load8_u(&i->m0,(U64)si0+260U);
l16=sj0;
sj1=4ULL;
si0=sj0 == sj1;
if(si0){
goto L3;
}
si0=l0;
si1=l4;
sj1=i64_load32_u(&i->m0,(U64)si1+261U);
si2=l4;
si3=267U;
si2+=si3;
sj2=i64_load8_u(&i->m0,(U64)si2);
sj3=48ULL;
sj2<<=(sj3&63);
si3=l4;
si4=265U;
si3+=si4;
sj3=i64_load16_u(&i->m0,(U64)si3);
sj4=32ULL;
sj3<<=(sj4&63);
sj2|=sj3;
sj1|=sj2;
sj2=8ULL;
sj1<<=(sj2&63);
sj2=l16;
sj1|=sj2;
i64_store(&i->m0,(U64)si0,sj1);
goto L1;
L14:;
si0=l4;
si1=360U;
si0+=si1;
si1=12U;
si0+=si1;
si1=l4;
si2=280U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1+272U);
i64_store(&i->m0,(U64)si0+364U,sj1);
si0=l4;
si1=3U;
i32_store(&i->m0,(U64)si0+360U,si1);
goto L11;
L13:;
si0=l4;
si1=360U;
si0+=si1;
si1=12U;
si0+=si1;
si1=l4;
si2=280U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1+272U);
i64_store(&i->m0,(U64)si0+364U,sj1);
si0=l4;
si1=2U;
i32_store(&i->m0,(U64)si0+360U,si1);
goto L11;
L12:;
si0=l4;
si1=360U;
si0+=si1;
si1=12U;
si0+=si1;
si1=l4;
si2=280U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1+272U);
i64_store(&i->m0,(U64)si0+364U,sj1);
si0=l4;
si1=2U;
i32_store(&i->m0,(U64)si0+360U,si1);
L11:;
si0=l4;
si1=308U;
si0+=si1;
sj1=1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=156U;
i32_store(&i->m0,(U64)si0+264U,si1);
si0=l4;
si1=1U;
i32_store(&i->m0,(U64)si0+300U,si1);
si0=l4;
si1=1086468U;
i32_store(&i->m0,(U64)si0+296U,si1);
si0=l4;
si1=l4;
si2=360U;
si1+=si2;
i32_store(&i->m0,(U64)si0+260U,si1);
si0=l4;
si1=l4;
si2=260U;
si1+=si2;
i32_store(&i->m0,(U64)si0+304U,si1);
si0=l4;
si1=240U;
si0+=si1;
si1=l6;
si2=l4;
si3=296U;
si2+=si3;
si3=l5;
si3=i32_load(&i->m0,(U64)si3+36U);
TF(i->t0,si3,void (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
si0=l4;
si1=368U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L10;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0+364U);
f15024(i,si0);
L10:;
si0=l4;
sj0=i64_load8_u(&i->m0,(U64)si0+240U);
l16=sj0;
sj1=4ULL;
si0=sj0 == sj1;
if(si0){
goto L3;
}
si0=l0;
si1=l4;
sj1=i64_load32_u(&i->m0,(U64)si1+241U);
si2=l4;
si3=247U;
si2+=si3;
sj2=i64_load8_u(&i->m0,(U64)si2);
sj3=48ULL;
sj2<<=(sj3&63);
si3=l4;
si4=245U;
si3+=si4;
sj3=i64_load16_u(&i->m0,(U64)si3);
sj4=32ULL;
sj3<<=(sj4&63);
sj2|=sj3;
sj1|=sj2;
sj2=8ULL;
sj1<<=(sj2&63);
sj2=l16;
sj1|=sj2;
i64_store(&i->m0,(U64)si0,sj1);
goto L1;
L9:;
si0=l4;
si1=368U;
si0+=si1;
si1=3U;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=1086768U;
i32_store(&i->m0,(U64)si0+364U,si1);
si0=l4;
si1=3U;
i32_store(&i->m0,(U64)si0+360U,si1);
goto L6;
L8:;
si0=l4;
si1=368U;
si0+=si1;
si1=3U;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=1086768U;
i32_store(&i->m0,(U64)si0+364U,si1);
si0=l4;
si1=2U;
i32_store(&i->m0,(U64)si0+360U,si1);
goto L6;
L7:;
si0=l4;
si1=368U;
si0+=si1;
si1=3U;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=1086768U;
i32_store(&i->m0,(U64)si0+364U,si1);
si0=l4;
si1=2U;
i32_store(&i->m0,(U64)si0+360U,si1);
L6:;
si0=l4;
si1=308U;
si0+=si1;
sj1=1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=155U;
i32_store(&i->m0,(U64)si0+276U,si1);
si0=l4;
si1=1U;
i32_store(&i->m0,(U64)si0+300U,si1);
si0=l4;
si1=1086468U;
i32_store(&i->m0,(U64)si0+296U,si1);
si0=l4;
si1=l4;
si2=360U;
si1+=si2;
i32_store(&i->m0,(U64)si0+272U,si1);
si0=l4;
si1=l4;
si2=272U;
si1+=si2;
i32_store(&i->m0,(U64)si0+304U,si1);
si0=l4;
si1=260U;
si0+=si1;
si1=l6;
si2=l4;
si3=296U;
si2+=si3;
si3=l5;
si3=i32_load(&i->m0,(U64)si3+36U);
TF(i->t0,si3,void (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
L5:;
si0=l4;
sj0=i64_load8_u(&i->m0,(U64)si0+260U);
l16=sj0;
sj1=4ULL;
si0=sj0 == sj1;
if(si0){
goto L3;
}
si0=l0;
si1=l4;
sj1=i64_load32_u(&i->m0,(U64)si1+261U);
si2=l4;
si3=267U;
si2+=si3;
sj2=i64_load8_u(&i->m0,(U64)si2);
sj3=48ULL;
sj2<<=(sj3&63);
si3=l4;
si4=265U;
si3+=si4;
sj3=i64_load16_u(&i->m0,(U64)si3);
sj4=32ULL;
sj3<<=(sj4&63);
sj2|=sj3;
sj1|=sj2;
sj2=8ULL;
sj1<<=(sj2&63);
sj2=l16;
sj1|=sj2;
i64_store(&i->m0,(U64)si0,sj1);
goto L1;
L4:;
L79:;
{
si0=l14;
si1=1U;
si0&=si1;
si0=!(si0);
if(si0){
goto L81;
}
si0=l6;
si1=l12;
si0=si0 >= si1;
if(si0){
goto L78;
}
L83:;
{
si0=l7;
l8=si0;
si0=l5;
si1=l7;
si0=si0 == si1;
if(si0){
goto L84;
}
si0=l5;
si1=8U;
si0+=si1;
l8=si0;
si0=l5;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L82;
}
L84:;
si0=l8;
l5=si0;
si0=l12;
si1=l6;
si2=1U;
si1+=si2;
l6=si1;
si0=si0 != si1;
if(si0){
goto L83;
}
goto L78;
}
L82:;
si0=l6;
si1=1U;
si0+=si1;
l6=si0;
si0=l5;
l10=si0;
si0=l8;
l5=si0;
goto L80;
L81:;
si0=l10;
si0=!(si0);
if(si0){
goto L78;
}
L80:;
si0=l4;
si1=l10;
i32_store(&i->m0,(U64)si0+228U,si1);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
l8=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l10=si0;
si0=l1;
si0=i32_load8_u(&i->m0,(U64)si0+19U);
if(si0){
goto L86;
}
si0=l4;
si1=2U;
i32_store(&i->m0,(U64)si0+300U,si1);
si0=l4;
si1=1086752U;
i32_store(&i->m0,(U64)si0+296U,si1);
si0=l4;
sj1=1ULL;
i64_store(&i->m0,(U64)si0+308U,sj1);
si0=l4;
si1=147U;
i32_store(&i->m0,(U64)si0+364U,si1);
si0=l4;
si1=l4;
si2=360U;
si1+=si2;
i32_store(&i->m0,(U64)si0+304U,si1);
si0=l4;
si1=l4;
si2=228U;
si1+=si2;
i32_store(&i->m0,(U64)si0+360U,si1);
si0=l4;
si1=240U;
si0+=si1;
si1=l10;
si2=l4;
si3=296U;
si2+=si3;
si3=l8;
si3=i32_load(&i->m0,(U64)si3+36U);
TF(i->t0,si3,void (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
goto L85;
L86:;
si0=l4;
si1=2U;
i32_store(&i->m0,(U64)si0+300U,si1);
si0=l4;
si1=1086752U;
i32_store(&i->m0,(U64)si0+296U,si1);
si0=l4;
sj1=1ULL;
i64_store(&i->m0,(U64)si0+308U,sj1);
si0=l4;
si1=147U;
i32_store(&i->m0,(U64)si0+264U,si1);
si0=l4;
si1=l4;
si2=260U;
si1+=si2;
i32_store(&i->m0,(U64)si0+304U,si1);
si0=l4;
si1=l4;
si2=228U;
si1+=si2;
i32_store(&i->m0,(U64)si0+260U,si1);
si0=l4;
si1=272U;
si0+=si1;
si1=l4;
si2=296U;
si1+=si2;
f64(i,si0,si1);
si0=l1;
si0=i32_load8_u(&i->m0,(U64)si0+16U);
switch(si0){
case 0:
goto L88;
case 1:
goto L89;
case 2:
goto L90;
default:
goto L88;
}
L90:;
si0=l13;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1+272U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l13;
si1=8U;
si0+=si1;
si1=l4;
si2=272U;
si1+=si2;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=3U;
i32_store(&i->m0,(U64)si0+360U,si1);
goto L87;
L89:;
si0=l13;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1+272U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l13;
si1=8U;
si0+=si1;
si1=l4;
si2=272U;
si1+=si2;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=2U;
i32_store(&i->m0,(U64)si0+360U,si1);
goto L87;
L88:;
si0=l13;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1+272U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l13;
si1=8U;
si0+=si1;
si1=l4;
si2=272U;
si1+=si2;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=2U;
i32_store(&i->m0,(U64)si0+360U,si1);
L87:;
si0=l4;
si1=156U;
i32_store(&i->m0,(U64)si0+264U,si1);
si0=l4;
si1=1U;
i32_store(&i->m0,(U64)si0+300U,si1);
si0=l4;
si1=1086468U;
i32_store(&i->m0,(U64)si0+296U,si1);
si0=l4;
sj1=1ULL;
i64_store(&i->m0,(U64)si0+308U,sj1);
si0=l4;
si1=l4;
si2=360U;
si1+=si2;
i32_store(&i->m0,(U64)si0+260U,si1);
si0=l4;
si1=l4;
si2=260U;
si1+=si2;
i32_store(&i->m0,(U64)si0+304U,si1);
si0=l4;
si1=240U;
si0+=si1;
si1=l10;
si2=l4;
si3=296U;
si2+=si3;
si3=l8;
si3=i32_load(&i->m0,(U64)si3+36U);
TF(i->t0,si3,void (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+368U);
si0=!(si0);
if(si0){
goto L85;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0+364U);
f15024(i,si0);
L85:;
si0=l4;
sj0=i64_load8_u(&i->m0,(U64)si0+240U);
l16=sj0;
sj1=4ULL;
si0=sj0 != sj1;
if(si0){
goto L92;
}
si0=0U;
l14=si0;
si0=l6;
si1=l12;
si0=si0 < si1;
if(si0){
goto L93;
}
si0=0U;
l10=si0;
goto L79;
L93:;
si0=l5;
l10=si0;
L94:;
{
si0=l7;
l8=si0;
si0=l10;
si1=l7;
si0=si0 == si1;
if(si0){
goto L95;
}
si0=l10;
si1=8U;
si0+=si1;
l5=si0;
si0=l10;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L91;
}
si0=l5;
l8=si0;
L95:;
si0=l8;
l10=si0;
si0=l12;
si1=l6;
si2=1U;
si1+=si2;
l6=si1;
si0=si0 != si1;
if(si0){
goto L94;
}
}
si0=0U;
l10=si0;
si0=l12;
l6=si0;
goto L79;
L92:;
si0=l0;
si1=l4;
sj1=i64_load32_u(&i->m0,(U64)si1+241U);
si2=l4;
si3=247U;
si2+=si3;
sj2=i64_load8_u(&i->m0,(U64)si2);
sj3=48ULL;
sj2<<=(sj3&63);
si3=l4;
si4=245U;
si3+=si4;
sj3=i64_load16_u(&i->m0,(U64)si3);
sj4=32ULL;
sj3<<=(sj4&63);
sj2|=sj3;
sj1|=sj2;
sj2=8ULL;
sj1<<=(sj2&63);
sj2=l16;
sj1|=sj2;
i64_store(&i->m0,(U64)si0,sj1);
goto L1;
L91:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l8=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
l18=si0;
si0=l4;
si1=1U;
i32_store(&i->m0,(U64)si0+300U,si1);
si0=l4;
si1=1086468U;
i32_store(&i->m0,(U64)si0+296U,si1);
si0=l4;
sj1=1ULL;
i64_store(&i->m0,(U64)si0+308U,sj1);
si0=l4;
si1=19U;
i32_store(&i->m0,(U64)si0+364U,si1);
si0=l4;
si1=l4;
si2=360U;
si1+=si2;
i32_store(&i->m0,(U64)si0+304U,si1);
si0=l4;
si1=l4;
si2=216U;
si1+=si2;
i32_store(&i->m0,(U64)si0+360U,si1);
si0=l4;
si1=272U;
si0+=si1;
si1=l8;
si2=l4;
si3=296U;
si2+=si3;
si3=l18;
si3=i32_load(&i->m0,(U64)si3+36U);
TF(i->t0,si3,void (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
si0=l4;
sj0=i64_load8_u(&i->m0,(U64)si0+272U);
l16=sj0;
sj1=4ULL;
si0=sj0 != sj1;
if(si0){
goto L96;
}
si0=l6;
si1=1U;
si0+=si1;
l6=si0;
goto L79;
L96:;
}
si0=l0;
si1=l4;
sj1=i64_load32_u(&i->m0,(U64)si1+273U);
si2=l4;
si3=279U;
si2+=si3;
sj2=i64_load8_u(&i->m0,(U64)si2);
sj3=48ULL;
sj2<<=(sj3&63);
si3=l4;
si4=277U;
si3+=si4;
sj3=i64_load16_u(&i->m0,(U64)si3);
sj4=32ULL;
sj3<<=(sj4&63);
sj2|=sj3;
sj1|=sj2;
sj2=8ULL;
sj1<<=(sj2&63);
sj2=l16;
sj1|=sj2;
i64_store(&i->m0,(U64)si0,sj1);
goto L1;
L78:;
si0=l11;
si0=i32_load(&i->m0,(U64)si0+12U);
l5=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+180U);
si1=1U;
si2=l4;
si2=i32_load(&i->m0,(U64)si2+184U);
si2=i32_load(&i->m0,(U64)si2+40U);
si0=TF(i->t0,si2,U32 (*)(rustpythonInstance*,U32,U32))(i,si0,si1);
l6=si0;
si0=l5;
si1=1U;
si0=si0 != si1;
if(si0){
goto L3;
}
si0=l6;
si0=!(si0);
if(si0){
goto L3;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
l5=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si0=l1;
si0=i32_load8_u(&i->m0,(U64)si0+19U);
if(si0){
goto L98;
}
si0=l4;
si1=308U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=1U;
i32_store(&i->m0,(U64)si0+300U,si1);
si0=l4;
si1=1086772U;
i32_store(&i->m0,(U64)si0+296U,si1);
si0=l4;
si1=l4;
si2=272U;
si1+=si2;
i32_store(&i->m0,(U64)si0+304U,si1);
si0=l4;
si1=260U;
si0+=si1;
si1=l6;
si2=l4;
si3=296U;
si2+=si3;
si3=l5;
si3=i32_load(&i->m0,(U64)si3+36U);
TF(i->t0,si3,void (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
goto L97;
L98:;
si0=l1;
si0=i32_load8_u(&i->m0,(U64)si0+16U);
switch(si0){
case 0:
goto L100;
case 1:
goto L101;
case 2:
goto L102;
default:
goto L100;
}
L102:;
si0=l4;
si1=368U;
si0+=si1;
si1=3U;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=1086768U;
i32_store(&i->m0,(U64)si0+364U,si1);
si0=l4;
si1=3U;
i32_store(&i->m0,(U64)si0+360U,si1);
goto L99;
L101:;
si0=l4;
si1=368U;
si0+=si1;
si1=3U;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=1086768U;
i32_store(&i->m0,(U64)si0+364U,si1);
si0=l4;
si1=2U;
i32_store(&i->m0,(U64)si0+360U,si1);
goto L99;
L100:;
si0=l4;
si1=368U;
si0+=si1;
si1=3U;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=1086768U;
i32_store(&i->m0,(U64)si0+364U,si1);
si0=l4;
si1=2U;
i32_store(&i->m0,(U64)si0+360U,si1);
L99:;
si0=l4;
si1=308U;
si0+=si1;
sj1=1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=155U;
i32_store(&i->m0,(U64)si0+276U,si1);
si0=l4;
si1=1U;
i32_store(&i->m0,(U64)si0+300U,si1);
si0=l4;
si1=1086468U;
i32_store(&i->m0,(U64)si0+296U,si1);
si0=l4;
si1=l4;
si2=360U;
si1+=si2;
i32_store(&i->m0,(U64)si0+272U,si1);
si0=l4;
si1=l4;
si2=272U;
si1+=si2;
i32_store(&i->m0,(U64)si0+304U,si1);
si0=l4;
si1=260U;
si0+=si1;
si1=l6;
si2=l4;
si3=296U;
si2+=si3;
si3=l5;
si3=i32_load(&i->m0,(U64)si3+36U);
TF(i->t0,si3,void (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
L97:;
si0=l4;
sj0=i64_load8_u(&i->m0,(U64)si0+260U);
l16=sj0;
sj1=4ULL;
si0=sj0 == sj1;
if(si0){
goto L3;
}
si0=l0;
si1=l4;
sj1=i64_load32_u(&i->m0,(U64)si1+261U);
si2=l4;
si3=267U;
si2+=si3;
sj2=i64_load8_u(&i->m0,(U64)si2);
sj3=48ULL;
sj2<<=(sj3&63);
si3=l4;
si4=265U;
si3+=si4;
sj3=i64_load16_u(&i->m0,(U64)si3);
sj4=32ULL;
sj3<<=(sj4&63);
sj2|=sj3;
sj1|=sj2;
sj2=8ULL;
sj1<<=(sj2&63);
sj2=l16;
sj1|=sj2;
i64_store(&i->m0,(U64)si0,sj1);
goto L1;
L3:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+184U);
l8=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+180U);
l7=si0;
L2:;
si0=l4;
si1=l1;
i32_store(&i->m0,(U64)si0+200U,si1);
si0=l4;
si1=0U;
i32_store(&i->m0,(U64)si0+212U,si1);
si0=l4;
sj1=4ULL;
i64_store(&i->m0,(U64)si0+204U,sj1);
si0=l4;
si1=228U;
si0+=si1;
si1=l7;
si2=l8;
si2=i32_load(&i->m0,(U64)si2+112U);
TF(i->t0,si2,void (*)(rustpythonInstance*,U32,U32))(i,si0,si1);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+228U);
l5=si0;
if(si0){
goto L104;
}
si0=l8;
si0=i32_load(&i->m0,(U64)si0+40U);
l12=si0;
goto L103;
L104:;
si0=l7;
si1=15U;
si2=l8;
si2=i32_load(&i->m0,(U64)si2+40U);
l12=si2;
si0=TF(i->t0,si2,U32 (*)(rustpythonInstance*,U32,U32))(i,si0,si1);
if(si0){
goto L106;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0+236U);
l6=si0;
if(si0){
goto L108;
}
si0=l4;
si1=0U;
i32_store(&i->m0,(U64)si0+368U,si1);
si0=l4;
si1=1085852U;
i32_store(&i->m0,(U64)si0+364U,si1);
si0=l4;
si1=0U;
i32_store(&i->m0,(U64)si0+360U,si1);
goto L107;
L108:;
si0=l4;
si1=360U;
si0+=si1;
si1=l6;
si1=i32_load(&i->m0,(U64)si1);
si2=l6;
si3=8U;
si2+=si3;
si2=i32_load(&i->m0,(U64)si2);
f63(i,si0,si1,si2);
L107:;
si0=l4;
si1=308U;
si0+=si1;
sj1=1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=148U;
i32_store(&i->m0,(U64)si0+264U,si1);
si0=l4;
si1=1U;
i32_store(&i->m0,(U64)si0+300U,si1);
si0=l4;
si1=1086840U;
i32_store(&i->m0,(U64)si0+296U,si1);
si0=l4;
si1=l4;
si2=360U;
si1+=si2;
i32_store(&i->m0,(U64)si0+260U,si1);
si0=l4;
si1=l4;
si2=260U;
si1+=si2;
i32_store(&i->m0,(U64)si0+304U,si1);
si0=l4;
si1=272U;
si0+=si1;
si1=l4;
si2=296U;
si1+=si2;
f64(i,si0,si1);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+360U);
l6=si0;
si0=!(si0);
if(si0){
goto L109;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0+364U);
si0=!(si0);
if(si0){
goto L109;
}
si0=l6;
f15024(i,si0);
L109:;
si0=l4;
si1=240U;
si0+=si1;
si1=8U;
si0+=si1;
si1=l4;
si2=272U;
si1+=si2;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1+272U);
i64_store(&i->m0,(U64)si0+240U,sj1);
goto L105;
L106:;
si0=l4;
si1=0U;
i32_store(&i->m0,(U64)si0+248U,si1);
si0=l4;
sj1=1ULL;
i64_store(&i->m0,(U64)si0+240U,sj1);
L105:;
si0=l4;
si1=272U;
si0+=si1;
si1=l5;
si2=l4;
si2=i32_load(&i->m0,(U64)si2+232U);
f63(i,si0,si1,si2);
si0=l4;
si1=360U;
si0+=si1;
si1=12U;
si0+=si1;
si1=154U;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=296U;
si0+=si1;
si1=12U;
si0+=si1;
sj1=2ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=148U;
i32_store(&i->m0,(U64)si0+364U,si1);
si0=l4;
si1=3U;
i32_store(&i->m0,(U64)si0+300U,si1);
si0=l4;
si1=1086856U;
i32_store(&i->m0,(U64)si0+296U,si1);
si0=l4;
si1=l4;
si2=240U;
si1+=si2;
i32_store(&i->m0,(U64)si0+368U,si1);
si0=l4;
si1=l4;
si2=272U;
si1+=si2;
i32_store(&i->m0,(U64)si0+360U,si1);
si0=l4;
si1=l4;
si2=360U;
si1+=si2;
i32_store(&i->m0,(U64)si0+304U,si1);
si0=l4;
si1=260U;
si0+=si1;
si1=l4;
si2=296U;
si1+=si2;
f64(i,si0,si1);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+272U);
l5=si0;
si0=!(si0);
if(si0){
goto L110;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0+276U);
si0=!(si0);
if(si0){
goto L110;
}
si0=l5;
f15024(i,si0);
L110:;
si0=l4;
si1=216U;
si0+=si1;
si1=8U;
si0+=si1;
l6=si0;
si1=l4;
si2=260U;
si1+=si2;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1+260U);
i64_store(&i->m0,(U64)si0+216U,sj1);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+212U);
l5=si0;
si1=l4;
si1=i32_load(&i->m0,(U64)si1+208U);
si0=si0 != si1;
if(si0){
goto L111;
}
si0=l4;
si1=204U;
si0+=si1;
si1=l5;
f518(i,si0,si1);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+212U);
l5=si0;
L111:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+204U);
si1=l5;
si2=12U;
si1*=si2;
si0+=si1;
l5=si0;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1+216U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=8U;
si0+=si1;
si1=l6;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=l4;
si1=i32_load(&i->m0,(U64)si1+212U);
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0+212U,si1);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+244U);
si0=!(si0);
if(si0){
goto L103;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0+240U);
f15024(i,si0);
L103:;
si0=l7;
si1=13U;
si2=l12;
si0=TF(i->t0,si2,U32 (*)(rustpythonInstance*,U32,U32))(i,si0,si1);
if(si0){
goto L112;
}
si0=l4;
si1=112U;
si0+=si1;
si1=l7;
si2=l8;
si2=i32_load(&i->m0,(U64)si2+104U);
TF(i->t0,si2,void (*)(rustpythonInstance*,U32,U32))(i,si0,si1);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+112U);
l5=si0;
si0=!(si0);
if(si0){
goto L112;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0+116U);
l6=si0;
si0=l1;
si0=i32_load8_u(&i->m0,(U64)si0+19U);
if(si0){
goto L114;
}
si0=l4;
si1=364U;
si0+=si1;
si1=l5;
si2=l6;
f63(i,si0,si1,si2);
si0=l4;
si1=3U;
i32_store(&i->m0,(U64)si0+360U,si1);
goto L113;
L114:;
si0=l4;
si1=296U;
si0+=si1;
si1=l5;
si2=l6;
f63(i,si0,si1,si2);
si0=l1;
si0=i32_load8_u(&i->m0,(U64)si0+16U);
switch(si0){
case 0:
goto L115;
case 1:
goto L116;
case 2:
goto L117;
default:
goto L115;
}
L117:;
si0=l4;
si1=372U;
si0+=si1;
si1=l4;
si2=304U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1+296U);
i64_store(&i->m0,(U64)si0+364U,sj1);
si0=l4;
si1=3U;
i32_store(&i->m0,(U64)si0+360U,si1);
goto L113;
L116:;
si0=l4;
si1=372U;
si0+=si1;
si1=l4;
si2=304U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1+296U);
i64_store(&i->m0,(U64)si0+364U,sj1);
si0=l4;
si1=2U;
i32_store(&i->m0,(U64)si0+360U,si1);
goto L113;
L115:;
si0=l4;
si1=372U;
si0+=si1;
si1=l4;
si2=304U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1+296U);
i64_store(&i->m0,(U64)si0+364U,sj1);
si0=l4;
si1=2U;
i32_store(&i->m0,(U64)si0+360U,si1);
L113:;
si0=l4;
si1=308U;
si0+=si1;
sj1=1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=158U;
i32_store(&i->m0,(U64)si0+264U,si1);
si0=l4;
si1=1086892U;
i32_store(&i->m0,(U64)si0+296U,si1);
si0=l4;
si1=l4;
si2=360U;
si1+=si2;
i32_store(&i->m0,(U64)si0+260U,si1);
si0=l4;
si1=l4;
si2=260U;
si1+=si2;
i32_store(&i->m0,(U64)si0+304U,si1);
si0=l4;
si1=2U;
i32_store(&i->m0,(U64)si0+300U,si1);
si0=l4;
si1=272U;
si0+=si1;
si1=l4;
si2=296U;
si1+=si2;
f64(i,si0,si1);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+360U);
switch(si0){
case 0:
goto L118;
case 1:
goto L118;
case 2:
goto L118;
default:
goto L118;
}
L118:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+364U);
l5=si0;
si0=!(si0);
if(si0){
goto L119;
}
si0=l4;
si1=368U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L119;
}
si0=l5;
f15024(i,si0);
L119:;
si0=l4;
si1=296U;
si0+=si1;
si1=8U;
si0+=si1;
l6=si0;
si1=l4;
si2=272U;
si1+=si2;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1+272U);
i64_store(&i->m0,(U64)si0+296U,sj1);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+212U);
l5=si0;
si1=l4;
si1=i32_load(&i->m0,(U64)si1+208U);
si0=si0 != si1;
if(si0){
goto L120;
}
si0=l4;
si1=204U;
si0+=si1;
si1=l5;
f518(i,si0,si1);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+212U);
l5=si0;
L120:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+204U);
si1=l5;
si2=12U;
si1*=si2;
si0+=si1;
l5=si0;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1+296U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=8U;
si0+=si1;
si1=l6;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=l4;
si1=i32_load(&i->m0,(U64)si1+212U);
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0+212U,si1);
L112:;
si0=l4;
si1=260U;
si0+=si1;
si1=l7;
si2=l8;
si2=i32_load(&i->m0,(U64)si2+24U);
TF(i->t0,si2,void (*)(rustpythonInstance*,U32,U32))(i,si0,si1);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+260U);
l10=si0;
si0=!(si0);
if(si0){
goto L121;
}
si0=l1;
si0=i32_load8_u(&i->m0,(U64)si0+19U);
if(si0){
goto L123;
}
si0=l4;
si1=360U;
si0+=si1;
si1=l10;
si2=l4;
si2=i32_load(&i->m0,(U64)si2+268U);
si3=1086504U;
si4=2U;
f436(i,si0,si1,si2,si3,si4);
goto L122;
L123:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+268U);
l5=si0;
si0=l4;
si1=l10;
i32_store(&i->m0,(U64)si0+228U,si1);
si0=l4;
si1=l10;
si2=l5;
si3=3U;
si2<<=(si3&31);
si1+=si2;
i32_store(&i->m0,(U64)si0+232U,si1);
si0=l4;
si1=l4;
si2=200U;
si1+=si2;
i32_store(&i->m0,(U64)si0+236U,si1);
si0=l4;
si1=296U;
si0+=si1;
si1=l4;
si2=228U;
si1+=si2;
f252(i,si0,si1);
si0=l4;
si1=360U;
si0+=si1;
si1=l4;
si1=i32_load(&i->m0,(U64)si1+296U);
l14=si1;
si2=l4;
si2=i32_load(&i->m0,(U64)si2+304U);
l6=si2;
si3=1086504U;
si4=2U;
f437(i,si0,si1,si2,si3,si4);
si0=l6;
si0=!(si0);
if(si0){
goto L124;
}
si0=l14;
l5=si0;
L125:;
{
si0=l5;
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L126;
}
si0=l5;
si0=i32_load(&i->m0,(U64)si0);
f15024(i,si0);
L126:;
si0=l5;
si1=12U;
si0+=si1;
l5=si0;
si0=l6;
si1=-1U;
si0+=si1;
l6=si0;
if(si0){
goto L125;
}
}
L124:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+300U);
si0=!(si0);
if(si0){
goto L122;
}
si0=l14;
f15024(i,si0);
L122:;
si0=l4;
si1=308U;
si0+=si1;
sj1=1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=154U;
i32_store(&i->m0,(U64)si0+244U,si1);
si0=l4;
si1=2U;
i32_store(&i->m0,(U64)si0+300U,si1);
si0=l4;
si1=1086920U;
i32_store(&i->m0,(U64)si0+296U,si1);
si0=l4;
si1=l4;
si2=360U;
si1+=si2;
i32_store(&i->m0,(U64)si0+240U,si1);
si0=l4;
si1=l4;
si2=240U;
si1+=si2;
i32_store(&i->m0,(U64)si0+304U,si1);
si0=l4;
si1=272U;
si0+=si1;
si1=l4;
si2=296U;
si1+=si2;
f64(i,si0,si1);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+364U);
si0=!(si0);
if(si0){
goto L127;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0+360U);
f15024(i,si0);
L127:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+212U);
l5=si0;
si1=l4;
si1=i32_load(&i->m0,(U64)si1+208U);
si0=si0 != si1;
if(si0){
goto L128;
}
si0=l4;
si1=204U;
si0+=si1;
si1=l5;
f518(i,si0,si1);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+212U);
l5=si0;
L128:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+204U);
si1=l5;
si2=12U;
si1*=si2;
si0+=si1;
l5=si0;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1+272U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=8U;
si0+=si1;
si1=l4;
si2=272U;
si1+=si2;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=l4;
si1=i32_load(&i->m0,(U64)si1+212U);
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0+212U,si1);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+264U);
si0=!(si0);
if(si0){
goto L121;
}
si0=l10;
f15024(i,si0);
L121:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+200U);
si0=i32_load8_u(&i->m0,(U64)si0+18U);
if(si0){
goto L129;
}
si0=l7;
si1=9U;
si2=l12;
si0=TF(i->t0,si2,U32 (*)(rustpythonInstance*,U32,U32))(i,si0,si1);
if(si0){
goto L129;
}
si0=l4;
si1=104U;
si0+=si1;
si1=l7;
si2=l8;
si2=i32_load(&i->m0,(U64)si2+64U);
TF(i->t0,si2,void (*)(rustpythonInstance*,U32,U32))(i,si0,si1);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+104U);
l5=si0;
si0=!(si0);
if(si0){
goto L129;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0+108U);
l6=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+200U);
si0=i32_load8_u(&i->m0,(U64)si0+19U);
if(si0){
goto L131;
}
si0=l4;
si1=360U;
si0+=si1;
si1=l5;
si2=l6;
si3=1086504U;
si4=2U;
f436(i,si0,si1,si2,si3,si4);
si0=l4;
si1=308U;
si0+=si1;
sj1=1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=154U;
i32_store(&i->m0,(U64)si0+276U,si1);
si0=l4;
si1=2U;
i32_store(&i->m0,(U64)si0+300U,si1);
si0=l4;
si1=1086956U;
i32_store(&i->m0,(U64)si0+296U,si1);
si0=l4;
si1=l4;
si2=360U;
si1+=si2;
i32_store(&i->m0,(U64)si0+272U,si1);
si0=l4;
si1=l4;
si2=272U;
si1+=si2;
i32_store(&i->m0,(U64)si0+304U,si1);
si0=l4;
si1=240U;
si0+=si1;
si1=l4;
si2=296U;
si1+=si2;
f64(i,si0,si1);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+364U);
si0=!(si0);
if(si0){
goto L130;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0+360U);
f15024(i,si0);
goto L130;
L131:;
si0=l4;
si1=l5;
i32_store(&i->m0,(U64)si0+360U,si1);
si0=l4;
si1=l5;
si2=l6;
si3=3U;
si2<<=(si3&31);
si1+=si2;
i32_store(&i->m0,(U64)si0+364U,si1);
si0=l4;
si1=l4;
si2=200U;
si1+=si2;
i32_store(&i->m0,(U64)si0+368U,si1);
si0=l4;
si1=272U;
si0+=si1;
si1=l4;
si2=360U;
si1+=si2;
f252(i,si0,si1);
si0=l4;
si1=260U;
si0+=si1;
si1=l4;
si1=i32_load(&i->m0,(U64)si1+272U);
l5=si1;
si2=l4;
si2=i32_load(&i->m0,(U64)si2+280U);
si3=1086504U;
si4=2U;
f437(i,si0,si1,si2,si3,si4);
si0=l4;
si1=308U;
si0+=si1;
sj1=1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=154U;
i32_store(&i->m0,(U64)si0+256U,si1);
si0=l4;
si1=2U;
i32_store(&i->m0,(U64)si0+300U,si1);
si0=l4;
si1=1086956U;
i32_store(&i->m0,(U64)si0+296U,si1);
si0=l4;
si1=l4;
si2=260U;
si1+=si2;
i32_store(&i->m0,(U64)si0+252U,si1);
si0=l4;
si1=l4;
si2=252U;
si1+=si2;
i32_store(&i->m0,(U64)si0+304U,si1);
si0=l4;
si1=240U;
si0+=si1;
si1=l4;
si2=296U;
si1+=si2;
f64(i,si0,si1);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+264U);
si0=!(si0);
if(si0){
goto L132;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0+260U);
f15024(i,si0);
L132:;
si0=l4;
si1=272U;
si0+=si1;
f239(i,si0);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+276U);
si0=!(si0);
if(si0){
goto L130;
}
si0=l5;
f15024(i,si0);
L130:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+212U);
l5=si0;
si1=l4;
si1=i32_load(&i->m0,(U64)si1+208U);
si0=si0 != si1;
if(si0){
goto L133;
}
si0=l4;
si1=204U;
si0+=si1;
si1=l5;
f518(i,si0,si1);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+212U);
l5=si0;
L133:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+204U);
si1=l5;
si2=12U;
si1*=si2;
si0+=si1;
l5=si0;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1+240U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=8U;
si0+=si1;
si1=l4;
si2=240U;
si1+=si2;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=l4;
si1=i32_load(&i->m0,(U64)si1+212U);
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0+212U,si1);
L129:;
si0=l4;
si1=188U;
si0+=si1;
si1=l4;
si1=i32_load(&i->m0,(U64)si1+204U);
si2=l4;
si2=i32_load(&i->m0,(U64)si2+212U);
si3=1086528U;
si4=1U;
f437(i,si0,si1,si2,si3,si4);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+212U);
l6=si0;
si0=!(si0);
if(si0){
goto L134;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0+204U);
l5=si0;
L135:;
{
si0=l5;
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L136;
}
si0=l5;
si0=i32_load(&i->m0,(U64)si0);
f15024(i,si0);
L136:;
si0=l5;
si1=12U;
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
si0=l4;
si0=i32_load(&i->m0,(U64)si0+208U);
si0=!(si0);
if(si0){
goto L137;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0+204U);
f15024(i,si0);
L137:;
si0=l4;
si1=96U;
si0+=si1;
si1=l4;
si1=i32_load(&i->m0,(U64)si1+180U);
si2=l4;
si2=i32_load(&i->m0,(U64)si2+184U);
si2=i32_load(&i->m0,(U64)si2+96U);
TF(i->t0,si2,void (*)(rustpythonInstance*,U32,U32))(i,si0,si1);
si0=0U;
l6=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+96U);
l5=si0;
si1=1085852U;
si2=l5;
si0=si2?si0:si1;
si1=l4;
si1=i32_load(&i->m0,(U64)si1+100U);
si2=0U;
si3=l5;
si1=si3?si1:si2;
si0=f273(i,si0,si1);
l8=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+188U);
l14=si0;
si1=l4;
si1=i32_load(&i->m0,(U64)si1+196U);
si0=f273(i,si0,si1);
l10=si0;
si0=l1;
si0=i32_load8_u(&i->m0,(U64)si0+17U);
si0=!(si0);
if(si0){
goto L139;
}
si0=l1;
si1=12U;
si0+=si1;
l7=si0;
si0=1U;
l5=si0;
goto L138;
L139:;
si0=l1;
si1=12U;
si0+=si1;
l7=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+180U);
si1=7U;
si2=l4;
si2=i32_load(&i->m0,(U64)si2+184U);
si2=i32_load(&i->m0,(U64)si2+40U);
si0=TF(i->t0,si2,U32 (*)(rustpythonInstance*,U32,U32))(i,si0,si1);
l5=si0;
if(si0){
goto L138;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+8U);
l12=si0;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+12U);
si2=12U;
si1+=si2;
l11=si1;
si0=si0 < si1;
if(si0){
goto L138;
}
si0=0U;
l5=si0;
si0=l11;
sf0=(F32)(si0);
si1=l12;
sf1=(F32)(si1);
sf0/=sf1;
sf1=0.400000006;
si0=sf0 > sf1;
if(si0){
goto L140;
}
si0=0U;
l6=si0;
goto L138;
L140:;
si0=l10;
si1=l8;
si0+=si1;
si1=l12;
si2=l11;
si1-=si2;
si0=si0 > si1;
l6=si0;
L138:;
si0=l1;
si1=l6;
i32_store8(&i->m0,(U64)si0+20U,si1);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+180U);
si1=l4;
si1=i32_load(&i->m0,(U64)si1+184U);
si1=i32_load(&i->m0,(U64)si1+48U);
si0=TF(i->t0,si1,U32 (*)(rustpythonInstance*,U32))(i,si0);
l6=si0;
si0=l5;
si1=l1;
si1=i32_load8_u(&i->m0,(U64)si1+20U);
si2=0U;
si1=si1 != si2;
si0|=si1;
l5=si0;
si0=l6;
if(si0){
goto L148;
}
si0=l5;
if(si0){
goto L145;
}
si0=l7;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+180U);
l5=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+184U);
l6=si0;
si0=l4;
si1=0U;
i32_store(&i->m0,(U64)si0+368U,si1);
si0=l4;
sj1=1ULL;
i64_store(&i->m0,(U64)si0+360U,sj1);
si0=l4;
si1=320U;
si0+=si1;
si1=1085664U;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=3U;
i32_store8(&i->m0,(U64)si0+328U,si1);
si0=l4;
si1=32U;
i32_store(&i->m0,(U64)si0+312U,si1);
si0=l4;
si1=0U;
i32_store(&i->m0,(U64)si0+324U,si1);
si0=l4;
si1=0U;
i32_store(&i->m0,(U64)si0+304U,si1);
si0=l4;
si1=0U;
i32_store(&i->m0,(U64)si0+296U,si1);
si0=l4;
si1=l4;
si2=360U;
si1+=si2;
i32_store(&i->m0,(U64)si0+316U,si1);
si0=l5;
si1=l4;
si2=296U;
si1+=si2;
si2=l6;
si2=i32_load(&i->m0,(U64)si2+12U);
si0=TF(i->t0,si2,U32 (*)(rustpythonInstance*,U32,U32))(i,si0,si1);
if(si0){
goto L147;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0+364U);
l6=si0;
si0=l7;
si1=4U;
si0+=si1;
l5=si0;
si1=l4;
si1=i32_load(&i->m0,(U64)si1+360U);
l7=si1;
si2=l4;
si2=i32_load(&i->m0,(U64)si2+368U);
si1=f273(i,si1,si2);
l8=si1;
si0=si0 == si1;
if(si0){
goto L150;
}
si0=l5;
si1=l8;
si0-=si1;
l5=si0;
si1=1U;
si2=l5;
si3=1U;
si2=si2 > si3;
si0=si2?si0:si1;
l5=si0;
L151:;
{
si0=l4;
si1=296U;
si0+=si1;
si1=l1;
si1=i32_load(&i->m0,(U64)si1);
si2=1086528U;
si3=1U;
si4=l1;
si4=i32_load(&i->m0,(U64)si4+4U);
si4=i32_load(&i->m0,(U64)si4+28U);
TF(i->t0,si4,void (*)(rustpythonInstance*,U32,U32,U32,U32))(i,si0,si1,si2,si3);
si0=l4;
sj0=i64_load8_u(&i->m0,(U64)si0+296U);
l16=sj0;
sj1=4ULL;
si0=sj0 != sj1;
if(si0){
goto L149;
}
si0=l5;
si1=-1U;
si0+=si1;
l5=si0;
if(si0){
goto L151;
}
}
L150:;
si0=l6;
si0=!(si0);
if(si0){
goto L145;
}
si0=l7;
f15024(i,si0);
goto L145;
L149:;
si0=l4;
sj0=i64_load32_u(&i->m0,(U64)si0+297U);
si1=l4;
si2=303U;
si1+=si2;
sj1=i64_load8_u(&i->m0,(U64)si1);
sj2=48ULL;
sj1<<=(sj2&63);
si2=l4;
si3=301U;
si2+=si3;
sj2=i64_load16_u(&i->m0,(U64)si2);
sj3=32ULL;
sj2<<=(sj3&63);
sj1|=sj2;
sj0|=sj1;
sj1=8ULL;
sj0<<=(sj1&63);
sj1=l16;
sj0|=sj1;
l16=sj0;
si0=l6;
si0=!(si0);
if(si0){
goto L141;
}
si0=l7;
f15024(i,si0);
goto L141;
L148:;
si0=l5;
si0=!(si0);
if(si0){
goto L146;
}
goto L145;
L147:;
si0=1085688U;
si1=55U;
si2=l4;
si3=272U;
si2+=si3;
si3=1085744U;
si4=1085836U;
f641(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L146:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+180U);
l5=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+184U);
l6=si0;
si0=l4;
si1=0U;
i32_store(&i->m0,(U64)si0+368U,si1);
si0=l4;
sj1=1ULL;
i64_store(&i->m0,(U64)si0+360U,sj1);
si0=l4;
si1=320U;
si0+=si1;
si1=1085664U;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=3U;
i32_store8(&i->m0,(U64)si0+328U,si1);
si0=l4;
si1=32U;
i32_store(&i->m0,(U64)si0+312U,si1);
si0=l4;
si1=0U;
i32_store(&i->m0,(U64)si0+324U,si1);
si0=l4;
si1=0U;
i32_store(&i->m0,(U64)si0+304U,si1);
si0=l4;
si1=0U;
i32_store(&i->m0,(U64)si0+296U,si1);
si0=l4;
si1=l4;
si2=360U;
si1+=si2;
i32_store(&i->m0,(U64)si0+316U,si1);
si0=l5;
si1=l4;
si2=296U;
si1+=si2;
si2=l6;
si2=i32_load(&i->m0,(U64)si2+12U);
si0=TF(i->t0,si2,U32 (*)(rustpythonInstance*,U32,U32))(i,si0,si1);
if(si0){
goto L144;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0+364U);
l5=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+360U);
l8=si0;
si1=l4;
si1=i32_load(&i->m0,(U64)si1+368U);
si0=f273(i,si0,si1);
l6=si0;
si0=l5;
si0=!(si0);
if(si0){
goto L152;
}
si0=l8;
f15024(i,si0);
L152:;
si0=l7;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si0=l4;
si1=88U;
si0+=si1;
si1=l4;
si1=i32_load(&i->m0,(U64)si1+180U);
si2=l4;
si2=i32_load(&i->m0,(U64)si2+184U);
si2=i32_load(&i->m0,(U64)si2+80U);
TF(i->t0,si2,void (*)(rustpythonInstance*,U32,U32))(i,si0,si1);
si0=4U;
si1=8U;
si2=l4;
si2=i32_load(&i->m0,(U64)si2+88U);
si0=si2?si0:si1;
si1=l5;
si2=l6;
si1-=si2;
si0+=si1;
l5=si0;
si0=!(si0);
if(si0){
goto L145;
}
L154:;
{
si0=l4;
si1=296U;
si0+=si1;
si1=l1;
si1=i32_load(&i->m0,(U64)si1);
si2=1086528U;
si3=1U;
si4=l1;
si4=i32_load(&i->m0,(U64)si4+4U);
si4=i32_load(&i->m0,(U64)si4+28U);
TF(i->t0,si4,void (*)(rustpythonInstance*,U32,U32,U32,U32))(i,si0,si1,si2,si3);
si0=l4;
sj0=i64_load8_u(&i->m0,(U64)si0+296U);
l16=sj0;
sj1=4ULL;
si0=sj0 != sj1;
if(si0){
goto L153;
}
si0=l5;
si1=-1U;
si0+=si1;
l5=si0;
if(si0){
goto L154;
}
goto L145;
}
L153:;
si0=l4;
sj0=i64_load32_u(&i->m0,(U64)si0+297U);
si1=l4;
si2=303U;
si1+=si2;
sj1=i64_load8_u(&i->m0,(U64)si1);
sj2=48ULL;
sj1<<=(sj2&63);
si2=l4;
si3=301U;
si2+=si3;
sj2=i64_load16_u(&i->m0,(U64)si2);
sj3=32ULL;
sj2<<=(sj3&63);
sj1|=sj2;
sj0|=sj1;
sj1=8ULL;
sj0<<=(sj1&63);
sj1=l16;
sj0|=sj1;
l16=sj0;
goto L141;
L145:;
si0=l4;
sj0=i64_load(&i->m0,(U64)si0+192U);
l16=sj0;
si0=l1;
si0=i32_load8_u(&i->m0,(U64)si0+21U);
l11=si0;
si0=!(si0);
if(si0){
goto L157;
}
si0=l4;
si1=80U;
si0+=si1;
si1=l2;
si2=l3;
si2=i32_load(&i->m0,(U64)si2+16U);
TF(i->t0,si2,void (*)(rustpythonInstance*,U32,U32))(i,si0,si1);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+84U);
if(si0){
goto L156;
}
L157:;
si0=l4;
si1=56U;
si0+=si1;
si1=l2;
si2=l3;
si2=i32_load(&i->m0,(U64)si2+96U);
TF(i->t0,si2,void (*)(rustpythonInstance*,U32,U32))(i,si0,si1);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+56U);
l8=si0;
si0=!(si0);
if(si0){
goto L155;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0+60U);
l6=si0;
goto L142;
L156:;
si0=l4;
si1=72U;
si0+=si1;
si1=l2;
si2=l3;
si2=i32_load(&i->m0,(U64)si2+100U);
TF(i->t0,si2,void (*)(rustpythonInstance*,U32,U32))(i,si0,si1);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+72U);
l8=si0;
si0=!(si0);
if(si0){
goto L143;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0+76U);
l6=si0;
goto L142;
L155:;
si0=l4;
si1=48U;
si0+=si1;
si1=l2;
si2=l3;
si2=i32_load(&i->m0,(U64)si2+100U);
TF(i->t0,si2,void (*)(rustpythonInstance*,U32,U32))(i,si0,si1);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+52U);
si1=0U;
si2=l4;
si2=i32_load(&i->m0,(U64)si2+48U);
l5=si2;
si0=si2?si0:si1;
l6=si0;
si0=l5;
si1=1085852U;
si2=l5;
si0=si2?si0:si1;
l8=si0;
goto L142;
L144:;
si0=1085688U;
si1=55U;
si2=l4;
si3=272U;
si2+=si3;
si3=1085744U;
si4=1085836U;
f641(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L143:;
si0=l4;
si1=64U;
si0+=si1;
si1=l2;
si2=l3;
si2=i32_load(&i->m0,(U64)si2+96U);
TF(i->t0,si2,void (*)(rustpythonInstance*,U32,U32))(i,si0,si1);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+68U);
si1=0U;
si2=l4;
si2=i32_load(&i->m0,(U64)si2+64U);
l5=si2;
si0=si2?si0:si1;
l6=si0;
si0=l5;
si1=1085852U;
si2=l5;
si0=si2?si0:si1;
l8=si0;
L142:;
si0=l6;
if(si0){
goto L164;
}
si0=1U;
l12=si0;
goto L163;
L164:;
si0=l6;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L162;
}
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=l6;
si0=f15022(i,si0);
l12=si0;
si0=!(si0);
if(si0){
goto L161;
}
L163:;
si0=l12;
si1=l8;
si2=l6;
si0=f15143(i,si0,si1,si2);
l5=si0;
si0=l4;
si1=l6;
i32_store(&i->m0,(U64)si0+304U,si1);
si0=l4;
si1=l6;
i32_store(&i->m0,(U64)si0+300U,si1);
si0=l4;
si1=l5;
i32_store(&i->m0,(U64)si0+296U,si1);
si0=l6;
l10=si0;
sj0=l16;
sj1=32ULL;
sj0>>=(sj1&63);
si0=(U32)(sj0);
l7=si0;
si0=!(si0);
if(si0){
goto L165;
}
si0=l4;
si1=296U;
si0+=si1;
si1=l6;
si2=l7;
f530(i,si0,si1,si2);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+296U);
l12=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+304U);
l10=si0;
L165:;
si0=l12;
si1=l10;
si0+=si1;
si1=l14;
si2=l7;
si0=f15143(i,si0,si1,si2);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+300U);
l13=si0;
si0=1U;
l5=si0;
si0=l1;
si0=i32_load8_u(&i->m0,(U64)si0+17U);
if(si0){
goto L166;
}
si0=l2;
si1=7U;
si2=l3;
si2=i32_load(&i->m0,(U64)si2+40U);
si0=TF(i->t0,si2,U32 (*)(rustpythonInstance*,U32,U32))(i,si0,si1);
l5=si0;
si0=l11;
si0=!(si0);
if(si0){
goto L166;
}
si0=l5;
if(si0){
goto L166;
}
si0=l4;
si1=40U;
si0+=si1;
si1=l2;
si2=l3;
si2=i32_load(&i->m0,(U64)si2+16U);
TF(i->t0,si2,void (*)(rustpythonInstance*,U32,U32))(i,si0,si1);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+44U);
si1=0U;
si0=si0 != si1;
l5=si0;
L166:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+12U);
l19=si0;
si0=l1;
si0=i32_load8_u(&i->m0,(U64)si0+20U);
l3=si0;
si0=l8;
si1=l6;
si0=f273(i,si0,si1);
l20=si0;
si0=l14;
si1=l7;
si0=f273(i,si0,si1);
l21=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+8U);
l18=si0;
si0=l5;
si1=l3;
si2=0U;
si1=si1 != si2;
si0|=si1;
l11=si0;
si0=!(si0);
if(si0){
goto L160;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
l3=si0;
si0=l4;
si1=360U;
si0+=si1;
si1=12U;
si0+=si1;
sj1=3ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=316U;
si0+=si1;
si1=50U;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=296U;
si0+=si1;
si1=12U;
si0+=si1;
si1=50U;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=3U;
i32_store(&i->m0,(U64)si0+364U,si1);
si0=l4;
si1=1086784U;
i32_store(&i->m0,(U64)si0+360U,si1);
si0=l4;
si1=1086484U;
i32_store(&i->m0,(U64)si0+312U,si1);
si0=l4;
si1=1086484U;
i32_store(&i->m0,(U64)si0+304U,si1);
si0=l4;
si1=50U;
i32_store(&i->m0,(U64)si0+300U,si1);
si0=l4;
si1=1086484U;
i32_store(&i->m0,(U64)si0+296U,si1);
si0=l4;
si1=l4;
si2=296U;
si1+=si2;
i32_store(&i->m0,(U64)si0+368U,si1);
si0=l4;
si1=272U;
si0+=si1;
si1=l5;
si2=l4;
si3=360U;
si2+=si3;
si3=l3;
si3=i32_load(&i->m0,(U64)si3+36U);
TF(i->t0,si3,void (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
si0=l4;
si0=i32_load8_u(&i->m0,(U64)si0+272U);
l5=si0;
si1=4U;
si0=si0 == si1;
if(si0){
goto L160;
}
si0=l4;
si1=l4;
si1=i32_load(&i->m0,(U64)si1+273U);
i32_store(&i->m0,(U64)si0+228U,si1);
si0=l4;
si1=l4;
si2=272U;
si1+=si2;
si2=4U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0+231U,si1);
goto L159;
L162:;
f53(i);
UNREACHABLE;
L161:;
si0=1U;
si1=l6;
f52(i,si0,si1);
UNREACHABLE;
L160:;
si0=l10;
si1=l7;
si0+=si1;
l3=si0;
si0=12U;
si1=l19;
si2=12U;
si1+=si2;
l22=si1;
si2=l11;
si0=si2?si0:si1;
l23=si0;
si1=l20;
si0+=si1;
si1=l21;
si0+=si1;
si1=l18;
si0=si0 < si1;
if(si0){
goto L169;
}
si0=l18;
si1=l23;
si0=si0 >= si1;
if(si0){
goto L168;
}
L169:;
si0=l6;
si1=4U;
si0=si0 < si1;
if(si0){
goto L170;
}
si0=l4;
si1=296U;
si0+=si1;
si1=l8;
si2=l6;
si3=1086780U;
si4=3U;
f690(i,si0,si1,si2,si3,si4);
si0=l4;
si1=360U;
si0+=si1;
si1=l4;
si2=296U;
si1+=si2;
f272(i,si0,si1);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+360U);
if(si0){
goto L168;
}
goto L167;
L170:;
si0=l6;
si1=3U;
si0=si0 != si1;
if(si0){
goto L167;
}
si0=1086780U;
si1=l8;
si2=3U;
si0=f15142(i,si0,si1,si2);
if(si0){
goto L167;
}
L168:;
si0=0U;
l6=si0;
si0=l4;
si1=0U;
i32_store(&i->m0,(U64)si0+280U,si1);
si0=l4;
sj1=1ULL;
i64_store(&i->m0,(U64)si0+272U,sj1);
si0=l4;
si1=296U;
si0+=si1;
si1=l12;
si2=l3;
si3=1086780U;
si4=3U;
f690(i,si0,si1,si2,si3,si4);
si0=l4;
si1=360U;
si0+=si1;
si1=l4;
si2=296U;
si1+=si2;
f272(i,si0,si1);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+360U);
if(si0){
goto L172;
}
si0=1U;
l8=si0;
si0=0U;
l5=si0;
si0=0U;
l10=si0;
goto L171;
L172:;
si0=0U;
l5=si0;
si0=1U;
l8=si0;
si0=0U;
l7=si0;
L173:;
{
si0=l4;
si0=i32_load(&i->m0,(U64)si0+368U);
l10=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+276U);
si1=l5;
si0-=si1;
si1=l4;
si1=i32_load(&i->m0,(U64)si1+364U);
si2=l7;
si1-=si2;
l6=si1;
si0=si0 >= si1;
if(si0){
goto L174;
}
si0=l4;
si1=272U;
si0+=si1;
si1=l5;
si2=l6;
f530(i,si0,si1,si2);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+272U);
l8=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+280U);
l5=si0;
L174:;
si0=l8;
si1=l5;
si0+=si1;
si1=l12;
si2=l7;
si1+=si2;
si2=l6;
si0=f15143(i,si0,si1,si2);
si0=l4;
si1=l5;
si2=l6;
si1+=si2;
l5=si1;
i32_store(&i->m0,(U64)si0+280U,si1);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+276U);
si1=l5;
si0=si0 != si1;
if(si0){
goto L175;
}
si0=l4;
si1=272U;
si0+=si1;
si1=l5;
si2=1U;
f530(i,si0,si1,si2);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+280U);
l5=si0;
L175:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+272U);
l8=si0;
si1=l5;
si0+=si1;
si1=10U;
i32_store8(&i->m0,(U64)si0,si1);
si0=l4;
si1=l5;
si2=1U;
si1+=si2;
l5=si1;
i32_store(&i->m0,(U64)si0+280U,si1);
si0=l4;
si1=360U;
si0+=si1;
si1=l4;
si2=296U;
si1+=si2;
f272(i,si0,si1);
si0=l10;
l7=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+360U);
if(si0){
goto L173;
}
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0+276U);
l6=si0;
L171:;
si0=l12;
si1=l10;
si0+=si1;
l7=si0;
si0=l18;
si1=l23;
si0-=si1;
l18=si0;
si0=l6;
si1=l5;
si0-=si1;
si1=l3;
si2=l10;
si1-=si2;
l6=si1;
si0=si0 >= si1;
if(si0){
goto L176;
}
si0=l4;
si1=272U;
si0+=si1;
si1=l5;
si2=l6;
f530(i,si0,si1,si2);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+272U);
l8=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+280U);
l5=si0;
L176:;
si0=l8;
si1=l5;
si0+=si1;
si1=l7;
si2=l6;
si0=f15143(i,si0,si1,si2);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+276U);
l10=si0;
si0=l4;
si1=360U;
si0+=si1;
si1=12U;
si0+=si1;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=0U;
i32_store8(&i->m0,(U64)si0+380U,si1);
si0=l4;
si1=17684584U;
i32_store(&i->m0,(U64)si0+368U,si1);
si0=l4;
si1=0U;
i32_store(&i->m0,(U64)si0+364U,si1);
si0=l4;
si1=17684584U;
i32_store(&i->m0,(U64)si0+360U,si1);
si0=l4;
si1=l18;
i32_store(&i->m0,(U64)si0+376U,si1);
si0=l4;
si1=0U;
i32_store16(&i->m0,(U64)si0+332U,si1);
si0=l4;
si1=l5;
si2=l6;
si1+=si2;
l5=si1;
i32_store(&i->m0,(U64)si0+328U,si1);
si0=l4;
si1=0U;
i32_store(&i->m0,(U64)si0+324U,si1);
si0=l4;
sj1=42949672961ULL;
i64_store(&i->m0,(U64)si0+316U,sj1);
si0=l4;
si1=l5;
i32_store(&i->m0,(U64)si0+312U,si1);
si0=l4;
si1=0U;
i32_store(&i->m0,(U64)si0+308U,si1);
si0=l4;
si1=l5;
i32_store(&i->m0,(U64)si0+304U,si1);
si0=l4;
si1=l8;
i32_store(&i->m0,(U64)si0+300U,si1);
si0=l4;
si1=10U;
i32_store(&i->m0,(U64)si0+296U,si1);
si0=l4;
si1=l4;
si2=360U;
si1+=si2;
i32_store(&i->m0,(U64)si0+336U,si1);
si0=l4;
si1=272U;
si0+=si1;
si1=l4;
si2=296U;
si1+=si2;
f246(i,si0,si1);
si0=l4;
si1=260U;
si0+=si1;
si1=l4;
si1=i32_load(&i->m0,(U64)si1+272U);
l7=si1;
si2=l4;
si2=i32_load(&i->m0,(U64)si2+280U);
l6=si2;
si3=1086476U;
si4=1U;
f437(i,si0,si1,si2,si3,si4);
si0=l6;
si0=!(si0);
if(si0){
goto L177;
}
si0=l7;
l5=si0;
L178:;
{
si0=l5;
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L179;
}
si0=l5;
si0=i32_load(&i->m0,(U64)si0);
f15024(i,si0);
L179:;
si0=l5;
si1=12U;
si0+=si1;
l5=si0;
si0=l6;
si1=-1U;
si0+=si1;
l6=si0;
if(si0){
goto L178;
}
}
L177:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+276U);
si0=!(si0);
if(si0){
goto L180;
}
si0=l7;
f15024(i,si0);
L180:;
si0=l13;
si0=!(si0);
if(si0){
goto L181;
}
si0=l12;
f15024(i,si0);
L181:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+268U);
l3=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+264U);
l13=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+260U);
l12=si0;
si0=l10;
si0=!(si0);
if(si0){
goto L167;
}
si0=l8;
f15024(i,si0);
L167:;
si0=l4;
si1=0U;
i32_store16(&i->m0,(U64)si0+332U,si1);
si0=l4;
si1=l3;
i32_store(&i->m0,(U64)si0+328U,si1);
si0=l4;
si1=0U;
i32_store(&i->m0,(U64)si0+324U,si1);
si0=l4;
sj1=42949672961ULL;
i64_store(&i->m0,(U64)si0+316U,sj1);
si0=l4;
si1=l3;
i32_store(&i->m0,(U64)si0+312U,si1);
si0=l4;
si1=0U;
i32_store(&i->m0,(U64)si0+308U,si1);
si0=l4;
si1=l3;
i32_store(&i->m0,(U64)si0+304U,si1);
si0=l4;
si1=l12;
i32_store(&i->m0,(U64)si0+300U,si1);
si0=l4;
si1=10U;
i32_store(&i->m0,(U64)si0+296U,si1);
si0=l4;
si1=32U;
si0+=si1;
si1=l4;
si2=296U;
si1+=si2;
f258(i,si0,si1);
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+32U);
l5=si0;
if(si0){
goto L183;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
l10=si0;
goto L182;
L183:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+36U);
l7=si0;
si0=l4;
si1=l5;
i32_store(&i->m0,(U64)si0+240U,si1);
si0=l4;
si1=l7;
i32_store(&i->m0,(U64)si0+244U,si1);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
l10=si0;
si0=l4;
si1=372U;
si0+=si1;
sj1=1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=1U;
i32_store(&i->m0,(U64)si0+364U,si1);
si0=l4;
si1=1086468U;
i32_store(&i->m0,(U64)si0+360U,si1);
si0=l4;
si1=50U;
i32_store(&i->m0,(U64)si0+276U,si1);
si0=l4;
si1=l4;
si2=272U;
si1+=si2;
i32_store(&i->m0,(U64)si0+368U,si1);
si0=l4;
si1=l4;
si2=240U;
si1+=si2;
i32_store(&i->m0,(U64)si0+272U,si1);
si0=l4;
si1=260U;
si0+=si1;
si1=l6;
si2=l4;
si3=360U;
si2+=si3;
si3=l10;
si3=i32_load(&i->m0,(U64)si3+36U);
TF(i->t0,si3,void (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
si0=l4;
si0=i32_load8_u(&i->m0,(U64)si0+260U);
l5=si0;
si1=4U;
si0=si0 == si1;
if(si0){
goto L182;
}
si0=l4;
si1=l4;
si1=i32_load(&i->m0,(U64)si1+261U);
i32_store(&i->m0,(U64)si0+228U,si1);
si0=l4;
si1=l4;
si2=260U;
si1+=si2;
si2=4U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0+231U,si1);
goto L159;
L182:;
si0=l4;
si1=1U;
i32_store(&i->m0,(U64)si0+336U,si1);
si0=l4;
si1=0U;
i32_store16(&i->m0,(U64)si0+332U,si1);
si0=l4;
si1=l3;
i32_store(&i->m0,(U64)si0+328U,si1);
si0=l4;
si1=0U;
i32_store(&i->m0,(U64)si0+324U,si1);
si0=l4;
sj1=42949672961ULL;
i64_store(&i->m0,(U64)si0+316U,sj1);
si0=l4;
si1=l3;
i32_store(&i->m0,(U64)si0+312U,si1);
si0=l4;
si1=0U;
i32_store(&i->m0,(U64)si0+308U,si1);
si0=l4;
si1=l3;
i32_store(&i->m0,(U64)si0+304U,si1);
si0=l4;
si1=l12;
i32_store(&i->m0,(U64)si0+300U,si1);
si0=l4;
si1=10U;
i32_store(&i->m0,(U64)si0+296U,si1);
si0=l19;
si1=8U;
si0+=si1;
l18=si0;
si0=1U;
l5=si0;
L186:;
{
si0=l5;
if(si0){
goto L188;
}
si0=l4;
si1=8U;
si0+=si1;
si1=l4;
si2=296U;
si1+=si2;
f258(i,si0,si1);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+12U);
l1=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+8U);
l5=si0;
goto L187;
L188:;
si0=l4;
si1=0U;
i32_store(&i->m0,(U64)si0+336U,si1);
si0=l5;
si1=1U;
si0+=si1;
l5=si0;
L190:;
{
si0=l5;
si1=-1U;
si0+=si1;
l5=si0;
si0=!(si0);
if(si0){
goto L189;
}
si0=l4;
si1=24U;
si0+=si1;
si1=l4;
si2=296U;
si1+=si2;
f258(i,si0,si1);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+24U);
if(si0){
goto L190;
}
}
si0=0U;
l5=si0;
goto L187;
L189:;
si0=l4;
si1=16U;
si0+=si1;
si1=l4;
si2=296U;
si1+=si2;
f258(i,si0,si1);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+20U);
l1=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+16U);
l5=si0;
L187:;
si0=l5;
if(si0){
goto L194;
}
si0=l3;
si1=7U;
si0=si0 > si1;
if(si0){
goto L193;
}
si0=l3;
si0=!(si0);
if(si0){
goto L195;
}
si0=l12;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=10U;
si0=si0 == si1;
if(si0){
goto L184;
}
si0=l3;
si1=1U;
si0=si0 == si1;
if(si0){
goto L195;
}
si0=l12;
si0=i32_load8_u(&i->m0,(U64)si0+1U);
si1=10U;
si0=si0 == si1;
if(si0){
goto L184;
}
si0=l3;
si1=2U;
si0=si0 == si1;
if(si0){
goto L195;
}
si0=l12;
si0=i32_load8_u(&i->m0,(U64)si0+2U);
si1=10U;
si0=si0 == si1;
if(si0){
goto L184;
}
si0=l3;
si1=3U;
si0=si0 == si1;
if(si0){
goto L195;
}
si0=l12;
si0=i32_load8_u(&i->m0,(U64)si0+3U);
si1=10U;
si0=si0 == si1;
if(si0){
goto L184;
}
si0=l3;
si1=4U;
si0=si0 == si1;
if(si0){
goto L195;
}
si0=l12;
si0=i32_load8_u(&i->m0,(U64)si0+4U);
si1=10U;
si0=si0 == si1;
if(si0){
goto L184;
}
si0=l3;
si1=5U;
si0=si0 == si1;
if(si0){
goto L195;
}
si0=l12;
si0=i32_load8_u(&i->m0,(U64)si0+5U);
si1=10U;
si0=si0 == si1;
if(si0){
goto L184;
}
si0=l3;
si1=6U;
si0=si0 == si1;
if(si0){
goto L195;
}
si0=l12;
si0=i32_load8_u(&i->m0,(U64)si0+6U);
si1=10U;
si0=si0 == si1;
if(si0){
goto L184;
}
si0=l11;
si1=1U;
si0^=si1;
si0=!(si0);
if(si0){
goto L185;
}
goto L184;
L195:;
si0=l11;
si0=!(si0);
if(si0){
goto L184;
}
goto L185;
L194:;
si0=l4;
si1=l5;
i32_store(&i->m0,(U64)si0+240U,si1);
si0=l4;
si1=l1;
i32_store(&i->m0,(U64)si0+244U,si1);
si0=l4;
si1=1U;
i32_store(&i->m0,(U64)si0+364U,si1);
si0=l4;
si1=1086808U;
i32_store(&i->m0,(U64)si0+360U,si1);
si0=l4;
sj1=0ULL;
i64_store(&i->m0,(U64)si0+372U,sj1);
si0=l4;
si1=1085852U;
i32_store(&i->m0,(U64)si0+368U,si1);
si0=l4;
si1=272U;
si0+=si1;
si1=l6;
si2=l4;
si3=360U;
si2+=si3;
si3=l10;
si3=i32_load(&i->m0,(U64)si3+36U);
l8=si3;
TF(i->t0,si3,void (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
si0=l4;
si0=i32_load8_u(&i->m0,(U64)si0+272U);
l5=si0;
si1=4U;
si0=si0 == si1;
if(si0){
goto L196;
}
si0=l4;
si1=l4;
si1=i32_load(&i->m0,(U64)si1+273U);
i32_store(&i->m0,(U64)si0+228U,si1);
si0=l4;
si1=l4;
si2=276U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0+231U,si1);
goto L159;
L196:;
si0=l11;
if(si0){
goto L197;
}
si0=l2;
si1=l9;
si0=TF(i->t0,si1,U32 (*)(rustpythonInstance*,U32))(i,si0);
if(si0){
goto L198;
}
si0=l18;
si0=!(si0);
if(si0){
goto L191;
}
si0=l10;
si0=i32_load(&i->m0,(U64)si0+28U);
l7=si0;
si0=l18;
l1=si0;
L199:;
{
si0=l4;
si1=360U;
si0+=si1;
si1=l6;
si2=1086528U;
si3=1U;
si4=l7;
TF(i->t0,si4,void (*)(rustpythonInstance*,U32,U32,U32,U32))(i,si0,si1,si2,si3);
si0=l4;
si0=i32_load8_u(&i->m0,(U64)si0+360U);
l5=si0;
si1=4U;
si0=si0 != si1;
if(si0){
goto L192;
}
si0=l1;
si1=-1U;
si0+=si1;
l1=si0;
if(si0){
goto L199;
}
goto L191;
}
L198:;
si0=l22;
si0=!(si0);
if(si0){
goto L191;
}
si0=l10;
si0=i32_load(&i->m0,(U64)si0+28U);
l7=si0;
si0=l22;
l1=si0;
L201:;
{
si0=l4;
si1=360U;
si0+=si1;
si1=l6;
si2=1086528U;
si3=1U;
si4=l7;
TF(i->t0,si4,void (*)(rustpythonInstance*,U32,U32,U32,U32))(i,si0,si1,si2,si3);
si0=l4;
si0=i32_load8_u(&i->m0,(U64)si0+360U);
l5=si0;
si1=4U;
si0=si0 != si1;
if(si0){
goto L200;
}
si0=l1;
si1=-1U;
si0+=si1;
l1=si0;
if(si0){
goto L201;
}
goto L191;
}
L200:;
si0=l4;
si1=l4;
si1=i32_load(&i->m0,(U64)si1+361U);
i32_store(&i->m0,(U64)si0+228U,si1);
si0=l4;
si1=l4;
si2=364U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0+231U,si1);
goto L159;
L197:;
si0=l4;
si1=3U;
i32_store(&i->m0,(U64)si0+276U,si1);
si0=l4;
si1=1086816U;
i32_store(&i->m0,(U64)si0+272U,si1);
si0=l4;
sj1=3ULL;
i64_store(&i->m0,(U64)si0+284U,sj1);
si0=l4;
si1=50U;
i32_store(&i->m0,(U64)si0+380U,si1);
si0=l4;
si1=1086484U;
i32_store(&i->m0,(U64)si0+376U,si1);
si0=l4;
si1=50U;
i32_store(&i->m0,(U64)si0+372U,si1);
si0=l4;
si1=1086484U;
i32_store(&i->m0,(U64)si0+368U,si1);
si0=l4;
si1=50U;
i32_store(&i->m0,(U64)si0+364U,si1);
si0=l4;
si1=1086484U;
i32_store(&i->m0,(U64)si0+360U,si1);
si0=l4;
si1=l4;
si2=360U;
si1+=si2;
i32_store(&i->m0,(U64)si0+280U,si1);
si0=l4;
si1=260U;
si0+=si1;
si1=l6;
si2=l4;
si3=272U;
si2+=si3;
si3=l8;
TF(i->t0,si3,void (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
si0=l4;
si0=i32_load8_u(&i->m0,(U64)si0+260U);
l5=si0;
si1=4U;
si0=si0 == si1;
if(si0){
goto L191;
}
si0=l4;
si1=l4;
si1=i32_load(&i->m0,(U64)si1+261U);
i32_store(&i->m0,(U64)si0+228U,si1);
si0=l4;
si1=l4;
si2=264U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0+231U,si1);
goto L159;
L193:;
si0=l4;
si1=10U;
si2=l12;
si3=l3;
f681(i,si0,si1,si2,si3);
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
si1=1U;
si0=si0 != si1;
si1=l11;
si0&=si1;
if(si0){
goto L185;
}
goto L184;
L192:;
si0=l4;
si1=l4;
si1=i32_load(&i->m0,(U64)si1+361U);
i32_store(&i->m0,(U64)si0+228U,si1);
si0=l4;
si1=l4;
si2=364U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0+231U,si1);
goto L159;
L191:;
si0=l4;
si1=1U;
i32_store(&i->m0,(U64)si0+364U,si1);
si0=l4;
si1=1086468U;
i32_store(&i->m0,(U64)si0+360U,si1);
si0=l4;
sj1=1ULL;
i64_store(&i->m0,(U64)si0+372U,sj1);
si0=l4;
si1=50U;
i32_store(&i->m0,(U64)si0+276U,si1);
si0=l4;
si1=l4;
si2=272U;
si1+=si2;
i32_store(&i->m0,(U64)si0+368U,si1);
si0=l4;
si1=l4;
si2=240U;
si1+=si2;
i32_store(&i->m0,(U64)si0+272U,si1);
si0=l4;
si1=260U;
si0+=si1;
si1=l6;
si2=l4;
si3=360U;
si2+=si3;
si3=l8;
TF(i->t0,si3,void (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
si0=l4;
si0=i32_load8_u(&i->m0,(U64)si0+260U);
l5=si0;
si1=4U;
si0=si0 != si1;
if(si0){
goto L202;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0+336U);
l5=si0;
goto L186;
L202:;
}
si0=l4;
si1=l4;
si1=i32_load(&i->m0,(U64)si1+261U);
i32_store(&i->m0,(U64)si0+228U,si1);
si0=l4;
si1=l4;
si2=264U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0+231U,si1);
goto L159;
L185:;
si0=l4;
si1=308U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=1U;
i32_store(&i->m0,(U64)si0+300U,si1);
si0=l4;
si1=1086808U;
i32_store(&i->m0,(U64)si0+296U,si1);
si0=l4;
si1=1085852U;
i32_store(&i->m0,(U64)si0+304U,si1);
si0=l4;
si1=360U;
si0+=si1;
si1=l6;
si2=l4;
si3=296U;
si2+=si3;
si3=l10;
si3=i32_load(&i->m0,(U64)si3+36U);
TF(i->t0,si3,void (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
si0=l4;
si0=i32_load8_u(&i->m0,(U64)si0+360U);
l5=si0;
si1=4U;
si0=si0 == si1;
if(si0){
goto L184;
}
si0=l4;
si1=l4;
si1=i32_load(&i->m0,(U64)si1+361U);
i32_store(&i->m0,(U64)si0+228U,si1);
si0=l4;
si1=l4;
si2=360U;
si1+=si2;
si2=4U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0+231U,si1);
goto L159;
L184:;
si0=l13;
si0=!(si0);
if(si0){
goto L203;
}
si0=l12;
f15024(i,si0);
L203:;
si0=l0;
si1=4U;
i32_store8(&i->m0,(U64)si0,si1);
sj0=l16;
si0=(U32)(sj0);
if(si0){
goto L158;
}
goto L1;
L159:;
si0=l13;
si0=!(si0);
if(si0){
goto L204;
}
si0=l12;
f15024(i,si0);
L204:;
si0=l0;
si1=l4;
si1=i32_load(&i->m0,(U64)si1+228U);
i32_store(&i->m0,(U64)si0+1U,si1);
si0=l0;
si1=4U;
si0+=si1;
si1=l4;
si1=i32_load(&i->m0,(U64)si1+231U);
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l5;
i32_store8(&i->m0,(U64)si0,si1);
sj0=l16;
si0=(U32)(sj0);
si0=!(si0);
if(si0){
goto L1;
}
L158:;
si0=l14;
f15024(i,si0);
goto L1;
L141:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+192U);
si0=!(si0);
if(si0){
goto L205;
}
si0=l14;
f15024(i,si0);
L205:;
si0=l0;
sj1=l16;
i64_store(&i->m0,(U64)si0,sj1);
L1:;
si0=l4;
si1=384U;
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
U32 l13=0;
U32 si0,si1,si2,si3,si4;
U64 sj1;
si0=i->g0;
si1=656U;
si0-=si1;
l4=si0;
i->g0=si0;
si0=l1;
si1=2U;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l4;
sj1=4ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
sj1=0ULL;
i64_store(&i->m0,(U64)si0+8U,sj1);
si0=l2;
si1=l3;
si2=312U;
si1*=si2;
si0+=si1;
l5=si0;
si0=2U;
l6=si0;
L6:;
{
si0=l2;
si1=-312U;
si0+=si1;
l2=si0;
L11:;
{
si0=l2;
si1=312U;
si0+=si1;
l3=si0;
si1=l5;
si0=si0 == si1;
if(si0){
goto L10;
}
si0=l2;
si1=329U;
si0+=si1;
l7=si0;
si0=l3;
l2=si0;
si0=l7;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=16U;
si0&=si1;
if(si0){
goto L11;
}
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0+8U);
si1=l3;
si2=192U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
l2=si1;
si0=si0 <= si1;
if(si0){
goto L13;
}
si0=1U;
l7=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
si1=l2;
si2=4U;
si1<<=(si2&31);
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L12;
}
L13:;
si0=0U;
l7=si0;
L12:;
si0=l4;
si1=l2;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l4;
si1=l7;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l4;
si1=l4;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l4;
si1=0U;
i32_store(&i->m0,(U64)si0+352U,si1);
si0=l4;
si1=0U;
i32_store(&i->m0,(U64)si0+344U,si1);
si0=l4;
si1=16U;
si0+=si1;
si1=l4;
si2=344U;
si1+=si2;
si0=f350(i,si0,si1);
l8=si0;
si0=l1;
si1=l6;
si2=l3;
si3=72U;
si2+=si3;
l2=si2;
si2=i32_load(&i->m0,(U64)si2);
si3=l3;
si4=80U;
si3+=si4;
l7=si3;
si3=i32_load(&i->m0,(U64)si3);
si2=f273(i,si2,si3);
l9=si2;
si3=l6;
si4=l9;
si3=si3 > si4;
si1=si3?si1:si2;
l6=si1;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l2;
si0=i32_load(&i->m0,(U64)si0);
l9=si0;
si0=l7;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
if(si0){
goto L9;
}
si0=1U;
l7=si0;
goto L8;
L10:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+8U);
l6=si0;
if(si0){
goto L7;
}
si0=l0;
si1=4U;
i32_store8(&i->m0,(U64)si0,si1);
goto L2;
L9:;
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
l7=si0;
si0=!(si0);
if(si0){
goto L5;
}
L8:;
si0=l7;
si1=l9;
si2=l2;
si0=f15143(i,si0,si1,si2);
l7=si0;
si0=l4;
si1=l2;
i32_store(&i->m0,(U64)si0+340U,si1);
si0=l4;
si1=l2;
i32_store(&i->m0,(U64)si0+336U,si1);
si0=l4;
si1=l7;
i32_store(&i->m0,(U64)si0+332U,si1);
si0=l4;
si1=344U;
si0+=si1;
si1=l3;
f360(i,si0,si1);
si0=l4;
si1=16U;
si0+=si1;
si1=l8;
si2=l4;
si3=332U;
si2+=si3;
si3=l4;
si4=344U;
si3+=si4;
f450(i,si0,si1,si2,si3);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+72U);
si1=2U;
si0=si0 == si1;
if(si0){
goto L14;
}
si0=l4;
si1=16U;
si0+=si1;
f260(i,si0);
L14:;
si0=l3;
si1=312U;
si0+=si1;
l2=si0;
goto L6;
L7:;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si1=l6;
si2=4U;
si1<<=(si2&31);
si0+=si1;
l7=si0;
si0=1U;
l10=si0;
si0=0U;
l5=si0;
L15:;
{
si0=l3;
l2=si0;
L17:;
{
si0=l7;
l3=si0;
si0=l2;
si1=l7;
si0=si0 == si1;
if(si0){
goto L18;
}
si0=l2;
si1=16U;
si0+=si1;
l3=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L16;
}
L18:;
si0=l3;
l2=si0;
si0=l6;
si1=l5;
si2=1U;
si1+=si2;
l5=si1;
si0=si0 != si1;
if(si0){
goto L17;
}
goto L3;
}
L16:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+4U);
l9=si0;
if(si0){
goto L20;
}
si0=0U;
l2=si0;
si0=0U;
l11=si0;
goto L19;
L20:;
si0=l2;
si1=12U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l11=si0;
si0=l2;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l8=si0;
si0=1U;
l2=si0;
si0=l9;
l12=si0;
si0=l9;
l13=si0;
L19:;
si0=l4;
si1=l11;
i32_store(&i->m0,(U64)si0+376U,si1);
si0=l4;
si1=l8;
i32_store(&i->m0,(U64)si0+372U,si1);
si0=l4;
si1=l13;
i32_store(&i->m0,(U64)si0+368U,si1);
si0=l4;
si1=0U;
i32_store(&i->m0,(U64)si0+364U,si1);
si0=l4;
si1=l2;
i32_store(&i->m0,(U64)si0+360U,si1);
si0=l4;
si1=l8;
i32_store(&i->m0,(U64)si0+356U,si1);
si0=l4;
si1=l12;
i32_store(&i->m0,(U64)si0+352U,si1);
si0=l4;
si1=0U;
i32_store(&i->m0,(U64)si0+348U,si1);
si0=l4;
si1=l2;
i32_store(&i->m0,(U64)si0+344U,si1);
si0=l4;
si1=344U;
si0+=si1;
si0=f444(i,si0);
l9=si0;
si0=!(si0);
if(si0){
goto L21;
}
si0=l10;
si1=1U;
si0&=si1;
if(si0){
goto L24;
}
si0=l4;
si1=16U;
si0+=si1;
si1=l1;
si1=i32_load(&i->m0,(U64)si1);
si2=1086476U;
si3=1U;
si4=l1;
si4=i32_load(&i->m0,(U64)si4+4U);
si4=i32_load(&i->m0,(U64)si4+28U);
TF(i->t0,si4,void (*)(rustpythonInstance*,U32,U32,U32,U32))(i,si0,si1,si2,si3);
si0=l4;
si0=i32_load8_u(&i->m0,(U64)si0+16U);
l2=si0;
si1=4U;
si0=si0 != si1;
if(si0){
goto L23;
}
L24:;
si0=l4;
si1=16U;
si0+=si1;
si1=l1;
si2=l9;
si3=1087048U;
f280(i,si0,si1,si2,si3);
si0=l4;
si0=i32_load8_u(&i->m0,(U64)si0+16U);
l2=si0;
si1=4U;
si0=si0 != si1;
if(si0){
goto L25;
}
si0=0U;
l10=si0;
si0=l4;
si1=344U;
si0+=si1;
si0=f444(i,si0);
l9=si0;
si0=!(si0);
if(si0){
goto L21;
}
L26:;
{
si0=l4;
si1=16U;
si0+=si1;
si1=l1;
si1=i32_load(&i->m0,(U64)si1);
si2=1086476U;
si3=1U;
si4=l1;
si4=i32_load(&i->m0,(U64)si4+4U);
si4=i32_load(&i->m0,(U64)si4+28U);
TF(i->t0,si4,void (*)(rustpythonInstance*,U32,U32,U32,U32))(i,si0,si1,si2,si3);
si0=l4;
si0=i32_load8_u(&i->m0,(U64)si0+16U);
l2=si0;
si1=4U;
si0=si0 != si1;
if(si0){
goto L23;
}
si0=l4;
si1=16U;
si0+=si1;
si1=l1;
si2=l9;
si3=1087048U;
f280(i,si0,si1,si2,si3);
si0=l4;
si0=i32_load8_u(&i->m0,(U64)si0+16U);
l2=si0;
si1=4U;
si0=si0 != si1;
if(si0){
goto L25;
}
si0=l4;
si1=344U;
si0+=si1;
si0=f444(i,si0);
l9=si0;
si0=!(si0);
if(si0){
goto L21;
}
goto L26;
}
L25:;
si0=l0;
si1=l4;
si1=i32_load(&i->m0,(U64)si1+17U);
i32_store(&i->m0,(U64)si0+1U,si1);
si0=l0;
si1=4U;
si0+=si1;
si1=l4;
si2=16U;
si1+=si2;
si2=4U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
goto L22;
L23:;
si0=l0;
si1=l4;
si1=i32_load(&i->m0,(U64)si1+17U);
i32_store(&i->m0,(U64)si0+1U,si1);
si0=l0;
si1=4U;
si0+=si1;
si1=l4;
si2=16U;
si1+=si2;
si2=4U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
L22:;
si0=l0;
si1=l2;
i32_store8(&i->m0,(U64)si0,si1);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+8U);
l3=si0;
si0=!(si0);
if(si0){
goto L27;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
L28:;
{
si0=l2;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L29;
}
si0=l2;
si1=4U;
si0+=si1;
f454(i,si0);
L29:;
si0=l2;
si1=16U;
si0+=si1;
l2=si0;
si0=l3;
si1=-1U;
si0+=si1;
l3=si0;
if(si0){
goto L28;
}
}
L27:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+4U);
si0=!(si0);
if(si0){
goto L1;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
f15024(i,si0);
goto L1;
L21:;
si0=l5;
si1=1U;
si0+=si1;
l5=si0;
si1=l6;
si0=si0 < si1;
if(si0){
goto L15;
}
goto L3;
}
L5:;
si0=1U;
si1=l2;
f52(i,si0,si1);
UNREACHABLE;
L4:;
f53(i);
UNREACHABLE;
L3:;
si0=l0;
si1=4U;
i32_store8(&i->m0,(U64)si0,si1);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+8U);
l3=si0;
si0=!(si0);
if(si0){
goto L2;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
L30:;
{
si0=l2;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L31;
}
si0=l2;
si1=4U;
si0+=si1;
f454(i,si0);
L31:;
si0=l2;
si1=16U;
si0+=si1;
l2=si0;
si0=l3;
si1=-1U;
si0+=si1;
l3=si0;
if(si0){
goto L30;
}
}
L2:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+4U);
si0=!(si0);
if(si0){
goto L1;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
f15024(i,si0);
L1:;
si0=l4;
si1=656U;
si0+=si1;
i->g0=si0;
L0:;
}

void f282(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
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
si1=128U;
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
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=l3;
si0=f15022(i,si0);
l5=si0;
si0=!(si0);
if(si0){
goto L3;
}
L5:;
si0=l5;
si1=l2;
si2=l3;
si0=f15143(i,si0,si1,si2);
l6=si0;
si0=l4;
si1=l3;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l4;
si1=l3;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l4;
si1=l6;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=l3;
si0=f273(i,si0,si1);
si1=l1;
si1=i32_load(&i->m0,(U64)si1+8U);
l7=si1;
si0=si0 >= si1;
if(si0){
goto L2;
}
si0=l3;
si1=4U;
si0=si0 < si1;
if(si0){
goto L7;
}
si0=l4;
si1=24U;
si0+=si1;
si1=l2;
si2=l3;
si3=1086780U;
si4=3U;
f690(i,si0,si1,si2,si3,si4);
si0=l4;
si1=92U;
si0+=si1;
si1=l4;
si2=24U;
si1+=si2;
f272(i,si0,si1);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+92U);
si0=!(si0);
if(si0){
goto L1;
}
goto L2;
L7:;
si0=l3;
si1=3U;
si0=si0 != si1;
if(si0){
goto L1;
}
si0=1086780U;
si1=l2;
si2=3U;
si0=f15142(i,si0,si1,si2);
si0=!(si0);
if(si0){
goto L2;
}
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
si0=0U;
l8=si0;
si0=l4;
si1=0U;
i32_store(&i->m0,(U64)si0+124U,si1);
si0=l4;
sj1=1ULL;
i64_store(&i->m0,(U64)si0+116U,sj1);
si0=l4;
si1=24U;
si0+=si1;
si1=l6;
si2=l3;
si3=1086780U;
si4=3U;
f690(i,si0,si1,si2,si3,si4);
si0=l4;
si1=92U;
si0+=si1;
si1=l4;
si2=24U;
si1+=si2;
f272(i,si0,si1);
si0=0U;
l2=si0;
si0=0U;
l9=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+92U);
si0=!(si0);
if(si0){
goto L8;
}
si0=0U;
l2=si0;
si0=1U;
l10=si0;
si0=0U;
l8=si0;
L9:;
{
si0=l4;
si0=i32_load(&i->m0,(U64)si0+100U);
l9=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+120U);
l11=si0;
si1=l2;
si0-=si1;
si1=l4;
si1=i32_load(&i->m0,(U64)si1+96U);
si2=l8;
si1-=si2;
l5=si1;
si0=si0 >= si1;
if(si0){
goto L10;
}
si0=l4;
si1=116U;
si0+=si1;
si1=l2;
si2=l5;
f530(i,si0,si1,si2);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+120U);
l11=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+116U);
l10=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+124U);
l2=si0;
L10:;
si0=l10;
si1=l2;
si0+=si1;
si1=l6;
si2=l8;
si1+=si2;
si2=l5;
si0=f15143(i,si0,si1,si2);
si0=l4;
si1=l2;
si2=l5;
si1+=si2;
l2=si1;
i32_store(&i->m0,(U64)si0+124U,si1);
si0=l11;
si1=l2;
si0=si0 != si1;
if(si0){
goto L11;
}
si0=l4;
si1=116U;
si0+=si1;
si1=l11;
si2=1U;
f530(i,si0,si1,si2);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+116U);
l10=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+124U);
l2=si0;
L11:;
si0=l10;
si1=l2;
si0+=si1;
si1=10U;
i32_store8(&i->m0,(U64)si0,si1);
si0=l4;
si1=l2;
si2=1U;
si1+=si2;
l2=si1;
i32_store(&i->m0,(U64)si0+124U,si1);
si0=l4;
si1=92U;
si0+=si1;
si1=l4;
si2=24U;
si1+=si2;
f272(i,si0,si1);
si0=l9;
l8=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+92U);
if(si0){
goto L9;
}
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0+120U);
l8=si0;
L8:;
si0=l6;
si1=l9;
si0+=si1;
l10=si0;
si0=l8;
si1=l2;
si0-=si1;
si1=l3;
si2=l9;
si1-=si2;
l5=si1;
si0=si0 >= si1;
if(si0){
goto L12;
}
si0=l4;
si1=116U;
si0+=si1;
si1=l2;
si2=l5;
f530(i,si0,si1,si2);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+120U);
l8=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+124U);
l2=si0;
L12:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+116U);
l9=si0;
si1=l2;
si0+=si1;
si1=l10;
si2=l5;
si0=f15143(i,si0,si1,si2);
si0=l4;
si1=92U;
si0+=si1;
si1=12U;
si0+=si1;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=0U;
i32_store8(&i->m0,(U64)si0+112U,si1);
si0=l4;
si1=17684584U;
i32_store(&i->m0,(U64)si0+100U,si1);
si0=l4;
si1=0U;
i32_store(&i->m0,(U64)si0+96U,si1);
si0=l4;
si1=17684584U;
i32_store(&i->m0,(U64)si0+92U,si1);
si0=l4;
si1=l7;
i32_store(&i->m0,(U64)si0+108U,si1);
si0=l4;
si1=0U;
i32_store16(&i->m0,(U64)si0+60U,si1);
si0=l4;
si1=l2;
si2=l5;
si1+=si2;
l2=si1;
i32_store(&i->m0,(U64)si0+56U,si1);
si0=l4;
si1=0U;
i32_store(&i->m0,(U64)si0+52U,si1);
si0=l4;
sj1=42949672961ULL;
i64_store(&i->m0,(U64)si0+44U,sj1);
si0=l4;
si1=l2;
i32_store(&i->m0,(U64)si0+40U,si1);
si0=l4;
si1=0U;
i32_store(&i->m0,(U64)si0+36U,si1);
si0=l4;
si1=l2;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l4;
si1=l9;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l4;
si1=10U;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l4;
si1=l4;
si2=92U;
si1+=si2;
i32_store(&i->m0,(U64)si0+64U,si1);
si0=l4;
si1=116U;
si0+=si1;
si1=l4;
si2=24U;
si1+=si2;
f246(i,si0,si1);
si0=l4;
si1=12U;
si0+=si1;
si1=l4;
si1=i32_load(&i->m0,(U64)si1+116U);
l10=si1;
si2=l4;
si2=i32_load(&i->m0,(U64)si2+124U);
l5=si2;
si3=1086476U;
si4=1U;
f437(i,si0,si1,si2,si3,si4);
si0=l5;
si0=!(si0);
if(si0){
goto L13;
}
si0=l10;
l2=si0;
L14:;
{
si0=l2;
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L15;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0);
f15024(i,si0);
L15:;
si0=l2;
si1=12U;
si0+=si1;
l2=si0;
si0=l5;
si1=-1U;
si0+=si1;
l5=si0;
if(si0){
goto L14;
}
}
L13:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+120U);
si0=!(si0);
if(si0){
goto L16;
}
si0=l10;
f15024(i,si0);
L16:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+4U);
si0=!(si0);
if(si0){
goto L17;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
f15024(i,si0);
L17:;
si0=l4;
si1=8U;
si0+=si1;
si1=l4;
si2=12U;
si1+=si2;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1+12U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l8;
si0=!(si0);
if(si0){
goto L1;
}
si0=l9;
f15024(i,si0);
L1:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
l5=si0;
si0=l4;
si1=36U;
si0+=si1;
sj1=1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=1U;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l4;
si1=1086468U;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l4;
si1=154U;
i32_store(&i->m0,(U64)si0+96U,si1);
si0=l4;
si1=l4;
si2=92U;
si1+=si2;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l4;
si1=l4;
i32_store(&i->m0,(U64)si0+92U,si1);
si0=l4;
si1=116U;
si0+=si1;
si1=l2;
si2=l4;
si3=24U;
si2+=si3;
si3=l5;
si3=i32_load(&i->m0,(U64)si3+36U);
TF(i->t0,si3,void (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
si0=l4;
si0=i32_load8_u(&i->m0,(U64)si0+116U);
l2=si0;
si1=4U;
si0=si0 != si1;
if(si0){
goto L19;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0+4U);
si0=!(si0);
if(si0){
goto L18;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
f15024(i,si0);
goto L18;
L19:;
si0=l0;
si1=l4;
si1=i32_load(&i->m0,(U64)si1+117U);
i32_store(&i->m0,(U64)si0+1U,si1);
si0=l0;
si1=4U;
si0+=si1;
si1=l4;
si2=116U;
si1+=si2;
si2=4U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+4U);
si0=!(si0);
if(si0){
goto L18;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
f15024(i,si0);
L18:;
si0=l0;
si1=l2;
i32_store8(&i->m0,(U64)si0,si1);
si0=l4;
si1=128U;
si0+=si1;
i->g0=si0;
L0:;
}

void f283(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
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
si1=28U;
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
si0=i32_load(&i->m0,(U64)si0);
si1=l7;
si2=-8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
si2=l7;
si3=-16U;
si2+=si3;
si2=i32_load(&i->m0,(U64)si2);
si3=l7;
si4=-24U;
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
f530(i,si0,si1,si2);
L8:;
si0=l3;
si0=!(si0);
if(si0){
goto L1;
}
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
f530(i,si0,si1,si2);
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
si0=f15143(i,si0,si1,si2);
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

U32 f284(rustpythonInstance*i,U32 l0) {
U32 si0;
si0=1U;
L0:;
return si0;
}

void f285(rustpythonInstance*i,U32 l0,U32 l1) {
U32 si0,si1;
si0=l0;
si1=4U;
i32_store8(&i->m0,(U64)si0,si1);
L0:;
}

void f286(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
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
f530(i,si0,si1,si2);
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
si0=f15143(i,si0,si1,si2);
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

void f287(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
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
f530(i,si0,si1,si2);
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
si0=f15143(i,si0,si1,si2);
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

void f288(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U32 si0,si1,si2;
U64 sj1;
si0=i->g0;
si1=64U;
si0-=si1;
l4=si0;
i->g0=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si0=l4;
si1=8U;
si0+=si1;
si1=l2;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=l2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si0=i32_load8_u(&i->m0,(U64)si0);
switch(si0){
case 0:
goto L4;
case 1:
goto L3;
case 2:
goto L2;
default:
goto L4;
}
L4:;
si0=l4;
si1=0U;
i32_store(&i->m0,(U64)si0+56U,si1);
goto L1;
L3:;
si0=l4;
si1=0U;
i32_store(&i->m0,(U64)si0+56U,si1);
goto L1;
L2:;
si0=l4;
si1=3U;
i32_store(&i->m0,(U64)si0+56U,si1);
L1:;
si0=l4;
si1=l3;
i32_store(&i->m0,(U64)si0+60U,si1);
si0=l4;
si1=36U;
si0+=si1;
sj1=1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=189U;
i32_store(&i->m0,(U64)si0+52U,si1);
si0=l4;
si1=1U;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l4;
si1=1088480U;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l4;
si1=l4;
si2=56U;
si1+=si2;
i32_store(&i->m0,(U64)si0+48U,si1);
si0=l4;
si1=l4;
si2=48U;
si1+=si2;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l4;
si1=12U;
si0+=si1;
si1=l4;
si2=24U;
si1+=si2;
f64(i,si0,si1);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+12U);
l3=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+4U);
si1=l4;
si1=i32_load(&i->m0,(U64)si1+8U);
l2=si1;
si0-=si1;
si1=l4;
si1=i32_load(&i->m0,(U64)si1+20U);
l1=si1;
si0=si0 >= si1;
if(si0){
goto L5;
}
si0=l4;
si1=l2;
si2=l1;
f530(i,si0,si1,si2);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+8U);
l2=si0;
L5:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
si1=l2;
si0+=si1;
si1=l3;
si2=l1;
si0=f15143(i,si0,si1,si2);
si0=l0;
si1=8U;
si0+=si1;
si1=l2;
si2=l1;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+16U);
si0=!(si0);
if(si0){
goto L6;
}
si0=l3;
f15024(i,si0);
L6:;
si0=l4;
si1=64U;
si0+=si1;
i->g0=si0;
L0:;
}

void f289(rustpythonInstance*i,U32 l0) {
L0:;
}

void f290(rustpythonInstance*i,U32 l0) {
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

void f291(rustpythonInstance*i,U32 l0) {
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
f15024(i,si0);
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
f15024(i,si0);
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
f15024(i,si0);
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
f15024(i,si0);
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
f15024(i,si0);
L5:;
L0:;
}

void f292(rustpythonInstance*i,U32 l0) {
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
f15024(i,si0);
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
f15024(i,si0);
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
f15024(i,si0);
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
f15024(i,si0);
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
f15024(i,si0);
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
f15024(i,si0);
L6:;
L0:;
}

void f293(rustpythonInstance*i,U32 l0) {
U32 l1=0;
U32 si0,si1;
si0=l0;
si1=32U;
si0+=si1;
f291(i,si0);
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
f15024(i,si0);
L1:;
L0:;
}

void f294(rustpythonInstance*i,U32 l0) {
U32 l1=0;
U32 si0,si1;
si0=l0;
si1=184U;
si0+=si1;
f291(i,si0);
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
f15024(i,si0);
L1:;
si0=l0;
f292(i,si0);
L0:;
}

void f295(rustpythonInstance*i,U32 l0) {
U32 si0,si1;
si0=l0;
si1=152U;
si0+=si1;
f291(i,si0);
si0=l0;
f292(i,si0);
L0:;
}

U32 f296(rustpythonInstance*i,U32 l0,U32 l1) {
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
f515(i,si0,si1);
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
f530(i,si0,si1,si2);
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

U32 f297(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
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
f530(i,si0,si1,si2);
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

void f298(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4) {
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
U32 l20=0;
U64 l21=0;
U32 l22=0;
U32 l23=0;
U64 l24=0;
U64 l25=0;
U32 l26=0;
U32 l27=0;
U64 l28=0;
U32 l29=0;
U32 l30=0;
U32 l31=0;
U64 l32=0;
U32 l33=0;
U32 l34=0;
U32 l35=0;
U32 l36=0;
U64 l37=0;
U32 l38=0;
U64 l39=0;
U64 l40=0;
U64 l41=0;
U64 l42=0;
U64 l43=0;
U64 l44=0;
U64 l45=0;
U32 l46=0;
U32 l47=0;
U32 l48=0;
U32 l49=0;
U32 l50=0;
U32 l51=0;
U32 l52=0;
U32 l53=0;
U32 l54=0;
U64 l55=0;
U32 l56=0;
U64 l57=0;
U64 l58=0;
U32 si0,si1,si2,si3,si4,si5,si6,si7,si8,si9,si10,si11;
U64 sj0,sj1,sj2,sj3,sj4,sj5,sj6,sj7,sj8,sj9,sj10,sj11,sj12;
si0=i->g0;
si1=544U;
si0-=si1;
l5=si0;
i->g0=si0;
si0=l5;
si1=24U;
si0+=si1;
si1=l1;
si1=i32_load(&i->m0,(U64)si1);
l6=si1;
si2=l4;
f215(i,si0,si1,si2);
si0=l5;
si0=i32_load8_u(&i->m0,(U64)si0+48U);
l1=si0;
si1=20U;
si0=si0 != si1;
if(si0){
goto L9;
}
si0=l5;
si1=24U;
si0+=si1;
si1=l6;
si2=l4;
f214(i,si0,si1,si2);
si0=l5;
si0=i32_load8_u(&i->m0,(U64)si0+48U);
l1=si0;
si1=20U;
si0=si0 != si1;
if(si0){
goto L10;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
si1=1U;
si0=si0 != si1;
if(si0){
goto L6;
}
si0=l6;
si1=232U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si0=!(si0);
if(si0){
goto L12;
}
si0=l2;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l8=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+4U);
l9=si0;
si0=l6;
si0=i32_load(&i->m0,(U64)si0+224U);
l10=si0;
si0=l1;
si1=272U;
si0*=si1;
l11=si0;
si0=0U;
l1=si0;
L13:;
{
si0=l10;
si1=l1;
si0+=si1;
l2=si0;
si1=188U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=l8;
si0=si0 != si1;
if(si0){
goto L14;
}
si0=l2;
si1=184U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l12=si0;
si1=l9;
si2=l8;
si0=f15142(i,si0,si1,si2);
si0=!(si0);
if(si0){
goto L11;
}
L14:;
si0=l11;
si1=l1;
si2=272U;
si1+=si2;
l1=si1;
si0=si0 != si1;
if(si0){
goto L13;
}
}
L12:;
si0=1087560U;
si1=99U;
si2=1087764U;
f634(i,si0,si1,si2);
UNREACHABLE;
L11:;
si0=l2;
si1=204U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l13=si0;
si0=l2;
si1=200U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l14=si0;
si0=l2;
si1=196U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l15=si0;
si0=l2;
si1=192U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l16=si0;
si0=0U;
l1=si0;
si0=l2;
si1=208U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l11=si0;
if(si0){
goto L17;
}
si0=0U;
l17=si0;
goto L16;
L17:;
si0=4U;
l17=si0;
si0=0U;
l9=si0;
si0=l2;
si1=216U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l10=si0;
si0=!(si0);
if(si0){
goto L18;
}
si0=l10;
si1=268435455U;
si0=si0 > si1;
if(si0){
goto L5;
}
si0=l10;
si1=3U;
si0<<=(si1&31);
l18=si0;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L5;
}
si0=l18;
si0=!(si0);
if(si0){
goto L18;
}
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=l18;
si0=f15022(i,si0);
l17=si0;
si0=!(si0);
if(si0){
goto L15;
}
si0=l18;
l9=si0;
L18:;
si0=l17;
si1=l11;
si2=l9;
si0=f15143(i,si0,si1,si2);
si0=l10;
sj0=(U64)(si0);
l19=sj0;
sj1=32ULL;
sj0<<=(sj1&63);
sj1=l19;
sj0|=sj1;
l19=sj0;
L16:;
si0=l2;
si1=220U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l20=si0;
si0=l2;
si1=224U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l11=si0;
if(si0){
goto L21;
}
goto L20;
L21:;
si0=4U;
l1=si0;
si0=0U;
l9=si0;
si0=l2;
si1=232U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l10=si0;
si0=!(si0);
if(si0){
goto L22;
}
si0=l10;
si1=268435455U;
si0=si0 > si1;
if(si0){
goto L5;
}
si0=l10;
si1=3U;
si0<<=(si1&31);
l18=si0;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L5;
}
si0=l18;
si0=!(si0);
if(si0){
goto L22;
}
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=l18;
si0=f15022(i,si0);
l1=si0;
si0=!(si0);
if(si0){
goto L19;
}
si0=l18;
l9=si0;
L22:;
si0=l1;
si1=l11;
si2=l9;
si0=f15143(i,si0,si1,si2);
si0=l10;
sj0=(U64)(si0);
l21=sj0;
sj1=32ULL;
sj0<<=(sj1&63);
sj1=l21;
sj0|=sj1;
l21=sj0;
L20:;
si0=0U;
l10=si0;
si0=l2;
si1=236U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l9=si0;
if(si0){
goto L25;
}
si0=0U;
l22=si0;
goto L24;
L25:;
si0=4U;
l22=si0;
si0=0U;
l18=si0;
si0=l2;
si1=244U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l11=si0;
si0=!(si0);
if(si0){
goto L26;
}
si0=l11;
si1=268435455U;
si0=si0 > si1;
if(si0){
goto L5;
}
si0=l11;
si1=3U;
si0<<=(si1&31);
l23=si0;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L5;
}
si0=l23;
si0=!(si0);
if(si0){
goto L26;
}
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=l23;
si0=f15022(i,si0);
l22=si0;
si0=!(si0);
if(si0){
goto L23;
}
si0=l23;
l18=si0;
L26:;
si0=l22;
si1=l9;
si2=l18;
si0=f15143(i,si0,si1,si2);
si0=l11;
sj0=(U64)(si0);
l24=sj0;
sj1=32ULL;
sj0<<=(sj1&63);
sj1=l24;
sj0|=sj1;
l24=sj0;
L24:;
si0=l2;
si1=248U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l9=si0;
if(si0){
goto L29;
}
goto L28;
L29:;
si0=4U;
l10=si0;
si0=0U;
l18=si0;
si0=l2;
si1=256U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l11=si0;
si0=!(si0);
if(si0){
goto L30;
}
si0=l11;
si1=268435455U;
si0=si0 > si1;
if(si0){
goto L5;
}
si0=l11;
si1=3U;
si0<<=(si1&31);
l23=si0;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L5;
}
si0=l23;
si0=!(si0);
if(si0){
goto L30;
}
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=l23;
si0=f15022(i,si0);
l10=si0;
si0=!(si0);
if(si0){
goto L27;
}
si0=l23;
l18=si0;
L30:;
si0=l10;
si1=l9;
si2=l18;
si0=f15143(i,si0,si1,si2);
si0=l11;
sj0=(U64)(si0);
l25=sj0;
sj1=32ULL;
sj0<<=(sj1&63);
sj1=l25;
sj0|=sj1;
l25=sj0;
L28:;
si0=0U;
l11=si0;
si0=l2;
si1=260U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l18=si0;
if(si0){
goto L33;
}
si0=0U;
l26=si0;
goto L32;
L33:;
si0=0U;
l23=si0;
si0=l2;
si1=268U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l9=si0;
if(si0){
goto L35;
}
si0=4U;
l26=si0;
goto L34;
L35:;
si0=l9;
si1=134217727U;
si0=si0 > si1;
if(si0){
goto L5;
}
si0=l9;
si1=4U;
si0<<=(si1&31);
l27=si0;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L5;
}
si0=l27;
if(si0){
goto L36;
}
si0=4U;
l26=si0;
goto L34;
L36:;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=l27;
si0=f15022(i,si0);
l26=si0;
si0=!(si0);
if(si0){
goto L31;
}
si0=l27;
l23=si0;
L34:;
si0=l26;
si1=l18;
si2=l23;
si0=f15143(i,si0,si1,si2);
si0=l9;
sj0=(U64)(si0);
l28=sj0;
sj1=32ULL;
sj0<<=(sj1&63);
sj1=l28;
sj0|=sj1;
l28=sj0;
L32:;
si0=l2;
si1=160U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l29=si0;
si0=l2;
si1=156U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l30=si0;
si0=l2;
si1=152U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l31=si0;
si0=l2;
si1=164U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l18=si0;
if(si0){
goto L39;
}
goto L38;
L39:;
si0=4U;
l11=si0;
si0=0U;
l23=si0;
si0=l2;
si1=172U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l9=si0;
si0=!(si0);
if(si0){
goto L40;
}
si0=l9;
si1=178956970U;
si0=si0 > si1;
if(si0){
goto L5;
}
si0=l9;
si1=12U;
si0*=si1;
l27=si0;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L5;
}
si0=l27;
si0=!(si0);
if(si0){
goto L40;
}
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=l27;
si0=f15022(i,si0);
l11=si0;
si0=!(si0);
if(si0){
goto L37;
}
si0=l27;
l23=si0;
L40:;
si0=l11;
si1=l18;
si2=l23;
si0=f15143(i,si0,si1,si2);
si0=l9;
sj0=(U64)(si0);
l32=sj0;
sj1=32ULL;
sj0<<=(sj1&63);
sj1=l32;
sj0|=sj1;
l32=sj0;
L38:;
si0=l2;
si1=180U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l33=si0;
si0=l2;
si1=176U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l34=si0;
si0=0U;
l9=si0;
si0=l2;
si1=116U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l23=si0;
if(si0){
goto L43;
}
si0=0U;
l27=si0;
goto L42;
L43:;
si0=4U;
l27=si0;
si0=0U;
l35=si0;
si0=l2;
si1=124U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l18=si0;
si0=!(si0);
if(si0){
goto L44;
}
si0=l18;
si1=268435455U;
si0=si0 > si1;
if(si0){
goto L5;
}
si0=l18;
si1=3U;
si0<<=(si1&31);
l36=si0;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L5;
}
si0=l36;
si0=!(si0);
if(si0){
goto L44;
}
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=l36;
si0=f15022(i,si0);
l27=si0;
si0=!(si0);
if(si0){
goto L41;
}
si0=l36;
l35=si0;
L44:;
si0=l27;
si1=l23;
si2=l35;
si0=f15143(i,si0,si1,si2);
si0=l18;
sj0=(U64)(si0);
l37=sj0;
sj1=32ULL;
sj0<<=(sj1&63);
sj1=l37;
sj0|=sj1;
l37=sj0;
L42:;
si0=l2;
si1=48U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l23=si0;
if(si0){
goto L47;
}
goto L46;
L47:;
si0=l2;
si1=60U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l38=si0;
si0=4U;
l9=si0;
si0=0U;
l35=si0;
si0=l2;
si1=56U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l18=si0;
si0=!(si0);
if(si0){
goto L48;
}
si0=l18;
si1=268435455U;
si0=si0 > si1;
if(si0){
goto L5;
}
si0=l18;
si1=3U;
si0<<=(si1&31);
l36=si0;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L5;
}
si0=l36;
si0=!(si0);
if(si0){
goto L48;
}
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=l36;
si0=f15022(i,si0);
l9=si0;
si0=!(si0);
if(si0){
goto L45;
}
si0=l36;
l35=si0;
L48:;
si0=l9;
si1=l23;
si2=l35;
si0=f15143(i,si0,si1,si2);
si0=l18;
sj0=(U64)(si0);
l39=sj0;
sj1=32ULL;
sj0<<=(sj1&63);
sj1=l39;
sj0|=sj1;
l39=sj0;
L46:;
si0=l2;
si1=40U;
si0+=si1;
sj0=i64_load(&i->m0,(U64)si0);
l40=sj0;
si0=l2;
si1=32U;
si0+=si1;
sj0=i64_load(&i->m0,(U64)si0);
l41=sj0;
si0=l2;
si1=24U;
si0+=si1;
sj0=i64_load(&i->m0,(U64)si0);
l42=sj0;
si0=l2;
si1=16U;
si0+=si1;
sj0=i64_load(&i->m0,(U64)si0);
l43=sj0;
si0=l2;
si1=8U;
si0+=si1;
sj0=i64_load(&i->m0,(U64)si0);
l44=sj0;
si0=l2;
sj0=i64_load(&i->m0,(U64)si0);
l45=sj0;
si0=l2;
si1=64U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l18=si0;
if(si0){
goto L51;
}
goto L50;
L51:;
si0=l2;
si1=68U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l46=si0;
si0=l18;
si1=l18;
si1=i32_load(&i->m0,(U64)si1);
si2=1U;
si1+=si2;
l23=si1;
i32_store(&i->m0,(U64)si0,si1);
si0=l23;
si0=!(si0);
if(si0){
goto L49;
}
L50:;
si0=l2;
si1=72U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l23=si0;
if(si0){
goto L53;
}
goto L52;
L53:;
si0=l2;
si1=76U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l47=si0;
si0=l23;
si1=l23;
si1=i32_load(&i->m0,(U64)si1);
si2=1U;
si1+=si2;
l35=si1;
i32_store(&i->m0,(U64)si0,si1);
si0=l35;
si0=!(si0);
if(si0){
goto L49;
}
L52:;
si0=l2;
si1=84U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l48=si0;
si0=l2;
si1=80U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l49=si0;
si0=l2;
si1=112U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l50=si0;
si0=l2;
si1=88U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l51=si0;
if(si0){
goto L56;
}
si0=0U;
l35=si0;
goto L55;
L56:;
si0=l2;
si1=100U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l52=si0;
si0=4U;
l35=si0;
si0=0U;
l53=si0;
si0=l2;
si1=96U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l36=si0;
si0=!(si0);
if(si0){
goto L57;
}
si0=l36;
si1=89478485U;
si0=si0 > si1;
if(si0){
goto L5;
}
si0=l36;
si1=24U;
si0*=si1;
l54=si0;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L5;
}
si0=l54;
si0=!(si0);
if(si0){
goto L57;
}
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=l54;
si0=f15022(i,si0);
l35=si0;
si0=!(si0);
if(si0){
goto L54;
}
si0=l54;
l53=si0;
L57:;
si0=l35;
si1=l51;
si2=l53;
si0=f15143(i,si0,si1,si2);
si0=l36;
sj0=(U64)(si0);
l55=sj0;
sj1=32ULL;
sj0<<=(sj1&63);
sj1=l55;
sj0|=sj1;
l55=sj0;
L55:;
si0=l2;
si1=128U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l51=si0;
if(si0){
goto L60;
}
goto L59;
L60:;
si0=l2;
si1=132U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l53=si0;
si0=l2;
si1=136U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l56=si0;
if(si0){
goto L61;
}
si0=0U;
l36=si0;
goto L59;
L61:;
si0=l2;
si1=144U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l54=si0;
if(si0){
goto L63;
}
si0=1U;
l36=si0;
goto L62;
L63:;
si0=l54;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L5;
}
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=l54;
si0=f15022(i,si0);
l36=si0;
si0=!(si0);
if(si0){
goto L58;
}
L62:;
si0=l36;
si1=l56;
si2=l54;
si0=f15143(i,si0,si1,si2);
si0=l54;
sj0=(U64)(si0);
l57=sj0;
sj1=32ULL;
sj0<<=(sj1&63);
sj1=l57;
sj0|=sj1;
l57=sj0;
L59:;
si0=l2;
si1=104U;
si0+=si1;
sj0=i64_load(&i->m0,(U64)si0);
l58=sj0;
si0=l5;
si1=288U;
si0+=si1;
sj1=l28;
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=284U;
si0+=si1;
si1=l26;
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=276U;
si0+=si1;
sj1=l25;
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=272U;
si0+=si1;
si1=l10;
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=264U;
si0+=si1;
sj1=l24;
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=260U;
si0+=si1;
si1=l22;
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=252U;
si0+=si1;
sj1=l21;
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=248U;
si0+=si1;
si1=l1;
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=244U;
si0+=si1;
si1=l20;
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=236U;
si0+=si1;
sj1=l19;
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=232U;
si0+=si1;
si1=l17;
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=228U;
si0+=si1;
si1=l13;
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=224U;
si0+=si1;
si1=l14;
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=220U;
si0+=si1;
si1=l15;
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=216U;
si0+=si1;
si1=l16;
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=212U;
si0+=si1;
si1=l8;
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=204U;
si0+=si1;
si1=l33;
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=200U;
si0+=si1;
si1=l34;
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=192U;
si0+=si1;
sj1=l32;
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=188U;
si0+=si1;
si1=l11;
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=184U;
si0+=si1;
si1=l29;
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=180U;
si0+=si1;
si1=l30;
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=l12;
i32_store(&i->m0,(U64)si0+208U,si1);
si0=l5;
si1=l31;
i32_store(&i->m0,(U64)si0+176U,si1);
si0=l5;
sj1=l57;
i64_store(&i->m0,(U64)si0+164U,sj1);
si0=l5;
si1=l36;
i32_store(&i->m0,(U64)si0+160U,si1);
si0=l5;
si1=l53;
i32_store(&i->m0,(U64)si0+156U,si1);
si0=l5;
si1=l51;
i32_store(&i->m0,(U64)si0+152U,si1);
si0=l5;
sj1=l37;
i64_store(&i->m0,(U64)si0+144U,sj1);
si0=l5;
si1=l27;
i32_store(&i->m0,(U64)si0+140U,si1);
si0=l5;
si1=l50;
i32_store(&i->m0,(U64)si0+136U,si1);
si0=l5;
sj1=l58;
i64_store(&i->m0,(U64)si0+128U,sj1);
si0=l5;
si1=l52;
i32_store(&i->m0,(U64)si0+124U,si1);
si0=l5;
sj1=l55;
i64_store(&i->m0,(U64)si0+116U,sj1);
si0=l5;
si1=l35;
i32_store(&i->m0,(U64)si0+112U,si1);
si0=l5;
si1=l48;
i32_store(&i->m0,(U64)si0+108U,si1);
si0=l5;
si1=l49;
i32_store(&i->m0,(U64)si0+104U,si1);
si0=l5;
si1=l47;
i32_store(&i->m0,(U64)si0+100U,si1);
si0=l5;
si1=l23;
i32_store(&i->m0,(U64)si0+96U,si1);
si0=l5;
si1=l46;
i32_store(&i->m0,(U64)si0+92U,si1);
si0=l5;
si1=l18;
i32_store(&i->m0,(U64)si0+88U,si1);
si0=l5;
si1=l38;
i32_store(&i->m0,(U64)si0+84U,si1);
si0=l5;
sj1=l39;
i64_store(&i->m0,(U64)si0+76U,sj1);
si0=l5;
si1=l9;
i32_store(&i->m0,(U64)si0+72U,si1);
si0=l5;
sj1=l40;
i64_store(&i->m0,(U64)si0+64U,sj1);
si0=l5;
sj1=l41;
i64_store(&i->m0,(U64)si0+56U,sj1);
si0=l5;
sj1=l42;
i64_store(&i->m0,(U64)si0+48U,sj1);
si0=l5;
sj1=l43;
i64_store(&i->m0,(U64)si0+40U,sj1);
si0=l5;
sj1=l44;
i64_store(&i->m0,(U64)si0+32U,sj1);
si0=l5;
sj1=l45;
i64_store(&i->m0,(U64)si0+24U,sj1);
si0=l5;
si1=296U;
si0+=si1;
si1=l6;
si2=l4;
f299(i,si0,si1,si2);
si0=l5;
si0=i32_load8_u(&i->m0,(U64)si0+320U);
l1=si0;
si1=20U;
si0=si0 != si1;
if(si0){
goto L8;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0+12U);
si0=!(si0);
if(si0){
goto L64;
}
si0=l4;
si1=16U;
si0+=si1;
si1=l5;
si1=i32_load(&i->m0,(U64)si1+208U);
l12=si1;
si2=l5;
si2=i32_load(&i->m0,(U64)si2+212U);
l1=si2;
sj0=f491(i,si0,si1,si2);
l19=sj0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
l23=si0;
si1=-40U;
si0+=si1;
l11=si0;
sj0=l19;
sj1=25ULL;
sj0>>=(sj1&63);
sj1=127ULL;
sj0&=sj1;
sj1=72340172838076673ULL;
sj0*=sj1;
l24=sj0;
sj0=l19;
si0=(U32)(sj0);
l2=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+4U);
l10=si0;
si0=0U;
l18=si0;
L65:;
{
si0=l23;
si1=l2;
si2=l10;
si1&=si2;
l8=si1;
si0+=si1;
sj0=i64_load(&i->m0,(U64)si0);
l21=sj0;
sj1=l24;
sj0^=sj1;
l19=sj0;
sj1=-1ULL;
sj0^=sj1;
sj1=l19;
sj2=-72340172838076673ULL;
sj1+=sj2;
sj0&=sj1;
sj1=-9187201950435737472ULL;
sj0&=sj1;
l19=sj0;
si0=!(sj0);
if(si0){
goto L66;
}
L68:;
{
si0=l11;
si1=0U;
sj2=l19;
sj2=I64_CTZ(sj2);
si2=(U32)(sj2);
si3=3U;
si2>>=(si3&31);
si3=l8;
si2+=si3;
si3=l10;
si2&=si3;
si1-=si2;
l9=si1;
si2=40U;
si1*=si2;
si0+=si1;
l2=si0;
si0=i32_load(&i->m0,(U64)si0+4U);
si1=l1;
si0=si0 != si1;
if(si0){
goto L69;
}
si0=l12;
si1=l2;
si1=i32_load(&i->m0,(U64)si1);
si2=l1;
si0=f15142(i,si0,si1,si2);
si0=!(si0);
if(si0){
goto L67;
}
L69:;
sj0=l19;
sj1=-1ULL;
sj0+=sj1;
sj1=l19;
sj0&=sj1;
l19=sj0;
si0=!(sj0);
if(si0){
goto L66;
}
goto L68;
}
L67:;
si0=l23;
si1=l9;
si2=40U;
si1*=si2;
si0+=si1;
si1=-4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L70;
}
si0=l5;
sj0=i64_load(&i->m0,(U64)si0+56U);
si0=!(sj0);
if(si0){
goto L64;
}
si0=l5;
sj0=i64_load(&i->m0,(U64)si0+64U);
sj1=0ULL;
si0=sj0 != sj1;
if(si0){
goto L64;
}
L70:;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+232U);
l1=si0;
si0=!(si0);
if(si0){
goto L71;
}
si0=l5;
si0=i32_load(&i->m0,(U64)si0+236U);
si0=!(si0);
if(si0){
goto L71;
}
si0=l1;
f15024(i,si0);
L71:;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+248U);
l1=si0;
si0=!(si0);
if(si0){
goto L72;
}
si0=l5;
si0=i32_load(&i->m0,(U64)si0+252U);
si0=!(si0);
if(si0){
goto L72;
}
si0=l1;
f15024(i,si0);
L72:;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+260U);
l1=si0;
si0=!(si0);
if(si0){
goto L73;
}
si0=l5;
si0=i32_load(&i->m0,(U64)si0+264U);
si0=!(si0);
if(si0){
goto L73;
}
si0=l1;
f15024(i,si0);
L73:;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+272U);
l1=si0;
si0=!(si0);
if(si0){
goto L74;
}
si0=l5;
si0=i32_load(&i->m0,(U64)si0+276U);
si0=!(si0);
if(si0){
goto L74;
}
si0=l1;
f15024(i,si0);
L74:;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+284U);
l1=si0;
si0=!(si0);
if(si0){
goto L75;
}
si0=l5;
si0=i32_load(&i->m0,(U64)si0+288U);
si0=!(si0);
if(si0){
goto L75;
}
si0=l1;
f15024(i,si0);
L75:;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+188U);
l1=si0;
si0=!(si0);
if(si0){
goto L76;
}
si0=l5;
si0=i32_load(&i->m0,(U64)si0+192U);
si0=!(si0);
if(si0){
goto L76;
}
si0=l1;
f15024(i,si0);
L76:;
si0=l5;
si1=24U;
si0+=si1;
f292(i,si0);
goto L6;
L66:;
sj0=l21;
sj1=l21;
sj2=1ULL;
sj1<<=(sj2&63);
sj0&=sj1;
sj1=-9187201950435737472ULL;
sj0&=sj1;
si0=!(sj0);
si0=!(si0);
if(si0){
goto L64;
}
si0=l8;
si1=l18;
si2=8U;
si1+=si2;
l18=si1;
si0+=si1;
l2=si0;
goto L65;
}
L64:;
si0=l5;
si1=296U;
si0+=si1;
si1=l6;
si2=l4;
si3=0U;
si4=l1;
f586(i,si0,si1,si2,si3,si4);
si0=l0;
si1=l5;
si2=24U;
si1+=si2;
si2=1087824U;
si3=l5;
si3=i32_load(&i->m0,(U64)si3+296U);
l1=si3;
si4=l5;
si4=i32_load(&i->m0,(U64)si4+304U);
si5=l6;
sj5=i64_load(&i->m0,(U64)si5+16U);
l19=sj5;
si5=(U32)(sj5);
si6=23U;
si5>>=(si6&31);
si6=1U;
si5&=si6;
si6=2U;
sj7=l19;
sj8=33554432ULL;
sj7&=sj8;
si7=!(sj7);
si5=si7?si5:si6;
f565(i,si0,si1,si2,si3,si4,si5);
si0=l5;
si0=i32_load(&i->m0,(U64)si0+300U);
si0=!(si0);
if(si0){
goto L7;
}
si0=l1;
f15024(i,si0);
goto L7;
L58:;
si0=1U;
si1=l54;
f52(i,si0,si1);
UNREACHABLE;
L54:;
si0=4U;
si1=l54;
f52(i,si0,si1);
UNREACHABLE;
L49:;
UNREACHABLE;
L45:;
si0=4U;
si1=l36;
f52(i,si0,si1);
UNREACHABLE;
L41:;
si0=4U;
si1=l36;
f52(i,si0,si1);
UNREACHABLE;
L37:;
si0=4U;
si1=l27;
f52(i,si0,si1);
UNREACHABLE;
L31:;
si0=4U;
si1=l27;
f52(i,si0,si1);
UNREACHABLE;
L27:;
si0=4U;
si1=l23;
f52(i,si0,si1);
UNREACHABLE;
L23:;
si0=4U;
si1=l23;
f52(i,si0,si1);
UNREACHABLE;
L19:;
si0=4U;
si1=l18;
f52(i,si0,si1);
UNREACHABLE;
L15:;
si0=4U;
si1=l18;
f52(i,si0,si1);
UNREACHABLE;
L10:;
si0=l0;
si1=l5;
si1=i32_load16_u(&i->m0,(U64)si1+49U);
i32_store16(&i->m0,(U64)si0+25U,si1);
si0=l5;
si1=352U;
si0+=si1;
si1=16U;
si0+=si1;
si1=l5;
si2=24U;
si1+=si2;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
l19=sj1;
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=352U;
si0+=si1;
si1=8U;
si0+=si1;
si1=l5;
si2=24U;
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
si2=24U;
si1+=si2;
si2=27U;
si1+=si2;
si1=i32_load8_u(&i->m0,(U64)si1);
i32_store8(&i->m0,(U64)si0,si1);
si0=l5;
si1=l5;
sj1=i64_load(&i->m0,(U64)si1+24U);
l24=sj1;
i64_store(&i->m0,(U64)si0+352U,sj1);
si0=l0;
si1=16U;
si0+=si1;
sj1=l19;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=8U;
si0+=si1;
sj1=l21;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
sj1=l24;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=l1;
i32_store8(&i->m0,(U64)si0+24U,si1);
goto L3;
L9:;
si0=l0;
si1=l5;
si1=i32_load16_u(&i->m0,(U64)si1+49U);
i32_store16(&i->m0,(U64)si0+25U,si1);
si0=l5;
si1=328U;
si0+=si1;
si1=16U;
si0+=si1;
si1=l5;
si2=24U;
si1+=si2;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
l19=sj1;
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=328U;
si0+=si1;
si1=8U;
si0+=si1;
si1=l5;
si2=24U;
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
si2=24U;
si1+=si2;
si2=27U;
si1+=si2;
si1=i32_load8_u(&i->m0,(U64)si1);
i32_store8(&i->m0,(U64)si0,si1);
si0=l5;
si1=l5;
sj1=i64_load(&i->m0,(U64)si1+24U);
l24=sj1;
i64_store(&i->m0,(U64)si0+328U,sj1);
si0=l0;
si1=16U;
si0+=si1;
sj1=l19;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=8U;
si0+=si1;
sj1=l21;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
sj1=l24;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=l1;
i32_store8(&i->m0,(U64)si0+24U,si1);
goto L3;
L8:;
si0=l0;
si1=l5;
si1=i32_load16_u(&i->m0,(U64)si1+321U);
i32_store16(&i->m0,(U64)si0+25U,si1);
si0=l5;
si1=376U;
si0+=si1;
si1=16U;
si0+=si1;
si1=l5;
si2=296U;
si1+=si2;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
l19=sj1;
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=376U;
si0+=si1;
si1=8U;
si0+=si1;
si1=l5;
si2=296U;
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
si2=296U;
si1+=si2;
si2=27U;
si1+=si2;
si1=i32_load8_u(&i->m0,(U64)si1);
i32_store8(&i->m0,(U64)si0,si1);
si0=l5;
si1=l5;
sj1=i64_load(&i->m0,(U64)si1+296U);
l24=sj1;
i64_store(&i->m0,(U64)si0+376U,sj1);
si0=l0;
si1=16U;
si0+=si1;
sj1=l19;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=8U;
si0+=si1;
sj1=l21;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
sj1=l24;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=l1;
i32_store8(&i->m0,(U64)si0+24U,si1);
L7:;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+232U);
l1=si0;
si0=!(si0);
if(si0){
goto L77;
}
si0=l5;
si0=i32_load(&i->m0,(U64)si0+236U);
si0=!(si0);
if(si0){
goto L77;
}
si0=l1;
f15024(i,si0);
L77:;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+248U);
l1=si0;
si0=!(si0);
if(si0){
goto L78;
}
si0=l5;
si0=i32_load(&i->m0,(U64)si0+252U);
si0=!(si0);
if(si0){
goto L78;
}
si0=l1;
f15024(i,si0);
L78:;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+260U);
l1=si0;
si0=!(si0);
if(si0){
goto L79;
}
si0=l5;
si0=i32_load(&i->m0,(U64)si0+264U);
si0=!(si0);
if(si0){
goto L79;
}
si0=l1;
f15024(i,si0);
L79:;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+272U);
l1=si0;
si0=!(si0);
if(si0){
goto L80;
}
si0=l5;
si0=i32_load(&i->m0,(U64)si0+276U);
si0=!(si0);
if(si0){
goto L80;
}
si0=l1;
f15024(i,si0);
L80:;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+284U);
l1=si0;
si0=!(si0);
if(si0){
goto L81;
}
si0=l5;
si0=i32_load(&i->m0,(U64)si0+288U);
si0=!(si0);
if(si0){
goto L81;
}
si0=l1;
f15024(i,si0);
L81:;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+188U);
l1=si0;
si0=!(si0);
if(si0){
goto L82;
}
si0=l5;
si0=i32_load(&i->m0,(U64)si0+192U);
si0=!(si0);
if(si0){
goto L82;
}
si0=l1;
f15024(i,si0);
L82:;
si0=l5;
si1=24U;
si0+=si1;
f292(i,si0);
goto L3;
L6:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+12U);
l30=si0;
if(si0){
goto L88;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0+32U);
si0=!(si0);
if(si0){
goto L87;
}
L88:;
si0=l5;
si1=0U;
i32_store(&i->m0,(U64)si0+540U,si1);
si0=l5;
sj1=4ULL;
i64_store(&i->m0,(U64)si0+532U,sj1);
si0=l6;
si1=232U;
si0+=si1;
l13=si0;
si0=l6;
si1=224U;
si0+=si1;
l20=si0;
si0=l6;
si1=220U;
si0+=si1;
l14=si0;
si0=l6;
si1=212U;
si0+=si1;
l29=si0;
si0=l6;
si1=256U;
si0+=si1;
l26=si0;
si0=l6;
si1=248U;
si0+=si1;
l15=si0;
si0=l30;
si0=!(si0);
if(si0){
goto L86;
}
si0=l4;
si1=16U;
si0+=si1;
l27=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
l35=si0;
si1=8U;
si0+=si1;
l36=si0;
si0=l35;
sj0=i64_load(&i->m0,(U64)si0);
sj1=-1ULL;
sj0^=sj1;
sj1=-9187201950435737472ULL;
sj0&=sj1;
l25=sj0;
L89:;
{
sj0=l25;
sj1=0ULL;
si0=sj0 != sj1;
if(si0){
goto L90;
}
si0=l36;
l1=si0;
L91:;
{
si0=l35;
si1=-320U;
si0+=si1;
l35=si0;
si0=l1;
sj0=i64_load(&i->m0,(U64)si0);
l19=sj0;
si0=l1;
si1=8U;
si0+=si1;
l36=si0;
l1=si0;
sj0=l19;
sj1=-1ULL;
sj0^=sj1;
sj1=-9187201950435737472ULL;
sj0&=sj1;
l25=sj0;
si0=!(sj0);
if(si0){
goto L91;
}
}
L90:;
si0=l5;
si1=296U;
si0+=si1;
si1=l6;
si2=l35;
si3=0U;
sj4=l25;
sj4=I64_CTZ(sj4);
si4=(U32)(sj4);
si5=3U;
si4>>=(si5&31);
si3-=si4;
si4=40U;
si3*=si4;
si2+=si3;
si3=-40U;
si2+=si3;
l1=si2;
si2=i32_load(&i->m0,(U64)si2);
l18=si2;
si3=l1;
si4=4U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
l12=si3;
f208(i,si0,si1,si2,si3);
si0=l5;
si0=i32_load(&i->m0,(U64)si0+296U);
l22=si0;
si0=!(si0);
if(si0){
goto L92;
}
si0=l5;
si0=i32_load(&i->m0,(U64)si0+300U);
l16=si0;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+304U);
l1=si0;
si0=!(si0);
if(si0){
goto L93;
}
si0=l22;
si1=l1;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l17=si0;
si0=l22;
l9=si0;
L94:;
{
si0=l26;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si0=!(si0);
if(si0){
goto L95;
}
si0=l15;
si0=i32_load(&i->m0,(U64)si0);
l10=si0;
si0=l1;
si1=48U;
si0*=si1;
l11=si0;
si0=l9;
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l8=si0;
si0=0U;
l1=si0;
L97:;
{
si0=l10;
si1=l1;
si0+=si1;
l2=si0;
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=l8;
si0=si0 != si1;
if(si0){
goto L98;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0);
si1=l9;
si1=i32_load(&i->m0,(U64)si1);
si2=l8;
si0=f15142(i,si0,si1,si2);
si0=!(si0);
if(si0){
goto L96;
}
L98:;
si0=l11;
si1=l1;
si2=48U;
si1+=si2;
l1=si1;
si0=si0 != si1;
if(si0){
goto L97;
}
goto L95;
}
L96:;
si0=l2;
si1=45U;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
if(si0){
goto L99;
}
si0=l2;
si1=40U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l8=si0;
si0=!(si0);
if(si0){
goto L99;
}
si0=l2;
si1=32U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si1=l8;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l23=si0;
L100:;
{
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l10=si0;
si0=l1;
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l11=si0;
si1=l12;
si0=si0 != si1;
if(si0){
goto L102;
}
si0=l10;
si1=l18;
si2=l12;
si0=f15142(i,si0,si1,si2);
si0=!(si0);
if(si0){
goto L101;
}
L102:;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+540U);
l8=si0;
si1=l5;
si1=i32_load(&i->m0,(U64)si1+536U);
si0=si0 != si1;
if(si0){
goto L103;
}
si0=l5;
si1=532U;
si0+=si1;
si1=l8;
f517(i,si0,si1);
si0=l5;
si0=i32_load(&i->m0,(U64)si0+540U);
l8=si0;
L103:;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+532U);
si1=l8;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l8=si0;
si1=l11;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l8;
si1=l10;
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=l5;
si1=i32_load(&i->m0,(U64)si1+540U);
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0+540U,si1);
L101:;
si0=l1;
si1=8U;
si0+=si1;
l1=si0;
si1=l23;
si0=si0 != si1;
if(si0){
goto L100;
}
}
L99:;
si0=l2;
si1=20U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l8=si0;
si0=!(si0);
if(si0){
goto L95;
}
si0=l2;
si1=28U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si1=3U;
si0<<=(si1&31);
l10=si0;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+536U);
si1=l5;
si1=i32_load(&i->m0,(U64)si1+540U);
l1=si1;
si0-=si1;
si1=l2;
si0=si0 >= si1;
if(si0){
goto L104;
}
si0=l5;
si1=532U;
si0+=si1;
si1=l1;
si2=l2;
f524(i,si0,si1,si2);
si0=l5;
si0=i32_load(&i->m0,(U64)si0+540U);
l1=si0;
L104:;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+532U);
si1=l1;
si2=3U;
si1<<=(si2&31);
si0+=si1;
si1=l8;
si2=l10;
si0=f15143(i,si0,si1,si2);
si0=l5;
si1=l1;
si2=l2;
si1+=si2;
i32_store(&i->m0,(U64)si0+540U,si1);
L95:;
si0=l9;
si1=8U;
si0+=si1;
l9=si0;
si1=l17;
si0=si0 != si1;
if(si0){
goto L94;
}
}
L93:;
si0=l16;
si0=!(si0);
if(si0){
goto L92;
}
si0=l22;
f15024(i,si0);
L92:;
si0=0U;
l23=si0;
si0=0U;
l2=si0;
si0=l14;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si0=!(si0);
if(si0){
goto L105;
}
si0=l29;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si0=l1;
si1=120U;
si0*=si1;
l1=si0;
L106:;
{
si0=l2;
si1=36U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=l12;
si0=si0 != si1;
if(si0){
goto L107;
}
si0=l2;
si1=32U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=l18;
si2=l12;
si0=f15142(i,si0,si1,si2);
si0=!(si0);
if(si0){
goto L105;
}
L107:;
si0=l2;
si1=120U;
si0+=si1;
l2=si0;
si0=l1;
si1=-120U;
si0+=si1;
l1=si0;
if(si0){
goto L106;
}
}
si0=0U;
l2=si0;
L105:;
si0=l13;
si0=i32_load(&i->m0,(U64)si0);
l8=si0;
si0=!(si0);
if(si0){
goto L108;
}
si0=l20;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si0=l8;
si1=272U;
si0*=si1;
l8=si0;
L109:;
{
si0=l1;
si1=188U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=l12;
si0=si0 != si1;
if(si0){
goto L110;
}
si0=l1;
si1=184U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=l18;
si2=l12;
si0=f15142(i,si0,si1,si2);
if(si0){
goto L110;
}
si0=l1;
l23=si0;
goto L108;
L110:;
si0=l1;
si1=272U;
si0+=si1;
l1=si0;
si0=l8;
si1=-272U;
si0+=si1;
l8=si0;
if(si0){
goto L109;
}
}
L108:;
si0=l6;
si0=i32_load(&i->m0,(U64)si0+8U);
l9=si0;
si0=!(si0);
if(si0){
goto L112;
}
si0=l6;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si1=l9;
si2=248U;
si1*=si2;
si0+=si1;
l10=si0;
si0=0U;
l11=si0;
L113:;
{
si0=l10;
l8=si0;
si0=l1;
si1=l10;
si0=si0 == si1;
if(si0){
goto L115;
}
si0=l1;
si1=248U;
si0+=si1;
l8=si0;
si0=l1;
sj0=i64_load(&i->m0,(U64)si0);
sj1=2ULL;
si0=sj0 != sj1;
if(si0){
goto L114;
}
L115:;
si0=l8;
l1=si0;
si0=l11;
si1=1U;
si0+=si1;
l11=si0;
si1=l9;
si0=si0 != si1;
if(si0){
goto L113;
}
goto L112;
L114:;
si0=l1;
si1=156U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=l12;
si0=si0 != si1;
if(si0){
goto L116;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+152U);
si1=l18;
si2=l12;
si0=f15142(i,si0,si1,si2);
si0=!(si0);
if(si0){
goto L111;
}
L116:;
si0=l8;
l1=si0;
si0=l11;
si1=1U;
si0+=si1;
l11=si0;
si1=l9;
si0=si0 < si1;
if(si0){
goto L113;
}
}
L112:;
si0=0U;
l1=si0;
L111:;
si0=l2;
si1=l23;
si2=l1;
si3=l23;
si1=si3?si1:si2;
si2=l2;
si0=si2?si0:si1;
l1=si0;
si0=!(si0);
if(si0){
goto L118;
}
si0=l5;
si1=16U;
si0+=si1;
si1=l1;
si2=1088112U;
si3=1087824U;
si4=1087988U;
si5=l23;
si3=si5?si3:si4;
si4=l2;
si2=si4?si2:si3;
si2=i32_load(&i->m0,(U64)si2+32U);
TF(i->t0,si2,void (*)(rustpythonInstance*,U32,U32))(i,si0,si1);
si0=l5;
si0=i32_load(&i->m0,(U64)si0+16U);
l1=si0;
si0=!(si0);
if(si0){
goto L117;
}
si0=l5;
si0=i32_load(&i->m0,(U64)si0+20U);
l2=si0;
si0=!(si0);
if(si0){
goto L117;
}
si0=l2;
si1=3U;
si0<<=(si1&31);
l2=si0;
L119:;
{
si0=l4;
si1=l1;
si1=i32_load(&i->m0,(U64)si1);
si2=l1;
si3=4U;
si2+=si3;
l8=si2;
si2=i32_load(&i->m0,(U64)si2);
si0=f309(i,si0,si1,si2);
si0=!(si0);
if(si0){
goto L120;
}
si0=l8;
si0=i32_load(&i->m0,(U64)si0);
l10=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l11=si0;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+540U);
l8=si0;
si1=l5;
si1=i32_load(&i->m0,(U64)si1+536U);
si0=si0 != si1;
if(si0){
goto L121;
}
si0=l5;
si1=532U;
si0+=si1;
si1=l8;
f517(i,si0,si1);
si0=l5;
si0=i32_load(&i->m0,(U64)si0+540U);
l8=si0;
L121:;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+532U);
si1=l8;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l8=si0;
si1=l10;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l8;
si1=l11;
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=l5;
si1=i32_load(&i->m0,(U64)si1+540U);
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0+540U,si1);
L120:;
si0=l1;
si1=8U;
si0+=si1;
l1=si0;
si0=l2;
si1=-8U;
si0+=si1;
l2=si0;
if(si0){
goto L119;
}
goto L117;
}
L118:;
si0=l5;
si1=296U;
si0+=si1;
si1=l6;
si2=l18;
si3=l12;
f211(i,si0,si1,si2,si3);
si0=l5;
si0=i32_load(&i->m0,(U64)si0+296U);
l31=si0;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+304U);
l1=si0;
si0=!(si0);
if(si0){
goto L122;
}
si0=l31;
si1=l1;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l16=si0;
si0=l31;
l17=si0;
L123:;
{
si0=0U;
l18=si0;
si0=0U;
l2=si0;
si0=l14;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si0=!(si0);
if(si0){
goto L124;
}
si0=l29;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si0=l1;
si1=120U;
si0*=si1;
l1=si0;
si0=l17;
si0=i32_load(&i->m0,(U64)si0+4U);
l8=si0;
L125:;
{
si0=l2;
si1=36U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=l8;
si0=si0 != si1;
if(si0){
goto L126;
}
si0=l2;
si1=32U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=l17;
si1=i32_load(&i->m0,(U64)si1);
si2=l8;
si0=f15142(i,si0,si1,si2);
si0=!(si0);
if(si0){
goto L124;
}
L126:;
si0=l2;
si1=120U;
si0+=si1;
l2=si0;
si0=l1;
si1=-120U;
si0+=si1;
l1=si0;
if(si0){
goto L125;
}
}
si0=0U;
l2=si0;
L124:;
si0=l13;
si0=i32_load(&i->m0,(U64)si0);
l8=si0;
si0=!(si0);
if(si0){
goto L127;
}
si0=l20;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si0=l8;
si1=272U;
si0*=si1;
l8=si0;
si0=l17;
si0=i32_load(&i->m0,(U64)si0+4U);
l10=si0;
L128:;
{
si0=l1;
si1=188U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=l10;
si0=si0 != si1;
if(si0){
goto L129;
}
si0=l1;
si1=184U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=l17;
si1=i32_load(&i->m0,(U64)si1);
si2=l10;
si0=f15142(i,si0,si1,si2);
if(si0){
goto L129;
}
si0=l1;
l18=si0;
goto L127;
L129:;
si0=l1;
si1=272U;
si0+=si1;
l1=si0;
si0=l8;
si1=-272U;
si0+=si1;
l8=si0;
if(si0){
goto L128;
}
}
L127:;
si0=l6;
si0=i32_load(&i->m0,(U64)si0+8U);
l9=si0;
si0=!(si0);
if(si0){
goto L131;
}
si0=l6;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si1=l9;
si2=248U;
si1*=si2;
si0+=si1;
l10=si0;
si0=0U;
l11=si0;
L132:;
{
si0=l10;
l8=si0;
si0=l1;
si1=l10;
si0=si0 == si1;
if(si0){
goto L134;
}
si0=l1;
si1=248U;
si0+=si1;
l8=si0;
si0=l1;
sj0=i64_load(&i->m0,(U64)si0);
sj1=2ULL;
si0=sj0 != sj1;
if(si0){
goto L133;
}
L134:;
si0=l8;
l1=si0;
si0=l11;
si1=1U;
si0+=si1;
l11=si0;
si1=l9;
si0=si0 != si1;
if(si0){
goto L132;
}
goto L131;
L133:;
si0=l1;
si1=156U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l12=si0;
si1=l17;
si1=i32_load(&i->m0,(U64)si1+4U);
si0=si0 != si1;
if(si0){
goto L135;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+152U);
si1=l17;
si1=i32_load(&i->m0,(U64)si1);
si2=l12;
si0=f15142(i,si0,si1,si2);
si0=!(si0);
if(si0){
goto L130;
}
L135:;
si0=l8;
l1=si0;
si0=l11;
si1=1U;
si0+=si1;
l11=si0;
si1=l9;
si0=si0 < si1;
if(si0){
goto L132;
}
}
L131:;
si0=0U;
l1=si0;
L130:;
si0=l2;
si1=l18;
si2=l1;
si3=l18;
si1=si3?si1:si2;
si2=l2;
si0=si2?si0:si1;
l1=si0;
si0=!(si0);
if(si0){
goto L136;
}
si0=l5;
si1=8U;
si0+=si1;
si1=l1;
si2=1088112U;
si3=1087824U;
si4=1087988U;
si5=l18;
si3=si5?si3:si4;
si4=l2;
si2=si4?si2:si3;
si2=i32_load(&i->m0,(U64)si2+32U);
TF(i->t0,si2,void (*)(rustpythonInstance*,U32,U32))(i,si0,si1);
si0=l5;
si0=i32_load(&i->m0,(U64)si0+8U);
l18=si0;
si0=!(si0);
if(si0){
goto L137;
}
si0=l5;
si0=i32_load(&i->m0,(U64)si0+12U);
l2=si0;
si0=!(si0);
if(si0){
goto L137;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0+12U);
l1=si0;
si0=!(si0);
if(si0){
goto L137;
}
si0=l18;
si1=l2;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l22=si0;
L138:;
{
si0=l1;
si0=!(si0);
if(si0){
goto L139;
}
si0=l27;
si1=l18;
si1=i32_load(&i->m0,(U64)si1);
l9=si1;
si2=l18;
si2=i32_load(&i->m0,(U64)si2+4U);
l1=si2;
sj0=f491(i,si0,si1,si2);
l19=sj0;
sj1=25ULL;
sj0>>=(sj1&63);
sj1=127ULL;
sj0&=sj1;
sj1=72340172838076673ULL;
sj0*=sj1;
l24=sj0;
sj0=l19;
si0=(U32)(sj0);
l2=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
l23=si0;
si1=-40U;
si0+=si1;
l11=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+4U);
l10=si0;
si0=0U;
l12=si0;
L140:;
{
si0=l23;
si1=l2;
si2=l10;
si1&=si2;
l8=si1;
si0+=si1;
sj0=i64_load(&i->m0,(U64)si0);
l21=sj0;
sj1=l24;
sj0^=sj1;
l19=sj0;
sj1=-1ULL;
sj0^=sj1;
sj1=l19;
sj2=-72340172838076673ULL;
sj1+=sj2;
sj0&=sj1;
sj1=-9187201950435737472ULL;
sj0&=sj1;
l19=sj0;
si0=!(sj0);
if(si0){
goto L141;
}
L143:;
{
si0=l11;
si1=0U;
sj2=l19;
sj2=I64_CTZ(sj2);
si2=(U32)(sj2);
si3=3U;
si2>>=(si3&31);
si3=l8;
si2+=si3;
si3=l10;
si2&=si3;
si1-=si2;
si2=40U;
si1*=si2;
si0+=si1;
l2=si0;
si0=i32_load(&i->m0,(U64)si0+4U);
si1=l1;
si0=si0 != si1;
if(si0){
goto L144;
}
si0=l9;
si1=l2;
si1=i32_load(&i->m0,(U64)si1);
si2=l1;
si0=f15142(i,si0,si1,si2);
si0=!(si0);
if(si0){
goto L142;
}
L144:;
sj0=l19;
sj1=-1ULL;
sj0+=sj1;
sj1=l19;
sj0&=sj1;
l19=sj0;
si0=!(sj0);
if(si0){
goto L141;
}
goto L143;
}
L142:;
si0=l18;
si0=i32_load(&i->m0,(U64)si0+4U);
l2=si0;
si0=l18;
si0=i32_load(&i->m0,(U64)si0);
l8=si0;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+540U);
l1=si0;
si1=l5;
si1=i32_load(&i->m0,(U64)si1+536U);
si0=si0 != si1;
if(si0){
goto L145;
}
si0=l5;
si1=532U;
si0+=si1;
si1=l1;
f517(i,si0,si1);
si0=l5;
si0=i32_load(&i->m0,(U64)si0+540U);
l1=si0;
L145:;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+532U);
si1=l1;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l1=si0;
si1=l2;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l1;
si1=l8;
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=l5;
si1=i32_load(&i->m0,(U64)si1+540U);
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0+540U,si1);
goto L139;
L141:;
sj0=l21;
sj1=l21;
sj2=1ULL;
sj1<<=(sj2&63);
sj0&=sj1;
sj1=-9187201950435737472ULL;
sj0&=sj1;
si0=!(sj0);
si0=!(si0);
if(si0){
goto L139;
}
si0=l8;
si1=l12;
si2=8U;
si1+=si2;
l12=si1;
si0+=si1;
l2=si0;
goto L140;
}
L139:;
si0=l18;
si1=8U;
si0+=si1;
l18=si0;
si1=l22;
si0=si0 == si1;
if(si0){
goto L137;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0+12U);
l1=si0;
goto L138;
}
L137:;
si0=l17;
si1=8U;
si0+=si1;
l17=si0;
si1=l16;
si0=si0 != si1;
if(si0){
goto L123;
}
goto L122;
L136:;
}
si0=1087780U;
si1=43U;
si2=1088268U;
f604(i,si0,si1,si2);
UNREACHABLE;
L122:;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+300U);
si0=!(si0);
if(si0){
goto L117;
}
si0=l31;
f15024(i,si0);
L117:;
sj0=l25;
sj1=-1ULL;
sj0+=sj1;
sj1=l25;
sj0&=sj1;
l25=sj0;
si0=l30;
si1=-1U;
si0+=si1;
l30=si0;
if(si0){
goto L89;
}
}
si0=l5;
si0=i32_load(&i->m0,(U64)si0+540U);
l1=si0;
si0=!(si0);
if(si0){
goto L86;
}
si0=l5;
si0=i32_load(&i->m0,(U64)si0+532U);
l11=si0;
si1=l1;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l9=si0;
L146:;
{
si0=l11;
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l8=si0;
si0=l11;
si0=i32_load(&i->m0,(U64)si0);
l10=si0;
si0=l26;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si0=!(si0);
if(si0){
goto L150;
}
si0=l15;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si0=l2;
si1=48U;
si0*=si1;
l2=si0;
L151:;
{
si0=l1;
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=l8;
si0=si0 != si1;
if(si0){
goto L152;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
si1=l10;
si2=l8;
si0=f15142(i,si0,si1,si2);
si0=!(si0);
if(si0){
goto L149;
}
L152:;
si0=l1;
si1=48U;
si0+=si1;
l1=si0;
si0=l2;
si1=-48U;
si0+=si1;
l2=si0;
if(si0){
goto L151;
}
}
L150:;
si0=l4;
si1=l10;
si2=l8;
si0=f309(i,si0,si1,si2);
l1=si0;
si0=!(si0);
if(si0){
goto L147;
}
si0=l1;
sj0=i64_load(&i->m0,(U64)si0);
si0=!(sj0);
if(si0){
goto L147;
}
si0=l5;
si1=24U;
si0+=si1;
si1=l6;
si2=l11;
si2=i32_load(&i->m0,(U64)si2);
si3=l11;
si4=4U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si4=l4;
f300(i,si0,si1,si2,si3,si4);
goto L148;
L149:;
si0=l5;
si1=296U;
si0+=si1;
si1=l6;
si2=l10;
si3=l8;
f211(i,si0,si1,si2,si3);
si0=l5;
si0=i32_load(&i->m0,(U64)si0+304U);
si1=3U;
si0<<=(si1&31);
l2=si0;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+300U);
l12=si0;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+296U);
l18=si0;
l1=si0;
L153:;
{
si0=l2;
if(si0){
goto L154;
}
si0=l12;
si0=!(si0);
if(si0){
goto L147;
}
si0=l18;
f15024(i,si0);
goto L147;
L154:;
si0=l2;
si1=-8U;
si0+=si1;
l2=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
l8=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l10=si0;
si0=l1;
si1=8U;
si0+=si1;
l1=si0;
si0=l4;
si1=l10;
si2=l8;
si0=f439(i,si0,si1,si2);
si0=!(si0);
if(si0){
goto L153;
}
}
si0=l5;
si1=24U;
si0+=si1;
si1=l6;
si2=l10;
si3=l8;
si4=l4;
f300(i,si0,si1,si2,si3,si4);
si0=l12;
si0=!(si0);
if(si0){
goto L148;
}
si0=l18;
f15024(i,si0);
L148:;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+536U);
si0=!(si0);
if(si0){
goto L155;
}
si0=l5;
si0=i32_load(&i->m0,(U64)si0+532U);
f15024(i,si0);
L155:;
si0=l5;
si0=i32_load8_u(&i->m0,(U64)si0+48U);
l1=si0;
si1=20U;
si0=si0 == si1;
if(si0){
goto L85;
}
si0=l0;
si1=l5;
si1=i32_load16_u(&i->m0,(U64)si1+49U);
i32_store16(&i->m0,(U64)si0+25U,si1);
si0=l5;
si1=424U;
si0+=si1;
si1=16U;
si0+=si1;
si1=l5;
si2=24U;
si1+=si2;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
l19=sj1;
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=424U;
si0+=si1;
si1=8U;
si0+=si1;
si1=l5;
si2=24U;
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
si2=24U;
si1+=si2;
si2=27U;
si1+=si2;
si1=i32_load8_u(&i->m0,(U64)si1);
i32_store8(&i->m0,(U64)si0,si1);
si0=l5;
si1=l5;
sj1=i64_load(&i->m0,(U64)si1+24U);
l24=sj1;
i64_store(&i->m0,(U64)si0+424U,sj1);
si0=l0;
si1=16U;
si0+=si1;
sj1=l19;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=8U;
si0+=si1;
sj1=l21;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
sj1=l24;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=l1;
i32_store8(&i->m0,(U64)si0+24U,si1);
goto L3;
L147:;
si0=l11;
si1=8U;
si0+=si1;
l11=si0;
si1=l9;
si0=si0 == si1;
if(si0){
goto L86;
}
goto L146;
}
L87:;
si0=l6;
si0=i32_load8_u(&i->m0,(U64)si0+16U);
si1=4U;
si0&=si1;
if(si0){
goto L84;
}
si0=l5;
si1=0U;
i32_store(&i->m0,(U64)si0+540U,si1);
si0=l5;
sj1=4ULL;
i64_store(&i->m0,(U64)si0+532U,sj1);
si0=l6;
si1=232U;
si0+=si1;
l13=si0;
si0=l6;
si1=224U;
si0+=si1;
l20=si0;
si0=l6;
si1=220U;
si0+=si1;
l14=si0;
si0=l6;
si1=212U;
si0+=si1;
l29=si0;
si0=l6;
si1=256U;
si0+=si1;
l26=si0;
si0=l6;
si1=248U;
si0+=si1;
l15=si0;
L86:;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+536U);
si0=!(si0);
if(si0){
goto L85;
}
si0=l5;
si0=i32_load(&i->m0,(U64)si0+532U);
f15024(i,si0);
L85:;
si0=l7;
si1=1U;
si0=si0 == si1;
if(si0){
goto L83;
}
si0=l6;
si0=i32_load8_u(&i->m0,(U64)si0+16U);
si1=1U;
si0&=si1;
si0=!(si0);
if(si0){
goto L156;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L83;
}
L156:;
si0=l5;
si1=24U;
si0+=si1;
si1=l6;
si2=l4;
f299(i,si0,si1,si2);
si0=l5;
si0=i32_load8_u(&i->m0,(U64)si0+48U);
l1=si0;
si1=20U;
si0=si0 == si1;
if(si0){
goto L83;
}
si0=l0;
si1=l5;
si1=i32_load16_u(&i->m0,(U64)si1+49U);
i32_store16(&i->m0,(U64)si0+25U,si1);
si0=l5;
si1=448U;
si0+=si1;
si1=16U;
si0+=si1;
si1=l5;
si2=24U;
si1+=si2;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
l19=sj1;
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=448U;
si0+=si1;
si1=8U;
si0+=si1;
si1=l5;
si2=24U;
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
si2=24U;
si1+=si2;
si2=27U;
si1+=si2;
si1=i32_load8_u(&i->m0,(U64)si1);
i32_store8(&i->m0,(U64)si0,si1);
si0=l5;
si1=l5;
sj1=i64_load(&i->m0,(U64)si1+24U);
l24=sj1;
i64_store(&i->m0,(U64)si0+448U,sj1);
si0=l0;
si1=16U;
si0+=si1;
sj1=l19;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=8U;
si0+=si1;
sj1=l21;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
sj1=l24;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=l1;
i32_store8(&i->m0,(U64)si0+24U,si1);
goto L3;
L84:;
si0=l5;
si1=0U;
i32_store(&i->m0,(U64)si0+540U,si1);
si0=l5;
sj1=1ULL;
i64_store(&i->m0,(U64)si0+532U,sj1);
si0=l5;
si1=24U;
si0+=si1;
si1=l5;
si2=532U;
si1+=si2;
si2=1087948U;
si3=l6;
si4=1U;
si5=0U;
f274(i,si0,si1,si2,si3,si4,si5);
si0=l5;
si0=i32_load8_u(&i->m0,(U64)si0+48U);
l1=si0;
si1=20U;
si0=si0 == si1;
if(si0){
goto L158;
}
si0=l0;
si1=l5;
si1=i32_load16_u(&i->m0,(U64)si1+49U);
i32_store16(&i->m0,(U64)si0+25U,si1);
si0=l5;
si1=400U;
si0+=si1;
si1=16U;
si0+=si1;
si1=l5;
si2=24U;
si1+=si2;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
l19=sj1;
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=400U;
si0+=si1;
si1=8U;
si0+=si1;
si1=l5;
si2=24U;
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
si2=24U;
si1+=si2;
si2=27U;
si1+=si2;
si1=i32_load8_u(&i->m0,(U64)si1);
i32_store8(&i->m0,(U64)si0,si1);
si0=l5;
si1=l5;
sj1=i64_load(&i->m0,(U64)si1+24U);
l24=sj1;
i64_store(&i->m0,(U64)si0+400U,sj1);
si0=l0;
si1=16U;
si0+=si1;
sj1=l19;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=8U;
si0+=si1;
sj1=l21;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
sj1=l24;
i64_store(&i->m0,(U64)si0,sj1);
goto L157;
L158:;
si0=l5;
si1=24U;
si0+=si1;
si1=l5;
si1=i32_load(&i->m0,(U64)si1+532U);
si2=l5;
si2=i32_load(&i->m0,(U64)si2+540U);
f63(i,si0,si1,si2);
si0=l5;
si1=296U;
si0+=si1;
si1=l5;
si2=24U;
si1+=si2;
f451(i,si0,si1);
si0=l0;
si1=8U;
si0+=si1;
si1=l5;
si2=296U;
si1+=si2;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l5;
sj1=i64_load(&i->m0,(U64)si1+296U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=12U;
l1=si0;
L157:;
si0=l0;
si1=l1;
i32_store8(&i->m0,(U64)si0+24U,si1);
si0=l5;
si0=i32_load(&i->m0,(U64)si0+536U);
si0=!(si0);
if(si0){
goto L3;
}
si0=l5;
si0=i32_load(&i->m0,(U64)si0+532U);
f15024(i,si0);
goto L3;
L83:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+12U);
l35=si0;
si0=!(si0);
if(si0){
goto L160;
}
si0=l5;
si1=49U;
si0+=si1;
l52=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
l11=si0;
si1=8U;
si0+=si1;
l23=si0;
si0=l11;
sj0=i64_load(&i->m0,(U64)si0);
sj1=-1ULL;
sj0^=sj1;
sj1=-9187201950435737472ULL;
sj0&=sj1;
l19=sj0;
si0=l6;
si1=18U;
si0+=si1;
l31=si0;
L161:;
{
sj0=l19;
sj1=0ULL;
si0=sj0 != sj1;
if(si0){
goto L162;
}
si0=l23;
l1=si0;
L163:;
{
si0=l11;
si1=-320U;
si0+=si1;
l11=si0;
si0=l1;
sj0=i64_load(&i->m0,(U64)si0);
l19=sj0;
si0=l1;
si1=8U;
si0+=si1;
l23=si0;
l1=si0;
sj0=l19;
sj1=-1ULL;
sj0^=sj1;
sj1=-9187201950435737472ULL;
sj0&=sj1;
l19=sj0;
si0=!(sj0);
if(si0){
goto L163;
}
}
L162:;
si0=l11;
si1=0U;
sj2=l19;
sj2=I64_CTZ(sj2);
si2=(U32)(sj2);
si3=3U;
si2>>=(si3&31);
si1-=si2;
si2=40U;
si1*=si2;
si0+=si1;
l27=si0;
si1=-36U;
si0+=si1;
l22=si0;
si0=l27;
si1=-32U;
si0+=si1;
l36=si0;
si0=l27;
si1=-40U;
si0+=si1;
l10=si0;
si0=l13;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si0=!(si0);
if(si0){
goto L166;
}
si0=l20;
si0=i32_load(&i->m0,(U64)si0);
l9=si0;
si0=l1;
si1=272U;
si0*=si1;
l12=si0;
si0=l22;
si0=i32_load(&i->m0,(U64)si0);
l8=si0;
si0=0U;
l1=si0;
L167:;
{
si0=l9;
si1=l1;
si0+=si1;
l2=si0;
si1=188U;
si0+=si1;
l18=si0;
si0=i32_load(&i->m0,(U64)si0);
si1=l8;
si0=si0 != si1;
if(si0){
goto L168;
}
si0=l2;
si1=184U;
si0+=si1;
l17=si0;
si0=i32_load(&i->m0,(U64)si0);
si1=l10;
si1=i32_load(&i->m0,(U64)si1);
si2=l8;
si0=f15142(i,si0,si1,si2);
si0=!(si0);
if(si0){
goto L165;
}
L168:;
si0=l12;
si1=l1;
si2=272U;
si1+=si2;
l1=si1;
si0=si0 != si1;
if(si0){
goto L167;
}
}
L166:;
si0=l14;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si0=!(si0);
if(si0){
goto L170;
}
si0=l29;
si0=i32_load(&i->m0,(U64)si0);
l9=si0;
si0=l1;
si1=120U;
si0*=si1;
l12=si0;
si0=l22;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si0=0U;
l1=si0;
L171:;
{
si0=l9;
si1=l1;
si0+=si1;
l8=si0;
si1=36U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=l2;
si0=si0 != si1;
if(si0){
goto L172;
}
si0=l8;
si1=32U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=l10;
si1=i32_load(&i->m0,(U64)si1);
si2=l2;
si0=f15142(i,si0,si1,si2);
si0=!(si0);
if(si0){
goto L169;
}
L172:;
si0=l12;
si1=l1;
si2=120U;
si1+=si2;
l1=si1;
si0=si0 != si1;
if(si0){
goto L171;
}
}
L170:;
si0=l6;
si0=i32_load(&i->m0,(U64)si0+8U);
l12=si0;
si0=!(si0);
if(si0){
goto L186;
}
si0=l6;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si1=l12;
si2=248U;
si1*=si2;
si0+=si1;
l8=si0;
si0=0U;
l9=si0;
L187:;
{
si0=l8;
l2=si0;
si0=l1;
si1=l8;
si0=si0 == si1;
if(si0){
goto L189;
}
si0=l1;
si1=248U;
si0+=si1;
l2=si0;
si0=l1;
sj0=i64_load(&i->m0,(U64)si0);
l21=sj0;
sj1=2ULL;
si0=sj0 != sj1;
if(si0){
goto L188;
}
L189:;
si0=l2;
l1=si0;
si0=l9;
si1=1U;
si0+=si1;
l9=si0;
si1=l12;
si0=si0 != si1;
if(si0){
goto L187;
}
goto L186;
L188:;
si0=l1;
si1=156U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l18=si0;
si1=l22;
si1=i32_load(&i->m0,(U64)si1);
si0=si0 != si1;
if(si0){
goto L190;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+152U);
si1=l10;
si1=i32_load(&i->m0,(U64)si1);
si2=l18;
si0=f15142(i,si0,si1,si2);
si0=!(si0);
if(si0){
goto L185;
}
L190:;
si0=l2;
l1=si0;
si0=l9;
si1=1U;
si0+=si1;
l9=si0;
si1=l12;
si0=si0 < si1;
if(si0){
goto L187;
}
}
L186:;
si0=l26;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si0=!(si0);
if(si0){
goto L191;
}
si0=l15;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si0=l2;
si1=48U;
si0*=si1;
l2=si0;
si0=l22;
si0=i32_load(&i->m0,(U64)si0);
l8=si0;
L192:;
{
si0=l1;
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=l8;
si0=si0 != si1;
if(si0){
goto L193;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
si1=l10;
si1=i32_load(&i->m0,(U64)si1);
si2=l8;
si0=f15142(i,si0,si1,si2);
si0=!(si0);
if(si0){
goto L184;
}
L193:;
si0=l1;
si1=48U;
si0+=si1;
l1=si0;
si0=l2;
si1=-48U;
si0+=si1;
l2=si0;
if(si0){
goto L192;
}
}
L191:;
si0=1087560U;
si1=99U;
si2=1088284U;
f634(i,si0,si1,si2);
UNREACHABLE;
L185:;
si0=l10;
si1=36U;
si0+=si1;
l30=si0;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si0=l10;
si1=28U;
si0+=si1;
l7=si0;
si0=i32_load(&i->m0,(U64)si0);
l8=si0;
sj0=l21;
sj1=0ULL;
si0=sj0 != sj1;
if(si0){
goto L194;
}
si0=l2;
sj0=(U64)(si0);
l24=sj0;
goto L181;
L194:;
si0=l1;
sj0=i64_load(&i->m0,(U64)si0+8U);
l21=sj0;
si0=l1;
si1=188U;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=2U;
si0&=si1;
si0=!(si0);
if(si0){
goto L199;
}
sj0=l21;
si0=!(sj0);
if(si0){
goto L198;
}
si0=l2;
sj0=(U64)(si0);
l24=sj0;
sj1=l21;
sj0=REM_U(sj0,sj1);
si0=!(sj0);
if(si0){
goto L181;
}
sj0=l21;
si0=(U32)(sj0);
l8=si0;
si0=!(si0);
if(si0){
goto L196;
}
si0=l2;
si1=l8;
si0=REM_U(si0,si1);
l12=si0;
si0=l2;
si1=1U;
si0=si0 != si1;
if(si0){
goto L195;
}
si0=l12;
l8=si0;
goto L183;
L199:;
sj0=l21;
si1=l2;
sj1=(U64)(si1);
si0=sj0 != sj1;
if(si0){
goto L197;
}
sj0=l21;
l24=sj0;
goto L181;
L198:;
si0=1088320U;
si1=57U;
si2=1088300U;
f604(i,si0,si1,si2);
UNREACHABLE;
L197:;
si0=1U;
l8=si0;
si0=l2;
si1=1U;
si0=si0 == si1;
if(si0){
goto L183;
}
si0=1088396U;
l10=si0;
si0=3U;
l9=si0;
si0=l2;
l8=si0;
goto L182;
L196:;
si0=1088320U;
si1=57U;
si2=1088380U;
f604(i,si0,si1,si2);
UNREACHABLE;
L195:;
si0=1U;
l8=si0;
si0=l12;
si1=1U;
si0=si0 == si1;
if(si0){
goto L183;
}
si0=1088396U;
l10=si0;
si0=3U;
l9=si0;
si0=l12;
l8=si0;
goto L182;
L184:;
si0=l1;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si0=!(si0);
if(si0){
goto L164;
}
si0=l1;
si1=16U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=3U;
si0<<=(si1&31);
l1=si0;
L200:;
{
si0=l1;
si0=!(si0);
if(si0){
goto L164;
}
si0=l1;
si1=-8U;
si0+=si1;
l1=si0;
si0=l2;
si1=4U;
si0+=si1;
l8=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0);
l10=si0;
si0=l2;
si1=8U;
si0+=si1;
l2=si0;
si0=l4;
si1=l10;
si2=l8;
si2=i32_load(&i->m0,(U64)si2);
si0=f439(i,si0,si1,si2);
if(si0){
goto L200;
}
}
si0=l5;
si1=296U;
si0+=si1;
si1=l6;
si2=l4;
si3=0U;
si4=l1;
f301(i,si0,si1,si2,si3,si4);
si0=l5;
si0=i32_load8_u(&i->m0,(U64)si0+320U);
l10=si0;
si1=20U;
si0=si0 != si1;
if(si0){
goto L4;
}
goto L160;
L183:;
si0=1088399U;
l10=si0;
si0=2U;
l9=si0;
L182:;
si0=l5;
si1=532U;
si0+=si1;
si1=l6;
si2=l4;
si3=0U;
si4=l1;
f586(i,si0,si1,si2,si3,si4);
si0=l5;
si1=24U;
si0+=si1;
si1=l1;
si2=1087988U;
sj3=l21;
si4=l8;
si5=l10;
si6=l9;
si7=l5;
si7=i32_load(&i->m0,(U64)si7+532U);
l2=si7;
si8=l5;
si8=i32_load(&i->m0,(U64)si8+540U);
si9=l6;
sj9=i64_load(&i->m0,(U64)si9+16U);
l24=sj9;
si9=(U32)(sj9);
si10=23U;
si9>>=(si10&31);
si10=1U;
si9&=si10;
si10=2U;
sj11=l24;
sj12=33554432ULL;
sj11&=sj12;
si11=!(sj11);
si9=si11?si9:si10;
f575(i,si0,si1,si2,sj3,si4,si5,si6,si7,si8,si9);
si0=l5;
si0=i32_load(&i->m0,(U64)si0+536U);
si0=!(si0);
if(si0){
goto L180;
}
si0=l2;
f15024(i,si0);
goto L180;
L181:;
si0=l1;
sj0=i64_load(&i->m0,(U64)si0+16U);
si0=!(sj0);
if(si0){
goto L205;
}
si0=l1;
si1=24U;
si0+=si1;
sj0=i64_load(&i->m0,(U64)si0);
sj1=l24;
si0=sj0 < sj1;
if(si0){
goto L204;
}
L205:;
si0=l1;
sj0=i64_load(&i->m0,(U64)si0+32U);
si0=!(sj0);
si0=!(si0);
if(si0){
goto L203;
}
si0=1U;
l8=si0;
goto L202;
L204:;
si0=l2;
si0=!(si0);
if(si0){
goto L176;
}
si0=l5;
si1=532U;
si0+=si1;
si1=l8;
si2=l2;
si3=12U;
si2*=si3;
si1+=si2;
si2=-12U;
si1+=si2;
l2=si1;
si1=i32_load(&i->m0,(U64)si1);
si2=l2;
si3=8U;
si2+=si3;
si2=i32_load(&i->m0,(U64)si2);
f686(i,si0,si1,si2);
si0=l5;
si0=i32_load(&i->m0,(U64)si0+532U);
if(si0){
goto L177;
}
si0=l5;
si0=i32_load(&i->m0,(U64)si0+540U);
l2=si0;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+536U);
l8=si0;
si0=l5;
si1=532U;
si0+=si1;
si1=l6;
si2=l4;
si3=0U;
si4=l1;
f586(i,si0,si1,si2,si3,si4);
si0=l5;
si1=24U;
si0+=si1;
si1=l8;
si2=l2;
si3=l1;
si4=1087988U;
si5=l5;
si5=i32_load(&i->m0,(U64)si5+532U);
l10=si5;
si6=l5;
si6=i32_load(&i->m0,(U64)si6+540U);
si7=l6;
sj7=i64_load(&i->m0,(U64)si7+16U);
l21=sj7;
si7=(U32)(sj7);
si8=23U;
si7>>=(si8&31);
si8=1U;
si7&=si8;
si8=2U;
sj9=l21;
sj10=33554432ULL;
sj9&=sj10;
si9=!(sj9);
si7=si9?si7:si8;
f572(i,si0,si1,si2,si3,si4,si5,si6,si7);
si0=l5;
si0=i32_load(&i->m0,(U64)si0+536U);
si0=!(si0);
if(si0){
goto L180;
}
si0=l10;
f15024(i,si0);
goto L180;
L203:;
si0=l1;
si1=40U;
si0+=si1;
sj0=i64_load(&i->m0,(U64)si0);
l21=sj0;
sj1=l24;
si0=sj0 > sj1;
if(si0){
goto L201;
}
sj0=l21;
sj1=0ULL;
si0=sj0 != sj1;
l8=si0;
L202:;
si0=l8;
si0=!(si0);
if(si0){
goto L179;
}
si0=l2;
if(si0){
goto L179;
}
si0=l5;
si1=532U;
si0+=si1;
si1=l6;
si2=l4;
si3=0U;
si4=l1;
f586(i,si0,si1,si2,si3,si4);
si0=l5;
si1=24U;
si0+=si1;
si1=l1;
si2=1087988U;
si3=l5;
si3=i32_load(&i->m0,(U64)si3+532U);
l2=si3;
si4=l5;
si4=i32_load(&i->m0,(U64)si4+540U);
si5=l6;
sj5=i64_load(&i->m0,(U64)si5+16U);
l21=sj5;
si5=(U32)(sj5);
si6=23U;
si5>>=(si6&31);
si6=1U;
si5&=si6;
si6=2U;
sj7=l21;
sj8=33554432ULL;
sj7&=sj8;
si7=!(sj7);
si5=si7?si5:si6;
f565(i,si0,si1,si2,si3,si4,si5);
si0=l5;
si0=i32_load(&i->m0,(U64)si0+536U);
si0=!(si0);
if(si0){
goto L180;
}
si0=l2;
f15024(i,si0);
goto L180;
L201:;
si0=l5;
si1=532U;
si0+=si1;
si1=l6;
si2=l4;
si3=0U;
si4=l1;
f586(i,si0,si1,si2,si3,si4);
si0=l5;
si1=24U;
si0+=si1;
si1=l1;
si2=1087988U;
sj3=l21;
si4=l2;
si5=l5;
si5=i32_load(&i->m0,(U64)si5+532U);
l8=si5;
si6=l5;
si6=i32_load(&i->m0,(U64)si6+540U);
si7=l6;
sj7=i64_load(&i->m0,(U64)si7+16U);
l24=sj7;
si7=(U32)(sj7);
si8=23U;
si7>>=(si8&31);
si8=1U;
si7&=si8;
si8=2U;
sj9=l24;
sj10=33554432ULL;
sj9&=sj10;
si9=!(sj9);
si7=si9?si7:si8;
f573(i,si0,si1,si2,sj3,si4,si5,si6,si7);
si0=l5;
si0=i32_load(&i->m0,(U64)si0+536U);
si0=!(si0);
if(si0){
goto L180;
}
si0=l8;
f15024(i,si0);
L180:;
si0=l5;
si0=i32_load8_u(&i->m0,(U64)si0+48U);
l10=si0;
si1=20U;
si0=si0 != si1;
if(si0){
goto L178;
}
L179:;
si0=l36;
sj0=i64_load(&i->m0,(U64)si0);
sj1=2ULL;
si0=sj0 < sj1;
if(si0){
goto L206;
}
si0=l1;
si1=188U;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=2U;
si0&=si1;
if(si0){
goto L206;
}
si0=l5;
si1=532U;
si0+=si1;
si1=l6;
si2=l4;
si3=0U;
si4=l1;
f586(i,si0,si1,si2,si3,si4);
si0=l5;
si1=24U;
si0+=si1;
si1=l1;
si2=1087988U;
si3=l5;
si3=i32_load(&i->m0,(U64)si3+532U);
l2=si3;
si4=l5;
si4=i32_load(&i->m0,(U64)si4+540U);
si5=l6;
sj5=i64_load(&i->m0,(U64)si5+16U);
l21=sj5;
si5=(U32)(sj5);
si6=23U;
si5>>=(si6&31);
si6=1U;
si5&=si6;
si6=2U;
sj7=l21;
sj8=33554432ULL;
sj7&=sj8;
si7=!(sj7);
si5=si7?si5:si6;
f576(i,si0,si1,si2,si3,si4,si5);
si0=l5;
si0=i32_load(&i->m0,(U64)si0+536U);
si0=!(si0);
if(si0){
goto L207;
}
si0=l2;
f15024(i,si0);
L207:;
si0=l5;
si0=i32_load8_u(&i->m0,(U64)si0+48U);
l10=si0;
si1=20U;
si0=si0 != si1;
if(si0){
goto L173;
}
L206:;
si0=l30;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si0=!(si0);
if(si0){
goto L208;
}
si0=l7;
si0=i32_load(&i->m0,(U64)si0);
l18=si0;
si1=l2;
si2=12U;
si1*=si2;
si0+=si1;
l33=si0;
L209:;
{
si0=l31;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=1U;
si0&=si1;
si0=!(si0);
if(si0){
goto L218;
}
si0=l5;
si1=532U;
si0+=si1;
si1=l18;
si1=i32_load(&i->m0,(U64)si1);
si2=l18;
si2=i32_load(&i->m0,(U64)si2+8U);
f686(i,si0,si1,si2);
si0=l5;
si0=i32_load(&i->m0,(U64)si0+532U);
if(si0){
goto L217;
}
L218:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+116U);
l22=si0;
si0=!(si0);
if(si0){
goto L212;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+124U);
l27=si0;
si0=l5;
si1=508U;
si0+=si1;
si1=l18;
si1=i32_load(&i->m0,(U64)si1);
si2=l18;
si2=i32_load(&i->m0,(U64)si2+8U);
f63(i,si0,si1,si2);
si0=l1;
si1=190U;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=1U;
si0&=si1;
si0=!(si0);
if(si0){
goto L215;
}
si0=l27;
if(si0){
goto L216;
}
si0=0U;
l27=si0;
goto L214;
L217:;
si0=l5;
si1=532U;
si0+=si1;
si1=l6;
si2=l4;
si3=0U;
si4=l1;
f586(i,si0,si1,si2,si3,si4);
si0=l5;
si1=24U;
si0+=si1;
si1=l5;
si1=i32_load(&i->m0,(U64)si1+532U);
l2=si1;
si2=l5;
si2=i32_load(&i->m0,(U64)si2+540U);
si3=l6;
sj3=i64_load(&i->m0,(U64)si3+16U);
l21=sj3;
si3=(U32)(sj3);
si4=23U;
si3>>=(si4&31);
si4=1U;
si3&=si4;
si4=2U;
sj5=l21;
sj6=33554432ULL;
sj5&=sj6;
si5=!(sj5);
si3=si5?si3:si4;
f571(i,si0,si1,si2,si3);
si0=l5;
si0=i32_load(&i->m0,(U64)si0+536U);
si0=!(si0);
if(si0){
goto L211;
}
si0=l2;
f15024(i,si0);
goto L211;
L216:;
si0=l22;
si1=l27;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l16=si0;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+508U);
l36=si0;
si1=l5;
si1=i32_load(&i->m0,(U64)si1+512U);
l34=si1;
si2=l36;
si0=si2?si0:si1;
l12=si0;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+516U);
l10=si0;
si0=l22;
l17=si0;
L219:;
{
si0=l10;
si1=l17;
si2=4U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
si0=si0 != si1;
if(si0){
goto L220;
}
si0=l10;
if(si0){
goto L222;
}
si0=0U;
l2=si0;
goto L221;
L222:;
si0=l17;
si0=i32_load(&i->m0,(U64)si0);
l9=si0;
si0=0U;
l2=si0;
L223:;
{
si0=l9;
si1=l2;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
l8=si0;
si1=-65U;
si0+=si1;
si1=255U;
si0&=si1;
si1=26U;
si0=si0 < si1;
si1=5U;
si0<<=(si1&31);
si1=l8;
si0|=si1;
si1=255U;
si0&=si1;
si1=l12;
si2=l2;
si1+=si2;
si1=i32_load8_u(&i->m0,(U64)si1);
l8=si1;
si2=-65U;
si1+=si2;
si2=255U;
si1&=si2;
si2=26U;
si1=si1 < si2;
si2=5U;
si1<<=(si2&31);
si2=l8;
si1|=si2;
si2=255U;
si1&=si2;
si0=si0 != si1;
if(si0){
goto L221;
}
si0=l10;
si1=l2;
si2=1U;
si1+=si2;
l2=si1;
si0=si0 != si1;
if(si0){
goto L223;
}
goto L213;
}
L221:;
si0=l2;
si1=l10;
si0=si0 >= si1;
if(si0){
goto L213;
}
L220:;
si0=l17;
si1=8U;
si0+=si1;
l17=si0;
si1=l16;
si0=si0 != si1;
if(si0){
goto L219;
}
goto L214;
}
L215:;
si0=l27;
if(si0){
goto L224;
}
si0=0U;
l27=si0;
goto L214;
L224:;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+508U);
l36=si0;
si1=l5;
si1=i32_load(&i->m0,(U64)si1+512U);
l34=si1;
si2=l36;
si0=si2?si0:si1;
l9=si0;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+516U);
l10=si0;
si0=l27;
si1=3U;
si0<<=(si1&31);
l8=si0;
si0=l22;
l2=si0;
L225:;
{
si0=l10;
si1=l2;
si2=4U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
si0=si0 != si1;
if(si0){
goto L226;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0);
si1=l9;
si2=l10;
si0=f15142(i,si0,si1,si2);
si0=!(si0);
if(si0){
goto L213;
}
L226:;
si0=l2;
si1=8U;
si0+=si1;
l2=si0;
si0=l8;
si1=-8U;
si0+=si1;
l8=si0;
if(si0){
goto L225;
}
}
L214:;
si0=l5;
si1=520U;
si0+=si1;
si1=8U;
si0+=si1;
si1=l5;
si2=508U;
si1+=si2;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=l5;
sj1=i64_load(&i->m0,(U64)si1+508U);
i64_store(&i->m0,(U64)si0+520U,sj1);
si0=l5;
si1=532U;
si0+=si1;
si1=l6;
si2=l4;
si3=0U;
si4=l1;
f586(i,si0,si1,si2,si3,si4);
si0=l5;
si1=24U;
si0+=si1;
si1=l5;
si2=520U;
si1+=si2;
si2=l22;
si3=l27;
si4=l1;
si5=1087988U;
si6=l5;
si6=i32_load(&i->m0,(U64)si6+532U);
l2=si6;
si7=l5;
si7=i32_load(&i->m0,(U64)si7+540U);
si8=l6;
sj8=i64_load(&i->m0,(U64)si8+16U);
l21=sj8;
si8=(U32)(sj8);
si9=23U;
si8>>=(si9&31);
si9=1U;
si8&=si9;
si9=2U;
sj10=l21;
sj11=33554432ULL;
sj10&=sj11;
si10=!(sj10);
si8=si10?si8:si9;
f566(i,si0,si1,si2,si3,si4,si5,si6,si7,si8);
si0=l5;
si0=i32_load(&i->m0,(U64)si0+536U);
si0=!(si0);
if(si0){
goto L211;
}
si0=l2;
f15024(i,si0);
goto L211;
L213:;
si0=l36;
si0=!(si0);
if(si0){
goto L212;
}
si0=l34;
si0=!(si0);
if(si0){
goto L212;
}
si0=l36;
f15024(i,si0);
L212:;
si0=l1;
si0=i32_load8_u(&i->m0,(U64)si0+188U);
si1=4U;
si0&=si1;
if(si0){
goto L230;
}
si0=l18;
si0=i32_load(&i->m0,(U64)si0+8U);
if(si0){
goto L230;
}
si0=l4;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+152U);
si2=l1;
si2=i32_load(&i->m0,(U64)si2+156U);
si0=f439(i,si0,si1,si2);
if(si0){
goto L229;
}
L230:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+64U);
l2=si0;
if(si0){
goto L228;
}
goto L227;
L229:;
si0=l5;
si1=532U;
si0+=si1;
si1=l6;
si2=l4;
si3=0U;
si4=l1;
f586(i,si0,si1,si2,si3,si4);
si0=l5;
si1=24U;
si0+=si1;
si1=l1;
si2=1087988U;
si3=l5;
si3=i32_load(&i->m0,(U64)si3+532U);
l2=si3;
si4=l5;
si4=i32_load(&i->m0,(U64)si4+540U);
si5=l6;
sj5=i64_load(&i->m0,(U64)si5+16U);
l21=sj5;
si5=(U32)(sj5);
si6=23U;
si5>>=(si6&31);
si6=1U;
si5&=si6;
si6=2U;
sj7=l21;
sj8=33554432ULL;
sj7&=sj8;
si7=!(sj7);
si5=si7?si5:si6;
f565(i,si0,si1,si2,si3,si4,si5);
si0=l5;
si0=i32_load(&i->m0,(U64)si0+536U);
si0=!(si0);
if(si0){
goto L211;
}
si0=l2;
f15024(i,si0);
goto L211;
L228:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+68U);
l8=si0;
si0=i32_load(&i->m0,(U64)si0+8U);
l10=si0;
si0=l5;
si1=532U;
si0+=si1;
si1=l18;
si1=i32_load(&i->m0,(U64)si1);
si2=l18;
si2=i32_load(&i->m0,(U64)si2+8U);
f63(i,si0,si1,si2);
si0=l5;
si0=i32_load(&i->m0,(U64)si0+532U);
if(si0){
goto L233;
}
si0=l5;
si0=i32_load(&i->m0,(U64)si0+536U);
l12=si0;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+540U);
l9=si0;
if(si0){
goto L235;
}
si0=1U;
l17=si0;
goto L234;
L235:;
si0=l9;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L5;
}
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=l9;
si0=f15022(i,si0);
l17=si0;
si0=!(si0);
if(si0){
goto L231;
}
L234:;
si0=l17;
si1=l12;
si2=l9;
si0=f15143(i,si0,si1,si2);
l12=si0;
si0=l5;
si1=l9;
i32_store(&i->m0,(U64)si0+528U,si1);
si0=l5;
si1=l9;
i32_store(&i->m0,(U64)si0+524U,si1);
si0=l5;
si1=l12;
i32_store(&i->m0,(U64)si0+520U,si1);
goto L232;
L233:;
si0=l5;
si1=520U;
si0+=si1;
si1=8U;
si0+=si1;
si1=l5;
si2=532U;
si1+=si2;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=l5;
sj1=i64_load(&i->m0,(U64)si1+532U);
i64_store(&i->m0,(U64)si0+520U,sj1);
L232:;
si0=l5;
si1=508U;
si0+=si1;
si1=l10;
si2=-1U;
si1+=si2;
si2=-8U;
si1&=si2;
si2=l2;
si1+=si2;
si2=8U;
si1+=si2;
si2=l5;
si3=520U;
si2+=si3;
si3=l8;
si3=i32_load(&i->m0,(U64)si3+20U);
TF(i->t0,si3,void (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
si0=l5;
si0=i32_load(&i->m0,(U64)si0+508U);
si0=!(si0);
if(si0){
goto L227;
}
si0=l5;
si1=496U;
si0+=si1;
si1=8U;
si0+=si1;
si1=l5;
si2=508U;
si1+=si2;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=l5;
sj1=i64_load(&i->m0,(U64)si1+508U);
i64_store(&i->m0,(U64)si0+496U,sj1);
si0=l5;
si1=24U;
si0+=si1;
si1=l1;
si2=1087988U;
si3=l5;
si4=496U;
si3+=si4;
si4=l6;
sj4=i64_load(&i->m0,(U64)si4+16U);
l21=sj4;
si4=(U32)(sj4);
si5=23U;
si4>>=(si5&31);
si5=1U;
si4&=si5;
si5=2U;
sj6=l21;
sj7=33554432ULL;
sj6&=sj7;
si6=!(sj6);
si4=si6?si4:si5;
f574(i,si0,si1,si2,si3,si4);
goto L211;
L231:;
si0=1U;
si1=l9;
f52(i,si0,si1);
UNREACHABLE;
L227:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+72U);
l2=si0;
si0=!(si0);
if(si0){
goto L210;
}
si0=l5;
si1=508U;
si0+=si1;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+76U);
l8=si1;
si1=i32_load(&i->m0,(U64)si1+8U);
si2=-1U;
si1+=si2;
si2=-8U;
si1&=si2;
si2=l2;
si1+=si2;
si2=8U;
si1+=si2;
si2=l18;
si2=i32_load(&i->m0,(U64)si2);
si3=l18;
si3=i32_load(&i->m0,(U64)si3+8U);
si4=l8;
si4=i32_load(&i->m0,(U64)si4+20U);
TF(i->t0,si4,void (*)(rustpythonInstance*,U32,U32,U32,U32))(i,si0,si1,si2,si3);
si0=l5;
si0=i32_load(&i->m0,(U64)si0+508U);
l2=si0;
si0=!(si0);
if(si0){
goto L210;
}
si0=l5;
si0=i32_load(&i->m0,(U64)si0+512U);
l9=si0;
si0=l5;
si1=532U;
si0+=si1;
si1=l2;
si2=l5;
si2=i32_load(&i->m0,(U64)si2+516U);
f63(i,si0,si1,si2);
si0=l5;
si0=i32_load(&i->m0,(U64)si0+536U);
l12=si0;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+532U);
l8=si0;
si0=l5;
si1=l5;
si1=i32_load(&i->m0,(U64)si1+540U);
l10=si1;
si2=0U;
f512(i,si0,si1,si2);
si0=l5;
si0=i32_load(&i->m0,(U64)si0+4U);
l18=si0;
si0=l5;
si0=i32_load(&i->m0,(U64)si0);
si1=l8;
si2=l12;
si3=l8;
si1=si3?si1:si2;
si2=l10;
si0=f15143(i,si0,si1,si2);
l8=si0;
si0=l5;
si1=l10;
i32_store(&i->m0,(U64)si0+528U,si1);
si0=l5;
si1=l18;
i32_store(&i->m0,(U64)si0+524U,si1);
si0=l5;
si1=l8;
i32_store(&i->m0,(U64)si0+520U,si1);
si0=l5;
si1=24U;
si0+=si1;
si1=l1;
si2=1087988U;
si3=l5;
si4=520U;
si3+=si4;
si4=l6;
sj4=i64_load(&i->m0,(U64)si4+16U);
l21=sj4;
si4=(U32)(sj4);
si5=23U;
si4>>=(si5&31);
si5=1U;
si4&=si5;
si5=2U;
sj6=l21;
sj7=33554432ULL;
sj6&=sj7;
si6=!(sj6);
si4=si6?si4:si5;
f574(i,si0,si1,si2,si3,si4);
si0=l5;
si0=i32_load(&i->m0,(U64)si0+532U);
l8=si0;
si0=!(si0);
if(si0){
goto L236;
}
si0=l5;
si0=i32_load(&i->m0,(U64)si0+536U);
si0=!(si0);
if(si0){
goto L236;
}
si0=l8;
f15024(i,si0);
L236:;
si0=l9;
si0=!(si0);
if(si0){
goto L211;
}
si0=l2;
f15024(i,si0);
L211:;
si0=l5;
si0=i32_load8_u(&i->m0,(U64)si0+48U);
l10=si0;
si1=20U;
si0=si0 == si1;
if(si0){
goto L208;
}
si0=l5;
si1=296U;
si0+=si1;
si1=16U;
si0+=si1;
si1=l5;
si2=24U;
si1+=si2;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=296U;
si0+=si1;
si1=8U;
si0+=si1;
si1=l5;
si2=24U;
si1+=si2;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=323U;
si0+=si1;
si1=l52;
si2=2U;
si1+=si2;
si1=i32_load8_u(&i->m0,(U64)si1);
i32_store8(&i->m0,(U64)si0,si1);
si0=l5;
si1=l5;
sj1=i64_load(&i->m0,(U64)si1+24U);
i64_store(&i->m0,(U64)si0+296U,sj1);
si0=l5;
si1=l52;
si1=i32_load16_u(&i->m0,(U64)si1);
i32_store16(&i->m0,(U64)si0+321U,si1);
goto L4;
L210:;
si0=l18;
si1=12U;
si0+=si1;
l18=si0;
si1=l33;
si0=si0 != si1;
if(si0){
goto L209;
}
}
L208:;
si0=l1;
si1=228U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l10=si0;
si0=!(si0);
if(si0){
goto L164;
}
si0=l1;
si1=236U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si1=4U;
si0<<=(si1&31);
l12=si0;
si0=l30;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si0=!(si0);
if(si0){
goto L238;
}
si0=l7;
si0=i32_load(&i->m0,(U64)si0);
l36=si0;
si0=l10;
si1=l12;
si0+=si1;
l27=si0;
si0=l1;
si1=12U;
si0*=si1;
l16=si0;
si0=l10;
l22=si0;
L239:;
{
si0=l22;
l1=si0;
si1=l27;
si0=si0 == si1;
if(si0){
goto L237;
}
si0=l1;
si1=16U;
si0+=si1;
l22=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l9=si0;
si0=!(si0);
if(si0){
goto L239;
}
si0=l1;
si1=12U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l18=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+8U);
l17=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
l8=si0;
si0=l16;
l2=si0;
si0=l36;
l1=si0;
L240:;
{
si0=l1;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=l8;
si0=si0 != si1;
if(si0){
goto L241;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
si1=l9;
si2=l8;
si0=f15142(i,si0,si1,si2);
if(si0){
goto L241;
}
si0=l4;
si1=l17;
si2=l18;
si0=f439(i,si0,si1,si2);
si0=!(si0);
if(si0){
goto L175;
}
L241:;
si0=l1;
si1=12U;
si0+=si1;
l1=si0;
si0=l2;
si1=-12U;
si0+=si1;
l2=si0;
si0=!(si0);
if(si0){
goto L239;
}
goto L240;
}
}
L238:;
si0=l2;
si1=4U;
si0<<=(si1&31);
l1=si0;
si0=l10;
l2=si0;
L242:;
{
si0=l1;
si0=!(si0);
if(si0){
goto L237;
}
si0=l1;
si1=-16U;
si0+=si1;
l1=si0;
si0=l2;
si1=16U;
si0+=si1;
l2=si0;
goto L242;
}
L237:;
L243:;
{
si0=l12;
si0=!(si0);
if(si0){
goto L164;
}
si0=l10;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L244;
}
si0=l4;
si1=l10;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
l1=si1;
si2=l10;
si3=12U;
si2+=si3;
si2=i32_load(&i->m0,(U64)si2);
l2=si2;
si0=f439(i,si0,si1,si2);
if(si0){
goto L244;
}
si0=l5;
si1=24U;
si0+=si1;
si1=l6;
si2=l4;
si3=l1;
si4=l2;
f301(i,si0,si1,si2,si3,si4);
goto L174;
L244:;
si0=l10;
si1=16U;
si0+=si1;
l10=si0;
si0=l12;
si1=-16U;
si0+=si1;
l12=si0;
goto L243;
}
L178:;
si0=l5;
si1=296U;
si0+=si1;
si1=16U;
si0+=si1;
si1=l5;
si2=24U;
si1+=si2;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=296U;
si0+=si1;
si1=8U;
si0+=si1;
si1=l5;
si2=24U;
si1+=si2;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=323U;
si0+=si1;
si1=l52;
si2=2U;
si1+=si2;
si1=i32_load8_u(&i->m0,(U64)si1);
i32_store8(&i->m0,(U64)si0,si1);
si0=l5;
si1=l5;
sj1=i64_load(&i->m0,(U64)si1+24U);
i64_store(&i->m0,(U64)si0+296U,sj1);
si0=l5;
si1=l52;
si1=i32_load16_u(&i->m0,(U64)si1);
i32_store16(&i->m0,(U64)si0+321U,si1);
goto L4;
L177:;
si0=1088420U;
si1=35U;
si2=1088456U;
f634(i,si0,si1,si2);
UNREACHABLE;
L176:;
si0=1087560U;
si1=99U;
si2=1088404U;
f634(i,si0,si1,si2);
UNREACHABLE;
L175:;
si0=l5;
si1=24U;
si0+=si1;
si1=l6;
si2=l4;
si3=0U;
si4=l1;
f301(i,si0,si1,si2,si3,si4);
L174:;
si0=l5;
si0=i32_load8_u(&i->m0,(U64)si0+48U);
l10=si0;
si1=20U;
si0=si0 == si1;
if(si0){
goto L164;
}
si0=l5;
si1=296U;
si0+=si1;
si1=16U;
si0+=si1;
si1=l5;
si2=24U;
si1+=si2;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=296U;
si0+=si1;
si1=8U;
si0+=si1;
si1=l5;
si2=24U;
si1+=si2;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=323U;
si0+=si1;
si1=l52;
si2=2U;
si1+=si2;
si1=i32_load8_u(&i->m0,(U64)si1);
i32_store8(&i->m0,(U64)si0,si1);
si0=l5;
si1=l5;
sj1=i64_load(&i->m0,(U64)si1+24U);
i64_store(&i->m0,(U64)si0+296U,sj1);
si0=l5;
si1=l52;
si1=i32_load16_u(&i->m0,(U64)si1);
i32_store16(&i->m0,(U64)si0+321U,si1);
goto L4;
L173:;
si0=l5;
si1=296U;
si0+=si1;
si1=16U;
si0+=si1;
si1=l5;
si2=24U;
si1+=si2;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=296U;
si0+=si1;
si1=8U;
si0+=si1;
si1=l5;
si2=24U;
si1+=si2;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=323U;
si0+=si1;
si1=l52;
si2=2U;
si1+=si2;
si1=i32_load8_u(&i->m0,(U64)si1);
i32_store8(&i->m0,(U64)si0,si1);
si0=l5;
si1=l5;
sj1=i64_load(&i->m0,(U64)si1+24U);
i64_store(&i->m0,(U64)si0+296U,sj1);
si0=l5;
si1=l52;
si1=i32_load16_u(&i->m0,(U64)si1);
i32_store16(&i->m0,(U64)si0+321U,si1);
goto L4;
L169:;
si0=l8;
si1=108U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l9=si0;
si0=!(si0);
if(si0){
goto L246;
}
si0=l8;
si1=116U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si1=4U;
si0<<=(si1&31);
l18=si0;
si0=l27;
si1=-4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si0=!(si0);
if(si0){
goto L250;
}
si0=l27;
si1=-12U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l30=si0;
si0=l9;
si1=l18;
si0+=si1;
l16=si0;
si0=l1;
si1=12U;
si0*=si1;
l7=si0;
si0=l9;
l27=si0;
L251:;
{
si0=l27;
l1=si0;
si1=l16;
si0=si0 == si1;
if(si0){
goto L249;
}
si0=l1;
si1=16U;
si0+=si1;
l27=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l12=si0;
si0=!(si0);
if(si0){
goto L251;
}
si0=l1;
si1=12U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l17=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+8U);
l22=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
l10=si0;
si0=l7;
l2=si0;
si0=l30;
l1=si0;
L252:;
{
si0=l1;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=l10;
si0=si0 != si1;
if(si0){
goto L253;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
si1=l12;
si2=l10;
si0=f15142(i,si0,si1,si2);
if(si0){
goto L253;
}
si0=l4;
si1=l22;
si2=l17;
si0=f439(i,si0,si1,si2);
si0=!(si0);
if(si0){
goto L248;
}
L253:;
si0=l1;
si1=12U;
si0+=si1;
l1=si0;
si0=l2;
si1=-12U;
si0+=si1;
l2=si0;
si0=!(si0);
if(si0){
goto L251;
}
goto L252;
}
}
L250:;
si0=l2;
si1=4U;
si0<<=(si1&31);
l1=si0;
si0=l9;
l2=si0;
L254:;
{
si0=l1;
si0=!(si0);
if(si0){
goto L249;
}
si0=l1;
si1=-16U;
si0+=si1;
l1=si0;
si0=l2;
si1=16U;
si0+=si1;
l2=si0;
goto L254;
}
L249:;
L255:;
{
si0=l18;
si0=!(si0);
if(si0){
goto L246;
}
si0=l9;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L256;
}
si0=l4;
si1=l9;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
l1=si1;
si2=l9;
si3=12U;
si2+=si3;
si2=i32_load(&i->m0,(U64)si2);
l2=si2;
si0=f439(i,si0,si1,si2);
if(si0){
goto L256;
}
si0=l5;
si1=24U;
si0+=si1;
si1=l6;
si2=l4;
si3=l1;
si4=l2;
f301(i,si0,si1,si2,si3,si4);
goto L247;
L256:;
si0=l9;
si1=16U;
si0+=si1;
l9=si0;
si0=l18;
si1=-16U;
si0+=si1;
l18=si0;
goto L255;
}
L248:;
si0=l5;
si1=24U;
si0+=si1;
si1=l6;
si2=l4;
si3=0U;
si4=l1;
f301(i,si0,si1,si2,si3,si4);
L247:;
si0=l5;
si0=i32_load8_u(&i->m0,(U64)si0+48U);
l10=si0;
si1=20U;
si0=si0 != si1;
if(si0){
goto L245;
}
L246:;
si0=l36;
sj0=i64_load(&i->m0,(U64)si0);
sj1=2ULL;
si0=sj0 < sj1;
if(si0){
goto L164;
}
si0=l8;
si1=68U;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=2U;
si0&=si1;
if(si0){
goto L164;
}
si0=l5;
si1=532U;
si0+=si1;
si1=l6;
si2=l4;
si3=0U;
si4=l1;
f586(i,si0,si1,si2,si3,si4);
si0=l5;
si1=24U;
si0+=si1;
si1=l8;
si2=1088112U;
si3=l5;
si3=i32_load(&i->m0,(U64)si3+532U);
l1=si3;
si4=l5;
si4=i32_load(&i->m0,(U64)si4+540U);
si5=l6;
sj5=i64_load(&i->m0,(U64)si5+16U);
l21=sj5;
si5=(U32)(sj5);
si6=23U;
si5>>=(si6&31);
si6=1U;
si5&=si6;
si6=2U;
sj7=l21;
sj8=33554432ULL;
sj7&=sj8;
si7=!(sj7);
si5=si7?si5:si6;
f576(i,si0,si1,si2,si3,si4,si5);
si0=l5;
si0=i32_load(&i->m0,(U64)si0+536U);
si0=!(si0);
if(si0){
goto L257;
}
si0=l1;
f15024(i,si0);
L257:;
si0=l5;
si0=i32_load8_u(&i->m0,(U64)si0+48U);
l10=si0;
si1=20U;
si0=si0 == si1;
if(si0){
goto L164;
}
si0=l5;
si1=296U;
si0+=si1;
si1=16U;
si0+=si1;
si1=l5;
si2=24U;
si1+=si2;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=296U;
si0+=si1;
si1=8U;
si0+=si1;
si1=l5;
si2=24U;
si1+=si2;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=323U;
si0+=si1;
si1=l52;
si2=2U;
si1+=si2;
si1=i32_load8_u(&i->m0,(U64)si1);
i32_store8(&i->m0,(U64)si0,si1);
si0=l5;
si1=l5;
sj1=i64_load(&i->m0,(U64)si1+24U);
i64_store(&i->m0,(U64)si0+296U,sj1);
si0=l5;
si1=l52;
si1=i32_load16_u(&i->m0,(U64)si1);
i32_store16(&i->m0,(U64)si0+321U,si1);
goto L4;
L245:;
si0=l5;
si1=296U;
si0+=si1;
si1=16U;
si0+=si1;
si1=l5;
si2=24U;
si1+=si2;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=296U;
si0+=si1;
si1=8U;
si0+=si1;
si1=l5;
si2=24U;
si1+=si2;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=323U;
si0+=si1;
si1=l52;
si2=2U;
si1+=si2;
si1=i32_load8_u(&i->m0,(U64)si1);
i32_store8(&i->m0,(U64)si0,si1);
si0=l5;
si1=l5;
sj1=i64_load(&i->m0,(U64)si1+24U);
i64_store(&i->m0,(U64)si0+296U,sj1);
si0=l5;
si1=l52;
si1=i32_load16_u(&i->m0,(U64)si1);
i32_store16(&i->m0,(U64)si0+321U,si1);
goto L4;
L165:;
si0=l10;
si1=36U;
si0+=si1;
l34=si0;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si0=l10;
si1=28U;
si0+=si1;
l38=si0;
si0=i32_load(&i->m0,(U64)si0);
l8=si0;
si0=l2;
sj0=i64_load(&i->m0,(U64)si0);
sj1=0ULL;
si0=sj0 != sj1;
if(si0){
goto L267;
}
si0=l1;
sj0=(U64)(si0);
l24=sj0;
goto L266;
L267:;
si0=l2;
si1=8U;
si0+=si1;
sj0=i64_load(&i->m0,(U64)si0);
l21=sj0;
si0=l2;
si1=220U;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=2U;
si0&=si1;
si0=!(si0);
if(si0){
goto L274;
}
sj0=l21;
si0=!(sj0);
if(si0){
goto L273;
}
si0=l1;
sj0=(U64)(si0);
l24=sj0;
sj1=l21;
sj0=REM_U(sj0,sj1);
si0=!(sj0);
if(si0){
goto L266;
}
sj0=l21;
si0=(U32)(sj0);
l8=si0;
si0=!(si0);
if(si0){
goto L271;
}
si0=l1;
si1=l8;
si0=REM_U(si0,si1);
l12=si0;
si0=l1;
si1=1U;
si0=si0 != si1;
if(si0){
goto L270;
}
si0=l12;
l8=si0;
goto L269;
L274:;
sj0=l21;
si1=l1;
sj1=(U64)(si1);
si0=sj0 != sj1;
if(si0){
goto L272;
}
sj0=l21;
l24=sj0;
goto L266;
L273:;
si0=1088320U;
si1=57U;
si2=1088300U;
f604(i,si0,si1,si2);
UNREACHABLE;
L272:;
si0=1U;
l8=si0;
si0=l1;
si1=1U;
si0=si0 == si1;
if(si0){
goto L269;
}
si0=1088396U;
l10=si0;
si0=3U;
l9=si0;
si0=l1;
l8=si0;
goto L268;
L271:;
si0=1088320U;
si1=57U;
si2=1088380U;
f604(i,si0,si1,si2);
UNREACHABLE;
L270:;
si0=1U;
l8=si0;
si0=l12;
si1=1U;
si0=si0 == si1;
if(si0){
goto L269;
}
si0=1088396U;
l10=si0;
si0=3U;
l9=si0;
si0=l12;
l8=si0;
goto L268;
L269:;
si0=1088399U;
l10=si0;
si0=2U;
l9=si0;
L268:;
si0=l5;
si1=532U;
si0+=si1;
si1=l6;
si2=l4;
si3=0U;
si4=l1;
f586(i,si0,si1,si2,si3,si4);
si0=l5;
si1=24U;
si0+=si1;
si1=l2;
si2=1087824U;
sj3=l21;
si4=l8;
si5=l10;
si6=l9;
si7=l5;
si7=i32_load(&i->m0,(U64)si7+532U);
l1=si7;
si8=l5;
si8=i32_load(&i->m0,(U64)si8+540U);
si9=l6;
sj9=i64_load(&i->m0,(U64)si9+16U);
l24=sj9;
si9=(U32)(sj9);
si10=23U;
si9>>=(si10&31);
si10=1U;
si9&=si10;
si10=2U;
sj11=l24;
sj12=33554432ULL;
sj11&=sj12;
si11=!(sj11);
si9=si11?si9:si10;
f575(i,si0,si1,si2,sj3,si4,si5,si6,si7,si8,si9);
si0=l5;
si0=i32_load(&i->m0,(U64)si0+536U);
si0=!(si0);
if(si0){
goto L265;
}
si0=l1;
f15024(i,si0);
goto L265;
L266:;
si0=l2;
si1=16U;
si0+=si1;
sj0=i64_load(&i->m0,(U64)si0);
si0=!(sj0);
if(si0){
goto L279;
}
si0=l2;
si1=24U;
si0+=si1;
sj0=i64_load(&i->m0,(U64)si0);
sj1=l24;
si0=sj0 < sj1;
if(si0){
goto L278;
}
L279:;
si0=l2;
si1=32U;
si0+=si1;
sj0=i64_load(&i->m0,(U64)si0);
si0=!(sj0);
si0=!(si0);
if(si0){
goto L277;
}
si0=1U;
l8=si0;
goto L276;
L278:;
si0=l1;
si0=!(si0);
if(si0){
goto L262;
}
si0=l5;
si1=532U;
si0+=si1;
si1=l8;
si2=l1;
si3=12U;
si2*=si3;
si1+=si2;
si2=-12U;
si1+=si2;
l1=si1;
si1=i32_load(&i->m0,(U64)si1);
si2=l1;
si3=8U;
si2+=si3;
si2=i32_load(&i->m0,(U64)si2);
f686(i,si0,si1,si2);
si0=l5;
si0=i32_load(&i->m0,(U64)si0+532U);
if(si0){
goto L263;
}
si0=l5;
si0=i32_load(&i->m0,(U64)si0+540U);
l1=si0;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+536U);
l8=si0;
si0=l5;
si1=532U;
si0+=si1;
si1=l6;
si2=l4;
si3=0U;
si4=l1;
f586(i,si0,si1,si2,si3,si4);
si0=l5;
si1=24U;
si0+=si1;
si1=l8;
si2=l1;
si3=l2;
si4=1087824U;
si5=l5;
si5=i32_load(&i->m0,(U64)si5+532U);
l10=si5;
si6=l5;
si6=i32_load(&i->m0,(U64)si6+540U);
si7=l6;
sj7=i64_load(&i->m0,(U64)si7+16U);
l21=sj7;
si7=(U32)(sj7);
si8=23U;
si7>>=(si8&31);
si8=1U;
si7&=si8;
si8=2U;
sj9=l21;
sj10=33554432ULL;
sj9&=sj10;
si9=!(sj9);
si7=si9?si7:si8;
f572(i,si0,si1,si2,si3,si4,si5,si6,si7);
si0=l5;
si0=i32_load(&i->m0,(U64)si0+536U);
si0=!(si0);
if(si0){
goto L265;
}
si0=l10;
f15024(i,si0);
goto L265;
L277:;
si0=l2;
si1=40U;
si0+=si1;
sj0=i64_load(&i->m0,(U64)si0);
l21=sj0;
sj1=l24;
si0=sj0 > sj1;
if(si0){
goto L275;
}
sj0=l21;
sj1=0ULL;
si0=sj0 != sj1;
l8=si0;
L276:;
si0=l8;
si0=!(si0);
if(si0){
goto L264;
}
si0=l1;
if(si0){
goto L264;
}
si0=l5;
si1=532U;
si0+=si1;
si1=l6;
si2=l4;
si3=0U;
si4=l1;
f586(i,si0,si1,si2,si3,si4);
si0=l5;
si1=24U;
si0+=si1;
si1=l2;
si2=1087824U;
si3=l5;
si3=i32_load(&i->m0,(U64)si3+532U);
l1=si3;
si4=l5;
si4=i32_load(&i->m0,(U64)si4+540U);
si5=l6;
sj5=i64_load(&i->m0,(U64)si5+16U);
l21=sj5;
si5=(U32)(sj5);
si6=23U;
si5>>=(si6&31);
si6=1U;
si5&=si6;
si6=2U;
sj7=l21;
sj8=33554432ULL;
sj7&=sj8;
si7=!(sj7);
si5=si7?si5:si6;
f565(i,si0,si1,si2,si3,si4,si5);
si0=l5;
si0=i32_load(&i->m0,(U64)si0+536U);
si0=!(si0);
if(si0){
goto L265;
}
si0=l1;
f15024(i,si0);
goto L265;
L275:;
si0=l5;
si1=532U;
si0+=si1;
si1=l6;
si2=l4;
si3=0U;
si4=l1;
f586(i,si0,si1,si2,si3,si4);
si0=l5;
si1=24U;
si0+=si1;
si1=l2;
si2=1087824U;
sj3=l21;
si4=l1;
si5=l5;
si5=i32_load(&i->m0,(U64)si5+532U);
l8=si5;
si6=l5;
si6=i32_load(&i->m0,(U64)si6+540U);
si7=l6;
sj7=i64_load(&i->m0,(U64)si7+16U);
l24=sj7;
si7=(U32)(sj7);
si8=23U;
si7>>=(si8&31);
si8=1U;
si7&=si8;
si8=2U;
sj9=l24;
sj10=33554432ULL;
sj9&=sj10;
si9=!(sj9);
si7=si9?si7:si8;
f573(i,si0,si1,si2,sj3,si4,si5,si6,si7);
si0=l5;
si0=i32_load(&i->m0,(U64)si0+536U);
si0=!(si0);
if(si0){
goto L265;
}
si0=l8;
f15024(i,si0);
L265:;
si0=l5;
si0=i32_load8_u(&i->m0,(U64)si0+48U);
l10=si0;
si1=20U;
si0=si0 != si1;
if(si0){
goto L261;
}
L264:;
si0=l34;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si0=!(si0);
if(si0){
goto L281;
}
si0=l38;
si0=i32_load(&i->m0,(U64)si0);
l22=si0;
si1=l1;
si2=12U;
si1*=si2;
si0+=si1;
l46=si0;
L282:;
{
si0=l31;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=1U;
si0&=si1;
si0=!(si0);
if(si0){
goto L291;
}
si0=l5;
si1=532U;
si0+=si1;
si1=l22;
si1=i32_load(&i->m0,(U64)si1);
si2=l22;
si2=i32_load(&i->m0,(U64)si2+8U);
f686(i,si0,si1,si2);
si0=l5;
si0=i32_load(&i->m0,(U64)si0+532U);
if(si0){
goto L290;
}
L291:;
si0=l2;
si1=116U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l16=si0;
si0=!(si0);
if(si0){
goto L285;
}
si0=l2;
si1=124U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l30=si0;
si0=l5;
si1=508U;
si0+=si1;
si1=l22;
si1=i32_load(&i->m0,(U64)si1);
si2=l22;
si2=i32_load(&i->m0,(U64)si2+8U);
f63(i,si0,si1,si2);
si0=l2;
si1=222U;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=1U;
si0&=si1;
si0=!(si0);
if(si0){
goto L288;
}
si0=l30;
if(si0){
goto L289;
}
si0=0U;
l30=si0;
goto L287;
L290:;
si0=l5;
si1=532U;
si0+=si1;
si1=l6;
si2=l4;
si3=0U;
si4=l1;
f586(i,si0,si1,si2,si3,si4);
si0=l5;
si1=24U;
si0+=si1;
si1=l5;
si1=i32_load(&i->m0,(U64)si1+532U);
l1=si1;
si2=l5;
si2=i32_load(&i->m0,(U64)si2+540U);
si3=l6;
sj3=i64_load(&i->m0,(U64)si3+16U);
l21=sj3;
si3=(U32)(sj3);
si4=23U;
si3>>=(si4&31);
si4=1U;
si3&=si4;
si4=2U;
sj5=l21;
sj6=33554432ULL;
sj5&=sj6;
si5=!(sj5);
si3=si5?si3:si4;
f571(i,si0,si1,si2,si3);
si0=l5;
si0=i32_load(&i->m0,(U64)si0+536U);
si0=!(si0);
if(si0){
goto L284;
}
si0=l1;
f15024(i,si0);
goto L284;
L289:;
si0=l16;
si1=l30;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l33=si0;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+508U);
l7=si0;
si1=l5;
si1=i32_load(&i->m0,(U64)si1+512U);
l47=si1;
si2=l7;
si0=si2?si0:si1;
l12=si0;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+516U);
l10=si0;
si0=l16;
l27=si0;
L292:;
{
si0=l10;
si1=l27;
si2=4U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
si0=si0 != si1;
if(si0){
goto L293;
}
si0=l10;
if(si0){
goto L295;
}
si0=0U;
l1=si0;
goto L294;
L295:;
si0=l27;
si0=i32_load(&i->m0,(U64)si0);
l9=si0;
si0=0U;
l1=si0;
L296:;
{
si0=l9;
si1=l1;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
l8=si0;
si1=-65U;
si0+=si1;
si1=255U;
si0&=si1;
si1=26U;
si0=si0 < si1;
si1=5U;
si0<<=(si1&31);
si1=l8;
si0|=si1;
si1=255U;
si0&=si1;
si1=l12;
si2=l1;
si1+=si2;
si1=i32_load8_u(&i->m0,(U64)si1);
l8=si1;
si2=-65U;
si1+=si2;
si2=255U;
si1&=si2;
si2=26U;
si1=si1 < si2;
si2=5U;
si1<<=(si2&31);
si2=l8;
si1|=si2;
si2=255U;
si1&=si2;
si0=si0 != si1;
if(si0){
goto L294;
}
si0=l10;
si1=l1;
si2=1U;
si1+=si2;
l1=si1;
si0=si0 != si1;
if(si0){
goto L296;
}
goto L286;
}
L294:;
si0=l1;
si1=l10;
si0=si0 >= si1;
if(si0){
goto L286;
}
L293:;
si0=l27;
si1=8U;
si0+=si1;
l27=si0;
si1=l33;
si0=si0 != si1;
if(si0){
goto L292;
}
goto L287;
}
L288:;
si0=l30;
if(si0){
goto L297;
}
si0=0U;
l30=si0;
goto L287;
L297:;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+508U);
l7=si0;
si1=l5;
si1=i32_load(&i->m0,(U64)si1+512U);
l47=si1;
si2=l7;
si0=si2?si0:si1;
l9=si0;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+516U);
l10=si0;
si0=l30;
si1=3U;
si0<<=(si1&31);
l8=si0;
si0=l16;
l1=si0;
L298:;
{
si0=l10;
si1=l1;
si2=4U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
si0=si0 != si1;
if(si0){
goto L299;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
si1=l9;
si2=l10;
si0=f15142(i,si0,si1,si2);
si0=!(si0);
if(si0){
goto L286;
}
L299:;
si0=l1;
si1=8U;
si0+=si1;
l1=si0;
si0=l8;
si1=-8U;
si0+=si1;
l8=si0;
if(si0){
goto L298;
}
}
L287:;
si0=l5;
si1=520U;
si0+=si1;
si1=8U;
si0+=si1;
si1=l5;
si2=508U;
si1+=si2;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=l5;
sj1=i64_load(&i->m0,(U64)si1+508U);
i64_store(&i->m0,(U64)si0+520U,sj1);
si0=l5;
si1=532U;
si0+=si1;
si1=l6;
si2=l4;
si3=0U;
si4=l1;
f586(i,si0,si1,si2,si3,si4);
si0=l5;
si1=24U;
si0+=si1;
si1=l5;
si2=520U;
si1+=si2;
si2=l16;
si3=l30;
si4=l2;
si5=1087824U;
si6=l5;
si6=i32_load(&i->m0,(U64)si6+532U);
l1=si6;
si7=l5;
si7=i32_load(&i->m0,(U64)si7+540U);
si8=l6;
sj8=i64_load(&i->m0,(U64)si8+16U);
l21=sj8;
si8=(U32)(sj8);
si9=23U;
si8>>=(si9&31);
si9=1U;
si8&=si9;
si9=2U;
sj10=l21;
sj11=33554432ULL;
sj10&=sj11;
si10=!(sj10);
si8=si10?si8:si9;
f566(i,si0,si1,si2,si3,si4,si5,si6,si7,si8);
si0=l5;
si0=i32_load(&i->m0,(U64)si0+536U);
si0=!(si0);
if(si0){
goto L284;
}
si0=l1;
f15024(i,si0);
goto L284;
L286:;
si0=l7;
si0=!(si0);
if(si0){
goto L285;
}
si0=l47;
si0=!(si0);
if(si0){
goto L285;
}
si0=l7;
f15024(i,si0);
L285:;
si0=l2;
si1=220U;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=4U;
si0&=si1;
if(si0){
goto L303;
}
si0=l22;
si0=i32_load(&i->m0,(U64)si0+8U);
if(si0){
goto L303;
}
si0=l4;
si1=l17;
si1=i32_load(&i->m0,(U64)si1);
si2=l18;
si2=i32_load(&i->m0,(U64)si2);
si0=f439(i,si0,si1,si2);
if(si0){
goto L302;
}
L303:;
si0=l2;
si1=64U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
if(si0){
goto L301;
}
goto L300;
L302:;
si0=l5;
si1=532U;
si0+=si1;
si1=l6;
si2=l4;
si3=0U;
si4=l1;
f586(i,si0,si1,si2,si3,si4);
si0=l5;
si1=24U;
si0+=si1;
si1=l2;
si2=1087824U;
si3=l5;
si3=i32_load(&i->m0,(U64)si3+532U);
l1=si3;
si4=l5;
si4=i32_load(&i->m0,(U64)si4+540U);
si5=l6;
sj5=i64_load(&i->m0,(U64)si5+16U);
l21=sj5;
si5=(U32)(sj5);
si6=23U;
si5>>=(si6&31);
si6=1U;
si5&=si6;
si6=2U;
sj7=l21;
sj8=33554432ULL;
sj7&=sj8;
si7=!(sj7);
si5=si7?si5:si6;
f565(i,si0,si1,si2,si3,si4,si5);
si0=l5;
si0=i32_load(&i->m0,(U64)si0+536U);
si0=!(si0);
if(si0){
goto L284;
}
si0=l1;
f15024(i,si0);
goto L284;
L301:;
si0=l2;
si1=68U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l8=si0;
si0=i32_load(&i->m0,(U64)si0+8U);
l10=si0;
si0=l5;
si1=532U;
si0+=si1;
si1=l22;
si1=i32_load(&i->m0,(U64)si1);
si2=l22;
si2=i32_load(&i->m0,(U64)si2+8U);
f63(i,si0,si1,si2);
si0=l5;
si0=i32_load(&i->m0,(U64)si0+532U);
if(si0){
goto L306;
}
si0=l5;
si0=i32_load(&i->m0,(U64)si0+536U);
l12=si0;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+540U);
l9=si0;
if(si0){
goto L308;
}
si0=1U;
l27=si0;
goto L307;
L308:;
si0=l9;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L5;
}
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=l9;
si0=f15022(i,si0);
l27=si0;
si0=!(si0);
if(si0){
goto L304;
}
L307:;
si0=l27;
si1=l12;
si2=l9;
si0=f15143(i,si0,si1,si2);
l12=si0;
si0=l5;
si1=l9;
i32_store(&i->m0,(U64)si0+528U,si1);
si0=l5;
si1=l9;
i32_store(&i->m0,(U64)si0+524U,si1);
si0=l5;
si1=l12;
i32_store(&i->m0,(U64)si0+520U,si1);
goto L305;
L306:;
si0=l5;
si1=520U;
si0+=si1;
si1=8U;
si0+=si1;
si1=l5;
si2=532U;
si1+=si2;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=l5;
sj1=i64_load(&i->m0,(U64)si1+532U);
i64_store(&i->m0,(U64)si0+520U,sj1);
L305:;
si0=l5;
si1=508U;
si0+=si1;
si1=l10;
si2=-1U;
si1+=si2;
si2=-8U;
si1&=si2;
si2=l1;
si1+=si2;
si2=8U;
si1+=si2;
si2=l5;
si3=520U;
si2+=si3;
si3=l8;
si3=i32_load(&i->m0,(U64)si3+20U);
TF(i->t0,si3,void (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
si0=l5;
si0=i32_load(&i->m0,(U64)si0+508U);
si0=!(si0);
if(si0){
goto L300;
}
si0=l5;
si1=496U;
si0+=si1;
si1=8U;
si0+=si1;
si1=l5;
si2=508U;
si1+=si2;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=l5;
sj1=i64_load(&i->m0,(U64)si1+508U);
i64_store(&i->m0,(U64)si0+496U,sj1);
si0=l5;
si1=24U;
si0+=si1;
si1=l2;
si2=1087824U;
si3=l5;
si4=496U;
si3+=si4;
si4=l6;
sj4=i64_load(&i->m0,(U64)si4+16U);
l21=sj4;
si4=(U32)(sj4);
si5=23U;
si4>>=(si5&31);
si5=1U;
si4&=si5;
si5=2U;
sj6=l21;
sj7=33554432ULL;
sj6&=sj7;
si6=!(sj6);
si4=si6?si4:si5;
f574(i,si0,si1,si2,si3,si4);
goto L284;
L304:;
si0=1U;
si1=l9;
f52(i,si0,si1);
UNREACHABLE;
L300:;
si0=l2;
si1=72U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si0=!(si0);
if(si0){
goto L283;
}
si0=l5;
si1=508U;
si0+=si1;
si1=l2;
si2=76U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
l8=si1;
si1=i32_load(&i->m0,(U64)si1+8U);
si2=-1U;
si1+=si2;
si2=-8U;
si1&=si2;
si2=l1;
si1+=si2;
si2=8U;
si1+=si2;
si2=l22;
si2=i32_load(&i->m0,(U64)si2);
si3=l22;
si3=i32_load(&i->m0,(U64)si3+8U);
si4=l8;
si4=i32_load(&i->m0,(U64)si4+20U);
TF(i->t0,si4,void (*)(rustpythonInstance*,U32,U32,U32,U32))(i,si0,si1,si2,si3);
si0=l5;
si0=i32_load(&i->m0,(U64)si0+508U);
l1=si0;
si0=!(si0);
if(si0){
goto L283;
}
si0=l5;
si0=i32_load(&i->m0,(U64)si0+512U);
l12=si0;
si0=l5;
si1=532U;
si0+=si1;
si1=l1;
si2=l5;
si2=i32_load(&i->m0,(U64)si2+516U);
f63(i,si0,si1,si2);
si0=l5;
si0=i32_load(&i->m0,(U64)si0+536U);
l9=si0;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+532U);
l10=si0;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+540U);
l8=si0;
if(si0){
goto L310;
}
si0=1U;
l18=si0;
goto L309;
L310:;
si0=l8;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L5;
}
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=l8;
si0=f15022(i,si0);
l18=si0;
si0=!(si0);
if(si0){
goto L280;
}
L309:;
si0=l18;
si1=l10;
si2=l9;
si3=l10;
si1=si3?si1:si2;
si2=l8;
si0=f15143(i,si0,si1,si2);
l18=si0;
si0=l5;
si1=l8;
i32_store(&i->m0,(U64)si0+528U,si1);
si0=l5;
si1=l8;
i32_store(&i->m0,(U64)si0+524U,si1);
si0=l5;
si1=l18;
i32_store(&i->m0,(U64)si0+520U,si1);
si0=l5;
si1=24U;
si0+=si1;
si1=l2;
si2=1087824U;
si3=l5;
si4=520U;
si3+=si4;
si4=l6;
sj4=i64_load(&i->m0,(U64)si4+16U);
l21=sj4;
si4=(U32)(sj4);
si5=23U;
si4>>=(si5&31);
si5=1U;
si4&=si5;
si5=2U;
sj6=l21;
sj7=33554432ULL;
sj6&=sj7;
si6=!(sj6);
si4=si6?si4:si5;
f574(i,si0,si1,si2,si3,si4);
si0=l10;
si0=!(si0);
if(si0){
goto L311;
}
si0=l9;
si0=!(si0);
if(si0){
goto L311;
}
si0=l10;
f15024(i,si0);
L311:;
si0=l12;
si0=!(si0);
if(si0){
goto L284;
}
si0=l1;
f15024(i,si0);
L284:;
si0=l5;
si0=i32_load8_u(&i->m0,(U64)si0+48U);
l10=si0;
si1=20U;
si0=si0 == si1;
if(si0){
goto L281;
}
si0=l5;
si1=296U;
si0+=si1;
si1=16U;
si0+=si1;
si1=l5;
si2=24U;
si1+=si2;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=296U;
si0+=si1;
si1=8U;
si0+=si1;
si1=l5;
si2=24U;
si1+=si2;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=323U;
si0+=si1;
si1=l52;
si2=2U;
si1+=si2;
si1=i32_load8_u(&i->m0,(U64)si1);
i32_store8(&i->m0,(U64)si0,si1);
si0=l5;
si1=l5;
sj1=i64_load(&i->m0,(U64)si1+24U);
i64_store(&i->m0,(U64)si0+296U,sj1);
si0=l5;
si1=l52;
si1=i32_load16_u(&i->m0,(U64)si1);
i32_store16(&i->m0,(U64)si0+321U,si1);
goto L4;
L283:;
si0=l22;
si1=12U;
si0+=si1;
l22=si0;
si1=l46;
si0=si0 != si1;
if(si0){
goto L282;
}
}
L281:;
si0=l2;
si1=260U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l9=si0;
si0=!(si0);
if(si0){
goto L258;
}
si0=l2;
si1=268U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l8=si0;
si1=4U;
si0<<=(si1&31);
l18=si0;
si0=l34;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si0=!(si0);
if(si0){
goto L313;
}
si0=l38;
si0=i32_load(&i->m0,(U64)si0);
l30=si0;
si0=l9;
si1=l18;
si0+=si1;
l16=si0;
si0=l1;
si1=12U;
si0*=si1;
l7=si0;
si0=l9;
l27=si0;
L314:;
{
si0=l27;
l1=si0;
si1=l16;
si0=si0 == si1;
if(si0){
goto L312;
}
si0=l1;
si1=16U;
si0+=si1;
l27=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l12=si0;
si0=!(si0);
if(si0){
goto L314;
}
si0=l1;
si1=12U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l17=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+8U);
l22=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
l10=si0;
si0=l7;
l8=si0;
si0=l30;
l1=si0;
L315:;
{
si0=l1;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=l10;
si0=si0 != si1;
if(si0){
goto L316;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
si1=l12;
si2=l10;
si0=f15142(i,si0,si1,si2);
if(si0){
goto L316;
}
si0=l4;
si1=l22;
si2=l17;
si0=f439(i,si0,si1,si2);
si0=!(si0);
if(si0){
goto L260;
}
L316:;
si0=l1;
si1=12U;
si0+=si1;
l1=si0;
si0=l8;
si1=-12U;
si0+=si1;
l8=si0;
si0=!(si0);
if(si0){
goto L314;
}
goto L315;
}
}
L313:;
si0=l8;
si1=4U;
si0<<=(si1&31);
l1=si0;
si0=l9;
l8=si0;
L317:;
{
si0=l1;
si0=!(si0);
if(si0){
goto L312;
}
si0=l1;
si1=-16U;
si0+=si1;
l1=si0;
si0=l8;
si1=16U;
si0+=si1;
l8=si0;
goto L317;
}
L312:;
L318:;
{
si0=l18;
si0=!(si0);
if(si0){
goto L258;
}
si0=l9;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L319;
}
si0=l4;
si1=l9;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
l1=si1;
si2=l9;
si3=12U;
si2+=si3;
si2=i32_load(&i->m0,(U64)si2);
l8=si2;
si0=f439(i,si0,si1,si2);
if(si0){
goto L319;
}
si0=l5;
si1=24U;
si0+=si1;
si1=l6;
si2=l4;
si3=l1;
si4=l8;
f301(i,si0,si1,si2,si3,si4);
goto L259;
L319:;
si0=l9;
si1=16U;
si0+=si1;
l9=si0;
si0=l18;
si1=-16U;
si0+=si1;
l18=si0;
goto L318;
}
L280:;
si0=1U;
si1=l8;
f52(i,si0,si1);
UNREACHABLE;
L263:;
si0=1088420U;
si1=35U;
si2=1088456U;
f634(i,si0,si1,si2);
UNREACHABLE;
L262:;
si0=1087560U;
si1=99U;
si2=1088404U;
f634(i,si0,si1,si2);
UNREACHABLE;
L261:;
si0=l5;
si1=296U;
si0+=si1;
si1=16U;
si0+=si1;
si1=l5;
si2=24U;
si1+=si2;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=296U;
si0+=si1;
si1=8U;
si0+=si1;
si1=l5;
si2=24U;
si1+=si2;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=323U;
si0+=si1;
si1=l52;
si2=2U;
si1+=si2;
si1=i32_load8_u(&i->m0,(U64)si1);
i32_store8(&i->m0,(U64)si0,si1);
si0=l5;
si1=l5;
sj1=i64_load(&i->m0,(U64)si1+24U);
i64_store(&i->m0,(U64)si0+296U,sj1);
si0=l5;
si1=l52;
si1=i32_load16_u(&i->m0,(U64)si1);
i32_store16(&i->m0,(U64)si0+321U,si1);
goto L4;
L260:;
si0=l5;
si1=24U;
si0+=si1;
si1=l6;
si2=l4;
si3=0U;
si4=l1;
f301(i,si0,si1,si2,si3,si4);
L259:;
si0=l5;
si0=i32_load8_u(&i->m0,(U64)si0+48U);
l10=si0;
si1=20U;
si0=si0 != si1;
if(si0){
goto L159;
}
L258:;
si0=l36;
sj0=i64_load(&i->m0,(U64)si0);
sj1=2ULL;
si0=sj0 < sj1;
if(si0){
goto L164;
}
si0=l2;
si1=220U;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=2U;
si0&=si1;
if(si0){
goto L164;
}
si0=l5;
si1=532U;
si0+=si1;
si1=l6;
si2=l4;
si3=0U;
si4=l1;
f586(i,si0,si1,si2,si3,si4);
si0=l5;
si1=24U;
si0+=si1;
si1=l2;
si2=1087824U;
si3=l5;
si3=i32_load(&i->m0,(U64)si3+532U);
l1=si3;
si4=l5;
si4=i32_load(&i->m0,(U64)si4+540U);
si5=l6;
sj5=i64_load(&i->m0,(U64)si5+16U);
l21=sj5;
si5=(U32)(sj5);
si6=23U;
si5>>=(si6&31);
si6=1U;
si5&=si6;
si6=2U;
sj7=l21;
sj8=33554432ULL;
sj7&=sj8;
si7=!(sj7);
si5=si7?si5:si6;
f576(i,si0,si1,si2,si3,si4,si5);
si0=l5;
si0=i32_load(&i->m0,(U64)si0+536U);
si0=!(si0);
if(si0){
goto L320;
}
si0=l1;
f15024(i,si0);
L320:;
si0=l5;
si0=i32_load8_u(&i->m0,(U64)si0+48U);
l10=si0;
si1=20U;
si0=si0 == si1;
if(si0){
goto L164;
}
si0=l5;
si1=296U;
si0+=si1;
si1=16U;
si0+=si1;
si1=l5;
si2=24U;
si1+=si2;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=296U;
si0+=si1;
si1=8U;
si0+=si1;
si1=l5;
si2=24U;
si1+=si2;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=323U;
si0+=si1;
si1=l52;
si2=2U;
si1+=si2;
si1=i32_load8_u(&i->m0,(U64)si1);
i32_store8(&i->m0,(U64)si0,si1);
si0=l5;
si1=l5;
sj1=i64_load(&i->m0,(U64)si1+24U);
i64_store(&i->m0,(U64)si0+296U,sj1);
si0=l5;
si1=l52;
si1=i32_load16_u(&i->m0,(U64)si1);
i32_store16(&i->m0,(U64)si0+321U,si1);
goto L4;
L164:;
sj0=l19;
sj1=-1ULL;
sj0+=sj1;
sj1=l19;
sj0&=sj1;
l19=sj0;
si0=l35;
si1=-1U;
si0+=si1;
l35=si0;
if(si0){
goto L161;
}
}
L160:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si0=l5;
si1=24U;
si0+=si1;
si1=l6;
si2=1087560U;
si3=0U;
f584(i,si0,si1,si2,si3);
si0=l4;
si1=36U;
si0+=si1;
l2=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+36U);
l8=si0;
si0=!(si0);
if(si0){
goto L321;
}
si0=l4;
si1=40U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L321;
}
si0=l8;
f15024(i,si0);
L321:;
si0=l2;
si1=l5;
sj1=i64_load(&i->m0,(U64)si1+24U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=8U;
si0+=si1;
si1=l5;
si2=24U;
si1+=si2;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=20U;
i32_store8(&i->m0,(U64)si0+24U,si1);
si0=l1;
si0=!(si0);
if(si0){
goto L1;
}
goto L2;
L159:;
si0=l5;
si1=296U;
si0+=si1;
si1=16U;
si0+=si1;
si1=l5;
si2=24U;
si1+=si2;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=296U;
si0+=si1;
si1=8U;
si0+=si1;
si1=l5;
si2=24U;
si1+=si2;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=323U;
si0+=si1;
si1=l52;
si2=2U;
si1+=si2;
si1=i32_load8_u(&i->m0,(U64)si1);
i32_store8(&i->m0,(U64)si0,si1);
si0=l5;
si1=l5;
sj1=i64_load(&i->m0,(U64)si1+24U);
i64_store(&i->m0,(U64)si0+296U,sj1);
si0=l5;
si1=l52;
si1=i32_load16_u(&i->m0,(U64)si1);
i32_store16(&i->m0,(U64)si0+321U,si1);
goto L4;
L5:;
f53(i);
UNREACHABLE;
L4:;
si0=l0;
si1=l5;
si1=i32_load16_u(&i->m0,(U64)si1+321U);
i32_store16(&i->m0,(U64)si0+25U,si1);
si0=l5;
si1=472U;
si0+=si1;
si1=16U;
si0+=si1;
si1=l5;
si2=296U;
si1+=si2;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
l19=sj1;
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=472U;
si0+=si1;
si1=8U;
si0+=si1;
si1=l5;
si2=296U;
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
si2=296U;
si1+=si2;
si2=27U;
si1+=si2;
si1=i32_load8_u(&i->m0,(U64)si1);
i32_store8(&i->m0,(U64)si0,si1);
si0=l5;
si1=l5;
sj1=i64_load(&i->m0,(U64)si1+296U);
l24=sj1;
i64_store(&i->m0,(U64)si0+472U,sj1);
si0=l0;
si1=16U;
si0+=si1;
sj1=l19;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=8U;
si0+=si1;
sj1=l21;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
sj1=l24;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=l10;
i32_store8(&i->m0,(U64)si0+24U,si1);
L3:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si0=!(si0);
if(si0){
goto L1;
}
L2:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+4U);
si0=!(si0);
if(si0){
goto L1;
}
si0=l1;
f15024(i,si0);
L1:;
si0=l5;
si1=544U;
si0+=si1;
i->g0=si0;
L0:;
}

void f299(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
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
U32 si0,si1,si2,si3,si4,si5;
U64 sj0,sj1;
si0=i->g0;
si1=48U;
si0-=si1;
l3=si0;
i->g0=si0;
si0=l3;
si1=0U;
i32_store(&i->m0,(U64)si0+44U,si1);
si0=l3;
sj1=4ULL;
i64_store(&i->m0,(U64)si0+36U,sj1);
si0=l1;
si1=280U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
si0=!(si0);
if(si0){
goto L4;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+272U);
l5=si0;
si1=l4;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l6=si0;
L5:;
{
si0=l2;
si1=l5;
si1=i32_load(&i->m0,(U64)si1);
si2=l5;
si2=i32_load(&i->m0,(U64)si2+4U);
si0=f439(i,si0,si1,si2);
if(si0){
goto L6;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0+44U);
l7=si0;
si0=!(si0);
if(si0){
goto L7;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0+36U);
l4=si0;
si0=l7;
si1=3U;
si0<<=(si1&31);
l7=si0;
si0=l5;
si0=i32_load(&i->m0,(U64)si0);
l8=si0;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+4U);
l9=si0;
L8:;
{
si0=l9;
si1=l4;
si2=4U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
si0=si0 != si1;
if(si0){
goto L9;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
si1=l8;
si2=l9;
si0=f15142(i,si0,si1,si2);
si0=!(si0);
if(si0){
goto L6;
}
L9:;
si0=l4;
si1=8U;
si0+=si1;
l4=si0;
si0=l7;
si1=-8U;
si0+=si1;
l7=si0;
if(si0){
goto L8;
}
}
L7:;
si0=0U;
l10=si0;
si0=0U;
l7=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+220U);
l4=si0;
si0=!(si0);
if(si0){
goto L10;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+212U);
l7=si0;
si0=l4;
si1=120U;
si0*=si1;
l4=si0;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+4U);
l9=si0;
L11:;
{
si0=l7;
si1=36U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=l9;
si0=si0 != si1;
if(si0){
goto L12;
}
si0=l7;
si1=32U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=l5;
si1=i32_load(&i->m0,(U64)si1);
si2=l9;
si0=f15142(i,si0,si1,si2);
si0=!(si0);
if(si0){
goto L10;
}
L12:;
si0=l7;
si1=120U;
si0+=si1;
l7=si0;
si0=l4;
si1=-120U;
si0+=si1;
l4=si0;
if(si0){
goto L11;
}
}
si0=0U;
l7=si0;
L10:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+232U);
l9=si0;
si0=!(si0);
if(si0){
goto L13;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+224U);
l4=si0;
si0=l9;
si1=272U;
si0*=si1;
l9=si0;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+4U);
l8=si0;
L14:;
{
si0=l4;
si1=188U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=l8;
si0=si0 != si1;
if(si0){
goto L15;
}
si0=l4;
si1=184U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=l5;
si1=i32_load(&i->m0,(U64)si1);
si2=l8;
si0=f15142(i,si0,si1,si2);
if(si0){
goto L15;
}
si0=l4;
l10=si0;
goto L13;
L15:;
si0=l4;
si1=272U;
si0+=si1;
l4=si0;
si0=l9;
si1=-272U;
si0+=si1;
l9=si0;
if(si0){
goto L14;
}
}
L13:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+8U);
l11=si0;
si0=!(si0);
if(si0){
goto L17;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
si1=l11;
si2=248U;
si1*=si2;
si0+=si1;
l8=si0;
si0=0U;
l12=si0;
L18:;
{
si0=l8;
l9=si0;
si0=l4;
si1=l8;
si0=si0 == si1;
if(si0){
goto L20;
}
si0=l4;
si1=248U;
si0+=si1;
l9=si0;
si0=l4;
sj0=i64_load(&i->m0,(U64)si0);
sj1=2ULL;
si0=sj0 != sj1;
if(si0){
goto L19;
}
L20:;
si0=l9;
l4=si0;
si0=l12;
si1=1U;
si0+=si1;
l12=si0;
si1=l11;
si0=si0 != si1;
if(si0){
goto L18;
}
goto L17;
L19:;
si0=l4;
si1=156U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l13=si0;
si1=l5;
si1=i32_load(&i->m0,(U64)si1+4U);
si0=si0 != si1;
if(si0){
goto L21;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0+152U);
si1=l5;
si1=i32_load(&i->m0,(U64)si1);
si2=l13;
si0=f15142(i,si0,si1,si2);
si0=!(si0);
if(si0){
goto L16;
}
L21:;
si0=l9;
l4=si0;
si0=l12;
si1=1U;
si0+=si1;
l12=si0;
si1=l11;
si0=si0 < si1;
if(si0){
goto L18;
}
}
L17:;
si0=0U;
l4=si0;
L16:;
si0=l7;
si1=l10;
si2=l4;
si3=l10;
si1=si3?si1:si2;
si2=l7;
si0=si2?si0:si1;
l11=si0;
si0=!(si0);
if(si0){
goto L22;
}
si0=l3;
si1=24U;
si0+=si1;
si1=l11;
si2=1088112U;
si3=1087824U;
si4=1087988U;
si5=l10;
si3=si5?si3:si4;
si4=l7;
si2=si4?si2:si3;
l13=si2;
si3=32U;
si2+=si3;
si2=i32_load(&i->m0,(U64)si2);
TF(i->t0,si2,void (*)(rustpythonInstance*,U32,U32))(i,si0,si1);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+24U);
l12=si0;
si0=!(si0);
if(si0){
goto L24;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0+28U);
l4=si0;
si0=!(si0);
if(si0){
goto L24;
}
si0=l12;
si1=l4;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l10=si0;
L25:;
{
si0=l2;
si1=l12;
si1=i32_load(&i->m0,(U64)si1);
l8=si1;
si2=l12;
si2=i32_load(&i->m0,(U64)si2+4U);
l9=si2;
si0=f439(i,si0,si1,si2);
if(si0){
goto L23;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+256U);
l7=si0;
si0=!(si0);
if(si0){
goto L26;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+248U);
l4=si0;
si0=l7;
si1=48U;
si0*=si1;
l7=si0;
L28:;
{
si0=l4;
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=l9;
si0=si0 != si1;
if(si0){
goto L29;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
si1=l8;
si2=l9;
si0=f15142(i,si0,si1,si2);
si0=!(si0);
if(si0){
goto L27;
}
L29:;
si0=l4;
si1=48U;
si0+=si1;
l4=si0;
si0=l7;
si1=-48U;
si0+=si1;
l7=si0;
if(si0){
goto L28;
}
goto L26;
}
L27:;
si0=l4;
si1=40U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=3U;
si0<<=(si1&31);
l7=si0;
si0=l4;
si1=32U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
L30:;
{
si0=l7;
si0=!(si0);
if(si0){
goto L26;
}
si0=l7;
si1=-8U;
si0+=si1;
l7=si0;
si0=l4;
si1=4U;
si0+=si1;
l9=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
l8=si0;
si0=l4;
si1=8U;
si0+=si1;
l4=si0;
si0=l2;
si1=l8;
si2=l9;
si2=i32_load(&i->m0,(U64)si2);
si0=f439(i,si0,si1,si2);
si0=!(si0);
if(si0){
goto L30;
}
goto L23;
}
L26:;
si0=l12;
si1=8U;
si0+=si1;
l12=si0;
si1=l10;
si0=si0 != si1;
if(si0){
goto L25;
}
}
L24:;
si0=l11;
si1=18U;
si2=l13;
si2=i32_load(&i->m0,(U64)si2+40U);
si0=TF(i->t0,si2,U32 (*)(rustpythonInstance*,U32,U32))(i,si0,si1);
l7=si0;
si0=l3;
si1=16U;
si0+=si1;
si1=l11;
si2=l13;
si2=i32_load(&i->m0,(U64)si2+36U);
TF(i->t0,si2,void (*)(rustpythonInstance*,U32,U32))(i,si0,si1);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+20U);
l4=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+16U);
l12=si0;
si0=l7;
if(si0){
goto L31;
}
si0=l12;
si0=!(si0);
if(si0){
goto L22;
}
si0=l4;
si0=!(si0);
if(si0){
goto L22;
}
si0=l12;
si1=l4;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l10=si0;
L32:;
{
si0=l2;
si1=l12;
si1=i32_load(&i->m0,(U64)si1);
l8=si1;
si2=l12;
si2=i32_load(&i->m0,(U64)si2+4U);
l9=si2;
si0=f439(i,si0,si1,si2);
if(si0){
goto L23;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+256U);
l7=si0;
si0=!(si0);
if(si0){
goto L33;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+248U);
l4=si0;
si0=l7;
si1=48U;
si0*=si1;
l7=si0;
L35:;
{
si0=l4;
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=l9;
si0=si0 != si1;
if(si0){
goto L36;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
si1=l8;
si2=l9;
si0=f15142(i,si0,si1,si2);
si0=!(si0);
if(si0){
goto L34;
}
L36:;
si0=l4;
si1=48U;
si0+=si1;
l4=si0;
si0=l7;
si1=-48U;
si0+=si1;
l7=si0;
if(si0){
goto L35;
}
goto L33;
}
L34:;
si0=l4;
si1=40U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=3U;
si0<<=(si1&31);
l7=si0;
si0=l4;
si1=32U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
L37:;
{
si0=l7;
si0=!(si0);
if(si0){
goto L33;
}
si0=l7;
si1=-8U;
si0+=si1;
l7=si0;
si0=l4;
si1=4U;
si0+=si1;
l9=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
l8=si0;
si0=l4;
si1=8U;
si0+=si1;
l4=si0;
si0=l2;
si1=l8;
si2=l9;
si2=i32_load(&i->m0,(U64)si2);
si0=f439(i,si0,si1,si2);
si0=!(si0);
if(si0){
goto L37;
}
goto L23;
}
L33:;
si0=l12;
si1=8U;
si0+=si1;
l12=si0;
si1=l10;
si0=si0 != si1;
if(si0){
goto L32;
}
goto L22;
}
L31:;
si0=l12;
si0=!(si0);
if(si0){
goto L22;
}
si0=l4;
si0=!(si0);
if(si0){
goto L23;
}
si0=l12;
si1=l4;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l10=si0;
L38:;
{
si0=l2;
si1=l12;
si1=i32_load(&i->m0,(U64)si1);
l8=si1;
si2=l12;
si2=i32_load(&i->m0,(U64)si2+4U);
l9=si2;
si0=f439(i,si0,si1,si2);
if(si0){
goto L39;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+256U);
l7=si0;
si0=!(si0);
if(si0){
goto L22;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+248U);
l4=si0;
si0=l7;
si1=48U;
si0*=si1;
l7=si0;
L41:;
{
si0=l4;
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=l9;
si0=si0 != si1;
if(si0){
goto L42;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
si1=l8;
si2=l9;
si0=f15142(i,si0,si1,si2);
si0=!(si0);
if(si0){
goto L40;
}
L42:;
si0=l4;
si1=48U;
si0+=si1;
l4=si0;
si0=l7;
si1=-48U;
si0+=si1;
l7=si0;
if(si0){
goto L41;
}
goto L22;
}
L40:;
si0=l4;
si1=40U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=3U;
si0<<=(si1&31);
l7=si0;
si0=l4;
si1=32U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
L43:;
{
si0=l7;
si0=!(si0);
if(si0){
goto L22;
}
si0=l7;
si1=-8U;
si0+=si1;
l7=si0;
si0=l4;
si1=4U;
si0+=si1;
l9=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
l8=si0;
si0=l4;
si1=8U;
si0+=si1;
l4=si0;
si0=l2;
si1=l8;
si2=l9;
si2=i32_load(&i->m0,(U64)si2);
si0=f439(i,si0,si1,si2);
si0=!(si0);
if(si0){
goto L43;
}
}
L39:;
si0=l12;
si1=8U;
si0+=si1;
l12=si0;
si1=l10;
si0=si0 != si1;
if(si0){
goto L38;
}
}
L23:;
si0=l3;
si1=8U;
si0+=si1;
si1=l11;
si2=l13;
si2=i32_load(&i->m0,(U64)si2+16U);
TF(i->t0,si2,void (*)(rustpythonInstance*,U32,U32))(i,si0,si1);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+12U);
l7=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+8U);
l9=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+44U);
l4=si0;
si1=l3;
si1=i32_load(&i->m0,(U64)si1+40U);
si0=si0 != si1;
if(si0){
goto L44;
}
si0=l3;
si1=36U;
si0+=si1;
si1=l4;
f517(i,si0,si1);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+44U);
l4=si0;
L44:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+36U);
si1=l4;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l4=si0;
si1=l7;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l4;
si1=l9;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=l3;
si1=i32_load(&i->m0,(U64)si1+44U);
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0+44U,si1);
si0=l3;
si1=l11;
si2=l13;
si2=i32_load(&i->m0,(U64)si2+28U);
TF(i->t0,si2,void (*)(rustpythonInstance*,U32,U32))(i,si0,si1);
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
si0=!(si0);
if(si0){
goto L6;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0+4U);
si1=4U;
si0<<=(si1&31);
l7=si0;
L45:;
{
si0=l7;
si0=!(si0);
if(si0){
goto L6;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L46;
}
si0=l4;
si1=12U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l8=si0;
si0=l4;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l12=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+44U);
l9=si0;
si1=l3;
si1=i32_load(&i->m0,(U64)si1+40U);
si0=si0 != si1;
if(si0){
goto L47;
}
si0=l3;
si1=36U;
si0+=si1;
si1=l9;
f517(i,si0,si1);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+44U);
l9=si0;
L47:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+36U);
si1=l9;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l9=si0;
si1=l8;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l9;
si1=l12;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=l3;
si1=i32_load(&i->m0,(U64)si1+44U);
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0+44U,si1);
L46:;
si0=l4;
si1=16U;
si0+=si1;
l4=si0;
si0=l7;
si1=-16U;
si0+=si1;
l7=si0;
goto L45;
}
L22:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+44U);
l4=si0;
si0=!(si0);
if(si0){
goto L48;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+280U);
l5=si0;
si0=!(si0);
if(si0){
goto L48;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0+36U);
l12=si0;
si1=l4;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l13=si0;
L49:;
{
si0=l5;
if(si0){
goto L51;
}
si0=0U;
l5=si0;
goto L50;
L51:;
si0=l5;
si1=-1U;
si0+=si1;
l11=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+272U);
l10=si0;
si1=l5;
si2=3U;
si1<<=(si2&31);
si0+=si1;
si1=-8U;
si0+=si1;
l4=si0;
si0=l12;
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l8=si0;
si0=l5;
l7=si0;
L53:;
{
si0=l4;
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l9=si0;
si1=l8;
si0=si0 != si1;
if(si0){
goto L54;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
si1=l12;
si1=i32_load(&i->m0,(U64)si1);
si2=l9;
si0=f15142(i,si0,si1,si2);
si0=!(si0);
if(si0){
goto L52;
}
L54:;
si0=l4;
si1=-8U;
si0+=si1;
l4=si0;
si0=l7;
si1=-1U;
si0+=si1;
l7=si0;
si0=!(si0);
if(si0){
goto L50;
}
goto L53;
}
L52:;
si0=l1;
si1=l11;
i32_store(&i->m0,(U64)si0+280U,si1);
si0=l4;
si1=l10;
si2=l11;
si3=3U;
si2<<=(si3&31);
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l11;
l5=si0;
L50:;
si0=l12;
si1=8U;
si0+=si1;
l12=si0;
si1=l13;
si0=si0 != si1;
if(si0){
goto L49;
}
}
L48:;
si0=l0;
si1=l1;
si2=l2;
si3=0U;
si4=l4;
f301(i,si0,si1,si2,si3,si4);
goto L3;
L6:;
si0=l5;
si1=8U;
si0+=si1;
l5=si0;
si1=l6;
si0=si0 != si1;
if(si0){
goto L5;
}
}
L4:;
si0=l1;
si1=292U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
si0=!(si0);
if(si0){
goto L2;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+284U);
l7=si0;
si1=l4;
si2=24U;
si1*=si2;
si0+=si1;
l13=si0;
L55:;
{
si0=l7;
si1=20U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si0=l7;
si1=12U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l8=si0;
si0=l7;
si0=i32_load(&i->m0,(U64)si0+16U);
l11=si0;
si0=l7;
si0=i32_load(&i->m0,(U64)si0+8U);
l12=si0;
si0=l2;
si1=l7;
si1=i32_load(&i->m0,(U64)si1);
si2=l7;
si2=i32_load(&i->m0,(U64)si2+4U);
si0=f309(i,si0,si1,si2);
l4=si0;
si0=!(si0);
if(si0){
goto L56;
}
si0=l2;
si1=l11;
si2=l5;
si0=f309(i,si0,si1,si2);
if(si0){
goto L56;
}
si0=l4;
si1=28U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l9=si0;
si0=!(si0);
if(si0){
goto L56;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0+20U);
l4=si0;
si0=l9;
si1=12U;
si0*=si1;
l9=si0;
L58:;
{
si0=l4;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=l8;
si0=si0 != si1;
if(si0){
goto L59;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
si1=l12;
si2=l8;
si0=f15142(i,si0,si1,si2);
si0=!(si0);
if(si0){
goto L57;
}
L59:;
si0=l4;
si1=12U;
si0+=si1;
l4=si0;
si0=l9;
si1=-12U;
si0+=si1;
l9=si0;
si0=!(si0);
if(si0){
goto L56;
}
goto L58;
}
L57:;
si0=l0;
si1=l1;
si2=l2;
si3=l11;
si4=l5;
f301(i,si0,si1,si2,si3,si4);
goto L3;
L56:;
si0=l7;
si1=24U;
si0+=si1;
l7=si0;
si1=l13;
si0=si0 == si1;
if(si0){
goto L2;
}
goto L55;
}
L3:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+40U);
si0=!(si0);
if(si0){
goto L1;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0+36U);
f15024(i,si0);
goto L1;
L2:;
si0=l0;
si1=20U;
i32_store8(&i->m0,(U64)si0+24U,si1);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+40U);
si0=!(si0);
if(si0){
goto L1;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0+36U);
f15024(i,si0);
L1:;
si0=l3;
si1=48U;
si0+=si1;
i->g0=si0;
L0:;
}

void f300(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4) {
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
U32 si0,si1,si2,si3,si4,si5,si6,si7,si8;
U64 sj0,sj1,sj2,sj6,sj8,sj9;
si0=i->g0;
si1=96U;
si0-=si1;
l5=si0;
i->g0=si0;
si0=l5;
si1=l4;
si1=i32_load(&i->m0,(U64)si1+12U);
i32_store(&i->m0,(U64)si0+64U,si1);
si0=l5;
si1=l4;
si1=i32_load(&i->m0,(U64)si1);
l6=si1;
i32_store(&i->m0,(U64)si0+56U,si1);
si0=l5;
si1=l6;
si2=8U;
si1+=si2;
i32_store(&i->m0,(U64)si0+48U,si1);
si0=l5;
si1=l6;
si2=l4;
si2=i32_load(&i->m0,(U64)si2+4U);
si1+=si2;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0+52U,si1);
si0=l5;
si1=l6;
sj1=i64_load(&i->m0,(U64)si1);
sj2=-1ULL;
sj1^=sj2;
sj2=-9187201950435737472ULL;
sj1&=sj2;
i64_store(&i->m0,(U64)si0+40U,sj1);
si0=l5;
si1=28U;
si0+=si1;
si1=l5;
si2=40U;
si1+=si2;
f249(i,si0,si1);
si0=l5;
si0=i32_load(&i->m0,(U64)si0+28U);
l7=si0;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+32U);
l8=si0;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+36U);
l6=si0;
if(si0){
goto L2;
}
si0=0U;
l9=si0;
goto L1;
L2:;
si0=l7;
si1=l6;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l10=si0;
si0=0U;
l9=si0;
si0=l7;
l11=si0;
L3:;
{
si0=l11;
si0=i32_load(&i->m0,(U64)si0+4U);
l12=si0;
si0=l11;
si0=i32_load(&i->m0,(U64)si0);
l13=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+220U);
l6=si0;
si0=!(si0);
if(si0){
goto L5;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+212U);
l14=si0;
si0=l6;
si1=120U;
si0*=si1;
l15=si0;
si0=0U;
l6=si0;
L7:;
{
si0=l14;
si1=l6;
si0+=si1;
l16=si0;
si1=36U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=l12;
si0=si0 != si1;
if(si0){
goto L8;
}
si0=l16;
si1=32U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=l13;
si2=l12;
si0=f15142(i,si0,si1,si2);
si0=!(si0);
if(si0){
goto L6;
}
L8:;
si0=l15;
si1=l6;
si2=120U;
si1+=si2;
l6=si1;
si0=si0 != si1;
if(si0){
goto L7;
}
goto L5;
}
L6:;
si0=l16;
si1=56U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si0=!(si0);
if(si0){
goto L5;
}
si0=l16;
si1=64U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l14=si0;
si0=!(si0);
if(si0){
goto L5;
}
si0=l14;
si1=3U;
si0<<=(si1&31);
l14=si0;
L10:;
{
si0=l6;
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=l3;
si0=si0 != si1;
if(si0){
goto L11;
}
si0=l6;
si0=i32_load(&i->m0,(U64)si0);
si1=l2;
si2=l3;
si0=f15142(i,si0,si1,si2);
si0=!(si0);
if(si0){
goto L9;
}
L11:;
si0=l6;
si1=8U;
si0+=si1;
l6=si0;
si0=l14;
si1=-8U;
si0+=si1;
l14=si0;
si0=!(si0);
if(si0){
goto L5;
}
goto L10;
}
L9:;
si0=l5;
si1=0U;
i32_store(&i->m0,(U64)si0+36U,si1);
si0=l5;
sj1=1ULL;
i64_store(&i->m0,(U64)si0+28U,sj1);
si0=l16;
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
if(si0){
goto L15;
}
si0=l16;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si1=1114112U;
si0=si0 == si1;
if(si0){
goto L13;
}
si0=l5;
si1=19U;
i32_store(&i->m0,(U64)si0+88U,si1);
si0=l5;
si1=l6;
i32_store(&i->m0,(U64)si0+76U,si1);
si0=l5;
si1=1U;
i32_store(&i->m0,(U64)si0+44U,si1);
si0=l5;
si1=1091084U;
i32_store(&i->m0,(U64)si0+40U,si1);
si0=l5;
sj1=1ULL;
i64_store(&i->m0,(U64)si0+52U,sj1);
si0=l5;
si1=l5;
si2=76U;
si1+=si2;
i32_store(&i->m0,(U64)si0+84U,si1);
si0=l5;
si1=l5;
si2=84U;
si1+=si2;
i32_store(&i->m0,(U64)si0+48U,si1);
si0=l5;
si1=28U;
si0+=si1;
si1=1087372U;
si2=l5;
si3=40U;
si2+=si3;
si0=f621(i,si0,si1,si2);
si0=!(si0);
if(si0){
goto L14;
}
goto L12;
L15:;
si0=l5;
si1=l6;
i32_store(&i->m0,(U64)si0+76U,si1);
si0=l5;
si1=l16;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0+80U,si1);
si0=l5;
si1=1U;
i32_store(&i->m0,(U64)si0+44U,si1);
si0=l5;
si1=1091072U;
i32_store(&i->m0,(U64)si0+40U,si1);
si0=l5;
sj1=1ULL;
i64_store(&i->m0,(U64)si0+52U,sj1);
si0=l5;
si1=50U;
i32_store(&i->m0,(U64)si0+88U,si1);
si0=l5;
si1=l5;
si2=84U;
si1+=si2;
i32_store(&i->m0,(U64)si0+48U,si1);
si0=l5;
si1=l5;
si2=76U;
si1+=si2;
i32_store(&i->m0,(U64)si0+84U,si1);
si0=l5;
si1=28U;
si0+=si1;
si1=1087372U;
si2=l5;
si3=40U;
si2+=si3;
si0=f621(i,si0,si1,si2);
if(si0){
goto L12;
}
L14:;
si0=l5;
sj0=i64_load(&i->m0,(U64)si0+32U);
l17=sj0;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+28U);
l15=si0;
si0=l9;
si0=!(si0);
if(si0){
goto L4;
}
sj0=l18;
sj1=4294967295ULL;
sj0&=sj1;
si0=!(sj0);
if(si0){
goto L4;
}
si0=l9;
f15024(i,si0);
goto L4;
L13:;
si0=1090756U;
si1=43U;
si2=1091208U;
f604(i,si0,si1,si2);
UNREACHABLE;
L12:;
si0=1087396U;
si1=55U;
si2=l5;
si3=95U;
si2+=si3;
si3=1087452U;
si4=1087544U;
f641(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L5:;
sj0=l18;
l17=sj0;
si0=l9;
l15=si0;
L4:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+232U);
l16=si0;
si0=!(si0);
if(si0){
goto L17;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+224U);
l6=si0;
si0=l16;
si1=272U;
si0*=si1;
l16=si0;
L19:;
{
si0=l6;
si1=188U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=l12;
si0=si0 != si1;
if(si0){
goto L20;
}
si0=l6;
si1=184U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=l13;
si2=l12;
si0=f15142(i,si0,si1,si2);
si0=!(si0);
if(si0){
goto L18;
}
L20:;
si0=l6;
si1=272U;
si0+=si1;
l6=si0;
si0=l16;
si1=-272U;
si0+=si1;
l16=si0;
if(si0){
goto L19;
}
goto L17;
}
L18:;
si0=l6;
si1=208U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l16=si0;
si0=!(si0);
if(si0){
goto L17;
}
si0=l6;
si1=216U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l14=si0;
si0=!(si0);
if(si0){
goto L17;
}
si0=l14;
si1=3U;
si0<<=(si1&31);
l14=si0;
L22:;
{
si0=l16;
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=l3;
si0=si0 != si1;
if(si0){
goto L23;
}
si0=l16;
si0=i32_load(&i->m0,(U64)si0);
si1=l2;
si2=l3;
si0=f15142(i,si0,si1,si2);
si0=!(si0);
if(si0){
goto L21;
}
L23:;
si0=l16;
si1=8U;
si0+=si1;
l16=si0;
si0=l14;
si1=-8U;
si0+=si1;
l14=si0;
si0=!(si0);
if(si0){
goto L17;
}
goto L22;
}
L21:;
si0=l5;
si1=0U;
i32_store(&i->m0,(U64)si0+36U,si1);
si0=l5;
sj1=1ULL;
i64_store(&i->m0,(U64)si0+28U,sj1);
si0=l5;
si1=3U;
i32_store8(&i->m0,(U64)si0+72U,si1);
si0=l5;
si1=32U;
i32_store(&i->m0,(U64)si0+56U,si1);
si0=l5;
si1=0U;
i32_store(&i->m0,(U64)si0+68U,si1);
si0=l5;
si1=1087372U;
i32_store(&i->m0,(U64)si0+64U,si1);
si0=l5;
si1=0U;
i32_store(&i->m0,(U64)si0+48U,si1);
si0=l5;
si1=0U;
i32_store(&i->m0,(U64)si0+40U,si1);
si0=l5;
si1=l5;
si2=28U;
si1+=si2;
i32_store(&i->m0,(U64)si0+60U,si1);
si0=l6;
si1=l5;
si2=40U;
si1+=si2;
si0=f378(i,si0,si1);
if(si0){
goto L24;
}
si0=l5;
sj0=i64_load(&i->m0,(U64)si0+32U);
l18=sj0;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+28U);
l19=si0;
si0=l15;
si0=!(si0);
if(si0){
goto L16;
}
sj0=l17;
sj1=4294967295ULL;
sj0&=sj1;
si0=!(sj0);
if(si0){
goto L16;
}
si0=l15;
f15024(i,si0);
goto L16;
L24:;
si0=1087396U;
si1=55U;
si2=l5;
si3=95U;
si2+=si3;
si3=1087452U;
si4=1087544U;
f641(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L17:;
sj0=l17;
l18=sj0;
si0=l15;
l19=si0;
L16:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+8U);
l9=si0;
si0=!(si0);
if(si0){
goto L26;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si1=l9;
si2=248U;
si1*=si2;
si0+=si1;
l14=si0;
si0=0U;
l15=si0;
L27:;
{
si0=l14;
l16=si0;
si0=l6;
si1=l14;
si0=si0 == si1;
if(si0){
goto L29;
}
si0=l6;
si1=248U;
si0+=si1;
l16=si0;
si0=l6;
sj0=i64_load(&i->m0,(U64)si0);
sj1=2ULL;
si0=sj0 != sj1;
if(si0){
goto L28;
}
L29:;
si0=l16;
l6=si0;
si0=l15;
si1=1U;
si0+=si1;
l15=si0;
si1=l9;
si0=si0 != si1;
if(si0){
goto L27;
}
goto L26;
L28:;
si0=l6;
si1=156U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=l12;
si0=si0 != si1;
if(si0){
goto L31;
}
si0=l6;
si0=i32_load(&i->m0,(U64)si0+152U);
l20=si0;
si1=l13;
si2=l12;
si0=f15142(i,si0,si1,si2);
si0=!(si0);
if(si0){
goto L30;
}
L31:;
si0=l16;
l6=si0;
si0=l15;
si1=1U;
si0+=si1;
l15=si0;
si1=l9;
si0=si0 < si1;
if(si0){
goto L27;
}
goto L26;
L30:;
}
si0=l6;
si1=176U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l16=si0;
si0=!(si0);
if(si0){
goto L26;
}
si0=l6;
si1=184U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si0=!(si0);
if(si0){
goto L26;
}
si0=l6;
si1=3U;
si0<<=(si1&31);
l6=si0;
L33:;
{
si0=l16;
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=l3;
si0=si0 != si1;
if(si0){
goto L34;
}
si0=l16;
si0=i32_load(&i->m0,(U64)si0);
si1=l2;
si2=l3;
si0=f15142(i,si0,si1,si2);
si0=!(si0);
if(si0){
goto L32;
}
L34:;
si0=l16;
si1=8U;
si0+=si1;
l16=si0;
si0=l6;
si1=-8U;
si0+=si1;
l6=si0;
si0=!(si0);
if(si0){
goto L26;
}
goto L33;
}
L32:;
si0=l12;
if(si0){
goto L38;
}
si0=1U;
l9=si0;
goto L37;
L38:;
si0=l12;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L36;
}
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=l12;
si0=f15022(i,si0);
l9=si0;
si0=!(si0);
if(si0){
goto L35;
}
L37:;
si0=l9;
si1=l20;
si2=l12;
si0=f15143(i,si0,si1,si2);
si0=l19;
si0=!(si0);
if(si0){
goto L39;
}
sj0=l18;
sj1=4294967295ULL;
sj0&=sj1;
si0=!(sj0);
if(si0){
goto L39;
}
si0=l19;
f15024(i,si0);
L39:;
si0=l12;
sj0=(U64)(si0);
l18=sj0;
sj1=32ULL;
sj0<<=(sj1&63);
sj1=l18;
sj0|=sj1;
l18=sj0;
goto L25;
L36:;
f53(i);
UNREACHABLE;
L35:;
si0=1U;
si1=l12;
f52(i,si0,si1);
UNREACHABLE;
L26:;
si0=l19;
l9=si0;
L25:;
si0=l11;
si1=8U;
si0+=si1;
l11=si0;
si1=l10;
si0=si0 != si1;
if(si0){
goto L3;
}
}
L1:;
si0=l8;
si0=!(si0);
if(si0){
goto L40;
}
si0=l7;
f15024(i,si0);
L40:;
si0=l9;
if(si0){
goto L42;
}
si0=l5;
si1=16U;
si0+=si1;
si1=l1;
si2=l2;
si3=l3;
f216(i,si0,si1,si2,si3);
si0=0U;
l9=si0;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+16U);
l6=si0;
si0=!(si0);
if(si0){
goto L41;
}
si0=l5;
si1=8U;
si0+=si1;
si1=l6;
si2=l5;
si2=i32_load(&i->m0,(U64)si2+20U);
si2=i32_load(&i->m0,(U64)si2+32U);
TF(i->t0,si2,void (*)(rustpythonInstance*,U32,U32))(i,si0,si1);
si0=l5;
si0=i32_load(&i->m0,(U64)si0+8U);
l6=si0;
si0=!(si0);
if(si0){
goto L41;
}
si0=l6;
si1=-8U;
si0+=si1;
l6=si0;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+12U);
si1=3U;
si0<<=(si1&31);
l12=si0;
L43:;
{
si0=l12;
si0=!(si0);
if(si0){
goto L41;
}
si0=l12;
si1=-8U;
si0+=si1;
l12=si0;
si0=l6;
si1=12U;
si0+=si1;
l16=si0;
si0=l4;
si1=l6;
si2=8U;
si1+=si2;
l6=si1;
si1=i32_load(&i->m0,(U64)si1);
si2=l16;
si2=i32_load(&i->m0,(U64)si2);
si0=f439(i,si0,si1,si2);
si0=!(si0);
if(si0){
goto L43;
}
}
si0=l5;
si1=l1;
si2=l6;
si2=i32_load(&i->m0,(U64)si2);
si3=l6;
si4=4U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
f216(i,si0,si1,si2,si3);
si0=l5;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si0=!(si0);
if(si0){
goto L41;
}
si0=l5;
si0=i32_load(&i->m0,(U64)si0+4U);
l12=si0;
si0=l5;
si1=l6;
i32_store(&i->m0,(U64)si0+76U,si1);
si0=l5;
si1=l12;
i32_store(&i->m0,(U64)si0+80U,si1);
si0=l5;
si1=52U;
si0+=si1;
sj1=1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=1U;
i32_store(&i->m0,(U64)si0+44U,si1);
si0=l5;
si1=1088244U;
i32_store(&i->m0,(U64)si0+40U,si1);
si0=l5;
si1=190U;
i32_store(&i->m0,(U64)si0+88U,si1);
si0=l5;
si1=l5;
si2=84U;
si1+=si2;
i32_store(&i->m0,(U64)si0+48U,si1);
si0=l5;
si1=l5;
si2=76U;
si1+=si2;
i32_store(&i->m0,(U64)si0+84U,si1);
si0=l5;
si1=28U;
si0+=si1;
si1=l5;
si2=40U;
si1+=si2;
f64(i,si0,si1);
si0=l5;
si0=i32_load(&i->m0,(U64)si0+28U);
l9=si0;
goto L41;
L42:;
si0=l5;
sj1=l18;
i64_store(&i->m0,(U64)si0+32U,sj1);
L41:;
si0=l5;
sj0=i64_load(&i->m0,(U64)si0+32U);
l18=sj0;
si0=l5;
si1=28U;
si0+=si1;
si1=l1;
si2=l4;
si3=0U;
si4=l6;
f586(i,si0,si1,si2,si3,si4);
si0=l1;
si1=220U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l12=si0;
si0=!(si0);
if(si0){
goto L46;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+212U);
l6=si0;
si0=l12;
si1=120U;
si0*=si1;
l12=si0;
L47:;
{
si0=l6;
si1=36U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=l3;
si0=si0 != si1;
if(si0){
goto L48;
}
si0=l6;
si1=32U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=l2;
si2=l3;
si0=f15142(i,si0,si1,si2);
si0=!(si0);
if(si0){
goto L45;
}
L48:;
si0=l6;
si1=120U;
si0+=si1;
l6=si0;
si0=l12;
si1=-120U;
si0+=si1;
l12=si0;
if(si0){
goto L47;
}
}
L46:;
si0=l1;
si1=232U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l12=si0;
si0=!(si0);
if(si0){
goto L50;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+224U);
l6=si0;
si0=l12;
si1=272U;
si0*=si1;
l12=si0;
L51:;
{
si0=l6;
si1=188U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=l3;
si0=si0 != si1;
if(si0){
goto L52;
}
si0=l6;
si1=184U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=l2;
si2=l3;
si0=f15142(i,si0,si1,si2);
si0=!(si0);
if(si0){
goto L49;
}
L52:;
si0=l6;
si1=272U;
si0+=si1;
l6=si0;
si0=l12;
si1=-272U;
si0+=si1;
l12=si0;
if(si0){
goto L51;
}
}
L50:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+8U);
l15=si0;
si0=!(si0);
if(si0){
goto L54;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si1=l15;
si2=248U;
si1*=si2;
si0+=si1;
l16=si0;
si0=0U;
l14=si0;
L55:;
{
si0=l16;
l12=si0;
si0=l6;
si1=l16;
si0=si0 == si1;
if(si0){
goto L57;
}
si0=l6;
si1=248U;
si0+=si1;
l12=si0;
si0=l6;
sj0=i64_load(&i->m0,(U64)si0);
sj1=2ULL;
si0=sj0 != sj1;
if(si0){
goto L56;
}
L57:;
si0=l12;
l6=si0;
si0=l14;
si1=1U;
si0+=si1;
l14=si0;
si1=l15;
si0=si0 != si1;
if(si0){
goto L55;
}
goto L54;
L56:;
si0=l6;
si1=156U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=l3;
si0=si0 != si1;
if(si0){
goto L58;
}
si0=l6;
si0=i32_load(&i->m0,(U64)si0+152U);
si1=l2;
si2=l3;
si0=f15142(i,si0,si1,si2);
si0=!(si0);
if(si0){
goto L53;
}
L58:;
si0=l12;
l6=si0;
si0=l14;
si1=1U;
si0+=si1;
l14=si0;
si1=l15;
si0=si0 < si1;
if(si0){
goto L55;
}
}
L54:;
si0=l5;
si1=52U;
si0+=si1;
sj1=1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=1U;
i32_store(&i->m0,(U64)si0+44U,si1);
si0=l5;
si1=1088244U;
i32_store(&i->m0,(U64)si0+40U,si1);
si0=l5;
si1=50U;
i32_store(&i->m0,(U64)si0+88U,si1);
si0=l5;
si1=1088236U;
i32_store(&i->m0,(U64)si0+84U,si1);
si0=l5;
si1=l5;
si2=84U;
si1+=si2;
i32_store(&i->m0,(U64)si0+48U,si1);
si0=l5;
si1=40U;
si0+=si1;
si1=1088252U;
f614(i,si0,si1);
UNREACHABLE;
L53:;
si0=l5;
sj1=l18;
i64_store(&i->m0,(U64)si0+44U,sj1);
si0=l5;
si1=l9;
i32_store(&i->m0,(U64)si0+40U,si1);
si0=l0;
si1=l6;
si2=1087988U;
si3=l5;
si4=40U;
si3+=si4;
si4=l5;
si4=i32_load(&i->m0,(U64)si4+28U);
l12=si4;
si5=l5;
si5=i32_load(&i->m0,(U64)si5+36U);
si6=l1;
sj6=i64_load(&i->m0,(U64)si6+16U);
l18=sj6;
si6=(U32)(sj6);
si7=23U;
si6>>=(si7&31);
si7=1U;
si6&=si7;
si7=2U;
sj8=l18;
sj9=33554432ULL;
sj8&=sj9;
si8=!(sj8);
si6=si8?si6:si7;
f564(i,si0,si1,si2,si3,si4,si5,si6);
goto L44;
L49:;
si0=l5;
sj1=l18;
i64_store(&i->m0,(U64)si0+44U,sj1);
si0=l5;
si1=l9;
i32_store(&i->m0,(U64)si0+40U,si1);
si0=l0;
si1=l6;
si2=1087824U;
si3=l5;
si4=40U;
si3+=si4;
si4=l5;
si4=i32_load(&i->m0,(U64)si4+28U);
l12=si4;
si5=l5;
si5=i32_load(&i->m0,(U64)si5+36U);
si6=l1;
sj6=i64_load(&i->m0,(U64)si6+16U);
l18=sj6;
si6=(U32)(sj6);
si7=23U;
si6>>=(si7&31);
si7=1U;
si6&=si7;
si7=2U;
sj8=l18;
sj9=33554432ULL;
sj8&=sj9;
si8=!(sj8);
si6=si8?si6:si7;
f564(i,si0,si1,si2,si3,si4,si5,si6);
goto L44;
L45:;
si0=l5;
sj1=l18;
i64_store(&i->m0,(U64)si0+44U,sj1);
si0=l5;
si1=l9;
i32_store(&i->m0,(U64)si0+40U,si1);
si0=l0;
si1=l6;
si2=1088112U;
si3=l5;
si4=40U;
si3+=si4;
si4=l5;
si4=i32_load(&i->m0,(U64)si4+28U);
l12=si4;
si5=l5;
si5=i32_load(&i->m0,(U64)si5+36U);
si6=l1;
sj6=i64_load(&i->m0,(U64)si6+16U);
l18=sj6;
si6=(U32)(sj6);
si7=23U;
si6>>=(si7&31);
si7=1U;
si6&=si7;
si7=2U;
sj8=l18;
sj9=33554432ULL;
sj8&=sj9;
si8=!(sj8);
si6=si8?si6:si7;
f564(i,si0,si1,si2,si3,si4,si5,si6);
L44:;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+32U);
si0=!(si0);
if(si0){
goto L59;
}
si0=l12;
f15024(i,si0);
L59:;
si0=l5;
si1=96U;
si0+=si1;
i->g0=si0;
L0:;
}

void f301(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4) {
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
U32 si0,si1,si2,si3,si4,si5,si6,si7;
U64 sj0,sj1,sj2,sj3,sj5,sj7,sj8;
si0=i->g0;
si1=80U;
si0-=si1;
l5=si0;
i->g0=si0;
si0=l1;
sj0=i64_load(&i->m0,(U64)si0+16U);
l6=sj0;
si0=l5;
si1=64U;
si0+=si1;
si1=1091888U;
si2=4U;
f14731(i,si0,si1,si2);
sj0=l6;
si0=(U32)(sj0);
si1=23U;
si0>>=(si1&31);
si1=1U;
si0&=si1;
si1=2U;
sj2=l6;
sj3=33554432ULL;
sj2&=sj3;
si2=!(sj2);
si0=si2?si0:si1;
l7=si0;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+64U);
if(si0){
goto L2;
}
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=l5;
si0=i32_load(&i->m0,(U64)si0+68U);
l8=si0;
si0=!(si0);
if(si0){
goto L1;
}
si0=l5;
si1=72U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L1;
}
si0=l8;
f15024(i,si0);
goto L1;
L2:;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+68U);
l8=si0;
si0=!(si0);
if(si0){
goto L3;
}
si0=l5;
si1=72U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L3;
}
si0=l8;
f15024(i,si0);
L3:;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
L1:;
si0=l5;
si1=l7;
si2=2U;
si3=l7;
si1=si3?si1:si2;
i32_store8(&i->m0,(U64)si0+11U,si1);
si0=l1;
si1=280U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l9=si0;
si0=!(si0);
if(si0){
goto L8;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+272U);
l10=si0;
si0=0U;
l8=si0;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=l9;
si1=3U;
si0<<=(si1&31);
l7=si0;
si0=f15022(i,si0);
l11=si0;
si0=!(si0);
if(si0){
goto L4;
}
si0=l9;
si1=1U;
si0&=si1;
l12=si0;
si0=l9;
si1=1U;
si0=si0 == si1;
if(si0){
goto L9;
}
si0=l9;
si1=-2U;
si0&=si1;
l13=si0;
si0=0U;
l7=si0;
si0=0U;
l8=si0;
L10:;
{
si0=l11;
si1=l7;
si0+=si1;
l14=si0;
si1=l10;
si2=l7;
si1+=si2;
l15=si1;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l14;
si1=8U;
si0+=si1;
si1=l15;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l7;
si1=16U;
si0+=si1;
l7=si0;
si0=l13;
si1=l8;
si2=2U;
si1+=si2;
l8=si1;
si0=si0 != si1;
if(si0){
goto L10;
}
}
L9:;
si0=l12;
si0=!(si0);
if(si0){
goto L11;
}
si0=l11;
si1=l8;
si2=3U;
si1<<=(si2&31);
l7=si1;
si0+=si1;
si1=l10;
si2=l7;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
L11:;
si0=l5;
si1=l9;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l5;
si1=l9;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l5;
si1=l11;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l3;
if(si0){
goto L7;
}
si0=l9;
l15=si0;
goto L6;
L8:;
si0=0U;
l15=si0;
si0=l5;
si1=0U;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l5;
si1=l9;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l5;
si1=4U;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=0U;
l14=si0;
si0=l3;
si0=!(si0);
if(si0){
goto L5;
}
L7:;
si0=l5;
si1=12U;
si0+=si1;
si1=l9;
f517(i,si0,si1);
si0=l5;
si0=i32_load(&i->m0,(U64)si0+12U);
si1=l5;
si1=i32_load(&i->m0,(U64)si1+20U);
si2=3U;
si1<<=(si2&31);
si0+=si1;
l7=si0;
si1=l4;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l7;
si1=l3;
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=l5;
si1=i32_load(&i->m0,(U64)si1+20U);
si2=1U;
si1+=si2;
l15=si1;
i32_store(&i->m0,(U64)si0+20U,si1);
L6:;
si0=l15;
if(si0){
goto L13;
}
si0=0U;
l11=si0;
si0=0U;
l7=si0;
si0=0U;
l14=si0;
goto L12;
L13:;
si0=0U;
l8=si0;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+12U);
l7=si0;
L15:;
{
si0=l2;
si1=l7;
si1=i32_load(&i->m0,(U64)si1);
si2=l7;
si3=4U;
si2+=si3;
si2=i32_load(&i->m0,(U64)si2);
si0=f439(i,si0,si1,si2);
if(si0){
goto L14;
}
si0=l7;
si1=8U;
si0+=si1;
l7=si0;
si0=l15;
si1=l8;
si2=1U;
si1+=si2;
l8=si1;
si0=si0 != si1;
if(si0){
goto L15;
}
}
si0=0U;
l14=si0;
goto L5;
L14:;
si0=1U;
l14=si0;
si0=l8;
si1=1U;
si0+=si1;
l7=si0;
si0=l15;
l11=si0;
L12:;
si0=l7;
si1=l11;
si0=si0 == si1;
if(si0){
goto L16;
}
si0=l15;
si1=l7;
si0-=si1;
l8=si0;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+12U);
si1=l7;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l7=si0;
L17:;
{
si0=l2;
si1=l7;
si1=i32_load(&i->m0,(U64)si1);
si2=l7;
si3=4U;
si2+=si3;
si2=i32_load(&i->m0,(U64)si2);
si0=f439(i,si0,si1,si2);
si0=!(si0);
if(si0){
goto L19;
}
si0=l14;
si1=1U;
si0+=si1;
l14=si0;
goto L18;
L19:;
si0=l7;
si1=l14;
si2=3U;
si1<<=(si2&31);
si0-=si1;
si1=l7;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
L18:;
si0=l7;
si1=8U;
si0+=si1;
l7=si0;
si0=l8;
si1=-1U;
si0+=si1;
l8=si0;
if(si0){
goto L17;
}
}
L16:;
si0=l11;
l15=si0;
L5:;
si0=l5;
si1=l15;
si2=l14;
si1-=si2;
l8=si1;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l5;
si0=i32_load(&i->m0,(U64)si0+12U);
l13=si0;
si0=l8;
si1=2U;
si0=si0 < si1;
if(si0){
goto L20;
}
si0=l13;
si1=8U;
si0+=si1;
l7=si0;
si0=l14;
si1=-1U;
si0^=si1;
si1=l15;
si0+=si1;
l14=si0;
si0=1U;
l8=si0;
L21:;
{
si0=l7;
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l11=si0;
si1=l8;
si2=3U;
si1<<=(si2&31);
si2=l13;
si1+=si2;
l15=si1;
si2=-8U;
si1+=si2;
l10=si1;
si2=4U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
si0=si0 != si1;
if(si0){
goto L23;
}
si0=l7;
si0=i32_load(&i->m0,(U64)si0);
si1=l10;
si1=i32_load(&i->m0,(U64)si1);
si2=l11;
si0=f15142(i,si0,si1,si2);
si0=!(si0);
if(si0){
goto L22;
}
L23:;
si0=l15;
si1=l7;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l8;
si1=1U;
si0+=si1;
l8=si0;
L22:;
si0=l7;
si1=8U;
si0+=si1;
l7=si0;
si0=l14;
si1=-1U;
si0+=si1;
l14=si0;
if(si0){
goto L21;
}
}
si0=l5;
si1=l8;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l5;
si0=i32_load(&i->m0,(U64)si0+12U);
l13=si0;
L20:;
si0=1U;
l11=si0;
si0=l5;
si1=24U;
si0+=si1;
si1=l1;
si2=l13;
si3=l8;
si4=l2;
si5=l3;
si6=l4;
si7=1U;
f587(i,si0,si1,si2,si3,si4,si5,si6,si7);
si0=l5;
si0=i32_load(&i->m0,(U64)si0+28U);
l14=si0;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+36U);
l15=si0;
if(si0){
goto L25;
}
si0=0U;
l13=si0;
si0=1U;
l11=si0;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+24U);
l10=si0;
si0=0U;
l9=si0;
goto L24;
L25:;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+32U);
l7=si0;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+24U);
l10=si0;
si0=l5;
si1=l5;
si2=11U;
si1+=si2;
i32_store(&i->m0,(U64)si0+40U,si1);
si0=l5;
si1=l5;
si2=40U;
si1+=si2;
i32_store(&i->m0,(U64)si0+44U,si1);
si0=0U;
l13=si0;
si0=0U;
l9=si0;
si0=l7;
si1=0U;
si2=l14;
si3=l7;
si4=l14;
si3=si3 < si4;
si1=si3?si1:si2;
si0-=si1;
l7=si0;
si1=l14;
si2=l7;
si3=l15;
si2+=si3;
si3=l15;
si4=l14;
si5=l7;
si4-=si5;
l12=si4;
si3=si3 > si4;
si1=si3?si1:si2;
l8=si1;
si0=si0 == si1;
if(si0){
goto L26;
}
si0=l5;
si1=0U;
i32_store(&i->m0,(U64)si0+56U,si1);
si0=l5;
sj1=1ULL;
i64_store(&i->m0,(U64)si0+48U,sj1);
si0=l10;
si1=l8;
si2=12U;
si1*=si2;
si0+=si1;
si1=l10;
si2=l7;
si3=12U;
si2*=si3;
si1+=si2;
l7=si1;
si0-=si1;
si1=12U;
si0=DIV_U(si0,si1);
l8=si0;
L27:;
{
si0=l5;
si1=64U;
si0+=si1;
si1=8U;
si0+=si1;
si1=l5;
si2=48U;
si1+=si2;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=l5;
sj1=i64_load(&i->m0,(U64)si1+48U);
i64_store(&i->m0,(U64)si0+64U,sj1);
si0=l5;
si1=l7;
i32_store(&i->m0,(U64)si0+76U,si1);
si0=l5;
si1=48U;
si0+=si1;
si1=l5;
si2=44U;
si1+=si2;
si2=l5;
si3=64U;
si2+=si3;
si3=l7;
f288(i,si0,si1,si2,si3);
si0=l7;
si1=12U;
si0+=si1;
l7=si0;
si0=l8;
si1=-1U;
si0+=si1;
l8=si0;
if(si0){
goto L27;
}
}
si0=l5;
si0=i32_load(&i->m0,(U64)si0+56U);
l9=si0;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+52U);
l13=si0;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+48U);
l11=si0;
L26:;
si0=l5;
si1=l5;
si2=40U;
si1+=si2;
i32_store(&i->m0,(U64)si0+44U,si1);
si0=l15;
si1=l12;
si0=si0 <= si1;
if(si0){
goto L28;
}
si0=0U;
si1=l15;
si2=l12;
si1-=si2;
l7=si1;
si2=l7;
si3=l15;
si2=si2 > si3;
si0=si2?si0:si1;
l8=si0;
si0=l5;
si1=l9;
i32_store(&i->m0,(U64)si0+56U,si1);
si0=l5;
si1=l13;
i32_store(&i->m0,(U64)si0+52U,si1);
si0=l5;
si1=l11;
i32_store(&i->m0,(U64)si0+48U,si1);
si0=l10;
l7=si0;
L29:;
{
si0=l5;
si1=64U;
si0+=si1;
si1=8U;
si0+=si1;
si1=l5;
si2=48U;
si1+=si2;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=l5;
sj1=i64_load(&i->m0,(U64)si1+48U);
i64_store(&i->m0,(U64)si0+64U,sj1);
si0=l5;
si1=l7;
i32_store(&i->m0,(U64)si0+76U,si1);
si0=l5;
si1=48U;
si0+=si1;
si1=l5;
si2=44U;
si1+=si2;
si2=l5;
si3=64U;
si2+=si3;
si3=l7;
f288(i,si0,si1,si2,si3);
si0=l7;
si1=12U;
si0+=si1;
l7=si0;
si0=l8;
si1=-1U;
si0+=si1;
l8=si0;
if(si0){
goto L29;
}
}
si0=l5;
si0=i32_load(&i->m0,(U64)si0+56U);
l9=si0;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+52U);
l13=si0;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+48U);
l11=si0;
L28:;
si0=l15;
si0=!(si0);
if(si0){
goto L24;
}
si0=l14;
si1=l5;
si1=i32_load(&i->m0,(U64)si1+32U);
l7=si1;
si2=0U;
si3=l14;
si4=l7;
si5=l14;
si4=si4 < si5;
si2=si4?si2:si3;
si1-=si2;
l7=si1;
si2=l15;
si1+=si2;
si2=l15;
si3=l14;
si4=l7;
si3-=si4;
l12=si3;
si2=si2 > si3;
si0=si2?si0:si1;
l8=si0;
si1=l7;
si0=si0 == si1;
if(si0){
goto L30;
}
si0=l8;
si1=l7;
si0-=si1;
l8=si0;
si0=l10;
si1=l7;
si2=12U;
si1*=si2;
si0+=si1;
l7=si0;
L31:;
{
si0=l7;
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L32;
}
si0=l7;
si0=i32_load(&i->m0,(U64)si0);
f15024(i,si0);
L32:;
si0=l7;
si1=12U;
si0+=si1;
l7=si0;
si0=l8;
si1=-1U;
si0+=si1;
l8=si0;
if(si0){
goto L31;
}
}
L30:;
si0=l12;
si1=l15;
si0=si0 >= si1;
if(si0){
goto L24;
}
si0=0U;
si1=l15;
si2=l12;
si1-=si2;
l7=si1;
si2=l7;
si3=l15;
si2=si2 > si3;
si0=si2?si0:si1;
l8=si0;
si0=l10;
l7=si0;
L33:;
{
si0=l7;
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L34;
}
si0=l7;
si0=i32_load(&i->m0,(U64)si0);
f15024(i,si0);
L34:;
si0=l7;
si1=12U;
si0+=si1;
l7=si0;
si0=l8;
si1=-1U;
si0+=si1;
l8=si0;
if(si0){
goto L33;
}
}
L24:;
si0=l14;
si0=!(si0);
if(si0){
goto L35;
}
si0=l10;
f15024(i,si0);
L35:;
si0=l5;
si1=64U;
si0+=si1;
si1=l1;
si2=l2;
si3=l3;
si4=l4;
f586(i,si0,si1,si2,si3,si4);
si0=l0;
si1=l11;
si2=l9;
si3=l5;
si3=i32_load(&i->m0,(U64)si3+64U);
si4=l5;
si4=i32_load(&i->m0,(U64)si4+72U);
si5=l1;
sj5=i64_load(&i->m0,(U64)si5+16U);
l6=sj5;
si5=(U32)(sj5);
si6=23U;
si5>>=(si6&31);
si6=1U;
si5&=si6;
si6=2U;
sj7=l6;
sj8=33554432ULL;
sj7&=sj8;
si7=!(sj7);
si5=si7?si5:si6;
f569(i,si0,si1,si2,si3,si4,si5);
si0=l13;
si0=!(si0);
if(si0){
goto L36;
}
si0=l11;
f15024(i,si0);
L36:;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+16U);
si0=!(si0);
if(si0){
goto L37;
}
si0=l5;
si0=i32_load(&i->m0,(U64)si0+12U);
f15024(i,si0);
L37:;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+68U);
si0=!(si0);
if(si0){
goto L38;
}
si0=l5;
si0=i32_load(&i->m0,(U64)si0+64U);
f15024(i,si0);
L38:;
si0=l5;
si1=80U;
si0+=si1;
i->g0=si0;
goto L0;
L4:;
si0=4U;
si1=l7;
f52(i,si0,si1);
UNREACHABLE;
L0:;
}

U32 f302(rustpythonInstance*i,U32 l0) {
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
sj0=i64_load(&i->m0,(U64)si0+18663248U);
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
i64_store(&i->m0,(U64)si0+18663264U,sj1);
si0=0U;
sj1=l4;
i64_store(&i->m0,(U64)si0+18663256U,sj1);
si0=0U;
sj1=1ULL;
i64_store(&i->m0,(U64)si0+18663248U,sj1);
L2:;
si0=l1;
si1=32U;
si0+=si1;
i->g0=si0;
si0=18663256U;
goto L0;
L1:;
si0=l1;
si1=l0;
i32_store16(&i->m0,(U64)si0+30U,si1);
si0=17683216U;
si1=18U;
si2=l1;
si3=30U;
si2+=si3;
si3=17683100U;
si4=17683268U;
f641(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L0:;
return si0;
}

void f303(rustpythonInstance*i,U32 l0) {
U32 l1=0;
U32 si0,si1;
si0=l0;
f304(i,si0);
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
f15024(i,si0);
L2:;
si0=l1;
f303(i,si0);
si0=l1;
f15024(i,si0);
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
f15024(i,si0);
L3:;
L0:;
}

void f304(rustpythonInstance*i,U32 l0) {
U32 l1=0;
U32 l2=0;
U32 l3=0;
U32 l4=0;
U64 l5=0;
U32 l6=0;
U32 l7=0;
U32 l8=0;
U32 l9=0;
U64 l10=0;
U32 si0,si1,si2,si3;
U64 sj0,sj1,sj2;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+4U);
l1=si0;
si0=!(si0);
if(si0){
goto L1;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+12U);
l3=si0;
si0=!(si0);
if(si0){
goto L2;
}
si0=l2;
si1=8U;
si0+=si1;
l4=si0;
si0=l2;
sj0=i64_load(&i->m0,(U64)si0);
sj1=-1ULL;
sj0^=sj1;
sj1=-9187201950435737472ULL;
sj0&=sj1;
l5=sj0;
si0=l2;
l6=si0;
L3:;
{
sj0=l5;
sj1=0ULL;
si0=sj0 != sj1;
if(si0){
goto L4;
}
si0=l4;
l0=si0;
L5:;
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
goto L5;
}
}
L4:;
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
l7=si0;
si1=-20U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L6;
}
si0=l7;
si1=-24U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
f15024(i,si0);
L6:;
si0=l7;
si1=-40U;
si0+=si1;
l0=si0;
si1=28U;
si0+=si1;
l8=si0;
si0=l0;
si1=36U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l9=si0;
si0=!(si0);
if(si0){
goto L7;
}
si0=l8;
si0=i32_load(&i->m0,(U64)si0);
l0=si0;
L8:;
{
si0=l0;
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
l0=si0;
si0=l9;
si1=-1U;
si0+=si1;
l9=si0;
if(si0){
goto L8;
}
}
L7:;
sj0=l5;
sj1=-1ULL;
sj0+=sj1;
l10=sj0;
si0=l7;
si1=-8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L10;
}
si0=l8;
si0=i32_load(&i->m0,(U64)si0);
f15024(i,si0);
L10:;
sj0=l10;
sj1=l5;
sj0&=sj1;
l5=sj0;
si0=l3;
si1=-1U;
si0+=si1;
l3=si0;
if(si0){
goto L3;
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
si0=l2;
si1=l0;
si0-=si1;
f15024(i,si0);
L1:;
L0:;
}

void f305(rustpythonInstance*i,U32 l0,U32 l1,U64 l2,U32 l3,U32 l4) {
U32 l5=0;
U32 l6=0;
U64 l7=0;
U32 l8=0;
U32 l9=0;
U32 l10=0;
U32 l11=0;
U64 l12=0;
U32 l13=0;
U32 l14=0;
U32 si0,si1,si2,si3;
U64 sj0,sj1,sj2,sj3;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si1=-40U;
si0+=si1;
l6=si0;
sj0=l2;
sj1=25ULL;
sj0>>=(sj1&63);
sj1=127ULL;
sj0&=sj1;
sj1=72340172838076673ULL;
sj0*=sj1;
l7=sj0;
sj0=l2;
si0=(U32)(sj0);
l8=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
l9=si0;
si0=0U;
l10=si0;
L1:;
{
si0=l5;
si1=l8;
si2=l9;
si1&=si2;
l11=si1;
si0+=si1;
sj0=i64_load(&i->m0,(U64)si0);
l12=sj0;
sj1=l7;
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
goto L2;
}
L4:;
{
si0=l6;
si1=0U;
sj2=l2;
sj2=I64_CTZ(sj2);
si2=(U32)(sj2);
si3=3U;
si2>>=(si3&31);
si3=l11;
si2+=si3;
si3=l9;
si2&=si3;
l13=si2;
si1-=si2;
l14=si1;
si2=40U;
si1*=si2;
si0+=si1;
l8=si0;
si0=i32_load(&i->m0,(U64)si0+4U);
si1=l4;
si0=si0 != si1;
if(si0){
goto L5;
}
si0=l3;
si1=l8;
si1=i32_load(&i->m0,(U64)si1);
si2=l4;
si0=f15142(i,si0,si1,si2);
si0=!(si0);
if(si0){
goto L3;
}
L5:;
sj0=l2;
sj1=-1ULL;
sj0+=sj1;
sj1=l2;
sj0&=sj1;
l2=sj0;
si0=!(sj0);
if(si0){
goto L2;
}
goto L4;
}
L3:;
si0=l5;
si1=l14;
si2=40U;
si1*=si2;
si0+=si1;
l8=si0;
si0=128U;
l4=si0;
si0=l5;
si1=l13;
si2=40U;
si1*=si2;
si2=40U;
si1=I32_DIV_S(si1,si2);
l11=si1;
si0+=si1;
l6=si0;
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
si1=l5;
si2=l11;
si3=-8U;
si2+=si3;
si3=l9;
si2&=si3;
si1+=si2;
l11=si1;
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
goto L6;
}
si0=l1;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+8U);
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=255U;
l4=si0;
L6:;
si0=l6;
si1=l4;
i32_store8(&i->m0,(U64)si0,si1);
si0=l11;
si1=8U;
si0+=si1;
si1=l4;
i32_store8(&i->m0,(U64)si0,si1);
si0=l1;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+12U);
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l0;
si1=l8;
si2=-40U;
si1+=si2;
l4=si1;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=8U;
si0+=si1;
si1=l4;
si2=8U;
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
si1=24U;
si0+=si1;
si1=l4;
si2=24U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=32U;
si0+=si1;
si1=l4;
si2=32U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
goto L0;
L2:;
sj0=l12;
sj1=l12;
sj2=1ULL;
sj1<<=(sj2&63);
sj0&=sj1;
sj1=-9187201950435737472ULL;
sj0&=sj1;
si0=!(sj0);
si0=!(si0);
if(si0){
goto L7;
}
si0=l11;
si1=l10;
si2=8U;
si1+=si2;
l10=si1;
si0+=si1;
l8=si0;
goto L1;
L7:;
}
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
L0:;
}

U32 f306(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
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
U32 si0,si1,si2,si3,si4,si5;
U64 sj0,sj1,sj2,sj3;
si0=i->g0;
si1=32U;
si0-=si1;
l3=si0;
i->g0=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+12U);
l4=si0;
si1=l1;
si0+=si1;
l1=si0;
si1=l4;
si0=si0 < si1;
if(si0){
goto L4;
}
si0=l1;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+4U);
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
goto L7;
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
goto L8;
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
si1=1170656U;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l3;
si1=1170664U;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l3;
si1=8U;
si0+=si1;
si1=1170748U;
f614(i,si0,si1);
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
sj0=(U64)(si0);
sj1=40ULL;
sj0*=sj1;
l9=sj0;
sj1=32ULL;
sj0>>=(sj1&63);
si0=(U32)(sj0);
if(si0){
goto L5;
}
sj0=l9;
si0=(U32)(sj0);
l10=si0;
si1=l1;
si2=8U;
si1+=si2;
l11=si1;
si0+=si1;
l7=si0;
si1=l10;
si0=si0 < si1;
if(si0){
goto L5;
}
si0=l7;
si1=2147483641U;
si0=si0 >= si1;
if(si0){
goto L5;
}
si0=l7;
if(si0){
goto L12;
}
si0=8U;
l12=si0;
goto L11;
L12:;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=l7;
si1=7U;
si0=si0 > si1;
if(si0){
goto L14;
}
si0=8U;
si1=l7;
si0=f15030(i,si0,si1);
l12=si0;
goto L13;
L14:;
si0=l7;
si0=f15022(i,si0);
l12=si0;
L13:;
si0=l12;
si0=!(si0);
if(si0){
goto L6;
}
L11:;
si0=l12;
si1=l10;
si0+=si1;
si1=255U;
si2=l11;
si0=f15145(i,si0,si1,si2);
l10=si0;
si0=l1;
si1=-1U;
si0+=si1;
l12=si0;
si1=l1;
si2=3U;
si1>>=(si2&31);
si2=7U;
si1*=si2;
si2=l1;
si3=9U;
si2=si2 < si3;
si0=si2?si0:si1;
si1=l4;
si0-=si1;
l13=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
l14=si0;
si0=l6;
if(si0){
goto L15;
}
si0=l0;
si1=l13;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l0;
si1=l12;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l10;
i32_store(&i->m0,(U64)si0,si1);
goto L2;
L15:;
si0=l14;
si1=-40U;
si0+=si1;
l15=si0;
si0=0U;
l11=si0;
L16:;
{
si0=l14;
si1=l11;
si0+=si1;
si0=i32_load8_s(&i->m0,(U64)si0);
si1=0U;
si0=(U32)((I32)si0<(I32)si1);
if(si0){
goto L17;
}
si0=l10;
si1=l12;
si2=l2;
si3=l15;
si4=0U;
si5=l11;
si4-=si5;
si5=40U;
si4*=si5;
si3+=si4;
sj2=f493(i,si2,si3);
si2=(U32)(sj2);
l16=si2;
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
goto L18;
}
si0=8U;
l1=si0;
L19:;
{
si0=l7;
si1=l1;
si0+=si1;
l7=si0;
si0=l1;
si1=8U;
si0+=si1;
l1=si0;
si0=l10;
si1=l7;
si2=l12;
si1&=si2;
l7=si1;
si0+=si1;
sj0=i64_load(&i->m0,(U64)si0);
sj1=-9187201950435737472ULL;
sj0&=sj1;
l9=sj0;
si0=!(sj0);
if(si0){
goto L19;
}
}
L18:;
si0=l10;
sj1=l9;
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
goto L20;
}
si0=l10;
sj0=i64_load(&i->m0,(U64)si0);
sj1=-9187201950435737472ULL;
sj0&=sj1;
sj0=I64_CTZ(sj0);
si0=(U32)(sj0);
si1=3U;
si0>>=(si1&31);
l1=si0;
L20:;
si0=l10;
si1=l1;
si0+=si1;
si1=l16;
si2=25U;
si1>>=(si2&31);
l7=si1;
i32_store8(&i->m0,(U64)si0,si1);
si0=l1;
si1=-8U;
si0+=si1;
si1=l12;
si0&=si1;
si1=l10;
si0+=si1;
si1=8U;
si0+=si1;
si1=l7;
i32_store8(&i->m0,(U64)si0,si1);
si0=l1;
si1=-40U;
si0*=si1;
si1=l10;
si0+=si1;
si1=-40U;
si0+=si1;
l1=si0;
si1=32U;
si0+=si1;
si1=l11;
si2=-40U;
si1*=si2;
si2=l14;
si1+=si2;
si2=-40U;
si1+=si2;
l7=si1;
si2=32U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si1=24U;
si0+=si1;
si1=l7;
si2=24U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si1=16U;
si0+=si1;
si1=l7;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si1=8U;
si0+=si1;
si1=l7;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si1=l7;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
L17:;
si0=l11;
si1=l5;
si0=si0 == si1;
l1=si0;
si0=l11;
si1=1U;
si0+=si1;
l11=si0;
si0=l1;
if(si0){
goto L3;
}
goto L16;
}
L7:;
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
goto L21;
}
si0=l7;
si1=1U;
si0&=si1;
l11=si0;
si0=l7;
si1=1U;
si0=si0 == si1;
if(si0){
goto L22;
}
si0=l7;
si1=1073741822U;
si0&=si1;
l10=si0;
si0=0U;
l1=si0;
L23:;
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
goto L23;
}
}
L22:;
si0=l11;
si0=!(si0);
if(si0){
goto L21;
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
L21:;
si0=l6;
si1=8U;
si0=si0 < si1;
if(si0){
goto L26;
}
si0=l12;
si1=l6;
si0+=si1;
si1=l12;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
goto L25;
L26:;
si0=l12;
si1=8U;
si0+=si1;
si1=l12;
si2=l6;
si0=f15144(i,si0,si1,si2);
si0=l6;
si0=!(si0);
if(si0){
goto L24;
}
L25:;
si0=l12;
si1=-40U;
si0+=si1;
l17=si0;
si0=0U;
l1=si0;
L27:;
{
si0=l12;
si1=l1;
l15=si1;
si0+=si1;
l13=si0;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=128U;
si0=si0 != si1;
if(si0){
goto L28;
}
si0=l17;
si1=0U;
si2=l15;
si1-=si2;
si2=40U;
si1*=si2;
si0+=si1;
l6=si0;
si0=l15;
si1=-40U;
si0*=si1;
si1=l12;
si0+=si1;
si1=-40U;
si0+=si1;
l7=si0;
L30:;
{
si0=l5;
si1=l2;
si2=l6;
sj1=f493(i,si1,si2);
si1=(U32)(sj1);
l14=si1;
si0&=si1;
l11=si0;
l10=si0;
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
goto L31;
}
si0=8U;
l1=si0;
si0=l11;
l10=si0;
L32:;
{
si0=l10;
si1=l1;
si0+=si1;
l10=si0;
si0=l1;
si1=8U;
si0+=si1;
l1=si0;
si0=l12;
si1=l10;
si2=l5;
si1&=si2;
l10=si1;
si0+=si1;
sj0=i64_load(&i->m0,(U64)si0);
sj1=-9187201950435737472ULL;
sj0&=sj1;
l9=sj0;
si0=!(sj0);
if(si0){
goto L32;
}
}
L31:;
si0=l12;
sj1=l9;
sj1=I64_CTZ(sj1);
si1=(U32)(sj1);
si2=3U;
si1>>=(si2&31);
si2=l10;
si1+=si2;
si2=l5;
si1&=si2;
l1=si1;
si0+=si1;
si0=i32_load8_s(&i->m0,(U64)si0);
si1=0U;
si0=(U32)((I32)si0<(I32)si1);
if(si0){
goto L33;
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
L33:;
si0=l1;
si1=l11;
si0-=si1;
si1=l15;
si2=l11;
si1-=si2;
si0^=si1;
si1=l5;
si0&=si1;
si1=8U;
si0=si0 < si1;
if(si0){
goto L29;
}
si0=l12;
si1=l1;
si0+=si1;
l10=si0;
si0=i32_load8_u(&i->m0,(U64)si0);
l11=si0;
si0=l10;
si1=l14;
si2=25U;
si1>>=(si2&31);
l14=si1;
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
si1=l14;
i32_store8(&i->m0,(U64)si0,si1);
si0=l1;
si1=-40U;
si0*=si1;
si1=l12;
si0+=si1;
si1=-40U;
si0+=si1;
l1=si0;
si0=l11;
si1=255U;
si0=si0 == si1;
if(si0){
goto L34;
}
si0=l7;
si0=i32_load8_u(&i->m0,(U64)si0);
l10=si0;
si0=l7;
si1=l1;
si1=i32_load8_u(&i->m0,(U64)si1);
i32_store8(&i->m0,(U64)si0,si1);
si0=l7;
si0=i32_load8_u(&i->m0,(U64)si0+1U);
l11=si0;
si0=l7;
si1=l1;
si1=i32_load8_u(&i->m0,(U64)si1+1U);
i32_store8(&i->m0,(U64)si0+1U,si1);
si0=l7;
si0=i32_load8_u(&i->m0,(U64)si0+2U);
l14=si0;
si0=l7;
si1=l1;
si1=i32_load8_u(&i->m0,(U64)si1+2U);
i32_store8(&i->m0,(U64)si0+2U,si1);
si0=l7;
si0=i32_load8_u(&i->m0,(U64)si0+3U);
l16=si0;
si0=l7;
si1=l1;
si1=i32_load8_u(&i->m0,(U64)si1+3U);
i32_store8(&i->m0,(U64)si0+3U,si1);
si0=l1;
si1=l10;
i32_store8(&i->m0,(U64)si0,si1);
si0=l1;
si1=l11;
i32_store8(&i->m0,(U64)si0+1U,si1);
si0=l1;
si1=l14;
i32_store8(&i->m0,(U64)si0+2U,si1);
si0=l1;
si1=l16;
i32_store8(&i->m0,(U64)si0+3U,si1);
si0=l7;
si0=i32_load8_u(&i->m0,(U64)si0+4U);
l10=si0;
si0=l7;
si1=l1;
si1=i32_load8_u(&i->m0,(U64)si1+4U);
i32_store8(&i->m0,(U64)si0+4U,si1);
si0=l1;
si1=l10;
i32_store8(&i->m0,(U64)si0+4U,si1);
si0=l7;
si0=i32_load8_u(&i->m0,(U64)si0+5U);
l10=si0;
si0=l7;
si1=l1;
si1=i32_load8_u(&i->m0,(U64)si1+5U);
i32_store8(&i->m0,(U64)si0+5U,si1);
si0=l1;
si1=l10;
i32_store8(&i->m0,(U64)si0+5U,si1);
si0=l7;
si0=i32_load8_u(&i->m0,(U64)si0+6U);
l10=si0;
si0=l7;
si1=l1;
si1=i32_load8_u(&i->m0,(U64)si1+6U);
i32_store8(&i->m0,(U64)si0+6U,si1);
si0=l1;
si1=l10;
i32_store8(&i->m0,(U64)si0+6U,si1);
si0=l7;
si0=i32_load8_u(&i->m0,(U64)si0+7U);
l10=si0;
si0=l7;
si1=l1;
si1=i32_load8_u(&i->m0,(U64)si1+7U);
i32_store8(&i->m0,(U64)si0+7U,si1);
si0=l1;
si1=l10;
i32_store8(&i->m0,(U64)si0+7U,si1);
si0=l7;
si0=i32_load8_u(&i->m0,(U64)si0+8U);
l10=si0;
si0=l7;
si1=l1;
si1=i32_load8_u(&i->m0,(U64)si1+8U);
i32_store8(&i->m0,(U64)si0+8U,si1);
si0=l1;
si1=l10;
i32_store8(&i->m0,(U64)si0+8U,si1);
si0=l7;
si0=i32_load8_u(&i->m0,(U64)si0+9U);
l10=si0;
si0=l7;
si1=l1;
si1=i32_load8_u(&i->m0,(U64)si1+9U);
i32_store8(&i->m0,(U64)si0+9U,si1);
si0=l1;
si1=l10;
i32_store8(&i->m0,(U64)si0+9U,si1);
si0=l7;
si0=i32_load8_u(&i->m0,(U64)si0+10U);
l10=si0;
si0=l7;
si1=l1;
si1=i32_load8_u(&i->m0,(U64)si1+10U);
i32_store8(&i->m0,(U64)si0+10U,si1);
si0=l1;
si1=l10;
i32_store8(&i->m0,(U64)si0+10U,si1);
si0=l7;
si0=i32_load8_u(&i->m0,(U64)si0+11U);
l10=si0;
si0=l7;
si1=l1;
si1=i32_load8_u(&i->m0,(U64)si1+11U);
i32_store8(&i->m0,(U64)si0+11U,si1);
si0=l1;
si1=l10;
i32_store8(&i->m0,(U64)si0+11U,si1);
si0=l7;
si0=i32_load8_u(&i->m0,(U64)si0+12U);
l10=si0;
si0=l7;
si1=l1;
si1=i32_load8_u(&i->m0,(U64)si1+12U);
i32_store8(&i->m0,(U64)si0+12U,si1);
si0=l1;
si1=l10;
i32_store8(&i->m0,(U64)si0+12U,si1);
si0=l7;
si0=i32_load8_u(&i->m0,(U64)si0+13U);
l10=si0;
si0=l7;
si1=l1;
si1=i32_load8_u(&i->m0,(U64)si1+13U);
i32_store8(&i->m0,(U64)si0+13U,si1);
si0=l1;
si1=l10;
i32_store8(&i->m0,(U64)si0+13U,si1);
si0=l7;
si0=i32_load8_u(&i->m0,(U64)si0+14U);
l10=si0;
si0=l7;
si1=l1;
si1=i32_load8_u(&i->m0,(U64)si1+14U);
i32_store8(&i->m0,(U64)si0+14U,si1);
si0=l1;
si1=l10;
i32_store8(&i->m0,(U64)si0+14U,si1);
si0=l7;
si0=i32_load8_u(&i->m0,(U64)si0+15U);
l10=si0;
si0=l7;
si1=l1;
si1=i32_load8_u(&i->m0,(U64)si1+15U);
i32_store8(&i->m0,(U64)si0+15U,si1);
si0=l1;
si1=l10;
i32_store8(&i->m0,(U64)si0+15U,si1);
si0=l7;
si0=i32_load8_u(&i->m0,(U64)si0+16U);
l10=si0;
si0=l7;
si1=l1;
si1=i32_load8_u(&i->m0,(U64)si1+16U);
i32_store8(&i->m0,(U64)si0+16U,si1);
si0=l1;
si1=l10;
i32_store8(&i->m0,(U64)si0+16U,si1);
si0=l7;
si0=i32_load8_u(&i->m0,(U64)si0+17U);
l10=si0;
si0=l7;
si1=l1;
si1=i32_load8_u(&i->m0,(U64)si1+17U);
i32_store8(&i->m0,(U64)si0+17U,si1);
si0=l1;
si1=l10;
i32_store8(&i->m0,(U64)si0+17U,si1);
si0=l7;
si0=i32_load8_u(&i->m0,(U64)si0+18U);
l10=si0;
si0=l7;
si1=l1;
si1=i32_load8_u(&i->m0,(U64)si1+18U);
i32_store8(&i->m0,(U64)si0+18U,si1);
si0=l1;
si1=l10;
i32_store8(&i->m0,(U64)si0+18U,si1);
si0=l7;
si0=i32_load8_u(&i->m0,(U64)si0+19U);
l10=si0;
si0=l7;
si1=l1;
si1=i32_load8_u(&i->m0,(U64)si1+19U);
i32_store8(&i->m0,(U64)si0+19U,si1);
si0=l1;
si1=l10;
i32_store8(&i->m0,(U64)si0+19U,si1);
si0=l7;
si0=i32_load8_u(&i->m0,(U64)si0+20U);
l10=si0;
si0=l7;
si1=l1;
si1=i32_load8_u(&i->m0,(U64)si1+20U);
i32_store8(&i->m0,(U64)si0+20U,si1);
si0=l1;
si1=l10;
i32_store8(&i->m0,(U64)si0+20U,si1);
si0=l7;
si0=i32_load8_u(&i->m0,(U64)si0+21U);
l10=si0;
si0=l7;
si1=l1;
si1=i32_load8_u(&i->m0,(U64)si1+21U);
i32_store8(&i->m0,(U64)si0+21U,si1);
si0=l1;
si1=l10;
i32_store8(&i->m0,(U64)si0+21U,si1);
si0=l7;
si0=i32_load8_u(&i->m0,(U64)si0+22U);
l10=si0;
si0=l7;
si1=l1;
si1=i32_load8_u(&i->m0,(U64)si1+22U);
i32_store8(&i->m0,(U64)si0+22U,si1);
si0=l1;
si1=l10;
i32_store8(&i->m0,(U64)si0+22U,si1);
si0=l7;
si0=i32_load8_u(&i->m0,(U64)si0+23U);
l10=si0;
si0=l7;
si1=l1;
si1=i32_load8_u(&i->m0,(U64)si1+23U);
i32_store8(&i->m0,(U64)si0+23U,si1);
si0=l1;
si1=l10;
i32_store8(&i->m0,(U64)si0+23U,si1);
si0=l7;
si0=i32_load8_u(&i->m0,(U64)si0+24U);
l10=si0;
si0=l7;
si1=l1;
si1=i32_load8_u(&i->m0,(U64)si1+24U);
i32_store8(&i->m0,(U64)si0+24U,si1);
si0=l1;
si1=l10;
i32_store8(&i->m0,(U64)si0+24U,si1);
si0=l7;
si0=i32_load8_u(&i->m0,(U64)si0+25U);
l10=si0;
si0=l7;
si1=l1;
si1=i32_load8_u(&i->m0,(U64)si1+25U);
i32_store8(&i->m0,(U64)si0+25U,si1);
si0=l1;
si1=l10;
i32_store8(&i->m0,(U64)si0+25U,si1);
si0=l7;
si0=i32_load8_u(&i->m0,(U64)si0+26U);
l10=si0;
si0=l7;
si1=l1;
si1=i32_load8_u(&i->m0,(U64)si1+26U);
i32_store8(&i->m0,(U64)si0+26U,si1);
si0=l1;
si1=l10;
i32_store8(&i->m0,(U64)si0+26U,si1);
si0=l7;
si0=i32_load8_u(&i->m0,(U64)si0+27U);
l10=si0;
si0=l7;
si1=l1;
si1=i32_load8_u(&i->m0,(U64)si1+27U);
i32_store8(&i->m0,(U64)si0+27U,si1);
si0=l1;
si1=l10;
i32_store8(&i->m0,(U64)si0+27U,si1);
si0=l7;
si0=i32_load8_u(&i->m0,(U64)si0+28U);
l10=si0;
si0=l7;
si1=l1;
si1=i32_load8_u(&i->m0,(U64)si1+28U);
i32_store8(&i->m0,(U64)si0+28U,si1);
si0=l1;
si1=l10;
i32_store8(&i->m0,(U64)si0+28U,si1);
si0=l7;
si0=i32_load8_u(&i->m0,(U64)si0+29U);
l10=si0;
si0=l7;
si1=l1;
si1=i32_load8_u(&i->m0,(U64)si1+29U);
i32_store8(&i->m0,(U64)si0+29U,si1);
si0=l1;
si1=l10;
i32_store8(&i->m0,(U64)si0+29U,si1);
si0=l7;
si0=i32_load8_u(&i->m0,(U64)si0+30U);
l10=si0;
si0=l7;
si1=l1;
si1=i32_load8_u(&i->m0,(U64)si1+30U);
i32_store8(&i->m0,(U64)si0+30U,si1);
si0=l1;
si1=l10;
i32_store8(&i->m0,(U64)si0+30U,si1);
si0=l7;
si0=i32_load8_u(&i->m0,(U64)si0+31U);
l10=si0;
si0=l7;
si1=l1;
si1=i32_load8_u(&i->m0,(U64)si1+31U);
i32_store8(&i->m0,(U64)si0+31U,si1);
si0=l1;
si1=l10;
i32_store8(&i->m0,(U64)si0+31U,si1);
si0=l7;
si0=i32_load8_u(&i->m0,(U64)si0+32U);
l10=si0;
si0=l7;
si1=l1;
si1=i32_load8_u(&i->m0,(U64)si1+32U);
i32_store8(&i->m0,(U64)si0+32U,si1);
si0=l1;
si1=l10;
i32_store8(&i->m0,(U64)si0+32U,si1);
si0=l7;
si0=i32_load8_u(&i->m0,(U64)si0+33U);
l10=si0;
si0=l7;
si1=l1;
si1=i32_load8_u(&i->m0,(U64)si1+33U);
i32_store8(&i->m0,(U64)si0+33U,si1);
si0=l1;
si1=l10;
i32_store8(&i->m0,(U64)si0+33U,si1);
si0=l7;
si0=i32_load8_u(&i->m0,(U64)si0+34U);
l10=si0;
si0=l7;
si1=l1;
si1=i32_load8_u(&i->m0,(U64)si1+34U);
i32_store8(&i->m0,(U64)si0+34U,si1);
si0=l1;
si1=l10;
i32_store8(&i->m0,(U64)si0+34U,si1);
si0=l7;
si0=i32_load8_u(&i->m0,(U64)si0+35U);
l10=si0;
si0=l7;
si1=l1;
si1=i32_load8_u(&i->m0,(U64)si1+35U);
i32_store8(&i->m0,(U64)si0+35U,si1);
si0=l1;
si1=l10;
i32_store8(&i->m0,(U64)si0+35U,si1);
si0=l7;
si0=i32_load8_u(&i->m0,(U64)si0+36U);
l10=si0;
si0=l7;
si1=l1;
si1=i32_load8_u(&i->m0,(U64)si1+36U);
i32_store8(&i->m0,(U64)si0+36U,si1);
si0=l1;
si1=l10;
i32_store8(&i->m0,(U64)si0+36U,si1);
si0=l7;
si0=i32_load8_u(&i->m0,(U64)si0+37U);
l10=si0;
si0=l7;
si1=l1;
si1=i32_load8_u(&i->m0,(U64)si1+37U);
i32_store8(&i->m0,(U64)si0+37U,si1);
si0=l1;
si1=l10;
i32_store8(&i->m0,(U64)si0+37U,si1);
si0=l7;
si0=i32_load8_u(&i->m0,(U64)si0+38U);
l10=si0;
si0=l7;
si1=l1;
si1=i32_load8_u(&i->m0,(U64)si1+38U);
i32_store8(&i->m0,(U64)si0+38U,si1);
si0=l1;
si1=l10;
i32_store8(&i->m0,(U64)si0+38U,si1);
si0=l7;
si0=i32_load8_u(&i->m0,(U64)si0+39U);
l10=si0;
si0=l7;
si1=l1;
si1=i32_load8_u(&i->m0,(U64)si1+39U);
i32_store8(&i->m0,(U64)si0+39U,si1);
si0=l1;
si1=l10;
i32_store8(&i->m0,(U64)si0+39U,si1);
goto L30;
L34:;
}
si0=l13;
si1=255U;
i32_store8(&i->m0,(U64)si0,si1);
si0=l15;
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
si1=32U;
si0+=si1;
si1=l7;
si2=32U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si1=24U;
si0+=si1;
si1=l7;
si2=24U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si1=16U;
si0+=si1;
si1=l7;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si1=8U;
si0+=si1;
si1=l7;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si1=l7;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
goto L28;
L29:;
si0=l13;
si1=l14;
si2=25U;
si1>>=(si2&31);
l1=si1;
i32_store8(&i->m0,(U64)si0,si1);
si0=l15;
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
L28:;
si0=l15;
si1=1U;
si0+=si1;
l1=si0;
si0=l15;
si1=l5;
si0=si0 != si1;
if(si0){
goto L27;
}
}
L24:;
si0=l0;
si1=l8;
si2=l4;
si1-=si2;
i32_store(&i->m0,(U64)si0+8U,si1);
goto L1;
L6:;
si0=8U;
si1=l7;
f52(i,si0,si1);
UNREACHABLE;
L5:;
si0=l3;
si1=20U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=1U;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l3;
si1=1170656U;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l3;
si1=1170664U;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l3;
si1=8U;
si0+=si1;
si1=1170748U;
f614(i,si0,si1);
UNREACHABLE;
L4:;
si0=l3;
si1=20U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=1U;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l3;
si1=1170656U;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l3;
si1=1170664U;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l3;
si1=8U;
si0+=si1;
si1=1170748U;
f614(i,si0,si1);
UNREACHABLE;
L3:;
si0=l0;
si1=l13;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l0;
si1=l12;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l10;
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si0=!(si0);
if(si0){
goto L1;
}
L2:;
si0=l5;
si1=l6;
sj1=(U64)(si1);
sj2=40ULL;
sj1*=sj2;
si1=(U32)(sj1);
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
f15024(i,si0);
L1:;
si0=l3;
si1=32U;
si0+=si1;
i->g0=si0;
si0=-2147483647U;
L0:;
return si0;
}

void f307(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4,U32 l5) {
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
U32 si0,si1,si2,si3,si4;
U64 sj0,sj1,sj2;
si0=i->g0;
si1=96U;
si0-=si1;
l6=si0;
i->g0=si0;
si0=l1;
si0=!(si0);
if(si0){
goto L1;
}
si0=l6;
si1=48U;
si0+=si1;
si1=l1;
si2=l2;
si2=i32_load(&i->m0,(U64)si2+20U);
TF(i->t0,si2,void (*)(rustpythonInstance*,U32,U32))(i,si0,si1);
si0=l6;
si0=i32_load(&i->m0,(U64)si0+48U);
l7=si0;
if(si0){
goto L3;
}
si0=1U;
l8=si0;
goto L2;
L3:;
si0=l6;
si0=i32_load(&i->m0,(U64)si0+52U);
l8=si0;
if(si0){
goto L5;
}
si0=0U;
l9=si0;
goto L4;
L5:;
si0=l7;
si1=l8;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l10=si0;
si0=l0;
si1=16U;
si0+=si1;
l11=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
l12=si0;
si1=-8U;
si0+=si1;
l13=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+8U);
l14=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+16U);
l15=si0;
si0=0U;
l9=si0;
L6:;
{
si0=l6;
si1=40U;
si0+=si1;
si1=l1;
si2=l15;
TF(i->t0,si2,void (*)(rustpythonInstance*,U32,U32))(i,si0,si1);
si0=l7;
si0=i32_load(&i->m0,(U64)si0);
l16=si0;
si0=l7;
si1=4U;
si0+=si1;
l17=si0;
si0=i32_load(&i->m0,(U64)si0);
l8=si0;
si1=l6;
si1=i32_load(&i->m0,(U64)si1+44U);
l18=si1;
si0=si0 != si1;
if(si0){
goto L10;
}
si0=l16;
si1=l6;
si1=i32_load(&i->m0,(U64)si1+40U);
si2=l18;
si0=f15142(i,si0,si1,si2);
si0=!(si0);
if(si0){
goto L9;
}
L10:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+32U);
l18=si0;
si0=!(si0);
if(si0){
goto L11;
}
si0=l18;
si1=56U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=l8;
si0=si0 != si1;
if(si0){
goto L11;
}
si0=l18;
si0=i32_load(&i->m0,(U64)si0+48U);
si1=l16;
si2=l8;
si0=f15142(i,si0,si1,si2);
si0=!(si0);
if(si0){
goto L8;
}
L11:;
si0=l0;
si1=l16;
si2=l8;
si0=f439(i,si0,si1,si2);
l18=si0;
si0=l17;
si0=i32_load(&i->m0,(U64)si0);
l8=si0;
si0=l7;
si0=i32_load(&i->m0,(U64)si0);
l16=si0;
si0=l18;
if(si0){
goto L8;
}
si0=l6;
si1=32U;
si0+=si1;
si1=l1;
si2=l15;
TF(i->t0,si2,void (*)(rustpythonInstance*,U32,U32))(i,si0,si1);
si0=l6;
si0=i32_load(&i->m0,(U64)si0+36U);
l17=si0;
si0=l6;
si0=i32_load(&i->m0,(U64)si0+32U);
l19=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+8U);
l18=si0;
si1=l3;
si1=i32_load(&i->m0,(U64)si1+4U);
si0=si0 != si1;
if(si0){
goto L12;
}
si0=l3;
si1=l18;
f520(i,si0,si1);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+8U);
l18=si0;
L12:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
si1=l18;
si2=4U;
si1<<=(si2&31);
si0+=si1;
l18=si0;
si1=l17;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l18;
si1=l19;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l18;
si1=l8;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l18;
si1=l16;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=l3;
si1=i32_load(&i->m0,(U64)si1+8U);
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0+8U,si1);
goto L7;
L9:;
si0=1U;
l9=si0;
si0=l1;
si1=l2;
si1=i32_load(&i->m0,(U64)si1+48U);
si0=TF(i->t0,si1,U32 (*)(rustpythonInstance*,U32))(i,si0);
si0=!(si0);
if(si0){
goto L7;
}
si0=1U;
l9=si0;
si0=l1;
si1=1U;
si2=l2;
si2=i32_load(&i->m0,(U64)si2+40U);
si0=TF(i->t0,si2,U32 (*)(rustpythonInstance*,U32,U32))(i,si0,si1);
if(si0){
goto L7;
}
si0=l6;
si1=16U;
si0+=si1;
si1=l1;
si2=l15;
TF(i->t0,si2,void (*)(rustpythonInstance*,U32,U32))(i,si0,si1);
si0=l0;
si1=l6;
si1=i32_load(&i->m0,(U64)si1+16U);
si2=l6;
si2=i32_load(&i->m0,(U64)si2+20U);
si0=f441(i,si0,si1,si2);
l8=si0;
si0=!(si0);
if(si0){
goto L7;
}
si0=l8;
si1=28U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l18=si0;
si1=1U;
si0=si0 > si1;
if(si0){
goto L14;
}
si0=l1;
si1=l2;
si1=i32_load(&i->m0,(U64)si1+88U);
si0=TF(i->t0,si1,U32 (*)(rustpythonInstance*,U32))(i,si0);
if(si0){
goto L7;
}
si0=l8;
sj0=i64_load(&i->m0,(U64)si0);
sj1=1ULL;
si0=sj0 <= sj1;
if(si0){
goto L7;
}
goto L13;
L14:;
si0=l8;
si0=i32_load(&i->m0,(U64)si0+20U);
l16=si0;
si0=i32_load(&i->m0,(U64)si0+4U);
l17=si0;
si0=l16;
si0=i32_load(&i->m0,(U64)si0);
l19=si0;
si0=l16;
si1=l16;
si2=12U;
si1+=si2;
si2=l18;
si3=-1U;
si2+=si3;
l18=si2;
si3=12U;
si2*=si3;
si0=f15144(i,si0,si1,si2);
si0=l8;
si1=l18;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l17;
si0=!(si0);
if(si0){
goto L13;
}
si0=l19;
f15024(i,si0);
L13:;
si0=l8;
sj1=1ULL;
i64_store(&i->m0,(U64)si0,sj1);
goto L7;
L8:;
si0=l6;
si1=56U;
si0+=si1;
si1=l0;
si2=l11;
si3=l16;
si4=l8;
sj2=f491(i,si2,si3,si4);
si3=l16;
si4=l8;
f305(i,si0,si1,sj2,si3,si4);
si0=l6;
si0=i32_load(&i->m0,(U64)si0+56U);
si0=!(si0);
if(si0){
goto L15;
}
si0=l6;
si0=i32_load(&i->m0,(U64)si0+72U);
l8=si0;
si0=!(si0);
if(si0){
goto L15;
}
si0=l6;
si0=i32_load(&i->m0,(U64)si0+92U);
l16=si0;
si0=l6;
si0=i32_load(&i->m0,(U64)si0+88U);
l19=si0;
si0=l6;
si0=i32_load(&i->m0,(U64)si0+84U);
l18=si0;
si0=l6;
si0=i32_load(&i->m0,(U64)si0+76U);
si0=!(si0);
if(si0){
goto L16;
}
si0=l8;
f15024(i,si0);
L16:;
si0=l16;
si0=!(si0);
if(si0){
goto L17;
}
si0=l18;
l8=si0;
L18:;
{
si0=l8;
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L19;
}
si0=l8;
si0=i32_load(&i->m0,(U64)si0);
f15024(i,si0);
L19:;
si0=l8;
si1=12U;
si0+=si1;
l8=si0;
si0=l16;
si1=-1U;
si0+=si1;
l16=si0;
if(si0){
goto L18;
}
}
L17:;
si0=l19;
si0=!(si0);
if(si0){
goto L15;
}
si0=l18;
f15024(i,si0);
L15:;
si0=l17;
si0=i32_load(&i->m0,(U64)si0);
l18=si0;
si0=l14;
if(si0){
goto L21;
}
si0=0U;
l14=si0;
goto L20;
L21:;
si0=l14;
si1=-1U;
si0+=si1;
l19=si0;
si0=l13;
si1=l14;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l8=si0;
si0=l14;
l16=si0;
L23:;
{
si0=l8;
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=l18;
si0=si0 != si1;
if(si0){
goto L24;
}
si0=l8;
si0=i32_load(&i->m0,(U64)si0);
si1=l7;
si1=i32_load(&i->m0,(U64)si1);
si2=l18;
si0=f15142(i,si0,si1,si2);
si0=!(si0);
if(si0){
goto L22;
}
L24:;
si0=l8;
si1=-8U;
si0+=si1;
l8=si0;
si0=l16;
si1=-1U;
si0+=si1;
l16=si0;
si0=!(si0);
if(si0){
goto L20;
}
goto L23;
}
L22:;
si0=l4;
si1=l19;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l8;
si1=l12;
si2=l19;
si3=3U;
si2<<=(si3&31);
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l17;
si0=i32_load(&i->m0,(U64)si0);
l18=si0;
si0=l19;
l14=si0;
L20:;
si0=l7;
si0=i32_load(&i->m0,(U64)si0);
l16=si0;
si0=l6;
si1=24U;
si0+=si1;
si1=l1;
si2=l15;
TF(i->t0,si2,void (*)(rustpythonInstance*,U32,U32))(i,si0,si1);
si0=l6;
si0=i32_load(&i->m0,(U64)si0+28U);
l17=si0;
si0=l6;
si0=i32_load(&i->m0,(U64)si0+24U);
l19=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+8U);
l8=si0;
si1=l3;
si1=i32_load(&i->m0,(U64)si1+4U);
si0=si0 != si1;
if(si0){
goto L25;
}
si0=l3;
si1=l8;
f520(i,si0,si1);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+8U);
l8=si0;
L25:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
si1=l8;
si2=4U;
si1<<=(si2&31);
si0+=si1;
l8=si0;
si1=l17;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l8;
si1=l19;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l8;
si1=l18;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l8;
si1=l16;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=l3;
si1=i32_load(&i->m0,(U64)si1+8U);
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0+8U,si1);
L7:;
si0=l7;
si1=8U;
si0+=si1;
l7=si0;
si1=l10;
si0=si0 != si1;
if(si0){
goto L6;
}
}
L4:;
si0=l9;
si1=1U;
si0&=si1;
si0=!(si0);
l8=si0;
L2:;
si0=l5;
si0=!(si0);
if(si0){
goto L1;
}
si0=l8;
si0=!(si0);
if(si0){
goto L1;
}
si0=l1;
si1=l2;
si1=i32_load(&i->m0,(U64)si1+48U);
si0=TF(i->t0,si1,U32 (*)(rustpythonInstance*,U32))(i,si0);
si0=!(si0);
if(si0){
goto L1;
}
si0=l1;
si1=1U;
si2=l2;
si2=i32_load(&i->m0,(U64)si2+40U);
si0=TF(i->t0,si2,U32 (*)(rustpythonInstance*,U32,U32))(i,si0,si1);
if(si0){
goto L1;
}
si0=l6;
si1=8U;
si0+=si1;
si1=l1;
si2=l2;
si2=i32_load(&i->m0,(U64)si2+16U);
TF(i->t0,si2,void (*)(rustpythonInstance*,U32,U32))(i,si0,si1);
si0=l0;
si1=l6;
si1=i32_load(&i->m0,(U64)si1+8U);
si2=l6;
si2=i32_load(&i->m0,(U64)si2+12U);
si0=f441(i,si0,si1,si2);
l8=si0;
si0=!(si0);
if(si0){
goto L1;
}
si0=l8;
si1=28U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l18=si0;
si1=1U;
si0=si0 > si1;
if(si0){
goto L27;
}
si0=l1;
si1=l2;
si1=i32_load(&i->m0,(U64)si1+88U);
si0=TF(i->t0,si1,U32 (*)(rustpythonInstance*,U32))(i,si0);
if(si0){
goto L1;
}
si0=l8;
sj0=i64_load(&i->m0,(U64)si0);
sj1=1ULL;
si0=sj0 <= sj1;
if(si0){
goto L1;
}
goto L26;
L27:;
si0=l8;
si0=i32_load(&i->m0,(U64)si0+20U);
l16=si0;
si0=i32_load(&i->m0,(U64)si0+4U);
l7=si0;
si0=l16;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=l16;
si1=l16;
si2=12U;
si1+=si2;
si2=l18;
si3=-1U;
si2+=si3;
l18=si2;
si3=12U;
si2*=si3;
si0=f15144(i,si0,si1,si2);
si0=l8;
si1=l18;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l7;
si0=!(si0);
if(si0){
goto L26;
}
si0=l3;
f15024(i,si0);
L26:;
si0=l8;
sj1=1ULL;
i64_store(&i->m0,(U64)si0,sj1);
L1:;
si0=l6;
si1=96U;
si0+=si1;
i->g0=si0;
L0:;
}

void f308(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
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
U32 l16=0;
U32 l17=0;
U32 l18=0;
U32 l19=0;
U64 l20=0;
U32 l21=0;
U32 l22=0;
U32 l23=0;
U32 si0,si1,si2,si3,si4,si5;
U64 sj0,sj1,sj2,sj3;
si0=i->g0;
si1=112U;
si0-=si1;
l4=si0;
i->g0=si0;
si0=l2;
si0=!(si0);
if(si0){
goto L2;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+12U);
si0=!(si0);
if(si0){
goto L2;
}
si0=l1;
si1=l2;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l5=si0;
si0=l3;
si1=16U;
si0+=si1;
l6=si0;
si0=l0;
si1=16U;
si0+=si1;
l7=si0;
si0=l4;
si1=84U;
si0+=si1;
l8=si0;
si0=1U;
l9=si0;
si0=l1;
l10=si0;
L3:;
{
si0=l9;
si0=!(si0);
if(si0){
goto L4;
}
si0=l7;
si1=l10;
si1=i32_load(&i->m0,(U64)si1);
l11=si1;
si2=l10;
si2=i32_load(&i->m0,(U64)si2+4U);
l9=si2;
sj0=f491(i,si0,si1,si2);
l12=sj0;
sj1=25ULL;
sj0>>=(sj1&63);
sj1=127ULL;
sj0&=sj1;
sj1=72340172838076673ULL;
sj0*=sj1;
l13=sj0;
sj0=l12;
si0=(U32)(sj0);
l14=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
l15=si0;
si1=-40U;
si0+=si1;
l16=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+4U);
l17=si0;
si0=0U;
l18=si0;
L5:;
{
si0=l15;
si1=l14;
si2=l17;
si1&=si2;
l19=si1;
si0+=si1;
sj0=i64_load(&i->m0,(U64)si0);
l20=sj0;
sj1=l13;
sj0^=sj1;
l12=sj0;
sj1=-1ULL;
sj0^=sj1;
sj1=l12;
sj2=-72340172838076673ULL;
sj1+=sj2;
sj0&=sj1;
sj1=-9187201950435737472ULL;
sj0&=sj1;
l12=sj0;
si0=!(sj0);
if(si0){
goto L6;
}
L8:;
{
si0=l16;
si1=0U;
sj2=l12;
sj2=I64_CTZ(sj2);
si2=(U32)(sj2);
si3=3U;
si2>>=(si3&31);
si3=l19;
si2+=si3;
si3=l17;
si2&=si3;
si1-=si2;
si2=40U;
si1*=si2;
l21=si1;
si0+=si1;
l14=si0;
si0=i32_load(&i->m0,(U64)si0+4U);
si1=l9;
si0=si0 != si1;
if(si0){
goto L9;
}
si0=l11;
si1=l14;
si1=i32_load(&i->m0,(U64)si1);
si2=l9;
si0=f15142(i,si0,si1,si2);
si0=!(si0);
if(si0){
goto L7;
}
L9:;
sj0=l12;
sj1=-1ULL;
sj0+=sj1;
sj1=l12;
sj0&=sj1;
l12=sj0;
si0=!(sj0);
if(si0){
goto L6;
}
goto L8;
}
L7:;
si0=l15;
si1=l21;
si0+=si1;
l15=si0;
si1=-32U;
si0+=si1;
l22=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+12U);
si0=!(si0);
if(si0){
goto L11;
}
si0=l6;
si1=l10;
sj0=f493(i,si0,si1);
l12=sj0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
l23=si0;
si1=-40U;
si0+=si1;
l16=si0;
sj0=l12;
sj1=25ULL;
sj0>>=(sj1&63);
sj1=127ULL;
sj0&=sj1;
sj1=72340172838076673ULL;
sj0*=sj1;
l13=sj0;
sj0=l12;
si0=(U32)(sj0);
l14=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+4U);
l17=si0;
si0=0U;
l18=si0;
L12:;
{
si0=l23;
si1=l14;
si2=l17;
si1&=si2;
l19=si1;
si0+=si1;
sj0=i64_load(&i->m0,(U64)si0);
l20=sj0;
sj1=l13;
sj0^=sj1;
l12=sj0;
sj1=-1ULL;
sj0^=sj1;
sj1=l12;
sj2=-72340172838076673ULL;
sj1+=sj2;
sj0&=sj1;
sj1=-9187201950435737472ULL;
sj0&=sj1;
l12=sj0;
si0=!(sj0);
if(si0){
goto L13;
}
L15:;
{
si0=l9;
si1=l16;
si2=0U;
sj3=l12;
sj3=I64_CTZ(sj3);
si3=(U32)(sj3);
si4=3U;
si3>>=(si4&31);
si4=l19;
si3+=si4;
si4=l17;
si3&=si4;
si2-=si3;
si3=40U;
si2*=si3;
l21=si2;
si1+=si2;
l14=si1;
si1=i32_load(&i->m0,(U64)si1+4U);
si0=si0 != si1;
if(si0){
goto L16;
}
si0=l11;
si1=l14;
si1=i32_load(&i->m0,(U64)si1);
si2=l9;
si0=f15142(i,si0,si1,si2);
si0=!(si0);
if(si0){
goto L14;
}
L16:;
sj0=l12;
sj1=-1ULL;
sj0+=sj1;
sj1=l12;
sj0&=sj1;
l12=sj0;
si0=!(sj0);
if(si0){
goto L13;
}
goto L15;
}
L14:;
si0=l23;
si1=l21;
si0+=si1;
l14=si0;
si1=-32U;
si0+=si1;
sj0=i64_load(&i->m0,(U64)si0);
l12=sj0;
si1=l22;
sj1=i64_load(&i->m0,(U64)si1);
l20=sj1;
sj2=l12;
sj3=0ULL;
si2=sj2 != sj3;
sj3=l20;
si3=!(sj3);
si2&=si3;
l19=si2;
sj0=si2?sj0:sj1;
l12=sj0;
si0=l14;
si1=l15;
si2=l19;
si0=si2?si0:si1;
l15=si0;
goto L10;
L13:;
sj0=l20;
sj1=l20;
sj2=1ULL;
sj1<<=(sj2&63);
sj0&=sj1;
sj1=-9187201950435737472ULL;
sj0&=sj1;
si0=!(sj0);
si0=!(si0);
if(si0){
goto L11;
}
si0=l19;
si1=l18;
si2=8U;
si1+=si2;
l18=si1;
si0+=si1;
l14=si0;
goto L12;
}
L11:;
si0=l22;
sj0=i64_load(&i->m0,(U64)si0);
l12=sj0;
L10:;
si0=l15;
si1=-40U;
si0+=si1;
l14=si0;
si1=16U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l21=si0;
si0=4U;
l19=si0;
si0=0U;
l17=si0;
si0=l14;
si1=24U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l14=si0;
si0=!(si0);
if(si0){
goto L18;
}
si0=l14;
si1=536870911U;
si0=si0 > si1;
if(si0){
goto L1;
}
si0=l14;
si1=2U;
si0<<=(si1&31);
l16=si0;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L1;
}
si0=l16;
si0=!(si0);
if(si0){
goto L18;
}
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=l16;
si0=f15022(i,si0);
l19=si0;
si0=!(si0);
if(si0){
goto L17;
}
si0=l16;
l17=si0;
L18:;
si0=l19;
si1=l21;
si2=l17;
si0=f15143(i,si0,si1,si2);
l19=si0;
si0=l4;
si1=l15;
si2=-12U;
si1+=si2;
f237(i,si0,si1);
si0=l8;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l8;
si1=8U;
si0+=si1;
si1=l4;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=l14;
i32_store(&i->m0,(U64)si0+80U,si1);
si0=l4;
si1=l14;
i32_store(&i->m0,(U64)si0+76U,si1);
si0=l4;
si1=l19;
i32_store(&i->m0,(U64)si0+72U,si1);
si0=l4;
sj1=l12;
i64_store(&i->m0,(U64)si0+64U,sj1);
si0=l4;
si1=16U;
si0+=si1;
si1=l3;
si2=l11;
si3=l9;
si4=l4;
si5=64U;
si4+=si5;
f440(i,si0,si1,si2,si3,si4);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+24U);
l9=si0;
si0=!(si0);
if(si0){
goto L4;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0+28U);
si0=!(si0);
if(si0){
goto L19;
}
si0=l9;
f15024(i,si0);
L19:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+36U);
l19=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+44U);
l14=si0;
si0=!(si0);
if(si0){
goto L20;
}
si0=l19;
l9=si0;
L21:;
{
si0=l9;
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L22;
}
si0=l9;
si0=i32_load(&i->m0,(U64)si0);
f15024(i,si0);
L22:;
si0=l9;
si1=12U;
si0+=si1;
l9=si0;
si0=l14;
si1=-1U;
si0+=si1;
l14=si0;
if(si0){
goto L21;
}
}
L20:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+40U);
si0=!(si0);
if(si0){
goto L4;
}
si0=l19;
f15024(i,si0);
goto L4;
L17:;
si0=4U;
si1=l16;
f52(i,si0,si1);
UNREACHABLE;
L6:;
sj0=l20;
sj1=l20;
sj2=1ULL;
sj1<<=(sj2&63);
sj0&=sj1;
sj1=-9187201950435737472ULL;
sj0&=sj1;
si0=!(sj0);
si0=!(si0);
if(si0){
goto L4;
}
si0=l19;
si1=l18;
si2=8U;
si1+=si2;
l18=si1;
si0+=si1;
l14=si0;
goto L5;
}
L4:;
si0=l10;
si1=8U;
si0+=si1;
l10=si0;
si1=l5;
si0=si0 == si1;
if(si0){
goto L2;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+12U);
l9=si0;
goto L3;
}
L2:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+32U);
l9=si0;
si0=!(si0);
if(si0){
goto L25;
}
si0=0U;
si0=f482(i,si0);
l14=si0;
si0=!(si0);
if(si0){
goto L24;
}
si0=l14;
si1=l14;
sj1=i64_load(&i->m0,(U64)si1);
l12=sj1;
sj2=1ULL;
sj1+=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l14;
sj0=i64_load(&i->m0,(U64)si0+8U);
l20=sj0;
si0=l4;
si1=64U;
si0+=si1;
si1=8U;
si0+=si1;
l14=si0;
si1=l9;
si2=8U;
si1+=si2;
l11=si1;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=64U;
si0+=si1;
si1=16U;
si0+=si1;
l19=si0;
si1=l9;
si2=16U;
si1+=si2;
l18=si1;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=64U;
si0+=si1;
si1=24U;
si0+=si1;
l17=si0;
si1=l9;
si2=24U;
si1+=si2;
l15=si1;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=64U;
si0+=si1;
si1=32U;
si0+=si1;
l16=si0;
si1=l9;
si2=32U;
si1+=si2;
l10=si1;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=64U;
si0+=si1;
si1=40U;
si0+=si1;
l21=si0;
si1=l9;
si2=40U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l9;
sj0=i64_load(&i->m0,(U64)si0);
l13=sj0;
si0=l9;
si1=0U;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l9;
si1=1091720U;
i32_store(&i->m0,(U64)si0,si1);
si0=l11;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l18;
sj1=l12;
i64_store(&i->m0,(U64)si0,sj1);
si0=l15;
sj1=l20;
i64_store(&i->m0,(U64)si0,sj1);
si0=l10;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
sj1=l13;
i64_store(&i->m0,(U64)si0+64U,sj1);
si0=l4;
si1=16U;
si0+=si1;
si1=8U;
si0+=si1;
l11=si0;
si1=l14;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=16U;
si0+=si1;
si1=16U;
si0+=si1;
l18=si0;
si1=l19;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=16U;
si0+=si1;
si1=24U;
si0+=si1;
l15=si0;
si1=l17;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=16U;
si0+=si1;
si1=40U;
si0+=si1;
l10=si0;
si1=l21;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=16U;
si0+=si1;
si1=32U;
si0+=si1;
l23=si0;
si1=l16;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1+64U);
i64_store(&i->m0,(U64)si0+16U,sj1);
si0=l4;
si1=16U;
si0+=si1;
si1=l1;
si2=l2;
si3=l3;
f308(i,si0,si1,si2,si3);
si0=l0;
si0=i32_load(&i->m0,(U64)si0+32U);
l9=si0;
si0=l21;
si1=l10;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l16;
si1=l23;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l17;
si1=l15;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l19;
si1=l18;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l14;
si1=l11;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l10;
si1=l9;
si2=40U;
si1+=si2;
l8=si1;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l23;
si1=l9;
si2=32U;
si1+=si2;
l10=si1;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l15;
si1=l9;
si2=24U;
si1+=si2;
l23=si1;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l18;
si1=l9;
si2=16U;
si1+=si2;
l15=si1;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l11;
si1=l9;
si2=8U;
si1+=si2;
l18=si1;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1+16U);
i64_store(&i->m0,(U64)si0+64U,sj1);
si0=l4;
si1=l9;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+16U,sj1);
si0=l9;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1+64U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l18;
si1=l14;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l15;
si1=l19;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l23;
si1=l17;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l10;
si1=l16;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l8;
si1=l21;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=16U;
si0+=si1;
f303(i,si0);
L25:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+12U);
l21=si0;
si0=!(si0);
if(si0){
goto L26;
}
si0=l4;
si1=84U;
si0+=si1;
l8=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
l19=si0;
si1=8U;
si0+=si1;
l17=si0;
si0=l19;
sj0=i64_load(&i->m0,(U64)si0);
sj1=-1ULL;
sj0^=sj1;
sj1=-9187201950435737472ULL;
sj0&=sj1;
l12=sj0;
L27:;
{
sj0=l12;
sj1=0ULL;
si0=sj0 != sj1;
if(si0){
goto L28;
}
si0=l17;
l9=si0;
L29:;
{
si0=l19;
si1=-320U;
si0+=si1;
l19=si0;
si0=l9;
sj0=i64_load(&i->m0,(U64)si0);
l12=sj0;
si0=l9;
si1=8U;
si0+=si1;
l17=si0;
l9=si0;
sj0=l12;
sj1=-1ULL;
sj0^=sj1;
sj1=-9187201950435737472ULL;
sj0&=sj1;
l12=sj0;
si0=!(sj0);
if(si0){
goto L29;
}
}
L28:;
si0=0U;
l16=si0;
si0=l19;
si1=0U;
sj2=l12;
sj2=I64_CTZ(sj2);
si2=(U32)(sj2);
si3=3U;
si2>>=(si3&31);
si1-=si2;
si2=40U;
si1*=si2;
si0+=si1;
l18=si0;
si1=-40U;
si0+=si1;
l9=si0;
si0=i32_load(&i->m0,(U64)si0);
l15=si0;
si0=4U;
l14=si0;
si0=l9;
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l10=si0;
si0=l9;
si1=16U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l23=si0;
si0=l9;
si1=8U;
si0+=si1;
sj0=i64_load(&i->m0,(U64)si0);
l20=sj0;
si0=l9;
si1=24U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l9=si0;
si0=!(si0);
if(si0){
goto L30;
}
si0=l9;
si1=536870911U;
si0=si0 > si1;
if(si0){
goto L1;
}
si0=l9;
si1=2U;
si0<<=(si1&31);
l11=si0;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L1;
}
si0=l11;
si0=!(si0);
if(si0){
goto L30;
}
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=l11;
si0=f15022(i,si0);
l14=si0;
si0=!(si0);
if(si0){
goto L23;
}
si0=l11;
l16=si0;
L30:;
sj0=l12;
sj1=-1ULL;
sj0+=sj1;
l13=sj0;
si0=l14;
si1=l23;
si2=l16;
si0=f15143(i,si0,si1,si2);
l14=si0;
si0=l8;
si1=l18;
si2=-12U;
si1+=si2;
f237(i,si0,si1);
si0=l4;
si1=l9;
i32_store(&i->m0,(U64)si0+80U,si1);
si0=l4;
si1=l9;
i32_store(&i->m0,(U64)si0+76U,si1);
si0=l4;
si1=l14;
i32_store(&i->m0,(U64)si0+72U,si1);
si0=l4;
sj1=l20;
i64_store(&i->m0,(U64)si0+64U,sj1);
si0=l4;
si1=16U;
si0+=si1;
si1=l0;
si2=l15;
si3=l10;
si4=l4;
si5=64U;
si4+=si5;
f440(i,si0,si1,si2,si3,si4);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+24U);
l9=si0;
si0=!(si0);
if(si0){
goto L31;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0+28U);
si0=!(si0);
if(si0){
goto L32;
}
si0=l9;
f15024(i,si0);
L32:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+36U);
l16=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+44U);
l14=si0;
si0=!(si0);
if(si0){
goto L33;
}
si0=l16;
l9=si0;
L34:;
{
si0=l9;
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L35;
}
si0=l9;
si0=i32_load(&i->m0,(U64)si0);
f15024(i,si0);
L35:;
si0=l9;
si1=12U;
si0+=si1;
l9=si0;
si0=l14;
si1=-1U;
si0+=si1;
l14=si0;
if(si0){
goto L34;
}
}
L33:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+40U);
si0=!(si0);
if(si0){
goto L31;
}
si0=l16;
f15024(i,si0);
L31:;
sj0=l13;
sj1=l12;
sj0&=sj1;
l12=sj0;
si0=l21;
si1=-1U;
si0+=si1;
l21=si0;
if(si0){
goto L27;
}
}
L26:;
si0=l4;
si1=112U;
si0+=si1;
i->g0=si0;
goto L0;
L24:;
si0=1092772U;
si1=70U;
si2=l4;
si3=64U;
si2+=si3;
si3=1092844U;
si4=1092940U;
f641(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L23:;
si0=4U;
si1=l11;
f52(i,si0,si1);
UNREACHABLE;
L1:;
f53(i);
UNREACHABLE;
L0:;
}

U32 f309(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U64 l4=0;
U32 l5=0;
U32 l6=0;
U64 l7=0;
U32 l8=0;
U32 l9=0;
U64 l10=0;
U32 l11=0;
U32 si0,si1,si2,si3;
U64 sj0,sj1,sj2;
si0=0U;
l3=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+12U);
si0=!(si0);
if(si0){
goto L1;
}
si0=l0;
si1=16U;
si0+=si1;
si1=l1;
si2=l2;
sj0=f491(i,si0,si1,si2);
l4=sj0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si1=-40U;
si0+=si1;
l6=si0;
sj0=l4;
sj1=25ULL;
sj0>>=(sj1&63);
sj1=127ULL;
sj0&=sj1;
sj1=72340172838076673ULL;
sj0*=sj1;
l7=sj0;
sj0=l4;
si0=(U32)(sj0);
l3=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+4U);
l8=si0;
si0=0U;
l9=si0;
L2:;
{
si0=l5;
si1=l3;
si2=l8;
si1&=si2;
l0=si1;
si0+=si1;
sj0=i64_load(&i->m0,(U64)si0);
l10=sj0;
sj1=l7;
sj0^=sj1;
l4=sj0;
sj1=-1ULL;
sj0^=sj1;
sj1=l4;
sj2=-72340172838076673ULL;
sj1+=sj2;
sj0&=sj1;
sj1=-9187201950435737472ULL;
sj0&=sj1;
l4=sj0;
si0=!(sj0);
if(si0){
goto L3;
}
L5:;
{
si0=l6;
si1=0U;
sj2=l4;
sj2=I64_CTZ(sj2);
si2=(U32)(sj2);
si3=3U;
si2>>=(si3&31);
si3=l0;
si2+=si3;
si3=l8;
si2&=si3;
l11=si2;
si1-=si2;
si2=40U;
si1*=si2;
si0+=si1;
l3=si0;
si0=i32_load(&i->m0,(U64)si0+4U);
si1=l2;
si0=si0 != si1;
if(si0){
goto L6;
}
si0=l1;
si1=l3;
si1=i32_load(&i->m0,(U64)si1);
si2=l2;
si0=f15142(i,si0,si1,si2);
si0=!(si0);
if(si0){
goto L4;
}
L6:;
sj0=l4;
sj1=-1ULL;
sj0+=sj1;
sj1=l4;
sj0&=sj1;
l4=sj0;
si0=!(sj0);
if(si0){
goto L3;
}
goto L5;
}
L4:;
si0=l5;
si1=0U;
si2=l11;
si1-=si2;
si2=40U;
si1*=si2;
si0+=si1;
si1=-40U;
si0+=si1;
l3=si0;
goto L1;
L3:;
sj0=l10;
sj1=l10;
sj2=1ULL;
sj1<<=(sj2&63);
sj0&=sj1;
sj1=-9187201950435737472ULL;
sj0&=sj1;
si0=!(sj0);
if(si0){
goto L7;
}
si0=0U;
l3=si0;
goto L1;
L7:;
si0=l0;
si1=l9;
si2=8U;
si1+=si2;
l9=si1;
si0+=si1;
l3=si0;
goto L2;
}
L1:;
si0=l3;
si1=8U;
si0+=si1;
si1=0U;
si2=l3;
si0=si2?si0:si1;
L0:;
return si0;
}

void f310(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U32 l4=0;
U32 si0,si1,si2,si3,si4;
U64 sj2;
si0=i->g0;
si1=48U;
si0-=si1;
l3=si0;
i->g0=si0;
si0=l3;
si1=8U;
si0+=si1;
si1=l0;
si2=l0;
si3=16U;
si2+=si3;
si3=l1;
si4=l2;
sj2=f491(i,si2,si3,si4);
si3=l1;
si4=l2;
f305(i,si0,si1,sj2,si3,si4);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+8U);
si0=!(si0);
if(si0){
goto L1;
}
si0=l3;
si1=8U;
si0+=si1;
si1=16U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l0=si0;
si0=!(si0);
if(si0){
goto L1;
}
si0=l3;
si1=44U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si0=l3;
si1=40U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
si0=l3;
si1=36U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si0=l3;
si1=28U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L2;
}
si0=l0;
f15024(i,si0);
L2:;
si0=l2;
si0=!(si0);
if(si0){
goto L3;
}
si0=l1;
l0=si0;
L4:;
{
si0=l0;
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L5;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
f15024(i,si0);
L5:;
si0=l0;
si1=12U;
si0+=si1;
l0=si0;
si0=l2;
si1=-1U;
si0+=si1;
l2=si0;
if(si0){
goto L4;
}
}
L3:;
si0=l4;
si0=!(si0);
if(si0){
goto L1;
}
si0=l1;
f15024(i,si0);
L1:;
si0=l3;
si1=48U;
si0+=si1;
i->g0=si0;
L0:;
}

void f311(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U32 si0,si1,si2,si3,si4,si5;
U64 sj1;
si0=i->g0;
si1=64U;
si0-=si1;
l3=si0;
i->g0=si0;
si0=l3;
si1=56U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=48U;
si0+=si1;
sj1=17179869184ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
sj1=4ULL;
i64_store(&i->m0,(U64)si0+40U,sj1);
si0=l3;
sj1=1ULL;
i64_store(&i->m0,(U64)si0+32U,sj1);
si0=l3;
si1=l0;
si2=l1;
si3=l2;
si4=l3;
si5=32U;
si4+=si5;
f440(i,si0,si1,si2,si3,si4);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+8U);
l2=si0;
si0=!(si0);
if(si0){
goto L1;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0+12U);
si0=!(si0);
if(si0){
goto L2;
}
si0=l2;
f15024(i,si0);
L2:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+20U);
l0=si0;
si0=l3;
si1=28U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si0=!(si0);
if(si0){
goto L3;
}
si0=l0;
l2=si0;
L4:;
{
si0=l2;
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L5;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0);
f15024(i,si0);
L5:;
si0=l2;
si1=12U;
si0+=si1;
l2=si0;
si0=l1;
si1=-1U;
si0+=si1;
l1=si0;
if(si0){
goto L4;
}
}
L3:;
si0=l3;
si1=24U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L1;
}
si0=l0;
f15024(i,si0);
L1:;
si0=l3;
si1=64U;
si0+=si1;
i->g0=si0;
L0:;
}

void f312(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U32 l4=0;
U32 si0,si1,si2,si3,si4,si5;
U64 sj1,sj2;
si0=i->g0;
si1=64U;
si0-=si1;
l3=si0;
i->g0=si0;
si0=l0;
si1=l1;
si2=l2;
si0=f441(i,si0,si1,si2);
l4=si0;
si0=!(si0);
if(si0){
goto L2;
}
si0=l4;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1);
sj2=1ULL;
sj1+=sj2;
i64_store(&i->m0,(U64)si0,sj1);
goto L1;
L2:;
si0=l3;
si1=56U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=48U;
si0+=si1;
sj1=17179869184ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
sj1=4ULL;
i64_store(&i->m0,(U64)si0+40U,sj1);
si0=l3;
sj1=1ULL;
i64_store(&i->m0,(U64)si0+32U,sj1);
si0=l3;
si1=l0;
si2=l1;
si3=l2;
si4=l3;
si5=32U;
si4+=si5;
f440(i,si0,si1,si2,si3,si4);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+8U);
l2=si0;
si0=!(si0);
if(si0){
goto L1;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0+12U);
si0=!(si0);
if(si0){
goto L3;
}
si0=l2;
f15024(i,si0);
L3:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+20U);
l0=si0;
si0=l3;
si1=28U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si0=!(si0);
if(si0){
goto L4;
}
si0=l0;
l2=si0;
L5:;
{
si0=l2;
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L6;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0);
f15024(i,si0);
L6:;
si0=l2;
si1=12U;
si0+=si1;
l2=si0;
si0=l1;
si1=-1U;
si0+=si1;
l1=si0;
if(si0){
goto L5;
}
}
L4:;
si0=l3;
si1=24U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L1;
}
si0=l0;
f15024(i,si0);
L1:;
si0=l3;
si1=64U;
si0+=si1;
i->g0=si0;
L0:;
}

void f313(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4) {
U32 l5=0;
U32 l6=0;
U64 l7=0;
U32 l8=0;
U32 l9=0;
U32 l10=0;
U32 l11=0;
U32 l12=0;
U32 l13=0;
U32 si0,si1,si2,si3;
U64 sj0,sj1,sj2;
si0=i->g0;
si1=32U;
si0-=si1;
l5=si0;
i->g0=si0;
si0=l5;
si1=8U;
si0+=si1;
si1=l0;
si2=l1;
si3=l2;
f438(i,si0,si1,si2,si3);
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=l5;
si1=24U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si0=l5;
si1=16U;
si0+=si1;
sj0=i64_load(&i->m0,(U64)si0);
l7=sj0;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+12U);
l8=si0;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+8U);
l9=si0;
si0=4U;
si0=f15022(i,si0);
l10=si0;
si0=!(si0);
if(si0){
goto L4;
}
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=12U;
si0=f15022(i,si0);
l11=si0;
si0=!(si0);
if(si0){
goto L3;
}
si0=l9;
si0=!(si0);
if(si0){
goto L6;
}
si0=l6;
si0=i32_load(&i->m0,(U64)si0);
l0=si0;
si1=l6;
si1=i32_load(&i->m0,(U64)si1+4U);
l12=si1;
sj2=l7;
si2=(U32)(sj2);
l13=si2;
si1&=si2;
l1=si1;
si0+=si1;
sj0=i64_load(&i->m0,(U64)si0);
sj1=-9187201950435737472ULL;
sj0&=sj1;
l7=sj0;
sj1=0ULL;
si0=sj0 != sj1;
if(si0){
goto L7;
}
si0=8U;
l2=si0;
L8:;
{
si0=l1;
si1=l2;
si0+=si1;
l1=si0;
si0=l2;
si1=8U;
si0+=si1;
l2=si0;
si0=l0;
si1=l1;
si2=l12;
si1&=si2;
l1=si1;
si0+=si1;
sj0=i64_load(&i->m0,(U64)si0);
sj1=-9187201950435737472ULL;
sj0&=sj1;
l7=sj0;
si0=!(sj0);
if(si0){
goto L8;
}
}
L7:;
si0=l0;
sj1=l7;
sj1=I64_CTZ(sj1);
si1=(U32)(sj1);
si2=3U;
si1>>=(si2&31);
si2=l1;
si1+=si2;
si2=l12;
si1&=si2;
l2=si1;
si0+=si1;
si0=i32_load8_s(&i->m0,(U64)si0);
l1=si0;
si1=0U;
si0=(U32)((I32)si0<(I32)si1);
if(si0){
goto L9;
}
si0=l0;
si1=l0;
sj1=i64_load(&i->m0,(U64)si1);
sj2=-9187201950435737472ULL;
sj1&=sj2;
sj1=I64_CTZ(sj1);
si1=(U32)(sj1);
si2=3U;
si1>>=(si2&31);
l2=si1;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
l1=si0;
L9:;
si0=l0;
si1=l2;
si0+=si1;
si1=l13;
si2=25U;
si1>>=(si2&31);
l13=si1;
i32_store8(&i->m0,(U64)si0,si1);
si0=l2;
si1=-8U;
si0+=si1;
si1=l12;
si0&=si1;
si1=l0;
si0+=si1;
si1=8U;
si0+=si1;
si1=l13;
i32_store8(&i->m0,(U64)si0,si1);
si0=l6;
si1=l6;
si1=i32_load(&i->m0,(U64)si1+8U);
si2=l1;
si3=1U;
si2&=si3;
si1-=si2;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l6;
si1=l6;
si1=i32_load(&i->m0,(U64)si1+12U);
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l0;
si1=0U;
si2=l2;
si1-=si2;
si2=40U;
si1*=si2;
si0+=si1;
si1=-40U;
si0+=si1;
l1=si0;
si1=32U;
si0+=si1;
sj1=1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si1=28U;
si0+=si1;
si1=l11;
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
si1=20U;
si0+=si1;
sj1=1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si1=16U;
si0+=si1;
si1=l10;
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
si1=8U;
si0+=si1;
l2=si0;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si1=4U;
si0+=si1;
si1=l8;
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
si1=l9;
i32_store(&i->m0,(U64)si0,si1);
goto L5;
L6:;
si0=l10;
f15024(i,si0);
si0=l11;
f15024(i,si0);
si0=l8;
si1=-32U;
si0+=si1;
l2=si0;
L5:;
si0=l4;
if(si0){
goto L11;
}
si0=1U;
l1=si0;
goto L10;
L11:;
si0=l4;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L2;
}
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=l4;
si0=f15022(i,si0);
l1=si0;
si0=!(si0);
if(si0){
goto L1;
}
L10:;
si0=l1;
si1=l3;
si2=l4;
si0=f15143(i,si0,si1,si2);
l0=si0;
si0=l2;
si1=28U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si1=l2;
si2=24U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
si0=si0 != si1;
if(si0){
goto L12;
}
si0=l2;
si1=20U;
si0+=si1;
si1=l1;
f518(i,si0,si1);
si0=l2;
si0=i32_load(&i->m0,(U64)si0+28U);
l1=si0;
L12:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=l1;
si2=12U;
si1*=si2;
si0+=si1;
l1=si0;
si1=l4;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l1;
si1=l4;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l1;
si1=l0;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=l2;
si1=i32_load(&i->m0,(U64)si1+28U);
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l5;
si1=32U;
si0+=si1;
i->g0=si0;
goto L0;
L4:;
si0=4U;
si1=4U;
f52(i,si0,si1);
UNREACHABLE;
L3:;
si0=4U;
si1=12U;
f52(i,si0,si1);
UNREACHABLE;
L2:;
f53(i);
UNREACHABLE;
L1:;
si0=1U;
si1=l4;
f52(i,si0,si1);
UNREACHABLE;
L0:;
}

void f314(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
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
si0=l4;
si1=8U;
si0+=si1;
si1=l0;
si2=l1;
si3=l2;
f438(i,si0,si1,si2,si3);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+8U);
l5=si0;
if(si0){
goto L3;
}
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+12U);
si1=-32U;
si0+=si1;
l2=si0;
goto L2;
L3:;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+24U);
l6=si0;
si0=l4;
sj0=i64_load(&i->m0,(U64)si0+16U);
l7=sj0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+12U);
l8=si0;
si0=4U;
si0=f15022(i,si0);
l9=si0;
si0=!(si0);
if(si0){
goto L1;
}
si0=l6;
si0=i32_load(&i->m0,(U64)si0);
l0=si0;
si1=l6;
si1=i32_load(&i->m0,(U64)si1+4U);
l10=si1;
sj2=l7;
si2=(U32)(sj2);
l11=si2;
si1&=si2;
l1=si1;
si0+=si1;
sj0=i64_load(&i->m0,(U64)si0);
sj1=-9187201950435737472ULL;
sj0&=sj1;
l7=sj0;
sj1=0ULL;
si0=sj0 != sj1;
if(si0){
goto L4;
}
si0=8U;
l2=si0;
L5:;
{
si0=l1;
si1=l2;
si0+=si1;
l1=si0;
si0=l2;
si1=8U;
si0+=si1;
l2=si0;
si0=l0;
si1=l1;
si2=l10;
si1&=si2;
l1=si1;
si0+=si1;
sj0=i64_load(&i->m0,(U64)si0);
sj1=-9187201950435737472ULL;
sj0&=sj1;
l7=sj0;
si0=!(sj0);
if(si0){
goto L5;
}
}
L4:;
si0=l0;
sj1=l7;
sj1=I64_CTZ(sj1);
si1=(U32)(sj1);
si2=3U;
si1>>=(si2&31);
si2=l1;
si1+=si2;
si2=l10;
si1&=si2;
l2=si1;
si0+=si1;
si0=i32_load8_s(&i->m0,(U64)si0);
l1=si0;
si1=0U;
si0=(U32)((I32)si0<(I32)si1);
if(si0){
goto L6;
}
si0=l0;
si1=l0;
sj1=i64_load(&i->m0,(U64)si1);
sj2=-9187201950435737472ULL;
sj1&=sj2;
sj1=I64_CTZ(sj1);
si1=(U32)(sj1);
si2=3U;
si1>>=(si2&31);
l2=si1;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
l1=si0;
L6:;
si0=l0;
si1=l2;
si0+=si1;
si1=l11;
si2=25U;
si1>>=(si2&31);
l11=si1;
i32_store8(&i->m0,(U64)si0,si1);
si0=l2;
si1=-8U;
si0+=si1;
si1=l10;
si0&=si1;
si1=l0;
si0+=si1;
si1=8U;
si0+=si1;
si1=l11;
i32_store8(&i->m0,(U64)si0,si1);
si0=l6;
si1=l6;
si1=i32_load(&i->m0,(U64)si1+8U);
si2=l1;
si3=1U;
si2&=si3;
si1-=si2;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l6;
si1=l6;
si1=i32_load(&i->m0,(U64)si1+12U);
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l0;
si1=0U;
si2=l2;
si1-=si2;
si2=40U;
si1*=si2;
si0+=si1;
si1=-40U;
si0+=si1;
l1=si0;
si1=36U;
si0+=si1;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
si1=28U;
si0+=si1;
sj1=4ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si1=20U;
si0+=si1;
sj1=1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si1=16U;
si0+=si1;
si1=l9;
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
si1=8U;
si0+=si1;
l2=si0;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si1=4U;
si0+=si1;
si1=l8;
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
si1=l5;
i32_store(&i->m0,(U64)si0,si1);
L2:;
si0=l2;
si1=16U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si1=l2;
si2=12U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
si0=si0 != si1;
if(si0){
goto L7;
}
si0=l2;
si1=8U;
si0+=si1;
si1=l1;
f514(i,si0,si1);
si0=l2;
si0=i32_load(&i->m0,(U64)si0+16U);
l1=si0;
L7:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+8U);
si1=l1;
si2=2U;
si1<<=(si2&31);
si0+=si1;
si1=l3;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=l2;
si1=i32_load(&i->m0,(U64)si1+16U);
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l4;
si1=32U;
si0+=si1;
i->g0=si0;
goto L0;
L1:;
si0=4U;
si1=4U;
f52(i,si0,si1);
UNREACHABLE;
L0:;
}

U32 f315(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 l3=0;
U32 l4=0;
U64 l5=0;
U32 l6=0;
U32 l7=0;
U64 l8=0;
U32 l9=0;
U32 l10=0;
U32 l11=0;
U64 l12=0;
U32 l13=0;
U32 si0,si1,si2,si3;
U64 sj0,sj1,sj2;
si0=1U;
l2=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+12U);
si0=!(si0);
if(si0){
goto L1;
}
si0=l0;
si1=16U;
si0+=si1;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+184U);
l3=si1;
si2=l1;
si3=188U;
si2+=si3;
si2=i32_load(&i->m0,(U64)si2);
l4=si2;
sj0=f491(i,si0,si1,si2);
l5=sj0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si1=-40U;
si0+=si1;
l7=si0;
sj0=l5;
sj1=25ULL;
sj0>>=(sj1&63);
sj1=127ULL;
sj0&=sj1;
sj1=72340172838076673ULL;
sj0*=sj1;
l8=sj0;
sj0=l5;
si0=(U32)(sj0);
l9=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+4U);
l10=si0;
si0=0U;
l11=si0;
L2:;
{
si0=l6;
si1=l9;
si2=l10;
si1&=si2;
l0=si1;
si0+=si1;
sj0=i64_load(&i->m0,(U64)si0);
l12=sj0;
sj1=l8;
sj0^=sj1;
l5=sj0;
sj1=-1ULL;
sj0^=sj1;
sj1=l5;
sj2=-72340172838076673ULL;
sj1+=sj2;
sj0&=sj1;
sj1=-9187201950435737472ULL;
sj0&=sj1;
l5=sj0;
si0=!(sj0);
if(si0){
goto L3;
}
L5:;
{
si0=l7;
si1=0U;
sj2=l5;
sj2=I64_CTZ(sj2);
si2=(U32)(sj2);
si3=3U;
si2>>=(si3&31);
si3=l0;
si2+=si3;
si3=l10;
si2&=si3;
si1-=si2;
l13=si1;
si2=40U;
si1*=si2;
si0+=si1;
l9=si0;
si0=i32_load(&i->m0,(U64)si0+4U);
si1=l4;
si0=si0 != si1;
if(si0){
goto L6;
}
si0=l3;
si1=l9;
si1=i32_load(&i->m0,(U64)si1);
si2=l4;
si0=f15142(i,si0,si1,si2);
si0=!(si0);
if(si0){
goto L4;
}
L6:;
sj0=l5;
sj1=-1ULL;
sj0+=sj1;
sj1=l5;
sj0&=sj1;
l5=sj0;
si0=!(sj0);
if(si0){
goto L3;
}
goto L5;
}
L4:;
si0=l6;
si1=l13;
si2=40U;
si1*=si2;
si0+=si1;
l4=si0;
si0=l1;
sj0=i64_load(&i->m0,(U64)si0);
si0=!(sj0);
if(si0){
goto L7;
}
si0=l1;
sj0=i64_load(&i->m0,(U64)si0+8U);
l5=sj0;
si0=l1;
si1=220U;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=2U;
si0&=si1;
if(si0){
goto L8;
}
sj0=l5;
si1=l4;
si2=-4U;
si1+=si2;
sj1=i64_load32_u(&i->m0,(U64)si1);
si0=sj0 != sj1;
goto L0;
L8:;
sj0=l5;
si0=!(sj0);
if(si0){
goto L9;
}
si0=l4;
si1=-4U;
si0+=si1;
sj0=i64_load32_u(&i->m0,(U64)si0);
sj1=l5;
sj0=REM_U(sj0,sj1);
sj1=0ULL;
si0=sj0 != sj1;
goto L0;
L9:;
si0=1088496U;
si1=57U;
si2=1088676U;
f604(i,si0,si1,si2);
UNREACHABLE;
L7:;
si0=l1;
sj0=i64_load(&i->m0,(U64)si0+16U);
si0=!(sj0);
if(si0){
goto L10;
}
si0=l1;
si1=24U;
si0+=si1;
sj0=i64_load(&i->m0,(U64)si0);
si1=l4;
si2=-4U;
si1+=si2;
sj1=i64_load32_u(&i->m0,(U64)si1);
si0=sj0 >= sj1;
goto L0;
L10:;
si0=l1;
sj0=i64_load(&i->m0,(U64)si0+32U);
sj1=0ULL;
si0=sj0 != sj1;
if(si0){
goto L1;
}
si0=l1;
si1=220U;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=2U;
si0&=si1;
si1=1U;
si0>>=(si1&31);
l2=si0;
goto L1;
L3:;
sj0=l12;
sj1=l12;
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
si0=l0;
si1=l11;
si2=8U;
si1+=si2;
l11=si1;
si0+=si1;
l9=si0;
goto L2;
}
L1:;
si0=l2;
L0:;
return si0;
}

U32 f316(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 l3=0;
U32 l4=0;
U64 l5=0;
U32 l6=0;
U32 l7=0;
U64 l8=0;
U32 l9=0;
U32 l10=0;
U32 l11=0;
U64 l12=0;
U32 l13=0;
U32 si0,si1,si2,si3;
U64 sj0,sj1,sj2;
si0=1U;
l2=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+12U);
si0=!(si0);
if(si0){
goto L1;
}
si0=l0;
si1=16U;
si0+=si1;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+152U);
l3=si1;
si2=l1;
si3=156U;
si2+=si3;
si2=i32_load(&i->m0,(U64)si2);
l4=si2;
sj0=f491(i,si0,si1,si2);
l5=sj0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si1=-40U;
si0+=si1;
l7=si0;
sj0=l5;
sj1=25ULL;
sj0>>=(sj1&63);
sj1=127ULL;
sj0&=sj1;
sj1=72340172838076673ULL;
sj0*=sj1;
l8=sj0;
sj0=l5;
si0=(U32)(sj0);
l9=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+4U);
l10=si0;
si0=0U;
l11=si0;
L2:;
{
si0=l6;
si1=l9;
si2=l10;
si1&=si2;
l0=si1;
si0+=si1;
sj0=i64_load(&i->m0,(U64)si0);
l12=sj0;
sj1=l8;
sj0^=sj1;
l5=sj0;
sj1=-1ULL;
sj0^=sj1;
sj1=l5;
sj2=-72340172838076673ULL;
sj1+=sj2;
sj0&=sj1;
sj1=-9187201950435737472ULL;
sj0&=sj1;
l5=sj0;
si0=!(sj0);
if(si0){
goto L3;
}
L5:;
{
si0=l7;
si1=0U;
sj2=l5;
sj2=I64_CTZ(sj2);
si2=(U32)(sj2);
si3=3U;
si2>>=(si3&31);
si3=l0;
si2+=si3;
si3=l10;
si2&=si3;
si1-=si2;
l13=si1;
si2=40U;
si1*=si2;
si0+=si1;
l9=si0;
si0=i32_load(&i->m0,(U64)si0+4U);
si1=l4;
si0=si0 != si1;
if(si0){
goto L6;
}
si0=l3;
si1=l9;
si1=i32_load(&i->m0,(U64)si1);
si2=l4;
si0=f15142(i,si0,si1,si2);
si0=!(si0);
if(si0){
goto L4;
}
L6:;
sj0=l5;
sj1=-1ULL;
sj0+=sj1;
sj1=l5;
sj0&=sj1;
l5=sj0;
si0=!(sj0);
if(si0){
goto L3;
}
goto L5;
}
L4:;
si0=l6;
si1=l13;
si2=40U;
si1*=si2;
si0+=si1;
l4=si0;
si0=l1;
sj0=i64_load(&i->m0,(U64)si0);
si0=!(sj0);
if(si0){
goto L7;
}
si0=l1;
sj0=i64_load(&i->m0,(U64)si0+8U);
l5=sj0;
si0=l1;
si1=188U;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=2U;
si0&=si1;
if(si0){
goto L8;
}
sj0=l5;
si1=l4;
si2=-4U;
si1+=si2;
sj1=i64_load32_u(&i->m0,(U64)si1);
si0=sj0 != sj1;
goto L0;
L8:;
sj0=l5;
si0=!(sj0);
if(si0){
goto L9;
}
si0=l4;
si1=-4U;
si0+=si1;
sj0=i64_load32_u(&i->m0,(U64)si0);
sj1=l5;
sj0=REM_U(sj0,sj1);
sj1=0ULL;
si0=sj0 != sj1;
goto L0;
L9:;
si0=1088496U;
si1=57U;
si2=1088676U;
f604(i,si0,si1,si2);
UNREACHABLE;
L7:;
si0=l1;
sj0=i64_load(&i->m0,(U64)si0+16U);
si0=!(sj0);
if(si0){
goto L10;
}
si0=l1;
si1=24U;
si0+=si1;
sj0=i64_load(&i->m0,(U64)si0);
si1=l4;
si2=-4U;
si1+=si2;
sj1=i64_load32_u(&i->m0,(U64)si1);
si0=sj0 >= sj1;
goto L0;
L10:;
si0=l1;
sj0=i64_load(&i->m0,(U64)si0+32U);
sj1=0ULL;
si0=sj0 != sj1;
if(si0){
goto L1;
}
si0=l1;
si1=188U;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=2U;
si0&=si1;
si1=1U;
si0>>=(si1&31);
l2=si0;
goto L1;
L3:;
sj0=l12;
sj1=l12;
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
si0=l0;
si1=l11;
si2=8U;
si1+=si2;
l11=si1;
si0+=si1;
l9=si0;
goto L2;
}
L1:;
si0=l2;
L0:;
return si0;
}

void f317(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
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
f318(i,si0,si1);
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
si2=8U;
si1+=si2;
si2=4U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
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
si0=f15143(i,si0,si1,si2);
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
f14666(i,si0,si1,si2,si3);
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

void f318(rustpythonInstance*i,U32 l0,U32 l1) {
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
f14773(i,si0,si1,si2,si3);
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
si1=1088780U;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=2U;
i32_store8(&i->m0,(U64)si0,si1);
goto L3;
L10:;
si0=l3;
switch(si0){
case 0:
goto L14;
case 1:
goto L15;
case 2:
goto L13;
case 3:
goto L12;
default:
goto L14;
}
L15:;
si0=l2;
si0=i32_load8_u(&i->m0,(U64)si0+9U);
l6=si0;
goto L11;
L14:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+12U);
si0=f14744(i,si0);
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
si0=si0 != si1;
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
f15024(i,si0);
L16:;
si0=l3;
f15024(i,si0);
L7:;
si0=l5;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+8U);
l3=si1;
si0=si0 >= si1;
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
goto L2;
L17:;
si0=l5;
si1=l3;
si2=17677444U;
f597(i,si0,si1,si2);
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
si0=f15144(i,si0,si1,si2);
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
si2=17677444U;
f597(i,si0,si1,si2);
UNREACHABLE;
L0:;
}

U32 f319(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 l3=0;
U32 si0,si1,si2;
si0=i->g0;
si1=16U;
si0-=si1;
l2=si0;
i->g0=si0;
si0=l2;
si1=0U;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l1;
si1=128U;
si0=si0 < si1;
if(si0){
goto L4;
}
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
goto L2;
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
l3=si0;
goto L1;
L4:;
si0=l2;
si1=l1;
i32_store8(&i->m0,(U64)si0+12U,si1);
si0=1U;
l3=si0;
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
l3=si0;
goto L1;
L2:;
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
l3=si0;
L1:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+8U);
l1=si0;
si0=i32_load(&i->m0,(U64)si0+4U);
si1=l1;
si1=i32_load(&i->m0,(U64)si1+8U);
l0=si1;
si0-=si1;
si1=l3;
si0=si0 >= si1;
if(si0){
goto L5;
}
si0=l1;
si1=l0;
si2=l3;
f530(i,si0,si1,si2);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+8U);
l0=si0;
L5:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
si1=l0;
si0+=si1;
si1=l2;
si2=12U;
si1+=si2;
si2=l3;
si0=f15143(i,si0,si1,si2);
si0=l1;
si1=l0;
si2=l3;
si1+=si2;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l2;
si1=16U;
si0+=si1;
i->g0=si0;
si0=0U;
L0:;
return si0;
}

U32 f320(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U64 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 si0,si1,si2,si3;
U64 sj0,sj1;
si0=i->g0;
si1=16U;
si0-=si1;
l2=si0;
i->g0=si0;
si0=l2;
si1=0U;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l1;
si1=128U;
si0=si0 < si1;
if(si0){
goto L4;
}
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
goto L2;
}
si0=l2;
si1=l1;
si2=63U;
si1&=si2;
si2=128U;
si1|=si2;
i32_store8(&i->m0,(U64)si0+6U,si1);
si0=l2;
si1=l1;
si2=12U;
si1>>=(si2&31);
si2=224U;
si1|=si2;
i32_store8(&i->m0,(U64)si0+4U,si1);
si0=l2;
si1=l1;
si2=6U;
si1>>=(si2&31);
si2=63U;
si1&=si2;
si2=128U;
si1|=si2;
i32_store8(&i->m0,(U64)si0+5U,si1);
si0=3U;
l1=si0;
goto L1;
L4:;
si0=l2;
si1=l1;
i32_store8(&i->m0,(U64)si0+4U,si1);
si0=1U;
l1=si0;
goto L1;
L3:;
si0=l2;
si1=l1;
si2=63U;
si1&=si2;
si2=128U;
si1|=si2;
i32_store8(&i->m0,(U64)si0+5U,si1);
si0=l2;
si1=l1;
si2=6U;
si1>>=(si2&31);
si2=192U;
si1|=si2;
i32_store8(&i->m0,(U64)si0+4U,si1);
si0=2U;
l1=si0;
goto L1;
L2:;
si0=l2;
si1=l1;
si2=63U;
si1&=si2;
si2=128U;
si1|=si2;
i32_store8(&i->m0,(U64)si0+7U,si1);
si0=l2;
si1=l1;
si2=6U;
si1>>=(si2&31);
si2=63U;
si1&=si2;
si2=128U;
si1|=si2;
i32_store8(&i->m0,(U64)si0+6U,si1);
si0=l2;
si1=l1;
si2=12U;
si1>>=(si2&31);
si2=63U;
si1&=si2;
si2=128U;
si1|=si2;
i32_store8(&i->m0,(U64)si0+5U,si1);
si0=l2;
si1=l1;
si2=18U;
si1>>=(si2&31);
si2=7U;
si1&=si2;
si2=240U;
si1|=si2;
i32_store8(&i->m0,(U64)si0+4U,si1);
si0=4U;
l1=si0;
L1:;
si0=l2;
si1=8U;
si0+=si1;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+8U);
si2=l2;
si3=4U;
si2+=si3;
si3=l1;
f14666(i,si0,si1,si2,si3);
si0=l2;
si0=i32_load8_u(&i->m0,(U64)si0+8U);
l1=si0;
si1=4U;
si0=si0 == si1;
if(si0){
goto L5;
}
si0=l2;
sj0=i64_load(&i->m0,(U64)si0+8U);
l3=sj0;
si0=l0;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=3U;
si0=si0 != si1;
if(si0){
goto L6;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+4U);
l4=si0;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si1=l4;
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
goto L7;
}
si0=l5;
f15024(i,si0);
L7:;
si0=l4;
f15024(i,si0);
L6:;
si0=l0;
sj1=l3;
i64_store(&i->m0,(U64)si0,sj1);
L5:;
si0=l2;
si1=16U;
si0+=si1;
i->g0=si0;
si0=l1;
si1=4U;
si0=si0 != si1;
L0:;
return si0;
}

U32 f321(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U64 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 si0,si1,si2,si3;
U64 sj0,sj1;
si0=i->g0;
si1=16U;
si0-=si1;
l2=si0;
i->g0=si0;
si0=l2;
si1=0U;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l1;
si1=128U;
si0=si0 < si1;
if(si0){
goto L4;
}
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
goto L2;
}
si0=l2;
si1=l1;
si2=63U;
si1&=si2;
si2=128U;
si1|=si2;
i32_store8(&i->m0,(U64)si0+6U,si1);
si0=l2;
si1=l1;
si2=12U;
si1>>=(si2&31);
si2=224U;
si1|=si2;
i32_store8(&i->m0,(U64)si0+4U,si1);
si0=l2;
si1=l1;
si2=6U;
si1>>=(si2&31);
si2=63U;
si1&=si2;
si2=128U;
si1|=si2;
i32_store8(&i->m0,(U64)si0+5U,si1);
si0=3U;
l1=si0;
goto L1;
L4:;
si0=l2;
si1=l1;
i32_store8(&i->m0,(U64)si0+4U,si1);
si0=1U;
l1=si0;
goto L1;
L3:;
si0=l2;
si1=l1;
si2=63U;
si1&=si2;
si2=128U;
si1|=si2;
i32_store8(&i->m0,(U64)si0+5U,si1);
si0=l2;
si1=l1;
si2=6U;
si1>>=(si2&31);
si2=192U;
si1|=si2;
i32_store8(&i->m0,(U64)si0+4U,si1);
si0=2U;
l1=si0;
goto L1;
L2:;
si0=l2;
si1=l1;
si2=63U;
si1&=si2;
si2=128U;
si1|=si2;
i32_store8(&i->m0,(U64)si0+7U,si1);
si0=l2;
si1=l1;
si2=6U;
si1>>=(si2&31);
si2=63U;
si1&=si2;
si2=128U;
si1|=si2;
i32_store8(&i->m0,(U64)si0+6U,si1);
si0=l2;
si1=l1;
si2=12U;
si1>>=(si2&31);
si2=63U;
si1&=si2;
si2=128U;
si1|=si2;
i32_store8(&i->m0,(U64)si0+5U,si1);
si0=l2;
si1=l1;
si2=18U;
si1>>=(si2&31);
si2=7U;
si1&=si2;
si2=240U;
si1|=si2;
i32_store8(&i->m0,(U64)si0+4U,si1);
si0=4U;
l1=si0;
L1:;
si0=l2;
si1=8U;
si0+=si1;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+8U);
si2=l2;
si3=4U;
si2+=si3;
si3=l1;
f14779(i,si0,si1,si2,si3);
si0=l2;
si0=i32_load8_u(&i->m0,(U64)si0+8U);
l1=si0;
si1=4U;
si0=si0 == si1;
if(si0){
goto L5;
}
si0=l2;
sj0=i64_load(&i->m0,(U64)si0+8U);
l3=sj0;
si0=l0;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=3U;
si0=si0 != si1;
if(si0){
goto L6;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+4U);
l4=si0;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si1=l4;
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
goto L7;
}
si0=l5;
f15024(i,si0);
L7:;
si0=l4;
f15024(i,si0);
L6:;
si0=l0;
sj1=l3;
i64_store(&i->m0,(U64)si0,sj1);
L5:;
si0=l2;
si1=16U;
si0+=si1;
i->g0=si0;
si0=l1;
si1=4U;
si0=si0 != si1;
L0:;
return si0;
}

U32 f322(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 l3=0;
U32 l4=0;
U64 l5=0;
U32 si0,si1,si2,si3;
U64 sj0,sj1;
si0=i->g0;
si1=16U;
si0-=si1;
l2=si0;
i->g0=si0;
si0=l2;
si1=0U;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l1;
si1=128U;
si0=si0 < si1;
if(si0){
goto L4;
}
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
goto L2;
}
si0=l2;
si1=l1;
si2=63U;
si1&=si2;
si2=128U;
si1|=si2;
i32_store8(&i->m0,(U64)si0+6U,si1);
si0=l2;
si1=l1;
si2=12U;
si1>>=(si2&31);
si2=224U;
si1|=si2;
i32_store8(&i->m0,(U64)si0+4U,si1);
si0=l2;
si1=l1;
si2=6U;
si1>>=(si2&31);
si2=63U;
si1&=si2;
si2=128U;
si1|=si2;
i32_store8(&i->m0,(U64)si0+5U,si1);
si0=3U;
l3=si0;
goto L1;
L4:;
si0=l2;
si1=l1;
i32_store8(&i->m0,(U64)si0+4U,si1);
si0=1U;
l3=si0;
goto L1;
L3:;
si0=l2;
si1=l1;
si2=63U;
si1&=si2;
si2=128U;
si1|=si2;
i32_store8(&i->m0,(U64)si0+5U,si1);
si0=l2;
si1=l1;
si2=6U;
si1>>=(si2&31);
si2=192U;
si1|=si2;
i32_store8(&i->m0,(U64)si0+4U,si1);
si0=2U;
l3=si0;
goto L1;
L2:;
si0=l2;
si1=l1;
si2=63U;
si1&=si2;
si2=128U;
si1|=si2;
i32_store8(&i->m0,(U64)si0+7U,si1);
si0=l2;
si1=l1;
si2=6U;
si1>>=(si2&31);
si2=63U;
si1&=si2;
si2=128U;
si1|=si2;
i32_store8(&i->m0,(U64)si0+6U,si1);
si0=l2;
si1=l1;
si2=12U;
si1>>=(si2&31);
si2=63U;
si1&=si2;
si2=128U;
si1|=si2;
i32_store8(&i->m0,(U64)si0+5U,si1);
si0=l2;
si1=l1;
si2=18U;
si1>>=(si2&31);
si2=7U;
si1&=si2;
si2=240U;
si1|=si2;
i32_store8(&i->m0,(U64)si0+4U,si1);
si0=4U;
l3=si0;
L1:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+8U);
l1=si0;
si0=i32_load(&i->m0,(U64)si0+4U);
si1=l1;
si1=i32_load(&i->m0,(U64)si1+8U);
l4=si1;
si0-=si1;
si1=l3;
si0=si0 <= si1;
if(si0){
goto L6;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
si1=l4;
si0+=si1;
si1=l2;
si2=4U;
si1+=si2;
si2=l3;
si0=f15143(i,si0,si1,si2);
si0=l1;
si1=l4;
si2=l3;
si1+=si2;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=0U;
l1=si0;
goto L5;
L6:;
si0=l2;
si1=8U;
si0+=si1;
si1=l1;
si2=l2;
si3=4U;
si2+=si3;
si3=l3;
f317(i,si0,si1,si2,si3);
si0=0U;
l1=si0;
si0=l2;
si0=i32_load8_u(&i->m0,(U64)si0+8U);
si1=4U;
si0=si0 == si1;
if(si0){
goto L5;
}
si0=l2;
sj0=i64_load(&i->m0,(U64)si0+8U);
l5=sj0;
si0=l0;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=3U;
si0=si0 != si1;
if(si0){
goto L7;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+4U);
l1=si0;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
si1=l1;
si2=4U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
l3=si1;
si1=i32_load(&i->m0,(U64)si1);
TF(i->t0,si1,void (*)(rustpythonInstance*,U32))(i,si0);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+4U);
si0=!(si0);
if(si0){
goto L8;
}
si0=l4;
f15024(i,si0);
L8:;
si0=l1;
f15024(i,si0);
L7:;
si0=l0;
sj1=l5;
i64_store(&i->m0,(U64)si0,sj1);
si0=1U;
l1=si0;
L5:;
si0=l2;
si1=16U;
si0+=si1;
i->g0=si0;
si0=l1;
L0:;
return si0;
}

U32 f323(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 si0,si1,si2;
si0=i->g0;
si1=16U;
si0-=si1;
l2=si0;
i->g0=si0;
si0=l2;
si1=l0;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l2;
si1=12U;
si0+=si1;
si1=1088792U;
si2=l1;
si0=f621(i,si0,si1,si2);
l0=si0;
si0=l2;
si1=16U;
si0+=si1;
i->g0=si0;
si0=l0;
L0:;
return si0;
}

U32 f324(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 si0,si1,si2;
si0=i->g0;
si1=16U;
si0-=si1;
l2=si0;
i->g0=si0;
si0=l2;
si1=l0;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l2;
si1=12U;
si0+=si1;
si1=1088816U;
si2=l1;
si0=f621(i,si0,si1,si2);
l0=si0;
si0=l2;
si1=16U;
si0+=si1;
i->g0=si0;
si0=l0;
L0:;
return si0;
}

U32 f325(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 si0,si1,si2;
si0=i->g0;
si1=16U;
si0-=si1;
l2=si0;
i->g0=si0;
si0=l2;
si1=l0;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l2;
si1=12U;
si0+=si1;
si1=1088840U;
si2=l1;
si0=f621(i,si0,si1,si2);
l0=si0;
si0=l2;
si1=16U;
si0+=si1;
i->g0=si0;
si0=l0;
L0:;
return si0;
}

U32 f326(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 si0,si1,si2;
si0=i->g0;
si1=16U;
si0-=si1;
l2=si0;
i->g0=si0;
si0=l2;
si1=l0;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l2;
si1=12U;
si0+=si1;
si1=1088864U;
si2=l1;
si0=f621(i,si0,si1,si2);
l0=si0;
si0=l2;
si1=16U;
si0+=si1;
i->g0=si0;
si0=l0;
L0:;
return si0;
}

void f327(rustpythonInstance*i,U32 l0) {
L0:;
}

void f328(rustpythonInstance*i,U32 l0) {
U32 l1=0;
U32 l2=0;
U32 si0,si1,si2;
si0=l0;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=3U;
si0=si0 != si1;
if(si0){
goto L1;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+4U);
l0=si0;
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
goto L2;
}
si0=l1;
f15024(i,si0);
L2:;
si0=l0;
f15024(i,si0);
L1:;
L0:;
}

void f329(rustpythonInstance*i,U32 l0) {
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
f15024(i,si0);
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
f15024(i,si0);
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
f15024(i,si0);
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
f15024(i,si0);
L4:;
si0=l0;
si1=212U;
si0+=si1;
l1=si0;
f223(i,si0);
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
f15024(i,si0);
L5:;
si0=l0;
si1=224U;
si0+=si1;
l1=si0;
f224(i,si0);
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
f15024(i,si0);
L6:;
si0=l0;
f225(i,si0);
si0=l0;
si0=i32_load(&i->m0,(U64)si0+4U);
si0=!(si0);
if(si0){
goto L7;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
f15024(i,si0);
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
f222(i,si0);
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
f15024(i,si0);
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
f15024(i,si0);
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
f15024(i,si0);
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
f15024(i,si0);
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
f15024(i,si0);
L16:;
si0=l0;
si1=260U;
si0+=si1;
l1=si0;
f226(i,si0);
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
f15024(i,si0);
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
f15024(i,si0);
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
f15024(i,si0);
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
f15024(i,si0);
L20:;
L0:;
}


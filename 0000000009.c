#include "w2c2_base.h"

#include "rustpython.h"

U32 f930(rustpythonInstance*i,U32 l0,U32 l1) {
U64 l2=0;
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
U32 si0,si1,si2,si3,si4,si5;
U64 sj0,sj1,sj2,sj3,sj4;
si0=l1;
sj0=i64_load(&i->m0,(U64)si0+8U);
l2=sj0;
si0=0U;
l3=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
if(si0){
goto L2;
}
sj0=l2;
si0=!(sj0);
if(si0){
goto L1;
}
L2:;
si0=l0;
si1=l1;
si0=si0 == si1;
if(si0){
goto L4;
}
si0=l4;
if(si0){
goto L3;
}
si0=l0;
sj1=l2;
si0=f928(i,si0,sj1);
goto L0;
L4:;
si0=l4;
si0=!(si0);
if(si0){
goto L1;
}
sj0=l2;
si0=(U32)(sj0);
si0=!(si0);
if(si0){
goto L1;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
f15024(i,si0);
si0=0U;
goto L0;
L3:;
si0=1U;
l3=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L1;
}
si0=l0;
si1=12U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
sj1=l2;
sj2=32ULL;
sj1>>=(sj2&63);
si1=(U32)(sj1);
l6=si1;
si0=si0 < si1;
if(si0){
goto L1;
}
si0=l6;
si0=!(si0);
if(si0){
goto L5;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+4U);
l7=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
l8=si0;
si0=l6;
si1=1U;
si0&=si1;
l9=si0;
si0=l6;
si1=1U;
si0=si0 != si1;
if(si0){
goto L7;
}
si0=0U;
l4=si0;
si0=0U;
l10=si0;
goto L6;
L7:;
si0=l6;
si1=-2U;
si0&=si1;
l11=si0;
si0=0U;
l4=si0;
si0=l8;
l3=si0;
si0=l7;
l1=si0;
si0=0U;
l10=si0;
L8:;
{
si0=l1;
si1=l1;
sj1=i64_load(&i->m0,(U64)si1);
l2=sj1;
si2=l4;
sj2=(U64)(si2);
sj3=1ULL;
sj2&=sj3;
si3=l3;
sj3=i64_load(&i->m0,(U64)si3);
l12=sj3;
sj2+=sj3;
sj1-=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si1=8U;
si0+=si1;
l13=si0;
si1=l13;
sj1=i64_load(&i->m0,(U64)si1);
l14=sj1;
sj2=l2;
sj3=l12;
si2=sj2 <= sj3;
sj3=l2;
sj4=l12;
si3=sj3 < sj4;
si4=l4;
si5=1U;
si4&=si5;
si2=si4?si2:si3;
l4=si2;
sj2=(U64)(si2);
si3=l3;
si4=8U;
si3+=si4;
sj3=i64_load(&i->m0,(U64)si3);
l2=sj3;
sj2+=sj3;
sj1-=sj2;
i64_store(&i->m0,(U64)si0,sj1);
sj0=l14;
sj1=l2;
si0=sj0 <= sj1;
sj1=l14;
sj2=l2;
si1=sj1 < sj2;
si2=l4;
si0=si2?si0:si1;
l4=si0;
si0=l3;
si1=16U;
si0+=si1;
l3=si0;
si0=l1;
si1=16U;
si0+=si1;
l1=si0;
si0=l11;
si1=l10;
si2=2U;
si1+=si2;
l10=si1;
si0=si0 != si1;
if(si0){
goto L8;
}
}
L6:;
si0=l9;
si0=!(si0);
if(si0){
goto L9;
}
si0=l7;
si1=l10;
si2=3U;
si1<<=(si2&31);
l1=si1;
si0+=si1;
l3=si0;
si1=l3;
sj1=i64_load(&i->m0,(U64)si1);
l2=sj1;
si2=l4;
sj2=(U64)(si2);
si3=l8;
si4=l1;
si3+=si4;
sj3=i64_load(&i->m0,(U64)si3);
l12=sj3;
sj2+=sj3;
sj1-=sj2;
i64_store(&i->m0,(U64)si0,sj1);
sj0=l2;
sj1=l12;
si0=sj0 <= sj1;
sj1=l2;
sj2=l12;
si1=sj1 < sj2;
si2=l4;
si0=si2?si0:si1;
l4=si0;
L9:;
si0=l5;
si1=l6;
si0=si0 == si1;
l1=si0;
if(si0){
goto L10;
}
si0=l4;
si1=1U;
si0&=si1;
si0=!(si0);
if(si0){
goto L10;
}
si0=l7;
si1=l6;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l1=si0;
si1=l1;
sj1=i64_load(&i->m0,(U64)si1);
l2=sj1;
sj2=-1ULL;
sj1+=sj2;
i64_store(&i->m0,(U64)si0,sj1);
sj0=l2;
sj1=0ULL;
si0=sj0 != sj1;
if(si0){
goto L5;
}
si0=l5;
si1=3U;
si0<<=(si1&31);
si1=l6;
si2=3U;
si1<<=(si2&31);
l1=si1;
si0-=si1;
si1=-8U;
si0+=si1;
l3=si0;
si0=l1;
si1=l7;
si0+=si1;
si1=8U;
si0+=si1;
l1=si0;
L11:;
{
si0=l3;
if(si0){
goto L12;
}
si0=1U;
goto L0;
L12:;
si0=l1;
si1=l1;
sj1=i64_load(&i->m0,(U64)si1);
l2=sj1;
sj2=-1ULL;
sj1+=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=-8U;
si0+=si1;
l3=si0;
si0=l1;
si1=8U;
si0+=si1;
l1=si0;
sj0=l2;
si0=!(sj0);
if(si0){
goto L11;
}
goto L5;
}
L10:;
si0=1U;
l3=si0;
si0=l1;
si1=l4;
si0&=si1;
if(si0){
goto L1;
}
L5:;
si0=0U;
l3=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L1;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+4U);
l4=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+12U);
l10=si0;
if(si0){
goto L14;
}
sj0=0ULL;
l2=sj0;
goto L13;
L14:;
si0=l10;
si1=3U;
si0<<=(si1&31);
l1=si0;
si0=l10;
si1=-1U;
si0+=si1;
si1=536870911U;
si0&=si1;
si1=1U;
si0+=si1;
l13=si0;
si0=0U;
l3=si0;
L18:;
{
si0=l4;
si1=l1;
si0+=si1;
si1=-8U;
si0+=si1;
sj0=i64_load(&i->m0,(U64)si0);
sj1=0ULL;
si0=sj0 != sj1;
if(si0){
goto L17;
}
si0=l3;
si1=-1U;
si0+=si1;
l3=si0;
si0=l1;
si1=-8U;
si0+=si1;
l1=si0;
if(si0){
goto L18;
}
goto L16;
}
L17:;
si0=l3;
si0=!(si0);
if(si0){
goto L15;
}
si0=0U;
si1=l3;
si0-=si1;
l13=si0;
L16:;
si0=l10;
si1=l13;
si0=si0 < si1;
if(si0){
goto L15;
}
si0=l0;
si1=l10;
si2=l13;
si1-=si2;
l10=si1;
i32_store(&i->m0,(U64)si0+12U,si1);
L15:;
sj0=0ULL;
l2=sj0;
si0=0U;
l3=si0;
si0=l10;
switch(si0){
case 0:
goto L13;
case 1:
goto L19;
default:
goto L1;
}
L19:;
si0=l4;
sj0=i64_load(&i->m0,(U64)si0);
l2=sj0;
L13:;
si0=l0;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L20;
}
si0=l4;
f15024(i,si0);
L20:;
si0=l0;
sj1=l2;
i64_store(&i->m0,(U64)si0+8U,sj1);
si0=0U;
l3=si0;
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
L1:;
si0=l3;
L0:;
return si0;
}

U32 f931(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U64 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 si0,si1,si2,si3;
U64 sj0,sj1,sj2;
si0=i->g0;
si1=16U;
si0-=si1;
l2=si0;
i->g0=si0;
si0=l0;
sj0=i64_load(&i->m0,(U64)si0+8U);
l3=sj0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
if(si0){
goto L9;
}
sj0=l3;
si0=!(sj0);
if(si0){
goto L8;
}
L9:;
si0=l0;
si1=l1;
si0=si0 == si1;
if(si0){
goto L7;
}
si0=l4;
if(si0){
goto L6;
}
si0=l2;
si1=l1;
sj2=l3;
f927(i,si0,si1,sj2);
si0=l2;
si0=i32_load(&i->m0,(U64)si0);
si1=2U;
si0=si0 == si1;
l4=si0;
if(si0){
goto L1;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L10;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+8U);
si0=!(si0);
if(si0){
goto L10;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+4U);
f15024(i,si0);
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
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
goto L1;
L8:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L12;
}
si0=l1;
sj0=i64_load(&i->m0,(U64)si0+8U);
l3=sj0;
si0=0U;
l1=si0;
goto L11;
L12:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
l5=si0;
si0=8U;
l4=si0;
si0=0U;
l6=si0;
si0=l1;
si1=12U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si0=!(si0);
if(si0){
goto L13;
}
si0=l1;
si1=268435455U;
si0=si0 > si1;
if(si0){
goto L5;
}
si0=l1;
si1=3U;
si0<<=(si1&31);
l7=si0;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L5;
}
si0=l7;
si0=!(si0);
if(si0){
goto L13;
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
l6=si0;
L13:;
si0=l4;
si1=l5;
si2=l6;
si0=f15143(i,si0,si1,si2);
si0=l1;
sj0=(U64)(si0);
l3=sj0;
sj1=32ULL;
sj0<<=(sj1&63);
sj1=l3;
sj0|=sj1;
l3=sj0;
si0=1U;
l1=si0;
L11:;
si0=l0;
sj1=l3;
i64_store(&i->m0,(U64)si0+8U,sj1);
si0=l0;
si1=l4;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l1;
i32_store(&i->m0,(U64)si0,si1);
goto L2;
L7:;
si0=l4;
si0=!(si0);
if(si0){
goto L14;
}
sj0=l3;
si0=(U32)(sj0);
si0=!(si0);
if(si0){
goto L14;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+4U);
f15024(i,si0);
L14:;
si0=l0;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=8U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
goto L2;
L6:;
si0=1U;
l4=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L1;
}
si0=l1;
si1=12U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
sj1=l3;
sj2=32ULL;
sj1>>=(sj2&63);
si1=(U32)(sj1);
si0=si0 < si1;
if(si0){
goto L1;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
si1=l6;
si2=l0;
si3=4U;
si2+=si3;
si0=f1058(i,si0,si1,si2);
if(si0){
goto L1;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L2;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+4U);
l6=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+12U);
l7=si0;
if(si0){
goto L15;
}
sj0=0ULL;
l3=sj0;
goto L3;
L15:;
si0=l7;
si1=3U;
si0<<=(si1&31);
l1=si0;
si0=l7;
si1=-1U;
si0+=si1;
si1=536870911U;
si0&=si1;
si1=1U;
si0+=si1;
l5=si0;
si0=0U;
l4=si0;
L19:;
{
si0=l6;
si1=l1;
si0+=si1;
si1=-8U;
si0+=si1;
sj0=i64_load(&i->m0,(U64)si0);
sj1=0ULL;
si0=sj0 != sj1;
if(si0){
goto L18;
}
si0=l4;
si1=-1U;
si0+=si1;
l4=si0;
si0=l1;
si1=-8U;
si0+=si1;
l1=si0;
if(si0){
goto L19;
}
goto L17;
}
L18:;
si0=l4;
si0=!(si0);
if(si0){
goto L16;
}
si0=0U;
si1=l4;
si0-=si1;
l5=si0;
L17:;
si0=l7;
si1=l5;
si0=si0 < si1;
if(si0){
goto L16;
}
si0=l0;
si1=l7;
si2=l5;
si1-=si2;
l7=si1;
i32_store(&i->m0,(U64)si0+12U,si1);
L16:;
sj0=0ULL;
l3=sj0;
si0=0U;
l4=si0;
si0=l7;
switch(si0){
case 0:
goto L3;
case 1:
goto L20;
default:
goto L1;
}
L20:;
si0=l6;
sj0=i64_load(&i->m0,(U64)si0);
l3=sj0;
goto L3;
L5:;
f53(i);
UNREACHABLE;
L4:;
si0=8U;
si1=l7;
f52(i,si0,si1);
UNREACHABLE;
L3:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+8U);
si0=!(si0);
if(si0){
goto L21;
}
si0=l6;
f15024(i,si0);
L21:;
si0=l0;
sj1=l3;
i64_store(&i->m0,(U64)si0+8U,sj1);
si0=0U;
l4=si0;
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
goto L1;
L2:;
si0=0U;
l4=si0;
L1:;
si0=l2;
si1=16U;
si0+=si1;
i->g0=si0;
si0=l4;
L0:;
return si0;
}

void f932(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U64 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U64 l8=0;
U32 si0,si1,si2,si3,si4;
U64 sj0,sj1,sj2,sj3;
si0=i->g0;
si1=16U;
si0-=si1;
l3=si0;
i->g0=si0;
si0=l1;
si1=l2;
si0=si0 == si1;
if(si0){
goto L7;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L8;
}
si0=l2;
sj0=i64_load(&i->m0,(U64)si0+8U);
l4=sj0;
si0=!(sj0);
si0=!(si0);
if(si0){
goto L6;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L10;
}
si0=l1;
sj0=i64_load(&i->m0,(U64)si0+8U);
l4=sj0;
si0=0U;
l1=si0;
goto L9;
L10:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
l5=si0;
si0=8U;
l2=si0;
si0=0U;
l6=si0;
si0=l1;
si1=12U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si0=!(si0);
if(si0){
goto L11;
}
si0=l1;
si1=268435455U;
si0=si0 > si1;
if(si0){
goto L5;
}
si0=l1;
si1=3U;
si0<<=(si1&31);
l7=si0;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L5;
}
si0=l7;
si0=!(si0);
if(si0){
goto L11;
}
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=l7;
si0=f15022(i,si0);
l2=si0;
si0=!(si0);
if(si0){
goto L4;
}
si0=l7;
l6=si0;
L11:;
si0=l2;
si1=l5;
si2=l6;
si0=f15143(i,si0,si1,si2);
si0=l1;
sj0=(U64)(si0);
l4=sj0;
sj1=32ULL;
sj0<<=(sj1&63);
sj1=l4;
sj0|=sj1;
l4=sj0;
si0=1U;
l1=si0;
L9:;
si0=l0;
sj1=l4;
i64_store(&i->m0,(U64)si0+8U,sj1);
si0=l0;
si1=l2;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l1;
i32_store(&i->m0,(U64)si0,si1);
goto L1;
L8:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L2;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
l6=si0;
si1=l1;
si2=12U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
l1=si1;
si2=l2;
si2=i32_load(&i->m0,(U64)si2+4U);
l7=si2;
si3=l2;
si4=12U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
l2=si3;
si0=f1162(i,si0,si1,si2,si3);
si1=255U;
si0&=si1;
si1=255U;
si0=si0 == si1;
if(si0){
goto L12;
}
si0=l3;
si1=l6;
si2=l1;
si3=l7;
si4=l2;
f1054(i,si0,si1,si2,si3,si4);
si0=l3;
sj0=i64_load(&i->m0,(U64)si0+4U);
l8=sj0;
sj1=32ULL;
sj0>>=(sj1&63);
si0=(U32)(sj0);
l7=si0;
si1=1U;
si0+=si1;
l1=si0;
si0=l7;
si1=3U;
si0<<=(si1&31);
l2=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
L15:;
{
sj0=0ULL;
l4=sj0;
si0=l2;
si0=!(si0);
if(si0){
goto L14;
}
si0=l1;
si1=-1U;
si0+=si1;
l1=si0;
si0=l2;
si1=-8U;
si0+=si1;
l2=si0;
si1=l6;
si0+=si1;
sj0=i64_load(&i->m0,(U64)si0);
si0=!(sj0);
if(si0){
goto L15;
}
}
si0=l1;
switch(si0){
case 0:
goto L14;
case 1:
goto L16;
default:
goto L17;
}
L17:;
sj0=l8;
si1=l1;
sj1=(U64)(si1);
sj2=32ULL;
sj1<<=(sj2&63);
sj2=l8;
sj3=4294967295ULL;
sj2&=sj3;
sj1|=sj2;
si2=l1;
si3=l7;
si2=si2 > si3;
sj0=si2?sj0:sj1;
l4=sj0;
si0=1U;
l2=si0;
goto L13;
L16:;
si0=l7;
si0=!(si0);
if(si0){
goto L3;
}
si0=l6;
sj0=i64_load(&i->m0,(U64)si0);
l4=sj0;
L14:;
si0=0U;
l2=si0;
sj0=l8;
si0=(U32)(sj0);
si0=!(si0);
if(si0){
goto L18;
}
si0=l6;
f15024(i,si0);
L18:;
si0=0U;
l6=si0;
L13:;
si0=l0;
sj1=l4;
i64_store(&i->m0,(U64)si0+8U,sj1);
si0=l0;
si1=l6;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l2;
i32_store(&i->m0,(U64)si0,si1);
goto L1;
L12:;
si0=l0;
si1=2U;
i32_store(&i->m0,(U64)si0,si1);
goto L1;
L7:;
si0=l0;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=8U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
goto L1;
L6:;
si0=l0;
si1=l1;
sj2=l4;
f927(i,si0,si1,sj2);
goto L1;
L5:;
f53(i);
UNREACHABLE;
L4:;
si0=8U;
si1=l7;
f52(i,si0,si1);
UNREACHABLE;
L3:;
si0=0U;
si1=0U;
si2=1188524U;
f594(i,si0,si1,si2);
UNREACHABLE;
L2:;
si0=l0;
si1=2U;
i32_store(&i->m0,(U64)si0,si1);
L1:;
si0=l3;
si1=16U;
si0+=si1;
i->g0=si0;
L0:;
}

void f933(rustpythonInstance*i,U32 l0,U64 l1) {
U32 l2=0;
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 si0,si1,si2;
U64 sj0,sj1,sj2;
si0=i->g0;
si1=32U;
si0-=si1;
l2=si0;
i->g0=si0;
sj0=l1;
sj1=1ULL;
si0=sj0 > sj1;
if(si0){
goto L2;
}
sj0=l1;
si0=(U32)(sj0);
switch(si0){
case 0:
goto L3;
case 1:
goto L1;
default:
goto L3;
}
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
si1=1186656U;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l2;
si1=1186288U;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l2;
si1=8U;
si0+=si1;
si1=1186788U;
f614(i,si0,si1);
UNREACHABLE;
L2:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L5;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+4U);
l3=si0;
si1=l0;
si2=12U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
l4=si1;
sj2=l1;
f1093(i,si0,si1,sj2);
si0=l4;
if(si0){
goto L6;
}
sj0=0ULL;
l1=sj0;
goto L4;
L6:;
si0=l4;
si1=3U;
si0<<=(si1&31);
l5=si0;
si0=l4;
si1=-1U;
si0+=si1;
si1=536870911U;
si0&=si1;
si1=1U;
si0+=si1;
l6=si0;
si0=0U;
l7=si0;
L10:;
{
si0=l3;
si1=l5;
si0+=si1;
si1=-8U;
si0+=si1;
sj0=i64_load(&i->m0,(U64)si0);
sj1=0ULL;
si0=sj0 != sj1;
if(si0){
goto L9;
}
si0=l7;
si1=-1U;
si0+=si1;
l7=si0;
si0=l5;
si1=-8U;
si0+=si1;
l5=si0;
if(si0){
goto L10;
}
goto L8;
}
L9:;
si0=l7;
si0=!(si0);
if(si0){
goto L7;
}
si0=0U;
si1=l7;
si0-=si1;
l6=si0;
L8:;
si0=l4;
si1=l6;
si0=si0 < si1;
if(si0){
goto L7;
}
si0=l0;
si1=l4;
si2=l6;
si1-=si2;
l4=si1;
i32_store(&i->m0,(U64)si0+12U,si1);
L7:;
sj0=0ULL;
l1=sj0;
si0=l4;
switch(si0){
case 0:
goto L4;
case 1:
goto L11;
default:
goto L1;
}
L11:;
si0=l3;
sj0=i64_load(&i->m0,(U64)si0);
l1=sj0;
goto L4;
L5:;
si0=l0;
si1=l0;
sj1=i64_load(&i->m0,(U64)si1+8U);
sj2=l1;
sj1=DIV_U(sj1,sj2);
i64_store(&i->m0,(U64)si0+8U,sj1);
goto L1;
L4:;
si0=l0;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L12;
}
si0=l3;
f15024(i,si0);
L12:;
si0=l0;
sj1=l1;
i64_store(&i->m0,(U64)si0+8U,sj1);
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
L1:;
si0=l2;
si1=32U;
si0+=si1;
i->g0=si0;
L0:;
}

void f934(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U32 l4=0;
U32 l5=0;
U64 l6=0;
U32 l7=0;
U32 si0,si1,si2,si3,si4;
U64 sj0,sj1,sj2,sj4;
si0=i->g0;
si1=32U;
si0-=si1;
l3=si0;
i->g0=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
si1=l2;
si1=i32_load(&i->m0,(U64)si1);
l5=si1;
si0=si0 != si1;
if(si0){
goto L20;
}
si0=l4;
si0=!(si0);
if(si0){
goto L19;
}
si0=l1;
si1=12U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
si1=l2;
si2=12U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
l5=si1;
si0=si0 != si1;
if(si0){
goto L16;
}
si0=l4;
l5=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
si1=l2;
si1=i32_load(&i->m0,(U64)si1+4U);
si2=l4;
si3=3U;
si2<<=(si3&31);
si0=f15142(i,si0,si1,si2);
if(si0){
goto L15;
}
goto L2;
L20:;
si0=l5;
if(si0){
goto L17;
}
si0=l2;
sj0=i64_load(&i->m0,(U64)si0+8U);
l6=sj0;
goto L18;
L19:;
si0=l1;
sj0=i64_load(&i->m0,(U64)si0+8U);
si1=l2;
sj1=i64_load(&i->m0,(U64)si1+8U);
l6=sj1;
si0=sj0 == sj1;
if(si0){
goto L2;
}
L18:;
sj0=l6;
sj1=1ULL;
si0=sj0 > sj1;
if(si0){
goto L14;
}
sj0=l6;
si0=(U32)(sj0);
switch(si0){
case 0:
goto L13;
case 1:
goto L12;
default:
goto L13;
}
L17:;
si0=l4;
si0=!(si0);
if(si0){
goto L11;
}
si0=l2;
si1=12U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si0=l1;
si1=12U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
L16:;
si0=l4;
si1=l5;
si0=si0 < si1;
if(si0){
goto L6;
}
L15:;
si0=l3;
si1=8U;
si0+=si1;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+4U);
si2=l4;
si3=l2;
si3=i32_load(&i->m0,(U64)si3+4U);
si4=l5;
f1100(i,si0,si1,si2,si3,si4);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+16U);
l5=si0;
si1=3U;
si0<<=(si1&31);
l1=si0;
si0=-1U;
l2=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+8U);
l4=si0;
L21:;
{
si0=l1;
si0=!(si0);
if(si0){
goto L8;
}
si0=l2;
si1=1U;
si0+=si1;
l2=si0;
si0=l1;
si1=-8U;
si0+=si1;
l1=si0;
si1=l4;
si0+=si1;
sj0=i64_load(&i->m0,(U64)si0);
si0=!(sj0);
if(si0){
goto L21;
}
}
si0=l5;
si1=l2;
si0-=si1;
l1=si0;
switch(si0){
case 0:
goto L8;
case 1:
goto L9;
default:
goto L10;
}
L14:;
si0=l4;
si0=!(si0);
if(si0){
goto L22;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
l2=si0;
si0=8U;
l4=si0;
si0=l1;
si1=12U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si0=!(si0);
if(si0){
goto L23;
}
si0=l5;
si1=268435455U;
si0=si0 > si1;
if(si0){
goto L4;
}
si0=l5;
si1=3U;
si0<<=(si1&31);
l1=si0;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L4;
}
si0=l1;
si0=!(si0);
if(si0){
goto L23;
}
si0=l1;
si1=1U;
si0=f15026(i,si0,si1);
l4=si0;
si0=!(si0);
if(si0){
goto L5;
}
L23:;
si0=l4;
si1=l5;
si2=l2;
si3=l5;
sj4=l6;
f1092(i,si0,si1,si2,si3,sj4);
si0=l5;
si1=3U;
si0<<=(si1&31);
l1=si0;
si0=-1U;
l2=si0;
L25:;
{
si0=l1;
si0=!(si0);
if(si0){
goto L24;
}
si0=l2;
si1=1U;
si0+=si1;
l2=si0;
si0=l1;
si1=-8U;
si0+=si1;
l1=si0;
si1=l4;
si0+=si1;
sj0=i64_load(&i->m0,(U64)si0);
si0=!(sj0);
if(si0){
goto L25;
}
}
si0=l5;
si1=l2;
si0-=si1;
l1=si0;
switch(si0){
case 0:
goto L24;
case 1:
goto L26;
default:
goto L27;
}
L27:;
si0=l0;
si1=l5;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l0;
si1=l4;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=1U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l5;
si2=l1;
si3=l5;
si4=l1;
si3=si3 < si4;
si1=si3?si1:si2;
i32_store(&i->m0,(U64)si0+12U,si1);
goto L1;
L26:;
si0=l5;
si0=!(si0);
if(si0){
goto L28;
}
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+8U,sj1);
si0=l4;
f15024(i,si0);
goto L1;
L28:;
si0=0U;
si1=0U;
si2=1188524U;
f594(i,si0,si1,si2);
UNREACHABLE;
L24:;
si0=l0;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=8U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si0=!(si0);
if(si0){
goto L1;
}
si0=l4;
f15024(i,si0);
goto L1;
L22:;
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l1;
sj1=i64_load(&i->m0,(U64)si1+8U);
sj2=l6;
sj1=DIV_U(sj1,sj2);
i64_store(&i->m0,(U64)si0+8U,sj1);
goto L1;
L13:;
si0=l3;
si1=20U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=1U;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l3;
si1=1186656U;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l3;
si1=1186288U;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l3;
si1=8U;
si0+=si1;
si1=1186804U;
f614(i,si0,si1);
UNREACHABLE;
L12:;
si0=l4;
if(si0){
goto L30;
}
si0=l1;
sj0=i64_load(&i->m0,(U64)si0+8U);
l6=sj0;
si0=0U;
l1=si0;
goto L29;
L30:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
l7=si0;
si0=8U;
l2=si0;
si0=0U;
l4=si0;
si0=l1;
si1=12U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si0=!(si0);
if(si0){
goto L31;
}
si0=l1;
si1=268435455U;
si0=si0 > si1;
if(si0){
goto L4;
}
si0=l1;
si1=3U;
si0<<=(si1&31);
l5=si0;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L4;
}
si0=l5;
si0=!(si0);
if(si0){
goto L31;
}
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=l5;
si0=f15022(i,si0);
l2=si0;
si0=!(si0);
if(si0){
goto L3;
}
si0=l5;
l4=si0;
L31:;
si0=l2;
si1=l7;
si2=l4;
si0=f15143(i,si0,si1,si2);
si0=l1;
sj0=(U64)(si0);
l6=sj0;
sj1=32ULL;
sj0<<=(sj1&63);
sj1=l6;
sj0|=sj1;
l6=sj0;
si0=1U;
l1=si0;
L29:;
si0=l0;
sj1=l6;
i64_store(&i->m0,(U64)si0+8U,sj1);
si0=l0;
si1=l2;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l1;
i32_store(&i->m0,(U64)si0,si1);
goto L1;
L11:;
si0=l0;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=8U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
goto L1;
L10:;
si0=l5;
si1=l1;
si0=si0 < si1;
if(si0){
goto L32;
}
si0=l3;
si1=l1;
i32_store(&i->m0,(U64)si0+16U,si1);
L32:;
si0=l0;
si1=l3;
sj1=i64_load(&i->m0,(U64)si1+8U);
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l0;
si1=1U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=12U;
si0+=si1;
si1=l3;
si2=16U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
goto L1;
L9:;
si0=l5;
si0=!(si0);
if(si0){
goto L33;
}
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+8U,sj1);
goto L7;
L33:;
si0=0U;
si1=0U;
si2=1188524U;
f594(i,si0,si1,si2);
UNREACHABLE;
L8:;
si0=l0;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=8U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
L7:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+12U);
si0=!(si0);
if(si0){
goto L1;
}
si0=l4;
f15024(i,si0);
goto L1;
L6:;
si0=l0;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=8U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
goto L1;
L5:;
si0=8U;
si1=l1;
f52(i,si0,si1);
UNREACHABLE;
L4:;
f53(i);
UNREACHABLE;
L3:;
si0=8U;
si1=l5;
f52(i,si0,si1);
UNREACHABLE;
L2:;
si0=l0;
si1=8U;
si0+=si1;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+1186632U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+1186624U);
i64_store(&i->m0,(U64)si0,sj1);
L1:;
si0=l3;
si1=32U;
si0+=si1;
i->g0=si0;
L0:;
}

void f935(rustpythonInstance*i,U32 l0,U32 l1) {
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
U64 l12=0;
U32 si0,si1,si2,si3,si4,si5;
U64 sj0,sj1,sj2;
si0=i->g0;
si1=32U;
si0-=si1;
l2=si0;
i->g0=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si1=l1;
si1=i32_load(&i->m0,(U64)si1);
l4=si1;
si0=si0 == si1;
if(si0){
goto L10;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
l5=si0;
goto L9;
L10:;
si0=l3;
si0=!(si0);
if(si0){
goto L11;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
l5=si0;
si0=l0;
si1=12U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si1=l1;
si2=12U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
si0=si0 != si1;
if(si0){
goto L9;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+4U);
l7=si0;
si1=l5;
si2=l6;
si3=3U;
si2<<=(si3&31);
si0=f15142(i,si0,si1,si2);
if(si0){
goto L9;
}
si0=l0;
si1=8U;
si0+=si1;
l3=si0;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L12;
}
si0=l7;
f15024(i,si0);
L12:;
si0=l3;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+1186632U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+1186624U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L1;
}
si0=l5;
f15024(i,si0);
goto L1;
L11:;
si0=l0;
sj0=i64_load(&i->m0,(U64)si0+8U);
si1=l1;
sj1=i64_load(&i->m0,(U64)si1+8U);
l8=sj1;
si0=sj0 != sj1;
if(si0){
goto L8;
}
si0=l0;
si1=8U;
si0+=si1;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+1186632U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+1186624U);
i64_store(&i->m0,(U64)si0,sj1);
goto L1;
L9:;
si0=l1;
sj0=i64_load(&i->m0,(U64)si0+8U);
l8=sj0;
si0=l4;
if(si0){
goto L7;
}
L8:;
sj0=l8;
sj1=1ULL;
si0=sj0 > sj1;
if(si0){
goto L6;
}
sj0=l8;
si0=(U32)(sj0);
switch(si0){
case 0:
goto L13;
case 1:
goto L1;
default:
goto L13;
}
L13:;
si0=l2;
si1=20U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=1U;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l2;
si1=1186656U;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l2;
si1=1186288U;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l2;
si1=8U;
si0+=si1;
si1=1186820U;
f614(i,si0,si1);
UNREACHABLE;
L7:;
si0=l3;
si0=!(si0);
if(si0){
goto L3;
}
si0=l0;
si1=12U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
sj1=l8;
sj2=32ULL;
sj1>>=(sj2&63);
si1=(U32)(sj1);
l3=si1;
si0=si0 < si1;
if(si0){
goto L14;
}
si0=8U;
l4=si0;
si0=l1;
si1=l3;
si0-=si1;
l9=si0;
si1=1U;
si0+=si1;
l6=si0;
si0=!(si0);
if(si0){
goto L15;
}
si0=l6;
si1=268435455U;
si0=si0 > si1;
if(si0){
goto L5;
}
si0=l6;
si1=3U;
si0<<=(si1&31);
l7=si0;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L5;
}
si0=8U;
l4=si0;
si0=l7;
si0=!(si0);
if(si0){
goto L15;
}
si0=l7;
si1=1U;
si0=f15026(i,si0,si1);
l4=si0;
si0=!(si0);
if(si0){
goto L4;
}
L15:;
si0=l4;
si1=l6;
si2=l0;
si2=i32_load(&i->m0,(U64)si2+4U);
l10=si2;
si3=l1;
si4=l5;
si5=l3;
f1101(i,si0,si1,si2,si3,si4,si5);
si0=l0;
si1=l6;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l0;
si1=l4;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=8U;
si0+=si1;
l7=si0;
si0=i32_load(&i->m0,(U64)si0);
l11=si0;
si0=l7;
si1=l6;
i32_store(&i->m0,(U64)si0,si1);
si0=l6;
if(si0){
goto L18;
}
sj0=0ULL;
l12=sj0;
goto L17;
L18:;
si0=l1;
si1=3U;
si0<<=(si1&31);
si1=l3;
si2=3U;
si1<<=(si2&31);
si0-=si1;
l1=si0;
si0=l9;
si1=1U;
si0+=si1;
l7=si0;
si0=0U;
l3=si0;
L22:;
{
si0=l4;
si1=l1;
si0+=si1;
sj0=i64_load(&i->m0,(U64)si0);
sj1=0ULL;
si0=sj0 != sj1;
if(si0){
goto L21;
}
si0=l3;
si1=-1U;
si0+=si1;
l3=si0;
si0=l1;
si1=-8U;
si0+=si1;
l1=si0;
si1=-8U;
si0=si0 != si1;
if(si0){
goto L22;
}
goto L20;
}
L21:;
si0=l6;
l1=si0;
si0=l3;
si0=!(si0);
if(si0){
goto L19;
}
si0=0U;
si1=l3;
si0-=si1;
l7=si0;
L20:;
si0=l6;
l1=si0;
si0=l6;
si1=l7;
si0=si0 < si1;
if(si0){
goto L19;
}
si0=l0;
si1=l6;
si2=l7;
si1-=si2;
l1=si1;
i32_store(&i->m0,(U64)si0+12U,si1);
L19:;
sj0=0ULL;
l12=sj0;
si0=l1;
switch(si0){
case 0:
goto L23;
case 1:
goto L24;
default:
goto L16;
}
L24:;
si0=l4;
sj0=i64_load(&i->m0,(U64)si0);
l12=sj0;
L23:;
si0=l6;
si0=!(si0);
if(si0){
goto L17;
}
si0=l4;
f15024(i,si0);
L17:;
si0=l0;
sj1=l12;
i64_store(&i->m0,(U64)si0+8U,sj1);
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
L16:;
si0=l11;
si0=!(si0);
if(si0){
goto L2;
}
si0=l10;
f15024(i,si0);
goto L2;
L14:;
si0=l0;
si1=8U;
si0+=si1;
l1=si0;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L25;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+4U);
f15024(i,si0);
L25:;
si0=l0;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
goto L2;
L6:;
si0=l0;
sj1=l8;
f933(i,si0,sj1);
goto L1;
L5:;
f53(i);
UNREACHABLE;
L4:;
si0=8U;
si1=l7;
f52(i,si0,si1);
UNREACHABLE;
L3:;
si0=l0;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=8U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
L2:;
sj0=l8;
si0=(U32)(sj0);
si0=!(si0);
if(si0){
goto L1;
}
si0=l5;
f15024(i,si0);
L1:;
si0=l2;
si1=32U;
si0+=si1;
i->g0=si0;
L0:;
}

void f936(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U64 l7=0;
U32 l8=0;
U32 l9=0;
U32 l10=0;
U32 l11=0;
U32 si0,si1,si2,si3,si4,si5;
U64 sj0,sj1;
si0=i->g0;
si1=32U;
si0-=si1;
l2=si0;
i->g0=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si1=l1;
si1=i32_load(&i->m0,(U64)si1);
l4=si1;
si0=si0 != si1;
if(si0){
goto L14;
}
si0=l3;
si0=!(si0);
if(si0){
goto L13;
}
si0=l0;
si1=12U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
si1=l1;
si2=12U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
l5=si1;
si0=si0 != si1;
if(si0){
goto L10;
}
si0=l4;
l5=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+4U);
l6=si0;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+4U);
si2=l4;
si3=3U;
si2<<=(si3&31);
si0=f15142(i,si0,si1,si2);
if(si0){
goto L9;
}
si0=l0;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L2;
}
si0=l6;
f15024(i,si0);
goto L2;
L14:;
si0=l4;
if(si0){
goto L11;
}
si0=l1;
sj0=i64_load(&i->m0,(U64)si0+8U);
l7=sj0;
goto L12;
L13:;
si0=l0;
sj0=i64_load(&i->m0,(U64)si0+8U);
si1=l1;
sj1=i64_load(&i->m0,(U64)si1+8U);
l7=sj1;
si0=sj0 == sj1;
if(si0){
goto L2;
}
L12:;
sj0=l7;
sj1=1ULL;
si0=sj0 > sj1;
if(si0){
goto L7;
}
sj0=l7;
si0=(U32)(sj0);
switch(si0){
case 0:
goto L8;
case 1:
goto L1;
default:
goto L8;
}
L11:;
si0=l3;
si0=!(si0);
if(si0){
goto L6;
}
si0=l1;
si1=12U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si0=l0;
si1=12U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
L10:;
si0=l4;
si1=l5;
si0=si0 < si1;
if(si0){
goto L3;
}
L9:;
si0=8U;
l6=si0;
si0=l4;
si1=l5;
si0-=si1;
l8=si0;
si1=1U;
si0+=si1;
l9=si0;
si0=!(si0);
if(si0){
goto L4;
}
si0=l9;
si1=268435455U;
si0=si0 > si1;
if(si0){
goto L5;
}
si0=l9;
si1=3U;
si0<<=(si1&31);
l10=si0;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L5;
}
si0=8U;
l6=si0;
si0=l10;
si0=!(si0);
if(si0){
goto L4;
}
si0=l10;
si1=1U;
si0=f15026(i,si0,si1);
l6=si0;
if(si0){
goto L4;
}
si0=8U;
si1=l10;
f52(i,si0,si1);
UNREACHABLE;
L8:;
si0=l2;
si1=20U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=1U;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l2;
si1=1186656U;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l2;
si1=1186288U;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l2;
si1=8U;
si0+=si1;
si1=1186836U;
f614(i,si0,si1);
UNREACHABLE;
L7:;
si0=l0;
sj1=l7;
f933(i,si0,sj1);
goto L1;
L6:;
si0=l0;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=8U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
goto L1;
L5:;
f53(i);
UNREACHABLE;
L4:;
si0=l6;
si1=l9;
si2=l0;
si2=i32_load(&i->m0,(U64)si2+4U);
l11=si2;
si3=l4;
si4=l1;
si4=i32_load(&i->m0,(U64)si4+4U);
si5=l5;
f1102(i,si0,si1,si2,si3,si4,si5);
si0=l0;
si1=l9;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l0;
si1=l6;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=8U;
si0+=si1;
l1=si0;
si0=i32_load(&i->m0,(U64)si0);
l10=si0;
si0=l1;
si1=l9;
i32_store(&i->m0,(U64)si0,si1);
si0=l9;
if(si0){
goto L17;
}
sj0=0ULL;
l7=sj0;
goto L16;
L17:;
si0=l4;
si1=3U;
si0<<=(si1&31);
si1=l5;
si2=3U;
si1<<=(si2&31);
si0-=si1;
l1=si0;
si0=l8;
si1=1U;
si0+=si1;
l5=si0;
si0=0U;
l4=si0;
L21:;
{
si0=l6;
si1=l1;
si0+=si1;
sj0=i64_load(&i->m0,(U64)si0);
sj1=0ULL;
si0=sj0 != sj1;
if(si0){
goto L20;
}
si0=l4;
si1=-1U;
si0+=si1;
l4=si0;
si0=l1;
si1=-8U;
si0+=si1;
l1=si0;
si1=-8U;
si0=si0 != si1;
if(si0){
goto L21;
}
goto L19;
}
L20:;
si0=l9;
l1=si0;
si0=l4;
si0=!(si0);
if(si0){
goto L18;
}
si0=0U;
si1=l4;
si0-=si1;
l5=si0;
L19:;
si0=l9;
l1=si0;
si0=l9;
si1=l5;
si0=si0 < si1;
if(si0){
goto L22;
}
si0=l0;
si1=l9;
si2=l5;
si1-=si2;
l1=si1;
i32_store(&i->m0,(U64)si0+12U,si1);
L22:;
si0=l3;
si0=!(si0);
if(si0){
goto L15;
}
L18:;
sj0=0ULL;
l7=sj0;
si0=l1;
switch(si0){
case 0:
goto L23;
case 1:
goto L24;
default:
goto L15;
}
L24:;
si0=l6;
sj0=i64_load(&i->m0,(U64)si0);
l7=sj0;
L23:;
si0=l9;
si0=!(si0);
if(si0){
goto L16;
}
si0=l6;
f15024(i,si0);
L16:;
si0=l0;
sj1=l7;
i64_store(&i->m0,(U64)si0+8U,sj1);
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
L15:;
si0=l10;
si0=!(si0);
if(si0){
goto L1;
}
si0=l11;
f15024(i,si0);
goto L1;
L3:;
si0=l0;
si1=8U;
si0+=si1;
l1=si0;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L25;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+4U);
f15024(i,si0);
L25:;
si0=l0;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
goto L1;
L2:;
si0=l0;
si1=8U;
si0+=si1;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+1186632U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+1186624U);
i64_store(&i->m0,(U64)si0,sj1);
L1:;
si0=l2;
si1=32U;
si0+=si1;
i->g0=si0;
L0:;
}

void f937(rustpythonInstance*i,U32 l0,U32 l1,U64 l2) {
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 si0,si1,si2,si3;
U64 sj0,sj1,sj2,sj3;
si0=i->g0;
si1=32U;
si0-=si1;
l3=si0;
i->g0=si0;
sj0=l2;
sj1=1ULL;
si0=sj0 > sj1;
if(si0){
goto L4;
}
sj0=l2;
si0=(U32)(sj0);
switch(si0){
case 0:
goto L6;
case 1:
goto L5;
default:
goto L6;
}
L6:;
si0=l3;
si1=20U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=1U;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l3;
si1=1186656U;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l3;
si1=1186288U;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l3;
si1=8U;
si0+=si1;
si1=1186980U;
f614(i,si0,si1);
UNREACHABLE;
L5:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L8;
}
si0=l1;
sj0=i64_load(&i->m0,(U64)si0+8U);
l2=sj0;
si0=0U;
l1=si0;
goto L7;
L8:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
l4=si0;
si0=8U;
l5=si0;
si0=0U;
l6=si0;
si0=l1;
si1=12U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si0=!(si0);
if(si0){
goto L9;
}
si0=l1;
si1=268435455U;
si0=si0 > si1;
if(si0){
goto L3;
}
si0=l1;
si1=3U;
si0<<=(si1&31);
l7=si0;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L3;
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
l5=si0;
si0=!(si0);
if(si0){
goto L2;
}
si0=l7;
l6=si0;
L9:;
si0=l5;
si1=l4;
si2=l6;
si0=f15143(i,si0,si1,si2);
si0=l1;
sj0=(U64)(si0);
l2=sj0;
sj1=32ULL;
sj0<<=(sj1&63);
sj1=l2;
sj0|=sj1;
l2=sj0;
si0=1U;
l1=si0;
L7:;
si0=l0;
sj1=l2;
i64_store(&i->m0,(U64)si0+8U,sj1);
si0=l0;
si1=l5;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l1;
i32_store(&i->m0,(U64)si0,si1);
goto L1;
L4:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L10;
}
si0=l3;
si1=8U;
si0+=si1;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+4U);
si2=l1;
si3=12U;
si2+=si3;
si2=i32_load(&i->m0,(U64)si2);
sj3=l2;
f1234(i,si0,si1,si2,sj3);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+16U);
l7=si0;
si1=3U;
si0<<=(si1&31);
l1=si0;
si0=-1U;
l5=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+8U);
l6=si0;
L13:;
{
si0=l1;
si0=!(si0);
if(si0){
goto L12;
}
si0=l5;
si1=1U;
si0+=si1;
l5=si0;
si0=l1;
si1=-8U;
si0+=si1;
l1=si0;
si1=l6;
si0+=si1;
sj0=i64_load(&i->m0,(U64)si0);
si0=!(sj0);
if(si0){
goto L13;
}
}
si0=l7;
si1=l5;
si0-=si1;
l1=si0;
switch(si0){
case 0:
goto L12;
case 1:
goto L14;
default:
goto L15;
}
L15:;
si0=l7;
si1=l1;
si0=si0 < si1;
if(si0){
goto L16;
}
si0=l3;
si1=l1;
i32_store(&i->m0,(U64)si0+16U,si1);
L16:;
si0=l0;
si1=l3;
sj1=i64_load(&i->m0,(U64)si1+8U);
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l0;
si1=1U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=12U;
si0+=si1;
si1=l3;
si2=16U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
goto L1;
L14:;
si0=l7;
si0=!(si0);
if(si0){
goto L17;
}
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l6;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+8U,sj1);
goto L11;
L17:;
si0=0U;
si1=0U;
si2=1188524U;
f594(i,si0,si1,si2);
UNREACHABLE;
L12:;
si0=l0;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=8U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
L11:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+12U);
si0=!(si0);
if(si0){
goto L1;
}
si0=l6;
f15024(i,si0);
goto L1;
L10:;
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l1;
sj1=i64_load(&i->m0,(U64)si1+8U);
sj2=l2;
sj1=DIV_U(sj1,sj2);
i64_store(&i->m0,(U64)si0+8U,sj1);
goto L1;
L3:;
f53(i);
UNREACHABLE;
L2:;
si0=8U;
si1=l7;
f52(i,si0,si1);
UNREACHABLE;
L1:;
si0=l3;
si1=32U;
si0+=si1;
i->g0=si0;
L0:;
}

void f938(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U64 l8=0;
U32 l9=0;
U32 l10=0;
U32 si0,si1,si2,si3,si4,si5;
U64 sj0,sj1,sj2;
si0=i->g0;
si1=32U;
si0-=si1;
l3=si0;
i->g0=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
si1=l2;
si1=i32_load(&i->m0,(U64)si1);
l5=si1;
si0=si0 != si1;
if(si0){
goto L2;
}
si0=l4;
si0=!(si0);
if(si0){
goto L4;
}
si0=l1;
si1=12U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si1=l2;
si2=12U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
si0=si0 != si1;
if(si0){
goto L2;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
si1=l2;
si1=i32_load(&i->m0,(U64)si1+4U);
l7=si1;
si2=l6;
si3=3U;
si2<<=(si3&31);
si0=f15142(i,si0,si1,si2);
si0=!(si0);
if(si0){
goto L3;
}
goto L2;
L4:;
si0=l1;
sj0=i64_load(&i->m0,(U64)si0+8U);
si1=l2;
sj1=i64_load(&i->m0,(U64)si1+8U);
si0=sj0 != sj1;
if(si0){
goto L2;
}
si0=l0;
si1=8U;
si0+=si1;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+1186632U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+1186624U);
i64_store(&i->m0,(U64)si0,sj1);
goto L1;
L3:;
si0=l0;
si1=8U;
si0+=si1;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+1186632U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+1186624U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L1;
}
si0=l7;
f15024(i,si0);
goto L1;
L2:;
si0=l5;
if(si0){
goto L15;
}
si0=l2;
sj0=i64_load(&i->m0,(U64)si0+8U);
l8=sj0;
sj1=1ULL;
si0=sj0 > sj1;
if(si0){
goto L14;
}
sj0=l8;
si0=(U32)(sj0);
switch(si0){
case 0:
goto L13;
case 1:
goto L12;
default:
goto L13;
}
L15:;
si0=l1;
sj0=i64_load(&i->m0,(U64)si0+8U);
l8=sj0;
si0=l4;
if(si0){
goto L11;
}
sj0=l8;
si0=!(sj0);
si0=!(si0);
if(si0){
goto L11;
}
si0=l0;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=8U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
goto L5;
L14:;
si0=l4;
if(si0){
goto L10;
}
si0=l1;
sj0=i64_load(&i->m0,(U64)si0+8U);
sj1=0ULL;
si0=sj0 != sj1;
if(si0){
goto L10;
}
si0=l0;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=8U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
goto L1;
L13:;
si0=l3;
si1=20U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=1U;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l3;
si1=1186656U;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l3;
si1=1186288U;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l3;
si1=8U;
si0+=si1;
si1=1186996U;
f614(i,si0,si1);
UNREACHABLE;
L12:;
si0=l4;
if(si0){
goto L17;
}
si0=l1;
sj0=i64_load(&i->m0,(U64)si0+8U);
l8=sj0;
si0=0U;
l1=si0;
goto L16;
L17:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
l2=si0;
si0=8U;
l4=si0;
si0=0U;
l5=si0;
si0=l1;
si1=12U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si0=!(si0);
if(si0){
goto L18;
}
si0=l1;
si1=268435455U;
si0=si0 > si1;
if(si0){
goto L7;
}
si0=l1;
si1=3U;
si0<<=(si1&31);
l6=si0;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L7;
}
si0=l6;
si0=!(si0);
if(si0){
goto L18;
}
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=l6;
si0=f15022(i,si0);
l4=si0;
si0=!(si0);
if(si0){
goto L9;
}
si0=l6;
l5=si0;
L18:;
si0=l4;
si1=l2;
si2=l5;
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
L16:;
si0=l0;
sj1=l8;
i64_store(&i->m0,(U64)si0+8U,sj1);
si0=l0;
si1=l4;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l1;
i32_store(&i->m0,(U64)si0,si1);
goto L1;
L11:;
si0=l4;
si0=!(si0);
if(si0){
goto L8;
}
sj0=l8;
sj1=32ULL;
sj0>>=(sj1&63);
si0=(U32)(sj0);
l4=si0;
si1=l2;
si2=12U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
l5=si1;
si0=si0 < si1;
if(si0){
goto L19;
}
si0=8U;
l6=si0;
si0=l4;
si1=l5;
si0-=si1;
l9=si0;
si1=1U;
si0+=si1;
l7=si0;
si0=!(si0);
if(si0){
goto L20;
}
si0=l7;
si1=268435455U;
si0=si0 > si1;
if(si0){
goto L7;
}
si0=l7;
si1=3U;
si0<<=(si1&31);
l10=si0;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L7;
}
si0=l10;
si0=!(si0);
if(si0){
goto L20;
}
si0=l10;
si1=1U;
si0=f15026(i,si0,si1);
l6=si0;
si0=!(si0);
if(si0){
goto L6;
}
L20:;
si0=l6;
si1=l7;
si2=l1;
si2=i32_load(&i->m0,(U64)si2+4U);
si3=l4;
si4=l2;
si4=i32_load(&i->m0,(U64)si4+4U);
si5=l5;
f1243(i,si0,si1,si2,si3,si4,si5);
si0=l4;
si1=3U;
si0<<=(si1&31);
si1=l5;
si2=3U;
si1<<=(si2&31);
si0-=si1;
l1=si0;
si0=l9;
si1=2U;
si0+=si1;
l4=si0;
L22:;
{
si0=l1;
si1=-8U;
si0=si0 == si1;
if(si0){
goto L21;
}
si0=l4;
si1=-1U;
si0+=si1;
l4=si0;
si0=l6;
si1=l1;
si0+=si1;
l5=si0;
si0=l1;
si1=-8U;
si0+=si1;
l1=si0;
si0=l5;
sj0=i64_load(&i->m0,(U64)si0);
si0=!(sj0);
if(si0){
goto L22;
}
}
si0=l4;
switch(si0){
case 0:
goto L21;
case 1:
goto L23;
default:
goto L24;
}
L24:;
si0=l0;
si1=l7;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l0;
si1=l6;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=1U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l7;
si2=l4;
si3=l7;
si4=l4;
si3=si3 < si4;
si1=si3?si1:si2;
i32_store(&i->m0,(U64)si0+12U,si1);
goto L5;
L23:;
si0=l7;
si0=!(si0);
if(si0){
goto L25;
}
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l6;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+8U,sj1);
si0=l6;
f15024(i,si0);
goto L5;
L25:;
si0=0U;
si1=0U;
si2=1188524U;
f594(i,si0,si1,si2);
UNREACHABLE;
L21:;
si0=l0;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=8U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l7;
si0=!(si0);
if(si0){
goto L5;
}
si0=l6;
f15024(i,si0);
goto L5;
L19:;
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
si1=1187032U;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l3;
si1=1186288U;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l3;
si1=8U;
si0+=si1;
si1=1187056U;
f614(i,si0,si1);
UNREACHABLE;
L10:;
si0=l0;
si1=l1;
sj2=l8;
f937(i,si0,si1,sj2);
goto L1;
L9:;
si0=8U;
si1=l6;
f52(i,si0,si1);
UNREACHABLE;
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
si1=1187032U;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l3;
si1=1186288U;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l3;
si1=8U;
si0+=si1;
si1=1187040U;
f614(i,si0,si1);
UNREACHABLE;
L7:;
f53(i);
UNREACHABLE;
L6:;
si0=8U;
si1=l10;
f52(i,si0,si1);
UNREACHABLE;
L5:;
si0=l2;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L1;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0+4U);
f15024(i,si0);
L1:;
si0=l3;
si1=32U;
si0+=si1;
i->g0=si0;
L0:;
}

void f939(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U64 l7=0;
U32 l8=0;
U32 l9=0;
U32 l10=0;
U32 si0,si1,si2,si3,si4,si5;
U64 sj0,sj1,sj2;
si0=i->g0;
si1=32U;
si0-=si1;
l3=si0;
i->g0=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
si1=l2;
si1=i32_load(&i->m0,(U64)si1);
l5=si1;
si0=si0 != si1;
if(si0){
goto L3;
}
si0=l4;
si0=!(si0);
if(si0){
goto L4;
}
si0=l1;
si1=12U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si1=l2;
si2=12U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
si0=si0 != si1;
if(si0){
goto L3;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
si1=l2;
si1=i32_load(&i->m0,(U64)si1+4U);
si2=l6;
si3=3U;
si2<<=(si3&31);
si0=f15142(i,si0,si1,si2);
if(si0){
goto L3;
}
goto L2;
L4:;
si0=l1;
sj0=i64_load(&i->m0,(U64)si0+8U);
si1=l2;
sj1=i64_load(&i->m0,(U64)si1+8U);
si0=sj0 == sj1;
if(si0){
goto L2;
}
L3:;
si0=l5;
if(si0){
goto L13;
}
si0=l2;
sj0=i64_load(&i->m0,(U64)si0+8U);
l7=sj0;
sj1=1ULL;
si0=sj0 > sj1;
if(si0){
goto L14;
}
sj0=l7;
si0=(U32)(sj0);
switch(si0){
case 0:
goto L11;
case 1:
goto L10;
default:
goto L11;
}
L14:;
si0=l4;
if(si0){
goto L15;
}
si0=l1;
sj0=i64_load(&i->m0,(U64)si0+8U);
si0=!(sj0);
if(si0){
goto L12;
}
L15:;
si0=l0;
si1=l1;
sj2=l7;
f937(i,si0,si1,sj2);
goto L1;
L13:;
si0=l1;
sj0=i64_load(&i->m0,(U64)si0+8U);
l7=sj0;
si0=l4;
if(si0){
goto L9;
}
sj0=l7;
si0=!(sj0);
si0=!(si0);
if(si0){
goto L9;
}
L12:;
si0=l0;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=8U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
goto L1;
L11:;
si0=l3;
si1=20U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=1U;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l3;
si1=1186656U;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l3;
si1=1186288U;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l3;
si1=8U;
si0+=si1;
si1=1187072U;
f614(i,si0,si1);
UNREACHABLE;
L10:;
si0=l4;
if(si0){
goto L17;
}
si0=l1;
sj0=i64_load(&i->m0,(U64)si0+8U);
l7=sj0;
si0=0U;
l1=si0;
goto L16;
L17:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
l6=si0;
si0=8U;
l2=si0;
si0=0U;
l4=si0;
si0=l1;
si1=12U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si0=!(si0);
if(si0){
goto L18;
}
si0=l1;
si1=268435455U;
si0=si0 > si1;
if(si0){
goto L6;
}
si0=l1;
si1=3U;
si0<<=(si1&31);
l5=si0;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L6;
}
si0=l5;
si0=!(si0);
if(si0){
goto L18;
}
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=l5;
si0=f15022(i,si0);
l2=si0;
si0=!(si0);
if(si0){
goto L8;
}
si0=l5;
l4=si0;
L18:;
si0=l2;
si1=l6;
si2=l4;
si0=f15143(i,si0,si1,si2);
si0=l1;
sj0=(U64)(si0);
l7=sj0;
sj1=32ULL;
sj0<<=(sj1&63);
sj1=l7;
sj0|=sj1;
l7=sj0;
si0=1U;
l1=si0;
L16:;
si0=l0;
sj1=l7;
i64_store(&i->m0,(U64)si0+8U,sj1);
si0=l0;
si1=l2;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l1;
i32_store(&i->m0,(U64)si0,si1);
goto L1;
L9:;
si0=l4;
si0=!(si0);
if(si0){
goto L7;
}
sj0=l7;
sj1=32ULL;
sj0>>=(sj1&63);
si0=(U32)(sj0);
l4=si0;
si1=l2;
si2=12U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
l8=si1;
si0=si0 < si1;
if(si0){
goto L19;
}
si0=8U;
l5=si0;
si0=l4;
si1=l8;
si0-=si1;
l9=si0;
si1=1U;
si0+=si1;
l6=si0;
si0=!(si0);
if(si0){
goto L20;
}
si0=l6;
si1=268435455U;
si0=si0 > si1;
if(si0){
goto L6;
}
si0=l6;
si1=3U;
si0<<=(si1&31);
l10=si0;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L6;
}
si0=l10;
si0=!(si0);
if(si0){
goto L20;
}
si0=l10;
si1=1U;
si0=f15026(i,si0,si1);
l5=si0;
si0=!(si0);
if(si0){
goto L5;
}
L20:;
si0=l5;
si1=l6;
si2=l1;
si2=i32_load(&i->m0,(U64)si2+4U);
si3=l4;
si4=l2;
si4=i32_load(&i->m0,(U64)si4+4U);
si5=l8;
f1244(i,si0,si1,si2,si3,si4,si5);
si0=l4;
si1=3U;
si0<<=(si1&31);
si1=l8;
si2=3U;
si1<<=(si2&31);
si0-=si1;
l1=si0;
si0=l9;
si1=2U;
si0+=si1;
l2=si0;
L22:;
{
si0=l1;
si1=-8U;
si0=si0 == si1;
if(si0){
goto L21;
}
si0=l2;
si1=-1U;
si0+=si1;
l2=si0;
si0=l5;
si1=l1;
si0+=si1;
l4=si0;
si0=l1;
si1=-8U;
si0+=si1;
l1=si0;
si0=l4;
sj0=i64_load(&i->m0,(U64)si0);
si0=!(sj0);
if(si0){
goto L22;
}
}
si0=l2;
switch(si0){
case 0:
goto L21;
case 1:
goto L23;
default:
goto L24;
}
L24:;
si0=l0;
si1=l6;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l0;
si1=l5;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=1U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l6;
si2=l2;
si3=l6;
si4=l2;
si3=si3 < si4;
si1=si3?si1:si2;
i32_store(&i->m0,(U64)si0+12U,si1);
goto L1;
L23:;
si0=l6;
si0=!(si0);
if(si0){
goto L25;
}
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l5;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+8U,sj1);
si0=l5;
f15024(i,si0);
goto L1;
L25:;
si0=0U;
si1=0U;
si2=1188524U;
f594(i,si0,si1,si2);
UNREACHABLE;
L21:;
si0=l0;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=8U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l6;
si0=!(si0);
if(si0){
goto L1;
}
si0=l5;
f15024(i,si0);
goto L1;
L19:;
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
si1=1187032U;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l3;
si1=1186288U;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l3;
si1=8U;
si0+=si1;
si1=1187104U;
f614(i,si0,si1);
UNREACHABLE;
L8:;
si0=8U;
si1=l5;
f52(i,si0,si1);
UNREACHABLE;
L7:;
si0=l3;
si1=20U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=1U;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l3;
si1=1187032U;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l3;
si1=1186288U;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l3;
si1=8U;
si0+=si1;
si1=1187088U;
f614(i,si0,si1);
UNREACHABLE;
L6:;
f53(i);
UNREACHABLE;
L5:;
si0=8U;
si1=l10;
f52(i,si0,si1);
UNREACHABLE;
L2:;
si0=l0;
si1=8U;
si0+=si1;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+1186632U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+1186624U);
i64_store(&i->m0,(U64)si0,sj1);
L1:;
si0=l3;
si1=32U;
si0+=si1;
i->g0=si0;
L0:;
}

void f940(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U32 l4=0;
U32 l5=0;
U64 l6=0;
U32 l7=0;
U64 l8=0;
U64 l9=0;
U32 l10=0;
U32 si0,si1,si2,si3,si4;
U64 sj0,sj1,sj2,sj3,sj4;
si0=i->g0;
si1=32U;
si0-=si1;
l3=si0;
i->g0=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
si1=l2;
si1=i32_load(&i->m0,(U64)si1);
l5=si1;
si0=si0 != si1;
if(si0){
goto L18;
}
si0=l4;
si0=!(si0);
if(si0){
goto L17;
}
si0=l1;
si1=12U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
si1=l2;
si2=12U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
l5=si1;
si0=si0 != si1;
if(si0){
goto L14;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
si1=l2;
si1=i32_load(&i->m0,(U64)si1+4U);
si2=l4;
si3=3U;
si2<<=(si3&31);
si0=f15142(i,si0,si1,si2);
si0=!(si0);
if(si0){
goto L3;
}
si0=l1;
si1=4U;
si0+=si1;
l1=si0;
si0=l4;
l5=si0;
goto L2;
L18:;
si0=l5;
if(si0){
goto L15;
}
si0=l2;
sj0=i64_load(&i->m0,(U64)si0+8U);
l6=sj0;
goto L16;
L17:;
si0=l1;
sj0=i64_load(&i->m0,(U64)si0+8U);
si1=l2;
sj1=i64_load(&i->m0,(U64)si1+8U);
l6=sj1;
si0=sj0 == sj1;
if(si0){
goto L3;
}
L16:;
sj0=l6;
sj1=1ULL;
si0=sj0 > sj1;
if(si0){
goto L13;
}
sj0=l6;
si0=(U32)(sj0);
switch(si0){
case 0:
goto L12;
case 1:
goto L11;
default:
goto L12;
}
L15:;
si0=l4;
si0=!(si0);
if(si0){
goto L10;
}
si0=l2;
si1=12U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si0=l1;
si1=12U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
L14:;
si0=l1;
si1=4U;
si0+=si1;
l1=si0;
si0=l4;
si1=l5;
si0=si0 >= si1;
if(si0){
goto L2;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
si0=0U;
l1=si0;
si0=l4;
if(si0){
goto L9;
}
si0=8U;
l2=si0;
goto L8;
L13:;
si0=l4;
if(si0){
goto L20;
}
si0=l1;
sj0=i64_load(&i->m0,(U64)si0+8U);
l8=sj0;
sj1=l8;
sj2=l6;
sj1=DIV_U(sj1,sj2);
l8=sj1;
sj2=l6;
sj1*=sj2;
sj0-=sj1;
l6=sj0;
si0=0U;
l1=si0;
goto L19;
L20:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
l7=si0;
si0=8U;
l4=si0;
si0=l1;
si1=12U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si0=!(si0);
if(si0){
goto L21;
}
si0=l5;
si1=268435455U;
si0=si0 > si1;
if(si0){
goto L5;
}
si0=l5;
si1=3U;
si0<<=(si1&31);
l1=si0;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L5;
}
si0=l1;
si0=!(si0);
if(si0){
goto L21;
}
si0=l1;
si1=1U;
si0=f15026(i,si0,si1);
l4=si0;
si0=!(si0);
if(si0){
goto L7;
}
L21:;
si0=l5;
si1=1U;
si0+=si1;
l2=si0;
si0=l5;
si1=3U;
si0<<=(si1&31);
l1=si0;
si0=l5;
sj0=(U64)(si0);
l8=sj0;
si0=l4;
si1=l5;
si2=l7;
si3=l5;
sj4=l6;
sj0=f1173(i,si0,si1,si2,si3,sj4);
l6=sj0;
L25:;
{
si0=l1;
si0=!(si0);
if(si0){
goto L24;
}
si0=l2;
si1=-1U;
si0+=si1;
l2=si0;
si0=l1;
si1=-8U;
si0+=si1;
l1=si0;
si1=l4;
si0+=si1;
sj0=i64_load(&i->m0,(U64)si0);
si0=!(sj0);
if(si0){
goto L25;
}
}
si0=l2;
switch(si0){
case 0:
goto L24;
case 1:
goto L26;
default:
goto L27;
}
L27:;
si0=l5;
si1=l2;
si2=l5;
si3=l2;
si2=si2 < si3;
si0=si2?si0:si1;
sj0=(U64)(si0);
sj1=32ULL;
sj0<<=(sj1&63);
sj1=l8;
sj0|=sj1;
l8=sj0;
si0=1U;
l1=si0;
goto L19;
L26:;
si0=l5;
si0=!(si0);
if(si0){
goto L28;
}
si0=l4;
sj0=i64_load(&i->m0,(U64)si0);
l8=sj0;
goto L23;
L28:;
si0=0U;
si1=0U;
si2=1188524U;
f594(i,si0,si1,si2);
UNREACHABLE;
L24:;
sj0=0ULL;
l8=sj0;
si0=l5;
si0=!(si0);
if(si0){
goto L22;
}
L23:;
si0=l4;
f15024(i,si0);
L22:;
si0=0U;
l4=si0;
si0=0U;
l1=si0;
L19:;
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l0;
sj1=l8;
i64_store(&i->m0,(U64)si0+8U,sj1);
si0=l0;
si1=l4;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l1;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=24U;
si0+=si1;
sj1=l6;
i64_store(&i->m0,(U64)si0,sj1);
goto L1;
L12:;
si0=l3;
si1=20U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=1U;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l3;
si1=1186656U;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l3;
si1=1186288U;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l3;
si1=8U;
si0+=si1;
si1=1187248U;
f614(i,si0,si1);
UNREACHABLE;
L11:;
si0=l4;
if(si0){
goto L30;
}
si0=l1;
sj0=i64_load(&i->m0,(U64)si0+8U);
l6=sj0;
si0=0U;
l1=si0;
goto L29;
L30:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
l7=si0;
si0=8U;
l2=si0;
si0=0U;
l4=si0;
si0=l1;
si1=12U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si0=!(si0);
if(si0){
goto L31;
}
si0=l1;
si1=268435455U;
si0=si0 > si1;
if(si0){
goto L5;
}
si0=l1;
si1=3U;
si0<<=(si1&31);
l5=si0;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L5;
}
si0=l5;
si0=!(si0);
if(si0){
goto L31;
}
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=l5;
si0=f15022(i,si0);
l2=si0;
si0=!(si0);
if(si0){
goto L6;
}
si0=l5;
l4=si0;
L31:;
si0=l2;
si1=l7;
si2=l4;
si0=f15143(i,si0,si1,si2);
si0=l1;
sj0=(U64)(si0);
l6=sj0;
sj1=32ULL;
sj0<<=(sj1&63);
sj1=l6;
sj0|=sj1;
l6=sj0;
si0=1U;
l1=si0;
L29:;
si0=l0;
sj1=0ULL;
i64_store(&i->m0,(U64)si0+16U,sj1);
si0=l0;
sj1=l6;
i64_store(&i->m0,(U64)si0+8U,sj1);
si0=l0;
si1=l2;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l1;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=24U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
goto L1;
L10:;
si0=l0;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=8U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=16U;
si0+=si1;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=24U;
si0+=si1;
si1=l1;
sj1=i64_load(&i->m0,(U64)si1+8U);
i64_store(&i->m0,(U64)si0,sj1);
goto L1;
L9:;
si0=l4;
si1=268435455U;
si0=si0 > si1;
if(si0){
goto L5;
}
si0=l4;
si1=3U;
si0<<=(si1&31);
l5=si0;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L5;
}
si0=8U;
l2=si0;
si0=l5;
si0=!(si0);
if(si0){
goto L8;
}
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=l5;
si0=f15022(i,si0);
l2=si0;
si0=!(si0);
if(si0){
goto L4;
}
si0=l5;
l1=si0;
L8:;
si0=l2;
si1=l7;
si2=l1;
si0=f15143(i,si0,si1,si2);
l1=si0;
si0=l0;
si1=8U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=20U;
si0+=si1;
si1=l1;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=1U;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l0;
si1=24U;
si0+=si1;
si1=l4;
sj1=(U64)(si1);
l6=sj1;
sj2=32ULL;
sj1<<=(sj2&63);
sj2=l6;
sj1|=sj2;
i64_store(&i->m0,(U64)si0,sj1);
goto L1;
L7:;
si0=8U;
si1=l1;
f52(i,si0,si1);
UNREACHABLE;
L6:;
si0=8U;
si1=l5;
f52(i,si0,si1);
UNREACHABLE;
L5:;
f53(i);
UNREACHABLE;
L4:;
si0=8U;
si1=l5;
f52(i,si0,si1);
UNREACHABLE;
L3:;
si0=l0;
sj1=0ULL;
i64_store(&i->m0,(U64)si0+16U,sj1);
si0=l0;
si1=8U;
si0+=si1;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+1186632U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+1186624U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=24U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
goto L1;
L2:;
si0=l3;
si1=8U;
si0+=si1;
si1=l1;
si1=i32_load(&i->m0,(U64)si1);
si2=l4;
si3=l2;
si3=i32_load(&i->m0,(U64)si3+4U);
si4=l5;
f1183(i,si0,si1,si2,si3,si4);
si0=l3;
sj0=i64_load(&i->m0,(U64)si0+12U);
l8=sj0;
sj1=32ULL;
sj0>>=(sj1&63);
si0=(U32)(sj0);
l7=si0;
si1=1U;
si0+=si1;
l2=si0;
si0=l7;
si1=3U;
si0<<=(si1&31);
l1=si0;
si0=l3;
si1=24U;
si0+=si1;
sj0=i64_load(&i->m0,(U64)si0);
l9=sj0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+20U);
l5=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+8U);
l4=si0;
L36:;
{
sj0=0ULL;
l6=sj0;
si0=l1;
si0=!(si0);
if(si0){
goto L35;
}
si0=l2;
si1=-1U;
si0+=si1;
l2=si0;
si0=l1;
si1=-8U;
si0+=si1;
l1=si0;
si1=l4;
si0+=si1;
sj0=i64_load(&i->m0,(U64)si0);
si0=!(sj0);
if(si0){
goto L36;
}
}
si0=l2;
switch(si0){
case 0:
goto L35;
case 1:
goto L37;
default:
goto L38;
}
L38:;
sj0=l8;
si1=l2;
sj1=(U64)(si1);
sj2=32ULL;
sj1<<=(sj2&63);
sj2=l8;
sj3=4294967295ULL;
sj2&=sj3;
sj1|=sj2;
si2=l2;
si3=l7;
si2=si2 > si3;
sj0=si2?sj0:sj1;
l6=sj0;
si0=1U;
l10=si0;
goto L34;
L37:;
si0=l7;
si0=!(si0);
if(si0){
goto L33;
}
si0=l4;
sj0=i64_load(&i->m0,(U64)si0);
l6=sj0;
L35:;
si0=0U;
l10=si0;
sj0=l8;
si0=(U32)(sj0);
si0=!(si0);
if(si0){
goto L39;
}
si0=l4;
f15024(i,si0);
L39:;
si0=0U;
l4=si0;
L34:;
sj0=l9;
sj1=32ULL;
sj0>>=(sj1&63);
si0=(U32)(sj0);
l7=si0;
si1=1U;
si0+=si1;
l2=si0;
si0=l7;
si1=3U;
si0<<=(si1&31);
l1=si0;
L42:;
{
sj0=0ULL;
l8=sj0;
si0=l1;
si0=!(si0);
if(si0){
goto L41;
}
si0=l2;
si1=-1U;
si0+=si1;
l2=si0;
si0=l1;
si1=-8U;
si0+=si1;
l1=si0;
si1=l5;
si0+=si1;
sj0=i64_load(&i->m0,(U64)si0);
si0=!(sj0);
if(si0){
goto L42;
}
}
si0=l2;
switch(si0){
case 0:
goto L41;
case 1:
goto L43;
default:
goto L44;
}
L44:;
sj0=l9;
si1=l2;
sj1=(U64)(si1);
sj2=32ULL;
sj1<<=(sj2&63);
sj2=l9;
sj3=4294967295ULL;
sj2&=sj3;
sj1|=sj2;
si2=l2;
si3=l7;
si2=si2 > si3;
sj0=si2?sj0:sj1;
l8=sj0;
si0=1U;
l1=si0;
goto L40;
L43:;
si0=l7;
si0=!(si0);
if(si0){
goto L32;
}
si0=l5;
sj0=i64_load(&i->m0,(U64)si0);
l8=sj0;
L41:;
si0=0U;
l1=si0;
sj0=l9;
si0=(U32)(sj0);
si0=!(si0);
if(si0){
goto L45;
}
si0=l5;
f15024(i,si0);
L45:;
si0=0U;
l5=si0;
L40:;
si0=l0;
si1=l1;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l0;
sj1=l6;
i64_store(&i->m0,(U64)si0+8U,sj1);
si0=l0;
si1=l4;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l10;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=24U;
si0+=si1;
sj1=l8;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=20U;
si0+=si1;
si1=l5;
i32_store(&i->m0,(U64)si0,si1);
goto L1;
L33:;
si0=0U;
si1=0U;
si2=1188524U;
f594(i,si0,si1,si2);
UNREACHABLE;
L32:;
si0=0U;
si1=0U;
si2=1188524U;
f594(i,si0,si1,si2);
UNREACHABLE;
L1:;
si0=l3;
si1=32U;
si0+=si1;
i->g0=si0;
L0:;
}

void f941(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
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
U64 l15=0;
U64 l16=0;
U32 l17=0;
U32 si0,si1,si2,si3,si4;
U64 sj0,sj1,sj2;
si0=i->g0;
si1=32U;
si0-=si1;
l3=si0;
i->g0=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
si1=l2;
si1=i32_load(&i->m0,(U64)si1);
l5=si1;
si0=si0 != si1;
if(si0){
goto L18;
}
si0=l4;
si0=!(si0);
if(si0){
goto L17;
}
si0=l1;
si1=12U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si1=l2;
si2=12U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
l6=si1;
si0=si0 != si1;
if(si0){
goto L14;
}
si0=l5;
l6=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
l7=si0;
si1=l2;
si1=i32_load(&i->m0,(U64)si1+4U);
si2=l5;
si3=3U;
si2<<=(si3&31);
si0=f15142(i,si0,si1,si2);
if(si0){
goto L13;
}
si0=l1;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L2;
}
si0=l7;
f15024(i,si0);
goto L2;
L18:;
si0=l5;
if(si0){
goto L15;
}
si0=l2;
sj0=i64_load(&i->m0,(U64)si0+8U);
l8=sj0;
goto L16;
L17:;
si0=l1;
sj0=i64_load(&i->m0,(U64)si0+8U);
si1=l2;
sj1=i64_load(&i->m0,(U64)si1+8U);
l8=sj1;
si0=sj0 == sj1;
if(si0){
goto L2;
}
L16:;
sj0=l8;
sj1=1ULL;
si0=sj0 > sj1;
if(si0){
goto L12;
}
sj0=l8;
si0=(U32)(sj0);
switch(si0){
case 0:
goto L11;
case 1:
goto L10;
default:
goto L11;
}
L15:;
si0=l4;
si0=!(si0);
if(si0){
goto L9;
}
si0=l2;
si1=12U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si0=l1;
si1=12U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
L14:;
si0=l5;
si1=l6;
si0=si0 < si1;
if(si0){
goto L7;
}
L13:;
si0=l3;
si1=8U;
si0+=si1;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+4U);
l9=si1;
si2=l5;
si3=l2;
si3=i32_load(&i->m0,(U64)si3+4U);
si4=l6;
f1183(i,si0,si1,si2,si3,si4);
si0=l3;
si1=28U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l10=si0;
si0=l3;
si1=24U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l11=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+20U);
l6=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+12U);
l12=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+8U);
l7=si0;
si0=l1;
si1=12U;
si0+=si1;
si1=l3;
si1=i32_load(&i->m0,(U64)si1+16U);
l13=si1;
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
si1=l7;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l1;
si1=8U;
si0+=si1;
l2=si0;
si0=i32_load(&i->m0,(U64)si0);
l14=si0;
si0=l2;
si1=l12;
i32_store(&i->m0,(U64)si0,si1);
si0=l13;
if(si0){
goto L8;
}
sj0=0ULL;
l8=sj0;
goto L4;
L12:;
si0=l4;
if(si0){
goto L19;
}
si0=l1;
si1=l1;
sj1=i64_load(&i->m0,(U64)si1+8U);
l15=sj1;
sj2=l8;
sj1=DIV_U(sj1,sj2);
l16=sj1;
i64_store(&i->m0,(U64)si0+8U,sj1);
sj0=l15;
sj1=l16;
sj2=l8;
sj1*=sj2;
sj0-=sj1;
l8=sj0;
goto L5;
L19:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
l6=si0;
si1=l1;
si2=12U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
l7=si1;
sj2=l8;
sj0=f1174(i,si0,si1,sj2);
l8=sj0;
si0=l7;
if(si0){
goto L20;
}
sj0=0ULL;
l15=sj0;
goto L6;
L20:;
si0=l7;
si1=3U;
si0<<=(si1&31);
l2=si0;
si0=l7;
si1=-1U;
si0+=si1;
si1=536870911U;
si0&=si1;
si1=1U;
si0+=si1;
l4=si0;
si0=0U;
l5=si0;
L24:;
{
si0=l6;
si1=l2;
si0+=si1;
si1=-8U;
si0+=si1;
sj0=i64_load(&i->m0,(U64)si0);
sj1=0ULL;
si0=sj0 != sj1;
if(si0){
goto L23;
}
si0=l5;
si1=1U;
si0+=si1;
l5=si0;
si0=l2;
si1=-8U;
si0+=si1;
l2=si0;
if(si0){
goto L24;
}
}
si0=l4;
l5=si0;
goto L22;
L23:;
si0=l5;
si0=!(si0);
if(si0){
goto L21;
}
L22:;
si0=l7;
si1=l5;
si0=si0 < si1;
if(si0){
goto L21;
}
si0=l1;
si1=l7;
si2=l5;
si1-=si2;
l7=si1;
i32_store(&i->m0,(U64)si0+12U,si1);
L21:;
sj0=0ULL;
l15=sj0;
si0=l7;
switch(si0){
case 0:
goto L6;
case 1:
goto L25;
default:
goto L5;
}
L25:;
si0=l6;
sj0=i64_load(&i->m0,(U64)si0);
l15=sj0;
goto L6;
L11:;
si0=l3;
si1=20U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=1U;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l3;
si1=1186656U;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l3;
si1=1186288U;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l3;
si1=8U;
si0+=si1;
si1=1187264U;
f614(i,si0,si1);
UNREACHABLE;
L10:;
si0=l0;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=8U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
goto L1;
L9:;
si0=l0;
si1=l1;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=8U;
si0+=si1;
si1=l1;
si2=8U;
si1+=si2;
l2=si1;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
goto L1;
L8:;
si0=l13;
si1=3U;
si0<<=(si1&31);
l2=si0;
si0=l13;
si1=-1U;
si0+=si1;
si1=536870911U;
si0&=si1;
si1=1U;
si0+=si1;
l17=si0;
si0=0U;
l5=si0;
L29:;
{
si0=l7;
si1=l2;
si0+=si1;
si1=-8U;
si0+=si1;
sj0=i64_load(&i->m0,(U64)si0);
sj1=0ULL;
si0=sj0 != sj1;
if(si0){
goto L28;
}
si0=l5;
si1=-1U;
si0+=si1;
l5=si0;
si0=l2;
si1=-8U;
si0+=si1;
l2=si0;
if(si0){
goto L29;
}
goto L27;
}
L28:;
si0=l5;
si0=!(si0);
if(si0){
goto L26;
}
si0=0U;
si1=l5;
si0-=si1;
l17=si0;
L27:;
si0=l13;
si1=l17;
si0=si0 < si1;
if(si0){
goto L30;
}
si0=l1;
si1=l13;
si2=l17;
si1-=si2;
l13=si1;
i32_store(&i->m0,(U64)si0+12U,si1);
L30:;
si0=l4;
si0=!(si0);
if(si0){
goto L3;
}
L26:;
sj0=0ULL;
l8=sj0;
si0=l13;
switch(si0){
case 0:
goto L4;
case 1:
goto L31;
default:
goto L3;
}
L31:;
si0=l7;
sj0=i64_load(&i->m0,(U64)si0);
l8=sj0;
goto L4;
L7:;
si0=l0;
si1=l1;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=8U;
si0+=si1;
si1=l1;
si2=8U;
si1+=si2;
l2=si1;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
goto L1;
L6:;
si0=l1;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L32;
}
si0=l6;
f15024(i,si0);
L32:;
si0=l1;
sj1=l15;
i64_store(&i->m0,(U64)si0+8U,sj1);
si0=l1;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
L5:;
si0=l0;
sj1=l8;
i64_store(&i->m0,(U64)si0+8U,sj1);
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
goto L1;
L4:;
si0=l12;
si0=!(si0);
if(si0){
goto L33;
}
si0=l7;
f15024(i,si0);
L33:;
si0=l1;
sj1=l8;
i64_store(&i->m0,(U64)si0+8U,sj1);
si0=l1;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
L3:;
si0=l10;
si1=3U;
si0<<=(si1&31);
l2=si0;
si0=-1U;
l1=si0;
L37:;
{
si0=l2;
si0=!(si0);
if(si0){
goto L36;
}
si0=l1;
si1=1U;
si0+=si1;
l1=si0;
si0=l2;
si1=-8U;
si0+=si1;
l2=si0;
si1=l6;
si0+=si1;
sj0=i64_load(&i->m0,(U64)si0);
si0=!(sj0);
if(si0){
goto L37;
}
}
si0=l10;
si1=l1;
si0-=si1;
l2=si0;
switch(si0){
case 0:
goto L36;
case 1:
goto L38;
default:
goto L39;
}
L39:;
si0=l0;
si1=l11;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l0;
si1=l6;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=1U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l10;
si2=l2;
si3=l10;
si4=l2;
si3=si3 < si4;
si1=si3?si1:si2;
i32_store(&i->m0,(U64)si0+12U,si1);
goto L34;
L38:;
si0=l10;
si0=!(si0);
if(si0){
goto L40;
}
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l6;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+8U,sj1);
goto L35;
L40:;
si0=0U;
si1=0U;
si2=1188524U;
f594(i,si0,si1,si2);
UNREACHABLE;
L36:;
si0=l0;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=8U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
L35:;
si0=l11;
si0=!(si0);
if(si0){
goto L34;
}
si0=l6;
f15024(i,si0);
L34:;
si0=l14;
si0=!(si0);
if(si0){
goto L1;
}
si0=l9;
f15024(i,si0);
goto L1;
L2:;
si0=l0;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si1=8U;
si0+=si1;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+1186632U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+1186624U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=8U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
L1:;
si0=l3;
si1=32U;
si0+=si1;
i->g0=si0;
L0:;
}

void f942(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U64 l5=0;
U64 l6=0;
U32 l7=0;
U32 l8=0;
U32 si0,si1,si2,si3,si4;
U64 sj0,sj1,sj2;
si0=i->g0;
si1=96U;
si0-=si1;
l4=si0;
i->g0=si0;
si0=l4;
si1=l2;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l4;
si1=l1;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l3;
si1=255U;
si0&=si1;
switch(si0){
case 0:
goto L3;
case 1:
goto L4;
case 2:
goto L3;
default:
goto L4;
}
L4:;
si0=l4;
si1=48U;
si0+=si1;
si1=l1;
si2=l2;
f940(i,si0,si1,si2);
si0=l4;
si1=16U;
si0+=si1;
si1=8U;
si0+=si1;
si1=l4;
si2=48U;
si1+=si2;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1+48U);
i64_store(&i->m0,(U64)si0+16U,sj1);
si0=l4;
si1=32U;
si0+=si1;
si1=8U;
si0+=si1;
si1=l4;
si2=72U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
l5=sj1;
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1+64U);
l6=sj1;
i64_store(&i->m0,(U64)si0+32U,sj1);
sj0=l6;
si0=(U32)(sj0);
l7=si0;
if(si0){
goto L11;
}
sj0=l5;
si0=!(sj0);
if(si0){
goto L10;
}
L11:;
si0=l3;
si1=255U;
si0&=si1;
si1=-1U;
si0+=si1;
switch(si0){
case 0:
goto L8;
case 1:
goto L9;
case 2:
goto L8;
case 3:
goto L6;
case 4:
goto L7;
default:
goto L9;
}
L10:;
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
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
goto L1;
L9:;
si0=1186584U;
si1=40U;
si2=1187504U;
f604(i,si0,si1,si2);
UNREACHABLE;
L8:;
si0=l4;
si1=48U;
si0+=si1;
si1=8U;
si0+=si1;
si1=l4;
si2=16U;
si1+=si2;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1+16U);
l6=sj1;
i64_store(&i->m0,(U64)si0+48U,sj1);
sj0=l6;
si0=(U32)(sj0);
if(si0){
goto L14;
}
si0=l4;
sj0=i64_load(&i->m0,(U64)si0+56U);
l6=sj0;
si0=!(sj0);
si0=!(si0);
if(si0){
goto L13;
}
si0=l4;
sj1=1ULL;
i64_store(&i->m0,(U64)si0+56U,sj1);
si0=l4;
si1=0U;
i32_store(&i->m0,(U64)si0+48U,si1);
goto L12;
L14:;
si0=l4;
si1=60U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=!(si0);
if(si0){
goto L16;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0+52U);
l2=si0;
si1=l2;
sj1=i64_load(&i->m0,(U64)si1);
sj2=1ULL;
sj1+=sj2;
l6=sj1;
i64_store(&i->m0,(U64)si0,sj1);
sj0=l6;
sj1=0ULL;
si0=sj0 != sj1;
if(si0){
goto L12;
}
si0=l4;
si1=48U;
si0+=si1;
si1=4U;
si0|=si1;
l8=si0;
si0=l2;
si1=8U;
si0+=si1;
l2=si0;
si0=l3;
si1=3U;
si0<<=(si1&31);
si1=-8U;
si0+=si1;
l1=si0;
L17:;
{
si0=l1;
si0=!(si0);
if(si0){
goto L15;
}
si0=l2;
si1=l2;
sj1=i64_load(&i->m0,(U64)si1);
sj2=1ULL;
sj1+=sj2;
l6=sj1;
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si1=-8U;
si0+=si1;
l1=si0;
si0=l2;
si1=8U;
si0+=si1;
l2=si0;
sj0=l6;
si0=!(sj0);
if(si0){
goto L17;
}
goto L12;
}
L16:;
si0=1202860U;
si1=32U;
si2=1202892U;
f604(i,si0,si1,si2);
UNREACHABLE;
L15:;
si0=l3;
si1=l4;
si2=56U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
si0=si0 != si1;
if(si0){
goto L18;
}
si0=l8;
si1=l3;
f1299(i,si0,si1);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+60U);
l3=si0;
L18:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+52U);
si1=l3;
si2=3U;
si1<<=(si2&31);
si0+=si1;
sj1=1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=l4;
si1=i32_load(&i->m0,(U64)si1+60U);
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0+60U,si1);
goto L12;
L13:;
sj0=l6;
sj1=1ULL;
sj0+=sj1;
l6=sj0;
si0=!(sj0);
if(si0){
goto L19;
}
si0=l4;
sj1=l6;
i64_store(&i->m0,(U64)si0+56U,sj1);
goto L12;
L19:;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=16U;
si0=f15022(i,si0);
l2=si0;
si0=!(si0);
if(si0){
goto L2;
}
si0=l2;
sj1=1ULL;
i64_store(&i->m0,(U64)si0+8U,sj1);
si0=l2;
sj1=l6;
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
sj1=8589934594ULL;
i64_store(&i->m0,(U64)si0+56U,sj1);
si0=l4;
si1=l2;
i32_store(&i->m0,(U64)si0+52U,si1);
si0=l4;
si1=1U;
i32_store(&i->m0,(U64)si0+48U,si1);
L12:;
si0=l0;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1+48U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=8U;
si0+=si1;
si1=l4;
si2=48U;
si1+=si2;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
goto L5;
L7:;
si0=l4;
si1=92U;
si0+=si1;
si1=366U;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=366U;
i32_store(&i->m0,(U64)si0+84U,si1);
si0=l4;
si1=l4;
si2=12U;
si1+=si2;
i32_store(&i->m0,(U64)si0+88U,si1);
si0=l4;
si1=l4;
si2=8U;
si1+=si2;
i32_store(&i->m0,(U64)si0+80U,si1);
si0=l4;
si1=48U;
si0+=si1;
si1=1187472U;
si2=2U;
si3=l4;
si4=80U;
si3+=si4;
si4=2U;
f920(i,si0,si1,si2,si3,si4);
si0=l4;
si1=48U;
si0+=si1;
si1=1187488U;
f614(i,si0,si1);
UNREACHABLE;
L6:;
si0=l0;
si1=l4;
si2=16U;
si1+=si2;
si2=l4;
si3=32U;
si2+=si3;
si3=l2;
f1188(i,si0,si1,si2,si3);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+32U);
l7=si0;
L5:;
si0=l7;
si0=!(si0);
if(si0){
goto L1;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0+40U);
si0=!(si0);
if(si0){
goto L1;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0+36U);
f15024(i,si0);
goto L1;
L3:;
si0=l0;
si1=l1;
si2=l2;
f934(i,si0,si1,si2);
goto L1;
L2:;
si0=8U;
si1=16U;
f52(i,si0,si1);
UNREACHABLE;
L1:;
si0=l4;
si1=96U;
si0+=si1;
i->g0=si0;
L0:;
}

void f943(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U32 l4=0;
U32 si0,si1,si2;
U64 sj0,sj1;
si0=i->g0;
si1=48U;
si0-=si1;
l3=si0;
i->g0=si0;
si0=l2;
si1=255U;
si0&=si1;
switch(si0){
case 0:
goto L3;
case 1:
goto L4;
case 2:
goto L3;
default:
goto L4;
}
L4:;
si0=l3;
si1=8U;
si0+=si1;
si1=l0;
si2=l1;
f941(i,si0,si1,si2);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+8U);
l4=si0;
if(si0){
goto L5;
}
si0=l3;
sj0=i64_load(&i->m0,(U64)si0+16U);
si0=!(sj0);
if(si0){
goto L1;
}
L5:;
si0=l2;
si1=255U;
si0&=si1;
si1=-1U;
si0+=si1;
switch(si0){
case 0:
goto L9;
case 1:
goto L8;
case 2:
goto L9;
case 3:
goto L7;
case 4:
goto L6;
default:
goto L8;
}
L9:;
si0=l3;
si1=32U;
si0+=si1;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+1186632U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+1186624U);
i64_store(&i->m0,(U64)si0+24U,sj1);
si0=l0;
si1=l3;
si2=24U;
si1+=si2;
f925(i,si0,si1);
goto L2;
L8:;
si0=1186584U;
si1=40U;
si2=1187536U;
f604(i,si0,si1,si2);
UNREACHABLE;
L7:;
si0=l0;
si1=l3;
si2=8U;
si1+=si2;
si2=l1;
f1189(i,si0,si1,si2);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+8U);
l4=si0;
goto L2;
L6:;
si0=l3;
si1=36U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=1U;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l3;
si1=1187308U;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l3;
si1=1186288U;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l3;
si1=24U;
si0+=si1;
si1=1187520U;
f614(i,si0,si1);
UNREACHABLE;
L3:;
si0=l3;
si1=24U;
si0+=si1;
si1=8U;
si0+=si1;
si1=l1;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=l1;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+24U,sj1);
si0=l0;
si1=l3;
si2=24U;
si1+=si2;
f935(i,si0,si1);
goto L1;
L2:;
si0=l4;
si0=!(si0);
if(si0){
goto L1;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0+16U);
si0=!(si0);
if(si0){
goto L1;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0+12U);
f15024(i,si0);
L1:;
si0=l2;
si1=255U;
si0&=si1;
switch(si0){
case 0:
goto L10;
case 1:
goto L11;
case 2:
goto L10;
default:
goto L11;
}
L11:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L10;
}
si0=l1;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L10;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
f15024(i,si0);
L10:;
si0=l3;
si1=48U;
si0+=si1;
i->g0=si0;
L0:;
}

U32 f944(rustpythonInstance*i,U32 l0,U32 l1) {
U64 l2=0;
U64 l3=0;
U32 l4=0;
U64 l5=0;
U32 l6=0;
U32 l7=0;
U32 si0,si1,si2,si3;
U64 sj0,sj1,sj2,sj3;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L4;
}
si0=l0;
sj0=i64_load(&i->m0,(U64)si0+8U);
l2=sj0;
si0=l1;
sj0=i64_load(&i->m0,(U64)si0+8U);
l3=sj0;
si0=1U;
l4=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
if(si0){
goto L5;
}
sj0=l2;
si0=!(sj0);
if(si0){
goto L1;
}
L5:;
sj0=l3;
si0=!(sj0);
si0=!(si0);
if(si0){
goto L6;
}
si0=0U;
goto L0;
L6:;
si0=l1;
if(si0){
goto L7;
}
sj0=l2;
si0=!(sj0);
if(si0){
goto L1;
}
sj0=l2;
sj1=l3;
sj0=REM_U(sj0,sj1);
si0=!(sj0);
goto L0;
L7:;
sj0=l2;
sj1=32ULL;
sj0>>=(sj1&63);
si0=(U32)(sj0);
l1=si0;
si1=2U;
si0=si0 < si1;
if(si0){
goto L3;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+4U);
l0=si0;
sj0=l3;
sj1=1ULL;
sj0&=sj1;
si0=!(sj0);
si0=!(si0);
if(si0){
goto L8;
}
si0=0U;
l4=si0;
sj0=-1ULL;
sj1=-1ULL;
sj2=l3;
sj2=I64_CTZ(sj2);
l5=sj2;
sj1<<=(sj2&63);
sj2=-1ULL;
sj1^=sj2;
si2=l0;
sj2=i64_load(&i->m0,(U64)si2);
l2=sj2;
si2=!(sj2);
sj0=si2?sj0:sj1;
sj1=l2;
sj0&=sj1;
sj1=0ULL;
si0=sj0 != sj1;
if(si0){
goto L1;
}
sj0=l3;
sj1=l5;
sj0>>=(sj1&63);
l3=sj0;
L8:;
si0=l0;
si1=l1;
sj2=l3;
sj3=0ULL;
sj0=f1123(i,si0,si1,sj2,sj3);
si0=!(sj0);
l4=si0;
goto L1;
L4:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L2;
}
si0=0U;
l4=si0;
si0=l0;
si1=12U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si1=l1;
si2=12U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
l7=si1;
si0=si0 < si1;
if(si0){
goto L1;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+4U);
si1=l6;
si2=l1;
si2=i32_load(&i->m0,(U64)si2+4U);
si3=l7;
si0=f1273(i,si0,si1,si2,si3);
goto L0;
L3:;
si0=1259478U;
si1=30U;
si2=1259508U;
f604(i,si0,si1,si2);
UNREACHABLE;
L2:;
si0=l0;
sj0=i64_load(&i->m0,(U64)si0+8U);
si0=!(sj0);
goto L0;
L1:;
si0=l4;
L0:;
return si0;
}

U32 f945(rustpythonInstance*i,U32 l0,U64 l1) {
U32 l2=0;
U32 l3=0;
U32 l4=0;
U64 l5=0;
U32 si0,si1,si2,si3;
U64 sj0,sj1,sj2,sj3;
sj0=l1;
si0=!(sj0);
si0=!(si0);
if(si0){
goto L2;
}
si0=1U;
l2=si0;
goto L1;
L2:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L3;
}
sj0=l1;
sj1=274877906944ULL;
si0=sj0 >= sj1;
if(si0){
goto L4;
}
si0=0U;
l2=si0;
si0=l0;
si1=12U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
sj1=l1;
sj2=6ULL;
sj1>>=(sj2&63);
si1=(U32)(sj1);
l3=si1;
si0=si0 <= si1;
if(si0){
goto L1;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+4U);
l4=si0;
si1=l3;
si2=3U;
si1<<=(si2&31);
l0=si1;
si0+=si1;
l3=si0;
L6:;
{
si0=l0;
si0=!(si0);
if(si0){
goto L5;
}
si0=l0;
si1=-8U;
si0+=si1;
l0=si0;
si0=l4;
sj0=i64_load(&i->m0,(U64)si0);
l5=sj0;
si0=l4;
si1=8U;
si0+=si1;
l4=si0;
sj0=l5;
si0=!(sj0);
si0=!(si0);
if(si0){
goto L1;
}
goto L6;
}
L5:;
sj0=-1ULL;
sj1=-1ULL;
sj2=l1;
sj1<<=(sj2&63);
sj2=-1ULL;
sj1^=sj2;
si2=l3;
sj2=i64_load(&i->m0,(U64)si2);
l5=sj2;
si2=!(sj2);
sj0=si2?sj0:sj1;
sj1=l5;
sj0&=sj1;
si0=!(sj0);
goto L0;
L4:;
si0=1255316U;
si1=43U;
si2=1255484U;
f604(i,si0,si1,si2);
UNREACHABLE;
L3:;
sj0=-1ULL;
sj1=-1ULL;
sj2=-1ULL;
sj3=l1;
sj2<<=(sj3&63);
sj3=-1ULL;
sj2^=sj3;
si3=l0;
sj3=i64_load(&i->m0,(U64)si3+8U);
l5=sj3;
si3=!(sj3);
sj1=si3?sj1:sj2;
sj2=l1;
sj3=63ULL;
si2=sj2 > sj3;
sj0=si2?sj0:sj1;
sj1=l5;
sj0&=sj1;
si0=!(sj0);
goto L0;
L1:;
si0=l2;
L0:;
return si0;
}

void f946(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U64 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 l8=0;
U64 l9=0;
U32 si0,si1,si2,si3,si4,si5;
U64 sj0,sj1,sj2;
si0=i->g0;
si1=32U;
si0-=si1;
l3=si0;
i->g0=si0;
si0=l2;
sj0=i64_load(&i->m0,(U64)si0+8U);
l4=sj0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L2;
}
sj0=l4;
sj1=1ULL;
si0=sj0 > sj1;
if(si0){
goto L5;
}
sj0=l4;
si0=(U32)(sj0);
switch(si0){
case 0:
goto L4;
case 1:
goto L3;
default:
goto L4;
}
L5:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L7;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
si1=l1;
si2=12U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
sj2=l4;
sj0=f1117(i,si0,si1,sj2);
l4=sj0;
goto L6;
L7:;
si0=l1;
sj0=i64_load(&i->m0,(U64)si0+8U);
sj1=l4;
sj0=REM_U(sj0,sj1);
l4=sj0;
L6:;
si0=l0;
sj1=l4;
i64_store(&i->m0,(U64)si0+8U,sj1);
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
goto L1;
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
si1=1186656U;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l3;
si1=1186288U;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l3;
si1=8U;
si0+=si1;
si1=1187824U;
f614(i,si0,si1);
UNREACHABLE;
L3:;
si0=l0;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=8U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
goto L1;
L2:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+4U);
l5=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L9;
}
si0=l1;
si1=12U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
sj1=l4;
sj2=32ULL;
sj1>>=(sj2&63);
si1=(U32)(sj1);
l6=si1;
si0=si0 < si1;
if(si0){
goto L13;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
l1=si0;
si0=8U;
l7=si0;
si0=l6;
si0=!(si0);
if(si0){
goto L14;
}
si0=l6;
si1=268435455U;
si0=si0 > si1;
if(si0){
goto L11;
}
si0=l6;
si1=3U;
si0<<=(si1&31);
l8=si0;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L11;
}
si0=l8;
si0=!(si0);
if(si0){
goto L14;
}
si0=l8;
si1=1U;
si0=f15026(i,si0,si1);
l7=si0;
si0=!(si0);
if(si0){
goto L12;
}
L14:;
si0=l7;
si1=l6;
si2=l1;
si3=l2;
si4=l5;
si5=l6;
f1125(i,si0,si1,si2,si3,si4,si5);
si0=l6;
si1=1U;
si0+=si1;
l1=si0;
si0=l6;
si1=3U;
si0<<=(si1&31);
l2=si0;
L16:;
{
si0=l2;
si0=!(si0);
if(si0){
goto L15;
}
si0=l1;
si1=-1U;
si0+=si1;
l1=si0;
si0=l2;
si1=-8U;
si0+=si1;
l2=si0;
si1=l7;
si0+=si1;
sj0=i64_load(&i->m0,(U64)si0);
si0=!(sj0);
if(si0){
goto L16;
}
}
si0=l1;
switch(si0){
case 0:
goto L15;
case 1:
goto L17;
default:
goto L18;
}
L18:;
si0=l0;
si1=l6;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l0;
si1=l7;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=1U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l1;
si2=l6;
si3=l1;
si4=l6;
si3=si3 < si4;
si1=si3?si1:si2;
i32_store(&i->m0,(U64)si0+12U,si1);
goto L8;
L17:;
si0=l6;
si0=!(si0);
if(si0){
goto L19;
}
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l7;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+8U,sj1);
si0=l7;
f15024(i,si0);
goto L8;
L19:;
si0=0U;
si1=0U;
si2=1188524U;
f594(i,si0,si1,si2);
UNREACHABLE;
L15:;
si0=l0;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=8U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l6;
si0=!(si0);
if(si0){
goto L8;
}
si0=l7;
f15024(i,si0);
goto L8;
L13:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
l8=si0;
si0=8U;
l1=si0;
si0=0U;
l7=si0;
si0=l2;
si0=!(si0);
if(si0){
goto L20;
}
si0=l2;
si1=268435455U;
si0=si0 > si1;
if(si0){
goto L11;
}
si0=l2;
si1=3U;
si0<<=(si1&31);
l6=si0;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L11;
}
si0=l6;
si0=!(si0);
if(si0){
goto L20;
}
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=l6;
si0=f15022(i,si0);
l1=si0;
si0=!(si0);
if(si0){
goto L10;
}
si0=l6;
l7=si0;
L20:;
si0=l0;
si1=l1;
si2=l8;
si3=l7;
si1=f15143(i,si1,si2,si3);
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=1U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l2;
sj1=(U64)(si1);
l9=sj1;
sj2=32ULL;
sj1<<=(sj2&63);
sj2=l9;
sj1|=sj2;
i64_store(&i->m0,(U64)si0+8U,sj1);
goto L8;
L12:;
si0=8U;
si1=l8;
f52(i,si0,si1);
UNREACHABLE;
L11:;
f53(i);
UNREACHABLE;
L10:;
si0=8U;
si1=l6;
f52(i,si0,si1);
UNREACHABLE;
L9:;
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l1;
sj1=i64_load(&i->m0,(U64)si1+8U);
i64_store(&i->m0,(U64)si0+8U,sj1);
L8:;
sj0=l4;
si0=(U32)(sj0);
si0=!(si0);
if(si0){
goto L1;
}
si0=l5;
f15024(i,si0);
L1:;
si0=l3;
si1=32U;
si0+=si1;
i->g0=si0;
L0:;
}

void f947(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U64 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 l8=0;
U32 si0,si1,si2,si3,si4,si5;
U64 sj0,sj1,sj2;
si0=i->g0;
si1=32U;
si0-=si1;
l3=si0;
i->g0=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L3;
}
si0=l2;
sj0=i64_load(&i->m0,(U64)si0+8U);
l4=sj0;
sj1=1ULL;
si0=sj0 > sj1;
if(si0){
goto L4;
}
sj0=l4;
si0=(U32)(sj0);
switch(si0){
case 0:
goto L6;
case 1:
goto L5;
default:
goto L6;
}
L6:;
si0=l3;
si1=20U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=1U;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l3;
si1=1186656U;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l3;
si1=1186288U;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l3;
si1=8U;
si0+=si1;
si1=1187840U;
f614(i,si0,si1);
UNREACHABLE;
L5:;
si0=l0;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=8U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
goto L1;
L4:;
si0=l1;
si1=l2;
si0=si0 == si1;
if(si0){
goto L2;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L8;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
si1=l1;
si2=12U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
sj2=l4;
sj0=f1117(i,si0,si1,sj2);
l4=sj0;
goto L7;
L8:;
si0=l1;
sj0=i64_load(&i->m0,(U64)si0+8U);
sj1=l4;
sj0=REM_U(sj0,sj1);
l4=sj0;
L7:;
si0=l0;
sj1=l4;
i64_store(&i->m0,(U64)si0+8U,sj1);
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
goto L1;
L3:;
si0=l1;
si1=l2;
si0=si0 == si1;
if(si0){
goto L2;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L12;
}
si0=l1;
si1=12U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si1=l2;
si2=12U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
l6=si1;
si0=si0 < si1;
if(si0){
goto L13;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0+4U);
l2=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
l1=si0;
si0=8U;
l7=si0;
si0=l6;
si0=!(si0);
if(si0){
goto L14;
}
si0=l6;
si1=268435455U;
si0=si0 > si1;
if(si0){
goto L10;
}
si0=l6;
si1=3U;
si0<<=(si1&31);
l8=si0;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L10;
}
si0=l8;
si0=!(si0);
if(si0){
goto L14;
}
si0=l8;
si1=1U;
si0=f15026(i,si0,si1);
l7=si0;
si0=!(si0);
if(si0){
goto L11;
}
L14:;
si0=l7;
si1=l6;
si2=l1;
si3=l5;
si4=l2;
si5=l6;
f1125(i,si0,si1,si2,si3,si4,si5);
si0=l6;
si1=3U;
si0<<=(si1&31);
l2=si0;
si0=-1U;
l1=si0;
L16:;
{
si0=l2;
si0=!(si0);
if(si0){
goto L15;
}
si0=l1;
si1=1U;
si0+=si1;
l1=si0;
si0=l2;
si1=-8U;
si0+=si1;
l2=si0;
si1=l7;
si0+=si1;
sj0=i64_load(&i->m0,(U64)si0);
si0=!(sj0);
if(si0){
goto L16;
}
}
si0=l6;
si1=l1;
si0-=si1;
l2=si0;
switch(si0){
case 0:
goto L15;
case 1:
goto L17;
default:
goto L18;
}
L18:;
si0=l0;
si1=l6;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l0;
si1=l7;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=1U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l6;
si2=l2;
si3=l6;
si4=l2;
si3=si3 < si4;
si1=si3?si1:si2;
i32_store(&i->m0,(U64)si0+12U,si1);
goto L1;
L17:;
si0=l6;
si0=!(si0);
if(si0){
goto L19;
}
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l7;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+8U,sj1);
si0=l7;
f15024(i,si0);
goto L1;
L19:;
si0=0U;
si1=0U;
si2=1188524U;
f594(i,si0,si1,si2);
UNREACHABLE;
L15:;
si0=l0;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=8U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l6;
si0=!(si0);
if(si0){
goto L1;
}
si0=l7;
f15024(i,si0);
goto L1;
L13:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
l6=si0;
si0=8U;
l2=si0;
si0=0U;
l1=si0;
si0=l5;
si0=!(si0);
if(si0){
goto L20;
}
si0=l5;
si1=268435455U;
si0=si0 > si1;
if(si0){
goto L10;
}
si0=l5;
si1=3U;
si0<<=(si1&31);
l7=si0;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L10;
}
si0=l7;
si0=!(si0);
if(si0){
goto L20;
}
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=l7;
si0=f15022(i,si0);
l2=si0;
si0=!(si0);
if(si0){
goto L9;
}
si0=l7;
l1=si0;
L20:;
si0=l0;
si1=l2;
si2=l6;
si3=l1;
si1=f15143(i,si1,si2,si3);
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=1U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l5;
sj1=(U64)(si1);
l4=sj1;
sj2=32ULL;
sj1<<=(sj2&63);
sj2=l4;
sj1|=sj2;
i64_store(&i->m0,(U64)si0+8U,sj1);
goto L1;
L12:;
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l1;
sj1=i64_load(&i->m0,(U64)si1+8U);
i64_store(&i->m0,(U64)si0+8U,sj1);
goto L1;
L11:;
si0=8U;
si1=l8;
f52(i,si0,si1);
UNREACHABLE;
L10:;
f53(i);
UNREACHABLE;
L9:;
si0=8U;
si1=l7;
f52(i,si0,si1);
UNREACHABLE;
L2:;
si0=l0;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=8U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
L1:;
si0=l3;
si1=32U;
si0+=si1;
i->g0=si0;
L0:;
}

void f948(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U64 l3=0;
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
l2=si0;
i->g0=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L2;
}
si0=l1;
sj0=i64_load(&i->m0,(U64)si0+8U);
l3=sj0;
sj1=1ULL;
si0=sj0 > sj1;
if(si0){
goto L5;
}
sj0=l3;
si0=(U32)(sj0);
switch(si0){
case 0:
goto L4;
case 1:
goto L3;
default:
goto L4;
}
L5:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L6;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+4U);
l1=si0;
si1=l0;
si2=12U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
sj2=l3;
sj0=f1117(i,si0,si1,sj2);
l3=sj0;
si0=l0;
si1=8U;
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
sj1=l3;
i64_store(&i->m0,(U64)si0+8U,sj1);
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
goto L1;
L6:;
si0=l0;
si1=l0;
sj1=i64_load(&i->m0,(U64)si1+8U);
sj2=l3;
sj1=REM_U(sj1,sj2);
i64_store(&i->m0,(U64)si0+8U,sj1);
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
si1=1186656U;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l2;
si1=1186288U;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l2;
si1=8U;
si0+=si1;
si1=1187856U;
f614(i,si0,si1);
UNREACHABLE;
L3:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L8;
}
si0=l0;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L8;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+4U);
f15024(i,si0);
L8:;
si0=l0;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=8U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
goto L1;
L2:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L1;
}
si0=l0;
si1=12U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
si1=l1;
si2=12U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
l5=si1;
si0=si0 < si1;
if(si0){
goto L1;
}
si0=8U;
l6=si0;
si0=l5;
si0=!(si0);
if(si0){
goto L11;
}
si0=l5;
si1=268435455U;
si0=si0 > si1;
if(si0){
goto L10;
}
si0=l5;
si1=3U;
si0<<=(si1&31);
l7=si0;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L10;
}
si0=8U;
l6=si0;
si0=l7;
si0=!(si0);
if(si0){
goto L11;
}
si0=l7;
si1=1U;
si0=f15026(i,si0,si1);
l6=si0;
si0=!(si0);
if(si0){
goto L9;
}
L11:;
si0=l6;
si1=l5;
si2=l0;
si2=i32_load(&i->m0,(U64)si2+4U);
l8=si2;
si3=l4;
si4=l1;
si4=i32_load(&i->m0,(U64)si4+4U);
si5=l5;
f1125(i,si0,si1,si2,si3,si4,si5);
si0=l0;
si1=l5;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l0;
si1=l6;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=8U;
si0+=si1;
l1=si0;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
si0=l1;
si1=l5;
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
if(si0){
goto L14;
}
sj0=0ULL;
l3=sj0;
goto L13;
L14:;
si0=l5;
si1=3U;
si0<<=(si1&31);
l1=si0;
si0=l5;
si1=-1U;
si0+=si1;
si1=536870911U;
si0&=si1;
si1=1U;
si0+=si1;
l9=si0;
si0=0U;
l4=si0;
L18:;
{
si0=l6;
si1=l1;
si0+=si1;
si1=-8U;
si0+=si1;
sj0=i64_load(&i->m0,(U64)si0);
sj1=0ULL;
si0=sj0 != sj1;
if(si0){
goto L17;
}
si0=l4;
si1=-1U;
si0+=si1;
l4=si0;
si0=l1;
si1=-8U;
si0+=si1;
l1=si0;
if(si0){
goto L18;
}
goto L16;
}
L17:;
si0=l5;
l1=si0;
si0=l4;
si0=!(si0);
if(si0){
goto L15;
}
si0=0U;
si1=l4;
si0-=si1;
l9=si0;
L16:;
si0=l5;
l1=si0;
si0=l5;
si1=l9;
si0=si0 < si1;
if(si0){
goto L15;
}
si0=l0;
si1=l5;
si2=l9;
si1-=si2;
l1=si1;
i32_store(&i->m0,(U64)si0+12U,si1);
L15:;
sj0=0ULL;
l3=sj0;
si0=l1;
switch(si0){
case 0:
goto L19;
case 1:
goto L20;
default:
goto L12;
}
L20:;
si0=l6;
sj0=i64_load(&i->m0,(U64)si0);
l3=sj0;
L19:;
si0=l5;
si0=!(si0);
if(si0){
goto L13;
}
si0=l6;
f15024(i,si0);
L13:;
si0=l0;
sj1=l3;
i64_store(&i->m0,(U64)si0+8U,sj1);
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
L12:;
si0=l7;
si0=!(si0);
if(si0){
goto L1;
}
si0=l8;
f15024(i,si0);
goto L1;
L10:;
f53(i);
UNREACHABLE;
L9:;
si0=8U;
si1=l7;
f52(i,si0,si1);
UNREACHABLE;
L1:;
si0=l2;
si1=32U;
si0+=si1;
i->g0=si0;
L0:;
}

void f949(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U64 l4=0;
U32 l5=0;
U64 l6=0;
U32 l7=0;
U64 l8=0;
U32 l9=0;
U64 l10=0;
U32 l11=0;
U32 l12=0;
U32 l13=0;
U32 l14=0;
U32 l15=0;
U32 si0,si1,si2,si3,si4,si5,si6,si7;
U64 sj0,sj1,sj2,sj3;
si0=l3;
sj0=i64_load(&i->m0,(U64)si0+8U);
l4=sj0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
if(si0){
goto L19;
}
sj0=l4;
sj1=1ULL;
si0=sj0 == sj1;
if(si0){
goto L18;
}
L19:;
si0=l2;
sj0=i64_load(&i->m0,(U64)si0+8U);
l6=sj0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
if(si0){
goto L20;
}
sj0=l6;
si0=!(sj0);
if(si0){
goto L17;
}
L20:;
si0=l1;
sj0=i64_load(&i->m0,(U64)si0+8U);
l8=sj0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l9=si0;
if(si0){
goto L21;
}
sj0=l8;
si0=!(sj0);
if(si0){
goto L16;
}
L21:;
sj0=l8;
sj1=32ULL;
sj0>>=(sj1&63);
l10=sj0;
si0=(U32)(sj0);
l11=si0;
si0=l7;
if(si0){
goto L22;
}
sj0=l6;
sj1=1ULL;
si0=sj0 == sj1;
if(si0){
goto L15;
}
L22:;
si0=l9;
if(si0){
goto L12;
}
sj0=l8;
sj1=1ULL;
si0=sj0 != sj1;
if(si0){
goto L14;
}
si0=l0;
si1=8U;
si0+=si1;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+1186632U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+1186624U);
i64_store(&i->m0,(U64)si0,sj1);
goto L0;
L18:;
si0=l0;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=8U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
goto L1;
L17:;
si0=l0;
si1=8U;
si0+=si1;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+1186632U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+1186624U);
i64_store(&i->m0,(U64)si0,sj1);
goto L0;
L16:;
si0=l0;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=8U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
goto L0;
L15:;
si0=l9;
if(si0){
goto L24;
}
si0=0U;
l2=si0;
goto L23;
L24:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
l5=si0;
si0=8U;
l3=si0;
si0=0U;
l2=si0;
si0=l11;
si0=!(si0);
if(si0){
goto L25;
}
si0=l11;
si1=268435455U;
si0=si0 > si1;
if(si0){
goto L11;
}
si0=l11;
si1=3U;
si0<<=(si1&31);
l1=si0;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L11;
}
si0=l1;
si0=!(si0);
if(si0){
goto L25;
}
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=l1;
si0=f15022(i,si0);
l3=si0;
si0=!(si0);
if(si0){
goto L13;
}
si0=l1;
l2=si0;
L25:;
si0=l3;
si1=l5;
si2=l2;
si0=f15143(i,si0,si1,si2);
sj0=l8;
sj1=-4294967296ULL;
sj0&=sj1;
sj1=l10;
sj0|=sj1;
l8=sj0;
si0=1U;
l2=si0;
L23:;
si0=l0;
sj1=l8;
i64_store(&i->m0,(U64)si0+8U,sj1);
si0=l0;
si1=l3;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l2;
i32_store(&i->m0,(U64)si0,si1);
goto L0;
L14:;
si0=l7;
si1=l5;
si0|=si1;
if(si0){
goto L12;
}
si0=l0;
sj1=l8;
sj2=l6;
sj3=l4;
sj1=f1222(i,sj1,sj2,sj3);
i64_store(&i->m0,(U64)si0+8U,sj1);
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
goto L0;
L13:;
si0=8U;
si1=l1;
f52(i,si0,si1);
UNREACHABLE;
L12:;
si0=l5;
if(si0){
goto L31;
}
sj0=l4;
si0=!(sj0);
si0=!(si0);
if(si0){
goto L30;
}
goto L27;
L31:;
sj0=l4;
sj1=32ULL;
sj0>>=(sj1&63);
si0=(U32)(sj0);
l12=si0;
si0=!(si0);
if(si0){
goto L27;
}
si0=l12;
si1=268435455U;
si0=si0 > si1;
if(si0){
goto L11;
}
si0=l12;
si1=3U;
si0<<=(si1&31);
l13=si0;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L11;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0+4U);
l3=si0;
si0=l13;
if(si0){
goto L32;
}
si0=8U;
l14=si0;
goto L29;
L32:;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=l13;
si0=f15022(i,si0);
l14=si0;
if(si0){
goto L29;
}
si0=8U;
si1=l13;
f52(i,si0,si1);
UNREACHABLE;
L30:;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=8U;
l13=si0;
si0=8U;
si0=f15022(i,si0);
l14=si0;
si0=!(si0);
if(si0){
goto L33;
}
si0=l14;
sj1=l4;
i64_store(&i->m0,(U64)si0,sj1);
si0=1U;
l12=si0;
goto L28;
L33:;
si0=8U;
si1=8U;
f52(i,si0,si1);
UNREACHABLE;
L29:;
si0=l14;
si1=l3;
si2=l13;
si0=f15143(i,si0,si1,si2);
L28:;
si0=0U;
l15=si0;
si0=l13;
si1=1U;
si0=f15026(i,si0,si1);
l5=si0;
if(si0){
goto L26;
}
si0=8U;
si1=l13;
f52(i,si0,si1);
UNREACHABLE;
L27:;
si0=0U;
l12=si0;
si0=8U;
l14=si0;
si0=1U;
l15=si0;
si0=8U;
l5=si0;
L26:;
si0=l9;
if(si0){
goto L36;
}
sj0=l8;
si0=!(sj0);
si0=!(si0);
if(si0){
goto L35;
}
si0=8U;
l3=si0;
si0=0U;
l11=si0;
goto L34;
L36:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
l13=si0;
si0=8U;
l3=si0;
si0=0U;
l1=si0;
si0=l11;
si0=!(si0);
if(si0){
goto L37;
}
si0=l11;
si1=268435455U;
si0=si0 > si1;
if(si0){
goto L11;
}
si0=l11;
si1=3U;
si0<<=(si1&31);
l9=si0;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L11;
}
si0=l9;
si0=!(si0);
if(si0){
goto L37;
}
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=l9;
si0=f15022(i,si0);
l3=si0;
si0=!(si0);
if(si0){
goto L8;
}
si0=l9;
l1=si0;
L37:;
si0=l3;
si1=l13;
si2=l1;
si0=f15143(i,si0,si1,si2);
goto L34;
L35:;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=8U;
si0=f15022(i,si0);
l3=si0;
si0=!(si0);
if(si0){
goto L7;
}
si0=l3;
sj1=l8;
i64_store(&i->m0,(U64)si0,sj1);
si0=1U;
l11=si0;
L34:;
si0=l7;
if(si0){
goto L38;
}
sj0=l6;
sj1=0ULL;
si0=sj0 != sj1;
if(si0){
goto L9;
}
si0=l5;
si1=l12;
si2=l3;
si3=l11;
si4=8U;
si5=0U;
si6=l14;
si7=l12;
f1130(i,si0,si1,si2,si3,si4,si5,si6,si7);
goto L2;
L38:;
sj0=l6;
sj1=32ULL;
sj0>>=(sj1&63);
si0=(U32)(sj0);
l1=si0;
si0=!(si0);
if(si0){
goto L5;
}
si0=l1;
si1=268435455U;
si0=si0 > si1;
if(si0){
goto L11;
}
si0=l1;
si1=3U;
si0<<=(si1&31);
l7=si0;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L11;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0+4U);
l9=si0;
si0=l7;
if(si0){
goto L10;
}
si0=8U;
l2=si0;
goto L4;
L11:;
f53(i);
UNREACHABLE;
L10:;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=l7;
si0=f15022(i,si0);
l2=si0;
if(si0){
goto L4;
}
si0=8U;
si1=l7;
f52(i,si0,si1);
UNREACHABLE;
L9:;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=8U;
si0=f15022(i,si0);
l2=si0;
si0=!(si0);
if(si0){
goto L6;
}
si0=l2;
sj1=l6;
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=l12;
si2=l3;
si3=l11;
si4=l2;
si5=1U;
si6=l14;
si7=l12;
f1130(i,si0,si1,si2,si3,si4,si5,si6,si7);
goto L3;
L8:;
si0=8U;
si1=l9;
f52(i,si0,si1);
UNREACHABLE;
L7:;
si0=8U;
si1=8U;
f52(i,si0,si1);
UNREACHABLE;
L6:;
si0=8U;
si1=8U;
f52(i,si0,si1);
UNREACHABLE;
L5:;
si0=l5;
si1=l12;
si2=l3;
si3=l11;
si4=8U;
si5=l1;
si6=l14;
si7=l12;
f1130(i,si0,si1,si2,si3,si4,si5,si6,si7);
goto L2;
L4:;
si0=l5;
si1=l12;
si2=l3;
si3=l11;
si4=l2;
si5=l9;
si6=l7;
si4=f15143(i,si4,si5,si6);
si5=l1;
si6=l14;
si7=l12;
f1130(i,si0,si1,si2,si3,si4,si5,si6,si7);
L3:;
si0=l2;
f15024(i,si0);
L2:;
si0=l11;
si0=!(si0);
if(si0){
goto L39;
}
si0=l3;
f15024(i,si0);
L39:;
si0=l12;
si1=3U;
si0<<=(si1&31);
l3=si0;
si0=-1U;
l2=si0;
L43:;
{
si0=l3;
si0=!(si0);
if(si0){
goto L42;
}
si0=l2;
si1=1U;
si0+=si1;
l2=si0;
si0=l3;
si1=-8U;
si0+=si1;
l3=si0;
si1=l5;
si0+=si1;
sj0=i64_load(&i->m0,(U64)si0);
si0=!(sj0);
if(si0){
goto L43;
}
}
si0=l12;
si1=l2;
si0-=si1;
l3=si0;
switch(si0){
case 0:
goto L42;
case 1:
goto L44;
default:
goto L45;
}
L45:;
si0=l0;
si1=l12;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l0;
si1=l5;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=1U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l12;
si2=l3;
si3=l12;
si4=l3;
si3=si3 < si4;
si1=si3?si1:si2;
i32_store(&i->m0,(U64)si0+12U,si1);
goto L40;
L44:;
si0=l15;
if(si0){
goto L46;
}
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l5;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+8U,sj1);
goto L41;
L46:;
si0=0U;
si1=0U;
si2=1188524U;
f594(i,si0,si1,si2);
UNREACHABLE;
L42:;
si0=l0;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=8U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l15;
if(si0){
goto L40;
}
L41:;
si0=l5;
f15024(i,si0);
L40:;
si0=l12;
si0=!(si0);
if(si0){
goto L1;
}
si0=l14;
f15024(i,si0);
goto L0;
L1:;
L0:;
}

void f950(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U64 l3=0;
U32 l4=0;
U64 l5=0;
U32 l6=0;
U32 l7=0;
U64 l8=0;
U32 l9=0;
U32 l10=0;
U32 l11=0;
U32 l12=0;
U32 l13=0;
U32 si0,si1,si2,si3,si4,si5,si6,si7;
U64 sj0,sj1,sj2,sj3;
si0=l2;
sj0=i64_load(&i->m0,(U64)si0+8U);
l3=sj0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
if(si0){
goto L5;
}
sj0=l3;
sj1=1ULL;
si0=sj0 == sj1;
if(si0){
goto L4;
}
L5:;
si0=l1;
sj0=i64_load(&i->m0,(U64)si0+8U);
l5=sj0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
if(si0){
goto L6;
}
sj0=l5;
si0=!(sj0);
if(si0){
goto L3;
}
L6:;
si0=l6;
si0=!(si0);
si1=l0;
sj1=i64_load(&i->m0,(U64)si1+8U);
l8=sj1;
si1=!(sj1);
si0&=si1;
if(si0){
goto L1;
}
si0=l7;
si0=!(si0);
sj1=l5;
sj2=1ULL;
si1=sj1 == sj2;
si0&=si1;
if(si0){
goto L1;
}
si0=l6;
if(si0){
goto L2;
}
sj0=l8;
sj1=1ULL;
si0=sj0 == sj1;
if(si0){
goto L1;
}
si0=l7;
si1=l4;
si0|=si1;
if(si0){
goto L2;
}
si0=l0;
sj1=l8;
sj2=l5;
sj3=l3;
sj1=f1222(i,sj1,sj2,sj3);
i64_store(&i->m0,(U64)si0+8U,sj1);
goto L0;
L4:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L7;
}
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
f15024(i,si0);
L7:;
si0=l0;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=8U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
goto L1;
L3:;
si0=l6;
si0=!(si0);
if(si0){
goto L8;
}
si0=l0;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L8;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+4U);
f15024(i,si0);
L8:;
si0=l0;
si1=8U;
si0+=si1;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+1186632U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+1186624U);
i64_store(&i->m0,(U64)si0,sj1);
goto L0;
L2:;
si0=l4;
if(si0){
goto L23;
}
sj0=l3;
si0=!(sj0);
si0=!(si0);
if(si0){
goto L22;
}
goto L19;
L23:;
sj0=l3;
sj1=32ULL;
sj0>>=(sj1&63);
si0=(U32)(sj0);
l9=si0;
si0=!(si0);
if(si0){
goto L19;
}
si0=l9;
si1=268435455U;
si0=si0 > si1;
if(si0){
goto L17;
}
si0=l9;
si1=3U;
si0<<=(si1&31);
l10=si0;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L17;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0+4U);
l2=si0;
si0=l10;
if(si0){
goto L24;
}
si0=8U;
l11=si0;
goto L21;
L24:;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=l10;
si0=f15022(i,si0);
l11=si0;
if(si0){
goto L21;
}
si0=8U;
si1=l10;
f52(i,si0,si1);
UNREACHABLE;
L22:;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=8U;
l10=si0;
si0=8U;
si0=f15022(i,si0);
l11=si0;
si0=!(si0);
if(si0){
goto L25;
}
si0=l11;
sj1=l3;
i64_store(&i->m0,(U64)si0,sj1);
si0=1U;
l9=si0;
goto L20;
L25:;
si0=8U;
si1=8U;
f52(i,si0,si1);
UNREACHABLE;
L21:;
si0=l11;
si1=l2;
si2=l10;
si0=f15143(i,si0,si1,si2);
L20:;
si0=0U;
l12=si0;
si0=l10;
si1=1U;
si0=f15026(i,si0,si1);
l4=si0;
if(si0){
goto L18;
}
si0=8U;
si1=l10;
f52(i,si0,si1);
UNREACHABLE;
L19:;
si0=0U;
l9=si0;
si0=8U;
l11=si0;
si0=1U;
l12=si0;
si0=8U;
l4=si0;
L18:;
si0=l6;
si0=!(si0);
if(si0){
goto L27;
}
sj0=l8;
sj1=32ULL;
sj0>>=(sj1&63);
si0=(U32)(sj0);
l10=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+4U);
l2=si0;
goto L26;
L27:;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=8U;
si0=f15022(i,si0);
l2=si0;
si0=!(si0);
if(si0){
goto L14;
}
si0=l0;
sj1=4294967297ULL;
i64_store(&i->m0,(U64)si0+8U,sj1);
si0=l0;
si1=l2;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l2;
sj1=l8;
i64_store(&i->m0,(U64)si0,sj1);
si0=1U;
l10=si0;
si0=l0;
si1=1U;
i32_store(&i->m0,(U64)si0,si1);
L26:;
si0=l7;
if(si0){
goto L28;
}
sj0=l5;
sj1=0ULL;
si0=sj0 != sj1;
if(si0){
goto L15;
}
si0=l4;
si1=l9;
si2=l2;
si3=l10;
si4=8U;
si5=0U;
si6=l11;
si7=l9;
f1130(i,si0,si1,si2,si3,si4,si5,si6,si7);
goto L9;
L28:;
sj0=l5;
sj1=32ULL;
sj0>>=(sj1&63);
si0=(U32)(sj0);
l6=si0;
si0=!(si0);
if(si0){
goto L12;
}
si0=l6;
si1=268435455U;
si0=si0 > si1;
if(si0){
goto L17;
}
si0=l6;
si1=3U;
si0<<=(si1&31);
l7=si0;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L17;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
l13=si0;
si0=l7;
if(si0){
goto L16;
}
si0=8U;
l1=si0;
goto L11;
L17:;
f53(i);
UNREACHABLE;
L16:;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=l7;
si0=f15022(i,si0);
l1=si0;
if(si0){
goto L11;
}
si0=8U;
si1=l7;
f52(i,si0,si1);
UNREACHABLE;
L15:;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=8U;
si0=f15022(i,si0);
l1=si0;
si0=!(si0);
if(si0){
goto L13;
}
si0=l1;
sj1=l5;
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=l9;
si2=l2;
si3=l10;
si4=l1;
si5=1U;
si6=l11;
si7=l9;
f1130(i,si0,si1,si2,si3,si4,si5,si6,si7);
goto L10;
L14:;
si0=8U;
si1=8U;
f52(i,si0,si1);
UNREACHABLE;
L13:;
si0=8U;
si1=8U;
f52(i,si0,si1);
UNREACHABLE;
L12:;
si0=l4;
si1=l9;
si2=l2;
si3=l10;
si4=8U;
si5=l6;
si6=l11;
si7=l9;
f1130(i,si0,si1,si2,si3,si4,si5,si6,si7);
goto L9;
L11:;
si0=l4;
si1=l9;
si2=l2;
si3=l10;
si4=l1;
si5=l13;
si6=l7;
si4=f15143(i,si4,si5,si6);
si5=l6;
si6=l11;
si7=l9;
f1130(i,si0,si1,si2,si3,si4,si5,si6,si7);
L10:;
si0=l1;
f15024(i,si0);
L9:;
si0=l9;
si1=3U;
si0<<=(si1&31);
l2=si0;
si0=l9;
sj0=(U64)(si0);
l5=sj0;
si0=-1U;
l1=si0;
L32:;
{
sj0=0ULL;
l3=sj0;
si0=l2;
si0=!(si0);
if(si0){
goto L31;
}
si0=l1;
si1=1U;
si0+=si1;
l1=si0;
si0=l2;
si1=-8U;
si0+=si1;
l2=si0;
si1=l4;
si0+=si1;
sj0=i64_load(&i->m0,(U64)si0);
si0=!(sj0);
if(si0){
goto L32;
}
}
si0=l9;
si1=l1;
si0-=si1;
l2=si0;
switch(si0){
case 0:
goto L31;
case 1:
goto L33;
default:
goto L34;
}
L34:;
si0=l9;
si1=l2;
si2=l9;
si3=l2;
si2=si2 < si3;
si0=si2?si0:si1;
sj0=(U64)(si0);
sj1=32ULL;
sj0<<=(sj1&63);
sj1=l5;
sj0|=sj1;
l3=sj0;
si0=1U;
l2=si0;
goto L30;
L33:;
si0=l12;
if(si0){
goto L29;
}
si0=l4;
sj0=i64_load(&i->m0,(U64)si0);
l3=sj0;
L31:;
si0=0U;
l2=si0;
si0=l9;
si0=!(si0);
if(si0){
goto L35;
}
si0=l4;
f15024(i,si0);
L35:;
si0=0U;
l4=si0;
L30:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+8U);
si0=!(si0);
if(si0){
goto L36;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+4U);
f15024(i,si0);
L36:;
si0=l0;
sj1=l3;
i64_store(&i->m0,(U64)si0+8U,sj1);
si0=l0;
si1=l4;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l2;
i32_store(&i->m0,(U64)si0,si1);
si0=l9;
si0=!(si0);
if(si0){
goto L1;
}
si0=l11;
f15024(i,si0);
goto L0;
L29:;
si0=0U;
si1=0U;
si2=1188524U;
f594(i,si0,si1,si2);
UNREACHABLE;
L1:;
L0:;
}

void f951(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 si0,si1,si2,si3,si4;
U64 sj0,sj1,sj2;
si0=i->g0;
si1=16U;
si0-=si1;
l3=si0;
i->g0=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L2;
}
si0=l0;
si1=l2;
si2=l1;
sj2=i64_load(&i->m0,(U64)si2+8U);
f952(i,si0,si1,sj2);
goto L1;
L2:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L3;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0+4U);
l4=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
l5=si0;
si0=l1;
si1=12U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si1=l2;
si2=12U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
l2=si1;
si0=si0 >= si1;
if(si0){
goto L5;
}
si0=l3;
si1=4U;
si0+=si1;
si1=l4;
si2=l2;
si3=l5;
si4=l1;
f1131(i,si0,si1,si2,si3,si4);
goto L4;
L5:;
si0=l3;
si1=4U;
si0+=si1;
si1=l5;
si2=l1;
si3=l4;
si4=l2;
f1131(i,si0,si1,si2,si3,si4);
L4:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+12U);
l5=si0;
si1=3U;
si0<<=(si1&31);
l1=si0;
si0=-1U;
l2=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+4U);
l4=si0;
L8:;
{
si0=l1;
si0=!(si0);
if(si0){
goto L7;
}
si0=l2;
si1=1U;
si0+=si1;
l2=si0;
si0=l1;
si1=-8U;
si0+=si1;
l1=si0;
si1=l4;
si0+=si1;
sj0=i64_load(&i->m0,(U64)si0);
si0=!(sj0);
if(si0){
goto L8;
}
}
si0=l5;
si1=l2;
si0-=si1;
l1=si0;
switch(si0){
case 0:
goto L7;
case 1:
goto L9;
default:
goto L10;
}
L10:;
si0=l5;
si1=l1;
si0=si0 < si1;
if(si0){
goto L11;
}
si0=l3;
si1=l1;
i32_store(&i->m0,(U64)si0+12U,si1);
L11:;
si0=l0;
si1=l3;
sj1=i64_load(&i->m0,(U64)si1+4U);
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l0;
si1=1U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=12U;
si0+=si1;
si1=l3;
si2=12U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
goto L1;
L9:;
si0=l5;
si0=!(si0);
if(si0){
goto L12;
}
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+8U,sj1);
goto L6;
L12:;
si0=0U;
si1=0U;
si2=1188524U;
f594(i,si0,si1,si2);
UNREACHABLE;
L7:;
si0=l0;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=8U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
L6:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+8U);
si0=!(si0);
if(si0){
goto L1;
}
si0=l4;
f15024(i,si0);
goto L1;
L3:;
si0=l0;
si1=l1;
si2=l2;
sj2=i64_load(&i->m0,(U64)si2+8U);
f952(i,si0,si1,sj2);
L1:;
si0=l3;
si1=16U;
si0+=si1;
i->g0=si0;
L0:;
}

void f952(rustpythonInstance*i,U32 l0,U32 l1,U64 l2) {
U32 l3=0;
U64 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 l8=0;
U32 si0,si1,si2,si3;
U64 sj0,sj1,sj2,sj3,sj4;
si0=i->g0;
si1=16U;
si0-=si1;
l3=si0;
i->g0=si0;
sj0=l2;
sj1=1ULL;
si0=sj0 > sj1;
if(si0){
goto L8;
}
sj0=l2;
si0=(U32)(sj0);
switch(si0){
case 0:
goto L9;
case 1:
goto L10;
default:
goto L9;
}
L10:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L7;
}
si0=l1;
sj0=i64_load(&i->m0,(U64)si0+8U);
l4=sj0;
si0=0U;
l1=si0;
goto L5;
L9:;
si0=l0;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=8U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
goto L1;
L8:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L6;
}
si0=l0;
si1=4U;
si0+=si1;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+4U);
si2=l1;
si3=12U;
si2+=si3;
si2=i32_load(&i->m0,(U64)si2);
sj3=l2;
f1030(i,si0,si1,si2,sj3);
si0=l0;
si1=1U;
i32_store(&i->m0,(U64)si0,si1);
goto L1;
L7:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
l5=si0;
si0=8U;
l6=si0;
si0=0U;
l7=si0;
si0=l1;
si1=12U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si0=!(si0);
if(si0){
goto L13;
}
si0=l1;
si1=268435455U;
si0=si0 > si1;
if(si0){
goto L12;
}
si0=l1;
si1=3U;
si0<<=(si1&31);
l8=si0;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L12;
}
si0=l8;
si0=!(si0);
if(si0){
goto L13;
}
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=l8;
si0=f15022(i,si0);
l6=si0;
si0=!(si0);
if(si0){
goto L11;
}
si0=l8;
l7=si0;
L13:;
si0=l6;
si1=l5;
si2=l7;
si0=f15143(i,si0,si1,si2);
si0=l1;
sj0=(U64)(si0);
l2=sj0;
sj1=32ULL;
sj0<<=(sj1&63);
sj1=l2;
sj0|=sj1;
l4=sj0;
si0=1U;
l1=si0;
goto L5;
L12:;
f53(i);
UNREACHABLE;
L11:;
si0=8U;
si1=l8;
f52(i,si0,si1);
UNREACHABLE;
L6:;
si0=l1;
sj0=i64_load(&i->m0,(U64)si0+8U);
l4=sj0;
sj1=1ULL;
si0=sj0 > sj1;
if(si0){
goto L15;
}
si0=0U;
l1=si0;
sj0=l4;
si0=(U32)(sj0);
switch(si0){
case 0:
goto L5;
case 1:
goto L14;
default:
goto L5;
}
L15:;
si0=l3;
sj1=l4;
sj2=0ULL;
sj3=l2;
sj4=0ULL;
f15157(i,si0,sj1,sj2,sj3,sj4);
si0=l3;
sj0=i64_load(&i->m0,(U64)si0);
l2=sj0;
si0=l3;
si1=8U;
si0+=si1;
sj0=i64_load(&i->m0,(U64)si0);
l4=sj0;
si0=!(sj0);
si0=!(si0);
if(si0){
goto L4;
}
si0=0U;
l6=si0;
goto L3;
L14:;
si0=l0;
sj1=l2;
i64_store(&i->m0,(U64)si0+8U,sj1);
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
goto L1;
L5:;
si0=l0;
sj1=l4;
i64_store(&i->m0,(U64)si0+8U,sj1);
si0=l0;
si1=l6;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l1;
i32_store(&i->m0,(U64)si0,si1);
goto L1;
L4:;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=16U;
si0=f15022(i,si0);
l1=si0;
si0=!(si0);
if(si0){
goto L2;
}
si0=l1;
sj1=l4;
i64_store(&i->m0,(U64)si0+8U,sj1);
si0=l1;
sj1=l2;
i64_store(&i->m0,(U64)si0,sj1);
si0=1U;
l6=si0;
sj0=8589934594ULL;
l2=sj0;
L3:;
si0=l0;
sj1=l2;
i64_store(&i->m0,(U64)si0+8U,sj1);
si0=l0;
si1=l1;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l6;
i32_store(&i->m0,(U64)si0,si1);
goto L1;
L2:;
si0=8U;
si1=16U;
f52(i,si0,si1);
UNREACHABLE;
L1:;
si0=l3;
si1=16U;
si0+=si1;
i->g0=si0;
L0:;
}

void f953(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U64 l7=0;
U32 l8=0;
U32 si0,si1,si2,si3,si4;
U64 sj0,sj1;
si0=i->g0;
si1=16U;
si0-=si1;
l2=si0;
i->g0=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L5;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L4;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
l3=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+4U);
l4=si0;
si0=l0;
si1=12U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si1=l1;
si2=12U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
l6=si1;
si0=si0 >= si1;
if(si0){
goto L7;
}
si0=l2;
si1=4U;
si0+=si1;
si1=l3;
si2=l6;
si3=l4;
si4=l5;
f1131(i,si0,si1,si2,si3,si4);
goto L6;
L7:;
si0=l2;
si1=4U;
si0+=si1;
si1=l4;
si2=l5;
si3=l3;
si4=l6;
f1131(i,si0,si1,si2,si3,si4);
L6:;
si0=l0;
si1=4U;
si0+=si1;
l3=si0;
si0=l0;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L9;
}
si0=l3;
si1=l2;
sj1=i64_load(&i->m0,(U64)si1+4U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=8U;
si0+=si1;
si1=l2;
si2=4U;
si1+=si2;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
goto L8;
L9:;
si0=l4;
f15024(i,si0);
si0=l3;
si1=l2;
sj1=i64_load(&i->m0,(U64)si1+4U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=8U;
si0+=si1;
si1=l2;
si2=4U;
si1+=si2;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L2;
}
L8:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+4U);
l5=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+12U);
l6=si0;
if(si0){
goto L10;
}
sj0=0ULL;
l7=sj0;
goto L3;
L10:;
si0=l6;
si1=3U;
si0<<=(si1&31);
l3=si0;
si0=l6;
si1=-1U;
si0+=si1;
si1=536870911U;
si0&=si1;
si1=1U;
si0+=si1;
l8=si0;
si0=0U;
l4=si0;
L14:;
{
si0=l5;
si1=l3;
si0+=si1;
si1=-8U;
si0+=si1;
sj0=i64_load(&i->m0,(U64)si0);
sj1=0ULL;
si0=sj0 != sj1;
if(si0){
goto L13;
}
si0=l4;
si1=-1U;
si0+=si1;
l4=si0;
si0=l3;
si1=-8U;
si0+=si1;
l3=si0;
if(si0){
goto L14;
}
goto L12;
}
L13:;
si0=l4;
si0=!(si0);
if(si0){
goto L11;
}
si0=0U;
si1=l4;
si0-=si1;
l8=si0;
L12:;
si0=l6;
si1=l8;
si0=si0 < si1;
if(si0){
goto L11;
}
si0=l0;
si1=l6;
si2=l8;
si1-=si2;
l6=si1;
i32_store(&i->m0,(U64)si0+12U,si1);
L11:;
sj0=0ULL;
l7=sj0;
si0=l6;
switch(si0){
case 0:
goto L3;
case 1:
goto L15;
default:
goto L2;
}
L15:;
si0=l5;
sj0=i64_load(&i->m0,(U64)si0);
l7=sj0;
goto L3;
L5:;
si0=l1;
si1=l0;
si2=8U;
si1+=si2;
l3=si1;
sj1=i64_load(&i->m0,(U64)si1);
f954(i,si0,sj1);
si0=l3;
si1=l1;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=l1;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
goto L1;
L4:;
si0=l0;
si1=l1;
sj1=i64_load(&i->m0,(U64)si1+8U);
f954(i,si0,sj1);
goto L1;
L3:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+8U);
si0=!(si0);
if(si0){
goto L16;
}
si0=l5;
f15024(i,si0);
L16:;
si0=l0;
sj1=l7;
i64_store(&i->m0,(U64)si0+8U,sj1);
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
L2:;
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
f15024(i,si0);
L1:;
si0=l2;
si1=16U;
si0+=si1;
i->g0=si0;
L0:;
}

void f954(rustpythonInstance*i,U32 l0,U64 l1) {
U32 l2=0;
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U64 l8=0;
U64 l9=0;
U64 l10=0;
U32 si0,si1,si2,si3;
U64 sj0,sj1,sj2,sj3,sj4;
si0=i->g0;
si1=96U;
si0-=si1;
l2=si0;
i->g0=si0;
sj0=l1;
sj1=1ULL;
si0=sj0 > sj1;
if(si0){
goto L2;
}
sj0=l1;
si0=(U32)(sj0);
switch(si0){
case 0:
goto L3;
case 1:
goto L1;
default:
goto L3;
}
L3:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L4;
}
si0=l0;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L4;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+4U);
f15024(i,si0);
L4:;
si0=l0;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=8U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
goto L1;
L2:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L5;
}
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
si0=i32_load(&i->m0,(U64)si0+4U);
l4=si0;
si0=l3;
si1=-1U;
si0+=si1;
si1=536870911U;
si0&=si1;
l5=si0;
si1=1U;
si0+=si1;
l6=si0;
si1=3U;
si0&=si1;
l7=si0;
si0=l5;
si1=3U;
si0=si0 >= si1;
if(si0){
goto L7;
}
sj0=0ULL;
l8=sj0;
goto L6;
L7:;
si0=l6;
si1=1073741820U;
si0&=si1;
l5=si0;
sj0=0ULL;
l8=sj0;
L8:;
{
si0=l2;
si1=32U;
si0+=si1;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1);
sj2=0ULL;
sj3=l1;
sj4=0ULL;
f15157(i,si0,sj1,sj2,sj3,sj4);
si0=l4;
si1=l2;
sj1=i64_load(&i->m0,(U64)si1+32U);
l9=sj1;
sj2=l8;
sj1+=sj2;
l8=sj1;
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=80U;
si0+=si1;
si1=l4;
si2=8U;
si1+=si2;
l6=si1;
sj1=i64_load(&i->m0,(U64)si1);
sj2=0ULL;
sj3=l1;
sj4=0ULL;
f15157(i,si0,sj1,sj2,sj3,sj4);
si0=l6;
si1=l2;
sj1=i64_load(&i->m0,(U64)si1+80U);
l10=sj1;
si2=l2;
si3=32U;
si2+=si3;
si3=8U;
si2+=si3;
sj2=i64_load(&i->m0,(U64)si2);
sj3=l8;
sj4=l9;
si3=sj3 < sj4;
sj3=(U64)(si3);
sj2+=sj3;
sj1+=sj2;
l8=sj1;
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=64U;
si0+=si1;
si1=l4;
si2=16U;
si1+=si2;
l6=si1;
sj1=i64_load(&i->m0,(U64)si1);
sj2=0ULL;
sj3=l1;
sj4=0ULL;
f15157(i,si0,sj1,sj2,sj3,sj4);
si0=l6;
si1=l2;
sj1=i64_load(&i->m0,(U64)si1+64U);
l9=sj1;
si2=l2;
si3=80U;
si2+=si3;
si3=8U;
si2+=si3;
sj2=i64_load(&i->m0,(U64)si2);
sj3=l8;
sj4=l10;
si3=sj3 < sj4;
sj3=(U64)(si3);
sj2+=sj3;
sj1+=sj2;
l8=sj1;
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=48U;
si0+=si1;
si1=l4;
si2=24U;
si1+=si2;
l6=si1;
sj1=i64_load(&i->m0,(U64)si1);
sj2=0ULL;
sj3=l1;
sj4=0ULL;
f15157(i,si0,sj1,sj2,sj3,sj4);
si0=l6;
si1=l2;
sj1=i64_load(&i->m0,(U64)si1+48U);
l10=sj1;
si2=l2;
si3=64U;
si2+=si3;
si3=8U;
si2+=si3;
sj2=i64_load(&i->m0,(U64)si2);
sj3=l8;
sj4=l9;
si3=sj3 < sj4;
sj3=(U64)(si3);
sj2+=sj3;
sj1+=sj2;
l8=sj1;
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=32U;
si0+=si1;
l4=si0;
si0=l2;
si1=48U;
si0+=si1;
si1=8U;
si0+=si1;
sj0=i64_load(&i->m0,(U64)si0);
sj1=l8;
sj2=l10;
si1=sj1 < sj2;
sj1=(U64)(si1);
sj0+=sj1;
l8=sj0;
si0=l5;
si1=-4U;
si0+=si1;
l5=si0;
if(si0){
goto L8;
}
}
L6:;
si0=l7;
si0=!(si0);
if(si0){
goto L9;
}
L10:;
{
si0=l2;
si1=16U;
si0+=si1;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1);
sj2=0ULL;
sj3=l1;
sj4=0ULL;
f15157(i,si0,sj1,sj2,sj3,sj4);
si0=l4;
si1=l2;
sj1=i64_load(&i->m0,(U64)si1+16U);
l9=sj1;
sj2=l8;
sj1+=sj2;
l8=sj1;
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=8U;
si0+=si1;
l4=si0;
si0=l2;
si1=16U;
si0+=si1;
si1=8U;
si0+=si1;
sj0=i64_load(&i->m0,(U64)si0);
sj1=l8;
sj2=l9;
si1=sj1 < sj2;
sj1=(U64)(si1);
sj0+=sj1;
l8=sj0;
si0=l7;
si1=-1U;
si0+=si1;
l7=si0;
if(si0){
goto L10;
}
}
L9:;
sj0=l8;
si0=!(sj0);
if(si0){
goto L1;
}
si0=l3;
si1=l0;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
si0=si0 != si1;
if(si0){
goto L11;
}
si0=l0;
si1=4U;
si0+=si1;
si1=l3;
f1299(i,si0,si1);
si0=l0;
si0=i32_load(&i->m0,(U64)si0+12U);
l3=si0;
L11:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+4U);
si1=l3;
si2=3U;
si1<<=(si2&31);
si0+=si1;
sj1=l8;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+12U);
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0+12U,si1);
goto L1;
L5:;
si0=l0;
sj0=i64_load(&i->m0,(U64)si0+8U);
l8=sj0;
sj1=1ULL;
si0=sj0 > sj1;
if(si0){
goto L12;
}
sj0=l8;
si0=(U32)(sj0);
switch(si0){
case 0:
goto L1;
case 1:
goto L13;
default:
goto L1;
}
L13:;
si0=l0;
sj1=l1;
i64_store(&i->m0,(U64)si0+8U,sj1);
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
goto L1;
L12:;
si0=l2;
sj1=l8;
sj2=0ULL;
sj3=l1;
sj4=0ULL;
f15157(i,si0,sj1,sj2,sj3,sj4);
si0=l2;
sj0=i64_load(&i->m0,(U64)si0);
l1=sj0;
si0=l2;
si1=8U;
si0+=si1;
sj0=i64_load(&i->m0,(U64)si0);
l8=sj0;
si0=!(sj0);
if(si0){
goto L14;
}
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=16U;
si0=f15022(i,si0);
l4=si0;
if(si0){
goto L15;
}
si0=8U;
si1=16U;
f52(i,si0,si1);
UNREACHABLE;
L15:;
si0=l4;
sj1=l8;
i64_store(&i->m0,(U64)si0+8U,sj1);
si0=l4;
sj1=l1;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
sj1=8589934594ULL;
i64_store(&i->m0,(U64)si0+8U,sj1);
si0=l0;
si1=l4;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=1U;
i32_store(&i->m0,(U64)si0,si1);
goto L1;
L14:;
si0=l0;
sj1=l1;
i64_store(&i->m0,(U64)si0+8U,sj1);
L1:;
si0=l2;
si1=96U;
si0+=si1;
i->g0=si0;
L0:;
}

void f955(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 l3=0;
U32 l4=0;
U32 l5=0;
U64 l6=0;
U32 l7=0;
U32 si0,si1,si2,si3,si4;
U64 sj0,sj1,sj2;
si0=i->g0;
si1=16U;
si0-=si1;
l2=si0;
i->g0=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L2;
}
si0=l0;
si1=l1;
si2=l0;
sj2=i64_load(&i->m0,(U64)si2+8U);
f952(i,si0,si1,sj2);
goto L1;
L2:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L3;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
l3=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+4U);
l4=si0;
si0=l0;
si1=12U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si1=l1;
si2=12U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
l1=si1;
si0=si0 >= si1;
if(si0){
goto L5;
}
si0=l2;
si1=4U;
si0+=si1;
si1=l3;
si2=l1;
si3=l4;
si4=l5;
f1131(i,si0,si1,si2,si3,si4);
goto L4;
L5:;
si0=l2;
si1=4U;
si0+=si1;
si1=l4;
si2=l5;
si3=l3;
si4=l1;
f1131(i,si0,si1,si2,si3,si4);
L4:;
si0=l0;
si1=4U;
si0+=si1;
l1=si0;
si0=l0;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L7;
}
si0=l1;
si1=l2;
sj1=i64_load(&i->m0,(U64)si1+4U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si1=8U;
si0+=si1;
si1=l2;
si2=4U;
si1+=si2;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
goto L6;
L7:;
si0=l4;
f15024(i,si0);
si0=l1;
si1=l2;
sj1=i64_load(&i->m0,(U64)si1+4U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si1=8U;
si0+=si1;
si1=l2;
si2=4U;
si1+=si2;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L1;
}
L6:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+4U);
l3=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+12U);
l5=si0;
if(si0){
goto L9;
}
sj0=0ULL;
l6=sj0;
goto L8;
L9:;
si0=l5;
si1=3U;
si0<<=(si1&31);
l1=si0;
si0=l5;
si1=-1U;
si0+=si1;
si1=536870911U;
si0&=si1;
si1=1U;
si0+=si1;
l7=si0;
si0=0U;
l4=si0;
L13:;
{
si0=l3;
si1=l1;
si0+=si1;
si1=-8U;
si0+=si1;
sj0=i64_load(&i->m0,(U64)si0);
sj1=0ULL;
si0=sj0 != sj1;
if(si0){
goto L12;
}
si0=l4;
si1=-1U;
si0+=si1;
l4=si0;
si0=l1;
si1=-8U;
si0+=si1;
l1=si0;
if(si0){
goto L13;
}
goto L11;
}
L12:;
si0=l4;
si0=!(si0);
if(si0){
goto L10;
}
si0=0U;
si1=l4;
si0-=si1;
l7=si0;
L11:;
si0=l5;
si1=l7;
si0=si0 < si1;
if(si0){
goto L10;
}
si0=l0;
si1=l5;
si2=l7;
si1-=si2;
l5=si1;
i32_store(&i->m0,(U64)si0+12U,si1);
L10:;
sj0=0ULL;
l6=sj0;
si0=l5;
switch(si0){
case 0:
goto L8;
case 1:
goto L14;
default:
goto L1;
}
L14:;
si0=l3;
sj0=i64_load(&i->m0,(U64)si0);
l6=sj0;
L8:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+8U);
si0=!(si0);
if(si0){
goto L15;
}
si0=l3;
f15024(i,si0);
L15:;
si0=l0;
sj1=l6;
i64_store(&i->m0,(U64)si0+8U,sj1);
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
goto L1;
L3:;
si0=l0;
si1=l1;
sj1=i64_load(&i->m0,(U64)si1+8U);
f954(i,si0,sj1);
L1:;
si0=l2;
si1=16U;
si0+=si1;
i->g0=si0;
L0:;
}

void f956(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 si0,si1,si2,si3;
U64 sj0,sj1;
si0=i->g0;
si1=16U;
si0-=si1;
l2=si0;
i->g0=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L2;
}
si0=l0;
si1=l1;
sj1=i64_load(&i->m0,(U64)si1+8U);
sj1=f1104(i,sj1);
i64_store(&i->m0,(U64)si0+8U,sj1);
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
goto L1;
L2:;
si0=l2;
si1=4U;
si0+=si1;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+4U);
si2=l1;
si3=12U;
si2+=si3;
si2=i32_load(&i->m0,(U64)si2);
f1247(i,si0,si1,si2);
si0=l2;
si0=i32_load(&i->m0,(U64)si0+12U);
l3=si0;
si1=3U;
si0<<=(si1&31);
l1=si0;
si0=-1U;
l4=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+4U);
l5=si0;
L5:;
{
si0=l1;
si0=!(si0);
if(si0){
goto L4;
}
si0=l4;
si1=1U;
si0+=si1;
l4=si0;
si0=l1;
si1=-8U;
si0+=si1;
l1=si0;
si1=l5;
si0+=si1;
sj0=i64_load(&i->m0,(U64)si0);
si0=!(sj0);
if(si0){
goto L5;
}
}
si0=l3;
si1=l4;
si0-=si1;
l1=si0;
switch(si0){
case 0:
goto L4;
case 1:
goto L6;
default:
goto L7;
}
L7:;
si0=l3;
si1=l1;
si0=si0 < si1;
if(si0){
goto L8;
}
si0=l2;
si1=l1;
i32_store(&i->m0,(U64)si0+12U,si1);
L8:;
si0=l0;
si1=l2;
sj1=i64_load(&i->m0,(U64)si1+4U);
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l0;
si1=1U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=12U;
si0+=si1;
si1=l2;
si2=12U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
goto L1;
L6:;
si0=l3;
si0=!(si0);
if(si0){
goto L9;
}
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l5;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+8U,sj1);
goto L3;
L9:;
si0=0U;
si1=0U;
si2=1188524U;
f594(i,si0,si1,si2);
UNREACHABLE;
L4:;
si0=l0;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=8U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
L3:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+8U);
si0=!(si0);
if(si0){
goto L1;
}
si0=l5;
f15024(i,si0);
L1:;
si0=l2;
si1=16U;
si0+=si1;
i->g0=si0;
L0:;
}

U32 f957(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U64 l3=0;
U32 l4=0;
U64 l5=0;
U32 l6=0;
U32 l7=0;
U64 l8=0;
U64 l9=0;
U32 si0,si1,si2,si3,si4;
U64 sj0,sj1,sj2,sj3;
si0=i->g0;
si1=32U;
si0-=si1;
l2=si0;
i->g0=si0;
si0=l0;
sj0=i64_load(&i->m0,(U64)si0+8U);
l3=sj0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
if(si0){
goto L4;
}
sj0=l3;
si0=!(sj0);
if(si0){
goto L3;
}
L4:;
si0=l1;
sj0=i64_load(&i->m0,(U64)si0+8U);
l5=sj0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
if(si0){
goto L7;
}
sj0=l5;
si0=!(sj0);
if(si0){
goto L6;
}
L7:;
si0=l0;
si1=l1;
si0=si0 != si1;
if(si0){
goto L5;
}
si0=0U;
l0=si0;
goto L1;
L6:;
si0=l2;
si1=0U;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=1U;
si1=l1;
si2=1187280U;
si3=l2;
si4=8U;
si3+=si4;
si4=1188364U;
f1254(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L5:;
sj0=l5;
sj1=32ULL;
sj0>>=(sj1&63);
si0=(U32)(sj0);
l7=si0;
si0=l4;
if(si0){
goto L8;
}
si0=l6;
if(si0){
goto L12;
}
si0=255U;
l0=si0;
si0=-1U;
sj1=l3;
sj1=I64_CLZ(sj1);
l8=sj1;
si1=(U32)(sj1);
l1=si1;
sj2=l5;
sj2=I64_CLZ(sj2);
l9=sj2;
si2=(U32)(sj2);
l4=si2;
si1=si1 != si2;
si2=l1;
si3=l4;
si2=si2 < si3;
si0=si2?si0:si1;
si1=255U;
si0&=si1;
switch(si0){
case 0:
goto L10;
case 1:
goto L9;
default:
goto L11;
}
L12:;
si0=l2;
sj1=l3;
i64_store(&i->m0,(U64)si0+8U,sj1);
si0=l2;
si1=8U;
si0+=si1;
si1=1U;
si2=l1;
si2=i32_load(&i->m0,(U64)si2+4U);
si3=l7;
si0=f1163(i,si0,si1,si2,si3);
l0=si0;
goto L1;
L11:;
sj0=l3;
sj1=l5;
sj2=l9;
sj3=l8;
sj2-=sj3;
sj1<<=(sj2&63);
l5=sj1;
si0=sj0 < sj1;
if(si0){
goto L1;
}
sj0=l3;
sj1=l5;
si0=sj0 != sj1;
l0=si0;
goto L1;
L10:;
sj0=l3;
sj1=l5;
si0=sj0 < sj1;
if(si0){
goto L1;
}
sj0=l3;
sj1=l5;
si0=sj0 != sj1;
l0=si0;
goto L1;
L9:;
sj0=l3;
sj1=l8;
sj2=l9;
sj1-=sj2;
sj0<<=(sj1&63);
l3=sj0;
sj1=l5;
si0=sj0 < sj1;
if(si0){
goto L1;
}
sj0=l3;
sj1=l5;
si0=sj0 != sj1;
l0=si0;
goto L1;
L8:;
sj0=l3;
sj1=32ULL;
sj0>>=(sj1&63);
si0=(U32)(sj0);
l4=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+4U);
l0=si0;
si0=l6;
si0=!(si0);
if(si0){
goto L2;
}
si0=l0;
si1=l4;
si2=l1;
si2=i32_load(&i->m0,(U64)si2+4U);
si3=l7;
si0=f1163(i,si0,si1,si2,si3);
l0=si0;
goto L1;
L3:;
si0=l2;
si1=0U;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=1U;
si1=l0;
si2=1187280U;
si3=l2;
si4=8U;
si3+=si4;
si4=1188380U;
f1254(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L2:;
si0=l2;
sj1=l5;
i64_store(&i->m0,(U64)si0+8U,sj1);
si0=l0;
si1=l4;
si2=l2;
si3=8U;
si2+=si3;
si3=1U;
si0=f1163(i,si0,si1,si2,si3);
l0=si0;
L1:;
si0=l2;
si1=32U;
si0+=si1;
i->g0=si0;
si0=l0;
L0:;
return si0;
}

void f958(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 si0,si1,si2;
U64 sj0,sj1;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+8U);
l2=si0;
si1=3U;
si0<<=(si1&31);
l3=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
si0=-1U;
l5=si0;
L4:;
{
si0=l3;
si0=!(si0);
if(si0){
goto L3;
}
si0=l5;
si1=1U;
si0+=si1;
l5=si0;
si0=l3;
si1=-8U;
si0+=si1;
l3=si0;
si1=l4;
si0+=si1;
sj0=i64_load(&i->m0,(U64)si0);
si0=!(sj0);
if(si0){
goto L4;
}
}
si0=l2;
si1=l5;
si0-=si1;
l3=si0;
switch(si0){
case 0:
goto L3;
case 1:
goto L5;
default:
goto L6;
}
L6:;
si0=l2;
si1=l3;
si0=si0 < si1;
if(si0){
goto L7;
}
si0=l1;
si1=l3;
i32_store(&i->m0,(U64)si0+8U,si1);
L7:;
si0=l0;
si1=1U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l1;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l0;
si1=12U;
si0+=si1;
si1=l1;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
goto L1;
L5:;
si0=l2;
si0=!(si0);
if(si0){
goto L8;
}
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+8U,sj1);
goto L2;
L8:;
si0=0U;
si1=0U;
si2=1188524U;
f594(i,si0,si1,si2);
UNREACHABLE;
L3:;
si0=l0;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=8U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
L2:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
si0=!(si0);
if(si0){
goto L1;
}
si0=l4;
f15024(i,si0);
goto L0;
L1:;
L0:;
}

void f959(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U64 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U64 l8=0;
U64 l9=0;
U64 l10=0;
U32 l11=0;
U64 l12=0;
U64 l13=0;
F64 l14=0;
F64 l15=0;
U32 si0,si1,si2,si3,si4;
U64 sj0,sj1,sj2,sj3,sj4;
F64 sd0,sd1,sd2,sd3;
si0=i->g0;
si1=64U;
si0-=si1;
l3=si0;
i->g0=si0;
si0=l1;
sj0=i64_load(&i->m0,(U64)si0+8U);
l4=sj0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
if(si0){
goto L12;
}
sj0=l4;
si0=!(sj0);
if(si0){
goto L11;
}
L12:;
si0=l3;
si1=16U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=8U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=253U;
si0&=si1;
l6=si0;
si0=l5;
si0=!(si0);
if(si0){
goto L20;
}
sj0=l4;
sj1=32ULL;
sj0>>=(sj1&63);
si0=(U32)(sj0);
l7=si0;
si1=2U;
si0=si0 == si1;
if(si0){
goto L19;
}
si0=l7;
si1=-1U;
si0+=si1;
l5=si0;
si0=l7;
si0=!(si0);
if(si0){
goto L18;
}
si0=l3;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+4U);
l1=si1;
si2=l5;
si3=3U;
si2<<=(si3&31);
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
l8=sj1;
i64_store(&i->m0,(U64)si0+16U,sj1);
si0=l7;
si1=-2U;
si0+=si1;
l5=si0;
si0=l7;
si1=1U;
si0=si0 == si1;
if(si0){
goto L17;
}
si0=l3;
si1=l1;
si2=l5;
si3=3U;
si2<<=(si3&31);
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
l9=sj1;
i64_store(&i->m0,(U64)si0+8U,sj1);
si0=l7;
si1=-3U;
si0+=si1;
l5=si0;
si0=l7;
si1=2U;
si0=si0 <= si1;
if(si0){
goto L16;
}
si0=l3;
si1=l1;
si2=l5;
si3=3U;
si2<<=(si3&31);
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
l4=sj1;
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
sj0=(U64)(si0);
sj1=6ULL;
sj0<<=(sj1&63);
sj1=52ULL;
sj0|=sj1;
l10=sj0;
si0=1U;
l11=si0;
sj0=192ULL;
l12=sj0;
si0=l6;
if(si0){
goto L15;
}
sj0=l8;
l13=sj0;
goto L8;
L20:;
si0=l3;
sj1=l4;
i64_store(&i->m0,(U64)si0,sj1);
si0=255U;
l5=si0;
si0=1U;
l1=si0;
sj0=52ULL;
l13=sj0;
si0=-1U;
sj1=l4;
sj1=I64_CLZ(sj1);
l12=sj1;
sj2=11ULL;
si1=sj1 != sj2;
sj2=l4;
sj3=9007199254740991ULL;
si2=sj2 > sj3;
si0=si2?si0:si1;
si1=255U;
si0&=si1;
switch(si0){
case 0:
goto L2;
case 1:
goto L13;
default:
goto L14;
}
L19:;
si0=l3;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+4U);
l1=si1;
sj1=i64_load(&i->m0,(U64)si1);
l4=sj1;
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=l1;
sj1=i64_load(&i->m0,(U64)si1+8U);
l9=sj1;
i64_store(&i->m0,(U64)si0+8U,sj1);
sj0=52ULL;
l10=sj0;
si0=1U;
l11=si0;
sj0=128ULL;
l12=sj0;
sj0=0ULL;
l8=sj0;
sj0=l9;
l13=sj0;
goto L8;
L18:;
si0=l5;
si1=0U;
si2=1188540U;
f594(i,si0,si1,si2);
UNREACHABLE;
L17:;
si0=l5;
si1=1U;
si2=1188556U;
f594(i,si0,si1,si2);
UNREACHABLE;
L16:;
si0=l5;
si1=0U;
si2=1188572U;
f594(i,si0,si1,si2);
UNREACHABLE;
L15:;
si0=l7;
si1=3U;
si0<<=(si1&31);
si1=-24U;
si0+=si1;
l5=si0;
L21:;
{
si0=l5;
if(si0){
goto L22;
}
sj0=l8;
l13=sj0;
goto L8;
L22:;
si0=l5;
si1=-8U;
si0+=si1;
l5=si0;
si0=l1;
sj0=i64_load(&i->m0,(U64)si0);
l13=sj0;
si0=l1;
si1=8U;
si0+=si1;
l1=si0;
sj0=l13;
si0=!(sj0);
if(si0){
goto L21;
}
}
si0=l2;
si1=255U;
si0&=si1;
si1=5U;
si0=si0 == si1;
if(si0){
goto L6;
}
si0=0U;
l11=si0;
sj0=l8;
l13=sj0;
si0=l7;
si1=3U;
si0=si0 > si1;
if(si0){
goto L8;
}
si0=-1U;
si1=3U;
si2=1188588U;
f594(i,si0,si1,si2);
UNREACHABLE;
L14:;
sj0=l4;
sj1=4503599627370495ULL;
si0=sj0 <= sj1;
if(si0){
goto L10;
}
sj0=11ULL;
sj1=l12;
sj0-=sj1;
l13=sj0;
sj0=52ULL;
l10=sj0;
si0=1U;
l11=si0;
sj0=0ULL;
l8=sj0;
sj0=0ULL;
l9=sj0;
goto L7;
L13:;
sj0=l4;
sj1=9007199254740992ULL;
si0=sj0 >= sj1;
if(si0){
goto L9;
}
sj0=l12;
sj1=-11ULL;
sj0+=sj1;
l10=sj0;
si0=!(sj0);
if(si0){
goto L2;
}
sj0=l10;
sj1=63ULL;
si0=sj0 > sj1;
if(si0){
goto L23;
}
sj0=l4;
sj1=l10;
sj0<<=(sj1&63);
l4=sj0;
sj0=63ULL;
sj1=l12;
sj0-=sj1;
l13=sj0;
goto L2;
L23:;
si0=1200324U;
si1=36U;
si2=1200392U;
f604(i,si0,si1,si2);
UNREACHABLE;
L11:;
si0=l3;
si1=0U;
i32_store(&i->m0,(U64)si0+40U,si1);
si0=1U;
si1=l1;
si2=1187280U;
si3=l3;
si4=40U;
si3+=si4;
si4=1188636U;
f1254(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L10:;
si0=1186400U;
si1=43U;
si2=1186568U;
f604(i,si0,si1,si2);
UNREACHABLE;
L9:;
si0=1186400U;
si1=43U;
si2=1186568U;
f604(i,si0,si1,si2);
UNREACHABLE;
L8:;
sj0=l12;
sj1=l13;
sj1=I64_CLZ(sj1);
sj0-=sj1;
sj1=-53ULL;
sj0+=sj1;
l13=sj0;
L7:;
si0=255U;
l5=si0;
si0=l6;
if(si0){
goto L25;
}
si0=l11;
l1=si0;
goto L24;
L25:;
sj0=l4;
sj1=0ULL;
si0=sj0 != sj1;
if(si0){
goto L27;
}
si0=1U;
l1=si0;
sj0=l9;
si0=!(sj0);
si0=!(si0);
if(si0){
goto L29;
}
si0=2U;
l1=si0;
sj0=l8;
si0=!(sj0);
if(si0){
goto L28;
}
L29:;
si0=l3;
si1=l1;
si2=3U;
si1<<=(si2&31);
si0+=si1;
sj0=i64_load(&i->m0,(U64)si0);
sj0=I64_CTZ(sj0);
si1=l1;
si2=6U;
si1<<=(si2&31);
sj1=(U64)(si1);
sj0+=sj1;
l12=sj0;
goto L26;
L28:;
si0=1186400U;
si1=43U;
si2=1188604U;
f604(i,si0,si1,si2);
UNREACHABLE;
L27:;
sj0=l4;
sj0=I64_CTZ(sj0);
l12=sj0;
L26:;
sj0=l12;
sj1=l13;
si0=sj0 < sj1;
if(si0){
goto L30;
}
si0=l11;
l1=si0;
goto L24;
L30:;
si0=255U;
l5=si0;
si0=0U;
l1=si0;
si0=l2;
si1=255U;
si0&=si1;
si1=-4U;
si0+=si1;
switch(si0){
case 0:
goto L31;
case 1:
goto L6;
default:
goto L24;
}
L31:;
si0=0U;
l1=si0;
si0=l11;
sj1=l12;
sj2=l13;
sj3=-1ULL;
sj2+=sj3;
l9=sj2;
si1=sj1 == sj2;
si0&=si1;
si0=!(si0);
if(si0){
goto L32;
}
si0=0U;
l5=si0;
goto L24;
L32:;
sj0=l9;
sj1=274877906944ULL;
si0=sj0 >= sj1;
if(si0){
goto L5;
}
si0=-1U;
si1=1U;
si2=l3;
sj3=l9;
sj4=6ULL;
sj3>>=(sj4&63);
si3=(U32)(sj3);
si4=3U;
si3<<=(si4&31);
si2+=si3;
sj2=i64_load(&i->m0,(U64)si2);
sj3=1ULL;
sj4=l9;
sj3<<=(sj4&63);
sj2&=sj3;
si2=!(sj2);
si0=si2?si0:si1;
l5=si0;
L24:;
sj0=l13;
l12=sj0;
sj0=l13;
sj1=64ULL;
si0=sj0 < sj1;
if(si0){
goto L3;
}
sj0=l13;
sj1=6ULL;
sj0>>=(sj1&63);
si0=(U32)(sj0);
l7=si0;
si1=4U;
si0=si0 >= si1;
if(si0){
goto L4;
}
sj0=l13;
sj1=63ULL;
sj0&=sj1;
l12=sj0;
si0=l3;
si1=l3;
si2=l7;
si3=3U;
si2<<=(si3&31);
l7=si2;
si1+=si2;
si2=24U;
si3=l7;
si2-=si3;
si0=f15144(i,si0,si1,si2);
sj0=i64_load(&i->m0,(U64)si0);
l4=sj0;
goto L3;
L6:;
si0=l0;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
goto L1;
L5:;
si0=1232275U;
si1=43U;
si2=1232440U;
f604(i,si0,si1,si2);
UNREACHABLE;
L4:;
si0=l7;
si1=3U;
si2=1188620U;
f683(i,si0,si1,si2);
UNREACHABLE;
L3:;
sj0=l13;
sj1=l10;
sj0+=sj1;
l13=sj0;
sj0=l12;
si0=!(sj0);
if(si0){
goto L2;
}
si0=l3;
sj0=i64_load(&i->m0,(U64)si0+8U);
sj1=0ULL;
sj2=l12;
sj1-=sj2;
sj0<<=(sj1&63);
sj1=l4;
sj2=l12;
sj1>>=(sj2&63);
sj0|=sj1;
l4=sj0;
L2:;
sj0=-1ULL;
sj1=4503599627370495ULL;
sj2=l4;
si2=!(sj2);
sj0=si2?sj0:sj1;
sj1=l4;
sj0&=sj1;
l12=sj0;
sj1=4503599627370496ULL;
si0=sj0 >= sj1;
if(si0){
goto L36;
}
sd0=INFINITY;
sj1=l12;
sj2=4607182418800017408ULL;
sj1|=sj2;
l12=sj1;
sd1=f64_reinterpret_i64(sj1);
l14=sd1;
sd2=l14;
sd3=l14;
si2=sd2 != sd3;
sd0=si2?sd0:sd1;
l15=sd0;
si0=l1;
if(si0){
goto L33;
}
si0=l2;
si1=255U;
si0&=si1;
si1=-1U;
si0+=si1;
switch(si0){
case 0:
goto L37;
case 1:
goto L33;
case 2:
goto L37;
case 3:
goto L38;
default:
goto L33;
}
L38:;
si0=l5;
si1=255U;
si0&=si1;
switch(si0){
case 0:
goto L39;
case 1:
goto L37;
default:
goto L33;
}
L39:;
sj0=l4;
sj1=1ULL;
sj0&=sj1;
si0=!(sj0);
if(si0){
goto L33;
}
L37:;
si0=l3;
sd1=l15;
f64_store(&i->m0,(U64)si0+24U,sd1);
sd0=l14;
sd1=l14;
si0=sd0 != sd1;
if(si0){
goto L35;
}
si0=l3;
sj1=9218868437227405312ULL;
i64_store(&i->m0,(U64)si0+32U,sj1);
sd0=l14;
sd1=INFINITY;
si0=sd0 == sd1;
if(si0){
goto L34;
}
sj0=l12;
sj1=1ULL;
sj0+=sj1;
sd0=f64_reinterpret_i64(sj0);
l15=sd0;
sd1=2;
si0=sd0 != sd1;
if(si0){
goto L33;
}
sj0=l13;
sj1=1ULL;
sj0+=sj1;
l13=sj0;
sd0=1;
l15=sd0;
goto L33;
L36:;
si0=1231953U;
si1=70U;
si2=1232024U;
f604(i,si0,si1,si2);
UNREACHABLE;
L35:;
si0=1248488U;
si1=32U;
si2=1248520U;
f604(i,si0,si1,si2);
UNREACHABLE;
L34:;
si0=l3;
si1=0U;
i32_store(&i->m0,(U64)si0+40U,si1);
si0=1U;
si1=l3;
si2=24U;
si1+=si2;
si2=l3;
si3=32U;
si2+=si3;
si3=l3;
si4=40U;
si3+=si4;
si4=1248472U;
f1256(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L33:;
si0=l0;
sd1=l15;
f64_store(&i->m0,(U64)si0+8U,sd1);
si0=l0;
sj1=1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=16U;
si0+=si1;
sj1=l13;
i64_store(&i->m0,(U64)si0,sj1);
L1:;
si0=l3;
si1=64U;
si0+=si1;
i->g0=si0;
L0:;
}

void f960(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U64 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 l8=0;
U32 l9=0;
U32 l10=0;
U32 l11=0;
U32 si0,si1,si2,si3,si4;
U64 sj0,sj1,sj2;
si0=l2;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L6;
}
si0=l2;
sj0=i64_load(&i->m0,(U64)si0+8U);
l3=sj0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L8;
}
si0=l1;
si1=8U;
si0+=si1;
l2=si0;
goto L7;
L8:;
si0=l1;
si1=12U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L5;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
l2=si0;
L7:;
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l2;
sj1=i64_load(&i->m0,(U64)si1);
sj2=l3;
sj1&=sj2;
i64_store(&i->m0,(U64)si0+8U,sj1);
goto L1;
L6:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L2;
}
si0=l1;
si1=12U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
si1=l2;
si2=12U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
l5=si1;
si2=l4;
si3=l5;
si2=si2 < si3;
si0=si2?si0:si1;
l6=si0;
if(si0){
goto L10;
}
si0=8U;
l7=si0;
goto L9;
L10:;
si0=l6;
si1=268435455U;
si0=si0 > si1;
if(si0){
goto L4;
}
si0=l6;
si1=3U;
si0<<=(si1&31);
l4=si0;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L4;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0+4U);
l8=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
l9=si0;
si0=0U;
l5=si0;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=l4;
si0=f15022(i,si0);
l7=si0;
si0=!(si0);
if(si0){
goto L3;
}
si0=l6;
si1=1U;
si0&=si1;
l10=si0;
si0=l6;
si1=1U;
si0=si0 == si1;
if(si0){
goto L11;
}
si0=l6;
si1=-2U;
si0&=si1;
l11=si0;
si0=0U;
l5=si0;
si0=l7;
l2=si0;
si0=l8;
l1=si0;
si0=l9;
l4=si0;
L12:;
{
si0=l2;
si1=l1;
sj1=i64_load(&i->m0,(U64)si1);
si2=l4;
sj2=i64_load(&i->m0,(U64)si2);
sj1&=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=8U;
si0+=si1;
si1=l1;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
si2=l4;
si3=8U;
si2+=si3;
sj2=i64_load(&i->m0,(U64)si2);
sj1&=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=16U;
si0+=si1;
l2=si0;
si0=l1;
si1=16U;
si0+=si1;
l1=si0;
si0=l4;
si1=16U;
si0+=si1;
l4=si0;
si0=l11;
si1=l5;
si2=2U;
si1+=si2;
l5=si1;
si0=si0 != si1;
if(si0){
goto L12;
}
}
L11:;
si0=l10;
si0=!(si0);
if(si0){
goto L9;
}
si0=l7;
si1=l5;
si2=3U;
si1<<=(si2&31);
l2=si1;
si0+=si1;
si1=l8;
si2=l2;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
si2=l9;
si3=l2;
si2+=si3;
sj2=i64_load(&i->m0,(U64)si2);
sj1&=sj2;
i64_store(&i->m0,(U64)si0,sj1);
L9:;
si0=l6;
si1=1U;
si0+=si1;
l1=si0;
si0=l6;
si1=3U;
si0<<=(si1&31);
l2=si0;
L14:;
{
si0=l2;
si0=!(si0);
if(si0){
goto L13;
}
si0=l1;
si1=-1U;
si0+=si1;
l1=si0;
si0=l2;
si1=-8U;
si0+=si1;
l2=si0;
si1=l7;
si0+=si1;
sj0=i64_load(&i->m0,(U64)si0);
si0=!(sj0);
if(si0){
goto L14;
}
}
si0=l1;
switch(si0){
case 0:
goto L13;
case 1:
goto L15;
default:
goto L16;
}
L16:;
si0=l0;
si1=l6;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l0;
si1=l7;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=1U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l6;
si2=l1;
si3=l6;
si4=l1;
si3=si3 < si4;
si1=si3?si1:si2;
i32_store(&i->m0,(U64)si0+12U,si1);
goto L0;
L15:;
si0=l6;
si0=!(si0);
if(si0){
goto L17;
}
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l7;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+8U,sj1);
si0=l7;
f15024(i,si0);
goto L0;
L17:;
si0=0U;
si1=0U;
si2=1188524U;
f594(i,si0,si1,si2);
UNREACHABLE;
L13:;
si0=l0;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=8U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l6;
si0=!(si0);
if(si0){
goto L1;
}
si0=l7;
f15024(i,si0);
goto L0;
L5:;
si0=0U;
si1=0U;
si2=1203764U;
f594(i,si0,si1,si2);
UNREACHABLE;
L4:;
f53(i);
UNREACHABLE;
L3:;
si0=8U;
si1=l4;
f52(i,si0,si1);
UNREACHABLE;
L2:;
si0=l2;
si1=12U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L18;
}
si0=l1;
sj0=i64_load(&i->m0,(U64)si0+8U);
l3=sj0;
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
sj1=l3;
si2=l2;
si2=i32_load(&i->m0,(U64)si2+4U);
sj2=i64_load(&i->m0,(U64)si2);
sj1&=sj2;
i64_store(&i->m0,(U64)si0+8U,sj1);
goto L0;
L18:;
si0=0U;
si1=0U;
si2=1203764U;
f594(i,si0,si1,si2);
UNREACHABLE;
L1:;
L0:;
}

void f961(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U64 l3=0;
U32 l4=0;
U32 l5=0;
U64 l6=0;
U32 si0,si1,si2,si3,si4;
U64 sj0,sj1,sj2;
si0=l2;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L7;
}
si0=l2;
sj0=i64_load(&i->m0,(U64)si0+8U);
l3=sj0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L8;
}
si0=l1;
sj0=i64_load(&i->m0,(U64)si0+8U);
sj1=l3;
sj0|=sj1;
l3=sj0;
si0=0U;
l1=si0;
goto L1;
L8:;
si0=l1;
si1=12U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
si0=!(si0);
if(si0){
goto L9;
}
si0=l4;
si1=268435455U;
si0=si0 > si1;
if(si0){
goto L6;
}
si0=l4;
si1=3U;
si0<<=(si1&31);
l5=si0;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L6;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
l1=si0;
si0=l5;
if(si0){
goto L10;
}
si0=8U;
l2=si0;
goto L2;
L10:;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=l5;
si0=f15022(i,si0);
l2=si0;
if(si0){
goto L2;
}
si0=8U;
si1=l5;
f52(i,si0,si1);
UNREACHABLE;
L9:;
si0=0U;
si1=0U;
si2=1247884U;
f594(i,si0,si1,si2);
UNREACHABLE;
L7:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L11;
}
si0=l0;
si1=4U;
si0+=si1;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+4U);
si2=l1;
si3=12U;
si2+=si3;
si2=i32_load(&i->m0,(U64)si2);
si3=l2;
si3=i32_load(&i->m0,(U64)si3+4U);
si4=l2;
si4=i32_load(&i->m0,(U64)si4+12U);
f1219(i,si0,si1,si2,si3,si4);
si0=l0;
si1=1U;
i32_store(&i->m0,(U64)si0,si1);
goto L0;
L11:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+12U);
l4=si0;
si0=!(si0);
if(si0){
goto L4;
}
si0=l4;
si1=268435455U;
si0=si0 > si1;
if(si0){
goto L6;
}
si0=l4;
si1=3U;
si0<<=(si1&31);
l5=si0;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L6;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0+4U);
l2=si0;
si0=l1;
sj0=i64_load(&i->m0,(U64)si0+8U);
l3=sj0;
si0=l5;
if(si0){
goto L5;
}
si0=8U;
l1=si0;
goto L3;
L6:;
f53(i);
UNREACHABLE;
L5:;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=l5;
si0=f15022(i,si0);
l1=si0;
if(si0){
goto L3;
}
si0=8U;
si1=l5;
f52(i,si0,si1);
UNREACHABLE;
L4:;
si0=0U;
si1=0U;
si2=1247884U;
f594(i,si0,si1,si2);
UNREACHABLE;
L3:;
si0=l0;
si1=l1;
si2=l2;
si3=l5;
si1=f15143(i,si1,si2,si3);
l2=si1;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=1U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l4;
sj1=(U64)(si1);
l6=sj1;
sj2=32ULL;
sj1<<=(sj2&63);
sj2=l6;
sj1|=sj2;
i64_store(&i->m0,(U64)si0+8U,sj1);
si0=l2;
si1=l2;
sj1=i64_load(&i->m0,(U64)si1);
sj2=l3;
sj1|=sj2;
i64_store(&i->m0,(U64)si0,sj1);
goto L0;
L2:;
si0=l2;
si1=l1;
si2=l5;
si0=f15143(i,si0,si1,si2);
l1=si0;
si1=l1;
sj1=i64_load(&i->m0,(U64)si1);
sj2=l3;
sj1|=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
sj0=(U64)(si0);
l3=sj0;
sj1=32ULL;
sj0<<=(sj1&63);
sj1=l3;
sj0|=sj1;
l3=sj0;
si0=1U;
l1=si0;
L1:;
si0=l0;
sj1=l3;
i64_store(&i->m0,(U64)si0+8U,sj1);
si0=l0;
si1=l2;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l1;
i32_store(&i->m0,(U64)si0,si1);
L0:;
}

U64 f962(rustpythonInstance*i,U32 l0) {
U64 l1=0;
U32 l2=0;
U32 si0,si1,si2;
U64 sj0,sj1;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L3;
}
si0=l0;
si1=8U;
si0+=si1;
l0=si0;
sj0=64ULL;
l1=sj0;
goto L2;
L3:;
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
sj0=(U64)(si0);
sj1=6ULL;
sj0<<=(sj1&63);
l1=sj0;
si0=l2;
si1=3U;
si0<<=(si1&31);
si1=l0;
si1=i32_load(&i->m0,(U64)si1+4U);
si0+=si1;
si1=-8U;
si0+=si1;
l0=si0;
L2:;
sj0=l1;
si1=l0;
sj1=i64_load(&i->m0,(U64)si1);
sj1=I64_CLZ(sj1);
sj0-=sj1;
goto L0;
L1:;
si0=1206876U;
si1=43U;
si2=1211300U;
f604(i,si0,si1,si2);
UNREACHABLE;
L0:;
return sj0;
}

void f963(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U64 l4=0;
U32 l5=0;
U32 l6=0;
U64 l7=0;
U32 si0,si1,si2,si3,si4;
U64 sj0,sj1,sj2;
si0=i->g0;
si1=16U;
si0-=si1;
l3=si0;
i->g0=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L8;
}
si0=l2;
sj0=i64_load(&i->m0,(U64)si0+8U);
l4=sj0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L9;
}
si0=l1;
sj0=i64_load(&i->m0,(U64)si0+8U);
sj1=l4;
sj0^=sj1;
l4=sj0;
si0=0U;
l1=si0;
goto L2;
L9:;
si0=l1;
si1=12U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si0=!(si0);
if(si0){
goto L10;
}
si0=l5;
si1=268435455U;
si0=si0 > si1;
if(si0){
goto L7;
}
si0=l5;
si1=3U;
si0<<=(si1&31);
l6=si0;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L7;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
l1=si0;
si0=l6;
if(si0){
goto L11;
}
si0=8U;
l2=si0;
goto L3;
L11:;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=l6;
si0=f15022(i,si0);
l2=si0;
if(si0){
goto L3;
}
si0=8U;
si1=l6;
f52(i,si0,si1);
UNREACHABLE;
L10:;
si0=0U;
si1=0U;
si2=1206400U;
f594(i,si0,si1,si2);
UNREACHABLE;
L8:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L12;
}
si0=l3;
si1=4U;
si0+=si1;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+4U);
si2=l1;
si3=12U;
si2+=si3;
si2=i32_load(&i->m0,(U64)si2);
si3=l2;
si3=i32_load(&i->m0,(U64)si3+4U);
si4=l2;
si4=i32_load(&i->m0,(U64)si4+12U);
f1078(i,si0,si1,si2,si3,si4);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+12U);
l6=si0;
si1=3U;
si0<<=(si1&31);
l2=si0;
si0=-1U;
l1=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+4U);
l5=si0;
L15:;
{
si0=l2;
si0=!(si0);
if(si0){
goto L14;
}
si0=l1;
si1=1U;
si0+=si1;
l1=si0;
si0=l2;
si1=-8U;
si0+=si1;
l2=si0;
si1=l5;
si0+=si1;
sj0=i64_load(&i->m0,(U64)si0);
si0=!(sj0);
if(si0){
goto L15;
}
}
si0=l6;
si1=l1;
si0-=si1;
l2=si0;
switch(si0){
case 0:
goto L14;
case 1:
goto L16;
default:
goto L17;
}
L17:;
si0=l6;
si1=l2;
si0=si0 < si1;
if(si0){
goto L18;
}
si0=l3;
si1=l2;
i32_store(&i->m0,(U64)si0+12U,si1);
L18:;
si0=l0;
si1=l3;
sj1=i64_load(&i->m0,(U64)si1+4U);
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l0;
si1=1U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=12U;
si0+=si1;
si1=l3;
si2=12U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
goto L1;
L16:;
si0=l6;
si0=!(si0);
if(si0){
goto L19;
}
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l5;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+8U,sj1);
goto L13;
L19:;
si0=0U;
si1=0U;
si2=1188524U;
f594(i,si0,si1,si2);
UNREACHABLE;
L14:;
si0=l0;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=8U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
L13:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+8U);
si0=!(si0);
if(si0){
goto L1;
}
si0=l5;
f15024(i,si0);
goto L1;
L12:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+12U);
l5=si0;
si0=!(si0);
if(si0){
goto L5;
}
si0=l5;
si1=268435455U;
si0=si0 > si1;
if(si0){
goto L7;
}
si0=l5;
si1=3U;
si0<<=(si1&31);
l6=si0;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L7;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0+4U);
l2=si0;
si0=l1;
sj0=i64_load(&i->m0,(U64)si0+8U);
l4=sj0;
si0=l6;
if(si0){
goto L6;
}
si0=8U;
l1=si0;
goto L4;
L7:;
f53(i);
UNREACHABLE;
L6:;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=l6;
si0=f15022(i,si0);
l1=si0;
if(si0){
goto L4;
}
si0=8U;
si1=l6;
f52(i,si0,si1);
UNREACHABLE;
L5:;
si0=0U;
si1=0U;
si2=1206400U;
f594(i,si0,si1,si2);
UNREACHABLE;
L4:;
si0=l0;
si1=l1;
si2=l2;
si3=l6;
si1=f15143(i,si1,si2,si3);
l2=si1;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=1U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l5;
sj1=(U64)(si1);
l7=sj1;
sj2=32ULL;
sj1<<=(sj2&63);
sj2=l7;
sj1|=sj2;
i64_store(&i->m0,(U64)si0+8U,sj1);
si0=l2;
si1=l2;
sj1=i64_load(&i->m0,(U64)si1);
sj2=l4;
sj1^=sj2;
i64_store(&i->m0,(U64)si0,sj1);
goto L1;
L3:;
si0=l2;
si1=l1;
si2=l6;
si0=f15143(i,si0,si1,si2);
l1=si0;
si1=l1;
sj1=i64_load(&i->m0,(U64)si1);
sj2=l4;
sj1^=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
sj0=(U64)(si0);
l4=sj0;
sj1=32ULL;
sj0<<=(sj1&63);
sj1=l4;
sj0|=sj1;
l4=sj0;
si0=1U;
l1=si0;
L2:;
si0=l0;
sj1=l4;
i64_store(&i->m0,(U64)si0+8U,sj1);
si0=l0;
si1=l2;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l1;
i32_store(&i->m0,(U64)si0,si1);
L1:;
si0=l3;
si1=16U;
si0+=si1;
i->g0=si0;
L0:;
}

void f964(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U64 l4=0;
U32 l5=0;
U32 l6=0;
U32 si0,si1,si2,si3,si4,si5;
U64 sj0,sj1,sj2,sj3;
si0=i->g0;
si1=16U;
si0-=si1;
l3=si0;
i->g0=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L4;
}
sj0=0ULL;
si1=l2;
sj1=i64_load(&i->m0,(U64)si1+8U);
sj0-=sj1;
l4=sj0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L5;
}
si0=l1;
sj0=i64_load(&i->m0,(U64)si0+8U);
sj1=l4;
sj0&=sj1;
l4=sj0;
si0=0U;
l1=si0;
goto L2;
L5:;
si0=l1;
si1=12U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si0=!(si0);
if(si0){
goto L6;
}
si0=l5;
si1=268435455U;
si0=si0 > si1;
if(si0){
goto L8;
}
si0=l5;
si1=3U;
si0<<=(si1&31);
l6=si0;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L8;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
l1=si0;
si0=l6;
if(si0){
goto L7;
}
si0=8U;
l2=si0;
goto L3;
L8:;
f53(i);
UNREACHABLE;
L7:;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=l6;
si0=f15022(i,si0);
l2=si0;
if(si0){
goto L3;
}
si0=8U;
si1=l6;
f52(i,si0,si1);
UNREACHABLE;
L6:;
si0=0U;
si1=0U;
si2=1200816U;
f594(i,si0,si1,si2);
UNREACHABLE;
L4:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L9;
}
si0=l3;
si1=4U;
si0+=si1;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+4U);
si2=l1;
si3=12U;
si2+=si3;
si2=i32_load(&i->m0,(U64)si2);
si3=l2;
si3=i32_load(&i->m0,(U64)si3+4U);
si4=l2;
si5=12U;
si4+=si5;
si4=i32_load(&i->m0,(U64)si4);
f1036(i,si0,si1,si2,si3,si4);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+12U);
l6=si0;
si1=3U;
si0<<=(si1&31);
l2=si0;
si0=-1U;
l1=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+4U);
l5=si0;
L12:;
{
si0=l2;
si0=!(si0);
if(si0){
goto L11;
}
si0=l1;
si1=1U;
si0+=si1;
l1=si0;
si0=l2;
si1=-8U;
si0+=si1;
l2=si0;
si1=l5;
si0+=si1;
sj0=i64_load(&i->m0,(U64)si0);
si0=!(sj0);
if(si0){
goto L12;
}
}
si0=l6;
si1=l1;
si0-=si1;
l2=si0;
switch(si0){
case 0:
goto L11;
case 1:
goto L13;
default:
goto L14;
}
L14:;
si0=l6;
si1=l2;
si0=si0 < si1;
if(si0){
goto L15;
}
si0=l3;
si1=l2;
i32_store(&i->m0,(U64)si0+12U,si1);
L15:;
si0=l0;
si1=l3;
sj1=i64_load(&i->m0,(U64)si1+4U);
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l0;
si1=1U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=12U;
si0+=si1;
si1=l3;
si2=12U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
goto L1;
L13:;
si0=l6;
si0=!(si0);
if(si0){
goto L16;
}
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l5;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+8U,sj1);
goto L10;
L16:;
si0=0U;
si1=0U;
si2=1188524U;
f594(i,si0,si1,si2);
UNREACHABLE;
L11:;
si0=l0;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=8U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
L10:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+8U);
si0=!(si0);
if(si0){
goto L1;
}
si0=l5;
f15024(i,si0);
goto L1;
L9:;
si0=l2;
si1=12U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L17;
}
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l1;
sj1=i64_load(&i->m0,(U64)si1+8U);
sj2=0ULL;
si3=l2;
si3=i32_load(&i->m0,(U64)si3+4U);
sj3=i64_load(&i->m0,(U64)si3);
sj2-=sj3;
sj1&=sj2;
i64_store(&i->m0,(U64)si0+8U,sj1);
goto L1;
L17:;
si0=0U;
si1=0U;
si2=1189136U;
f594(i,si0,si1,si2);
UNREACHABLE;
L3:;
si0=l2;
si1=l1;
si2=l6;
si0=f15143(i,si0,si1,si2);
l1=si0;
si1=l1;
sj1=i64_load(&i->m0,(U64)si1);
sj2=l4;
sj1&=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
sj0=(U64)(si0);
l4=sj0;
sj1=32ULL;
sj0<<=(sj1&63);
sj1=l4;
sj0|=sj1;
l4=sj0;
si0=1U;
l1=si0;
L2:;
si0=l0;
sj1=l4;
i64_store(&i->m0,(U64)si0+8U,sj1);
si0=l0;
si1=l2;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l1;
i32_store(&i->m0,(U64)si0,si1);
L1:;
si0=l3;
si1=16U;
si0+=si1;
i->g0=si0;
L0:;
}

void f965(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U64 l4=0;
U32 l5=0;
U32 l6=0;
U32 si0,si1,si2,si3,si4,si5;
U64 sj0,sj1,sj3,sj4;
si0=i->g0;
si1=16U;
si0-=si1;
l3=si0;
i->g0=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L6;
}
sj0=0ULL;
si1=l2;
sj1=i64_load(&i->m0,(U64)si1+8U);
sj0-=sj1;
l4=sj0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L5;
}
sj0=0ULL;
si1=l1;
sj1=i64_load(&i->m0,(U64)si1+8U);
sj0-=sj1;
sj1=l4;
sj0&=sj1;
l4=sj0;
si0=!(sj0);
si0=!(si0);
if(si0){
goto L7;
}
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=16U;
si0=f15022(i,si0);
l2=si0;
si0=!(si0);
if(si0){
goto L4;
}
si0=l2;
sj1=1ULL;
i64_store(&i->m0,(U64)si0+8U,sj1);
si0=l2;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=1U;
l1=si0;
sj0=8589934594ULL;
l4=sj0;
goto L2;
L7:;
sj0=0ULL;
sj1=l4;
sj0-=sj1;
l4=sj0;
si0=0U;
l1=si0;
goto L2;
L6:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L3;
}
si0=l3;
si1=4U;
si0+=si1;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+4U);
si2=l1;
si3=12U;
si2+=si3;
si2=i32_load(&i->m0,(U64)si2);
si3=l2;
si3=i32_load(&i->m0,(U64)si3+4U);
si4=l2;
si5=12U;
si4+=si5;
si4=i32_load(&i->m0,(U64)si4);
f1037(i,si0,si1,si2,si3,si4);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+12U);
l5=si0;
si1=3U;
si0<<=(si1&31);
l2=si0;
si0=-1U;
l1=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+4U);
l6=si0;
L10:;
{
si0=l2;
si0=!(si0);
if(si0){
goto L9;
}
si0=l1;
si1=1U;
si0+=si1;
l1=si0;
si0=l2;
si1=-8U;
si0+=si1;
l2=si0;
si1=l6;
si0+=si1;
sj0=i64_load(&i->m0,(U64)si0);
si0=!(sj0);
if(si0){
goto L10;
}
}
si0=l5;
si1=l1;
si0-=si1;
l2=si0;
switch(si0){
case 0:
goto L9;
case 1:
goto L11;
default:
goto L12;
}
L12:;
si0=l5;
si1=l2;
si0=si0 < si1;
if(si0){
goto L13;
}
si0=l3;
si1=l2;
i32_store(&i->m0,(U64)si0+12U,si1);
L13:;
si0=l0;
si1=l3;
sj1=i64_load(&i->m0,(U64)si1+4U);
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l0;
si1=1U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=12U;
si0+=si1;
si1=l3;
si2=12U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
goto L1;
L11:;
si0=l5;
si0=!(si0);
if(si0){
goto L14;
}
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l6;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+8U,sj1);
goto L8;
L14:;
si0=0U;
si1=0U;
si2=1188524U;
f594(i,si0,si1,si2);
UNREACHABLE;
L9:;
si0=l0;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=8U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
L8:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+8U);
si0=!(si0);
if(si0){
goto L1;
}
si0=l6;
f15024(i,si0);
goto L1;
L5:;
si0=l3;
si1=4U;
si0+=si1;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+4U);
si2=l1;
si3=12U;
si2+=si3;
si2=i32_load(&i->m0,(U64)si2);
sj3=l4;
f1035(i,si0,si1,si2,sj3);
si0=l3;
sj0=i64_load(&i->m0,(U64)si0+8U);
l4=sj0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+4U);
l2=si0;
si0=1U;
l1=si0;
goto L2;
L4:;
si0=8U;
si1=16U;
f52(i,si0,si1);
UNREACHABLE;
L3:;
si0=l3;
si1=4U;
si0+=si1;
si1=l2;
si1=i32_load(&i->m0,(U64)si1+4U);
si2=l2;
si3=12U;
si2+=si3;
si2=i32_load(&i->m0,(U64)si2);
sj3=0ULL;
si4=l1;
sj4=i64_load(&i->m0,(U64)si4+8U);
sj3-=sj4;
f1035(i,si0,si1,si2,sj3);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+4U);
l2=si0;
si0=l0;
si1=l3;
sj1=i64_load(&i->m0,(U64)si1+8U);
i64_store(&i->m0,(U64)si0+8U,sj1);
si0=l0;
si1=l2;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=1U;
i32_store(&i->m0,(U64)si0,si1);
goto L1;
L2:;
si0=l0;
sj1=l4;
i64_store(&i->m0,(U64)si0+8U,sj1);
si0=l0;
si1=l2;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l1;
i32_store(&i->m0,(U64)si0,si1);
L1:;
si0=l3;
si1=16U;
si0+=si1;
i->g0=si0;
L0:;
}

void f966(rustpythonInstance*i,U32 l0,U32 l1,U64 l2) {
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 si0,si1,si2,si3;
U64 sj0,sj1,sj2,sj3;
si0=i->g0;
si1=16U;
si0-=si1;
l3=si0;
i->g0=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L2;
}
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
sj1=0ULL;
sj2=0ULL;
si3=l1;
sj3=i64_load(&i->m0,(U64)si3+8U);
sj2-=sj3;
sj3=l2;
sj2|=sj3;
sj1-=sj2;
i64_store(&i->m0,(U64)si0+8U,sj1);
goto L1;
L2:;
si0=l3;
si1=4U;
si0+=si1;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+4U);
si2=l1;
si3=12U;
si2+=si3;
si2=i32_load(&i->m0,(U64)si2);
sj3=l2;
f1038(i,si0,si1,si2,sj3);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+12U);
l4=si0;
si1=3U;
si0<<=(si1&31);
l1=si0;
si0=-1U;
l5=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+4U);
l6=si0;
L5:;
{
si0=l1;
si0=!(si0);
if(si0){
goto L4;
}
si0=l5;
si1=1U;
si0+=si1;
l5=si0;
si0=l1;
si1=-8U;
si0+=si1;
l1=si0;
si1=l6;
si0+=si1;
sj0=i64_load(&i->m0,(U64)si0);
si0=!(sj0);
if(si0){
goto L5;
}
}
si0=l4;
si1=l5;
si0-=si1;
l1=si0;
switch(si0){
case 0:
goto L4;
case 1:
goto L6;
default:
goto L7;
}
L7:;
si0=l4;
si1=l1;
si0=si0 < si1;
if(si0){
goto L8;
}
si0=l3;
si1=l1;
i32_store(&i->m0,(U64)si0+12U,si1);
L8:;
si0=l0;
si1=l3;
sj1=i64_load(&i->m0,(U64)si1+4U);
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l0;
si1=1U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=12U;
si0+=si1;
si1=l3;
si2=12U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
goto L1;
L6:;
si0=l4;
si0=!(si0);
if(si0){
goto L9;
}
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l6;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+8U,sj1);
goto L3;
L9:;
si0=0U;
si1=0U;
si2=1188524U;
f594(i,si0,si1,si2);
UNREACHABLE;
L4:;
si0=l0;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=8U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
L3:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+8U);
si0=!(si0);
if(si0){
goto L1;
}
si0=l6;
f15024(i,si0);
L1:;
si0=l3;
si1=16U;
si0+=si1;
i->g0=si0;
L0:;
}

void f967(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U64 l4=0;
U32 l5=0;
U32 l6=0;
U32 si0,si1,si2,si3,si4,si5;
U64 sj0,sj1,sj2,sj3,sj4;
si0=i->g0;
si1=16U;
si0-=si1;
l3=si0;
i->g0=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L4;
}
si0=l2;
sj0=i64_load(&i->m0,(U64)si0+8U);
l4=sj0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L6;
}
si0=l1;
si1=8U;
si0+=si1;
l1=si0;
goto L5;
L6:;
si0=l1;
si1=12U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L3;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
l1=si0;
L5:;
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
sj1=0ULL;
si2=l1;
sj2=i64_load(&i->m0,(U64)si2);
sj3=0ULL;
sj4=l4;
sj3-=sj4;
sj2|=sj3;
sj1-=sj2;
i64_store(&i->m0,(U64)si0+8U,sj1);
goto L1;
L4:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L2;
}
si0=l3;
si1=4U;
si0+=si1;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+4U);
si2=l1;
si3=12U;
si2+=si3;
si2=i32_load(&i->m0,(U64)si2);
si3=l2;
si3=i32_load(&i->m0,(U64)si3+4U);
si4=l2;
si5=12U;
si4+=si5;
si4=i32_load(&i->m0,(U64)si4);
f1039(i,si0,si1,si2,si3,si4);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+12U);
l5=si0;
si1=3U;
si0<<=(si1&31);
l1=si0;
si0=-1U;
l2=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+4U);
l6=si0;
L9:;
{
si0=l1;
si0=!(si0);
if(si0){
goto L8;
}
si0=l2;
si1=1U;
si0+=si1;
l2=si0;
si0=l1;
si1=-8U;
si0+=si1;
l1=si0;
si1=l6;
si0+=si1;
sj0=i64_load(&i->m0,(U64)si0);
si0=!(sj0);
if(si0){
goto L9;
}
}
si0=l5;
si1=l2;
si0-=si1;
l1=si0;
switch(si0){
case 0:
goto L8;
case 1:
goto L10;
default:
goto L11;
}
L11:;
si0=l5;
si1=l1;
si0=si0 < si1;
if(si0){
goto L12;
}
si0=l3;
si1=l1;
i32_store(&i->m0,(U64)si0+12U,si1);
L12:;
si0=l0;
si1=l3;
sj1=i64_load(&i->m0,(U64)si1+4U);
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l0;
si1=1U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=12U;
si0+=si1;
si1=l3;
si2=12U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
goto L1;
L10:;
si0=l5;
si0=!(si0);
if(si0){
goto L13;
}
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l6;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+8U,sj1);
goto L7;
L13:;
si0=0U;
si1=0U;
si2=1188524U;
f594(i,si0,si1,si2);
UNREACHABLE;
L8:;
si0=l0;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=8U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
L7:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+8U);
si0=!(si0);
if(si0){
goto L1;
}
si0=l6;
f15024(i,si0);
goto L1;
L3:;
si0=0U;
si1=0U;
si2=1201252U;
f594(i,si0,si1,si2);
UNREACHABLE;
L2:;
si0=l0;
si1=l2;
si2=l1;
sj2=i64_load(&i->m0,(U64)si2+8U);
f966(i,si0,si1,sj2);
L1:;
si0=l3;
si1=16U;
si0+=si1;
i->g0=si0;
L0:;
}

void f968(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U64 l4=0;
U32 l5=0;
U32 l6=0;
U32 si0,si1,si2,si3,si4;
U64 sj0,sj1,sj2,sj3,sj4;
si0=i->g0;
si1=16U;
si0-=si1;
l3=si0;
i->g0=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L4;
}
si0=l2;
sj0=i64_load(&i->m0,(U64)si0+8U);
l4=sj0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L6;
}
si0=l1;
si1=8U;
si0+=si1;
l2=si0;
goto L5;
L6:;
si0=l1;
si1=12U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L3;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
l2=si0;
L5:;
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
sj1=0ULL;
sj2=0ULL;
si3=l2;
sj3=i64_load(&i->m0,(U64)si3);
sj2-=sj3;
sj3=0ULL;
sj4=l4;
sj3-=sj4;
sj2|=sj3;
sj1-=sj2;
i64_store(&i->m0,(U64)si0+8U,sj1);
goto L1;
L4:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L2;
}
si0=l3;
si1=4U;
si0+=si1;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+4U);
si2=l1;
si3=12U;
si2+=si3;
si2=i32_load(&i->m0,(U64)si2);
si3=l2;
si3=i32_load(&i->m0,(U64)si3+4U);
si4=l2;
si4=i32_load(&i->m0,(U64)si4+12U);
f1040(i,si0,si1,si2,si3,si4);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+12U);
l5=si0;
si1=3U;
si0<<=(si1&31);
l2=si0;
si0=-1U;
l1=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+4U);
l6=si0;
L9:;
{
si0=l2;
si0=!(si0);
if(si0){
goto L8;
}
si0=l1;
si1=1U;
si0+=si1;
l1=si0;
si0=l2;
si1=-8U;
si0+=si1;
l2=si0;
si1=l6;
si0+=si1;
sj0=i64_load(&i->m0,(U64)si0);
si0=!(sj0);
if(si0){
goto L9;
}
}
si0=l5;
si1=l1;
si0-=si1;
l2=si0;
switch(si0){
case 0:
goto L8;
case 1:
goto L10;
default:
goto L11;
}
L11:;
si0=l5;
si1=l2;
si0=si0 < si1;
if(si0){
goto L12;
}
si0=l3;
si1=l2;
i32_store(&i->m0,(U64)si0+12U,si1);
L12:;
si0=l0;
si1=l3;
sj1=i64_load(&i->m0,(U64)si1+4U);
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l0;
si1=1U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=12U;
si0+=si1;
si1=l3;
si2=12U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
goto L1;
L10:;
si0=l5;
si0=!(si0);
if(si0){
goto L13;
}
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l6;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+8U,sj1);
goto L7;
L13:;
si0=0U;
si1=0U;
si2=1188524U;
f594(i,si0,si1,si2);
UNREACHABLE;
L8:;
si0=l0;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=8U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
L7:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+8U);
si0=!(si0);
if(si0){
goto L1;
}
si0=l6;
f15024(i,si0);
goto L1;
L3:;
si0=0U;
si1=0U;
si2=1201268U;
f594(i,si0,si1,si2);
UNREACHABLE;
L2:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+12U);
si0=!(si0);
if(si0){
goto L14;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0+4U);
l2=si0;
si0=l1;
sj0=i64_load(&i->m0,(U64)si0+8U);
l4=sj0;
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
sj1=0ULL;
sj2=0ULL;
si3=l2;
sj3=i64_load(&i->m0,(U64)si3);
sj2-=sj3;
sj3=0ULL;
sj4=l4;
sj3-=sj4;
sj2|=sj3;
sj1-=sj2;
i64_store(&i->m0,(U64)si0+8U,sj1);
goto L1;
L14:;
si0=0U;
si1=0U;
si2=1201268U;
f594(i,si0,si1,si2);
UNREACHABLE;
L1:;
si0=l3;
si1=16U;
si0+=si1;
i->g0=si0;
L0:;
}

void f969(rustpythonInstance*i,U32 l0,U32 l1,U64 l2) {
U32 l3=0;
U64 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 si0,si1,si2,si3;
U64 sj0,sj1,sj3;
si0=i->g0;
si1=16U;
si0-=si1;
l3=si0;
i->g0=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L6;
}
si0=l1;
sj0=i64_load(&i->m0,(U64)si0+8U);
l4=sj0;
si0=!(sj0);
if(si0){
goto L5;
}
sj0=0ULL;
sj1=l4;
sj0-=sj1;
sj1=l2;
sj0^=sj1;
l2=sj0;
si0=!(sj0);
if(si0){
goto L4;
}
sj0=0ULL;
sj1=l2;
sj0-=sj1;
l2=sj0;
si0=0U;
l5=si0;
goto L3;
L6:;
si0=l3;
si1=4U;
si0+=si1;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+4U);
si2=l1;
si3=12U;
si2+=si3;
si2=i32_load(&i->m0,(U64)si2);
sj3=l2;
f1062(i,si0,si1,si2,sj3);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+12U);
l6=si0;
si1=3U;
si0<<=(si1&31);
l1=si0;
si0=-1U;
l5=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+4U);
l7=si0;
L9:;
{
si0=l1;
si0=!(si0);
if(si0){
goto L8;
}
si0=l5;
si1=1U;
si0+=si1;
l5=si0;
si0=l1;
si1=-8U;
si0+=si1;
l1=si0;
si1=l7;
si0+=si1;
sj0=i64_load(&i->m0,(U64)si0);
si0=!(sj0);
if(si0){
goto L9;
}
}
si0=l6;
si1=l5;
si0-=si1;
l1=si0;
switch(si0){
case 0:
goto L8;
case 1:
goto L10;
default:
goto L11;
}
L11:;
si0=l6;
si1=l1;
si0=si0 < si1;
if(si0){
goto L12;
}
si0=l3;
si1=l1;
i32_store(&i->m0,(U64)si0+12U,si1);
L12:;
si0=l0;
si1=l3;
sj1=i64_load(&i->m0,(U64)si1+4U);
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l0;
si1=1U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=12U;
si0+=si1;
si1=l3;
si2=12U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
goto L1;
L10:;
si0=l6;
si0=!(si0);
if(si0){
goto L13;
}
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l7;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+8U,sj1);
goto L7;
L13:;
si0=0U;
si1=0U;
si2=1188524U;
f594(i,si0,si1,si2);
UNREACHABLE;
L8:;
si0=l0;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=8U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
L7:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+8U);
si0=!(si0);
if(si0){
goto L1;
}
si0=l7;
f15024(i,si0);
goto L1;
L5:;
si0=l0;
sj1=0ULL;
i64_store(&i->m0,(U64)si0+8U,sj1);
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
goto L1;
L4:;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=16U;
si0=f15022(i,si0);
l1=si0;
si0=!(si0);
if(si0){
goto L2;
}
si0=l1;
sj1=1ULL;
i64_store(&i->m0,(U64)si0+8U,sj1);
si0=l1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=1U;
l5=si0;
sj0=8589934594ULL;
l2=sj0;
L3:;
si0=l0;
sj1=l2;
i64_store(&i->m0,(U64)si0+8U,sj1);
si0=l0;
si1=l1;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l5;
i32_store(&i->m0,(U64)si0,si1);
goto L1;
L2:;
si0=8U;
si1=16U;
f52(i,si0,si1);
UNREACHABLE;
L1:;
si0=l3;
si1=16U;
si0+=si1;
i->g0=si0;
L0:;
}

void f970(rustpythonInstance*i,U32 l0,U32 l1,U64 l2) {
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 si0,si1,si2,si3;
U64 sj0,sj1,sj2,sj3;
si0=i->g0;
si1=16U;
si0-=si1;
l3=si0;
i->g0=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L2;
}
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
sj1=0ULL;
si2=l1;
sj2=i64_load(&i->m0,(U64)si2+8U);
sj1-=sj2;
sj2=l2;
sj1^=sj2;
i64_store(&i->m0,(U64)si0+8U,sj1);
goto L1;
L2:;
si0=l3;
si1=4U;
si0+=si1;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+4U);
si2=l1;
si3=12U;
si2+=si3;
si2=i32_load(&i->m0,(U64)si2);
sj3=l2;
f1064(i,si0,si1,si2,sj3);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+12U);
l4=si0;
si1=3U;
si0<<=(si1&31);
l1=si0;
si0=-1U;
l5=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+4U);
l6=si0;
L5:;
{
si0=l1;
si0=!(si0);
if(si0){
goto L4;
}
si0=l5;
si1=1U;
si0+=si1;
l5=si0;
si0=l1;
si1=-8U;
si0+=si1;
l1=si0;
si1=l6;
si0+=si1;
sj0=i64_load(&i->m0,(U64)si0);
si0=!(sj0);
if(si0){
goto L5;
}
}
si0=l4;
si1=l5;
si0-=si1;
l1=si0;
switch(si0){
case 0:
goto L4;
case 1:
goto L6;
default:
goto L7;
}
L7:;
si0=l4;
si1=l1;
si0=si0 < si1;
if(si0){
goto L8;
}
si0=l3;
si1=l1;
i32_store(&i->m0,(U64)si0+12U,si1);
L8:;
si0=l0;
si1=l3;
sj1=i64_load(&i->m0,(U64)si1+4U);
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l0;
si1=1U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=12U;
si0+=si1;
si1=l3;
si2=12U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
goto L1;
L6:;
si0=l4;
si0=!(si0);
if(si0){
goto L9;
}
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l6;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+8U,sj1);
goto L3;
L9:;
si0=0U;
si1=0U;
si2=1188524U;
f594(i,si0,si1,si2);
UNREACHABLE;
L4:;
si0=l0;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=8U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
L3:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+8U);
si0=!(si0);
if(si0){
goto L1;
}
si0=l6;
f15024(i,si0);
L1:;
si0=l3;
si1=16U;
si0+=si1;
i->g0=si0;
L0:;
}

void f971(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 si0,si1,si2,si3,si4,si5;
U64 sj0,sj1,sj2,sj3,sj4;
si0=i->g0;
si1=16U;
si0-=si1;
l3=si0;
i->g0=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L2;
}
si0=l0;
si1=l2;
si2=l1;
sj2=i64_load(&i->m0,(U64)si2+8U);
f969(i,si0,si1,sj2);
goto L1;
L2:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L3;
}
si0=l3;
si1=4U;
si0+=si1;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+4U);
si2=l1;
si3=12U;
si2+=si3;
si2=i32_load(&i->m0,(U64)si2);
si3=l2;
si3=i32_load(&i->m0,(U64)si3+4U);
si4=l2;
si5=12U;
si4+=si5;
si4=i32_load(&i->m0,(U64)si4);
f1065(i,si0,si1,si2,si3,si4);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+12U);
l4=si0;
si1=3U;
si0<<=(si1&31);
l1=si0;
si0=-1U;
l2=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+4U);
l5=si0;
L6:;
{
si0=l1;
si0=!(si0);
if(si0){
goto L5;
}
si0=l2;
si1=1U;
si0+=si1;
l2=si0;
si0=l1;
si1=-8U;
si0+=si1;
l1=si0;
si1=l5;
si0+=si1;
sj0=i64_load(&i->m0,(U64)si0);
si0=!(sj0);
if(si0){
goto L6;
}
}
si0=l4;
si1=l2;
si0-=si1;
l1=si0;
switch(si0){
case 0:
goto L5;
case 1:
goto L7;
default:
goto L8;
}
L8:;
si0=l4;
si1=l1;
si0=si0 < si1;
if(si0){
goto L9;
}
si0=l3;
si1=l1;
i32_store(&i->m0,(U64)si0+12U,si1);
L9:;
si0=l0;
si1=l3;
sj1=i64_load(&i->m0,(U64)si1+4U);
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l0;
si1=1U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=12U;
si0+=si1;
si1=l3;
si2=12U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
goto L1;
L7:;
si0=l4;
si0=!(si0);
if(si0){
goto L10;
}
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l5;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+8U,sj1);
goto L4;
L10:;
si0=0U;
si1=0U;
si2=1188524U;
f594(i,si0,si1,si2);
UNREACHABLE;
L5:;
si0=l0;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=8U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
L4:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+8U);
si0=!(si0);
if(si0){
goto L1;
}
si0=l5;
f15024(i,si0);
goto L1;
L3:;
si0=l3;
si1=4U;
si0+=si1;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+4U);
si2=l1;
si3=12U;
si2+=si3;
si2=i32_load(&i->m0,(U64)si2);
sj3=0ULL;
si4=l2;
sj4=i64_load(&i->m0,(U64)si4+8U);
sj3-=sj4;
f1063(i,si0,si1,si2,sj3);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+4U);
l1=si0;
si0=l0;
si1=l3;
sj1=i64_load(&i->m0,(U64)si1+8U);
i64_store(&i->m0,(U64)si0+8U,sj1);
si0=l0;
si1=l1;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=1U;
i32_store(&i->m0,(U64)si0,si1);
L1:;
si0=l3;
si1=16U;
si0+=si1;
i->g0=si0;
L0:;
}

void f972(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 si0,si1,si2,si3,si4,si5;
U64 sj0,sj1,sj2,sj3;
si0=i->g0;
si1=16U;
si0-=si1;
l3=si0;
i->g0=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L2;
}
si0=l0;
si1=l2;
sj2=0ULL;
si3=l1;
sj3=i64_load(&i->m0,(U64)si3+8U);
sj2-=sj3;
f970(i,si0,si1,sj2);
goto L1;
L2:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L3;
}
si0=l3;
si1=4U;
si0+=si1;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+4U);
si2=l1;
si3=12U;
si2+=si3;
si2=i32_load(&i->m0,(U64)si2);
si3=l2;
si3=i32_load(&i->m0,(U64)si3+4U);
si4=l2;
si5=12U;
si4+=si5;
si4=i32_load(&i->m0,(U64)si4);
f1066(i,si0,si1,si2,si3,si4);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+12U);
l4=si0;
si1=3U;
si0<<=(si1&31);
l1=si0;
si0=-1U;
l2=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+4U);
l5=si0;
L6:;
{
si0=l1;
si0=!(si0);
if(si0){
goto L5;
}
si0=l2;
si1=1U;
si0+=si1;
l2=si0;
si0=l1;
si1=-8U;
si0+=si1;
l1=si0;
si1=l5;
si0+=si1;
sj0=i64_load(&i->m0,(U64)si0);
si0=!(sj0);
if(si0){
goto L6;
}
}
si0=l4;
si1=l2;
si0-=si1;
l1=si0;
switch(si0){
case 0:
goto L5;
case 1:
goto L7;
default:
goto L8;
}
L8:;
si0=l4;
si1=l1;
si0=si0 < si1;
if(si0){
goto L9;
}
si0=l3;
si1=l1;
i32_store(&i->m0,(U64)si0+12U,si1);
L9:;
si0=l0;
si1=l3;
sj1=i64_load(&i->m0,(U64)si1+4U);
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l0;
si1=1U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=12U;
si0+=si1;
si1=l3;
si2=12U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
goto L1;
L7:;
si0=l4;
si0=!(si0);
if(si0){
goto L10;
}
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l5;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+8U,sj1);
goto L4;
L10:;
si0=0U;
si1=0U;
si2=1188524U;
f594(i,si0,si1,si2);
UNREACHABLE;
L5:;
si0=l0;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=8U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
L4:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+8U);
si0=!(si0);
if(si0){
goto L1;
}
si0=l5;
f15024(i,si0);
goto L1;
L3:;
si0=l0;
si1=l1;
sj2=0ULL;
si3=l2;
sj3=i64_load(&i->m0,(U64)si3+8U);
sj2-=sj3;
f970(i,si0,si1,sj2);
L1:;
si0=l3;
si1=16U;
si0+=si1;
i->g0=si0;
L0:;
}

U32 f973(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 l3=0;
F64 l4=0;
U64 l5=0;
U64 l6=0;
U64 l7=0;
U64 l8=0;
U32 si0,si1,si2,si3;
U64 sj0,sj1,sj2,sj3;
F64 sd0,sd1,sd2;
si0=i->g0;
si1=16U;
si0-=si1;
l2=si0;
i->g0=si0;
si0=0U;
l3=si0;
si0=l1;
sd0=f64_load(&i->m0,(U64)si0);
l4=sd0;
sd0=fabs(sd0);
sd1=INFINITY;
si0=sd0 < sd1;
si0=!(si0);
if(si0){
goto L1;
}
sd0=l4;
sd1=0;
si0=sd0 == sd1;
if(si0){
goto L2;
}
sd0=l4;
sd1=1;
si0=sd0 < sd1;
if(si0){
goto L1;
}
si0=l0;
sj0=i64_load(&i->m0,(U64)si0+8U);
l5=sj0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
if(si0){
goto L3;
}
sj0=l5;
si0=!(sj0);
if(si0){
goto L1;
}
L3:;
sj0=4095ULL;
sj1=2047ULL;
sd2=l4;
sj2=i64_reinterpret_f64(sd2);
l6=sj2;
sj3=4503599627370496ULL;
si2=sj2 < sj3;
sj0=si2?sj0:sj1;
sj1=l6;
sj2=52ULL;
sj1>>=(sj2&63);
sj0&=sj1;
l7=sj0;
si0=!(sj0);
if(si0){
goto L1;
}
sj0=l7;
sj1=-4503599627370497ULL;
sj2=4503599627370495ULL;
sj3=l6;
si3=!(sj3);
sj1=si3?sj1:sj2;
sj2=l6;
sj1&=sj2;
sj2=4503599627370496ULL;
sj1|=sj2;
l6=sj1;
sj1=I64_CTZ(sj1);
l8=sj1;
sj0+=sj1;
sj1=-1075ULL;
sj0+=sj1;
l7=sj0;
sj1=0ULL;
si0=(U64)((I64)sj0<(I64)sj1);
if(si0){
goto L1;
}
sj0=l6;
sj1=l8;
sj0>>=(sj1&63);
l6=sj0;
si0=l1;
if(si0){
goto L5;
}
sj0=64ULL;
sj1=l5;
sj1=I64_CLZ(sj1);
sj0-=sj1;
l5=sj0;
goto L4;
L5:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+4U);
sj1=l5;
sj2=32ULL;
sj1>>=(sj2&63);
si1=(U32)(sj1);
sj0=f1103(i,si0,si1);
l5=sj0;
L4:;
sj0=l5;
sj1=l7;
sj2=l6;
sj2=I64_CLZ(sj2);
sj1-=sj2;
sj2=64ULL;
sj1+=sj2;
si0=sj0 != sj1;
if(si0){
goto L1;
}
si0=l2;
sj1=l6;
i64_store(&i->m0,(U64)si0+8U,sj1);
si0=l2;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l2;
si0=f957(i,si0,si1);
si1=255U;
si0&=si1;
l3=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L6;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0+8U);
si0=!(si0);
if(si0){
goto L6;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0+4U);
f15024(i,si0);
L6:;
si0=l3;
si0=!(si0);
l3=si0;
goto L1;
L2:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
si1=l0;
sj1=i64_load(&i->m0,(U64)si1+8U);
si1=!(sj1);
si0&=si1;
l3=si0;
L1:;
si0=l2;
si1=16U;
si0+=si1;
i->g0=si0;
si0=l3;
L0:;
return si0;
}

void f974(rustpythonInstance*i,U32 l0,F64 l1,U32 l2) {
U32 l3=0;
U64 l4=0;
U64 l5=0;
U64 l6=0;
U32 si0,si1,si2,si3,si4;
U64 sj0,sj1,sj2,sj3;
F64 sd0,sd1,sd2;
si0=i->g0;
si1=48U;
si0-=si1;
l3=si0;
i->g0=si0;
si0=l3;
sd1=l1;
f64_store(&i->m0,(U64)si0+8U,sd1);
sd0=l1;
sd1=INFINITY;
si0=sd0 > sd1;
sd1=l1;
sd2=INFINITY;
si1=sd1 < sd2;
si0|=si1;
si1=1U;
si0=si0 != si1;
if(si0){
goto L5;
}
sd0=l1;
sd1=0;
si0=sd0 == sd1;
if(si0){
goto L4;
}
sd0=l1;
sd1=0;
si0=sd0 < sd1;
if(si0){
goto L6;
}
sd0=l1;
sd0=fabs(sd0);
sd1=INFINITY;
si0=sd0 < sd1;
si0=!(si0);
if(si0){
goto L3;
}
sj0=-1ULL;
sj1=4503599627370495ULL;
sd2=l1;
sj2=i64_reinterpret_f64(sd2);
l4=sj2;
si2=!(sj2);
sj0=si2?sj0:sj1;
sj1=l4;
sj0&=sj1;
l5=sj0;
sj0=4095ULL;
sj1=2047ULL;
sj2=l4;
sj3=4503599627370496ULL;
si2=sj2 < sj3;
sj0=si2?sj0:sj1;
sj1=l4;
sj2=52ULL;
sj1>>=(sj2&63);
sj0&=sj1;
l4=sj0;
sj1=0ULL;
si0=sj0 != sj1;
if(si0){
goto L10;
}
si0=l3;
si1=0U;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l3;
sj1=l5;
sj2=l5;
sj2=I64_CTZ(sj2);
l4=sj2;
sj1>>=(sj2&63);
i64_store(&i->m0,(U64)si0+24U,sj1);
sj0=l4;
sj1=-1074ULL;
sj0+=sj1;
l4=sj0;
goto L9;
L10:;
si0=l3;
si1=0U;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l3;
sj1=l5;
sj2=4503599627370496ULL;
sj1|=sj2;
l5=sj1;
sj2=l5;
sj2=I64_CTZ(sj2);
l6=sj2;
sj1>>=(sj2&63);
l5=sj1;
i64_store(&i->m0,(U64)si0+24U,sj1);
sj0=l4;
sj1=l6;
sj0+=sj1;
sj1=-1075ULL;
sj0+=sj1;
l4=sj0;
sj1=-1ULL;
si0=(U64)((I64)sj0>(I64)sj1);
if(si0){
goto L8;
}
L9:;
si0=l3;
si1=16U;
si0+=si1;
sj1=0ULL;
sj2=l4;
sj1-=sj2;
si2=l2;
f1028(i,si0,sj1,si2);
goto L7;
L8:;
sj0=l4;
si0=!(sj0);
if(si0){
goto L7;
}
sj0=l5;
si0=!(sj0);
if(si0){
goto L7;
}
sj0=l4;
sj1=63ULL;
si0=sj0 > sj1;
if(si0){
goto L11;
}
sj0=l5;
sj1=l4;
sj0<<=(sj1&63);
l6=sj0;
sj1=l4;
sj0>>=(sj1&63);
sj1=l5;
si0=sj0 != sj1;
if(si0){
goto L11;
}
si0=l3;
sj1=l6;
i64_store(&i->m0,(U64)si0+24U,sj1);
goto L7;
L11:;
si0=l3;
sj1=l5;
i64_store(&i->m0,(U64)si0+40U,sj1);
si0=l3;
si1=16U;
si0+=si1;
si1=4U;
si0|=si1;
si1=l3;
si2=40U;
si1+=si2;
si2=1U;
sj3=l4;
f1024(i,si0,si1,si2,sj3);
si0=l3;
si1=1U;
i32_store(&i->m0,(U64)si0+16U,si1);
L7:;
si0=l0;
si1=l3;
sj1=i64_load(&i->m0,(U64)si1+16U);
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
goto L1;
L6:;
si0=l2;
si1=255U;
si0&=si1;
l2=si0;
si1=-3U;
si0+=si1;
si1=2U;
si0=si0 < si1;
if(si0){
goto L12;
}
si0=l2;
if(si0){
goto L2;
}
L12:;
si0=l0;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=8U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
goto L1;
L5:;
si0=l3;
si1=369U;
i32_store(&i->m0,(U64)si0+44U,si1);
si0=l3;
si1=l3;
si2=8U;
si1+=si2;
i32_store(&i->m0,(U64)si0+40U,si1);
si0=l3;
si1=16U;
si0+=si1;
si1=1189400U;
si2=2U;
si3=l3;
si4=40U;
si3+=si4;
si4=1U;
f920(i,si0,si1,si2,si3,si4);
si0=l3;
si1=16U;
si0+=si1;
si1=1189356U;
f614(i,si0,si1);
UNREACHABLE;
L4:;
si0=l0;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=8U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
goto L1;
L3:;
si0=1232040U;
si1=31U;
si2=1232072U;
f604(i,si0,si1,si2);
UNREACHABLE;
L2:;
si0=l3;
si1=28U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=1U;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l3;
si1=1189208U;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l3;
si1=1186288U;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l3;
si1=16U;
si0+=si1;
si1=1189356U;
f614(i,si0,si1);
UNREACHABLE;
L1:;
si0=l3;
si1=48U;
si0+=si1;
i->g0=si0;
L0:;
}

void f975(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U64 l4) {
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 l8=0;
U64 l9=0;
U64 l10=0;
U32 l11=0;
U32 l12=0;
U32 l13=0;
U64 l14=0;
U32 si0,si1,si2,si3,si4;
U64 sj0,sj1,sj2,sj3;
si0=i->g0;
si1=32U;
si0-=si1;
l5=si0;
i->g0=si0;
si0=l5;
si1=l1;
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=l3;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l1;
si1=l3;
si0=si0 != si1;
if(si0){
goto L5;
}
sj0=l4;
si0=!(sj0);
si0=!(si0);
if(si0){
goto L6;
}
si0=l0;
si1=l2;
si2=l1;
si3=3U;
si2<<=(si3&31);
si0=f15143(i,si0,si1,si2);
goto L1;
L6:;
si0=l1;
si0=!(si0);
if(si0){
goto L2;
}
sj0=l4;
sj1=63ULL;
si0=sj0 > sj1;
if(si0){
goto L9;
}
si0=l1;
si1=-1U;
si0+=si1;
l6=si0;
si1=3U;
si0<<=(si1&31);
l7=si0;
si0=l1;
si1=1U;
si0&=si1;
l8=si0;
sj0=0ULL;
l9=sj0;
sj0=0ULL;
sj1=l4;
sj0-=sj1;
sj1=63ULL;
sj0&=sj1;
l10=sj0;
si0=l6;
if(si0){
goto L8;
}
si0=0U;
l11=si0;
goto L7;
L9:;
si0=1200324U;
si1=36U;
si2=1200360U;
f604(i,si0,si1,si2);
UNREACHABLE;
L8:;
si0=l1;
si1=-2U;
si0&=si1;
l12=si0;
si0=0U;
l11=si0;
sj0=0ULL;
l9=sj0;
si0=l2;
l3=si0;
si0=l0;
l13=si0;
L10:;
{
si0=l13;
si1=l3;
sj1=i64_load(&i->m0,(U64)si1);
l14=sj1;
sj2=l4;
sj1<<=(sj2&63);
sj2=l9;
sj1|=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l13;
si1=8U;
si0+=si1;
si1=l3;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
l9=sj1;
sj2=l4;
sj1<<=(sj2&63);
sj2=l14;
sj3=l10;
sj2>>=(sj3&63);
sj1|=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=16U;
si0+=si1;
l3=si0;
si0=l13;
si1=16U;
si0+=si1;
l13=si0;
sj0=l9;
sj1=l10;
sj0>>=(sj1&63);
l9=sj0;
si0=l12;
si1=l11;
si2=2U;
si1+=si2;
l11=si1;
si0=si0 != si1;
if(si0){
goto L10;
}
}
L7:;
si0=l2;
si1=l7;
si0+=si1;
l3=si0;
si0=l8;
si0=!(si0);
if(si0){
goto L11;
}
si0=l0;
si1=l11;
si2=3U;
si1<<=(si2&31);
l13=si1;
si0+=si1;
si1=l2;
si2=l13;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
sj2=l4;
sj1<<=(sj2&63);
sj2=l9;
sj1|=sj2;
i64_store(&i->m0,(U64)si0,sj1);
L11:;
si0=l3;
sj0=i64_load(&i->m0,(U64)si0);
l14=sj0;
si0=l0;
si1=l6;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l3=si0;
sj0=i64_load(&i->m0,(U64)si0);
l4=sj0;
si0=l3;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=l0;
sj1=i64_load(&i->m0,(U64)si1);
l9=sj1;
sj2=l4;
sj1-=sj2;
i64_store(&i->m0,(U64)si0,sj1);
sj0=l9;
sj1=l4;
si0=sj0 >= sj1;
if(si0){
goto L12;
}
si0=l0;
si1=8U;
si0+=si1;
l3=si0;
si0=l1;
si1=3U;
si0<<=(si1&31);
si1=-8U;
si0+=si1;
l13=si0;
L13:;
{
si0=l13;
si0=!(si0);
if(si0){
goto L12;
}
si0=l3;
si1=l3;
sj1=i64_load(&i->m0,(U64)si1);
l4=sj1;
sj2=-1ULL;
sj1+=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l13;
si1=-8U;
si0+=si1;
l13=si0;
si0=l3;
si1=8U;
si0+=si1;
l3=si0;
sj0=l4;
si0=!(sj0);
if(si0){
goto L13;
}
}
L12:;
si0=l6;
si0=!(si0);
if(si0){
goto L4;
}
si0=l0;
sj0=i64_load(&i->m0,(U64)si0+8U);
l4=sj0;
sj1=l14;
sj2=l10;
sj1=(U64)((I64)sj1>>(sj2&63));
l10=sj1;
sj0-=sj1;
l9=sj0;
sj1=l4;
sj0^=sj1;
sj1=-1ULL;
si0=(U64)((I64)sj0>(I64)sj1);
if(si0){
goto L3;
}
sj0=0ULL;
sj1=l10;
sj0-=sj1;
l14=sj0;
sj1=-1ULL;
si0=(U64)((I64)sj0>(I64)sj1);
if(si0){
goto L14;
}
si0=l0;
sj1=l9;
i64_store(&i->m0,(U64)si0+8U,sj1);
sj0=l4;
sj1=l10;
si0=sj0 >= sj1;
if(si0){
goto L1;
}
si0=l0;
si1=16U;
si0+=si1;
l3=si0;
si0=l1;
si1=3U;
si0<<=(si1&31);
si1=-16U;
si0+=si1;
l13=si0;
L15:;
{
si0=l13;
si0=!(si0);
if(si0){
goto L1;
}
si0=l3;
si1=l3;
sj1=i64_load(&i->m0,(U64)si1);
l4=sj1;
sj2=-1ULL;
sj1+=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l13;
si1=-8U;
si0+=si1;
l13=si0;
si0=l3;
si1=8U;
si0+=si1;
l3=si0;
sj0=l4;
si0=!(sj0);
si0=!(si0);
if(si0){
goto L1;
}
goto L15;
}
L14:;
si0=l0;
sj1=l4;
sj2=l14;
sj1+=sj2;
l9=sj1;
i64_store(&i->m0,(U64)si0+8U,sj1);
sj0=l9;
sj1=l4;
si0=sj0 >= sj1;
if(si0){
goto L1;
}
si0=l0;
si1=16U;
si0+=si1;
l3=si0;
si0=l1;
si1=3U;
si0<<=(si1&31);
si1=-16U;
si0+=si1;
l13=si0;
L16:;
{
si0=l13;
si0=!(si0);
if(si0){
goto L1;
}
si0=l3;
si1=l3;
sj1=i64_load(&i->m0,(U64)si1);
sj2=1ULL;
sj1+=sj2;
l4=sj1;
i64_store(&i->m0,(U64)si0,sj1);
si0=l13;
si1=-8U;
si0+=si1;
l13=si0;
si0=l3;
si1=8U;
si0+=si1;
l3=si0;
sj0=l4;
si0=!(sj0);
si0=!(si0);
if(si0){
goto L1;
}
goto L16;
}
L5:;
si0=l5;
si1=0U;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=0U;
si1=l5;
si2=l5;
si3=4U;
si2+=si3;
si3=l5;
si4=8U;
si3+=si4;
si4=1189792U;
f1250(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L4:;
si0=1189451U;
si1=43U;
si2=1189760U;
f604(i,si0,si1,si2);
UNREACHABLE;
L3:;
si0=l0;
sj1=l9;
i64_store(&i->m0,(U64)si0+8U,sj1);
goto L1;
L2:;
si0=1189451U;
si1=43U;
si2=1189776U;
f604(i,si0,si1,si2);
UNREACHABLE;
L1:;
si0=l5;
si1=32U;
si0+=si1;
i->g0=si0;
L0:;
}

void f976(rustpythonInstance*i,U32 l0,U32 l1,U64 l2) {
U64 l3=0;
U32 l4=0;
U32 l5=0;
U64 l6=0;
U64 l7=0;
U64 l8=0;
U32 l9=0;
U32 l10=0;
U32 l11=0;
U32 l12=0;
U64 l13=0;
U32 si0,si1,si2;
U64 sj0,sj1,sj2,sj3;
sj0=l2;
sj1=0ULL;
si0=sj0 == sj1;
if(si0){
goto L5;
}
si0=l1;
si0=!(si0);
if(si0){
goto L4;
}
sj0=l2;
sj1=63ULL;
si0=sj0 > sj1;
if(si0){
goto L3;
}
sj0=0ULL;
l3=sj0;
si0=l0;
si1=l1;
si2=-1U;
si1+=si2;
l4=si1;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l5=si0;
sj0=i64_load(&i->m0,(U64)si0);
l6=sj0;
sj0=0ULL;
sj1=l2;
sj0-=sj1;
l7=sj0;
sj1=63ULL;
sj0&=sj1;
l8=sj0;
si0=l4;
si1=536870911U;
si0&=si1;
l9=si0;
si1=1U;
si0+=si1;
l10=si0;
si1=3U;
si0&=si1;
l11=si0;
si0=l0;
l12=si0;
si0=l9;
si1=3U;
si0=si0 < si1;
if(si0){
goto L6;
}
si0=l10;
si1=1073741820U;
si0&=si1;
l9=si0;
sj0=0ULL;
l3=sj0;
si0=l0;
l12=si0;
L7:;
{
si0=l12;
si1=l12;
sj1=i64_load(&i->m0,(U64)si1);
l13=sj1;
sj2=l2;
sj1<<=(sj2&63);
sj2=l3;
sj1|=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l12;
si1=8U;
si0+=si1;
l10=si0;
si1=l10;
sj1=i64_load(&i->m0,(U64)si1);
l3=sj1;
sj2=l2;
sj1<<=(sj2&63);
sj2=l13;
sj3=l8;
sj2>>=(sj3&63);
sj1|=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l12;
si1=16U;
si0+=si1;
l10=si0;
si1=l10;
sj1=i64_load(&i->m0,(U64)si1);
l13=sj1;
sj2=l2;
sj1<<=(sj2&63);
sj2=l3;
sj3=l8;
sj2>>=(sj3&63);
sj1|=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l12;
si1=24U;
si0+=si1;
l10=si0;
si1=l10;
sj1=i64_load(&i->m0,(U64)si1);
l3=sj1;
sj2=l2;
sj1<<=(sj2&63);
sj2=l13;
sj3=l8;
sj2>>=(sj3&63);
sj1|=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l12;
si1=32U;
si0+=si1;
l12=si0;
sj0=l3;
sj1=l8;
sj0>>=(sj1&63);
l3=sj0;
si0=l9;
si1=-4U;
si0+=si1;
l9=si0;
if(si0){
goto L7;
}
}
L6:;
si0=l11;
si0=!(si0);
if(si0){
goto L8;
}
L9:;
{
si0=l12;
si1=l12;
sj1=i64_load(&i->m0,(U64)si1);
l13=sj1;
sj2=l2;
sj1<<=(sj2&63);
sj2=l3;
sj1|=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l12;
si1=8U;
si0+=si1;
l12=si0;
sj0=l13;
sj1=l8;
sj0>>=(sj1&63);
l3=sj0;
si0=l11;
si1=-1U;
si0+=si1;
l11=si0;
if(si0){
goto L9;
}
}
L8:;
si0=l5;
sj0=i64_load(&i->m0,(U64)si0);
l2=sj0;
si0=l5;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=l0;
sj1=i64_load(&i->m0,(U64)si1);
l8=sj1;
sj2=l2;
sj1-=sj2;
i64_store(&i->m0,(U64)si0,sj1);
sj0=l8;
sj1=l2;
si0=sj0 >= sj1;
if(si0){
goto L10;
}
si0=l0;
si1=8U;
si0+=si1;
l12=si0;
si0=l1;
si1=3U;
si0<<=(si1&31);
si1=-8U;
si0+=si1;
l11=si0;
L11:;
{
si0=l11;
si0=!(si0);
if(si0){
goto L10;
}
si0=l12;
si1=l12;
sj1=i64_load(&i->m0,(U64)si1);
l2=sj1;
sj2=-1ULL;
sj1+=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l11;
si1=-8U;
si0+=si1;
l11=si0;
si0=l12;
si1=8U;
si0+=si1;
l12=si0;
sj0=l2;
si0=!(sj0);
if(si0){
goto L11;
}
}
L10:;
si0=l4;
si0=!(si0);
if(si0){
goto L2;
}
si0=l0;
sj0=i64_load(&i->m0,(U64)si0+8U);
l2=sj0;
sj1=l6;
sj2=l7;
sj1=(U64)((I64)sj1>>(sj2&63));
l3=sj1;
sj0-=sj1;
l8=sj0;
sj1=l2;
sj0^=sj1;
sj1=-1ULL;
si0=(U64)((I64)sj0>(I64)sj1);
if(si0){
goto L1;
}
sj0=0ULL;
sj1=l3;
sj0-=sj1;
l13=sj0;
sj1=-1ULL;
si0=(U64)((I64)sj0>(I64)sj1);
if(si0){
goto L12;
}
si0=l0;
sj1=l8;
i64_store(&i->m0,(U64)si0+8U,sj1);
sj0=l2;
sj1=l3;
si0=sj0 >= sj1;
if(si0){
goto L5;
}
si0=l0;
si1=16U;
si0+=si1;
l12=si0;
si0=l1;
si1=3U;
si0<<=(si1&31);
si1=-16U;
si0+=si1;
l11=si0;
L13:;
{
si0=l11;
si0=!(si0);
if(si0){
goto L5;
}
si0=l12;
si1=l12;
sj1=i64_load(&i->m0,(U64)si1);
l2=sj1;
sj2=-1ULL;
sj1+=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l11;
si1=-8U;
si0+=si1;
l11=si0;
si0=l12;
si1=8U;
si0+=si1;
l12=si0;
sj0=l2;
si0=!(sj0);
if(si0){
goto L13;
}
goto L5;
}
L12:;
si0=l0;
sj1=l2;
sj2=l13;
sj1+=sj2;
l8=sj1;
i64_store(&i->m0,(U64)si0+8U,sj1);
sj0=l8;
sj1=l2;
si0=sj0 >= sj1;
if(si0){
goto L5;
}
si0=l0;
si1=16U;
si0+=si1;
l12=si0;
si0=l1;
si1=3U;
si0<<=(si1&31);
si1=-16U;
si0+=si1;
l11=si0;
L14:;
{
si0=l11;
si0=!(si0);
if(si0){
goto L5;
}
si0=l12;
si1=l12;
sj1=i64_load(&i->m0,(U64)si1);
sj2=1ULL;
sj1+=sj2;
l2=sj1;
i64_store(&i->m0,(U64)si0,sj1);
si0=l11;
si1=-8U;
si0+=si1;
l11=si0;
si0=l12;
si1=8U;
si0+=si1;
l12=si0;
sj0=l2;
si0=!(sj0);
if(si0){
goto L14;
}
}
L5:;
goto L0;
L4:;
si0=1189451U;
si1=43U;
si2=1189808U;
f604(i,si0,si1,si2);
UNREACHABLE;
L3:;
si0=1200324U;
si1=36U;
si2=1200392U;
f604(i,si0,si1,si2);
UNREACHABLE;
L2:;
si0=1189451U;
si1=43U;
si2=1189760U;
f604(i,si0,si1,si2);
UNREACHABLE;
L1:;
si0=l0;
sj1=l8;
i64_store(&i->m0,(U64)si0+8U,sj1);
L0:;
}

void f977(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 l3=0;
U64 l4=0;
U64 l5=0;
U64 l6=0;
U64 l7=0;
U32 l8=0;
U32 si0,si1,si2;
U64 sj0,sj1,sj2;
si0=l1;
si1=-1U;
si0+=si1;
l2=si0;
si0=l1;
si0=!(si0);
if(si0){
goto L3;
}
si0=l0;
si1=l2;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l3=si0;
sj0=i64_load(&i->m0,(U64)si0);
l4=sj0;
si0=!(sj0);
if(si0){
goto L1;
}
si0=l3;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
sj0=i64_load(&i->m0,(U64)si0);
l5=sj0;
sj1=l4;
sj0-=sj1;
l6=sj0;
sj1=l5;
sj0^=sj1;
sj1=-1ULL;
si0=(U64)((I64)sj0>(I64)sj1);
if(si0){
goto L4;
}
sj0=0ULL;
sj1=l4;
sj0-=sj1;
l7=sj0;
sj1=-1ULL;
si0=(U64)((I64)sj0>(I64)sj1);
if(si0){
goto L5;
}
si0=l0;
sj1=l6;
i64_store(&i->m0,(U64)si0,sj1);
sj0=l5;
sj1=l4;
si0=sj0 >= sj1;
if(si0){
goto L2;
}
si0=l0;
si1=8U;
si0+=si1;
l2=si0;
si0=l1;
si1=3U;
si0<<=(si1&31);
si1=-8U;
si0+=si1;
l8=si0;
L6:;
{
si0=l8;
si0=!(si0);
if(si0){
goto L2;
}
si0=l2;
si1=l2;
sj1=i64_load(&i->m0,(U64)si1);
l4=sj1;
sj2=-1ULL;
sj1+=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l8;
si1=-8U;
si0+=si1;
l8=si0;
si0=l2;
si1=8U;
si0+=si1;
l2=si0;
sj0=l4;
si0=!(sj0);
if(si0){
goto L6;
}
goto L2;
}
L5:;
si0=l0;
sj1=l5;
sj2=l7;
sj1+=sj2;
l4=sj1;
i64_store(&i->m0,(U64)si0,sj1);
sj0=l4;
sj1=l5;
si0=sj0 >= sj1;
if(si0){
goto L2;
}
si0=l0;
si1=8U;
si0+=si1;
l2=si0;
si0=l1;
si1=3U;
si0<<=(si1&31);
si1=-8U;
si0+=si1;
l8=si0;
L7:;
{
si0=l8;
si0=!(si0);
if(si0){
goto L2;
}
si0=l2;
si1=l2;
sj1=i64_load(&i->m0,(U64)si1);
sj2=1ULL;
sj1+=sj2;
l4=sj1;
i64_store(&i->m0,(U64)si0,sj1);
si0=l8;
si1=-8U;
si0+=si1;
l8=si0;
si0=l2;
si1=8U;
si0+=si1;
l2=si0;
sj0=l4;
si0=!(sj0);
if(si0){
goto L7;
}
goto L2;
}
L4:;
si0=l0;
sj1=l6;
i64_store(&i->m0,(U64)si0,sj1);
goto L2;
L3:;
si0=l2;
si1=0U;
si2=1189824U;
f594(i,si0,si1,si2);
UNREACHABLE;
L2:;
si0=l3;
sj0=i64_load(&i->m0,(U64)si0);
l4=sj0;
si0=!(sj0);
if(si0){
goto L1;
}
si0=l3;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
sj0=i64_load(&i->m0,(U64)si0);
l5=sj0;
sj1=l4;
sj0-=sj1;
l6=sj0;
sj1=l5;
sj0^=sj1;
sj1=-1ULL;
si0=(U64)((I64)sj0>(I64)sj1);
if(si0){
goto L9;
}
sj0=0ULL;
sj1=l4;
sj0-=sj1;
l7=sj0;
sj1=-1ULL;
si0=(U64)((I64)sj0>(I64)sj1);
if(si0){
goto L10;
}
si0=l0;
sj1=l6;
i64_store(&i->m0,(U64)si0,sj1);
sj0=l5;
sj1=l4;
si0=sj0 >= sj1;
if(si0){
goto L8;
}
si0=l0;
si1=8U;
si0+=si1;
l2=si0;
si0=l1;
si1=3U;
si0<<=(si1&31);
si1=-8U;
si0+=si1;
l8=si0;
L11:;
{
si0=l8;
si0=!(si0);
if(si0){
goto L8;
}
si0=l2;
si1=l2;
sj1=i64_load(&i->m0,(U64)si1);
l4=sj1;
sj2=-1ULL;
sj1+=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l8;
si1=-8U;
si0+=si1;
l8=si0;
si0=l2;
si1=8U;
si0+=si1;
l2=si0;
sj0=l4;
si0=!(sj0);
if(si0){
goto L11;
}
goto L8;
}
L10:;
si0=l0;
sj1=l5;
sj2=l7;
sj1+=sj2;
l4=sj1;
i64_store(&i->m0,(U64)si0,sj1);
sj0=l4;
sj1=l5;
si0=sj0 >= sj1;
if(si0){
goto L8;
}
si0=l0;
si1=8U;
si0+=si1;
l2=si0;
si0=l1;
si1=3U;
si0<<=(si1&31);
si1=-8U;
si0+=si1;
l8=si0;
L12:;
{
si0=l8;
si0=!(si0);
if(si0){
goto L8;
}
si0=l2;
si1=l2;
sj1=i64_load(&i->m0,(U64)si1);
sj2=1ULL;
sj1+=sj2;
l4=sj1;
i64_store(&i->m0,(U64)si0,sj1);
si0=l8;
si1=-8U;
si0+=si1;
l8=si0;
si0=l2;
si1=8U;
si0+=si1;
l2=si0;
sj0=l4;
si0=!(sj0);
if(si0){
goto L12;
}
goto L8;
}
L9:;
si0=l0;
sj1=l6;
i64_store(&i->m0,(U64)si0,sj1);
L8:;
si0=l3;
sj0=i64_load(&i->m0,(U64)si0);
sj1=-1ULL;
si0=sj0 != sj1;
if(si0){
goto L1;
}
si0=l3;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
sj0=i64_load(&i->m0,(U64)si0);
l5=sj0;
sj1=1ULL;
sj0+=sj1;
l4=sj0;
sj1=l5;
sj0^=sj1;
sj1=0ULL;
si0=(U64)((I64)sj0<(I64)sj1);
if(si0){
goto L13;
}
si0=l0;
sj1=l4;
i64_store(&i->m0,(U64)si0,sj1);
goto L0;
L13:;
si0=l0;
sj1=l4;
i64_store(&i->m0,(U64)si0,sj1);
sj0=l4;
sj1=0ULL;
si0=sj0 != sj1;
if(si0){
goto L1;
}
si0=l0;
si1=8U;
si0+=si1;
l2=si0;
si0=l1;
si1=3U;
si0<<=(si1&31);
si1=-8U;
si0+=si1;
l0=si0;
L14:;
{
si0=l0;
si0=!(si0);
if(si0){
goto L1;
}
si0=l2;
si1=l2;
sj1=i64_load(&i->m0,(U64)si1);
sj2=1ULL;
sj1+=sj2;
l4=sj1;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=-8U;
si0+=si1;
l0=si0;
si0=l2;
si1=8U;
si0+=si1;
l2=si0;
sj0=l4;
si0=!(sj0);
if(si0){
goto L14;
}
}
L1:;
L0:;
}

U32 f978(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4) {
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
U32 si0,si1,si2,si3,si4,si5,si6;
U64 sj0,sj1,sj2,sj3,sj4;
si0=i->g0;
si1=32U;
si0-=si1;
l5=si0;
i->g0=si0;
si0=l5;
si1=l2;
si2=63U;
si1+=si2;
l6=si1;
si2=-64U;
si1&=si2;
l7=si1;
si2=l2;
si1-=si2;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l7;
si1=l2;
si0=si0 != si1;
if(si0){
goto L1;
}
si0=l6;
si1=6U;
si0>>=(si1&31);
l8=si0;
si1=l1;
si0=si0 > si1;
if(si0){
goto L3;
}
si0=l4;
si1=l8;
si2=1U;
si1<<=(si2&31);
l2=si1;
si0=si0 < si1;
if(si0){
goto L2;
}
si0=l3;
si1=l2;
si2=l0;
si3=l8;
si4=l3;
si5=l2;
si6=3U;
si5<<=(si6&31);
si4+=si5;
si5=l4;
si6=l2;
si5-=si6;
f1076(i,si0,si1,si2,si3,si4,si5);
si0=0U;
l7=si0;
si0=l6;
si1=64U;
si0=si0 < si1;
if(si0){
goto L4;
}
si0=l8;
si1=1U;
si0=si0 != si1;
if(si0){
goto L6;
}
si0=0U;
l1=si0;
si0=0U;
l7=si0;
goto L5;
L6:;
si0=l8;
si1=3U;
si0<<=(si1&31);
l9=si0;
si0=l8;
si1=67108862U;
si0&=si1;
l10=si0;
si0=0U;
l1=si0;
si0=l3;
l2=si0;
si0=l0;
l4=si0;
si0=0U;
l7=si0;
L7:;
{
si0=l4;
si1=l2;
sj1=i64_load(&i->m0,(U64)si1);
l11=sj1;
si2=l1;
sj2=(U64)(si2);
sj3=1ULL;
sj2&=sj3;
sj1-=sj2;
si2=l2;
si3=l9;
si2+=si3;
l12=si2;
sj2=i64_load(&i->m0,(U64)si2);
l13=sj2;
sj1-=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=8U;
si0+=si1;
si1=l2;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
l14=sj1;
sj2=l11;
sj3=l13;
si2=sj2 <= sj3;
sj3=l11;
sj4=l13;
si3=sj3 < sj4;
si4=l1;
si5=1U;
si4&=si5;
si2=si4?si2:si3;
l1=si2;
sj2=(U64)(si2);
sj1-=sj2;
si2=l12;
si3=8U;
si2+=si3;
sj2=i64_load(&i->m0,(U64)si2);
l11=sj2;
sj1-=sj2;
i64_store(&i->m0,(U64)si0,sj1);
sj0=l14;
sj1=l11;
si0=sj0 <= sj1;
sj1=l14;
sj2=l11;
si1=sj1 < sj2;
si2=l1;
si0=si2?si0:si1;
l1=si0;
si0=l2;
si1=16U;
si0+=si1;
l2=si0;
si0=l4;
si1=16U;
si0+=si1;
l4=si0;
si0=l10;
si1=l7;
si2=2U;
si1+=si2;
l7=si1;
si0=si0 != si1;
if(si0){
goto L7;
}
}
L5:;
si0=l6;
si1=64U;
si0&=si1;
si0=!(si0);
if(si0){
goto L8;
}
si0=l0;
si1=l7;
si2=3U;
si1<<=(si2&31);
l2=si1;
si0+=si1;
si1=l3;
si2=l2;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
l11=sj1;
si2=l1;
sj2=(U64)(si2);
sj1-=sj2;
si2=l3;
si3=l8;
si4=3U;
si3<<=(si4&31);
si2+=si3;
si3=l2;
si2+=si3;
sj2=i64_load(&i->m0,(U64)si2);
l13=sj2;
sj1-=sj2;
i64_store(&i->m0,(U64)si0,sj1);
sj0=l11;
sj1=l13;
si0=sj0 <= sj1;
sj1=l11;
sj2=l13;
si1=sj1 < sj2;
si2=l1;
si0=si2?si0:si1;
l1=si0;
L8:;
si0=0U;
l7=si0;
si0=l1;
si1=1U;
si0&=si1;
si0=!(si0);
if(si0){
goto L4;
}
si0=l0;
si1=l0;
sj1=i64_load(&i->m0,(U64)si1);
sj2=1ULL;
sj1+=sj2;
l11=sj1;
i64_store(&i->m0,(U64)si0,sj1);
sj0=l11;
sj1=0ULL;
si0=sj0 != sj1;
if(si0){
goto L4;
}
si0=l0;
si1=8U;
si0+=si1;
l4=si0;
si0=l8;
si1=3U;
si0<<=(si1&31);
si1=-8U;
si0+=si1;
l2=si0;
L9:;
{
si0=l2;
si0=!(si0);
l7=si0;
si0=l2;
si0=!(si0);
if(si0){
goto L4;
}
si0=l4;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1);
sj2=1ULL;
sj1+=sj2;
l11=sj1;
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=-8U;
si0+=si1;
l2=si0;
si0=l4;
si1=8U;
si0+=si1;
l4=si0;
sj0=l11;
si0=!(sj0);
if(si0){
goto L9;
}
}
L4:;
si0=l5;
si1=32U;
si0+=si1;
i->g0=si0;
si0=l7;
goto L0;
L3:;
si0=l8;
si1=l1;
si2=1189844U;
f597(i,si0,si1,si2);
UNREACHABLE;
L2:;
si0=1189416U;
si1=35U;
si2=1189860U;
f604(i,si0,si1,si2);
UNREACHABLE;
L1:;
si0=l5;
si1=0U;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=0U;
si1=l5;
si2=4U;
si1+=si2;
si2=1189840U;
si3=l5;
si4=8U;
si3+=si4;
si4=1189876U;
f1250(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L0:;
return si0;
}

U32 f979(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4,U32 l5,U32 l6,U32 l7) {
U32 l8=0;
U32 l9=0;
U64 l10=0;
U32 l11=0;
U32 l12=0;
U64 l13=0;
U64 l14=0;
U32 si0,si1,si2,si3,si4,si5,si6,si7,si8;
U64 sj0,sj1,sj2,sj3,sj4;
si0=i->g0;
si1=48U;
si0-=si1;
l8=si0;
i->g0=si0;
si0=l8;
si1=l5;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l4;
if(si0){
goto L8;
}
si0=l5;
if(si0){
goto L7;
}
si0=l8;
si1=l1;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l8;
si1=l3;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l3;
si1=l1;
si0=si0 == si1;
if(si0){
goto L6;
}
si0=l8;
si1=0U;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=0U;
si1=l8;
si2=20U;
si1+=si2;
si2=l8;
si3=16U;
si2+=si3;
si3=l8;
si4=24U;
si3+=si4;
si4=1189924U;
f1250(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L8:;
si0=l1;
si0=!(si0);
if(si0){
goto L4;
}
si0=l1;
si1=3U;
si0<<=(si1&31);
l2=si0;
si0=l1;
si1=-1U;
si0+=si1;
si1=536870911U;
si0&=si1;
si1=1U;
si0+=si1;
l9=si0;
si0=0U;
l4=si0;
si0=0U;
l7=si0;
L10:;
{
si0=l0;
si1=l4;
si0+=si1;
sj0=i64_load(&i->m0,(U64)si0);
sj1=0ULL;
si0=sj0 != sj1;
if(si0){
goto L9;
}
si0=l7;
si1=1U;
si0+=si1;
l7=si0;
si0=l2;
si1=l4;
si2=8U;
si1+=si2;
l4=si1;
si0=si0 != si1;
if(si0){
goto L10;
}
}
si0=l9;
l7=si0;
L9:;
si0=0U;
l9=si0;
si0=l7;
si1=l1;
si0=si0 == si1;
if(si0){
goto L11;
}
si0=l7;
si1=l1;
si0=si0 >= si1;
if(si0){
goto L3;
}
si0=l0;
si1=l7;
si2=3U;
si1<<=(si2&31);
l2=si1;
si0+=si1;
l4=si0;
sj1=0ULL;
si2=l4;
sj2=i64_load(&i->m0,(U64)si2);
sj1-=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l7;
si1=1U;
si0+=si1;
l4=si0;
si1=l1;
si0=si0 == si1;
if(si0){
goto L12;
}
si0=l1;
si1=3U;
si0<<=(si1&31);
si1=l2;
si0-=si1;
si1=-8U;
si0+=si1;
l7=si0;
si0=l0;
si1=l4;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l4=si0;
L13:;
{
si0=l4;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1);
sj2=-1ULL;
sj1^=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=8U;
si0+=si1;
l4=si0;
si0=l7;
si1=-8U;
si0+=si1;
l7=si0;
if(si0){
goto L13;
}
}
L12:;
si0=l0;
si1=l0;
sj1=i64_load(&i->m0,(U64)si1);
sj2=1ULL;
sj1+=sj2;
l10=sj1;
i64_store(&i->m0,(U64)si0,sj1);
sj0=l10;
sj1=0ULL;
si0=sj0 != sj1;
if(si0){
goto L11;
}
si0=l0;
si1=8U;
si0+=si1;
l7=si0;
si0=l1;
si1=3U;
si0<<=(si1&31);
si1=-8U;
si0+=si1;
l4=si0;
L14:;
{
si0=l4;
si0=!(si0);
l9=si0;
si0=l4;
si0=!(si0);
if(si0){
goto L11;
}
si0=l7;
si1=l7;
sj1=i64_load(&i->m0,(U64)si1);
sj2=1ULL;
sj1+=sj2;
l10=sj1;
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=-8U;
si0+=si1;
l4=si0;
si0=l7;
si1=8U;
si0+=si1;
l7=si0;
sj0=l10;
si0=!(sj0);
if(si0){
goto L14;
}
}
L11:;
si0=l1;
si1=3U;
si0<<=(si1&31);
si1=l0;
si0+=si1;
si1=-8U;
si0+=si1;
l4=si0;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1);
sj2=-1ULL;
si3=l5;
si4=63U;
si3&=si4;
sj3=(U64)(si3);
sj2>>=(sj3&63);
sj1&=sj2;
i64_store(&i->m0,(U64)si0,sj1);
goto L5;
L7:;
si0=l8;
si1=0U;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=0U;
si1=l8;
si2=12U;
si1+=si2;
si2=1189840U;
si3=l8;
si4=24U;
si3+=si4;
si4=1189940U;
f1250(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L6:;
si0=l7;
si1=l3;
si2=1U;
si1<<=(si2&31);
l4=si1;
si0=si0 < si1;
if(si0){
goto L2;
}
si0=l6;
si1=l4;
si2=l0;
si3=l3;
si4=l2;
si5=l3;
si6=l6;
si7=l4;
si8=3U;
si7<<=(si8&31);
si6+=si7;
si7=l7;
si8=l4;
si7-=si8;
f1121(i,si0,si1,si2,si3,si4,si5,si6,si7);
si0=l3;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L1;
}
si0=l3;
if(si0){
goto L15;
}
si0=0U;
l9=si0;
goto L5;
L15:;
si0=l3;
si1=1U;
si0&=si1;
l11=si0;
si0=l3;
si1=1U;
si0=si0 != si1;
if(si0){
goto L17;
}
si0=0U;
l2=si0;
si0=0U;
l9=si0;
goto L16;
L17:;
si0=l3;
si1=3U;
si0<<=(si1&31);
l5=si0;
si0=l3;
si1=-2U;
si0&=si1;
l12=si0;
si0=0U;
l2=si0;
si0=l6;
l4=si0;
si0=l0;
l7=si0;
si0=0U;
l9=si0;
L18:;
{
si0=l7;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1);
l10=sj1;
si2=l2;
sj2=(U64)(si2);
sj3=1ULL;
sj2&=sj3;
sj1-=sj2;
si2=l4;
si3=l5;
si2+=si3;
l1=si2;
sj2=i64_load(&i->m0,(U64)si2);
l13=sj2;
sj1-=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l7;
si1=8U;
si0+=si1;
si1=l4;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
l14=sj1;
sj2=l10;
sj3=l13;
si2=sj2 <= sj3;
sj3=l10;
sj4=l13;
si3=sj3 < sj4;
si4=l2;
si5=1U;
si4&=si5;
si2=si4?si2:si3;
l2=si2;
sj2=(U64)(si2);
sj1-=sj2;
si2=l1;
si3=8U;
si2+=si3;
sj2=i64_load(&i->m0,(U64)si2);
l10=sj2;
sj1-=sj2;
i64_store(&i->m0,(U64)si0,sj1);
sj0=l14;
sj1=l10;
si0=sj0 <= sj1;
sj1=l14;
sj2=l10;
si1=sj1 < sj2;
si2=l2;
si0=si2?si0:si1;
l2=si0;
si0=l4;
si1=16U;
si0+=si1;
l4=si0;
si0=l7;
si1=16U;
si0+=si1;
l7=si0;
si0=l12;
si1=l9;
si2=2U;
si1+=si2;
l9=si1;
si0=si0 != si1;
if(si0){
goto L18;
}
}
L16:;
si0=l11;
si0=!(si0);
if(si0){
goto L19;
}
si0=l0;
si1=l9;
si2=3U;
si1<<=(si2&31);
l4=si1;
si0+=si1;
si1=l6;
si2=l4;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
l10=sj1;
si2=l2;
sj2=(U64)(si2);
sj1-=sj2;
si2=l6;
si3=l3;
si4=3U;
si3<<=(si4&31);
si2+=si3;
si3=l4;
si2+=si3;
sj2=i64_load(&i->m0,(U64)si2);
l13=sj2;
sj1-=sj2;
i64_store(&i->m0,(U64)si0,sj1);
sj0=l10;
sj1=l13;
si0=sj0 <= sj1;
sj1=l10;
sj2=l13;
si1=sj1 < sj2;
si2=l2;
si0=si2?si0:si1;
l2=si0;
L19:;
si0=0U;
l9=si0;
si0=l2;
si1=1U;
si0&=si1;
si0=!(si0);
if(si0){
goto L5;
}
si0=l0;
si1=l0;
sj1=i64_load(&i->m0,(U64)si1);
sj2=1ULL;
sj1+=sj2;
l10=sj1;
i64_store(&i->m0,(U64)si0,sj1);
sj0=l10;
sj1=0ULL;
si0=sj0 != sj1;
if(si0){
goto L5;
}
si0=l0;
si1=8U;
si0+=si1;
l7=si0;
si0=l3;
si1=3U;
si0<<=(si1&31);
si1=-8U;
si0+=si1;
l4=si0;
L20:;
{
si0=l4;
si0=!(si0);
l9=si0;
si0=l4;
si0=!(si0);
if(si0){
goto L5;
}
si0=l7;
si1=l7;
sj1=i64_load(&i->m0,(U64)si1);
sj2=1ULL;
sj1+=sj2;
l10=sj1;
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=-8U;
si0+=si1;
l4=si0;
si0=l7;
si1=8U;
si0+=si1;
l7=si0;
sj0=l10;
si0=!(sj0);
if(si0){
goto L20;
}
}
L5:;
si0=l8;
si1=48U;
si0+=si1;
i->g0=si0;
si0=l9;
goto L0;
L4:;
si0=1189451U;
si1=43U;
si2=1189956U;
f604(i,si0,si1,si2);
UNREACHABLE;
L3:;
si0=l7;
si1=l1;
si2=1238956U;
f594(i,si0,si1,si2);
UNREACHABLE;
L2:;
si0=1189416U;
si1=35U;
si2=1189892U;
f604(i,si0,si1,si2);
UNREACHABLE;
L1:;
si0=1189416U;
si1=35U;
si2=1189908U;
f604(i,si0,si1,si2);
UNREACHABLE;
L0:;
return si0;
}

void f980(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4,U32 l5) {
U32 l6=0;
U64 l7=0;
U64 l8=0;
U32 l9=0;
U32 l10=0;
U64 l11=0;
U64 l12=0;
U64 l13=0;
U32 si0,si1,si2,si3,si4;
U64 sj0,sj1,sj2,sj4;
si0=i->g0;
si1=32U;
si0-=si1;
l6=si0;
i->g0=si0;
si0=l6;
si1=l3;
i32_store(&i->m0,(U64)si0,si1);
si0=l6;
si1=l1;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l1;
si1=l3;
si0=si0 != si1;
if(si0){
goto L9;
}
si0=l4;
sj0=(U64)(si0);
si1=l5;
sj1=(U64)(si1);
sj0*=sj1;
l7=sj0;
sj1=32ULL;
sj0>>=(sj1&63);
si0=(U32)(sj0);
if(si0){
goto L8;
}
sj0=l7;
si0=(U32)(sj0);
l3=si0;
si1=63U;
si0&=si1;
sj0=(U64)(si0);
l8=sj0;
si0=l3;
si1=63U;
si0=si0 > si1;
if(si0){
goto L10;
}
si0=l0;
si1=l1;
si2=l2;
si3=l1;
sj4=l8;
f975(i,si0,si1,si2,si3,sj4);
goto L1;
L10:;
si0=l1;
si0=!(si0);
if(si0){
goto L2;
}
si0=l3;
si1=6U;
si0>>=(si1&31);
l5=si0;
si1=-1U;
si0^=si1;
si1=l1;
si0+=si1;
l3=si0;
si1=l1;
si0=si0 > si1;
if(si0){
goto L7;
}
si0=l1;
si1=-1U;
si0+=si1;
l9=si0;
si1=l5;
si0=si0 < si1;
if(si0){
goto L6;
}
si0=l9;
si1=l5;
si0-=si1;
l4=si0;
si1=l3;
si0=si0 != si1;
if(si0){
goto L5;
}
si0=l0;
si1=l5;
si2=3U;
si1<<=(si2&31);
l10=si1;
si0+=si1;
si1=l2;
si2=l3;
si3=3U;
si2<<=(si3&31);
l3=si2;
si0=f15143(i,si0,si1,si2);
l4=si0;
si0=l0;
si1=l9;
si2=3U;
si1<<=(si2&31);
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=l1;
si2=l2;
si3=l3;
si2+=si3;
l3=si2;
si3=l5;
si0=f1197(i,si0,si1,si2,si3);
l9=si0;
si0=l4;
sj0=i64_load(&i->m0,(U64)si0);
l7=sj0;
si1=l3;
si2=l10;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
l11=sj1;
sj0-=sj1;
l12=sj0;
sj1=l7;
sj0^=sj1;
sj1=-1ULL;
si0=(U64)((I64)sj0>(I64)sj1);
if(si0){
goto L4;
}
sj0=0ULL;
sj1=l11;
sj0-=sj1;
l13=sj0;
sj1=-1ULL;
si0=(U64)((I64)sj0>(I64)sj1);
if(si0){
goto L11;
}
si0=l4;
sj1=l12;
i64_store(&i->m0,(U64)si0,sj1);
sj0=l7;
sj1=l11;
si0=sj0 >= sj1;
if(si0){
goto L3;
}
si0=l1;
si1=3U;
si0<<=(si1&31);
si1=l5;
si2=3U;
si1<<=(si2&31);
l3=si1;
si0-=si1;
si1=-8U;
si0+=si1;
l2=si0;
si0=l3;
si1=l0;
si0+=si1;
si1=8U;
si0+=si1;
l3=si0;
L12:;
{
si0=l2;
si0=!(si0);
if(si0){
goto L3;
}
si0=l3;
si1=l3;
sj1=i64_load(&i->m0,(U64)si1);
l7=sj1;
sj2=-1ULL;
sj1+=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=-8U;
si0+=si1;
l2=si0;
si0=l3;
si1=8U;
si0+=si1;
l3=si0;
sj0=l7;
si0=!(sj0);
if(si0){
goto L12;
}
goto L3;
}
L11:;
si0=l4;
sj1=l7;
sj2=l13;
sj1+=sj2;
l12=sj1;
i64_store(&i->m0,(U64)si0,sj1);
sj0=l12;
sj1=l7;
si0=sj0 >= sj1;
if(si0){
goto L3;
}
si0=l1;
si1=3U;
si0<<=(si1&31);
si1=l5;
si2=3U;
si1<<=(si2&31);
l3=si1;
si0-=si1;
si1=-8U;
si0+=si1;
l2=si0;
si0=l3;
si1=l0;
si0+=si1;
si1=8U;
si0+=si1;
l3=si0;
L13:;
{
si0=l2;
si0=!(si0);
if(si0){
goto L3;
}
si0=l3;
si1=l3;
sj1=i64_load(&i->m0,(U64)si1);
sj2=1ULL;
sj1+=sj2;
l7=sj1;
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=-8U;
si0+=si1;
l2=si0;
si0=l3;
si1=8U;
si0+=si1;
l3=si0;
sj0=l7;
si0=!(sj0);
if(si0){
goto L13;
}
goto L3;
}
L9:;
si0=l6;
si1=0U;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=0U;
si1=l6;
si2=4U;
si1+=si2;
si2=l6;
si3=l6;
si4=8U;
si3+=si4;
si4=1190084U;
f1250(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L8:;
si0=1189451U;
si1=43U;
si2=1190004U;
f604(i,si0,si1,si2);
UNREACHABLE;
L7:;
si0=1189416U;
si1=35U;
si2=1190036U;
f604(i,si0,si1,si2);
UNREACHABLE;
L6:;
si0=l5;
si1=l9;
si2=1190052U;
f593(i,si0,si1,si2);
UNREACHABLE;
L5:;
si0=l4;
si1=l3;
si2=1190068U;
f685(i,si0,si1,si2);
UNREACHABLE;
L4:;
si0=l4;
sj1=l12;
i64_store(&i->m0,(U64)si0,sj1);
L3:;
si0=l9;
si0=!(si0);
if(si0){
goto L14;
}
si0=l4;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1);
l7=sj1;
sj2=-1ULL;
sj1+=sj2;
i64_store(&i->m0,(U64)si0,sj1);
sj0=l7;
sj1=0ULL;
si0=sj0 != sj1;
if(si0){
goto L14;
}
si0=l1;
si1=3U;
si0<<=(si1&31);
si1=l5;
si2=3U;
si1<<=(si2&31);
l3=si1;
si0-=si1;
si1=-8U;
si0+=si1;
l2=si0;
si0=l3;
si1=l0;
si0+=si1;
si1=8U;
si0+=si1;
l3=si0;
L15:;
{
si0=l2;
si0=!(si0);
if(si0){
goto L14;
}
si0=l3;
si1=l3;
sj1=i64_load(&i->m0,(U64)si1);
l7=sj1;
sj2=-1ULL;
sj1+=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=-8U;
si0+=si1;
l2=si0;
si0=l3;
si1=8U;
si0+=si1;
l3=si0;
sj0=l7;
si0=!(sj0);
if(si0){
goto L15;
}
}
L14:;
si0=l0;
si1=l1;
sj2=l8;
f976(i,si0,si1,sj2);
goto L1;
L2:;
si0=1189451U;
si1=43U;
si2=1190020U;
f604(i,si0,si1,si2);
UNREACHABLE;
L1:;
si0=l6;
si1=32U;
si0+=si1;
i->g0=si0;
L0:;
}

void f981(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4,U32 l5,U32 l6,U32 l7) {
U32 l8=0;
U32 l9=0;
U32 l10=0;
U32 l11=0;
U32 l12=0;
U64 l13=0;
U64 l14=0;
U64 l15=0;
U64 l16=0;
U32 l17=0;
U32 si0,si1,si2,si3,si4,si5;
U64 sj0,sj1,sj2,sj3,sj4;
si0=i->g0;
si1=32U;
si0-=si1;
l8=si0;
i->g0=si0;
si0=l8;
si1=l1;
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
si0=!(si0);
if(si0){
goto L7;
}
si0=l8;
si1=l3;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l1;
si1=l3;
si0=si0 != si1;
if(si0){
goto L6;
}
si0=l8;
si1=l7;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l1;
si1=l7;
si0=si0 != si1;
if(si0){
goto L5;
}
si0=0U;
l9=si0;
si0=l4;
si1=1U;
si0>>=(si1&31);
si1=l1;
si2=-1U;
si1+=si2;
l3=si1;
si2=6U;
si1<<=(si2&31);
l10=si1;
si2=2U;
si1>>=(si2&31);
si0+=si1;
si1=l5;
si2=1U;
si1>>=(si2&31);
si2=l4;
si1*=si2;
si0+=si1;
l4=si0;
si1=0U;
si2=l10;
si3=l4;
si4=l10;
si3=si3 < si4;
si1=si3?si1:si2;
si0-=si1;
l7=si0;
si1=64U;
si0=si0 < si1;
if(si0){
goto L1;
}
si0=l3;
si1=l7;
si2=6U;
si1>>=(si2&31);
l5=si1;
si0=si0 < si1;
if(si0){
goto L4;
}
si0=l6;
si1=l5;
si2=3U;
si1<<=(si2&31);
si0+=si1;
si1=l2;
si2=l3;
si3=l5;
si2-=si3;
si3=3U;
si2<<=(si3&31);
l7=si2;
si0=f15143(i,si0,si1,si2);
l11=si0;
si0=l6;
si1=l3;
si2=l2;
si3=l7;
si2+=si3;
si3=l5;
si0=f1197(i,si0,si1,si2,si3);
l12=si0;
si0=l6;
si1=l3;
si2=3U;
si1<<=(si2&31);
l7=si1;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l11;
sj0=i64_load(&i->m0,(U64)si0);
l13=sj0;
si1=l2;
si2=l7;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
l14=sj1;
sj0-=sj1;
l15=sj0;
sj1=l13;
sj0^=sj1;
sj1=-1ULL;
si0=(U64)((I64)sj0>(I64)sj1);
if(si0){
goto L3;
}
sj0=0ULL;
sj1=l14;
sj0-=sj1;
l16=sj0;
sj1=-1ULL;
si0=(U64)((I64)sj0>(I64)sj1);
if(si0){
goto L8;
}
si0=l11;
sj1=l15;
i64_store(&i->m0,(U64)si0,sj1);
sj0=l13;
sj1=l14;
si0=sj0 >= sj1;
if(si0){
goto L2;
}
si0=l1;
si1=3U;
si0<<=(si1&31);
si1=l5;
si2=3U;
si1<<=(si2&31);
l2=si1;
si0-=si1;
si1=-8U;
si0+=si1;
l7=si0;
si0=l2;
si1=l6;
si0+=si1;
si1=8U;
si0+=si1;
l2=si0;
L9:;
{
si0=l7;
si0=!(si0);
if(si0){
goto L2;
}
si0=l2;
si1=l2;
sj1=i64_load(&i->m0,(U64)si1);
l13=sj1;
sj2=-1ULL;
sj1+=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l7;
si1=-8U;
si0+=si1;
l7=si0;
si0=l2;
si1=8U;
si0+=si1;
l2=si0;
sj0=l13;
si0=!(sj0);
if(si0){
goto L9;
}
goto L2;
}
L8:;
si0=l11;
sj1=l13;
sj2=l16;
sj1+=sj2;
l15=sj1;
i64_store(&i->m0,(U64)si0,sj1);
sj0=l15;
sj1=l13;
si0=sj0 >= sj1;
if(si0){
goto L2;
}
si0=l1;
si1=3U;
si0<<=(si1&31);
si1=l5;
si2=3U;
si1<<=(si2&31);
l2=si1;
si0-=si1;
si1=-8U;
si0+=si1;
l7=si0;
si0=l2;
si1=l6;
si0+=si1;
si1=8U;
si0+=si1;
l2=si0;
L10:;
{
si0=l7;
si0=!(si0);
if(si0){
goto L2;
}
si0=l2;
si1=l2;
sj1=i64_load(&i->m0,(U64)si1);
sj2=1ULL;
sj1+=sj2;
l13=sj1;
i64_store(&i->m0,(U64)si0,sj1);
si0=l7;
si1=-8U;
si0+=si1;
l7=si0;
si0=l2;
si1=8U;
si0+=si1;
l2=si0;
sj0=l13;
si0=!(sj0);
if(si0){
goto L10;
}
goto L2;
}
L7:;
si0=l8;
si1=0U;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=1U;
si1=l8;
si2=1189840U;
si3=l8;
si4=8U;
si3+=si4;
si4=1190100U;
f1250(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L6:;
si0=l8;
si1=0U;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=0U;
si1=l8;
si2=4U;
si1+=si2;
si2=l8;
si3=l8;
si4=8U;
si3+=si4;
si4=1190148U;
f1250(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L5:;
si0=l8;
si1=0U;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=0U;
si1=l8;
si2=4U;
si1+=si2;
si2=l8;
si3=l8;
si4=8U;
si3+=si4;
si4=1190132U;
f1250(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L4:;
si0=1189416U;
si1=35U;
si2=1190116U;
f604(i,si0,si1,si2);
UNREACHABLE;
L3:;
si0=l11;
sj1=l15;
i64_store(&i->m0,(U64)si0,sj1);
L2:;
si0=l6;
l2=si0;
si0=l12;
si0=!(si0);
if(si0){
goto L1;
}
si0=l11;
si1=l11;
sj1=i64_load(&i->m0,(U64)si1);
l13=sj1;
sj2=-1ULL;
sj1+=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l6;
l2=si0;
sj0=l13;
sj1=0ULL;
si0=sj0 != sj1;
if(si0){
goto L1;
}
si0=l1;
si1=3U;
si0<<=(si1&31);
l11=si0;
si0=l5;
si1=3U;
si0<<=(si1&31);
si1=8U;
si0+=si1;
l2=si0;
L12:;
{
si0=l11;
si1=l2;
si0=si0 == si1;
if(si0){
goto L11;
}
si0=l6;
si1=l2;
si0+=si1;
l7=si0;
si1=l7;
sj1=i64_load(&i->m0,(U64)si1);
l13=sj1;
sj2=-1ULL;
sj1+=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=8U;
si0+=si1;
l2=si0;
sj0=l13;
si0=!(sj0);
if(si0){
goto L12;
}
}
L11:;
si0=l6;
l2=si0;
L1:;
si0=l0;
si1=l1;
si2=l2;
si3=l1;
si4=l4;
si5=63U;
si4&=si5;
sj4=(U64)(si4);
f975(i,si0,si1,si2,si3,sj4);
si0=l6;
si1=l3;
si2=1U;
si1>>=(si2&31);
l2=si1;
si2=3U;
si1<<=(si2&31);
si0+=si1;
si1=l0;
si2=l3;
si3=l2;
si2-=si3;
si3=3U;
si2<<=(si3&31);
l12=si2;
si0=f15143(i,si0,si1,si2);
l17=si0;
si0=l6;
si1=l3;
si2=3U;
si1<<=(si2&31);
l5=si1;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
l11=si0;
si0=l6;
l7=si0;
si0=l1;
si1=3U;
si0=si0 < si1;
if(si0){
goto L16;
}
si0=l6;
si1=l1;
si2=l0;
si3=l12;
si2+=si3;
si3=l2;
si0=f1197(i,si0,si1,si2,si3);
l9=si0;
si0=l17;
l7=si0;
si0=l1;
si1=l2;
si0-=si1;
l11=si0;
si0=!(si0);
if(si0){
goto L15;
}
L16:;
si0=l7;
sj0=i64_load(&i->m0,(U64)si0);
l13=sj0;
si1=l0;
si2=l5;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
l14=sj1;
sj0-=sj1;
l15=sj0;
sj1=l13;
sj0^=sj1;
sj1=-1ULL;
si0=(U64)((I64)sj0>(I64)sj1);
if(si0){
goto L14;
}
sj0=0ULL;
sj1=l14;
sj0-=sj1;
l16=sj0;
sj1=-1ULL;
si0=(U64)((I64)sj0>(I64)sj1);
if(si0){
goto L17;
}
si0=l11;
si0=!(si0);
if(si0){
goto L13;
}
si0=l7;
sj1=l15;
i64_store(&i->m0,(U64)si0,sj1);
sj0=l13;
sj1=l14;
si0=sj0 >= sj1;
if(si0){
goto L13;
}
si0=l7;
si1=8U;
si0+=si1;
l2=si0;
si0=l11;
si1=3U;
si0<<=(si1&31);
si1=-8U;
si0+=si1;
l5=si0;
L18:;
{
si0=l5;
si0=!(si0);
if(si0){
goto L13;
}
si0=l2;
si1=l2;
sj1=i64_load(&i->m0,(U64)si1);
l13=sj1;
sj2=-1ULL;
sj1+=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=-8U;
si0+=si1;
l5=si0;
si0=l2;
si1=8U;
si0+=si1;
l2=si0;
sj0=l13;
si0=!(sj0);
if(si0){
goto L18;
}
goto L13;
}
L17:;
si0=l11;
si0=!(si0);
if(si0){
goto L13;
}
si0=l7;
sj1=l13;
sj2=l16;
sj1+=sj2;
l15=sj1;
i64_store(&i->m0,(U64)si0,sj1);
sj0=l15;
sj1=l13;
si0=sj0 >= sj1;
if(si0){
goto L13;
}
si0=l7;
si1=8U;
si0+=si1;
l2=si0;
si0=l11;
si1=3U;
si0<<=(si1&31);
si1=-8U;
si0+=si1;
l5=si0;
L19:;
{
si0=l5;
si0=!(si0);
if(si0){
goto L13;
}
si0=l2;
si1=l2;
sj1=i64_load(&i->m0,(U64)si1);
sj2=1ULL;
sj1+=sj2;
l13=sj1;
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=-8U;
si0+=si1;
l5=si0;
si0=l2;
si1=8U;
si0+=si1;
l2=si0;
sj0=l13;
si0=!(sj0);
if(si0){
goto L19;
}
goto L13;
}
L15:;
si0=1189451U;
si1=43U;
si2=1189760U;
f604(i,si0,si1,si2);
UNREACHABLE;
L14:;
si0=l7;
sj1=l15;
i64_store(&i->m0,(U64)si0,sj1);
L13:;
si0=l9;
si0=!(si0);
if(si0){
goto L20;
}
si0=l11;
si0=!(si0);
if(si0){
goto L20;
}
si0=l7;
si1=l7;
sj1=i64_load(&i->m0,(U64)si1);
l13=sj1;
sj2=-1ULL;
sj1+=sj2;
i64_store(&i->m0,(U64)si0,sj1);
sj0=l13;
sj1=0ULL;
si0=sj0 != sj1;
if(si0){
goto L20;
}
si0=l7;
si1=8U;
si0+=si1;
l2=si0;
si0=l11;
si1=3U;
si0<<=(si1&31);
si1=-8U;
si0+=si1;
l7=si0;
L21:;
{
si0=l7;
si0=!(si0);
if(si0){
goto L20;
}
si0=l2;
si1=l2;
sj1=i64_load(&i->m0,(U64)si1);
l13=sj1;
sj2=-1ULL;
sj1+=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l7;
si1=-8U;
si0+=si1;
l7=si0;
si0=l2;
si1=8U;
si0+=si1;
l2=si0;
sj0=l13;
si0=!(sj0);
if(si0){
goto L21;
}
}
L20:;
si0=l3;
si1=1U;
si0&=si1;
si0=!(si0);
if(si0){
goto L22;
}
si0=l6;
si1=l1;
sj2=32ULL;
f976(i,si0,si1,sj2);
L22:;
si0=l4;
si1=l10;
si0=si0 >= si1;
if(si0){
goto L24;
}
si0=l1;
si1=1U;
si0&=si1;
l5=si0;
si0=l3;
if(si0){
goto L26;
}
si0=0U;
l7=si0;
sj0=0ULL;
l13=sj0;
goto L25;
L26:;
si0=l1;
si1=-2U;
si0&=si1;
l4=si0;
si0=0U;
l2=si0;
si0=l0;
l1=si0;
si0=l6;
l3=si0;
si0=0U;
l7=si0;
L27:;
{
si0=l1;
si1=l3;
sj1=i64_load(&i->m0,(U64)si1);
l13=sj1;
si2=l2;
sj2=(U64)(si2);
sj3=1ULL;
sj2&=sj3;
sj1-=sj2;
si2=l1;
sj2=i64_load(&i->m0,(U64)si2);
l15=sj2;
sj1-=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si1=8U;
si0+=si1;
l10=si0;
si1=l3;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
l14=sj1;
sj2=l13;
sj3=l15;
si2=sj2 <= sj3;
sj3=l13;
sj4=l15;
si3=sj3 < sj4;
si4=l2;
si5=1U;
si4&=si5;
si2=si4?si2:si3;
l2=si2;
sj2=(U64)(si2);
sj1-=sj2;
si2=l10;
sj2=i64_load(&i->m0,(U64)si2);
l13=sj2;
sj1-=sj2;
i64_store(&i->m0,(U64)si0,sj1);
sj0=l14;
sj1=l13;
si0=sj0 <= sj1;
sj1=l14;
sj2=l13;
si1=sj1 < sj2;
si2=l2;
si0=si2?si0:si1;
l2=si0;
si0=l1;
si1=16U;
si0+=si1;
l1=si0;
si0=l3;
si1=16U;
si0+=si1;
l3=si0;
si0=l4;
si1=l7;
si2=2U;
si1+=si2;
l7=si1;
si0=si0 != si1;
if(si0){
goto L27;
}
}
sj0=0ULL;
si1=l2;
sj1=(U64)(si1);
sj0-=sj1;
l13=sj0;
L25:;
si0=l5;
si0=!(si0);
if(si0){
goto L23;
}
si0=l0;
si1=l7;
si2=3U;
si1<<=(si2&31);
l1=si1;
si0+=si1;
l3=si0;
si1=l6;
si2=l1;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
sj2=l13;
sj1+=sj2;
si2=l3;
sj2=i64_load(&i->m0,(U64)si2);
sj1-=sj2;
i64_store(&i->m0,(U64)si0,sj1);
goto L23;
L24:;
si0=l1;
si1=1U;
si0&=si1;
l5=si0;
si0=l3;
if(si0){
goto L29;
}
si0=0U;
l7=si0;
sj0=0ULL;
l13=sj0;
goto L28;
L29:;
si0=l1;
si1=-2U;
si0&=si1;
l4=si0;
si0=0U;
l2=si0;
si0=l6;
l3=si0;
si0=l0;
l1=si0;
si0=0U;
l7=si0;
L30:;
{
si0=l1;
si1=l1;
sj1=i64_load(&i->m0,(U64)si1);
l13=sj1;
si2=l2;
sj2=(U64)(si2);
sj3=1ULL;
sj2&=sj3;
si3=l3;
sj3=i64_load(&i->m0,(U64)si3);
l15=sj3;
sj2+=sj3;
sj1-=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si1=8U;
si0+=si1;
l10=si0;
si1=l10;
sj1=i64_load(&i->m0,(U64)si1);
l14=sj1;
sj2=l13;
sj3=l15;
si2=sj2 <= sj3;
sj3=l13;
sj4=l15;
si3=sj3 < sj4;
si4=l2;
si5=1U;
si4&=si5;
si2=si4?si2:si3;
l2=si2;
sj2=(U64)(si2);
si3=l3;
si4=8U;
si3+=si4;
sj3=i64_load(&i->m0,(U64)si3);
l13=sj3;
sj2+=sj3;
sj1-=sj2;
i64_store(&i->m0,(U64)si0,sj1);
sj0=l14;
sj1=l13;
si0=sj0 <= sj1;
sj1=l14;
sj2=l13;
si1=sj1 < sj2;
si2=l2;
si0=si2?si0:si1;
l2=si0;
si0=l3;
si1=16U;
si0+=si1;
l3=si0;
si0=l1;
si1=16U;
si0+=si1;
l1=si0;
si0=l4;
si1=l7;
si2=2U;
si1+=si2;
l7=si1;
si0=si0 != si1;
if(si0){
goto L30;
}
}
sj0=0ULL;
si1=l2;
sj1=(U64)(si1);
sj0-=sj1;
l13=sj0;
L28:;
si0=l5;
si0=!(si0);
if(si0){
goto L23;
}
si0=l0;
si1=l7;
si2=3U;
si1<<=(si2&31);
l1=si1;
si0+=si1;
l3=si0;
sj1=l13;
si2=l6;
si3=l1;
si2+=si3;
sj2=i64_load(&i->m0,(U64)si2);
sj1-=sj2;
si2=l3;
sj2=i64_load(&i->m0,(U64)si2);
sj1+=sj2;
i64_store(&i->m0,(U64)si0,sj1);
L23:;
si0=l8;
si1=32U;
si0+=si1;
i->g0=si0;
L0:;
}

void f982(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4,U32 l5,U32 l6,U32 l7,U32 l8,U32 l9) {
U32 l10=0;
U32 l11=0;
U32 l12=0;
U64 l13=0;
U64 l14=0;
U32 l15=0;
U32 l16=0;
U64 l17=0;
U32 l18=0;
U32 l19=0;
U32 l20=0;
U32 l21=0;
U64 l22=0;
U32 l23=0;
U32 l24=0;
U32 l25=0;
U32 l26=0;
U32 l27=0;
U32 l28=0;
U64 l29=0;
U32 l30=0;
U32 l31=0;
U32 l32=0;
U32 l33=0;
U64 l34=0;
U32 l35=0;
U32 l36=0;
U32 l37=0;
U32 l38=0;
U32 si0,si1,si2,si3,si4,si5;
U64 sj0,sj1,sj2,sj3,sj4;
si0=i->g0;
si1=32U;
si0-=si1;
l10=si0;
i->g0=si0;
si0=l1;
si1=-1U;
si0+=si1;
l11=si0;
si0=l8;
if(si0){
goto L73;
}
si0=l9;
if(si0){
goto L74;
}
si0=l10;
si1=l5;
i32_store(&i->m0,(U64)si0,si1);
si0=l10;
si1=l7;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l5;
si1=l7;
si0=si0 != si1;
if(si0){
goto L72;
}
si0=l5;
si0=!(si0);
if(si0){
goto L1;
}
si0=l5;
si1=l1;
si0=si0 > si1;
if(si0){
goto L71;
}
si0=0U;
l9=si0;
si0=l5;
l12=si0;
si0=l4;
l8=si0;
si0=l6;
l11=si0;
L75:;
{
si0=l8;
sj0=i64_load(&i->m0,(U64)si0);
l13=sj0;
si1=l11;
sj1=i64_load(&i->m0,(U64)si1);
sj0+=sj1;
l14=sj0;
sj1=l13;
si0=sj0 < sj1;
l15=si0;
si0=l9;
si1=255U;
si0&=si1;
if(si0){
goto L77;
}
si0=l15;
l9=si0;
goto L76;
L77:;
si0=l15;
sj1=l14;
sj2=1ULL;
sj1+=sj2;
l14=sj1;
si1=!(sj1);
si0|=si1;
l9=si0;
L76:;
si0=l0;
sj1=l14;
i64_store(&i->m0,(U64)si0,sj1);
si0=l8;
si1=8U;
si0+=si1;
l8=si0;
si0=l11;
si1=8U;
si0+=si1;
l11=si0;
si0=l0;
si1=8U;
si0+=si1;
l0=si0;
si0=l12;
si1=-1U;
si0+=si1;
l12=si0;
if(si0){
goto L75;
}
}
si0=l5;
si1=l3;
si0=si0 > si1;
if(si0){
goto L80;
}
si0=l5;
si1=1U;
si0&=si1;
l16=si0;
si0=l5;
si1=1U;
si0=si0 != si1;
if(si0){
goto L79;
}
si0=0U;
l12=si0;
sj0=0ULL;
l14=sj0;
goto L78;
L80:;
si0=1202809U;
si1=34U;
si2=1203412U;
f604(i,si0,si1,si2);
UNREACHABLE;
L79:;
si0=l5;
si1=-2U;
si0&=si1;
l15=si0;
si0=0U;
l9=si0;
si0=l4;
l8=si0;
si0=l6;
l0=si0;
si0=l2;
l11=si0;
si0=0U;
l12=si0;
L81:;
{
si0=l11;
si1=l8;
sj1=i64_load(&i->m0,(U64)si1);
l14=sj1;
si2=l9;
sj2=(U64)(si2);
sj3=1ULL;
sj2&=sj3;
sj1-=sj2;
si2=l0;
sj2=i64_load(&i->m0,(U64)si2);
l13=sj2;
sj1-=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l11;
si1=8U;
si0+=si1;
si1=l8;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
l17=sj1;
sj2=l14;
sj3=l13;
si2=sj2 <= sj3;
sj3=l14;
sj4=l13;
si3=sj3 < sj4;
si4=l9;
si5=1U;
si4&=si5;
si2=si4?si2:si3;
l9=si2;
sj2=(U64)(si2);
sj1-=sj2;
si2=l0;
si3=8U;
si2+=si3;
sj2=i64_load(&i->m0,(U64)si2);
l14=sj2;
sj1-=sj2;
i64_store(&i->m0,(U64)si0,sj1);
sj0=l17;
sj1=l14;
si0=sj0 <= sj1;
sj1=l17;
sj2=l14;
si1=sj1 < sj2;
si2=l9;
si0=si2?si0:si1;
l9=si0;
si0=l8;
si1=16U;
si0+=si1;
l8=si0;
si0=l0;
si1=16U;
si0+=si1;
l0=si0;
si0=l11;
si1=16U;
si0+=si1;
l11=si0;
si0=l15;
si1=l12;
si2=2U;
si1+=si2;
l12=si1;
si0=si0 != si1;
if(si0){
goto L81;
}
}
sj0=0ULL;
si1=l9;
sj1=(U64)(si1);
sj0-=sj1;
l14=sj0;
L78:;
si0=l16;
si0=!(si0);
if(si0){
goto L1;
}
si0=l2;
si1=l12;
si2=3U;
si1<<=(si2&31);
l8=si1;
si0+=si1;
si1=l4;
si2=l8;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
sj2=l14;
sj1+=sj2;
si2=l6;
si3=l8;
si2+=si3;
sj2=i64_load(&i->m0,(U64)si2);
sj1-=sj2;
i64_store(&i->m0,(U64)si0,sj1);
goto L1;
L74:;
si0=l5;
si0=!(si0);
if(si0){
goto L2;
}
si0=l7;
si0=!(si0);
if(si0){
goto L70;
}
si0=l1;
si0=!(si0);
if(si0){
goto L69;
}
si0=l5;
si1=-1U;
si0+=si1;
l18=si0;
si1=l11;
si2=l9;
si1-=si2;
l19=si1;
si0=si0 < si1;
if(si0){
goto L68;
}
si0=l7;
si1=-1U;
si0+=si1;
l20=si0;
si1=l19;
si0=si0 < si1;
if(si0){
goto L67;
}
si0=l11;
si1=l9;
si0=si0 < si1;
if(si0){
goto L66;
}
si0=l3;
si1=l9;
si0=si0 < si1;
if(si0){
goto L65;
}
si0=l2;
si1=l9;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l21=si0;
sj0=0ULL;
l22=sj0;
si0=l11;
si1=l9;
si0=si0 == si1;
if(si0){
goto L82;
}
si0=l3;
si1=l9;
si0-=si1;
l23=si0;
si0=0U;
l16=si0;
si0=l11;
l24=si0;
si0=l4;
l8=si0;
si0=l6;
l12=si0;
si0=l0;
l15=si0;
L83:;
{
si0=l8;
sj0=i64_load(&i->m0,(U64)si0);
l13=sj0;
si1=l12;
sj1=i64_load(&i->m0,(U64)si1);
sj0+=sj1;
l14=sj0;
sj1=l13;
si0=sj0 < sj1;
l25=si0;
si0=l16;
si1=255U;
si0&=si1;
if(si0){
goto L85;
}
si0=l25;
l16=si0;
goto L84;
L85:;
si0=l25;
sj1=l14;
sj2=1ULL;
sj1+=sj2;
l14=sj1;
si1=!(sj1);
si0|=si1;
l16=si0;
L84:;
si0=l15;
sj1=l14;
i64_store(&i->m0,(U64)si0,sj1);
si0=l8;
si1=8U;
si0+=si1;
l8=si0;
si0=l12;
si1=8U;
si0+=si1;
l12=si0;
si0=l15;
si1=8U;
si0+=si1;
l15=si0;
si0=l9;
si1=l24;
si2=-1U;
si1+=si2;
l24=si1;
si0=si0 != si1;
if(si0){
goto L83;
}
}
si0=l19;
si1=l23;
si0=si0 > si1;
if(si0){
goto L88;
}
si0=l19;
si1=1U;
si0&=si1;
l26=si0;
si0=l1;
si1=-2U;
si0+=si1;
si1=l9;
si0=si0 != si1;
if(si0){
goto L87;
}
si0=0U;
l24=si0;
si0=0U;
l25=si0;
goto L86;
L88:;
si0=1202809U;
si1=34U;
si2=1203412U;
f604(i,si0,si1,si2);
UNREACHABLE;
L87:;
si0=l19;
si1=-2U;
si0&=si1;
l23=si0;
si0=0U;
l24=si0;
si0=l4;
l8=si0;
si0=l6;
l12=si0;
si0=l21;
l15=si0;
si0=0U;
l25=si0;
L89:;
{
si0=l15;
si1=l8;
sj1=i64_load(&i->m0,(U64)si1);
l14=sj1;
si2=l24;
sj2=(U64)(si2);
sj3=1ULL;
sj2&=sj3;
sj1-=sj2;
si2=l12;
sj2=i64_load(&i->m0,(U64)si2);
l13=sj2;
sj1-=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l15;
si1=8U;
si0+=si1;
si1=l8;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
l17=sj1;
sj2=l14;
sj3=l13;
si2=sj2 <= sj3;
sj3=l14;
sj4=l13;
si3=sj3 < sj4;
si4=l24;
si5=1U;
si4&=si5;
si2=si4?si2:si3;
l24=si2;
sj2=(U64)(si2);
sj1-=sj2;
si2=l12;
si3=8U;
si2+=si3;
sj2=i64_load(&i->m0,(U64)si2);
l14=sj2;
sj1-=sj2;
i64_store(&i->m0,(U64)si0,sj1);
sj0=l17;
sj1=l14;
si0=sj0 <= sj1;
sj1=l17;
sj2=l14;
si1=sj1 < sj2;
si2=l24;
si0=si2?si0:si1;
l24=si0;
si0=l8;
si1=16U;
si0+=si1;
l8=si0;
si0=l12;
si1=16U;
si0+=si1;
l12=si0;
si0=l15;
si1=16U;
si0+=si1;
l15=si0;
si0=l23;
si1=l25;
si2=2U;
si1+=si2;
l25=si1;
si0=si0 != si1;
if(si0){
goto L89;
}
}
L86:;
sj0=2ULL;
sj1=0ULL;
si2=l16;
sj0=si2?sj0:sj1;
l14=sj0;
si0=l26;
si0=!(si0);
if(si0){
goto L90;
}
si0=l21;
si1=l25;
si2=3U;
si1<<=(si2&31);
l8=si1;
si0+=si1;
si1=l4;
si2=l8;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
l13=sj1;
si2=l24;
sj2=(U64)(si2);
sj1-=sj2;
si2=l6;
si3=l8;
si2+=si3;
sj2=i64_load(&i->m0,(U64)si2);
l17=sj2;
sj1-=sj2;
i64_store(&i->m0,(U64)si0,sj1);
sj0=l13;
sj1=l17;
si0=sj0 <= sj1;
sj1=l13;
sj2=l17;
si1=sj1 < sj2;
si2=l24;
si0=si2?si0:si1;
l24=si0;
L90:;
sj0=l14;
si1=l24;
sj1=(U64)(si1);
sj2=1ULL;
sj1&=sj2;
sj0|=sj1;
l22=sj0;
L82:;
si0=l11;
si1=l3;
si0=si0 >= si1;
if(si0){
goto L91;
}
sj0=0ULL;
l13=sj0;
si0=l2;
si1=l11;
si2=3U;
si1<<=(si2&31);
si0+=si1;
sj1=0ULL;
sj2=l22;
sj3=1ULL;
sj2&=sj3;
sj1-=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l10;
si1=l20;
si2=l19;
si1-=si2;
l23=si1;
i32_store(&i->m0,(U64)si0,si1);
si0=l10;
si1=l18;
si2=l19;
si1-=si2;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l7;
si1=l5;
si0=si0 != si1;
if(si0){
goto L64;
}
si0=l0;
si1=l19;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l5=si0;
si0=l20;
si1=l19;
si0=si0 == si1;
if(si0){
goto L92;
}
si0=l23;
si1=l9;
si0=si0 > si1;
if(si0){
goto L63;
}
si0=0U;
l16=si0;
si0=l23;
l24=si0;
si0=l6;
si1=l19;
si2=3U;
si1<<=(si2&31);
l12=si1;
si0+=si1;
l26=si0;
l8=si0;
si0=l4;
si1=l12;
si0+=si1;
l27=si0;
l12=si0;
si0=l5;
l15=si0;
L93:;
{
si0=l8;
sj0=i64_load(&i->m0,(U64)si0);
l13=sj0;
si1=l12;
sj1=i64_load(&i->m0,(U64)si1);
sj0+=sj1;
l14=sj0;
sj1=l13;
si0=sj0 < sj1;
l25=si0;
si0=l16;
si1=255U;
si0&=si1;
if(si0){
goto L95;
}
si0=l25;
l16=si0;
goto L94;
L95:;
si0=l25;
sj1=l14;
sj2=1ULL;
sj1+=sj2;
l14=sj1;
si1=!(sj1);
si0|=si1;
l16=si0;
L94:;
si0=l15;
sj1=l14;
i64_store(&i->m0,(U64)si0,sj1);
si0=l8;
si1=8U;
si0+=si1;
l8=si0;
si0=l12;
si1=8U;
si0+=si1;
l12=si0;
si0=l15;
si1=8U;
si0+=si1;
l15=si0;
si0=l24;
si1=-1U;
si0+=si1;
l24=si0;
if(si0){
goto L93;
}
}
si0=l23;
si1=1U;
si0&=si1;
l28=si0;
si0=l9;
si1=l7;
si0+=si1;
si1=l1;
si2=1U;
si1+=si2;
si0=si0 != si1;
if(si0){
goto L97;
}
si0=0U;
l24=si0;
si0=0U;
l8=si0;
goto L96;
L97:;
si0=0U;
l25=si0;
si0=0U;
si1=l23;
si2=-2U;
si1&=si2;
si0-=si1;
l23=si0;
si0=l27;
l8=si0;
si0=l26;
l12=si0;
si0=l2;
l15=si0;
si0=0U;
l24=si0;
L98:;
{
si0=l15;
si1=l12;
sj1=i64_load(&i->m0,(U64)si1);
l14=sj1;
si2=l24;
sj2=(U64)(si2);
sj3=1ULL;
sj2&=sj3;
sj1-=sj2;
si2=l8;
sj2=i64_load(&i->m0,(U64)si2);
l13=sj2;
sj1-=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l15;
si1=8U;
si0+=si1;
si1=l12;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
l17=sj1;
sj2=l14;
sj3=l13;
si2=sj2 <= sj3;
sj3=l14;
sj4=l13;
si3=sj3 < sj4;
si4=l24;
si5=1U;
si4&=si5;
si2=si4?si2:si3;
l24=si2;
sj2=(U64)(si2);
sj1-=sj2;
si2=l8;
si3=8U;
si2+=si3;
sj2=i64_load(&i->m0,(U64)si2);
l14=sj2;
sj1-=sj2;
i64_store(&i->m0,(U64)si0,sj1);
sj0=l17;
sj1=l14;
si0=sj0 <= sj1;
sj1=l17;
sj2=l14;
si1=sj1 < sj2;
si2=l24;
si0=si2?si0:si1;
l24=si0;
si0=l8;
si1=16U;
si0+=si1;
l8=si0;
si0=l12;
si1=16U;
si0+=si1;
l12=si0;
si0=l15;
si1=16U;
si0+=si1;
l15=si0;
si0=l23;
si1=l25;
si2=-2U;
si1+=si2;
l25=si1;
si0=si0 != si1;
if(si0){
goto L98;
}
}
si0=0U;
si1=l25;
si0-=si1;
l8=si0;
L96:;
sj0=2ULL;
sj1=0ULL;
si2=l16;
sj0=si2?sj0:sj1;
l14=sj0;
si0=l28;
si0=!(si0);
if(si0){
goto L99;
}
si0=l2;
si1=l8;
si2=3U;
si1<<=(si2&31);
l8=si1;
si0+=si1;
si1=l26;
si2=l8;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
l13=sj1;
si2=l24;
sj2=(U64)(si2);
sj1-=sj2;
si2=l27;
si3=l8;
si2+=si3;
sj2=i64_load(&i->m0,(U64)si2);
l17=sj2;
sj1-=sj2;
i64_store(&i->m0,(U64)si0,sj1);
sj0=l13;
sj1=l17;
si0=sj0 <= sj1;
sj1=l13;
sj2=l17;
si1=sj1 < sj2;
si2=l24;
si0=si2?si0:si1;
l24=si0;
L99:;
sj0=l14;
si1=l24;
sj1=(U64)(si1);
sj2=1ULL;
sj1&=sj2;
sj0|=sj1;
l13=sj0;
L92:;
si0=l0;
si1=l11;
si2=3U;
si1<<=(si2&31);
si0+=si1;
sj1=l13;
sj2=1ULL;
sj1>>=(sj2&63);
i64_store(&i->m0,(U64)si0,sj1);
si0=l19;
si1=l1;
si0=si0 > si1;
if(si0){
goto L62;
}
si0=l4;
si1=l18;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l15=si0;
si0=l6;
si1=l20;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l16=si0;
si0=l19;
si1=l1;
si0=si0 == si1;
if(si0){
goto L100;
}
si0=l5;
si1=l5;
sj1=i64_load(&i->m0,(U64)si1);
l14=sj1;
sj2=l22;
sj3=1ULL;
sj2>>=(sj3&63);
sj1+=sj2;
l17=sj1;
i64_store(&i->m0,(U64)si0,sj1);
sj0=l17;
sj1=l14;
si0=sj0 >= sj1;
if(si0){
goto L100;
}
si0=l0;
si1=l1;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l12=si0;
si0=0U;
si1=l9;
si2=3U;
si1<<=(si2&31);
si0-=si1;
l8=si0;
L101:;
{
si0=l8;
si0=!(si0);
if(si0){
goto L100;
}
si0=l12;
si1=l8;
si0+=si1;
l11=si0;
si1=l11;
sj1=i64_load(&i->m0,(U64)si1);
sj2=1ULL;
sj1+=sj2;
l14=sj1;
i64_store(&i->m0,(U64)si0,sj1);
si0=l8;
si1=8U;
si0+=si1;
l8=si0;
sj0=l14;
si0=!(sj0);
if(si0){
goto L101;
}
}
L100:;
si0=l21;
sj0=i64_load(&i->m0,(U64)si0);
l14=sj0;
si1=l16;
sj1=i64_load(&i->m0,(U64)si1);
l17=sj1;
sj2=l13;
sj3=1ULL;
sj2&=sj3;
si3=l15;
sj3=i64_load(&i->m0,(U64)si3);
l22=sj3;
sj2+=sj3;
sj1-=sj2;
l29=sj1;
sj0+=sj1;
l13=sj0;
sj1=l14;
sj0^=sj1;
sj1=-1ULL;
si0=(U64)((I64)sj0>(I64)sj1);
if(si0){
goto L61;
}
sj0=l29;
sj1=-1ULL;
si0=(U64)((I64)sj0>(I64)sj1);
if(si0){
goto L102;
}
si0=l21;
sj1=l13;
i64_store(&i->m0,(U64)si0,sj1);
sj0=l14;
sj1=0ULL;
sj2=l29;
sj1-=sj2;
si0=sj0 >= sj1;
if(si0){
goto L3;
}
si0=l3;
si1=3U;
si0<<=(si1&31);
si1=l9;
si2=3U;
si1<<=(si2&31);
l8=si1;
si0-=si1;
si1=-8U;
si0+=si1;
l11=si0;
si0=l8;
si1=l2;
si0+=si1;
si1=8U;
si0+=si1;
l8=si0;
L103:;
{
si0=l11;
si0=!(si0);
if(si0){
goto L3;
}
si0=l8;
si1=l8;
sj1=i64_load(&i->m0,(U64)si1);
l14=sj1;
sj2=-1ULL;
sj1+=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l11;
si1=-8U;
si0+=si1;
l11=si0;
si0=l8;
si1=8U;
si0+=si1;
l8=si0;
sj0=l14;
si0=!(sj0);
if(si0){
goto L103;
}
goto L3;
}
L102:;
si0=l21;
sj1=l13;
i64_store(&i->m0,(U64)si0,sj1);
sj0=l13;
sj1=l14;
si0=sj0 >= sj1;
if(si0){
goto L3;
}
si0=l3;
si1=3U;
si0<<=(si1&31);
si1=l9;
si2=3U;
si1<<=(si2&31);
l8=si1;
si0-=si1;
si1=-8U;
si0+=si1;
l11=si0;
si0=l8;
si1=l2;
si0+=si1;
si1=8U;
si0+=si1;
l8=si0;
L104:;
{
si0=l11;
si0=!(si0);
if(si0){
goto L3;
}
si0=l8;
si1=l8;
sj1=i64_load(&i->m0,(U64)si1);
sj2=1ULL;
sj1+=sj2;
l14=sj1;
i64_store(&i->m0,(U64)si0,sj1);
si0=l11;
si1=-8U;
si0+=si1;
l11=si0;
si0=l8;
si1=8U;
si0+=si1;
l8=si0;
sj0=l14;
si0=!(sj0);
if(si0){
goto L104;
}
goto L3;
}
L91:;
si0=l11;
si1=l3;
si2=1190292U;
f594(i,si0,si1,si2);
UNREACHABLE;
L73:;
si0=l9;
si0=!(si0);
if(si0){
goto L108;
}
si0=-1U;
si1=l8;
si2=l9;
si1=si1 != si2;
si2=l8;
si3=l9;
si2=si2 < si3;
si0=si2?si0:si1;
si1=255U;
si0&=si1;
switch(si0){
case 0:
goto L106;
case 1:
goto L105;
default:
goto L107;
}
L108:;
si0=l5;
si0=!(si0);
if(si0){
goto L4;
}
si0=l7;
si0=!(si0);
if(si0){
goto L60;
}
si0=l3;
si0=!(si0);
if(si0){
goto L59;
}
si0=l1;
si0=!(si0);
if(si0){
goto L58;
}
si0=l5;
si1=-1U;
si0+=si1;
l20=si0;
si1=l11;
si2=l8;
si1-=si2;
l25=si1;
si0=si0 < si1;
if(si0){
goto L57;
}
si0=l7;
si1=-1U;
si0+=si1;
l18=si0;
si1=l25;
si0=si0 < si1;
if(si0){
goto L56;
}
si0=l3;
si1=-1U;
si0+=si1;
l26=si0;
si1=l25;
si0=si0 < si1;
if(si0){
goto L55;
}
si0=l11;
si1=l8;
si0=si0 < si1;
if(si0){
goto L54;
}
si0=l0;
si1=l11;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l27=si0;
si0=l20;
si1=l25;
si0-=si1;
l23=si0;
si0=l18;
si1=l25;
si0-=si1;
l28=si0;
si0=l0;
si1=l8;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l21=si0;
sj0=0ULL;
l22=sj0;
si0=l11;
si1=l8;
si0=si0 == si1;
if(si0){
goto L109;
}
si0=0U;
l16=si0;
si0=l4;
l9=si0;
si0=l6;
l12=si0;
si0=l21;
l15=si0;
L110:;
{
si0=l9;
sj0=i64_load(&i->m0,(U64)si0);
l13=sj0;
si1=l12;
sj1=i64_load(&i->m0,(U64)si1);
sj0+=sj1;
l14=sj0;
sj1=l13;
si0=sj0 < sj1;
l24=si0;
si0=l16;
si1=255U;
si0&=si1;
if(si0){
goto L112;
}
si0=l24;
l16=si0;
goto L111;
L112:;
si0=l24;
sj1=l14;
sj2=1ULL;
sj1+=sj2;
l14=sj1;
si1=!(sj1);
si0|=si1;
l16=si0;
L111:;
si0=l15;
sj1=l14;
i64_store(&i->m0,(U64)si0,sj1);
si0=l9;
si1=8U;
si0+=si1;
l9=si0;
si0=l12;
si1=8U;
si0+=si1;
l12=si0;
si0=l15;
si1=8U;
si0+=si1;
l15=si0;
si0=l8;
si1=l11;
si2=-1U;
si1+=si2;
l11=si1;
si0=si0 != si1;
if(si0){
goto L110;
}
}
si0=l25;
si1=1U;
si0&=si1;
l30=si0;
si0=l1;
si1=-2U;
si0+=si1;
si1=l8;
si0=si0 != si1;
if(si0){
goto L114;
}
si0=0U;
l15=si0;
si0=0U;
l24=si0;
goto L113;
L114:;
si0=l25;
si1=-2U;
si0&=si1;
l19=si0;
si0=0U;
l15=si0;
si0=l4;
l11=si0;
si0=l6;
l9=si0;
si0=l2;
l12=si0;
si0=0U;
l24=si0;
L115:;
{
si0=l12;
si1=l11;
sj1=i64_load(&i->m0,(U64)si1);
l14=sj1;
si2=l15;
sj2=(U64)(si2);
sj3=1ULL;
sj2&=sj3;
sj1-=sj2;
si2=l9;
sj2=i64_load(&i->m0,(U64)si2);
l13=sj2;
sj1-=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l12;
si1=8U;
si0+=si1;
si1=l11;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
l17=sj1;
sj2=l14;
sj3=l13;
si2=sj2 <= sj3;
sj3=l14;
sj4=l13;
si3=sj3 < sj4;
si4=l15;
si5=1U;
si4&=si5;
si2=si4?si2:si3;
l15=si2;
sj2=(U64)(si2);
sj1-=sj2;
si2=l9;
si3=8U;
si2+=si3;
sj2=i64_load(&i->m0,(U64)si2);
l14=sj2;
sj1-=sj2;
i64_store(&i->m0,(U64)si0,sj1);
sj0=l17;
sj1=l14;
si0=sj0 <= sj1;
sj1=l17;
sj2=l14;
si1=sj1 < sj2;
si2=l15;
si0=si2?si0:si1;
l15=si0;
si0=l11;
si1=16U;
si0+=si1;
l11=si0;
si0=l9;
si1=16U;
si0+=si1;
l9=si0;
si0=l12;
si1=16U;
si0+=si1;
l12=si0;
si0=l19;
si1=l24;
si2=2U;
si1+=si2;
l24=si1;
si0=si0 != si1;
if(si0){
goto L115;
}
}
L113:;
si0=l30;
si0=!(si0);
if(si0){
goto L116;
}
si0=l2;
si1=l24;
si2=3U;
si1<<=(si2&31);
l11=si1;
si0+=si1;
si1=l4;
si2=l11;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
l14=sj1;
si2=l15;
sj2=(U64)(si2);
sj1-=sj2;
si2=l6;
si3=l11;
si2+=si3;
sj2=i64_load(&i->m0,(U64)si2);
l13=sj2;
sj1-=sj2;
i64_store(&i->m0,(U64)si0,sj1);
sj0=l14;
sj1=l13;
si0=sj0 <= sj1;
sj1=l14;
sj2=l13;
si1=sj1 < sj2;
si2=l15;
si0=si2?si0:si1;
l15=si0;
L116:;
sj0=2ULL;
sj1=0ULL;
si2=l16;
sj0=si2?sj0:sj1;
si1=l15;
sj1=(U64)(si1);
sj2=1ULL;
sj1&=sj2;
sj0|=sj1;
l22=sj0;
L109:;
si0=l27;
sj1=l22;
sj2=1ULL;
sj1>>=(sj2&63);
i64_store(&i->m0,(U64)si0,sj1);
si0=l10;
si1=l23;
i32_store(&i->m0,(U64)si0,si1);
si0=l10;
si1=l28;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l5;
si1=l7;
si0=si0 != si1;
if(si0){
goto L53;
}
si0=l2;
si1=l25;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l19=si0;
sj0=0ULL;
l13=sj0;
si0=l20;
si1=l25;
si0=si0 == si1;
if(si0){
goto L117;
}
si0=l23;
si1=l1;
si0=si0 > si1;
if(si0){
goto L52;
}
si0=l26;
si1=l25;
si0-=si1;
l7=si0;
si0=0U;
l15=si0;
si0=l23;
l16=si0;
si0=l4;
si1=l25;
si2=3U;
si1<<=(si2&31);
l9=si1;
si0+=si1;
l27=si0;
l11=si0;
si0=l6;
si1=l9;
si0+=si1;
l28=si0;
l9=si0;
si0=l0;
l12=si0;
L118:;
{
si0=l11;
sj0=i64_load(&i->m0,(U64)si0);
l13=sj0;
si1=l9;
sj1=i64_load(&i->m0,(U64)si1);
sj0+=sj1;
l14=sj0;
sj1=l13;
si0=sj0 < sj1;
l24=si0;
si0=l15;
si1=255U;
si0&=si1;
if(si0){
goto L120;
}
si0=l24;
l15=si0;
goto L119;
L120:;
si0=l24;
sj1=l14;
sj2=1ULL;
sj1+=sj2;
l14=sj1;
si1=!(sj1);
si0|=si1;
l15=si0;
L119:;
si0=l12;
sj1=l14;
i64_store(&i->m0,(U64)si0,sj1);
si0=l11;
si1=8U;
si0+=si1;
l11=si0;
si0=l9;
si1=8U;
si0+=si1;
l9=si0;
si0=l12;
si1=8U;
si0+=si1;
l12=si0;
si0=l16;
si1=-1U;
si0+=si1;
l16=si0;
if(si0){
goto L118;
}
}
si0=l23;
si1=l7;
si0=si0 > si1;
if(si0){
goto L123;
}
si0=l23;
si1=1U;
si0&=si1;
l7=si0;
si0=l8;
si1=l5;
si0+=si1;
si1=l1;
si2=1U;
si1+=si2;
si0=si0 != si1;
if(si0){
goto L122;
}
si0=0U;
l16=si0;
si0=0U;
l11=si0;
goto L121;
L123:;
si0=1202809U;
si1=34U;
si2=1203412U;
f604(i,si0,si1,si2);
UNREACHABLE;
L122:;
si0=0U;
l24=si0;
si0=0U;
si1=l23;
si2=-2U;
si1&=si2;
si0-=si1;
l25=si0;
si0=l27;
l11=si0;
si0=l28;
l9=si0;
si0=l19;
l12=si0;
si0=0U;
l16=si0;
L124:;
{
si0=l12;
si1=l11;
sj1=i64_load(&i->m0,(U64)si1);
l14=sj1;
si2=l16;
sj2=(U64)(si2);
sj3=1ULL;
sj2&=sj3;
sj1-=sj2;
si2=l9;
sj2=i64_load(&i->m0,(U64)si2);
l13=sj2;
sj1-=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l12;
si1=8U;
si0+=si1;
si1=l11;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
l17=sj1;
sj2=l14;
sj3=l13;
si2=sj2 <= sj3;
sj3=l14;
sj4=l13;
si3=sj3 < sj4;
si4=l16;
si5=1U;
si4&=si5;
si2=si4?si2:si3;
l16=si2;
sj2=(U64)(si2);
sj1-=sj2;
si2=l9;
si3=8U;
si2+=si3;
sj2=i64_load(&i->m0,(U64)si2);
l14=sj2;
sj1-=sj2;
i64_store(&i->m0,(U64)si0,sj1);
sj0=l17;
sj1=l14;
si0=sj0 <= sj1;
sj1=l17;
sj2=l14;
si1=sj1 < sj2;
si2=l16;
si0=si2?si0:si1;
l16=si0;
si0=l11;
si1=16U;
si0+=si1;
l11=si0;
si0=l9;
si1=16U;
si0+=si1;
l9=si0;
si0=l12;
si1=16U;
si0+=si1;
l12=si0;
si0=l25;
si1=l24;
si2=-2U;
si1+=si2;
l24=si1;
si0=si0 != si1;
if(si0){
goto L124;
}
}
si0=0U;
si1=l24;
si0-=si1;
l11=si0;
L121:;
sj0=2ULL;
sj1=0ULL;
si2=l15;
sj0=si2?sj0:sj1;
l14=sj0;
si0=l7;
si0=!(si0);
if(si0){
goto L125;
}
si0=l19;
si1=l11;
si2=3U;
si1<<=(si2&31);
l11=si1;
si0+=si1;
si1=l27;
si2=l11;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
l13=sj1;
si2=l16;
sj2=(U64)(si2);
sj1-=sj2;
si2=l28;
si3=l11;
si2+=si3;
sj2=i64_load(&i->m0,(U64)si2);
l17=sj2;
sj1-=sj2;
i64_store(&i->m0,(U64)si0,sj1);
sj0=l13;
sj1=l17;
si0=sj0 <= sj1;
sj1=l13;
sj2=l17;
si1=sj1 < sj2;
si2=l16;
si0=si2?si0:si1;
l16=si0;
L125:;
sj0=l14;
si1=l16;
sj1=(U64)(si1);
sj2=1ULL;
sj1&=sj2;
sj0|=sj1;
l13=sj0;
L117:;
si0=l20;
si1=3U;
si0<<=(si1&31);
l12=si0;
si0=l18;
si1=3U;
si0<<=(si1&31);
l15=si0;
si0=l2;
si1=l26;
si2=3U;
si1<<=(si2&31);
si0+=si1;
sj1=0ULL;
sj2=l13;
sj3=1ULL;
sj2&=sj3;
sj1-=sj2;
i64_store(&i->m0,(U64)si0,sj1);
sj0=l22;
sj1=1ULL;
sj0&=sj1;
sj1=0ULL;
si0=sj0 == sj1;
if(si0){
goto L5;
}
si0=l19;
si1=l19;
sj1=i64_load(&i->m0,(U64)si1);
l14=sj1;
sj2=-1ULL;
sj1+=sj2;
i64_store(&i->m0,(U64)si0,sj1);
sj0=l14;
sj1=0ULL;
si0=sj0 != sj1;
if(si0){
goto L5;
}
si0=l8;
si1=3U;
si0<<=(si1&31);
l11=si0;
si1=l3;
si2=3U;
si1<<=(si2&31);
si0+=si1;
si1=l1;
si2=3U;
si1<<=(si2&31);
l16=si1;
si0-=si1;
l9=si0;
si0=l2;
si1=l16;
si2=l11;
si1-=si2;
si0+=si1;
l11=si0;
L126:;
{
si0=l9;
si0=!(si0);
if(si0){
goto L5;
}
si0=l11;
si1=l11;
sj1=i64_load(&i->m0,(U64)si1);
l14=sj1;
sj2=-1ULL;
sj1+=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l9;
si1=-8U;
si0+=si1;
l9=si0;
si0=l11;
si1=8U;
si0+=si1;
l11=si0;
sj0=l14;
si0=!(sj0);
si0=!(si0);
if(si0){
goto L5;
}
goto L126;
}
L107:;
si0=l5;
si0=!(si0);
if(si0){
goto L6;
}
si0=l7;
si0=!(si0);
if(si0){
goto L51;
}
si0=l3;
si0=!(si0);
if(si0){
goto L50;
}
si0=l1;
si0=!(si0);
if(si0){
goto L49;
}
si0=l5;
si1=-1U;
si0+=si1;
l26=si0;
si1=l11;
si2=l9;
si1-=si2;
l20=si1;
si0=si0 < si1;
if(si0){
goto L48;
}
si0=l26;
si1=l20;
si0-=si1;
l31=si0;
si1=l9;
si2=l8;
si1-=si2;
l23=si1;
si0=si0 < si1;
if(si0){
goto L47;
}
si0=l7;
si1=-1U;
si0+=si1;
l27=si0;
si1=l20;
si0=si0 < si1;
if(si0){
goto L46;
}
si0=l27;
si1=l20;
si0-=si1;
l30=si0;
si1=l23;
si0=si0 < si1;
if(si0){
goto L45;
}
si0=l11;
si1=l8;
si0=si0 < si1;
if(si0){
goto L44;
}
si0=l3;
si1=-1U;
si0+=si1;
l28=si0;
si1=l9;
si0=si0 < si1;
if(si0){
goto L43;
}
si0=l0;
si1=l8;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l18=si0;
sj0=0ULL;
l22=sj0;
si0=l11;
si1=l9;
si0=si0 == si1;
if(si0){
goto L127;
}
si0=l20;
si1=l11;
si2=l8;
si1-=si2;
si0=si0 > si1;
if(si0){
goto L42;
}
si0=l28;
si1=l9;
si0-=si1;
l21=si0;
si0=l2;
si1=l9;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l32=si0;
si0=0U;
l24=si0;
si0=l11;
l25=si0;
si0=l4;
l12=si0;
si0=l6;
l15=si0;
si0=l18;
l16=si0;
L128:;
{
si0=l12;
sj0=i64_load(&i->m0,(U64)si0);
l13=sj0;
si1=l15;
sj1=i64_load(&i->m0,(U64)si1);
sj0+=sj1;
l14=sj0;
sj1=l13;
si0=sj0 < sj1;
l19=si0;
si0=l24;
si1=255U;
si0&=si1;
if(si0){
goto L130;
}
si0=l19;
l24=si0;
goto L129;
L130:;
si0=l19;
sj1=l14;
sj2=1ULL;
sj1+=sj2;
l14=sj1;
si1=!(sj1);
si0|=si1;
l24=si0;
L129:;
si0=l16;
sj1=l14;
i64_store(&i->m0,(U64)si0,sj1);
si0=l12;
si1=8U;
si0+=si1;
l12=si0;
si0=l15;
si1=8U;
si0+=si1;
l15=si0;
si0=l16;
si1=8U;
si0+=si1;
l16=si0;
si0=l9;
si1=l25;
si2=-1U;
si1+=si2;
l25=si1;
si0=si0 != si1;
if(si0){
goto L128;
}
}
si0=l20;
si1=l21;
si0=si0 > si1;
if(si0){
goto L133;
}
si0=l20;
si1=1U;
si0&=si1;
l33=si0;
si0=l1;
si1=-2U;
si0+=si1;
si1=l9;
si0=si0 != si1;
if(si0){
goto L132;
}
si0=0U;
l25=si0;
si0=0U;
l19=si0;
goto L131;
L133:;
si0=1202809U;
si1=34U;
si2=1203412U;
f604(i,si0,si1,si2);
UNREACHABLE;
L132:;
si0=l20;
si1=-2U;
si0&=si1;
l21=si0;
si0=0U;
l25=si0;
si0=l4;
l12=si0;
si0=l6;
l15=si0;
si0=l32;
l16=si0;
si0=0U;
l19=si0;
L134:;
{
si0=l16;
si1=l12;
sj1=i64_load(&i->m0,(U64)si1);
l14=sj1;
si2=l25;
sj2=(U64)(si2);
sj3=1ULL;
sj2&=sj3;
sj1-=sj2;
si2=l15;
sj2=i64_load(&i->m0,(U64)si2);
l13=sj2;
sj1-=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l16;
si1=8U;
si0+=si1;
si1=l12;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
l17=sj1;
sj2=l14;
sj3=l13;
si2=sj2 <= sj3;
sj3=l14;
sj4=l13;
si3=sj3 < sj4;
si4=l25;
si5=1U;
si4&=si5;
si2=si4?si2:si3;
l25=si2;
sj2=(U64)(si2);
sj1-=sj2;
si2=l15;
si3=8U;
si2+=si3;
sj2=i64_load(&i->m0,(U64)si2);
l14=sj2;
sj1-=sj2;
i64_store(&i->m0,(U64)si0,sj1);
sj0=l17;
sj1=l14;
si0=sj0 <= sj1;
sj1=l17;
sj2=l14;
si1=sj1 < sj2;
si2=l25;
si0=si2?si0:si1;
l25=si0;
si0=l12;
si1=16U;
si0+=si1;
l12=si0;
si0=l15;
si1=16U;
si0+=si1;
l15=si0;
si0=l16;
si1=16U;
si0+=si1;
l16=si0;
si0=l21;
si1=l19;
si2=2U;
si1+=si2;
l19=si1;
si0=si0 != si1;
if(si0){
goto L134;
}
}
L131:;
sj0=2ULL;
sj1=0ULL;
si2=l24;
sj0=si2?sj0:sj1;
l14=sj0;
si0=l33;
si0=!(si0);
if(si0){
goto L135;
}
si0=l32;
si1=l19;
si2=3U;
si1<<=(si2&31);
l12=si1;
si0+=si1;
si1=l4;
si2=l12;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
l13=sj1;
si2=l25;
sj2=(U64)(si2);
sj1-=sj2;
si2=l6;
si3=l12;
si2+=si3;
sj2=i64_load(&i->m0,(U64)si2);
l17=sj2;
sj1-=sj2;
i64_store(&i->m0,(U64)si0,sj1);
sj0=l13;
sj1=l17;
si0=sj0 <= sj1;
sj1=l13;
sj2=l17;
si1=sj1 < sj2;
si2=l25;
si0=si2?si0:si1;
l25=si0;
L135:;
sj0=l14;
si1=l25;
sj1=(U64)(si1);
sj2=1ULL;
sj1&=sj2;
sj0|=sj1;
l22=sj0;
L127:;
si0=l2;
si1=l28;
si2=3U;
si1<<=(si2&31);
si0+=si1;
sj1=0ULL;
sj2=l22;
sj3=1ULL;
sj2&=sj3;
sj1-=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l11;
si1=l20;
si2=l8;
si1+=si2;
l12=si1;
si0=si0 < si1;
if(si0){
goto L41;
}
si0=l4;
si1=l20;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l32=si0;
si0=l6;
si1=l20;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l33=si0;
si0=l0;
si1=l12;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l21=si0;
sj0=0ULL;
l29=sj0;
si0=l9;
si1=l8;
si0=si0 == si1;
if(si0){
goto L136;
}
si0=l23;
si1=l11;
si2=l12;
si1-=si2;
si0=si0 > si1;
if(si0){
goto L40;
}
si0=0U;
l24=si0;
si0=l23;
l25=si0;
si0=l33;
l12=si0;
si0=l32;
l15=si0;
si0=l21;
l16=si0;
L137:;
{
si0=l12;
sj0=i64_load(&i->m0,(U64)si0);
l13=sj0;
si1=l15;
sj1=i64_load(&i->m0,(U64)si1);
sj0+=sj1;
l14=sj0;
sj1=l13;
si0=sj0 < sj1;
l19=si0;
si0=l24;
si1=255U;
si0&=si1;
if(si0){
goto L139;
}
si0=l19;
l24=si0;
goto L138;
L139:;
si0=l19;
sj1=l14;
sj2=1ULL;
sj1+=sj2;
l14=sj1;
si1=!(sj1);
si0|=si1;
l24=si0;
L138:;
si0=l16;
sj1=l14;
i64_store(&i->m0,(U64)si0,sj1);
si0=l12;
si1=8U;
si0+=si1;
l12=si0;
si0=l15;
si1=8U;
si0+=si1;
l15=si0;
si0=l16;
si1=8U;
si0+=si1;
l16=si0;
si0=l25;
si1=-1U;
si0+=si1;
l25=si0;
if(si0){
goto L137;
}
}
si0=l23;
si1=l28;
si0=si0 > si1;
if(si0){
goto L142;
}
si0=0U;
l25=si0;
si0=l23;
si1=1U;
si0&=si1;
l28=si0;
si0=l8;
si1=-1U;
si0^=si1;
si1=0U;
si2=l9;
si1-=si2;
si0=si0 != si1;
if(si0){
goto L141;
}
si0=0U;
l12=si0;
goto L140;
L142:;
si0=1202809U;
si1=34U;
si2=1203412U;
f604(i,si0,si1,si2);
UNREACHABLE;
L141:;
si0=0U;
l19=si0;
si0=0U;
si1=l23;
si2=-2U;
si1&=si2;
si0-=si1;
l20=si0;
si0=l32;
l12=si0;
si0=l33;
l15=si0;
si0=l2;
l16=si0;
si0=0U;
l25=si0;
L143:;
{
si0=l16;
si1=l15;
sj1=i64_load(&i->m0,(U64)si1);
l14=sj1;
si2=l25;
sj2=(U64)(si2);
sj3=1ULL;
sj2&=sj3;
sj1-=sj2;
si2=l12;
sj2=i64_load(&i->m0,(U64)si2);
l13=sj2;
sj1-=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l16;
si1=8U;
si0+=si1;
si1=l15;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
l17=sj1;
sj2=l14;
sj3=l13;
si2=sj2 <= sj3;
sj3=l14;
sj4=l13;
si3=sj3 < sj4;
si4=l25;
si5=1U;
si4&=si5;
si2=si4?si2:si3;
l25=si2;
sj2=(U64)(si2);
sj1-=sj2;
si2=l12;
si3=8U;
si2+=si3;
sj2=i64_load(&i->m0,(U64)si2);
l14=sj2;
sj1-=sj2;
i64_store(&i->m0,(U64)si0,sj1);
sj0=l17;
sj1=l14;
si0=sj0 <= sj1;
sj1=l17;
sj2=l14;
si1=sj1 < sj2;
si2=l25;
si0=si2?si0:si1;
l25=si0;
si0=l12;
si1=16U;
si0+=si1;
l12=si0;
si0=l15;
si1=16U;
si0+=si1;
l15=si0;
si0=l16;
si1=16U;
si0+=si1;
l16=si0;
si0=l20;
si1=l19;
si2=-2U;
si1+=si2;
l19=si1;
si0=si0 != si1;
if(si0){
goto L143;
}
}
si0=0U;
si1=l19;
si0-=si1;
l12=si0;
L140:;
sj0=2ULL;
sj1=0ULL;
si2=l24;
sj0=si2?sj0:sj1;
l14=sj0;
si0=l28;
si0=!(si0);
if(si0){
goto L144;
}
si0=l2;
si1=l12;
si2=3U;
si1<<=(si2&31);
l12=si1;
si0+=si1;
si1=l33;
si2=l12;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
l13=sj1;
si2=l25;
sj2=(U64)(si2);
sj1-=sj2;
si2=l32;
si3=l12;
si2+=si3;
sj2=i64_load(&i->m0,(U64)si2);
l17=sj2;
sj1-=sj2;
i64_store(&i->m0,(U64)si0,sj1);
sj0=l13;
sj1=l17;
si0=sj0 <= sj1;
sj1=l13;
sj2=l17;
si1=sj1 < sj2;
si2=l25;
si0=si2?si0:si1;
l25=si0;
L144:;
sj0=l14;
si1=l25;
sj1=(U64)(si1);
sj2=1ULL;
sj1&=sj2;
sj0|=sj1;
l29=sj0;
L136:;
si0=l0;
si1=l11;
si2=3U;
si1<<=(si2&31);
si0+=si1;
sj1=l29;
sj2=1ULL;
sj1>>=(sj2&63);
i64_store(&i->m0,(U64)si0,sj1);
si0=l21;
si1=l21;
sj1=i64_load(&i->m0,(U64)si1);
l14=sj1;
sj2=l22;
sj3=1ULL;
sj2>>=(sj3&63);
sj1+=sj2;
l13=sj1;
i64_store(&i->m0,(U64)si0,sj1);
sj0=l13;
sj1=l14;
si0=sj0 >= sj1;
if(si0){
goto L145;
}
si0=l9;
si1=3U;
si0<<=(si1&31);
l11=si0;
si1=l8;
si2=3U;
si1<<=(si2&31);
si0-=si1;
l12=si0;
si0=l0;
si1=l8;
si2=l1;
si1+=si2;
si2=3U;
si1<<=(si2&31);
si2=l11;
si1-=si2;
si0+=si1;
l11=si0;
L146:;
{
si0=l12;
si0=!(si0);
if(si0){
goto L145;
}
si0=l11;
si1=l11;
sj1=i64_load(&i->m0,(U64)si1);
sj2=1ULL;
sj1+=sj2;
l14=sj1;
i64_store(&i->m0,(U64)si0,sj1);
si0=l12;
si1=-8U;
si0+=si1;
l12=si0;
si0=l11;
si1=8U;
si0+=si1;
l11=si0;
sj0=l14;
si0=!(sj0);
if(si0){
goto L146;
}
}
L145:;
si0=l3;
si1=l23;
si0=si0 < si1;
if(si0){
goto L39;
}
si0=l10;
si1=l30;
si2=l23;
si1-=si2;
l19=si1;
i32_store(&i->m0,(U64)si0,si1);
si0=l10;
si1=l31;
si2=l23;
si1-=si2;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l7;
si1=l5;
si0=si0 != si1;
if(si0){
goto L38;
}
si0=l3;
si1=l23;
si0-=si1;
l5=si0;
si0=l2;
si1=l23;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l20=si0;
sj0=0ULL;
l13=sj0;
si0=l30;
si1=l23;
si0=si0 == si1;
if(si0){
goto L147;
}
si0=l19;
si1=l1;
si0=si0 > si1;
if(si0){
goto L37;
}
si0=0U;
l16=si0;
si0=l19;
l24=si0;
si0=l33;
si1=l23;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l21=si0;
l11=si0;
si0=l32;
si1=l23;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l23=si0;
l12=si0;
si0=l0;
l15=si0;
L148:;
{
si0=l11;
sj0=i64_load(&i->m0,(U64)si0);
l13=sj0;
si1=l12;
sj1=i64_load(&i->m0,(U64)si1);
sj0+=sj1;
l14=sj0;
sj1=l13;
si0=sj0 < sj1;
l25=si0;
si0=l16;
si1=255U;
si0&=si1;
if(si0){
goto L150;
}
si0=l25;
l16=si0;
goto L149;
L150:;
si0=l25;
sj1=l14;
sj2=1ULL;
sj1+=sj2;
l14=sj1;
si1=!(sj1);
si0|=si1;
l16=si0;
L149:;
si0=l15;
sj1=l14;
i64_store(&i->m0,(U64)si0,sj1);
si0=l11;
si1=8U;
si0+=si1;
l11=si0;
si0=l12;
si1=8U;
si0+=si1;
l12=si0;
si0=l15;
si1=8U;
si0+=si1;
l15=si0;
si0=l24;
si1=-1U;
si0+=si1;
l24=si0;
if(si0){
goto L148;
}
}
si0=l19;
si1=l5;
si0=si0 > si1;
if(si0){
goto L153;
}
si0=l19;
si1=1U;
si0&=si1;
l28=si0;
si0=l8;
si1=l7;
si0+=si1;
si1=l1;
si2=1U;
si1+=si2;
si0=si0 != si1;
if(si0){
goto L152;
}
si0=0U;
l24=si0;
si0=0U;
l11=si0;
goto L151;
L153:;
si0=1202809U;
si1=34U;
si2=1203412U;
f604(i,si0,si1,si2);
UNREACHABLE;
L152:;
si0=0U;
l25=si0;
si0=0U;
si1=l19;
si2=-2U;
si1&=si2;
si0-=si1;
l19=si0;
si0=l21;
l11=si0;
si0=l23;
l12=si0;
si0=l20;
l15=si0;
si0=0U;
l24=si0;
L154:;
{
si0=l15;
si1=l11;
sj1=i64_load(&i->m0,(U64)si1);
l14=sj1;
si2=l24;
sj2=(U64)(si2);
sj3=1ULL;
sj2&=sj3;
sj1-=sj2;
si2=l12;
sj2=i64_load(&i->m0,(U64)si2);
l13=sj2;
sj1-=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l15;
si1=8U;
si0+=si1;
si1=l11;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
l17=sj1;
sj2=l14;
sj3=l13;
si2=sj2 <= sj3;
sj3=l14;
sj4=l13;
si3=sj3 < sj4;
si4=l24;
si5=1U;
si4&=si5;
si2=si4?si2:si3;
l24=si2;
sj2=(U64)(si2);
sj1-=sj2;
si2=l12;
si3=8U;
si2+=si3;
sj2=i64_load(&i->m0,(U64)si2);
l14=sj2;
sj1-=sj2;
i64_store(&i->m0,(U64)si0,sj1);
sj0=l17;
sj1=l14;
si0=sj0 <= sj1;
sj1=l17;
sj2=l14;
si1=sj1 < sj2;
si2=l24;
si0=si2?si0:si1;
l24=si0;
si0=l11;
si1=16U;
si0+=si1;
l11=si0;
si0=l12;
si1=16U;
si0+=si1;
l12=si0;
si0=l15;
si1=16U;
si0+=si1;
l15=si0;
si0=l19;
si1=l25;
si2=-2U;
si1+=si2;
l25=si1;
si0=si0 != si1;
if(si0){
goto L154;
}
}
si0=0U;
si1=l25;
si0-=si1;
l11=si0;
L151:;
sj0=2ULL;
sj1=0ULL;
si2=l16;
sj0=si2?sj0:sj1;
l14=sj0;
si0=l28;
si0=!(si0);
if(si0){
goto L155;
}
si0=l20;
si1=l11;
si2=3U;
si1<<=(si2&31);
l11=si1;
si0+=si1;
si1=l21;
si2=l11;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
l13=sj1;
si2=l24;
sj2=(U64)(si2);
sj1-=sj2;
si2=l23;
si3=l11;
si2+=si3;
sj2=i64_load(&i->m0,(U64)si2);
l17=sj2;
sj1-=sj2;
i64_store(&i->m0,(U64)si0,sj1);
sj0=l13;
sj1=l17;
si0=sj0 <= sj1;
sj1=l13;
sj2=l17;
si1=sj1 < sj2;
si2=l24;
si0=si2?si0:si1;
l24=si0;
L155:;
sj0=l14;
si1=l24;
sj1=(U64)(si1);
sj2=1ULL;
sj1&=sj2;
sj0|=sj1;
l13=sj0;
L147:;
si0=l5;
si1=l8;
si0=si0 < si1;
if(si0){
goto L36;
}
si0=l2;
si1=l9;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l12=si0;
sj0=l29;
sj1=1ULL;
sj0&=sj1;
sj1=0ULL;
si0=sj0 != sj1;
if(si0){
goto L157;
}
sj0=0ULL;
sj1=l13;
sj2=1ULL;
sj1&=sj2;
sj0-=sj1;
l17=sj0;
goto L156;
L157:;
si0=l20;
si1=l20;
sj1=i64_load(&i->m0,(U64)si1);
l14=sj1;
sj2=-1ULL;
sj1+=sj2;
i64_store(&i->m0,(U64)si0,sj1);
sj0=l14;
sj1=0ULL;
si0=sj0 != sj1;
if(si0){
goto L159;
}
si0=8U;
si1=l8;
si2=3U;
si1<<=(si2&31);
si0-=si1;
l11=si0;
L160:;
{
si0=l11;
si0=!(si0);
if(si0){
goto L158;
}
si0=l12;
si1=l11;
si0+=si1;
l15=si0;
si1=l15;
sj1=i64_load(&i->m0,(U64)si1);
l14=sj1;
sj2=-1ULL;
sj1+=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l11;
si1=8U;
si0+=si1;
l11=si0;
sj0=l14;
si0=!(sj0);
if(si0){
goto L160;
}
}
L159:;
sj0=0ULL;
sj1=l13;
sj2=1ULL;
sj1&=sj2;
sj0-=sj1;
l17=sj0;
goto L156;
L158:;
sj0=l13;
sj1=-1ULL;
sj0^=sj1;
sj1=-2ULL;
sj0|=sj1;
l17=sj0;
L156:;
si0=l5;
si1=l8;
si0=si0 == si1;
if(si0){
goto L35;
}
si0=l12;
sj0=i64_load(&i->m0,(U64)si0);
l14=sj0;
si1=l6;
si2=l27;
si3=3U;
si2<<=(si3&31);
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
l22=sj1;
si2=l4;
si3=l26;
si4=3U;
si3<<=(si4&31);
si2+=si3;
sj2=i64_load(&i->m0,(U64)si2);
l29=sj2;
sj1-=sj2;
sj2=l17;
sj1+=sj2;
l34=sj1;
sj0+=sj1;
l17=sj0;
sj1=l14;
sj0^=sj1;
sj1=-1ULL;
si0=(U64)((I64)sj0>(I64)sj1);
if(si0){
goto L34;
}
sj0=l34;
sj1=-1ULL;
si0=(U64)((I64)sj0>(I64)sj1);
if(si0){
goto L161;
}
si0=l12;
sj1=l17;
i64_store(&i->m0,(U64)si0,sj1);
sj0=l14;
sj1=0ULL;
sj2=l34;
sj1-=sj2;
si0=sj0 >= sj1;
if(si0){
goto L7;
}
si0=l3;
si1=3U;
si0<<=(si1&31);
si1=l9;
si2=3U;
si1<<=(si2&31);
l11=si1;
si0-=si1;
si1=-8U;
si0+=si1;
l9=si0;
si0=l11;
si1=l2;
si0+=si1;
si1=8U;
si0+=si1;
l11=si0;
L162:;
{
si0=l9;
si0=!(si0);
if(si0){
goto L7;
}
si0=l11;
si1=l11;
sj1=i64_load(&i->m0,(U64)si1);
l14=sj1;
sj2=-1ULL;
sj1+=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l9;
si1=-8U;
si0+=si1;
l9=si0;
si0=l11;
si1=8U;
si0+=si1;
l11=si0;
sj0=l14;
si0=!(sj0);
if(si0){
goto L162;
}
goto L7;
}
L161:;
si0=l12;
sj1=l17;
i64_store(&i->m0,(U64)si0,sj1);
sj0=l17;
sj1=l14;
si0=sj0 >= sj1;
if(si0){
goto L7;
}
si0=l3;
si1=3U;
si0<<=(si1&31);
si1=l9;
si2=3U;
si1<<=(si2&31);
l11=si1;
si0-=si1;
si1=-8U;
si0+=si1;
l9=si0;
si0=l11;
si1=l2;
si0+=si1;
si1=8U;
si0+=si1;
l11=si0;
L163:;
{
si0=l9;
si0=!(si0);
if(si0){
goto L7;
}
si0=l11;
si1=l11;
sj1=i64_load(&i->m0,(U64)si1);
sj2=1ULL;
sj1+=sj2;
l14=sj1;
i64_store(&i->m0,(U64)si0,sj1);
si0=l9;
si1=-8U;
si0+=si1;
l9=si0;
si0=l11;
si1=8U;
si0+=si1;
l11=si0;
sj0=l14;
si0=!(sj0);
if(si0){
goto L163;
}
goto L7;
}
L106:;
si0=l5;
si0=!(si0);
if(si0){
goto L8;
}
si0=l7;
si0=!(si0);
if(si0){
goto L33;
}
si0=l1;
si0=!(si0);
if(si0){
goto L32;
}
si0=l3;
si0=!(si0);
if(si0){
goto L31;
}
si0=l5;
si1=-1U;
si0+=si1;
l26=si0;
si1=l11;
si2=l8;
si1-=si2;
l23=si1;
si0=si0 < si1;
if(si0){
goto L30;
}
si0=l7;
si1=-1U;
si0+=si1;
l20=si0;
si1=l23;
si0=si0 < si1;
if(si0){
goto L29;
}
si0=l11;
si1=l8;
si0=si0 < si1;
if(si0){
goto L28;
}
si0=l3;
si1=-1U;
si0+=si1;
l27=si0;
si1=l8;
si0=si0 < si1;
if(si0){
goto L27;
}
si0=l0;
si1=l8;
si2=3U;
si1<<=(si2&31);
l9=si1;
si0+=si1;
l21=si0;
si0=l2;
si1=l9;
si0+=si1;
l18=si0;
sj0=0ULL;
l14=sj0;
si0=l11;
si1=l8;
si0=si0 == si1;
if(si0){
goto L164;
}
si0=0U;
l16=si0;
si0=l11;
l24=si0;
si0=l4;
l9=si0;
si0=l6;
l12=si0;
si0=l21;
l15=si0;
L165:;
{
si0=l9;
sj0=i64_load(&i->m0,(U64)si0);
l13=sj0;
si1=l12;
sj1=i64_load(&i->m0,(U64)si1);
sj0+=sj1;
l14=sj0;
sj1=l13;
si0=sj0 < sj1;
l25=si0;
si0=l16;
si1=255U;
si0&=si1;
if(si0){
goto L167;
}
si0=l25;
l16=si0;
goto L166;
L167:;
si0=l25;
sj1=l14;
sj2=1ULL;
sj1+=sj2;
l14=sj1;
si1=!(sj1);
si0|=si1;
l16=si0;
L166:;
si0=l15;
sj1=l14;
i64_store(&i->m0,(U64)si0,sj1);
si0=l9;
si1=8U;
si0+=si1;
l9=si0;
si0=l12;
si1=8U;
si0+=si1;
l12=si0;
si0=l15;
si1=8U;
si0+=si1;
l15=si0;
si0=l8;
si1=l24;
si2=-1U;
si1+=si2;
l24=si1;
si0=si0 != si1;
if(si0){
goto L165;
}
}
si0=l23;
si1=l27;
si2=l8;
si1-=si2;
si0=si0 > si1;
if(si0){
goto L170;
}
si0=l23;
si1=1U;
si0&=si1;
l28=si0;
si0=l1;
si1=-2U;
si0+=si1;
si1=l8;
si0=si0 != si1;
if(si0){
goto L169;
}
si0=0U;
l24=si0;
si0=0U;
l25=si0;
goto L168;
L170:;
si0=1202809U;
si1=34U;
si2=1203412U;
f604(i,si0,si1,si2);
UNREACHABLE;
L169:;
si0=l23;
si1=-2U;
si0&=si1;
l19=si0;
si0=0U;
l24=si0;
si0=l4;
l9=si0;
si0=l6;
l12=si0;
si0=l18;
l15=si0;
si0=0U;
l25=si0;
L171:;
{
si0=l15;
si1=l9;
sj1=i64_load(&i->m0,(U64)si1);
l14=sj1;
si2=l24;
sj2=(U64)(si2);
sj3=1ULL;
sj2&=sj3;
sj1-=sj2;
si2=l12;
sj2=i64_load(&i->m0,(U64)si2);
l13=sj2;
sj1-=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l15;
si1=8U;
si0+=si1;
si1=l9;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
l17=sj1;
sj2=l14;
sj3=l13;
si2=sj2 <= sj3;
sj3=l14;
sj4=l13;
si3=sj3 < sj4;
si4=l24;
si5=1U;
si4&=si5;
si2=si4?si2:si3;
l24=si2;
sj2=(U64)(si2);
sj1-=sj2;
si2=l12;
si3=8U;
si2+=si3;
sj2=i64_load(&i->m0,(U64)si2);
l14=sj2;
sj1-=sj2;
i64_store(&i->m0,(U64)si0,sj1);
sj0=l17;
sj1=l14;
si0=sj0 <= sj1;
sj1=l17;
sj2=l14;
si1=sj1 < sj2;
si2=l24;
si0=si2?si0:si1;
l24=si0;
si0=l9;
si1=16U;
si0+=si1;
l9=si0;
si0=l12;
si1=16U;
si0+=si1;
l12=si0;
si0=l15;
si1=16U;
si0+=si1;
l15=si0;
si0=l19;
si1=l25;
si2=2U;
si1+=si2;
l25=si1;
si0=si0 != si1;
if(si0){
goto L171;
}
}
L168:;
sj0=2ULL;
sj1=0ULL;
si2=l16;
sj0=si2?sj0:sj1;
l14=sj0;
si0=l28;
si0=!(si0);
if(si0){
goto L172;
}
si0=l18;
si1=l25;
si2=3U;
si1<<=(si2&31);
l9=si1;
si0+=si1;
si1=l4;
si2=l9;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
l13=sj1;
si2=l24;
sj2=(U64)(si2);
sj1-=sj2;
si2=l6;
si3=l9;
si2+=si3;
sj2=i64_load(&i->m0,(U64)si2);
l17=sj2;
sj1-=sj2;
i64_store(&i->m0,(U64)si0,sj1);
sj0=l13;
sj1=l17;
si0=sj0 <= sj1;
sj1=l13;
sj2=l17;
si1=sj1 < sj2;
si2=l24;
si0=si2?si0:si1;
l24=si0;
L172:;
sj0=l14;
si1=l24;
sj1=(U64)(si1);
sj2=1ULL;
sj1&=sj2;
sj0|=sj1;
l14=sj0;
L164:;
si0=l0;
si1=l11;
si2=3U;
si1<<=(si2&31);
si0+=si1;
sj1=l14;
sj2=1ULL;
sj1>>=(sj2&63);
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=l27;
si2=3U;
si1<<=(si2&31);
si0+=si1;
sj1=0ULL;
sj2=l14;
sj3=1ULL;
sj2&=sj3;
sj1-=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l10;
si1=l20;
si2=l23;
si1-=si2;
l25=si1;
i32_store(&i->m0,(U64)si0,si1);
si0=l10;
si1=l26;
si2=l23;
si1-=si2;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l7;
si1=l5;
si0=si0 != si1;
if(si0){
goto L26;
}
sj0=0ULL;
l13=sj0;
si0=l20;
si1=l23;
si0=si0 == si1;
if(si0){
goto L173;
}
si0=l25;
si1=l8;
si0=si0 > si1;
if(si0){
goto L25;
}
si0=0U;
l15=si0;
si0=l25;
l16=si0;
si0=l6;
si1=l23;
si2=3U;
si1<<=(si2&31);
l9=si1;
si0+=si1;
l19=si0;
l11=si0;
si0=l4;
si1=l9;
si0+=si1;
l23=si0;
l9=si0;
si0=l0;
l12=si0;
L174:;
{
si0=l11;
sj0=i64_load(&i->m0,(U64)si0);
l13=sj0;
si1=l9;
sj1=i64_load(&i->m0,(U64)si1);
sj0+=sj1;
l14=sj0;
sj1=l13;
si0=sj0 < sj1;
l24=si0;
si0=l15;
si1=255U;
si0&=si1;
if(si0){
goto L176;
}
si0=l24;
l15=si0;
goto L175;
L176:;
si0=l24;
sj1=l14;
sj2=1ULL;
sj1+=sj2;
l14=sj1;
si1=!(sj1);
si0|=si1;
l15=si0;
L175:;
si0=l12;
sj1=l14;
i64_store(&i->m0,(U64)si0,sj1);
si0=l11;
si1=8U;
si0+=si1;
l11=si0;
si0=l9;
si1=8U;
si0+=si1;
l9=si0;
si0=l12;
si1=8U;
si0+=si1;
l12=si0;
si0=l16;
si1=-1U;
si0+=si1;
l16=si0;
if(si0){
goto L174;
}
}
si0=l25;
si1=1U;
si0&=si1;
l5=si0;
si0=l8;
si1=l7;
si0+=si1;
si1=l1;
si2=1U;
si1+=si2;
si0=si0 != si1;
if(si0){
goto L178;
}
si0=0U;
l16=si0;
si0=0U;
l11=si0;
goto L177;
L178:;
si0=0U;
l24=si0;
si0=0U;
si1=l25;
si2=-2U;
si1&=si2;
si0-=si1;
l25=si0;
si0=l23;
l11=si0;
si0=l19;
l9=si0;
si0=l2;
l12=si0;
si0=0U;
l16=si0;
L179:;
{
si0=l12;
si1=l9;
sj1=i64_load(&i->m0,(U64)si1);
l14=sj1;
si2=l16;
sj2=(U64)(si2);
sj3=1ULL;
sj2&=sj3;
sj1-=sj2;
si2=l11;
sj2=i64_load(&i->m0,(U64)si2);
l13=sj2;
sj1-=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l12;
si1=8U;
si0+=si1;
si1=l9;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
l17=sj1;
sj2=l14;
sj3=l13;
si2=sj2 <= sj3;
sj3=l14;
sj4=l13;
si3=sj3 < sj4;
si4=l16;
si5=1U;
si4&=si5;
si2=si4?si2:si3;
l16=si2;
sj2=(U64)(si2);
sj1-=sj2;
si2=l11;
si3=8U;
si2+=si3;
sj2=i64_load(&i->m0,(U64)si2);
l14=sj2;
sj1-=sj2;
i64_store(&i->m0,(U64)si0,sj1);
sj0=l17;
sj1=l14;
si0=sj0 <= sj1;
sj1=l17;
sj2=l14;
si1=sj1 < sj2;
si2=l16;
si0=si2?si0:si1;
l16=si0;
si0=l11;
si1=16U;
si0+=si1;
l11=si0;
si0=l9;
si1=16U;
si0+=si1;
l9=si0;
si0=l12;
si1=16U;
si0+=si1;
l12=si0;
si0=l25;
si1=l24;
si2=-2U;
si1+=si2;
l24=si1;
si0=si0 != si1;
if(si0){
goto L179;
}
}
si0=0U;
si1=l24;
si0-=si1;
l11=si0;
L177:;
sj0=2ULL;
sj1=0ULL;
si2=l15;
sj0=si2?sj0:sj1;
l14=sj0;
si0=l5;
si0=!(si0);
if(si0){
goto L180;
}
si0=l2;
si1=l11;
si2=3U;
si1<<=(si2&31);
l11=si1;
si0+=si1;
si1=l19;
si2=l11;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
l13=sj1;
si2=l16;
sj2=(U64)(si2);
sj1-=sj2;
si2=l23;
si3=l11;
si2+=si3;
sj2=i64_load(&i->m0,(U64)si2);
l17=sj2;
sj1-=sj2;
i64_store(&i->m0,(U64)si0,sj1);
sj0=l13;
sj1=l17;
si0=sj0 <= sj1;
sj1=l13;
sj2=l17;
si1=sj1 < sj2;
si2=l16;
si0=si2?si0:si1;
l16=si0;
L180:;
sj0=l14;
si1=l16;
sj1=(U64)(si1);
sj2=1ULL;
sj1&=sj2;
sj0|=sj1;
l13=sj0;
L173:;
si0=l8;
si1=3U;
si0<<=(si1&31);
l12=si0;
si0=l8;
si1=-1U;
si0+=si1;
si1=536870911U;
si0&=si1;
si1=1U;
si0+=si1;
l15=si0;
sj0=0ULL;
sj1=l13;
sj2=1ULL;
sj1>>=(sj2&63);
si2=l4;
si3=l26;
si4=3U;
si3<<=(si4&31);
si2+=si3;
sj2=i64_load(&i->m0,(U64)si2);
l29=sj2;
sj1+=sj2;
si2=l6;
si3=l20;
si4=3U;
si3<<=(si4&31);
si2+=si3;
sj2=i64_load(&i->m0,(U64)si2);
l34=sj2;
sj1+=sj2;
l17=sj1;
sj0-=sj1;
l14=sj0;
si0=0U;
l9=si0;
si0=l0;
l11=si0;
L182:;
{
si0=l11;
sj0=i64_load(&i->m0,(U64)si0);
sj1=0ULL;
si0=sj0 != sj1;
if(si0){
goto L181;
}
si0=l9;
si1=1U;
si0+=si1;
l9=si0;
si0=l11;
si1=8U;
si0+=si1;
l11=si0;
si0=l12;
si1=-8U;
si0+=si1;
l12=si0;
if(si0){
goto L182;
}
}
si0=l15;
l9=si0;
L181:;
si0=l9;
si1=l8;
si0=si0 == si1;
if(si0){
goto L183;
}
si0=l9;
si1=l8;
si0=si0 >= si1;
if(si0){
goto L24;
}
si0=l0;
si1=l9;
si2=3U;
si1<<=(si2&31);
l12=si1;
si0+=si1;
l11=si0;
sj1=0ULL;
si2=l11;
sj2=i64_load(&i->m0,(U64)si2);
sj1-=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l9;
si1=1U;
si0+=si1;
l11=si0;
si1=l8;
si0=si0 == si1;
if(si0){
goto L184;
}
si0=l8;
si1=3U;
si0<<=(si1&31);
si1=l12;
si0-=si1;
si1=-8U;
si0+=si1;
l9=si0;
si0=l0;
si1=l11;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l11=si0;
L185:;
{
si0=l11;
si1=l11;
sj1=i64_load(&i->m0,(U64)si1);
sj2=-1ULL;
sj1^=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l11;
si1=8U;
si0+=si1;
l11=si0;
si0=l9;
si1=-8U;
si0+=si1;
l9=si0;
if(si0){
goto L185;
}
}
L184:;
sj0=l17;
sj1=-1ULL;
sj0^=sj1;
l14=sj0;
L183:;
si0=l21;
sj0=i64_load(&i->m0,(U64)si0);
l17=sj0;
sj1=l14;
sj0+=sj1;
l22=sj0;
sj1=l17;
sj0^=sj1;
sj1=-1ULL;
si0=(U64)((I64)sj0>(I64)sj1);
if(si0){
goto L23;
}
sj0=l14;
sj1=-1ULL;
si0=(U64)((I64)sj0>(I64)sj1);
if(si0){
goto L186;
}
si0=l21;
sj1=l22;
i64_store(&i->m0,(U64)si0,sj1);
sj0=l17;
sj1=0ULL;
sj2=l14;
sj1-=sj2;
si0=sj0 >= sj1;
if(si0){
goto L9;
}
si0=l1;
si1=3U;
si0<<=(si1&31);
si1=l8;
si2=3U;
si1<<=(si2&31);
l9=si1;
si0-=si1;
si1=-8U;
si0+=si1;
l11=si0;
si0=l9;
si1=l0;
si0+=si1;
si1=8U;
si0+=si1;
l0=si0;
L187:;
{
si0=l11;
si0=!(si0);
if(si0){
goto L9;
}
si0=l0;
si1=l0;
sj1=i64_load(&i->m0,(U64)si1);
l14=sj1;
sj2=-1ULL;
sj1+=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l11;
si1=-8U;
si0+=si1;
l11=si0;
si0=l0;
si1=8U;
si0+=si1;
l0=si0;
sj0=l14;
si0=!(sj0);
if(si0){
goto L187;
}
goto L9;
}
L186:;
si0=l21;
sj1=l22;
i64_store(&i->m0,(U64)si0,sj1);
sj0=l22;
sj1=l17;
si0=sj0 >= sj1;
if(si0){
goto L9;
}
si0=l1;
si1=3U;
si0<<=(si1&31);
si1=l8;
si2=3U;
si1<<=(si2&31);
l9=si1;
si0-=si1;
si1=-8U;
si0+=si1;
l11=si0;
si0=l9;
si1=l0;
si0+=si1;
si1=8U;
si0+=si1;
l0=si0;
L188:;
{
si0=l11;
si0=!(si0);
if(si0){
goto L9;
}
si0=l0;
si1=l0;
sj1=i64_load(&i->m0,(U64)si1);
sj2=1ULL;
sj1+=sj2;
l14=sj1;
i64_store(&i->m0,(U64)si0,sj1);
si0=l11;
si1=-8U;
si0+=si1;
l11=si0;
si0=l0;
si1=8U;
si0+=si1;
l0=si0;
sj0=l14;
si0=!(sj0);
if(si0){
goto L188;
}
goto L9;
}
L105:;
si0=l5;
si0=!(si0);
if(si0){
goto L10;
}
si0=l7;
si0=!(si0);
if(si0){
goto L22;
}
si0=l3;
si0=!(si0);
if(si0){
goto L21;
}
si0=l1;
si0=!(si0);
if(si0){
goto L20;
}
si0=l5;
si1=-1U;
si0+=si1;
l28=si0;
si1=l11;
si2=l8;
si1-=si2;
l21=si1;
si0=si0 < si1;
if(si0){
goto L19;
}
si0=l28;
si1=l21;
si0-=si1;
l35=si0;
si1=l8;
si2=l9;
si1-=si2;
l20=si1;
si0=si0 < si1;
if(si0){
goto L18;
}
si0=l7;
si1=-1U;
si0+=si1;
l30=si0;
si1=l21;
si0=si0 < si1;
if(si0){
goto L17;
}
si0=l30;
si1=l21;
si0-=si1;
l32=si0;
si1=l20;
si0=si0 < si1;
if(si0){
goto L16;
}
si0=l11;
si1=l8;
si0=si0 < si1;
if(si0){
goto L15;
}
si0=l3;
si1=-1U;
si0+=si1;
l26=si0;
si1=l9;
si0=si0 < si1;
if(si0){
goto L14;
}
si0=l0;
si1=l8;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l24=si0;
si0=l2;
si1=l9;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l27=si0;
sj0=0ULL;
l22=sj0;
si0=l11;
si1=l8;
si0=si0 == si1;
if(si0){
goto L189;
}
si0=0U;
l25=si0;
si0=l11;
l19=si0;
si0=l4;
l12=si0;
si0=l6;
l15=si0;
si0=l24;
l16=si0;
L190:;
{
si0=l12;
sj0=i64_load(&i->m0,(U64)si0);
l13=sj0;
si1=l15;
sj1=i64_load(&i->m0,(U64)si1);
sj0+=sj1;
l14=sj0;
sj1=l13;
si0=sj0 < sj1;
l23=si0;
si0=l25;
si1=255U;
si0&=si1;
if(si0){
goto L192;
}
si0=l23;
l25=si0;
goto L191;
L192:;
si0=l23;
sj1=l14;
sj2=1ULL;
sj1+=sj2;
l14=sj1;
si1=!(sj1);
si0|=si1;
l25=si0;
L191:;
si0=l16;
sj1=l14;
i64_store(&i->m0,(U64)si0,sj1);
si0=l12;
si1=8U;
si0+=si1;
l12=si0;
si0=l15;
si1=8U;
si0+=si1;
l15=si0;
si0=l16;
si1=8U;
si0+=si1;
l16=si0;
si0=l8;
si1=l19;
si2=-1U;
si1+=si2;
l19=si1;
si0=si0 != si1;
if(si0){
goto L190;
}
}
si0=l21;
si1=l26;
si2=l9;
si1-=si2;
si0=si0 > si1;
if(si0){
goto L195;
}
si0=l21;
si1=1U;
si0&=si1;
l33=si0;
si0=l1;
si1=-2U;
si0+=si1;
si1=l8;
si0=si0 != si1;
if(si0){
goto L194;
}
si0=0U;
l19=si0;
si0=0U;
l23=si0;
goto L193;
L195:;
si0=1202809U;
si1=34U;
si2=1203412U;
f604(i,si0,si1,si2);
UNREACHABLE;
L194:;
si0=l21;
si1=-2U;
si0&=si1;
l18=si0;
si0=0U;
l19=si0;
si0=l4;
l12=si0;
si0=l6;
l15=si0;
si0=l27;
l16=si0;
si0=0U;
l23=si0;
L196:;
{
si0=l16;
si1=l12;
sj1=i64_load(&i->m0,(U64)si1);
l14=sj1;
si2=l19;
sj2=(U64)(si2);
sj3=1ULL;
sj2&=sj3;
sj1-=sj2;
si2=l15;
sj2=i64_load(&i->m0,(U64)si2);
l13=sj2;
sj1-=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l16;
si1=8U;
si0+=si1;
si1=l12;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
l17=sj1;
sj2=l14;
sj3=l13;
si2=sj2 <= sj3;
sj3=l14;
sj4=l13;
si3=sj3 < sj4;
si4=l19;
si5=1U;
si4&=si5;
si2=si4?si2:si3;
l19=si2;
sj2=(U64)(si2);
sj1-=sj2;
si2=l15;
si3=8U;
si2+=si3;
sj2=i64_load(&i->m0,(U64)si2);
l14=sj2;
sj1-=sj2;
i64_store(&i->m0,(U64)si0,sj1);
sj0=l17;
sj1=l14;
si0=sj0 <= sj1;
sj1=l17;
sj2=l14;
si1=sj1 < sj2;
si2=l19;
si0=si2?si0:si1;
l19=si0;
si0=l12;
si1=16U;
si0+=si1;
l12=si0;
si0=l15;
si1=16U;
si0+=si1;
l15=si0;
si0=l16;
si1=16U;
si0+=si1;
l16=si0;
si0=l18;
si1=l23;
si2=2U;
si1+=si2;
l23=si1;
si0=si0 != si1;
if(si0){
goto L196;
}
}
L193:;
sj0=2ULL;
sj1=0ULL;
si2=l25;
sj0=si2?sj0:sj1;
l14=sj0;
si0=l33;
si0=!(si0);
if(si0){
goto L197;
}
si0=l27;
si1=l23;
si2=3U;
si1<<=(si2&31);
l12=si1;
si0+=si1;
si1=l4;
si2=l12;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
l13=sj1;
si2=l19;
sj2=(U64)(si2);
sj1-=sj2;
si2=l6;
si3=l12;
si2+=si3;
sj2=i64_load(&i->m0,(U64)si2);
l17=sj2;
sj1-=sj2;
i64_store(&i->m0,(U64)si0,sj1);
sj0=l13;
sj1=l17;
si0=sj0 <= sj1;
sj1=l13;
sj2=l17;
si1=sj1 < sj2;
si2=l19;
si0=si2?si0:si1;
l19=si0;
L197:;
sj0=l14;
si1=l19;
sj1=(U64)(si1);
sj2=1ULL;
sj1&=sj2;
sj0|=sj1;
l22=sj0;
L189:;
si0=l0;
si1=l11;
si2=3U;
si1<<=(si2&31);
si0+=si1;
sj1=l22;
sj2=1ULL;
sj1>>=(sj2&63);
i64_store(&i->m0,(U64)si0,sj1);
si0=l26;
si1=l21;
si2=l9;
si1+=si2;
l18=si1;
si0=si0 < si1;
if(si0){
goto L13;
}
si0=l4;
si1=l21;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l31=si0;
si0=l6;
si1=l21;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l36=si0;
si0=l2;
si1=l18;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l33=si0;
sj0=0ULL;
l29=sj0;
si0=l8;
si1=l9;
si0=si0 == si1;
l37=si0;
if(si0){
goto L198;
}
si0=l1;
si1=l20;
si0=si0 < si1;
if(si0){
goto L12;
}
si0=l26;
si1=l18;
si0-=si1;
l21=si0;
si0=0U;
l25=si0;
si0=l20;
l19=si0;
si0=l31;
l12=si0;
si0=l36;
l15=si0;
si0=l0;
l16=si0;
L199:;
{
si0=l12;
sj0=i64_load(&i->m0,(U64)si0);
l13=sj0;
si1=l15;
sj1=i64_load(&i->m0,(U64)si1);
sj0+=sj1;
l14=sj0;
sj1=l13;
si0=sj0 < sj1;
l23=si0;
si0=l25;
si1=255U;
si0&=si1;
if(si0){
goto L201;
}
si0=l23;
l25=si0;
goto L200;
L201:;
si0=l23;
sj1=l14;
sj2=1ULL;
sj1+=sj2;
l14=sj1;
si1=!(sj1);
si0|=si1;
l25=si0;
L200:;
si0=l16;
sj1=l14;
i64_store(&i->m0,(U64)si0,sj1);
si0=l12;
si1=8U;
si0+=si1;
l12=si0;
si0=l15;
si1=8U;
si0+=si1;
l15=si0;
si0=l16;
si1=8U;
si0+=si1;
l16=si0;
si0=l19;
si1=-1U;
si0+=si1;
l19=si0;
if(si0){
goto L199;
}
}
si0=l20;
si1=l21;
si0=si0 > si1;
if(si0){
goto L204;
}
si0=0U;
l19=si0;
si0=l20;
si1=1U;
si0&=si1;
l38=si0;
si0=l9;
si1=-1U;
si0^=si1;
si1=0U;
si2=l8;
si1-=si2;
si0=si0 != si1;
if(si0){
goto L203;
}
si0=0U;
l12=si0;
goto L202;
L204:;
si0=1202809U;
si1=34U;
si2=1203412U;
f604(i,si0,si1,si2);
UNREACHABLE;
L203:;
si0=0U;
l23=si0;
si0=0U;
si1=l20;
si2=-2U;
si1&=si2;
si0-=si1;
l21=si0;
si0=l31;
l12=si0;
si0=l36;
l15=si0;
si0=l33;
l16=si0;
si0=0U;
l19=si0;
L205:;
{
si0=l16;
si1=l12;
sj1=i64_load(&i->m0,(U64)si1);
l14=sj1;
si2=l19;
sj2=(U64)(si2);
sj3=1ULL;
sj2&=sj3;
sj1-=sj2;
si2=l15;
sj2=i64_load(&i->m0,(U64)si2);
l13=sj2;
sj1-=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l16;
si1=8U;
si0+=si1;
si1=l12;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
l17=sj1;
sj2=l14;
sj3=l13;
si2=sj2 <= sj3;
sj3=l14;
sj4=l13;
si3=sj3 < sj4;
si4=l19;
si5=1U;
si4&=si5;
si2=si4?si2:si3;
l19=si2;
sj2=(U64)(si2);
sj1-=sj2;
si2=l15;
si3=8U;
si2+=si3;
sj2=i64_load(&i->m0,(U64)si2);
l14=sj2;
sj1-=sj2;
i64_store(&i->m0,(U64)si0,sj1);
sj0=l17;
sj1=l14;
si0=sj0 <= sj1;
sj1=l17;
sj2=l14;
si1=sj1 < sj2;
si2=l19;
si0=si2?si0:si1;
l19=si0;
si0=l12;
si1=16U;
si0+=si1;
l12=si0;
si0=l15;
si1=16U;
si0+=si1;
l15=si0;
si0=l16;
si1=16U;
si0+=si1;
l16=si0;
si0=l21;
si1=l23;
si2=-2U;
si1+=si2;
l23=si1;
si0=si0 != si1;
if(si0){
goto L205;
}
}
si0=0U;
si1=l23;
si0-=si1;
l12=si0;
L202:;
sj0=2ULL;
sj1=0ULL;
si2=l25;
sj0=si2?sj0:sj1;
l14=sj0;
si0=l38;
si0=!(si0);
if(si0){
goto L206;
}
si0=l33;
si1=l12;
si2=3U;
si1<<=(si2&31);
l12=si1;
si0+=si1;
si1=l31;
si2=l12;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
l13=sj1;
si2=l19;
sj2=(U64)(si2);
sj1-=sj2;
si2=l36;
si3=l12;
si2+=si3;
sj2=i64_load(&i->m0,(U64)si2);
l17=sj2;
sj1-=sj2;
i64_store(&i->m0,(U64)si0,sj1);
sj0=l13;
sj1=l17;
si0=sj0 <= sj1;
sj1=l13;
sj2=l17;
si1=sj1 < sj2;
si2=l19;
si0=si2?si0:si1;
l19=si0;
L206:;
sj0=l14;
si1=l19;
sj1=(U64)(si1);
sj2=1ULL;
sj1&=sj2;
sj0|=sj1;
l29=sj0;
L198:;
si0=l2;
si1=l26;
si2=3U;
si1<<=(si2&31);
si0+=si1;
sj1=0ULL;
sj2=l29;
sj3=1ULL;
sj2&=sj3;
sj1-=sj2;
i64_store(&i->m0,(U64)si0,sj1);
sj0=l22;
sj1=1ULL;
sj0&=sj1;
sj1=0ULL;
si0=sj0 == sj1;
if(si0){
goto L11;
}
si0=l33;
si1=l33;
sj1=i64_load(&i->m0,(U64)si1);
l14=sj1;
sj2=-1ULL;
sj1+=sj2;
i64_store(&i->m0,(U64)si0,sj1);
sj0=l14;
sj1=0ULL;
si0=sj0 != sj1;
if(si0){
goto L11;
}
si0=l8;
si1=3U;
si0<<=(si1&31);
l12=si0;
si1=l3;
si2=3U;
si1<<=(si2&31);
si0+=si1;
si1=l9;
si2=l1;
si1+=si2;
si2=3U;
si1<<=(si2&31);
l16=si1;
si0-=si1;
l15=si0;
si0=l2;
si1=l16;
si2=l12;
si1-=si2;
si0+=si1;
l12=si0;
L207:;
{
si0=l15;
si0=!(si0);
if(si0){
goto L11;
}
si0=l12;
si1=l12;
sj1=i64_load(&i->m0,(U64)si1);
l14=sj1;
sj2=-1ULL;
sj1+=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l15;
si1=-8U;
si0+=si1;
l15=si0;
si0=l12;
si1=8U;
si0+=si1;
l12=si0;
sj0=l14;
si0=!(sj0);
si0=!(si0);
if(si0){
goto L11;
}
goto L207;
}
L72:;
si0=l10;
si1=0U;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=0U;
si1=l10;
si2=l10;
si3=4U;
si2+=si3;
si3=l10;
si4=8U;
si3+=si4;
si4=1190164U;
f1250(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L71:;
si0=1202809U;
si1=34U;
si2=1202976U;
f604(i,si0,si1,si2);
UNREACHABLE;
L70:;
si0=1189451U;
si1=43U;
si2=1190196U;
f604(i,si0,si1,si2);
UNREACHABLE;
L69:;
si0=1189451U;
si1=43U;
si2=1190212U;
f604(i,si0,si1,si2);
UNREACHABLE;
L68:;
si0=1189416U;
si1=35U;
si2=1190228U;
f604(i,si0,si1,si2);
UNREACHABLE;
L67:;
si0=1189416U;
si1=35U;
si2=1190244U;
f604(i,si0,si1,si2);
UNREACHABLE;
L66:;
si0=1189416U;
si1=35U;
si2=1190260U;
f604(i,si0,si1,si2);
UNREACHABLE;
L65:;
si0=l9;
si1=l3;
si2=1190276U;
f593(i,si0,si1,si2);
UNREACHABLE;
L64:;
si0=l10;
si1=0U;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=0U;
si1=l10;
si2=l10;
si3=4U;
si2+=si3;
si3=l10;
si4=8U;
si3+=si4;
si4=1190164U;
f1250(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L63:;
si0=1202809U;
si1=34U;
si2=1202976U;
f604(i,si0,si1,si2);
UNREACHABLE;
L62:;
si0=l19;
si1=l1;
si2=1190308U;
f593(i,si0,si1,si2);
UNREACHABLE;
L61:;
si0=l21;
sj1=l13;
i64_store(&i->m0,(U64)si0,sj1);
goto L3;
L60:;
si0=1189451U;
si1=43U;
si2=1190340U;
f604(i,si0,si1,si2);
UNREACHABLE;
L59:;
si0=1189451U;
si1=43U;
si2=1190356U;
f604(i,si0,si1,si2);
UNREACHABLE;
L58:;
si0=1189451U;
si1=43U;
si2=1190372U;
f604(i,si0,si1,si2);
UNREACHABLE;
L57:;
si0=1189416U;
si1=35U;
si2=1190388U;
f604(i,si0,si1,si2);
UNREACHABLE;
L56:;
si0=1189416U;
si1=35U;
si2=1190404U;
f604(i,si0,si1,si2);
UNREACHABLE;
L55:;
si0=1189416U;
si1=35U;
si2=1190420U;
f604(i,si0,si1,si2);
UNREACHABLE;
L54:;
si0=l8;
si1=l11;
si2=1190436U;
f593(i,si0,si1,si2);
UNREACHABLE;
L53:;
si0=l10;
si1=0U;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=0U;
si1=l10;
si2=l10;
si3=4U;
si2+=si3;
si3=l10;
si4=8U;
si3+=si4;
si4=1190164U;
f1250(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L52:;
si0=1202809U;
si1=34U;
si2=1202976U;
f604(i,si0,si1,si2);
UNREACHABLE;
L51:;
si0=1189451U;
si1=43U;
si2=1190468U;
f604(i,si0,si1,si2);
UNREACHABLE;
L50:;
si0=1189451U;
si1=43U;
si2=1190484U;
f604(i,si0,si1,si2);
UNREACHABLE;
L49:;
si0=1189451U;
si1=43U;
si2=1190500U;
f604(i,si0,si1,si2);
UNREACHABLE;
L48:;
si0=1189416U;
si1=35U;
si2=1190516U;
f604(i,si0,si1,si2);
UNREACHABLE;
L47:;
si0=1189416U;
si1=35U;
si2=1190532U;
f604(i,si0,si1,si2);
UNREACHABLE;
L46:;
si0=1189416U;
si1=35U;
si2=1190548U;
f604(i,si0,si1,si2);
UNREACHABLE;
L45:;
si0=1189416U;
si1=35U;
si2=1190564U;
f604(i,si0,si1,si2);
UNREACHABLE;
L44:;
si0=l8;
si1=l11;
si2=1190580U;
f593(i,si0,si1,si2);
UNREACHABLE;
L43:;
si0=l9;
si1=l28;
si2=1190596U;
f593(i,si0,si1,si2);
UNREACHABLE;
L42:;
si0=1202809U;
si1=34U;
si2=1202976U;
f604(i,si0,si1,si2);
UNREACHABLE;
L41:;
si0=l12;
si1=l11;
si2=1190612U;
f593(i,si0,si1,si2);
UNREACHABLE;
L40:;
si0=1202809U;
si1=34U;
si2=1202976U;
f604(i,si0,si1,si2);
UNREACHABLE;
L39:;
si0=l23;
si1=l3;
si2=1190628U;
f593(i,si0,si1,si2);
UNREACHABLE;
L38:;
si0=l10;
si1=0U;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=0U;
si1=l10;
si2=l10;
si3=4U;
si2+=si3;
si3=l10;
si4=8U;
si3+=si4;
si4=1190164U;
f1250(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L37:;
si0=1202809U;
si1=34U;
si2=1202976U;
f604(i,si0,si1,si2);
UNREACHABLE;
L36:;
si0=1189416U;
si1=35U;
si2=1190644U;
f604(i,si0,si1,si2);
UNREACHABLE;
L35:;
si0=1189451U;
si1=43U;
si2=1189760U;
f604(i,si0,si1,si2);
UNREACHABLE;
L34:;
si0=l12;
sj1=l17;
i64_store(&i->m0,(U64)si0,sj1);
goto L7;
L33:;
si0=1189451U;
si1=43U;
si2=1190676U;
f604(i,si0,si1,si2);
UNREACHABLE;
L32:;
si0=1189451U;
si1=43U;
si2=1190692U;
f604(i,si0,si1,si2);
UNREACHABLE;
L31:;
si0=1189451U;
si1=43U;
si2=1190708U;
f604(i,si0,si1,si2);
UNREACHABLE;
L30:;
si0=1189416U;
si1=35U;
si2=1190724U;
f604(i,si0,si1,si2);
UNREACHABLE;
L29:;
si0=1189416U;
si1=35U;
si2=1190740U;
f604(i,si0,si1,si2);
UNREACHABLE;
L28:;
si0=1189416U;
si1=35U;
si2=1190756U;
f604(i,si0,si1,si2);
UNREACHABLE;
L27:;
si0=1189416U;
si1=35U;
si2=1190772U;
f604(i,si0,si1,si2);
UNREACHABLE;
L26:;
si0=l10;
si1=0U;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=0U;
si1=l10;
si2=l10;
si3=4U;
si2+=si3;
si3=l10;
si4=8U;
si3+=si4;
si4=1190164U;
f1250(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L25:;
si0=1202809U;
si1=34U;
si2=1202976U;
f604(i,si0,si1,si2);
UNREACHABLE;
L24:;
si0=l9;
si1=l8;
si2=1238956U;
f594(i,si0,si1,si2);
UNREACHABLE;
L23:;
si0=l21;
sj1=l22;
i64_store(&i->m0,(U64)si0,sj1);
goto L9;
L22:;
si0=1189451U;
si1=43U;
si2=1190804U;
f604(i,si0,si1,si2);
UNREACHABLE;
L21:;
si0=1189451U;
si1=43U;
si2=1190820U;
f604(i,si0,si1,si2);
UNREACHABLE;
L20:;
si0=1189451U;
si1=43U;
si2=1190836U;
f604(i,si0,si1,si2);
UNREACHABLE;
L19:;
si0=1189416U;
si1=35U;
si2=1190852U;
f604(i,si0,si1,si2);
UNREACHABLE;
L18:;
si0=1189416U;
si1=35U;
si2=1190868U;
f604(i,si0,si1,si2);
UNREACHABLE;
L17:;
si0=1189416U;
si1=35U;
si2=1190884U;
f604(i,si0,si1,si2);
UNREACHABLE;
L16:;
si0=1189416U;
si1=35U;
si2=1190900U;
f604(i,si0,si1,si2);
UNREACHABLE;
L15:;
si0=l8;
si1=l11;
si2=1190916U;
f593(i,si0,si1,si2);
UNREACHABLE;
L14:;
si0=l9;
si1=l26;
si2=1190932U;
f593(i,si0,si1,si2);
UNREACHABLE;
L13:;
si0=l18;
si1=l26;
si2=1190948U;
f593(i,si0,si1,si2);
UNREACHABLE;
L12:;
si0=1202809U;
si1=34U;
si2=1202976U;
f604(i,si0,si1,si2);
UNREACHABLE;
L11:;
si0=l1;
si1=l20;
si0=si0 < si1;
if(si0){
goto L218;
}
sj0=0ULL;
l22=sj0;
si0=l37;
if(si0){
goto L219;
}
si0=l8;
si1=3U;
si0<<=(si1&31);
si1=l9;
si2=3U;
si1<<=(si2&31);
si0-=si1;
l16=si0;
si0=l20;
si1=-1U;
si0+=si1;
si1=536870911U;
si0&=si1;
si1=1U;
si0+=si1;
l25=si0;
si0=0U;
l15=si0;
si0=l0;
l12=si0;
L221:;
{
si0=l12;
sj0=i64_load(&i->m0,(U64)si0);
sj1=0ULL;
si0=sj0 != sj1;
if(si0){
goto L220;
}
si0=l15;
si1=1U;
si0+=si1;
l15=si0;
si0=l12;
si1=8U;
si0+=si1;
l12=si0;
si0=l16;
si1=-8U;
si0+=si1;
l16=si0;
if(si0){
goto L221;
}
}
si0=l25;
l15=si0;
L220:;
sj0=0ULL;
l22=sj0;
si0=l15;
si1=l20;
si0=si0 == si1;
if(si0){
goto L219;
}
si0=l15;
si1=l20;
si0=si0 >= si1;
if(si0){
goto L217;
}
si0=l0;
si1=l15;
si2=3U;
si1<<=(si2&31);
l16=si1;
si0+=si1;
l12=si0;
sj1=0ULL;
si2=l12;
sj2=i64_load(&i->m0,(U64)si2);
sj1-=sj2;
i64_store(&i->m0,(U64)si0,sj1);
sj0=1ULL;
l22=sj0;
si0=l15;
si1=1U;
si0+=si1;
l12=si0;
si1=l20;
si0=si0 == si1;
if(si0){
goto L219;
}
si0=l8;
si1=3U;
si0<<=(si1&31);
si1=l16;
si0-=si1;
si1=l9;
si2=3U;
si1<<=(si2&31);
si0-=si1;
si1=-8U;
si0+=si1;
l15=si0;
si0=l0;
si1=l12;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l12=si0;
L222:;
{
si0=l12;
si1=l12;
sj1=i64_load(&i->m0,(U64)si1);
sj2=-1ULL;
sj1^=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l12;
si1=8U;
si0+=si1;
l12=si0;
si0=l15;
si1=-8U;
si0+=si1;
l15=si0;
if(si0){
goto L222;
}
}
L219:;
si0=l18;
si1=l1;
si2=l20;
si1-=si2;
l26=si1;
si0=si0 > si1;
if(si0){
goto L216;
}
si0=l11;
si1=l3;
si0=si0 > si1;
if(si0){
goto L215;
}
si0=l10;
si1=l32;
si2=l20;
si1-=si2;
l21=si1;
i32_store(&i->m0,(U64)si0,si1);
si0=l10;
si1=l35;
si2=l20;
si1-=si2;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l7;
si1=l5;
si0=si0 != si1;
if(si0){
goto L214;
}
si0=l0;
si1=l20;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l5=si0;
sj0=0ULL;
l13=sj0;
si0=l32;
si1=l20;
si0=si0 == si1;
if(si0){
goto L223;
}
si0=l21;
si1=l18;
si0=si0 > si1;
if(si0){
goto L213;
}
si0=0U;
l25=si0;
si0=l21;
l19=si0;
si0=l36;
si1=l20;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l18=si0;
l12=si0;
si0=l31;
si1=l20;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l20=si0;
l15=si0;
si0=l5;
l16=si0;
L224:;
{
si0=l12;
sj0=i64_load(&i->m0,(U64)si0);
l13=sj0;
si1=l15;
sj1=i64_load(&i->m0,(U64)si1);
sj0+=sj1;
l14=sj0;
sj1=l13;
si0=sj0 < sj1;
l23=si0;
si0=l25;
si1=255U;
si0&=si1;
if(si0){
goto L226;
}
si0=l23;
l25=si0;
goto L225;
L226:;
si0=l23;
sj1=l14;
sj2=1ULL;
sj1+=sj2;
l14=sj1;
si1=!(sj1);
si0|=si1;
l25=si0;
L225:;
si0=l16;
sj1=l14;
i64_store(&i->m0,(U64)si0,sj1);
si0=l12;
si1=8U;
si0+=si1;
l12=si0;
si0=l15;
si1=8U;
si0+=si1;
l15=si0;
si0=l16;
si1=8U;
si0+=si1;
l16=si0;
si0=l19;
si1=-1U;
si0+=si1;
l19=si0;
if(si0){
goto L224;
}
}
si0=l21;
si1=l11;
si0=si0 > si1;
if(si0){
goto L229;
}
si0=l21;
si1=1U;
si0&=si1;
l32=si0;
si0=l9;
si1=l7;
si0+=si1;
si1=l1;
si2=1U;
si1+=si2;
si0=si0 != si1;
if(si0){
goto L228;
}
si0=0U;
l16=si0;
si0=0U;
l11=si0;
goto L227;
L229:;
si0=1202809U;
si1=34U;
si2=1203412U;
f604(i,si0,si1,si2);
UNREACHABLE;
L228:;
si0=0U;
l19=si0;
si0=0U;
si1=l21;
si2=-2U;
si1&=si2;
si0-=si1;
l23=si0;
si0=l20;
l11=si0;
si0=l18;
l12=si0;
si0=l2;
l15=si0;
si0=0U;
l16=si0;
L230:;
{
si0=l15;
si1=l12;
sj1=i64_load(&i->m0,(U64)si1);
l14=sj1;
si2=l16;
sj2=(U64)(si2);
sj3=1ULL;
sj2&=sj3;
sj1-=sj2;
si2=l11;
sj2=i64_load(&i->m0,(U64)si2);
l13=sj2;
sj1-=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l15;
si1=8U;
si0+=si1;
si1=l12;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
l17=sj1;
sj2=l14;
sj3=l13;
si2=sj2 <= sj3;
sj3=l14;
sj4=l13;
si3=sj3 < sj4;
si4=l16;
si5=1U;
si4&=si5;
si2=si4?si2:si3;
l16=si2;
sj2=(U64)(si2);
sj1-=sj2;
si2=l11;
si3=8U;
si2+=si3;
sj2=i64_load(&i->m0,(U64)si2);
l14=sj2;
sj1-=sj2;
i64_store(&i->m0,(U64)si0,sj1);
sj0=l17;
sj1=l14;
si0=sj0 <= sj1;
sj1=l17;
sj2=l14;
si1=sj1 < sj2;
si2=l16;
si0=si2?si0:si1;
l16=si0;
si0=l11;
si1=16U;
si0+=si1;
l11=si0;
si0=l12;
si1=16U;
si0+=si1;
l12=si0;
si0=l15;
si1=16U;
si0+=si1;
l15=si0;
si0=l23;
si1=l19;
si2=-2U;
si1+=si2;
l19=si1;
si0=si0 != si1;
if(si0){
goto L230;
}
}
si0=0U;
si1=l19;
si0-=si1;
l11=si0;
L227:;
sj0=2ULL;
sj1=0ULL;
si2=l25;
sj0=si2?sj0:sj1;
l14=sj0;
si0=l32;
si0=!(si0);
if(si0){
goto L231;
}
si0=l2;
si1=l11;
si2=3U;
si1<<=(si2&31);
l11=si1;
si0+=si1;
si1=l18;
si2=l11;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
l13=sj1;
si2=l16;
sj2=(U64)(si2);
sj1-=sj2;
si2=l20;
si3=l11;
si2+=si3;
sj2=i64_load(&i->m0,(U64)si2);
l17=sj2;
sj1-=sj2;
i64_store(&i->m0,(U64)si0,sj1);
sj0=l13;
sj1=l17;
si0=sj0 <= sj1;
sj1=l13;
sj2=l17;
si1=sj1 < sj2;
si2=l16;
si0=si2?si0:si1;
l16=si0;
L231:;
sj0=l14;
si1=l16;
sj1=(U64)(si1);
sj2=1ULL;
sj1&=sj2;
sj0|=sj1;
l13=sj0;
L223:;
si0=l26;
si1=l9;
si0=si0 < si1;
if(si0){
goto L212;
}
si0=l4;
si1=l28;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l16=si0;
si0=l6;
si1=l30;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l25=si0;
sj0=l22;
sj1=l29;
sj2=1ULL;
sj1>>=(sj2&63);
sj0+=sj1;
l14=sj0;
si0=0U;
l12=si0;
si0=0U;
si1=l9;
si2=3U;
si1<<=(si2&31);
si0-=si1;
l11=si0;
si0=l9;
si1=-1U;
si0+=si1;
si1=536870911U;
si0&=si1;
si1=1U;
si0+=si1;
l15=si0;
L233:;
{
si0=l24;
si1=l11;
si0+=si1;
sj0=i64_load(&i->m0,(U64)si0);
sj1=0ULL;
si0=sj0 != sj1;
if(si0){
goto L232;
}
si0=l12;
si1=1U;
si0+=si1;
l12=si0;
si0=l11;
si1=8U;
si0+=si1;
l11=si0;
if(si0){
goto L233;
}
}
si0=l15;
l12=si0;
L232:;
si0=l12;
si1=l9;
si0=si0 == si1;
if(si0){
goto L234;
}
si0=l12;
si1=l9;
si0=si0 >= si1;
if(si0){
goto L211;
}
si0=l5;
si1=l12;
si2=3U;
si1<<=(si2&31);
l15=si1;
si0+=si1;
l11=si0;
sj1=0ULL;
si2=l11;
sj2=i64_load(&i->m0,(U64)si2);
sj1-=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l12;
si1=1U;
si0+=si1;
si1=l9;
si0=si0 == si1;
if(si0){
goto L234;
}
si0=l15;
si1=l9;
si2=3U;
si1<<=(si2&31);
si0-=si1;
si1=8U;
si0+=si1;
l11=si0;
L235:;
{
si0=l24;
si1=l11;
si0+=si1;
l15=si0;
si1=l15;
sj1=i64_load(&i->m0,(U64)si1);
sj2=-1ULL;
sj1^=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l11;
si1=8U;
si0+=si1;
l11=si0;
if(si0){
goto L235;
}
}
L234:;
si0=l5;
si1=l5;
sj1=i64_load(&i->m0,(U64)si1);
l17=sj1;
sj2=l14;
sj1-=sj2;
i64_store(&i->m0,(U64)si0,sj1);
sj0=l17;
sj1=l14;
si0=sj0 >= sj1;
if(si0){
goto L238;
}
si0=8U;
si1=l9;
si2=3U;
si1<<=(si2&31);
si0-=si1;
l11=si0;
L239:;
{
si0=l11;
si0=!(si0);
if(si0){
goto L237;
}
si0=l24;
si1=l11;
si0+=si1;
l15=si0;
si1=l15;
sj1=i64_load(&i->m0,(U64)si1);
l14=sj1;
sj2=-1ULL;
sj1+=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l11;
si1=8U;
si0+=si1;
l11=si0;
sj0=l14;
si0=!(sj0);
if(si0){
goto L239;
}
}
L238:;
sj0=0ULL;
sj1=l13;
sj2=1ULL;
sj1>>=(sj2&63);
sj0-=sj1;
l17=sj0;
goto L236;
L237:;
sj0=l13;
sj1=1ULL;
sj0>>=(sj1&63);
sj1=-1ULL;
sj0^=sj1;
l17=sj0;
L236:;
si0=l26;
si1=l9;
si0=si0 == si1;
if(si0){
goto L210;
}
si0=l24;
sj0=i64_load(&i->m0,(U64)si0);
l14=sj0;
sj1=l17;
si2=l12;
si3=l9;
si2=si2 != si3;
sj2=(U64)(si2);
sj1-=sj2;
si2=l16;
sj2=i64_load(&i->m0,(U64)si2);
l22=sj2;
si3=l25;
sj3=i64_load(&i->m0,(U64)si3);
l29=sj3;
sj2+=sj3;
sj1-=sj2;
l34=sj1;
sj0+=sj1;
l17=sj0;
sj1=l14;
sj0^=sj1;
sj1=-1ULL;
si0=(U64)((I64)sj0>(I64)sj1);
if(si0){
goto L209;
}
sj0=l34;
sj1=-1ULL;
si0=(U64)((I64)sj0>(I64)sj1);
if(si0){
goto L240;
}
si0=l24;
sj1=l17;
i64_store(&i->m0,(U64)si0,sj1);
sj0=l14;
sj1=0ULL;
sj2=l34;
sj1-=sj2;
si0=sj0 >= sj1;
if(si0){
goto L208;
}
si0=l1;
si1=3U;
si0<<=(si1&31);
si1=l8;
si2=3U;
si1<<=(si2&31);
l8=si1;
si0-=si1;
si1=-8U;
si0+=si1;
l11=si0;
si0=l8;
si1=l0;
si0+=si1;
si1=8U;
si0+=si1;
l8=si0;
L241:;
{
si0=l11;
si0=!(si0);
if(si0){
goto L208;
}
si0=l8;
si1=l8;
sj1=i64_load(&i->m0,(U64)si1);
l14=sj1;
sj2=-1ULL;
sj1+=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l11;
si1=-8U;
si0+=si1;
l11=si0;
si0=l8;
si1=8U;
si0+=si1;
l8=si0;
sj0=l14;
si0=!(sj0);
if(si0){
goto L241;
}
goto L208;
}
L240:;
si0=l24;
sj1=l17;
i64_store(&i->m0,(U64)si0,sj1);
sj0=l17;
sj1=l14;
si0=sj0 >= sj1;
if(si0){
goto L208;
}
si0=l1;
si1=3U;
si0<<=(si1&31);
si1=l8;
si2=3U;
si1<<=(si2&31);
l8=si1;
si0-=si1;
si1=-8U;
si0+=si1;
l11=si0;
si0=l8;
si1=l0;
si0+=si1;
si1=8U;
si0+=si1;
l8=si0;
L242:;
{
si0=l11;
si0=!(si0);
if(si0){
goto L208;
}
si0=l8;
si1=l8;
sj1=i64_load(&i->m0,(U64)si1);
sj2=1ULL;
sj1+=sj2;
l14=sj1;
i64_store(&i->m0,(U64)si0,sj1);
si0=l11;
si1=-8U;
si0+=si1;
l11=si0;
si0=l8;
si1=8U;
si0+=si1;
l8=si0;
sj0=l14;
si0=!(sj0);
if(si0){
goto L242;
}
goto L208;
}
L218:;
si0=1189416U;
si1=35U;
si2=1190964U;
f604(i,si0,si1,si2);
UNREACHABLE;
L217:;
si0=l15;
si1=l20;
si2=1238956U;
f594(i,si0,si1,si2);
UNREACHABLE;
L216:;
si0=l18;
si1=l26;
si2=1190980U;
f597(i,si0,si1,si2);
UNREACHABLE;
L215:;
si0=l11;
si1=l3;
si2=1190996U;
f597(i,si0,si1,si2);
UNREACHABLE;
L214:;
si0=l10;
si1=0U;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=0U;
si1=l10;
si2=l10;
si3=4U;
si2+=si3;
si3=l10;
si4=8U;
si3+=si4;
si4=1190164U;
f1250(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L213:;
si0=1202809U;
si1=34U;
si2=1202976U;
f604(i,si0,si1,si2);
UNREACHABLE;
L212:;
si0=1189416U;
si1=35U;
si2=1191012U;
f604(i,si0,si1,si2);
UNREACHABLE;
L211:;
si0=l12;
si1=l9;
si2=1238956U;
f594(i,si0,si1,si2);
UNREACHABLE;
L210:;
si0=1189451U;
si1=43U;
si2=1189760U;
f604(i,si0,si1,si2);
UNREACHABLE;
L209:;
si0=l24;
sj1=l17;
i64_store(&i->m0,(U64)si0,sj1);
L208:;
si0=l27;
sj0=i64_load(&i->m0,(U64)si0);
l14=sj0;
sj1=l29;
sj2=l22;
sj3=l13;
sj4=1ULL;
sj3&=sj4;
sj2+=sj3;
sj1-=sj2;
l17=sj1;
sj0+=sj1;
l13=sj0;
sj1=l14;
sj0^=sj1;
sj1=-1ULL;
si0=(U64)((I64)sj0>(I64)sj1);
if(si0){
goto L243;
}
sj0=l17;
sj1=-1ULL;
si0=(U64)((I64)sj0>(I64)sj1);
if(si0){
goto L244;
}
si0=l27;
sj1=l13;
i64_store(&i->m0,(U64)si0,sj1);
sj0=l14;
sj1=0ULL;
sj2=l17;
sj1-=sj2;
si0=sj0 >= sj1;
if(si0){
goto L1;
}
si0=l3;
si1=3U;
si0<<=(si1&31);
si1=l9;
si2=3U;
si1<<=(si2&31);
l8=si1;
si0-=si1;
si1=-8U;
si0+=si1;
l0=si0;
si0=l8;
si1=l2;
si0+=si1;
si1=8U;
si0+=si1;
l8=si0;
L245:;
{
si0=l0;
si0=!(si0);
if(si0){
goto L1;
}
si0=l8;
si1=l8;
sj1=i64_load(&i->m0,(U64)si1);
l14=sj1;
sj2=-1ULL;
sj1+=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=-8U;
si0+=si1;
l0=si0;
si0=l8;
si1=8U;
si0+=si1;
l8=si0;
sj0=l14;
si0=!(sj0);
si0=!(si0);
if(si0){
goto L1;
}
goto L245;
}
L244:;
si0=l27;
sj1=l13;
i64_store(&i->m0,(U64)si0,sj1);
sj0=l13;
sj1=l14;
si0=sj0 >= sj1;
if(si0){
goto L1;
}
si0=l3;
si1=3U;
si0<<=(si1&31);
si1=l9;
si2=3U;
si1<<=(si2&31);
l8=si1;
si0-=si1;
si1=-8U;
si0+=si1;
l0=si0;
si0=l8;
si1=l2;
si0+=si1;
si1=8U;
si0+=si1;
l8=si0;
L246:;
{
si0=l0;
si0=!(si0);
if(si0){
goto L1;
}
si0=l8;
si1=l8;
sj1=i64_load(&i->m0,(U64)si1);
sj2=1ULL;
sj1+=sj2;
l14=sj1;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=-8U;
si0+=si1;
l0=si0;
si0=l8;
si1=8U;
si0+=si1;
l8=si0;
sj0=l14;
si0=!(sj0);
si0=!(si0);
if(si0){
goto L1;
}
goto L246;
}
L243:;
si0=l27;
sj1=l13;
i64_store(&i->m0,(U64)si0,sj1);
goto L1;
L10:;
si0=1189451U;
si1=43U;
si2=1190788U;
f604(i,si0,si1,si2);
UNREACHABLE;
L9:;
si0=l18;
sj0=i64_load(&i->m0,(U64)si0);
l14=sj0;
sj1=l34;
sj2=l13;
sj3=1ULL;
sj2&=sj3;
sj3=l29;
sj2+=sj3;
sj1-=sj2;
l17=sj1;
sj0+=sj1;
l13=sj0;
sj1=l14;
sj0^=sj1;
sj1=-1ULL;
si0=(U64)((I64)sj0>(I64)sj1);
if(si0){
goto L247;
}
sj0=l17;
sj1=-1ULL;
si0=(U64)((I64)sj0>(I64)sj1);
if(si0){
goto L248;
}
si0=l18;
sj1=l13;
i64_store(&i->m0,(U64)si0,sj1);
sj0=l14;
sj1=0ULL;
sj2=l17;
sj1-=sj2;
si0=sj0 >= sj1;
if(si0){
goto L1;
}
si0=l3;
si1=3U;
si0<<=(si1&31);
si1=l8;
si2=3U;
si1<<=(si2&31);
l8=si1;
si0-=si1;
si1=-8U;
si0+=si1;
l0=si0;
si0=l8;
si1=l2;
si0+=si1;
si1=8U;
si0+=si1;
l8=si0;
L249:;
{
si0=l0;
si0=!(si0);
if(si0){
goto L1;
}
si0=l8;
si1=l8;
sj1=i64_load(&i->m0,(U64)si1);
l14=sj1;
sj2=-1ULL;
sj1+=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=-8U;
si0+=si1;
l0=si0;
si0=l8;
si1=8U;
si0+=si1;
l8=si0;
sj0=l14;
si0=!(sj0);
si0=!(si0);
if(si0){
goto L1;
}
goto L249;
}
L248:;
si0=l18;
sj1=l13;
i64_store(&i->m0,(U64)si0,sj1);
sj0=l13;
sj1=l14;
si0=sj0 >= sj1;
if(si0){
goto L1;
}
si0=l3;
si1=3U;
si0<<=(si1&31);
si1=l8;
si2=3U;
si1<<=(si2&31);
l8=si1;
si0-=si1;
si1=-8U;
si0+=si1;
l0=si0;
si0=l8;
si1=l2;
si0+=si1;
si1=8U;
si0+=si1;
l8=si0;
L250:;
{
si0=l0;
si0=!(si0);
if(si0){
goto L1;
}
si0=l8;
si1=l8;
sj1=i64_load(&i->m0,(U64)si1);
sj2=1ULL;
sj1+=sj2;
l14=sj1;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=-8U;
si0+=si1;
l0=si0;
si0=l8;
si1=8U;
si0+=si1;
l8=si0;
sj0=l14;
si0=!(sj0);
si0=!(si0);
if(si0){
goto L1;
}
goto L250;
}
L247:;
si0=l18;
sj1=l13;
i64_store(&i->m0,(U64)si0,sj1);
goto L1;
L8:;
si0=1189451U;
si1=43U;
si2=1190660U;
f604(i,si0,si1,si2);
UNREACHABLE;
L7:;
si0=l8;
si1=3U;
si0<<=(si1&31);
l12=si0;
si0=l8;
si1=-1U;
si0+=si1;
si1=536870911U;
si0&=si1;
si1=1U;
si0+=si1;
l15=si0;
sj0=0ULL;
sj1=l22;
sj2=l13;
sj3=1ULL;
sj2>>=(sj3&63);
sj1+=sj2;
sj2=l29;
sj1+=sj2;
l13=sj1;
sj0-=sj1;
l14=sj0;
si0=0U;
l9=si0;
si0=l0;
l11=si0;
L252:;
{
si0=l11;
sj0=i64_load(&i->m0,(U64)si0);
sj1=0ULL;
si0=sj0 != sj1;
if(si0){
goto L251;
}
si0=l9;
si1=1U;
si0+=si1;
l9=si0;
si0=l11;
si1=8U;
si0+=si1;
l11=si0;
si0=l12;
si1=-8U;
si0+=si1;
l12=si0;
if(si0){
goto L252;
}
}
si0=l15;
l9=si0;
L251:;
si0=l9;
si1=l8;
si0=si0 == si1;
if(si0){
goto L255;
}
si0=l9;
si1=l8;
si0=si0 >= si1;
if(si0){
goto L254;
}
si0=l0;
si1=l9;
si2=3U;
si1<<=(si2&31);
l12=si1;
si0+=si1;
l11=si0;
sj1=0ULL;
si2=l11;
sj2=i64_load(&i->m0,(U64)si2);
sj1-=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l9;
si1=1U;
si0+=si1;
l11=si0;
si1=l8;
si0=si0 == si1;
if(si0){
goto L256;
}
si0=l8;
si1=3U;
si0<<=(si1&31);
si1=l12;
si0-=si1;
si1=-8U;
si0+=si1;
l9=si0;
si0=l0;
si1=l11;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l11=si0;
L257:;
{
si0=l11;
si1=l11;
sj1=i64_load(&i->m0,(U64)si1);
sj2=-1ULL;
sj1^=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l11;
si1=8U;
si0+=si1;
l11=si0;
si0=l9;
si1=-8U;
si0+=si1;
l9=si0;
if(si0){
goto L257;
}
}
L256:;
sj0=l13;
sj1=-1ULL;
sj0^=sj1;
l14=sj0;
L255:;
si0=l18;
sj0=i64_load(&i->m0,(U64)si0);
l13=sj0;
sj1=l14;
sj0+=sj1;
l17=sj0;
sj1=l13;
sj0^=sj1;
sj1=-1ULL;
si0=(U64)((I64)sj0>(I64)sj1);
if(si0){
goto L253;
}
sj0=l14;
sj1=-1ULL;
si0=(U64)((I64)sj0>(I64)sj1);
if(si0){
goto L258;
}
si0=l18;
sj1=l17;
i64_store(&i->m0,(U64)si0,sj1);
sj0=l13;
sj1=0ULL;
sj2=l14;
sj1-=sj2;
si0=sj0 >= sj1;
if(si0){
goto L1;
}
si0=l1;
si1=3U;
si0<<=(si1&31);
si1=l8;
si2=3U;
si1<<=(si2&31);
l8=si1;
si0-=si1;
si1=-8U;
si0+=si1;
l11=si0;
si0=l8;
si1=l0;
si0+=si1;
si1=8U;
si0+=si1;
l8=si0;
L259:;
{
si0=l11;
si0=!(si0);
if(si0){
goto L1;
}
si0=l8;
si1=l8;
sj1=i64_load(&i->m0,(U64)si1);
l14=sj1;
sj2=-1ULL;
sj1+=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l11;
si1=-8U;
si0+=si1;
l11=si0;
si0=l8;
si1=8U;
si0+=si1;
l8=si0;
sj0=l14;
si0=!(sj0);
si0=!(si0);
if(si0){
goto L1;
}
goto L259;
}
L258:;
si0=l18;
sj1=l17;
i64_store(&i->m0,(U64)si0,sj1);
sj0=l17;
sj1=l13;
si0=sj0 >= sj1;
if(si0){
goto L1;
}
si0=l1;
si1=3U;
si0<<=(si1&31);
si1=l8;
si2=3U;
si1<<=(si2&31);
l8=si1;
si0-=si1;
si1=-8U;
si0+=si1;
l11=si0;
si0=l8;
si1=l0;
si0+=si1;
si1=8U;
si0+=si1;
l8=si0;
L260:;
{
si0=l11;
si0=!(si0);
if(si0){
goto L1;
}
si0=l8;
si1=l8;
sj1=i64_load(&i->m0,(U64)si1);
sj2=1ULL;
sj1+=sj2;
l14=sj1;
i64_store(&i->m0,(U64)si0,sj1);
si0=l11;
si1=-8U;
si0+=si1;
l11=si0;
si0=l8;
si1=8U;
si0+=si1;
l8=si0;
sj0=l14;
si0=!(sj0);
si0=!(si0);
if(si0){
goto L1;
}
goto L260;
}
L254:;
si0=l9;
si1=l8;
si2=1238956U;
f594(i,si0,si1,si2);
UNREACHABLE;
L253:;
si0=l18;
sj1=l17;
i64_store(&i->m0,(U64)si0,sj1);
goto L1;
L6:;
si0=1189451U;
si1=43U;
si2=1190452U;
f604(i,si0,si1,si2);
UNREACHABLE;
L5:;
si0=l4;
si1=l12;
si0+=si1;
l16=si0;
si0=l6;
si1=l15;
si0+=si1;
l15=si0;
si0=l8;
si1=3U;
si0<<=(si1&31);
l12=si0;
sj0=0ULL;
sj1=l13;
sj2=1ULL;
sj1>>=(sj2&63);
l13=sj1;
sj0-=sj1;
l14=sj0;
si0=l8;
si1=-1U;
si0+=si1;
si1=536870911U;
si0&=si1;
si1=1U;
si0+=si1;
l24=si0;
si0=0U;
l9=si0;
si0=l0;
l11=si0;
L262:;
{
si0=l11;
sj0=i64_load(&i->m0,(U64)si0);
sj1=0ULL;
si0=sj0 != sj1;
if(si0){
goto L261;
}
si0=l9;
si1=1U;
si0+=si1;
l9=si0;
si0=l11;
si1=8U;
si0+=si1;
l11=si0;
si0=l12;
si1=-8U;
si0+=si1;
l12=si0;
if(si0){
goto L262;
}
}
si0=l24;
l9=si0;
L261:;
si0=l9;
si1=l8;
si0=si0 == si1;
if(si0){
goto L266;
}
si0=l9;
si1=l8;
si0=si0 >= si1;
if(si0){
goto L265;
}
si0=l0;
si1=l9;
si2=3U;
si1<<=(si2&31);
l12=si1;
si0+=si1;
l11=si0;
sj1=0ULL;
si2=l11;
sj2=i64_load(&i->m0,(U64)si2);
sj1-=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l9;
si1=1U;
si0+=si1;
l11=si0;
si1=l8;
si0=si0 == si1;
if(si0){
goto L267;
}
si0=l8;
si1=3U;
si0<<=(si1&31);
si1=l12;
si0-=si1;
si1=-8U;
si0+=si1;
l9=si0;
si0=l0;
si1=l11;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l11=si0;
L268:;
{
si0=l11;
si1=l11;
sj1=i64_load(&i->m0,(U64)si1);
sj2=-1ULL;
sj1^=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l11;
si1=8U;
si0+=si1;
l11=si0;
si0=l9;
si1=-8U;
si0+=si1;
l9=si0;
if(si0){
goto L268;
}
}
L267:;
sj0=l13;
sj1=-1ULL;
sj0^=sj1;
l14=sj0;
L266:;
si0=l21;
sj0=i64_load(&i->m0,(U64)si0);
l13=sj0;
sj1=l14;
si2=l16;
sj2=i64_load(&i->m0,(U64)si2);
l17=sj2;
si3=l15;
sj3=i64_load(&i->m0,(U64)si3);
l22=sj3;
sj2+=sj3;
sj1-=sj2;
l29=sj1;
sj0+=sj1;
l14=sj0;
sj1=l13;
sj0^=sj1;
sj1=-1ULL;
si0=(U64)((I64)sj0>(I64)sj1);
if(si0){
goto L264;
}
sj0=l29;
sj1=-1ULL;
si0=(U64)((I64)sj0>(I64)sj1);
if(si0){
goto L269;
}
si0=l21;
sj1=l14;
i64_store(&i->m0,(U64)si0,sj1);
sj0=l13;
sj1=0ULL;
sj2=l29;
sj1-=sj2;
si0=sj0 >= sj1;
if(si0){
goto L263;
}
si0=l1;
si1=3U;
si0<<=(si1&31);
si1=l8;
si2=3U;
si1<<=(si2&31);
l8=si1;
si0-=si1;
si1=-8U;
si0+=si1;
l11=si0;
si0=l8;
si1=l0;
si0+=si1;
si1=8U;
si0+=si1;
l8=si0;
L270:;
{
si0=l11;
si0=!(si0);
if(si0){
goto L263;
}
si0=l8;
si1=l8;
sj1=i64_load(&i->m0,(U64)si1);
l14=sj1;
sj2=-1ULL;
sj1+=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l11;
si1=-8U;
si0+=si1;
l11=si0;
si0=l8;
si1=8U;
si0+=si1;
l8=si0;
sj0=l14;
si0=!(sj0);
if(si0){
goto L270;
}
goto L263;
}
L269:;
si0=l21;
sj1=l14;
i64_store(&i->m0,(U64)si0,sj1);
sj0=l14;
sj1=l13;
si0=sj0 >= sj1;
if(si0){
goto L263;
}
si0=l1;
si1=3U;
si0<<=(si1&31);
si1=l8;
si2=3U;
si1<<=(si2&31);
l8=si1;
si0-=si1;
si1=-8U;
si0+=si1;
l11=si0;
si0=l8;
si1=l0;
si0+=si1;
si1=8U;
si0+=si1;
l8=si0;
L271:;
{
si0=l11;
si0=!(si0);
if(si0){
goto L263;
}
si0=l8;
si1=l8;
sj1=i64_load(&i->m0,(U64)si1);
sj2=1ULL;
sj1+=sj2;
l14=sj1;
i64_store(&i->m0,(U64)si0,sj1);
si0=l11;
si1=-8U;
si0+=si1;
l11=si0;
si0=l8;
si1=8U;
si0+=si1;
l8=si0;
sj0=l14;
si0=!(sj0);
if(si0){
goto L271;
}
goto L263;
}
L265:;
si0=l9;
si1=l8;
si2=1238956U;
f594(i,si0,si1,si2);
UNREACHABLE;
L264:;
si0=l21;
sj1=l14;
i64_store(&i->m0,(U64)si0,sj1);
L263:;
si0=l2;
sj0=i64_load(&i->m0,(U64)si0);
l14=sj0;
sj1=l22;
sj2=l17;
sj1-=sj2;
l17=sj1;
sj0+=sj1;
l13=sj0;
sj1=l14;
sj0^=sj1;
sj1=-1ULL;
si0=(U64)((I64)sj0>(I64)sj1);
if(si0){
goto L272;
}
sj0=l17;
sj1=-1ULL;
si0=(U64)((I64)sj0>(I64)sj1);
if(si0){
goto L273;
}
si0=l2;
sj1=l13;
i64_store(&i->m0,(U64)si0,sj1);
sj0=l14;
sj1=0ULL;
sj2=l17;
sj1-=sj2;
si0=sj0 >= sj1;
if(si0){
goto L1;
}
si0=l2;
si1=8U;
si0+=si1;
l8=si0;
si0=l3;
si1=3U;
si0<<=(si1&31);
si1=-8U;
si0+=si1;
l0=si0;
L274:;
{
si0=l0;
si0=!(si0);
if(si0){
goto L1;
}
si0=l8;
si1=l8;
sj1=i64_load(&i->m0,(U64)si1);
l14=sj1;
sj2=-1ULL;
sj1+=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=-8U;
si0+=si1;
l0=si0;
si0=l8;
si1=8U;
si0+=si1;
l8=si0;
sj0=l14;
si0=!(sj0);
si0=!(si0);
if(si0){
goto L1;
}
goto L274;
}
L273:;
si0=l2;
sj1=l13;
i64_store(&i->m0,(U64)si0,sj1);
sj0=l13;
sj1=l14;
si0=sj0 >= sj1;
if(si0){
goto L1;
}
si0=l2;
si1=8U;
si0+=si1;
l8=si0;
si0=l3;
si1=3U;
si0<<=(si1&31);
si1=-8U;
si0+=si1;
l0=si0;
L275:;
{
si0=l0;
si0=!(si0);
if(si0){
goto L1;
}
si0=l8;
si1=l8;
sj1=i64_load(&i->m0,(U64)si1);
sj2=1ULL;
sj1+=sj2;
l14=sj1;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=-8U;
si0+=si1;
l0=si0;
si0=l8;
si1=8U;
si0+=si1;
l8=si0;
sj0=l14;
si0=!(sj0);
si0=!(si0);
if(si0){
goto L1;
}
goto L275;
}
L272:;
si0=l2;
sj1=l13;
i64_store(&i->m0,(U64)si0,sj1);
goto L1;
L4:;
si0=1189451U;
si1=43U;
si2=1190324U;
f604(i,si0,si1,si2);
UNREACHABLE;
L3:;
si0=l0;
sj0=i64_load(&i->m0,(U64)si0);
l14=sj0;
sj1=l22;
sj2=l17;
sj1+=sj2;
l17=sj1;
sj0-=sj1;
l13=sj0;
sj1=l14;
sj0^=sj1;
sj1=-1ULL;
si0=(U64)((I64)sj0>(I64)sj1);
if(si0){
goto L276;
}
sj0=0ULL;
sj1=l17;
sj0-=sj1;
l22=sj0;
sj1=-1ULL;
si0=(U64)((I64)sj0>(I64)sj1);
if(si0){
goto L277;
}
si0=l0;
sj1=l13;
i64_store(&i->m0,(U64)si0,sj1);
sj0=l14;
sj1=l17;
si0=sj0 >= sj1;
if(si0){
goto L1;
}
si0=l0;
si1=8U;
si0+=si1;
l8=si0;
si0=l1;
si1=3U;
si0<<=(si1&31);
si1=-8U;
si0+=si1;
l0=si0;
L278:;
{
si0=l0;
si0=!(si0);
if(si0){
goto L1;
}
si0=l8;
si1=l8;
sj1=i64_load(&i->m0,(U64)si1);
l14=sj1;
sj2=-1ULL;
sj1+=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=-8U;
si0+=si1;
l0=si0;
si0=l8;
si1=8U;
si0+=si1;
l8=si0;
sj0=l14;
si0=!(sj0);
si0=!(si0);
if(si0){
goto L1;
}
goto L278;
}
L277:;
si0=l0;
sj1=l14;
sj2=l22;
sj1+=sj2;
l13=sj1;
i64_store(&i->m0,(U64)si0,sj1);
sj0=l13;
sj1=l14;
si0=sj0 >= sj1;
if(si0){
goto L1;
}
si0=l0;
si1=8U;
si0+=si1;
l8=si0;
si0=l1;
si1=3U;
si0<<=(si1&31);
si1=-8U;
si0+=si1;
l0=si0;
L279:;
{
si0=l0;
si0=!(si0);
if(si0){
goto L1;
}
si0=l8;
si1=l8;
sj1=i64_load(&i->m0,(U64)si1);
sj2=1ULL;
sj1+=sj2;
l14=sj1;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=-8U;
si0+=si1;
l0=si0;
si0=l8;
si1=8U;
si0+=si1;
l8=si0;
sj0=l14;
si0=!(sj0);
si0=!(si0);
if(si0){
goto L1;
}
goto L279;
}
L276:;
si0=l0;
sj1=l13;
i64_store(&i->m0,(U64)si0,sj1);
goto L1;
L2:;
si0=1189451U;
si1=43U;
si2=1190180U;
f604(i,si0,si1,si2);
UNREACHABLE;
L1:;
si0=l10;
si1=32U;
si0+=si1;
i->g0=si0;
L0:;
}

void f983(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4,U32 l5,U32 l6,U32 l7,U32 l8,U32 l9) {
U32 l10=0;
U32 l11=0;
U32 l12=0;
U64 l13=0;
U64 l14=0;
U32 l15=0;
U32 l16=0;
U64 l17=0;
U32 l18=0;
U32 l19=0;
U64 l20=0;
U32 l21=0;
U32 l22=0;
U32 l23=0;
U32 l24=0;
U32 l25=0;
U32 l26=0;
U64 l27=0;
U32 l28=0;
U32 l29=0;
U32 l30=0;
U32 l31=0;
U32 l32=0;
U32 l33=0;
U32 l34=0;
U32 l35=0;
U32 l36=0;
U32 l37=0;
U32 l38=0;
U32 l39=0;
U64 l40=0;
U32 si0,si1,si2,si3,si4,si5;
U64 sj0,sj1,sj2,sj3,sj4;
si0=i->g0;
si1=32U;
si0-=si1;
l10=si0;
i->g0=si0;
si0=l1;
si1=-1U;
si0+=si1;
l11=si0;
si0=l8;
if(si0){
goto L86;
}
si0=l9;
if(si0){
goto L87;
}
si0=l10;
si1=l5;
i32_store(&i->m0,(U64)si0,si1);
si0=l10;
si1=l7;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l5;
si1=l7;
si0=si0 != si1;
if(si0){
goto L85;
}
si0=l5;
si0=!(si0);
if(si0){
goto L1;
}
si0=l5;
si1=l1;
si0=si0 > si1;
if(si0){
goto L84;
}
si0=0U;
l12=si0;
si0=l5;
l8=si0;
si0=l4;
l11=si0;
si0=l6;
l9=si0;
L88:;
{
si0=l11;
sj0=i64_load(&i->m0,(U64)si0);
l13=sj0;
si1=l9;
sj1=i64_load(&i->m0,(U64)si1);
sj0+=sj1;
l14=sj0;
sj1=l13;
si0=sj0 < sj1;
l15=si0;
si0=l12;
si1=255U;
si0&=si1;
if(si0){
goto L90;
}
si0=l15;
l12=si0;
goto L89;
L90:;
si0=l15;
sj1=l14;
sj2=1ULL;
sj1+=sj2;
l14=sj1;
si1=!(sj1);
si0|=si1;
l12=si0;
L89:;
si0=l0;
sj1=l14;
i64_store(&i->m0,(U64)si0,sj1);
si0=l11;
si1=8U;
si0+=si1;
l11=si0;
si0=l9;
si1=8U;
si0+=si1;
l9=si0;
si0=l0;
si1=8U;
si0+=si1;
l0=si0;
si0=l8;
si1=-1U;
si0+=si1;
l8=si0;
if(si0){
goto L88;
}
}
si0=l5;
si1=l3;
si0=si0 > si1;
if(si0){
goto L93;
}
si0=l5;
si1=1U;
si0&=si1;
l7=si0;
si0=l5;
si1=1U;
si0=si0 != si1;
if(si0){
goto L92;
}
si0=0U;
l15=si0;
sj0=0ULL;
l14=sj0;
goto L91;
L93:;
si0=1202809U;
si1=34U;
si2=1203412U;
f604(i,si0,si1,si2);
UNREACHABLE;
L92:;
si0=l5;
si1=-2U;
si0&=si1;
l16=si0;
si0=0U;
l8=si0;
si0=l4;
l11=si0;
si0=l6;
l9=si0;
si0=l2;
l12=si0;
si0=0U;
l15=si0;
L94:;
{
si0=l12;
si1=l11;
sj1=i64_load(&i->m0,(U64)si1);
l14=sj1;
si2=l8;
sj2=(U64)(si2);
sj3=1ULL;
sj2&=sj3;
sj1-=sj2;
si2=l9;
sj2=i64_load(&i->m0,(U64)si2);
l13=sj2;
sj1-=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l12;
si1=8U;
si0+=si1;
si1=l11;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
l17=sj1;
sj2=l14;
sj3=l13;
si2=sj2 <= sj3;
sj3=l14;
sj4=l13;
si3=sj3 < sj4;
si4=l8;
si5=1U;
si4&=si5;
si2=si4?si2:si3;
l8=si2;
sj2=(U64)(si2);
sj1-=sj2;
si2=l9;
si3=8U;
si2+=si3;
sj2=i64_load(&i->m0,(U64)si2);
l14=sj2;
sj1-=sj2;
i64_store(&i->m0,(U64)si0,sj1);
sj0=l17;
sj1=l14;
si0=sj0 <= sj1;
sj1=l17;
sj2=l14;
si1=sj1 < sj2;
si2=l8;
si0=si2?si0:si1;
l8=si0;
si0=l11;
si1=16U;
si0+=si1;
l11=si0;
si0=l9;
si1=16U;
si0+=si1;
l9=si0;
si0=l12;
si1=16U;
si0+=si1;
l12=si0;
si0=l16;
si1=l15;
si2=2U;
si1+=si2;
l15=si1;
si0=si0 != si1;
if(si0){
goto L94;
}
}
sj0=0ULL;
si1=l8;
sj1=(U64)(si1);
sj0-=sj1;
l14=sj0;
L91:;
si0=l7;
si0=!(si0);
if(si0){
goto L1;
}
si0=l2;
si1=l15;
si2=3U;
si1<<=(si2&31);
l11=si1;
si0+=si1;
si1=l4;
si2=l11;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
sj2=l14;
sj1+=sj2;
si2=l6;
si3=l11;
si2+=si3;
sj2=i64_load(&i->m0,(U64)si2);
sj1-=sj2;
i64_store(&i->m0,(U64)si0,sj1);
goto L1;
L87:;
si0=l5;
si0=!(si0);
if(si0){
goto L2;
}
si0=l7;
si0=!(si0);
if(si0){
goto L83;
}
si0=l5;
si1=-1U;
si0+=si1;
l18=si0;
si1=l11;
si2=l9;
si1-=si2;
l5=si1;
si0=si0 < si1;
if(si0){
goto L82;
}
si0=l7;
si1=-1U;
si0+=si1;
l19=si0;
si1=l9;
si0=si0 < si1;
if(si0){
goto L81;
}
si0=l10;
si1=l5;
i32_store(&i->m0,(U64)si0,si1);
si0=l10;
si1=l19;
si2=l9;
si1-=si2;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l1;
si1=l7;
si0=si0 != si1;
if(si0){
goto L80;
}
sj0=0ULL;
l20=sj0;
si0=l11;
si1=l9;
si0=si0 == si1;
if(si0){
goto L95;
}
si0=l5;
si1=l1;
si0=si0 > si1;
if(si0){
goto L79;
}
si0=0U;
l16=si0;
si0=l4;
l12=si0;
si0=l6;
si1=l9;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l21=si0;
l8=si0;
si0=l0;
l15=si0;
L96:;
{
si0=l12;
sj0=i64_load(&i->m0,(U64)si0);
l13=sj0;
si1=l8;
sj1=i64_load(&i->m0,(U64)si1);
sj0+=sj1;
l14=sj0;
sj1=l13;
si0=sj0 < sj1;
l7=si0;
si0=l16;
si1=255U;
si0&=si1;
if(si0){
goto L98;
}
si0=l7;
l16=si0;
goto L97;
L98:;
si0=l7;
sj1=l14;
sj2=1ULL;
sj1+=sj2;
l14=sj1;
si1=!(sj1);
si0|=si1;
l16=si0;
L97:;
si0=l15;
sj1=l14;
i64_store(&i->m0,(U64)si0,sj1);
si0=l12;
si1=8U;
si0+=si1;
l12=si0;
si0=l8;
si1=8U;
si0+=si1;
l8=si0;
si0=l15;
si1=8U;
si0+=si1;
l15=si0;
si0=l9;
si1=l11;
si2=-1U;
si1+=si2;
l11=si1;
si0=si0 != si1;
if(si0){
goto L96;
}
}
si0=l5;
si1=l3;
si0=si0 > si1;
if(si0){
goto L101;
}
si0=l5;
si1=1U;
si0&=si1;
l22=si0;
si0=l1;
si1=-2U;
si0+=si1;
si1=l9;
si0=si0 != si1;
if(si0){
goto L100;
}
si0=0U;
l15=si0;
si0=0U;
l7=si0;
goto L99;
L101:;
si0=1202809U;
si1=34U;
si2=1203412U;
f604(i,si0,si1,si2);
UNREACHABLE;
L100:;
si0=l5;
si1=-2U;
si0&=si1;
l23=si0;
si0=0U;
l15=si0;
si0=l4;
l11=si0;
si0=l21;
l12=si0;
si0=l2;
l8=si0;
si0=0U;
l7=si0;
L102:;
{
si0=l8;
si1=l11;
sj1=i64_load(&i->m0,(U64)si1);
l14=sj1;
si2=l15;
sj2=(U64)(si2);
sj3=1ULL;
sj2&=sj3;
sj1-=sj2;
si2=l12;
sj2=i64_load(&i->m0,(U64)si2);
l13=sj2;
sj1-=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l8;
si1=8U;
si0+=si1;
si1=l11;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
l17=sj1;
sj2=l14;
sj3=l13;
si2=sj2 <= sj3;
sj3=l14;
sj4=l13;
si3=sj3 < sj4;
si4=l15;
si5=1U;
si4&=si5;
si2=si4?si2:si3;
l15=si2;
sj2=(U64)(si2);
sj1-=sj2;
si2=l12;
si3=8U;
si2+=si3;
sj2=i64_load(&i->m0,(U64)si2);
l14=sj2;
sj1-=sj2;
i64_store(&i->m0,(U64)si0,sj1);
sj0=l17;
sj1=l14;
si0=sj0 <= sj1;
sj1=l17;
sj2=l14;
si1=sj1 < sj2;
si2=l15;
si0=si2?si0:si1;
l15=si0;
si0=l11;
si1=16U;
si0+=si1;
l11=si0;
si0=l12;
si1=16U;
si0+=si1;
l12=si0;
si0=l8;
si1=16U;
si0+=si1;
l8=si0;
si0=l23;
si1=l7;
si2=2U;
si1+=si2;
l7=si1;
si0=si0 != si1;
if(si0){
goto L102;
}
}
L99:;
sj0=2ULL;
sj1=0ULL;
si2=l16;
sj0=si2?sj0:sj1;
l14=sj0;
si0=l22;
si0=!(si0);
if(si0){
goto L103;
}
si0=l2;
si1=l7;
si2=3U;
si1<<=(si2&31);
l11=si1;
si0+=si1;
si1=l4;
si2=l11;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
l13=sj1;
si2=l15;
sj2=(U64)(si2);
sj1-=sj2;
si2=l21;
si3=l11;
si2+=si3;
sj2=i64_load(&i->m0,(U64)si2);
l17=sj2;
sj1-=sj2;
i64_store(&i->m0,(U64)si0,sj1);
sj0=l13;
sj1=l17;
si0=sj0 <= sj1;
sj1=l13;
sj2=l17;
si1=sj1 < sj2;
si2=l15;
si0=si2?si0:si1;
l15=si0;
L103:;
sj0=l14;
si1=l15;
sj1=(U64)(si1);
sj2=1ULL;
sj1&=sj2;
sj0|=sj1;
l20=sj0;
L95:;
si0=l5;
si1=l1;
si0=si0 > si1;
if(si0){
goto L78;
}
si0=l5;
si1=l3;
si0=si0 > si1;
if(si0){
goto L77;
}
si0=l5;
si1=l1;
si0=si0 == si1;
if(si0){
goto L76;
}
si0=l5;
si1=l3;
si0=si0 == si1;
if(si0){
goto L75;
}
si0=l10;
si1=l18;
si2=l5;
si1-=si2;
l11=si1;
i32_store(&i->m0,(U64)si0,si1);
si0=l10;
si1=l9;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l11;
si1=l9;
si0=si0 != si1;
if(si0){
goto L74;
}
si0=l0;
si1=l5;
si2=3U;
si1<<=(si2&31);
l11=si1;
si0+=si1;
l21=si0;
si0=l2;
si1=l11;
si0+=si1;
l23=si0;
si0=l5;
si1=-1U;
si0^=si1;
l11=si0;
si1=l1;
si0+=si1;
l22=si0;
si0=l11;
si1=l3;
si0+=si1;
l24=si0;
sj0=0ULL;
l14=sj0;
si0=l18;
si1=l5;
si0=si0 == si1;
if(si0){
goto L104;
}
si0=l24;
si1=l9;
si0=si0 < si1;
if(si0){
goto L73;
}
si0=0U;
l15=si0;
si0=l22;
l16=si0;
si0=l4;
si1=l5;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l25=si0;
l11=si0;
si0=l6;
l12=si0;
si0=l23;
l8=si0;
L105:;
{
si0=l11;
sj0=i64_load(&i->m0,(U64)si0);
l13=sj0;
si1=l12;
sj1=i64_load(&i->m0,(U64)si1);
sj0+=sj1;
l14=sj0;
sj1=l13;
si0=sj0 < sj1;
l7=si0;
si0=l15;
si1=255U;
si0&=si1;
if(si0){
goto L107;
}
si0=l7;
l15=si0;
goto L106;
L107:;
si0=l7;
sj1=l14;
sj2=1ULL;
sj1+=sj2;
l14=sj1;
si1=!(sj1);
si0|=si1;
l15=si0;
L106:;
si0=l8;
sj1=l14;
i64_store(&i->m0,(U64)si0,sj1);
si0=l11;
si1=8U;
si0+=si1;
l11=si0;
si0=l12;
si1=8U;
si0+=si1;
l12=si0;
si0=l8;
si1=8U;
si0+=si1;
l8=si0;
si0=l16;
si1=-1U;
si0+=si1;
l16=si0;
if(si0){
goto L105;
}
}
si0=l22;
si1=l9;
si0=si0 < si1;
if(si0){
goto L110;
}
si0=l22;
si1=1U;
si0&=si1;
l26=si0;
si0=l22;
si1=1U;
si0=si0 != si1;
if(si0){
goto L109;
}
si0=0U;
l16=si0;
si0=0U;
l11=si0;
goto L108;
L110:;
si0=1202809U;
si1=34U;
si2=1203412U;
f604(i,si0,si1,si2);
UNREACHABLE;
L109:;
si0=0U;
l7=si0;
si0=0U;
si1=l22;
si2=-2U;
si1&=si2;
si0-=si1;
l5=si0;
si0=l25;
l11=si0;
si0=l21;
l12=si0;
si0=l6;
l8=si0;
si0=0U;
l16=si0;
L111:;
{
si0=l12;
si1=l11;
sj1=i64_load(&i->m0,(U64)si1);
l14=sj1;
si2=l16;
sj2=(U64)(si2);
sj3=1ULL;
sj2&=sj3;
sj1-=sj2;
si2=l8;
sj2=i64_load(&i->m0,(U64)si2);
l13=sj2;
sj1-=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l12;
si1=8U;
si0+=si1;
si1=l11;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
l17=sj1;
sj2=l14;
sj3=l13;
si2=sj2 <= sj3;
sj3=l14;
sj4=l13;
si3=sj3 < sj4;
si4=l16;
si5=1U;
si4&=si5;
si2=si4?si2:si3;
l16=si2;
sj2=(U64)(si2);
sj1-=sj2;
si2=l8;
si3=8U;
si2+=si3;
sj2=i64_load(&i->m0,(U64)si2);
l14=sj2;
sj1-=sj2;
i64_store(&i->m0,(U64)si0,sj1);
sj0=l17;
sj1=l14;
si0=sj0 <= sj1;
sj1=l17;
sj2=l14;
si1=sj1 < sj2;
si2=l16;
si0=si2?si0:si1;
l16=si0;
si0=l11;
si1=16U;
si0+=si1;
l11=si0;
si0=l12;
si1=16U;
si0+=si1;
l12=si0;
si0=l8;
si1=16U;
si0+=si1;
l8=si0;
si0=l5;
si1=l7;
si2=-2U;
si1+=si2;
l7=si1;
si0=si0 != si1;
if(si0){
goto L111;
}
}
si0=0U;
si1=l7;
si0-=si1;
l11=si0;
L108:;
sj0=2ULL;
sj1=0ULL;
si2=l15;
sj0=si2?sj0:sj1;
l14=sj0;
si0=l26;
si0=!(si0);
if(si0){
goto L112;
}
si0=l21;
si1=l11;
si2=3U;
si1<<=(si2&31);
l11=si1;
si0+=si1;
si1=l25;
si2=l11;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
l13=sj1;
si2=l16;
sj2=(U64)(si2);
sj1-=sj2;
si2=l6;
si3=l11;
si2+=si3;
sj2=i64_load(&i->m0,(U64)si2);
l17=sj2;
sj1-=sj2;
i64_store(&i->m0,(U64)si0,sj1);
sj0=l13;
sj1=l17;
si0=sj0 <= sj1;
sj1=l13;
sj2=l17;
si1=sj1 < sj2;
si2=l16;
si0=si2?si0:si1;
l16=si0;
L112:;
sj0=l14;
si1=l16;
sj1=(U64)(si1);
sj2=1ULL;
sj1&=sj2;
sj0|=sj1;
l14=sj0;
L104:;
sj0=l20;
sj1=1ULL;
sj0&=sj1;
l17=sj0;
si0=l21;
si1=l22;
si2=3U;
si1<<=(si2&31);
si0+=si1;
si1=l4;
si2=l18;
si3=3U;
si2<<=(si3&31);
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
l13=sj1;
sj2=l14;
sj3=1ULL;
sj2&=sj3;
sj1-=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l23;
si1=l24;
si2=3U;
si1<<=(si2&31);
si0+=si1;
sj1=l13;
sj2=l14;
sj3=1ULL;
sj2>>=(sj3&63);
sj1+=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l21;
sj0=i64_load(&i->m0,(U64)si0);
l14=sj0;
si1=l6;
si2=l19;
si3=3U;
si2<<=(si3&31);
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
l27=sj1;
sj2=l20;
sj3=1ULL;
sj2>>=(sj3&63);
sj1+=sj2;
l20=sj1;
sj0+=sj1;
l13=sj0;
sj1=l14;
sj0^=sj1;
sj1=-1ULL;
si0=(U64)((I64)sj0>(I64)sj1);
if(si0){
goto L72;
}
si0=l0;
si1=l1;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l8=si0;
sj0=l20;
sj1=-1ULL;
si0=(U64)((I64)sj0>(I64)sj1);
if(si0){
goto L113;
}
si0=l21;
sj1=l13;
i64_store(&i->m0,(U64)si0,sj1);
sj0=l14;
sj1=0ULL;
sj2=l20;
sj1-=sj2;
si0=sj0 >= sj1;
if(si0){
goto L3;
}
si0=0U;
si1=l9;
si2=3U;
si1<<=(si2&31);
si0-=si1;
l11=si0;
L114:;
{
si0=l11;
si0=!(si0);
if(si0){
goto L3;
}
si0=l8;
si1=l11;
si0+=si1;
l12=si0;
si1=l12;
sj1=i64_load(&i->m0,(U64)si1);
l14=sj1;
sj2=-1ULL;
sj1+=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l11;
si1=8U;
si0+=si1;
l11=si0;
sj0=l14;
si0=!(sj0);
if(si0){
goto L114;
}
goto L3;
}
L113:;
si0=l21;
sj1=l13;
i64_store(&i->m0,(U64)si0,sj1);
sj0=l13;
sj1=l14;
si0=sj0 >= sj1;
if(si0){
goto L3;
}
si0=0U;
si1=l9;
si2=3U;
si1<<=(si2&31);
si0-=si1;
l11=si0;
L115:;
{
si0=l11;
si0=!(si0);
if(si0){
goto L3;
}
si0=l8;
si1=l11;
si0+=si1;
l12=si0;
si1=l12;
sj1=i64_load(&i->m0,(U64)si1);
sj2=1ULL;
sj1+=sj2;
l14=sj1;
i64_store(&i->m0,(U64)si0,sj1);
si0=l11;
si1=8U;
si0+=si1;
l11=si0;
sj0=l14;
si0=!(sj0);
if(si0){
goto L115;
}
goto L3;
}
L86:;
si0=l9;
si0=!(si0);
if(si0){
goto L119;
}
si0=-1U;
si1=l8;
si2=l9;
si1=si1 != si2;
si2=l8;
si3=l9;
si2=si2 < si3;
si0=si2?si0:si1;
si1=255U;
si0&=si1;
switch(si0){
case 0:
goto L117;
case 1:
goto L116;
default:
goto L118;
}
L119:;
si0=l5;
si0=!(si0);
if(si0){
goto L4;
}
si0=l7;
si0=!(si0);
if(si0){
goto L71;
}
si0=l5;
si1=-1U;
si0+=si1;
l21=si0;
si1=l8;
si0=si0 < si1;
if(si0){
goto L70;
}
si0=l7;
si1=-1U;
si0+=si1;
l22=si0;
si1=l11;
si2=l8;
si1-=si2;
l23=si1;
si0=si0 < si1;
if(si0){
goto L69;
}
si0=l10;
si1=l21;
si2=l8;
si1-=si2;
l18=si1;
i32_store(&i->m0,(U64)si0,si1);
si0=l10;
si1=l23;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l5;
si1=l1;
si0=si0 != si1;
if(si0){
goto L68;
}
sj0=0ULL;
l14=sj0;
si0=l21;
si1=l8;
si0=si0 == si1;
if(si0){
goto L120;
}
si0=l18;
si1=l1;
si0=si0 > si1;
if(si0){
goto L67;
}
si0=0U;
l15=si0;
si0=l21;
l16=si0;
si0=l4;
si1=l8;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l19=si0;
l11=si0;
si0=l6;
l9=si0;
si0=l0;
l12=si0;
L121:;
{
si0=l11;
sj0=i64_load(&i->m0,(U64)si0);
l13=sj0;
si1=l9;
sj1=i64_load(&i->m0,(U64)si1);
sj0+=sj1;
l14=sj0;
sj1=l13;
si0=sj0 < sj1;
l7=si0;
si0=l15;
si1=255U;
si0&=si1;
if(si0){
goto L123;
}
si0=l7;
l15=si0;
goto L122;
L123:;
si0=l7;
sj1=l14;
sj2=1ULL;
sj1+=sj2;
l14=sj1;
si1=!(sj1);
si0|=si1;
l15=si0;
L122:;
si0=l12;
sj1=l14;
i64_store(&i->m0,(U64)si0,sj1);
si0=l11;
si1=8U;
si0+=si1;
l11=si0;
si0=l9;
si1=8U;
si0+=si1;
l9=si0;
si0=l12;
si1=8U;
si0+=si1;
l12=si0;
si0=l8;
si1=l16;
si2=-1U;
si1+=si2;
l16=si1;
si0=si0 != si1;
if(si0){
goto L121;
}
}
si0=l18;
si1=l3;
si0=si0 > si1;
if(si0){
goto L126;
}
si0=l18;
si1=1U;
si0&=si1;
l24=si0;
si0=l5;
si1=-2U;
si0+=si1;
si1=l8;
si0=si0 != si1;
if(si0){
goto L125;
}
si0=0U;
l16=si0;
si0=0U;
l7=si0;
goto L124;
L126:;
si0=1202809U;
si1=34U;
si2=1203412U;
f604(i,si0,si1,si2);
UNREACHABLE;
L125:;
si0=l18;
si1=-2U;
si0&=si1;
l5=si0;
si0=0U;
l16=si0;
si0=l19;
l11=si0;
si0=l6;
l9=si0;
si0=l2;
l12=si0;
si0=0U;
l7=si0;
L127:;
{
si0=l12;
si1=l11;
sj1=i64_load(&i->m0,(U64)si1);
l14=sj1;
si2=l16;
sj2=(U64)(si2);
sj3=1ULL;
sj2&=sj3;
sj1-=sj2;
si2=l9;
sj2=i64_load(&i->m0,(U64)si2);
l13=sj2;
sj1-=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l12;
si1=8U;
si0+=si1;
si1=l11;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
l17=sj1;
sj2=l14;
sj3=l13;
si2=sj2 <= sj3;
sj3=l14;
sj4=l13;
si3=sj3 < sj4;
si4=l16;
si5=1U;
si4&=si5;
si2=si4?si2:si3;
l16=si2;
sj2=(U64)(si2);
sj1-=sj2;
si2=l9;
si3=8U;
si2+=si3;
sj2=i64_load(&i->m0,(U64)si2);
l14=sj2;
sj1-=sj2;
i64_store(&i->m0,(U64)si0,sj1);
sj0=l17;
sj1=l14;
si0=sj0 <= sj1;
sj1=l17;
sj2=l14;
si1=sj1 < sj2;
si2=l16;
si0=si2?si0:si1;
l16=si0;
si0=l11;
si1=16U;
si0+=si1;
l11=si0;
si0=l9;
si1=16U;
si0+=si1;
l9=si0;
si0=l12;
si1=16U;
si0+=si1;
l12=si0;
si0=l5;
si1=l7;
si2=2U;
si1+=si2;
l7=si1;
si0=si0 != si1;
if(si0){
goto L127;
}
}
L124:;
sj0=2ULL;
sj1=0ULL;
si2=l15;
sj0=si2?sj0:sj1;
l14=sj0;
si0=l24;
si0=!(si0);
if(si0){
goto L128;
}
si0=l2;
si1=l7;
si2=3U;
si1<<=(si2&31);
l11=si1;
si0+=si1;
si1=l19;
si2=l11;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
l13=sj1;
si2=l16;
sj2=(U64)(si2);
sj1-=sj2;
si2=l6;
si3=l11;
si2+=si3;
sj2=i64_load(&i->m0,(U64)si2);
l17=sj2;
sj1-=sj2;
i64_store(&i->m0,(U64)si0,sj1);
sj0=l13;
sj1=l17;
si0=sj0 <= sj1;
sj1=l13;
sj2=l17;
si1=sj1 < sj2;
si2=l16;
si0=si2?si0:si1;
l16=si0;
L128:;
sj0=l14;
si1=l16;
sj1=(U64)(si1);
sj2=1ULL;
sj1&=sj2;
sj0|=sj1;
l14=sj0;
L120:;
si0=l23;
si1=l1;
si0=si0 > si1;
if(si0){
goto L66;
}
si0=l23;
si1=l3;
si0=si0 > si1;
if(si0){
goto L65;
}
si0=l23;
si1=l1;
si0=si0 == si1;
if(si0){
goto L64;
}
si0=l23;
si1=l3;
si0=si0 == si1;
if(si0){
goto L63;
}
si0=l4;
si1=l21;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l25=si0;
si0=l6;
si1=l22;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l26=si0;
si0=l22;
si1=l23;
si0-=si1;
l12=si0;
si0=l6;
si1=l23;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l22=si0;
si0=l0;
si1=l23;
si2=3U;
si1<<=(si2&31);
l11=si1;
si0+=si1;
l6=si0;
si1=l23;
si2=-1U;
si1^=si2;
l9=si1;
si2=l1;
si1+=si2;
l23=si1;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l18=si0;
si0=l2;
si1=l11;
si0+=si1;
l21=si0;
si1=l9;
si2=l3;
si1+=si2;
l24=si1;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l19=si0;
si0=l23;
si1=3U;
si0<<=(si1&31);
l9=si0;
sj0=l14;
sj1=1ULL;
sj0&=sj1;
l20=sj0;
sj0=l14;
sj1=1ULL;
sj0>>=(sj1&63);
l27=sj0;
si0=l8;
si1=-1U;
si0+=si1;
si1=536870911U;
si0&=si1;
si1=1U;
si0+=si1;
l15=si0;
si0=0U;
l5=si0;
si0=l4;
l11=si0;
L130:;
{
si0=l11;
sj0=i64_load(&i->m0,(U64)si0);
sj1=0ULL;
si0=sj0 != sj1;
if(si0){
goto L129;
}
si0=l5;
si1=1U;
si0+=si1;
l5=si0;
si0=l11;
si1=8U;
si0+=si1;
l11=si0;
si0=l9;
si1=-8U;
si0+=si1;
l9=si0;
if(si0){
goto L130;
}
}
si0=l15;
l5=si0;
L129:;
si0=l5;
si1=l8;
si0=si0 == si1;
if(si0){
goto L131;
}
si0=l5;
si1=l8;
si0=si0 >= si1;
if(si0){
goto L62;
}
si0=l4;
si1=l5;
si2=3U;
si1<<=(si2&31);
l9=si1;
si0+=si1;
l11=si0;
sj1=0ULL;
si2=l11;
sj2=i64_load(&i->m0,(U64)si2);
sj1-=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=1U;
si0+=si1;
l11=si0;
si1=l8;
si0=si0 == si1;
if(si0){
goto L131;
}
si0=l23;
si1=3U;
si0<<=(si1&31);
si1=l9;
si0-=si1;
si1=-8U;
si0+=si1;
l9=si0;
si0=l4;
si1=l11;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l11=si0;
L132:;
{
si0=l11;
si1=l11;
sj1=i64_load(&i->m0,(U64)si1);
sj2=-1ULL;
sj1^=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l11;
si1=8U;
si0+=si1;
l11=si0;
si0=l9;
si1=-8U;
si0+=si1;
l9=si0;
if(si0){
goto L132;
}
}
L131:;
si0=l10;
si1=l8;
i32_store(&i->m0,(U64)si0,si1);
si0=l10;
si1=l12;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l12;
si1=l8;
si0=si0 != si1;
if(si0){
goto L61;
}
si0=l23;
si1=l8;
si0=si0 < si1;
if(si0){
goto L60;
}
si0=0U;
l15=si0;
si0=l23;
l16=si0;
si0=l4;
l11=si0;
si0=l22;
l9=si0;
si0=l6;
l12=si0;
L133:;
{
si0=l11;
sj0=i64_load(&i->m0,(U64)si0);
l13=sj0;
si1=l9;
sj1=i64_load(&i->m0,(U64)si1);
sj0+=sj1;
l14=sj0;
sj1=l13;
si0=sj0 < sj1;
l7=si0;
si0=l15;
si1=255U;
si0&=si1;
if(si0){
goto L135;
}
si0=l7;
l15=si0;
goto L134;
L135:;
si0=l7;
sj1=l14;
sj2=1ULL;
sj1+=sj2;
l14=sj1;
si1=!(sj1);
si0|=si1;
l15=si0;
L134:;
si0=l12;
sj1=l14;
i64_store(&i->m0,(U64)si0,sj1);
si0=l11;
si1=8U;
si0+=si1;
l11=si0;
si0=l9;
si1=8U;
si0+=si1;
l9=si0;
si0=l12;
si1=8U;
si0+=si1;
l12=si0;
si0=l16;
si1=-1U;
si0+=si1;
l16=si0;
if(si0){
goto L133;
}
}
si0=l24;
si1=l8;
si0=si0 < si1;
if(si0){
goto L138;
}
si0=l23;
si1=1U;
si0&=si1;
l24=si0;
si0=l23;
si1=1U;
si0=si0 != si1;
if(si0){
goto L137;
}
si0=0U;
l16=si0;
si0=0U;
l11=si0;
goto L136;
L138:;
si0=1202809U;
si1=34U;
si2=1203412U;
f604(i,si0,si1,si2);
UNREACHABLE;
L137:;
si0=0U;
l7=si0;
si0=0U;
si1=l23;
si2=-2U;
si1&=si2;
si0-=si1;
l23=si0;
si0=l22;
l11=si0;
si0=l4;
l9=si0;
si0=l21;
l12=si0;
si0=0U;
l16=si0;
L139:;
{
si0=l12;
si1=l9;
sj1=i64_load(&i->m0,(U64)si1);
l14=sj1;
si2=l16;
sj2=(U64)(si2);
sj3=1ULL;
sj2&=sj3;
sj1-=sj2;
si2=l11;
sj2=i64_load(&i->m0,(U64)si2);
l13=sj2;
sj1-=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l12;
si1=8U;
si0+=si1;
si1=l9;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
l17=sj1;
sj2=l14;
sj3=l13;
si2=sj2 <= sj3;
sj3=l14;
sj4=l13;
si3=sj3 < sj4;
si4=l16;
si5=1U;
si4&=si5;
si2=si4?si2:si3;
l16=si2;
sj2=(U64)(si2);
sj1-=sj2;
si2=l11;
si3=8U;
si2+=si3;
sj2=i64_load(&i->m0,(U64)si2);
l14=sj2;
sj1-=sj2;
i64_store(&i->m0,(U64)si0,sj1);
sj0=l17;
sj1=l14;
si0=sj0 <= sj1;
sj1=l17;
sj2=l14;
si1=sj1 < sj2;
si2=l16;
si0=si2?si0:si1;
l16=si0;
si0=l11;
si1=16U;
si0+=si1;
l11=si0;
si0=l9;
si1=16U;
si0+=si1;
l9=si0;
si0=l12;
si1=16U;
si0+=si1;
l12=si0;
si0=l23;
si1=l7;
si2=-2U;
si1+=si2;
l7=si1;
si0=si0 != si1;
if(si0){
goto L139;
}
}
si0=0U;
si1=l7;
si0-=si1;
l11=si0;
L136:;
si0=l15;
sj0=(U64)(si0);
l14=sj0;
si0=l24;
si0=!(si0);
if(si0){
goto L140;
}
si0=l21;
si1=l11;
si2=3U;
si1<<=(si2&31);
l11=si1;
si0+=si1;
si1=l4;
si2=l11;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
l13=sj1;
si2=l16;
sj2=(U64)(si2);
sj1-=sj2;
si2=l22;
si3=l11;
si2+=si3;
sj2=i64_load(&i->m0,(U64)si2);
l17=sj2;
sj1-=sj2;
i64_store(&i->m0,(U64)si0,sj1);
sj0=l13;
sj1=l17;
si0=sj0 <= sj1;
sj1=l13;
sj2=l17;
si1=sj1 < sj2;
si2=l16;
si0=si2?si0:si1;
l16=si0;
L140:;
si0=l18;
si1=l26;
sj1=i64_load(&i->m0,(U64)si1);
l13=sj1;
sj2=l14;
sj1+=sj2;
l14=sj1;
i64_store(&i->m0,(U64)si0,sj1);
si0=l19;
sj1=0ULL;
sj2=l13;
si3=l16;
sj3=(U64)(si3);
sj4=1ULL;
sj3&=sj4;
sj2+=sj3;
sj1-=sj2;
l13=sj1;
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=l8;
si0=si0 == si1;
if(si0){
goto L5;
}
si0=l18;
sj1=l14;
sj2=-1ULL;
sj1+=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l19;
sj1=l13;
sj2=-1ULL;
sj1+=sj2;
i64_store(&i->m0,(U64)si0,sj1);
goto L5;
L118:;
si0=l5;
si0=!(si0);
if(si0){
goto L6;
}
si0=l7;
si0=!(si0);
if(si0){
goto L59;
}
si0=l1;
si0=!(si0);
if(si0){
goto L58;
}
si0=l3;
si0=!(si0);
if(si0){
goto L57;
}
si0=l5;
si1=-1U;
si0+=si1;
l12=si0;
si1=l8;
si0=si0 < si1;
if(si0){
goto L56;
}
si0=l12;
si1=l8;
si0-=si1;
l28=si0;
si1=l11;
si2=l9;
si1-=si2;
l18=si1;
si0=si0 < si1;
if(si0){
goto L55;
}
si0=l7;
si1=-1U;
si0+=si1;
l15=si0;
si1=l9;
si2=l8;
si1-=si2;
l25=si1;
si0=si0 < si1;
if(si0){
goto L54;
}
si0=l15;
si1=l25;
si0-=si1;
l16=si0;
si1=l8;
si0=si0 < si1;
if(si0){
goto L53;
}
si0=l11;
si1=l8;
si0-=si1;
l26=si0;
si0=l11;
si1=l8;
si0=si0 < si1;
if(si0){
goto L52;
}
si0=l3;
si1=-1U;
si0+=si1;
l29=si0;
si1=l26;
si0=si0 < si1;
if(si0){
goto L51;
}
si0=l4;
si1=l12;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l30=si0;
si0=l6;
si1=l15;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l31=si0;
si0=l0;
si1=l11;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l21=si0;
si0=l2;
si1=l29;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l32=si0;
si0=l28;
si1=l18;
si0-=si1;
l33=si0;
si0=l4;
si1=l8;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l19=si0;
si1=l18;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l34=si0;
si0=l16;
si1=l8;
si0-=si1;
l35=si0;
si0=l6;
si1=l9;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l24=si0;
si0=l29;
si1=l26;
si0-=si1;
l22=si0;
si0=0U;
l7=si0;
si0=l8;
l5=si0;
si0=l6;
si1=l25;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l36=si0;
l12=si0;
si0=l4;
l15=si0;
si0=l0;
si1=l26;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l37=si0;
l16=si0;
L141:;
{
si0=l12;
sj0=i64_load(&i->m0,(U64)si0);
l13=sj0;
si1=l15;
sj1=i64_load(&i->m0,(U64)si1);
sj0+=sj1;
l14=sj0;
sj1=l13;
si0=sj0 < sj1;
l23=si0;
si0=l7;
si1=255U;
si0&=si1;
if(si0){
goto L143;
}
si0=l23;
l7=si0;
goto L142;
L143:;
si0=l23;
sj1=l14;
sj2=1ULL;
sj1+=sj2;
l14=sj1;
si1=!(sj1);
si0|=si1;
l7=si0;
L142:;
si0=l16;
sj1=l14;
i64_store(&i->m0,(U64)si0,sj1);
si0=l12;
si1=8U;
si0+=si1;
l12=si0;
si0=l15;
si1=8U;
si0+=si1;
l15=si0;
si0=l16;
si1=8U;
si0+=si1;
l16=si0;
si0=l5;
si1=-1U;
si0+=si1;
l5=si0;
if(si0){
goto L141;
}
}
si0=l22;
si1=l8;
si0=si0 < si1;
if(si0){
goto L146;
}
si0=l2;
si1=l26;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l38=si0;
si0=l8;
si1=1U;
si0&=si1;
l39=si0;
si0=l8;
si1=1U;
si0=si0 != si1;
if(si0){
goto L145;
}
si0=0U;
l5=si0;
si0=0U;
l12=si0;
goto L144;
L146:;
si0=1202809U;
si1=34U;
si2=1203412U;
f604(i,si0,si1,si2);
UNREACHABLE;
L145:;
si0=0U;
l23=si0;
si0=0U;
si1=l8;
si2=-2U;
si1&=si2;
si0-=si1;
l22=si0;
si0=l36;
l12=si0;
si0=l38;
l15=si0;
si0=l4;
l16=si0;
si0=0U;
l5=si0;
L147:;
{
si0=l15;
si1=l12;
sj1=i64_load(&i->m0,(U64)si1);
l14=sj1;
si2=l5;
sj2=(U64)(si2);
sj3=1ULL;
sj2&=sj3;
sj1-=sj2;
si2=l16;
sj2=i64_load(&i->m0,(U64)si2);
l13=sj2;
sj1-=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l15;
si1=8U;
si0+=si1;
si1=l12;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
l17=sj1;
sj2=l14;
sj3=l13;
si2=sj2 <= sj3;
sj3=l14;
sj4=l13;
si3=sj3 < sj4;
si4=l5;
si5=1U;
si4&=si5;
si2=si4?si2:si3;
l5=si2;
sj2=(U64)(si2);
sj1-=sj2;
si2=l16;
si3=8U;
si2+=si3;
sj2=i64_load(&i->m0,(U64)si2);
l14=sj2;
sj1-=sj2;
i64_store(&i->m0,(U64)si0,sj1);
sj0=l17;
sj1=l14;
si0=sj0 <= sj1;
sj1=l17;
sj2=l14;
si1=sj1 < sj2;
si2=l5;
si0=si2?si0:si1;
l5=si0;
si0=l12;
si1=16U;
si0+=si1;
l12=si0;
si0=l15;
si1=16U;
si0+=si1;
l15=si0;
si0=l16;
si1=16U;
si0+=si1;
l16=si0;
si0=l22;
si1=l23;
si2=-2U;
si1+=si2;
l23=si1;
si0=si0 != si1;
if(si0){
goto L147;
}
}
si0=0U;
si1=l23;
si0-=si1;
l12=si0;
L144:;
si0=l7;
sj0=(U64)(si0);
l14=sj0;
si0=l39;
si0=!(si0);
if(si0){
goto L148;
}
si0=l38;
si1=l12;
si2=3U;
si1<<=(si2&31);
l12=si1;
si0+=si1;
si1=l36;
si2=l12;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
l13=sj1;
si2=l5;
sj2=(U64)(si2);
sj1-=sj2;
si2=l4;
si3=l12;
si2+=si3;
sj2=i64_load(&i->m0,(U64)si2);
l17=sj2;
sj1-=sj2;
i64_store(&i->m0,(U64)si0,sj1);
sj0=l13;
sj1=l17;
si0=sj0 <= sj1;
sj1=l13;
sj2=l17;
si1=sj1 < sj2;
si2=l5;
si0=si2?si0:si1;
l5=si0;
L148:;
sj0=0ULL;
sj1=l14;
sj0-=sj1;
l14=sj0;
si0=0U;
l15=si0;
si0=0U;
si1=l8;
si2=3U;
si1<<=(si2&31);
si0-=si1;
l12=si0;
si0=l8;
si1=-1U;
si0+=si1;
si1=536870911U;
si0&=si1;
si1=1U;
si0+=si1;
l16=si0;
L150:;
{
si0=l21;
si1=l12;
si0+=si1;
sj0=i64_load(&i->m0,(U64)si0);
sj1=0ULL;
si0=sj0 != sj1;
if(si0){
goto L149;
}
si0=l15;
si1=1U;
si0+=si1;
l15=si0;
si0=l12;
si1=8U;
si0+=si1;
l12=si0;
if(si0){
goto L150;
}
}
si0=l16;
l15=si0;
L149:;
si0=l15;
si1=l8;
si0=si0 == si1;
if(si0){
goto L151;
}
si0=l15;
si1=l8;
si0=si0 >= si1;
if(si0){
goto L50;
}
si0=l37;
si1=l15;
si2=3U;
si1<<=(si2&31);
l16=si1;
si0+=si1;
l12=si0;
sj1=0ULL;
si2=l12;
sj2=i64_load(&i->m0,(U64)si2);
sj1-=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l15;
si1=1U;
si0+=si1;
si1=l8;
si0=si0 == si1;
if(si0){
goto L152;
}
si0=l16;
si1=l8;
si2=3U;
si1<<=(si2&31);
si0-=si1;
l12=si0;
si0=l0;
si1=l1;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l16=si0;
L153:;
{
si0=l16;
si1=l12;
si0+=si1;
l15=si0;
si1=l15;
sj1=i64_load(&i->m0,(U64)si1);
sj2=-1ULL;
sj1^=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l12;
si1=8U;
si0+=si1;
l12=si0;
si1=-8U;
si0=si0 != si1;
if(si0){
goto L153;
}
}
L152:;
sj0=-2ULL;
sj1=-1ULL;
si2=l7;
sj0=si2?sj0:sj1;
l14=sj0;
L151:;
si0=l21;
sj1=l14;
i64_store(&i->m0,(U64)si0,sj1);
si0=l32;
sj1=0ULL;
si2=l5;
sj2=(U64)(si2);
sj3=1ULL;
sj2&=sj3;
sj1-=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=0U;
l32=si0;
si0=l9;
si1=l8;
si0=si0 == si1;
l7=si0;
if(si0){
goto L154;
}
si0=l9;
si1=3U;
si0<<=(si1&31);
si1=l8;
si2=3U;
si1<<=(si2&31);
si0-=si1;
l16=si0;
si0=l25;
si1=-1U;
si0+=si1;
si1=536870911U;
si0&=si1;
si1=1U;
si0+=si1;
l5=si0;
si0=0U;
l15=si0;
si0=l6;
l12=si0;
L156:;
{
si0=l12;
sj0=i64_load(&i->m0,(U64)si0);
sj1=0ULL;
si0=sj0 != sj1;
if(si0){
goto L155;
}
si0=l15;
si1=1U;
si0+=si1;
l15=si0;
si0=l12;
si1=8U;
si0+=si1;
l12=si0;
si0=l16;
si1=-8U;
si0+=si1;
l16=si0;
if(si0){
goto L156;
}
}
si0=l5;
l15=si0;
L155:;
si0=0U;
l32=si0;
si0=l15;
si1=l25;
si0=si0 == si1;
if(si0){
goto L154;
}
si0=l15;
si1=l25;
si0=si0 >= si1;
if(si0){
goto L49;
}
si0=l6;
si1=l15;
si2=3U;
si1<<=(si2&31);
l16=si1;
si0+=si1;
l12=si0;
sj1=0ULL;
si2=l12;
sj2=i64_load(&i->m0,(U64)si2);
sj1-=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=1U;
l32=si0;
si0=l15;
si1=1U;
si0+=si1;
l12=si0;
si1=l25;
si0=si0 == si1;
if(si0){
goto L154;
}
si0=l9;
si1=3U;
si0<<=(si1&31);
si1=l16;
si0-=si1;
si1=l8;
si2=3U;
si1<<=(si2&31);
si0-=si1;
si1=-8U;
si0+=si1;
l15=si0;
si0=l6;
si1=l12;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l12=si0;
L157:;
{
si0=l12;
si1=l12;
sj1=i64_load(&i->m0,(U64)si1);
sj2=-1ULL;
sj1^=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l12;
si1=8U;
si0+=si1;
l12=si0;
si0=l15;
si1=-8U;
si0+=si1;
l15=si0;
if(si0){
goto L157;
}
}
L154:;
si0=l11;
si1=l9;
si0=si0 < si1;
if(si0){
goto L48;
}
si0=l29;
si1=l18;
si0=si0 < si1;
if(si0){
goto L47;
}
si0=l10;
si1=l33;
i32_store(&i->m0,(U64)si0,si1);
si0=l10;
si1=l25;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l33;
si1=l25;
si0=si0 != si1;
if(si0){
goto L46;
}
si0=l0;
si1=l18;
si2=3U;
si1<<=(si2&31);
l12=si1;
si0+=si1;
l21=si0;
si0=l2;
si1=l12;
si0+=si1;
l22=si0;
sj0=0ULL;
l13=sj0;
si0=l28;
si1=l18;
si0=si0 == si1;
if(si0){
goto L158;
}
si0=l8;
si1=l9;
si0=si0 > si1;
if(si0){
goto L45;
}
si0=l29;
si1=l18;
si0-=si1;
l4=si0;
si0=l7;
if(si0){
goto L163;
}
si0=0U;
l7=si0;
si0=l25;
l5=si0;
si0=l34;
l12=si0;
si0=l6;
l15=si0;
si0=l21;
l16=si0;
L164:;
{
si0=l12;
sj0=i64_load(&i->m0,(U64)si0);
l13=sj0;
si1=l15;
sj1=i64_load(&i->m0,(U64)si1);
sj0+=sj1;
l14=sj0;
sj1=l13;
si0=sj0 < sj1;
l23=si0;
si0=l7;
si1=255U;
si0&=si1;
if(si0){
goto L166;
}
si0=l23;
l7=si0;
goto L165;
L166:;
si0=l23;
sj1=l14;
sj2=1ULL;
sj1+=sj2;
l14=sj1;
si1=!(sj1);
si0|=si1;
l7=si0;
L165:;
si0=l16;
sj1=l14;
i64_store(&i->m0,(U64)si0,sj1);
si0=l12;
si1=8U;
si0+=si1;
l12=si0;
si0=l15;
si1=8U;
si0+=si1;
l15=si0;
si0=l16;
si1=8U;
si0+=si1;
l16=si0;
si0=l5;
si1=-1U;
si0+=si1;
l5=si0;
if(si0){
goto L164;
}
}
si0=l25;
si1=l4;
si0=si0 > si1;
if(si0){
goto L162;
}
si0=0U;
l5=si0;
si0=l25;
si1=1U;
si0&=si1;
l29=si0;
si0=l8;
si1=-1U;
si0^=si1;
si1=0U;
si2=l9;
si1-=si2;
si0=si0 != si1;
if(si0){
goto L161;
}
si0=0U;
l12=si0;
goto L160;
L163:;
si0=l25;
si1=l4;
si0=si0 > si1;
if(si0){
goto L162;
}
si0=0U;
l5=si0;
sj0=0ULL;
l14=sj0;
goto L159;
L162:;
si0=1202809U;
si1=34U;
si2=1203412U;
f604(i,si0,si1,si2);
UNREACHABLE;
L161:;
si0=0U;
l23=si0;
si0=0U;
si1=l25;
si2=-2U;
si1&=si2;
si0-=si1;
l4=si0;
si0=l34;
l12=si0;
si0=l22;
l15=si0;
si0=l6;
l16=si0;
si0=0U;
l5=si0;
L167:;
{
si0=l15;
si1=l12;
sj1=i64_load(&i->m0,(U64)si1);
l14=sj1;
si2=l5;
sj2=(U64)(si2);
sj3=1ULL;
sj2&=sj3;
sj1-=sj2;
si2=l16;
sj2=i64_load(&i->m0,(U64)si2);
l13=sj2;
sj1-=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l15;
si1=8U;
si0+=si1;
si1=l12;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
l17=sj1;
sj2=l14;
sj3=l13;
si2=sj2 <= sj3;
sj3=l14;
sj4=l13;
si3=sj3 < sj4;
si4=l5;
si5=1U;
si4&=si5;
si2=si4?si2:si3;
l5=si2;
sj2=(U64)(si2);
sj1-=sj2;
si2=l16;
si3=8U;
si2+=si3;
sj2=i64_load(&i->m0,(U64)si2);
l14=sj2;
sj1-=sj2;
i64_store(&i->m0,(U64)si0,sj1);
sj0=l17;
sj1=l14;
si0=sj0 <= sj1;
sj1=l17;
sj2=l14;
si1=sj1 < sj2;
si2=l5;
si0=si2?si0:si1;
l5=si0;
si0=l12;
si1=16U;
si0+=si1;
l12=si0;
si0=l15;
si1=16U;
si0+=si1;
l15=si0;
si0=l16;
si1=16U;
si0+=si1;
l16=si0;
si0=l4;
si1=l23;
si2=-2U;
si1+=si2;
l23=si1;
si0=si0 != si1;
if(si0){
goto L167;
}
}
si0=0U;
si1=l23;
si0-=si1;
l12=si0;
L160:;
sj0=2ULL;
sj1=0ULL;
si2=l7;
sj0=si2?sj0:sj1;
l14=sj0;
si0=l29;
si0=!(si0);
if(si0){
goto L159;
}
si0=l22;
si1=l12;
si2=3U;
si1<<=(si2&31);
l12=si1;
si0+=si1;
si1=l34;
si2=l12;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
l13=sj1;
si2=l5;
sj2=(U64)(si2);
sj1-=sj2;
si2=l6;
si3=l12;
si2+=si3;
sj2=i64_load(&i->m0,(U64)si2);
l17=sj2;
sj1-=sj2;
i64_store(&i->m0,(U64)si0,sj1);
sj0=l13;
sj1=l17;
si0=sj0 <= sj1;
sj1=l13;
sj2=l17;
si1=sj1 < sj2;
si2=l5;
si0=si2?si0:si1;
l5=si0;
L159:;
sj0=l14;
si1=l5;
sj1=(U64)(si1);
sj2=1ULL;
sj1&=sj2;
sj0|=sj1;
l13=sj0;
L158:;
si0=l26;
si1=l1;
si0=si0 > si1;
if(si0){
goto L44;
}
si0=l26;
si1=l1;
si0=si0 == si1;
if(si0){
goto L43;
}
si0=l37;
sj0=i64_load(&i->m0,(U64)si0);
l14=sj0;
si1=l30;
sj1=i64_load(&i->m0,(U64)si1);
l20=sj1;
si2=l32;
sj2=(U64)(si2);
l27=sj2;
sj1-=sj2;
sj2=l13;
sj3=1ULL;
sj2>>=(sj3&63);
sj1+=sj2;
l40=sj1;
sj0+=sj1;
l17=sj0;
sj1=l14;
sj0^=sj1;
sj1=-1ULL;
si0=(U64)((I64)sj0>(I64)sj1);
if(si0){
goto L42;
}
si0=l0;
si1=l1;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l16=si0;
sj0=l40;
sj1=-1ULL;
si0=(U64)((I64)sj0>(I64)sj1);
if(si0){
goto L168;
}
si0=l37;
sj1=l17;
i64_store(&i->m0,(U64)si0,sj1);
sj0=l14;
sj1=0ULL;
sj2=l40;
sj1-=sj2;
si0=sj0 >= sj1;
if(si0){
goto L7;
}
si0=0U;
si1=l8;
si2=3U;
si1<<=(si2&31);
si0-=si1;
l12=si0;
L169:;
{
si0=l12;
si0=!(si0);
if(si0){
goto L7;
}
si0=l16;
si1=l12;
si0+=si1;
l15=si0;
si1=l15;
sj1=i64_load(&i->m0,(U64)si1);
l14=sj1;
sj2=-1ULL;
sj1+=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l12;
si1=8U;
si0+=si1;
l12=si0;
sj0=l14;
si0=!(sj0);
if(si0){
goto L169;
}
goto L7;
}
L168:;
si0=l37;
sj1=l17;
i64_store(&i->m0,(U64)si0,sj1);
sj0=l17;
sj1=l14;
si0=sj0 >= sj1;
if(si0){
goto L7;
}
si0=0U;
si1=l8;
si2=3U;
si1<<=(si2&31);
si0-=si1;
l12=si0;
L170:;
{
si0=l12;
si0=!(si0);
if(si0){
goto L7;
}
si0=l16;
si1=l12;
si0+=si1;
l15=si0;
si1=l15;
sj1=i64_load(&i->m0,(U64)si1);
sj2=1ULL;
sj1+=sj2;
l14=sj1;
i64_store(&i->m0,(U64)si0,sj1);
si0=l12;
si1=8U;
si0+=si1;
l12=si0;
sj0=l14;
si0=!(sj0);
if(si0){
goto L170;
}
goto L7;
}
L117:;
si0=l5;
si0=!(si0);
if(si0){
goto L8;
}
si0=l7;
si0=!(si0);
if(si0){
goto L41;
}
si0=l5;
si1=-1U;
si0+=si1;
l24=si0;
si1=l8;
si0=si0 < si1;
if(si0){
goto L40;
}
si0=l7;
si1=-1U;
si0+=si1;
l25=si0;
si1=l9;
si0=si0 < si1;
if(si0){
goto L39;
}
si0=l10;
si1=l24;
si2=l8;
si1-=si2;
l12=si1;
i32_store(&i->m0,(U64)si0,si1);
si0=l10;
si1=l25;
si2=l9;
si1-=si2;
l19=si1;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l12;
si1=l19;
si0=si0 != si1;
if(si0){
goto L38;
}
sj0=0ULL;
l14=sj0;
si0=l24;
si1=l8;
si0=si0 == si1;
if(si0){
goto L171;
}
si0=l19;
si1=l1;
si0=si0 > si1;
if(si0){
goto L37;
}
si0=l25;
si1=l9;
si0=si0 == si1;
if(si0){
goto L176;
}
si0=0U;
l5=si0;
si0=l25;
l23=si0;
si0=l4;
si1=l8;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l22=si0;
l12=si0;
si0=l6;
si1=l9;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l18=si0;
l15=si0;
si0=l0;
l16=si0;
L177:;
{
si0=l12;
sj0=i64_load(&i->m0,(U64)si0);
l13=sj0;
si1=l15;
sj1=i64_load(&i->m0,(U64)si1);
sj0+=sj1;
l14=sj0;
sj1=l13;
si0=sj0 < sj1;
l21=si0;
si0=l5;
si1=255U;
si0&=si1;
if(si0){
goto L179;
}
si0=l21;
l5=si0;
goto L178;
L179:;
si0=l21;
sj1=l14;
sj2=1ULL;
sj1+=sj2;
l14=sj1;
si1=!(sj1);
si0|=si1;
l5=si0;
L178:;
si0=l16;
sj1=l14;
i64_store(&i->m0,(U64)si0,sj1);
si0=l12;
si1=8U;
si0+=si1;
l12=si0;
si0=l15;
si1=8U;
si0+=si1;
l15=si0;
si0=l16;
si1=8U;
si0+=si1;
l16=si0;
si0=l9;
si1=l23;
si2=-1U;
si1+=si2;
l23=si1;
si0=si0 != si1;
if(si0){
goto L177;
}
}
si0=l19;
si1=l3;
si0=si0 > si1;
if(si0){
goto L175;
}
si0=l19;
si1=1U;
si0&=si1;
l26=si0;
si0=l7;
si1=-2U;
si0+=si1;
si1=l9;
si0=si0 != si1;
if(si0){
goto L174;
}
si0=0U;
l15=si0;
si0=0U;
l16=si0;
goto L173;
L176:;
si0=l19;
si1=l3;
si0=si0 > si1;
if(si0){
goto L175;
}
si0=0U;
l15=si0;
sj0=0ULL;
l14=sj0;
goto L172;
L175:;
si0=1202809U;
si1=34U;
si2=1203412U;
f604(i,si0,si1,si2);
UNREACHABLE;
L174:;
si0=l19;
si1=-2U;
si0&=si1;
l19=si0;
si0=0U;
l12=si0;
si0=0U;
l15=si0;
si0=0U;
l16=si0;
L180:;
{
si0=l2;
si1=l12;
si0+=si1;
l7=si0;
si1=l22;
si2=l12;
si1+=si2;
l23=si1;
sj1=i64_load(&i->m0,(U64)si1);
l14=sj1;
si2=l15;
sj2=(U64)(si2);
sj3=1ULL;
sj2&=sj3;
sj1-=sj2;
si2=l18;
si3=l12;
si2+=si3;
l21=si2;
sj2=i64_load(&i->m0,(U64)si2);
l13=sj2;
sj1-=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l7;
si1=8U;
si0+=si1;
si1=l23;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
l17=sj1;
sj2=l14;
sj3=l13;
si2=sj2 <= sj3;
sj3=l14;
sj4=l13;
si3=sj3 < sj4;
si4=l15;
si5=1U;
si4&=si5;
si2=si4?si2:si3;
l15=si2;
sj2=(U64)(si2);
sj1-=sj2;
si2=l21;
si3=8U;
si2+=si3;
sj2=i64_load(&i->m0,(U64)si2);
l14=sj2;
sj1-=sj2;
i64_store(&i->m0,(U64)si0,sj1);
sj0=l17;
sj1=l14;
si0=sj0 <= sj1;
sj1=l17;
sj2=l14;
si1=sj1 < sj2;
si2=l15;
si0=si2?si0:si1;
l15=si0;
si0=l12;
si1=16U;
si0+=si1;
l12=si0;
si0=l19;
si1=l16;
si2=2U;
si1+=si2;
l16=si1;
si0=si0 != si1;
if(si0){
goto L180;
}
}
L173:;
sj0=2ULL;
sj1=0ULL;
si2=l5;
sj0=si2?sj0:sj1;
l14=sj0;
si0=l26;
si0=!(si0);
if(si0){
goto L172;
}
si0=l2;
si1=l16;
si2=3U;
si1<<=(si2&31);
l12=si1;
si0+=si1;
si1=l22;
si2=l12;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
l13=sj1;
si2=l15;
sj2=(U64)(si2);
sj1-=sj2;
si2=l18;
si3=l12;
si2+=si3;
sj2=i64_load(&i->m0,(U64)si2);
l17=sj2;
sj1-=sj2;
i64_store(&i->m0,(U64)si0,sj1);
sj0=l13;
sj1=l17;
si0=sj0 <= sj1;
sj1=l13;
sj2=l17;
si1=sj1 < sj2;
si2=l15;
si0=si2?si0:si1;
l15=si0;
L172:;
sj0=l14;
si1=l15;
sj1=(U64)(si1);
sj2=1ULL;
sj1&=sj2;
sj0|=sj1;
l14=sj0;
L171:;
si0=l11;
si1=l8;
si0-=si1;
l11=si0;
si1=l1;
si0=si0 > si1;
if(si0){
goto L36;
}
si0=l11;
si1=l1;
si0=si0 == si1;
if(si0){
goto L35;
}
si0=l11;
si1=l3;
si0=si0 > si1;
if(si0){
goto L34;
}
si0=l11;
si1=l3;
si0=si0 == si1;
if(si0){
goto L33;
}
si0=l10;
si1=l9;
i32_store(&i->m0,(U64)si0,si1);
si0=l10;
si1=l8;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l8;
si1=l9;
si0=si0 != si1;
if(si0){
goto L32;
}
si0=l11;
si1=-1U;
si0^=si1;
l9=si0;
si1=l1;
si0+=si1;
l23=si0;
si1=l8;
si0=si0 < si1;
if(si0){
goto L31;
}
si0=l4;
si1=l24;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l19=si0;
si0=l6;
si1=l25;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l24=si0;
si0=l0;
si1=l11;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l21=si0;
si1=l23;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l5=si0;
si0=l2;
si1=l11;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l22=si0;
si1=l9;
si2=l3;
si1+=si2;
l18=si1;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l25=si0;
sj0=l14;
sj1=1ULL;
sj0&=sj1;
l20=sj0;
sj0=l14;
sj1=1ULL;
sj0>>=(sj1&63);
l27=sj0;
si0=0U;
l15=si0;
si0=l23;
l16=si0;
si0=l6;
l11=si0;
si0=l4;
l9=si0;
si0=l21;
l12=si0;
L181:;
{
si0=l11;
sj0=i64_load(&i->m0,(U64)si0);
l13=sj0;
si1=l9;
sj1=i64_load(&i->m0,(U64)si1);
sj0+=sj1;
l14=sj0;
sj1=l13;
si0=sj0 < sj1;
l7=si0;
si0=l15;
si1=255U;
si0&=si1;
if(si0){
goto L183;
}
si0=l7;
l15=si0;
goto L182;
L183:;
si0=l7;
sj1=l14;
sj2=1ULL;
sj1+=sj2;
l14=sj1;
si1=!(sj1);
si0|=si1;
l15=si0;
L182:;
si0=l12;
sj1=l14;
i64_store(&i->m0,(U64)si0,sj1);
si0=l11;
si1=8U;
si0+=si1;
l11=si0;
si0=l9;
si1=8U;
si0+=si1;
l9=si0;
si0=l12;
si1=8U;
si0+=si1;
l12=si0;
si0=l16;
si1=-1U;
si0+=si1;
l16=si0;
if(si0){
goto L181;
}
}
si0=l18;
si1=l8;
si0=si0 < si1;
if(si0){
goto L186;
}
si0=l15;
sj0=(U64)(si0);
l40=sj0;
si0=l23;
si1=1U;
si0&=si1;
l18=si0;
si0=l23;
si1=1U;
si0=si0 != si1;
if(si0){
goto L185;
}
si0=0U;
l15=si0;
si0=0U;
l11=si0;
goto L184;
L186:;
si0=1202809U;
si1=34U;
si2=1203412U;
f604(i,si0,si1,si2);
UNREACHABLE;
L185:;
si0=0U;
l16=si0;
si0=0U;
si1=l23;
si2=-2U;
si1&=si2;
si0-=si1;
l7=si0;
si0=l22;
l11=si0;
si0=l6;
l9=si0;
si0=l4;
l12=si0;
si0=0U;
l15=si0;
L187:;
{
si0=l11;
si1=l9;
sj1=i64_load(&i->m0,(U64)si1);
l14=sj1;
si2=l15;
sj2=(U64)(si2);
sj3=1ULL;
sj2&=sj3;
sj1-=sj2;
si2=l12;
sj2=i64_load(&i->m0,(U64)si2);
l13=sj2;
sj1-=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l11;
si1=8U;
si0+=si1;
si1=l9;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
l17=sj1;
sj2=l14;
sj3=l13;
si2=sj2 <= sj3;
sj3=l14;
sj4=l13;
si3=sj3 < sj4;
si4=l15;
si5=1U;
si4&=si5;
si2=si4?si2:si3;
l15=si2;
sj2=(U64)(si2);
sj1-=sj2;
si2=l12;
si3=8U;
si2+=si3;
sj2=i64_load(&i->m0,(U64)si2);
l14=sj2;
sj1-=sj2;
i64_store(&i->m0,(U64)si0,sj1);
sj0=l17;
sj1=l14;
si0=sj0 <= sj1;
sj1=l17;
sj2=l14;
si1=sj1 < sj2;
si2=l15;
si0=si2?si0:si1;
l15=si0;
si0=l11;
si1=16U;
si0+=si1;
l11=si0;
si0=l9;
si1=16U;
si0+=si1;
l9=si0;
si0=l12;
si1=16U;
si0+=si1;
l12=si0;
si0=l7;
si1=l16;
si2=-2U;
si1+=si2;
l16=si1;
si0=si0 != si1;
if(si0){
goto L187;
}
}
si0=0U;
si1=l16;
si0-=si1;
l11=si0;
L184:;
sj0=0ULL;
sj1=l40;
sj0-=sj1;
l14=sj0;
si0=l18;
si0=!(si0);
if(si0){
goto L188;
}
si0=l22;
si1=l11;
si2=3U;
si1<<=(si2&31);
l11=si1;
si0+=si1;
si1=l6;
si2=l11;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
l13=sj1;
si2=l15;
sj2=(U64)(si2);
sj1-=sj2;
si2=l4;
si3=l11;
si2+=si3;
sj2=i64_load(&i->m0,(U64)si2);
l17=sj2;
sj1-=sj2;
i64_store(&i->m0,(U64)si0,sj1);
sj0=l13;
sj1=l17;
si0=sj0 <= sj1;
sj1=l13;
sj2=l17;
si1=sj1 < sj2;
si2=l15;
si0=si2?si0:si1;
l15=si0;
L188:;
si0=l5;
sj1=l14;
i64_store(&i->m0,(U64)si0,sj1);
si0=l25;
sj1=0ULL;
si2=l15;
sj2=(U64)(si2);
sj3=1ULL;
sj2&=sj3;
sj1-=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=0U;
l9=si0;
si0=0U;
si1=l23;
si2=3U;
si1<<=(si2&31);
si0-=si1;
l11=si0;
si0=l23;
si1=-1U;
si0+=si1;
si1=536870911U;
si0&=si1;
si1=1U;
si0+=si1;
l12=si0;
L190:;
{
si0=l5;
si1=l11;
si0+=si1;
sj0=i64_load(&i->m0,(U64)si0);
sj1=0ULL;
si0=sj0 != sj1;
if(si0){
goto L189;
}
si0=l9;
si1=1U;
si0+=si1;
l9=si0;
si0=l11;
si1=8U;
si0+=si1;
l11=si0;
if(si0){
goto L190;
}
}
si0=l12;
l9=si0;
L189:;
si0=l9;
si1=l23;
si0=si0 == si1;
if(si0){
goto L191;
}
si0=l9;
si1=l23;
si0=si0 >= si1;
if(si0){
goto L30;
}
si0=l21;
si1=l9;
si2=3U;
si1<<=(si2&31);
l12=si1;
si0+=si1;
l11=si0;
sj1=0ULL;
si2=l11;
sj2=i64_load(&i->m0,(U64)si2);
sj1-=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l9;
si1=1U;
si0+=si1;
si1=l23;
si0=si0 == si1;
if(si0){
goto L192;
}
si0=l12;
si1=l23;
si2=3U;
si1<<=(si2&31);
si0-=si1;
l11=si0;
si0=l0;
si1=l1;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l12=si0;
L193:;
{
si0=l12;
si1=l11;
si0+=si1;
l9=si0;
si1=l9;
sj1=i64_load(&i->m0,(U64)si1);
sj2=-1ULL;
sj1^=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l11;
si1=8U;
si0+=si1;
l11=si0;
si1=-8U;
si0=si0 != si1;
if(si0){
goto L193;
}
}
L192:;
si0=l5;
si1=l5;
sj1=i64_load(&i->m0,(U64)si1);
sj2=-1ULL;
sj1+=sj2;
i64_store(&i->m0,(U64)si0,sj1);
L191:;
si0=l21;
sj0=i64_load(&i->m0,(U64)si0);
l14=sj0;
si1=l19;
sj1=i64_load(&i->m0,(U64)si1);
l17=sj1;
sj2=l27;
sj1+=sj2;
si2=l24;
sj2=i64_load(&i->m0,(U64)si2);
l27=sj2;
sj1+=sj2;
l40=sj1;
sj0+=sj1;
l13=sj0;
sj1=l14;
sj0^=sj1;
sj1=-1ULL;
si0=(U64)((I64)sj0>(I64)sj1);
if(si0){
goto L29;
}
sj0=l40;
sj1=-1ULL;
si0=(U64)((I64)sj0>(I64)sj1);
if(si0){
goto L194;
}
si0=l21;
sj1=l13;
i64_store(&i->m0,(U64)si0,sj1);
sj0=l14;
sj1=0ULL;
sj2=l40;
sj1-=sj2;
si0=sj0 >= sj1;
if(si0){
goto L9;
}
si0=0U;
si1=l23;
si2=3U;
si1<<=(si2&31);
si0-=si1;
l11=si0;
si0=l0;
si1=l1;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l12=si0;
L195:;
{
si0=l11;
si1=-8U;
si0=si0 == si1;
if(si0){
goto L9;
}
si0=l12;
si1=l11;
si0+=si1;
l9=si0;
si1=l9;
sj1=i64_load(&i->m0,(U64)si1);
l14=sj1;
sj2=-1ULL;
sj1+=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l11;
si1=8U;
si0+=si1;
l11=si0;
sj0=l14;
si0=!(sj0);
if(si0){
goto L195;
}
goto L9;
}
L194:;
si0=l21;
sj1=l13;
i64_store(&i->m0,(U64)si0,sj1);
sj0=l13;
sj1=l14;
si0=sj0 >= sj1;
if(si0){
goto L9;
}
si0=0U;
si1=l23;
si2=3U;
si1<<=(si2&31);
si0-=si1;
l11=si0;
si0=l0;
si1=l1;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l12=si0;
L196:;
{
si0=l11;
si1=-8U;
si0=si0 == si1;
if(si0){
goto L9;
}
si0=l12;
si1=l11;
si0+=si1;
l9=si0;
si1=l9;
sj1=i64_load(&i->m0,(U64)si1);
sj2=1ULL;
sj1+=sj2;
l14=sj1;
i64_store(&i->m0,(U64)si0,sj1);
si0=l11;
si1=8U;
si0+=si1;
l11=si0;
sj0=l14;
si0=!(sj0);
if(si0){
goto L196;
}
goto L9;
}
L116:;
si0=l5;
si0=!(si0);
if(si0){
goto L10;
}
si0=l7;
si0=!(si0);
if(si0){
goto L28;
}
si0=l5;
si1=-1U;
si0+=si1;
l15=si0;
si1=l8;
si2=l9;
si1-=si2;
l19=si1;
si0=si0 < si1;
if(si0){
goto L27;
}
si0=l15;
si1=l19;
si0-=si1;
l28=si0;
si1=l9;
si0=si0 < si1;
if(si0){
goto L26;
}
si0=l7;
si1=-1U;
si0+=si1;
l16=si0;
si1=l9;
si0=si0 < si1;
if(si0){
goto L25;
}
si0=l16;
si1=l9;
si0-=si1;
l7=si0;
si1=l11;
si2=l8;
si1-=si2;
l18=si1;
si0=si0 < si1;
if(si0){
goto L24;
}
si0=l1;
si1=l11;
si2=l9;
si1-=si2;
l12=si1;
si0=si0 < si1;
if(si0){
goto L23;
}
si0=l1;
si1=l12;
si0=si0 == si1;
if(si0){
goto L22;
}
si0=l12;
si1=l3;
si0=si0 > si1;
if(si0){
goto L21;
}
si0=l12;
si1=l3;
si0=si0 == si1;
if(si0){
goto L20;
}
si0=l1;
si1=l12;
si0-=si1;
l37=si0;
si1=-1U;
si0+=si1;
l24=si0;
si1=l9;
si0=si0 < si1;
if(si0){
goto L19;
}
si0=l4;
si1=l15;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l34=si0;
si0=l6;
si1=l16;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l30=si0;
si0=l28;
si1=l9;
si0-=si1;
l35=si0;
si0=l4;
si1=l8;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l25=si0;
si0=l7;
si1=l18;
si0-=si1;
l33=si0;
si0=l6;
si1=l9;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l26=si0;
si1=l18;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l31=si0;
si0=l0;
si1=l12;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l29=si0;
si1=l24;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l22=si0;
si0=l2;
si1=l12;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l38=si0;
si1=l12;
si2=-1U;
si1^=si2;
si2=l3;
si1+=si2;
l21=si1;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l32=si0;
si0=0U;
l7=si0;
si0=l24;
l5=si0;
si0=l6;
l12=si0;
si0=l4;
si1=l19;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l36=si0;
l15=si0;
si0=l29;
l16=si0;
L197:;
{
si0=l12;
sj0=i64_load(&i->m0,(U64)si0);
l13=sj0;
si1=l15;
sj1=i64_load(&i->m0,(U64)si1);
sj0+=sj1;
l14=sj0;
sj1=l13;
si0=sj0 < sj1;
l23=si0;
si0=l7;
si1=255U;
si0&=si1;
if(si0){
goto L199;
}
si0=l23;
l7=si0;
goto L198;
L199:;
si0=l23;
sj1=l14;
sj2=1ULL;
sj1+=sj2;
l14=sj1;
si1=!(sj1);
si0|=si1;
l7=si0;
L198:;
si0=l16;
sj1=l14;
i64_store(&i->m0,(U64)si0,sj1);
si0=l12;
si1=8U;
si0+=si1;
l12=si0;
si0=l15;
si1=8U;
si0+=si1;
l15=si0;
si0=l16;
si1=8U;
si0+=si1;
l16=si0;
si0=l5;
si1=-1U;
si0+=si1;
l5=si0;
if(si0){
goto L197;
}
}
si0=l21;
si1=l9;
si0=si0 < si1;
if(si0){
goto L202;
}
si0=l24;
si1=1U;
si0&=si1;
l39=si0;
si0=l37;
si1=2U;
si0=si0 != si1;
if(si0){
goto L201;
}
si0=0U;
l5=si0;
si0=0U;
l12=si0;
goto L200;
L202:;
si0=1202809U;
si1=34U;
si2=1203412U;
f604(i,si0,si1,si2);
UNREACHABLE;
L201:;
si0=0U;
l23=si0;
si0=0U;
si1=l24;
si2=-2U;
si1&=si2;
si0-=si1;
l21=si0;
si0=l36;
l12=si0;
si0=l6;
l15=si0;
si0=l38;
l16=si0;
si0=0U;
l5=si0;
L203:;
{
si0=l16;
si1=l15;
sj1=i64_load(&i->m0,(U64)si1);
l14=sj1;
si2=l5;
sj2=(U64)(si2);
sj3=1ULL;
sj2&=sj3;
sj1-=sj2;
si2=l12;
sj2=i64_load(&i->m0,(U64)si2);
l13=sj2;
sj1-=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l16;
si1=8U;
si0+=si1;
si1=l15;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
l17=sj1;
sj2=l14;
sj3=l13;
si2=sj2 <= sj3;
sj3=l14;
sj4=l13;
si3=sj3 < sj4;
si4=l5;
si5=1U;
si4&=si5;
si2=si4?si2:si3;
l5=si2;
sj2=(U64)(si2);
sj1-=sj2;
si2=l12;
si3=8U;
si2+=si3;
sj2=i64_load(&i->m0,(U64)si2);
l14=sj2;
sj1-=sj2;
i64_store(&i->m0,(U64)si0,sj1);
sj0=l17;
sj1=l14;
si0=sj0 <= sj1;
sj1=l17;
sj2=l14;
si1=sj1 < sj2;
si2=l5;
si0=si2?si0:si1;
l5=si0;
si0=l12;
si1=16U;
si0+=si1;
l12=si0;
si0=l15;
si1=16U;
si0+=si1;
l15=si0;
si0=l16;
si1=16U;
si0+=si1;
l16=si0;
si0=l21;
si1=l23;
si2=-2U;
si1+=si2;
l23=si1;
si0=si0 != si1;
if(si0){
goto L203;
}
}
si0=0U;
si1=l23;
si0-=si1;
l12=si0;
L200:;
si0=l7;
sj0=(U64)(si0);
l14=sj0;
si0=l39;
si0=!(si0);
if(si0){
goto L204;
}
si0=l38;
si1=l12;
si2=3U;
si1<<=(si2&31);
l12=si1;
si0+=si1;
si1=l6;
si2=l12;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
l13=sj1;
si2=l5;
sj2=(U64)(si2);
sj1-=sj2;
si2=l36;
si3=l12;
si2+=si3;
sj2=i64_load(&i->m0,(U64)si2);
l17=sj2;
sj1-=sj2;
i64_store(&i->m0,(U64)si0,sj1);
sj0=l13;
sj1=l17;
si0=sj0 <= sj1;
sj1=l13;
sj2=l17;
si1=sj1 < sj2;
si2=l5;
si0=si2?si0:si1;
l5=si0;
L204:;
sj0=0ULL;
sj1=l14;
sj0-=sj1;
l14=sj0;
si0=l24;
si0=!(si0);
if(si0){
goto L205;
}
si0=0U;
l15=si0;
si0=0U;
si1=l24;
si2=3U;
si1<<=(si2&31);
si0-=si1;
l12=si0;
si0=l37;
si1=536870910U;
si0+=si1;
si1=536870911U;
si0&=si1;
si1=1U;
si0+=si1;
l16=si0;
L207:;
{
si0=l22;
si1=l12;
si0+=si1;
sj0=i64_load(&i->m0,(U64)si0);
sj1=0ULL;
si0=sj0 != sj1;
if(si0){
goto L206;
}
si0=l15;
si1=1U;
si0+=si1;
l15=si0;
si0=l12;
si1=8U;
si0+=si1;
l12=si0;
if(si0){
goto L207;
}
}
si0=l16;
l15=si0;
L206:;
si0=l15;
si1=l24;
si0=si0 == si1;
if(si0){
goto L205;
}
si0=l15;
si1=l24;
si0=si0 >= si1;
if(si0){
goto L18;
}
si0=l29;
si1=l15;
si2=3U;
si1<<=(si2&31);
l16=si1;
si0+=si1;
l12=si0;
sj1=0ULL;
si2=l12;
sj2=i64_load(&i->m0,(U64)si2);
sj1-=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l15;
si1=1U;
si0+=si1;
si1=l24;
si0=si0 == si1;
if(si0){
goto L208;
}
si0=l16;
si1=l24;
si2=3U;
si1<<=(si2&31);
si0-=si1;
l12=si0;
si0=l0;
si1=l1;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l16=si0;
L209:;
{
si0=l16;
si1=l12;
si0+=si1;
l15=si0;
si1=l15;
sj1=i64_load(&i->m0,(U64)si1);
sj2=-1ULL;
sj1^=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l12;
si1=8U;
si0+=si1;
l12=si0;
si1=-8U;
si0=si0 != si1;
if(si0){
goto L209;
}
}
L208:;
sj0=-2ULL;
sj1=-1ULL;
si2=l7;
sj0=si2?sj0:sj1;
l14=sj0;
L205:;
si0=l22;
sj1=l14;
i64_store(&i->m0,(U64)si0,sj1);
si0=l32;
sj1=0ULL;
si2=l5;
sj2=(U64)(si2);
sj3=1ULL;
sj2&=sj3;
sj1-=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=0U;
l21=si0;
si0=l8;
si1=l9;
si0=si0 == si1;
l7=si0;
if(si0){
goto L210;
}
si0=l8;
si1=3U;
si0<<=(si1&31);
si1=l9;
si2=3U;
si1<<=(si2&31);
si0-=si1;
l16=si0;
si0=l19;
si1=-1U;
si0+=si1;
si1=536870911U;
si0&=si1;
si1=1U;
si0+=si1;
l5=si0;
si0=0U;
l15=si0;
si0=l4;
l12=si0;
L212:;
{
si0=l12;
sj0=i64_load(&i->m0,(U64)si0);
sj1=0ULL;
si0=sj0 != sj1;
if(si0){
goto L211;
}
si0=l15;
si1=1U;
si0+=si1;
l15=si0;
si0=l12;
si1=8U;
si0+=si1;
l12=si0;
si0=l16;
si1=-8U;
si0+=si1;
l16=si0;
if(si0){
goto L212;
}
}
si0=l5;
l15=si0;
L211:;
si0=0U;
l21=si0;
si0=l15;
si1=l19;
si0=si0 == si1;
if(si0){
goto L210;
}
si0=l15;
si1=l19;
si0=si0 >= si1;
if(si0){
goto L17;
}
si0=l4;
si1=l15;
si2=3U;
si1<<=(si2&31);
l16=si1;
si0+=si1;
l12=si0;
sj1=0ULL;
si2=l12;
sj2=i64_load(&i->m0,(U64)si2);
sj1-=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=1U;
l21=si0;
si0=l15;
si1=1U;
si0+=si1;
l12=si0;
si1=l19;
si0=si0 == si1;
if(si0){
goto L210;
}
si0=l8;
si1=3U;
si0<<=(si1&31);
si1=l16;
si0-=si1;
si1=l9;
si2=3U;
si1<<=(si2&31);
si0-=si1;
si1=-8U;
si0+=si1;
l15=si0;
si0=l4;
si1=l12;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l12=si0;
L213:;
{
si0=l12;
si1=l12;
sj1=i64_load(&i->m0,(U64)si1);
sj2=-1ULL;
sj1^=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l12;
si1=8U;
si0+=si1;
l12=si0;
si0=l15;
si1=-8U;
si0+=si1;
l15=si0;
if(si0){
goto L213;
}
}
L210:;
si0=l1;
si1=l18;
si0=si0 < si1;
if(si0){
goto L16;
}
si0=l3;
si1=l18;
si0=si0 < si1;
if(si0){
goto L15;
}
si0=l10;
si1=l19;
i32_store(&i->m0,(U64)si0,si1);
si0=l10;
si1=l33;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l19;
si1=l33;
si0=si0 != si1;
if(si0){
goto L14;
}
si0=l0;
si1=l18;
si2=3U;
si1<<=(si2&31);
l12=si1;
si0+=si1;
l22=si0;
si0=l2;
si1=l12;
si0+=si1;
l24=si0;
sj0=0ULL;
l13=sj0;
si0=l7;
if(si0){
goto L214;
}
si0=l19;
si1=l1;
si2=l18;
si1-=si2;
si0=si0 > si1;
if(si0){
goto L13;
}
si0=l3;
si1=l18;
si0-=si1;
l6=si0;
si0=0U;
l7=si0;
si0=l9;
l5=si0;
si0=l4;
l12=si0;
si0=l31;
l15=si0;
si0=l22;
l16=si0;
L215:;
{
si0=l12;
sj0=i64_load(&i->m0,(U64)si0);
l13=sj0;
si1=l15;
sj1=i64_load(&i->m0,(U64)si1);
sj0+=sj1;
l14=sj0;
sj1=l13;
si0=sj0 < sj1;
l23=si0;
si0=l7;
si1=255U;
si0&=si1;
if(si0){
goto L217;
}
si0=l23;
l7=si0;
goto L216;
L217:;
si0=l23;
sj1=l14;
sj2=1ULL;
sj1+=sj2;
l14=sj1;
si1=!(sj1);
si0|=si1;
l7=si0;
L216:;
si0=l16;
sj1=l14;
i64_store(&i->m0,(U64)si0,sj1);
si0=l12;
si1=8U;
si0+=si1;
l12=si0;
si0=l15;
si1=8U;
si0+=si1;
l15=si0;
si0=l16;
si1=8U;
si0+=si1;
l16=si0;
si0=l8;
si1=l5;
si2=1U;
si1+=si2;
l5=si1;
si0=si0 != si1;
if(si0){
goto L215;
}
}
si0=l19;
si1=l6;
si0=si0 > si1;
if(si0){
goto L220;
}
si0=l19;
si1=1U;
si0&=si1;
l33=si0;
si0=l37;
si1=l8;
si0=si0 != si1;
if(si0){
goto L219;
}
si0=0U;
l5=si0;
si0=0U;
l12=si0;
goto L218;
L220:;
si0=1202809U;
si1=34U;
si2=1203412U;
f604(i,si0,si1,si2);
UNREACHABLE;
L219:;
si0=0U;
l23=si0;
si0=0U;
si1=l19;
si2=-2U;
si1&=si2;
si0-=si1;
l6=si0;
si0=l31;
l12=si0;
si0=l4;
l15=si0;
si0=l24;
l16=si0;
si0=0U;
l5=si0;
L221:;
{
si0=l16;
si1=l15;
sj1=i64_load(&i->m0,(U64)si1);
l14=sj1;
si2=l5;
sj2=(U64)(si2);
sj3=1ULL;
sj2&=sj3;
sj1-=sj2;
si2=l12;
sj2=i64_load(&i->m0,(U64)si2);
l13=sj2;
sj1-=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l16;
si1=8U;
si0+=si1;
si1=l15;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
l17=sj1;
sj2=l14;
sj3=l13;
si2=sj2 <= sj3;
sj3=l14;
sj4=l13;
si3=sj3 < sj4;
si4=l5;
si5=1U;
si4&=si5;
si2=si4?si2:si3;
l5=si2;
sj2=(U64)(si2);
sj1-=sj2;
si2=l12;
si3=8U;
si2+=si3;
sj2=i64_load(&i->m0,(U64)si2);
l14=sj2;
sj1-=sj2;
i64_store(&i->m0,(U64)si0,sj1);
sj0=l17;
sj1=l14;
si0=sj0 <= sj1;
sj1=l17;
sj2=l14;
si1=sj1 < sj2;
si2=l5;
si0=si2?si0:si1;
l5=si0;
si0=l12;
si1=16U;
si0+=si1;
l12=si0;
si0=l15;
si1=16U;
si0+=si1;
l15=si0;
si0=l16;
si1=16U;
si0+=si1;
l16=si0;
si0=l6;
si1=l23;
si2=-2U;
si1+=si2;
l23=si1;
si0=si0 != si1;
if(si0){
goto L221;
}
}
si0=0U;
si1=l23;
si0-=si1;
l12=si0;
L218:;
sj0=2ULL;
sj1=0ULL;
si2=l7;
sj0=si2?sj0:sj1;
l14=sj0;
si0=l33;
si0=!(si0);
if(si0){
goto L222;
}
si0=l24;
si1=l12;
si2=3U;
si1<<=(si2&31);
l12=si1;
si0+=si1;
si1=l4;
si2=l12;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
l13=sj1;
si2=l5;
sj2=(U64)(si2);
sj1-=sj2;
si2=l31;
si3=l12;
si2+=si3;
sj2=i64_load(&i->m0,(U64)si2);
l17=sj2;
sj1-=sj2;
i64_store(&i->m0,(U64)si0,sj1);
sj0=l13;
sj1=l17;
si0=sj0 <= sj1;
sj1=l13;
sj2=l17;
si1=sj1 < sj2;
si2=l5;
si0=si2?si0:si1;
l5=si0;
L222:;
sj0=l14;
si1=l5;
sj1=(U64)(si1);
sj2=1ULL;
sj1&=sj2;
sj0|=sj1;
l13=sj0;
L214:;
si0=l30;
sj0=i64_load(&i->m0,(U64)si0);
l20=sj0;
si1=l21;
sj1=(U64)(si1);
sj0-=sj1;
sj1=l13;
sj2=1ULL;
sj1>>=(sj2&63);
sj0+=sj1;
l27=sj0;
si1=l29;
sj1=i64_load(&i->m0,(U64)si1);
l14=sj1;
sj0+=sj1;
l17=sj0;
sj1=l14;
sj0^=sj1;
sj1=-1ULL;
si0=(U64)((I64)sj0>(I64)sj1);
if(si0){
goto L12;
}
si0=l0;
si1=l1;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l16=si0;
sj0=l27;
sj1=-1ULL;
si0=(U64)((I64)sj0>(I64)sj1);
if(si0){
goto L223;
}
si0=l29;
sj1=l17;
i64_store(&i->m0,(U64)si0,sj1);
sj0=l14;
sj1=0ULL;
sj2=l27;
sj1-=sj2;
si0=sj0 >= sj1;
if(si0){
goto L11;
}
si0=0U;
si1=l9;
si2=3U;
si1<<=(si2&31);
si0-=si1;
l12=si0;
L224:;
{
si0=l12;
si0=!(si0);
if(si0){
goto L11;
}
si0=l16;
si1=l12;
si0+=si1;
l15=si0;
si1=l15;
sj1=i64_load(&i->m0,(U64)si1);
l14=sj1;
sj2=-1ULL;
sj1+=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l12;
si1=8U;
si0+=si1;
l12=si0;
sj0=l14;
si0=!(sj0);
if(si0){
goto L224;
}
goto L11;
}
L223:;
si0=l29;
sj1=l17;
i64_store(&i->m0,(U64)si0,sj1);
sj0=l17;
sj1=l14;
si0=sj0 >= sj1;
if(si0){
goto L11;
}
si0=0U;
si1=l9;
si2=3U;
si1<<=(si2&31);
si0-=si1;
l12=si0;
L225:;
{
si0=l12;
si0=!(si0);
if(si0){
goto L11;
}
si0=l16;
si1=l12;
si0+=si1;
l15=si0;
si1=l15;
sj1=i64_load(&i->m0,(U64)si1);
sj2=1ULL;
sj1+=sj2;
l14=sj1;
i64_store(&i->m0,(U64)si0,sj1);
si0=l12;
si1=8U;
si0+=si1;
l12=si0;
sj0=l14;
si0=!(sj0);
if(si0){
goto L225;
}
goto L11;
}
L85:;
si0=l10;
si1=0U;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=0U;
si1=l10;
si2=l10;
si3=4U;
si2+=si3;
si3=l10;
si4=8U;
si3+=si4;
si4=1190164U;
f1250(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L84:;
si0=1202809U;
si1=34U;
si2=1202976U;
f604(i,si0,si1,si2);
UNREACHABLE;
L83:;
si0=1189451U;
si1=43U;
si2=1191044U;
f604(i,si0,si1,si2);
UNREACHABLE;
L82:;
si0=1189416U;
si1=35U;
si2=1191060U;
f604(i,si0,si1,si2);
UNREACHABLE;
L81:;
si0=1189416U;
si1=35U;
si2=1191076U;
f604(i,si0,si1,si2);
UNREACHABLE;
L80:;
si0=l10;
si1=0U;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=0U;
si1=l10;
si2=l10;
si3=4U;
si2+=si3;
si3=l10;
si4=8U;
si3+=si4;
si4=1190164U;
f1250(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L79:;
si0=1202809U;
si1=34U;
si2=1202976U;
f604(i,si0,si1,si2);
UNREACHABLE;
L78:;
si0=l5;
si1=l1;
si2=1191092U;
f593(i,si0,si1,si2);
UNREACHABLE;
L77:;
si0=l5;
si1=l3;
si2=1191108U;
f593(i,si0,si1,si2);
UNREACHABLE;
L76:;
si0=1189451U;
si1=43U;
si2=1191124U;
f604(i,si0,si1,si2);
UNREACHABLE;
L75:;
si0=1189451U;
si1=43U;
si2=1191140U;
f604(i,si0,si1,si2);
UNREACHABLE;
L74:;
si0=l10;
si1=0U;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=0U;
si1=l10;
si2=l10;
si3=4U;
si2+=si3;
si3=l10;
si4=8U;
si3+=si4;
si4=1190164U;
f1250(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L73:;
si0=1202809U;
si1=34U;
si2=1202976U;
f604(i,si0,si1,si2);
UNREACHABLE;
L72:;
si0=l21;
sj1=l13;
i64_store(&i->m0,(U64)si0,sj1);
goto L3;
L71:;
si0=1189451U;
si1=43U;
si2=1191172U;
f604(i,si0,si1,si2);
UNREACHABLE;
L70:;
si0=1189416U;
si1=35U;
si2=1191188U;
f604(i,si0,si1,si2);
UNREACHABLE;
L69:;
si0=1189416U;
si1=35U;
si2=1191204U;
f604(i,si0,si1,si2);
UNREACHABLE;
L68:;
si0=l10;
si1=0U;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=0U;
si1=l10;
si2=l10;
si3=4U;
si2+=si3;
si3=l10;
si4=8U;
si3+=si4;
si4=1190164U;
f1250(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L67:;
si0=1202809U;
si1=34U;
si2=1202976U;
f604(i,si0,si1,si2);
UNREACHABLE;
L66:;
si0=l23;
si1=l1;
si2=1191220U;
f593(i,si0,si1,si2);
UNREACHABLE;
L65:;
si0=l23;
si1=l3;
si2=1191236U;
f593(i,si0,si1,si2);
UNREACHABLE;
L64:;
si0=1189451U;
si1=43U;
si2=1191252U;
f604(i,si0,si1,si2);
UNREACHABLE;
L63:;
si0=1189451U;
si1=43U;
si2=1191268U;
f604(i,si0,si1,si2);
UNREACHABLE;
L62:;
si0=l5;
si1=l8;
si2=1238956U;
f594(i,si0,si1,si2);
UNREACHABLE;
L61:;
si0=l10;
si1=0U;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=0U;
si1=l10;
si2=l10;
si3=4U;
si2+=si3;
si3=l10;
si4=8U;
si3+=si4;
si4=1190164U;
f1250(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L60:;
si0=1202809U;
si1=34U;
si2=1202976U;
f604(i,si0,si1,si2);
UNREACHABLE;
L59:;
si0=1189451U;
si1=43U;
si2=1191300U;
f604(i,si0,si1,si2);
UNREACHABLE;
L58:;
si0=1189451U;
si1=43U;
si2=1191316U;
f604(i,si0,si1,si2);
UNREACHABLE;
L57:;
si0=1189451U;
si1=43U;
si2=1191332U;
f604(i,si0,si1,si2);
UNREACHABLE;
L56:;
si0=1189416U;
si1=35U;
si2=1191348U;
f604(i,si0,si1,si2);
UNREACHABLE;
L55:;
si0=1189416U;
si1=35U;
si2=1191364U;
f604(i,si0,si1,si2);
UNREACHABLE;
L54:;
si0=1189416U;
si1=35U;
si2=1191380U;
f604(i,si0,si1,si2);
UNREACHABLE;
L53:;
si0=1189416U;
si1=35U;
si2=1191396U;
f604(i,si0,si1,si2);
UNREACHABLE;
L52:;
si0=l26;
si1=l11;
si2=1191412U;
f593(i,si0,si1,si2);
UNREACHABLE;
L51:;
si0=l26;
si1=l29;
si2=1191428U;
f593(i,si0,si1,si2);
UNREACHABLE;
L50:;
si0=l15;
si1=l8;
si2=1238956U;
f594(i,si0,si1,si2);
UNREACHABLE;
L49:;
si0=l15;
si1=l25;
si2=1238956U;
f594(i,si0,si1,si2);
UNREACHABLE;
L48:;
si0=l18;
si1=l11;
si2=1191444U;
f593(i,si0,si1,si2);
UNREACHABLE;
L47:;
si0=l18;
si1=l29;
si2=1191460U;
f593(i,si0,si1,si2);
UNREACHABLE;
L46:;
si0=l10;
si1=0U;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=0U;
si1=l10;
si2=l10;
si3=4U;
si2+=si3;
si3=l10;
si4=8U;
si3+=si4;
si4=1190164U;
f1250(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L45:;
si0=1202809U;
si1=34U;
si2=1202976U;
f604(i,si0,si1,si2);
UNREACHABLE;
L44:;
si0=l26;
si1=l1;
si2=1191476U;
f593(i,si0,si1,si2);
UNREACHABLE;
L43:;
si0=1189451U;
si1=43U;
si2=1189760U;
f604(i,si0,si1,si2);
UNREACHABLE;
L42:;
si0=l37;
sj1=l17;
i64_store(&i->m0,(U64)si0,sj1);
goto L7;
L41:;
si0=1189451U;
si1=43U;
si2=1191524U;
f604(i,si0,si1,si2);
UNREACHABLE;
L40:;
si0=1189416U;
si1=35U;
si2=1191540U;
f604(i,si0,si1,si2);
UNREACHABLE;
L39:;
si0=1189416U;
si1=35U;
si2=1191556U;
f604(i,si0,si1,si2);
UNREACHABLE;
L38:;
si0=l10;
si1=0U;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=0U;
si1=l10;
si2=l10;
si3=4U;
si2+=si3;
si3=l10;
si4=8U;
si3+=si4;
si4=1190164U;
f1250(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L37:;
si0=1202809U;
si1=34U;
si2=1202976U;
f604(i,si0,si1,si2);
UNREACHABLE;
L36:;
si0=l11;
si1=l1;
si2=1191572U;
f593(i,si0,si1,si2);
UNREACHABLE;
L35:;
si0=1189451U;
si1=43U;
si2=1191588U;
f604(i,si0,si1,si2);
UNREACHABLE;
L34:;
si0=l11;
si1=l3;
si2=1191604U;
f593(i,si0,si1,si2);
UNREACHABLE;
L33:;
si0=1189451U;
si1=43U;
si2=1191620U;
f604(i,si0,si1,si2);
UNREACHABLE;
L32:;
si0=l10;
si1=0U;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=0U;
si1=l10;
si2=l10;
si3=4U;
si2+=si3;
si3=l10;
si4=8U;
si3+=si4;
si4=1190164U;
f1250(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L31:;
si0=1202809U;
si1=34U;
si2=1202976U;
f604(i,si0,si1,si2);
UNREACHABLE;
L30:;
si0=l9;
si1=l23;
si2=1238956U;
f594(i,si0,si1,si2);
UNREACHABLE;
L29:;
si0=l21;
sj1=l13;
i64_store(&i->m0,(U64)si0,sj1);
goto L9;
L28:;
si0=1189451U;
si1=43U;
si2=1191652U;
f604(i,si0,si1,si2);
UNREACHABLE;
L27:;
si0=1189416U;
si1=35U;
si2=1191668U;
f604(i,si0,si1,si2);
UNREACHABLE;
L26:;
si0=1189416U;
si1=35U;
si2=1191684U;
f604(i,si0,si1,si2);
UNREACHABLE;
L25:;
si0=1189416U;
si1=35U;
si2=1191700U;
f604(i,si0,si1,si2);
UNREACHABLE;
L24:;
si0=1189416U;
si1=35U;
si2=1191716U;
f604(i,si0,si1,si2);
UNREACHABLE;
L23:;
si0=l12;
si1=l1;
si2=1191732U;
f593(i,si0,si1,si2);
UNREACHABLE;
L22:;
si0=1189451U;
si1=43U;
si2=1191748U;
f604(i,si0,si1,si2);
UNREACHABLE;
L21:;
si0=l12;
si1=l3;
si2=1191764U;
f593(i,si0,si1,si2);
UNREACHABLE;
L20:;
si0=1189451U;
si1=43U;
si2=1191780U;
f604(i,si0,si1,si2);
UNREACHABLE;
L19:;
si0=1202809U;
si1=34U;
si2=1202976U;
f604(i,si0,si1,si2);
UNREACHABLE;
L18:;
si0=l15;
si1=l24;
si2=1238956U;
f594(i,si0,si1,si2);
UNREACHABLE;
L17:;
si0=l15;
si1=l19;
si2=1238956U;
f594(i,si0,si1,si2);
UNREACHABLE;
L16:;
si0=l18;
si1=l1;
si2=1191796U;
f593(i,si0,si1,si2);
UNREACHABLE;
L15:;
si0=l18;
si1=l3;
si2=1191812U;
f593(i,si0,si1,si2);
UNREACHABLE;
L14:;
si0=l10;
si1=0U;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=0U;
si1=l10;
si2=l10;
si3=4U;
si2+=si3;
si3=l10;
si4=8U;
si3+=si4;
si4=1190164U;
f1250(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L13:;
si0=1202809U;
si1=34U;
si2=1202976U;
f604(i,si0,si1,si2);
UNREACHABLE;
L12:;
si0=l29;
sj1=l17;
i64_store(&i->m0,(U64)si0,sj1);
L11:;
si0=l38;
sj0=i64_load(&i->m0,(U64)si0);
l14=sj0;
sj1=l20;
sj2=l13;
sj3=1ULL;
sj2&=sj3;
sj1+=sj2;
l13=sj1;
sj2=-1ULL;
sj1^=sj2;
sj2=0ULL;
sj3=l13;
sj2-=sj3;
si3=l21;
sj1=si3?sj1:sj2;
l17=sj1;
sj0+=sj1;
l13=sj0;
sj1=l14;
sj0^=sj1;
sj1=-1ULL;
si0=(U64)((I64)sj0>(I64)sj1);
if(si0){
goto L227;
}
sj0=l17;
sj1=-1ULL;
si0=(U64)((I64)sj0>(I64)sj1);
if(si0){
goto L228;
}
si0=l38;
sj1=l13;
i64_store(&i->m0,(U64)si0,sj1);
sj0=l14;
sj1=0ULL;
sj2=l17;
sj1-=sj2;
si0=sj0 >= sj1;
if(si0){
goto L226;
}
si0=l9;
si1=3U;
si0<<=(si1&31);
l12=si0;
si1=l3;
si2=3U;
si1<<=(si2&31);
si0+=si1;
si1=l1;
si2=3U;
si1<<=(si2&31);
l16=si1;
si0-=si1;
l15=si0;
si0=l2;
si1=l16;
si2=l12;
si1-=si2;
si0+=si1;
l12=si0;
L229:;
{
si0=l15;
si0=!(si0);
if(si0){
goto L226;
}
si0=l12;
si1=l12;
sj1=i64_load(&i->m0,(U64)si1);
l14=sj1;
sj2=-1ULL;
sj1+=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l15;
si1=-8U;
si0+=si1;
l15=si0;
si0=l12;
si1=8U;
si0+=si1;
l12=si0;
sj0=l14;
si0=!(sj0);
if(si0){
goto L229;
}
goto L226;
}
L228:;
si0=l38;
sj1=l13;
i64_store(&i->m0,(U64)si0,sj1);
sj0=l13;
sj1=l14;
si0=sj0 >= sj1;
if(si0){
goto L226;
}
si0=l9;
si1=3U;
si0<<=(si1&31);
l12=si0;
si1=l3;
si2=3U;
si1<<=(si2&31);
si0+=si1;
si1=l1;
si2=3U;
si1<<=(si2&31);
l16=si1;
si0-=si1;
l15=si0;
si0=l2;
si1=l16;
si2=l12;
si1-=si2;
si0+=si1;
l12=si0;
L230:;
{
si0=l15;
si0=!(si0);
if(si0){
goto L226;
}
si0=l12;
si1=l12;
sj1=i64_load(&i->m0,(U64)si1);
sj2=1ULL;
sj1+=sj2;
l14=sj1;
i64_store(&i->m0,(U64)si0,sj1);
si0=l15;
si1=-8U;
si0+=si1;
l15=si0;
si0=l12;
si1=8U;
si0+=si1;
l12=si0;
sj0=l14;
si0=!(sj0);
if(si0){
goto L230;
}
goto L226;
}
L227:;
si0=l38;
sj1=l13;
i64_store(&i->m0,(U64)si0,sj1);
L226:;
si0=l10;
si1=l35;
i32_store(&i->m0,(U64)si0,si1);
si0=l10;
si1=l18;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l35;
si1=l18;
si0=si0 != si1;
if(si0){
goto L234;
}
sj0=0ULL;
l13=sj0;
si0=l28;
si1=l9;
si0=si0 == si1;
if(si0){
goto L235;
}
si0=l11;
si1=l8;
si0=si0 == si1;
if(si0){
goto L235;
}
si0=0U;
l16=si0;
si0=l25;
l9=si0;
si0=l26;
l12=si0;
si0=l0;
l15=si0;
L236:;
{
si0=l9;
sj0=i64_load(&i->m0,(U64)si0);
l13=sj0;
si1=l12;
sj1=i64_load(&i->m0,(U64)si1);
sj0+=sj1;
l14=sj0;
sj1=l13;
si0=sj0 < sj1;
l7=si0;
si0=l16;
si1=255U;
si0&=si1;
if(si0){
goto L238;
}
si0=l7;
l16=si0;
goto L237;
L238:;
si0=l7;
sj1=l14;
sj2=1ULL;
sj1+=sj2;
l14=sj1;
si1=!(sj1);
si0|=si1;
l16=si0;
L237:;
si0=l15;
sj1=l14;
i64_store(&i->m0,(U64)si0,sj1);
si0=l9;
si1=8U;
si0+=si1;
l9=si0;
si0=l12;
si1=8U;
si0+=si1;
l12=si0;
si0=l15;
si1=8U;
si0+=si1;
l15=si0;
si0=l8;
si1=l11;
si2=-1U;
si1+=si2;
l11=si1;
si0=si0 != si1;
if(si0){
goto L236;
}
}
si0=l18;
si1=1U;
si0&=si1;
l4=si0;
si0=l1;
si1=-2U;
si0+=si1;
si1=l8;
si0=si0 != si1;
if(si0){
goto L240;
}
si0=0U;
l9=si0;
si0=0U;
l12=si0;
goto L239;
L240:;
si0=l18;
si1=-2U;
si0&=si1;
l23=si0;
si0=0U;
l11=si0;
si0=0U;
l9=si0;
si0=0U;
l12=si0;
L241:;
{
si0=l2;
si1=l11;
si0+=si1;
l15=si0;
si1=l25;
si2=l11;
si1+=si2;
l7=si1;
sj1=i64_load(&i->m0,(U64)si1);
l14=sj1;
si2=l9;
sj2=(U64)(si2);
sj3=1ULL;
sj2&=sj3;
sj1-=sj2;
si2=l26;
si3=l11;
si2+=si3;
l5=si2;
sj2=i64_load(&i->m0,(U64)si2);
l13=sj2;
sj1-=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l15;
si1=8U;
si0+=si1;
si1=l7;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
l17=sj1;
sj2=l14;
sj3=l13;
si2=sj2 <= sj3;
sj3=l14;
sj4=l13;
si3=sj3 < sj4;
si4=l9;
si5=1U;
si4&=si5;
si2=si4?si2:si3;
l9=si2;
sj2=(U64)(si2);
sj1-=sj2;
si2=l5;
si3=8U;
si2+=si3;
sj2=i64_load(&i->m0,(U64)si2);
l14=sj2;
sj1-=sj2;
i64_store(&i->m0,(U64)si0,sj1);
sj0=l17;
sj1=l14;
si0=sj0 <= sj1;
sj1=l17;
sj2=l14;
si1=sj1 < sj2;
si2=l9;
si0=si2?si0:si1;
l9=si0;
si0=l11;
si1=16U;
si0+=si1;
l11=si0;
si0=l23;
si1=l12;
si2=2U;
si1+=si2;
l12=si1;
si0=si0 != si1;
if(si0){
goto L241;
}
}
L239:;
sj0=2ULL;
sj1=0ULL;
si2=l16;
sj0=si2?sj0:sj1;
l14=sj0;
si0=l4;
si0=!(si0);
if(si0){
goto L242;
}
si0=l2;
si1=l12;
si2=3U;
si1<<=(si2&31);
l11=si1;
si0+=si1;
si1=l25;
si2=l11;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
l13=sj1;
si2=l9;
sj2=(U64)(si2);
sj1-=sj2;
si2=l26;
si3=l11;
si2+=si3;
sj2=i64_load(&i->m0,(U64)si2);
l17=sj2;
sj1-=sj2;
i64_store(&i->m0,(U64)si0,sj1);
sj0=l13;
sj1=l17;
si0=sj0 <= sj1;
sj1=l13;
sj2=l17;
si1=sj1 < sj2;
si2=l9;
si0=si2?si0:si1;
l9=si0;
L242:;
sj0=l14;
si1=l9;
sj1=(U64)(si1);
sj2=1ULL;
sj1&=sj2;
sj0|=sj1;
l13=sj0;
L235:;
si0=l1;
si1=l18;
si0=si0 == si1;
if(si0){
goto L233;
}
si0=l22;
sj0=i64_load(&i->m0,(U64)si0);
l14=sj0;
sj1=l13;
sj2=1ULL;
sj1>>=(sj2&63);
si2=l34;
sj2=i64_load(&i->m0,(U64)si2);
l20=sj2;
sj1+=sj2;
l27=sj1;
sj0+=sj1;
l17=sj0;
sj1=l14;
sj0^=sj1;
sj1=-1ULL;
si0=(U64)((I64)sj0>(I64)sj1);
if(si0){
goto L232;
}
si0=l0;
si1=l1;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l12=si0;
sj0=l27;
sj1=-1ULL;
si0=(U64)((I64)sj0>(I64)sj1);
if(si0){
goto L243;
}
si0=l22;
sj1=l17;
i64_store(&i->m0,(U64)si0,sj1);
sj0=l14;
sj1=0ULL;
sj2=l27;
sj1-=sj2;
si0=sj0 >= sj1;
if(si0){
goto L231;
}
si0=0U;
si1=l8;
si2=3U;
si1<<=(si2&31);
si0-=si1;
l11=si0;
L244:;
{
si0=l11;
si0=!(si0);
if(si0){
goto L231;
}
si0=l12;
si1=l11;
si0+=si1;
l9=si0;
si1=l9;
sj1=i64_load(&i->m0,(U64)si1);
l14=sj1;
sj2=-1ULL;
sj1+=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l11;
si1=8U;
si0+=si1;
l11=si0;
sj0=l14;
si0=!(sj0);
if(si0){
goto L244;
}
goto L231;
}
L243:;
si0=l22;
sj1=l17;
i64_store(&i->m0,(U64)si0,sj1);
sj0=l17;
sj1=l14;
si0=sj0 >= sj1;
if(si0){
goto L231;
}
si0=0U;
si1=l8;
si2=3U;
si1<<=(si2&31);
si0-=si1;
l11=si0;
L245:;
{
si0=l11;
si0=!(si0);
if(si0){
goto L231;
}
si0=l12;
si1=l11;
si0+=si1;
l9=si0;
si1=l9;
sj1=i64_load(&i->m0,(U64)si1);
sj2=1ULL;
sj1+=sj2;
l14=sj1;
i64_store(&i->m0,(U64)si0,sj1);
si0=l11;
si1=8U;
si0+=si1;
l11=si0;
sj0=l14;
si0=!(sj0);
if(si0){
goto L245;
}
goto L231;
}
L234:;
si0=l10;
si1=0U;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=0U;
si1=l10;
si2=l10;
si3=4U;
si2+=si3;
si3=l10;
si4=8U;
si3+=si4;
si4=1190164U;
f1250(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L233:;
si0=1189451U;
si1=43U;
si2=1189760U;
f604(i,si0,si1,si2);
UNREACHABLE;
L232:;
si0=l22;
sj1=l17;
i64_store(&i->m0,(U64)si0,sj1);
L231:;
si0=l3;
si1=l18;
si0=si0 == si1;
if(si0){
goto L247;
}
si0=l24;
sj0=i64_load(&i->m0,(U64)si0);
l14=sj0;
sj1=l20;
sj2=l13;
sj3=1ULL;
sj2&=sj3;
sj1-=sj2;
l17=sj1;
sj0+=sj1;
l13=sj0;
sj1=l14;
sj0^=sj1;
sj1=-1ULL;
si0=(U64)((I64)sj0>(I64)sj1);
if(si0){
goto L246;
}
sj0=l17;
sj1=-1ULL;
si0=(U64)((I64)sj0>(I64)sj1);
if(si0){
goto L248;
}
si0=l24;
sj1=l13;
i64_store(&i->m0,(U64)si0,sj1);
sj0=l14;
sj1=0ULL;
sj2=l17;
sj1-=sj2;
si0=sj0 >= sj1;
if(si0){
goto L1;
}
si0=l8;
si1=3U;
si0<<=(si1&31);
l11=si0;
si1=l3;
si2=3U;
si1<<=(si2&31);
si0+=si1;
si1=l1;
si2=3U;
si1<<=(si2&31);
l12=si1;
si0-=si1;
l9=si0;
si0=l2;
si1=l12;
si2=l11;
si1-=si2;
si0+=si1;
l11=si0;
L249:;
{
si0=l9;
si0=!(si0);
if(si0){
goto L1;
}
si0=l11;
si1=l11;
sj1=i64_load(&i->m0,(U64)si1);
l14=sj1;
sj2=-1ULL;
sj1+=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l9;
si1=-8U;
si0+=si1;
l9=si0;
si0=l11;
si1=8U;
si0+=si1;
l11=si0;
sj0=l14;
si0=!(sj0);
si0=!(si0);
if(si0){
goto L1;
}
goto L249;
}
L248:;
si0=l24;
sj1=l13;
i64_store(&i->m0,(U64)si0,sj1);
sj0=l13;
sj1=l14;
si0=sj0 >= sj1;
if(si0){
goto L1;
}
si0=l8;
si1=3U;
si0<<=(si1&31);
l11=si0;
si1=l3;
si2=3U;
si1<<=(si2&31);
si0+=si1;
si1=l1;
si2=3U;
si1<<=(si2&31);
l12=si1;
si0-=si1;
l9=si0;
si0=l2;
si1=l12;
si2=l11;
si1-=si2;
si0+=si1;
l11=si0;
L250:;
{
si0=l9;
si0=!(si0);
if(si0){
goto L1;
}
si0=l11;
si1=l11;
sj1=i64_load(&i->m0,(U64)si1);
sj2=1ULL;
sj1+=sj2;
l14=sj1;
i64_store(&i->m0,(U64)si0,sj1);
si0=l9;
si1=-8U;
si0+=si1;
l9=si0;
si0=l11;
si1=8U;
si0+=si1;
l11=si0;
sj0=l14;
si0=!(sj0);
si0=!(si0);
if(si0){
goto L1;
}
goto L250;
}
L247:;
si0=1189451U;
si1=43U;
si2=1189760U;
f604(i,si0,si1,si2);
UNREACHABLE;
L246:;
si0=l24;
sj1=l13;
i64_store(&i->m0,(U64)si0,sj1);
goto L1;
L10:;
si0=1189451U;
si1=43U;
si2=1191636U;
f604(i,si0,si1,si2);
UNREACHABLE;
L9:;
si0=l22;
sj0=i64_load(&i->m0,(U64)si0);
l14=sj0;
sj1=l17;
sj2=l20;
sj3=l27;
sj2+=sj3;
sj1-=sj2;
l17=sj1;
sj0+=sj1;
l13=sj0;
sj1=l14;
sj0^=sj1;
sj1=-1ULL;
si0=(U64)((I64)sj0>(I64)sj1);
if(si0){
goto L251;
}
sj0=l17;
sj1=-1ULL;
si0=(U64)((I64)sj0>(I64)sj1);
if(si0){
goto L252;
}
si0=l22;
sj1=l13;
i64_store(&i->m0,(U64)si0,sj1);
sj0=l14;
sj1=0ULL;
sj2=l17;
sj1-=sj2;
si0=sj0 >= sj1;
if(si0){
goto L1;
}
si0=l2;
si1=l1;
si2=3U;
si1<<=(si2&31);
l9=si1;
si2=l8;
si3=3U;
si2<<=(si3&31);
l12=si2;
si1-=si2;
si0+=si1;
l11=si0;
si0=l12;
si1=l3;
si2=3U;
si1<<=(si2&31);
si0+=si1;
si1=l9;
si0-=si1;
si1=-8U;
si0+=si1;
l9=si0;
L253:;
{
si0=l9;
si0=!(si0);
if(si0){
goto L1;
}
si0=l11;
si1=l11;
sj1=i64_load(&i->m0,(U64)si1);
l14=sj1;
sj2=-1ULL;
sj1+=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l9;
si1=-8U;
si0+=si1;
l9=si0;
si0=l11;
si1=8U;
si0+=si1;
l11=si0;
sj0=l14;
si0=!(sj0);
si0=!(si0);
if(si0){
goto L1;
}
goto L253;
}
L252:;
si0=l22;
sj1=l13;
i64_store(&i->m0,(U64)si0,sj1);
sj0=l13;
sj1=l14;
si0=sj0 >= sj1;
if(si0){
goto L1;
}
si0=l2;
si1=l1;
si2=3U;
si1<<=(si2&31);
l9=si1;
si2=l8;
si3=3U;
si2<<=(si3&31);
l12=si2;
si1-=si2;
si0+=si1;
l11=si0;
si0=l12;
si1=l3;
si2=3U;
si1<<=(si2&31);
si0+=si1;
si1=l9;
si0-=si1;
si1=-8U;
si0+=si1;
l9=si0;
L254:;
{
si0=l9;
si0=!(si0);
if(si0){
goto L1;
}
si0=l11;
si1=l11;
sj1=i64_load(&i->m0,(U64)si1);
sj2=1ULL;
sj1+=sj2;
l14=sj1;
i64_store(&i->m0,(U64)si0,sj1);
si0=l9;
si1=-8U;
si0+=si1;
l9=si0;
si0=l11;
si1=8U;
si0+=si1;
l11=si0;
sj0=l14;
si0=!(sj0);
si0=!(si0);
if(si0){
goto L1;
}
goto L254;
}
L251:;
si0=l22;
sj1=l13;
i64_store(&i->m0,(U64)si0,sj1);
goto L1;
L8:;
si0=1189451U;
si1=43U;
si2=1191508U;
f604(i,si0,si1,si2);
UNREACHABLE;
L7:;
si0=l38;
sj0=i64_load(&i->m0,(U64)si0);
l14=sj0;
sj1=l20;
sj2=l13;
sj3=1ULL;
sj2&=sj3;
sj1-=sj2;
sj2=l27;
sj1+=sj2;
l17=sj1;
sj0+=sj1;
l13=sj0;
sj1=l14;
sj0^=sj1;
sj1=-1ULL;
si0=(U64)((I64)sj0>(I64)sj1);
if(si0){
goto L256;
}
sj0=l17;
sj1=-1ULL;
si0=(U64)((I64)sj0>(I64)sj1);
if(si0){
goto L257;
}
si0=l38;
sj1=l13;
i64_store(&i->m0,(U64)si0,sj1);
sj0=l14;
sj1=0ULL;
sj2=l17;
sj1-=sj2;
si0=sj0 >= sj1;
if(si0){
goto L255;
}
si0=l8;
si1=3U;
si0<<=(si1&31);
l12=si0;
si1=l3;
si2=3U;
si1<<=(si2&31);
si0+=si1;
si1=l1;
si2=3U;
si1<<=(si2&31);
l15=si1;
si0-=si1;
l8=si0;
si0=l2;
si1=l15;
si2=l12;
si1-=si2;
si0+=si1;
l12=si0;
L258:;
{
si0=l8;
si0=!(si0);
if(si0){
goto L255;
}
si0=l12;
si1=l12;
sj1=i64_load(&i->m0,(U64)si1);
l14=sj1;
sj2=-1ULL;
sj1+=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l8;
si1=-8U;
si0+=si1;
l8=si0;
si0=l12;
si1=8U;
si0+=si1;
l12=si0;
sj0=l14;
si0=!(sj0);
if(si0){
goto L258;
}
goto L255;
}
L257:;
si0=l38;
sj1=l13;
i64_store(&i->m0,(U64)si0,sj1);
sj0=l13;
sj1=l14;
si0=sj0 >= sj1;
if(si0){
goto L255;
}
si0=l8;
si1=3U;
si0<<=(si1&31);
l12=si0;
si1=l3;
si2=3U;
si1<<=(si2&31);
si0+=si1;
si1=l1;
si2=3U;
si1<<=(si2&31);
l15=si1;
si0-=si1;
l8=si0;
si0=l2;
si1=l15;
si2=l12;
si1-=si2;
si0+=si1;
l12=si0;
L259:;
{
si0=l8;
si0=!(si0);
if(si0){
goto L255;
}
si0=l12;
si1=l12;
sj1=i64_load(&i->m0,(U64)si1);
sj2=1ULL;
sj1+=sj2;
l14=sj1;
i64_store(&i->m0,(U64)si0,sj1);
si0=l8;
si1=-8U;
si0+=si1;
l8=si0;
si0=l12;
si1=8U;
si0+=si1;
l12=si0;
sj0=l14;
si0=!(sj0);
if(si0){
goto L259;
}
goto L255;
}
L256:;
si0=l38;
sj1=l13;
i64_store(&i->m0,(U64)si0,sj1);
L255:;
si0=l10;
si1=l18;
i32_store(&i->m0,(U64)si0,si1);
si0=l10;
si1=l35;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l18;
si1=l35;
si0=si0 != si1;
if(si0){
goto L265;
}
sj0=0ULL;
l13=sj0;
si0=l11;
si1=l9;
si0=si0 == si1;
if(si0){
goto L266;
}
si0=l18;
si1=l1;
si0=si0 > si1;
if(si0){
goto L264;
}
si0=0U;
l16=si0;
si0=l19;
l12=si0;
si0=l24;
l8=si0;
si0=l0;
l15=si0;
L267:;
{
si0=l12;
sj0=i64_load(&i->m0,(U64)si0);
l13=sj0;
si1=l8;
sj1=i64_load(&i->m0,(U64)si1);
sj0+=sj1;
l14=sj0;
sj1=l13;
si0=sj0 < sj1;
l7=si0;
si0=l16;
si1=255U;
si0&=si1;
if(si0){
goto L269;
}
si0=l7;
l16=si0;
goto L268;
L269:;
si0=l7;
sj1=l14;
sj2=1ULL;
sj1+=sj2;
l14=sj1;
si1=!(sj1);
si0|=si1;
l16=si0;
L268:;
si0=l15;
sj1=l14;
i64_store(&i->m0,(U64)si0,sj1);
si0=l12;
si1=8U;
si0+=si1;
l12=si0;
si0=l8;
si1=8U;
si0+=si1;
l8=si0;
si0=l15;
si1=8U;
si0+=si1;
l15=si0;
si0=l9;
si1=l11;
si2=-1U;
si1+=si2;
l11=si1;
si0=si0 != si1;
if(si0){
goto L267;
}
}
si0=l18;
si1=1U;
si0&=si1;
l4=si0;
si0=l1;
si1=-2U;
si0+=si1;
si1=l9;
si0=si0 != si1;
if(si0){
goto L271;
}
si0=0U;
l12=si0;
si0=0U;
l8=si0;
goto L270;
L271:;
si0=l18;
si1=-2U;
si0&=si1;
l23=si0;
si0=0U;
l11=si0;
si0=0U;
l12=si0;
si0=0U;
l8=si0;
L272:;
{
si0=l2;
si1=l11;
si0+=si1;
l15=si0;
si1=l19;
si2=l11;
si1+=si2;
l7=si1;
sj1=i64_load(&i->m0,(U64)si1);
l14=sj1;
si2=l12;
sj2=(U64)(si2);
sj3=1ULL;
sj2&=sj3;
sj1-=sj2;
si2=l24;
si3=l11;
si2+=si3;
l5=si2;
sj2=i64_load(&i->m0,(U64)si2);
l13=sj2;
sj1-=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l15;
si1=8U;
si0+=si1;
si1=l7;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
l17=sj1;
sj2=l14;
sj3=l13;
si2=sj2 <= sj3;
sj3=l14;
sj4=l13;
si3=sj3 < sj4;
si4=l12;
si5=1U;
si4&=si5;
si2=si4?si2:si3;
l12=si2;
sj2=(U64)(si2);
sj1-=sj2;
si2=l5;
si3=8U;
si2+=si3;
sj2=i64_load(&i->m0,(U64)si2);
l14=sj2;
sj1-=sj2;
i64_store(&i->m0,(U64)si0,sj1);
sj0=l17;
sj1=l14;
si0=sj0 <= sj1;
sj1=l17;
sj2=l14;
si1=sj1 < sj2;
si2=l12;
si0=si2?si0:si1;
l12=si0;
si0=l11;
si1=16U;
si0+=si1;
l11=si0;
si0=l23;
si1=l8;
si2=2U;
si1+=si2;
l8=si1;
si0=si0 != si1;
if(si0){
goto L272;
}
}
L270:;
sj0=2ULL;
sj1=0ULL;
si2=l16;
sj0=si2?sj0:sj1;
l14=sj0;
si0=l4;
si0=!(si0);
if(si0){
goto L273;
}
si0=l2;
si1=l8;
si2=3U;
si1<<=(si2&31);
l11=si1;
si0+=si1;
si1=l19;
si2=l11;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
l13=sj1;
si2=l12;
sj2=(U64)(si2);
sj1-=sj2;
si2=l24;
si3=l11;
si2+=si3;
sj2=i64_load(&i->m0,(U64)si2);
l17=sj2;
sj1-=sj2;
i64_store(&i->m0,(U64)si0,sj1);
sj0=l13;
sj1=l17;
si0=sj0 <= sj1;
sj1=l13;
sj2=l17;
si1=sj1 < sj2;
si2=l12;
si0=si2?si0:si1;
l12=si0;
L273:;
sj0=l14;
si1=l12;
sj1=(U64)(si1);
sj2=1ULL;
sj1&=sj2;
sj0|=sj1;
l13=sj0;
L266:;
si0=l18;
si1=l1;
si0=si0 > si1;
if(si0){
goto L263;
}
si0=l18;
si1=l1;
si0=si0 == si1;
if(si0){
goto L262;
}
si0=l21;
sj0=i64_load(&i->m0,(U64)si0);
l14=sj0;
si1=l31;
sj1=i64_load(&i->m0,(U64)si1);
l20=sj1;
sj2=l13;
sj3=1ULL;
sj2>>=(sj3&63);
sj1+=sj2;
l27=sj1;
sj0+=sj1;
l17=sj0;
sj1=l14;
sj0^=sj1;
sj1=-1ULL;
si0=(U64)((I64)sj0>(I64)sj1);
if(si0){
goto L261;
}
si0=l0;
si1=l1;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l8=si0;
sj0=l27;
sj1=-1ULL;
si0=(U64)((I64)sj0>(I64)sj1);
if(si0){
goto L274;
}
si0=l21;
sj1=l17;
i64_store(&i->m0,(U64)si0,sj1);
sj0=l14;
sj1=0ULL;
sj2=l27;
sj1-=sj2;
si0=sj0 >= sj1;
if(si0){
goto L260;
}
si0=0U;
si1=l9;
si2=3U;
si1<<=(si2&31);
si0-=si1;
l11=si0;
L275:;
{
si0=l11;
si0=!(si0);
if(si0){
goto L260;
}
si0=l8;
si1=l11;
si0+=si1;
l12=si0;
si1=l12;
sj1=i64_load(&i->m0,(U64)si1);
l14=sj1;
sj2=-1ULL;
sj1+=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l11;
si1=8U;
si0+=si1;
l11=si0;
sj0=l14;
si0=!(sj0);
if(si0){
goto L275;
}
goto L260;
}
L274:;
si0=l21;
sj1=l17;
i64_store(&i->m0,(U64)si0,sj1);
sj0=l17;
sj1=l14;
si0=sj0 >= sj1;
if(si0){
goto L260;
}
si0=0U;
si1=l9;
si2=3U;
si1<<=(si2&31);
si0-=si1;
l11=si0;
L276:;
{
si0=l11;
si0=!(si0);
if(si0){
goto L260;
}
si0=l8;
si1=l11;
si0+=si1;
l12=si0;
si1=l12;
sj1=i64_load(&i->m0,(U64)si1);
sj2=1ULL;
sj1+=sj2;
l14=sj1;
i64_store(&i->m0,(U64)si0,sj1);
si0=l11;
si1=8U;
si0+=si1;
l11=si0;
sj0=l14;
si0=!(sj0);
if(si0){
goto L276;
}
goto L260;
}
L265:;
si0=l10;
si1=0U;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=0U;
si1=l10;
si2=l10;
si3=4U;
si2+=si3;
si3=l10;
si4=8U;
si3+=si4;
si4=1190164U;
f1250(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L264:;
si0=1202809U;
si1=34U;
si2=1202976U;
f604(i,si0,si1,si2);
UNREACHABLE;
L263:;
si0=l18;
si1=l1;
si2=1191492U;
f593(i,si0,si1,si2);
UNREACHABLE;
L262:;
si0=1189451U;
si1=43U;
si2=1189760U;
f604(i,si0,si1,si2);
UNREACHABLE;
L261:;
si0=l21;
sj1=l17;
i64_store(&i->m0,(U64)si0,sj1);
L260:;
si0=l22;
sj0=i64_load(&i->m0,(U64)si0);
l14=sj0;
sj1=l20;
sj2=l13;
sj3=1ULL;
sj2&=sj3;
sj1+=sj2;
l17=sj1;
sj0-=sj1;
l13=sj0;
sj1=l14;
sj0^=sj1;
sj1=-1ULL;
si0=(U64)((I64)sj0>(I64)sj1);
if(si0){
goto L277;
}
sj0=0ULL;
sj1=l17;
sj0-=sj1;
l20=sj0;
sj1=-1ULL;
si0=(U64)((I64)sj0>(I64)sj1);
if(si0){
goto L278;
}
si0=l22;
sj1=l13;
i64_store(&i->m0,(U64)si0,sj1);
sj0=l14;
sj1=l17;
si0=sj0 >= sj1;
if(si0){
goto L1;
}
si0=l9;
si1=3U;
si0<<=(si1&31);
l11=si0;
si1=l3;
si2=3U;
si1<<=(si2&31);
si0+=si1;
si1=l1;
si2=3U;
si1<<=(si2&31);
l12=si1;
si0-=si1;
l9=si0;
si0=l2;
si1=l12;
si2=l11;
si1-=si2;
si0+=si1;
l11=si0;
L279:;
{
si0=l9;
si0=!(si0);
if(si0){
goto L1;
}
si0=l11;
si1=l11;
sj1=i64_load(&i->m0,(U64)si1);
l14=sj1;
sj2=-1ULL;
sj1+=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l9;
si1=-8U;
si0+=si1;
l9=si0;
si0=l11;
si1=8U;
si0+=si1;
l11=si0;
sj0=l14;
si0=!(sj0);
si0=!(si0);
if(si0){
goto L1;
}
goto L279;
}
L278:;
si0=l22;
sj1=l14;
sj2=l20;
sj1+=sj2;
l13=sj1;
i64_store(&i->m0,(U64)si0,sj1);
sj0=l13;
sj1=l14;
si0=sj0 >= sj1;
if(si0){
goto L1;
}
si0=l9;
si1=3U;
si0<<=(si1&31);
l11=si0;
si1=l3;
si2=3U;
si1<<=(si2&31);
si0+=si1;
si1=l1;
si2=3U;
si1<<=(si2&31);
l12=si1;
si0-=si1;
l9=si0;
si0=l2;
si1=l12;
si2=l11;
si1-=si2;
si0+=si1;
l11=si0;
L280:;
{
si0=l9;
si0=!(si0);
if(si0){
goto L1;
}
si0=l11;
si1=l11;
sj1=i64_load(&i->m0,(U64)si1);
sj2=1ULL;
sj1+=sj2;
l14=sj1;
i64_store(&i->m0,(U64)si0,sj1);
si0=l9;
si1=-8U;
si0+=si1;
l9=si0;
si0=l11;
si1=8U;
si0+=si1;
l11=si0;
sj0=l14;
si0=!(sj0);
si0=!(si0);
if(si0){
goto L1;
}
goto L280;
}
L277:;
si0=l22;
sj1=l13;
i64_store(&i->m0,(U64)si0,sj1);
goto L1;
L6:;
si0=1189451U;
si1=43U;
si2=1191284U;
f604(i,si0,si1,si2);
UNREACHABLE;
L5:;
si0=l6;
sj0=i64_load(&i->m0,(U64)si0);
l14=sj0;
si1=l25;
sj1=i64_load(&i->m0,(U64)si1);
l17=sj1;
sj2=l27;
sj1+=sj2;
l27=sj1;
sj0+=sj1;
l13=sj0;
sj1=l14;
sj0^=sj1;
sj1=-1ULL;
si0=(U64)((I64)sj0>(I64)sj1);
if(si0){
goto L282;
}
si0=l0;
si1=l1;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l12=si0;
sj0=l27;
sj1=-1ULL;
si0=(U64)((I64)sj0>(I64)sj1);
if(si0){
goto L283;
}
si0=l6;
sj1=l13;
i64_store(&i->m0,(U64)si0,sj1);
sj0=l14;
sj1=0ULL;
sj2=l27;
sj1-=sj2;
si0=sj0 >= sj1;
if(si0){
goto L281;
}
si0=0U;
si1=l8;
si2=3U;
si1<<=(si2&31);
si0-=si1;
l11=si0;
L284:;
{
si0=l11;
si0=!(si0);
if(si0){
goto L281;
}
si0=l12;
si1=l11;
si0+=si1;
l9=si0;
si1=l9;
sj1=i64_load(&i->m0,(U64)si1);
l14=sj1;
sj2=-1ULL;
sj1+=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l11;
si1=8U;
si0+=si1;
l11=si0;
sj0=l14;
si0=!(sj0);
if(si0){
goto L284;
}
goto L281;
}
L283:;
si0=l6;
sj1=l13;
i64_store(&i->m0,(U64)si0,sj1);
sj0=l13;
sj1=l14;
si0=sj0 >= sj1;
if(si0){
goto L281;
}
si0=0U;
si1=l8;
si2=3U;
si1<<=(si2&31);
si0-=si1;
l11=si0;
L285:;
{
si0=l11;
si0=!(si0);
if(si0){
goto L281;
}
si0=l12;
si1=l11;
si0+=si1;
l9=si0;
si1=l9;
sj1=i64_load(&i->m0,(U64)si1);
sj2=1ULL;
sj1+=sj2;
l14=sj1;
i64_store(&i->m0,(U64)si0,sj1);
si0=l11;
si1=8U;
si0+=si1;
l11=si0;
sj0=l14;
si0=!(sj0);
if(si0){
goto L285;
}
goto L281;
}
L282:;
si0=l6;
sj1=l13;
i64_store(&i->m0,(U64)si0,sj1);
L281:;
si0=l21;
sj0=i64_load(&i->m0,(U64)si0);
l14=sj0;
sj1=l17;
sj2=l20;
sj1-=sj2;
l17=sj1;
sj0+=sj1;
l13=sj0;
sj1=l14;
sj0^=sj1;
sj1=-1ULL;
si0=(U64)((I64)sj0>(I64)sj1);
if(si0){
goto L286;
}
sj0=l17;
sj1=-1ULL;
si0=(U64)((I64)sj0>(I64)sj1);
if(si0){
goto L287;
}
si0=l21;
sj1=l13;
i64_store(&i->m0,(U64)si0,sj1);
sj0=l14;
sj1=0ULL;
sj2=l17;
sj1-=sj2;
si0=sj0 >= sj1;
if(si0){
goto L1;
}
si0=l8;
si1=3U;
si0<<=(si1&31);
l11=si0;
si1=l3;
si2=3U;
si1<<=(si2&31);
si0+=si1;
si1=l1;
si2=3U;
si1<<=(si2&31);
l12=si1;
si0-=si1;
l9=si0;
si0=l2;
si1=l12;
si2=l11;
si1-=si2;
si0+=si1;
l11=si0;
L288:;
{
si0=l9;
si0=!(si0);
if(si0){
goto L1;
}
si0=l11;
si1=l11;
sj1=i64_load(&i->m0,(U64)si1);
l14=sj1;
sj2=-1ULL;
sj1+=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l9;
si1=-8U;
si0+=si1;
l9=si0;
si0=l11;
si1=8U;
si0+=si1;
l11=si0;
sj0=l14;
si0=!(sj0);
si0=!(si0);
if(si0){
goto L1;
}
goto L288;
}
L287:;
si0=l21;
sj1=l13;
i64_store(&i->m0,(U64)si0,sj1);
sj0=l13;
sj1=l14;
si0=sj0 >= sj1;
if(si0){
goto L1;
}
si0=l8;
si1=3U;
si0<<=(si1&31);
l11=si0;
si1=l3;
si2=3U;
si1<<=(si2&31);
si0+=si1;
si1=l1;
si2=3U;
si1<<=(si2&31);
l12=si1;
si0-=si1;
l9=si0;
si0=l2;
si1=l12;
si2=l11;
si1-=si2;
si0+=si1;
l11=si0;
L289:;
{
si0=l9;
si0=!(si0);
if(si0){
goto L1;
}
si0=l11;
si1=l11;
sj1=i64_load(&i->m0,(U64)si1);
sj2=1ULL;
sj1+=sj2;
l14=sj1;
i64_store(&i->m0,(U64)si0,sj1);
si0=l9;
si1=-8U;
si0+=si1;
l9=si0;
si0=l11;
si1=8U;
si0+=si1;
l11=si0;
sj0=l14;
si0=!(sj0);
si0=!(si0);
if(si0){
goto L1;
}
goto L289;
}
L286:;
si0=l21;
sj1=l13;
i64_store(&i->m0,(U64)si0,sj1);
goto L1;
L4:;
si0=1189451U;
si1=43U;
si2=1191156U;
f604(i,si0,si1,si2);
UNREACHABLE;
L3:;
si0=l23;
sj0=i64_load(&i->m0,(U64)si0);
l14=sj0;
sj1=l27;
sj2=l17;
sj1+=sj2;
l17=sj1;
sj0-=sj1;
l13=sj0;
sj1=l14;
sj0^=sj1;
sj1=-1ULL;
si0=(U64)((I64)sj0>(I64)sj1);
if(si0){
goto L290;
}
sj0=0ULL;
sj1=l17;
sj0-=sj1;
l20=sj0;
sj1=-1ULL;
si0=(U64)((I64)sj0>(I64)sj1);
if(si0){
goto L291;
}
si0=l23;
sj1=l13;
i64_store(&i->m0,(U64)si0,sj1);
sj0=l14;
sj1=l17;
si0=sj0 >= sj1;
if(si0){
goto L1;
}
si0=l9;
si1=3U;
si0<<=(si1&31);
l11=si0;
si1=l3;
si2=3U;
si1<<=(si2&31);
si0+=si1;
si1=l1;
si2=3U;
si1<<=(si2&31);
l12=si1;
si0-=si1;
l9=si0;
si0=l2;
si1=l12;
si2=l11;
si1-=si2;
si0+=si1;
l11=si0;
L292:;
{
si0=l9;
si0=!(si0);
if(si0){
goto L1;
}
si0=l11;
si1=l11;
sj1=i64_load(&i->m0,(U64)si1);
l14=sj1;
sj2=-1ULL;
sj1+=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l9;
si1=-8U;
si0+=si1;
l9=si0;
si0=l11;
si1=8U;
si0+=si1;
l11=si0;
sj0=l14;
si0=!(sj0);
si0=!(si0);
if(si0){
goto L1;
}
goto L292;
}
L291:;
si0=l23;
sj1=l14;
sj2=l20;
sj1+=sj2;
l13=sj1;
i64_store(&i->m0,(U64)si0,sj1);
sj0=l13;
sj1=l14;
si0=sj0 >= sj1;
if(si0){
goto L1;
}
si0=l9;
si1=3U;
si0<<=(si1&31);
l11=si0;
si1=l3;
si2=3U;
si1<<=(si2&31);
si0+=si1;
si1=l1;
si2=3U;
si1<<=(si2&31);
l12=si1;
si0-=si1;
l9=si0;
si0=l2;
si1=l12;
si2=l11;
si1-=si2;
si0+=si1;
l11=si0;
L293:;
{
si0=l9;
si0=!(si0);
if(si0){
goto L1;
}
si0=l11;
si1=l11;
sj1=i64_load(&i->m0,(U64)si1);
sj2=1ULL;
sj1+=sj2;
l14=sj1;
i64_store(&i->m0,(U64)si0,sj1);
si0=l9;
si1=-8U;
si0+=si1;
l9=si0;
si0=l11;
si1=8U;
si0+=si1;
l11=si0;
sj0=l14;
si0=!(sj0);
si0=!(si0);
if(si0){
goto L1;
}
goto L293;
}
L290:;
si0=l23;
sj1=l13;
i64_store(&i->m0,(U64)si0,sj1);
goto L1;
L2:;
si0=1189451U;
si1=43U;
si2=1191028U;
f604(i,si0,si1,si2);
UNREACHABLE;
L1:;
si0=l10;
si1=32U;
si0+=si1;
i->g0=si0;
L0:;
}

void f984(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4,U32 l5,U32 l6,U32 l7) {
U32 l8=0;
U32 l9=0;
U64 l10=0;
U32 l11=0;
U32 l12=0;
U32 l13=0;
U32 l14=0;
U64 l15=0;
U32 l16=0;
U32 l17=0;
U32 l18=0;
U32 l19=0;
U64 l20=0;
U32 l21=0;
U32 l22=0;
U64 l23=0;
U64 l24=0;
U32 si0,si1,si2,si3,si4;
U64 sj0,sj1,sj2,sj3,sj4;
si0=i->g0;
si1=32U;
si0-=si1;
l8=si0;
i->g0=si0;
si0=l4;
si1=6U;
si0>>=(si1&31);
l9=si0;
si0=l4;
si1=63U;
si0&=si1;
l4=si0;
if(si0){
goto L18;
}
si0=l3;
if(si0){
goto L17;
}
si0=1189451U;
si1=43U;
si2=1191828U;
f604(i,si0,si1,si2);
UNREACHABLE;
L18:;
si0=l4;
sj0=(U64)(si0);
l10=sj0;
si0=l5;
si1=1U;
si0+=si1;
l11=si0;
si0=l2;
si1=l3;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l12=si0;
si0=l5;
si1=l7;
si0=si0 < si1;
l13=si0;
if(si0){
goto L16;
}
si0=l9;
si1=3U;
si0<<=(si1&31);
l14=si0;
sj0=0ULL;
l15=sj0;
L19:;
{
si0=l2;
si1=l12;
si0=si0 == si1;
if(si0){
goto L6;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0+4U);
l4=si0;
si1=l5;
si0=si0 <= si1;
if(si0){
goto L15;
}
si0=l1;
si1=l5;
si0=si0 <= si1;
if(si0){
goto L9;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0);
l16=si0;
sj0=l15;
si0=!(sj0);
si0=!(si0);
if(si0){
goto L11;
}
si0=l2;
si1=8U;
si0+=si1;
l2=si0;
si0=0U;
l4=si0;
si0=l11;
l17=si0;
si0=0U;
l18=si0;
L20:;
{
si0=l0;
si1=l4;
si0+=si1;
l19=si0;
sj0=i64_load(&i->m0,(U64)si0);
l20=sj0;
si1=l16;
si2=l4;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
sj0+=sj1;
l15=sj0;
sj1=l20;
si0=sj0 < sj1;
l21=si0;
si0=l18;
si1=255U;
si0&=si1;
if(si0){
goto L22;
}
si0=l21;
l18=si0;
goto L21;
L22:;
si0=l21;
sj1=l15;
sj2=1ULL;
sj1+=sj2;
l15=sj1;
si1=!(sj1);
si0|=si1;
l18=si0;
L21:;
si0=l19;
sj1=l15;
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=8U;
si0+=si1;
l4=si0;
si0=l17;
si1=-1U;
si0+=si1;
l17=si0;
if(si0){
goto L20;
}
}
si0=l1;
si1=l9;
si0=si0 < si1;
if(si0){
goto L10;
}
si0=l0;
si1=l14;
si0+=si1;
l0=si0;
sj0=l10;
l15=sj0;
si0=l1;
si1=l9;
si0-=si1;
l1=si0;
si1=l11;
si0=si0 > si1;
if(si0){
goto L19;
}
}
sj0=l10;
l20=sj0;
si0=l1;
l14=si0;
goto L7;
L17:;
si0=l2;
si1=l3;
si2=-1U;
si1+=si2;
l4=si1;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l6=si0;
si0=l4;
si0=!(si0);
if(si0){
goto L8;
}
si0=l5;
if(si0){
goto L23;
}
si0=l9;
si1=3U;
si0<<=(si1&31);
l17=si0;
si0=l3;
si1=3U;
si0<<=(si1&31);
si1=-8U;
si0+=si1;
l4=si0;
L24:;
{
si0=l1;
si1=l9;
si0=si0 < si1;
if(si0){
goto L14;
}
si0=l0;
si1=l17;
si0+=si1;
l0=si0;
si0=l1;
si1=l9;
si0-=si1;
l1=si0;
si0=l4;
si1=-8U;
si0+=si1;
l4=si0;
if(si0){
goto L24;
}
goto L8;
}
L23:;
si0=l9;
si1=3U;
si0<<=(si1&31);
l12=si0;
si0=l1;
si1=3U;
si0<<=(si1&31);
l14=si0;
si0=l5;
si1=3U;
si0<<=(si1&31);
l7=si0;
si1=8U;
si0+=si1;
l22=si0;
L25:;
{
si0=l2;
si0=i32_load(&i->m0,(U64)si0+4U);
l4=si0;
si1=l5;
si0=si0 < si1;
if(si0){
goto L12;
}
si0=l1;
si1=l5;
si0=si0 < si1;
if(si0){
goto L13;
}
si0=l2;
si1=8U;
si0+=si1;
l11=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0);
l16=si0;
si0=0U;
l4=si0;
si0=l5;
l18=si0;
si0=0U;
l17=si0;
L26:;
{
si0=l0;
si1=l4;
si0+=si1;
l19=si0;
sj0=i64_load(&i->m0,(U64)si0);
l20=sj0;
si1=l16;
si2=l4;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
sj0+=sj1;
l15=sj0;
sj1=l20;
si0=sj0 < sj1;
l21=si0;
si0=l17;
si1=255U;
si0&=si1;
if(si0){
goto L28;
}
si0=l21;
l17=si0;
goto L27;
L28:;
si0=l21;
sj1=l15;
sj2=1ULL;
sj1+=sj2;
l15=sj1;
si1=!(sj1);
si0|=si1;
l17=si0;
L27:;
si0=l19;
sj1=l15;
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=8U;
si0+=si1;
l4=si0;
si0=l18;
si1=-1U;
si0+=si1;
l18=si0;
if(si0){
goto L26;
}
}
si0=l1;
si1=l5;
si0=si0 == si1;
si1=l17;
si2=1U;
si1^=si2;
si0|=si1;
if(si0){
goto L29;
}
si0=l0;
si1=l7;
si0+=si1;
l4=si0;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1);
sj2=1ULL;
sj1+=sj2;
l15=sj1;
i64_store(&i->m0,(U64)si0,sj1);
sj0=l15;
sj1=0ULL;
si0=sj0 != sj1;
if(si0){
goto L29;
}
si0=l22;
l4=si0;
L30:;
{
si0=l14;
si1=l4;
si0=si0 == si1;
if(si0){
goto L29;
}
si0=l0;
si1=l4;
si0+=si1;
l17=si0;
si1=l17;
sj1=i64_load(&i->m0,(U64)si1);
sj2=1ULL;
sj1+=sj2;
l15=sj1;
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=8U;
si0+=si1;
l4=si0;
sj0=l15;
si0=!(sj0);
if(si0){
goto L30;
}
}
L29:;
si0=l1;
si1=l9;
si0=si0 < si1;
if(si0){
goto L14;
}
si0=l14;
si1=l12;
si0-=si1;
l14=si0;
si0=l0;
si1=l12;
si0+=si1;
l0=si0;
si0=l1;
si1=l9;
si0-=si1;
l1=si0;
si0=l11;
l2=si0;
si0=l11;
si1=l6;
si0=si0 == si1;
if(si0){
goto L8;
}
goto L25;
}
L16:;
si0=l11;
si1=-2U;
si0&=si1;
l16=si0;
si0=l11;
si1=1U;
si0&=si1;
l22=si0;
si0=l9;
si1=3U;
si0<<=(si1&31);
l3=si0;
sj0=0ULL;
l20=sj0;
si0=l1;
l14=si0;
L31:;
{
si0=l2;
si1=l12;
si0=si0 == si1;
if(si0){
goto L6;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0+4U);
l4=si0;
si1=l5;
si0=si0 <= si1;
if(si0){
goto L15;
}
si0=l14;
si1=l5;
si0=si0 > si1;
if(si0){
goto L32;
}
si0=l14;
l1=si0;
goto L9;
L32:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0);
l18=si0;
sj0=l20;
sj1=0ULL;
si0=sj0 != sj1;
if(si0){
goto L34;
}
si0=0U;
l17=si0;
si0=l0;
l4=si0;
si0=l11;
l19=si0;
L35:;
{
si0=l4;
sj0=i64_load(&i->m0,(U64)si0);
l23=sj0;
si1=l18;
sj1=i64_load(&i->m0,(U64)si1);
sj0+=sj1;
l15=sj0;
sj1=l23;
si0=sj0 < sj1;
l21=si0;
si0=l17;
si1=255U;
si0&=si1;
if(si0){
goto L37;
}
si0=l21;
l17=si0;
goto L36;
L37:;
si0=l21;
sj1=l15;
sj2=1ULL;
sj1+=sj2;
l15=sj1;
si1=!(sj1);
si0|=si1;
l17=si0;
L36:;
si0=l4;
sj1=l15;
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=8U;
si0+=si1;
l4=si0;
si0=l18;
si1=8U;
si0+=si1;
l18=si0;
si0=l19;
si1=-1U;
si0+=si1;
l19=si0;
if(si0){
goto L35;
}
goto L33;
}
L34:;
sj0=l20;
sj1=63ULL;
si0=sj0 > sj1;
if(si0){
goto L40;
}
sj0=0ULL;
l15=sj0;
si0=l5;
if(si0){
goto L39;
}
si0=0U;
l19=si0;
goto L38;
L40:;
si0=1200324U;
si1=36U;
si2=1200360U;
f604(i,si0,si1,si2);
UNREACHABLE;
L39:;
sj0=0ULL;
sj1=l20;
sj0-=sj1;
sj1=63ULL;
sj0&=sj1;
l23=sj0;
si0=0U;
l19=si0;
sj0=0ULL;
l15=sj0;
si0=l18;
l4=si0;
si0=l6;
l17=si0;
L41:;
{
si0=l17;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1);
l24=sj1;
sj2=l20;
sj1<<=(sj2&63);
sj2=l15;
sj1|=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l17;
si1=8U;
si0+=si1;
si1=l4;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
l15=sj1;
sj2=l20;
sj1<<=(sj2&63);
sj2=l24;
sj3=l23;
sj2>>=(sj3&63);
sj1|=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=16U;
si0+=si1;
l4=si0;
si0=l17;
si1=16U;
si0+=si1;
l17=si0;
sj0=l15;
sj1=l23;
sj0>>=(sj1&63);
l15=sj0;
si0=l16;
si1=l19;
si2=2U;
si1+=si2;
l19=si1;
si0=si0 != si1;
if(si0){
goto L41;
}
}
L38:;
si0=l22;
si0=!(si0);
if(si0){
goto L42;
}
si0=l6;
si1=l19;
si2=3U;
si1<<=(si2&31);
l4=si1;
si0+=si1;
si1=l18;
si2=l4;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
sj2=l20;
sj1<<=(sj2&63);
sj2=l15;
sj1|=sj2;
i64_store(&i->m0,(U64)si0,sj1);
L42:;
si0=0U;
l18=si0;
si0=l0;
l4=si0;
si0=l6;
l17=si0;
si0=l11;
l19=si0;
L43:;
{
si0=l4;
sj0=i64_load(&i->m0,(U64)si0);
l23=sj0;
si1=l17;
sj1=i64_load(&i->m0,(U64)si1);
sj0+=sj1;
l15=sj0;
sj1=l23;
si0=sj0 < sj1;
l21=si0;
si0=l18;
si1=255U;
si0&=si1;
if(si0){
goto L45;
}
si0=l21;
l18=si0;
goto L44;
L45:;
si0=l21;
sj1=l15;
sj2=1ULL;
sj1+=sj2;
l15=sj1;
si1=!(sj1);
si0|=si1;
l18=si0;
L44:;
si0=l4;
sj1=l15;
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=8U;
si0+=si1;
l4=si0;
si0=l17;
si1=8U;
si0+=si1;
l17=si0;
si0=l19;
si1=-1U;
si0+=si1;
l19=si0;
if(si0){
goto L43;
}
}
L33:;
si0=l14;
si1=l9;
si0=si0 >= si1;
if(si0){
goto L46;
}
si0=l14;
l1=si0;
goto L10;
L46:;
si0=l1;
si1=l9;
si0-=si1;
l1=si0;
si0=l14;
si1=l9;
si0-=si1;
l14=si0;
si0=l0;
si1=l3;
si0+=si1;
l0=si0;
sj0=l20;
sj1=l10;
sj0+=sj1;
l20=sj0;
sj1=63ULL;
si0=sj0 <= sj1;
if(si0){
goto L47;
}
si0=l14;
si0=!(si0);
if(si0){
goto L48;
}
sj0=l20;
sj1=-64ULL;
sj0+=sj1;
l20=sj0;
si0=l0;
si1=8U;
si0+=si1;
l0=si0;
si0=l14;
si1=-1U;
si0+=si1;
l14=si0;
si0=l1;
si1=-1U;
si0+=si1;
l1=si0;
goto L47;
L48:;
si0=1U;
si1=0U;
si2=1191940U;
f593(i,si0,si1,si2);
UNREACHABLE;
L47:;
si0=l2;
si1=8U;
si0+=si1;
l2=si0;
si0=l1;
si1=l11;
si0=si0 <= si1;
if(si0){
goto L7;
}
goto L31;
}
L15:;
si0=l11;
si1=l4;
si2=1191876U;
f597(i,si0,si1,si2);
UNREACHABLE;
L14:;
si0=l9;
si1=l1;
si2=1191860U;
f593(i,si0,si1,si2);
UNREACHABLE;
L13:;
si0=1201588U;
si1=35U;
si2=1203200U;
f604(i,si0,si1,si2);
UNREACHABLE;
L12:;
si0=l5;
si1=l4;
si2=1191844U;
f597(i,si0,si1,si2);
UNREACHABLE;
L11:;
si0=l6;
si1=l7;
si2=l16;
si3=l11;
sj4=l15;
sj0=f1021(i,si0,si1,si2,si3,sj4);
si0=l11;
si1=l7;
si2=1191908U;
f597(i,si0,si1,si2);
UNREACHABLE;
L10:;
si0=l9;
si1=l1;
si2=1191924U;
f593(i,si0,si1,si2);
UNREACHABLE;
L9:;
si0=l11;
si1=l1;
si2=1191892U;
f597(i,si0,si1,si2);
UNREACHABLE;
L8:;
si0=l6;
si1=0U;
si2=l3;
si0=si2?si0:si1;
l4=si0;
si0=i32_load(&i->m0,(U64)si0+4U);
l16=si0;
si1=l1;
si0=si0 > si1;
if(si0){
goto L49;
}
si0=l16;
si0=!(si0);
if(si0){
goto L6;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
l17=si0;
si0=l0;
si1=l16;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l2=si0;
si0=0U;
l18=si0;
si0=l16;
l19=si0;
si0=l0;
l4=si0;
L50:;
{
si0=l4;
sj0=i64_load(&i->m0,(U64)si0);
l20=sj0;
si1=l17;
sj1=i64_load(&i->m0,(U64)si1);
sj0+=sj1;
l15=sj0;
sj1=l20;
si0=sj0 < sj1;
l21=si0;
si0=l18;
si1=255U;
si0&=si1;
if(si0){
goto L52;
}
si0=l21;
l18=si0;
goto L51;
L52:;
si0=l21;
sj1=l15;
sj2=1ULL;
sj1+=sj2;
l15=sj1;
si1=!(sj1);
si0|=si1;
l18=si0;
L51:;
si0=l4;
sj1=l15;
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=8U;
si0+=si1;
l4=si0;
si0=l17;
si1=8U;
si0+=si1;
l17=si0;
si0=l19;
si1=-1U;
si0+=si1;
l19=si0;
if(si0){
goto L50;
}
}
si0=l1;
si1=l16;
si0=si0 == si1;
si1=l18;
si2=1U;
si1^=si2;
si0|=si1;
if(si0){
goto L6;
}
si0=l2;
si1=l2;
sj1=i64_load(&i->m0,(U64)si1);
sj2=1ULL;
sj1+=sj2;
l15=sj1;
i64_store(&i->m0,(U64)si0,sj1);
sj0=l15;
sj1=0ULL;
si0=sj0 != sj1;
if(si0){
goto L6;
}
si0=l1;
si1=3U;
si0<<=(si1&31);
si1=l16;
si2=3U;
si1<<=(si2&31);
l4=si1;
si0-=si1;
si1=-8U;
si0+=si1;
l17=si0;
si0=l4;
si1=l0;
si0+=si1;
si1=8U;
si0+=si1;
l4=si0;
L53:;
{
si0=l17;
si0=!(si0);
if(si0){
goto L6;
}
si0=l4;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1);
sj2=1ULL;
sj1+=sj2;
l15=sj1;
i64_store(&i->m0,(U64)si0,sj1);
si0=l17;
si1=-8U;
si0+=si1;
l17=si0;
si0=l4;
si1=8U;
si0+=si1;
l4=si0;
sj0=l15;
si0=!(sj0);
if(si0){
goto L53;
}
goto L6;
}
L49:;
si0=1201588U;
si1=35U;
si2=1203200U;
f604(i,si0,si1,si2);
UNREACHABLE;
L7:;
si0=l2;
si1=l12;
si0=si0 == si1;
if(si0){
goto L6;
}
si0=l11;
si1=-2U;
si0&=si1;
l16=si0;
si0=l11;
si1=1U;
si0&=si1;
l3=si0;
L54:;
{
sj0=l20;
sj1=0ULL;
si0=sj0 != sj1;
if(si0){
goto L56;
}
si0=l1;
si1=l2;
si1=i32_load(&i->m0,(U64)si1+4U);
l4=si1;
si0=si0 > si1;
if(si0){
goto L5;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0);
l17=si0;
goto L55;
L56:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+4U);
l4=si0;
si1=l5;
si0=si0 <= si1;
if(si0){
goto L4;
}
sj0=l20;
sj1=63ULL;
si0=sj0 > sj1;
if(si0){
goto L59;
}
si0=l13;
si0=!(si0);
if(si0){
goto L3;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0);
l19=si0;
sj0=0ULL;
l15=sj0;
si0=l5;
if(si0){
goto L58;
}
si0=0U;
l18=si0;
goto L57;
L59:;
si0=1200324U;
si1=36U;
si2=1200360U;
f604(i,si0,si1,si2);
UNREACHABLE;
L58:;
sj0=0ULL;
sj1=l20;
sj0-=sj1;
sj1=63ULL;
sj0&=sj1;
l23=sj0;
si0=0U;
l18=si0;
sj0=0ULL;
l15=sj0;
si0=l19;
l4=si0;
si0=l6;
l17=si0;
L60:;
{
si0=l17;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1);
l24=sj1;
sj2=l20;
sj1<<=(sj2&63);
sj2=l15;
sj1|=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l17;
si1=8U;
si0+=si1;
si1=l4;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
l15=sj1;
sj2=l20;
sj1<<=(sj2&63);
sj2=l24;
sj3=l23;
sj2>>=(sj3&63);
sj1|=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=16U;
si0+=si1;
l4=si0;
si0=l17;
si1=16U;
si0+=si1;
l17=si0;
sj0=l15;
sj1=l23;
sj0>>=(sj1&63);
l15=sj0;
si0=l16;
si1=l18;
si2=2U;
si1+=si2;
l18=si1;
si0=si0 != si1;
if(si0){
goto L60;
}
}
L57:;
si0=l3;
si0=!(si0);
if(si0){
goto L61;
}
si0=l6;
si1=l18;
si2=3U;
si1<<=(si2&31);
l4=si1;
si0+=si1;
si1=l19;
si2=l4;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
sj2=l20;
sj1<<=(sj2&63);
sj2=l15;
sj1|=sj2;
i64_store(&i->m0,(U64)si0,sj1);
L61:;
si0=l6;
l17=si0;
si0=l1;
si1=l7;
si0=si0 > si1;
if(si0){
goto L2;
}
L55:;
si0=l8;
si1=l14;
i32_store(&i->m0,(U64)si0,si1);
si0=l8;
si1=l1;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l14;
si1=l1;
si0=si0 != si1;
if(si0){
goto L1;
}
si0=l14;
si0=!(si0);
if(si0){
goto L62;
}
si0=0U;
l18=si0;
si0=l14;
l19=si0;
si0=l0;
l4=si0;
L63:;
{
si0=l4;
sj0=i64_load(&i->m0,(U64)si0);
l23=sj0;
si1=l17;
sj1=i64_load(&i->m0,(U64)si1);
sj0+=sj1;
l15=sj0;
sj1=l23;
si0=sj0 < sj1;
l21=si0;
si0=l18;
si1=255U;
si0&=si1;
if(si0){
goto L65;
}
si0=l21;
l18=si0;
goto L64;
L65:;
si0=l21;
sj1=l15;
sj2=1ULL;
sj1+=sj2;
l15=sj1;
si1=!(sj1);
si0|=si1;
l18=si0;
L64:;
si0=l4;
sj1=l15;
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=8U;
si0+=si1;
l4=si0;
si0=l17;
si1=8U;
si0+=si1;
l17=si0;
si0=l19;
si1=-1U;
si0+=si1;
l19=si0;
if(si0){
goto L63;
}
}
L62:;
si0=l14;
si1=l9;
si0=si0 <= si1;
if(si0){
goto L6;
}
sj0=l20;
sj1=l10;
sj0+=sj1;
l15=sj0;
sj1=-64ULL;
sj0+=sj1;
sj1=l15;
sj2=l15;
sj3=63ULL;
si2=sj2 > sj3;
l4=si2;
sj0=si2?sj0:sj1;
l20=sj0;
si0=l0;
si1=l9;
si2=3U;
si1<<=(si2&31);
si0+=si1;
si1=l4;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l0=si0;
si0=l14;
si1=l9;
si0-=si1;
si1=l4;
si0-=si1;
l14=si0;
l1=si0;
si0=l2;
si1=8U;
si0+=si1;
l2=si0;
si1=l12;
si0=si0 != si1;
if(si0){
goto L54;
}
}
L6:;
si0=l8;
si1=32U;
si0+=si1;
i->g0=si0;
goto L0;
L5:;
si0=l1;
si1=l4;
si2=1191956U;
f597(i,si0,si1,si2);
UNREACHABLE;
L4:;
si0=l11;
si1=l4;
si2=1191972U;
f597(i,si0,si1,si2);
UNREACHABLE;
L3:;
si0=l11;
si1=l7;
si2=1200308U;
f597(i,si0,si1,si2);
UNREACHABLE;
L2:;
si0=l1;
si1=l7;
si2=1191988U;
f597(i,si0,si1,si2);
UNREACHABLE;
L1:;
si0=l8;
si1=0U;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=0U;
si1=l8;
si2=l8;
si3=4U;
si2+=si3;
si3=l8;
si4=8U;
si3+=si4;
si4=1203184U;
f1250(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L0:;
}

U32 f985(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4) {
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
U64 l18=0;
U64 l19=0;
U32 si0,si1,si2,si3;
U64 sj0,sj1,sj2,sj3,sj4;
si0=l4;
si0=!(si0);
if(si0){
goto L11;
}
si0=l4;
si1=6U;
si0>>=(si1&31);
l5=si0;
si0=l3;
si1=6U;
si0<<=(si1&31);
si1=-1U;
si0+=si1;
l6=si0;
si1=l4;
si0=DIV_U(si0,si1);
l7=si0;
si0=l4;
si1=63U;
si0&=si1;
l8=si0;
if(si0){
goto L7;
}
si0=l4;
si1=64U;
si0=si0 < si1;
if(si0){
goto L8;
}
si0=l1;
si1=3U;
si0<<=(si1&31);
l9=si0;
si0=l3;
si1=l3;
si2=l5;
si1=DIV_U(si1,si2);
l10=si1;
si2=l5;
si1*=si2;
l11=si1;
si0-=si1;
l12=si0;
si0=l3;
si1=-1U;
si0+=si1;
si1=l5;
si0=DIV_U(si0,si1);
si1=1U;
si0+=si1;
l13=si0;
si0=l0;
l4=si0;
si0=l1;
si0=!(si0);
if(si0){
goto L6;
}
si0=l5;
si1=3U;
si0<<=(si1&31);
l6=si0;
si0=l9;
l3=si0;
si0=l2;
l7=si0;
si0=l11;
l4=si0;
si0=l0;
l1=si0;
L12:;
{
si0=l4;
si1=l5;
si0=si0 >= si1;
if(si0){
goto L13;
}
si0=l1;
si1=8U;
si0+=si1;
l4=si0;
goto L6;
L13:;
si0=l1;
si1=4U;
si0+=si1;
l14=si0;
si0=i32_load(&i->m0,(U64)si0);
l8=si0;
si1=l5;
si0=si0 < si1;
if(si0){
goto L10;
}
si0=l8;
si1=l5;
si0=si0 == si1;
if(si0){
goto L14;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
si1=l6;
si0+=si1;
si1=0U;
si2=l8;
si3=l5;
si2-=si3;
si3=3U;
si2<<=(si3&31);
si0=f15145(i,si0,si1,si2);
si0=l5;
si1=l14;
si1=i32_load(&i->m0,(U64)si1);
l8=si1;
si0=si0 > si1;
if(si0){
goto L9;
}
L14:;
si0=l4;
si1=l5;
si0-=si1;
l4=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
si1=l7;
si2=l6;
si0=f15143(i,si0,si1,si2);
si0=l7;
si1=l6;
si0+=si1;
l7=si0;
si0=l1;
si1=8U;
si0+=si1;
l1=si0;
si0=l3;
si1=-8U;
si0+=si1;
l3=si0;
if(si0){
goto L12;
}
goto L5;
}
L11:;
si0=1192032U;
si1=25U;
si2=1192004U;
f604(i,si0,si1,si2);
UNREACHABLE;
L10:;
si0=l5;
si1=l8;
si2=1192124U;
f593(i,si0,si1,si2);
UNREACHABLE;
L9:;
si0=l5;
si1=l8;
si2=1192140U;
f597(i,si0,si1,si2);
UNREACHABLE;
L8:;
si0=1192032U;
si1=25U;
si2=1192060U;
f604(i,si0,si1,si2);
UNREACHABLE;
L7:;
si0=l7;
si1=1U;
si0+=si1;
l13=si0;
si1=l1;
si0=si0 > si1;
if(si0){
goto L20;
}
si0=l13;
if(si0){
goto L21;
}
si0=1189451U;
si1=43U;
si2=1192172U;
f604(i,si0,si1,si2);
UNREACHABLE;
L21:;
si0=l0;
si1=l7;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l14=si0;
sj0=0ULL;
l15=sj0;
si0=0U;
l1=si0;
si0=l6;
si1=l4;
si0=si0 < si1;
if(si0){
goto L18;
}
sj0=-1ULL;
si1=l8;
sj1=(U64)(si1);
l16=sj1;
sj0<<=(sj1&63);
sj1=-1ULL;
sj0^=sj1;
l17=sj0;
si0=l5;
si1=1U;
si0+=si1;
l12=si0;
si1=3U;
si0<<=(si1&31);
l9=si0;
sj0=0ULL;
l18=sj0;
si0=l3;
l4=si0;
sj0=0ULL;
l15=sj0;
si0=0U;
l1=si0;
L22:;
{
si0=l0;
si1=4U;
si0+=si1;
l7=si0;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si0=!(si0);
if(si0){
goto L23;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
si1=0U;
si2=l6;
si3=3U;
si2<<=(si3&31);
si0=f15145(i,si0,si1,si2);
L23:;
si0=l1;
sj1=l15;
sj2=6ULL;
sj1>>=(sj2&63);
si1=(U32)(sj1);
l6=si1;
si0+=si1;
l8=si0;
si1=l3;
si0=si0 > si1;
if(si0){
goto L33;
}
si0=l4;
si1=l6;
si0-=si1;
l6=si0;
si0=l2;
si1=l8;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l8=si0;
sj0=l15;
sj1=63ULL;
sj0&=sj1;
l19=sj0;
si0=!(sj0);
si0=!(si0);
if(si0){
goto L32;
}
si0=l5;
si1=l7;
si1=i32_load(&i->m0,(U64)si1);
l10=si1;
si0=si0 >= si1;
if(si0){
goto L27;
}
si0=l5;
si1=l6;
si0=si0 >= si1;
if(si0){
goto L26;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
si1=l8;
si2=l9;
si0=f15143(i,si0,si1,si2);
si0=l5;
si1=l7;
si1=i32_load(&i->m0,(U64)si1);
l7=si1;
si0=si0 >= si1;
if(si0){
goto L31;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
si1=l5;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l7=si0;
goto L29;
L33:;
sj0=l15;
sj1=6ULL;
sj0>>=(sj1&63);
si0=(U32)(sj0);
si1=l1;
si0+=si1;
si1=l3;
si2=1192316U;
f593(i,si0,si1,si2);
UNREACHABLE;
L32:;
si0=l5;
si1=l6;
si0=si0 >= si1;
if(si0){
goto L25;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
si1=l7;
si1=i32_load(&i->m0,(U64)si1);
l7=si1;
si2=l8;
si3=l12;
sj4=l19;
sj0=f1032(i,si0,si1,si2,si3,sj4);
si0=l5;
si1=l7;
si0=si0 < si1;
if(si0){
goto L30;
}
si0=l12;
si1=l7;
si2=1192284U;
f597(i,si0,si1,si2);
UNREACHABLE;
L31:;
si0=l5;
si1=l7;
si2=1192252U;
f594(i,si0,si1,si2);
UNREACHABLE;
L30:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
si1=l5;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l7=si0;
sj0=l19;
sj1=l16;
sj0+=sj1;
sj1=63ULL;
si0=sj0 > sj1;
if(si0){
goto L28;
}
L29:;
si0=l7;
sj0=i64_load(&i->m0,(U64)si0);
l19=sj0;
goto L24;
L28:;
si0=l12;
si1=l6;
si0=si0 >= si1;
if(si0){
goto L34;
}
si0=l7;
sj0=i64_load(&i->m0,(U64)si0);
si1=l8;
si2=l9;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
sj2=l18;
sj1<<=(sj2&63);
sj0+=sj1;
l19=sj0;
goto L24;
L34:;
si0=l12;
si1=l4;
sj2=l15;
sj3=6ULL;
sj2>>=(sj3&63);
si2=(U32)(sj2);
si1-=si2;
si2=1192300U;
f594(i,si0,si1,si2);
UNREACHABLE;
L27:;
si0=l12;
si1=l10;
si2=1192220U;
f597(i,si0,si1,si2);
UNREACHABLE;
L26:;
si0=l12;
si1=l4;
sj2=l15;
sj3=6ULL;
sj2>>=(sj3&63);
si2=(U32)(sj2);
si1-=si2;
si2=1192236U;
f597(i,si0,si1,si2);
UNREACHABLE;
L25:;
si0=l12;
si1=l4;
sj2=l15;
sj3=6ULL;
sj2>>=(sj3&63);
si2=(U32)(sj2);
si1-=si2;
si2=1192268U;
f597(i,si0,si1,si2);
UNREACHABLE;
L24:;
si0=l7;
sj1=l19;
sj2=l17;
sj1&=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=l5;
si0-=si1;
l4=si0;
sj0=l18;
sj1=l16;
sj0-=sj1;
l18=sj0;
sj0=l15;
sj1=l16;
sj0+=sj1;
l15=sj0;
si0=l1;
si1=l5;
si0+=si1;
l1=si0;
si0=l0;
si1=8U;
si0+=si1;
l0=si0;
si1=l14;
si0=si0 == si1;
if(si0){
goto L19;
}
goto L22;
}
L20:;
si0=l13;
si1=l1;
si2=1192156U;
f597(i,si0,si1,si2);
UNREACHABLE;
L19:;
sj0=l15;
sj1=274877906944ULL;
si0=sj0 >= sj1;
if(si0){
goto L17;
}
L18:;
si0=l3;
si1=l1;
sj2=l15;
sj3=6ULL;
sj2>>=(sj3&63);
si2=(U32)(sj2);
si1+=si2;
l0=si1;
si0=si0 < si1;
if(si0){
goto L16;
}
sj0=l15;
sj1=63ULL;
sj0&=sj1;
l15=sj0;
si0=l0;
si1=3U;
si0<<=(si1&31);
l1=si0;
si0=l14;
si1=0U;
si2=l13;
si0=si2?si0:si1;
l5=si0;
si0=i32_load(&i->m0,(U64)si0+4U);
l4=si0;
si0=!(si0);
if(si0){
goto L35;
}
si0=l5;
si0=i32_load(&i->m0,(U64)si0);
si1=0U;
si2=l4;
si3=3U;
si2<<=(si3&31);
si0=f15145(i,si0,si1,si2);
L35:;
si0=l3;
si1=l0;
si0-=si1;
l0=si0;
si0=l2;
si1=l1;
si0+=si1;
l1=si0;
sj0=l15;
si0=!(sj0);
si0=!(si0);
if(si0){
goto L36;
}
si0=l0;
si1=l5;
si1=i32_load(&i->m0,(U64)si1+4U);
l4=si1;
si0=si0 > si1;
if(si0){
goto L15;
}
si0=l5;
si0=i32_load(&i->m0,(U64)si0);
si1=l1;
si2=l0;
si3=3U;
si2<<=(si3&31);
si0=f15143(i,si0,si1,si2);
si0=l13;
goto L0;
L36:;
si0=l5;
si0=i32_load(&i->m0,(U64)si0);
si1=l5;
si1=i32_load(&i->m0,(U64)si1+4U);
si2=l1;
si3=l0;
sj4=l15;
sj0=f1032(i,si0,si1,si2,si3,sj4);
goto L2;
L17:;
si0=1189451U;
si1=43U;
si2=1189616U;
f604(i,si0,si1,si2);
UNREACHABLE;
L16:;
si0=l0;
si1=l3;
si2=1192204U;
f593(i,si0,si1,si2);
UNREACHABLE;
L15:;
si0=l0;
si1=l4;
si2=1192188U;
f597(i,si0,si1,si2);
UNREACHABLE;
L6:;
si0=l4;
si1=l0;
si2=l9;
si1+=si2;
si0=si0 == si1;
if(si0){
goto L5;
}
si0=l10;
si1=l13;
si0=si0 < si1;
if(si0){
goto L4;
}
goto L3;
L5:;
si0=l10;
si1=l13;
si0=si0 < si1;
if(si0){
goto L37;
}
si0=l12;
si0=!(si0);
if(si0){
goto L2;
}
si0=1189451U;
si1=43U;
si2=1192092U;
f604(i,si0,si1,si2);
UNREACHABLE;
L37:;
si0=1189451U;
si1=43U;
si2=1192076U;
f604(i,si0,si1,si2);
UNREACHABLE;
L4:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+4U);
l5=si0;
si0=!(si0);
if(si0){
goto L3;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
si1=0U;
si2=l5;
si3=3U;
si2<<=(si3&31);
si0=f15145(i,si0,si1,si2);
L3:;
si0=l12;
si0=!(si0);
if(si0){
goto L2;
}
si0=l12;
si1=l4;
si1=i32_load(&i->m0,(U64)si1+4U);
l5=si1;
si0=si0 > si1;
if(si0){
goto L1;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
si1=l2;
si2=l11;
si3=3U;
si2<<=(si3&31);
si1+=si2;
si2=l12;
si3=3U;
si2<<=(si3&31);
si0=f15143(i,si0,si1,si2);
si0=l13;
goto L0;
L2:;
si0=l13;
goto L0;
L1:;
si0=l12;
si1=l5;
si2=1192108U;
f597(i,si0,si1,si2);
UNREACHABLE;
L0:;
return si0;
}

void f986(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4) {
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
U64 l21=0;
U64 l22=0;
U64 l23=0;
U64 l24=0;
U64 l25=0;
U32 si0,si1,si2,si3,si4,si5,si6,si7,si8,si9,si10;
U64 sj0,sj1,sj2,sj3;
si0=i->g0;
si1=32U;
si0-=si1;
l5=si0;
i->g0=si0;
si0=l0;
si1=l1;
si2=1U;
si1>>=(si2&31);
l6=si1;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l7=si0;
si0=l6;
si1=1U;
si0=si0 != si1;
if(si0){
goto L2;
}
si0=l0;
l8=si0;
si0=l1;
l9=si0;
goto L1;
L2:;
si0=l1;
si1=l6;
si0-=si1;
l10=si0;
L3:;
{
si0=l10;
l9=si0;
si0=l7;
l8=si0;
si1=l0;
si0-=si1;
si1=3U;
si0>>=(si1&31);
l7=si0;
si1=l0;
si2=l1;
si3=3U;
si2<<=(si3&31);
si1+=si2;
si2=l8;
si1-=si2;
si2=3U;
si1>>=(si2&31);
l1=si1;
si2=l7;
si3=l1;
si2=si2 < si3;
si0=si2?si0:si1;
l11=si0;
si0=!(si0);
if(si0){
goto L4;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0+4U);
l7=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+4U);
l12=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
l13=si0;
si0=0U;
l14=si0;
L5:;
{
si0=l8;
si1=l14;
si2=3U;
si1<<=(si2&31);
l10=si1;
si0+=si1;
l15=si0;
si0=i32_load(&i->m0,(U64)si0+4U);
l16=si0;
si0=l15;
si0=i32_load(&i->m0,(U64)si0);
l17=si0;
si0=l0;
si1=l10;
si0+=si1;
l18=si0;
si0=i32_load(&i->m0,(U64)si0+4U);
l10=si0;
si0=l18;
si0=i32_load(&i->m0,(U64)si0);
l19=si0;
si0=l5;
si1=l7;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l7;
if(si0){
goto L6;
}
si0=l5;
si1=0U;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=1U;
si1=l5;
si2=4U;
si1+=si2;
si2=1189840U;
si3=l5;
si4=8U;
si3+=si4;
si4=1192332U;
f1250(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L6:;
si0=l1;
si1=l7;
si2=l13;
si3=l12;
si4=l19;
si5=l10;
si6=l17;
si7=l16;
si8=0U;
si9=l14;
si10=l2;
si9*=si10;
l20=si9;
si10=6U;
si9>>=(si10&31);
f982(i,si0,si1,si2,si3,si4,si5,si6,si7,si8,si9);
si0=l20;
si1=63U;
si0&=si1;
l7=si0;
si0=!(si0);
if(si0){
goto L7;
}
si0=l12;
si0=!(si0);
if(si0){
goto L10;
}
sj0=0ULL;
l21=sj0;
sj0=0ULL;
si1=l7;
sj1=(U64)(si1);
l22=sj1;
sj0-=sj1;
sj1=63ULL;
sj0&=sj1;
l23=sj0;
si0=l12;
si1=-1U;
si0+=si1;
l17=si0;
si1=536870911U;
si0&=si1;
l10=si0;
si1=1U;
si0+=si1;
l16=si0;
si1=3U;
si0&=si1;
l1=si0;
si0=l13;
si1=l17;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l19=si0;
sj0=i64_load(&i->m0,(U64)si0);
l24=sj0;
si0=l13;
l7=si0;
si0=l10;
si1=3U;
si0=si0 < si1;
if(si0){
goto L11;
}
si0=l16;
si1=1073741820U;
si0&=si1;
l10=si0;
sj0=0ULL;
l21=sj0;
si0=l13;
l7=si0;
L12:;
{
si0=l7;
si1=l7;
sj1=i64_load(&i->m0,(U64)si1);
l25=sj1;
sj2=l22;
sj1<<=(sj2&63);
sj2=l21;
sj1|=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l7;
si1=8U;
si0+=si1;
l16=si0;
si1=l16;
sj1=i64_load(&i->m0,(U64)si1);
l21=sj1;
sj2=l22;
sj1<<=(sj2&63);
sj2=l25;
sj3=l23;
sj2>>=(sj3&63);
sj1|=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l7;
si1=16U;
si0+=si1;
l16=si0;
si1=l16;
sj1=i64_load(&i->m0,(U64)si1);
l25=sj1;
sj2=l22;
sj1<<=(sj2&63);
sj2=l21;
sj3=l23;
sj2>>=(sj3&63);
sj1|=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l7;
si1=24U;
si0+=si1;
l16=si0;
si1=l16;
sj1=i64_load(&i->m0,(U64)si1);
l21=sj1;
sj2=l22;
sj1<<=(sj2&63);
sj2=l25;
sj3=l23;
sj2>>=(sj3&63);
sj1|=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l7;
si1=32U;
si0+=si1;
l7=si0;
sj0=l21;
sj1=l23;
sj0>>=(sj1&63);
l21=sj0;
si0=l10;
si1=-4U;
si0+=si1;
l10=si0;
if(si0){
goto L12;
}
}
L11:;
si0=l1;
si0=!(si0);
if(si0){
goto L13;
}
L14:;
{
si0=l7;
si1=l7;
sj1=i64_load(&i->m0,(U64)si1);
l25=sj1;
sj2=l22;
sj1<<=(sj2&63);
sj2=l21;
sj1|=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l7;
si1=8U;
si0+=si1;
l7=si0;
sj0=l25;
sj1=l23;
sj0>>=(sj1&63);
l21=sj0;
si0=l1;
si1=-1U;
si0+=si1;
l1=si0;
if(si0){
goto L14;
}
}
L13:;
si0=l19;
sj0=i64_load(&i->m0,(U64)si0);
l22=sj0;
si0=l19;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l13;
si1=l13;
sj1=i64_load(&i->m0,(U64)si1);
l21=sj1;
sj2=l22;
sj1-=sj2;
i64_store(&i->m0,(U64)si0,sj1);
sj0=l21;
sj1=l22;
si0=sj0 >= sj1;
if(si0){
goto L15;
}
si0=l13;
si1=8U;
si0+=si1;
l7=si0;
si0=l12;
si1=3U;
si0<<=(si1&31);
si1=-8U;
si0+=si1;
l1=si0;
L16:;
{
si0=l1;
si0=!(si0);
if(si0){
goto L15;
}
si0=l7;
si1=l7;
sj1=i64_load(&i->m0,(U64)si1);
l22=sj1;
sj2=-1ULL;
sj1+=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si1=-8U;
si0+=si1;
l1=si0;
si0=l7;
si1=8U;
si0+=si1;
l7=si0;
sj0=l22;
si0=!(sj0);
if(si0){
goto L16;
}
}
L15:;
si0=l17;
si0=!(si0);
if(si0){
goto L9;
}
si0=l13;
sj0=i64_load(&i->m0,(U64)si0+8U);
l22=sj0;
sj1=l24;
sj2=l23;
sj1=(U64)((I64)sj1>>(sj2&63));
l21=sj1;
sj0-=sj1;
l23=sj0;
sj1=l22;
sj0^=sj1;
sj1=-1ULL;
si0=(U64)((I64)sj0>(I64)sj1);
if(si0){
goto L8;
}
sj0=0ULL;
sj1=l21;
sj0-=sj1;
l25=sj0;
sj1=-1ULL;
si0=(U64)((I64)sj0>(I64)sj1);
if(si0){
goto L17;
}
si0=l13;
sj1=l23;
i64_store(&i->m0,(U64)si0+8U,sj1);
sj0=l22;
sj1=l21;
si0=sj0 >= sj1;
if(si0){
goto L7;
}
si0=l13;
si1=16U;
si0+=si1;
l7=si0;
si0=l12;
si1=3U;
si0<<=(si1&31);
si1=-16U;
si0+=si1;
l1=si0;
L18:;
{
si0=l1;
si0=!(si0);
if(si0){
goto L7;
}
si0=l7;
si1=l7;
sj1=i64_load(&i->m0,(U64)si1);
l23=sj1;
sj2=-1ULL;
sj1+=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si1=-8U;
si0+=si1;
l1=si0;
si0=l7;
si1=8U;
si0+=si1;
l7=si0;
sj0=l23;
si0=!(sj0);
if(si0){
goto L18;
}
goto L7;
}
L17:;
si0=l13;
sj1=l22;
sj2=l25;
sj1+=sj2;
l23=sj1;
i64_store(&i->m0,(U64)si0+8U,sj1);
sj0=l23;
sj1=l22;
si0=sj0 >= sj1;
if(si0){
goto L7;
}
si0=l13;
si1=16U;
si0+=si1;
l7=si0;
si0=l12;
si1=3U;
si0<<=(si1&31);
si1=-16U;
si0+=si1;
l1=si0;
L19:;
{
si0=l1;
si0=!(si0);
if(si0){
goto L7;
}
si0=l7;
si1=l7;
sj1=i64_load(&i->m0,(U64)si1);
sj2=1ULL;
sj1+=sj2;
l23=sj1;
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si1=-8U;
si0+=si1;
l1=si0;
si0=l7;
si1=8U;
si0+=si1;
l7=si0;
sj0=l23;
si0=!(sj0);
if(si0){
goto L19;
}
goto L7;
}
L10:;
si0=1189451U;
si1=43U;
si2=1189808U;
f604(i,si0,si1,si2);
UNREACHABLE;
L9:;
si0=1189451U;
si1=43U;
si2=1189760U;
f604(i,si0,si1,si2);
UNREACHABLE;
L8:;
si0=l13;
sj1=l23;
i64_store(&i->m0,(U64)si0+8U,sj1);
L7:;
si0=l18;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si0=l18;
si1=l3;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l18;
si1=4U;
si0+=si1;
l10=si0;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
si0=l10;
si1=l3;
si1=i32_load(&i->m0,(U64)si1+4U);
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=l7;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l3;
si1=l1;
i32_store(&i->m0,(U64)si0,si1);
si0=l15;
si0=i32_load(&i->m0,(U64)si0);
l13=si0;
si0=l15;
si1=l4;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l15;
si1=4U;
si0+=si1;
l10=si0;
si0=i32_load(&i->m0,(U64)si0);
l12=si0;
si0=l10;
si1=l4;
si1=i32_load(&i->m0,(U64)si1+4U);
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=l13;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=l12;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l14;
si1=1U;
si0+=si1;
l14=si0;
si1=l11;
si0=si0 != si1;
if(si0){
goto L5;
}
}
L4:;
si0=l0;
si1=l6;
si2=l2;
si3=1U;
si2<<=(si3&31);
l2=si2;
si3=l3;
si4=l4;
f986(i,si0,si1,si2,si3,si4);
si0=l9;
si1=l9;
si2=1U;
si1>>=(si2&31);
l6=si1;
si0-=si1;
l10=si0;
si0=l8;
si1=l6;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l7=si0;
si0=l9;
l1=si0;
si0=l8;
l0=si0;
si0=l6;
si1=1U;
si0=si0 != si1;
if(si0){
goto L3;
}
}
L1:;
si0=l9;
si1=1U;
si0=si0 == si1;
if(si0){
goto L21;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0+4U);
l16=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
l13=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
l10=si0;
si0=l8;
si1=12U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l15=si0;
si0=l7;
si0=i32_load(&i->m0,(U64)si0);
l18=si0;
si0=l8;
si0=i32_load(&i->m0,(U64)si0);
l12=si0;
si0=l8;
si0=i32_load(&i->m0,(U64)si0+4U);
l14=si0;
si0=l5;
si1=l3;
si1=i32_load(&i->m0,(U64)si1+4U);
l1=si1;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l1;
si0=!(si0);
if(si0){
goto L20;
}
si0=l10;
si1=l1;
si2=l13;
si3=l16;
si4=l12;
si5=l14;
si6=l18;
si7=l15;
si8=0U;
si9=0U;
f982(i,si0,si1,si2,si3,si4,si5,si6,si7,si8,si9);
si0=l3;
si1=l8;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l8;
si1=l1;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l8;
si1=l10;
i32_store(&i->m0,(U64)si0,si1);
si0=l8;
si0=i32_load(&i->m0,(U64)si0+12U);
l1=si0;
si0=l7;
si0=i32_load(&i->m0,(U64)si0);
l10=si0;
si0=l7;
si1=l4;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=l10;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+4U);
l7=si0;
si0=l4;
si1=l1;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l8;
si1=l7;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l5;
si1=32U;
si0+=si1;
i->g0=si0;
goto L0;
L21:;
si0=0U;
si1=0U;
si2=1192348U;
f594(i,si0,si1,si2);
UNREACHABLE;
L20:;
si0=l5;
si1=0U;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=1U;
si1=l5;
si2=4U;
si1+=si2;
si2=1189840U;
si3=l5;
si4=8U;
si3+=si4;
si4=1192332U;
f1250(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L0:;
}

void f987(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4,U32 l5) {
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
U32 si0,si1,si2,si3,si4,si5,si6,si7,si8,si9,si10;
U64 sj0,sj1,sj2;
si0=i->g0;
si1=32U;
si0-=si1;
l6=si0;
i->g0=si0;
si0=l5;
si1=l1;
si0=si0 != si1;
if(si0){
goto L2;
}
si0=l5;
l1=si0;
goto L1;
L2:;
L3:;
{
si0=l0;
l7=si0;
si0=l5;
l8=si0;
si0=l1;
l9=si0;
L4:;
{
si0=l2;
l10=si0;
si1=1U;
si0<<=(si1&31);
l2=si0;
si0=l7;
si1=l9;
l11=si1;
si2=1U;
si1>>=(si2&31);
l9=si1;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l0=si0;
si0=l8;
si1=l9;
si0=si0 <= si1;
if(si0){
goto L5;
}
si0=l9;
si1=l7;
si2=l11;
si3=3U;
si2<<=(si3&31);
si1+=si2;
si2=l0;
si1-=si2;
si2=3U;
si1>>=(si2&31);
l1=si1;
si2=l9;
si3=l1;
si2=si2 < si3;
si0=si2?si0:si1;
l12=si0;
si0=!(si0);
if(si0){
goto L6;
}
si0=l11;
si1=2U;
si0<<=(si1&31);
si1=-8U;
si0&=si1;
l13=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+4U);
l14=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+4U);
l5=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
l15=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
l16=si0;
si0=0U;
l17=si0;
si0=l7;
l1=si0;
L7:;
{
si0=l1;
si1=l13;
si0+=si1;
l18=si0;
si0=i32_load(&i->m0,(U64)si0);
l19=si0;
si0=l1;
si1=4U;
si0+=si1;
l20=si0;
si0=i32_load(&i->m0,(U64)si0);
l21=si0;
si0=l18;
si1=4U;
si0+=si1;
l22=si0;
si0=i32_load(&i->m0,(U64)si0);
l23=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l24=si0;
si0=l6;
si1=l5;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l5;
if(si0){
goto L8;
}
si0=l6;
si1=0U;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=1U;
si1=l6;
si2=4U;
si1+=si2;
si2=1189840U;
si3=l6;
si4=8U;
si3+=si4;
si4=1192332U;
f1250(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L8:;
si0=l15;
si1=l5;
si2=l16;
si3=l14;
si4=l24;
si5=l21;
si6=l19;
si7=l23;
si8=0U;
si9=l17;
si10=6U;
si9>>=(si10&31);
f982(i,si0,si1,si2,si3,si4,si5,si6,si7,si8,si9);
si0=l16;
si1=l14;
si2=l17;
si3=63U;
si2&=si3;
sj2=(U64)(si2);
f976(i,si0,si1,sj2);
si0=l20;
si0=i32_load(&i->m0,(U64)si0);
l19=si0;
si0=l20;
si1=l5;
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l20=si0;
si0=l1;
si1=l15;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=l19;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l3;
si1=l20;
i32_store(&i->m0,(U64)si0,si1);
si0=l22;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si0=l22;
si1=l14;
i32_store(&i->m0,(U64)si0,si1);
si0=l18;
si0=i32_load(&i->m0,(U64)si0);
l22=si0;
si0=l18;
si1=l16;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=l5;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l4;
si1=l22;
i32_store(&i->m0,(U64)si0,si1);
si0=l17;
si1=l10;
si0+=si1;
l17=si0;
si0=l1;
si1=8U;
si0+=si1;
l1=si0;
si0=l5;
l14=si0;
si0=l19;
l5=si0;
si0=l20;
l15=si0;
si0=l22;
l16=si0;
si0=l12;
si1=-1U;
si0+=si1;
l12=si0;
if(si0){
goto L7;
}
}
L6:;
si0=l11;
si1=l9;
si0-=si1;
l1=si0;
si0=l7;
si1=l9;
si2=l2;
si3=l3;
si4=l4;
f986(i,si0,si1,si2,si3,si4);
si0=l8;
si1=l9;
si0-=si1;
l5=si0;
si0=l8;
si1=l11;
si0=si0 != si1;
if(si0){
goto L3;
}
goto L1;
L5:;
si0=l9;
si1=l7;
si2=l11;
si3=3U;
si2<<=(si3&31);
si1+=si2;
si2=l0;
si1-=si2;
si2=3U;
si1>>=(si2&31);
l1=si1;
si2=l9;
si3=l1;
si2=si2 < si3;
si0=si2?si0:si1;
l11=si0;
si0=!(si0);
if(si0){
goto L9;
}
si0=0U;
l18=si0;
L11:;
{
si0=l0;
si1=l18;
si2=3U;
si1<<=(si2&31);
l1=si1;
si0+=si1;
l14=si0;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si0=l7;
si1=l1;
si0+=si1;
l17=si0;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si0=l14;
si0=i32_load(&i->m0,(U64)si0+4U);
l16=si0;
si0=l6;
si1=l17;
si1=i32_load(&i->m0,(U64)si1+4U);
l14=si1;
i32_store(&i->m0,(U64)si0,si1);
si0=l6;
si1=l16;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l14;
si1=l16;
si0=si0 != si1;
if(si0){
goto L10;
}
si0=l14;
si0=!(si0);
if(si0){
goto L12;
}
si0=0U;
l16=si0;
L13:;
{
si0=l1;
sj0=i64_load(&i->m0,(U64)si0);
l25=sj0;
si1=l5;
sj1=i64_load(&i->m0,(U64)si1);
sj0+=sj1;
l26=sj0;
sj1=l25;
si0=sj0 < sj1;
l17=si0;
si0=l16;
si1=255U;
si0&=si1;
if(si0){
goto L15;
}
si0=l17;
l16=si0;
goto L14;
L15:;
si0=l17;
sj1=l26;
sj2=1ULL;
sj1+=sj2;
l26=sj1;
si1=!(sj1);
si0|=si1;
l16=si0;
L14:;
si0=l1;
sj1=l26;
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si1=8U;
si0+=si1;
l1=si0;
si0=l5;
si1=8U;
si0+=si1;
l5=si0;
si0=l14;
si1=-1U;
si0+=si1;
l14=si0;
if(si0){
goto L13;
}
}
L12:;
si0=l18;
si1=1U;
si0+=si1;
l18=si0;
si1=l11;
si0=si0 == si1;
if(si0){
goto L9;
}
goto L11;
}
L10:;
si0=l6;
si1=0U;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=0U;
si1=l6;
si2=l6;
si3=4U;
si2+=si3;
si3=l6;
si4=8U;
si3+=si4;
si4=1203184U;
f1250(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L9:;
si0=l8;
si1=l9;
si0=si0 != si1;
if(si0){
goto L4;
}
}
}
si0=l7;
l0=si0;
si0=l8;
l1=si0;
L1:;
si0=l0;
si1=l1;
si2=l2;
si3=l3;
si4=l4;
f986(i,si0,si1,si2,si3,si4);
si0=l6;
si1=32U;
si0+=si1;
i->g0=si0;
L0:;
}

void f988(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4,U32 l5,U32 l6,U32 l7,U32 l8,U32 l9,U32 l10,U32 l11) {
U32 l12=0;
U32 l13=0;
U32 l14=0;
U32 l15=0;
U64 l16=0;
U64 l17=0;
U64 l18=0;
U64 l19=0;
U32 si0,si1,si2,si3,si4,si5,si6,si7,si8,si9,si10,si11,si12,si13;
U64 sj0,sj1,sj2,sj3,sj4;
si0=i->g0;
si1=48U;
si0-=si1;
l12=si0;
i->g0=si0;
si0=l0;
si1=l1;
si2=l2;
si3=l3;
si4=l4;
si5=l5;
si6=l6;
si7=l7;
si8=0U;
si9=l8;
si10=1U;
si9>>=(si10&31);
si10=l1;
si11=-1U;
si10+=si11;
l13=si10;
si11=6U;
si10<<=(si11&31);
l14=si10;
si11=2U;
si10>>=(si11&31);
si9+=si10;
si10=l9;
si11=1U;
si10>>=(si11&31);
si11=l8;
si10*=si11;
si9+=si10;
l15=si9;
si10=0U;
si11=l14;
si12=l15;
si13=l14;
si12=si12 < si13;
si10=si12?si10:si11;
si9-=si10;
si10=6U;
si9>>=(si10&31);
f982(i,si0,si1,si2,si3,si4,si5,si6,si7,si8,si9);
si0=l2;
si1=l3;
si2=l15;
si3=63U;
si2&=si3;
sj2=(U64)(si2);
f976(i,si0,si1,sj2);
si0=l12;
si1=l13;
si2=1U;
si1>>=(si2&31);
l9=si1;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l11;
si0=!(si0);
if(si0){
goto L8;
}
si0=l3;
si0=!(si0);
if(si0){
goto L7;
}
si0=l3;
si1=-1U;
si0+=si1;
l5=si0;
si1=l13;
si2=l9;
si1-=si2;
l6=si1;
si0=si0 < si1;
if(si0){
goto L6;
}
si0=l11;
si1=-1U;
si0+=si1;
l8=si0;
si1=l9;
si0=si0 < si1;
if(si0){
goto L5;
}
si0=l8;
si1=l9;
si0-=si1;
l7=si0;
si0=l11;
si1=l1;
si0=si0 != si1;
if(si0){
goto L4;
}
si0=l10;
si1=l9;
si2=3U;
si1<<=(si2&31);
si0+=si1;
si1=l2;
si2=l7;
si3=3U;
si2<<=(si3&31);
si0=f15143(i,si0,si1,si2);
l7=si0;
si0=l10;
si1=l8;
si2=3U;
si1<<=(si2&31);
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l13;
si1=1U;
si0=si0 <= si1;
if(si0){
goto L3;
}
si0=l10;
si1=l8;
si2=l2;
si3=l6;
si4=3U;
si3<<=(si4&31);
si2+=si3;
si3=l5;
si4=l6;
si3-=si4;
si0=f1197(i,si0,si1,si2,si3);
l6=si0;
si0=l7;
sj0=i64_load(&i->m0,(U64)si0);
l16=sj0;
si1=l2;
si2=l5;
si3=3U;
si2<<=(si3&31);
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
l17=sj1;
sj0-=sj1;
l18=sj0;
sj1=l16;
sj0^=sj1;
sj1=-1ULL;
si0=(U64)((I64)sj0>(I64)sj1);
if(si0){
goto L2;
}
sj0=0ULL;
sj1=l17;
sj0-=sj1;
l19=sj0;
sj1=-1ULL;
si0=(U64)((I64)sj0>(I64)sj1);
if(si0){
goto L9;
}
si0=l7;
sj1=l18;
i64_store(&i->m0,(U64)si0,sj1);
sj0=l16;
sj1=l17;
si0=sj0 >= sj1;
if(si0){
goto L1;
}
si0=l1;
si1=3U;
si0<<=(si1&31);
si1=l9;
si2=3U;
si1<<=(si2&31);
l11=si1;
si0-=si1;
si1=-8U;
si0+=si1;
l8=si0;
si0=l11;
si1=l10;
si0+=si1;
si1=8U;
si0+=si1;
l11=si0;
L10:;
{
si0=l8;
si0=!(si0);
if(si0){
goto L1;
}
si0=l11;
si1=l11;
sj1=i64_load(&i->m0,(U64)si1);
l16=sj1;
sj2=-1ULL;
sj1+=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l8;
si1=-8U;
si0+=si1;
l8=si0;
si0=l11;
si1=8U;
si0+=si1;
l11=si0;
sj0=l16;
si0=!(sj0);
if(si0){
goto L10;
}
goto L1;
}
L9:;
si0=l7;
sj1=l16;
sj2=l19;
sj1+=sj2;
l18=sj1;
i64_store(&i->m0,(U64)si0,sj1);
sj0=l18;
sj1=l16;
si0=sj0 >= sj1;
if(si0){
goto L1;
}
si0=l1;
si1=3U;
si0<<=(si1&31);
si1=l9;
si2=3U;
si1<<=(si2&31);
l11=si1;
si0-=si1;
si1=-8U;
si0+=si1;
l8=si0;
si0=l11;
si1=l10;
si0+=si1;
si1=8U;
si0+=si1;
l11=si0;
L11:;
{
si0=l8;
si0=!(si0);
if(si0){
goto L1;
}
si0=l11;
si1=l11;
sj1=i64_load(&i->m0,(U64)si1);
sj2=1ULL;
sj1+=sj2;
l16=sj1;
i64_store(&i->m0,(U64)si0,sj1);
si0=l8;
si1=-8U;
si0+=si1;
l8=si0;
si0=l11;
si1=8U;
si0+=si1;
l11=si0;
sj0=l16;
si0=!(sj0);
if(si0){
goto L11;
}
goto L1;
}
L8:;
si0=1189451U;
si1=43U;
si2=1192364U;
f604(i,si0,si1,si2);
UNREACHABLE;
L7:;
si0=1189451U;
si1=43U;
si2=1192380U;
f604(i,si0,si1,si2);
UNREACHABLE;
L6:;
si0=1189416U;
si1=35U;
si2=1192396U;
f604(i,si0,si1,si2);
UNREACHABLE;
L5:;
si0=l9;
si1=l8;
si2=1192412U;
f593(i,si0,si1,si2);
UNREACHABLE;
L4:;
si0=l7;
si1=l6;
si2=1192428U;
f685(i,si0,si1,si2);
UNREACHABLE;
L3:;
si0=l12;
si1=0U;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=1U;
si1=l12;
si2=12U;
si1+=si2;
si2=1189840U;
si3=l12;
si4=24U;
si3+=si4;
si4=1192444U;
f1250(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L2:;
si0=l7;
sj1=l18;
i64_store(&i->m0,(U64)si0,sj1);
L1:;
si0=l6;
si0=!(si0);
if(si0){
goto L12;
}
si0=l7;
si1=l7;
sj1=i64_load(&i->m0,(U64)si1);
l16=sj1;
sj2=-1ULL;
sj1+=sj2;
i64_store(&i->m0,(U64)si0,sj1);
sj0=l16;
sj1=0ULL;
si0=sj0 != sj1;
if(si0){
goto L12;
}
si0=l1;
si1=3U;
si0<<=(si1&31);
si1=l9;
si2=3U;
si1<<=(si2&31);
l11=si1;
si0-=si1;
si1=-8U;
si0+=si1;
l8=si0;
si0=l11;
si1=l10;
si0+=si1;
si1=8U;
si0+=si1;
l11=si0;
L13:;
{
si0=l8;
si0=!(si0);
if(si0){
goto L12;
}
si0=l11;
si1=l11;
sj1=i64_load(&i->m0,(U64)si1);
l16=sj1;
sj2=-1ULL;
sj1+=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l8;
si1=-8U;
si0+=si1;
l8=si0;
si0=l11;
si1=8U;
si0+=si1;
l11=si0;
sj0=l16;
si0=!(sj0);
if(si0){
goto L13;
}
}
L12:;
si0=l13;
si1=1U;
si0&=si1;
si0=!(si0);
if(si0){
goto L14;
}
si0=l10;
si1=l1;
sj2=32ULL;
f976(i,si0,si1,sj2);
L14:;
si0=l15;
si1=l14;
si0=si0 >= si1;
if(si0){
goto L18;
}
si0=l12;
si1=l1;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l12;
si1=l3;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l1;
si1=l3;
si0=si0 != si1;
if(si0){
goto L16;
}
si0=l1;
si1=-2U;
si0&=si1;
l8=si0;
si0=l1;
si1=1U;
si0&=si1;
l3=si0;
si0=0U;
l11=si0;
L19:;
{
si0=l2;
si1=l10;
sj1=i64_load(&i->m0,(U64)si1);
l16=sj1;
si2=l11;
sj2=(U64)(si2);
sj3=1ULL;
sj2&=sj3;
sj1-=sj2;
si2=l2;
sj2=i64_load(&i->m0,(U64)si2);
l18=sj2;
sj1-=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=8U;
si0+=si1;
l1=si0;
si1=l10;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
l17=sj1;
sj2=l16;
sj3=l18;
si2=sj2 <= sj3;
sj3=l16;
sj4=l18;
si3=sj3 < sj4;
si4=l11;
si5=1U;
si4&=si5;
si2=si4?si2:si3;
l11=si2;
sj2=(U64)(si2);
sj1-=sj2;
si2=l1;
sj2=i64_load(&i->m0,(U64)si2);
l16=sj2;
sj1-=sj2;
i64_store(&i->m0,(U64)si0,sj1);
sj0=l17;
sj1=l16;
si0=sj0 <= sj1;
sj1=l17;
sj2=l16;
si1=sj1 < sj2;
si2=l11;
si0=si2?si0:si1;
l11=si0;
si0=l2;
si1=16U;
si0+=si1;
l2=si0;
si0=l10;
si1=16U;
si0+=si1;
l10=si0;
si0=l8;
si1=-2U;
si0+=si1;
l8=si0;
if(si0){
goto L19;
}
}
si0=l3;
si0=!(si0);
if(si0){
goto L17;
}
si0=l2;
si1=l10;
sj1=i64_load(&i->m0,(U64)si1);
sj2=0ULL;
si3=l11;
sj3=(U64)(si3);
sj2-=sj3;
sj1+=sj2;
si2=l2;
sj2=i64_load(&i->m0,(U64)si2);
sj1-=sj2;
i64_store(&i->m0,(U64)si0,sj1);
goto L17;
L18:;
si0=l12;
si1=l3;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l12;
si1=l1;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l3;
si1=l1;
si0=si0 != si1;
if(si0){
goto L15;
}
si0=l1;
si1=-2U;
si0&=si1;
l8=si0;
si0=l1;
si1=1U;
si0&=si1;
l3=si0;
si0=0U;
l11=si0;
L20:;
{
si0=l2;
si1=l2;
sj1=i64_load(&i->m0,(U64)si1);
l16=sj1;
si2=l11;
sj2=(U64)(si2);
sj3=1ULL;
sj2&=sj3;
si3=l10;
sj3=i64_load(&i->m0,(U64)si3);
l18=sj3;
sj2+=sj3;
sj1-=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=8U;
si0+=si1;
l1=si0;
si1=l1;
sj1=i64_load(&i->m0,(U64)si1);
l17=sj1;
sj2=l16;
sj3=l18;
si2=sj2 <= sj3;
sj3=l16;
sj4=l18;
si3=sj3 < sj4;
si4=l11;
si5=1U;
si4&=si5;
si2=si4?si2:si3;
l11=si2;
sj2=(U64)(si2);
si3=l10;
si4=8U;
si3+=si4;
sj3=i64_load(&i->m0,(U64)si3);
l16=sj3;
sj2+=sj3;
sj1-=sj2;
i64_store(&i->m0,(U64)si0,sj1);
sj0=l17;
sj1=l16;
si0=sj0 <= sj1;
sj1=l17;
sj2=l16;
si1=sj1 < sj2;
si2=l11;
si0=si2?si0:si1;
l11=si0;
si0=l10;
si1=16U;
si0+=si1;
l10=si0;
si0=l2;
si1=16U;
si0+=si1;
l2=si0;
si0=l8;
si1=-2U;
si0+=si1;
l8=si0;
if(si0){
goto L20;
}
}
si0=l3;
si0=!(si0);
if(si0){
goto L17;
}
si0=l2;
sj1=0ULL;
si2=l11;
sj2=(U64)(si2);
sj1-=sj2;
si2=l10;
sj2=i64_load(&i->m0,(U64)si2);
sj1-=sj2;
si2=l2;
sj2=i64_load(&i->m0,(U64)si2);
sj1+=sj2;
i64_store(&i->m0,(U64)si0,sj1);
L17:;
si0=l12;
si1=48U;
si0+=si1;
i->g0=si0;
goto L0;
L16:;
si0=l12;
si1=0U;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=0U;
si1=l12;
si2=16U;
si1+=si2;
si2=l12;
si3=20U;
si2+=si3;
si3=l12;
si4=24U;
si3+=si4;
si4=1203508U;
f1250(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L15:;
si0=l12;
si1=0U;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=0U;
si1=l12;
si2=16U;
si1+=si2;
si2=l12;
si3=20U;
si2+=si3;
si3=l12;
si4=24U;
si3+=si4;
si4=1203476U;
f1250(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L0:;
}

void f989(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4,U32 l5,U32 l6,U32 l7) {
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
U32 si0,si1,si2,si3,si4,si5,si6,si7,si8,si9,si10,si11;
U64 sj2;
si0=i->g0;
si1=32U;
si0-=si1;
l8=si0;
i->g0=si0;
si0=l2;
si1=1U;
si0&=si1;
if(si0){
goto L12;
}
si0=l2;
si1=1U;
si0>>=(si1&31);
l9=si0;
si0=l7;
si1=l1;
si0=si0 == si1;
if(si0){
goto L11;
}
si0=l7;
si1=l1;
si2=1U;
si1>>=(si2&31);
l10=si1;
si0=si0 > si1;
if(si0){
goto L10;
}
si0=1192492U;
si1=27U;
si2=1192520U;
f604(i,si0,si1,si2);
UNREACHABLE;
L12:;
si0=l7;
si1=l1;
si2=1U;
si1>>=(si2&31);
l11=si1;
si0-=si1;
l12=si0;
si0=l1;
si1=l11;
si0-=si1;
l13=si0;
si0=0U;
l1=si0;
si0=l7;
si1=l11;
si0=si0 == si1;
if(si0){
goto L2;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0+4U);
l14=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+4U);
l7=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
l15=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
l16=si0;
si0=l11;
si1=l13;
si0=si0 > si1;
if(si0){
goto L9;
}
si0=l11;
si1=3U;
si0<<=(si1&31);
l17=si0;
si0=0U;
l9=si0;
si0=l0;
l18=si0;
si0=0U;
l1=si0;
L13:;
{
si0=l1;
si1=l11;
si0=si0 >= si1;
if(si0){
goto L4;
}
si0=l18;
si1=l17;
si0+=si1;
l19=si0;
si0=i32_load(&i->m0,(U64)si0);
l20=si0;
si0=l18;
si1=4U;
si0+=si1;
l21=si0;
si0=i32_load(&i->m0,(U64)si0);
l22=si0;
si0=l19;
si1=4U;
si0+=si1;
l23=si0;
si0=i32_load(&i->m0,(U64)si0);
l24=si0;
si0=l18;
si0=i32_load(&i->m0,(U64)si0);
l10=si0;
si0=l8;
si1=l7;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l7;
si0=!(si0);
if(si0){
goto L3;
}
si0=l15;
si1=l7;
si2=l16;
si3=l14;
si4=l10;
si5=l22;
si6=l20;
si7=l24;
si8=0U;
si9=l9;
si10=6U;
si9>>=(si10&31);
f982(i,si0,si1,si2,si3,si4,si5,si6,si7,si8,si9);
si0=l16;
si1=l14;
si2=l9;
si3=63U;
si2&=si3;
sj2=(U64)(si2);
f976(i,si0,si1,sj2);
si0=l21;
si0=i32_load(&i->m0,(U64)si0);
l20=si0;
si0=l21;
si1=l7;
i32_store(&i->m0,(U64)si0,si1);
si0=l18;
si0=i32_load(&i->m0,(U64)si0);
l21=si0;
si0=l18;
si1=l15;
i32_store(&i->m0,(U64)si0,si1);
si0=l23;
si0=i32_load(&i->m0,(U64)si0);
l22=si0;
si0=l23;
si1=l14;
i32_store(&i->m0,(U64)si0,si1);
si0=l19;
si0=i32_load(&i->m0,(U64)si0);
l23=si0;
si0=l19;
si1=l16;
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
si1=1U;
si0+=si1;
l7=si0;
si1=l11;
si0=si0 >= si1;
if(si0){
goto L5;
}
si0=l21;
si1=l20;
si2=l23;
si3=l22;
si4=l18;
si5=8U;
si4+=si5;
l14=si4;
si4=i32_load(&i->m0,(U64)si4);
si5=l18;
si6=12U;
si5+=si6;
l16=si5;
si5=i32_load(&i->m0,(U64)si5);
si6=l19;
si7=8U;
si6+=si7;
l24=si6;
si6=i32_load(&i->m0,(U64)si6);
si7=l19;
si8=12U;
si7+=si8;
l19=si7;
si7=i32_load(&i->m0,(U64)si7);
si8=l7;
si9=l2;
si10=l5;
si11=l6;
f988(i,si0,si1,si2,si3,si4,si5,si6,si7,si8,si9,si10,si11);
si0=l16;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
si0=l16;
si1=l20;
i32_store(&i->m0,(U64)si0,si1);
si0=l14;
si0=i32_load(&i->m0,(U64)si0);
l15=si0;
si0=l14;
si1=l21;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=l7;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l3;
si1=l15;
i32_store(&i->m0,(U64)si0,si1);
si0=l19;
si0=i32_load(&i->m0,(U64)si0);
l14=si0;
si0=l19;
si1=l22;
i32_store(&i->m0,(U64)si0,si1);
si0=l24;
si0=i32_load(&i->m0,(U64)si0);
l16=si0;
si0=l24;
si1=l23;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=l14;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l4;
si1=l16;
i32_store(&i->m0,(U64)si0,si1);
si0=l9;
si1=l2;
si0+=si1;
l9=si0;
si0=l18;
si1=16U;
si0+=si1;
l18=si0;
si0=l1;
si1=2U;
si0+=si1;
l1=si0;
si1=l12;
si0=si0 < si1;
if(si0){
goto L13;
}
goto L2;
}
L11:;
si0=l0;
si1=l1;
si2=l9;
si3=l3;
si4=l4;
f986(i,si0,si1,si2,si3,si4);
goto L1;
L10:;
si0=l7;
si1=l10;
si0-=si1;
l12=si0;
si1=l10;
si0=si0 > si1;
if(si0){
goto L6;
}
si0=l1;
si1=l10;
si0-=si1;
l17=si0;
si1=l12;
si0=si0 < si1;
if(si0){
goto L7;
}
si0=l12;
si1=l0;
si2=l7;
si3=3U;
si2<<=(si3&31);
si1+=si2;
l7=si1;
si2=l0;
si3=l10;
si4=3U;
si3<<=(si4&31);
si2+=si3;
l25=si2;
si1-=si2;
si2=3U;
si1>>=(si2&31);
l1=si1;
si2=l12;
si3=l1;
si2=si2 < si3;
si0=si2?si0:si1;
l21=si0;
si0=!(si0);
if(si0){
goto L14;
}
si0=l10;
si1=3U;
si0<<=(si1&31);
l24=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+4U);
l16=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+4U);
l14=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
l19=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
l18=si0;
si0=0U;
l15=si0;
si0=l0;
l1=si0;
L15:;
{
si0=l1;
si1=l24;
si0+=si1;
l13=si0;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si0=l1;
si1=4U;
si0+=si1;
l11=si0;
si0=i32_load(&i->m0,(U64)si0);
l23=si0;
si0=l13;
si1=4U;
si0+=si1;
l6=si0;
si0=i32_load(&i->m0,(U64)si0);
l20=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l22=si0;
si0=l8;
si1=l14;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l14;
si0=!(si0);
if(si0){
goto L8;
}
si0=l19;
si1=l14;
si2=l18;
si3=l16;
si4=l22;
si5=l23;
si6=l5;
si7=l20;
si8=0U;
si9=l15;
si10=6U;
si9>>=(si10&31);
f982(i,si0,si1,si2,si3,si4,si5,si6,si7,si8,si9);
si0=l18;
si1=l16;
si2=l15;
si3=63U;
si2&=si3;
sj2=(U64)(si2);
f976(i,si0,si1,sj2);
si0=l11;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si0=l11;
si1=l14;
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l11=si0;
si0=l1;
si1=l19;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=l5;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l3;
si1=l11;
i32_store(&i->m0,(U64)si0,si1);
si0=l6;
si0=i32_load(&i->m0,(U64)si0);
l14=si0;
si0=l6;
si1=l16;
i32_store(&i->m0,(U64)si0,si1);
si0=l13;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si0=l13;
si1=l18;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=l14;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l4;
si1=l6;
i32_store(&i->m0,(U64)si0,si1);
si0=l15;
si1=l9;
si0+=si1;
l15=si0;
si0=l1;
si1=8U;
si0+=si1;
l1=si0;
si0=l14;
l16=si0;
si0=l5;
l14=si0;
si0=l11;
l19=si0;
si0=l6;
l18=si0;
si0=l21;
si1=-1U;
si0+=si1;
l21=si0;
if(si0){
goto L15;
}
}
L14:;
si0=l2;
si1=-2U;
si0&=si1;
l2=si0;
si0=l25;
si1=l0;
si2=l12;
si3=3U;
si2<<=(si3&31);
si1+=si2;
si0-=si1;
si1=3U;
si0>>=(si1&31);
l1=si0;
si1=l17;
si2=l12;
si1-=si2;
l14=si1;
si2=l1;
si3=l14;
si2=si2 < si3;
si0=si2?si0:si1;
l14=si0;
si0=!(si0);
if(si0){
goto L16;
}
si0=0U;
si1=l10;
si2=3U;
si1<<=(si2&31);
si0-=si1;
l18=si0;
si0=l12;
l1=si0;
L17:;
{
si0=l7;
si0=i32_load(&i->m0,(U64)si0);
si1=l7;
si2=4U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
si2=l7;
si3=l18;
si2+=si3;
l16=si2;
si2=i32_load(&i->m0,(U64)si2);
si3=l16;
si4=4U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si4=l1;
si5=l9;
f980(i,si0,si1,si2,si3,si4,si5);
si0=l1;
si1=1U;
si0+=si1;
l1=si0;
si0=l7;
si1=8U;
si0+=si1;
l7=si0;
si0=l14;
si1=-1U;
si0+=si1;
l14=si0;
if(si0){
goto L17;
}
}
L16:;
si0=l0;
si1=l10;
si2=l2;
si3=l3;
si4=l4;
f986(i,si0,si1,si2,si3,si4);
si0=l25;
si1=l17;
si2=l2;
si3=l3;
si4=l4;
si5=l12;
f987(i,si0,si1,si2,si3,si4,si5);
goto L1;
L9:;
si0=l11;
si1=3U;
si0<<=(si1&31);
l17=si0;
si0=0U;
l9=si0;
si0=l0;
l18=si0;
si0=0U;
l1=si0;
L18:;
{
si0=l1;
si1=l11;
si0=si0 >= si1;
if(si0){
goto L4;
}
si0=l1;
si1=l13;
si0=si0 >= si1;
if(si0){
goto L20;
}
si0=l18;
si1=l17;
si0+=si1;
l19=si0;
si0=i32_load(&i->m0,(U64)si0);
l20=si0;
si0=l18;
si1=4U;
si0+=si1;
l21=si0;
si0=i32_load(&i->m0,(U64)si0);
l22=si0;
si0=l19;
si1=4U;
si0+=si1;
l23=si0;
si0=i32_load(&i->m0,(U64)si0);
l24=si0;
si0=l18;
si0=i32_load(&i->m0,(U64)si0);
l10=si0;
si0=l8;
si1=l7;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l7;
if(si0){
goto L19;
}
goto L3;
L20:;
si0=l1;
si1=l13;
si2=1192616U;
f594(i,si0,si1,si2);
UNREACHABLE;
L19:;
si0=l15;
si1=l7;
si2=l16;
si3=l14;
si4=l10;
si5=l22;
si6=l20;
si7=l24;
si8=0U;
si9=l9;
si10=6U;
si9>>=(si10&31);
f982(i,si0,si1,si2,si3,si4,si5,si6,si7,si8,si9);
si0=l16;
si1=l14;
si2=l9;
si3=63U;
si2&=si3;
sj2=(U64)(si2);
f976(i,si0,si1,sj2);
si0=l21;
si0=i32_load(&i->m0,(U64)si0);
l20=si0;
si0=l21;
si1=l7;
i32_store(&i->m0,(U64)si0,si1);
si0=l18;
si0=i32_load(&i->m0,(U64)si0);
l21=si0;
si0=l18;
si1=l15;
i32_store(&i->m0,(U64)si0,si1);
si0=l23;
si0=i32_load(&i->m0,(U64)si0);
l22=si0;
si0=l23;
si1=l14;
i32_store(&i->m0,(U64)si0,si1);
si0=l19;
si0=i32_load(&i->m0,(U64)si0);
l23=si0;
si0=l19;
si1=l16;
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
si1=1U;
si0+=si1;
l7=si0;
si1=l13;
si0=si0 < si1;
if(si0){
goto L21;
}
si0=l1;
si1=1U;
si0+=si1;
si1=l13;
si2=1192648U;
f594(i,si0,si1,si2);
UNREACHABLE;
L21:;
si0=l21;
si1=l20;
si2=l23;
si3=l22;
si4=l18;
si5=8U;
si4+=si5;
l14=si4;
si4=i32_load(&i->m0,(U64)si4);
si5=l18;
si6=12U;
si5+=si6;
l16=si5;
si5=i32_load(&i->m0,(U64)si5);
si6=l19;
si7=8U;
si6+=si7;
l24=si6;
si6=i32_load(&i->m0,(U64)si6);
si7=l19;
si8=12U;
si7+=si8;
l19=si7;
si7=i32_load(&i->m0,(U64)si7);
si8=l7;
si9=l2;
si10=l5;
si11=l6;
f988(i,si0,si1,si2,si3,si4,si5,si6,si7,si8,si9,si10,si11);
si0=l16;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
si0=l16;
si1=l20;
i32_store(&i->m0,(U64)si0,si1);
si0=l14;
si0=i32_load(&i->m0,(U64)si0);
l15=si0;
si0=l14;
si1=l21;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=l7;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l3;
si1=l15;
i32_store(&i->m0,(U64)si0,si1);
si0=l19;
si0=i32_load(&i->m0,(U64)si0);
l14=si0;
si0=l19;
si1=l22;
i32_store(&i->m0,(U64)si0,si1);
si0=l24;
si0=i32_load(&i->m0,(U64)si0);
l16=si0;
si0=l24;
si1=l23;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=l14;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l4;
si1=l16;
i32_store(&i->m0,(U64)si0,si1);
si0=l9;
si1=l2;
si0+=si1;
l9=si0;
si0=l18;
si1=16U;
si0+=si1;
l18=si0;
si0=l1;
si1=2U;
si0+=si1;
l1=si0;
si1=l12;
si0=si0 >= si1;
if(si0){
goto L2;
}
goto L18;
}
L8:;
si0=l8;
si1=0U;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=1U;
si1=l8;
si2=4U;
si1+=si2;
si2=1189840U;
si3=l8;
si4=8U;
si3+=si4;
si4=1192332U;
f1250(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L7:;
si0=1189416U;
si1=35U;
si2=1192476U;
f604(i,si0,si1,si2);
UNREACHABLE;
L6:;
si0=1189416U;
si1=35U;
si2=1192460U;
f604(i,si0,si1,si2);
UNREACHABLE;
L5:;
si0=l1;
si1=1U;
si0+=si1;
si1=l11;
si2=1192632U;
f594(i,si0,si1,si2);
UNREACHABLE;
L4:;
si0=l1;
si1=l11;
si2=1192600U;
f594(i,si0,si1,si2);
UNREACHABLE;
L3:;
si0=l8;
si1=0U;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=1U;
si1=l8;
si2=4U;
si1+=si2;
si2=1189840U;
si3=l8;
si4=8U;
si3+=si4;
si4=1192332U;
f1250(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L2:;
si0=l0;
si1=l11;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l18=si0;
si0=l1;
si1=l11;
si2=2147483646U;
si1&=si2;
l15=si1;
si0=si0 >= si1;
if(si0){
goto L22;
}
si0=l13;
si1=l11;
si0=si0 > si1;
if(si0){
goto L26;
}
si0=l1;
si1=1U;
si0>>=(si1&31);
l16=si0;
si0=l11;
si1=3U;
si0<<=(si1&31);
l21=si0;
si0=l0;
si1=l1;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l14=si0;
L27:;
{
si0=l1;
si1=l13;
si0=si0 >= si1;
if(si0){
goto L25;
}
si0=l14;
si1=l21;
si0+=si1;
l7=si0;
si0=i32_load(&i->m0,(U64)si0);
si1=l7;
si2=4U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
si2=l14;
si2=i32_load(&i->m0,(U64)si2);
si3=l14;
si4=4U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si4=l16;
si5=l2;
f980(i,si0,si1,si2,si3,si4,si5);
si0=l1;
si1=1U;
si0|=si1;
l7=si0;
si1=l13;
si0=si0 >= si1;
if(si0){
goto L23;
}
si0=l18;
si1=l7;
si2=3U;
si1<<=(si2&31);
l19=si1;
si0+=si1;
l9=si0;
si0=i32_load(&i->m0,(U64)si0);
si1=l9;
si1=i32_load(&i->m0,(U64)si1+4U);
si2=l0;
si3=l19;
si2+=si3;
l19=si2;
si2=i32_load(&i->m0,(U64)si2);
si3=l19;
si3=i32_load(&i->m0,(U64)si3+4U);
si4=l7;
si5=l2;
si6=l5;
si7=l6;
f981(i,si0,si1,si2,si3,si4,si5,si6,si7);
si0=l16;
si1=1U;
si0+=si1;
l16=si0;
si0=l14;
si1=16U;
si0+=si1;
l14=si0;
si0=l1;
si1=2U;
si0+=si1;
l1=si0;
si1=l15;
si0=si0 >= si1;
if(si0){
goto L22;
}
goto L27;
}
L26:;
si0=l1;
si1=1U;
si0>>=(si1&31);
l16=si0;
si0=l11;
si1=3U;
si0<<=(si1&31);
l21=si0;
si0=l0;
si1=l1;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l14=si0;
L28:;
{
si0=l1;
si1=l13;
si0=si0 >= si1;
if(si0){
goto L25;
}
si0=l1;
si1=l11;
si0=si0 >= si1;
if(si0){
goto L24;
}
si0=l14;
si1=l21;
si0+=si1;
l7=si0;
si0=i32_load(&i->m0,(U64)si0);
si1=l7;
si2=4U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
si2=l14;
si2=i32_load(&i->m0,(U64)si2);
si3=l14;
si4=4U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si4=l16;
si5=l2;
f980(i,si0,si1,si2,si3,si4,si5);
si0=l1;
si1=1U;
si0|=si1;
l7=si0;
si1=l13;
si0=si0 >= si1;
if(si0){
goto L23;
}
si0=l7;
si1=l11;
si0=si0 >= si1;
if(si0){
goto L29;
}
si0=l18;
si1=l7;
si2=3U;
si1<<=(si2&31);
l19=si1;
si0+=si1;
l9=si0;
si0=i32_load(&i->m0,(U64)si0);
si1=l9;
si1=i32_load(&i->m0,(U64)si1+4U);
si2=l0;
si3=l19;
si2+=si3;
l19=si2;
si2=i32_load(&i->m0,(U64)si2);
si3=l19;
si3=i32_load(&i->m0,(U64)si3+4U);
si4=l7;
si5=l2;
si6=l5;
si7=l6;
f981(i,si0,si1,si2,si3,si4,si5,si6,si7);
si0=l16;
si1=1U;
si0+=si1;
l16=si0;
si0=l14;
si1=16U;
si0+=si1;
l14=si0;
si0=l1;
si1=2U;
si0+=si1;
l1=si0;
si1=l15;
si0=si0 >= si1;
if(si0){
goto L22;
}
goto L28;
L29:;
}
si0=l7;
si1=l11;
si2=1192584U;
f594(i,si0,si1,si2);
UNREACHABLE;
L25:;
si0=l1;
si1=l13;
si2=1192536U;
f594(i,si0,si1,si2);
UNREACHABLE;
L24:;
si0=l1;
si1=l11;
si2=1192552U;
f594(i,si0,si1,si2);
UNREACHABLE;
L23:;
si0=l7;
si1=l13;
si2=1192568U;
f594(i,si0,si1,si2);
UNREACHABLE;
L22:;
si0=l0;
si1=l11;
si2=l2;
si3=l3;
si4=l4;
f986(i,si0,si1,si2,si3,si4);
si0=l18;
si1=l13;
si2=l2;
si3=l3;
si4=l4;
si5=l12;
f987(i,si0,si1,si2,si3,si4,si5);
L1:;
si0=l8;
si1=32U;
si0+=si1;
i->g0=si0;
L0:;
}

void f990(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4,U32 l5,U32 l6,U32 l7,U32 l8,U32 l9) {
U32 l10=0;
U32 l11=0;
U64 l12=0;
U64 l13=0;
U64 l14=0;
U64 l15=0;
U32 si0,si1,si2,si3,si4,si5,si6,si7,si8,si9,si10;
U64 sj0,sj1,sj2,sj3,sj4;
si0=l9;
si1=l8;
si0*=si1;
l8=si0;
si1=63U;
si0&=si1;
l9=si0;
si0=!(si0);
if(si0){
goto L3;
}
si0=l7;
si0=!(si0);
if(si0){
goto L2;
}
si0=l6;
si1=l7;
si2=-1U;
si1+=si2;
l10=si1;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l11=si0;
sj0=i64_load(&i->m0,(U64)si0);
l12=sj0;
si0=l6;
si1=l7;
si2=l9;
sj2=(U64)(si2);
l13=sj2;
sj0=f1026(i,si0,si1,sj2);
l14=sj0;
si0=l10;
si0=!(si0);
if(si0){
goto L1;
}
si0=l7;
si1=3U;
si0<<=(si1&31);
si1=l6;
si0+=si1;
si1=-16U;
si0+=si1;
l9=si0;
si1=l9;
sj1=i64_load(&i->m0,(U64)si1);
sj2=l14;
sj1-=sj2;
l15=sj1;
i64_store(&i->m0,(U64)si0,sj1);
si0=l11;
sj1=l12;
sj2=l13;
sj1=(U64)((I64)sj1>>(sj2&63));
sj2=l14;
sj3=0ULL;
si2=sj2 != sj3;
sj2=(U64)(si2);
sj1-=sj2;
sj2=l15;
sj3=0ULL;
sj4=l14;
sj3-=sj4;
si2=sj2 < sj3;
sj2=(U64)(si2);
sj1+=sj2;
i64_store(&i->m0,(U64)si0,sj1);
L3:;
si0=l0;
si1=l1;
si2=l2;
si3=l3;
si4=l4;
si5=l5;
si6=l6;
si7=l7;
si8=0U;
si9=l8;
si10=6U;
si9>>=(si10&31);
f983(i,si0,si1,si2,si3,si4,si5,si6,si7,si8,si9);
goto L0;
L2:;
si0=1189451U;
si1=43U;
si2=1189972U;
f604(i,si0,si1,si2);
UNREACHABLE;
L1:;
si0=1189451U;
si1=43U;
si2=1189988U;
f604(i,si0,si1,si2);
UNREACHABLE;
L0:;
}

void f991(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4) {
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 l8=0;
U32 l9=0;
U32 l10=0;
U32 l11=0;
U32 l12=0;
U32 l13=0;
U32 si0,si1,si2,si3,si4,si5,si6,si7,si8,si9;
U64 sj1;
si0=l0;
si1=l1;
si2=1U;
si1>>=(si2&31);
l5=si1;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l6=si0;
si0=l5;
si1=1U;
si0=si0 == si1;
if(si0){
goto L3;
}
si0=l0;
si1=l5;
si2=l2;
si3=1U;
si2<<=(si3&31);
l7=si2;
si3=l3;
si4=l4;
f991(i,si0,si1,si2,si3,si4);
si0=l6;
si1=l1;
si2=l5;
si1-=si2;
si2=l7;
si3=l3;
si4=l4;
f991(i,si0,si1,si2,si3,si4);
si0=l5;
si1=l0;
si2=l1;
si3=3U;
si2<<=(si3&31);
si1+=si2;
si2=l6;
si1-=si2;
si2=3U;
si1>>=(si2&31);
l1=si1;
si2=l5;
si3=l1;
si2=si2 < si3;
si0=si2?si0:si1;
l8=si0;
si0=!(si0);
if(si0){
goto L2;
}
si0=l5;
si1=3U;
si0<<=(si1&31);
l9=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+4U);
l1=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+4U);
l7=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
l10=si0;
si0=0U;
l11=si0;
L4:;
{
si0=l6;
si1=l1;
si2=l10;
si3=l7;
si4=l0;
si4=i32_load(&i->m0,(U64)si4);
si5=l0;
si6=4U;
si5+=si6;
l12=si5;
si5=i32_load(&i->m0,(U64)si5);
si6=l0;
si7=l9;
si6+=si7;
l5=si6;
si6=i32_load(&i->m0,(U64)si6);
si7=l5;
si8=4U;
si7+=si8;
l13=si7;
si7=i32_load(&i->m0,(U64)si7);
si8=l11;
si9=l2;
f990(i,si0,si1,si2,si3,si4,si5,si6,si7,si8,si9);
si0=l12;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si0=l0;
si1=l3;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=l1;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l3;
si1=l6;
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si0=i32_load(&i->m0,(U64)si0);
l10=si0;
si0=l13;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
si0=l5;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=l7;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l4;
si1=l10;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=8U;
si0+=si1;
l0=si0;
si0=l8;
si1=l11;
si2=1U;
si1+=si2;
l11=si1;
si0=si0 != si1;
if(si0){
goto L4;
}
goto L2;
}
L3:;
si0=l1;
si1=1U;
si0=si0 == si1;
if(si0){
goto L1;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si1=l3;
si1=i32_load(&i->m0,(U64)si1+4U);
l1=si1;
si2=l4;
si2=i32_load(&i->m0,(U64)si2);
l7=si2;
si3=l4;
si3=i32_load(&i->m0,(U64)si3+4U);
l10=si3;
si4=l0;
si4=i32_load(&i->m0,(U64)si4);
l11=si4;
si5=l0;
si5=i32_load(&i->m0,(U64)si5+4U);
l12=si5;
si6=l6;
si6=i32_load(&i->m0,(U64)si6);
si7=l0;
si8=12U;
si7+=si8;
l13=si7;
si7=i32_load(&i->m0,(U64)si7);
l2=si7;
si8=0U;
si9=0U;
f983(i,si0,si1,si2,si3,si4,si5,si6,si7,si8,si9);
si0=l0;
si1=l5;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l1;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l3;
si1=l12;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l3;
si1=l11;
i32_store(&i->m0,(U64)si0,si1);
si0=l13;
si1=l10;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=l2;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l6;
si0=i32_load(&i->m0,(U64)si0);
l0=si0;
si0=l6;
si1=l7;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=l0;
i32_store(&i->m0,(U64)si0,si1);
L2:;
goto L0;
L1:;
si0=0U;
si1=0U;
si2=1192664U;
f594(i,si0,si1,si2);
UNREACHABLE;
L0:;
}

void f992(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4,U32 l5) {
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
U64 l27=0;
U64 l28=0;
U32 l29=0;
U64 l30=0;
U64 l31=0;
U32 si0,si1,si2,si3,si4,si5,si6,si7,si8,si9;
U64 sj0,sj1,sj2,sj3,sj4;
si0=i->g0;
si1=32U;
si0-=si1;
l6=si0;
i->g0=si0;
si0=l5;
si1=l1;
si0=si0 == si1;
if(si0){
goto L7;
}
si0=l2;
si1=1U;
si0<<=(si1&31);
l7=si0;
si0=l1;
si1=l1;
si2=1U;
si1>>=(si2&31);
l8=si1;
si0-=si1;
l9=si0;
si0=l0;
si1=l8;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l10=si0;
si0=l5;
si1=l8;
si0=si0 <= si1;
if(si0){
goto L3;
}
si0=l0;
si1=l8;
si2=l7;
si3=l3;
si4=l4;
f991(i,si0,si1,si2,si3,si4);
si0=l5;
si1=l8;
si0-=si1;
l11=si0;
si1=l8;
si0=si0 > si1;
if(si0){
goto L6;
}
si0=l9;
si1=l11;
si0=si0 < si1;
if(si0){
goto L5;
}
si0=l10;
si1=l0;
si2=l11;
si3=3U;
si2<<=(si3&31);
si1+=si2;
l12=si1;
si0-=si1;
si1=3U;
si0>>=(si1&31);
l13=si0;
si1=l9;
si2=l11;
si1-=si2;
l14=si1;
si2=l13;
si3=l14;
si2=si2 < si3;
si0=si2?si0:si1;
l15=si0;
si0=!(si0);
if(si0){
goto L8;
}
si0=l0;
si1=l5;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l16=si0;
si0=0U;
l17=si0;
L9:;
{
si0=l16;
si1=l17;
si2=3U;
si1<<=(si2&31);
l13=si1;
si0+=si1;
l18=si0;
si0=i32_load(&i->m0,(U64)si0);
l19=si0;
si0=l12;
si1=l13;
si0+=si1;
l5=si0;
si0=i32_load(&i->m0,(U64)si0);
l20=si0;
si0=l18;
si0=i32_load(&i->m0,(U64)si0+4U);
l14=si0;
si0=l6;
si1=l5;
si1=i32_load(&i->m0,(U64)si1+4U);
l13=si1;
i32_store(&i->m0,(U64)si0,si1);
si0=l6;
si1=l14;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l13;
si1=l14;
si0=si0 != si1;
if(si0){
goto L4;
}
si0=l18;
si1=4U;
si0+=si1;
l21=si0;
si0=l5;
si1=4U;
si0+=si1;
l22=si0;
si0=l13;
if(si0){
goto L11;
}
si0=0U;
l13=si0;
goto L10;
L11:;
si0=l13;
si1=1U;
si0&=si1;
l23=si0;
si0=0U;
l24=si0;
si0=0U;
l25=si0;
si0=l13;
si1=1U;
si0=si0 == si1;
if(si0){
goto L12;
}
si0=l13;
si1=-2U;
si0&=si1;
l26=si0;
si0=0U;
l24=si0;
si0=l19;
l13=si0;
si0=l20;
l14=si0;
si0=0U;
l25=si0;
L13:;
{
si0=l13;
si1=l14;
sj1=i64_load(&i->m0,(U64)si1);
l27=sj1;
si2=l24;
sj2=(U64)(si2);
sj3=1ULL;
sj2&=sj3;
sj1-=sj2;
si2=l13;
sj2=i64_load(&i->m0,(U64)si2);
l28=sj2;
sj1-=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l13;
si1=8U;
si0+=si1;
l29=si0;
si1=l14;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
l30=sj1;
sj2=l27;
sj3=l28;
si2=sj2 <= sj3;
sj3=l27;
sj4=l28;
si3=sj3 < sj4;
si4=l24;
si5=1U;
si4&=si5;
si2=si4?si2:si3;
l24=si2;
sj2=(U64)(si2);
sj1-=sj2;
si2=l29;
sj2=i64_load(&i->m0,(U64)si2);
l27=sj2;
sj1-=sj2;
i64_store(&i->m0,(U64)si0,sj1);
sj0=l30;
sj1=l27;
si0=sj0 <= sj1;
sj1=l30;
sj2=l27;
si1=sj1 < sj2;
si2=l24;
si0=si2?si0:si1;
l24=si0;
si0=l13;
si1=16U;
si0+=si1;
l13=si0;
si0=l14;
si1=16U;
si0+=si1;
l14=si0;
si0=l26;
si1=l25;
si2=2U;
si1+=si2;
l25=si1;
si0=si0 != si1;
if(si0){
goto L13;
}
}
L12:;
si0=l23;
si0=!(si0);
if(si0){
goto L14;
}
si0=l19;
si1=l25;
si2=3U;
si1<<=(si2&31);
l13=si1;
si0+=si1;
l14=si0;
si1=l20;
si2=l13;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
si2=l24;
sj2=(U64)(si2);
sj1-=sj2;
si2=l14;
sj2=i64_load(&i->m0,(U64)si2);
sj1-=sj2;
i64_store(&i->m0,(U64)si0,sj1);
L14:;
si0=l21;
si0=i32_load(&i->m0,(U64)si0);
l13=si0;
si0=l18;
si0=i32_load(&i->m0,(U64)si0);
l19=si0;
L10:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
si1=l3;
si1=i32_load(&i->m0,(U64)si1+4U);
si2=l19;
si3=l13;
si4=l17;
si5=l11;
si4+=si5;
si5=l2;
f980(i,si0,si1,si2,si3,si4,si5);
si0=l18;
si0=i32_load(&i->m0,(U64)si0);
l14=si0;
si0=l5;
si0=i32_load(&i->m0,(U64)si0);
l13=si0;
si0=l21;
si0=i32_load(&i->m0,(U64)si0);
l25=si0;
si0=l6;
si1=l22;
si1=i32_load(&i->m0,(U64)si1);
l24=si1;
i32_store(&i->m0,(U64)si0,si1);
si0=l6;
si1=l25;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l24;
si1=l25;
si0=si0 != si1;
if(si0){
goto L17;
}
si0=l24;
if(si0){
goto L16;
}
si0=0U;
l13=si0;
goto L15;
L17:;
si0=l6;
si1=0U;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=0U;
si1=l6;
si2=l6;
si3=4U;
si2+=si3;
si3=l6;
si4=8U;
si3+=si4;
si4=1203184U;
f1250(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L16:;
si0=0U;
l25=si0;
L18:;
{
si0=l13;
sj0=i64_load(&i->m0,(U64)si0);
l28=sj0;
si1=l14;
sj1=i64_load(&i->m0,(U64)si1);
sj0+=sj1;
l27=sj0;
sj1=l28;
si0=sj0 < sj1;
l29=si0;
si0=l25;
si1=255U;
si0&=si1;
if(si0){
goto L20;
}
si0=l29;
l25=si0;
goto L19;
L20:;
si0=l29;
sj1=l27;
sj2=1ULL;
sj1+=sj2;
l27=sj1;
si1=!(sj1);
si0|=si1;
l25=si0;
L19:;
si0=l13;
sj1=l27;
i64_store(&i->m0,(U64)si0,sj1);
si0=l13;
si1=8U;
si0+=si1;
l13=si0;
si0=l14;
si1=8U;
si0+=si1;
l14=si0;
si0=l24;
si1=-1U;
si0+=si1;
l24=si0;
if(si0){
goto L18;
}
}
si0=l21;
si0=i32_load(&i->m0,(U64)si0);
l13=si0;
si0=l18;
si0=i32_load(&i->m0,(U64)si0);
l14=si0;
L15:;
si0=l18;
si1=l3;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l21;
si1=l3;
si1=i32_load(&i->m0,(U64)si1+4U);
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=l13;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l3;
si1=l14;
i32_store(&i->m0,(U64)si0,si1);
si0=l17;
si1=1U;
si0+=si1;
l17=si0;
si1=l15;
si0=si0 != si1;
if(si0){
goto L9;
}
}
L8:;
si0=l10;
si1=l9;
si2=l7;
si3=l3;
si4=l4;
si5=l11;
f992(i,si0,si1,si2,si3,si4,si5);
si0=l11;
si0=!(si0);
if(si0){
goto L2;
}
si0=l8;
si1=l0;
si2=l1;
si3=3U;
si2<<=(si3&31);
si1+=si2;
si2=l10;
si1-=si2;
si2=3U;
si1>>=(si2&31);
l13=si1;
si2=l8;
si3=l13;
si2=si2 < si3;
si0=si2?si0:si1;
l24=si0;
si0=l8;
si1=3U;
si0<<=(si1&31);
l25=si0;
si0=0U;
l13=si0;
L21:;
{
si0=l24;
si1=l13;
si0=si0 == si1;
if(si0){
goto L2;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
si1=l3;
si1=i32_load(&i->m0,(U64)si1+4U);
si2=l4;
si2=i32_load(&i->m0,(U64)si2);
si3=l4;
si3=i32_load(&i->m0,(U64)si3+4U);
si4=l0;
si4=i32_load(&i->m0,(U64)si4);
si5=l0;
si6=4U;
si5+=si6;
si5=i32_load(&i->m0,(U64)si5);
si6=l0;
si7=l25;
si6+=si7;
l14=si6;
si6=i32_load(&i->m0,(U64)si6);
si7=l14;
si8=4U;
si7+=si8;
si7=i32_load(&i->m0,(U64)si7);
si8=l13;
si9=l2;
f990(i,si0,si1,si2,si3,si4,si5,si6,si7,si8,si9);
si0=l0;
sj0=i64_load(&i->m0,(U64)si0);
l27=sj0;
si0=l0;
si1=l3;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
sj1=l27;
i64_store(&i->m0,(U64)si0,sj1);
si0=l14;
sj0=i64_load(&i->m0,(U64)si0);
l27=sj0;
si0=l14;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
sj1=l27;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=8U;
si0+=si1;
l0=si0;
si0=l11;
si1=l13;
si2=1U;
si1+=si2;
l13=si1;
si0=si0 != si1;
if(si0){
goto L21;
}
goto L2;
}
L7:;
si0=l0;
si1=l5;
si2=l2;
si3=l3;
si4=l4;
f991(i,si0,si1,si2,si3,si4);
goto L2;
L6:;
si0=l11;
si1=l8;
si2=1192680U;
f593(i,si0,si1,si2);
UNREACHABLE;
L5:;
si0=l11;
si1=l9;
si2=1192696U;
f593(i,si0,si1,si2);
UNREACHABLE;
L4:;
si0=l6;
si1=0U;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=0U;
si1=l6;
si2=l6;
si3=4U;
si2+=si3;
si3=l6;
si4=8U;
si3+=si4;
si4=1203508U;
f1250(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L3:;
si0=l9;
si1=l5;
si0=si0 < si1;
if(si0){
goto L25;
}
si0=l10;
si1=l0;
si2=l5;
si3=3U;
si2<<=(si3&31);
l13=si2;
si1+=si2;
l19=si1;
si0-=si1;
si1=3U;
si0>>=(si1&31);
l14=si0;
si1=l0;
si2=l1;
si3=3U;
si2<<=(si3&31);
si1+=si2;
l11=si1;
si2=l10;
si3=l13;
si2+=si3;
l22=si2;
si1-=si2;
si2=3U;
si1>>=(si2&31);
l13=si1;
si2=l14;
si3=l13;
si2=si2 < si3;
si0=si2?si0:si1;
l2=si0;
si0=!(si0);
if(si0){
goto L22;
}
si0=0U;
l26=si0;
L26:;
{
si0=l22;
si1=l26;
si2=3U;
si1<<=(si2&31);
l13=si1;
si0+=si1;
l24=si0;
si0=i32_load(&i->m0,(U64)si0);
l14=si0;
si0=l19;
si1=l13;
si0+=si1;
l18=si0;
si0=i32_load(&i->m0,(U64)si0);
l13=si0;
si0=l24;
si0=i32_load(&i->m0,(U64)si0+4U);
l25=si0;
si0=l6;
si1=l18;
si1=i32_load(&i->m0,(U64)si1+4U);
l24=si1;
i32_store(&i->m0,(U64)si0,si1);
si0=l6;
si1=l25;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l24;
si1=l25;
si0=si0 != si1;
if(si0){
goto L24;
}
si0=l24;
si0=!(si0);
if(si0){
goto L28;
}
si0=l26;
si1=1U;
si0+=si1;
l26=si0;
si0=l18;
si1=4U;
si0+=si1;
l21=si0;
si0=0U;
l25=si0;
L29:;
{
si0=l13;
sj0=i64_load(&i->m0,(U64)si0);
l28=sj0;
si1=l14;
sj1=i64_load(&i->m0,(U64)si1);
sj0+=sj1;
l27=sj0;
sj1=l28;
si0=sj0 < sj1;
l29=si0;
si0=l25;
si1=255U;
si0&=si1;
if(si0){
goto L31;
}
si0=l29;
l25=si0;
goto L30;
L31:;
si0=l29;
sj1=l27;
sj2=1ULL;
sj1+=sj2;
l27=sj1;
si1=!(sj1);
si0|=si1;
l25=si0;
L30:;
si0=l13;
sj1=l27;
i64_store(&i->m0,(U64)si0,sj1);
si0=l13;
si1=8U;
si0+=si1;
l13=si0;
si0=l14;
si1=8U;
si0+=si1;
l14=si0;
si0=l24;
si1=-1U;
si0+=si1;
l24=si0;
if(si0){
goto L29;
}
}
si0=l21;
si0=i32_load(&i->m0,(U64)si0);
l29=si0;
if(si0){
goto L27;
}
L28:;
si0=1189451U;
si1=43U;
si2=1189972U;
f604(i,si0,si1,si2);
UNREACHABLE;
L27:;
si0=l18;
si0=i32_load(&i->m0,(U64)si0);
l18=si0;
si1=l29;
si2=-1U;
si1+=si2;
l13=si1;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l21=si0;
si0=l18;
sj0=i64_load(&i->m0,(U64)si0);
l30=sj0;
sj1=1ULL;
sj0>>=(sj1&63);
l27=sj0;
si0=l29;
si1=1U;
si0=si0 == si1;
if(si0){
goto L23;
}
si0=l21;
sj0=i64_load(&i->m0,(U64)si0);
l31=sj0;
si0=1U;
l14=si0;
si0=l13;
si1=1U;
si0&=si1;
l17=si0;
si0=l29;
si1=2U;
si0=si0 == si1;
if(si0){
goto L32;
}
si0=l13;
si1=-2U;
si0&=si1;
l25=si0;
si0=0U;
l14=si0;
si0=l18;
l13=si0;
L33:;
{
si0=l13;
si1=l13;
si2=8U;
si1+=si2;
l24=si1;
sj1=i64_load(&i->m0,(U64)si1);
l28=sj1;
sj2=63ULL;
sj1<<=(sj2&63);
sj2=l27;
sj1|=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l24;
si1=l13;
si2=16U;
si1+=si2;
l13=si1;
sj1=i64_load(&i->m0,(U64)si1);
l27=sj1;
sj2=63ULL;
sj1<<=(sj2&63);
sj2=l28;
sj3=1ULL;
sj2>>=(sj3&63);
sj1|=sj2;
i64_store(&i->m0,(U64)si0,sj1);
sj0=l27;
sj1=1ULL;
sj0>>=(sj1&63);
l27=sj0;
si0=l25;
si1=l14;
si2=2U;
si1+=si2;
l14=si1;
si0=si0 != si1;
if(si0){
goto L33;
}
}
si0=l14;
si1=1U;
si0+=si1;
l14=si0;
L32:;
si0=l17;
si0=!(si0);
if(si0){
goto L34;
}
si0=l18;
si1=l14;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l13=si0;
si1=-8U;
si0+=si1;
si1=l13;
sj1=i64_load(&i->m0,(U64)si1);
sj2=63ULL;
sj1<<=(sj2&63);
sj2=l27;
sj1|=sj2;
i64_store(&i->m0,(U64)si0,sj1);
L34:;
si0=l29;
si1=3U;
si0<<=(si1&31);
si1=l18;
si0+=si1;
si1=-16U;
si0+=si1;
l13=si0;
sj1=l30;
sj2=63ULL;
sj1<<=(sj2&63);
l27=sj1;
si2=l13;
sj2=i64_load(&i->m0,(U64)si2);
sj1+=sj2;
l28=sj1;
i64_store(&i->m0,(U64)si0,sj1);
si0=l21;
sj1=l31;
sj2=1ULL;
sj1=(U64)((I64)sj1>>(sj2&63));
sj2=l27;
sj3=0ULL;
si2=sj2 != sj3;
sj2=(U64)(si2);
sj1-=sj2;
sj2=l28;
sj3=l27;
si2=sj2 < sj3;
sj2=(U64)(si2);
sj1+=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l26;
si1=l2;
si0=si0 != si1;
if(si0){
goto L26;
}
goto L22;
}
L25:;
si0=l5;
si1=l9;
si2=1192712U;
f593(i,si0,si1,si2);
UNREACHABLE;
L24:;
si0=l6;
si1=0U;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=0U;
si1=l6;
si2=l6;
si3=4U;
si2+=si3;
si3=l6;
si4=8U;
si3+=si4;
si4=1203184U;
f1250(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L23:;
si0=l21;
sj1=l27;
i64_store(&i->m0,(U64)si0,sj1);
si0=1189451U;
si1=43U;
si2=1189988U;
f604(i,si0,si1,si2);
UNREACHABLE;
L22:;
si0=l0;
si1=l8;
si2=l7;
si3=l3;
si4=l4;
si5=l5;
f992(i,si0,si1,si2,si3,si4,si5);
si0=l5;
si0=!(si0);
if(si0){
goto L2;
}
si0=l8;
si1=l11;
si2=l10;
si1-=si2;
si2=3U;
si1>>=(si2&31);
l13=si1;
si2=l8;
si3=l13;
si2=si2 < si3;
si0=si2?si0:si1;
l19=si0;
si0=0U;
l18=si0;
L35:;
{
si0=l18;
si1=l19;
si0=si0 == si1;
if(si0){
goto L2;
}
si0=l10;
si1=l18;
si2=3U;
si1<<=(si2&31);
l13=si1;
si0+=si1;
l26=si0;
si0=l0;
si1=l13;
si0+=si1;
l29=si0;
si0=i32_load(&i->m0,(U64)si0);
l13=si0;
si0=l29;
si0=i32_load(&i->m0,(U64)si0+4U);
l14=si0;
if(si0){
goto L37;
}
si0=0U;
l14=si0;
goto L36;
L37:;
si0=l14;
si1=-1U;
si0+=si1;
si1=536870911U;
si0&=si1;
l24=si0;
si1=1U;
si0+=si1;
l25=si0;
si1=3U;
si0&=si1;
l14=si0;
sj0=0ULL;
l27=sj0;
si0=l24;
si1=3U;
si0=si0 < si1;
if(si0){
goto L38;
}
si0=l25;
si1=1073741820U;
si0&=si1;
l24=si0;
sj0=0ULL;
l27=sj0;
L39:;
{
si0=l13;
si1=l13;
sj1=i64_load(&i->m0,(U64)si1);
l28=sj1;
sj2=1ULL;
sj1<<=(sj2&63);
sj2=l27;
sj1|=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l13;
si1=8U;
si0+=si1;
l25=si0;
si1=l25;
sj1=i64_load(&i->m0,(U64)si1);
l27=sj1;
sj2=1ULL;
sj1<<=(sj2&63);
sj2=l28;
sj3=63ULL;
sj2>>=(sj3&63);
sj1|=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l13;
si1=16U;
si0+=si1;
l25=si0;
si1=l25;
sj1=i64_load(&i->m0,(U64)si1);
l28=sj1;
sj2=1ULL;
sj1<<=(sj2&63);
sj2=l27;
sj3=63ULL;
sj2>>=(sj3&63);
sj1|=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l13;
si1=24U;
si0+=si1;
l25=si0;
si1=l25;
sj1=i64_load(&i->m0,(U64)si1);
l27=sj1;
sj2=1ULL;
sj1<<=(sj2&63);
sj2=l28;
sj3=63ULL;
sj2>>=(sj3&63);
sj1|=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l13;
si1=32U;
si0+=si1;
l13=si0;
sj0=l27;
sj1=63ULL;
sj0>>=(sj1&63);
l27=sj0;
si0=l24;
si1=-4U;
si0+=si1;
l24=si0;
if(si0){
goto L39;
}
}
L38:;
si0=l29;
si1=4U;
si0+=si1;
l24=si0;
si0=l14;
si0=!(si0);
if(si0){
goto L40;
}
L41:;
{
si0=l13;
si1=l13;
sj1=i64_load(&i->m0,(U64)si1);
l28=sj1;
sj2=1ULL;
sj1<<=(sj2&63);
sj2=l27;
sj1|=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l13;
si1=8U;
si0+=si1;
l13=si0;
sj0=l28;
sj1=63ULL;
sj0>>=(sj1&63);
l27=sj0;
si0=l14;
si1=-1U;
si0+=si1;
l14=si0;
if(si0){
goto L41;
}
}
L40:;
si0=l29;
si0=i32_load(&i->m0,(U64)si0);
l13=si0;
si0=l24;
si0=i32_load(&i->m0,(U64)si0);
l14=si0;
L36:;
si0=l26;
si0=i32_load(&i->m0,(U64)si0+4U);
l24=si0;
si0=l26;
si0=i32_load(&i->m0,(U64)si0);
l21=si0;
si0=l6;
si1=l14;
i32_store(&i->m0,(U64)si0,si1);
si0=l6;
si1=l24;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l14;
si1=l24;
si0=si0 != si1;
if(si0){
goto L1;
}
si0=l14;
si0=!(si0);
if(si0){
goto L42;
}
si0=l14;
si1=1U;
si0&=si1;
l17=si0;
si0=0U;
l25=si0;
si0=0U;
l29=si0;
si0=l14;
si1=1U;
si0=si0 == si1;
if(si0){
goto L43;
}
si0=l14;
si1=-2U;
si0&=si1;
l3=si0;
si0=0U;
l25=si0;
si0=l21;
l24=si0;
si0=l13;
l14=si0;
si0=0U;
l29=si0;
L44:;
{
si0=l14;
si1=l14;
sj1=i64_load(&i->m0,(U64)si1);
l27=sj1;
si2=l25;
sj2=(U64)(si2);
sj3=1ULL;
sj2&=sj3;
si3=l24;
sj3=i64_load(&i->m0,(U64)si3);
l28=sj3;
sj2+=sj3;
sj1-=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l14;
si1=8U;
si0+=si1;
l26=si0;
si1=l26;
sj1=i64_load(&i->m0,(U64)si1);
l30=sj1;
sj2=l27;
sj3=l28;
si2=sj2 <= sj3;
sj3=l27;
sj4=l28;
si3=sj3 < sj4;
si4=l25;
si5=1U;
si4&=si5;
si2=si4?si2:si3;
l25=si2;
sj2=(U64)(si2);
si3=l24;
si4=8U;
si3+=si4;
sj3=i64_load(&i->m0,(U64)si3);
l27=sj3;
sj2+=sj3;
sj1-=sj2;
i64_store(&i->m0,(U64)si0,sj1);
sj0=l30;
sj1=l27;
si0=sj0 <= sj1;
sj1=l30;
sj2=l27;
si1=sj1 < sj2;
si2=l25;
si0=si2?si0:si1;
l25=si0;
si0=l24;
si1=16U;
si0+=si1;
l24=si0;
si0=l14;
si1=16U;
si0+=si1;
l14=si0;
si0=l3;
si1=l29;
si2=2U;
si1+=si2;
l29=si1;
si0=si0 != si1;
if(si0){
goto L44;
}
}
L43:;
si0=l17;
si0=!(si0);
if(si0){
goto L42;
}
si0=l13;
si1=l29;
si2=3U;
si1<<=(si2&31);
l14=si1;
si0+=si1;
l13=si0;
si1=l13;
sj1=i64_load(&i->m0,(U64)si1);
si2=l25;
sj2=(U64)(si2);
si3=l21;
si4=l14;
si3+=si4;
sj3=i64_load(&i->m0,(U64)si3);
sj2+=sj3;
sj1-=sj2;
i64_store(&i->m0,(U64)si0,sj1);
L42:;
si0=l18;
si1=1U;
si0+=si1;
l18=si0;
si0=l5;
si1=-1U;
si0+=si1;
l5=si0;
if(si0){
goto L35;
}
}
L2:;
si0=l6;
si1=32U;
si0+=si1;
i->g0=si0;
goto L0;
L1:;
si0=l6;
si1=0U;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=0U;
si1=l6;
si2=l6;
si3=4U;
si2+=si3;
si3=l6;
si4=8U;
si3+=si4;
si4=1203476U;
f1250(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L0:;
}

void f993(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4,U32 l5) {
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
U64 l17=0;
U32 si0,si1,si2,si3,si4,si5,si6,si7,si8,si9;
U64 sj0,sj1,sj2,sj3;
si0=l5;
si1=l1;
si0=si0 == si1;
if(si0){
goto L3;
}
si0=l2;
si1=1U;
si0<<=(si1&31);
l6=si0;
si0=l0;
si1=l1;
si2=1U;
si1>>=(si2&31);
l7=si1;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l8=si0;
si0=l5;
si1=l7;
si0=si0 <= si1;
if(si0){
goto L5;
}
si0=l0;
si1=l7;
si2=l6;
si3=l3;
si4=l4;
f991(i,si0,si1,si2,si3,si4);
si0=l5;
si1=l7;
si0-=si1;
l9=si0;
si1=l7;
si0=si0 > si1;
if(si0){
goto L2;
}
si0=l1;
si1=l7;
si0-=si1;
l10=si0;
si1=l9;
si0=si0 < si1;
if(si0){
goto L1;
}
si0=l8;
si1=l0;
si2=l9;
si3=3U;
si2<<=(si3&31);
si1+=si2;
l11=si1;
si0-=si1;
si1=3U;
si0>>=(si1&31);
l12=si0;
si1=l10;
si2=l9;
si1-=si2;
l13=si1;
si2=l12;
si3=l13;
si2=si2 < si3;
si0=si2?si0:si1;
l14=si0;
si0=!(si0);
if(si0){
goto L6;
}
si0=l0;
si1=l5;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l12=si0;
si0=0U;
si1=l7;
si2=3U;
si1<<=(si2&31);
si0-=si1;
l15=si0;
si0=l9;
l13=si0;
L7:;
{
si0=l12;
si0=i32_load(&i->m0,(U64)si0);
si1=l12;
si2=4U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
si2=l12;
si3=l15;
si2+=si3;
l5=si2;
si2=i32_load(&i->m0,(U64)si2);
si3=l5;
si4=4U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si4=l13;
si5=l2;
f980(i,si0,si1,si2,si3,si4,si5);
si0=l12;
si1=8U;
si0+=si1;
l12=si0;
si0=l13;
si1=1U;
si0+=si1;
l13=si0;
si0=l14;
si1=-1U;
si0+=si1;
l14=si0;
if(si0){
goto L7;
}
}
L6:;
si0=l8;
si1=l10;
si2=l6;
si3=l3;
si4=l4;
si5=l9;
f992(i,si0,si1,si2,si3,si4,si5);
si0=l9;
si0=!(si0);
if(si0){
goto L8;
}
si0=l7;
si1=l0;
si2=l1;
si3=3U;
si2<<=(si3&31);
si1+=si2;
si2=l8;
si1-=si2;
si2=3U;
si1>>=(si2&31);
l12=si1;
si2=l7;
si3=l12;
si2=si2 < si3;
si0=si2?si0:si1;
l5=si0;
si0=l7;
si1=3U;
si0<<=(si1&31);
l14=si0;
si0=0U;
l12=si0;
L9:;
{
si0=l5;
si1=l12;
si0=si0 == si1;
if(si0){
goto L8;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
si1=l3;
si1=i32_load(&i->m0,(U64)si1+4U);
si2=l4;
si2=i32_load(&i->m0,(U64)si2);
si3=l4;
si3=i32_load(&i->m0,(U64)si3+4U);
si4=l0;
si4=i32_load(&i->m0,(U64)si4);
si5=l0;
si6=4U;
si5+=si6;
si5=i32_load(&i->m0,(U64)si5);
si6=l0;
si7=l14;
si6+=si7;
l13=si6;
si6=i32_load(&i->m0,(U64)si6);
si7=l13;
si8=4U;
si7+=si8;
si7=i32_load(&i->m0,(U64)si7);
si8=l12;
si9=l2;
f990(i,si0,si1,si2,si3,si4,si5,si6,si7,si8,si9);
si0=l0;
sj0=i64_load(&i->m0,(U64)si0);
l16=sj0;
si0=l0;
si1=l3;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
sj1=l16;
i64_store(&i->m0,(U64)si0,sj1);
si0=l13;
sj0=i64_load(&i->m0,(U64)si0);
l16=sj0;
si0=l13;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
sj1=l16;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=8U;
si0+=si1;
l0=si0;
si0=l9;
si1=l12;
si2=1U;
si1+=si2;
l12=si1;
si0=si0 != si1;
if(si0){
goto L9;
}
}
L8:;
si0=l9;
si1=l7;
si0=si0 == si1;
if(si0){
goto L4;
}
L10:;
{
si0=l11;
si0=i32_load(&i->m0,(U64)si0+4U);
l13=si0;
si0=!(si0);
if(si0){
goto L11;
}
si0=l11;
si0=i32_load(&i->m0,(U64)si0);
l12=si0;
si0=l13;
si1=-1U;
si0+=si1;
si1=536870911U;
si0&=si1;
l4=si0;
si1=1U;
si0+=si1;
l3=si0;
si1=3U;
si0&=si1;
l13=si0;
sj0=0ULL;
l16=sj0;
si0=l4;
si1=3U;
si0=si0 < si1;
if(si0){
goto L12;
}
si0=l3;
si1=1073741820U;
si0&=si1;
l4=si0;
sj0=0ULL;
l16=sj0;
L13:;
{
si0=l12;
si1=l12;
sj1=i64_load(&i->m0,(U64)si1);
l17=sj1;
sj2=1ULL;
sj1<<=(sj2&63);
sj2=l16;
sj1|=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l12;
si1=8U;
si0+=si1;
l3=si0;
si1=l3;
sj1=i64_load(&i->m0,(U64)si1);
l16=sj1;
sj2=1ULL;
sj1<<=(sj2&63);
sj2=l17;
sj3=63ULL;
sj2>>=(sj3&63);
sj1|=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l12;
si1=16U;
si0+=si1;
l3=si0;
si1=l3;
sj1=i64_load(&i->m0,(U64)si1);
l17=sj1;
sj2=1ULL;
sj1<<=(sj2&63);
sj2=l16;
sj3=63ULL;
sj2>>=(sj3&63);
sj1|=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l12;
si1=24U;
si0+=si1;
l3=si0;
si1=l3;
sj1=i64_load(&i->m0,(U64)si1);
l16=sj1;
sj2=1ULL;
sj1<<=(sj2&63);
sj2=l17;
sj3=63ULL;
sj2>>=(sj3&63);
sj1|=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l12;
si1=32U;
si0+=si1;
l12=si0;
sj0=l16;
sj1=63ULL;
sj0>>=(sj1&63);
l16=sj0;
si0=l4;
si1=-4U;
si0+=si1;
l4=si0;
if(si0){
goto L13;
}
}
L12:;
si0=l13;
si0=!(si0);
if(si0){
goto L11;
}
L14:;
{
si0=l12;
si1=l12;
sj1=i64_load(&i->m0,(U64)si1);
l17=sj1;
sj2=1ULL;
sj1<<=(sj2&63);
sj2=l16;
sj1|=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l12;
si1=8U;
si0+=si1;
l12=si0;
sj0=l17;
sj1=63ULL;
sj0>>=(sj1&63);
l16=sj0;
si0=l13;
si1=-1U;
si0+=si1;
l13=si0;
if(si0){
goto L14;
}
}
L11:;
si0=l11;
si1=8U;
si0+=si1;
l11=si0;
si1=l8;
si0=si0 != si1;
if(si0){
goto L10;
}
goto L4;
}
L5:;
si0=l0;
si1=l7;
si2=l6;
si3=l3;
si4=l4;
si5=l5;
f993(i,si0,si1,si2,si3,si4,si5);
si0=l1;
si1=2U;
si0=si0 < si1;
if(si0){
goto L4;
}
si0=l5;
si0=!(si0);
if(si0){
goto L4;
}
L15:;
{
si0=l0;
si0=i32_load(&i->m0,(U64)si0+4U);
l13=si0;
si0=!(si0);
if(si0){
goto L16;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
l12=si0;
si0=l13;
si1=-1U;
si0+=si1;
si1=536870911U;
si0&=si1;
l4=si0;
si1=1U;
si0+=si1;
l3=si0;
si1=3U;
si0&=si1;
l13=si0;
sj0=0ULL;
l16=sj0;
si0=l4;
si1=3U;
si0=si0 < si1;
if(si0){
goto L17;
}
si0=l3;
si1=1073741820U;
si0&=si1;
l4=si0;
sj0=0ULL;
l16=sj0;
L18:;
{
si0=l12;
si1=l12;
sj1=i64_load(&i->m0,(U64)si1);
l17=sj1;
sj2=1ULL;
sj1<<=(sj2&63);
sj2=l16;
sj1|=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l12;
si1=8U;
si0+=si1;
l3=si0;
si1=l3;
sj1=i64_load(&i->m0,(U64)si1);
l16=sj1;
sj2=1ULL;
sj1<<=(sj2&63);
sj2=l17;
sj3=63ULL;
sj2>>=(sj3&63);
sj1|=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l12;
si1=16U;
si0+=si1;
l3=si0;
si1=l3;
sj1=i64_load(&i->m0,(U64)si1);
l17=sj1;
sj2=1ULL;
sj1<<=(sj2&63);
sj2=l16;
sj3=63ULL;
sj2>>=(sj3&63);
sj1|=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l12;
si1=24U;
si0+=si1;
l3=si0;
si1=l3;
sj1=i64_load(&i->m0,(U64)si1);
l16=sj1;
sj2=1ULL;
sj1<<=(sj2&63);
sj2=l17;
sj3=63ULL;
sj2>>=(sj3&63);
sj1|=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l12;
si1=32U;
si0+=si1;
l12=si0;
sj0=l16;
sj1=63ULL;
sj0>>=(sj1&63);
l16=sj0;
si0=l4;
si1=-4U;
si0+=si1;
l4=si0;
if(si0){
goto L18;
}
}
L17:;
si0=l13;
si0=!(si0);
if(si0){
goto L16;
}
L19:;
{
si0=l12;
si1=l12;
sj1=i64_load(&i->m0,(U64)si1);
l17=sj1;
sj2=1ULL;
sj1<<=(sj2&63);
sj2=l16;
sj1|=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l12;
si1=8U;
si0+=si1;
l12=si0;
sj0=l17;
sj1=63ULL;
sj0>>=(sj1&63);
l16=sj0;
si0=l13;
si1=-1U;
si0+=si1;
l13=si0;
if(si0){
goto L19;
}
}
L16:;
si0=l5;
si1=-1U;
si0+=si1;
l5=si0;
si0=!(si0);
if(si0){
goto L4;
}
si0=l0;
si1=8U;
si0+=si1;
l0=si0;
si1=l8;
si0=si0 != si1;
if(si0){
goto L15;
}
}
L4:;
goto L0;
L3:;
si0=l0;
si1=l5;
si2=l2;
si3=l3;
si4=l4;
f991(i,si0,si1,si2,si3,si4);
goto L0;
L2:;
si0=l9;
si1=l7;
si2=1192728U;
f593(i,si0,si1,si2);
UNREACHABLE;
L1:;
si0=l9;
si1=l10;
si2=1192744U;
f593(i,si0,si1,si2);
UNREACHABLE;
L0:;
}

void f994(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4,U32 l5,U32 l6,U32 l7,U32 l8,U32 l9,U32 l10,U32 l11) {
U32 l12=0;
U32 l13=0;
U32 l14=0;
U32 l15=0;
U32 l16=0;
U32 l17=0;
U32 l18=0;
U64 l19=0;
U64 l20=0;
U64 l21=0;
U64 l22=0;
U32 si0,si1,si2,si3,si4,si5,si6,si7,si8,si9,si10,si11;
U64 sj0,sj1,sj2,sj3,sj4;
si0=i->g0;
si1=48U;
si0-=si1;
l12=si0;
i->g0=si0;
si0=l1;
si1=-1U;
si0+=si1;
l13=si0;
si1=6U;
si0<<=(si1&31);
l14=si0;
si1=2U;
si0>>=(si1&31);
si1=l14;
si0+=si1;
si1=l9;
si2=1U;
si1>>=(si2&31);
si2=l8;
si1*=si2;
si2=l8;
si3=1U;
si2>>=(si3&31);
si1+=si2;
si2=-1U;
si1^=si2;
si0+=si1;
l15=si0;
si1=63U;
si0&=si1;
l8=si0;
si0=!(si0);
if(si0){
goto L1;
}
si0=l6;
si1=l7;
si2=l8;
sj2=(U64)(si2);
f976(i,si0,si1,sj2);
L1:;
si0=l12;
si1=l13;
si2=1U;
si1>>=(si2&31);
l8=si1;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l11;
si0=!(si0);
if(si0){
goto L9;
}
si0=l7;
si0=!(si0);
if(si0){
goto L8;
}
si0=l7;
si1=-1U;
si0+=si1;
l16=si0;
si1=l13;
si2=l8;
si1-=si2;
l17=si1;
si0=si0 < si1;
if(si0){
goto L7;
}
si0=l11;
si1=-1U;
si0+=si1;
l9=si0;
si1=l8;
si0=si0 < si1;
if(si0){
goto L6;
}
si0=l9;
si1=l8;
si0-=si1;
l18=si0;
si0=l11;
si1=l1;
si0=si0 != si1;
if(si0){
goto L5;
}
si0=l10;
si1=l8;
si2=3U;
si1<<=(si2&31);
si0+=si1;
si1=l6;
si2=l18;
si3=3U;
si2<<=(si3&31);
si0=f15143(i,si0,si1,si2);
l18=si0;
si0=l10;
si1=l9;
si2=3U;
si1<<=(si2&31);
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l13;
si1=1U;
si0=si0 <= si1;
if(si0){
goto L4;
}
si0=l10;
si1=l8;
si2=l6;
si3=l17;
si4=3U;
si3<<=(si4&31);
si2+=si3;
si3=l16;
si4=l17;
si3-=si4;
si0=f1197(i,si0,si1,si2,si3);
l17=si0;
si0=l18;
sj0=i64_load(&i->m0,(U64)si0);
l19=sj0;
si1=l6;
si2=l16;
si3=3U;
si2<<=(si3&31);
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
l20=sj1;
sj0-=sj1;
l21=sj0;
sj1=l19;
sj0^=sj1;
sj1=-1ULL;
si0=(U64)((I64)sj0>(I64)sj1);
if(si0){
goto L3;
}
sj0=0ULL;
sj1=l20;
sj0-=sj1;
l22=sj0;
sj1=-1ULL;
si0=(U64)((I64)sj0>(I64)sj1);
if(si0){
goto L10;
}
si0=l18;
sj1=l21;
i64_store(&i->m0,(U64)si0,sj1);
sj0=l19;
sj1=l20;
si0=sj0 >= sj1;
if(si0){
goto L2;
}
si0=l1;
si1=3U;
si0<<=(si1&31);
si1=l8;
si2=3U;
si1<<=(si2&31);
l11=si1;
si0-=si1;
si1=-8U;
si0+=si1;
l9=si0;
si0=l11;
si1=l10;
si0+=si1;
si1=8U;
si0+=si1;
l11=si0;
L11:;
{
si0=l9;
si0=!(si0);
if(si0){
goto L2;
}
si0=l11;
si1=l11;
sj1=i64_load(&i->m0,(U64)si1);
l19=sj1;
sj2=-1ULL;
sj1+=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l9;
si1=-8U;
si0+=si1;
l9=si0;
si0=l11;
si1=8U;
si0+=si1;
l11=si0;
sj0=l19;
si0=!(sj0);
if(si0){
goto L11;
}
goto L2;
}
L10:;
si0=l18;
sj1=l19;
sj2=l22;
sj1+=sj2;
l21=sj1;
i64_store(&i->m0,(U64)si0,sj1);
sj0=l21;
sj1=l19;
si0=sj0 >= sj1;
if(si0){
goto L2;
}
si0=l1;
si1=3U;
si0<<=(si1&31);
si1=l8;
si2=3U;
si1<<=(si2&31);
l11=si1;
si0-=si1;
si1=-8U;
si0+=si1;
l9=si0;
si0=l11;
si1=l10;
si0+=si1;
si1=8U;
si0+=si1;
l11=si0;
L12:;
{
si0=l9;
si0=!(si0);
if(si0){
goto L2;
}
si0=l11;
si1=l11;
sj1=i64_load(&i->m0,(U64)si1);
sj2=1ULL;
sj1+=sj2;
l19=sj1;
i64_store(&i->m0,(U64)si0,sj1);
si0=l9;
si1=-8U;
si0+=si1;
l9=si0;
si0=l11;
si1=8U;
si0+=si1;
l11=si0;
sj0=l19;
si0=!(sj0);
if(si0){
goto L12;
}
goto L2;
}
L9:;
si0=1189451U;
si1=43U;
si2=1192760U;
f604(i,si0,si1,si2);
UNREACHABLE;
L8:;
si0=1189451U;
si1=43U;
si2=1192776U;
f604(i,si0,si1,si2);
UNREACHABLE;
L7:;
si0=1189416U;
si1=35U;
si2=1192792U;
f604(i,si0,si1,si2);
UNREACHABLE;
L6:;
si0=l8;
si1=l9;
si2=1192808U;
f593(i,si0,si1,si2);
UNREACHABLE;
L5:;
si0=l18;
si1=l17;
si2=1192824U;
f685(i,si0,si1,si2);
UNREACHABLE;
L4:;
si0=l12;
si1=0U;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=1U;
si1=l12;
si2=12U;
si1+=si2;
si2=1189840U;
si3=l12;
si4=24U;
si3+=si4;
si4=1192840U;
f1250(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L3:;
si0=l18;
sj1=l21;
i64_store(&i->m0,(U64)si0,sj1);
L2:;
si0=l17;
si0=!(si0);
if(si0){
goto L13;
}
si0=l18;
si1=l18;
sj1=i64_load(&i->m0,(U64)si1);
l19=sj1;
sj2=-1ULL;
sj1+=sj2;
i64_store(&i->m0,(U64)si0,sj1);
sj0=l19;
sj1=0ULL;
si0=sj0 != sj1;
if(si0){
goto L13;
}
si0=l1;
si1=3U;
si0<<=(si1&31);
si1=l8;
si2=3U;
si1<<=(si2&31);
l11=si1;
si0-=si1;
si1=-8U;
si0+=si1;
l8=si0;
si0=l11;
si1=l10;
si0+=si1;
si1=8U;
si0+=si1;
l11=si0;
L14:;
{
si0=l8;
si0=!(si0);
if(si0){
goto L13;
}
si0=l11;
si1=l11;
sj1=i64_load(&i->m0,(U64)si1);
l19=sj1;
sj2=-1ULL;
sj1+=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l8;
si1=-8U;
si0+=si1;
l8=si0;
si0=l11;
si1=8U;
si0+=si1;
l11=si0;
sj0=l19;
si0=!(sj0);
if(si0){
goto L14;
}
}
L13:;
si0=l13;
si1=1U;
si0&=si1;
si0=!(si0);
if(si0){
goto L15;
}
si0=l10;
si1=l1;
sj2=32ULL;
f976(i,si0,si1,sj2);
L15:;
si0=l15;
si1=l14;
si0=si0 < si1;
if(si0){
goto L19;
}
si0=l12;
si1=l7;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l12;
si1=l1;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l7;
si1=l1;
si0=si0 != si1;
if(si0){
goto L17;
}
si0=l1;
si1=-2U;
si0&=si1;
l9=si0;
si0=l1;
si1=1U;
si0&=si1;
l17=si0;
si0=0U;
l8=si0;
si0=l6;
l11=si0;
L20:;
{
si0=l11;
si1=l11;
sj1=i64_load(&i->m0,(U64)si1);
l19=sj1;
si2=l8;
sj2=(U64)(si2);
sj3=1ULL;
sj2&=sj3;
si3=l10;
sj3=i64_load(&i->m0,(U64)si3);
l21=sj3;
sj2+=sj3;
sj1-=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l11;
si1=8U;
si0+=si1;
l18=si0;
si1=l18;
sj1=i64_load(&i->m0,(U64)si1);
l20=sj1;
sj2=l19;
sj3=l21;
si2=sj2 <= sj3;
sj3=l19;
sj4=l21;
si3=sj3 < sj4;
si4=l8;
si5=1U;
si4&=si5;
si2=si4?si2:si3;
l8=si2;
sj2=(U64)(si2);
si3=l10;
si4=8U;
si3+=si4;
sj3=i64_load(&i->m0,(U64)si3);
l19=sj3;
sj2+=sj3;
sj1-=sj2;
i64_store(&i->m0,(U64)si0,sj1);
sj0=l20;
sj1=l19;
si0=sj0 <= sj1;
sj1=l20;
sj2=l19;
si1=sj1 < sj2;
si2=l8;
si0=si2?si0:si1;
l8=si0;
si0=l10;
si1=16U;
si0+=si1;
l10=si0;
si0=l11;
si1=16U;
si0+=si1;
l11=si0;
si0=l9;
si1=-2U;
si0+=si1;
l9=si0;
if(si0){
goto L20;
}
}
si0=l17;
si0=!(si0);
if(si0){
goto L18;
}
si0=l11;
sj1=0ULL;
si2=l8;
sj2=(U64)(si2);
sj1-=sj2;
si2=l10;
sj2=i64_load(&i->m0,(U64)si2);
sj1-=sj2;
si2=l11;
sj2=i64_load(&i->m0,(U64)si2);
sj1+=sj2;
i64_store(&i->m0,(U64)si0,sj1);
goto L18;
L19:;
si0=l12;
si1=l1;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l12;
si1=l7;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l1;
si1=l7;
si0=si0 != si1;
if(si0){
goto L16;
}
si0=l1;
si1=-2U;
si0&=si1;
l9=si0;
si0=l1;
si1=1U;
si0&=si1;
l17=si0;
si0=0U;
l8=si0;
si0=l6;
l11=si0;
L21:;
{
si0=l11;
si1=l10;
sj1=i64_load(&i->m0,(U64)si1);
l19=sj1;
si2=l8;
sj2=(U64)(si2);
sj3=1ULL;
sj2&=sj3;
sj1-=sj2;
si2=l11;
sj2=i64_load(&i->m0,(U64)si2);
l21=sj2;
sj1-=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l11;
si1=8U;
si0+=si1;
l18=si0;
si1=l10;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
l20=sj1;
sj2=l19;
sj3=l21;
si2=sj2 <= sj3;
sj3=l19;
sj4=l21;
si3=sj3 < sj4;
si4=l8;
si5=1U;
si4&=si5;
si2=si4?si2:si3;
l8=si2;
sj2=(U64)(si2);
sj1-=sj2;
si2=l18;
sj2=i64_load(&i->m0,(U64)si2);
l19=sj2;
sj1-=sj2;
i64_store(&i->m0,(U64)si0,sj1);
sj0=l20;
sj1=l19;
si0=sj0 <= sj1;
sj1=l20;
sj2=l19;
si1=sj1 < sj2;
si2=l8;
si0=si2?si0:si1;
l8=si0;
si0=l11;
si1=16U;
si0+=si1;
l11=si0;
si0=l10;
si1=16U;
si0+=si1;
l10=si0;
si0=l9;
si1=-2U;
si0+=si1;
l9=si0;
if(si0){
goto L21;
}
}
si0=0U;
l14=si0;
si0=l17;
si0=!(si0);
if(si0){
goto L18;
}
si0=l11;
si1=l10;
sj1=i64_load(&i->m0,(U64)si1);
sj2=0ULL;
si3=l8;
sj3=(U64)(si3);
sj2-=sj3;
sj1+=sj2;
si2=l11;
sj2=i64_load(&i->m0,(U64)si2);
sj1-=sj2;
i64_store(&i->m0,(U64)si0,sj1);
L18:;
si0=l0;
si1=l1;
si2=l2;
si3=l3;
si4=l4;
si5=l5;
si6=l6;
si7=l7;
si8=0U;
si9=l13;
si10=l15;
si11=l14;
si10-=si11;
si11=6U;
si10>>=(si11&31);
si9-=si10;
f983(i,si0,si1,si2,si3,si4,si5,si6,si7,si8,si9);
si0=l12;
si1=48U;
si0+=si1;
i->g0=si0;
goto L0;
L17:;
si0=l12;
si1=0U;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=0U;
si1=l12;
si2=16U;
si1+=si2;
si2=l12;
si3=20U;
si2+=si3;
si3=l12;
si4=24U;
si3+=si4;
si4=1203476U;
f1250(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L16:;
si0=l12;
si1=0U;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=0U;
si1=l12;
si2=16U;
si1+=si2;
si2=l12;
si3=20U;
si2+=si3;
si3=l12;
si4=24U;
si3+=si4;
si4=1203508U;
f1250(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L0:;
}

void f995(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4,U32 l5,U32 l6,U32 l7) {
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
U64 l21=0;
U32 l22=0;
U64 l23=0;
U32 si0,si1,si2,si3,si4,si5,si6,si7,si8,si9,si10,si11;
U64 sj0,sj1,sj2,sj3;
si0=l2;
si1=1U;
si0&=si1;
if(si0){
goto L1;
}
si0=l0;
si1=l1;
si2=l2;
si3=1U;
si2>>=(si3&31);
si3=l3;
si4=l4;
si5=l7;
f993(i,si0,si1,si2,si3,si4,si5);
goto L0;
L1:;
si0=l0;
si1=l1;
si2=1U;
si1>>=(si2&31);
l8=si1;
si2=l2;
si3=l3;
si4=l4;
f991(i,si0,si1,si2,si3,si4);
si0=l1;
si1=l8;
si0-=si1;
l9=si0;
si0=l7;
si1=l8;
si0-=si1;
l10=si0;
si1=l8;
si2=2147483646U;
si1&=si2;
l11=si1;
si0=si0 >= si1;
if(si0){
goto L2;
}
si0=l9;
si1=l8;
si0=si0 > si1;
if(si0){
goto L7;
}
si0=l10;
si1=1U;
si0>>=(si1&31);
l12=si0;
si0=0U;
si1=l8;
si2=3U;
si1<<=(si2&31);
si0-=si1;
l13=si0;
si0=l0;
si1=l7;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l7=si0;
si0=l10;
l1=si0;
L8:;
{
si0=l1;
si1=l9;
si0=si0 >= si1;
if(si0){
goto L6;
}
si0=l7;
si0=i32_load(&i->m0,(U64)si0);
si1=l7;
si2=4U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
si2=l7;
si3=l13;
si2+=si3;
l14=si2;
si2=i32_load(&i->m0,(U64)si2);
si3=l14;
si4=4U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si4=l12;
si5=l2;
f980(i,si0,si1,si2,si3,si4,si5);
si0=l1;
si1=1U;
si0+=si1;
l15=si0;
si1=l9;
si0=si0 >= si1;
if(si0){
goto L4;
}
si0=l7;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=l7;
si2=12U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
si2=l14;
si3=8U;
si2+=si3;
si2=i32_load(&i->m0,(U64)si2);
si3=l14;
si4=12U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si4=l15;
si5=l2;
si6=l5;
si7=l6;
f981(i,si0,si1,si2,si3,si4,si5,si6,si7);
si0=l12;
si1=1U;
si0+=si1;
l12=si0;
si0=l7;
si1=16U;
si0+=si1;
l7=si0;
si0=l1;
si1=2U;
si0+=si1;
l1=si0;
si1=l11;
si0=si0 < si1;
if(si0){
goto L8;
}
goto L2;
}
L7:;
si0=l10;
si1=1U;
si0>>=(si1&31);
l12=si0;
si0=0U;
si1=l8;
si2=3U;
si1<<=(si2&31);
si0-=si1;
l13=si0;
si0=l0;
si1=l7;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l7=si0;
si0=l10;
l1=si0;
L9:;
{
si0=l1;
si1=l9;
si0=si0 >= si1;
if(si0){
goto L6;
}
si0=l1;
si1=l8;
si0=si0 >= si1;
if(si0){
goto L5;
}
si0=l7;
si0=i32_load(&i->m0,(U64)si0);
si1=l7;
si2=4U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
si2=l7;
si3=l13;
si2+=si3;
l14=si2;
si2=i32_load(&i->m0,(U64)si2);
si3=l14;
si4=4U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si4=l12;
si5=l2;
f980(i,si0,si1,si2,si3,si4,si5);
si0=l1;
si1=1U;
si0+=si1;
l15=si0;
si1=l8;
si0=si0 >= si1;
if(si0){
goto L3;
}
si0=l7;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=l7;
si2=12U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
si2=l14;
si3=8U;
si2+=si3;
si2=i32_load(&i->m0,(U64)si2);
si3=l14;
si4=12U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si4=l15;
si5=l2;
si6=l5;
si7=l6;
f981(i,si0,si1,si2,si3,si4,si5,si6,si7);
si0=l12;
si1=1U;
si0+=si1;
l12=si0;
si0=l7;
si1=16U;
si0+=si1;
l7=si0;
si0=l1;
si1=2U;
si0+=si1;
l1=si0;
si1=l11;
si0=si0 >= si1;
if(si0){
goto L2;
}
goto L9;
}
L6:;
si0=l1;
si1=l9;
si2=1192936U;
f594(i,si0,si1,si2);
UNREACHABLE;
L5:;
si0=l1;
si1=l8;
si2=1192952U;
f594(i,si0,si1,si2);
UNREACHABLE;
L4:;
si0=l1;
si1=1U;
si0+=si1;
si1=l9;
si2=1192968U;
f594(i,si0,si1,si2);
UNREACHABLE;
L3:;
si0=l1;
si1=1U;
si0+=si1;
si1=l8;
si2=1192984U;
f594(i,si0,si1,si2);
UNREACHABLE;
L2:;
si0=l0;
si1=l8;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l16=si0;
si1=l9;
si2=l2;
si3=l3;
si4=l4;
si5=l10;
f992(i,si0,si1,si2,si3,si4,si5);
si0=l10;
si0=!(si0);
if(si0){
goto L10;
}
si0=l8;
si1=l9;
si0=si0 > si1;
if(si0){
goto L14;
}
si0=l8;
si1=3U;
si0<<=(si1&31);
l17=si0;
si0=0U;
l9=si0;
si0=l0;
l7=si0;
si0=0U;
l1=si0;
L15:;
{
si0=l1;
si1=l8;
si0=si0 >= si1;
if(si0){
goto L11;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
si1=l3;
si1=i32_load(&i->m0,(U64)si1+4U);
si2=l4;
si2=i32_load(&i->m0,(U64)si2);
si3=l4;
si3=i32_load(&i->m0,(U64)si3+4U);
si4=l7;
si4=i32_load(&i->m0,(U64)si4);
si5=l7;
si6=4U;
si5+=si6;
l12=si5;
si5=i32_load(&i->m0,(U64)si5);
si6=l7;
si7=l17;
si6+=si7;
l14=si6;
si6=i32_load(&i->m0,(U64)si6);
si7=l14;
si8=4U;
si7+=si8;
l13=si7;
si7=i32_load(&i->m0,(U64)si7);
si8=l9;
si9=l2;
f990(i,si0,si1,si2,si3,si4,si5,si6,si7,si8,si9);
si0=l12;
si0=i32_load(&i->m0,(U64)si0);
l12=si0;
si0=l7;
si0=i32_load(&i->m0,(U64)si0);
l11=si0;
si0=l7;
si1=l3;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=l12;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l3;
si1=l11;
i32_store(&i->m0,(U64)si0,si1);
si0=l14;
si0=i32_load(&i->m0,(U64)si0);
l15=si0;
si0=l13;
si0=i32_load(&i->m0,(U64)si0);
l13=si0;
si0=l14;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=l13;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l4;
si1=l15;
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
si1=1U;
si0+=si1;
l18=si0;
si1=l8;
si0=si0 >= si1;
if(si0){
goto L13;
}
si0=l11;
si1=l12;
si2=l15;
si3=l13;
si4=l7;
si5=8U;
si4+=si5;
l19=si4;
si4=i32_load(&i->m0,(U64)si4);
si5=l7;
si6=12U;
si5+=si6;
si5=i32_load(&i->m0,(U64)si5);
si6=l14;
si7=8U;
si6+=si7;
l20=si6;
si6=i32_load(&i->m0,(U64)si6);
si7=l14;
si8=12U;
si7+=si8;
si7=i32_load(&i->m0,(U64)si7);
si8=l18;
si9=l2;
si10=l5;
si11=l6;
f994(i,si0,si1,si2,si3,si4,si5,si6,si7,si8,si9,si10,si11);
si0=l19;
sj0=i64_load(&i->m0,(U64)si0);
l21=sj0;
si0=l19;
si1=l3;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
sj1=l21;
i64_store(&i->m0,(U64)si0,sj1);
si0=l20;
sj0=i64_load(&i->m0,(U64)si0);
l21=sj0;
si0=l20;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
sj1=l21;
i64_store(&i->m0,(U64)si0,sj1);
si0=l9;
si1=1U;
si0+=si1;
l9=si0;
si0=l7;
si1=16U;
si0+=si1;
l7=si0;
si0=l1;
si1=2U;
si0+=si1;
l1=si0;
si1=l10;
si0=si0 < si1;
if(si0){
goto L15;
}
goto L10;
}
L14:;
si0=l8;
si1=3U;
si0<<=(si1&31);
l22=si0;
si0=0U;
l12=si0;
si0=l0;
l7=si0;
si0=0U;
l1=si0;
L16:;
{
si0=l1;
si1=l8;
si0=si0 >= si1;
if(si0){
goto L11;
}
si0=l1;
si1=l9;
si0=si0 >= si1;
if(si0){
goto L17;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
si1=l3;
si1=i32_load(&i->m0,(U64)si1+4U);
si2=l4;
si2=i32_load(&i->m0,(U64)si2);
si3=l4;
si3=i32_load(&i->m0,(U64)si3+4U);
si4=l7;
si4=i32_load(&i->m0,(U64)si4);
si5=l7;
si6=4U;
si5+=si6;
l11=si5;
si5=i32_load(&i->m0,(U64)si5);
si6=l7;
si7=l22;
si6+=si7;
l14=si6;
si6=i32_load(&i->m0,(U64)si6);
si7=l14;
si8=4U;
si7+=si8;
l19=si7;
si7=i32_load(&i->m0,(U64)si7);
si8=l12;
si9=l2;
f990(i,si0,si1,si2,si3,si4,si5,si6,si7,si8,si9);
si0=l11;
si0=i32_load(&i->m0,(U64)si0);
l11=si0;
si0=l7;
si0=i32_load(&i->m0,(U64)si0);
l15=si0;
si0=l7;
si1=l3;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=l11;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l3;
si1=l15;
i32_store(&i->m0,(U64)si0,si1);
si0=l14;
si0=i32_load(&i->m0,(U64)si0);
l13=si0;
si0=l19;
si0=i32_load(&i->m0,(U64)si0);
l19=si0;
si0=l14;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=l19;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l4;
si1=l13;
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
si1=1U;
si0+=si1;
l17=si0;
si1=l9;
si0=si0 >= si1;
if(si0){
goto L12;
}
si0=l15;
si1=l11;
si2=l13;
si3=l19;
si4=l7;
si5=8U;
si4+=si5;
l20=si4;
si4=i32_load(&i->m0,(U64)si4);
si5=l7;
si6=12U;
si5+=si6;
si5=i32_load(&i->m0,(U64)si5);
si6=l14;
si7=8U;
si6+=si7;
l18=si6;
si6=i32_load(&i->m0,(U64)si6);
si7=l14;
si8=12U;
si7+=si8;
si7=i32_load(&i->m0,(U64)si7);
si8=l17;
si9=l2;
si10=l5;
si11=l6;
f994(i,si0,si1,si2,si3,si4,si5,si6,si7,si8,si9,si10,si11);
si0=l20;
sj0=i64_load(&i->m0,(U64)si0);
l21=sj0;
si0=l20;
si1=l3;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
sj1=l21;
i64_store(&i->m0,(U64)si0,sj1);
si0=l18;
sj0=i64_load(&i->m0,(U64)si0);
l21=sj0;
si0=l18;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
sj1=l21;
i64_store(&i->m0,(U64)si0,sj1);
si0=l12;
si1=1U;
si0+=si1;
l12=si0;
si0=l7;
si1=16U;
si0+=si1;
l7=si0;
si0=l1;
si1=2U;
si0+=si1;
l1=si0;
si1=l10;
si0=si0 >= si1;
if(si0){
goto L10;
}
goto L16;
L17:;
}
si0=l1;
si1=l9;
si2=1192888U;
f594(i,si0,si1,si2);
UNREACHABLE;
L13:;
si0=l1;
si1=1U;
si0+=si1;
si1=l8;
si2=1192904U;
f594(i,si0,si1,si2);
UNREACHABLE;
L12:;
si0=l1;
si1=1U;
si0+=si1;
si1=l9;
si2=1192920U;
f594(i,si0,si1,si2);
UNREACHABLE;
L11:;
si0=l1;
si1=l8;
si2=1192872U;
f594(i,si0,si1,si2);
UNREACHABLE;
L10:;
si0=l10;
si1=l8;
si0=si0 > si1;
if(si0){
goto L18;
}
si0=l10;
si1=l8;
si0=si0 == si1;
if(si0){
goto L19;
}
si0=l0;
si1=l10;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l2=si0;
L20:;
{
si0=l2;
si0=i32_load(&i->m0,(U64)si0+4U);
l3=si0;
si0=!(si0);
if(si0){
goto L21;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
si0=l3;
si1=-1U;
si0+=si1;
si1=536870911U;
si0&=si1;
l1=si0;
si1=1U;
si0+=si1;
l7=si0;
si1=3U;
si0&=si1;
l3=si0;
sj0=0ULL;
l21=sj0;
si0=l1;
si1=3U;
si0=si0 < si1;
if(si0){
goto L22;
}
si0=l7;
si1=1073741820U;
si0&=si1;
l1=si0;
sj0=0ULL;
l21=sj0;
L23:;
{
si0=l4;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1);
l23=sj1;
sj2=1ULL;
sj1<<=(sj2&63);
sj2=l21;
sj1|=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=8U;
si0+=si1;
l7=si0;
si1=l7;
sj1=i64_load(&i->m0,(U64)si1);
l21=sj1;
sj2=1ULL;
sj1<<=(sj2&63);
sj2=l23;
sj3=63ULL;
sj2>>=(sj3&63);
sj1|=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=16U;
si0+=si1;
l7=si0;
si1=l7;
sj1=i64_load(&i->m0,(U64)si1);
l23=sj1;
sj2=1ULL;
sj1<<=(sj2&63);
sj2=l21;
sj3=63ULL;
sj2>>=(sj3&63);
sj1|=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=24U;
si0+=si1;
l7=si0;
si1=l7;
sj1=i64_load(&i->m0,(U64)si1);
l21=sj1;
sj2=1ULL;
sj1<<=(sj2&63);
sj2=l23;
sj3=63ULL;
sj2>>=(sj3&63);
sj1|=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=32U;
si0+=si1;
l4=si0;
sj0=l21;
sj1=63ULL;
sj0>>=(sj1&63);
l21=sj0;
si0=l1;
si1=-4U;
si0+=si1;
l1=si0;
if(si0){
goto L23;
}
}
L22:;
si0=l3;
si0=!(si0);
if(si0){
goto L21;
}
L24:;
{
si0=l4;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1);
l23=sj1;
sj2=1ULL;
sj1<<=(sj2&63);
sj2=l21;
sj1|=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=8U;
si0+=si1;
l4=si0;
sj0=l23;
sj1=63ULL;
sj0>>=(sj1&63);
l21=sj0;
si0=l3;
si1=-1U;
si0+=si1;
l3=si0;
if(si0){
goto L24;
}
}
L21:;
si0=l2;
si1=8U;
si0+=si1;
l2=si0;
si1=l16;
si0=si0 != si1;
if(si0){
goto L20;
}
}
L19:;
goto L0;
L18:;
si0=l10;
si1=l8;
si2=1192856U;
f593(i,si0,si1,si2);
UNREACHABLE;
L0:;
}

void f996(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4,U32 l5,U32 l6,U32 l7,U32 l8,U32 l9,U32 l10) {
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
U64 l27=0;
U64 l28=0;
U64 l29=0;
U32 l30=0;
U64 l31=0;
U64 l32=0;
U32 si0,si1,si2,si3,si4,si5,si6,si7,si8,si9,si10,si11,si12,si13;
U64 sj0,sj1,sj2,sj3;
si0=i->g0;
si1=32U;
si0-=si1;
l11=si0;
i->g0=si0;
si0=l3;
si1=l2;
si0*=si1;
l12=si0;
si1=l1;
si0=si0 > si1;
if(si0){
goto L1;
}
L2:;
{
si0=l1;
si1=l12;
si0-=si1;
l13=si0;
si0=l0;
si1=l12;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l14=si0;
si0=l3;
switch(si0){
case 0:
goto L3;
case 1:
goto L4;
default:
goto L5;
}
L5:;
si0=l6;
si0=i32_load(&i->m0,(U64)si0+4U);
l1=si0;
si0=l6;
si0=i32_load(&i->m0,(U64)si0);
l15=si0;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+4U);
l16=si0;
si0=l5;
si0=i32_load(&i->m0,(U64)si0);
l17=si0;
si0=l12;
si1=l13;
si0=si0 > si1;
if(si0){
goto L8;
}
si0=0U;
l18=si0;
si0=0U;
l19=si0;
L9:;
{
si0=l17;
l20=si0;
si0=l16;
l21=si0;
si0=l15;
l22=si0;
si0=l1;
l23=si0;
si0=l18;
si1=l12;
si0=si0 >= si1;
if(si0){
goto L6;
}
si0=l14;
si1=l18;
si2=3U;
si1<<=(si2&31);
l1=si1;
si0+=si1;
l24=si0;
si0=i32_load(&i->m0,(U64)si0+4U);
l15=si0;
si0=l24;
si0=i32_load(&i->m0,(U64)si0);
l16=si0;
si0=l0;
si1=l1;
si0+=si1;
l25=si0;
si0=i32_load(&i->m0,(U64)si0+4U);
l1=si0;
si0=l25;
si0=i32_load(&i->m0,(U64)si0);
l17=si0;
si0=l11;
si1=l21;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l21;
si0=!(si0);
if(si0){
goto L7;
}
si0=l20;
si1=l21;
si2=l22;
si3=l23;
si4=l17;
si5=l1;
si6=l16;
si7=l15;
si8=0U;
si9=l19;
si10=l4;
si9*=si10;
l26=si9;
si10=6U;
si9>>=(si10&31);
f982(i,si0,si1,si2,si3,si4,si5,si6,si7,si8,si9);
si0=l26;
si1=63U;
si0&=si1;
l1=si0;
si0=!(si0);
if(si0){
goto L10;
}
si0=l23;
si0=!(si0);
if(si0){
goto L13;
}
sj0=0ULL;
l27=sj0;
sj0=0ULL;
si1=l1;
sj1=(U64)(si1);
l28=sj1;
sj0-=sj1;
sj1=63ULL;
sj0&=sj1;
l29=sj0;
si0=l23;
si1=-1U;
si0+=si1;
l26=si0;
si1=536870911U;
si0&=si1;
l16=si0;
si1=1U;
si0+=si1;
l17=si0;
si1=3U;
si0&=si1;
l15=si0;
si0=l22;
si1=l26;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l30=si0;
sj0=i64_load(&i->m0,(U64)si0);
l31=sj0;
si0=l22;
l1=si0;
si0=l16;
si1=3U;
si0=si0 < si1;
if(si0){
goto L14;
}
si0=l17;
si1=1073741820U;
si0&=si1;
l16=si0;
sj0=0ULL;
l27=sj0;
si0=l22;
l1=si0;
L15:;
{
si0=l1;
si1=l1;
sj1=i64_load(&i->m0,(U64)si1);
l32=sj1;
sj2=l28;
sj1<<=(sj2&63);
sj2=l27;
sj1|=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si1=8U;
si0+=si1;
l17=si0;
si1=l17;
sj1=i64_load(&i->m0,(U64)si1);
l27=sj1;
sj2=l28;
sj1<<=(sj2&63);
sj2=l32;
sj3=l29;
sj2>>=(sj3&63);
sj1|=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si1=16U;
si0+=si1;
l17=si0;
si1=l17;
sj1=i64_load(&i->m0,(U64)si1);
l32=sj1;
sj2=l28;
sj1<<=(sj2&63);
sj2=l27;
sj3=l29;
sj2>>=(sj3&63);
sj1|=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si1=24U;
si0+=si1;
l17=si0;
si1=l17;
sj1=i64_load(&i->m0,(U64)si1);
l27=sj1;
sj2=l28;
sj1<<=(sj2&63);
sj2=l32;
sj3=l29;
sj2>>=(sj3&63);
sj1|=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si1=32U;
si0+=si1;
l1=si0;
sj0=l27;
sj1=l29;
sj0>>=(sj1&63);
l27=sj0;
si0=l16;
si1=-4U;
si0+=si1;
l16=si0;
if(si0){
goto L15;
}
}
L14:;
si0=l15;
si0=!(si0);
if(si0){
goto L16;
}
L17:;
{
si0=l1;
si1=l1;
sj1=i64_load(&i->m0,(U64)si1);
l32=sj1;
sj2=l28;
sj1<<=(sj2&63);
sj2=l27;
sj1|=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si1=8U;
si0+=si1;
l1=si0;
sj0=l32;
sj1=l29;
sj0>>=(sj1&63);
l27=sj0;
si0=l15;
si1=-1U;
si0+=si1;
l15=si0;
if(si0){
goto L17;
}
}
L16:;
si0=l30;
sj0=i64_load(&i->m0,(U64)si0);
l28=sj0;
si0=l30;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l22;
si1=l22;
sj1=i64_load(&i->m0,(U64)si1);
l27=sj1;
sj2=l28;
sj1-=sj2;
i64_store(&i->m0,(U64)si0,sj1);
sj0=l27;
sj1=l28;
si0=sj0 >= sj1;
if(si0){
goto L18;
}
si0=l22;
si1=8U;
si0+=si1;
l1=si0;
si0=l23;
si1=3U;
si0<<=(si1&31);
si1=-8U;
si0+=si1;
l15=si0;
L19:;
{
si0=l15;
si0=!(si0);
if(si0){
goto L18;
}
si0=l1;
si1=l1;
sj1=i64_load(&i->m0,(U64)si1);
l28=sj1;
sj2=-1ULL;
sj1+=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l15;
si1=-8U;
si0+=si1;
l15=si0;
si0=l1;
si1=8U;
si0+=si1;
l1=si0;
sj0=l28;
si0=!(sj0);
if(si0){
goto L19;
}
}
L18:;
si0=l26;
si0=!(si0);
if(si0){
goto L12;
}
si0=l22;
sj0=i64_load(&i->m0,(U64)si0+8U);
l28=sj0;
sj1=l31;
sj2=l29;
sj1=(U64)((I64)sj1>>(sj2&63));
l27=sj1;
sj0-=sj1;
l29=sj0;
sj1=l28;
sj0^=sj1;
sj1=-1ULL;
si0=(U64)((I64)sj0>(I64)sj1);
if(si0){
goto L11;
}
sj0=0ULL;
sj1=l27;
sj0-=sj1;
l32=sj0;
sj1=-1ULL;
si0=(U64)((I64)sj0>(I64)sj1);
if(si0){
goto L20;
}
si0=l22;
sj1=l29;
i64_store(&i->m0,(U64)si0+8U,sj1);
sj0=l28;
sj1=l27;
si0=sj0 >= sj1;
if(si0){
goto L10;
}
si0=l22;
si1=16U;
si0+=si1;
l1=si0;
si0=l23;
si1=3U;
si0<<=(si1&31);
si1=-16U;
si0+=si1;
l15=si0;
L21:;
{
si0=l15;
si0=!(si0);
if(si0){
goto L10;
}
si0=l1;
si1=l1;
sj1=i64_load(&i->m0,(U64)si1);
l29=sj1;
sj2=-1ULL;
sj1+=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l15;
si1=-8U;
si0+=si1;
l15=si0;
si0=l1;
si1=8U;
si0+=si1;
l1=si0;
sj0=l29;
si0=!(sj0);
if(si0){
goto L21;
}
goto L10;
}
L20:;
si0=l22;
sj1=l28;
sj2=l32;
sj1+=sj2;
l29=sj1;
i64_store(&i->m0,(U64)si0+8U,sj1);
sj0=l29;
sj1=l28;
si0=sj0 >= sj1;
if(si0){
goto L10;
}
si0=l22;
si1=16U;
si0+=si1;
l1=si0;
si0=l23;
si1=3U;
si0<<=(si1&31);
si1=-16U;
si0+=si1;
l15=si0;
L22:;
{
si0=l15;
si0=!(si0);
if(si0){
goto L10;
}
si0=l1;
si1=l1;
sj1=i64_load(&i->m0,(U64)si1);
sj2=1ULL;
sj1+=sj2;
l29=sj1;
i64_store(&i->m0,(U64)si0,sj1);
si0=l15;
si1=-8U;
si0+=si1;
l15=si0;
si0=l1;
si1=8U;
si0+=si1;
l1=si0;
sj0=l29;
si0=!(sj0);
if(si0){
goto L22;
}
goto L10;
}
L13:;
si0=1189451U;
si1=43U;
si2=1189808U;
f604(i,si0,si1,si2);
UNREACHABLE;
L12:;
si0=1189451U;
si1=43U;
si2=1189760U;
f604(i,si0,si1,si2);
UNREACHABLE;
L11:;
si0=l22;
sj1=l29;
i64_store(&i->m0,(U64)si0+8U,sj1);
L10:;
si0=l25;
si0=i32_load(&i->m0,(U64)si0);
l17=si0;
si0=l25;
si1=l20;
i32_store(&i->m0,(U64)si0,si1);
si0=l25;
si1=4U;
si0+=si1;
l1=si0;
si0=i32_load(&i->m0,(U64)si0);
l16=si0;
si0=l1;
si1=l21;
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=l16;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l5;
si1=l17;
i32_store(&i->m0,(U64)si0,si1);
si0=l24;
si0=i32_load(&i->m0,(U64)si0);
l15=si0;
si0=l24;
si1=l22;
i32_store(&i->m0,(U64)si0,si1);
si0=l24;
si1=4U;
si0+=si1;
l22=si0;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si0=l22;
si1=l23;
i32_store(&i->m0,(U64)si0,si1);
si0=l6;
si1=l1;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l6;
si1=l15;
i32_store(&i->m0,(U64)si0,si1);
si0=l18;
si1=l2;
si0+=si1;
l18=si0;
si0=l19;
si1=1U;
si0+=si1;
l19=si0;
si1=l3;
si0=si0 != si1;
if(si0){
goto L9;
}
goto L3;
}
L8:;
si0=0U;
l18=si0;
si0=0U;
l19=si0;
L23:;
{
si0=l17;
l20=si0;
si0=l16;
l21=si0;
si0=l15;
l22=si0;
si0=l1;
l23=si0;
si0=l18;
si1=l12;
si0=si0 >= si1;
if(si0){
goto L6;
}
si0=l18;
si1=l13;
si0=si0 >= si1;
if(si0){
goto L28;
}
si0=l14;
si1=l18;
si2=3U;
si1<<=(si2&31);
l1=si1;
si0+=si1;
l24=si0;
si0=i32_load(&i->m0,(U64)si0+4U);
l15=si0;
si0=l24;
si0=i32_load(&i->m0,(U64)si0);
l16=si0;
si0=l0;
si1=l1;
si0+=si1;
l25=si0;
si0=i32_load(&i->m0,(U64)si0+4U);
l1=si0;
si0=l25;
si0=i32_load(&i->m0,(U64)si0);
l17=si0;
si0=l11;
si1=l21;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l21;
si0=!(si0);
if(si0){
goto L7;
}
si0=l20;
si1=l21;
si2=l22;
si3=l23;
si4=l17;
si5=l1;
si6=l16;
si7=l15;
si8=0U;
si9=l19;
si10=l4;
si9*=si10;
l26=si9;
si10=6U;
si9>>=(si10&31);
f982(i,si0,si1,si2,si3,si4,si5,si6,si7,si8,si9);
si0=l26;
si1=63U;
si0&=si1;
l1=si0;
si0=!(si0);
if(si0){
goto L24;
}
si0=l23;
si0=!(si0);
if(si0){
goto L27;
}
sj0=0ULL;
l27=sj0;
sj0=0ULL;
si1=l1;
sj1=(U64)(si1);
l28=sj1;
sj0-=sj1;
sj1=63ULL;
sj0&=sj1;
l29=sj0;
si0=l23;
si1=-1U;
si0+=si1;
l26=si0;
si1=536870911U;
si0&=si1;
l16=si0;
si1=1U;
si0+=si1;
l17=si0;
si1=3U;
si0&=si1;
l15=si0;
si0=l22;
si1=l26;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l30=si0;
sj0=i64_load(&i->m0,(U64)si0);
l31=sj0;
si0=l22;
l1=si0;
si0=l16;
si1=3U;
si0=si0 < si1;
if(si0){
goto L29;
}
si0=l17;
si1=1073741820U;
si0&=si1;
l16=si0;
sj0=0ULL;
l27=sj0;
si0=l22;
l1=si0;
L30:;
{
si0=l1;
si1=l1;
sj1=i64_load(&i->m0,(U64)si1);
l32=sj1;
sj2=l28;
sj1<<=(sj2&63);
sj2=l27;
sj1|=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si1=8U;
si0+=si1;
l17=si0;
si1=l17;
sj1=i64_load(&i->m0,(U64)si1);
l27=sj1;
sj2=l28;
sj1<<=(sj2&63);
sj2=l32;
sj3=l29;
sj2>>=(sj3&63);
sj1|=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si1=16U;
si0+=si1;
l17=si0;
si1=l17;
sj1=i64_load(&i->m0,(U64)si1);
l32=sj1;
sj2=l28;
sj1<<=(sj2&63);
sj2=l27;
sj3=l29;
sj2>>=(sj3&63);
sj1|=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si1=24U;
si0+=si1;
l17=si0;
si1=l17;
sj1=i64_load(&i->m0,(U64)si1);
l27=sj1;
sj2=l28;
sj1<<=(sj2&63);
sj2=l32;
sj3=l29;
sj2>>=(sj3&63);
sj1|=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si1=32U;
si0+=si1;
l1=si0;
sj0=l27;
sj1=l29;
sj0>>=(sj1&63);
l27=sj0;
si0=l16;
si1=-4U;
si0+=si1;
l16=si0;
if(si0){
goto L30;
}
}
L29:;
si0=l15;
si0=!(si0);
if(si0){
goto L31;
}
L32:;
{
si0=l1;
si1=l1;
sj1=i64_load(&i->m0,(U64)si1);
l32=sj1;
sj2=l28;
sj1<<=(sj2&63);
sj2=l27;
sj1|=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si1=8U;
si0+=si1;
l1=si0;
sj0=l32;
sj1=l29;
sj0>>=(sj1&63);
l27=sj0;
si0=l15;
si1=-1U;
si0+=si1;
l15=si0;
if(si0){
goto L32;
}
}
L31:;
si0=l30;
sj0=i64_load(&i->m0,(U64)si0);
l28=sj0;
si0=l30;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l22;
si1=l22;
sj1=i64_load(&i->m0,(U64)si1);
l27=sj1;
sj2=l28;
sj1-=sj2;
i64_store(&i->m0,(U64)si0,sj1);
sj0=l27;
sj1=l28;
si0=sj0 >= sj1;
if(si0){
goto L33;
}
si0=l22;
si1=8U;
si0+=si1;
l1=si0;
si0=l23;
si1=3U;
si0<<=(si1&31);
si1=-8U;
si0+=si1;
l15=si0;
L34:;
{
si0=l15;
si0=!(si0);
if(si0){
goto L33;
}
si0=l1;
si1=l1;
sj1=i64_load(&i->m0,(U64)si1);
l28=sj1;
sj2=-1ULL;
sj1+=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l15;
si1=-8U;
si0+=si1;
l15=si0;
si0=l1;
si1=8U;
si0+=si1;
l1=si0;
sj0=l28;
si0=!(sj0);
if(si0){
goto L34;
}
}
L33:;
si0=l26;
si0=!(si0);
if(si0){
goto L26;
}
si0=l22;
sj0=i64_load(&i->m0,(U64)si0+8U);
l28=sj0;
sj1=l31;
sj2=l29;
sj1=(U64)((I64)sj1>>(sj2&63));
l27=sj1;
sj0-=sj1;
l29=sj0;
sj1=l28;
sj0^=sj1;
sj1=-1ULL;
si0=(U64)((I64)sj0>(I64)sj1);
if(si0){
goto L25;
}
sj0=0ULL;
sj1=l27;
sj0-=sj1;
l32=sj0;
sj1=-1ULL;
si0=(U64)((I64)sj0>(I64)sj1);
if(si0){
goto L35;
}
si0=l22;
sj1=l29;
i64_store(&i->m0,(U64)si0+8U,sj1);
sj0=l28;
sj1=l27;
si0=sj0 >= sj1;
if(si0){
goto L24;
}
si0=l22;
si1=16U;
si0+=si1;
l1=si0;
si0=l23;
si1=3U;
si0<<=(si1&31);
si1=-16U;
si0+=si1;
l15=si0;
L36:;
{
si0=l15;
si0=!(si0);
if(si0){
goto L24;
}
si0=l1;
si1=l1;
sj1=i64_load(&i->m0,(U64)si1);
l29=sj1;
sj2=-1ULL;
sj1+=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l15;
si1=-8U;
si0+=si1;
l15=si0;
si0=l1;
si1=8U;
si0+=si1;
l1=si0;
sj0=l29;
si0=!(sj0);
if(si0){
goto L36;
}
goto L24;
}
L35:;
si0=l22;
sj1=l28;
sj2=l32;
sj1+=sj2;
l29=sj1;
i64_store(&i->m0,(U64)si0+8U,sj1);
sj0=l29;
sj1=l28;
si0=sj0 >= sj1;
if(si0){
goto L24;
}
si0=l22;
si1=16U;
si0+=si1;
l1=si0;
si0=l23;
si1=3U;
si0<<=(si1&31);
si1=-16U;
si0+=si1;
l15=si0;
L37:;
{
si0=l15;
si0=!(si0);
if(si0){
goto L24;
}
si0=l1;
si1=l1;
sj1=i64_load(&i->m0,(U64)si1);
sj2=1ULL;
sj1+=sj2;
l29=sj1;
i64_store(&i->m0,(U64)si0,sj1);
si0=l15;
si1=-8U;
si0+=si1;
l15=si0;
si0=l1;
si1=8U;
si0+=si1;
l1=si0;
sj0=l29;
si0=!(sj0);
if(si0){
goto L37;
}
goto L24;
}
L28:;
si0=l18;
si1=l13;
si2=1193064U;
f594(i,si0,si1,si2);
UNREACHABLE;
L27:;
si0=1189451U;
si1=43U;
si2=1189808U;
f604(i,si0,si1,si2);
UNREACHABLE;
L26:;
si0=1189451U;
si1=43U;
si2=1189760U;
f604(i,si0,si1,si2);
UNREACHABLE;
L25:;
si0=l22;
sj1=l29;
i64_store(&i->m0,(U64)si0+8U,sj1);
L24:;
si0=l25;
si0=i32_load(&i->m0,(U64)si0);
l17=si0;
si0=l25;
si1=l20;
i32_store(&i->m0,(U64)si0,si1);
si0=l25;
si1=4U;
si0+=si1;
l1=si0;
si0=i32_load(&i->m0,(U64)si0);
l16=si0;
si0=l1;
si1=l21;
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=l16;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l5;
si1=l17;
i32_store(&i->m0,(U64)si0,si1);
si0=l24;
si0=i32_load(&i->m0,(U64)si0);
l15=si0;
si0=l24;
si1=l22;
i32_store(&i->m0,(U64)si0,si1);
si0=l24;
si1=4U;
si0+=si1;
l22=si0;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si0=l22;
si1=l23;
i32_store(&i->m0,(U64)si0,si1);
si0=l6;
si1=l1;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l6;
si1=l15;
i32_store(&i->m0,(U64)si0,si1);
si0=l18;
si1=l2;
si0+=si1;
l18=si0;
si0=l19;
si1=1U;
si0+=si1;
l19=si0;
si1=l3;
si0=si0 == si1;
if(si0){
goto L3;
}
goto L23;
}
L7:;
si0=l11;
si1=0U;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=1U;
si1=l11;
si2=4U;
si1+=si2;
si2=1189840U;
si3=l11;
si4=8U;
si3+=si4;
si4=1192332U;
f1250(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L6:;
si0=l18;
si1=l12;
si2=1193048U;
f594(i,si0,si1,si2);
UNREACHABLE;
L4:;
si0=l12;
si0=!(si0);
if(si0){
goto L41;
}
si0=l1;
si1=l12;
si0=si0 == si1;
if(si0){
goto L40;
}
si0=l5;
si0=i32_load(&i->m0,(U64)si0);
l22=si0;
si1=l5;
si1=i32_load(&i->m0,(U64)si1+4U);
l17=si1;
si2=l6;
si2=i32_load(&i->m0,(U64)si2);
l21=si2;
si3=l6;
si3=i32_load(&i->m0,(U64)si3+4U);
l18=si3;
si4=l0;
si4=i32_load(&i->m0,(U64)si4);
si5=l0;
si6=4U;
si5+=si6;
l1=si5;
si5=i32_load(&i->m0,(U64)si5);
si6=l14;
si6=i32_load(&i->m0,(U64)si6);
si7=l1;
si8=l12;
si9=3U;
si8<<=(si9&31);
si7+=si8;
l24=si7;
si7=i32_load(&i->m0,(U64)si7);
si8=l8;
si9=l9;
si10=l7;
si9*=si10;
l16=si9;
si8*=si9;
l15=si8;
si9=0U;
si10=l17;
si11=6U;
si10<<=(si11&31);
si11=-64U;
si10+=si11;
l1=si10;
si11=l15;
si12=l1;
si11=si11 < si12;
l23=si11;
si9=si11?si9:si10;
si8-=si9;
si9=6U;
si8>>=(si9&31);
si9=l8;
si10=l10;
si9+=si10;
si10=l16;
si9*=si10;
l25=si9;
si10=0U;
si11=l1;
si12=l25;
si13=l1;
si12=si12 < si13;
l19=si12;
si10=si12?si10:si11;
si9-=si10;
si10=6U;
si9>>=(si10&31);
f982(i,si0,si1,si2,si3,si4,si5,si6,si7,si8,si9);
si0=l22;
si1=l17;
si2=l15;
si3=63U;
si2&=si3;
sj2=(U64)(si2);
f976(i,si0,si1,sj2);
si0=l23;
if(si0){
goto L38;
}
si0=l17;
si0=!(si0);
if(si0){
goto L38;
}
si0=l17;
si1=3U;
si0<<=(si1&31);
l16=si0;
si0=l17;
si1=-1U;
si0+=si1;
si1=536870911U;
si0&=si1;
si1=1U;
si0+=si1;
l23=si0;
si0=0U;
l15=si0;
si0=l22;
l1=si0;
L43:;
{
si0=l1;
sj0=i64_load(&i->m0,(U64)si0);
sj1=0ULL;
si0=sj0 != sj1;
if(si0){
goto L42;
}
si0=l15;
si1=1U;
si0+=si1;
l15=si0;
si0=l1;
si1=8U;
si0+=si1;
l1=si0;
si0=l16;
si1=-8U;
si0+=si1;
l16=si0;
if(si0){
goto L43;
}
}
si0=l23;
l15=si0;
L42:;
si0=l15;
si1=l17;
si0=si0 == si1;
if(si0){
goto L38;
}
si0=l15;
si1=l17;
si0=si0 >= si1;
if(si0){
goto L39;
}
si0=l22;
si1=l15;
si2=3U;
si1<<=(si2&31);
l16=si1;
si0+=si1;
l1=si0;
sj1=0ULL;
si2=l1;
sj2=i64_load(&i->m0,(U64)si2);
sj1-=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l15;
si1=1U;
si0+=si1;
l1=si0;
si1=l17;
si0=si0 == si1;
if(si0){
goto L38;
}
si0=l17;
si1=3U;
si0<<=(si1&31);
si1=l16;
si0-=si1;
si1=-8U;
si0+=si1;
l15=si0;
si0=l22;
si1=l1;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l1=si0;
L44:;
{
si0=l1;
si1=l1;
sj1=i64_load(&i->m0,(U64)si1);
sj2=-1ULL;
sj1^=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si1=8U;
si0+=si1;
l1=si0;
si0=l15;
si1=-8U;
si0+=si1;
l15=si0;
if(si0){
goto L44;
}
goto L38;
}
L41:;
si0=0U;
si1=0U;
si2=1193016U;
f594(i,si0,si1,si2);
UNREACHABLE;
L40:;
si0=0U;
si1=0U;
si2=1193032U;
f594(i,si0,si1,si2);
UNREACHABLE;
L39:;
si0=l15;
si1=l17;
si2=1238956U;
f594(i,si0,si1,si2);
UNREACHABLE;
L38:;
si0=l21;
si1=l18;
si2=l25;
si3=63U;
si2&=si3;
sj2=(U64)(si2);
f976(i,si0,si1,sj2);
si0=l19;
if(si0){
goto L45;
}
si0=l18;
si0=!(si0);
if(si0){
goto L45;
}
si0=l18;
si1=3U;
si0<<=(si1&31);
l16=si0;
si0=l18;
si1=-1U;
si0+=si1;
si1=536870911U;
si0&=si1;
si1=1U;
si0+=si1;
l25=si0;
si0=0U;
l15=si0;
si0=l21;
l1=si0;
L47:;
{
si0=l1;
sj0=i64_load(&i->m0,(U64)si0);
sj1=0ULL;
si0=sj0 != sj1;
if(si0){
goto L46;
}
si0=l15;
si1=1U;
si0+=si1;
l15=si0;
si0=l1;
si1=8U;
si0+=si1;
l1=si0;
si0=l16;
si1=-8U;
si0+=si1;
l16=si0;
if(si0){
goto L47;
}
}
si0=l25;
l15=si0;
L46:;
si0=l15;
si1=l18;
si0=si0 == si1;
if(si0){
goto L45;
}
si0=l15;
si1=l18;
si0=si0 >= si1;
if(si0){
goto L48;
}
si0=l21;
si1=l15;
si2=3U;
si1<<=(si2&31);
l16=si1;
si0+=si1;
l1=si0;
sj1=0ULL;
si2=l1;
sj2=i64_load(&i->m0,(U64)si2);
sj1-=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l15;
si1=1U;
si0+=si1;
l1=si0;
si1=l18;
si0=si0 == si1;
if(si0){
goto L45;
}
si0=l18;
si1=3U;
si0<<=(si1&31);
si1=l16;
si0-=si1;
si1=-8U;
si0+=si1;
l15=si0;
si0=l21;
si1=l1;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l1=si0;
L49:;
{
si0=l1;
si1=l1;
sj1=i64_load(&i->m0,(U64)si1);
sj2=-1ULL;
sj1^=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si1=8U;
si0+=si1;
l1=si0;
si0=l15;
si1=-8U;
si0+=si1;
l15=si0;
if(si0){
goto L49;
}
goto L45;
}
L48:;
si0=l15;
si1=l18;
si2=1238956U;
f594(i,si0,si1,si2);
UNREACHABLE;
L45:;
si0=l0;
sj0=i64_load(&i->m0,(U64)si0);
l29=sj0;
si0=l0;
si1=l22;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l17;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l5;
sj1=l29;
i64_store(&i->m0,(U64)si0,sj1);
si0=l24;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si0=l24;
si1=l18;
i32_store(&i->m0,(U64)si0,si1);
si0=l6;
si1=l1;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l14;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si0=l14;
si1=l21;
i32_store(&i->m0,(U64)si0,si1);
si0=l6;
si1=l1;
i32_store(&i->m0,(U64)si0,si1);
si0=l11;
si1=32U;
si0+=si1;
i->g0=si0;
goto L0;
L3:;
si0=l0;
si1=l12;
si2=l2;
si3=l3;
si4=1U;
si3>>=(si4&31);
l3=si3;
si4=l4;
si5=1U;
si4<<=(si5&31);
l4=si4;
si5=l5;
si6=l6;
si7=l7;
si8=l8;
si9=l9;
si10=l10;
si11=1U;
si10<<=(si11&31);
l1=si10;
f996(i,si0,si1,si2,si3,si4,si5,si6,si7,si8,si9,si10);
si0=l8;
si1=l10;
si0+=si1;
l8=si0;
si0=l1;
l10=si0;
si0=l13;
l1=si0;
si0=l14;
l0=si0;
si0=l3;
si1=l2;
si0*=si1;
l12=si0;
si1=l13;
si0=si0 <= si1;
if(si0){
goto L2;
}
}
L1:;
si0=1189416U;
si1=35U;
si2=1193000U;
f604(i,si0,si1,si2);
UNREACHABLE;
L0:;
}

void f997(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4,U32 l5,U32 l6,U32 l7,U32 l8) {
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
U32 l29=0;
U32 l30=0;
U32 l31=0;
U32 l32=0;
U32 l33=0;
U32 l34=0;
U32 l35=0;
U64 l36=0;
U64 l37=0;
U64 l38=0;
U32 l39=0;
U64 l40=0;
U64 l41=0;
U32 l42=0;
U32 l43=0;
U32 l44=0;
U32 l45=0;
U32 l46=0;
U32 l47=0;
U32 l48=0;
U32 si0,si1,si2,si3,si4,si5,si6,si7,si8,si9,si10,si11;
U64 sj0,sj1,sj2,sj3;
si0=i->g0;
si1=32U;
si0-=si1;
l9=si0;
i->g0=si0;
si0=l7;
si0=!(si0);
if(si0){
goto L1;
}
si0=l1;
si1=1U;
si0>>=(si1&31);
l10=si0;
si1=l7;
si0=DIV_U(si0,si1);
l11=si0;
si0=l8;
si1=l10;
si0-=si1;
l12=si0;
si1=l7;
si0=DIV_U(si0,si1);
l13=si0;
si0=l10;
si1=l7;
si0=si0 < si1;
if(si0){
goto L2;
}
si0=l7;
si1=3U;
si0<<=(si1&31);
l14=si0;
si0=l10;
si1=1U;
si0+=si1;
l15=si0;
si0=l2;
si1=1U;
si0>>=(si1&31);
l16=si0;
si0=l2;
si1=1U;
si0&=si1;
l17=si0;
si0=l7;
si1=l2;
si0*=si1;
l18=si0;
si0=l11;
si1=1U;
si0>>=(si1&31);
l19=si0;
si0=l1;
si1=l10;
si0-=si1;
l20=si0;
si0=l0;
si1=l10;
si2=3U;
si1<<=(si2&31);
l21=si1;
si0+=si1;
l22=si0;
si0=l11;
si0=I32_CLZ(si0);
si1=l11;
si1=I32_POPCNT(si1);
si2=1U;
si1=si1 == si2;
si0+=si1;
si1=31U;
si0&=si1;
l23=si0;
si0=l0;
l24=si0;
si0=0U;
l25=si0;
L3:;
{
si0=l17;
si0=!(si0);
if(si0){
goto L14;
}
si0=l25;
l8=si0;
si0=l25;
si1=l12;
si0=si0 >= si1;
if(si0){
goto L5;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
l26=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
l27=si0;
si0=l25;
l8=si0;
si0=l10;
si1=l20;
si0=si0 > si1;
if(si0){
goto L13;
}
L15:;
{
si0=l8;
si1=l10;
si0=si0 >= si1;
if(si0){
goto L10;
}
si0=l22;
si1=l8;
si2=3U;
si1<<=(si2&31);
l1=si1;
si0+=si1;
l28=si0;
si0=i32_load(&i->m0,(U64)si0+4U);
l29=si0;
si0=l28;
si0=i32_load(&i->m0,(U64)si0);
l30=si0;
si0=l0;
si1=l1;
si0+=si1;
l31=si0;
si0=i32_load(&i->m0,(U64)si0+4U);
l1=si0;
si0=l31;
si0=i32_load(&i->m0,(U64)si0);
l32=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+4U);
l33=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+4U);
l34=si0;
si0=l8;
si1=1U;
si0&=si1;
si0=!(si0);
if(si0){
goto L17;
}
si0=l26;
si1=l34;
si2=l27;
si3=l33;
si4=l32;
si5=l1;
si6=l30;
si7=l29;
si8=l8;
si9=l2;
si10=l5;
si11=l6;
f988(i,si0,si1,si2,si3,si4,si5,si6,si7,si8,si9,si10,si11);
goto L16;
L17:;
si0=l9;
si1=l34;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l34;
si0=!(si0);
if(si0){
goto L9;
}
si0=l26;
si1=l34;
si2=l27;
si3=l33;
si4=l32;
si5=l1;
si6=l30;
si7=l29;
si8=0U;
si9=l8;
si10=1U;
si9>>=(si10&31);
si10=l2;
si9*=si10;
l35=si9;
si10=6U;
si9>>=(si10&31);
f982(i,si0,si1,si2,si3,si4,si5,si6,si7,si8,si9);
si0=l35;
si1=63U;
si0&=si1;
l1=si0;
si0=!(si0);
if(si0){
goto L16;
}
si0=l33;
si0=!(si0);
if(si0){
goto L11;
}
sj0=0ULL;
l36=sj0;
sj0=0ULL;
si1=l1;
sj1=(U64)(si1);
l37=sj1;
sj0-=sj1;
sj1=63ULL;
sj0&=sj1;
l38=sj0;
si0=l33;
si1=-1U;
si0+=si1;
l35=si0;
si1=536870911U;
si0&=si1;
l30=si0;
si1=1U;
si0+=si1;
l32=si0;
si1=3U;
si0&=si1;
l29=si0;
si0=l27;
si1=l35;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l39=si0;
sj0=i64_load(&i->m0,(U64)si0);
l40=sj0;
si0=l27;
l1=si0;
si0=l30;
si1=3U;
si0=si0 < si1;
if(si0){
goto L18;
}
si0=l32;
si1=1073741820U;
si0&=si1;
l30=si0;
sj0=0ULL;
l36=sj0;
si0=l27;
l1=si0;
L19:;
{
si0=l1;
si1=l1;
sj1=i64_load(&i->m0,(U64)si1);
l41=sj1;
sj2=l37;
sj1<<=(sj2&63);
sj2=l36;
sj1|=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si1=8U;
si0+=si1;
l32=si0;
si1=l32;
sj1=i64_load(&i->m0,(U64)si1);
l36=sj1;
sj2=l37;
sj1<<=(sj2&63);
sj2=l41;
sj3=l38;
sj2>>=(sj3&63);
sj1|=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si1=16U;
si0+=si1;
l32=si0;
si1=l32;
sj1=i64_load(&i->m0,(U64)si1);
l41=sj1;
sj2=l37;
sj1<<=(sj2&63);
sj2=l36;
sj3=l38;
sj2>>=(sj3&63);
sj1|=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si1=24U;
si0+=si1;
l32=si0;
si1=l32;
sj1=i64_load(&i->m0,(U64)si1);
l36=sj1;
sj2=l37;
sj1<<=(sj2&63);
sj2=l41;
sj3=l38;
sj2>>=(sj3&63);
sj1|=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si1=32U;
si0+=si1;
l1=si0;
sj0=l36;
sj1=l38;
sj0>>=(sj1&63);
l36=sj0;
si0=l30;
si1=-4U;
si0+=si1;
l30=si0;
if(si0){
goto L19;
}
}
L18:;
si0=l29;
si0=!(si0);
if(si0){
goto L20;
}
L21:;
{
si0=l1;
si1=l1;
sj1=i64_load(&i->m0,(U64)si1);
l41=sj1;
sj2=l37;
sj1<<=(sj2&63);
sj2=l36;
sj1|=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si1=8U;
si0+=si1;
l1=si0;
sj0=l41;
sj1=l38;
sj0>>=(sj1&63);
l36=sj0;
si0=l29;
si1=-1U;
si0+=si1;
l29=si0;
if(si0){
goto L21;
}
}
L20:;
si0=l39;
sj0=i64_load(&i->m0,(U64)si0);
l37=sj0;
si0=l39;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l27;
si1=l27;
sj1=i64_load(&i->m0,(U64)si1);
l36=sj1;
sj2=l37;
sj1-=sj2;
i64_store(&i->m0,(U64)si0,sj1);
sj0=l36;
sj1=l37;
si0=sj0 >= sj1;
if(si0){
goto L22;
}
si0=l27;
si1=8U;
si0+=si1;
l1=si0;
si0=l33;
si1=3U;
si0<<=(si1&31);
si1=-8U;
si0+=si1;
l29=si0;
L23:;
{
si0=l29;
si0=!(si0);
if(si0){
goto L22;
}
si0=l1;
si1=l1;
sj1=i64_load(&i->m0,(U64)si1);
l37=sj1;
sj2=-1ULL;
sj1+=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l29;
si1=-8U;
si0+=si1;
l29=si0;
si0=l1;
si1=8U;
si0+=si1;
l1=si0;
sj0=l37;
si0=!(sj0);
if(si0){
goto L23;
}
}
L22:;
si0=l35;
si0=!(si0);
if(si0){
goto L12;
}
si0=l27;
sj0=i64_load(&i->m0,(U64)si0+8U);
l37=sj0;
sj1=l40;
sj2=l38;
sj1=(U64)((I64)sj1>>(sj2&63));
l36=sj1;
sj0-=sj1;
l38=sj0;
sj1=l37;
sj0^=sj1;
sj1=0ULL;
si0=(U64)((I64)sj0<(I64)sj1);
if(si0){
goto L24;
}
si0=l27;
sj1=l38;
i64_store(&i->m0,(U64)si0+8U,sj1);
goto L16;
L24:;
sj0=0ULL;
sj1=l36;
sj0-=sj1;
l41=sj0;
sj1=0ULL;
si0=(U64)((I64)sj0<(I64)sj1);
if(si0){
goto L25;
}
si0=l27;
sj1=l37;
sj2=l41;
sj1+=sj2;
l38=sj1;
i64_store(&i->m0,(U64)si0+8U,sj1);
sj0=l38;
sj1=l37;
si0=sj0 >= sj1;
if(si0){
goto L16;
}
si0=l27;
si1=16U;
si0+=si1;
l1=si0;
si0=l33;
si1=3U;
si0<<=(si1&31);
si1=-16U;
si0+=si1;
l29=si0;
L26:;
{
si0=l29;
si0=!(si0);
if(si0){
goto L16;
}
si0=l1;
si1=l1;
sj1=i64_load(&i->m0,(U64)si1);
sj2=1ULL;
sj1+=sj2;
l38=sj1;
i64_store(&i->m0,(U64)si0,sj1);
si0=l29;
si1=-8U;
si0+=si1;
l29=si0;
si0=l1;
si1=8U;
si0+=si1;
l1=si0;
sj0=l38;
si0=!(sj0);
if(si0){
goto L26;
}
goto L16;
}
L25:;
si0=l27;
sj1=l38;
i64_store(&i->m0,(U64)si0+8U,sj1);
sj0=l37;
sj1=l36;
si0=sj0 >= sj1;
if(si0){
goto L16;
}
si0=l27;
si1=16U;
si0+=si1;
l1=si0;
si0=l33;
si1=3U;
si0<<=(si1&31);
si1=-16U;
si0+=si1;
l29=si0;
L27:;
{
si0=l29;
si0=!(si0);
if(si0){
goto L16;
}
si0=l1;
si1=l1;
sj1=i64_load(&i->m0,(U64)si1);
l38=sj1;
sj2=-1ULL;
sj1+=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l29;
si1=-8U;
si0+=si1;
l29=si0;
si0=l1;
si1=8U;
si0+=si1;
l1=si0;
sj0=l38;
si0=!(sj0);
if(si0){
goto L27;
}
}
L16:;
si0=l31;
si1=4U;
si0+=si1;
l1=si0;
si0=i32_load(&i->m0,(U64)si0);
l29=si0;
si0=l1;
si1=l34;
i32_store(&i->m0,(U64)si0,si1);
si0=l31;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si0=l31;
si1=l26;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=l29;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l3;
si1=l1;
i32_store(&i->m0,(U64)si0,si1);
si0=l28;
si1=4U;
si0+=si1;
l29=si0;
si0=i32_load(&i->m0,(U64)si0);
l30=si0;
si0=l29;
si1=l33;
i32_store(&i->m0,(U64)si0,si1);
si0=l28;
si0=i32_load(&i->m0,(U64)si0);
l29=si0;
si0=l28;
si1=l27;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=l30;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l4;
si1=l29;
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
l26=si0;
si0=l29;
l27=si0;
si0=l8;
si1=l7;
si0+=si1;
l8=si0;
si1=l12;
si0=si0 < si1;
if(si0){
goto L15;
}
goto L5;
}
L14:;
si0=l25;
l30=si0;
si0=l25;
si1=l12;
si0=si0 >= si1;
if(si0){
goto L6;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
l8=si0;
si0=l25;
l30=si0;
si0=l10;
si1=l20;
si0=si0 > si1;
if(si0){
goto L30;
}
L31:;
{
si0=l8;
l32=si0;
si0=l1;
l33=si0;
si0=l30;
si1=l10;
si0=si0 >= si1;
if(si0){
goto L8;
}
si0=l22;
si1=l30;
si2=3U;
si1<<=(si2&31);
l1=si1;
si0+=si1;
l26=si0;
si0=i32_load(&i->m0,(U64)si0+4U);
l8=si0;
si0=l26;
si0=i32_load(&i->m0,(U64)si0);
l29=si0;
si0=l0;
si1=l1;
si0+=si1;
l28=si0;
si0=i32_load(&i->m0,(U64)si0+4U);
l1=si0;
si0=l28;
si0=i32_load(&i->m0,(U64)si0);
l27=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+4U);
l31=si0;
si0=l9;
si1=l3;
si1=i32_load(&i->m0,(U64)si1+4U);
l34=si1;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l34;
si0=!(si0);
if(si0){
goto L7;
}
si0=l33;
si1=l34;
si2=l32;
si3=l31;
si4=l27;
si5=l1;
si6=l29;
si7=l8;
si8=0U;
si9=l30;
si10=l16;
si9*=si10;
l35=si9;
si10=6U;
si9>>=(si10&31);
f982(i,si0,si1,si2,si3,si4,si5,si6,si7,si8,si9);
si0=l35;
si1=63U;
si0&=si1;
l1=si0;
si0=!(si0);
if(si0){
goto L32;
}
si0=l31;
si0=!(si0);
if(si0){
goto L28;
}
sj0=0ULL;
l36=sj0;
sj0=0ULL;
si1=l1;
sj1=(U64)(si1);
l37=sj1;
sj0-=sj1;
sj1=63ULL;
sj0&=sj1;
l38=sj0;
si0=l31;
si1=-1U;
si0+=si1;
l35=si0;
si1=536870911U;
si0&=si1;
l29=si0;
si1=1U;
si0+=si1;
l27=si0;
si1=3U;
si0&=si1;
l8=si0;
si0=l32;
si1=l35;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l39=si0;
sj0=i64_load(&i->m0,(U64)si0);
l40=sj0;
si0=l32;
l1=si0;
si0=l29;
si1=3U;
si0=si0 < si1;
if(si0){
goto L33;
}
si0=l27;
si1=1073741820U;
si0&=si1;
l29=si0;
sj0=0ULL;
l36=sj0;
si0=l32;
l1=si0;
L34:;
{
si0=l1;
si1=l1;
sj1=i64_load(&i->m0,(U64)si1);
l41=sj1;
sj2=l37;
sj1<<=(sj2&63);
sj2=l36;
sj1|=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si1=8U;
si0+=si1;
l27=si0;
si1=l27;
sj1=i64_load(&i->m0,(U64)si1);
l36=sj1;
sj2=l37;
sj1<<=(sj2&63);
sj2=l41;
sj3=l38;
sj2>>=(sj3&63);
sj1|=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si1=16U;
si0+=si1;
l27=si0;
si1=l27;
sj1=i64_load(&i->m0,(U64)si1);
l41=sj1;
sj2=l37;
sj1<<=(sj2&63);
sj2=l36;
sj3=l38;
sj2>>=(sj3&63);
sj1|=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si1=24U;
si0+=si1;
l27=si0;
si1=l27;
sj1=i64_load(&i->m0,(U64)si1);
l36=sj1;
sj2=l37;
sj1<<=(sj2&63);
sj2=l41;
sj3=l38;
sj2>>=(sj3&63);
sj1|=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si1=32U;
si0+=si1;
l1=si0;
sj0=l36;
sj1=l38;
sj0>>=(sj1&63);
l36=sj0;
si0=l29;
si1=-4U;
si0+=si1;
l29=si0;
if(si0){
goto L34;
}
}
L33:;
si0=l8;
si0=!(si0);
if(si0){
goto L35;
}
L36:;
{
si0=l1;
si1=l1;
sj1=i64_load(&i->m0,(U64)si1);
l41=sj1;
sj2=l37;
sj1<<=(sj2&63);
sj2=l36;
sj1|=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si1=8U;
si0+=si1;
l1=si0;
sj0=l41;
sj1=l38;
sj0>>=(sj1&63);
l36=sj0;
si0=l8;
si1=-1U;
si0+=si1;
l8=si0;
if(si0){
goto L36;
}
}
L35:;
si0=l39;
sj0=i64_load(&i->m0,(U64)si0);
l37=sj0;
si0=l39;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l32;
si1=l32;
sj1=i64_load(&i->m0,(U64)si1);
l36=sj1;
sj2=l37;
sj1-=sj2;
i64_store(&i->m0,(U64)si0,sj1);
sj0=l36;
sj1=l37;
si0=sj0 >= sj1;
if(si0){
goto L37;
}
si0=l32;
si1=8U;
si0+=si1;
l1=si0;
si0=l31;
si1=3U;
si0<<=(si1&31);
si1=-8U;
si0+=si1;
l8=si0;
L38:;
{
si0=l8;
si0=!(si0);
if(si0){
goto L37;
}
si0=l1;
si1=l1;
sj1=i64_load(&i->m0,(U64)si1);
l37=sj1;
sj2=-1ULL;
sj1+=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l8;
si1=-8U;
si0+=si1;
l8=si0;
si0=l1;
si1=8U;
si0+=si1;
l1=si0;
sj0=l37;
si0=!(sj0);
if(si0){
goto L38;
}
}
L37:;
si0=l35;
si0=!(si0);
if(si0){
goto L29;
}
si0=l32;
sj0=i64_load(&i->m0,(U64)si0+8U);
l37=sj0;
sj1=l40;
sj2=l38;
sj1=(U64)((I64)sj1>>(sj2&63));
l36=sj1;
sj0-=sj1;
l38=sj0;
sj1=l37;
sj0^=sj1;
sj1=0ULL;
si0=(U64)((I64)sj0<(I64)sj1);
if(si0){
goto L39;
}
si0=l32;
sj1=l38;
i64_store(&i->m0,(U64)si0+8U,sj1);
goto L32;
L39:;
sj0=0ULL;
sj1=l36;
sj0-=sj1;
l41=sj0;
sj1=0ULL;
si0=(U64)((I64)sj0<(I64)sj1);
if(si0){
goto L40;
}
si0=l32;
sj1=l37;
sj2=l41;
sj1+=sj2;
l38=sj1;
i64_store(&i->m0,(U64)si0+8U,sj1);
sj0=l38;
sj1=l37;
si0=sj0 >= sj1;
if(si0){
goto L32;
}
si0=l32;
si1=16U;
si0+=si1;
l1=si0;
si0=l31;
si1=3U;
si0<<=(si1&31);
si1=-16U;
si0+=si1;
l8=si0;
L41:;
{
si0=l8;
si0=!(si0);
if(si0){
goto L32;
}
si0=l1;
si1=l1;
sj1=i64_load(&i->m0,(U64)si1);
sj2=1ULL;
sj1+=sj2;
l38=sj1;
i64_store(&i->m0,(U64)si0,sj1);
si0=l8;
si1=-8U;
si0+=si1;
l8=si0;
si0=l1;
si1=8U;
si0+=si1;
l1=si0;
sj0=l38;
si0=!(sj0);
if(si0){
goto L41;
}
goto L32;
}
L40:;
si0=l32;
sj1=l38;
i64_store(&i->m0,(U64)si0+8U,sj1);
sj0=l37;
sj1=l36;
si0=sj0 >= sj1;
if(si0){
goto L32;
}
si0=l32;
si1=16U;
si0+=si1;
l1=si0;
si0=l31;
si1=3U;
si0<<=(si1&31);
si1=-16U;
si0+=si1;
l8=si0;
L42:;
{
si0=l8;
si0=!(si0);
if(si0){
goto L32;
}
si0=l1;
si1=l1;
sj1=i64_load(&i->m0,(U64)si1);
l38=sj1;
sj2=-1ULL;
sj1+=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l8;
si1=-8U;
si0+=si1;
l8=si0;
si0=l1;
si1=8U;
si0+=si1;
l1=si0;
sj0=l38;
si0=!(sj0);
if(si0){
goto L42;
}
}
L32:;
si0=l28;
si1=4U;
si0+=si1;
l1=si0;
si0=i32_load(&i->m0,(U64)si0);
l8=si0;
si0=l1;
si1=l34;
i32_store(&i->m0,(U64)si0,si1);
si0=l28;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si0=l28;
si1=l33;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=l8;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l3;
si1=l1;
i32_store(&i->m0,(U64)si0,si1);
si0=l26;
si1=4U;
si0+=si1;
l8=si0;
si0=i32_load(&i->m0,(U64)si0);
l29=si0;
si0=l8;
si1=l31;
i32_store(&i->m0,(U64)si0,si1);
si0=l26;
si0=i32_load(&i->m0,(U64)si0);
l8=si0;
si0=l26;
si1=l32;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=l29;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l4;
si1=l8;
i32_store(&i->m0,(U64)si0,si1);
si0=l30;
si1=l7;
si0+=si1;
l30=si0;
si1=l12;
si0=si0 < si1;
if(si0){
goto L31;
}
goto L6;
}
L30:;
L43:;
{
si0=l8;
l32=si0;
si0=l1;
l33=si0;
si0=l30;
si1=l10;
si0=si0 >= si1;
if(si0){
goto L8;
}
si0=l30;
si1=l20;
si0=si0 >= si1;
if(si0){
goto L46;
}
si0=l22;
si1=l30;
si2=3U;
si1<<=(si2&31);
l1=si1;
si0+=si1;
l26=si0;
si0=i32_load(&i->m0,(U64)si0+4U);
l8=si0;
si0=l26;
si0=i32_load(&i->m0,(U64)si0);
l29=si0;
si0=l0;
si1=l1;
si0+=si1;
l28=si0;
si0=i32_load(&i->m0,(U64)si0+4U);
l1=si0;
si0=l28;
si0=i32_load(&i->m0,(U64)si0);
l27=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+4U);
l31=si0;
si0=l9;
si1=l3;
si1=i32_load(&i->m0,(U64)si1+4U);
l34=si1;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l34;
si0=!(si0);
if(si0){
goto L7;
}
si0=l33;
si1=l34;
si2=l32;
si3=l31;
si4=l27;
si5=l1;
si6=l29;
si7=l8;
si8=0U;
si9=l30;
si10=l16;
si9*=si10;
l35=si9;
si10=6U;
si9>>=(si10&31);
f982(i,si0,si1,si2,si3,si4,si5,si6,si7,si8,si9);
si0=l35;
si1=63U;
si0&=si1;
l1=si0;
si0=!(si0);
if(si0){
goto L44;
}
si0=l31;
si0=!(si0);
if(si0){
goto L28;
}
sj0=0ULL;
l36=sj0;
sj0=0ULL;
si1=l1;
sj1=(U64)(si1);
l37=sj1;
sj0-=sj1;
sj1=63ULL;
sj0&=sj1;
l38=sj0;
si0=l31;
si1=-1U;
si0+=si1;
l35=si0;
si1=536870911U;
si0&=si1;
l29=si0;
si1=1U;
si0+=si1;
l27=si0;
si1=3U;
si0&=si1;
l8=si0;
si0=l32;
si1=l35;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l39=si0;
sj0=i64_load(&i->m0,(U64)si0);
l40=sj0;
si0=l32;
l1=si0;
si0=l29;
si1=3U;
si0=si0 < si1;
if(si0){
goto L47;
}
si0=l27;
si1=1073741820U;
si0&=si1;
l29=si0;
sj0=0ULL;
l36=sj0;
si0=l32;
l1=si0;
L48:;
{
si0=l1;
si1=l1;
sj1=i64_load(&i->m0,(U64)si1);
l41=sj1;
sj2=l37;
sj1<<=(sj2&63);
sj2=l36;
sj1|=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si1=8U;
si0+=si1;
l27=si0;
si1=l27;
sj1=i64_load(&i->m0,(U64)si1);
l36=sj1;
sj2=l37;
sj1<<=(sj2&63);
sj2=l41;
sj3=l38;
sj2>>=(sj3&63);
sj1|=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si1=16U;
si0+=si1;
l27=si0;
si1=l27;
sj1=i64_load(&i->m0,(U64)si1);
l41=sj1;
sj2=l37;
sj1<<=(sj2&63);
sj2=l36;
sj3=l38;
sj2>>=(sj3&63);
sj1|=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si1=24U;
si0+=si1;
l27=si0;
si1=l27;
sj1=i64_load(&i->m0,(U64)si1);
l36=sj1;
sj2=l37;
sj1<<=(sj2&63);
sj2=l41;
sj3=l38;
sj2>>=(sj3&63);
sj1|=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si1=32U;
si0+=si1;
l1=si0;
sj0=l36;
sj1=l38;
sj0>>=(sj1&63);
l36=sj0;
si0=l29;
si1=-4U;
si0+=si1;
l29=si0;
if(si0){
goto L48;
}
}
L47:;
si0=l8;
si0=!(si0);
if(si0){
goto L49;
}
L50:;
{
si0=l1;
si1=l1;
sj1=i64_load(&i->m0,(U64)si1);
l41=sj1;
sj2=l37;
sj1<<=(sj2&63);
sj2=l36;
sj1|=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si1=8U;
si0+=si1;
l1=si0;
sj0=l41;
sj1=l38;
sj0>>=(sj1&63);
l36=sj0;
si0=l8;
si1=-1U;
si0+=si1;
l8=si0;
if(si0){
goto L50;
}
}
L49:;
si0=l39;
sj0=i64_load(&i->m0,(U64)si0);
l37=sj0;
si0=l39;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l32;
si1=l32;
sj1=i64_load(&i->m0,(U64)si1);
l36=sj1;
sj2=l37;
sj1-=sj2;
i64_store(&i->m0,(U64)si0,sj1);
sj0=l36;
sj1=l37;
si0=sj0 >= sj1;
if(si0){
goto L51;
}
si0=l32;
si1=8U;
si0+=si1;
l1=si0;
si0=l31;
si1=3U;
si0<<=(si1&31);
si1=-8U;
si0+=si1;
l8=si0;
L52:;
{
si0=l8;
si0=!(si0);
if(si0){
goto L51;
}
si0=l1;
si1=l1;
sj1=i64_load(&i->m0,(U64)si1);
l37=sj1;
sj2=-1ULL;
sj1+=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l8;
si1=-8U;
si0+=si1;
l8=si0;
si0=l1;
si1=8U;
si0+=si1;
l1=si0;
sj0=l37;
si0=!(sj0);
if(si0){
goto L52;
}
}
L51:;
si0=l35;
si0=!(si0);
if(si0){
goto L29;
}
si0=l32;
sj0=i64_load(&i->m0,(U64)si0+8U);
l37=sj0;
sj1=l40;
sj2=l38;
sj1=(U64)((I64)sj1>>(sj2&63));
l36=sj1;
sj0-=sj1;
l38=sj0;
sj1=l37;
sj0^=sj1;
sj1=-1ULL;
si0=(U64)((I64)sj0>(I64)sj1);
if(si0){
goto L45;
}
sj0=0ULL;
sj1=l36;
sj0-=sj1;
l41=sj0;
sj1=-1ULL;
si0=(U64)((I64)sj0>(I64)sj1);
if(si0){
goto L53;
}
si0=l32;
sj1=l38;
i64_store(&i->m0,(U64)si0+8U,sj1);
sj0=l37;
sj1=l36;
si0=sj0 >= sj1;
if(si0){
goto L44;
}
si0=l32;
si1=16U;
si0+=si1;
l1=si0;
si0=l31;
si1=3U;
si0<<=(si1&31);
si1=-16U;
si0+=si1;
l8=si0;
L54:;
{
si0=l8;
si0=!(si0);
if(si0){
goto L44;
}
si0=l1;
si1=l1;
sj1=i64_load(&i->m0,(U64)si1);
l38=sj1;
sj2=-1ULL;
sj1+=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l8;
si1=-8U;
si0+=si1;
l8=si0;
si0=l1;
si1=8U;
si0+=si1;
l1=si0;
sj0=l38;
si0=!(sj0);
if(si0){
goto L54;
}
goto L44;
}
L53:;
si0=l32;
sj1=l37;
sj2=l41;
sj1+=sj2;
l38=sj1;
i64_store(&i->m0,(U64)si0+8U,sj1);
sj0=l38;
sj1=l37;
si0=sj0 >= sj1;
if(si0){
goto L44;
}
si0=l32;
si1=16U;
si0+=si1;
l1=si0;
si0=l31;
si1=3U;
si0<<=(si1&31);
si1=-16U;
si0+=si1;
l8=si0;
L55:;
{
si0=l8;
si0=!(si0);
if(si0){
goto L44;
}
si0=l1;
si1=l1;
sj1=i64_load(&i->m0,(U64)si1);
sj2=1ULL;
sj1+=sj2;
l38=sj1;
i64_store(&i->m0,(U64)si0,sj1);
si0=l8;
si1=-8U;
si0+=si1;
l8=si0;
si0=l1;
si1=8U;
si0+=si1;
l1=si0;
sj0=l38;
si0=!(sj0);
if(si0){
goto L55;
}
goto L44;
}
L46:;
si0=l30;
si1=l20;
si2=1193240U;
f594(i,si0,si1,si2);
UNREACHABLE;
L45:;
si0=l32;
sj1=l38;
i64_store(&i->m0,(U64)si0+8U,sj1);
L44:;
si0=l28;
si1=4U;
si0+=si1;
l1=si0;
si0=i32_load(&i->m0,(U64)si0);
l8=si0;
si0=l1;
si1=l34;
i32_store(&i->m0,(U64)si0,si1);
si0=l28;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si0=l28;
si1=l33;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=l8;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l3;
si1=l1;
i32_store(&i->m0,(U64)si0,si1);
si0=l26;
si1=4U;
si0+=si1;
l8=si0;
si0=i32_load(&i->m0,(U64)si0);
l29=si0;
si0=l8;
si1=l31;
i32_store(&i->m0,(U64)si0,si1);
si0=l26;
si0=i32_load(&i->m0,(U64)si0);
l8=si0;
si0=l26;
si1=l32;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=l29;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l4;
si1=l8;
i32_store(&i->m0,(U64)si0,si1);
si0=l30;
si1=l7;
si0+=si1;
l30=si0;
si1=l12;
si0=si0 >= si1;
if(si0){
goto L6;
}
goto L43;
}
L29:;
si0=1189451U;
si1=43U;
si2=1189760U;
f604(i,si0,si1,si2);
UNREACHABLE;
L28:;
si0=1189451U;
si1=43U;
si2=1189808U;
f604(i,si0,si1,si2);
UNREACHABLE;
L13:;
L56:;
{
si0=l8;
si1=l10;
si0=si0 >= si1;
if(si0){
goto L10;
}
si0=l8;
si1=l20;
si0=si0 >= si1;
if(si0){
goto L61;
}
si0=l22;
si1=l8;
si2=3U;
si1<<=(si2&31);
l1=si1;
si0+=si1;
l28=si0;
si0=i32_load(&i->m0,(U64)si0+4U);
l29=si0;
si0=l28;
si0=i32_load(&i->m0,(U64)si0);
l30=si0;
si0=l0;
si1=l1;
si0+=si1;
l31=si0;
si0=i32_load(&i->m0,(U64)si0+4U);
l1=si0;
si0=l31;
si0=i32_load(&i->m0,(U64)si0);
l32=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+4U);
l33=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+4U);
l34=si0;
si0=l8;
si1=1U;
si0&=si1;
if(si0){
goto L59;
}
si0=l9;
si1=l34;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l34;
if(si0){
goto L60;
}
goto L9;
L61:;
si0=l8;
si1=l20;
si2=1193320U;
f594(i,si0,si1,si2);
UNREACHABLE;
L60:;
si0=l26;
si1=l34;
si2=l27;
si3=l33;
si4=l32;
si5=l1;
si6=l30;
si7=l29;
si8=0U;
si9=l8;
si10=1U;
si9>>=(si10&31);
si10=l2;
si9*=si10;
l35=si9;
si10=6U;
si9>>=(si10&31);
f982(i,si0,si1,si2,si3,si4,si5,si6,si7,si8,si9);
si0=l35;
si1=63U;
si0&=si1;
l1=si0;
si0=!(si0);
if(si0){
goto L57;
}
si0=l33;
si0=!(si0);
if(si0){
goto L11;
}
sj0=0ULL;
l36=sj0;
sj0=0ULL;
si1=l1;
sj1=(U64)(si1);
l37=sj1;
sj0-=sj1;
sj1=63ULL;
sj0&=sj1;
l38=sj0;
si0=l33;
si1=-1U;
si0+=si1;
l35=si0;
si1=536870911U;
si0&=si1;
l30=si0;
si1=1U;
si0+=si1;
l32=si0;
si1=3U;
si0&=si1;
l29=si0;
si0=l27;
si1=l35;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l39=si0;
sj0=i64_load(&i->m0,(U64)si0);
l40=sj0;
si0=l27;
l1=si0;
si0=l30;
si1=3U;
si0=si0 < si1;
if(si0){
goto L62;
}
si0=l32;
si1=1073741820U;
si0&=si1;
l30=si0;
sj0=0ULL;
l36=sj0;
si0=l27;
l1=si0;
L63:;
{
si0=l1;
si1=l1;
sj1=i64_load(&i->m0,(U64)si1);
l41=sj1;
sj2=l37;
sj1<<=(sj2&63);
sj2=l36;
sj1|=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si1=8U;
si0+=si1;
l32=si0;
si1=l32;
sj1=i64_load(&i->m0,(U64)si1);
l36=sj1;
sj2=l37;
sj1<<=(sj2&63);
sj2=l41;
sj3=l38;
sj2>>=(sj3&63);
sj1|=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si1=16U;
si0+=si1;
l32=si0;
si1=l32;
sj1=i64_load(&i->m0,(U64)si1);
l41=sj1;
sj2=l37;
sj1<<=(sj2&63);
sj2=l36;
sj3=l38;
sj2>>=(sj3&63);
sj1|=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si1=24U;
si0+=si1;
l32=si0;
si1=l32;
sj1=i64_load(&i->m0,(U64)si1);
l36=sj1;
sj2=l37;
sj1<<=(sj2&63);
sj2=l41;
sj3=l38;
sj2>>=(sj3&63);
sj1|=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si1=32U;
si0+=si1;
l1=si0;
sj0=l36;
sj1=l38;
sj0>>=(sj1&63);
l36=sj0;
si0=l30;
si1=-4U;
si0+=si1;
l30=si0;
if(si0){
goto L63;
}
}
L62:;
si0=l29;
si0=!(si0);
if(si0){
goto L64;
}
L65:;
{
si0=l1;
si1=l1;
sj1=i64_load(&i->m0,(U64)si1);
l41=sj1;
sj2=l37;
sj1<<=(sj2&63);
sj2=l36;
sj1|=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si1=8U;
si0+=si1;
l1=si0;
sj0=l41;
sj1=l38;
sj0>>=(sj1&63);
l36=sj0;
si0=l29;
si1=-1U;
si0+=si1;
l29=si0;
if(si0){
goto L65;
}
}
L64:;
si0=l39;
sj0=i64_load(&i->m0,(U64)si0);
l37=sj0;
si0=l39;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l27;
si1=l27;
sj1=i64_load(&i->m0,(U64)si1);
l36=sj1;
sj2=l37;
sj1-=sj2;
i64_store(&i->m0,(U64)si0,sj1);
sj0=l36;
sj1=l37;
si0=sj0 >= sj1;
if(si0){
goto L66;
}
si0=l27;
si1=8U;
si0+=si1;
l1=si0;
si0=l33;
si1=3U;
si0<<=(si1&31);
si1=-8U;
si0+=si1;
l29=si0;
L67:;
{
si0=l29;
si0=!(si0);
if(si0){
goto L66;
}
si0=l1;
si1=l1;
sj1=i64_load(&i->m0,(U64)si1);
l37=sj1;
sj2=-1ULL;
sj1+=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l29;
si1=-8U;
si0+=si1;
l29=si0;
si0=l1;
si1=8U;
si0+=si1;
l1=si0;
sj0=l37;
si0=!(sj0);
if(si0){
goto L67;
}
}
L66:;
si0=l35;
si0=!(si0);
if(si0){
goto L12;
}
si0=l27;
sj0=i64_load(&i->m0,(U64)si0+8U);
l37=sj0;
sj1=l40;
sj2=l38;
sj1=(U64)((I64)sj1>>(sj2&63));
l36=sj1;
sj0-=sj1;
l38=sj0;
sj1=l37;
sj0^=sj1;
sj1=-1ULL;
si0=(U64)((I64)sj0>(I64)sj1);
if(si0){
goto L58;
}
sj0=0ULL;
sj1=l36;
sj0-=sj1;
l41=sj0;
sj1=-1ULL;
si0=(U64)((I64)sj0>(I64)sj1);
if(si0){
goto L68;
}
si0=l27;
sj1=l38;
i64_store(&i->m0,(U64)si0+8U,sj1);
sj0=l37;
sj1=l36;
si0=sj0 >= sj1;
if(si0){
goto L57;
}
si0=l27;
si1=16U;
si0+=si1;
l1=si0;
si0=l33;
si1=3U;
si0<<=(si1&31);
si1=-16U;
si0+=si1;
l29=si0;
L69:;
{
si0=l29;
si0=!(si0);
if(si0){
goto L57;
}
si0=l1;
si1=l1;
sj1=i64_load(&i->m0,(U64)si1);
l38=sj1;
sj2=-1ULL;
sj1+=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l29;
si1=-8U;
si0+=si1;
l29=si0;
si0=l1;
si1=8U;
si0+=si1;
l1=si0;
sj0=l38;
si0=!(sj0);
if(si0){
goto L69;
}
goto L57;
}
L68:;
si0=l27;
sj1=l37;
sj2=l41;
sj1+=sj2;
l38=sj1;
i64_store(&i->m0,(U64)si0+8U,sj1);
sj0=l38;
sj1=l37;
si0=sj0 >= sj1;
if(si0){
goto L57;
}
si0=l27;
si1=16U;
si0+=si1;
l1=si0;
si0=l33;
si1=3U;
si0<<=(si1&31);
si1=-16U;
si0+=si1;
l29=si0;
L70:;
{
si0=l29;
si0=!(si0);
if(si0){
goto L57;
}
si0=l1;
si1=l1;
sj1=i64_load(&i->m0,(U64)si1);
sj2=1ULL;
sj1+=sj2;
l38=sj1;
i64_store(&i->m0,(U64)si0,sj1);
si0=l29;
si1=-8U;
si0+=si1;
l29=si0;
si0=l1;
si1=8U;
si0+=si1;
l1=si0;
sj0=l38;
si0=!(sj0);
if(si0){
goto L70;
}
goto L57;
}
L59:;
si0=l26;
si1=l34;
si2=l27;
si3=l33;
si4=l32;
si5=l1;
si6=l30;
si7=l29;
si8=l8;
si9=l2;
si10=l5;
si11=l6;
f988(i,si0,si1,si2,si3,si4,si5,si6,si7,si8,si9,si10,si11);
goto L57;
L58:;
si0=l27;
sj1=l38;
i64_store(&i->m0,(U64)si0+8U,sj1);
L57:;
si0=l31;
si1=4U;
si0+=si1;
l1=si0;
si0=i32_load(&i->m0,(U64)si0);
l29=si0;
si0=l1;
si1=l34;
i32_store(&i->m0,(U64)si0,si1);
si0=l31;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si0=l31;
si1=l26;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=l29;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l3;
si1=l1;
i32_store(&i->m0,(U64)si0,si1);
si0=l28;
si1=4U;
si0+=si1;
l29=si0;
si0=i32_load(&i->m0,(U64)si0);
l30=si0;
si0=l29;
si1=l33;
i32_store(&i->m0,(U64)si0,si1);
si0=l28;
si0=i32_load(&i->m0,(U64)si0);
l29=si0;
si0=l28;
si1=l27;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=l30;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l4;
si1=l29;
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
l26=si0;
si0=l29;
l27=si0;
si0=l8;
si1=l7;
si0+=si1;
l8=si0;
si1=l12;
si0=si0 >= si1;
if(si0){
goto L5;
}
goto L56;
}
L12:;
si0=1189451U;
si1=43U;
si2=1189760U;
f604(i,si0,si1,si2);
UNREACHABLE;
L11:;
si0=1189451U;
si1=43U;
si2=1189808U;
f604(i,si0,si1,si2);
UNREACHABLE;
L10:;
si0=l8;
si1=l10;
si2=1193304U;
f594(i,si0,si1,si2);
UNREACHABLE;
L9:;
si0=l9;
si1=0U;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=1U;
si1=l9;
si2=4U;
si1+=si2;
si2=1189840U;
si3=l9;
si4=8U;
si3+=si4;
si4=1192332U;
f1250(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L8:;
si0=l30;
si1=l10;
si2=1193224U;
f594(i,si0,si1,si2);
UNREACHABLE;
L7:;
si0=l9;
si1=0U;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=1U;
si1=l9;
si2=4U;
si1+=si2;
si2=1189840U;
si3=l9;
si4=8U;
si3+=si4;
si4=1192332U;
f1250(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L6:;
si0=l30;
si1=l10;
si0=si0 >= si1;
if(si0){
goto L4;
}
si0=l0;
si1=l30;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l1=si0;
L71:;
{
si0=l30;
si1=l20;
si0=si0 < si1;
if(si0){
goto L72;
}
si0=l30;
si1=l20;
si2=1193208U;
f594(i,si0,si1,si2);
UNREACHABLE;
L72:;
si0=l1;
si1=l21;
si0+=si1;
l8=si0;
si0=i32_load(&i->m0,(U64)si0);
si1=l8;
si2=4U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
si2=l1;
si2=i32_load(&i->m0,(U64)si2);
si3=l1;
si4=4U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si4=l30;
si5=l16;
f980(i,si0,si1,si2,si3,si4,si5);
si0=l1;
si1=l14;
si0+=si1;
l1=si0;
si0=l30;
si1=l7;
si0+=si1;
l30=si0;
si1=l10;
si0=si0 < si1;
if(si0){
goto L71;
}
goto L4;
}
L5:;
si0=l8;
si1=l10;
si0=si0 >= si1;
if(si0){
goto L4;
}
si0=l25;
si1=1U;
si0&=si1;
si0=!(si0);
if(si0){
goto L74;
}
si0=l0;
si1=l8;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l1=si0;
L75:;
{
si0=l8;
si1=l20;
si0=si0 >= si1;
if(si0){
goto L73;
}
si0=l1;
si1=l21;
si0+=si1;
l29=si0;
si0=i32_load(&i->m0,(U64)si0);
si1=l29;
si2=4U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
si2=l1;
si2=i32_load(&i->m0,(U64)si2);
si3=l1;
si4=4U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si4=l8;
si5=l2;
si6=l5;
si7=l6;
f981(i,si0,si1,si2,si3,si4,si5,si6,si7);
si0=l1;
si1=l14;
si0+=si1;
l1=si0;
si0=l8;
si1=l7;
si0+=si1;
l8=si0;
si1=l10;
si0=si0 < si1;
if(si0){
goto L75;
}
goto L4;
}
L74:;
si0=l0;
si1=l8;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l1=si0;
L76:;
{
si0=l8;
si1=l20;
si0=si0 >= si1;
if(si0){
goto L73;
}
si0=l1;
si1=l21;
si0+=si1;
l29=si0;
si0=i32_load(&i->m0,(U64)si0);
si1=l29;
si2=4U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
si2=l1;
si2=i32_load(&i->m0,(U64)si2);
si3=l1;
si4=4U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si4=l8;
si5=1U;
si4>>=(si5&31);
si5=l2;
f980(i,si0,si1,si2,si3,si4,si5);
si0=l1;
si1=l14;
si0+=si1;
l1=si0;
si0=l8;
si1=l7;
si0+=si1;
l8=si0;
si1=l10;
si0=si0 >= si1;
if(si0){
goto L4;
}
goto L76;
}
L73:;
si0=l8;
si1=l20;
si2=1193288U;
f594(i,si0,si1,si2);
UNREACHABLE;
L4:;
si0=l25;
si1=l15;
si0=si0 == si1;
if(si0){
goto L78;
}
si0=l25;
si1=1U;
si0+=si1;
l26=si0;
si0=0U;
l29=si0;
si0=l0;
si1=l25;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l32=si0;
si1=l10;
si2=l25;
si1-=si2;
l30=si1;
si2=l7;
si3=l19;
si4=l18;
si5=l3;
si6=l4;
si7=l2;
si8=0U;
si9=l25;
si10=1U;
f996(i,si0,si1,si2,si3,si4,si5,si6,si7,si8,si9,si10);
si0=l24;
l8=si0;
si0=0U;
l1=si0;
L79:;
{
si0=l1;
si1=l1;
si2=24U;
si1<<=(si2&31);
si2=l1;
si3=65280U;
si2&=si3;
si3=8U;
si2<<=(si3&31);
si1|=si2;
si2=l1;
si3=8U;
si2>>=(si3&31);
si3=65280U;
si2&=si3;
si3=l1;
si4=24U;
si3>>=(si4&31);
si2|=si3;
si1|=si2;
l27=si1;
si2=4U;
si1>>=(si2&31);
si2=252645135U;
si1&=si2;
si2=l27;
si3=252645135U;
si2&=si3;
si3=4U;
si2<<=(si3&31);
si1|=si2;
l27=si1;
si2=2U;
si1>>=(si2&31);
si2=858993459U;
si1&=si2;
si2=l27;
si3=858993459U;
si2&=si3;
si3=2U;
si2<<=(si3&31);
si1|=si2;
l27=si1;
si2=1U;
si1>>=(si2&31);
si2=1431655765U;
si1&=si2;
si2=l27;
si3=1431655765U;
si2&=si3;
si3=1U;
si2<<=(si3&31);
si1|=si2;
si2=l23;
si1>>=(si2&31);
l27=si1;
si0=si0 >= si1;
if(si0){
goto L80;
}
si0=l29;
si1=l30;
si0=si0 >= si1;
if(si0){
goto L82;
}
si0=l27;
si1=l7;
si0*=si1;
l27=si0;
si1=l30;
si0=si0 >= si1;
if(si0){
goto L81;
}
si0=l8;
sj0=i64_load(&i->m0,(U64)si0);
l38=sj0;
si0=l8;
si1=l32;
si2=l27;
si3=3U;
si2<<=(si3&31);
si1+=si2;
l27=si1;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l27;
sj1=l38;
i64_store(&i->m0,(U64)si0,sj1);
goto L80;
L82:;
si0=l29;
si1=l30;
si2=1193272U;
f594(i,si0,si1,si2);
UNREACHABLE;
L81:;
si0=l27;
si1=l30;
si2=1193272U;
f594(i,si0,si1,si2);
UNREACHABLE;
L80:;
si0=l8;
si1=l14;
si0+=si1;
l8=si0;
si0=l29;
si1=l7;
si0+=si1;
l29=si0;
si0=l11;
si1=l1;
si2=1U;
si1+=si2;
l1=si1;
si0=si0 == si1;
if(si0){
goto L77;
}
goto L79;
}
L78:;
si0=l15;
si1=l10;
si2=1193256U;
f593(i,si0,si1,si2);
UNREACHABLE;
L77:;
si0=l24;
si1=8U;
si0+=si1;
l24=si0;
si0=l26;
l25=si0;
si0=l26;
si1=l7;
si0=si0 != si1;
if(si0){
goto L3;
}
}
si0=l11;
si1=1U;
si2=l11;
si3=1U;
si2=si2 > si3;
si0=si2?si0:si1;
l21=si0;
si0=l7;
si1=3U;
si0<<=(si1&31);
l12=si0;
si0=l11;
si1=2147483646U;
si0&=si1;
si1=l13;
si0=si0 == si1;
l42=si0;
si0=l22;
l43=si0;
si0=0U;
l44=si0;
L83:;
{
si0=l20;
si1=l44;
si0=si0 < si1;
if(si0){
goto L86;
}
si0=1U;
l8=si0;
si0=0U;
l31=si0;
si0=l22;
si1=l44;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l5=si0;
l11=si0;
si0=l20;
si1=l44;
si0-=si1;
l16=si0;
l0=si0;
si0=0U;
l45=si0;
si0=l19;
l1=si0;
si0=l18;
l34=si0;
si0=l42;
if(si0){
goto L88;
}
si0=0U;
l45=si0;
si0=1U;
l8=si0;
si0=l13;
l6=si0;
si0=l18;
l34=si0;
si0=l19;
l1=si0;
si0=l16;
l0=si0;
si0=l5;
l11=si0;
L89:;
{
si0=l11;
l26=si0;
si0=l0;
l33=si0;
si0=l8;
l25=si0;
L90:;
{
si0=l33;
si1=l1;
l32=si1;
si2=l7;
si1*=si2;
l10=si1;
si0=si0 < si1;
if(si0){
goto L95;
}
si0=l33;
si1=l10;
si0-=si1;
l0=si0;
si0=l26;
si1=l10;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l11=si0;
si0=l6;
si1=l32;
si0=si0 > si1;
if(si0){
goto L93;
}
si0=l32;
si0=!(si0);
if(si0){
goto L91;
}
si0=l10;
si1=l0;
si0=si0 <= si1;
if(si0){
goto L92;
}
si0=0U;
l14=si0;
si0=0U;
l28=si0;
L96:;
{
si0=l14;
si1=l10;
si0=si0 >= si1;
if(si0){
goto L85;
}
si0=l14;
si1=l0;
si0=si0 < si1;
if(si0){
goto L97;
}
si0=l14;
si1=l0;
si2=1193144U;
f594(i,si0,si1,si2);
UNREACHABLE;
L97:;
si0=l11;
si1=l14;
si2=3U;
si1<<=(si2&31);
l1=si1;
si0+=si1;
l29=si0;
si0=i32_load(&i->m0,(U64)si0);
l8=si0;
si0=l26;
si1=l1;
si0+=si1;
l30=si0;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si0=l29;
si0=i32_load(&i->m0,(U64)si0+4U);
l27=si0;
si0=l9;
si1=l30;
si1=i32_load(&i->m0,(U64)si1+4U);
l29=si1;
i32_store(&i->m0,(U64)si0,si1);
si0=l9;
si1=l27;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l29;
si1=l27;
si0=si0 != si1;
if(si0){
goto L94;
}
si0=l29;
si0=!(si0);
if(si0){
goto L98;
}
si0=0U;
l27=si0;
L99:;
{
si0=l1;
sj0=i64_load(&i->m0,(U64)si0);
l37=sj0;
si1=l8;
sj1=i64_load(&i->m0,(U64)si1);
sj0+=sj1;
l38=sj0;
sj1=l37;
si0=sj0 < sj1;
l30=si0;
si0=l27;
si1=255U;
si0&=si1;
if(si0){
goto L101;
}
si0=l30;
l27=si0;
goto L100;
L101:;
si0=l30;
sj1=l38;
sj2=1ULL;
sj1+=sj2;
l38=sj1;
si1=!(sj1);
si0|=si1;
l27=si0;
L100:;
si0=l1;
sj1=l38;
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si1=8U;
si0+=si1;
l1=si0;
si0=l8;
si1=8U;
si0+=si1;
l8=si0;
si0=l29;
si1=-1U;
si0+=si1;
l29=si0;
if(si0){
goto L99;
}
}
L98:;
si0=l14;
si1=l7;
si0+=si1;
l14=si0;
si0=l28;
si1=1U;
si0+=si1;
l28=si0;
si1=l32;
si0=si0 != si1;
if(si0){
goto L96;
}
goto L91;
}
L95:;
si0=1189416U;
si1=35U;
si2=1193080U;
f604(i,si0,si1,si2);
UNREACHABLE;
L94:;
si0=l9;
si1=0U;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=0U;
si1=l9;
si2=l9;
si3=4U;
si2+=si3;
si3=l9;
si4=8U;
si3+=si4;
si4=1203184U;
f1250(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L93:;
si0=l32;
si0=!(si0);
if(si0){
goto L104;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0+4U);
l8=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+4U);
l1=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
l30=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
l29=si0;
si0=l10;
si1=l0;
si0=si0 <= si1;
if(si0){
goto L105;
}
si0=l12;
si1=l32;
si0*=si1;
l46=si0;
si0=0U;
l28=si0;
si0=l32;
l15=si0;
si0=l26;
l14=si0;
si0=0U;
l27=si0;
L106:;
{
si0=l27;
si1=l10;
si0=si0 >= si1;
if(si0){
goto L103;
}
si0=l27;
si1=l0;
si0=si0 >= si1;
if(si0){
goto L107;
}
si0=l14;
si1=l46;
si0+=si1;
l17=si0;
si0=i32_load(&i->m0,(U64)si0);
l33=si0;
si0=l14;
si1=4U;
si0+=si1;
l47=si0;
si0=i32_load(&i->m0,(U64)si0);
l35=si0;
si0=l17;
si1=4U;
si0+=si1;
l48=si0;
si0=i32_load(&i->m0,(U64)si0);
l39=si0;
si0=l14;
si0=i32_load(&i->m0,(U64)si0);
l24=si0;
si0=l9;
si1=l1;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l1;
si0=!(si0);
if(si0){
goto L102;
}
si0=l30;
si1=l1;
si2=l29;
si3=l8;
si4=l24;
si5=l35;
si6=l33;
si7=l39;
si8=0U;
si9=l28;
si10=6U;
si9>>=(si10&31);
f982(i,si0,si1,si2,si3,si4,si5,si6,si7,si8,si9);
si0=l29;
si1=l8;
si2=l28;
si3=63U;
si2&=si3;
sj2=(U64)(si2);
f976(i,si0,si1,sj2);
si0=l47;
si1=l1;
i32_store(&i->m0,(U64)si0,si1);
si0=l14;
si1=l30;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=l35;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l3;
si1=l24;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=l39;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l4;
si1=l33;
i32_store(&i->m0,(U64)si0,si1);
si0=l17;
si1=l29;
i32_store(&i->m0,(U64)si0,si1);
si0=l48;
si1=l8;
i32_store(&i->m0,(U64)si0,si1);
si0=l28;
si1=l34;
si0+=si1;
l28=si0;
si0=l14;
si1=l12;
si0+=si1;
l14=si0;
si0=l27;
si1=l7;
si0+=si1;
l27=si0;
si0=l39;
l8=si0;
si0=l35;
l1=si0;
si0=l24;
l30=si0;
si0=l33;
l29=si0;
si0=l15;
si1=-1U;
si0+=si1;
l15=si0;
if(si0){
goto L106;
}
goto L104;
L107:;
}
si0=l27;
si1=l0;
si2=1193112U;
f594(i,si0,si1,si2);
UNREACHABLE;
L105:;
si0=l12;
si1=l32;
si0*=si1;
l46=si0;
si0=0U;
l28=si0;
si0=l32;
l15=si0;
si0=l26;
l14=si0;
si0=0U;
l27=si0;
L108:;
{
si0=l27;
si1=l10;
si0=si0 >= si1;
if(si0){
goto L103;
}
si0=l14;
si1=l46;
si0+=si1;
l17=si0;
si0=i32_load(&i->m0,(U64)si0);
l33=si0;
si0=l14;
si1=4U;
si0+=si1;
l47=si0;
si0=i32_load(&i->m0,(U64)si0);
l35=si0;
si0=l17;
si1=4U;
si0+=si1;
l48=si0;
si0=i32_load(&i->m0,(U64)si0);
l39=si0;
si0=l14;
si0=i32_load(&i->m0,(U64)si0);
l24=si0;
si0=l9;
si1=l1;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l1;
si0=!(si0);
if(si0){
goto L102;
}
si0=l30;
si1=l1;
si2=l29;
si3=l8;
si4=l24;
si5=l35;
si6=l33;
si7=l39;
si8=0U;
si9=l28;
si10=6U;
si9>>=(si10&31);
f982(i,si0,si1,si2,si3,si4,si5,si6,si7,si8,si9);
si0=l29;
si1=l8;
si2=l28;
si3=63U;
si2&=si3;
sj2=(U64)(si2);
f976(i,si0,si1,sj2);
si0=l47;
si1=l1;
i32_store(&i->m0,(U64)si0,si1);
si0=l14;
si1=l30;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=l35;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l3;
si1=l24;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=l39;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l4;
si1=l33;
i32_store(&i->m0,(U64)si0,si1);
si0=l17;
si1=l29;
i32_store(&i->m0,(U64)si0,si1);
si0=l48;
si1=l8;
i32_store(&i->m0,(U64)si0,si1);
si0=l28;
si1=l34;
si0+=si1;
l28=si0;
si0=l14;
si1=l12;
si0+=si1;
l14=si0;
si0=l27;
si1=l7;
si0+=si1;
l27=si0;
si0=l39;
l8=si0;
si0=l35;
l1=si0;
si0=l24;
l30=si0;
si0=l33;
l29=si0;
si0=l15;
si1=-1U;
si0+=si1;
l15=si0;
if(si0){
goto L108;
}
}
L104:;
si0=l26;
si1=l10;
si2=l7;
si3=l32;
si4=1U;
si3>>=(si4&31);
l1=si3;
si4=l34;
si5=1U;
si4<<=(si5&31);
l34=si4;
si5=l3;
si6=l4;
si7=l2;
si8=l45;
si9=l44;
si10=l25;
si11=1U;
si10<<=(si11&31);
l8=si10;
f996(i,si0,si1,si2,si3,si4,si5,si6,si7,si8,si9,si10);
si0=l25;
si1=l45;
si0+=si1;
l45=si0;
si0=l32;
si1=2147483646U;
si0&=si1;
si1=l6;
si2=l32;
si1-=si2;
l6=si1;
si0=si0 != si1;
if(si0){
goto L89;
}
goto L88;
L103:;
si0=l27;
si1=l10;
si2=1193096U;
f594(i,si0,si1,si2);
UNREACHABLE;
L102:;
si0=l9;
si1=0U;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=1U;
si1=l9;
si2=4U;
si1+=si2;
si2=1189840U;
si3=l9;
si4=8U;
si3+=si4;
si4=1192332U;
f1250(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L92:;
si0=0U;
l14=si0;
si0=0U;
l28=si0;
L109:;
{
si0=l14;
si1=l10;
si0=si0 >= si1;
if(si0){
goto L85;
}
si0=l11;
si1=l14;
si2=3U;
si1<<=(si2&31);
l1=si1;
si0+=si1;
l29=si0;
si0=i32_load(&i->m0,(U64)si0);
l8=si0;
si0=l26;
si1=l1;
si0+=si1;
l30=si0;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si0=l29;
si0=i32_load(&i->m0,(U64)si0+4U);
l27=si0;
si0=l9;
si1=l30;
si1=i32_load(&i->m0,(U64)si1+4U);
l29=si1;
i32_store(&i->m0,(U64)si0,si1);
si0=l9;
si1=l27;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l29;
si1=l27;
si0=si0 != si1;
if(si0){
goto L87;
}
si0=l29;
si0=!(si0);
if(si0){
goto L110;
}
si0=0U;
l27=si0;
L111:;
{
si0=l1;
sj0=i64_load(&i->m0,(U64)si0);
l37=sj0;
si1=l8;
sj1=i64_load(&i->m0,(U64)si1);
sj0+=sj1;
l38=sj0;
sj1=l37;
si0=sj0 < sj1;
l30=si0;
si0=l27;
si1=255U;
si0&=si1;
if(si0){
goto L113;
}
si0=l30;
l27=si0;
goto L112;
L113:;
si0=l30;
sj1=l38;
sj2=1ULL;
sj1+=sj2;
l38=sj1;
si1=!(sj1);
si0|=si1;
l27=si0;
L112:;
si0=l1;
sj1=l38;
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si1=8U;
si0+=si1;
l1=si0;
si0=l8;
si1=8U;
si0+=si1;
l8=si0;
si0=l29;
si1=-1U;
si0+=si1;
l29=si0;
if(si0){
goto L111;
}
}
L110:;
si0=l14;
si1=l7;
si0+=si1;
l14=si0;
si0=l28;
si1=1U;
si0+=si1;
l28=si0;
si1=l32;
si0=si0 != si1;
if(si0){
goto L109;
}
}
L91:;
si0=l25;
si1=1U;
si0<<=(si1&31);
l25=si0;
si0=l34;
si1=1U;
si0<<=(si1&31);
l34=si0;
si0=l32;
si1=1U;
si0>>=(si1&31);
l1=si0;
si0=l32;
si1=2147483646U;
si0&=si1;
si1=l6;
si0=si0 != si1;
if(si0){
goto L90;
}
}
}
si0=l26;
l11=si0;
si0=l33;
l0=si0;
si0=l25;
l8=si0;
L88:;
si0=l44;
si1=1U;
si0+=si1;
l27=si0;
si0=l11;
si1=l0;
si2=l7;
si3=l1;
si4=l34;
si5=l3;
si6=l4;
si7=l2;
si8=l45;
si9=l44;
si10=l8;
f996(i,si0,si1,si2,si3,si4,si5,si6,si7,si8,si9,si10);
si0=l43;
l1=si0;
si0=0U;
l8=si0;
L114:;
{
si0=l31;
si1=l31;
si2=24U;
si1<<=(si2&31);
si2=l31;
si3=65280U;
si2&=si3;
si3=8U;
si2<<=(si3&31);
si1|=si2;
si2=l31;
si3=8U;
si2>>=(si3&31);
si3=65280U;
si2&=si3;
si3=l31;
si4=24U;
si3>>=(si4&31);
si2|=si3;
si1|=si2;
l29=si1;
si2=4U;
si1>>=(si2&31);
si2=252645135U;
si1&=si2;
si2=l29;
si3=252645135U;
si2&=si3;
si3=4U;
si2<<=(si3&31);
si1|=si2;
l29=si1;
si2=2U;
si1>>=(si2&31);
si2=858993459U;
si1&=si2;
si2=l29;
si3=858993459U;
si2&=si3;
si3=2U;
si2<<=(si3&31);
si1|=si2;
l29=si1;
si2=1U;
si1>>=(si2&31);
si2=1431655765U;
si1&=si2;
si2=l29;
si3=1431655765U;
si2&=si3;
si3=1U;
si2<<=(si3&31);
si1|=si2;
si2=l23;
si1>>=(si2&31);
l29=si1;
si0=si0 >= si1;
if(si0){
goto L115;
}
si0=l8;
si1=l16;
si0=si0 >= si1;
if(si0){
goto L117;
}
si0=l29;
si1=l7;
si0*=si1;
l29=si0;
si1=l16;
si0=si0 >= si1;
if(si0){
goto L116;
}
si0=l1;
sj0=i64_load(&i->m0,(U64)si0);
l38=sj0;
si0=l1;
si1=l5;
si2=l29;
si3=3U;
si2<<=(si3&31);
si1+=si2;
l29=si1;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l29;
sj1=l38;
i64_store(&i->m0,(U64)si0,sj1);
goto L115;
L117:;
si0=l8;
si1=l16;
si2=1193192U;
f594(i,si0,si1,si2);
UNREACHABLE;
L116:;
si0=l29;
si1=l16;
si2=1193192U;
f594(i,si0,si1,si2);
UNREACHABLE;
L115:;
si0=l1;
si1=l12;
si0+=si1;
l1=si0;
si0=l8;
si1=l7;
si0+=si1;
l8=si0;
si0=l21;
si1=l31;
si2=1U;
si1+=si2;
l31=si1;
si0=si0 == si1;
if(si0){
goto L84;
}
goto L114;
}
L87:;
si0=l9;
si1=0U;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=0U;
si1=l9;
si2=l9;
si3=4U;
si2+=si3;
si3=l9;
si4=8U;
si3+=si4;
si4=1203184U;
f1250(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L86:;
si0=l44;
si1=l20;
si2=1193176U;
f593(i,si0,si1,si2);
UNREACHABLE;
L85:;
si0=l14;
si1=l10;
si2=1193128U;
f594(i,si0,si1,si2);
UNREACHABLE;
L84:;
si0=l43;
si1=8U;
si0+=si1;
l43=si0;
si0=l27;
l44=si0;
si0=l27;
si1=l7;
si0=si0 != si1;
if(si0){
goto L83;
}
}
si0=l9;
si1=32U;
si0+=si1;
i->g0=si0;
goto L0;
L2:;
si0=l9;
si1=20U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l9;
si1=1U;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l9;
si1=1206456U;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l9;
si1=1206464U;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l9;
si1=8U;
si0+=si1;
si1=1206592U;
f614(i,si0,si1);
UNREACHABLE;
L1:;
si0=1192032U;
si1=25U;
si2=1193160U;
f604(i,si0,si1,si2);
UNREACHABLE;
L0:;
}

void f998(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4,U32 l5,U32 l6) {
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
U32 l29=0;
U32 si0,si1,si2,si3,si4,si5,si6,si7,si8,si9,si10;
U64 sj2;
si0=i->g0;
si1=32U;
si0-=si1;
l7=si0;
i->g0=si0;
si0=l1;
si1=l1;
si2=1U;
si1>>=(si2&31);
l8=si1;
si0-=si1;
l9=si0;
si0=l0;
si1=l8;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l10=si0;
si0=l2;
si1=1U;
si0&=si1;
si0=!(si0);
if(si0){
goto L8;
}
si0=l1;
si1=2U;
si0=si0 < si1;
if(si0){
goto L7;
}
si0=l2;
si1=1U;
si0<<=(si1&31);
l11=si0;
si0=l1;
si1=2U;
si0>>=(si1&31);
l12=si0;
si0=l8;
si1=3U;
si0<<=(si1&31);
l13=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+4U);
l14=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+4U);
l15=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
l16=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
l17=si0;
si0=0U;
l18=si0;
si0=0U;
l19=si0;
si0=l0;
l1=si0;
si0=1U;
l20=si0;
L9:;
{
si0=l20;
si1=-1U;
si0+=si1;
si1=l9;
si0=si0 >= si1;
if(si0){
goto L3;
}
si0=l16;
si1=l15;
si2=l1;
si2=i32_load(&i->m0,(U64)si2);
l21=si2;
si3=l1;
si4=4U;
si3+=si4;
l22=si3;
si3=i32_load(&i->m0,(U64)si3);
l23=si3;
si4=l19;
si5=l2;
f980(i,si0,si1,si2,si3,si4,si5);
si0=l22;
si1=l15;
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
si1=l16;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=l23;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l17;
si1=l14;
si2=l1;
si3=l13;
si2+=si3;
l24=si2;
si2=i32_load(&i->m0,(U64)si2);
l25=si2;
si3=l24;
si4=4U;
si3+=si4;
l26=si3;
si3=i32_load(&i->m0,(U64)si3);
l27=si3;
si4=l12;
si5=l19;
si4+=si5;
si5=l2;
f980(i,si0,si1,si2,si3,si4,si5);
si0=l26;
si1=l14;
i32_store(&i->m0,(U64)si0,si1);
si0=l24;
si1=l17;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=l27;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l4;
si1=l25;
i32_store(&i->m0,(U64)si0,si1);
si0=l22;
si0=i32_load(&i->m0,(U64)si0);
l15=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l16=si0;
si0=l7;
si1=l23;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l23;
si0=!(si0);
if(si0){
goto L4;
}
si0=l21;
si1=l23;
si2=l25;
si3=l27;
si4=l16;
si5=l15;
si6=l17;
si7=l14;
si8=0U;
si9=l18;
si10=6U;
si9>>=(si10&31);
f982(i,si0,si1,si2,si3,si4,si5,si6,si7,si8,si9);
si0=l25;
si1=l27;
si2=l18;
si3=62U;
si2&=si3;
sj2=(U64)(si2);
f976(i,si0,si1,sj2);
si0=l22;
si1=l23;
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
si1=l21;
i32_store(&i->m0,(U64)si0,si1);
si0=l26;
si0=i32_load(&i->m0,(U64)si0);
l14=si0;
si0=l26;
si1=l27;
i32_store(&i->m0,(U64)si0,si1);
si0=l24;
si0=i32_load(&i->m0,(U64)si0);
l17=si0;
si0=l24;
si1=l25;
i32_store(&i->m0,(U64)si0,si1);
si0=l20;
si1=l8;
si0=si0 >= si1;
if(si0){
goto L2;
}
si0=l20;
si1=l9;
si0=si0 >= si1;
if(si0){
goto L6;
}
si0=l16;
si1=l15;
si2=l1;
si3=8U;
si2+=si3;
l27=si2;
si2=i32_load(&i->m0,(U64)si2);
l28=si2;
si3=l1;
si4=12U;
si3+=si4;
l22=si3;
si3=i32_load(&i->m0,(U64)si3);
l23=si3;
si4=l20;
si5=l2;
si6=l5;
si7=l6;
f981(i,si0,si1,si2,si3,si4,si5,si6,si7);
si0=l22;
si1=l15;
i32_store(&i->m0,(U64)si0,si1);
si0=l27;
si1=l16;
i32_store(&i->m0,(U64)si0,si1);
si0=l17;
si1=l14;
si2=l24;
si3=8U;
si2+=si3;
l26=si2;
si2=i32_load(&i->m0,(U64)si2);
l25=si2;
si3=l24;
si4=12U;
si3+=si4;
l21=si3;
si3=i32_load(&i->m0,(U64)si3);
l24=si3;
si4=l8;
si5=l20;
si4+=si5;
si5=l2;
si6=l5;
si7=l6;
f981(i,si0,si1,si2,si3,si4,si5,si6,si7);
si0=l21;
si1=l14;
i32_store(&i->m0,(U64)si0,si1);
si0=l26;
si1=l17;
i32_store(&i->m0,(U64)si0,si1);
si0=l7;
si1=l23;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l23;
si0=!(si0);
if(si0){
goto L1;
}
si0=l28;
si1=l23;
si2=l25;
si3=l24;
si4=l16;
si5=l15;
si6=l17;
si7=l14;
si8=0U;
si9=l2;
si10=l18;
si9+=si10;
l29=si9;
si10=6U;
si9>>=(si10&31);
f982(i,si0,si1,si2,si3,si4,si5,si6,si7,si8,si9);
si0=l25;
si1=l24;
si2=l29;
si3=63U;
si2&=si3;
sj2=(U64)(si2);
f976(i,si0,si1,sj2);
si0=l22;
si1=l23;
i32_store(&i->m0,(U64)si0,si1);
si0=l27;
si1=l28;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=l15;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l3;
si1=l16;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=l14;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l4;
si1=l17;
i32_store(&i->m0,(U64)si0,si1);
si0=l21;
si1=l24;
i32_store(&i->m0,(U64)si0,si1);
si0=l26;
si1=l25;
i32_store(&i->m0,(U64)si0,si1);
si0=l18;
si1=l11;
si0+=si1;
l18=si0;
si0=l19;
si1=1U;
si0+=si1;
l19=si0;
si0=l1;
si1=16U;
si0+=si1;
l1=si0;
si0=l20;
si1=1U;
si0+=si1;
l24=si0;
si0=l20;
si1=2U;
si0+=si1;
l20=si0;
si0=l24;
si1=l8;
si0=si0 < si1;
if(si0){
goto L9;
}
goto L7;
}
L8:;
si0=l8;
si1=l0;
si2=l1;
si3=3U;
si2<<=(si3&31);
si1+=si2;
si2=l10;
si1-=si2;
si2=3U;
si1>>=(si2&31);
l1=si1;
si2=l8;
si3=l1;
si2=si2 < si3;
si0=si2?si0:si1;
l28=si0;
si0=!(si0);
if(si0){
goto L7;
}
si0=l2;
si1=1U;
si0>>=(si1&31);
l21=si0;
si0=l8;
si1=3U;
si0<<=(si1&31);
l6=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+4U);
l16=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+4U);
l23=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
l18=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
l14=si0;
si0=0U;
l27=si0;
si0=l0;
l1=si0;
si0=0U;
l25=si0;
L10:;
{
si0=l18;
si1=l23;
si2=l1;
si2=i32_load(&i->m0,(U64)si2);
si3=l1;
si4=4U;
si3+=si4;
l20=si3;
si3=i32_load(&i->m0,(U64)si3);
si4=l25;
si5=l21;
f980(i,si0,si1,si2,si3,si4,si5);
si0=l20;
si0=i32_load(&i->m0,(U64)si0);
l17=si0;
si0=l20;
si1=l23;
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l26=si0;
si0=l1;
si1=l18;
i32_store(&i->m0,(U64)si0,si1);
si0=l14;
si1=l16;
si2=l1;
si3=l6;
si2+=si3;
l15=si2;
si2=i32_load(&i->m0,(U64)si2);
si3=l15;
si4=4U;
si3+=si4;
l24=si3;
si3=i32_load(&i->m0,(U64)si3);
si4=l8;
si5=l25;
si4+=si5;
si5=l21;
f980(i,si0,si1,si2,si3,si4,si5);
si0=l24;
si0=i32_load(&i->m0,(U64)si0);
l19=si0;
si0=l24;
si1=l16;
i32_store(&i->m0,(U64)si0,si1);
si0=l15;
si0=i32_load(&i->m0,(U64)si0);
l22=si0;
si0=l15;
si1=l14;
i32_store(&i->m0,(U64)si0,si1);
si0=l20;
si0=i32_load(&i->m0,(U64)si0);
l23=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l18=si0;
si0=l7;
si1=l17;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l17;
si0=!(si0);
if(si0){
goto L5;
}
si0=l26;
si1=l17;
si2=l22;
si3=l19;
si4=l18;
si5=l23;
si6=l14;
si7=l16;
si8=0U;
si9=l27;
si10=6U;
si9>>=(si10&31);
f982(i,si0,si1,si2,si3,si4,si5,si6,si7,si8,si9);
si0=l22;
si1=l19;
si2=l27;
si3=63U;
si2&=si3;
sj2=(U64)(si2);
f976(i,si0,si1,sj2);
si0=l20;
si0=i32_load(&i->m0,(U64)si0);
l23=si0;
si0=l20;
si1=l17;
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l18=si0;
si0=l1;
si1=l26;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=l23;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l3;
si1=l18;
i32_store(&i->m0,(U64)si0,si1);
si0=l24;
si0=i32_load(&i->m0,(U64)si0);
l16=si0;
si0=l24;
si1=l19;
i32_store(&i->m0,(U64)si0,si1);
si0=l15;
si0=i32_load(&i->m0,(U64)si0);
l14=si0;
si0=l15;
si1=l22;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=l16;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l4;
si1=l14;
i32_store(&i->m0,(U64)si0,si1);
si0=l27;
si1=l2;
si0+=si1;
l27=si0;
si0=l1;
si1=8U;
si0+=si1;
l1=si0;
si0=l28;
si1=l25;
si2=1U;
si1+=si2;
l25=si1;
si0=si0 != si1;
if(si0){
goto L10;
}
}
L7:;
si0=l0;
si1=l8;
si2=l2;
si3=1U;
si2<<=(si3&31);
l1=si2;
si3=l3;
si4=l4;
f986(i,si0,si1,si2,si3,si4);
si0=l10;
si1=l9;
si2=l1;
si3=l3;
si4=l4;
f986(i,si0,si1,si2,si3,si4);
si0=l7;
si1=32U;
si0+=si1;
i->g0=si0;
goto L0;
L6:;
si0=l20;
si1=l9;
si2=1193368U;
f594(i,si0,si1,si2);
UNREACHABLE;
L5:;
si0=l7;
si1=0U;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=1U;
si1=l7;
si2=4U;
si1+=si2;
si2=1189840U;
si3=l7;
si4=8U;
si3+=si4;
si4=1192332U;
f1250(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L4:;
si0=l7;
si1=0U;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=1U;
si1=l7;
si2=4U;
si1+=si2;
si2=1189840U;
si3=l7;
si4=8U;
si3+=si4;
si4=1192332U;
f1250(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L3:;
si0=l20;
si1=-1U;
si0+=si1;
si1=l9;
si2=1193336U;
f594(i,si0,si1,si2);
UNREACHABLE;
L2:;
si0=l20;
si1=l8;
si2=1193352U;
f594(i,si0,si1,si2);
UNREACHABLE;
L1:;
si0=l7;
si1=0U;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=1U;
si1=l7;
si2=4U;
si1+=si2;
si2=1189840U;
si3=l7;
si4=8U;
si3+=si4;
si4=1192332U;
f1250(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L0:;
}

void f999(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4,U32 l5,U32 l6) {
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
U32 si0,si1,si2,si3,si4,si5,si6,si7,si8,si9;
U64 sj0,sj1,sj2;
si0=l0;
si1=l1;
si2=1U;
si1>>=(si2&31);
l7=si1;
si2=l2;
si3=1U;
si2<<=(si3&31);
l8=si2;
si3=l3;
si4=l4;
f991(i,si0,si1,si2,si3,si4);
si0=l0;
si1=l7;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l9=si0;
si1=l1;
si2=l7;
si1-=si2;
l10=si1;
si2=l8;
si3=l3;
si4=l4;
f991(i,si0,si1,si2,si3,si4);
si0=l2;
si1=1U;
si0&=si1;
si0=!(si0);
if(si0){
goto L11;
}
si0=l1;
si1=2U;
si0=si0 < si1;
if(si0){
goto L10;
}
si0=0U;
l11=si0;
L12:;
{
si0=l11;
si1=l10;
si0=si0 >= si1;
if(si0){
goto L4;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
si1=l3;
si1=i32_load(&i->m0,(U64)si1+4U);
si2=l4;
si2=i32_load(&i->m0,(U64)si2);
si3=l4;
si3=i32_load(&i->m0,(U64)si3+4U);
si4=l0;
si5=l11;
si6=3U;
si5<<=(si6&31);
l8=si5;
si4+=si5;
l12=si4;
si4=i32_load(&i->m0,(U64)si4);
si5=l12;
si5=i32_load(&i->m0,(U64)si5+4U);
si6=l9;
si7=l8;
si6+=si7;
l13=si6;
si6=i32_load(&i->m0,(U64)si6);
si7=l13;
si7=i32_load(&i->m0,(U64)si7+4U);
si8=l11;
si9=l2;
f990(i,si0,si1,si2,si3,si4,si5,si6,si7,si8,si9);
si0=l12;
si0=i32_load(&i->m0,(U64)si0+4U);
l8=si0;
si0=l12;
si1=l3;
si1=i32_load(&i->m0,(U64)si1+4U);
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l12;
si0=i32_load(&i->m0,(U64)si0);
l14=si0;
si0=l12;
si1=l3;
si1=i32_load(&i->m0,(U64)si1);
l15=si1;
i32_store(&i->m0,(U64)si0,si1);
si0=l13;
sj0=i64_load(&i->m0,(U64)si0);
l16=sj0;
si0=l13;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=l8;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l3;
si1=l14;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
sj1=l16;
i64_store(&i->m0,(U64)si0,sj1);
si0=l14;
si1=l8;
si2=l15;
si3=l12;
si3=i32_load(&i->m0,(U64)si3+4U);
si4=l7;
si5=l11;
si6=1U;
si5>>=(si6&31);
si4-=si5;
si5=l2;
f980(i,si0,si1,si2,si3,si4,si5);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+4U);
l17=si0;
si0=!(si0);
if(si0){
goto L13;
}
si0=l17;
si1=-1U;
si0+=si1;
si1=536870911U;
si0&=si1;
si1=1U;
si0+=si1;
l18=si0;
si0=0U;
l14=si0;
si0=l17;
si1=3U;
si0<<=(si1&31);
l19=si0;
l15=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
l20=si0;
l8=si0;
L15:;
{
si0=l8;
sj0=i64_load(&i->m0,(U64)si0);
sj1=0ULL;
si0=sj0 != sj1;
if(si0){
goto L14;
}
si0=l14;
si1=1U;
si0+=si1;
l14=si0;
si0=l8;
si1=8U;
si0+=si1;
l8=si0;
si0=l15;
si1=-8U;
si0+=si1;
l15=si0;
if(si0){
goto L15;
}
}
si0=l18;
l14=si0;
L14:;
si0=l14;
si1=l17;
si0=si0 == si1;
if(si0){
goto L13;
}
si0=l14;
si1=l17;
si0=si0 >= si1;
if(si0){
goto L6;
}
si0=l20;
si1=l14;
si2=3U;
si1<<=(si2&31);
l15=si1;
si0+=si1;
l8=si0;
sj1=0ULL;
si2=l8;
sj2=i64_load(&i->m0,(U64)si2);
sj1-=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l14;
si1=1U;
si0+=si1;
l8=si0;
si1=l17;
si0=si0 == si1;
if(si0){
goto L13;
}
si0=l20;
si1=l8;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l8=si0;
si0=l19;
si1=l15;
si0-=si1;
si1=-8U;
si0+=si1;
l14=si0;
L16:;
{
si0=l8;
si1=l8;
sj1=i64_load(&i->m0,(U64)si1);
sj2=-1ULL;
sj1^=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l8;
si1=8U;
si0+=si1;
l8=si0;
si0=l14;
si1=-8U;
si0+=si1;
l14=si0;
if(si0){
goto L16;
}
}
L13:;
si0=l12;
si1=4U;
si0+=si1;
l8=si0;
si0=i32_load(&i->m0,(U64)si0);
l14=si0;
si0=l8;
si1=l3;
si1=i32_load(&i->m0,(U64)si1+4U);
i32_store(&i->m0,(U64)si0,si1);
si0=l12;
si0=i32_load(&i->m0,(U64)si0);
l8=si0;
si0=l12;
si1=l3;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=l14;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l3;
si1=l8;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
si1=l4;
si1=i32_load(&i->m0,(U64)si1+4U);
si2=l13;
si2=i32_load(&i->m0,(U64)si2);
si3=l13;
si4=4U;
si3+=si4;
l17=si3;
si3=i32_load(&i->m0,(U64)si3);
si4=l7;
si5=l11;
si6=l7;
si5+=si6;
si6=1U;
si5>>=(si6&31);
si4-=si5;
si5=l2;
f980(i,si0,si1,si2,si3,si4,si5);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+4U);
l12=si0;
si0=!(si0);
if(si0){
goto L17;
}
si0=l12;
si1=-1U;
si0+=si1;
si1=536870911U;
si0&=si1;
si1=1U;
si0+=si1;
l18=si0;
si0=0U;
l14=si0;
si0=l12;
si1=3U;
si0<<=(si1&31);
l19=si0;
l15=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
l20=si0;
l8=si0;
L19:;
{
si0=l8;
sj0=i64_load(&i->m0,(U64)si0);
sj1=0ULL;
si0=sj0 != sj1;
if(si0){
goto L18;
}
si0=l14;
si1=1U;
si0+=si1;
l14=si0;
si0=l8;
si1=8U;
si0+=si1;
l8=si0;
si0=l15;
si1=-8U;
si0+=si1;
l15=si0;
if(si0){
goto L19;
}
}
si0=l18;
l14=si0;
L18:;
si0=l14;
si1=l12;
si0=si0 == si1;
if(si0){
goto L17;
}
si0=l14;
si1=l12;
si0=si0 >= si1;
if(si0){
goto L5;
}
si0=l20;
si1=l14;
si2=3U;
si1<<=(si2&31);
l15=si1;
si0+=si1;
l8=si0;
sj1=0ULL;
si2=l8;
sj2=i64_load(&i->m0,(U64)si2);
sj1-=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l14;
si1=1U;
si0+=si1;
l8=si0;
si1=l12;
si0=si0 == si1;
if(si0){
goto L17;
}
si0=l20;
si1=l8;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l8=si0;
si0=l19;
si1=l15;
si0-=si1;
si1=-8U;
si0+=si1;
l14=si0;
L20:;
{
si0=l8;
si1=l8;
sj1=i64_load(&i->m0,(U64)si1);
sj2=-1ULL;
sj1^=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l8;
si1=8U;
si0+=si1;
l8=si0;
si0=l14;
si1=-8U;
si0+=si1;
l14=si0;
if(si0){
goto L20;
}
}
L17:;
si0=l13;
si0=i32_load(&i->m0,(U64)si0);
l8=si0;
si0=l13;
si1=l4;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l17;
si0=i32_load(&i->m0,(U64)si0);
l14=si0;
si0=l17;
si1=l4;
si1=i32_load(&i->m0,(U64)si1+4U);
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=l14;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l4;
si1=l8;
i32_store(&i->m0,(U64)si0,si1);
si0=l7;
si1=l11;
si2=1U;
si1|=si2;
l17=si1;
si0=si0 <= si1;
if(si0){
goto L3;
}
si0=l17;
si1=l10;
si0=si0 >= si1;
if(si0){
goto L9;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
si1=l3;
si1=i32_load(&i->m0,(U64)si1+4U);
si2=l8;
si3=l14;
si4=l0;
si5=l17;
si6=3U;
si5<<=(si6&31);
l15=si5;
si4+=si5;
l12=si4;
si4=i32_load(&i->m0,(U64)si4);
si5=l12;
si5=i32_load(&i->m0,(U64)si5+4U);
si6=l9;
si7=l15;
si6+=si7;
l13=si6;
si6=i32_load(&i->m0,(U64)si6);
si7=l13;
si7=i32_load(&i->m0,(U64)si7+4U);
si8=l17;
si9=l2;
f990(i,si0,si1,si2,si3,si4,si5,si6,si7,si8,si9);
si0=l12;
si0=i32_load(&i->m0,(U64)si0+4U);
l8=si0;
si0=l12;
si1=l3;
si1=i32_load(&i->m0,(U64)si1+4U);
l15=si1;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l12;
si0=i32_load(&i->m0,(U64)si0);
l14=si0;
si0=l12;
si1=l3;
si1=i32_load(&i->m0,(U64)si1);
l20=si1;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=l8;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l3;
si1=l14;
i32_store(&i->m0,(U64)si0,si1);
si0=l13;
sj0=i64_load(&i->m0,(U64)si0);
l16=sj0;
si0=l13;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
sj1=l16;
i64_store(&i->m0,(U64)si0,sj1);
si0=l14;
si1=l8;
si2=l20;
si3=l15;
si4=l1;
si5=l17;
si4-=si5;
si5=l2;
si6=l5;
si7=l6;
f981(i,si0,si1,si2,si3,si4,si5,si6,si7);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+4U);
l20=si0;
si0=!(si0);
if(si0){
goto L21;
}
si0=l20;
si1=-1U;
si0+=si1;
si1=536870911U;
si0&=si1;
si1=1U;
si0+=si1;
l19=si0;
si0=0U;
l14=si0;
si0=l20;
si1=3U;
si0<<=(si1&31);
l21=si0;
l15=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
l18=si0;
l8=si0;
L23:;
{
si0=l8;
sj0=i64_load(&i->m0,(U64)si0);
sj1=0ULL;
si0=sj0 != sj1;
if(si0){
goto L22;
}
si0=l14;
si1=1U;
si0+=si1;
l14=si0;
si0=l8;
si1=8U;
si0+=si1;
l8=si0;
si0=l15;
si1=-8U;
si0+=si1;
l15=si0;
if(si0){
goto L23;
}
}
si0=l19;
l14=si0;
L22:;
si0=l14;
si1=l20;
si0=si0 == si1;
if(si0){
goto L21;
}
si0=l14;
si1=l20;
si0=si0 >= si1;
if(si0){
goto L2;
}
si0=l18;
si1=l14;
si2=3U;
si1<<=(si2&31);
l15=si1;
si0+=si1;
l8=si0;
sj1=0ULL;
si2=l8;
sj2=i64_load(&i->m0,(U64)si2);
sj1-=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l14;
si1=1U;
si0+=si1;
l8=si0;
si1=l20;
si0=si0 == si1;
if(si0){
goto L21;
}
si0=l18;
si1=l8;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l8=si0;
si0=l21;
si1=l15;
si0-=si1;
si1=-8U;
si0+=si1;
l14=si0;
L24:;
{
si0=l8;
si1=l8;
sj1=i64_load(&i->m0,(U64)si1);
sj2=-1ULL;
sj1^=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l8;
si1=8U;
si0+=si1;
l8=si0;
si0=l14;
si1=-8U;
si0+=si1;
l14=si0;
if(si0){
goto L24;
}
}
L21:;
si0=l12;
si0=i32_load(&i->m0,(U64)si0);
l8=si0;
si0=l12;
si1=l3;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l12;
si1=4U;
si0+=si1;
l14=si0;
si0=i32_load(&i->m0,(U64)si0);
l15=si0;
si0=l14;
si1=l3;
si1=i32_load(&i->m0,(U64)si1+4U);
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=l15;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l3;
si1=l8;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
si1=l4;
si1=i32_load(&i->m0,(U64)si1+4U);
si2=l13;
si2=i32_load(&i->m0,(U64)si2);
si3=l13;
si4=4U;
si3+=si4;
l20=si3;
si3=i32_load(&i->m0,(U64)si3);
si4=l7;
si5=l17;
si4-=si5;
si5=l2;
si6=l5;
si7=l6;
f981(i,si0,si1,si2,si3,si4,si5,si6,si7);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+4U);
l12=si0;
si0=!(si0);
if(si0){
goto L25;
}
si0=l12;
si1=-1U;
si0+=si1;
si1=536870911U;
si0&=si1;
si1=1U;
si0+=si1;
l18=si0;
si0=0U;
l14=si0;
si0=l12;
si1=3U;
si0<<=(si1&31);
l19=si0;
l15=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
l17=si0;
l8=si0;
L27:;
{
si0=l8;
sj0=i64_load(&i->m0,(U64)si0);
sj1=0ULL;
si0=sj0 != sj1;
if(si0){
goto L26;
}
si0=l14;
si1=1U;
si0+=si1;
l14=si0;
si0=l8;
si1=8U;
si0+=si1;
l8=si0;
si0=l15;
si1=-8U;
si0+=si1;
l15=si0;
if(si0){
goto L27;
}
}
si0=l18;
l14=si0;
L26:;
si0=l14;
si1=l12;
si0=si0 == si1;
if(si0){
goto L25;
}
si0=l14;
si1=l12;
si0=si0 >= si1;
if(si0){
goto L1;
}
si0=l17;
si1=l14;
si2=3U;
si1<<=(si2&31);
l15=si1;
si0+=si1;
l8=si0;
sj1=0ULL;
si2=l8;
sj2=i64_load(&i->m0,(U64)si2);
sj1-=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l14;
si1=1U;
si0+=si1;
l8=si0;
si1=l12;
si0=si0 == si1;
if(si0){
goto L25;
}
si0=l17;
si1=l8;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l8=si0;
si0=l19;
si1=l15;
si0-=si1;
si1=-8U;
si0+=si1;
l14=si0;
L28:;
{
si0=l8;
si1=l8;
sj1=i64_load(&i->m0,(U64)si1);
sj2=-1ULL;
sj1^=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l8;
si1=8U;
si0+=si1;
l8=si0;
si0=l14;
si1=-8U;
si0+=si1;
l14=si0;
if(si0){
goto L28;
}
}
L25:;
si0=l13;
si0=i32_load(&i->m0,(U64)si0);
l8=si0;
si0=l13;
si1=l4;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l20;
si0=i32_load(&i->m0,(U64)si0);
l14=si0;
si0=l20;
si1=l4;
si1=i32_load(&i->m0,(U64)si1+4U);
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=l14;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l4;
si1=l8;
i32_store(&i->m0,(U64)si0,si1);
si0=l11;
si1=2U;
si0+=si1;
l11=si0;
si1=l7;
si0=si0 < si1;
if(si0){
goto L12;
}
goto L10;
}
L11:;
si0=l7;
si1=l0;
si2=l1;
si3=3U;
si2<<=(si3&31);
si1+=si2;
si2=l9;
si1-=si2;
si2=3U;
si1>>=(si2&31);
l8=si1;
si2=l7;
si3=l8;
si2=si2 < si3;
si0=si2?si0:si1;
l6=si0;
si0=!(si0);
if(si0){
goto L10;
}
si0=l2;
si1=1U;
si0>>=(si1&31);
l20=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+4U);
l8=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
l14=si0;
si0=0U;
l13=si0;
L29:;
{
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
si1=l3;
si1=i32_load(&i->m0,(U64)si1+4U);
si2=l14;
si3=l8;
si4=l0;
si5=l13;
si6=3U;
si5<<=(si6&31);
l15=si5;
si4+=si5;
l12=si4;
si4=i32_load(&i->m0,(U64)si4);
si5=l12;
si5=i32_load(&i->m0,(U64)si5+4U);
si6=l9;
si7=l15;
si6+=si7;
l11=si6;
si6=i32_load(&i->m0,(U64)si6);
si7=l11;
si7=i32_load(&i->m0,(U64)si7+4U);
si8=l13;
si9=l2;
f990(i,si0,si1,si2,si3,si4,si5,si6,si7,si8,si9);
si0=l12;
si0=i32_load(&i->m0,(U64)si0);
l8=si0;
si0=l12;
si0=i32_load(&i->m0,(U64)si0+4U);
l14=si0;
si0=l12;
si1=l3;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l11;
sj0=i64_load(&i->m0,(U64)si0);
l16=sj0;
si0=l11;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=l14;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l3;
si1=l8;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
sj1=l16;
i64_store(&i->m0,(U64)si0,sj1);
si0=l8;
si1=l14;
si2=l12;
si2=i32_load(&i->m0,(U64)si2);
si3=l12;
si3=i32_load(&i->m0,(U64)si3+4U);
si4=l1;
si5=l13;
si4-=si5;
si5=l20;
f980(i,si0,si1,si2,si3,si4,si5);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+4U);
l17=si0;
si0=!(si0);
if(si0){
goto L30;
}
si0=l17;
si1=-1U;
si0+=si1;
si1=536870911U;
si0&=si1;
si1=1U;
si0+=si1;
l5=si0;
si0=0U;
l14=si0;
si0=l17;
si1=3U;
si0<<=(si1&31);
l18=si0;
l15=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
l10=si0;
l8=si0;
L32:;
{
si0=l8;
sj0=i64_load(&i->m0,(U64)si0);
sj1=0ULL;
si0=sj0 != sj1;
if(si0){
goto L31;
}
si0=l14;
si1=1U;
si0+=si1;
l14=si0;
si0=l8;
si1=8U;
si0+=si1;
l8=si0;
si0=l15;
si1=-8U;
si0+=si1;
l15=si0;
if(si0){
goto L32;
}
}
si0=l5;
l14=si0;
L31:;
si0=l14;
si1=l17;
si0=si0 == si1;
if(si0){
goto L30;
}
si0=l14;
si1=l17;
si0=si0 >= si1;
if(si0){
goto L8;
}
si0=l10;
si1=l14;
si2=3U;
si1<<=(si2&31);
l15=si1;
si0+=si1;
l8=si0;
sj1=0ULL;
si2=l8;
sj2=i64_load(&i->m0,(U64)si2);
sj1-=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l14;
si1=1U;
si0+=si1;
l8=si0;
si1=l17;
si0=si0 == si1;
if(si0){
goto L30;
}
si0=l10;
si1=l8;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l8=si0;
si0=l18;
si1=l15;
si0-=si1;
si1=-8U;
si0+=si1;
l14=si0;
L33:;
{
si0=l8;
si1=l8;
sj1=i64_load(&i->m0,(U64)si1);
sj2=-1ULL;
sj1^=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l8;
si1=8U;
si0+=si1;
l8=si0;
si0=l14;
si1=-8U;
si0+=si1;
l14=si0;
if(si0){
goto L33;
}
}
L30:;
si0=l12;
si1=4U;
si0+=si1;
l8=si0;
si0=i32_load(&i->m0,(U64)si0);
l14=si0;
si0=l8;
si1=l3;
si1=i32_load(&i->m0,(U64)si1+4U);
i32_store(&i->m0,(U64)si0,si1);
si0=l12;
si0=i32_load(&i->m0,(U64)si0);
l8=si0;
si0=l12;
si1=l3;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=l14;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l3;
si1=l8;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
si1=l4;
si1=i32_load(&i->m0,(U64)si1+4U);
si2=l11;
si2=i32_load(&i->m0,(U64)si2);
si3=l11;
si4=4U;
si3+=si4;
l17=si3;
si3=i32_load(&i->m0,(U64)si3);
si4=l7;
si5=l13;
si4-=si5;
si5=l20;
f980(i,si0,si1,si2,si3,si4,si5);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+4U);
l12=si0;
si0=!(si0);
if(si0){
goto L34;
}
si0=l12;
si1=-1U;
si0+=si1;
si1=536870911U;
si0&=si1;
si1=1U;
si0+=si1;
l5=si0;
si0=0U;
l14=si0;
si0=l12;
si1=3U;
si0<<=(si1&31);
l18=si0;
l15=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
l10=si0;
l8=si0;
L36:;
{
si0=l8;
sj0=i64_load(&i->m0,(U64)si0);
sj1=0ULL;
si0=sj0 != sj1;
if(si0){
goto L35;
}
si0=l14;
si1=1U;
si0+=si1;
l14=si0;
si0=l8;
si1=8U;
si0+=si1;
l8=si0;
si0=l15;
si1=-8U;
si0+=si1;
l15=si0;
if(si0){
goto L36;
}
}
si0=l5;
l14=si0;
L35:;
si0=l14;
si1=l12;
si0=si0 == si1;
if(si0){
goto L34;
}
si0=l14;
si1=l12;
si0=si0 >= si1;
if(si0){
goto L7;
}
si0=l10;
si1=l14;
si2=3U;
si1<<=(si2&31);
l15=si1;
si0+=si1;
l8=si0;
sj1=0ULL;
si2=l8;
sj2=i64_load(&i->m0,(U64)si2);
sj1-=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l14;
si1=1U;
si0+=si1;
l8=si0;
si1=l12;
si0=si0 == si1;
if(si0){
goto L34;
}
si0=l10;
si1=l8;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l8=si0;
si0=l18;
si1=l15;
si0-=si1;
si1=-8U;
si0+=si1;
l14=si0;
L37:;
{
si0=l8;
si1=l8;
sj1=i64_load(&i->m0,(U64)si1);
sj2=-1ULL;
sj1^=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l8;
si1=8U;
si0+=si1;
l8=si0;
si0=l14;
si1=-8U;
si0+=si1;
l14=si0;
if(si0){
goto L37;
}
}
L34:;
si0=l11;
si0=i32_load(&i->m0,(U64)si0);
l14=si0;
si0=l11;
si1=l4;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l17;
si0=i32_load(&i->m0,(U64)si0);
l8=si0;
si0=l17;
si1=l4;
si1=i32_load(&i->m0,(U64)si1+4U);
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=l8;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l4;
si1=l14;
i32_store(&i->m0,(U64)si0,si1);
si0=l13;
si1=1U;
si0+=si1;
l13=si0;
si1=l6;
si0=si0 != si1;
if(si0){
goto L29;
}
}
L10:;
goto L0;
L9:;
si0=l17;
si1=l10;
si2=1193416U;
f594(i,si0,si1,si2);
UNREACHABLE;
L8:;
si0=l14;
si1=l17;
si2=1238956U;
f594(i,si0,si1,si2);
UNREACHABLE;
L7:;
si0=l14;
si1=l12;
si2=1238956U;
f594(i,si0,si1,si2);
UNREACHABLE;
L6:;
si0=l14;
si1=l17;
si2=1238956U;
f594(i,si0,si1,si2);
UNREACHABLE;
L5:;
si0=l14;
si1=l12;
si2=1238956U;
f594(i,si0,si1,si2);
UNREACHABLE;
L4:;
si0=l11;
si1=l10;
si2=1193384U;
f594(i,si0,si1,si2);
UNREACHABLE;
L3:;
si0=l17;
si1=l7;
si2=1193400U;
f594(i,si0,si1,si2);
UNREACHABLE;
L2:;
si0=l14;
si1=l20;
si2=1238956U;
f594(i,si0,si1,si2);
UNREACHABLE;
L1:;
si0=l14;
si1=l12;
si2=1238956U;
f594(i,si0,si1,si2);
UNREACHABLE;
L0:;
}

void f1000(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4,U32 l5,U32 l6,U32 l7,U32 l8,U32 l9,U32 l10,U32 l11,U32 l12,U32 l13,U32 l14,U32 l15,U32 l16,U32 l17,U32 l18) {
U32 l19=0;
U32 l20=0;
U32 l21=0;
U32 l22=0;
U64 l23=0;
U64 l24=0;
U32 l25=0;
U32 l26=0;
U32 l27=0;
U32 l28=0;
U32 l29=0;
U32 l30=0;
U32 l31=0;
U32 l32=0;
U32 l33=0;
U32 l34=0;
U64 l35=0;
U64 l36=0;
U64 l37=0;
U32 si0,si1,si2,si3,si4,si5,si6,si7;
U64 sj0,sj1,sj2,sj3,sj4;
si0=i->g0;
si1=32U;
si0-=si1;
l19=si0;
i->g0=si0;
si0=l5;
si1=l4;
si0*=si1;
l20=si0;
si1=6U;
si0>>=(si1&31);
l21=si0;
si1=l1;
si0=si0 >= si1;
if(si0){
goto L17;
}
si0=l0;
si1=l21;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l22=si0;
sj0=i64_load(&i->m0,(U64)si0);
si0=!(sj0);
si0=!(si0);
if(si0){
goto L16;
}
si0=l21;
si1=l3;
si0=si0 >= si1;
if(si0){
goto L15;
}
si0=l2;
si1=l21;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l1=si0;
sj0=i64_load(&i->m0,(U64)si0);
si0=!(sj0);
si0=!(si0);
if(si0){
goto L13;
}
si0=l20;
si0=!(si0);
if(si0){
goto L14;
}
si0=4U;
l1=si0;
si0=32U;
si1=l20;
si1=I32_CLZ(si1);
si0-=si1;
sj0=(U64)(si0);
si1=l20;
si1=I32_POPCNT(si1);
si2=1U;
si1=si1 == si2;
sj1=(U64)(si1);
sj0-=sj1;
l23=sj0;
sj1=12ULL;
si0=sj0 < sj1;
if(si0){
goto L18;
}
sj0=l23;
si0=(U32)(sj0);
l1=si0;
si1=30U;
si2=l1;
si3=30U;
si2=si2 < si3;
si0=si2?si0:si1;
si1=1193420U;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
l1=si0;
L18:;
sj0=l23;
sj1=1ULL;
sj0>>=(sj1&63);
si1=l1;
sj1=(U64)(si1);
sj2=255ULL;
sj1&=sj2;
sj0-=sj1;
l24=sj0;
sj1=32ULL;
si0=sj0 >= sj1;
if(si0){
goto L12;
}
sj0=l24;
si0=(U32)(sj0);
l25=si0;
si1=30U;
si0=si0 > si1;
if(si0){
goto L10;
}
si0=l18;
si1=2U;
si2=l25;
si1<<=(si2&31);
l26=si1;
si0=si0 < si1;
if(si0){
goto L11;
}
si0=l6;
si1=l7;
si2=l0;
si3=l21;
si4=l20;
si5=-64U;
si4&=si5;
si5=l25;
si6=1U;
si5+=si6;
si4>>=(si5&31);
l27=si4;
si0=f985(i,si0,si1,si2,si3,si4);
l1=si0;
si1=l7;
si0=si0 > si1;
if(si0){
goto L9;
}
si0=l1;
si1=l7;
si0=si0 == si1;
if(si0){
goto L19;
}
si0=l7;
si1=3U;
si0<<=(si1&31);
si1=l1;
si2=3U;
si1<<=(si2&31);
l1=si1;
si0-=si1;
l4=si0;
si0=l6;
si1=l1;
si0+=si1;
l1=si0;
L20:;
{
si0=l1;
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si0=!(si0);
if(si0){
goto L21;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
si1=0U;
si2=l5;
si3=3U;
si2<<=(si3&31);
si0=f15145(i,si0,si1,si2);
L21:;
si0=l1;
si1=8U;
si0+=si1;
l1=si0;
si0=l4;
si1=-8U;
si0+=si1;
l4=si0;
if(si0){
goto L20;
}
}
L19:;
si0=l9;
si1=l7;
si2=l9;
si3=l7;
si2=si2 < si3;
si0=si2?si0:si1;
l5=si0;
si0=!(si0);
if(si0){
goto L23;
}
si0=l6;
l1=si0;
si0=l8;
l4=si0;
L24:;
{
si0=l1;
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L22;
}
si0=l4;
si1=l1;
si1=i32_load(&i->m0,(U64)si1);
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si1=8U;
si0+=si1;
l1=si0;
si0=l4;
si1=8U;
si0+=si1;
l4=si0;
si0=l5;
si1=-1U;
si0+=si1;
l5=si0;
if(si0){
goto L24;
}
}
L23:;
si0=l6;
si1=l7;
si2=l20;
si3=l25;
si4=1U;
si3<<=(si4&31);
si2>>=(si3&31);
l28=si2;
si3=l14;
si4=l15;
si5=l16;
si5=i32_load(&i->m0,(U64)si5);
l29=si5;
si6=l16;
si6=i32_load(&i->m0,(U64)si6+4U);
l30=si6;
f998(i,si0,si1,si2,si3,si4,si5,si6);
si0=l7;
si0=!(si0);
if(si0){
goto L25;
}
si0=l6;
si1=l7;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l4=si0;
si0=l6;
l1=si0;
L26:;
{
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
si1=l1;
si2=4U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
f977(i,si0,si1);
si0=l1;
si1=8U;
si0+=si1;
l1=si0;
si1=l4;
si0=si0 != si1;
if(si0){
goto L26;
}
}
L25:;
si0=l10;
si1=l11;
si2=l2;
si3=l21;
si4=l27;
si0=f985(i,si0,si1,si2,si3,si4);
l1=si0;
si1=l11;
si0=si0 > si1;
if(si0){
goto L8;
}
si0=l1;
si1=l11;
si0=si0 == si1;
if(si0){
goto L27;
}
si0=l11;
si1=3U;
si0<<=(si1&31);
si1=l1;
si2=3U;
si1<<=(si2&31);
l1=si1;
si0-=si1;
l4=si0;
si0=l10;
si1=l1;
si0+=si1;
l1=si0;
L28:;
{
si0=l1;
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si0=!(si0);
if(si0){
goto L29;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
si1=0U;
si2=l5;
si3=3U;
si2<<=(si3&31);
si0=f15145(i,si0,si1,si2);
L29:;
si0=l1;
si1=8U;
si0+=si1;
l1=si0;
si0=l4;
si1=-8U;
si0+=si1;
l4=si0;
if(si0){
goto L28;
}
}
L27:;
si0=l13;
si1=l11;
si2=l13;
si3=l11;
si2=si2 < si3;
si0=si2?si0:si1;
l5=si0;
si0=!(si0);
if(si0){
goto L31;
}
si0=l10;
l1=si0;
si0=l12;
l4=si0;
L32:;
{
si0=l1;
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L30;
}
si0=l4;
si1=l1;
si1=i32_load(&i->m0,(U64)si1);
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si1=8U;
si0+=si1;
l1=si0;
si0=l4;
si1=8U;
si0+=si1;
l4=si0;
si0=l5;
si1=-1U;
si0+=si1;
l5=si0;
if(si0){
goto L32;
}
}
L31:;
si0=l28;
si1=l25;
si0<<=(si1&31);
l31=si0;
si0=l18;
si1=l26;
si0-=si1;
l32=si0;
si0=l17;
si1=l26;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l33=si0;
si0=l10;
si1=l11;
si2=l28;
si3=l14;
si4=l15;
si5=l29;
si6=l30;
f998(i,si0,si1,si2,si3,si4,si5,si6);
si0=l7;
si1=l11;
si2=l7;
si3=l11;
si2=si2 < si3;
si0=si2?si0:si1;
l20=si0;
si0=!(si0);
if(si0){
goto L1;
}
si0=l31;
si1=63U;
si0+=si1;
l1=si0;
si1=6U;
si0>>=(si1&31);
l4=si0;
si0=l1;
si1=-64U;
si0&=si1;
si1=l31;
si0-=si1;
l3=si0;
si0=l6;
l1=si0;
L33:;
{
si0=l10;
si0=i32_load(&i->m0,(U64)si0);
si1=l10;
si2=4U;
si1+=si2;
l11=si1;
si1=i32_load(&i->m0,(U64)si1);
f977(i,si0,si1);
si0=l1;
si1=4U;
si0+=si1;
l2=si0;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
if(si0){
goto L34;
}
si0=1189451U;
si1=43U;
si2=1193848U;
f604(i,si0,si1,si2);
UNREACHABLE;
L34:;
si0=l5;
si1=3U;
si0<<=(si1&31);
si1=l1;
si1=i32_load(&i->m0,(U64)si1);
l18=si1;
si0+=si1;
si1=-8U;
si0+=si1;
l16=si0;
sj0=i64_load(&i->m0,(U64)si0);
sj1=0ULL;
si0=sj0 != sj1;
if(si0){
goto L7;
}
si0=l11;
si0=i32_load(&i->m0,(U64)si0);
l11=si0;
si0=!(si0);
if(si0){
goto L6;
}
si0=l11;
si1=3U;
si0<<=(si1&31);
si1=l10;
si1=i32_load(&i->m0,(U64)si1);
l16=si1;
si0+=si1;
si1=-8U;
si0+=si1;
l34=si0;
sj0=i64_load(&i->m0,(U64)si0);
sj1=0ULL;
si0=sj0 != sj1;
if(si0){
goto L3;
}
si0=l4;
si1=l5;
si0=si0 > si1;
if(si0){
goto L5;
}
si0=l4;
si1=l11;
si0=si0 > si1;
if(si0){
goto L4;
}
si0=l18;
si1=l4;
si2=l16;
si3=l4;
si4=0U;
si5=l3;
si6=l33;
si7=l32;
si0=f979(i,si0,si1,si2,si3,si4,si5,si6,si7);
l5=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0);
l11=si0;
si0=!(si0);
if(si0){
goto L2;
}
si0=l11;
si1=3U;
si0<<=(si1&31);
si1=l1;
si1=i32_load(&i->m0,(U64)si1);
si0+=si1;
si1=-8U;
si0+=si1;
si1=l5;
sj1=(U64)(si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l10;
si1=8U;
si0+=si1;
l10=si0;
si0=l1;
si1=8U;
si0+=si1;
l1=si0;
si0=l20;
si1=-1U;
si0+=si1;
l20=si0;
if(si0){
goto L33;
}
goto L1;
}
L30:;
si0=0U;
si1=0U;
si2=1193960U;
f594(i,si0,si1,si2);
UNREACHABLE;
L22:;
si0=0U;
si1=0U;
si2=1193976U;
f594(i,si0,si1,si2);
UNREACHABLE;
L17:;
si0=l21;
si1=l1;
si2=1193452U;
f594(i,si0,si1,si2);
UNREACHABLE;
L16:;
si0=l19;
si1=0U;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=0U;
si1=l22;
si2=1193472U;
si3=l19;
si4=8U;
si3+=si4;
si4=1194008U;
f1251(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L15:;
si0=l21;
si1=l3;
si2=1193480U;
f594(i,si0,si1,si2);
UNREACHABLE;
L14:;
si0=l19;
si1=20U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l19;
si1=1U;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l19;
si1=1206456U;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l19;
si1=1206464U;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l19;
si1=8U;
si0+=si1;
si1=1206592U;
f614(i,si0,si1);
UNREACHABLE;
L13:;
si0=l19;
si1=0U;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=0U;
si1=l1;
si2=1193472U;
si3=l19;
si4=8U;
si3+=si4;
si4=1193992U;
f1251(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L12:;
si0=1206624U;
si1=32U;
si2=1206784U;
f604(i,si0,si1,si2);
UNREACHABLE;
L11:;
si0=1189416U;
si1=35U;
si2=1193512U;
f604(i,si0,si1,si2);
UNREACHABLE;
L10:;
si0=1192032U;
si1=25U;
si2=1193496U;
f604(i,si0,si1,si2);
UNREACHABLE;
L9:;
si0=l1;
si1=l7;
si2=1193528U;
f593(i,si0,si1,si2);
UNREACHABLE;
L8:;
si0=l1;
si1=l11;
si2=1193544U;
f593(i,si0,si1,si2);
UNREACHABLE;
L7:;
si0=l19;
si1=0U;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=0U;
si1=l16;
si2=1193472U;
si3=l19;
si4=8U;
si3+=si4;
si4=1193944U;
f1251(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L6:;
si0=1189451U;
si1=43U;
si2=1193864U;
f604(i,si0,si1,si2);
UNREACHABLE;
L5:;
si0=l4;
si1=l5;
si2=1193880U;
f597(i,si0,si1,si2);
UNREACHABLE;
L4:;
si0=l4;
si1=l11;
si2=1193896U;
f597(i,si0,si1,si2);
UNREACHABLE;
L3:;
si0=l19;
si1=0U;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=0U;
si1=l34;
si2=1193472U;
si3=l19;
si4=8U;
si3+=si4;
si4=1193928U;
f1251(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L2:;
si0=1189451U;
si1=43U;
si2=1193912U;
f604(i,si0,si1,si2);
UNREACHABLE;
L1:;
si0=l6;
si1=l7;
si2=l28;
si3=l14;
si4=l15;
si5=l29;
si6=l30;
f999(i,si0,si1,si2,si3,si4,si5,si6);
si0=16U;
si1=l25;
si0<<=(si1&31);
si1=3U;
si0>>=(si1&31);
l29=si0;
si1=l13;
si2=l29;
si3=l13;
si2=si2 < si3;
si0=si2?si0:si1;
l10=si0;
si0=!(si0);
if(si0){
goto L36;
}
si0=l9;
si0=!(si0);
if(si0){
goto L35;
}
si0=l10;
si1=3U;
si0&=si1;
l5=si0;
si0=l8;
sj0=i64_load(&i->m0,(U64)si0);
l23=sj0;
si0=0U;
l11=si0;
si0=l10;
si1=4U;
si0=si0 < si1;
if(si0){
goto L37;
}
si0=l10;
si1=3U;
si0<<=(si1&31);
si1=-32U;
si0&=si1;
l20=si0;
si0=0U;
l10=si0;
si0=0U;
l11=si0;
L38:;
{
si0=l17;
si1=l10;
si0+=si1;
l1=si0;
si1=l12;
si2=l10;
si1+=si2;
l4=si1;
sj1=i64_load(&i->m0,(U64)si1);
sj2=l23;
sj1*=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si1=8U;
si0+=si1;
si1=l4;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
sj2=l23;
sj1*=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si1=16U;
si0+=si1;
si1=l4;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
sj2=l23;
sj1*=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si1=24U;
si0+=si1;
si1=l4;
si2=24U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
sj2=l23;
sj1*=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l11;
si1=4U;
si0+=si1;
l11=si0;
si0=l20;
si1=l10;
si2=32U;
si1+=si2;
l10=si1;
si0=si0 != si1;
if(si0){
goto L38;
}
}
L37:;
si0=l5;
si0=!(si0);
if(si0){
goto L36;
}
si0=l17;
si1=l11;
si2=3U;
si1<<=(si2&31);
l1=si1;
si0+=si1;
l10=si0;
si0=l12;
si1=l1;
si0+=si1;
l1=si0;
L39:;
{
si0=l10;
si1=l1;
sj1=i64_load(&i->m0,(U64)si1);
sj2=l23;
sj1*=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l10;
si1=8U;
si0+=si1;
l10=si0;
si0=l1;
si1=8U;
si0+=si1;
l1=si0;
si0=l5;
si1=-1U;
si0+=si1;
l5=si0;
if(si0){
goto L39;
}
}
L36:;
si0=l31;
si1=6U;
si0>>=(si1&31);
l14=si0;
si1=1U;
si0+=si1;
l31=si0;
si0=l21;
si1=1U;
si0+=si1;
l28=si0;
si0=l8;
si1=l9;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l25=si0;
si0=l12;
si1=l13;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l15=si0;
si0=0U;
l3=si0;
si0=1U;
l18=si0;
si0=0U;
l34=si0;
L40:;
{
si0=l3;
si1=1U;
si0&=si1;
si0=!(si0);
if(si0){
goto L44;
}
si0=l8;
l1=si0;
si0=l34;
l2=si0;
si0=l8;
si1=l25;
si0=si0 != si1;
if(si0){
goto L43;
}
goto L42;
L44:;
si0=l25;
si1=l8;
si0-=si1;
si1=3U;
si0>>=(si1&31);
si1=l18;
si0=si0 <= si1;
if(si0){
goto L42;
}
si0=l34;
si1=l18;
si0+=si1;
l2=si0;
si0=l8;
si1=l18;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l1=si0;
L43:;
si0=l9;
si1=l2;
si0-=si1;
l10=si0;
si1=l13;
si0=si0 > si1;
if(si0){
goto L46;
}
si0=l2;
si1=l26;
si0=si0 > si1;
if(si0){
goto L45;
}
si0=l12;
si1=l10;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l16=si0;
si0=l33;
si1=l17;
si2=l2;
si3=3U;
si2<<=(si3&31);
si1+=si2;
l18=si1;
si0-=si1;
si1=3U;
si0>>=(si1&31);
l4=si0;
si1=l10;
si2=l4;
si3=l10;
si2=si2 < si3;
si0=si2?si0:si1;
l10=si0;
si0=!(si0);
if(si0){
goto L47;
}
si0=l10;
si1=1U;
si0&=si1;
l8=si0;
si0=0U;
l5=si0;
si0=l10;
si1=1U;
si0=si0 == si1;
if(si0){
goto L48;
}
si0=l10;
si1=536870910U;
si0&=si1;
l20=si0;
si0=0U;
l5=si0;
si0=l12;
l4=si0;
si0=l18;
l10=si0;
L49:;
{
si0=l10;
si1=l10;
sj1=i64_load(&i->m0,(U64)si1);
si2=l4;
sj2=i64_load(&i->m0,(U64)si2);
si3=l1;
sj3=i64_load(&i->m0,(U64)si3);
sj2*=sj3;
sj1+=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l10;
si1=8U;
si0+=si1;
l11=si0;
si1=l11;
sj1=i64_load(&i->m0,(U64)si1);
si2=l4;
si3=8U;
si2+=si3;
sj2=i64_load(&i->m0,(U64)si2);
si3=l1;
sj3=i64_load(&i->m0,(U64)si3);
sj2*=sj3;
sj1+=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=16U;
si0+=si1;
l4=si0;
si0=l10;
si1=16U;
si0+=si1;
l10=si0;
si0=l20;
si1=l5;
si2=2U;
si1+=si2;
l5=si1;
si0=si0 != si1;
if(si0){
goto L49;
}
}
L48:;
si0=l8;
si0=!(si0);
if(si0){
goto L47;
}
si0=l18;
si1=l5;
si2=3U;
si1<<=(si2&31);
l10=si1;
si0+=si1;
l4=si0;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1);
si2=l12;
si3=l10;
si2+=si3;
sj2=i64_load(&i->m0,(U64)si2);
si3=l1;
sj3=i64_load(&i->m0,(U64)si3);
sj2*=sj3;
sj1+=sj2;
i64_store(&i->m0,(U64)si0,sj1);
L47:;
si0=l2;
si1=1U;
si0+=si1;
l34=si0;
si0=l1;
si1=8U;
si0+=si1;
l8=si0;
si0=0U;
l18=si0;
si0=1U;
l3=si0;
si0=l2;
si1=l15;
si2=l16;
si1-=si2;
si2=3U;
si1>>=(si2&31);
l10=si1;
si2=l2;
si3=l10;
si2=si2 < si3;
si0=si2?si0:si1;
l10=si0;
si0=!(si0);
if(si0){
goto L40;
}
si0=l10;
si1=1U;
si0&=si1;
l2=si0;
si0=0U;
l18=si0;
si0=0U;
l5=si0;
si0=l10;
si1=1U;
si0=si0 == si1;
if(si0){
goto L41;
}
si0=l10;
si1=536870910U;
si0&=si1;
l20=si0;
si0=0U;
l5=si0;
si0=l16;
l4=si0;
si0=l17;
l10=si0;
L50:;
{
si0=l10;
si1=l10;
sj1=i64_load(&i->m0,(U64)si1);
si2=l4;
sj2=i64_load(&i->m0,(U64)si2);
si3=l1;
sj3=i64_load(&i->m0,(U64)si3);
sj2*=sj3;
sj1-=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l10;
si1=8U;
si0+=si1;
l11=si0;
si1=l11;
sj1=i64_load(&i->m0,(U64)si1);
si2=l4;
si3=8U;
si2+=si3;
sj2=i64_load(&i->m0,(U64)si2);
si3=l1;
sj3=i64_load(&i->m0,(U64)si3);
sj2*=sj3;
sj1-=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=16U;
si0+=si1;
l4=si0;
si0=l10;
si1=16U;
si0+=si1;
l10=si0;
si0=l20;
si1=l5;
si2=2U;
si1+=si2;
l5=si1;
si0=si0 != si1;
if(si0){
goto L50;
}
goto L41;
}
L46:;
si0=1189416U;
si1=35U;
si2=1193800U;
f604(i,si0,si1,si2);
UNREACHABLE;
L45:;
si0=1189416U;
si1=35U;
si2=1193816U;
f604(i,si0,si1,si2);
UNREACHABLE;
L42:;
si0=l29;
si1=l7;
si2=l29;
si3=l7;
si2=si2 < si3;
si0=si2?si0:si1;
l8=si0;
si0=!(si0);
if(si0){
goto L51;
}
sj0=l24;
sj1=1ULL;
sj0+=sj1;
l35=sj0;
sj1=63ULL;
sj0&=sj1;
l36=sj0;
si0=0U;
l11=si0;
L52:;
{
si0=l6;
si1=l11;
si2=3U;
si1<<=(si2&31);
l20=si1;
si0+=si1;
l4=si0;
si1=4U;
si0+=si1;
l5=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+4U);
l10=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
sj0=l35;
si0=!(sj0);
if(si0){
goto L58;
}
si0=l10;
si0=!(si0);
if(si0){
goto L57;
}
si0=l1;
si1=l10;
si2=-1U;
si1+=si2;
l2=si1;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l18=si0;
sj0=i64_load(&i->m0,(U64)si0);
l24=sj0;
si0=l1;
si1=l10;
sj2=l35;
sj0=f1026(i,si0,si1,sj2);
l23=sj0;
si0=l2;
si0=!(si0);
if(si0){
goto L56;
}
si0=l10;
si1=3U;
si0<<=(si1&31);
si1=l1;
si0+=si1;
si1=-16U;
si0+=si1;
l10=si0;
si1=l10;
sj1=i64_load(&i->m0,(U64)si1);
sj2=l23;
sj1-=sj2;
l37=sj1;
i64_store(&i->m0,(U64)si0,sj1);
si0=l18;
sj1=l24;
sj2=l36;
sj1=(U64)((I64)sj1>>(sj2&63));
sj2=l23;
sj3=0ULL;
si2=sj2 != sj3;
sj2=(U64)(si2);
sj1-=sj2;
sj2=l37;
sj3=0ULL;
sj4=l23;
sj3-=sj4;
si2=sj2 < sj3;
sj2=(U64)(si2);
sj1+=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si0=i32_load(&i->m0,(U64)si0);
l10=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
L58:;
si0=l1;
si1=l10;
f977(i,si0,si1);
si0=l5;
si0=i32_load(&i->m0,(U64)si0);
l10=si0;
if(si0){
goto L59;
}
si0=1189451U;
si1=43U;
si2=1193752U;
f604(i,si0,si1,si2);
UNREACHABLE;
L59:;
si0=l10;
si1=-1U;
si0+=si1;
l10=si0;
si0=!(si0);
if(si0){
goto L55;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si1=l10;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l10=si0;
sj0=i64_load(&i->m0,(U64)si0);
l24=sj0;
si0=l10;
si1=l17;
si2=l20;
si1+=si2;
l20=si1;
sj1=i64_load(&i->m0,(U64)si1);
si2=l1;
sj2=i64_load(&i->m0,(U64)si2);
sj1-=sj2;
l23=sj1;
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si0=!(si0);
if(si0){
goto L54;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
l10=si0;
si1=l10;
sj1=i64_load(&i->m0,(U64)si1);
l37=sj1;
sj2=l23;
sj1+=sj2;
l23=sj1;
i64_store(&i->m0,(U64)si0,sj1);
si0=0U;
l2=si0;
sj0=l23;
sj1=l37;
si0=sj0 >= sj1;
if(si0){
goto L53;
}
si0=l10;
si1=8U;
si0+=si1;
l10=si0;
si0=l1;
si1=3U;
si0<<=(si1&31);
si1=-8U;
si0+=si1;
l1=si0;
L60:;
{
si0=l1;
if(si0){
goto L61;
}
sj0=1ULL;
l23=sj0;
goto L54;
L61:;
si0=l10;
si1=l10;
sj1=i64_load(&i->m0,(U64)si1);
sj2=1ULL;
sj1+=sj2;
l23=sj1;
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si1=-8U;
si0+=si1;
l1=si0;
si0=l10;
si1=8U;
si0+=si1;
l10=si0;
sj0=l23;
si0=!(sj0);
if(si0){
goto L60;
}
goto L53;
}
L57:;
si0=1189451U;
si1=43U;
si2=1189972U;
f604(i,si0,si1,si2);
UNREACHABLE;
L56:;
si0=1189451U;
si1=43U;
si2=1189988U;
f604(i,si0,si1,si2);
UNREACHABLE;
L55:;
si0=0U;
si1=0U;
si2=1193768U;
f594(i,si0,si1,si2);
UNREACHABLE;
L54:;
sj0=l23;
sj1=0ULL;
si0=sj0 != sj1;
l2=si0;
L53:;
si0=l5;
si0=i32_load(&i->m0,(U64)si0);
l10=si0;
si0=!(si0);
if(si0){
goto L63;
}
si0=l20;
si1=l10;
si2=3U;
si1<<=(si2&31);
si2=l4;
si2=i32_load(&i->m0,(U64)si2);
si1+=si2;
si2=-8U;
si1+=si2;
l10=si1;
sj1=i64_load(&i->m0,(U64)si1);
l23=sj1;
sj2=l24;
sj1+=sj2;
l24=sj1;
sj2=l23;
si1=sj1 < sj2;
sj1=(U64)(si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l10;
sj1=l24;
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si0=!(si0);
if(si0){
goto L62;
}
si0=l20;
si1=l20;
sj1=i64_load(&i->m0,(U64)si1);
sj2=1ULL;
sj1+=sj2;
i64_store(&i->m0,(U64)si0,sj1);
goto L62;
L63:;
si0=1189451U;
si1=43U;
si2=1193784U;
f604(i,si0,si1,si2);
UNREACHABLE;
L62:;
si0=l11;
si1=1U;
si0+=si1;
l11=si0;
si1=l8;
si0=si0 != si1;
if(si0){
goto L52;
}
}
L51:;
si0=l0;
si1=0U;
si2=l28;
si3=3U;
si2<<=(si3&31);
si0=f15145(i,si0,si1,si2);
l3=si0;
si0=l26;
si1=-1U;
si0+=si1;
l34=si0;
si1=l7;
si0=si0 > si1;
if(si0){
goto L67;
}
si0=l3;
si1=l28;
si2=l6;
si3=l34;
si4=l27;
si5=l31;
si6=l33;
si7=l32;
f984(i,si0,si1,si2,si3,si4,si5,si6,si7);
si0=l3;
si1=8U;
si0+=si1;
l20=si0;
si0=l27;
si1=6U;
si0>>=(si1&31);
l8=si0;
si0=l26;
si1=-2U;
si0+=si1;
l16=si0;
if(si0){
goto L68;
}
si0=l21;
l12=si0;
goto L64;
L68:;
si0=l14;
si1=3U;
si0<<=(si1&31);
l33=si0;
si0=l8;
si1=3U;
si0<<=(si1&31);
l18=si0;
si0=l3;
si1=16U;
si0+=si1;
l2=si0;
si0=l21;
si1=3U;
si0<<=(si1&31);
si1=-8U;
si0+=si1;
l11=si0;
si0=l21;
si1=l8;
si2=2U;
si3=l26;
si2-=si3;
si1*=si2;
si0+=si1;
l12=si0;
si0=0U;
l4=si0;
si0=l21;
l5=si0;
L69:;
{
si0=l4;
si1=l26;
si0=si0 == si1;
if(si0){
goto L74;
}
si0=l17;
si1=l4;
si2=3U;
si1<<=(si2&31);
l10=si1;
si0+=si1;
sj0=i64_load(&i->m0,(U64)si0);
si0=!(sj0);
si0=!(si0);
if(si0){
goto L73;
}
si0=l4;
si1=l7;
si0=si0 >= si1;
if(si0){
goto L72;
}
si0=l6;
si1=l10;
si0+=si1;
l10=si0;
si0=i32_load(&i->m0,(U64)si0+4U);
l1=si0;
if(si0){
goto L71;
}
si0=1189451U;
si1=43U;
si2=1193704U;
f604(i,si0,si1,si2);
UNREACHABLE;
L74:;
si0=l26;
si1=l26;
si2=1193672U;
f594(i,si0,si1,si2);
UNREACHABLE;
L73:;
si0=l5;
si0=!(si0);
if(si0){
goto L70;
}
si0=l20;
si1=l20;
sj1=i64_load(&i->m0,(U64)si1);
l23=sj1;
sj2=-1ULL;
sj1+=sj2;
i64_store(&i->m0,(U64)si0,sj1);
sj0=l23;
sj1=0ULL;
si0=sj0 != sj1;
if(si0){
goto L70;
}
si0=l11;
l1=si0;
si0=l2;
l10=si0;
L75:;
{
si0=l1;
si0=!(si0);
if(si0){
goto L70;
}
si0=l10;
si1=l10;
sj1=i64_load(&i->m0,(U64)si1);
l23=sj1;
sj2=-1ULL;
sj1+=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si1=-8U;
si0+=si1;
l1=si0;
si0=l10;
si1=8U;
si0+=si1;
l10=si0;
sj0=l23;
si0=!(sj0);
if(si0){
goto L75;
}
goto L70;
}
L72:;
si0=l4;
si1=l7;
si2=1193688U;
f594(i,si0,si1,si2);
UNREACHABLE;
L71:;
si0=l1;
si1=3U;
si0<<=(si1&31);
si1=l10;
si1=i32_load(&i->m0,(U64)si1);
si0+=si1;
si1=-8U;
si0+=si1;
sj0=i64_load(&i->m0,(U64)si0);
sj1=-1ULL;
si0=(U64)((I64)sj0>(I64)sj1);
if(si0){
goto L70;
}
si0=l5;
si0=!(si0);
if(si0){
goto L76;
}
si0=l20;
si1=l20;
sj1=i64_load(&i->m0,(U64)si1);
l23=sj1;
sj2=-1ULL;
sj1+=sj2;
i64_store(&i->m0,(U64)si0,sj1);
sj0=l23;
sj1=0ULL;
si0=sj0 != sj1;
if(si0){
goto L76;
}
si0=0U;
l10=si0;
L77:;
{
si0=l11;
si1=l10;
si0=si0 == si1;
if(si0){
goto L76;
}
si0=l2;
si1=l10;
si0+=si1;
l1=si0;
si1=l1;
sj1=i64_load(&i->m0,(U64)si1);
l23=sj1;
sj2=-1ULL;
sj1+=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l10;
si1=8U;
si0+=si1;
l10=si0;
sj0=l23;
si0=!(sj0);
if(si0){
goto L77;
}
}
L76:;
si0=l14;
si1=l5;
si0=si0 > si1;
if(si0){
goto L66;
}
si0=l5;
si1=l14;
si0=si0 == si1;
if(si0){
goto L70;
}
si0=l20;
si1=l14;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l10=si0;
si1=l10;
sj1=i64_load(&i->m0,(U64)si1);
l23=sj1;
sj2=-1ULL;
sj1+=sj2;
i64_store(&i->m0,(U64)si0,sj1);
sj0=l23;
sj1=0ULL;
si0=sj0 != sj1;
if(si0){
goto L70;
}
si0=l33;
l10=si0;
L78:;
{
si0=l11;
si1=l10;
si0=si0 == si1;
if(si0){
goto L70;
}
si0=l2;
si1=l10;
si0+=si1;
l1=si0;
si1=l1;
sj1=i64_load(&i->m0,(U64)si1);
l23=sj1;
sj2=-1ULL;
sj1+=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l10;
si1=8U;
si0+=si1;
l10=si0;
sj0=l23;
si0=!(sj0);
if(si0){
goto L78;
}
}
L70:;
si0=l5;
si1=l8;
si0=si0 < si1;
if(si0){
goto L65;
}
si0=l11;
si1=l18;
si0-=si1;
l11=si0;
si0=l2;
si1=l18;
si0+=si1;
l2=si0;
si0=l5;
si1=l8;
si0-=si1;
l5=si0;
si0=l20;
si1=l18;
si0+=si1;
l20=si0;
si0=l4;
si1=1U;
si0+=si1;
l4=si0;
si1=l16;
si0=si0 == si1;
if(si0){
goto L64;
}
goto L69;
}
L67:;
si0=l34;
si1=l7;
si2=1193560U;
f597(i,si0,si1,si2);
UNREACHABLE;
L66:;
si0=l14;
si1=l5;
si2=1193720U;
f593(i,si0,si1,si2);
UNREACHABLE;
L65:;
si0=l8;
si1=l5;
si2=1193736U;
f593(i,si0,si1,si2);
UNREACHABLE;
L64:;
si0=l17;
si1=l16;
si2=3U;
si1<<=(si2&31);
si0+=si1;
sj0=i64_load(&i->m0,(U64)si0);
sj1=0ULL;
si0=sj0 != sj1;
if(si0){
goto L86;
}
si0=l16;
si1=l7;
si0=si0 >= si1;
if(si0){
goto L84;
}
si0=l6;
si1=l16;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l10=si0;
si0=i32_load(&i->m0,(U64)si0+4U);
l1=si0;
si0=!(si0);
if(si0){
goto L83;
}
si0=l1;
si1=3U;
si0<<=(si1&31);
si1=l10;
si1=i32_load(&i->m0,(U64)si1);
si0+=si1;
si1=-8U;
si0+=si1;
sj0=i64_load(&i->m0,(U64)si0);
sj1=-1ULL;
si0=(U64)((I64)sj0>(I64)sj1);
if(si0){
goto L85;
}
L86:;
si0=l12;
si0=!(si0);
if(si0){
goto L85;
}
si0=l20;
si1=l20;
sj1=i64_load(&i->m0,(U64)si1);
l23=sj1;
sj2=-1ULL;
sj1+=sj2;
i64_store(&i->m0,(U64)si0,sj1);
sj0=l23;
sj1=0ULL;
si0=sj0 != sj1;
if(si0){
goto L85;
}
si0=l20;
si1=8U;
si0+=si1;
l10=si0;
si0=l12;
si1=3U;
si0<<=(si1&31);
si1=-8U;
si0+=si1;
l1=si0;
L87:;
{
si0=l1;
si0=!(si0);
if(si0){
goto L85;
}
si0=l10;
si1=l10;
sj1=i64_load(&i->m0,(U64)si1);
l23=sj1;
sj2=-1ULL;
sj1+=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si1=-8U;
si0+=si1;
l1=si0;
si0=l10;
si1=8U;
si0+=si1;
l10=si0;
sj0=l23;
si0=!(sj0);
if(si0){
goto L87;
}
}
L85:;
si0=l34;
si1=l7;
si0=si0 >= si1;
if(si0){
goto L81;
}
si0=l6;
si1=l34;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l10=si0;
si0=i32_load(&i->m0,(U64)si0+4U);
l20=si0;
si1=l8;
si0=si0 < si1;
if(si0){
goto L82;
}
si0=l10;
si0=i32_load(&i->m0,(U64)si0);
l17=si0;
si0=l27;
si1=64U;
si0=si0 < si1;
if(si0){
goto L79;
}
si0=l21;
si1=l8;
si0-=si1;
l10=si0;
si0=l21;
si1=l8;
si0=si0 < si1;
if(si0){
goto L80;
}
si0=l3;
si1=l10;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l10=si0;
si0=0U;
l4=si0;
si0=l8;
l5=si0;
si0=l17;
l1=si0;
L88:;
{
si0=l10;
sj0=i64_load(&i->m0,(U64)si0);
l24=sj0;
si1=l1;
sj1=i64_load(&i->m0,(U64)si1);
sj0+=sj1;
l23=sj0;
sj1=l24;
si0=sj0 < sj1;
l11=si0;
si0=l4;
si1=255U;
si0&=si1;
if(si0){
goto L90;
}
si0=l11;
l4=si0;
goto L89;
L90:;
si0=l11;
sj1=l23;
sj2=1ULL;
sj1+=sj2;
l23=sj1;
si1=!(sj1);
si0|=si1;
l4=si0;
L89:;
si0=l10;
sj1=l23;
i64_store(&i->m0,(U64)si0,sj1);
si0=l10;
si1=8U;
si0+=si1;
l10=si0;
si0=l1;
si1=8U;
si0+=si1;
l1=si0;
si0=l5;
si1=-1U;
si0+=si1;
l5=si0;
if(si0){
goto L88;
}
}
si0=l4;
si0=!(si0);
if(si0){
goto L79;
}
si0=l22;
si1=l22;
sj1=i64_load(&i->m0,(U64)si1);
sj2=1ULL;
sj1+=sj2;
i64_store(&i->m0,(U64)si0,sj1);
goto L79;
L84:;
si0=l16;
si1=l7;
si2=1193576U;
f594(i,si0,si1,si2);
UNREACHABLE;
L83:;
si0=1189451U;
si1=43U;
si2=1193592U;
f604(i,si0,si1,si2);
UNREACHABLE;
L82:;
si0=1189416U;
si1=35U;
si2=1193624U;
f604(i,si0,si1,si2);
UNREACHABLE;
L81:;
si0=l34;
si1=l7;
si2=1193608U;
f594(i,si0,si1,si2);
UNREACHABLE;
L80:;
si0=l10;
si1=l21;
si2=1193640U;
f593(i,si0,si1,si2);
UNREACHABLE;
L79:;
si0=l31;
si1=l8;
si0-=si1;
l2=si0;
si1=l28;
si0=si0 > si1;
if(si0){
goto L93;
}
si0=l19;
si1=l2;
i32_store(&i->m0,(U64)si0,si1);
si0=l19;
si1=l20;
si2=l8;
si1-=si2;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l31;
si1=l20;
si0=si0 != si1;
if(si0){
goto L96;
}
si0=l31;
si1=l8;
si0=si0 == si1;
if(si0){
goto L91;
}
si0=l17;
si1=l8;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l18=si0;
si0=l2;
si1=1U;
si0&=si1;
l17=si0;
si0=l14;
si1=l8;
si0=si0 != si1;
if(si0){
goto L95;
}
si0=0U;
l4=si0;
si0=0U;
l5=si0;
goto L94;
L96:;
si0=l19;
si1=0U;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=0U;
si1=l19;
si2=l19;
si3=4U;
si2+=si3;
si3=l19;
si4=8U;
si3+=si4;
si4=1203476U;
f1250(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L95:;
si0=l2;
si1=-2U;
si0&=si1;
l20=si0;
si0=0U;
l4=si0;
si0=l18;
l1=si0;
si0=l3;
l10=si0;
si0=0U;
l5=si0;
L97:;
{
si0=l10;
si1=l10;
sj1=i64_load(&i->m0,(U64)si1);
l23=sj1;
si2=l4;
sj2=(U64)(si2);
sj3=1ULL;
sj2&=sj3;
si3=l1;
sj3=i64_load(&i->m0,(U64)si3);
l24=sj3;
sj2+=sj3;
sj1-=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l10;
si1=8U;
si0+=si1;
l11=si0;
si1=l11;
sj1=i64_load(&i->m0,(U64)si1);
l35=sj1;
sj2=l23;
sj3=l24;
si2=sj2 <= sj3;
sj3=l23;
sj4=l24;
si3=sj3 < sj4;
si4=l4;
si5=1U;
si4&=si5;
si2=si4?si2:si3;
l4=si2;
sj2=(U64)(si2);
si3=l1;
si4=8U;
si3+=si4;
sj3=i64_load(&i->m0,(U64)si3);
l23=sj3;
sj2+=sj3;
sj1-=sj2;
i64_store(&i->m0,(U64)si0,sj1);
sj0=l35;
sj1=l23;
si0=sj0 <= sj1;
sj1=l35;
sj2=l23;
si1=sj1 < sj2;
si2=l4;
si0=si2?si0:si1;
l4=si0;
si0=l1;
si1=16U;
si0+=si1;
l1=si0;
si0=l10;
si1=16U;
si0+=si1;
l10=si0;
si0=l20;
si1=l5;
si2=2U;
si1+=si2;
l5=si1;
si0=si0 != si1;
if(si0){
goto L97;
}
}
L94:;
si0=l17;
si0=!(si0);
if(si0){
goto L98;
}
si0=l3;
si1=l5;
si2=3U;
si1<<=(si2&31);
l10=si1;
si0+=si1;
l1=si0;
si1=l1;
sj1=i64_load(&i->m0,(U64)si1);
l23=sj1;
si2=l4;
sj2=(U64)(si2);
si3=l18;
si4=l10;
si3+=si4;
sj3=i64_load(&i->m0,(U64)si3);
l24=sj3;
sj2+=sj3;
sj1-=sj2;
i64_store(&i->m0,(U64)si0,sj1);
sj0=l23;
sj1=l24;
si0=sj0 <= sj1;
sj1=l23;
sj2=l24;
si1=sj1 < sj2;
si2=l4;
si0=si2?si0:si1;
l4=si0;
L98:;
si0=l4;
si1=1U;
si0&=si1;
si0=!(si0);
if(si0){
goto L91;
}
si0=l28;
si1=l2;
si0=si0 == si1;
if(si0){
goto L92;
}
si0=l3;
si1=l2;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l10=si0;
sj0=i64_load(&i->m0,(U64)si0);
l23=sj0;
sj1=-1ULL;
sj0+=sj1;
l24=sj0;
sj1=l23;
sj0^=sj1;
sj1=0ULL;
si0=(U64)((I64)sj0<(I64)sj1);
if(si0){
goto L99;
}
si0=l10;
sj1=l24;
i64_store(&i->m0,(U64)si0,sj1);
goto L91;
L99:;
si0=l10;
sj1=l24;
i64_store(&i->m0,(U64)si0,sj1);
sj0=l23;
sj1=0ULL;
si0=sj0 != sj1;
if(si0){
goto L91;
}
si0=l8;
si1=3U;
si0<<=(si1&31);
l10=si0;
si1=l21;
si2=3U;
si1<<=(si2&31);
si0+=si1;
si1=l14;
si2=3U;
si1<<=(si2&31);
l4=si1;
si0-=si1;
si1=-8U;
si0+=si1;
l1=si0;
si0=l4;
si1=l10;
si0-=si1;
si1=l3;
si0+=si1;
si1=16U;
si0+=si1;
l10=si0;
L100:;
{
si0=l1;
si0=!(si0);
if(si0){
goto L91;
}
si0=l10;
si1=l10;
sj1=i64_load(&i->m0,(U64)si1);
l23=sj1;
sj2=-1ULL;
sj1+=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si1=-8U;
si0+=si1;
l1=si0;
si0=l10;
si1=8U;
si0+=si1;
l10=si0;
sj0=l23;
si0=!(sj0);
si0=!(si0);
if(si0){
goto L91;
}
goto L100;
}
L93:;
si0=1189416U;
si1=35U;
si2=1193656U;
f604(i,si0,si1,si2);
UNREACHABLE;
L92:;
si0=1189451U;
si1=43U;
si2=1189760U;
f604(i,si0,si1,si2);
UNREACHABLE;
L91:;
si0=l3;
si1=l28;
f977(i,si0,si1);
si0=l19;
si1=32U;
si0+=si1;
i->g0=si0;
goto L0;
L41:;
si0=l2;
si0=!(si0);
if(si0){
goto L40;
}
si0=l17;
si1=l5;
si2=3U;
si1<<=(si2&31);
l10=si1;
si0+=si1;
l4=si0;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1);
si2=l16;
si3=l10;
si2+=si3;
sj2=i64_load(&i->m0,(U64)si2);
si3=l1;
sj3=i64_load(&i->m0,(U64)si3);
sj2*=sj3;
sj1-=sj2;
i64_store(&i->m0,(U64)si0,sj1);
goto L40;
}
L35:;
si0=0U;
si1=0U;
si2=1193832U;
f594(i,si0,si1,si2);
UNREACHABLE;
L0:;
}

void f1001(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4,U32 l5,U32 l6,U32 l7,U32 l8,U32 l9,U32 l10,U32 l11,U32 l12) {
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
U32 l27=0;
U32 l28=0;
U32 l29=0;
U32 l30=0;
U32 l31=0;
U32 l32=0;
U32 l33=0;
U32 l34=0;
U64 l35=0;
U64 l36=0;
U64 l37=0;
U32 si0,si1,si2,si3,si4,si5,si6,si7;
U64 sj0,sj1,sj2,sj3,sj4;
si0=i->g0;
si1=32U;
si0-=si1;
l13=si0;
i->g0=si0;
si0=l3;
si1=l2;
si0*=si1;
l14=si0;
si1=6U;
si0>>=(si1&31);
l15=si0;
si1=l1;
si0=si0 >= si1;
if(si0){
goto L11;
}
si0=l0;
si1=l15;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l16=si0;
sj0=i64_load(&i->m0,(U64)si0);
si0=!(sj0);
si0=!(si0);
if(si0){
goto L9;
}
si0=l14;
si0=!(si0);
if(si0){
goto L10;
}
si0=4U;
l1=si0;
si0=32U;
si1=l14;
si1=I32_CLZ(si1);
si0-=si1;
sj0=(U64)(si0);
si1=l14;
si1=I32_POPCNT(si1);
si2=1U;
si1=si1 == si2;
sj1=(U64)(si1);
sj0-=sj1;
l17=sj0;
sj1=12ULL;
si0=sj0 < sj1;
if(si0){
goto L12;
}
sj0=l17;
si0=(U32)(sj0);
l1=si0;
si1=30U;
si2=l1;
si3=30U;
si2=si2 < si3;
si0=si2?si0:si1;
si1=1193420U;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
l1=si0;
L12:;
sj0=l17;
sj1=1ULL;
sj0>>=(sj1&63);
si1=l1;
sj1=(U64)(si1);
sj2=255ULL;
sj1&=sj2;
sj0-=sj1;
l18=sj0;
sj1=32ULL;
si0=sj0 >= sj1;
if(si0){
goto L8;
}
sj0=l18;
si0=(U32)(sj0);
l19=si0;
si1=30U;
si0=si0 > si1;
if(si0){
goto L6;
}
si0=l12;
si1=2U;
si2=l19;
si1<<=(si2&31);
l20=si1;
si0=si0 < si1;
if(si0){
goto L7;
}
si0=l4;
si1=l5;
si2=l0;
si3=l15;
si4=l14;
si5=-64U;
si4&=si5;
si5=l19;
si6=1U;
si5+=si6;
si4>>=(si5&31);
l21=si4;
si0=f985(i,si0,si1,si2,si3,si4);
l1=si0;
si1=l5;
si0=si0 > si1;
if(si0){
goto L5;
}
si0=l1;
si1=l5;
si0=si0 == si1;
if(si0){
goto L13;
}
si0=l5;
si1=3U;
si0<<=(si1&31);
si1=l1;
si2=3U;
si1<<=(si2&31);
l1=si1;
si0-=si1;
l2=si0;
si0=l4;
si1=l1;
si0+=si1;
l1=si0;
L14:;
{
si0=l1;
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=!(si0);
if(si0){
goto L15;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
si1=0U;
si2=l3;
si3=3U;
si2<<=(si3&31);
si0=f15145(i,si0,si1,si2);
L15:;
si0=l1;
si1=8U;
si0+=si1;
l1=si0;
si0=l2;
si1=-8U;
si0+=si1;
l2=si0;
if(si0){
goto L14;
}
}
L13:;
si0=l7;
si1=l5;
si2=l7;
si3=l5;
si2=si2 < si3;
si0=si2?si0:si1;
l3=si0;
si0=!(si0);
if(si0){
goto L17;
}
si0=l4;
l1=si0;
si0=l6;
l2=si0;
L18:;
{
si0=l1;
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L16;
}
si0=l2;
si1=l1;
si1=i32_load(&i->m0,(U64)si1);
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si1=8U;
si0+=si1;
l1=si0;
si0=l2;
si1=8U;
si0+=si1;
l2=si0;
si0=l3;
si1=-1U;
si0+=si1;
l3=si0;
if(si0){
goto L18;
}
}
L17:;
si0=l14;
si1=l19;
si2=1U;
si1<<=(si2&31);
si0>>=(si1&31);
l22=si0;
si1=l19;
si0<<=(si1&31);
l23=si0;
si0=l12;
si1=l20;
si0-=si1;
l24=si0;
si0=l11;
si1=l20;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l25=si0;
si0=l4;
si1=l5;
si2=l22;
si3=l8;
si4=l9;
si5=l10;
si5=i32_load(&i->m0,(U64)si5);
l26=si5;
si6=l10;
si6=i32_load(&i->m0,(U64)si6+4U);
l27=si6;
f998(i,si0,si1,si2,si3,si4,si5,si6);
si0=l5;
si0=!(si0);
if(si0){
goto L19;
}
si0=l4;
si1=l5;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l2=si0;
si0=l4;
l1=si0;
L20:;
{
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
si1=l1;
si2=4U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
f977(i,si0,si1);
si0=l1;
si1=8U;
si0+=si1;
l1=si0;
si1=l2;
si0=si0 != si1;
if(si0){
goto L20;
}
}
si0=l5;
si1=3U;
si0<<=(si1&31);
l3=si0;
si0=l4;
l1=si0;
L21:;
{
si0=l1;
si1=4U;
si0+=si1;
l14=si0;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
if(si0){
goto L22;
}
si0=1189451U;
si1=43U;
si2=1194360U;
f604(i,si0,si1,si2);
UNREACHABLE;
L22:;
si0=l2;
si1=3U;
si0<<=(si1&31);
si1=l1;
si1=i32_load(&i->m0,(U64)si1);
l12=si1;
si0+=si1;
si1=-8U;
si0+=si1;
l10=si0;
sj0=i64_load(&i->m0,(U64)si0);
sj1=0ULL;
si0=sj0 != sj1;
if(si0){
goto L4;
}
si0=l12;
si1=l2;
si2=l23;
si3=l25;
si4=l24;
si0=f978(i,si0,si1,si2,si3,si4);
l2=si0;
si0=l14;
si0=i32_load(&i->m0,(U64)si0);
l14=si0;
si0=!(si0);
if(si0){
goto L3;
}
si0=l14;
si1=3U;
si0<<=(si1&31);
si1=l1;
si1=i32_load(&i->m0,(U64)si1);
si0+=si1;
si1=-8U;
si0+=si1;
si1=l2;
sj1=(U64)(si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si1=8U;
si0+=si1;
l1=si0;
si0=l3;
si1=-8U;
si0+=si1;
l3=si0;
if(si0){
goto L21;
}
}
L19:;
si0=l4;
si1=l5;
si2=l22;
si3=l8;
si4=l9;
si5=l26;
si6=l27;
f999(i,si0,si1,si2,si3,si4,si5,si6);
si0=l7;
si0=!(si0);
if(si0){
goto L1;
}
si0=16U;
si1=l19;
si0<<=(si1&31);
si1=3U;
si0>>=(si1&31);
l28=si0;
si1=l7;
si2=l28;
si3=l7;
si2=si2 < si3;
si0=si2?si0:si1;
l1=si0;
si1=3U;
si0&=si1;
l14=si0;
si0=l6;
sj0=i64_load(&i->m0,(U64)si0);
l17=sj0;
si0=0U;
l12=si0;
si0=l1;
si1=4U;
si0=si0 < si1;
if(si0){
goto L2;
}
si0=l1;
si1=3U;
si0<<=(si1&31);
si1=-32U;
si0&=si1;
l10=si0;
si0=0U;
l1=si0;
si0=0U;
l12=si0;
L23:;
{
si0=l11;
si1=l1;
si0+=si1;
l2=si0;
si1=l6;
si2=l1;
si1+=si2;
l3=si1;
sj1=i64_load(&i->m0,(U64)si1);
sj2=l17;
sj1*=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=8U;
si0+=si1;
si1=l3;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
sj2=l17;
sj1*=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=16U;
si0+=si1;
si1=l3;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
sj2=l17;
sj1*=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=24U;
si0+=si1;
si1=l3;
si2=24U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
sj2=l17;
sj1*=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l12;
si1=4U;
si0+=si1;
l12=si0;
si0=l10;
si1=l1;
si2=32U;
si1+=si2;
l1=si1;
si0=si0 != si1;
if(si0){
goto L23;
}
goto L2;
}
L16:;
si0=0U;
si1=0U;
si2=1194408U;
f594(i,si0,si1,si2);
UNREACHABLE;
L11:;
si0=l15;
si1=l1;
si2=1194024U;
f594(i,si0,si1,si2);
UNREACHABLE;
L10:;
si0=l13;
si1=20U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l13;
si1=1U;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l13;
si1=1206456U;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l13;
si1=1206464U;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l13;
si1=8U;
si0+=si1;
si1=1206592U;
f614(i,si0,si1);
UNREACHABLE;
L9:;
si0=l13;
si1=0U;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=0U;
si1=l16;
si2=1193472U;
si3=l13;
si4=8U;
si3+=si4;
si4=1194424U;
f1251(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L8:;
si0=1206624U;
si1=32U;
si2=1206784U;
f604(i,si0,si1,si2);
UNREACHABLE;
L7:;
si0=1189416U;
si1=35U;
si2=1194056U;
f604(i,si0,si1,si2);
UNREACHABLE;
L6:;
si0=1192032U;
si1=25U;
si2=1194040U;
f604(i,si0,si1,si2);
UNREACHABLE;
L5:;
si0=l1;
si1=l5;
si2=1194072U;
f593(i,si0,si1,si2);
UNREACHABLE;
L4:;
si0=l13;
si1=0U;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=0U;
si1=l10;
si2=1193472U;
si3=l13;
si4=8U;
si3+=si4;
si4=1194392U;
f1251(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L3:;
si0=1189451U;
si1=43U;
si2=1194376U;
f604(i,si0,si1,si2);
UNREACHABLE;
L2:;
si0=l14;
si0=!(si0);
if(si0){
goto L24;
}
si0=l11;
si1=l12;
si2=3U;
si1<<=(si2&31);
l2=si1;
si0+=si1;
l1=si0;
si0=l6;
si1=l2;
si0+=si1;
l2=si0;
L25:;
{
si0=l1;
si1=l2;
sj1=i64_load(&i->m0,(U64)si1);
sj2=l17;
sj1*=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si1=8U;
si0+=si1;
l1=si0;
si0=l2;
si1=8U;
si0+=si1;
l2=si0;
si0=l14;
si1=-1U;
si0+=si1;
l14=si0;
if(si0){
goto L25;
}
}
L24:;
si0=l7;
si1=2U;
si0=si0 < si1;
if(si0){
goto L28;
}
si0=l6;
si1=l7;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l29=si0;
si0=l7;
si1=-1U;
si0+=si1;
l9=si0;
si0=l11;
si1=16U;
si0+=si1;
l8=si0;
si0=l20;
si1=1U;
si0|=si1;
l30=si0;
si0=l7;
si1=3U;
si0<<=(si1&31);
si1=l6;
si0+=si1;
si1=-8U;
si0+=si1;
l22=si0;
si0=1U;
l26=si0;
si0=16U;
si1=l19;
si0<<=(si1&31);
si1=-8U;
si0+=si1;
l31=si0;
l27=si0;
si0=0U;
l19=si0;
si0=1U;
l10=si0;
L29:;
{
si0=l10;
si1=l30;
si0=si0 == si1;
if(si0){
goto L27;
}
si0=l6;
si1=l7;
si2=l10;
si1-=si2;
l1=si1;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l32=si0;
si0=l6;
si1=l10;
si2=3U;
si1<<=(si2&31);
l2=si1;
si0+=si1;
sj0=i64_load(&i->m0,(U64)si0);
l17=sj0;
si0=l25;
si1=l11;
si2=l2;
si1+=si2;
l33=si1;
si0-=si1;
si1=3U;
si0>>=(si1&31);
l2=si0;
si1=l1;
si2=l2;
si3=l1;
si2=si2 < si3;
si0=si2?si0:si1;
si0=!(si0);
if(si0){
goto L30;
}
si0=l19;
si1=-1U;
si0^=si1;
si1=l7;
si0+=si1;
l1=si0;
si1=l31;
si2=l19;
si3=3U;
si2<<=(si3&31);
si1-=si2;
si2=3U;
si1>>=(si2&31);
l2=si1;
si2=l1;
si3=l2;
si2=si2 < si3;
si0=si2?si0:si1;
l1=si0;
si1=1U;
si0&=si1;
l34=si0;
si0=0U;
l3=si0;
si0=l1;
si1=1U;
si0=si0 == si1;
if(si0){
goto L31;
}
si0=l9;
si1=l27;
si2=3U;
si1>>=(si2&31);
l1=si1;
si2=l9;
si3=l1;
si2=si2 < si3;
si0=si2?si0:si1;
si1=536870910U;
si0&=si1;
l12=si0;
si0=0U;
l3=si0;
si0=l6;
l2=si0;
si0=l8;
l1=si0;
L32:;
{
si0=l1;
si1=-8U;
si0+=si1;
l14=si0;
si1=l14;
sj1=i64_load(&i->m0,(U64)si1);
si2=l2;
sj2=i64_load(&i->m0,(U64)si2);
sj3=l17;
sj2*=sj3;
sj1+=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si1=l1;
sj1=i64_load(&i->m0,(U64)si1);
si2=l2;
si3=8U;
si2+=si3;
sj2=i64_load(&i->m0,(U64)si2);
sj3=l17;
sj2*=sj3;
sj1+=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=16U;
si0+=si1;
l2=si0;
si0=l1;
si1=16U;
si0+=si1;
l1=si0;
si0=l12;
si1=l3;
si2=2U;
si1+=si2;
l3=si1;
si0=si0 != si1;
if(si0){
goto L32;
}
}
L31:;
si0=l34;
si0=!(si0);
if(si0){
goto L30;
}
si0=l33;
si1=l3;
si2=3U;
si1<<=(si2&31);
l1=si1;
si0+=si1;
l2=si0;
si1=l2;
sj1=i64_load(&i->m0,(U64)si1);
si2=l6;
si3=l1;
si2+=si3;
sj2=i64_load(&i->m0,(U64)si2);
sj3=l17;
sj2*=sj3;
sj1+=sj2;
i64_store(&i->m0,(U64)si0,sj1);
L30:;
si0=l19;
si1=1U;
si0+=si1;
l19=si0;
si0=l10;
si1=l29;
si2=l32;
si1-=si2;
si2=3U;
si1>>=(si2&31);
l1=si1;
si2=l10;
si3=l1;
si2=si2 < si3;
si0=si2?si0:si1;
si0=!(si0);
if(si0){
goto L33;
}
si0=l10;
si1=l19;
si2=536870911U;
si1&=si2;
l1=si1;
si2=l10;
si3=l1;
si2=si2 < si3;
si0=si2?si0:si1;
l1=si0;
si1=1U;
si0&=si1;
l33=si0;
si0=0U;
l2=si0;
si0=l1;
si1=1U;
si0=si0 == si1;
if(si0){
goto L34;
}
si0=0U;
si1=l10;
si2=l26;
si3=536870911U;
si2&=si3;
l1=si2;
si3=l10;
si4=l1;
si3=si3 < si4;
si1=si3?si1:si2;
si2=536870910U;
si1&=si2;
si0-=si1;
l12=si0;
si0=0U;
l3=si0;
si0=l22;
l2=si0;
si0=l11;
l1=si0;
L35:;
{
si0=l1;
si1=l1;
sj1=i64_load(&i->m0,(U64)si1);
si2=l2;
sj2=i64_load(&i->m0,(U64)si2);
sj3=l17;
sj2*=sj3;
sj1-=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si1=8U;
si0+=si1;
l14=si0;
si1=l14;
sj1=i64_load(&i->m0,(U64)si1);
si2=l2;
si3=8U;
si2+=si3;
sj2=i64_load(&i->m0,(U64)si2);
sj3=l17;
sj2*=sj3;
sj1-=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=16U;
si0+=si1;
l2=si0;
si0=l1;
si1=16U;
si0+=si1;
l1=si0;
si0=l12;
si1=l3;
si2=-2U;
si1+=si2;
l3=si1;
si0=si0 != si1;
if(si0){
goto L35;
}
}
si0=0U;
si1=l3;
si0-=si1;
l2=si0;
L34:;
si0=l33;
si0=!(si0);
if(si0){
goto L33;
}
si0=l11;
si1=l2;
si2=3U;
si1<<=(si2&31);
l1=si1;
si0+=si1;
l2=si0;
si1=l2;
sj1=i64_load(&i->m0,(U64)si1);
si2=l32;
si3=l1;
si2+=si3;
sj2=i64_load(&i->m0,(U64)si2);
sj3=l17;
sj2*=sj3;
sj1-=sj2;
i64_store(&i->m0,(U64)si0,sj1);
L33:;
si0=l22;
si1=-8U;
si0+=si1;
l22=si0;
si0=l26;
si1=1U;
si0+=si1;
l26=si0;
si0=l27;
si1=-8U;
si0+=si1;
l27=si0;
si0=l9;
si1=-1U;
si0+=si1;
l9=si0;
si0=l8;
si1=8U;
si0+=si1;
l8=si0;
si0=l10;
si1=1U;
si0+=si1;
l10=si0;
si1=l7;
si0=si0 != si1;
if(si0){
goto L29;
}
}
L28:;
si0=l28;
si1=l5;
si2=l28;
si3=l5;
si2=si2 < si3;
si0=si2?si0:si1;
l7=si0;
si0=!(si0);
if(si0){
goto L26;
}
sj0=l18;
sj1=1ULL;
sj0+=sj1;
l35=sj0;
sj1=63ULL;
sj0&=sj1;
l36=sj0;
si0=0U;
l12=si0;
L36:;
{
si0=l4;
si1=l12;
si2=3U;
si1<<=(si2&31);
l10=si1;
si0+=si1;
l3=si0;
si1=4U;
si0+=si1;
l14=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+4U);
l1=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
sj0=l35;
si0=!(sj0);
if(si0){
goto L42;
}
si0=l1;
si0=!(si0);
if(si0){
goto L41;
}
si0=l2;
si1=l1;
si2=-1U;
si1+=si2;
l19=si1;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l6=si0;
sj0=i64_load(&i->m0,(U64)si0);
l18=sj0;
si0=l2;
si1=l1;
sj2=l35;
sj0=f1026(i,si0,si1,sj2);
l17=sj0;
si0=l19;
si0=!(si0);
if(si0){
goto L40;
}
si0=l1;
si1=3U;
si0<<=(si1&31);
si1=l2;
si0+=si1;
si1=-16U;
si0+=si1;
l1=si0;
si1=l1;
sj1=i64_load(&i->m0,(U64)si1);
sj2=l17;
sj1-=sj2;
l37=sj1;
i64_store(&i->m0,(U64)si0,sj1);
si0=l6;
sj1=l18;
sj2=l36;
sj1=(U64)((I64)sj1>>(sj2&63));
sj2=l17;
sj3=0ULL;
si2=sj2 != sj3;
sj2=(U64)(si2);
sj1-=sj2;
sj2=l37;
sj3=0ULL;
sj4=l17;
sj3-=sj4;
si2=sj2 < sj3;
sj2=(U64)(si2);
sj1+=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l14;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
L42:;
si0=l2;
si1=l1;
f977(i,si0,si1);
si0=l14;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
if(si0){
goto L43;
}
si0=1189451U;
si1=43U;
si2=1194296U;
f604(i,si0,si1,si2);
UNREACHABLE;
L43:;
si0=l1;
si1=-1U;
si0+=si1;
l1=si0;
si0=!(si0);
if(si0){
goto L39;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si1=l1;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l1=si0;
sj0=i64_load(&i->m0,(U64)si0);
l18=sj0;
si0=l1;
si1=l11;
si2=l10;
si1+=si2;
l10=si1;
sj1=i64_load(&i->m0,(U64)si1);
si2=l2;
sj2=i64_load(&i->m0,(U64)si2);
sj1-=sj2;
l17=sj1;
i64_store(&i->m0,(U64)si0,sj1);
si0=l14;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si0=!(si0);
if(si0){
goto L38;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si1=l1;
sj1=i64_load(&i->m0,(U64)si1);
l37=sj1;
sj2=l17;
sj1+=sj2;
l17=sj1;
i64_store(&i->m0,(U64)si0,sj1);
si0=0U;
l19=si0;
sj0=l17;
sj1=l37;
si0=sj0 >= sj1;
if(si0){
goto L37;
}
si0=l1;
si1=8U;
si0+=si1;
l1=si0;
si0=l2;
si1=3U;
si0<<=(si1&31);
si1=-8U;
si0+=si1;
l2=si0;
L44:;
{
si0=l2;
if(si0){
goto L45;
}
sj0=1ULL;
l17=sj0;
goto L38;
L45:;
si0=l1;
si1=l1;
sj1=i64_load(&i->m0,(U64)si1);
sj2=1ULL;
sj1+=sj2;
l17=sj1;
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=-8U;
si0+=si1;
l2=si0;
si0=l1;
si1=8U;
si0+=si1;
l1=si0;
sj0=l17;
si0=!(sj0);
if(si0){
goto L44;
}
goto L37;
}
L41:;
si0=1189451U;
si1=43U;
si2=1189972U;
f604(i,si0,si1,si2);
UNREACHABLE;
L40:;
si0=1189451U;
si1=43U;
si2=1189988U;
f604(i,si0,si1,si2);
UNREACHABLE;
L39:;
si0=0U;
si1=0U;
si2=1194312U;
f594(i,si0,si1,si2);
UNREACHABLE;
L38:;
sj0=l17;
sj1=0ULL;
si0=sj0 != sj1;
l19=si0;
L37:;
si0=l14;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si0=!(si0);
if(si0){
goto L47;
}
si0=l10;
si1=l1;
si2=3U;
si1<<=(si2&31);
si2=l3;
si2=i32_load(&i->m0,(U64)si2);
si1+=si2;
si2=-8U;
si1+=si2;
l1=si1;
sj1=i64_load(&i->m0,(U64)si1);
l17=sj1;
sj2=l18;
sj1+=sj2;
l18=sj1;
sj2=l17;
si1=sj1 < sj2;
sj1=(U64)(si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
sj1=l18;
i64_store(&i->m0,(U64)si0,sj1);
si0=l19;
si0=!(si0);
if(si0){
goto L46;
}
si0=l10;
si1=l10;
sj1=i64_load(&i->m0,(U64)si1);
sj2=1ULL;
sj1+=sj2;
i64_store(&i->m0,(U64)si0,sj1);
goto L46;
L47:;
si0=1189451U;
si1=43U;
si2=1194328U;
f604(i,si0,si1,si2);
UNREACHABLE;
L46:;
si0=l12;
si1=1U;
si0+=si1;
l12=si0;
si1=l7;
si0=si0 != si1;
if(si0){
goto L36;
}
goto L26;
}
L27:;
si0=1189416U;
si1=35U;
si2=1194344U;
f604(i,si0,si1,si2);
UNREACHABLE;
L26:;
si0=l0;
si1=0U;
si2=l15;
si3=1U;
si2+=si3;
l26=si2;
si3=3U;
si2<<=(si3&31);
si0=f15145(i,si0,si1,si2);
l22=si0;
si0=l20;
si1=-1U;
si0+=si1;
l27=si0;
si1=l5;
si0=si0 > si1;
if(si0){
goto L51;
}
si0=l22;
si1=l26;
si2=l4;
si3=l27;
si4=l21;
si5=l23;
si6=6U;
si5>>=(si6&31);
l8=si5;
si6=1U;
si5+=si6;
l32=si5;
si6=l25;
si7=l24;
f984(i,si0,si1,si2,si3,si4,si5,si6,si7);
si0=l22;
si1=8U;
si0+=si1;
l10=si0;
si0=l21;
si1=6U;
si0>>=(si1&31);
l7=si0;
si0=l20;
si1=-2U;
si0+=si1;
l9=si0;
if(si0){
goto L52;
}
si0=l15;
l25=si0;
goto L48;
L52:;
si0=l8;
si1=3U;
si0<<=(si1&31);
l23=si0;
si0=l7;
si1=3U;
si0<<=(si1&31);
l6=si0;
si0=l22;
si1=16U;
si0+=si1;
l19=si0;
si0=l15;
si1=3U;
si0<<=(si1&31);
si1=-8U;
si0+=si1;
l12=si0;
si0=l15;
si1=l7;
si2=2U;
si3=l20;
si2-=si3;
si1*=si2;
si0+=si1;
l25=si0;
si0=0U;
l3=si0;
si0=l15;
l14=si0;
L53:;
{
si0=l3;
si1=l20;
si0=si0 == si1;
if(si0){
goto L58;
}
si0=l11;
si1=l3;
si2=3U;
si1<<=(si2&31);
l1=si1;
si0+=si1;
sj0=i64_load(&i->m0,(U64)si0);
si0=!(sj0);
si0=!(si0);
if(si0){
goto L57;
}
si0=l3;
si1=l5;
si0=si0 >= si1;
if(si0){
goto L56;
}
si0=l4;
si1=l1;
si0+=si1;
l1=si0;
si0=i32_load(&i->m0,(U64)si0+4U);
l2=si0;
if(si0){
goto L55;
}
si0=1189451U;
si1=43U;
si2=1194248U;
f604(i,si0,si1,si2);
UNREACHABLE;
L58:;
si0=l20;
si1=l20;
si2=1194216U;
f594(i,si0,si1,si2);
UNREACHABLE;
L57:;
si0=l14;
si0=!(si0);
if(si0){
goto L54;
}
si0=l10;
si1=l10;
sj1=i64_load(&i->m0,(U64)si1);
l17=sj1;
sj2=-1ULL;
sj1+=sj2;
i64_store(&i->m0,(U64)si0,sj1);
sj0=l17;
sj1=0ULL;
si0=sj0 != sj1;
if(si0){
goto L54;
}
si0=l12;
l2=si0;
si0=l19;
l1=si0;
L59:;
{
si0=l2;
si0=!(si0);
if(si0){
goto L54;
}
si0=l1;
si1=l1;
sj1=i64_load(&i->m0,(U64)si1);
l17=sj1;
sj2=-1ULL;
sj1+=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=-8U;
si0+=si1;
l2=si0;
si0=l1;
si1=8U;
si0+=si1;
l1=si0;
sj0=l17;
si0=!(sj0);
if(si0){
goto L59;
}
goto L54;
}
L56:;
si0=l3;
si1=l5;
si2=1194232U;
f594(i,si0,si1,si2);
UNREACHABLE;
L55:;
si0=l2;
si1=3U;
si0<<=(si1&31);
si1=l1;
si1=i32_load(&i->m0,(U64)si1);
si0+=si1;
si1=-8U;
si0+=si1;
sj0=i64_load(&i->m0,(U64)si0);
sj1=-1ULL;
si0=(U64)((I64)sj0>(I64)sj1);
if(si0){
goto L54;
}
si0=l14;
si0=!(si0);
if(si0){
goto L60;
}
si0=l10;
si1=l10;
sj1=i64_load(&i->m0,(U64)si1);
l17=sj1;
sj2=-1ULL;
sj1+=sj2;
i64_store(&i->m0,(U64)si0,sj1);
sj0=l17;
sj1=0ULL;
si0=sj0 != sj1;
if(si0){
goto L60;
}
si0=0U;
l1=si0;
L61:;
{
si0=l12;
si1=l1;
si0=si0 == si1;
if(si0){
goto L60;
}
si0=l19;
si1=l1;
si0+=si1;
l2=si0;
si1=l2;
sj1=i64_load(&i->m0,(U64)si1);
l17=sj1;
sj2=-1ULL;
sj1+=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si1=8U;
si0+=si1;
l1=si0;
sj0=l17;
si0=!(sj0);
if(si0){
goto L61;
}
}
L60:;
si0=l8;
si1=l14;
si0=si0 > si1;
if(si0){
goto L50;
}
si0=l14;
si1=l8;
si0=si0 == si1;
if(si0){
goto L54;
}
si0=l10;
si1=l8;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l1=si0;
si1=l1;
sj1=i64_load(&i->m0,(U64)si1);
l17=sj1;
sj2=-1ULL;
sj1+=sj2;
i64_store(&i->m0,(U64)si0,sj1);
sj0=l17;
sj1=0ULL;
si0=sj0 != sj1;
if(si0){
goto L54;
}
si0=l23;
l1=si0;
L62:;
{
si0=l12;
si1=l1;
si0=si0 == si1;
if(si0){
goto L54;
}
si0=l19;
si1=l1;
si0+=si1;
l2=si0;
si1=l2;
sj1=i64_load(&i->m0,(U64)si1);
l17=sj1;
sj2=-1ULL;
sj1+=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si1=8U;
si0+=si1;
l1=si0;
sj0=l17;
si0=!(sj0);
if(si0){
goto L62;
}
}
L54:;
si0=l14;
si1=l7;
si0=si0 < si1;
if(si0){
goto L49;
}
si0=l12;
si1=l6;
si0-=si1;
l12=si0;
si0=l19;
si1=l6;
si0+=si1;
l19=si0;
si0=l14;
si1=l7;
si0-=si1;
l14=si0;
si0=l10;
si1=l6;
si0+=si1;
l10=si0;
si0=l3;
si1=1U;
si0+=si1;
l3=si0;
si1=l9;
si0=si0 == si1;
if(si0){
goto L48;
}
goto L53;
}
L51:;
si0=l27;
si1=l5;
si2=1194104U;
f597(i,si0,si1,si2);
UNREACHABLE;
L50:;
si0=l8;
si1=l14;
si2=1194264U;
f593(i,si0,si1,si2);
UNREACHABLE;
L49:;
si0=l7;
si1=l14;
si2=1194280U;
f593(i,si0,si1,si2);
UNREACHABLE;
L48:;
si0=l11;
si1=l9;
si2=3U;
si1<<=(si2&31);
si0+=si1;
sj0=i64_load(&i->m0,(U64)si0);
sj1=0ULL;
si0=sj0 != sj1;
if(si0){
goto L70;
}
si0=l9;
si1=l5;
si0=si0 >= si1;
if(si0){
goto L68;
}
si0=l4;
si1=l9;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l1=si0;
si0=i32_load(&i->m0,(U64)si0+4U);
l2=si0;
si0=!(si0);
if(si0){
goto L67;
}
si0=l2;
si1=3U;
si0<<=(si1&31);
si1=l1;
si1=i32_load(&i->m0,(U64)si1);
si0+=si1;
si1=-8U;
si0+=si1;
sj0=i64_load(&i->m0,(U64)si0);
sj1=-1ULL;
si0=(U64)((I64)sj0>(I64)sj1);
if(si0){
goto L69;
}
L70:;
si0=l25;
si0=!(si0);
if(si0){
goto L69;
}
si0=l10;
si1=l10;
sj1=i64_load(&i->m0,(U64)si1);
l17=sj1;
sj2=-1ULL;
sj1+=sj2;
i64_store(&i->m0,(U64)si0,sj1);
sj0=l17;
sj1=0ULL;
si0=sj0 != sj1;
if(si0){
goto L69;
}
si0=l10;
si1=8U;
si0+=si1;
l1=si0;
si0=l25;
si1=3U;
si0<<=(si1&31);
si1=-8U;
si0+=si1;
l2=si0;
L71:;
{
si0=l2;
si0=!(si0);
if(si0){
goto L69;
}
si0=l1;
si1=l1;
sj1=i64_load(&i->m0,(U64)si1);
l17=sj1;
sj2=-1ULL;
sj1+=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=-8U;
si0+=si1;
l2=si0;
si0=l1;
si1=8U;
si0+=si1;
l1=si0;
sj0=l17;
si0=!(sj0);
if(si0){
goto L71;
}
}
L69:;
si0=l27;
si1=l5;
si0=si0 >= si1;
if(si0){
goto L65;
}
si0=l4;
si1=l27;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l1=si0;
si0=i32_load(&i->m0,(U64)si0+4U);
l10=si0;
si1=l7;
si0=si0 < si1;
if(si0){
goto L66;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l19=si0;
si0=l21;
si1=64U;
si0=si0 < si1;
if(si0){
goto L63;
}
si0=l15;
si1=l7;
si0-=si1;
l1=si0;
si0=l15;
si1=l7;
si0=si0 < si1;
if(si0){
goto L64;
}
si0=l22;
si1=l1;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l1=si0;
si0=0U;
l3=si0;
si0=l7;
l14=si0;
si0=l19;
l2=si0;
L72:;
{
si0=l1;
sj0=i64_load(&i->m0,(U64)si0);
l18=sj0;
si1=l2;
sj1=i64_load(&i->m0,(U64)si1);
sj0+=sj1;
l17=sj0;
sj1=l18;
si0=sj0 < sj1;
l12=si0;
si0=l3;
si1=255U;
si0&=si1;
if(si0){
goto L74;
}
si0=l12;
l3=si0;
goto L73;
L74:;
si0=l12;
sj1=l17;
sj2=1ULL;
sj1+=sj2;
l17=sj1;
si1=!(sj1);
si0|=si1;
l3=si0;
L73:;
si0=l1;
sj1=l17;
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si1=8U;
si0+=si1;
l1=si0;
si0=l2;
si1=8U;
si0+=si1;
l2=si0;
si0=l14;
si1=-1U;
si0+=si1;
l14=si0;
if(si0){
goto L72;
}
}
si0=l3;
si0=!(si0);
if(si0){
goto L63;
}
si0=l16;
si1=l16;
sj1=i64_load(&i->m0,(U64)si1);
sj2=1ULL;
sj1+=sj2;
i64_store(&i->m0,(U64)si0,sj1);
goto L63;
L68:;
si0=l9;
si1=l5;
si2=1194120U;
f594(i,si0,si1,si2);
UNREACHABLE;
L67:;
si0=1189451U;
si1=43U;
si2=1194136U;
f604(i,si0,si1,si2);
UNREACHABLE;
L66:;
si0=1189416U;
si1=35U;
si2=1194168U;
f604(i,si0,si1,si2);
UNREACHABLE;
L65:;
si0=l27;
si1=l5;
si2=1194152U;
f594(i,si0,si1,si2);
UNREACHABLE;
L64:;
si0=l1;
si1=l15;
si2=1194184U;
f593(i,si0,si1,si2);
UNREACHABLE;
L63:;
si0=l32;
si1=l7;
si0-=si1;
l11=si0;
si1=l26;
si0=si0 > si1;
if(si0){
goto L77;
}
si0=l13;
si1=l11;
i32_store(&i->m0,(U64)si0,si1);
si0=l13;
si1=l10;
si2=l7;
si1-=si2;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l32;
si1=l10;
si0=si0 != si1;
if(si0){
goto L80;
}
si0=l32;
si1=l7;
si0=si0 == si1;
if(si0){
goto L75;
}
si0=l19;
si1=l7;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l6=si0;
si0=l11;
si1=1U;
si0&=si1;
l19=si0;
si0=l8;
si1=l7;
si0=si0 != si1;
if(si0){
goto L79;
}
si0=0U;
l3=si0;
si0=0U;
l14=si0;
goto L78;
L80:;
si0=l13;
si1=0U;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=0U;
si1=l13;
si2=l13;
si3=4U;
si2+=si3;
si3=l13;
si4=8U;
si3+=si4;
si4=1203476U;
f1250(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L79:;
si0=l11;
si1=-2U;
si0&=si1;
l10=si0;
si0=0U;
l3=si0;
si0=l6;
l2=si0;
si0=l22;
l1=si0;
si0=0U;
l14=si0;
L81:;
{
si0=l1;
si1=l1;
sj1=i64_load(&i->m0,(U64)si1);
l17=sj1;
si2=l3;
sj2=(U64)(si2);
sj3=1ULL;
sj2&=sj3;
si3=l2;
sj3=i64_load(&i->m0,(U64)si3);
l18=sj3;
sj2+=sj3;
sj1-=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si1=8U;
si0+=si1;
l12=si0;
si1=l12;
sj1=i64_load(&i->m0,(U64)si1);
l35=sj1;
sj2=l17;
sj3=l18;
si2=sj2 <= sj3;
sj3=l17;
sj4=l18;
si3=sj3 < sj4;
si4=l3;
si5=1U;
si4&=si5;
si2=si4?si2:si3;
l3=si2;
sj2=(U64)(si2);
si3=l2;
si4=8U;
si3+=si4;
sj3=i64_load(&i->m0,(U64)si3);
l17=sj3;
sj2+=sj3;
sj1-=sj2;
i64_store(&i->m0,(U64)si0,sj1);
sj0=l35;
sj1=l17;
si0=sj0 <= sj1;
sj1=l35;
sj2=l17;
si1=sj1 < sj2;
si2=l3;
si0=si2?si0:si1;
l3=si0;
si0=l2;
si1=16U;
si0+=si1;
l2=si0;
si0=l1;
si1=16U;
si0+=si1;
l1=si0;
si0=l10;
si1=l14;
si2=2U;
si1+=si2;
l14=si1;
si0=si0 != si1;
if(si0){
goto L81;
}
}
L78:;
si0=l19;
si0=!(si0);
if(si0){
goto L82;
}
si0=l22;
si1=l14;
si2=3U;
si1<<=(si2&31);
l1=si1;
si0+=si1;
l2=si0;
si1=l2;
sj1=i64_load(&i->m0,(U64)si1);
l17=sj1;
si2=l3;
sj2=(U64)(si2);
si3=l6;
si4=l1;
si3+=si4;
sj3=i64_load(&i->m0,(U64)si3);
l18=sj3;
sj2+=sj3;
sj1-=sj2;
i64_store(&i->m0,(U64)si0,sj1);
sj0=l17;
sj1=l18;
si0=sj0 <= sj1;
sj1=l17;
sj2=l18;
si1=sj1 < sj2;
si2=l3;
si0=si2?si0:si1;
l3=si0;
L82:;
si0=l3;
si1=1U;
si0&=si1;
si0=!(si0);
if(si0){
goto L75;
}
si0=l26;
si1=l11;
si0=si0 == si1;
if(si0){
goto L76;
}
si0=l22;
si1=l11;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l1=si0;
sj0=i64_load(&i->m0,(U64)si0);
l17=sj0;
sj1=-1ULL;
sj0+=sj1;
l18=sj0;
sj1=l17;
sj0^=sj1;
sj1=0ULL;
si0=(U64)((I64)sj0<(I64)sj1);
if(si0){
goto L83;
}
si0=l1;
sj1=l18;
i64_store(&i->m0,(U64)si0,sj1);
goto L75;
L83:;
si0=l1;
sj1=l18;
i64_store(&i->m0,(U64)si0,sj1);
sj0=l17;
sj1=0ULL;
si0=sj0 != sj1;
if(si0){
goto L75;
}
si0=l7;
si1=3U;
si0<<=(si1&31);
l1=si0;
si1=l15;
si2=3U;
si1<<=(si2&31);
si0+=si1;
si1=l8;
si2=3U;
si1<<=(si2&31);
l3=si1;
si0-=si1;
si1=-8U;
si0+=si1;
l2=si0;
si0=l3;
si1=l1;
si0-=si1;
si1=l22;
si0+=si1;
si1=16U;
si0+=si1;
l1=si0;
L84:;
{
si0=l2;
si0=!(si0);
if(si0){
goto L75;
}
si0=l1;
si1=l1;
sj1=i64_load(&i->m0,(U64)si1);
l17=sj1;
sj2=-1ULL;
sj1+=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=-8U;
si0+=si1;
l2=si0;
si0=l1;
si1=8U;
si0+=si1;
l1=si0;
sj0=l17;
si0=!(sj0);
si0=!(si0);
if(si0){
goto L75;
}
goto L84;
}
L77:;
si0=1189416U;
si1=35U;
si2=1194200U;
f604(i,si0,si1,si2);
UNREACHABLE;
L76:;
si0=1189451U;
si1=43U;
si2=1189760U;
f604(i,si0,si1,si2);
UNREACHABLE;
L75:;
si0=l22;
si1=l26;
f977(i,si0,si1);
si0=l13;
si1=32U;
si0+=si1;
i->g0=si0;
goto L0;
L1:;
si0=0U;
si1=0U;
si2=1194088U;
f594(i,si0,si1,si2);
UNREACHABLE;
L0:;
}

void f1002(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4,U32 l5,U32 l6,U32 l7,U32 l8,U32 l9,U32 l10) {
U32 l11=0;
U32 l12=0;
U32 l13=0;
U32 l14=0;
U32 l15=0;
U32 l16=0;
U64 l17=0;
U32 l18=0;
U64 l19=0;
U64 l20=0;
U64 l21=0;
U32 si0,si1,si2,si3,si4,si5,si6,si7,si8,si9,si10,si11,si12;
U64 sj0,sj1,sj2,sj3,sj4;
si0=l1;
si1=l3;
si2=l2;
si1*=si2;
l11=si1;
si0=si0 < si1;
if(si0){
goto L16;
}
si0=l0;
si1=l11;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l12=si0;
si0=l3;
si1=1U;
si0=si0 != si1;
if(si0){
goto L21;
}
si0=l11;
si0=!(si0);
if(si0){
goto L20;
}
si0=l1;
si1=l11;
si0=si0 == si1;
if(si0){
goto L19;
}
si0=l9;
si1=l7;
si0*=si1;
l13=si0;
si1=l8;
si0*=si1;
l14=si0;
si1=63U;
si0&=si1;
l15=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+4U);
l3=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
si0=l14;
si1=l5;
si1=i32_load(&i->m0,(U64)si1+4U);
si2=6U;
si1<<=(si2&31);
si2=-64U;
si1+=si2;
l2=si1;
si0=si0 < si1;
l16=si0;
si0=!(si0);
if(si0){
goto L18;
}
goto L11;
L21:;
si0=l0;
si1=l11;
si2=l2;
si3=l3;
si4=1U;
si3>>=(si4&31);
l15=si3;
si4=l4;
si5=1U;
si4<<=(si5&31);
l13=si4;
si5=l5;
si6=l6;
si7=l7;
si8=l8;
si9=l9;
si10=l10;
si11=1U;
si10<<=(si11&31);
l16=si10;
f1002(i,si0,si1,si2,si3,si4,si5,si6,si7,si8,si9,si10);
si0=l12;
si1=l1;
si2=l11;
si1-=si2;
l14=si1;
si2=l2;
si3=l15;
si4=l13;
si5=l5;
si6=l6;
si7=l7;
si8=l10;
si9=l8;
si8+=si9;
si9=l9;
si10=l16;
f1002(i,si0,si1,si2,si3,si4,si5,si6,si7,si8,si9,si10);
si0=l3;
si0=!(si0);
if(si0){
goto L12;
}
si0=l11;
si1=l14;
si0=si0 > si1;
if(si0){
goto L17;
}
si0=l2;
si1=3U;
si0<<=(si1&31);
l14=si0;
si0=l11;
si1=3U;
si0<<=(si1&31);
l12=si0;
si0=0U;
l1=si0;
si0=0U;
l7=si0;
L22:;
{
si0=l1;
si1=l11;
si0=si0 >= si1;
if(si0){
goto L14;
}
si0=l5;
si0=i32_load(&i->m0,(U64)si0);
si1=l5;
si1=i32_load(&i->m0,(U64)si1+4U);
si2=l6;
si2=i32_load(&i->m0,(U64)si2);
si3=l6;
si3=i32_load(&i->m0,(U64)si3+4U);
si4=l0;
si4=i32_load(&i->m0,(U64)si4);
si5=l0;
si6=4U;
si5+=si6;
si5=i32_load(&i->m0,(U64)si5);
si6=l0;
si7=l12;
si6+=si7;
l9=si6;
si6=i32_load(&i->m0,(U64)si6);
si7=l9;
si8=4U;
si7+=si8;
si7=i32_load(&i->m0,(U64)si7);
si8=l7;
si9=l4;
f990(i,si0,si1,si2,si3,si4,si5,si6,si7,si8,si9);
si0=l0;
sj0=i64_load(&i->m0,(U64)si0);
l17=sj0;
si0=l0;
si1=l5;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
sj1=l17;
i64_store(&i->m0,(U64)si0,sj1);
si0=l9;
sj0=i64_load(&i->m0,(U64)si0);
l17=sj0;
si0=l9;
si1=l6;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l6;
sj1=l17;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=l14;
si0+=si1;
l0=si0;
si0=l1;
si1=l2;
si0+=si1;
l1=si0;
si0=l3;
si1=l7;
si2=1U;
si1+=si2;
l7=si1;
si0=si0 != si1;
if(si0){
goto L22;
}
goto L12;
}
L20:;
si0=0U;
si1=0U;
si2=1194456U;
f594(i,si0,si1,si2);
UNREACHABLE;
L19:;
si0=0U;
si1=0U;
si2=1194472U;
f594(i,si0,si1,si2);
UNREACHABLE;
L18:;
si0=l3;
si0=!(si0);
if(si0){
goto L13;
}
si0=l3;
si1=3U;
si0<<=(si1&31);
l7=si0;
si0=l3;
si1=-1U;
si0+=si1;
si1=536870911U;
si0&=si1;
si1=1U;
si0+=si1;
l18=si0;
si0=0U;
l9=si0;
si0=l4;
l1=si0;
L24:;
{
si0=l1;
sj0=i64_load(&i->m0,(U64)si0);
sj1=0ULL;
si0=sj0 != sj1;
if(si0){
goto L23;
}
si0=l9;
si1=1U;
si0+=si1;
l9=si0;
si0=l1;
si1=8U;
si0+=si1;
l1=si0;
si0=l7;
si1=-8U;
si0+=si1;
l7=si0;
if(si0){
goto L24;
}
}
si0=l18;
l9=si0;
L23:;
si0=l9;
si1=l3;
si0=si0 == si1;
if(si0){
goto L11;
}
si0=l9;
si1=l3;
si0=si0 >= si1;
if(si0){
goto L15;
}
si0=l4;
si1=l9;
si2=3U;
si1<<=(si2&31);
l7=si1;
si0+=si1;
l1=si0;
sj1=0ULL;
si2=l1;
sj2=i64_load(&i->m0,(U64)si2);
sj1-=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l9;
si1=1U;
si0+=si1;
l1=si0;
si1=l3;
si0=si0 == si1;
if(si0){
goto L11;
}
si0=l3;
si1=3U;
si0<<=(si1&31);
si1=l7;
si0-=si1;
si1=-8U;
si0+=si1;
l9=si0;
si0=l4;
si1=l1;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l1=si0;
L25:;
{
si0=l1;
si1=l1;
sj1=i64_load(&i->m0,(U64)si1);
sj2=-1ULL;
sj1^=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si1=8U;
si0+=si1;
l1=si0;
si0=l9;
si1=-8U;
si0+=si1;
l9=si0;
if(si0){
goto L25;
}
goto L11;
}
L17:;
si0=l2;
si1=3U;
si0<<=(si1&31);
l12=si0;
si0=l11;
si1=3U;
si0<<=(si1&31);
l8=si0;
si0=0U;
l1=si0;
si0=0U;
l7=si0;
L26:;
{
si0=l1;
si1=l11;
si0=si0 >= si1;
if(si0){
goto L14;
}
si0=l1;
si1=l14;
si0=si0 >= si1;
if(si0){
goto L27;
}
si0=l5;
si0=i32_load(&i->m0,(U64)si0);
si1=l5;
si1=i32_load(&i->m0,(U64)si1+4U);
si2=l6;
si2=i32_load(&i->m0,(U64)si2);
si3=l6;
si3=i32_load(&i->m0,(U64)si3+4U);
si4=l0;
si4=i32_load(&i->m0,(U64)si4);
si5=l0;
si6=4U;
si5+=si6;
si5=i32_load(&i->m0,(U64)si5);
si6=l0;
si7=l8;
si6+=si7;
l9=si6;
si6=i32_load(&i->m0,(U64)si6);
si7=l9;
si8=4U;
si7+=si8;
si7=i32_load(&i->m0,(U64)si7);
si8=l7;
si9=l4;
f990(i,si0,si1,si2,si3,si4,si5,si6,si7,si8,si9);
si0=l0;
sj0=i64_load(&i->m0,(U64)si0);
l17=sj0;
si0=l0;
si1=l5;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
sj1=l17;
i64_store(&i->m0,(U64)si0,sj1);
si0=l9;
sj0=i64_load(&i->m0,(U64)si0);
l17=sj0;
si0=l9;
si1=l6;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l6;
sj1=l17;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=l12;
si0+=si1;
l0=si0;
si0=l1;
si1=l2;
si0+=si1;
l1=si0;
si0=l7;
si1=1U;
si0+=si1;
l9=si0;
l7=si0;
si0=l3;
si1=l9;
si0=si0 == si1;
if(si0){
goto L12;
}
goto L26;
L27:;
}
si0=l1;
si1=l14;
si2=1194504U;
f594(i,si0,si1,si2);
UNREACHABLE;
L16:;
si0=1189416U;
si1=35U;
si2=1194440U;
f604(i,si0,si1,si2);
UNREACHABLE;
L15:;
si0=l9;
si1=l3;
si2=1238956U;
f594(i,si0,si1,si2);
UNREACHABLE;
L14:;
si0=l1;
si1=l11;
si2=1194488U;
f594(i,si0,si1,si2);
UNREACHABLE;
L13:;
si0=l15;
si0=!(si0);
if(si0){
goto L10;
}
goto L9;
L12:;
goto L0;
L11:;
si0=l15;
si0=!(si0);
if(si0){
goto L10;
}
si0=l3;
si0=!(si0);
if(si0){
goto L9;
}
si0=l4;
si1=l3;
si2=-1U;
si1+=si2;
l1=si1;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l9=si0;
sj0=i64_load(&i->m0,(U64)si0);
l19=sj0;
si0=l4;
si1=l3;
si2=l15;
sj2=(U64)(si2);
l20=sj2;
sj0=f1026(i,si0,si1,sj2);
l17=sj0;
si0=l1;
si0=!(si0);
if(si0){
goto L7;
}
si0=l3;
si1=3U;
si0<<=(si1&31);
si1=l4;
si0+=si1;
si1=-16U;
si0+=si1;
l1=si0;
si1=l1;
sj1=i64_load(&i->m0,(U64)si1);
sj2=l17;
sj1-=sj2;
l21=sj1;
i64_store(&i->m0,(U64)si0,sj1);
si0=l9;
sj1=l19;
sj2=l20;
sj1=(U64)((I64)sj1>>(sj2&63));
sj2=l17;
sj3=0ULL;
si2=sj2 != sj3;
sj2=(U64)(si2);
sj1-=sj2;
sj2=l21;
sj3=0ULL;
sj4=l17;
sj3-=sj4;
si2=sj2 < sj3;
sj2=(U64)(si2);
sj1+=sj2;
i64_store(&i->m0,(U64)si0,sj1);
L10:;
si0=l10;
si1=l8;
si0+=si1;
si1=l13;
si0*=si1;
l4=si0;
si1=63U;
si0&=si1;
l8=si0;
si0=l0;
si1=l11;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l1=si0;
si1=4U;
si0+=si1;
l10=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
l7=si0;
si0=l12;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=l4;
si1=l2;
si0=si0 < si1;
l15=si0;
si0=!(si0);
if(si0){
goto L8;
}
goto L4;
L9:;
si0=1189451U;
si1=43U;
si2=1189972U;
f604(i,si0,si1,si2);
UNREACHABLE;
L8:;
si0=l7;
si0=!(si0);
if(si0){
goto L5;
}
si0=l7;
si1=3U;
si0<<=(si1&31);
l11=si0;
si0=l7;
si1=-1U;
si0+=si1;
si1=536870911U;
si0&=si1;
si1=1U;
si0+=si1;
l13=si0;
si0=0U;
l9=si0;
si0=l3;
l1=si0;
L29:;
{
si0=l1;
sj0=i64_load(&i->m0,(U64)si0);
sj1=0ULL;
si0=sj0 != sj1;
if(si0){
goto L28;
}
si0=l9;
si1=1U;
si0+=si1;
l9=si0;
si0=l1;
si1=8U;
si0+=si1;
l1=si0;
si0=l11;
si1=-8U;
si0+=si1;
l11=si0;
if(si0){
goto L29;
}
}
si0=l13;
l9=si0;
L28:;
si0=l9;
si1=l7;
si0=si0 == si1;
if(si0){
goto L4;
}
si0=l9;
si1=l7;
si0=si0 >= si1;
if(si0){
goto L6;
}
si0=l3;
si1=l9;
si2=3U;
si1<<=(si2&31);
l11=si1;
si0+=si1;
l1=si0;
sj1=0ULL;
si2=l1;
sj2=i64_load(&i->m0,(U64)si2);
sj1-=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l9;
si1=1U;
si0+=si1;
l1=si0;
si1=l7;
si0=si0 == si1;
if(si0){
goto L4;
}
si0=l7;
si1=3U;
si0<<=(si1&31);
si1=l11;
si0-=si1;
si1=-8U;
si0+=si1;
l9=si0;
si0=l3;
si1=l1;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l1=si0;
L30:;
{
si0=l1;
si1=l1;
sj1=i64_load(&i->m0,(U64)si1);
sj2=-1ULL;
sj1^=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si1=8U;
si0+=si1;
l1=si0;
si0=l9;
si1=-8U;
si0+=si1;
l9=si0;
if(si0){
goto L30;
}
goto L4;
}
L7:;
si0=1189451U;
si1=43U;
si2=1189988U;
f604(i,si0,si1,si2);
UNREACHABLE;
L6:;
si0=l9;
si1=l7;
si2=1238956U;
f594(i,si0,si1,si2);
UNREACHABLE;
L5:;
si0=0U;
l7=si0;
si0=l8;
si0=!(si0);
if(si0){
goto L3;
}
goto L2;
L4:;
si0=l8;
si0=!(si0);
if(si0){
goto L3;
}
si0=l7;
si0=!(si0);
if(si0){
goto L2;
}
si0=l3;
si1=l7;
si2=-1U;
si1+=si2;
l1=si1;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l9=si0;
sj0=i64_load(&i->m0,(U64)si0);
l19=sj0;
si0=l3;
si1=l7;
si2=l8;
sj2=(U64)(si2);
l20=sj2;
sj0=f1026(i,si0,si1,sj2);
l17=sj0;
si0=l1;
si0=!(si0);
if(si0){
goto L1;
}
si0=l7;
si1=3U;
si0<<=(si1&31);
si1=l3;
si0+=si1;
si1=-16U;
si0+=si1;
l1=si0;
si1=l1;
sj1=i64_load(&i->m0,(U64)si1);
sj2=l17;
sj1-=sj2;
l21=sj1;
i64_store(&i->m0,(U64)si0,sj1);
si0=l9;
sj1=l19;
sj2=l20;
sj1=(U64)((I64)sj1>>(sj2&63));
sj2=l17;
sj3=0ULL;
si2=sj2 != sj3;
sj2=(U64)(si2);
sj1-=sj2;
sj2=l21;
sj3=0ULL;
sj4=l17;
sj3-=sj4;
si2=sj2 < sj3;
sj2=(U64)(si2);
sj1+=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l10;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
si0=l12;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
L3:;
si0=l5;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si1=l5;
si1=i32_load(&i->m0,(U64)si1+4U);
l9=si1;
si2=l6;
si2=i32_load(&i->m0,(U64)si2);
l11=si2;
si3=l6;
si3=i32_load(&i->m0,(U64)si3+4U);
l8=si3;
si4=l0;
si4=i32_load(&i->m0,(U64)si4);
l13=si4;
si5=l0;
si5=i32_load(&i->m0,(U64)si5+4U);
l18=si5;
si6=l3;
si7=l7;
si8=l14;
si9=0U;
si10=l2;
si11=l16;
si9=si11?si9:si10;
si8-=si9;
si9=6U;
si8>>=(si9&31);
si9=l4;
si10=0U;
si11=l2;
si12=l15;
si10=si12?si10:si11;
si9-=si10;
si10=6U;
si9>>=(si10&31);
f983(i,si0,si1,si2,si3,si4,si5,si6,si7,si8,si9);
si0=l0;
si1=l1;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l9;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l5;
si1=l18;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l5;
si1=l13;
i32_store(&i->m0,(U64)si0,si1);
si0=l10;
si1=l8;
i32_store(&i->m0,(U64)si0,si1);
si0=l6;
si1=l7;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l12;
si0=i32_load(&i->m0,(U64)si0);
l0=si0;
si0=l12;
si1=l11;
i32_store(&i->m0,(U64)si0,si1);
si0=l6;
si1=l0;
i32_store(&i->m0,(U64)si0,si1);
goto L0;
L2:;
si0=1189451U;
si1=43U;
si2=1189972U;
f604(i,si0,si1,si2);
UNREACHABLE;
L1:;
si0=1189451U;
si1=43U;
si2=1189988U;
f604(i,si0,si1,si2);
UNREACHABLE;
L0:;
}

void f1003(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4,U32 l5,U32 l6,U32 l7,U32 l8,U32 l9,U32 l10,U32 l11) {
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
U32 l30=0;
U32 l31=0;
U64 l32=0;
U64 l33=0;
U32 l34=0;
U64 l35=0;
U64 l36=0;
U32 si0,si1,si2,si3,si4,si5,si6,si7,si8,si9,si10,si11;
U64 sj0,sj1,sj2,sj3,sj4;
si0=i->g0;
si1=32U;
si0-=si1;
l12=si0;
i->g0=si0;
si0=l3;
si1=1U;
si0<<=(si1&31);
si1=l11;
si0=si0 == si1;
if(si0){
goto L10;
}
si0=l1;
si1=l3;
si2=l2;
si1*=si2;
l13=si1;
si0=si0 < si1;
if(si0){
goto L9;
}
si0=l10;
si1=1U;
si0<<=(si1&31);
l14=si0;
si0=l4;
si1=1U;
si0<<=(si1&31);
l15=si0;
si0=l3;
si1=1U;
si0>>=(si1&31);
l16=si0;
si0=l1;
si1=l13;
si0-=si1;
l17=si0;
si0=l0;
si1=l13;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l18=si0;
si0=l11;
si1=l3;
si0=si0 <= si1;
if(si0){
goto L7;
}
si0=l0;
si1=l13;
si2=l2;
si3=l16;
si4=l15;
si5=l5;
si6=l6;
si7=l7;
si8=l8;
si9=l9;
si10=l14;
f1002(i,si0,si1,si2,si3,si4,si5,si6,si7,si8,si9,si10);
si0=l11;
si1=l3;
si0-=si1;
l19=si0;
si1=l3;
si0=si0 >= si1;
if(si0){
goto L5;
}
si0=l19;
si1=l2;
si0*=si1;
l20=si0;
si0=l13;
si1=l17;
si0=si0 <= si1;
if(si0){
goto L6;
}
si0=l19;
l21=si0;
L11:;
{
si0=l20;
si1=l13;
si0=si0 >= si1;
if(si0){
goto L4;
}
si0=l20;
si1=l17;
si0=si0 < si1;
if(si0){
goto L12;
}
si0=l20;
si1=l17;
si2=1194584U;
f594(i,si0,si1,si2);
UNREACHABLE;
L12:;
si0=l18;
si1=l20;
si2=3U;
si1<<=(si2&31);
l1=si1;
si0+=si1;
l11=si0;
si0=i32_load(&i->m0,(U64)si0);
l22=si0;
si0=l0;
si1=l1;
si0+=si1;
l23=si0;
si0=i32_load(&i->m0,(U64)si0);
l24=si0;
si0=l11;
si0=i32_load(&i->m0,(U64)si0+4U);
l25=si0;
si0=l12;
si1=l23;
si1=i32_load(&i->m0,(U64)si1+4U);
l1=si1;
i32_store(&i->m0,(U64)si0,si1);
si0=l12;
si1=l25;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l1;
si1=l25;
si0=si0 != si1;
if(si0){
goto L8;
}
si0=l11;
si1=4U;
si0+=si1;
l26=si0;
si0=l23;
si1=4U;
si0+=si1;
l27=si0;
si0=l1;
if(si0){
goto L14;
}
si0=0U;
l1=si0;
goto L13;
L14:;
si0=l1;
si1=1U;
si0&=si1;
l28=si0;
si0=0U;
l29=si0;
si0=0U;
l30=si0;
si0=l1;
si1=1U;
si0=si0 == si1;
if(si0){
goto L15;
}
si0=l1;
si1=-2U;
si0&=si1;
l31=si0;
si0=0U;
l29=si0;
si0=l22;
l1=si0;
si0=l24;
l25=si0;
si0=0U;
l30=si0;
L16:;
{
si0=l1;
si1=l25;
sj1=i64_load(&i->m0,(U64)si1);
l32=sj1;
si2=l29;
sj2=(U64)(si2);
sj3=1ULL;
sj2&=sj3;
sj1-=sj2;
si2=l1;
sj2=i64_load(&i->m0,(U64)si2);
l33=sj2;
sj1-=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si1=8U;
si0+=si1;
l34=si0;
si1=l25;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
l35=sj1;
sj2=l32;
sj3=l33;
si2=sj2 <= sj3;
sj3=l32;
sj4=l33;
si3=sj3 < sj4;
si4=l29;
si5=1U;
si4&=si5;
si2=si4?si2:si3;
l29=si2;
sj2=(U64)(si2);
sj1-=sj2;
si2=l34;
sj2=i64_load(&i->m0,(U64)si2);
l32=sj2;
sj1-=sj2;
i64_store(&i->m0,(U64)si0,sj1);
sj0=l35;
sj1=l32;
si0=sj0 <= sj1;
sj1=l35;
sj2=l32;
si1=sj1 < sj2;
si2=l29;
si0=si2?si0:si1;
l29=si0;
si0=l1;
si1=16U;
si0+=si1;
l1=si0;
si0=l25;
si1=16U;
si0+=si1;
l25=si0;
si0=l31;
si1=l30;
si2=2U;
si1+=si2;
l30=si1;
si0=si0 != si1;
if(si0){
goto L16;
}
}
L15:;
si0=l28;
si0=!(si0);
if(si0){
goto L17;
}
si0=l22;
si1=l30;
si2=3U;
si1<<=(si2&31);
l1=si1;
si0+=si1;
l25=si0;
si1=l24;
si2=l1;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
si2=l29;
sj2=(U64)(si2);
sj1-=sj2;
si2=l25;
sj2=i64_load(&i->m0,(U64)si2);
sj1-=sj2;
i64_store(&i->m0,(U64)si0,sj1);
L17:;
si0=l26;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si0=l11;
si0=i32_load(&i->m0,(U64)si0);
l22=si0;
L13:;
si0=l5;
si0=i32_load(&i->m0,(U64)si0);
si1=l5;
si1=i32_load(&i->m0,(U64)si1+4U);
si2=l22;
si3=l1;
si4=l21;
si5=l4;
f980(i,si0,si1,si2,si3,si4,si5);
si0=l11;
si0=i32_load(&i->m0,(U64)si0);
l25=si0;
si0=l23;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si0=l26;
si0=i32_load(&i->m0,(U64)si0);
l30=si0;
si0=l12;
si1=l27;
si1=i32_load(&i->m0,(U64)si1);
l29=si1;
i32_store(&i->m0,(U64)si0,si1);
si0=l12;
si1=l30;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l29;
si1=l30;
si0=si0 != si1;
if(si0){
goto L20;
}
si0=l29;
if(si0){
goto L19;
}
si0=0U;
l1=si0;
goto L18;
L20:;
si0=l12;
si1=0U;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=0U;
si1=l12;
si2=l12;
si3=4U;
si2+=si3;
si3=l12;
si4=8U;
si3+=si4;
si4=1203184U;
f1250(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L19:;
si0=0U;
l30=si0;
L21:;
{
si0=l1;
sj0=i64_load(&i->m0,(U64)si0);
l33=sj0;
si1=l25;
sj1=i64_load(&i->m0,(U64)si1);
sj0+=sj1;
l32=sj0;
sj1=l33;
si0=sj0 < sj1;
l34=si0;
si0=l30;
si1=255U;
si0&=si1;
if(si0){
goto L23;
}
si0=l34;
l30=si0;
goto L22;
L23:;
si0=l34;
sj1=l32;
sj2=1ULL;
sj1+=sj2;
l32=sj1;
si1=!(sj1);
si0|=si1;
l30=si0;
L22:;
si0=l1;
sj1=l32;
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si1=8U;
si0+=si1;
l1=si0;
si0=l25;
si1=8U;
si0+=si1;
l25=si0;
si0=l29;
si1=-1U;
si0+=si1;
l29=si0;
if(si0){
goto L21;
}
}
si0=l26;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si0=l11;
si0=i32_load(&i->m0,(U64)si0);
l25=si0;
L18:;
si0=l11;
si1=l5;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l26;
si1=l5;
si1=i32_load(&i->m0,(U64)si1+4U);
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=l1;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l5;
si1=l25;
i32_store(&i->m0,(U64)si0,si1);
si0=l20;
si1=l2;
si0+=si1;
l20=si0;
si0=l21;
si1=1U;
si0+=si1;
l21=si0;
si1=l3;
si0=si0 != si1;
if(si0){
goto L11;
}
goto L5;
}
L10:;
si0=l0;
si1=l1;
si2=l2;
si3=l3;
si4=l4;
si5=l5;
si6=l6;
si7=l7;
si8=l8;
si9=l9;
si10=l10;
f1002(i,si0,si1,si2,si3,si4,si5,si6,si7,si8,si9,si10);
goto L3;
L9:;
si0=1189416U;
si1=35U;
si2=1194520U;
f604(i,si0,si1,si2);
UNREACHABLE;
L8:;
si0=l12;
si1=0U;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=0U;
si1=l12;
si2=l12;
si3=4U;
si2+=si3;
si3=l12;
si4=8U;
si3+=si4;
si4=1203508U;
f1250(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L7:;
si0=l11;
si1=l3;
si0=si0 >= si1;
if(si0){
goto L31;
}
si0=l11;
si1=l2;
si0*=si1;
l31=si0;
si0=l13;
si1=l17;
si0=si0 <= si1;
if(si0){
goto L32;
}
si0=l11;
l26=si0;
L33:;
{
si0=l31;
si1=l13;
si0=si0 >= si1;
if(si0){
goto L30;
}
si0=l31;
si1=l17;
si0=si0 < si1;
if(si0){
goto L34;
}
si0=l31;
si1=l17;
si2=1194648U;
f594(i,si0,si1,si2);
UNREACHABLE;
L34:;
si0=l18;
si1=l31;
si2=3U;
si1<<=(si2&31);
l1=si1;
si0+=si1;
l29=si0;
si0=i32_load(&i->m0,(U64)si0);
l25=si0;
si0=l0;
si1=l1;
si0+=si1;
l4=si0;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si0=l29;
si0=i32_load(&i->m0,(U64)si0+4U);
l30=si0;
si0=l12;
si1=l4;
si1=i32_load(&i->m0,(U64)si1+4U);
l29=si1;
i32_store(&i->m0,(U64)si0,si1);
si0=l12;
si1=l30;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l29;
si1=l30;
si0=si0 != si1;
if(si0){
goto L35;
}
si0=l29;
si0=!(si0);
if(si0){
goto L26;
}
si0=l26;
si1=1U;
si0+=si1;
l26=si0;
si0=l4;
si1=4U;
si0+=si1;
l20=si0;
si0=0U;
l30=si0;
L36:;
{
si0=l1;
sj0=i64_load(&i->m0,(U64)si0);
l33=sj0;
si1=l25;
sj1=i64_load(&i->m0,(U64)si1);
sj0+=sj1;
l32=sj0;
sj1=l33;
si0=sj0 < sj1;
l34=si0;
si0=l30;
si1=255U;
si0&=si1;
if(si0){
goto L38;
}
si0=l34;
l30=si0;
goto L37;
L38:;
si0=l34;
sj1=l32;
sj2=1ULL;
sj1+=sj2;
l32=sj1;
si1=!(sj1);
si0|=si1;
l30=si0;
L37:;
si0=l1;
sj1=l32;
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si1=8U;
si0+=si1;
l1=si0;
si0=l25;
si1=8U;
si0+=si1;
l25=si0;
si0=l29;
si1=-1U;
si0+=si1;
l29=si0;
if(si0){
goto L36;
}
}
si0=l20;
si0=i32_load(&i->m0,(U64)si0);
l20=si0;
si0=!(si0);
if(si0){
goto L26;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
si1=l20;
si2=-1U;
si1+=si2;
l1=si1;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l34=si0;
si0=l4;
sj0=i64_load(&i->m0,(U64)si0);
l35=sj0;
sj1=1ULL;
sj0>>=(sj1&63);
l32=sj0;
si0=l20;
si1=1U;
si0=si0 == si1;
if(si0){
goto L25;
}
si0=l34;
sj0=i64_load(&i->m0,(U64)si0);
l36=sj0;
si0=1U;
l25=si0;
si0=l1;
si1=1U;
si0&=si1;
l23=si0;
si0=l20;
si1=2U;
si0=si0 == si1;
if(si0){
goto L39;
}
si0=l1;
si1=-2U;
si0&=si1;
l30=si0;
si0=0U;
l25=si0;
si0=l4;
l1=si0;
L40:;
{
si0=l1;
si1=l1;
si2=8U;
si1+=si2;
l29=si1;
sj1=i64_load(&i->m0,(U64)si1);
l33=sj1;
sj2=63ULL;
sj1<<=(sj2&63);
sj2=l32;
sj1|=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l29;
si1=l1;
si2=16U;
si1+=si2;
l1=si1;
sj1=i64_load(&i->m0,(U64)si1);
l32=sj1;
sj2=63ULL;
sj1<<=(sj2&63);
sj2=l33;
sj3=1ULL;
sj2>>=(sj3&63);
sj1|=sj2;
i64_store(&i->m0,(U64)si0,sj1);
sj0=l32;
sj1=1ULL;
sj0>>=(sj1&63);
l32=sj0;
si0=l30;
si1=l25;
si2=2U;
si1+=si2;
l25=si1;
si0=si0 != si1;
if(si0){
goto L40;
}
}
si0=l25;
si1=1U;
si0+=si1;
l25=si0;
L39:;
si0=l23;
si0=!(si0);
if(si0){
goto L41;
}
si0=l4;
si1=l25;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l1=si0;
si1=-8U;
si0+=si1;
si1=l1;
sj1=i64_load(&i->m0,(U64)si1);
sj2=63ULL;
sj1<<=(sj2&63);
sj2=l32;
sj1|=sj2;
i64_store(&i->m0,(U64)si0,sj1);
L41:;
si0=l20;
si1=3U;
si0<<=(si1&31);
si1=l4;
si0+=si1;
si1=-16U;
si0+=si1;
l1=si0;
sj1=l35;
sj2=63ULL;
sj1<<=(sj2&63);
l32=sj1;
si2=l1;
sj2=i64_load(&i->m0,(U64)si2);
sj1+=sj2;
l33=sj1;
i64_store(&i->m0,(U64)si0,sj1);
si0=l34;
sj1=l36;
sj2=1ULL;
sj1=(U64)((I64)sj1>>(sj2&63));
sj2=l32;
sj3=0ULL;
si2=sj2 != sj3;
sj2=(U64)(si2);
sj1-=sj2;
sj2=l33;
sj3=l32;
si2=sj2 < sj3;
sj2=(U64)(si2);
sj1+=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l31;
si1=l2;
si0+=si1;
l31=si0;
si0=l26;
si1=l3;
si0=si0 != si1;
if(si0){
goto L33;
}
goto L31;
L35:;
}
si0=l12;
si1=0U;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=0U;
si1=l12;
si2=l12;
si3=4U;
si2+=si3;
si3=l12;
si4=8U;
si3+=si4;
si4=1203184U;
f1250(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L32:;
si0=l11;
l26=si0;
L42:;
{
si0=l31;
si1=l13;
si0=si0 >= si1;
if(si0){
goto L30;
}
si0=l18;
si1=l31;
si2=3U;
si1<<=(si2&31);
l1=si1;
si0+=si1;
l29=si0;
si0=i32_load(&i->m0,(U64)si0);
l25=si0;
si0=l0;
si1=l1;
si0+=si1;
l4=si0;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si0=l29;
si0=i32_load(&i->m0,(U64)si0+4U);
l30=si0;
si0=l12;
si1=l4;
si1=i32_load(&i->m0,(U64)si1+4U);
l29=si1;
i32_store(&i->m0,(U64)si0,si1);
si0=l12;
si1=l30;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l29;
si1=l30;
si0=si0 != si1;
if(si0){
goto L29;
}
si0=l29;
si0=!(si0);
if(si0){
goto L26;
}
si0=l26;
si1=1U;
si0+=si1;
l26=si0;
si0=l4;
si1=4U;
si0+=si1;
l20=si0;
si0=0U;
l30=si0;
L43:;
{
si0=l1;
sj0=i64_load(&i->m0,(U64)si0);
l33=sj0;
si1=l25;
sj1=i64_load(&i->m0,(U64)si1);
sj0+=sj1;
l32=sj0;
sj1=l33;
si0=sj0 < sj1;
l34=si0;
si0=l30;
si1=255U;
si0&=si1;
if(si0){
goto L45;
}
si0=l34;
l30=si0;
goto L44;
L45:;
si0=l34;
sj1=l32;
sj2=1ULL;
sj1+=sj2;
l32=sj1;
si1=!(sj1);
si0|=si1;
l30=si0;
L44:;
si0=l1;
sj1=l32;
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si1=8U;
si0+=si1;
l1=si0;
si0=l25;
si1=8U;
si0+=si1;
l25=si0;
si0=l29;
si1=-1U;
si0+=si1;
l29=si0;
if(si0){
goto L43;
}
}
si0=l20;
si0=i32_load(&i->m0,(U64)si0);
l20=si0;
si0=!(si0);
if(si0){
goto L26;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
si1=l20;
si2=-1U;
si1+=si2;
l1=si1;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l34=si0;
si0=l4;
sj0=i64_load(&i->m0,(U64)si0);
l35=sj0;
sj1=1ULL;
sj0>>=(sj1&63);
l32=sj0;
si0=l20;
si1=1U;
si0=si0 == si1;
if(si0){
goto L25;
}
si0=l34;
sj0=i64_load(&i->m0,(U64)si0);
l36=sj0;
si0=1U;
l25=si0;
si0=l1;
si1=1U;
si0&=si1;
l23=si0;
si0=l20;
si1=2U;
si0=si0 == si1;
if(si0){
goto L46;
}
si0=l1;
si1=-2U;
si0&=si1;
l30=si0;
si0=0U;
l25=si0;
si0=l4;
l1=si0;
L47:;
{
si0=l1;
si1=l1;
si2=8U;
si1+=si2;
l29=si1;
sj1=i64_load(&i->m0,(U64)si1);
l33=sj1;
sj2=63ULL;
sj1<<=(sj2&63);
sj2=l32;
sj1|=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l29;
si1=l1;
si2=16U;
si1+=si2;
l1=si1;
sj1=i64_load(&i->m0,(U64)si1);
l32=sj1;
sj2=63ULL;
sj1<<=(sj2&63);
sj2=l33;
sj3=1ULL;
sj2>>=(sj3&63);
sj1|=sj2;
i64_store(&i->m0,(U64)si0,sj1);
sj0=l32;
sj1=1ULL;
sj0>>=(sj1&63);
l32=sj0;
si0=l30;
si1=l25;
si2=2U;
si1+=si2;
l25=si1;
si0=si0 != si1;
if(si0){
goto L47;
}
}
si0=l25;
si1=1U;
si0+=si1;
l25=si0;
L46:;
si0=l23;
si0=!(si0);
if(si0){
goto L48;
}
si0=l4;
si1=l25;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l1=si0;
si1=-8U;
si0+=si1;
si1=l1;
sj1=i64_load(&i->m0,(U64)si1);
sj2=63ULL;
sj1<<=(sj2&63);
sj2=l32;
sj1|=sj2;
i64_store(&i->m0,(U64)si0,sj1);
L48:;
si0=l20;
si1=3U;
si0<<=(si1&31);
si1=l4;
si0+=si1;
si1=-16U;
si0+=si1;
l1=si0;
sj1=l35;
sj2=63ULL;
sj1<<=(sj2&63);
l32=sj1;
si2=l1;
sj2=i64_load(&i->m0,(U64)si2);
sj1+=sj2;
l33=sj1;
i64_store(&i->m0,(U64)si0,sj1);
si0=l34;
sj1=l36;
sj2=1ULL;
sj1=(U64)((I64)sj1>>(sj2&63));
sj2=l32;
sj3=0ULL;
si2=sj2 != sj3;
sj2=(U64)(si2);
sj1-=sj2;
sj2=l33;
sj3=l32;
si2=sj2 < sj3;
sj2=(U64)(si2);
sj1+=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l31;
si1=l2;
si0+=si1;
l31=si0;
si0=l26;
si1=l3;
si0=si0 != si1;
if(si0){
goto L42;
}
}
L31:;
si0=l0;
si1=l13;
si2=l2;
si3=l16;
si4=l15;
si5=l5;
si6=l6;
si7=l7;
si8=l8;
si9=l9;
si10=l14;
si11=l11;
f1003(i,si0,si1,si2,si3,si4,si5,si6,si7,si8,si9,si10,si11);
si0=l11;
si0=!(si0);
if(si0){
goto L3;
}
si0=l13;
si1=l17;
si0=si0 > si1;
if(si0){
goto L49;
}
si0=0U;
l31=si0;
si0=0U;
l20=si0;
L50:;
{
si0=l31;
si1=l13;
si0=si0 >= si1;
if(si0){
goto L24;
}
si0=l0;
si1=l31;
si2=3U;
si1<<=(si2&31);
l5=si1;
si0+=si1;
l34=si0;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si0=l34;
si0=i32_load(&i->m0,(U64)si0+4U);
l25=si0;
if(si0){
goto L52;
}
si0=0U;
l25=si0;
goto L51;
L52:;
si0=l25;
si1=-1U;
si0+=si1;
si1=536870911U;
si0&=si1;
l29=si0;
si1=1U;
si0+=si1;
l30=si0;
si1=3U;
si0&=si1;
l25=si0;
sj0=0ULL;
l32=sj0;
si0=l29;
si1=3U;
si0=si0 < si1;
if(si0){
goto L53;
}
si0=l30;
si1=1073741820U;
si0&=si1;
l29=si0;
sj0=0ULL;
l32=sj0;
L54:;
{
si0=l1;
si1=l1;
sj1=i64_load(&i->m0,(U64)si1);
l33=sj1;
sj2=1ULL;
sj1<<=(sj2&63);
sj2=l32;
sj1|=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si1=8U;
si0+=si1;
l30=si0;
si1=l30;
sj1=i64_load(&i->m0,(U64)si1);
l32=sj1;
sj2=1ULL;
sj1<<=(sj2&63);
sj2=l33;
sj3=63ULL;
sj2>>=(sj3&63);
sj1|=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si1=16U;
si0+=si1;
l30=si0;
si1=l30;
sj1=i64_load(&i->m0,(U64)si1);
l33=sj1;
sj2=1ULL;
sj1<<=(sj2&63);
sj2=l32;
sj3=63ULL;
sj2>>=(sj3&63);
sj1|=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si1=24U;
si0+=si1;
l30=si0;
si1=l30;
sj1=i64_load(&i->m0,(U64)si1);
l32=sj1;
sj2=1ULL;
sj1<<=(sj2&63);
sj2=l33;
sj3=63ULL;
sj2>>=(sj3&63);
sj1|=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si1=32U;
si0+=si1;
l1=si0;
sj0=l32;
sj1=63ULL;
sj0>>=(sj1&63);
l32=sj0;
si0=l29;
si1=-4U;
si0+=si1;
l29=si0;
if(si0){
goto L54;
}
}
L53:;
si0=l34;
si1=4U;
si0+=si1;
l29=si0;
si0=l25;
si0=!(si0);
if(si0){
goto L55;
}
L56:;
{
si0=l1;
si1=l1;
sj1=i64_load(&i->m0,(U64)si1);
l33=sj1;
sj2=1ULL;
sj1<<=(sj2&63);
sj2=l32;
sj1|=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si1=8U;
si0+=si1;
l1=si0;
sj0=l33;
sj1=63ULL;
sj0>>=(sj1&63);
l32=sj0;
si0=l25;
si1=-1U;
si0+=si1;
l25=si0;
if(si0){
goto L56;
}
}
L55:;
si0=l34;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si0=l29;
si0=i32_load(&i->m0,(U64)si0);
l25=si0;
L51:;
si0=l18;
si1=l5;
si0+=si1;
l29=si0;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=l29;
si0=i32_load(&i->m0,(U64)si0+4U);
l29=si0;
si0=l12;
si1=l25;
i32_store(&i->m0,(U64)si0,si1);
si0=l12;
si1=l29;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l25;
si1=l29;
si0=si0 != si1;
if(si0){
goto L28;
}
si0=l25;
si0=!(si0);
if(si0){
goto L57;
}
si0=l25;
si1=1U;
si0&=si1;
l4=si0;
si0=0U;
l30=si0;
si0=0U;
l34=si0;
si0=l25;
si1=1U;
si0=si0 == si1;
if(si0){
goto L58;
}
si0=l25;
si1=-2U;
si0&=si1;
l6=si0;
si0=0U;
l30=si0;
si0=l3;
l29=si0;
si0=l1;
l25=si0;
si0=0U;
l34=si0;
L59:;
{
si0=l25;
si1=l25;
sj1=i64_load(&i->m0,(U64)si1);
l32=sj1;
si2=l30;
sj2=(U64)(si2);
sj3=1ULL;
sj2&=sj3;
si3=l29;
sj3=i64_load(&i->m0,(U64)si3);
l33=sj3;
sj2+=sj3;
sj1-=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l25;
si1=8U;
si0+=si1;
l5=si0;
si1=l5;
sj1=i64_load(&i->m0,(U64)si1);
l35=sj1;
sj2=l32;
sj3=l33;
si2=sj2 <= sj3;
sj3=l32;
sj4=l33;
si3=sj3 < sj4;
si4=l30;
si5=1U;
si4&=si5;
si2=si4?si2:si3;
l30=si2;
sj2=(U64)(si2);
si3=l29;
si4=8U;
si3+=si4;
sj3=i64_load(&i->m0,(U64)si3);
l32=sj3;
sj2+=sj3;
sj1-=sj2;
i64_store(&i->m0,(U64)si0,sj1);
sj0=l35;
sj1=l32;
si0=sj0 <= sj1;
sj1=l35;
sj2=l32;
si1=sj1 < sj2;
si2=l30;
si0=si2?si0:si1;
l30=si0;
si0=l29;
si1=16U;
si0+=si1;
l29=si0;
si0=l25;
si1=16U;
si0+=si1;
l25=si0;
si0=l6;
si1=l34;
si2=2U;
si1+=si2;
l34=si1;
si0=si0 != si1;
if(si0){
goto L59;
}
}
L58:;
si0=l4;
si0=!(si0);
if(si0){
goto L57;
}
si0=l1;
si1=l34;
si2=3U;
si1<<=(si2&31);
l25=si1;
si0+=si1;
l1=si0;
si1=l1;
sj1=i64_load(&i->m0,(U64)si1);
si2=l30;
sj2=(U64)(si2);
si3=l3;
si4=l25;
si3+=si4;
sj3=i64_load(&i->m0,(U64)si3);
sj2+=sj3;
sj1-=sj2;
i64_store(&i->m0,(U64)si0,sj1);
L57:;
si0=l31;
si1=l2;
si0+=si1;
l31=si0;
si0=l20;
si1=1U;
si0+=si1;
l20=si0;
si1=l11;
si0=si0 != si1;
if(si0){
goto L50;
}
goto L3;
}
L49:;
si0=0U;
l31=si0;
si0=0U;
l6=si0;
L60:;
{
si0=l31;
si1=l13;
si0=si0 >= si1;
if(si0){
goto L24;
}
si0=l0;
si1=l31;
si2=3U;
si1<<=(si2&31);
l5=si1;
si0+=si1;
l34=si0;
si0=i32_load(&i->m0,(U64)si0+4U);
l25=si0;
si0=!(si0);
if(si0){
goto L61;
}
si0=l34;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si0=l25;
si1=-1U;
si0+=si1;
si1=536870911U;
si0&=si1;
l29=si0;
si1=1U;
si0+=si1;
l30=si0;
si1=3U;
si0&=si1;
l25=si0;
sj0=0ULL;
l32=sj0;
si0=l29;
si1=3U;
si0=si0 < si1;
if(si0){
goto L62;
}
si0=l30;
si1=1073741820U;
si0&=si1;
l29=si0;
sj0=0ULL;
l32=sj0;
L63:;
{
si0=l1;
si1=l1;
sj1=i64_load(&i->m0,(U64)si1);
l33=sj1;
sj2=1ULL;
sj1<<=(sj2&63);
sj2=l32;
sj1|=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si1=8U;
si0+=si1;
l30=si0;
si1=l30;
sj1=i64_load(&i->m0,(U64)si1);
l32=sj1;
sj2=1ULL;
sj1<<=(sj2&63);
sj2=l33;
sj3=63ULL;
sj2>>=(sj3&63);
sj1|=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si1=16U;
si0+=si1;
l30=si0;
si1=l30;
sj1=i64_load(&i->m0,(U64)si1);
l33=sj1;
sj2=1ULL;
sj1<<=(sj2&63);
sj2=l32;
sj3=63ULL;
sj2>>=(sj3&63);
sj1|=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si1=24U;
si0+=si1;
l30=si0;
si1=l30;
sj1=i64_load(&i->m0,(U64)si1);
l32=sj1;
sj2=1ULL;
sj1<<=(sj2&63);
sj2=l33;
sj3=63ULL;
sj2>>=(sj3&63);
sj1|=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si1=32U;
si0+=si1;
l1=si0;
sj0=l32;
sj1=63ULL;
sj0>>=(sj1&63);
l32=sj0;
si0=l29;
si1=-4U;
si0+=si1;
l29=si0;
if(si0){
goto L63;
}
}
L62:;
si0=l25;
si0=!(si0);
if(si0){
goto L61;
}
L64:;
{
si0=l1;
si1=l1;
sj1=i64_load(&i->m0,(U64)si1);
l33=sj1;
sj2=1ULL;
sj1<<=(sj2&63);
sj2=l32;
sj1|=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si1=8U;
si0+=si1;
l1=si0;
sj0=l33;
sj1=63ULL;
sj0>>=(sj1&63);
l32=sj0;
si0=l25;
si1=-1U;
si0+=si1;
l25=si0;
if(si0){
goto L64;
}
}
L61:;
si0=l31;
si1=l17;
si0=si0 < si1;
if(si0){
goto L65;
}
si0=l31;
si1=l17;
si2=1194616U;
f594(i,si0,si1,si2);
UNREACHABLE;
L65:;
si0=l18;
si1=l5;
si0+=si1;
l1=si0;
si0=i32_load(&i->m0,(U64)si0);
l20=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
l25=si0;
si0=l34;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=l12;
si1=l34;
si2=4U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
l1=si1;
i32_store(&i->m0,(U64)si0,si1);
si0=l12;
si1=l25;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l1;
si1=l25;
si0=si0 != si1;
if(si0){
goto L27;
}
si0=l1;
si0=!(si0);
if(si0){
goto L66;
}
si0=l1;
si1=1U;
si0&=si1;
l4=si0;
si0=0U;
l29=si0;
si0=0U;
l30=si0;
si0=l1;
si1=1U;
si0=si0 == si1;
if(si0){
goto L67;
}
si0=l1;
si1=-2U;
si0&=si1;
l5=si0;
si0=0U;
l29=si0;
si0=l20;
l25=si0;
si0=l3;
l1=si0;
si0=0U;
l30=si0;
L68:;
{
si0=l1;
si1=l1;
sj1=i64_load(&i->m0,(U64)si1);
l32=sj1;
si2=l29;
sj2=(U64)(si2);
sj3=1ULL;
sj2&=sj3;
si3=l25;
sj3=i64_load(&i->m0,(U64)si3);
l33=sj3;
sj2+=sj3;
sj1-=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si1=8U;
si0+=si1;
l34=si0;
si1=l34;
sj1=i64_load(&i->m0,(U64)si1);
l35=sj1;
sj2=l32;
sj3=l33;
si2=sj2 <= sj3;
sj3=l32;
sj4=l33;
si3=sj3 < sj4;
si4=l29;
si5=1U;
si4&=si5;
si2=si4?si2:si3;
l29=si2;
sj2=(U64)(si2);
si3=l25;
si4=8U;
si3+=si4;
sj3=i64_load(&i->m0,(U64)si3);
l32=sj3;
sj2+=sj3;
sj1-=sj2;
i64_store(&i->m0,(U64)si0,sj1);
sj0=l35;
sj1=l32;
si0=sj0 <= sj1;
sj1=l35;
sj2=l32;
si1=sj1 < sj2;
si2=l29;
si0=si2?si0:si1;
l29=si0;
si0=l25;
si1=16U;
si0+=si1;
l25=si0;
si0=l1;
si1=16U;
si0+=si1;
l1=si0;
si0=l5;
si1=l30;
si2=2U;
si1+=si2;
l30=si1;
si0=si0 != si1;
if(si0){
goto L68;
}
}
L67:;
si0=l4;
si0=!(si0);
if(si0){
goto L66;
}
si0=l3;
si1=l30;
si2=3U;
si1<<=(si2&31);
l1=si1;
si0+=si1;
l25=si0;
si1=l25;
sj1=i64_load(&i->m0,(U64)si1);
si2=l29;
sj2=(U64)(si2);
si3=l20;
si4=l1;
si3+=si4;
sj3=i64_load(&i->m0,(U64)si3);
sj2+=sj3;
sj1-=sj2;
i64_store(&i->m0,(U64)si0,sj1);
L66:;
si0=l31;
si1=l2;
si0+=si1;
l31=si0;
si0=l6;
si1=1U;
si0+=si1;
l6=si0;
si1=l11;
si0=si0 != si1;
if(si0){
goto L60;
}
goto L3;
}
L30:;
si0=l31;
si1=l13;
si2=1194632U;
f594(i,si0,si1,si2);
UNREACHABLE;
L29:;
si0=l12;
si1=0U;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=0U;
si1=l12;
si2=l12;
si3=4U;
si2+=si3;
si3=l12;
si4=8U;
si3+=si4;
si4=1203184U;
f1250(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L28:;
si0=l12;
si1=0U;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=0U;
si1=l12;
si2=l12;
si3=4U;
si2+=si3;
si3=l12;
si4=8U;
si3+=si4;
si4=1203476U;
f1250(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L27:;
si0=l12;
si1=0U;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=0U;
si1=l12;
si2=l12;
si3=4U;
si2+=si3;
si3=l12;
si4=8U;
si3+=si4;
si4=1203476U;
f1250(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L26:;
si0=1189451U;
si1=43U;
si2=1189972U;
f604(i,si0,si1,si2);
UNREACHABLE;
L25:;
si0=l34;
sj1=l32;
i64_store(&i->m0,(U64)si0,sj1);
si0=1189451U;
si1=43U;
si2=1189988U;
f604(i,si0,si1,si2);
UNREACHABLE;
L24:;
si0=l31;
si1=l13;
si2=1194600U;
f594(i,si0,si1,si2);
UNREACHABLE;
L6:;
si0=l19;
l21=si0;
L69:;
{
si0=l20;
si1=l13;
si0=si0 >= si1;
if(si0){
goto L4;
}
si0=l18;
si1=l20;
si2=3U;
si1<<=(si2&31);
l1=si1;
si0+=si1;
l11=si0;
si0=i32_load(&i->m0,(U64)si0);
l22=si0;
si0=l0;
si1=l1;
si0+=si1;
l23=si0;
si0=i32_load(&i->m0,(U64)si0);
l24=si0;
si0=l11;
si0=i32_load(&i->m0,(U64)si0+4U);
l25=si0;
si0=l12;
si1=l23;
si1=i32_load(&i->m0,(U64)si1+4U);
l1=si1;
i32_store(&i->m0,(U64)si0,si1);
si0=l12;
si1=l25;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l1;
si1=l25;
si0=si0 != si1;
if(si0){
goto L2;
}
si0=l11;
si1=4U;
si0+=si1;
l26=si0;
si0=l23;
si1=4U;
si0+=si1;
l27=si0;
si0=l1;
if(si0){
goto L71;
}
si0=0U;
l1=si0;
goto L70;
L71:;
si0=l1;
si1=1U;
si0&=si1;
l28=si0;
si0=0U;
l29=si0;
si0=0U;
l30=si0;
si0=l1;
si1=1U;
si0=si0 == si1;
if(si0){
goto L72;
}
si0=l1;
si1=-2U;
si0&=si1;
l31=si0;
si0=0U;
l29=si0;
si0=l22;
l1=si0;
si0=l24;
l25=si0;
si0=0U;
l30=si0;
L73:;
{
si0=l1;
si1=l25;
sj1=i64_load(&i->m0,(U64)si1);
l32=sj1;
si2=l29;
sj2=(U64)(si2);
sj3=1ULL;
sj2&=sj3;
sj1-=sj2;
si2=l1;
sj2=i64_load(&i->m0,(U64)si2);
l33=sj2;
sj1-=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si1=8U;
si0+=si1;
l34=si0;
si1=l25;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
l35=sj1;
sj2=l32;
sj3=l33;
si2=sj2 <= sj3;
sj3=l32;
sj4=l33;
si3=sj3 < sj4;
si4=l29;
si5=1U;
si4&=si5;
si2=si4?si2:si3;
l29=si2;
sj2=(U64)(si2);
sj1-=sj2;
si2=l34;
sj2=i64_load(&i->m0,(U64)si2);
l32=sj2;
sj1-=sj2;
i64_store(&i->m0,(U64)si0,sj1);
sj0=l35;
sj1=l32;
si0=sj0 <= sj1;
sj1=l35;
sj2=l32;
si1=sj1 < sj2;
si2=l29;
si0=si2?si0:si1;
l29=si0;
si0=l1;
si1=16U;
si0+=si1;
l1=si0;
si0=l25;
si1=16U;
si0+=si1;
l25=si0;
si0=l31;
si1=l30;
si2=2U;
si1+=si2;
l30=si1;
si0=si0 != si1;
if(si0){
goto L73;
}
}
L72:;
si0=l28;
si0=!(si0);
if(si0){
goto L74;
}
si0=l22;
si1=l30;
si2=3U;
si1<<=(si2&31);
l1=si1;
si0+=si1;
l25=si0;
si1=l24;
si2=l1;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
si2=l29;
sj2=(U64)(si2);
sj1-=sj2;
si2=l25;
sj2=i64_load(&i->m0,(U64)si2);
sj1-=sj2;
i64_store(&i->m0,(U64)si0,sj1);
L74:;
si0=l26;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si0=l11;
si0=i32_load(&i->m0,(U64)si0);
l22=si0;
L70:;
si0=l5;
si0=i32_load(&i->m0,(U64)si0);
si1=l5;
si1=i32_load(&i->m0,(U64)si1+4U);
si2=l22;
si3=l1;
si4=l21;
si5=l4;
f980(i,si0,si1,si2,si3,si4,si5);
si0=l11;
si0=i32_load(&i->m0,(U64)si0);
l25=si0;
si0=l23;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si0=l26;
si0=i32_load(&i->m0,(U64)si0);
l30=si0;
si0=l12;
si1=l27;
si1=i32_load(&i->m0,(U64)si1);
l29=si1;
i32_store(&i->m0,(U64)si0,si1);
si0=l12;
si1=l30;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l29;
si1=l30;
si0=si0 != si1;
if(si0){
goto L77;
}
si0=l29;
if(si0){
goto L76;
}
si0=0U;
l1=si0;
goto L75;
L77:;
si0=l12;
si1=0U;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=0U;
si1=l12;
si2=l12;
si3=4U;
si2+=si3;
si3=l12;
si4=8U;
si3+=si4;
si4=1203184U;
f1250(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L76:;
si0=0U;
l30=si0;
L78:;
{
si0=l1;
sj0=i64_load(&i->m0,(U64)si0);
l33=sj0;
si1=l25;
sj1=i64_load(&i->m0,(U64)si1);
sj0+=sj1;
l32=sj0;
sj1=l33;
si0=sj0 < sj1;
l34=si0;
si0=l30;
si1=255U;
si0&=si1;
if(si0){
goto L80;
}
si0=l34;
l30=si0;
goto L79;
L80:;
si0=l34;
sj1=l32;
sj2=1ULL;
sj1+=sj2;
l32=sj1;
si1=!(sj1);
si0|=si1;
l30=si0;
L79:;
si0=l1;
sj1=l32;
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si1=8U;
si0+=si1;
l1=si0;
si0=l25;
si1=8U;
si0+=si1;
l25=si0;
si0=l29;
si1=-1U;
si0+=si1;
l29=si0;
if(si0){
goto L78;
}
}
si0=l26;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si0=l11;
si0=i32_load(&i->m0,(U64)si0);
l25=si0;
L75:;
si0=l11;
si1=l5;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l26;
si1=l5;
si1=i32_load(&i->m0,(U64)si1+4U);
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=l1;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l5;
si1=l25;
i32_store(&i->m0,(U64)si0,si1);
si0=l20;
si1=l2;
si0+=si1;
l20=si0;
si0=l21;
si1=1U;
si0+=si1;
l21=si0;
si1=l3;
si0=si0 != si1;
if(si0){
goto L69;
}
}
L5:;
si0=l18;
si1=l17;
si2=l2;
si3=l16;
si4=l15;
si5=l5;
si6=l6;
si7=l7;
si8=l10;
si9=l8;
si8+=si9;
si9=l9;
si10=l14;
si11=l19;
f1003(i,si0,si1,si2,si3,si4,si5,si6,si7,si8,si9,si10,si11);
si0=l19;
si0=!(si0);
if(si0){
goto L3;
}
si0=l13;
si1=l17;
si0=si0 > si1;
if(si0){
goto L81;
}
si0=l2;
si1=3U;
si0<<=(si1&31);
l30=si0;
si0=l13;
si1=3U;
si0<<=(si1&31);
l34=si0;
si0=0U;
l29=si0;
si0=0U;
l1=si0;
L82:;
{
si0=l1;
si1=l13;
si0=si0 >= si1;
if(si0){
goto L1;
}
si0=l5;
si0=i32_load(&i->m0,(U64)si0);
si1=l5;
si1=i32_load(&i->m0,(U64)si1+4U);
si2=l6;
si2=i32_load(&i->m0,(U64)si2);
si3=l6;
si3=i32_load(&i->m0,(U64)si3+4U);
si4=l0;
si4=i32_load(&i->m0,(U64)si4);
si5=l0;
si6=4U;
si5+=si6;
si5=i32_load(&i->m0,(U64)si5);
si6=l0;
si7=l34;
si6+=si7;
l25=si6;
si6=i32_load(&i->m0,(U64)si6);
si7=l25;
si8=4U;
si7+=si8;
si7=i32_load(&i->m0,(U64)si7);
si8=l29;
si9=l4;
f990(i,si0,si1,si2,si3,si4,si5,si6,si7,si8,si9);
si0=l0;
sj0=i64_load(&i->m0,(U64)si0);
l32=sj0;
si0=l0;
si1=l5;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
sj1=l32;
i64_store(&i->m0,(U64)si0,sj1);
si0=l25;
sj0=i64_load(&i->m0,(U64)si0);
l32=sj0;
si0=l25;
si1=l6;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l6;
sj1=l32;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=l30;
si0+=si1;
l0=si0;
si0=l1;
si1=l2;
si0+=si1;
l1=si0;
si0=l19;
si1=l29;
si2=1U;
si1+=si2;
l29=si1;
si0=si0 != si1;
if(si0){
goto L82;
}
goto L3;
}
L81:;
si0=l2;
si1=3U;
si0<<=(si1&31);
l30=si0;
si0=l13;
si1=3U;
si0<<=(si1&31);
l34=si0;
si0=0U;
l29=si0;
si0=0U;
l1=si0;
L83:;
{
si0=l1;
si1=l13;
si0=si0 >= si1;
if(si0){
goto L1;
}
si0=l1;
si1=l17;
si0=si0 >= si1;
if(si0){
goto L84;
}
si0=l5;
si0=i32_load(&i->m0,(U64)si0);
si1=l5;
si1=i32_load(&i->m0,(U64)si1+4U);
si2=l6;
si2=i32_load(&i->m0,(U64)si2);
si3=l6;
si3=i32_load(&i->m0,(U64)si3+4U);
si4=l0;
si4=i32_load(&i->m0,(U64)si4);
si5=l0;
si6=4U;
si5+=si6;
si5=i32_load(&i->m0,(U64)si5);
si6=l0;
si7=l34;
si6+=si7;
l25=si6;
si6=i32_load(&i->m0,(U64)si6);
si7=l25;
si8=4U;
si7+=si8;
si7=i32_load(&i->m0,(U64)si7);
si8=l29;
si9=l4;
f990(i,si0,si1,si2,si3,si4,si5,si6,si7,si8,si9);
si0=l0;
sj0=i64_load(&i->m0,(U64)si0);
l32=sj0;
si0=l0;
si1=l5;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
sj1=l32;
i64_store(&i->m0,(U64)si0,sj1);
si0=l25;
sj0=i64_load(&i->m0,(U64)si0);
l32=sj0;
si0=l25;
si1=l6;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l6;
sj1=l32;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=l30;
si0+=si1;
l0=si0;
si0=l1;
si1=l2;
si0+=si1;
l1=si0;
si0=l29;
si1=1U;
si0+=si1;
l25=si0;
l29=si0;
si0=l19;
si1=l25;
si0=si0 != si1;
if(si0){
goto L83;
}
goto L3;
L84:;
}
si0=l1;
si1=l17;
si2=1194552U;
f594(i,si0,si1,si2);
UNREACHABLE;
L4:;
si0=l20;
si1=l13;
si2=1194568U;
f594(i,si0,si1,si2);
UNREACHABLE;
L3:;
si0=l12;
si1=32U;
si0+=si1;
i->g0=si0;
goto L0;
L2:;
si0=l12;
si1=0U;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=0U;
si1=l12;
si2=l12;
si3=4U;
si2+=si3;
si3=l12;
si4=8U;
si3+=si4;
si4=1203508U;
f1250(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L1:;
si0=l1;
si1=l13;
si2=1194536U;
f594(i,si0,si1,si2);
UNREACHABLE;
L0:;
}

void f1004(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4,U32 l5,U32 l6,U32 l7,U32 l8,U32 l9) {
U32 l10=0;
U32 l11=0;
U32 l12=0;
U32 l13=0;
U32 l14=0;
U32 l15=0;
U32 l16=0;
U32 l17=0;
U64 l18=0;
U32 l19=0;
U64 l20=0;
U32 l21=0;
U32 l22=0;
U32 l23=0;
U32 l24=0;
U32 l25=0;
U32 l26=0;
U32 l27=0;
U32 l28=0;
U64 l29=0;
U32 l30=0;
U32 l31=0;
U32 l32=0;
U32 l33=0;
U32 l34=0;
U32 l35=0;
U32 l36=0;
U32 l37=0;
U64 l38=0;
U32 l39=0;
U32 l40=0;
U32 l41=0;
U32 l42=0;
U32 l43=0;
U32 l44=0;
U32 l45=0;
U32 l46=0;
U32 l47=0;
U32 l48=0;
U32 l49=0;
U64 l50=0;
U64 l51=0;
U64 l52=0;
U32 si0,si1,si2,si3,si4,si5,si6,si7,si8,si9,si10,si11;
U64 sj0,sj1,sj2,sj3,sj4;
si0=i->g0;
si1=32U;
si0-=si1;
l10=si0;
i->g0=si0;
si0=l2;
si1=1U;
si0<<=(si1&31);
l11=si0;
si1=l8;
si0=DIV_U(si0,si1);
l12=si0;
si0=l9;
si1=l11;
si0-=si1;
l13=si0;
si1=l8;
si0=DIV_U(si0,si1);
l14=si0;
si0=l11;
si1=l8;
si0=si0 < si1;
if(si0){
goto L4;
}
si0=l8;
si0=!(si0);
if(si0){
goto L5;
}
si0=l8;
si1=3U;
si0<<=(si1&31);
l15=si0;
si0=l8;
si1=l3;
si0*=si1;
l16=si0;
si0=l12;
si1=1U;
si0>>=(si1&31);
l17=si0;
si0=0U;
si1=32U;
si2=l12;
si2=I32_CLZ(si2);
si1-=si2;
sj1=(U64)(si1);
si2=l12;
si2=I32_POPCNT(si2);
si3=1U;
si2=si2 == si3;
sj2=(U64)(si2);
sj1-=sj2;
l18=sj1;
si1=(U32)(sj1);
si0-=si1;
si1=31U;
si0&=si1;
l19=si0;
si0=32U;
si1=l8;
si1=I32_CLZ(si1);
si0-=si1;
sj0=(U64)(si0);
l20=sj0;
si0=l8;
si0=I32_POPCNT(si0);
l21=si0;
si0=l0;
l22=si0;
si0=l1;
l23=si0;
si0=0U;
l24=si0;
L6:;
{
si0=l24;
si1=1U;
si0+=si1;
l25=si0;
si0=l22;
l26=si0;
si0=0U;
l27=si0;
si0=0U;
l9=si0;
L7:;
{
si0=l9;
si1=l9;
si2=24U;
si1<<=(si2&31);
si2=l9;
si3=65280U;
si2&=si3;
si3=8U;
si2<<=(si3&31);
si1|=si2;
si2=l9;
si3=8U;
si2>>=(si3&31);
si3=65280U;
si2&=si3;
si3=l9;
si4=24U;
si3>>=(si4&31);
si2|=si3;
si1|=si2;
l28=si1;
si2=4U;
si1>>=(si2&31);
si2=252645135U;
si1&=si2;
si2=l28;
si3=252645135U;
si2&=si3;
si3=4U;
si2<<=(si3&31);
si1|=si2;
l28=si1;
si2=2U;
si1>>=(si2&31);
si2=858993459U;
si1&=si2;
si2=l28;
si3=858993459U;
si2&=si3;
si3=2U;
si2<<=(si3&31);
si1|=si2;
l28=si1;
si2=1U;
si1>>=(si2&31);
si2=1431655765U;
si1&=si2;
si2=l28;
si3=1431655765U;
si2&=si3;
si3=1U;
si2<<=(si3&31);
si1|=si2;
si2=l19;
si1>>=(si2&31);
l28=si1;
si0=si0 >= si1;
if(si0){
goto L8;
}
si0=l27;
si1=l23;
si0=si0 >= si1;
if(si0){
goto L2;
}
si0=l28;
si1=l8;
si0*=si1;
l28=si0;
si1=l23;
si0=si0 >= si1;
if(si0){
goto L3;
}
si0=l26;
sj0=i64_load(&i->m0,(U64)si0);
l29=sj0;
si0=l26;
si1=l22;
si2=l28;
si3=3U;
si2<<=(si3&31);
si1+=si2;
l28=si1;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l28;
sj1=l29;
i64_store(&i->m0,(U64)si0,sj1);
L8:;
si0=l26;
si1=l15;
si0+=si1;
l26=si0;
si0=l27;
si1=l8;
si0+=si1;
l27=si0;
si0=l12;
si1=l9;
si2=1U;
si1+=si2;
l9=si1;
si0=si0 != si1;
if(si0){
goto L7;
}
}
si0=l22;
si1=l23;
si2=l8;
si3=l17;
si4=l16;
si5=l4;
si6=l5;
si7=l3;
si8=0U;
si9=l24;
si10=1U;
f1002(i,si0,si1,si2,si3,si4,si5,si6,si7,si8,si9,si10);
si0=l23;
si0=!(si0);
if(si0){
goto L1;
}
si0=l22;
si1=8U;
si0+=si1;
l22=si0;
si0=l23;
si1=-1U;
si0+=si1;
l23=si0;
si0=l25;
l24=si0;
si0=l25;
si1=l8;
si0=si0 != si1;
if(si0){
goto L6;
}
}
si0=l12;
si1=1U;
si2=l12;
si3=1U;
si2=si2 > si3;
si0=si2?si0:si1;
l30=si0;
si0=l14;
si1=1U;
si2=l14;
si3=1U;
si2=si2 > si3;
si0=si2?si0:si1;
l31=si0;
si0=l8;
si1=3U;
si0<<=(si1&31);
l32=si0;
si0=l3;
si1=1U;
si0&=si1;
l33=si0;
si0=l8;
si1=l3;
si2=1U;
si1>>=(si2&31);
l34=si1;
si0*=si1;
l35=si0;
si0=l0;
si1=l2;
si2=4U;
si1<<=(si2&31);
l36=si1;
si0+=si1;
l37=si0;
si0=l21;
si1=1U;
si0=si0 != si1;
sj0=(U64)(si0);
sj1=l20;
sj0+=sj1;
sj1=l18;
sj0+=sj1;
l29=sj0;
sj1=63ULL;
sj0&=sj1;
l38=sj0;
sj0=0ULL;
sj1=l29;
sj0-=sj1;
sj1=63ULL;
sj0&=sj1;
l18=sj0;
si0=0U;
l39=si0;
si0=0U;
l40=si0;
L9:;
{
si0=l1;
si1=l11;
si0=si0 < si1;
if(si0){
goto L14;
}
si0=l1;
si1=l11;
si0-=si1;
l41=si0;
si0=l0;
si1=l11;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l42=si0;
si0=0U;
l9=si0;
si0=l13;
si1=l8;
si0=si0 < si1;
l43=si0;
if(si0){
goto L15;
}
si0=0U;
l9=si0;
si0=l37;
l27=si0;
si0=0U;
l26=si0;
L16:;
{
si0=l26;
si1=l26;
si2=24U;
si1<<=(si2&31);
si2=l26;
si3=65280U;
si2&=si3;
si3=8U;
si2<<=(si3&31);
si1|=si2;
si2=l26;
si3=8U;
si2>>=(si3&31);
si3=65280U;
si2&=si3;
si3=l26;
si4=24U;
si3>>=(si4&31);
si2|=si3;
si1|=si2;
l28=si1;
si2=4U;
si1>>=(si2&31);
si2=252645135U;
si1&=si2;
si2=l28;
si3=252645135U;
si2&=si3;
si3=4U;
si2<<=(si3&31);
si1|=si2;
l28=si1;
si2=2U;
si1>>=(si2&31);
si2=858993459U;
si1&=si2;
si2=l28;
si3=858993459U;
si2&=si3;
si3=2U;
si2<<=(si3&31);
si1|=si2;
l28=si1;
si2=1U;
si1>>=(si2&31);
si2=1431655765U;
si1&=si2;
si2=l28;
si3=1431655765U;
si2&=si3;
si3=1U;
si2<<=(si3&31);
si1|=si2;
si2=l19;
si1>>=(si2&31);
l28=si1;
si0=si0 >= si1;
if(si0){
goto L17;
}
si0=l9;
si1=l41;
si0=si0 >= si1;
if(si0){
goto L19;
}
si0=l28;
si1=l8;
si0*=si1;
l28=si0;
si1=l41;
si0=si0 >= si1;
if(si0){
goto L18;
}
si0=l27;
sj0=i64_load(&i->m0,(U64)si0);
l20=sj0;
si0=l27;
si1=l42;
si2=l28;
si3=3U;
si2<<=(si3&31);
si1+=si2;
l28=si1;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l28;
sj1=l20;
i64_store(&i->m0,(U64)si0,sj1);
goto L17;
L19:;
si0=l9;
si1=l41;
si2=1194856U;
f594(i,si0,si1,si2);
UNREACHABLE;
L18:;
si0=l28;
si1=l41;
si2=1194856U;
f594(i,si0,si1,si2);
UNREACHABLE;
L17:;
si0=l27;
si1=l32;
si0+=si1;
l27=si0;
si0=l9;
si1=l8;
si0+=si1;
l9=si0;
si0=l31;
si1=l26;
si2=1U;
si1+=si2;
l26=si1;
si0=si0 != si1;
if(si0){
goto L16;
}
}
L15:;
si0=l14;
si1=l12;
si0=si0 >= si1;
if(si0){
goto L10;
}
si0=l33;
if(si0){
goto L20;
}
si0=l41;
si1=l11;
si0=si0 > si1;
if(si0){
goto L21;
}
si0=l9;
si1=3U;
si0<<=(si1&31);
l28=si0;
si0=l0;
l26=si0;
si0=l37;
l27=si0;
si0=l14;
l23=si0;
L22:;
{
si0=l9;
si1=l41;
si0=si0 >= si1;
if(si0){
goto L11;
}
si0=l27;
si1=l28;
si0+=si1;
l15=si0;
si0=i32_load(&i->m0,(U64)si0);
si1=l15;
si2=4U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
si2=l26;
si3=l28;
si2+=si3;
l15=si2;
si2=i32_load(&i->m0,(U64)si2);
si3=l15;
si4=4U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si4=l40;
si5=l9;
si4+=si5;
si5=l34;
f980(i,si0,si1,si2,si3,si4,si5);
si0=l26;
si1=l32;
si0+=si1;
l26=si0;
si0=l27;
si1=l32;
si0+=si1;
l27=si0;
si0=l9;
si1=l8;
si0+=si1;
l9=si0;
si0=l23;
si1=1U;
si0+=si1;
l23=si0;
si1=l12;
si0=si0 != si1;
if(si0){
goto L22;
}
goto L10;
}
L21:;
si0=l9;
si1=3U;
si0<<=(si1&31);
l28=si0;
si0=l0;
l26=si0;
si0=l37;
l27=si0;
si0=l14;
l23=si0;
L23:;
{
si0=l9;
si1=l41;
si0=si0 >= si1;
if(si0){
goto L11;
}
si0=l9;
si1=l11;
si0=si0 >= si1;
if(si0){
goto L12;
}
si0=l27;
si1=l28;
si0+=si1;
l15=si0;
si0=i32_load(&i->m0,(U64)si0);
si1=l15;
si2=4U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
si2=l26;
si3=l28;
si2+=si3;
l15=si2;
si2=i32_load(&i->m0,(U64)si2);
si3=l15;
si4=4U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si4=l40;
si5=l9;
si4+=si5;
si5=l34;
f980(i,si0,si1,si2,si3,si4,si5);
si0=l26;
si1=l32;
si0+=si1;
l26=si0;
si0=l27;
si1=l32;
si0+=si1;
l27=si0;
si0=l9;
si1=l8;
si0+=si1;
l9=si0;
si0=l23;
si1=1U;
si0+=si1;
l23=si0;
si1=l12;
si0=si0 != si1;
if(si0){
goto L23;
}
goto L10;
}
L20:;
si0=l40;
si1=1U;
si0&=si1;
l27=si0;
si0=l11;
si1=l41;
si0=si0 > si1;
if(si0){
goto L24;
}
si0=l36;
si1=l9;
si2=3U;
si1<<=(si2&31);
l2=si1;
si0+=si1;
l21=si0;
si0=l0;
l26=si0;
si0=l14;
l28=si0;
L25:;
{
si0=l9;
si1=l11;
si0=si0 >= si1;
if(si0){
goto L13;
}
si0=l40;
si1=l9;
si0+=si1;
l23=si0;
si0=l26;
si1=l2;
si0+=si1;
l15=si0;
si0=i32_load(&i->m0,(U64)si0);
l22=si0;
si0=l26;
si1=l21;
si0+=si1;
l24=si0;
si0=i32_load(&i->m0,(U64)si0);
l25=si0;
si0=l15;
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l15=si0;
si0=l24;
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l24=si0;
si0=l27;
si0=!(si0);
if(si0){
goto L27;
}
si0=l25;
si1=l24;
si2=l22;
si3=l15;
si4=l23;
si5=l3;
si6=l6;
si7=l7;
f981(i,si0,si1,si2,si3,si4,si5,si6,si7);
goto L26;
L27:;
si0=l25;
si1=l24;
si2=l22;
si3=l15;
si4=l23;
si5=1U;
si4>>=(si5&31);
si5=l3;
f980(i,si0,si1,si2,si3,si4,si5);
L26:;
si0=l26;
si1=l32;
si0+=si1;
l26=si0;
si0=l9;
si1=l8;
si0+=si1;
l9=si0;
si0=l28;
si1=1U;
si0+=si1;
l28=si0;
si1=l12;
si0=si0 != si1;
if(si0){
goto L25;
}
goto L10;
}
L24:;
si0=l36;
si1=l9;
si2=3U;
si1<<=(si2&31);
l2=si1;
si0+=si1;
l21=si0;
si0=l0;
l26=si0;
si0=l14;
l28=si0;
L28:;
{
si0=l9;
si1=l11;
si0=si0 >= si1;
if(si0){
goto L13;
}
si0=l9;
si1=l41;
si0=si0 >= si1;
if(si0){
goto L31;
}
si0=l40;
si1=l9;
si0+=si1;
l23=si0;
si0=l26;
si1=l2;
si0+=si1;
l15=si0;
si0=i32_load(&i->m0,(U64)si0);
l22=si0;
si0=l26;
si1=l21;
si0+=si1;
l24=si0;
si0=i32_load(&i->m0,(U64)si0);
l25=si0;
si0=l15;
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l15=si0;
si0=l24;
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l24=si0;
si0=l27;
if(si0){
goto L30;
}
si0=l25;
si1=l24;
si2=l22;
si3=l15;
si4=l23;
si5=1U;
si4>>=(si5&31);
si5=l3;
f980(i,si0,si1,si2,si3,si4,si5);
goto L29;
L31:;
si0=l9;
si1=l41;
si2=1194840U;
f594(i,si0,si1,si2);
UNREACHABLE;
L30:;
si0=l25;
si1=l24;
si2=l22;
si3=l15;
si4=l23;
si5=l3;
si6=l6;
si7=l7;
f981(i,si0,si1,si2,si3,si4,si5,si6,si7);
L29:;
si0=l26;
si1=l32;
si0+=si1;
l26=si0;
si0=l9;
si1=l8;
si0+=si1;
l9=si0;
si0=l28;
si1=1U;
si0+=si1;
l28=si0;
si1=l12;
si0=si0 == si1;
if(si0){
goto L10;
}
goto L28;
}
L14:;
si0=1189416U;
si1=35U;
si2=1194664U;
f604(i,si0,si1,si2);
UNREACHABLE;
L13:;
si0=l9;
si1=l11;
si2=1194824U;
f594(i,si0,si1,si2);
UNREACHABLE;
L12:;
si0=l9;
si1=l11;
si2=1194808U;
f594(i,si0,si1,si2);
UNREACHABLE;
L11:;
si0=l9;
si1=l41;
si2=1194792U;
f594(i,si0,si1,si2);
UNREACHABLE;
L10:;
si0=l42;
si1=l41;
si2=l8;
si3=l17;
si4=l16;
si5=l4;
si6=l5;
si7=l3;
si8=0U;
si9=l40;
si10=1U;
si11=l14;
f1003(i,si0,si1,si2,si3,si4,si5,si6,si7,si8,si9,si10,si11);
si0=l13;
si1=l40;
si0-=si1;
l28=si0;
si0=l33;
si0=!(si0);
if(si0){
goto L38;
}
si0=l13;
si1=l40;
si0=si0 == si1;
if(si0){
goto L32;
}
si0=l11;
si1=l41;
si0=si0 > si1;
if(si0){
goto L37;
}
si0=0U;
l9=si0;
si0=l0;
l26=si0;
L39:;
{
si0=l9;
si1=l11;
si0=si0 >= si1;
if(si0){
goto L33;
}
si0=l26;
si1=l36;
si0+=si1;
l27=si0;
si0=i32_load(&i->m0,(U64)si0);
l15=si0;
si0=l26;
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l22=si0;
si0=l27;
si1=4U;
si0+=si1;
l23=si0;
si0=i32_load(&i->m0,(U64)si0);
l24=si0;
si0=l26;
si0=i32_load(&i->m0,(U64)si0);
l25=si0;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+4U);
l2=si0;
si0=l5;
si0=i32_load(&i->m0,(U64)si0);
l21=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+4U);
l44=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
l45=si0;
si0=l40;
si1=l9;
si0+=si1;
l46=si0;
si1=1U;
si0&=si1;
si0=!(si0);
if(si0){
goto L41;
}
si0=l45;
si1=l44;
si2=l21;
si3=l2;
si4=l25;
si5=l22;
si6=l15;
si7=l24;
si8=l46;
si9=l3;
si10=l6;
si11=l7;
f994(i,si0,si1,si2,si3,si4,si5,si6,si7,si8,si9,si10,si11);
goto L40;
L41:;
si0=l45;
si1=l44;
si2=l21;
si3=l2;
si4=l25;
si5=l22;
si6=l15;
si7=l24;
si8=l46;
si9=1U;
si8>>=(si9&31);
si9=l3;
f990(i,si0,si1,si2,si3,si4,si5,si6,si7,si8,si9);
L40:;
si0=l26;
sj0=i64_load(&i->m0,(U64)si0);
l20=sj0;
si0=l26;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
sj1=l20;
i64_store(&i->m0,(U64)si0,sj1);
si0=l23;
si0=i32_load(&i->m0,(U64)si0);
l15=si0;
si0=l23;
si1=l5;
si1=i32_load(&i->m0,(U64)si1+4U);
i32_store(&i->m0,(U64)si0,si1);
si0=l27;
si0=i32_load(&i->m0,(U64)si0);
l23=si0;
si0=l27;
si1=l5;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=l23;
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=l15;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l26;
si1=l32;
si0+=si1;
l26=si0;
si0=l9;
si1=l8;
si0+=si1;
l9=si0;
si1=l28;
si0=si0 < si1;
if(si0){
goto L39;
}
goto L32;
}
L38:;
si0=l13;
si1=l40;
si0=si0 == si1;
if(si0){
goto L32;
}
si0=l11;
si1=l41;
si0=si0 > si1;
if(si0){
goto L42;
}
si0=0U;
l9=si0;
si0=l39;
l23=si0;
si0=l0;
l26=si0;
L43:;
{
si0=l9;
si1=l11;
si0=si0 >= si1;
if(si0){
goto L36;
}
si0=l26;
si1=l36;
si0+=si1;
l15=si0;
si0=i32_load(&i->m0,(U64)si0);
l22=si0;
si0=l26;
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l25=si0;
si0=l15;
si1=4U;
si0+=si1;
l24=si0;
si0=i32_load(&i->m0,(U64)si0);
l27=si0;
si0=l26;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+4U);
l21=si0;
si0=l5;
si0=i32_load(&i->m0,(U64)si0);
l44=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+4U);
l45=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
l46=si0;
si0=l23;
si1=63U;
si0&=si1;
l47=si0;
si0=!(si0);
if(si0){
goto L44;
}
si0=l27;
si0=!(si0);
if(si0){
goto L35;
}
si0=l22;
si1=l27;
si2=-1U;
si1+=si2;
l48=si1;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l49=si0;
sj0=i64_load(&i->m0,(U64)si0);
l50=sj0;
si0=l22;
si1=l27;
si2=l47;
sj2=(U64)(si2);
l51=sj2;
sj0=f1026(i,si0,si1,sj2);
l20=sj0;
si0=l48;
si0=!(si0);
if(si0){
goto L34;
}
si0=l27;
si1=3U;
si0<<=(si1&31);
si1=l22;
si0+=si1;
si1=-16U;
si0+=si1;
l47=si0;
si1=l47;
sj1=i64_load(&i->m0,(U64)si1);
sj2=l20;
sj1-=sj2;
l52=sj1;
i64_store(&i->m0,(U64)si0,sj1);
si0=l49;
sj1=l50;
sj2=l51;
sj1=(U64)((I64)sj1>>(sj2&63));
sj2=l20;
sj3=0ULL;
si2=sj2 != sj3;
sj2=(U64)(si2);
sj1-=sj2;
sj2=l52;
sj3=0ULL;
sj4=l20;
sj3-=sj4;
si2=sj2 < sj3;
sj2=(U64)(si2);
sj1+=sj2;
i64_store(&i->m0,(U64)si0,sj1);
L44:;
si0=l46;
si1=l45;
si2=l44;
si3=l21;
si4=l2;
si5=l25;
si6=l22;
si7=l27;
si8=0U;
si9=l23;
si10=6U;
si9>>=(si10&31);
f983(i,si0,si1,si2,si3,si4,si5,si6,si7,si8,si9);
si0=l26;
sj0=i64_load(&i->m0,(U64)si0);
l20=sj0;
si0=l26;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
sj1=l20;
i64_store(&i->m0,(U64)si0,sj1);
si0=l24;
si0=i32_load(&i->m0,(U64)si0);
l27=si0;
si0=l24;
si1=l5;
si1=i32_load(&i->m0,(U64)si1+4U);
i32_store(&i->m0,(U64)si0,si1);
si0=l15;
si0=i32_load(&i->m0,(U64)si0);
l22=si0;
si0=l15;
si1=l5;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=l22;
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=l27;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l23;
si1=l35;
si0+=si1;
l23=si0;
si0=l26;
si1=l32;
si0+=si1;
l26=si0;
si0=l9;
si1=l8;
si0+=si1;
l9=si0;
si1=l28;
si0=si0 >= si1;
if(si0){
goto L32;
}
goto L43;
}
L42:;
si0=0U;
l9=si0;
si0=l39;
l23=si0;
si0=l0;
l26=si0;
L45:;
{
si0=l9;
si1=l11;
si0=si0 >= si1;
if(si0){
goto L36;
}
si0=l9;
si1=l41;
si0=si0 >= si1;
if(si0){
goto L46;
}
si0=l26;
si1=l36;
si0+=si1;
l15=si0;
si0=i32_load(&i->m0,(U64)si0);
l22=si0;
si0=l26;
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l25=si0;
si0=l15;
si1=4U;
si0+=si1;
l24=si0;
si0=i32_load(&i->m0,(U64)si0);
l27=si0;
si0=l26;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+4U);
l21=si0;
si0=l5;
si0=i32_load(&i->m0,(U64)si0);
l44=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+4U);
l45=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
l46=si0;
si0=l23;
si1=63U;
si0&=si1;
l47=si0;
si0=!(si0);
if(si0){
goto L47;
}
si0=l27;
si0=!(si0);
if(si0){
goto L35;
}
si0=l22;
si1=l27;
si2=-1U;
si1+=si2;
l48=si1;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l49=si0;
sj0=i64_load(&i->m0,(U64)si0);
l50=sj0;
si0=l22;
si1=l27;
si2=l47;
sj2=(U64)(si2);
l51=sj2;
sj0=f1026(i,si0,si1,sj2);
l20=sj0;
si0=l48;
si0=!(si0);
if(si0){
goto L34;
}
si0=l27;
si1=3U;
si0<<=(si1&31);
si1=l22;
si0+=si1;
si1=-16U;
si0+=si1;
l47=si0;
si1=l47;
sj1=i64_load(&i->m0,(U64)si1);
sj2=l20;
sj1-=sj2;
l52=sj1;
i64_store(&i->m0,(U64)si0,sj1);
si0=l49;
sj1=l50;
sj2=l51;
sj1=(U64)((I64)sj1>>(sj2&63));
sj2=l20;
sj3=0ULL;
si2=sj2 != sj3;
sj2=(U64)(si2);
sj1-=sj2;
sj2=l52;
sj3=0ULL;
sj4=l20;
sj3-=sj4;
si2=sj2 < sj3;
sj2=(U64)(si2);
sj1+=sj2;
i64_store(&i->m0,(U64)si0,sj1);
L47:;
si0=l46;
si1=l45;
si2=l44;
si3=l21;
si4=l2;
si5=l25;
si6=l22;
si7=l27;
si8=0U;
si9=l23;
si10=6U;
si9>>=(si10&31);
f983(i,si0,si1,si2,si3,si4,si5,si6,si7,si8,si9);
si0=l26;
sj0=i64_load(&i->m0,(U64)si0);
l20=sj0;
si0=l26;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
sj1=l20;
i64_store(&i->m0,(U64)si0,sj1);
si0=l24;
si0=i32_load(&i->m0,(U64)si0);
l27=si0;
si0=l24;
si1=l5;
si1=i32_load(&i->m0,(U64)si1+4U);
i32_store(&i->m0,(U64)si0,si1);
si0=l15;
si0=i32_load(&i->m0,(U64)si0);
l22=si0;
si0=l15;
si1=l5;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=l22;
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=l27;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l23;
si1=l35;
si0+=si1;
l23=si0;
si0=l26;
si1=l32;
si0+=si1;
l26=si0;
si0=l9;
si1=l8;
si0+=si1;
l9=si0;
si1=l28;
si0=si0 >= si1;
if(si0){
goto L32;
}
goto L45;
L46:;
}
si0=l9;
si1=l41;
si2=1194696U;
f594(i,si0,si1,si2);
UNREACHABLE;
L37:;
si0=0U;
l26=si0;
si0=0U;
l9=si0;
L48:;
{
si0=l9;
si1=l11;
si0=si0 >= si1;
if(si0){
goto L33;
}
si0=l9;
si1=l41;
si0=si0 >= si1;
if(si0){
goto L51;
}
si0=l37;
si1=l26;
si0+=si1;
l27=si0;
si0=i32_load(&i->m0,(U64)si0);
l24=si0;
si0=l27;
si1=4U;
si0+=si1;
l15=si0;
si0=i32_load(&i->m0,(U64)si0);
l25=si0;
si0=l0;
si1=l26;
si0+=si1;
l23=si0;
si1=4U;
si0+=si1;
l22=si0;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si0=l23;
si0=i32_load(&i->m0,(U64)si0);
l21=si0;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+4U);
l44=si0;
si0=l5;
si0=i32_load(&i->m0,(U64)si0);
l45=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+4U);
l46=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
l47=si0;
si0=l40;
si1=l9;
si0+=si1;
l48=si0;
si1=1U;
si0&=si1;
if(si0){
goto L50;
}
si0=l47;
si1=l46;
si2=l45;
si3=l44;
si4=l21;
si5=l2;
si6=l24;
si7=l25;
si8=l48;
si9=1U;
si8>>=(si9&31);
si9=l3;
f990(i,si0,si1,si2,si3,si4,si5,si6,si7,si8,si9);
goto L49;
L51:;
si0=l9;
si1=l41;
si2=1194776U;
f594(i,si0,si1,si2);
UNREACHABLE;
L50:;
si0=l47;
si1=l46;
si2=l45;
si3=l44;
si4=l21;
si5=l2;
si6=l24;
si7=l25;
si8=l48;
si9=l3;
si10=l6;
si11=l7;
f994(i,si0,si1,si2,si3,si4,si5,si6,si7,si8,si9,si10,si11);
L49:;
si0=l23;
si0=i32_load(&i->m0,(U64)si0);
l24=si0;
si0=l23;
si1=l4;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l22;
si0=i32_load(&i->m0,(U64)si0);
l23=si0;
si0=l22;
si1=l4;
si1=i32_load(&i->m0,(U64)si1+4U);
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=l24;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=l23;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l27;
si0=i32_load(&i->m0,(U64)si0);
l23=si0;
si0=l27;
si1=l5;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l15;
si0=i32_load(&i->m0,(U64)si0);
l27=si0;
si0=l15;
si1=l5;
si1=i32_load(&i->m0,(U64)si1+4U);
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=l23;
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=l27;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l26;
si1=l32;
si0+=si1;
l26=si0;
si0=l9;
si1=l8;
si0+=si1;
l9=si0;
si1=l28;
si0=si0 >= si1;
if(si0){
goto L32;
}
goto L48;
}
L36:;
si0=l9;
si1=l11;
si2=1194680U;
f594(i,si0,si1,si2);
UNREACHABLE;
L35:;
si0=1189451U;
si1=43U;
si2=1189972U;
f604(i,si0,si1,si2);
UNREACHABLE;
L34:;
si0=1189451U;
si1=43U;
si2=1189988U;
f604(i,si0,si1,si2);
UNREACHABLE;
L33:;
si0=l9;
si1=l11;
si2=1194760U;
f594(i,si0,si1,si2);
UNREACHABLE;
L32:;
si0=l13;
l23=si0;
si0=l13;
si1=l11;
si2=l40;
si1-=si2;
l15=si1;
si0=si0 >= si1;
if(si0){
goto L52;
}
L54:;
{
si0=l23;
si1=l11;
si0=si0 >= si1;
if(si0){
goto L53;
}
si0=l0;
si1=l23;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l9=si0;
si0=i32_load(&i->m0,(U64)si0+4U);
l26=si0;
si0=!(si0);
if(si0){
goto L55;
}
si0=l9;
si0=i32_load(&i->m0,(U64)si0);
l9=si0;
si0=l26;
si1=-1U;
si0+=si1;
si1=536870911U;
si0&=si1;
l27=si0;
si1=1U;
si0+=si1;
l28=si0;
si1=3U;
si0&=si1;
l26=si0;
sj0=0ULL;
l20=sj0;
si0=l27;
si1=3U;
si0=si0 < si1;
if(si0){
goto L56;
}
si0=l28;
si1=1073741820U;
si0&=si1;
l27=si0;
sj0=0ULL;
l20=sj0;
L57:;
{
si0=l9;
si1=l9;
sj1=i64_load(&i->m0,(U64)si1);
l50=sj1;
sj2=1ULL;
sj1<<=(sj2&63);
sj2=l20;
sj1|=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l9;
si1=8U;
si0+=si1;
l28=si0;
si1=l28;
sj1=i64_load(&i->m0,(U64)si1);
l20=sj1;
sj2=1ULL;
sj1<<=(sj2&63);
sj2=l50;
sj3=63ULL;
sj2>>=(sj3&63);
sj1|=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l9;
si1=16U;
si0+=si1;
l28=si0;
si1=l28;
sj1=i64_load(&i->m0,(U64)si1);
l50=sj1;
sj2=1ULL;
sj1<<=(sj2&63);
sj2=l20;
sj3=63ULL;
sj2>>=(sj3&63);
sj1|=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l9;
si1=24U;
si0+=si1;
l28=si0;
si1=l28;
sj1=i64_load(&i->m0,(U64)si1);
l20=sj1;
sj2=1ULL;
sj1<<=(sj2&63);
sj2=l50;
sj3=63ULL;
sj2>>=(sj3&63);
sj1|=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l9;
si1=32U;
si0+=si1;
l9=si0;
sj0=l20;
sj1=63ULL;
sj0>>=(sj1&63);
l20=sj0;
si0=l27;
si1=-4U;
si0+=si1;
l27=si0;
if(si0){
goto L57;
}
}
L56:;
si0=l26;
si0=!(si0);
if(si0){
goto L55;
}
L58:;
{
si0=l9;
si1=l9;
sj1=i64_load(&i->m0,(U64)si1);
l50=sj1;
sj2=1ULL;
sj1<<=(sj2&63);
sj2=l20;
sj1|=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l9;
si1=8U;
si0+=si1;
l9=si0;
sj0=l50;
sj1=63ULL;
sj0>>=(sj1&63);
l20=sj0;
si0=l26;
si1=-1U;
si0+=si1;
l26=si0;
if(si0){
goto L58;
}
}
L55:;
si0=l23;
si1=l8;
si0+=si1;
l23=si0;
si1=l15;
si0=si0 >= si1;
if(si0){
goto L52;
}
goto L54;
}
L53:;
si0=l23;
si1=l11;
si2=1194744U;
f594(i,si0,si1,si2);
UNREACHABLE;
L52:;
si0=l40;
si1=1U;
si0+=si1;
l40=si0;
si0=0U;
l21=si0;
si0=0U;
l15=si0;
L59:;
{
si0=l15;
si1=l11;
si0=si0 < si1;
if(si0){
goto L60;
}
si0=l15;
si1=l11;
si2=1194728U;
f594(i,si0,si1,si2);
UNREACHABLE;
L60:;
si0=l0;
si1=l15;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l25=si0;
si0=i32_load(&i->m0,(U64)si0+4U);
l23=si0;
si0=!(si0);
if(si0){
goto L68;
}
sj0=l29;
sj1=64ULL;
si0=sj0 < sj1;
l45=si0;
si0=!(si0);
if(si0){
goto L67;
}
si0=l25;
si0=i32_load(&i->m0,(U64)si0);
l22=si0;
si1=l23;
si2=-1U;
si1+=si2;
l2=si1;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l24=si0;
si0=l22;
sj0=i64_load(&i->m0,(U64)si0);
l51=sj0;
sj1=l29;
sj0>>=(sj1&63);
l20=sj0;
si0=l23;
si1=1U;
si0=si0 == si1;
if(si0){
goto L66;
}
si0=l24;
sj0=i64_load(&i->m0,(U64)si0);
l52=sj0;
si0=1U;
l9=si0;
si0=l2;
si1=1U;
si0&=si1;
l44=si0;
si0=l23;
si1=2U;
si0=si0 == si1;
if(si0){
goto L69;
}
si0=l2;
si1=-2U;
si0&=si1;
l28=si0;
si0=0U;
l26=si0;
si0=l22;
l9=si0;
L70:;
{
si0=l9;
si1=l9;
si2=8U;
si1+=si2;
l27=si1;
sj1=i64_load(&i->m0,(U64)si1);
l50=sj1;
sj2=l18;
sj1<<=(sj2&63);
sj2=l20;
sj1|=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l27;
si1=l9;
si2=16U;
si1+=si2;
l9=si1;
sj1=i64_load(&i->m0,(U64)si1);
l20=sj1;
sj2=l18;
sj1<<=(sj2&63);
sj2=l50;
sj3=l29;
sj2>>=(sj3&63);
sj1|=sj2;
i64_store(&i->m0,(U64)si0,sj1);
sj0=l20;
sj1=l29;
sj0>>=(sj1&63);
l20=sj0;
si0=l28;
si1=l26;
si2=2U;
si1+=si2;
l26=si1;
si0=si0 != si1;
if(si0){
goto L70;
}
}
si0=l26;
si1=1U;
si0+=si1;
l9=si0;
L69:;
si0=l44;
si0=!(si0);
if(si0){
goto L71;
}
si0=l22;
si1=l9;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l9=si0;
si1=-8U;
si0+=si1;
si1=l9;
sj1=i64_load(&i->m0,(U64)si1);
l50=sj1;
sj2=l18;
sj1<<=(sj2&63);
sj2=l20;
sj1|=sj2;
i64_store(&i->m0,(U64)si0,sj1);
sj0=l50;
sj1=l29;
sj0>>=(sj1&63);
l20=sj0;
L71:;
si0=l24;
sj1=l20;
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si0=!(si0);
if(si0){
goto L65;
}
si0=l23;
si1=3U;
si0<<=(si1&31);
si1=l22;
si0+=si1;
si1=-16U;
si0+=si1;
l9=si0;
si1=l9;
sj1=i64_load(&i->m0,(U64)si1);
sj2=l51;
sj3=l18;
sj2<<=(sj3&63);
l20=sj2;
sj1-=sj2;
l50=sj1;
i64_store(&i->m0,(U64)si0,sj1);
si0=l24;
sj1=l52;
sj2=l38;
sj1=(U64)((I64)sj1>>(sj2&63));
sj2=l20;
sj3=0ULL;
si2=sj2 != sj3;
sj2=(U64)(si2);
sj1-=sj2;
sj2=l50;
sj3=0ULL;
sj4=l20;
sj3-=sj4;
si2=sj2 < sj3;
sj2=(U64)(si2);
sj1+=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l25;
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l23=si0;
si1=-1U;
si0+=si1;
l9=si0;
si0=l23;
si0=!(si0);
if(si0){
goto L64;
}
si0=l25;
si0=i32_load(&i->m0,(U64)si0);
l27=si0;
si1=l9;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l28=si0;
sj0=i64_load(&i->m0,(U64)si0);
l20=sj0;
si0=!(sj0);
if(si0){
goto L61;
}
si0=l28;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l27;
sj0=i64_load(&i->m0,(U64)si0);
l50=sj0;
sj1=l20;
sj0-=sj1;
l51=sj0;
sj1=l50;
sj0^=sj1;
sj1=-1ULL;
si0=(U64)((I64)sj0>(I64)sj1);
if(si0){
goto L63;
}
sj0=0ULL;
sj1=l20;
sj0-=sj1;
l52=sj0;
sj1=-1ULL;
si0=(U64)((I64)sj0>(I64)sj1);
if(si0){
goto L72;
}
si0=l27;
sj1=l51;
i64_store(&i->m0,(U64)si0,sj1);
sj0=l50;
sj1=l20;
si0=sj0 >= sj1;
if(si0){
goto L62;
}
si0=l27;
si1=8U;
si0+=si1;
l9=si0;
si0=l23;
si1=3U;
si0<<=(si1&31);
si1=-8U;
si0+=si1;
l26=si0;
L73:;
{
si0=l26;
si0=!(si0);
if(si0){
goto L62;
}
si0=l9;
si1=l9;
sj1=i64_load(&i->m0,(U64)si1);
l20=sj1;
sj2=-1ULL;
sj1+=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l26;
si1=-8U;
si0+=si1;
l26=si0;
si0=l9;
si1=8U;
si0+=si1;
l9=si0;
sj0=l20;
si0=!(sj0);
if(si0){
goto L73;
}
goto L62;
}
L72:;
si0=l27;
sj1=l50;
sj2=l52;
sj1+=sj2;
l20=sj1;
i64_store(&i->m0,(U64)si0,sj1);
sj0=l20;
sj1=l50;
si0=sj0 >= sj1;
if(si0){
goto L62;
}
si0=l27;
si1=8U;
si0+=si1;
l9=si0;
si0=l23;
si1=3U;
si0<<=(si1&31);
si1=-8U;
si0+=si1;
l26=si0;
L74:;
{
si0=l26;
si0=!(si0);
if(si0){
goto L62;
}
si0=l9;
si1=l9;
sj1=i64_load(&i->m0,(U64)si1);
sj2=1ULL;
sj1+=sj2;
l20=sj1;
i64_store(&i->m0,(U64)si0,sj1);
si0=l26;
si1=-8U;
si0+=si1;
l26=si0;
si0=l9;
si1=8U;
si0+=si1;
l9=si0;
sj0=l20;
si0=!(sj0);
if(si0){
goto L74;
}
goto L62;
}
L68:;
si0=1189451U;
si1=43U;
si2=1189972U;
f604(i,si0,si1,si2);
UNREACHABLE;
L67:;
si0=1200324U;
si1=36U;
si2=1200668U;
f604(i,si0,si1,si2);
UNREACHABLE;
L66:;
si0=l24;
sj1=l20;
i64_store(&i->m0,(U64)si0,sj1);
L65:;
si0=1189451U;
si1=43U;
si2=1189988U;
f604(i,si0,si1,si2);
UNREACHABLE;
L64:;
si0=l9;
si1=0U;
si2=1189824U;
f594(i,si0,si1,si2);
UNREACHABLE;
L63:;
si0=l27;
sj1=l51;
i64_store(&i->m0,(U64)si0,sj1);
L62:;
si0=l28;
sj0=i64_load(&i->m0,(U64)si0);
l20=sj0;
si0=!(sj0);
if(si0){
goto L61;
}
si0=l28;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l27;
sj0=i64_load(&i->m0,(U64)si0);
l50=sj0;
sj1=l20;
sj0-=sj1;
l51=sj0;
sj1=l50;
sj0^=sj1;
sj1=-1ULL;
si0=(U64)((I64)sj0>(I64)sj1);
if(si0){
goto L76;
}
sj0=0ULL;
sj1=l20;
sj0-=sj1;
l52=sj0;
sj1=-1ULL;
si0=(U64)((I64)sj0>(I64)sj1);
if(si0){
goto L77;
}
si0=l27;
sj1=l51;
i64_store(&i->m0,(U64)si0,sj1);
sj0=l50;
sj1=l20;
si0=sj0 >= sj1;
if(si0){
goto L75;
}
si0=l27;
si1=8U;
si0+=si1;
l9=si0;
si0=l23;
si1=3U;
si0<<=(si1&31);
si1=-8U;
si0+=si1;
l26=si0;
L78:;
{
si0=l26;
si0=!(si0);
if(si0){
goto L75;
}
si0=l9;
si1=l9;
sj1=i64_load(&i->m0,(U64)si1);
l20=sj1;
sj2=-1ULL;
sj1+=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l26;
si1=-8U;
si0+=si1;
l26=si0;
si0=l9;
si1=8U;
si0+=si1;
l9=si0;
sj0=l20;
si0=!(sj0);
if(si0){
goto L78;
}
goto L75;
}
L77:;
si0=l27;
sj1=l50;
sj2=l52;
sj1+=sj2;
l20=sj1;
i64_store(&i->m0,(U64)si0,sj1);
sj0=l20;
sj1=l50;
si0=sj0 >= sj1;
if(si0){
goto L75;
}
si0=l27;
si1=8U;
si0+=si1;
l9=si0;
si0=l23;
si1=3U;
si0<<=(si1&31);
si1=-8U;
si0+=si1;
l26=si0;
L79:;
{
si0=l26;
si0=!(si0);
if(si0){
goto L75;
}
si0=l9;
si1=l9;
sj1=i64_load(&i->m0,(U64)si1);
sj2=1ULL;
sj1+=sj2;
l20=sj1;
i64_store(&i->m0,(U64)si0,sj1);
si0=l26;
si1=-8U;
si0+=si1;
l26=si0;
si0=l9;
si1=8U;
si0+=si1;
l9=si0;
sj0=l20;
si0=!(sj0);
if(si0){
goto L79;
}
goto L75;
}
L76:;
si0=l27;
sj1=l51;
i64_store(&i->m0,(U64)si0,sj1);
L75:;
si0=l28;
sj0=i64_load(&i->m0,(U64)si0);
sj1=-1ULL;
si0=sj0 != sj1;
if(si0){
goto L61;
}
si0=l28;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l27;
sj0=i64_load(&i->m0,(U64)si0);
l50=sj0;
sj1=1ULL;
sj0+=sj1;
l20=sj0;
sj1=l50;
sj0^=sj1;
sj1=0ULL;
si0=(U64)((I64)sj0<(I64)sj1);
if(si0){
goto L80;
}
si0=l27;
sj1=l20;
i64_store(&i->m0,(U64)si0,sj1);
goto L61;
L80:;
si0=l27;
sj1=l20;
i64_store(&i->m0,(U64)si0,sj1);
sj0=l20;
sj1=0ULL;
si0=sj0 != sj1;
if(si0){
goto L61;
}
si0=l27;
si1=8U;
si0+=si1;
l9=si0;
si0=l23;
si1=3U;
si0<<=(si1&31);
si1=-8U;
si0+=si1;
l26=si0;
L81:;
{
si0=l26;
si0=!(si0);
if(si0){
goto L61;
}
si0=l9;
si1=l9;
sj1=i64_load(&i->m0,(U64)si1);
sj2=1ULL;
sj1+=sj2;
l20=sj1;
i64_store(&i->m0,(U64)si0,sj1);
si0=l26;
si1=-8U;
si0+=si1;
l26=si0;
si0=l9;
si1=8U;
si0+=si1;
l9=si0;
sj0=l20;
si0=!(sj0);
if(si0){
goto L81;
}
}
L61:;
si0=l15;
si1=l8;
si0+=si1;
l15=si0;
si0=l21;
si1=1U;
si0+=si1;
l21=si0;
si1=l30;
si0=si0 != si1;
if(si0){
goto L59;
}
}
si0=l43;
if(si0){
goto L82;
}
si0=0U;
l21=si0;
si0=0U;
l15=si0;
L83:;
{
si0=l15;
si1=l41;
si0=si0 >= si1;
if(si0){
goto L92;
}
si0=l42;
si1=l15;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l25=si0;
si0=i32_load(&i->m0,(U64)si0+4U);
l23=si0;
si0=!(si0);
if(si0){
goto L91;
}
si0=l45;
si0=!(si0);
if(si0){
goto L90;
}
si0=l25;
si0=i32_load(&i->m0,(U64)si0);
l22=si0;
si1=l23;
si2=-1U;
si1+=si2;
l2=si1;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l24=si0;
si0=l22;
sj0=i64_load(&i->m0,(U64)si0);
l51=sj0;
sj1=l29;
sj0>>=(sj1&63);
l20=sj0;
si0=l23;
si1=1U;
si0=si0 == si1;
if(si0){
goto L89;
}
si0=l24;
sj0=i64_load(&i->m0,(U64)si0);
l52=sj0;
si0=1U;
l9=si0;
si0=l2;
si1=1U;
si0&=si1;
l44=si0;
si0=l23;
si1=2U;
si0=si0 == si1;
if(si0){
goto L93;
}
si0=l2;
si1=-2U;
si0&=si1;
l28=si0;
si0=0U;
l26=si0;
si0=l22;
l9=si0;
L94:;
{
si0=l9;
si1=l9;
si2=8U;
si1+=si2;
l27=si1;
sj1=i64_load(&i->m0,(U64)si1);
l50=sj1;
sj2=l18;
sj1<<=(sj2&63);
sj2=l20;
sj1|=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l27;
si1=l9;
si2=16U;
si1+=si2;
l9=si1;
sj1=i64_load(&i->m0,(U64)si1);
l20=sj1;
sj2=l18;
sj1<<=(sj2&63);
sj2=l50;
sj3=l29;
sj2>>=(sj3&63);
sj1|=sj2;
i64_store(&i->m0,(U64)si0,sj1);
sj0=l20;
sj1=l29;
sj0>>=(sj1&63);
l20=sj0;
si0=l28;
si1=l26;
si2=2U;
si1+=si2;
l26=si1;
si0=si0 != si1;
if(si0){
goto L94;
}
}
si0=l26;
si1=1U;
si0+=si1;
l9=si0;
L93:;
si0=l44;
si0=!(si0);
if(si0){
goto L95;
}
si0=l22;
si1=l9;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l9=si0;
si1=-8U;
si0+=si1;
si1=l9;
sj1=i64_load(&i->m0,(U64)si1);
l50=sj1;
sj2=l18;
sj1<<=(sj2&63);
sj2=l20;
sj1|=sj2;
i64_store(&i->m0,(U64)si0,sj1);
sj0=l50;
sj1=l29;
sj0>>=(sj1&63);
l20=sj0;
L95:;
si0=l24;
sj1=l20;
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si0=!(si0);
if(si0){
goto L88;
}
si0=l23;
si1=3U;
si0<<=(si1&31);
si1=l22;
si0+=si1;
si1=-16U;
si0+=si1;
l9=si0;
si1=l9;
sj1=i64_load(&i->m0,(U64)si1);
sj2=l51;
sj3=l18;
sj2<<=(sj3&63);
l20=sj2;
sj1-=sj2;
l50=sj1;
i64_store(&i->m0,(U64)si0,sj1);
si0=l24;
sj1=l52;
sj2=l38;
sj1=(U64)((I64)sj1>>(sj2&63));
sj2=l20;
sj3=0ULL;
si2=sj2 != sj3;
sj2=(U64)(si2);
sj1-=sj2;
sj2=l50;
sj3=0ULL;
sj4=l20;
sj3-=sj4;
si2=sj2 < sj3;
sj2=(U64)(si2);
sj1+=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l25;
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l23=si0;
si1=-1U;
si0+=si1;
l9=si0;
si0=l23;
si0=!(si0);
if(si0){
goto L87;
}
si0=l25;
si0=i32_load(&i->m0,(U64)si0);
l27=si0;
si1=l9;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l28=si0;
sj0=i64_load(&i->m0,(U64)si0);
l20=sj0;
si0=!(sj0);
if(si0){
goto L84;
}
si0=l28;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l27;
sj0=i64_load(&i->m0,(U64)si0);
l50=sj0;
sj1=l20;
sj0-=sj1;
l51=sj0;
sj1=l50;
sj0^=sj1;
sj1=-1ULL;
si0=(U64)((I64)sj0>(I64)sj1);
if(si0){
goto L86;
}
sj0=0ULL;
sj1=l20;
sj0-=sj1;
l52=sj0;
sj1=-1ULL;
si0=(U64)((I64)sj0>(I64)sj1);
if(si0){
goto L96;
}
si0=l27;
sj1=l51;
i64_store(&i->m0,(U64)si0,sj1);
sj0=l50;
sj1=l20;
si0=sj0 >= sj1;
if(si0){
goto L85;
}
si0=l27;
si1=8U;
si0+=si1;
l9=si0;
si0=l23;
si1=3U;
si0<<=(si1&31);
si1=-8U;
si0+=si1;
l26=si0;
L97:;
{
si0=l26;
si0=!(si0);
if(si0){
goto L85;
}
si0=l9;
si1=l9;
sj1=i64_load(&i->m0,(U64)si1);
l20=sj1;
sj2=-1ULL;
sj1+=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l26;
si1=-8U;
si0+=si1;
l26=si0;
si0=l9;
si1=8U;
si0+=si1;
l9=si0;
sj0=l20;
si0=!(sj0);
if(si0){
goto L97;
}
goto L85;
}
L96:;
si0=l27;
sj1=l50;
sj2=l52;
sj1+=sj2;
l20=sj1;
i64_store(&i->m0,(U64)si0,sj1);
sj0=l20;
sj1=l50;
si0=sj0 >= sj1;
if(si0){
goto L85;
}
si0=l27;
si1=8U;
si0+=si1;
l9=si0;
si0=l23;
si1=3U;
si0<<=(si1&31);
si1=-8U;
si0+=si1;
l26=si0;
L98:;
{
si0=l26;
si0=!(si0);
if(si0){
goto L85;
}
si0=l9;
si1=l9;
sj1=i64_load(&i->m0,(U64)si1);
sj2=1ULL;
sj1+=sj2;
l20=sj1;
i64_store(&i->m0,(U64)si0,sj1);
si0=l26;
si1=-8U;
si0+=si1;
l26=si0;
si0=l9;
si1=8U;
si0+=si1;
l9=si0;
sj0=l20;
si0=!(sj0);
if(si0){
goto L98;
}
goto L85;
}
L92:;
si0=l15;
si1=l41;
si2=1194712U;
f594(i,si0,si1,si2);
UNREACHABLE;
L91:;
si0=1189451U;
si1=43U;
si2=1189972U;
f604(i,si0,si1,si2);
UNREACHABLE;
L90:;
si0=1200324U;
si1=36U;
si2=1200668U;
f604(i,si0,si1,si2);
UNREACHABLE;
L89:;
si0=l24;
sj1=l20;
i64_store(&i->m0,(U64)si0,sj1);
L88:;
si0=1189451U;
si1=43U;
si2=1189988U;
f604(i,si0,si1,si2);
UNREACHABLE;
L87:;
si0=l9;
si1=0U;
si2=1189824U;
f594(i,si0,si1,si2);
UNREACHABLE;
L86:;
si0=l27;
sj1=l51;
i64_store(&i->m0,(U64)si0,sj1);
L85:;
si0=l28;
sj0=i64_load(&i->m0,(U64)si0);
l20=sj0;
si0=!(sj0);
if(si0){
goto L84;
}
si0=l28;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l27;
sj0=i64_load(&i->m0,(U64)si0);
l50=sj0;
sj1=l20;
sj0-=sj1;
l51=sj0;
sj1=l50;
sj0^=sj1;
sj1=-1ULL;
si0=(U64)((I64)sj0>(I64)sj1);
if(si0){
goto L100;
}
sj0=0ULL;
sj1=l20;
sj0-=sj1;
l52=sj0;
sj1=-1ULL;
si0=(U64)((I64)sj0>(I64)sj1);
if(si0){
goto L101;
}
si0=l27;
sj1=l51;
i64_store(&i->m0,(U64)si0,sj1);
sj0=l50;
sj1=l20;
si0=sj0 >= sj1;
if(si0){
goto L99;
}
si0=l27;
si1=8U;
si0+=si1;
l9=si0;
si0=l23;
si1=3U;
si0<<=(si1&31);
si1=-8U;
si0+=si1;
l26=si0;
L102:;
{
si0=l26;
si0=!(si0);
if(si0){
goto L99;
}
si0=l9;
si1=l9;
sj1=i64_load(&i->m0,(U64)si1);
l20=sj1;
sj2=-1ULL;
sj1+=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l26;
si1=-8U;
si0+=si1;
l26=si0;
si0=l9;
si1=8U;
si0+=si1;
l9=si0;
sj0=l20;
si0=!(sj0);
if(si0){
goto L102;
}
goto L99;
}
L101:;
si0=l27;
sj1=l50;
sj2=l52;
sj1+=sj2;
l20=sj1;
i64_store(&i->m0,(U64)si0,sj1);
sj0=l20;
sj1=l50;
si0=sj0 >= sj1;
if(si0){
goto L99;
}
si0=l27;
si1=8U;
si0+=si1;
l9=si0;
si0=l23;
si1=3U;
si0<<=(si1&31);
si1=-8U;
si0+=si1;
l26=si0;
L103:;
{
si0=l26;
si0=!(si0);
if(si0){
goto L99;
}
si0=l9;
si1=l9;
sj1=i64_load(&i->m0,(U64)si1);
sj2=1ULL;
sj1+=sj2;
l20=sj1;
i64_store(&i->m0,(U64)si0,sj1);
si0=l26;
si1=-8U;
si0+=si1;
l26=si0;
si0=l9;
si1=8U;
si0+=si1;
l9=si0;
sj0=l20;
si0=!(sj0);
if(si0){
goto L103;
}
goto L99;
}
L100:;
si0=l27;
sj1=l51;
i64_store(&i->m0,(U64)si0,sj1);
L99:;
si0=l28;
sj0=i64_load(&i->m0,(U64)si0);
sj1=-1ULL;
si0=sj0 != sj1;
if(si0){
goto L84;
}
si0=l28;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l27;
sj0=i64_load(&i->m0,(U64)si0);
l50=sj0;
sj1=1ULL;
sj0+=sj1;
l20=sj0;
sj1=l50;
sj0^=sj1;
sj1=0ULL;
si0=(U64)((I64)sj0<(I64)sj1);
if(si0){
goto L104;
}
si0=l27;
sj1=l20;
i64_store(&i->m0,(U64)si0,sj1);
goto L84;
L104:;
si0=l27;
sj1=l20;
i64_store(&i->m0,(U64)si0,sj1);
sj0=l20;
sj1=0ULL;
si0=sj0 != sj1;
if(si0){
goto L84;
}
si0=l27;
si1=8U;
si0+=si1;
l9=si0;
si0=l23;
si1=3U;
si0<<=(si1&31);
si1=-8U;
si0+=si1;
l26=si0;
L105:;
{
si0=l26;
si0=!(si0);
if(si0){
goto L84;
}
si0=l9;
si1=l9;
sj1=i64_load(&i->m0,(U64)si1);
sj2=1ULL;
sj1+=sj2;
l20=sj1;
i64_store(&i->m0,(U64)si0,sj1);
si0=l26;
si1=-8U;
si0+=si1;
l26=si0;
si0=l9;
si1=8U;
si0+=si1;
l9=si0;
sj0=l20;
si0=!(sj0);
if(si0){
goto L105;
}
}
L84:;
si0=l15;
si1=l8;
si0+=si1;
l15=si0;
si0=l21;
si1=1U;
si0+=si1;
l21=si0;
si1=l31;
si0=si0 != si1;
if(si0){
goto L83;
}
}
L82:;
si0=l39;
si1=l34;
si0+=si1;
l39=si0;
si0=l37;
si1=8U;
si0+=si1;
l37=si0;
si0=l0;
si1=8U;
si0+=si1;
l0=si0;
si0=l1;
si1=-1U;
si0+=si1;
l1=si0;
si0=l40;
si1=l8;
si0=si0 != si1;
if(si0){
goto L9;
}
}
si0=l10;
si1=32U;
si0+=si1;
i->g0=si0;
goto L0;
L5:;
si0=l10;
si1=20U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l10;
si1=1U;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l10;
si1=1206456U;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l10;
si1=1206464U;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l10;
si1=8U;
si0+=si1;
si1=1206592U;
f614(i,si0,si1);
UNREACHABLE;
L4:;
si0=l10;
si1=20U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l10;
si1=1U;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l10;
si1=1206456U;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l10;
si1=1206464U;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l10;
si1=8U;
si0+=si1;
si1=1206592U;
f614(i,si0,si1);
UNREACHABLE;
L3:;
si0=l28;
si1=l23;
si2=1194888U;
f594(i,si0,si1,si2);
UNREACHABLE;
L2:;
si0=l27;
si1=l23;
si2=1194888U;
f594(i,si0,si1,si2);
UNREACHABLE;
L1:;
si0=1U;
si1=0U;
si2=1194872U;
f593(i,si0,si1,si2);
UNREACHABLE;
L0:;
}

U32 f1005(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U64 l7=0;
U32 l8=0;
U32 l9=0;
U32 l10=0;
U64 l11=0;
U64 l12=0;
U64 l13=0;
U32 l14=0;
U32 l15=0;
U32 si0,si1,si2,si3,si4;
U64 sj0,sj1,sj2,sj3,sj4;
si0=i->g0;
si1=32U;
si0-=si1;
l3=si0;
i->g0=si0;
si0=1U;
l4=si0;
si0=l0;
si1=6U;
si0<<=(si1&31);
si1=-1U;
si0+=si1;
l5=si0;
si1=28U;
si0=DIV_U(si0,si1);
si1=l1;
si2=6U;
si1<<=(si2&31);
si2=-1U;
si1+=si2;
l6=si1;
si2=28U;
si1=DIV_U(si1,si2);
si0+=si1;
si1=1U;
si0+=si1;
l1=si0;
si1=129U;
si0=si0 < si1;
if(si0){
goto L7;
}
si0=l1;
si1=257U;
si0=si0 >= si1;
if(si0){
goto L6;
}
sj0=6ULL;
l7=sj0;
si0=0U;
l1=si0;
goto L5;
L7:;
si0=1194964U;
si1=38U;
si2=1195004U;
f604(i,si0,si1,si2);
UNREACHABLE;
L6:;
si0=64U;
l1=si0;
sj0=6ULL;
l7=sj0;
si0=1U;
l4=si0;
L8:;
{
si0=l1;
si1=l4;
si2=1U;
si1=si1 != si2;
l0=si1;
si0<<=(si1&31);
l1=si0;
si1=l4;
si2=1U;
si1=si1 == si2;
l8=si1;
si0<<=(si1&31);
sj1=l7;
si2=l0;
sj2=(U64)(si2);
sj1+=sj2;
l7=sj1;
si1=(U32)(sj1);
l9=si1;
si2=-1U;
si1^=si2;
si0+=si1;
l10=si0;
si1=2U;
si0=si0 >= si1;
if(si0){
goto L9;
}
si0=1192032U;
si1=25U;
si2=1194948U;
f604(i,si0,si1,si2);
UNREACHABLE;
L9:;
si0=1U;
si1=2U;
si2=l0;
si0=si2?si0:si1;
l4=si0;
si0=l5;
si1=l10;
si2=1U;
si1>>=(si2&31);
l0=si1;
si0=DIV_U(si0,si1);
si1=l6;
si2=l0;
si1=DIV_U(si1,si2);
si0+=si1;
si1=1U;
si0+=si1;
l0=si0;
si1=l1;
si2=2U;
si1<<=(si2&31);
si0=si0 > si1;
if(si0){
goto L8;
}
}
sj0=l7;
sj1=11ULL;
si0=sj0 >= sj1;
if(si0){
goto L10;
}
si0=l9;
si1=-6U;
si0+=si1;
l1=si0;
si1=5U;
si0=si0 < si1;
if(si0){
goto L5;
}
si0=l1;
si1=5U;
si2=1194916U;
f594(i,si0,si1,si2);
UNREACHABLE;
L10:;
sj0=l7;
si1=l0;
si2=l1;
si3=3U;
si2*=si3;
si1=si1 <= si2;
l1=si1;
sj1=(U64)(si1);
sj0-=sj1;
l7=sj0;
sj1=32ULL;
si0=sj0 >= sj1;
if(si0){
goto L16;
}
si0=3U;
si1=l8;
si0<<=(si1&31);
si1=l4;
si2=l1;
si0=si2?si0:si1;
sj1=l7;
si1=(U32)(sj1);
l1=si1;
si0<<=(si1&31);
l4=si0;
si1=l1;
si2=-1U;
si1^=si2;
si0+=si1;
si1=7U;
si0>>=(si1&31);
si1=l2;
si0=si0 <= si1;
if(si0){
goto L14;
}
si0=l4;
si0=!(si0);
if(si0){
goto L15;
}
sj0=4ULL;
l11=sj0;
si0=32U;
si1=l4;
si1=I32_CLZ(si1);
si0-=si1;
sj0=(U64)(si0);
si1=l4;
si1=I32_POPCNT(si1);
si2=1U;
si1=si1 == si2;
sj1=(U64)(si1);
sj0-=sj1;
l7=sj0;
sj1=12ULL;
si0=sj0 < sj1;
if(si0){
goto L17;
}
sj0=l7;
si0=(U32)(sj0);
l0=si0;
si1=30U;
si2=l0;
si3=30U;
si2=si2 < si3;
si0=si2?si0:si1;
si1=1193420U;
si0+=si1;
sj0=i64_load8_u(&i->m0,(U64)si0);
l11=sj0;
L17:;
sj0=l7;
sj1=1ULL;
sj0>>=(sj1&63);
l12=sj0;
sj1=l11;
sj0-=sj1;
l13=sj0;
sj1=32ULL;
si0=sj0 >= sj1;
if(si0){
goto L13;
}
sj0=4ULL;
l11=sj0;
sj0=l7;
sj1=12ULL;
si0=sj0 < sj1;
if(si0){
goto L18;
}
sj0=l7;
si0=(U32)(sj0);
l0=si0;
si1=30U;
si2=l0;
si3=30U;
si2=si2 < si3;
si0=si2?si0:si1;
si1=1193420U;
si0+=si1;
sj0=i64_load8_u(&i->m0,(U64)si0);
l11=sj0;
L18:;
sj0=l12;
sj1=l11;
sj0-=sj1;
l7=sj0;
sj1=32ULL;
si0=sj0 >= sj1;
if(si0){
goto L12;
}
si0=l4;
sj1=l13;
si1=(U32)(sj1);
l0=si1;
si2=1U;
si1<<=(si2&31);
si0>>=(si1&31);
si1=l0;
si0<<=(si1&31);
si1=6U;
si0>>=(si1&31);
l5=si0;
si1=1U;
si0+=si1;
si1=2U;
si2=l0;
si1<<=(si2&31);
l10=si1;
si2=3U;
si1+=si2;
si0*=si1;
si1=l10;
si0+=si1;
si1=1U;
sj2=l7;
si2=(U32)(sj2);
l10=si2;
si1<<=(si2&31);
si2=l5;
si3=2U;
si2+=si3;
si3=l0;
si2<<=(si3&31);
si1+=si2;
si2=1U;
si1<<=(si2&31);
si0+=si1;
si1=l4;
si2=l10;
si3=1U;
si2<<=(si3&31);
si1>>=(si2&31);
si2=l10;
si1<<=(si2&31);
l0=si1;
si2=6U;
si1>>=(si2&31);
si2=2U;
si1+=si2;
l10=si1;
si2=l0;
si3=63U;
si2+=si3;
si3=6U;
si2>>=(si3&31);
l0=si2;
si2=f1120(i,si2);
si3=l0;
si4=1U;
si3<<=(si4&31);
si2+=si3;
l0=si2;
si3=l10;
si4=l0;
si3=si3 > si4;
si1=si3?si1:si2;
si0+=si1;
l10=si0;
goto L11;
L16:;
si0=1206624U;
si1=32U;
si2=1206784U;
f604(i,si0,si1,si2);
UNREACHABLE;
L15:;
si0=l3;
si1=20U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=1U;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l3;
si1=1206456U;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l3;
si1=1206464U;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l3;
si1=8U;
si0+=si1;
si1=1206592U;
f614(i,si0,si1);
UNREACHABLE;
L14:;
si0=l4;
si1=63U;
si0+=si1;
si1=6U;
si0>>=(si1&31);
l0=si0;
si0=f1120(i,si0);
si1=l0;
si2=1U;
si1<<=(si2&31);
si0+=si1;
l10=si0;
goto L11;
L13:;
si0=1206624U;
si1=32U;
si2=1206784U;
f604(i,si0,si1,si2);
UNREACHABLE;
L12:;
si0=1206624U;
si1=32U;
si2=1206784U;
f604(i,si0,si1,si2);
UNREACHABLE;
L11:;
si0=l10;
si1=l4;
si2=6U;
si1>>=(si2&31);
si2=1U;
si1+=si2;
l0=si1;
si2=l10;
si3=l0;
si2=si2 > si3;
si0=si2?si0:si1;
l4=si0;
si0=l0;
si1=8U;
si2=l1;
si1<<=(si2&31);
si2=3U;
si1|=si2;
si0*=si1;
l1=si0;
goto L4;
L5:;
sj0=l7;
si1=l4;
si2=l1;
si3=1U;
si2<<=(si3&31);
si1+=si2;
si2=1194903U;
si1+=si2;
si1=i32_load8_u(&i->m0,(U64)si1);
l1=si1;
sj1=(U64)(si1);
sj0-=sj1;
l7=sj0;
sj1=32ULL;
si0=sj0 >= sj1;
if(si0){
goto L3;
}
si0=l1;
si1=16U;
si0=si0 >= si1;
if(si0){
goto L2;
}
si0=l4;
si1=l1;
si2=1U;
si1<<=(si2&31);
si0<<=(si1&31);
l4=si0;
si1=1U;
si2=6U;
sj3=l7;
si3=(U32)(sj3);
l9=si3;
si2-=si3;
si1<<=(si2&31);
si2=1U;
sj3=l7;
sj4=6ULL;
si3=sj3 < sj4;
si1=si3?si1:si2;
l1=si1;
si0=si0 <= si1;
if(si0){
goto L19;
}
si0=0U;
si1=l1;
si0-=si1;
l2=si0;
si0=4U;
si1=l9;
si0<<=(si1&31);
l14=si0;
si0=l9;
si1=-1U;
si0^=si1;
l15=si0;
L20:;
{
si0=l2;
si1=l4;
si0+=si1;
l0=si0;
si1=l9;
si0<<=(si1&31);
si1=l15;
si0+=si1;
l10=si0;
si1=1U;
si0=si0 <= si1;
if(si0){
goto L1;
}
si0=l4;
si1=l1;
si0-=si1;
l4=si0;
si0=l6;
si1=l10;
si2=1U;
si1>>=(si2&31);
l10=si1;
si0=DIV_U(si0,si1);
l8=si0;
si0=l5;
si1=l10;
si0=DIV_U(si0,si1);
l10=si0;
si0=l0;
si1=l1;
si0=si0 <= si1;
if(si0){
goto L21;
}
si0=l10;
si1=l8;
si0+=si1;
si1=1U;
si0+=si1;
si1=l14;
si0=si0 <= si1;
if(si0){
goto L20;
}
L21:;
}
si0=l1;
si1=l4;
si0+=si1;
l4=si0;
L19:;
si0=l4;
si1=l9;
si0<<=(si1&31);
si1=6U;
si0>>=(si1&31);
si1=1U;
si0+=si1;
l4=si0;
si0=l4;
si1=l4;
si2=1U;
si1<<=(si2&31);
si2=l4;
si2=f1120(i,si2);
si1+=si2;
l1=si1;
si2=l4;
si3=l1;
si2=si2 > si3;
si0=si2?si0:si1;
l1=si0;
si0=l4;
si1=8U;
si2=l9;
si1<<=(si2&31);
si2=3U;
si1|=si2;
si0*=si1;
l4=si0;
L4:;
si0=l3;
si1=32U;
si0+=si1;
i->g0=si0;
si0=l4;
si1=l1;
si0+=si1;
goto L0;
L3:;
si0=1206624U;
si1=32U;
si2=1206784U;
f604(i,si0,si1,si2);
UNREACHABLE;
L2:;
si0=1206624U;
si1=32U;
si2=1206784U;
f604(i,si0,si1,si2);
UNREACHABLE;
L1:;
si0=1192032U;
si1=25U;
si2=1194932U;
f604(i,si0,si1,si2);
UNREACHABLE;
L0:;
return si0;
}

void f1006(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4,U32 l5,U32 l6,U32 l7,U32 l8) {
U32 l9=0;
U32 l10=0;
U32 l11=0;
U32 l12=0;
U32 l13=0;
U64 l14=0;
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
U32 l30=0;
U32 l31=0;
U32 l32=0;
U32 l33=0;
U32 l34=0;
U32 l35=0;
U32 l36=0;
U32 l37=0;
U32 l38=0;
U32 l39=0;
U32 l40=0;
U32 l41=0;
U32 l42=0;
U32 l43=0;
U32 l44=0;
U32 l45=0;
U64 l46=0;
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
U64 l57=0;
U64 l58=0;
U64 l59=0;
U32 si0,si1,si2,si3,si4,si5,si6,si7,si8,si9,si10,si11,si12,si13,si14,si15,si16,si17,si18;
U64 sj0,sj1,sj2,sj3,sj4,sj5,sj6;
si0=i->g0;
si1=112U;
si0-=si1;
l9=si0;
i->g0=si0;
si0=l9;
si1=l3;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l3;
si0=!(si0);
if(si0){
goto L16;
}
si0=l9;
si1=l5;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l5;
si0=!(si0);
if(si0){
goto L15;
}
si0=1U;
l10=si0;
si0=l3;
si1=6U;
si0<<=(si1&31);
si1=-1U;
si0+=si1;
l11=si0;
si1=28U;
si0=DIV_U(si0,si1);
si1=l5;
si2=6U;
si1<<=(si2&31);
si2=-1U;
si1+=si2;
l12=si1;
si2=28U;
si1=DIV_U(si1,si2);
si0+=si1;
si1=1U;
si0+=si1;
l13=si0;
si1=129U;
si0=si0 < si1;
if(si0){
goto L18;
}
si0=l13;
si1=257U;
si0=si0 >= si1;
if(si0){
goto L17;
}
sj0=6ULL;
l14=sj0;
si0=0U;
l13=si0;
goto L13;
L18:;
si0=1194964U;
si1=38U;
si2=1196004U;
f604(i,si0,si1,si2);
UNREACHABLE;
L17:;
si0=64U;
l13=si0;
sj0=6ULL;
l14=sj0;
si0=1U;
l10=si0;
L19:;
{
si0=l13;
si1=l10;
si2=1U;
si1=si1 != si2;
l15=si1;
si0<<=(si1&31);
l13=si0;
si1=l10;
si2=1U;
si1=si1 == si2;
l16=si1;
si0<<=(si1&31);
sj1=l14;
si2=l15;
sj2=(U64)(si2);
sj1+=sj2;
l14=sj1;
si1=(U32)(sj1);
l17=si1;
si2=-1U;
si1^=si2;
si0+=si1;
l18=si0;
si1=2U;
si0=si0 >= si1;
if(si0){
goto L20;
}
si0=1192032U;
si1=25U;
si2=1195988U;
f604(i,si0,si1,si2);
UNREACHABLE;
L20:;
si0=1U;
si1=2U;
si2=l15;
si0=si2?si0:si1;
l10=si0;
si0=l11;
si1=l18;
si2=1U;
si1>>=(si2&31);
l15=si1;
si0=DIV_U(si0,si1);
si1=l12;
si2=l15;
si1=DIV_U(si1,si2);
si0+=si1;
si1=1U;
si0+=si1;
l15=si0;
si1=l13;
si2=2U;
si1<<=(si2&31);
si0=si0 > si1;
if(si0){
goto L19;
}
}
sj0=l14;
sj1=11ULL;
si0=sj0 >= sj1;
if(si0){
goto L14;
}
si0=l17;
si1=-6U;
si0+=si1;
l13=si0;
si1=5U;
si0=si0 < si1;
if(si0){
goto L13;
}
si0=l13;
si1=5U;
si2=1195660U;
f594(i,si0,si1,si2);
UNREACHABLE;
L16:;
si0=l9;
si1=0U;
i32_store(&i->m0,(U64)si0+88U,si1);
si0=1U;
si1=l9;
si2=4U;
si1+=si2;
si2=1189840U;
si3=l9;
si4=88U;
si3+=si4;
si4=1195020U;
f1250(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L15:;
si0=l9;
si1=0U;
i32_store(&i->m0,(U64)si0+88U,si1);
si0=1U;
si1=l9;
si2=8U;
si1+=si2;
si2=1189840U;
si3=l9;
si4=88U;
si3+=si4;
si4=1195036U;
f1250(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L14:;
sj0=l14;
si1=l15;
si2=l13;
si3=3U;
si2*=si3;
si1=si1 <= si2;
l13=si1;
sj1=(U64)(si1);
sj0-=sj1;
l14=sj0;
sj1=32ULL;
si0=sj0 >= sj1;
if(si0){
goto L26;
}
si0=3U;
si1=l16;
si0<<=(si1&31);
si1=l10;
si2=l13;
si0=si2?si0:si1;
l19=si0;
sj1=l14;
si1=(U32)(sj1);
l17=si1;
si0<<=(si1&31);
l20=si0;
si1=l17;
si2=-1U;
si1^=si2;
si0+=si1;
l21=si0;
si1=2U;
si0=si0 < si1;
if(si0){
goto L27;
}
si0=l12;
si1=l21;
si2=1U;
si1>>=(si2&31);
l22=si1;
si0=DIV_U(si0,si1);
l23=si0;
si0=l11;
si1=l22;
si0=DIV_U(si0,si1);
l24=si0;
si0=l8;
si1=l20;
si2=6U;
si1>>=(si2&31);
l25=si1;
si2=1U;
si1+=si2;
l26=si1;
si2=l17;
si1<<=(si2&31);
l27=si1;
si2=3U;
si1<<=(si2&31);
si2=l26;
si3=3U;
si2*=si3;
si1+=si2;
l28=si1;
si0=si0 < si1;
if(si0){
goto L25;
}
si0=l28;
si1=l27;
si2=2U;
si1<<=(si2&31);
l12=si1;
si0=si0 < si1;
if(si0){
goto L24;
}
si0=4U;
si1=l17;
si0<<=(si1&31);
l16=si0;
si0=l28;
si1=l12;
si0-=si1;
l13=si0;
si0=l7;
si1=l12;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l29=si0;
si0=l17;
si1=30U;
si0=si0 < si1;
if(si0){
goto L28;
}
si0=l9;
si1=0U;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l9;
si1=l16;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l9;
si1=4U;
i32_store(&i->m0,(U64)si0+12U,si1);
goto L21;
L28:;
si0=l16;
si1=268435455U;
si0=si0 > si1;
if(si0){
goto L12;
}
si0=32U;
si1=l17;
si0<<=(si1&31);
l10=si0;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L12;
}
si0=4U;
l15=si0;
si0=l17;
si1=26U;
si0=si0 > si1;
if(si0){
goto L29;
}
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=l10;
si0=f15022(i,si0);
l15=si0;
si0=!(si0);
if(si0){
goto L23;
}
L29:;
si0=0U;
l10=si0;
si0=l9;
si1=0U;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l9;
si1=l16;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l9;
si1=l15;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l25;
si1=3U;
si0<<=(si1&31);
si1=8U;
si0+=si1;
l18=si0;
si0=l16;
l15=si0;
L30:;
{
si0=l25;
si1=l13;
si0=si0 >= si1;
if(si0){
goto L22;
}
si0=l10;
si1=l9;
si1=i32_load(&i->m0,(U64)si1+16U);
si0=si0 != si1;
if(si0){
goto L31;
}
si0=l9;
si1=12U;
si0+=si1;
si1=l10;
f1300(i,si0,si1);
si0=l9;
si0=i32_load(&i->m0,(U64)si0+20U);
l10=si0;
L31:;
si0=l13;
si1=l26;
si0-=si1;
l13=si0;
si0=l9;
si0=i32_load(&i->m0,(U64)si0+12U);
si1=l10;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l10=si0;
si1=l26;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l10;
si1=l29;
i32_store(&i->m0,(U64)si0,si1);
si0=l9;
si1=l9;
si1=i32_load(&i->m0,(U64)si1+20U);
si2=1U;
si1+=si2;
l10=si1;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l29;
si1=l18;
si0+=si1;
l29=si0;
si0=l15;
si1=-1U;
si0+=si1;
l15=si0;
si0=!(si0);
if(si0){
goto L21;
}
goto L30;
}
L27:;
si0=1192032U;
si1=25U;
si2=1195052U;
f604(i,si0,si1,si2);
UNREACHABLE;
L26:;
si0=1206624U;
si1=32U;
si2=1206784U;
f604(i,si0,si1,si2);
UNREACHABLE;
L25:;
si0=1189416U;
si1=35U;
si2=1195068U;
f604(i,si0,si1,si2);
UNREACHABLE;
L24:;
si0=1189416U;
si1=35U;
si2=1195084U;
f604(i,si0,si1,si2);
UNREACHABLE;
L23:;
si0=4U;
si1=l10;
f52(i,si0,si1);
UNREACHABLE;
L22:;
si0=1189416U;
si1=35U;
si2=1195644U;
f604(i,si0,si1,si2);
UNREACHABLE;
L21:;
si0=l25;
si1=l13;
si0=si0 >= si1;
if(si0){
goto L39;
}
si0=l25;
si1=l13;
si2=l26;
si1-=si2;
l10=si1;
si0=si0 >= si1;
if(si0){
goto L38;
}
si0=l9;
si1=l26;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l9;
si1=l29;
si2=l26;
si3=3U;
si2<<=(si3&31);
l13=si2;
si1+=si2;
l15=si1;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l9;
si1=l10;
si2=l26;
si1-=si2;
i32_store(&i->m0,(U64)si0+36U,si1);
si0=l9;
si1=l15;
si2=l13;
si1+=si2;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l17;
si1=30U;
si0=si0 < si1;
if(si0){
goto L41;
}
si0=l9;
si1=0U;
i32_store(&i->m0,(U64)si0+48U,si1);
si0=l9;
si1=l16;
i32_store(&i->m0,(U64)si0+44U,si1);
si0=l9;
si1=4U;
i32_store(&i->m0,(U64)si0+40U,si1);
goto L40;
L41:;
si0=l16;
si1=268435455U;
si0=si0 > si1;
if(si0){
goto L12;
}
si0=32U;
si1=l17;
si0<<=(si1&31);
l10=si0;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L12;
}
si0=4U;
l13=si0;
si0=l17;
si1=26U;
si0=si0 > si1;
if(si0){
goto L42;
}
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=l10;
si0=f15022(i,si0);
l13=si0;
si0=!(si0);
if(si0){
goto L37;
}
L42:;
si0=0U;
l10=si0;
si0=l9;
si1=0U;
i32_store(&i->m0,(U64)si0+48U,si1);
si0=l9;
si1=l16;
i32_store(&i->m0,(U64)si0+44U,si1);
si0=l9;
si1=l13;
i32_store(&i->m0,(U64)si0+40U,si1);
si0=l25;
si1=-1U;
si0^=si1;
l11=si0;
si0=l25;
si1=l12;
si0+=si1;
si1=1U;
si0+=si1;
l15=si0;
si0=l25;
si1=3U;
si0<<=(si1&31);
si1=8U;
si0+=si1;
l12=si0;
si0=l7;
l13=si0;
si0=l16;
l18=si0;
L43:;
{
si0=l25;
si1=l15;
si2=l11;
si1+=si2;
l15=si1;
si0=si0 >= si1;
if(si0){
goto L36;
}
si0=l10;
si1=l9;
si1=i32_load(&i->m0,(U64)si1+44U);
si0=si0 != si1;
if(si0){
goto L44;
}
si0=l9;
si1=40U;
si0+=si1;
si1=l10;
f1300(i,si0,si1);
si0=l9;
si0=i32_load(&i->m0,(U64)si0+48U);
l10=si0;
L44:;
si0=l9;
si0=i32_load(&i->m0,(U64)si0+40U);
si1=l10;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l10=si0;
si1=l26;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l10;
si1=l13;
i32_store(&i->m0,(U64)si0,si1);
si0=l9;
si1=l9;
si1=i32_load(&i->m0,(U64)si1+48U);
si2=1U;
si1+=si2;
l10=si1;
i32_store(&i->m0,(U64)si0+48U,si1);
si0=l13;
si1=l12;
si0+=si1;
l13=si0;
si0=l18;
si1=-1U;
si0+=si1;
l18=si0;
if(si0){
goto L43;
}
}
L40:;
si0=l23;
si1=l24;
si0+=si1;
l10=si0;
si1=1U;
si0+=si1;
si1=2U;
si2=l17;
si1<<=(si2&31);
si0=si0 <= si1;
if(si0){
goto L35;
}
sj0=l14;
sj1=1ULL;
sj0>>=(sj1&63);
si0=(U32)(sj0);
l30=si0;
si1=30U;
si0=si0 > si1;
if(si0){
goto L46;
}
si0=l9;
si0=i32_load(&i->m0,(U64)si0+12U);
si1=l9;
si1=i32_load(&i->m0,(U64)si1+20U);
si2=l2;
si3=l3;
si4=l22;
si0=f985(i,si0,si1,si2,si3,si4);
l31=si0;
si1=l9;
si1=i32_load(&i->m0,(U64)si1+20U);
l13=si1;
si0=si0 > si1;
if(si0){
goto L34;
}
si0=1U;
si1=l30;
si0<<=(si1&31);
l24=si0;
si0=l10;
si1=2U;
si2=l30;
si1<<=(si2&31);
l15=si1;
si0+=si1;
si1=0U;
si2=l15;
si1-=si2;
si0&=si1;
l32=si0;
si0=l9;
si0=i32_load(&i->m0,(U64)si0+12U);
l10=si0;
si0=l31;
si1=l13;
si0=si0 != si1;
if(si0){
goto L45;
}
si0=l31;
l13=si0;
goto L32;
L46:;
si0=1192032U;
si1=25U;
si2=1195132U;
f604(i,si0,si1,si2);
UNREACHABLE;
L45:;
si0=l13;
si1=3U;
si0<<=(si1&31);
si1=l31;
si2=3U;
si1<<=(si2&31);
l15=si1;
si0-=si1;
l13=si0;
si0=l10;
si1=l15;
si0+=si1;
l10=si0;
L47:;
{
si0=l10;
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l15=si0;
si0=!(si0);
if(si0){
goto L48;
}
si0=l10;
si0=i32_load(&i->m0,(U64)si0);
si1=0U;
si2=l15;
si3=3U;
si2<<=(si3&31);
si0=f15145(i,si0,si1,si2);
L48:;
si0=l10;
si1=8U;
si0+=si1;
l10=si0;
si0=l13;
si1=-8U;
si0+=si1;
l13=si0;
si0=!(si0);
if(si0){
goto L33;
}
goto L47;
}
L39:;
si0=1189416U;
si1=35U;
si2=1195100U;
f604(i,si0,si1,si2);
UNREACHABLE;
L38:;
si0=1189416U;
si1=35U;
si2=1195116U;
f604(i,si0,si1,si2);
UNREACHABLE;
L37:;
si0=4U;
si1=l10;
f52(i,si0,si1);
UNREACHABLE;
L36:;
si0=1189416U;
si1=35U;
si2=1195628U;
f604(i,si0,si1,si2);
UNREACHABLE;
L35:;
si0=1195580U;
si1=32U;
si2=1195612U;
f604(i,si0,si1,si2);
UNREACHABLE;
L34:;
si0=l31;
si1=l13;
si2=1195148U;
f593(i,si0,si1,si2);
UNREACHABLE;
L33:;
si0=l9;
si0=i32_load(&i->m0,(U64)si0+20U);
l13=si0;
si0=l9;
si0=i32_load(&i->m0,(U64)si0+12U);
l10=si0;
L32:;
si0=l10;
si1=l13;
si2=l19;
si3=l9;
si4=24U;
si3+=si4;
si4=l9;
si5=32U;
si4+=si5;
si5=l29;
si6=l26;
si7=l24;
si8=l32;
f997(i,si0,si1,si2,si3,si4,si5,si6,si7,si8);
si0=l9;
si0=i32_load(&i->m0,(U64)si0+40U);
si1=l9;
si1=i32_load(&i->m0,(U64)si1+48U);
si2=l4;
si3=l5;
si4=l22;
si0=f985(i,si0,si1,si2,si3,si4);
l33=si0;
si1=l9;
si1=i32_load(&i->m0,(U64)si1+48U);
l13=si1;
si0=si0 > si1;
if(si0){
goto L70;
}
si0=l9;
si0=i32_load(&i->m0,(U64)si0+40U);
l10=si0;
si0=l33;
si1=l13;
si0=si0 != si1;
if(si0){
goto L72;
}
si0=l33;
l13=si0;
goto L71;
L72:;
si0=l13;
si1=3U;
si0<<=(si1&31);
si1=l33;
si2=3U;
si1<<=(si2&31);
l15=si1;
si0-=si1;
l13=si0;
si0=l10;
si1=l15;
si0+=si1;
l10=si0;
L73:;
{
si0=l10;
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l15=si0;
si0=!(si0);
if(si0){
goto L74;
}
si0=l10;
si0=i32_load(&i->m0,(U64)si0);
si1=0U;
si2=l15;
si3=3U;
si2<<=(si3&31);
si0=f15145(i,si0,si1,si2);
L74:;
si0=l10;
si1=8U;
si0+=si1;
l10=si0;
si0=l13;
si1=-8U;
si0+=si1;
l13=si0;
if(si0){
goto L73;
}
}
si0=l9;
si0=i32_load(&i->m0,(U64)si0+48U);
l13=si0;
si0=l9;
si0=i32_load(&i->m0,(U64)si0+40U);
l10=si0;
L71:;
si0=l10;
si1=l13;
si2=l19;
si3=l9;
si4=24U;
si3+=si4;
si4=l9;
si5=32U;
si4+=si5;
si5=l29;
si6=l26;
si7=l24;
si8=l32;
f997(i,si0,si1,si2,si3,si4,si5,si6,si7,si8);
si0=l16;
si1=1U;
si0>>=(si1&31);
l34=si0;
si1=l30;
si0>>=(si1&31);
l35=si0;
si0=!(si0);
if(si0){
goto L69;
}
si0=l9;
si0=i32_load(&i->m0,(U64)si0+20U);
l36=si0;
si1=l34;
si0=si0 < si1;
if(si0){
goto L68;
}
si0=l9;
si0=i32_load(&i->m0,(U64)si0+48U);
l37=si0;
si1=l34;
si0=si0 < si1;
if(si0){
goto L67;
}
si0=1U;
si1=l17;
si0<<=(si1&31);
l23=si0;
si0=l8;
si1=l28;
si0-=si1;
l38=si0;
si0=l7;
si1=l28;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l8=si0;
si0=32U;
si1=l35;
si1=I32_CLZ(si1);
si0-=si1;
sj0=(U64)(si0);
sj1=-1ULL;
sj0+=sj1;
l14=sj0;
si0=l36;
si1=l34;
si0-=si1;
l39=si0;
si0=l9;
si0=i32_load(&i->m0,(U64)si0+12U);
l40=si0;
si1=l34;
si2=3U;
si1<<=(si2&31);
l10=si1;
si0+=si1;
l41=si0;
si0=l35;
si1=l19;
si0*=si1;
l42=si0;
si0=l37;
si1=l34;
si0-=si1;
l43=si0;
si0=l9;
si0=i32_load(&i->m0,(U64)si0+40U);
l44=si0;
si1=l10;
si0+=si1;
l45=si0;
si0=l21;
si1=7U;
si0>>=(si1&31);
si1=l6;
si0=si0 <= si1;
if(si0){
goto L51;
}
si0=l20;
si0=!(si0);
if(si0){
goto L66;
}
si0=4U;
l10=si0;
si0=32U;
si1=l20;
si1=I32_CLZ(si1);
si0-=si1;
sj0=(U64)(si0);
si1=l20;
si1=I32_POPCNT(si1);
si2=1U;
si1=si1 == si2;
sj1=(U64)(si1);
sj0-=sj1;
l46=sj0;
sj1=12ULL;
si0=sj0 < sj1;
if(si0){
goto L75;
}
sj0=l46;
si0=(U32)(sj0);
l10=si0;
si1=30U;
si2=l10;
si3=30U;
si2=si2 < si3;
si0=si2?si0:si1;
si1=1193420U;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
l10=si0;
L75:;
sj0=l46;
sj1=1ULL;
sj0>>=(sj1&63);
si1=l10;
sj1=(U64)(si1);
sj2=255ULL;
sj1&=sj2;
sj0-=sj1;
l46=sj0;
sj1=32ULL;
si0=sj0 >= sj1;
if(si0){
goto L65;
}
si0=l38;
si1=l20;
sj2=l46;
si2=(U32)(sj2);
l47=si2;
si3=1U;
si2<<=(si3&31);
si1>>=(si2&31);
si2=l47;
si1<<=(si2&31);
si2=6U;
si1>>=(si2&31);
l11=si1;
si2=2U;
si1+=si2;
si2=l47;
si1<<=(si2&31);
l13=si1;
si2=2U;
si1<<=(si2&31);
si2=l11;
si3=1U;
si2+=si3;
l10=si2;
si3=3U;
si2*=si3;
l18=si2;
si1+=si2;
l12=si1;
si0=si0 < si1;
if(si0){
goto L64;
}
si0=l13;
si1=1U;
si0<<=(si1&31);
l15=si0;
si1=l12;
si0=si0 > si1;
if(si0){
goto L63;
}
si0=0U;
l13=si0;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=16U;
si1=l47;
si0<<=(si1&31);
l16=si0;
si0=f15022(i,si0);
l17=si0;
si0=!(si0);
if(si0){
goto L62;
}
si0=l38;
si1=l12;
si0-=si1;
l28=si0;
si0=l8;
si1=l12;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l21=si0;
si0=l9;
si1=0U;
i32_store(&i->m0,(U64)si0+60U,si1);
si0=l9;
si1=l17;
i32_store(&i->m0,(U64)si0+52U,si1);
si0=l11;
si1=3U;
si0<<=(si1&31);
si1=8U;
si0+=si1;
l2=si0;
si0=l9;
si1=2U;
si2=l47;
si1<<=(si2&31);
l6=si1;
i32_store(&i->m0,(U64)si0+56U,si1);
si0=l11;
si1=-1U;
si0^=si1;
l48=si0;
si1=l6;
si0+=si1;
l12=si0;
si0=l8;
si1=l15;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l17=si0;
si0=l6;
si1=l11;
si2=3U;
si1*=si2;
si0-=si1;
si1=-3U;
si0+=si1;
l16=si0;
si0=l6;
si1=l11;
si2=1U;
si1<<=(si2&31);
si0-=si1;
si1=-2U;
si0+=si1;
l3=si0;
si0=l6;
l5=si0;
L76:;
{
si0=l11;
si1=l15;
si2=l18;
si1+=si2;
si0=si0 >= si1;
if(si0){
goto L57;
}
si0=l13;
si1=l9;
si1=i32_load(&i->m0,(U64)si1+56U);
si0=si0 != si1;
if(si0){
goto L77;
}
si0=l9;
si1=52U;
si0+=si1;
si1=l13;
f1300(i,si0,si1);
si0=l9;
si0=i32_load(&i->m0,(U64)si0+60U);
l13=si0;
L77:;
si0=l9;
si0=i32_load(&i->m0,(U64)si0+52U);
si1=l13;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l13=si0;
si1=l10;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l13;
si1=l17;
i32_store(&i->m0,(U64)si0,si1);
si0=l9;
si1=l9;
si1=i32_load(&i->m0,(U64)si1+60U);
si2=1U;
si1+=si2;
l13=si1;
i32_store(&i->m0,(U64)si0+60U,si1);
si0=l17;
si1=l2;
si0+=si1;
l17=si0;
si0=l16;
si1=l10;
si0+=si1;
l16=si0;
si0=l3;
si1=l10;
si0+=si1;
l3=si0;
si0=l12;
si1=l10;
si0+=si1;
l12=si0;
si0=l18;
si1=l48;
si0+=si1;
l18=si0;
si0=l5;
si1=-1U;
si0+=si1;
l5=si0;
if(si0){
goto L76;
}
}
si0=l6;
si1=l15;
si2=l18;
si1+=si2;
si0=si0 > si1;
if(si0){
goto L61;
}
si0=l11;
si1=l15;
si2=l16;
si1-=si2;
si0=si0 >= si1;
if(si0){
goto L60;
}
si0=l9;
si1=l10;
i32_store(&i->m0,(U64)si0+68U,si1);
si0=l9;
si1=l17;
si2=l6;
si3=3U;
si2<<=(si3&31);
si1+=si2;
l13=si1;
i32_store(&i->m0,(U64)si0+64U,si1);
si0=l11;
si1=l15;
si2=l3;
si1-=si2;
si0=si0 >= si1;
if(si0){
goto L59;
}
si0=l9;
si1=l10;
i32_store(&i->m0,(U64)si0+76U,si1);
si0=l9;
si1=l13;
si2=l10;
si3=3U;
si2<<=(si3&31);
l18=si2;
si1+=si2;
l13=si1;
i32_store(&i->m0,(U64)si0+72U,si1);
si0=l9;
si1=l15;
si2=l12;
si1-=si2;
i32_store(&i->m0,(U64)si0+84U,si1);
si0=l9;
si1=l13;
si2=l18;
si1+=si2;
i32_store(&i->m0,(U64)si0+80U,si1);
si0=l6;
si1=268435456U;
si0=si0 >= si1;
if(si0){
goto L12;
}
si0=4U;
l18=si0;
si0=l47;
si1=27U;
si0=si0 > si1;
if(si0){
goto L78;
}
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=16U;
si1=l47;
si0<<=(si1&31);
l13=si0;
si0=f15022(i,si0);
l18=si0;
si0=!(si0);
if(si0){
goto L58;
}
L78:;
si0=0U;
l13=si0;
si0=l9;
si1=0U;
i32_store(&i->m0,(U64)si0+96U,si1);
si0=l9;
si1=l6;
i32_store(&i->m0,(U64)si0+92U,si1);
si0=l9;
si1=l18;
i32_store(&i->m0,(U64)si0+88U,si1);
si0=l11;
si1=3U;
si0<<=(si1&31);
si1=8U;
si0+=si1;
l12=si0;
si0=l8;
l16=si0;
si0=l6;
l18=si0;
L79:;
{
si0=l11;
si1=l15;
si0=si0 >= si1;
if(si0){
goto L56;
}
si0=l13;
si1=l9;
si1=i32_load(&i->m0,(U64)si1+92U);
si0=si0 != si1;
if(si0){
goto L80;
}
si0=l9;
si1=88U;
si0+=si1;
si1=l13;
f1300(i,si0,si1);
si0=l9;
si0=i32_load(&i->m0,(U64)si0+96U);
l13=si0;
L80:;
si0=l15;
si1=l10;
si0-=si1;
l15=si0;
si0=l9;
si0=i32_load(&i->m0,(U64)si0+88U);
si1=l13;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l13=si0;
si1=l10;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l13;
si1=l16;
i32_store(&i->m0,(U64)si0,si1);
si0=l9;
si1=l9;
si1=i32_load(&i->m0,(U64)si1+96U);
si2=1U;
si1+=si2;
l13=si1;
i32_store(&i->m0,(U64)si0+96U,si1);
si0=l16;
si1=l12;
si0+=si1;
l16=si0;
si0=l18;
si1=-1U;
si0+=si1;
l18=si0;
if(si0){
goto L79;
}
}
si0=l24;
si1=l32;
si2=l34;
si1-=si2;
l10=si1;
si0=si0 > si1;
if(si0){
goto L81;
}
si0=l10;
si1=l30;
si0>>=(si1&31);
l10=si0;
si1=1U;
si2=l10;
si3=1U;
si2=si2 > si3;
si0=si2?si0:si1;
l48=si0;
si0=8U;
si1=l30;
si0<<=(si1&31);
si1=3U;
si0>>=(si1&31);
l47=si0;
si0=0U;
l3=si0;
si0=0U;
sj1=l14;
si1=(U32)(sj1);
si0-=si1;
si1=31U;
si0&=si1;
l2=si0;
si0=l30;
si1=28U;
si0=si0 > si1;
l49=si0;
L82:;
{
si0=l39;
si1=l3;
si2=24U;
si1<<=(si2&31);
si2=l3;
si3=65280U;
si2&=si3;
si3=8U;
si2<<=(si3&31);
si1|=si2;
si2=l3;
si3=8U;
si2>>=(si3&31);
si3=65280U;
si2&=si3;
si3=l3;
si4=24U;
si3>>=(si4&31);
si2|=si3;
si1|=si2;
l10=si1;
si2=4U;
si1>>=(si2&31);
si2=252645135U;
si1&=si2;
si2=l10;
si3=252645135U;
si2&=si3;
si3=4U;
si2<<=(si3&31);
si1|=si2;
l10=si1;
si2=2U;
si1>>=(si2&31);
si2=858993459U;
si1&=si2;
si2=l10;
si3=858993459U;
si2&=si3;
si3=2U;
si2<<=(si3&31);
si1|=si2;
l10=si1;
si2=1U;
si1>>=(si2&31);
si2=1431655765U;
si1&=si2;
si2=l10;
si3=1431655765U;
si2&=si3;
si3=1U;
si2<<=(si3&31);
si1|=si2;
si2=l2;
si1>>=(si2&31);
si2=l30;
si1<<=(si2&31);
l10=si1;
si0=si0 < si1;
if(si0){
goto L55;
}
si0=l24;
si1=l39;
si2=l10;
si1-=si2;
l13=si1;
si0=si0 > si1;
if(si0){
goto L54;
}
si0=l43;
si1=l10;
si0=si0 < si1;
if(si0){
goto L53;
}
si0=l24;
si1=l43;
si2=l10;
si1-=si2;
l13=si1;
si0=si0 > si1;
if(si0){
goto L52;
}
si0=l41;
si1=l10;
si2=3U;
si1<<=(si2&31);
l10=si1;
si0+=si1;
l5=si0;
si1=l24;
si2=l42;
si3=l9;
si4=24U;
si3+=si4;
si4=l9;
si5=32U;
si4+=si5;
f986(i,si0,si1,si2,si3,si4);
si0=l45;
si1=l10;
si0+=si1;
l10=si0;
si1=l24;
si2=l42;
si3=l9;
si4=24U;
si3+=si4;
si4=l9;
si5=32U;
si4+=si5;
f986(i,si0,si1,si2,si3,si4);
si0=l47;
l18=si0;
si0=l5;
l13=si0;
si0=l49;
if(si0){
goto L83;
}
L84:;
{
si0=l13;
si0=i32_load(&i->m0,(U64)si0);
si1=l13;
si2=4U;
si1+=si2;
l11=si1;
si1=i32_load(&i->m0,(U64)si1);
f977(i,si0,si1);
si0=l10;
si0=i32_load(&i->m0,(U64)si0);
si1=l10;
si2=4U;
si1+=si2;
l12=si1;
si1=i32_load(&i->m0,(U64)si1);
f977(i,si0,si1);
si0=l13;
si0=i32_load(&i->m0,(U64)si0);
si1=l11;
si1=i32_load(&i->m0,(U64)si1);
si2=l10;
si2=i32_load(&i->m0,(U64)si2);
si3=l12;
si3=i32_load(&i->m0,(U64)si3);
si4=l23;
si5=l19;
si6=l9;
si6=i32_load(&i->m0,(U64)si6+52U);
si7=l9;
si7=i32_load(&i->m0,(U64)si7+60U);
si8=l17;
si9=l6;
si10=l9;
si10=i32_load(&i->m0,(U64)si10+88U);
si11=l9;
si11=i32_load(&i->m0,(U64)si11+96U);
si12=l16;
si13=l15;
si14=l9;
si15=64U;
si14+=si15;
si15=l9;
si16=72U;
si15+=si16;
si16=l9;
si17=80U;
si16+=si17;
si17=l21;
si18=l28;
f1000(i,si0,si1,si2,si3,si4,si5,si6,si7,si8,si9,si10,si11,si12,si13,si14,si15,si16,si17,si18);
si0=l13;
si1=8U;
si0+=si1;
l13=si0;
si0=l10;
si1=8U;
si0+=si1;
l10=si0;
si0=l18;
si1=-1U;
si0+=si1;
l18=si0;
if(si0){
goto L84;
}
}
L83:;
si0=l5;
si1=l24;
si2=l42;
si3=l9;
si4=24U;
si3+=si4;
si4=l9;
si5=32U;
si4+=si5;
f991(i,si0,si1,si2,si3,si4);
si0=l3;
si1=1U;
si0+=si1;
l3=si0;
si1=l48;
si0=si0 != si1;
if(si0){
goto L82;
}
}
L81:;
si0=0U;
l10=si0;
si0=l9;
si0=i32_load(&i->m0,(U64)si0+48U);
l48=si0;
si0=0U;
l13=si0;
si0=l9;
si0=i32_load(&i->m0,(U64)si0+20U);
l47=si0;
si0=!(si0);
if(si0){
goto L85;
}
si0=l47;
si1=l30;
si0>>=(si1&31);
si1=l47;
si2=l24;
si3=-1U;
si2+=si3;
si1&=si2;
si2=0U;
si1=si1 != si2;
si0+=si1;
l13=si0;
L85:;
si0=l48;
si0=!(si0);
if(si0){
goto L86;
}
si0=l48;
si1=l30;
si0>>=(si1&31);
si1=l48;
si2=l24;
si3=-1U;
si2+=si3;
si1&=si2;
si2=0U;
si1=si1 != si2;
si0+=si1;
l10=si0;
L86:;
si0=l24;
si1=l34;
si0=si0 > si1;
if(si0){
goto L50;
}
si0=l9;
si0=i32_load(&i->m0,(U64)si0+40U);
l4=si0;
si0=l9;
si0=i32_load(&i->m0,(U64)si0+12U);
l50=si0;
si0=l13;
si1=l10;
si2=l13;
si3=l10;
si2=si2 < si3;
si0=si2?si0:si1;
l49=si0;
si0=0U;
l3=si0;
L87:;
{
si0=l3;
si1=l49;
si0=si0 == si1;
if(si0){
goto L50;
}
si0=l50;
si1=l3;
si2=l30;
si1<<=(si2&31);
l13=si1;
si2=3U;
si1<<=(si2&31);
l10=si1;
si0+=si1;
l2=si0;
si1=l47;
si2=l13;
si1-=si2;
l18=si1;
si2=l24;
si3=l18;
si4=l24;
si3=si3 < si4;
si1=si3?si1:si2;
l5=si1;
si2=l42;
si3=l9;
si4=24U;
si3+=si4;
si4=l9;
si5=32U;
si4+=si5;
f986(i,si0,si1,si2,si3,si4);
si0=l4;
si1=l10;
si0+=si1;
l10=si0;
si1=l48;
si2=l13;
si1-=si2;
l13=si1;
si2=l24;
si3=l13;
si4=l24;
si3=si3 < si4;
si1=si3?si1:si2;
l18=si1;
si2=l42;
si3=l9;
si4=24U;
si3+=si4;
si4=l9;
si5=32U;
si4+=si5;
f986(i,si0,si1,si2,si3,si4);
si0=l2;
l13=si0;
si0=l5;
si1=l18;
si2=l5;
si3=l18;
si2=si2 < si3;
si0=si2?si0:si1;
l18=si0;
si0=!(si0);
if(si0){
goto L88;
}
L89:;
{
si0=l13;
si0=i32_load(&i->m0,(U64)si0);
si1=l13;
si2=4U;
si1+=si2;
l11=si1;
si1=i32_load(&i->m0,(U64)si1);
f977(i,si0,si1);
si0=l10;
si0=i32_load(&i->m0,(U64)si0);
si1=l10;
si2=4U;
si1+=si2;
l12=si1;
si1=i32_load(&i->m0,(U64)si1);
f977(i,si0,si1);
si0=l13;
si0=i32_load(&i->m0,(U64)si0);
si1=l11;
si1=i32_load(&i->m0,(U64)si1);
si2=l10;
si2=i32_load(&i->m0,(U64)si2);
si3=l12;
si3=i32_load(&i->m0,(U64)si3);
si4=l23;
si5=l19;
si6=l9;
si6=i32_load(&i->m0,(U64)si6+52U);
si7=l9;
si7=i32_load(&i->m0,(U64)si7+60U);
si8=l17;
si9=l6;
si10=l9;
si10=i32_load(&i->m0,(U64)si10+88U);
si11=l9;
si11=i32_load(&i->m0,(U64)si11+96U);
si12=l16;
si13=l15;
si14=l9;
si15=64U;
si14+=si15;
si15=l9;
si16=72U;
si15+=si16;
si16=l9;
si17=80U;
si16+=si17;
si17=l21;
si18=l28;
f1000(i,si0,si1,si2,si3,si4,si5,si6,si7,si8,si9,si10,si11,si12,si13,si14,si15,si16,si17,si18);
si0=l13;
si1=8U;
si0+=si1;
l13=si0;
si0=l10;
si1=8U;
si0+=si1;
l10=si0;
si0=l18;
si1=-1U;
si0+=si1;
l18=si0;
if(si0){
goto L89;
}
}
L88:;
si0=l3;
si1=1U;
si0+=si1;
l3=si0;
si0=l2;
si1=l5;
si2=l42;
si3=l9;
si4=24U;
si3+=si4;
si4=l9;
si5=32U;
si4+=si5;
f991(i,si0,si1,si2,si3,si4);
si0=l35;
si1=-1U;
si0+=si1;
l35=si0;
if(si0){
goto L87;
}
goto L50;
}
L70:;
si0=l33;
si1=l13;
si2=1195164U;
f593(i,si0,si1,si2);
UNREACHABLE;
L69:;
si0=l9;
si1=100U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l9;
si1=1U;
i32_store(&i->m0,(U64)si0+92U,si1);
si0=l9;
si1=1206456U;
i32_store(&i->m0,(U64)si0+88U,si1);
si0=l9;
si1=1206464U;
i32_store(&i->m0,(U64)si0+96U,si1);
si0=l9;
si1=88U;
si0+=si1;
si1=1206592U;
f614(i,si0,si1);
UNREACHABLE;
L68:;
si0=l34;
si1=l36;
si2=1195180U;
f593(i,si0,si1,si2);
UNREACHABLE;
L67:;
si0=l34;
si1=l37;
si2=1195196U;
f593(i,si0,si1,si2);
UNREACHABLE;
L66:;
si0=l9;
si1=100U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l9;
si1=1U;
i32_store(&i->m0,(U64)si0+92U,si1);
si0=l9;
si1=1206456U;
i32_store(&i->m0,(U64)si0+88U,si1);
si0=l9;
si1=1206464U;
i32_store(&i->m0,(U64)si0+96U,si1);
si0=l9;
si1=88U;
si0+=si1;
si1=1206592U;
f614(i,si0,si1);
UNREACHABLE;
L65:;
si0=1206624U;
si1=32U;
si2=1206784U;
f604(i,si0,si1,si2);
UNREACHABLE;
L64:;
si0=1189416U;
si1=35U;
si2=1195212U;
f604(i,si0,si1,si2);
UNREACHABLE;
L63:;
si0=1189416U;
si1=35U;
si2=1195228U;
f604(i,si0,si1,si2);
UNREACHABLE;
L62:;
si0=4U;
si1=l16;
f52(i,si0,si1);
UNREACHABLE;
L61:;
si0=1189416U;
si1=35U;
si2=1195244U;
f604(i,si0,si1,si2);
UNREACHABLE;
L60:;
si0=1189416U;
si1=35U;
si2=1195260U;
f604(i,si0,si1,si2);
UNREACHABLE;
L59:;
si0=1189416U;
si1=35U;
si2=1195276U;
f604(i,si0,si1,si2);
UNREACHABLE;
L58:;
si0=4U;
si1=l13;
f52(i,si0,si1);
UNREACHABLE;
L57:;
si0=1189416U;
si1=35U;
si2=1195372U;
f604(i,si0,si1,si2);
UNREACHABLE;
L56:;
si0=1189416U;
si1=35U;
si2=1195356U;
f604(i,si0,si1,si2);
UNREACHABLE;
L55:;
si0=l10;
si1=l39;
si2=1195292U;
f593(i,si0,si1,si2);
UNREACHABLE;
L54:;
si0=l24;
si1=l13;
si2=1195308U;
f597(i,si0,si1,si2);
UNREACHABLE;
L53:;
si0=l10;
si1=l43;
si2=1195324U;
f593(i,si0,si1,si2);
UNREACHABLE;
L52:;
si0=l24;
si1=l13;
si2=1195340U;
f597(i,si0,si1,si2);
UNREACHABLE;
L51:;
si0=l20;
si1=63U;
si0+=si1;
l51=si0;
si1=6U;
si0>>=(si1&31);
l21=si0;
si0=l24;
si1=l32;
si2=l34;
si1-=si2;
l10=si1;
si0=si0 > si1;
if(si0){
goto L90;
}
si0=l10;
si1=l30;
si0>>=(si1&31);
l10=si0;
si1=1U;
si2=l10;
si3=1U;
si2=si2 > si3;
si0=si2?si0:si1;
l52=si0;
si0=l7;
si1=l27;
si2=6U;
si1<<=(si2&31);
si2=l25;
si3=24U;
si2*=si3;
si1+=si2;
l13=si1;
si0+=si1;
l16=si0;
si0=l7;
si1=l13;
si2=l21;
si3=3U;
si2<<=(si3&31);
l10=si2;
si1+=si2;
si0+=si1;
l6=si0;
si0=l51;
si1=64U;
si0&=si1;
l53=si0;
si0=l51;
si1=-64U;
si0&=si1;
l54=si0;
si0=l10;
si1=-8U;
si0+=si1;
l37=si0;
si0=l51;
si1=3U;
si0>>=(si1&31);
si1=536870896U;
si0&=si1;
l28=si0;
si0=8U;
si1=l30;
si0<<=(si1&31);
si1=3U;
si0>>=(si1&31);
l50=si0;
si0=l8;
si1=l10;
si0+=si1;
l36=si0;
si0=l38;
si1=l21;
si2=1U;
si1<<=(si2&31);
l48=si1;
si0-=si1;
l47=si0;
si0=l8;
si1=l21;
si2=4U;
si1<<=(si2&31);
si0+=si1;
l49=si0;
si0=0U;
l55=si0;
si0=0U;
sj1=l14;
si1=(U32)(sj1);
si0-=si1;
si1=31U;
si0&=si1;
l40=si0;
si0=l30;
si1=28U;
si0=si0 > si1;
l44=si0;
si0=l38;
si1=l48;
si0=si0 < si1;
si1=1U;
si0&=si1;
l56=si0;
L95:;
{
si0=l39;
si1=l55;
si2=24U;
si1<<=(si2&31);
si2=l55;
si3=65280U;
si2&=si3;
si3=8U;
si2<<=(si3&31);
si1|=si2;
si2=l55;
si3=8U;
si2>>=(si3&31);
si3=65280U;
si2&=si3;
si3=l55;
si4=24U;
si3>>=(si4&31);
si2|=si3;
si1|=si2;
l10=si1;
si2=4U;
si1>>=(si2&31);
si2=252645135U;
si1&=si2;
si2=l10;
si3=252645135U;
si2&=si3;
si3=4U;
si2<<=(si3&31);
si1|=si2;
l10=si1;
si2=2U;
si1>>=(si2&31);
si2=858993459U;
si1&=si2;
si2=l10;
si3=858993459U;
si2&=si3;
si3=2U;
si2<<=(si3&31);
si1|=si2;
l10=si1;
si2=1U;
si1>>=(si2&31);
si2=1431655765U;
si1&=si2;
si2=l10;
si3=1431655765U;
si2&=si3;
si3=1U;
si2<<=(si3&31);
si1|=si2;
si2=l40;
si1>>=(si2&31);
si2=l30;
si1<<=(si2&31);
l10=si1;
si0=si0 < si1;
if(si0){
goto L102;
}
si0=l24;
si1=l39;
si2=l10;
si1-=si2;
l13=si1;
si0=si0 > si1;
if(si0){
goto L101;
}
si0=l43;
si1=l10;
si0=si0 < si1;
if(si0){
goto L100;
}
si0=l24;
si1=l43;
si2=l10;
si1-=si2;
l13=si1;
si0=si0 > si1;
if(si0){
goto L99;
}
si0=l41;
si1=l10;
si2=3U;
si1<<=(si2&31);
l13=si1;
si0+=si1;
l4=si0;
si1=l24;
si2=l42;
si3=l9;
si4=24U;
si3+=si4;
si4=l9;
si5=32U;
si4+=si5;
f986(i,si0,si1,si2,si3,si4);
si0=l45;
si1=l13;
si0+=si1;
l3=si0;
si1=l24;
si2=l42;
si3=l9;
si4=24U;
si3+=si4;
si4=l9;
si5=32U;
si4+=si5;
f986(i,si0,si1,si2,si3,si4);
si0=l44;
if(si0){
goto L96;
}
si0=l54;
si1=l20;
si0=si0 != si1;
if(si0){
goto L103;
}
si0=l56;
if(si0){
goto L98;
}
si0=l51;
si1=64U;
si0=si0 < si1;
if(si0){
goto L97;
}
si0=0U;
l2=si0;
L104:;
{
si0=l4;
si1=l2;
si2=3U;
si1<<=(si2&31);
l10=si1;
si0+=si1;
l5=si0;
si0=i32_load(&i->m0,(U64)si0);
si1=l5;
si1=i32_load(&i->m0,(U64)si1+4U);
f977(i,si0,si1);
si0=l3;
si1=l10;
si0+=si1;
l10=si0;
si0=i32_load(&i->m0,(U64)si0);
si1=l10;
si1=i32_load(&i->m0,(U64)si1+4U);
f977(i,si0,si1);
si0=l21;
si1=l5;
si1=i32_load(&i->m0,(U64)si1+4U);
l18=si1;
si0=si0 > si1;
if(si0){
goto L93;
}
si0=l21;
si1=l10;
si2=4U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
l18=si1;
si0=si0 > si1;
if(si0){
goto L92;
}
si0=l8;
si1=l48;
si2=l5;
si2=i32_load(&i->m0,(U64)si2);
l17=si2;
si3=l21;
si4=l10;
si4=i32_load(&i->m0,(U64)si4);
si5=l21;
si6=l49;
si7=l47;
f1121(i,si0,si1,si2,si3,si4,si5,si6,si7);
si0=0U;
l13=si0;
si0=0U;
l15=si0;
si0=l21;
si1=1U;
si0=si0 == si1;
if(si0){
goto L105;
}
si0=0U;
l10=si0;
si0=0U;
l13=si0;
si0=0U;
l15=si0;
L106:;
{
si0=l17;
si1=l10;
si0+=si1;
l18=si0;
si1=l16;
si2=l10;
si1+=si2;
l11=si1;
si2=24U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
l14=sj1;
si2=l13;
sj2=(U64)(si2);
sj3=1ULL;
sj2&=sj3;
sj1-=sj2;
si2=l6;
si3=l10;
si2+=si3;
l12=si2;
si3=24U;
si2+=si3;
sj2=i64_load(&i->m0,(U64)si2);
l46=sj2;
sj1-=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l18;
si1=8U;
si0+=si1;
si1=l11;
si2=32U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
l57=sj1;
sj2=l14;
sj3=l46;
si2=sj2 <= sj3;
sj3=l14;
sj4=l46;
si3=sj3 < sj4;
si4=l13;
si5=1U;
si4&=si5;
si2=si4?si2:si3;
l13=si2;
sj2=(U64)(si2);
sj1-=sj2;
si2=l12;
si3=32U;
si2+=si3;
sj2=i64_load(&i->m0,(U64)si2);
l14=sj2;
sj1-=sj2;
i64_store(&i->m0,(U64)si0,sj1);
sj0=l57;
sj1=l14;
si0=sj0 <= sj1;
sj1=l57;
sj2=l14;
si1=sj1 < sj2;
si2=l13;
si0=si2?si0:si1;
l13=si0;
si0=l15;
si1=2U;
si0+=si1;
l15=si0;
si0=l28;
si1=l10;
si2=16U;
si1+=si2;
l10=si1;
si0=si0 != si1;
if(si0){
goto L106;
}
}
L105:;
si0=l53;
si0=!(si0);
if(si0){
goto L107;
}
si0=l17;
si1=l15;
si2=3U;
si1<<=(si2&31);
l10=si1;
si0+=si1;
si1=l8;
si2=l10;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
l14=sj1;
si2=l13;
sj2=(U64)(si2);
sj1-=sj2;
si2=l36;
si3=l10;
si2+=si3;
sj2=i64_load(&i->m0,(U64)si2);
l46=sj2;
sj1-=sj2;
i64_store(&i->m0,(U64)si0,sj1);
sj0=l14;
sj1=l46;
si0=sj0 <= sj1;
sj1=l14;
sj2=l46;
si1=sj1 < sj2;
si2=l13;
si0=si2?si0:si1;
l13=si0;
L107:;
si0=l5;
si1=4U;
si0+=si1;
l15=si0;
sj0=0ULL;
l46=sj0;
si0=l13;
si1=1U;
si0&=si1;
si0=!(si0);
if(si0){
goto L108;
}
si0=l17;
si1=l17;
sj1=i64_load(&i->m0,(U64)si1);
sj2=1ULL;
sj1+=sj2;
l14=sj1;
i64_store(&i->m0,(U64)si0,sj1);
sj0=0ULL;
l46=sj0;
sj0=l14;
sj1=0ULL;
si0=sj0 != sj1;
if(si0){
goto L108;
}
si0=l17;
si1=8U;
si0+=si1;
l10=si0;
si0=l37;
l13=si0;
L109:;
{
si0=l13;
if(si0){
goto L110;
}
sj0=1ULL;
l46=sj0;
goto L108;
L110:;
si0=l10;
si1=l10;
sj1=i64_load(&i->m0,(U64)si1);
sj2=1ULL;
sj1+=sj2;
l14=sj1;
i64_store(&i->m0,(U64)si0,sj1);
si0=l13;
si1=-8U;
si0+=si1;
l13=si0;
si0=l10;
si1=8U;
si0+=si1;
l10=si0;
sj0=l14;
si0=!(sj0);
if(si0){
goto L109;
}
}
L108:;
si0=l25;
si1=l15;
si1=i32_load(&i->m0,(U64)si1);
l13=si1;
si0=si0 >= si1;
if(si0){
goto L94;
}
si0=l5;
si0=i32_load(&i->m0,(U64)si0);
si1=l25;
si2=3U;
si1<<=(si2&31);
si0+=si1;
sj1=l46;
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=1U;
si0+=si1;
l2=si0;
si1=l50;
si0=si0 != si1;
if(si0){
goto L104;
}
goto L96;
}
L103:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
si1=l41;
si2=l10;
si3=3U;
si2<<=(si3&31);
l10=si2;
si1+=si2;
l13=si1;
si1=i32_load(&i->m0,(U64)si1+4U);
f977(i,si0,si1);
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
si1=l45;
si2=l10;
si1+=si2;
l10=si1;
si1=i32_load(&i->m0,(U64)si1+4U);
f977(i,si0,si1);
si0=l21;
si1=l13;
si1=i32_load(&i->m0,(U64)si1+4U);
l18=si1;
si0=si0 > si1;
if(si0){
goto L93;
}
si0=l21;
si1=l10;
si2=4U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
l18=si1;
si0=si0 > si1;
if(si0){
goto L92;
}
si0=l9;
si1=l54;
si2=l20;
si1-=si2;
i32_store(&i->m0,(U64)si0+52U,si1);
si0=l9;
si1=0U;
i32_store(&i->m0,(U64)si0+88U,si1);
si0=0U;
si1=l9;
si2=52U;
si1+=si2;
si2=1189840U;
si3=l9;
si4=88U;
si3+=si4;
si4=1189940U;
f1250(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L102:;
si0=l10;
si1=l39;
si2=1195468U;
f593(i,si0,si1,si2);
UNREACHABLE;
L101:;
si0=l24;
si1=l13;
si2=1195484U;
f597(i,si0,si1,si2);
UNREACHABLE;
L100:;
si0=l10;
si1=l43;
si2=1195500U;
f593(i,si0,si1,si2);
UNREACHABLE;
L99:;
si0=l24;
si1=l13;
si2=1195516U;
f597(i,si0,si1,si2);
UNREACHABLE;
L98:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
si1=l41;
si2=l10;
si3=3U;
si2<<=(si3&31);
l10=si2;
si1+=si2;
l13=si1;
si1=i32_load(&i->m0,(U64)si1+4U);
f977(i,si0,si1);
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
si1=l45;
si2=l10;
si1+=si2;
l10=si1;
si1=i32_load(&i->m0,(U64)si1+4U);
f977(i,si0,si1);
si0=l21;
si1=l13;
si1=i32_load(&i->m0,(U64)si1+4U);
l18=si1;
si0=si0 > si1;
if(si0){
goto L93;
}
si0=l21;
si1=l10;
si2=4U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
l18=si1;
si0=si0 > si1;
if(si0){
goto L92;
}
si0=1189416U;
si1=35U;
si2=1189892U;
f604(i,si0,si1,si2);
UNREACHABLE;
L97:;
si0=l50;
l15=si0;
si0=l4;
l10=si0;
L111:;
{
si0=l10;
si0=i32_load(&i->m0,(U64)si0);
si1=l10;
si2=4U;
si1+=si2;
l13=si1;
si1=i32_load(&i->m0,(U64)si1);
f977(i,si0,si1);
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
si1=l3;
si2=4U;
si1+=si2;
l11=si1;
si1=i32_load(&i->m0,(U64)si1);
f977(i,si0,si1);
si0=l21;
si1=l13;
si1=i32_load(&i->m0,(U64)si1);
l18=si1;
si0=si0 > si1;
if(si0){
goto L93;
}
si0=l21;
si1=l11;
si1=i32_load(&i->m0,(U64)si1);
l18=si1;
si0=si0 > si1;
if(si0){
goto L92;
}
si0=l8;
si1=l48;
si2=l10;
si2=i32_load(&i->m0,(U64)si2);
si3=l21;
si4=l3;
si4=i32_load(&i->m0,(U64)si4);
si5=l21;
si6=l49;
si7=l47;
f1121(i,si0,si1,si2,si3,si4,si5,si6,si7);
si0=l25;
si1=l13;
si1=i32_load(&i->m0,(U64)si1);
l13=si1;
si0=si0 >= si1;
if(si0){
goto L94;
}
si0=l10;
si0=i32_load(&i->m0,(U64)si0);
si1=l25;
si2=3U;
si1<<=(si2&31);
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l10;
si1=8U;
si0+=si1;
l10=si0;
si0=l3;
si1=8U;
si0+=si1;
l3=si0;
si0=l15;
si1=-1U;
si0+=si1;
l15=si0;
if(si0){
goto L111;
}
}
L96:;
si0=l4;
si1=l24;
si2=l42;
si3=l9;
si4=24U;
si3+=si4;
si4=l9;
si5=32U;
si4+=si5;
f991(i,si0,si1,si2,si3,si4);
si0=l55;
si1=1U;
si0+=si1;
l55=si0;
si1=l52;
si0=si0 == si1;
if(si0){
goto L91;
}
goto L95;
}
L94:;
si0=l25;
si1=l13;
si2=1195564U;
f594(i,si0,si1,si2);
UNREACHABLE;
L93:;
si0=l21;
si1=l18;
si2=1195532U;
f597(i,si0,si1,si2);
UNREACHABLE;
L92:;
si0=l21;
si1=l18;
si2=1195548U;
f597(i,si0,si1,si2);
UNREACHABLE;
L91:;
si0=l9;
si0=i32_load(&i->m0,(U64)si0+12U);
l40=si0;
si0=l9;
si0=i32_load(&i->m0,(U64)si0+48U);
l37=si0;
si0=l9;
si0=i32_load(&i->m0,(U64)si0+40U);
l44=si0;
si0=l9;
si0=i32_load(&i->m0,(U64)si0+20U);
l36=si0;
L90:;
si0=0U;
l10=si0;
si0=0U;
l13=si0;
si0=l36;
si0=!(si0);
if(si0){
goto L112;
}
si0=l36;
si1=l30;
si0>>=(si1&31);
si1=l36;
si2=l24;
si3=-1U;
si2+=si3;
si1&=si2;
si2=0U;
si1=si1 != si2;
si0+=si1;
l13=si0;
L112:;
si0=l37;
si0=!(si0);
if(si0){
goto L113;
}
si0=l37;
si1=l30;
si0>>=(si1&31);
si1=l37;
si2=l24;
si3=-1U;
si2+=si3;
si1&=si2;
si2=0U;
si1=si1 != si2;
si0+=si1;
l10=si0;
L113:;
si0=l24;
si1=l34;
si0=si0 > si1;
if(si0){
goto L49;
}
si0=l40;
si0=!(si0);
if(si0){
goto L49;
}
si0=l13;
si1=l10;
si2=l13;
si3=l10;
si2=si2 < si3;
si0=si2?si0:si1;
l45=si0;
si0=l51;
si1=-64U;
si0&=si1;
l34=si0;
si0=l8;
si1=l21;
si2=3U;
si1<<=(si2&31);
l10=si1;
si0+=si1;
l55=si0;
si0=l38;
si1=l21;
si2=1U;
si1<<=(si2&31);
l47=si1;
si0-=si1;
l49=si0;
si0=l8;
si1=l21;
si2=4U;
si1<<=(si2&31);
si0+=si1;
l4=si0;
si0=l7;
si1=l27;
si2=6U;
si1<<=(si2&31);
si2=l25;
si3=24U;
si2*=si3;
si1+=si2;
l13=si1;
si0+=si1;
l16=si0;
si0=l7;
si1=l13;
si2=l10;
si1+=si2;
si0+=si1;
l6=si0;
si0=l51;
si1=64U;
si0&=si1;
l53=si0;
si0=l10;
si1=-8U;
si0+=si1;
l41=si0;
si0=l51;
si1=3U;
si0>>=(si1&31);
si1=536870896U;
si0&=si1;
l28=si0;
si0=0U;
l39=si0;
si0=l38;
si1=l47;
si0=si0 < si1;
si1=1U;
si0&=si1;
l7=si0;
L116:;
{
si0=l39;
si1=l45;
si0=si0 == si1;
if(si0){
goto L49;
}
si0=l40;
si1=l39;
si2=l30;
si1<<=(si2&31);
l10=si1;
si2=3U;
si1<<=(si2&31);
l13=si1;
si0+=si1;
l50=si0;
si1=l36;
si2=l10;
si1-=si2;
l15=si1;
si2=l24;
si3=l15;
si4=l24;
si3=si3 < si4;
si1=si3?si1:si2;
l43=si1;
si2=l42;
si3=l9;
si4=24U;
si3+=si4;
si4=l9;
si5=32U;
si4+=si5;
f986(i,si0,si1,si2,si3,si4);
si0=l44;
si1=l13;
si0+=si1;
l3=si0;
si1=l37;
si2=l10;
si1-=si2;
l13=si1;
si2=l24;
si3=l13;
si4=l24;
si3=si3 < si4;
si1=si3?si1:si2;
l13=si1;
si2=l42;
si3=l9;
si4=24U;
si3+=si4;
si4=l9;
si5=32U;
si4+=si5;
f986(i,si0,si1,si2,si3,si4);
si0=l43;
si1=l13;
si2=l43;
si3=l13;
si2=si2 < si3;
si0=si2?si0:si1;
l2=si0;
si0=!(si0);
if(si0){
goto L118;
}
si0=l34;
si1=l20;
si0=si0 != si1;
if(si0){
goto L121;
}
si0=l7;
if(si0){
goto L120;
}
si0=l51;
si1=64U;
si0=si0 < si1;
if(si0){
goto L119;
}
si0=0U;
l48=si0;
L122:;
{
si0=l50;
si1=l48;
si2=3U;
si1<<=(si2&31);
l10=si1;
si0+=si1;
l5=si0;
si0=i32_load(&i->m0,(U64)si0);
si1=l5;
si1=i32_load(&i->m0,(U64)si1+4U);
f977(i,si0,si1);
si0=l3;
si1=l10;
si0+=si1;
l10=si0;
si0=i32_load(&i->m0,(U64)si0);
si1=l10;
si1=i32_load(&i->m0,(U64)si1+4U);
f977(i,si0,si1);
si0=l21;
si1=l5;
si1=i32_load(&i->m0,(U64)si1+4U);
l15=si1;
si0=si0 > si1;
if(si0){
goto L115;
}
si0=l21;
si1=l10;
si2=4U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
l15=si1;
si0=si0 > si1;
if(si0){
goto L114;
}
si0=l8;
si1=l47;
si2=l5;
si2=i32_load(&i->m0,(U64)si2);
l17=si2;
si3=l21;
si4=l10;
si4=i32_load(&i->m0,(U64)si4);
si5=l21;
si6=l4;
si7=l49;
f1121(i,si0,si1,si2,si3,si4,si5,si6,si7);
si0=0U;
l13=si0;
si0=0U;
l15=si0;
si0=l21;
si1=1U;
si0=si0 == si1;
if(si0){
goto L123;
}
si0=0U;
l10=si0;
si0=0U;
l13=si0;
si0=0U;
l15=si0;
L124:;
{
si0=l17;
si1=l10;
si0+=si1;
l18=si0;
si1=l16;
si2=l10;
si1+=si2;
l11=si1;
si2=24U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
l14=sj1;
si2=l13;
sj2=(U64)(si2);
sj3=1ULL;
sj2&=sj3;
sj1-=sj2;
si2=l6;
si3=l10;
si2+=si3;
l12=si2;
si3=24U;
si2+=si3;
sj2=i64_load(&i->m0,(U64)si2);
l46=sj2;
sj1-=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l18;
si1=8U;
si0+=si1;
si1=l11;
si2=32U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
l57=sj1;
sj2=l14;
sj3=l46;
si2=sj2 <= sj3;
sj3=l14;
sj4=l46;
si3=sj3 < sj4;
si4=l13;
si5=1U;
si4&=si5;
si2=si4?si2:si3;
l13=si2;
sj2=(U64)(si2);
sj1-=sj2;
si2=l12;
si3=32U;
si2+=si3;
sj2=i64_load(&i->m0,(U64)si2);
l14=sj2;
sj1-=sj2;
i64_store(&i->m0,(U64)si0,sj1);
sj0=l57;
sj1=l14;
si0=sj0 <= sj1;
sj1=l57;
sj2=l14;
si1=sj1 < sj2;
si2=l13;
si0=si2?si0:si1;
l13=si0;
si0=l15;
si1=2U;
si0+=si1;
l15=si0;
si0=l28;
si1=l10;
si2=16U;
si1+=si2;
l10=si1;
si0=si0 != si1;
if(si0){
goto L124;
}
}
L123:;
si0=l53;
si0=!(si0);
if(si0){
goto L125;
}
si0=l17;
si1=l15;
si2=3U;
si1<<=(si2&31);
l10=si1;
si0+=si1;
si1=l8;
si2=l10;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
l14=sj1;
si2=l13;
sj2=(U64)(si2);
sj1-=sj2;
si2=l55;
si3=l10;
si2+=si3;
sj2=i64_load(&i->m0,(U64)si2);
l46=sj2;
sj1-=sj2;
i64_store(&i->m0,(U64)si0,sj1);
sj0=l14;
sj1=l46;
si0=sj0 <= sj1;
sj1=l14;
sj2=l46;
si1=sj1 < sj2;
si2=l13;
si0=si2?si0:si1;
l13=si0;
L125:;
si0=l5;
si1=4U;
si0+=si1;
l15=si0;
sj0=0ULL;
l46=sj0;
si0=l13;
si1=1U;
si0&=si1;
si0=!(si0);
if(si0){
goto L126;
}
si0=l17;
si1=l17;
sj1=i64_load(&i->m0,(U64)si1);
sj2=1ULL;
sj1+=sj2;
l14=sj1;
i64_store(&i->m0,(U64)si0,sj1);
sj0=0ULL;
l46=sj0;
sj0=l14;
sj1=0ULL;
si0=sj0 != sj1;
if(si0){
goto L126;
}
si0=l17;
si1=8U;
si0+=si1;
l10=si0;
si0=l41;
l13=si0;
L127:;
{
si0=l13;
if(si0){
goto L128;
}
sj0=1ULL;
l46=sj0;
goto L126;
L128:;
si0=l10;
si1=l10;
sj1=i64_load(&i->m0,(U64)si1);
sj2=1ULL;
sj1+=sj2;
l14=sj1;
i64_store(&i->m0,(U64)si0,sj1);
si0=l13;
si1=-8U;
si0+=si1;
l13=si0;
si0=l10;
si1=8U;
si0+=si1;
l10=si0;
sj0=l14;
si0=!(sj0);
if(si0){
goto L127;
}
}
L126:;
si0=l25;
si1=l15;
si1=i32_load(&i->m0,(U64)si1);
l13=si1;
si0=si0 >= si1;
if(si0){
goto L117;
}
si0=l5;
si0=i32_load(&i->m0,(U64)si0);
si1=l25;
si2=3U;
si1<<=(si2&31);
si0+=si1;
sj1=l46;
i64_store(&i->m0,(U64)si0,sj1);
si0=l48;
si1=1U;
si0+=si1;
l48=si0;
si1=l2;
si0=si0 != si1;
if(si0){
goto L122;
}
goto L118;
}
L121:;
si0=l50;
si0=i32_load(&i->m0,(U64)si0);
si1=l40;
si2=l10;
si3=3U;
si2<<=(si3&31);
l10=si2;
si1+=si2;
l13=si1;
si1=i32_load(&i->m0,(U64)si1+4U);
f977(i,si0,si1);
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
si1=l44;
si2=l10;
si1+=si2;
l10=si1;
si1=i32_load(&i->m0,(U64)si1+4U);
f977(i,si0,si1);
si0=l21;
si1=l13;
si1=i32_load(&i->m0,(U64)si1+4U);
l15=si1;
si0=si0 > si1;
if(si0){
goto L115;
}
si0=l21;
si1=l10;
si2=4U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
l15=si1;
si0=si0 > si1;
if(si0){
goto L114;
}
si0=l9;
si1=l34;
si2=l20;
si1-=si2;
i32_store(&i->m0,(U64)si0+52U,si1);
si0=l9;
si1=0U;
i32_store(&i->m0,(U64)si0+88U,si1);
si0=0U;
si1=l9;
si2=52U;
si1+=si2;
si2=1189840U;
si3=l9;
si4=88U;
si3+=si4;
si4=1189940U;
f1250(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L120:;
si0=l50;
si0=i32_load(&i->m0,(U64)si0);
si1=l40;
si2=l10;
si3=3U;
si2<<=(si3&31);
l10=si2;
si1+=si2;
l13=si1;
si1=i32_load(&i->m0,(U64)si1+4U);
f977(i,si0,si1);
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
si1=l44;
si2=l10;
si1+=si2;
l10=si1;
si1=i32_load(&i->m0,(U64)si1+4U);
f977(i,si0,si1);
si0=l21;
si1=l13;
si1=i32_load(&i->m0,(U64)si1+4U);
l15=si1;
si0=si0 > si1;
if(si0){
goto L115;
}
si0=l21;
si1=l10;
si2=4U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
l15=si1;
si0=si0 > si1;
if(si0){
goto L114;
}
si0=1189416U;
si1=35U;
si2=1189892U;
f604(i,si0,si1,si2);
UNREACHABLE;
L119:;
si0=l50;
l10=si0;
L129:;
{
si0=l10;
si0=i32_load(&i->m0,(U64)si0);
si1=l10;
si2=4U;
si1+=si2;
l13=si1;
si1=i32_load(&i->m0,(U64)si1);
f977(i,si0,si1);
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
si1=l3;
si2=4U;
si1+=si2;
l18=si1;
si1=i32_load(&i->m0,(U64)si1);
f977(i,si0,si1);
si0=l21;
si1=l13;
si1=i32_load(&i->m0,(U64)si1);
l15=si1;
si0=si0 > si1;
if(si0){
goto L115;
}
si0=l21;
si1=l18;
si1=i32_load(&i->m0,(U64)si1);
l15=si1;
si0=si0 > si1;
if(si0){
goto L114;
}
si0=l8;
si1=l47;
si2=l10;
si2=i32_load(&i->m0,(U64)si2);
si3=l21;
si4=l3;
si4=i32_load(&i->m0,(U64)si4);
si5=l21;
si6=l4;
si7=l49;
f1121(i,si0,si1,si2,si3,si4,si5,si6,si7);
si0=l25;
si1=l13;
si1=i32_load(&i->m0,(U64)si1);
l13=si1;
si0=si0 >= si1;
if(si0){
goto L117;
}
si0=l10;
si0=i32_load(&i->m0,(U64)si0);
si1=l25;
si2=3U;
si1<<=(si2&31);
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l10;
si1=8U;
si0+=si1;
l10=si0;
si0=l3;
si1=8U;
si0+=si1;
l3=si0;
si0=l2;
si1=-1U;
si0+=si1;
l2=si0;
if(si0){
goto L129;
}
}
L118:;
si0=l39;
si1=1U;
si0+=si1;
l39=si0;
si0=l50;
si1=l43;
si2=l42;
si3=l9;
si4=24U;
si3+=si4;
si4=l9;
si5=32U;
si4+=si5;
f991(i,si0,si1,si2,si3,si4);
si0=l35;
si1=-1U;
si0+=si1;
l35=si0;
si0=!(si0);
if(si0){
goto L49;
}
goto L116;
L117:;
}
si0=l25;
si1=l13;
si2=1195452U;
f594(i,si0,si1,si2);
UNREACHABLE;
L115:;
si0=l21;
si1=l15;
si2=1195420U;
f597(i,si0,si1,si2);
UNREACHABLE;
L114:;
si0=l21;
si1=l15;
si2=1195436U;
f597(i,si0,si1,si2);
UNREACHABLE;
L50:;
si0=l9;
si0=i32_load(&i->m0,(U64)si0+92U);
si0=!(si0);
if(si0){
goto L130;
}
si0=l9;
si0=i32_load(&i->m0,(U64)si0+88U);
f15024(i,si0);
L130:;
si0=l9;
si0=i32_load(&i->m0,(U64)si0+56U);
si0=!(si0);
if(si0){
goto L49;
}
si0=l9;
si0=i32_load(&i->m0,(U64)si0+52U);
f15024(i,si0);
L49:;
si0=l9;
si0=i32_load(&i->m0,(U64)si0+12U);
si1=l9;
si1=i32_load(&i->m0,(U64)si1+20U);
si2=l23;
si3=l19;
si4=l9;
si5=24U;
si4+=si5;
si5=l9;
si6=32U;
si5+=si6;
si6=l29;
si7=l26;
si8=l24;
si9=l32;
f1004(i,si0,si1,si2,si3,si4,si5,si6,si7,si8,si9);
si0=l9;
si0=i32_load(&i->m0,(U64)si0+8U);
si1=l9;
si1=i32_load(&i->m0,(U64)si1+4U);
si0+=si1;
l10=si0;
si1=l1;
si0=si0 > si1;
if(si0){
goto L132;
}
si0=l10;
si0=!(si0);
if(si0){
goto L133;
}
si0=l0;
si1=0U;
si2=l10;
si3=3U;
si2<<=(si3&31);
si0=f15145(i,si0,si1,si2);
L133:;
si0=l31;
si1=l33;
si0+=si1;
si1=-1U;
si0+=si1;
l13=si0;
si1=l9;
si1=i32_load(&i->m0,(U64)si1+20U);
l15=si1;
si0=si0 > si1;
if(si0){
goto L131;
}
si0=l0;
si1=l10;
si2=l9;
si2=i32_load(&i->m0,(U64)si2+12U);
si3=l13;
si4=l22;
si5=l25;
si6=l8;
si7=l38;
f984(i,si0,si1,si2,si3,si4,si5,si6,si7);
si0=l9;
si0=i32_load(&i->m0,(U64)si0+44U);
si0=!(si0);
if(si0){
goto L134;
}
si0=l9;
si0=i32_load(&i->m0,(U64)si0+40U);
f15024(i,si0);
L134:;
si0=l9;
si0=i32_load(&i->m0,(U64)si0+16U);
si0=!(si0);
if(si0){
goto L6;
}
si0=l9;
si0=i32_load(&i->m0,(U64)si0+12U);
f15024(i,si0);
goto L6;
L132:;
si0=l10;
si1=l1;
si2=1195388U;
f597(i,si0,si1,si2);
UNREACHABLE;
L131:;
si0=l13;
si1=l15;
si2=1195404U;
f597(i,si0,si1,si2);
UNREACHABLE;
L13:;
sj0=l14;
si1=l10;
si2=l13;
si3=1U;
si2<<=(si3&31);
si1+=si2;
si2=1194903U;
si1+=si2;
si1=i32_load8_u(&i->m0,(U64)si1);
l13=si1;
sj1=(U64)(si1);
sj0-=sj1;
l46=sj0;
sj1=32ULL;
si0=sj0 >= sj1;
if(si0){
goto L143;
}
si0=l13;
si1=16U;
si0=si0 >= si1;
if(si0){
goto L142;
}
sj0=l46;
si0=(U32)(sj0);
l6=si0;
si1=-1U;
si0^=si1;
l16=si0;
si0=l10;
si1=l13;
si2=1U;
si1<<=(si2&31);
si0<<=(si1&31);
l15=si0;
si1=1U;
si2=6U;
si3=l6;
si2-=si3;
si1<<=(si2&31);
si2=1U;
sj3=l46;
sj4=6ULL;
si3=sj3 < sj4;
si1=si3?si1:si2;
l10=si1;
si0=si0 <= si1;
if(si0){
goto L144;
}
si0=0U;
si1=l10;
si0-=si1;
l28=si0;
si0=4U;
si1=l6;
si0<<=(si1&31);
l21=si0;
L145:;
{
si0=l28;
si1=l15;
si0+=si1;
l13=si0;
si1=l6;
si0<<=(si1&31);
si1=l16;
si0+=si1;
l18=si0;
si1=1U;
si0=si0 <= si1;
if(si0){
goto L140;
}
si0=l15;
si1=l10;
si0-=si1;
l15=si0;
si0=l12;
si1=l18;
si2=1U;
si1>>=(si2&31);
l18=si1;
si0=DIV_U(si0,si1);
l17=si0;
si0=l11;
si1=l18;
si0=DIV_U(si0,si1);
l18=si0;
si0=l13;
si1=l10;
si0=si0 <= si1;
if(si0){
goto L146;
}
si0=l18;
si1=l17;
si0+=si1;
si1=1U;
si0+=si1;
si1=l21;
si0=si0 <= si1;
if(si0){
goto L145;
}
L146:;
}
si0=l10;
si1=l15;
si0+=si1;
l15=si0;
L144:;
si0=l5;
si1=l3;
si0+=si1;
l49=si0;
si1=l1;
si0=si0 > si1;
if(si0){
goto L141;
}
si0=l9;
si1=l15;
si2=l6;
si1<<=(si2&31);
l47=si1;
si2=6U;
si1>>=(si2&31);
l17=si1;
i32_store(&i->m0,(U64)si0+64U,si1);
si0=l47;
si1=l16;
si0+=si1;
l10=si0;
si1=2U;
si0=si0 >= si1;
if(si0){
goto L147;
}
si0=1192032U;
si1=25U;
si2=1195708U;
f604(i,si0,si1,si2);
UNREACHABLE;
L147:;
si0=l12;
si1=l10;
si2=1U;
si1>>=(si2&31);
l23=si1;
si0=DIV_U(si0,si1);
l19=si0;
si0=l11;
si1=l23;
si0=DIV_U(si0,si1);
l42=si0;
si0=l8;
si1=l17;
si2=1U;
si1+=si2;
l13=si1;
si2=l6;
si1<<=(si2&31);
l10=si1;
si2=3U;
si1<<=(si2&31);
si2=l13;
si3=3U;
si2*=si3;
si1+=si2;
l25=si1;
si0=si0 < si1;
if(si0){
goto L139;
}
si0=l25;
si1=l10;
si2=2U;
si1<<=(si2&31);
l21=si1;
si0=si0 < si1;
if(si0){
goto L138;
}
si0=4U;
si1=l6;
si0<<=(si1&31);
l12=si0;
si0=l25;
si1=l21;
si0-=si1;
l18=si0;
si0=l7;
si1=l21;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l11=si0;
si0=l6;
si1=30U;
si0=si0 < si1;
if(si0){
goto L148;
}
si0=0U;
l10=si0;
si0=l9;
si1=0U;
i32_store(&i->m0,(U64)si0+48U,si1);
si0=l9;
si1=l12;
i32_store(&i->m0,(U64)si0+44U,si1);
si0=l9;
si1=4U;
i32_store(&i->m0,(U64)si0+40U,si1);
goto L135;
L148:;
si0=l12;
si1=268435455U;
si0=si0 > si1;
if(si0){
goto L12;
}
si0=32U;
si1=l6;
si0<<=(si1&31);
l10=si0;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L12;
}
si0=4U;
l16=si0;
si0=l6;
si1=26U;
si0=si0 > si1;
if(si0){
goto L149;
}
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=l10;
si0=f15022(i,si0);
l16=si0;
si0=!(si0);
if(si0){
goto L137;
}
L149:;
si0=0U;
l10=si0;
si0=l9;
si1=0U;
i32_store(&i->m0,(U64)si0+48U,si1);
si0=l9;
si1=l12;
i32_store(&i->m0,(U64)si0+44U,si1);
si0=l9;
si1=l16;
i32_store(&i->m0,(U64)si0+40U,si1);
si0=l17;
si1=3U;
si0<<=(si1&31);
si1=8U;
si0+=si1;
l28=si0;
si0=l12;
l16=si0;
L150:;
{
si0=l17;
si1=l18;
si0=si0 >= si1;
if(si0){
goto L136;
}
si0=l10;
si1=l9;
si1=i32_load(&i->m0,(U64)si1+44U);
si0=si0 != si1;
if(si0){
goto L151;
}
si0=l9;
si1=40U;
si0+=si1;
si1=l10;
f1300(i,si0,si1);
si0=l9;
si0=i32_load(&i->m0,(U64)si0+48U);
l10=si0;
L151:;
si0=l18;
si1=l13;
si0-=si1;
l18=si0;
si0=l9;
si0=i32_load(&i->m0,(U64)si0+40U);
si1=l10;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l10=si0;
si1=l13;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l10;
si1=l11;
i32_store(&i->m0,(U64)si0,si1);
si0=l9;
si1=l9;
si1=i32_load(&i->m0,(U64)si1+48U);
si2=1U;
si1+=si2;
l10=si1;
i32_store(&i->m0,(U64)si0+48U,si1);
si0=l11;
si1=l28;
si0+=si1;
l11=si0;
si0=l16;
si1=-1U;
si0+=si1;
l16=si0;
si0=!(si0);
if(si0){
goto L135;
}
goto L150;
}
L143:;
si0=1206624U;
si1=32U;
si2=1206784U;
f604(i,si0,si1,si2);
UNREACHABLE;
L142:;
si0=1206624U;
si1=32U;
si2=1206784U;
f604(i,si0,si1,si2);
UNREACHABLE;
L141:;
si0=l49;
si1=l1;
si2=1195692U;
f597(i,si0,si1,si2);
UNREACHABLE;
L140:;
si0=1192032U;
si1=25U;
si2=1195676U;
f604(i,si0,si1,si2);
UNREACHABLE;
L139:;
si0=1189416U;
si1=35U;
si2=1195724U;
f604(i,si0,si1,si2);
UNREACHABLE;
L138:;
si0=1189416U;
si1=35U;
si2=1195740U;
f604(i,si0,si1,si2);
UNREACHABLE;
L137:;
si0=4U;
si1=l10;
f52(i,si0,si1);
UNREACHABLE;
L136:;
si0=1189416U;
si1=35U;
si2=1195972U;
f604(i,si0,si1,si2);
UNREACHABLE;
L135:;
si0=l17;
si1=l18;
si0=si0 >= si1;
if(si0){
goto L153;
}
si0=l9;
si1=l11;
i32_store(&i->m0,(U64)si0+80U,si1);
si0=l9;
si1=l13;
i32_store(&i->m0,(U64)si0+84U,si1);
si0=l17;
si1=l18;
si2=l13;
si1-=si2;
l24=si1;
si0=si0 >= si1;
if(si0){
goto L152;
}
si0=l9;
si1=l13;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l9;
si1=l11;
si2=l13;
si3=3U;
si2<<=(si3&31);
l26=si2;
si1+=si2;
l29=si1;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l6;
si1=30U;
si0=si0 < si1;
if(si0){
goto L155;
}
si0=l9;
si1=0U;
i32_store(&i->m0,(U64)si0+60U,si1);
si0=l9;
si1=l12;
i32_store(&i->m0,(U64)si0+56U,si1);
si0=l9;
si1=4U;
i32_store(&i->m0,(U64)si0+52U,si1);
goto L154;
L155:;
si0=l12;
si1=268435455U;
si0=si0 > si1;
if(si0){
goto L12;
}
si0=32U;
si1=l6;
si0<<=(si1&31);
l10=si0;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L12;
}
si0=4U;
l18=si0;
si0=l6;
si1=26U;
si0=si0 > si1;
if(si0){
goto L156;
}
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=l10;
si0=f15022(i,si0);
l18=si0;
si0=!(si0);
if(si0){
goto L11;
}
L156:;
si0=0U;
l10=si0;
si0=l9;
si1=0U;
i32_store(&i->m0,(U64)si0+60U,si1);
si0=l9;
si1=l12;
i32_store(&i->m0,(U64)si0+56U,si1);
si0=l9;
si1=l18;
i32_store(&i->m0,(U64)si0+52U,si1);
si0=l17;
si1=-1U;
si0^=si1;
l16=si0;
si0=l17;
si1=l21;
si0+=si1;
si1=1U;
si0+=si1;
l11=si0;
si0=l17;
si1=3U;
si0<<=(si1&31);
si1=8U;
si0+=si1;
l28=si0;
si0=l7;
l18=si0;
L157:;
{
si0=l17;
si1=l11;
si2=l16;
si1+=si2;
l11=si1;
si0=si0 >= si1;
if(si0){
goto L9;
}
si0=l10;
si1=l9;
si1=i32_load(&i->m0,(U64)si1+56U);
si0=si0 != si1;
if(si0){
goto L158;
}
si0=l9;
si1=52U;
si0+=si1;
si1=l10;
f1300(i,si0,si1);
si0=l9;
si0=i32_load(&i->m0,(U64)si0+60U);
l10=si0;
L158:;
si0=l9;
si0=i32_load(&i->m0,(U64)si0+52U);
si1=l10;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l10=si0;
si1=l13;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l10;
si1=l18;
i32_store(&i->m0,(U64)si0,si1);
si0=l9;
si1=l9;
si1=i32_load(&i->m0,(U64)si1+60U);
si2=1U;
si1+=si2;
l10=si1;
i32_store(&i->m0,(U64)si0+60U,si1);
si0=l18;
si1=l28;
si0+=si1;
l18=si0;
si0=l12;
si1=-1U;
si0+=si1;
l12=si0;
if(si0){
goto L157;
}
}
si0=l9;
si0=i32_load(&i->m0,(U64)si0+48U);
l10=si0;
L154:;
si0=l9;
si0=i32_load(&i->m0,(U64)si0+40U);
si1=l10;
si2=l2;
si3=l3;
si4=l23;
si0=f985(i,si0,si1,si2,si3,si4);
l48=si0;
si1=l9;
si1=i32_load(&i->m0,(U64)si1+48U);
l18=si1;
si0=si0 > si1;
if(si0){
goto L10;
}
si0=l29;
si1=l26;
si0+=si1;
l2=si0;
si0=l24;
si1=l13;
si0-=si1;
l24=si0;
si0=l42;
si1=l19;
si0+=si1;
si1=1U;
si0+=si1;
l10=si0;
si1=2U;
si2=l6;
si1<<=(si2&31);
l13=si1;
si2=1U;
si1|=si2;
si2=l10;
si3=l13;
si2=si2 > si3;
si0=si2?si0:si1;
si1=1U;
si0+=si1;
l11=si0;
si1=-2U;
si0&=si1;
l19=si0;
si0=l9;
si0=i32_load(&i->m0,(U64)si0+40U);
l10=si0;
si0=l48;
si1=l18;
si0=si0 != si1;
if(si0){
goto L159;
}
si0=l48;
l13=si0;
goto L7;
L159:;
si0=l18;
si1=3U;
si0<<=(si1&31);
si1=l48;
si2=3U;
si1<<=(si2&31);
l18=si1;
si0-=si1;
l13=si0;
si0=l10;
si1=l18;
si0+=si1;
l10=si0;
L160:;
{
si0=l10;
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l18=si0;
si0=!(si0);
if(si0){
goto L161;
}
si0=l10;
si0=i32_load(&i->m0,(U64)si0);
si1=0U;
si2=l18;
si3=3U;
si2<<=(si3&31);
si0=f15145(i,si0,si1,si2);
L161:;
si0=l10;
si1=8U;
si0+=si1;
l10=si0;
si0=l13;
si1=-8U;
si0+=si1;
l13=si0;
si0=!(si0);
if(si0){
goto L8;
}
goto L160;
}
L153:;
si0=1189416U;
si1=35U;
si2=1195756U;
f604(i,si0,si1,si2);
UNREACHABLE;
L152:;
si0=1189416U;
si1=35U;
si2=1195772U;
f604(i,si0,si1,si2);
UNREACHABLE;
L12:;
f53(i);
UNREACHABLE;
L11:;
si0=4U;
si1=l10;
f52(i,si0,si1);
UNREACHABLE;
L10:;
si0=l48;
si1=l18;
si2=1195788U;
f593(i,si0,si1,si2);
UNREACHABLE;
L9:;
si0=1189416U;
si1=35U;
si2=1195956U;
f604(i,si0,si1,si2);
UNREACHABLE;
L8:;
si0=l9;
si0=i32_load(&i->m0,(U64)si0+48U);
l13=si0;
si0=l9;
si0=i32_load(&i->m0,(U64)si0+40U);
l10=si0;
L7:;
si0=l10;
si1=l13;
si2=l15;
si3=l9;
si4=80U;
si3+=si4;
si4=l9;
si5=12U;
si4+=si5;
si5=l2;
si6=l24;
si7=l19;
f989(i,si0,si1,si2,si3,si4,si5,si6,si7);
si0=l9;
si0=i32_load(&i->m0,(U64)si0+52U);
si1=l9;
si1=i32_load(&i->m0,(U64)si1+60U);
si2=l4;
si3=l5;
si4=l23;
si0=f985(i,si0,si1,si2,si3,si4);
l5=si0;
si1=l9;
si1=i32_load(&i->m0,(U64)si1+60U);
l13=si1;
si0=si0 > si1;
if(si0){
goto L164;
}
si0=l9;
si0=i32_load(&i->m0,(U64)si0+52U);
l10=si0;
si0=l5;
si1=l13;
si0=si0 != si1;
if(si0){
goto L165;
}
si0=l5;
l13=si0;
goto L162;
L165:;
si0=l13;
si1=3U;
si0<<=(si1&31);
si1=l5;
si2=3U;
si1<<=(si2&31);
l18=si1;
si0-=si1;
l13=si0;
si0=l10;
si1=l18;
si0+=si1;
l10=si0;
L166:;
{
si0=l10;
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l18=si0;
si0=!(si0);
if(si0){
goto L167;
}
si0=l10;
si0=i32_load(&i->m0,(U64)si0);
si1=0U;
si2=l18;
si3=3U;
si2<<=(si3&31);
si0=f15145(i,si0,si1,si2);
L167:;
si0=l10;
si1=8U;
si0+=si1;
l10=si0;
si0=l13;
si1=-8U;
si0+=si1;
l13=si0;
si0=!(si0);
if(si0){
goto L163;
}
goto L166;
}
L164:;
si0=l5;
si1=l13;
si2=1195804U;
f593(i,si0,si1,si2);
UNREACHABLE;
L163:;
si0=l9;
si0=i32_load(&i->m0,(U64)si0+60U);
l13=si0;
si0=l9;
si0=i32_load(&i->m0,(U64)si0+52U);
l10=si0;
L162:;
si0=l10;
si1=l13;
si2=l15;
si3=l9;
si4=80U;
si3+=si4;
si4=l9;
si5=12U;
si4+=si5;
si5=l2;
si6=l24;
si7=l19;
f989(i,si0,si1,si2,si3,si4,si5,si6,si7);
si0=l9;
si1=l47;
si2=63U;
si1+=si2;
l12=si1;
si2=6U;
si1>>=(si2&31);
l4=si1;
i32_store(&i->m0,(U64)si0+72U,si1);
si0=l4;
si1=l9;
si1=i32_load(&i->m0,(U64)si1+64U);
si0=si0 != si1;
if(si0){
goto L1;
}
si0=l8;
si1=l25;
si0-=si1;
l21=si0;
si0=l7;
si1=l25;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l25=si0;
si0=l9;
si0=i32_load(&i->m0,(U64)si0+48U);
l13=si0;
si0=l9;
si0=i32_load(&i->m0,(U64)si0+40U);
l10=si0;
si0=l19;
si0=!(si0);
if(si0){
goto L168;
}
si0=l13;
si1=l9;
si1=i32_load(&i->m0,(U64)si1+60U);
l18=si1;
si2=l13;
si3=l18;
si2=si2 < si3;
si0=si2?si0:si1;
l18=si0;
si0=l12;
si1=-64U;
si0&=si1;
si1=l47;
si0-=si1;
l3=si0;
si0=l9;
si0=i32_load(&i->m0,(U64)si0+52U);
l13=si0;
si0=0U;
si1=l11;
si2=-2U;
si1&=si2;
si0-=si1;
l11=si0;
L172:;
{
si0=l18;
si0=!(si0);
if(si0){
goto L169;
}
si0=l10;
si0=i32_load(&i->m0,(U64)si0);
si1=l10;
si2=4U;
si1+=si2;
l12=si1;
si1=i32_load(&i->m0,(U64)si1);
f977(i,si0,si1);
si0=l13;
si0=i32_load(&i->m0,(U64)si0);
si1=l13;
si2=4U;
si1+=si2;
l17=si1;
si1=i32_load(&i->m0,(U64)si1);
f977(i,si0,si1);
si0=l12;
si0=i32_load(&i->m0,(U64)si0);
l12=si0;
if(si0){
goto L173;
}
si0=1189451U;
si1=43U;
si2=1195852U;
f604(i,si0,si1,si2);
UNREACHABLE;
L173:;
si0=l17;
si0=i32_load(&i->m0,(U64)si0);
l17=si0;
si0=!(si0);
if(si0){
goto L171;
}
si0=l10;
si0=i32_load(&i->m0,(U64)si0);
l16=si0;
si1=l12;
si2=-1U;
si1+=si2;
l6=si1;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l12=si0;
sj0=i64_load(&i->m0,(U64)si0);
sj1=0ULL;
si0=sj0 != sj1;
if(si0){
goto L170;
}
si0=l13;
si0=i32_load(&i->m0,(U64)si0);
l28=si0;
si1=l17;
si2=-1U;
si1+=si2;
l17=si1;
si2=3U;
si1<<=(si2&31);
si0+=si1;
sj0=i64_load(&i->m0,(U64)si0);
l14=sj0;
sj1=1ULL;
si0=sj0 > sj1;
if(si0){
goto L174;
}
si0=l12;
si1=l16;
si2=l6;
si3=l28;
si4=l17;
sj5=l14;
sj6=1ULL;
si5=sj5 == sj6;
si6=l3;
si7=l25;
si8=l21;
si1=f979(i,si1,si2,si3,si4,si5,si6,si7,si8);
sj1=(U64)(si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l18;
si1=-1U;
si0+=si1;
l18=si0;
si0=l13;
si1=8U;
si0+=si1;
l13=si0;
si0=l10;
si1=8U;
si0+=si1;
l10=si0;
si0=l11;
si1=1U;
si0+=si1;
l11=si0;
if(si0){
goto L172;
}
goto L169;
L174:;
}
si0=1195884U;
si1=23U;
si2=1195908U;
f604(i,si0,si1,si2);
UNREACHABLE;
L171:;
si0=1189451U;
si1=43U;
si2=1195868U;
f604(i,si0,si1,si2);
UNREACHABLE;
L170:;
si0=l9;
si1=0U;
i32_store(&i->m0,(U64)si0+88U,si1);
si0=0U;
si1=l12;
si2=1193472U;
si3=l9;
si4=88U;
si3+=si4;
si4=1195924U;
f1251(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L169:;
si0=l9;
si0=i32_load(&i->m0,(U64)si0+48U);
l13=si0;
si0=l9;
si0=i32_load(&i->m0,(U64)si0+40U);
l10=si0;
L168:;
si0=l10;
si1=l13;
si2=l15;
si3=l9;
si4=80U;
si3+=si4;
si4=l9;
si5=12U;
si4+=si5;
si5=l2;
si6=l24;
si7=l19;
f995(i,si0,si1,si2,si3,si4,si5,si6,si7);
si0=l19;
si1=l9;
si1=i32_load(&i->m0,(U64)si1+48U);
l10=si1;
si0=si0 > si1;
if(si0){
goto L5;
}
si0=l19;
si0=!(si0);
if(si0){
goto L175;
}
si0=l9;
si0=i32_load(&i->m0,(U64)si0+40U);
l10=si0;
si1=l19;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l17=si0;
sj0=l46;
sj1=2ULL;
sj0+=sj1;
l58=sj0;
sj1=63ULL;
sj0&=sj1;
l59=sj0;
L176:;
{
si0=l10;
si1=4U;
si0+=si1;
l18=si0;
si0=i32_load(&i->m0,(U64)si0);
l13=si0;
si0=!(si0);
if(si0){
goto L3;
}
si0=l10;
si0=i32_load(&i->m0,(U64)si0);
l15=si0;
si1=l13;
si2=-1U;
si1+=si2;
l11=si1;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l12=si0;
sj0=i64_load(&i->m0,(U64)si0);
l46=sj0;
si0=l15;
si1=l13;
sj2=l58;
sj0=f1026(i,si0,si1,sj2);
l14=sj0;
si0=l11;
si0=!(si0);
if(si0){
goto L2;
}
si0=l13;
si1=3U;
si0<<=(si1&31);
si1=l15;
si0+=si1;
si1=-16U;
si0+=si1;
l13=si0;
si1=l13;
sj1=i64_load(&i->m0,(U64)si1);
sj2=l14;
sj1-=sj2;
l57=sj1;
i64_store(&i->m0,(U64)si0,sj1);
si0=l12;
sj1=l46;
sj2=l59;
sj1=(U64)((I64)sj1>>(sj2&63));
sj2=l14;
sj3=0ULL;
si2=sj2 != sj3;
sj2=(U64)(si2);
sj1-=sj2;
sj2=l57;
sj3=0ULL;
sj4=l14;
sj3-=sj4;
si2=sj2 < sj3;
sj2=(U64)(si2);
sj1+=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l10;
si0=i32_load(&i->m0,(U64)si0);
si1=l18;
si1=i32_load(&i->m0,(U64)si1);
f977(i,si0,si1);
si0=l10;
si1=8U;
si0+=si1;
l10=si0;
si1=l17;
si0=si0 != si1;
if(si0){
goto L176;
}
}
L175:;
si0=l49;
si0=!(si0);
if(si0){
goto L177;
}
si0=l0;
si1=0U;
si2=l49;
si3=3U;
si2<<=(si3&31);
si0=f15145(i,si0,si1,si2);
L177:;
si0=l48;
si1=l5;
si0+=si1;
si1=-1U;
si0+=si1;
l10=si0;
si1=l9;
si1=i32_load(&i->m0,(U64)si1+48U);
l13=si1;
si0=si0 > si1;
if(si0){
goto L4;
}
si0=l0;
si1=l49;
si2=l9;
si2=i32_load(&i->m0,(U64)si2+40U);
si3=l10;
si4=l23;
si5=l4;
si6=l25;
si7=l21;
f984(i,si0,si1,si2,si3,si4,si5,si6,si7);
si0=l9;
si0=i32_load(&i->m0,(U64)si0+56U);
si0=!(si0);
if(si0){
goto L178;
}
si0=l9;
si0=i32_load(&i->m0,(U64)si0+52U);
f15024(i,si0);
L178:;
si0=l9;
si0=i32_load(&i->m0,(U64)si0+44U);
si0=!(si0);
if(si0){
goto L6;
}
si0=l9;
si0=i32_load(&i->m0,(U64)si0+40U);
f15024(i,si0);
L6:;
si0=l9;
si1=112U;
si0+=si1;
i->g0=si0;
goto L0;
L5:;
si0=l19;
si1=l10;
si2=1195820U;
f597(i,si0,si1,si2);
UNREACHABLE;
L4:;
si0=l10;
si1=l13;
si2=1195836U;
f597(i,si0,si1,si2);
UNREACHABLE;
L3:;
si0=1189451U;
si1=43U;
si2=1189972U;
f604(i,si0,si1,si2);
UNREACHABLE;
L2:;
si0=1189451U;
si1=43U;
si2=1189988U;
f604(i,si0,si1,si2);
UNREACHABLE;
L1:;
si0=l9;
si1=0U;
i32_store(&i->m0,(U64)si0+88U,si1);
si0=0U;
si1=l9;
si2=72U;
si1+=si2;
si2=l9;
si3=64U;
si2+=si3;
si3=l9;
si4=88U;
si3+=si4;
si4=1195940U;
f1250(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L0:;
}

U32 f1007(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 l3=0;
U64 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 l8=0;
U32 l9=0;
U64 l10=0;
U64 l11=0;
U64 l12=0;
U32 l13=0;
U32 si0,si1,si2,si3,si4;
U64 sj0,sj1,sj2,sj3,sj4;
si0=i->g0;
si1=32U;
si0-=si1;
l2=si0;
i->g0=si0;
si0=l0;
si1=6U;
si0<<=(si1&31);
si1=-1U;
si0+=si1;
l3=si0;
si1=1792U;
si0=si0 < si1;
if(si0){
goto L4;
}
si0=l3;
si1=28U;
si0=DIV_U(si0,si1);
si1=1U;
si0<<=(si1&31);
si1=1U;
si0|=si1;
si1=257U;
si0=si0 >= si1;
if(si0){
goto L3;
}
sj0=6ULL;
l4=sj0;
si0=0U;
l5=si0;
si0=1U;
l0=si0;
goto L2;
L4:;
si0=1196068U;
si1=40U;
si2=1196108U;
f604(i,si0,si1,si2);
UNREACHABLE;
L3:;
si0=64U;
l5=si0;
sj0=6ULL;
l4=sj0;
si0=1U;
l0=si0;
L15:;
{
si0=l5;
si1=l0;
si2=1U;
si1=si1 != si2;
l6=si1;
si0<<=(si1&31);
l5=si0;
si1=l0;
si2=1U;
si1=si1 == si2;
l7=si1;
si0<<=(si1&31);
sj1=l4;
si2=l6;
sj2=(U64)(si2);
sj1+=sj2;
l4=sj1;
si1=(U32)(sj1);
l8=si1;
si2=-1U;
si1^=si2;
si0+=si1;
l9=si0;
si1=2U;
si0=si0 < si1;
if(si0){
goto L14;
}
si0=1U;
si1=2U;
si2=l6;
si0=si2?si0:si1;
l0=si0;
si0=l3;
si1=l9;
si2=1U;
si1>>=(si2&31);
si0=DIV_U(si0,si1);
si1=1U;
si0<<=(si1&31);
si1=1U;
si0|=si1;
l6=si0;
si1=l5;
si2=2U;
si1<<=(si2&31);
si0=si0 > si1;
if(si0){
goto L15;
}
}
sj0=l4;
sj1=11ULL;
si0=sj0 < sj1;
if(si0){
goto L16;
}
sj0=l4;
si1=l6;
si2=l5;
si3=3U;
si2*=si3;
si1=si1 <= si2;
l5=si1;
sj1=(U64)(si1);
sj0-=sj1;
l4=sj0;
sj1=32ULL;
si0=sj0 >= sj1;
if(si0){
goto L13;
}
si0=3U;
si1=l7;
si0<<=(si1&31);
si1=l0;
si2=l5;
si0=si2?si0:si1;
sj1=l4;
si1=(U32)(sj1);
l6=si1;
si0<<=(si1&31);
l0=si0;
si1=6U;
si0>>=(si1&31);
l9=si0;
si1=l1;
si0=si0 <= si1;
if(si0){
goto L18;
}
si0=l0;
si0=!(si0);
if(si0){
goto L12;
}
sj0=4ULL;
l10=sj0;
si0=32U;
si1=l0;
si1=I32_CLZ(si1);
si0-=si1;
sj0=(U64)(si0);
si1=l0;
si1=I32_POPCNT(si1);
si2=1U;
si1=si1 == si2;
sj1=(U64)(si1);
sj0-=sj1;
l4=sj0;
sj1=12ULL;
si0=sj0 < sj1;
if(si0){
goto L19;
}
sj0=l4;
si0=(U32)(sj0);
l5=si0;
si1=30U;
si2=l5;
si3=30U;
si2=si2 < si3;
si0=si2?si0:si1;
si1=1193420U;
si0+=si1;
sj0=i64_load8_u(&i->m0,(U64)si0);
l10=sj0;
L19:;
sj0=l4;
sj1=1ULL;
sj0>>=(sj1&63);
l11=sj0;
sj1=l10;
sj0-=sj1;
l12=sj0;
sj1=32ULL;
si0=sj0 >= sj1;
if(si0){
goto L10;
}
sj0=4ULL;
l10=sj0;
sj0=l4;
sj1=12ULL;
si0=sj0 < sj1;
if(si0){
goto L20;
}
sj0=l4;
si0=(U32)(sj0);
l5=si0;
si1=30U;
si2=l5;
si3=30U;
si2=si2 < si3;
si0=si2?si0:si1;
si1=1193420U;
si0+=si1;
sj0=i64_load8_u(&i->m0,(U64)si0);
l10=sj0;
L20:;
sj0=l11;
sj1=l10;
sj0-=sj1;
l4=sj0;
sj1=32ULL;
si0=sj0 >= sj1;
if(si0){
goto L9;
}
si0=4U;
si1=l6;
si0<<=(si1&31);
l8=si0;
si0=l0;
sj1=l12;
si1=(U32)(sj1);
l5=si1;
si2=1U;
si1<<=(si2&31);
si0>>=(si1&31);
si1=l5;
si0<<=(si1&31);
si1=6U;
si0>>=(si1&31);
si1=1U;
si0+=si1;
l1=si0;
si0=l0;
sj1=l4;
si1=(U32)(sj1);
l5=si1;
si2=1U;
si1<<=(si2&31);
si0>>=(si1&31);
si1=l5;
si0<<=(si1&31);
l6=si0;
si1=6U;
si0>>=(si1&31);
si1=2U;
si0+=si1;
l0=si0;
si0=l6;
si1=63U;
si0+=si1;
l6=si0;
si1=6U;
si0>>=(si1&31);
l13=si0;
si1=1U;
si0<<=(si1&31);
l7=si0;
si0=0U;
l3=si0;
si0=l6;
si1=2752U;
si0=si0 < si1;
if(si0){
goto L7;
}
si0=l6;
si1=24960U;
si0=si0 < si1;
if(si0){
goto L8;
}
si0=l6;
si1=69760U;
si0=si0 >= si1;
if(si0){
goto L17;
}
si0=l13;
si1=3U;
si0*=si1;
si1=64U;
si0+=si1;
l3=si0;
goto L7;
L18:;
si0=l0;
si1=63U;
si0+=si1;
l0=si0;
si1=6U;
si0>>=(si1&31);
l7=si0;
si1=1U;
si0<<=(si1&31);
l3=si0;
si0=0U;
l5=si0;
si0=l0;
si1=2752U;
si0=si0 < si1;
if(si0){
goto L6;
}
si0=l0;
si1=24960U;
si0=si0 < si1;
if(si0){
goto L11;
}
si0=l0;
si1=69760U;
si0=si0 >= si1;
if(si0){
goto L21;
}
si0=l7;
si1=3U;
si0*=si1;
si1=64U;
si0+=si1;
l5=si0;
goto L6;
L21:;
si0=l0;
si1=748800U;
si0=si0 < si1;
if(si0){
goto L22;
}
si0=l7;
si1=50U;
si0=f1007(i,si0,si1);
l5=si0;
goto L6;
L22:;
si0=l7;
si1=15U;
si0*=si1;
si1=3U;
si0>>=(si1&31);
si1=505U;
si0+=si1;
l5=si0;
goto L6;
L17:;
si0=l6;
si1=748800U;
si0=si0 < si1;
if(si0){
goto L23;
}
si0=l13;
si1=50U;
si0=f1007(i,si0,si1);
l3=si0;
goto L7;
L23:;
si0=l13;
si1=15U;
si0*=si1;
si1=3U;
si0>>=(si1&31);
si1=505U;
si0+=si1;
l3=si0;
goto L7;
L16:;
si0=l8;
si1=-6U;
si0+=si1;
l5=si0;
si1=5U;
si0=si0 < si1;
if(si0){
goto L2;
}
si0=l5;
si1=5U;
si2=1196020U;
f594(i,si0,si1,si2);
UNREACHABLE;
L14:;
si0=1192032U;
si1=25U;
si2=1196052U;
f604(i,si0,si1,si2);
UNREACHABLE;
L13:;
si0=1206624U;
si1=32U;
si2=1206784U;
f604(i,si0,si1,si2);
UNREACHABLE;
L12:;
si0=l2;
si1=20U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=1U;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l2;
si1=1206456U;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l2;
si1=1206464U;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l2;
si1=8U;
si0+=si1;
si1=1206592U;
f614(i,si0,si1);
UNREACHABLE;
L11:;
si0=l3;
si1=128U;
si0+=si1;
l5=si0;
goto L6;
L10:;
si0=1206624U;
si1=32U;
si2=1206784U;
f604(i,si0,si1,si2);
UNREACHABLE;
L9:;
si0=1206624U;
si1=32U;
si2=1206784U;
f604(i,si0,si1,si2);
UNREACHABLE;
L8:;
si0=l7;
si1=128U;
si0+=si1;
l3=si0;
L7:;
si0=2U;
si1=l5;
si0<<=(si1&31);
si1=l1;
si2=l8;
si3=3U;
si2|=si3;
l6=si2;
si1*=si2;
si0+=si1;
si1=l0;
si2=l3;
si3=l7;
si2+=si3;
l5=si2;
si3=l0;
si4=l5;
si3=si3 > si4;
si1=si3?si1:si2;
si0+=si1;
l5=si0;
goto L5;
L6:;
si0=l5;
si1=l3;
si0+=si1;
l5=si0;
si0=4U;
si1=l6;
si0<<=(si1&31);
si1=3U;
si0|=si1;
l6=si0;
L5:;
si0=l5;
si1=l9;
si2=1U;
si1+=si2;
l0=si1;
si2=l5;
si3=l0;
si2=si2 > si3;
si0=si2?si0:si1;
si1=l6;
si2=l0;
si1*=si2;
si0+=si1;
l0=si0;
goto L1;
L2:;
sj0=l4;
si1=l0;
si2=l5;
si3=1U;
si2<<=(si3&31);
si1+=si2;
si2=1194903U;
si1+=si2;
si1=i32_load8_u(&i->m0,(U64)si1);
l5=si1;
sj1=(U64)(si1);
sj0-=sj1;
l4=sj0;
sj1=32ULL;
si0=sj0 >= sj1;
if(si0){
goto L27;
}
si0=l5;
si1=16U;
si0=si0 >= si1;
if(si0){
goto L26;
}
si0=l0;
si1=l5;
si2=1U;
si1<<=(si2&31);
si0<<=(si1&31);
l0=si0;
si1=1U;
si2=6U;
sj3=l4;
si3=(U32)(sj3);
l7=si3;
si2-=si3;
si1<<=(si2&31);
si2=1U;
sj3=l4;
sj4=6ULL;
si3=sj3 < sj4;
si1=si3?si1:si2;
l5=si1;
si0=si0 > si1;
if(si0){
goto L28;
}
si0=4U;
si1=l7;
si0<<=(si1&31);
l8=si0;
goto L24;
L28:;
si0=0U;
si1=l5;
si0-=si1;
l1=si0;
si0=4U;
si1=l7;
si0<<=(si1&31);
l8=si0;
si0=l7;
si1=-1U;
si0^=si1;
l13=si0;
L30:;
{
si0=l1;
si1=l0;
si0+=si1;
l6=si0;
si1=l7;
si0<<=(si1&31);
si1=l13;
si0+=si1;
l9=si0;
si1=2U;
si0=si0 < si1;
if(si0){
goto L29;
}
si0=l0;
si1=l5;
si0-=si1;
l0=si0;
si0=l3;
si1=l9;
si2=1U;
si1>>=(si2&31);
si0=DIV_U(si0,si1);
l9=si0;
si0=l6;
si1=l5;
si0=si0 <= si1;
if(si0){
goto L25;
}
si0=l9;
si1=1U;
si0<<=(si1&31);
si1=1U;
si0|=si1;
si1=l8;
si0=si0 > si1;
if(si0){
goto L25;
}
goto L30;
}
L29:;
si0=1192032U;
si1=25U;
si2=1196036U;
f604(i,si0,si1,si2);
UNREACHABLE;
L27:;
si0=1206624U;
si1=32U;
si2=1206784U;
f604(i,si0,si1,si2);
UNREACHABLE;
L26:;
si0=1206624U;
si1=32U;
si2=1206784U;
f604(i,si0,si1,si2);
UNREACHABLE;
L25:;
si0=l5;
si1=l0;
si0+=si1;
l0=si0;
L24:;
si0=l0;
si1=l7;
si0<<=(si1&31);
l5=si0;
si1=6U;
si0>>=(si1&31);
si1=1U;
si0+=si1;
l0=si0;
si0=l5;
si1=63U;
si0+=si1;
l5=si0;
si1=6U;
si0>>=(si1&31);
l3=si0;
si1=1U;
si0<<=(si1&31);
l9=si0;
si0=0U;
l6=si0;
si0=l5;
si1=2752U;
si0=si0 < si1;
if(si0){
goto L31;
}
si0=l5;
si1=24960U;
si0=si0 < si1;
if(si0){
goto L32;
}
si0=l5;
si1=69760U;
si0=si0 >= si1;
if(si0){
goto L33;
}
si0=l3;
si1=3U;
si0*=si1;
si1=64U;
si0+=si1;
l6=si0;
goto L31;
L33:;
si0=l5;
si1=748800U;
si0=si0 < si1;
if(si0){
goto L34;
}
si0=l3;
si1=50U;
si0=f1007(i,si0,si1);
l6=si0;
goto L31;
L34:;
si0=l3;
si1=15U;
si0*=si1;
si1=3U;
si0>>=(si1&31);
si1=505U;
si0+=si1;
l6=si0;
goto L31;
L32:;
si0=l9;
si1=128U;
si0+=si1;
l6=si0;
L31:;
si0=l0;
si1=l6;
si2=l9;
si1+=si2;
l5=si1;
si2=l0;
si3=l5;
si2=si2 > si3;
si0=si2?si0:si1;
si1=l0;
si2=l8;
si3=3U;
si2|=si3;
si1*=si2;
si0+=si1;
l0=si0;
L1:;
si0=l2;
si1=32U;
si0+=si1;
i->g0=si0;
si0=l0;
L0:;
return si0;
}

void f1008(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4,U32 l5,U32 l6) {
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
U32 l30=0;
U32 l31=0;
U32 l32=0;
U32 l33=0;
U32 l34=0;
U64 l35=0;
U64 l36=0;
U32 l37=0;
U32 l38=0;
U64 l39=0;
U32 l40=0;
U32 l41=0;
U32 l42=0;
U32 l43=0;
U32 l44=0;
U32 l45=0;
U32 l46=0;
U64 l47=0;
U32 si0,si1,si2,si3,si4,si5,si6,si7,si8,si9,si10,si11,si12;
U64 sj0,sj1,sj2,sj3,sj4;
si0=i->g0;
si1=80U;
si0-=si1;
l7=si0;
i->g0=si0;
si0=l7;
si1=l3;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si0=!(si0);
if(si0){
goto L16;
}
si0=l3;
si1=6U;
si0<<=(si1&31);
si1=-1U;
si0+=si1;
l8=si0;
si1=1792U;
si0=si0 < si1;
if(si0){
goto L18;
}
si0=l8;
si1=28U;
si0=DIV_U(si0,si1);
si1=1U;
si0<<=(si1&31);
si1=1U;
si0|=si1;
si1=257U;
si0=si0 >= si1;
if(si0){
goto L17;
}
sj0=6ULL;
l9=sj0;
si0=0U;
l10=si0;
si0=1U;
l11=si0;
goto L10;
L18:;
si0=1196068U;
si1=40U;
si2=1196732U;
f604(i,si0,si1,si2);
UNREACHABLE;
L17:;
si0=64U;
l10=si0;
sj0=6ULL;
l9=sj0;
si0=1U;
l11=si0;
L20:;
{
si0=l10;
si1=l11;
si2=1U;
si1=si1 != si2;
l12=si1;
si0<<=(si1&31);
l10=si0;
si1=l11;
si2=1U;
si1=si1 == si2;
l13=si1;
si0<<=(si1&31);
sj1=l9;
si2=l12;
sj2=(U64)(si2);
sj1+=sj2;
l9=sj1;
si1=(U32)(sj1);
l14=si1;
si2=-1U;
si1^=si2;
si0+=si1;
l15=si0;
si1=2U;
si0=si0 < si1;
if(si0){
goto L19;
}
si0=1U;
si1=2U;
si2=l12;
si0=si2?si0:si1;
l11=si0;
si0=l8;
si1=l15;
si2=1U;
si1>>=(si2&31);
si0=DIV_U(si0,si1);
si1=1U;
si0<<=(si1&31);
si1=1U;
si0|=si1;
l12=si0;
si1=l10;
si2=2U;
si1<<=(si2&31);
si0=si0 > si1;
if(si0){
goto L20;
}
}
sj0=l9;
sj1=11ULL;
si0=sj0 < sj1;
if(si0){
goto L21;
}
sj0=l9;
si1=l12;
si2=l10;
si3=3U;
si2*=si3;
si1=si1 <= si2;
l10=si1;
sj1=(U64)(si1);
sj0-=sj1;
l9=sj0;
sj1=32ULL;
si0=sj0 >= sj1;
if(si0){
goto L15;
}
si0=3U;
si1=l13;
si0<<=(si1&31);
si1=l11;
si2=l10;
si0=si2?si0:si1;
l16=si0;
sj1=l9;
si1=(U32)(sj1);
l13=si1;
si0<<=(si1&31);
l17=si0;
si1=l13;
si2=-1U;
si1^=si2;
si0+=si1;
l11=si0;
si1=2U;
si0=si0 < si1;
if(si0){
goto L22;
}
si0=l8;
si1=l11;
si2=1U;
si1>>=(si2&31);
l18=si1;
si0=DIV_U(si0,si1);
l19=si0;
si0=l6;
si1=l17;
si2=6U;
si1>>=(si2&31);
l20=si1;
si2=1U;
si1+=si2;
l21=si1;
si2=4U;
si3=l13;
si2<<=(si3&31);
l8=si2;
si3=3U;
si2|=si3;
l22=si2;
si1*=si2;
l14=si1;
si0=si0 < si1;
if(si0){
goto L14;
}
si0=l13;
si1=30U;
si0=si0 < si1;
if(si0){
goto L23;
}
si0=0U;
l11=si0;
si0=l7;
si1=0U;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l7;
si1=l8;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l7;
si1=4U;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l14;
l10=si0;
si0=l5;
l23=si0;
goto L11;
L23:;
si0=l8;
si1=268435455U;
si0=si0 > si1;
if(si0){
goto L9;
}
si0=32U;
si1=l13;
si0<<=(si1&31);
l11=si0;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L9;
}
si0=4U;
l10=si0;
si0=l13;
si1=26U;
si0=si0 > si1;
if(si0){
goto L24;
}
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=l11;
si0=f15022(i,si0);
l10=si0;
si0=!(si0);
if(si0){
goto L13;
}
L24:;
si0=0U;
l11=si0;
si0=l7;
si1=0U;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l7;
si1=l8;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l7;
si1=l10;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l20;
si1=3U;
si0<<=(si1&31);
si1=8U;
si0+=si1;
l15=si0;
si0=l8;
l12=si0;
si0=l5;
l23=si0;
si0=l14;
l10=si0;
L25:;
{
si0=l20;
si1=l10;
si0=si0 >= si1;
if(si0){
goto L12;
}
si0=l11;
si1=l7;
si1=i32_load(&i->m0,(U64)si1+8U);
si0=si0 != si1;
if(si0){
goto L26;
}
si0=l7;
si1=4U;
si0+=si1;
si1=l11;
f1300(i,si0,si1);
si0=l7;
si0=i32_load(&i->m0,(U64)si0+12U);
l11=si0;
L26:;
si0=l10;
si1=l21;
si0-=si1;
l10=si0;
si0=l7;
si0=i32_load(&i->m0,(U64)si0+4U);
si1=l11;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l11=si0;
si1=l21;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l11;
si1=l23;
i32_store(&i->m0,(U64)si0,si1);
si0=l7;
si1=l7;
si1=i32_load(&i->m0,(U64)si1+12U);
si2=1U;
si1+=si2;
l11=si1;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l23;
si1=l15;
si0+=si1;
l23=si0;
si0=l12;
si1=-1U;
si0+=si1;
l12=si0;
si0=!(si0);
if(si0){
goto L11;
}
goto L25;
}
L22:;
si0=1192032U;
si1=25U;
si2=1196140U;
f604(i,si0,si1,si2);
UNREACHABLE;
L21:;
si0=l14;
si1=-6U;
si0+=si1;
l10=si0;
si1=5U;
si0=si0 < si1;
if(si0){
goto L10;
}
si0=l10;
si1=5U;
si2=1196492U;
f594(i,si0,si1,si2);
UNREACHABLE;
L19:;
si0=1192032U;
si1=25U;
si2=1196716U;
f604(i,si0,si1,si2);
UNREACHABLE;
L16:;
si0=l7;
si1=0U;
i32_store(&i->m0,(U64)si0+56U,si1);
si0=1U;
si1=l7;
si2=1189840U;
si3=l7;
si4=56U;
si3+=si4;
si4=1196124U;
f1250(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L15:;
si0=1206624U;
si1=32U;
si2=1206784U;
f604(i,si0,si1,si2);
UNREACHABLE;
L14:;
si0=1189416U;
si1=35U;
si2=1196156U;
f604(i,si0,si1,si2);
UNREACHABLE;
L13:;
si0=4U;
si1=l11;
f52(i,si0,si1);
UNREACHABLE;
L12:;
si0=1189416U;
si1=35U;
si2=1196476U;
f604(i,si0,si1,si2);
UNREACHABLE;
L11:;
si0=l20;
si1=l10;
si0=si0 >= si1;
if(si0){
goto L30;
}
si0=l20;
si1=l10;
si2=l21;
si1-=si2;
l10=si1;
si0=si0 >= si1;
if(si0){
goto L31;
}
si0=l7;
si1=l21;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l7;
si1=l23;
si2=l21;
si3=3U;
si2<<=(si3&31);
l12=si2;
si1+=si2;
l15=si1;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l7;
si1=l10;
si2=l21;
si1-=si2;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l7;
si1=l15;
si2=l12;
si1+=si2;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l19;
si1=1U;
si0<<=(si1&31);
si1=1U;
si0|=si1;
l12=si0;
si1=2U;
si2=l13;
si1<<=(si2&31);
si0=si0 <= si1;
if(si0){
goto L33;
}
sj0=l9;
sj1=1ULL;
sj0>>=(sj1&63);
si0=(U32)(sj0);
l24=si0;
si1=30U;
si0=si0 <= si1;
if(si0){
goto L32;
}
si0=1192032U;
si1=25U;
si2=1196204U;
f604(i,si0,si1,si2);
UNREACHABLE;
L33:;
si0=1195580U;
si1=32U;
si2=1196460U;
f604(i,si0,si1,si2);
UNREACHABLE;
L32:;
si0=l7;
si0=i32_load(&i->m0,(U64)si0+4U);
si1=l11;
si2=l2;
si3=l3;
si4=l18;
si0=f985(i,si0,si1,si2,si3,si4);
l25=si0;
si1=l7;
si1=i32_load(&i->m0,(U64)si1+12U);
l10=si1;
si0=si0 > si1;
if(si0){
goto L34;
}
si0=1U;
si1=l24;
si0<<=(si1&31);
l26=si0;
si0=2U;
si1=l24;
si0<<=(si1&31);
l11=si0;
si1=l12;
si0+=si1;
si1=-1U;
si0+=si1;
si1=0U;
si2=l11;
si1-=si2;
si0&=si1;
l27=si0;
si0=l7;
si0=i32_load(&i->m0,(U64)si0+4U);
l11=si0;
si0=l25;
si1=l10;
si0=si0 != si1;
if(si0){
goto L36;
}
si0=l25;
l10=si0;
goto L35;
L36:;
si0=l10;
si1=3U;
si0<<=(si1&31);
si1=l25;
si2=3U;
si1<<=(si2&31);
l12=si1;
si0-=si1;
l10=si0;
si0=l11;
si1=l12;
si0+=si1;
l11=si0;
L37:;
{
si0=l11;
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l12=si0;
si0=!(si0);
if(si0){
goto L38;
}
si0=l11;
si0=i32_load(&i->m0,(U64)si0);
si1=0U;
si2=l12;
si3=3U;
si2<<=(si3&31);
si0=f15145(i,si0,si1,si2);
L38:;
si0=l11;
si1=8U;
si0+=si1;
l11=si0;
si0=l10;
si1=-8U;
si0+=si1;
l10=si0;
if(si0){
goto L37;
}
}
si0=l7;
si0=i32_load(&i->m0,(U64)si0+12U);
l10=si0;
si0=l7;
si0=i32_load(&i->m0,(U64)si0+4U);
l11=si0;
L35:;
si0=l11;
si1=l10;
si2=l16;
si3=l7;
si4=16U;
si3+=si4;
si4=l7;
si5=24U;
si4+=si5;
si5=l23;
si6=l21;
si7=l26;
si8=l27;
f997(i,si0,si1,si2,si3,si4,si5,si6,si7,si8);
si0=l8;
si1=1U;
si0>>=(si1&31);
l28=si0;
si1=l24;
si0>>=(si1&31);
l29=si0;
si0=!(si0);
if(si0){
goto L39;
}
si0=l7;
si0=i32_load(&i->m0,(U64)si0+12U);
l11=si0;
si1=l28;
si0=si0 < si1;
if(si0){
goto L40;
}
si0=1U;
si1=l13;
si0<<=(si1&31);
l30=si0;
si0=l6;
si1=l14;
si0-=si1;
l31=si0;
si0=l5;
si1=l14;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l3=si0;
si0=32U;
si1=l29;
si1=I32_CLZ(si1);
si0-=si1;
sj0=(U64)(si0);
sj1=-1ULL;
sj0+=sj1;
l9=sj0;
si0=l29;
si1=l16;
si0*=si1;
l32=si0;
si0=l11;
si1=l28;
si0-=si1;
l33=si0;
si0=l7;
si0=i32_load(&i->m0,(U64)si0+4U);
l11=si0;
si1=l28;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l34=si0;
si0=l20;
si1=l4;
si0=si0 <= si1;
if(si0){
goto L29;
}
si0=l17;
si0=!(si0);
if(si0){
goto L41;
}
sj0=4ULL;
l35=sj0;
si0=32U;
si1=l17;
si1=I32_CLZ(si1);
si0-=si1;
sj0=(U64)(si0);
si1=l17;
si1=I32_POPCNT(si1);
si2=1U;
si1=si1 == si2;
sj1=(U64)(si1);
sj0-=sj1;
l36=sj0;
sj1=12ULL;
si0=sj0 < sj1;
if(si0){
goto L42;
}
sj0=l36;
si0=(U32)(sj0);
l11=si0;
si1=30U;
si2=l11;
si3=30U;
si2=si2 < si3;
si0=si2?si0:si1;
si1=1193420U;
si0+=si1;
sj0=i64_load8_u(&i->m0,(U64)si0);
l35=sj0;
L42:;
sj0=l36;
sj1=1ULL;
sj0>>=(sj1&63);
sj1=l35;
sj0-=sj1;
l35=sj0;
sj1=32ULL;
si0=sj0 >= sj1;
if(si0){
goto L43;
}
si0=l31;
si1=l17;
sj2=l35;
si2=(U32)(sj2);
l15=si2;
si3=1U;
si2<<=(si3&31);
si1>>=(si2&31);
si2=l15;
si1<<=(si2&31);
si2=6U;
si1>>=(si2&31);
l2=si1;
si2=1U;
si1+=si2;
l12=si1;
si2=l22;
si1*=si2;
l10=si1;
si0=si0 < si1;
if(si0){
goto L44;
}
si0=0U;
l11=si0;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=16U;
si1=l15;
si0<<=(si1&31);
l13=si0;
si0=f15022(i,si0);
l8=si0;
si0=!(si0);
if(si0){
goto L45;
}
si0=l31;
si1=l10;
si0-=si1;
l19=si0;
si0=l3;
si1=l10;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l6=si0;
si0=l7;
si1=0U;
i32_store(&i->m0,(U64)si0+64U,si1);
si0=l7;
si1=l8;
i32_store(&i->m0,(U64)si0+56U,si1);
si0=l2;
si1=3U;
si0<<=(si1&31);
si1=8U;
si0+=si1;
l8=si0;
si0=l7;
si1=2U;
si2=l15;
si1<<=(si2&31);
l4=si1;
i32_store(&i->m0,(U64)si0+60U,si1);
si0=l4;
si1=l2;
si0+=si1;
l22=si0;
si1=l14;
si0+=si1;
si1=3U;
si0<<=(si1&31);
si1=l5;
si0+=si1;
si1=8U;
si0+=si1;
l15=si0;
si0=l3;
l14=si0;
si0=l4;
l13=si0;
L50:;
{
si0=l2;
si1=l10;
si0=si0 >= si1;
if(si0){
goto L49;
}
si0=l11;
si1=l7;
si1=i32_load(&i->m0,(U64)si1+60U);
si0=si0 != si1;
if(si0){
goto L51;
}
si0=l7;
si1=56U;
si0+=si1;
si1=l11;
f1300(i,si0,si1);
si0=l7;
si0=i32_load(&i->m0,(U64)si0+64U);
l11=si0;
L51:;
si0=l10;
si1=l12;
si0-=si1;
l10=si0;
si0=l7;
si0=i32_load(&i->m0,(U64)si0+56U);
si1=l11;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l11=si0;
si1=l12;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l11;
si1=l14;
i32_store(&i->m0,(U64)si0,si1);
si0=l7;
si1=l7;
si1=i32_load(&i->m0,(U64)si1+64U);
si2=1U;
si1+=si2;
l11=si1;
i32_store(&i->m0,(U64)si0+64U,si1);
si0=l15;
si1=l8;
si0+=si1;
l15=si0;
si0=l14;
si1=l8;
si0+=si1;
l14=si0;
si0=l13;
si1=-1U;
si0+=si1;
l13=si0;
if(si0){
goto L50;
}
}
si0=l4;
si1=l10;
si0=si0 > si1;
if(si0){
goto L46;
}
si0=l2;
si1=l10;
si2=l4;
si1-=si2;
si0=si0 >= si1;
if(si0){
goto L47;
}
si0=l7;
si1=l12;
i32_store(&i->m0,(U64)si0+36U,si1);
si0=l7;
si1=l14;
si2=l4;
si3=3U;
si2<<=(si3&31);
l11=si2;
si1+=si2;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l2;
si1=l22;
si2=-1U;
si1^=si2;
si2=l10;
si1+=si2;
si0=si0 >= si1;
if(si0){
goto L48;
}
si0=l7;
si1=l12;
i32_store(&i->m0,(U64)si0+44U,si1);
si0=l7;
si1=l15;
i32_store(&i->m0,(U64)si0+40U,si1);
si0=l7;
si1=l10;
si2=l4;
si3=l2;
si4=1U;
si3<<=(si4&31);
si2+=si3;
si1-=si2;
si2=-2U;
si1+=si2;
i32_store(&i->m0,(U64)si0+52U,si1);
si0=l7;
si1=l2;
si2=4U;
si1<<=(si2&31);
si2=l11;
si1+=si2;
si2=l14;
si1+=si2;
si2=16U;
si1+=si2;
i32_store(&i->m0,(U64)si0+48U,si1);
si0=l26;
si1=l27;
si2=l28;
si1-=si2;
l11=si1;
si0=si0 > si1;
if(si0){
goto L28;
}
si0=l11;
si1=l24;
si0>>=(si1&31);
l11=si0;
si1=1U;
si2=l11;
si3=1U;
si2=si2 > si3;
si0=si2?si0:si1;
l37=si0;
si0=0U;
l5=si0;
si0=0U;
sj1=l9;
si1=(U32)(sj1);
si0-=si1;
si1=31U;
si0&=si1;
l38=si0;
L53:;
{
si0=l33;
si1=l5;
si2=24U;
si1<<=(si2&31);
si2=l5;
si3=65280U;
si2&=si3;
si3=8U;
si2<<=(si3&31);
si1|=si2;
si2=l5;
si3=8U;
si2>>=(si3&31);
si3=65280U;
si2&=si3;
si3=l5;
si4=24U;
si3>>=(si4&31);
si2|=si3;
si1|=si2;
l11=si1;
si2=4U;
si1>>=(si2&31);
si2=252645135U;
si1&=si2;
si2=l11;
si3=252645135U;
si2&=si3;
si3=4U;
si2<<=(si3&31);
si1|=si2;
l11=si1;
si2=2U;
si1>>=(si2&31);
si2=858993459U;
si1&=si2;
si2=l11;
si3=858993459U;
si2&=si3;
si3=2U;
si2<<=(si3&31);
si1|=si2;
l11=si1;
si2=1U;
si1>>=(si2&31);
si2=1431655765U;
si1&=si2;
si2=l11;
si3=1431655765U;
si2&=si3;
si3=1U;
si2<<=(si3&31);
si1|=si2;
si2=l38;
si1>>=(si2&31);
si2=l24;
si1<<=(si2&31);
l11=si1;
si0=si0 < si1;
if(si0){
goto L52;
}
si0=l26;
si1=l33;
si2=l11;
si1-=si2;
l10=si1;
si0=si0 > si1;
if(si0){
goto L54;
}
si0=l5;
si1=1U;
si0+=si1;
l5=si0;
si0=l34;
si1=l11;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l22=si0;
si1=l26;
si2=l32;
si3=l7;
si4=16U;
si3+=si4;
si4=l7;
si5=24U;
si4+=si5;
f986(i,si0,si1,si2,si3,si4);
si0=l22;
si1=l26;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l2=si0;
si0=l22;
l11=si0;
L55:;
{
si0=l11;
l11=si0;
si0=i32_load(&i->m0,(U64)si0+4U);
l13=si0;
si1=-1U;
si0+=si1;
l10=si0;
si0=l13;
si0=!(si0);
if(si0){
goto L59;
}
si0=l11;
si0=i32_load(&i->m0,(U64)si0);
l15=si0;
si1=l10;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l8=si0;
sj0=i64_load(&i->m0,(U64)si0);
l9=sj0;
si0=!(sj0);
if(si0){
goto L56;
}
si0=l8;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l15;
sj0=i64_load(&i->m0,(U64)si0);
l35=sj0;
sj1=l9;
sj0-=sj1;
l36=sj0;
sj1=l35;
sj0^=sj1;
sj1=-1ULL;
si0=(U64)((I64)sj0>(I64)sj1);
if(si0){
goto L58;
}
sj0=0ULL;
sj1=l9;
sj0-=sj1;
l39=sj0;
sj1=-1ULL;
si0=(U64)((I64)sj0>(I64)sj1);
if(si0){
goto L60;
}
si0=l15;
sj1=l36;
i64_store(&i->m0,(U64)si0,sj1);
sj0=l35;
sj1=l9;
si0=sj0 >= sj1;
if(si0){
goto L57;
}
si0=l15;
si1=8U;
si0+=si1;
l10=si0;
si0=l13;
si1=3U;
si0<<=(si1&31);
si1=-8U;
si0+=si1;
l12=si0;
L61:;
{
si0=l12;
si0=!(si0);
if(si0){
goto L57;
}
si0=l10;
si1=l10;
sj1=i64_load(&i->m0,(U64)si1);
l9=sj1;
sj2=-1ULL;
sj1+=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l12;
si1=-8U;
si0+=si1;
l12=si0;
si0=l10;
si1=8U;
si0+=si1;
l10=si0;
sj0=l9;
si0=!(sj0);
if(si0){
goto L61;
}
goto L57;
}
L60:;
si0=l15;
sj1=l35;
sj2=l39;
sj1+=sj2;
l9=sj1;
i64_store(&i->m0,(U64)si0,sj1);
sj0=l9;
sj1=l35;
si0=sj0 >= sj1;
if(si0){
goto L57;
}
si0=l15;
si1=8U;
si0+=si1;
l10=si0;
si0=l13;
si1=3U;
si0<<=(si1&31);
si1=-8U;
si0+=si1;
l12=si0;
L62:;
{
si0=l12;
si0=!(si0);
if(si0){
goto L57;
}
si0=l10;
si1=l10;
sj1=i64_load(&i->m0,(U64)si1);
sj2=1ULL;
sj1+=sj2;
l9=sj1;
i64_store(&i->m0,(U64)si0,sj1);
si0=l12;
si1=-8U;
si0+=si1;
l12=si0;
si0=l10;
si1=8U;
si0+=si1;
l10=si0;
sj0=l9;
si0=!(sj0);
if(si0){
goto L62;
}
goto L57;
}
L59:;
si0=l10;
si1=0U;
si2=1189824U;
f594(i,si0,si1,si2);
UNREACHABLE;
L58:;
si0=l15;
sj1=l36;
i64_store(&i->m0,(U64)si0,sj1);
L57:;
si0=l8;
sj0=i64_load(&i->m0,(U64)si0);
l9=sj0;
si0=!(sj0);
if(si0){
goto L56;
}
si0=l8;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l15;
sj0=i64_load(&i->m0,(U64)si0);
l35=sj0;
sj1=l9;
sj0-=sj1;
l36=sj0;
sj1=l35;
sj0^=sj1;
sj1=-1ULL;
si0=(U64)((I64)sj0>(I64)sj1);
if(si0){
goto L64;
}
sj0=0ULL;
sj1=l9;
sj0-=sj1;
l39=sj0;
sj1=-1ULL;
si0=(U64)((I64)sj0>(I64)sj1);
if(si0){
goto L65;
}
si0=l15;
sj1=l36;
i64_store(&i->m0,(U64)si0,sj1);
sj0=l35;
sj1=l9;
si0=sj0 >= sj1;
if(si0){
goto L63;
}
si0=l15;
si1=8U;
si0+=si1;
l10=si0;
si0=l13;
si1=3U;
si0<<=(si1&31);
si1=-8U;
si0+=si1;
l12=si0;
L66:;
{
si0=l12;
si0=!(si0);
if(si0){
goto L63;
}
si0=l10;
si1=l10;
sj1=i64_load(&i->m0,(U64)si1);
l9=sj1;
sj2=-1ULL;
sj1+=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l12;
si1=-8U;
si0+=si1;
l12=si0;
si0=l10;
si1=8U;
si0+=si1;
l10=si0;
sj0=l9;
si0=!(sj0);
if(si0){
goto L66;
}
goto L63;
}
L65:;
si0=l15;
sj1=l35;
sj2=l39;
sj1+=sj2;
l9=sj1;
i64_store(&i->m0,(U64)si0,sj1);
sj0=l9;
sj1=l35;
si0=sj0 >= sj1;
if(si0){
goto L63;
}
si0=l15;
si1=8U;
si0+=si1;
l10=si0;
si0=l13;
si1=3U;
si0<<=(si1&31);
si1=-8U;
si0+=si1;
l12=si0;
L67:;
{
si0=l12;
si0=!(si0);
if(si0){
goto L63;
}
si0=l10;
si1=l10;
sj1=i64_load(&i->m0,(U64)si1);
sj2=1ULL;
sj1+=sj2;
l9=sj1;
i64_store(&i->m0,(U64)si0,sj1);
si0=l12;
si1=-8U;
si0+=si1;
l12=si0;
si0=l10;
si1=8U;
si0+=si1;
l10=si0;
sj0=l9;
si0=!(sj0);
if(si0){
goto L67;
}
goto L63;
}
L64:;
si0=l15;
sj1=l36;
i64_store(&i->m0,(U64)si0,sj1);
L63:;
si0=l8;
sj0=i64_load(&i->m0,(U64)si0);
sj1=-1ULL;
si0=sj0 != sj1;
if(si0){
goto L56;
}
si0=l8;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l15;
sj0=i64_load(&i->m0,(U64)si0);
l35=sj0;
sj1=1ULL;
sj0+=sj1;
l9=sj0;
sj1=l35;
sj0^=sj1;
sj1=0ULL;
si0=(U64)((I64)sj0<(I64)sj1);
if(si0){
goto L68;
}
si0=l15;
sj1=l9;
i64_store(&i->m0,(U64)si0,sj1);
goto L56;
L68:;
si0=l15;
sj1=l9;
i64_store(&i->m0,(U64)si0,sj1);
sj0=l9;
sj1=0ULL;
si0=sj0 != sj1;
if(si0){
goto L56;
}
si0=l15;
si1=8U;
si0+=si1;
l10=si0;
si0=l13;
si1=3U;
si0<<=(si1&31);
si1=-8U;
si0+=si1;
l12=si0;
L69:;
{
si0=l12;
si0=!(si0);
if(si0){
goto L56;
}
si0=l10;
si1=l10;
sj1=i64_load(&i->m0,(U64)si1);
sj2=1ULL;
sj1+=sj2;
l9=sj1;
i64_store(&i->m0,(U64)si0,sj1);
si0=l12;
si1=-8U;
si0+=si1;
l12=si0;
si0=l10;
si1=8U;
si0+=si1;
l10=si0;
sj0=l9;
si0=!(sj0);
if(si0){
goto L69;
}
}
L56:;
si0=l11;
si0=i32_load(&i->m0,(U64)si0);
si1=l11;
si1=i32_load(&i->m0,(U64)si1+4U);
si2=l30;
si3=l16;
si4=l7;
si4=i32_load(&i->m0,(U64)si4+56U);
si5=l7;
si5=i32_load(&i->m0,(U64)si5+64U);
si6=l14;
si7=l4;
si8=l7;
si9=32U;
si8+=si9;
si9=l7;
si10=40U;
si9+=si10;
si10=l7;
si11=48U;
si10+=si11;
si11=l6;
si12=l19;
f1001(i,si0,si1,si2,si3,si4,si5,si6,si7,si8,si9,si10,si11,si12);
si0=l11;
si1=8U;
si0+=si1;
l11=si0;
si1=l2;
si0=si0 != si1;
if(si0){
goto L55;
}
}
si0=l22;
si1=l26;
si2=l32;
si3=l7;
si4=16U;
si3+=si4;
si4=l7;
si5=24U;
si4+=si5;
f991(i,si0,si1,si2,si3,si4);
si0=l5;
si1=l37;
si0=si0 != si1;
if(si0){
goto L53;
}
goto L28;
L54:;
}
si0=l26;
si1=l10;
si2=1196332U;
f597(i,si0,si1,si2);
UNREACHABLE;
L52:;
si0=l11;
si1=l33;
si2=1196316U;
f593(i,si0,si1,si2);
UNREACHABLE;
L49:;
si0=1189416U;
si1=35U;
si2=1196348U;
f604(i,si0,si1,si2);
UNREACHABLE;
L48:;
si0=1189416U;
si1=35U;
si2=1196300U;
f604(i,si0,si1,si2);
UNREACHABLE;
L47:;
si0=1189416U;
si1=35U;
si2=1196284U;
f604(i,si0,si1,si2);
UNREACHABLE;
L46:;
si0=1189416U;
si1=35U;
si2=1196268U;
f604(i,si0,si1,si2);
UNREACHABLE;
L45:;
si0=4U;
si1=l13;
f52(i,si0,si1);
UNREACHABLE;
L44:;
si0=1189416U;
si1=35U;
si2=1196252U;
f604(i,si0,si1,si2);
UNREACHABLE;
L43:;
si0=1206624U;
si1=32U;
si2=1206784U;
f604(i,si0,si1,si2);
UNREACHABLE;
L41:;
si0=l7;
si1=68U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l7;
si1=1U;
i32_store(&i->m0,(U64)si0+60U,si1);
si0=l7;
si1=1206456U;
i32_store(&i->m0,(U64)si0+56U,si1);
si0=l7;
si1=1206464U;
i32_store(&i->m0,(U64)si0+64U,si1);
si0=l7;
si1=56U;
si0+=si1;
si1=1206592U;
f614(i,si0,si1);
UNREACHABLE;
L40:;
si0=l28;
si1=l11;
si2=1196236U;
f593(i,si0,si1,si2);
UNREACHABLE;
L39:;
si0=l7;
si1=68U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l7;
si1=1U;
i32_store(&i->m0,(U64)si0+60U,si1);
si0=l7;
si1=1206456U;
i32_store(&i->m0,(U64)si0+56U,si1);
si0=l7;
si1=1206464U;
i32_store(&i->m0,(U64)si0+64U,si1);
si0=l7;
si1=56U;
si0+=si1;
si1=1206592U;
f614(i,si0,si1);
UNREACHABLE;
L34:;
si0=l25;
si1=l10;
si2=1196220U;
f593(i,si0,si1,si2);
UNREACHABLE;
L31:;
si0=1189416U;
si1=35U;
si2=1196188U;
f604(i,si0,si1,si2);
UNREACHABLE;
L30:;
si0=1189416U;
si1=35U;
si2=1196172U;
f604(i,si0,si1,si2);
UNREACHABLE;
L29:;
si0=l26;
si1=l27;
si2=l28;
si1-=si2;
l10=si1;
si0=si0 > si1;
if(si0){
goto L78;
}
si0=l17;
si1=63U;
si0+=si1;
l40=si0;
si1=-64U;
si0&=si1;
l12=si0;
si1=l17;
si0=si0 != si1;
if(si0){
goto L77;
}
si0=l31;
si1=l40;
si2=6U;
si1>>=(si2&31);
l19=si1;
si2=1U;
si1<<=(si2&31);
l5=si1;
si0=si0 < si1;
if(si0){
goto L73;
}
si0=l10;
si1=l24;
si0>>=(si1&31);
l11=si0;
si1=1U;
si2=l11;
si3=1U;
si2=si2 > si3;
si0=si2?si0:si1;
l41=si0;
si0=0U;
sj1=l9;
si1=(U32)(sj1);
si0-=si1;
si1=31U;
si0&=si1;
l42=si0;
si0=l3;
si1=l19;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l43=si0;
si0=l31;
si1=l5;
si0-=si1;
l22=si0;
si0=l3;
si1=l19;
si2=4U;
si1<<=(si2&31);
si0+=si1;
l38=si0;
si0=l40;
si1=64U;
si0&=si1;
l37=si0;
si0=l19;
si1=3U;
si0<<=(si1&31);
l13=si0;
si1=-8U;
si0+=si1;
l44=si0;
si0=0U;
si1=l40;
si2=6U;
si1>>=(si2&31);
si2=67108862U;
si1&=si2;
si0-=si1;
l14=si0;
si0=0U;
l45=si0;
L79:;
{
si0=l33;
si1=l45;
si2=24U;
si1<<=(si2&31);
si2=l45;
si3=65280U;
si2&=si3;
si3=8U;
si2<<=(si3&31);
si1|=si2;
si2=l45;
si3=8U;
si2>>=(si3&31);
si3=65280U;
si2&=si3;
si3=l45;
si4=24U;
si3>>=(si4&31);
si2|=si3;
si1|=si2;
l11=si1;
si2=4U;
si1>>=(si2&31);
si2=252645135U;
si1&=si2;
si2=l11;
si3=252645135U;
si2&=si3;
si3=4U;
si2<<=(si3&31);
si1|=si2;
l11=si1;
si2=2U;
si1>>=(si2&31);
si2=858993459U;
si1&=si2;
si2=l11;
si3=858993459U;
si2&=si3;
si3=2U;
si2<<=(si3&31);
si1|=si2;
l11=si1;
si2=1U;
si1>>=(si2&31);
si2=1431655765U;
si1&=si2;
si2=l11;
si3=1431655765U;
si2&=si3;
si3=1U;
si2<<=(si3&31);
si1|=si2;
si2=l42;
si1>>=(si2&31);
si2=l24;
si1<<=(si2&31);
l11=si1;
si0=si0 < si1;
if(si0){
goto L82;
}
si0=l26;
si1=l33;
si2=l11;
si1-=si2;
l10=si1;
si0=si0 > si1;
if(si0){
goto L70;
}
si0=l34;
si1=l11;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l46=si0;
si1=l26;
si2=l32;
si3=l7;
si4=16U;
si3+=si4;
si4=l7;
si5=24U;
si4+=si5;
f986(i,si0,si1,si2,si3,si4);
si0=l46;
si1=l26;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l2=si0;
si0=l46;
l4=si0;
si0=l46;
l11=si0;
si0=l40;
si1=64U;
si0=si0 < si1;
if(si0){
goto L83;
}
L84:;
{
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
si1=l4;
si1=i32_load(&i->m0,(U64)si1+4U);
f977(i,si0,si1);
si0=l19;
si1=l4;
si1=i32_load(&i->m0,(U64)si1+4U);
l12=si1;
si0=si0 > si1;
if(si0){
goto L72;
}
si0=l3;
si1=l5;
si2=l4;
si2=i32_load(&i->m0,(U64)si2);
l6=si2;
si3=l19;
si4=l38;
si5=l22;
f1076(i,si0,si1,si2,si3,si4,si5);
si0=0U;
l12=si0;
si0=0U;
l11=si0;
si0=l19;
si1=1U;
si0=si0 == si1;
if(si0){
goto L85;
}
si0=0U;
l15=si0;
si0=l3;
l11=si0;
si0=l6;
l10=si0;
si0=0U;
l12=si0;
L86:;
{
si0=l10;
si1=l11;
sj1=i64_load(&i->m0,(U64)si1);
l9=sj1;
si2=l12;
sj2=(U64)(si2);
sj3=1ULL;
sj2&=sj3;
sj1-=sj2;
si2=l11;
si3=l13;
si2+=si3;
l8=si2;
sj2=i64_load(&i->m0,(U64)si2);
l35=sj2;
sj1-=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l10;
si1=8U;
si0+=si1;
si1=l11;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
l36=sj1;
sj2=l9;
sj3=l35;
si2=sj2 <= sj3;
sj3=l9;
sj4=l35;
si3=sj3 < sj4;
si4=l12;
si5=1U;
si4&=si5;
si2=si4?si2:si3;
l12=si2;
sj2=(U64)(si2);
sj1-=sj2;
si2=l8;
si3=8U;
si2+=si3;
sj2=i64_load(&i->m0,(U64)si2);
l9=sj2;
sj1-=sj2;
i64_store(&i->m0,(U64)si0,sj1);
sj0=l36;
sj1=l9;
si0=sj0 <= sj1;
sj1=l36;
sj2=l9;
si1=sj1 < sj2;
si2=l12;
si0=si2?si0:si1;
l12=si0;
si0=l11;
si1=16U;
si0+=si1;
l11=si0;
si0=l10;
si1=16U;
si0+=si1;
l10=si0;
si0=l14;
si1=l15;
si2=-2U;
si1+=si2;
l15=si1;
si0=si0 != si1;
if(si0){
goto L86;
}
}
si0=0U;
si1=l15;
si0-=si1;
l11=si0;
L85:;
si0=l37;
si0=!(si0);
if(si0){
goto L87;
}
si0=l6;
si1=l11;
si2=3U;
si1<<=(si2&31);
l11=si1;
si0+=si1;
si1=l3;
si2=l11;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
l9=sj1;
si2=l12;
sj2=(U64)(si2);
sj1-=sj2;
si2=l43;
si3=l11;
si2+=si3;
sj2=i64_load(&i->m0,(U64)si2);
l35=sj2;
sj1-=sj2;
i64_store(&i->m0,(U64)si0,sj1);
sj0=l9;
sj1=l35;
si0=sj0 <= sj1;
sj1=l9;
sj2=l35;
si1=sj1 < sj2;
si2=l12;
si0=si2?si0:si1;
l12=si0;
L87:;
sj0=0ULL;
l35=sj0;
si0=l12;
si1=1U;
si0&=si1;
si0=!(si0);
if(si0){
goto L88;
}
si0=l6;
si1=l6;
sj1=i64_load(&i->m0,(U64)si1);
sj2=1ULL;
sj1+=sj2;
l9=sj1;
i64_store(&i->m0,(U64)si0,sj1);
sj0=0ULL;
l35=sj0;
sj0=l9;
sj1=0ULL;
si0=sj0 != sj1;
if(si0){
goto L88;
}
si0=l6;
si1=8U;
si0+=si1;
l11=si0;
si0=l44;
l10=si0;
L89:;
{
si0=l10;
if(si0){
goto L90;
}
sj0=1ULL;
l35=sj0;
goto L88;
L90:;
si0=l11;
si1=l11;
sj1=i64_load(&i->m0,(U64)si1);
sj2=1ULL;
sj1+=sj2;
l9=sj1;
i64_store(&i->m0,(U64)si0,sj1);
si0=l10;
si1=-8U;
si0+=si1;
l10=si0;
si0=l11;
si1=8U;
si0+=si1;
l11=si0;
sj0=l9;
si0=!(sj0);
if(si0){
goto L89;
}
}
L88:;
si0=l20;
si1=l4;
si1=i32_load(&i->m0,(U64)si1+4U);
l10=si1;
si0=si0 >= si1;
if(si0){
goto L81;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
si1=l20;
si2=3U;
si1<<=(si2&31);
si0+=si1;
sj1=l35;
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=8U;
si0+=si1;
l11=si0;
l4=si0;
si0=l11;
si1=l2;
si0=si0 != si1;
if(si0){
goto L84;
}
goto L80;
}
L83:;
L91:;
{
si0=l11;
si0=i32_load(&i->m0,(U64)si0);
si1=l11;
si2=4U;
si1+=si2;
l10=si1;
si1=i32_load(&i->m0,(U64)si1);
f977(i,si0,si1);
si0=l19;
si1=l10;
si1=i32_load(&i->m0,(U64)si1);
l12=si1;
si0=si0 > si1;
if(si0){
goto L72;
}
si0=l3;
si1=l5;
si2=l11;
si2=i32_load(&i->m0,(U64)si2);
si3=l19;
si4=l38;
si5=l22;
f1076(i,si0,si1,si2,si3,si4,si5);
si0=l20;
si1=l10;
si1=i32_load(&i->m0,(U64)si1);
l10=si1;
si0=si0 >= si1;
if(si0){
goto L81;
}
si0=l11;
si0=i32_load(&i->m0,(U64)si0);
si1=l20;
si2=3U;
si1<<=(si2&31);
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l11;
si1=8U;
si0+=si1;
l11=si0;
si1=l2;
si0=si0 == si1;
if(si0){
goto L80;
}
goto L91;
}
L82:;
si0=l11;
si1=l33;
si2=1196412U;
f593(i,si0,si1,si2);
UNREACHABLE;
L81:;
si0=l20;
si1=l10;
si2=1196444U;
f594(i,si0,si1,si2);
UNREACHABLE;
L80:;
si0=l46;
si1=l26;
si2=l32;
si3=l7;
si4=16U;
si3+=si4;
si4=l7;
si5=24U;
si4+=si5;
f991(i,si0,si1,si2,si3,si4);
si0=l45;
si1=1U;
si0+=si1;
l45=si0;
si1=l41;
si0=si0 != si1;
if(si0){
goto L79;
}
}
L78:;
si0=l26;
si1=l28;
si0=si0 > si1;
if(si0){
goto L27;
}
si0=l7;
si0=i32_load(&i->m0,(U64)si0+4U);
l46=si0;
si0=l7;
si0=i32_load(&i->m0,(U64)si0+12U);
l33=si0;
si0=l17;
si1=63U;
si0+=si1;
l34=si0;
si1=-64U;
si0&=si1;
l11=si0;
si1=l17;
si0=si0 != si1;
if(si0){
goto L92;
}
si0=l31;
si1=l34;
si2=6U;
si1>>=(si2&31);
l19=si1;
si2=1U;
si1<<=(si2&31);
l5=si1;
si0=si0 < si1;
if(si0){
goto L76;
}
si0=l3;
si1=l19;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l45=si0;
si0=l31;
si1=l5;
si0-=si1;
l22=si0;
si0=l3;
si1=l19;
si2=4U;
si1<<=(si2&31);
si0+=si1;
l38=si0;
si0=l34;
si1=64U;
si0&=si1;
l37=si0;
si0=l19;
si1=3U;
si0<<=(si1&31);
l13=si0;
si1=-8U;
si0+=si1;
l44=si0;
si0=0U;
si1=l34;
si2=6U;
si1>>=(si2&31);
si2=67108862U;
si1&=si2;
si0-=si1;
l14=si0;
si0=l19;
si1=1U;
si0=si0 == si1;
l43=si0;
L93:;
{
si0=l33;
si0=!(si0);
if(si0){
goto L27;
}
si0=l46;
si1=l33;
si2=l26;
si3=l33;
si4=l26;
si3=si3 < si4;
si1=si3?si1:si2;
l24=si1;
si2=l32;
si3=l7;
si4=16U;
si3+=si4;
si4=l7;
si5=24U;
si4+=si5;
f986(i,si0,si1,si2,si3,si4);
si0=l46;
si1=l24;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l2=si0;
si0=l46;
l4=si0;
si0=l46;
l11=si0;
si0=l34;
si1=64U;
si0=si0 < si1;
if(si0){
goto L96;
}
L97:;
{
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
si1=l4;
si1=i32_load(&i->m0,(U64)si1+4U);
f977(i,si0,si1);
si0=l19;
si1=l4;
si1=i32_load(&i->m0,(U64)si1+4U);
l12=si1;
si0=si0 > si1;
if(si0){
goto L75;
}
si0=l3;
si1=l5;
si2=l4;
si2=i32_load(&i->m0,(U64)si2);
l6=si2;
si3=l19;
si4=l38;
si5=l22;
f1076(i,si0,si1,si2,si3,si4,si5);
si0=0U;
l12=si0;
si0=0U;
l11=si0;
si0=l43;
if(si0){
goto L98;
}
si0=0U;
l15=si0;
si0=l3;
l11=si0;
si0=l6;
l10=si0;
si0=0U;
l12=si0;
L99:;
{
si0=l10;
si1=l11;
sj1=i64_load(&i->m0,(U64)si1);
l9=sj1;
si2=l12;
sj2=(U64)(si2);
sj3=1ULL;
sj2&=sj3;
sj1-=sj2;
si2=l11;
si3=l13;
si2+=si3;
l8=si2;
sj2=i64_load(&i->m0,(U64)si2);
l35=sj2;
sj1-=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l10;
si1=8U;
si0+=si1;
si1=l11;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
l36=sj1;
sj2=l9;
sj3=l35;
si2=sj2 <= sj3;
sj3=l9;
sj4=l35;
si3=sj3 < sj4;
si4=l12;
si5=1U;
si4&=si5;
si2=si4?si2:si3;
l12=si2;
sj2=(U64)(si2);
sj1-=sj2;
si2=l8;
si3=8U;
si2+=si3;
sj2=i64_load(&i->m0,(U64)si2);
l9=sj2;
sj1-=sj2;
i64_store(&i->m0,(U64)si0,sj1);
sj0=l36;
sj1=l9;
si0=sj0 <= sj1;
sj1=l36;
sj2=l9;
si1=sj1 < sj2;
si2=l12;
si0=si2?si0:si1;
l12=si0;
si0=l11;
si1=16U;
si0+=si1;
l11=si0;
si0=l10;
si1=16U;
si0+=si1;
l10=si0;
si0=l14;
si1=l15;
si2=-2U;
si1+=si2;
l15=si1;
si0=si0 != si1;
if(si0){
goto L99;
}
}
si0=0U;
si1=l15;
si0-=si1;
l11=si0;
L98:;
si0=l37;
si0=!(si0);
if(si0){
goto L100;
}
si0=l6;
si1=l11;
si2=3U;
si1<<=(si2&31);
l11=si1;
si0+=si1;
si1=l3;
si2=l11;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
l9=sj1;
si2=l12;
sj2=(U64)(si2);
sj1-=sj2;
si2=l45;
si3=l11;
si2+=si3;
sj2=i64_load(&i->m0,(U64)si2);
l35=sj2;
sj1-=sj2;
i64_store(&i->m0,(U64)si0,sj1);
sj0=l9;
sj1=l35;
si0=sj0 <= sj1;
sj1=l9;
sj2=l35;
si1=sj1 < sj2;
si2=l12;
si0=si2?si0:si1;
l12=si0;
L100:;
sj0=0ULL;
l35=sj0;
si0=l12;
si1=1U;
si0&=si1;
si0=!(si0);
if(si0){
goto L101;
}
si0=l6;
si1=l6;
sj1=i64_load(&i->m0,(U64)si1);
sj2=1ULL;
sj1+=sj2;
l9=sj1;
i64_store(&i->m0,(U64)si0,sj1);
sj0=0ULL;
l35=sj0;
sj0=l9;
sj1=0ULL;
si0=sj0 != sj1;
if(si0){
goto L101;
}
si0=l6;
si1=8U;
si0+=si1;
l11=si0;
si0=l44;
l10=si0;
L102:;
{
si0=l10;
if(si0){
goto L103;
}
sj0=1ULL;
l35=sj0;
goto L101;
L103:;
si0=l11;
si1=l11;
sj1=i64_load(&i->m0,(U64)si1);
sj2=1ULL;
sj1+=sj2;
l9=sj1;
i64_store(&i->m0,(U64)si0,sj1);
si0=l10;
si1=-8U;
si0+=si1;
l10=si0;
si0=l11;
si1=8U;
si0+=si1;
l11=si0;
sj0=l9;
si0=!(sj0);
if(si0){
goto L102;
}
}
L101:;
si0=l20;
si1=l4;
si1=i32_load(&i->m0,(U64)si1+4U);
l10=si1;
si0=si0 >= si1;
if(si0){
goto L95;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
si1=l20;
si2=3U;
si1<<=(si2&31);
si0+=si1;
sj1=l35;
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=8U;
si0+=si1;
l11=si0;
l4=si0;
si0=l11;
si1=l2;
si0=si0 != si1;
if(si0){
goto L97;
}
goto L94;
}
L96:;
L104:;
{
si0=l11;
si0=i32_load(&i->m0,(U64)si0);
si1=l11;
si2=4U;
si1+=si2;
l10=si1;
si1=i32_load(&i->m0,(U64)si1);
f977(i,si0,si1);
si0=l19;
si1=l10;
si1=i32_load(&i->m0,(U64)si1);
l12=si1;
si0=si0 > si1;
if(si0){
goto L75;
}
si0=l3;
si1=l5;
si2=l11;
si2=i32_load(&i->m0,(U64)si2);
si3=l19;
si4=l38;
si5=l22;
f1076(i,si0,si1,si2,si3,si4,si5);
si0=l20;
si1=l10;
si1=i32_load(&i->m0,(U64)si1);
l10=si1;
si0=si0 >= si1;
if(si0){
goto L95;
}
si0=l11;
si0=i32_load(&i->m0,(U64)si0);
si1=l20;
si2=3U;
si1<<=(si2&31);
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l11;
si1=8U;
si0+=si1;
l11=si0;
si1=l2;
si0=si0 == si1;
if(si0){
goto L94;
}
goto L104;
}
L95:;
si0=l20;
si1=l10;
si2=1196396U;
f594(i,si0,si1,si2);
UNREACHABLE;
L94:;
si0=l33;
si1=l24;
si0-=si1;
l33=si0;
si0=l46;
si1=l24;
si2=l32;
si3=l7;
si4=16U;
si3+=si4;
si4=l7;
si5=24U;
si4+=si5;
f991(i,si0,si1,si2,si3,si4);
si0=l2;
l46=si0;
si0=l29;
si1=-1U;
si0+=si1;
l29=si0;
si0=!(si0);
if(si0){
goto L27;
}
goto L93;
}
L92:;
si0=l33;
si0=!(si0);
if(si0){
goto L27;
}
si0=l46;
si1=l33;
si2=l26;
si3=l33;
si4=l26;
si3=si3 < si4;
si1=si3?si1:si2;
si2=l32;
si3=l7;
si4=16U;
si3+=si4;
si4=l7;
si5=24U;
si4+=si5;
f986(i,si0,si1,si2,si3,si4);
si0=l46;
si0=i32_load(&i->m0,(U64)si0);
si1=l46;
si1=i32_load(&i->m0,(U64)si1+4U);
f977(i,si0,si1);
si0=l7;
si1=l11;
si2=l17;
si1-=si2;
i32_store(&i->m0,(U64)si0+48U,si1);
si0=l7;
si1=0U;
i32_store(&i->m0,(U64)si0+56U,si1);
si0=0U;
si1=l7;
si2=48U;
si1+=si2;
si2=1189840U;
si3=l7;
si4=56U;
si3+=si4;
si4=1189876U;
f1250(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L77:;
si0=l33;
l10=si0;
si0=l26;
si1=l33;
si0=si0 > si1;
if(si0){
goto L70;
}
si0=l34;
si1=l26;
si2=l32;
si3=l7;
si4=16U;
si3+=si4;
si4=l7;
si5=24U;
si4+=si5;
f986(i,si0,si1,si2,si3,si4);
si0=l34;
si0=i32_load(&i->m0,(U64)si0);
si1=l11;
si2=l28;
si3=3U;
si2<<=(si3&31);
si1+=si2;
si1=i32_load(&i->m0,(U64)si1+4U);
f977(i,si0,si1);
si0=l7;
si1=l12;
si2=l17;
si1-=si2;
i32_store(&i->m0,(U64)si0+48U,si1);
si0=l7;
si1=0U;
i32_store(&i->m0,(U64)si0+56U,si1);
si0=0U;
si1=l7;
si2=48U;
si1+=si2;
si2=1189840U;
si3=l7;
si4=56U;
si3+=si4;
si4=1189876U;
f1250(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L76:;
si0=l33;
si0=!(si0);
if(si0){
goto L27;
}
si0=l46;
si1=l33;
si2=l26;
si3=l33;
si4=l26;
si3=si3 < si4;
si1=si3?si1:si2;
si2=l32;
si3=l7;
si4=16U;
si3+=si4;
si4=l7;
si5=24U;
si4+=si5;
f986(i,si0,si1,si2,si3,si4);
si0=l46;
si0=i32_load(&i->m0,(U64)si0);
si1=l46;
si1=i32_load(&i->m0,(U64)si1+4U);
f977(i,si0,si1);
si0=l19;
si1=l46;
si1=i32_load(&i->m0,(U64)si1+4U);
l12=si1;
si0=si0 <= si1;
if(si0){
goto L74;
}
L75:;
si0=l19;
si1=l12;
si2=1189844U;
f597(i,si0,si1,si2);
UNREACHABLE;
L74:;
si0=1189416U;
si1=35U;
si2=1189860U;
f604(i,si0,si1,si2);
UNREACHABLE;
L73:;
si0=l33;
l10=si0;
si0=l26;
si1=l33;
si0=si0 > si1;
if(si0){
goto L70;
}
si0=l34;
si1=l26;
si2=l32;
si3=l7;
si4=16U;
si3+=si4;
si4=l7;
si5=24U;
si4+=si5;
f986(i,si0,si1,si2,si3,si4);
si0=l34;
si0=i32_load(&i->m0,(U64)si0);
si1=l11;
si2=l28;
si3=3U;
si2<<=(si3&31);
si1+=si2;
l11=si1;
si1=i32_load(&i->m0,(U64)si1+4U);
f977(i,si0,si1);
si0=l19;
si1=l11;
si1=i32_load(&i->m0,(U64)si1+4U);
l12=si1;
si0=si0 <= si1;
if(si0){
goto L71;
}
L72:;
si0=l19;
si1=l12;
si2=1189844U;
f597(i,si0,si1,si2);
UNREACHABLE;
L71:;
si0=1189416U;
si1=35U;
si2=1189860U;
f604(i,si0,si1,si2);
UNREACHABLE;
L70:;
si0=l26;
si1=l10;
si2=1196428U;
f597(i,si0,si1,si2);
UNREACHABLE;
L28:;
si0=l26;
si1=l28;
si0=si0 > si1;
if(si0){
goto L105;
}
si0=l7;
si0=i32_load(&i->m0,(U64)si0+4U);
l8=si0;
si0=l7;
si0=i32_load(&i->m0,(U64)si0+12U);
l15=si0;
L106:;
{
si0=l15;
si0=!(si0);
if(si0){
goto L105;
}
si0=l29;
si1=-1U;
si0+=si1;
l29=si0;
si0=l8;
si1=l15;
si2=l26;
si3=l15;
si4=l26;
si3=si3 < si4;
si1=si3?si1:si2;
l13=si1;
si2=l32;
si3=l7;
si4=16U;
si3+=si4;
si4=l7;
si5=24U;
si4+=si5;
f986(i,si0,si1,si2,si3,si4);
si0=l8;
si1=l13;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l12=si0;
si0=l8;
l11=si0;
L107:;
{
si0=l11;
si0=i32_load(&i->m0,(U64)si0);
si1=l11;
si2=4U;
si1+=si2;
l10=si1;
si1=i32_load(&i->m0,(U64)si1);
f977(i,si0,si1);
si0=l11;
si0=i32_load(&i->m0,(U64)si0);
si1=l10;
si1=i32_load(&i->m0,(U64)si1);
si2=l30;
si3=l16;
si4=l7;
si4=i32_load(&i->m0,(U64)si4+56U);
si5=l7;
si5=i32_load(&i->m0,(U64)si5+64U);
si6=l14;
si7=l4;
si8=l7;
si9=32U;
si8+=si9;
si9=l7;
si10=40U;
si9+=si10;
si10=l7;
si11=48U;
si10+=si11;
si11=l6;
si12=l19;
f1001(i,si0,si1,si2,si3,si4,si5,si6,si7,si8,si9,si10,si11,si12);
si0=l11;
si1=8U;
si0+=si1;
l11=si0;
si1=l12;
si0=si0 != si1;
if(si0){
goto L107;
}
}
si0=l8;
si1=l13;
si2=l32;
si3=l7;
si4=16U;
si3+=si4;
si4=l7;
si5=24U;
si4+=si5;
f991(i,si0,si1,si2,si3,si4);
si0=l15;
si1=l13;
si0-=si1;
l15=si0;
si0=l12;
l8=si0;
si0=l29;
if(si0){
goto L106;
}
}
L105:;
si0=l7;
si0=i32_load(&i->m0,(U64)si0+60U);
si0=!(si0);
if(si0){
goto L27;
}
si0=l7;
si0=i32_load(&i->m0,(U64)si0+56U);
f15024(i,si0);
L27:;
si0=l7;
si0=i32_load(&i->m0,(U64)si0+4U);
si1=l7;
si1=i32_load(&i->m0,(U64)si1+12U);
si2=l30;
si3=l16;
si4=l7;
si5=16U;
si4+=si5;
si5=l7;
si6=24U;
si5+=si6;
si6=l23;
si7=l21;
si8=l26;
si9=l27;
f1004(i,si0,si1,si2,si3,si4,si5,si6,si7,si8,si9);
si0=l7;
si0=i32_load(&i->m0,(U64)si0);
l10=si0;
si1=1U;
si0<<=(si1&31);
l11=si0;
si1=l1;
si0=si0 > si1;
if(si0){
goto L109;
}
si0=l11;
si0=!(si0);
if(si0){
goto L110;
}
si0=l0;
si1=0U;
si2=l10;
si3=4U;
si2<<=(si3&31);
si0=f15145(i,si0,si1,si2);
L110:;
si0=l25;
si1=1U;
si0<<=(si1&31);
si1=-1U;
si0+=si1;
l10=si0;
si1=l7;
si1=i32_load(&i->m0,(U64)si1+12U);
l12=si1;
si0=si0 > si1;
if(si0){
goto L108;
}
si0=l0;
si1=l11;
si2=l7;
si2=i32_load(&i->m0,(U64)si2+4U);
si3=l10;
si4=l18;
si5=l20;
si6=l3;
si7=l31;
f984(i,si0,si1,si2,si3,si4,si5,si6,si7);
si0=l7;
si0=i32_load(&i->m0,(U64)si0+8U);
si0=!(si0);
if(si0){
goto L5;
}
si0=l7;
si0=i32_load(&i->m0,(U64)si0+4U);
f15024(i,si0);
goto L5;
L109:;
si0=l11;
si1=l1;
si2=1196364U;
f597(i,si0,si1,si2);
UNREACHABLE;
L108:;
si0=l10;
si1=l12;
si2=1196380U;
f597(i,si0,si1,si2);
UNREACHABLE;
L10:;
sj0=l9;
si1=l11;
si2=l10;
si3=1U;
si2<<=(si3&31);
si1+=si2;
si2=1194903U;
si1+=si2;
si1=i32_load8_u(&i->m0,(U64)si1);
l10=si1;
sj1=(U64)(si1);
sj0-=sj1;
l9=sj0;
sj1=32ULL;
si0=sj0 >= sj1;
if(si0){
goto L114;
}
si0=l10;
si1=16U;
si0=si0 >= si1;
if(si0){
goto L113;
}
sj0=l9;
si0=(U32)(sj0);
l14=si0;
si1=-1U;
si0^=si1;
l13=si0;
si0=l11;
si1=l10;
si2=1U;
si1<<=(si2&31);
si0<<=(si1&31);
l10=si0;
si1=1U;
si2=6U;
si3=l14;
si2-=si3;
si1<<=(si2&31);
si2=1U;
sj3=l9;
sj4=6ULL;
si3=sj3 < sj4;
si1=si3?si1:si2;
l11=si1;
si0=si0 <= si1;
if(si0){
goto L117;
}
si0=0U;
si1=l11;
si0-=si1;
l4=si0;
si0=4U;
si1=l14;
si0<<=(si1&31);
l19=si0;
L118:;
{
si0=l4;
si1=l10;
si0+=si1;
l12=si0;
si1=l14;
si0<<=(si1&31);
si1=l13;
si0+=si1;
l15=si0;
si1=2U;
si0=si0 < si1;
if(si0){
goto L116;
}
si0=l10;
si1=l11;
si0-=si1;
l10=si0;
si0=l8;
si1=l15;
si2=1U;
si1>>=(si2&31);
si0=DIV_U(si0,si1);
l15=si0;
si0=l12;
si1=l11;
si0=si0 <= si1;
if(si0){
goto L119;
}
si0=l15;
si1=1U;
si0<<=(si1&31);
si1=1U;
si0|=si1;
si1=l19;
si0=si0 <= si1;
if(si0){
goto L118;
}
L119:;
}
si0=l11;
si1=l10;
si0+=si1;
l10=si0;
L117:;
si0=l3;
si1=1U;
si0<<=(si1&31);
l22=si0;
si1=l1;
si0=si0 > si1;
if(si0){
goto L112;
}
si0=l10;
si1=l14;
si0<<=(si1&31);
l4=si0;
si1=l13;
si0+=si1;
l11=si0;
si1=2U;
si0=si0 >= si1;
if(si0){
goto L115;
}
si0=1192032U;
si1=25U;
si2=1196540U;
f604(i,si0,si1,si2);
UNREACHABLE;
L116:;
si0=1192032U;
si1=25U;
si2=1196508U;
f604(i,si0,si1,si2);
UNREACHABLE;
L115:;
si0=l8;
si1=l11;
si2=1U;
si1>>=(si2&31);
l26=si1;
si0=DIV_U(si0,si1);
l16=si0;
si0=l6;
si1=l4;
si2=6U;
si1>>=(si2&31);
l20=si1;
si2=1U;
si1+=si2;
l8=si1;
si2=4U;
si3=l14;
si2<<=(si3&31);
l13=si2;
si3=3U;
si2|=si3;
si1*=si2;
l30=si1;
si0=si0 < si1;
if(si0){
goto L111;
}
si0=l14;
si1=30U;
si0=si0 < si1;
if(si0){
goto L120;
}
si0=0U;
l11=si0;
si0=l7;
si1=0U;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l7;
si1=l13;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l7;
si1=4U;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l30;
l12=si0;
si0=l5;
l15=si0;
goto L6;
L120:;
si0=l13;
si1=268435455U;
si0=si0 > si1;
if(si0){
goto L9;
}
si0=32U;
si1=l14;
si0<<=(si1&31);
l11=si0;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L9;
}
si0=4U;
l12=si0;
si0=l14;
si1=26U;
si0=si0 > si1;
if(si0){
goto L121;
}
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=l11;
si0=f15022(i,si0);
l12=si0;
si0=!(si0);
if(si0){
goto L8;
}
L121:;
si0=0U;
l11=si0;
si0=l7;
si1=0U;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l7;
si1=l13;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l7;
si1=l12;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l20;
si1=3U;
si0<<=(si1&31);
si1=8U;
si0+=si1;
l19=si0;
si0=l5;
l15=si0;
si0=l30;
l12=si0;
L122:;
{
si0=l20;
si1=l12;
si0=si0 >= si1;
if(si0){
goto L7;
}
si0=l11;
si1=l7;
si1=i32_load(&i->m0,(U64)si1+8U);
si0=si0 != si1;
if(si0){
goto L123;
}
si0=l7;
si1=4U;
si0+=si1;
si1=l11;
f1300(i,si0,si1);
si0=l7;
si0=i32_load(&i->m0,(U64)si0+12U);
l11=si0;
L123:;
si0=l12;
si1=l8;
si0-=si1;
l12=si0;
si0=l7;
si0=i32_load(&i->m0,(U64)si0+4U);
si1=l11;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l11=si0;
si1=l8;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l11;
si1=l15;
i32_store(&i->m0,(U64)si0,si1);
si0=l7;
si1=l7;
si1=i32_load(&i->m0,(U64)si1+12U);
si2=1U;
si1+=si2;
l11=si1;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l15;
si1=l19;
si0+=si1;
l15=si0;
si0=l13;
si1=-1U;
si0+=si1;
l13=si0;
si0=!(si0);
if(si0){
goto L6;
}
goto L122;
}
L114:;
si0=1206624U;
si1=32U;
si2=1206784U;
f604(i,si0,si1,si2);
UNREACHABLE;
L113:;
si0=1206624U;
si1=32U;
si2=1206784U;
f604(i,si0,si1,si2);
UNREACHABLE;
L112:;
si0=l22;
si1=l1;
si2=1196524U;
f597(i,si0,si1,si2);
UNREACHABLE;
L111:;
si0=1189416U;
si1=35U;
si2=1196556U;
f604(i,si0,si1,si2);
UNREACHABLE;
L9:;
f53(i);
UNREACHABLE;
L8:;
si0=4U;
si1=l11;
f52(i,si0,si1);
UNREACHABLE;
L7:;
si0=1189416U;
si1=35U;
si2=1196700U;
f604(i,si0,si1,si2);
UNREACHABLE;
L6:;
si0=l20;
si1=l12;
si0=si0 >= si1;
if(si0){
goto L128;
}
si0=l7;
si1=l15;
i32_store(&i->m0,(U64)si0+40U,si1);
si0=l7;
si1=l8;
i32_store(&i->m0,(U64)si0+44U,si1);
si0=l20;
si1=l12;
si2=l8;
si1-=si2;
l13=si1;
si0=si0 >= si1;
if(si0){
goto L127;
}
si0=l7;
si1=l8;
i32_store(&i->m0,(U64)si0+52U,si1);
si0=l7;
si1=l15;
si2=l8;
si3=3U;
si2<<=(si3&31);
l19=si2;
si1+=si2;
l15=si1;
i32_store(&i->m0,(U64)si0+48U,si1);
si0=l7;
si0=i32_load(&i->m0,(U64)si0+4U);
si1=l11;
si2=l2;
si3=l3;
si4=l26;
si0=f985(i,si0,si1,si2,si3,si4);
l2=si0;
si1=l7;
si1=i32_load(&i->m0,(U64)si1+12U);
l12=si1;
si0=si0 > si1;
if(si0){
goto L126;
}
si0=l16;
si1=1U;
si0<<=(si1&31);
si1=1U;
si0|=si1;
l11=si0;
si1=2U;
si2=l14;
si1<<=(si2&31);
l14=si1;
si2=1U;
si1|=si2;
si2=l11;
si3=l14;
si2=si2 > si3;
si0=si2?si0:si1;
si1=1U;
si0+=si1;
l16=si0;
si0=l15;
si1=l19;
si0+=si1;
l38=si0;
si0=l13;
si1=l8;
si0-=si1;
l37=si0;
si0=l7;
si0=i32_load(&i->m0,(U64)si0+4U);
l11=si0;
si0=l2;
si1=l12;
si0=si0 != si1;
if(si0){
goto L129;
}
si0=l2;
l12=si0;
goto L124;
L129:;
si0=l12;
si1=3U;
si0<<=(si1&31);
si1=l2;
si2=3U;
si1<<=(si2&31);
l15=si1;
si0-=si1;
l12=si0;
si0=l11;
si1=l15;
si0+=si1;
l11=si0;
L130:;
{
si0=l11;
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l15=si0;
si0=!(si0);
if(si0){
goto L131;
}
si0=l11;
si0=i32_load(&i->m0,(U64)si0);
si1=0U;
si2=l15;
si3=3U;
si2<<=(si3&31);
si0=f15145(i,si0,si1,si2);
L131:;
si0=l11;
si1=8U;
si0+=si1;
l11=si0;
si0=l12;
si1=-8U;
si0+=si1;
l12=si0;
si0=!(si0);
if(si0){
goto L125;
}
goto L130;
}
L128:;
si0=1189416U;
si1=35U;
si2=1196572U;
f604(i,si0,si1,si2);
UNREACHABLE;
L127:;
si0=1189416U;
si1=35U;
si2=1196588U;
f604(i,si0,si1,si2);
UNREACHABLE;
L126:;
si0=l2;
si1=l12;
si2=1196604U;
f593(i,si0,si1,si2);
UNREACHABLE;
L125:;
si0=l7;
si0=i32_load(&i->m0,(U64)si0+12U);
l12=si0;
si0=l7;
si0=i32_load(&i->m0,(U64)si0+4U);
l11=si0;
L124:;
si0=l11;
si1=l12;
si2=l10;
si3=l7;
si4=40U;
si3+=si4;
si4=l7;
si5=48U;
si4+=si5;
si5=l38;
si6=l37;
si7=l16;
f989(i,si0,si1,si2,si3,si4,si5,si6,si7);
si0=l16;
si1=l7;
si1=i32_load(&i->m0,(U64)si1+12U);
l12=si1;
si0=si0 > si1;
if(si0){
goto L134;
}
si0=l6;
si1=l30;
si0-=si1;
l14=si0;
si0=l5;
si1=l30;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l19=si0;
si0=l7;
si0=i32_load(&i->m0,(U64)si0+4U);
l11=si0;
si0=l16;
si0=!(si0);
if(si0){
goto L132;
}
si0=l11;
si1=l16;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l13=si0;
L137:;
{
si0=l11;
si0=i32_load(&i->m0,(U64)si0);
si1=l11;
si2=4U;
si1+=si2;
l12=si1;
si1=i32_load(&i->m0,(U64)si1);
f977(i,si0,si1);
si0=l12;
si0=i32_load(&i->m0,(U64)si0);
l12=si0;
si0=!(si0);
if(si0){
goto L136;
}
si0=l11;
si0=i32_load(&i->m0,(U64)si0);
l15=si0;
si1=l12;
si2=-1U;
si1+=si2;
l8=si1;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l12=si0;
sj0=i64_load(&i->m0,(U64)si0);
sj1=0ULL;
si0=sj0 != sj1;
if(si0){
goto L135;
}
si0=l12;
si1=l15;
si2=l8;
si3=l4;
si4=l19;
si5=l14;
si1=f978(i,si1,si2,si3,si4,si5);
sj1=(U64)(si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l11;
si1=8U;
si0+=si1;
l11=si0;
si1=l13;
si0=si0 == si1;
if(si0){
goto L133;
}
goto L137;
}
L136:;
si0=1189451U;
si1=43U;
si2=1196668U;
f604(i,si0,si1,si2);
UNREACHABLE;
L135:;
si0=l7;
si1=0U;
i32_store(&i->m0,(U64)si0+56U,si1);
si0=0U;
si1=l12;
si2=1193472U;
si3=l7;
si4=56U;
si3+=si4;
si4=1196684U;
f1251(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L134:;
si0=l16;
si1=l12;
si2=1196620U;
f597(i,si0,si1,si2);
UNREACHABLE;
L133:;
si0=l7;
si0=i32_load(&i->m0,(U64)si0+12U);
l12=si0;
si0=l7;
si0=i32_load(&i->m0,(U64)si0+4U);
l11=si0;
L132:;
si0=l11;
si1=l12;
si2=l10;
si3=l7;
si4=40U;
si3+=si4;
si4=l7;
si5=48U;
si4+=si5;
si5=l38;
si6=l37;
si7=l16;
f995(i,si0,si1,si2,si3,si4,si5,si6,si7);
si0=l16;
si1=l7;
si1=i32_load(&i->m0,(U64)si1+12U);
l11=si1;
si0=si0 > si1;
if(si0){
goto L4;
}
si0=l16;
si0=!(si0);
if(si0){
goto L138;
}
si0=l7;
si0=i32_load(&i->m0,(U64)si0+4U);
l11=si0;
si1=l16;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l4=si0;
sj0=l9;
sj1=2ULL;
sj0+=sj1;
l39=sj0;
sj1=63ULL;
sj0&=sj1;
l47=sj0;
L139:;
{
si0=l11;
si1=4U;
si0+=si1;
l8=si0;
si0=i32_load(&i->m0,(U64)si0);
l10=si0;
si0=!(si0);
if(si0){
goto L2;
}
si0=l11;
si0=i32_load(&i->m0,(U64)si0);
l12=si0;
si1=l10;
si2=-1U;
si1+=si2;
l15=si1;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l13=si0;
sj0=i64_load(&i->m0,(U64)si0);
l35=sj0;
si0=l12;
si1=l10;
sj2=l39;
sj0=f1026(i,si0,si1,sj2);
l9=sj0;
si0=l15;
si0=!(si0);
if(si0){
goto L1;
}
si0=l10;
si1=3U;
si0<<=(si1&31);
si1=l12;
si0+=si1;
si1=-16U;
si0+=si1;
l10=si0;
si1=l10;
sj1=i64_load(&i->m0,(U64)si1);
sj2=l9;
sj1-=sj2;
l36=sj1;
i64_store(&i->m0,(U64)si0,sj1);
si0=l13;
sj1=l35;
sj2=l47;
sj1=(U64)((I64)sj1>>(sj2&63));
sj2=l9;
sj3=0ULL;
si2=sj2 != sj3;
sj2=(U64)(si2);
sj1-=sj2;
sj2=l36;
sj3=0ULL;
sj4=l9;
sj3-=sj4;
si2=sj2 < sj3;
sj2=(U64)(si2);
sj1+=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l11;
si0=i32_load(&i->m0,(U64)si0);
si1=l8;
si1=i32_load(&i->m0,(U64)si1);
f977(i,si0,si1);
si0=l11;
si1=8U;
si0+=si1;
l11=si0;
si1=l4;
si0=si0 != si1;
if(si0){
goto L139;
}
}
L138:;
si0=l22;
si0=!(si0);
if(si0){
goto L140;
}
si0=l0;
si1=0U;
si2=l3;
si3=4U;
si2<<=(si3&31);
si0=f15145(i,si0,si1,si2);
L140:;
si0=l2;
si1=1U;
si0<<=(si1&31);
si1=-1U;
si0+=si1;
l11=si0;
si1=l7;
si1=i32_load(&i->m0,(U64)si1+12U);
l10=si1;
si0=si0 > si1;
if(si0){
goto L3;
}
si0=l0;
si1=l22;
si2=l7;
si2=i32_load(&i->m0,(U64)si2+4U);
si3=l11;
si4=l26;
si5=l20;
si6=l19;
si7=l14;
f984(i,si0,si1,si2,si3,si4,si5,si6,si7);
si0=l7;
si0=i32_load(&i->m0,(U64)si0+8U);
si0=!(si0);
if(si0){
goto L5;
}
si0=l7;
si0=i32_load(&i->m0,(U64)si0+4U);
f15024(i,si0);
L5:;
si0=l7;
si1=80U;
si0+=si1;
i->g0=si0;
goto L0;
L4:;
si0=l16;
si1=l11;
si2=1196636U;
f597(i,si0,si1,si2);
UNREACHABLE;
L3:;
si0=l11;
si1=l10;
si2=1196652U;
f597(i,si0,si1,si2);
UNREACHABLE;
L2:;
si0=1189451U;
si1=43U;
si2=1189972U;
f604(i,si0,si1,si2);
UNREACHABLE;
L1:;
si0=1189451U;
si1=43U;
si2=1189988U;
f604(i,si0,si1,si2);
UNREACHABLE;
L0:;
}

void f1009(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U64 l4=0;
U64 l5=0;
U64 l6=0;
U64 l7=0;
U32 si0,si1,si2,si3;
U64 sj0,sj1,sj2;
si0=i->g0;
si1=64U;
si0-=si1;
l3=si0;
i->g0=si0;
si0=l3;
si1=l1;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l1;
si0=!(si0);
if(si0){
goto L1;
}
si0=l0;
sj0=i64_load(&i->m0,(U64)si0);
l4=sj0;
si0=!(sj0);
if(si0){
goto L1;
}
si0=l2;
si1=255U;
si0&=si1;
switch(si0){
case 0:
goto L13;
case 1:
goto L10;
case 2:
goto L14;
case 3:
goto L11;
case 4:
goto L8;
case 5:
goto L7;
default:
goto L13;
}
L14:;
si0=l1;
si1=63U;
si0=si0 > si1;
if(si0){
goto L12;
}
goto L2;
L13:;
si0=l1;
si1=63U;
si0=si0 <= si1;
if(si0){
goto L2;
}
L12:;
si0=l0;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
goto L1;
L11:;
si0=l1;
si1=63U;
si0=si0 > si1;
if(si0){
goto L9;
}
goto L3;
L10:;
si0=l1;
si1=63U;
si0=si0 <= si1;
if(si0){
goto L3;
}
L9:;
si0=l0;
sj1=1ULL;
i64_store(&i->m0,(U64)si0,sj1);
goto L1;
L8:;
si0=l1;
si1=64U;
si0=si0 == si1;
if(si0){
goto L16;
}
si0=l1;
si1=63U;
si0=si0 > si1;
if(si0){
goto L15;
}
si0=l0;
sj1=l4;
si2=l1;
si3=-1U;
si2+=si3;
si3=63U;
si2&=si3;
sj2=(U64)(si2);
l5=sj2;
sj1>>=(sj2&63);
l6=sj1;
sj2=1ULL;
sj1>>=(sj2&63);
l7=sj1;
i64_store(&i->m0,(U64)si0,sj1);
sj0=l6;
sj1=1ULL;
sj0&=sj1;
si0=!(sj0);
if(si0){
goto L1;
}
sj0=l6;
sj1=l5;
sj0<<=(sj1&63);
sj1=l4;
si0=sj0 != sj1;
if(si0){
goto L5;
}
sj0=l6;
sj1=2ULL;
sj0&=sj1;
si0=!(sj0);
if(si0){
goto L1;
}
si0=l0;
sj1=l7;
sj2=1ULL;
sj1+=sj2;
i64_store(&i->m0,(U64)si0,sj1);
goto L1;
L16:;
sj0=l4;
sj1=-9223372036854775808ULL;
si0=sj0 > sj1;
if(si0){
goto L6;
}
L15:;
si0=l0;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
goto L1;
L7:;
si0=l1;
si1=63U;
si0=si0 > si1;
if(si0){
goto L4;
}
si0=l3;
sj1=l4;
i64_store(&i->m0,(U64)si0+16U,sj1);
si0=l0;
sj1=l4;
si2=l1;
sj2=(U64)(si2);
l6=sj2;
sj1>>=(sj2&63);
l5=sj1;
i64_store(&i->m0,(U64)si0,sj1);
sj0=l5;
sj1=l6;
sj0<<=(sj1&63);
sj1=l4;
si0=sj0 == sj1;
if(si0){
goto L1;
}
si0=l3;
si1=48U;
si0+=si1;
si1=12U;
si0+=si1;
si1=1U;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=24U;
si0+=si1;
si1=12U;
si0+=si1;
sj1=2ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=2U;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l3;
si1=1196964U;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l3;
si1=256U;
i32_store(&i->m0,(U64)si0+52U,si1);
si0=l3;
si1=l3;
si2=48U;
si1+=si2;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l3;
si1=l3;
si2=12U;
si1+=si2;
i32_store(&i->m0,(U64)si0+56U,si1);
si0=l3;
si1=l3;
si2=16U;
si1+=si2;
i32_store(&i->m0,(U64)si0+48U,si1);
si0=l3;
si1=24U;
si0+=si1;
si1=1196980U;
f614(i,si0,si1);
UNREACHABLE;
L6:;
si0=l0;
sj1=1ULL;
i64_store(&i->m0,(U64)si0,sj1);
goto L1;
L5:;
si0=l0;
sj1=l7;
sj2=1ULL;
sj1+=sj2;
i64_store(&i->m0,(U64)si0,sj1);
goto L1;
L4:;
si0=l3;
si1=48U;
si0+=si1;
si1=12U;
si0+=si1;
si1=1U;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=24U;
si0+=si1;
si1=12U;
si0+=si1;
sj1=2ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=2U;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l3;
si1=1196964U;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l3;
si1=256U;
i32_store(&i->m0,(U64)si0+52U,si1);
si0=l3;
si1=l0;
i32_store(&i->m0,(U64)si0+48U,si1);
si0=l3;
si1=l3;
si2=48U;
si1+=si2;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l3;
si1=l3;
si2=12U;
si1+=si2;
i32_store(&i->m0,(U64)si0+56U,si1);
si0=l3;
si1=24U;
si0+=si1;
si1=1196996U;
f614(i,si0,si1);
UNREACHABLE;
L3:;
si0=l0;
sj1=l4;
si2=l1;
sj2=(U64)(si2);
l5=sj2;
sj1>>=(sj2&63);
l6=sj1;
i64_store(&i->m0,(U64)si0,sj1);
sj0=l6;
sj1=l5;
sj0<<=(sj1&63);
sj1=l4;
si0=sj0 == sj1;
if(si0){
goto L1;
}
si0=l0;
sj1=l6;
sj2=1ULL;
sj1+=sj2;
i64_store(&i->m0,(U64)si0,sj1);
goto L1;
L2:;
si0=l0;
sj1=l4;
si2=l1;
sj2=(U64)(si2);
sj1>>=(sj2&63);
i64_store(&i->m0,(U64)si0,sj1);
L1:;
si0=l3;
si1=64U;
si0+=si1;
i->g0=si0;
L0:;
}

U64 f1010(rustpythonInstance*i,U64 l0,U32 l1,U32 l2) {
U32 l3=0;
U64 l4=0;
U64 l5=0;
U64 l6=0;
U32 si0,si1,si2;
U64 sj0,sj1,sj2;
si0=i->g0;
si1=64U;
si0-=si1;
l3=si0;
i->g0=si0;
si0=l3;
si1=l1;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l3;
sj1=l0;
i64_store(&i->m0,(U64)si0+8U,sj1);
si0=l1;
if(si0){
goto L2;
}
sj0=l0;
l4=sj0;
goto L1;
L2:;
sj0=0ULL;
l4=sj0;
sj0=l0;
si0=!(sj0);
if(si0){
goto L1;
}
si0=l2;
si1=255U;
si0&=si1;
switch(si0){
case 0:
goto L7;
case 1:
goto L11;
case 2:
goto L12;
case 3:
goto L13;
case 4:
goto L9;
case 5:
goto L8;
default:
goto L7;
}
L13:;
sj0=1ULL;
l4=sj0;
si0=l1;
si1=63U;
si0=si0 <= si1;
if(si0){
goto L10;
}
goto L1;
L12:;
si0=l1;
si1=63U;
si0=si0 > si1;
if(si0){
goto L1;
}
goto L3;
L11:;
sj0=1ULL;
l4=sj0;
si0=l1;
si1=63U;
si0=si0 > si1;
if(si0){
goto L1;
}
L10:;
sj0=l0;
si1=l1;
sj1=(U64)(si1);
l4=sj1;
sj0>>=(sj1&63);
l5=sj0;
sj1=l5;
sj2=l4;
sj1<<=(sj2&63);
sj2=l0;
si1=sj1 != sj2;
sj1=(U64)(si1);
sj0+=sj1;
l4=sj0;
goto L1;
L9:;
si0=l1;
si1=64U;
si0=si0 == si1;
if(si0){
goto L4;
}
si0=l1;
si1=63U;
si0=si0 > si1;
if(si0){
goto L1;
}
sj0=l0;
si1=l1;
si2=-1U;
si1+=si2;
si2=63U;
si1&=si2;
sj1=(U64)(si1);
l5=sj1;
sj0>>=(sj1&63);
l4=sj0;
sj1=1ULL;
sj0&=sj1;
si0=!(sj0);
if(si0){
goto L6;
}
sj0=l4;
sj1=1ULL;
sj0>>=(sj1&63);
l6=sj0;
sj0=l4;
sj1=l5;
sj0<<=(sj1&63);
sj1=l0;
si0=sj0 != sj1;
if(si0){
goto L14;
}
sj0=l6;
sj1=1ULL;
sj0&=sj1;
sj1=l6;
sj0+=sj1;
l4=sj0;
goto L1;
L14:;
sj0=l6;
sj1=1ULL;
sj0+=sj1;
l4=sj0;
goto L1;
L8:;
si0=l1;
si1=63U;
si0=si0 > si1;
if(si0){
goto L5;
}
sj0=l0;
si1=l1;
sj1=(U64)(si1);
l5=sj1;
sj0>>=(sj1&63);
l4=sj0;
sj1=l5;
sj0<<=(sj1&63);
sj1=l0;
si0=sj0 == sj1;
if(si0){
goto L1;
}
si0=l3;
si1=48U;
si0+=si1;
si1=12U;
si0+=si1;
si1=1U;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=24U;
si0+=si1;
si1=12U;
si0+=si1;
sj1=2ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=2U;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l3;
si1=1196780U;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l3;
si1=256U;
i32_store(&i->m0,(U64)si0+52U,si1);
si0=l3;
si1=l3;
si2=48U;
si1+=si2;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l3;
si1=l3;
si2=20U;
si1+=si2;
i32_store(&i->m0,(U64)si0+56U,si1);
si0=l3;
si1=l3;
si2=8U;
si1+=si2;
i32_store(&i->m0,(U64)si0+48U,si1);
si0=l3;
si1=24U;
si0+=si1;
si1=1196924U;
f614(i,si0,si1);
UNREACHABLE;
L7:;
si0=l1;
si1=63U;
si0=si0 <= si1;
if(si0){
goto L3;
}
goto L1;
L6:;
sj0=l4;
sj1=1ULL;
sj0>>=(sj1&63);
l4=sj0;
goto L1;
L5:;
si0=l3;
si1=48U;
si0+=si1;
si1=12U;
si0+=si1;
si1=1U;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=24U;
si0+=si1;
si1=12U;
si0+=si1;
sj1=2ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=2U;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l3;
si1=1196780U;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l3;
si1=256U;
i32_store(&i->m0,(U64)si0+52U,si1);
si0=l3;
si1=l3;
si2=48U;
si1+=si2;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l3;
si1=l3;
si2=20U;
si1+=si2;
i32_store(&i->m0,(U64)si0+56U,si1);
si0=l3;
si1=l3;
si2=8U;
si1+=si2;
i32_store(&i->m0,(U64)si0+48U,si1);
si0=l3;
si1=24U;
si0+=si1;
si1=1196940U;
f614(i,si0,si1);
UNREACHABLE;
L4:;
sj0=l0;
sj1=-9223372036854775808ULL;
si0=sj0 > sj1;
sj0=(U64)(si0);
l4=sj0;
goto L1;
L3:;
sj0=l0;
si1=l1;
sj1=(U64)(si1);
sj0>>=(sj1&63);
l4=sj0;
L1:;
si0=l3;
si1=64U;
si0+=si1;
i->g0=si0;
sj0=l4;
L0:;
return sj0;
}

U32 f1011(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U32 l4=0;
U32 si0,si1,si2,si3;
U64 sj1;
si0=i->g0;
si1=48U;
si0-=si1;
l3=si0;
i->g0=si0;
si0=l1;
si1=-1U;
si0=(U32)((I32)si0>(I32)si1);
if(si0){
goto L2;
}
si0=0U;
si1=l0;
si2=0U;
si3=l1;
si2-=si3;
l1=si2;
si1<<=(si2&31);
si2=l1;
si3=31U;
si2=si2 > si3;
si0=si2?si0:si1;
l4=si0;
goto L1;
L2:;
si0=l3;
si1=l1;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l3;
si1=l0;
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
if(si0){
goto L3;
}
si0=l0;
l4=si0;
goto L1;
L3:;
si0=0U;
l4=si0;
si0=l0;
si0=!(si0);
if(si0){
goto L1;
}
si0=l2;
si1=255U;
si0&=si1;
switch(si0){
case 0:
goto L8;
case 1:
goto L12;
case 2:
goto L13;
case 3:
goto L14;
case 4:
goto L10;
case 5:
goto L9;
default:
goto L8;
}
L14:;
si0=1U;
l4=si0;
si0=l1;
si1=31U;
si0=si0 <= si1;
if(si0){
goto L11;
}
goto L1;
L13:;
si0=l1;
si1=31U;
si0=si0 > si1;
if(si0){
goto L1;
}
goto L4;
L12:;
si0=1U;
l4=si0;
si0=l1;
si1=31U;
si0=si0 > si1;
if(si0){
goto L1;
}
L11:;
si0=l0;
si1=l1;
si0>>=(si1&31);
l4=si0;
si1=l4;
si2=l1;
si1<<=(si2&31);
si2=l0;
si1=si1 != si2;
si0+=si1;
l4=si0;
goto L1;
L10:;
si0=l1;
si1=32U;
si0=si0 == si1;
if(si0){
goto L5;
}
si0=l1;
si1=31U;
si0=si0 > si1;
if(si0){
goto L1;
}
si0=l0;
si1=l1;
si2=-1U;
si1+=si2;
l4=si1;
si0>>=(si1&31);
l1=si0;
si1=1U;
si0&=si1;
si0=!(si0);
if(si0){
goto L7;
}
si0=l1;
si1=1U;
si0>>=(si1&31);
l2=si0;
si0=l1;
si1=l4;
si2=31U;
si1&=si2;
si0<<=(si1&31);
si1=l0;
si0=si0 != si1;
if(si0){
goto L15;
}
si0=l2;
si1=1U;
si0&=si1;
si1=l2;
si0+=si1;
l4=si0;
goto L1;
L15:;
si0=l2;
si1=1U;
si0+=si1;
l4=si0;
goto L1;
L9:;
si0=l1;
si1=31U;
si0=si0 > si1;
if(si0){
goto L6;
}
si0=l0;
si1=l1;
si0>>=(si1&31);
l4=si0;
si1=l1;
si0<<=(si1&31);
si1=l0;
si0=si0 == si1;
if(si0){
goto L1;
}
si0=l3;
si1=32U;
si0+=si1;
si1=12U;
si0+=si1;
si1=1U;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=8U;
si0+=si1;
si1=12U;
si0+=si1;
sj1=2ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=2U;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l3;
si1=1196780U;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l3;
si1=1U;
i32_store(&i->m0,(U64)si0+36U,si1);
si0=l3;
si1=l3;
si2=32U;
si1+=si2;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l3;
si1=l3;
si2=4U;
si1+=si2;
i32_store(&i->m0,(U64)si0+40U,si1);
si0=l3;
si1=l3;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l3;
si1=8U;
si0+=si1;
si1=1196924U;
f614(i,si0,si1);
UNREACHABLE;
L8:;
si0=l1;
si1=31U;
si0=si0 <= si1;
if(si0){
goto L4;
}
goto L1;
L7:;
si0=l1;
si1=1U;
si0>>=(si1&31);
l4=si0;
goto L1;
L6:;
si0=l3;
si1=32U;
si0+=si1;
si1=12U;
si0+=si1;
si1=1U;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=8U;
si0+=si1;
si1=12U;
si0+=si1;
sj1=2ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=2U;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l3;
si1=1196780U;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l3;
si1=1U;
i32_store(&i->m0,(U64)si0+36U,si1);
si0=l3;
si1=l3;
si2=32U;
si1+=si2;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l3;
si1=l3;
si2=4U;
si1+=si2;
i32_store(&i->m0,(U64)si0+40U,si1);
si0=l3;
si1=l3;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l3;
si1=8U;
si0+=si1;
si1=1196940U;
f614(i,si0,si1);
UNREACHABLE;
L5:;
si0=l0;
si1=-2147483648U;
si0=si0 > si1;
l4=si0;
goto L1;
L4:;
si0=l0;
si1=l1;
si0>>=(si1&31);
l4=si0;
L1:;
si0=l3;
si1=48U;
si0+=si1;
i->g0=si0;
si0=l4;
L0:;
return si0;
}

U32 f1012(rustpythonInstance*i,U32 l0,U64 l1,U32 l2) {
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 si0,si1,si2;
U64 sj0,sj1;
si0=i->g0;
si1=64U;
si0-=si1;
l3=si0;
i->g0=si0;
si0=l3;
sj1=l1;
i64_store(&i->m0,(U64)si0+16U,sj1);
si0=l3;
si1=l0;
i32_store(&i->m0,(U64)si0+12U,si1);
sj0=l1;
si0=!(sj0);
si0=!(si0);
if(si0){
goto L2;
}
si0=l0;
l4=si0;
goto L1;
L2:;
si0=0U;
l4=si0;
si0=l0;
si0=!(si0);
if(si0){
goto L1;
}
si0=l2;
si1=255U;
si0&=si1;
switch(si0){
case 0:
goto L7;
case 1:
goto L11;
case 2:
goto L12;
case 3:
goto L13;
case 4:
goto L9;
case 5:
goto L8;
default:
goto L7;
}
L13:;
si0=1U;
l4=si0;
sj0=l1;
sj1=31ULL;
si0=sj0 <= sj1;
if(si0){
goto L10;
}
goto L1;
L12:;
sj0=l1;
sj1=31ULL;
si0=sj0 > sj1;
if(si0){
goto L1;
}
goto L3;
L11:;
si0=1U;
l4=si0;
sj0=l1;
sj1=31ULL;
si0=sj0 > sj1;
if(si0){
goto L1;
}
L10:;
si0=l0;
sj1=l1;
si1=(U32)(sj1);
l4=si1;
si0>>=(si1&31);
l2=si0;
si1=l2;
si2=l4;
si1<<=(si2&31);
si2=l0;
si1=si1 != si2;
si0+=si1;
l4=si0;
goto L1;
L9:;
sj0=l1;
sj1=32ULL;
si0=sj0 == sj1;
if(si0){
goto L4;
}
sj0=l1;
sj1=31ULL;
si0=sj0 > sj1;
if(si0){
goto L1;
}
si0=l0;
sj1=l1;
si1=(U32)(sj1);
si2=-1U;
si1+=si2;
l2=si1;
si0>>=(si1&31);
l4=si0;
si1=1U;
si0&=si1;
si0=!(si0);
if(si0){
goto L6;
}
si0=l4;
si1=1U;
si0>>=(si1&31);
l5=si0;
si0=l4;
si1=l2;
si2=31U;
si1&=si2;
si0<<=(si1&31);
si1=l0;
si0=si0 != si1;
if(si0){
goto L14;
}
si0=l5;
si1=1U;
si0&=si1;
si1=l5;
si0+=si1;
l4=si0;
goto L1;
L14:;
si0=l5;
si1=1U;
si0+=si1;
l4=si0;
goto L1;
L8:;
sj0=l1;
sj1=31ULL;
si0=sj0 > sj1;
if(si0){
goto L5;
}
si0=l0;
sj1=l1;
si1=(U32)(sj1);
l2=si1;
si0>>=(si1&31);
l4=si0;
si1=l2;
si0<<=(si1&31);
si1=l0;
si0=si0 == si1;
if(si0){
goto L1;
}
si0=l3;
si1=48U;
si0+=si1;
si1=12U;
si0+=si1;
si1=256U;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=24U;
si0+=si1;
si1=12U;
si0+=si1;
sj1=2ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=2U;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l3;
si1=1196780U;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l3;
si1=1U;
i32_store(&i->m0,(U64)si0+52U,si1);
si0=l3;
si1=l3;
si2=48U;
si1+=si2;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l3;
si1=l3;
si2=16U;
si1+=si2;
i32_store(&i->m0,(U64)si0+56U,si1);
si0=l3;
si1=l3;
si2=12U;
si1+=si2;
i32_store(&i->m0,(U64)si0+48U,si1);
si0=l3;
si1=24U;
si0+=si1;
si1=1196924U;
f614(i,si0,si1);
UNREACHABLE;
L7:;
sj0=l1;
sj1=31ULL;
si0=sj0 <= sj1;
if(si0){
goto L3;
}
goto L1;
L6:;
si0=l4;
si1=1U;
si0>>=(si1&31);
l4=si0;
goto L1;
L5:;
si0=l3;
si1=48U;
si0+=si1;
si1=12U;
si0+=si1;
si1=256U;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=24U;
si0+=si1;
si1=12U;
si0+=si1;
sj1=2ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=2U;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l3;
si1=1196780U;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l3;
si1=1U;
i32_store(&i->m0,(U64)si0+52U,si1);
si0=l3;
si1=l3;
si2=48U;
si1+=si2;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l3;
si1=l3;
si2=16U;
si1+=si2;
i32_store(&i->m0,(U64)si0+56U,si1);
si0=l3;
si1=l3;
si2=12U;
si1+=si2;
i32_store(&i->m0,(U64)si0+48U,si1);
si0=l3;
si1=24U;
si0+=si1;
si1=1196940U;
f614(i,si0,si1);
UNREACHABLE;
L4:;
si0=l0;
si1=-2147483648U;
si0=si0 > si1;
l4=si0;
goto L1;
L3:;
si0=l0;
sj1=l1;
si1=(U32)(sj1);
si0>>=(si1&31);
l4=si0;
L1:;
si0=l3;
si1=64U;
si0+=si1;
i->g0=si0;
si0=l4;
L0:;
return si0;
}

U64 f1013(rustpythonInstance*i,U64 l0,U64 l1,U32 l2) {
U32 l3=0;
U64 l4=0;
U64 l5=0;
U32 si0,si1,si2;
U64 sj0,sj1,sj2;
si0=i->g0;
si1=64U;
si0-=si1;
l3=si0;
i->g0=si0;
si0=l3;
sj1=l1;
i64_store(&i->m0,(U64)si0+16U,sj1);
si0=l3;
sj1=l0;
i64_store(&i->m0,(U64)si0+8U,sj1);
sj0=l1;
si0=!(sj0);
si0=!(si0);
if(si0){
goto L2;
}
sj0=l0;
l4=sj0;
goto L1;
L2:;
sj0=0ULL;
l4=sj0;
sj0=l0;
si0=!(sj0);
if(si0){
goto L1;
}
si0=l2;
si1=255U;
si0&=si1;
switch(si0){
case 0:
goto L7;
case 1:
goto L11;
case 2:
goto L12;
case 3:
goto L13;
case 4:
goto L9;
case 5:
goto L8;
default:
goto L7;
}
L13:;
sj0=1ULL;
l4=sj0;
sj0=l1;
sj1=63ULL;
si0=sj0 <= sj1;
if(si0){
goto L10;
}
goto L1;
L12:;
sj0=l1;
sj1=63ULL;
si0=sj0 > sj1;
if(si0){
goto L1;
}
goto L3;
L11:;
sj0=1ULL;
l4=sj0;
sj0=l1;
sj1=63ULL;
si0=sj0 > sj1;
if(si0){
goto L1;
}
L10:;
sj0=l0;
sj1=l1;
sj0>>=(sj1&63);
l4=sj0;
sj1=l4;
sj2=l1;
sj1<<=(sj2&63);
sj2=l0;
si1=sj1 != sj2;
sj1=(U64)(si1);
sj0+=sj1;
l4=sj0;
goto L1;
L9:;
sj0=l1;
sj1=64ULL;
si0=sj0 == sj1;
if(si0){
goto L4;
}
sj0=l1;
sj1=63ULL;
si0=sj0 > sj1;
if(si0){
goto L1;
}
sj0=l0;
sj1=l1;
sj2=-1ULL;
sj1+=sj2;
l4=sj1;
sj0>>=(sj1&63);
l1=sj0;
sj1=1ULL;
sj0&=sj1;
si0=!(sj0);
if(si0){
goto L6;
}
sj0=l1;
sj1=1ULL;
sj0>>=(sj1&63);
l5=sj0;
sj0=l1;
sj1=l4;
sj2=63ULL;
sj1&=sj2;
sj0<<=(sj1&63);
sj1=l0;
si0=sj0 != sj1;
if(si0){
goto L14;
}
sj0=l5;
sj1=1ULL;
sj0&=sj1;
sj1=l5;
sj0+=sj1;
l4=sj0;
goto L1;
L14:;
sj0=l5;
sj1=1ULL;
sj0+=sj1;
l4=sj0;
goto L1;
L8:;
sj0=l1;
sj1=63ULL;
si0=sj0 > sj1;
if(si0){
goto L5;
}
sj0=l0;
sj1=l1;
sj0>>=(sj1&63);
l4=sj0;
sj1=l1;
sj0<<=(sj1&63);
sj1=l0;
si0=sj0 == sj1;
if(si0){
goto L1;
}
si0=l3;
si1=48U;
si0+=si1;
si1=12U;
si0+=si1;
si1=256U;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=24U;
si0+=si1;
si1=12U;
si0+=si1;
sj1=2ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=2U;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l3;
si1=1196780U;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l3;
si1=256U;
i32_store(&i->m0,(U64)si0+52U,si1);
si0=l3;
si1=l3;
si2=48U;
si1+=si2;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l3;
si1=l3;
si2=16U;
si1+=si2;
i32_store(&i->m0,(U64)si0+56U,si1);
si0=l3;
si1=l3;
si2=8U;
si1+=si2;
i32_store(&i->m0,(U64)si0+48U,si1);
si0=l3;
si1=24U;
si0+=si1;
si1=1196924U;
f614(i,si0,si1);
UNREACHABLE;
L7:;
sj0=l1;
sj1=63ULL;
si0=sj0 <= sj1;
if(si0){
goto L3;
}
goto L1;
L6:;
sj0=l1;
sj1=1ULL;
sj0>>=(sj1&63);
l4=sj0;
goto L1;
L5:;
si0=l3;
si1=48U;
si0+=si1;
si1=12U;
si0+=si1;
si1=256U;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=24U;
si0+=si1;
si1=12U;
si0+=si1;
sj1=2ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=2U;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l3;
si1=1196780U;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l3;
si1=256U;
i32_store(&i->m0,(U64)si0+52U,si1);
si0=l3;
si1=l3;
si2=48U;
si1+=si2;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l3;
si1=l3;
si2=16U;
si1+=si2;
i32_store(&i->m0,(U64)si0+56U,si1);
si0=l3;
si1=l3;
si2=8U;
si1+=si2;
i32_store(&i->m0,(U64)si0+48U,si1);
si0=l3;
si1=24U;
si0+=si1;
si1=1196940U;
f614(i,si0,si1);
UNREACHABLE;
L4:;
sj0=l0;
sj1=-9223372036854775808ULL;
si0=sj0 > sj1;
sj0=(U64)(si0);
l4=sj0;
goto L1;
L3:;
sj0=l0;
sj1=l1;
sj0>>=(sj1&63);
l4=sj0;
L1:;
si0=l3;
si1=64U;
si0+=si1;
i->g0=si0;
sj0=l4;
L0:;
return sj0;
}

void f1014(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 si0,si1,si2,si3;
U64 sj1;
si0=i->g0;
si1=48U;
si0-=si1;
l3=si0;
i->g0=si0;
si0=l1;
si1=-1U;
si0=(U32)((I32)si0>(I32)si1);
if(si0){
goto L7;
}
si0=0U;
si1=l1;
si0-=si1;
l1=si0;
si1=31U;
si0=si0 > si1;
if(si0){
goto L6;
}
si0=l0;
si1=l0;
si1=i32_load(&i->m0,(U64)si1);
si2=l1;
si1<<=(si2&31);
i32_store(&i->m0,(U64)si0,si1);
goto L1;
L7:;
si0=l3;
si1=l1;
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
si0=!(si0);
if(si0){
goto L1;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
si0=!(si0);
if(si0){
goto L1;
}
si0=l2;
si1=255U;
si0&=si1;
switch(si0){
case 0:
goto L15;
case 1:
goto L12;
case 2:
goto L16;
case 3:
goto L13;
case 4:
goto L10;
case 5:
goto L9;
default:
goto L15;
}
L16:;
si0=l1;
si1=31U;
si0=si0 > si1;
if(si0){
goto L14;
}
goto L2;
L15:;
si0=l1;
si1=31U;
si0=si0 <= si1;
if(si0){
goto L2;
}
L14:;
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
goto L1;
L13:;
si0=l1;
si1=31U;
si0=si0 > si1;
if(si0){
goto L11;
}
goto L3;
L12:;
si0=l1;
si1=31U;
si0=si0 <= si1;
if(si0){
goto L3;
}
L11:;
si0=l0;
si1=1U;
i32_store(&i->m0,(U64)si0,si1);
goto L1;
L10:;
si0=l1;
si1=32U;
si0=si0 == si1;
if(si0){
goto L18;
}
si0=l1;
si1=31U;
si0=si0 > si1;
if(si0){
goto L17;
}
si0=l0;
si1=l4;
si2=l1;
si3=-1U;
si2+=si3;
l2=si2;
si1>>=(si2&31);
l1=si1;
si2=1U;
si1>>=(si2&31);
l5=si1;
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
si1=1U;
si0&=si1;
si0=!(si0);
if(si0){
goto L1;
}
si0=l1;
si1=l2;
si2=31U;
si1&=si2;
si0<<=(si1&31);
si1=l4;
si0=si0 != si1;
if(si0){
goto L5;
}
si0=l1;
si1=2U;
si0&=si1;
si0=!(si0);
if(si0){
goto L1;
}
si0=l0;
si1=l5;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
goto L1;
L18:;
si0=l4;
si1=-2147483648U;
si0=si0 > si1;
if(si0){
goto L8;
}
L17:;
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
goto L1;
L9:;
si0=l1;
si1=31U;
si0=si0 > si1;
if(si0){
goto L4;
}
si0=l3;
si1=l4;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l4;
si2=l1;
si1>>=(si2&31);
l2=si1;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=l1;
si0<<=(si1&31);
si1=l4;
si0=si0 == si1;
if(si0){
goto L1;
}
si0=l3;
si1=32U;
si0+=si1;
si1=12U;
si0+=si1;
si1=1U;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=8U;
si0+=si1;
si1=12U;
si0+=si1;
sj1=2ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=2U;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l3;
si1=1196964U;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l3;
si1=1U;
i32_store(&i->m0,(U64)si0+36U,si1);
si0=l3;
si1=l3;
si2=32U;
si1+=si2;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l3;
si1=l3;
i32_store(&i->m0,(U64)si0+40U,si1);
si0=l3;
si1=l3;
si2=4U;
si1+=si2;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l3;
si1=8U;
si0+=si1;
si1=1196980U;
f614(i,si0,si1);
UNREACHABLE;
L8:;
si0=l0;
si1=1U;
i32_store(&i->m0,(U64)si0,si1);
goto L1;
L6:;
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
goto L1;
L5:;
si0=l0;
si1=l5;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
goto L1;
L4:;
si0=l3;
si1=32U;
si0+=si1;
si1=12U;
si0+=si1;
si1=1U;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=8U;
si0+=si1;
si1=12U;
si0+=si1;
sj1=2ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=2U;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l3;
si1=1196964U;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l3;
si1=1U;
i32_store(&i->m0,(U64)si0+36U,si1);
si0=l3;
si1=l0;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l3;
si1=l3;
si2=32U;
si1+=si2;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l3;
si1=l3;
i32_store(&i->m0,(U64)si0+40U,si1);
si0=l3;
si1=8U;
si0+=si1;
si1=1196996U;
f614(i,si0,si1);
UNREACHABLE;
L3:;
si0=l0;
si1=l4;
si2=l1;
si1>>=(si2&31);
l2=si1;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=l1;
si0<<=(si1&31);
si1=l4;
si0=si0 == si1;
if(si0){
goto L1;
}
si0=l0;
si1=l2;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
goto L1;
L2:;
si0=l0;
si1=l4;
si2=l1;
si1>>=(si2&31);
i32_store(&i->m0,(U64)si0,si1);
L1:;
si0=l3;
si1=48U;
si0+=si1;
i->g0=si0;
L0:;
}

void f1015(rustpythonInstance*i,U32 l0,U64 l1,U32 l2) {
U32 l3=0;
U64 l4=0;
U64 l5=0;
U64 l6=0;
U32 si0,si1,si2;
U64 sj0,sj1,sj2,sj3;
si0=i->g0;
si1=64U;
si0-=si1;
l3=si0;
i->g0=si0;
si0=l3;
sj1=l1;
i64_store(&i->m0,(U64)si0+8U,sj1);
sj0=l1;
si0=!(sj0);
if(si0){
goto L1;
}
si0=l0;
sj0=i64_load(&i->m0,(U64)si0);
l4=sj0;
si0=!(sj0);
if(si0){
goto L1;
}
si0=l2;
si1=255U;
si0&=si1;
switch(si0){
case 0:
goto L13;
case 1:
goto L10;
case 2:
goto L14;
case 3:
goto L11;
case 4:
goto L8;
case 5:
goto L7;
default:
goto L13;
}
L14:;
sj0=l1;
sj1=63ULL;
si0=sj0 > sj1;
if(si0){
goto L12;
}
goto L2;
L13:;
sj0=l1;
sj1=63ULL;
si0=sj0 <= sj1;
if(si0){
goto L2;
}
L12:;
si0=l0;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
goto L1;
L11:;
sj0=l1;
sj1=63ULL;
si0=sj0 > sj1;
if(si0){
goto L9;
}
goto L3;
L10:;
sj0=l1;
sj1=63ULL;
si0=sj0 <= sj1;
if(si0){
goto L3;
}
L9:;
si0=l0;
sj1=1ULL;
i64_store(&i->m0,(U64)si0,sj1);
goto L1;
L8:;
sj0=l1;
sj1=64ULL;
si0=sj0 == sj1;
if(si0){
goto L16;
}
sj0=l1;
sj1=63ULL;
si0=sj0 > sj1;
if(si0){
goto L15;
}
si0=l0;
sj1=l4;
sj2=l1;
sj3=-1ULL;
sj2+=sj3;
l5=sj2;
sj1>>=(sj2&63);
l1=sj1;
sj2=1ULL;
sj1>>=(sj2&63);
l6=sj1;
i64_store(&i->m0,(U64)si0,sj1);
sj0=l1;
sj1=1ULL;
sj0&=sj1;
si0=!(sj0);
if(si0){
goto L1;
}
sj0=l1;
sj1=l5;
sj2=63ULL;
sj1&=sj2;
sj0<<=(sj1&63);
sj1=l4;
si0=sj0 != sj1;
if(si0){
goto L5;
}
sj0=l1;
sj1=2ULL;
sj0&=sj1;
si0=!(sj0);
if(si0){
goto L1;
}
si0=l0;
sj1=l6;
sj2=1ULL;
sj1+=sj2;
i64_store(&i->m0,(U64)si0,sj1);
goto L1;
L16:;
sj0=l4;
sj1=-9223372036854775808ULL;
si0=sj0 > sj1;
if(si0){
goto L6;
}
L15:;
si0=l0;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
goto L1;
L7:;
sj0=l1;
sj1=63ULL;
si0=sj0 > sj1;
if(si0){
goto L4;
}
si0=l3;
sj1=l4;
i64_store(&i->m0,(U64)si0+16U,sj1);
si0=l0;
sj1=l4;
sj2=l1;
sj1>>=(sj2&63);
l5=sj1;
i64_store(&i->m0,(U64)si0,sj1);
sj0=l5;
sj1=l1;
sj0<<=(sj1&63);
sj1=l4;
si0=sj0 == sj1;
if(si0){
goto L1;
}
si0=l3;
si1=48U;
si0+=si1;
si1=12U;
si0+=si1;
si1=256U;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=24U;
si0+=si1;
si1=12U;
si0+=si1;
sj1=2ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=2U;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l3;
si1=1196964U;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l3;
si1=256U;
i32_store(&i->m0,(U64)si0+52U,si1);
si0=l3;
si1=l3;
si2=48U;
si1+=si2;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l3;
si1=l3;
si2=8U;
si1+=si2;
i32_store(&i->m0,(U64)si0+56U,si1);
si0=l3;
si1=l3;
si2=16U;
si1+=si2;
i32_store(&i->m0,(U64)si0+48U,si1);
si0=l3;
si1=24U;
si0+=si1;
si1=1196980U;
f614(i,si0,si1);
UNREACHABLE;
L6:;
si0=l0;
sj1=1ULL;
i64_store(&i->m0,(U64)si0,sj1);
goto L1;
L5:;
si0=l0;
sj1=l6;
sj2=1ULL;
sj1+=sj2;
i64_store(&i->m0,(U64)si0,sj1);
goto L1;
L4:;
si0=l3;
si1=48U;
si0+=si1;
si1=12U;
si0+=si1;
si1=256U;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=24U;
si0+=si1;
si1=12U;
si0+=si1;
sj1=2ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=2U;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l3;
si1=1196964U;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l3;
si1=256U;
i32_store(&i->m0,(U64)si0+52U,si1);
si0=l3;
si1=l0;
i32_store(&i->m0,(U64)si0+48U,si1);
si0=l3;
si1=l3;
si2=48U;
si1+=si2;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l3;
si1=l3;
si2=8U;
si1+=si2;
i32_store(&i->m0,(U64)si0+56U,si1);
si0=l3;
si1=24U;
si0+=si1;
si1=1196996U;
f614(i,si0,si1);
UNREACHABLE;
L3:;
si0=l0;
sj1=l4;
sj2=l1;
sj1>>=(sj2&63);
l5=sj1;
i64_store(&i->m0,(U64)si0,sj1);
sj0=l5;
sj1=l1;
sj0<<=(sj1&63);
sj1=l4;
si0=sj0 == sj1;
if(si0){
goto L1;
}
si0=l0;
sj1=l5;
sj2=1ULL;
sj1+=sj2;
i64_store(&i->m0,(U64)si0,sj1);
goto L1;
L2:;
si0=l0;
sj1=l4;
sj2=l1;
sj1>>=(sj2&63);
i64_store(&i->m0,(U64)si0,sj1);
L1:;
si0=l3;
si1=64U;
si0+=si1;
i->g0=si0;
L0:;
}

U32 f1016(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4,U32 l5,U32 l6,U32 l7,U32 l8) {
U32 l9=0;
U32 l10=0;
U32 l11=0;
U32 l12=0;
U32 l13=0;
U64 l14=0;
U64 l15=0;
U32 l16=0;
U32 l17=0;
U64 l18=0;
U32 si0,si1,si2,si3,si4,si5,si6,si7;
U64 sj0,sj1,sj2,sj3,sj4;
si0=i->g0;
si1=32U;
si0-=si1;
l9=si0;
i->g0=si0;
si0=l9;
si1=l1;
i32_store(&i->m0,(U64)si0,si1);
si0=l9;
si1=l6;
si2=1U;
si1+=si2;
l10=si1;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l10;
si1=l1;
si0=si0 != si1;
if(si0){
goto L10;
}
si0=l9;
si1=l8;
i32_store(&i->m0,(U64)si0,si1);
si0=l9;
si1=l1;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l1;
si1=l8;
si0=si0 != si1;
if(si0){
goto L6;
}
si0=l5;
si1=l6;
si0=si0 < si1;
if(si0){
goto L9;
}
si0=l5;
si1=l6;
si0-=si1;
l8=si0;
si1=l6;
si0=si0 < si1;
if(si0){
goto L8;
}
si0=l8;
si1=l6;
si0-=si1;
l8=si0;
si1=l6;
si0=si0 < si1;
if(si0){
goto L7;
}
si0=l8;
si1=l6;
si0-=si1;
l11=si0;
si1=l6;
si0=si0 > si1;
if(si0){
goto L5;
}
si0=l6;
si1=l1;
si0=si0 > si1;
if(si0){
goto L13;
}
si0=l6;
if(si0){
goto L12;
}
si0=0U;
l10=si0;
goto L11;
L13:;
si0=1202809U;
si1=34U;
si2=1202976U;
f604(i,si0,si1,si2);
UNREACHABLE;
L12:;
si0=l6;
si1=4U;
si0<<=(si1&31);
l12=si0;
si0=0U;
l10=si0;
si0=l6;
l13=si0;
si0=l4;
l8=si0;
si0=l0;
l5=si0;
L14:;
{
si0=l8;
sj0=i64_load(&i->m0,(U64)si0);
l14=sj0;
si1=l8;
si2=l12;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
sj0+=sj1;
l15=sj0;
sj1=l14;
si0=sj0 < sj1;
l16=si0;
si0=l10;
si1=255U;
si0&=si1;
if(si0){
goto L16;
}
si0=l16;
l10=si0;
goto L15;
L16:;
si0=l16;
sj1=l15;
sj2=1ULL;
sj1+=sj2;
l15=sj1;
si1=!(sj1);
si0|=si1;
l10=si0;
L15:;
si0=l5;
sj1=l15;
i64_store(&i->m0,(U64)si0,sj1);
si0=l8;
si1=8U;
si0+=si1;
l8=si0;
si0=l5;
si1=8U;
si0+=si1;
l5=si0;
si0=l13;
si1=-1U;
si0+=si1;
l13=si0;
if(si0){
goto L14;
}
}
L11:;
si0=l6;
si1=l1;
si0=si0 >= si1;
if(si0){
goto L4;
}
si0=l0;
si1=l6;
si2=3U;
si1<<=(si2&31);
l8=si1;
si0+=si1;
l17=si0;
si1=l10;
sj1=(U64)(si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l7;
si1=l8;
si0+=si1;
si1=l7;
si2=l1;
si3=l4;
si4=l6;
si5=3U;
si4<<=(si5&31);
l8=si4;
si3+=si4;
l5=si3;
si4=l6;
si5=l5;
si6=l8;
si5+=si6;
si6=l6;
si7=3U;
si6<<=(si7&31);
si5+=si6;
si6=l11;
si1=f1048(i,si1,si2,si3,si4,si5,si6);
sj1=(U64)(si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=-8U;
si0+=si1;
l13=si0;
si0=l7;
si1=-8U;
si0+=si1;
l16=si0;
si0=l1;
si1=3U;
si0<<=(si1&31);
l8=si0;
L19:;
{
si0=l8;
si0=!(si0);
if(si0){
goto L18;
}
si0=l13;
si1=l8;
si0+=si1;
l5=si0;
si0=l16;
si1=l8;
si0+=si1;
l10=si0;
si0=l8;
si1=-8U;
si0+=si1;
l8=si0;
si0=l10;
sj0=i64_load(&i->m0,(U64)si0);
l15=sj0;
si1=l5;
sj1=i64_load(&i->m0,(U64)si1);
l14=sj1;
si0=sj0 == sj1;
if(si0){
goto L19;
}
}
sj0=l15;
sj1=l14;
si0=sj0 <= sj1;
if(si0){
goto L17;
}
goto L2;
L18:;
si0=l8;
if(si0){
goto L2;
}
L17:;
si0=l1;
si1=l3;
si0=si0 > si1;
if(si0){
goto L3;
}
si0=l1;
si1=1U;
si0&=si1;
l11=si0;
si0=0U;
l4=si0;
sj0=0ULL;
l15=sj0;
si0=0U;
l16=si0;
si0=l1;
si1=1U;
si0=si0 == si1;
if(si0){
goto L20;
}
si0=l1;
si1=-2U;
si0&=si1;
l12=si0;
si0=0U;
l13=si0;
si0=l0;
l8=si0;
si0=l7;
l5=si0;
si0=l2;
l10=si0;
si0=0U;
l16=si0;
L21:;
{
si0=l10;
si1=l8;
sj1=i64_load(&i->m0,(U64)si1);
l15=sj1;
si2=l13;
sj2=(U64)(si2);
sj3=1ULL;
sj2&=sj3;
sj1-=sj2;
si2=l5;
sj2=i64_load(&i->m0,(U64)si2);
l14=sj2;
sj1-=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l10;
si1=8U;
si0+=si1;
si1=l8;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
l18=sj1;
sj2=l15;
sj3=l14;
si2=sj2 <= sj3;
sj3=l15;
sj4=l14;
si3=sj3 < sj4;
si4=l13;
si5=1U;
si4&=si5;
si2=si4?si2:si3;
l13=si2;
sj2=(U64)(si2);
sj1-=sj2;
si2=l5;
si3=8U;
si2+=si3;
sj2=i64_load(&i->m0,(U64)si2);
l15=sj2;
sj1-=sj2;
i64_store(&i->m0,(U64)si0,sj1);
sj0=l18;
sj1=l15;
si0=sj0 <= sj1;
sj1=l18;
sj2=l15;
si1=sj1 < sj2;
si2=l13;
si0=si2?si0:si1;
l13=si0;
si0=l8;
si1=16U;
si0+=si1;
l8=si0;
si0=l5;
si1=16U;
si0+=si1;
l5=si0;
si0=l10;
si1=16U;
si0+=si1;
l10=si0;
si0=l12;
si1=l16;
si2=2U;
si1+=si2;
l16=si1;
si0=si0 != si1;
if(si0){
goto L21;
}
}
sj0=0ULL;
si1=l13;
sj1=(U64)(si1);
sj0-=sj1;
l15=sj0;
L20:;
si0=l11;
si0=!(si0);
if(si0){
goto L1;
}
si0=l2;
si1=l16;
si2=3U;
si1<<=(si2&31);
l8=si1;
si0+=si1;
si1=l0;
si2=l8;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
sj2=l15;
sj1+=sj2;
si2=l7;
si3=l8;
si2+=si3;
sj2=i64_load(&i->m0,(U64)si2);
sj1-=sj2;
i64_store(&i->m0,(U64)si0,sj1);
goto L1;
L10:;
si0=l9;
si1=0U;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=0U;
si1=l9;
si2=l9;
si3=4U;
si2+=si3;
si3=l9;
si4=8U;
si3+=si4;
si4=1197612U;
f1250(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L9:;
si0=1197048U;
si1=35U;
si2=1197396U;
f604(i,si0,si1,si2);
UNREACHABLE;
L8:;
si0=1197048U;
si1=35U;
si2=1197396U;
f604(i,si0,si1,si2);
UNREACHABLE;
L7:;
si0=1197048U;
si1=35U;
si2=1197396U;
f604(i,si0,si1,si2);
UNREACHABLE;
L6:;
si0=l9;
si1=0U;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=0U;
si1=l9;
si2=l9;
si3=4U;
si2+=si3;
si3=l9;
si4=8U;
si3+=si4;
si4=1197596U;
f1250(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L5:;
si0=1197544U;
si1=35U;
si2=1197580U;
f604(i,si0,si1,si2);
UNREACHABLE;
L4:;
si0=l6;
si1=l1;
si2=1197412U;
f594(i,si0,si1,si2);
UNREACHABLE;
L3:;
si0=1202809U;
si1=34U;
si2=1203412U;
f604(i,si0,si1,si2);
UNREACHABLE;
L2:;
si0=l1;
si1=l3;
si0=si0 > si1;
if(si0){
goto L24;
}
si0=1U;
l4=si0;
si0=l1;
si1=1U;
si0&=si1;
l11=si0;
si0=l1;
si1=1U;
si0=si0 != si1;
if(si0){
goto L23;
}
si0=0U;
l16=si0;
sj0=0ULL;
l15=sj0;
goto L22;
L24:;
si0=1202809U;
si1=34U;
si2=1203412U;
f604(i,si0,si1,si2);
UNREACHABLE;
L23:;
si0=l1;
si1=-2U;
si0&=si1;
l12=si0;
si0=0U;
l13=si0;
si0=l7;
l8=si0;
si0=l0;
l5=si0;
si0=l2;
l10=si0;
si0=0U;
l16=si0;
L25:;
{
si0=l10;
si1=l8;
sj1=i64_load(&i->m0,(U64)si1);
l15=sj1;
si2=l13;
sj2=(U64)(si2);
sj3=1ULL;
sj2&=sj3;
sj1-=sj2;
si2=l5;
sj2=i64_load(&i->m0,(U64)si2);
l14=sj2;
sj1-=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l10;
si1=8U;
si0+=si1;
si1=l8;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
l18=sj1;
sj2=l15;
sj3=l14;
si2=sj2 <= sj3;
sj3=l15;
sj4=l14;
si3=sj3 < sj4;
si4=l13;
si5=1U;
si4&=si5;
si2=si4?si2:si3;
l13=si2;
sj2=(U64)(si2);
sj1-=sj2;
si2=l5;
si3=8U;
si2+=si3;
sj2=i64_load(&i->m0,(U64)si2);
l15=sj2;
sj1-=sj2;
i64_store(&i->m0,(U64)si0,sj1);
sj0=l18;
sj1=l15;
si0=sj0 <= sj1;
sj1=l18;
sj2=l15;
si1=sj1 < sj2;
si2=l13;
si0=si2?si0:si1;
l13=si0;
si0=l8;
si1=16U;
si0+=si1;
l8=si0;
si0=l5;
si1=16U;
si0+=si1;
l5=si0;
si0=l10;
si1=16U;
si0+=si1;
l10=si0;
si0=l12;
si1=l16;
si2=2U;
si1+=si2;
l16=si1;
si0=si0 != si1;
if(si0){
goto L25;
}
}
sj0=0ULL;
si1=l13;
sj1=(U64)(si1);
sj0-=sj1;
l15=sj0;
L22:;
si0=l11;
si0=!(si0);
if(si0){
goto L1;
}
si0=l2;
si1=l16;
si2=3U;
si1<<=(si2&31);
l8=si1;
si0+=si1;
si1=l7;
si2=l8;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
sj2=l15;
sj1+=sj2;
si2=l0;
si3=l8;
si2+=si3;
sj2=i64_load(&i->m0,(U64)si2);
sj1-=sj2;
i64_store(&i->m0,(U64)si0,sj1);
L1:;
si0=0U;
l8=si0;
L26:;
{
si0=l0;
sj0=i64_load(&i->m0,(U64)si0);
l14=sj0;
si1=l7;
sj1=i64_load(&i->m0,(U64)si1);
sj0+=sj1;
l15=sj0;
sj1=l14;
si0=sj0 < sj1;
l5=si0;
si0=l8;
si1=255U;
si0&=si1;
if(si0){
goto L28;
}
si0=l5;
l8=si0;
goto L27;
L28:;
si0=l5;
sj1=l15;
sj2=1ULL;
sj1+=sj2;
l15=sj1;
si1=!(sj1);
si0|=si1;
l8=si0;
L27:;
si0=l0;
sj1=l15;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=8U;
si0+=si1;
l0=si0;
si0=l7;
si1=8U;
si0+=si1;
l7=si0;
si0=l1;
si1=-1U;
si0+=si1;
l1=si0;
if(si0){
goto L26;
}
}
si0=l17;
sj0=i64_load(&i->m0,(U64)si0);
sj1=3ULL;
si0=sj0 > sj1;
if(si0){
goto L31;
}
si0=l6;
si1=l3;
si0=si0 >= si1;
if(si0){
goto L30;
}
si0=l2;
si1=l6;
si2=3U;
si1<<=(si2&31);
si0+=si1;
sj0=i64_load(&i->m0,(U64)si0);
sj1=1ULL;
si0=sj0 <= sj1;
if(si0){
goto L29;
}
si0=1197444U;
si1=33U;
si2=1197480U;
f604(i,si0,si1,si2);
UNREACHABLE;
L31:;
si0=1197496U;
si1=29U;
si2=1197528U;
f604(i,si0,si1,si2);
UNREACHABLE;
L30:;
si0=l6;
si1=l3;
si2=1197428U;
f594(i,si0,si1,si2);
UNREACHABLE;
L29:;
si0=l9;
si1=32U;
si0+=si1;
i->g0=si0;
si0=l4;
L0:;
return si0;
}

U32 f1017(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4,U32 l5,U32 l6,U32 l7,U32 l8) {
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
U32 l19=0;
U64 l20=0;
U32 l21=0;
U32 l22=0;
U64 l23=0;
U32 si0,si1,si2,si3,si4,si5;
U64 sj0,sj1,sj2,sj3,sj4;
si0=i->g0;
si1=48U;
si0-=si1;
l9=si0;
i->g0=si0;
si0=l9;
si1=l6;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l5;
si1=l6;
si0=si0 < si1;
if(si0){
goto L13;
}
si0=l5;
si1=l6;
si0-=si1;
l10=si0;
si1=l6;
si0=si0 < si1;
if(si0){
goto L12;
}
si0=l10;
si1=l6;
si0-=si1;
l10=si0;
si1=l6;
si0=si0 < si1;
if(si0){
goto L11;
}
si0=l10;
si1=l6;
si0-=si1;
l11=si0;
si1=l6;
si0=si0 > si1;
if(si0){
goto L10;
}
si0=l9;
si1=l1;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l9;
si1=l6;
si2=1U;
si1+=si2;
l10=si1;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l10;
si1=l1;
si0=si0 != si1;
if(si0){
goto L9;
}
si0=l8;
si0=!(si0);
if(si0){
goto L8;
}
si0=l9;
si1=l8;
si2=-1U;
si1+=si2;
l12=si1;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l12;
si1=l6;
si0=si0 != si1;
if(si0){
goto L6;
}
si0=l4;
si1=l6;
si2=3U;
si1<<=(si2&31);
l13=si1;
si0+=si1;
l10=si0;
si1=l13;
si0+=si1;
l14=si0;
si0=l6;
si0=!(si0);
if(si0){
goto L5;
}
si0=l6;
si1=1U;
si0&=si1;
l15=si0;
si0=l6;
si1=1U;
si0=si0 != si1;
if(si0){
goto L15;
}
si0=0U;
l16=si0;
sj0=0ULL;
l17=sj0;
goto L14;
L15:;
si0=l6;
si1=-2U;
si0&=si1;
l18=si0;
si0=0U;
l16=si0;
sj0=0ULL;
l17=sj0;
si0=l14;
l13=si0;
si0=l7;
l19=si0;
L16:;
{
si0=l19;
si1=l13;
sj1=i64_load(&i->m0,(U64)si1);
l20=sj1;
sj2=2ULL;
sj1<<=(sj2&63);
sj2=l17;
sj1|=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l19;
si1=8U;
si0+=si1;
si1=l13;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
l17=sj1;
sj2=2ULL;
sj1<<=(sj2&63);
sj2=l20;
sj3=62ULL;
sj2>>=(sj3&63);
sj1|=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l13;
si1=16U;
si0+=si1;
l13=si0;
si0=l19;
si1=16U;
si0+=si1;
l19=si0;
sj0=l17;
sj1=62ULL;
sj0>>=(sj1&63);
l17=sj0;
si0=l18;
si1=l16;
si2=2U;
si1+=si2;
l16=si1;
si0=si0 != si1;
if(si0){
goto L16;
}
}
L14:;
si0=l15;
si0=!(si0);
if(si0){
goto L17;
}
si0=l7;
si1=l16;
si2=3U;
si1<<=(si2&31);
l13=si1;
si0+=si1;
si1=l14;
si2=l13;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
l20=sj1;
sj2=2ULL;
sj1<<=(sj2&63);
sj2=l17;
sj1|=sj2;
i64_store(&i->m0,(U64)si0,sj1);
sj0=l20;
sj1=62ULL;
sj0>>=(sj1&63);
l17=sj0;
L17:;
si0=l6;
si1=l1;
si0=si0 >= si1;
if(si0){
goto L3;
}
si0=l0;
si1=l6;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l21=si0;
sj1=l17;
i64_store(&i->m0,(U64)si0,sj1);
si0=l6;
si0=!(si0);
if(si0){
goto L4;
}
si0=0U;
l18=si0;
si0=l6;
l15=si0;
si0=l7;
l13=si0;
si0=l4;
l19=si0;
si0=l0;
l16=si0;
L18:;
{
si0=l13;
sj0=i64_load(&i->m0,(U64)si0);
l20=sj0;
si1=l19;
sj1=i64_load(&i->m0,(U64)si1);
sj0+=sj1;
l17=sj0;
sj1=l20;
si0=sj0 < sj1;
l22=si0;
si0=l18;
si1=255U;
si0&=si1;
if(si0){
goto L20;
}
si0=l22;
l18=si0;
goto L19;
L20:;
si0=l22;
sj1=l17;
sj2=1ULL;
sj1+=sj2;
l17=sj1;
si1=!(sj1);
si0|=si1;
l18=si0;
L19:;
si0=l16;
sj1=l17;
i64_store(&i->m0,(U64)si0,sj1);
si0=l13;
si1=8U;
si0+=si1;
l13=si0;
si0=l19;
si1=8U;
si0+=si1;
l19=si0;
si0=l16;
si1=8U;
si0+=si1;
l16=si0;
si0=l15;
si1=-1U;
si0+=si1;
l15=si0;
if(si0){
goto L18;
}
}
si0=l18;
if(si0){
goto L7;
}
goto L4;
L13:;
si0=1197048U;
si1=35U;
si2=1197628U;
f604(i,si0,si1,si2);
UNREACHABLE;
L12:;
si0=1197048U;
si1=35U;
si2=1197628U;
f604(i,si0,si1,si2);
UNREACHABLE;
L11:;
si0=1197048U;
si1=35U;
si2=1197628U;
f604(i,si0,si1,si2);
UNREACHABLE;
L10:;
si0=1197824U;
si1=29U;
si2=1197856U;
f604(i,si0,si1,si2);
UNREACHABLE;
L9:;
si0=l9;
si1=0U;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=0U;
si1=l9;
si2=16U;
si1+=si2;
si2=l9;
si3=20U;
si2+=si3;
si3=l9;
si4=24U;
si3+=si4;
si4=1197808U;
f1250(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L8:;
si0=1197083U;
si1=43U;
si2=1197644U;
f604(i,si0,si1,si2);
UNREACHABLE;
L7:;
si0=l21;
si1=l21;
sj1=i64_load(&i->m0,(U64)si1);
sj2=1ULL;
sj1+=sj2;
i64_store(&i->m0,(U64)si0,sj1);
goto L4;
L6:;
si0=l9;
si1=0U;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=0U;
si1=l9;
si2=20U;
si1+=si2;
si2=l9;
si3=12U;
si2+=si3;
si3=l9;
si4=24U;
si3+=si4;
si4=1197792U;
f1250(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L5:;
si0=l6;
si1=l1;
si0=si0 >= si1;
if(si0){
goto L3;
}
si0=l0;
si1=l6;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l21=si0;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
L4:;
si0=l7;
si1=l12;
si2=3U;
si1<<=(si2&31);
si0+=si1;
si1=0U;
si2=l8;
si0=si2?si0:si1;
l15=si0;
si0=l11;
si1=l4;
si2=l5;
si3=3U;
si2<<=(si3&31);
si1+=si2;
si2=l14;
si3=l6;
si4=3U;
si3<<=(si4&31);
si2+=si3;
l22=si2;
si1-=si2;
si2=3U;
si1>>=(si2&31);
l13=si1;
si2=l11;
si3=l13;
si2=si2 < si3;
si0=si2?si0:si1;
l13=si0;
si0=l11;
si1=l6;
si0=si0 < si1;
if(si0){
goto L21;
}
si0=l13;
if(si0){
goto L23;
}
sj0=0ULL;
l17=sj0;
goto L22;
L23:;
si0=l13;
si1=1U;
si0&=si1;
l11=si0;
si0=l13;
si1=1U;
si0=si0 != si1;
if(si0){
goto L25;
}
si0=0U;
l16=si0;
sj0=0ULL;
l17=sj0;
goto L24;
L25:;
si0=l13;
si1=536870910U;
si0&=si1;
l18=si0;
si0=0U;
l16=si0;
sj0=0ULL;
l17=sj0;
si0=l22;
l13=si0;
si0=l7;
l19=si0;
L26:;
{
si0=l19;
si1=l13;
sj1=i64_load(&i->m0,(U64)si1);
l20=sj1;
sj2=2ULL;
sj1<<=(sj2&63);
sj2=l17;
sj1|=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l19;
si1=8U;
si0+=si1;
si1=l13;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
l17=sj1;
sj2=2ULL;
sj1<<=(sj2&63);
sj2=l20;
sj3=62ULL;
sj2>>=(sj3&63);
sj1|=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l13;
si1=16U;
si0+=si1;
l13=si0;
si0=l19;
si1=16U;
si0+=si1;
l19=si0;
sj0=l17;
sj1=62ULL;
sj0>>=(sj1&63);
l17=sj0;
si0=l18;
si1=l16;
si2=2U;
si1+=si2;
l16=si1;
si0=si0 != si1;
if(si0){
goto L26;
}
}
L24:;
si0=l11;
si0=!(si0);
if(si0){
goto L22;
}
si0=l7;
si1=l16;
si2=3U;
si1<<=(si2&31);
l13=si1;
si0+=si1;
si1=l22;
si2=l13;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
l20=sj1;
sj2=2ULL;
sj1<<=(sj2&63);
sj2=l17;
sj1|=sj2;
i64_store(&i->m0,(U64)si0,sj1);
sj0=l20;
sj1=62ULL;
sj0>>=(sj1&63);
l17=sj0;
L22:;
si0=l15;
sj1=l17;
i64_store(&i->m0,(U64)si0,sj1);
si0=l6;
si0=!(si0);
if(si0){
goto L1;
}
si0=0U;
l19=si0;
si0=l6;
l16=si0;
si0=l7;
l13=si0;
L27:;
{
si0=l13;
sj0=i64_load(&i->m0,(U64)si0);
l20=sj0;
si1=l10;
sj1=i64_load(&i->m0,(U64)si1);
sj0+=sj1;
l17=sj0;
sj1=l20;
si0=sj0 < sj1;
l18=si0;
si0=l19;
si1=255U;
si0&=si1;
if(si0){
goto L29;
}
si0=l18;
l19=si0;
goto L28;
L29:;
si0=l18;
sj1=l17;
sj2=1ULL;
sj1+=sj2;
l17=sj1;
si1=!(sj1);
si0|=si1;
l19=si0;
L28:;
si0=l13;
sj1=l17;
i64_store(&i->m0,(U64)si0,sj1);
si0=l13;
si1=8U;
si0+=si1;
l13=si0;
si0=l10;
si1=8U;
si0+=si1;
l10=si0;
si0=l16;
si1=-1U;
si0+=si1;
l16=si0;
if(si0){
goto L27;
}
}
si0=l19;
si0=!(si0);
if(si0){
goto L1;
}
si0=l15;
sj0=i64_load(&i->m0,(U64)si0);
sj1=1ULL;
sj0+=sj1;
l17=sj0;
goto L2;
L21:;
si0=l7;
si1=l11;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l4=si0;
si0=l13;
if(si0){
goto L31;
}
sj0=0ULL;
l17=sj0;
goto L30;
L31:;
si0=l13;
si1=1U;
si0&=si1;
l12=si0;
si0=l13;
si1=1U;
si0=si0 != si1;
if(si0){
goto L33;
}
si0=0U;
l16=si0;
sj0=0ULL;
l17=sj0;
goto L32;
L33:;
si0=l13;
si1=536870910U;
si0&=si1;
l18=si0;
si0=0U;
l16=si0;
sj0=0ULL;
l17=sj0;
si0=l22;
l13=si0;
si0=l7;
l19=si0;
L34:;
{
si0=l19;
si1=l13;
sj1=i64_load(&i->m0,(U64)si1);
l20=sj1;
sj2=2ULL;
sj1<<=(sj2&63);
sj2=l17;
sj1|=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l19;
si1=8U;
si0+=si1;
si1=l13;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
l17=sj1;
sj2=2ULL;
sj1<<=(sj2&63);
sj2=l20;
sj3=62ULL;
sj2>>=(sj3&63);
sj1|=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l13;
si1=16U;
si0+=si1;
l13=si0;
si0=l19;
si1=16U;
si0+=si1;
l19=si0;
sj0=l17;
sj1=62ULL;
sj0>>=(sj1&63);
l17=sj0;
si0=l18;
si1=l16;
si2=2U;
si1+=si2;
l16=si1;
si0=si0 != si1;
if(si0){
goto L34;
}
}
L32:;
si0=l12;
si0=!(si0);
if(si0){
goto L30;
}
si0=l7;
si1=l16;
si2=3U;
si1<<=(si2&31);
l13=si1;
si0+=si1;
si1=l22;
si2=l13;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
l20=sj1;
sj2=2ULL;
sj1<<=(sj2&63);
sj2=l17;
sj1|=sj2;
i64_store(&i->m0,(U64)si0,sj1);
sj0=l20;
sj1=62ULL;
sj0>>=(sj1&63);
l17=sj0;
L30:;
si0=l4;
sj1=l17;
i64_store(&i->m0,(U64)si0,sj1);
si0=l7;
si1=l11;
si2=1U;
si1+=si2;
l22=si1;
si2=3U;
si1<<=(si2&31);
l13=si1;
si0+=si1;
si1=l10;
si2=l13;
si1+=si2;
si2=l6;
si3=l22;
si2-=si3;
si3=3U;
si2<<=(si3&31);
si0=f15143(i,si0,si1,si2);
l11=si0;
si0=0U;
l19=si0;
si0=l7;
l13=si0;
si0=l22;
l16=si0;
L35:;
{
si0=l13;
sj0=i64_load(&i->m0,(U64)si0);
l20=sj0;
si1=l10;
sj1=i64_load(&i->m0,(U64)si1);
sj0+=sj1;
l17=sj0;
sj1=l20;
si0=sj0 < sj1;
l18=si0;
si0=l19;
si1=255U;
si0&=si1;
if(si0){
goto L37;
}
si0=l18;
l19=si0;
goto L36;
L37:;
si0=l18;
sj1=l17;
sj2=1ULL;
sj1+=sj2;
l17=sj1;
si1=!(sj1);
si0|=si1;
l19=si0;
L36:;
si0=l13;
sj1=l17;
i64_store(&i->m0,(U64)si0,sj1);
si0=l13;
si1=8U;
si0+=si1;
l13=si0;
si0=l10;
si1=8U;
si0+=si1;
l10=si0;
si0=l16;
si1=-1U;
si0+=si1;
l16=si0;
if(si0){
goto L35;
}
}
si0=l6;
si1=l22;
si0=si0 == si1;
l10=si0;
si1=l19;
si0&=si1;
l16=si0;
si0=l10;
if(si0){
goto L38;
}
si0=l19;
si1=1U;
si0^=si1;
if(si0){
goto L38;
}
si0=l11;
si1=l11;
sj1=i64_load(&i->m0,(U64)si1);
sj2=1ULL;
sj1+=sj2;
l17=sj1;
i64_store(&i->m0,(U64)si0,sj1);
si0=0U;
l16=si0;
sj0=l17;
sj1=0ULL;
si0=sj0 != sj1;
if(si0){
goto L38;
}
si0=l6;
si1=5U;
si0<<=(si1&31);
si1=l5;
si2=3U;
si1<<=(si2&31);
l13=si1;
si0-=si1;
si1=-16U;
si0+=si1;
l10=si0;
si0=l13;
si1=l6;
si2=24U;
si1*=si2;
si0-=si1;
si1=l7;
si0+=si1;
si1=16U;
si0+=si1;
l13=si0;
L39:;
{
si0=l10;
si0=!(si0);
l16=si0;
si0=l10;
si0=!(si0);
if(si0){
goto L38;
}
si0=l13;
si1=l13;
sj1=i64_load(&i->m0,(U64)si1);
sj2=1ULL;
sj1+=sj2;
l17=sj1;
i64_store(&i->m0,(U64)si0,sj1);
si0=l10;
si1=-8U;
si0+=si1;
l10=si0;
si0=l13;
si1=8U;
si0+=si1;
l13=si0;
sj0=l17;
si0=!(sj0);
if(si0){
goto L39;
}
}
L38:;
si0=l16;
sj0=(U64)(si0);
l17=sj0;
goto L2;
L3:;
si0=l6;
si1=l1;
si2=1197660U;
f594(i,si0,si1,si2);
UNREACHABLE;
L2:;
si0=l15;
sj1=l17;
i64_store(&i->m0,(U64)si0,sj1);
L1:;
si0=l8;
si1=-1U;
si0+=si1;
si1=536870911U;
si0&=si1;
l19=si0;
si1=1U;
si0+=si1;
l16=si0;
si1=3U;
si0&=si1;
l13=si0;
sj0=0ULL;
l17=sj0;
si0=l7;
l10=si0;
si0=l19;
si1=3U;
si0=si0 < si1;
if(si0){
goto L40;
}
si0=l16;
si1=1073741820U;
si0&=si1;
l19=si0;
sj0=0ULL;
l17=sj0;
si0=l7;
l10=si0;
L41:;
{
si0=l10;
si1=l10;
sj1=i64_load(&i->m0,(U64)si1);
l20=sj1;
sj2=1ULL;
sj1<<=(sj2&63);
sj2=l17;
sj1|=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l10;
si1=8U;
si0+=si1;
l16=si0;
si1=l16;
sj1=i64_load(&i->m0,(U64)si1);
l17=sj1;
sj2=1ULL;
sj1<<=(sj2&63);
sj2=l20;
sj3=63ULL;
sj2>>=(sj3&63);
sj1|=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l10;
si1=16U;
si0+=si1;
l16=si0;
si1=l16;
sj1=i64_load(&i->m0,(U64)si1);
l20=sj1;
sj2=1ULL;
sj1<<=(sj2&63);
sj2=l17;
sj3=63ULL;
sj2>>=(sj3&63);
sj1|=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l10;
si1=24U;
si0+=si1;
l16=si0;
si1=l16;
sj1=i64_load(&i->m0,(U64)si1);
l17=sj1;
sj2=1ULL;
sj1<<=(sj2&63);
sj2=l20;
sj3=63ULL;
sj2>>=(sj3&63);
sj1|=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l10;
si1=32U;
si0+=si1;
l10=si0;
sj0=l17;
sj1=63ULL;
sj0>>=(sj1&63);
l17=sj0;
si0=l19;
si1=-4U;
si0+=si1;
l19=si0;
if(si0){
goto L41;
}
}
L40:;
si0=l13;
si0=!(si0);
if(si0){
goto L42;
}
L43:;
{
si0=l10;
si1=l10;
sj1=i64_load(&i->m0,(U64)si1);
l20=sj1;
sj2=1ULL;
sj1<<=(sj2&63);
sj2=l17;
sj1|=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l10;
si1=8U;
si0+=si1;
l10=si0;
sj0=l20;
sj1=63ULL;
sj0>>=(sj1&63);
l17=sj0;
si0=l13;
si1=-1U;
si0+=si1;
l13=si0;
if(si0){
goto L43;
}
}
L42:;
si0=l9;
si1=l1;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l9;
si1=l8;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l1;
si1=l8;
si0=si0 != si1;
if(si0){
goto L47;
}
si0=l0;
si1=-8U;
si0+=si1;
l16=si0;
si0=l7;
si1=-8U;
si0+=si1;
l18=si0;
si0=l1;
si1=3U;
si0<<=(si1&31);
l10=si0;
L50:;
{
si0=l10;
si0=!(si0);
if(si0){
goto L49;
}
si0=l16;
si1=l10;
si0+=si1;
l13=si0;
si0=l18;
si1=l10;
si0+=si1;
l19=si0;
si0=l10;
si1=-8U;
si0+=si1;
l10=si0;
si0=l19;
sj0=i64_load(&i->m0,(U64)si0);
l17=sj0;
si1=l13;
sj1=i64_load(&i->m0,(U64)si1);
l20=sj1;
si0=sj0 == sj1;
if(si0){
goto L50;
}
}
sj0=l17;
sj1=l20;
si0=sj0 <= sj1;
if(si0){
goto L48;
}
goto L45;
L49:;
si0=l10;
if(si0){
goto L45;
}
L48:;
si0=l1;
si1=l3;
si0=si0 > si1;
if(si0){
goto L46;
}
si0=l1;
si1=1U;
si0&=si1;
l8=si0;
si0=0U;
l22=si0;
sj0=0ULL;
l17=sj0;
si0=0U;
l18=si0;
si0=l1;
si1=1U;
si0=si0 == si1;
if(si0){
goto L51;
}
si0=l1;
si1=-2U;
si0&=si1;
l15=si0;
si0=0U;
l16=si0;
si0=l0;
l10=si0;
si0=l7;
l13=si0;
si0=l2;
l19=si0;
si0=0U;
l18=si0;
L52:;
{
si0=l19;
si1=l10;
sj1=i64_load(&i->m0,(U64)si1);
l17=sj1;
si2=l16;
sj2=(U64)(si2);
sj3=1ULL;
sj2&=sj3;
sj1-=sj2;
si2=l13;
sj2=i64_load(&i->m0,(U64)si2);
l20=sj2;
sj1-=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l19;
si1=8U;
si0+=si1;
si1=l10;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
l23=sj1;
sj2=l17;
sj3=l20;
si2=sj2 <= sj3;
sj3=l17;
sj4=l20;
si3=sj3 < sj4;
si4=l16;
si5=1U;
si4&=si5;
si2=si4?si2:si3;
l16=si2;
sj2=(U64)(si2);
sj1-=sj2;
si2=l13;
si3=8U;
si2+=si3;
sj2=i64_load(&i->m0,(U64)si2);
l17=sj2;
sj1-=sj2;
i64_store(&i->m0,(U64)si0,sj1);
sj0=l23;
sj1=l17;
si0=sj0 <= sj1;
sj1=l23;
sj2=l17;
si1=sj1 < sj2;
si2=l16;
si0=si2?si0:si1;
l16=si0;
si0=l10;
si1=16U;
si0+=si1;
l10=si0;
si0=l13;
si1=16U;
si0+=si1;
l13=si0;
si0=l19;
si1=16U;
si0+=si1;
l19=si0;
si0=l15;
si1=l18;
si2=2U;
si1+=si2;
l18=si1;
si0=si0 != si1;
if(si0){
goto L52;
}
}
sj0=0ULL;
si1=l16;
sj1=(U64)(si1);
sj0-=sj1;
l17=sj0;
L51:;
si0=l8;
si0=!(si0);
if(si0){
goto L44;
}
si0=l2;
si1=l18;
si2=3U;
si1<<=(si2&31);
l10=si1;
si0+=si1;
si1=l0;
si2=l10;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
sj2=l17;
sj1+=sj2;
si2=l7;
si3=l10;
si2+=si3;
sj2=i64_load(&i->m0,(U64)si2);
sj1-=sj2;
i64_store(&i->m0,(U64)si0,sj1);
goto L44;
L47:;
si0=l9;
si1=0U;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=0U;
si1=l9;
si2=16U;
si1+=si2;
si2=l9;
si3=20U;
si2+=si3;
si3=l9;
si4=24U;
si3+=si4;
si4=1231576U;
f1250(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L46:;
si0=1202809U;
si1=34U;
si2=1203412U;
f604(i,si0,si1,si2);
UNREACHABLE;
L45:;
si0=l1;
si1=l3;
si0=si0 > si1;
if(si0){
goto L55;
}
si0=1U;
l22=si0;
si0=l1;
si1=1U;
si0&=si1;
l8=si0;
si0=l1;
si1=1U;
si0=si0 != si1;
if(si0){
goto L54;
}
si0=0U;
l18=si0;
sj0=0ULL;
l17=sj0;
goto L53;
L55:;
si0=1202809U;
si1=34U;
si2=1203412U;
f604(i,si0,si1,si2);
UNREACHABLE;
L54:;
si0=l1;
si1=-2U;
si0&=si1;
l15=si0;
si0=0U;
l16=si0;
si0=l7;
l10=si0;
si0=l0;
l13=si0;
si0=l2;
l19=si0;
si0=0U;
l18=si0;
L56:;
{
si0=l19;
si1=l10;
sj1=i64_load(&i->m0,(U64)si1);
l17=sj1;
si2=l16;
sj2=(U64)(si2);
sj3=1ULL;
sj2&=sj3;
sj1-=sj2;
si2=l13;
sj2=i64_load(&i->m0,(U64)si2);
l20=sj2;
sj1-=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l19;
si1=8U;
si0+=si1;
si1=l10;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
l23=sj1;
sj2=l17;
sj3=l20;
si2=sj2 <= sj3;
sj3=l17;
sj4=l20;
si3=sj3 < sj4;
si4=l16;
si5=1U;
si4&=si5;
si2=si4?si2:si3;
l16=si2;
sj2=(U64)(si2);
sj1-=sj2;
si2=l13;
si3=8U;
si2+=si3;
sj2=i64_load(&i->m0,(U64)si2);
l17=sj2;
sj1-=sj2;
i64_store(&i->m0,(U64)si0,sj1);
sj0=l23;
sj1=l17;
si0=sj0 <= sj1;
sj1=l23;
sj2=l17;
si1=sj1 < sj2;
si2=l16;
si0=si2?si0:si1;
l16=si0;
si0=l10;
si1=16U;
si0+=si1;
l10=si0;
si0=l13;
si1=16U;
si0+=si1;
l13=si0;
si0=l19;
si1=16U;
si0+=si1;
l19=si0;
si0=l15;
si1=l18;
si2=2U;
si1+=si2;
l18=si1;
si0=si0 != si1;
if(si0){
goto L56;
}
}
sj0=0ULL;
si1=l16;
sj1=(U64)(si1);
sj0-=sj1;
l17=sj0;
L53:;
si0=l8;
si0=!(si0);
if(si0){
goto L44;
}
si0=l2;
si1=l18;
si2=3U;
si1<<=(si2&31);
l10=si1;
si0+=si1;
si1=l7;
si2=l10;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
sj2=l17;
sj1+=sj2;
si2=l0;
si3=l10;
si2+=si3;
sj2=i64_load(&i->m0,(U64)si2);
sj1-=sj2;
i64_store(&i->m0,(U64)si0,sj1);
L44:;
si0=0U;
l10=si0;
L57:;
{
si0=l0;
sj0=i64_load(&i->m0,(U64)si0);
l20=sj0;
si1=l7;
sj1=i64_load(&i->m0,(U64)si1);
sj0+=sj1;
l17=sj0;
sj1=l20;
si0=sj0 < sj1;
l13=si0;
si0=l10;
si1=255U;
si0&=si1;
if(si0){
goto L59;
}
si0=l13;
l10=si0;
goto L58;
L59:;
si0=l13;
sj1=l17;
sj2=1ULL;
sj1+=sj2;
l17=sj1;
si1=!(sj1);
si0|=si1;
l10=si0;
L58:;
si0=l0;
sj1=l17;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=8U;
si0+=si1;
l0=si0;
si0=l7;
si1=8U;
si0+=si1;
l7=si0;
si0=l1;
si1=-1U;
si0+=si1;
l1=si0;
if(si0){
goto L57;
}
}
si0=l21;
sj0=i64_load(&i->m0,(U64)si0);
sj1=14ULL;
si0=sj0 > sj1;
if(si0){
goto L62;
}
si0=l6;
si1=l3;
si0=si0 >= si1;
if(si0){
goto L61;
}
si0=l2;
si1=l6;
si2=3U;
si1<<=(si2&31);
si0+=si1;
sj0=i64_load(&i->m0,(U64)si0);
sj1=9ULL;
si0=sj0 <= sj1;
if(si0){
goto L60;
}
si0=1197692U;
si1=33U;
si2=1197728U;
f604(i,si0,si1,si2);
UNREACHABLE;
L62:;
si0=1197744U;
si1=29U;
si2=1197776U;
f604(i,si0,si1,si2);
UNREACHABLE;
L61:;
si0=l6;
si1=l3;
si2=1197676U;
f594(i,si0,si1,si2);
UNREACHABLE;
L60:;
si0=l9;
si1=48U;
si0+=si1;
i->g0=si0;
si0=l22;
L0:;
return si0;
}

U32 f1018(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4,U32 l5,U32 l6,U32 l7,U32 l8,U32 l9) {
U32 l10=0;
U32 l11=0;
U32 l12=0;
U32 l13=0;
U32 l14=0;
U64 l15=0;
U64 l16=0;
U32 l17=0;
U32 l18=0;
U32 l19=0;
U32 l20=0;
U32 l21=0;
U32 l22=0;
U32 l23=0;
U64 l24=0;
U32 si0,si1,si2,si3,si4,si5;
U64 sj0,sj1,sj2,sj3,sj4;
si0=i->g0;
si1=48U;
si0-=si1;
l10=si0;
i->g0=si0;
si0=l4;
si1=4U;
si0=si0 < si1;
if(si0){
goto L4;
}
si0=l10;
si1=l1;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l10;
si1=l7;
si2=1U;
si1+=si2;
l11=si1;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l11;
si1=l1;
si0=si0 != si1;
if(si0){
goto L5;
}
si0=l10;
si1=l9;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l10;
si1=l1;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l1;
si1=l9;
si0=si0 != si1;
if(si0){
goto L7;
}
si0=l7;
si0=!(si0);
if(si0){
goto L6;
}
si0=l10;
si1=l7;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l10;
si1=l6;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l10;
si1=l5;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l10;
si1=4U;
si0+=si1;
si1=l10;
si2=24U;
si1+=si2;
f1225(i,si0,si1);
si0=l10;
si1=l10;
si1=i32_load(&i->m0,(U64)si1+12U);
l12=si1;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l10;
si1=l4;
si2=1U;
si1+=si2;
l9=si1;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l12;
si1=l9;
si0=si0 != si1;
if(si0){
goto L8;
}
si0=l12;
si0=!(si0);
if(si0){
goto L9;
}
si0=l10;
si0=i32_load(&i->m0,(U64)si0+4U);
l13=si0;
si1=20U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si0=l13;
si0=i32_load(&i->m0,(U64)si0+16U);
l9=si0;
si0=l13;
si0=i32_load(&i->m0,(U64)si0);
l11=si0;
si0=l10;
si1=l13;
si1=i32_load(&i->m0,(U64)si1+4U);
l5=si1;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l10;
si1=l6;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l5;
si1=l6;
si0=si0 != si1;
if(si0){
goto L1;
}
si0=l5;
si1=l1;
si0=si0 > si1;
if(si0){
goto L2;
}
si0=0U;
l14=si0;
si0=l5;
si0=!(si0);
if(si0){
goto L10;
}
si0=l0;
l6=si0;
L11:;
{
si0=l11;
sj0=i64_load(&i->m0,(U64)si0);
l15=sj0;
si1=l9;
sj1=i64_load(&i->m0,(U64)si1);
sj0+=sj1;
l16=sj0;
sj1=l15;
si0=sj0 < sj1;
l17=si0;
si0=l14;
si1=255U;
si0&=si1;
if(si0){
goto L13;
}
si0=l17;
l14=si0;
goto L12;
L13:;
si0=l17;
sj1=l16;
sj2=1ULL;
sj1+=sj2;
l16=sj1;
si1=!(sj1);
si0|=si1;
l14=si0;
L12:;
si0=l6;
sj1=l16;
i64_store(&i->m0,(U64)si0,sj1);
si0=l11;
si1=8U;
si0+=si1;
l11=si0;
si0=l9;
si1=8U;
si0+=si1;
l9=si0;
si0=l6;
si1=8U;
si0+=si1;
l6=si0;
si0=l5;
si1=-1U;
si0+=si1;
l5=si0;
if(si0){
goto L11;
}
}
L10:;
si0=l7;
si1=l1;
si0=si0 >= si1;
if(si0){
goto L14;
}
si0=l0;
si1=l7;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l18=si0;
si1=l14;
sj1=(U64)(si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=5U;
si0=si0 < si1;
if(si0){
goto L3;
}
si0=l0;
si1=8U;
si0+=si1;
l19=si0;
si0=l1;
si1=3U;
si0<<=(si1&31);
si1=-8U;
si0+=si1;
l20=si0;
si0=4U;
l17=si0;
L15:;
{
si0=l17;
si1=l12;
si0=si0 < si1;
if(si0){
goto L16;
}
si0=l17;
si1=l12;
si2=1198356U;
f594(i,si0,si1,si2);
UNREACHABLE;
L16:;
si0=l13;
si1=l17;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l9=si0;
si0=i32_load(&i->m0,(U64)si0+4U);
l21=si0;
si1=l1;
si0=si0 > si1;
if(si0){
goto L18;
}
si0=l21;
si0=!(si0);
if(si0){
goto L17;
}
si0=l9;
si0=i32_load(&i->m0,(U64)si0);
l11=si0;
si0=l0;
si1=l21;
si2=3U;
si1<<=(si2&31);
l22=si1;
si0+=si1;
l23=si0;
si0=0U;
l6=si0;
si0=l21;
l5=si0;
si0=l0;
l9=si0;
L19:;
{
si0=l9;
sj0=i64_load(&i->m0,(U64)si0);
l15=sj0;
si1=l11;
sj1=i64_load(&i->m0,(U64)si1);
sj0+=sj1;
l16=sj0;
sj1=l15;
si0=sj0 < sj1;
l14=si0;
si0=l6;
si1=255U;
si0&=si1;
if(si0){
goto L21;
}
si0=l14;
l6=si0;
goto L20;
L21:;
si0=l14;
sj1=l16;
sj2=1ULL;
sj1+=sj2;
l16=sj1;
si1=!(sj1);
si0|=si1;
l6=si0;
L20:;
si0=l9;
sj1=l16;
i64_store(&i->m0,(U64)si0,sj1);
si0=l9;
si1=8U;
si0+=si1;
l9=si0;
si0=l11;
si1=8U;
si0+=si1;
l11=si0;
si0=l5;
si1=-1U;
si0+=si1;
l5=si0;
if(si0){
goto L19;
}
}
si0=l21;
si1=l1;
si0=si0 == si1;
l9=si0;
if(si0){
goto L23;
}
si0=l6;
si1=1U;
si0^=si1;
if(si0){
goto L23;
}
si0=l23;
si1=l23;
sj1=i64_load(&i->m0,(U64)si1);
sj2=1ULL;
sj1+=sj2;
l16=sj1;
i64_store(&i->m0,(U64)si0,sj1);
sj0=l16;
sj1=0ULL;
si0=sj0 != sj1;
if(si0){
goto L17;
}
si0=l20;
si1=l22;
si0-=si1;
l11=si0;
si0=l19;
si1=l22;
si0+=si1;
l9=si0;
L24:;
{
si0=l11;
si0=!(si0);
if(si0){
goto L22;
}
si0=l9;
si1=l9;
sj1=i64_load(&i->m0,(U64)si1);
sj2=1ULL;
sj1+=sj2;
l16=sj1;
i64_store(&i->m0,(U64)si0,sj1);
si0=l11;
si1=-8U;
si0+=si1;
l11=si0;
si0=l9;
si1=8U;
si0+=si1;
l9=si0;
sj0=l16;
si0=!(sj0);
if(si0){
goto L24;
}
goto L17;
}
L23:;
si0=l9;
si1=l6;
si0&=si1;
si0=!(si0);
if(si0){
goto L17;
}
L22:;
si0=1198372U;
si1=78U;
si2=1198452U;
f604(i,si0,si1,si2);
UNREACHABLE;
L18:;
si0=1201588U;
si1=35U;
si2=1203200U;
f604(i,si0,si1,si2);
UNREACHABLE;
L17:;
si0=l17;
si1=2U;
si0+=si1;
l17=si0;
si1=l4;
si0=si0 < si1;
if(si0){
goto L15;
}
goto L3;
}
L14:;
si0=l7;
si1=l1;
si2=1197904U;
f594(i,si0,si1,si2);
UNREACHABLE;
L9:;
si0=0U;
si1=0U;
si2=1197888U;
f594(i,si0,si1,si2);
UNREACHABLE;
L8:;
si0=l10;
si1=0U;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=0U;
si1=l10;
si2=16U;
si1+=si2;
si2=l10;
si3=20U;
si2+=si3;
si3=l10;
si4=24U;
si3+=si4;
si4=1198468U;
f1250(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L7:;
si0=l10;
si1=0U;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=0U;
si1=l10;
si2=20U;
si1+=si2;
si2=l10;
si3=4U;
si2+=si3;
si3=l10;
si4=24U;
si3+=si4;
si4=1198484U;
f1250(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L6:;
si0=l10;
si1=36U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l10;
si1=1U;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l10;
si1=1197040U;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l10;
si1=1197012U;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l10;
si1=24U;
si0+=si1;
si1=1197872U;
f614(i,si0,si1);
UNREACHABLE;
L5:;
si0=l10;
si1=0U;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=0U;
si1=l10;
si2=20U;
si1+=si2;
si2=l10;
si3=4U;
si2+=si3;
si3=l10;
si4=24U;
si3+=si4;
si4=1198500U;
f1250(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L4:;
si0=1198516U;
si1=28U;
si2=1198544U;
f604(i,si0,si1,si2);
UNREACHABLE;
L3:;
si0=l13;
si1=28U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si0=l13;
si0=i32_load(&i->m0,(U64)si0+24U);
l9=si0;
si0=l13;
si0=i32_load(&i->m0,(U64)si0+8U);
l11=si0;
si0=l10;
si1=l13;
si2=12U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
l5=si1;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l10;
si1=l6;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l5;
si1=l6;
si0=si0 != si1;
if(si0){
goto L25;
}
si0=l5;
si1=l1;
si0=si0 > si1;
if(si0){
goto L26;
}
si0=0U;
l14=si0;
si0=l5;
si0=!(si0);
if(si0){
goto L27;
}
si0=l8;
l6=si0;
L28:;
{
si0=l11;
sj0=i64_load(&i->m0,(U64)si0);
l15=sj0;
si1=l9;
sj1=i64_load(&i->m0,(U64)si1);
sj0+=sj1;
l16=sj0;
sj1=l15;
si0=sj0 < sj1;
l17=si0;
si0=l14;
si1=255U;
si0&=si1;
if(si0){
goto L30;
}
si0=l17;
l14=si0;
goto L29;
L30:;
si0=l17;
sj1=l16;
sj2=1ULL;
sj1+=sj2;
l16=sj1;
si1=!(sj1);
si0|=si1;
l14=si0;
L29:;
si0=l6;
sj1=l16;
i64_store(&i->m0,(U64)si0,sj1);
si0=l11;
si1=8U;
si0+=si1;
l11=si0;
si0=l9;
si1=8U;
si0+=si1;
l9=si0;
si0=l6;
si1=8U;
si0+=si1;
l6=si0;
si0=l5;
si1=-1U;
si0+=si1;
l5=si0;
if(si0){
goto L28;
}
}
L27:;
si0=l8;
si1=l7;
si2=3U;
si1<<=(si2&31);
si0+=si1;
si1=l14;
sj1=(U64)(si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=6U;
si0=si0 < si1;
if(si0){
goto L31;
}
si0=l8;
si1=8U;
si0+=si1;
l19=si0;
si0=l1;
si1=3U;
si0<<=(si1&31);
si1=-8U;
si0+=si1;
l20=si0;
si0=5U;
l17=si0;
L32:;
{
si0=l17;
si1=l12;
si0=si0 < si1;
if(si0){
goto L33;
}
si0=l17;
si1=l12;
si2=1198240U;
f594(i,si0,si1,si2);
UNREACHABLE;
L33:;
si0=l13;
si1=l17;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l9=si0;
si0=i32_load(&i->m0,(U64)si0+4U);
l21=si0;
si1=l1;
si0=si0 > si1;
if(si0){
goto L35;
}
si0=l21;
si0=!(si0);
if(si0){
goto L34;
}
si0=l9;
si0=i32_load(&i->m0,(U64)si0);
l11=si0;
si0=l8;
si1=l21;
si2=3U;
si1<<=(si2&31);
l22=si1;
si0+=si1;
l23=si0;
si0=0U;
l6=si0;
si0=l21;
l5=si0;
si0=l8;
l9=si0;
L36:;
{
si0=l9;
sj0=i64_load(&i->m0,(U64)si0);
l15=sj0;
si1=l11;
sj1=i64_load(&i->m0,(U64)si1);
sj0+=sj1;
l16=sj0;
sj1=l15;
si0=sj0 < sj1;
l14=si0;
si0=l6;
si1=255U;
si0&=si1;
if(si0){
goto L38;
}
si0=l14;
l6=si0;
goto L37;
L38:;
si0=l14;
sj1=l16;
sj2=1ULL;
sj1+=sj2;
l16=sj1;
si1=!(sj1);
si0|=si1;
l6=si0;
L37:;
si0=l9;
sj1=l16;
i64_store(&i->m0,(U64)si0,sj1);
si0=l9;
si1=8U;
si0+=si1;
l9=si0;
si0=l11;
si1=8U;
si0+=si1;
l11=si0;
si0=l5;
si1=-1U;
si0+=si1;
l5=si0;
if(si0){
goto L36;
}
}
si0=l21;
si1=l1;
si0=si0 == si1;
l9=si0;
if(si0){
goto L40;
}
si0=l6;
si1=1U;
si0^=si1;
if(si0){
goto L40;
}
si0=l23;
si1=l23;
sj1=i64_load(&i->m0,(U64)si1);
sj2=1ULL;
sj1+=sj2;
l16=sj1;
i64_store(&i->m0,(U64)si0,sj1);
sj0=l16;
sj1=0ULL;
si0=sj0 != sj1;
if(si0){
goto L34;
}
si0=l20;
si1=l22;
si0-=si1;
l11=si0;
si0=l19;
si1=l22;
si0+=si1;
l9=si0;
L41:;
{
si0=l11;
si0=!(si0);
if(si0){
goto L39;
}
si0=l9;
si1=l9;
sj1=i64_load(&i->m0,(U64)si1);
sj2=1ULL;
sj1+=sj2;
l16=sj1;
i64_store(&i->m0,(U64)si0,sj1);
si0=l11;
si1=-8U;
si0+=si1;
l11=si0;
si0=l9;
si1=8U;
si0+=si1;
l9=si0;
sj0=l16;
si0=!(sj0);
if(si0){
goto L41;
}
goto L34;
}
L40:;
si0=l9;
si1=l6;
si0&=si1;
si0=!(si0);
if(si0){
goto L34;
}
L39:;
si0=1198256U;
si1=82U;
si2=1198340U;
f604(i,si0,si1,si2);
UNREACHABLE;
L35:;
si0=1201588U;
si1=35U;
si2=1203200U;
f604(i,si0,si1,si2);
UNREACHABLE;
L34:;
si0=l17;
si1=2U;
si0+=si1;
l17=si0;
si1=l4;
si0=si0 < si1;
if(si0){
goto L32;
}
}
L31:;
si0=l12;
si1=l4;
si0=si0 > si1;
if(si0){
goto L42;
}
si0=l4;
si1=l12;
si2=1197920U;
f594(i,si0,si1,si2);
UNREACHABLE;
L42:;
si0=l13;
si1=l4;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l9=si0;
si0=i32_load(&i->m0,(U64)si0+4U);
l17=si0;
si1=l1;
si0=si0 > si1;
if(si0){
goto L44;
}
si0=l17;
si0=!(si0);
if(si0){
goto L43;
}
si0=l9;
si0=i32_load(&i->m0,(U64)si0);
l11=si0;
si0=l8;
si1=l0;
si2=l4;
si3=1U;
si2&=si3;
si0=si2?si0:si1;
l21=si0;
si1=l17;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l12=si0;
si0=0U;
l6=si0;
si0=l17;
l5=si0;
si0=l21;
l9=si0;
L45:;
{
si0=l9;
sj0=i64_load(&i->m0,(U64)si0);
l15=sj0;
si1=l11;
sj1=i64_load(&i->m0,(U64)si1);
sj0+=sj1;
l16=sj0;
sj1=l15;
si0=sj0 < sj1;
l14=si0;
si0=l6;
si1=255U;
si0&=si1;
if(si0){
goto L47;
}
si0=l14;
l6=si0;
goto L46;
L47:;
si0=l14;
sj1=l16;
sj2=1ULL;
sj1+=sj2;
l16=sj1;
si1=!(sj1);
si0|=si1;
l6=si0;
L46:;
si0=l9;
sj1=l16;
i64_store(&i->m0,(U64)si0,sj1);
si0=l9;
si1=8U;
si0+=si1;
l9=si0;
si0=l11;
si1=8U;
si0+=si1;
l11=si0;
si0=l5;
si1=-1U;
si0+=si1;
l5=si0;
if(si0){
goto L45;
}
}
si0=l17;
si1=l1;
si0=si0 == si1;
l9=si0;
if(si0){
goto L49;
}
si0=l6;
si1=1U;
si0^=si1;
if(si0){
goto L49;
}
si0=l12;
si1=l12;
sj1=i64_load(&i->m0,(U64)si1);
sj2=1ULL;
sj1+=sj2;
l16=sj1;
i64_store(&i->m0,(U64)si0,sj1);
sj0=l16;
sj1=0ULL;
si0=sj0 != sj1;
if(si0){
goto L43;
}
si0=l1;
si1=3U;
si0<<=(si1&31);
si1=l17;
si2=3U;
si1<<=(si2&31);
l9=si1;
si0-=si1;
si1=-8U;
si0+=si1;
l11=si0;
si0=l9;
si1=l21;
si0+=si1;
si1=8U;
si0+=si1;
l9=si0;
L50:;
{
si0=l11;
si0=!(si0);
if(si0){
goto L48;
}
si0=l9;
si1=l9;
sj1=i64_load(&i->m0,(U64)si1);
sj2=1ULL;
sj1+=sj2;
l16=sj1;
i64_store(&i->m0,(U64)si0,sj1);
si0=l11;
si1=-8U;
si0+=si1;
l11=si0;
si0=l9;
si1=8U;
si0+=si1;
l9=si0;
sj0=l16;
si0=!(sj0);
if(si0){
goto L50;
}
goto L43;
}
L49:;
si0=l9;
si1=l6;
si0&=si1;
si0=!(si0);
if(si0){
goto L43;
}
L48:;
si0=1198072U;
si1=151U;
si2=1198224U;
f604(i,si0,si1,si2);
UNREACHABLE;
L44:;
si0=1201588U;
si1=35U;
si2=1203200U;
f604(i,si0,si1,si2);
UNREACHABLE;
L43:;
si0=l0;
si1=-8U;
si0+=si1;
l5=si0;
si0=l8;
si1=-8U;
si0+=si1;
l14=si0;
si0=l1;
si1=3U;
si0<<=(si1&31);
l9=si0;
L55:;
{
si0=l9;
si0=!(si0);
if(si0){
goto L54;
}
si0=l5;
si1=l9;
si0+=si1;
l11=si0;
si0=l14;
si1=l9;
si0+=si1;
l6=si0;
si0=l9;
si1=-8U;
si0+=si1;
l9=si0;
si0=l6;
sj0=i64_load(&i->m0,(U64)si0);
l16=sj0;
si1=l11;
sj1=i64_load(&i->m0,(U64)si1);
l15=sj1;
si0=sj0 == sj1;
if(si0){
goto L55;
}
}
sj0=l16;
sj1=l15;
si0=sj0 <= sj1;
if(si0){
goto L53;
}
goto L52;
L54:;
si0=l9;
if(si0){
goto L52;
}
L53:;
si0=l1;
si1=l3;
si0=si0 > si1;
if(si0){
goto L56;
}
si0=l1;
si1=1U;
si0&=si1;
l12=si0;
si0=0U;
l21=si0;
sj0=0ULL;
l16=sj0;
si0=0U;
l14=si0;
si0=l1;
si1=1U;
si0=si0 == si1;
if(si0){
goto L57;
}
si0=l1;
si1=-2U;
si0&=si1;
l17=si0;
si0=0U;
l5=si0;
si0=l0;
l9=si0;
si0=l8;
l11=si0;
si0=l2;
l6=si0;
si0=0U;
l14=si0;
L58:;
{
si0=l6;
si1=l9;
sj1=i64_load(&i->m0,(U64)si1);
l16=sj1;
si2=l5;
sj2=(U64)(si2);
sj3=1ULL;
sj2&=sj3;
sj1-=sj2;
si2=l11;
sj2=i64_load(&i->m0,(U64)si2);
l15=sj2;
sj1-=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l6;
si1=8U;
si0+=si1;
si1=l9;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
l24=sj1;
sj2=l16;
sj3=l15;
si2=sj2 <= sj3;
sj3=l16;
sj4=l15;
si3=sj3 < sj4;
si4=l5;
si5=1U;
si4&=si5;
si2=si4?si2:si3;
l5=si2;
sj2=(U64)(si2);
sj1-=sj2;
si2=l11;
si3=8U;
si2+=si3;
sj2=i64_load(&i->m0,(U64)si2);
l16=sj2;
sj1-=sj2;
i64_store(&i->m0,(U64)si0,sj1);
sj0=l24;
sj1=l16;
si0=sj0 <= sj1;
sj1=l24;
sj2=l16;
si1=sj1 < sj2;
si2=l5;
si0=si2?si0:si1;
l5=si0;
si0=l9;
si1=16U;
si0+=si1;
l9=si0;
si0=l11;
si1=16U;
si0+=si1;
l11=si0;
si0=l6;
si1=16U;
si0+=si1;
l6=si0;
si0=l17;
si1=l14;
si2=2U;
si1+=si2;
l14=si1;
si0=si0 != si1;
if(si0){
goto L58;
}
}
sj0=0ULL;
si1=l5;
sj1=(U64)(si1);
sj0-=sj1;
l16=sj0;
L57:;
si0=l12;
si0=!(si0);
if(si0){
goto L51;
}
si0=l2;
si1=l14;
si2=3U;
si1<<=(si2&31);
l9=si1;
si0+=si1;
si1=l0;
si2=l9;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
sj2=l16;
sj1+=sj2;
si2=l8;
si3=l9;
si2+=si3;
sj2=i64_load(&i->m0,(U64)si2);
sj1-=sj2;
i64_store(&i->m0,(U64)si0,sj1);
goto L51;
L56:;
si0=1202809U;
si1=34U;
si2=1203412U;
f604(i,si0,si1,si2);
UNREACHABLE;
L52:;
si0=l1;
si1=l3;
si0=si0 > si1;
if(si0){
goto L61;
}
si0=1U;
l21=si0;
si0=l1;
si1=1U;
si0&=si1;
l12=si0;
si0=l1;
si1=1U;
si0=si0 != si1;
if(si0){
goto L60;
}
si0=0U;
l14=si0;
sj0=0ULL;
l16=sj0;
goto L59;
L61:;
si0=1202809U;
si1=34U;
si2=1203412U;
f604(i,si0,si1,si2);
UNREACHABLE;
L60:;
si0=l1;
si1=-2U;
si0&=si1;
l17=si0;
si0=0U;
l5=si0;
si0=l8;
l9=si0;
si0=l0;
l11=si0;
si0=l2;
l6=si0;
si0=0U;
l14=si0;
L62:;
{
si0=l6;
si1=l9;
sj1=i64_load(&i->m0,(U64)si1);
l16=sj1;
si2=l5;
sj2=(U64)(si2);
sj3=1ULL;
sj2&=sj3;
sj1-=sj2;
si2=l11;
sj2=i64_load(&i->m0,(U64)si2);
l15=sj2;
sj1-=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l6;
si1=8U;
si0+=si1;
si1=l9;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
l24=sj1;
sj2=l16;
sj3=l15;
si2=sj2 <= sj3;
sj3=l16;
sj4=l15;
si3=sj3 < sj4;
si4=l5;
si5=1U;
si4&=si5;
si2=si4?si2:si3;
l5=si2;
sj2=(U64)(si2);
sj1-=sj2;
si2=l11;
si3=8U;
si2+=si3;
sj2=i64_load(&i->m0,(U64)si2);
l16=sj2;
sj1-=sj2;
i64_store(&i->m0,(U64)si0,sj1);
sj0=l24;
sj1=l16;
si0=sj0 <= sj1;
sj1=l24;
sj2=l16;
si1=sj1 < sj2;
si2=l5;
si0=si2?si0:si1;
l5=si0;
si0=l9;
si1=16U;
si0+=si1;
l9=si0;
si0=l11;
si1=16U;
si0+=si1;
l11=si0;
si0=l6;
si1=16U;
si0+=si1;
l6=si0;
si0=l17;
si1=l14;
si2=2U;
si1+=si2;
l14=si1;
si0=si0 != si1;
if(si0){
goto L62;
}
}
sj0=0ULL;
si1=l5;
sj1=(U64)(si1);
sj0-=sj1;
l16=sj0;
L59:;
si0=l12;
si0=!(si0);
if(si0){
goto L51;
}
si0=l2;
si1=l14;
si2=3U;
si1<<=(si2&31);
l9=si1;
si0+=si1;
si1=l8;
si2=l9;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
sj2=l16;
sj1+=sj2;
si2=l0;
si3=l9;
si2+=si3;
sj2=i64_load(&i->m0,(U64)si2);
sj1-=sj2;
i64_store(&i->m0,(U64)si0,sj1);
L51:;
si0=0U;
l9=si0;
L63:;
{
si0=l0;
sj0=i64_load(&i->m0,(U64)si0);
l15=sj0;
si1=l8;
sj1=i64_load(&i->m0,(U64)si1);
sj0+=sj1;
l16=sj0;
sj1=l15;
si0=sj0 < sj1;
l11=si0;
si0=l9;
si1=255U;
si0&=si1;
if(si0){
goto L65;
}
si0=l11;
l9=si0;
goto L64;
L65:;
si0=l11;
sj1=l16;
sj2=1ULL;
sj1+=sj2;
l16=sj1;
si1=!(sj1);
si0|=si1;
l9=si0;
L64:;
si0=l0;
sj1=l16;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=8U;
si0+=si1;
l0=si0;
si0=l8;
si1=8U;
si0+=si1;
l8=si0;
si0=l1;
si1=-1U;
si0+=si1;
l1=si0;
if(si0){
goto L63;
}
}
si0=l18;
sj0=i64_load(&i->m0,(U64)si0);
si1=l4;
sj1=(U64)(si1);
l16=sj1;
si0=sj0 > sj1;
if(si0){
goto L67;
}
si0=l7;
si1=l3;
si0=si0 >= si1;
if(si0){
goto L66;
}
si0=l2;
si1=l7;
si2=3U;
si1<<=(si2&31);
si0+=si1;
sj0=i64_load(&i->m0,(U64)si0);
sj1=l16;
sj2=1ULL;
sj1>>=(sj2&63);
sj2=1ULL;
sj1+=sj2;
si0=sj0 > sj1;
if(si0){
goto L68;
}
si0=l10;
si0=i32_load(&i->m0,(U64)si0+8U);
si0=!(si0);
if(si0){
goto L69;
}
si0=l13;
f15024(i,si0);
L69:;
si0=l10;
si1=48U;
si0+=si1;
i->g0=si0;
si0=l21;
goto L0;
L68:;
si0=1197952U;
si1=49U;
si2=1198004U;
f604(i,si0,si1,si2);
UNREACHABLE;
L67:;
si0=1198020U;
si1=34U;
si2=1198056U;
f604(i,si0,si1,si2);
UNREACHABLE;
L66:;
si0=l7;
si1=l3;
si2=1197936U;
f594(i,si0,si1,si2);
UNREACHABLE;
L26:;
si0=1202809U;
si1=34U;
si2=1202976U;
f604(i,si0,si1,si2);
UNREACHABLE;
L25:;
si0=l10;
si1=0U;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=0U;
si1=l10;
si2=16U;
si1+=si2;
si2=l10;
si3=20U;
si2+=si3;
si3=l10;
si4=24U;
si3+=si4;
si4=1202992U;
f1250(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L2:;
si0=1202809U;
si1=34U;
si2=1202976U;
f604(i,si0,si1,si2);
UNREACHABLE;
L1:;
si0=l10;
si1=0U;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=0U;
si1=l10;
si2=16U;
si1+=si2;
si2=l10;
si3=20U;
si2+=si3;
si3=l10;
si4=24U;
si3+=si4;
si4=1202992U;
f1250(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L0:;
return si0;
}

U32 f1019(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4,U32 l5,U32 l6,U32 l7,U32 l8,U32 l9) {
U32 l10=0;
U32 l11=0;
U32 l12=0;
U32 l13=0;
U32 l14=0;
U32 l15=0;
U32 l16=0;
U64 l17=0;
U32 l18=0;
U32 l19=0;
U32 l20=0;
U64 l21=0;
U64 l22=0;
U32 si0,si1,si2,si3,si4,si5;
U64 sj0,sj1,sj2,sj3,sj4;
si0=i->g0;
si1=64U;
si0-=si1;
l10=si0;
i->g0=si0;
si0=l4;
si1=3U;
si0=si0 < si1;
if(si0){
goto L12;
}
si0=l4;
si1=63U;
si0=si0 > si1;
if(si0){
goto L11;
}
si0=l10;
si1=l1;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l10;
si1=l7;
si2=1U;
si1+=si2;
l11=si1;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l11;
si1=l1;
si0=si0 != si1;
if(si0){
goto L10;
}
si0=l10;
si1=l9;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l10;
si1=l1;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l1;
si1=l9;
si0=si0 != si1;
if(si0){
goto L8;
}
si0=l7;
si0=!(si0);
if(si0){
goto L9;
}
si0=l10;
si1=l7;
i32_store(&i->m0,(U64)si0+48U,si1);
si0=l10;
si1=l6;
i32_store(&i->m0,(U64)si0+44U,si1);
si0=l10;
si1=l5;
i32_store(&i->m0,(U64)si0+40U,si1);
si0=l10;
si1=12U;
si0+=si1;
si1=l10;
si2=40U;
si1+=si2;
f1225(i,si0,si1);
si0=l10;
si1=l10;
si1=i32_load(&i->m0,(U64)si1+20U);
l12=si1;
i32_store(&i->m0,(U64)si0+36U,si1);
si0=l10;
si1=l4;
si2=1U;
si1+=si2;
l9=si1;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l12;
si1=l9;
si0=si0 != si1;
if(si0){
goto L7;
}
si0=l1;
si0=!(si0);
if(si0){
goto L6;
}
si0=l4;
si1=-2U;
si0+=si1;
l9=si0;
si1=l12;
si0=si0 >= si1;
if(si0){
goto L3;
}
si0=l10;
si0=i32_load(&i->m0,(U64)si0+12U);
l13=si0;
si1=l4;
si2=3U;
si1<<=(si2&31);
si0+=si1;
si0=i32_load(&i->m0,(U64)si0+4U);
l14=si0;
si1=l13;
si2=l9;
si3=3U;
si2<<=(si3&31);
si1+=si2;
l15=si1;
si1=i32_load(&i->m0,(U64)si1+4U);
l9=si1;
si0=si0 > si1;
if(si0){
goto L5;
}
si0=l14;
si1=l1;
si2=-1U;
si1+=si2;
l16=si1;
si0=si0 > si1;
if(si0){
goto L4;
}
si0=l14;
if(si0){
goto L14;
}
sj0=0ULL;
l17=sj0;
goto L13;
L14:;
si0=l13;
si1=l4;
si2=3U;
si1<<=(si2&31);
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l18=si0;
si0=l15;
si0=i32_load(&i->m0,(U64)si0);
l11=si0;
si0=l14;
si1=1U;
si0&=si1;
l19=si0;
si0=l14;
si1=1U;
si0=si0 != si1;
if(si0){
goto L16;
}
si0=0U;
l5=si0;
sj0=0ULL;
l17=sj0;
goto L15;
L16:;
si0=l14;
si1=-2U;
si0&=si1;
l20=si0;
si0=0U;
l5=si0;
sj0=0ULL;
l17=sj0;
si0=l18;
l9=si0;
si0=l0;
l6=si0;
L17:;
{
si0=l6;
si1=l9;
sj1=i64_load(&i->m0,(U64)si1);
l21=sj1;
sj2=2ULL;
sj1<<=(sj2&63);
sj2=l17;
sj1|=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l6;
si1=8U;
si0+=si1;
si1=l9;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
l22=sj1;
sj2=2ULL;
sj1<<=(sj2&63);
sj2=l21;
sj3=62ULL;
sj2>>=(sj3&63);
sj1|=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l9;
si1=16U;
si0+=si1;
l9=si0;
si0=l6;
si1=16U;
si0+=si1;
l6=si0;
sj0=l22;
sj1=62ULL;
sj0>>=(sj1&63);
l17=sj0;
si0=l20;
si1=l5;
si2=2U;
si1+=si2;
l5=si1;
si0=si0 != si1;
if(si0){
goto L17;
}
}
L15:;
si0=l19;
si0=!(si0);
if(si0){
goto L18;
}
si0=l0;
si1=l5;
si2=3U;
si1<<=(si2&31);
l9=si1;
si0+=si1;
si1=l18;
si2=l9;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
l21=sj1;
sj2=2ULL;
sj1<<=(sj2&63);
sj2=l17;
sj1|=sj2;
i64_store(&i->m0,(U64)si0,sj1);
sj0=l21;
sj1=62ULL;
sj0>>=(sj1&63);
l17=sj0;
L18:;
si0=0U;
l6=si0;
si0=l14;
l5=si0;
si0=l0;
l9=si0;
L19:;
{
si0=l9;
sj0=i64_load(&i->m0,(U64)si0);
l22=sj0;
si1=l11;
sj1=i64_load(&i->m0,(U64)si1);
sj0+=sj1;
l21=sj0;
sj1=l22;
si0=sj0 < sj1;
l20=si0;
si0=l6;
si1=255U;
si0&=si1;
if(si0){
goto L21;
}
si0=l20;
l6=si0;
goto L20;
L21:;
si0=l20;
sj1=l21;
sj2=1ULL;
sj1+=sj2;
l21=sj1;
si1=!(sj1);
si0|=si1;
l6=si0;
L20:;
si0=l9;
sj1=l21;
i64_store(&i->m0,(U64)si0,sj1);
si0=l9;
si1=8U;
si0+=si1;
l9=si0;
si0=l11;
si1=8U;
si0+=si1;
l11=si0;
si0=l5;
si1=-1U;
si0+=si1;
l5=si0;
if(si0){
goto L19;
}
}
sj0=l17;
si1=l6;
sj1=(U64)(si1);
sj0+=sj1;
l17=sj0;
L13:;
si0=l14;
si1=l7;
si0=si0 == si1;
if(si0){
goto L1;
}
si0=l15;
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l20=si0;
si1=l14;
si0=si0 < si1;
if(si0){
goto L22;
}
si0=l16;
si1=l20;
si0=si0 < si1;
if(si0){
goto L2;
}
si0=l20;
si1=l14;
si0=si0 == si1;
if(si0){
goto L23;
}
si0=l0;
si1=l14;
si2=3U;
si1<<=(si2&31);
l9=si1;
si0+=si1;
l19=si0;
si1=l15;
si1=i32_load(&i->m0,(U64)si1);
l11=si1;
si2=l9;
si1+=si2;
l15=si1;
sj1=i64_load(&i->m0,(U64)si1);
l21=sj1;
sj2=l17;
sj1+=sj2;
l22=sj1;
i64_store(&i->m0,(U64)si0,sj1);
si0=0U;
l9=si0;
sj0=l22;
sj1=l21;
si0=sj0 >= sj1;
if(si0){
goto L24;
}
si0=l14;
si1=-1U;
si0^=si1;
si1=l20;
si0+=si1;
l5=si0;
si0=l11;
si1=l14;
si2=3U;
si1<<=(si2&31);
si2=8U;
si1+=si2;
l9=si1;
si0+=si1;
l11=si0;
si0=l0;
si1=l9;
si0+=si1;
l6=si0;
si0=0U;
l9=si0;
sj0=1ULL;
l17=sj0;
L25:;
{
si0=l5;
si1=l9;
si0=si0 == si1;
if(si0){
goto L23;
}
si0=l6;
si1=l11;
sj1=i64_load(&i->m0,(U64)si1);
sj2=1ULL;
sj1+=sj2;
l21=sj1;
i64_store(&i->m0,(U64)si0,sj1);
si0=l11;
si1=8U;
si0+=si1;
l11=si0;
si0=l6;
si1=8U;
si0+=si1;
l6=si0;
si0=l9;
si1=1U;
si0+=si1;
l9=si0;
sj0=l21;
si0=!(sj0);
if(si0){
goto L25;
}
}
L24:;
si0=l19;
si1=l9;
si2=1U;
si1+=si2;
l9=si1;
si2=3U;
si1<<=(si2&31);
l11=si1;
si0+=si1;
si1=l15;
si2=l11;
si1+=si2;
si2=l20;
si3=l14;
si2-=si3;
si3=l9;
si2-=si3;
si3=3U;
si2<<=(si3&31);
si0=f15143(i,si0,si1,si2);
sj0=0ULL;
l17=sj0;
L23:;
sj0=l17;
sj1=0ULL;
si0=sj0 != sj1;
sj0=(U64)(si0);
l17=sj0;
goto L1;
L22:;
si0=l14;
si1=l20;
si2=1198852U;
f593(i,si0,si1,si2);
UNREACHABLE;
L12:;
si0=1198992U;
si1=29U;
si2=1199024U;
f604(i,si0,si1,si2);
UNREACHABLE;
L11:;
si0=1198916U;
si1=60U;
si2=1198976U;
f604(i,si0,si1,si2);
UNREACHABLE;
L10:;
si0=l10;
si1=0U;
i32_store(&i->m0,(U64)si0+40U,si1);
si0=0U;
si1=l10;
si2=24U;
si1+=si2;
si2=l10;
si3=12U;
si2+=si3;
si3=l10;
si4=40U;
si3+=si4;
si4=1198900U;
f1250(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L9:;
si0=l10;
si1=52U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l10;
si1=1U;
i32_store(&i->m0,(U64)si0+44U,si1);
si0=l10;
si1=1197040U;
i32_store(&i->m0,(U64)si0+40U,si1);
si0=l10;
si1=1197012U;
i32_store(&i->m0,(U64)si0+48U,si1);
si0=l10;
si1=40U;
si0+=si1;
si1=1198576U;
f614(i,si0,si1);
UNREACHABLE;
L8:;
si0=l10;
si1=0U;
i32_store(&i->m0,(U64)si0+40U,si1);
si0=0U;
si1=l10;
si2=24U;
si1+=si2;
si2=l10;
si3=12U;
si2+=si3;
si3=l10;
si4=40U;
si3+=si4;
si4=1198884U;
f1250(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L7:;
si0=l10;
si1=0U;
i32_store(&i->m0,(U64)si0+40U,si1);
si0=0U;
si1=l10;
si2=36U;
si1+=si2;
si2=l10;
si3=24U;
si2+=si3;
si3=l10;
si4=40U;
si3+=si4;
si4=1198868U;
f1250(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L6:;
si0=1197083U;
si1=43U;
si2=1198592U;
f604(i,si0,si1,si2);
UNREACHABLE;
L5:;
si0=l14;
si1=l9;
si2=1198624U;
f597(i,si0,si1,si2);
UNREACHABLE;
L4:;
si0=l14;
si1=l16;
si2=1200308U;
f597(i,si0,si1,si2);
UNREACHABLE;
L3:;
si0=l9;
si1=l12;
si2=1198608U;
f594(i,si0,si1,si2);
UNREACHABLE;
L2:;
si0=1202809U;
si1=34U;
si2=1202844U;
f604(i,si0,si1,si2);
UNREACHABLE;
L1:;
si0=l4;
si1=3U;
si0=si0 <= si1;
if(si0){
goto L26;
}
si0=l4;
si1=-4U;
si0+=si1;
l14=si0;
si1=l12;
si0=si0 >= si1;
if(si0){
goto L29;
}
si0=l16;
if(si0){
goto L30;
}
si0=l4;
si1=3U;
si0<<=(si1&31);
si1=l13;
si0+=si1;
si1=-28U;
si0+=si1;
l11=si0;
L31:;
{
si0=l11;
si0=i32_load(&i->m0,(U64)si0);
l9=si0;
si0=l10;
si1=0U;
i32_store(&i->m0,(U64)si0+36U,si1);
si0=l10;
si1=l9;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l9;
if(si0){
goto L28;
}
sj0=l17;
sj1=2ULL;
sj0<<=(sj1&63);
l17=sj0;
si0=l14;
si1=2U;
si0=si0 < si1;
if(si0){
goto L26;
}
si0=l11;
si1=-16U;
si0+=si1;
l11=si0;
si0=l14;
si1=-2U;
si0+=si1;
l14=si0;
si1=l12;
si0=si0 < si1;
if(si0){
goto L31;
}
goto L29;
}
L30:;
si0=l1;
si1=536870910U;
si0+=si1;
si1=536870911U;
si0&=si1;
l19=si0;
si1=1U;
si0+=si1;
l9=si0;
si1=1073741820U;
si0&=si1;
l18=si0;
si0=l9;
si1=3U;
si0&=si1;
l15=si0;
L32:;
{
si0=l13;
si1=l14;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l9=si0;
si0=i32_load(&i->m0,(U64)si0+4U);
l20=si0;
si0=l9;
si0=i32_load(&i->m0,(U64)si0);
l11=si0;
sj0=0ULL;
l21=sj0;
si0=l0;
l9=si0;
si0=l19;
si1=3U;
si0=si0 < si1;
if(si0){
goto L33;
}
sj0=0ULL;
l21=sj0;
si0=l18;
l6=si0;
si0=l0;
l9=si0;
L34:;
{
si0=l9;
si1=l9;
sj1=i64_load(&i->m0,(U64)si1);
l22=sj1;
sj2=2ULL;
sj1<<=(sj2&63);
sj2=l21;
sj1|=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l9;
si1=8U;
si0+=si1;
l5=si0;
si1=l5;
sj1=i64_load(&i->m0,(U64)si1);
l21=sj1;
sj2=2ULL;
sj1<<=(sj2&63);
sj2=l22;
sj3=62ULL;
sj2>>=(sj3&63);
sj1|=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l9;
si1=16U;
si0+=si1;
l5=si0;
si1=l5;
sj1=i64_load(&i->m0,(U64)si1);
l22=sj1;
sj2=2ULL;
sj1<<=(sj2&63);
sj2=l21;
sj3=62ULL;
sj2>>=(sj3&63);
sj1|=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l9;
si1=24U;
si0+=si1;
l5=si0;
si1=l5;
sj1=i64_load(&i->m0,(U64)si1);
l21=sj1;
sj2=2ULL;
sj1<<=(sj2&63);
sj2=l22;
sj3=62ULL;
sj2>>=(sj3&63);
sj1|=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l9;
si1=32U;
si0+=si1;
l9=si0;
sj0=l21;
sj1=62ULL;
sj0>>=(sj1&63);
l21=sj0;
si0=l6;
si1=-4U;
si0+=si1;
l6=si0;
if(si0){
goto L34;
}
}
L33:;
si0=l15;
si0=!(si0);
if(si0){
goto L35;
}
si0=l15;
l6=si0;
L36:;
{
si0=l9;
si1=l9;
sj1=i64_load(&i->m0,(U64)si1);
l22=sj1;
sj2=2ULL;
sj1<<=(sj2&63);
sj2=l21;
sj1|=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l9;
si1=8U;
si0+=si1;
l9=si0;
sj0=l22;
sj1=62ULL;
sj0>>=(sj1&63);
l21=sj0;
si0=l6;
si1=-1U;
si0+=si1;
l6=si0;
if(si0){
goto L36;
}
}
L35:;
si0=l10;
si1=l16;
i32_store(&i->m0,(U64)si0+36U,si1);
si0=l10;
si1=l20;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l16;
si1=l20;
si0=si0 != si1;
if(si0){
goto L27;
}
sj0=l21;
sj1=l17;
sj2=2ULL;
sj1<<=(sj2&63);
sj0|=sj1;
l17=sj0;
si0=0U;
l6=si0;
si0=l16;
l5=si0;
si0=l0;
l9=si0;
L37:;
{
si0=l9;
sj0=i64_load(&i->m0,(U64)si0);
l22=sj0;
si1=l11;
sj1=i64_load(&i->m0,(U64)si1);
sj0+=sj1;
l21=sj0;
sj1=l22;
si0=sj0 < sj1;
l20=si0;
si0=l6;
si1=255U;
si0&=si1;
if(si0){
goto L39;
}
si0=l20;
l6=si0;
goto L38;
L39:;
si0=l20;
sj1=l21;
sj2=1ULL;
sj1+=sj2;
l21=sj1;
si1=!(sj1);
si0|=si1;
l6=si0;
L38:;
si0=l9;
sj1=l21;
i64_store(&i->m0,(U64)si0,sj1);
si0=l9;
si1=8U;
si0+=si1;
l9=si0;
si0=l11;
si1=8U;
si0+=si1;
l11=si0;
si0=l5;
si1=-1U;
si0+=si1;
l5=si0;
if(si0){
goto L37;
}
}
sj0=l17;
si1=l6;
sj1=(U64)(si1);
sj0+=sj1;
l17=sj0;
si0=l14;
si1=2U;
si0=si0 < si1;
if(si0){
goto L26;
}
si0=l14;
si1=-2U;
si0+=si1;
l14=si0;
si1=l12;
si0=si0 < si1;
if(si0){
goto L32;
}
}
L29:;
si0=l14;
si1=l12;
si2=1198640U;
f594(i,si0,si1,si2);
UNREACHABLE;
L28:;
si0=l10;
si1=0U;
i32_store(&i->m0,(U64)si0+40U,si1);
si0=0U;
si1=l10;
si2=36U;
si1+=si2;
si2=l10;
si3=24U;
si2+=si3;
si3=l10;
si4=40U;
si3+=si4;
si4=1203184U;
f1250(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L27:;
si0=l10;
si1=0U;
i32_store(&i->m0,(U64)si0+40U,si1);
si0=0U;
si1=l10;
si2=36U;
si1+=si2;
si2=l10;
si3=24U;
si2+=si3;
si3=l10;
si4=40U;
si3+=si4;
si4=1203184U;
f1250(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L26:;
si0=l0;
si1=l16;
si2=3U;
si1<<=(si2&31);
si0+=si1;
si1=0U;
si2=l1;
si0=si2?si0:si1;
sj1=l17;
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=-1U;
si0+=si1;
l9=si0;
si1=l12;
si0=si0 < si1;
if(si0){
goto L40;
}
si0=l9;
si1=l12;
si2=1198656U;
f594(i,si0,si1,si2);
UNREACHABLE;
L40:;
si0=l13;
si1=l9;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l11=si0;
si0=i32_load(&i->m0,(U64)si0+4U);
l9=si0;
si1=l16;
si0=si0 > si1;
if(si0){
goto L45;
}
si0=l4;
si1=3U;
si0<<=(si1&31);
si1=l13;
si0+=si1;
si1=-24U;
si0+=si1;
l14=si0;
si0=i32_load(&i->m0,(U64)si0+4U);
l6=si0;
si0=l9;
if(si0){
goto L47;
}
sj0=0ULL;
l17=sj0;
goto L46;
L47:;
si0=l11;
si0=i32_load(&i->m0,(U64)si0);
l15=si0;
si0=l9;
si1=1U;
si0&=si1;
l19=si0;
si0=l9;
si1=1U;
si0=si0 != si1;
if(si0){
goto L49;
}
si0=0U;
l5=si0;
sj0=0ULL;
l17=sj0;
goto L48;
L49:;
si0=l9;
si1=-2U;
si0&=si1;
l20=si0;
si0=0U;
l5=si0;
sj0=0ULL;
l17=sj0;
si0=l15;
l9=si0;
si0=l8;
l11=si0;
L50:;
{
si0=l11;
si1=l9;
sj1=i64_load(&i->m0,(U64)si1);
l21=sj1;
sj2=2ULL;
sj1<<=(sj2&63);
sj2=l17;
sj1|=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l11;
si1=8U;
si0+=si1;
si1=l9;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
l22=sj1;
sj2=2ULL;
sj1<<=(sj2&63);
sj2=l21;
sj3=62ULL;
sj2>>=(sj3&63);
sj1|=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l9;
si1=16U;
si0+=si1;
l9=si0;
si0=l11;
si1=16U;
si0+=si1;
l11=si0;
sj0=l22;
sj1=62ULL;
sj0>>=(sj1&63);
l17=sj0;
si0=l20;
si1=l5;
si2=2U;
si1+=si2;
l5=si1;
si0=si0 != si1;
if(si0){
goto L50;
}
}
L48:;
si0=l19;
si0=!(si0);
if(si0){
goto L46;
}
si0=l8;
si1=l5;
si2=3U;
si1<<=(si2&31);
l9=si1;
si0+=si1;
si1=l15;
si2=l9;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
l21=sj1;
sj2=2ULL;
sj1<<=(sj2&63);
sj2=l17;
sj1|=sj2;
i64_store(&i->m0,(U64)si0,sj1);
sj0=l21;
sj1=62ULL;
sj0>>=(sj1&63);
l17=sj0;
L46:;
si0=l6;
si1=l16;
si0=si0 > si1;
if(si0){
goto L44;
}
si0=l6;
si0=!(si0);
if(si0){
goto L51;
}
si0=l14;
si0=i32_load(&i->m0,(U64)si0);
l11=si0;
si0=0U;
l5=si0;
si0=l8;
l9=si0;
L52:;
{
si0=l9;
sj0=i64_load(&i->m0,(U64)si0);
l22=sj0;
si1=l11;
sj1=i64_load(&i->m0,(U64)si1);
sj0+=sj1;
l21=sj0;
sj1=l22;
si0=sj0 < sj1;
l20=si0;
si0=l5;
si1=255U;
si0&=si1;
if(si0){
goto L54;
}
si0=l20;
l5=si0;
goto L53;
L54:;
si0=l20;
sj1=l21;
sj2=1ULL;
sj1+=sj2;
l21=sj1;
si1=!(sj1);
si0|=si1;
l5=si0;
L53:;
si0=l9;
sj1=l21;
i64_store(&i->m0,(U64)si0,sj1);
si0=l9;
si1=8U;
si0+=si1;
l9=si0;
si0=l11;
si1=8U;
si0+=si1;
l11=si0;
si0=l6;
si1=-1U;
si0+=si1;
l6=si0;
if(si0){
goto L52;
}
}
sj0=l17;
si1=l5;
sj1=(U64)(si1);
sj0+=sj1;
l17=sj0;
L51:;
si0=l4;
si1=4U;
si0=si0 <= si1;
if(si0){
goto L41;
}
si0=l4;
si1=-5U;
si0+=si1;
l14=si0;
si1=l12;
si0=si0 >= si1;
if(si0){
goto L55;
}
si0=l16;
if(si0){
goto L56;
}
si0=l4;
si1=3U;
si0<<=(si1&31);
si1=l13;
si0+=si1;
si1=-36U;
si0+=si1;
l11=si0;
L57:;
{
si0=l11;
si0=i32_load(&i->m0,(U64)si0);
l9=si0;
si0=l10;
si1=0U;
i32_store(&i->m0,(U64)si0+36U,si1);
si0=l10;
si1=l9;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l9;
if(si0){
goto L43;
}
sj0=l17;
sj1=2ULL;
sj0<<=(sj1&63);
l17=sj0;
si0=l14;
si1=2U;
si0=si0 < si1;
if(si0){
goto L41;
}
si0=l11;
si1=-16U;
si0+=si1;
l11=si0;
si0=l14;
si1=-2U;
si0+=si1;
l14=si0;
si1=l12;
si0=si0 < si1;
if(si0){
goto L57;
}
goto L55;
}
L56:;
si0=l1;
si1=536870910U;
si0+=si1;
si1=536870911U;
si0&=si1;
l19=si0;
si1=1U;
si0+=si1;
l9=si0;
si1=1073741820U;
si0&=si1;
l18=si0;
si0=l9;
si1=3U;
si0&=si1;
l15=si0;
L58:;
{
si0=l13;
si1=l14;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l5=si0;
sj0=0ULL;
l21=sj0;
si0=l8;
l9=si0;
si0=l19;
si1=3U;
si0=si0 < si1;
if(si0){
goto L59;
}
sj0=0ULL;
l21=sj0;
si0=l18;
l11=si0;
si0=l8;
l9=si0;
L60:;
{
si0=l9;
si1=l9;
sj1=i64_load(&i->m0,(U64)si1);
l22=sj1;
sj2=2ULL;
sj1<<=(sj2&63);
sj2=l21;
sj1|=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l9;
si1=8U;
si0+=si1;
l6=si0;
si1=l6;
sj1=i64_load(&i->m0,(U64)si1);
l21=sj1;
sj2=2ULL;
sj1<<=(sj2&63);
sj2=l22;
sj3=62ULL;
sj2>>=(sj3&63);
sj1|=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l9;
si1=16U;
si0+=si1;
l6=si0;
si1=l6;
sj1=i64_load(&i->m0,(U64)si1);
l22=sj1;
sj2=2ULL;
sj1<<=(sj2&63);
sj2=l21;
sj3=62ULL;
sj2>>=(sj3&63);
sj1|=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l9;
si1=24U;
si0+=si1;
l6=si0;
si1=l6;
sj1=i64_load(&i->m0,(U64)si1);
l21=sj1;
sj2=2ULL;
sj1<<=(sj2&63);
sj2=l22;
sj3=62ULL;
sj2>>=(sj3&63);
sj1|=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l9;
si1=32U;
si0+=si1;
l9=si0;
sj0=l21;
sj1=62ULL;
sj0>>=(sj1&63);
l21=sj0;
si0=l11;
si1=-4U;
si0+=si1;
l11=si0;
if(si0){
goto L60;
}
}
L59:;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+4U);
l6=si0;
si0=l15;
si0=!(si0);
if(si0){
goto L61;
}
si0=l15;
l11=si0;
L62:;
{
si0=l9;
si1=l9;
sj1=i64_load(&i->m0,(U64)si1);
l22=sj1;
sj2=2ULL;
sj1<<=(sj2&63);
sj2=l21;
sj1|=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l9;
si1=8U;
si0+=si1;
l9=si0;
sj0=l22;
sj1=62ULL;
sj0>>=(sj1&63);
l21=sj0;
si0=l11;
si1=-1U;
si0+=si1;
l11=si0;
if(si0){
goto L62;
}
}
L61:;
si0=l5;
si0=i32_load(&i->m0,(U64)si0);
l11=si0;
si0=l10;
si1=l16;
i32_store(&i->m0,(U64)si0+36U,si1);
si0=l10;
si1=l6;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l16;
si1=l6;
si0=si0 != si1;
if(si0){
goto L42;
}
sj0=l21;
sj1=l17;
sj2=2ULL;
sj1<<=(sj2&63);
sj0|=sj1;
l17=sj0;
si0=0U;
l6=si0;
si0=l16;
l5=si0;
si0=l8;
l9=si0;
L63:;
{
si0=l9;
sj0=i64_load(&i->m0,(U64)si0);
l22=sj0;
si1=l11;
sj1=i64_load(&i->m0,(U64)si1);
sj0+=sj1;
l21=sj0;
sj1=l22;
si0=sj0 < sj1;
l20=si0;
si0=l6;
si1=255U;
si0&=si1;
if(si0){
goto L65;
}
si0=l20;
l6=si0;
goto L64;
L65:;
si0=l20;
sj1=l21;
sj2=1ULL;
sj1+=sj2;
l21=sj1;
si1=!(sj1);
si0|=si1;
l6=si0;
L64:;
si0=l9;
sj1=l21;
i64_store(&i->m0,(U64)si0,sj1);
si0=l9;
si1=8U;
si0+=si1;
l9=si0;
si0=l11;
si1=8U;
si0+=si1;
l11=si0;
si0=l5;
si1=-1U;
si0+=si1;
l5=si0;
if(si0){
goto L63;
}
}
sj0=l17;
si1=l6;
sj1=(U64)(si1);
sj0+=sj1;
l17=sj0;
si0=l14;
si1=2U;
si0=si0 < si1;
if(si0){
goto L41;
}
si0=l14;
si1=-2U;
si0+=si1;
l14=si0;
si1=l12;
si0=si0 < si1;
if(si0){
goto L58;
}
}
L55:;
si0=l14;
si1=l12;
si2=1198672U;
f594(i,si0,si1,si2);
UNREACHABLE;
L45:;
si0=l9;
si1=l16;
si2=1200308U;
f597(i,si0,si1,si2);
UNREACHABLE;
L44:;
si0=l6;
si1=l16;
si2=1198560U;
f597(i,si0,si1,si2);
UNREACHABLE;
L43:;
si0=l10;
si1=0U;
i32_store(&i->m0,(U64)si0+40U,si1);
si0=0U;
si1=l10;
si2=36U;
si1+=si2;
si2=l10;
si3=24U;
si2+=si3;
si3=l10;
si4=40U;
si3+=si4;
si4=1203184U;
f1250(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L42:;
si0=l10;
si1=0U;
i32_store(&i->m0,(U64)si0+40U,si1);
si0=0U;
si1=l10;
si2=36U;
si1+=si2;
si2=l10;
si3=24U;
si2+=si3;
si3=l10;
si4=40U;
si3+=si4;
si4=1203184U;
f1250(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L41:;
si0=l8;
si1=l16;
si2=3U;
si1<<=(si2&31);
si0+=si1;
sj1=l17;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=l8;
si2=l4;
si3=1U;
si2&=si3;
l14=si2;
si0=si2?si0:si1;
l9=si0;
si0=l1;
si1=-1U;
si0+=si1;
si1=536870911U;
si0&=si1;
l6=si0;
si1=1U;
si0+=si1;
l5=si0;
si1=3U;
si0&=si1;
l11=si0;
si0=l6;
si1=3U;
si0=si0 >= si1;
if(si0){
goto L67;
}
sj0=0ULL;
l21=sj0;
goto L66;
L67:;
si0=l5;
si1=1073741820U;
si0&=si1;
l6=si0;
sj0=0ULL;
l21=sj0;
L68:;
{
si0=l9;
si1=l9;
sj1=i64_load(&i->m0,(U64)si1);
l22=sj1;
sj2=1ULL;
sj1<<=(sj2&63);
sj2=l21;
sj1|=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l9;
si1=8U;
si0+=si1;
l5=si0;
si1=l5;
sj1=i64_load(&i->m0,(U64)si1);
l21=sj1;
sj2=1ULL;
sj1<<=(sj2&63);
sj2=l22;
sj3=63ULL;
sj2>>=(sj3&63);
sj1|=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l9;
si1=16U;
si0+=si1;
l5=si0;
si1=l5;
sj1=i64_load(&i->m0,(U64)si1);
l17=sj1;
sj2=1ULL;
sj1<<=(sj2&63);
sj2=l21;
sj3=63ULL;
sj2>>=(sj3&63);
sj1|=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l9;
si1=24U;
si0+=si1;
l5=si0;
si1=l5;
sj1=i64_load(&i->m0,(U64)si1);
l22=sj1;
sj2=1ULL;
sj1<<=(sj2&63);
sj2=l17;
sj3=63ULL;
sj2>>=(sj3&63);
sj1|=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l9;
si1=32U;
si0+=si1;
l9=si0;
sj0=l22;
sj1=63ULL;
sj0>>=(sj1&63);
l21=sj0;
si0=l6;
si1=-4U;
si0+=si1;
l6=si0;
if(si0){
goto L68;
}
}
L66:;
si0=l11;
si0=!(si0);
if(si0){
goto L69;
}
L70:;
{
si0=l9;
si1=l9;
sj1=i64_load(&i->m0,(U64)si1);
l22=sj1;
sj2=1ULL;
sj1<<=(sj2&63);
sj2=l21;
sj1|=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l9;
si1=8U;
si0+=si1;
l9=si0;
sj0=l22;
sj1=63ULL;
sj0>>=(sj1&63);
l21=sj0;
si0=l11;
si1=-1U;
si0+=si1;
l11=si0;
if(si0){
goto L70;
}
}
L69:;
si0=l10;
sj1=l21;
i64_store(&i->m0,(U64)si0+24U,sj1);
sj0=l22;
sj1=-1ULL;
si0=(U64)((I64)sj0<=(I64)sj1);
if(si0){
goto L73;
}
si0=l0;
si1=-8U;
si0+=si1;
l5=si0;
si0=l8;
si1=-8U;
si0+=si1;
l20=si0;
si0=l1;
si1=3U;
si0<<=(si1&31);
l9=si0;
L76:;
{
si0=l9;
si0=!(si0);
if(si0){
goto L75;
}
si0=l5;
si1=l9;
si0+=si1;
l11=si0;
si0=l20;
si1=l9;
si0+=si1;
l6=si0;
si0=l9;
si1=-8U;
si0+=si1;
l9=si0;
si0=l6;
sj0=i64_load(&i->m0,(U64)si0);
l21=sj0;
si1=l11;
sj1=i64_load(&i->m0,(U64)si1);
l22=sj1;
si0=sj0 == sj1;
if(si0){
goto L76;
}
}
sj0=l21;
sj1=l22;
si0=sj0 > sj1;
if(si0){
goto L74;
}
goto L72;
L75:;
si0=l9;
si0=!(si0);
if(si0){
goto L72;
}
L74:;
si0=l1;
si1=l3;
si0=si0 > si1;
if(si0){
goto L79;
}
si0=1U;
l15=si0;
si0=l1;
si1=1U;
si0&=si1;
l4=si0;
si0=l16;
if(si0){
goto L78;
}
si0=0U;
l20=si0;
sj0=0ULL;
l21=sj0;
goto L77;
L79:;
si0=1202809U;
si1=34U;
si2=1203412U;
f604(i,si0,si1,si2);
UNREACHABLE;
L78:;
si0=l1;
si1=-2U;
si0&=si1;
l16=si0;
si0=0U;
l5=si0;
si0=l8;
l9=si0;
si0=l0;
l11=si0;
si0=l2;
l6=si0;
si0=0U;
l20=si0;
L80:;
{
si0=l6;
si1=l9;
sj1=i64_load(&i->m0,(U64)si1);
l21=sj1;
si2=l5;
sj2=(U64)(si2);
sj3=1ULL;
sj2&=sj3;
sj1-=sj2;
si2=l11;
sj2=i64_load(&i->m0,(U64)si2);
l22=sj2;
sj1-=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l6;
si1=8U;
si0+=si1;
si1=l9;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
l17=sj1;
sj2=l21;
sj3=l22;
si2=sj2 <= sj3;
sj3=l21;
sj4=l22;
si3=sj3 < sj4;
si4=l5;
si5=1U;
si4&=si5;
si2=si4?si2:si3;
l5=si2;
sj2=(U64)(si2);
sj1-=sj2;
si2=l11;
si3=8U;
si2+=si3;
sj2=i64_load(&i->m0,(U64)si2);
l21=sj2;
sj1-=sj2;
i64_store(&i->m0,(U64)si0,sj1);
sj0=l17;
sj1=l21;
si0=sj0 <= sj1;
sj1=l17;
sj2=l21;
si1=sj1 < sj2;
si2=l5;
si0=si2?si0:si1;
l5=si0;
si0=l9;
si1=16U;
si0+=si1;
l9=si0;
si0=l11;
si1=16U;
si0+=si1;
l11=si0;
si0=l6;
si1=16U;
si0+=si1;
l6=si0;
si0=l16;
si1=l20;
si2=2U;
si1+=si2;
l20=si1;
si0=si0 != si1;
if(si0){
goto L80;
}
}
sj0=0ULL;
si1=l5;
sj1=(U64)(si1);
sj0-=sj1;
l21=sj0;
L77:;
si0=l4;
si0=!(si0);
if(si0){
goto L71;
}
si0=l2;
si1=l20;
si2=3U;
si1<<=(si2&31);
l9=si1;
si0+=si1;
si1=l8;
si2=l9;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
sj2=l21;
sj1+=sj2;
si2=l0;
si3=l9;
si2+=si3;
sj2=i64_load(&i->m0,(U64)si2);
sj1-=sj2;
i64_store(&i->m0,(U64)si0,sj1);
goto L71;
L73:;
si0=l10;
si1=0U;
i32_store(&i->m0,(U64)si0+40U,si1);
si0=0U;
si1=l10;
si2=24U;
si1+=si2;
si2=1198688U;
si3=l10;
si4=40U;
si3+=si4;
si4=1198836U;
f1251(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L72:;
si0=l1;
si1=l3;
si0=si0 > si1;
if(si0){
goto L83;
}
si0=l1;
si1=1U;
si0&=si1;
l4=si0;
si0=0U;
l15=si0;
si0=l16;
if(si0){
goto L82;
}
sj0=0ULL;
l21=sj0;
si0=0U;
l20=si0;
goto L81;
L83:;
si0=1202809U;
si1=34U;
si2=1203412U;
f604(i,si0,si1,si2);
UNREACHABLE;
L82:;
si0=l1;
si1=-2U;
si0&=si1;
l16=si0;
si0=0U;
l5=si0;
si0=l0;
l9=si0;
si0=l8;
l11=si0;
si0=l2;
l6=si0;
si0=0U;
l20=si0;
L84:;
{
si0=l6;
si1=l9;
sj1=i64_load(&i->m0,(U64)si1);
l21=sj1;
si2=l5;
sj2=(U64)(si2);
sj3=1ULL;
sj2&=sj3;
sj1-=sj2;
si2=l11;
sj2=i64_load(&i->m0,(U64)si2);
l22=sj2;
sj1-=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l6;
si1=8U;
si0+=si1;
si1=l9;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
l17=sj1;
sj2=l21;
sj3=l22;
si2=sj2 <= sj3;
sj3=l21;
sj4=l22;
si3=sj3 < sj4;
si4=l5;
si5=1U;
si4&=si5;
si2=si4?si2:si3;
l5=si2;
sj2=(U64)(si2);
sj1-=sj2;
si2=l11;
si3=8U;
si2+=si3;
sj2=i64_load(&i->m0,(U64)si2);
l21=sj2;
sj1-=sj2;
i64_store(&i->m0,(U64)si0,sj1);
sj0=l17;
sj1=l21;
si0=sj0 <= sj1;
sj1=l17;
sj2=l21;
si1=sj1 < sj2;
si2=l5;
si0=si2?si0:si1;
l5=si0;
si0=l9;
si1=16U;
si0+=si1;
l9=si0;
si0=l11;
si1=16U;
si0+=si1;
l11=si0;
si0=l6;
si1=16U;
si0+=si1;
l6=si0;
si0=l16;
si1=l20;
si2=2U;
si1+=si2;
l20=si1;
si0=si0 != si1;
if(si0){
goto L84;
}
}
sj0=0ULL;
si1=l5;
sj1=(U64)(si1);
sj0-=sj1;
l21=sj0;
L81:;
si0=l4;
si0=!(si0);
if(si0){
goto L71;
}
si0=l2;
si1=l20;
si2=3U;
si1<<=(si2&31);
l9=si1;
si0+=si1;
si1=l0;
si2=l9;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
sj2=l21;
sj1+=sj2;
si2=l8;
si3=l9;
si2+=si3;
sj2=i64_load(&i->m0,(U64)si2);
sj1-=sj2;
i64_store(&i->m0,(U64)si0,sj1);
L71:;
si0=0U;
l11=si0;
si0=l1;
l6=si0;
si0=l0;
l9=si0;
L85:;
{
si0=l9;
sj0=i64_load(&i->m0,(U64)si0);
l22=sj0;
si1=l8;
sj1=i64_load(&i->m0,(U64)si1);
sj0+=sj1;
l21=sj0;
sj1=l22;
si0=sj0 < sj1;
l5=si0;
si0=l11;
si1=255U;
si0&=si1;
if(si0){
goto L87;
}
si0=l5;
l11=si0;
goto L86;
L87:;
si0=l5;
sj1=l21;
sj2=1ULL;
sj1+=sj2;
l21=sj1;
si1=!(sj1);
si0|=si1;
l11=si0;
L86:;
si0=l9;
sj1=l21;
i64_store(&i->m0,(U64)si0,sj1);
si0=l9;
si1=8U;
si0+=si1;
l9=si0;
si0=l8;
si1=8U;
si0+=si1;
l8=si0;
si0=l6;
si1=-1U;
si0+=si1;
l6=si0;
if(si0){
goto L85;
}
}
si0=l7;
si1=l1;
si0=si0 >= si1;
if(si0){
goto L91;
}
si0=l0;
si1=l7;
si2=3U;
si1<<=(si2&31);
si0+=si1;
sj0=i64_load(&i->m0,(U64)si0);
sj1=-1ULL;
si2=l12;
si3=63U;
si2&=si3;
l9=si2;
sj2=(U64)(si2);
l21=sj2;
sj1<<=(sj2&63);
sj2=-1ULL;
sj1^=sj2;
si0=sj0 >= sj1;
if(si0){
goto L90;
}
si0=l9;
si1=63U;
si0=si0 == si1;
if(si0){
goto L89;
}
si0=l7;
si1=l3;
si0=si0 >= si1;
if(si0){
goto L88;
}
si0=l2;
si1=l7;
si2=3U;
si1<<=(si2&31);
si0+=si1;
sj0=i64_load(&i->m0,(U64)si0);
sj1=2ULL;
sj2=l21;
sj1<<=(sj2&63);
sj2=3ULL;
sj1=DIV_U(sj1,sj2);
si0=sj0 < sj1;
if(si0){
goto L89;
}
si0=1198728U;
si1=40U;
si2=1198768U;
f604(i,si0,si1,si2);
UNREACHABLE;
L91:;
si0=l7;
si1=l1;
si2=1198696U;
f594(i,si0,si1,si2);
UNREACHABLE;
L90:;
si0=1198784U;
si1=36U;
si2=1198820U;
f604(i,si0,si1,si2);
UNREACHABLE;
L89:;
si0=l10;
si0=i32_load(&i->m0,(U64)si0+16U);
si0=!(si0);
if(si0){
goto L92;
}
si0=l13;
f15024(i,si0);
L92:;
si0=l10;
si1=64U;
si0+=si1;
i->g0=si0;
si0=l14;
si1=0U;
si0=si0 != si1;
si1=l15;
si0^=si1;
goto L0;
L88:;
si0=l7;
si1=l3;
si2=1198712U;
f594(i,si0,si1,si2);
UNREACHABLE;
L0:;
return si0;
}

U32 f1020(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4,U32 l5,U32 l6,U32 l7,U64 l8,U32 l9,U32 l10) {
U32 l11=0;
U64 l12=0;
U32 l13=0;
U32 l14=0;
U32 l15=0;
U32 l16=0;
U32 l17=0;
U32 l18=0;
U64 l19=0;
U32 l20=0;
U32 l21=0;
U32 l22=0;
U64 l23=0;
U32 l24=0;
U64 l25=0;
U64 l26=0;
U32 l27=0;
U64 l28=0;
U32 si0,si1,si2,si3,si4,si5;
U64 sj0,sj1,sj2,sj3,sj4,sj5;
si0=i->g0;
si1=48U;
si0-=si1;
l11=si0;
i->g0=si0;
si0=l4;
si1=3U;
si0=si0 < si1;
if(si0){
goto L13;
}
si0=l4;
sj0=(U64)(si0);
sj1=l8;
sj0*=sj1;
l12=sj0;
sj1=63ULL;
si0=sj0 > sj1;
if(si0){
goto L12;
}
si0=l11;
si1=l1;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l11;
si1=l7;
si2=1U;
si1+=si2;
l13=si1;
i32_store(&i->m0,(U64)si0,si1);
si0=l13;
si1=l1;
si0=si0 != si1;
if(si0){
goto L11;
}
si0=l11;
si1=l10;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l11;
si1=l1;
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
si1=l10;
si0=si0 != si1;
if(si0){
goto L9;
}
si0=l7;
si0=!(si0);
if(si0){
goto L10;
}
si0=l11;
si1=l7;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l11;
si1=l6;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l11;
si1=l5;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l11;
si1=l11;
si2=24U;
si1+=si2;
f1225(i,si0,si1);
si0=l11;
si1=l11;
si1=i32_load(&i->m0,(U64)si1+8U);
l14=si1;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l11;
si1=l4;
si2=1U;
si1+=si2;
l10=si1;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l14;
si1=l10;
si0=si0 != si1;
if(si0){
goto L8;
}
si0=l14;
si1=l4;
si0=si0 <= si1;
if(si0){
goto L7;
}
si0=l1;
si0=!(si0);
if(si0){
goto L6;
}
si0=l11;
si0=i32_load(&i->m0,(U64)si0);
l15=si0;
si1=l4;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l16=si0;
si0=i32_load(&i->m0,(U64)si0+4U);
l17=si0;
si0=l15;
si1=20U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l10=si0;
si0=l15;
si0=i32_load(&i->m0,(U64)si0+16U);
l18=si0;
si0=l11;
sj1=l8;
sj2=1ULL;
sj1<<=(sj2&63);
l19=sj1;
i64_store(&i->m0,(U64)si0+16U,sj1);
sj0=l19;
sj1=0ULL;
si0=sj0 == sj1;
if(si0){
goto L5;
}
sj0=l19;
sj1=63ULL;
si0=sj0 > sj1;
if(si0){
goto L17;
}
si0=l10;
si1=l1;
si2=-1U;
si1+=si2;
l20=si1;
si0=si0 > si1;
if(si0){
goto L4;
}
si0=l0;
si1=l20;
si2=3U;
si1<<=(si2&31);
l21=si1;
si0+=si1;
l22=si0;
sj0=0ULL;
l23=sj0;
si0=l10;
si0=!(si0);
if(si0){
goto L14;
}
si0=l10;
si1=1U;
si0&=si1;
l24=si0;
sj0=0ULL;
sj1=l19;
sj0-=sj1;
sj1=62ULL;
sj0&=sj1;
l25=sj0;
si0=l10;
si1=1U;
si0=si0 != si1;
if(si0){
goto L16;
}
si0=0U;
l6=si0;
sj0=0ULL;
l23=sj0;
goto L15;
L17:;
si0=1200324U;
si1=36U;
si2=1200360U;
f604(i,si0,si1,si2);
UNREACHABLE;
L16:;
si0=l10;
si1=-2U;
si0&=si1;
l5=si0;
si0=0U;
l6=si0;
sj0=0ULL;
l23=sj0;
si0=l18;
l10=si0;
si0=l9;
l13=si0;
L18:;
{
si0=l13;
si1=l10;
sj1=i64_load(&i->m0,(U64)si1);
l26=sj1;
sj2=l19;
sj1<<=(sj2&63);
sj2=l23;
sj1|=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l13;
si1=8U;
si0+=si1;
si1=l10;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
l23=sj1;
sj2=l19;
sj1<<=(sj2&63);
sj2=l26;
sj3=l25;
sj2>>=(sj3&63);
sj1|=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l10;
si1=16U;
si0+=si1;
l10=si0;
si0=l13;
si1=16U;
si0+=si1;
l13=si0;
sj0=l23;
sj1=l25;
sj0>>=(sj1&63);
l23=sj0;
si0=l5;
si1=l6;
si2=2U;
si1+=si2;
l6=si1;
si0=si0 != si1;
if(si0){
goto L18;
}
}
L15:;
si0=l24;
si0=!(si0);
if(si0){
goto L14;
}
si0=l9;
si1=l6;
si2=3U;
si1<<=(si2&31);
l10=si1;
si0+=si1;
si1=l18;
si2=l10;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
l26=sj1;
sj2=l19;
sj1<<=(sj2&63);
sj2=l23;
sj1|=sj2;
i64_store(&i->m0,(U64)si0,sj1);
sj0=l26;
sj1=l25;
sj0>>=(sj1&63);
l23=sj0;
L14:;
si0=l22;
sj1=l23;
i64_store(&i->m0,(U64)si0,sj1);
si0=l15;
si0=i32_load(&i->m0,(U64)si0);
l10=si0;
si0=l11;
si1=l15;
si1=i32_load(&i->m0,(U64)si1+4U);
l13=si1;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l11;
si1=l20;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l13;
si1=l20;
si0=si0 != si1;
if(si0){
goto L3;
}
si0=l20;
si0=!(si0);
if(si0){
goto L1;
}
si0=0U;
l5=si0;
si0=l20;
l18=si0;
si0=l9;
l13=si0;
si0=l0;
l6=si0;
L19:;
{
si0=l10;
sj0=i64_load(&i->m0,(U64)si0);
l25=sj0;
si1=l13;
sj1=i64_load(&i->m0,(U64)si1);
sj0+=sj1;
l23=sj0;
sj1=l25;
si0=sj0 < sj1;
l24=si0;
si0=l5;
si1=255U;
si0&=si1;
if(si0){
goto L21;
}
si0=l24;
l5=si0;
goto L20;
L21:;
si0=l24;
sj1=l23;
sj2=1ULL;
sj1+=sj2;
l23=sj1;
si1=!(sj1);
si0|=si1;
l5=si0;
L20:;
si0=l6;
sj1=l23;
i64_store(&i->m0,(U64)si0,sj1);
si0=l10;
si1=8U;
si0+=si1;
l10=si0;
si0=l13;
si1=8U;
si0+=si1;
l13=si0;
si0=l6;
si1=8U;
si0+=si1;
l6=si0;
si0=l18;
si1=-1U;
si0+=si1;
l18=si0;
if(si0){
goto L19;
}
}
si0=l5;
if(si0){
goto L2;
}
goto L1;
L13:;
si0=1198992U;
si1=29U;
si2=1199268U;
f604(i,si0,si1,si2);
UNREACHABLE;
L12:;
si0=1199200U;
si1=50U;
si2=1199252U;
f604(i,si0,si1,si2);
UNREACHABLE;
L11:;
si0=l11;
si1=0U;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=0U;
si1=l11;
si2=16U;
si1+=si2;
si2=l11;
si3=l11;
si4=24U;
si3+=si4;
si4=1199184U;
f1250(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L10:;
si0=l11;
si1=36U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l11;
si1=1U;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l11;
si1=1197040U;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l11;
si1=1197012U;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l11;
si1=24U;
si0+=si1;
si1=1199040U;
f614(i,si0,si1);
UNREACHABLE;
L9:;
si0=l11;
si1=0U;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=0U;
si1=l11;
si2=16U;
si1+=si2;
si2=l11;
si3=l11;
si4=24U;
si3+=si4;
si4=1199168U;
f1250(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L8:;
si0=l11;
si1=0U;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=0U;
si1=l11;
si2=12U;
si1+=si2;
si2=l11;
si3=16U;
si2+=si3;
si3=l11;
si4=24U;
si3+=si4;
si4=1199152U;
f1250(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L7:;
si0=l4;
si1=l14;
si2=1199056U;
f594(i,si0,si1,si2);
UNREACHABLE;
L6:;
si0=1197083U;
si1=43U;
si2=1199072U;
f604(i,si0,si1,si2);
UNREACHABLE;
L5:;
si0=l11;
si1=0U;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=1U;
si1=l11;
si2=16U;
si1+=si2;
si2=1198688U;
si3=l11;
si4=24U;
si3+=si4;
si4=1200292U;
f1251(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L4:;
si0=l10;
si1=l20;
si2=1200308U;
f597(i,si0,si1,si2);
UNREACHABLE;
L3:;
si0=l11;
si1=0U;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=0U;
si1=l11;
si2=12U;
si1+=si2;
si2=l11;
si3=16U;
si2+=si3;
si3=l11;
si4=24U;
si3+=si4;
si4=1202992U;
f1250(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L2:;
si0=l22;
si1=l22;
sj1=i64_load(&i->m0,(U64)si1);
sj2=1ULL;
sj1+=sj2;
i64_store(&i->m0,(U64)si0,sj1);
L1:;
si0=l4;
si1=5U;
si0=si0 < si1;
if(si0){
goto L22;
}
sj0=l8;
sj1=2ULL;
sj0<<=(sj1&63);
l26=sj0;
si0=4U;
l24=si0;
L23:;
{
si0=l24;
si1=l14;
si0=si0 < si1;
if(si0){
goto L24;
}
si0=l24;
si1=l14;
si2=1199136U;
f594(i,si0,si1,si2);
UNREACHABLE;
L24:;
si0=l15;
si1=l24;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l13=si0;
si0=i32_load(&i->m0,(U64)si0+4U);
l10=si0;
si0=l13;
si0=i32_load(&i->m0,(U64)si0);
l18=si0;
si0=l11;
sj1=l26;
i64_store(&i->m0,(U64)si0+16U,sj1);
sj0=l26;
sj1=0ULL;
si0=sj0 == sj1;
if(si0){
goto L27;
}
sj0=l26;
sj1=63ULL;
si0=sj0 > sj1;
if(si0){
goto L31;
}
si0=l10;
si1=l20;
si0=si0 > si1;
if(si0){
goto L26;
}
si0=l10;
if(si0){
goto L32;
}
sj0=0ULL;
l23=sj0;
goto L28;
L32:;
si0=l10;
si1=1U;
si0&=si1;
l27=si0;
sj0=0ULL;
sj1=l26;
sj0-=sj1;
sj1=62ULL;
sj0&=sj1;
l25=sj0;
si0=l10;
si1=1U;
si0=si0 != si1;
if(si0){
goto L30;
}
si0=0U;
l6=si0;
sj0=0ULL;
l23=sj0;
goto L29;
L31:;
si0=1200324U;
si1=36U;
si2=1200360U;
f604(i,si0,si1,si2);
UNREACHABLE;
L30:;
si0=l10;
si1=-2U;
si0&=si1;
l5=si0;
si0=0U;
l6=si0;
sj0=0ULL;
l23=sj0;
si0=l18;
l10=si0;
si0=l9;
l13=si0;
L33:;
{
si0=l13;
si1=l10;
sj1=i64_load(&i->m0,(U64)si1);
l28=sj1;
sj2=l26;
sj1<<=(sj2&63);
sj2=l23;
sj1|=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l13;
si1=8U;
si0+=si1;
si1=l10;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
l23=sj1;
sj2=l26;
sj1<<=(sj2&63);
sj2=l28;
sj3=l25;
sj2>>=(sj3&63);
sj1|=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l10;
si1=16U;
si0+=si1;
l10=si0;
si0=l13;
si1=16U;
si0+=si1;
l13=si0;
sj0=l23;
sj1=l25;
sj0>>=(sj1&63);
l23=sj0;
si0=l5;
si1=l6;
si2=2U;
si1+=si2;
l6=si1;
si0=si0 != si1;
if(si0){
goto L33;
}
}
L29:;
si0=l27;
si0=!(si0);
if(si0){
goto L28;
}
si0=l9;
si1=l6;
si2=3U;
si1<<=(si2&31);
l10=si1;
si0+=si1;
si1=l18;
si2=l10;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
l28=sj1;
sj2=l26;
sj1<<=(sj2&63);
sj2=l23;
sj1|=sj2;
i64_store(&i->m0,(U64)si0,sj1);
sj0=l28;
sj1=l25;
sj0>>=(sj1&63);
l23=sj0;
L28:;
si0=l22;
si1=l22;
sj1=i64_load(&i->m0,(U64)si1);
sj2=l23;
sj1+=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l20;
si0=!(si0);
if(si0){
goto L25;
}
si0=0U;
l6=si0;
si0=l20;
l5=si0;
si0=l0;
l10=si0;
si0=l9;
l13=si0;
L34:;
{
si0=l10;
sj0=i64_load(&i->m0,(U64)si0);
l25=sj0;
si1=l13;
sj1=i64_load(&i->m0,(U64)si1);
sj0+=sj1;
l23=sj0;
sj1=l25;
si0=sj0 < sj1;
l18=si0;
si0=l6;
si1=255U;
si0&=si1;
if(si0){
goto L36;
}
si0=l18;
l6=si0;
goto L35;
L36:;
si0=l18;
sj1=l23;
sj2=1ULL;
sj1+=sj2;
l23=sj1;
si1=!(sj1);
si0|=si1;
l6=si0;
L35:;
si0=l10;
sj1=l23;
i64_store(&i->m0,(U64)si0,sj1);
si0=l10;
si1=8U;
si0+=si1;
l10=si0;
si0=l13;
si1=8U;
si0+=si1;
l13=si0;
si0=l5;
si1=-1U;
si0+=si1;
l5=si0;
if(si0){
goto L34;
}
}
si0=l6;
si0=!(si0);
if(si0){
goto L25;
}
si0=l22;
si1=l22;
sj1=i64_load(&i->m0,(U64)si1);
sj2=1ULL;
sj1+=sj2;
i64_store(&i->m0,(U64)si0,sj1);
goto L25;
L27:;
si0=l11;
si1=0U;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=1U;
si1=l11;
si2=16U;
si1+=si2;
si2=1198688U;
si3=l11;
si4=24U;
si3+=si4;
si4=1200292U;
f1251(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L26:;
si0=l10;
si1=l20;
si2=1200308U;
f597(i,si0,si1,si2);
UNREACHABLE;
L25:;
sj0=l26;
sj1=l19;
sj0+=sj1;
l26=sj0;
si0=l24;
si1=2U;
si0+=si1;
l24=si0;
si1=l4;
si0=si0 < si1;
if(si0){
goto L23;
}
}
L22:;
si0=l15;
si1=12U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l10=si0;
si0=l15;
si0=i32_load(&i->m0,(U64)si0+8U);
l18=si0;
si0=l11;
sj1=l8;
i64_store(&i->m0,(U64)si0+16U,sj1);
sj0=l8;
sj1=0ULL;
si0=sj0 == sj1;
if(si0){
goto L51;
}
sj0=l8;
sj1=63ULL;
si0=sj0 > sj1;
if(si0){
goto L55;
}
si0=l10;
si1=l20;
si0=si0 > si1;
if(si0){
goto L50;
}
si0=l9;
si1=l21;
si0+=si1;
si1=0U;
si2=l1;
si0=si2?si0:si1;
l22=si0;
sj0=0ULL;
l23=sj0;
si0=l10;
si0=!(si0);
if(si0){
goto L52;
}
si0=l10;
si1=1U;
si0&=si1;
l24=si0;
sj0=0ULL;
sj1=l8;
sj0-=sj1;
sj1=63ULL;
sj0&=sj1;
l25=sj0;
si0=l10;
si1=1U;
si0=si0 != si1;
if(si0){
goto L54;
}
si0=0U;
l6=si0;
sj0=0ULL;
l23=sj0;
goto L53;
L55:;
si0=1200324U;
si1=36U;
si2=1200360U;
f604(i,si0,si1,si2);
UNREACHABLE;
L54:;
si0=l10;
si1=-2U;
si0&=si1;
l5=si0;
si0=0U;
l6=si0;
sj0=0ULL;
l23=sj0;
si0=l18;
l10=si0;
si0=l9;
l13=si0;
L56:;
{
si0=l13;
si1=l10;
sj1=i64_load(&i->m0,(U64)si1);
l26=sj1;
sj2=l8;
sj1<<=(sj2&63);
sj2=l23;
sj1|=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l13;
si1=8U;
si0+=si1;
si1=l10;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
l23=sj1;
sj2=l8;
sj1<<=(sj2&63);
sj2=l26;
sj3=l25;
sj2>>=(sj3&63);
sj1|=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l10;
si1=16U;
si0+=si1;
l10=si0;
si0=l13;
si1=16U;
si0+=si1;
l13=si0;
sj0=l23;
sj1=l25;
sj0>>=(sj1&63);
l23=sj0;
si0=l5;
si1=l6;
si2=2U;
si1+=si2;
l6=si1;
si0=si0 != si1;
if(si0){
goto L56;
}
}
L53:;
si0=l24;
si0=!(si0);
if(si0){
goto L52;
}
si0=l9;
si1=l6;
si2=3U;
si1<<=(si2&31);
l10=si1;
si0+=si1;
si1=l18;
si2=l10;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
l26=sj1;
sj2=l8;
sj1<<=(sj2&63);
sj2=l23;
sj1|=sj2;
i64_store(&i->m0,(U64)si0,sj1);
sj0=l26;
sj1=l25;
sj0>>=(sj1&63);
l23=sj0;
L52:;
si0=l22;
sj1=l23;
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=4U;
si0=si0 < si1;
if(si0){
goto L60;
}
sj0=l8;
sj1=3ULL;
sj0*=sj1;
l26=sj0;
si0=l7;
si1=l3;
si0=si0 > si1;
if(si0){
goto L45;
}
si0=l20;
si1=l7;
si0=si0 != si1;
if(si0){
goto L58;
}
si0=3U;
l24=si0;
L61:;
{
si0=l24;
si1=l14;
si0=si0 >= si1;
if(si0){
goto L57;
}
si0=l15;
si1=l24;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l13=si0;
si0=i32_load(&i->m0,(U64)si0+4U);
l10=si0;
si0=l13;
si0=i32_load(&i->m0,(U64)si0);
l18=si0;
si0=l11;
sj1=l26;
i64_store(&i->m0,(U64)si0+16U,sj1);
sj0=l26;
si0=!(sj0);
if(si0){
goto L59;
}
sj0=l26;
sj1=63ULL;
si0=sj0 > sj1;
if(si0){
goto L43;
}
si0=l10;
si1=l3;
si0=si0 > si1;
if(si0){
goto L39;
}
si0=l10;
if(si0){
goto L63;
}
sj0=0ULL;
l23=sj0;
goto L62;
L63:;
si0=l10;
si1=1U;
si0&=si1;
l27=si0;
sj0=0ULL;
sj1=l26;
sj0-=sj1;
sj1=63ULL;
sj0&=sj1;
l25=sj0;
si0=l10;
si1=1U;
si0=si0 != si1;
if(si0){
goto L65;
}
si0=0U;
l6=si0;
sj0=0ULL;
l23=sj0;
goto L64;
L65:;
si0=l10;
si1=-2U;
si0&=si1;
l5=si0;
si0=0U;
l6=si0;
sj0=0ULL;
l23=sj0;
si0=l18;
l10=si0;
si0=l2;
l13=si0;
L66:;
{
si0=l13;
si1=l10;
sj1=i64_load(&i->m0,(U64)si1);
l28=sj1;
sj2=l26;
sj1<<=(sj2&63);
sj2=l23;
sj1|=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l13;
si1=8U;
si0+=si1;
si1=l10;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
l23=sj1;
sj2=l26;
sj1<<=(sj2&63);
sj2=l28;
sj3=l25;
sj2>>=(sj3&63);
sj1|=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l10;
si1=16U;
si0+=si1;
l10=si0;
si0=l13;
si1=16U;
si0+=si1;
l13=si0;
sj0=l23;
sj1=l25;
sj0>>=(sj1&63);
l23=sj0;
si0=l5;
si1=l6;
si2=2U;
si1+=si2;
l6=si1;
si0=si0 != si1;
if(si0){
goto L66;
}
}
L64:;
si0=l27;
si0=!(si0);
if(si0){
goto L62;
}
si0=l2;
si1=l6;
si2=3U;
si1<<=(si2&31);
l10=si1;
si0+=si1;
si1=l18;
si2=l10;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
l28=sj1;
sj2=l26;
sj1<<=(sj2&63);
sj2=l23;
sj1|=sj2;
i64_store(&i->m0,(U64)si0,sj1);
sj0=l28;
sj1=l25;
sj0>>=(sj1&63);
l23=sj0;
L62:;
si0=l22;
si1=l22;
sj1=i64_load(&i->m0,(U64)si1);
sj2=l23;
sj1+=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=0U;
l6=si0;
si0=l7;
l5=si0;
si0=l9;
l10=si0;
si0=l2;
l13=si0;
L67:;
{
si0=l10;
sj0=i64_load(&i->m0,(U64)si0);
l25=sj0;
si1=l13;
sj1=i64_load(&i->m0,(U64)si1);
sj0+=sj1;
l23=sj0;
sj1=l25;
si0=sj0 < sj1;
l18=si0;
si0=l6;
si1=255U;
si0&=si1;
if(si0){
goto L69;
}
si0=l18;
l6=si0;
goto L68;
L69:;
si0=l18;
sj1=l23;
sj2=1ULL;
sj1+=sj2;
l23=sj1;
si1=!(sj1);
si0|=si1;
l6=si0;
L68:;
si0=l10;
sj1=l23;
i64_store(&i->m0,(U64)si0,sj1);
si0=l10;
si1=8U;
si0+=si1;
l10=si0;
si0=l13;
si1=8U;
si0+=si1;
l13=si0;
si0=l5;
si1=-1U;
si0+=si1;
l5=si0;
if(si0){
goto L67;
}
}
si0=l6;
si0=!(si0);
if(si0){
goto L70;
}
si0=l22;
si1=l22;
sj1=i64_load(&i->m0,(U64)si1);
sj2=1ULL;
sj1+=sj2;
i64_store(&i->m0,(U64)si0,sj1);
L70:;
sj0=l26;
sj1=l19;
sj0+=sj1;
l26=sj0;
si0=l24;
si1=2U;
si0+=si1;
l24=si0;
si1=l4;
si0=si0 < si1;
if(si0){
goto L61;
}
}
L60:;
si0=l15;
si1=l4;
si2=3U;
si1<<=(si2&31);
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l18=si0;
si0=l16;
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l10=si0;
si0=l11;
sj1=l12;
i64_store(&i->m0,(U64)si0+16U,sj1);
sj0=l12;
sj1=0ULL;
si0=sj0 == sj1;
if(si0){
goto L49;
}
si0=l10;
si1=l3;
si0=si0 > si1;
if(si0){
goto L48;
}
si0=l10;
if(si0){
goto L72;
}
sj0=0ULL;
l23=sj0;
goto L71;
L72:;
si0=l10;
si1=1U;
si0&=si1;
l24=si0;
sj0=0ULL;
sj1=l12;
sj0-=sj1;
sj1=63ULL;
sj0&=sj1;
l25=sj0;
si0=l10;
si1=1U;
si0=si0 != si1;
if(si0){
goto L74;
}
si0=0U;
l6=si0;
sj0=0ULL;
l23=sj0;
goto L73;
L74:;
si0=l10;
si1=-2U;
si0&=si1;
l5=si0;
si0=0U;
l6=si0;
sj0=0ULL;
l23=sj0;
si0=l18;
l10=si0;
si0=l2;
l13=si0;
L75:;
{
si0=l13;
si1=l10;
sj1=i64_load(&i->m0,(U64)si1);
l26=sj1;
sj2=l12;
sj1<<=(sj2&63);
sj2=l23;
sj1|=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l13;
si1=8U;
si0+=si1;
si1=l10;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
l23=sj1;
sj2=l12;
sj1<<=(sj2&63);
sj2=l26;
sj3=l25;
sj2>>=(sj3&63);
sj1|=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l10;
si1=16U;
si0+=si1;
l10=si0;
si0=l13;
si1=16U;
si0+=si1;
l13=si0;
sj0=l23;
sj1=l25;
sj0>>=(sj1&63);
l23=sj0;
si0=l5;
si1=l6;
si2=2U;
si1+=si2;
l6=si1;
si0=si0 != si1;
if(si0){
goto L75;
}
}
L73:;
si0=l24;
si0=!(si0);
if(si0){
goto L71;
}
si0=l2;
si1=l6;
si2=3U;
si1<<=(si2&31);
l10=si1;
si0+=si1;
si1=l18;
si2=l10;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
l26=sj1;
sj2=l12;
sj1<<=(sj2&63);
sj2=l23;
sj1|=sj2;
i64_store(&i->m0,(U64)si0,sj1);
sj0=l26;
sj1=l25;
sj0>>=(sj1&63);
l23=sj0;
L71:;
si0=l17;
si1=l3;
si0=si0 >= si1;
if(si0){
goto L46;
}
si0=l2;
si1=l17;
si2=3U;
si1<<=(si2&31);
si0+=si1;
sj1=l23;
i64_store(&i->m0,(U64)si0,sj1);
si0=l17;
si1=l1;
si0=si0 >= si1;
if(si0){
goto L47;
}
si0=0U;
l6=si0;
si0=l9;
si1=l0;
si2=l4;
si3=1U;
si2&=si3;
si0=si2?si0:si1;
l22=si0;
l10=si0;
si0=l2;
l13=si0;
si0=l17;
si1=1U;
si0+=si1;
l24=si0;
l5=si0;
L76:;
{
si0=l10;
sj0=i64_load(&i->m0,(U64)si0);
l25=sj0;
si1=l13;
sj1=i64_load(&i->m0,(U64)si1);
sj0+=sj1;
l23=sj0;
sj1=l25;
si0=sj0 < sj1;
l18=si0;
si0=l6;
si1=255U;
si0&=si1;
if(si0){
goto L78;
}
si0=l18;
l6=si0;
goto L77;
L78:;
si0=l18;
sj1=l23;
sj2=1ULL;
sj1+=sj2;
l23=sj1;
si1=!(sj1);
si0|=si1;
l6=si0;
L77:;
si0=l10;
sj1=l23;
i64_store(&i->m0,(U64)si0,sj1);
si0=l10;
si1=8U;
si0+=si1;
l10=si0;
si0=l13;
si1=8U;
si0+=si1;
l13=si0;
si0=l5;
si1=-1U;
si0+=si1;
l5=si0;
if(si0){
goto L76;
}
}
si0=l24;
si1=l1;
si0=si0 == si1;
si1=l6;
si2=1U;
si1^=si2;
si0|=si1;
if(si0){
goto L79;
}
si0=l22;
si1=l24;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l10=si0;
si1=l10;
sj1=i64_load(&i->m0,(U64)si1);
sj2=1ULL;
sj1+=sj2;
l23=sj1;
i64_store(&i->m0,(U64)si0,sj1);
sj0=l23;
sj1=0ULL;
si0=sj0 != sj1;
if(si0){
goto L79;
}
si0=l1;
si1=3U;
si0<<=(si1&31);
si1=l17;
si2=3U;
si1<<=(si2&31);
l10=si1;
si0-=si1;
si1=-16U;
si0+=si1;
l13=si0;
si0=l10;
si1=l22;
si0+=si1;
si1=16U;
si0+=si1;
l10=si0;
L80:;
{
si0=l13;
si0=!(si0);
if(si0){
goto L79;
}
si0=l10;
si1=l10;
sj1=i64_load(&i->m0,(U64)si1);
sj2=1ULL;
sj1+=sj2;
l23=sj1;
i64_store(&i->m0,(U64)si0,sj1);
si0=l13;
si1=-8U;
si0+=si1;
l13=si0;
si0=l10;
si1=8U;
si0+=si1;
l10=si0;
sj0=l23;
si0=!(sj0);
if(si0){
goto L80;
}
}
L79:;
si0=l0;
si1=-8U;
si0+=si1;
l5=si0;
si0=l9;
si1=-8U;
si0+=si1;
l18=si0;
si0=l1;
si1=3U;
si0<<=(si1&31);
l10=si0;
L83:;
{
si0=l10;
si0=!(si0);
if(si0){
goto L82;
}
si0=l5;
si1=l10;
si0+=si1;
l13=si0;
si0=l18;
si1=l10;
si0+=si1;
l6=si0;
si0=l10;
si1=-8U;
si0+=si1;
l10=si0;
si0=l6;
sj0=i64_load(&i->m0,(U64)si0);
l23=sj0;
si1=l13;
sj1=i64_load(&i->m0,(U64)si1);
l25=sj1;
si0=sj0 == sj1;
if(si0){
goto L83;
}
}
sj0=l23;
sj1=l25;
si0=sj0 <= sj1;
if(si0){
goto L81;
}
goto L38;
L82:;
si0=l10;
if(si0){
goto L38;
}
L81:;
si0=l1;
si1=l3;
si0=si0 > si1;
if(si0){
goto L86;
}
si0=l1;
si1=1U;
si0&=si1;
l4=si0;
si0=0U;
l22=si0;
si0=l20;
if(si0){
goto L85;
}
sj0=0ULL;
l23=sj0;
si0=0U;
l18=si0;
goto L84;
L86:;
si0=1202809U;
si1=34U;
si2=1203412U;
f604(i,si0,si1,si2);
UNREACHABLE;
L85:;
si0=l1;
si1=-2U;
si0&=si1;
l24=si0;
si0=0U;
l5=si0;
si0=l0;
l10=si0;
si0=l9;
l13=si0;
si0=l2;
l6=si0;
si0=0U;
l18=si0;
L87:;
{
si0=l6;
si1=l10;
sj1=i64_load(&i->m0,(U64)si1);
l23=sj1;
si2=l5;
sj2=(U64)(si2);
sj3=1ULL;
sj2&=sj3;
sj1-=sj2;
si2=l13;
sj2=i64_load(&i->m0,(U64)si2);
l25=sj2;
sj1-=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l6;
si1=8U;
si0+=si1;
si1=l10;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
l26=sj1;
sj2=l23;
sj3=l25;
si2=sj2 <= sj3;
sj3=l23;
sj4=l25;
si3=sj3 < sj4;
si4=l5;
si5=1U;
si4&=si5;
si2=si4?si2:si3;
l5=si2;
sj2=(U64)(si2);
sj1-=sj2;
si2=l13;
si3=8U;
si2+=si3;
sj2=i64_load(&i->m0,(U64)si2);
l23=sj2;
sj1-=sj2;
i64_store(&i->m0,(U64)si0,sj1);
sj0=l26;
sj1=l23;
si0=sj0 <= sj1;
sj1=l26;
sj2=l23;
si1=sj1 < sj2;
si2=l5;
si0=si2?si0:si1;
l5=si0;
si0=l10;
si1=16U;
si0+=si1;
l10=si0;
si0=l13;
si1=16U;
si0+=si1;
l13=si0;
si0=l6;
si1=16U;
si0+=si1;
l6=si0;
si0=l24;
si1=l18;
si2=2U;
si1+=si2;
l18=si1;
si0=si0 != si1;
if(si0){
goto L87;
}
}
sj0=0ULL;
si1=l5;
sj1=(U64)(si1);
sj0-=sj1;
l23=sj0;
L84:;
si0=l4;
si0=!(si0);
if(si0){
goto L37;
}
si0=l2;
si1=l18;
si2=3U;
si1<<=(si2&31);
l10=si1;
si0+=si1;
si1=l0;
si2=l10;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
sj2=l23;
sj1+=sj2;
si2=l9;
si3=l10;
si2+=si3;
sj2=i64_load(&i->m0,(U64)si2);
sj1-=sj2;
i64_store(&i->m0,(U64)si0,sj1);
goto L37;
L59:;
si0=l11;
si1=0U;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=1U;
si1=l11;
si2=16U;
si1+=si2;
si2=1198688U;
si3=l11;
si4=24U;
si3+=si4;
si4=1200292U;
f1251(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L58:;
si0=3U;
l24=si0;
si0=l14;
si1=3U;
si0=si0 > si1;
if(si0){
goto L44;
}
L57:;
si0=l24;
si1=l14;
si2=1199104U;
f594(i,si0,si1,si2);
UNREACHABLE;
L51:;
si0=l11;
si1=0U;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=1U;
si1=l11;
si2=16U;
si1+=si2;
si2=1198688U;
si3=l11;
si4=24U;
si3+=si4;
si4=1200292U;
f1251(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L50:;
si0=l10;
si1=l20;
si2=1200308U;
f597(i,si0,si1,si2);
UNREACHABLE;
L49:;
si0=l11;
si1=0U;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=1U;
si1=l11;
si2=16U;
si1+=si2;
si2=1198688U;
si3=l11;
si4=24U;
si3+=si4;
si4=1200292U;
f1251(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L48:;
si0=l10;
si1=l3;
si2=1200308U;
f597(i,si0,si1,si2);
UNREACHABLE;
L47:;
si0=1201588U;
si1=35U;
si2=1203200U;
f604(i,si0,si1,si2);
UNREACHABLE;
L46:;
si0=l17;
si1=l3;
si2=1199088U;
f594(i,si0,si1,si2);
UNREACHABLE;
L45:;
si0=l22;
si1=l2;
si2=l3;
si3=l15;
si3=i32_load(&i->m0,(U64)si3+24U);
si4=l15;
si5=28U;
si4+=si5;
si4=i32_load(&i->m0,(U64)si4);
sj5=l26;
sj1=f1021(i,si1,si2,si3,si4,sj5);
si2=l22;
sj2=i64_load(&i->m0,(U64)si2);
sj1+=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l7;
si1=l3;
si2=1199120U;
f597(i,si0,si1,si2);
UNREACHABLE;
L44:;
sj0=l26;
sj1=63ULL;
si0=sj0 > sj1;
if(si0){
goto L43;
}
si0=l15;
si1=28U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l10=si0;
si1=l3;
si0=si0 > si1;
if(si0){
goto L39;
}
sj0=0ULL;
l25=sj0;
si0=l10;
si0=!(si0);
if(si0){
goto L40;
}
si0=l15;
si0=i32_load(&i->m0,(U64)si0+24U);
l0=si0;
si0=l10;
si1=1U;
si0&=si1;
l18=si0;
sj0=0ULL;
sj1=l26;
sj0-=sj1;
sj1=63ULL;
sj0&=sj1;
l28=sj0;
si0=l10;
si1=1U;
si0=si0 != si1;
if(si0){
goto L42;
}
si0=0U;
l6=si0;
sj0=0ULL;
l25=sj0;
goto L41;
L43:;
si0=1200324U;
si1=36U;
si2=1200360U;
f604(i,si0,si1,si2);
UNREACHABLE;
L42:;
si0=l10;
si1=-2U;
si0&=si1;
l5=si0;
si0=0U;
l6=si0;
sj0=0ULL;
l25=sj0;
si0=l0;
l10=si0;
si0=l2;
l13=si0;
L88:;
{
si0=l13;
si1=l10;
sj1=i64_load(&i->m0,(U64)si1);
l19=sj1;
sj2=l26;
sj1<<=(sj2&63);
sj2=l25;
sj1|=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l13;
si1=8U;
si0+=si1;
si1=l10;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
l25=sj1;
sj2=l26;
sj1<<=(sj2&63);
sj2=l19;
sj3=l28;
sj2>>=(sj3&63);
sj1|=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l10;
si1=16U;
si0+=si1;
l10=si0;
si0=l13;
si1=16U;
si0+=si1;
l13=si0;
sj0=l25;
sj1=l28;
sj0>>=(sj1&63);
l25=sj0;
si0=l5;
si1=l6;
si2=2U;
si1+=si2;
l6=si1;
si0=si0 != si1;
if(si0){
goto L88;
}
}
L41:;
si0=l18;
si0=!(si0);
if(si0){
goto L40;
}
si0=l2;
si1=l6;
si2=3U;
si1<<=(si2&31);
l10=si1;
si0+=si1;
si1=l0;
si2=l10;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
l19=sj1;
sj2=l26;
sj1<<=(sj2&63);
sj2=l25;
sj1|=sj2;
i64_store(&i->m0,(U64)si0,sj1);
sj0=l19;
sj1=l28;
sj0>>=(sj1&63);
l25=sj0;
L40:;
si0=l22;
sj1=l23;
sj2=l25;
sj1+=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l11;
si1=l20;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l11;
si1=l7;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l11;
si1=0U;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=0U;
si1=l11;
si2=12U;
si1+=si2;
si2=l11;
si3=16U;
si2+=si3;
si3=l11;
si4=24U;
si3+=si4;
si4=1203184U;
f1250(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L39:;
si0=l10;
si1=l3;
si2=1200308U;
f597(i,si0,si1,si2);
UNREACHABLE;
L38:;
si0=l1;
si1=l3;
si0=si0 > si1;
if(si0){
goto L91;
}
si0=1U;
l22=si0;
si0=l1;
si1=1U;
si0&=si1;
l4=si0;
si0=l20;
if(si0){
goto L90;
}
si0=0U;
l18=si0;
sj0=0ULL;
l23=sj0;
goto L89;
L91:;
si0=1202809U;
si1=34U;
si2=1203412U;
f604(i,si0,si1,si2);
UNREACHABLE;
L90:;
si0=l1;
si1=-2U;
si0&=si1;
l24=si0;
si0=0U;
l5=si0;
si0=l9;
l10=si0;
si0=l0;
l13=si0;
si0=l2;
l6=si0;
si0=0U;
l18=si0;
L92:;
{
si0=l6;
si1=l10;
sj1=i64_load(&i->m0,(U64)si1);
l23=sj1;
si2=l5;
sj2=(U64)(si2);
sj3=1ULL;
sj2&=sj3;
sj1-=sj2;
si2=l13;
sj2=i64_load(&i->m0,(U64)si2);
l25=sj2;
sj1-=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l6;
si1=8U;
si0+=si1;
si1=l10;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
l26=sj1;
sj2=l23;
sj3=l25;
si2=sj2 <= sj3;
sj3=l23;
sj4=l25;
si3=sj3 < sj4;
si4=l5;
si5=1U;
si4&=si5;
si2=si4?si2:si3;
l5=si2;
sj2=(U64)(si2);
sj1-=sj2;
si2=l13;
si3=8U;
si2+=si3;
sj2=i64_load(&i->m0,(U64)si2);
l23=sj2;
sj1-=sj2;
i64_store(&i->m0,(U64)si0,sj1);
sj0=l26;
sj1=l23;
si0=sj0 <= sj1;
sj1=l26;
sj2=l23;
si1=sj1 < sj2;
si2=l5;
si0=si2?si0:si1;
l5=si0;
si0=l10;
si1=16U;
si0+=si1;
l10=si0;
si0=l13;
si1=16U;
si0+=si1;
l13=si0;
si0=l6;
si1=16U;
si0+=si1;
l6=si0;
si0=l24;
si1=l18;
si2=2U;
si1+=si2;
l18=si1;
si0=si0 != si1;
if(si0){
goto L92;
}
}
sj0=0ULL;
si1=l5;
sj1=(U64)(si1);
sj0-=sj1;
l23=sj0;
L89:;
si0=l4;
si0=!(si0);
if(si0){
goto L37;
}
si0=l2;
si1=l18;
si2=3U;
si1<<=(si2&31);
l10=si1;
si0+=si1;
si1=l9;
si2=l10;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
sj2=l23;
sj1+=sj2;
si2=l0;
si3=l10;
si2+=si3;
sj2=i64_load(&i->m0,(U64)si2);
sj1-=sj2;
i64_store(&i->m0,(U64)si0,sj1);
L37:;
si0=0U;
l10=si0;
L93:;
{
si0=l0;
sj0=i64_load(&i->m0,(U64)si0);
l25=sj0;
si1=l9;
sj1=i64_load(&i->m0,(U64)si1);
sj0+=sj1;
l23=sj0;
sj1=l25;
si0=sj0 < sj1;
l13=si0;
si0=l10;
si1=255U;
si0&=si1;
if(si0){
goto L95;
}
si0=l13;
l10=si0;
goto L94;
L95:;
si0=l13;
sj1=l23;
sj2=1ULL;
sj1+=sj2;
l23=sj1;
si1=!(sj1);
si0|=si1;
l10=si0;
L94:;
si0=l0;
sj1=l23;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=8U;
si0+=si1;
l0=si0;
si0=l9;
si1=8U;
si0+=si1;
l9=si0;
si0=l1;
si1=-1U;
si0+=si1;
l1=si0;
if(si0){
goto L93;
}
}
si0=l11;
si0=i32_load(&i->m0,(U64)si0+4U);
si0=!(si0);
if(si0){
goto L96;
}
si0=l15;
f15024(i,si0);
L96:;
si0=l11;
si1=48U;
si0+=si1;
i->g0=si0;
si0=l22;
L0:;
return si0;
}

U64 f1021(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U64 l4) {
U32 l5=0;
U64 l6=0;
U32 l7=0;
U64 l8=0;
U32 l9=0;
U32 l10=0;
U64 l11=0;
U32 si0,si1,si2,si3,si4;
U64 sj0,sj1,sj2,sj3;
si0=i->g0;
si1=32U;
si0-=si1;
l5=si0;
i->g0=si0;
si0=l5;
sj1=l4;
i64_store(&i->m0,(U64)si0,sj1);
sj0=l4;
sj1=0ULL;
si0=sj0 == sj1;
if(si0){
goto L2;
}
sj0=l4;
sj1=63ULL;
si0=sj0 > sj1;
if(si0){
goto L6;
}
si0=l3;
si1=l1;
si0=si0 > si1;
if(si0){
goto L1;
}
sj0=0ULL;
l6=sj0;
si0=l3;
si0=!(si0);
if(si0){
goto L3;
}
si0=l3;
si1=1U;
si0&=si1;
l7=si0;
sj0=0ULL;
sj1=l4;
sj0-=sj1;
sj1=63ULL;
sj0&=sj1;
l8=sj0;
si0=l3;
si1=1U;
si0=si0 != si1;
if(si0){
goto L5;
}
si0=0U;
l9=si0;
sj0=0ULL;
l6=sj0;
goto L4;
L6:;
si0=1200324U;
si1=36U;
si2=1200360U;
f604(i,si0,si1,si2);
UNREACHABLE;
L5:;
si0=l3;
si1=-2U;
si0&=si1;
l10=si0;
si0=0U;
l9=si0;
sj0=0ULL;
l6=sj0;
si0=l2;
l3=si0;
si0=l0;
l1=si0;
L7:;
{
si0=l1;
si1=l3;
sj1=i64_load(&i->m0,(U64)si1);
l11=sj1;
sj2=l4;
sj1<<=(sj2&63);
sj2=l6;
sj1|=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si1=8U;
si0+=si1;
si1=l3;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
l6=sj1;
sj2=l4;
sj1<<=(sj2&63);
sj2=l11;
sj3=l8;
sj2>>=(sj3&63);
sj1|=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=16U;
si0+=si1;
l3=si0;
si0=l1;
si1=16U;
si0+=si1;
l1=si0;
sj0=l6;
sj1=l8;
sj0>>=(sj1&63);
l6=sj0;
si0=l10;
si1=l9;
si2=2U;
si1+=si2;
l9=si1;
si0=si0 != si1;
if(si0){
goto L7;
}
}
L4:;
si0=l7;
si0=!(si0);
if(si0){
goto L3;
}
si0=l0;
si1=l9;
si2=3U;
si1<<=(si2&31);
l3=si1;
si0+=si1;
si1=l2;
si2=l3;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
l11=sj1;
sj2=l4;
sj1<<=(sj2&63);
sj2=l6;
sj1|=sj2;
i64_store(&i->m0,(U64)si0,sj1);
sj0=l11;
sj1=l8;
sj0>>=(sj1&63);
l6=sj0;
L3:;
si0=l5;
si1=32U;
si0+=si1;
i->g0=si0;
sj0=l6;
goto L0;
L2:;
si0=l5;
si1=0U;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=1U;
si1=l5;
si2=1198688U;
si3=l5;
si4=8U;
si3+=si4;
si4=1200292U;
f1251(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L1:;
si0=l3;
si1=l1;
si2=1200308U;
f597(i,si0,si1,si2);
UNREACHABLE;
L0:;
return sj0;
}

U32 f1022(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4,U32 l5,U32 l6,U32 l7,U64 l8,U32 l9,U32 l10) {
U32 l11=0;
U32 l12=0;
U32 l13=0;
U32 l14=0;
U32 l15=0;
U64 l16=0;
U64 l17=0;
U64 l18=0;
U32 l19=0;
U64 l20=0;
U64 l21=0;
U32 l22=0;
U64 l23=0;
U32 l24=0;
U32 l25=0;
U32 si0,si1,si2,si3,si4,si5;
U64 sj0,sj1,sj2,sj3,sj4;
si0=i->g0;
si1=64U;
si0-=si1;
l11=si0;
i->g0=si0;
si0=l11;
sj1=l8;
i64_store(&i->m0,(U64)si0+8U,sj1);
sj0=l8;
sj1=0ULL;
si0=sj0 == sj1;
if(si0){
goto L15;
}
si0=l4;
si1=2U;
si0=si0 < si1;
if(si0){
goto L14;
}
si0=l11;
si1=l1;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l11;
si1=l7;
si2=1U;
si1+=si2;
l12=si1;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l12;
si1=l1;
si0=si0 != si1;
if(si0){
goto L13;
}
si0=l11;
si1=l10;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l11;
si1=l1;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l1;
si1=l10;
si0=si0 != si1;
if(si0){
goto L11;
}
si0=l7;
si0=!(si0);
if(si0){
goto L12;
}
si0=l11;
si1=l7;
i32_store(&i->m0,(U64)si0+48U,si1);
si0=l11;
si1=l6;
i32_store(&i->m0,(U64)si0+44U,si1);
si0=l11;
si1=l5;
i32_store(&i->m0,(U64)si0+40U,si1);
si0=l11;
si1=16U;
si0+=si1;
si1=l11;
si2=40U;
si1+=si2;
f1225(i,si0,si1);
si0=l11;
si1=l11;
si1=i32_load(&i->m0,(U64)si1+24U);
l13=si1;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l11;
si1=l4;
si2=1U;
si1+=si2;
l10=si1;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l13;
si1=l10;
si0=si0 != si1;
if(si0){
goto L10;
}
si0=l13;
si0=!(si0);
if(si0){
goto L7;
}
si0=l11;
si0=i32_load(&i->m0,(U64)si0+16U);
l14=si0;
si0=i32_load(&i->m0,(U64)si0+4U);
l10=si0;
si0=l14;
si0=i32_load(&i->m0,(U64)si0);
l15=si0;
si0=l11;
si1=l4;
sj1=(U64)(si1);
l16=sj1;
sj2=l8;
sj1*=sj2;
l17=sj1;
i64_store(&i->m0,(U64)si0+32U,sj1);
sj0=l17;
sj1=0ULL;
si0=sj0 == sj1;
if(si0){
goto L9;
}
sj0=l17;
sj1=63ULL;
si0=sj0 > sj1;
if(si0){
goto L19;
}
si0=l10;
si1=l1;
si0=si0 > si1;
if(si0){
goto L8;
}
sj0=0ULL;
l18=sj0;
si0=l10;
si0=!(si0);
if(si0){
goto L16;
}
si0=l10;
si1=1U;
si0&=si1;
l19=si0;
sj0=0ULL;
sj1=l17;
sj0-=sj1;
sj1=63ULL;
sj0&=sj1;
l20=sj0;
si0=l10;
si1=1U;
si0=si0 != si1;
if(si0){
goto L18;
}
si0=0U;
l6=si0;
sj0=0ULL;
l18=sj0;
goto L17;
L19:;
si0=1200324U;
si1=36U;
si2=1200360U;
f604(i,si0,si1,si2);
UNREACHABLE;
L18:;
si0=l10;
si1=-2U;
si0&=si1;
l5=si0;
si0=0U;
l6=si0;
sj0=0ULL;
l18=sj0;
si0=l15;
l10=si0;
si0=l0;
l12=si0;
L20:;
{
si0=l12;
si1=l10;
sj1=i64_load(&i->m0,(U64)si1);
l21=sj1;
sj2=l17;
sj1<<=(sj2&63);
sj2=l18;
sj1|=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l12;
si1=8U;
si0+=si1;
si1=l10;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
l18=sj1;
sj2=l17;
sj1<<=(sj2&63);
sj2=l21;
sj3=l20;
sj2>>=(sj3&63);
sj1|=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l10;
si1=16U;
si0+=si1;
l10=si0;
si0=l12;
si1=16U;
si0+=si1;
l12=si0;
sj0=l18;
sj1=l20;
sj0>>=(sj1&63);
l18=sj0;
si0=l5;
si1=l6;
si2=2U;
si1+=si2;
l6=si1;
si0=si0 != si1;
if(si0){
goto L20;
}
}
L17:;
si0=l19;
si0=!(si0);
if(si0){
goto L16;
}
si0=l0;
si1=l6;
si2=3U;
si1<<=(si2&31);
l10=si1;
si0+=si1;
si1=l15;
si2=l10;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
l21=sj1;
sj2=l17;
sj1<<=(sj2&63);
sj2=l18;
sj1|=sj2;
i64_store(&i->m0,(U64)si0,sj1);
sj0=l21;
sj1=l20;
sj0>>=(sj1&63);
l18=sj0;
L16:;
si0=l7;
si1=l1;
si0=si0 >= si1;
if(si0){
goto L4;
}
si0=l0;
si1=l7;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l15=si0;
sj1=l18;
i64_store(&i->m0,(U64)si0,sj1);
si0=l14;
si1=12U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l10=si0;
si0=l14;
si0=i32_load(&i->m0,(U64)si0+8U);
l19=si0;
si0=l11;
sj1=l16;
sj2=-1ULL;
sj1+=sj2;
sj2=l8;
sj1*=sj2;
l17=sj1;
i64_store(&i->m0,(U64)si0+32U,sj1);
sj0=l17;
sj1=0ULL;
si0=sj0 == sj1;
if(si0){
goto L6;
}
sj0=l17;
sj1=63ULL;
si0=sj0 > sj1;
if(si0){
goto L24;
}
si0=l10;
si1=l1;
si0=si0 > si1;
if(si0){
goto L5;
}
sj0=0ULL;
l20=sj0;
si0=l10;
si0=!(si0);
if(si0){
goto L21;
}
si0=l10;
si1=1U;
si0&=si1;
l22=si0;
sj0=0ULL;
sj1=l17;
sj0-=sj1;
sj1=63ULL;
sj0&=sj1;
l21=sj0;
si0=l10;
si1=1U;
si0=si0 != si1;
if(si0){
goto L23;
}
si0=0U;
l6=si0;
sj0=0ULL;
l20=sj0;
goto L22;
L24:;
si0=1200324U;
si1=36U;
si2=1200360U;
f604(i,si0,si1,si2);
UNREACHABLE;
L23:;
si0=l10;
si1=-2U;
si0&=si1;
l5=si0;
si0=0U;
l6=si0;
sj0=0ULL;
l20=sj0;
si0=l19;
l10=si0;
si0=l9;
l12=si0;
L25:;
{
si0=l12;
si1=l10;
sj1=i64_load(&i->m0,(U64)si1);
l23=sj1;
sj2=l17;
sj1<<=(sj2&63);
sj2=l20;
sj1|=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l12;
si1=8U;
si0+=si1;
si1=l10;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
l20=sj1;
sj2=l17;
sj1<<=(sj2&63);
sj2=l23;
sj3=l21;
sj2>>=(sj3&63);
sj1|=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l10;
si1=16U;
si0+=si1;
l10=si0;
si0=l12;
si1=16U;
si0+=si1;
l12=si0;
sj0=l20;
sj1=l21;
sj0>>=(sj1&63);
l20=sj0;
si0=l5;
si1=l6;
si2=2U;
si1+=si2;
l6=si1;
si0=si0 != si1;
if(si0){
goto L25;
}
}
L22:;
si0=l22;
si0=!(si0);
if(si0){
goto L21;
}
si0=l9;
si1=l6;
si2=3U;
si1<<=(si2&31);
l10=si1;
si0+=si1;
si1=l19;
si2=l10;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
l23=sj1;
sj2=l17;
sj1<<=(sj2&63);
sj2=l20;
sj1|=sj2;
i64_store(&i->m0,(U64)si0,sj1);
sj0=l23;
sj1=l21;
sj0>>=(sj1&63);
l20=sj0;
L21:;
si0=l9;
si1=l7;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l19=si0;
sj1=l20;
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=1U;
si0&=si1;
if(si0){
goto L26;
}
si0=l13;
si1=l4;
si0=si0 <= si1;
if(si0){
goto L28;
}
si0=l14;
si1=l4;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l10=si0;
si0=i32_load(&i->m0,(U64)si0+4U);
l22=si0;
si1=l1;
si0=si0 > si1;
if(si0){
goto L3;
}
si0=l22;
si0=!(si0);
if(si0){
goto L29;
}
si0=l10;
si0=i32_load(&i->m0,(U64)si0);
l12=si0;
si0=l0;
si1=l22;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l24=si0;
si0=0U;
l6=si0;
si0=l22;
l5=si0;
si0=l0;
l10=si0;
L30:;
{
si0=l10;
sj0=i64_load(&i->m0,(U64)si0);
l18=sj0;
si1=l12;
sj1=i64_load(&i->m0,(U64)si1);
sj0+=sj1;
l17=sj0;
sj1=l18;
si0=sj0 < sj1;
l7=si0;
si0=l6;
si1=255U;
si0&=si1;
if(si0){
goto L32;
}
si0=l7;
l6=si0;
goto L31;
L32:;
si0=l7;
sj1=l17;
sj2=1ULL;
sj1+=sj2;
l17=sj1;
si1=!(sj1);
si0|=si1;
l6=si0;
L31:;
si0=l10;
sj1=l17;
i64_store(&i->m0,(U64)si0,sj1);
si0=l10;
si1=8U;
si0+=si1;
l10=si0;
si0=l12;
si1=8U;
si0+=si1;
l12=si0;
si0=l5;
si1=-1U;
si0+=si1;
l5=si0;
if(si0){
goto L30;
}
}
si0=l22;
si1=l1;
si0=si0 == si1;
l10=si0;
if(si0){
goto L33;
}
si0=l6;
si1=1U;
si0^=si1;
if(si0){
goto L33;
}
si0=l24;
si1=l24;
sj1=i64_load(&i->m0,(U64)si1);
sj2=1ULL;
sj1+=sj2;
l17=sj1;
i64_store(&i->m0,(U64)si0,sj1);
sj0=l17;
sj1=0ULL;
si0=sj0 != sj1;
if(si0){
goto L29;
}
si0=l1;
si1=3U;
si0<<=(si1&31);
si1=l22;
si2=3U;
si1<<=(si2&31);
l10=si1;
si0-=si1;
si1=-8U;
si0+=si1;
l12=si0;
si0=l10;
si1=l0;
si0+=si1;
si1=8U;
si0+=si1;
l10=si0;
L34:;
{
si0=l12;
si0=!(si0);
if(si0){
goto L27;
}
si0=l10;
si1=l10;
sj1=i64_load(&i->m0,(U64)si1);
sj2=1ULL;
sj1+=sj2;
l17=sj1;
i64_store(&i->m0,(U64)si0,sj1);
si0=l12;
si1=-8U;
si0+=si1;
l12=si0;
si0=l10;
si1=8U;
si0+=si1;
l10=si0;
sj0=l17;
si0=!(sj0);
if(si0){
goto L34;
}
goto L29;
}
L33:;
si0=l10;
si1=l6;
si0&=si1;
if(si0){
goto L27;
}
L29:;
si0=l4;
si1=-1U;
si0+=si1;
l25=si0;
goto L1;
L28:;
si0=l4;
si1=l13;
si2=1199380U;
f594(i,si0,si1,si2);
UNREACHABLE;
L27:;
si0=1199396U;
si1=91U;
si2=1199488U;
f604(i,si0,si1,si2);
UNREACHABLE;
L26:;
si0=l13;
si1=l4;
si0=si0 > si1;
if(si0){
goto L2;
}
si0=l4;
si1=l13;
si2=1199504U;
f594(i,si0,si1,si2);
UNREACHABLE;
L15:;
si0=l11;
si1=0U;
i32_store(&i->m0,(U64)si0+40U,si1);
si0=1U;
si1=l11;
si2=8U;
si1+=si2;
si2=1198688U;
si3=l11;
si4=40U;
si3+=si4;
si4=1199316U;
f1251(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L14:;
si0=1199804U;
si1=28U;
si2=1199832U;
f604(i,si0,si1,si2);
UNREACHABLE;
L13:;
si0=l11;
si1=0U;
i32_store(&i->m0,(U64)si0+40U,si1);
si0=0U;
si1=l11;
si2=32U;
si1+=si2;
si2=l11;
si3=16U;
si2+=si3;
si3=l11;
si4=40U;
si3+=si4;
si4=1199788U;
f1250(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L12:;
si0=l11;
si1=52U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l11;
si1=1U;
i32_store(&i->m0,(U64)si0+44U,si1);
si0=l11;
si1=1197040U;
i32_store(&i->m0,(U64)si0+40U,si1);
si0=l11;
si1=1197012U;
i32_store(&i->m0,(U64)si0+48U,si1);
si0=l11;
si1=40U;
si0+=si1;
si1=1199332U;
f614(i,si0,si1);
UNREACHABLE;
L11:;
si0=l11;
si1=0U;
i32_store(&i->m0,(U64)si0+40U,si1);
si0=0U;
si1=l11;
si2=32U;
si1+=si2;
si2=l11;
si3=16U;
si2+=si3;
si3=l11;
si4=40U;
si3+=si4;
si4=1199772U;
f1250(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L10:;
si0=l11;
si1=0U;
i32_store(&i->m0,(U64)si0+40U,si1);
si0=0U;
si1=l11;
si2=28U;
si1+=si2;
si2=l11;
si3=32U;
si2+=si3;
si3=l11;
si4=40U;
si3+=si4;
si4=1199756U;
f1250(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L9:;
si0=l11;
si1=0U;
i32_store(&i->m0,(U64)si0+40U,si1);
si0=1U;
si1=l11;
si2=32U;
si1+=si2;
si2=1198688U;
si3=l11;
si4=40U;
si3+=si4;
si4=1200292U;
f1251(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L8:;
si0=l10;
si1=l1;
si2=1200308U;
f597(i,si0,si1,si2);
UNREACHABLE;
L7:;
si0=0U;
si1=0U;
si2=1199348U;
f594(i,si0,si1,si2);
UNREACHABLE;
L6:;
si0=l11;
si1=0U;
i32_store(&i->m0,(U64)si0+40U,si1);
si0=1U;
si1=l11;
si2=32U;
si1+=si2;
si2=1198688U;
si3=l11;
si4=40U;
si3+=si4;
si4=1200292U;
f1251(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L5:;
si0=l10;
si1=l1;
si2=1200308U;
f597(i,si0,si1,si2);
UNREACHABLE;
L4:;
si0=l7;
si1=l1;
si2=1199364U;
f594(i,si0,si1,si2);
UNREACHABLE;
L3:;
si0=1201588U;
si1=35U;
si2=1203200U;
f604(i,si0,si1,si2);
UNREACHABLE;
L2:;
si0=l14;
si1=l4;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l10=si0;
si0=i32_load(&i->m0,(U64)si0+4U);
l22=si0;
si1=l1;
si0=si0 > si1;
if(si0){
goto L36;
}
si0=l22;
si0=!(si0);
if(si0){
goto L35;
}
si0=l10;
si0=i32_load(&i->m0,(U64)si0);
l12=si0;
si0=l9;
si1=l22;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l24=si0;
si0=0U;
l6=si0;
si0=l22;
l5=si0;
si0=l9;
l10=si0;
L37:;
{
si0=l10;
sj0=i64_load(&i->m0,(U64)si0);
l20=sj0;
si1=l12;
sj1=i64_load(&i->m0,(U64)si1);
sj0+=sj1;
l17=sj0;
sj1=l20;
si0=sj0 < sj1;
l7=si0;
si0=l6;
si1=255U;
si0&=si1;
if(si0){
goto L39;
}
si0=l7;
l6=si0;
goto L38;
L39:;
si0=l7;
sj1=l17;
sj2=1ULL;
sj1+=sj2;
l17=sj1;
si1=!(sj1);
si0|=si1;
l6=si0;
L38:;
si0=l10;
sj1=l17;
i64_store(&i->m0,(U64)si0,sj1);
si0=l10;
si1=8U;
si0+=si1;
l10=si0;
si0=l12;
si1=8U;
si0+=si1;
l12=si0;
si0=l5;
si1=-1U;
si0+=si1;
l5=si0;
if(si0){
goto L37;
}
}
si0=l22;
si1=l1;
si0=si0 == si1;
l10=si0;
if(si0){
goto L41;
}
si0=l6;
si1=1U;
si0^=si1;
if(si0){
goto L41;
}
si0=l24;
si1=l24;
sj1=i64_load(&i->m0,(U64)si1);
sj2=1ULL;
sj1+=sj2;
l17=sj1;
i64_store(&i->m0,(U64)si0,sj1);
sj0=l17;
sj1=0ULL;
si0=sj0 != sj1;
if(si0){
goto L35;
}
si0=l1;
si1=3U;
si0<<=(si1&31);
si1=l22;
si2=3U;
si1<<=(si2&31);
l10=si1;
si0-=si1;
si1=-8U;
si0+=si1;
l12=si0;
si0=l10;
si1=l9;
si0+=si1;
si1=8U;
si0+=si1;
l10=si0;
L42:;
{
si0=l12;
si0=!(si0);
if(si0){
goto L40;
}
si0=l10;
si1=l10;
sj1=i64_load(&i->m0,(U64)si1);
sj2=1ULL;
sj1+=sj2;
l17=sj1;
i64_store(&i->m0,(U64)si0,sj1);
si0=l12;
si1=-8U;
si0+=si1;
l12=si0;
si0=l10;
si1=8U;
si0+=si1;
l10=si0;
sj0=l17;
si0=!(sj0);
if(si0){
goto L42;
}
goto L35;
}
L41:;
si0=l10;
si1=l6;
si0&=si1;
si0=!(si0);
if(si0){
goto L35;
}
L40:;
si0=1199652U;
si1=87U;
si2=1199740U;
f604(i,si0,si1,si2);
UNREACHABLE;
L36:;
si0=1201588U;
si1=35U;
si2=1203200U;
f604(i,si0,si1,si2);
UNREACHABLE;
L35:;
si0=l14;
si1=l4;
si2=-1U;
si1+=si2;
l25=si1;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l10=si0;
si0=i32_load(&i->m0,(U64)si0+4U);
l6=si0;
si1=l3;
si0=si0 <= si1;
if(si0){
goto L43;
}
si0=l6;
si1=l3;
si2=1199284U;
f597(i,si0,si1,si2);
UNREACHABLE;
L43:;
sj0=l8;
sj1=63ULL;
si0=sj0 > sj1;
if(si0){
goto L48;
}
si0=l6;
if(si0){
goto L49;
}
si0=0U;
l5=si0;
sj0=0ULL;
l20=sj0;
goto L45;
L49:;
si0=l10;
si0=i32_load(&i->m0,(U64)si0);
l22=si0;
si0=l6;
si1=1U;
si0&=si1;
l4=si0;
sj0=0ULL;
l20=sj0;
sj0=0ULL;
sj1=l8;
sj0-=sj1;
sj1=63ULL;
sj0&=sj1;
l17=sj0;
si0=l6;
si1=1U;
si0=si0 != si1;
if(si0){
goto L47;
}
si0=0U;
l5=si0;
goto L46;
L48:;
si0=1200324U;
si1=36U;
si2=1200360U;
f604(i,si0,si1,si2);
UNREACHABLE;
L47:;
si0=l6;
si1=-2U;
si0&=si1;
l7=si0;
si0=0U;
l5=si0;
sj0=0ULL;
l20=sj0;
si0=l22;
l10=si0;
si0=l2;
l12=si0;
L50:;
{
si0=l12;
si1=l10;
sj1=i64_load(&i->m0,(U64)si1);
l18=sj1;
sj2=l8;
sj1<<=(sj2&63);
sj2=l20;
sj1|=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l12;
si1=8U;
si0+=si1;
si1=l10;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
l20=sj1;
sj2=l8;
sj1<<=(sj2&63);
sj2=l18;
sj3=l17;
sj2>>=(sj3&63);
sj1|=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l10;
si1=16U;
si0+=si1;
l10=si0;
si0=l12;
si1=16U;
si0+=si1;
l12=si0;
sj0=l20;
sj1=l17;
sj0>>=(sj1&63);
l20=sj0;
si0=l7;
si1=l5;
si2=2U;
si1+=si2;
l5=si1;
si0=si0 != si1;
if(si0){
goto L50;
}
}
L46:;
si0=l4;
si0=!(si0);
if(si0){
goto L51;
}
si0=l2;
si1=l5;
si2=3U;
si1<<=(si2&31);
l10=si1;
si0+=si1;
si1=l22;
si2=l10;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
l18=sj1;
sj2=l8;
sj1<<=(sj2&63);
sj2=l20;
sj1|=sj2;
i64_store(&i->m0,(U64)si0,sj1);
sj0=l18;
sj1=l17;
sj0>>=(sj1&63);
l20=sj0;
L51:;
si0=l6;
si1=l1;
si0=si0 > si1;
if(si0){
goto L44;
}
si0=0U;
l5=si0;
si0=l0;
l10=si0;
si0=l2;
l12=si0;
L52:;
{
si0=l10;
sj0=i64_load(&i->m0,(U64)si0);
l18=sj0;
si1=l12;
sj1=i64_load(&i->m0,(U64)si1);
sj0+=sj1;
l17=sj0;
sj1=l18;
si0=sj0 < sj1;
l7=si0;
si0=l5;
si1=255U;
si0&=si1;
if(si0){
goto L54;
}
si0=l7;
l5=si0;
goto L53;
L54:;
si0=l7;
sj1=l17;
sj2=1ULL;
sj1+=sj2;
l17=sj1;
si1=!(sj1);
si0|=si1;
l5=si0;
L53:;
si0=l10;
sj1=l17;
i64_store(&i->m0,(U64)si0,sj1);
si0=l10;
si1=8U;
si0+=si1;
l10=si0;
si0=l12;
si1=8U;
si0+=si1;
l12=si0;
si0=l6;
si1=-1U;
si0+=si1;
l6=si0;
if(si0){
goto L52;
}
}
si0=l15;
sj0=i64_load(&i->m0,(U64)si0);
l18=sj0;
L45:;
si0=l15;
sj1=l20;
si2=l5;
sj2=(U64)(si2);
sj1+=sj2;
sj2=l18;
sj1+=sj2;
i64_store(&i->m0,(U64)si0,sj1);
goto L1;
L44:;
si0=l6;
si1=l1;
si2=1199300U;
f597(i,si0,si1,si2);
UNREACHABLE;
L1:;
si0=l25;
si1=3U;
si0=si0 < si1;
if(si0){
goto L55;
}
sj0=l16;
sj1=-2ULL;
sj0+=sj1;
sj1=l8;
sj0*=sj1;
l20=sj0;
si0=2U;
l4=si0;
L56:;
{
si0=l4;
si1=l13;
si0=si0 < si1;
if(si0){
goto L57;
}
si0=l4;
si1=l13;
si2=1199620U;
f594(i,si0,si1,si2);
UNREACHABLE;
L57:;
si0=l14;
si1=l4;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l10=si0;
si0=i32_load(&i->m0,(U64)si0+4U);
l6=si0;
si1=l3;
si0=si0 > si1;
if(si0){
goto L63;
}
si0=l10;
si0=i32_load(&i->m0,(U64)si0);
l22=si0;
si0=l11;
sj1=l20;
i64_store(&i->m0,(U64)si0+32U,sj1);
sj0=l20;
sj1=0ULL;
si0=sj0 == sj1;
if(si0){
goto L62;
}
sj0=l20;
sj1=63ULL;
si0=sj0 > sj1;
if(si0){
goto L61;
}
si0=l6;
si0=!(si0);
if(si0){
goto L60;
}
si0=l6;
si1=1U;
si0&=si1;
l24=si0;
sj0=0ULL;
l21=sj0;
sj0=0ULL;
sj1=l20;
sj0-=sj1;
sj1=63ULL;
sj0&=sj1;
l17=sj0;
si0=0U;
l5=si0;
si0=l6;
si1=1U;
si0=si0 == si1;
if(si0){
goto L64;
}
si0=l6;
si1=-2U;
si0&=si1;
l7=si0;
si0=0U;
l5=si0;
sj0=0ULL;
l21=sj0;
si0=l22;
l10=si0;
si0=l2;
l12=si0;
L65:;
{
si0=l12;
si1=l10;
sj1=i64_load(&i->m0,(U64)si1);
l18=sj1;
sj2=l20;
sj1<<=(sj2&63);
sj2=l21;
sj1|=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l12;
si1=8U;
si0+=si1;
si1=l10;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
l21=sj1;
sj2=l20;
sj1<<=(sj2&63);
sj2=l18;
sj3=l17;
sj2>>=(sj3&63);
sj1|=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l10;
si1=16U;
si0+=si1;
l10=si0;
si0=l12;
si1=16U;
si0+=si1;
l12=si0;
sj0=l21;
sj1=l17;
sj0>>=(sj1&63);
l21=sj0;
si0=l7;
si1=l5;
si2=2U;
si1+=si2;
l5=si1;
si0=si0 != si1;
if(si0){
goto L65;
}
}
L64:;
si0=l24;
si0=!(si0);
if(si0){
goto L66;
}
si0=l2;
si1=l5;
si2=3U;
si1<<=(si2&31);
l10=si1;
si0+=si1;
si1=l22;
si2=l10;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
l18=sj1;
sj2=l20;
sj1<<=(sj2&63);
sj2=l21;
sj1|=sj2;
i64_store(&i->m0,(U64)si0,sj1);
sj0=l18;
sj1=l17;
sj0>>=(sj1&63);
l21=sj0;
L66:;
si0=l6;
si1=l1;
si0=si0 > si1;
if(si0){
goto L59;
}
si0=0U;
l5=si0;
si0=l0;
l10=si0;
si0=l2;
l12=si0;
L67:;
{
si0=l10;
sj0=i64_load(&i->m0,(U64)si0);
l18=sj0;
si1=l12;
sj1=i64_load(&i->m0,(U64)si1);
sj0+=sj1;
l17=sj0;
sj1=l18;
si0=sj0 < sj1;
l7=si0;
si0=l5;
si1=255U;
si0&=si1;
if(si0){
goto L69;
}
si0=l7;
l5=si0;
goto L68;
L69:;
si0=l7;
sj1=l17;
sj2=1ULL;
sj1+=sj2;
l17=sj1;
si1=!(sj1);
si0|=si1;
l5=si0;
L68:;
si0=l10;
sj1=l17;
i64_store(&i->m0,(U64)si0,sj1);
si0=l10;
si1=8U;
si0+=si1;
l10=si0;
si0=l12;
si1=8U;
si0+=si1;
l12=si0;
si0=l6;
si1=-1U;
si0+=si1;
l6=si0;
if(si0){
goto L67;
}
goto L58;
}
L63:;
si0=l6;
si1=l3;
si2=1199284U;
f597(i,si0,si1,si2);
UNREACHABLE;
L62:;
si0=l11;
si1=0U;
i32_store(&i->m0,(U64)si0+40U,si1);
si0=1U;
si1=l11;
si2=32U;
si1+=si2;
si2=1198688U;
si3=l11;
si4=40U;
si3+=si4;
si4=1200292U;
f1251(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L61:;
si0=1200324U;
si1=36U;
si2=1200360U;
f604(i,si0,si1,si2);
UNREACHABLE;
L60:;
si0=0U;
l5=si0;
sj0=0ULL;
l21=sj0;
goto L58;
L59:;
si0=l6;
si1=l1;
si2=1199300U;
f597(i,si0,si1,si2);
UNREACHABLE;
L58:;
si0=l15;
sj1=l21;
si2=l5;
sj2=(U64)(si2);
sj1+=sj2;
si2=l15;
sj2=i64_load(&i->m0,(U64)si2);
sj1+=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=1U;
si0|=si1;
l10=si0;
si1=l13;
si0=si0 >= si1;
if(si0){
goto L76;
}
si0=l14;
si1=l10;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l10=si0;
si0=i32_load(&i->m0,(U64)si0+4U);
l6=si0;
si1=l3;
si0=si0 > si1;
if(si0){
goto L75;
}
si0=l10;
si0=i32_load(&i->m0,(U64)si0);
l22=si0;
si0=l11;
sj1=l20;
sj2=l8;
sj1-=sj2;
l21=sj1;
i64_store(&i->m0,(U64)si0+32U,sj1);
sj0=l20;
sj1=l8;
si0=sj0 == sj1;
if(si0){
goto L74;
}
sj0=l21;
sj1=63ULL;
si0=sj0 > sj1;
if(si0){
goto L73;
}
si0=l6;
si0=!(si0);
if(si0){
goto L72;
}
si0=l6;
si1=1U;
si0&=si1;
l24=si0;
sj0=0ULL;
l20=sj0;
sj0=0ULL;
sj1=l21;
sj0-=sj1;
sj1=63ULL;
sj0&=sj1;
l17=sj0;
si0=0U;
l5=si0;
si0=l6;
si1=1U;
si0=si0 == si1;
if(si0){
goto L77;
}
si0=l6;
si1=-2U;
si0&=si1;
l7=si0;
si0=0U;
l5=si0;
sj0=0ULL;
l20=sj0;
si0=l22;
l10=si0;
si0=l2;
l12=si0;
L78:;
{
si0=l12;
si1=l10;
sj1=i64_load(&i->m0,(U64)si1);
l18=sj1;
sj2=l21;
sj1<<=(sj2&63);
sj2=l20;
sj1|=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l12;
si1=8U;
si0+=si1;
si1=l10;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
l20=sj1;
sj2=l21;
sj1<<=(sj2&63);
sj2=l18;
sj3=l17;
sj2>>=(sj3&63);
sj1|=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l10;
si1=16U;
si0+=si1;
l10=si0;
si0=l12;
si1=16U;
si0+=si1;
l12=si0;
sj0=l20;
sj1=l17;
sj0>>=(sj1&63);
l20=sj0;
si0=l7;
si1=l5;
si2=2U;
si1+=si2;
l5=si1;
si0=si0 != si1;
if(si0){
goto L78;
}
}
L77:;
si0=l24;
si0=!(si0);
if(si0){
goto L79;
}
si0=l2;
si1=l5;
si2=3U;
si1<<=(si2&31);
l10=si1;
si0+=si1;
si1=l22;
si2=l10;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
l18=sj1;
sj2=l21;
sj1<<=(sj2&63);
sj2=l20;
sj1|=sj2;
i64_store(&i->m0,(U64)si0,sj1);
sj0=l18;
sj1=l17;
sj0>>=(sj1&63);
l20=sj0;
L79:;
si0=l6;
si1=l1;
si0=si0 > si1;
if(si0){
goto L71;
}
si0=0U;
l5=si0;
si0=l9;
l10=si0;
si0=l2;
l12=si0;
L80:;
{
si0=l10;
sj0=i64_load(&i->m0,(U64)si0);
l18=sj0;
si1=l12;
sj1=i64_load(&i->m0,(U64)si1);
sj0+=sj1;
l17=sj0;
sj1=l18;
si0=sj0 < sj1;
l7=si0;
si0=l5;
si1=255U;
si0&=si1;
if(si0){
goto L82;
}
si0=l7;
l5=si0;
goto L81;
L82:;
si0=l7;
sj1=l17;
sj2=1ULL;
sj1+=sj2;
l17=sj1;
si1=!(sj1);
si0|=si1;
l5=si0;
L81:;
si0=l10;
sj1=l17;
i64_store(&i->m0,(U64)si0,sj1);
si0=l10;
si1=8U;
si0+=si1;
l10=si0;
si0=l12;
si1=8U;
si0+=si1;
l12=si0;
si0=l6;
si1=-1U;
si0+=si1;
l6=si0;
if(si0){
goto L80;
}
goto L70;
}
L76:;
si0=l10;
si1=l13;
si2=1199636U;
f594(i,si0,si1,si2);
UNREACHABLE;
L75:;
si0=l6;
si1=l3;
si2=1199284U;
f597(i,si0,si1,si2);
UNREACHABLE;
L74:;
si0=l11;
si1=0U;
i32_store(&i->m0,(U64)si0+40U,si1);
si0=1U;
si1=l11;
si2=32U;
si1+=si2;
si2=1198688U;
si3=l11;
si4=40U;
si3+=si4;
si4=1200292U;
f1251(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L73:;
si0=1200324U;
si1=36U;
si2=1200360U;
f604(i,si0,si1,si2);
UNREACHABLE;
L72:;
si0=0U;
l5=si0;
sj0=0ULL;
l20=sj0;
goto L70;
L71:;
si0=l6;
si1=l1;
si2=1199300U;
f597(i,si0,si1,si2);
UNREACHABLE;
L70:;
si0=l19;
sj1=l20;
si2=l5;
sj2=(U64)(si2);
sj1+=sj2;
si2=l19;
sj2=i64_load(&i->m0,(U64)si2);
sj1+=sj2;
i64_store(&i->m0,(U64)si0,sj1);
sj0=l21;
sj1=l8;
sj0-=sj1;
l20=sj0;
si0=l4;
si1=2U;
si0+=si1;
l4=si0;
si1=l25;
si0=si0 < si1;
if(si0){
goto L56;
}
}
L55:;
si0=l0;
si1=-8U;
si0+=si1;
l5=si0;
si0=l9;
si1=-8U;
si0+=si1;
l7=si0;
si0=l1;
si1=3U;
si0<<=(si1&31);
l10=si0;
L87:;
{
si0=l10;
si0=!(si0);
if(si0){
goto L86;
}
si0=l5;
si1=l10;
si0+=si1;
l12=si0;
si0=l7;
si1=l10;
si0+=si1;
l6=si0;
si0=l10;
si1=-8U;
si0+=si1;
l10=si0;
si0=l6;
sj0=i64_load(&i->m0,(U64)si0);
l17=sj0;
si1=l12;
sj1=i64_load(&i->m0,(U64)si1);
l18=sj1;
si0=sj0 == sj1;
if(si0){
goto L87;
}
}
sj0=l17;
sj1=l18;
si0=sj0 <= sj1;
if(si0){
goto L85;
}
goto L84;
L86:;
si0=l10;
if(si0){
goto L84;
}
L85:;
si0=l1;
si1=l3;
si0=si0 > si1;
if(si0){
goto L88;
}
si0=l1;
si1=1U;
si0&=si1;
l3=si0;
si0=0U;
l13=si0;
sj0=0ULL;
l17=sj0;
si0=0U;
l7=si0;
si0=l1;
si1=1U;
si0=si0 == si1;
if(si0){
goto L89;
}
si0=l1;
si1=-2U;
si0&=si1;
l4=si0;
si0=0U;
l5=si0;
si0=l0;
l10=si0;
si0=l9;
l12=si0;
si0=l2;
l6=si0;
si0=0U;
l7=si0;
L90:;
{
si0=l6;
si1=l10;
sj1=i64_load(&i->m0,(U64)si1);
l17=sj1;
si2=l5;
sj2=(U64)(si2);
sj3=1ULL;
sj2&=sj3;
sj1-=sj2;
si2=l12;
sj2=i64_load(&i->m0,(U64)si2);
l18=sj2;
sj1-=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l6;
si1=8U;
si0+=si1;
si1=l10;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
l20=sj1;
sj2=l17;
sj3=l18;
si2=sj2 <= sj3;
sj3=l17;
sj4=l18;
si3=sj3 < sj4;
si4=l5;
si5=1U;
si4&=si5;
si2=si4?si2:si3;
l5=si2;
sj2=(U64)(si2);
sj1-=sj2;
si2=l12;
si3=8U;
si2+=si3;
sj2=i64_load(&i->m0,(U64)si2);
l17=sj2;
sj1-=sj2;
i64_store(&i->m0,(U64)si0,sj1);
sj0=l20;
sj1=l17;
si0=sj0 <= sj1;
sj1=l20;
sj2=l17;
si1=sj1 < sj2;
si2=l5;
si0=si2?si0:si1;
l5=si0;
si0=l10;
si1=16U;
si0+=si1;
l10=si0;
si0=l12;
si1=16U;
si0+=si1;
l12=si0;
si0=l6;
si1=16U;
si0+=si1;
l6=si0;
si0=l4;
si1=l7;
si2=2U;
si1+=si2;
l7=si1;
si0=si0 != si1;
if(si0){
goto L90;
}
}
sj0=0ULL;
si1=l5;
sj1=(U64)(si1);
sj0-=sj1;
l17=sj0;
L89:;
si0=l3;
si0=!(si0);
if(si0){
goto L83;
}
si0=l2;
si1=l7;
si2=3U;
si1<<=(si2&31);
l10=si1;
si0+=si1;
si1=l0;
si2=l10;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
sj2=l17;
sj1+=sj2;
si2=l9;
si3=l10;
si2+=si3;
sj2=i64_load(&i->m0,(U64)si2);
sj1-=sj2;
i64_store(&i->m0,(U64)si0,sj1);
goto L83;
L88:;
si0=1202809U;
si1=34U;
si2=1203412U;
f604(i,si0,si1,si2);
UNREACHABLE;
L84:;
si0=l1;
si1=l3;
si0=si0 > si1;
if(si0){
goto L93;
}
si0=1U;
l13=si0;
si0=l1;
si1=1U;
si0&=si1;
l3=si0;
si0=l1;
si1=1U;
si0=si0 != si1;
if(si0){
goto L92;
}
si0=0U;
l7=si0;
sj0=0ULL;
l17=sj0;
goto L91;
L93:;
si0=1202809U;
si1=34U;
si2=1203412U;
f604(i,si0,si1,si2);
UNREACHABLE;
L92:;
si0=l1;
si1=-2U;
si0&=si1;
l4=si0;
si0=0U;
l5=si0;
si0=l9;
l10=si0;
si0=l0;
l12=si0;
si0=l2;
l6=si0;
si0=0U;
l7=si0;
L94:;
{
si0=l6;
si1=l10;
sj1=i64_load(&i->m0,(U64)si1);
l17=sj1;
si2=l5;
sj2=(U64)(si2);
sj3=1ULL;
sj2&=sj3;
sj1-=sj2;
si2=l12;
sj2=i64_load(&i->m0,(U64)si2);
l18=sj2;
sj1-=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l6;
si1=8U;
si0+=si1;
si1=l10;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
l20=sj1;
sj2=l17;
sj3=l18;
si2=sj2 <= sj3;
sj3=l17;
sj4=l18;
si3=sj3 < sj4;
si4=l5;
si5=1U;
si4&=si5;
si2=si4?si2:si3;
l5=si2;
sj2=(U64)(si2);
sj1-=sj2;
si2=l12;
si3=8U;
si2+=si3;
sj2=i64_load(&i->m0,(U64)si2);
l17=sj2;
sj1-=sj2;
i64_store(&i->m0,(U64)si0,sj1);
sj0=l20;
sj1=l17;
si0=sj0 <= sj1;
sj1=l20;
sj2=l17;
si1=sj1 < sj2;
si2=l5;
si0=si2?si0:si1;
l5=si0;
si0=l10;
si1=16U;
si0+=si1;
l10=si0;
si0=l12;
si1=16U;
si0+=si1;
l12=si0;
si0=l6;
si1=16U;
si0+=si1;
l6=si0;
si0=l4;
si1=l7;
si2=2U;
si1+=si2;
l7=si1;
si0=si0 != si1;
if(si0){
goto L94;
}
}
sj0=0ULL;
si1=l5;
sj1=(U64)(si1);
sj0-=sj1;
l17=sj0;
L91:;
si0=l3;
si0=!(si0);
if(si0){
goto L83;
}
si0=l2;
si1=l7;
si2=3U;
si1<<=(si2&31);
l10=si1;
si0+=si1;
si1=l9;
si2=l10;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
sj2=l17;
sj1+=sj2;
si2=l0;
si3=l10;
si2+=si3;
sj2=i64_load(&i->m0,(U64)si2);
sj1-=sj2;
i64_store(&i->m0,(U64)si0,sj1);
L83:;
si0=0U;
l10=si0;
L95:;
{
si0=l0;
sj0=i64_load(&i->m0,(U64)si0);
l18=sj0;
si1=l9;
sj1=i64_load(&i->m0,(U64)si1);
sj0+=sj1;
l17=sj0;
sj1=l18;
si0=sj0 < sj1;
l12=si0;
si0=l10;
si1=255U;
si0&=si1;
if(si0){
goto L97;
}
si0=l12;
l10=si0;
goto L96;
L97:;
si0=l12;
sj1=l17;
sj2=1ULL;
sj1+=sj2;
l17=sj1;
si1=!(sj1);
si0|=si1;
l10=si0;
L96:;
si0=l0;
sj1=l17;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=8U;
si0+=si1;
l0=si0;
si0=l9;
si1=8U;
si0+=si1;
l9=si0;
si0=l1;
si1=-1U;
si0+=si1;
l1=si0;
if(si0){
goto L95;
}
}
si0=l10;
if(si0){
goto L98;
}
si0=l11;
si0=i32_load(&i->m0,(U64)si0+20U);
si0=!(si0);
if(si0){
goto L99;
}
si0=l14;
f15024(i,si0);
L99:;
si0=l11;
si1=64U;
si0+=si1;
i->g0=si0;
si0=l13;
goto L0;
L98:;
si0=1199520U;
si1=82U;
si2=1199604U;
f604(i,si0,si1,si2);
UNREACHABLE;
L0:;
return si0;
}

void f1023(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U64 l4=0;
U32 l5=0;
U64 l6=0;
U32 l7=0;
U64 l8=0;
U32 l9=0;
U32 si0,si1,si2,si3;
U64 sj0,sj1,sj3;
si0=i->g0;
si1=32U;
si0-=si1;
l3=si0;
i->g0=si0;
si0=l1;
sj0=i64_load(&i->m0,(U64)si0+8U);
l4=sj0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
if(si0){
goto L11;
}
sj0=l4;
si0=!(sj0);
if(si0){
goto L10;
}
L11:;
sj0=l4;
sj1=32ULL;
sj0>>=(sj1&63);
l6=sj0;
si0=(U32)(sj0);
l7=si0;
si0=l2;
si0=!(si0);
if(si0){
goto L9;
}
si0=l5;
if(si0){
goto L4;
}
si0=0U;
l1=si0;
sj0=l4;
si0=!(sj0);
si0=!(si0);
if(si0){
goto L8;
}
sj0=0ULL;
l6=sj0;
goto L7;
L10:;
si0=l0;
sj1=0ULL;
i64_store(&i->m0,(U64)si0+8U,sj1);
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
goto L1;
L9:;
si0=l5;
if(si0){
goto L6;
}
si0=0U;
l2=si0;
goto L5;
L8:;
si0=l2;
sj0=(U64)(si0);
l8=sj0;
si0=l2;
si1=63U;
si0=si0 > si1;
if(si0){
goto L12;
}
sj0=l4;
sj1=l8;
sj0<<=(sj1&63);
l6=sj0;
sj1=l8;
sj0>>=(sj1&63);
sj1=l4;
si0=sj0 == sj1;
if(si0){
goto L7;
}
L12:;
si0=l3;
sj1=l4;
i64_store(&i->m0,(U64)si0+24U,sj1);
si0=1U;
l1=si0;
si0=l3;
si1=12U;
si0+=si1;
si1=l3;
si2=24U;
si1+=si2;
si2=1U;
sj3=l8;
f1024(i,si0,si1,si2,sj3);
si0=l3;
sj0=i64_load(&i->m0,(U64)si0+16U);
l6=sj0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+12U);
l2=si0;
L7:;
si0=l0;
sj1=l6;
i64_store(&i->m0,(U64)si0+8U,sj1);
si0=l0;
si1=l2;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l1;
i32_store(&i->m0,(U64)si0,si1);
goto L1;
L6:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
l9=si0;
si0=8U;
l1=si0;
si0=0U;
l2=si0;
si0=l7;
si0=!(si0);
if(si0){
goto L13;
}
si0=l7;
si1=268435455U;
si0=si0 > si1;
if(si0){
goto L3;
}
si0=l7;
si1=3U;
si0<<=(si1&31);
l5=si0;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L3;
}
si0=l5;
si0=!(si0);
if(si0){
goto L13;
}
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=l5;
si0=f15022(i,si0);
l1=si0;
si0=!(si0);
if(si0){
goto L2;
}
si0=l5;
l2=si0;
L13:;
si0=l1;
si1=l9;
si2=l2;
si0=f15143(i,si0,si1,si2);
sj0=l4;
sj1=-4294967296ULL;
sj0&=sj1;
sj1=l6;
sj0|=sj1;
l4=sj0;
si0=1U;
l2=si0;
L5:;
si0=l0;
sj1=l4;
i64_store(&i->m0,(U64)si0+8U,sj1);
si0=l0;
si1=l1;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l2;
i32_store(&i->m0,(U64)si0,si1);
goto L1;
L4:;
si0=l0;
si1=4U;
si0+=si1;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+4U);
si2=l7;
si3=l2;
sj3=(U64)(si3);
f1024(i,si0,si1,si2,sj3);
si0=l0;
si1=1U;
i32_store(&i->m0,(U64)si0,si1);
goto L1;
L3:;
f53(i);
UNREACHABLE;
L2:;
si0=8U;
si1=l5;
f52(i,si0,si1);
UNREACHABLE;
L1:;
si0=l3;
si1=32U;
si0+=si1;
i->g0=si0;
L0:;
}

void f1024(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U64 l3) {
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U64 l8=0;
U64 l9=0;
U64 l10=0;
U32 si0,si1,si2,si3;
U64 sj0,sj1;
si0=i->g0;
si1=16U;
si0-=si1;
l4=si0;
i->g0=si0;
sj0=l3;
sj1=274877906944ULL;
si0=sj0 >= sj1;
if(si0){
goto L5;
}
si0=8U;
l5=si0;
sj0=l3;
sj1=6ULL;
sj0>>=(sj1&63);
si0=(U32)(sj0);
l6=si0;
si0=!(si0);
if(si0){
goto L6;
}
si0=l6;
si1=268435455U;
si0=si0 > si1;
if(si0){
goto L4;
}
si0=l6;
si1=3U;
si0<<=(si1&31);
l7=si0;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L4;
}
si0=l7;
si0=!(si0);
if(si0){
goto L6;
}
si0=l7;
si1=1U;
si0=f15026(i,si0,si1);
l5=si0;
si0=!(si0);
if(si0){
goto L3;
}
L6:;
si0=l4;
si1=l6;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l4;
si1=l6;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l4;
si1=l5;
i32_store(&i->m0,(U64)si0+4U,si1);
sj0=l3;
sj1=63ULL;
sj0&=sj1;
l8=sj0;
sj1=0ULL;
si0=sj0 != sj1;
if(si0){
goto L7;
}
si0=l2;
si0=!(si0);
if(si0){
goto L8;
}
si0=l4;
si1=4U;
si0+=si1;
si1=l6;
si2=l2;
f1302(i,si0,si1,si2);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+4U);
l5=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+12U);
l6=si0;
L8:;
si0=l5;
si1=l6;
si2=3U;
si1<<=(si2&31);
si0+=si1;
si1=l1;
si2=l2;
si3=3U;
si2<<=(si3&31);
si0=f15143(i,si0,si1,si2);
si0=l6;
si1=l2;
si0+=si1;
l6=si0;
goto L2;
L7:;
si0=l2;
si0=!(si0);
if(si0){
goto L1;
}
si0=l2;
si1=3U;
si0<<=(si1&31);
l2=si0;
sj0=0ULL;
l9=sj0;
sj0=0ULL;
sj1=l3;
sj0-=sj1;
sj1=63ULL;
sj0&=sj1;
l10=sj0;
L9:;
{
si0=l1;
sj0=i64_load(&i->m0,(U64)si0);
l3=sj0;
sj1=l8;
sj0<<=(sj1&63);
sj1=l9;
sj0|=sj1;
l9=sj0;
si0=l6;
si1=l4;
si1=i32_load(&i->m0,(U64)si1+8U);
si0=si0 != si1;
if(si0){
goto L10;
}
si0=l4;
si1=4U;
si0+=si1;
si1=l6;
f1299(i,si0,si1);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+12U);
l6=si0;
L10:;
si0=l1;
si1=8U;
si0+=si1;
l1=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+4U);
si1=l6;
si2=3U;
si1<<=(si2&31);
si0+=si1;
sj1=l9;
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=l4;
si1=i32_load(&i->m0,(U64)si1+12U);
si2=1U;
si1+=si2;
l6=si1;
i32_store(&i->m0,(U64)si0+12U,si1);
sj0=l3;
sj1=l10;
sj0>>=(sj1&63);
l9=sj0;
si0=l2;
si1=-8U;
si0+=si1;
l2=si0;
if(si0){
goto L9;
}
}
sj0=l9;
si0=!(sj0);
if(si0){
goto L1;
}
si0=l6;
si1=l4;
si1=i32_load(&i->m0,(U64)si1+8U);
si0=si0 != si1;
if(si0){
goto L11;
}
si0=l4;
si1=4U;
si0+=si1;
si1=l6;
f1299(i,si0,si1);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+12U);
l6=si0;
L11:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+4U);
si1=l6;
si2=3U;
si1<<=(si2&31);
si0+=si1;
sj1=l9;
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+12U);
si1=1U;
si0+=si1;
l6=si0;
goto L2;
L5:;
si0=1197083U;
si1=43U;
si2=1197248U;
f604(i,si0,si1,si2);
UNREACHABLE;
L4:;
f53(i);
UNREACHABLE;
L3:;
si0=8U;
si1=l7;
f52(i,si0,si1);
UNREACHABLE;
L2:;
si0=l4;
si1=l6;
i32_store(&i->m0,(U64)si0+12U,si1);
L1:;
si0=l0;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1+4U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=8U;
si0+=si1;
si1=l4;
si2=4U;
si1+=si2;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=16U;
si0+=si1;
i->g0=si0;
L0:;
}

void f1025(rustpythonInstance*i,U32 l0,U64 l1) {
U64 l2=0;
U64 l3=0;
U32 l4=0;
U32 l5=0;
U64 l6=0;
U32 l7=0;
U32 l8=0;
U64 l9=0;
U32 si0,si1,si2;
U64 sj0,sj1,sj2,sj3;
sj0=0ULL;
l2=sj0;
sj0=l1;
sj1=63ULL;
sj0&=sj1;
l3=sj0;
si0=!(sj0);
if(si0){
goto L1;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+8U);
l4=si0;
si0=!(si0);
if(si0){
goto L1;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
sj0=0ULL;
l2=sj0;
sj0=0ULL;
sj1=l1;
sj0-=sj1;
sj1=63ULL;
sj0&=sj1;
l6=sj0;
si0=l4;
si1=-1U;
si0+=si1;
si1=536870911U;
si0&=si1;
l7=si0;
si1=1U;
si0+=si1;
l8=si0;
si1=3U;
si0&=si1;
l4=si0;
si0=l7;
si1=3U;
si0=si0 < si1;
if(si0){
goto L2;
}
si0=l8;
si1=1073741820U;
si0&=si1;
l7=si0;
sj0=0ULL;
l2=sj0;
L3:;
{
si0=l5;
si1=l5;
sj1=i64_load(&i->m0,(U64)si1);
l9=sj1;
sj2=l3;
sj1<<=(sj2&63);
sj2=l2;
sj1|=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=8U;
si0+=si1;
l8=si0;
si1=l8;
sj1=i64_load(&i->m0,(U64)si1);
l2=sj1;
sj2=l3;
sj1<<=(sj2&63);
sj2=l9;
sj3=l6;
sj2>>=(sj3&63);
sj1|=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=16U;
si0+=si1;
l8=si0;
si1=l8;
sj1=i64_load(&i->m0,(U64)si1);
l9=sj1;
sj2=l3;
sj1<<=(sj2&63);
sj2=l2;
sj3=l6;
sj2>>=(sj3&63);
sj1|=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=24U;
si0+=si1;
l8=si0;
si1=l8;
sj1=i64_load(&i->m0,(U64)si1);
l2=sj1;
sj2=l3;
sj1<<=(sj2&63);
sj2=l9;
sj3=l6;
sj2>>=(sj3&63);
sj1|=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=32U;
si0+=si1;
l5=si0;
sj0=l2;
sj1=l6;
sj0>>=(sj1&63);
l2=sj0;
si0=l7;
si1=-4U;
si0+=si1;
l7=si0;
if(si0){
goto L3;
}
}
L2:;
si0=l4;
si0=!(si0);
if(si0){
goto L1;
}
L4:;
{
si0=l5;
si1=l5;
sj1=i64_load(&i->m0,(U64)si1);
l9=sj1;
sj2=l3;
sj1<<=(sj2&63);
sj2=l2;
sj1|=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=8U;
si0+=si1;
l5=si0;
sj0=l9;
sj1=l6;
sj0>>=(sj1&63);
l2=sj0;
si0=l4;
si1=-1U;
si0+=si1;
l4=si0;
if(si0){
goto L4;
}
}
L1:;
sj0=l1;
sj1=274877906944ULL;
si0=sj0 >= sj1;
if(si0){
goto L5;
}
si0=l0;
sj1=l1;
sj2=6ULL;
sj1>>=(sj2&63);
si1=(U32)(sj1);
sj2=0ULL;
f1186(i,si0,si1,sj2);
sj0=l2;
si0=!(sj0);
if(si0){
goto L6;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+8U);
l5=si0;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+4U);
si0=si0 != si1;
if(si0){
goto L7;
}
si0=l0;
si1=l5;
f1299(i,si0,si1);
si0=l0;
si0=i32_load(&i->m0,(U64)si0+8U);
l5=si0;
L7:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
si1=l5;
si2=3U;
si1<<=(si2&31);
si0+=si1;
sj1=l2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+8U);
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0+8U,si1);
L6:;
goto L0;
L5:;
si0=1197083U;
si1=43U;
si2=1197248U;
f604(i,si0,si1,si2);
UNREACHABLE;
L0:;
}

U64 f1026(rustpythonInstance*i,U32 l0,U32 l1,U64 l2) {
U32 l3=0;
U64 l4=0;
U64 l5=0;
U64 l6=0;
U32 l7=0;
U32 l8=0;
U32 l9=0;
U32 l10=0;
U32 l11=0;
U64 l12=0;
U32 si0,si1,si2,si3,si4;
U64 sj0,sj1,sj2,sj3;
si0=i->g0;
si1=48U;
si0-=si1;
l3=si0;
i->g0=si0;
si0=l3;
sj1=l2;
i64_store(&i->m0,(U64)si0+8U,sj1);
sj0=l2;
sj1=0ULL;
si0=sj0 == sj1;
if(si0){
goto L3;
}
sj0=l2;
sj1=63ULL;
si0=sj0 > sj1;
if(si0){
goto L2;
}
si0=l3;
si1=l1;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l1;
si0=!(si0);
if(si0){
goto L1;
}
si0=l0;
sj0=i64_load(&i->m0,(U64)si0);
l4=sj0;
sj1=l2;
sj0>>=(sj1&63);
l5=sj0;
sj0=0ULL;
sj1=l2;
sj0-=sj1;
sj1=63ULL;
sj0&=sj1;
l6=sj0;
si0=1U;
l7=si0;
si0=l1;
si1=1U;
si0=si0 == si1;
if(si0){
goto L4;
}
si0=l1;
si1=-1U;
si0+=si1;
l8=si0;
si1=1U;
si0&=si1;
l9=si0;
si0=l1;
si1=2U;
si0=si0 == si1;
if(si0){
goto L5;
}
si0=l8;
si1=-2U;
si0&=si1;
l10=si0;
si0=0U;
l8=si0;
si0=l0;
l7=si0;
L6:;
{
si0=l7;
si1=l7;
si2=8U;
si1+=si2;
l11=si1;
sj1=i64_load(&i->m0,(U64)si1);
l12=sj1;
sj2=l6;
sj1<<=(sj2&63);
sj2=l5;
sj1|=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l11;
si1=l7;
si2=16U;
si1+=si2;
l7=si1;
sj1=i64_load(&i->m0,(U64)si1);
l5=sj1;
sj2=l6;
sj1<<=(sj2&63);
sj2=l12;
sj3=l2;
sj2>>=(sj3&63);
sj1|=sj2;
i64_store(&i->m0,(U64)si0,sj1);
sj0=l5;
sj1=l2;
sj0>>=(sj1&63);
l5=sj0;
si0=l10;
si1=l8;
si2=2U;
si1+=si2;
l8=si1;
si0=si0 != si1;
if(si0){
goto L6;
}
}
si0=l8;
si1=1U;
si0+=si1;
l7=si0;
L5:;
si0=l9;
si0=!(si0);
if(si0){
goto L4;
}
si0=l0;
si1=l7;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l7=si0;
si1=-8U;
si0+=si1;
si1=l7;
sj1=i64_load(&i->m0,(U64)si1);
l12=sj1;
sj2=l6;
sj1<<=(sj2&63);
sj2=l5;
sj1|=sj2;
i64_store(&i->m0,(U64)si0,sj1);
sj0=l12;
sj1=l2;
sj0>>=(sj1&63);
l5=sj0;
L4:;
si0=l1;
si1=3U;
si0<<=(si1&31);
si1=l0;
si0+=si1;
si1=-8U;
si0+=si1;
sj1=l5;
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=48U;
si0+=si1;
i->g0=si0;
sj0=l4;
sj1=l6;
sj0<<=(sj1&63);
goto L0;
L3:;
si0=l3;
si1=0U;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=1U;
si1=l3;
si2=8U;
si1+=si2;
si2=1198688U;
si3=l3;
si4=24U;
si3+=si4;
si4=1200636U;
f1251(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L2:;
si0=1200324U;
si1=36U;
si2=1200668U;
f604(i,si0,si1,si2);
UNREACHABLE;
L1:;
si0=l3;
si1=0U;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=1U;
si1=l3;
si2=20U;
si1+=si2;
si2=1200532U;
si3=l3;
si4=24U;
si3+=si4;
si4=1200652U;
f1250(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L0:;
return sj0;
}

void f1027(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U64 l3,U32 l4) {
U32 l5=0;
U32 l6=0;
U32 l7=0;
U64 l8=0;
U64 l9=0;
U32 si0,si1,si2,si3;
U64 sj0,sj1,sj2,sj3;
si0=i->g0;
si1=32U;
si0-=si1;
l5=si0;
i->g0=si0;
si0=l4;
si1=255U;
si0&=si1;
switch(si0){
case 0:
goto L20;
case 1:
goto L19;
case 2:
goto L20;
case 3:
goto L19;
case 4:
goto L18;
case 5:
goto L17;
default:
goto L20;
}
L20:;
sj0=l3;
sj1=274877906944ULL;
si0=sj0 >= sj1;
if(si0){
goto L13;
}
si0=l2;
sj1=l3;
sj2=6ULL;
sj1>>=(sj2&63);
si1=(U32)(sj1);
l6=si1;
si0=si0 > si1;
if(si0){
goto L22;
}
si0=8U;
l2=si0;
si0=0U;
l4=si0;
goto L21;
L22:;
si0=l2;
si1=l6;
si0-=si1;
l4=si0;
si1=268435455U;
si0=si0 > si1;
if(si0){
goto L16;
}
si0=l4;
si1=3U;
si0<<=(si1&31);
l7=si0;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L16;
}
si0=l7;
if(si0){
goto L24;
}
si0=8U;
l2=si0;
goto L23;
L24:;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=l7;
si0=f15022(i,si0);
l2=si0;
si0=!(si0);
if(si0){
goto L12;
}
L23:;
si0=l2;
si1=l1;
si2=l6;
si3=3U;
si2<<=(si3&31);
si1+=si2;
si2=l7;
si0=f15143(i,si0,si1,si2);
l1=si0;
sj0=l3;
sj1=63ULL;
sj0&=sj1;
l3=sj0;
si0=!(sj0);
if(si0){
goto L21;
}
si0=l1;
si1=l4;
sj2=l3;
sj0=f1026(i,si0,si1,sj2);
L21:;
si0=l0;
si1=l4;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l0;
si1=l4;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l2;
i32_store(&i->m0,(U64)si0,si1);
goto L1;
L19:;
si0=l0;
si1=l1;
si2=l2;
sj3=l3;
f1033(i,si0,si1,si2,sj3);
goto L1;
L18:;
sj0=l3;
sj1=0ULL;
si0=sj0 != sj1;
if(si0){
goto L25;
}
si0=8U;
l4=si0;
si0=0U;
l6=si0;
si0=l2;
si0=!(si0);
if(si0){
goto L26;
}
si0=l2;
si1=268435455U;
si0=si0 > si1;
if(si0){
goto L16;
}
si0=l2;
si1=3U;
si0<<=(si1&31);
l7=si0;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L16;
}
si0=l7;
si0=!(si0);
if(si0){
goto L26;
}
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=l7;
si0=f15022(i,si0);
l4=si0;
si0=!(si0);
if(si0){
goto L11;
}
si0=l7;
l6=si0;
L26:;
si0=l4;
si1=l1;
si2=l6;
si0=f15143(i,si0,si1,si2);
l1=si0;
si0=l5;
si1=l2;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l5;
si1=l2;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l5;
si1=l1;
i32_store(&i->m0,(U64)si0+8U,si1);
goto L2;
L25:;
sj0=l3;
sj1=-1ULL;
sj0+=sj1;
l8=sj0;
sj1=274877906944ULL;
si0=sj0 >= sj1;
if(si0){
goto L10;
}
sj0=l8;
sj1=6ULL;
sj0>>=(sj1&63);
si0=(U32)(sj0);
l4=si0;
si1=l2;
si0=si0 >= si1;
if(si0){
goto L29;
}
si0=l1;
si1=l4;
si2=3U;
si1<<=(si2&31);
l7=si1;
si0+=si1;
sj0=i64_load(&i->m0,(U64)si0);
l9=sj0;
sj1=l8;
sj0>>=(sj1&63);
sj1=1ULL;
sj0&=sj1;
si0=!(sj0);
if(si0){
goto L29;
}
sj0=l8;
sj1=63ULL;
sj0&=sj1;
l8=sj0;
si0=0U;
l4=si0;
L30:;
{
si0=l7;
si1=l4;
si0=si0 == si1;
if(si0){
goto L28;
}
si0=l1;
si1=l4;
si0+=si1;
l6=si0;
si0=l4;
si1=8U;
si0+=si1;
l4=si0;
si0=l6;
sj0=i64_load(&i->m0,(U64)si0);
si0=!(sj0);
if(si0){
goto L30;
}
goto L27;
}
L29:;
sj0=l3;
sj1=274877906944ULL;
si0=sj0 >= sj1;
if(si0){
goto L9;
}
si0=l2;
sj1=l3;
sj2=6ULL;
sj1>>=(sj2&63);
si1=(U32)(sj1);
l6=si1;
si0=si0 <= si1;
if(si0){
goto L7;
}
si0=l2;
si1=l6;
si0-=si1;
l4=si0;
si1=268435455U;
si0=si0 > si1;
if(si0){
goto L16;
}
si0=l4;
si1=3U;
si0<<=(si1&31);
l2=si0;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L16;
}
si0=l2;
if(si0){
goto L32;
}
si0=8U;
l7=si0;
goto L31;
L32:;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=l2;
si0=f15022(i,si0);
l7=si0;
si0=!(si0);
if(si0){
goto L8;
}
L31:;
si0=l7;
si1=l1;
si2=l6;
si3=3U;
si2<<=(si3&31);
si1+=si2;
si2=l2;
si0=f15143(i,si0,si1,si2);
l1=si0;
sj0=l3;
sj1=63ULL;
sj0&=sj1;
l3=sj0;
si0=!(sj0);
if(si0){
goto L3;
}
si0=l1;
si1=l4;
sj2=l3;
sj0=f1026(i,si0,si1,sj2);
goto L3;
L28:;
sj0=-1ULL;
sj1=-1ULL;
sj2=l8;
sj1<<=(sj2&63);
sj2=-1ULL;
sj1^=sj2;
sj2=l9;
si2=!(sj2);
sj0=si2?sj0:sj1;
sj1=l9;
sj0&=sj1;
si0=!(sj0);
if(si0){
goto L4;
}
L27:;
si0=l5;
si1=8U;
si0+=si1;
si1=l1;
si2=l2;
sj3=l3;
f1033(i,si0,si1,si2,sj3);
goto L2;
L17:;
sj0=l3;
sj1=274877906944ULL;
si0=sj0 >= sj1;
if(si0){
goto L6;
}
si0=l2;
sj1=l3;
sj2=6ULL;
sj1>>=(sj2&63);
si1=(U32)(sj1);
l6=si1;
si0=si0 <= si1;
if(si0){
goto L34;
}
si0=l1;
si1=l6;
si2=3U;
si1<<=(si2&31);
l4=si1;
si0+=si1;
l7=si0;
L36:;
{
si0=l4;
si0=!(si0);
if(si0){
goto L35;
}
si0=l4;
si1=-8U;
si0+=si1;
l4=si0;
si0=l1;
sj0=i64_load(&i->m0,(U64)si0);
l8=sj0;
si0=l1;
si1=8U;
si0+=si1;
l1=si0;
sj0=l8;
si0=!(sj0);
if(si0){
goto L36;
}
goto L34;
}
L35:;
sj0=-1ULL;
sj1=-1ULL;
sj2=l3;
sj1<<=(sj2&63);
sj2=-1ULL;
sj1^=sj2;
si2=l7;
sj2=i64_load(&i->m0,(U64)si2);
l8=sj2;
si2=!(sj2);
sj0=si2?sj0:sj1;
sj1=l8;
sj0&=sj1;
si0=!(sj0);
if(si0){
goto L33;
}
L34:;
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
goto L1;
L33:;
si0=l2;
si1=l6;
si0-=si1;
l1=si0;
si1=268435455U;
si0=si0 > si1;
if(si0){
goto L16;
}
si0=l1;
si1=3U;
si0<<=(si1&31);
l4=si0;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L16;
}
si0=l4;
if(si0){
goto L15;
}
si0=8U;
l2=si0;
goto L14;
L16:;
f53(i);
UNREACHABLE;
L15:;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=l4;
si0=f15022(i,si0);
l2=si0;
si0=!(si0);
if(si0){
goto L5;
}
L14:;
si0=l2;
si1=l7;
si2=l4;
si0=f15143(i,si0,si1,si2);
l4=si0;
sj0=l3;
sj1=63ULL;
sj0&=sj1;
l3=sj0;
si0=!(sj0);
if(si0){
goto L37;
}
si0=l4;
si1=l1;
sj2=l3;
sj0=f1026(i,si0,si1,sj2);
L37:;
si0=l0;
si1=l1;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l0;
si1=l1;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l4;
i32_store(&i->m0,(U64)si0,si1);
goto L1;
L13:;
si0=1197083U;
si1=43U;
si2=1197248U;
f604(i,si0,si1,si2);
UNREACHABLE;
L12:;
si0=8U;
si1=l7;
f52(i,si0,si1);
UNREACHABLE;
L11:;
si0=8U;
si1=l7;
f52(i,si0,si1);
UNREACHABLE;
L10:;
si0=1232275U;
si1=43U;
si2=1232440U;
f604(i,si0,si1,si2);
UNREACHABLE;
L9:;
si0=1197083U;
si1=43U;
si2=1197248U;
f604(i,si0,si1,si2);
UNREACHABLE;
L8:;
si0=8U;
si1=l2;
f52(i,si0,si1);
UNREACHABLE;
L7:;
si0=l5;
si1=0U;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l5;
sj1=8ULL;
i64_store(&i->m0,(U64)si0+8U,sj1);
goto L2;
L6:;
si0=1255316U;
si1=43U;
si2=1255484U;
f604(i,si0,si1,si2);
UNREACHABLE;
L5:;
si0=8U;
si1=l4;
f52(i,si0,si1);
UNREACHABLE;
L4:;
sj0=l3;
sj1=274877906944ULL;
si0=sj0 >= sj1;
if(si0){
goto L41;
}
si0=l2;
sj1=l3;
sj2=6ULL;
sj1>>=(sj2&63);
si1=(U32)(sj1);
l4=si1;
si0=si0 <= si1;
if(si0){
goto L40;
}
si0=l5;
si1=l2;
si2=l4;
si1-=si2;
l2=si1;
si2=0U;
f1295(i,si0,si1,si2);
si0=l5;
si0=i32_load(&i->m0,(U64)si0+4U);
l6=si0;
si0=l5;
si0=i32_load(&i->m0,(U64)si0);
si1=l1;
si2=l4;
si3=3U;
si2<<=(si3&31);
si1+=si2;
si2=l2;
si3=3U;
si2<<=(si3&31);
si0=f15143(i,si0,si1,si2);
l1=si0;
si0=l5;
si1=l2;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l5;
si1=l6;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l5;
si1=l1;
i32_store(&i->m0,(U64)si0+20U,si1);
sj0=l3;
sj1=63ULL;
sj0&=sj1;
l3=sj0;
si0=!(sj0);
si0=!(si0);
if(si0){
goto L39;
}
goto L38;
L41:;
si0=1197083U;
si1=43U;
si2=1197248U;
f604(i,si0,si1,si2);
UNREACHABLE;
L40:;
si0=l5;
si1=0U;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l5;
sj1=8ULL;
i64_store(&i->m0,(U64)si0+8U,sj1);
goto L2;
L39:;
si0=l1;
si1=l2;
sj2=l3;
sj0=f1026(i,si0,si1,sj2);
L38:;
si0=l1;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=1U;
si0&=si1;
si0=!(si0);
if(si0){
goto L42;
}
si0=l5;
si1=20U;
si0+=si1;
sj1=1ULL;
f1046(i,si0,sj1);
L42:;
si0=l5;
si1=8U;
si0+=si1;
si1=8U;
si0+=si1;
si1=l5;
si2=20U;
si1+=si2;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=l5;
sj1=i64_load(&i->m0,(U64)si1+20U);
i64_store(&i->m0,(U64)si0+8U,sj1);
goto L2;
L3:;
si0=l5;
si1=l4;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l5;
si1=l4;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l5;
si1=l1;
i32_store(&i->m0,(U64)si0+8U,si1);
L2:;
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
L1:;
si0=l5;
si1=32U;
si0+=si1;
i->g0=si0;
L0:;
}

void f1028(rustpythonInstance*i,U32 l0,U64 l1,U32 l2) {
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 l8=0;
U32 si0,si1,si2;
U64 sj0,sj1;
si0=i->g0;
si1=32U;
si0-=si1;
l3=si0;
i->g0=si0;
sj0=l1;
si0=!(sj0);
if(si0){
goto L1;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
si0=!(si0);
si1=l0;
sj1=i64_load(&i->m0,(U64)si1+8U);
si1=!(sj1);
si0&=si1;
if(si0){
goto L1;
}
si0=l0;
si1=8U;
si0+=si1;
l5=si0;
si0=l4;
if(si0){
goto L2;
}
si0=l5;
sj1=l1;
si2=l2;
f1015(i,si0,sj1,si2);
goto L1;
L2:;
si0=l0;
si1=4U;
si0+=si1;
sj1=l1;
si2=l2;
si0=f1029(i,si0,sj1,si2);
si0=!(si0);
if(si0){
goto L4;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L1;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+4U);
l6=si0;
si0=l0;
si1=12U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
if(si0){
goto L5;
}
sj0=0ULL;
l1=sj0;
goto L3;
L5:;
si0=l7;
si1=3U;
si0<<=(si1&31);
l2=si0;
si0=l7;
si1=-1U;
si0+=si1;
si1=536870911U;
si0&=si1;
si1=1U;
si0+=si1;
l8=si0;
si0=0U;
l4=si0;
L9:;
{
si0=l6;
si1=l2;
si0+=si1;
si1=-8U;
si0+=si1;
sj0=i64_load(&i->m0,(U64)si0);
sj1=0ULL;
si0=sj0 != sj1;
if(si0){
goto L8;
}
si0=l4;
si1=1U;
si0+=si1;
l4=si0;
si0=l2;
si1=-8U;
si0+=si1;
l2=si0;
if(si0){
goto L9;
}
}
si0=l8;
l4=si0;
goto L7;
L8:;
si0=l4;
si0=!(si0);
if(si0){
goto L6;
}
L7:;
si0=l7;
si1=l4;
si0=si0 < si1;
if(si0){
goto L6;
}
si0=l0;
si1=l7;
si2=l4;
si1-=si2;
l7=si1;
i32_store(&i->m0,(U64)si0+12U,si1);
L6:;
sj0=0ULL;
l1=sj0;
si0=l7;
switch(si0){
case 0:
goto L3;
case 1:
goto L10;
default:
goto L1;
}
L10:;
si0=l6;
sj0=i64_load(&i->m0,(U64)si0);
l1=sj0;
goto L3;
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
si1=1200000U;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l3;
si1=1197012U;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l3;
si1=8U;
si0+=si1;
si1=1200008U;
f614(i,si0,si1);
UNREACHABLE;
L3:;
si0=l5;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L11;
}
si0=l6;
f15024(i,si0);
L11:;
si0=l0;
sj1=l1;
i64_store(&i->m0,(U64)si0+8U,sj1);
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
L1:;
si0=l3;
si1=32U;
si0+=si1;
i->g0=si0;
L0:;
}

U32 f1029(rustpythonInstance*i,U32 l0,U64 l1,U32 l2) {
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U64 l7=0;
U64 l8=0;
U64 l9=0;
U32 l10=0;
U32 l11=0;
U32 l12=0;
U32 si0,si1,si2,si3,si4;
U64 sj0,sj1,sj2;
si0=i->g0;
si1=32U;
si0-=si1;
l3=si0;
i->g0=si0;
si0=l2;
si1=255U;
si0&=si1;
switch(si0){
case 0:
goto L12;
case 1:
goto L11;
case 2:
goto L12;
case 3:
goto L11;
case 4:
goto L10;
case 5:
goto L9;
default:
goto L12;
}
L12:;
sj0=l1;
sj1=274877906944ULL;
si0=sj0 >= sj1;
if(si0){
goto L8;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+8U);
l2=si0;
sj1=l1;
sj2=6ULL;
sj1>>=(sj2&63);
si1=(U32)(sj1);
l4=si1;
si0=si0 <= si1;
if(si0){
goto L7;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si0=l3;
si1=8U;
si0+=si1;
si1=l4;
si2=l2;
si3=l2;
si4=1238036U;
f1085(i,si0,si1,si2,si3,si4);
si0=l5;
si1=l5;
si2=l3;
si2=i32_load(&i->m0,(U64)si2+8U);
l6=si2;
si3=3U;
si2<<=(si3&31);
si1+=si2;
si2=l3;
si2=i32_load(&i->m0,(U64)si2+12U);
si3=l6;
si2-=si3;
si3=3U;
si2<<=(si3&31);
si0=f15144(i,si0,si1,si2);
si0=l0;
si1=l2;
si2=l4;
si1-=si2;
l4=si1;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=1U;
l2=si0;
sj0=l1;
sj1=63ULL;
sj0&=sj1;
l1=sj0;
si0=!(sj0);
if(si0){
goto L1;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
si1=l4;
sj2=l1;
sj0=f1026(i,si0,si1,sj2);
goto L1;
L11:;
si0=l0;
sj1=l1;
f1034(i,si0,sj1);
si0=1U;
l2=si0;
goto L1;
L10:;
si0=1U;
l2=si0;
sj0=l1;
si0=!(sj0);
if(si0){
goto L1;
}
sj0=l1;
sj1=-1ULL;
sj0+=sj1;
l7=sj0;
sj1=274877906944ULL;
si0=sj0 >= sj1;
if(si0){
goto L6;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+8U);
l6=si0;
sj1=l7;
sj2=6ULL;
sj1>>=(sj2&63);
si1=(U32)(sj1);
l5=si1;
si0=si0 <= si1;
if(si0){
goto L15;
}
si0=l4;
si1=l5;
si2=3U;
si1<<=(si2&31);
l5=si1;
si0+=si1;
sj0=i64_load(&i->m0,(U64)si0);
l8=sj0;
sj1=l7;
sj0>>=(sj1&63);
sj1=1ULL;
sj0&=sj1;
si0=!(sj0);
if(si0){
goto L15;
}
sj0=l7;
sj1=63ULL;
sj0&=sj1;
l9=sj0;
L16:;
{
si0=l5;
si0=!(si0);
if(si0){
goto L14;
}
si0=l5;
si1=-8U;
si0+=si1;
l5=si0;
si0=l4;
sj0=i64_load(&i->m0,(U64)si0);
l7=sj0;
si0=l4;
si1=8U;
si0+=si1;
l4=si0;
sj0=l7;
si0=!(sj0);
if(si0){
goto L16;
}
goto L13;
}
L15:;
sj0=l1;
sj1=274877906944ULL;
si0=sj0 >= sj1;
if(si0){
goto L5;
}
si0=l6;
sj1=l1;
sj2=6ULL;
sj1>>=(sj2&63);
si1=(U32)(sj1);
l5=si1;
si0=si0 <= si1;
if(si0){
goto L4;
}
si0=l3;
si1=16U;
si0+=si1;
si1=l5;
si2=l6;
si3=l6;
si4=1238036U;
f1085(i,si0,si1,si2,si3,si4);
si0=l4;
si1=l4;
si2=l3;
si2=i32_load(&i->m0,(U64)si2+16U);
l10=si2;
si3=3U;
si2<<=(si3&31);
si1+=si2;
si2=l3;
si2=i32_load(&i->m0,(U64)si2+20U);
si3=l10;
si2-=si3;
si3=3U;
si2<<=(si3&31);
si0=f15144(i,si0,si1,si2);
si0=l0;
si1=l6;
si2=l5;
si1-=si2;
l4=si1;
i32_store(&i->m0,(U64)si0+8U,si1);
sj0=l1;
sj1=63ULL;
sj0&=sj1;
l1=sj0;
si0=!(sj0);
if(si0){
goto L1;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
si1=l4;
sj2=l1;
sj0=f1026(i,si0,si1,sj2);
goto L1;
L14:;
sj0=-1ULL;
sj1=-1ULL;
sj2=l9;
sj1<<=(sj2&63);
sj2=-1ULL;
sj1^=sj2;
sj2=l8;
si2=!(sj2);
sj0=si2?sj0:sj1;
sj1=l8;
sj0&=sj1;
si0=!(sj0);
if(si0){
goto L2;
}
L13:;
si0=l0;
sj1=l1;
f1034(i,si0,sj1);
goto L1;
L9:;
sj0=l1;
sj1=274877906944ULL;
si0=sj0 >= sj1;
if(si0){
goto L3;
}
si0=0U;
l2=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+8U);
l11=si0;
sj1=l1;
sj2=6ULL;
sj1>>=(sj2&63);
si1=(U32)(sj1);
l10=si1;
si0=si0 <= si1;
if(si0){
goto L1;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si1=l10;
si2=3U;
si1<<=(si2&31);
l5=si1;
si0+=si1;
l12=si0;
si0=0U;
l2=si0;
L18:;
{
si0=l5;
si1=l2;
si0=si0 == si1;
if(si0){
goto L17;
}
si0=l6;
si1=l2;
si0+=si1;
l4=si0;
si0=l2;
si1=8U;
si0+=si1;
l2=si0;
si0=l4;
sj0=i64_load(&i->m0,(U64)si0);
si0=!(sj0);
if(si0){
goto L18;
}
}
si0=0U;
l2=si0;
goto L1;
L17:;
si0=0U;
l2=si0;
sj0=-1ULL;
sj1=-1ULL;
sj2=l1;
sj1<<=(sj2&63);
sj2=-1ULL;
sj1^=sj2;
si2=l12;
sj2=i64_load(&i->m0,(U64)si2);
l7=sj2;
si2=!(sj2);
sj0=si2?sj0:sj1;
sj1=l7;
sj0&=sj1;
sj1=0ULL;
si0=sj0 != sj1;
if(si0){
goto L1;
}
si0=l3;
si1=24U;
si0+=si1;
si1=l10;
si2=l11;
si3=l11;
si4=1238036U;
f1085(i,si0,si1,si2,si3,si4);
si0=l6;
si1=l6;
si2=l3;
si2=i32_load(&i->m0,(U64)si2+24U);
l2=si2;
si3=3U;
si2<<=(si3&31);
si1+=si2;
si2=l3;
si2=i32_load(&i->m0,(U64)si2+28U);
si3=l2;
si2-=si3;
si3=3U;
si2<<=(si3&31);
si0=f15144(i,si0,si1,si2);
si0=l0;
si1=l11;
si2=l10;
si1-=si2;
l4=si1;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=1U;
l2=si0;
sj0=l1;
sj1=63ULL;
sj0&=sj1;
l1=sj0;
si0=!(sj0);
if(si0){
goto L1;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
si1=l4;
sj2=l1;
sj0=f1026(i,si0,si1,sj2);
goto L1;
L8:;
si0=1197083U;
si1=43U;
si2=1197248U;
f604(i,si0,si1,si2);
UNREACHABLE;
L7:;
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=1U;
l2=si0;
goto L1;
L6:;
si0=1232275U;
si1=43U;
si2=1232440U;
f604(i,si0,si1,si2);
UNREACHABLE;
L5:;
si0=1197083U;
si1=43U;
si2=1197248U;
f604(i,si0,si1,si2);
UNREACHABLE;
L4:;
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0+8U,si1);
goto L1;
L3:;
si0=1255316U;
si1=43U;
si2=1255484U;
f604(i,si0,si1,si2);
UNREACHABLE;
L2:;
sj0=l1;
sj1=274877906944ULL;
si0=sj0 >= sj1;
if(si0){
goto L22;
}
si0=l6;
sj1=l1;
sj2=6ULL;
sj1>>=(sj2&63);
si1=(U32)(sj1);
l4=si1;
si0=si0 <= si1;
if(si0){
goto L21;
}
si0=l0;
si1=l4;
f1187(i,si0,si1);
sj0=l1;
sj1=63ULL;
sj0&=sj1;
l1=sj0;
si0=!(sj0);
si0=!(si0);
if(si0){
goto L20;
}
goto L19;
L22:;
si0=1197083U;
si1=43U;
si2=1197248U;
f604(i,si0,si1,si2);
UNREACHABLE;
L21:;
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0+8U,si1);
goto L1;
L20:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
si1=l0;
si1=i32_load(&i->m0,(U64)si1+8U);
sj2=l1;
sj0=f1026(i,si0,si1,sj2);
L19:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+8U);
si0=!(si0);
if(si0){
goto L1;
}
si0=1U;
l2=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
si0=i32_load8_u(&i->m0,(U64)si0);
si1=1U;
si0&=si1;
si0=!(si0);
if(si0){
goto L1;
}
si0=l0;
sj1=1ULL;
f1046(i,si0,sj1);
L1:;
si0=l3;
si1=32U;
si0+=si1;
i->g0=si0;
si0=l2;
L0:;
return si0;
}


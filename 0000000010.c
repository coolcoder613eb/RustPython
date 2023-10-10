#include "w2c2_base.h"

#include "rustpython.h"

void f1030(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U64 l3) {
U32 l4=0;
U32 l5=0;
U32 l6=0;
U64 l7=0;
U64 l8=0;
U64 l9=0;
U32 si0,si1,si2;
U64 sj0,sj1,sj2,sj3,sj4;
si0=i->g0;
si1=32U;
si0-=si1;
l4=si0;
i->g0=si0;
si0=l2;
si0=!(si0);
if(si0){
goto L4;
}
si0=l2;
si1=268435455U;
si0=si0 > si1;
if(si0){
goto L1;
}
si0=l2;
si1=3U;
si0<<=(si1&31);
l5=si0;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L1;
}
si0=8U;
l6=si0;
si0=l5;
si0=!(si0);
if(si0){
goto L3;
}
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=l5;
si0=f15022(i,si0);
l6=si0;
if(si0){
goto L3;
}
si0=8U;
si1=l5;
f52(i,si0,si1);
UNREACHABLE;
L4:;
si0=l4;
si1=0U;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l4;
si1=l2;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l4;
si1=8U;
i32_store(&i->m0,(U64)si0+20U,si1);
goto L2;
L3:;
si0=0U;
l5=si0;
si0=l4;
si1=0U;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l4;
si1=l6;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l4;
si1=l2;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l2;
si1=3U;
si0<<=(si1&31);
l2=si0;
sj0=0ULL;
l7=sj0;
L5:;
{
si0=l4;
si1=l1;
sj1=i64_load(&i->m0,(U64)si1);
sj2=0ULL;
sj3=l3;
sj4=0ULL;
f15157(i,si0,sj1,sj2,sj3,sj4);
si0=l4;
si1=8U;
si0+=si1;
sj0=i64_load(&i->m0,(U64)si0);
si1=l4;
sj1=i64_load(&i->m0,(U64)si1);
l8=sj1;
sj2=l7;
sj1+=sj2;
l9=sj1;
sj2=l8;
si1=sj1 < sj2;
sj1=(U64)(si1);
sj0+=sj1;
l7=sj0;
si0=l5;
si1=l4;
si1=i32_load(&i->m0,(U64)si1+24U);
si0=si0 != si1;
if(si0){
goto L6;
}
si0=l4;
si1=20U;
si0+=si1;
si1=l5;
f1299(i,si0,si1);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+28U);
l5=si0;
L6:;
si0=l1;
si1=8U;
si0+=si1;
l1=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=l5;
si2=3U;
si1<<=(si2&31);
si0+=si1;
sj1=l9;
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=l4;
si1=i32_load(&i->m0,(U64)si1+28U);
si2=1U;
si1+=si2;
l5=si1;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l2;
si1=-8U;
si0+=si1;
l2=si0;
if(si0){
goto L5;
}
}
sj0=l7;
si0=!(sj0);
if(si0){
goto L2;
}
si0=l5;
si1=l4;
si1=i32_load(&i->m0,(U64)si1+24U);
si0=si0 != si1;
if(si0){
goto L7;
}
si0=l4;
si1=20U;
si0+=si1;
si1=l5;
f1299(i,si0,si1);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+28U);
l5=si0;
L7:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=l5;
si2=3U;
si1<<=(si2&31);
si0+=si1;
sj1=l7;
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=l4;
si1=i32_load(&i->m0,(U64)si1+28U);
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0+28U,si1);
L2:;
si0=l0;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1+20U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=8U;
si0+=si1;
si1=l4;
si2=20U;
si1+=si2;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=32U;
si0+=si1;
i->g0=si0;
goto L0;
L1:;
f53(i);
UNREACHABLE;
L0:;
}

void f1031(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U64 l3) {
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 si0,si1,si2,si3;
U64 sj0,sj1,sj2;
sj0=l3;
sj1=274877906944ULL;
si0=sj0 >= sj1;
if(si0){
goto L3;
}
si0=l2;
sj1=l3;
sj2=6ULL;
sj1>>=(sj2&63);
si1=(U32)(sj1);
l4=si1;
si0=si0 <= si1;
if(si0){
goto L4;
}
si0=l2;
si1=l4;
si0-=si1;
l2=si0;
si1=268435455U;
si0=si0 > si1;
if(si0){
goto L7;
}
si0=l2;
si1=3U;
si0<<=(si1&31);
l5=si0;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L7;
}
si0=l5;
if(si0){
goto L6;
}
si0=8U;
l6=si0;
goto L5;
L7:;
f53(i);
UNREACHABLE;
L6:;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=l5;
si0=f15022(i,si0);
l6=si0;
si0=!(si0);
if(si0){
goto L2;
}
L5:;
si0=l6;
si1=l1;
si2=l4;
si3=3U;
si2<<=(si3&31);
si1+=si2;
si2=l5;
si0=f15143(i,si0,si1,si2);
l4=si0;
sj0=l3;
sj1=63ULL;
sj0&=sj1;
l3=sj0;
si0=!(sj0);
if(si0){
goto L1;
}
si0=l4;
si1=l2;
sj2=l3;
sj0=f1026(i,si0,si1,sj2);
goto L1;
L4:;
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l0;
sj1=8ULL;
i64_store(&i->m0,(U64)si0,sj1);
goto L0;
L3:;
si0=1197083U;
si1=43U;
si2=1197248U;
f604(i,si0,si1,si2);
UNREACHABLE;
L2:;
si0=8U;
si1=l5;
f52(i,si0,si1);
UNREACHABLE;
L1:;
si0=l0;
si1=l2;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l0;
si1=l2;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l4;
i32_store(&i->m0,(U64)si0,si1);
L0:;
}

U64 f1032(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U64 l4) {
U32 l5=0;
U64 l6=0;
U64 l7=0;
U64 l8=0;
U32 l9=0;
U32 l10=0;
U32 l11=0;
U32 l12=0;
U64 l13=0;
U32 si0,si1,si2,si3,si4;
U64 sj0,sj1,sj2,sj3;
si0=i->g0;
si1=48U;
si0-=si1;
l5=si0;
i->g0=si0;
si0=l5;
sj1=l4;
i64_store(&i->m0,(U64)si0+8U,sj1);
si0=l5;
si1=l3;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l3;
si0=!(si0);
if(si0){
goto L4;
}
sj0=l4;
sj1=0ULL;
si0=sj0 == sj1;
if(si0){
goto L3;
}
sj0=l4;
sj1=63ULL;
si0=sj0 > sj1;
if(si0){
goto L2;
}
si0=l1;
si1=l3;
si0=si0 < si1;
if(si0){
goto L1;
}
si0=l2;
sj0=i64_load(&i->m0,(U64)si0);
l6=sj0;
sj1=l4;
sj0>>=(sj1&63);
l7=sj0;
sj0=0ULL;
sj1=l4;
sj0-=sj1;
sj1=63ULL;
sj0&=sj1;
l8=sj0;
si0=l3;
si1=-1U;
si0+=si1;
l9=si0;
si1=l9;
si2=536870911U;
si1&=si2;
l3=si1;
si2=l9;
si3=l3;
si2=si2 < si3;
si0=si2?si0:si1;
l1=si0;
si0=!(si0);
if(si0){
goto L5;
}
si0=l1;
si1=1U;
si0&=si1;
l10=si0;
si0=l1;
si1=1U;
si0=si0 != si1;
if(si0){
goto L7;
}
si0=0U;
l11=si0;
goto L6;
L7:;
si0=l2;
si1=16U;
si0+=si1;
l3=si0;
si0=l1;
si1=536870910U;
si0&=si1;
l12=si0;
si0=0U;
l11=si0;
si0=l0;
l1=si0;
L8:;
{
si0=l1;
si1=l3;
si2=-8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
l13=sj1;
sj2=l8;
sj1<<=(sj2&63);
sj2=l7;
sj1|=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si1=8U;
si0+=si1;
si1=l3;
sj1=i64_load(&i->m0,(U64)si1);
l7=sj1;
sj2=l8;
sj1<<=(sj2&63);
sj2=l13;
sj3=l4;
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
sj0=l7;
sj1=l4;
sj0>>=(sj1&63);
l7=sj0;
si0=l12;
si1=l11;
si2=2U;
si1+=si2;
l11=si1;
si0=si0 != si1;
if(si0){
goto L8;
}
}
L6:;
si0=l10;
si0=!(si0);
if(si0){
goto L5;
}
si0=l0;
si1=l11;
si2=3U;
si1<<=(si2&31);
l3=si1;
si0+=si1;
si1=l2;
si2=8U;
si1+=si2;
si2=l3;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
l13=sj1;
sj2=l8;
sj1<<=(sj2&63);
sj2=l7;
sj1|=sj2;
i64_store(&i->m0,(U64)si0,sj1);
sj0=l13;
sj1=l4;
sj0>>=(sj1&63);
l7=sj0;
L5:;
si0=l0;
si1=l9;
si2=3U;
si1<<=(si2&31);
si0+=si1;
sj1=l7;
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=48U;
si0+=si1;
i->g0=si0;
sj0=l6;
sj1=l8;
sj0<<=(sj1&63);
goto L0;
L4:;
si0=l5;
si1=0U;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=1U;
si1=l5;
si2=20U;
si1+=si2;
si2=1200532U;
si3=l5;
si4=24U;
si3+=si4;
si4=1200536U;
f1250(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L3:;
si0=l5;
si1=0U;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=1U;
si1=l5;
si2=8U;
si1+=si2;
si2=1198688U;
si3=l5;
si4=24U;
si3+=si4;
si4=1200552U;
f1251(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L2:;
si0=1200324U;
si1=36U;
si2=1200620U;
f604(i,si0,si1,si2);
UNREACHABLE;
L1:;
si0=1200568U;
si1=34U;
si2=1200604U;
f604(i,si0,si1,si2);
UNREACHABLE;
L0:;
return sj0;
}

void f1033(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U64 l3) {
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 l8=0;
U32 l9=0;
U64 l10=0;
U32 si0,si1,si2;
U64 sj0,sj1,sj2;
si0=i->g0;
si1=16U;
si0-=si1;
l4=si0;
i->g0=si0;
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
l5=si1;
si0=si0 <= si1;
if(si0){
goto L8;
}
si0=l2;
si1=l5;
si0-=si1;
l6=si0;
si0=l1;
si1=l5;
si2=3U;
si1<<=(si2&31);
l7=si1;
si0+=si1;
l8=si0;
L10:;
{
si0=l7;
l9=si0;
si0=!(si0);
if(si0){
goto L9;
}
si0=l9;
si1=-8U;
si0+=si1;
l7=si0;
si0=l1;
sj0=i64_load(&i->m0,(U64)si0);
l10=sj0;
si0=l1;
si1=8U;
si0+=si1;
l1=si0;
sj0=l10;
si0=!(sj0);
if(si0){
goto L10;
}
}
L9:;
si0=l6;
si1=268435455U;
si0=si0 > si1;
if(si0){
goto L13;
}
si0=l6;
si1=3U;
si0<<=(si1&31);
l1=si0;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L13;
}
si0=l1;
if(si0){
goto L12;
}
si0=8U;
l7=si0;
goto L11;
L13:;
f53(i);
UNREACHABLE;
L12:;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=l1;
si0=f15022(i,si0);
l7=si0;
si0=!(si0);
if(si0){
goto L5;
}
L11:;
si0=l7;
si1=l8;
si2=l1;
si0=f15143(i,si0,si1,si2);
l1=si0;
si0=l4;
si1=l6;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l4;
si1=l6;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l4;
si1=l1;
i32_store(&i->m0,(U64)si0+4U,si1);
sj0=l3;
sj1=63ULL;
sj0&=sj1;
l10=sj0;
si0=!(sj0);
si0=!(si0);
if(si0){
goto L7;
}
si0=l9;
si0=!(si0);
if(si0){
goto L2;
}
goto L3;
L8:;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=8U;
si0=f15022(i,si0);
l1=si0;
si0=!(si0);
if(si0){
goto L4;
}
si0=l0;
sj1=4294967297ULL;
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l0;
si1=l1;
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
sj1=1ULL;
i64_store(&i->m0,(U64)si0,sj1);
goto L1;
L7:;
si0=l1;
si1=l6;
sj2=l10;
sj0=f1026(i,si0,si1,sj2);
l10=sj0;
si0=l9;
if(si0){
goto L3;
}
sj0=l10;
sj1=0ULL;
si0=sj0 != sj1;
if(si0){
goto L3;
}
goto L2;
L6:;
si0=1197083U;
si1=43U;
si2=1197248U;
f604(i,si0,si1,si2);
UNREACHABLE;
L5:;
si0=8U;
si1=l1;
f52(i,si0,si1);
UNREACHABLE;
L4:;
si0=8U;
si1=8U;
f52(i,si0,si1);
UNREACHABLE;
L3:;
si0=l2;
si1=l5;
si0=si0 == si1;
if(si0){
goto L15;
}
si0=l1;
si1=l1;
sj1=i64_load(&i->m0,(U64)si1);
sj2=1ULL;
sj1+=sj2;
l10=sj1;
i64_store(&i->m0,(U64)si0,sj1);
sj0=l10;
sj1=0ULL;
si0=sj0 != sj1;
if(si0){
goto L2;
}
si0=l2;
si1=3U;
si0<<=(si1&31);
si1=l5;
si2=3U;
si1<<=(si2&31);
si0-=si1;
si1=-8U;
si0+=si1;
l7=si0;
si0=l1;
si1=8U;
si0+=si1;
l1=si0;
L16:;
{
si0=l7;
si0=!(si0);
if(si0){
goto L14;
}
si0=l1;
si1=l1;
sj1=i64_load(&i->m0,(U64)si1);
sj2=1ULL;
sj1+=sj2;
l10=sj1;
i64_store(&i->m0,(U64)si0,sj1);
si0=l7;
si1=-8U;
si0+=si1;
l7=si0;
si0=l1;
si1=8U;
si0+=si1;
l1=si0;
sj0=l10;
si0=!(sj0);
if(si0){
goto L16;
}
goto L2;
}
L15:;
si0=1202860U;
si1=32U;
si2=1202892U;
f604(i,si0,si1,si2);
UNREACHABLE;
L14:;
si0=l4;
si1=4U;
si0+=si1;
si1=l6;
f1299(i,si0,si1);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+4U);
si1=l4;
si1=i32_load(&i->m0,(U64)si1+12U);
si2=3U;
si1<<=(si2&31);
si0+=si1;
sj1=1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=l4;
si1=i32_load(&i->m0,(U64)si1+12U);
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0+12U,si1);
L2:;
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
L1:;
si0=l4;
si1=16U;
si0+=si1;
i->g0=si0;
L0:;
}

void f1034(rustpythonInstance*i,U32 l0,U64 l1) {
U32 l2=0;
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 l8=0;
U32 l9=0;
U32 si0,si1,si2,si3,si4;
U64 sj0,sj1,sj2;
si0=i->g0;
si1=16U;
si0-=si1;
l2=si0;
i->g0=si0;
sj0=l1;
sj1=274877906944ULL;
si0=sj0 >= sj1;
if(si0){
goto L2;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+8U);
l3=si0;
sj1=l1;
sj2=6ULL;
sj1>>=(sj2&63);
si1=(U32)(sj1);
l4=si1;
si0=si0 <= si1;
if(si0){
goto L3;
}
si0=l4;
si1=3U;
si0<<=(si1&31);
l5=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si0=0U;
l7=si0;
L5:;
{
si0=l5;
si1=l7;
l8=si1;
si0=si0 == si1;
l9=si0;
if(si0){
goto L4;
}
si0=l8;
si1=8U;
si0+=si1;
l7=si0;
si0=l6;
si1=l8;
si0+=si1;
sj0=i64_load(&i->m0,(U64)si0);
si0=!(sj0);
if(si0){
goto L5;
}
}
L4:;
si0=l2;
si1=8U;
si0+=si1;
si1=l4;
si2=l3;
si3=l3;
si4=1238036U;
f1085(i,si0,si1,si2,si3,si4);
si0=l6;
si1=l6;
si2=l2;
si2=i32_load(&i->m0,(U64)si2+8U);
l7=si2;
si3=3U;
si2<<=(si3&31);
si1+=si2;
si2=l2;
si2=i32_load(&i->m0,(U64)si2+12U);
si3=l7;
si2-=si3;
si3=3U;
si2<<=(si3&31);
si0=f15144(i,si0,si1,si2);
si0=l0;
si1=l3;
si2=l4;
si1-=si2;
l6=si1;
i32_store(&i->m0,(U64)si0+8U,si1);
sj0=l1;
sj1=63ULL;
sj0&=sj1;
l1=sj0;
si0=!(sj0);
si0=!(si0);
if(si0){
goto L7;
}
si0=l9;
si0=!(si0);
if(si0){
goto L6;
}
goto L1;
L7:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
si1=l6;
sj2=l1;
sj0=f1026(i,si0,si1,sj2);
l1=sj0;
si0=l5;
si1=l8;
si0=si0 != si1;
if(si0){
goto L8;
}
sj0=l1;
si0=!(sj0);
if(si0){
goto L1;
}
L8:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+8U);
l6=si0;
L6:;
si0=l6;
si0=!(si0);
if(si0){
goto L10;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
l8=si0;
si1=l8;
sj1=i64_load(&i->m0,(U64)si1);
sj2=1ULL;
sj1+=sj2;
l1=sj1;
i64_store(&i->m0,(U64)si0,sj1);
sj0=l1;
sj1=0ULL;
si0=sj0 != sj1;
if(si0){
goto L1;
}
si0=l8;
si1=8U;
si0+=si1;
l8=si0;
si0=l6;
si1=3U;
si0<<=(si1&31);
si1=-8U;
si0+=si1;
l7=si0;
L11:;
{
si0=l7;
si0=!(si0);
if(si0){
goto L9;
}
si0=l8;
si1=l8;
sj1=i64_load(&i->m0,(U64)si1);
sj2=1ULL;
sj1+=sj2;
l1=sj1;
i64_store(&i->m0,(U64)si0,sj1);
si0=l7;
si1=-8U;
si0+=si1;
l7=si0;
si0=l8;
si1=8U;
si0+=si1;
l8=si0;
sj0=l1;
si0=!(sj0);
if(si0){
goto L11;
}
goto L1;
}
L10:;
si0=1202860U;
si1=32U;
si2=1202892U;
f604(i,si0,si1,si2);
UNREACHABLE;
L9:;
si0=l6;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+4U);
si0=si0 != si1;
if(si0){
goto L12;
}
si0=l0;
si1=l6;
f1299(i,si0,si1);
si0=l0;
si0=i32_load(&i->m0,(U64)si0+8U);
l6=si0;
L12:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
si1=l6;
si2=3U;
si1<<=(si2&31);
si0+=si1;
sj1=1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+8U);
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0+8U,si1);
goto L1;
L3:;
si0=l3;
si0=!(si0);
if(si0){
goto L13;
}
si0=l0;
si1=1U;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
sj1=1ULL;
i64_store(&i->m0,(U64)si0,sj1);
goto L1;
L13:;
si0=0U;
si1=0U;
si2=1200684U;
f594(i,si0,si1,si2);
UNREACHABLE;
L2:;
si0=1197083U;
si1=43U;
si2=1197248U;
f604(i,si0,si1,si2);
UNREACHABLE;
L1:;
si0=l2;
si1=16U;
si0+=si1;
i->g0=si0;
L0:;
}

void f1035(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U64 l3) {
U32 l4=0;
U32 l5=0;
U32 l6=0;
U64 l7=0;
U32 si0,si1,si2,si3;
U64 sj0,sj1,sj2;
si0=i->g0;
si1=16U;
si0-=si1;
l4=si0;
i->g0=si0;
si0=l2;
si0=!(si0);
if(si0){
goto L2;
}
si0=l2;
si1=268435455U;
si0=si0 > si1;
if(si0){
goto L4;
}
si0=l2;
si1=3U;
si0<<=(si1&31);
l5=si0;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L4;
}
si0=l5;
if(si0){
goto L3;
}
si0=8U;
l6=si0;
goto L1;
L4:;
f53(i);
UNREACHABLE;
L3:;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=l5;
si0=f15022(i,si0);
l6=si0;
if(si0){
goto L1;
}
si0=8U;
si1=l5;
f52(i,si0,si1);
UNREACHABLE;
L2:;
si0=8U;
si1=l1;
si2=l2;
si3=3U;
si2<<=(si3&31);
si0=f15143(i,si0,si1,si2);
si0=1197083U;
si1=43U;
si2=1200832U;
f604(i,si0,si1,si2);
UNREACHABLE;
L1:;
si0=l6;
si1=l1;
si2=l5;
si0=f15143(i,si0,si1,si2);
l5=si0;
si0=l4;
si1=l2;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l4;
si1=l2;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l4;
si1=l5;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l5;
sj0=i64_load(&i->m0,(U64)si0);
l7=sj0;
si0=!(sj0);
if(si0){
goto L5;
}
si0=l5;
sj1=0ULL;
sj2=l7;
sj1-=sj2;
sj2=l3;
sj1&=sj2;
l3=sj1;
i64_store(&i->m0,(U64)si0,sj1);
sj0=l3;
si0=!(sj0);
if(si0){
goto L6;
}
si0=l5;
sj1=0ULL;
sj2=l3;
sj1-=sj2;
i64_store(&i->m0,(U64)si0,sj1);
goto L5;
L6:;
si0=l2;
si1=1U;
si0=si0 == si1;
if(si0){
goto L7;
}
si0=l5;
si1=l5;
sj1=i64_load(&i->m0,(U64)si1+8U);
sj2=1ULL;
sj1+=sj2;
l3=sj1;
i64_store(&i->m0,(U64)si0+8U,sj1);
sj0=l3;
sj1=0ULL;
si0=sj0 != sj1;
if(si0){
goto L5;
}
si0=l5;
si1=16U;
si0+=si1;
l5=si0;
si0=l2;
si1=3U;
si0<<=(si1&31);
si1=-16U;
si0+=si1;
l1=si0;
L8:;
{
si0=l1;
si0=!(si0);
if(si0){
goto L7;
}
si0=l5;
si1=l5;
sj1=i64_load(&i->m0,(U64)si1);
sj2=1ULL;
sj1+=sj2;
l3=sj1;
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si1=-8U;
si0+=si1;
l1=si0;
si0=l5;
si1=8U;
si0+=si1;
l5=si0;
sj0=l3;
si0=!(sj0);
if(si0){
goto L8;
}
goto L5;
}
L7:;
si0=l4;
si1=4U;
si0+=si1;
si1=l2;
f1299(i,si0,si1);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+4U);
si1=l4;
si1=i32_load(&i->m0,(U64)si1+12U);
si2=3U;
si1<<=(si2&31);
si0+=si1;
sj1=1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=l4;
si1=i32_load(&i->m0,(U64)si1+12U);
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0+12U,si1);
L5:;
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

void f1036(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4) {
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
U32 l15=0;
U32 l16=0;
U32 l17=0;
U32 l18=0;
U32 l19=0;
U32 l20=0;
U32 si0,si1,si2,si3,si4;
U64 sj0,sj1,sj2,sj3;
si0=i->g0;
si1=16U;
si0-=si1;
l5=si0;
i->g0=si0;
si0=l2;
si1=3U;
si0<<=(si1&31);
l6=si0;
si0=l2;
si0=!(si0);
if(si0){
goto L9;
}
si0=l2;
si1=-1U;
si0+=si1;
si1=536870911U;
si0&=si1;
si1=1U;
si0+=si1;
l7=si0;
si0=0U;
l8=si0;
si0=l6;
l9=si0;
si0=l1;
l10=si0;
L11:;
{
si0=l10;
sj0=i64_load(&i->m0,(U64)si0);
sj1=0ULL;
si0=sj0 != sj1;
if(si0){
goto L10;
}
si0=l8;
si1=1U;
si0+=si1;
l8=si0;
si0=l10;
si1=8U;
si0+=si1;
l10=si0;
si0=l9;
si1=-8U;
si0+=si1;
l9=si0;
if(si0){
goto L11;
}
}
si0=l7;
l8=si0;
L10:;
si0=l4;
if(si0){
goto L8;
}
si0=l8;
si1=l2;
si0=si0 < si1;
if(si0){
goto L7;
}
goto L1;
L9:;
si0=0U;
l8=si0;
si0=l4;
si0=!(si0);
if(si0){
goto L1;
}
L8:;
si0=l1;
si1=l6;
si0+=si1;
l11=si0;
si0=l3;
si1=l4;
si2=3U;
si1<<=(si2&31);
l6=si1;
si0+=si1;
l12=si0;
si0=l4;
si1=-1U;
si0+=si1;
si1=536870911U;
si0&=si1;
si1=1U;
si0+=si1;
l7=si0;
si0=0U;
l9=si0;
si0=l3;
l10=si0;
L13:;
{
si0=l10;
sj0=i64_load(&i->m0,(U64)si0);
sj1=0ULL;
si0=sj0 != sj1;
if(si0){
goto L12;
}
si0=l9;
si1=1U;
si0+=si1;
l9=si0;
si0=l10;
si1=8U;
si0+=si1;
l10=si0;
si0=l6;
si1=-8U;
si0+=si1;
l6=si0;
if(si0){
goto L13;
}
}
si0=l7;
l9=si0;
L12:;
si0=l8;
si1=l2;
si0=si0 >= si1;
if(si0){
goto L1;
}
si0=l9;
si1=l4;
si0=si0 >= si1;
if(si0){
goto L7;
}
si0=l9;
si1=l2;
si0=si0 >= si1;
if(si0){
goto L14;
}
si0=l8;
si1=l4;
si0=si0 >= si1;
if(si0){
goto L22;
}
si0=8U;
l10=si0;
si0=l8;
si1=l9;
si2=l8;
si3=l9;
si2=si2 > si3;
l6=si2;
si0=si2?si0:si1;
l9=si0;
si0=!(si0);
if(si0){
goto L23;
}
si0=l9;
si1=268435455U;
si0=si0 > si1;
if(si0){
goto L21;
}
si0=l9;
si1=3U;
si0<<=(si1&31);
l8=si0;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L21;
}
si0=l8;
si0=!(si0);
if(si0){
goto L23;
}
si0=l8;
si1=1U;
si0=f15026(i,si0,si1);
l10=si0;
si0=!(si0);
if(si0){
goto L6;
}
L23:;
si0=l5;
si1=l9;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l5;
si1=l9;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l5;
si1=l10;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l9;
si1=l2;
si0=si0 >= si1;
if(si0){
goto L18;
}
si0=l1;
si1=l9;
si2=3U;
si1<<=(si2&31);
si0+=si1;
sj0=i64_load(&i->m0,(U64)si0);
l13=sj0;
si0=l6;
si0=!(si0);
if(si0){
goto L16;
}
si0=l9;
si1=l4;
si0=si0 >= si1;
if(si0){
goto L17;
}
si0=l3;
si1=l9;
si2=3U;
si1<<=(si2&31);
si0+=si1;
sj0=i64_load(&i->m0,(U64)si0);
sj1=-1ULL;
sj0^=sj1;
l14=sj0;
goto L15;
L22:;
si0=l2;
si1=268435455U;
si0=si0 > si1;
if(si0){
goto L21;
}
si0=l2;
si1=3U;
si0<<=(si1&31);
l10=si0;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L21;
}
si0=l10;
if(si0){
goto L20;
}
si0=8U;
l9=si0;
goto L19;
L21:;
f53(i);
UNREACHABLE;
L20:;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=l10;
si0=f15022(i,si0);
l9=si0;
si0=!(si0);
if(si0){
goto L5;
}
L19:;
si0=l9;
si1=l1;
si2=l10;
si0=f15143(i,si0,si1,si2);
l10=si0;
si0=l0;
si1=l2;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l0;
si1=l2;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l10;
i32_store(&i->m0,(U64)si0,si1);
goto L2;
L18:;
si0=l9;
si1=l2;
si2=1200848U;
f594(i,si0,si1,si2);
UNREACHABLE;
L17:;
si0=l9;
si1=l4;
si2=1200864U;
f594(i,si0,si1,si2);
UNREACHABLE;
L16:;
si0=l9;
si1=l4;
si0=si0 >= si1;
if(si0){
goto L4;
}
sj0=0ULL;
si1=l3;
si2=l9;
si3=3U;
si2<<=(si3&31);
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
sj0-=sj1;
l14=sj0;
L15:;
si0=l5;
si1=4U;
si0+=si1;
si1=l9;
f1299(i,si0,si1);
si0=l5;
si0=i32_load(&i->m0,(U64)si0+4U);
si1=l5;
si1=i32_load(&i->m0,(U64)si1+12U);
si2=3U;
si1<<=(si2&31);
si0+=si1;
sj1=l14;
sj2=l13;
sj1&=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=l5;
si1=i32_load(&i->m0,(U64)si1+12U);
si2=1U;
si1+=si2;
l15=si1;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l5;
si0=i32_load(&i->m0,(U64)si0+8U);
si1=l15;
si0-=si1;
si1=l11;
si2=l1;
si3=l9;
si4=3U;
si3<<=(si4&31);
si4=8U;
si3+=si4;
l10=si3;
si2+=si3;
l16=si2;
si1-=si2;
si2=3U;
si1>>=(si2&31);
l6=si1;
si2=l12;
si3=l3;
si4=l10;
si3+=si4;
l17=si3;
si2-=si3;
si3=3U;
si2>>=(si3&31);
l10=si2;
si3=l6;
si4=l10;
si3=si3 < si4;
si1=si3?si1:si2;
l6=si1;
si0=si0 >= si1;
if(si0){
goto L26;
}
si0=l5;
si1=4U;
si0+=si1;
si1=l15;
si2=l6;
f1302(i,si0,si1,si2);
si0=l5;
si0=i32_load(&i->m0,(U64)si0+12U);
l15=si0;
goto L25;
L26:;
si0=l6;
si0=!(si0);
if(si0){
goto L24;
}
L25:;
si0=l6;
si1=1U;
si0&=si1;
l18=si0;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+4U);
l19=si0;
si0=l6;
si1=1U;
si0=si0 != si1;
if(si0){
goto L28;
}
si0=0U;
l10=si0;
goto L27;
L28:;
si0=0U;
l10=si0;
si0=0U;
si1=l6;
si2=536870910U;
si1&=si2;
si0-=si1;
l7=si0;
si0=l3;
si1=l9;
si2=3U;
si1<<=(si2&31);
l9=si1;
si0+=si1;
l11=si0;
si0=l1;
si1=l9;
si0+=si1;
l12=si0;
si0=l19;
si1=l15;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l20=si0;
si0=0U;
l9=si0;
L29:;
{
si0=l20;
si1=l10;
si0+=si1;
l6=si0;
si1=l12;
si2=l10;
si1+=si2;
l8=si1;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
si2=l11;
si3=l10;
si2+=si3;
l3=si2;
si3=8U;
si2+=si3;
sj2=i64_load(&i->m0,(U64)si2);
sj3=-1ULL;
sj2^=sj3;
sj1&=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l6;
si1=8U;
si0+=si1;
si1=l8;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
si2=l3;
si3=16U;
si2+=si3;
sj2=i64_load(&i->m0,(U64)si2);
sj3=-1ULL;
sj2^=sj3;
sj1&=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l10;
si1=16U;
si0+=si1;
l10=si0;
si0=l7;
si1=l9;
si2=-2U;
si1+=si2;
l9=si1;
si0=si0 != si1;
if(si0){
goto L29;
}
}
si0=0U;
si1=l9;
si0-=si1;
l10=si0;
si0=l15;
si1=l9;
si0-=si1;
l15=si0;
L27:;
si0=l18;
si0=!(si0);
if(si0){
goto L24;
}
si0=l19;
si1=l15;
si2=3U;
si1<<=(si2&31);
si0+=si1;
si1=l16;
si2=l10;
si3=3U;
si2<<=(si3&31);
l10=si2;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
si2=l17;
si3=l10;
si2+=si3;
sj2=i64_load(&i->m0,(U64)si2);
sj3=-1ULL;
sj2^=sj3;
sj1&=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l15;
si1=1U;
si0+=si1;
l15=si0;
L24:;
si0=l5;
si1=l15;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l2;
si1=l4;
si0=si0 <= si1;
if(si0){
goto L3;
}
si0=l1;
si1=l4;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l9=si0;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+8U);
si1=l15;
si0-=si1;
si1=l2;
si2=l4;
si1-=si2;
l10=si1;
si0=si0 >= si1;
if(si0){
goto L30;
}
si0=l5;
si1=4U;
si0+=si1;
si1=l15;
si2=l10;
f1302(i,si0,si1,si2);
si0=l5;
si0=i32_load(&i->m0,(U64)si0+12U);
l15=si0;
L30:;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+4U);
si1=l15;
si2=3U;
si1<<=(si2&31);
si0+=si1;
si1=l9;
si2=l10;
si3=3U;
si2<<=(si3&31);
si0=f15143(i,si0,si1,si2);
si0=l5;
si1=l15;
si2=l10;
si1+=si2;
i32_store(&i->m0,(U64)si0+12U,si1);
goto L3;
L14:;
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l0;
sj1=8ULL;
i64_store(&i->m0,(U64)si0,sj1);
goto L2;
L7:;
si0=1200896U;
si1=30U;
si2=1200928U;
f604(i,si0,si1,si2);
UNREACHABLE;
L6:;
si0=8U;
si1=l8;
f52(i,si0,si1);
UNREACHABLE;
L5:;
si0=8U;
si1=l10;
f52(i,si0,si1);
UNREACHABLE;
L4:;
si0=l9;
si1=l4;
si2=1200880U;
f594(i,si0,si1,si2);
UNREACHABLE;
L3:;
si0=l0;
si1=l5;
sj1=i64_load(&i->m0,(U64)si1+4U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=8U;
si0+=si1;
si1=l5;
si2=4U;
si1+=si2;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
L2:;
si0=l5;
si1=16U;
si0+=si1;
i->g0=si0;
goto L0;
L1:;
si0=1200944U;
si1=30U;
si2=1200976U;
f604(i,si0,si1,si2);
UNREACHABLE;
L0:;
}

void f1037(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4) {
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
U64 l15=0;
U32 l16=0;
U32 l17=0;
U32 l18=0;
U32 l19=0;
U32 l20=0;
U32 l21=0;
U32 si0,si1,si2,si3;
U64 sj0,sj1,sj2;
si0=i->g0;
si1=16U;
si0-=si1;
l5=si0;
i->g0=si0;
si0=l2;
si1=3U;
si0<<=(si1&31);
l6=si0;
si0=l2;
si0=!(si0);
if(si0){
goto L10;
}
si0=l2;
si1=-1U;
si0+=si1;
si1=536870911U;
si0&=si1;
si1=1U;
si0+=si1;
l7=si0;
si0=0U;
l8=si0;
si0=l6;
l9=si0;
si0=l1;
l10=si0;
L12:;
{
si0=l10;
sj0=i64_load(&i->m0,(U64)si0);
sj1=0ULL;
si0=sj0 != sj1;
if(si0){
goto L11;
}
si0=l8;
si1=1U;
si0+=si1;
l8=si0;
si0=l10;
si1=8U;
si0+=si1;
l10=si0;
si0=l9;
si1=-8U;
si0+=si1;
l9=si0;
if(si0){
goto L12;
}
}
si0=l7;
l8=si0;
L11:;
si0=l4;
if(si0){
goto L9;
}
si0=l8;
si1=l2;
si0=si0 < si1;
if(si0){
goto L8;
}
goto L1;
L10:;
si0=0U;
l8=si0;
si0=l4;
si0=!(si0);
if(si0){
goto L1;
}
L9:;
si0=l1;
si1=l6;
si0+=si1;
l11=si0;
si0=l3;
si1=l4;
si2=3U;
si1<<=(si2&31);
l6=si1;
si0+=si1;
l12=si0;
si0=l4;
si1=-1U;
si0+=si1;
si1=536870911U;
si0&=si1;
si1=1U;
si0+=si1;
l7=si0;
si0=0U;
l10=si0;
si0=0U;
l9=si0;
L14:;
{
si0=l3;
si1=l10;
si0+=si1;
sj0=i64_load(&i->m0,(U64)si0);
sj1=0ULL;
si0=sj0 != sj1;
if(si0){
goto L13;
}
si0=l9;
si1=1U;
si0+=si1;
l9=si0;
si0=l6;
si1=l10;
si2=8U;
si1+=si2;
l10=si1;
si0=si0 != si1;
if(si0){
goto L14;
}
}
si0=l7;
l9=si0;
L13:;
si0=l8;
si1=l2;
si0=si0 >= si1;
if(si0){
goto L1;
}
si0=l9;
si1=l4;
si0=si0 >= si1;
if(si0){
goto L8;
}
si0=l9;
si1=l2;
si0=si0 >= si1;
if(si0){
goto L21;
}
si0=l8;
si1=l4;
si0=si0 >= si1;
if(si0){
goto L20;
}
si0=8U;
l10=si0;
si0=l8;
si1=l9;
si2=l8;
si3=l9;
si2=si2 > si3;
l6=si2;
si0=si2?si0:si1;
l13=si0;
si0=!(si0);
if(si0){
goto L22;
}
si0=l13;
si1=268435455U;
si0=si0 > si1;
if(si0){
goto L19;
}
si0=l13;
si1=3U;
si0<<=(si1&31);
l7=si0;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L19;
}
si0=l7;
si0=!(si0);
if(si0){
goto L22;
}
si0=l7;
si1=1U;
si0=f15026(i,si0,si1);
l10=si0;
si0=!(si0);
if(si0){
goto L6;
}
L22:;
si0=l5;
si1=l13;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l5;
si1=l13;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l5;
si1=l10;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l8;
si1=l9;
si0=si0 >= si1;
if(si0){
goto L15;
}
si0=l13;
si1=l2;
si0=si0 >= si1;
if(si0){
goto L16;
}
si0=l1;
si1=l13;
si2=3U;
si1<<=(si2&31);
si0+=si1;
sj0=i64_load(&i->m0,(U64)si0);
l14=sj0;
goto L3;
L21:;
si0=l4;
si1=268435455U;
si0=si0 > si1;
if(si0){
goto L19;
}
si0=l4;
si1=3U;
si0<<=(si1&31);
l10=si0;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L19;
}
si0=l10;
if(si0){
goto L24;
}
si0=8U;
l9=si0;
goto L23;
L24:;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=l10;
si0=f15022(i,si0);
l9=si0;
si0=!(si0);
if(si0){
goto L7;
}
L23:;
si0=l9;
si1=l3;
si2=l10;
si0=f15143(i,si0,si1,si2);
l10=si0;
si0=l0;
si1=l4;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l0;
si1=l4;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l10;
i32_store(&i->m0,(U64)si0,si1);
goto L2;
L20:;
si0=l2;
si1=268435455U;
si0=si0 > si1;
if(si0){
goto L19;
}
si0=l2;
si1=3U;
si0<<=(si1&31);
l10=si0;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L19;
}
si0=l10;
if(si0){
goto L18;
}
si0=8U;
l9=si0;
goto L17;
L19:;
f53(i);
UNREACHABLE;
L18:;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=l10;
si0=f15022(i,si0);
l9=si0;
si0=!(si0);
if(si0){
goto L5;
}
L17:;
si0=l9;
si1=l1;
si2=l10;
si0=f15143(i,si0,si1,si2);
l10=si0;
si0=l0;
si1=l2;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l0;
si1=l2;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l10;
i32_store(&i->m0,(U64)si0,si1);
goto L2;
L16:;
si0=l13;
si1=l2;
si2=1200992U;
f594(i,si0,si1,si2);
UNREACHABLE;
L15:;
si0=l13;
si1=l2;
si0=si0 < si1;
if(si0){
goto L4;
}
si0=l13;
si1=l2;
si2=1201008U;
f594(i,si0,si1,si2);
UNREACHABLE;
L8:;
si0=1200896U;
si1=30U;
si2=1201056U;
f604(i,si0,si1,si2);
UNREACHABLE;
L7:;
si0=8U;
si1=l10;
f52(i,si0,si1);
UNREACHABLE;
L6:;
si0=8U;
si1=l7;
f52(i,si0,si1);
UNREACHABLE;
L5:;
si0=8U;
si1=l10;
f52(i,si0,si1);
UNREACHABLE;
L4:;
si0=l1;
si1=l13;
si2=3U;
si1<<=(si2&31);
si0+=si1;
sj0=i64_load(&i->m0,(U64)si0);
sj1=-1ULL;
sj0+=sj1;
l14=sj0;
L3:;
si0=l6;
si0=!(si0);
if(si0){
goto L31;
}
si0=l13;
si1=l4;
si0=si0 >= si1;
if(si0){
goto L32;
}
si0=l3;
si1=l13;
si2=3U;
si1<<=(si2&31);
si0+=si1;
sj0=i64_load(&i->m0,(U64)si0);
l15=sj0;
goto L30;
L32:;
si0=l13;
si1=l4;
si2=1201024U;
f594(i,si0,si1,si2);
UNREACHABLE;
L31:;
si0=l13;
si1=l4;
si0=si0 >= si1;
if(si0){
goto L29;
}
si0=l3;
si1=l13;
si2=3U;
si1<<=(si2&31);
si0+=si1;
sj0=i64_load(&i->m0,(U64)si0);
sj1=-1ULL;
sj0+=sj1;
l15=sj0;
L30:;
si0=l5;
si1=4U;
si0+=si1;
si1=l13;
f1299(i,si0,si1);
si0=l5;
si0=i32_load(&i->m0,(U64)si0+4U);
si1=l5;
si1=i32_load(&i->m0,(U64)si1+12U);
si2=3U;
si1<<=(si2&31);
si0+=si1;
sj1=l15;
sj2=l14;
sj1|=sj2;
sj2=1ULL;
sj1+=sj2;
l14=sj1;
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=l5;
si1=i32_load(&i->m0,(U64)si1+12U);
si2=1U;
si1+=si2;
l10=si1;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l11;
si1=l1;
si2=l13;
si3=3U;
si2<<=(si3&31);
si3=8U;
si2+=si3;
l9=si2;
si1+=si2;
l8=si1;
si0-=si1;
si1=3U;
si0>>=(si1&31);
l7=si0;
si1=l12;
si2=l3;
si3=l9;
si2+=si3;
l6=si2;
si1-=si2;
si2=3U;
si1>>=(si2&31);
l9=si1;
si2=l7;
si3=l9;
si2=si2 < si3;
si0=si2?si0:si1;
l7=si0;
sj0=l14;
sj1=0ULL;
si0=sj0 != sj1;
if(si0){
goto L34;
}
si0=0U;
l9=si0;
si0=l7;
si0=!(si0);
if(si0){
goto L33;
}
L35:;
{
si0=l6;
sj0=i64_load(&i->m0,(U64)si0);
si1=l8;
sj1=i64_load(&i->m0,(U64)si1);
sj0|=sj1;
l14=sj0;
sj1=l14;
sj2=1ULL;
sj1+=sj2;
l14=sj1;
si2=l9;
si3=255U;
si2&=si3;
l13=si2;
sj0=si2?sj0:sj1;
l15=sj0;
si0=l10;
si1=l5;
si1=i32_load(&i->m0,(U64)si1+8U);
si0=si0 != si1;
if(si0){
goto L36;
}
si0=l5;
si1=4U;
si0+=si1;
si1=l10;
f1299(i,si0,si1);
si0=l5;
si0=i32_load(&i->m0,(U64)si0+12U);
l10=si0;
L36:;
si0=l9;
sj1=l14;
sj2=0ULL;
si1=sj1 != sj2;
si2=l13;
si0=si2?si0:si1;
l9=si0;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+4U);
si1=l10;
si2=3U;
si1<<=(si2&31);
si0+=si1;
sj1=l15;
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=l5;
si1=i32_load(&i->m0,(U64)si1+12U);
si2=1U;
si1+=si2;
l10=si1;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l8;
si1=8U;
si0+=si1;
l8=si0;
si0=l6;
si1=8U;
si0+=si1;
l6=si0;
si0=l7;
si1=-1U;
si0+=si1;
l7=si0;
if(si0){
goto L35;
}
goto L33;
}
L34:;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+8U);
si1=l10;
si0-=si1;
si1=l7;
si0=si0 >= si1;
if(si0){
goto L39;
}
si0=l5;
si1=4U;
si0+=si1;
si1=l10;
si2=l7;
f1302(i,si0,si1,si2);
si0=l5;
si0=i32_load(&i->m0,(U64)si0+12U);
l10=si0;
goto L38;
L39:;
si0=l7;
si0=!(si0);
if(si0){
goto L37;
}
L38:;
si0=l7;
si1=1U;
si0&=si1;
l16=si0;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+4U);
l17=si0;
si0=l7;
si1=1U;
si0=si0 != si1;
if(si0){
goto L41;
}
si0=0U;
l9=si0;
goto L40;
L41:;
si0=0U;
l9=si0;
si0=0U;
si1=l7;
si2=536870910U;
si1&=si2;
si0-=si1;
l18=si0;
si0=l3;
si1=l13;
si2=3U;
si1<<=(si2&31);
l7=si1;
si0+=si1;
l19=si0;
si0=l1;
si1=l7;
si0+=si1;
l20=si0;
si0=l17;
si1=l10;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l21=si0;
si0=0U;
l7=si0;
L42:;
{
si0=l21;
si1=l9;
si0+=si1;
l13=si0;
si1=l19;
si2=l9;
si1+=si2;
l11=si1;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
si2=l20;
si3=l9;
si2+=si3;
l12=si2;
si3=8U;
si2+=si3;
sj2=i64_load(&i->m0,(U64)si2);
sj1|=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l13;
si1=8U;
si0+=si1;
si1=l11;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
si2=l12;
si3=16U;
si2+=si3;
sj2=i64_load(&i->m0,(U64)si2);
sj1|=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l9;
si1=16U;
si0+=si1;
l9=si0;
si0=l18;
si1=l7;
si2=-2U;
si1+=si2;
l7=si1;
si0=si0 != si1;
if(si0){
goto L42;
}
}
si0=0U;
si1=l7;
si0-=si1;
l9=si0;
si0=l10;
si1=l7;
si0-=si1;
l10=si0;
L40:;
si0=l16;
si0=!(si0);
if(si0){
goto L37;
}
si0=l17;
si1=l10;
si2=3U;
si1<<=(si2&31);
si0+=si1;
si1=l6;
si2=l9;
si3=3U;
si2<<=(si3&31);
l9=si2;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
si2=l8;
si3=l9;
si2+=si3;
sj2=i64_load(&i->m0,(U64)si2);
sj1|=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l10;
si1=1U;
si0+=si1;
l10=si0;
L37:;
si0=l5;
si1=l10;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=1U;
l9=si0;
L33:;
si0=l2;
si1=l4;
si0=si0 == si1;
if(si0){
goto L28;
}
si0=l2;
si1=l4;
si0-=si1;
si1=l4;
si2=l2;
si1-=si2;
si2=l2;
si3=l4;
si2=si2 > si3;
l8=si2;
si0=si2?si0:si1;
l6=si0;
si0=l1;
si1=l4;
si2=3U;
si1<<=(si2&31);
si0+=si1;
si1=l3;
si2=l2;
si3=3U;
si2<<=(si3&31);
si1+=si2;
si2=l8;
si0=si2?si0:si1;
l8=si0;
si0=l9;
si1=255U;
si0&=si1;
if(si0){
goto L43;
}
si0=l6;
si0=!(si0);
if(si0){
goto L27;
}
si0=l6;
si1=3U;
si0<<=(si1&31);
l3=si0;
si0=0U;
l9=si0;
L44:;
{
si0=l8;
sj0=i64_load(&i->m0,(U64)si0);
l14=sj0;
sj1=l14;
sj2=1ULL;
sj1+=sj2;
l14=sj1;
si2=l9;
si3=255U;
si2&=si3;
l6=si2;
sj0=si2?sj0:sj1;
l15=sj0;
si0=l10;
si1=l5;
si1=i32_load(&i->m0,(U64)si1+8U);
si0=si0 != si1;
if(si0){
goto L45;
}
si0=l5;
si1=4U;
si0+=si1;
si1=l10;
f1299(i,si0,si1);
si0=l5;
si0=i32_load(&i->m0,(U64)si0+12U);
l10=si0;
L45:;
si0=l9;
sj1=l14;
sj2=0ULL;
si1=sj1 != sj2;
si2=l6;
si0=si2?si0:si1;
l9=si0;
si0=l8;
si1=8U;
si0+=si1;
l8=si0;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+4U);
si1=l10;
si2=3U;
si1<<=(si2&31);
si0+=si1;
sj1=l15;
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=l5;
si1=i32_load(&i->m0,(U64)si1+12U);
si2=1U;
si1+=si2;
l10=si1;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l3;
si1=-8U;
si0+=si1;
l3=si0;
si0=!(si0);
if(si0){
goto L28;
}
goto L44;
}
L43:;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+8U);
si1=l10;
si0-=si1;
si1=l6;
si0=si0 >= si1;
if(si0){
goto L46;
}
si0=l5;
si1=4U;
si0+=si1;
si1=l10;
si2=l6;
f1302(i,si0,si1,si2);
si0=l5;
si0=i32_load(&i->m0,(U64)si0+12U);
l10=si0;
L46:;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+4U);
si1=l10;
si2=3U;
si1<<=(si2&31);
si0+=si1;
si1=l8;
si2=l6;
si3=3U;
si2<<=(si3&31);
si0=f15143(i,si0,si1,si2);
si0=l10;
si1=l6;
si0+=si1;
l10=si0;
goto L26;
L29:;
si0=l13;
si1=l4;
si2=1201040U;
f594(i,si0,si1,si2);
UNREACHABLE;
L28:;
si0=l9;
si1=255U;
si0&=si1;
if(si0){
goto L25;
}
L27:;
si0=l10;
si1=l5;
si1=i32_load(&i->m0,(U64)si1+8U);
si0=si0 != si1;
if(si0){
goto L47;
}
si0=l5;
si1=4U;
si0+=si1;
si1=l10;
f1299(i,si0,si1);
si0=l5;
si0=i32_load(&i->m0,(U64)si0+12U);
l10=si0;
L47:;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+4U);
si1=l10;
si2=3U;
si1<<=(si2&31);
si0+=si1;
sj1=1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si0=i32_load(&i->m0,(U64)si0+12U);
si1=1U;
si0+=si1;
l10=si0;
L26:;
si0=l5;
si1=l10;
i32_store(&i->m0,(U64)si0+12U,si1);
L25:;
si0=l0;
si1=l5;
sj1=i64_load(&i->m0,(U64)si1+4U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=8U;
si0+=si1;
si1=l5;
si2=4U;
si1+=si2;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
L2:;
si0=l5;
si1=16U;
si0+=si1;
i->g0=si0;
goto L0;
L1:;
si0=1200944U;
si1=30U;
si2=1201072U;
f604(i,si0,si1,si2);
UNREACHABLE;
L0:;
}

void f1038(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U64 l3) {
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 l8=0;
U32 l9=0;
U32 si0,si1,si2,si3;
U64 sj0,sj1,sj2,sj3;
sj0=l3;
sj1=0ULL;
si0=sj0 != sj1;
if(si0){
goto L7;
}
si0=8U;
l4=si0;
si0=0U;
l5=si0;
si0=l2;
si0=!(si0);
if(si0){
goto L8;
}
si0=l2;
si1=268435455U;
si0=si0 > si1;
if(si0){
goto L4;
}
si0=l2;
si1=3U;
si0<<=(si1&31);
l6=si0;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L4;
}
si0=l6;
si0=!(si0);
if(si0){
goto L8;
}
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=l6;
si0=f15022(i,si0);
l4=si0;
si0=!(si0);
if(si0){
goto L5;
}
si0=l6;
l5=si0;
L8:;
si0=l4;
si1=l1;
si2=l5;
si0=f15143(i,si0,si1,si2);
goto L6;
L7:;
si0=l2;
si0=!(si0);
if(si0){
goto L10;
}
si0=l2;
si1=268435455U;
si0=si0 > si1;
if(si0){
goto L4;
}
si0=l2;
si1=3U;
si0<<=(si1&31);
l7=si0;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L4;
}
si0=8U;
l4=si0;
si0=l7;
si0=!(si0);
if(si0){
goto L11;
}
si0=l7;
si1=1U;
si0=f15026(i,si0,si1);
l4=si0;
si0=!(si0);
if(si0){
goto L3;
}
L11:;
si0=l2;
si1=3U;
si0<<=(si1&31);
l8=si0;
si0=l2;
si1=-1U;
si0+=si1;
si1=536870911U;
si0&=si1;
si1=1U;
si0+=si1;
l9=si0;
si0=0U;
l5=si0;
si0=0U;
l6=si0;
L14:;
{
si0=l1;
si1=l5;
si0+=si1;
sj0=i64_load(&i->m0,(U64)si0);
sj1=0ULL;
si0=sj0 != sj1;
if(si0){
goto L13;
}
si0=l6;
si1=-1U;
si0+=si1;
l6=si0;
si0=l8;
si1=l5;
si2=8U;
si1+=si2;
l5=si1;
si0=si0 != si1;
if(si0){
goto L14;
}
goto L12;
}
L13:;
si0=l6;
si0=!(si0);
if(si0){
goto L9;
}
si0=0U;
si1=l6;
si0-=si1;
l9=si0;
L12:;
si0=l4;
sj1=0ULL;
sj2=l3;
sj1-=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l9;
si1=l2;
si0=si0 > si1;
if(si0){
goto L2;
}
si0=l9;
si1=1U;
si0=si0 == si1;
if(si0){
goto L15;
}
si0=l4;
si1=8U;
si0+=si1;
si1=255U;
si2=l9;
si3=3U;
si2<<=(si3&31);
si3=-8U;
si2+=si3;
si0=f15145(i,si0,si1,si2);
L15:;
si0=l9;
si1=l2;
si0=si0 >= si1;
if(si0){
goto L1;
}
si0=l4;
si1=l9;
si2=3U;
si1<<=(si2&31);
l5=si1;
si0+=si1;
si1=l1;
si2=l5;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
sj2=-1ULL;
sj1+=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=l9;
si2=1U;
si1+=si2;
l5=si1;
si2=3U;
si1<<=(si2&31);
l6=si1;
si0+=si1;
si1=l1;
si2=l6;
si1+=si2;
si2=l2;
si3=l5;
si2-=si3;
si3=3U;
si2<<=(si3&31);
si0=f15143(i,si0,si1,si2);
goto L6;
L10:;
si0=0U;
si1=0U;
si2=1201204U;
f594(i,si0,si1,si2);
UNREACHABLE;
L9:;
si0=l4;
sj1=0ULL;
sj2=0ULL;
si3=l1;
sj3=i64_load(&i->m0,(U64)si3);
sj2-=sj3;
sj3=l3;
sj2|=sj3;
sj1-=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=8U;
si0+=si1;
si1=l1;
si2=8U;
si1+=si2;
si2=l7;
si3=-8U;
si2+=si3;
si0=f15143(i,si0,si1,si2);
L6:;
si0=l0;
si1=l2;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l0;
si1=l2;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l4;
i32_store(&i->m0,(U64)si0,si1);
goto L0;
L5:;
si0=8U;
si1=l6;
f52(i,si0,si1);
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
si0=l9;
si1=l2;
si2=1201220U;
f597(i,si0,si1,si2);
UNREACHABLE;
L1:;
si0=l9;
si1=l2;
si2=1201236U;
f594(i,si0,si1,si2);
UNREACHABLE;
L0:;
}

void f1039(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4) {
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
U32 l18=0;
U32 l19=0;
U32 l20=0;
U32 l21=0;
U64 l22=0;
U32 si0,si1,si2,si3,si4;
U64 sj0,sj1,sj2,sj3;
si0=i->g0;
si1=16U;
si0-=si1;
l5=si0;
i->g0=si0;
si0=l2;
si1=3U;
si0<<=(si1&31);
l6=si0;
si0=l2;
si0=!(si0);
if(si0){
goto L6;
}
si0=l2;
si1=-1U;
si0+=si1;
si1=536870911U;
si0&=si1;
si1=1U;
si0+=si1;
l7=si0;
si0=0U;
l8=si0;
si0=l6;
l9=si0;
si0=l1;
l10=si0;
L8:;
{
si0=l10;
sj0=i64_load(&i->m0,(U64)si0);
sj1=0ULL;
si0=sj0 != sj1;
if(si0){
goto L7;
}
si0=l8;
si1=1U;
si0+=si1;
l8=si0;
si0=l10;
si1=8U;
si0+=si1;
l10=si0;
si0=l9;
si1=-8U;
si0+=si1;
l9=si0;
if(si0){
goto L8;
}
}
si0=l7;
l8=si0;
L7:;
si0=l4;
if(si0){
goto L5;
}
si0=l8;
si1=l2;
si0=si0 < si1;
if(si0){
goto L4;
}
goto L1;
L6:;
si0=0U;
l8=si0;
si0=l4;
si0=!(si0);
if(si0){
goto L1;
}
L5:;
si0=l1;
si1=l6;
si0+=si1;
l11=si0;
si0=l3;
si1=l4;
si2=3U;
si1<<=(si2&31);
l6=si1;
si0+=si1;
l12=si0;
si0=l4;
si1=-1U;
si0+=si1;
si1=536870911U;
si0&=si1;
si1=1U;
si0+=si1;
l7=si0;
si0=0U;
l10=si0;
si0=0U;
l9=si0;
L10:;
{
si0=l3;
si1=l10;
si0+=si1;
sj0=i64_load(&i->m0,(U64)si0);
sj1=0ULL;
si0=sj0 != sj1;
if(si0){
goto L9;
}
si0=l9;
si1=1U;
si0+=si1;
l9=si0;
si0=l6;
si1=l10;
si2=8U;
si1+=si2;
l10=si1;
si0=si0 != si1;
if(si0){
goto L10;
}
}
si0=l7;
l9=si0;
L9:;
si0=l8;
si1=l2;
si0=si0 >= si1;
if(si0){
goto L1;
}
si0=l9;
si1=l4;
si0=si0 >= si1;
if(si0){
goto L4;
}
si0=l9;
si1=l2;
si0=si0 >= si1;
if(si0){
goto L15;
}
si0=l8;
si1=l4;
si0=si0 >= si1;
if(si0){
goto L19;
}
si0=8U;
l6=si0;
si0=l8;
si1=l9;
si2=l8;
si3=l9;
si2=si2 < si3;
l7=si2;
si0=si2?si0:si1;
l10=si0;
si0=!(si0);
if(si0){
goto L20;
}
si0=l10;
si1=268435455U;
si0=si0 > si1;
if(si0){
goto L14;
}
si0=l10;
si1=3U;
si0<<=(si1&31);
l13=si0;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L14;
}
si0=l13;
si0=!(si0);
if(si0){
goto L20;
}
si0=l13;
si1=1U;
si0=f15026(i,si0,si1);
l6=si0;
si0=!(si0);
if(si0){
goto L11;
}
L20:;
si0=l5;
si1=l10;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l5;
si1=l10;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l5;
si1=l6;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=-1U;
si1=l8;
si2=l9;
si1=si1 != si2;
si2=l7;
si0=si2?si0:si1;
si1=255U;
si0&=si1;
switch(si0){
case 0:
goto L16;
case 1:
goto L18;
default:
goto L17;
}
L19:;
si0=l4;
si1=268435455U;
si0=si0 > si1;
if(si0){
goto L14;
}
si0=l4;
si1=3U;
si0<<=(si1&31);
l10=si0;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L14;
}
si0=l10;
if(si0){
goto L22;
}
si0=8U;
l9=si0;
goto L21;
L22:;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=l10;
si0=f15022(i,si0);
l9=si0;
si0=!(si0);
if(si0){
goto L12;
}
L21:;
si0=l9;
si1=l3;
si2=l10;
si0=f15143(i,si0,si1,si2);
l10=si0;
si0=l0;
si1=l4;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l0;
si1=l4;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l10;
i32_store(&i->m0,(U64)si0,si1);
goto L2;
L18:;
si0=l7;
if(si0){
goto L23;
}
si0=l8;
si1=l9;
si0-=si1;
l7=si0;
si0=l3;
si1=l9;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l14=si0;
si0=l8;
si1=l9;
si0=si0 != si1;
if(si0){
goto L25;
}
si0=l10;
l13=si0;
goto L24;
L25:;
si0=l5;
si1=4U;
si0+=si1;
si1=l10;
si2=l7;
f1302(i,si0,si1,si2);
si0=l5;
si0=i32_load(&i->m0,(U64)si0+8U);
l10=si0;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+4U);
l6=si0;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+12U);
l13=si0;
L24:;
si0=l6;
si1=l13;
si2=3U;
si1<<=(si2&31);
si0+=si1;
si1=l14;
si2=l7;
si3=3U;
si2<<=(si3&31);
si0=f15143(i,si0,si1,si2);
si0=l5;
si1=l13;
si2=l7;
si1+=si2;
l7=si1;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l3;
si1=l8;
si2=3U;
si1<<=(si2&31);
l13=si1;
si0+=si1;
sj0=i64_load(&i->m0,(U64)si0);
si1=l1;
si2=l13;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
sj2=-1ULL;
sj1^=sj2;
sj0&=sj1;
l15=sj0;
si0=l7;
si1=l10;
si0=si0 != si1;
if(si0){
goto L26;
}
si0=l5;
si1=4U;
si0+=si1;
si1=l10;
f1299(i,si0,si1);
si0=l5;
si0=i32_load(&i->m0,(U64)si0+4U);
l6=si0;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+12U);
l7=si0;
L26:;
si0=l6;
si1=l7;
si2=3U;
si1<<=(si2&31);
si0+=si1;
sj1=l15;
i64_store(&i->m0,(U64)si0,sj1);
goto L3;
L23:;
si0=l9;
si1=l8;
si2=1201300U;
f683(i,si0,si1,si2);
UNREACHABLE;
L17:;
si0=l1;
si1=l8;
si2=3U;
si1<<=(si2&31);
si0+=si1;
sj0=i64_load(&i->m0,(U64)si0);
l15=sj0;
si0=l5;
si1=4U;
si0+=si1;
si1=l10;
f1299(i,si0,si1);
si0=l5;
si0=i32_load(&i->m0,(U64)si0+4U);
si1=l5;
si1=i32_load(&i->m0,(U64)si1+12U);
si2=3U;
si1<<=(si2&31);
si0+=si1;
sj1=0ULL;
sj2=l15;
sj1-=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=l5;
si1=i32_load(&i->m0,(U64)si1+12U);
si2=1U;
si1+=si2;
l16=si1;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l8;
si1=1U;
si0+=si1;
l10=si0;
si0=l8;
si1=l9;
si0=si0 >= si1;
if(si0){
goto L13;
}
si0=l5;
si0=i32_load(&i->m0,(U64)si0+8U);
si1=l16;
si0-=si1;
si1=l1;
si2=l9;
si3=3U;
si2<<=(si3&31);
si1+=si2;
l17=si1;
si2=l1;
si3=l10;
si4=3U;
si3<<=(si4&31);
si2+=si3;
si1-=si2;
l7=si1;
si2=3U;
si1>>=(si2&31);
l6=si1;
si0=si0 >= si1;
if(si0){
goto L27;
}
si0=l5;
si1=4U;
si0+=si1;
si1=l16;
si2=l6;
f1302(i,si0,si1,si2);
si0=l5;
si0=i32_load(&i->m0,(U64)si0+12U);
l16=si0;
L27:;
si0=l10;
si1=l9;
si0=si0 == si1;
if(si0){
goto L28;
}
si0=l5;
si0=i32_load(&i->m0,(U64)si0+4U);
l18=si0;
si0=l6;
si1=3U;
si0&=si1;
l13=si0;
si0=l6;
si1=-1U;
si0+=si1;
si1=3U;
si0=si0 >= si1;
if(si0){
goto L30;
}
si0=0U;
l10=si0;
goto L29;
L30:;
si0=l1;
si1=l8;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l19=si0;
si0=l18;
si1=l16;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l20=si0;
si0=0U;
l10=si0;
si0=0U;
si1=l7;
si2=3U;
si1>>=(si2&31);
si2=536870908U;
si1&=si2;
si0-=si1;
l21=si0;
si0=0U;
l14=si0;
L31:;
{
si0=l20;
si1=l10;
si0+=si1;
l6=si0;
si1=l19;
si2=l10;
si1+=si2;
l7=si1;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
sj2=-1ULL;
sj1^=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l6;
si1=8U;
si0+=si1;
si1=l7;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
sj2=-1ULL;
sj1^=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l6;
si1=16U;
si0+=si1;
si1=l7;
si2=24U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
sj2=-1ULL;
sj1^=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l6;
si1=24U;
si0+=si1;
si1=l7;
si2=32U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
sj2=-1ULL;
sj1^=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l10;
si1=32U;
si0+=si1;
l10=si0;
si0=l21;
si1=l14;
si2=-4U;
si1+=si2;
l14=si1;
si0=si0 != si1;
if(si0){
goto L31;
}
}
si0=0U;
si1=l14;
si0-=si1;
l10=si0;
si0=l16;
si1=l14;
si0-=si1;
l16=si0;
L29:;
si0=l13;
si0=!(si0);
if(si0){
goto L28;
}
si0=l8;
si1=3U;
si0<<=(si1&31);
si1=l10;
si2=3U;
si1<<=(si2&31);
si0+=si1;
si1=l1;
si0+=si1;
si1=8U;
si0+=si1;
l10=si0;
si0=l16;
si1=l13;
si0+=si1;
l7=si0;
si0=l18;
si1=l16;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l6=si0;
L32:;
{
si0=l6;
si1=l10;
sj1=i64_load(&i->m0,(U64)si1);
sj2=-1ULL;
sj1^=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l10;
si1=8U;
si0+=si1;
l10=si0;
si0=l6;
si1=8U;
si0+=si1;
l6=si0;
si0=l13;
si1=-1U;
si0+=si1;
l13=si0;
if(si0){
goto L32;
}
}
si0=l7;
l16=si0;
L28:;
si0=l3;
si1=l9;
si2=3U;
si1<<=(si2&31);
si0+=si1;
sj0=i64_load(&i->m0,(U64)si0);
sj1=-1ULL;
sj0+=sj1;
si1=l17;
sj1=i64_load(&i->m0,(U64)si1);
sj2=-1ULL;
sj1^=sj2;
sj0&=sj1;
l15=sj0;
si0=l5;
si1=l16;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l16;
si1=l5;
si1=i32_load(&i->m0,(U64)si1+8U);
si0=si0 != si1;
if(si0){
goto L33;
}
si0=l5;
si1=4U;
si0+=si1;
si1=l16;
f1299(i,si0,si1);
si0=l5;
si0=i32_load(&i->m0,(U64)si0+12U);
l16=si0;
L33:;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+4U);
si1=l16;
si2=3U;
si1<<=(si2&31);
si0+=si1;
sj1=l15;
i64_store(&i->m0,(U64)si0,sj1);
goto L3;
L16:;
si0=l3;
si1=l9;
si2=3U;
si1<<=(si2&31);
si0+=si1;
sj0=i64_load(&i->m0,(U64)si0);
l15=sj0;
si0=l1;
si1=l8;
si2=3U;
si1<<=(si2&31);
si0+=si1;
sj0=i64_load(&i->m0,(U64)si0);
l22=sj0;
si0=l5;
si1=4U;
si0+=si1;
si1=l10;
f1299(i,si0,si1);
si0=l5;
si0=i32_load(&i->m0,(U64)si0+4U);
si1=l5;
si1=i32_load(&i->m0,(U64)si1+12U);
si2=3U;
si1<<=(si2&31);
si0+=si1;
sj1=l15;
sj2=-1ULL;
sj1+=sj2;
sj2=l22;
sj3=-1ULL;
sj2^=sj3;
sj1&=sj2;
sj2=1ULL;
sj1+=sj2;
i64_store(&i->m0,(U64)si0,sj1);
goto L3;
L15:;
si0=8U;
l10=si0;
si0=l8;
si0=!(si0);
if(si0){
goto L35;
}
si0=l8;
si1=268435455U;
si0=si0 > si1;
if(si0){
goto L14;
}
si0=l8;
si1=3U;
si0<<=(si1&31);
l6=si0;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L14;
}
si0=l6;
si0=!(si0);
if(si0){
goto L35;
}
si0=l6;
si1=1U;
si0=f15026(i,si0,si1);
l10=si0;
si0=!(si0);
if(si0){
goto L34;
}
L35:;
si0=l5;
si1=l8;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l5;
si1=l8;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l5;
si1=l10;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l1;
si1=l8;
si2=3U;
si1<<=(si2&31);
si0+=si1;
sj0=i64_load(&i->m0,(U64)si0);
l15=sj0;
si0=l5;
si1=4U;
si0+=si1;
si1=l8;
f1299(i,si0,si1);
si0=l5;
si0=i32_load(&i->m0,(U64)si0+4U);
si1=l5;
si1=i32_load(&i->m0,(U64)si1+12U);
si2=3U;
si1<<=(si2&31);
si0+=si1;
sj1=0ULL;
sj2=l15;
sj1-=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=l5;
si1=i32_load(&i->m0,(U64)si1+12U);
si2=1U;
si1+=si2;
l6=si1;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l5;
si0=i32_load(&i->m0,(U64)si0+8U);
si1=l6;
si0-=si1;
si1=l11;
si2=l1;
si3=l8;
si4=1U;
si3+=si4;
l7=si3;
si4=3U;
si3<<=(si4&31);
si2+=si3;
si1-=si2;
l11=si1;
si2=3U;
si1>>=(si2&31);
l10=si1;
si0=si0 >= si1;
if(si0){
goto L36;
}
si0=l5;
si1=4U;
si0+=si1;
si1=l6;
si2=l10;
f1302(i,si0,si1,si2);
si0=l5;
si0=i32_load(&i->m0,(U64)si0+12U);
l6=si0;
L36:;
si0=l7;
si1=l2;
si0=si0 == si1;
if(si0){
goto L37;
}
si0=l5;
si0=i32_load(&i->m0,(U64)si0+4U);
l21=si0;
si0=l10;
si1=3U;
si0&=si1;
l13=si0;
si0=l10;
si1=-1U;
si0+=si1;
si1=3U;
si0=si0 >= si1;
if(si0){
goto L39;
}
si0=0U;
l10=si0;
goto L38;
L39:;
si0=l1;
si1=l8;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l14=si0;
si0=l21;
si1=l6;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l19=si0;
si0=0U;
l10=si0;
si0=0U;
si1=l11;
si2=3U;
si1>>=(si2&31);
si2=536870908U;
si1&=si2;
si0-=si1;
l20=si0;
si0=0U;
l12=si0;
L40:;
{
si0=l19;
si1=l10;
si0+=si1;
l7=si0;
si1=l14;
si2=l10;
si1+=si2;
l11=si1;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
sj2=-1ULL;
sj1^=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l7;
si1=8U;
si0+=si1;
si1=l11;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
sj2=-1ULL;
sj1^=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l7;
si1=16U;
si0+=si1;
si1=l11;
si2=24U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
sj2=-1ULL;
sj1^=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l7;
si1=24U;
si0+=si1;
si1=l11;
si2=32U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
sj2=-1ULL;
sj1^=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l10;
si1=32U;
si0+=si1;
l10=si0;
si0=l20;
si1=l12;
si2=-4U;
si1+=si2;
l12=si1;
si0=si0 != si1;
if(si0){
goto L40;
}
}
si0=0U;
si1=l12;
si0-=si1;
l10=si0;
si0=l6;
si1=l12;
si0-=si1;
l6=si0;
L38:;
si0=l13;
si0=!(si0);
if(si0){
goto L37;
}
si0=l8;
si1=3U;
si0<<=(si1&31);
si1=l10;
si2=3U;
si1<<=(si2&31);
si0+=si1;
si1=l1;
si0+=si1;
si1=8U;
si0+=si1;
l10=si0;
si0=l6;
si1=l13;
si0+=si1;
l8=si0;
si0=l21;
si1=l6;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l6=si0;
L41:;
{
si0=l6;
si1=l10;
sj1=i64_load(&i->m0,(U64)si1);
sj2=-1ULL;
sj1^=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l10;
si1=8U;
si0+=si1;
l10=si0;
si0=l6;
si1=8U;
si0+=si1;
l6=si0;
si0=l13;
si1=-1U;
si0+=si1;
l13=si0;
if(si0){
goto L41;
}
}
si0=l8;
l6=si0;
L37:;
si0=l5;
si1=l6;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l9;
si1=l2;
si0=si0 == si1;
if(si0){
goto L42;
}
si0=0U;
si1=l9;
si2=l2;
si1-=si2;
l8=si1;
si2=-1U;
si1+=si2;
l10=si1;
si2=l10;
si3=l8;
si2=si2 > si3;
si0=si2?si0:si1;
l10=si0;
si0=l8;
si1=1U;
si0=si0 > si1;
si1=l9;
si2=l2;
si1=si1 != si2;
si0&=si1;
sj0=(U64)(si0);
l15=sj0;
si0=l6;
si1=3U;
si0<<=(si1&31);
l8=si0;
L43:;
{
si0=l6;
si1=l5;
si1=i32_load(&i->m0,(U64)si1+8U);
si0=si0 != si1;
if(si0){
goto L44;
}
si0=l5;
si1=4U;
si0+=si1;
si1=l6;
si2=l10;
si3=1U;
si2+=si3;
f1302(i,si0,si1,si2);
L44:;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+4U);
si1=l8;
si0+=si1;
sj1=-1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=l6;
si2=1U;
si1+=si2;
l6=si1;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l10;
si1=1U;
si0=si0 > si1;
l7=si0;
si0=l8;
si1=8U;
si0+=si1;
l8=si0;
sj0=l15;
si0=!(sj0);
l11=si0;
si0=0U;
si1=l10;
si2=-1U;
si1+=si2;
l13=si1;
si2=l13;
si3=l10;
si2=si2 > si3;
si0=si2?si0:si1;
l10=si0;
sj0=l15;
sj1=0ULL;
si2=l7;
sj0=si2?sj0:sj1;
l15=sj0;
si0=l11;
si0=!(si0);
if(si0){
goto L43;
}
}
L42:;
si0=l3;
si1=l9;
si2=3U;
si1<<=(si2&31);
si0+=si1;
sj0=i64_load(&i->m0,(U64)si0);
sj1=-1ULL;
sj0+=sj1;
l15=sj0;
si0=l6;
si1=l5;
si1=i32_load(&i->m0,(U64)si1+8U);
si0=si0 != si1;
if(si0){
goto L45;
}
si0=l5;
si1=4U;
si0+=si1;
si1=l6;
f1299(i,si0,si1);
si0=l5;
si0=i32_load(&i->m0,(U64)si0+12U);
l6=si0;
L45:;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+4U);
si1=l6;
si2=3U;
si1<<=(si2&31);
si0+=si1;
sj1=l15;
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=l5;
si1=i32_load(&i->m0,(U64)si1+12U);
si2=1U;
si1+=si2;
l10=si1;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l3;
si1=l9;
si2=1U;
si1+=si2;
l9=si1;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l6=si0;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+8U);
si1=l10;
si0-=si1;
si1=l4;
si2=l9;
si1-=si2;
l9=si1;
si0=si0 >= si1;
if(si0){
goto L46;
}
si0=l5;
si1=4U;
si0+=si1;
si1=l10;
si2=l9;
f1302(i,si0,si1,si2);
si0=l5;
si0=i32_load(&i->m0,(U64)si0+12U);
l10=si0;
L46:;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+4U);
si1=l10;
si2=3U;
si1<<=(si2&31);
si0+=si1;
si1=l6;
si2=l9;
si3=3U;
si2<<=(si3&31);
si0=f15143(i,si0,si1,si2);
si0=l0;
si1=8U;
si0+=si1;
si1=l10;
si2=l9;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l5;
sj1=i64_load(&i->m0,(U64)si1+4U);
i64_store(&i->m0,(U64)si0,sj1);
goto L2;
L34:;
si0=8U;
si1=l6;
f52(i,si0,si1);
UNREACHABLE;
L14:;
f53(i);
UNREACHABLE;
L13:;
si0=l10;
si1=l9;
si2=1201284U;
f683(i,si0,si1,si2);
UNREACHABLE;
L12:;
si0=8U;
si1=l10;
f52(i,si0,si1);
UNREACHABLE;
L11:;
si0=8U;
si1=l13;
f52(i,si0,si1);
UNREACHABLE;
L4:;
si0=1200896U;
si1=30U;
si2=1201348U;
f604(i,si0,si1,si2);
UNREACHABLE;
L3:;
si0=l5;
si1=l5;
si1=i32_load(&i->m0,(U64)si1+12U);
si2=1U;
si1+=si2;
l14=si1;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l8;
si1=l9;
si2=l8;
si3=l9;
si2=si2 > si3;
si0=si2?si0:si1;
l6=si0;
si1=1U;
si0+=si1;
l10=si0;
si0=l6;
si1=l2;
si0=si0 >= si1;
if(si0){
goto L48;
}
si0=l6;
si1=l4;
si0=si0 < si1;
if(si0){
goto L47;
}
si0=l10;
si1=l4;
si2=1201316U;
f593(i,si0,si1,si2);
UNREACHABLE;
L48:;
si0=l10;
si1=l2;
si2=1201332U;
f593(i,si0,si1,si2);
UNREACHABLE;
L47:;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+8U);
si1=l14;
si0-=si1;
si1=l11;
si2=l1;
si3=l10;
si4=3U;
si3<<=(si4&31);
l10=si3;
si2+=si3;
l19=si2;
si1-=si2;
si2=3U;
si1>>=(si2&31);
l9=si1;
si2=l12;
si3=l3;
si4=l10;
si3+=si4;
l20=si3;
si2-=si3;
si3=3U;
si2>>=(si3&31);
l10=si2;
si3=l9;
si4=l10;
si3=si3 < si4;
si1=si3?si1:si2;
l9=si1;
si0=si0 >= si1;
if(si0){
goto L51;
}
si0=l5;
si1=4U;
si0+=si1;
si1=l14;
si2=l9;
f1302(i,si0,si1,si2);
si0=l5;
si0=i32_load(&i->m0,(U64)si0+12U);
l14=si0;
goto L50;
L51:;
si0=l9;
si0=!(si0);
if(si0){
goto L49;
}
L50:;
si0=l9;
si1=1U;
si0&=si1;
l21=si0;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+4U);
l16=si0;
si0=l9;
si1=1U;
si0=si0 != si1;
if(si0){
goto L53;
}
si0=0U;
l10=si0;
goto L52;
L53:;
si0=0U;
l10=si0;
si0=0U;
si1=l9;
si2=536870910U;
si1&=si2;
si0-=si1;
l11=si0;
si0=l3;
si1=l6;
si2=3U;
si1<<=(si2&31);
l9=si1;
si0+=si1;
l13=si0;
si0=l1;
si1=l9;
si0+=si1;
l12=si0;
si0=l16;
si1=l14;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l1=si0;
si0=0U;
l9=si0;
L54:;
{
si0=l1;
si1=l10;
si0+=si1;
l6=si0;
si1=l13;
si2=l10;
si1+=si2;
l8=si1;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
si2=l12;
si3=l10;
si2+=si3;
l7=si2;
si3=8U;
si2+=si3;
sj2=i64_load(&i->m0,(U64)si2);
sj3=-1ULL;
sj2^=sj3;
sj1&=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l6;
si1=8U;
si0+=si1;
si1=l8;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
si2=l7;
si3=16U;
si2+=si3;
sj2=i64_load(&i->m0,(U64)si2);
sj3=-1ULL;
sj2^=sj3;
sj1&=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l10;
si1=16U;
si0+=si1;
l10=si0;
si0=l11;
si1=l9;
si2=-2U;
si1+=si2;
l9=si1;
si0=si0 != si1;
if(si0){
goto L54;
}
}
si0=0U;
si1=l9;
si0-=si1;
l10=si0;
si0=l14;
si1=l9;
si0-=si1;
l14=si0;
L52:;
si0=l21;
si0=!(si0);
if(si0){
goto L49;
}
si0=l16;
si1=l14;
si2=3U;
si1<<=(si2&31);
si0+=si1;
si1=l20;
si2=l10;
si3=3U;
si2<<=(si3&31);
l10=si2;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
si2=l19;
si3=l10;
si2+=si3;
sj2=i64_load(&i->m0,(U64)si2);
sj3=-1ULL;
sj2^=sj3;
sj1&=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l14;
si1=1U;
si0+=si1;
l14=si0;
L49:;
si0=l5;
si1=l14;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l4;
si1=l2;
si0=si0 <= si1;
if(si0){
goto L55;
}
si0=l3;
si1=l2;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l9=si0;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+8U);
si1=l14;
si0-=si1;
si1=l4;
si2=l2;
si1-=si2;
l10=si1;
si0=si0 >= si1;
if(si0){
goto L56;
}
si0=l5;
si1=4U;
si0+=si1;
si1=l14;
si2=l10;
f1302(i,si0,si1,si2);
si0=l5;
si0=i32_load(&i->m0,(U64)si0+12U);
l14=si0;
L56:;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+4U);
si1=l14;
si2=3U;
si1<<=(si2&31);
si0+=si1;
si1=l9;
si2=l10;
si3=3U;
si2<<=(si3&31);
si0=f15143(i,si0,si1,si2);
si0=l5;
si1=l14;
si2=l10;
si1+=si2;
i32_store(&i->m0,(U64)si0+12U,si1);
L55:;
si0=l0;
si1=l5;
sj1=i64_load(&i->m0,(U64)si1+4U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=8U;
si0+=si1;
si1=l5;
si2=4U;
si1+=si2;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
L2:;
si0=l5;
si1=16U;
si0+=si1;
i->g0=si0;
goto L0;
L1:;
si0=1200944U;
si1=30U;
si2=1201364U;
f604(i,si0,si1,si2);
UNREACHABLE;
L0:;
}

void f1040(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4) {
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
U32 si0,si1,si2,si3,si4;
U64 sj0,sj1,sj2;
si0=i->g0;
si1=16U;
si0-=si1;
l5=si0;
i->g0=si0;
si0=l2;
si1=3U;
si0<<=(si1&31);
l6=si0;
si0=l2;
si0=!(si0);
if(si0){
goto L13;
}
si0=l2;
si1=-1U;
si0+=si1;
si1=536870911U;
si0&=si1;
si1=1U;
si0+=si1;
l7=si0;
si0=0U;
l8=si0;
si0=l6;
l9=si0;
si0=l1;
l10=si0;
L15:;
{
si0=l10;
sj0=i64_load(&i->m0,(U64)si0);
sj1=0ULL;
si0=sj0 != sj1;
if(si0){
goto L14;
}
si0=l8;
si1=1U;
si0+=si1;
l8=si0;
si0=l10;
si1=8U;
si0+=si1;
l10=si0;
si0=l9;
si1=-8U;
si0+=si1;
l9=si0;
if(si0){
goto L15;
}
}
si0=l7;
l8=si0;
L14:;
si0=l4;
if(si0){
goto L12;
}
si0=l8;
si1=l2;
si0=si0 < si1;
if(si0){
goto L11;
}
goto L1;
L13:;
si0=0U;
l8=si0;
si0=l4;
si0=!(si0);
if(si0){
goto L1;
}
L12:;
si0=l1;
si1=l6;
si0+=si1;
l11=si0;
si0=l3;
si1=l4;
si2=3U;
si1<<=(si2&31);
l6=si1;
si0+=si1;
l12=si0;
si0=l4;
si1=-1U;
si0+=si1;
si1=536870911U;
si0&=si1;
si1=1U;
si0+=si1;
l7=si0;
si0=0U;
l10=si0;
si0=0U;
l9=si0;
L17:;
{
si0=l3;
si1=l10;
si0+=si1;
sj0=i64_load(&i->m0,(U64)si0);
sj1=0ULL;
si0=sj0 != sj1;
if(si0){
goto L16;
}
si0=l9;
si1=1U;
si0+=si1;
l9=si0;
si0=l6;
si1=l10;
si2=8U;
si1+=si2;
l10=si1;
si0=si0 != si1;
if(si0){
goto L17;
}
}
si0=l7;
l9=si0;
L16:;
si0=l8;
si1=l2;
si0=si0 >= si1;
if(si0){
goto L1;
}
si0=l9;
si1=l4;
si0=si0 >= si1;
if(si0){
goto L11;
}
si0=l9;
si1=l2;
si0=si0 >= si1;
if(si0){
goto L24;
}
si0=l8;
si1=l4;
si0=si0 >= si1;
if(si0){
goto L23;
}
si0=8U;
l6=si0;
si0=l8;
si1=l9;
si2=l8;
si3=l9;
si2=si2 < si3;
l7=si2;
si0=si2?si0:si1;
l10=si0;
si0=!(si0);
if(si0){
goto L25;
}
si0=l10;
si1=268435455U;
si0=si0 > si1;
if(si0){
goto L22;
}
si0=l10;
si1=3U;
si0<<=(si1&31);
l13=si0;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L22;
}
si0=l13;
si0=!(si0);
if(si0){
goto L25;
}
si0=l13;
si1=1U;
si0=f15026(i,si0,si1);
l6=si0;
si0=!(si0);
if(si0){
goto L9;
}
L25:;
si0=l8;
si1=l9;
si0=si0 > si1;
l13=si0;
si0=l5;
si1=l10;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l5;
si1=l10;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l5;
si1=l6;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=-1U;
si1=l8;
si2=l9;
si1=si1 != si2;
si2=l7;
si0=si2?si0:si1;
si1=255U;
si0&=si1;
switch(si0){
case 0:
goto L6;
case 1:
goto L18;
default:
goto L19;
}
L24:;
si0=l2;
si1=268435455U;
si0=si0 > si1;
if(si0){
goto L22;
}
si0=l2;
si1=3U;
si0<<=(si1&31);
l10=si0;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L22;
}
si0=l10;
if(si0){
goto L27;
}
si0=8U;
l9=si0;
goto L26;
L27:;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=l10;
si0=f15022(i,si0);
l9=si0;
si0=!(si0);
if(si0){
goto L10;
}
L26:;
si0=l9;
si1=l1;
si2=l10;
si0=f15143(i,si0,si1,si2);
l10=si0;
si0=l0;
si1=l2;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l0;
si1=l2;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l10;
i32_store(&i->m0,(U64)si0,si1);
goto L4;
L23:;
si0=l4;
si1=268435455U;
si0=si0 > si1;
if(si0){
goto L22;
}
si0=l4;
si1=3U;
si0<<=(si1&31);
l10=si0;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L22;
}
si0=l10;
if(si0){
goto L21;
}
si0=8U;
l9=si0;
goto L20;
L22:;
f53(i);
UNREACHABLE;
L21:;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=l10;
si0=f15022(i,si0);
l9=si0;
si0=!(si0);
if(si0){
goto L8;
}
L20:;
si0=l9;
si1=l3;
si2=l10;
si0=f15143(i,si0,si1,si2);
l10=si0;
si0=l0;
si1=l4;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l0;
si1=l4;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l10;
i32_store(&i->m0,(U64)si0,si1);
goto L4;
L19:;
si0=l13;
if(si0){
goto L28;
}
si0=l9;
si1=l8;
si0-=si1;
l7=si0;
si0=l1;
si1=l8;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l14=si0;
si0=l9;
si1=l8;
si0=si0 == si1;
if(si0){
goto L29;
}
si0=l5;
si1=4U;
si0+=si1;
si1=l10;
si2=l7;
f1302(i,si0,si1,si2);
si0=l5;
si0=i32_load(&i->m0,(U64)si0+4U);
l6=si0;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+12U);
l10=si0;
L29:;
si0=l6;
si1=l10;
si2=3U;
si1<<=(si2&31);
si0+=si1;
si1=l14;
si2=l7;
si3=3U;
si2<<=(si3&31);
si0=f15143(i,si0,si1,si2);
si0=l5;
si1=l10;
si2=l7;
si1+=si2;
l10=si1;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l3;
si1=l9;
si2=3U;
si1<<=(si2&31);
l7=si1;
si0+=si1;
sj0=i64_load(&i->m0,(U64)si0);
sj1=-1ULL;
sj0+=sj1;
si1=l1;
si2=l7;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
sj0&=sj1;
l15=sj0;
goto L5;
L28:;
si0=l8;
si1=l9;
si2=1201380U;
f683(i,si0,si1,si2);
UNREACHABLE;
L18:;
si0=l7;
if(si0){
goto L7;
}
si0=l8;
si1=l9;
si0-=si1;
l7=si0;
si0=l3;
si1=l9;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l14=si0;
si0=l8;
si1=l9;
si0=si0 == si1;
if(si0){
goto L30;
}
si0=l5;
si1=4U;
si0+=si1;
si1=l10;
si2=l7;
f1302(i,si0,si1,si2);
si0=l5;
si0=i32_load(&i->m0,(U64)si0+4U);
l6=si0;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+12U);
l10=si0;
L30:;
si0=l6;
si1=l10;
si2=3U;
si1<<=(si2&31);
si0+=si1;
si1=l14;
si2=l7;
si3=3U;
si2<<=(si3&31);
si0=f15143(i,si0,si1,si2);
si0=l5;
si1=l10;
si2=l7;
si1+=si2;
l10=si1;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l1;
si1=l8;
si2=3U;
si1<<=(si2&31);
l7=si1;
si0+=si1;
sj0=i64_load(&i->m0,(U64)si0);
sj1=-1ULL;
sj0+=sj1;
si1=l3;
si2=l7;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
sj0&=sj1;
l15=sj0;
goto L5;
L11:;
si0=1200896U;
si1=30U;
si2=1201444U;
f604(i,si0,si1,si2);
UNREACHABLE;
L10:;
si0=8U;
si1=l10;
f52(i,si0,si1);
UNREACHABLE;
L9:;
si0=8U;
si1=l13;
f52(i,si0,si1);
UNREACHABLE;
L8:;
si0=8U;
si1=l10;
f52(i,si0,si1);
UNREACHABLE;
L7:;
si0=l9;
si1=l8;
si2=1201396U;
f683(i,si0,si1,si2);
UNREACHABLE;
L6:;
si0=l3;
si1=l9;
si2=3U;
si1<<=(si2&31);
si0+=si1;
sj0=i64_load(&i->m0,(U64)si0);
sj1=-1ULL;
sj0+=sj1;
si1=l1;
si2=l8;
si3=3U;
si2<<=(si3&31);
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
sj2=-1ULL;
sj1+=sj2;
sj0&=sj1;
sj1=1ULL;
sj0+=sj1;
l15=sj0;
L5:;
si0=l8;
si1=l9;
si2=l13;
si0=si2?si0:si1;
l9=si0;
si0=l10;
si1=l5;
si1=i32_load(&i->m0,(U64)si1+8U);
si0=si0 != si1;
if(si0){
goto L31;
}
si0=l5;
si1=4U;
si0+=si1;
si1=l10;
f1299(i,si0,si1);
si0=l5;
si0=i32_load(&i->m0,(U64)si0+4U);
l6=si0;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+12U);
l10=si0;
L31:;
si0=l6;
si1=l10;
si2=3U;
si1<<=(si2&31);
si0+=si1;
sj1=l15;
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=l5;
si1=i32_load(&i->m0,(U64)si1+12U);
si2=1U;
si1+=si2;
l13=si1;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l9;
si1=1U;
si0+=si1;
l10=si0;
si0=l9;
si1=l2;
si0=si0 >= si1;
if(si0){
goto L3;
}
si0=l9;
si1=l4;
si0=si0 >= si1;
if(si0){
goto L2;
}
si0=l5;
si0=i32_load(&i->m0,(U64)si0+8U);
si1=l13;
si0-=si1;
si1=l11;
si2=l1;
si3=l10;
si4=3U;
si3<<=(si4&31);
l10=si3;
si2+=si3;
l14=si2;
si1-=si2;
si2=3U;
si1>>=(si2&31);
l8=si1;
si2=l12;
si3=l3;
si4=l10;
si3+=si4;
l11=si3;
si2-=si3;
si3=3U;
si2>>=(si3&31);
l10=si2;
si3=l8;
si4=l10;
si3=si3 < si4;
si1=si3?si1:si2;
l8=si1;
si0=si0 >= si1;
if(si0){
goto L34;
}
si0=l5;
si1=4U;
si0+=si1;
si1=l13;
si2=l8;
f1302(i,si0,si1,si2);
si0=l5;
si0=i32_load(&i->m0,(U64)si0+12U);
l13=si0;
goto L33;
L34:;
si0=l8;
si0=!(si0);
if(si0){
goto L32;
}
L33:;
si0=l8;
si1=1U;
si0&=si1;
l12=si0;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+4U);
l16=si0;
si0=l8;
si1=1U;
si0=si0 != si1;
if(si0){
goto L36;
}
si0=0U;
l10=si0;
goto L35;
L36:;
si0=0U;
l10=si0;
si0=0U;
si1=l8;
si2=536870910U;
si1&=si2;
si0-=si1;
l2=si0;
si0=l3;
si1=l9;
si2=3U;
si1<<=(si2&31);
l9=si1;
si0+=si1;
l4=si0;
si0=l1;
si1=l9;
si0+=si1;
l1=si0;
si0=l16;
si1=l13;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l7=si0;
si0=0U;
l9=si0;
L37:;
{
si0=l7;
si1=l10;
si0+=si1;
l8=si0;
si1=l4;
si2=l10;
si1+=si2;
l3=si1;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
si2=l1;
si3=l10;
si2+=si3;
l6=si2;
si3=8U;
si2+=si3;
sj2=i64_load(&i->m0,(U64)si2);
sj1&=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l8;
si1=8U;
si0+=si1;
si1=l3;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
si2=l6;
si3=16U;
si2+=si3;
sj2=i64_load(&i->m0,(U64)si2);
sj1&=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l10;
si1=16U;
si0+=si1;
l10=si0;
si0=l2;
si1=l9;
si2=-2U;
si1+=si2;
l9=si1;
si0=si0 != si1;
if(si0){
goto L37;
}
}
si0=0U;
si1=l9;
si0-=si1;
l10=si0;
si0=l13;
si1=l9;
si0-=si1;
l13=si0;
L35:;
si0=l12;
si0=!(si0);
if(si0){
goto L32;
}
si0=l16;
si1=l13;
si2=3U;
si1<<=(si2&31);
si0+=si1;
si1=l11;
si2=l10;
si3=3U;
si2<<=(si3&31);
l10=si2;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
si2=l14;
si3=l10;
si2+=si3;
sj2=i64_load(&i->m0,(U64)si2);
sj1&=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l13;
si1=1U;
si0+=si1;
l13=si0;
L32:;
si0=l0;
si1=l5;
sj1=i64_load(&i->m0,(U64)si1+4U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=8U;
si0+=si1;
si1=l13;
i32_store(&i->m0,(U64)si0,si1);
L4:;
si0=l5;
si1=16U;
si0+=si1;
i->g0=si0;
goto L0;
L3:;
si0=l10;
si1=l2;
si2=1201428U;
f593(i,si0,si1,si2);
UNREACHABLE;
L2:;
si0=l10;
si1=l4;
si2=1201412U;
f593(i,si0,si1,si2);
UNREACHABLE;
L1:;
si0=1200944U;
si1=30U;
si2=1201460U;
f604(i,si0,si1,si2);
UNREACHABLE;
L0:;
}

void f1041(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4) {
U32 l5=0;
U32 si0,si1;
U64 sj1;
si0=i->g0;
si1=32U;
si0-=si1;
l5=si0;
i->g0=si0;
si0=l2;
si1=l4;
si0=si0 < si1;
if(si0){
goto L1;
}
si0=l4;
si1=1U;
si0+=si1;
si1=l2;
si0=si0 < si1;
if(si0){
goto L1;
}
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l0;
si1=l2;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l1;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l3;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l0;
si1=12U;
si0+=si1;
si1=l4;
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=32U;
si0+=si1;
i->g0=si0;
goto L0;
L1:;
si0=l5;
si1=20U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=1U;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l5;
si1=1201488U;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l5;
si1=1201476U;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l5;
si1=8U;
si0+=si1;
si1=1201572U;
f614(i,si0,si1);
UNREACHABLE;
L0:;
}

void f1042(rustpythonInstance*i,U32 l0,U64 l1) {
U32 l2=0;
U32 si0,si1,si2,si3,si4;
U64 sj1;
si0=i->g0;
si1=64U;
si0-=si1;
l2=si0;
i->g0=si0;
si0=l2;
sj1=l1;
i64_store(&i->m0,(U64)si0+16U,sj1);
si0=l2;
si1=l0;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l2;
si1=60U;
si0+=si1;
si1=256U;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=366U;
i32_store(&i->m0,(U64)si0+52U,si1);
si0=l2;
si1=l2;
si2=16U;
si1+=si2;
i32_store(&i->m0,(U64)si0+56U,si1);
si0=l2;
si1=l2;
si2=12U;
si1+=si2;
i32_store(&i->m0,(U64)si0+48U,si1);
si0=l2;
si1=24U;
si0+=si1;
si1=1202148U;
si2=2U;
si3=l2;
si4=48U;
si3+=si4;
si4=2U;
f1041(i,si0,si1,si2,si3,si4);
si0=l2;
si1=24U;
si0+=si1;
si1=1202288U;
f614(i,si0,si1);
UNREACHABLE;
L0:;
}

void f1043(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 si0,si1,si2,si3,si4;
si0=i->g0;
si1=48U;
si0-=si1;
l2=si0;
i->g0=si0;
si0=l2;
si1=l1;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l2;
si1=l0;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=44U;
si0+=si1;
si1=366U;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=366U;
i32_store(&i->m0,(U64)si0+36U,si1);
si0=l2;
si1=l2;
si2=4U;
si1+=si2;
i32_store(&i->m0,(U64)si0+40U,si1);
si0=l2;
si1=l2;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l2;
si1=8U;
si0+=si1;
si1=1202148U;
si2=2U;
si3=l2;
si4=32U;
si3+=si4;
si4=2U;
f1041(i,si0,si1,si2,si3,si4);
si0=l2;
si1=8U;
si0+=si1;
si1=1202288U;
f614(i,si0,si1);
UNREACHABLE;
L0:;
}

void f1044(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U64 l3) {
U32 l4=0;
U32 l5=0;
U32 l6=0;
U64 l7=0;
U32 l8=0;
U32 l9=0;
U32 si0,si1,si2,si3;
U64 sj0,sj1,sj2;
si0=i->g0;
si1=16U;
si0-=si1;
l4=si0;
i->g0=si0;
si0=l2;
si0=!(si0);
if(si0){
goto L4;
}
si0=l2;
si1=268435455U;
si0=si0 > si1;
if(si0){
goto L8;
}
si0=l2;
si1=3U;
si0<<=(si1&31);
l5=si0;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L8;
}
si0=l5;
if(si0){
goto L7;
}
si0=8U;
l6=si0;
goto L6;
L8:;
f53(i);
UNREACHABLE;
L7:;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=l5;
si0=f15022(i,si0);
l6=si0;
si0=!(si0);
if(si0){
goto L5;
}
L6:;
si0=l6;
si1=l1;
sj1=i64_load(&i->m0,(U64)si1);
l7=sj1;
sj2=l3;
sj1+=sj2;
l3=sj1;
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=l2;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l4;
si1=l6;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l4;
si1=1U;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=0U;
l5=si0;
si0=l2;
l8=si0;
si0=1U;
l6=si0;
sj0=l3;
sj1=l7;
si0=sj0 >= sj1;
if(si0){
goto L10;
}
si0=l2;
si1=-1U;
si0+=si1;
l9=si0;
si0=l1;
si1=8U;
si0+=si1;
l8=si0;
si0=0U;
l5=si0;
si0=1U;
l6=si0;
L11:;
{
si0=l9;
si1=l5;
si0=si0 == si1;
if(si0){
goto L9;
}
si0=l8;
sj0=i64_load(&i->m0,(U64)si0);
l3=sj0;
si0=l6;
si1=l4;
si1=i32_load(&i->m0,(U64)si1+8U);
si0=si0 != si1;
if(si0){
goto L12;
}
si0=l4;
si1=4U;
si0+=si1;
si1=l6;
f1299(i,si0,si1);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+12U);
l6=si0;
L12:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+4U);
si1=l6;
si2=3U;
si1<<=(si2&31);
si0+=si1;
sj1=l3;
sj2=1ULL;
sj1+=sj2;
l3=sj1;
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=l4;
si1=i32_load(&i->m0,(U64)si1+12U);
si2=1U;
si1+=si2;
l6=si1;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l8;
si1=8U;
si0+=si1;
l8=si0;
si0=l5;
si1=1U;
si0+=si1;
l5=si0;
sj0=l3;
si0=!(sj0);
if(si0){
goto L11;
}
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0+8U);
l8=si0;
L10:;
si0=l1;
si1=l5;
si2=1U;
si1+=si2;
l5=si1;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l9=si0;
si0=l8;
si1=l6;
si0-=si1;
si1=l2;
si2=l5;
si1-=si2;
l5=si1;
si0=si0 >= si1;
if(si0){
goto L13;
}
si0=l4;
si1=4U;
si0+=si1;
si1=l6;
si2=l5;
f1302(i,si0,si1,si2);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+12U);
l6=si0;
L13:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+4U);
si1=l6;
si2=3U;
si1<<=(si2&31);
si0+=si1;
si1=l9;
si2=l5;
si3=3U;
si2<<=(si3&31);
si0=f15143(i,si0,si1,si2);
si0=l4;
si1=l6;
si2=l5;
si1+=si2;
i32_store(&i->m0,(U64)si0+12U,si1);
goto L1;
L9:;
sj0=1ULL;
l3=sj0;
si0=l6;
si1=l4;
si1=i32_load(&i->m0,(U64)si1+8U);
l5=si1;
si0=si0 != si1;
if(si0){
goto L2;
}
goto L3;
L5:;
si0=8U;
si1=l5;
f52(i,si0,si1);
UNREACHABLE;
L4:;
si0=0U;
l5=si0;
si0=l4;
si1=0U;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l4;
sj1=8ULL;
i64_store(&i->m0,(U64)si0+4U,sj1);
sj0=l3;
si0=!(sj0);
if(si0){
goto L1;
}
L3:;
si0=l4;
si1=4U;
si0+=si1;
si1=l5;
f1299(i,si0,si1);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+12U);
l6=si0;
L2:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+4U);
si1=l6;
si2=3U;
si1<<=(si2&31);
si0+=si1;
sj1=l3;
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=l4;
si1=i32_load(&i->m0,(U64)si1+12U);
si2=1U;
si1+=si2;
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

U32 f1045(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U64 l4) {
U64 l5=0;
U32 l6=0;
U32 l7=0;
U32 l8=0;
U32 si0,si1,si2,si3;
U64 sj0,sj1,sj2;
si0=l1;
si1=l3;
si0=si0 < si1;
if(si0){
goto L1;
}
si0=l3;
si0=!(si0);
if(si0){
goto L2;
}
si0=l0;
si1=l2;
sj1=i64_load(&i->m0,(U64)si1);
l5=sj1;
sj2=l4;
sj1+=sj2;
l4=sj1;
i64_store(&i->m0,(U64)si0,sj1);
si0=0U;
l1=si0;
sj0=l4;
sj1=l5;
si0=sj0 >= sj1;
if(si0){
goto L3;
}
si0=l3;
si1=-1U;
si0+=si1;
l6=si0;
si0=l0;
si1=8U;
si0+=si1;
l7=si0;
si0=l2;
si1=8U;
si0+=si1;
l8=si0;
si0=0U;
l1=si0;
sj0=1ULL;
l4=sj0;
L4:;
{
si0=l6;
si1=l1;
si0=si0 == si1;
if(si0){
goto L2;
}
si0=l7;
si1=l8;
sj1=i64_load(&i->m0,(U64)si1);
sj2=1ULL;
sj1+=sj2;
l5=sj1;
i64_store(&i->m0,(U64)si0,sj1);
si0=l7;
si1=8U;
si0+=si1;
l7=si0;
si0=l8;
si1=8U;
si0+=si1;
l8=si0;
si0=l1;
si1=1U;
si0+=si1;
l1=si0;
sj0=l5;
si0=!(sj0);
if(si0){
goto L4;
}
}
L3:;
si0=l0;
si1=l1;
si2=1U;
si1+=si2;
l1=si1;
si2=3U;
si1<<=(si2&31);
l7=si1;
si0+=si1;
si1=l2;
si2=l7;
si1+=si2;
si2=l3;
si3=l1;
si2-=si3;
si3=3U;
si2<<=(si3&31);
si0=f15143(i,si0,si1,si2);
sj0=0ULL;
l4=sj0;
L2:;
sj0=l4;
sj1=0ULL;
si0=sj0 != sj1;
goto L0;
L1:;
si0=1202809U;
si1=34U;
si2=1202844U;
f604(i,si0,si1,si2);
UNREACHABLE;
L0:;
return si0;
}

void f1046(rustpythonInstance*i,U32 l0,U64 l1) {
U32 l2=0;
U32 l3=0;
U64 l4=0;
U32 si0,si1,si2;
U64 sj0,sj1,sj2;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+8U);
l2=si0;
si0=!(si0);
if(si0){
goto L1;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si1=l3;
sj1=i64_load(&i->m0,(U64)si1);
l4=sj1;
sj2=l1;
sj1+=sj2;
l1=sj1;
i64_store(&i->m0,(U64)si0,sj1);
sj0=l1;
sj1=l4;
si0=sj0 >= sj1;
if(si0){
goto L3;
}
si0=l3;
si1=8U;
si0+=si1;
l3=si0;
si0=l2;
si1=3U;
si0<<=(si1&31);
si1=-8U;
si0+=si1;
l2=si0;
L4:;
{
si0=l2;
si0=!(si0);
if(si0){
goto L2;
}
si0=l3;
si1=l3;
sj1=i64_load(&i->m0,(U64)si1);
sj2=1ULL;
sj1+=sj2;
l1=sj1;
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=-8U;
si0+=si1;
l2=si0;
si0=l3;
si1=8U;
si0+=si1;
l3=si0;
sj0=l1;
si0=!(sj0);
if(si0){
goto L4;
}
}
L3:;
goto L0;
L2:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+8U);
l3=si0;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+4U);
si0=si0 != si1;
if(si0){
goto L5;
}
si0=l0;
si1=l3;
f1299(i,si0,si1);
si0=l0;
si0=i32_load(&i->m0,(U64)si0+8U);
l3=si0;
L5:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
si1=l3;
si2=3U;
si1<<=(si2&31);
si0+=si1;
sj1=1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+8U);
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0+8U,si1);
goto L0;
L1:;
si0=1202860U;
si1=32U;
si2=1202892U;
f604(i,si0,si1,si2);
UNREACHABLE;
L0:;
}

void f1047(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4) {
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 l8=0;
U64 l9=0;
U64 l10=0;
U32 l11=0;
U32 l12=0;
U32 si0,si1,si2,si3;
U64 sj0,sj1,sj2;
si0=i->g0;
si1=16U;
si0-=si1;
l5=si0;
i->g0=si0;
si0=l1;
si1=l3;
si0=si0 != si1;
if(si0){
goto L12;
}
si0=l2;
si1=l4;
si0=si0 == si1;
if(si0){
goto L11;
}
L12:;
si0=l2;
si1=l4;
si0=si0 < si1;
l6=si0;
if(si0){
goto L8;
}
si0=8U;
l7=si0;
si0=l2;
si0=!(si0);
if(si0){
goto L9;
}
si0=l2;
si1=268435455U;
si0=si0 > si1;
if(si0){
goto L10;
}
si0=l2;
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
goto L9;
}
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=l8;
si0=f15022(i,si0);
l7=si0;
if(si0){
goto L9;
}
si0=8U;
si1=l8;
f52(i,si0,si1);
UNREACHABLE;
L11:;
si0=0U;
l8=si0;
si0=l5;
si1=0U;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l5;
sj1=8ULL;
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l2;
si0=!(si0);
if(si0){
goto L13;
}
si0=l2;
si1=3U;
si0<<=(si1&31);
l3=si0;
sj0=0ULL;
l9=sj0;
L14:;
{
si0=l1;
sj0=i64_load(&i->m0,(U64)si0);
l10=sj0;
sj1=1ULL;
sj0<<=(sj1&63);
sj1=l9;
sj0|=sj1;
l9=sj0;
si0=l8;
si1=l5;
si1=i32_load(&i->m0,(U64)si1+8U);
si0=si0 != si1;
if(si0){
goto L15;
}
si0=l5;
si1=4U;
si0+=si1;
si1=l8;
f1299(i,si0,si1);
si0=l5;
si0=i32_load(&i->m0,(U64)si0+12U);
l8=si0;
L15:;
si0=l1;
si1=8U;
si0+=si1;
l1=si0;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+4U);
si1=l8;
si2=3U;
si1<<=(si2&31);
si0+=si1;
sj1=l9;
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=l5;
si1=i32_load(&i->m0,(U64)si1+12U);
si2=1U;
si1+=si2;
l8=si1;
i32_store(&i->m0,(U64)si0+12U,si1);
sj0=l10;
sj1=63ULL;
sj0>>=(sj1&63);
l9=sj0;
si0=l3;
si1=-8U;
si0+=si1;
l3=si0;
if(si0){
goto L14;
}
}
sj0=l10;
sj1=-1ULL;
si0=(U64)((I64)sj0>(I64)sj1);
if(si0){
goto L13;
}
si0=l8;
si1=l5;
si1=i32_load(&i->m0,(U64)si1+8U);
si0=si0 != si1;
if(si0){
goto L16;
}
si0=l5;
si1=4U;
si0+=si1;
si1=l8;
f1299(i,si0,si1);
si0=l5;
si0=i32_load(&i->m0,(U64)si0+12U);
l8=si0;
L16:;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+4U);
si1=l8;
si2=3U;
si1<<=(si2&31);
si0+=si1;
sj1=l9;
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=l5;
si1=i32_load(&i->m0,(U64)si1+12U);
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0+12U,si1);
L13:;
si0=l0;
si1=l5;
sj1=i64_load(&i->m0,(U64)si1+4U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=8U;
si0+=si1;
si1=l5;
si2=4U;
si1+=si2;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
goto L1;
L10:;
f53(i);
UNREACHABLE;
L9:;
si0=0U;
l8=si0;
si0=l5;
si1=0U;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l5;
si1=l7;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l5;
si1=l2;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l2;
si1=l4;
si2=l6;
si0=si2?si0:si1;
l11=si0;
si0=!(si0);
if(si0){
goto L17;
}
si0=l1;
l7=si0;
si0=0U;
l6=si0;
L18:;
{
si0=l7;
sj0=i64_load(&i->m0,(U64)si0);
l10=sj0;
si1=l3;
sj1=i64_load(&i->m0,(U64)si1);
sj0+=sj1;
l9=sj0;
sj1=l10;
si0=sj0 < sj1;
l12=si0;
si0=l6;
si1=255U;
si0&=si1;
if(si0){
goto L20;
}
si0=l12;
l6=si0;
goto L19;
L20:;
si0=l12;
sj1=l9;
sj2=1ULL;
sj1+=sj2;
l9=sj1;
si1=!(sj1);
si0|=si1;
l6=si0;
L19:;
si0=l8;
si1=l5;
si1=i32_load(&i->m0,(U64)si1+8U);
si0=si0 != si1;
if(si0){
goto L21;
}
si0=l5;
si1=4U;
si0+=si1;
si1=l8;
f1299(i,si0,si1);
si0=l5;
si0=i32_load(&i->m0,(U64)si0+12U);
l8=si0;
L21:;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+4U);
si1=l8;
si2=3U;
si1<<=(si2&31);
si0+=si1;
sj1=l9;
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=l5;
si1=i32_load(&i->m0,(U64)si1+12U);
si2=1U;
si1+=si2;
l8=si1;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l7;
si1=8U;
si0+=si1;
l7=si0;
si0=l3;
si1=8U;
si0+=si1;
l3=si0;
si0=l11;
si1=-1U;
si0+=si1;
l11=si0;
si0=!(si0);
if(si0){
goto L7;
}
goto L18;
}
L17:;
si0=0U;
l8=si0;
si0=l2;
l3=si0;
si0=0U;
l6=si0;
si0=l2;
si1=l4;
si0=si0 == si1;
if(si0){
goto L2;
}
goto L6;
L8:;
si0=1202924U;
si1=34U;
si2=1202960U;
f604(i,si0,si1,si2);
UNREACHABLE;
L7:;
si0=l2;
si1=l4;
si0=si0 == si1;
if(si0){
goto L5;
}
si0=l5;
si0=i32_load(&i->m0,(U64)si0+8U);
l3=si0;
L6:;
si0=l1;
si1=l4;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l7=si0;
si0=l3;
si1=l8;
si0-=si1;
si1=l2;
si2=l4;
si1-=si2;
l1=si1;
si0=si0 >= si1;
if(si0){
goto L22;
}
si0=l5;
si1=4U;
si0+=si1;
si1=l8;
si2=l1;
f1302(i,si0,si1,si2);
si0=l5;
si0=i32_load(&i->m0,(U64)si0+12U);
l8=si0;
L22:;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+4U);
si1=l8;
si2=3U;
si1<<=(si2&31);
si0+=si1;
si1=l7;
si2=l1;
si3=3U;
si2<<=(si3&31);
si0=f15143(i,si0,si1,si2);
si0=l5;
si1=l8;
si2=l1;
si1+=si2;
l1=si1;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l6;
si0=!(si0);
if(si0){
goto L2;
}
si0=l1;
si1=l4;
si0=si0 < si1;
if(si0){
goto L4;
}
si0=l1;
si1=l4;
si0=si0 == si1;
if(si0){
goto L23;
}
si0=l5;
si0=i32_load(&i->m0,(U64)si0+4U);
si1=l4;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l3=si0;
si1=l3;
sj1=i64_load(&i->m0,(U64)si1);
sj2=1ULL;
sj1+=sj2;
l9=sj1;
i64_store(&i->m0,(U64)si0,sj1);
sj0=l9;
sj1=0ULL;
si0=sj0 != sj1;
if(si0){
goto L2;
}
si0=l8;
si1=l2;
si0+=si1;
si1=3U;
si0<<=(si1&31);
si1=l4;
si2=4U;
si1<<=(si2&31);
si0-=si1;
si1=-8U;
si0+=si1;
l1=si0;
si0=l3;
si1=8U;
si0+=si1;
l8=si0;
L25:;
{
si0=l1;
si0=!(si0);
if(si0){
goto L24;
}
si0=l8;
si1=l8;
sj1=i64_load(&i->m0,(U64)si1);
sj2=1ULL;
sj1+=sj2;
l9=sj1;
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si1=-8U;
si0+=si1;
l1=si0;
si0=l8;
si1=8U;
si0+=si1;
l8=si0;
sj0=l9;
si0=!(sj0);
if(si0){
goto L25;
}
goto L2;
}
L24:;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+12U);
l4=si0;
L23:;
si0=l4;
si1=l5;
si1=i32_load(&i->m0,(U64)si1+8U);
si0=si0 != si1;
if(si0){
goto L26;
}
si0=l5;
si1=4U;
si0+=si1;
si1=l4;
f1299(i,si0,si1);
si0=l5;
si0=i32_load(&i->m0,(U64)si0+12U);
l4=si0;
L26:;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+4U);
si1=l4;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l8=si0;
goto L3;
L5:;
si0=l6;
si0=!(si0);
if(si0){
goto L2;
}
si0=l8;
si1=l5;
si1=i32_load(&i->m0,(U64)si1+8U);
si0=si0 != si1;
if(si0){
goto L27;
}
si0=l5;
si1=4U;
si0+=si1;
si1=l8;
f1299(i,si0,si1);
si0=l5;
si0=i32_load(&i->m0,(U64)si0+12U);
l8=si0;
L27:;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+4U);
si1=l8;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l8=si0;
goto L3;
L4:;
si0=l4;
si1=l1;
si2=1202908U;
f593(i,si0,si1,si2);
UNREACHABLE;
L3:;
si0=l8;
sj1=1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=l5;
si1=i32_load(&i->m0,(U64)si1+12U);
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0+12U,si1);
L2:;
si0=l0;
si1=l5;
sj1=i64_load(&i->m0,(U64)si1+4U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=8U;
si0+=si1;
si1=l5;
si2=4U;
si1+=si2;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
L1:;
si0=l5;
si1=16U;
si0+=si1;
i->g0=si0;
L0:;
}

U32 f1048(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4,U32 l5) {
U32 l6=0;
U32 l7=0;
U32 l8=0;
U64 l9=0;
U64 l10=0;
U32 l11=0;
U32 l12=0;
U32 si0,si1,si2,si3;
U64 sj0,sj1,sj2;
si0=l3;
si1=l5;
si0=si0 < si1;
if(si0){
goto L2;
}
si0=l1;
si1=l3;
si0=si0 < si1;
if(si0){
goto L5;
}
si0=l5;
si0=!(si0);
if(si0){
goto L6;
}
si0=0U;
l6=si0;
si0=l5;
l7=si0;
si0=l2;
l1=si0;
si0=l0;
l8=si0;
L7:;
{
si0=l1;
sj0=i64_load(&i->m0,(U64)si0);
l9=sj0;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1);
sj0+=sj1;
l10=sj0;
sj1=l9;
si0=sj0 < sj1;
l11=si0;
si0=l6;
si1=255U;
si0&=si1;
if(si0){
goto L9;
}
si0=l11;
l6=si0;
goto L8;
L9:;
si0=l11;
sj1=l10;
sj2=1ULL;
sj1+=sj2;
l10=sj1;
si1=!(sj1);
si0|=si1;
l6=si0;
L8:;
si0=l8;
sj1=l10;
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si1=8U;
si0+=si1;
l1=si0;
si0=l4;
si1=8U;
si0+=si1;
l4=si0;
si0=l8;
si1=8U;
si0+=si1;
l8=si0;
si0=l7;
si1=-1U;
si0+=si1;
l7=si0;
if(si0){
goto L7;
}
}
si0=l3;
si1=l5;
si0=si0 == si1;
if(si0){
goto L3;
}
si0=l6;
if(si0){
goto L4;
}
goto L1;
L6:;
si0=l3;
if(si0){
goto L1;
}
si0=0U;
goto L0;
L5:;
si0=1203008U;
si1=37U;
si2=1203048U;
f604(i,si0,si1,si2);
UNREACHABLE;
L4:;
si0=l0;
si1=l5;
si2=3U;
si1<<=(si2&31);
l1=si1;
si0+=si1;
l11=si0;
si1=l2;
si2=l1;
si1+=si2;
l12=si1;
sj1=i64_load(&i->m0,(U64)si1);
sj2=1ULL;
sj1+=sj2;
l10=sj1;
i64_store(&i->m0,(U64)si0,sj1);
si0=0U;
l6=si0;
si0=0U;
l4=si0;
sj0=l10;
sj1=0ULL;
si0=sj0 != sj1;
if(si0){
goto L10;
}
si0=l5;
si1=-1U;
si0^=si1;
si1=l3;
si0+=si1;
l7=si0;
si0=l0;
si1=l1;
si2=8U;
si1+=si2;
l4=si1;
si0+=si1;
l1=si0;
si0=l2;
si1=l4;
si0+=si1;
l8=si0;
si0=0U;
l4=si0;
L11:;
{
si0=l7;
si1=l4;
si0=si0 != si1;
if(si0){
goto L12;
}
si0=1U;
goto L0;
L12:;
si0=l1;
si1=l8;
sj1=i64_load(&i->m0,(U64)si1);
sj2=1ULL;
sj1+=sj2;
l10=sj1;
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si1=8U;
si0+=si1;
l1=si0;
si0=l8;
si1=8U;
si0+=si1;
l8=si0;
si0=l4;
si1=1U;
si0+=si1;
l4=si0;
sj0=l10;
si0=!(sj0);
if(si0){
goto L11;
}
}
L10:;
si0=l11;
si1=l4;
si2=1U;
si1+=si2;
l4=si1;
si2=3U;
si1<<=(si2&31);
l1=si1;
si0+=si1;
si1=l12;
si2=l1;
si1+=si2;
si2=l3;
si3=l5;
si2-=si3;
si3=l4;
si2-=si3;
si3=3U;
si2<<=(si3&31);
si0=f15143(i,si0,si1,si2);
L3:;
si0=l6;
goto L0;
L2:;
si0=1202924U;
si1=34U;
si2=1203064U;
f604(i,si0,si1,si2);
UNREACHABLE;
L1:;
si0=l0;
si1=l5;
si2=3U;
si1<<=(si2&31);
l4=si1;
si0+=si1;
si1=l2;
si2=l4;
si1+=si2;
si2=l3;
si3=l5;
si2-=si3;
si3=3U;
si2<<=(si3&31);
si0=f15143(i,si0,si1,si2);
si0=0U;
L0:;
return si0;
}

U32 f1049(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U64 l5=0;
U64 l6=0;
U32 l7=0;
U32 si0,si1,si2,si3,si4;
U64 sj0,sj1,sj2;
si0=i->g0;
si1=32U;
si0-=si1;
l4=si0;
i->g0=si0;
si0=l4;
si1=l1;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=l3;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l1;
si1=l3;
si0=si0 != si1;
if(si0){
goto L1;
}
si0=0U;
l3=si0;
si0=l1;
si0=!(si0);
if(si0){
goto L2;
}
L3:;
{
si0=l0;
sj0=i64_load(&i->m0,(U64)si0);
l5=sj0;
si1=l2;
sj1=i64_load(&i->m0,(U64)si1);
sj0+=sj1;
l6=sj0;
sj1=l5;
si0=sj0 < sj1;
l7=si0;
si0=l3;
si1=255U;
si0&=si1;
if(si0){
goto L5;
}
si0=l7;
l3=si0;
goto L4;
L5:;
si0=l7;
sj1=l6;
sj2=1ULL;
sj1+=sj2;
l6=sj1;
si1=!(sj1);
si0|=si1;
l3=si0;
L4:;
si0=l0;
sj1=l6;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=8U;
si0+=si1;
l0=si0;
si0=l2;
si1=8U;
si0+=si1;
l2=si0;
si0=l1;
si1=-1U;
si0+=si1;
l1=si0;
if(si0){
goto L3;
}
}
L2:;
si0=l4;
si1=32U;
si0+=si1;
i->g0=si0;
si0=l3;
goto L0;
L1:;
si0=l4;
si1=0U;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=0U;
si1=l4;
si2=l4;
si3=4U;
si2+=si3;
si3=l4;
si4=8U;
si3+=si4;
si4=1203184U;
f1250(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L0:;
return si0;
}

void f1050(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 l8=0;
U64 l9=0;
U64 l10=0;
U32 l11=0;
U32 si0,si1,si2,si3;
U64 sj0,sj1,sj2;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+8U);
l3=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
si1=l1;
si0=si0 != si1;
if(si0){
goto L4;
}
si0=l2;
si1=l3;
si0=si0 == si1;
if(si0){
goto L3;
}
L4:;
si0=l2;
si1=l3;
si0=si0 > si1;
if(si0){
goto L8;
}
si0=l2;
si0=!(si0);
if(si0){
goto L1;
}
si0=l4;
si1=l2;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l5=si0;
si0=0U;
l6=si0;
si0=l2;
l7=si0;
si0=l4;
l8=si0;
L9:;
{
si0=l8;
sj0=i64_load(&i->m0,(U64)si0);
l9=sj0;
si1=l1;
sj1=i64_load(&i->m0,(U64)si1);
sj0+=sj1;
l10=sj0;
sj1=l9;
si0=sj0 < sj1;
l11=si0;
si0=l6;
si1=255U;
si0&=si1;
if(si0){
goto L11;
}
si0=l11;
l6=si0;
goto L10;
L11:;
si0=l11;
sj1=l10;
sj2=1ULL;
sj1+=sj2;
l10=sj1;
si1=!(sj1);
si0|=si1;
l6=si0;
L10:;
si0=l8;
sj1=l10;
i64_store(&i->m0,(U64)si0,sj1);
si0=l8;
si1=8U;
si0+=si1;
l8=si0;
si0=l1;
si1=8U;
si0+=si1;
l1=si0;
si0=l7;
si1=-1U;
si0+=si1;
l7=si0;
if(si0){
goto L9;
}
}
si0=l6;
si1=1U;
si0^=si1;
l1=si0;
si0=l2;
si1=l3;
si0=si0 == si1;
if(si0){
goto L12;
}
si0=l1;
if(si0){
goto L12;
}
si0=l5;
si1=l5;
sj1=i64_load(&i->m0,(U64)si1);
sj2=1ULL;
sj1+=sj2;
l10=sj1;
i64_store(&i->m0,(U64)si0,sj1);
sj0=l10;
sj1=0ULL;
si0=sj0 != sj1;
if(si0){
goto L1;
}
si0=l3;
si1=3U;
si0<<=(si1&31);
si1=l2;
si2=3U;
si1<<=(si2&31);
l1=si1;
si0-=si1;
si1=-8U;
si0+=si1;
l8=si0;
si0=l1;
si1=l4;
si0+=si1;
si1=8U;
si0+=si1;
l1=si0;
L13:;
{
si0=l8;
si0=!(si0);
if(si0){
goto L7;
}
si0=l1;
si1=l1;
sj1=i64_load(&i->m0,(U64)si1);
sj2=1ULL;
sj1+=sj2;
l10=sj1;
i64_store(&i->m0,(U64)si0,sj1);
si0=l8;
si1=-8U;
si0+=si1;
l8=si0;
si0=l1;
si1=8U;
si0+=si1;
l1=si0;
sj0=l10;
si0=!(sj0);
if(si0){
goto L13;
}
goto L1;
}
L12:;
si0=l2;
si1=l3;
si0=si0 != si1;
si1=l1;
si0|=si1;
if(si0){
goto L1;
}
goto L7;
L8:;
si0=l2;
si1=l3;
si0-=si1;
l11=si0;
si0=l1;
si1=l3;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l5=si0;
si0=l3;
si0=!(si0);
if(si0){
goto L5;
}
si0=0U;
l8=si0;
si0=l3;
l6=si0;
L14:;
{
si0=l4;
sj0=i64_load(&i->m0,(U64)si0);
l9=sj0;
si1=l1;
sj1=i64_load(&i->m0,(U64)si1);
sj0+=sj1;
l10=sj0;
sj1=l9;
si0=sj0 < sj1;
l7=si0;
si0=l8;
si1=255U;
si0&=si1;
if(si0){
goto L16;
}
si0=l7;
l8=si0;
goto L15;
L16:;
si0=l7;
sj1=l10;
sj2=1ULL;
sj1+=sj2;
l10=sj1;
si1=!(sj1);
si0|=si1;
l8=si0;
L15:;
si0=l4;
sj1=l10;
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=8U;
si0+=si1;
l4=si0;
si0=l1;
si1=8U;
si0+=si1;
l1=si0;
si0=l6;
si1=-1U;
si0+=si1;
l6=si0;
if(si0){
goto L14;
}
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+4U);
si1=l0;
si1=i32_load(&i->m0,(U64)si1+8U);
l1=si1;
si0-=si1;
si1=l11;
si0=si0 >= si1;
if(si0){
goto L17;
}
si0=l0;
si1=l1;
si2=l11;
f1302(i,si0,si1,si2);
si0=l0;
si0=i32_load(&i->m0,(U64)si0+8U);
l1=si0;
L17:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
si1=l1;
si2=3U;
si1<<=(si2&31);
si0+=si1;
si1=l5;
si2=l11;
si3=3U;
si2<<=(si3&31);
si0=f15143(i,si0,si1,si2);
si0=l0;
si1=l1;
si2=l11;
si1+=si2;
l4=si1;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l8;
si0=!(si0);
if(si0){
goto L1;
}
si0=l3;
si1=l4;
si0=si0 > si1;
if(si0){
goto L6;
}
si0=l4;
si1=l3;
si0=si0 == si1;
if(si0){
goto L7;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
si1=l3;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l8=si0;
si1=l8;
sj1=i64_load(&i->m0,(U64)si1);
sj2=1ULL;
sj1+=sj2;
l10=sj1;
i64_store(&i->m0,(U64)si0,sj1);
sj0=l10;
sj1=0ULL;
si0=sj0 != sj1;
if(si0){
goto L1;
}
si0=l1;
si1=l2;
si0+=si1;
si1=3U;
si0<<=(si1&31);
si1=l3;
si2=4U;
si1<<=(si2&31);
si0-=si1;
si1=-8U;
si0+=si1;
l4=si0;
si0=l8;
si1=8U;
si0+=si1;
l1=si0;
L18:;
{
si0=l4;
si0=!(si0);
if(si0){
goto L7;
}
si0=l1;
si1=l1;
sj1=i64_load(&i->m0,(U64)si1);
sj2=1ULL;
sj1+=sj2;
l10=sj1;
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=-8U;
si0+=si1;
l4=si0;
si0=l1;
si1=8U;
si0+=si1;
l1=si0;
sj0=l10;
si0=!(sj0);
if(si0){
goto L18;
}
goto L1;
}
L7:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+8U);
l1=si0;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+4U);
si0=si0 != si1;
if(si0){
goto L19;
}
si0=l0;
si1=l1;
f1299(i,si0,si1);
si0=l0;
si0=i32_load(&i->m0,(U64)si0+8U);
l1=si0;
L19:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
si1=l1;
si2=3U;
si1<<=(si2&31);
si0+=si1;
sj1=1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si0=i32_load(&i->m0,(U64)si0+8U);
si1=1U;
si0+=si1;
l1=si0;
goto L2;
L6:;
si0=l3;
si1=l4;
si2=1203216U;
f593(i,si0,si1,si2);
UNREACHABLE;
L5:;
si0=0U;
l1=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+4U);
si1=l11;
si0=si0 >= si1;
if(si0){
goto L20;
}
si0=l0;
si1=0U;
si2=l11;
f1302(i,si0,si1,si2);
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+8U);
l1=si0;
L20:;
si0=l4;
si1=l1;
si2=3U;
si1<<=(si2&31);
si0+=si1;
si1=l5;
si2=l11;
si3=3U;
si2<<=(si3&31);
si0=f15143(i,si0,si1,si2);
si0=l1;
si1=l11;
si0+=si1;
l1=si0;
goto L2;
L3:;
si0=l2;
si0=!(si0);
if(si0){
goto L1;
}
si0=l2;
si1=-1U;
si0+=si1;
si1=536870911U;
si0&=si1;
l6=si0;
si0=l2;
si1=7U;
si0&=si1;
l8=si0;
if(si0){
goto L22;
}
si0=l1;
l4=si0;
goto L21;
L22:;
si0=l1;
l4=si0;
L23:;
{
si0=l4;
si1=8U;
si0+=si1;
l4=si0;
si0=l8;
si1=-1U;
si0+=si1;
l8=si0;
if(si0){
goto L23;
}
}
si0=l4;
si1=-8U;
si0+=si1;
l8=si0;
L21:;
si0=l6;
si1=7U;
si0=si0 < si1;
if(si0){
goto L24;
}
si0=l1;
si1=l2;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l8=si0;
L25:;
{
si0=l4;
si1=64U;
si0+=si1;
l4=si0;
si1=l8;
si0=si0 != si1;
if(si0){
goto L25;
}
}
si0=l4;
si1=-8U;
si0+=si1;
l8=si0;
L24:;
si0=l8;
sj0=i64_load(&i->m0,(U64)si0);
l10=sj0;
sj1=-1ULL;
si0=(U64)((I64)sj0>(I64)sj1);
if(si0){
goto L1;
}
sj0=l10;
sj1=63ULL;
sj0>>=(sj1&63);
l10=sj0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+4U);
si1=l2;
si0=si0 != si1;
if(si0){
goto L26;
}
si0=l0;
si1=l2;
f1299(i,si0,si1);
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+8U);
l2=si0;
L26:;
si0=l1;
si1=l2;
si2=3U;
si1<<=(si2&31);
si0+=si1;
sj1=l10;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si0=i32_load(&i->m0,(U64)si0+8U);
si1=1U;
si0+=si1;
l1=si0;
L2:;
si0=l0;
si1=l1;
i32_store(&i->m0,(U64)si0+8U,si1);
L1:;
L0:;
}

U32 f1051(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 l8=0;
U32 l9=0;
U64 l10=0;
U64 l11=0;
U32 l12=0;
U32 si0,si1,si2;
U64 sj0,sj1,sj2;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+8U);
l2=si0;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+8U);
l3=si1;
si0=si0 >= si1;
if(si0){
goto L6;
}
si0=l2;
si0=!(si0);
if(si0){
goto L1;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
si1=l2;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l5=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si0=0U;
l7=si0;
si0=l2;
l8=si0;
si0=l4;
l9=si0;
L7:;
{
si0=l9;
sj0=i64_load(&i->m0,(U64)si0);
l10=sj0;
si1=l6;
sj1=i64_load(&i->m0,(U64)si1);
sj0+=sj1;
l11=sj0;
sj1=l10;
si0=sj0 < sj1;
l12=si0;
si0=l7;
si1=255U;
si0&=si1;
if(si0){
goto L9;
}
si0=l12;
l7=si0;
goto L8;
L9:;
si0=l12;
sj1=l11;
sj2=1ULL;
sj1+=sj2;
l11=sj1;
si1=!(sj1);
si0|=si1;
l7=si0;
L8:;
si0=l9;
sj1=l11;
i64_store(&i->m0,(U64)si0,sj1);
si0=l9;
si1=8U;
si0+=si1;
l9=si0;
si0=l6;
si1=8U;
si0+=si1;
l6=si0;
si0=l8;
si1=-1U;
si0+=si1;
l8=si0;
if(si0){
goto L7;
}
}
si0=l7;
si0=!(si0);
if(si0){
goto L1;
}
si0=l5;
si1=l5;
sj1=i64_load(&i->m0,(U64)si1);
sj2=1ULL;
sj1+=sj2;
l11=sj1;
i64_store(&i->m0,(U64)si0,sj1);
sj0=l11;
sj1=0ULL;
si0=sj0 != sj1;
if(si0){
goto L1;
}
si0=l3;
si1=3U;
si0<<=(si1&31);
si1=l2;
si2=3U;
si1<<=(si2&31);
l9=si1;
si0-=si1;
si1=-8U;
si0+=si1;
l6=si0;
si0=l9;
si1=l4;
si0+=si1;
si1=8U;
si0+=si1;
l9=si0;
L10:;
{
si0=l6;
si0=!(si0);
if(si0){
goto L5;
}
si0=l9;
si1=l9;
sj1=i64_load(&i->m0,(U64)si1);
sj2=1ULL;
sj1+=sj2;
l11=sj1;
i64_store(&i->m0,(U64)si0,sj1);
si0=l6;
si1=-8U;
si0+=si1;
l6=si0;
si0=l9;
si1=8U;
si0+=si1;
l9=si0;
sj0=l11;
si0=!(sj0);
if(si0){
goto L10;
}
goto L1;
}
L6:;
si0=l3;
si0=!(si0);
if(si0){
goto L1;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
si1=l3;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l5=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si0=0U;
l7=si0;
si0=l3;
l8=si0;
si0=l4;
l9=si0;
L11:;
{
si0=l9;
sj0=i64_load(&i->m0,(U64)si0);
l10=sj0;
si1=l6;
sj1=i64_load(&i->m0,(U64)si1);
sj0+=sj1;
l11=sj0;
sj1=l10;
si0=sj0 < sj1;
l12=si0;
si0=l7;
si1=255U;
si0&=si1;
if(si0){
goto L13;
}
si0=l12;
l7=si0;
goto L12;
L13:;
si0=l12;
sj1=l11;
sj2=1ULL;
sj1+=sj2;
l11=sj1;
si1=!(sj1);
si0|=si1;
l7=si0;
L12:;
si0=l9;
sj1=l11;
i64_store(&i->m0,(U64)si0,sj1);
si0=l9;
si1=8U;
si0+=si1;
l9=si0;
si0=l6;
si1=8U;
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
si0=l2;
si1=l3;
si0=si0 == si1;
l9=si0;
if(si0){
goto L4;
}
si0=l7;
si1=1U;
si0^=si1;
if(si0){
goto L4;
}
si0=l5;
si1=l5;
sj1=i64_load(&i->m0,(U64)si1);
sj2=1ULL;
sj1+=sj2;
l11=sj1;
i64_store(&i->m0,(U64)si0,sj1);
sj0=l11;
sj1=0ULL;
si0=sj0 != sj1;
if(si0){
goto L1;
}
si0=l2;
si1=3U;
si0<<=(si1&31);
si1=l3;
si2=3U;
si1<<=(si2&31);
l9=si1;
si0-=si1;
si1=-8U;
si0+=si1;
l6=si0;
si0=l9;
si1=l4;
si0+=si1;
si1=8U;
si0+=si1;
l9=si0;
L14:;
{
si0=l6;
si0=!(si0);
if(si0){
goto L3;
}
si0=l9;
si1=l9;
sj1=i64_load(&i->m0,(U64)si1);
sj2=1ULL;
sj1+=sj2;
l11=sj1;
i64_store(&i->m0,(U64)si0,sj1);
si0=l6;
si1=-8U;
si0+=si1;
l6=si0;
si0=l9;
si1=8U;
si0+=si1;
l9=si0;
sj0=l11;
si0=!(sj0);
if(si0){
goto L14;
}
goto L1;
}
L5:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+8U);
l9=si0;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+4U);
si0=si0 != si1;
if(si0){
goto L2;
}
si0=l1;
si1=l9;
f1299(i,si0,si1);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+8U);
l9=si0;
goto L2;
L4:;
si0=l9;
si1=l7;
si0&=si1;
si0=!(si0);
if(si0){
goto L1;
}
L3:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+8U);
l9=si0;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+4U);
si0=si0 == si1;
if(si0){
goto L15;
}
si0=l0;
l1=si0;
goto L2;
L15:;
si0=l0;
si1=l9;
f1299(i,si0,si1);
si0=l0;
si0=i32_load(&i->m0,(U64)si0+8U);
l9=si0;
si0=l0;
l1=si0;
L2:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
si1=l9;
si2=3U;
si1<<=(si2&31);
si0+=si1;
sj1=1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+8U);
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0+8U,si1);
L1:;
si0=l2;
si1=l3;
si0=si0 < si1;
L0:;
return si0;
}

void f1052(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
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
U64 l14=0;
U64 l15=0;
U32 l16=0;
U32 l17=0;
U32 l18=0;
U32 l19=0;
U32 l20=0;
U32 l21=0;
U32 l22=0;
U64 l23=0;
U32 si0,si1,si2,si3,si4,si5;
U64 sj0,sj1,sj2,sj3,sj4;
si0=i->g0;
si1=4096U;
si0-=si1;
l4=si0;
i->g0=si0;
si0=l4;
si1=l3;
i32_store(&i->m0,(U64)si0+100U,si1);
si0=l3;
si0=!(si0);
if(si0){
goto L17;
}
si0=l3;
si1=l1;
si0=si0 > si1;
if(si0){
goto L16;
}
si0=l3;
si1=8U;
si0=si0 < si1;
if(si0){
goto L15;
}
si0=l3;
si1=389U;
si0=si0 < si1;
if(si0){
goto L23;
}
si0=8U;
l5=si0;
si0=l3;
si1=1U;
si0<<=(si1&31);
l6=si0;
si0=!(si0);
if(si0){
goto L24;
}
si0=l6;
si1=268435455U;
si0=si0 > si1;
if(si0){
goto L10;
}
si0=l3;
si1=4U;
si0<<=(si1&31);
l1=si0;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L10;
}
si0=l1;
si0=!(si0);
if(si0){
goto L24;
}
si0=l1;
si1=1U;
si0=f15026(i,si0,si1);
l5=si0;
si0=!(si0);
if(si0){
goto L14;
}
L24:;
si0=l3;
si1=6440U;
si0=si0 >= si1;
if(si0){
goto L22;
}
si0=l3;
si1=561U;
si0=si0 >= si1;
if(si0){
goto L21;
}
si0=36U;
l1=si0;
si0=11U;
l7=si0;
goto L20;
L23:;
si0=l2;
sj0=i64_load(&i->m0,(U64)si0);
l8=sj0;
si0=0U;
l9=si0;
si0=l4;
si1=104U;
si0+=si1;
si1=0U;
si2=3992U;
si0=f15145(i,si0,si1,si2);
si0=l3;
si1=-1U;
si0+=si1;
l10=si0;
si1=1U;
si0&=si1;
l11=si0;
sj0=0ULL;
l12=sj0;
si0=l3;
si1=2U;
si0=si0 == si1;
if(si0){
goto L25;
}
si0=l2;
si1=16U;
si0+=si1;
l1=si0;
si0=l10;
si1=-2U;
si0&=si1;
l13=si0;
si0=0U;
l9=si0;
si0=l4;
si1=104U;
si0+=si1;
l7=si0;
sj0=0ULL;
l12=sj0;
L26:;
{
si0=l4;
si1=80U;
si0+=si1;
si1=l1;
si2=-8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
sj2=0ULL;
sj3=l8;
sj4=0ULL;
f15157(i,si0,sj1,sj2,sj3,sj4);
si0=l7;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1+80U);
l14=sj1;
sj2=l12;
sj1+=sj2;
l12=sj1;
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=64U;
si0+=si1;
si1=l1;
sj1=i64_load(&i->m0,(U64)si1);
sj2=0ULL;
sj3=l8;
sj4=0ULL;
f15157(i,si0,sj1,sj2,sj3,sj4);
si0=l7;
si1=8U;
si0+=si1;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1+64U);
l15=sj1;
si2=l4;
si3=80U;
si2+=si3;
si3=8U;
si2+=si3;
sj2=i64_load(&i->m0,(U64)si2);
sj3=l12;
sj4=l14;
si3=sj3 < sj4;
sj3=(U64)(si3);
sj2+=sj3;
sj1+=sj2;
l12=sj1;
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si1=16U;
si0+=si1;
l1=si0;
si0=l7;
si1=16U;
si0+=si1;
l7=si0;
si0=l4;
si1=64U;
si0+=si1;
si1=8U;
si0+=si1;
sj0=i64_load(&i->m0,(U64)si0);
sj1=l12;
sj2=l15;
si1=sj1 < sj2;
sj1=(U64)(si1);
sj0+=sj1;
l12=sj0;
si0=l13;
si1=l9;
si2=2U;
si1+=si2;
l9=si1;
si0=si0 != si1;
if(si0){
goto L26;
}
}
L25:;
si0=l11;
si0=!(si0);
if(si0){
goto L27;
}
si0=l4;
si1=104U;
si0+=si1;
si1=l9;
si2=3U;
si1<<=(si2&31);
l1=si1;
si0+=si1;
si1=l2;
si2=8U;
si1+=si2;
si2=l1;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
sj2=l8;
sj1*=sj2;
sj2=l12;
sj1+=sj2;
i64_store(&i->m0,(U64)si0,sj1);
L27:;
si0=l3;
si1=-4U;
si0+=si1;
l16=si0;
si0=l3;
si1=1U;
si0+=si1;
l17=si0;
si0=l3;
si1=-3U;
si0+=si1;
l1=si0;
si1=-2U;
si0&=si1;
l18=si0;
si0=l1;
si1=1U;
si0&=si1;
l19=si0;
si0=l4;
si1=104U;
si0+=si1;
l5=si0;
si0=l2;
l6=si0;
si0=0U;
l20=si0;
si0=2U;
l21=si0;
si0=2U;
l7=si0;
si0=1U;
l22=si0;
L29:;
{
si0=l22;
l1=si0;
si0=l7;
l22=si0;
si1=l3;
si2=l1;
si1-=si2;
l7=si1;
si0=si0 > si1;
if(si0){
goto L13;
}
si0=l22;
si1=l17;
si0=si0 == si1;
if(si0){
goto L28;
}
si0=l7;
si1=l22;
si0=si0 == si1;
if(si0){
goto L30;
}
si0=l2;
si1=l1;
si2=3U;
si1<<=(si2&31);
si0+=si1;
sj0=i64_load(&i->m0,(U64)si0);
l14=sj0;
si0=0U;
l7=si0;
sj0=0ULL;
l12=sj0;
si0=l16;
si1=0U;
si2=0U;
si3=l20;
si4=1U;
si3<<=(si4&31);
si2-=si3;
si1-=si2;
si0=si0 == si1;
if(si0){
goto L31;
}
si0=0U;
l1=si0;
sj0=0ULL;
l15=sj0;
si0=0U;
l7=si0;
L32:;
{
si0=l4;
si1=48U;
si0+=si1;
si1=l6;
si2=l1;
si1+=si2;
l9=si1;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
sj2=0ULL;
sj3=l14;
sj4=0ULL;
f15157(i,si0,sj1,sj2,sj3,sj4);
si0=l5;
si1=l1;
si0+=si1;
l13=si0;
si1=16U;
si0+=si1;
l11=si0;
sj1=l12;
si2=l11;
sj2=i64_load(&i->m0,(U64)si2);
sj1+=sj2;
l8=sj1;
si2=l4;
sj2=i64_load(&i->m0,(U64)si2+48U);
sj1+=sj2;
l23=sj1;
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=32U;
si0+=si1;
si1=l9;
si2=24U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
sj2=0ULL;
sj3=l14;
sj4=0ULL;
f15157(i,si0,sj1,sj2,sj3,sj4);
si0=l13;
si1=24U;
si0+=si1;
l9=si0;
sj1=l15;
sj2=l8;
sj3=l12;
si2=sj2 < sj3;
sj2=(U64)(si2);
sj1+=sj2;
si2=l4;
si3=48U;
si2+=si3;
si3=8U;
si2+=si3;
sj2=i64_load(&i->m0,(U64)si2);
sj1+=sj2;
sj2=l23;
sj3=l8;
si2=sj2 < sj3;
sj2=(U64)(si2);
sj1+=sj2;
l8=sj1;
si2=l9;
sj2=i64_load(&i->m0,(U64)si2);
sj1+=sj2;
l12=sj1;
si2=l4;
sj2=i64_load(&i->m0,(U64)si2+32U);
sj1+=sj2;
l15=sj1;
i64_store(&i->m0,(U64)si0,sj1);
sj0=l12;
sj1=l8;
si0=sj0 < sj1;
sj0=(U64)(si0);
si1=l4;
si2=32U;
si1+=si2;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
sj0+=sj1;
sj1=l15;
sj2=l12;
si1=sj1 < sj2;
sj1=(U64)(si1);
sj0+=sj1;
l12=sj0;
si0=l1;
si1=16U;
si0+=si1;
l1=si0;
sj0=0ULL;
l15=sj0;
si0=l18;
si1=l7;
si2=2U;
si1+=si2;
l7=si1;
si0=si0 != si1;
if(si0){
goto L32;
}
}
L31:;
si0=l19;
si0=!(si0);
if(si0){
goto L30;
}
si0=l4;
si1=16U;
si0+=si1;
si1=l2;
si2=l22;
si3=3U;
si2<<=(si3&31);
si1+=si2;
si2=l7;
si3=3U;
si2<<=(si3&31);
l1=si2;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
sj2=l12;
sj3=l14;
sj4=l12;
f15157(i,si0,sj1,sj2,sj3,sj4);
si0=l4;
si1=104U;
si0+=si1;
si1=l21;
si2=3U;
si1<<=(si2&31);
si0+=si1;
si1=l1;
si0+=si1;
l1=si0;
sj1=l12;
si2=l1;
sj2=i64_load(&i->m0,(U64)si2);
sj1+=sj2;
si2=l4;
sj2=i64_load(&i->m0,(U64)si2+16U);
sj1+=sj2;
i64_store(&i->m0,(U64)si0,sj1);
L30:;
si0=l18;
si1=-2U;
si0+=si1;
l18=si0;
si0=l6;
si1=8U;
si0+=si1;
l6=si0;
si0=l5;
si1=16U;
si0+=si1;
l5=si0;
si0=l20;
si1=1U;
si0+=si1;
l20=si0;
si0=l22;
si1=1U;
si0+=si1;
l7=si0;
si0=l22;
si1=1U;
si0<<=(si1&31);
l21=si0;
si1=l10;
si0=si0 < si1;
if(si0){
goto L29;
}
}
si0=l2;
si1=l3;
si2=2U;
si1<<=(si2&31);
si2=-8U;
si1&=si2;
l9=si1;
si0+=si1;
l13=si0;
si0=1U;
l7=si0;
si0=l0;
l1=si0;
L33:;
{
si0=l7;
si1=l3;
si0=si0 >= si1;
if(si0){
goto L12;
}
si0=l4;
si1=l2;
sj1=i64_load(&i->m0,(U64)si1);
l12=sj1;
sj2=0ULL;
sj3=l12;
sj4=0ULL;
f15157(i,si0,sj1,sj2,sj3,sj4);
si0=l1;
si1=8U;
si0+=si1;
si1=l4;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l7;
si1=2U;
si0+=si1;
l7=si0;
si0=l1;
si1=16U;
si0+=si1;
l1=si0;
si0=l2;
si1=8U;
si0+=si1;
l2=si0;
si0=l9;
si1=-8U;
si0+=si1;
l9=si0;
if(si0){
goto L33;
}
}
si0=l3;
si1=1U;
si0&=si1;
si0=!(si0);
if(si0){
goto L34;
}
si0=l0;
si1=l10;
si2=3U;
si1<<=(si2&31);
si0+=si1;
si1=l13;
sj1=i64_load(&i->m0,(U64)si1);
l12=sj1;
sj2=l12;
sj1*=sj2;
i64_store(&i->m0,(U64)si0,sj1);
L34:;
si0=l3;
si1=536870910U;
si0+=si1;
si1=536870911U;
si0&=si1;
l1=si0;
si1=1U;
si0+=si1;
l9=si0;
si1=3U;
si0&=si1;
l7=si0;
si0=l1;
si1=3U;
si0=si0 >= si1;
if(si0){
goto L36;
}
si0=l4;
si1=104U;
si0+=si1;
l1=si0;
sj0=0ULL;
l12=sj0;
goto L35;
L36:;
si0=l9;
si1=1073741820U;
si0&=si1;
l9=si0;
si0=l4;
si1=104U;
si0+=si1;
l1=si0;
sj0=0ULL;
l12=sj0;
L37:;
{
si0=l1;
si1=l1;
sj1=i64_load(&i->m0,(U64)si1);
l8=sj1;
sj2=1ULL;
sj1<<=(sj2&63);
sj2=l12;
sj1|=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si1=8U;
si0+=si1;
l13=si0;
si1=l13;
sj1=i64_load(&i->m0,(U64)si1);
l12=sj1;
sj2=1ULL;
sj1<<=(sj2&63);
sj2=l8;
sj3=63ULL;
sj2>>=(sj3&63);
sj1|=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si1=16U;
si0+=si1;
l13=si0;
si1=l13;
sj1=i64_load(&i->m0,(U64)si1);
l8=sj1;
sj2=1ULL;
sj1<<=(sj2&63);
sj2=l12;
sj3=63ULL;
sj2>>=(sj3&63);
sj1|=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si1=24U;
si0+=si1;
l13=si0;
si1=l13;
sj1=i64_load(&i->m0,(U64)si1);
l12=sj1;
sj2=1ULL;
sj1<<=(sj2&63);
sj2=l8;
sj3=63ULL;
sj2>>=(sj3&63);
sj1|=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si1=32U;
si0+=si1;
l1=si0;
sj0=l12;
sj1=63ULL;
sj0>>=(sj1&63);
l12=sj0;
si0=l9;
si1=-4U;
si0+=si1;
l9=si0;
if(si0){
goto L37;
}
}
L35:;
si0=l7;
si0=!(si0);
if(si0){
goto L38;
}
L39:;
{
si0=l1;
si1=l1;
sj1=i64_load(&i->m0,(U64)si1);
l8=sj1;
sj2=1ULL;
sj1<<=(sj2&63);
sj2=l12;
sj1|=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si1=8U;
si0+=si1;
l1=si0;
sj0=l8;
sj1=63ULL;
sj0>>=(sj1&63);
l12=sj0;
si0=l7;
si1=-1U;
si0+=si1;
l7=si0;
if(si0){
goto L39;
}
}
L38:;
si0=l0;
si1=8U;
si0+=si1;
l11=si0;
si0=0U;
l1=si0;
si0=0U;
l7=si0;
L40:;
{
si0=l11;
si1=l1;
si0+=si1;
l9=si0;
sj0=i64_load(&i->m0,(U64)si0);
l8=sj0;
si1=l4;
si2=104U;
si1+=si2;
si2=l1;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
sj0+=sj1;
l12=sj0;
sj1=l8;
si0=sj0 < sj1;
l13=si0;
si0=l7;
si1=255U;
si0&=si1;
if(si0){
goto L42;
}
si0=l13;
l7=si0;
goto L41;
L42:;
si0=l13;
sj1=l12;
sj2=1ULL;
sj1+=sj2;
l12=sj1;
si1=!(sj1);
si0|=si1;
l7=si0;
L41:;
si0=l9;
sj1=l12;
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si1=8U;
si0+=si1;
l1=si0;
si0=l10;
si1=-1U;
si0+=si1;
l10=si0;
if(si0){
goto L40;
}
goto L2;
}
L28:;
si0=l3;
si1=l3;
si2=1203252U;
f594(i,si0,si1,si2);
UNREACHABLE;
L22:;
si0=l3;
si1=11699U;
si0=si0 > si1;
if(si0){
goto L43;
}
si0=l3;
si1=15U;
si0*=si1;
si1=3U;
si0>>=(si1&31);
si1=505U;
si0+=si1;
l1=si0;
si1=3U;
si0<<=(si1&31);
l9=si0;
goto L6;
L43:;
si0=8U;
l10=si0;
si0=l3;
si1=50U;
si0=f1007(i,si0,si1);
l1=si0;
if(si0){
goto L44;
}
si0=0U;
l1=si0;
si0=1U;
l7=si0;
goto L5;
L44:;
si0=l1;
si1=268435455U;
si0=si0 > si1;
if(si0){
goto L10;
}
si0=l1;
si1=3U;
si0<<=(si1&31);
l9=si0;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L10;
}
si0=l9;
if(si0){
goto L6;
}
si0=0U;
l7=si0;
goto L5;
L21:;
si0=l3;
si1=1406U;
si0=si0 >= si1;
if(si0){
goto L19;
}
si0=40U;
l1=si0;
si0=9U;
l7=si0;
L20:;
si0=l7;
si1=l3;
si0*=si1;
si1=65535U;
si0&=si1;
si1=l1;
si0=DIV_U(si0,si1);
l9=si0;
si1=l3;
si0=si0 <= si1;
if(si0){
goto L18;
}
si0=1201588U;
si1=35U;
si2=1203268U;
f604(i,si0,si1,si2);
UNREACHABLE;
L19:;
si0=l3;
si1=65535U;
si0&=si1;
si1=10U;
si0=DIV_U(si0,si1);
l9=si0;
L18:;
si0=8U;
l10=si0;
si0=1U;
l20=si0;
si0=l3;
si1=l9;
si0-=si1;
l22=si0;
si1=43U;
si0=si0 >= si1;
if(si0){
goto L45;
}
si0=0U;
l1=si0;
goto L7;
L45:;
si0=l22;
si1=390U;
si0=si0 < si1;
if(si0){
goto L11;
}
si0=l22;
si1=1090U;
si0=si0 >= si1;
if(si0){
goto L46;
}
si0=l22;
si1=3U;
si0*=si1;
si1=64U;
si0+=si1;
l1=si0;
goto L9;
L46:;
si0=l22;
si1=11699U;
si0=si0 > si1;
if(si0){
goto L47;
}
si0=l22;
si1=15U;
si0*=si1;
si1=3U;
si0>>=(si1&31);
si1=505U;
si0+=si1;
l1=si0;
goto L9;
L47:;
si0=l22;
si1=50U;
si0=f1007(i,si0,si1);
l1=si0;
if(si0){
goto L48;
}
si0=0U;
l1=si0;
goto L7;
L48:;
si0=l1;
si1=268435455U;
si0=si0 > si1;
if(si0){
goto L10;
}
si0=l1;
si1=3U;
si0<<=(si1&31);
l7=si0;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L10;
}
si0=l7;
if(si0){
goto L8;
}
si0=0U;
l20=si0;
goto L7;
L17:;
si0=l4;
si1=0U;
i32_store(&i->m0,(U64)si0+104U,si1);
si0=1U;
si1=l4;
si2=100U;
si1+=si2;
si2=1203232U;
si3=l4;
si4=104U;
si3+=si4;
si4=1203316U;
f1250(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L16:;
si0=l3;
si1=l1;
si2=1203332U;
f597(i,si0,si1,si2);
UNREACHABLE;
L15:;
si0=l4;
si1=104U;
si0+=si1;
si1=0U;
si2=128U;
si0=f15145(i,si0,si1,si2);
si0=l4;
si1=104U;
si0+=si1;
si1=16U;
si2=l2;
si3=l3;
f1071(i,si0,si1,si2,si3);
si0=l0;
si1=l4;
si2=104U;
si1+=si2;
si2=l3;
si3=3U;
si2<<=(si3&31);
si0=f15143(i,si0,si1,si2);
goto L2;
L14:;
si0=8U;
si1=l1;
f52(i,si0,si1);
UNREACHABLE;
L13:;
si0=l22;
si1=l7;
si2=1203236U;
f683(i,si0,si1,si2);
UNREACHABLE;
L12:;
si0=l7;
si1=l3;
si2=1202068U;
f594(i,si0,si1,si2);
UNREACHABLE;
L11:;
si0=l22;
si1=1U;
si0<<=(si1&31);
si1=128U;
si0+=si1;
l1=si0;
goto L9;
L10:;
f53(i);
UNREACHABLE;
L9:;
si0=l1;
si1=3U;
si0<<=(si1&31);
l7=si0;
L8:;
si0=0U;
l20=si0;
si0=l7;
si1=1U;
si0=f15026(i,si0,si1);
l10=si0;
if(si0){
goto L7;
}
si0=8U;
si1=l7;
f52(i,si0,si1);
UNREACHABLE;
L7:;
si0=l5;
si1=l6;
si2=l2;
si3=l22;
si4=l10;
si5=l1;
f1076(i,si0,si1,si2,si3,si4,si5);
si0=l9;
si1=l22;
si0=si0 > si1;
if(si0){
goto L50;
}
si0=l0;
si1=l5;
si2=l22;
si3=3U;
si2<<=(si3&31);
l1=si2;
si0=f15143(i,si0,si1,si2);
l7=si0;
si0=l5;
si1=l3;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l21=si0;
si1=l3;
si2=l2;
si3=l1;
si2+=si3;
si3=l9;
si4=l2;
si5=l9;
f1201(i,si0,si1,si2,si3,si4,si5);
si0=l3;
si1=l9;
si0=si0 < si1;
if(si0){
goto L49;
}
si0=l7;
si1=l1;
si0+=si1;
l1=si0;
si0=l9;
si1=1U;
si0&=si1;
l2=si0;
si0=l9;
si1=1U;
si0=si0 != si1;
if(si0){
goto L52;
}
si0=0U;
l7=si0;
sj0=0ULL;
l12=sj0;
goto L51;
L52:;
si0=0U;
l11=si0;
si0=0U;
si1=l9;
si2=65534U;
si1&=si2;
si0-=si1;
l18=si0;
sj0=0ULL;
l12=sj0;
si0=l1;
l7=si0;
si0=l21;
l13=si0;
L53:;
{
si0=l7;
si1=l13;
sj1=i64_load(&i->m0,(U64)si1);
l8=sj1;
sj2=1ULL;
sj1<<=(sj2&63);
sj2=l12;
sj1|=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l7;
si1=8U;
si0+=si1;
si1=l13;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
l12=sj1;
sj2=1ULL;
sj1<<=(sj2&63);
sj2=l8;
sj3=63ULL;
sj2>>=(sj3&63);
sj1|=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l7;
si1=16U;
si0+=si1;
l7=si0;
si0=l13;
si1=16U;
si0+=si1;
l13=si0;
sj0=l12;
sj1=63ULL;
sj0>>=(sj1&63);
l12=sj0;
si0=l18;
si1=l11;
si2=-2U;
si1+=si2;
l11=si1;
si0=si0 != si1;
if(si0){
goto L53;
}
}
si0=0U;
si1=l11;
si0-=si1;
l7=si0;
L51:;
si0=l2;
si0=!(si0);
if(si0){
goto L54;
}
si0=l1;
si1=l7;
si2=3U;
si1<<=(si2&31);
l7=si1;
si0+=si1;
si1=l21;
si2=l7;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
sj2=1ULL;
sj1<<=(sj2&63);
sj2=l12;
sj1|=sj2;
i64_store(&i->m0,(U64)si0,sj1);
L54:;
si0=l5;
si1=l22;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l7=si0;
si0=0U;
l13=si0;
L55:;
{
si0=l1;
sj0=i64_load(&i->m0,(U64)si0);
l8=sj0;
si1=l7;
sj1=i64_load(&i->m0,(U64)si1);
sj0+=sj1;
l12=sj0;
sj1=l8;
si0=sj0 < sj1;
l11=si0;
si0=l13;
si1=255U;
si0&=si1;
if(si0){
goto L57;
}
si0=l11;
l13=si0;
goto L56;
L57:;
si0=l11;
sj1=l12;
sj2=1ULL;
sj1+=sj2;
l12=sj1;
si1=!(sj1);
si0|=si1;
l13=si0;
L56:;
si0=l1;
sj1=l12;
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si1=8U;
si0+=si1;
l1=si0;
si0=l7;
si1=8U;
si0+=si1;
l7=si0;
si0=l9;
si1=-1U;
si0+=si1;
l9=si0;
if(si0){
goto L55;
}
}
si0=l20;
if(si0){
goto L3;
}
goto L4;
L50:;
si0=l9;
si1=l22;
si2=1203284U;
f597(i,si0,si1,si2);
UNREACHABLE;
L49:;
si0=l9;
si1=l3;
si2=1203300U;
f597(i,si0,si1,si2);
UNREACHABLE;
L6:;
si0=0U;
l7=si0;
si0=l9;
si1=1U;
si0=f15026(i,si0,si1);
l10=si0;
if(si0){
goto L5;
}
si0=8U;
si1=l9;
f52(i,si0,si1);
UNREACHABLE;
L5:;
si0=l5;
si1=l6;
si2=l2;
si3=l3;
si4=l10;
si5=l1;
f1076(i,si0,si1,si2,si3,si4,si5);
si0=l3;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L1;
}
si0=l0;
si1=l5;
si2=l3;
si3=3U;
si2<<=(si3&31);
si0=f15143(i,si0,si1,si2);
si0=l7;
if(si0){
goto L3;
}
L4:;
si0=l10;
f15024(i,si0);
L3:;
si0=l6;
si0=!(si0);
if(si0){
goto L2;
}
si0=l5;
f15024(i,si0);
L2:;
si0=l4;
si1=4096U;
si0+=si1;
i->g0=si0;
goto L0;
L1:;
si0=l3;
si1=l6;
si2=1203348U;
f597(i,si0,si1,si2);
UNREACHABLE;
L0:;
}

void f1053(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U64 l3) {
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U64 l8=0;
U32 l9=0;
U32 l10=0;
U32 si0,si1,si2,si3;
U64 sj0,sj1,sj2;
si0=i->g0;
si1=16U;
si0-=si1;
l4=si0;
i->g0=si0;
si0=l2;
si0=!(si0);
if(si0){
goto L3;
}
si0=l2;
si1=268435455U;
si0=si0 > si1;
if(si0){
goto L5;
}
si0=l2;
si1=3U;
si0<<=(si1&31);
l5=si0;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L5;
}
si0=l5;
if(si0){
goto L4;
}
si0=8U;
l6=si0;
goto L2;
L5:;
f53(i);
UNREACHABLE;
L4:;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=l5;
si0=f15022(i,si0);
l6=si0;
if(si0){
goto L2;
}
si0=8U;
si1=l5;
f52(i,si0,si1);
UNREACHABLE;
L3:;
si0=l4;
si1=0U;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l4;
sj1=8ULL;
i64_store(&i->m0,(U64)si0+4U,sj1);
sj0=l3;
sj1=0ULL;
si0=sj0 != sj1;
l7=si0;
goto L1;
L2:;
si0=l6;
si1=l1;
sj1=i64_load(&i->m0,(U64)si1);
l8=sj1;
sj2=l3;
sj1-=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=l2;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l4;
si1=l6;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l4;
si1=1U;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=0U;
l5=si0;
si0=l2;
l9=si0;
si0=1U;
l6=si0;
sj0=l8;
sj1=l3;
si0=sj0 >= sj1;
if(si0){
goto L6;
}
si0=l2;
si1=-1U;
si0+=si1;
l10=si0;
si0=l1;
si1=8U;
si0+=si1;
l9=si0;
si0=1U;
l7=si0;
si0=0U;
l5=si0;
si0=1U;
l6=si0;
L7:;
{
si0=l10;
si1=l5;
si0=si0 == si1;
if(si0){
goto L1;
}
si0=l9;
sj0=i64_load(&i->m0,(U64)si0);
l3=sj0;
sj1=-1ULL;
sj0+=sj1;
l8=sj0;
si0=l6;
si1=l4;
si1=i32_load(&i->m0,(U64)si1+8U);
si0=si0 != si1;
if(si0){
goto L8;
}
si0=l4;
si1=4U;
si0+=si1;
si1=l6;
f1299(i,si0,si1);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+12U);
l6=si0;
L8:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+4U);
si1=l6;
si2=3U;
si1<<=(si2&31);
si0+=si1;
sj1=l8;
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=l4;
si1=i32_load(&i->m0,(U64)si1+12U);
si2=1U;
si1+=si2;
l6=si1;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l9;
si1=8U;
si0+=si1;
l9=si0;
si0=l5;
si1=1U;
si0+=si1;
l5=si0;
sj0=l3;
si0=!(sj0);
if(si0){
goto L7;
}
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0+8U);
l9=si0;
L6:;
si0=l1;
si1=l5;
si2=1U;
si1+=si2;
l5=si1;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l10=si0;
si0=l9;
si1=l6;
si0-=si1;
si1=l2;
si2=l5;
si1-=si2;
l5=si1;
si0=si0 >= si1;
if(si0){
goto L9;
}
si0=l4;
si1=4U;
si0+=si1;
si1=l6;
si2=l5;
f1302(i,si0,si1,si2);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+12U);
l6=si0;
L9:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+4U);
si1=l6;
si2=3U;
si1<<=(si2&31);
si0+=si1;
si1=l10;
si2=l5;
si3=3U;
si2<<=(si3&31);
si0=f15143(i,si0,si1,si2);
si0=l4;
si1=l6;
si2=l5;
si1+=si2;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=0U;
l7=si0;
L1:;
si0=l0;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1+4U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=l7;
i32_store8(&i->m0,(U64)si0+12U,si1);
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

void f1054(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4) {
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 l8=0;
U32 l9=0;
U32 l10=0;
U64 l11=0;
U64 l12=0;
U32 si0,si1,si2,si3;
U64 sj0,sj1,sj2,sj3;
si0=i->g0;
si1=16U;
si0-=si1;
l5=si0;
i->g0=si0;
si0=l2;
si1=l4;
si0=si0 < si1;
l6=si0;
if(si0){
goto L5;
}
si0=8U;
l7=si0;
si0=l2;
si0=!(si0);
if(si0){
goto L6;
}
si0=l2;
si1=268435455U;
si0=si0 > si1;
if(si0){
goto L3;
}
si0=l2;
si1=3U;
si0<<=(si1&31);
l8=si0;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L3;
}
si0=l8;
si0=!(si0);
if(si0){
goto L6;
}
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=l8;
si0=f15022(i,si0);
l7=si0;
si0=!(si0);
if(si0){
goto L2;
}
L6:;
si0=0U;
l8=si0;
si0=l5;
si1=0U;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l5;
si1=l7;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l5;
si1=l2;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l2;
si1=l4;
si2=l6;
si0=si2?si0:si1;
l9=si0;
if(si0){
goto L4;
}
si0=0U;
l10=si0;
goto L1;
L5:;
si0=1202924U;
si1=34U;
si2=1203396U;
f604(i,si0,si1,si2);
UNREACHABLE;
L4:;
si0=0U;
l8=si0;
si0=l1;
l7=si0;
si0=0U;
l6=si0;
L7:;
{
si0=l3;
sj0=i64_load(&i->m0,(U64)si0);
l11=sj0;
si0=l7;
sj0=i64_load(&i->m0,(U64)si0);
l12=sj0;
si0=l8;
si1=l5;
si1=i32_load(&i->m0,(U64)si1+8U);
si0=si0 != si1;
if(si0){
goto L8;
}
si0=l5;
si1=4U;
si0+=si1;
si1=l8;
f1299(i,si0,si1);
si0=l5;
si0=i32_load(&i->m0,(U64)si0+12U);
l8=si0;
L8:;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+4U);
si1=l8;
si2=3U;
si1<<=(si2&31);
si0+=si1;
sj1=l12;
si2=l6;
sj2=(U64)(si2);
sj3=1ULL;
sj2&=sj3;
sj1-=sj2;
sj2=l11;
sj1-=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=l5;
si1=i32_load(&i->m0,(U64)si1+12U);
si2=1U;
si1+=si2;
l8=si1;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l7;
si1=8U;
si0+=si1;
l7=si0;
si0=l3;
si1=8U;
si0+=si1;
l3=si0;
sj0=l12;
sj1=l11;
si0=sj0 <= sj1;
sj1=l12;
sj2=l11;
si1=sj1 < sj2;
si2=l6;
si3=1U;
si2&=si3;
si0=si2?si0:si1;
l10=si0;
l6=si0;
si0=l9;
si1=-1U;
si0+=si1;
l9=si0;
si0=!(si0);
if(si0){
goto L1;
}
goto L7;
}
L3:;
f53(i);
UNREACHABLE;
L2:;
si0=8U;
si1=l8;
f52(i,si0,si1);
UNREACHABLE;
L1:;
si0=l2;
si1=l4;
si0=si0 == si1;
if(si0){
goto L10;
}
si0=l1;
si1=l4;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l7=si0;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+8U);
si1=l8;
si0-=si1;
si1=l2;
si2=l4;
si1-=si2;
l3=si1;
si0=si0 >= si1;
if(si0){
goto L11;
}
si0=l5;
si1=4U;
si0+=si1;
si1=l8;
si2=l3;
f1302(i,si0,si1,si2);
si0=l5;
si0=i32_load(&i->m0,(U64)si0+12U);
l8=si0;
L11:;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+4U);
si1=l8;
si2=3U;
si1<<=(si2&31);
si0+=si1;
si1=l7;
si2=l3;
si3=3U;
si2<<=(si3&31);
si0=f15143(i,si0,si1,si2);
si0=l5;
si1=l8;
si2=l3;
si1+=si2;
l3=si1;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l10;
if(si0){
goto L12;
}
si0=0U;
l10=si0;
goto L10;
L12:;
si0=l3;
si1=l4;
si0=si0 < si1;
if(si0){
goto L9;
}
si0=1U;
l10=si0;
si0=l3;
si1=l4;
si0=si0 == si1;
if(si0){
goto L10;
}
si0=l5;
si0=i32_load(&i->m0,(U64)si0+4U);
si1=l4;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l3=si0;
si1=l3;
sj1=i64_load(&i->m0,(U64)si1);
l11=sj1;
sj2=-1ULL;
sj1+=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=0U;
l10=si0;
sj0=l11;
sj1=0ULL;
si0=sj0 != sj1;
if(si0){
goto L10;
}
si0=l8;
si1=l2;
si0+=si1;
si1=3U;
si0<<=(si1&31);
si1=l4;
si2=4U;
si1<<=(si2&31);
si0-=si1;
si1=-8U;
si0+=si1;
l8=si0;
si0=l3;
si1=8U;
si0+=si1;
l3=si0;
L13:;
{
si0=l8;
si0=!(si0);
l10=si0;
si0=l8;
si0=!(si0);
if(si0){
goto L10;
}
si0=l3;
si1=l3;
sj1=i64_load(&i->m0,(U64)si1);
l11=sj1;
sj2=-1ULL;
sj1+=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l8;
si1=-8U;
si0+=si1;
l8=si0;
si0=l3;
si1=8U;
si0+=si1;
l3=si0;
sj0=l11;
si0=!(sj0);
if(si0){
goto L13;
}
}
L10:;
si0=l0;
si1=l5;
sj1=i64_load(&i->m0,(U64)si1+4U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=l10;
i32_store8(&i->m0,(U64)si0+12U,si1);
si0=l0;
si1=8U;
si0+=si1;
si1=l5;
si2=4U;
si1+=si2;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=16U;
si0+=si1;
i->g0=si0;
goto L0;
L9:;
si0=l4;
si1=l3;
si2=1203380U;
f593(i,si0,si1,si2);
UNREACHABLE;
L0:;
}

U32 f1055(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4,U32 l5) {
U32 l6=0;
U32 l7=0;
U32 l8=0;
U32 l9=0;
U32 l10=0;
U64 l11=0;
U64 l12=0;
U64 l13=0;
U32 si0,si1,si2,si3,si4,si5;
U64 sj0,sj1,sj2,sj3,sj4;
si0=i->g0;
si1=32U;
si0-=si1;
l6=si0;
i->g0=si0;
si0=l6;
si1=l3;
i32_store(&i->m0,(U64)si0,si1);
si0=l6;
si1=l5;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l3;
si1=l5;
si0=si0 != si1;
if(si0){
goto L1;
}
si0=l3;
si1=l1;
si0=si0 > si1;
if(si0){
goto L5;
}
si0=l3;
if(si0){
goto L6;
}
si0=0U;
l7=si0;
goto L2;
L6:;
si0=l3;
si1=1U;
si0&=si1;
l8=si0;
si0=l3;
si1=1U;
si0=si0 != si1;
if(si0){
goto L4;
}
si0=0U;
l7=si0;
si0=0U;
l9=si0;
goto L3;
L5:;
si0=1202809U;
si1=34U;
si2=1203412U;
f604(i,si0,si1,si2);
UNREACHABLE;
L4:;
si0=l3;
si1=-2U;
si0&=si1;
l10=si0;
si0=0U;
l7=si0;
si0=l2;
l3=si0;
si0=l4;
l5=si0;
si0=l0;
l1=si0;
si0=0U;
l9=si0;
L7:;
{
si0=l1;
si1=l3;
sj1=i64_load(&i->m0,(U64)si1);
l11=sj1;
si2=l7;
sj2=(U64)(si2);
sj3=1ULL;
sj2&=sj3;
sj1-=sj2;
si2=l5;
sj2=i64_load(&i->m0,(U64)si2);
l12=sj2;
sj1-=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si1=8U;
si0+=si1;
si1=l3;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
l13=sj1;
sj2=l11;
sj3=l12;
si2=sj2 <= sj3;
sj3=l11;
sj4=l12;
si3=sj3 < sj4;
si4=l7;
si5=1U;
si4&=si5;
si2=si4?si2:si3;
l7=si2;
sj2=(U64)(si2);
sj1-=sj2;
si2=l5;
si3=8U;
si2+=si3;
sj2=i64_load(&i->m0,(U64)si2);
l11=sj2;
sj1-=sj2;
i64_store(&i->m0,(U64)si0,sj1);
sj0=l13;
sj1=l11;
si0=sj0 <= sj1;
sj1=l13;
sj2=l11;
si1=sj1 < sj2;
si2=l7;
si0=si2?si0:si1;
l7=si0;
si0=l3;
si1=16U;
si0+=si1;
l3=si0;
si0=l5;
si1=16U;
si0+=si1;
l5=si0;
si0=l1;
si1=16U;
si0+=si1;
l1=si0;
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
L3:;
si0=l8;
si0=!(si0);
if(si0){
goto L2;
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
si2=l7;
sj2=(U64)(si2);
sj1-=sj2;
si2=l4;
si3=l3;
si2+=si3;
sj2=i64_load(&i->m0,(U64)si2);
l12=sj2;
sj1-=sj2;
i64_store(&i->m0,(U64)si0,sj1);
sj0=l11;
sj1=l12;
si0=sj0 <= sj1;
sj1=l11;
sj2=l12;
si1=sj1 < sj2;
si2=l7;
si0=si2?si0:si1;
l7=si0;
L2:;
si0=l6;
si1=32U;
si0+=si1;
i->g0=si0;
si0=l7;
si1=1U;
si0&=si1;
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
si4=1203428U;
f1250(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L0:;
return si0;
}

U32 f1056(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4,U32 l5) {
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
U32 si0,si1,si2,si3,si4,si5;
U64 sj0,sj1,sj2,sj3,sj4;
si0=l1;
si1=l3;
si0=si0 < si1;
if(si0){
goto L6;
}
si0=l3;
si1=l5;
si0=si0 < si1;
if(si0){
goto L4;
}
si0=l3;
si1=l5;
si0-=si1;
l6=si0;
si0=l2;
si1=l5;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l7=si0;
si0=l5;
si0=!(si0);
if(si0){
goto L7;
}
si0=l5;
si1=1U;
si0&=si1;
l8=si0;
si0=l5;
si1=1U;
si0=si0 != si1;
if(si0){
goto L9;
}
si0=0U;
l9=si0;
si0=0U;
l10=si0;
goto L8;
L9:;
si0=l5;
si1=-2U;
si0&=si1;
l11=si0;
si0=0U;
l9=si0;
si0=l2;
l12=si0;
si0=l4;
l13=si0;
si0=l0;
l14=si0;
si0=0U;
l10=si0;
L10:;
{
si0=l14;
si1=l12;
sj1=i64_load(&i->m0,(U64)si1);
l15=sj1;
si2=l9;
sj2=(U64)(si2);
sj3=1ULL;
sj2&=sj3;
sj1-=sj2;
si2=l13;
sj2=i64_load(&i->m0,(U64)si2);
l16=sj2;
sj1-=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l14;
si1=8U;
si0+=si1;
si1=l12;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
l17=sj1;
sj2=l15;
sj3=l16;
si2=sj2 <= sj3;
sj3=l15;
sj4=l16;
si3=sj3 < sj4;
si4=l9;
si5=1U;
si4&=si5;
si2=si4?si2:si3;
l9=si2;
sj2=(U64)(si2);
sj1-=sj2;
si2=l13;
si3=8U;
si2+=si3;
sj2=i64_load(&i->m0,(U64)si2);
l15=sj2;
sj1-=sj2;
i64_store(&i->m0,(U64)si0,sj1);
sj0=l17;
sj1=l15;
si0=sj0 <= sj1;
sj1=l17;
sj2=l15;
si1=sj1 < sj2;
si2=l9;
si0=si2?si0:si1;
l9=si0;
si0=l12;
si1=16U;
si0+=si1;
l12=si0;
si0=l13;
si1=16U;
si0+=si1;
l13=si0;
si0=l14;
si1=16U;
si0+=si1;
l14=si0;
si0=l11;
si1=l10;
si2=2U;
si1+=si2;
l10=si1;
si0=si0 != si1;
if(si0){
goto L10;
}
}
L8:;
si0=l8;
si0=!(si0);
if(si0){
goto L11;
}
si0=l0;
si1=l10;
si2=3U;
si1<<=(si2&31);
l12=si1;
si0+=si1;
si1=l2;
si2=l12;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
l15=sj1;
si2=l9;
sj2=(U64)(si2);
sj1-=sj2;
si2=l4;
si3=l12;
si2+=si3;
sj2=i64_load(&i->m0,(U64)si2);
l16=sj2;
sj1-=sj2;
i64_store(&i->m0,(U64)si0,sj1);
sj0=l15;
sj1=l16;
si0=sj0 <= sj1;
sj1=l15;
sj2=l16;
si1=sj1 < sj2;
si2=l9;
si0=si2?si0:si1;
l9=si0;
L11:;
si0=l3;
si1=l5;
si0=si0 == si1;
if(si0){
goto L1;
}
si0=l9;
si1=1U;
si0&=si1;
if(si0){
goto L5;
}
goto L2;
L7:;
si0=l3;
if(si0){
goto L2;
}
si0=0U;
l9=si0;
goto L1;
L6:;
si0=1203008U;
si1=37U;
si2=1203460U;
f604(i,si0,si1,si2);
UNREACHABLE;
L5:;
si0=l1;
si1=l5;
si0-=si1;
si1=l6;
si0=si0 < si1;
if(si0){
goto L3;
}
si0=l0;
si1=l5;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l11=si0;
si1=l7;
sj1=i64_load(&i->m0,(U64)si1);
l15=sj1;
sj2=-1ULL;
sj1+=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=0U;
l9=si0;
si0=0U;
l12=si0;
sj0=l15;
sj1=0ULL;
si0=sj0 != sj1;
if(si0){
goto L12;
}
si0=l5;
si1=-1U;
si0^=si1;
si1=l3;
si0+=si1;
l10=si0;
si0=l0;
si1=l5;
si2=3U;
si1<<=(si2&31);
si2=8U;
si1+=si2;
l12=si1;
si0+=si1;
l13=si0;
si0=l2;
si1=l12;
si0+=si1;
l14=si0;
si0=0U;
l12=si0;
L13:;
{
si0=l10;
si1=l12;
si0=si0 != si1;
if(si0){
goto L14;
}
si0=1U;
l9=si0;
goto L1;
L14:;
si0=l13;
si1=l14;
sj1=i64_load(&i->m0,(U64)si1);
l15=sj1;
sj2=-1ULL;
sj1+=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l13;
si1=8U;
si0+=si1;
l13=si0;
si0=l14;
si1=8U;
si0+=si1;
l14=si0;
si0=l12;
si1=1U;
si0+=si1;
l12=si0;
sj0=l15;
si0=!(sj0);
if(si0){
goto L13;
}
}
L12:;
si0=l11;
si1=l12;
si2=1U;
si1+=si2;
l12=si1;
si2=3U;
si1<<=(si2&31);
l13=si1;
si0+=si1;
si1=l7;
si2=l13;
si1+=si2;
si2=l6;
si3=l12;
si2-=si3;
si3=3U;
si2<<=(si3&31);
si0=f15143(i,si0,si1,si2);
goto L1;
L4:;
si0=1201588U;
si1=35U;
si2=1203444U;
f604(i,si0,si1,si2);
UNREACHABLE;
L3:;
si0=1202809U;
si1=34U;
si2=1203364U;
f604(i,si0,si1,si2);
UNREACHABLE;
L2:;
si0=l0;
si1=l5;
si2=3U;
si1<<=(si2&31);
si0+=si1;
si1=l7;
si2=l6;
si3=3U;
si2<<=(si3&31);
si0=f15143(i,si0,si1,si2);
si0=0U;
l9=si0;
L1:;
si0=l9;
si1=1U;
si0&=si1;
L0:;
return si0;
}

U32 f1057(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 l8=0;
U64 l9=0;
U64 l10=0;
U32 l11=0;
U64 l12=0;
U32 si0,si1,si2,si3,si4,si5;
U64 sj0,sj1,sj2,sj3,sj4;
si0=i->g0;
si1=32U;
si0-=si1;
l4=si0;
i->g0=si0;
si0=l4;
si1=l1;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=l3;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l1;
si1=l3;
si0=si0 != si1;
if(si0){
goto L4;
}
si0=l1;
if(si0){
goto L5;
}
si0=0U;
l5=si0;
goto L1;
L5:;
si0=l1;
si1=1U;
si0&=si1;
l6=si0;
si0=l1;
si1=1U;
si0=si0 != si1;
if(si0){
goto L3;
}
si0=0U;
l5=si0;
si0=0U;
l7=si0;
goto L2;
L4:;
si0=l4;
si1=0U;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=0U;
si1=l4;
si2=l4;
si3=4U;
si2+=si3;
si3=l4;
si4=8U;
si3+=si4;
si4=1203476U;
f1250(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L3:;
si0=l1;
si1=-2U;
si0&=si1;
l8=si0;
si0=0U;
l5=si0;
si0=l2;
l3=si0;
si0=l0;
l1=si0;
si0=0U;
l7=si0;
L6:;
{
si0=l1;
si1=l1;
sj1=i64_load(&i->m0,(U64)si1);
l9=sj1;
si2=l5;
sj2=(U64)(si2);
sj3=1ULL;
sj2&=sj3;
si3=l3;
sj3=i64_load(&i->m0,(U64)si3);
l10=sj3;
sj2+=sj3;
sj1-=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si1=8U;
si0+=si1;
l11=si0;
si1=l11;
sj1=i64_load(&i->m0,(U64)si1);
l12=sj1;
sj2=l9;
sj3=l10;
si2=sj2 <= sj3;
sj3=l9;
sj4=l10;
si3=sj3 < sj4;
si4=l5;
si5=1U;
si4&=si5;
si2=si4?si2:si3;
l5=si2;
sj2=(U64)(si2);
si3=l3;
si4=8U;
si3+=si4;
sj3=i64_load(&i->m0,(U64)si3);
l9=sj3;
sj2+=sj3;
sj1-=sj2;
i64_store(&i->m0,(U64)si0,sj1);
sj0=l12;
sj1=l9;
si0=sj0 <= sj1;
sj1=l12;
sj2=l9;
si1=sj1 < sj2;
si2=l5;
si0=si2?si0:si1;
l5=si0;
si0=l3;
si1=16U;
si0+=si1;
l3=si0;
si0=l1;
si1=16U;
si0+=si1;
l1=si0;
si0=l8;
si1=l7;
si2=2U;
si1+=si2;
l7=si1;
si0=si0 != si1;
if(si0){
goto L6;
}
}
L2:;
si0=l6;
si0=!(si0);
if(si0){
goto L1;
}
si0=l0;
si1=l7;
si2=3U;
si1<<=(si2&31);
l1=si1;
si0+=si1;
l3=si0;
si1=l3;
sj1=i64_load(&i->m0,(U64)si1);
l9=sj1;
si2=l5;
sj2=(U64)(si2);
si3=l2;
si4=l1;
si3+=si4;
sj3=i64_load(&i->m0,(U64)si3);
l10=sj3;
sj2+=sj3;
sj1-=sj2;
i64_store(&i->m0,(U64)si0,sj1);
sj0=l9;
sj1=l10;
si0=sj0 <= sj1;
sj1=l9;
sj2=l10;
si1=sj1 < sj2;
si2=l5;
si0=si2?si0:si1;
l5=si0;
L1:;
si0=l4;
si1=32U;
si0+=si1;
i->g0=si0;
si0=l5;
si1=1U;
si0&=si1;
L0:;
return si0;
}

U32 f1058(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
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
U64 l14=0;
U32 l15=0;
U64 l16=0;
U32 si0,si1,si2,si3,si4,si5;
U64 sj0,sj1,sj2,sj3,sj4;
si0=l1;
si1=l2;
si1=i32_load(&i->m0,(U64)si1+8U);
l3=si1;
si0=si0 < si1;
if(si0){
goto L3;
}
si0=l1;
si1=l3;
si0-=si1;
l4=si0;
si0=l0;
si1=l3;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l5=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si0=l3;
si0=!(si0);
if(si0){
goto L4;
}
si0=l3;
si1=1U;
si0&=si1;
l7=si0;
si0=l3;
si1=1U;
si0=si0 != si1;
if(si0){
goto L6;
}
si0=0U;
l8=si0;
si0=0U;
l9=si0;
goto L5;
L6:;
si0=l3;
si1=-2U;
si0&=si1;
l10=si0;
si0=0U;
l8=si0;
si0=l6;
l11=si0;
si0=l0;
l12=si0;
si0=0U;
l9=si0;
L7:;
{
si0=l11;
si1=l12;
sj1=i64_load(&i->m0,(U64)si1);
l13=sj1;
si2=l8;
sj2=(U64)(si2);
sj3=1ULL;
sj2&=sj3;
sj1-=sj2;
si2=l11;
sj2=i64_load(&i->m0,(U64)si2);
l14=sj2;
sj1-=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l11;
si1=8U;
si0+=si1;
l15=si0;
si1=l12;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
l16=sj1;
sj2=l13;
sj3=l14;
si2=sj2 <= sj3;
sj3=l13;
sj4=l14;
si3=sj3 < sj4;
si4=l8;
si5=1U;
si4&=si5;
si2=si4?si2:si3;
l8=si2;
sj2=(U64)(si2);
sj1-=sj2;
si2=l15;
sj2=i64_load(&i->m0,(U64)si2);
l13=sj2;
sj1-=sj2;
i64_store(&i->m0,(U64)si0,sj1);
sj0=l16;
sj1=l13;
si0=sj0 <= sj1;
sj1=l16;
sj2=l13;
si1=sj1 < sj2;
si2=l8;
si0=si2?si0:si1;
l8=si0;
si0=l11;
si1=16U;
si0+=si1;
l11=si0;
si0=l12;
si1=16U;
si0+=si1;
l12=si0;
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
L5:;
si0=l7;
si0=!(si0);
if(si0){
goto L8;
}
si0=l6;
si1=l9;
si2=3U;
si1<<=(si2&31);
l11=si1;
si0+=si1;
l12=si0;
si1=l0;
si2=l11;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
l13=sj1;
si2=l8;
sj2=(U64)(si2);
sj1-=sj2;
si2=l12;
sj2=i64_load(&i->m0,(U64)si2);
l14=sj2;
sj1-=sj2;
i64_store(&i->m0,(U64)si0,sj1);
sj0=l13;
sj1=l14;
si0=sj0 <= sj1;
sj1=l13;
sj2=l14;
si1=sj1 < sj2;
si2=l8;
si0=si2?si0:si1;
l8=si0;
L8:;
si0=l1;
si1=l3;
si0=si0 == si1;
if(si0){
goto L1;
}
si0=l3;
l11=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+4U);
si1=l3;
si0-=si1;
si1=l4;
si0=si0 >= si1;
if(si0){
goto L9;
}
si0=l2;
si1=l3;
si2=l4;
f1302(i,si0,si1,si2);
si0=l2;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+8U);
l11=si0;
L9:;
si0=l6;
si1=l11;
si2=3U;
si1<<=(si2&31);
si0+=si1;
si1=l5;
si2=l4;
si3=3U;
si2<<=(si3&31);
si0=f15143(i,si0,si1,si2);
si0=l2;
si1=l11;
si2=l4;
si1+=si2;
l12=si1;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l8;
si1=1U;
si0&=si1;
l9=si0;
si0=0U;
l8=si0;
si0=l9;
si0=!(si0);
if(si0){
goto L1;
}
si0=l3;
si1=l12;
si0=si0 > si1;
if(si0){
goto L2;
}
si0=1U;
l8=si0;
si0=l12;
si1=l3;
si0=si0 == si1;
if(si0){
goto L1;
}
si0=l6;
si1=l3;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l12=si0;
si1=l12;
sj1=i64_load(&i->m0,(U64)si1);
l13=sj1;
sj2=-1ULL;
sj1+=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=0U;
l8=si0;
sj0=l13;
sj1=0ULL;
si0=sj0 != sj1;
if(si0){
goto L1;
}
si0=l11;
si1=l1;
si0+=si1;
si1=3U;
si0<<=(si1&31);
si1=l3;
si2=4U;
si1<<=(si2&31);
si0-=si1;
si1=-8U;
si0+=si1;
l11=si0;
si0=l12;
si1=8U;
si0+=si1;
l12=si0;
L10:;
{
si0=l11;
si0=!(si0);
l8=si0;
si0=l11;
si0=!(si0);
if(si0){
goto L1;
}
si0=l12;
si1=l12;
sj1=i64_load(&i->m0,(U64)si1);
l13=sj1;
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
sj0=l13;
si0=!(sj0);
if(si0){
goto L10;
}
goto L1;
}
L4:;
si0=l1;
if(si0){
goto L11;
}
si0=0U;
l8=si0;
goto L1;
L11:;
si0=0U;
l8=si0;
si0=0U;
l11=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+4U);
si1=l4;
si0=si0 >= si1;
if(si0){
goto L12;
}
si0=l2;
si1=0U;
si2=l4;
f1302(i,si0,si1,si2);
si0=l2;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+8U);
l11=si0;
L12:;
si0=l6;
si1=l11;
si2=3U;
si1<<=(si2&31);
si0+=si1;
si1=l5;
si2=l4;
si3=3U;
si2<<=(si3&31);
si0=f15143(i,si0,si1,si2);
si0=l2;
si1=l11;
si2=l4;
si1+=si2;
i32_store(&i->m0,(U64)si0+8U,si1);
goto L1;
L3:;
si0=1202924U;
si1=34U;
si2=1203540U;
f604(i,si0,si1,si2);
UNREACHABLE;
L2:;
si0=l3;
si1=l12;
si2=1203524U;
f593(i,si0,si1,si2);
UNREACHABLE;
L1:;
si0=l8;
si1=1U;
si0&=si1;
L0:;
return si0;
}

U32 f1059(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4,U32 l5,U32 l6) {
U32 l7=0;
U32 l8=0;
U32 l9=0;
U32 l10=0;
U32 l11=0;
U32 l12=0;
U64 l13=0;
U64 l14=0;
U64 l15=0;
U32 si0,si1,si2,si3,si4,si5;
U64 sj0,sj1,sj2,sj3,sj4;
si0=i->g0;
si1=32U;
si0-=si1;
l7=si0;
i->g0=si0;
si0=l7;
si1=l3;
i32_store(&i->m0,(U64)si0,si1);
si0=l7;
si1=l5;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l3;
si1=l5;
si0=si0 != si1;
if(si0){
goto L3;
}
si0=l3;
si1=l1;
si0=si0 > si1;
if(si0){
goto L7;
}
si0=l3;
si0=!(si0);
if(si0){
goto L4;
}
si0=l3;
si1=1U;
si0&=si1;
l8=si0;
si0=l3;
si1=1U;
si0=si0 != si1;
if(si0){
goto L6;
}
si0=0U;
l9=si0;
si0=0U;
l10=si0;
goto L5;
L7:;
si0=1202809U;
si1=34U;
si2=1203412U;
f604(i,si0,si1,si2);
UNREACHABLE;
L6:;
si0=l3;
si1=-2U;
si0&=si1;
l11=si0;
si0=0U;
l9=si0;
si0=l2;
l5=si0;
si0=l4;
l1=si0;
si0=l0;
l12=si0;
si0=0U;
l10=si0;
L8:;
{
si0=l12;
si1=l5;
sj1=i64_load(&i->m0,(U64)si1);
l13=sj1;
si2=l9;
sj2=(U64)(si2);
sj3=1ULL;
sj2&=sj3;
sj1-=sj2;
si2=l1;
sj2=i64_load(&i->m0,(U64)si2);
l14=sj2;
sj1-=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l12;
si1=8U;
si0+=si1;
si1=l5;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
l15=sj1;
sj2=l13;
sj3=l14;
si2=sj2 <= sj3;
sj3=l13;
sj4=l14;
si3=sj3 < sj4;
si4=l9;
si5=1U;
si4&=si5;
si2=si4?si2:si3;
l9=si2;
sj2=(U64)(si2);
sj1-=sj2;
si2=l1;
si3=8U;
si2+=si3;
sj2=i64_load(&i->m0,(U64)si2);
l13=sj2;
sj1-=sj2;
i64_store(&i->m0,(U64)si0,sj1);
sj0=l15;
sj1=l13;
si0=sj0 <= sj1;
sj1=l15;
sj2=l13;
si1=sj1 < sj2;
si2=l9;
si0=si2?si0:si1;
l9=si0;
si0=l5;
si1=16U;
si0+=si1;
l5=si0;
si0=l1;
si1=16U;
si0+=si1;
l1=si0;
si0=l12;
si1=16U;
si0+=si1;
l12=si0;
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
L5:;
si0=l8;
si0=!(si0);
if(si0){
goto L9;
}
si0=l0;
si1=l10;
si2=3U;
si1<<=(si2&31);
l5=si1;
si0+=si1;
si1=l2;
si2=l5;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
l13=sj1;
si2=l9;
sj2=(U64)(si2);
sj1-=sj2;
si2=l4;
si3=l5;
si2+=si3;
sj2=i64_load(&i->m0,(U64)si2);
l14=sj2;
sj1-=sj2;
i64_store(&i->m0,(U64)si0,sj1);
sj0=l13;
sj1=l14;
si0=sj0 <= sj1;
sj1=l13;
sj2=l14;
si1=sj1 < sj2;
si2=l9;
si0=si2?si0:si1;
l9=si0;
L9:;
si0=l6;
si0=!(si0);
if(si0){
goto L1;
}
si0=l0;
si1=l0;
sj1=i64_load(&i->m0,(U64)si1);
l13=sj1;
sj2=-1ULL;
sj1+=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=0U;
l12=si0;
sj0=l13;
sj1=0ULL;
si0=sj0 != sj1;
if(si0){
goto L2;
}
si0=l0;
si1=8U;
si0+=si1;
l1=si0;
si0=l3;
si1=3U;
si0<<=(si1&31);
si1=-8U;
si0+=si1;
l5=si0;
L10:;
{
si0=l5;
si0=!(si0);
l12=si0;
si0=l5;
si0=!(si0);
if(si0){
goto L2;
}
si0=l1;
si1=l1;
sj1=i64_load(&i->m0,(U64)si1);
l13=sj1;
sj2=-1ULL;
sj1+=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=-8U;
si0+=si1;
l5=si0;
si0=l1;
si1=8U;
si0+=si1;
l1=si0;
sj0=l13;
si0=!(sj0);
if(si0){
goto L10;
}
goto L2;
}
L4:;
si0=1U;
l12=si0;
si0=0U;
l9=si0;
si0=l6;
if(si0){
goto L2;
}
goto L1;
L3:;
si0=l7;
si1=0U;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=0U;
si1=l7;
si2=l7;
si3=4U;
si2+=si3;
si3=l7;
si4=8U;
si3+=si4;
si4=1203428U;
f1250(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L2:;
si0=l9;
si1=l12;
si0|=si1;
l9=si0;
L1:;
si0=l7;
si1=32U;
si0+=si1;
i->g0=si0;
si0=l9;
si1=1U;
si0&=si1;
L0:;
return si0;
}

U32 f1060(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4) {
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 l8=0;
U32 l9=0;
U32 l10=0;
U64 l11=0;
U64 l12=0;
U32 l13=0;
U64 l14=0;
U32 si0,si1,si2,si3,si4,si5;
U64 sj0,sj1,sj2,sj3,sj4;
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
goto L7;
}
si0=l1;
si0=!(si0);
if(si0){
goto L4;
}
si0=l1;
si1=1U;
si0&=si1;
l6=si0;
si0=l1;
si1=1U;
si0=si0 != si1;
if(si0){
goto L6;
}
si0=0U;
l7=si0;
si0=0U;
l8=si0;
goto L5;
L7:;
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
si4=1203476U;
f1250(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L6:;
si0=l1;
si1=-2U;
si0&=si1;
l9=si0;
si0=0U;
l7=si0;
si0=l2;
l10=si0;
si0=l0;
l3=si0;
si0=0U;
l8=si0;
L8:;
{
si0=l3;
si1=l3;
sj1=i64_load(&i->m0,(U64)si1);
l11=sj1;
si2=l7;
sj2=(U64)(si2);
sj3=1ULL;
sj2&=sj3;
si3=l10;
sj3=i64_load(&i->m0,(U64)si3);
l12=sj3;
sj2+=sj3;
sj1-=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=8U;
si0+=si1;
l13=si0;
si1=l13;
sj1=i64_load(&i->m0,(U64)si1);
l14=sj1;
sj2=l11;
sj3=l12;
si2=sj2 <= sj3;
sj3=l11;
sj4=l12;
si3=sj3 < sj4;
si4=l7;
si5=1U;
si4&=si5;
si2=si4?si2:si3;
l7=si2;
sj2=(U64)(si2);
si3=l10;
si4=8U;
si3+=si4;
sj3=i64_load(&i->m0,(U64)si3);
l11=sj3;
sj2+=sj3;
sj1-=sj2;
i64_store(&i->m0,(U64)si0,sj1);
sj0=l14;
sj1=l11;
si0=sj0 <= sj1;
sj1=l14;
sj2=l11;
si1=sj1 < sj2;
si2=l7;
si0=si2?si0:si1;
l7=si0;
si0=l10;
si1=16U;
si0+=si1;
l10=si0;
si0=l3;
si1=16U;
si0+=si1;
l3=si0;
si0=l9;
si1=l8;
si2=2U;
si1+=si2;
l8=si1;
si0=si0 != si1;
if(si0){
goto L8;
}
}
L5:;
si0=l6;
si0=!(si0);
if(si0){
goto L9;
}
si0=l0;
si1=l8;
si2=3U;
si1<<=(si2&31);
l3=si1;
si0+=si1;
l10=si0;
si1=l10;
sj1=i64_load(&i->m0,(U64)si1);
l11=sj1;
si2=l7;
sj2=(U64)(si2);
si3=l2;
si4=l3;
si3+=si4;
sj3=i64_load(&i->m0,(U64)si3);
l12=sj3;
sj2+=sj3;
sj1-=sj2;
i64_store(&i->m0,(U64)si0,sj1);
sj0=l11;
sj1=l12;
si0=sj0 <= sj1;
sj1=l11;
sj2=l12;
si1=sj1 < sj2;
si2=l7;
si0=si2?si0:si1;
l7=si0;
L9:;
si0=l4;
si0=!(si0);
if(si0){
goto L1;
}
si0=l1;
if(si0){
goto L3;
}
si0=l7;
si1=1U;
si0|=si1;
l7=si0;
goto L1;
L4:;
si0=1U;
l8=si0;
si0=0U;
l7=si0;
si0=l4;
if(si0){
goto L2;
}
goto L1;
L3:;
si0=l0;
si1=l0;
sj1=i64_load(&i->m0,(U64)si1);
l11=sj1;
sj2=-1ULL;
sj1+=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=0U;
l8=si0;
sj0=l11;
sj1=0ULL;
si0=sj0 != sj1;
if(si0){
goto L2;
}
si0=l0;
si1=8U;
si0+=si1;
l10=si0;
si0=l1;
si1=3U;
si0<<=(si1&31);
si1=-8U;
si0+=si1;
l3=si0;
L10:;
{
si0=l3;
si0=!(si0);
l8=si0;
si0=l3;
si0=!(si0);
if(si0){
goto L2;
}
si0=l10;
si1=l10;
sj1=i64_load(&i->m0,(U64)si1);
l11=sj1;
sj2=-1ULL;
sj1+=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=-8U;
si0+=si1;
l3=si0;
si0=l10;
si1=8U;
si0+=si1;
l10=si0;
sj0=l11;
si0=!(sj0);
if(si0){
goto L10;
}
}
L2:;
si0=l7;
si1=l8;
si0|=si1;
l7=si0;
L1:;
si0=l5;
si1=32U;
si0+=si1;
i->g0=si0;
si0=l7;
si1=1U;
si0&=si1;
L0:;
return si0;
}

U64 f1061(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U64 l4) {
U32 l5=0;
U64 l6=0;
U64 l7=0;
U64 l8=0;
U32 si0,si1,si2,si3,si4;
U64 sj0,sj1,sj2,sj3,sj4;
si0=i->g0;
si1=48U;
si0-=si1;
l5=si0;
i->g0=si0;
si0=l5;
si1=l1;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l5;
si1=l3;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l1;
si1=l3;
si0=si0 != si1;
if(si0){
goto L3;
}
si0=l1;
if(si0){
goto L2;
}
sj0=0ULL;
l6=sj0;
goto L1;
L3:;
si0=l5;
si1=0U;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=0U;
si1=l5;
si2=16U;
si1+=si2;
si2=l5;
si3=20U;
si2+=si3;
si3=l5;
si4=24U;
si3+=si4;
si4=1203604U;
f1250(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L2:;
sj0=0ULL;
l6=sj0;
L4:;
{
si0=l5;
si1=l2;
sj1=i64_load(&i->m0,(U64)si1);
sj2=0ULL;
sj3=l4;
sj4=0ULL;
f15157(i,si0,sj1,sj2,sj3,sj4);
si0=l0;
si1=l0;
sj1=i64_load(&i->m0,(U64)si1);
l7=sj1;
sj2=l6;
si3=l5;
sj3=i64_load(&i->m0,(U64)si3);
sj2+=sj3;
l8=sj2;
sj1-=sj2;
i64_store(&i->m0,(U64)si0,sj1);
sj0=l8;
sj1=l6;
si0=sj0 < sj1;
sj0=(U64)(si0);
si1=l5;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
sj0+=sj1;
sj1=l7;
sj2=l8;
si1=sj1 < sj2;
sj1=(U64)(si1);
sj0+=sj1;
l6=sj0;
si0=l0;
si1=8U;
si0+=si1;
l0=si0;
si0=l2;
si1=8U;
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
L1:;
si0=l5;
si1=48U;
si0+=si1;
i->g0=si0;
sj0=l6;
L0:;
return sj0;
}

void f1062(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U64 l3) {
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U64 l8=0;
U32 si0,si1,si2,si3;
U64 sj0,sj1,sj2,sj3;
si0=i->g0;
si1=32U;
si0-=si1;
l4=si0;
i->g0=si0;
sj0=l3;
sj1=0ULL;
si0=sj0 != sj1;
if(si0){
goto L10;
}
si0=8U;
l5=si0;
si0=0U;
l6=si0;
si0=l2;
si0=!(si0);
if(si0){
goto L11;
}
si0=l2;
si1=268435455U;
si0=si0 > si1;
if(si0){
goto L9;
}
si0=l2;
si1=3U;
si0<<=(si1&31);
l7=si0;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L9;
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
l5=si0;
si0=!(si0);
if(si0){
goto L6;
}
si0=l7;
l6=si0;
L11:;
si0=l5;
si1=l1;
si2=l6;
si0=f15143(i,si0,si1,si2);
l1=si0;
si0=l0;
si1=l2;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l0;
si1=l2;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l1;
i32_store(&i->m0,(U64)si0,si1);
goto L1;
L10:;
si0=l2;
si0=!(si0);
if(si0){
goto L4;
}
si0=l2;
si1=268435455U;
si0=si0 > si1;
if(si0){
goto L9;
}
si0=l2;
si1=3U;
si0<<=(si1&31);
l6=si0;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L9;
}
si0=l1;
sj0=i64_load(&i->m0,(U64)si0);
l8=sj0;
si0=l6;
if(si0){
goto L8;
}
si0=8U;
l5=si0;
goto L7;
L9:;
f53(i);
UNREACHABLE;
L8:;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=l6;
si0=f15022(i,si0);
l5=si0;
si0=!(si0);
if(si0){
goto L5;
}
L7:;
si0=l1;
si1=8U;
si0+=si1;
l6=si0;
si0=l2;
si1=-1U;
si0+=si1;
l1=si0;
si0=l4;
si1=l2;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l4;
si1=l5;
i32_store(&i->m0,(U64)si0+4U,si1);
sj0=l8;
si0=!(sj0);
si0=!(si0);
if(si0){
goto L12;
}
si0=l5;
sj1=0ULL;
sj2=l3;
sj1-=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=1U;
l7=si0;
si0=l4;
si1=1U;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l4;
si1=16U;
si0+=si1;
si1=l6;
si2=l1;
sj3=1ULL;
f1053(i,si0,si1,si2,sj3);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+16U);
l1=si0;
si0=l2;
si1=-1U;
si0+=si1;
si1=l4;
si1=i32_load(&i->m0,(U64)si1+24U);
l2=si1;
si0=si0 >= si1;
if(si0){
goto L13;
}
si0=l4;
si1=4U;
si0+=si1;
si1=1U;
si2=l2;
f1302(i,si0,si1,si2);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+4U);
l5=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+12U);
l7=si0;
L13:;
si0=l5;
si1=l7;
si2=3U;
si1<<=(si2&31);
si0+=si1;
si1=l1;
si2=l2;
si3=3U;
si2<<=(si3&31);
si0=f15143(i,si0,si1,si2);
si0=l4;
si1=l7;
si2=l2;
si1+=si2;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+20U);
si0=!(si0);
if(si0){
goto L2;
}
si0=l1;
f15024(i,si0);
goto L2;
L12:;
sj0=0ULL;
sj1=l8;
sj0-=sj1;
sj1=l3;
sj0^=sj1;
l3=sj0;
si0=!(sj0);
if(si0){
goto L3;
}
si0=l5;
sj1=0ULL;
sj2=l3;
sj1-=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=1U;
l7=si0;
si0=l4;
si1=1U;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l2;
si1=-1U;
si0+=si1;
si1=l1;
si0=si0 >= si1;
if(si0){
goto L14;
}
si0=l4;
si1=4U;
si0+=si1;
si1=1U;
si2=l1;
f1302(i,si0,si1,si2);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+4U);
l5=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+12U);
l7=si0;
L14:;
si0=l5;
si1=l7;
si2=3U;
si1<<=(si2&31);
si0+=si1;
si1=l6;
si2=l1;
si3=3U;
si2<<=(si3&31);
si0=f15143(i,si0,si1,si2);
si0=l4;
si1=l7;
si2=l1;
si1+=si2;
i32_store(&i->m0,(U64)si0+12U,si1);
goto L2;
L6:;
si0=8U;
si1=l7;
f52(i,si0,si1);
UNREACHABLE;
L5:;
si0=8U;
si1=l6;
f52(i,si0,si1);
UNREACHABLE;
L4:;
si0=0U;
si1=0U;
si2=1203780U;
f594(i,si0,si1,si2);
UNREACHABLE;
L3:;
si0=l5;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=1U;
l7=si0;
si0=l4;
si1=1U;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l4;
si1=16U;
si0+=si1;
si1=l6;
si2=l1;
sj3=1ULL;
f1044(i,si0,si1,si2,sj3);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+16U);
l1=si0;
si0=l2;
si1=-1U;
si0+=si1;
si1=l4;
si1=i32_load(&i->m0,(U64)si1+24U);
l2=si1;
si0=si0 >= si1;
if(si0){
goto L15;
}
si0=l4;
si1=4U;
si0+=si1;
si1=1U;
si2=l2;
f1302(i,si0,si1,si2);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+4U);
l5=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+12U);
l7=si0;
L15:;
si0=l5;
si1=l7;
si2=3U;
si1<<=(si2&31);
si0+=si1;
si1=l1;
si2=l2;
si3=3U;
si2<<=(si3&31);
si0=f15143(i,si0,si1,si2);
si0=l4;
si1=l7;
si2=l2;
si1+=si2;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+20U);
si0=!(si0);
if(si0){
goto L2;
}
si0=l1;
f15024(i,si0);
L2:;
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
L1:;
si0=l4;
si1=32U;
si0+=si1;
i->g0=si0;
L0:;
}

void f1063(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U64 l3) {
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 si0,si1,si2,si3;
U64 sj0,sj1,sj2,sj3;
si0=i->g0;
si1=16U;
si0-=si1;
l4=si0;
i->g0=si0;
si0=l2;
si0=!(si0);
if(si0){
goto L5;
}
si0=l1;
sj0=i64_load(&i->m0,(U64)si0);
sj1=l3;
sj0^=sj1;
l3=sj0;
sj1=0ULL;
si0=sj0 != sj1;
if(si0){
goto L6;
}
si0=l4;
si1=4U;
si0+=si1;
si1=l1;
si2=8U;
si1+=si2;
si2=l2;
si3=-1U;
si2+=si3;
sj3=1ULL;
f1044(i,si0,si1,si2,sj3);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+12U);
l2=si0;
si1=l4;
si1=i32_load(&i->m0,(U64)si1+8U);
si0=si0 == si1;
if(si0){
goto L4;
}
goto L2;
L6:;
si0=l2;
si1=268435455U;
si0=si0 > si1;
if(si0){
goto L9;
}
si0=l2;
si1=3U;
si0<<=(si1&31);
l5=si0;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L9;
}
si0=l5;
if(si0){
goto L8;
}
si0=8U;
l6=si0;
goto L7;
L9:;
f53(i);
UNREACHABLE;
L8:;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=l5;
si0=f15022(i,si0);
l6=si0;
si0=!(si0);
if(si0){
goto L3;
}
L7:;
si0=l6;
si1=l1;
si2=l5;
si0=f15143(i,si0,si1,si2);
l1=si0;
sj1=0ULL;
sj2=l3;
sj1-=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=l2;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l4;
si1=l2;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l4;
si1=l1;
i32_store(&i->m0,(U64)si0+4U,si1);
goto L1;
L5:;
si0=1201623U;
si1=43U;
si2=1203796U;
f604(i,si0,si1,si2);
UNREACHABLE;
L4:;
si0=l4;
si1=4U;
si0+=si1;
si1=l2;
si2=1U;
f1302(i,si0,si1,si2);
goto L2;
L3:;
si0=8U;
si1=l5;
f52(i,si0,si1);
UNREACHABLE;
L2:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+4U);
l1=si0;
si0=l2;
si0=!(si0);
if(si0){
goto L10;
}
si0=l1;
si1=8U;
si0+=si1;
si1=l1;
si2=l2;
si3=3U;
si2<<=(si3&31);
si0=f15144(i,si0,si1,si2);
L10:;
si0=l1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=l2;
si2=1U;
si1+=si2;
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

void f1064(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U64 l3) {
U32 l4=0;
U64 l5=0;
U32 l6=0;
U32 l7=0;
U32 si0,si1,si2;
U64 sj0,sj1,sj2,sj3;
si0=i->g0;
si1=16U;
si0-=si1;
l4=si0;
i->g0=si0;
si0=l2;
si0=!(si0);
if(si0){
goto L2;
}
si0=l1;
sj0=i64_load(&i->m0,(U64)si0);
l5=sj0;
si0=!(sj0);
si0=!(si0);
if(si0){
goto L6;
}
si0=l4;
si1=l1;
si2=l2;
sj3=1ULL;
f1053(i,si0,si1,si2,sj3);
si0=l4;
si0=i32_load8_u(&i->m0,(U64)si0+12U);
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
si0=i32_load(&i->m0,(U64)si0+4U);
l1=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
sj1=l3;
i64_store(&i->m0,(U64)si0,sj1);
goto L5;
L6:;
si0=l2;
si1=268435455U;
si0=si0 > si1;
if(si0){
goto L9;
}
si0=l2;
si1=3U;
si0<<=(si1&31);
l7=si0;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L9;
}
si0=l7;
if(si0){
goto L8;
}
si0=8U;
l6=si0;
goto L7;
L9:;
f53(i);
UNREACHABLE;
L8:;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=l7;
si0=f15022(i,si0);
l6=si0;
si0=!(si0);
if(si0){
goto L1;
}
L7:;
si0=l6;
si1=l1;
si2=l7;
si0=f15143(i,si0,si1,si2);
sj1=0ULL;
sj2=l5;
sj1-=sj2;
sj2=l3;
sj1^=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
l1=si0;
L5:;
si0=l0;
si1=l2;
i32_store(&i->m0,(U64)si0+8U,si1);
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
L4:;
si0=1203844U;
si1=24U;
si2=1203868U;
f604(i,si0,si1,si2);
UNREACHABLE;
L3:;
si0=0U;
si1=0U;
si2=1203828U;
f594(i,si0,si1,si2);
UNREACHABLE;
L2:;
si0=0U;
si1=0U;
si2=1203812U;
f594(i,si0,si1,si2);
UNREACHABLE;
L1:;
si0=8U;
si1=l7;
f52(i,si0,si1);
UNREACHABLE;
L0:;
}

void f1065(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4) {
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
U32 l16=0;
U32 l17=0;
U32 l18=0;
U32 l19=0;
U32 l20=0;
U32 l21=0;
U64 l22=0;
U64 l23=0;
U32 si0,si1,si2,si3,si4;
U64 sj0,sj1,sj2;
si0=i->g0;
si1=16U;
si0-=si1;
l5=si0;
i->g0=si0;
si0=l2;
si1=3U;
si0<<=(si1&31);
l6=si0;
si0=l2;
si0=!(si0);
if(si0){
goto L6;
}
si0=l2;
si1=-1U;
si0+=si1;
si1=536870911U;
si0&=si1;
si1=1U;
si0+=si1;
l7=si0;
si0=0U;
l8=si0;
si0=l6;
l9=si0;
si0=l1;
l10=si0;
L8:;
{
si0=l10;
sj0=i64_load(&i->m0,(U64)si0);
sj1=0ULL;
si0=sj0 != sj1;
if(si0){
goto L7;
}
si0=l8;
si1=1U;
si0+=si1;
l8=si0;
si0=l10;
si1=8U;
si0+=si1;
l10=si0;
si0=l9;
si1=-8U;
si0+=si1;
l9=si0;
if(si0){
goto L8;
}
}
si0=l7;
l8=si0;
L7:;
si0=l4;
if(si0){
goto L5;
}
si0=l8;
si1=l2;
si0=si0 < si1;
if(si0){
goto L4;
}
goto L1;
L6:;
si0=0U;
l8=si0;
si0=l4;
si0=!(si0);
if(si0){
goto L1;
}
L5:;
si0=l1;
si1=l6;
si0+=si1;
l11=si0;
si0=l3;
si1=l4;
si2=3U;
si1<<=(si2&31);
l6=si1;
si0+=si1;
l12=si0;
si0=l4;
si1=-1U;
si0+=si1;
si1=536870911U;
si0&=si1;
si1=1U;
si0+=si1;
l7=si0;
si0=0U;
l10=si0;
si0=0U;
l9=si0;
L10:;
{
si0=l3;
si1=l10;
si0+=si1;
sj0=i64_load(&i->m0,(U64)si0);
sj1=0ULL;
si0=sj0 != sj1;
if(si0){
goto L9;
}
si0=l9;
si1=1U;
si0+=si1;
l9=si0;
si0=l6;
si1=l10;
si2=8U;
si1+=si2;
l10=si1;
si0=si0 != si1;
if(si0){
goto L10;
}
}
si0=l7;
l9=si0;
L9:;
si0=l8;
si1=l2;
si0=si0 >= si1;
if(si0){
goto L1;
}
si0=l9;
si1=l4;
si0=si0 >= si1;
if(si0){
goto L4;
}
si0=l9;
si1=l2;
si0=si0 >= si1;
if(si0){
goto L16;
}
si0=l8;
si1=l4;
si0=si0 >= si1;
if(si0){
goto L20;
}
si0=8U;
l6=si0;
si0=l8;
si1=l9;
si2=l8;
si3=l9;
si2=si2 < si3;
l7=si2;
si0=si2?si0:si1;
l10=si0;
si0=!(si0);
if(si0){
goto L21;
}
si0=l10;
si1=268435455U;
si0=si0 > si1;
if(si0){
goto L15;
}
si0=l10;
si1=3U;
si0<<=(si1&31);
l13=si0;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L15;
}
si0=l13;
si0=!(si0);
if(si0){
goto L21;
}
si0=l13;
si1=1U;
si0=f15026(i,si0,si1);
l6=si0;
si0=!(si0);
if(si0){
goto L11;
}
L21:;
si0=l5;
si1=l10;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l5;
si1=l10;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l5;
si1=l6;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=-1U;
si1=l8;
si2=l9;
si1=si1 != si2;
si2=l7;
si0=si2?si0:si1;
si1=255U;
si0&=si1;
switch(si0){
case 0:
goto L14;
case 1:
goto L19;
default:
goto L18;
}
L20:;
si0=l4;
si1=268435455U;
si0=si0 > si1;
if(si0){
goto L15;
}
si0=l4;
si1=3U;
si0<<=(si1&31);
l10=si0;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L15;
}
si0=l10;
if(si0){
goto L23;
}
si0=8U;
l9=si0;
goto L22;
L23:;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=l10;
si0=f15022(i,si0);
l9=si0;
si0=!(si0);
if(si0){
goto L12;
}
L22:;
si0=l9;
si1=l3;
si2=l10;
si0=f15143(i,si0,si1,si2);
l10=si0;
si0=l5;
si1=l4;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l5;
si1=l4;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l5;
si1=l10;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l2;
si1=l4;
si0-=si1;
l10=si0;
si0=l1;
si1=l4;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l6=si0;
si0=l2;
si1=l4;
si0=si0 == si1;
if(si0){
goto L24;
}
si0=l5;
si1=4U;
si0+=si1;
si1=l4;
si2=l10;
f1302(i,si0,si1,si2);
si0=l5;
si0=i32_load(&i->m0,(U64)si0+4U);
l9=si0;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+12U);
l4=si0;
L24:;
si0=l9;
si1=l4;
si2=3U;
si1<<=(si2&31);
si0+=si1;
si1=l6;
si2=l10;
si3=3U;
si2<<=(si3&31);
si0=f15143(i,si0,si1,si2);
si0=l0;
si1=8U;
si0+=si1;
si1=l4;
si2=l10;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l5;
sj1=i64_load(&i->m0,(U64)si1+4U);
i64_store(&i->m0,(U64)si0,sj1);
goto L2;
L19:;
si0=l7;
if(si0){
goto L25;
}
si0=l8;
si1=l9;
si0-=si1;
l7=si0;
si0=l3;
si1=l9;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l13=si0;
si0=l8;
si1=l9;
si0=si0 == si1;
if(si0){
goto L26;
}
si0=l5;
si1=4U;
si0+=si1;
si1=l10;
si2=l7;
f1302(i,si0,si1,si2);
si0=l5;
si0=i32_load(&i->m0,(U64)si0+4U);
l6=si0;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+12U);
l10=si0;
L26:;
si0=l6;
si1=l10;
si2=3U;
si1<<=(si2&31);
si0+=si1;
si1=l13;
si2=l7;
si3=3U;
si2<<=(si3&31);
si0=f15143(i,si0,si1,si2);
si0=l5;
si1=l10;
si2=l7;
si1+=si2;
l10=si1;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l3;
si1=l8;
si2=3U;
si1<<=(si2&31);
l6=si1;
si0+=si1;
sj0=i64_load(&i->m0,(U64)si0);
si1=l1;
si2=l6;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
sj0^=sj1;
l14=sj0;
goto L17;
L25:;
si0=l9;
si1=l8;
si2=1203900U;
f683(i,si0,si1,si2);
UNREACHABLE;
L18:;
si0=l1;
si1=l8;
si2=3U;
si1<<=(si2&31);
si0+=si1;
sj0=i64_load(&i->m0,(U64)si0);
l14=sj0;
si0=l5;
si1=4U;
si0+=si1;
si1=l10;
f1299(i,si0,si1);
si0=l5;
si0=i32_load(&i->m0,(U64)si0+4U);
si1=l5;
si1=i32_load(&i->m0,(U64)si1+12U);
si2=3U;
si1<<=(si2&31);
si0+=si1;
sj1=0ULL;
sj2=l14;
sj1-=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=l5;
si1=i32_load(&i->m0,(U64)si1+12U);
si2=1U;
si1+=si2;
l10=si1;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l8;
si1=1U;
si0+=si1;
l6=si0;
si0=l8;
si1=l9;
si0=si0 >= si1;
if(si0){
goto L13;
}
si0=l5;
si0=i32_load(&i->m0,(U64)si0+8U);
si1=l10;
si0-=si1;
si1=l1;
si2=l9;
si3=3U;
si2<<=(si3&31);
si1+=si2;
l15=si1;
si2=l1;
si3=l6;
si4=3U;
si3<<=(si4&31);
si2+=si3;
si1-=si2;
l13=si1;
si2=3U;
si1>>=(si2&31);
l7=si1;
si0=si0 >= si1;
if(si0){
goto L27;
}
si0=l5;
si1=4U;
si0+=si1;
si1=l10;
si2=l7;
f1302(i,si0,si1,si2);
si0=l5;
si0=i32_load(&i->m0,(U64)si0+12U);
l10=si0;
L27:;
si0=l6;
si1=l9;
si0=si0 == si1;
if(si0){
goto L28;
}
si0=l5;
si0=i32_load(&i->m0,(U64)si0+4U);
l16=si0;
si0=l7;
si1=3U;
si0&=si1;
l17=si0;
si0=l7;
si1=-1U;
si0+=si1;
si1=3U;
si0=si0 >= si1;
if(si0){
goto L30;
}
si0=0U;
l6=si0;
goto L29;
L30:;
si0=l1;
si1=l8;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l18=si0;
si0=l16;
si1=l10;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l19=si0;
si0=0U;
l6=si0;
si0=0U;
si1=l13;
si2=3U;
si1>>=(si2&31);
si2=536870908U;
si1&=si2;
si0-=si1;
l20=si0;
si0=0U;
l21=si0;
L31:;
{
si0=l19;
si1=l6;
si0+=si1;
l7=si0;
si1=l18;
si2=l6;
si1+=si2;
l13=si1;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
sj2=-1ULL;
sj1^=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l7;
si1=8U;
si0+=si1;
si1=l13;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
sj2=-1ULL;
sj1^=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l7;
si1=16U;
si0+=si1;
si1=l13;
si2=24U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
sj2=-1ULL;
sj1^=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l7;
si1=24U;
si0+=si1;
si1=l13;
si2=32U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
sj2=-1ULL;
sj1^=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l6;
si1=32U;
si0+=si1;
l6=si0;
si0=l20;
si1=l21;
si2=-4U;
si1+=si2;
l21=si1;
si0=si0 != si1;
if(si0){
goto L31;
}
}
si0=0U;
si1=l21;
si0-=si1;
l6=si0;
si0=l10;
si1=l21;
si0-=si1;
l10=si0;
L29:;
si0=l17;
si0=!(si0);
if(si0){
goto L28;
}
si0=l8;
si1=3U;
si0<<=(si1&31);
si1=l6;
si2=3U;
si1<<=(si2&31);
si0+=si1;
si1=l1;
si0+=si1;
si1=8U;
si0+=si1;
l6=si0;
si0=l10;
si1=l17;
si0+=si1;
l7=si0;
si0=l16;
si1=l10;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l10=si0;
L32:;
{
si0=l10;
si1=l6;
sj1=i64_load(&i->m0,(U64)si1);
sj2=-1ULL;
sj1^=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l6;
si1=8U;
si0+=si1;
l6=si0;
si0=l10;
si1=8U;
si0+=si1;
l10=si0;
si0=l17;
si1=-1U;
si0+=si1;
l17=si0;
if(si0){
goto L32;
}
}
si0=l7;
l10=si0;
L28:;
si0=l5;
si1=l10;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l3;
si1=l9;
si2=3U;
si1<<=(si2&31);
si0+=si1;
sj0=i64_load(&i->m0,(U64)si0);
sj1=-1ULL;
sj0+=sj1;
si1=l15;
sj1=i64_load(&i->m0,(U64)si1);
sj0^=sj1;
l14=sj0;
L17:;
si0=1U;
l17=si0;
goto L3;
L16:;
si0=8U;
l10=si0;
si0=l8;
si0=!(si0);
if(si0){
goto L34;
}
si0=l8;
si1=268435455U;
si0=si0 > si1;
if(si0){
goto L15;
}
si0=l8;
si1=3U;
si0<<=(si1&31);
l6=si0;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L15;
}
si0=l6;
si0=!(si0);
if(si0){
goto L34;
}
si0=l6;
si1=1U;
si0=f15026(i,si0,si1);
l10=si0;
si0=!(si0);
if(si0){
goto L33;
}
L34:;
si0=l5;
si1=l8;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l5;
si1=l8;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l5;
si1=l10;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l1;
si1=l8;
si2=3U;
si1<<=(si2&31);
si0+=si1;
sj0=i64_load(&i->m0,(U64)si0);
l14=sj0;
si0=l5;
si1=4U;
si0+=si1;
si1=l8;
f1299(i,si0,si1);
si0=l5;
si0=i32_load(&i->m0,(U64)si0+4U);
si1=l5;
si1=i32_load(&i->m0,(U64)si1+12U);
si2=3U;
si1<<=(si2&31);
si0+=si1;
sj1=0ULL;
sj2=l14;
sj1-=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=l5;
si1=i32_load(&i->m0,(U64)si1+12U);
si2=1U;
si1+=si2;
l6=si1;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l5;
si0=i32_load(&i->m0,(U64)si0+8U);
si1=l6;
si0-=si1;
si1=l11;
si2=l1;
si3=l8;
si4=1U;
si3+=si4;
l7=si3;
si4=3U;
si3<<=(si4&31);
si2+=si3;
si1-=si2;
l13=si1;
si2=3U;
si1>>=(si2&31);
l10=si1;
si0=si0 >= si1;
if(si0){
goto L35;
}
si0=l5;
si1=4U;
si0+=si1;
si1=l6;
si2=l10;
f1302(i,si0,si1,si2);
si0=l5;
si0=i32_load(&i->m0,(U64)si0+12U);
l6=si0;
L35:;
si0=l7;
si1=l2;
si0=si0 == si1;
if(si0){
goto L36;
}
si0=l5;
si0=i32_load(&i->m0,(U64)si0+4U);
l19=si0;
si0=l10;
si1=3U;
si0&=si1;
l11=si0;
si0=l10;
si1=-1U;
si0+=si1;
si1=3U;
si0=si0 >= si1;
if(si0){
goto L38;
}
si0=0U;
l10=si0;
goto L37;
L38:;
si0=l1;
si1=l8;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l12=si0;
si0=l19;
si1=l6;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l21=si0;
si0=0U;
l10=si0;
si0=0U;
si1=l13;
si2=3U;
si1>>=(si2&31);
si2=536870908U;
si1&=si2;
si0-=si1;
l18=si0;
si0=0U;
l17=si0;
L39:;
{
si0=l21;
si1=l10;
si0+=si1;
l7=si0;
si1=l12;
si2=l10;
si1+=si2;
l13=si1;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
sj2=-1ULL;
sj1^=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l7;
si1=8U;
si0+=si1;
si1=l13;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
sj2=-1ULL;
sj1^=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l7;
si1=16U;
si0+=si1;
si1=l13;
si2=24U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
sj2=-1ULL;
sj1^=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l7;
si1=24U;
si0+=si1;
si1=l13;
si2=32U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
sj2=-1ULL;
sj1^=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l10;
si1=32U;
si0+=si1;
l10=si0;
si0=l18;
si1=l17;
si2=-4U;
si1+=si2;
l17=si1;
si0=si0 != si1;
if(si0){
goto L39;
}
}
si0=0U;
si1=l17;
si0-=si1;
l10=si0;
si0=l6;
si1=l17;
si0-=si1;
l6=si0;
L37:;
si0=l11;
si0=!(si0);
if(si0){
goto L36;
}
si0=l8;
si1=3U;
si0<<=(si1&31);
si1=l10;
si2=3U;
si1<<=(si2&31);
si0+=si1;
si1=l1;
si0+=si1;
si1=8U;
si0+=si1;
l10=si0;
si0=l6;
si1=l11;
si0+=si1;
l8=si0;
si0=l19;
si1=l6;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l6=si0;
L40:;
{
si0=l6;
si1=l10;
sj1=i64_load(&i->m0,(U64)si1);
sj2=-1ULL;
sj1^=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l10;
si1=8U;
si0+=si1;
l10=si0;
si0=l6;
si1=8U;
si0+=si1;
l6=si0;
si0=l11;
si1=-1U;
si0+=si1;
l11=si0;
if(si0){
goto L40;
}
}
si0=l8;
l6=si0;
L36:;
si0=l5;
si1=l6;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l9;
si1=l2;
si0=si0 == si1;
if(si0){
goto L41;
}
si0=0U;
si1=l9;
si2=l2;
si1-=si2;
l8=si1;
si2=-1U;
si1+=si2;
l10=si1;
si2=l10;
si3=l8;
si2=si2 > si3;
si0=si2?si0:si1;
l10=si0;
si0=l8;
si1=1U;
si0=si0 > si1;
si1=l9;
si2=l2;
si1=si1 != si2;
si0&=si1;
sj0=(U64)(si0);
l14=sj0;
si0=l6;
si1=3U;
si0<<=(si1&31);
l8=si0;
L42:;
{
si0=l6;
si1=l5;
si1=i32_load(&i->m0,(U64)si1+8U);
si0=si0 != si1;
if(si0){
goto L43;
}
si0=l5;
si1=4U;
si0+=si1;
si1=l6;
si2=l10;
si3=1U;
si2+=si3;
f1302(i,si0,si1,si2);
L43:;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+4U);
si1=l8;
si0+=si1;
sj1=-1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=l6;
si2=1U;
si1+=si2;
l6=si1;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l10;
si1=1U;
si0=si0 > si1;
l7=si0;
si0=l8;
si1=8U;
si0+=si1;
l8=si0;
sj0=l14;
si0=!(sj0);
l13=si0;
si0=0U;
si1=l10;
si2=-1U;
si1+=si2;
l11=si1;
si2=l11;
si3=l10;
si2=si2 > si3;
si0=si2?si0:si1;
l10=si0;
sj0=l14;
sj1=0ULL;
si2=l7;
sj0=si2?sj0:sj1;
l14=sj0;
si0=l13;
si0=!(si0);
if(si0){
goto L42;
}
}
L41:;
si0=l3;
si1=l9;
si2=3U;
si1<<=(si2&31);
si0+=si1;
sj0=i64_load(&i->m0,(U64)si0);
sj1=-1ULL;
sj0+=sj1;
l14=sj0;
si0=l6;
si1=l5;
si1=i32_load(&i->m0,(U64)si1+8U);
si0=si0 != si1;
if(si0){
goto L44;
}
si0=l5;
si1=4U;
si0+=si1;
si1=l6;
f1299(i,si0,si1);
si0=l5;
si0=i32_load(&i->m0,(U64)si0+12U);
l6=si0;
L44:;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+4U);
si1=l6;
si2=3U;
si1<<=(si2&31);
si0+=si1;
sj1=l14;
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=l5;
si1=i32_load(&i->m0,(U64)si1+12U);
si2=1U;
si1+=si2;
l10=si1;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l3;
si1=l9;
si2=1U;
si1+=si2;
l9=si1;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l6=si0;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+8U);
si1=l10;
si0-=si1;
si1=l4;
si2=l9;
si1-=si2;
l9=si1;
si0=si0 >= si1;
if(si0){
goto L45;
}
si0=l5;
si1=4U;
si0+=si1;
si1=l10;
si2=l9;
f1302(i,si0,si1,si2);
si0=l5;
si0=i32_load(&i->m0,(U64)si0+12U);
l10=si0;
L45:;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+4U);
si1=l10;
si2=3U;
si1<<=(si2&31);
si0+=si1;
si1=l6;
si2=l9;
si3=3U;
si2<<=(si3&31);
si0=f15143(i,si0,si1,si2);
si0=l0;
si1=8U;
si0+=si1;
si1=l10;
si2=l9;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l5;
sj1=i64_load(&i->m0,(U64)si1+4U);
i64_store(&i->m0,(U64)si0,sj1);
goto L2;
L33:;
si0=8U;
si1=l6;
f52(i,si0,si1);
UNREACHABLE;
L15:;
f53(i);
UNREACHABLE;
L14:;
si0=l1;
si1=l8;
si2=3U;
si1<<=(si2&31);
si0+=si1;
sj0=i64_load(&i->m0,(U64)si0);
sj1=0ULL;
si2=l3;
si3=l9;
si4=3U;
si3<<=(si4&31);
si2+=si3;
sj2=i64_load(&i->m0,(U64)si2);
sj1-=sj2;
sj0^=sj1;
l14=sj0;
sj1=0ULL;
si0=sj0 != sj1;
l17=si0;
sj0=0ULL;
sj1=l14;
sj0-=sj1;
l14=sj0;
goto L3;
L13:;
si0=l6;
si1=l9;
si2=1203884U;
f683(i,si0,si1,si2);
UNREACHABLE;
L12:;
si0=8U;
si1=l10;
f52(i,si0,si1);
UNREACHABLE;
L11:;
si0=8U;
si1=l13;
f52(i,si0,si1);
UNREACHABLE;
L4:;
si0=1203948U;
si1=30U;
si2=1203980U;
f604(i,si0,si1,si2);
UNREACHABLE;
L3:;
si0=l8;
si1=l9;
si2=l8;
si3=l9;
si2=si2 > si3;
si0=si2?si0:si1;
l13=si0;
si0=l10;
si1=l5;
si1=i32_load(&i->m0,(U64)si1+8U);
si0=si0 != si1;
if(si0){
goto L46;
}
si0=l5;
si1=4U;
si0+=si1;
si1=l10;
f1299(i,si0,si1);
si0=l5;
si0=i32_load(&i->m0,(U64)si0+12U);
l10=si0;
L46:;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+4U);
si1=l10;
si2=3U;
si1<<=(si2&31);
si0+=si1;
sj1=l14;
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=l5;
si1=i32_load(&i->m0,(U64)si1+12U);
si2=1U;
si1+=si2;
l9=si1;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l13;
si1=1U;
si0+=si1;
l10=si0;
si0=l13;
si1=l2;
si0=si0 >= si1;
if(si0){
goto L49;
}
si0=l13;
si1=l4;
si0=si0 >= si1;
if(si0){
goto L48;
}
si0=l11;
si1=l1;
si2=l10;
si3=3U;
si2<<=(si3&31);
l10=si2;
si1+=si2;
l6=si1;
si0-=si1;
si1=3U;
si0>>=(si1&31);
l7=si0;
si1=l12;
si2=l3;
si3=l10;
si2+=si3;
l8=si2;
si1-=si2;
si2=3U;
si1>>=(si2&31);
l10=si1;
si2=l7;
si3=l10;
si2=si2 < si3;
si0=si2?si0:si1;
l7=si0;
si0=l17;
if(si0){
goto L51;
}
si0=0U;
l10=si0;
si0=l7;
si0=!(si0);
if(si0){
goto L50;
}
L52:;
{
si0=l6;
sj0=i64_load(&i->m0,(U64)si0);
l14=sj0;
si0=l8;
sj0=i64_load(&i->m0,(U64)si0);
l22=sj0;
si0=l10;
si1=255U;
si0&=si1;
l13=si0;
si0=!(si0);
sj0=(U64)(si0);
l23=sj0;
si0=l9;
si1=l5;
si1=i32_load(&i->m0,(U64)si1+8U);
si0=si0 != si1;
if(si0){
goto L53;
}
si0=l5;
si1=4U;
si0+=si1;
si1=l9;
f1299(i,si0,si1);
si0=l5;
si0=i32_load(&i->m0,(U64)si0+12U);
l9=si0;
L53:;
si0=l10;
sj1=l22;
sj2=l14;
sj1^=sj2;
l14=sj1;
sj2=-1ULL;
si1=sj1 != sj2;
si2=l13;
si0=si2?si0:si1;
l10=si0;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+4U);
si1=l9;
si2=3U;
si1<<=(si2&31);
si0+=si1;
sj1=l14;
sj2=l23;
sj1+=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=l5;
si1=i32_load(&i->m0,(U64)si1+12U);
si2=1U;
si1+=si2;
l9=si1;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l6;
si1=8U;
si0+=si1;
l6=si0;
si0=l8;
si1=8U;
si0+=si1;
l8=si0;
si0=l7;
si1=-1U;
si0+=si1;
l7=si0;
if(si0){
goto L52;
}
goto L50;
}
L51:;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+8U);
si1=l9;
si0-=si1;
si1=l7;
si0=si0 >= si1;
if(si0){
goto L56;
}
si0=l5;
si1=4U;
si0+=si1;
si1=l9;
si2=l7;
f1302(i,si0,si1,si2);
si0=l5;
si0=i32_load(&i->m0,(U64)si0+12U);
l9=si0;
goto L55;
L56:;
si0=l7;
si0=!(si0);
if(si0){
goto L54;
}
L55:;
si0=l7;
si1=1U;
si0&=si1;
l20=si0;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+4U);
l15=si0;
si0=l7;
si1=1U;
si0=si0 != si1;
if(si0){
goto L58;
}
si0=0U;
l10=si0;
goto L57;
L58:;
si0=0U;
l10=si0;
si0=0U;
si1=l7;
si2=536870910U;
si1&=si2;
si0-=si1;
l12=si0;
si0=l3;
si1=l13;
si2=3U;
si1<<=(si2&31);
l7=si1;
si0+=si1;
l21=si0;
si0=l1;
si1=l7;
si0+=si1;
l18=si0;
si0=l15;
si1=l9;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l19=si0;
si0=0U;
l7=si0;
L59:;
{
si0=l19;
si1=l10;
si0+=si1;
l13=si0;
si1=l21;
si2=l10;
si1+=si2;
l11=si1;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
si2=l18;
si3=l10;
si2+=si3;
l17=si2;
si3=8U;
si2+=si3;
sj2=i64_load(&i->m0,(U64)si2);
sj1^=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l13;
si1=8U;
si0+=si1;
si1=l11;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
si2=l17;
si3=16U;
si2+=si3;
sj2=i64_load(&i->m0,(U64)si2);
sj1^=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l10;
si1=16U;
si0+=si1;
l10=si0;
si0=l12;
si1=l7;
si2=-2U;
si1+=si2;
l7=si1;
si0=si0 != si1;
if(si0){
goto L59;
}
}
si0=0U;
si1=l7;
si0-=si1;
l10=si0;
si0=l9;
si1=l7;
si0-=si1;
l9=si0;
L57:;
si0=l20;
si0=!(si0);
if(si0){
goto L54;
}
si0=l15;
si1=l9;
si2=3U;
si1<<=(si2&31);
si0+=si1;
si1=l8;
si2=l10;
si3=3U;
si2<<=(si3&31);
l10=si2;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
si2=l6;
si3=l10;
si2+=si3;
sj2=i64_load(&i->m0,(U64)si2);
sj1^=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l9;
si1=1U;
si0+=si1;
l9=si0;
L54:;
si0=l5;
si1=l9;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=1U;
l10=si0;
L50:;
si0=l2;
si1=l4;
si0=si0 == si1;
if(si0){
goto L47;
}
si0=l2;
si1=l4;
si0-=si1;
si1=l4;
si2=l2;
si1-=si2;
si2=l2;
si3=l4;
si2=si2 > si3;
l6=si2;
si0=si2?si0:si1;
l8=si0;
si0=l1;
si1=l4;
si2=3U;
si1<<=(si2&31);
si0+=si1;
si1=l3;
si2=l2;
si3=3U;
si2<<=(si3&31);
si1+=si2;
si2=l6;
si0=si2?si0:si1;
l6=si0;
si0=l10;
si1=255U;
si0&=si1;
if(si0){
goto L60;
}
si0=l8;
si0=!(si0);
if(si0){
goto L47;
}
si0=l8;
si1=3U;
si0<<=(si1&31);
l8=si0;
si0=0U;
l10=si0;
L61:;
{
si0=l6;
sj0=i64_load(&i->m0,(U64)si0);
l14=sj0;
si0=l10;
si1=255U;
si0&=si1;
l3=si0;
si0=!(si0);
sj0=(U64)(si0);
l22=sj0;
si0=l9;
si1=l5;
si1=i32_load(&i->m0,(U64)si1+8U);
si0=si0 != si1;
if(si0){
goto L62;
}
si0=l5;
si1=4U;
si0+=si1;
si1=l9;
f1299(i,si0,si1);
si0=l5;
si0=i32_load(&i->m0,(U64)si0+12U);
l9=si0;
L62:;
si0=l10;
sj1=l14;
sj2=-1ULL;
si1=sj1 != sj2;
si2=l3;
si0=si2?si0:si1;
l10=si0;
si0=l6;
si1=8U;
si0+=si1;
l6=si0;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+4U);
si1=l9;
si2=3U;
si1<<=(si2&31);
si0+=si1;
sj1=l14;
sj2=l22;
sj1+=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=l5;
si1=i32_load(&i->m0,(U64)si1+12U);
si2=1U;
si1+=si2;
l9=si1;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l8;
si1=-8U;
si0+=si1;
l8=si0;
si0=!(si0);
if(si0){
goto L47;
}
goto L61;
}
L60:;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+8U);
si1=l9;
si0-=si1;
si1=l8;
si0=si0 >= si1;
if(si0){
goto L63;
}
si0=l5;
si1=4U;
si0+=si1;
si1=l9;
si2=l8;
f1302(i,si0,si1,si2);
si0=l5;
si0=i32_load(&i->m0,(U64)si0+12U);
l9=si0;
L63:;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+4U);
si1=l9;
si2=3U;
si1<<=(si2&31);
si0+=si1;
si1=l6;
si2=l8;
si3=3U;
si2<<=(si3&31);
si0=f15143(i,si0,si1,si2);
si0=l5;
si1=l9;
si2=l8;
si1+=si2;
l9=si1;
i32_store(&i->m0,(U64)si0+12U,si1);
goto L47;
L49:;
si0=l10;
si1=l2;
si2=1203932U;
f593(i,si0,si1,si2);
UNREACHABLE;
L48:;
si0=l10;
si1=l4;
si2=1203916U;
f593(i,si0,si1,si2);
UNREACHABLE;
L47:;
si0=l9;
si1=3U;
si0<<=(si1&31);
l3=si0;
si0=0U;
l10=si0;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+4U);
l8=si0;
L66:;
{
si0=l3;
si1=l10;
si0=si0 == si1;
if(si0){
goto L65;
}
si0=l8;
si1=l10;
si0+=si1;
l6=si0;
si0=l10;
si1=8U;
si0+=si1;
l10=si0;
si0=l6;
sj0=i64_load(&i->m0,(U64)si0);
si0=!(sj0);
if(si0){
goto L66;
}
goto L64;
}
L65:;
si0=l9;
si1=l5;
si1=i32_load(&i->m0,(U64)si1+8U);
si0=si0 != si1;
if(si0){
goto L67;
}
si0=l5;
si1=4U;
si0+=si1;
si1=l9;
f1299(i,si0,si1);
si0=l5;
si0=i32_load(&i->m0,(U64)si0+4U);
l8=si0;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+12U);
l9=si0;
L67:;
si0=l8;
si1=l9;
si2=3U;
si1<<=(si2&31);
si0+=si1;
sj1=1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=l5;
si1=i32_load(&i->m0,(U64)si1+12U);
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0+12U,si1);
L64:;
si0=l0;
si1=l5;
sj1=i64_load(&i->m0,(U64)si1+4U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=8U;
si0+=si1;
si1=l5;
si2=4U;
si1+=si2;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
L2:;
si0=l5;
si1=16U;
si0+=si1;
i->g0=si0;
goto L0;
L1:;
si0=1203996U;
si1=30U;
si2=1204028U;
f604(i,si0,si1,si2);
UNREACHABLE;
L0:;
}

void f1066(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4) {
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
U32 l19=0;
U32 l20=0;
U32 l21=0;
U32 l22=0;
U32 l23=0;
U32 l24=0;
U32 l25=0;
U64 l26=0;
U32 si0,si1,si2,si3,si4;
U64 sj0,sj1,sj2,sj3;
si0=i->g0;
si1=32U;
si0-=si1;
l5=si0;
i->g0=si0;
si0=l2;
si1=3U;
si0<<=(si1&31);
l6=si0;
si0=l2;
si0=!(si0);
if(si0){
goto L16;
}
si0=l2;
si1=-1U;
si0+=si1;
si1=536870911U;
si0&=si1;
si1=1U;
si0+=si1;
l7=si0;
si0=0U;
l8=si0;
si0=l6;
l9=si0;
si0=l1;
l10=si0;
L18:;
{
si0=l10;
sj0=i64_load(&i->m0,(U64)si0);
sj1=0ULL;
si0=sj0 != sj1;
if(si0){
goto L17;
}
si0=l8;
si1=1U;
si0+=si1;
l8=si0;
si0=l10;
si1=8U;
si0+=si1;
l10=si0;
si0=l9;
si1=-8U;
si0+=si1;
l9=si0;
if(si0){
goto L18;
}
}
si0=l7;
l8=si0;
L17:;
si0=l4;
if(si0){
goto L15;
}
si0=l8;
si1=l2;
si0=si0 < si1;
if(si0){
goto L14;
}
goto L1;
L16:;
si0=0U;
l8=si0;
si0=l4;
si0=!(si0);
if(si0){
goto L1;
}
L15:;
si0=l1;
si1=l6;
si0+=si1;
l11=si0;
si0=l3;
si1=l4;
si2=3U;
si1<<=(si2&31);
l6=si1;
si0+=si1;
l12=si0;
si0=l4;
si1=-1U;
si0+=si1;
si1=536870911U;
si0&=si1;
si1=1U;
si0+=si1;
l7=si0;
si0=0U;
l10=si0;
si0=0U;
l9=si0;
L20:;
{
si0=l3;
si1=l10;
si0+=si1;
sj0=i64_load(&i->m0,(U64)si0);
sj1=0ULL;
si0=sj0 != sj1;
if(si0){
goto L19;
}
si0=l9;
si1=1U;
si0+=si1;
l9=si0;
si0=l6;
si1=l10;
si2=8U;
si1+=si2;
l10=si1;
si0=si0 != si1;
if(si0){
goto L20;
}
}
si0=l7;
l9=si0;
L19:;
si0=l8;
si1=l2;
si0=si0 >= si1;
if(si0){
goto L1;
}
si0=l9;
si1=l4;
si0=si0 >= si1;
if(si0){
goto L14;
}
si0=l9;
si1=l2;
si0=si0 >= si1;
if(si0){
goto L21;
}
si0=l8;
si1=l4;
si0=si0 >= si1;
if(si0){
goto L22;
}
si0=8U;
l10=si0;
si0=l8;
si1=l9;
si2=l8;
si3=l9;
si2=si2 < si3;
si0=si2?si0:si1;
l13=si0;
si0=!(si0);
if(si0){
goto L23;
}
si0=l13;
si1=268435455U;
si0=si0 > si1;
if(si0){
goto L13;
}
si0=l13;
si1=3U;
si0<<=(si1&31);
l6=si0;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L13;
}
si0=l6;
si0=!(si0);
if(si0){
goto L23;
}
si0=l6;
si1=1U;
si0=f15026(i,si0,si1);
l10=si0;
si0=!(si0);
if(si0){
goto L12;
}
L23:;
si0=l8;
si1=l9;
si2=l8;
si3=l9;
si2=si2 > si3;
l14=si2;
si0=si2?si0:si1;
l7=si0;
si0=l5;
si1=l13;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l5;
si1=l13;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l5;
si1=l10;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l8;
si1=l9;
si0=si0 == si1;
if(si0){
goto L6;
}
si0=l13;
si1=l4;
si2=l2;
si3=l14;
si1=si3?si1:si2;
l15=si1;
si0=si0 >= si1;
if(si0){
goto L9;
}
si0=l3;
si1=l1;
si2=l14;
si0=si2?si0:si1;
l16=si0;
si1=l13;
si2=3U;
si1<<=(si2&31);
si0+=si1;
sj0=i64_load(&i->m0,(U64)si0);
l17=sj0;
si0=l5;
si1=16U;
si0+=si1;
si1=l13;
f1299(i,si0,si1);
si0=l5;
si0=i32_load(&i->m0,(U64)si0+16U);
si1=l5;
si1=i32_load(&i->m0,(U64)si1+24U);
si2=3U;
si1<<=(si2&31);
si0+=si1;
sj1=0ULL;
sj2=l17;
sj1-=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=l5;
si1=i32_load(&i->m0,(U64)si1+24U);
si2=1U;
si1+=si2;
l18=si1;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l13;
si1=1U;
si0+=si1;
l10=si0;
si0=l13;
si1=l7;
si0=si0 >= si1;
if(si0){
goto L11;
}
si0=l7;
si1=l15;
si0=si0 > si1;
if(si0){
goto L10;
}
si0=l5;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=l18;
si0-=si1;
si1=l16;
si2=l7;
si3=3U;
si2<<=(si3&31);
si1+=si2;
l19=si1;
si2=l16;
si3=l10;
si4=3U;
si3<<=(si4&31);
si2+=si3;
si1-=si2;
l8=si1;
si2=3U;
si1>>=(si2&31);
l9=si1;
si0=si0 >= si1;
if(si0){
goto L24;
}
si0=l5;
si1=16U;
si0+=si1;
si1=l18;
si2=l9;
f1302(i,si0,si1,si2);
si0=l5;
si0=i32_load(&i->m0,(U64)si0+24U);
l18=si0;
L24:;
si0=l2;
si1=l4;
si2=l14;
si0=si2?si0:si1;
l20=si0;
si0=l10;
si1=l7;
si0=si0 == si1;
if(si0){
goto L25;
}
si0=l5;
si0=i32_load(&i->m0,(U64)si0+16U);
l21=si0;
si0=l9;
si1=3U;
si0&=si1;
l22=si0;
si0=l9;
si1=-1U;
si0+=si1;
si1=3U;
si0=si0 >= si1;
if(si0){
goto L27;
}
si0=0U;
l10=si0;
goto L26;
L27:;
si0=l16;
si1=l13;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l23=si0;
si0=l21;
si1=l18;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l24=si0;
si0=0U;
l10=si0;
si0=0U;
si1=l8;
si2=3U;
si1>>=(si2&31);
si2=536870908U;
si1&=si2;
si0-=si1;
l25=si0;
si0=0U;
l6=si0;
L28:;
{
si0=l24;
si1=l10;
si0+=si1;
l9=si0;
si1=l23;
si2=l10;
si1+=si2;
l8=si1;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
sj2=-1ULL;
sj1^=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l9;
si1=8U;
si0+=si1;
si1=l8;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
sj2=-1ULL;
sj1^=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l9;
si1=16U;
si0+=si1;
si1=l8;
si2=24U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
sj2=-1ULL;
sj1^=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l9;
si1=24U;
si0+=si1;
si1=l8;
si2=32U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
sj2=-1ULL;
sj1^=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l10;
si1=32U;
si0+=si1;
l10=si0;
si0=l25;
si1=l6;
si2=-4U;
si1+=si2;
l6=si1;
si0=si0 != si1;
if(si0){
goto L28;
}
}
si0=0U;
si1=l6;
si0-=si1;
l10=si0;
si0=l18;
si1=l6;
si0-=si1;
l18=si0;
L26:;
si0=l22;
si0=!(si0);
if(si0){
goto L25;
}
si0=l10;
si1=3U;
si0<<=(si1&31);
si1=l13;
si2=3U;
si1<<=(si2&31);
si0+=si1;
si1=l16;
si0+=si1;
si1=8U;
si0+=si1;
l10=si0;
si0=l18;
si1=l22;
si0+=si1;
l6=si0;
si0=l22;
si1=3U;
si0<<=(si1&31);
l8=si0;
si0=l21;
si1=l18;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l9=si0;
L29:;
{
si0=l9;
si1=l10;
sj1=i64_load(&i->m0,(U64)si1);
sj2=-1ULL;
sj1^=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l10;
si1=8U;
si0+=si1;
l10=si0;
si0=l9;
si1=8U;
si0+=si1;
l9=si0;
si0=l8;
si1=-8U;
si0+=si1;
l8=si0;
if(si0){
goto L29;
}
}
si0=l6;
l18=si0;
L25:;
si0=l5;
si1=l18;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l7;
si1=l20;
si0=si0 >= si1;
if(si0){
goto L8;
}
si0=l7;
si1=l15;
si0=si0 >= si1;
if(si0){
goto L7;
}
si0=l1;
si1=l3;
si2=l14;
si0=si2?si0:si1;
si1=l7;
si2=3U;
si1<<=(si2&31);
si0+=si1;
sj0=i64_load(&i->m0,(U64)si0);
sj1=-1ULL;
sj0+=sj1;
si1=l19;
sj1=i64_load(&i->m0,(U64)si1);
sj0^=sj1;
l17=sj0;
si0=l18;
si1=l5;
si1=i32_load(&i->m0,(U64)si1+20U);
si0=si0 != si1;
if(si0){
goto L30;
}
si0=l5;
si1=16U;
si0+=si1;
si1=l18;
f1299(i,si0,si1);
si0=l5;
si0=i32_load(&i->m0,(U64)si0+24U);
l18=si0;
L30:;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+16U);
si1=l18;
si2=3U;
si1<<=(si2&31);
si0+=si1;
sj1=l17;
i64_store(&i->m0,(U64)si0,sj1);
goto L3;
L22:;
si0=l5;
si1=16U;
si0+=si1;
si1=l1;
si2=l2;
si3=l3;
si4=l4;
f1054(i,si0,si1,si2,si3,si4);
si0=l5;
si1=8U;
si0+=si1;
l10=si0;
si1=l5;
si2=16U;
si1+=si2;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=l5;
sj1=i64_load(&i->m0,(U64)si1+16U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si0=i32_load8_u(&i->m0,(U64)si0+28U);
si0=!(si0);
if(si0){
goto L4;
}
si0=1204172U;
si1=25U;
si2=1204200U;
f604(i,si0,si1,si2);
UNREACHABLE;
L21:;
si0=l5;
si1=16U;
si0+=si1;
si1=l3;
si2=l4;
si3=l1;
si4=l2;
f1054(i,si0,si1,si2,si3,si4);
si0=l5;
si1=8U;
si0+=si1;
l10=si0;
si1=l5;
si2=16U;
si1+=si2;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=l5;
sj1=i64_load(&i->m0,(U64)si1+16U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si0=i32_load8_u(&i->m0,(U64)si0+28U);
si0=!(si0);
if(si0){
goto L5;
}
si0=1204172U;
si1=25U;
si2=1204216U;
f604(i,si0,si1,si2);
UNREACHABLE;
L14:;
si0=1203948U;
si1=30U;
si2=1204232U;
f604(i,si0,si1,si2);
UNREACHABLE;
L13:;
f53(i);
UNREACHABLE;
L12:;
si0=8U;
si1=l6;
f52(i,si0,si1);
UNREACHABLE;
L11:;
si0=l10;
si1=l7;
si2=1204060U;
f683(i,si0,si1,si2);
UNREACHABLE;
L10:;
si0=l7;
si1=l15;
si2=1204060U;
f597(i,si0,si1,si2);
UNREACHABLE;
L9:;
si0=l13;
si1=l15;
si2=1204044U;
f594(i,si0,si1,si2);
UNREACHABLE;
L8:;
si0=l7;
si1=l20;
si2=1204076U;
f594(i,si0,si1,si2);
UNREACHABLE;
L7:;
si0=l7;
si1=l15;
si2=1204092U;
f594(i,si0,si1,si2);
UNREACHABLE;
L6:;
si0=l3;
si1=l8;
si2=3U;
si1<<=(si2&31);
l10=si1;
si0+=si1;
sj0=i64_load(&i->m0,(U64)si0);
l17=sj0;
si0=l1;
si1=l10;
si0+=si1;
sj0=i64_load(&i->m0,(U64)si0);
l26=sj0;
si0=l5;
si1=16U;
si0+=si1;
si1=l13;
f1299(i,si0,si1);
si0=l5;
si0=i32_load(&i->m0,(U64)si0+16U);
si1=l5;
si1=i32_load(&i->m0,(U64)si1+24U);
si2=3U;
si1<<=(si2&31);
si0+=si1;
sj1=0ULL;
sj2=l17;
sj1-=sj2;
sj2=0ULL;
sj3=l26;
sj2-=sj3;
sj1^=sj2;
i64_store(&i->m0,(U64)si0,sj1);
goto L3;
L5:;
si0=l0;
si1=l5;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=8U;
si0+=si1;
si1=l10;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
goto L2;
L4:;
si0=l0;
si1=l5;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=8U;
si0+=si1;
si1=l10;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
goto L2;
L3:;
si0=l5;
si1=l5;
si1=i32_load(&i->m0,(U64)si1+24U);
si2=1U;
si1+=si2;
l24=si1;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l7;
si1=1U;
si0+=si1;
l10=si0;
si0=l7;
si1=l2;
si0=si0 >= si1;
if(si0){
goto L34;
}
si0=l7;
si1=l4;
si0=si0 >= si1;
if(si0){
goto L33;
}
si0=l5;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=l24;
si0-=si1;
si1=l11;
si2=l1;
si3=l10;
si4=3U;
si3<<=(si4&31);
l10=si3;
si2+=si3;
l25=si2;
si1-=si2;
si2=3U;
si1>>=(si2&31);
l9=si1;
si2=l12;
si3=l3;
si4=l10;
si3+=si4;
l18=si3;
si2-=si3;
si3=3U;
si2>>=(si3&31);
l10=si2;
si3=l9;
si4=l10;
si3=si3 < si4;
si1=si3?si1:si2;
l9=si1;
si0=si0 >= si1;
if(si0){
goto L37;
}
si0=l5;
si1=16U;
si0+=si1;
si1=l24;
si2=l9;
f1302(i,si0,si1,si2);
si0=l5;
si0=i32_load(&i->m0,(U64)si0+24U);
l24=si0;
goto L36;
L37:;
si0=l9;
si0=!(si0);
if(si0){
goto L35;
}
L36:;
si0=l9;
si1=1U;
si0&=si1;
l14=si0;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+16U);
l16=si0;
si0=l9;
si1=1U;
si0=si0 != si1;
if(si0){
goto L39;
}
si0=0U;
l10=si0;
goto L38;
L39:;
si0=0U;
l10=si0;
si0=0U;
si1=l9;
si2=536870910U;
si1&=si2;
si0-=si1;
l13=si0;
si0=l3;
si1=l7;
si2=3U;
si1<<=(si2&31);
l9=si1;
si0+=si1;
l11=si0;
si0=l1;
si1=l9;
si0+=si1;
l12=si0;
si0=l16;
si1=l24;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l23=si0;
si0=0U;
l9=si0;
L40:;
{
si0=l23;
si1=l10;
si0+=si1;
l8=si0;
si1=l11;
si2=l10;
si1+=si2;
l6=si1;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
si2=l12;
si3=l10;
si2+=si3;
l7=si2;
si3=8U;
si2+=si3;
sj2=i64_load(&i->m0,(U64)si2);
sj1^=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l8;
si1=8U;
si0+=si1;
si1=l6;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
si2=l7;
si3=16U;
si2+=si3;
sj2=i64_load(&i->m0,(U64)si2);
sj1^=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l10;
si1=16U;
si0+=si1;
l10=si0;
si0=l13;
si1=l9;
si2=-2U;
si1+=si2;
l9=si1;
si0=si0 != si1;
if(si0){
goto L40;
}
}
si0=0U;
si1=l9;
si0-=si1;
l10=si0;
si0=l24;
si1=l9;
si0-=si1;
l24=si0;
L38:;
si0=l14;
si0=!(si0);
if(si0){
goto L35;
}
si0=l16;
si1=l24;
si2=3U;
si1<<=(si2&31);
si0+=si1;
si1=l18;
si2=l10;
si3=3U;
si2<<=(si3&31);
l10=si2;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
si2=l25;
si3=l10;
si2+=si3;
sj2=i64_load(&i->m0,(U64)si2);
sj1^=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l24;
si1=1U;
si0+=si1;
l24=si0;
L35:;
si0=l5;
si1=l24;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=-1U;
si1=l2;
si2=l4;
si1=si1 != si2;
si2=l2;
si3=l4;
si2=si2 < si3;
l9=si2;
si0=si2?si0:si1;
l10=si0;
si1=1U;
si0=si0 == si1;
if(si0){
goto L41;
}
si0=l10;
si1=255U;
si0&=si1;
si1=255U;
si0=si0 != si1;
if(si0){
goto L31;
}
si0=l2;
si1=l4;
si0=si0 > si1;
if(si0){
goto L42;
}
si0=l3;
si1=l2;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l9=si0;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=l24;
si0-=si1;
si1=l4;
si2=l2;
si1-=si2;
l10=si1;
si0=si0 >= si1;
if(si0){
goto L43;
}
si0=l5;
si1=16U;
si0+=si1;
si1=l24;
si2=l10;
f1302(i,si0,si1,si2);
si0=l5;
si0=i32_load(&i->m0,(U64)si0+24U);
l24=si0;
L43:;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+16U);
si1=l24;
si2=3U;
si1<<=(si2&31);
si0+=si1;
si1=l9;
si2=l10;
si3=3U;
si2<<=(si3&31);
si0=f15143(i,si0,si1,si2);
si0=l24;
si1=l10;
si0+=si1;
l10=si0;
goto L32;
L42:;
si0=l2;
si1=l4;
si2=1204108U;
f593(i,si0,si1,si2);
UNREACHABLE;
L41:;
si0=l9;
if(si0){
goto L44;
}
si0=l1;
si1=l4;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l9=si0;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=l24;
si0-=si1;
si1=l2;
si2=l4;
si1-=si2;
l10=si1;
si0=si0 >= si1;
if(si0){
goto L45;
}
si0=l5;
si1=16U;
si0+=si1;
si1=l24;
si2=l10;
f1302(i,si0,si1,si2);
si0=l5;
si0=i32_load(&i->m0,(U64)si0+24U);
l24=si0;
L45:;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+16U);
si1=l24;
si2=3U;
si1<<=(si2&31);
si0+=si1;
si1=l9;
si2=l10;
si3=3U;
si2<<=(si3&31);
si0=f15143(i,si0,si1,si2);
si0=l24;
si1=l10;
si0+=si1;
l10=si0;
goto L32;
L44:;
si0=l4;
si1=l2;
si2=1204124U;
f593(i,si0,si1,si2);
UNREACHABLE;
L34:;
si0=l10;
si1=l2;
si2=1204156U;
f593(i,si0,si1,si2);
UNREACHABLE;
L33:;
si0=l10;
si1=l4;
si2=1204140U;
f593(i,si0,si1,si2);
UNREACHABLE;
L32:;
si0=l5;
si1=l10;
i32_store(&i->m0,(U64)si0+24U,si1);
L31:;
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
L2:;
si0=l5;
si1=32U;
si0+=si1;
i->g0=si0;
goto L0;
L1:;
si0=1203996U;
si1=30U;
si2=1204248U;
f604(i,si0,si1,si2);
UNREACHABLE;
L0:;
}

void f1067(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 l8=0;
U64 l9=0;
U64 l10=0;
U32 si0,si1,si2,si3,si4;
U64 sj0,sj1,sj2;
si0=i->g0;
si1=16U;
si0-=si1;
l3=si0;
i->g0=si0;
si0=l2;
si1=65U;
si0=si0 < si1;
if(si0){
goto L5;
}
si0=l2;
sj1=6ULL;
si2=3U;
si0=f1012(i,si0,sj1,si2);
l4=si0;
si0=!(si0);
if(si0){
goto L1;
}
si0=l4;
si1=268435455U;
si0=si0 > si1;
if(si0){
goto L8;
}
si0=l4;
si1=3U;
si0<<=(si1&31);
l5=si0;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L8;
}
si0=l5;
if(si0){
goto L7;
}
si0=8U;
l6=si0;
goto L6;
L8:;
f53(i);
UNREACHABLE;
L7:;
si0=l5;
si1=1U;
si0=f15026(i,si0,si1);
l6=si0;
si0=!(si0);
if(si0){
goto L4;
}
L6:;
si0=l4;
si1=-1U;
si0+=si1;
l5=si0;
si1=l4;
si2=l2;
si3=63U;
si2&=si3;
l7=si2;
si0=si2?si0:si1;
l8=si0;
si0=l6;
si1=l5;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l5=si0;
si0=l7;
sj0=(U64)(si0);
l9=sj0;
L9:;
{
si0=l1;
si0=i32_load8_u(&i->m0,(U64)si0);
l7=si0;
sj0=l9;
sj1=0ULL;
si0=sj0 != sj1;
if(si0){
goto L14;
}
si0=l8;
si1=-1U;
si0+=si1;
l8=si0;
si1=l4;
si0=si0 >= si1;
if(si0){
goto L13;
}
si0=l6;
si1=l8;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l5=si0;
sj0=64ULL;
l9=sj0;
L14:;
si0=l5;
si1=l5;
sj1=i64_load(&i->m0,(U64)si1);
sj2=1ULL;
sj1<<=(sj2&63);
l10=sj1;
i64_store(&i->m0,(U64)si0,sj1);
si0=l7;
si1=-48U;
si0+=si1;
switch(si0){
case 0:
goto L10;
case 1:
goto L11;
default:
goto L12;
}
L13:;
si0=l8;
si1=l4;
si2=1204940U;
f594(i,si0,si1,si2);
UNREACHABLE;
L12:;
si0=l0;
si1=2U;
i32_store(&i->m0,(U64)si0,si1);
si0=l6;
f15024(i,si0);
goto L2;
L11:;
si0=l5;
sj1=l10;
sj2=1ULL;
sj1|=sj2;
i64_store(&i->m0,(U64)si0,sj1);
L10:;
si0=l1;
si1=1U;
si0+=si1;
l1=si0;
sj0=l9;
sj1=-1ULL;
sj0+=sj1;
l9=sj0;
si0=l2;
si1=-1U;
si0+=si1;
l2=si0;
si0=!(si0);
if(si0){
goto L3;
}
goto L9;
}
L5:;
si0=l3;
si1=l1;
si2=l2;
si3=2U;
f617(i,si0,si1,si2,si3);
si0=l3;
si0=i32_load8_u(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L15;
}
si0=l0;
si1=2U;
i32_store(&i->m0,(U64)si0,si1);
goto L2;
L15:;
si0=l0;
si1=l3;
sj1=i64_load(&i->m0,(U64)si1+8U);
i64_store(&i->m0,(U64)si0+8U,sj1);
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
goto L2;
L4:;
si0=8U;
si1=l5;
f52(i,si0,si1);
UNREACHABLE;
L3:;
si0=l4;
si1=3U;
si0<<=(si1&31);
l1=si0;
si0=-1U;
l5=si0;
L19:;
{
si0=l1;
si0=!(si0);
if(si0){
goto L18;
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
goto L19;
}
}
si0=l4;
si1=l5;
si0-=si1;
l1=si0;
switch(si0){
case 0:
goto L18;
case 1:
goto L17;
default:
goto L16;
}
L18:;
si0=l0;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=8U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l6;
f15024(i,si0);
goto L2;
L17:;
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l6;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+8U,sj1);
si0=l6;
f15024(i,si0);
goto L2;
L16:;
si0=l0;
si1=l4;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l0;
si1=l6;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=1U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l4;
si2=l1;
si3=l4;
si4=l1;
si3=si3 < si4;
si1=si3?si1:si2;
i32_store(&i->m0,(U64)si0+12U,si1);
L2:;
si0=l3;
si1=16U;
si0+=si1;
i->g0=si0;
goto L0;
L1:;
si0=1204475U;
si1=43U;
si2=1204924U;
f604(i,si0,si1,si2);
UNREACHABLE;
L0:;
}

void f1068(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U64 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 l8=0;
U32 l9=0;
U32 l10=0;
U64 l11=0;
U32 si0,si1,si2,si3,si4;
U64 sj0,sj1,sj2,sj3;
si0=i->g0;
si1=16U;
si0-=si1;
l3=si0;
i->g0=si0;
si0=l2;
si1=22U;
si0=si0 < si1;
if(si0){
goto L4;
}
si0=l2;
sj0=(U64)(si0);
sj1=3ULL;
sj0*=sj1;
l4=sj0;
sj1=32ULL;
sj0>>=(sj1&63);
si0=(U32)(sj0);
if(si0){
goto L5;
}
sj0=l4;
si0=(U32)(sj0);
l5=si0;
sj1=6ULL;
si2=3U;
si0=f1012(i,si0,sj1,si2);
l6=si0;
si0=!(si0);
if(si0){
goto L1;
}
si0=l6;
si1=268435455U;
si0=si0 > si1;
if(si0){
goto L9;
}
si0=l6;
si1=3U;
si0<<=(si1&31);
l7=si0;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L9;
}
si0=l7;
if(si0){
goto L8;
}
si0=8U;
l8=si0;
goto L7;
L9:;
f53(i);
UNREACHABLE;
L8:;
si0=l7;
si1=1U;
si0=f15026(i,si0,si1);
l8=si0;
si0=!(si0);
if(si0){
goto L6;
}
L7:;
si0=l6;
si1=-1U;
si0+=si1;
l7=si0;
si1=l6;
si2=l5;
si3=63U;
si2&=si3;
l9=si2;
si0=si2?si0:si1;
l5=si0;
si0=l8;
si1=l7;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l10=si0;
si0=l9;
sj0=(U64)(si0);
l4=sj0;
L10:;
{
si0=l1;
si0=i32_load8_u(&i->m0,(U64)si0);
l9=si0;
si1=-48U;
si0+=si1;
l7=si0;
si1=255U;
si0&=si1;
si1=10U;
si0=si0 < si1;
if(si0){
goto L19;
}
si0=l9;
si1=-97U;
si0+=si1;
si1=255U;
si0&=si1;
si1=25U;
si0=si0 > si1;
if(si0){
goto L20;
}
si0=l9;
si1=-87U;
si0+=si1;
l7=si0;
goto L19;
L20:;
si0=l9;
si1=-91U;
si0+=si1;
si1=255U;
si0&=si1;
si1=230U;
si0=si0 < si1;
if(si0){
goto L18;
}
si0=l9;
si1=-55U;
si0+=si1;
l7=si0;
L19:;
si0=l7;
sj0=(U64)(si0);
sj1=255ULL;
sj0&=sj1;
l11=sj0;
sj0=l4;
sj1=2ULL;
si0=sj0 > sj1;
if(si0){
goto L16;
}
sj0=l4;
si0=(U32)(sj0);
switch(si0){
case 0:
goto L17;
case 1:
goto L15;
case 2:
goto L14;
default:
goto L17;
}
L18:;
si0=l0;
si1=2U;
i32_store(&i->m0,(U64)si0,si1);
si0=l8;
f15024(i,si0);
goto L2;
L17:;
si0=l5;
si1=-1U;
si0+=si1;
l5=si0;
si1=l6;
si0=si0 < si1;
if(si0){
goto L12;
}
si0=l5;
si1=l6;
si2=1204988U;
f594(i,si0,si1,si2);
UNREACHABLE;
L16:;
si0=l10;
si1=l10;
sj1=i64_load(&i->m0,(U64)si1);
sj2=3ULL;
sj1<<=(sj2&63);
sj2=l11;
sj1|=sj2;
i64_store(&i->m0,(U64)si0,sj1);
sj0=l4;
sj1=-3ULL;
sj0+=sj1;
l4=sj0;
goto L11;
L15:;
si0=l10;
si1=l10;
sj1=i64_load(&i->m0,(U64)si1);
sj2=1ULL;
sj1<<=(sj2&63);
sj2=l11;
sj3=2ULL;
sj2>>=(sj3&63);
sj1|=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=-1U;
si0+=si1;
l5=si0;
si1=l6;
si0=si0 < si1;
if(si0){
goto L13;
}
si0=l5;
si1=l6;
si2=1205004U;
f594(i,si0,si1,si2);
UNREACHABLE;
L14:;
si0=l10;
si1=l10;
sj1=i64_load(&i->m0,(U64)si1);
sj2=2ULL;
sj1<<=(sj2&63);
sj2=l11;
sj3=1ULL;
sj2>>=(sj3&63);
sj1|=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=-1U;
si0+=si1;
l5=si0;
si1=l6;
si0=si0 < si1;
if(si0){
goto L21;
}
si0=l5;
si1=l6;
si2=1205020U;
f594(i,si0,si1,si2);
UNREACHABLE;
L21:;
si0=l8;
si1=l5;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l10=si0;
sj1=l11;
sj2=1ULL;
sj1&=sj2;
i64_store(&i->m0,(U64)si0,sj1);
sj0=63ULL;
l4=sj0;
goto L11;
L13:;
si0=l8;
si1=l5;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l10=si0;
sj1=l11;
sj2=3ULL;
sj1&=sj2;
i64_store(&i->m0,(U64)si0,sj1);
sj0=62ULL;
l4=sj0;
goto L11;
L12:;
si0=l8;
si1=l5;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l10=si0;
sj1=l11;
i64_store(&i->m0,(U64)si0,sj1);
sj0=61ULL;
l4=sj0;
L11:;
si0=l1;
si1=1U;
si0+=si1;
l1=si0;
si0=l2;
si1=-1U;
si0+=si1;
l2=si0;
si0=!(si0);
if(si0){
goto L3;
}
goto L10;
}
L6:;
si0=8U;
si1=l7;
f52(i,si0,si1);
UNREACHABLE;
L5:;
si0=1204475U;
si1=43U;
si2=1204956U;
f604(i,si0,si1,si2);
UNREACHABLE;
L4:;
si0=l3;
si1=l1;
si2=l2;
si3=8U;
f617(i,si0,si1,si2,si3);
si0=l3;
si0=i32_load8_u(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L22;
}
si0=l0;
si1=2U;
i32_store(&i->m0,(U64)si0,si1);
goto L2;
L22:;
si0=l0;
si1=l3;
sj1=i64_load(&i->m0,(U64)si1+8U);
i64_store(&i->m0,(U64)si0+8U,sj1);
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
goto L2;
L3:;
si0=l6;
si1=3U;
si0<<=(si1&31);
l1=si0;
si0=-1U;
l7=si0;
L26:;
{
si0=l1;
si0=!(si0);
if(si0){
goto L25;
}
si0=l7;
si1=1U;
si0+=si1;
l7=si0;
si0=l1;
si1=-8U;
si0+=si1;
l1=si0;
si1=l8;
si0+=si1;
sj0=i64_load(&i->m0,(U64)si0);
si0=!(sj0);
if(si0){
goto L26;
}
}
si0=l6;
si1=l7;
si0-=si1;
l1=si0;
switch(si0){
case 0:
goto L25;
case 1:
goto L24;
default:
goto L23;
}
L25:;
si0=l0;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=8U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l8;
f15024(i,si0);
goto L2;
L24:;
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l8;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+8U,sj1);
si0=l8;
f15024(i,si0);
goto L2;
L23:;
si0=l0;
si1=l6;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l0;
si1=l8;
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
L2:;
si0=l3;
si1=16U;
si0+=si1;
i->g0=si0;
goto L0;
L1:;
si0=1204475U;
si1=43U;
si2=1204972U;
f604(i,si0,si1,si2);
UNREACHABLE;
L0:;
}

void f1069(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 l8=0;
U64 l9=0;
U64 l10=0;
U32 l11=0;
U32 si0,si1,si2,si3,si4;
U64 sj0,sj1,sj2,sj3;
si0=i->g0;
si1=16U;
si0-=si1;
l3=si0;
i->g0=si0;
si0=l2;
si1=17U;
si0=si0 < si1;
if(si0){
goto L3;
}
si0=l2;
sj1=4ULL;
si2=3U;
si0=f1012(i,si0,sj1,si2);
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
si0=l5;
if(si0){
goto L5;
}
si0=8U;
l6=si0;
goto L2;
L6:;
f53(i);
UNREACHABLE;
L5:;
si0=l5;
si1=1U;
si0=f15026(i,si0,si1);
l6=si0;
if(si0){
goto L2;
}
si0=8U;
si1=l5;
f52(i,si0,si1);
UNREACHABLE;
L4:;
si0=1204475U;
si1=43U;
si2=1205036U;
f604(i,si0,si1,si2);
UNREACHABLE;
L3:;
si0=l3;
si1=l1;
si2=l2;
si3=16U;
f617(i,si0,si1,si2,si3);
si0=l3;
si0=i32_load8_u(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L7;
}
si0=l0;
si1=2U;
i32_store(&i->m0,(U64)si0,si1);
goto L1;
L7:;
si0=l0;
si1=l3;
sj1=i64_load(&i->m0,(U64)si1+8U);
i64_store(&i->m0,(U64)si0+8U,sj1);
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
goto L1;
L2:;
si0=l4;
si1=-1U;
si0+=si1;
l5=si0;
si1=l4;
si2=l2;
si3=15U;
si2&=si3;
l7=si2;
si0=si2?si0:si1;
l8=si0;
si0=l6;
si1=l5;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l5=si0;
si0=l7;
si1=2U;
si0<<=(si1&31);
sj0=(U64)(si0);
l9=sj0;
L11:;
{
si0=l1;
si0=i32_load8_u(&i->m0,(U64)si0);
l7=si0;
sj0=l9;
sj1=0ULL;
si0=sj0 != sj1;
if(si0){
goto L12;
}
si0=l8;
si1=-1U;
si0+=si1;
l8=si0;
si1=l4;
si0=si0 >= si1;
if(si0){
goto L10;
}
si0=l6;
si1=l8;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l5=si0;
sj0=64ULL;
l9=sj0;
L12:;
si0=l5;
si1=l5;
sj1=i64_load(&i->m0,(U64)si1);
sj2=4ULL;
sj1<<=(sj2&63);
l10=sj1;
i64_store(&i->m0,(U64)si0,sj1);
si0=l7;
si1=-48U;
si0+=si1;
l11=si0;
si1=255U;
si0&=si1;
si1=10U;
si0=si0 < si1;
if(si0){
goto L14;
}
si0=l7;
si1=-97U;
si0+=si1;
si1=255U;
si0&=si1;
si1=25U;
si0=si0 > si1;
if(si0){
goto L15;
}
si0=l7;
si1=-87U;
si0+=si1;
l11=si0;
goto L14;
L15:;
si0=l7;
si1=-91U;
si0+=si1;
si1=255U;
si0&=si1;
si1=230U;
si0=si0 < si1;
if(si0){
goto L13;
}
si0=l7;
si1=-55U;
si0+=si1;
l11=si0;
L14:;
si0=l1;
si1=1U;
si0+=si1;
l1=si0;
si0=l5;
sj1=l10;
si2=l11;
sj2=(U64)(si2);
sj3=255ULL;
sj2&=sj3;
sj1|=sj2;
i64_store(&i->m0,(U64)si0,sj1);
sj0=l9;
sj1=-4ULL;
sj0+=sj1;
l9=sj0;
si0=l2;
si1=-1U;
si0+=si1;
l2=si0;
si0=!(si0);
if(si0){
goto L9;
}
goto L11;
L13:;
}
si0=l0;
si1=2U;
i32_store(&i->m0,(U64)si0,si1);
goto L8;
L10:;
si0=l8;
si1=l4;
si2=1205052U;
f594(i,si0,si1,si2);
UNREACHABLE;
L9:;
si0=l4;
si1=3U;
si0<<=(si1&31);
l5=si0;
si0=-1U;
l7=si0;
L18:;
{
si0=l5;
si0=!(si0);
if(si0){
goto L17;
}
si0=l7;
si1=1U;
si0+=si1;
l7=si0;
si0=l5;
si1=-8U;
si0+=si1;
l5=si0;
si1=l6;
si0+=si1;
sj0=i64_load(&i->m0,(U64)si0);
si0=!(sj0);
if(si0){
goto L18;
}
}
si0=l4;
si1=l7;
si0-=si1;
l5=si0;
switch(si0){
case 0:
goto L17;
case 1:
goto L16;
default:
goto L19;
}
L19:;
si0=l0;
si1=l4;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l0;
si1=l6;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=1U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l4;
si2=l5;
si3=l4;
si4=l5;
si3=si3 < si4;
si1=si3?si1:si2;
i32_store(&i->m0,(U64)si0+12U,si1);
goto L1;
L17:;
si0=l0;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=8U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
goto L8;
L16:;
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l6;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+8U,sj1);
L8:;
si0=l6;
f15024(i,si0);
L1:;
si0=l3;
si1=16U;
si0+=si1;
i->g0=si0;
L0:;
}

U64 f1070(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U64 l4) {
U32 l5=0;
U64 l6=0;
U32 l7=0;
U32 l8=0;
U64 l9=0;
U32 l10=0;
U64 l11=0;
U64 l12=0;
U32 l13=0;
U32 si0,si1,si2,si3,si4;
U64 sj0,sj1,sj2,sj3,sj4;
si0=i->g0;
si1=80U;
si0-=si1;
l5=si0;
i->g0=si0;
si0=l5;
si1=l1;
i32_store(&i->m0,(U64)si0+48U,si1);
si0=l5;
si1=l3;
i32_store(&i->m0,(U64)si0+52U,si1);
si0=l3;
si1=l1;
si0=si0 != si1;
if(si0){
goto L4;
}
si0=l3;
if(si0){
goto L5;
}
sj0=0ULL;
l6=sj0;
goto L1;
L5:;
si0=l3;
si1=1U;
si0&=si1;
l7=si0;
si0=l3;
si1=1U;
si0=si0 != si1;
if(si0){
goto L3;
}
sj0=0ULL;
l6=sj0;
si0=0U;
l8=si0;
sj0=0ULL;
l9=sj0;
goto L2;
L4:;
si0=l5;
si1=0U;
i32_store(&i->m0,(U64)si0+56U,si1);
si0=0U;
si1=l5;
si2=52U;
si1+=si2;
si2=l5;
si3=48U;
si2+=si3;
si3=l5;
si4=56U;
si3+=si4;
si4=1205184U;
f1250(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L3:;
si0=l3;
si1=-2U;
si0&=si1;
l10=si0;
sj0=0ULL;
l9=sj0;
si0=0U;
l8=si0;
si0=l2;
l1=si0;
si0=l0;
l3=si0;
sj0=0ULL;
l6=sj0;
L6:;
{
si0=l5;
si1=16U;
si0+=si1;
si1=l1;
sj1=i64_load(&i->m0,(U64)si1);
sj2=0ULL;
sj3=l4;
sj4=0ULL;
f15157(i,si0,sj1,sj2,sj3,sj4);
si0=l3;
sj1=l6;
si2=l3;
sj2=i64_load(&i->m0,(U64)si2);
sj1+=sj2;
l11=sj1;
si2=l5;
sj2=i64_load(&i->m0,(U64)si2+16U);
sj1+=sj2;
l12=sj1;
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=32U;
si0+=si1;
si1=l1;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
sj2=0ULL;
sj3=l4;
sj4=0ULL;
f15157(i,si0,sj1,sj2,sj3,sj4);
si0=l3;
si1=8U;
si0+=si1;
l13=si0;
sj1=0ULL;
sj2=l11;
sj3=l6;
si2=sj2 < sj3;
sj2=(U64)(si2);
sj1+=sj2;
si2=l5;
si3=16U;
si2+=si3;
si3=8U;
si2+=si3;
sj2=i64_load(&i->m0,(U64)si2);
sj1+=sj2;
sj2=l12;
sj3=l11;
si2=sj2 < sj3;
sj2=(U64)(si2);
sj1+=sj2;
l11=sj1;
si2=l13;
sj2=i64_load(&i->m0,(U64)si2);
sj1+=sj2;
l6=sj1;
si2=l5;
sj2=i64_load(&i->m0,(U64)si2+32U);
sj1+=sj2;
l12=sj1;
i64_store(&i->m0,(U64)si0,sj1);
sj0=l6;
sj1=l11;
si0=sj0 < sj1;
sj0=(U64)(si0);
si1=l5;
si2=32U;
si1+=si2;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
sj0+=sj1;
sj1=l12;
sj2=l6;
si1=sj1 < sj2;
sj1=(U64)(si1);
sj0+=sj1;
l6=sj0;
si0=l1;
si1=16U;
si0+=si1;
l1=si0;
si0=l3;
si1=16U;
si0+=si1;
l3=si0;
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
L2:;
si0=l7;
si0=!(si0);
if(si0){
goto L1;
}
si0=l5;
si1=l2;
si2=l8;
si3=3U;
si2<<=(si3&31);
l3=si2;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
sj2=0ULL;
sj3=l4;
sj4=0ULL;
f15157(i,si0,sj1,sj2,sj3,sj4);
si0=l0;
si1=l3;
si0+=si1;
l3=si0;
sj1=l6;
si2=l3;
sj2=i64_load(&i->m0,(U64)si2);
sj1+=sj2;
l11=sj1;
si2=l5;
sj2=i64_load(&i->m0,(U64)si2);
sj1+=sj2;
l4=sj1;
i64_store(&i->m0,(U64)si0,sj1);
sj0=l9;
sj1=l11;
sj2=l6;
si1=sj1 < sj2;
sj1=(U64)(si1);
sj0+=sj1;
si1=l5;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
sj0+=sj1;
sj1=l4;
sj2=l11;
si1=sj1 < sj2;
sj1=(U64)(si1);
sj0+=sj1;
l6=sj0;
L1:;
si0=l5;
si1=80U;
si0+=si1;
i->g0=si0;
sj0=l6;
L0:;
return sj0;
}

void f1071(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U64 l5=0;
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
U64 l16=0;
U64 l17=0;
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
U64 l31=0;
U32 si0,si1,si2,si3;
U64 sj0,sj1,sj2,sj3,sj4;
si0=i->g0;
si1=816U;
si0-=si1;
l4=si0;
i->g0=si0;
si0=l3;
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
si0=l4;
si1=112U;
si0+=si1;
si1=l2;
sj1=i64_load(&i->m0,(U64)si1);
l5=sj1;
sj2=0ULL;
sj3=l5;
sj4=0ULL;
f15157(i,si0,sj1,sj2,sj3,sj4);
si0=l0;
si1=l4;
si2=112U;
si1+=si2;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+8U,sj1);
si0=l0;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1+112U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=1U;
si0=si0 <= si1;
if(si0){
goto L3;
}
si0=l3;
si1=43U;
si0=si0 > si1;
if(si0){
goto L10;
}
si0=0U;
l6=si0;
si0=l4;
si1=128U;
si0+=si1;
si1=0U;
si2=688U;
si0=f15145(i,si0,si1,si2);
si0=l3;
si1=1U;
si0<<=(si1&31);
l7=si0;
si1=-2U;
si0+=si1;
l8=si0;
si1=l3;
si0=si0 >= si1;
if(si0){
goto L9;
}
si0=l3;
si1=l8;
si2=1205232U;
f597(i,si0,si1,si2);
UNREACHABLE;
L10:;
si0=1205296U;
si1=42U;
si2=1205340U;
f604(i,si0,si1,si2);
UNREACHABLE;
L9:;
si0=l3;
si1=-1U;
si0+=si1;
l9=si0;
si1=1U;
si0&=si1;
l10=si0;
si0=l3;
si1=-2U;
si0+=si1;
l11=si0;
if(si0){
goto L12;
}
sj0=0ULL;
l12=sj0;
goto L11;
L12:;
si0=l2;
si1=16U;
si0+=si1;
l13=si0;
si0=l9;
si1=-2U;
si0&=si1;
l14=si0;
si0=0U;
l6=si0;
si0=l4;
si1=128U;
si0+=si1;
l15=si0;
sj0=0ULL;
l12=sj0;
L13:;
{
si0=l4;
si1=96U;
si0+=si1;
si1=l13;
si2=-8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
sj2=0ULL;
sj3=l5;
sj4=0ULL;
f15157(i,si0,sj1,sj2,sj3,sj4);
si0=l15;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1+96U);
l16=sj1;
sj2=l12;
sj1+=sj2;
l12=sj1;
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=80U;
si0+=si1;
si1=l13;
sj1=i64_load(&i->m0,(U64)si1);
sj2=0ULL;
sj3=l5;
sj4=0ULL;
f15157(i,si0,sj1,sj2,sj3,sj4);
si0=l15;
si1=8U;
si0+=si1;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1+80U);
l17=sj1;
si2=l4;
si3=96U;
si2+=si3;
si3=8U;
si2+=si3;
sj2=i64_load(&i->m0,(U64)si2);
sj3=l12;
sj4=l16;
si3=sj3 < sj4;
sj3=(U64)(si3);
sj2+=sj3;
sj1+=sj2;
l12=sj1;
i64_store(&i->m0,(U64)si0,sj1);
si0=l13;
si1=16U;
si0+=si1;
l13=si0;
si0=l15;
si1=16U;
si0+=si1;
l15=si0;
si0=l4;
si1=80U;
si0+=si1;
si1=8U;
si0+=si1;
sj0=i64_load(&i->m0,(U64)si0);
sj1=l12;
sj2=l17;
si1=sj1 < sj2;
sj1=(U64)(si1);
sj0+=sj1;
l12=sj0;
si0=l14;
si1=l6;
si2=2U;
si1+=si2;
l6=si1;
si0=si0 != si1;
if(si0){
goto L13;
}
}
L11:;
si0=l10;
si0=!(si0);
if(si0){
goto L14;
}
si0=l4;
si1=64U;
si0+=si1;
si1=l2;
si2=8U;
si1+=si2;
si2=l6;
si3=3U;
si2<<=(si3&31);
l13=si2;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
sj2=0ULL;
sj3=l5;
sj4=0ULL;
f15157(i,si0,sj1,sj2,sj3,sj4);
si0=l4;
si1=128U;
si0+=si1;
si1=l13;
si0+=si1;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1+64U);
l5=sj1;
sj2=l12;
sj1+=sj2;
l12=sj1;
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=72U;
si0+=si1;
sj0=i64_load(&i->m0,(U64)si0);
sj1=l12;
sj2=l5;
si1=sj1 < sj2;
sj1=(U64)(si1);
sj0+=sj1;
l12=sj0;
L14:;
si0=l4;
si1=128U;
si0+=si1;
si1=l9;
si2=3U;
si1<<=(si2&31);
si0+=si1;
sj1=l12;
i64_store(&i->m0,(U64)si0,sj1);
si0=l9;
si1=2U;
si0=si0 < si1;
if(si0){
goto L4;
}
si0=l2;
si1=24U;
si0+=si1;
l18=si0;
si0=l7;
si1=-1U;
si0+=si1;
l19=si0;
si0=l2;
si1=l3;
si2=3U;
si1<<=(si2&31);
l13=si1;
si0+=si1;
l20=si0;
si0=l4;
si1=128U;
si0+=si1;
si1=24U;
si0+=si1;
l21=si0;
si0=0U;
l22=si0;
si0=l13;
si1=-16U;
si0+=si1;
l23=si0;
l24=si0;
si0=l11;
l25=si0;
si0=1U;
l26=si0;
L15:;
{
si0=l26;
si1=l19;
si0=si0 == si1;
if(si0){
goto L6;
}
si0=l8;
si1=l26;
si0-=si1;
l13=si0;
si1=l3;
si0=si0 < si1;
if(si0){
goto L5;
}
si0=l4;
si1=128U;
si0+=si1;
si1=l26;
si2=3U;
si1<<=(si2&31);
l13=si1;
si0+=si1;
si1=l13;
si0+=si1;
l27=si0;
si1=l26;
si2=-1U;
si1^=si2;
si2=l3;
si1+=si2;
l15=si1;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l28=si0;
si0=l15;
si1=l20;
si2=l2;
si3=l13;
si2+=si3;
l6=si2;
si3=8U;
si2+=si3;
l29=si2;
si1-=si2;
si2=3U;
si1>>=(si2&31);
l13=si1;
si2=l15;
si3=l13;
si2=si2 < si3;
si0=si2?si0:si1;
if(si0){
goto L17;
}
sj0=0ULL;
l5=sj0;
goto L16;
L17:;
si0=l6;
sj0=i64_load(&i->m0,(U64)si0);
l16=sj0;
si0=l11;
si1=l22;
si0-=si1;
l13=si0;
si1=l23;
si2=l22;
si3=3U;
si2<<=(si3&31);
si1-=si2;
si2=3U;
si1>>=(si2&31);
l15=si1;
si2=l13;
si3=l15;
si2=si2 < si3;
si0=si2?si0:si1;
l13=si0;
si1=1U;
si0&=si1;
l30=si0;
si0=l13;
si1=1U;
si0=si0 != si1;
if(si0){
goto L19;
}
sj0=0ULL;
l5=sj0;
si0=0U;
l6=si0;
sj0=0ULL;
l31=sj0;
goto L18;
L19:;
si0=l25;
si1=l24;
si2=3U;
si1>>=(si2&31);
l13=si1;
si2=l25;
si3=l13;
si2=si2 < si3;
si0=si2?si0:si1;
si1=536870910U;
si0&=si1;
l10=si0;
sj0=0ULL;
l31=sj0;
si0=0U;
l6=si0;
si0=l18;
l15=si0;
si0=l21;
l13=si0;
sj0=0ULL;
l5=sj0;
L20:;
{
si0=l4;
si1=48U;
si0+=si1;
si1=l15;
si2=-8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
sj2=0ULL;
sj3=l16;
sj4=0ULL;
f15157(i,si0,sj1,sj2,sj3,sj4);
si0=l13;
si1=-8U;
si0+=si1;
l14=si0;
sj1=l5;
si2=l14;
sj2=i64_load(&i->m0,(U64)si2);
sj1+=sj2;
l12=sj1;
si2=l4;
sj2=i64_load(&i->m0,(U64)si2+48U);
sj1+=sj2;
l17=sj1;
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=32U;
si0+=si1;
si1=l15;
sj1=i64_load(&i->m0,(U64)si1);
sj2=0ULL;
sj3=l16;
sj4=0ULL;
f15157(i,si0,sj1,sj2,sj3,sj4);
si0=l13;
sj1=0ULL;
sj2=l12;
sj3=l5;
si2=sj2 < sj3;
sj2=(U64)(si2);
sj1+=sj2;
si2=l4;
si3=48U;
si2+=si3;
si3=8U;
si2+=si3;
sj2=i64_load(&i->m0,(U64)si2);
sj1+=sj2;
sj2=l17;
sj3=l12;
si2=sj2 < sj3;
sj2=(U64)(si2);
sj1+=sj2;
l12=sj1;
si2=l13;
sj2=i64_load(&i->m0,(U64)si2);
sj1+=sj2;
l5=sj1;
si2=l4;
sj2=i64_load(&i->m0,(U64)si2+32U);
sj1+=sj2;
l17=sj1;
i64_store(&i->m0,(U64)si0,sj1);
sj0=l5;
sj1=l12;
si0=sj0 < sj1;
sj0=(U64)(si0);
si1=l4;
si2=32U;
si1+=si2;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
sj0+=sj1;
sj1=l17;
sj2=l5;
si1=sj1 < sj2;
sj1=(U64)(si1);
sj0+=sj1;
l5=sj0;
si0=l15;
si1=16U;
si0+=si1;
l15=si0;
si0=l13;
si1=16U;
si0+=si1;
l13=si0;
si0=l10;
si1=l6;
si2=2U;
si1+=si2;
l6=si1;
si0=si0 != si1;
if(si0){
goto L20;
}
}
L18:;
si0=l30;
si0=!(si0);
if(si0){
goto L16;
}
si0=l4;
si1=16U;
si0+=si1;
si1=l29;
si2=l6;
si3=3U;
si2<<=(si3&31);
l13=si2;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
sj2=0ULL;
sj3=l16;
sj4=0ULL;
f15157(i,si0,sj1,sj2,sj3,sj4);
si0=l27;
si1=l13;
si0+=si1;
l13=si0;
sj1=l5;
si2=l13;
sj2=i64_load(&i->m0,(U64)si2);
sj1+=sj2;
l12=sj1;
si2=l4;
sj2=i64_load(&i->m0,(U64)si2+16U);
sj1+=sj2;
l16=sj1;
i64_store(&i->m0,(U64)si0,sj1);
sj0=l31;
sj1=l12;
sj2=l5;
si1=sj1 < sj2;
sj1=(U64)(si1);
sj0+=sj1;
si1=l4;
si2=16U;
si1+=si2;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
sj0+=sj1;
sj1=l16;
sj2=l12;
si1=sj1 < sj2;
sj1=(U64)(si1);
sj0+=sj1;
l5=sj0;
L16:;
si0=l28;
sj1=l5;
i64_store(&i->m0,(U64)si0,sj1);
si0=l24;
si1=-8U;
si0+=si1;
l24=si0;
si0=l25;
si1=-1U;
si0+=si1;
l25=si0;
si0=l18;
si1=8U;
si0+=si1;
l18=si0;
si0=l21;
si1=16U;
si0+=si1;
l21=si0;
si0=l22;
si1=1U;
si0+=si1;
l22=si0;
si0=l26;
si1=1U;
si0+=si1;
l26=si0;
si1=l9;
si0=si0 != si1;
if(si0){
goto L15;
}
goto L4;
}
L8:;
si0=1204475U;
si1=43U;
si2=1205200U;
f604(i,si0,si1,si2);
UNREACHABLE;
L7:;
si0=1U;
si1=l1;
si2=1205216U;
f594(i,si0,si1,si2);
UNREACHABLE;
L6:;
si0=l19;
si1=l8;
si2=1205264U;
f593(i,si0,si1,si2);
UNREACHABLE;
L5:;
si0=l3;
si1=l13;
si2=1205280U;
f597(i,si0,si1,si2);
UNREACHABLE;
L4:;
si0=l7;
si1=l1;
si0=si0 > si1;
if(si0){
goto L2;
}
si0=l0;
si1=8U;
si0+=si1;
l15=si0;
si0=1U;
l14=si0;
si0=l3;
si1=1U;
si0+=si1;
l6=si0;
si0=l3;
si1=3U;
si0<<=(si1&31);
l10=si0;
si0=l0;
l13=si0;
L21:;
{
si0=l6;
si1=-1U;
si0+=si1;
l6=si0;
si0=!(si0);
if(si0){
goto L1;
}
si0=l14;
si1=2U;
si0+=si1;
l14=si0;
si0=l4;
si1=l2;
sj1=i64_load(&i->m0,(U64)si1);
l5=sj1;
sj2=0ULL;
sj3=l5;
sj4=0ULL;
f15157(i,si0,sj1,sj2,sj3,sj4);
si0=l13;
si1=8U;
si0+=si1;
si1=l4;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l13;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=8U;
si0+=si1;
l2=si0;
si0=l13;
si1=16U;
si0+=si1;
l13=si0;
si0=l10;
si1=-8U;
si0+=si1;
l10=si0;
if(si0){
goto L21;
}
}
si0=l8;
si0=!(si0);
if(si0){
goto L3;
}
si0=l7;
si1=3U;
si0<<=(si1&31);
si1=l0;
si0+=si1;
l2=si0;
si0=l3;
si1=4U;
si0<<=(si1&31);
si1=-24U;
si0+=si1;
l13=si0;
si1=3U;
si0>>=(si1&31);
si1=1U;
si0+=si1;
l14=si0;
si1=2U;
si0&=si1;
l6=si0;
si0=l13;
si1=24U;
si0=si0 >= si1;
if(si0){
goto L23;
}
si0=l4;
si1=128U;
si0+=si1;
l13=si0;
sj0=0ULL;
l5=sj0;
goto L22;
L23:;
si0=l14;
si1=1073741820U;
si0&=si1;
l14=si0;
si0=l4;
si1=128U;
si0+=si1;
l13=si0;
sj0=0ULL;
l5=sj0;
L24:;
{
si0=l13;
si1=l13;
sj1=i64_load(&i->m0,(U64)si1);
l12=sj1;
sj2=1ULL;
sj1<<=(sj2&63);
sj2=l5;
sj1|=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l13;
si1=8U;
si0+=si1;
l10=si0;
si1=l10;
sj1=i64_load(&i->m0,(U64)si1);
l5=sj1;
sj2=1ULL;
sj1<<=(sj2&63);
sj2=l12;
sj3=63ULL;
sj2>>=(sj3&63);
sj1|=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l13;
si1=16U;
si0+=si1;
l10=si0;
si1=l10;
sj1=i64_load(&i->m0,(U64)si1);
l12=sj1;
sj2=1ULL;
sj1<<=(sj2&63);
sj2=l5;
sj3=63ULL;
sj2>>=(sj3&63);
sj1|=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l13;
si1=24U;
si0+=si1;
l10=si0;
si1=l10;
sj1=i64_load(&i->m0,(U64)si1);
l5=sj1;
sj2=1ULL;
sj1<<=(sj2&63);
sj2=l12;
sj3=63ULL;
sj2>>=(sj3&63);
sj1|=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l13;
si1=32U;
si0+=si1;
l13=si0;
sj0=l5;
sj1=63ULL;
sj0>>=(sj1&63);
l5=sj0;
si0=l14;
si1=-4U;
si0+=si1;
l14=si0;
if(si0){
goto L24;
}
}
L22:;
si0=l2;
si1=-8U;
si0+=si1;
l10=si0;
si0=l6;
si0=!(si0);
if(si0){
goto L25;
}
L26:;
{
si0=l13;
si1=l13;
sj1=i64_load(&i->m0,(U64)si1);
l12=sj1;
sj2=1ULL;
sj1<<=(sj2&63);
sj2=l5;
sj1|=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l13;
si1=8U;
si0+=si1;
l13=si0;
sj0=l12;
sj1=63ULL;
sj0>>=(sj1&63);
l5=sj0;
si0=l6;
si1=-1U;
si0+=si1;
l6=si0;
if(si0){
goto L26;
}
}
L25:;
si0=l10;
si1=l10;
sj1=i64_load(&i->m0,(U64)si1);
sj2=l5;
sj1+=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=0U;
l6=si0;
si0=l4;
si1=128U;
si0+=si1;
l13=si0;
L27:;
{
si0=l15;
sj0=i64_load(&i->m0,(U64)si0);
l12=sj0;
si1=l13;
sj1=i64_load(&i->m0,(U64)si1);
sj0+=sj1;
l5=sj0;
sj1=l12;
si0=sj0 < sj1;
l14=si0;
si0=l6;
si1=255U;
si0&=si1;
if(si0){
goto L29;
}
si0=l14;
l6=si0;
goto L28;
L29:;
si0=l14;
sj1=l5;
sj2=1ULL;
sj1+=sj2;
l5=sj1;
si1=!(sj1);
si0|=si1;
l6=si0;
L28:;
si0=l15;
sj1=l5;
i64_store(&i->m0,(U64)si0,sj1);
si0=l15;
si1=8U;
si0+=si1;
l15=si0;
si0=l13;
si1=8U;
si0+=si1;
l13=si0;
si0=l8;
si1=-1U;
si0+=si1;
l8=si0;
if(si0){
goto L27;
}
}
si0=l6;
si0=!(si0);
if(si0){
goto L3;
}
si0=l10;
si1=l10;
sj1=i64_load(&i->m0,(U64)si1);
sj2=1ULL;
sj1+=sj2;
i64_store(&i->m0,(U64)si0,sj1);
L3:;
si0=l4;
si1=816U;
si0+=si1;
i->g0=si0;
goto L0;
L2:;
si0=l7;
si1=l1;
si2=1205248U;
f597(i,si0,si1,si2);
UNREACHABLE;
L1:;
si0=l14;
si1=l7;
si2=1204772U;
f594(i,si0,si1,si2);
UNREACHABLE;
L0:;
}

void f1072(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4,U32 l5) {
U32 l6=0;
U32 l7=0;
U32 l8=0;
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
U32 l19=0;
U32 l20=0;
U32 l21=0;
U64 l22=0;
U64 l23=0;
U64 l24=0;
U32 si0,si1,si2,si3,si4,si5;
U64 sj0,sj1,sj2,sj3,sj4;
si0=i->g0;
si1=32U;
si0-=si1;
l6=si0;
i->g0=si0;
si0=l3;
si1=2U;
si0=si0 < si1;
if(si0){
goto L11;
}
si0=l3;
si1=1U;
si0<<=(si1&31);
l7=si0;
si1=l1;
si0=si0 > si1;
if(si0){
goto L12;
}
si0=l2;
si1=l3;
si2=l3;
si3=1U;
si2>>=(si3&31);
l8=si2;
si1-=si2;
l9=si1;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l10=si0;
si0=l8;
si1=l9;
si0=si0 == si1;
if(si0){
goto L16;
}
si0=l9;
si1=l7;
si0=si0 <= si1;
if(si0){
goto L15;
}
si0=l9;
si1=l7;
si2=1205372U;
f597(i,si0,si1,si2);
UNREACHABLE;
L16:;
si0=l2;
si1=-8U;
si0+=si1;
l11=si0;
si1=l3;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l12=si0;
si0=l8;
si1=3U;
si0<<=(si1&31);
l1=si0;
L17:;
{
si0=l1;
si0=!(si0);
if(si0){
goto L14;
}
si0=l11;
si1=l1;
si0+=si1;
l13=si0;
si0=l12;
sj0=i64_load(&i->m0,(U64)si0);
l14=sj0;
si0=l12;
si1=-8U;
si0+=si1;
l12=si0;
si0=l1;
si1=-8U;
si0+=si1;
l1=si0;
sj0=l14;
si1=l13;
sj1=i64_load(&i->m0,(U64)si1);
l15=sj1;
si0=sj0 == sj1;
if(si0){
goto L17;
}
}
sj0=l14;
sj1=l15;
si0=sj0 <= sj1;
if(si0){
goto L13;
}
goto L5;
L15:;
si0=l0;
si1=l9;
si2=-1U;
si1+=si2;
l16=si1;
si2=3U;
si1<<=(si2&31);
l1=si1;
si0+=si1;
l17=si0;
si0=l2;
si1=l1;
si0+=si1;
sj0=i64_load(&i->m0,(U64)si0);
l18=sj0;
sj1=0ULL;
si0=sj0 != sj1;
if(si0){
goto L6;
}
si0=l6;
si1=l16;
i32_store(&i->m0,(U64)si0,si1);
si0=l6;
si1=l8;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l16;
si1=l8;
si0=si0 != si1;
if(si0){
goto L10;
}
si0=l2;
si1=-8U;
si0+=si1;
l11=si0;
si1=l3;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l12=si0;
si0=l8;
si1=3U;
si0<<=(si1&31);
l1=si0;
L20:;
{
si0=l1;
si0=!(si0);
if(si0){
goto L19;
}
si0=l11;
si1=l1;
si0+=si1;
l13=si0;
si0=l12;
sj0=i64_load(&i->m0,(U64)si0);
l14=sj0;
si0=l12;
si1=-8U;
si0+=si1;
l12=si0;
si0=l1;
si1=-8U;
si0+=si1;
l1=si0;
sj0=l14;
si1=l13;
sj1=i64_load(&i->m0,(U64)si1);
l15=sj1;
si0=sj0 == sj1;
if(si0){
goto L20;
}
}
sj0=l14;
sj1=l15;
si0=sj0 > sj1;
if(si0){
goto L18;
}
goto L6;
L19:;
si0=l1;
si0=!(si0);
if(si0){
goto L6;
}
L18:;
si0=0U;
l13=si0;
si0=0U;
l1=si0;
si0=l8;
si1=1U;
si0=si0 == si1;
if(si0){
goto L21;
}
si0=l3;
si1=3U;
si0<<=(si1&31);
si1=l8;
si2=3U;
si1<<=(si2&31);
si0-=si1;
l19=si0;
si0=0U;
l11=si0;
si0=0U;
si1=l3;
si2=1U;
si1>>=(si2&31);
si2=2147483646U;
si1&=si2;
si0-=si1;
l20=si0;
si0=l2;
l1=si0;
si0=l0;
l12=si0;
si0=0U;
l13=si0;
L22:;
{
si0=l12;
si1=l1;
si2=l19;
si1+=si2;
l16=si1;
sj1=i64_load(&i->m0,(U64)si1);
l14=sj1;
si2=l13;
sj2=(U64)(si2);
sj3=1ULL;
sj2&=sj3;
sj1-=sj2;
si2=l1;
sj2=i64_load(&i->m0,(U64)si2);
l15=sj2;
sj1-=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l12;
si1=8U;
si0+=si1;
si1=l16;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
l18=sj1;
sj2=l14;
sj3=l15;
si2=sj2 <= sj3;
sj3=l14;
sj4=l15;
si3=sj3 < sj4;
si4=l13;
si5=1U;
si4&=si5;
si2=si4?si2:si3;
l13=si2;
sj2=(U64)(si2);
sj1-=sj2;
si2=l1;
si3=8U;
si2+=si3;
sj2=i64_load(&i->m0,(U64)si2);
l14=sj2;
sj1-=sj2;
i64_store(&i->m0,(U64)si0,sj1);
sj0=l18;
sj1=l14;
si0=sj0 <= sj1;
sj1=l18;
sj2=l14;
si1=sj1 < sj2;
si2=l13;
si0=si2?si0:si1;
l13=si0;
si0=l1;
si1=16U;
si0+=si1;
l1=si0;
si0=l12;
si1=16U;
si0+=si1;
l12=si0;
si0=l20;
si1=l11;
si2=-2U;
si1+=si2;
l11=si1;
si0=si0 != si1;
if(si0){
goto L22;
}
}
si0=0U;
si1=l11;
si0-=si1;
l1=si0;
L21:;
si0=l3;
si1=2U;
si0&=si1;
si0=!(si0);
if(si0){
goto L23;
}
si0=l0;
si1=l1;
si2=3U;
si1<<=(si2&31);
l1=si1;
si0+=si1;
si1=l10;
si2=l1;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
si2=l13;
sj2=(U64)(si2);
sj1-=sj2;
si2=l2;
si3=l1;
si2+=si3;
sj2=i64_load(&i->m0,(U64)si2);
sj1-=sj2;
i64_store(&i->m0,(U64)si0,sj1);
L23:;
si0=l17;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
goto L4;
L14:;
si0=l1;
if(si0){
goto L5;
}
L13:;
si0=l8;
si1=l7;
si0=si0 > si1;
if(si0){
goto L9;
}
si0=0U;
l13=si0;
si0=0U;
l1=si0;
si0=l8;
si1=1U;
si0=si0 == si1;
if(si0){
goto L7;
}
si0=l3;
si1=3U;
si0<<=(si1&31);
si1=l8;
si2=3U;
si1<<=(si2&31);
si0-=si1;
l19=si0;
si0=0U;
l11=si0;
si0=0U;
si1=l3;
si2=1U;
si1>>=(si2&31);
si2=2147483646U;
si1&=si2;
si0-=si1;
l20=si0;
si0=l2;
l1=si0;
si0=l0;
l12=si0;
si0=0U;
l13=si0;
L24:;
{
si0=l12;
si1=l1;
sj1=i64_load(&i->m0,(U64)si1);
l14=sj1;
si2=l13;
sj2=(U64)(si2);
sj3=1ULL;
sj2&=sj3;
sj1-=sj2;
si2=l1;
si3=l19;
si2+=si3;
l16=si2;
sj2=i64_load(&i->m0,(U64)si2);
l15=sj2;
sj1-=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l12;
si1=8U;
si0+=si1;
si1=l1;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
l18=sj1;
sj2=l14;
sj3=l15;
si2=sj2 <= sj3;
sj3=l14;
sj4=l15;
si3=sj3 < sj4;
si4=l13;
si5=1U;
si4&=si5;
si2=si4?si2:si3;
l13=si2;
sj2=(U64)(si2);
sj1-=sj2;
si2=l16;
si3=8U;
si2+=si3;
sj2=i64_load(&i->m0,(U64)si2);
l14=sj2;
sj1-=sj2;
i64_store(&i->m0,(U64)si0,sj1);
sj0=l18;
sj1=l14;
si0=sj0 <= sj1;
sj1=l18;
sj2=l14;
si1=sj1 < sj2;
si2=l13;
si0=si2?si0:si1;
l13=si0;
si0=l1;
si1=16U;
si0+=si1;
l1=si0;
si0=l12;
si1=16U;
si0+=si1;
l12=si0;
si0=l20;
si1=l11;
si2=-2U;
si1+=si2;
l11=si1;
si0=si0 != si1;
if(si0){
goto L24;
}
goto L8;
}
L12:;
si0=l7;
si1=l1;
si2=1205356U;
f597(i,si0,si1,si2);
UNREACHABLE;
L11:;
si0=1205588U;
si1=28U;
si2=1205616U;
f604(i,si0,si1,si2);
UNREACHABLE;
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
si4=1231576U;
f1250(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L9:;
si0=1202809U;
si1=34U;
si2=1203412U;
f604(i,si0,si1,si2);
UNREACHABLE;
L8:;
si0=0U;
si1=l11;
si0-=si1;
l1=si0;
L7:;
si0=l3;
si1=2U;
si0&=si1;
si0=!(si0);
if(si0){
goto L4;
}
si0=l0;
si1=l1;
si2=3U;
si1<<=(si2&31);
l1=si1;
si0+=si1;
si1=l2;
si2=l1;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
si2=l13;
sj2=(U64)(si2);
sj1-=sj2;
si2=l10;
si3=l1;
si2+=si3;
sj2=i64_load(&i->m0,(U64)si2);
sj1-=sj2;
i64_store(&i->m0,(U64)si0,sj1);
goto L4;
L6:;
si0=l17;
sj1=l18;
i64_store(&i->m0,(U64)si0,sj1);
si0=l6;
si1=l16;
i32_store(&i->m0,(U64)si0,si1);
si0=l6;
si1=l8;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l16;
si1=l8;
si0=si0 != si1;
if(si0){
goto L27;
}
si0=l3;
si1=2U;
si0=si0 < si1;
if(si0){
goto L4;
}
si0=l8;
si1=1U;
si0=si0 != si1;
if(si0){
goto L26;
}
si0=0U;
l13=si0;
si0=0U;
l1=si0;
goto L25;
L27:;
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
si4=1203428U;
f1250(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L26:;
si0=l3;
si1=3U;
si0<<=(si1&31);
si1=l8;
si2=3U;
si1<<=(si2&31);
si0-=si1;
l19=si0;
si0=0U;
l11=si0;
si0=0U;
si1=l3;
si2=1U;
si1>>=(si2&31);
si2=2147483646U;
si1&=si2;
si0-=si1;
l20=si0;
si0=l2;
l1=si0;
si0=l0;
l12=si0;
si0=0U;
l13=si0;
L28:;
{
si0=l12;
si1=l1;
sj1=i64_load(&i->m0,(U64)si1);
l14=sj1;
si2=l13;
sj2=(U64)(si2);
sj3=1ULL;
sj2&=sj3;
sj1-=sj2;
si2=l1;
si3=l19;
si2+=si3;
l16=si2;
sj2=i64_load(&i->m0,(U64)si2);
l15=sj2;
sj1-=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l12;
si1=8U;
si0+=si1;
si1=l1;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
l18=sj1;
sj2=l14;
sj3=l15;
si2=sj2 <= sj3;
sj3=l14;
sj4=l15;
si3=sj3 < sj4;
si4=l13;
si5=1U;
si4&=si5;
si2=si4?si2:si3;
l13=si2;
sj2=(U64)(si2);
sj1-=sj2;
si2=l16;
si3=8U;
si2+=si3;
sj2=i64_load(&i->m0,(U64)si2);
l14=sj2;
sj1-=sj2;
i64_store(&i->m0,(U64)si0,sj1);
sj0=l18;
sj1=l14;
si0=sj0 <= sj1;
sj1=l18;
sj2=l14;
si1=sj1 < sj2;
si2=l13;
si0=si2?si0:si1;
l13=si0;
si0=l1;
si1=16U;
si0+=si1;
l1=si0;
si0=l12;
si1=16U;
si0+=si1;
l12=si0;
si0=l20;
si1=l11;
si2=-2U;
si1+=si2;
l11=si1;
si0=si0 != si1;
if(si0){
goto L28;
}
}
si0=0U;
si1=l11;
si0-=si1;
l1=si0;
L25:;
si0=l3;
si1=2U;
si0&=si1;
si0=!(si0);
if(si0){
goto L29;
}
si0=l0;
si1=l1;
si2=3U;
si1<<=(si2&31);
l1=si1;
si0+=si1;
si1=l2;
si2=l1;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
l14=sj1;
si2=l13;
sj2=(U64)(si2);
sj1-=sj2;
si2=l10;
si3=l1;
si2+=si3;
sj2=i64_load(&i->m0,(U64)si2);
l15=sj2;
sj1-=sj2;
i64_store(&i->m0,(U64)si0,sj1);
sj0=l14;
sj1=l15;
si0=sj0 <= sj1;
sj1=l14;
sj2=l15;
si1=sj1 < sj2;
si2=l13;
si0=si2?si0:si1;
l13=si0;
L29:;
si0=l13;
si1=1U;
si0&=si1;
si0=!(si0);
if(si0){
goto L4;
}
si0=l17;
si1=l17;
sj1=i64_load(&i->m0,(U64)si1);
sj2=-1ULL;
sj1+=sj2;
i64_store(&i->m0,(U64)si0,sj1);
goto L4;
L5:;
si0=l8;
si1=l7;
si0=si0 > si1;
if(si0){
goto L3;
}
si0=0U;
l13=si0;
si0=0U;
l1=si0;
si0=l8;
si1=1U;
si0=si0 == si1;
if(si0){
goto L30;
}
si0=l3;
si1=3U;
si0<<=(si1&31);
si1=l8;
si2=3U;
si1<<=(si2&31);
si0-=si1;
l19=si0;
si0=0U;
l11=si0;
si0=0U;
si1=l3;
si2=1U;
si1>>=(si2&31);
si2=2147483646U;
si1&=si2;
si0-=si1;
l20=si0;
si0=l2;
l1=si0;
si0=l0;
l12=si0;
si0=0U;
l13=si0;
L31:;
{
si0=l12;
si1=l1;
si2=l19;
si1+=si2;
l16=si1;
sj1=i64_load(&i->m0,(U64)si1);
l14=sj1;
si2=l13;
sj2=(U64)(si2);
sj3=1ULL;
sj2&=sj3;
sj1-=sj2;
si2=l1;
sj2=i64_load(&i->m0,(U64)si2);
l15=sj2;
sj1-=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l12;
si1=8U;
si0+=si1;
si1=l16;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
l18=sj1;
sj2=l14;
sj3=l15;
si2=sj2 <= sj3;
sj3=l14;
sj4=l15;
si3=sj3 < sj4;
si4=l13;
si5=1U;
si4&=si5;
si2=si4?si2:si3;
l13=si2;
sj2=(U64)(si2);
sj1-=sj2;
si2=l1;
si3=8U;
si2+=si3;
sj2=i64_load(&i->m0,(U64)si2);
l14=sj2;
sj1-=sj2;
i64_store(&i->m0,(U64)si0,sj1);
sj0=l18;
sj1=l14;
si0=sj0 <= sj1;
sj1=l18;
sj2=l14;
si1=sj1 < sj2;
si2=l13;
si0=si2?si0:si1;
l13=si0;
si0=l1;
si1=16U;
si0+=si1;
l1=si0;
si0=l12;
si1=16U;
si0+=si1;
l12=si0;
si0=l20;
si1=l11;
si2=-2U;
si1+=si2;
l11=si1;
si0=si0 != si1;
if(si0){
goto L31;
}
}
si0=0U;
si1=l11;
si0-=si1;
l1=si0;
L30:;
si0=l3;
si1=2U;
si0&=si1;
si0=!(si0);
if(si0){
goto L4;
}
si0=l0;
si1=l1;
si2=3U;
si1<<=(si2&31);
l1=si1;
si0+=si1;
si1=l10;
si2=l1;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
si2=l13;
sj2=(U64)(si2);
sj1-=sj2;
si2=l2;
si3=l1;
si2+=si3;
sj2=i64_load(&i->m0,(U64)si2);
sj1-=sj2;
i64_store(&i->m0,(U64)si0,sj1);
L4:;
si0=l9;
si1=1U;
si0<<=(si1&31);
l19=si0;
si1=l7;
si0=si0 > si1;
if(si0){
goto L38;
}
si0=l5;
si1=l19;
si0=si0 < si1;
if(si0){
goto L37;
}
si0=l9;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L36;
}
si0=l5;
si1=l19;
si0-=si1;
l1=si0;
si0=l4;
si1=l19;
si2=3U;
si1<<=(si2&31);
l13=si1;
si0+=si1;
l12=si0;
si0=l9;
si1=43U;
si0=si0 < si1;
if(si0){
goto L40;
}
si0=l4;
si1=l19;
si2=l0;
si3=l9;
si4=l12;
si5=l1;
f1072(i,si0,si1,si2,si3,si4,si5);
goto L39;
L40:;
si0=l4;
si1=l19;
si2=l0;
si3=l9;
f1071(i,si0,si1,si2,si3);
L39:;
si0=l3;
si1=-2U;
si0&=si1;
l17=si0;
si0=l0;
si1=l13;
si0+=si1;
l21=si0;
si0=l3;
si1=86U;
si0=si0 < si1;
if(si0){
goto L42;
}
si0=l21;
si1=l17;
si2=l10;
si3=l8;
si4=l12;
si5=l1;
f1072(i,si0,si1,si2,si3,si4,si5);
goto L41;
L42:;
si0=l21;
si1=l17;
si2=l10;
si3=l8;
f1071(i,si0,si1,si2,si3);
L41:;
si0=l9;
si1=43U;
si0=si0 < si1;
if(si0){
goto L44;
}
si0=l0;
si1=l19;
si2=l2;
si3=l9;
si4=l12;
si5=l1;
f1072(i,si0,si1,si2,si3,si4,si5);
goto L43;
L44:;
si0=l0;
si1=l19;
si2=l2;
si3=l9;
f1071(i,si0,si1,si2,si3);
L43:;
si0=l17;
si1=l9;
si0=si0 < si1;
if(si0){
goto L35;
}
si0=0U;
l11=si0;
si0=l9;
l16=si0;
si0=l21;
l1=si0;
si0=l0;
si1=l9;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l12=si0;
l13=si0;
L45:;
{
si0=l1;
sj0=i64_load(&i->m0,(U64)si0);
l15=sj0;
si1=l13;
sj1=i64_load(&i->m0,(U64)si1);
sj0+=sj1;
l14=sj0;
sj1=l15;
si0=sj0 < sj1;
l2=si0;
si0=l11;
si1=255U;
si0&=si1;
if(si0){
goto L47;
}
si0=l2;
l11=si0;
goto L46;
L47:;
si0=l2;
sj1=l14;
sj2=1ULL;
sj1+=sj2;
l14=sj1;
si1=!(sj1);
si0|=si1;
l11=si0;
L46:;
si0=l1;
sj1=l14;
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si1=8U;
si0+=si1;
l1=si0;
si0=l13;
si1=8U;
si0+=si1;
l13=si0;
si0=l16;
si1=-1U;
si0+=si1;
l16=si0;
if(si0){
goto L45;
}
}
si0=l3;
si1=4U;
si0<<=(si1&31);
si1=l8;
si2=4U;
si1<<=(si2&31);
si0-=si1;
l20=si0;
si0=l3;
si1=3U;
si0<<=(si1&31);
si1=l8;
si2=3U;
si1<<=(si2&31);
si0-=si1;
l5=si0;
si0=0U;
l13=si0;
si0=l9;
l16=si0;
si0=l0;
l1=si0;
L48:;
{
si0=l1;
si1=l20;
si0+=si1;
sj0=i64_load(&i->m0,(U64)si0);
l15=sj0;
si1=l1;
sj1=i64_load(&i->m0,(U64)si1);
sj0+=sj1;
l14=sj0;
sj1=l15;
si0=sj0 < sj1;
l2=si0;
si0=l13;
si1=255U;
si0&=si1;
if(si0){
goto L50;
}
si0=l2;
l13=si0;
goto L49;
L50:;
si0=l2;
sj1=l14;
sj2=1ULL;
sj1+=sj2;
l14=sj1;
si1=!(sj1);
si0|=si1;
l13=si0;
L49:;
si0=l1;
si1=l5;
si0+=si1;
sj1=l14;
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si1=8U;
si0+=si1;
l1=si0;
si0=l16;
si1=-1U;
si0+=si1;
l16=si0;
if(si0){
goto L48;
}
}
si0=l17;
si1=l9;
si0-=si1;
l5=si0;
si1=l9;
si0=si0 > si1;
if(si0){
goto L34;
}
sj0=2ULL;
sj1=1ULL;
si2=l11;
sj0=si2?sj0:sj1;
l22=sj0;
si0=l11;
sj0=(U64)(si0);
l23=sj0;
l24=sj0;
si0=l17;
si1=l9;
si0=si0 == si1;
if(si0){
goto L51;
}
si0=l21;
si1=l9;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l11=si0;
si0=l21;
si1=l5;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l10=si0;
si0=l3;
si1=l8;
si2=3U;
si1*=si2;
si0-=si1;
l2=si0;
si0=0U;
l16=si0;
si0=l21;
l1=si0;
L52:;
{
si0=l1;
sj0=i64_load(&i->m0,(U64)si0);
l15=sj0;
si1=l11;
sj1=i64_load(&i->m0,(U64)si1);
sj0+=sj1;
l14=sj0;
sj1=l15;
si0=sj0 < sj1;
l20=si0;
si0=l16;
si1=255U;
si0&=si1;
if(si0){
goto L54;
}
si0=l20;
l16=si0;
goto L53;
L54:;
si0=l20;
sj1=l14;
sj2=1ULL;
sj1+=sj2;
l14=sj1;
si1=!(sj1);
si0|=si1;
l16=si0;
L53:;
si0=l1;
sj1=l14;
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si1=8U;
si0+=si1;
l1=si0;
si0=l11;
si1=8U;
si0+=si1;
l11=si0;
si0=l2;
si1=1U;
si0+=si1;
l2=si0;
if(si0){
goto L52;
}
}
si0=l16;
si1=1U;
si0^=si1;
l1=si0;
si0=l9;
si1=l5;
si0=si0 == si1;
if(si0){
goto L56;
}
si0=l1;
if(si0){
goto L56;
}
si0=l10;
si1=l10;
sj1=i64_load(&i->m0,(U64)si1);
sj2=1ULL;
sj1+=sj2;
l14=sj1;
i64_store(&i->m0,(U64)si0,sj1);
sj0=l23;
l24=sj0;
sj0=l14;
sj1=0ULL;
si0=sj0 != sj1;
if(si0){
goto L51;
}
si0=l3;
si1=4U;
si0<<=(si1&31);
si1=l8;
si2=5U;
si1<<=(si2&31);
si0-=si1;
si1=-8U;
si0+=si1;
l11=si0;
si0=l3;
si1=l8;
si0+=si1;
si1=3U;
si0<<=(si1&31);
si1=l0;
si0+=si1;
si1=8U;
si0+=si1;
l1=si0;
L57:;
{
si0=l11;
si0=!(si0);
if(si0){
goto L55;
}
si0=l1;
si1=l1;
sj1=i64_load(&i->m0,(U64)si1);
sj2=1ULL;
sj1+=sj2;
l14=sj1;
i64_store(&i->m0,(U64)si0,sj1);
si0=l11;
si1=-8U;
si0+=si1;
l11=si0;
si0=l1;
si1=8U;
si0+=si1;
l1=si0;
sj0=l14;
si0=!(sj0);
if(si0){
goto L57;
}
}
sj0=l23;
l24=sj0;
goto L51;
L56:;
sj0=l23;
l24=sj0;
si0=l9;
si1=l5;
si0=si0 != si1;
si1=l1;
si0|=si1;
if(si0){
goto L51;
}
L55:;
sj0=l22;
l24=sj0;
L51:;
si0=l9;
si1=l9;
si2=3U;
si1*=si2;
l16=si1;
si0=si0 > si1;
if(si0){
goto L33;
}
si0=l16;
si1=l7;
si0=si0 > si1;
if(si0){
goto L32;
}
si0=l19;
if(si0){
goto L59;
}
sj0=0ULL;
l14=sj0;
goto L58;
L59:;
si0=0U;
l1=si0;
L60:;
{
si0=l12;
si1=l12;
sj1=i64_load(&i->m0,(U64)si1);
l14=sj1;
si2=l1;
sj2=(U64)(si2);
sj3=1ULL;
sj2&=sj3;
si3=l4;
sj3=i64_load(&i->m0,(U64)si3);
l15=sj3;
sj2+=sj3;
sj1-=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l12;
si1=8U;
si0+=si1;
l11=si0;
si1=l11;
sj1=i64_load(&i->m0,(U64)si1);
l18=sj1;
sj2=l14;
sj3=l15;
si2=sj2 <= sj3;
sj3=l14;
sj4=l15;
si3=sj3 < sj4;
si4=l1;
si5=1U;
si4&=si5;
si2=si4?si2:si3;
l1=si2;
sj2=(U64)(si2);
si3=l4;
si4=8U;
si3+=si4;
sj3=i64_load(&i->m0,(U64)si3);
l14=sj3;
sj2+=sj3;
sj1-=sj2;
i64_store(&i->m0,(U64)si0,sj1);
sj0=l18;
sj1=l14;
si0=sj0 <= sj1;
sj1=l18;
sj2=l14;
si1=sj1 < sj2;
si2=l1;
si0=si2?si0:si1;
l1=si0;
si0=l4;
si1=16U;
si0+=si1;
l4=si0;
si0=l12;
si1=16U;
si0+=si1;
l12=si0;
si0=l19;
si1=-2U;
si0+=si1;
l19=si0;
if(si0){
goto L60;
}
}
sj0=0ULL;
si1=l1;
sj1=(U64)(si1);
sj0-=sj1;
l14=sj0;
L58:;
sj0=l22;
sj1=l23;
si2=l13;
sj0=si2?sj0:sj1;
l18=sj0;
sj0=l24;
sj1=l14;
sj0+=sj1;
l15=sj0;
si0=l17;
si0=!(si0);
if(si0){
goto L2;
}
si0=l21;
si1=l21;
sj1=i64_load(&i->m0,(U64)si1);
l14=sj1;
sj2=l18;
sj1+=sj2;
l18=sj1;
i64_store(&i->m0,(U64)si0,sj1);
si0=1U;
l4=si0;
sj0=l18;
sj1=l14;
si0=sj0 >= sj1;
if(si0){
goto L1;
}
si0=l21;
si1=l17;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l13=si0;
si0=8U;
si1=l8;
si2=4U;
si1<<=(si2&31);
si0-=si1;
l1=si0;
sj0=1ULL;
l18=sj0;
L61:;
{
si0=l1;
si0=!(si0);
if(si0){
goto L2;
}
si0=l13;
si1=l1;
si0+=si1;
l12=si0;
si1=l12;
sj1=i64_load(&i->m0,(U64)si1);
sj2=1ULL;
sj1+=sj2;
l14=sj1;
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si1=8U;
si0+=si1;
l1=si0;
sj0=l14;
si0=!(sj0);
if(si0){
goto L61;
}
goto L1;
}
L38:;
si0=1204440U;
si1=35U;
si2=1205388U;
f604(i,si0,si1,si2);
UNREACHABLE;
L37:;
si0=1204440U;
si1=35U;
si2=1205404U;
f604(i,si0,si1,si2);
UNREACHABLE;
L36:;
si0=l9;
si1=l19;
si2=1205420U;
f597(i,si0,si1,si2);
UNREACHABLE;
L35:;
si0=1204440U;
si1=35U;
si2=1205436U;
f604(i,si0,si1,si2);
UNREACHABLE;
L34:;
si0=1201588U;
si1=35U;
si2=1203200U;
f604(i,si0,si1,si2);
UNREACHABLE;
L33:;
si0=l9;
si1=l16;
si2=1205452U;
f683(i,si0,si1,si2);
UNREACHABLE;
L32:;
si0=l16;
si1=l7;
si2=1205452U;
f597(i,si0,si1,si2);
UNREACHABLE;
L3:;
si0=1202809U;
si1=34U;
si2=1203412U;
f604(i,si0,si1,si2);
UNREACHABLE;
L2:;
sj0=l18;
si0=!(sj0);
l4=si0;
L1:;
si0=l0;
si1=l16;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l1=si0;
sj0=l15;
sj1=3ULL;
si0=sj0 < sj1;
if(si0){
goto L67;
}
si0=l7;
si1=l16;
si0=si0 == si1;
if(si0){
goto L66;
}
si0=l1;
si1=l1;
sj1=i64_load(&i->m0,(U64)si1);
l14=sj1;
sj2=-1ULL;
sj1+=sj2;
i64_store(&i->m0,(U64)si0,sj1);
sj0=l14;
sj1=0ULL;
si0=sj0 != sj1;
if(si0){
goto L63;
}
si0=l8;
si1=24U;
si0*=si1;
l1=si0;
si1=l3;
si2=3U;
si1<<=(si2&31);
si0-=si1;
si1=-8U;
si0+=si1;
l12=si0;
si0=l3;
si1=24U;
si0*=si1;
si1=l1;
si0-=si1;
si1=l0;
si0+=si1;
si1=8U;
si0+=si1;
l1=si0;
L68:;
{
si0=l12;
si0=!(si0);
if(si0){
goto L66;
}
si0=l1;
si1=l1;
sj1=i64_load(&i->m0,(U64)si1);
l14=sj1;
sj2=-1ULL;
sj1+=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l12;
si1=-8U;
si0+=si1;
l12=si0;
si0=l1;
si1=8U;
si0+=si1;
l1=si0;
sj0=l14;
si0=!(sj0);
if(si0){
goto L68;
}
goto L63;
}
L67:;
si0=l7;
si1=l16;
si0=si0 == si1;
if(si0){
goto L65;
}
si0=l1;
si1=l1;
sj1=i64_load(&i->m0,(U64)si1);
l14=sj1;
sj2=l15;
sj1+=sj2;
l15=sj1;
i64_store(&i->m0,(U64)si0,sj1);
sj0=l15;
sj1=l14;
si0=sj0 >= sj1;
if(si0){
goto L63;
}
si0=l8;
si1=24U;
si0*=si1;
l1=si0;
si1=l3;
si2=3U;
si1<<=(si2&31);
si0-=si1;
si1=-8U;
si0+=si1;
l12=si0;
si0=l3;
si1=24U;
si0*=si1;
si1=l1;
si0-=si1;
si1=l0;
si0+=si1;
si1=8U;
si0+=si1;
l1=si0;
L69:;
{
si0=l12;
si0=!(si0);
if(si0){
goto L64;
}
si0=l1;
si1=l1;
sj1=i64_load(&i->m0,(U64)si1);
sj2=1ULL;
sj1+=sj2;
l14=sj1;
i64_store(&i->m0,(U64)si0,sj1);
si0=l12;
si1=-8U;
si0+=si1;
l12=si0;
si0=l1;
si1=8U;
si0+=si1;
l1=si0;
sj0=l14;
si0=!(sj0);
if(si0){
goto L69;
}
goto L63;
}
L66:;
si0=l4;
if(si0){
goto L62;
}
goto L63;
L65:;
sj0=l15;
si0=!(sj0);
if(si0){
goto L63;
}
L64:;
si0=1205508U;
si1=63U;
si2=1205572U;
f604(i,si0,si1,si2);
UNREACHABLE;
L63:;
si0=l6;
si1=32U;
si0+=si1;
i->g0=si0;
goto L0;
L62:;
si0=1205468U;
si1=24U;
si2=1205492U;
f604(i,si0,si1,si2);
UNREACHABLE;
L0:;
}

void f1073(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4,U32 l5) {
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
U32 l23=0;
U32 l24=0;
U32 l25=0;
U32 l26=0;
U64 l27=0;
U64 l28=0;
U32 l29=0;
U32 l30=0;
U32 l31=0;
U64 l32=0;
U32 l33=0;
U64 l34=0;
U64 l35=0;
U64 l36=0;
U32 si0,si1,si2,si3,si4,si5,si6,si7,si8;
U64 sj0,sj1,sj2,sj3,sj4,sj9;
si0=i->g0;
si1=48U;
si0-=si1;
l6=si0;
i->g0=si0;
si0=l6;
si1=l3;
si2=l3;
si3=3U;
si2=DIV_U(si2,si3);
l7=si2;
si3=l7;
si4=3U;
si3*=si4;
si4=l3;
si3=si3 != si4;
si2+=si3;
l8=si2;
si3=1U;
si2<<=(si3&31);
l9=si2;
si1-=si2;
l10=si1;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l3;
si1=l9;
si0=si0 == si1;
if(si0){
goto L8;
}
si0=l8;
si1=l10;
si0=si0 < si1;
if(si0){
goto L10;
}
si0=l3;
si1=l8;
si0=si0 < si1;
if(si0){
goto L7;
}
si0=l3;
si1=l8;
si0-=si1;
l11=si0;
si1=l8;
si0=si0 < si1;
if(si0){
goto L6;
}
si0=l5;
si1=l8;
si2=1U;
si1+=si2;
l12=si1;
si2=1U;
si1<<=(si2&31);
l13=si1;
si0=si0 < si1;
if(si0){
goto L5;
}
si0=l5;
si1=l13;
si0-=si1;
l7=si0;
si1=l13;
si0=si0 >= si1;
if(si0){
goto L9;
}
si0=1204440U;
si1=35U;
si2=1205664U;
f604(i,si0,si1,si2);
UNREACHABLE;
L10:;
si0=1206004U;
si1=24U;
si2=1206028U;
f604(i,si0,si1,si2);
UNREACHABLE;
L9:;
si0=l8;
si1=l7;
si2=l13;
si1-=si2;
l7=si1;
si0=si0 >= si1;
if(si0){
goto L4;
}
si0=l8;
si1=l13;
si0=si0 > si1;
if(si0){
goto L3;
}
si0=l2;
si1=l8;
si2=3U;
si1<<=(si2&31);
l7=si1;
si0+=si1;
l14=si0;
si1=l7;
si0+=si1;
l15=si0;
si0=l4;
si1=l13;
si2=3U;
si1<<=(si2&31);
l7=si1;
si0+=si1;
l16=si0;
si1=l7;
si0+=si1;
l17=si0;
si1=l8;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l18=si0;
si0=l8;
si1=l11;
si2=l8;
si1-=si2;
l19=si1;
si0=si0 >= si1;
if(si0){
goto L12;
}
si0=l4;
si1=l8;
si2=l15;
si3=l19;
si4=l2;
si5=l8;
si0=f1048(i,si0,si1,si2,si3,si4,si5);
l20=si0;
goto L11;
L12:;
si0=l4;
si1=l8;
si2=l2;
si3=l8;
si4=l15;
si5=l19;
si0=f1048(i,si0,si1,si2,si3,si4,si5);
l20=si0;
L11:;
si0=l8;
si1=3U;
si0<<=(si1&31);
l21=si0;
si0=l18;
si1=l20;
sj1=(U64)(si1);
l22=sj1;
i64_store(&i->m0,(U64)si0,sj1);
si0=l8;
si0=!(si0);
if(si0){
goto L1;
}
si0=l8;
si1=5U;
si0<<=(si1&31);
si1=32U;
si0+=si1;
l23=si0;
si0=0U;
l24=si0;
si0=l8;
l25=si0;
si0=l14;
l26=si0;
si0=l4;
l7=si0;
L13:;
{
si0=l7;
sj0=i64_load(&i->m0,(U64)si0);
l27=sj0;
si1=l26;
sj1=i64_load(&i->m0,(U64)si1);
sj0+=sj1;
l28=sj0;
sj1=l27;
si0=sj0 < sj1;
l29=si0;
si0=l24;
si1=255U;
si0&=si1;
if(si0){
goto L15;
}
si0=l29;
l24=si0;
goto L14;
L15:;
si0=l29;
sj1=l28;
sj2=1ULL;
sj1+=sj2;
l28=sj1;
si1=!(sj1);
si0|=si1;
l24=si0;
L14:;
si0=l7;
si1=l23;
si0+=si1;
sj1=l28;
i64_store(&i->m0,(U64)si0,sj1);
si0=l26;
si1=8U;
si0+=si1;
l26=si0;
si0=l7;
si1=8U;
si0+=si1;
l7=si0;
si0=l25;
si1=-1U;
si0+=si1;
l25=si0;
if(si0){
goto L13;
}
}
si0=l24;
if(si0){
goto L2;
}
goto L1;
L8:;
si0=l6;
si1=0U;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=1U;
si1=l6;
si2=12U;
si1+=si2;
si2=1204644U;
si3=l6;
si4=24U;
si3+=si4;
si4=1205632U;
f1250(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L7:;
si0=1204440U;
si1=35U;
si2=1205648U;
f604(i,si0,si1,si2);
UNREACHABLE;
L6:;
si0=1204440U;
si1=35U;
si2=1205648U;
f604(i,si0,si1,si2);
UNREACHABLE;
L5:;
si0=1204440U;
si1=35U;
si2=1205664U;
f604(i,si0,si1,si2);
UNREACHABLE;
L4:;
si0=l12;
si1=l7;
si2=1205680U;
f597(i,si0,si1,si2);
UNREACHABLE;
L3:;
si0=l8;
si1=l13;
si2=1205696U;
f597(i,si0,si1,si2);
UNREACHABLE;
L2:;
si0=l18;
si1=l18;
sj1=i64_load(&i->m0,(U64)si1);
sj2=1ULL;
sj1+=sj2;
i64_store(&i->m0,(U64)si0,sj1);
L1:;
si0=l16;
si1=l21;
si0+=si1;
l30=si0;
si0=l20;
if(si0){
goto L17;
}
si0=l4;
si1=-8U;
si0+=si1;
l25=si0;
si0=l8;
si1=3U;
si0<<=(si1&31);
l7=si0;
si0=l8;
si1=4U;
si0<<=(si1&31);
si1=l2;
si0+=si1;
si1=-8U;
si0+=si1;
l26=si0;
L20:;
{
si0=l7;
si0=!(si0);
if(si0){
goto L19;
}
si0=l25;
si1=l7;
si0+=si1;
l24=si0;
si0=l26;
sj0=i64_load(&i->m0,(U64)si0);
l28=sj0;
si0=l26;
si1=-8U;
si0+=si1;
l26=si0;
si0=l7;
si1=-8U;
si0+=si1;
l7=si0;
sj0=l28;
si1=l24;
sj1=i64_load(&i->m0,(U64)si1);
l27=sj1;
si0=sj0 == sj1;
if(si0){
goto L20;
}
}
sj0=l28;
sj1=l27;
si0=sj0 > sj1;
if(si0){
goto L18;
}
goto L17;
L19:;
si0=l7;
si0=!(si0);
if(si0){
goto L17;
}
L18:;
sj0=0ULL;
l22=sj0;
si0=l8;
si0=!(si0);
if(si0){
goto L16;
}
si0=l8;
si1=1U;
si0&=si1;
l20=si0;
si0=0U;
l26=si0;
si0=0U;
l7=si0;
si0=l8;
si1=1U;
si0=si0 == si1;
if(si0){
goto L21;
}
si0=0U;
l24=si0;
si0=0U;
si1=l8;
si2=2147483646U;
si1&=si2;
si0-=si1;
l21=si0;
si0=l4;
si1=l8;
si2=4U;
si1<<=(si2&31);
si0+=si1;
l31=si0;
si0=0U;
l7=si0;
si0=0U;
l26=si0;
L22:;
{
si0=l31;
si1=l7;
si0+=si1;
l25=si0;
si1=16U;
si0+=si1;
si1=l14;
si2=l7;
si1+=si2;
l29=si1;
sj1=i64_load(&i->m0,(U64)si1);
l28=sj1;
si2=l26;
sj2=(U64)(si2);
sj3=1ULL;
sj2&=sj3;
sj1-=sj2;
si2=l4;
si3=l7;
si2+=si3;
l23=si2;
sj2=i64_load(&i->m0,(U64)si2);
l27=sj2;
sj1-=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l25;
si1=24U;
si0+=si1;
si1=l29;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
l32=sj1;
sj2=l28;
sj3=l27;
si2=sj2 <= sj3;
sj3=l28;
sj4=l27;
si3=sj3 < sj4;
si4=l26;
si5=1U;
si4&=si5;
si2=si4?si2:si3;
l26=si2;
sj2=(U64)(si2);
sj1-=sj2;
si2=l23;
si3=8U;
si2+=si3;
sj2=i64_load(&i->m0,(U64)si2);
l28=sj2;
sj1-=sj2;
i64_store(&i->m0,(U64)si0,sj1);
sj0=l32;
sj1=l28;
si0=sj0 <= sj1;
sj1=l32;
sj2=l28;
si1=sj1 < sj2;
si2=l26;
si0=si2?si0:si1;
l26=si0;
si0=l7;
si1=16U;
si0+=si1;
l7=si0;
si0=l21;
si1=l24;
si2=-2U;
si1+=si2;
l24=si1;
si0=si0 != si1;
if(si0){
goto L22;
}
}
si0=0U;
si1=l24;
si0-=si1;
l7=si0;
L21:;
si0=l20;
si0=!(si0);
if(si0){
goto L16;
}
si0=l16;
si1=l7;
si2=3U;
si1<<=(si2&31);
l7=si1;
si0+=si1;
si1=l14;
si2=l7;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
si2=l26;
sj2=(U64)(si2);
sj1-=sj2;
si2=l4;
si3=l7;
si2+=si3;
sj2=i64_load(&i->m0,(U64)si2);
sj1-=sj2;
i64_store(&i->m0,(U64)si0,sj1);
goto L16;
L17:;
si0=l8;
si0=!(si0);
if(si0){
goto L16;
}
si0=l8;
si1=1U;
si0&=si1;
l33=si0;
si0=l8;
si1=1U;
si0=si0 != si1;
if(si0){
goto L24;
}
si0=0U;
l26=si0;
si0=0U;
l7=si0;
goto L23;
L24:;
si0=0U;
l24=si0;
si0=0U;
si1=l8;
si2=2147483646U;
si1&=si2;
si0-=si1;
l21=si0;
si0=l4;
si1=l8;
si2=4U;
si1<<=(si2&31);
si0+=si1;
l31=si0;
si0=0U;
l7=si0;
si0=0U;
l26=si0;
L25:;
{
si0=l31;
si1=l7;
si0+=si1;
l25=si0;
si1=16U;
si0+=si1;
si1=l4;
si2=l7;
si1+=si2;
l29=si1;
sj1=i64_load(&i->m0,(U64)si1);
l28=sj1;
si2=l26;
sj2=(U64)(si2);
sj3=1ULL;
sj2&=sj3;
sj1-=sj2;
si2=l14;
si3=l7;
si2+=si3;
l23=si2;
sj2=i64_load(&i->m0,(U64)si2);
l27=sj2;
sj1-=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l25;
si1=24U;
si0+=si1;
si1=l29;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
l32=sj1;
sj2=l28;
sj3=l27;
si2=sj2 <= sj3;
sj3=l28;
sj4=l27;
si3=sj3 < sj4;
si4=l26;
si5=1U;
si4&=si5;
si2=si4?si2:si3;
l26=si2;
sj2=(U64)(si2);
sj1-=sj2;
si2=l23;
si3=8U;
si2+=si3;
sj2=i64_load(&i->m0,(U64)si2);
l28=sj2;
sj1-=sj2;
i64_store(&i->m0,(U64)si0,sj1);
sj0=l32;
sj1=l28;
si0=sj0 <= sj1;
sj1=l32;
sj2=l28;
si1=sj1 < sj2;
si2=l26;
si0=si2?si0:si1;
l26=si0;
si0=l7;
si1=16U;
si0+=si1;
l7=si0;
si0=l21;
si1=l24;
si2=-2U;
si1+=si2;
l24=si1;
si0=si0 != si1;
if(si0){
goto L25;
}
}
si0=0U;
si1=l24;
si0-=si1;
l7=si0;
L23:;
si0=l33;
si0=!(si0);
if(si0){
goto L26;
}
si0=l16;
si1=l7;
si2=3U;
si1<<=(si2&31);
l7=si1;
si0+=si1;
si1=l4;
si2=l7;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
l28=sj1;
si2=l26;
sj2=(U64)(si2);
sj1-=sj2;
si2=l14;
si3=l7;
si2+=si3;
sj2=i64_load(&i->m0,(U64)si2);
l27=sj2;
sj1-=sj2;
i64_store(&i->m0,(U64)si0,sj1);
sj0=l28;
sj1=l27;
si0=sj0 <= sj1;
sj1=l28;
sj2=l27;
si1=sj1 < sj2;
si2=l26;
si0=si2?si0:si1;
l26=si0;
L26:;
si0=l26;
si1=1U;
si0&=si1;
si0=!(si0);
if(si0){
goto L16;
}
si0=l20;
sj0=(U64)(si0);
sj1=-1ULL;
sj0+=sj1;
l22=sj0;
L16:;
si0=l30;
sj1=l22;
i64_store(&i->m0,(U64)si0,sj1);
si0=l13;
si1=l1;
si0=si0 > si1;
if(si0){
goto L29;
}
si0=l6;
si1=l19;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l6;
si1=l10;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l19;
si1=l10;
si0=si0 != si1;
if(si0){
goto L28;
}
si0=l0;
si1=l12;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l14=si0;
si0=0U;
l25=si0;
si0=l11;
si1=l8;
si0=si0 == si1;
if(si0){
goto L30;
}
si0=0U;
l25=si0;
si0=l10;
l29=si0;
si0=l15;
l7=si0;
si0=l17;
l26=si0;
si0=l14;
l24=si0;
L31:;
{
si0=l7;
sj0=i64_load(&i->m0,(U64)si0);
l27=sj0;
si1=l26;
sj1=i64_load(&i->m0,(U64)si1);
sj0+=sj1;
l28=sj0;
sj1=l27;
si0=sj0 < sj1;
l23=si0;
si0=l25;
si1=255U;
si0&=si1;
if(si0){
goto L33;
}
si0=l23;
l25=si0;
goto L32;
L33:;
si0=l23;
sj1=l28;
sj2=1ULL;
sj1+=sj2;
l28=sj1;
si1=!(sj1);
si0|=si1;
l25=si0;
L32:;
si0=l24;
sj1=l28;
i64_store(&i->m0,(U64)si0,sj1);
si0=l7;
si1=8U;
si0+=si1;
l7=si0;
si0=l26;
si1=8U;
si0+=si1;
l26=si0;
si0=l24;
si1=8U;
si0+=si1;
l24=si0;
si0=l29;
si1=-1U;
si0+=si1;
l29=si0;
if(si0){
goto L31;
}
}
L30:;
si0=l25;
sj0=(U64)(si0);
l27=sj0;
si0=l8;
si1=l10;
si0=si0 == si1;
if(si0){
goto L27;
}
si0=l14;
si1=l10;
si2=3U;
si1<<=(si2&31);
l7=si1;
si0+=si1;
l29=si0;
si1=l17;
si2=l7;
si1+=si2;
l23=si1;
sj1=i64_load(&i->m0,(U64)si1);
l28=sj1;
sj2=l27;
sj1+=sj2;
l27=sj1;
i64_store(&i->m0,(U64)si0,sj1);
si0=0U;
l7=si0;
sj0=l27;
sj1=l28;
si0=sj0 >= sj1;
if(si0){
goto L34;
}
si0=l8;
si1=4U;
si0<<=(si1&31);
si1=l3;
si2=3U;
si1<<=(si2&31);
l7=si1;
si0+=si1;
si1=l4;
si0+=si1;
si1=40U;
si0+=si1;
l26=si0;
si0=l7;
si1=l8;
si2=3U;
si1<<=(si2&31);
si0-=si1;
si1=l0;
si0+=si1;
si1=16U;
si0+=si1;
l24=si0;
si0=l3;
si1=l8;
si2=3U;
si1*=si2;
si0-=si1;
si1=1U;
si0+=si1;
l25=si0;
si0=0U;
l7=si0;
sj0=1ULL;
l27=sj0;
L35:;
{
si0=l25;
si1=l7;
si0=si0 == si1;
if(si0){
goto L27;
}
si0=l24;
si1=l26;
sj1=i64_load(&i->m0,(U64)si1);
sj2=1ULL;
sj1+=sj2;
l28=sj1;
i64_store(&i->m0,(U64)si0,sj1);
si0=l26;
si1=8U;
si0+=si1;
l26=si0;
si0=l24;
si1=8U;
si0+=si1;
l24=si0;
si0=l7;
si1=-1U;
si0+=si1;
l7=si0;
sj0=l28;
si0=!(sj0);
if(si0){
goto L35;
}
}
si0=0U;
si1=l7;
si0-=si1;
l7=si0;
L34:;
si0=l29;
si1=l7;
si2=1U;
si1+=si2;
l7=si1;
si2=3U;
si1<<=(si2&31);
l26=si1;
si0+=si1;
si1=l23;
si2=l26;
si1+=si2;
si2=l8;
si3=l10;
si2-=si3;
si3=l7;
si2-=si3;
si3=3U;
si2<<=(si3&31);
si0=f15143(i,si0,si1,si2);
sj0=0ULL;
l27=sj0;
goto L27;
L29:;
si0=l13;
si1=l1;
si2=1205712U;
f597(i,si0,si1,si2);
UNREACHABLE;
L28:;
si0=l6;
si1=0U;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=0U;
si1=l6;
si2=16U;
si1+=si2;
si2=l6;
si3=20U;
si2+=si3;
si3=l6;
si4=24U;
si3+=si4;
si4=1202992U;
f1250(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L27:;
si0=l18;
sj0=i64_load(&i->m0,(U64)si0);
l34=sj0;
sj1=l27;
sj0+=sj1;
l28=sj0;
si0=!(sj0);
si0=!(si0);
if(si0){
goto L37;
}
sj0=0ULL;
l35=sj0;
goto L36;
L37:;
sj0=l28;
sj1=0ULL;
si0=(U64)((I64)sj0<(I64)sj1);
if(si0){
goto L38;
}
sj0=l28;
sj1=1ULL;
sj0<<=(sj1&63);
l35=sj0;
goto L36;
L38:;
si0=1204475U;
si1=43U;
si2=1205728U;
f604(i,si0,si1,si2);
UNREACHABLE;
L36:;
si0=l14;
si1=l8;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l3=si0;
si0=l8;
if(si0){
goto L40;
}
si0=0U;
l24=si0;
goto L39;
L40:;
si0=l8;
si1=-1U;
si0+=si1;
si1=536870911U;
si0&=si1;
l7=si0;
si1=1U;
si0+=si1;
l24=si0;
si1=3U;
si0&=si1;
l26=si0;
si0=l7;
si1=3U;
si0=si0 >= si1;
if(si0){
goto L42;
}
sj0=0ULL;
l28=sj0;
si0=l14;
l7=si0;
goto L41;
L42:;
si0=l24;
si1=1073741820U;
si0&=si1;
l24=si0;
sj0=0ULL;
l28=sj0;
si0=l14;
l7=si0;
L43:;
{
si0=l7;
si1=l7;
sj1=i64_load(&i->m0,(U64)si1);
l27=sj1;
sj2=1ULL;
sj1<<=(sj2&63);
sj2=l28;
sj1|=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l7;
si1=8U;
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
si0=l7;
si1=16U;
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
si0=l7;
si1=24U;
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
si0=l7;
si1=32U;
si0+=si1;
l7=si0;
sj0=l28;
sj1=63ULL;
sj0>>=(sj1&63);
l28=sj0;
si0=l24;
si1=-4U;
si0+=si1;
l24=si0;
if(si0){
goto L43;
}
}
L41:;
si0=l26;
si0=!(si0);
if(si0){
goto L44;
}
L45:;
{
si0=l7;
si1=l7;
sj1=i64_load(&i->m0,(U64)si1);
l27=sj1;
sj2=1ULL;
sj1<<=(sj2&63);
sj2=l28;
sj1|=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l7;
si1=8U;
si0+=si1;
l7=si0;
sj0=l27;
sj1=63ULL;
sj0>>=(sj1&63);
l28=sj0;
si0=l26;
si1=-1U;
si0+=si1;
l26=si0;
if(si0){
goto L45;
}
}
L44:;
si0=l8;
si1=1U;
si0&=si1;
l21=si0;
si0=l8;
si1=1U;
si0=si0 != si1;
if(si0){
goto L47;
}
si0=0U;
l24=si0;
si0=0U;
l25=si0;
goto L46;
L47:;
si0=l8;
si1=2147483646U;
si0&=si1;
l23=si0;
si0=l8;
si1=3U;
si0<<=(si1&31);
si1=l0;
si0+=si1;
si1=16U;
si0+=si1;
l7=si0;
si0=0U;
l24=si0;
si0=l2;
l26=si0;
si0=0U;
l25=si0;
L48:;
{
si0=l7;
si1=-8U;
si0+=si1;
l29=si0;
si1=l29;
sj1=i64_load(&i->m0,(U64)si1);
l27=sj1;
si2=l24;
sj2=(U64)(si2);
sj3=1ULL;
sj2&=sj3;
si3=l26;
sj3=i64_load(&i->m0,(U64)si3);
l32=sj3;
sj2+=sj3;
sj1-=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l7;
si1=l7;
sj1=i64_load(&i->m0,(U64)si1);
l36=sj1;
sj2=l27;
sj3=l32;
si2=sj2 <= sj3;
sj3=l27;
sj4=l32;
si3=sj3 < sj4;
si4=l24;
si5=1U;
si4&=si5;
si2=si4?si2:si3;
l24=si2;
sj2=(U64)(si2);
si3=l26;
si4=8U;
si3+=si4;
sj3=i64_load(&i->m0,(U64)si3);
l27=sj3;
sj2+=sj3;
sj1-=sj2;
i64_store(&i->m0,(U64)si0,sj1);
sj0=l36;
sj1=l27;
si0=sj0 <= sj1;
sj1=l36;
sj2=l27;
si1=sj1 < sj2;
si2=l24;
si0=si2?si0:si1;
l24=si0;
si0=l26;
si1=16U;
si0+=si1;
l26=si0;
si0=l7;
si1=16U;
si0+=si1;
l7=si0;
si0=l23;
si1=l25;
si2=2U;
si1+=si2;
l25=si1;
si0=si0 != si1;
if(si0){
goto L48;
}
}
L46:;
si0=l21;
si0=!(si0);
if(si0){
goto L49;
}
si0=l14;
si1=l25;
si2=3U;
si1<<=(si2&31);
l7=si1;
si0+=si1;
l26=si0;
si1=l26;
sj1=i64_load(&i->m0,(U64)si1);
l27=sj1;
si2=l24;
sj2=(U64)(si2);
si3=l2;
si4=l7;
si3+=si4;
sj3=i64_load(&i->m0,(U64)si3);
l32=sj3;
sj2+=sj3;
sj1-=sj2;
i64_store(&i->m0,(U64)si0,sj1);
sj0=l27;
sj1=l32;
si0=sj0 <= sj1;
sj1=l27;
sj2=l32;
si1=sj1 < sj2;
si2=l24;
si0=si2?si0:si1;
l24=si0;
L49:;
sj0=l28;
sj1=l35;
sj0|=sj1;
l35=sj0;
L39:;
si0=l3;
sj1=l35;
si2=l24;
sj2=(U64)(si2);
sj3=1ULL;
sj2&=sj3;
sj1-=sj2;
i64_store(&i->m0,(U64)si0,sj1);
sj0=l34;
sj1=2ULL;
si0=sj0 > sj1;
if(si0){
goto L56;
}
sj0=l22;
sj1=1ULL;
si0=sj0 > sj1;
if(si0){
goto L53;
}
si0=l5;
si1=l12;
si2=5U;
si1*=si2;
l7=si1;
si0=si0 < si1;
if(si0){
goto L55;
}
si0=l7;
si1=l12;
si2=l8;
si1+=si2;
l23=si1;
si0=si0 < si1;
if(si0){
goto L54;
}
si0=l8;
si1=2U;
si0+=si1;
l26=si0;
si1=l7;
si2=l23;
si1-=si2;
l19=si1;
si0=si0 > si1;
if(si0){
goto L52;
}
si0=l5;
si1=l7;
si0-=si1;
l21=si0;
si0=l4;
si1=l7;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l31=si0;
si0=l9;
si1=3U;
si0<<=(si1&31);
l7=si0;
si0=l4;
si1=l23;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l3=si0;
si1=8U;
si0+=si1;
l13=si0;
si1=l8;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l26=si0;
si0=l8;
si1=43U;
si0=si0 < si1;
if(si0){
goto L51;
}
si0=l8;
si1=390U;
si0=si0 < si1;
if(si0){
goto L57;
}
si0=l4;
si1=l9;
si2=l13;
si3=l8;
si4=l31;
si5=l21;
f1073(i,si0,si1,si2,si3,si4,si5);
goto L50;
L57:;
si0=l4;
si1=l9;
si2=l13;
si3=l8;
si4=l31;
si5=l21;
f1072(i,si0,si1,si2,si3,si4,si5);
goto L50;
L56:;
si0=1205956U;
si1=32U;
si2=1205988U;
f604(i,si0,si1,si2);
UNREACHABLE;
L55:;
si0=1204440U;
si1=35U;
si2=1205744U;
f604(i,si0,si1,si2);
UNREACHABLE;
L54:;
si0=1204440U;
si1=35U;
si2=1205760U;
f604(i,si0,si1,si2);
UNREACHABLE;
L53:;
si0=1205904U;
si1=33U;
si2=1205940U;
f604(i,si0,si1,si2);
UNREACHABLE;
L52:;
si0=l26;
si1=l19;
si2=1205776U;
f597(i,si0,si1,si2);
UNREACHABLE;
L51:;
si0=l4;
si1=l9;
si2=l13;
si3=l8;
f1071(i,si0,si1,si2,si3);
L50:;
si0=l4;
si1=l7;
si0+=si1;
l18=si0;
si0=l26;
sj0=i64_load(&i->m0,(U64)si0);
l22=sj0;
si0=!(sj0);
si0=!(si0);
if(si0){
goto L59;
}
sj0=0ULL;
l28=sj0;
goto L58;
L59:;
si0=l8;
if(si0){
goto L61;
}
sj0=0ULL;
l28=sj0;
goto L60;
L61:;
si0=l4;
si1=l8;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l20=si0;
si0=l8;
si1=1U;
si0&=si1;
l11=si0;
si0=l8;
si1=1U;
si0=si0 != si1;
if(si0){
goto L63;
}
sj0=0ULL;
l28=sj0;
si0=0U;
l7=si0;
sj0=0ULL;
l35=sj0;
goto L62;
L63:;
si0=0U;
l24=si0;
si0=0U;
si1=l8;
si2=2147483646U;
si1&=si2;
si0-=si1;
l29=si0;
si0=l8;
si1=4U;
si0<<=(si1&31);
si1=l4;
si0+=si1;
si1=24U;
si0+=si1;
l26=si0;
sj0=0ULL;
l35=sj0;
si0=l20;
l7=si0;
sj0=0ULL;
l28=sj0;
L64:;
{
si0=l7;
sj1=l28;
si2=l7;
sj2=i64_load(&i->m0,(U64)si2);
sj1+=sj2;
l27=sj1;
si2=l26;
si3=-8U;
si2+=si3;
sj2=i64_load(&i->m0,(U64)si2);
l32=sj2;
sj3=1ULL;
sj2<<=(sj3&63);
sj1+=sj2;
l36=sj1;
i64_store(&i->m0,(U64)si0,sj1);
si0=l7;
si1=8U;
si0+=si1;
l25=si0;
sj1=0ULL;
sj2=l27;
sj3=l28;
si2=sj2 < sj3;
sj2=(U64)(si2);
sj1+=sj2;
sj2=l32;
sj3=63ULL;
sj2>>=(sj3&63);
sj1+=sj2;
sj2=l36;
sj3=l27;
si2=sj2 < sj3;
sj2=(U64)(si2);
sj1+=sj2;
l27=sj1;
si2=l25;
sj2=i64_load(&i->m0,(U64)si2);
sj1+=sj2;
l28=sj1;
si2=l26;
sj2=i64_load(&i->m0,(U64)si2);
l32=sj2;
sj3=1ULL;
sj2<<=(sj3&63);
sj1+=sj2;
l36=sj1;
i64_store(&i->m0,(U64)si0,sj1);
sj0=l28;
sj1=l27;
si0=sj0 < sj1;
sj0=(U64)(si0);
sj1=l32;
sj2=63ULL;
sj1>>=(sj2&63);
sj0+=sj1;
sj1=l36;
sj2=l28;
si1=sj1 < sj2;
sj1=(U64)(si1);
sj0+=sj1;
l28=sj0;
si0=l7;
si1=16U;
si0+=si1;
l7=si0;
si0=l26;
si1=16U;
si0+=si1;
l26=si0;
si0=l29;
si1=l24;
si2=-2U;
si1+=si2;
l24=si1;
si0=si0 != si1;
if(si0){
goto L64;
}
}
si0=0U;
si1=l24;
si0-=si1;
l7=si0;
L62:;
si0=l11;
si0=!(si0);
if(si0){
goto L60;
}
si0=l20;
si1=l7;
si2=3U;
si1<<=(si2&31);
l7=si1;
si0+=si1;
l26=si0;
sj1=l28;
si2=l26;
sj2=i64_load(&i->m0,(U64)si2);
sj1+=sj2;
l27=sj1;
si2=l13;
si3=l7;
si2+=si3;
sj2=i64_load(&i->m0,(U64)si2);
l32=sj2;
sj3=1ULL;
sj2<<=(sj3&63);
sj1+=sj2;
l36=sj1;
i64_store(&i->m0,(U64)si0,sj1);
sj0=l35;
sj1=l27;
sj2=l28;
si1=sj1 < sj2;
sj1=(U64)(si1);
sj0+=sj1;
sj1=l32;
sj2=63ULL;
sj1>>=(sj2&63);
sj0+=sj1;
sj1=l36;
sj2=l27;
si1=sj1 < sj2;
sj1=(U64)(si1);
sj0+=sj1;
l28=sj0;
L60:;
sj0=l28;
sj1=l22;
sj0+=sj1;
l28=sj0;
L58:;
si0=l18;
sj1=l28;
i64_store(&i->m0,(U64)si0,sj1);
si0=l8;
si1=42U;
si0=si0 < si1;
if(si0){
goto L66;
}
si0=l8;
si1=389U;
si0=si0 < si1;
if(si0){
goto L67;
}
si0=l3;
si1=l19;
si2=l14;
si3=l12;
si4=l31;
si5=l21;
f1073(i,si0,si1,si2,si3,si4,si5);
goto L65;
L67:;
si0=l3;
si1=l19;
si2=l14;
si3=l12;
si4=l31;
si5=l21;
f1072(i,si0,si1,si2,si3,si4,si5);
goto L65;
L66:;
si0=l3;
si1=l19;
si2=l14;
si3=l12;
f1071(i,si0,si1,si2,si3);
L65:;
si0=l1;
si1=l8;
si2=2U;
si1<<=(si2&31);
l7=si1;
si0=si0 < si1;
if(si0){
goto L70;
}
si0=l1;
si1=l7;
si0-=si1;
l24=si0;
si0=l0;
si1=l7;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l26=si0;
si0=l10;
si1=43U;
si0=si0 < si1;
if(si0){
goto L69;
}
si0=l10;
si1=390U;
si0=si0 < si1;
if(si0){
goto L71;
}
si0=l26;
si1=l24;
si2=l15;
si3=l10;
si4=l31;
si5=l21;
f1073(i,si0,si1,si2,si3,si4,si5);
goto L68;
L71:;
si0=l26;
si1=l24;
si2=l15;
si3=l10;
si4=l31;
si5=l21;
f1072(i,si0,si1,si2,si3,si4,si5);
goto L68;
L70:;
si0=l7;
si1=l1;
si2=1205792U;
f593(i,si0,si1,si2);
UNREACHABLE;
L69:;
si0=l26;
si1=l24;
si2=l15;
si3=l10;
f1071(i,si0,si1,si2,si3);
L68:;
si0=l1;
si1=l7;
si0=si0 == si1;
if(si0){
goto L77;
}
si0=l5;
si1=l12;
si2=2U;
si1<<=(si2&31);
l7=si1;
si0=si0 < si1;
if(si0){
goto L75;
}
si0=l8;
si1=l5;
si2=l7;
si1-=si2;
l24=si1;
si0=si0 >= si1;
if(si0){
goto L74;
}
si0=l23;
si1=l1;
si2=l9;
si1-=si2;
l25=si1;
si0=si0 <= si1;
if(si0){
goto L76;
}
si0=l23;
si1=l25;
si2=1205856U;
f597(i,si0,si1,si2);
UNREACHABLE;
L77:;
si0=0U;
si1=0U;
si2=1205808U;
f594(i,si0,si1,si2);
UNREACHABLE;
L76:;
si0=l26;
sj0=i64_load(&i->m0,(U64)si0);
l22=sj0;
si0=l0;
si1=l9;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l29=si0;
si0=l4;
si1=l7;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l21=si0;
si1=l8;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l7=si0;
si0=l8;
si1=43U;
si0=si0 < si1;
if(si0){
goto L73;
}
si0=l24;
si1=l12;
si0-=si1;
l26=si0;
si0=l21;
si1=l12;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l24=si0;
si0=l8;
si1=390U;
si0=si0 >= si1;
if(si0){
goto L78;
}
si0=l29;
si1=l9;
si2=l21;
si3=l8;
si4=l24;
si5=l26;
f1072(i,si0,si1,si2,si3,si4,si5);
goto L72;
L78:;
si0=l29;
si1=l9;
si2=l21;
si3=l8;
si4=l24;
si5=l26;
f1073(i,si0,si1,si2,si3,si4,si5);
goto L72;
L75:;
si0=l7;
si1=l5;
si2=1205824U;
f593(i,si0,si1,si2);
UNREACHABLE;
L74:;
si0=1204440U;
si1=35U;
si2=1205840U;
f604(i,si0,si1,si2);
UNREACHABLE;
L73:;
si0=l29;
si1=l9;
si2=l21;
si3=l8;
f1071(i,si0,si1,si2,si3);
L72:;
si0=l29;
si1=l8;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l31=si0;
si0=l7;
sj0=i64_load(&i->m0,(U64)si0);
l28=sj0;
sj1=1ULL;
si0=sj0 > sj1;
if(si0){
goto L80;
}
sj0=l28;
si0=(U32)(sj0);
switch(si0){
case 0:
goto L79;
case 1:
goto L81;
default:
goto L79;
}
L81:;
si0=l8;
if(si0){
goto L82;
}
sj0=1ULL;
l28=sj0;
goto L79;
L82:;
si0=l8;
si1=1U;
si0&=si1;
l13=si0;
si0=l8;
si1=1U;
si0=si0 != si1;
if(si0){
goto L84;
}
sj0=0ULL;
l28=sj0;
si0=0U;
l7=si0;
sj0=0ULL;
l35=sj0;
goto L83;
L84:;
si0=0U;
l24=si0;
si0=0U;
si1=l8;
si2=2147483646U;
si1&=si2;
si0-=si1;
l14=si0;
si0=l8;
si1=5U;
si0<<=(si1&31);
si1=l4;
si0+=si1;
si1=40U;
si0+=si1;
l26=si0;
sj0=0ULL;
l35=sj0;
si0=l31;
l7=si0;
sj0=0ULL;
l28=sj0;
L85:;
{
si0=l7;
sj1=l28;
si2=l7;
sj2=i64_load(&i->m0,(U64)si2);
sj1+=sj2;
l27=sj1;
si2=l26;
si3=-8U;
si2+=si3;
sj2=i64_load(&i->m0,(U64)si2);
l32=sj2;
sj3=1ULL;
sj2<<=(sj3&63);
sj1+=sj2;
l36=sj1;
i64_store(&i->m0,(U64)si0,sj1);
si0=l7;
si1=8U;
si0+=si1;
l25=si0;
sj1=0ULL;
sj2=l27;
sj3=l28;
si2=sj2 < sj3;
sj2=(U64)(si2);
sj1+=sj2;
sj2=l32;
sj3=63ULL;
sj2>>=(sj3&63);
sj1+=sj2;
sj2=l36;
sj3=l27;
si2=sj2 < sj3;
sj2=(U64)(si2);
sj1+=sj2;
l27=sj1;
si2=l25;
sj2=i64_load(&i->m0,(U64)si2);
sj1+=sj2;
l28=sj1;
si2=l26;
sj2=i64_load(&i->m0,(U64)si2);
l32=sj2;
sj3=1ULL;
sj2<<=(sj3&63);
sj1+=sj2;
l36=sj1;
i64_store(&i->m0,(U64)si0,sj1);
sj0=l28;
sj1=l27;
si0=sj0 < sj1;
sj0=(U64)(si0);
sj1=l32;
sj2=63ULL;
sj1>>=(sj2&63);
sj0+=sj1;
sj1=l36;
sj2=l28;
si1=sj1 < sj2;
sj1=(U64)(si1);
sj0+=sj1;
l28=sj0;
si0=l7;
si1=16U;
si0+=si1;
l7=si0;
si0=l26;
si1=16U;
si0+=si1;
l26=si0;
si0=l14;
si1=l24;
si2=-2U;
si1+=si2;
l24=si1;
si0=si0 != si1;
if(si0){
goto L85;
}
}
si0=0U;
si1=l24;
si0-=si1;
l7=si0;
L83:;
si0=l13;
si0=!(si0);
if(si0){
goto L86;
}
si0=l31;
si1=l7;
si2=3U;
si1<<=(si2&31);
l7=si1;
si0+=si1;
l26=si0;
sj1=l28;
si2=l26;
sj2=i64_load(&i->m0,(U64)si2);
sj1+=sj2;
l27=sj1;
si2=l21;
si3=l7;
si2+=si3;
sj2=i64_load(&i->m0,(U64)si2);
l32=sj2;
sj3=1ULL;
sj2<<=(sj3&63);
sj1+=sj2;
l36=sj1;
i64_store(&i->m0,(U64)si0,sj1);
sj0=l35;
sj1=l27;
sj2=l28;
si1=sj1 < sj2;
sj1=(U64)(si1);
sj0+=sj1;
sj1=l32;
sj2=63ULL;
sj1>>=(sj2&63);
sj0+=sj1;
sj1=l36;
sj2=l27;
si1=sj1 < sj2;
sj1=(U64)(si1);
sj0+=sj1;
l28=sj0;
L86:;
sj0=l28;
sj1=1ULL;
sj0+=sj1;
l28=sj0;
goto L79;
L80:;
sj0=l28;
sj1=-1ULL;
si0=(U64)((I64)sj0<=(I64)sj1);
if(si0){
goto L87;
}
sj0=l28;
sj1=1ULL;
sj0<<=(sj1&63);
l35=sj0;
si0=l8;
if(si0){
goto L88;
}
sj0=0ULL;
sj1=l35;
sj0+=sj1;
l28=sj0;
goto L79;
L88:;
si0=l8;
si1=1U;
si0&=si1;
l13=si0;
si0=l8;
si1=1U;
si0=si0 != si1;
if(si0){
goto L90;
}
sj0=0ULL;
l28=sj0;
si0=0U;
l7=si0;
sj0=0ULL;
l34=sj0;
goto L89;
L90:;
si0=0U;
l24=si0;
si0=0U;
si1=l8;
si2=2147483646U;
si1&=si2;
si0-=si1;
l14=si0;
si0=l8;
si1=5U;
si0<<=(si1&31);
si1=l4;
si0+=si1;
si1=40U;
si0+=si1;
l26=si0;
sj0=0ULL;
l34=sj0;
si0=l31;
l7=si0;
sj0=0ULL;
l28=sj0;
L91:;
{
si0=l7;
sj1=l28;
si2=l7;
sj2=i64_load(&i->m0,(U64)si2);
sj1+=sj2;
l27=sj1;
si2=l26;
si3=-8U;
si2+=si3;
sj2=i64_load(&i->m0,(U64)si2);
l32=sj2;
sj3=2ULL;
sj2<<=(sj3&63);
sj1+=sj2;
l36=sj1;
i64_store(&i->m0,(U64)si0,sj1);
si0=l7;
si1=8U;
si0+=si1;
l25=si0;
sj1=0ULL;
sj2=l27;
sj3=l28;
si2=sj2 < sj3;
sj2=(U64)(si2);
sj1+=sj2;
sj2=l32;
sj3=62ULL;
sj2>>=(sj3&63);
sj1+=sj2;
sj2=l36;
sj3=l27;
si2=sj2 < sj3;
sj2=(U64)(si2);
sj1+=sj2;
l27=sj1;
si2=l25;
sj2=i64_load(&i->m0,(U64)si2);
sj1+=sj2;
l28=sj1;
si2=l26;
sj2=i64_load(&i->m0,(U64)si2);
l32=sj2;
sj3=2ULL;
sj2<<=(sj3&63);
sj1+=sj2;
l36=sj1;
i64_store(&i->m0,(U64)si0,sj1);
sj0=l28;
sj1=l27;
si0=sj0 < sj1;
sj0=(U64)(si0);
sj1=l32;
sj2=62ULL;
sj1>>=(sj2&63);
sj0+=sj1;
sj1=l36;
sj2=l28;
si1=sj1 < sj2;
sj1=(U64)(si1);
sj0+=sj1;
l28=sj0;
si0=l7;
si1=16U;
si0+=si1;
l7=si0;
si0=l26;
si1=16U;
si0+=si1;
l26=si0;
si0=l14;
si1=l24;
si2=-2U;
si1+=si2;
l24=si1;
si0=si0 != si1;
if(si0){
goto L91;
}
}
si0=0U;
si1=l24;
si0-=si1;
l7=si0;
L89:;
si0=l13;
si0=!(si0);
if(si0){
goto L92;
}
si0=l31;
si1=l7;
si2=3U;
si1<<=(si2&31);
l7=si1;
si0+=si1;
l26=si0;
sj1=l28;
si2=l26;
sj2=i64_load(&i->m0,(U64)si2);
sj1+=sj2;
l27=sj1;
si2=l21;
si3=l7;
si2+=si3;
sj2=i64_load(&i->m0,(U64)si2);
l32=sj2;
sj3=2ULL;
sj2<<=(sj3&63);
sj1+=sj2;
l36=sj1;
i64_store(&i->m0,(U64)si0,sj1);
sj0=l34;
sj1=l27;
sj2=l28;
si1=sj1 < sj2;
sj1=(U64)(si1);
sj0+=sj1;
sj1=l32;
sj2=62ULL;
sj1>>=(sj2&63);
sj0+=sj1;
sj1=l36;
sj2=l27;
si1=sj1 < sj2;
sj1=(U64)(si1);
sj0+=sj1;
l28=sj0;
L92:;
sj0=l28;
sj1=l35;
sj0+=sj1;
l28=sj0;
goto L79;
L87:;
si0=1204475U;
si1=43U;
si2=1205872U;
f604(i,si0,si1,si2);
UNREACHABLE;
L79:;
si0=l29;
si1=l9;
si2=3U;
si1<<=(si2&31);
si0+=si1;
sj1=l28;
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=l23;
si0-=si1;
l26=si0;
si1=l8;
si2=3U;
si1*=si2;
si2=4U;
si1+=si2;
l7=si1;
si0=si0 < si1;
if(si0){
goto L95;
}
si0=l8;
si1=43U;
si0=si0 < si1;
if(si0){
goto L94;
}
si0=l26;
si1=l7;
si0-=si1;
l26=si0;
si0=l3;
si1=l7;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l24=si0;
si0=l8;
si1=390U;
si0=si0 < si1;
if(si0){
goto L96;
}
si0=l0;
si1=l1;
si2=l2;
si3=l8;
si4=l24;
si5=l26;
f1073(i,si0,si1,si2,si3,si4,si5);
goto L93;
L96:;
si0=l0;
si1=l1;
si2=l2;
si3=l8;
si4=l24;
si5=l26;
f1072(i,si0,si1,si2,si3,si4,si5);
goto L93;
L95:;
si0=1204440U;
si1=35U;
si2=1205888U;
f604(i,si0,si1,si2);
UNREACHABLE;
L94:;
si0=l0;
si1=l1;
si2=l2;
si3=l8;
f1071(i,si0,si1,si2,si3);
L93:;
si0=l0;
si1=l1;
si2=l3;
si3=l7;
si4=l4;
si5=l23;
si6=l8;
si7=l10;
si8=1U;
si7<<=(si8&31);
si8=0U;
sj9=l22;
f1151(i,si0,si1,si2,si3,si4,si5,si6,si7,si8,sj9);
si0=l6;
si1=48U;
si0+=si1;
i->g0=si0;
L0:;
}

void f1074(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4,U32 l5) {
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
U32 si0,si1,si2,si3,si4,si5,si6,si7,si8,si9,si10,si11,si12,si13,si14;
U64 sj6,sj7,sj8;
si0=l3;
si1=l3;
si2=3U;
si3=3U;
si1=f1011(i,si1,si2,si3);
l6=si1;
si2=7U;
si1*=si2;
l7=si1;
si0=si0 <= si1;
if(si0){
goto L14;
}
si0=l3;
si1=l7;
si0-=si1;
l7=si0;
si1=l6;
si0=si0 > si1;
if(si0){
goto L13;
}
si0=l7;
si1=1U;
si0<<=(si1&31);
l8=si0;
si1=4U;
si0=si0 < si1;
if(si0){
goto L15;
}
si0=l1;
si1=l6;
si2=3U;
si1*=si2;
l9=si1;
si0=si0 < si1;
if(si0){
goto L12;
}
si0=l1;
si1=l9;
si0-=si1;
l7=si0;
si1=l6;
si2=2U;
si1<<=(si2&31);
l10=si1;
si0=si0 < si1;
if(si0){
goto L11;
}
si0=l7;
si1=l10;
si0-=si1;
l7=si0;
si1=l10;
si0=si0 < si1;
if(si0){
goto L10;
}
si0=l7;
si1=l10;
si0-=si1;
l11=si0;
si1=l6;
si2=1U;
si1+=si2;
l7=si1;
si0=si0 < si1;
if(si0){
goto L9;
}
si0=l11;
si1=l7;
si0-=si1;
l12=si0;
si1=l7;
si0=si0 < si1;
if(si0){
goto L8;
}
si0=l7;
si1=l12;
si2=l7;
si1-=si2;
si0=si0 > si1;
if(si0){
goto L7;
}
si0=l7;
si1=l9;
si0=si0 > si1;
if(si0){
goto L6;
}
si0=l0;
si1=l9;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l13=si0;
si1=l10;
si2=3U;
si1<<=(si2&31);
l12=si1;
si0+=si1;
l14=si0;
si1=l12;
si0+=si1;
l15=si0;
si1=l7;
si2=3U;
si1<<=(si2&31);
l12=si1;
si0+=si1;
si1=l12;
si0+=si1;
l16=si0;
si1=l7;
si2=l15;
si3=l7;
si4=7U;
si5=l2;
si6=l3;
si7=l6;
sj8=3ULL;
si9=l0;
si10=l7;
si0=f1022(i,si0,si1,si2,si3,si4,si5,si6,si7,sj8,si9,si10);
si0=l5;
si1=l7;
si2=l6;
si1+=si2;
l17=si1;
si2=l6;
si1+=si2;
l12=si1;
si2=1U;
si1<<=(si2&31);
l18=si1;
si0=si0 < si1;
if(si0){
goto L5;
}
si0=l5;
si1=l18;
si0-=si1;
l5=si0;
si1=l12;
si0=si0 < si1;
if(si0){
goto L4;
}
si0=l5;
si1=l12;
si0-=si1;
l19=si0;
si1=l12;
si0=si0 < si1;
if(si0){
goto L3;
}
si0=l19;
si1=l12;
si0-=si1;
l5=si0;
si0=l4;
si1=l18;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l20=si0;
si1=l12;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l21=si0;
si1=l12;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l22=si0;
si0=l7;
si1=390U;
si0=si0 < si1;
if(si0){
goto L2;
}
si0=l7;
si1=1090U;
si0=si0 >= si1;
if(si0){
goto L16;
}
si0=l0;
si1=l9;
si2=l15;
si3=l7;
si4=l22;
si5=l5;
f1073(i,si0,si1,si2,si3,si4,si5);
si0=l4;
si1=l18;
si2=l16;
si3=l7;
si4=l22;
si5=l5;
f1073(i,si0,si1,si2,si3,si4,si5);
goto L1;
L16:;
si0=l0;
si1=l9;
si2=l15;
si3=l7;
si4=l22;
si5=l5;
f1074(i,si0,si1,si2,si3,si4,si5);
si0=l4;
si1=l18;
si2=l16;
si3=l7;
si4=l22;
si5=l5;
f1074(i,si0,si1,si2,si3,si4,si5);
goto L1;
L15:;
si0=1206252U;
si1=28U;
si2=1206280U;
f604(i,si0,si1,si2);
UNREACHABLE;
L14:;
si0=1206312U;
si1=32U;
si2=1206344U;
f604(i,si0,si1,si2);
UNREACHABLE;
L13:;
si0=1206004U;
si1=24U;
si2=1206296U;
f604(i,si0,si1,si2);
UNREACHABLE;
L12:;
si0=1204440U;
si1=35U;
si2=1206044U;
f604(i,si0,si1,si2);
UNREACHABLE;
L11:;
si0=1204440U;
si1=35U;
si2=1206060U;
f604(i,si0,si1,si2);
UNREACHABLE;
L10:;
si0=1204440U;
si1=35U;
si2=1206060U;
f604(i,si0,si1,si2);
UNREACHABLE;
L9:;
si0=1204440U;
si1=35U;
si2=1206076U;
f604(i,si0,si1,si2);
UNREACHABLE;
L8:;
si0=1204440U;
si1=35U;
si2=1206076U;
f604(i,si0,si1,si2);
UNREACHABLE;
L7:;
si0=1204440U;
si1=35U;
si2=1206076U;
f604(i,si0,si1,si2);
UNREACHABLE;
L6:;
si0=l7;
si1=l9;
si2=1206092U;
f597(i,si0,si1,si2);
UNREACHABLE;
L5:;
si0=1204440U;
si1=35U;
si2=1206108U;
f604(i,si0,si1,si2);
UNREACHABLE;
L4:;
si0=1204440U;
si1=35U;
si2=1206124U;
f604(i,si0,si1,si2);
UNREACHABLE;
L3:;
si0=1204440U;
si1=35U;
si2=1206140U;
f604(i,si0,si1,si2);
UNREACHABLE;
L2:;
si0=l0;
si1=l9;
si2=l15;
si3=l7;
si4=l22;
si5=l5;
f1072(i,si0,si1,si2,si3,si4,si5);
si0=l4;
si1=l18;
si2=l16;
si3=l7;
si4=l22;
si5=l5;
f1072(i,si0,si1,si2,si3,si4,si5);
L1:;
si0=l17;
si1=l9;
si0=si0 > si1;
if(si0){
goto L20;
}
si0=l4;
si1=l18;
si2=l0;
si3=l17;
si4=0U;
si5=l6;
sj6=3ULL;
sj7=0ULL;
f1191(i,si0,si1,si2,si3,si4,si5,sj6,sj7);
si0=l16;
si1=l7;
si2=l15;
si3=l7;
si4=7U;
si5=l2;
si6=l3;
si7=l6;
sj8=2ULL;
si9=l0;
si10=l7;
si0=f1022(i,si0,si1,si2,si3,si4,si5,si6,si7,sj8,si9,si10);
si0=l7;
si1=390U;
si0=si0 < si1;
if(si0){
goto L23;
}
si0=l7;
si1=1089U;
si0=si0 > si1;
if(si0){
goto L22;
}
si0=l0;
si1=l9;
si2=l15;
si3=l7;
si4=l22;
si5=l5;
f1073(i,si0,si1,si2,si3,si4,si5);
si0=l12;
si1=0U;
si0=(U32)((I32)si0<(I32)si1);
if(si0){
goto L18;
}
si0=l4;
si1=l12;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l18=si0;
si1=l12;
si2=l16;
si3=l7;
si4=l22;
si5=l5;
f1073(i,si0,si1,si2,si3,si4,si5);
goto L21;
L23:;
si0=l0;
si1=l9;
si2=l15;
si3=l7;
si4=l22;
si5=l5;
f1072(i,si0,si1,si2,si3,si4,si5);
si0=l12;
si1=0U;
si0=(U32)((I32)si0<(I32)si1);
if(si0){
goto L18;
}
si0=l4;
si1=l12;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l18=si0;
si1=l12;
si2=l16;
si3=l7;
si4=l22;
si5=l5;
f1072(i,si0,si1,si2,si3,si4,si5);
goto L21;
L22:;
si0=l0;
si1=l9;
si2=l15;
si3=l7;
si4=l22;
si5=l5;
f1074(i,si0,si1,si2,si3,si4,si5);
si0=l12;
si1=0U;
si0=(U32)((I32)si0<(I32)si1);
if(si0){
goto L18;
}
si0=l4;
si1=l12;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l18=si0;
si1=l12;
si2=l16;
si3=l7;
si4=l22;
si5=l5;
f1074(i,si0,si1,si2,si3,si4,si5);
L21:;
si0=l18;
si1=l12;
si2=l0;
si3=l17;
si4=0U;
si5=l6;
sj6=2ULL;
sj7=0ULL;
f1191(i,si0,si1,si2,si3,si4,si5,sj6,sj7);
si0=l16;
si1=l7;
si2=l15;
si3=l7;
si4=7U;
si5=l2;
si6=l3;
si7=l6;
si8=l0;
si9=l7;
si0=f1019(i,si0,si1,si2,si3,si4,si5,si6,si7,si8,si9);
si0=l7;
si1=390U;
si0=si0 < si1;
if(si0){
goto L19;
}
si0=l7;
si1=1090U;
si0=si0 >= si1;
if(si0){
goto L24;
}
si0=l0;
si1=l9;
si2=l15;
si3=l7;
si4=l22;
si5=l5;
f1073(i,si0,si1,si2,si3,si4,si5);
si0=l20;
si1=l12;
si2=l16;
si3=l7;
si4=l22;
si5=l5;
f1073(i,si0,si1,si2,si3,si4,si5);
goto L17;
L24:;
si0=l0;
si1=l9;
si2=l15;
si3=l7;
si4=l22;
si5=l5;
f1074(i,si0,si1,si2,si3,si4,si5);
si0=l20;
si1=l12;
si2=l16;
si3=l7;
si4=l22;
si5=l5;
f1074(i,si0,si1,si2,si3,si4,si5);
goto L17;
L20:;
si0=l17;
si1=l9;
si2=1206156U;
f597(i,si0,si1,si2);
UNREACHABLE;
L19:;
si0=l0;
si1=l9;
si2=l15;
si3=l7;
si4=l22;
si5=l5;
f1072(i,si0,si1,si2,si3,si4,si5);
si0=l20;
si1=l12;
si2=l16;
si3=l7;
si4=l22;
si5=l5;
f1072(i,si0,si1,si2,si3,si4,si5);
goto L17;
L18:;
si0=1204440U;
si1=35U;
si2=1206172U;
f604(i,si0,si1,si2);
UNREACHABLE;
L17:;
si0=l20;
si1=l12;
si2=l0;
si3=l17;
si4=0U;
si5=l6;
sj6=1ULL;
sj7=2ULL;
f1191(i,si0,si1,si2,si3,si4,si5,sj6,sj7);
si0=l16;
si1=l7;
si2=l15;
si3=l7;
si4=7U;
si5=l2;
si6=l3;
si7=l6;
sj8=3ULL;
si9=l0;
si10=l7;
si0=f1020(i,si0,si1,si2,si3,si4,si5,si6,si7,sj8,si9,si10);
si0=l7;
si1=390U;
si0=si0 < si1;
if(si0){
goto L26;
}
si0=l7;
si1=1090U;
si0=si0 >= si1;
if(si0){
goto L27;
}
si0=l0;
si1=l9;
si2=l15;
si3=l7;
si4=l22;
si5=l5;
f1073(i,si0,si1,si2,si3,si4,si5);
si0=l21;
si1=l12;
si2=l16;
si3=l7;
si4=l22;
si5=l5;
f1073(i,si0,si1,si2,si3,si4,si5);
goto L25;
L27:;
si0=l0;
si1=l9;
si2=l15;
si3=l7;
si4=l22;
si5=l5;
f1074(i,si0,si1,si2,si3,si4,si5);
si0=l21;
si1=l12;
si2=l16;
si3=l7;
si4=l22;
si5=l5;
f1074(i,si0,si1,si2,si3,si4,si5);
goto L25;
L26:;
si0=l0;
si1=l9;
si2=l15;
si3=l7;
si4=l22;
si5=l5;
f1072(i,si0,si1,si2,si3,si4,si5);
si0=l21;
si1=l12;
si2=l16;
si3=l7;
si4=l22;
si5=l5;
f1072(i,si0,si1,si2,si3,si4,si5);
L25:;
si0=l21;
si1=l19;
si2=l0;
si3=l17;
si4=0U;
si5=l6;
sj6=3ULL;
sj7=6ULL;
f1191(i,si0,si1,si2,si3,si4,si5,sj6,sj7);
si0=l16;
si1=l7;
si2=l15;
si3=l7;
si4=7U;
si5=l2;
si6=l3;
si7=l6;
sj8=1ULL;
si9=l0;
si10=l7;
si0=f1022(i,si0,si1,si2,si3,si4,si5,si6,si7,sj8,si9,si10);
si0=l7;
si1=390U;
si0=si0 < si1;
if(si0){
goto L29;
}
si0=l7;
si1=1090U;
si0=si0 >= si1;
if(si0){
goto L30;
}
si0=l0;
si1=l9;
si2=l15;
si3=l7;
si4=l22;
si5=l5;
f1073(i,si0,si1,si2,si3,si4,si5);
si0=l13;
si1=l10;
si2=l16;
si3=l7;
si4=l22;
si5=l5;
f1073(i,si0,si1,si2,si3,si4,si5);
goto L28;
L30:;
si0=l0;
si1=l9;
si2=l15;
si3=l7;
si4=l22;
si5=l5;
f1074(i,si0,si1,si2,si3,si4,si5);
si0=l13;
si1=l10;
si2=l16;
si3=l7;
si4=l22;
si5=l5;
f1074(i,si0,si1,si2,si3,si4,si5);
goto L28;
L29:;
si0=l0;
si1=l9;
si2=l15;
si3=l7;
si4=l22;
si5=l5;
f1072(i,si0,si1,si2,si3,si4,si5);
si0=l13;
si1=l10;
si2=l16;
si3=l7;
si4=l22;
si5=l5;
f1072(i,si0,si1,si2,si3,si4,si5);
L28:;
si0=l13;
si1=l10;
si2=l0;
si3=l17;
si4=0U;
si5=l6;
sj6=1ULL;
sj7=0ULL;
f1191(i,si0,si1,si2,si3,si4,si5,sj6,sj7);
si0=l16;
si1=l7;
si2=l15;
si3=l7;
si4=7U;
si5=l2;
si6=l3;
si7=l6;
si8=l0;
si9=l7;
si0=f1018(i,si0,si1,si2,si3,si4,si5,si6,si7,si8,si9);
si0=l7;
si1=390U;
si0=si0 < si1;
if(si0){
goto L32;
}
si0=l7;
si1=1090U;
si0=si0 >= si1;
if(si0){
goto L33;
}
si0=l0;
si1=l9;
si2=l15;
si3=l7;
si4=l22;
si5=l5;
f1073(i,si0,si1,si2,si3,si4,si5);
si0=l14;
si1=l10;
si2=l16;
si3=l7;
si4=l22;
si5=l5;
f1073(i,si0,si1,si2,si3,si4,si5);
goto L31;
L33:;
si0=l0;
si1=l9;
si2=l15;
si3=l7;
si4=l22;
si5=l5;
f1074(i,si0,si1,si2,si3,si4,si5);
si0=l14;
si1=l10;
si2=l16;
si3=l7;
si4=l22;
si5=l5;
f1074(i,si0,si1,si2,si3,si4,si5);
goto L31;
L32:;
si0=l0;
si1=l9;
si2=l15;
si3=l7;
si4=l22;
si5=l5;
f1072(i,si0,si1,si2,si3,si4,si5);
si0=l14;
si1=l10;
si2=l16;
si3=l7;
si4=l22;
si5=l5;
f1072(i,si0,si1,si2,si3,si4,si5);
L31:;
si0=l14;
si1=l10;
si2=l0;
si3=l17;
si4=0U;
si5=l6;
sj6=0ULL;
sj7=0ULL;
f1191(i,si0,si1,si2,si3,si4,si5,sj6,sj7);
si0=l16;
si1=l7;
si2=l15;
si3=l7;
si4=7U;
si5=l2;
si6=l3;
si7=l6;
sj8=2ULL;
si9=l0;
si10=l7;
si0=f1020(i,si0,si1,si2,si3,si4,si5,si6,si7,sj8,si9,si10);
si0=l7;
si1=390U;
si0=si0 < si1;
if(si0){
goto L35;
}
si0=l7;
si1=1090U;
si0=si0 >= si1;
if(si0){
goto L36;
}
si0=l0;
si1=l9;
si2=l15;
si3=l7;
si4=l22;
si5=l5;
f1073(i,si0,si1,si2,si3,si4,si5);
goto L34;
L36:;
si0=l0;
si1=l9;
si2=l15;
si3=l7;
si4=l22;
si5=l5;
f1074(i,si0,si1,si2,si3,si4,si5);
goto L34;
L35:;
si0=l0;
si1=l9;
si2=l15;
si3=l7;
si4=l22;
si5=l5;
f1072(i,si0,si1,si2,si3,si4,si5);
L34:;
si0=l11;
si1=l7;
si2=1U;
si1<<=(si2&31);
l16=si1;
si0=si0 < si1;
if(si0){
goto L40;
}
si0=l7;
si1=l11;
si2=l16;
si1-=si2;
l10=si1;
si0=si0 > si1;
if(si0){
goto L39;
}
si0=l15;
si1=l16;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l10=si0;
si0=l7;
si1=390U;
si0=si0 < si1;
if(si0){
goto L38;
}
si0=l7;
si1=1090U;
si0=si0 >= si1;
if(si0){
goto L41;
}
si0=l15;
si1=l16;
si2=l10;
si3=l7;
si4=l22;
si5=l5;
f1073(i,si0,si1,si2,si3,si4,si5);
goto L37;
L41:;
si0=l15;
si1=l16;
si2=l10;
si3=l7;
si4=l22;
si5=l5;
f1074(i,si0,si1,si2,si3,si4,si5);
goto L37;
L40:;
si0=1204440U;
si1=35U;
si2=1206188U;
f604(i,si0,si1,si2);
UNREACHABLE;
L39:;
si0=l7;
si1=l10;
si2=1206204U;
f597(i,si0,si1,si2);
UNREACHABLE;
L38:;
si0=l15;
si1=l16;
si2=l10;
si3=l7;
si4=l22;
si5=l5;
f1072(i,si0,si1,si2,si3,si4,si5);
L37:;
si0=l15;
si1=l11;
si2=l0;
si3=l17;
si4=0U;
si5=l6;
sj6=2ULL;
sj7=4ULL;
f1191(i,si0,si1,si2,si3,si4,si5,sj6,sj7);
si0=l6;
si1=l3;
si0=si0 > si1;
if(si0){
goto L44;
}
si0=l6;
si1=390U;
si0=si0 < si1;
if(si0){
goto L43;
}
si0=l6;
si1=1090U;
si0=si0 >= si1;
if(si0){
goto L45;
}
si0=l0;
si1=l9;
si2=l2;
si3=l6;
si4=l22;
si5=l5;
f1073(i,si0,si1,si2,si3,si4,si5);
goto L42;
L45:;
si0=l0;
si1=l9;
si2=l2;
si3=l6;
si4=l22;
si5=l5;
f1074(i,si0,si1,si2,si3,si4,si5);
goto L42;
L44:;
si0=l6;
si1=l3;
si2=1206220U;
f597(i,si0,si1,si2);
UNREACHABLE;
L43:;
si0=l0;
si1=l9;
si2=l2;
si3=l6;
si4=l22;
si5=l5;
f1072(i,si0,si1,si2,si3,si4,si5);
L42:;
si0=l12;
si1=l5;
si0=si0 > si1;
if(si0){
goto L46;
}
si0=l0;
si1=l1;
si2=l21;
si3=l12;
si4=l20;
si5=l12;
si6=l18;
si7=l12;
si8=l4;
si9=l12;
si10=l6;
si11=l8;
si12=0U;
si13=l22;
si14=l12;
f1159(i,si0,si1,si2,si3,si4,si5,si6,si7,si8,si9,si10,si11,si12,si13,si14);
goto L0;
L46:;
si0=l12;
si1=l5;
si2=1206236U;
f597(i,si0,si1,si2);
UNREACHABLE;
L0:;
}

U32 f1075(rustpythonInstance*i,U32 l0) {
U32 l1=0;
U32 si0,si1;
si0=0U;
l1=si0;
si0=l0;
si1=43U;
si0=si0 < si1;
if(si0){
goto L2;
}
si0=l0;
si1=390U;
si0=si0 < si1;
if(si0){
goto L1;
}
si0=l0;
si1=1090U;
si0=si0 >= si1;
if(si0){
goto L3;
}
si0=l0;
si1=3U;
si0*=si1;
si1=64U;
si0+=si1;
goto L0;
L3:;
si0=l0;
si1=11700U;
si0=si0 < si1;
if(si0){
goto L4;
}
si0=l0;
si1=50U;
si0=f1007(i,si0,si1);
goto L0;
L4:;
si0=l0;
si1=15U;
si0*=si1;
si1=3U;
si0>>=(si1&31);
si1=505U;
si0+=si1;
l1=si0;
L2:;
si0=l1;
goto L0;
L1:;
si0=l0;
si1=1U;
si0<<=(si1&31);
si1=128U;
si0+=si1;
L0:;
return si0;
}

void f1076(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4,U32 l5) {
U32 si0,si1,si2,si3,si4,si5,si6;
si0=l3;
si0=!(si0);
if(si0){
goto L3;
}
si0=l3;
si1=43U;
si0=si0 < si1;
if(si0){
goto L2;
}
si0=l3;
si1=390U;
si0=si0 < si1;
if(si0){
goto L1;
}
si0=l3;
si1=1090U;
si0=si0 >= si1;
if(si0){
goto L4;
}
si0=l0;
si1=l1;
si2=l2;
si3=l3;
si4=l4;
si5=l5;
f1073(i,si0,si1,si2,si3,si4,si5);
goto L0;
L4:;
si0=l3;
si1=11700U;
si0=si0 < si1;
if(si0){
goto L5;
}
si0=l0;
si1=l1;
si2=l2;
si3=l3;
si4=50U;
si5=l4;
si6=l5;
f1008(i,si0,si1,si2,si3,si4,si5,si6);
goto L0;
L5:;
si0=l0;
si1=l1;
si2=l2;
si3=l3;
si4=l4;
si5=l5;
f1074(i,si0,si1,si2,si3,si4,si5);
goto L0;
L3:;
si0=1206360U;
si1=24U;
si2=1206384U;
f604(i,si0,si1,si2);
UNREACHABLE;
L2:;
si0=l0;
si1=l1;
si2=l2;
si3=l3;
f1071(i,si0,si1,si2,si3);
goto L0;
L1:;
si0=l0;
si1=l1;
si2=l2;
si3=l3;
si4=l4;
si5=l5;
f1072(i,si0,si1,si2,si3,si4,si5);
L0:;
}

void f1077(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 l8=0;
U32 si0,si1,si2,si3,si4,si5;
si0=1U;
l3=si0;
si0=8U;
l4=si0;
si0=8U;
l5=si0;
si0=l2;
si1=1U;
si0<<=(si1&31);
l6=si0;
si0=!(si0);
if(si0){
goto L5;
}
si0=l6;
si1=268435455U;
si0=si0 > si1;
if(si0){
goto L4;
}
si0=l2;
si1=4U;
si0<<=(si1&31);
l7=si0;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L4;
}
si0=8U;
l5=si0;
si0=l7;
si0=!(si0);
if(si0){
goto L5;
}
si0=l7;
si1=1U;
si0=f15026(i,si0,si1);
l5=si0;
si0=!(si0);
if(si0){
goto L3;
}
L5:;
si0=l2;
si1=43U;
si0=si0 >= si1;
if(si0){
goto L6;
}
si0=0U;
l7=si0;
goto L1;
L6:;
si0=l2;
si1=390U;
si0=si0 < si1;
if(si0){
goto L8;
}
si0=l2;
si1=1090U;
si0=si0 >= si1;
if(si0){
goto L11;
}
si0=l2;
si1=3U;
si0*=si1;
si1=64U;
si0+=si1;
l7=si0;
goto L10;
L11:;
si0=l2;
si1=11699U;
si0=si0 > si1;
if(si0){
goto L9;
}
si0=l2;
si1=15U;
si0*=si1;
si1=3U;
si0>>=(si1&31);
si1=505U;
si0+=si1;
l7=si0;
L10:;
si0=l7;
si1=3U;
si0<<=(si1&31);
l8=si0;
goto L2;
L9:;
si0=l2;
si1=50U;
si0=f1007(i,si0,si1);
l7=si0;
if(si0){
goto L7;
}
si0=0U;
l7=si0;
goto L1;
L8:;
si0=l6;
si1=128U;
si0+=si1;
l7=si0;
L7:;
si0=l7;
si1=268435455U;
si0=si0 > si1;
if(si0){
goto L4;
}
si0=l7;
si1=3U;
si0<<=(si1&31);
l8=si0;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L4;
}
si0=l8;
if(si0){
goto L2;
}
si0=0U;
l3=si0;
goto L1;
L4:;
f53(i);
UNREACHABLE;
L3:;
si0=8U;
si1=l7;
f52(i,si0,si1);
UNREACHABLE;
L2:;
si0=0U;
l3=si0;
si0=l8;
si1=1U;
si0=f15026(i,si0,si1);
l4=si0;
if(si0){
goto L1;
}
si0=8U;
si1=l8;
f52(i,si0,si1);
UNREACHABLE;
L1:;
si0=l5;
si1=l6;
si2=l1;
si3=l2;
si4=l4;
si5=l7;
f1076(i,si0,si1,si2,si3,si4,si5);
si0=l0;
si1=l6;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l0;
si1=l6;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l5;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
if(si0){
goto L12;
}
si0=l4;
f15024(i,si0);
L12:;
L0:;
}

void f1078(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4) {
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
U64 sj1,sj2;
si0=i->g0;
si1=16U;
si0-=si1;
l5=si0;
i->g0=si0;
si0=l2;
si1=l4;
si0=si0 >= si1;
if(si0){
goto L5;
}
si0=l2;
si1=3U;
si0<<=(si1&31);
l6=si0;
si0=l2;
if(si0){
goto L7;
}
si0=8U;
l7=si0;
goto L6;
L7:;
si0=l2;
si1=268435455U;
si0=si0 > si1;
if(si0){
goto L2;
}
si0=l6;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L2;
}
si0=0U;
l8=si0;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=l6;
si0=f15022(i,si0);
l7=si0;
si0=!(si0);
if(si0){
goto L3;
}
si0=l2;
si1=1U;
si0&=si1;
l9=si0;
si0=l2;
si1=1U;
si0=si0 == si1;
if(si0){
goto L8;
}
si0=l2;
si1=-2U;
si0&=si1;
l10=si0;
si0=0U;
l8=si0;
si0=l7;
l11=si0;
si0=l3;
l12=si0;
si0=l1;
l13=si0;
L9:;
{
si0=l11;
si1=l12;
sj1=i64_load(&i->m0,(U64)si1);
si2=l13;
sj2=i64_load(&i->m0,(U64)si2);
sj1^=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l11;
si1=8U;
si0+=si1;
si1=l12;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
si2=l13;
si3=8U;
si2+=si3;
sj2=i64_load(&i->m0,(U64)si2);
sj1^=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l11;
si1=16U;
si0+=si1;
l11=si0;
si0=l12;
si1=16U;
si0+=si1;
l12=si0;
si0=l13;
si1=16U;
si0+=si1;
l13=si0;
si0=l10;
si1=l8;
si2=2U;
si1+=si2;
l8=si1;
si0=si0 != si1;
if(si0){
goto L9;
}
}
L8:;
si0=l9;
si0=!(si0);
if(si0){
goto L6;
}
si0=l7;
si1=l8;
si2=3U;
si1<<=(si2&31);
l11=si1;
si0+=si1;
si1=l3;
si2=l11;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
si2=l1;
si3=l11;
si2+=si3;
sj2=i64_load(&i->m0,(U64)si2);
sj1^=sj2;
i64_store(&i->m0,(U64)si0,sj1);
L6:;
si0=l3;
si1=l6;
si0+=si1;
l12=si0;
si0=l5;
si1=l2;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l5;
si1=l2;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l5;
si1=l7;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l4;
si1=l2;
si0-=si1;
l11=si0;
si0=l4;
si1=l2;
si0=si0 == si1;
if(si0){
goto L10;
}
si0=l5;
si1=4U;
si0+=si1;
si1=l2;
si2=l11;
f1302(i,si0,si1,si2);
si0=l5;
si0=i32_load(&i->m0,(U64)si0+4U);
l7=si0;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+12U);
l2=si0;
L10:;
si0=l7;
si1=l2;
si2=3U;
si1<<=(si2&31);
si0+=si1;
si1=l12;
si2=l11;
si3=3U;
si2<<=(si3&31);
si0=f15143(i,si0,si1,si2);
si0=l5;
si1=l2;
si2=l11;
si1+=si2;
i32_store(&i->m0,(U64)si0+12U,si1);
goto L4;
L5:;
si0=l4;
si1=3U;
si0<<=(si1&31);
l6=si0;
si0=l4;
if(si0){
goto L12;
}
si0=8U;
l7=si0;
goto L11;
L12:;
si0=l4;
si1=268435455U;
si0=si0 > si1;
if(si0){
goto L2;
}
si0=l6;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L2;
}
si0=0U;
l8=si0;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=l6;
si0=f15022(i,si0);
l7=si0;
si0=!(si0);
if(si0){
goto L1;
}
si0=l4;
si1=1U;
si0&=si1;
l9=si0;
si0=l4;
si1=1U;
si0=si0 == si1;
if(si0){
goto L13;
}
si0=l4;
si1=-2U;
si0&=si1;
l10=si0;
si0=0U;
l8=si0;
si0=l7;
l11=si0;
si0=l3;
l12=si0;
si0=l1;
l13=si0;
L14:;
{
si0=l11;
si1=l12;
sj1=i64_load(&i->m0,(U64)si1);
si2=l13;
sj2=i64_load(&i->m0,(U64)si2);
sj1^=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l11;
si1=8U;
si0+=si1;
si1=l12;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
si2=l13;
si3=8U;
si2+=si3;
sj2=i64_load(&i->m0,(U64)si2);
sj1^=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l11;
si1=16U;
si0+=si1;
l11=si0;
si0=l12;
si1=16U;
si0+=si1;
l12=si0;
si0=l13;
si1=16U;
si0+=si1;
l13=si0;
si0=l10;
si1=l8;
si2=2U;
si1+=si2;
l8=si1;
si0=si0 != si1;
if(si0){
goto L14;
}
}
L13:;
si0=l9;
si0=!(si0);
if(si0){
goto L11;
}
si0=l7;
si1=l8;
si2=3U;
si1<<=(si2&31);
l11=si1;
si0+=si1;
si1=l3;
si2=l11;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
si2=l1;
si3=l11;
si2+=si3;
sj2=i64_load(&i->m0,(U64)si2);
sj1^=sj2;
i64_store(&i->m0,(U64)si0,sj1);
L11:;
si0=l1;
si1=l6;
si0+=si1;
l12=si0;
si0=l5;
si1=l4;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l5;
si1=l4;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l5;
si1=l7;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l2;
si1=l4;
si0-=si1;
l11=si0;
si0=l2;
si1=l4;
si0=si0 == si1;
if(si0){
goto L15;
}
si0=l5;
si1=4U;
si0+=si1;
si1=l4;
si2=l11;
f1302(i,si0,si1,si2);
si0=l5;
si0=i32_load(&i->m0,(U64)si0+4U);
l7=si0;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+12U);
l4=si0;
L15:;
si0=l7;
si1=l4;
si2=3U;
si1<<=(si2&31);
si0+=si1;
si1=l12;
si2=l11;
si3=3U;
si2<<=(si3&31);
si0=f15143(i,si0,si1,si2);
si0=l5;
si1=l4;
si2=l11;
si1+=si2;
i32_store(&i->m0,(U64)si0+12U,si1);
L4:;
si0=l0;
si1=l5;
sj1=i64_load(&i->m0,(U64)si1+4U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=8U;
si0+=si1;
si1=l5;
si2=4U;
si1+=si2;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=16U;
si0+=si1;
i->g0=si0;
goto L0;
L3:;
si0=8U;
si1=l6;
f52(i,si0,si1);
UNREACHABLE;
L2:;
f53(i);
UNREACHABLE;
L1:;
si0=8U;
si1=l6;
f52(i,si0,si1);
UNREACHABLE;
L0:;
}

U32 f1079(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 si0,si1,si2,si3,si4;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+12U);
si0=!(si0);
if(si0){
goto L2;
}
si0=0U;
l2=si0;
si0=l1;
si0=!(si0);
if(si0){
goto L1;
}
si0=l0;
si1=16U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=l0;
si1=20U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
L4:;
{
si0=l3;
si0=!(si0);
if(si0){
goto L3;
}
si0=0U;
l2=si0;
si0=l0;
si1=0U;
si2=l3;
si3=l4;
si2-=si3;
l5=si2;
si3=l5;
si4=l3;
si3=si3 > si4;
si1=si3?si1:si2;
l3=si1;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l1;
si1=-1U;
si0+=si1;
l1=si0;
if(si0){
goto L4;
}
goto L1;
}
L3:;
si0=0U;
l2=si0;
si0=l1;
si0=!(si0);
if(si0){
goto L1;
}
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0+12U,si1);
L2:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L5;
}
si0=l1;
goto L0;
L5:;
si0=l1;
if(si0){
goto L6;
}
si0=0U;
goto L0;
L6:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+4U);
l5=si0;
si0=0U;
l3=si0;
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l5;
si0=!(si0);
if(si0){
goto L7;
}
si0=-1U;
l3=si0;
si0=0U;
l2=si0;
si0=l1;
si1=1U;
si0=si0 == si1;
if(si0){
goto L1;
}
L7:;
si0=l3;
si1=l1;
si0+=si1;
goto L0;
L1:;
si0=l2;
L0:;
return si0;
}

void f1080(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 si0,si1,si2,si3,si4,si5;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+12U);
l3=si0;
si0=!(si0);
if(si0){
goto L4;
}
si0=l2;
if(si0){
goto L7;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+16U);
l4=si0;
goto L6;
L7:;
si0=l1;
si1=20U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+16U);
l4=si0;
L8:;
{
si0=l4;
si0=!(si0);
if(si0){
goto L5;
}
si0=l1;
si1=0U;
si2=l4;
si3=l5;
si2-=si3;
l6=si2;
si3=l6;
si4=l4;
si3=si3 > si4;
si1=si3?si1:si2;
l4=si1;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l2;
si1=-1U;
si0+=si1;
l2=si0;
if(si0){
goto L8;
}
}
L6:;
si0=l4;
if(si0){
goto L3;
}
si0=0U;
l2=si0;
L5:;
si0=l1;
si1=0U;
i32_store(&i->m0,(U64)si0+12U,si1);
L4:;
si0=0U;
l5=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
if(si0){
goto L2;
}
goto L1;
L3:;
si0=l1;
si1=l4;
si2=l4;
si3=l1;
si4=20U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
l2=si3;
si4=l4;
si5=l2;
si4=si4 < si5;
si2=si4?si2:si3;
l7=si2;
si1-=si2;
l4=si1;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l3;
si1=l4;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l5=si0;
goto L1;
L2:;
si0=l1;
si1=4U;
si0+=si1;
si1=0U;
si2=l4;
si0=si2?si0:si1;
l4=si0;
si0=l2;
si1=1U;
si0+=si1;
l2=si0;
L10:;
{
si0=l2;
si1=-1U;
si0+=si1;
l2=si0;
si0=!(si0);
if(si0){
goto L9;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si0=0U;
l5=si0;
si0=l4;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l6;
si0=!(si0);
if(si0){
goto L1;
}
goto L10;
}
L9:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si0=l4;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+4U);
l7=si0;
L1:;
si0=l0;
si1=l7;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l5;
i32_store(&i->m0,(U64)si0,si1);
L0:;
}

void f1081(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 l3=0;
U32 l4=0;
U32 si0,si1,si2,si3,si4,si5;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+12U);
l2=si0;
si0=!(si0);
if(si0){
goto L3;
}
si0=l1;
si1=16U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
if(si0){
goto L2;
}
si0=l1;
si1=0U;
i32_store(&i->m0,(U64)si0+12U,si1);
L3:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L4;
}
si0=0U;
l3=si0;
goto L1;
L4:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
l3=si0;
si0=l1;
si1=0U;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l1;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
goto L1;
L2:;
si0=l1;
si1=l3;
si2=l3;
si3=l1;
si4=20U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
l4=si3;
si4=l3;
si5=l4;
si4=si4 < si5;
si2=si4?si2:si3;
l4=si2;
si1-=si2;
l3=si1;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l2;
si1=l3;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l3=si0;
L1:;
si0=l0;
si1=l4;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l3;
i32_store(&i->m0,(U64)si0,si1);
L0:;
}

void f1082(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 l3=0;
U32 l4=0;
U32 si0,si1,si2,si3;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+12U);
if(si0){
goto L4;
}
si0=1U;
l3=si0;
si0=l2;
si0=!(si0);
if(si0){
goto L2;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
si1=0U;
si0=si0 != si1;
l2=si0;
goto L3;
L4:;
si0=l2;
si0=!(si0);
if(si0){
goto L5;
}
si0=0U;
l3=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+16U);
l2=si0;
si0=!(si0);
if(si0){
goto L7;
}
si0=l1;
si1=20U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=!(si0);
if(si0){
goto L6;
}
si0=l2;
si1=l3;
si0=DIV_U(si0,si1);
l4=si0;
si1=l2;
si2=l4;
si3=l3;
si2*=si3;
si1-=si2;
si2=0U;
si1=si1 != si2;
si0+=si1;
l3=si0;
L7:;
si0=-1U;
si1=l3;
si2=l1;
si2=i32_load(&i->m0,(U64)si2+4U);
si3=0U;
si2=si2 != si3;
si1+=si2;
l1=si1;
si2=l1;
si3=l3;
si2=si2 < si3;
si0=si2?si0:si1;
l2=si0;
si0=l1;
si1=l3;
si0=si0 >= si1;
l3=si0;
goto L1;
L6:;
si0=1206816U;
si1=25U;
si2=1207016U;
f604(i,si0,si1,si2);
UNREACHABLE;
L5:;
si0=1U;
l3=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+16U);
l2=si0;
si0=!(si0);
if(si0){
goto L2;
}
si0=l1;
si1=20U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si0=!(si0);
if(si0){
goto L8;
}
si0=l2;
si1=l1;
si0=DIV_U(si0,si1);
l4=si0;
si1=l2;
si2=l4;
si3=l1;
si2*=si3;
si1-=si2;
si2=0U;
si1=si1 != si2;
si0+=si1;
l2=si0;
goto L3;
L8:;
si0=1206816U;
si1=25U;
si2=1207016U;
f604(i,si0,si1,si2);
UNREACHABLE;
L3:;
si0=l2;
l1=si0;
goto L1;
L2:;
si0=0U;
l2=si0;
si0=0U;
l1=si0;
L1:;
si0=l0;
si1=l3;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l2;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=8U;
si0+=si1;
si1=l1;
i32_store(&i->m0,(U64)si0,si1);
L0:;
}

void f1083(rustpythonInstance*i,U32 l0) {
L0:;
}

U32 f1084(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 l3=0;
U32 l4=0;
U32 si0,si1,si2,si3,si4;
si0=l1;
if(si0){
goto L1;
}
si0=0U;
goto L0;
L1:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+4U);
l2=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+8U);
l3=si0;
L2:;
{
si0=l2;
if(si0){
goto L3;
}
si0=l1;
goto L0;
L3:;
si0=l0;
si1=0U;
si2=l2;
si3=l3;
si2-=si3;
l4=si2;
si3=l4;
si4=l2;
si3=si3 > si4;
si1=si3?si1:si2;
l2=si1;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l1;
si1=-1U;
si0+=si1;
l1=si0;
if(si0){
goto L2;
}
}
si0=0U;
L0:;
return si0;
}

void f1085(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4) {
U32 si0,si1,si2;
si0=l1;
si1=l2;
si0=si0 > si1;
if(si0){
goto L2;
}
si0=l2;
si1=l3;
si0=si0 <= si1;
if(si0){
goto L1;
}
si0=l2;
si1=l3;
si2=l4;
f597(i,si0,si1,si2);
UNREACHABLE;
L2:;
si0=l1;
si1=l2;
si2=l4;
f683(i,si0,si1,si2);
UNREACHABLE;
L1:;
si0=l0;
si1=l2;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l1;
i32_store(&i->m0,(U64)si0,si1);
L0:;
}

void f1086(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U64 l7=0;
U32 l8=0;
U32 l9=0;
U32 si0,si1,si2,si3;
U64 sj0,sj1;
si0=0U;
l3=si0;
si0=0U;
l4=si0;
si0=1206464U;
l5=si0;
si0=l2;
sj0=(U64)(si0);
si1=l1;
si1=i32_load(&i->m0,(U64)si1+8U);
l6=si1;
sj1=(U64)(si1);
sj0*=sj1;
l7=sj0;
sj1=32ULL;
sj0>>=(sj1&63);
si0=(U32)(sj0);
si0=!(si0);
if(si0){
goto L3;
}
goto L2;
L3:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
l8=si0;
sj1=l7;
si1=(U32)(sj1);
l9=si1;
si0=si0 <= si1;
if(si0){
goto L2;
}
si0=0U;
si1=l8;
si2=l9;
si1-=si2;
l3=si1;
si2=l6;
si1-=si2;
l4=si1;
si2=l4;
si3=l3;
si2=si2 > si3;
si0=si2?si0:si1;
l4=si0;
si1=l8;
si0=si0 > si1;
if(si0){
goto L1;
}
si0=l3;
si1=l4;
si0-=si1;
l2=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si1=l4;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l3=si0;
L2:;
si0=l1;
si1=l4;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l1;
si1=l5;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l2;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l3;
i32_store(&i->m0,(U64)si0,si1);
goto L0;
L1:;
si0=l4;
si1=l8;
si2=1207000U;
f597(i,si0,si1,si2);
UNREACHABLE;
L0:;
}

void f1087(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 l3=0;
U32 si0,si1,si2,si3,si4,si5;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
l2=si0;
if(si0){
goto L2;
}
si0=0U;
l1=si0;
goto L1;
L2:;
si0=l1;
si1=l2;
si2=l2;
si3=l1;
si3=i32_load(&i->m0,(U64)si3+8U);
l3=si3;
si4=l2;
si5=l3;
si4=si4 < si5;
si2=si4?si2:si3;
l3=si2;
si1-=si2;
l2=si1;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
si1=l2;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l1=si0;
L1:;
si0=l0;
si1=l3;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l1;
i32_store(&i->m0,(U64)si0,si1);
L0:;
}

void f1088(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 l3=0;
U32 si0,si1,si2,si3;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
l2=si0;
if(si0){
goto L2;
}
si0=0U;
l1=si0;
goto L1;
L2:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+8U);
l1=si0;
si0=!(si0);
if(si0){
goto L3;
}
si0=l2;
si1=l1;
si0=DIV_U(si0,si1);
l3=si0;
si1=l2;
si2=l3;
si3=l1;
si2*=si3;
si1-=si2;
si2=0U;
si1=si1 != si2;
si0+=si1;
l1=si0;
goto L1;
L3:;
si0=1206816U;
si1=25U;
si2=1207016U;
f604(i,si0,si1,si2);
UNREACHABLE;
L1:;
si0=l0;
si1=1U;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l1;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=8U;
si0+=si1;
si1=l1;
i32_store(&i->m0,(U64)si0,si1);
L0:;
}

U32 f1089(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4,U32 l5,U64 l6,U32 l7,U32 l8) {
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
U64 l24=0;
U32 l25=0;
U32 si0,si1,si2,si3,si4,si5,si6,si7,si8;
U64 sj0,sj1,sj2,sj3,sj4,sj6;
si0=l5;
si1=l5;
si2=1U;
si1>>=(si2&31);
l9=si1;
si0-=si1;
l10=si0;
si1=l5;
si0+=si1;
si1=l3;
si0=si0 > si1;
if(si0){
goto L15;
}
si0=l1;
si1=l9;
si0=si0 < si1;
if(si0){
goto L17;
}
si0=l3;
si1=l9;
si0=si0 < si1;
if(si0){
goto L16;
}
si0=l4;
si1=l9;
si2=3U;
si1<<=(si2&31);
l11=si1;
si0+=si1;
l12=si0;
si0=l1;
si1=l9;
si0-=si1;
l13=si0;
si0=l0;
si1=l11;
si0+=si1;
l14=si0;
si0=l3;
si1=l9;
si0-=si1;
l11=si0;
si0=l2;
si1=l9;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l15=si0;
si0=l10;
si1=85U;
si0=si0 < si1;
if(si0){
goto L19;
}
si0=l14;
si1=l13;
si2=l15;
si3=l11;
si4=l12;
si5=l10;
sj6=l6;
si7=l7;
si8=l8;
si0=f1165(i,si0,si1,si2,si3,si4,si5,sj6,si7,si8);
l16=si0;
goto L18;
L19:;
si0=l10;
si1=1U;
si0<<=(si1&31);
l17=si0;
si1=l11;
si0=si0 > si1;
if(si0){
goto L14;
}
si0=l14;
si1=l13;
si2=l15;
si3=l17;
si4=l12;
si5=l10;
sj6=l6;
si0=f1166(i,si0,si1,si2,si3,si4,si5,sj6);
l16=si0;
L18:;
si0=8U;
l18=si0;
si0=l10;
si1=l9;
si0=f1126(i,si0,si1);
l19=si0;
si0=!(si0);
if(si0){
goto L20;
}
si0=l19;
si1=268435455U;
si0=si0 > si1;
if(si0){
goto L13;
}
si0=l19;
si1=3U;
si0<<=(si1&31);
l11=si0;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L13;
}
si0=l11;
si0=!(si0);
if(si0){
goto L20;
}
si0=l11;
si1=1U;
si0=f15026(i,si0,si1);
l18=si0;
si0=!(si0);
if(si0){
goto L12;
}
L20:;
si0=l10;
si1=l13;
si0=si0 > si1;
if(si0){
goto L11;
}
si0=l7;
si1=l8;
si2=l14;
si3=l10;
si4=l4;
si5=l9;
si6=l18;
si7=l19;
sj0=f1127(i,si0,si1,si2,si3,si4,si5,si6,si7);
si0=l5;
si1=l3;
si0=si0 > si1;
if(si0){
goto L10;
}
si0=l5;
si1=l8;
si0=si0 > si1;
if(si0){
goto L9;
}
si0=l5;
si0=!(si0);
if(si0){
goto L21;
}
si0=l5;
si1=1U;
si0&=si1;
l20=si0;
si0=l5;
si1=1U;
si0=si0 != si1;
if(si0){
goto L23;
}
si0=0U;
l12=si0;
si0=0U;
l15=si0;
goto L22;
L23:;
si0=l5;
si1=-2U;
si0&=si1;
l21=si0;
si0=0U;
l12=si0;
si0=l7;
l11=si0;
si0=l2;
l13=si0;
si0=0U;
l15=si0;
L24:;
{
si0=l13;
si1=l13;
sj1=i64_load(&i->m0,(U64)si1);
l22=sj1;
si2=l12;
sj2=(U64)(si2);
sj3=1ULL;
sj2&=sj3;
si3=l11;
sj3=i64_load(&i->m0,(U64)si3);
l23=sj3;
sj2+=sj3;
sj1-=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l13;
si1=8U;
si0+=si1;
l17=si0;
si1=l17;
sj1=i64_load(&i->m0,(U64)si1);
l24=sj1;
sj2=l22;
sj3=l23;
si2=sj2 <= sj3;
sj3=l22;
sj4=l23;
si3=sj3 < sj4;
si4=l12;
si5=1U;
si4&=si5;
si2=si4?si2:si3;
l12=si2;
sj2=(U64)(si2);
si3=l11;
si4=8U;
si3+=si4;
sj3=i64_load(&i->m0,(U64)si3);
l22=sj3;
sj2+=sj3;
sj1-=sj2;
i64_store(&i->m0,(U64)si0,sj1);
sj0=l24;
sj1=l22;
si0=sj0 <= sj1;
sj1=l24;
sj2=l22;
si1=sj1 < sj2;
si2=l12;
si0=si2?si0:si1;
l12=si0;
si0=l11;
si1=16U;
si0+=si1;
l11=si0;
si0=l13;
si1=16U;
si0+=si1;
l13=si0;
si0=l21;
si1=l15;
si2=2U;
si1+=si2;
l15=si1;
si0=si0 != si1;
if(si0){
goto L24;
}
}
L22:;
si0=l20;
si0=!(si0);
if(si0){
goto L25;
}
si0=l2;
si1=l15;
si2=3U;
si1<<=(si2&31);
l13=si1;
si0+=si1;
l11=si0;
si1=l11;
sj1=i64_load(&i->m0,(U64)si1);
l22=sj1;
si2=l12;
sj2=(U64)(si2);
si3=l7;
si4=l13;
si3+=si4;
sj3=i64_load(&i->m0,(U64)si3);
l23=sj3;
sj2+=sj3;
sj1-=sj2;
i64_store(&i->m0,(U64)si0,sj1);
sj0=l22;
sj1=l23;
si0=sj0 <= sj1;
sj1=l22;
sj2=l23;
si1=sj1 < sj2;
si2=l12;
si0=si2?si0:si1;
l12=si0;
L25:;
si0=l16;
si0=!(si0);
if(si0){
goto L27;
}
si0=0U;
l15=si0;
si0=l5;
si1=2U;
si0=si0 < si1;
if(si0){
goto L28;
}
si0=l2;
si1=l10;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l25=si0;
si0=l9;
si1=1U;
si0=si0 != si1;
if(si0){
goto L30;
}
si0=0U;
l15=si0;
si0=0U;
l17=si0;
goto L29;
L30:;
si0=l9;
si1=2147483646U;
si0&=si1;
l20=si0;
si0=0U;
l15=si0;
si0=l4;
l11=si0;
si0=l25;
l13=si0;
si0=0U;
l17=si0;
L31:;
{
si0=l13;
si1=l13;
sj1=i64_load(&i->m0,(U64)si1);
l22=sj1;
si2=l15;
sj2=(U64)(si2);
sj3=1ULL;
sj2&=sj3;
si3=l11;
sj3=i64_load(&i->m0,(U64)si3);
l23=sj3;
sj2+=sj3;
sj1-=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l13;
si1=8U;
si0+=si1;
l21=si0;
si1=l21;
sj1=i64_load(&i->m0,(U64)si1);
l24=sj1;
sj2=l22;
sj3=l23;
si2=sj2 <= sj3;
sj3=l22;
sj4=l23;
si3=sj3 < sj4;
si4=l15;
si5=1U;
si4&=si5;
si2=si4?si2:si3;
l15=si2;
sj2=(U64)(si2);
si3=l11;
si4=8U;
si3+=si4;
sj3=i64_load(&i->m0,(U64)si3);
l22=sj3;
sj2+=sj3;
sj1-=sj2;
i64_store(&i->m0,(U64)si0,sj1);
sj0=l24;
sj1=l22;
si0=sj0 <= sj1;
sj1=l24;
sj2=l22;
si1=sj1 < sj2;
si2=l15;
si0=si2?si0:si1;
l15=si0;
si0=l11;
si1=16U;
si0+=si1;
l11=si0;
si0=l13;
si1=16U;
si0+=si1;
l13=si0;
si0=l20;
si1=l17;
si2=2U;
si1+=si2;
l17=si1;
si0=si0 != si1;
if(si0){
goto L31;
}
}
L29:;
si0=l5;
si1=2U;
si0&=si1;
si0=!(si0);
if(si0){
goto L28;
}
si0=l25;
si1=l17;
si2=3U;
si1<<=(si2&31);
l13=si1;
si0+=si1;
l11=si0;
si1=l11;
sj1=i64_load(&i->m0,(U64)si1);
l22=sj1;
si2=l15;
sj2=(U64)(si2);
si3=l4;
si4=l13;
si3+=si4;
sj3=i64_load(&i->m0,(U64)si3);
l23=sj3;
sj2+=sj3;
sj1-=sj2;
i64_store(&i->m0,(U64)si0,sj1);
sj0=l22;
sj1=l23;
si0=sj0 <= sj1;
sj1=l22;
sj2=l23;
si1=sj1 < sj2;
si2=l15;
si0=si2?si0:si1;
l15=si0;
L28:;
si0=1U;
l21=si0;
si0=l12;
si1=1U;
si0&=si1;
si0=!(si0);
if(si0){
goto L26;
}
sj0=2ULL;
sj1=1ULL;
si2=l15;
si3=1U;
si2&=si3;
sj0=si2?sj0:sj1;
l24=sj0;
goto L8;
L27:;
si0=0U;
l21=si0;
sj0=1ULL;
l24=sj0;
si0=l12;
si1=1U;
si0&=si1;
si0=!(si0);
if(si0){
goto L7;
}
goto L8;
L26:;
sj0=1ULL;
l24=sj0;
si0=l15;
si1=1U;
si0&=si1;
if(si0){
goto L8;
}
goto L7;
L21:;
si0=l3;
si1=l10;
si2=l9;
si1-=si2;
l13=si1;
si0=si0 < si1;
if(si0){
goto L6;
}
si0=l3;
si1=l13;
si0-=si1;
l11=si0;
si0=l2;
si1=l13;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l13=si0;
si0=l4;
si1=l10;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l12=si0;
si0=l16;
l21=si0;
goto L4;
L17:;
si0=l9;
si1=l1;
si2=1207156U;
f593(i,si0,si1,si2);
UNREACHABLE;
L16:;
si0=l9;
si1=l3;
si2=1207172U;
f593(i,si0,si1,si2);
UNREACHABLE;
L15:;
si0=1207344U;
si1=40U;
si2=1207384U;
f604(i,si0,si1,si2);
UNREACHABLE;
L14:;
si0=l17;
si1=l11;
si2=1207188U;
f597(i,si0,si1,si2);
UNREACHABLE;
L13:;
f53(i);
UNREACHABLE;
L12:;
si0=8U;
si1=l11;
f52(i,si0,si1);
UNREACHABLE;
L11:;
si0=l10;
si1=l13;
si2=1207204U;
f597(i,si0,si1,si2);
UNREACHABLE;
L10:;
si0=l5;
si1=l3;
si2=1207220U;
f597(i,si0,si1,si2);
UNREACHABLE;
L9:;
si0=l5;
si1=l8;
si2=1207236U;
f597(i,si0,si1,si2);
UNREACHABLE;
L8:;
si0=l5;
si1=3U;
si0<<=(si1&31);
si1=l9;
si2=3U;
si1<<=(si2&31);
l13=si1;
si0-=si1;
si1=-8U;
si0+=si1;
l20=si0;
si0=l13;
si1=l0;
si0+=si1;
si1=8U;
si0+=si1;
l25=si0;
si0=l16;
l21=si0;
L33:;
{
si0=l14;
si1=l14;
sj1=i64_load(&i->m0,(U64)si1);
l22=sj1;
sj2=-1ULL;
sj1+=sj2;
i64_store(&i->m0,(U64)si0,sj1);
sj0=l22;
sj1=0ULL;
si0=sj0 != sj1;
if(si0){
goto L34;
}
si0=l20;
l11=si0;
si0=l25;
l13=si0;
L36:;
{
si0=l11;
si0=!(si0);
if(si0){
goto L35;
}
si0=l13;
si1=l13;
sj1=i64_load(&i->m0,(U64)si1);
l22=sj1;
sj2=-1ULL;
sj1+=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l11;
si1=-8U;
si0+=si1;
l11=si0;
si0=l13;
si1=8U;
si0+=si1;
l13=si0;
sj0=l22;
si0=!(sj0);
if(si0){
goto L36;
}
goto L34;
}
L35:;
si0=l21;
si1=1U;
si0&=si1;
l13=si0;
si0=0U;
l21=si0;
si0=l13;
si0=!(si0);
if(si0){
goto L32;
}
L34:;
si0=0U;
l12=si0;
si0=l5;
l15=si0;
si0=l2;
l13=si0;
si0=l4;
l11=si0;
L37:;
{
si0=l13;
sj0=i64_load(&i->m0,(U64)si0);
l23=sj0;
si1=l11;
sj1=i64_load(&i->m0,(U64)si1);
sj0+=sj1;
l22=sj0;
sj1=l23;
si0=sj0 < sj1;
l17=si0;
si0=l12;
si1=255U;
si0&=si1;
if(si0){
goto L39;
}
si0=l17;
l12=si0;
goto L38;
L39:;
si0=l17;
sj1=l22;
sj2=1ULL;
sj1+=sj2;
l22=sj1;
si1=!(sj1);
si0|=si1;
l12=si0;
L38:;
si0=l13;
sj1=l22;
i64_store(&i->m0,(U64)si0,sj1);
si0=l13;
si1=8U;
si0+=si1;
l13=si0;
si0=l11;
si1=8U;
si0+=si1;
l11=si0;
si0=l15;
si1=-1U;
si0+=si1;
l15=si0;
if(si0){
goto L37;
}
}
sj0=l24;
si1=l12;
sj1=(U64)(si1);
sj0-=sj1;
l24=sj0;
si0=!(sj0);
si0=!(si0);
if(si0){
goto L33;
}
goto L7;
}
L32:;
si0=1207300U;
si1=27U;
si2=1207328U;
f604(i,si0,si1,si2);
UNREACHABLE;
L7:;
si0=l3;
si1=l10;
si2=l9;
si1-=si2;
l13=si1;
si0=si0 >= si1;
if(si0){
goto L5;
}
L6:;
si0=l13;
si1=l3;
si2=1207252U;
f593(i,si0,si1,si2);
UNREACHABLE;
L5:;
si0=l4;
si1=l10;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l12=si0;
si0=l3;
si1=l13;
si0-=si1;
l11=si0;
si0=l2;
si1=l13;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l13=si0;
si0=l5;
si1=422U;
si0=si0 < si1;
if(si0){
goto L4;
}
si0=l11;
si1=l5;
si2=2U;
si1>>=(si2&31);
l15=si1;
si0=si0 < si1;
if(si0){
goto L40;
}
si0=l0;
si1=l1;
si2=l13;
si3=l15;
si4=3U;
si3<<=(si4&31);
si2+=si3;
si3=l11;
si4=l15;
si3-=si4;
si4=l12;
si5=l9;
sj6=l6;
si7=l7;
si8=l8;
si0=f1089(i,si0,si1,si2,si3,si4,si5,sj6,si7,si8);
if(si0){
goto L3;
}
goto L2;
L40:;
si0=l15;
si1=l11;
si2=1207268U;
f593(i,si0,si1,si2);
UNREACHABLE;
L4:;
si0=l5;
si1=-2U;
si0&=si1;
l15=si0;
si1=l11;
si0=si0 > si1;
if(si0){
goto L1;
}
si0=l0;
si1=l1;
si2=l13;
si3=l15;
si4=l12;
si5=l9;
sj6=l6;
si0=f1090(i,si0,si1,si2,si3,si4,si5,sj6);
l13=si0;
si0=l5;
si1=2U;
si0=si0 < si1;
if(si0){
goto L2;
}
si0=l13;
si0=!(si0);
if(si0){
goto L2;
}
L3:;
si0=l0;
si1=255U;
si2=l9;
si3=3U;
si2<<=(si3&31);
si0=f15145(i,si0,si1,si2);
L2:;
si0=l19;
si0=!(si0);
if(si0){
goto L41;
}
si0=l18;
f15024(i,si0);
L41:;
si0=l21;
si1=1U;
si0&=si1;
goto L0;
L1:;
si0=l15;
si1=l11;
si2=1207284U;
f597(i,si0,si1,si2);
UNREACHABLE;
L0:;
return si0;
}

U32 f1090(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4,U32 l5,U64 l6) {
U32 l7=0;
U32 l8=0;
U64 l9=0;
U32 l10=0;
U32 l11=0;
U64 l12=0;
U32 l13=0;
U32 l14=0;
U32 l15=0;
U32 l16=0;
U32 l17=0;
U32 l18=0;
U64 l19=0;
U64 l20=0;
U32 l21=0;
U32 l22=0;
U32 l23=0;
U32 l24=0;
U32 l25=0;
U64 l26=0;
U64 l27=0;
U64 l28=0;
U64 l29=0;
U64 l30=0;
U32 l31=0;
U64 l32=0;
U32 si0,si1,si2,si3,si4,si5;
U64 sj0,sj1,sj2,sj3,sj4,sj5;
si0=i->g0;
si1=224U;
si0-=si1;
l7=si0;
i->g0=si0;
si0=l5;
si1=3U;
si0=si0 < si1;
if(si0){
goto L3;
}
si0=l3;
si1=l5;
si0=si0 < si1;
if(si0){
goto L4;
}
si0=l4;
si1=l5;
si2=-1U;
si1+=si2;
l8=si1;
si2=3U;
si1<<=(si2&31);
si0+=si1;
sj0=i64_load(&i->m0,(U64)si0);
l9=sj0;
sj1=-1ULL;
si0=(U64)((I64)sj0>(I64)sj1);
if(si0){
goto L5;
}
si0=l3;
si1=l5;
si0-=si1;
l10=si0;
si1=l1;
si0=si0 > si1;
if(si0){
goto L6;
}
si0=l4;
si1=l5;
si2=-2U;
si1+=si2;
l11=si1;
si2=3U;
si1<<=(si2&31);
si0+=si1;
sj0=i64_load(&i->m0,(U64)si0);
l12=sj0;
si0=l10;
si1=1U;
si0+=si1;
l13=si0;
si1=l5;
si2=l5;
si3=l13;
si2=si2 > si3;
si0=si2?si0:si1;
l14=si0;
si1=-1U;
si0+=si1;
l15=si0;
si0=0U;
si1=l14;
si2=3U;
si1<<=(si2&31);
si0-=si1;
l16=si0;
si0=l2;
si1=l3;
si2=l14;
si1-=si2;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l17=si0;
si0=l4;
si1=0U;
si2=l5;
si3=l13;
si2-=si3;
l13=si2;
si3=l13;
si4=l5;
si3=si3 > si4;
si1=si3?si1:si2;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l18=si0;
si0=l3;
si1=3U;
si0<<=(si1&31);
si1=l2;
si0+=si1;
si1=-8U;
si0+=si1;
l13=si0;
si0=l5;
si1=3U;
si0<<=(si1&31);
si1=l4;
si0+=si1;
si1=-8U;
si0+=si1;
l4=si0;
L9:;
{
si0=l16;
si0=!(si0);
if(si0){
goto L8;
}
si0=l13;
sj0=i64_load(&i->m0,(U64)si0);
l19=sj0;
si0=l4;
sj0=i64_load(&i->m0,(U64)si0);
l20=sj0;
si0=l13;
si1=-8U;
si0+=si1;
l13=si0;
si0=l4;
si1=-8U;
si0+=si1;
l4=si0;
si0=l16;
si1=8U;
si0+=si1;
l16=si0;
si0=-1U;
sj1=l20;
sj2=l19;
si1=sj1 != sj2;
sj2=l20;
sj3=l19;
si2=sj2 > sj3;
si0=si2?si0:si1;
l21=si0;
si0=!(si0);
if(si0){
goto L9;
}
goto L7;
}
L8:;
si0=-1U;
si1=0U;
si2=l16;
si0=si2?si0:si1;
l21=si0;
L7:;
si0=l21;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L10;
}
si0=l14;
si0=!(si0);
if(si0){
goto L10;
}
si0=l14;
si1=1U;
si0&=si1;
l22=si0;
si0=0U;
l4=si0;
si0=0U;
l16=si0;
si0=l14;
si1=1U;
si0=si0 == si1;
if(si0){
goto L11;
}
si0=0U;
l23=si0;
si0=0U;
si1=l14;
si2=-2U;
si1&=si2;
si0-=si1;
l24=si0;
si0=l18;
l13=si0;
si0=l17;
l16=si0;
si0=0U;
l4=si0;
L12:;
{
si0=l16;
si1=l16;
sj1=i64_load(&i->m0,(U64)si1);
l19=sj1;
si2=l4;
sj2=(U64)(si2);
sj3=1ULL;
sj2&=sj3;
si3=l13;
sj3=i64_load(&i->m0,(U64)si3);
l20=sj3;
sj2+=sj3;
sj1-=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l16;
si1=8U;
si0+=si1;
l25=si0;
si1=l25;
sj1=i64_load(&i->m0,(U64)si1);
l26=sj1;
sj2=l19;
sj3=l20;
si2=sj2 <= sj3;
sj3=l19;
sj4=l20;
si3=sj3 < sj4;
si4=l4;
si5=1U;
si4&=si5;
si2=si4?si2:si3;
l4=si2;
sj2=(U64)(si2);
si3=l13;
si4=8U;
si3+=si4;
sj3=i64_load(&i->m0,(U64)si3);
l19=sj3;
sj2+=sj3;
sj1-=sj2;
i64_store(&i->m0,(U64)si0,sj1);
sj0=l26;
sj1=l19;
si0=sj0 <= sj1;
sj1=l26;
sj2=l19;
si1=sj1 < sj2;
si2=l4;
si0=si2?si0:si1;
l4=si0;
si0=l13;
si1=16U;
si0+=si1;
l13=si0;
si0=l16;
si1=16U;
si0+=si1;
l16=si0;
si0=l24;
si1=l23;
si2=-2U;
si1+=si2;
l23=si1;
si0=si0 != si1;
if(si0){
goto L12;
}
}
si0=0U;
si1=l23;
si0-=si1;
l16=si0;
L11:;
si0=l22;
si0=!(si0);
if(si0){
goto L10;
}
si0=l17;
si1=l16;
si2=3U;
si1<<=(si2&31);
l16=si1;
si0+=si1;
l13=si0;
si1=l13;
sj1=i64_load(&i->m0,(U64)si1);
si2=l4;
sj2=(U64)(si2);
si3=l18;
si4=l16;
si3+=si4;
sj3=i64_load(&i->m0,(U64)si3);
sj2+=sj3;
sj1-=sj2;
i64_store(&i->m0,(U64)si0,sj1);
L10:;
si0=l7;
si1=l3;
si2=3U;
si1<<=(si2&31);
l16=si1;
si2=l2;
si1+=si2;
si2=-8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
l27=sj1;
i64_store(&i->m0,(U64)si0+192U,sj1);
si0=l15;
si1=l10;
si0=si0 >= si1;
if(si0){
goto L1;
}
si0=l16;
si1=l14;
si2=3U;
si1<<=(si2&31);
si0-=si1;
si1=l2;
si0+=si1;
si1=-8U;
si0+=si1;
l23=si0;
si0=l14;
si1=-2U;
si0+=si1;
l17=si0;
si0=l14;
si1=1U;
si0=si0 > si1;
l22=si0;
L15:;
{
si0=l10;
si1=-1U;
si0+=si1;
l10=si0;
si1=l8;
si0+=si1;
l25=si0;
sj0=l27;
sj1=l9;
si0=sj0 != sj1;
if(si0){
goto L25;
}
si0=l25;
si1=l3;
si0=si0 >= si1;
if(si0){
goto L20;
}
si0=l2;
si1=l25;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l24=si0;
sj0=i64_load(&i->m0,(U64)si0);
sj1=l12;
si0=sj0 == sj1;
if(si0){
goto L24;
}
L25:;
si0=l25;
si1=l3;
si0=si0 >= si1;
if(si0){
goto L23;
}
si0=l25;
si1=-1U;
si0+=si1;
l16=si0;
si1=l3;
si0=si0 < si1;
if(si0){
goto L22;
}
si0=l16;
si1=l3;
si2=1209672U;
f594(i,si0,si1,si2);
UNREACHABLE;
L24:;
si0=l25;
si1=l15;
si0-=si1;
l13=si0;
si1=l10;
si2=l5;
si1+=si2;
l16=si1;
si0=si0 > si1;
if(si0){
goto L19;
}
si0=l16;
si1=l3;
si0=si0 <= si1;
if(si0){
goto L21;
}
si0=l16;
si1=l3;
si2=1209736U;
f597(i,si0,si1,si2);
UNREACHABLE;
L23:;
si0=l25;
si1=l3;
si2=1209656U;
f594(i,si0,si1,si2);
UNREACHABLE;
L22:;
si0=l7;
si1=176U;
si0+=si1;
sj1=l6;
sj2=1ULL;
sj3=l27;
sj4=0ULL;
f15157(i,si0,sj1,sj2,sj3,sj4);
si0=l7;
si1=160U;
si0+=si1;
si1=l7;
si2=176U;
si1+=si2;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
si2=l7;
sj2=i64_load(&i->m0,(U64)si2+176U);
l19=sj2;
si3=l2;
si4=l25;
si5=3U;
si4<<=(si5&31);
si3+=si4;
sj3=i64_load(&i->m0,(U64)si3);
l26=sj3;
sj2+=sj3;
l28=sj2;
sj3=l19;
si2=sj2 < sj3;
sj2=(U64)(si2);
sj1+=sj2;
l19=sj1;
sj2=0ULL;
sj3=l12;
sj4=0ULL;
f15157(i,si0,sj1,sj2,sj3,sj4);
si0=l2;
si1=l16;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l24=si0;
sj0=i64_load(&i->m0,(U64)si0);
l27=sj0;
sj1=l12;
si2=l7;
sj2=i64_load(&i->m0,(U64)si2+160U);
sj1+=sj2;
l20=sj1;
sj0-=sj1;
l29=sj0;
sj0=l19;
sj1=1ULL;
sj0+=sj1;
l30=sj0;
sj0=l28;
sj1=l26;
sj2=l9;
sj3=l19;
sj2*=sj3;
sj1-=sj2;
sj2=l9;
si3=l7;
si4=160U;
si3+=si4;
si4=8U;
si3+=si4;
sj3=i64_load(&i->m0,(U64)si3);
sj2+=sj3;
sj3=l20;
sj4=l12;
si3=sj3 < sj4;
sj3=(U64)(si3);
sj2+=sj3;
sj3=l27;
sj4=l20;
si3=sj3 < sj4;
sj3=(U64)(si3);
sj2+=sj3;
sj1-=sj2;
l27=sj1;
si0=sj0 <= sj1;
if(si0){
goto L18;
}
sj0=l29;
sj1=l12;
si0=sj0 < sj1;
l13=si0;
sj1=l27;
sj2=l9;
si1=sj1 < sj2;
sj2=l27;
sj3=l9;
si2=sj2 == sj3;
si0=si2?si0:si1;
if(si0){
goto L17;
}
sj0=l27;
sj1=l9;
sj0-=sj1;
si1=l13;
sj1=(U64)(si1);
sj0-=sj1;
l27=sj0;
sj0=l29;
sj1=l12;
sj0-=sj1;
l29=sj0;
sj0=l19;
sj1=2ULL;
sj0+=sj1;
l30=sj0;
goto L17;
L21:;
sj0=0ULL;
l19=sj0;
si0=0U;
l16=si0;
si0=l14;
l13=si0;
L26:;
{
si0=l7;
si1=128U;
si0+=si1;
si1=l18;
si2=l16;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
sj2=0ULL;
sj3=-1ULL;
sj4=0ULL;
f15157(i,si0,sj1,sj2,sj3,sj4);
si0=l23;
si1=l16;
si0+=si1;
l4=si0;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1);
l26=sj1;
sj2=l19;
si3=l7;
sj3=i64_load(&i->m0,(U64)si3+128U);
sj2+=sj3;
l20=sj2;
sj1-=sj2;
i64_store(&i->m0,(U64)si0,sj1);
sj0=l20;
sj1=l19;
si0=sj0 < sj1;
sj0=(U64)(si0);
si1=l7;
si2=128U;
si1+=si2;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
sj0+=sj1;
sj1=l26;
sj2=l20;
si1=sj1 < sj2;
sj1=(U64)(si1);
sj0+=sj1;
l19=sj0;
si0=l16;
si1=8U;
si0+=si1;
l16=si0;
si0=l13;
si1=-1U;
si0+=si1;
l13=si0;
if(si0){
goto L26;
}
}
si0=l24;
sj0=i64_load(&i->m0,(U64)si0);
l27=sj0;
sj0=-1ULL;
l30=sj0;
goto L16;
L20:;
si0=l25;
si1=l3;
si2=1209640U;
f594(i,si0,si1,si2);
UNREACHABLE;
L19:;
si0=l13;
si1=l16;
si2=1209736U;
f683(i,si0,si1,si2);
UNREACHABLE;
L18:;
sj0=l27;
sj1=l9;
sj0+=sj1;
sj1=l29;
sj2=l12;
sj1+=sj2;
l26=sj1;
sj2=l29;
si1=sj1 < sj2;
l13=si1;
sj1=(U64)(si1);
sj0+=sj1;
l20=sj0;
sj1=l27;
si2=l13;
sj3=l20;
sj4=l27;
si3=sj3 < sj4;
sj4=l20;
sj5=l27;
si4=sj4 == sj5;
si2=si4?si2:si3;
l13=si2;
sj0=si2?sj0:sj1;
l27=sj0;
sj0=l26;
sj1=l29;
si2=l13;
sj0=si2?sj0:sj1;
l29=sj0;
sj0=l19;
sj1=l30;
si2=l13;
sj0=si2?sj0:sj1;
l30=sj0;
L17:;
si0=l25;
si1=l15;
si0-=si1;
l31=si0;
si1=l16;
si0=si0 > si1;
if(si0){
goto L14;
}
si0=l22;
si0=!(si0);
if(si0){
goto L13;
}
si0=l17;
si0=!(si0);
if(si0){
goto L27;
}
sj0=0ULL;
l19=sj0;
si0=l23;
l16=si0;
si0=l18;
l13=si0;
si0=l17;
l4=si0;
L28:;
{
si0=l7;
si1=144U;
si0+=si1;
si1=l13;
sj1=i64_load(&i->m0,(U64)si1);
sj2=0ULL;
sj3=l30;
sj4=0ULL;
f15157(i,si0,sj1,sj2,sj3,sj4);
si0=l16;
si1=l16;
sj1=i64_load(&i->m0,(U64)si1);
l26=sj1;
sj2=l19;
si3=l7;
sj3=i64_load(&i->m0,(U64)si3+144U);
sj2+=sj3;
l20=sj2;
sj1-=sj2;
i64_store(&i->m0,(U64)si0,sj1);
sj0=l20;
sj1=l19;
si0=sj0 < sj1;
sj0=(U64)(si0);
si1=l7;
si2=144U;
si1+=si2;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
sj0+=sj1;
sj1=l26;
sj2=l20;
si1=sj1 < sj2;
sj1=(U64)(si1);
sj0+=sj1;
l19=sj0;
si0=l16;
si1=8U;
si0+=si1;
l16=si0;
si0=l13;
si1=8U;
si0+=si1;
l13=si0;
si0=l4;
si1=-1U;
si0+=si1;
l4=si0;
if(si0){
goto L28;
}
}
sj0=l29;
sj1=l19;
sj0-=sj1;
l20=sj0;
sj0=l29;
sj1=l19;
si0=sj0 >= sj1;
if(si0){
goto L30;
}
si0=l24;
sj1=l20;
i64_store(&i->m0,(U64)si0,sj1);
sj0=l27;
si0=!(sj0);
if(si0){
goto L29;
}
sj0=l27;
sj1=-1ULL;
sj0+=sj1;
l27=sj0;
goto L16;
L30:;
si0=l24;
sj1=l20;
i64_store(&i->m0,(U64)si0,sj1);
goto L16;
L29:;
si0=l25;
si1=l15;
si0=si0 < si1;
if(si0){
goto L31;
}
si0=0U;
l16=si0;
si0=l15;
l4=si0;
si0=0U;
l13=si0;
L32:;
{
si0=l23;
si1=l16;
si0+=si1;
l25=si0;
sj0=i64_load(&i->m0,(U64)si0);
l20=sj0;
si1=l18;
si2=l16;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
sj0+=sj1;
l19=sj0;
sj1=l20;
si0=sj0 < sj1;
l24=si0;
si0=l13;
si1=255U;
si0&=si1;
if(si0){
goto L34;
}
si0=l24;
l13=si0;
goto L33;
L34:;
si0=l24;
sj1=l19;
sj2=1ULL;
sj1+=sj2;
l19=sj1;
si1=!(sj1);
si0|=si1;
l13=si0;
L33:;
si0=l25;
sj1=l19;
i64_store(&i->m0,(U64)si0,sj1);
si0=l16;
si1=8U;
si0+=si1;
l16=si0;
si0=l4;
si1=-1U;
si0+=si1;
l4=si0;
if(si0){
goto L32;
}
}
sj0=l30;
sj1=-1ULL;
sj0+=sj1;
l30=sj0;
sj0=l9;
si1=l13;
si2=1U;
si1^=si2;
sj1=(U64)(si1);
sj0-=sj1;
l27=sj0;
goto L16;
L31:;
si0=l31;
si1=l25;
si2=1209720U;
f683(i,si0,si1,si2);
UNREACHABLE;
L27:;
si0=l24;
sj1=l29;
i64_store(&i->m0,(U64)si0,sj1);
L16:;
si0=l10;
si1=l1;
si0=si0 >= si1;
if(si0){
goto L35;
}
si0=l0;
si1=l10;
si2=3U;
si1<<=(si2&31);
si0+=si1;
sj1=l30;
i64_store(&i->m0,(U64)si0,sj1);
si0=l23;
si1=-8U;
si0+=si1;
l23=si0;
si0=l15;
si1=l10;
si0=si0 >= si1;
if(si0){
goto L2;
}
goto L15;
L35:;
}
si0=l10;
si1=l1;
si2=1209752U;
f594(i,si0,si1,si2);
UNREACHABLE;
L14:;
si0=l31;
si1=l16;
si2=1209688U;
f683(i,si0,si1,si2);
UNREACHABLE;
L13:;
si0=l17;
si1=l14;
si2=1209704U;
f597(i,si0,si1,si2);
UNREACHABLE;
L6:;
si0=1209768U;
si1=35U;
si2=1209804U;
f604(i,si0,si1,si2);
UNREACHABLE;
L5:;
si0=1208964U;
si1=39U;
si2=1209820U;
f604(i,si0,si1,si2);
UNREACHABLE;
L4:;
si0=1207680U;
si1=32U;
si2=1209836U;
f604(i,si0,si1,si2);
UNREACHABLE;
L3:;
si0=1209036U;
si1=27U;
si2=1209852U;
f604(i,si0,si1,si2);
UNREACHABLE;
L2:;
si0=l7;
sj1=l27;
i64_store(&i->m0,(U64)si0+192U,sj1);
L1:;
si0=1U;
l22=si0;
si0=l14;
si1=-1U;
si0+=si1;
switch(si0){
case 0:
goto L39;
case 1:
goto L38;
default:
goto L40;
}
L40:;
sj0=l9;
sj1=-1ULL;
sj0+=sj1;
l32=sj0;
si0=l2;
si1=l11;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l13=si0;
si0=1U;
l22=si0;
L43:;
{
si0=l15;
si1=-1U;
si0+=si1;
l25=si0;
si1=l8;
si0+=si1;
l17=si0;
si0=l22;
si1=1U;
si0&=si1;
si0=!(si0);
if(si0){
goto L46;
}
sj0=l27;
sj1=l9;
si0=sj0 >= sj1;
if(si0){
goto L46;
}
si0=l17;
si1=l3;
si0=si0 >= si1;
if(si0){
goto L41;
}
si0=l17;
si1=-1U;
si0+=si1;
l16=si0;
si1=l3;
si0=si0 < si1;
if(si0){
goto L45;
}
si0=l16;
si1=l3;
si2=1209496U;
f594(i,si0,si1,si2);
UNREACHABLE;
L46:;
si0=l11;
si1=l25;
si2=l5;
si1+=si2;
l16=si1;
si0=si0 > si1;
if(si0){
goto L48;
}
si0=l16;
si1=l3;
si0=si0 > si1;
if(si0){
goto L47;
}
sj0=0ULL;
l19=sj0;
si0=l25;
si1=-2U;
si0=si0 == si1;
l24=si0;
if(si0){
goto L49;
}
sj0=0ULL;
l19=sj0;
si0=0U;
l16=si0;
si0=0U;
l4=si0;
L50:;
{
si0=l7;
si1=112U;
si0+=si1;
si1=l18;
si2=l16;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
sj2=0ULL;
sj3=-1ULL;
sj4=0ULL;
f15157(i,si0,sj1,sj2,sj3,sj4);
si0=l13;
si1=l16;
si0+=si1;
l23=si0;
si1=l23;
sj1=i64_load(&i->m0,(U64)si1);
l26=sj1;
sj2=l19;
si3=l7;
sj3=i64_load(&i->m0,(U64)si3+112U);
sj2+=sj3;
l20=sj2;
sj1-=sj2;
i64_store(&i->m0,(U64)si0,sj1);
sj0=l20;
sj1=l19;
si0=sj0 < sj1;
sj0=(U64)(si0);
si1=l7;
si2=112U;
si1+=si2;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
sj0+=sj1;
sj1=l26;
sj2=l20;
si1=sj1 < sj2;
sj1=(U64)(si1);
sj0+=sj1;
l19=sj0;
si0=l16;
si1=8U;
si0+=si1;
l16=si0;
si0=l14;
si1=l4;
si2=1U;
si1+=si2;
l4=si1;
si0=si0 != si1;
if(si0){
goto L50;
}
}
L49:;
sj0=-1ULL;
l30=sj0;
sj0=l27;
sj1=l19;
si0=sj0 == sj1;
if(si0){
goto L51;
}
si0=l22;
si1=-1U;
si0^=si1;
l16=si0;
si0=0U;
l22=si0;
si0=l16;
sj1=l27;
sj2=l19;
si1=sj1 >= sj2;
si0|=si1;
si1=1U;
si0&=si1;
if(si0){
goto L51;
}
sj0=-2ULL;
l30=sj0;
si0=1U;
l22=si0;
si0=l24;
if(si0){
goto L51;
}
si0=0U;
l16=si0;
si0=0U;
l4=si0;
si0=0U;
l23=si0;
L52:;
{
si0=l13;
si1=l16;
si0+=si1;
l24=si0;
sj0=i64_load(&i->m0,(U64)si0);
l20=sj0;
si1=l18;
si2=l16;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
sj0+=sj1;
l19=sj0;
sj1=l20;
si0=sj0 < sj1;
l10=si0;
si0=l23;
si1=255U;
si0&=si1;
if(si0){
goto L54;
}
si0=l10;
l23=si0;
goto L53;
L54:;
si0=l10;
sj1=l19;
sj2=1ULL;
sj1+=sj2;
l19=sj1;
si1=!(sj1);
si0|=si1;
l23=si0;
L53:;
si0=l24;
sj1=l19;
i64_store(&i->m0,(U64)si0,sj1);
si0=l16;
si1=8U;
si0+=si1;
l16=si0;
si0=l14;
si1=l4;
si2=1U;
si1+=si2;
l4=si1;
si0=si0 != si1;
if(si0){
goto L52;
}
}
L51:;
si0=l17;
si1=l3;
si0=si0 >= si1;
if(si0){
goto L55;
}
si0=l2;
si1=l17;
si2=3U;
si1<<=(si2&31);
si0+=si1;
sj0=i64_load(&i->m0,(U64)si0);
l27=sj0;
goto L44;
L55:;
si0=l17;
si1=l3;
si2=1209592U;
f594(i,si0,si1,si2);
UNREACHABLE;
L48:;
si0=l11;
si1=l16;
si2=1209576U;
f683(i,si0,si1,si2);
UNREACHABLE;
L47:;
si0=l16;
si1=l3;
si2=1209576U;
f597(i,si0,si1,si2);
UNREACHABLE;
L45:;
si0=l7;
si1=96U;
si0+=si1;
sj1=l6;
sj2=1ULL;
sj3=l27;
sj4=0ULL;
f15157(i,si0,sj1,sj2,sj3,sj4);
si0=l7;
si1=80U;
si0+=si1;
si1=l7;
si2=96U;
si1+=si2;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
si2=l7;
sj2=i64_load(&i->m0,(U64)si2+96U);
l19=sj2;
si3=l2;
si4=l17;
si5=3U;
si4<<=(si5&31);
si3+=si4;
sj3=i64_load(&i->m0,(U64)si3);
l26=sj3;
sj2+=sj3;
l28=sj2;
sj3=l19;
si2=sj2 < sj3;
sj2=(U64)(si2);
sj1+=sj2;
l19=sj1;
sj2=0ULL;
sj3=l12;
sj4=0ULL;
f15157(i,si0,sj1,sj2,sj3,sj4);
si0=l2;
si1=l16;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l24=si0;
sj0=i64_load(&i->m0,(U64)si0);
l27=sj0;
sj1=l12;
si2=l7;
sj2=i64_load(&i->m0,(U64)si2+80U);
sj1+=sj2;
l20=sj1;
sj0-=sj1;
l29=sj0;
sj0=l19;
sj1=1ULL;
sj0+=sj1;
l30=sj0;
sj0=l28;
sj1=l26;
sj2=l9;
sj3=l19;
sj2*=sj3;
sj1-=sj2;
sj2=l9;
si3=l7;
si4=80U;
si3+=si4;
si4=8U;
si3+=si4;
sj3=i64_load(&i->m0,(U64)si3);
sj2+=sj3;
sj3=l20;
sj4=l12;
si3=sj3 < sj4;
sj3=(U64)(si3);
sj2+=sj3;
sj3=l27;
sj4=l20;
si3=sj3 < sj4;
sj3=(U64)(si3);
sj2+=sj3;
sj1-=sj2;
l27=sj1;
si0=sj0 <= sj1;
if(si0){
goto L57;
}
sj0=l29;
sj1=l12;
si0=sj0 < sj1;
l4=si0;
sj1=l27;
sj2=l9;
si1=sj1 < sj2;
sj2=l27;
sj3=l9;
si2=sj2 == sj3;
si0=si2?si0:si1;
if(si0){
goto L56;
}
sj0=l27;
sj1=l9;
sj0-=sj1;
si1=l4;
sj1=(U64)(si1);
sj0-=sj1;
l27=sj0;
sj0=l29;
sj1=l12;
sj0-=sj1;
l29=sj0;
sj0=l19;
sj1=2ULL;
sj0+=sj1;
l30=sj0;
goto L56;
L57:;
sj0=l27;
sj1=l9;
sj0+=sj1;
sj1=l29;
sj2=l12;
sj1+=sj2;
l26=sj1;
sj2=l29;
si1=sj1 < sj2;
l4=si1;
sj1=(U64)(si1);
sj0+=sj1;
l20=sj0;
sj1=l27;
si2=l4;
sj3=l20;
sj4=l27;
si3=sj3 < sj4;
sj4=l20;
sj5=l27;
si4=sj4 == sj5;
si2=si4?si2:si3;
l4=si2;
sj0=si2?sj0:sj1;
l27=sj0;
sj0=l26;
sj1=l29;
si2=l4;
sj0=si2?sj0:sj1;
l29=sj0;
sj0=l19;
sj1=l30;
si2=l4;
sj0=si2?sj0:sj1;
l30=sj0;
L56:;
si0=l11;
si1=l16;
si0=si0 > si1;
if(si0){
goto L62;
}
si0=l25;
si1=l14;
si0=si0 > si1;
if(si0){
goto L61;
}
si0=l16;
si1=l11;
si0=si0 == si1;
if(si0){
goto L60;
}
sj0=0ULL;
l19=sj0;
si0=2U;
l4=si0;
si0=0U;
l16=si0;
L63:;
{
si0=l7;
si1=64U;
si0+=si1;
si1=l18;
si2=l16;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
sj2=0ULL;
sj3=l30;
sj4=0ULL;
f15157(i,si0,sj1,sj2,sj3,sj4);
si0=l13;
si1=l16;
si0+=si1;
l23=si0;
si1=l23;
sj1=i64_load(&i->m0,(U64)si1);
l26=sj1;
sj2=l19;
si3=l7;
sj3=i64_load(&i->m0,(U64)si3+64U);
sj2+=sj3;
l20=sj2;
sj1-=sj2;
i64_store(&i->m0,(U64)si0,sj1);
sj0=l20;
sj1=l19;
si0=sj0 < sj1;
sj0=(U64)(si0);
si1=l7;
si2=64U;
si1+=si2;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
sj0+=sj1;
sj1=l26;
sj2=l20;
si1=sj1 < sj2;
sj1=(U64)(si1);
sj0+=sj1;
l19=sj0;
si0=l16;
si1=8U;
si0+=si1;
l16=si0;
si0=l14;
si1=l4;
si2=1U;
si1+=si2;
l4=si1;
si0=si0 != si1;
if(si0){
goto L63;
}
}
sj0=l29;
sj1=l19;
sj0-=sj1;
l20=sj0;
sj0=l29;
sj1=l19;
si0=sj0 >= sj1;
if(si0){
goto L65;
}
si0=l24;
sj1=l20;
i64_store(&i->m0,(U64)si0,sj1);
si0=1U;
l22=si0;
sj0=l27;
si0=!(sj0);
if(si0){
goto L64;
}
sj0=l27;
sj1=-1ULL;
sj0+=sj1;
l27=sj0;
goto L44;
L65:;
si0=l24;
sj1=l20;
i64_store(&i->m0,(U64)si0,sj1);
si0=1U;
l22=si0;
goto L44;
L64:;
si0=l11;
si1=l17;
si0=si0 > si1;
if(si0){
goto L59;
}
si0=l15;
si1=l14;
si0=si0 > si1;
if(si0){
goto L58;
}
sj0=l32;
l27=sj0;
si0=l15;
si0=!(si0);
if(si0){
goto L66;
}
si0=0U;
l16=si0;
si0=1U;
l23=si0;
si0=0U;
l4=si0;
L67:;
{
si0=l13;
si1=l16;
si0+=si1;
l24=si0;
sj0=i64_load(&i->m0,(U64)si0);
l20=sj0;
si1=l18;
si2=l16;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
sj0+=sj1;
l19=sj0;
sj1=l20;
si0=sj0 < sj1;
l10=si0;
si0=l4;
si1=255U;
si0&=si1;
if(si0){
goto L69;
}
si0=l10;
l4=si0;
goto L68;
L69:;
si0=l10;
sj1=l19;
sj2=1ULL;
sj1+=sj2;
l19=sj1;
si1=!(sj1);
si0|=si1;
l4=si0;
L68:;
si0=l24;
sj1=l19;
i64_store(&i->m0,(U64)si0,sj1);
si0=l16;
si1=8U;
si0+=si1;
l16=si0;
si0=l14;
si1=l23;
si2=1U;
si1+=si2;
l23=si1;
si0=si0 != si1;
if(si0){
goto L67;
}
}
sj0=l9;
sj1=l32;
si2=l4;
sj0=si2?sj0:sj1;
l27=sj0;
L66:;
sj0=l30;
sj1=-1ULL;
sj0+=sj1;
l30=sj0;
goto L44;
L62:;
si0=l11;
si1=l16;
si2=1209512U;
f683(i,si0,si1,si2);
UNREACHABLE;
L61:;
si0=l25;
si1=l14;
si2=1209528U;
f597(i,si0,si1,si2);
UNREACHABLE;
L60:;
si0=l24;
sj1=l29;
i64_store(&i->m0,(U64)si0,sj1);
si0=1U;
l22=si0;
goto L44;
L59:;
si0=l11;
si1=l17;
si2=1209544U;
f683(i,si0,si1,si2);
UNREACHABLE;
L58:;
si0=l15;
si1=l14;
si2=1209560U;
f597(i,si0,si1,si2);
UNREACHABLE;
L44:;
si0=l25;
si1=l1;
si0=si0 >= si1;
if(si0){
goto L70;
}
si0=l0;
si1=l25;
si2=3U;
si1<<=(si2&31);
si0+=si1;
sj1=l30;
i64_store(&i->m0,(U64)si0,sj1);
si0=l14;
si0=!(si0);
if(si0){
goto L42;
}
si0=l18;
si1=8U;
si0+=si1;
l18=si0;
si0=l14;
si1=-1U;
si0+=si1;
l14=si0;
si0=l25;
l15=si0;
si0=l25;
si1=1U;
si0=si0 <= si1;
if(si0){
goto L38;
}
goto L43;
L70:;
}
si0=l25;
si1=l1;
si2=1209608U;
f594(i,si0,si1,si2);
UNREACHABLE;
L42:;
si0=1U;
si1=0U;
si2=1209624U;
f593(i,si0,si1,si2);
UNREACHABLE;
L41:;
si0=l17;
si1=l3;
si2=1209480U;
f594(i,si0,si1,si2);
UNREACHABLE;
L39:;
si0=l2;
si1=l8;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l16=si0;
sj0=i64_load(&i->m0,(U64)si0);
sj1=l27;
si0=sj0 == sj1;
if(si0){
goto L37;
}
si0=l7;
si1=0U;
i32_store(&i->m0,(U64)si0+200U,si1);
si0=0U;
si1=l16;
si2=l7;
si3=192U;
si2+=si3;
si3=l7;
si4=200U;
si3+=si4;
si4=1209464U;
f1251(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L38:;
si0=l3;
si1=l11;
si0-=si1;
l13=si0;
si0=l2;
si1=l11;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l16=si0;
si0=l22;
si1=1U;
si0&=si1;
si0=!(si0);
if(si0){
goto L76;
}
sj0=l27;
sj1=l9;
si0=sj0 >= sj1;
if(si0){
goto L76;
}
si0=l13;
si1=1U;
si0=si0 > si1;
if(si0){
goto L75;
}
si0=1U;
si1=l13;
si2=1209416U;
f594(i,si0,si1,si2);
UNREACHABLE;
L76:;
si0=l13;
si1=1U;
si0=si0 <= si1;
if(si0){
goto L74;
}
sj0=-1ULL;
l20=sj0;
si0=l7;
si1=48U;
si0+=si1;
si1=l18;
sj1=i64_load(&i->m0,(U64)si1);
l12=sj1;
sj2=0ULL;
sj3=-1ULL;
sj4=0ULL;
f15157(i,si0,sj1,sj2,sj3,sj4);
si0=l16;
si1=l16;
sj1=i64_load(&i->m0,(U64)si1);
l19=sj1;
si2=l7;
sj2=i64_load(&i->m0,(U64)si2+48U);
l26=sj2;
sj1-=sj2;
l9=sj1;
i64_store(&i->m0,(U64)si0,sj1);
si0=l7;
si1=32U;
si0+=si1;
si1=l18;
sj1=i64_load(&i->m0,(U64)si1+8U);
l29=sj1;
sj2=0ULL;
sj3=-1ULL;
sj4=0ULL;
f15157(i,si0,sj1,sj2,sj3,sj4);
si0=l16;
si1=l16;
sj1=i64_load(&i->m0,(U64)si1+8U);
l30=sj1;
si2=l7;
si3=48U;
si2+=si3;
si3=8U;
si2+=si3;
sj2=i64_load(&i->m0,(U64)si2);
sj3=l19;
sj4=l26;
si3=sj3 < sj4;
sj3=(U64)(si3);
sj2+=sj3;
l26=sj2;
si3=l7;
sj3=i64_load(&i->m0,(U64)si3+32U);
sj2+=sj3;
l19=sj2;
sj1-=sj2;
l28=sj1;
i64_store(&i->m0,(U64)si0+8U,sj1);
si0=l22;
sj1=l27;
sj2=l19;
sj3=l26;
si2=sj2 < sj3;
sj2=(U64)(si2);
si3=l7;
si4=32U;
si3+=si4;
si4=8U;
si3+=si4;
sj3=i64_load(&i->m0,(U64)si3);
sj2+=sj3;
sj3=l30;
sj4=l19;
si3=sj3 < sj4;
sj3=(U64)(si3);
sj2+=sj3;
si1=sj1 < sj2;
si0&=si1;
si0=!(si0);
if(si0){
goto L71;
}
si0=l16;
sj1=l9;
sj2=l12;
sj1+=sj2;
l19=sj1;
i64_store(&i->m0,(U64)si0,sj1);
si0=l16;
sj1=l28;
sj2=l29;
sj1+=sj2;
sj2=l19;
sj3=l9;
si2=sj2 < sj3;
sj2=(U64)(si2);
sj1+=sj2;
i64_store(&i->m0,(U64)si0+8U,sj1);
sj0=-2ULL;
l20=sj0;
goto L71;
L75:;
si0=l7;
si1=16U;
si0+=si1;
sj1=l6;
sj2=1ULL;
sj3=l27;
sj4=0ULL;
f15157(i,si0,sj1,sj2,sj3,sj4);
si0=l7;
si1=l7;
si2=16U;
si1+=si2;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
si2=l7;
sj2=i64_load(&i->m0,(U64)si2+16U);
l19=sj2;
si3=l16;
sj3=i64_load(&i->m0,(U64)si3+8U);
l27=sj3;
sj2+=sj3;
l29=sj2;
sj3=l19;
si2=sj2 < sj3;
sj2=(U64)(si2);
sj1+=sj2;
l30=sj1;
sj2=0ULL;
sj3=l12;
sj4=0ULL;
f15157(i,si0,sj1,sj2,sj3,sj4);
sj0=l30;
sj1=1ULL;
sj0+=sj1;
l20=sj0;
si0=l16;
sj0=i64_load(&i->m0,(U64)si0);
l28=sj0;
sj1=l12;
si2=l7;
sj2=i64_load(&i->m0,(U64)si2);
sj1+=sj2;
l19=sj1;
sj0-=sj1;
l26=sj0;
sj0=l29;
sj1=l27;
sj2=l9;
sj3=l30;
sj2*=sj3;
sj1-=sj2;
sj2=l9;
si3=l7;
si4=8U;
si3+=si4;
sj3=i64_load(&i->m0,(U64)si3);
sj2+=sj3;
sj3=l19;
sj4=l12;
si3=sj3 < sj4;
sj3=(U64)(si3);
sj2+=sj3;
sj3=l28;
sj4=l19;
si3=sj3 < sj4;
sj3=(U64)(si3);
sj2+=sj3;
sj1-=sj2;
l19=sj1;
si0=sj0 <= sj1;
if(si0){
goto L73;
}
sj0=l26;
sj1=l12;
si0=sj0 < sj1;
l13=si0;
sj1=l19;
sj2=l9;
si1=sj1 < sj2;
sj2=l19;
sj3=l9;
si2=sj2 == sj3;
si0=si2?si0:si1;
if(si0){
goto L72;
}
sj0=l19;
sj1=l9;
sj0-=sj1;
si1=l13;
sj1=(U64)(si1);
sj0-=sj1;
l19=sj0;
sj0=l26;
sj1=l12;
sj0-=sj1;
l26=sj0;
sj0=l30;
sj1=2ULL;
sj0+=sj1;
l20=sj0;
goto L72;
L74:;
si0=2U;
si1=l13;
si2=1209432U;
f597(i,si0,si1,si2);
UNREACHABLE;
L73:;
sj0=l19;
sj1=l9;
sj0+=sj1;
sj1=l26;
sj2=l12;
sj1+=sj2;
l9=sj1;
sj2=l26;
si1=sj1 < sj2;
l13=si1;
sj1=(U64)(si1);
sj0+=sj1;
l27=sj0;
sj1=l19;
si2=l13;
sj3=l27;
sj4=l19;
si3=sj3 < sj4;
sj4=l27;
sj5=l19;
si4=sj4 == sj5;
si2=si4?si2:si3;
l13=si2;
sj0=si2?sj0:sj1;
l19=sj0;
sj0=l9;
sj1=l26;
si2=l13;
sj0=si2?sj0:sj1;
l26=sj0;
sj0=l30;
sj1=l20;
si2=l13;
sj0=si2?sj0:sj1;
l20=sj0;
L72:;
si0=l16;
sj1=l19;
i64_store(&i->m0,(U64)si0+8U,sj1);
si0=l16;
sj1=l26;
i64_store(&i->m0,(U64)si0,sj1);
L71:;
si0=l1;
si0=!(si0);
if(si0){
goto L36;
}
si0=l0;
sj1=l20;
i64_store(&i->m0,(U64)si0,sj1);
L37:;
si0=l7;
si1=224U;
si0+=si1;
i->g0=si0;
si0=l21;
si1=-1U;
si0=(U32)((I32)si0>(I32)si1);
goto L0;
L36:;
si0=0U;
si1=0U;
si2=1209448U;
f594(i,si0,si1,si2);
UNREACHABLE;
L0:;
return si0;
}

U32 f1091(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4,U32 l5,U32 l6,U32 l7,U32 l8) {
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
U32 l19=0;
U32 l20=0;
U64 l21=0;
U32 l22=0;
U32 l23=0;
U32 l24=0;
U64 l25=0;
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
U32 l46=0;
U32 l47=0;
U64 l48=0;
U64 l49=0;
U32 si0,si1,si2,si3,si4,si5,si6,si7,si8,si9;
U64 sj0,sj1,sj2,sj3,sj4;
si0=i->g0;
si1=64U;
si0-=si1;
l9=si0;
i->g0=si0;
si0=l6;
si1=2U;
si0=si0 < si1;
if(si0){
goto L6;
}
si0=l4;
si1=l3;
si0+=si1;
l10=si0;
si1=l6;
si0=si0 < si1;
if(si0){
goto L5;
}
si0=l6;
si1=3U;
si0<<=(si1&31);
si1=l5;
si0+=si1;
si1=-8U;
si0+=si1;
sj0=i64_load(&i->m0,(U64)si0);
sj1=-1ULL;
si0=(U64)((I64)sj0>(I64)sj1);
if(si0){
goto L2;
}
si0=l10;
si1=l6;
si0-=si1;
l10=si0;
si1=1U;
si0+=si1;
l11=si0;
si1=l6;
si0=si0 < si1;
if(si0){
goto L7;
}
si0=l6;
l11=si0;
goto L1;
L7:;
si0=l10;
si1=-1U;
si0^=si1;
si1=l6;
si0+=si1;
l12=si0;
si0=l4;
if(si0){
goto L8;
}
si0=l3;
si1=l12;
si0=si0 < si1;
if(si0){
goto L4;
}
si0=l12;
si1=l6;
si0=si0 > si1;
if(si0){
goto L9;
}
si0=l3;
si1=l12;
si0-=si1;
l3=si0;
si0=l5;
si1=l12;
si2=3U;
si1<<=(si2&31);
l6=si1;
si0+=si1;
l5=si0;
si0=l2;
si1=l6;
si0+=si1;
l2=si0;
si0=0U;
l4=si0;
goto L1;
L9:;
si0=l12;
si1=l6;
si2=1207400U;
f593(i,si0,si1,si2);
UNREACHABLE;
L8:;
si0=l3;
si1=l12;
si2=-1U;
si1+=si2;
l13=si1;
si0=si0 < si1;
if(si0){
goto L3;
}
si0=l12;
si1=l6;
si0=si0 > si1;
if(si0){
goto L10;
}
si0=l3;
si1=l13;
si0-=si1;
l3=si0;
si0=l5;
si1=l12;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l5=si0;
si0=l2;
si1=l13;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l2=si0;
si0=0U;
l4=si0;
goto L1;
L10:;
si0=l12;
si1=l6;
si2=1207580U;
f593(i,si0,si1,si2);
UNREACHABLE;
L6:;
si0=1207728U;
si1=27U;
si2=1207756U;
f604(i,si0,si1,si2);
UNREACHABLE;
L5:;
si0=1207680U;
si1=32U;
si2=1207712U;
f604(i,si0,si1,si2);
UNREACHABLE;
L4:;
si0=l12;
si1=l3;
si2=1207416U;
f593(i,si0,si1,si2);
UNREACHABLE;
L3:;
si0=l13;
si1=l3;
si2=1207596U;
f593(i,si0,si1,si2);
UNREACHABLE;
L2:;
si0=1207612U;
si1=49U;
si2=1207664U;
f604(i,si0,si1,si2);
UNREACHABLE;
L1:;
si0=l10;
si1=l11;
si0=si0 > si1;
if(si0){
goto L13;
}
si0=l10;
si1=3U;
si0*=si1;
si1=l11;
si0=si0 > si1;
if(si0){
goto L14;
}
si0=l10;
si1=1U;
si2=l10;
si3=1U;
si2=si2 > si3;
si0=si2?si0:si1;
l14=si0;
goto L12;
L14:;
si0=0U;
si1=l10;
si2=-1U;
si1+=si2;
l6=si1;
si2=l6;
si3=l10;
si2=si2 > si3;
si0=si2?si0:si1;
si1=1U;
si0>>=(si1&31);
si1=1U;
si0+=si1;
l14=si0;
goto L12;
L13:;
si0=l11;
si0=!(si0);
if(si0){
goto L11;
}
si0=l10;
si1=-1U;
si0+=si1;
l6=si0;
si1=l6;
si2=l11;
si1=DIV_U(si1,si2);
si2=1U;
si1+=si2;
si0=DIV_U(si0,si1);
si1=1U;
si0+=si1;
l14=si0;
L12:;
si0=l11;
si1=l14;
si0=si0 >= si1;
if(si0){
goto L15;
}
si0=1207528U;
si1=34U;
si2=1207564U;
f604(i,si0,si1,si2);
UNREACHABLE;
L15:;
si0=l8;
si1=l14;
si2=1U;
si1+=si2;
l13=si1;
si0=si0 < si1;
if(si0){
goto L23;
}
si0=l8;
si1=l13;
si0-=si1;
l15=si0;
si0=l7;
si1=l13;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l16=si0;
si0=l11;
si1=l14;
si0=si0 == si1;
if(si0){
goto L30;
}
si0=l11;
si1=l13;
si0-=si1;
l6=si0;
si0=l11;
si1=l13;
si0=si0 >= si1;
if(si0){
goto L29;
}
si0=l6;
si1=l11;
si2=1207464U;
f593(i,si0,si1,si2);
UNREACHABLE;
L30:;
si0=l13;
si0=!(si0);
if(si0){
goto L24;
}
si0=l15;
si1=l13;
si0=si0 < si1;
if(si0){
goto L25;
}
si0=l16;
si1=8U;
si0+=si1;
si1=l5;
si2=l11;
si3=3U;
si2<<=(si3&31);
l6=si2;
si0=f15143(i,si0,si1,si2);
si0=l8;
si1=l13;
si0=si0 == si1;
if(si0){
goto L22;
}
si0=l16;
sj1=1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l7;
si1=l13;
si2=l16;
si3=l13;
si4=l16;
si5=l13;
si6=3U;
si5<<=(si6&31);
si4+=si5;
si5=l15;
si6=l13;
si5-=si6;
si0=f1178(i,si0,si1,si2,si3,si4,si5);
si0=l7;
si1=l7;
si2=8U;
si1+=si2;
si2=l6;
si0=f15144(i,si0,si1,si2);
goto L28;
L29:;
si0=l15;
si1=l13;
si0=si0 < si1;
if(si0){
goto L26;
}
si0=l13;
si0=!(si0);
if(si0){
goto L27;
}
si0=l16;
si1=l5;
si2=l6;
si3=3U;
si2<<=(si3&31);
si1+=si2;
l17=si1;
sj1=i64_load(&i->m0,(U64)si1);
sj2=1ULL;
sj1+=sj2;
l18=sj1;
i64_store(&i->m0,(U64)si0,sj1);
si0=0U;
l6=si0;
sj0=l18;
sj1=0ULL;
si0=sj0 != sj1;
if(si0){
goto L32;
}
si0=l5;
si1=l11;
si2=3U;
si1<<=(si2&31);
si2=l14;
si3=3U;
si2<<=(si3&31);
l6=si2;
si1-=si2;
si0+=si1;
l10=si0;
si0=l6;
si1=l7;
si0+=si1;
si1=16U;
si0+=si1;
l12=si0;
si0=0U;
l6=si0;
L33:;
{
si0=l14;
si1=l6;
si0=si0 == si1;
if(si0){
goto L31;
}
si0=l12;
si1=l10;
sj1=i64_load(&i->m0,(U64)si1);
sj2=1ULL;
sj1+=sj2;
l18=sj1;
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
si1=1U;
si0+=si1;
l6=si0;
sj0=l18;
si0=!(sj0);
if(si0){
goto L33;
}
}
L32:;
si0=l16;
si1=l6;
si2=1U;
si1+=si2;
l6=si1;
si2=3U;
si1<<=(si2&31);
l10=si1;
si0+=si1;
si1=l17;
si2=l10;
si1+=si2;
si2=l13;
si3=l6;
si2-=si3;
si3=3U;
si2<<=(si3&31);
si0=f15143(i,si0,si1,si2);
si0=l7;
si1=l13;
si2=l16;
si3=l13;
si4=l16;
si5=l13;
si6=3U;
si5<<=(si6&31);
si4+=si5;
si5=l15;
si6=l13;
si5-=si6;
si0=f1178(i,si0,si1,si2,si3,si4,si5);
si0=l7;
si1=l7;
si2=8U;
si1+=si2;
si2=l14;
si3=3U;
si2<<=(si3&31);
si0=f15144(i,si0,si1,si2);
goto L28;
L31:;
si0=l14;
si1=-1U;
si0=si0 == si1;
if(si0){
goto L27;
}
si0=l7;
si1=0U;
si2=l14;
si3=3U;
si2<<=(si3&31);
si0=f15145(i,si0,si1,si2);
L28:;
si0=l8;
si1=l14;
si0=si0 < si1;
if(si0){
goto L34;
}
si0=l9;
si1=l3;
si2=l11;
si1-=si2;
si2=l4;
si1+=si2;
l19=si1;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l19;
si1=l1;
si0=si0 > si1;
if(si0){
goto L35;
}
si0=l19;
l15=si0;
si0=l4;
si0=!(si0);
if(si0){
goto L37;
}
si0=l19;
si0=!(si0);
if(si0){
goto L36;
}
si0=l19;
si1=-1U;
si0+=si1;
l15=si0;
L37:;
si0=l3;
si1=l15;
si0=si0 < si1;
if(si0){
goto L38;
}
si0=l9;
si1=l3;
si2=l15;
si1-=si2;
l6=si1;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l9;
si1=l11;
i32_store(&i->m0,(U64)si0+36U,si1);
si0=l6;
si1=l11;
si0=si0 != si1;
if(si0){
goto L41;
}
si0=l8;
si1=l14;
si0-=si1;
l20=si0;
si0=l7;
si1=l14;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l16=si0;
si0=l2;
si1=l15;
si2=3U;
si1<<=(si2&31);
l12=si1;
si0+=si1;
l1=si0;
si0=l3;
si1=3U;
si0<<=(si1&31);
l6=si0;
si0=l11;
si1=3U;
si0<<=(si1&31);
l10=si0;
L42:;
{
si0=l12;
si1=l6;
si0=si0 == si1;
if(si0){
goto L40;
}
si0=-1U;
si1=l10;
si2=-8U;
si1+=si2;
l10=si1;
si2=l5;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
l18=sj1;
si2=l6;
si3=-8U;
si2+=si3;
l6=si2;
si3=l2;
si2+=si3;
sj2=i64_load(&i->m0,(U64)si2);
l21=sj2;
si1=sj1 != sj2;
sj2=l18;
sj3=l21;
si2=sj2 > sj3;
si0=si2?si0:si1;
l22=si0;
si0=!(si0);
if(si0){
goto L42;
}
goto L39;
}
L41:;
si0=l9;
si1=0U;
i32_store(&i->m0,(U64)si0+40U,si1);
si0=0U;
si1=l9;
si2=32U;
si1+=si2;
si2=l9;
si3=36U;
si2+=si3;
si3=l9;
si4=40U;
si3+=si4;
si4=1231576U;
f1250(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L40:;
si0=-1U;
si1=0U;
si2=l10;
si0=si2?si0:si1;
l22=si0;
L39:;
si0=l19;
if(si0){
goto L43;
}
si0=l22;
si1=-1U;
si0=(U32)((I32)si0>(I32)si1);
l6=si0;
goto L16;
L43:;
si0=l20;
si1=l11;
si0=si0 < si1;
if(si0){
goto L44;
}
si0=l11;
si1=3U;
si0<<=(si1&31);
l23=si0;
si0=l22;
si1=-1U;
si0=(U32)((I32)si0>(I32)si1);
if(si0){
goto L46;
}
si0=l16;
si1=l1;
si2=l23;
si0=f15143(i,si0,si1,si2);
goto L45;
L46:;
si0=l3;
si1=l15;
si0=si0 == si1;
if(si0){
goto L45;
}
si0=l11;
si1=1U;
si0&=si1;
l24=si0;
si0=0U;
l10=si0;
si0=0U;
l12=si0;
si0=l11;
si1=1U;
si0=si0 == si1;
if(si0){
goto L47;
}
si0=l11;
si1=-2U;
si0&=si1;
l17=si0;
si0=0U;
l6=si0;
si0=0U;
l10=si0;
si0=0U;
l12=si0;
L48:;
{
si0=l16;
si1=l6;
si0+=si1;
l13=si0;
si1=l1;
si2=l6;
si1+=si2;
l3=si1;
sj1=i64_load(&i->m0,(U64)si1);
l18=sj1;
si2=l10;
sj2=(U64)(si2);
sj3=1ULL;
sj2&=sj3;
sj1-=sj2;
si2=l5;
si3=l6;
si2+=si3;
l8=si2;
sj2=i64_load(&i->m0,(U64)si2);
l21=sj2;
sj1-=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l13;
si1=8U;
si0+=si1;
si1=l3;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
l25=sj1;
sj2=l18;
sj3=l21;
si2=sj2 <= sj3;
sj3=l18;
sj4=l21;
si3=sj3 < sj4;
si4=l10;
si5=1U;
si4&=si5;
si2=si4?si2:si3;
l10=si2;
sj2=(U64)(si2);
sj1-=sj2;
si2=l8;
si3=8U;
si2+=si3;
sj2=i64_load(&i->m0,(U64)si2);
l18=sj2;
sj1-=sj2;
i64_store(&i->m0,(U64)si0,sj1);
sj0=l25;
sj1=l18;
si0=sj0 <= sj1;
sj1=l25;
sj2=l18;
si1=sj1 < sj2;
si2=l10;
si0=si2?si0:si1;
l10=si0;
si0=l6;
si1=16U;
si0+=si1;
l6=si0;
si0=l17;
si1=l12;
si2=2U;
si1+=si2;
l12=si1;
si0=si0 != si1;
if(si0){
goto L48;
}
}
L47:;
si0=l24;
si0=!(si0);
if(si0){
goto L45;
}
si0=l16;
si1=l12;
si2=3U;
si1<<=(si2&31);
l6=si1;
si0+=si1;
si1=l1;
si2=l6;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
si2=l10;
sj2=(U64)(si2);
sj1-=sj2;
si2=l5;
si3=l6;
si2+=si3;
sj2=i64_load(&i->m0,(U64)si2);
sj1-=sj2;
i64_store(&i->m0,(U64)si0,sj1);
L45:;
si0=0U;
l26=si0;
si0=l14;
si1=31U;
si0=si0 < si1;
if(si0){
goto L50;
}
si0=l11;
si1=1U;
si0+=si1;
l26=si0;
si1=13U;
si0=si0 < si1;
if(si0){
goto L50;
}
si0=l26;
sj1=1ULL;
sj2=2ULL;
sj3=3ULL;
si4=l26;
si5=97U;
si4=si4 < si5;
sj2=si4?sj2:sj3;
si3=l26;
si4=49U;
si3=si3 < si4;
sj1=si3?sj1:sj2;
l18=sj1;
si2=3U;
si0=f1012(i,si0,sj1,si2);
l6=si0;
si0=0U;
l26=si0;
si0=l6;
si0=!(si0);
if(si0){
goto L50;
}
si0=l6;
sj1=l18;
si1=(U32)(sj1);
l10=si1;
si0<<=(si1&31);
l26=si0;
si1=l10;
si0>>=(si1&31);
si1=l6;
si0=si0 != si1;
if(si0){
goto L49;
}
L50:;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=l4;
if(si0){
goto L54;
}
si0=12U;
si0=f15022(i,si0);
l27=si0;
si0=!(si0);
if(si0){
goto L51;
}
si0=l27;
si1=l15;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l27;
si1=l2;
i32_store(&i->m0,(U64)si0,si1);
si0=l27;
si1=8U;
si0+=si1;
l6=si0;
si0=1207840U;
l28=si0;
goto L53;
L54:;
si0=24U;
si0=f15022(i,si0);
l27=si0;
si0=!(si0);
if(si0){
goto L52;
}
si0=l27;
si1=l15;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l27;
si1=l2;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l27;
si1=0U;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l27;
si1=1206464U;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l27;
si1=1U;
i32_store(&i->m0,(U64)si0,si1);
si0=l27;
si1=20U;
si0+=si1;
l6=si0;
si0=1207868U;
l28=si0;
L53:;
si0=l6;
si1=l14;
i32_store(&i->m0,(U64)si0,si1);
si0=8U;
l29=si0;
si0=l14;
si0=f1120(i,si0);
l30=si0;
si0=!(si0);
if(si0){
goto L56;
}
si0=l30;
si1=268435455U;
si0=si0 > si1;
if(si0){
goto L21;
}
si0=l30;
si1=3U;
si0<<=(si1&31);
l6=si0;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L21;
}
si0=l6;
si0=!(si0);
if(si0){
goto L56;
}
si0=l6;
si1=1U;
si0=f15026(i,si0,si1);
l29=si0;
si0=!(si0);
if(si0){
goto L55;
}
L56:;
si0=l9;
si1=16U;
si0+=si1;
si1=l27;
si2=l28;
si2=i32_load(&i->m0,(U64)si2+12U);
l31=si2;
TF(i->t0,si2,void (*)(rustpythonInstance*,U32,U32))(i,si0,si1);
si0=l9;
si0=i32_load(&i->m0,(U64)si0+16U);
l32=si0;
si0=!(si0);
if(si0){
goto L18;
}
si0=l20;
si1=l11;
si0-=si1;
l33=si0;
si0=l11;
si1=l14;
si0-=si1;
l34=si0;
si0=l16;
si1=l23;
si0+=si1;
l35=si0;
si1=l11;
si2=3U;
si1<<=(si2&31);
l36=si1;
si0+=si1;
l37=si0;
si0=l9;
si0=i32_load(&i->m0,(U64)si0+20U);
l24=si0;
si0=l14;
si1=3U;
si0<<=(si1&31);
si1=l7;
si0+=si1;
l6=si0;
si1=l36;
si0+=si1;
si1=8U;
si0+=si1;
l38=si0;
si0=l5;
si1=-8U;
si0+=si1;
l15=si0;
si0=l11;
si1=1U;
si0&=si1;
l17=si0;
si0=l11;
si1=-1U;
si0+=si1;
l20=si0;
si0=0U;
si1=l11;
si2=-2U;
si1&=si2;
l8=si1;
si0-=si1;
l39=si0;
si0=l6;
si1=-8U;
si0+=si1;
l1=si0;
si0=l14;
l40=si0;
si0=l14;
l23=si0;
si0=l19;
l41=si0;
si0=l14;
l42=si0;
si0=l19;
l43=si0;
L57:;
{
si0=l23;
si1=l43;
si2=l14;
si3=l43;
si4=l14;
si3=si3 < si4;
si1=si3?si1:si2;
l44=si1;
si0=si0 == si1;
if(si0){
goto L58;
}
si0=l40;
si1=l23;
si2=l44;
si1-=si2;
l6=si1;
si0=si0 < si1;
if(si0){
goto L59;
}
si0=l11;
si1=l44;
si0-=si1;
l34=si0;
si0=l40;
si1=l6;
si0-=si1;
l40=si0;
si0=l7;
si1=l6;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l7=si0;
si0=l44;
l42=si0;
si0=l44;
l23=si0;
goto L58;
L59:;
si0=l6;
si1=l40;
si2=1208104U;
f593(i,si0,si1,si2);
UNREACHABLE;
L58:;
si0=l11;
si1=l34;
si0=si0 < si1;
if(si0){
goto L64;
}
si0=l35;
si1=l33;
si2=l16;
si3=l34;
si4=3U;
si3<<=(si4&31);
l45=si3;
si2+=si3;
l46=si2;
si3=l11;
si4=l34;
si3-=si4;
l6=si3;
si4=l7;
si5=l40;
si6=l29;
si7=l30;
f1121(i,si0,si1,si2,si3,si4,si5,si6,si7);
si0=l23;
si1=1U;
si0<<=(si1&31);
l10=si0;
si0=l23;
si1=0U;
si0=(U32)((I32)si0<(I32)si1);
if(si0){
goto L63;
}
si0=l10;
si1=l33;
si0=si0 > si1;
if(si0){
goto L62;
}
si0=l9;
si1=l23;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l9;
si1=l6;
i32_store(&i->m0,(U64)si0+36U,si1);
si0=l23;
si1=l6;
si0=si0 != si1;
if(si0){
goto L19;
}
si0=l23;
si1=l44;
si0=si0 > si1;
if(si0){
goto L20;
}
si0=l0;
si1=l43;
si2=l44;
si1-=si2;
l47=si1;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l4=si0;
si0=l23;
si0=!(si0);
if(si0){
goto L69;
}
si0=l35;
si1=l23;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l6=si0;
si0=0U;
l12=si0;
si0=l23;
l13=si0;
si0=l46;
l10=si0;
si0=l4;
l2=si0;
L70:;
{
si0=l6;
sj0=i64_load(&i->m0,(U64)si0);
l21=sj0;
si1=l10;
sj1=i64_load(&i->m0,(U64)si1);
sj0+=sj1;
l18=sj0;
sj1=l21;
si0=sj0 < sj1;
l3=si0;
si0=l12;
si1=255U;
si0&=si1;
if(si0){
goto L72;
}
si0=l3;
l12=si0;
goto L71;
L72:;
si0=l3;
sj1=l18;
sj2=1ULL;
sj1+=sj2;
l18=sj1;
si1=!(sj1);
si0|=si1;
l12=si0;
L71:;
si0=l2;
sj1=l18;
i64_store(&i->m0,(U64)si0,sj1);
si0=l6;
si1=8U;
si0+=si1;
l6=si0;
si0=l10;
si1=8U;
si0+=si1;
l10=si0;
si0=l2;
si1=8U;
si0+=si1;
l2=si0;
si0=l13;
si1=-1U;
si0+=si1;
l13=si0;
if(si0){
goto L70;
}
}
si0=l12;
if(si0){
goto L67;
}
si0=l41;
si1=l23;
si0=si0 == si1;
if(si0){
goto L18;
}
si0=l41;
si1=l23;
si0-=si1;
l41=si0;
si0=l23;
si1=31U;
si0=si0 < si1;
if(si0){
goto L68;
}
si0=l35;
si1=l33;
si2=l5;
si3=l11;
si4=l4;
si5=l44;
si6=l46;
si7=l23;
si8=l26;
si9=l23;
f1179(i,si0,si1,si2,si3,si4,si5,si6,si7,si8,si9);
goto L60;
L69:;
si0=l41;
si0=!(si0);
if(si0){
goto L18;
}
L68:;
si0=l11;
si1=l44;
si0=f1126(i,si0,si1);
l6=si0;
si0=!(si0);
if(si0){
goto L65;
}
si0=l6;
si1=268435455U;
si0=si0 > si1;
if(si0){
goto L21;
}
si0=l6;
si1=3U;
si0<<=(si1&31);
l2=si0;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L21;
}
si0=l2;
if(si0){
goto L66;
}
si0=8U;
l10=si0;
goto L61;
L67:;
si0=1208064U;
si1=24U;
si2=1208088U;
f604(i,si0,si1,si2);
UNREACHABLE;
L66:;
si0=l2;
si1=1U;
si0=f15026(i,si0,si1);
l10=si0;
if(si0){
goto L61;
}
si0=8U;
si1=l2;
f52(i,si0,si1);
UNREACHABLE;
L65:;
si0=l35;
si1=l33;
si2=l5;
si3=l11;
si4=l4;
si5=l44;
si6=8U;
si7=0U;
sj0=f1127(i,si0,si1,si2,si3,si4,si5,si6,si7);
goto L60;
L64:;
si0=1206841U;
si1=35U;
si2=1207896U;
f604(i,si0,si1,si2);
UNREACHABLE;
L63:;
si0=l23;
si1=l10;
si2=1207912U;
f683(i,si0,si1,si2);
UNREACHABLE;
L62:;
si0=l10;
si1=l33;
si2=1207912U;
f597(i,si0,si1,si2);
UNREACHABLE;
L61:;
si0=l35;
si1=l33;
si2=l5;
si3=l11;
si4=l4;
si5=l44;
si6=l10;
si7=l6;
sj0=f1127(i,si0,si1,si2,si3,si4,si5,si6,si7);
si0=l10;
f15024(i,si0);
L60:;
si0=l11;
si1=l34;
si0=si0 == si1;
if(si0){
goto L79;
}
si0=l33;
si1=l11;
si0=si0 <= si1;
if(si0){
goto L78;
}
si0=l37;
sj0=i64_load(&i->m0,(U64)si0);
l48=sj0;
si0=l46;
sj0=i64_load(&i->m0,(U64)si0);
l49=sj0;
si0=l34;
if(si0){
goto L81;
}
si0=l9;
si1=l24;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l9;
si1=l11;
i32_store(&i->m0,(U64)si0+36U,si1);
si0=l24;
si1=l11;
si0=si0 != si1;
if(si0){
goto L77;
}
si0=l11;
if(si0){
goto L82;
}
si0=0U;
l2=si0;
goto L80;
L82:;
si0=l20;
if(si0){
goto L84;
}
si0=0U;
l2=si0;
si0=0U;
l6=si0;
goto L83;
L84:;
si0=0U;
l12=si0;
si0=l32;
l10=si0;
si0=l16;
l6=si0;
si0=0U;
l2=si0;
L85:;
{
si0=l6;
si1=l10;
sj1=i64_load(&i->m0,(U64)si1);
l18=sj1;
si2=l2;
sj2=(U64)(si2);
sj3=1ULL;
sj2&=sj3;
sj1-=sj2;
si2=l6;
si3=l36;
si2+=si3;
l13=si2;
sj2=i64_load(&i->m0,(U64)si2);
l21=sj2;
sj1-=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l6;
si1=8U;
si0+=si1;
si1=l10;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
l25=sj1;
sj2=l18;
sj3=l21;
si2=sj2 <= sj3;
sj3=l18;
sj4=l21;
si3=sj3 < sj4;
si4=l2;
si5=1U;
si4&=si5;
si2=si4?si2:si3;
l2=si2;
sj2=(U64)(si2);
sj1-=sj2;
si2=l13;
si3=8U;
si2+=si3;
sj2=i64_load(&i->m0,(U64)si2);
l18=sj2;
sj1-=sj2;
i64_store(&i->m0,(U64)si0,sj1);
sj0=l25;
sj1=l18;
si0=sj0 <= sj1;
sj1=l25;
sj2=l18;
si1=sj1 < sj2;
si2=l2;
si0=si2?si0:si1;
l2=si0;
si0=l10;
si1=16U;
si0+=si1;
l10=si0;
si0=l6;
si1=16U;
si0+=si1;
l6=si0;
si0=l39;
si1=l12;
si2=-2U;
si1+=si2;
l12=si1;
si0=si0 != si1;
if(si0){
goto L85;
}
}
si0=0U;
si1=l12;
si0-=si1;
l6=si0;
L83:;
si0=l17;
si0=!(si0);
if(si0){
goto L80;
}
si0=l16;
si1=l6;
si2=3U;
si1<<=(si2&31);
l6=si1;
si0+=si1;
si1=l32;
si2=l6;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
l18=sj1;
si2=l2;
sj2=(U64)(si2);
sj1-=sj2;
si2=l35;
si3=l6;
si2+=si3;
sj2=i64_load(&i->m0,(U64)si2);
l21=sj2;
sj1-=sj2;
i64_store(&i->m0,(U64)si0,sj1);
sj0=l18;
sj1=l21;
si0=sj0 <= sj1;
sj1=l18;
sj2=l21;
si1=sj1 < sj2;
si2=l2;
si0=si2?si0:si1;
l2=si0;
goto L80;
L81:;
si0=l11;
si1=l42;
si0=si0 < si1;
if(si0){
goto L76;
}
si0=l9;
si1=l24;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l9;
si1=l42;
i32_store(&i->m0,(U64)si0+36U,si1);
si0=l24;
si1=l42;
si0=si0 != si1;
if(si0){
goto L75;
}
si0=l11;
si1=l42;
si0-=si1;
l23=si0;
si0=l24;
if(si0){
goto L87;
}
si0=0U;
l12=si0;
goto L86;
L87:;
si0=0U;
l12=si0;
si0=0U;
l2=si0;
si0=l24;
si1=1U;
si0=si0 == si1;
if(si0){
goto L88;
}
si0=l24;
si1=-2U;
si0&=si1;
l3=si0;
si0=0U;
l12=si0;
si0=l35;
l6=si0;
si0=l32;
l10=si0;
si0=0U;
l2=si0;
L89:;
{
si0=l6;
si1=l10;
sj1=i64_load(&i->m0,(U64)si1);
l18=sj1;
si2=l12;
sj2=(U64)(si2);
sj3=1ULL;
sj2&=sj3;
sj1-=sj2;
si2=l6;
sj2=i64_load(&i->m0,(U64)si2);
l21=sj2;
sj1-=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l6;
si1=8U;
si0+=si1;
l13=si0;
si1=l10;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
l25=sj1;
sj2=l18;
sj3=l21;
si2=sj2 <= sj3;
sj3=l18;
sj4=l21;
si3=sj3 < sj4;
si4=l12;
si5=1U;
si4&=si5;
si2=si4?si2:si3;
l12=si2;
sj2=(U64)(si2);
sj1-=sj2;
si2=l13;
sj2=i64_load(&i->m0,(U64)si2);
l18=sj2;
sj1-=sj2;
i64_store(&i->m0,(U64)si0,sj1);
sj0=l25;
sj1=l18;
si0=sj0 <= sj1;
sj1=l25;
sj2=l18;
si1=sj1 < sj2;
si2=l12;
si0=si2?si0:si1;
l12=si0;
si0=l6;
si1=16U;
si0+=si1;
l6=si0;
si0=l10;
si1=16U;
si0+=si1;
l10=si0;
si0=l3;
si1=l2;
si2=2U;
si1+=si2;
l2=si1;
si0=si0 != si1;
if(si0){
goto L89;
}
}
L88:;
si0=l24;
si1=1U;
si0&=si1;
si0=!(si0);
if(si0){
goto L86;
}
si0=l35;
si1=l2;
si2=3U;
si1<<=(si2&31);
l6=si1;
si0+=si1;
l10=si0;
si1=l32;
si2=l6;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
l18=sj1;
si2=l12;
sj2=(U64)(si2);
sj1-=sj2;
si2=l10;
sj2=i64_load(&i->m0,(U64)si2);
l21=sj2;
sj1-=sj2;
i64_store(&i->m0,(U64)si0,sj1);
sj0=l18;
sj1=l21;
si0=sj0 <= sj1;
sj1=l18;
sj2=l21;
si1=sj1 < sj2;
si2=l12;
si0=si2?si0:si1;
l12=si0;
L86:;
si0=l9;
si1=l34;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l9;
si1=l23;
i32_store(&i->m0,(U64)si0+36U,si1);
si0=l34;
si1=l23;
si0=si0 != si1;
if(si0){
goto L74;
}
si0=l42;
si1=3U;
si0<<=(si1&31);
l46=si0;
si0=l34;
si1=1U;
si0&=si1;
l32=si0;
si0=0U;
l2=si0;
si0=0U;
l10=si0;
si0=l34;
si1=1U;
si0=si0 == si1;
if(si0){
goto L90;
}
si0=l36;
si1=l46;
si0+=si1;
l3=si0;
si0=0U;
l13=si0;
si0=0U;
si1=l34;
si2=-2U;
si1&=si2;
si0-=si1;
l23=si0;
si0=l16;
l6=si0;
si0=0U;
l2=si0;
L91:;
{
si0=l6;
si1=l3;
si0+=si1;
l10=si0;
si1=l6;
sj1=i64_load(&i->m0,(U64)si1);
l18=sj1;
si2=l2;
sj2=(U64)(si2);
sj3=1ULL;
sj2&=sj3;
sj1-=sj2;
si2=l10;
sj2=i64_load(&i->m0,(U64)si2);
l21=sj2;
sj1-=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l10;
si1=8U;
si0+=si1;
l10=si0;
si1=l6;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
l25=sj1;
sj2=l18;
sj3=l21;
si2=sj2 <= sj3;
sj3=l18;
sj4=l21;
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
l18=sj2;
sj1-=sj2;
i64_store(&i->m0,(U64)si0,sj1);
sj0=l25;
sj1=l18;
si0=sj0 <= sj1;
sj1=l25;
sj2=l18;
si1=sj1 < sj2;
si2=l2;
si0=si2?si0:si1;
l2=si0;
si0=l6;
si1=16U;
si0+=si1;
l6=si0;
si0=l23;
si1=l13;
si2=-2U;
si1+=si2;
l13=si1;
si0=si0 != si1;
if(si0){
goto L91;
}
}
si0=0U;
si1=l13;
si0-=si1;
l10=si0;
L90:;
si0=l35;
si1=l46;
si0+=si1;
l6=si0;
si0=l32;
si0=!(si0);
if(si0){
goto L92;
}
si0=l6;
si1=l10;
si2=3U;
si1<<=(si2&31);
l10=si1;
si0+=si1;
l13=si0;
si1=l16;
si2=l10;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
l18=sj1;
si2=l2;
sj2=(U64)(si2);
sj1-=sj2;
si2=l13;
sj2=i64_load(&i->m0,(U64)si2);
l21=sj2;
sj1-=sj2;
i64_store(&i->m0,(U64)si0,sj1);
sj0=l18;
sj1=l21;
si0=sj0 <= sj1;
sj1=l18;
sj2=l21;
si1=sj1 < sj2;
si2=l2;
si0=si2?si0:si1;
l2=si0;
L92:;
si0=l12;
si1=1U;
si0&=si1;
si0=!(si0);
if(si0){
goto L93;
}
si0=l6;
si1=l6;
sj1=i64_load(&i->m0,(U64)si1);
l18=sj1;
sj2=-1ULL;
sj1+=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=0U;
l12=si0;
sj0=l18;
sj1=0ULL;
si0=sj0 != sj1;
if(si0){
goto L94;
}
si0=l45;
si1=-8U;
si0+=si1;
l6=si0;
si0=l38;
si1=l46;
si0+=si1;
l10=si0;
L95:;
{
si0=l6;
si0=!(si0);
l12=si0;
si0=l6;
si0=!(si0);
if(si0){
goto L94;
}
si0=l10;
si1=l10;
sj1=i64_load(&i->m0,(U64)si1);
l18=sj1;
sj2=-1ULL;
sj1+=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l6;
si1=-8U;
si0+=si1;
l6=si0;
si0=l10;
si1=8U;
si0+=si1;
l10=si0;
sj0=l18;
si0=!(sj0);
if(si0){
goto L95;
}
}
L94:;
si0=l2;
si1=l12;
si0|=si1;
l2=si0;
L93:;
si0=l16;
si1=l35;
si2=l36;
si0=f15143(i,si0,si1,si2);
si0=l24;
l23=si0;
L80:;
sj0=l49;
sj1=l48;
sj0-=sj1;
si1=l2;
sj1=(U64)(si1);
sj2=1ULL;
sj1&=sj2;
sj0-=sj1;
l48=sj0;
si0=!(sj0);
if(si0){
goto L73;
}
si0=8U;
si1=l44;
si2=3U;
si1<<=(si2&31);
si0-=si1;
l24=si0;
si0=l0;
si1=l43;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l3=si0;
L97:;
{
si0=l4;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1);
sj2=1ULL;
sj1+=sj2;
l18=sj1;
i64_store(&i->m0,(U64)si0,sj1);
sj0=l18;
sj1=0ULL;
si0=sj0 != sj1;
if(si0){
goto L98;
}
si0=l24;
l6=si0;
L99:;
{
si0=l6;
si0=!(si0);
if(si0){
goto L96;
}
si0=l3;
si1=l6;
si0+=si1;
l10=si0;
si1=l10;
sj1=i64_load(&i->m0,(U64)si1);
sj2=1ULL;
sj1+=sj2;
l18=sj1;
i64_store(&i->m0,(U64)si0,sj1);
si0=l6;
si1=8U;
si0+=si1;
l6=si0;
sj0=l18;
si0=!(sj0);
if(si0){
goto L99;
}
}
L98:;
si0=l11;
if(si0){
goto L101;
}
si0=0U;
l2=si0;
goto L100;
L101:;
si0=0U;
l2=si0;
si0=l20;
if(si0){
goto L103;
}
si0=0U;
l12=si0;
goto L102;
L103:;
si0=l5;
l10=si0;
si0=l16;
l6=si0;
si0=0U;
l12=si0;
L104:;
{
si0=l6;
si1=l6;
sj1=i64_load(&i->m0,(U64)si1);
l18=sj1;
si2=l2;
sj2=(U64)(si2);
sj3=1ULL;
sj2&=sj3;
si3=l10;
sj3=i64_load(&i->m0,(U64)si3);
l21=sj3;
sj2+=sj3;
sj1-=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l6;
si1=8U;
si0+=si1;
l13=si0;
si1=l13;
sj1=i64_load(&i->m0,(U64)si1);
l25=sj1;
sj2=l18;
sj3=l21;
si2=sj2 <= sj3;
sj3=l18;
sj4=l21;
si3=sj3 < sj4;
si4=l2;
si5=1U;
si4&=si5;
si2=si4?si2:si3;
l2=si2;
sj2=(U64)(si2);
si3=l10;
si4=8U;
si3+=si4;
sj3=i64_load(&i->m0,(U64)si3);
l18=sj3;
sj2+=sj3;
sj1-=sj2;
i64_store(&i->m0,(U64)si0,sj1);
sj0=l25;
sj1=l18;
si0=sj0 <= sj1;
sj1=l25;
sj2=l18;
si1=sj1 < sj2;
si2=l2;
si0=si2?si0:si1;
l2=si0;
si0=l10;
si1=16U;
si0+=si1;
l10=si0;
si0=l6;
si1=16U;
si0+=si1;
l6=si0;
si0=l8;
si1=l12;
si2=2U;
si1+=si2;
l12=si1;
si0=si0 != si1;
if(si0){
goto L104;
}
}
L102:;
si0=l17;
si0=!(si0);
if(si0){
goto L100;
}
si0=l16;
si1=l12;
si2=3U;
si1<<=(si2&31);
l6=si1;
si0+=si1;
l10=si0;
si1=l10;
sj1=i64_load(&i->m0,(U64)si1);
l18=sj1;
si2=l2;
sj2=(U64)(si2);
si3=l5;
si4=l6;
si3+=si4;
sj3=i64_load(&i->m0,(U64)si3);
l21=sj3;
sj2+=sj3;
sj1-=sj2;
i64_store(&i->m0,(U64)si0,sj1);
sj0=l18;
sj1=l21;
si0=sj0 <= sj1;
sj1=l18;
sj2=l21;
si1=sj1 < sj2;
si2=l2;
si0=si2?si0:si1;
l2=si0;
L100:;
sj0=l48;
si1=l2;
sj1=(U64)(si1);
sj2=1ULL;
sj1&=sj2;
sj0-=sj1;
l48=sj0;
si0=!(sj0);
si0=!(si0);
if(si0){
goto L97;
}
goto L73;
}
L96:;
si0=1207976U;
si1=55U;
si2=1208048U;
f604(i,si0,si1,si2);
UNREACHABLE;
L79:;
si0=0U;
si1=0U;
si2=1207928U;
f594(i,si0,si1,si2);
UNREACHABLE;
L78:;
si0=l11;
si1=l33;
si2=1207944U;
f594(i,si0,si1,si2);
UNREACHABLE;
L77:;
si0=l9;
si1=0U;
i32_store(&i->m0,(U64)si0+40U,si1);
si0=0U;
si1=l9;
si2=32U;
si1+=si2;
si2=l9;
si3=36U;
si2+=si3;
si3=l9;
si4=40U;
si3+=si4;
si4=1203428U;
f1250(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L76:;
si0=1206841U;
si1=35U;
si2=1207960U;
f604(i,si0,si1,si2);
UNREACHABLE;
L75:;
si0=l9;
si1=0U;
i32_store(&i->m0,(U64)si0+40U,si1);
si0=0U;
si1=l9;
si2=32U;
si1+=si2;
si2=l9;
si3=36U;
si2+=si3;
si3=l9;
si4=40U;
si3+=si4;
si4=1203508U;
f1250(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L74:;
si0=l9;
si1=0U;
i32_store(&i->m0,(U64)si0+40U,si1);
si0=0U;
si1=l9;
si2=32U;
si1+=si2;
si2=l9;
si3=36U;
si2+=si3;
si3=l9;
si4=40U;
si3+=si4;
si4=1203508U;
f1250(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L73:;
si0=l36;
l6=si0;
L107:;
{
si0=l6;
si0=!(si0);
if(si0){
goto L106;
}
si0=l1;
si1=l6;
si0+=si1;
l10=si0;
si0=l15;
si1=l6;
si0+=si1;
l12=si0;
si0=l6;
si1=-8U;
si0+=si1;
l6=si0;
si0=-1U;
si1=l12;
sj1=i64_load(&i->m0,(U64)si1);
l18=sj1;
si2=l10;
sj2=i64_load(&i->m0,(U64)si2);
l21=sj2;
si1=sj1 != sj2;
sj2=l18;
sj3=l21;
si2=sj2 > sj3;
si0=si2?si0:si1;
l10=si0;
si0=!(si0);
if(si0){
goto L107;
}
goto L105;
}
L106:;
si0=-1U;
si1=0U;
si2=l6;
si0=si2?si0:si1;
l10=si0;
L105:;
si0=l10;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L108;
}
si0=l4;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1);
sj2=1ULL;
sj1+=sj2;
l18=sj1;
i64_store(&i->m0,(U64)si0,sj1);
sj0=l18;
sj1=0ULL;
si0=sj0 != sj1;
if(si0){
goto L111;
}
si0=l0;
si1=l43;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l2=si0;
si0=8U;
si1=l44;
si2=3U;
si1<<=(si2&31);
si0-=si1;
l6=si0;
L112:;
{
si0=l6;
si0=!(si0);
if(si0){
goto L110;
}
si0=l2;
si1=l6;
si0+=si1;
l10=si0;
si1=l10;
sj1=i64_load(&i->m0,(U64)si1);
sj2=1ULL;
sj1+=sj2;
l18=sj1;
i64_store(&i->m0,(U64)si0,sj1);
si0=l6;
si1=8U;
si0+=si1;
l6=si0;
sj0=l18;
si0=!(sj0);
if(si0){
goto L112;
}
}
L111:;
si0=l11;
if(si0){
goto L113;
}
si0=0U;
l2=si0;
goto L108;
L113:;
si0=0U;
l2=si0;
si0=l20;
if(si0){
goto L114;
}
si0=0U;
l12=si0;
goto L109;
L114:;
si0=l5;
l10=si0;
si0=l16;
l6=si0;
si0=0U;
l12=si0;
L115:;
{
si0=l6;
si1=l6;
sj1=i64_load(&i->m0,(U64)si1);
l18=sj1;
si2=l2;
sj2=(U64)(si2);
sj3=1ULL;
sj2&=sj3;
si3=l10;
sj3=i64_load(&i->m0,(U64)si3);
l21=sj3;
sj2+=sj3;
sj1-=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l6;
si1=8U;
si0+=si1;
l13=si0;
si1=l13;
sj1=i64_load(&i->m0,(U64)si1);
l25=sj1;
sj2=l18;
sj3=l21;
si2=sj2 <= sj3;
sj3=l18;
sj4=l21;
si3=sj3 < sj4;
si4=l2;
si5=1U;
si4&=si5;
si2=si4?si2:si3;
l2=si2;
sj2=(U64)(si2);
si3=l10;
si4=8U;
si3+=si4;
sj3=i64_load(&i->m0,(U64)si3);
l18=sj3;
sj2+=sj3;
sj1-=sj2;
i64_store(&i->m0,(U64)si0,sj1);
sj0=l25;
sj1=l18;
si0=sj0 <= sj1;
sj1=l25;
sj2=l18;
si1=sj1 < sj2;
si2=l2;
si0=si2?si0:si1;
l2=si0;
si0=l10;
si1=16U;
si0+=si1;
l10=si0;
si0=l6;
si1=16U;
si0+=si1;
l6=si0;
si0=l8;
si1=l12;
si2=2U;
si1+=si2;
l12=si1;
si0=si0 != si1;
if(si0){
goto L115;
}
goto L109;
}
L110:;
si0=1207976U;
si1=55U;
si2=1208032U;
f604(i,si0,si1,si2);
UNREACHABLE;
L109:;
si0=l17;
si0=!(si0);
if(si0){
goto L108;
}
si0=l16;
si1=l12;
si2=3U;
si1<<=(si2&31);
l6=si1;
si0+=si1;
l10=si0;
si1=l10;
sj1=i64_load(&i->m0,(U64)si1);
l18=sj1;
si2=l2;
sj2=(U64)(si2);
si3=l5;
si4=l6;
si3+=si4;
sj3=i64_load(&i->m0,(U64)si3);
l21=sj3;
sj2+=sj3;
sj1-=sj2;
i64_store(&i->m0,(U64)si0,sj1);
sj0=l18;
sj1=l21;
si0=sj0 <= sj1;
sj1=l18;
sj2=l21;
si1=sj1 < sj2;
si2=l2;
si0=si2?si0:si1;
l2=si0;
L108:;
si0=l9;
si1=8U;
si0+=si1;
si1=l27;
si2=l31;
TF(i->t0,si2,void (*)(rustpythonInstance*,U32,U32))(i,si0,si1);
si0=l9;
si0=i32_load(&i->m0,(U64)si0+8U);
l32=si0;
si0=!(si0);
if(si0){
goto L17;
}
si0=l9;
si0=i32_load(&i->m0,(U64)si0+12U);
l24=si0;
si0=l47;
l43=si0;
si0=l47;
si0=!(si0);
if(si0){
goto L17;
}
goto L57;
}
L55:;
si0=8U;
si1=l6;
f52(i,si0,si1);
UNREACHABLE;
L52:;
si0=4U;
si1=24U;
f52(i,si0,si1);
UNREACHABLE;
L51:;
si0=4U;
si1=12U;
f52(i,si0,si1);
UNREACHABLE;
L49:;
si0=1261688U;
si1=43U;
si2=1261880U;
f604(i,si0,si1,si2);
UNREACHABLE;
L44:;
si0=1206841U;
si1=35U;
si2=1207824U;
f604(i,si0,si1,si2);
UNREACHABLE;
L38:;
si0=1206841U;
si1=35U;
si2=1207808U;
f604(i,si0,si1,si2);
UNREACHABLE;
L36:;
si0=l9;
si1=0U;
i32_store(&i->m0,(U64)si0+40U,si1);
si0=1U;
si1=l9;
si2=28U;
si1+=si2;
si2=1207788U;
si3=l9;
si4=40U;
si3+=si4;
si4=1207792U;
f1250(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L35:;
si0=l19;
si1=l1;
si2=1207772U;
f597(i,si0,si1,si2);
UNREACHABLE;
L34:;
si0=1206841U;
si1=35U;
si2=1207512U;
f604(i,si0,si1,si2);
UNREACHABLE;
L27:;
si0=-1U;
si1=l13;
si2=1207448U;
f597(i,si0,si1,si2);
UNREACHABLE;
L26:;
si0=1202809U;
si1=34U;
si2=1202844U;
f604(i,si0,si1,si2);
UNREACHABLE;
L25:;
si0=l13;
si1=l15;
si2=1207480U;
f597(i,si0,si1,si2);
UNREACHABLE;
L24:;
si0=1U;
si1=0U;
si2=1207480U;
f683(i,si0,si1,si2);
UNREACHABLE;
L23:;
si0=1206841U;
si1=35U;
si2=1207432U;
f604(i,si0,si1,si2);
UNREACHABLE;
L22:;
si0=0U;
si1=0U;
si2=1207496U;
f594(i,si0,si1,si2);
UNREACHABLE;
L21:;
f53(i);
UNREACHABLE;
L20:;
si0=1202809U;
si1=34U;
si2=1202976U;
f604(i,si0,si1,si2);
UNREACHABLE;
L19:;
si0=l9;
si1=0U;
i32_store(&i->m0,(U64)si0+40U,si1);
si0=0U;
si1=l9;
si2=32U;
si1+=si2;
si2=l9;
si3=36U;
si2+=si3;
si3=l9;
si4=40U;
si3+=si4;
si4=1202992U;
f1250(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L18:;
si0=0U;
l2=si0;
L17:;
si0=l27;
si1=l28;
si1=i32_load(&i->m0,(U64)si1);
TF(i->t0,si1,void (*)(rustpythonInstance*,U32))(i,si0);
si0=l28;
si0=i32_load(&i->m0,(U64)si0+4U);
si0=!(si0);
if(si0){
goto L116;
}
si0=l27;
f15024(i,si0);
L116:;
si0=l0;
si1=l0;
sj1=i64_load(&i->m0,(U64)si1);
l18=sj1;
sj2=3ULL;
sj1+=sj2;
l21=sj1;
i64_store(&i->m0,(U64)si0,sj1);
si0=0U;
l12=si0;
sj0=l21;
sj1=l18;
si0=sj0 >= sj1;
if(si0){
goto L117;
}
si0=l0;
si1=8U;
si0+=si1;
l10=si0;
si0=l19;
si1=3U;
si0<<=(si1&31);
si1=-8U;
si0+=si1;
l6=si0;
L118:;
{
si0=l6;
si0=!(si0);
l12=si0;
si0=l6;
si0=!(si0);
if(si0){
goto L117;
}
si0=l10;
si1=l10;
sj1=i64_load(&i->m0,(U64)si1);
sj2=1ULL;
sj1+=sj2;
l18=sj1;
i64_store(&i->m0,(U64)si0,sj1);
si0=l6;
si1=-8U;
si0+=si1;
l6=si0;
si0=l10;
si1=8U;
si0+=si1;
l10=si0;
sj0=l18;
si0=!(sj0);
if(si0){
goto L118;
}
}
L117:;
si0=l22;
si1=-1U;
si0=(U32)((I32)si0>(I32)si1);
si1=l2;
si2=l12;
si1|=si2;
l10=si1;
si0|=si1;
l6=si0;
si0=l22;
si1=0U;
si0=(U32)((I32)si0<(I32)si1);
if(si0){
goto L119;
}
si0=l10;
si1=1U;
si0&=si1;
si0=!(si0);
if(si0){
goto L119;
}
si0=l0;
si1=255U;
si2=l19;
si3=3U;
si2<<=(si3&31);
si0=f15145(i,si0,si1,si2);
si0=1U;
l6=si0;
L119:;
si0=l30;
si0=!(si0);
if(si0){
goto L16;
}
si0=l29;
f15024(i,si0);
L16:;
si0=l9;
si1=64U;
si0+=si1;
i->g0=si0;
si0=l6;
si1=1U;
si0&=si1;
goto L0;
L11:;
si0=1206816U;
si1=25U;
si2=1208120U;
f604(i,si0,si1,si2);
UNREACHABLE;
L0:;
return si0;
}

void f1092(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U64 l4) {
U32 l5=0;
U32 l6=0;
U64 l7=0;
U64 l8=0;
U32 l9=0;
U64 l10=0;
U64 l11=0;
U64 l12=0;
U64 l13=0;
U64 l14=0;
U64 l15=0;
U32 si0,si1,si2,si3,si4;
U64 sj0,sj1,sj2,sj3,sj4,sj5;
si0=i->g0;
si1=112U;
si0-=si1;
l5=si0;
i->g0=si0;
si0=l5;
sj1=l4;
i64_store(&i->m0,(U64)si0+80U,sj1);
sj0=l4;
sj1=0ULL;
si0=sj0 == sj1;
if(si0){
goto L5;
}
si0=l3;
si1=2U;
si0=si0 < si1;
if(si0){
goto L3;
}
si0=l3;
si1=l1;
si0=si0 > si1;
if(si0){
goto L4;
}
si0=l2;
si1=l3;
si2=-1U;
si1+=si2;
l1=si1;
si2=3U;
si1<<=(si2&31);
l6=si1;
si0+=si1;
sj0=i64_load(&i->m0,(U64)si0);
l7=sj0;
sj0=l4;
sj0=I64_CLZ(sj0);
l8=sj0;
si0=!(sj0);
si0=!(si0);
if(si0){
goto L6;
}
si0=l0;
si1=l6;
si0+=si1;
sj1=l7;
sj2=l4;
si1=sj1 >= sj2;
l6=si1;
sj1=(U64)(si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=16U;
si0+=si1;
sj1=-1ULL;
sj2=l4;
sj3=-1ULL;
sj2^=sj3;
sj3=l4;
sj4=0ULL;
f15155(i,si0,sj1,sj2,sj3,sj4);
si0=l0;
si1=l3;
si2=3U;
si1<<=(si2&31);
si2=-16U;
si1+=si2;
l9=si1;
si0+=si1;
l3=si0;
si0=l2;
si1=l9;
si0+=si1;
l2=si0;
sj0=l7;
sj1=l4;
sj2=0ULL;
si3=l6;
sj1=si3?sj1:sj2;
sj0-=sj1;
l7=sj0;
si0=l5;
sj0=i64_load(&i->m0,(U64)si0+16U);
l10=sj0;
si0=l5;
si1=8U;
si0+=si1;
l6=si0;
L7:;
{
si0=l5;
sj1=l10;
sj2=0ULL;
sj3=l7;
sj4=0ULL;
f15157(i,si0,sj1,sj2,sj3,sj4);
si0=l2;
sj0=i64_load(&i->m0,(U64)si0);
l11=sj0;
sj1=l7;
si2=l6;
sj2=i64_load(&i->m0,(U64)si2);
sj3=l11;
si4=l5;
sj4=i64_load(&i->m0,(U64)si4);
l12=sj4;
sj3+=sj4;
l13=sj3;
sj4=l12;
si3=sj3 < sj4;
sj3=(U64)(si3);
sj2+=sj3;
sj1+=sj2;
l12=sj1;
sj2=1ULL;
sj1+=sj2;
l11=sj1;
sj2=l4;
sj1*=sj2;
sj0-=sj1;
l7=sj0;
sj1=l13;
si0=sj0 > sj1;
if(si0){
goto L9;
}
sj0=l7;
sj1=l4;
si0=sj0 < sj1;
if(si0){
goto L8;
}
sj0=l7;
sj1=l4;
sj0-=sj1;
l7=sj0;
sj0=l11;
sj1=1ULL;
sj0+=sj1;
l11=sj0;
goto L8;
L9:;
sj0=l7;
sj1=l4;
sj0+=sj1;
l13=sj0;
sj1=l7;
si0=sj0 >= sj1;
if(si0){
goto L8;
}
sj0=l12;
l11=sj0;
sj0=l13;
l7=sj0;
L8:;
si0=l3;
sj1=l11;
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=-8U;
si0+=si1;
l3=si0;
si0=l2;
si1=-8U;
si0+=si1;
l2=si0;
si0=l1;
si1=-1U;
si0+=si1;
l1=si0;
if(si0){
goto L7;
}
goto L1;
}
L6:;
sj0=l7;
sj1=l4;
si0=sj0 < sj1;
if(si0){
goto L11;
}
sj0=0ULL;
l7=sj0;
goto L10;
L11:;
si0=l0;
si1=l1;
si2=3U;
si1<<=(si2&31);
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=-2U;
si0+=si1;
l1=si0;
L10:;
sj0=l4;
sj1=l8;
sj0<<=(sj1&63);
l12=sj0;
sj1=0ULL;
si0=sj0 == sj1;
if(si0){
goto L2;
}
si0=l5;
si1=64U;
si0+=si1;
sj1=-1ULL;
sj2=l12;
sj3=-1ULL;
sj2^=sj3;
sj3=l12;
sj4=0ULL;
f15155(i,si0,sj1,sj2,sj3,sj4);
si0=l2;
si1=l1;
si2=3U;
si1<<=(si2&31);
si0+=si1;
sj0=i64_load(&i->m0,(U64)si0);
l13=sj0;
sj1=0ULL;
sj2=l8;
sj1-=sj2;
l4=sj1;
sj0>>=(sj1&63);
sj1=l7;
sj2=l8;
sj1<<=(sj2&63);
sj0|=sj1;
l7=sj0;
si0=l5;
sj0=i64_load(&i->m0,(U64)si0+64U);
l14=sj0;
si0=l3;
si1=-1U;
si0+=si1;
si1=536870911U;
si0&=si1;
l3=si0;
si1=l1;
si2=l3;
si3=l1;
si2=si2 < si3;
si0=si2?si0:si1;
l1=si0;
si0=!(si0);
if(si0){
goto L12;
}
sj0=l4;
sj1=63ULL;
sj0&=sj1;
l15=sj0;
si0=l0;
si1=l1;
si2=3U;
si1<<=(si2&31);
l6=si1;
si0+=si1;
l3=si0;
si0=l6;
si1=l2;
si0+=si1;
si1=-8U;
si0+=si1;
l2=si0;
si0=l5;
si1=56U;
si0+=si1;
l6=si0;
L13:;
{
si0=l5;
si1=48U;
si0+=si1;
sj1=l14;
sj2=0ULL;
sj3=l7;
sj4=0ULL;
f15157(i,si0,sj1,sj2,sj3,sj4);
sj0=l13;
sj1=l8;
sj0<<=(sj1&63);
si1=l2;
sj1=i64_load(&i->m0,(U64)si1);
l13=sj1;
sj2=l15;
sj1>>=(sj2&63);
sj0|=sj1;
l4=sj0;
sj1=l12;
sj2=l7;
si3=l6;
sj3=i64_load(&i->m0,(U64)si3);
sj2+=sj3;
sj3=l4;
si4=l5;
sj4=i64_load(&i->m0,(U64)si4+48U);
l7=sj4;
sj3+=sj4;
l10=sj3;
sj4=l7;
si3=sj3 < sj4;
sj3=(U64)(si3);
sj2+=sj3;
sj3=1ULL;
sj2+=sj3;
l11=sj2;
sj1*=sj2;
sj0-=sj1;
l4=sj0;
sj1=l10;
si0=sj0 > sj1;
if(si0){
goto L17;
}
sj0=l4;
sj1=l12;
si0=sj0 >= sj1;
if(si0){
goto L16;
}
sj0=l4;
l7=sj0;
goto L14;
L17:;
sj0=l4;
sj1=l12;
sj0+=sj1;
l7=sj0;
sj1=l4;
si0=sj0 < sj1;
if(si0){
goto L15;
}
sj0=l4;
l7=sj0;
goto L14;
L16:;
sj0=l4;
sj1=l12;
sj0-=sj1;
l7=sj0;
sj0=l11;
sj1=1ULL;
sj0+=sj1;
l11=sj0;
goto L14;
L15:;
sj0=l11;
sj1=-1ULL;
sj0+=sj1;
l11=sj0;
L14:;
si0=l3;
sj1=l11;
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=-8U;
si0+=si1;
l2=si0;
si0=l3;
si1=-8U;
si0+=si1;
l3=si0;
si0=l1;
si1=-1U;
si0+=si1;
l1=si0;
if(si0){
goto L13;
}
}
L12:;
si0=l5;
si1=32U;
si0+=si1;
sj1=l14;
sj2=0ULL;
sj3=l7;
sj4=0ULL;
f15157(i,si0,sj1,sj2,sj3,sj4);
si0=l0;
sj1=l7;
si2=l5;
si3=40U;
si2+=si3;
sj2=i64_load(&i->m0,(U64)si2);
si3=l5;
sj3=i64_load(&i->m0,(U64)si3+32U);
l4=sj3;
sj4=l13;
sj5=l8;
sj4<<=(sj5&63);
l11=sj4;
sj3+=sj4;
l13=sj3;
sj4=l4;
si3=sj3 < sj4;
sj3=(U64)(si3);
sj2+=sj3;
sj1+=sj2;
sj2=1ULL;
sj1+=sj2;
l7=sj1;
sj2=l11;
sj3=l7;
sj4=l12;
sj3*=sj4;
sj2-=sj3;
l7=sj2;
sj3=l13;
si2=sj2 > sj3;
l3=si2;
sj2=(U64)(si2);
sj1-=sj2;
sj2=l12;
sj3=0ULL;
si4=l3;
sj2=si4?sj2:sj3;
sj3=l7;
sj2+=sj3;
sj3=l12;
si2=sj2 >= sj3;
sj2=(U64)(si2);
sj1+=sj2;
i64_store(&i->m0,(U64)si0,sj1);
goto L1;
L5:;
si0=l5;
si1=0U;
i32_store(&i->m0,(U64)si0+88U,si1);
si0=1U;
si1=l5;
si2=80U;
si1+=si2;
si2=1206800U;
si3=l5;
si4=88U;
si3+=si4;
si4=1208292U;
f1251(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L4:;
si0=l3;
si1=l1;
si2=1208308U;
f597(i,si0,si1,si2);
UNREACHABLE;
L3:;
si0=1208324U;
si1=25U;
si2=1208352U;
f604(i,si0,si1,si2);
UNREACHABLE;
L2:;
si0=1233936U;
si1=25U;
si2=1234152U;
f604(i,si0,si1,si2);
UNREACHABLE;
L1:;
si0=l5;
si1=112U;
si0+=si1;
i->g0=si0;
L0:;
}

void f1093(rustpythonInstance*i,U32 l0,U32 l1,U64 l2) {
U32 l3=0;
U32 l4=0;
U32 l5=0;
U64 l6=0;
U64 l7=0;
U32 l8=0;
U64 l9=0;
U64 l10=0;
U64 l11=0;
U64 l12=0;
U64 l13=0;
U64 l14=0;
U64 l15=0;
U32 si0,si1,si2,si3,si4;
U64 sj0,sj1,sj2,sj3,sj4,sj5;
si0=i->g0;
si1=112U;
si0-=si1;
l3=si0;
i->g0=si0;
si0=l3;
sj1=l2;
i64_store(&i->m0,(U64)si0+80U,sj1);
sj0=l2;
sj1=0ULL;
si0=sj0 == sj1;
if(si0){
goto L4;
}
si0=l1;
si1=1U;
si0=si0 <= si1;
if(si0){
goto L3;
}
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
sj0=l2;
sj0=I64_CLZ(sj0);
l7=sj0;
sj1=0ULL;
si0=sj0 != sj1;
if(si0){
goto L2;
}
si0=l5;
sj1=l6;
sj2=l2;
si1=sj1 >= sj2;
l8=si1;
sj1=(U64)(si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=16U;
si0+=si1;
sj1=-1ULL;
sj2=l2;
sj3=-1ULL;
sj2^=sj3;
sj3=l2;
sj4=0ULL;
f15155(i,si0,sj1,sj2,sj3,sj4);
si0=l0;
si1=-16U;
si0+=si1;
l4=si0;
si0=l1;
si1=3U;
si0<<=(si1&31);
l1=si0;
sj0=l6;
sj1=l2;
sj2=0ULL;
si3=l8;
sj1=si3?sj1:sj2;
sj0-=sj1;
l6=sj0;
si0=l3;
sj0=i64_load(&i->m0,(U64)si0+16U);
l9=sj0;
si0=l3;
si1=8U;
si0+=si1;
l8=si0;
L5:;
{
si0=l3;
sj1=l9;
sj2=0ULL;
sj3=l6;
sj4=0ULL;
f15157(i,si0,sj1,sj2,sj3,sj4);
si0=l4;
si1=l1;
si0+=si1;
l5=si0;
sj0=i64_load(&i->m0,(U64)si0);
l10=sj0;
sj1=l6;
si2=l8;
sj2=i64_load(&i->m0,(U64)si2);
sj3=l10;
si4=l3;
sj4=i64_load(&i->m0,(U64)si4);
l11=sj4;
sj3+=sj4;
l12=sj3;
sj4=l11;
si3=sj3 < sj4;
sj3=(U64)(si3);
sj2+=sj3;
sj1+=sj2;
l11=sj1;
sj2=1ULL;
sj1+=sj2;
l10=sj1;
sj2=l2;
sj1*=sj2;
sj0-=sj1;
l6=sj0;
sj1=l12;
si0=sj0 > sj1;
if(si0){
goto L7;
}
sj0=l6;
sj1=l2;
si0=sj0 < sj1;
if(si0){
goto L6;
}
sj0=l6;
sj1=l2;
sj0-=sj1;
l6=sj0;
sj0=l10;
sj1=1ULL;
sj0+=sj1;
l10=sj0;
goto L6;
L7:;
sj0=l6;
sj1=l2;
sj0+=sj1;
l12=sj0;
sj1=l6;
si0=sj0 >= sj1;
if(si0){
goto L6;
}
sj0=l11;
l10=sj0;
sj0=l12;
l6=sj0;
L6:;
si0=l5;
sj1=l10;
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si1=-8U;
si0+=si1;
l1=si0;
si1=8U;
si0=si0 != si1;
if(si0){
goto L5;
}
goto L1;
}
L4:;
si0=l3;
si1=0U;
i32_store(&i->m0,(U64)si0+88U,si1);
si0=1U;
si1=l3;
si2=80U;
si1+=si2;
si2=1206800U;
si3=l3;
si4=88U;
si3+=si4;
si4=1208368U;
f1251(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L3:;
si0=1208324U;
si1=25U;
si2=1208416U;
f604(i,si0,si1,si2);
UNREACHABLE;
L2:;
sj0=l6;
sj1=l2;
si0=sj0 < sj1;
if(si0){
goto L9;
}
si0=l4;
l5=si0;
si0=l1;
l4=si0;
sj0=0ULL;
l6=sj0;
goto L8;
L9:;
si0=l5;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si1=-2U;
si0+=si1;
l5=si0;
L8:;
sj0=l2;
sj1=l7;
sj0<<=(sj1&63);
l11=sj0;
sj1=0ULL;
si0=sj0 == sj1;
if(si0){
goto L10;
}
si0=l3;
si1=64U;
si0+=si1;
sj1=-1ULL;
sj2=l11;
sj3=-1ULL;
sj2^=sj3;
sj3=l11;
sj4=0ULL;
f15155(i,si0,sj1,sj2,sj3,sj4);
si0=l0;
si1=l5;
si2=3U;
si1<<=(si2&31);
si0+=si1;
sj0=i64_load(&i->m0,(U64)si0);
l12=sj0;
sj1=0ULL;
sj2=l7;
sj1-=sj2;
l2=sj1;
sj0>>=(sj1&63);
sj1=l6;
sj2=l7;
sj1<<=(sj2&63);
sj0|=sj1;
l6=sj0;
si0=l3;
sj0=i64_load(&i->m0,(U64)si0+64U);
l13=sj0;
si0=l5;
if(si0){
goto L14;
}
sj0=0ULL;
l14=sj0;
goto L13;
L14:;
si0=l4;
si1=2U;
si0=si0 < si1;
if(si0){
goto L12;
}
sj0=l2;
sj1=63ULL;
sj0&=sj1;
l15=sj0;
sj0=0ULL;
l14=sj0;
si0=l5;
si1=3U;
si0<<=(si1&31);
si1=l0;
si0+=si1;
si1=-8U;
si0+=si1;
l1=si0;
si0=l3;
si1=48U;
si0+=si1;
si1=8U;
si0+=si1;
l8=si0;
L15:;
{
si0=l5;
si1=l4;
si0=si0 >= si1;
if(si0){
goto L11;
}
si0=l3;
si1=48U;
si0+=si1;
sj1=l13;
sj2=0ULL;
sj3=l6;
sj4=0ULL;
f15157(i,si0,sj1,sj2,sj3,sj4);
sj0=l12;
sj1=l7;
sj0<<=(sj1&63);
si1=l1;
sj1=i64_load(&i->m0,(U64)si1);
l12=sj1;
sj2=l15;
sj1>>=(sj2&63);
sj0|=sj1;
l2=sj0;
sj1=l11;
sj2=l6;
si3=l8;
sj3=i64_load(&i->m0,(U64)si3);
sj2+=sj3;
sj3=l2;
si4=l3;
sj4=i64_load(&i->m0,(U64)si4+48U);
l6=sj4;
sj3+=sj4;
l9=sj3;
sj4=l6;
si3=sj3 < sj4;
sj3=(U64)(si3);
sj2+=sj3;
sj3=1ULL;
sj2+=sj3;
l10=sj2;
sj1*=sj2;
sj0-=sj1;
l2=sj0;
sj1=l9;
si0=sj0 > sj1;
if(si0){
goto L17;
}
sj0=l2;
sj1=l11;
si0=sj0 >= sj1;
if(si0){
goto L18;
}
sj0=l2;
l6=sj0;
goto L16;
L18:;
sj0=l2;
sj1=l11;
sj0-=sj1;
l6=sj0;
sj0=l10;
sj1=1ULL;
sj0+=sj1;
l10=sj0;
goto L16;
L17:;
sj0=l2;
sj1=l11;
sj0+=sj1;
l6=sj0;
sj1=l2;
si0=sj0 < sj1;
if(si0){
goto L19;
}
sj0=l2;
l6=sj0;
goto L16;
L19:;
sj0=l10;
sj1=-1ULL;
sj0+=sj1;
l10=sj0;
L16:;
si0=l1;
si1=8U;
si0+=si1;
sj1=l10;
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si1=-8U;
si0+=si1;
l1=si0;
si0=l5;
si1=-1U;
si0+=si1;
l5=si0;
if(si0){
goto L15;
}
}
L13:;
si0=l3;
si1=32U;
si0+=si1;
sj1=l13;
sj2=l14;
sj3=l6;
sj4=0ULL;
f15157(i,si0,sj1,sj2,sj3,sj4);
si0=l0;
sj1=l6;
si2=l3;
si3=40U;
si2+=si3;
sj2=i64_load(&i->m0,(U64)si2);
si3=l3;
sj3=i64_load(&i->m0,(U64)si3+32U);
l2=sj3;
sj4=l12;
sj5=l7;
sj4<<=(sj5&63);
l10=sj4;
sj3+=sj4;
l12=sj3;
sj4=l2;
si3=sj3 < sj4;
sj3=(U64)(si3);
sj2+=sj3;
sj1+=sj2;
sj2=1ULL;
sj1+=sj2;
l6=sj1;
sj2=l10;
sj3=l6;
sj4=l11;
sj3*=sj4;
sj2-=sj3;
l6=sj2;
sj3=l12;
si2=sj2 > sj3;
l1=si2;
sj2=(U64)(si2);
sj1-=sj2;
sj2=l11;
sj3=0ULL;
si4=l1;
sj2=si4?sj2:sj3;
sj3=l6;
sj2+=sj3;
sj3=l11;
si2=sj2 >= sj3;
sj2=(U64)(si2);
sj1+=sj2;
i64_store(&i->m0,(U64)si0,sj1);
goto L1;
L12:;
si0=l5;
si1=-1U;
si0+=si1;
si1=1U;
si2=1208384U;
f594(i,si0,si1,si2);
UNREACHABLE;
L11:;
si0=l5;
si1=l4;
si2=1208400U;
f594(i,si0,si1,si2);
UNREACHABLE;
L10:;
si0=1233936U;
si1=25U;
si2=1234152U;
f604(i,si0,si1,si2);
UNREACHABLE;
L1:;
si0=l3;
si1=112U;
si0+=si1;
i->g0=si0;
L0:;
}

U32 f1094(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4,U32 l5,U64 l6) {
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
U64 l19=0;
U64 l20=0;
U32 l21=0;
U32 l22=0;
U32 l23=0;
U32 l24=0;
U32 l25=0;
U64 l26=0;
U32 l27=0;
U64 l28=0;
U64 l29=0;
U32 l30=0;
U32 l31=0;
U32 l32=0;
U64 l33=0;
U64 l34=0;
U64 l35=0;
U64 l36=0;
U32 l37=0;
U32 l38=0;
U32 si0,si1,si2,si3,si4,si5;
U64 sj0,sj1,sj2,sj3,sj4,sj5;
si0=i->g0;
si1=272U;
si0-=si1;
l7=si0;
i->g0=si0;
si0=l3;
si1=l5;
si0=si0 < si1;
if(si0){
goto L3;
}
si0=l4;
si1=l5;
si2=-1U;
si1+=si2;
l8=si1;
si2=3U;
si1<<=(si2&31);
si0+=si1;
sj0=i64_load(&i->m0,(U64)si0);
l9=sj0;
sj1=-1ULL;
si0=(U64)((I64)sj0>(I64)sj1);
if(si0){
goto L4;
}
si0=l3;
si1=l5;
si0-=si1;
l10=si0;
l11=si0;
si0=l5;
l12=si0;
si0=l4;
l13=si0;
si0=l8;
si1=l10;
si0=si0 <= si1;
if(si0){
goto L7;
}
si0=l5;
si1=l8;
si2=l10;
si1-=si2;
l14=si1;
si0=si0 < si1;
if(si0){
goto L6;
}
si0=l3;
si1=l5;
si2=l14;
si1-=si2;
l12=si1;
si0-=si1;
l11=si0;
si0=l4;
si1=l14;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l13=si0;
L7:;
si0=l12;
si1=l3;
si0=si0 > si1;
if(si0){
goto L5;
}
si0=l5;
si1=l12;
si0-=si1;
l15=si0;
si0=l2;
si1=l11;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l16=si0;
si0=l10;
si1=l8;
si2=l10;
si3=l8;
si2=si2 < si3;
si0=si2?si0:si1;
l17=si0;
si1=3U;
si0<<=(si1&31);
l11=si0;
L10:;
{
si0=l11;
si1=-8U;
si0=si0 == si1;
if(si0){
goto L9;
}
si0=l16;
si1=l11;
si0+=si1;
l14=si0;
si0=l13;
si1=l11;
si0+=si1;
l18=si0;
si0=l11;
si1=-8U;
si0+=si1;
l11=si0;
si0=-1U;
si1=l18;
sj1=i64_load(&i->m0,(U64)si1);
l19=sj1;
si2=l14;
sj2=i64_load(&i->m0,(U64)si2);
l20=sj2;
si1=sj1 != sj2;
sj2=l19;
sj3=l20;
si2=sj2 > sj3;
si0=si2?si0:si1;
l21=si0;
si0=!(si0);
if(si0){
goto L10;
}
goto L8;
}
L9:;
si0=-1U;
si1=0U;
si2=l11;
si3=-8U;
si2=si2 != si3;
si0=si2?si0:si1;
l21=si0;
L8:;
si0=l21;
si1=-1U;
si0=(U32)((I32)si0>(I32)si1);
l22=si0;
si0=!(si0);
if(si0){
goto L11;
}
si0=l12;
si0=!(si0);
if(si0){
goto L11;
}
si0=l12;
si1=1U;
si0&=si1;
l23=si0;
si0=l17;
if(si0){
goto L13;
}
si0=0U;
l18=si0;
si0=0U;
l17=si0;
goto L12;
L13:;
si0=l12;
si1=-2U;
si0&=si1;
l24=si0;
si0=0U;
l18=si0;
si0=l13;
l14=si0;
si0=l16;
l11=si0;
si0=0U;
l17=si0;
L14:;
{
si0=l11;
si1=l11;
sj1=i64_load(&i->m0,(U64)si1);
l19=sj1;
si2=l18;
sj2=(U64)(si2);
sj3=1ULL;
sj2&=sj3;
si3=l14;
sj3=i64_load(&i->m0,(U64)si3);
l20=sj3;
sj2+=sj3;
sj1-=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l11;
si1=8U;
si0+=si1;
l25=si0;
si1=l25;
sj1=i64_load(&i->m0,(U64)si1);
l26=sj1;
sj2=l19;
sj3=l20;
si2=sj2 <= sj3;
sj3=l19;
sj4=l20;
si3=sj3 < sj4;
si4=l18;
si5=1U;
si4&=si5;
si2=si4?si2:si3;
l18=si2;
sj2=(U64)(si2);
si3=l14;
si4=8U;
si3+=si4;
sj3=i64_load(&i->m0,(U64)si3);
l19=sj3;
sj2+=sj3;
sj1-=sj2;
i64_store(&i->m0,(U64)si0,sj1);
sj0=l26;
sj1=l19;
si0=sj0 <= sj1;
sj1=l26;
sj2=l19;
si1=sj1 < sj2;
si2=l18;
si0=si2?si0:si1;
l18=si0;
si0=l14;
si1=16U;
si0+=si1;
l14=si0;
si0=l11;
si1=16U;
si0+=si1;
l11=si0;
si0=l24;
si1=l17;
si2=2U;
si1+=si2;
l17=si1;
si0=si0 != si1;
if(si0){
goto L14;
}
}
L12:;
si0=l23;
si0=!(si0);
if(si0){
goto L11;
}
si0=l16;
si1=l17;
si2=3U;
si1<<=(si2&31);
l11=si1;
si0+=si1;
l14=si0;
si1=l14;
sj1=i64_load(&i->m0,(U64)si1);
si2=l18;
sj2=(U64)(si2);
si3=l13;
si4=l11;
si3+=si4;
sj3=i64_load(&i->m0,(U64)si3);
sj2+=sj3;
sj1-=sj2;
i64_store(&i->m0,(U64)si0,sj1);
L11:;
si0=l4;
si1=l5;
si2=-2U;
si1+=si2;
l27=si1;
si2=3U;
si1<<=(si2&31);
si0+=si1;
sj0=i64_load(&i->m0,(U64)si0);
l28=sj0;
si0=l7;
si1=l3;
si2=3U;
si1<<=(si2&31);
l11=si1;
si2=l2;
si1+=si2;
si2=-8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
l29=sj1;
i64_store(&i->m0,(U64)si0+232U,sj1);
si0=l12;
si1=-1U;
si0+=si1;
l30=si0;
si0=l12;
si1=l8;
si0+=si1;
l24=si0;
si1=l3;
si0=si0 >= si1;
if(si0){
goto L1;
}
si0=l12;
si1=-2U;
si0+=si1;
l31=si0;
si0=l11;
si1=l30;
si2=3U;
si1<<=(si2&31);
l32=si1;
si0-=si1;
si1=l2;
si0+=si1;
si1=-16U;
si0+=si1;
l16=si0;
sj0=l9;
sj1=-1ULL;
sj0+=sj1;
l33=sj0;
si0=l3;
l17=si0;
L15:;
{
si0=l17;
si1=-1U;
si0+=si1;
l17=si0;
si1=l12;
si0-=si1;
l11=si0;
si0=l17;
si1=l12;
si0=si0 < si1;
if(si0){
goto L22;
}
si0=l17;
si1=l3;
si0=si0 > si1;
if(si0){
goto L21;
}
si0=l2;
si1=l11;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l11=si0;
sj0=l29;
sj1=l9;
si0=sj0 != sj1;
if(si0){
goto L24;
}
si0=l12;
si0=!(si0);
if(si0){
goto L20;
}
si0=l11;
si1=l32;
si0+=si1;
l25=si0;
sj0=i64_load(&i->m0,(U64)si0);
sj1=l28;
si0=sj0 == sj1;
if(si0){
goto L23;
}
L24:;
si0=l12;
switch(si0){
case 0:
goto L26;
case 1:
goto L18;
default:
goto L25;
}
L26:;
si0=l30;
si1=0U;
si2=1208900U;
f594(i,si0,si1,si2);
UNREACHABLE;
L25:;
si0=l7;
si1=216U;
si0+=si1;
sj1=l6;
sj2=1ULL;
sj3=l29;
sj4=0ULL;
f15157(i,si0,sj1,sj2,sj3,sj4);
si0=l7;
si1=200U;
si0+=si1;
si1=l7;
si2=216U;
si1+=si2;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
si2=l7;
sj2=i64_load(&i->m0,(U64)si2+216U);
l19=sj2;
si3=l11;
si4=l32;
si3+=si4;
sj3=i64_load(&i->m0,(U64)si3);
l26=sj3;
sj2+=sj3;
l34=sj2;
sj3=l19;
si2=sj2 < sj3;
sj2=(U64)(si2);
sj1+=sj2;
l19=sj1;
sj2=0ULL;
sj3=l28;
sj4=0ULL;
f15157(i,si0,sj1,sj2,sj3,sj4);
si0=l11;
si1=l31;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l25=si0;
sj0=i64_load(&i->m0,(U64)si0);
l29=sj0;
sj1=l28;
si2=l7;
sj2=i64_load(&i->m0,(U64)si2+200U);
sj1+=sj2;
l20=sj1;
sj0-=sj1;
l35=sj0;
sj0=l19;
sj1=1ULL;
sj0+=sj1;
l36=sj0;
sj0=l34;
sj1=l26;
sj2=l9;
sj3=l19;
sj2*=sj3;
sj1-=sj2;
sj2=l9;
si3=l7;
si4=200U;
si3+=si4;
si4=8U;
si3+=si4;
sj3=i64_load(&i->m0,(U64)si3);
sj2+=sj3;
sj3=l20;
sj4=l28;
si3=sj3 < sj4;
sj3=(U64)(si3);
sj2+=sj3;
sj3=l29;
sj4=l20;
si3=sj3 < sj4;
sj3=(U64)(si3);
sj2+=sj3;
sj1-=sj2;
l29=sj1;
si0=sj0 <= sj1;
if(si0){
goto L19;
}
sj0=l35;
sj1=l28;
si0=sj0 < sj1;
l11=si0;
sj1=l29;
sj2=l9;
si1=sj1 < sj2;
sj2=l29;
sj3=l9;
si2=sj2 == sj3;
si0=si2?si0:si1;
if(si0){
goto L17;
}
sj0=l29;
sj1=l9;
sj0-=sj1;
si1=l11;
sj1=(U64)(si1);
sj0-=sj1;
l29=sj0;
sj0=l35;
sj1=l28;
sj0-=sj1;
l35=sj0;
sj0=l19;
sj1=2ULL;
sj0+=sj1;
l36=sj0;
goto L17;
L23:;
sj0=0ULL;
l19=sj0;
si0=0U;
l11=si0;
si0=l12;
l14=si0;
L27:;
{
si0=l7;
si1=168U;
si0+=si1;
si1=l13;
si2=l11;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
sj2=0ULL;
sj3=-1ULL;
sj4=0ULL;
f15157(i,si0,sj1,sj2,sj3,sj4);
si0=l16;
si1=l11;
si0+=si1;
l18=si0;
si1=l18;
sj1=i64_load(&i->m0,(U64)si1);
l26=sj1;
sj2=l19;
si3=l7;
sj3=i64_load(&i->m0,(U64)si3+168U);
sj2+=sj3;
l20=sj2;
sj1-=sj2;
i64_store(&i->m0,(U64)si0,sj1);
sj0=l20;
sj1=l19;
si0=sj0 < sj1;
sj0=(U64)(si0);
si1=l7;
si2=168U;
si1+=si2;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
sj0+=sj1;
sj1=l26;
sj2=l20;
si1=sj1 < sj2;
sj1=(U64)(si1);
sj0+=sj1;
l19=sj0;
si0=l11;
si1=8U;
si0+=si1;
l11=si0;
si0=l14;
si1=-1U;
si0+=si1;
l14=si0;
if(si0){
goto L27;
}
}
si0=l25;
sj0=i64_load(&i->m0,(U64)si0);
l29=sj0;
sj0=-1ULL;
l36=sj0;
goto L16;
L22:;
si0=l11;
si1=l17;
si2=1208868U;
f683(i,si0,si1,si2);
UNREACHABLE;
L21:;
si0=l17;
si1=l3;
si2=1208868U;
f597(i,si0,si1,si2);
UNREACHABLE;
L20:;
si0=l30;
si1=0U;
si2=1208884U;
f594(i,si0,si1,si2);
UNREACHABLE;
L19:;
sj0=l29;
sj1=l9;
sj0+=sj1;
sj1=l35;
sj2=l28;
sj1+=sj2;
l26=sj1;
sj2=l35;
si1=sj1 < sj2;
l11=si1;
sj1=(U64)(si1);
sj0+=sj1;
l20=sj0;
sj1=l29;
si2=l11;
sj3=l20;
sj4=l29;
si3=sj3 < sj4;
sj4=l20;
sj5=l29;
si4=sj4 == sj5;
si2=si4?si2:si3;
l11=si2;
sj0=si2?sj0:sj1;
l29=sj0;
sj0=l26;
sj1=l35;
si2=l11;
sj0=si2?sj0:sj1;
l35=sj0;
sj0=l19;
sj1=l36;
si2=l11;
sj0=si2?sj0:sj1;
l36=sj0;
goto L17;
L18:;
si0=l31;
si1=1U;
si2=1208916U;
f594(i,si0,si1,si2);
UNREACHABLE;
L17:;
si0=l31;
si0=!(si0);
if(si0){
goto L28;
}
sj0=0ULL;
l19=sj0;
si0=l16;
l11=si0;
si0=l13;
l14=si0;
si0=l31;
l18=si0;
L29:;
{
si0=l7;
si1=184U;
si0+=si1;
si1=l14;
sj1=i64_load(&i->m0,(U64)si1);
sj2=0ULL;
sj3=l36;
sj4=0ULL;
f15157(i,si0,sj1,sj2,sj3,sj4);
si0=l11;
si1=l11;
sj1=i64_load(&i->m0,(U64)si1);
l26=sj1;
sj2=l19;
si3=l7;
sj3=i64_load(&i->m0,(U64)si3+184U);
sj2+=sj3;
l20=sj2;
sj1-=sj2;
i64_store(&i->m0,(U64)si0,sj1);
sj0=l20;
sj1=l19;
si0=sj0 < sj1;
sj0=(U64)(si0);
si1=l7;
si2=184U;
si1+=si2;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
sj0+=sj1;
sj1=l26;
sj2=l20;
si1=sj1 < sj2;
sj1=(U64)(si1);
sj0+=sj1;
l19=sj0;
si0=l11;
si1=8U;
si0+=si1;
l11=si0;
si0=l14;
si1=8U;
si0+=si1;
l14=si0;
si0=l18;
si1=-1U;
si0+=si1;
l18=si0;
if(si0){
goto L29;
}
}
sj0=l35;
sj1=l19;
sj0-=sj1;
l20=sj0;
sj0=l35;
sj1=l19;
si0=sj0 >= sj1;
if(si0){
goto L31;
}
si0=l25;
sj1=l20;
i64_store(&i->m0,(U64)si0,sj1);
sj0=l29;
si0=!(sj0);
if(si0){
goto L30;
}
sj0=l29;
sj1=-1ULL;
sj0+=sj1;
l29=sj0;
goto L16;
L31:;
si0=l25;
sj1=l20;
i64_store(&i->m0,(U64)si0,sj1);
goto L16;
L30:;
sj0=l33;
l29=sj0;
si0=l30;
si0=!(si0);
if(si0){
goto L32;
}
si0=0U;
l11=si0;
si0=l30;
l18=si0;
si0=0U;
l14=si0;
L33:;
{
si0=l16;
si1=l11;
si0+=si1;
l25=si0;
sj0=i64_load(&i->m0,(U64)si0);
l20=sj0;
si1=l13;
si2=l11;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
sj0+=sj1;
l19=sj0;
sj1=l20;
si0=sj0 < sj1;
l23=si0;
si0=l14;
si1=255U;
si0&=si1;
if(si0){
goto L35;
}
si0=l23;
l14=si0;
goto L34;
L35:;
si0=l23;
sj1=l19;
sj2=1ULL;
sj1+=sj2;
l19=sj1;
si1=!(sj1);
si0|=si1;
l14=si0;
L34:;
si0=l25;
sj1=l19;
i64_store(&i->m0,(U64)si0,sj1);
si0=l11;
si1=8U;
si0+=si1;
l11=si0;
si0=l18;
si1=-1U;
si0+=si1;
l18=si0;
if(si0){
goto L33;
}
}
sj0=l9;
sj1=l33;
si2=l14;
sj0=si2?sj0:sj1;
l29=sj0;
L32:;
sj0=l36;
sj1=-1ULL;
sj0+=sj1;
l36=sj0;
goto L16;
L28:;
si0=l25;
sj1=l35;
i64_store(&i->m0,(U64)si0,sj1);
L16:;
si0=l17;
si1=l5;
si0-=si1;
l11=si0;
si1=l1;
si0=si0 >= si1;
if(si0){
goto L36;
}
si0=l0;
si1=l11;
si2=3U;
si1<<=(si2&31);
si0+=si1;
sj1=l36;
i64_store(&i->m0,(U64)si0,sj1);
si0=l16;
si1=-8U;
si0+=si1;
l16=si0;
si0=l24;
si1=l17;
si0=si0 >= si1;
if(si0){
goto L2;
}
goto L15;
L36:;
}
si0=l11;
si1=l1;
si2=1208932U;
f594(i,si0,si1,si2);
UNREACHABLE;
L6:;
si0=l14;
si1=l5;
si2=1208948U;
f593(i,si0,si1,si2);
UNREACHABLE;
L5:;
si0=l11;
si1=l3;
si2=1208432U;
f593(i,si0,si1,si2);
UNREACHABLE;
L4:;
si0=1208964U;
si1=39U;
si2=1209004U;
f604(i,si0,si1,si2);
UNREACHABLE;
L3:;
si0=1207680U;
si1=32U;
si2=1209020U;
f604(i,si0,si1,si2);
UNREACHABLE;
L2:;
si0=l7;
sj1=l29;
i64_store(&i->m0,(U64)si0+232U,sj1);
L1:;
si0=1U;
l11=si0;
si0=l12;
si1=1U;
si0=si0 <= si1;
if(si0){
goto L37;
}
si0=l5;
si1=l12;
si0=si0 < si1;
if(si0){
goto L40;
}
si0=l30;
si1=2U;
si0=si0 >= si1;
if(si0){
goto L39;
}
si0=1U;
l37=si0;
goto L38;
L40:;
si0=l15;
si1=l5;
si2=1208852U;
f593(i,si0,si1,si2);
UNREACHABLE;
L39:;
si0=l2;
si1=l27;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l16=si0;
si0=l4;
si1=l15;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l18=si0;
si0=1U;
l37=si0;
si0=l12;
l32=si0;
si0=l30;
l14=si0;
L43:;
{
si0=l14;
si1=-1U;
si0+=si1;
l31=si0;
si1=l5;
si0+=si1;
l11=si0;
si1=l27;
si0=si0 < si1;
if(si0){
goto L47;
}
si0=l11;
si1=l3;
si0=si0 > si1;
if(si0){
goto L46;
}
si0=l11;
si1=l27;
si0-=si1;
l38=si0;
si0=l37;
si1=1U;
si0&=si1;
l24=si0;
si0=!(si0);
if(si0){
goto L48;
}
sj0=l29;
sj1=l9;
si0=sj0 >= sj1;
if(si0){
goto L48;
}
si0=l14;
si1=l38;
si0=si0 < si1;
if(si0){
goto L45;
}
si0=l14;
si1=l38;
si2=1208772U;
f594(i,si0,si1,si2);
UNREACHABLE;
L48:;
sj0=0ULL;
l19=sj0;
si0=-1U;
l17=si0;
si0=0U;
l11=si0;
L49:;
{
si0=l7;
si1=104U;
si0+=si1;
si1=l18;
si2=l11;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
sj2=0ULL;
sj3=-1ULL;
sj4=0ULL;
f15157(i,si0,sj1,sj2,sj3,sj4);
si0=l16;
si1=l11;
si0+=si1;
l25=si0;
si1=l25;
sj1=i64_load(&i->m0,(U64)si1);
l26=sj1;
sj2=l19;
si3=l7;
sj3=i64_load(&i->m0,(U64)si3+104U);
sj2+=sj3;
l20=sj2;
sj1-=sj2;
i64_store(&i->m0,(U64)si0,sj1);
sj0=l20;
sj1=l19;
si0=sj0 < sj1;
sj0=(U64)(si0);
si1=l7;
si2=104U;
si1+=si2;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
sj0+=sj1;
sj1=l26;
sj2=l20;
si1=sj1 < sj2;
sj1=(U64)(si1);
sj0+=sj1;
l19=sj0;
si0=l11;
si1=8U;
si0+=si1;
l11=si0;
si0=l14;
si1=l17;
si2=1U;
si1+=si2;
l17=si1;
si0=si0 != si1;
if(si0){
goto L49;
}
}
sj0=-1ULL;
l36=sj0;
sj0=l29;
sj1=l19;
si0=sj0 == sj1;
if(si0){
goto L51;
}
si0=0U;
l11=si0;
si0=l24;
si0=!(si0);
if(si0){
goto L50;
}
sj0=l29;
sj1=l19;
si0=sj0 >= sj1;
if(si0){
goto L50;
}
si0=0U;
l11=si0;
si0=-1U;
l17=si0;
si0=0U;
l25=si0;
L52:;
{
si0=l16;
si1=l11;
si0+=si1;
l24=si0;
sj0=i64_load(&i->m0,(U64)si0);
l20=sj0;
si1=l18;
si2=l11;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
sj0+=sj1;
l19=sj0;
sj1=l20;
si0=sj0 < sj1;
l23=si0;
si0=l25;
si1=255U;
si0&=si1;
if(si0){
goto L54;
}
si0=l23;
l25=si0;
goto L53;
L54:;
si0=l23;
sj1=l19;
sj2=1ULL;
sj1+=sj2;
l19=sj1;
si1=!(sj1);
si0|=si1;
l25=si0;
L53:;
si0=l24;
sj1=l19;
i64_store(&i->m0,(U64)si0,sj1);
si0=l11;
si1=8U;
si0+=si1;
l11=si0;
si0=l14;
si1=l17;
si2=1U;
si1+=si2;
l17=si1;
si0=si0 != si1;
if(si0){
goto L52;
}
}
sj0=-2ULL;
l36=sj0;
L51:;
si0=l37;
l11=si0;
L50:;
si0=l14;
si1=l38;
si0=si0 >= si1;
if(si0){
goto L55;
}
si0=l16;
si1=l14;
si2=3U;
si1<<=(si2&31);
si0+=si1;
sj0=i64_load(&i->m0,(U64)si0);
l29=sj0;
si0=l11;
l37=si0;
goto L44;
L55:;
si0=l14;
si1=l38;
si2=1208804U;
f594(i,si0,si1,si2);
UNREACHABLE;
L47:;
si0=l27;
si1=l11;
si2=1208756U;
f683(i,si0,si1,si2);
UNREACHABLE;
L46:;
si0=l11;
si1=l3;
si2=1208756U;
f597(i,si0,si1,si2);
UNREACHABLE;
L45:;
si0=l7;
si1=152U;
si0+=si1;
sj1=l6;
sj2=1ULL;
sj3=l29;
sj4=0ULL;
f15157(i,si0,sj1,sj2,sj3,sj4);
si0=l7;
si1=136U;
si0+=si1;
si1=l7;
si2=152U;
si1+=si2;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
si2=l7;
sj2=i64_load(&i->m0,(U64)si2+152U);
l19=sj2;
si3=l16;
si4=l14;
si5=3U;
si4<<=(si5&31);
si3+=si4;
sj3=i64_load(&i->m0,(U64)si3);
l26=sj3;
sj2+=sj3;
l29=sj2;
sj3=l19;
si2=sj2 < sj3;
sj2=(U64)(si2);
sj1+=sj2;
l19=sj1;
sj2=0ULL;
sj3=l28;
sj4=0ULL;
f15157(i,si0,sj1,sj2,sj3,sj4);
si0=l16;
si1=l31;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l24=si0;
sj0=i64_load(&i->m0,(U64)si0);
l35=sj0;
sj1=l28;
si2=l7;
sj2=i64_load(&i->m0,(U64)si2+136U);
sj1+=sj2;
l20=sj1;
sj0-=sj1;
l34=sj0;
sj0=l19;
sj1=1ULL;
sj0+=sj1;
l36=sj0;
sj0=l29;
sj1=l26;
sj2=l9;
sj3=l19;
sj2*=sj3;
sj1-=sj2;
sj2=l9;
si3=l7;
si4=136U;
si3+=si4;
si4=8U;
si3+=si4;
sj3=i64_load(&i->m0,(U64)si3);
sj2+=sj3;
sj3=l20;
sj4=l28;
si3=sj3 < sj4;
sj3=(U64)(si3);
sj2+=sj3;
sj3=l35;
sj4=l20;
si3=sj3 < sj4;
sj3=(U64)(si3);
sj2+=sj3;
sj1-=sj2;
l35=sj1;
si0=sj0 <= sj1;
if(si0){
goto L57;
}
sj0=l34;
sj1=l28;
si0=sj0 < sj1;
l11=si0;
sj1=l35;
sj2=l9;
si1=sj1 < sj2;
sj2=l35;
sj3=l9;
si2=sj2 == sj3;
si0=si2?si0:si1;
if(si0){
goto L56;
}
sj0=l35;
sj1=l9;
sj0-=sj1;
si1=l11;
sj1=(U64)(si1);
sj0-=sj1;
l35=sj0;
sj0=l34;
sj1=l28;
sj0-=sj1;
l34=sj0;
sj0=l19;
sj1=2ULL;
sj0+=sj1;
l36=sj0;
goto L56;
L57:;
sj0=l35;
sj1=l9;
sj0+=sj1;
sj1=l34;
sj2=l28;
sj1+=sj2;
l26=sj1;
sj2=l34;
si1=sj1 < sj2;
l11=si1;
sj1=(U64)(si1);
sj0+=sj1;
l20=sj0;
sj1=l35;
si2=l11;
sj3=l20;
sj4=l35;
si3=sj3 < sj4;
sj4=l20;
sj5=l35;
si4=sj4 == sj5;
si2=si4?si2:si3;
l11=si2;
sj0=si2?sj0:sj1;
l35=sj0;
sj0=l26;
sj1=l34;
si2=l11;
sj0=si2?sj0:sj1;
l34=sj0;
sj0=l19;
sj1=l36;
si2=l11;
sj0=si2?sj0:sj1;
l36=sj0;
L56:;
si0=l32;
si1=1U;
si0=si0 <= si1;
if(si0){
goto L41;
}
sj0=0ULL;
l19=sj0;
si0=1U;
l17=si0;
si0=0U;
l11=si0;
L58:;
{
si0=l7;
si1=120U;
si0+=si1;
si1=l18;
si2=l11;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
sj2=0ULL;
sj3=l36;
sj4=0ULL;
f15157(i,si0,sj1,sj2,sj3,sj4);
si0=l16;
si1=l11;
si0+=si1;
l25=si0;
si1=l25;
sj1=i64_load(&i->m0,(U64)si1);
l26=sj1;
sj2=l19;
si3=l7;
sj3=i64_load(&i->m0,(U64)si3+120U);
sj2+=sj3;
l20=sj2;
sj1-=sj2;
i64_store(&i->m0,(U64)si0,sj1);
sj0=l20;
sj1=l19;
si0=sj0 < sj1;
sj0=(U64)(si0);
si1=l7;
si2=120U;
si1+=si2;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
sj0+=sj1;
sj1=l26;
sj2=l20;
si1=sj1 < sj2;
sj1=(U64)(si1);
sj0+=sj1;
l19=sj0;
si0=l11;
si1=8U;
si0+=si1;
l11=si0;
si0=l14;
si1=l17;
si2=1U;
si1+=si2;
l17=si1;
si0=si0 != si1;
if(si0){
goto L58;
}
}
si0=l24;
sj1=l34;
sj2=l19;
sj1-=sj2;
i64_store(&i->m0,(U64)si0,sj1);
sj0=l35;
sj1=l34;
sj2=l19;
si1=sj1 < sj2;
sj1=(U64)(si1);
sj0-=sj1;
l29=sj0;
sj0=l35;
sj1=0ULL;
si0=sj0 != sj1;
if(si0){
goto L44;
}
sj0=l34;
sj1=l19;
si0=sj0 >= sj1;
if(si0){
goto L44;
}
sj0=l29;
sj1=l9;
sj0+=sj1;
l26=sj0;
si0=0U;
l11=si0;
si0=0U;
l25=si0;
si0=0U;
l17=si0;
L59:;
{
si0=l16;
si1=l11;
si0+=si1;
l24=si0;
sj0=i64_load(&i->m0,(U64)si0);
l20=sj0;
si1=l18;
si2=l11;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
sj0+=sj1;
l19=sj0;
sj1=l20;
si0=sj0 < sj1;
l23=si0;
si0=l17;
si1=255U;
si0&=si1;
if(si0){
goto L61;
}
si0=l23;
l17=si0;
goto L60;
L61:;
si0=l23;
sj1=l19;
sj2=1ULL;
sj1+=sj2;
l19=sj1;
si1=!(sj1);
si0|=si1;
l17=si0;
L60:;
si0=l24;
sj1=l19;
i64_store(&i->m0,(U64)si0,sj1);
si0=l11;
si1=8U;
si0+=si1;
l11=si0;
si0=l14;
si1=l25;
si2=1U;
si1+=si2;
l25=si1;
si0=si0 != si1;
if(si0){
goto L59;
}
}
sj0=l36;
sj1=-1ULL;
sj0+=sj1;
l36=sj0;
sj0=l26;
si1=l17;
sj1=(U64)(si1);
sj0+=sj1;
l29=sj0;
L44:;
si0=l31;
si1=l1;
si0=si0 >= si1;
if(si0){
goto L62;
}
si0=l0;
si1=l31;
si2=3U;
si1<<=(si2&31);
si0+=si1;
sj1=l36;
i64_store(&i->m0,(U64)si0,sj1);
si0=l32;
si0=!(si0);
if(si0){
goto L42;
}
si0=l18;
si1=8U;
si0+=si1;
l18=si0;
si0=l32;
si1=-1U;
si0+=si1;
l32=si0;
si0=l31;
l14=si0;
si0=l31;
si1=1U;
si0=si0 <= si1;
if(si0){
goto L38;
}
goto L43;
L62:;
}
si0=l31;
si1=l1;
si2=1208820U;
f594(i,si0,si1,si2);
UNREACHABLE;
L42:;
si0=1U;
si1=0U;
si2=1208836U;
f593(i,si0,si1,si2);
UNREACHABLE;
L41:;
si0=l32;
si1=-2U;
si0+=si1;
si1=l32;
si2=1208788U;
f597(i,si0,si1,si2);
UNREACHABLE;
L38:;
si0=l2;
si1=l27;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l11=si0;
si0=l37;
si1=1U;
si0&=si1;
l14=si0;
si0=!(si0);
if(si0){
goto L69;
}
sj0=l29;
sj1=l9;
si0=sj0 < sj1;
if(si0){
goto L68;
}
L69:;
sj0=-1ULL;
l19=sj0;
si0=l7;
si1=40U;
si0+=si1;
sj1=l28;
sj2=0ULL;
sj3=-1ULL;
sj4=0ULL;
f15157(i,si0,sj1,sj2,sj3,sj4);
si0=l11;
si1=l11;
sj1=i64_load(&i->m0,(U64)si1);
l20=sj1;
si2=l7;
sj2=i64_load(&i->m0,(U64)si2+40U);
l26=sj2;
sj1-=sj2;
l35=sj1;
i64_store(&i->m0,(U64)si0,sj1);
si0=l7;
si1=56U;
si0+=si1;
sj1=l9;
sj2=0ULL;
sj3=-1ULL;
sj4=0ULL;
f15157(i,si0,sj1,sj2,sj3,sj4);
si0=l11;
si1=l11;
sj1=i64_load(&i->m0,(U64)si1+8U);
l36=sj1;
si2=l7;
si3=40U;
si2+=si3;
si3=8U;
si2+=si3;
sj2=i64_load(&i->m0,(U64)si2);
sj3=l20;
sj4=l26;
si3=sj3 < sj4;
sj3=(U64)(si3);
sj2+=sj3;
l26=sj2;
si3=l7;
sj3=i64_load(&i->m0,(U64)si3+56U);
sj2+=sj3;
l20=sj2;
sj1-=sj2;
l9=sj1;
i64_store(&i->m0,(U64)si0+8U,sj1);
sj0=l29;
sj1=l20;
sj2=l26;
si1=sj1 < sj2;
sj1=(U64)(si1);
si2=l7;
si3=56U;
si2+=si3;
si3=8U;
si2+=si3;
sj2=i64_load(&i->m0,(U64)si2);
sj1+=sj2;
sj2=l36;
sj3=l20;
si2=sj2 < sj3;
sj2=(U64)(si2);
sj1+=sj2;
l20=sj1;
si0=sj0 != sj1;
if(si0){
goto L67;
}
sj0=l9;
l29=sj0;
goto L63;
L68:;
si0=l7;
si1=88U;
si0+=si1;
sj1=l6;
sj2=1ULL;
sj3=l29;
sj4=0ULL;
f15157(i,si0,sj1,sj2,sj3,sj4);
si0=l7;
si1=72U;
si0+=si1;
si1=l7;
si2=88U;
si1+=si2;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
si2=l7;
sj2=i64_load(&i->m0,(U64)si2+88U);
l19=sj2;
si3=l11;
sj3=i64_load(&i->m0,(U64)si3+8U);
l29=sj3;
sj2+=sj3;
l35=sj2;
sj3=l19;
si2=sj2 < sj3;
sj2=(U64)(si2);
sj1+=sj2;
l26=sj1;
sj2=0ULL;
sj3=l28;
sj4=0ULL;
f15157(i,si0,sj1,sj2,sj3,sj4);
sj0=l26;
sj1=1ULL;
sj0+=sj1;
l19=sj0;
si0=l11;
sj0=i64_load(&i->m0,(U64)si0);
l34=sj0;
sj1=l28;
si2=l7;
sj2=i64_load(&i->m0,(U64)si2+72U);
sj1+=sj2;
l36=sj1;
sj0-=sj1;
l20=sj0;
sj0=l35;
sj1=l29;
sj2=l9;
sj3=l26;
sj2*=sj3;
sj1-=sj2;
sj2=l9;
si3=l7;
si4=72U;
si3+=si4;
si4=8U;
si3+=si4;
sj3=i64_load(&i->m0,(U64)si3);
sj2+=sj3;
sj3=l36;
sj4=l28;
si3=sj3 < sj4;
sj3=(U64)(si3);
sj2+=sj3;
sj3=l34;
sj4=l36;
si3=sj3 < sj4;
sj3=(U64)(si3);
sj2+=sj3;
sj1-=sj2;
l29=sj1;
si0=sj0 <= sj1;
if(si0){
goto L66;
}
sj0=l20;
sj1=l28;
si0=sj0 < sj1;
l14=si0;
sj1=l29;
sj2=l9;
si1=sj1 < sj2;
sj2=l29;
sj3=l9;
si2=sj2 == sj3;
si0=si2?si0:si1;
if(si0){
goto L64;
}
sj0=l29;
sj1=l9;
sj0-=sj1;
si1=l14;
sj1=(U64)(si1);
sj0-=sj1;
l29=sj0;
sj0=l20;
sj1=l28;
sj0-=sj1;
l20=sj0;
sj0=l26;
sj1=2ULL;
sj0+=sj1;
l19=sj0;
goto L64;
L67:;
si0=l14;
si0=!(si0);
if(si0){
goto L65;
}
sj0=l29;
sj1=l20;
si0=sj0 >= sj1;
if(si0){
goto L65;
}
si0=l11;
sj1=l35;
sj2=l28;
sj1+=sj2;
l19=sj1;
i64_store(&i->m0,(U64)si0,sj1);
si0=l11;
sj1=l28;
sj2=l9;
sj3=l19;
sj4=l35;
si3=sj3 < sj4;
sj3=(U64)(si3);
sj2+=sj3;
sj1+=sj2;
l29=sj1;
i64_store(&i->m0,(U64)si0+8U,sj1);
sj0=-2ULL;
l19=sj0;
goto L63;
L66:;
sj0=l29;
sj1=l9;
sj0+=sj1;
sj1=l20;
sj2=l28;
sj1+=sj2;
l9=sj1;
sj2=l20;
si1=sj1 < sj2;
l14=si1;
sj1=(U64)(si1);
sj0+=sj1;
l36=sj0;
sj1=l29;
si2=l14;
sj3=l36;
sj4=l29;
si3=sj3 < sj4;
sj4=l36;
sj5=l29;
si4=sj4 == sj5;
si2=si4?si2:si3;
l14=si2;
sj0=si2?sj0:sj1;
l29=sj0;
sj0=l9;
sj1=l20;
si2=l14;
sj0=si2?sj0:sj1;
l20=sj0;
sj0=l26;
sj1=l19;
si2=l14;
sj0=si2?sj0:sj1;
l19=sj0;
goto L64;
L65:;
sj0=l9;
l29=sj0;
si0=0U;
l37=si0;
goto L63;
L64:;
si0=l11;
sj1=l29;
i64_store(&i->m0,(U64)si0+8U,sj1);
si0=l11;
sj1=l20;
i64_store(&i->m0,(U64)si0,sj1);
L63:;
si0=l7;
sj1=l29;
i64_store(&i->m0,(U64)si0+232U,sj1);
si0=l1;
if(si0){
goto L70;
}
si0=0U;
si1=0U;
si2=1208448U;
f594(i,si0,si1,si2);
UNREACHABLE;
L70:;
si0=l0;
sj1=l19;
i64_store(&i->m0,(U64)si0,sj1);
si0=l37;
si1=1U;
si0&=si1;
l11=si0;
si0=l5;
l24=si0;
L37:;
si0=l24;
si1=l3;
si0=si0 > si1;
if(si0){
goto L76;
}
si0=l24;
if(si0){
goto L77;
}
si0=1206876U;
si1=43U;
si2=1208480U;
f604(i,si0,si1,si2);
UNREACHABLE;
L77:;
si0=l2;
si1=l24;
si2=-1U;
si1+=si2;
l37=si1;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l14=si0;
sj0=i64_load(&i->m0,(U64)si0);
sj1=l29;
si0=sj0 != sj1;
if(si0){
goto L78;
}
sj0=l29;
si1=l5;
sj1=(U64)(si1);
si0=sj0 < sj1;
si1=l11;
si0&=si1;
si0=!(si0);
if(si0){
goto L73;
}
si0=l1;
si1=l24;
si2=l5;
si1-=si2;
l11=si1;
si0=si0 < si1;
if(si0){
goto L79;
}
si0=l10;
si1=l1;
si2=l11;
si1-=si2;
l14=si1;
si0=si0 > si1;
if(si0){
goto L80;
}
si0=l37;
si0=!(si0);
if(si0){
goto L81;
}
si0=l0;
si1=l11;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l32=si0;
si0=l12;
si1=-3U;
si0+=si1;
si1=-5U;
si0=si0 > si1;
if(si0){
goto L82;
}
si0=l2;
si1=l24;
si2=-2U;
si1+=si2;
l23=si1;
si2=3U;
si1<<=(si2&31);
si0+=si1;
si1=0U;
si2=l37;
si0=si2?si0:si1;
l31=si0;
si0=l5;
si1=1U;
si2=l12;
si3=l12;
si1=si3?si1:si2;
si0+=si1;
si1=3U;
si0<<=(si1&31);
si1=l2;
si0+=si1;
si1=-32U;
si0+=si1;
l17=si0;
si0=1U;
l25=si0;
si0=3U;
l11=si0;
L83:;
{
si0=l12;
si1=l11;
l16=si1;
si0-=si1;
l14=si0;
si1=l10;
si0=si0 < si1;
if(si0){
goto L84;
}
si0=l14;
si1=l10;
si2=1208624U;
f594(i,si0,si1,si2);
UNREACHABLE;
L84:;
si0=l24;
si1=l16;
si0-=si1;
l11=si0;
si1=l23;
si0=si0 > si1;
if(si0){
goto L87;
}
si0=l16;
si1=-2U;
si0+=si1;
l18=si0;
si1=l12;
si0=si0 > si1;
if(si0){
goto L86;
}
si0=l23;
si1=l11;
si0=si0 == si1;
if(si0){
goto L90;
}
si0=l32;
si1=l14;
si2=3U;
si1<<=(si2&31);
si0+=si1;
sj0=i64_load(&i->m0,(U64)si0);
l36=sj0;
sj0=0ULL;
l19=sj0;
si0=l17;
l11=si0;
si0=l13;
l14=si0;
si0=l25;
l18=si0;
L91:;
{
si0=l7;
si1=24U;
si0+=si1;
si1=l14;
sj1=i64_load(&i->m0,(U64)si1);
sj2=0ULL;
sj3=l36;
sj4=0ULL;
f15157(i,si0,sj1,sj2,sj3,sj4);
si0=l11;
si1=l11;
sj1=i64_load(&i->m0,(U64)si1);
l26=sj1;
sj2=l19;
si3=l7;
sj3=i64_load(&i->m0,(U64)si3+24U);
sj2+=sj3;
l20=sj2;
sj1-=sj2;
i64_store(&i->m0,(U64)si0,sj1);
sj0=l20;
sj1=l19;
si0=sj0 < sj1;
sj0=(U64)(si0);
si1=l7;
si2=24U;
si1+=si2;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
sj0+=sj1;
sj1=l26;
sj2=l20;
si1=sj1 < sj2;
sj1=(U64)(si1);
sj0+=sj1;
l19=sj0;
si0=l11;
si1=8U;
si0+=si1;
l11=si0;
si0=l14;
si1=8U;
si0+=si1;
l14=si0;
si0=l18;
si1=-1U;
si0+=si1;
l18=si0;
if(si0){
goto L91;
}
}
si0=l31;
sj0=i64_load(&i->m0,(U64)si0);
l20=sj0;
sj1=l19;
si0=sj0 >= sj1;
if(si0){
goto L85;
}
sj0=l29;
sj1=0ULL;
si0=sj0 != sj1;
if(si0){
goto L89;
}
si0=l32;
si1=l32;
sj1=i64_load(&i->m0,(U64)si1);
l19=sj1;
sj2=-1ULL;
sj1+=sj2;
i64_store(&i->m0,(U64)si0,sj1);
sj0=l19;
sj1=0ULL;
si0=sj0 != sj1;
if(si0){
goto L73;
}
si0=l3;
si1=3U;
si0<<=(si1&31);
si1=l5;
si2=3U;
si1<<=(si2&31);
si0-=si1;
si1=-8U;
si0+=si1;
l14=si0;
si0=l0;
si1=1U;
si2=l12;
si3=l12;
si1=si3?si1:si2;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l11=si0;
L92:;
{
si0=l14;
si0=!(si0);
if(si0){
goto L88;
}
si0=l11;
si1=l11;
sj1=i64_load(&i->m0,(U64)si1);
l19=sj1;
sj2=-1ULL;
sj1+=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l14;
si1=-8U;
si0+=si1;
l14=si0;
si0=l11;
si1=8U;
si0+=si1;
l11=si0;
sj0=l19;
si0=!(sj0);
si0=!(si0);
if(si0){
goto L73;
}
goto L92;
}
L90:;
si0=l31;
sj0=i64_load(&i->m0,(U64)si0);
l20=sj0;
sj0=0ULL;
l19=sj0;
goto L85;
L89:;
sj0=l29;
sj1=-1ULL;
sj0+=sj1;
l29=sj0;
goto L85;
L88:;
si0=1208672U;
si1=49U;
si2=1208724U;
f604(i,si0,si1,si2);
UNREACHABLE;
L87:;
si0=l11;
si1=l23;
si2=1208640U;
f593(i,si0,si1,si2);
UNREACHABLE;
L86:;
si0=l18;
si1=l12;
si2=1208656U;
f597(i,si0,si1,si2);
UNREACHABLE;
L85:;
si0=l16;
si1=1U;
si0+=si1;
l11=si0;
si0=l31;
sj1=l20;
sj2=l19;
sj1-=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l17;
si1=-8U;
si0+=si1;
l17=si0;
si0=l25;
si1=1U;
si0+=si1;
l25=si0;
si0=l12;
si1=l16;
si0=si0 != si1;
if(si0){
goto L83;
}
}
L82:;
si0=l5;
si1=l12;
si0=si0 == si1;
if(si0){
goto L73;
}
si0=l21;
si1=-1U;
si0=(U32)((I32)si0>(I32)si1);
if(si0){
goto L75;
}
goto L74;
L81:;
si0=1206876U;
si1=43U;
si2=1208528U;
f604(i,si0,si1,si2);
UNREACHABLE;
L80:;
si0=l10;
si1=l14;
si2=1208512U;
f597(i,si0,si1,si2);
UNREACHABLE;
L79:;
si0=l11;
si1=l1;
si2=1208496U;
f593(i,si0,si1,si2);
UNREACHABLE;
L78:;
si0=l7;
si1=0U;
i32_store(&i->m0,(U64)si0+248U,si1);
si0=0U;
si1=l14;
si2=l7;
si3=232U;
si2+=si3;
si3=l7;
si4=248U;
si3+=si4;
si4=1208740U;
f1251(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L76:;
si0=l24;
si1=l3;
si2=1208464U;
f597(i,si0,si1,si2);
UNREACHABLE;
L75:;
si0=l8;
si1=l10;
si0=si0 < si1;
if(si0){
goto L96;
}
si0=l8;
si1=l37;
si0=si0 > si1;
if(si0){
goto L95;
}
si0=l5;
si1=l12;
si0=si0 < si1;
if(si0){
goto L94;
}
si0=l7;
si1=l8;
si2=l10;
si1-=si2;
l11=si1;
i32_store(&i->m0,(U64)si0+240U,si1);
si0=l7;
si1=l15;
i32_store(&i->m0,(U64)si0+244U,si1);
si0=l11;
si1=l15;
si0=si0 != si1;
if(si0){
goto L99;
}
si0=l8;
si1=l10;
si0=si0 == si1;
if(si0){
goto L74;
}
si0=l2;
si1=l10;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l23=si0;
si0=l11;
si1=1U;
si0&=si1;
l24=si0;
si0=l5;
si1=1U;
si0<<=(si1&31);
si1=-2U;
si0+=si1;
si1=l3;
si0=si0 != si1;
if(si0){
goto L98;
}
si0=0U;
l18=si0;
si0=0U;
l16=si0;
goto L97;
L99:;
si0=l7;
si1=0U;
i32_store(&i->m0,(U64)si0+248U,si1);
si0=0U;
si1=l7;
si2=240U;
si1+=si2;
si2=l7;
si3=244U;
si2+=si3;
si3=l7;
si4=248U;
si3+=si4;
si4=1203476U;
f1250(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L98:;
si0=l11;
si1=-2U;
si0&=si1;
l25=si0;
si0=0U;
l18=si0;
si0=l4;
l14=si0;
si0=l23;
l11=si0;
si0=0U;
l16=si0;
L100:;
{
si0=l11;
si1=l11;
sj1=i64_load(&i->m0,(U64)si1);
l19=sj1;
si2=l18;
sj2=(U64)(si2);
sj3=1ULL;
sj2&=sj3;
si3=l14;
sj3=i64_load(&i->m0,(U64)si3);
l20=sj3;
sj2+=sj3;
sj1-=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l11;
si1=8U;
si0+=si1;
l17=si0;
si1=l17;
sj1=i64_load(&i->m0,(U64)si1);
l26=sj1;
sj2=l19;
sj3=l20;
si2=sj2 <= sj3;
sj3=l19;
sj4=l20;
si3=sj3 < sj4;
si4=l18;
si5=1U;
si4&=si5;
si2=si4?si2:si3;
l18=si2;
sj2=(U64)(si2);
si3=l14;
si4=8U;
si3+=si4;
sj3=i64_load(&i->m0,(U64)si3);
l19=sj3;
sj2+=sj3;
sj1-=sj2;
i64_store(&i->m0,(U64)si0,sj1);
sj0=l26;
sj1=l19;
si0=sj0 <= sj1;
sj1=l26;
sj2=l19;
si1=sj1 < sj2;
si2=l18;
si0=si2?si0:si1;
l18=si0;
si0=l14;
si1=16U;
si0+=si1;
l14=si0;
si0=l11;
si1=16U;
si0+=si1;
l11=si0;
si0=l25;
si1=l16;
si2=2U;
si1+=si2;
l16=si1;
si0=si0 != si1;
if(si0){
goto L100;
}
}
L97:;
si0=l24;
si0=!(si0);
if(si0){
goto L101;
}
si0=l23;
si1=l16;
si2=3U;
si1<<=(si2&31);
l11=si1;
si0+=si1;
l14=si0;
si1=l14;
sj1=i64_load(&i->m0,(U64)si1);
l19=sj1;
si2=l18;
sj2=(U64)(si2);
si3=l4;
si4=l11;
si3+=si4;
sj3=i64_load(&i->m0,(U64)si3);
l20=sj3;
sj2+=sj3;
sj1-=sj2;
i64_store(&i->m0,(U64)si0,sj1);
sj0=l19;
sj1=l20;
si0=sj0 <= sj1;
sj1=l19;
sj2=l20;
si1=sj1 < sj2;
si2=l18;
si0=si2?si0:si1;
l18=si0;
L101:;
si0=l18;
si1=1U;
si0&=si1;
si0=!(si0);
if(si0){
goto L74;
}
sj0=l29;
sj1=0ULL;
si0=sj0 != sj1;
if(si0){
goto L93;
}
si0=0U;
l22=si0;
si0=l3;
si1=l5;
si0=si0 == si1;
if(si0){
goto L73;
}
si0=l10;
si0=!(si0);
if(si0){
goto L73;
}
si0=l32;
si1=l32;
sj1=i64_load(&i->m0,(U64)si1);
l19=sj1;
sj2=-1ULL;
sj1+=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=1U;
l22=si0;
sj0=l19;
sj1=0ULL;
si0=sj0 != sj1;
if(si0){
goto L73;
}
si0=l3;
si1=3U;
si0<<=(si1&31);
si1=l5;
si2=3U;
si1<<=(si2&31);
si0-=si1;
si1=-8U;
si0+=si1;
l11=si0;
si0=l0;
si1=1U;
si2=l12;
si3=l12;
si1=si3?si1:si2;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l14=si0;
L102:;
{
si0=l11;
si1=0U;
si0=si0 != si1;
l22=si0;
si0=l11;
si0=!(si0);
if(si0){
goto L73;
}
si0=l14;
si1=l14;
sj1=i64_load(&i->m0,(U64)si1);
l19=sj1;
sj2=-1ULL;
sj1+=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l11;
si1=-8U;
si0+=si1;
l11=si0;
si0=l14;
si1=8U;
si0+=si1;
l14=si0;
sj0=l19;
si0=!(sj0);
if(si0){
goto L102;
}
goto L73;
}
L96:;
si0=l10;
si1=l8;
si2=1208544U;
f683(i,si0,si1,si2);
UNREACHABLE;
L95:;
si0=l8;
si1=l37;
si2=1208544U;
f597(i,si0,si1,si2);
UNREACHABLE;
L94:;
si0=l15;
si1=l5;
si2=1208560U;
f597(i,si0,si1,si2);
UNREACHABLE;
L93:;
sj0=l29;
sj1=-1ULL;
sj0+=sj1;
l29=sj0;
L74:;
si0=l3;
si1=l5;
si0=si0 == si1;
if(si0){
goto L73;
}
si0=l8;
si1=l37;
si0=si0 > si1;
if(si0){
goto L72;
}
si0=l15;
si0=!(si0);
if(si0){
goto L73;
}
si0=l27;
si1=l30;
si0-=si1;
si1=l8;
si0=si0 > si1;
if(si0){
goto L71;
}
si0=l3;
si1=3U;
si0<<=(si1&31);
l14=si0;
si1=l5;
si2=3U;
si1<<=(si2&31);
l18=si1;
si2=l30;
si3=3U;
si2<<=(si3&31);
l11=si2;
si1+=si2;
si0-=si1;
l17=si0;
si0=l14;
si1=l11;
si0-=si1;
si1=l2;
si0+=si1;
si1=-8U;
si0+=si1;
l25=si0;
si0=l18;
si1=l11;
si0-=si1;
si1=l2;
si0+=si1;
si1=-16U;
si0+=si1;
l16=si0;
L103:;
{
si0=l10;
si1=l8;
si2=l15;
si3=-1U;
si2+=si3;
l15=si2;
si1-=si2;
l24=si1;
si0=si0 > si1;
if(si0){
goto L105;
}
si0=l10;
si0=!(si0);
if(si0){
goto L104;
}
si0=l2;
si1=l15;
si2=3U;
si1<<=(si2&31);
l11=si1;
si0+=si1;
si1=l10;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l23=si0;
si0=l4;
si1=l11;
si0+=si1;
sj0=i64_load(&i->m0,(U64)si0);
l36=sj0;
sj0=0ULL;
l19=sj0;
si0=l16;
l11=si0;
si0=l32;
l14=si0;
si0=l10;
l18=si0;
L106:;
{
si0=l7;
si1=8U;
si0+=si1;
si1=l14;
sj1=i64_load(&i->m0,(U64)si1);
sj2=0ULL;
sj3=l36;
sj4=0ULL;
f15157(i,si0,sj1,sj2,sj3,sj4);
si0=l11;
si1=l11;
sj1=i64_load(&i->m0,(U64)si1);
l26=sj1;
sj2=l19;
si3=l7;
sj3=i64_load(&i->m0,(U64)si3+8U);
sj2+=sj3;
l20=sj2;
sj1-=sj2;
i64_store(&i->m0,(U64)si0,sj1);
sj0=l20;
sj1=l19;
si0=sj0 < sj1;
sj0=(U64)(si0);
si1=l7;
si2=8U;
si1+=si2;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
sj0+=sj1;
sj1=l26;
sj2=l20;
si1=sj1 < sj2;
sj1=(U64)(si1);
sj0+=sj1;
l19=sj0;
si0=l11;
si1=8U;
si0+=si1;
l11=si0;
si0=l14;
si1=8U;
si0+=si1;
l14=si0;
si0=l18;
si1=-1U;
si0+=si1;
l18=si0;
if(si0){
goto L106;
}
}
si0=l24;
si1=l10;
si0=si0 == si1;
if(si0){
goto L108;
}
si0=l23;
si1=l23;
sj1=i64_load(&i->m0,(U64)si1);
l20=sj1;
sj2=l19;
sj1-=sj2;
i64_store(&i->m0,(U64)si0,sj1);
sj0=l20;
sj1=l19;
si0=sj0 >= sj1;
if(si0){
goto L104;
}
si0=l17;
l14=si0;
si0=l25;
l11=si0;
L109:;
{
si0=l14;
si0=!(si0);
if(si0){
goto L107;
}
si0=l11;
si1=l11;
sj1=i64_load(&i->m0,(U64)si1);
l19=sj1;
sj2=-1ULL;
sj1+=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l14;
si1=8U;
si0+=si1;
l14=si0;
si0=l11;
si1=8U;
si0+=si1;
l11=si0;
sj0=l19;
si0=!(sj0);
if(si0){
goto L109;
}
goto L104;
}
L108:;
sj0=l19;
si0=!(sj0);
if(si0){
goto L104;
}
L107:;
sj0=l29;
sj1=0ULL;
si0=sj0 != sj1;
if(si0){
goto L110;
}
si0=l10;
si0=!(si0);
if(si0){
goto L73;
}
si0=l32;
si1=l32;
sj1=i64_load(&i->m0,(U64)si1);
l19=sj1;
sj2=-1ULL;
sj1+=sj2;
i64_store(&i->m0,(U64)si0,sj1);
sj0=l19;
sj1=0ULL;
si0=sj0 != sj1;
if(si0){
goto L73;
}
si0=l3;
si1=3U;
si0<<=(si1&31);
si1=l5;
si2=3U;
si1<<=(si2&31);
si0-=si1;
si1=-8U;
si0+=si1;
l14=si0;
si0=l0;
si1=1U;
si2=l12;
si3=l12;
si1=si3?si1:si2;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l11=si0;
L111:;
{
si0=l14;
si0=!(si0);
if(si0){
goto L73;
}
si0=l11;
si1=l11;
sj1=i64_load(&i->m0,(U64)si1);
l19=sj1;
sj2=-1ULL;
sj1+=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l14;
si1=-8U;
si0+=si1;
l14=si0;
si0=l11;
si1=8U;
si0+=si1;
l11=si0;
sj0=l19;
si0=!(sj0);
si0=!(si0);
if(si0){
goto L73;
}
goto L111;
}
L110:;
sj0=l29;
sj1=-1ULL;
sj0+=sj1;
l29=sj0;
goto L104;
L105:;
si0=1206841U;
si1=35U;
si2=1208608U;
f604(i,si0,si1,si2);
UNREACHABLE;
L104:;
si0=l17;
si1=-8U;
si0+=si1;
l17=si0;
si0=l25;
si1=-8U;
si0+=si1;
l25=si0;
si0=l16;
si1=-8U;
si0+=si1;
l16=si0;
si0=l15;
if(si0){
goto L103;
}
}
L73:;
si0=l7;
si1=272U;
si0+=si1;
i->g0=si0;
si0=l22;
goto L0;
L72:;
si0=l8;
si1=l37;
si2=1208576U;
f597(i,si0,si1,si2);
UNREACHABLE;
L71:;
si0=l15;
si1=-1U;
si0+=si1;
si1=l8;
si2=1208592U;
f593(i,si0,si1,si2);
UNREACHABLE;
L0:;
return si0;
}

U32 f1095(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4,U32 l5,U64 l6) {
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
U32 si0,si1,si2,si3,si4,si5,si6,si7;
U64 sj0,sj1,sj2,sj3,sj6;
si0=i->g0;
si1=16U;
si0-=si1;
l7=si0;
i->g0=si0;
si0=l3;
si1=l5;
si0-=si1;
l8=si0;
si1=2U;
si0=si0 <= si1;
if(si0){
goto L9;
}
si0=l5;
si1=3U;
si0<<=(si1&31);
si1=l4;
si0+=si1;
si1=-8U;
si0+=si1;
sj0=i64_load(&i->m0,(U64)si0);
sj1=-1ULL;
si0=(U64)((I64)sj0>(I64)sj1);
if(si0){
goto L12;
}
si0=l8;
si1=l1;
si0=si0 > si1;
if(si0){
goto L8;
}
si0=l3;
si1=1U;
si0+=si1;
l1=si0;
si0=!(si0);
if(si0){
goto L14;
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
l9=si0;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L6;
}
si0=l9;
if(si0){
goto L16;
}
si0=8U;
l10=si0;
goto L15;
L16:;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=l9;
si0=f15022(i,si0);
l10=si0;
si0=!(si0);
if(si0){
goto L7;
}
L15:;
si0=0U;
l9=si0;
si0=l7;
si1=0U;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l7;
si1=l1;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l7;
si1=l10;
i32_store(&i->m0,(U64)si0+4U,si1);
goto L13;
L14:;
si0=l7;
si1=0U;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l7;
sj1=8ULL;
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l7;
si1=4U;
si0+=si1;
si1=0U;
f1299(i,si0,si1);
si0=l7;
si0=i32_load(&i->m0,(U64)si0+4U);
l10=si0;
si0=l7;
si0=i32_load(&i->m0,(U64)si0+12U);
l9=si0;
L13:;
si0=l10;
si1=l9;
si2=3U;
si1<<=(si2&31);
si0+=si1;
sj1=1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l7;
si1=l7;
si1=i32_load(&i->m0,(U64)si1+12U);
si2=1U;
si1+=si2;
l1=si1;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l7;
si0=i32_load(&i->m0,(U64)si0+8U);
si1=l1;
si0-=si1;
si1=l3;
si0=si0 >= si1;
if(si0){
goto L17;
}
si0=l7;
si1=4U;
si0+=si1;
si1=l1;
si2=l3;
f1302(i,si0,si1,si2);
si0=l7;
si0=i32_load(&i->m0,(U64)si0+12U);
l1=si0;
L17:;
si0=l7;
si0=i32_load(&i->m0,(U64)si0+4U);
si1=l1;
si2=3U;
si1<<=(si2&31);
si0+=si1;
si1=l2;
si2=l3;
si3=3U;
si2<<=(si3&31);
si0=f15143(i,si0,si1,si2);
si0=l7;
si1=l1;
si2=l3;
si1+=si2;
l9=si1;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l8;
si1=1U;
si0+=si1;
l1=si0;
si0=!(si0);
if(si0){
goto L11;
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
l10=si0;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L6;
}
si0=8U;
l11=si0;
si0=l10;
si0=!(si0);
if(si0){
goto L10;
}
si0=l10;
si1=1U;
si0=f15026(i,si0,si1);
l11=si0;
if(si0){
goto L10;
}
si0=8U;
si1=l10;
f52(i,si0,si1);
UNREACHABLE;
L12:;
si0=1207612U;
si1=49U;
si2=1209144U;
f604(i,si0,si1,si2);
UNREACHABLE;
L11:;
si0=8U;
si1=l1;
si2=l7;
si2=i32_load(&i->m0,(U64)si2+4U);
si3=l9;
si4=l4;
si5=l5;
sj6=l6;
si0=f1096(i,si0,si1,si2,si3,si4,si5,sj6);
si0=1206876U;
si1=43U;
si2=1209080U;
f604(i,si0,si1,si2);
UNREACHABLE;
L10:;
si0=l11;
si1=8U;
si0+=si1;
l12=si0;
si0=l11;
si1=l1;
si2=l7;
si2=i32_load(&i->m0,(U64)si2+4U);
si3=l9;
si4=l4;
si5=l5;
sj6=l6;
si0=f1096(i,si0,si1,si2,si3,si4,si5,sj6);
l13=si0;
si0=l11;
sj0=i64_load(&i->m0,(U64)si0);
sj1=0ULL;
si0=sj0 != sj1;
if(si0){
goto L21;
}
si0=l8;
si1=l5;
si0=si0 >= si1;
l1=si0;
if(si0){
goto L23;
}
si0=l5;
si1=l8;
si0=f1126(i,si0,si1);
l14=si0;
goto L22;
L23:;
si0=l8;
si1=l5;
si0=f1126(i,si0,si1);
l14=si0;
L22:;
si0=8U;
l15=si0;
si0=l14;
si0=!(si0);
if(si0){
goto L24;
}
si0=l14;
si1=268435455U;
si0=si0 > si1;
if(si0){
goto L6;
}
si0=l14;
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
goto L24;
}
si0=l10;
si1=1U;
si0=f15026(i,si0,si1);
l15=si0;
si0=!(si0);
if(si0){
goto L5;
}
L24:;
si0=l7;
si0=i32_load(&i->m0,(U64)si0+12U);
l10=si0;
si0=l7;
si0=i32_load(&i->m0,(U64)si0+4U);
l9=si0;
si0=l1;
if(si0){
goto L26;
}
si0=l9;
si1=l10;
si2=l4;
si3=l5;
si4=l12;
si5=l8;
si6=l15;
si7=l14;
sj0=f1127(i,si0,si1,si2,si3,si4,si5,si6,si7);
goto L25;
L26:;
si0=l9;
si1=l10;
si2=l12;
si3=l8;
si4=l4;
si5=l5;
si6=l15;
si7=l14;
sj0=f1127(i,si0,si1,si2,si3,si4,si5,si6,si7);
L25:;
si0=l7;
si0=i32_load(&i->m0,(U64)si0+12U);
l1=si0;
si1=l3;
si0=si0 < si1;
if(si0){
goto L4;
}
si0=l7;
si0=i32_load(&i->m0,(U64)si0+4U);
l16=si0;
si0=l13;
si0=!(si0);
if(si0){
goto L27;
}
si0=l3;
si1=l5;
si0=si0 < si1;
if(si0){
goto L3;
}
si0=l5;
si0=!(si0);
if(si0){
goto L27;
}
si0=l16;
si1=l8;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l1=si0;
si0=0U;
l10=si0;
si0=l5;
l9=si0;
L28:;
{
si0=l1;
sj0=i64_load(&i->m0,(U64)si0);
l17=sj0;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1);
sj0+=sj1;
l6=sj0;
sj1=l17;
si0=sj0 < sj1;
l18=si0;
si0=l10;
si1=255U;
si0&=si1;
if(si0){
goto L30;
}
si0=l18;
l10=si0;
goto L29;
L30:;
si0=l18;
sj1=l6;
sj2=1ULL;
sj1+=sj2;
l6=sj1;
si1=!(sj1);
si0|=si1;
l10=si0;
L29:;
si0=l1;
sj1=l6;
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si1=8U;
si0+=si1;
l1=si0;
si0=l4;
si1=8U;
si0+=si1;
l4=si0;
si0=l9;
si1=-1U;
si0+=si1;
l9=si0;
if(si0){
goto L28;
}
}
si0=l10;
si0=!(si0);
if(si0){
goto L27;
}
si0=l0;
si1=l12;
sj1=i64_load(&i->m0,(U64)si1);
l6=sj1;
sj2=-1ULL;
sj1+=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=0U;
l1=si0;
sj0=l6;
sj1=0ULL;
si0=sj0 != sj1;
if(si0){
goto L19;
}
si0=l11;
si1=16U;
si0+=si1;
l4=si0;
si0=l0;
si1=8U;
si0+=si1;
l10=si0;
si0=l5;
si1=-1U;
si0^=si1;
si1=l3;
si0+=si1;
l9=si0;
si0=0U;
l18=si0;
si0=0U;
l1=si0;
L31:;
{
si0=l9;
si1=l1;
si0=si0 == si1;
if(si0){
goto L2;
}
si0=l10;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1);
l6=sj1;
sj2=-1ULL;
sj1+=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=8U;
si0+=si1;
l4=si0;
si0=l10;
si1=8U;
si0+=si1;
l10=si0;
si0=l1;
si1=1U;
si0+=si1;
l1=si0;
sj0=l6;
si0=!(sj0);
if(si0){
goto L31;
}
goto L19;
}
L27:;
si0=l16;
si1=-8U;
si0+=si1;
l9=si0;
si0=l3;
si1=3U;
si0<<=(si1&31);
l1=si0;
si0=l2;
si1=-8U;
si0+=si1;
l18=si0;
L33:;
{
si0=l1;
si0=!(si0);
if(si0){
goto L32;
}
si0=l9;
si1=l1;
si0+=si1;
l4=si0;
si0=l18;
si1=l1;
si0+=si1;
l10=si0;
si0=l1;
si1=-8U;
si0+=si1;
l1=si0;
si0=-1U;
si1=l10;
sj1=i64_load(&i->m0,(U64)si1);
l6=sj1;
si2=l4;
sj2=i64_load(&i->m0,(U64)si2);
l17=sj2;
si1=sj1 != sj2;
sj2=l6;
sj3=l17;
si2=sj2 > sj3;
si0=si2?si0:si1;
l4=si0;
si0=!(si0);
if(si0){
goto L33;
}
}
si0=l4;
si1=255U;
si0&=si1;
si1=1U;
si0=si0 == si1;
if(si0){
goto L20;
}
L32:;
si0=l14;
si0=!(si0);
if(si0){
goto L21;
}
si0=l15;
f15024(i,si0);
L21:;
si0=l0;
si1=l12;
si2=l8;
si3=3U;
si2<<=(si3&31);
si0=f15143(i,si0,si1,si2);
si0=l11;
f15024(i,si0);
si0=l7;
si0=i32_load(&i->m0,(U64)si0+8U);
si0=!(si0);
if(si0){
goto L1;
}
si0=l7;
si0=i32_load(&i->m0,(U64)si0+4U);
f15024(i,si0);
goto L1;
L20:;
si0=l0;
si1=l12;
sj1=i64_load(&i->m0,(U64)si1);
l6=sj1;
sj2=-1ULL;
sj1+=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=0U;
l1=si0;
sj0=l6;
sj1=0ULL;
si0=sj0 != sj1;
if(si0){
goto L19;
}
si0=l11;
si1=16U;
si0+=si1;
l4=si0;
si0=l0;
si1=8U;
si0+=si1;
l10=si0;
si0=l5;
si1=-1U;
si0^=si1;
si1=l3;
si0+=si1;
l9=si0;
si0=0U;
l1=si0;
L34:;
{
si0=l9;
si1=l1;
si0=si0 == si1;
if(si0){
goto L18;
}
si0=l10;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1);
l6=sj1;
sj2=-1ULL;
sj1+=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=8U;
si0+=si1;
l4=si0;
si0=l10;
si1=8U;
si0+=si1;
l10=si0;
si0=l1;
si1=1U;
si0+=si1;
l1=si0;
sj0=l6;
si0=!(sj0);
if(si0){
goto L34;
}
}
L19:;
si0=1U;
l18=si0;
si0=l0;
si1=l1;
si2=1U;
si1+=si2;
l1=si1;
si2=3U;
si1<<=(si2&31);
l4=si1;
si0+=si1;
si1=l12;
si2=l4;
si1+=si2;
si2=l8;
si3=l1;
si2-=si3;
si3=3U;
si2<<=(si3&31);
si0=f15143(i,si0,si1,si2);
goto L2;
L18:;
si0=0U;
l18=si0;
si0=l13;
if(si0){
goto L2;
}
si0=1207300U;
si1=27U;
si2=1209128U;
f604(i,si0,si1,si2);
UNREACHABLE;
L9:;
si0=1209160U;
si1=36U;
si2=1209196U;
f604(i,si0,si1,si2);
UNREACHABLE;
L8:;
si0=l8;
si1=l1;
si2=1209064U;
f597(i,si0,si1,si2);
UNREACHABLE;
L7:;
si0=8U;
si1=l9;
f52(i,si0,si1);
UNREACHABLE;
L6:;
f53(i);
UNREACHABLE;
L5:;
si0=8U;
si1=l10;
f52(i,si0,si1);
UNREACHABLE;
L4:;
si0=l3;
si1=l1;
si2=1209096U;
f597(i,si0,si1,si2);
UNREACHABLE;
L3:;
si0=l8;
si1=l3;
si2=1209112U;
f593(i,si0,si1,si2);
UNREACHABLE;
L2:;
si0=l14;
si0=!(si0);
if(si0){
goto L35;
}
si0=l15;
f15024(i,si0);
L35:;
si0=l11;
f15024(i,si0);
si0=l7;
si0=i32_load(&i->m0,(U64)si0+8U);
si0=!(si0);
if(si0){
goto L36;
}
si0=l7;
si0=i32_load(&i->m0,(U64)si0+4U);
f15024(i,si0);
L36:;
si0=l13;
si1=l18;
si0&=si1;
l13=si0;
L1:;
si0=l7;
si1=16U;
si0+=si1;
i->g0=si0;
si0=l13;
L0:;
return si0;
}

U32 f1096(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4,U32 l5,U64 l6) {
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
U64 l23=0;
U64 l24=0;
U32 l25=0;
U32 l26=0;
U32 l27=0;
U64 l28=0;
U32 l29=0;
U32 l30=0;
U64 l31=0;
U64 l32=0;
U64 l33=0;
U64 l34=0;
U64 l35=0;
U32 si0,si1,si2,si3,si4,si5,si6,si7,si8;
U64 sj0,sj1,sj2,sj3,sj4,sj5,sj6;
si0=i->g0;
si1=112U;
si0-=si1;
l7=si0;
i->g0=si0;
si0=l5;
si1=6U;
si0=si0 < si1;
if(si0){
goto L27;
}
si0=l3;
si1=l5;
si0=si0 <= si1;
if(si0){
goto L26;
}
si0=l4;
si1=l5;
si2=-1U;
si1+=si2;
l8=si1;
si2=3U;
si1<<=(si2&31);
si0+=si1;
sj0=i64_load(&i->m0,(U64)si0);
l9=sj0;
sj1=-1ULL;
si0=(U64)((I64)sj0>(I64)sj1);
if(si0){
goto L25;
}
si0=l3;
si1=l5;
si0-=si1;
l10=si0;
si1=l5;
si0=si0 >= si1;
if(si0){
goto L28;
}
si0=l10;
si1=268435454U;
si0=si0 > si1;
if(si0){
goto L11;
}
si0=l10;
si1=1U;
si0+=si1;
l11=si0;
si1=3U;
si0<<=(si1&31);
l12=si0;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L11;
}
si0=l12;
if(si0){
goto L30;
}
si0=8U;
l13=si0;
goto L29;
L30:;
si0=l12;
si1=1U;
si0=f15026(i,si0,si1);
l13=si0;
si0=!(si0);
if(si0){
goto L24;
}
L29:;
si0=l5;
si1=l8;
si2=l10;
si1-=si2;
l14=si1;
si0=si0 < si1;
if(si0){
goto L23;
}
si0=l5;
si1=l14;
si0-=si1;
l15=si0;
si0=l4;
si1=l14;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l5=si0;
si0=l10;
si1=210U;
si0=si0 > si1;
if(si0){
goto L33;
}
si0=l8;
si1=l10;
si0=si0 != si1;
if(si0){
goto L32;
}
L33:;
si0=l12;
if(si0){
goto L35;
}
si0=8U;
l16=si0;
goto L34;
L35:;
si0=l12;
si1=1U;
si0=f15026(i,si0,si1);
l16=si0;
si0=!(si0);
if(si0){
goto L22;
}
L34:;
si0=l3;
si1=l14;
si2=l11;
si3=1U;
si2>>=(si3&31);
si1+=si2;
si2=-1U;
si1+=si2;
l14=si1;
si0=si0 < si1;
if(si0){
goto L21;
}
si0=l13;
si1=l11;
si2=l2;
si3=l14;
si4=3U;
si3<<=(si4&31);
si2+=si3;
si3=l3;
si4=l14;
si3-=si4;
si4=l5;
si5=l15;
sj6=l6;
si7=l16;
si8=l11;
si0=f1089(i,si0,si1,si2,si3,si4,si5,sj6,si7,si8);
l14=si0;
si0=l16;
f15024(i,si0);
goto L31;
L32:;
si0=l3;
si1=l14;
si2=-1U;
si1+=si2;
l14=si1;
si0=si0 < si1;
if(si0){
goto L20;
}
si0=l13;
si1=l11;
si2=l2;
si3=l14;
si4=3U;
si3<<=(si4&31);
si2+=si3;
si3=l3;
si4=l14;
si3-=si4;
si4=l5;
si5=l15;
sj6=l6;
si0=f1090(i,si0,si1,si2,si3,si4,si5,sj6);
l14=si0;
L31:;
si0=l10;
si1=l1;
si0=si0 > si1;
if(si0){
goto L19;
}
si0=l0;
si1=l13;
si2=8U;
si1+=si2;
si2=l10;
si3=3U;
si2<<=(si3&31);
si0=f15143(i,si0,si1,si2);
si0=l13;
f15024(i,si0);
goto L1;
L28:;
si0=l10;
si1=1U;
si0+=si1;
si1=l5;
si0=REM_U(si0,si1);
l17=si0;
si0=l5;
si1=268435455U;
si0=si0 > si1;
if(si0){
goto L11;
}
si0=l5;
si1=3U;
si0<<=(si1&31);
l14=si0;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L11;
}
si0=l14;
if(si0){
goto L37;
}
si0=8U;
l18=si0;
goto L36;
L37:;
si0=l14;
si1=1U;
si0=f15026(i,si0,si1);
l18=si0;
si0=!(si0);
if(si0){
goto L18;
}
L36:;
si0=l3;
si1=l10;
si2=l17;
si3=l5;
si4=l17;
si2=si4?si2:si3;
l19=si2;
si1-=si2;
l20=si1;
si0=si0 < si1;
if(si0){
goto L17;
}
si0=l1;
si1=l20;
si0=si0 < si1;
if(si0){
goto L16;
}
si0=l3;
si1=l20;
si0-=si1;
l14=si0;
si0=l2;
si1=l20;
si2=3U;
si1<<=(si2&31);
l13=si1;
si0+=si1;
l16=si0;
si0=l0;
si1=l13;
si0+=si1;
l21=si0;
si0=l19;
si1=1U;
si0=si0 != si1;
if(si0){
goto L41;
}
si0=l14;
si1=l5;
si0=si0 <= si1;
if(si0){
goto L15;
}
si0=l5;
si1=-2U;
si0+=si1;
l11=si0;
si0=l2;
si1=l3;
si2=3U;
si1<<=(si2&31);
si2=l19;
si3=3U;
si2<<=(si3&31);
si1-=si2;
si0+=si1;
l14=si0;
si0=l5;
si1=1U;
si0+=si1;
l12=si0;
si0=l16;
si1=8U;
si0+=si1;
l22=si0;
si0=l5;
si1=3U;
si0<<=(si1&31);
si1=l4;
si0+=si1;
si1=-8U;
si0+=si1;
l13=si0;
L42:;
{
si0=l12;
si1=-1U;
si0+=si1;
l12=si0;
si0=!(si0);
if(si0){
goto L40;
}
si0=l14;
sj0=i64_load(&i->m0,(U64)si0);
l23=sj0;
si0=l13;
sj0=i64_load(&i->m0,(U64)si0);
l24=sj0;
si0=l14;
si1=-8U;
si0+=si1;
l14=si0;
si0=l13;
si1=-8U;
si0+=si1;
l13=si0;
sj0=l24;
sj1=l23;
si0=sj0 == sj1;
if(si0){
goto L42;
}
}
si0=0U;
l17=si0;
sj0=l24;
sj1=l23;
si0=sj0 <= sj1;
if(si0){
goto L40;
}
goto L8;
L41:;
si0=l14;
si1=l5;
si2=l19;
si1-=si2;
l25=si1;
si0=si0 < si1;
if(si0){
goto L14;
}
si0=l1;
si1=l20;
si0-=si1;
l13=si0;
si0=l4;
si1=l25;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l11=si0;
si0=l14;
si1=l25;
si0-=si1;
l12=si0;
si0=l16;
si1=l25;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l15=si0;
si0=l19;
si1=2U;
si0=si0 == si1;
if(si0){
goto L39;
}
si0=l19;
si1=85U;
si0=si0 < si1;
if(si0){
goto L38;
}
si0=l21;
si1=l13;
si2=l15;
si3=l12;
si4=l11;
si5=l19;
sj6=l6;
si7=l18;
si8=l5;
si0=f1165(i,si0,si1,si2,si3,si4,si5,sj6,si7,si8);
l26=si0;
goto L12;
L40:;
si0=l5;
si1=1U;
si0&=si1;
l25=si0;
si0=l8;
if(si0){
goto L44;
}
si0=0U;
l12=si0;
si0=0U;
l15=si0;
goto L43;
L44:;
si0=l5;
si1=-2U;
si0&=si1;
l17=si0;
si0=l20;
si1=3U;
si0<<=(si1&31);
si1=l2;
si0+=si1;
si1=16U;
si0+=si1;
l14=si0;
si0=0U;
l12=si0;
si0=l4;
l13=si0;
si0=0U;
l15=si0;
L45:;
{
si0=l14;
si1=-8U;
si0+=si1;
l27=si0;
si1=l27;
sj1=i64_load(&i->m0,(U64)si1);
l23=sj1;
si2=l12;
sj2=(U64)(si2);
sj3=1ULL;
sj2&=sj3;
si3=l13;
sj3=i64_load(&i->m0,(U64)si3);
l24=sj3;
sj2+=sj3;
sj1-=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l14;
si1=l14;
sj1=i64_load(&i->m0,(U64)si1);
l28=sj1;
sj2=l23;
sj3=l24;
si2=sj2 <= sj3;
sj3=l23;
sj4=l24;
si3=sj3 < sj4;
si4=l12;
si5=1U;
si4&=si5;
si2=si4?si2:si3;
l12=si2;
sj2=(U64)(si2);
si3=l13;
si4=8U;
si3+=si4;
sj3=i64_load(&i->m0,(U64)si3);
l23=sj3;
sj2+=sj3;
sj1-=sj2;
i64_store(&i->m0,(U64)si0,sj1);
sj0=l28;
sj1=l23;
si0=sj0 <= sj1;
sj1=l28;
sj2=l23;
si1=sj1 < sj2;
si2=l12;
si0=si2?si0:si1;
l12=si0;
si0=l13;
si1=16U;
si0+=si1;
l13=si0;
si0=l14;
si1=16U;
si0+=si1;
l14=si0;
si0=l17;
si1=l15;
si2=2U;
si1+=si2;
l15=si1;
si0=si0 != si1;
if(si0){
goto L45;
}
}
L43:;
si0=l25;
si0=!(si0);
if(si0){
goto L46;
}
si0=l22;
si1=l15;
si2=3U;
si1<<=(si2&31);
l14=si1;
si0+=si1;
l13=si0;
si1=l13;
sj1=i64_load(&i->m0,(U64)si1);
l23=sj1;
si2=l12;
sj2=(U64)(si2);
si3=l4;
si4=l14;
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
si2=l12;
si0=si2?si0:si1;
l12=si0;
L46:;
si0=1U;
l17=si0;
si0=l12;
si1=1U;
si0&=si1;
si0=!(si0);
if(si0){
goto L8;
}
si0=1210104U;
si1=64U;
si2=1210168U;
f604(i,si0,si1,si2);
UNREACHABLE;
L39:;
si0=l12;
si1=3U;
si0=si0 <= si1;
if(si0){
goto L13;
}
si0=l21;
si1=l13;
si2=l15;
si3=4U;
si4=l11;
si5=2U;
si0=f1168(i,si0,si1,si2,si3,si4,si5);
l26=si0;
goto L12;
L38:;
si0=l21;
si1=l13;
si2=l15;
si3=l12;
si4=l11;
si5=l19;
sj6=l6;
si0=f1166(i,si0,si1,si2,si3,si4,si5,sj6);
l26=si0;
goto L12;
L27:;
si0=1209212U;
si1=28U;
si2=1210420U;
f604(i,si0,si1,si2);
UNREACHABLE;
L26:;
si0=1209368U;
si1=31U;
si2=1210404U;
f604(i,si0,si1,si2);
UNREACHABLE;
L25:;
si0=1210344U;
si1=41U;
si2=1210388U;
f604(i,si0,si1,si2);
UNREACHABLE;
L24:;
si0=8U;
si1=l12;
f52(i,si0,si1);
UNREACHABLE;
L23:;
si0=l14;
si1=l5;
si2=1209916U;
f593(i,si0,si1,si2);
UNREACHABLE;
L22:;
si0=8U;
si1=l12;
f52(i,si0,si1);
UNREACHABLE;
L21:;
si0=l14;
si1=l3;
si2=1209868U;
f593(i,si0,si1,si2);
UNREACHABLE;
L20:;
si0=l14;
si1=l3;
si2=1209884U;
f593(i,si0,si1,si2);
UNREACHABLE;
L19:;
si0=l10;
si1=l1;
si2=1209900U;
f597(i,si0,si1,si2);
UNREACHABLE;
L18:;
si0=8U;
si1=l14;
f52(i,si0,si1);
UNREACHABLE;
L17:;
si0=l20;
si1=l3;
si2=1209932U;
f593(i,si0,si1,si2);
UNREACHABLE;
L16:;
si0=l20;
si1=l1;
si2=1209948U;
f593(i,si0,si1,si2);
UNREACHABLE;
L15:;
si0=l5;
si1=1U;
si0+=si1;
si1=l14;
si2=1209964U;
f597(i,si0,si1,si2);
UNREACHABLE;
L14:;
si0=l25;
si1=l14;
si2=1210184U;
f593(i,si0,si1,si2);
UNREACHABLE;
L13:;
si0=4U;
si1=l12;
si2=1210200U;
f597(i,si0,si1,si2);
UNREACHABLE;
L12:;
si0=l19;
si1=l13;
si0=si0 > si1;
if(si0){
goto L10;
}
si0=l17;
if(si0){
goto L47;
}
si0=l26;
l17=si0;
goto L7;
L47:;
si0=l17;
si1=l25;
si0=si0 >= si1;
l13=si0;
if(si0){
goto L49;
}
si0=l25;
si1=l17;
si0=f1126(i,si0,si1);
l22=si0;
goto L48;
L49:;
si0=l17;
si1=l25;
si0=f1126(i,si0,si1);
l22=si0;
L48:;
si0=8U;
l29=si0;
si0=l22;
si0=!(si0);
if(si0){
goto L51;
}
si0=l22;
si1=268435455U;
si0=si0 > si1;
if(si0){
goto L11;
}
si0=l22;
si1=3U;
si0<<=(si1&31);
l12=si0;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L11;
}
si0=l12;
si0=!(si0);
if(si0){
goto L51;
}
si0=l12;
si1=1U;
si0=f15026(i,si0,si1);
l29=si0;
si0=!(si0);
if(si0){
goto L50;
}
L51:;
si0=l13;
if(si0){
goto L53;
}
si0=l18;
si1=l5;
si2=l4;
si3=l25;
si4=l21;
si5=l17;
si6=l29;
si7=l22;
sj0=f1127(i,si0,si1,si2,si3,si4,si5,si6,si7);
goto L52;
L53:;
si0=l18;
si1=l5;
si2=l21;
si3=l17;
si4=l4;
si5=l25;
si6=l29;
si7=l22;
sj0=f1127(i,si0,si1,si2,si3,si4,si5,si6,si7);
L52:;
si0=l14;
si1=l5;
si0=si0 < si1;
if(si0){
goto L54;
}
si0=l5;
si1=1U;
si0&=si1;
l30=si0;
si0=l8;
if(si0){
goto L56;
}
si0=0U;
l12=si0;
si0=0U;
l14=si0;
goto L55;
L56:;
si0=0U;
l11=si0;
si0=0U;
si1=l5;
si2=-2U;
si1&=si2;
si0-=si1;
l27=si0;
si0=l16;
l14=si0;
si0=l18;
l13=si0;
si0=0U;
l12=si0;
L57:;
{
si0=l14;
si1=l14;
sj1=i64_load(&i->m0,(U64)si1);
l23=sj1;
si2=l12;
sj2=(U64)(si2);
sj3=1ULL;
sj2&=sj3;
si3=l13;
sj3=i64_load(&i->m0,(U64)si3);
l24=sj3;
sj2+=sj3;
sj1-=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l14;
si1=8U;
si0+=si1;
l15=si0;
si1=l15;
sj1=i64_load(&i->m0,(U64)si1);
l28=sj1;
sj2=l23;
sj3=l24;
si2=sj2 <= sj3;
sj3=l23;
sj4=l24;
si3=sj3 < sj4;
si4=l12;
si5=1U;
si4&=si5;
si2=si4?si2:si3;
l12=si2;
sj2=(U64)(si2);
si3=l13;
si4=8U;
si3+=si4;
sj3=i64_load(&i->m0,(U64)si3);
l23=sj3;
sj2+=sj3;
sj1-=sj2;
i64_store(&i->m0,(U64)si0,sj1);
sj0=l28;
sj1=l23;
si0=sj0 <= sj1;
sj1=l28;
sj2=l23;
si1=sj1 < sj2;
si2=l12;
si0=si2?si0:si1;
l12=si0;
si0=l14;
si1=16U;
si0+=si1;
l14=si0;
si0=l13;
si1=16U;
si0+=si1;
l13=si0;
si0=l27;
si1=l11;
si2=-2U;
si1+=si2;
l11=si1;
si0=si0 != si1;
if(si0){
goto L57;
}
}
si0=0U;
si1=l11;
si0-=si1;
l14=si0;
L55:;
si0=l30;
si0=!(si0);
if(si0){
goto L58;
}
si0=l16;
si1=l14;
si2=3U;
si1<<=(si2&31);
l14=si1;
si0+=si1;
l13=si0;
si1=l13;
sj1=i64_load(&i->m0,(U64)si1);
l23=sj1;
si2=l12;
sj2=(U64)(si2);
si3=l18;
si4=l14;
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
si2=l12;
si0=si2?si0:si1;
l12=si0;
L58:;
si0=l26;
si0=!(si0);
if(si0){
goto L60;
}
si0=0U;
l13=si0;
si0=l25;
si1=1U;
si0&=si1;
l30=si0;
si0=l16;
si1=l17;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l15=si0;
si0=l19;
si1=-1U;
si0^=si1;
si1=0U;
si2=l5;
si1-=si2;
si0=si0 != si1;
if(si0){
goto L62;
}
si0=0U;
l11=si0;
goto L61;
L62:;
si0=l25;
si1=-2U;
si0&=si1;
l17=si0;
si0=0U;
l13=si0;
si0=l4;
l14=si0;
si0=0U;
l11=si0;
L63:;
{
si0=l15;
si1=l11;
si2=3U;
si1<<=(si2&31);
l27=si1;
si0+=si1;
l8=si0;
si1=l8;
sj1=i64_load(&i->m0,(U64)si1);
l23=sj1;
si2=l13;
sj2=(U64)(si2);
sj3=1ULL;
sj2&=sj3;
si3=l14;
sj3=i64_load(&i->m0,(U64)si3);
l24=sj3;
sj2+=sj3;
sj1-=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l15;
si1=l27;
si2=8U;
si1|=si2;
si0+=si1;
l27=si0;
si1=l27;
sj1=i64_load(&i->m0,(U64)si1);
l28=sj1;
sj2=l23;
sj3=l24;
si2=sj2 <= sj3;
sj3=l23;
sj4=l24;
si3=sj3 < sj4;
si4=l13;
si5=1U;
si4&=si5;
si2=si4?si2:si3;
l13=si2;
sj2=(U64)(si2);
si3=l14;
si4=8U;
si3+=si4;
sj3=i64_load(&i->m0,(U64)si3);
l23=sj3;
sj2+=sj3;
sj1-=sj2;
i64_store(&i->m0,(U64)si0,sj1);
sj0=l28;
sj1=l23;
si0=sj0 <= sj1;
sj1=l28;
sj2=l23;
si1=sj1 < sj2;
si2=l13;
si0=si2?si0:si1;
l13=si0;
si0=l14;
si1=16U;
si0+=si1;
l14=si0;
si0=l17;
si1=l11;
si2=2U;
si1+=si2;
l11=si1;
si0=si0 != si1;
if(si0){
goto L63;
}
}
L61:;
si0=l30;
si0=!(si0);
if(si0){
goto L64;
}
si0=l15;
si1=l11;
si2=3U;
si1<<=(si2&31);
l14=si1;
si0+=si1;
l11=si0;
si1=l11;
sj1=i64_load(&i->m0,(U64)si1);
l23=sj1;
si2=l13;
sj2=(U64)(si2);
si3=l4;
si4=l14;
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
si2=l13;
si0=si2?si0:si1;
l13=si0;
L64:;
si0=l12;
si1=l13;
si0|=si1;
si1=1U;
si0&=si1;
if(si0){
goto L65;
}
si0=l26;
l17=si0;
goto L9;
L65:;
sj0=2ULL;
sj1=1ULL;
si2=l12;
si3=1U;
si2&=si3;
sj0=si2?sj0:sj1;
sj1=1ULL;
si2=l13;
si3=1U;
si2&=si3;
sj0=si2?sj0:sj1;
l28=sj0;
goto L59;
L60:;
si0=0U;
l17=si0;
sj0=1ULL;
l28=sj0;
si0=l12;
si1=1U;
si0&=si1;
si0=!(si0);
if(si0){
goto L9;
}
L59:;
si0=l19;
si1=3U;
si0<<=(si1&31);
si1=-8U;
si0+=si1;
l27=si0;
si0=l20;
si1=3U;
si0<<=(si1&31);
si1=l0;
si0+=si1;
si1=8U;
si0+=si1;
l8=si0;
si0=l26;
l17=si0;
L66:;
{
si0=l19;
si0=!(si0);
if(si0){
goto L68;
}
si0=l21;
si1=l21;
sj1=i64_load(&i->m0,(U64)si1);
l23=sj1;
sj2=-1ULL;
sj1+=sj2;
i64_store(&i->m0,(U64)si0,sj1);
sj0=l23;
sj1=0ULL;
si0=sj0 != sj1;
if(si0){
goto L67;
}
si0=l27;
l13=si0;
si0=l8;
l14=si0;
L69:;
{
si0=l13;
si0=!(si0);
if(si0){
goto L68;
}
si0=l14;
si1=l14;
sj1=i64_load(&i->m0,(U64)si1);
l23=sj1;
sj2=-1ULL;
sj1+=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l13;
si1=-8U;
si0+=si1;
l13=si0;
si0=l14;
si1=8U;
si0+=si1;
l14=si0;
sj0=l23;
si0=!(sj0);
if(si0){
goto L69;
}
goto L67;
}
L68:;
si0=l17;
si1=1U;
si0&=si1;
l14=si0;
si0=0U;
l17=si0;
si0=l14;
if(si0){
goto L67;
}
si0=1207300U;
si1=27U;
si2=1210328U;
f604(i,si0,si1,si2);
UNREACHABLE;
L67:;
si0=0U;
l12=si0;
si0=l5;
l11=si0;
si0=l16;
l14=si0;
si0=l4;
l13=si0;
L70:;
{
si0=l14;
sj0=i64_load(&i->m0,(U64)si0);
l24=sj0;
si1=l13;
sj1=i64_load(&i->m0,(U64)si1);
sj0+=sj1;
l23=sj0;
sj1=l24;
si0=sj0 < sj1;
l15=si0;
si0=l12;
si1=255U;
si0&=si1;
if(si0){
goto L72;
}
si0=l15;
l12=si0;
goto L71;
L72:;
si0=l15;
sj1=l23;
sj2=1ULL;
sj1+=sj2;
l23=sj1;
si1=!(sj1);
si0|=si1;
l12=si0;
L71:;
si0=l14;
sj1=l23;
i64_store(&i->m0,(U64)si0,sj1);
si0=l14;
si1=8U;
si0+=si1;
l14=si0;
si0=l13;
si1=8U;
si0+=si1;
l13=si0;
si0=l11;
si1=-1U;
si0+=si1;
l11=si0;
if(si0){
goto L70;
}
}
sj0=l28;
si1=l12;
sj1=(U64)(si1);
sj0-=sj1;
l28=sj0;
si0=!(sj0);
if(si0){
goto L9;
}
goto L66;
}
L54:;
si0=l5;
si1=l14;
si2=1210232U;
f597(i,si0,si1,si2);
UNREACHABLE;
L50:;
si0=8U;
si1=l12;
f52(i,si0,si1);
UNREACHABLE;
L11:;
f53(i);
UNREACHABLE;
L10:;
si0=l19;
si1=l13;
si2=1210216U;
f597(i,si0,si1,si2);
UNREACHABLE;
L9:;
si0=l22;
si0=!(si0);
if(si0){
goto L7;
}
si0=l29;
f15024(i,si0);
goto L7;
L8:;
si0=l7;
si1=l16;
si2=l5;
si3=3U;
si2<<=(si3&31);
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
l23=sj1;
i64_store(&i->m0,(U64)si0+72U,sj1);
si0=l4;
si1=l11;
si2=3U;
si1<<=(si2&31);
l14=si1;
si0+=si1;
sj0=i64_load(&i->m0,(U64)si0);
l24=sj0;
si0=l16;
si1=l14;
si0+=si1;
l15=si0;
sj0=i64_load(&i->m0,(U64)si0);
l31=sj0;
si0=l16;
si1=l8;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l27=si0;
sj0=i64_load(&i->m0,(U64)si0);
l28=sj0;
sj0=l23;
sj1=l9;
si0=sj0 < sj1;
if(si0){
goto L78;
}
sj0=l23;
sj1=l9;
si0=sj0 != sj1;
if(si0){
goto L77;
}
sj0=l28;
sj1=l24;
si0=sj0 > sj1;
if(si0){
goto L77;
}
L78:;
sj0=l23;
sj1=l9;
si0=sj0 != sj1;
if(si0){
goto L76;
}
sj0=l28;
sj1=l24;
si0=sj0 != sj1;
if(si0){
goto L76;
}
si0=l7;
si1=8U;
si0+=si1;
si1=8U;
si0+=si1;
l12=si0;
si0=l4;
l14=si0;
si0=l5;
l13=si0;
sj0=0ULL;
l23=sj0;
L79:;
{
si0=l7;
si1=8U;
si0+=si1;
si1=l14;
sj1=i64_load(&i->m0,(U64)si1);
sj2=0ULL;
sj3=-1ULL;
sj4=0ULL;
f15157(i,si0,sj1,sj2,sj3,sj4);
si0=l16;
si1=l16;
sj1=i64_load(&i->m0,(U64)si1);
l28=sj1;
sj2=l23;
si3=l7;
sj3=i64_load(&i->m0,(U64)si3+8U);
sj2+=sj3;
l24=sj2;
sj1-=sj2;
i64_store(&i->m0,(U64)si0,sj1);
sj0=l24;
sj1=l23;
si0=sj0 < sj1;
sj0=(U64)(si0);
si1=l12;
sj1=i64_load(&i->m0,(U64)si1);
sj0+=sj1;
sj1=l28;
sj2=l24;
si1=sj1 < sj2;
sj1=(U64)(si1);
sj0+=sj1;
l23=sj0;
si0=l16;
si1=8U;
si0+=si1;
l16=si0;
si0=l14;
si1=8U;
si0+=si1;
l14=si0;
si0=l13;
si1=-1U;
si0+=si1;
l13=si0;
if(si0){
goto L79;
}
}
si0=l7;
sj1=l23;
i64_store(&i->m0,(U64)si0+80U,sj1);
sj0=l23;
sj1=l9;
si0=sj0 != sj1;
if(si0){
goto L75;
}
sj0=-1ULL;
l32=sj0;
goto L73;
L77:;
si0=1210028U;
si1=57U;
si2=1210088U;
f604(i,si0,si1,si2);
UNREACHABLE;
L76:;
si0=l7;
si1=56U;
si0+=si1;
sj1=l23;
sj2=0ULL;
sj3=l6;
sj4=0ULL;
f15157(i,si0,sj1,sj2,sj3,sj4);
si0=l7;
si1=40U;
si0+=si1;
sj1=l23;
si2=l7;
si3=56U;
si2+=si3;
si3=8U;
si2+=si3;
sj2=i64_load(&i->m0,(U64)si2);
sj1+=sj2;
sj2=l28;
si3=l7;
sj3=i64_load(&i->m0,(U64)si3+56U);
sj2+=sj3;
l33=sj2;
sj3=l28;
si2=sj2 < sj3;
sj2=(U64)(si2);
sj1+=sj2;
l23=sj1;
sj2=0ULL;
sj3=l24;
sj4=0ULL;
f15157(i,si0,sj1,sj2,sj3,sj4);
sj0=l23;
sj1=1ULL;
sj0+=sj1;
l32=sj0;
sj0=l31;
sj1=l24;
si2=l7;
sj2=i64_load(&i->m0,(U64)si2+40U);
sj1+=sj2;
l34=sj1;
sj0-=sj1;
l35=sj0;
sj0=l33;
sj1=l28;
sj2=l9;
sj3=l23;
sj2*=sj3;
sj1-=sj2;
sj2=l9;
si3=l7;
si4=40U;
si3+=si4;
si4=8U;
si3+=si4;
sj3=i64_load(&i->m0,(U64)si3);
sj2+=sj3;
sj3=l34;
sj4=l24;
si3=sj3 < sj4;
sj3=(U64)(si3);
sj2+=sj3;
sj3=l31;
sj4=l34;
si3=sj3 < sj4;
sj3=(U64)(si3);
sj2+=sj3;
sj1-=sj2;
l31=sj1;
si0=sj0 <= sj1;
if(si0){
goto L80;
}
sj0=l35;
sj1=l24;
si0=sj0 < sj1;
l14=si0;
sj1=l31;
sj2=l9;
si1=sj1 < sj2;
sj2=l31;
sj3=l9;
si2=sj2 == sj3;
si0=si2?si0:si1;
if(si0){
goto L74;
}
sj0=l31;
sj1=l9;
sj0-=sj1;
si1=l14;
sj1=(U64)(si1);
sj0-=sj1;
l31=sj0;
sj0=l35;
sj1=l24;
sj0-=sj1;
l35=sj0;
sj0=l23;
sj1=2ULL;
sj0+=sj1;
l32=sj0;
goto L74;
L80:;
sj0=l31;
sj1=l9;
sj0+=sj1;
sj1=l35;
sj2=l24;
sj1+=sj2;
l28=sj1;
sj2=l35;
si1=sj1 < sj2;
l14=si1;
sj1=(U64)(si1);
sj0+=sj1;
l24=sj0;
sj1=l31;
si2=l14;
sj3=l24;
sj4=l31;
si3=sj3 < sj4;
sj4=l24;
sj5=l31;
si4=sj4 == sj5;
si2=si4?si2:si3;
l14=si2;
sj0=si2?sj0:sj1;
l31=sj0;
sj0=l28;
sj1=l35;
si2=l14;
sj0=si2?sj0:sj1;
l35=sj0;
sj0=l23;
sj1=l32;
si2=l14;
sj0=si2?sj0:sj1;
l32=sj0;
goto L74;
L75:;
si0=l7;
si1=0U;
i32_store(&i->m0,(U64)si0+88U,si1);
si0=0U;
si1=l7;
si2=80U;
si1+=si2;
si2=l7;
si3=72U;
si2+=si3;
si3=l7;
si4=88U;
si3+=si4;
si4=1210012U;
f1251(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L74:;
si0=l7;
si1=24U;
si0+=si1;
si1=8U;
si0+=si1;
l12=si0;
si0=l16;
l14=si0;
si0=l4;
l13=si0;
sj0=0ULL;
l23=sj0;
L81:;
{
si0=l7;
si1=24U;
si0+=si1;
si1=l13;
sj1=i64_load(&i->m0,(U64)si1);
sj2=0ULL;
sj3=l32;
sj4=0ULL;
f15157(i,si0,sj1,sj2,sj3,sj4);
si0=l14;
si1=l14;
sj1=i64_load(&i->m0,(U64)si1);
l28=sj1;
sj2=l23;
si3=l7;
sj3=i64_load(&i->m0,(U64)si3+24U);
sj2+=sj3;
l24=sj2;
sj1-=sj2;
i64_store(&i->m0,(U64)si0,sj1);
sj0=l24;
sj1=l23;
si0=sj0 < sj1;
sj0=(U64)(si0);
si1=l12;
sj1=i64_load(&i->m0,(U64)si1);
sj0+=sj1;
sj1=l28;
sj2=l24;
si1=sj1 < sj2;
sj1=(U64)(si1);
sj0+=sj1;
l23=sj0;
si0=l14;
si1=8U;
si0+=si1;
l14=si0;
si0=l13;
si1=8U;
si0+=si1;
l13=si0;
si0=l11;
si1=-1U;
si0+=si1;
l11=si0;
if(si0){
goto L81;
}
}
si0=l15;
sj1=l35;
sj2=l23;
sj1-=sj2;
i64_store(&i->m0,(U64)si0,sj1);
sj0=l31;
sj1=l35;
sj2=l23;
si1=sj1 < sj2;
l14=si1;
sj1=(U64)(si1);
sj0-=sj1;
l28=sj0;
sj0=l31;
sj1=0ULL;
si0=sj0 != sj1;
if(si0){
goto L82;
}
si0=l14;
si0=!(si0);
if(si0){
goto L82;
}
si0=0U;
l13=si0;
si0=l4;
l14=si0;
L83:;
{
si0=l16;
sj0=i64_load(&i->m0,(U64)si0);
l24=sj0;
si1=l14;
sj1=i64_load(&i->m0,(U64)si1);
sj0+=sj1;
l23=sj0;
sj1=l24;
si0=sj0 < sj1;
l12=si0;
si0=l13;
si1=255U;
si0&=si1;
if(si0){
goto L85;
}
si0=l12;
l13=si0;
goto L84;
L85:;
si0=l12;
sj1=l23;
sj2=1ULL;
sj1+=sj2;
l23=sj1;
si1=!(sj1);
si0|=si1;
l13=si0;
L84:;
si0=l16;
sj1=l23;
i64_store(&i->m0,(U64)si0,sj1);
si0=l16;
si1=8U;
si0+=si1;
l16=si0;
si0=l14;
si1=8U;
si0+=si1;
l14=si0;
si0=l8;
si1=-1U;
si0+=si1;
l8=si0;
if(si0){
goto L83;
}
}
si0=l17;
sj1=l32;
sj2=0ULL;
si1=sj1 != sj2;
l14=si1;
si0|=si1;
si0=!(si0);
if(si0){
goto L6;
}
si0=l17;
si1=0U;
si2=l14;
si0=si2?si0:si1;
l17=si0;
sj0=l32;
sj1=-1ULL;
sj0+=sj1;
l32=sj0;
sj0=l28;
sj1=l9;
sj0+=sj1;
si1=l13;
sj1=(U64)(si1);
sj0+=sj1;
l28=sj0;
L82:;
si0=l27;
sj1=l28;
i64_store(&i->m0,(U64)si0,sj1);
L73:;
si0=l1;
si1=l20;
si0=si0 == si1;
if(si0){
goto L5;
}
si0=l21;
sj1=l32;
i64_store(&i->m0,(U64)si0,sj1);
L7:;
si0=l10;
si1=l19;
si0=si0 < si1;
if(si0){
goto L87;
}
si0=l20;
si1=l5;
si0=si0 < si1;
if(si0){
goto L88;
}
si0=l3;
si1=l19;
si0-=si1;
si1=l5;
si2=1U;
si1<<=(si2&31);
l13=si1;
si0-=si1;
si1=3U;
si0<<=(si1&31);
l14=si0;
si0=l1;
si1=l3;
si0-=si1;
l16=si0;
si0=l5;
si1=3U;
si0<<=(si1&31);
l27=si0;
si0=0U;
si1=l19;
si2=l5;
si1+=si2;
si0-=si1;
l11=si0;
si0=0U;
si1=l19;
si2=l13;
si1+=si2;
l13=si1;
si0-=si1;
l12=si0;
L89:;
{
si0=l3;
si1=l12;
si0+=si1;
l15=si0;
si1=l1;
si0=si0 > si1;
if(si0){
goto L3;
}
si0=l15;
si1=l3;
si0=si0 > si1;
if(si0){
goto L2;
}
si0=l0;
si1=l14;
si0+=si1;
si1=l16;
si2=l13;
si1+=si2;
si2=l2;
si3=l14;
si2+=si3;
si3=l13;
si4=l4;
si5=l5;
sj6=l6;
si7=l18;
si8=l5;
si0=f1165(i,si0,si1,si2,si3,si4,si5,sj6,si7,si8);
si0=l13;
si1=l5;
si0+=si1;
l13=si0;
si0=l14;
si1=l27;
si0-=si1;
l14=si0;
si0=l12;
si1=l5;
si0-=si1;
l12=si0;
si0=l3;
si1=l11;
si2=l5;
si1-=si2;
l11=si1;
si0+=si1;
l20=si0;
si1=l5;
si0=si0 >= si1;
if(si0){
goto L89;
}
}
L88:;
si0=l3;
si1=l20;
si2=l5;
si3=1U;
si2>>=(si3&31);
si3=l5;
si2-=si3;
si1+=si2;
l14=si1;
si0=si0 < si1;
if(si0){
goto L4;
}
si0=l20;
si1=l1;
si0=si0 >= si1;
if(si0){
goto L86;
}
si0=l0;
si1=l20;
si2=3U;
si1<<=(si2&31);
l13=si1;
si0+=si1;
l12=si0;
sj0=i64_load(&i->m0,(U64)si0);
l23=sj0;
si0=l0;
si1=l1;
si2=l2;
si3=l14;
si4=3U;
si3<<=(si4&31);
si2+=si3;
si3=l3;
si4=l14;
si3-=si4;
si4=l4;
si5=l5;
sj6=l6;
si7=l18;
si8=l5;
si0=f1089(i,si0,si1,si2,si3,si4,si5,sj6,si7,si8);
si0=l0;
si1=l0;
si2=8U;
si1+=si2;
si2=l13;
si0=f15144(i,si0,si1,si2);
si0=l12;
sj1=l23;
i64_store(&i->m0,(U64)si0,sj1);
si0=l18;
f15024(i,si0);
si0=l17;
si1=1U;
si0&=si1;
l14=si0;
goto L1;
L87:;
si0=1206876U;
si1=43U;
si2=1210248U;
f604(i,si0,si1,si2);
UNREACHABLE;
L86:;
si0=l20;
si1=l1;
si2=1210280U;
f594(i,si0,si1,si2);
UNREACHABLE;
L6:;
si0=1207300U;
si1=27U;
si2=1209980U;
f604(i,si0,si1,si2);
UNREACHABLE;
L5:;
si0=0U;
si1=0U;
si2=1209996U;
f594(i,si0,si1,si2);
UNREACHABLE;
L4:;
si0=l14;
si1=l3;
si2=1210264U;
f593(i,si0,si1,si2);
UNREACHABLE;
L3:;
si0=l15;
si1=l1;
si2=1210296U;
f593(i,si0,si1,si2);
UNREACHABLE;
L2:;
si0=l15;
si1=l3;
si2=1210312U;
f593(i,si0,si1,si2);
UNREACHABLE;
L1:;
si0=l7;
si1=112U;
si0+=si1;
i->g0=si0;
si0=l14;
L0:;
return si0;
}

U32 f1097(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4,U32 l5,U32 l6,U32 l7) {
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
U64 l20=0;
U32 l21=0;
U32 l22=0;
U64 l23=0;
U32 si0,si1,si2,si3,si4,si5,si6,si7,si8;
U64 sj0,sj1,sj2,sj3,sj4;
si0=i->g0;
si1=48U;
si0-=si1;
l8=si0;
i->g0=si0;
si0=l3;
si1=l5;
si0=si0 <= si1;
if(si0){
goto L13;
}
si0=l3;
si1=l5;
si0-=si1;
l9=si0;
si1=l1;
si0=si0 > si1;
if(si0){
goto L15;
}
si0=8U;
l10=si0;
si0=l9;
si1=1U;
si0+=si1;
l11=si0;
si0=!(si0);
if(si0){
goto L16;
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
l1=si0;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L5;
}
si0=l1;
si0=!(si0);
if(si0){
goto L16;
}
si0=l1;
si1=1U;
si0=f15026(i,si0,si1);
l10=si0;
si0=!(si0);
if(si0){
goto L14;
}
L16:;
si0=l9;
si1=l5;
si0=si0 >= si1;
if(si0){
goto L21;
}
si0=l3;
si1=0U;
si2=l3;
si3=l11;
si4=1U;
si3<<=(si4&31);
si2-=si3;
si3=l5;
si4=1U;
si3<<=(si4&31);
si4=-1U;
si3+=si4;
si4=l3;
si3=si3 == si4;
l12=si3;
si1=si3?si1:si2;
l1=si1;
si0=si0 < si1;
if(si0){
goto L20;
}
si0=l5;
si1=l11;
si0-=si1;
l13=si0;
si0=l5;
si1=l11;
si0=si0 >= si1;
if(si0){
goto L19;
}
si0=l13;
si1=l5;
si2=1209272U;
f593(i,si0,si1,si2);
UNREACHABLE;
L21:;
si0=l3;
si1=1U;
si0+=si1;
l1=si0;
si0=!(si0);
if(si0){
goto L23;
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
l12=si0;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L5;
}
si0=l12;
if(si0){
goto L25;
}
si0=8U;
l13=si0;
goto L24;
L25:;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=l12;
si0=f15022(i,si0);
l13=si0;
si0=!(si0);
if(si0){
goto L12;
}
L24:;
si0=0U;
l12=si0;
si0=l8;
si1=0U;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l8;
si1=l1;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l8;
si1=l13;
i32_store(&i->m0,(U64)si0+4U,si1);
goto L22;
L23:;
si0=l8;
si1=0U;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l8;
sj1=8ULL;
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l8;
si1=4U;
si0+=si1;
si1=0U;
f1299(i,si0,si1);
si0=l8;
si0=i32_load(&i->m0,(U64)si0+4U);
l13=si0;
si0=l8;
si0=i32_load(&i->m0,(U64)si0+12U);
l12=si0;
L22:;
si0=l13;
si1=l12;
si2=3U;
si1<<=(si2&31);
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l8;
si1=l8;
si1=i32_load(&i->m0,(U64)si1+12U);
si2=1U;
si1+=si2;
l1=si1;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l8;
si0=i32_load(&i->m0,(U64)si0+8U);
si1=l1;
si0-=si1;
si1=l3;
si0=si0 >= si1;
if(si0){
goto L26;
}
si0=l8;
si1=4U;
si0+=si1;
si1=l1;
si2=l3;
f1302(i,si0,si1,si2);
si0=l8;
si0=i32_load(&i->m0,(U64)si0+12U);
l1=si0;
L26:;
si0=l8;
si0=i32_load(&i->m0,(U64)si0+4U);
si1=l1;
si2=3U;
si1<<=(si2&31);
si0+=si1;
si1=l2;
si2=l3;
si3=3U;
si2<<=(si3&31);
si0=f15143(i,si0,si1,si2);
si0=l8;
si1=l1;
si2=l3;
si1+=si2;
l14=si1;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l14;
si1=l11;
si0=si0 < si1;
if(si0){
goto L11;
}
si0=l8;
si0=i32_load(&i->m0,(U64)si0+4U);
l15=si0;
si0=l8;
si1=l14;
si2=l11;
si1-=si2;
l13=si1;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l8;
si1=l5;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l13;
si1=l5;
si0=si0 != si1;
if(si0){
goto L29;
}
si0=l15;
si1=l11;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l16=si0;
si0=l4;
si1=-8U;
si0+=si1;
l17=si0;
si0=l5;
si1=3U;
si0<<=(si1&31);
l13=si0;
si0=8U;
si1=l1;
si2=l5;
si1+=si2;
si2=3U;
si1<<=(si2&31);
si0-=si1;
l1=si0;
si0=l14;
si1=3U;
si0<<=(si1&31);
si1=l15;
si0+=si1;
si1=-8U;
si0+=si1;
l12=si0;
L30:;
{
si0=l1;
si0=!(si0);
if(si0){
goto L28;
}
si0=l17;
si1=l13;
si0+=si1;
l18=si0;
si0=l12;
sj0=i64_load(&i->m0,(U64)si0);
l19=sj0;
si0=l1;
si1=8U;
si0+=si1;
l1=si0;
si0=l12;
si1=-8U;
si0+=si1;
l12=si0;
si0=l13;
si1=-8U;
si0+=si1;
l13=si0;
si0=-1U;
sj1=l19;
si2=l18;
sj2=i64_load(&i->m0,(U64)si2);
l20=sj2;
si1=sj1 != sj2;
sj2=l20;
sj3=l19;
si2=sj2 > sj3;
si0=si2?si0:si1;
l18=si0;
si0=!(si0);
if(si0){
goto L30;
}
goto L27;
}
L29:;
si0=l8;
si1=0U;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=0U;
si1=l8;
si2=16U;
si1+=si2;
si2=l8;
si3=20U;
si2+=si3;
si3=l8;
si4=24U;
si3+=si4;
si4=1231576U;
f1250(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L28:;
si0=-1U;
si1=0U;
si2=l13;
si0=si2?si0:si1;
l18=si0;
L27:;
si0=l18;
si1=-1U;
si0=(U32)((I32)si0>(I32)si1);
l21=si0;
si0=!(si0);
if(si0){
goto L6;
}
si0=l14;
si1=l11;
si0=si0 != si1;
if(si0){
goto L18;
}
si0=l11;
l14=si0;
goto L6;
L20:;
si0=l1;
si1=l3;
si2=1209288U;
f593(i,si0,si1,si2);
UNREACHABLE;
L19:;
si0=l10;
si1=8U;
si0+=si1;
l17=si0;
si0=l10;
si1=l11;
si2=l2;
si3=l1;
si4=3U;
si3<<=(si4&31);
si2+=si3;
si3=l3;
si4=l1;
si3-=si4;
si4=l12;
si5=l4;
si6=l13;
si7=3U;
si6<<=(si7&31);
si5+=si6;
si6=l11;
si7=l6;
si8=l7;
si0=f1091(i,si0,si1,si2,si3,si4,si5,si6,si7,si8);
l21=si0;
si0=l10;
sj0=i64_load(&i->m0,(U64)si0);
sj1=6ULL;
si0=sj0 > sj1;
if(si0){
goto L17;
}
si0=l3;
si1=268435455U;
si0=si0 > si1;
if(si0){
goto L5;
}
si0=l3;
si1=3U;
si0<<=(si1&31);
l1=si0;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L5;
}
si0=8U;
l7=si0;
si0=8U;
l14=si0;
si0=l1;
si0=!(si0);
if(si0){
goto L31;
}
si0=l1;
si1=1U;
si0=f15026(i,si0,si1);
l14=si0;
si0=!(si0);
if(si0){
goto L10;
}
L31:;
si0=l5;
si1=l9;
si0=f1126(i,si0,si1);
l15=si0;
si0=!(si0);
if(si0){
goto L32;
}
si0=l15;
si1=268435455U;
si0=si0 > si1;
if(si0){
goto L5;
}
si0=l15;
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
goto L32;
}
si0=l1;
si1=1U;
si0=f15026(i,si0,si1);
l7=si0;
si0=!(si0);
if(si0){
goto L9;
}
L32:;
si0=l14;
si1=l3;
si2=l4;
si3=l5;
si4=l17;
si5=l9;
si6=l7;
si7=l15;
sj0=f1127(i,si0,si1,si2,si3,si4,si5,si6,si7);
si0=l21;
si0=!(si0);
if(si0){
goto L37;
}
si0=l14;
si1=l9;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l1=si0;
si0=0U;
l13=si0;
si0=l5;
l12=si0;
L38:;
{
si0=l1;
sj0=i64_load(&i->m0,(U64)si0);
l20=sj0;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1);
sj0+=sj1;
l19=sj0;
sj1=l20;
si0=sj0 < sj1;
l18=si0;
si0=l13;
si1=255U;
si0&=si1;
if(si0){
goto L40;
}
si0=l18;
l13=si0;
goto L39;
L40:;
si0=l18;
sj1=l19;
sj2=1ULL;
sj1+=sj2;
l19=sj1;
si1=!(sj1);
si0|=si1;
l13=si0;
L39:;
si0=l1;
sj1=l19;
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si1=8U;
si0+=si1;
l1=si0;
si0=l4;
si1=8U;
si0+=si1;
l4=si0;
si0=l12;
si1=-1U;
si0+=si1;
l12=si0;
if(si0){
goto L38;
}
}
si0=l13;
if(si0){
goto L36;
}
L37:;
si0=l14;
si1=-8U;
si0+=si1;
l12=si0;
si0=l3;
si1=3U;
si0<<=(si1&31);
l4=si0;
si0=l2;
si1=-8U;
si0+=si1;
l18=si0;
L43:;
{
si0=l4;
si0=!(si0);
if(si0){
goto L42;
}
si0=l12;
si1=l4;
si0+=si1;
l1=si0;
si0=l18;
si1=l4;
si0+=si1;
l13=si0;
si0=l4;
si1=-8U;
si0+=si1;
l4=si0;
si0=-1U;
si1=l13;
sj1=i64_load(&i->m0,(U64)si1);
l19=sj1;
si2=l1;
sj2=i64_load(&i->m0,(U64)si2);
l20=sj2;
si1=sj1 != sj2;
sj2=l19;
sj3=l20;
si2=sj2 > sj3;
si0=si2?si0:si1;
l1=si0;
si0=!(si0);
if(si0){
goto L43;
}
}
si0=l1;
si1=255U;
si0&=si1;
si1=1U;
si0=si0 == si1;
if(si0){
goto L41;
}
L42:;
si0=l0;
si1=l17;
si2=l9;
si3=3U;
si2<<=(si3&31);
si0=f15143(i,si0,si1,si2);
goto L35;
L41:;
si0=l0;
si1=l17;
sj1=i64_load(&i->m0,(U64)si1);
l19=sj1;
sj2=-1ULL;
sj1+=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=0U;
l4=si0;
sj0=l19;
sj1=0ULL;
si0=sj0 != sj1;
if(si0){
goto L44;
}
si0=l10;
si1=16U;
si0+=si1;
l1=si0;
si0=l0;
si1=8U;
si0+=si1;
l13=si0;
si0=l5;
si1=-1U;
si0^=si1;
si1=l3;
si0+=si1;
l12=si0;
si0=0U;
l4=si0;
L45:;
{
si0=l12;
si1=l4;
si0=si0 == si1;
if(si0){
goto L34;
}
si0=l13;
si1=l1;
sj1=i64_load(&i->m0,(U64)si1);
l19=sj1;
sj2=-1ULL;
sj1+=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si1=8U;
si0+=si1;
l1=si0;
si0=l13;
si1=8U;
si0+=si1;
l13=si0;
si0=l4;
si1=1U;
si0+=si1;
l4=si0;
sj0=l19;
si0=!(sj0);
if(si0){
goto L45;
}
}
L44:;
si0=l0;
si1=l4;
si2=1U;
si1+=si2;
l4=si1;
si2=3U;
si1<<=(si2&31);
l1=si1;
si0+=si1;
si1=l17;
si2=l1;
si1+=si2;
si2=l9;
si3=l4;
si2-=si3;
si3=3U;
si2<<=(si3&31);
si0=f15143(i,si0,si1,si2);
goto L35;
L36:;
si0=l0;
si1=l17;
sj1=i64_load(&i->m0,(U64)si1);
l19=sj1;
sj2=-1ULL;
sj1+=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=0U;
l4=si0;
sj0=l19;
sj1=0ULL;
si0=sj0 != sj1;
if(si0){
goto L46;
}
si0=l10;
si1=16U;
si0+=si1;
l1=si0;
si0=l0;
si1=8U;
si0+=si1;
l13=si0;
si0=l5;
si1=-1U;
si0^=si1;
si1=l3;
si0+=si1;
l12=si0;
si0=0U;
l4=si0;
L47:;
{
si0=l12;
si1=l4;
si0=si0 == si1;
if(si0){
goto L33;
}
si0=l13;
si1=l1;
sj1=i64_load(&i->m0,(U64)si1);
l19=sj1;
sj2=-1ULL;
sj1+=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si1=8U;
si0+=si1;
l1=si0;
si0=l13;
si1=8U;
si0+=si1;
l13=si0;
si0=l4;
si1=1U;
si0+=si1;
l4=si0;
sj0=l19;
si0=!(sj0);
if(si0){
goto L47;
}
}
L46:;
si0=l0;
si1=l4;
si2=1U;
si1+=si2;
l4=si1;
si2=3U;
si1<<=(si2&31);
l1=si1;
si0+=si1;
si1=l17;
si2=l1;
si1+=si2;
si2=l9;
si3=l4;
si2-=si3;
si3=3U;
si2<<=(si3&31);
si0=f15143(i,si0,si1,si2);
L35:;
si0=l15;
si0=!(si0);
if(si0){
goto L48;
}
si0=l7;
f15024(i,si0);
L48:;
si0=l14;
f15024(i,si0);
si0=l11;
if(si0){
goto L2;
}
goto L1;
L34:;
si0=l21;
si0=!(si0);
if(si0){
goto L8;
}
L33:;
si0=l15;
si0=!(si0);
if(si0){
goto L49;
}
si0=l7;
f15024(i,si0);
L49:;
si0=l14;
f15024(i,si0);
goto L3;
L18:;
si0=l5;
si1=1U;
si0&=si1;
l22=si0;
si0=0U;
l12=si0;
si0=0U;
l17=si0;
si0=l5;
si1=1U;
si0=si0 == si1;
if(si0){
goto L7;
}
si0=l3;
si1=3U;
si0<<=(si1&31);
si1=l5;
si2=3U;
si1<<=(si2&31);
si0-=si1;
si1=l15;
si0+=si1;
si1=16U;
si0+=si1;
l1=si0;
si0=l5;
si1=-2U;
si0&=si1;
l15=si0;
si0=0U;
l12=si0;
si0=l4;
l13=si0;
si0=0U;
l17=si0;
L50:;
{
si0=l1;
si1=-8U;
si0+=si1;
l14=si0;
si1=l14;
sj1=i64_load(&i->m0,(U64)si1);
l19=sj1;
si2=l12;
sj2=(U64)(si2);
sj3=1ULL;
sj2&=sj3;
si3=l13;
sj3=i64_load(&i->m0,(U64)si3);
l20=sj3;
sj2+=sj3;
sj1-=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si1=l1;
sj1=i64_load(&i->m0,(U64)si1);
l23=sj1;
sj2=l19;
sj3=l20;
si2=sj2 <= sj3;
sj3=l19;
sj4=l20;
si3=sj3 < sj4;
si4=l12;
si5=1U;
si4&=si5;
si2=si4?si2:si3;
l12=si2;
sj2=(U64)(si2);
si3=l13;
si4=8U;
si3+=si4;
sj3=i64_load(&i->m0,(U64)si3);
l19=sj3;
sj2+=sj3;
sj1-=sj2;
i64_store(&i->m0,(U64)si0,sj1);
sj0=l23;
sj1=l19;
si0=sj0 <= sj1;
sj1=l23;
sj2=l19;
si1=sj1 < sj2;
si2=l12;
si0=si2?si0:si1;
l12=si0;
si0=l13;
si1=16U;
si0+=si1;
l13=si0;
si0=l1;
si1=16U;
si0+=si1;
l1=si0;
si0=l15;
si1=l17;
si2=2U;
si1+=si2;
l17=si1;
si0=si0 != si1;
if(si0){
goto L50;
}
goto L7;
}
L17:;
si0=l0;
si1=l17;
si2=l9;
si3=3U;
si2<<=(si3&31);
si0=f15143(i,si0,si1,si2);
goto L2;
L15:;
si0=l9;
si1=l1;
si2=1209240U;
f597(i,si0,si1,si2);
UNREACHABLE;
L14:;
si0=8U;
si1=l1;
f52(i,si0,si1);
UNREACHABLE;
L13:;
si0=1209368U;
si1=31U;
si2=1209400U;
f604(i,si0,si1,si2);
UNREACHABLE;
L12:;
si0=8U;
si1=l12;
f52(i,si0,si1);
UNREACHABLE;
L11:;
si0=l11;
si1=l14;
si2=1209304U;
f593(i,si0,si1,si2);
UNREACHABLE;
L10:;
si0=8U;
si1=l1;
f52(i,si0,si1);
UNREACHABLE;
L9:;
si0=8U;
si1=l1;
f52(i,si0,si1);
UNREACHABLE;
L8:;
si0=1207300U;
si1=27U;
si2=1209256U;
f604(i,si0,si1,si2);
UNREACHABLE;
L7:;
si0=l22;
si0=!(si0);
if(si0){
goto L51;
}
si0=l16;
si1=l17;
si2=3U;
si1<<=(si2&31);
l1=si1;
si0+=si1;
l13=si0;
si1=l13;
sj1=i64_load(&i->m0,(U64)si1);
si2=l12;
sj2=(U64)(si2);
si3=l4;
si4=l1;
si3+=si4;
sj3=i64_load(&i->m0,(U64)si3);
sj2+=sj3;
sj1-=sj2;
i64_store(&i->m0,(U64)si0,sj1);
L51:;
si0=l8;
si0=i32_load(&i->m0,(U64)si0+12U);
l14=si0;
si0=l8;
si0=i32_load(&i->m0,(U64)si0+4U);
l15=si0;
L6:;
si0=l10;
si1=l11;
si2=l15;
si3=l14;
si4=0U;
si5=l4;
si6=l5;
si7=l6;
si8=l7;
si0=f1091(i,si0,si1,si2,si3,si4,si5,si6,si7,si8);
l1=si0;
si0=l11;
si0=!(si0);
if(si0){
goto L54;
}
si0=l1;
if(si0){
goto L53;
}
L54:;
si0=l11;
if(si0){
goto L52;
}
si0=1206876U;
si1=43U;
si2=1209320U;
f604(i,si0,si1,si2);
UNREACHABLE;
L53:;
si0=l10;
si1=255U;
si2=l11;
si3=3U;
si2<<=(si3&31);
si0=f15145(i,si0,si1,si2);
L52:;
si0=l10;
si1=8U;
si0+=si1;
l14=si0;
si0=l10;
sj0=i64_load(&i->m0,(U64)si0);
sj1=4ULL;
si0=sj0 > sj1;
if(si0){
goto L60;
}
si0=l8;
si0=i32_load(&i->m0,(U64)si0+12U);
l1=si0;
si1=l3;
si0=si0 < si1;
if(si0){
goto L55;
}
si0=l8;
si0=i32_load(&i->m0,(U64)si0+4U);
l7=si0;
si0=8U;
l6=si0;
si0=l9;
si1=l5;
si0=f1126(i,si0,si1);
l15=si0;
si0=!(si0);
if(si0){
goto L61;
}
si0=l15;
si1=268435455U;
si0=si0 > si1;
if(si0){
goto L5;
}
si0=l15;
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
goto L61;
}
si0=l1;
si1=1U;
si0=f15026(i,si0,si1);
l6=si0;
si0=!(si0);
if(si0){
goto L4;
}
L61:;
si0=l7;
si1=l3;
si2=l14;
si3=l9;
si4=l4;
si5=l5;
si6=l6;
si7=l15;
sj0=f1127(i,si0,si1,si2,si3,si4,si5,si6,si7);
si0=l18;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L64;
}
si0=l5;
si0=!(si0);
if(si0){
goto L64;
}
si0=l7;
si1=l9;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l1=si0;
si0=0U;
l13=si0;
si0=l5;
l12=si0;
L65:;
{
si0=l1;
sj0=i64_load(&i->m0,(U64)si0);
l20=sj0;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1);
sj0+=sj1;
l19=sj0;
sj1=l20;
si0=sj0 < sj1;
l17=si0;
si0=l13;
si1=255U;
si0&=si1;
if(si0){
goto L67;
}
si0=l17;
l13=si0;
goto L66;
L67:;
si0=l17;
sj1=l19;
sj2=1ULL;
sj1+=sj2;
l19=sj1;
si1=!(sj1);
si0|=si1;
l13=si0;
L66:;
si0=l1;
sj1=l19;
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si1=8U;
si0+=si1;
l1=si0;
si0=l4;
si1=8U;
si0+=si1;
l4=si0;
si0=l12;
si1=-1U;
si0+=si1;
l12=si0;
if(si0){
goto L65;
}
}
si0=l13;
if(si0){
goto L63;
}
L64:;
si0=l7;
si1=-8U;
si0+=si1;
l12=si0;
si0=l3;
si1=3U;
si0<<=(si1&31);
l4=si0;
si0=l2;
si1=-8U;
si0+=si1;
l17=si0;
L70:;
{
si0=l4;
si0=!(si0);
if(si0){
goto L69;
}
si0=l12;
si1=l4;
si0+=si1;
l1=si0;
si0=l17;
si1=l4;
si0+=si1;
l13=si0;
si0=l4;
si1=-8U;
si0+=si1;
l4=si0;
si0=-1U;
si1=l13;
sj1=i64_load(&i->m0,(U64)si1);
l19=sj1;
si2=l1;
sj2=i64_load(&i->m0,(U64)si2);
l20=sj2;
si1=sj1 != sj2;
sj2=l19;
sj3=l20;
si2=sj2 > sj3;
si0=si2?si0:si1;
l1=si0;
si0=!(si0);
if(si0){
goto L70;
}
}
si0=l1;
si1=255U;
si0&=si1;
si1=1U;
si0=si0 == si1;
if(si0){
goto L68;
}
L69:;
si0=l0;
si1=l14;
si2=l9;
si3=3U;
si2<<=(si3&31);
si0=f15143(i,si0,si1,si2);
goto L62;
L68:;
si0=l0;
si1=l14;
sj1=i64_load(&i->m0,(U64)si1);
l19=sj1;
sj2=-1ULL;
sj1+=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=0U;
l4=si0;
sj0=l19;
sj1=0ULL;
si0=sj0 != sj1;
if(si0){
goto L71;
}
si0=l10;
si1=16U;
si0+=si1;
l1=si0;
si0=l0;
si1=8U;
si0+=si1;
l13=si0;
si0=l5;
si1=-1U;
si0^=si1;
si1=l3;
si0+=si1;
l12=si0;
si0=0U;
l4=si0;
L72:;
{
si0=l12;
si1=l4;
si0=si0 == si1;
if(si0){
goto L58;
}
si0=l13;
si1=l1;
sj1=i64_load(&i->m0,(U64)si1);
l19=sj1;
sj2=-1ULL;
sj1+=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si1=8U;
si0+=si1;
l1=si0;
si0=l13;
si1=8U;
si0+=si1;
l13=si0;
si0=l4;
si1=1U;
si0+=si1;
l4=si0;
sj0=l19;
si0=!(sj0);
if(si0){
goto L72;
}
}
L71:;
si0=l0;
si1=l4;
si2=1U;
si1+=si2;
l4=si1;
si2=3U;
si1<<=(si2&31);
l1=si1;
si0+=si1;
si1=l14;
si2=l1;
si1+=si2;
si2=l9;
si3=l4;
si2-=si3;
si3=3U;
si2<<=(si3&31);
si0=f15143(i,si0,si1,si2);
goto L62;
L63:;
si0=l0;
si1=l14;
sj1=i64_load(&i->m0,(U64)si1);
l19=sj1;
sj2=-1ULL;
sj1+=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=0U;
l4=si0;
sj0=l19;
sj1=0ULL;
si0=sj0 != sj1;
if(si0){
goto L73;
}
si0=l10;
si1=16U;
si0+=si1;
l1=si0;
si0=l0;
si1=8U;
si0+=si1;
l13=si0;
si0=l5;
si1=-1U;
si0^=si1;
si1=l3;
si0+=si1;
l12=si0;
si0=0U;
l4=si0;
L74:;
{
si0=l12;
si1=l4;
si0=si0 == si1;
if(si0){
goto L57;
}
si0=l13;
si1=l1;
sj1=i64_load(&i->m0,(U64)si1);
l19=sj1;
sj2=-1ULL;
sj1+=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si1=8U;
si0+=si1;
l1=si0;
si0=l13;
si1=8U;
si0+=si1;
l13=si0;
si0=l4;
si1=1U;
si0+=si1;
l4=si0;
sj0=l19;
si0=!(sj0);
if(si0){
goto L74;
}
}
L73:;
si0=l0;
si1=l4;
si2=1U;
si1+=si2;
l4=si1;
si2=3U;
si1<<=(si2&31);
l1=si1;
si0+=si1;
si1=l14;
si2=l1;
si1+=si2;
si2=l9;
si3=l4;
si2-=si3;
si3=3U;
si2<<=(si3&31);
si0=f15143(i,si0,si1,si2);
L62:;
si0=l15;
si0=!(si0);
if(si0){
goto L59;
}
si0=l6;
f15024(i,si0);
goto L59;
L60:;
si0=l0;
si1=l14;
si2=l9;
si3=3U;
si2<<=(si3&31);
si0=f15143(i,si0,si1,si2);
L59:;
si0=l8;
si0=i32_load(&i->m0,(U64)si0+8U);
si0=!(si0);
if(si0){
goto L75;
}
si0=l8;
si0=i32_load(&i->m0,(U64)si0+4U);
f15024(i,si0);
L75:;
si0=l11;
if(si0){
goto L2;
}
goto L1;
L58:;
si0=l18;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L56;
}
L57:;
si0=l15;
si0=!(si0);
if(si0){
goto L76;
}
si0=l6;
f15024(i,si0);
L76:;
si0=l8;
si0=i32_load(&i->m0,(U64)si0+8U);
si0=!(si0);
if(si0){
goto L3;
}
si0=l8;
si0=i32_load(&i->m0,(U64)si0+4U);
f15024(i,si0);
goto L3;
L56:;
si0=1207300U;
si1=27U;
si2=1209352U;
f604(i,si0,si1,si2);
UNREACHABLE;
L55:;
si0=l3;
si1=l1;
si2=1209336U;
f597(i,si0,si1,si2);
UNREACHABLE;
L5:;
f53(i);
UNREACHABLE;
L4:;
si0=8U;
si1=l1;
f52(i,si0,si1);
UNREACHABLE;
L3:;
si0=0U;
l21=si0;
si0=l11;
si0=!(si0);
if(si0){
goto L1;
}
L2:;
si0=l10;
f15024(i,si0);
L1:;
si0=l8;
si1=48U;
si0+=si1;
i->g0=si0;
si0=l21;
L0:;
return si0;
}

U32 f1098(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U64 l3=0;
U32 l4=0;
U32 l5=0;
U32 si0,si1,si2,si3,si4,si5;
U64 sj1,sj2,sj3;
si0=l0;
si1=l1;
si0-=si1;
l2=si0;
si1=l2;
si2=1U;
si1+=si2;
l0=si1;
si2=l1;
si3=l0;
si4=l1;
si3=si3 < si4;
si1=si3?si1:si2;
l0=si1;
si0=si0 > si1;
if(si0){
goto L3;
}
si0=l2;
si1=3U;
si0*=si1;
si1=l0;
si0=si0 > si1;
if(si0){
goto L4;
}
si0=l2;
si1=1U;
si2=l2;
si3=1U;
si2=si2 > si3;
si0=si2?si0:si1;
l2=si0;
goto L2;
L4:;
si0=0U;
si1=l2;
si2=-1U;
si1+=si2;
l1=si1;
si2=l1;
si3=l2;
si2=si2 > si3;
si0=si2?si0:si1;
si1=1U;
si0>>=(si1&31);
si1=1U;
si0+=si1;
l2=si0;
goto L2;
L3:;
si0=l0;
si0=!(si0);
if(si0){
goto L1;
}
si0=l2;
si1=-1U;
si0+=si1;
l1=si0;
si1=l1;
si2=l0;
si1=DIV_U(si1,si2);
si2=1U;
si1+=si2;
si0=DIV_U(si0,si1);
si1=1U;
si0+=si1;
l2=si0;
L2:;
si0=l0;
si1=1U;
si0+=si1;
l1=si0;
si1=13U;
si0=si0 < si1;
if(si0){
goto L7;
}
si0=l1;
sj1=1ULL;
sj2=2ULL;
sj3=3ULL;
si4=l1;
si5=97U;
si4=si4 < si5;
sj2=si4?sj2:sj3;
si3=l1;
si4=49U;
si3=si3 < si4;
sj1=si3?sj1:sj2;
l3=sj1;
si2=3U;
si0=f1012(i,si0,sj1,si2);
l4=si0;
if(si0){
goto L8;
}
si0=0U;
l1=si0;
goto L7;
L8:;
si0=l4;
sj1=l3;
si1=(U32)(sj1);
l5=si1;
si0<<=(si1&31);
l1=si0;
si1=l5;
si0>>=(si1&31);
si1=l4;
si0=si0 != si1;
if(si0){
goto L6;
}
L7:;
si0=l1;
si1=1U;
si0>>=(si1&31);
l4=si0;
si1=l0;
si0=si0 < si1;
if(si0){
goto L10;
}
si0=l1;
si1=4U;
si0+=si1;
l4=si0;
goto L9;
L10:;
si0=l4;
si1=l2;
si0=si0 < si1;
if(si0){
goto L11;
}
si0=l1;
si1=l4;
si0+=si1;
si1=4U;
si0+=si1;
l4=si0;
goto L9;
L11:;
si0=l1;
si1=1U;
si0<<=(si1&31);
si1=4U;
si0+=si1;
l4=si0;
L9:;
si0=l4;
si1=l1;
si2=l0;
si1+=si2;
si0+=si1;
l1=si0;
si1=l2;
si2=3U;
si1*=si2;
si2=4U;
si1+=si2;
si0=si0 >= si1;
if(si0){
goto L5;
}
si0=1210436U;
si1=63U;
si2=1210500U;
f604(i,si0,si1,si2);
UNREACHABLE;
L6:;
si0=1261688U;
si1=43U;
si2=1261880U;
f604(i,si0,si1,si2);
UNREACHABLE;
L5:;
si0=l1;
si1=l2;
si0+=si1;
goto L0;
L1:;
si0=1206816U;
si1=25U;
si2=1208120U;
f604(i,si0,si1,si2);
UNREACHABLE;
L0:;
return si0;
}

void f1099(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4,U32 l5) {
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
U32 l17=0;
U32 l18=0;
U32 l19=0;
U32 l20=0;
U32 l21=0;
U64 l22=0;
U32 l23=0;
U64 l24=0;
U64 l25=0;
U32 l26=0;
U32 l27=0;
U32 si0,si1,si2,si3,si4,si5,si6,si7,si8;
U64 sj0,sj1,sj2,sj3,sj4,sj6,sj7;
si0=i->g0;
si1=128U;
si0-=si1;
l6=si0;
i->g0=si0;
si0=8U;
l7=si0;
si0=l3;
si1=l5;
si0-=si1;
l8=si0;
si1=2U;
si0+=si1;
l9=si0;
si0=!(si0);
if(si0){
goto L29;
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
si0=l10;
si0=!(si0);
if(si0){
goto L29;
}
si0=l10;
si1=1U;
si0=f15026(i,si0,si1);
l7=si0;
si0=!(si0);
if(si0){
goto L28;
}
L29:;
si0=l3;
si1=l8;
si2=1U;
si1+=si2;
l11=si1;
si2=l9;
si1+=si2;
l12=si1;
si0=si0 < si1;
if(si0){
goto L27;
}
si0=l2;
si1=l3;
si2=l12;
si1-=si2;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l13=si0;
si0=l4;
si1=l5;
si2=-1U;
si1+=si2;
l14=si1;
si2=3U;
si1<<=(si2&31);
si0+=si1;
sj0=i64_load(&i->m0,(U64)si0);
l15=sj0;
sj0=I64_CLZ(sj0);
l16=sj0;
sj1=0ULL;
si0=sj0 != sj1;
if(si0){
goto L37;
}
si0=l5;
si1=l9;
si0-=si1;
l10=si0;
si0=l5;
si1=l9;
si0=si0 < si1;
if(si0){
goto L36;
}
si0=l4;
si1=l10;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l10=si0;
si0=l3;
si1=l5;
si0=si0 == si1;
if(si0){
goto L35;
}
si0=l9;
si1=211U;
si0=si0 < si1;
if(si0){
goto L31;
}
si0=l9;
si1=2965U;
si0=si0 < si1;
if(si0){
goto L32;
}
si0=l12;
si1=l9;
si0=f1098(i,si0,si1);
l17=si0;
si0=!(si0);
if(si0){
goto L33;
}
si0=l17;
si1=268435455U;
si0=si0 > si1;
if(si0){
goto L5;
}
si0=l17;
si1=3U;
si0<<=(si1&31);
l18=si0;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L5;
}
si0=l18;
if(si0){
goto L34;
}
si0=8U;
l19=si0;
goto L8;
L37:;
si0=8U;
l20=si0;
si0=l3;
si1=1U;
si0+=si1;
l21=si0;
si0=!(si0);
if(si0){
goto L38;
}
si0=l21;
si1=268435455U;
si0=si0 > si1;
if(si0){
goto L5;
}
si0=l21;
si1=3U;
si0<<=(si1&31);
l10=si0;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L5;
}
si0=l10;
si0=!(si0);
if(si0){
goto L38;
}
si0=l10;
si1=1U;
si0=f15026(i,si0,si1);
l20=si0;
si0=!(si0);
if(si0){
goto L26;
}
L38:;
sj0=l15;
si0=!(sj0);
if(si0){
goto L42;
}
si0=l12;
si1=l21;
si0=si0 > si1;
if(si0){
goto L25;
}
sj0=0ULL;
l15=sj0;
sj0=0ULL;
sj1=l16;
sj0-=sj1;
l22=sj0;
si0=l12;
si0=!(si0);
if(si0){
goto L39;
}
si0=l12;
si1=1U;
si0&=si1;
l23=si0;
sj0=l22;
sj1=63ULL;
sj0&=sj1;
l24=sj0;
si0=l3;
si1=1U;
si0<<=(si1&31);
si1=2U;
si0+=si1;
si1=l5;
si2=1U;
si1<<=(si2&31);
si0=si0 != si1;
if(si0){
goto L41;
}
si0=0U;
l10=si0;
sj0=0ULL;
l15=sj0;
goto L40;
L42:;
si0=1200324U;
si1=36U;
si2=1200360U;
f604(i,si0,si1,si2);
UNREACHABLE;
L41:;
si0=0U;
l19=si0;
si0=0U;
si1=l12;
si2=-2U;
si1&=si2;
si0-=si1;
l18=si0;
sj0=0ULL;
l15=sj0;
si0=l13;
l10=si0;
si0=l20;
l17=si0;
L43:;
{
si0=l17;
si1=l10;
sj1=i64_load(&i->m0,(U64)si1);
l25=sj1;
sj2=l16;
sj1<<=(sj2&63);
sj2=l15;
sj1|=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l17;
si1=8U;
si0+=si1;
si1=l10;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
l15=sj1;
sj2=l16;
sj1<<=(sj2&63);
sj2=l25;
sj3=l24;
sj2>>=(sj3&63);
sj1|=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l10;
si1=16U;
si0+=si1;
l10=si0;
si0=l17;
si1=16U;
si0+=si1;
l17=si0;
sj0=l15;
sj1=l24;
sj0>>=(sj1&63);
l15=sj0;
si0=l18;
si1=l19;
si2=-2U;
si1+=si2;
l19=si1;
si0=si0 != si1;
if(si0){
goto L43;
}
}
si0=0U;
si1=l19;
si0-=si1;
l10=si0;
L40:;
si0=l23;
si0=!(si0);
if(si0){
goto L39;
}
si0=l20;
si1=l10;
si2=3U;
si1<<=(si2&31);
l10=si1;
si0+=si1;
si1=l13;
si2=l10;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
l25=sj1;
sj2=l16;
sj1<<=(sj2&63);
sj2=l15;
sj1|=sj2;
i64_store(&i->m0,(U64)si0,sj1);
sj0=l25;
sj1=l24;
sj0>>=(sj1&63);
l15=sj0;
L39:;
si0=l12;
si1=l21;
si0=si0 < si1;
if(si0){
goto L30;
}
si0=l12;
si1=l21;
si2=1210644U;
f594(i,si0,si1,si2);
UNREACHABLE;
L36:;
si0=l10;
si1=l5;
si2=1210628U;
f593(i,si0,si1,si2);
UNREACHABLE;
L35:;
si0=l12;
si0=!(si0);
if(si0){
goto L44;
}
si0=l12;
si1=268435455U;
si0=si0 > si1;
if(si0){
goto L5;
}
si0=l12;
si1=3U;
si0<<=(si1&31);
l17=si0;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L5;
}
si0=l17;
if(si0){
goto L45;
}
si0=8U;
l19=si0;
goto L9;
L45:;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=l17;
si0=f15022(i,si0);
l19=si0;
if(si0){
goto L9;
}
si0=8U;
si1=l17;
f52(i,si0,si1);
UNREACHABLE;
L44:;
si0=l7;
si1=l9;
si2=8U;
si3=l13;
si4=l12;
si5=3U;
si4<<=(si5&31);
si2=f15143(i,si2,si3,si4);
si3=l12;
si4=l10;
si5=2U;
si0=f1168(i,si0,si1,si2,si3,si4,si5);
l10=si0;
goto L7;
L34:;
si0=l18;
si1=1U;
si0=f15026(i,si0,si1);
l19=si0;
if(si0){
goto L8;
}
si0=8U;
si1=l18;
f52(i,si0,si1);
UNREACHABLE;
L33:;
si0=l7;
si1=l9;
si2=l13;
si3=l12;
si4=0U;
si5=l10;
si6=l9;
si7=8U;
si8=0U;
si0=f1091(i,si0,si1,si2,si3,si4,si5,si6,si7,si8);
l10=si0;
goto L7;
L32:;
sj0=l15;
sj1=0ULL;
si0=sj0 == sj1;
if(si0){
goto L24;
}
si0=l10;
si1=l8;
si2=3U;
si1<<=(si2&31);
si0+=si1;
sj0=i64_load(&i->m0,(U64)si0);
l25=sj0;
si0=l6;
si1=48U;
si0+=si1;
sj1=-1ULL;
sj2=l15;
sj3=-1ULL;
sj2^=sj3;
sj3=l15;
sj4=0ULL;
f15155(i,si0,sj1,sj2,sj3,sj4);
sj0=l25;
sj1=l15;
si2=l6;
sj2=i64_load(&i->m0,(U64)si2+48U);
l16=sj2;
sj1*=sj2;
l22=sj1;
sj0+=sj1;
l24=sj0;
sj1=l22;
si0=sj0 < sj1;
if(si0){
goto L23;
}
goto L10;
L31:;
si0=l8;
si1=-2U;
si0=si0 < si1;
if(si0){
goto L11;
}
si0=l8;
si1=l9;
si2=1210596U;
f594(i,si0,si1,si2);
UNREACHABLE;
L30:;
si0=l20;
si1=l12;
si2=3U;
si1<<=(si2&31);
si0+=si1;
sj1=l15;
i64_store(&i->m0,(U64)si0,sj1);
si0=l12;
si1=l12;
si2=1U;
si1+=si2;
l26=si1;
sj2=l15;
si2=!(sj2);
l27=si2;
si0=si2?si0:si1;
l13=si0;
si1=l21;
si0=si0 > si1;
if(si0){
goto L22;
}
si0=l9;
si0=!(si0);
if(si0){
goto L48;
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
si0=l10;
if(si0){
goto L50;
}
si0=8U;
l18=si0;
goto L49;
L50:;
si0=l10;
si1=1U;
si0=f15026(i,si0,si1);
l18=si0;
si0=!(si0);
if(si0){
goto L21;
}
L49:;
si0=l5;
si1=l9;
si0-=si1;
l21=si0;
si0=l5;
si1=l9;
si0=si0 < si1;
if(si0){
goto L20;
}
si0=l8;
si1=1U;
si0&=si1;
l14=si0;
si0=l4;
si1=l21;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l23=si0;
si0=l3;
si1=1U;
si0+=si1;
si1=l5;
si0=si0 != si1;
if(si0){
goto L52;
}
si0=0U;
l10=si0;
sj0=0ULL;
l15=sj0;
goto L51;
L52:;
sj0=l22;
sj1=63ULL;
sj0&=sj1;
l24=sj0;
si0=0U;
l19=si0;
si0=0U;
si1=l9;
si2=-2U;
si1&=si2;
si0-=si1;
l12=si0;
sj0=0ULL;
l15=sj0;
si0=l23;
l10=si0;
si0=l18;
l17=si0;
L53:;
{
si0=l17;
si1=l10;
sj1=i64_load(&i->m0,(U64)si1);
l25=sj1;
sj2=l16;
sj1<<=(sj2&63);
sj2=l15;
sj1|=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l17;
si1=8U;
si0+=si1;
si1=l10;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
l15=sj1;
sj2=l16;
sj1<<=(sj2&63);
sj2=l25;
sj3=l24;
sj2>>=(sj3&63);
sj1|=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l10;
si1=16U;
si0+=si1;
l10=si0;
si0=l17;
si1=16U;
si0+=si1;
l17=si0;
sj0=l15;
sj1=l24;
sj0>>=(sj1&63);
l15=sj0;
si0=l12;
si1=l19;
si2=-2U;
si1+=si2;
l19=si1;
si0=si0 != si1;
if(si0){
goto L53;
}
}
si0=0U;
si1=l19;
si0-=si1;
l10=si0;
L51:;
si0=l14;
si0=!(si0);
if(si0){
goto L54;
}
si0=l18;
si1=l10;
si2=3U;
si1<<=(si2&31);
l10=si1;
si0+=si1;
si1=l23;
si2=l10;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
sj2=l16;
sj1<<=(sj2&63);
sj2=l15;
sj1|=sj2;
i64_store(&i->m0,(U64)si0,sj1);
L54:;
si0=l21;
si1=-1U;
si0+=si1;
l14=si0;
si1=l5;
si0=si0 >= si1;
if(si0){
goto L19;
}
si0=l9;
si0=!(si0);
if(si0){
goto L47;
}
si0=l18;
si1=l18;
sj1=i64_load(&i->m0,(U64)si1);
si2=l4;
si3=l14;
si4=3U;
si3<<=(si4&31);
si2+=si3;
sj2=i64_load(&i->m0,(U64)si2);
sj3=l22;
sj2>>=(sj3&63);
sj1|=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=l5;
si0=si0 != si1;
if(si0){
goto L46;
}
si0=l7;
si1=l9;
si2=l20;
si3=l13;
si4=l18;
si5=l9;
si0=f1168(i,si0,si1,si2,si3,si4,si5);
l10=si0;
goto L12;
L48:;
si0=l5;
si0=!(si0);
if(si0){
goto L19;
}
L47:;
si0=0U;
si1=0U;
si2=1210692U;
f594(i,si0,si1,si2);
UNREACHABLE;
L46:;
si0=l9;
si1=211U;
si0=si0 < si1;
if(si0){
goto L55;
}
si0=l9;
si1=2965U;
si0=si0 < si1;
if(si0){
goto L56;
}
si0=l13;
si1=l9;
si0=f1098(i,si0,si1);
l10=si0;
si0=!(si0);
if(si0){
goto L57;
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
l19=si0;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L5;
}
si0=l19;
if(si0){
goto L58;
}
si0=8U;
l17=si0;
goto L13;
L58:;
si0=l19;
si1=1U;
si0=f15026(i,si0,si1);
l17=si0;
if(si0){
goto L13;
}
si0=8U;
si1=l19;
f52(i,si0,si1);
UNREACHABLE;
L57:;
si0=l7;
si1=l9;
si2=l20;
si3=l13;
si4=0U;
si5=l18;
si6=l9;
si7=8U;
si8=l10;
si0=f1091(i,si0,si1,si2,si3,si4,si5,si6,si7,si8);
l10=si0;
goto L12;
L56:;
si0=l11;
si1=l9;
si0=si0 >= si1;
if(si0){
goto L18;
}
si0=l18;
si1=l11;
si2=3U;
si1<<=(si2&31);
si0+=si1;
sj0=i64_load(&i->m0,(U64)si0);
l16=sj0;
sj1=0ULL;
si0=sj0 == sj1;
if(si0){
goto L17;
}
si0=l18;
si1=l8;
si2=3U;
si1<<=(si2&31);
si0+=si1;
sj0=i64_load(&i->m0,(U64)si0);
l25=sj0;
si0=l6;
si1=112U;
si0+=si1;
sj1=-1ULL;
sj2=l16;
sj3=-1ULL;
sj2^=sj3;
sj3=l16;
sj4=0ULL;
f15155(i,si0,sj1,sj2,sj3,sj4);
sj0=l25;
sj1=l16;
si2=l6;
sj2=i64_load(&i->m0,(U64)si2+112U);
l15=sj2;
sj1*=sj2;
l22=sj1;
sj0+=sj1;
l24=sj0;
sj1=l22;
si0=sj0 < sj1;
if(si0){
goto L16;
}
goto L14;
L55:;
si0=l11;
si1=l9;
si0=si0 < si1;
if(si0){
goto L59;
}
si0=l11;
si1=l9;
si2=1210724U;
f594(i,si0,si1,si2);
UNREACHABLE;
L59:;
si0=l8;
si1=-2U;
si0=si0 < si1;
if(si0){
goto L15;
}
si0=l8;
si1=l9;
si2=1210740U;
f594(i,si0,si1,si2);
UNREACHABLE;
L28:;
si0=8U;
si1=l10;
f52(i,si0,si1);
UNREACHABLE;
L27:;
si0=1206876U;
si1=43U;
si2=1210580U;
f604(i,si0,si1,si2);
UNREACHABLE;
L26:;
si0=8U;
si1=l10;
f52(i,si0,si1);
UNREACHABLE;
L25:;
si0=l12;
si1=l21;
si2=1200308U;
f597(i,si0,si1,si2);
UNREACHABLE;
L24:;
si0=1233936U;
si1=25U;
si2=1234152U;
f604(i,si0,si1,si2);
UNREACHABLE;
L23:;
sj0=-1ULL;
sj1=-2ULL;
sj2=l24;
sj3=l15;
si2=sj2 < sj3;
l17=si2;
sj0=si2?sj0:sj1;
sj1=l16;
sj0+=sj1;
l16=sj0;
sj0=l24;
sj1=l15;
sj2=0ULL;
sj3=l15;
si4=l17;
sj2=si4?sj2:sj3;
sj1+=sj2;
sj0-=sj1;
l24=sj0;
goto L10;
L22:;
si0=l13;
si1=l21;
si2=1210660U;
f597(i,si0,si1,si2);
UNREACHABLE;
L21:;
si0=8U;
si1=l10;
f52(i,si0,si1);
UNREACHABLE;
L20:;
si0=l21;
si1=l5;
si2=1210836U;
f593(i,si0,si1,si2);
UNREACHABLE;
L19:;
si0=l14;
si1=l5;
si2=1210676U;
f594(i,si0,si1,si2);
UNREACHABLE;
L18:;
si0=l11;
si1=l9;
si2=1210708U;
f594(i,si0,si1,si2);
UNREACHABLE;
L17:;
si0=1233936U;
si1=25U;
si2=1234152U;
f604(i,si0,si1,si2);
UNREACHABLE;
L16:;
sj0=-1ULL;
sj1=-2ULL;
sj2=l24;
sj3=l16;
si2=sj2 < sj3;
l10=si2;
sj0=si2?sj0:sj1;
sj1=l15;
sj0+=sj1;
l15=sj0;
sj0=l24;
sj1=l16;
sj2=0ULL;
sj3=l16;
si4=l10;
sj2=si4?sj2:sj3;
sj1+=sj2;
sj0-=sj1;
l24=sj0;
goto L14;
L15:;
si0=l18;
si1=l11;
si2=3U;
si1<<=(si2&31);
si0+=si1;
sj0=i64_load(&i->m0,(U64)si0);
l16=sj0;
sj1=0ULL;
si0=sj0 == sj1;
if(si0){
goto L62;
}
si0=l18;
si1=l8;
si2=3U;
si1<<=(si2&31);
si0+=si1;
sj0=i64_load(&i->m0,(U64)si0);
l25=sj0;
si0=l6;
si1=80U;
si0+=si1;
sj1=-1ULL;
sj2=l16;
sj3=-1ULL;
sj2^=sj3;
sj3=l16;
sj4=0ULL;
f15155(i,si0,sj1,sj2,sj3,sj4);
sj0=l25;
sj1=l16;
si2=l6;
sj2=i64_load(&i->m0,(U64)si2+80U);
l15=sj2;
sj1*=sj2;
l22=sj1;
sj0+=sj1;
l24=sj0;
sj1=l22;
si0=sj0 < sj1;
if(si0){
goto L61;
}
goto L60;
L62:;
si0=1233936U;
si1=25U;
si2=1234152U;
f604(i,si0,si1,si2);
UNREACHABLE;
L61:;
sj0=-1ULL;
sj1=-2ULL;
sj2=l24;
sj3=l16;
si2=sj2 < sj3;
l10=si2;
sj0=si2?sj0:sj1;
sj1=l15;
sj0+=sj1;
l15=sj0;
sj0=l24;
sj1=l16;
sj2=0ULL;
sj3=l16;
si4=l10;
sj2=si4?sj2:sj3;
sj1+=sj2;
sj0-=sj1;
l24=sj0;
L60:;
si0=l6;
si1=64U;
si0+=si1;
sj1=l15;
sj2=0ULL;
sj3=l25;
sj4=0ULL;
f15157(i,si0,sj1,sj2,sj3,sj4);
sj0=l24;
si1=l6;
si2=72U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
sj0+=sj1;
l22=sj0;
sj1=l24;
si0=sj0 >= sj1;
if(si0){
goto L63;
}
sj0=l22;
sj1=l16;
si0=sj0 > sj1;
if(si0){
goto L64;
}
sj0=l25;
si1=l6;
sj1=i64_load(&i->m0,(U64)si1+64U);
si0=sj0 <= sj1;
sj1=l22;
sj2=l16;
si1=sj1 == sj2;
si0&=si1;
si1=1U;
si0=si0 == si1;
if(si0){
goto L64;
}
si0=l7;
si1=l9;
si2=l20;
si3=l13;
si4=l18;
si5=l9;
sj6=l15;
sj7=-1ULL;
sj6+=sj7;
si0=f1090(i,si0,si1,si2,si3,si4,si5,sj6);
l10=si0;
goto L12;
L64:;
sj0=l15;
sj1=-2ULL;
sj0+=sj1;
l15=sj0;
L63:;
si0=l7;
si1=l9;
si2=l20;
si3=l13;
si4=l18;
si5=l9;
sj6=l15;
si0=f1090(i,si0,si1,si2,si3,si4,si5,sj6);
l10=si0;
goto L12;
L14:;
si0=l6;
si1=96U;
si0+=si1;
sj1=l15;
sj2=0ULL;
sj3=l25;
sj4=0ULL;
f15157(i,si0,sj1,sj2,sj3,sj4);
sj0=l24;
si1=l6;
si2=104U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
sj0+=sj1;
l22=sj0;
sj1=l24;
si0=sj0 >= sj1;
if(si0){
goto L65;
}
sj0=l22;
sj1=l16;
si0=sj0 > sj1;
if(si0){
goto L66;
}
sj0=l25;
si1=l6;
sj1=i64_load(&i->m0,(U64)si1+96U);
si0=sj0 <= sj1;
sj1=l22;
sj2=l16;
si1=sj1 == sj2;
si0&=si1;
si1=1U;
si0=si0 == si1;
if(si0){
goto L66;
}
si0=l7;
si1=l9;
si2=l20;
si3=l13;
si4=l18;
si5=l9;
sj6=l15;
sj7=-1ULL;
sj6+=sj7;
si0=f1096(i,si0,si1,si2,si3,si4,si5,sj6);
l10=si0;
goto L12;
L66:;
sj0=l15;
sj1=-2ULL;
sj0+=sj1;
l15=sj0;
L65:;
si0=l7;
si1=l9;
si2=l20;
si3=l13;
si4=l18;
si5=l9;
sj6=l15;
si0=f1096(i,si0,si1,si2,si3,si4,si5,sj6);
l10=si0;
goto L12;
L13:;
si0=l7;
si1=l9;
si2=l20;
si3=l13;
si4=0U;
si5=l18;
si6=l9;
si7=l17;
si8=l10;
si0=f1091(i,si0,si1,si2,si3,si4,si5,si6,si7,si8);
l10=si0;
si0=l17;
f15024(i,si0);
L12:;
si0=l27;
si0=!(si0);
if(si0){
goto L68;
}
si0=l11;
si1=l9;
si0=si0 >= si1;
if(si0){
goto L69;
}
si0=l7;
si1=l11;
si2=3U;
si1<<=(si2&31);
si0+=si1;
si1=l10;
sj1=(U64)(si1);
i64_store(&i->m0,(U64)si0,sj1);
goto L67;
L69:;
si0=l11;
si1=l9;
si2=1210756U;
f594(i,si0,si1,si2);
UNREACHABLE;
L68:;
si0=l10;
si0=!(si0);
if(si0){
goto L67;
}
si0=l26;
si1=l9;
si0-=si1;
l10=si0;
si1=l9;
si0=si0 > si1;
if(si0){
goto L70;
}
si0=l26;
si1=l9;
si0=si0 == si1;
if(si0){
goto L67;
}
si0=l7;
si1=255U;
si2=l3;
si3=3U;
si2<<=(si3&31);
si3=l5;
si4=3U;
si3<<=(si4&31);
si2-=si3;
si3=16U;
si2+=si3;
si0=f15145(i,si0,si1,si2);
goto L67;
L70:;
si0=l10;
si1=l9;
si2=1210772U;
f597(i,si0,si1,si2);
UNREACHABLE;
L67:;
si0=l18;
f15024(i,si0);
si0=l20;
f15024(i,si0);
goto L6;
L11:;
sj0=l15;
sj1=0ULL;
si0=sj0 == sj1;
if(si0){
goto L73;
}
si0=l10;
si1=l8;
si2=3U;
si1<<=(si2&31);
si0+=si1;
sj0=i64_load(&i->m0,(U64)si0);
l25=sj0;
si0=l6;
si1=16U;
si0+=si1;
sj1=-1ULL;
sj2=l15;
sj3=-1ULL;
sj2^=sj3;
sj3=l15;
sj4=0ULL;
f15155(i,si0,sj1,sj2,sj3,sj4);
sj0=l25;
sj1=l15;
si2=l6;
sj2=i64_load(&i->m0,(U64)si2+16U);
l16=sj2;
sj1*=sj2;
l22=sj1;
sj0+=sj1;
l24=sj0;
sj1=l22;
si0=sj0 < sj1;
if(si0){
goto L72;
}
goto L71;
L73:;
si0=1233936U;
si1=25U;
si2=1234152U;
f604(i,si0,si1,si2);
UNREACHABLE;
L72:;
sj0=-1ULL;
sj1=-2ULL;
sj2=l24;
sj3=l15;
si2=sj2 < sj3;
l17=si2;
sj0=si2?sj0:sj1;
sj1=l16;
sj0+=sj1;
l16=sj0;
sj0=l24;
sj1=l15;
sj2=0ULL;
sj3=l15;
si4=l17;
sj2=si4?sj2:sj3;
sj1+=sj2;
sj0-=sj1;
l24=sj0;
L71:;
si0=l6;
sj1=l16;
sj2=0ULL;
sj3=l25;
sj4=0ULL;
f15157(i,si0,sj1,sj2,sj3,sj4);
sj0=l24;
si1=l6;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
sj0+=sj1;
l22=sj0;
sj1=l24;
si0=sj0 >= sj1;
if(si0){
goto L74;
}
sj0=l22;
sj1=l15;
si0=sj0 > sj1;
if(si0){
goto L75;
}
sj0=l25;
si1=l6;
sj1=i64_load(&i->m0,(U64)si1);
si0=sj0 <= sj1;
sj1=l22;
sj2=l15;
si1=sj1 == sj2;
si0&=si1;
si1=1U;
si0=si0 == si1;
if(si0){
goto L75;
}
sj0=l16;
sj1=-1ULL;
sj0+=sj1;
l16=sj0;
goto L74;
L75:;
sj0=l16;
sj1=-2ULL;
sj0+=sj1;
l16=sj0;
L74:;
si0=l12;
si0=!(si0);
if(si0){
goto L77;
}
si0=l12;
si1=268435455U;
si0=si0 > si1;
if(si0){
goto L5;
}
si0=l12;
si1=3U;
si0<<=(si1&31);
l17=si0;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L5;
}
si0=l17;
if(si0){
goto L78;
}
si0=8U;
l19=si0;
goto L76;
L78:;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=l17;
si0=f15022(i,si0);
l19=si0;
if(si0){
goto L76;
}
si0=8U;
si1=l17;
f52(i,si0,si1);
UNREACHABLE;
L77:;
si0=l7;
si1=l9;
si2=8U;
si3=l13;
si4=l12;
si5=3U;
si4<<=(si5&31);
si2=f15143(i,si2,si3,si4);
si3=l12;
si4=l10;
si5=l9;
sj6=l16;
si0=f1090(i,si0,si1,si2,si3,si4,si5,sj6);
l10=si0;
goto L7;
L76:;
si0=l7;
si1=l9;
si2=l19;
si3=l13;
si4=l17;
si2=f15143(i,si2,si3,si4);
l17=si2;
si3=l12;
si4=l10;
si5=l9;
sj6=l16;
si0=f1090(i,si0,si1,si2,si3,si4,si5,sj6);
l10=si0;
si0=l17;
f15024(i,si0);
goto L7;
L10:;
si0=l6;
si1=32U;
si0+=si1;
sj1=l16;
sj2=0ULL;
sj3=l25;
sj4=0ULL;
f15157(i,si0,sj1,sj2,sj3,sj4);
sj0=l24;
si1=l6;
si2=40U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
sj0+=sj1;
l22=sj0;
sj1=l24;
si0=sj0 >= sj1;
if(si0){
goto L79;
}
sj0=l22;
sj1=l15;
si0=sj0 > sj1;
if(si0){
goto L80;
}
sj0=l25;
si1=l6;
sj1=i64_load(&i->m0,(U64)si1+32U);
si0=sj0 <= sj1;
sj1=l22;
sj2=l15;
si1=sj1 == sj2;
si0&=si1;
si1=1U;
si0=si0 == si1;
if(si0){
goto L80;
}
sj0=l16;
sj1=-1ULL;
sj0+=sj1;
l16=sj0;
goto L79;
L80:;
sj0=l16;
sj1=-2ULL;
sj0+=sj1;
l16=sj0;
L79:;
si0=l12;
si0=!(si0);
if(si0){
goto L82;
}
si0=l12;
si1=268435455U;
si0=si0 > si1;
if(si0){
goto L5;
}
si0=l12;
si1=3U;
si0<<=(si1&31);
l17=si0;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L5;
}
si0=l17;
if(si0){
goto L83;
}
si0=8U;
l19=si0;
goto L81;
L83:;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=l17;
si0=f15022(i,si0);
l19=si0;
if(si0){
goto L81;
}
si0=8U;
si1=l17;
f52(i,si0,si1);
UNREACHABLE;
L82:;
si0=l7;
si1=l9;
si2=8U;
si3=l13;
si4=l12;
si5=3U;
si4<<=(si5&31);
si2=f15143(i,si2,si3,si4);
si3=l12;
si4=l10;
si5=l9;
sj6=l16;
si0=f1096(i,si0,si1,si2,si3,si4,si5,sj6);
l10=si0;
goto L7;
L81:;
si0=l7;
si1=l9;
si2=l19;
si3=l13;
si4=l17;
si2=f15143(i,si2,si3,si4);
l17=si2;
si3=l12;
si4=l10;
si5=l9;
sj6=l16;
si0=f1096(i,si0,si1,si2,si3,si4,si5,sj6);
l10=si0;
si0=l17;
f15024(i,si0);
goto L7;
L9:;
si0=l7;
si1=l9;
si2=l19;
si3=l13;
si4=l17;
si2=f15143(i,si2,si3,si4);
l17=si2;
si3=l12;
si4=l10;
si5=2U;
si0=f1168(i,si0,si1,si2,si3,si4,si5);
l10=si0;
si0=l17;
f15024(i,si0);
goto L7;
L8:;
si0=l7;
si1=l9;
si2=l13;
si3=l12;
si4=0U;
si5=l10;
si6=l9;
si7=l19;
si8=l17;
si0=f1091(i,si0,si1,si2,si3,si4,si5,si6,si7,si8);
l10=si0;
si0=l19;
f15024(i,si0);
L7:;
si0=l11;
si1=l9;
si0=si0 >= si1;
if(si0){
goto L84;
}
si0=l7;
si1=l11;
si2=3U;
si1<<=(si2&31);
si0+=si1;
si1=l10;
sj1=(U64)(si1);
i64_store(&i->m0,(U64)si0,sj1);
goto L6;
L84:;
si0=l11;
si1=l9;
si2=1210612U;
f594(i,si0,si1,si2);
UNREACHABLE;
L6:;
si0=l11;
si1=l1;
si0=si0 > si1;
if(si0){
goto L86;
}
si0=l0;
si1=l7;
si2=8U;
si1+=si2;
l10=si1;
si2=l11;
si3=3U;
si2<<=(si3&31);
si0=f15143(i,si0,si1,si2);
l20=si0;
si0=l7;
sj0=i64_load(&i->m0,(U64)si0);
sj1=5ULL;
si0=sj0 >= sj1;
if(si0){
goto L1;
}
si0=8U;
l14=si0;
si0=8U;
l18=si0;
si0=l3;
si1=1U;
si0+=si1;
l21=si0;
si0=!(si0);
if(si0){
goto L87;
}
si0=l21;
si1=268435455U;
si0=si0 > si1;
if(si0){
goto L5;
}
si0=l21;
si1=3U;
si0<<=(si1&31);
l17=si0;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L5;
}
si0=8U;
l18=si0;
si0=l17;
si0=!(si0);
if(si0){
goto L87;
}
si0=l17;
si1=1U;
si0=f15026(i,si0,si1);
l18=si0;
si0=!(si0);
if(si0){
goto L85;
}
L87:;
si0=l5;
si1=l11;
si0=f1126(i,si0,si1);
l8=si0;
si0=!(si0);
if(si0){
goto L88;
}
si0=l8;
si1=268435455U;
si0=si0 > si1;
if(si0){
goto L5;
}
si0=l8;
si1=3U;
si0<<=(si1&31);
l17=si0;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L5;
}
si0=l17;
si0=!(si0);
if(si0){
goto L88;
}
si0=l17;
si1=1U;
si0=f15026(i,si0,si1);
l14=si0;
si0=!(si0);
if(si0){
goto L4;
}
L88:;
si0=l18;
si1=l21;
si2=l4;
si3=l5;
si4=l10;
si5=l11;
si6=l14;
si7=l8;
sj0=f1127(i,si0,si1,si2,si3,si4,si5,si6,si7);
si0=l3;
si1=-1U;
si0=si0 == si1;
if(si0){
goto L3;
}
si0=l18;
si1=l3;
si2=3U;
si1<<=(si2&31);
l10=si1;
si0+=si1;
sj0=i64_load(&i->m0,(U64)si0);
si0=!(sj0);
si0=!(si0);
if(si0){
goto L89;
}
si0=l2;
si1=-8U;
si0+=si1;
l9=si0;
si0=l18;
si1=-8U;
si0+=si1;
l12=si0;
L91:;
{
si0=l10;
si0=!(si0);
if(si0){
goto L90;
}
si0=l9;
si1=l10;
si0+=si1;
l17=si0;
si0=l12;
si1=l10;
si0+=si1;
l19=si0;
si0=l10;
si1=-8U;
si0+=si1;
l10=si0;
si0=l19;
sj0=i64_load(&i->m0,(U64)si0);
l16=sj0;
si1=l17;
sj1=i64_load(&i->m0,(U64)si1);
l15=sj1;
si0=sj0 == sj1;
if(si0){
goto L91;
}
}
sj0=l16;
sj1=l15;
si0=sj0 > sj1;
if(si0){
goto L89;
}
goto L2;
L90:;
si0=l10;
si0=!(si0);
if(si0){
goto L2;
}
L89:;
si0=l1;
si0=!(si0);
if(si0){
goto L92;
}
si0=l20;
si1=l20;
sj1=i64_load(&i->m0,(U64)si1);
l16=sj1;
sj2=-1ULL;
sj1+=sj2;
i64_store(&i->m0,(U64)si0,sj1);
sj0=l16;
sj1=0ULL;
si0=sj0 != sj1;
if(si0){
goto L2;
}
si0=l20;
si1=8U;
si0+=si1;
l10=si0;
si0=l1;
si1=3U;
si0<<=(si1&31);
si1=-8U;
si0+=si1;
l17=si0;
L93:;
{
si0=l17;
si0=!(si0);
if(si0){
goto L92;
}
si0=l10;
si1=l10;
sj1=i64_load(&i->m0,(U64)si1);
l16=sj1;
sj2=-1ULL;
sj1+=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l17;
si1=-8U;
si0+=si1;
l17=si0;
si0=l10;
si1=8U;
si0+=si1;
l10=si0;
sj0=l16;
si0=!(sj0);
si0=!(si0);
if(si0){
goto L2;
}
goto L93;
}
L92:;
si0=1208672U;
si1=49U;
si2=1210820U;
f604(i,si0,si1,si2);
UNREACHABLE;
L86:;
si0=l11;
si1=l1;
si2=1210788U;
f597(i,si0,si1,si2);
UNREACHABLE;
L85:;
si0=8U;
si1=l17;
f52(i,si0,si1);
UNREACHABLE;
L5:;
f53(i);
UNREACHABLE;
L4:;
si0=8U;
si1=l17;
f52(i,si0,si1);
UNREACHABLE;
L3:;
si0=-1U;
si1=l21;
si2=1210804U;
f594(i,si0,si1,si2);
UNREACHABLE;
L2:;
si0=l8;
si0=!(si0);
if(si0){
goto L94;
}
si0=l14;
f15024(i,si0);
L94:;
si0=l21;
si0=!(si0);
if(si0){
goto L1;
}
si0=l18;
f15024(i,si0);
L1:;
si0=l7;
f15024(i,si0);
si0=l6;
si1=128U;
si0+=si1;
i->g0=si0;
L0:;
}

void f1100(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4) {
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 l8=0;
U32 l9=0;
U32 l10=0;
U64 l11=0;
U64 l12=0;
F64 l13=0;
F64 l14=0;
U64 l15=0;
U64 l16=0;
U64 l17=0;
U32 l18=0;
U32 l19=0;
U32 l20=0;
U32 l21=0;
U32 l22=0;
U32 l23=0;
U32 l24=0;
U32 si0,si1,si2,si3,si4,si5,si6,si7;
U64 sj0,sj1,sj2,sj3,sj4,sj6,sj7;
F64 sd0,sd1,sd2,sd3;
si0=i->g0;
si1=176U;
si0-=si1;
l5=si0;
i->g0=si0;
si0=8U;
l6=si0;
si0=l2;
si1=l4;
si0-=si1;
l7=si0;
si1=1U;
si0+=si1;
l8=si0;
si0=!(si0);
if(si0){
goto L24;
}
si0=l8;
si1=268435455U;
si0=si0 > si1;
if(si0){
goto L15;
}
si0=l8;
si1=3U;
si0<<=(si1&31);
l9=si0;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L15;
}
si0=l9;
si0=!(si0);
if(si0){
goto L24;
}
si0=l9;
si1=1U;
si0=f15026(i,si0,si1);
l6=si0;
si0=!(si0);
if(si0){
goto L23;
}
L24:;
si0=l2;
si1=l4;
si0=si0 < si1;
if(si0){
goto L22;
}
si0=l4;
si1=2U;
si0=si0 < si1;
if(si0){
goto L21;
}
si0=l3;
si1=l4;
si2=-1U;
si1+=si2;
l10=si1;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l9=si0;
sj0=i64_load(&i->m0,(U64)si0);
l11=sj0;
sj1=0ULL;
si0=sj0 == sj1;
if(si0){
goto L20;
}
si0=l7;
si1=312U;
si0+=si1;
si1=l4;
si0=si0 >= si1;
if(si0){
goto L25;
}
si0=l6;
si1=l8;
si2=l1;
si3=l2;
si4=l3;
si5=l4;
f1099(i,si0,si1,si2,si3,si4,si5);
goto L1;
L25:;
sj0=l11;
sj0=I64_CLZ(sj0);
l12=sj0;
sj1=0ULL;
si0=sj0 != sj1;
if(si0){
goto L30;
}
si0=l4;
si1=2U;
si0=si0 == si1;
if(si0){
goto L29;
}
si0=l4;
si1=211U;
si0=si0 < si1;
if(si0){
goto L26;
}
si0=l7;
si1=211U;
si0=si0 < si1;
if(si0){
goto L26;
}
si0=l2;
si1=5930U;
si0=si0 < si1;
if(si0){
goto L31;
}
si0=l4;
sd0=(F64)(si0);
l13=sd0;
sd1=5782;
si2=l2;
sd2=(F64)(si2);
l14=sd2;
sd3=74;
sd2*=sd3;
sd0=f15123(i,sd0,sd1,sd2);
sd1=l14;
sd2=l13;
sd1*=sd2;
si0=sd0 > sd1;
si0=!(si0);
if(si0){
goto L28;
}
L31:;
si0=l5;
si1=56U;
si0+=si1;
sj1=-1ULL;
sj2=l11;
sj3=-1ULL;
sj2^=sj3;
sj3=l11;
sj4=0ULL;
f15155(i,si0,sj1,sj2,sj3,sj4);
sj0=l11;
si1=l5;
sj1=i64_load(&i->m0,(U64)si1+56U);
l12=sj1;
sj0*=sj1;
l15=sj0;
si1=l4;
si2=3U;
si1<<=(si2&31);
si2=l3;
si1+=si2;
si2=-16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
l16=sj1;
sj0+=sj1;
l17=sj0;
sj1=l15;
si0=sj0 < sj1;
if(si0){
goto L27;
}
goto L3;
L30:;
si0=l2;
si1=1U;
si0+=si1;
l18=si0;
si0=!(si0);
if(si0){
goto L32;
}
si0=l18;
si1=268435455U;
si0=si0 > si1;
if(si0){
goto L15;
}
si0=l18;
si1=3U;
si0<<=(si1&31);
l9=si0;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L15;
}
si0=l9;
if(si0){
goto L33;
}
si0=8U;
l19=si0;
goto L16;
L33:;
si0=l9;
si1=1U;
si0=f15026(i,si0,si1);
l19=si0;
if(si0){
goto L16;
}
si0=8U;
si1=l9;
f52(i,si0,si1);
UNREACHABLE;
L32:;
si0=l2;
si1=l18;
si2=1200308U;
f597(i,si0,si1,si2);
UNREACHABLE;
L29:;
si0=l2;
si1=268435455U;
si0=si0 > si1;
if(si0){
goto L15;
}
si0=l2;
si1=3U;
si0<<=(si1&31);
l9=si0;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L15;
}
si0=l9;
if(si0){
goto L35;
}
si0=8U;
l20=si0;
goto L34;
L35:;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=l9;
si0=f15022(i,si0);
l20=si0;
si0=!(si0);
if(si0){
goto L19;
}
L34:;
si0=l6;
si1=l8;
si2=l20;
si3=l1;
si4=l9;
si2=f15143(i,si2,si3,si4);
l20=si2;
si3=l2;
si4=l3;
si5=2U;
si0=f1168(i,si0,si1,si2,si3,si4,si5);
l9=si0;
si0=l20;
f15024(i,si0);
goto L2;
L28:;
si0=l7;
si1=l4;
si0=si0 >= si1;
if(si0){
goto L37;
}
si0=l8;
si1=1U;
si0<<=(si1&31);
si1=l8;
si0=f1098(i,si0,si1);
l9=si0;
goto L36;
L37:;
si0=l2;
si1=1U;
si0+=si1;
si1=l4;
si0=f1098(i,si0,si1);
l9=si0;
L36:;
si0=l5;
si1=72U;
si0+=si1;
si1=l9;
si2=1U;
f1295(i,si0,si1,si2);
si0=l5;
si0=i32_load(&i->m0,(U64)si0+76U);
l20=si0;
si0=l6;
si1=l8;
si2=l1;
si3=l2;
si4=l3;
si5=l4;
si6=l5;
si6=i32_load(&i->m0,(U64)si6+72U);
l21=si6;
si7=l9;
si0=f1097(i,si0,si1,si2,si3,si4,si5,si6,si7);
l9=si0;
si0=l20;
si0=!(si0);
if(si0){
goto L2;
}
si0=l21;
f15024(i,si0);
goto L2;
L27:;
sj0=-1ULL;
sj1=-2ULL;
sj2=l17;
sj3=l11;
si2=sj2 < sj3;
l9=si2;
sj0=si2?sj0:sj1;
sj1=l12;
sj0+=sj1;
l12=sj0;
sj0=l17;
sj1=l11;
sj2=0ULL;
sj3=l11;
si4=l9;
sj2=si4?sj2:sj3;
sj1+=sj2;
sj0-=sj1;
l17=sj0;
goto L3;
L26:;
si0=l5;
si1=24U;
si0+=si1;
sj1=-1ULL;
sj2=l11;
sj3=-1ULL;
sj2^=sj3;
sj3=l11;
sj4=0ULL;
f15155(i,si0,sj1,sj2,sj3,sj4);
sj0=l11;
si1=l5;
sj1=i64_load(&i->m0,(U64)si1+24U);
l12=sj1;
sj0*=sj1;
l15=sj0;
si1=l4;
si2=3U;
si1<<=(si2&31);
si2=l3;
si1+=si2;
si2=-16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
l16=sj1;
sj0+=sj1;
l17=sj0;
sj1=l15;
si0=sj0 < sj1;
if(si0){
goto L18;
}
goto L17;
L23:;
si0=8U;
si1=l9;
f52(i,si0,si1);
UNREACHABLE;
L22:;
si0=1207680U;
si1=32U;
si2=1210980U;
f604(i,si0,si1,si2);
UNREACHABLE;
L21:;
si0=1207728U;
si1=27U;
si2=1210964U;
f604(i,si0,si1,si2);
UNREACHABLE;
L20:;
si0=l5;
si1=0U;
i32_store(&i->m0,(U64)si0+152U,si1);
si0=1U;
si1=l9;
si2=1206800U;
si3=l5;
si4=152U;
si3+=si4;
si4=1210948U;
f1251(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L19:;
si0=8U;
si1=l9;
f52(i,si0,si1);
UNREACHABLE;
L18:;
sj0=-1ULL;
sj1=-2ULL;
sj2=l17;
sj3=l11;
si2=sj2 < sj3;
l9=si2;
sj0=si2?sj0:sj1;
sj1=l12;
sj0+=sj1;
l12=sj0;
sj0=l17;
sj1=l11;
sj2=0ULL;
sj3=l11;
si4=l9;
sj2=si4?sj2:sj3;
sj1+=sj2;
sj0-=sj1;
l17=sj0;
L17:;
si0=l5;
si1=8U;
si0+=si1;
sj1=l12;
sj2=0ULL;
sj3=l16;
sj4=0ULL;
f15157(i,si0,sj1,sj2,sj3,sj4);
sj0=l17;
si1=l5;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
sj0+=sj1;
l15=sj0;
sj1=l17;
si0=sj0 >= sj1;
if(si0){
goto L38;
}
sj0=l15;
sj1=l11;
si0=sj0 > sj1;
if(si0){
goto L39;
}
sj0=l16;
si1=l5;
sj1=i64_load(&i->m0,(U64)si1+8U);
si0=sj0 <= sj1;
sj1=l15;
sj2=l11;
si1=sj1 == sj2;
si0&=si1;
si1=1U;
si0=si0 == si1;
if(si0){
goto L39;
}
sj0=l12;
sj1=-1ULL;
sj0+=sj1;
l12=sj0;
goto L38;
L39:;
sj0=l12;
sj1=-2ULL;
sj0+=sj1;
l12=sj0;
L38:;
si0=l2;
si1=268435455U;
si0=si0 > si1;
if(si0){
goto L15;
}
si0=l2;
si1=3U;
si0<<=(si1&31);
l9=si0;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L15;
}
si0=l9;
if(si0){
goto L42;
}
si0=8U;
l20=si0;
goto L41;
L42:;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=l9;
si0=f15022(i,si0);
l20=si0;
si0=!(si0);
if(si0){
goto L40;
}
L41:;
si0=l6;
si1=l8;
si2=l20;
si3=l1;
si4=l9;
si2=f15143(i,si2,si3,si4);
l20=si2;
si3=l2;
si4=l3;
si5=l4;
sj6=l12;
si0=f1094(i,si0,si1,si2,si3,si4,si5,sj6);
l9=si0;
si0=l20;
f15024(i,si0);
goto L2;
L40:;
si0=8U;
si1=l9;
f52(i,si0,si1);
UNREACHABLE;
L16:;
si0=l2;
si1=1U;
si0&=si1;
l22=si0;
sj0=0ULL;
l17=sj0;
sj0=0ULL;
sj1=l12;
sj0-=sj1;
sj1=63ULL;
sj0&=sj1;
l11=sj0;
si0=l2;
si1=1U;
si0=si0 != si1;
if(si0){
goto L44;
}
si0=0U;
l21=si0;
goto L43;
L44:;
si0=l2;
si1=-2U;
si0&=si1;
l23=si0;
si0=0U;
l21=si0;
sj0=0ULL;
l17=sj0;
si0=l1;
l9=si0;
si0=l19;
l20=si0;
L45:;
{
si0=l20;
si1=l9;
sj1=i64_load(&i->m0,(U64)si1);
l16=sj1;
sj2=l12;
sj1<<=(sj2&63);
sj2=l17;
sj1|=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l20;
si1=8U;
si0+=si1;
si1=l9;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
l17=sj1;
sj2=l12;
sj1<<=(sj2&63);
sj2=l16;
sj3=l11;
sj2>>=(sj3&63);
sj1|=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l9;
si1=16U;
si0+=si1;
l9=si0;
si0=l20;
si1=16U;
si0+=si1;
l20=si0;
sj0=l17;
sj1=l11;
sj0>>=(sj1&63);
l17=sj0;
si0=l23;
si1=l21;
si2=2U;
si1+=si2;
l21=si1;
si0=si0 != si1;
if(si0){
goto L45;
}
}
L43:;
si0=l22;
si0=!(si0);
if(si0){
goto L46;
}
si0=l19;
si1=l21;
si2=3U;
si1<<=(si2&31);
l9=si1;
si0+=si1;
si1=l1;
si2=l9;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
l16=sj1;
sj2=l12;
sj1<<=(sj2&63);
sj2=l17;
sj1|=sj2;
i64_store(&i->m0,(U64)si0,sj1);
sj0=l16;
sj1=l11;
sj0>>=(sj1&63);
l17=sj0;
L46:;
si0=l19;
si1=l2;
si2=3U;
si1<<=(si2&31);
si0+=si1;
sj1=l17;
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=l18;
sj2=l17;
si2=!(sj2);
l24=si2;
si0=si2?si0:si1;
l22=si0;
si1=l18;
si0=si0 > si1;
if(si0){
goto L12;
}
si0=l4;
si1=268435455U;
si0=si0 > si1;
if(si0){
goto L15;
}
si0=l4;
si1=3U;
si0<<=(si1&31);
l9=si0;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L15;
}
si0=l9;
if(si0){
goto L14;
}
si0=8U;
l1=si0;
goto L13;
L15:;
f53(i);
UNREACHABLE;
L14:;
si0=l9;
si1=1U;
si0=f15026(i,si0,si1);
l1=si0;
si0=!(si0);
if(si0){
goto L11;
}
L13:;
si0=l4;
si1=1U;
si0&=si1;
l18=si0;
si0=l4;
si1=1U;
si0=si0 != si1;
if(si0){
goto L48;
}
si0=0U;
l21=si0;
sj0=0ULL;
l17=sj0;
goto L47;
L48:;
si0=l4;
si1=-2U;
si0&=si1;
l23=si0;
si0=0U;
l21=si0;
sj0=0ULL;
l17=sj0;
si0=l3;
l9=si0;
si0=l1;
l20=si0;
L49:;
{
si0=l20;
si1=l9;
sj1=i64_load(&i->m0,(U64)si1);
l16=sj1;
sj2=l12;
sj1<<=(sj2&63);
sj2=l17;
sj1|=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l20;
si1=8U;
si0+=si1;
si1=l9;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
l17=sj1;
sj2=l12;
sj1<<=(sj2&63);
sj2=l16;
sj3=l11;
sj2>>=(sj3&63);
sj1|=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l9;
si1=16U;
si0+=si1;
l9=si0;
si0=l20;
si1=16U;
si0+=si1;
l20=si0;
sj0=l17;
sj1=l11;
sj0>>=(sj1&63);
l17=sj0;
si0=l23;
si1=l21;
si2=2U;
si1+=si2;
l21=si1;
si0=si0 != si1;
if(si0){
goto L49;
}
}
L47:;
si0=l18;
si0=!(si0);
if(si0){
goto L50;
}
si0=l1;
si1=l21;
si2=3U;
si1<<=(si2&31);
l9=si1;
si0+=si1;
si1=l3;
si2=l9;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
sj2=l12;
sj1<<=(sj2&63);
sj2=l17;
sj1|=sj2;
i64_store(&i->m0,(U64)si0,sj1);
L50:;
si0=l4;
si1=2U;
si0=si0 != si1;
if(si0){
goto L51;
}
si0=l6;
si1=l8;
si2=l19;
si3=l22;
si4=l1;
si5=2U;
si0=f1168(i,si0,si1,si2,si3,si4,si5);
l9=si0;
goto L4;
L51:;
si0=l4;
si1=211U;
si0=si0 < si1;
if(si0){
goto L52;
}
si0=l22;
si1=l4;
si0-=si1;
l9=si0;
si1=211U;
si0=si0 < si1;
if(si0){
goto L52;
}
si0=l2;
si1=5930U;
si0=si0 < si1;
if(si0){
goto L53;
}
si0=l4;
sd0=(F64)(si0);
l13=sd0;
sd1=5782;
si2=l2;
sd2=(F64)(si2);
l14=sd2;
sd3=74;
sd2*=sd3;
sd0=f15123(i,sd0,sd1,sd2);
sd1=l14;
sd2=l13;
sd1*=sd2;
si0=sd0 > sd1;
if(si0){
goto L53;
}
si0=l9;
si1=l4;
si0=si0 >= si1;
if(si0){
goto L55;
}
si0=l9;
si1=1U;
si0+=si1;
l9=si0;
si1=1U;
si0<<=(si1&31);
si1=l9;
si0=f1098(i,si0,si1);
l9=si0;
goto L54;
L55:;
si0=l22;
si1=1U;
si0+=si1;
si1=l4;
si0=f1098(i,si0,si1);
l9=si0;
L54:;
si0=l5;
si1=144U;
si0+=si1;
si1=l9;
si2=1U;
f1295(i,si0,si1,si2);
si0=l5;
si0=i32_load(&i->m0,(U64)si0+148U);
l20=si0;
si0=l6;
si1=l8;
si2=l19;
si3=l22;
si4=l1;
si5=l4;
si6=l5;
si6=i32_load(&i->m0,(U64)si6+144U);
l21=si6;
si7=l9;
si0=f1097(i,si0,si1,si2,si3,si4,si5,si6,si7);
l9=si0;
si0=l20;
si0=!(si0);
if(si0){
goto L4;
}
si0=l21;
f15024(i,si0);
goto L4;
L53:;
si0=l1;
si1=l10;
si2=3U;
si1<<=(si2&31);
si0+=si1;
sj0=i64_load(&i->m0,(U64)si0);
l12=sj0;
sj1=0ULL;
si0=sj0 == sj1;
if(si0){
goto L10;
}
si0=l4;
si1=3U;
si0<<=(si1&31);
si1=l1;
si0+=si1;
si1=-16U;
si0+=si1;
sj0=i64_load(&i->m0,(U64)si0);
l16=sj0;
si0=l5;
si1=128U;
si0+=si1;
sj1=-1ULL;
sj2=l12;
sj3=-1ULL;
sj2^=sj3;
sj3=l12;
sj4=0ULL;
f15155(i,si0,sj1,sj2,sj3,sj4);
sj0=l16;
sj1=l12;
si2=l5;
sj2=i64_load(&i->m0,(U64)si2+128U);
l11=sj2;
sj1*=sj2;
l15=sj1;
sj0+=sj1;
l17=sj0;
sj1=l15;
si0=sj0 < sj1;
if(si0){
goto L9;
}
goto L5;
L52:;
si0=l1;
si1=l10;
si2=3U;
si1<<=(si2&31);
si0+=si1;
sj0=i64_load(&i->m0,(U64)si0);
l12=sj0;
sj1=0ULL;
si0=sj0 == sj1;
if(si0){
goto L8;
}
si0=l4;
si1=3U;
si0<<=(si1&31);
si1=l1;
si0+=si1;
si1=-16U;
si0+=si1;
sj0=i64_load(&i->m0,(U64)si0);
l16=sj0;
si0=l5;
si1=96U;
si0+=si1;
sj1=-1ULL;
sj2=l12;
sj3=-1ULL;
sj2^=sj3;
sj3=l12;
sj4=0ULL;
f15155(i,si0,sj1,sj2,sj3,sj4);
sj0=l16;
sj1=l12;
si2=l5;
sj2=i64_load(&i->m0,(U64)si2+96U);
l11=sj2;
sj1*=sj2;
l15=sj1;
sj0+=sj1;
l17=sj0;
sj1=l15;
si0=sj0 < sj1;
if(si0){
goto L7;
}
goto L6;
L12:;
si0=l22;
si1=l18;
si2=1208244U;
f597(i,si0,si1,si2);
UNREACHABLE;
L11:;
si0=8U;
si1=l9;
f52(i,si0,si1);
UNREACHABLE;
L10:;
si0=1233936U;
si1=25U;
si2=1234152U;
f604(i,si0,si1,si2);
UNREACHABLE;
L9:;
sj0=-1ULL;
sj1=-2ULL;
sj2=l17;
sj3=l12;
si2=sj2 < sj3;
l9=si2;
sj0=si2?sj0:sj1;
sj1=l11;
sj0+=sj1;
l11=sj0;
sj0=l17;
sj1=l12;
sj2=0ULL;
sj3=l12;
si4=l9;
sj2=si4?sj2:sj3;
sj1+=sj2;
sj0-=sj1;
l17=sj0;
goto L5;
L8:;
si0=1233936U;
si1=25U;
si2=1234152U;
f604(i,si0,si1,si2);
UNREACHABLE;
L7:;
sj0=-1ULL;
sj1=-2ULL;
sj2=l17;
sj3=l12;
si2=sj2 < sj3;
l9=si2;
sj0=si2?sj0:sj1;
sj1=l11;
sj0+=sj1;
l11=sj0;
sj0=l17;
sj1=l12;
sj2=0ULL;
sj3=l12;
si4=l9;
sj2=si4?sj2:sj3;
sj1+=sj2;
sj0-=sj1;
l17=sj0;
L6:;
si0=l5;
si1=80U;
si0+=si1;
sj1=l11;
sj2=0ULL;
sj3=l16;
sj4=0ULL;
f15157(i,si0,sj1,sj2,sj3,sj4);
sj0=l17;
si1=l5;
si2=88U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
sj0+=sj1;
l15=sj0;
sj1=l17;
si0=sj0 >= sj1;
if(si0){
goto L56;
}
sj0=l15;
sj1=l12;
si0=sj0 > sj1;
if(si0){
goto L57;
}
sj0=l16;
si1=l5;
sj1=i64_load(&i->m0,(U64)si1+80U);
si0=sj0 <= sj1;
sj1=l15;
sj2=l12;
si1=sj1 == sj2;
si0&=si1;
si1=1U;
si0=si0 == si1;
if(si0){
goto L57;
}
si0=l6;
si1=l8;
si2=l19;
si3=l22;
si4=l1;
si5=l4;
sj6=l11;
sj7=-1ULL;
sj6+=sj7;
si0=f1094(i,si0,si1,si2,si3,si4,si5,sj6);
l9=si0;
goto L4;
L57:;
sj0=l11;
sj1=-2ULL;
sj0+=sj1;
l11=sj0;
L56:;
si0=l6;
si1=l8;
si2=l19;
si3=l22;
si4=l1;
si5=l4;
sj6=l11;
si0=f1094(i,si0,si1,si2,si3,si4,si5,sj6);
l9=si0;
goto L4;
L5:;
si0=l5;
si1=112U;
si0+=si1;
sj1=l11;
sj2=0ULL;
sj3=l16;
sj4=0ULL;
f15157(i,si0,sj1,sj2,sj3,sj4);
sj0=l17;
si1=l5;
si2=120U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
sj0+=sj1;
l15=sj0;
sj1=l17;
si0=sj0 >= sj1;
if(si0){
goto L58;
}
sj0=l15;
sj1=l12;
si0=sj0 > sj1;
if(si0){
goto L59;
}
sj0=l16;
si1=l5;
sj1=i64_load(&i->m0,(U64)si1+112U);
si0=sj0 <= sj1;
sj1=l15;
sj2=l12;
si1=sj1 == sj2;
si0&=si1;
si1=1U;
si0=si0 == si1;
if(si0){
goto L59;
}
si0=l6;
si1=l8;
si2=l19;
si3=l22;
si4=l1;
si5=l4;
sj6=l11;
sj7=-1ULL;
sj6+=sj7;
si0=f1095(i,si0,si1,si2,si3,si4,si5,sj6);
l9=si0;
goto L4;
L59:;
sj0=l11;
sj1=-2ULL;
sj0+=sj1;
l11=sj0;
L58:;
si0=l6;
si1=l8;
si2=l19;
si3=l22;
si4=l1;
si5=l4;
sj6=l11;
si0=f1095(i,si0,si1,si2,si3,si4,si5,sj6);
l9=si0;
L4:;
si0=l24;
si0=!(si0);
if(si0){
goto L62;
}
si0=l7;
si1=-1U;
si0=si0 == si1;
if(si0){
goto L63;
}
si0=l6;
si1=l7;
si2=3U;
si1<<=(si2&31);
si0+=si1;
si1=l9;
sj1=(U64)(si1);
i64_store(&i->m0,(U64)si0,sj1);
goto L61;
L63:;
si0=-1U;
si1=l8;
si2=1208260U;
f594(i,si0,si1,si2);
UNREACHABLE;
L62:;
si0=l9;
if(si0){
goto L60;
}
L61:;
si0=l1;
f15024(i,si0);
si0=l19;
f15024(i,si0);
goto L1;
L60:;
si0=1208184U;
si1=28U;
si2=1208276U;
f604(i,si0,si1,si2);
UNREACHABLE;
L3:;
si0=l5;
si1=40U;
si0+=si1;
sj1=l12;
sj2=0ULL;
sj3=l16;
sj4=0ULL;
f15157(i,si0,sj1,sj2,sj3,sj4);
sj0=l17;
si1=l5;
si2=48U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
sj0+=sj1;
l15=sj0;
sj1=l17;
si0=sj0 >= sj1;
if(si0){
goto L64;
}
sj0=l15;
sj1=l11;
si0=sj0 > sj1;
if(si0){
goto L65;
}
sj0=l16;
si1=l5;
sj1=i64_load(&i->m0,(U64)si1+40U);
si0=sj0 <= sj1;
sj1=l15;
sj2=l11;
si1=sj1 == sj2;
si0&=si1;
si1=1U;
si0=si0 == si1;
if(si0){
goto L65;
}
si0=l6;
si1=l8;
si2=l1;
si3=l2;
si4=l3;
si5=l4;
sj6=l12;
sj7=-1ULL;
sj6+=sj7;
si0=f1095(i,si0,si1,si2,si3,si4,si5,sj6);
l9=si0;
goto L2;
L65:;
sj0=l12;
sj1=-2ULL;
sj0+=sj1;
l12=sj0;
L64:;
si0=l6;
si1=l8;
si2=l1;
si3=l2;
si4=l3;
si5=l4;
sj6=l12;
si0=f1095(i,si0,si1,si2,si3,si4,si5,sj6);
l9=si0;
L2:;
si0=l7;
si1=-1U;
si0=si0 == si1;
if(si0){
goto L66;
}
si0=l6;
si1=l7;
si2=3U;
si1<<=(si2&31);
si0+=si1;
si1=l9;
sj1=(U64)(si1);
i64_store(&i->m0,(U64)si0,sj1);
goto L1;
L66:;
si0=-1U;
si1=l8;
si2=1208228U;
f594(i,si0,si1,si2);
UNREACHABLE;
L1:;
si0=l0;
si1=l8;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l0;
si1=l8;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l6;
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=176U;
si0+=si1;
i->g0=si0;
L0:;
}

void f1101(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4,U32 l5) {
U32 l6=0;
U32 l7=0;
U64 l8=0;
U32 l9=0;
U64 l10=0;
U32 l11=0;
U32 l12=0;
U32 l13=0;
F64 l14=0;
F64 l15=0;
U32 l16=0;
U32 l17=0;
U64 l18=0;
U64 l19=0;
U64 l20=0;
U32 l21=0;
U32 l22=0;
U32 si0,si1,si2,si3,si4,si5,si6,si7;
U64 sj0,sj1,sj2,sj3,sj4,sj6,sj7;
F64 sd0,sd1,sd2,sd3;
si0=i->g0;
si1=176U;
si0-=si1;
l6=si0;
i->g0=si0;
si0=l3;
si1=l5;
si0=si0 < si1;
if(si0){
goto L11;
}
si0=l5;
si1=2U;
si0=si0 < si1;
if(si0){
goto L10;
}
si0=l5;
si1=3U;
si0<<=(si1&31);
si1=l4;
si0+=si1;
si1=-8U;
si0+=si1;
l7=si0;
sj0=i64_load(&i->m0,(U64)si0);
l8=sj0;
sj1=0ULL;
si0=sj0 == sj1;
if(si0){
goto L9;
}
si0=l3;
si1=l5;
si0-=si1;
l9=si0;
si1=312U;
si0+=si1;
si1=l5;
si0=si0 >= si1;
if(si0){
goto L12;
}
si0=l0;
si1=l1;
si2=l2;
si3=l3;
si4=l4;
si5=l5;
f1099(i,si0,si1,si2,si3,si4,si5);
goto L2;
L12:;
sj0=l8;
sj0=I64_CLZ(sj0);
l10=sj0;
sj1=0ULL;
si0=sj0 != sj1;
if(si0){
goto L14;
}
si0=l5;
si1=2U;
si0=si0 != si1;
if(si0){
goto L13;
}
si0=l0;
si1=l1;
si2=l2;
si3=l3;
si4=l4;
si5=2U;
si0=f1168(i,si0,si1,si2,si3,si4,si5);
l11=si0;
goto L4;
L14:;
si0=l3;
si1=1U;
si0+=si1;
l12=si0;
si0=!(si0);
if(si0){
goto L15;
}
si0=l12;
si1=268435455U;
si0=si0 > si1;
if(si0){
goto L17;
}
si0=l12;
si1=3U;
si0<<=(si1&31);
l11=si0;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L17;
}
si0=l11;
if(si0){
goto L16;
}
si0=8U;
l13=si0;
goto L3;
L17:;
f53(i);
UNREACHABLE;
L16:;
si0=l11;
si1=1U;
si0=f15026(i,si0,si1);
l13=si0;
if(si0){
goto L3;
}
si0=8U;
si1=l11;
f52(i,si0,si1);
UNREACHABLE;
L15:;
si0=l3;
si1=l12;
si2=1200308U;
f597(i,si0,si1,si2);
UNREACHABLE;
L13:;
si0=l5;
si1=211U;
si0=si0 < si1;
if(si0){
goto L18;
}
si0=l9;
si1=211U;
si0=si0 < si1;
if(si0){
goto L18;
}
si0=l3;
si1=5930U;
si0=si0 < si1;
if(si0){
goto L19;
}
si0=l5;
sd0=(F64)(si0);
l14=sd0;
sd1=5782;
si2=l3;
sd2=(F64)(si2);
l15=sd2;
sd3=74;
sd2*=sd3;
sd0=f15123(i,sd0,sd1,sd2);
sd1=l15;
sd2=l14;
sd1*=sd2;
si0=sd0 > sd1;
if(si0){
goto L19;
}
si0=l9;
si1=l5;
si0=si0 >= si1;
if(si0){
goto L21;
}
si0=l9;
si1=1U;
si0+=si1;
l11=si0;
si1=1U;
si0<<=(si1&31);
si1=l11;
si0=f1098(i,si0,si1);
l11=si0;
goto L20;
L21:;
si0=l3;
si1=1U;
si0+=si1;
si1=l5;
si0=f1098(i,si0,si1);
l11=si0;
L20:;
si0=l6;
si1=72U;
si0+=si1;
si1=l11;
si2=1U;
f1295(i,si0,si1,si2);
si0=l6;
si0=i32_load(&i->m0,(U64)si0+76U);
l16=si0;
si0=l0;
si1=l1;
si2=l2;
si3=l3;
si4=l4;
si5=l5;
si6=l6;
si6=i32_load(&i->m0,(U64)si6+72U);
l17=si6;
si7=l11;
si0=f1097(i,si0,si1,si2,si3,si4,si5,si6,si7);
l11=si0;
si0=l16;
si0=!(si0);
if(si0){
goto L4;
}
si0=l17;
f15024(i,si0);
goto L4;
L19:;
si0=l6;
si1=56U;
si0+=si1;
sj1=-1ULL;
sj2=l8;
sj3=-1ULL;
sj2^=sj3;
sj3=l8;
sj4=0ULL;
f15155(i,si0,sj1,sj2,sj3,sj4);
sj0=l8;
si1=l6;
sj1=i64_load(&i->m0,(U64)si1+56U);
l10=sj1;
sj0*=sj1;
l18=sj0;
si1=l5;
si2=3U;
si1<<=(si2&31);
si2=l4;
si1+=si2;
si2=-16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
l19=sj1;
sj0+=sj1;
l20=sj0;
sj1=l18;
si0=sj0 < sj1;
if(si0){
goto L8;
}
goto L5;
L18:;
si0=l6;
si1=24U;
si0+=si1;
sj1=-1ULL;
sj2=l8;
sj3=-1ULL;
sj2^=sj3;
sj3=l8;
sj4=0ULL;
f15155(i,si0,sj1,sj2,sj3,sj4);
sj0=l8;
si1=l6;
sj1=i64_load(&i->m0,(U64)si1+24U);
l10=sj1;
sj0*=sj1;
l18=sj0;
si1=l5;
si2=3U;
si1<<=(si2&31);
si2=l4;
si1+=si2;
si2=-16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
l19=sj1;
sj0+=sj1;
l20=sj0;
sj1=l18;
si0=sj0 < sj1;
if(si0){
goto L7;
}
goto L6;
L11:;
si0=1207680U;
si1=32U;
si2=1210884U;
f604(i,si0,si1,si2);
UNREACHABLE;
L10:;
si0=1207728U;
si1=27U;
si2=1210868U;
f604(i,si0,si1,si2);
UNREACHABLE;
L9:;
si0=l6;
si1=0U;
i32_store(&i->m0,(U64)si0+152U,si1);
si0=1U;
si1=l7;
si2=1206800U;
si3=l6;
si4=152U;
si3+=si4;
si4=1210852U;
f1251(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L8:;
sj0=-1ULL;
sj1=-2ULL;
sj2=l20;
sj3=l8;
si2=sj2 < sj3;
l11=si2;
sj0=si2?sj0:sj1;
sj1=l10;
sj0+=sj1;
l10=sj0;
sj0=l20;
sj1=l8;
sj2=0ULL;
sj3=l8;
si4=l11;
sj2=si4?sj2:sj3;
sj1+=sj2;
sj0-=sj1;
l20=sj0;
goto L5;
L7:;
sj0=-1ULL;
sj1=-2ULL;
sj2=l20;
sj3=l8;
si2=sj2 < sj3;
l11=si2;
sj0=si2?sj0:sj1;
sj1=l10;
sj0+=sj1;
l10=sj0;
sj0=l20;
sj1=l8;
sj2=0ULL;
sj3=l8;
si4=l11;
sj2=si4?sj2:sj3;
sj1+=sj2;
sj0-=sj1;
l20=sj0;
L6:;
si0=l6;
si1=8U;
si0+=si1;
sj1=l10;
sj2=0ULL;
sj3=l19;
sj4=0ULL;
f15157(i,si0,sj1,sj2,sj3,sj4);
sj0=l20;
si1=l6;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
sj0+=sj1;
l18=sj0;
sj1=l20;
si0=sj0 >= sj1;
if(si0){
goto L22;
}
sj0=l18;
sj1=l8;
si0=sj0 > sj1;
if(si0){
goto L23;
}
sj0=l19;
si1=l6;
sj1=i64_load(&i->m0,(U64)si1+8U);
si0=sj0 <= sj1;
sj1=l18;
sj2=l8;
si1=sj1 == sj2;
si0&=si1;
si1=1U;
si0=si0 == si1;
if(si0){
goto L23;
}
si0=l0;
si1=l1;
si2=l2;
si3=l3;
si4=l4;
si5=l5;
sj6=l10;
sj7=-1ULL;
sj6+=sj7;
si0=f1094(i,si0,si1,si2,si3,si4,si5,sj6);
l11=si0;
goto L4;
L23:;
sj0=l10;
sj1=-2ULL;
sj0+=sj1;
l10=sj0;
L22:;
si0=l0;
si1=l1;
si2=l2;
si3=l3;
si4=l4;
si5=l5;
sj6=l10;
si0=f1094(i,si0,si1,si2,si3,si4,si5,sj6);
l11=si0;
goto L4;
L5:;
si0=l6;
si1=40U;
si0+=si1;
sj1=l10;
sj2=0ULL;
sj3=l19;
sj4=0ULL;
f15157(i,si0,sj1,sj2,sj3,sj4);
sj0=l20;
si1=l6;
si2=48U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
sj0+=sj1;
l18=sj0;
sj1=l20;
si0=sj0 >= sj1;
if(si0){
goto L24;
}
sj0=l18;
sj1=l8;
si0=sj0 > sj1;
if(si0){
goto L25;
}
sj0=l19;
si1=l6;
sj1=i64_load(&i->m0,(U64)si1+40U);
si0=sj0 <= sj1;
sj1=l18;
sj2=l8;
si1=sj1 == sj2;
si0&=si1;
si1=1U;
si0=si0 == si1;
if(si0){
goto L25;
}
si0=l0;
si1=l1;
si2=l2;
si3=l3;
si4=l4;
si5=l5;
sj6=l10;
sj7=-1ULL;
sj6+=sj7;
si0=f1095(i,si0,si1,si2,si3,si4,si5,sj6);
l11=si0;
goto L4;
L25:;
sj0=l10;
sj1=-2ULL;
sj0+=sj1;
l10=sj0;
L24:;
si0=l0;
si1=l1;
si2=l2;
si3=l3;
si4=l4;
si5=l5;
sj6=l10;
si0=f1095(i,si0,si1,si2,si3,si4,si5,sj6);
l11=si0;
L4:;
si0=l9;
si1=l1;
si0=si0 >= si1;
if(si0){
goto L26;
}
si0=l0;
si1=l9;
si2=3U;
si1<<=(si2&31);
si0+=si1;
si1=l11;
sj1=(U64)(si1);
i64_store(&i->m0,(U64)si0,sj1);
goto L2;
L26:;
si0=l9;
si1=l1;
si2=1210516U;
f594(i,si0,si1,si2);
UNREACHABLE;
L3:;
si0=l3;
si1=1U;
si0&=si1;
l21=si0;
sj0=0ULL;
l20=sj0;
sj0=0ULL;
sj1=l10;
sj0-=sj1;
sj1=63ULL;
sj0&=sj1;
l8=sj0;
si0=l3;
si1=1U;
si0=si0 != si1;
if(si0){
goto L28;
}
si0=0U;
l17=si0;
goto L27;
L28:;
si0=l3;
si1=-2U;
si0&=si1;
l22=si0;
si0=0U;
l17=si0;
sj0=0ULL;
l20=sj0;
si0=l2;
l11=si0;
si0=l13;
l16=si0;
L29:;
{
si0=l16;
si1=l11;
sj1=i64_load(&i->m0,(U64)si1);
l19=sj1;
sj2=l10;
sj1<<=(sj2&63);
sj2=l20;
sj1|=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l16;
si1=8U;
si0+=si1;
si1=l11;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
l20=sj1;
sj2=l10;
sj1<<=(sj2&63);
sj2=l19;
sj3=l8;
sj2>>=(sj3&63);
sj1|=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l11;
si1=16U;
si0+=si1;
l11=si0;
si0=l16;
si1=16U;
si0+=si1;
l16=si0;
sj0=l20;
sj1=l8;
sj0>>=(sj1&63);
l20=sj0;
si0=l22;
si1=l17;
si2=2U;
si1+=si2;
l17=si1;
si0=si0 != si1;
if(si0){
goto L29;
}
}
L27:;
si0=l21;
si0=!(si0);
if(si0){
goto L30;
}
si0=l13;
si1=l17;
si2=3U;
si1<<=(si2&31);
l11=si1;
si0+=si1;
si1=l2;
si2=l11;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
l19=sj1;
sj2=l10;
sj1<<=(sj2&63);
sj2=l20;
sj1|=sj2;
i64_store(&i->m0,(U64)si0,sj1);
sj0=l19;
sj1=l8;
sj0>>=(sj1&63);
l20=sj0;
L30:;
si0=l13;
si1=l3;
si2=3U;
si1<<=(si2&31);
si0+=si1;
sj1=l20;
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=l12;
sj2=l20;
si2=!(sj2);
l21=si2;
si0=si2?si0:si1;
l2=si0;
si1=l12;
si0=si0 > si1;
if(si0){
goto L38;
}
si0=l5;
si1=-1U;
si0+=si1;
si1=536870911U;
si0&=si1;
l17=si0;
si1=1U;
si0+=si1;
l22=si0;
si1=3U;
si0&=si1;
l16=si0;
sj0=0ULL;
l20=sj0;
si0=l4;
l11=si0;
si0=l17;
si1=3U;
si0=si0 < si1;
if(si0){
goto L39;
}
si0=l22;
si1=1073741820U;
si0&=si1;
l17=si0;
sj0=0ULL;
l20=sj0;
si0=l4;
l11=si0;
L40:;
{
si0=l11;
si1=l11;
sj1=i64_load(&i->m0,(U64)si1);
l19=sj1;
sj2=l10;
sj1<<=(sj2&63);
sj2=l20;
sj1|=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l11;
si1=8U;
si0+=si1;
l22=si0;
si1=l22;
sj1=i64_load(&i->m0,(U64)si1);
l20=sj1;
sj2=l10;
sj1<<=(sj2&63);
sj2=l19;
sj3=l8;
sj2>>=(sj3&63);
sj1|=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l11;
si1=16U;
si0+=si1;
l22=si0;
si1=l22;
sj1=i64_load(&i->m0,(U64)si1);
l19=sj1;
sj2=l10;
sj1<<=(sj2&63);
sj2=l20;
sj3=l8;
sj2>>=(sj3&63);
sj1|=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l11;
si1=24U;
si0+=si1;
l22=si0;
si1=l22;
sj1=i64_load(&i->m0,(U64)si1);
l20=sj1;
sj2=l10;
sj1<<=(sj2&63);
sj2=l19;
sj3=l8;
sj2>>=(sj3&63);
sj1|=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l11;
si1=32U;
si0+=si1;
l11=si0;
sj0=l20;
sj1=l8;
sj0>>=(sj1&63);
l20=sj0;
si0=l17;
si1=-4U;
si0+=si1;
l17=si0;
if(si0){
goto L40;
}
}
L39:;
si0=l16;
si0=!(si0);
if(si0){
goto L41;
}
L42:;
{
si0=l11;
si1=l11;
sj1=i64_load(&i->m0,(U64)si1);
l19=sj1;
sj2=l10;
sj1<<=(sj2&63);
sj2=l20;
sj1|=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l11;
si1=8U;
si0+=si1;
l11=si0;
sj0=l19;
sj1=l8;
sj0>>=(sj1&63);
l20=sj0;
si0=l16;
si1=-1U;
si0+=si1;
l16=si0;
if(si0){
goto L42;
}
}
L41:;
si0=l5;
si1=2U;
si0=si0 != si1;
if(si0){
goto L43;
}
si0=l0;
si1=l1;
si2=l13;
si3=l2;
si4=l4;
si5=2U;
si0=f1168(i,si0,si1,si2,si3,si4,si5);
l11=si0;
goto L31;
L43:;
si0=l5;
si1=211U;
si0=si0 < si1;
if(si0){
goto L44;
}
si0=l2;
si1=l5;
si0-=si1;
l11=si0;
si1=211U;
si0=si0 < si1;
if(si0){
goto L44;
}
si0=l3;
si1=5930U;
si0=si0 < si1;
if(si0){
goto L45;
}
si0=l5;
sd0=(F64)(si0);
l14=sd0;
sd1=5782;
si2=l3;
sd2=(F64)(si2);
l15=sd2;
sd3=74;
sd2*=sd3;
sd0=f15123(i,sd0,sd1,sd2);
sd1=l15;
sd2=l14;
sd1*=sd2;
si0=sd0 > sd1;
if(si0){
goto L45;
}
si0=l11;
si1=l5;
si0=si0 >= si1;
if(si0){
goto L47;
}
si0=l11;
si1=1U;
si0+=si1;
l11=si0;
si1=1U;
si0<<=(si1&31);
si1=l11;
si0=f1098(i,si0,si1);
l11=si0;
goto L46;
L47:;
si0=l2;
si1=1U;
si0+=si1;
si1=l5;
si0=f1098(i,si0,si1);
l11=si0;
L46:;
si0=l6;
si1=144U;
si0+=si1;
si1=l11;
si2=1U;
f1295(i,si0,si1,si2);
si0=l6;
si0=i32_load(&i->m0,(U64)si0+148U);
l16=si0;
si0=l0;
si1=l1;
si2=l13;
si3=l2;
si4=l4;
si5=l5;
si6=l6;
si6=i32_load(&i->m0,(U64)si6+144U);
l17=si6;
si7=l11;
si0=f1097(i,si0,si1,si2,si3,si4,si5,si6,si7);
l11=si0;
si0=l16;
si0=!(si0);
if(si0){
goto L31;
}
si0=l17;
f15024(i,si0);
goto L31;
L45:;
si0=l7;
sj0=i64_load(&i->m0,(U64)si0);
l10=sj0;
sj1=0ULL;
si0=sj0 == sj1;
if(si0){
goto L37;
}
si0=l5;
si1=3U;
si0<<=(si1&31);
si1=l4;
si0+=si1;
si1=-16U;
si0+=si1;
sj0=i64_load(&i->m0,(U64)si0);
l19=sj0;
si0=l6;
si1=128U;
si0+=si1;
sj1=-1ULL;
sj2=l10;
sj3=-1ULL;
sj2^=sj3;
sj3=l10;
sj4=0ULL;
f15155(i,si0,sj1,sj2,sj3,sj4);
sj0=l19;
sj1=l10;
si2=l6;
sj2=i64_load(&i->m0,(U64)si2+128U);
l8=sj2;
sj1*=sj2;
l18=sj1;
sj0+=sj1;
l20=sj0;
sj1=l18;
si0=sj0 < sj1;
if(si0){
goto L36;
}
goto L32;
L44:;
si0=l7;
sj0=i64_load(&i->m0,(U64)si0);
l10=sj0;
sj1=0ULL;
si0=sj0 == sj1;
if(si0){
goto L35;
}
si0=l5;
si1=3U;
si0<<=(si1&31);
si1=l4;
si0+=si1;
si1=-16U;
si0+=si1;
sj0=i64_load(&i->m0,(U64)si0);
l19=sj0;
si0=l6;
si1=96U;
si0+=si1;
sj1=-1ULL;
sj2=l10;
sj3=-1ULL;
sj2^=sj3;
sj3=l10;
sj4=0ULL;
f15155(i,si0,sj1,sj2,sj3,sj4);
sj0=l19;
sj1=l10;
si2=l6;
sj2=i64_load(&i->m0,(U64)si2+96U);
l8=sj2;
sj1*=sj2;
l18=sj1;
sj0+=sj1;
l20=sj0;
sj1=l18;
si0=sj0 < sj1;
if(si0){
goto L34;
}
goto L33;
L38:;
si0=l2;
si1=l12;
si2=1210532U;
f597(i,si0,si1,si2);
UNREACHABLE;
L37:;
si0=1233936U;
si1=25U;
si2=1234152U;
f604(i,si0,si1,si2);
UNREACHABLE;
L36:;
sj0=-1ULL;
sj1=-2ULL;
sj2=l20;
sj3=l10;
si2=sj2 < sj3;
l11=si2;
sj0=si2?sj0:sj1;
sj1=l8;
sj0+=sj1;
l8=sj0;
sj0=l20;
sj1=l10;
sj2=0ULL;
sj3=l10;
si4=l11;
sj2=si4?sj2:sj3;
sj1+=sj2;
sj0-=sj1;
l20=sj0;
goto L32;
L35:;
si0=1233936U;
si1=25U;
si2=1234152U;
f604(i,si0,si1,si2);
UNREACHABLE;
L34:;
sj0=-1ULL;
sj1=-2ULL;
sj2=l20;
sj3=l10;
si2=sj2 < sj3;
l11=si2;
sj0=si2?sj0:sj1;
sj1=l8;
sj0+=sj1;
l8=sj0;
sj0=l20;
sj1=l10;
sj2=0ULL;
sj3=l10;
si4=l11;
sj2=si4?sj2:sj3;
sj1+=sj2;
sj0-=sj1;
l20=sj0;
L33:;
si0=l6;
si1=80U;
si0+=si1;
sj1=l8;
sj2=0ULL;
sj3=l19;
sj4=0ULL;
f15157(i,si0,sj1,sj2,sj3,sj4);
sj0=l20;
si1=l6;
si2=88U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
sj0+=sj1;
l18=sj0;
sj1=l20;
si0=sj0 >= sj1;
if(si0){
goto L48;
}
sj0=l18;
sj1=l10;
si0=sj0 > sj1;
if(si0){
goto L49;
}
sj0=l19;
si1=l6;
sj1=i64_load(&i->m0,(U64)si1+80U);
si0=sj0 <= sj1;
sj1=l18;
sj2=l10;
si1=sj1 == sj2;
si0&=si1;
si1=1U;
si0=si0 == si1;
if(si0){
goto L49;
}
si0=l0;
si1=l1;
si2=l13;
si3=l2;
si4=l4;
si5=l5;
sj6=l8;
sj7=-1ULL;
sj6+=sj7;
si0=f1094(i,si0,si1,si2,si3,si4,si5,sj6);
l11=si0;
goto L31;
L49:;
sj0=l8;
sj1=-2ULL;
sj0+=sj1;
l8=sj0;
L48:;
si0=l0;
si1=l1;
si2=l13;
si3=l2;
si4=l4;
si5=l5;
sj6=l8;
si0=f1094(i,si0,si1,si2,si3,si4,si5,sj6);
l11=si0;
goto L31;
L32:;
si0=l6;
si1=112U;
si0+=si1;
sj1=l8;
sj2=0ULL;
sj3=l19;
sj4=0ULL;
f15157(i,si0,sj1,sj2,sj3,sj4);
sj0=l20;
si1=l6;
si2=120U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
sj0+=sj1;
l18=sj0;
sj1=l20;
si0=sj0 >= sj1;
if(si0){
goto L50;
}
sj0=l18;
sj1=l10;
si0=sj0 > sj1;
if(si0){
goto L51;
}
sj0=l19;
si1=l6;
sj1=i64_load(&i->m0,(U64)si1+112U);
si0=sj0 <= sj1;
sj1=l18;
sj2=l10;
si1=sj1 == sj2;
si0&=si1;
si1=1U;
si0=si0 == si1;
if(si0){
goto L51;
}
si0=l0;
si1=l1;
si2=l13;
si3=l2;
si4=l4;
si5=l5;
sj6=l8;
sj7=-1ULL;
sj6+=sj7;
si0=f1095(i,si0,si1,si2,si3,si4,si5,sj6);
l11=si0;
goto L31;
L51:;
sj0=l8;
sj1=-2ULL;
sj0+=sj1;
l8=sj0;
L50:;
si0=l0;
si1=l1;
si2=l13;
si3=l2;
si4=l4;
si5=l5;
sj6=l8;
si0=f1095(i,si0,si1,si2,si3,si4,si5,sj6);
l11=si0;
L31:;
si0=l21;
si0=!(si0);
if(si0){
goto L53;
}
si0=l9;
si1=l1;
si0=si0 >= si1;
if(si0){
goto L54;
}
si0=l0;
si1=l9;
si2=3U;
si1<<=(si2&31);
si0+=si1;
si1=l11;
sj1=(U64)(si1);
i64_store(&i->m0,(U64)si0,sj1);
goto L52;
L54:;
si0=l9;
si1=l1;
si2=1210548U;
f594(i,si0,si1,si2);
UNREACHABLE;
L53:;
si0=l11;
if(si0){
goto L1;
}
L52:;
si0=l13;
f15024(i,si0);
L2:;
si0=l6;
si1=176U;
si0+=si1;
i->g0=si0;
goto L0;
L1:;
si0=1208184U;
si1=28U;
si2=1210564U;
f604(i,si0,si1,si2);
UNREACHABLE;
L0:;
}

void f1102(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4,U32 l5) {
U32 l6=0;
U32 l7=0;
U32 l8=0;
U64 l9=0;
U32 l10=0;
U64 l11=0;
U32 l12=0;
U32 l13=0;
F64 l14=0;
F64 l15=0;
U32 l16=0;
U32 l17=0;
U64 l18=0;
U64 l19=0;
U64 l20=0;
U32 l21=0;
U32 l22=0;
U32 l23=0;
U32 si0,si1,si2,si3,si4,si5,si6,si7;
U64 sj0,sj1,sj2,sj3,sj4,sj6,sj7;
F64 sd0,sd1,sd2,sd3;
si0=i->g0;
si1=176U;
si0-=si1;
l6=si0;
i->g0=si0;
si0=l3;
si1=l5;
si0=si0 < si1;
if(si0){
goto L23;
}
si0=l5;
si1=2U;
si0=si0 < si1;
if(si0){
goto L22;
}
si0=l4;
si1=l5;
si2=-1U;
si1+=si2;
l7=si1;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l8=si0;
sj0=i64_load(&i->m0,(U64)si0);
l9=sj0;
sj1=0ULL;
si0=sj0 == sj1;
if(si0){
goto L21;
}
si0=l3;
si1=l5;
si0-=si1;
l10=si0;
si1=312U;
si0+=si1;
si1=l5;
si0=si0 >= si1;
if(si0){
goto L24;
}
si0=l0;
si1=l1;
si2=l2;
si3=l3;
si4=l4;
si5=l5;
f1099(i,si0,si1,si2,si3,si4,si5);
goto L2;
L24:;
sj0=l9;
sj0=I64_CLZ(sj0);
l11=sj0;
sj1=0ULL;
si0=sj0 != sj1;
if(si0){
goto L26;
}
si0=l5;
si1=2U;
si0=si0 != si1;
if(si0){
goto L25;
}
si0=l0;
si1=l1;
si2=l2;
si3=l3;
si4=l4;
si5=2U;
si0=f1168(i,si0,si1,si2,si3,si4,si5);
l8=si0;
goto L16;
L26:;
si0=l3;
si1=1U;
si0+=si1;
l12=si0;
si0=!(si0);
if(si0){
goto L27;
}
si0=l12;
si1=268435455U;
si0=si0 > si1;
if(si0){
goto L14;
}
si0=l12;
si1=3U;
si0<<=(si1&31);
l8=si0;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L14;
}
si0=l8;
if(si0){
goto L28;
}
si0=8U;
l13=si0;
goto L15;
L28:;
si0=l8;
si1=1U;
si0=f15026(i,si0,si1);
l13=si0;
if(si0){
goto L15;
}
si0=8U;
si1=l8;
f52(i,si0,si1);
UNREACHABLE;
L27:;
si0=l3;
si1=l12;
si2=1200308U;
f597(i,si0,si1,si2);
UNREACHABLE;
L25:;
si0=l5;
si1=211U;
si0=si0 < si1;
if(si0){
goto L29;
}
si0=l10;
si1=211U;
si0=si0 < si1;
if(si0){
goto L29;
}
si0=l3;
si1=5930U;
si0=si0 < si1;
if(si0){
goto L30;
}
si0=l5;
sd0=(F64)(si0);
l14=sd0;
sd1=5782;
si2=l3;
sd2=(F64)(si2);
l15=sd2;
sd3=74;
sd2*=sd3;
sd0=f15123(i,sd0,sd1,sd2);
sd1=l15;
sd2=l14;
sd1*=sd2;
si0=sd0 > sd1;
if(si0){
goto L30;
}
si0=l10;
si1=l5;
si0=si0 >= si1;
if(si0){
goto L32;
}
si0=l10;
si1=1U;
si0+=si1;
l8=si0;
si1=1U;
si0<<=(si1&31);
si1=l8;
si0=f1098(i,si0,si1);
l8=si0;
goto L31;
L32:;
si0=l3;
si1=1U;
si0+=si1;
si1=l5;
si0=f1098(i,si0,si1);
l8=si0;
L31:;
si0=l6;
si1=72U;
si0+=si1;
si1=l8;
si2=1U;
f1295(i,si0,si1,si2);
si0=l6;
si0=i32_load(&i->m0,(U64)si0+76U);
l16=si0;
si0=l0;
si1=l1;
si2=l2;
si3=l3;
si4=l4;
si5=l5;
si6=l6;
si6=i32_load(&i->m0,(U64)si6+72U);
l17=si6;
si7=l8;
si0=f1097(i,si0,si1,si2,si3,si4,si5,si6,si7);
l8=si0;
si0=l16;
si0=!(si0);
if(si0){
goto L16;
}
si0=l17;
f15024(i,si0);
goto L16;
L30:;
si0=l6;
si1=56U;
si0+=si1;
sj1=-1ULL;
sj2=l9;
sj3=-1ULL;
sj2^=sj3;
sj3=l9;
sj4=0ULL;
f15155(i,si0,sj1,sj2,sj3,sj4);
sj0=l9;
si1=l6;
sj1=i64_load(&i->m0,(U64)si1+56U);
l11=sj1;
sj0*=sj1;
l18=sj0;
si1=l5;
si2=3U;
si1<<=(si2&31);
si2=l4;
si1+=si2;
si2=-16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
l19=sj1;
sj0+=sj1;
l20=sj0;
sj1=l18;
si0=sj0 < sj1;
if(si0){
goto L20;
}
goto L17;
L29:;
si0=l6;
si1=24U;
si0+=si1;
sj1=-1ULL;
sj2=l9;
sj3=-1ULL;
sj2^=sj3;
sj3=l9;
sj4=0ULL;
f15155(i,si0,sj1,sj2,sj3,sj4);
sj0=l9;
si1=l6;
sj1=i64_load(&i->m0,(U64)si1+24U);
l11=sj1;
sj0*=sj1;
l18=sj0;
si1=l5;
si2=3U;
si1<<=(si2&31);
si2=l4;
si1+=si2;
si2=-16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
l19=sj1;
sj0+=sj1;
l20=sj0;
sj1=l18;
si0=sj0 < sj1;
if(si0){
goto L19;
}
goto L18;
L23:;
si0=1207680U;
si1=32U;
si2=1210932U;
f604(i,si0,si1,si2);
UNREACHABLE;
L22:;
si0=1207728U;
si1=27U;
si2=1210916U;
f604(i,si0,si1,si2);
UNREACHABLE;
L21:;
si0=l6;
si1=0U;
i32_store(&i->m0,(U64)si0+152U,si1);
si0=1U;
si1=l8;
si2=1206800U;
si3=l6;
si4=152U;
si3+=si4;
si4=1210900U;
f1251(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L20:;
sj0=-1ULL;
sj1=-2ULL;
sj2=l20;
sj3=l9;
si2=sj2 < sj3;
l8=si2;
sj0=si2?sj0:sj1;
sj1=l11;
sj0+=sj1;
l11=sj0;
sj0=l20;
sj1=l9;
sj2=0ULL;
sj3=l9;
si4=l8;
sj2=si4?sj2:sj3;
sj1+=sj2;
sj0-=sj1;
l20=sj0;
goto L17;
L19:;
sj0=-1ULL;
sj1=-2ULL;
sj2=l20;
sj3=l9;
si2=sj2 < sj3;
l8=si2;
sj0=si2?sj0:sj1;
sj1=l11;
sj0+=sj1;
l11=sj0;
sj0=l20;
sj1=l9;
sj2=0ULL;
sj3=l9;
si4=l8;
sj2=si4?sj2:sj3;
sj1+=sj2;
sj0-=sj1;
l20=sj0;
L18:;
si0=l6;
si1=8U;
si0+=si1;
sj1=l11;
sj2=0ULL;
sj3=l19;
sj4=0ULL;
f15157(i,si0,sj1,sj2,sj3,sj4);
sj0=l20;
si1=l6;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
sj0+=sj1;
l18=sj0;
sj1=l20;
si0=sj0 >= sj1;
if(si0){
goto L33;
}
sj0=l18;
sj1=l9;
si0=sj0 > sj1;
if(si0){
goto L34;
}
sj0=l19;
si1=l6;
sj1=i64_load(&i->m0,(U64)si1+8U);
si0=sj0 <= sj1;
sj1=l18;
sj2=l9;
si1=sj1 == sj2;
si0&=si1;
si1=1U;
si0=si0 == si1;
if(si0){
goto L34;
}
sj0=l11;
sj1=-1ULL;
sj0+=sj1;
l11=sj0;
goto L33;
L34:;
sj0=l11;
sj1=-2ULL;
sj0+=sj1;
l11=sj0;
L33:;
si0=l0;
si1=l1;
si2=l2;
si3=l3;
si4=l4;
si5=l5;
sj6=l11;
si0=f1094(i,si0,si1,si2,si3,si4,si5,sj6);
l8=si0;
goto L16;
L17:;
si0=l6;
si1=40U;
si0+=si1;
sj1=l11;
sj2=0ULL;
sj3=l19;
sj4=0ULL;
f15157(i,si0,sj1,sj2,sj3,sj4);
sj0=l20;
si1=l6;
si2=48U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
sj0+=sj1;
l18=sj0;
sj1=l20;
si0=sj0 >= sj1;
if(si0){
goto L35;
}
sj0=l18;
sj1=l9;
si0=sj0 > sj1;
if(si0){
goto L36;
}
sj0=l19;
si1=l6;
sj1=i64_load(&i->m0,(U64)si1+40U);
si0=sj0 <= sj1;
sj1=l18;
sj2=l9;
si1=sj1 == sj2;
si0&=si1;
si1=1U;
si0=si0 == si1;
if(si0){
goto L36;
}
si0=l0;
si1=l1;
si2=l2;
si3=l3;
si4=l4;
si5=l5;
sj6=l11;
sj7=-1ULL;
sj6+=sj7;
si0=f1095(i,si0,si1,si2,si3,si4,si5,sj6);
l8=si0;
goto L16;
L36:;
sj0=l11;
sj1=-2ULL;
sj0+=sj1;
l11=sj0;
L35:;
si0=l0;
si1=l1;
si2=l2;
si3=l3;
si4=l4;
si5=l5;
sj6=l11;
si0=f1095(i,si0,si1,si2,si3,si4,si5,sj6);
l8=si0;
L16:;
si0=l10;
si1=l1;
si0=si0 >= si1;
if(si0){
goto L37;
}
si0=l0;
si1=l10;
si2=3U;
si1<<=(si2&31);
si0+=si1;
si1=l8;
sj1=(U64)(si1);
i64_store(&i->m0,(U64)si0,sj1);
goto L2;
L37:;
si0=l10;
si1=l1;
si2=1208136U;
f594(i,si0,si1,si2);
UNREACHABLE;
L15:;
si0=l3;
si1=1U;
si0&=si1;
l21=si0;
sj0=0ULL;
l20=sj0;
sj0=0ULL;
sj1=l11;
sj0-=sj1;
sj1=63ULL;
sj0&=sj1;
l9=sj0;
si0=l3;
si1=1U;
si0=si0 != si1;
if(si0){
goto L39;
}
si0=0U;
l17=si0;
goto L38;
L39:;
si0=l3;
si1=-2U;
si0&=si1;
l22=si0;
si0=0U;
l17=si0;
sj0=0ULL;
l20=sj0;
si0=l2;
l8=si0;
si0=l13;
l16=si0;
L40:;
{
si0=l16;
si1=l8;
sj1=i64_load(&i->m0,(U64)si1);
l19=sj1;
sj2=l11;
sj1<<=(sj2&63);
sj2=l20;
sj1|=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l16;
si1=8U;
si0+=si1;
si1=l8;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
l20=sj1;
sj2=l11;
sj1<<=(sj2&63);
sj2=l19;
sj3=l9;
sj2>>=(sj3&63);
sj1|=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l8;
si1=16U;
si0+=si1;
l8=si0;
si0=l16;
si1=16U;
si0+=si1;
l16=si0;
sj0=l20;
sj1=l9;
sj0>>=(sj1&63);
l20=sj0;
si0=l22;
si1=l17;
si2=2U;
si1+=si2;
l17=si1;
si0=si0 != si1;
if(si0){
goto L40;
}
}
L38:;
si0=l21;
si0=!(si0);
if(si0){
goto L41;
}
si0=l13;
si1=l17;
si2=3U;
si1<<=(si2&31);
l8=si1;
si0+=si1;
si1=l2;
si2=l8;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
l19=sj1;
sj2=l11;
sj1<<=(sj2&63);
sj2=l20;
sj1|=sj2;
i64_store(&i->m0,(U64)si0,sj1);
sj0=l19;
sj1=l9;
sj0>>=(sj1&63);
l20=sj0;
L41:;
si0=l13;
si1=l3;
si2=3U;
si1<<=(si2&31);
si0+=si1;
sj1=l20;
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=l12;
sj2=l20;
si2=!(sj2);
l23=si2;
si0=si2?si0:si1;
l21=si0;
si1=l12;
si0=si0 > si1;
if(si0){
goto L11;
}
si0=l5;
si1=268435455U;
si0=si0 > si1;
if(si0){
goto L14;
}
si0=l5;
si1=3U;
si0<<=(si1&31);
l8=si0;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L14;
}
si0=l8;
if(si0){
goto L13;
}
si0=8U;
l2=si0;
goto L12;
L14:;
f53(i);
UNREACHABLE;
L13:;
si0=l8;
si1=1U;
si0=f15026(i,si0,si1);
l2=si0;
si0=!(si0);
if(si0){
goto L10;
}
L12:;
si0=l5;
si1=1U;
si0&=si1;
l12=si0;
si0=l5;
si1=1U;
si0=si0 != si1;
if(si0){
goto L43;
}
si0=0U;
l17=si0;
sj0=0ULL;
l20=sj0;
goto L42;
L43:;
si0=l5;
si1=-2U;
si0&=si1;
l22=si0;
si0=0U;
l17=si0;
sj0=0ULL;
l20=sj0;
si0=l4;
l8=si0;
si0=l2;
l16=si0;
L44:;
{
si0=l16;
si1=l8;
sj1=i64_load(&i->m0,(U64)si1);
l19=sj1;
sj2=l11;
sj1<<=(sj2&63);
sj2=l20;
sj1|=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l16;
si1=8U;
si0+=si1;
si1=l8;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
l20=sj1;
sj2=l11;
sj1<<=(sj2&63);
sj2=l19;
sj3=l9;
sj2>>=(sj3&63);
sj1|=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l8;
si1=16U;
si0+=si1;
l8=si0;
si0=l16;
si1=16U;
si0+=si1;
l16=si0;
sj0=l20;
sj1=l9;
sj0>>=(sj1&63);
l20=sj0;
si0=l22;
si1=l17;
si2=2U;
si1+=si2;
l17=si1;
si0=si0 != si1;
if(si0){
goto L44;
}
}
L42:;
si0=l12;
si0=!(si0);
if(si0){
goto L45;
}
si0=l2;
si1=l17;
si2=3U;
si1<<=(si2&31);
l8=si1;
si0+=si1;
si1=l4;
si2=l8;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
sj2=l11;
sj1<<=(sj2&63);
sj2=l20;
sj1|=sj2;
i64_store(&i->m0,(U64)si0,sj1);
L45:;
si0=l5;
si1=2U;
si0=si0 != si1;
if(si0){
goto L46;
}
si0=l0;
si1=l1;
si2=l13;
si3=l21;
si4=l2;
si5=2U;
si0=f1168(i,si0,si1,si2,si3,si4,si5);
l8=si0;
goto L3;
L46:;
si0=l5;
si1=211U;
si0=si0 < si1;
if(si0){
goto L47;
}
si0=l21;
si1=l5;
si0-=si1;
l8=si0;
si1=211U;
si0=si0 < si1;
if(si0){
goto L47;
}
si0=l3;
si1=5930U;
si0=si0 < si1;
if(si0){
goto L48;
}
si0=l5;
sd0=(F64)(si0);
l14=sd0;
sd1=5782;
si2=l3;
sd2=(F64)(si2);
l15=sd2;
sd3=74;
sd2*=sd3;
sd0=f15123(i,sd0,sd1,sd2);
sd1=l15;
sd2=l14;
sd1*=sd2;
si0=sd0 > sd1;
if(si0){
goto L48;
}
si0=l8;
si1=l5;
si0=si0 >= si1;
if(si0){
goto L50;
}
si0=l8;
si1=1U;
si0+=si1;
l8=si0;
si1=1U;
si0<<=(si1&31);
si1=l8;
si0=f1098(i,si0,si1);
l8=si0;
goto L49;
L50:;
si0=l21;
si1=1U;
si0+=si1;
si1=l5;
si0=f1098(i,si0,si1);
l8=si0;
L49:;
si0=l6;
si1=144U;
si0+=si1;
si1=l8;
si2=1U;
f1295(i,si0,si1,si2);
si0=l6;
si0=i32_load(&i->m0,(U64)si0+148U);
l16=si0;
si0=l0;
si1=l1;
si2=l13;
si3=l21;
si4=l2;
si5=l5;
si6=l6;
si6=i32_load(&i->m0,(U64)si6+144U);
l17=si6;
si7=l8;
si0=f1097(i,si0,si1,si2,si3,si4,si5,si6,si7);
l8=si0;
si0=l16;
si0=!(si0);
if(si0){
goto L3;
}
si0=l17;
f15024(i,si0);
goto L3;
L48:;
si0=l2;
si1=l7;
si2=3U;
si1<<=(si2&31);
si0+=si1;
sj0=i64_load(&i->m0,(U64)si0);
l11=sj0;
sj1=0ULL;
si0=sj0 == sj1;
if(si0){
goto L9;
}
si0=l5;
si1=3U;
si0<<=(si1&31);
si1=l2;
si0+=si1;
si1=-16U;
si0+=si1;
sj0=i64_load(&i->m0,(U64)si0);
l19=sj0;
si0=l6;
si1=128U;
si0+=si1;
sj1=-1ULL;
sj2=l11;
sj3=-1ULL;
sj2^=sj3;
sj3=l11;
sj4=0ULL;
f15155(i,si0,sj1,sj2,sj3,sj4);
sj0=l19;
sj1=l11;
si2=l6;
sj2=i64_load(&i->m0,(U64)si2+128U);
l9=sj2;
sj1*=sj2;
l18=sj1;
sj0+=sj1;
l20=sj0;
sj1=l18;
si0=sj0 < sj1;
if(si0){
goto L8;
}
goto L4;
L47:;
si0=l2;
si1=l7;
si2=3U;
si1<<=(si2&31);
si0+=si1;
sj0=i64_load(&i->m0,(U64)si0);
l11=sj0;
sj1=0ULL;
si0=sj0 == sj1;
if(si0){
goto L7;
}
si0=l5;
si1=3U;
si0<<=(si1&31);
si1=l2;
si0+=si1;
si1=-16U;
si0+=si1;
sj0=i64_load(&i->m0,(U64)si0);
l19=sj0;
si0=l6;
si1=96U;
si0+=si1;
sj1=-1ULL;
sj2=l11;
sj3=-1ULL;
sj2^=sj3;
sj3=l11;
sj4=0ULL;
f15155(i,si0,sj1,sj2,sj3,sj4);
sj0=l19;
sj1=l11;
si2=l6;
sj2=i64_load(&i->m0,(U64)si2+96U);
l9=sj2;
sj1*=sj2;
l18=sj1;
sj0+=sj1;
l20=sj0;
sj1=l18;
si0=sj0 < sj1;
if(si0){
goto L6;
}
goto L5;
L11:;
si0=l21;
si1=l12;
si2=1208152U;
f597(i,si0,si1,si2);
UNREACHABLE;
L10:;
si0=8U;
si1=l8;
f52(i,si0,si1);
UNREACHABLE;
L9:;
si0=1233936U;
si1=25U;
si2=1234152U;
f604(i,si0,si1,si2);
UNREACHABLE;
L8:;
sj0=-1ULL;
sj1=-2ULL;
sj2=l20;
sj3=l11;
si2=sj2 < sj3;
l8=si2;
sj0=si2?sj0:sj1;
sj1=l9;
sj0+=sj1;
l9=sj0;
sj0=l20;
sj1=l11;
sj2=0ULL;
sj3=l11;
si4=l8;
sj2=si4?sj2:sj3;
sj1+=sj2;
sj0-=sj1;
l20=sj0;
goto L4;
L7:;
si0=1233936U;
si1=25U;
si2=1234152U;
f604(i,si0,si1,si2);
UNREACHABLE;
L6:;
sj0=-1ULL;
sj1=-2ULL;
sj2=l20;
sj3=l11;
si2=sj2 < sj3;
l8=si2;
sj0=si2?sj0:sj1;
sj1=l9;
sj0+=sj1;
l9=sj0;
sj0=l20;
sj1=l11;
sj2=0ULL;
sj3=l11;
si4=l8;
sj2=si4?sj2:sj3;
sj1+=sj2;
sj0-=sj1;
l20=sj0;
L5:;
si0=l6;
si1=80U;
si0+=si1;
sj1=l9;
sj2=0ULL;
sj3=l19;
sj4=0ULL;
f15157(i,si0,sj1,sj2,sj3,sj4);
sj0=l20;
si1=l6;
si2=88U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
sj0+=sj1;
l18=sj0;
sj1=l20;
si0=sj0 >= sj1;
if(si0){
goto L51;
}
sj0=l18;
sj1=l11;
si0=sj0 > sj1;
if(si0){
goto L52;
}
sj0=l19;
si1=l6;
sj1=i64_load(&i->m0,(U64)si1+80U);
si0=sj0 <= sj1;
sj1=l18;
sj2=l11;
si1=sj1 == sj2;
si0&=si1;
si1=1U;
si0=si0 == si1;
if(si0){
goto L52;
}
si0=l0;
si1=l1;
si2=l13;
si3=l21;
si4=l2;
si5=l5;
sj6=l9;
sj7=-1ULL;
sj6+=sj7;
si0=f1094(i,si0,si1,si2,si3,si4,si5,sj6);
l8=si0;
goto L3;
L52:;
sj0=l9;
sj1=-2ULL;
sj0+=sj1;
l9=sj0;
L51:;
si0=l0;
si1=l1;
si2=l13;
si3=l21;
si4=l2;
si5=l5;
sj6=l9;
si0=f1094(i,si0,si1,si2,si3,si4,si5,sj6);
l8=si0;
goto L3;
L4:;
si0=l6;
si1=112U;
si0+=si1;
sj1=l9;
sj2=0ULL;
sj3=l19;
sj4=0ULL;
f15157(i,si0,sj1,sj2,sj3,sj4);
sj0=l20;
si1=l6;
si2=120U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
sj0+=sj1;
l18=sj0;
sj1=l20;
si0=sj0 >= sj1;
if(si0){
goto L53;
}
sj0=l18;
sj1=l11;
si0=sj0 > sj1;
if(si0){
goto L54;
}
sj0=l19;
si1=l6;
sj1=i64_load(&i->m0,(U64)si1+112U);
si0=sj0 <= sj1;
sj1=l18;
sj2=l11;
si1=sj1 == sj2;
si0&=si1;
si1=1U;
si0=si0 == si1;
if(si0){
goto L54;
}
si0=l0;
si1=l1;
si2=l13;
si3=l21;
si4=l2;
si5=l5;
sj6=l9;
sj7=-1ULL;
sj6+=sj7;
si0=f1095(i,si0,si1,si2,si3,si4,si5,sj6);
l8=si0;
goto L3;
L54:;
sj0=l9;
sj1=-2ULL;
sj0+=sj1;
l9=sj0;
L53:;
si0=l0;
si1=l1;
si2=l13;
si3=l21;
si4=l2;
si5=l5;
sj6=l9;
si0=f1095(i,si0,si1,si2,si3,si4,si5,sj6);
l8=si0;
L3:;
si0=l23;
si0=!(si0);
if(si0){
goto L56;
}
si0=l10;
si1=l1;
si0=si0 >= si1;
if(si0){
goto L57;
}
si0=l0;
si1=l10;
si2=3U;
si1<<=(si2&31);
si0+=si1;
si1=l8;
sj1=(U64)(si1);
i64_store(&i->m0,(U64)si0,sj1);
goto L55;
L57:;
si0=l10;
si1=l1;
si2=1208168U;
f594(i,si0,si1,si2);
UNREACHABLE;
L56:;
si0=l8;
if(si0){
goto L1;
}
L55:;
si0=l2;
f15024(i,si0);
si0=l13;
f15024(i,si0);
L2:;
si0=l6;
si1=176U;
si0+=si1;
i->g0=si0;
goto L0;
L1:;
si0=1208184U;
si1=28U;
si2=1208212U;
f604(i,si0,si1,si2);
UNREACHABLE;
L0:;
}

U64 f1103(rustpythonInstance*i,U32 l0,U32 l1) {
U32 si0,si1,si2;
U64 sj0,sj1;
si0=l1;
if(si0){
goto L1;
}
si0=1206876U;
si1=43U;
si2=1211300U;
f604(i,si0,si1,si2);
UNREACHABLE;
L1:;
si0=l1;
sj0=(U64)(si0);
sj1=6ULL;
sj0<<=(sj1&63);
si1=l1;
si2=3U;
si1<<=(si2&31);
si2=l0;
si1+=si2;
si2=-8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
sj1=I64_CLZ(sj1);
sj0-=sj1;
L0:;
return sj0;
}

U64 f1104(rustpythonInstance*i,U64 l0) {
U64 l1=0;
U64 l2=0;
U64 l3=0;
U64 l4=0;
U32 si0,si1,si2,si3,si4;
U64 sj0,sj1,sj2,sj3,sj4;
sj0=l0;
si0=!(sj0);
si0=!(si0);
if(si0){
goto L1;
}
sj0=0ULL;
goto L0;
L1:;
sj0=l0;
sj0=I64_CLZ(sj0);
sj1=1ULL;
si2=2U;
sj0=f1013(i,sj0,sj1,si2);
l1=sj0;
si0=!(sj0);
si0=!(si0);
if(si0){
goto L5;
}
sj0=0ULL;
l2=sj0;
goto L4;
L5:;
sj0=l1;
sj1=-1ULL;
si0=(U64)((I64)sj0<=(I64)sj1);
if(si0){
goto L3;
}
sj0=l1;
sj1=1ULL;
sj0<<=(sj1&63);
l2=sj0;
L4:;
sj0=l0;
sj1=l2;
sj2=62ULL;
sj1&=sj2;
sj0<<=(sj1&63);
l0=sj0;
sj1=4611686018427387903ULL;
si0=sj0 <= sj1;
if(si0){
goto L2;
}
sj0=l0;
sj1=14ULL;
sj0<<=(sj1&63);
sj1=562949953224704ULL;
sj2=l0;
sj3=31ULL;
sj2>>=(sj3&63);
sj3=l0;
sj4=55ULL;
sj3>>=(sj4&63);
si3=(U32)(sj3);
si4=1U;
si3<<=(si4&31);
si4=1211060U;
si3+=si4;
sj3=i64_load16_u(&i->m0,(U64)si3);
sj4=256ULL;
sj3|=sj4;
l1=sj3;
sj2*=sj3;
sj3=l1;
sj2*=sj3;
sj1-=sj2;
sj2=16ULL;
sj1=(U64)((I64)sj1>>(sj2&63));
sj2=l1;
sj1*=sj2;
sj2=18ULL;
sj1=(U64)((I64)sj1>>(sj2&63));
sj2=l1;
sj3=16ULL;
sj2<<=(sj3&63);
sj1+=sj2;
l1=sj1;
sj2=l0;
sj3=24ULL;
sj2>>=(sj3&63);
sj1*=sj2;
l3=sj1;
sj2=25ULL;
sj1>>=(sj2&63);
l4=sj1;
sj2=l4;
sj1*=sj2;
sj0-=sj1;
sj1=-1099511627776ULL;
sj0+=sj1;
sj1=24ULL;
sj0=(U64)((I64)sj0>>(sj1&63));
sj1=l1;
sj0*=sj1;
sj1=15ULL;
sj0=(U64)((I64)sj0>>(sj1&63));
sj1=l3;
sj0+=sj1;
sj1=32ULL;
sj0>>=(sj1&63);
l1=sj0;
sj1=l1;
sj2=l1;
sj3=2ULL;
sj2+=sj3;
sj1*=sj2;
sj2=l0;
si1=sj1 < sj2;
sj1=(U64)(si1);
sj0+=sj1;
sj1=l2;
sj2=1ULL;
sj1>>=(sj2&63);
sj0>>=(sj1&63);
goto L0;
L3:;
si0=1261688U;
si1=43U;
si2=1261880U;
f604(i,si0,si1,si2);
UNREACHABLE;
L2:;
si0=1212204U;
si1=39U;
si2=1212244U;
f604(i,si0,si1,si2);
UNREACHABLE;
L0:;
return sj0;
}

void f1105(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4,U32 l5,U32 l6,U32 l7,U32 l8) {
U32 si0,si1,si2,si3,si4,si5,si6,si7;
si0=l1;
si1=l2;
si2=l3;
si3=l4;
si4=l5;
si5=l6;
si6=l7;
si7=l8;
f1106(i,si0,si1,si2,si3,si4,si5,si6,si7);
L0:;
}

void f1106(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4,U32 l5,U32 l6,U32 l7) {
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
U64 l22=0;
U64 l23=0;
U32 si0,si1,si2,si3,si4,si5,si6,si7,si8,si9;
U64 sj0,sj1,sj2,sj3,sj4;
si0=l5;
si1=9U;
si0=si0 < si1;
if(si0){
goto L6;
}
si0=l5;
l8=si0;
si0=l5;
si1=13U;
si0=si0 < si1;
if(si0){
goto L14;
}
si0=l5;
sj1=1ULL;
sj2=2ULL;
sj3=3ULL;
si4=l5;
si5=97U;
si4=si4 < si5;
sj2=si4?sj2:sj3;
si3=l5;
si4=49U;
si3=si3 < si4;
sj1=si3?sj1:sj2;
l9=sj1;
si2=3U;
si0=f1012(i,si0,sj1,si2);
l10=si0;
if(si0){
goto L15;
}
si0=0U;
l8=si0;
goto L14;
L15:;
si0=l10;
sj1=l9;
si1=(U32)(sj1);
l11=si1;
si0<<=(si1&31);
l8=si0;
si1=l11;
si0>>=(si1&31);
si1=l10;
si0=si0 != si1;
if(si0){
goto L13;
}
L14:;
si0=8U;
l12=si0;
si0=l5;
si1=l8;
si0+=si1;
si1=l8;
si2=l8;
si3=1U;
si2>>=(si3&31);
si3=l5;
si2=si2 < si3;
si1<<=(si2&31);
si0+=si1;
si1=4U;
si0+=si1;
l10=si0;
si0=!(si0);
if(si0){
goto L16;
}
si0=l10;
si1=268435455U;
si0=si0 > si1;
if(si0){
goto L12;
}
si0=l10;
si1=3U;
si0<<=(si1&31);
l11=si0;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L12;
}
si0=l11;
si0=!(si0);
if(si0){
goto L16;
}
si0=l11;
si1=1U;
si0=f15026(i,si0,si1);
l12=si0;
si0=!(si0);
if(si0){
goto L11;
}
L16:;
si0=l10;
si1=l5;
si0=si0 < si1;
if(si0){
goto L10;
}
si0=l5;
si1=l3;
si0=si0 > si1;
if(si0){
goto L9;
}
si0=l5;
si1=l7;
si0=si0 > si1;
if(si0){
goto L8;
}
si0=l12;
si1=l5;
si2=l2;
si3=l5;
si4=l6;
si5=l5;
f1201(i,si0,si1,si2,si3,si4,si5);
si0=l10;
si1=l5;
si0-=si1;
l13=si0;
si1=l8;
si0=si0 < si1;
if(si0){
goto L7;
}
si0=l12;
si1=l5;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l14=si0;
si1=l8;
si2=l8;
si3=l12;
si4=l5;
si5=l4;
si6=l5;
si7=l14;
si8=l8;
si9=3U;
si8<<=(si9&31);
si7+=si8;
l15=si7;
si8=l13;
si9=l8;
si8-=si9;
l10=si8;
f1157(i,si0,si1,si2,si3,si4,si5,si6,si7,si8);
si0=l5;
si1=1U;
si0<<=(si1&31);
l16=si0;
si1=l8;
si0=si0 <= si1;
if(si0){
goto L2;
}
si0=l16;
si1=l8;
si0-=si1;
l17=si0;
si1=l8;
si0=si0 > si1;
if(si0){
goto L5;
}
si0=l17;
si1=l3;
si0=si0 > si1;
if(si0){
goto L4;
}
si0=l17;
si1=l10;
si0=si0 > si1;
if(si0){
goto L19;
}
si0=l17;
si1=1U;
si0&=si1;
l18=si0;
si0=l16;
si1=l8;
si2=1U;
si1+=si2;
si0=si0 != si1;
if(si0){
goto L18;
}
si0=0U;
l6=si0;
si0=0U;
l10=si0;
goto L17;
L19:;
si0=1202809U;
si1=34U;
si2=1203412U;
f604(i,si0,si1,si2);
UNREACHABLE;
L18:;
si0=l8;
si1=3U;
si0<<=(si1&31);
l19=si0;
si0=0U;
l11=si0;
si0=0U;
si1=l17;
si2=-2U;
si1&=si2;
si0-=si1;
l20=si0;
si0=l14;
l10=si0;
si0=l2;
l7=si0;
si0=0U;
l6=si0;
L20:;
{
si0=l10;
si1=l19;
si0+=si1;
l21=si0;
si1=l10;
sj1=i64_load(&i->m0,(U64)si1);
l9=sj1;
si2=l6;
sj2=(U64)(si2);
sj3=1ULL;
sj2&=sj3;
sj1-=sj2;
si2=l7;
sj2=i64_load(&i->m0,(U64)si2);
l22=sj2;
sj1-=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l21;
si1=8U;
si0+=si1;
si1=l10;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
l23=sj1;
sj2=l9;
sj3=l22;
si2=sj2 <= sj3;
sj3=l9;
sj4=l22;
si3=sj3 < sj4;
si4=l6;
si5=1U;
si4&=si5;
si2=si4?si2:si3;
l6=si2;
sj2=(U64)(si2);
sj1-=sj2;
si2=l7;
si3=8U;
si2+=si3;
sj2=i64_load(&i->m0,(U64)si2);
l9=sj2;
sj1-=sj2;
i64_store(&i->m0,(U64)si0,sj1);
sj0=l23;
sj1=l9;
si0=sj0 <= sj1;
sj1=l23;
sj2=l9;
si1=sj1 < sj2;
si2=l6;
si0=si2?si0:si1;
l6=si0;
si0=l10;
si1=16U;
si0+=si1;
l10=si0;
si0=l7;
si1=16U;
si0+=si1;
l7=si0;
si0=l20;
si1=l11;
si2=-2U;
si1+=si2;
l11=si1;
si0=si0 != si1;
if(si0){
goto L20;
}
}
si0=0U;
si1=l11;
si0-=si1;
l10=si0;
L17:;
si0=l18;
si0=!(si0);
if(si0){
goto L21;
}
si0=l15;
si1=l10;
si2=3U;
si1<<=(si2&31);
l10=si1;
si0+=si1;
si1=l14;
si2=l10;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
l9=sj1;
si2=l6;
sj2=(U64)(si2);
sj1-=sj2;
si2=l2;
si3=l10;
si2+=si3;
sj2=i64_load(&i->m0,(U64)si2);
l22=sj2;
sj1-=sj2;
i64_store(&i->m0,(U64)si0,sj1);
sj0=l9;
sj1=l22;
si0=sj0 <= sj1;
sj1=l9;
sj2=l22;
si1=sj1 < sj2;
si2=l6;
si0=si2?si0:si1;
l6=si0;
L21:;
si0=l16;
si1=l13;
si0=si0 > si1;
if(si0){
goto L3;
}
si0=l6;
si1=1U;
si0&=si1;
si0=!(si0);
if(si0){
goto L1;
}
si0=l8;
si0=!(si0);
if(si0){
goto L22;
}
si0=l14;
si1=l17;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l10=si0;
si1=l10;
sj1=i64_load(&i->m0,(U64)si1);
l9=sj1;
sj2=-1ULL;
sj1+=sj2;
i64_store(&i->m0,(U64)si0,sj1);
sj0=l9;
sj1=0ULL;
si0=sj0 != sj1;
if(si0){
goto L1;
}
si0=l14;
si1=l16;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l6=si0;
si0=8U;
si1=l8;
si2=3U;
si1<<=(si2&31);
si0-=si1;
l10=si0;
L23:;
{
si0=l10;
si0=!(si0);
if(si0){
goto L22;
}
si0=l6;
si1=l10;
si0+=si1;
l7=si0;
si1=l7;
sj1=i64_load(&i->m0,(U64)si1);
l9=sj1;
sj2=-1ULL;
sj1+=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l10;
si1=8U;
si0+=si1;
l10=si0;
sj0=l9;
si0=!(sj0);
si0=!(si0);
if(si0){
goto L1;
}
goto L23;
}
L22:;
si0=1213740U;
si1=64U;
si2=1213804U;
f604(i,si0,si1,si2);
UNREACHABLE;
L13:;
si0=1261688U;
si1=43U;
si2=1261880U;
f604(i,si0,si1,si2);
UNREACHABLE;
L12:;
f53(i);
UNREACHABLE;
L11:;
si0=8U;
si1=l11;
f52(i,si0,si1);
UNREACHABLE;
L10:;
si0=1212264U;
si1=35U;
si2=1213612U;
f604(i,si0,si1,si2);
UNREACHABLE;
L9:;
si0=l5;
si1=l3;
si2=1213628U;
f597(i,si0,si1,si2);
UNREACHABLE;
L8:;
si0=l5;
si1=l7;
si2=1213644U;
f597(i,si0,si1,si2);
UNREACHABLE;
L7:;
si0=1212264U;
si1=35U;
si2=1213660U;
f604(i,si0,si1,si2);
UNREACHABLE;
L6:;
si0=1213868U;
si1=28U;
si2=1213896U;
f604(i,si0,si1,si2);
UNREACHABLE;
L5:;
si0=l17;
si1=l8;
si2=1213676U;
f597(i,si0,si1,si2);
UNREACHABLE;
L4:;
si0=l17;
si1=l3;
si2=1213692U;
f597(i,si0,si1,si2);
UNREACHABLE;
L3:;
si0=l16;
si1=l13;
si2=1213708U;
f597(i,si0,si1,si2);
UNREACHABLE;
L2:;
si0=1213820U;
si1=32U;
si2=1213852U;
f604(i,si0,si1,si2);
UNREACHABLE;
L1:;
si0=l5;
si1=0U;
si0=(U32)((I32)si0<(I32)si1);
if(si0){
goto L24;
}
si0=l16;
si1=l3;
si0=si0 <= si1;
if(si0){
goto L25;
}
si0=l16;
si1=l3;
si2=1213724U;
f597(i,si0,si1,si2);
UNREACHABLE;
L25:;
si0=l5;
si1=l1;
si0=si0 > si1;
if(si0){
goto L28;
}
si0=l14;
si1=l5;
si2=3U;
si1<<=(si2&31);
l10=si1;
si0+=si1;
l20=si0;
si0=l2;
si1=l10;
si0+=si1;
l8=si0;
si0=l5;
si1=1U;
si0&=si1;
l17=si0;
si0=l5;
si1=1U;
si0=si0 != si1;
if(si0){
goto L27;
}
si0=0U;
l7=si0;
si0=0U;
l6=si0;
goto L26;
L28:;
si0=1202809U;
si1=34U;
si2=1203412U;
f604(i,si0,si1,si2);
UNREACHABLE;
L27:;
si0=l5;
si1=-2U;
si0&=si1;
l16=si0;
si0=0U;
l10=si0;
si0=0U;
l7=si0;
si0=0U;
l6=si0;
L29:;
{
si0=l0;
si1=l10;
si0+=si1;
l11=si0;
si1=l8;
si2=l10;
si1+=si2;
l21=si1;
sj1=i64_load(&i->m0,(U64)si1);
l9=sj1;
si2=l7;
sj2=(U64)(si2);
sj3=1ULL;
sj2&=sj3;
sj1-=sj2;
si2=l20;
si3=l10;
si2+=si3;
l19=si2;
sj2=i64_load(&i->m0,(U64)si2);
l22=sj2;
sj1-=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l11;
si1=8U;
si0+=si1;
si1=l21;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
l23=sj1;
sj2=l9;
sj3=l22;
si2=sj2 <= sj3;
sj3=l9;
sj4=l22;
si3=sj3 < sj4;
si4=l7;
si5=1U;
si4&=si5;
si2=si4?si2:si3;
l7=si2;
sj2=(U64)(si2);
sj1-=sj2;
si2=l19;
si3=8U;
si2+=si3;
sj2=i64_load(&i->m0,(U64)si2);
l9=sj2;
sj1-=sj2;
i64_store(&i->m0,(U64)si0,sj1);
sj0=l23;
sj1=l9;
si0=sj0 <= sj1;
sj1=l23;
sj2=l9;
si1=sj1 < sj2;
si2=l7;
si0=si2?si0:si1;
l7=si0;
si0=l10;
si1=16U;
si0+=si1;
l10=si0;
si0=l16;
si1=l6;
si2=2U;
si1+=si2;
l6=si1;
si0=si0 != si1;
if(si0){
goto L29;
}
}
L26:;
si0=l17;
si0=!(si0);
if(si0){
goto L30;
}
si0=l0;
si1=l6;
si2=3U;
si1<<=(si2&31);
l10=si1;
si0+=si1;
si1=l8;
si2=l10;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
l9=sj1;
si2=l7;
sj2=(U64)(si2);
sj1-=sj2;
si2=l20;
si3=l10;
si2+=si3;
sj2=i64_load(&i->m0,(U64)si2);
l22=sj2;
sj1-=sj2;
i64_store(&i->m0,(U64)si0,sj1);
sj0=l9;
sj1=l22;
si0=sj0 <= sj1;
sj1=l9;
sj2=l22;
si1=sj1 < sj2;
si2=l7;
si0=si2?si0:si1;
l7=si0;
L30:;
si0=l7;
si1=1U;
si0&=si1;
si0=!(si0);
if(si0){
goto L31;
}
si0=0U;
l10=si0;
L32:;
{
si0=l0;
sj0=i64_load(&i->m0,(U64)si0);
l22=sj0;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1);
sj0+=sj1;
l9=sj0;
sj1=l22;
si0=sj0 < sj1;
l7=si0;
si0=l10;
si1=255U;
si0&=si1;
if(si0){
goto L34;
}
si0=l7;
l10=si0;
goto L33;
L34:;
si0=l7;
sj1=l9;
sj2=1ULL;
sj1+=sj2;
l9=sj1;
si1=!(sj1);
si0|=si1;
l10=si0;
L33:;
si0=l0;
sj1=l9;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=8U;
si0+=si1;
l0=si0;
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
si0=l12;
f15024(i,si0);
goto L0;
L24:;
si0=l5;
si1=l16;
si2=1213724U;
f683(i,si0,si1,si2);
UNREACHABLE;
L0:;
}

void f1107(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4) {
U32 si0,si1,si2,si3;
si0=l1;
si1=l2;
si2=l3;
si3=l4;
f1071(i,si0,si1,si2,si3);
L0:;
}

void f1108(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4,U32 l5,U32 l6) {
U32 si0,si1,si2,si3,si4,si5;
si0=l1;
si1=l2;
si2=l3;
si3=l4;
si4=l5;
si5=l6;
f1109(i,si0,si1,si2,si3,si4,si5);
L0:;
}

void f1109(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4,U32 l5) {
U32 l6=0;
U64 l7=0;
U32 l8=0;
U32 l9=0;
U32 l10=0;
U64 l11=0;
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
U64 l22=0;
U32 si0,si1,si2,si3,si4;
U64 sj0,sj1,sj2,sj3,sj4;
si0=i->g0;
si1=128U;
si0-=si1;
l6=si0;
i->g0=si0;
si0=l6;
si1=l5;
i32_store(&i->m0,(U64)si0+100U,si1);
si0=l5;
si0=!(si0);
if(si0){
goto L6;
}
si0=l3;
si1=l5;
si0=si0 < si1;
if(si0){
goto L5;
}
si0=l5;
si1=l3;
si0+=si1;
si1=l1;
si0=si0 > si1;
if(si0){
goto L4;
}
si0=l3;
si1=l1;
si0=si0 > si1;
if(si0){
goto L9;
}
si0=l4;
sj0=i64_load(&i->m0,(U64)si0);
l7=sj0;
si0=l3;
si1=1U;
si0&=si1;
l8=si0;
si0=l3;
si1=-1U;
si0+=si1;
l9=si0;
if(si0){
goto L8;
}
si0=0U;
l10=si0;
sj0=0ULL;
l11=sj0;
goto L7;
L9:;
si0=l3;
si1=l1;
si2=1200152U;
f597(i,si0,si1,si2);
UNREACHABLE;
L8:;
si0=l3;
si1=-2U;
si0&=si1;
l12=si0;
si0=0U;
l10=si0;
si0=l2;
l13=si0;
si0=l0;
l14=si0;
sj0=0ULL;
l11=sj0;
L10:;
{
si0=l6;
si1=64U;
si0+=si1;
si1=l13;
sj1=i64_load(&i->m0,(U64)si1);
sj2=0ULL;
sj3=l7;
sj4=0ULL;
f15157(i,si0,sj1,sj2,sj3,sj4);
si0=l14;
si1=l6;
sj1=i64_load(&i->m0,(U64)si1+64U);
l15=sj1;
sj2=l11;
sj1+=sj2;
l11=sj1;
i64_store(&i->m0,(U64)si0,sj1);
si0=l6;
si1=80U;
si0+=si1;
si1=l13;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
sj2=0ULL;
sj3=l7;
sj4=0ULL;
f15157(i,si0,sj1,sj2,sj3,sj4);
si0=l14;
si1=8U;
si0+=si1;
si1=l6;
sj1=i64_load(&i->m0,(U64)si1+80U);
l16=sj1;
si2=l6;
si3=64U;
si2+=si3;
si3=8U;
si2+=si3;
sj2=i64_load(&i->m0,(U64)si2);
sj3=l11;
sj4=l15;
si3=sj3 < sj4;
sj3=(U64)(si3);
sj2+=sj3;
sj1+=sj2;
l11=sj1;
i64_store(&i->m0,(U64)si0,sj1);
si0=l13;
si1=16U;
si0+=si1;
l13=si0;
si0=l14;
si1=16U;
si0+=si1;
l14=si0;
si0=l6;
si1=80U;
si0+=si1;
si1=8U;
si0+=si1;
sj0=i64_load(&i->m0,(U64)si0);
sj1=l11;
sj2=l16;
si1=sj1 < sj2;
sj1=(U64)(si1);
sj0+=sj1;
l11=sj0;
si0=l12;
si1=l10;
si2=2U;
si1+=si2;
l10=si1;
si0=si0 != si1;
if(si0){
goto L10;
}
}
L7:;
si0=l8;
si0=!(si0);
if(si0){
goto L11;
}
si0=l6;
si1=48U;
si0+=si1;
si1=l2;
si2=l10;
si3=3U;
si2<<=(si3&31);
l13=si2;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
sj2=0ULL;
sj3=l7;
sj4=0ULL;
f15157(i,si0,sj1,sj2,sj3,sj4);
si0=l0;
si1=l13;
si0+=si1;
si1=l6;
sj1=i64_load(&i->m0,(U64)si1+48U);
l7=sj1;
sj2=l11;
sj1+=sj2;
l11=sj1;
i64_store(&i->m0,(U64)si0,sj1);
si0=l6;
si1=56U;
si0+=si1;
sj0=i64_load(&i->m0,(U64)si0);
sj1=l11;
sj2=l7;
si1=sj1 < sj2;
sj1=(U64)(si1);
sj0+=sj1;
l11=sj0;
L11:;
si0=l3;
si1=l1;
si0=si0 >= si1;
if(si0){
goto L1;
}
si0=l0;
si1=l3;
si2=3U;
si1<<=(si2&31);
l17=si1;
si0+=si1;
sj1=l11;
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=2U;
si0=si0 < si1;
if(si0){
goto L12;
}
si0=l3;
si1=1U;
si0+=si1;
l18=si0;
si0=l0;
si1=16U;
si0+=si1;
l19=si0;
si0=l3;
si1=-2U;
si0&=si1;
l8=si0;
si0=l3;
si1=1U;
si0&=si1;
l20=si0;
si0=1U;
l3=si0;
L13:;
{
si0=l18;
si1=l3;
si0+=si1;
l13=si0;
si1=l18;
si0=si0 < si1;
if(si0){
goto L3;
}
si0=l13;
si1=l1;
si0=si0 > si1;
if(si0){
goto L2;
}
si0=l4;
si1=l3;
si2=3U;
si1<<=(si2&31);
l21=si1;
si0+=si1;
sj0=i64_load(&i->m0,(U64)si0);
l15=sj0;
si0=l9;
if(si0){
goto L15;
}
sj0=0ULL;
l11=sj0;
si0=0U;
l10=si0;
sj0=0ULL;
l22=sj0;
goto L14;
L15:;
sj0=0ULL;
l22=sj0;
si0=0U;
l10=si0;
si0=l2;
l14=si0;
si0=l19;
l13=si0;
sj0=0ULL;
l11=sj0;
L16:;
{
si0=l6;
si1=16U;
si0+=si1;
si1=l14;
sj1=i64_load(&i->m0,(U64)si1);
sj2=0ULL;
sj3=l15;
sj4=0ULL;
f15157(i,si0,sj1,sj2,sj3,sj4);
si0=l13;
si1=-8U;
si0+=si1;
l12=si0;
sj1=l11;
si2=l12;
sj2=i64_load(&i->m0,(U64)si2);
sj1+=sj2;
l7=sj1;
si2=l6;
sj2=i64_load(&i->m0,(U64)si2+16U);
sj1+=sj2;
l16=sj1;
i64_store(&i->m0,(U64)si0,sj1);
si0=l6;
si1=32U;
si0+=si1;
si1=l14;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
sj2=0ULL;
sj3=l15;
sj4=0ULL;
f15157(i,si0,sj1,sj2,sj3,sj4);
si0=l13;
sj1=0ULL;
sj2=l7;
sj3=l11;
si2=sj2 < sj3;
sj2=(U64)(si2);
sj1+=sj2;
si2=l6;
si3=16U;
si2+=si3;
si3=8U;
si2+=si3;
sj2=i64_load(&i->m0,(U64)si2);
sj1+=sj2;
sj2=l16;
sj3=l7;
si2=sj2 < sj3;
sj2=(U64)(si2);
sj1+=sj2;
l7=sj1;
si2=l13;
sj2=i64_load(&i->m0,(U64)si2);
sj1+=sj2;
l11=sj1;
si2=l6;
sj2=i64_load(&i->m0,(U64)si2+32U);
sj1+=sj2;
l16=sj1;
i64_store(&i->m0,(U64)si0,sj1);
sj0=l11;
sj1=l7;
si0=sj0 < sj1;
sj0=(U64)(si0);
si1=l6;
si2=32U;
si1+=si2;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
sj0+=sj1;
sj1=l16;
sj2=l11;
si1=sj1 < sj2;
sj1=(U64)(si1);
sj0+=sj1;
l11=sj0;
si0=l14;
si1=16U;
si0+=si1;
l14=si0;
si0=l13;
si1=16U;
si0+=si1;
l13=si0;
si0=l8;
si1=l10;
si2=2U;
si1+=si2;
l10=si1;
si0=si0 != si1;
if(si0){
goto L16;
}
}
L14:;
si0=l0;
si1=l21;
si0+=si1;
l13=si0;
si0=l20;
si0=!(si0);
if(si0){
goto L17;
}
si0=l6;
si1=l2;
si2=l10;
si3=3U;
si2<<=(si3&31);
l14=si2;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
sj2=0ULL;
sj3=l15;
sj4=0ULL;
f15157(i,si0,sj1,sj2,sj3,sj4);
si0=l13;
si1=l14;
si0+=si1;
l14=si0;
sj1=l11;
si2=l14;
sj2=i64_load(&i->m0,(U64)si2);
sj1+=sj2;
l7=sj1;
si2=l6;
sj2=i64_load(&i->m0,(U64)si2);
sj1+=sj2;
l15=sj1;
i64_store(&i->m0,(U64)si0,sj1);
sj0=l22;
sj1=l7;
sj2=l11;
si1=sj1 < sj2;
sj1=(U64)(si1);
sj0+=sj1;
si1=l6;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
sj0+=sj1;
sj1=l15;
sj2=l7;
si1=sj1 < sj2;
sj1=(U64)(si1);
sj0+=sj1;
l11=sj0;
L17:;
si0=l13;
si1=l17;
si0+=si1;
sj1=l11;
i64_store(&i->m0,(U64)si0,sj1);
si0=l19;
si1=8U;
si0+=si1;
l19=si0;
si0=l3;
si1=1U;
si0+=si1;
l3=si0;
si1=l5;
si0=si0 != si1;
if(si0){
goto L13;
}
}
L12:;
si0=l6;
si1=128U;
si0+=si1;
i->g0=si0;
goto L0;
L6:;
si0=l6;
si1=0U;
i32_store(&i->m0,(U64)si0+104U,si1);
si0=1U;
si1=l6;
si2=100U;
si1+=si2;
si2=1212260U;
si3=l6;
si4=104U;
si3+=si4;
si4=1217136U;
f1250(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L5:;
si0=1216560U;
si1=34U;
si2=1217200U;
f604(i,si0,si1,si2);
UNREACHABLE;
L4:;
si0=1217056U;
si1=46U;
si2=1217184U;
f604(i,si0,si1,si2);
UNREACHABLE;
L3:;
si0=l3;
si1=l13;
si2=1217168U;
f683(i,si0,si1,si2);
UNREACHABLE;
L2:;
si0=l13;
si1=l1;
si2=1217168U;
f597(i,si0,si1,si2);
UNREACHABLE;
L1:;
si0=l3;
si1=l1;
si2=1217152U;
f594(i,si0,si1,si2);
UNREACHABLE;
L0:;
}

void f1110(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4,U32 l5,U32 l6,U32 l7,U32 l8) {
U32 si0,si1,si2,si3,si4,si5,si6,si7;
si0=l1;
si1=l2;
si2=l3;
si3=l4;
si4=l5;
si5=l6;
si6=l7;
si7=l8;
f1111(i,si0,si1,si2,si3,si4,si5,si6,si7);
L0:;
}

void f1111(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4,U32 l5,U32 l6,U32 l7) {
U32 l8=0;
U64 l9=0;
U32 l10=0;
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
U32 si0,si1,si2,si3,si4,si5;
U64 sj0,sj1,sj2,sj3,sj4;
si0=i->g0;
si1=80U;
si0-=si1;
l8=si0;
i->g0=si0;
si0=l7;
si0=!(si0);
if(si0){
goto L7;
}
si0=l6;
sj0=i64_load(&i->m0,(U64)si0);
l9=sj0;
si0=l8;
si1=l5;
i32_store(&i->m0,(U64)si0+52U,si1);
si0=l5;
si0=!(si0);
if(si0){
goto L6;
}
si0=l5;
si1=1U;
si0<<=(si1&31);
l10=si0;
si1=l3;
si0=si0 > si1;
if(si0){
goto L1;
}
si0=l5;
si1=-2U;
si0&=si1;
l11=si0;
si0=l5;
si1=1U;
si0&=si1;
l12=si0;
si0=l5;
si1=-1U;
si0+=si1;
l13=si0;
si0=0U;
l14=si0;
si0=l2;
l15=si0;
L8:;
{
si0=l10;
si0=!(si0);
if(si0){
goto L4;
}
si0=l10;
si1=l5;
si0=si0 < si1;
if(si0){
goto L5;
}
si0=l15;
sj0=i64_load(&i->m0,(U64)si0);
sj1=l9;
sj0*=sj1;
l16=sj0;
si0=l13;
if(si0){
goto L10;
}
sj0=0ULL;
l17=sj0;
si0=0U;
l3=si0;
sj0=0ULL;
l18=sj0;
goto L9;
L10:;
sj0=0ULL;
l18=sj0;
si0=0U;
l7=si0;
sj0=0ULL;
l17=sj0;
si0=0U;
l3=si0;
L11:;
{
si0=l8;
si1=16U;
si0+=si1;
si1=l4;
si2=l7;
si1+=si2;
l19=si1;
sj1=i64_load(&i->m0,(U64)si1);
sj2=0ULL;
sj3=l16;
sj4=0ULL;
f15157(i,si0,sj1,sj2,sj3,sj4);
si0=l15;
si1=l7;
si0+=si1;
l6=si0;
sj1=l17;
si2=l6;
sj2=i64_load(&i->m0,(U64)si2);
sj1+=sj2;
l20=sj1;
si2=l8;
sj2=i64_load(&i->m0,(U64)si2+16U);
sj1+=sj2;
l21=sj1;
i64_store(&i->m0,(U64)si0,sj1);
si0=l8;
si1=32U;
si0+=si1;
si1=l19;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
sj2=0ULL;
sj3=l16;
sj4=0ULL;
f15157(i,si0,sj1,sj2,sj3,sj4);
si0=l6;
si1=8U;
si0+=si1;
l6=si0;
sj1=0ULL;
sj2=l20;
sj3=l17;
si2=sj2 < sj3;
sj2=(U64)(si2);
sj1+=sj2;
si2=l8;
si3=16U;
si2+=si3;
si3=8U;
si2+=si3;
sj2=i64_load(&i->m0,(U64)si2);
sj1+=sj2;
sj2=l21;
sj3=l20;
si2=sj2 < sj3;
sj2=(U64)(si2);
sj1+=sj2;
l20=sj1;
si2=l6;
sj2=i64_load(&i->m0,(U64)si2);
sj1+=sj2;
l17=sj1;
si2=l8;
sj2=i64_load(&i->m0,(U64)si2+32U);
sj1+=sj2;
l21=sj1;
i64_store(&i->m0,(U64)si0,sj1);
sj0=l17;
sj1=l20;
si0=sj0 < sj1;
sj0=(U64)(si0);
si1=l8;
si2=32U;
si1+=si2;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
sj0+=sj1;
sj1=l21;
sj2=l17;
si1=sj1 < sj2;
sj1=(U64)(si1);
sj0+=sj1;
l17=sj0;
si0=l7;
si1=16U;
si0+=si1;
l7=si0;
si0=l11;
si1=l3;
si2=2U;
si1+=si2;
l3=si1;
si0=si0 != si1;
if(si0){
goto L11;
}
}
L9:;
si0=l12;
si0=!(si0);
if(si0){
goto L12;
}
si0=l8;
si1=l4;
si2=l3;
si3=3U;
si2<<=(si3&31);
l7=si2;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
sj2=0ULL;
sj3=l16;
sj4=0ULL;
f15157(i,si0,sj1,sj2,sj3,sj4);
si0=l15;
si1=l7;
si0+=si1;
l7=si0;
sj1=l17;
si2=l7;
sj2=i64_load(&i->m0,(U64)si2);
sj1+=sj2;
l20=sj1;
si2=l8;
sj2=i64_load(&i->m0,(U64)si2);
sj1+=sj2;
l16=sj1;
i64_store(&i->m0,(U64)si0,sj1);
sj0=l18;
sj1=l20;
sj2=l17;
si1=sj1 < sj2;
sj1=(U64)(si1);
sj0+=sj1;
si1=l8;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
sj0+=sj1;
sj1=l16;
sj2=l20;
si1=sj1 < sj2;
sj1=(U64)(si1);
sj0+=sj1;
l17=sj0;
L12:;
si0=l15;
sj0=i64_load(&i->m0,(U64)si0);
si0=!(sj0);
si0=!(si0);
if(si0){
goto L3;
}
si0=l15;
sj1=l17;
i64_store(&i->m0,(U64)si0,sj1);
si0=l15;
si1=8U;
si0+=si1;
l15=si0;
si0=l10;
si1=-1U;
si0+=si1;
l10=si0;
si0=l14;
si1=1U;
si0+=si1;
l14=si0;
si1=l5;
si0=si0 == si1;
if(si0){
goto L2;
}
goto L8;
}
L7:;
si0=0U;
si1=0U;
si2=1213976U;
f594(i,si0,si1,si2);
UNREACHABLE;
L6:;
si0=l8;
si1=0U;
i32_store(&i->m0,(U64)si0+56U,si1);
si0=1U;
si1=l8;
si2=52U;
si1+=si2;
si2=1212260U;
si3=l8;
si4=56U;
si3+=si4;
si4=1213516U;
f1250(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L5:;
si0=l5;
si1=l10;
si2=1213580U;
f597(i,si0,si1,si2);
UNREACHABLE;
L4:;
si0=0U;
si1=0U;
si2=1213564U;
f594(i,si0,si1,si2);
UNREACHABLE;
L3:;
si0=l8;
si1=0U;
i32_store(&i->m0,(U64)si0+56U,si1);
si0=0U;
si1=l15;
si2=1212704U;
si3=l8;
si4=56U;
si3+=si4;
si4=1213596U;
f1251(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L2:;
si0=l5;
si1=-1U;
si0=(U32)((I32)si0>(I32)si1);
if(si0){
goto L13;
}
si0=1212264U;
si1=35U;
si2=1213548U;
f604(i,si0,si1,si2);
UNREACHABLE;
L13:;
si0=l5;
si1=l1;
si0=si0 > si1;
if(si0){
goto L14;
}
si0=l5;
si1=3U;
si0<<=(si1&31);
l15=si0;
si0=0U;
l6=si0;
si0=l5;
l3=si0;
si0=l0;
l7=si0;
L15:;
{
si0=l2;
si1=l15;
si0+=si1;
sj0=i64_load(&i->m0,(U64)si0);
l20=sj0;
si1=l2;
sj1=i64_load(&i->m0,(U64)si1);
sj0+=sj1;
l17=sj0;
sj1=l20;
si0=sj0 < sj1;
l19=si0;
si0=l6;
si1=255U;
si0&=si1;
if(si0){
goto L17;
}
si0=l19;
l6=si0;
goto L16;
L17:;
si0=l19;
sj1=l17;
sj2=1ULL;
sj1+=sj2;
l17=sj1;
si1=!(sj1);
si0|=si1;
l6=si0;
L16:;
si0=l7;
sj1=l17;
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=8U;
si0+=si1;
l2=si0;
si0=l7;
si1=8U;
si0+=si1;
l7=si0;
si0=l3;
si1=-1U;
si0+=si1;
l3=si0;
if(si0){
goto L15;
}
}
si0=l6;
si0=!(si0);
if(si0){
goto L18;
}
si0=l5;
si1=1U;
si0&=si1;
l2=si0;
si0=l13;
if(si0){
goto L20;
}
si0=0U;
l19=si0;
sj0=0ULL;
l17=sj0;
goto L19;
L20:;
si0=l5;
si1=-2U;
si0&=si1;
l11=si0;
si0=0U;
l3=si0;
si0=l4;
l6=si0;
si0=l0;
l7=si0;
si0=0U;
l19=si0;
L21:;
{
si0=l7;
si1=l7;
sj1=i64_load(&i->m0,(U64)si1);
l17=sj1;
si2=l3;
sj2=(U64)(si2);
sj3=1ULL;
sj2&=sj3;
si3=l6;
sj3=i64_load(&i->m0,(U64)si3);
l20=sj3;
sj2+=sj3;
sj1-=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l7;
si1=8U;
si0+=si1;
l15=si0;
si1=l15;
sj1=i64_load(&i->m0,(U64)si1);
l16=sj1;
sj2=l17;
sj3=l20;
si2=sj2 <= sj3;
sj3=l17;
sj4=l20;
si3=sj3 < sj4;
si4=l3;
si5=1U;
si4&=si5;
si2=si4?si2:si3;
l3=si2;
sj2=(U64)(si2);
si3=l6;
si4=8U;
si3+=si4;
sj3=i64_load(&i->m0,(U64)si3);
l17=sj3;
sj2+=sj3;
sj1-=sj2;
i64_store(&i->m0,(U64)si0,sj1);
sj0=l16;
sj1=l17;
si0=sj0 <= sj1;
sj1=l16;
sj2=l17;
si1=sj1 < sj2;
si2=l3;
si0=si2?si0:si1;
l3=si0;
si0=l6;
si1=16U;
si0+=si1;
l6=si0;
si0=l7;
si1=16U;
si0+=si1;
l7=si0;
si0=l11;
si1=l19;
si2=2U;
si1+=si2;
l19=si1;
si0=si0 != si1;
if(si0){
goto L21;
}
}
sj0=0ULL;
si1=l3;
sj1=(U64)(si1);
sj0-=sj1;
l17=sj0;
L19:;
si0=l2;
si0=!(si0);
if(si0){
goto L18;
}
si0=l0;
si1=l19;
si2=3U;
si1<<=(si2&31);
l7=si1;
si0+=si1;
l6=si0;
sj1=l17;
si2=l4;
si3=l7;
si2+=si3;
sj2=i64_load(&i->m0,(U64)si2);
sj1-=sj2;
si2=l6;
sj2=i64_load(&i->m0,(U64)si2);
sj1+=sj2;
i64_store(&i->m0,(U64)si0,sj1);
L18:;
si0=l8;
si1=80U;
si0+=si1;
i->g0=si0;
goto L0;
L14:;
si0=1202809U;
si1=34U;
si2=1202976U;
f604(i,si0,si1,si2);
UNREACHABLE;
L1:;
si0=l10;
si1=l3;
si2=1213532U;
f597(i,si0,si1,si2);
UNREACHABLE;
L0:;
}

void f1112(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4,U32 l5,U32 l6,U32 l7,U32 l8) {
U32 si0,si1,si2,si3,si4,si5,si6,si7;
si0=l1;
si1=l2;
si2=l3;
si3=l4;
si4=l5;
si5=l6;
si6=l7;
si7=l8;
f1106(i,si0,si1,si2,si3,si4,si5,si6,si7);
L0:;
}

void f1113(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4,U32 l5,U32 l6,U32 l7,U32 l8) {
U32 si0,si1,si2,si3,si4,si5,si6,si7;
si0=l1;
si1=l2;
si2=l3;
si3=l4;
si4=l5;
si5=l6;
si6=l7;
si7=l8;
f1111(i,si0,si1,si2,si3,si4,si5,si6,si7);
L0:;
}

void f1114(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4,U32 l5,U32 l6,U32 l7,U32 l8) {
U32 si0,si1,si2,si3,si4,si5,si6,si7;
si0=l1;
si1=l2;
si2=l3;
si3=l4;
si4=l5;
si5=l6;
si6=l7;
si7=l8;
f1106(i,si0,si1,si2,si3,si4,si5,si6,si7);
L0:;
}

void f1115(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4,U32 l5,U32 l6,U32 l7,U32 l8) {
U32 si0,si1,si2,si3,si4,si5,si6,si7;
si0=l1;
si1=l2;
si2=l3;
si3=l4;
si4=l5;
si5=l6;
si6=l7;
si7=l8;
f1111(i,si0,si1,si2,si3,si4,si5,si6,si7);
L0:;
}

void f1116(rustpythonInstance*i,U32 l0) {
L0:;
}

U64 f1117(rustpythonInstance*i,U32 l0,U32 l1,U64 l2) {
U32 l3=0;
U32 l4=0;
U64 l5=0;
U64 l6=0;
U64 l7=0;
U64 l8=0;
U64 l9=0;
U32 l10=0;
U64 l11=0;
U32 l12=0;
U32 l13=0;
U64 l14=0;
U64 l15=0;
U64 l16=0;
U32 si0,si1,si2,si3,si4,si5,si6;
U64 sj0,sj1,sj2,sj3,sj4,sj5,sj6,sj7;
si0=i->g0;
si1=208U;
si0-=si1;
l3=si0;
i->g0=si0;
si0=l3;
sj1=l2;
i64_store(&i->m0,(U64)si0+176U,sj1);
sj0=l2;
sj1=0ULL;
si0=sj0 == sj1;
if(si0){
goto L6;
}
si0=l1;
si1=2U;
si0=si0 < si1;
if(si0){
goto L5;
}
si0=l0;
si1=l1;
si2=-1U;
si1+=si2;
l4=si1;
si2=3U;
si1<<=(si2&31);
si0+=si1;
sj0=i64_load(&i->m0,(U64)si0);
l5=sj0;
sj0=l2;
sj0=I64_CLZ(sj0);
l6=sj0;
si0=!(sj0);
si0=!(si0);
if(si0){
goto L7;
}
si0=l3;
si1=64U;
si0+=si1;
sj1=-1ULL;
sj2=l2;
sj3=-1ULL;
sj2^=sj3;
sj3=l2;
sj4=0ULL;
f15155(i,si0,sj1,sj2,sj3,sj4);
sj0=l5;
sj1=0ULL;
sj2=l2;
sj3=l5;
sj4=l2;
si3=sj3 < sj4;
sj1=si3?sj1:sj2;
sj0-=sj1;
l5=sj0;
si0=l3;
sj0=i64_load(&i->m0,(U64)si0+64U);
l7=sj0;
si0=l4;
si1=1U;
si0=si0 != si1;
if(si0){
goto L9;
}
si0=l3;
sj1=l7;
sj2=0ULL;
sj3=l5;
sj4=0ULL;
f15157(i,si0,sj1,sj2,sj3,sj4);
si0=l0;
sj0=i64_load(&i->m0,(U64)si0);
l8=sj0;
sj1=l5;
si2=l3;
si3=8U;
si2+=si3;
sj2=i64_load(&i->m0,(U64)si2);
sj1+=sj2;
sj2=l8;
si3=l3;
sj3=i64_load(&i->m0,(U64)si3);
l5=sj3;
sj2+=sj3;
l8=sj2;
sj3=l5;
si2=sj2 < sj3;
sj2=(U64)(si2);
sj1+=sj2;
sj2=1ULL;
sj1+=sj2;
sj2=l2;
sj1*=sj2;
sj0-=sj1;
l5=sj0;
sj1=l8;
si0=sj0 > sj1;
l1=si0;
goto L8;
L9:;
si0=l3;
si1=48U;
si0+=si1;
sj1=0ULL;
sj2=l7;
sj3=l2;
sj2*=sj3;
sj1-=sj2;
l9=sj1;
sj2=0ULL;
sj3=l5;
sj4=0ULL;
f15157(i,si0,sj1,sj2,sj3,sj4);
si0=l0;
si1=l1;
si2=-3U;
si1+=si2;
l10=si1;
si2=3U;
si1<<=(si2&31);
si0+=si1;
sj0=i64_load(&i->m0,(U64)si0);
l8=sj0;
si1=l3;
sj1=i64_load(&i->m0,(U64)si1+48U);
sj0+=sj1;
l5=sj0;
sj1=l8;
si0=sj0 < sj1;
l4=si0;
si1=l1;
si2=3U;
si1<<=(si2&31);
l1=si1;
si2=l0;
si1+=si2;
si2=-16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
l11=sj1;
si2=l3;
si3=48U;
si2+=si3;
si3=8U;
si2+=si3;
sj2=i64_load(&i->m0,(U64)si2);
sj1+=sj2;
si2=l4;
sj2=(U64)(si2);
sj1+=sj2;
l8=sj1;
sj2=l11;
si1=sj1 < sj2;
sj2=l8;
sj3=l11;
si2=sj2 == sj3;
si0=si2?si0:si1;
l4=si0;
si0=l10;
si0=!(si0);
if(si0){
goto L10;
}
si0=l0;
si1=-32U;
si0+=si1;
l12=si0;
si0=l3;
si1=32U;
si0+=si1;
si1=8U;
si0+=si1;
l13=si0;
L11:;
{
si0=l3;
si1=32U;
si0+=si1;
sj1=l8;
sj2=0ULL;
sj3=l9;
sj4=0ULL;
f15157(i,si0,sj1,sj2,sj3,sj4);
sj0=l5;
sj1=l9;
sj0+=sj1;
l8=sj0;
sj1=l5;
si2=l4;
si3=1U;
si2&=si3;
l4=si2;
sj0=si2?sj0:sj1;
l11=sj0;
sj0=l8;
sj1=l5;
si0=sj0 < sj1;
l10=si0;
si0=l12;
si1=l1;
si0+=si1;
sj0=i64_load(&i->m0,(U64)si0);
l8=sj0;
si1=l3;
sj1=i64_load(&i->m0,(U64)si1+32U);
sj0+=sj1;
l5=sj0;
sj1=l8;
si0=sj0 < sj1;
l0=si0;
sj1=l11;
sj2=l2;
sj3=0ULL;
si4=l10;
sj2=si4?sj2:sj3;
sj3=0ULL;
si4=l4;
sj2=si4?sj2:sj3;
sj1-=sj2;
l11=sj1;
si2=l13;
sj2=i64_load(&i->m0,(U64)si2);
sj1+=sj2;
si2=l0;
sj2=(U64)(si2);
sj1+=sj2;
l8=sj1;
sj2=l11;
si1=sj1 < sj2;
sj2=l8;
sj3=l11;
si2=sj2 == sj3;
si0=si2?si0:si1;
l4=si0;
si0=l1;
si1=-8U;
si0+=si1;
l1=si0;
si1=24U;
si0=si0 != si1;
if(si0){
goto L11;
}
}
L10:;
si0=l3;
si1=16U;
si0+=si1;
sj1=l7;
sj2=0ULL;
sj3=l8;
sj4=l2;
sj5=0ULL;
si6=l4;
sj4=si6?sj4:sj5;
sj3-=sj4;
l8=sj3;
sj4=0ULL;
sj5=l2;
sj6=l8;
sj7=l2;
si6=sj6 < sj7;
sj4=si6?sj4:sj5;
sj3-=sj4;
l8=sj3;
sj4=0ULL;
f15157(i,si0,sj1,sj2,sj3,sj4);
sj0=l5;
sj1=l8;
si2=l3;
si3=16U;
si2+=si3;
si3=8U;
si2+=si3;
sj2=i64_load(&i->m0,(U64)si2);
si3=l3;
sj3=i64_load(&i->m0,(U64)si3+16U);
l11=sj3;
sj4=l5;
sj3+=sj4;
l9=sj3;
sj4=l11;
si3=sj3 < sj4;
sj3=(U64)(si3);
sj2+=sj3;
sj1+=sj2;
sj2=1ULL;
sj1+=sj2;
sj2=l2;
sj1*=sj2;
sj0-=sj1;
l5=sj0;
sj1=l9;
si0=sj0 > sj1;
l1=si0;
L8:;
sj0=l2;
sj1=0ULL;
si2=l1;
sj0=si2?sj0:sj1;
sj1=l5;
sj0+=sj1;
l5=sj0;
sj1=0ULL;
sj2=l2;
sj3=l5;
sj4=l2;
si3=sj3 < sj4;
sj1=si3?sj1:sj2;
sj0-=sj1;
l5=sj0;
goto L1;
L7:;
sj0=l2;
sj1=l6;
sj0<<=(sj1&63);
l9=sj0;
sj1=0ULL;
si0=sj0 == sj1;
if(si0){
goto L4;
}
si0=l3;
si1=160U;
si0+=si1;
sj1=-1ULL;
sj2=l9;
sj3=-1ULL;
sj2^=sj3;
sj3=l9;
sj4=0ULL;
f15155(i,si0,sj1,sj2,sj3,sj4);
si0=l3;
si1=144U;
si0+=si1;
si1=l3;
sj1=i64_load(&i->m0,(U64)si1+160U);
l14=sj1;
sj2=0ULL;
sj3=l5;
sj4=0ULL;
sj5=l6;
sj4-=sj5;
l2=sj4;
sj3>>=(sj4&63);
l8=sj3;
sj4=0ULL;
f15157(i,si0,sj1,sj2,sj3,sj4);
sj0=l9;
sj1=0ULL;
si2=l1;
si3=3U;
si2<<=(si3&31);
si3=l0;
si2+=si3;
si3=-16U;
si2+=si3;
sj2=i64_load(&i->m0,(U64)si2);
l11=sj2;
sj3=l2;
sj2>>=(sj3&63);
sj3=l5;
sj4=l6;
sj3<<=(sj4&63);
sj2|=sj3;
l5=sj2;
sj3=l9;
sj4=l8;
si5=l3;
si6=144U;
si5+=si6;
si6=8U;
si5+=si6;
sj5=i64_load(&i->m0,(U64)si5);
sj4+=sj5;
sj5=l5;
si6=l3;
sj6=i64_load(&i->m0,(U64)si6+144U);
l8=sj6;
sj5+=sj6;
l5=sj5;
sj6=l8;
si5=sj5 < sj6;
sj5=(U64)(si5);
sj4+=sj5;
sj5=1ULL;
sj4+=sj5;
sj3*=sj4;
sj2-=sj3;
l8=sj2;
sj3=l5;
si2=sj2 > sj3;
sj0=si2?sj0:sj1;
sj1=l8;
sj0+=sj1;
l5=sj0;
sj1=0ULL;
sj2=l9;
sj3=l5;
sj4=l9;
si3=sj3 < sj4;
sj1=si3?sj1:sj2;
sj0-=sj1;
l5=sj0;
si0=l4;
si1=1U;
si0=si0 != si1;
if(si0){
goto L12;
}
si0=l3;
si1=80U;
si0+=si1;
sj1=l14;
sj2=0ULL;
sj3=l5;
sj4=0ULL;
f15157(i,si0,sj1,sj2,sj3,sj4);
si0=l0;
sj0=i64_load(&i->m0,(U64)si0);
sj1=l6;
sj0<<=(sj1&63);
l2=sj0;
sj1=l9;
sj2=l5;
si3=l3;
si4=80U;
si3+=si4;
si4=8U;
si3+=si4;
sj3=i64_load(&i->m0,(U64)si3);
sj2+=sj3;
sj3=l2;
si4=l3;
sj4=i64_load(&i->m0,(U64)si4+80U);
l5=sj4;
sj3+=sj4;
l2=sj3;
sj4=l5;
si3=sj3 < sj4;
sj3=(U64)(si3);
sj2+=sj3;
sj3=1ULL;
sj2+=sj3;
sj1*=sj2;
sj0-=sj1;
l5=sj0;
sj1=l2;
si0=sj0 > sj1;
l1=si0;
goto L2;
L12:;
si0=l0;
si1=l1;
si2=-3U;
si1+=si2;
l12=si1;
si2=3U;
si1<<=(si2&31);
si0+=si1;
sj0=i64_load(&i->m0,(U64)si0);
l15=sj0;
sj1=l2;
sj2=63ULL;
sj1&=sj2;
l16=sj1;
sj0>>=(sj1&63);
sj1=l11;
sj2=l6;
sj1<<=(sj2&63);
sj0|=sj1;
l8=sj0;
sj0=0ULL;
sj1=l9;
sj2=l14;
sj1*=sj2;
sj0-=sj1;
l7=sj0;
sj0=l15;
sj1=l6;
sj0<<=(sj1&63);
l11=sj0;
si0=l4;
si1=2U;
si0=si0 <= si1;
if(si0){
goto L3;
}
si0=l1;
si1=3U;
si0<<=(si1&31);
si1=l0;
si0+=si1;
si1=-32U;
si0+=si1;
sj0=i64_load(&i->m0,(U64)si0);
sj1=l16;
sj0>>=(sj1&63);
sj1=l11;
sj0|=sj1;
l11=sj0;
goto L3;
L6:;
si0=l3;
si1=0U;
i32_store(&i->m0,(U64)si0+184U,si1);
si0=1U;
si1=l3;
si2=176U;
si1+=si2;
si2=1212704U;
si3=l3;
si4=184U;
si3+=si4;
si4=1215220U;
f1251(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L5:;
si0=1215236U;
si1=25U;
si2=1215264U;
f604(i,si0,si1,si2);
UNREACHABLE;
L4:;
si0=1233936U;
si1=25U;
si2=1234152U;
f604(i,si0,si1,si2);
UNREACHABLE;
L3:;
si0=l3;
si1=128U;
si0+=si1;
sj1=l5;
sj2=0ULL;
sj3=l7;
sj4=0ULL;
f15157(i,si0,sj1,sj2,sj3,sj4);
sj0=l11;
si1=l3;
sj1=i64_load(&i->m0,(U64)si1+128U);
sj0+=sj1;
l2=sj0;
sj1=l11;
si0=sj0 < sj1;
l4=si0;
sj1=l8;
si2=l3;
si3=128U;
si2+=si3;
si3=8U;
si2+=si3;
sj2=i64_load(&i->m0,(U64)si2);
sj1+=sj2;
si2=l4;
sj2=(U64)(si2);
sj1+=sj2;
l11=sj1;
sj2=l8;
si1=sj1 < sj2;
sj2=l11;
sj3=l8;
si2=sj2 == sj3;
si0=si2?si0:si1;
l10=si0;
si0=l12;
si0=!(si0);
if(si0){
goto L13;
}
si0=4U;
si1=l1;
si0-=si1;
l4=si0;
si0=l1;
si1=3U;
si0<<=(si1&31);
si1=l0;
si0+=si1;
si1=-40U;
si0+=si1;
l1=si0;
L14:;
{
sj0=l2;
sj1=l7;
sj0+=sj1;
l5=sj0;
sj1=l2;
si2=l10;
si3=1U;
si2&=si3;
l10=si2;
sj0=si2?sj0:sj1;
sj1=l9;
sj2=0ULL;
sj3=l5;
sj4=l2;
si3=sj3 < sj4;
sj1=si3?sj1:sj2;
sj2=0ULL;
si3=l10;
sj1=si3?sj1:sj2;
sj0-=sj1;
l8=sj0;
si0=l1;
si1=8U;
si0+=si1;
sj0=i64_load(&i->m0,(U64)si0);
sj1=l6;
sj0<<=(sj1&63);
l5=sj0;
si0=l4;
si0=!(si0);
if(si0){
goto L15;
}
si0=l1;
sj0=i64_load(&i->m0,(U64)si0);
sj1=l16;
sj0>>=(sj1&63);
sj1=l5;
sj0|=sj1;
l5=sj0;
L15:;
si0=l3;
si1=112U;
si0+=si1;
sj1=l11;
sj2=0ULL;
sj3=l7;
sj4=0ULL;
f15157(i,si0,sj1,sj2,sj3,sj4);
sj0=l5;
si1=l3;
sj1=i64_load(&i->m0,(U64)si1+112U);
sj0+=sj1;
l2=sj0;
sj1=l5;
si0=sj0 < sj1;
l10=si0;
sj1=l8;
si2=l3;
si3=112U;
si2+=si3;
si3=8U;
si2+=si3;
sj2=i64_load(&i->m0,(U64)si2);
sj1+=sj2;
si2=l10;
sj2=(U64)(si2);
sj1+=sj2;
l11=sj1;
sj2=l8;
si1=sj1 < sj2;
sj2=l11;
sj3=l8;
si2=sj2 == sj3;
si0=si2?si0:si1;
l10=si0;
si0=l1;
si1=-8U;
si0+=si1;
l1=si0;
si0=l4;
si1=1U;
si0+=si1;
l4=si0;
si1=1U;
si0=si0 != si1;
if(si0){
goto L14;
}
}
L13:;
si0=l3;
si1=96U;
si0+=si1;
sj1=l14;
sj2=0ULL;
sj3=l11;
sj4=l9;
sj5=0ULL;
si6=l10;
sj4=si6?sj4:sj5;
sj3-=sj4;
l5=sj3;
sj4=0ULL;
sj5=l9;
sj6=l5;
sj7=l9;
si6=sj6 < sj7;
sj4=si6?sj4:sj5;
sj3-=sj4;
l5=sj3;
sj4=0ULL;
f15157(i,si0,sj1,sj2,sj3,sj4);
sj0=l2;
sj1=l5;
si2=l3;
si3=96U;
si2+=si3;
si3=8U;
si2+=si3;
sj2=i64_load(&i->m0,(U64)si2);
si3=l3;
sj3=i64_load(&i->m0,(U64)si3+96U);
l8=sj3;
sj4=l2;
sj3+=sj4;
l11=sj3;
sj4=l8;
si3=sj3 < sj4;
sj3=(U64)(si3);
sj2+=sj3;
sj1+=sj2;
sj2=1ULL;
sj1+=sj2;
sj2=l9;
sj1*=sj2;
sj0-=sj1;
l5=sj0;
sj1=l11;
si0=sj0 > sj1;
l1=si0;
L2:;
sj0=l9;
sj1=0ULL;
si2=l1;
sj0=si2?sj0:sj1;
sj1=l5;
sj0+=sj1;
l5=sj0;
sj1=0ULL;
sj2=l9;
sj3=l5;
sj4=l9;
si3=sj3 < sj4;
sj1=si3?sj1:sj2;
sj0-=sj1;
sj1=l6;
sj0>>=(sj1&63);
l5=sj0;
L1:;
si0=l3;
si1=208U;
si0+=si1;
i->g0=si0;
sj0=l5;
L0:;
return sj0;
}

U32 f1118(rustpythonInstance*i,U32 l0,U32 l1,U64 l2,U64 l3) {
U32 l4=0;
U64 l5=0;
U32 si0,si1,si2,si3;
U64 sj0,sj1,sj2,sj3;
sj0=l2;
sj1=l3;
si0=sj0 < sj1;
if(si0){
goto L5;
}
sj0=l2;
sj1=l3;
sj0-=sj1;
l2=sj0;
sj1=274877906944ULL;
si0=sj0 >= sj1;
if(si0){
goto L4;
}
sj0=l2;
sj1=6ULL;
sj0>>=(sj1&63);
si0=(U32)(sj0);
l4=si0;
si1=l1;
si0=si0 >= si1;
if(si0){
goto L3;
}
si0=l0;
si1=l4;
si2=3U;
si1<<=(si2&31);
si0+=si1;
sj0=i64_load(&i->m0,(U64)si0);
sj1=l2;
sj0>>=(sj1&63);
l5=sj0;
sj0=64ULL;
sj1=l2;
sj2=63ULL;
sj1&=sj2;
sj0-=sj1;
l2=sj0;
sj1=l3;
si0=sj0 >= sj1;
if(si0){
goto L1;
}
si0=l4;
si1=1U;
si0+=si1;
l4=si0;
si1=l1;
si0=si0 >= si1;
if(si0){
goto L2;
}
si0=l0;
si1=l4;
si2=3U;
si1<<=(si2&31);
si0+=si1;
sj0=i64_load(&i->m0,(U64)si0);
sj1=l2;
sj0<<=(sj1&63);
sj1=l5;
sj0+=sj1;
l5=sj0;
goto L1;
L5:;
si0=l0;
sj0=i64_load(&i->m0,(U64)si0);
l5=sj0;
sj0=l2;
l3=sj0;
goto L1;
L4:;
si0=1212393U;
si1=43U;
si2=1212560U;
f604(i,si0,si1,si2);
UNREACHABLE;
L3:;
si0=l4;
si1=l1;
si2=1213484U;
f594(i,si0,si1,si2);
UNREACHABLE;
L2:;
si0=l4;
si1=l1;
si2=1213500U;
f594(i,si0,si1,si2);
UNREACHABLE;
L1:;
sj0=-1ULL;
sj1=-1ULL;
sj2=-1ULL;
sj3=l3;
sj2<<=(sj3&63);
sj3=-1ULL;
sj2^=sj3;
sj3=l5;
si3=!(sj3);
sj1=si3?sj1:sj2;
sj2=l3;
sj3=63ULL;
si2=sj2 > sj3;
sj0=si2?sj0:sj1;
sj1=l5;
sj0&=sj1;
l3=sj0;
sj1=4294967296ULL;
si0=sj0 >= sj1;
if(si0){
goto L6;
}
sj0=l3;
si0=(U32)(sj0);
goto L0;
L6:;
si0=1212393U;
si1=43U;
si2=1212560U;
f604(i,si0,si1,si2);
UNREACHABLE;
L0:;
return si0;
}

void f1119(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4,U32 l5,U32 l6) {
U32 l7=0;
U32 l8=0;
U32 l9=0;
U32 si0,si1,si2,si3,si4,si5,si6,si7;
si0=l4;
si0=f1120(i,si0);
l7=si0;
si0=!(si0);
if(si0){
goto L2;
}
si0=l7;
si1=268435455U;
si0=si0 > si1;
if(si0){
goto L4;
}
si0=l7;
si1=3U;
si0<<=(si1&31);
l8=si0;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L4;
}
si0=l8;
if(si0){
goto L3;
}
si0=8U;
l9=si0;
goto L1;
L4:;
f53(i);
UNREACHABLE;
L3:;
si0=l8;
si1=1U;
si0=f15026(i,si0,si1);
l9=si0;
if(si0){
goto L1;
}
si0=8U;
si1=l8;
f52(i,si0,si1);
UNREACHABLE;
L2:;
si0=l1;
si1=l2;
si2=l3;
si3=l4;
si4=l5;
si5=l6;
si6=8U;
si7=0U;
f1121(i,si0,si1,si2,si3,si4,si5,si6,si7);
goto L0;
L1:;
si0=l1;
si1=l2;
si2=l3;
si3=l4;
si4=l5;
si5=l6;
si6=l9;
si7=l7;
f1121(i,si0,si1,si2,si3,si4,si5,si6,si7);
si0=l9;
f15024(i,si0);
L0:;
}

U32 f1120(rustpythonInstance*i,U32 l0) {
U32 l1=0;
U32 l2=0;
U32 si0,si1,si2,si3,si4;
si0=i->g0;
si1=32U;
si0-=si1;
l1=si0;
i->g0=si0;
si0=l1;
si1=l0;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si0=!(si0);
if(si0){
goto L5;
}
si0=0U;
l2=si0;
si0=l0;
si1=20U;
si0=si0 < si1;
if(si0){
goto L1;
}
si0=38U;
l2=si0;
si0=l0;
si1=39U;
si0=si0 < si1;
if(si0){
goto L1;
}
si0=l0;
si1=340U;
si0=si0 < si1;
if(si0){
goto L4;
}
si0=l0;
si1=345U;
si0=si0 < si1;
if(si0){
goto L3;
}
si0=l0;
si1=640U;
si0=si0 < si1;
if(si0){
goto L2;
}
si0=l0;
si1=1500U;
si0=si0 < si1;
if(si0){
goto L6;
}
si0=l0;
si1=l0;
si2=50U;
si0=f1005(i,si0,si1,si2);
l2=si0;
goto L1;
L6:;
si0=l0;
si1=l0;
si0=f1217(i,si0,si1);
l2=si0;
goto L1;
L5:;
si0=l1;
si1=0U;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=1U;
si1=l1;
si2=4U;
si1+=si2;
si2=1212260U;
si3=l1;
si4=8U;
si3+=si4;
si4=1216496U;
f1250(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L4:;
si0=l0;
si1=l0;
si0=f1206(i,si0,si1);
l2=si0;
goto L1;
L3:;
si0=l0;
si1=l0;
si0=f1211(i,si0,si1);
l2=si0;
goto L1;
L2:;
si0=l0;
si1=l0;
si0=f1216(i,si0,si1);
l2=si0;
L1:;
si0=l1;
si1=32U;
si0+=si1;
i->g0=si0;
si0=l2;
L0:;
return si0;
}

void f1121(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4,U32 l5,U32 l6,U32 l7) {
U32 l8=0;
U32 si0,si1,si2,si3,si4,si5,si6,si7,si8;
si0=i->g0;
si1=32U;
si0-=si1;
l8=si0;
i->g0=si0;
si0=l8;
si1=l3;
i32_store(&i->m0,(U64)si0,si1);
si0=l8;
si1=l5;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l5;
si1=l3;
si0=si0 != si1;
if(si0){
goto L8;
}
si0=l5;
si0=!(si0);
if(si0){
goto L7;
}
si0=l5;
si1=20U;
si0=si0 < si1;
if(si0){
goto L6;
}
si0=l5;
si1=39U;
si0=si0 < si1;
if(si0){
goto L5;
}
si0=l5;
si1=340U;
si0=si0 < si1;
if(si0){
goto L4;
}
si0=l5;
si1=345U;
si0=si0 < si1;
if(si0){
goto L3;
}
si0=l5;
si1=640U;
si0=si0 < si1;
if(si0){
goto L2;
}
si0=l5;
si1=1500U;
si0=si0 < si1;
if(si0){
goto L9;
}
si0=l0;
si1=l1;
si2=l2;
si3=l5;
si4=l4;
si5=l5;
si6=50U;
si7=l6;
si8=l7;
f1006(i,si0,si1,si2,si3,si4,si5,si6,si7,si8);
goto L1;
L9:;
si0=l0;
si1=l1;
si2=l2;
si3=l5;
si4=l4;
si5=l5;
si6=l6;
si7=l7;
f1218(i,si0,si1,si2,si3,si4,si5,si6,si7);
goto L1;
L8:;
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
si4=1216528U;
f1250(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L7:;
si0=l8;
si1=0U;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=1U;
si1=l8;
si2=1212260U;
si3=l8;
si4=8U;
si3+=si4;
si4=1216512U;
f1250(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L6:;
si0=l0;
si1=l1;
si2=l2;
si3=l5;
si4=l4;
si5=l5;
f1109(i,si0,si1,si2,si3,si4,si5);
goto L1;
L5:;
si0=l0;
si1=l1;
si2=l2;
si3=l5;
si4=l4;
si5=l5;
si6=l6;
si7=l7;
f1203(i,si0,si1,si2,si3,si4,si5,si6,si7);
goto L1;
L4:;
si0=l0;
si1=l1;
si2=l2;
si3=l5;
si4=l4;
si5=l5;
si6=l6;
si7=l7;
f1196(i,si0,si1,si2,si3,si4,si5,si6,si7);
goto L1;
L3:;
si0=l0;
si1=l1;
si2=l2;
si3=l5;
si4=l4;
si5=l5;
si6=l6;
si7=l7;
f1194(i,si0,si1,si2,si3,si4,si5,si6,si7);
goto L1;
L2:;
si0=l0;
si1=l1;
si2=l2;
si3=l5;
si4=l4;
si5=l5;
si6=l6;
si7=l7;
f1195(i,si0,si1,si2,si3,si4,si5,si6,si7);
L1:;
si0=l8;
si1=32U;
si0+=si1;
i->g0=si0;
L0:;
}

void f1122(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4) {
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 si0,si1,si2,si3,si4,si5;
si0=l4;
si1=43U;
si0=si0 < si1;
if(si0){
goto L5;
}
si0=l4;
si1=390U;
si0=si0 < si1;
if(si0){
goto L4;
}
si0=l4;
si1=1090U;
si0=si0 >= si1;
if(si0){
goto L6;
}
si0=l4;
si1=3U;
si0*=si1;
si1=64U;
si0+=si1;
l5=si0;
goto L3;
L6:;
si0=l4;
si1=11699U;
si0=si0 > si1;
if(si0){
goto L7;
}
si0=l4;
si1=15U;
si0*=si1;
si1=3U;
si0>>=(si1&31);
si1=505U;
si0+=si1;
l5=si0;
goto L3;
L7:;
si0=l4;
si1=50U;
si0=f1007(i,si0,si1);
l5=si0;
si0=!(si0);
if(si0){
goto L5;
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
si0=l6;
if(si0){
goto L2;
}
si0=8U;
l7=si0;
goto L1;
L8:;
f53(i);
UNREACHABLE;
L5:;
si0=l1;
si1=l2;
si2=l3;
si3=l4;
si4=8U;
si5=0U;
f1076(i,si0,si1,si2,si3,si4,si5);
goto L0;
L4:;
si0=l4;
si1=1U;
si0<<=(si1&31);
si1=128U;
si0+=si1;
l5=si0;
L3:;
si0=l5;
si1=3U;
si0<<=(si1&31);
l6=si0;
L2:;
si0=l6;
si1=1U;
si0=f15026(i,si0,si1);
l7=si0;
if(si0){
goto L1;
}
si0=8U;
si1=l6;
f52(i,si0,si1);
UNREACHABLE;
L1:;
si0=l1;
si1=l2;
si2=l3;
si3=l4;
si4=l7;
si5=l5;
f1076(i,si0,si1,si2,si3,si4,si5);
si0=l7;
f15024(i,si0);
L0:;
}

U64 f1123(rustpythonInstance*i,U32 l0,U32 l1,U64 l2,U64 l3) {
U32 l4=0;
U64 l5=0;
U32 l6=0;
U32 l7=0;
U64 l8=0;
U64 l9=0;
U64 l10=0;
U32 si0,si1,si2,si3,si4;
U64 sj0,sj1,sj2,sj3,sj4;
si0=i->g0;
si1=64U;
si0-=si1;
l4=si0;
i->g0=si0;
si0=l1;
si1=1U;
si0=si0 == si1;
if(si0){
goto L7;
}
sj0=l2;
sj1=1ULL;
sj0&=sj1;
si0=!(sj0);
if(si0){
goto L4;
}
sj0=9223372036854775807ULL;
sj1=127ULL;
sj2=l2;
sj3=2ULL;
si2=sj2 < sj3;
sj0=si2?sj0:sj1;
sj1=l2;
sj2=1ULL;
sj1>>=(sj2&63);
sj0&=sj1;
l5=sj0;
sj1=4294967296ULL;
si0=sj0 >= sj1;
if(si0){
goto L5;
}
sj0=l5;
si0=(U32)(sj0);
l6=si0;
si1=128U;
si0=si0 >= si1;
if(si0){
goto L3;
}
si0=l1;
if(si0){
goto L6;
}
si0=1212393U;
si1=43U;
si2=1214072U;
f604(i,si0,si1,si2);
UNREACHABLE;
L7:;
si0=l0;
sj0=i64_load(&i->m0,(U64)si0);
l5=sj0;
sj1=l3;
si0=sj0 > sj1;
if(si0){
goto L8;
}
sj0=l2;
si0=!(sj0);
if(si0){
goto L9;
}
sj0=l3;
sj1=l5;
sj0-=sj1;
sj1=l2;
sj0=REM_U(sj0,sj1);
l3=sj0;
goto L1;
L9:;
si0=1212336U;
si1=57U;
si2=1214040U;
f604(i,si0,si1,si2);
UNREACHABLE;
L8:;
sj0=l2;
si0=!(sj0);
if(si0){
goto L2;
}
sj0=0ULL;
sj1=l2;
sj2=l5;
sj3=l3;
sj2-=sj3;
sj3=l2;
sj2=REM_U(sj2,sj3);
l3=sj2;
sj1-=sj2;
sj2=l3;
si2=!(sj2);
sj0=si2?sj0:sj1;
l3=sj0;
goto L1;
L6:;
sj0=2ULL;
sj1=2ULL;
sj2=2ULL;
si3=l6;
si4=1251324U;
si3+=si4;
sj3=i64_load8_u(&i->m0,(U64)si3);
l5=sj3;
sj4=l2;
sj3*=sj4;
sj2-=sj3;
sj3=l5;
sj2*=sj3;
l5=sj2;
sj3=l2;
sj2*=sj3;
sj1-=sj2;
sj2=l5;
sj1*=sj2;
l5=sj1;
sj2=l2;
sj1*=sj2;
sj0-=sj1;
sj1=l5;
sj0*=sj1;
l5=sj0;
si0=l1;
si1=536870910U;
si0+=si1;
si1=536870911U;
si0&=si1;
l7=si0;
si0=l1;
si1=3U;
si0<<=(si1&31);
si1=l0;
si0+=si1;
si1=-8U;
si0+=si1;
l6=si0;
sj0=i64_load(&i->m0,(U64)si0);
l8=sj0;
si0=l1;
si1=1U;
si0&=si1;
if(si0){
goto L10;
}
si0=l4;
si1=48U;
si0+=si1;
si1=l0;
sj1=i64_load(&i->m0,(U64)si1);
l9=sj1;
sj2=l3;
sj1-=sj2;
sj2=l5;
sj1*=sj2;
sj2=0ULL;
sj3=l2;
sj4=0ULL;
f15157(i,si0,sj1,sj2,sj3,sj4);
si0=l0;
si1=8U;
si0+=si1;
l0=si0;
si0=l4;
si1=48U;
si0+=si1;
si1=8U;
si0+=si1;
sj0=i64_load(&i->m0,(U64)si0);
sj1=l9;
sj2=l3;
si1=sj1 < sj2;
sj1=(U64)(si1);
sj0+=sj1;
l3=sj0;
L10:;
si0=l7;
si0=!(si0);
if(si0){
goto L11;
}
L12:;
{
si0=l4;
si1=32U;
si0+=si1;
si1=l0;
sj1=i64_load(&i->m0,(U64)si1);
l9=sj1;
sj2=l3;
sj1-=sj2;
sj2=l5;
sj1*=sj2;
sj2=0ULL;
sj3=l2;
sj4=0ULL;
f15157(i,si0,sj1,sj2,sj3,sj4);
si0=l4;
si1=16U;
si0+=si1;
si1=l0;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
l10=sj1;
si2=l4;
si3=32U;
si2+=si3;
si3=8U;
si2+=si3;
sj2=i64_load(&i->m0,(U64)si2);
sj3=l9;
sj4=l3;
si3=sj3 < sj4;
sj3=(U64)(si3);
sj2+=sj3;
l3=sj2;
sj1-=sj2;
sj2=l5;
sj1*=sj2;
sj2=0ULL;
sj3=l2;
sj4=0ULL;
f15157(i,si0,sj1,sj2,sj3,sj4);
si0=l4;
si1=16U;
si0+=si1;
si1=8U;
si0+=si1;
sj0=i64_load(&i->m0,(U64)si0);
sj1=l10;
sj2=l3;
si1=sj1 < sj2;
sj1=(U64)(si1);
sj0+=sj1;
l3=sj0;
si0=l0;
si1=16U;
si0+=si1;
l0=si0;
si1=l6;
si0=si0 != si1;
if(si0){
goto L12;
}
}
L11:;
sj0=l2;
sj1=l8;
si0=sj0 >= sj1;
if(si0){
goto L13;
}
si0=l4;
sj1=l8;
sj2=l3;
sj1-=sj2;
sj2=l5;
sj1*=sj2;
sj2=0ULL;
sj3=l2;
sj4=0ULL;
f15157(i,si0,sj1,sj2,sj3,sj4);
si0=l4;
si1=8U;
si0+=si1;
sj0=i64_load(&i->m0,(U64)si0);
sj1=l8;
sj2=l3;
si1=sj1 < sj2;
sj1=(U64)(si1);
sj0+=sj1;
l3=sj0;
goto L1;
L13:;
sj0=l3;
sj1=l8;
si0=sj0 >= sj1;
if(si0){
goto L14;
}
sj0=l2;
sj1=l8;
sj0-=sj1;
sj1=l3;
sj0+=sj1;
l3=sj0;
goto L1;
L14:;
sj0=l3;
sj1=l8;
sj0-=sj1;
l3=sj0;
goto L1;
L5:;
si0=1248571U;
si1=43U;
si2=1248736U;
f604(i,si0,si1,si2);
UNREACHABLE;
L4:;
si0=1251468U;
si1=25U;
si2=1251496U;
f604(i,si0,si1,si2);
UNREACHABLE;
L3:;
si0=l6;
si1=128U;
si2=1251452U;
f594(i,si0,si1,si2);
UNREACHABLE;
L2:;
si0=1212336U;
si1=57U;
si2=1214056U;
f604(i,si0,si1,si2);
UNREACHABLE;
L1:;
si0=l4;
si1=64U;
si0+=si1;
i->g0=si0;
sj0=l3;
L0:;
return sj0;
}

void f1124(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U64 l5=0;
U32 l6=0;
U32 l7=0;
U32 l8=0;
U64 l9=0;
U64 l10=0;
U64 l11=0;
U64 l12=0;
U64 l13=0;
U64 l14=0;
U64 l15=0;
U64 l16=0;
U32 si0,si1,si2,si3,si4,si5;
U64 sj0,sj1,sj2,sj3,sj4,sj5,sj6;
si0=i->g0;
si1=64U;
si0-=si1;
l4=si0;
i->g0=si0;
si0=l2;
si1=2U;
si0=si0 < si1;
if(si0){
goto L4;
}
si0=l3;
sj0=i64_load(&i->m0,(U64)si0+8U);
l5=sj0;
sj1=-1ULL;
si0=(U64)((I64)sj0>(I64)sj1);
if(si0){
goto L3;
}
si0=l4;
si1=48U;
si0+=si1;
sj1=-1ULL;
sj2=l5;
sj3=-1ULL;
sj2^=sj3;
sj3=l5;
sj4=0ULL;
f15155(i,si0,sj1,sj2,sj3,sj4);
si0=l1;
si1=l2;
si2=-2U;
si1+=si2;
l6=si1;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l7=si0;
si0=l2;
si1=3U;
si0<<=(si1&31);
si1=l1;
si0+=si1;
si1=-8U;
si0+=si1;
l8=si0;
sj0=l5;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1+48U);
l9=sj1;
sj0*=sj1;
l10=sj0;
si1=l3;
sj1=i64_load(&i->m0,(U64)si1);
l11=sj1;
sj0+=sj1;
l12=sj0;
sj1=l10;
si0=sj0 < sj1;
if(si0){
goto L2;
}
goto L1;
L4:;
si0=1214148U;
si1=28U;
si2=1214176U;
f604(i,si0,si1,si2);
UNREACHABLE;
L3:;
si0=1214088U;
si1=41U;
si2=1214132U;
f604(i,si0,si1,si2);
UNREACHABLE;
L2:;
sj0=-1ULL;
sj1=-2ULL;
sj2=l12;
sj3=l5;
si2=sj2 < sj3;
l3=si2;
sj0=si2?sj0:sj1;
sj1=l9;
sj0+=sj1;
l9=sj0;
sj0=l12;
sj1=l5;
sj2=0ULL;
sj3=l5;
si4=l3;
sj2=si4?sj2:sj3;
sj1+=sj2;
sj0-=sj1;
l12=sj0;
L1:;
si0=l7;
sj0=i64_load(&i->m0,(U64)si0);
l10=sj0;
si0=l8;
sj0=i64_load(&i->m0,(U64)si0);
l13=sj0;
si0=l4;
si1=32U;
si0+=si1;
sj1=l9;
sj2=0ULL;
sj3=l11;
sj4=0ULL;
f15157(i,si0,sj1,sj2,sj3,sj4);
sj0=l12;
si1=l4;
si2=40U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
sj0+=sj1;
l14=sj0;
sj1=l12;
si0=sj0 >= sj1;
if(si0){
goto L5;
}
sj0=l14;
sj1=l5;
si0=sj0 > sj1;
if(si0){
goto L6;
}
sj0=l11;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1+32U);
si0=sj0 <= sj1;
sj1=l14;
sj2=l5;
si1=sj1 == sj2;
si0&=si1;
si1=1U;
si0=si0 == si1;
if(si0){
goto L6;
}
sj0=l9;
sj1=-1ULL;
sj0+=sj1;
l9=sj0;
goto L5;
L6:;
sj0=l9;
sj1=-2ULL;
sj0+=sj1;
l9=sj0;
L5:;
sj0=l13;
sj1=0ULL;
sj2=l5;
sj3=l10;
sj4=l11;
si3=sj3 < sj4;
sj4=l13;
sj5=l5;
si4=sj4 < sj5;
sj5=l13;
sj6=l5;
si5=sj5 == sj6;
si3=si5?si3:si4;
l3=si3;
sj1=si3?sj1:sj2;
sj0-=sj1;
sj1=l10;
sj2=0ULL;
sj3=l11;
si4=l3;
sj2=si4?sj2:sj3;
l12=sj2;
si1=sj1 < sj2;
sj1=(U64)(si1);
sj0-=sj1;
l13=sj0;
sj0=l10;
sj1=l12;
sj0-=sj1;
l12=sj0;
si0=l6;
si0=!(si0);
if(si0){
goto L7;
}
si0=l1;
si1=-24U;
si0+=si1;
l1=si0;
si0=l2;
si1=3U;
si0<<=(si1&31);
l2=si0;
L8:;
{
si0=l4;
si1=16U;
si0+=si1;
sj1=l13;
sj2=0ULL;
sj3=l9;
sj4=0ULL;
f15157(i,si0,sj1,sj2,sj3,sj4);
si0=l4;
sj1=l13;
si2=l4;
si3=16U;
si2+=si3;
si3=8U;
si2+=si3;
sj2=i64_load(&i->m0,(U64)si2);
sj1+=sj2;
sj2=l12;
si3=l4;
sj3=i64_load(&i->m0,(U64)si3+16U);
sj2+=sj3;
l14=sj2;
sj3=l12;
si2=sj2 < sj3;
sj2=(U64)(si2);
sj1+=sj2;
l15=sj1;
sj2=0ULL;
sj3=l11;
sj4=0ULL;
f15157(i,si0,sj1,sj2,sj3,sj4);
si0=l1;
si1=l2;
si0+=si1;
sj0=i64_load(&i->m0,(U64)si0);
l16=sj0;
sj1=l11;
si2=l4;
sj2=i64_load(&i->m0,(U64)si2);
sj1+=sj2;
l13=sj1;
sj0-=sj1;
l10=sj0;
sj0=l14;
sj1=l12;
sj2=l5;
sj3=l15;
sj2*=sj3;
sj1-=sj2;
sj2=l5;
si3=l4;
si4=8U;
si3+=si4;
sj3=i64_load(&i->m0,(U64)si3);
sj2+=sj3;
sj3=l13;
sj4=l11;
si3=sj3 < sj4;
sj3=(U64)(si3);
sj2+=sj3;
sj3=l16;
sj4=l13;
si3=sj3 < sj4;
sj3=(U64)(si3);
sj2+=sj3;
sj1-=sj2;
l12=sj1;
si0=sj0 <= sj1;
if(si0){
goto L10;
}
sj0=l12;
sj1=0ULL;
sj2=l5;
sj3=l10;
sj4=l11;
si3=sj3 < sj4;
sj4=l12;
sj5=l5;
si4=sj4 < sj5;
sj5=l12;
sj6=l5;
si5=sj5 == sj6;
si3=si5?si3:si4;
l3=si3;
sj1=si3?sj1:sj2;
sj0-=sj1;
sj1=l10;
sj2=0ULL;
sj3=l11;
si4=l3;
sj2=si4?sj2:sj3;
l12=sj2;
si1=sj1 < sj2;
sj1=(U64)(si1);
sj0-=sj1;
l13=sj0;
sj0=l10;
sj1=l12;
sj0-=sj1;
l12=sj0;
goto L9;
L10:;
sj0=l12;
sj1=l5;
sj0+=sj1;
sj1=l10;
sj2=l11;
sj1+=sj2;
l14=sj1;
sj2=l10;
si1=sj1 < sj2;
l3=si1;
sj1=(U64)(si1);
sj0+=sj1;
l13=sj0;
sj1=l12;
si2=l3;
sj3=l13;
sj4=l12;
si3=sj3 < sj4;
sj4=l13;
sj5=l12;
si4=sj4 == sj5;
si2=si4?si2:si3;
l3=si2;
sj0=si2?sj0:sj1;
l13=sj0;
sj0=l14;
sj1=l10;
si2=l3;
sj0=si2?sj0:sj1;
l12=sj0;
L9:;
si0=l2;
si1=-8U;
si0+=si1;
l2=si0;
si1=16U;
si0=si0 != si1;
if(si0){
goto L8;
}
}
L7:;
si0=l0;
sj1=l13;
i64_store(&i->m0,(U64)si0+8U,sj1);
si0=l0;
sj1=l12;
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=64U;
si0+=si1;
i->g0=si0;
L0:;
}

void f1125(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4,U32 l5) {
U32 l6=0;
U32 l7=0;
U64 l8=0;
U64 l9=0;
U64 l10=0;
U64 l11=0;
U32 l12=0;
U32 l13=0;
U64 l14=0;
U32 l15=0;
U32 l16=0;
U64 l17=0;
U32 l18=0;
U32 l19=0;
U32 l20=0;
U32 l21=0;
U32 l22=0;
U32 l23=0;
U32 l24=0;
U64 l25=0;
U64 l26=0;
F64 l27=0;
F64 l28=0;
U32 l29=0;
U32 l30=0;
U32 l31=0;
U32 l32=0;
U32 l33=0;
U64 l34=0;
U64 l35=0;
U64 l36=0;
U32 l37=0;
U32 l38=0;
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
U32 l50=0;
U32 l51=0;
U32 l52=0;
U32 l53=0;
U32 l54=0;
U32 l55=0;
U32 l56=0;
U32 l57=0;
U32 l58=0;
U32 l59=0;
U32 l60=0;
U32 l61=0;
U32 l62=0;
U32 l63=0;
U32 l64=0;
U32 l65=0;
U32 l66=0;
U32 l67=0;
U32 l68=0;
U32 l69=0;
U32 l70=0;
U32 l71=0;
U32 l72=0;
U32 si0,si1,si2,si3,si4,si5,si6,si7,si8,si9;
U64 sj0,sj1,sj2,sj3,sj4,sj5,sj6;
F64 sd0,sd1,sd2,sd3;
si0=i->g0;
si1=272U;
si0-=si1;
l6=si0;
i->g0=si0;
si0=l3;
si1=l5;
si0=si0 < si1;
if(si0){
goto L27;
}
si0=l5;
si1=l1;
si0=si0 > si1;
if(si0){
goto L28;
}
si0=l5;
si0=!(si0);
if(si0){
goto L26;
}
si0=l5;
si1=1U;
si0=si0 == si1;
if(si0){
goto L25;
}
si0=l4;
si1=l5;
si2=-1U;
si1+=si2;
l7=si1;
si2=3U;
si1<<=(si2&31);
si0+=si1;
sj0=i64_load(&i->m0,(U64)si0);
l8=sj0;
si0=!(sj0);
if(si0){
goto L25;
}
si0=l5;
si1=2U;
si0=si0 != si1;
if(si0){
goto L29;
}
si0=l4;
sj0=i64_load(&i->m0,(U64)si0+8U);
l9=sj0;
sj0=I64_CLZ(sj0);
l10=sj0;
sj1=0ULL;
si0=sj0 != sj1;
if(si0){
goto L30;
}
si0=l6;
si1=8U;
si0+=si1;
si1=l2;
si2=l3;
si3=l4;
f1124(i,si0,si1,si2,si3);
si0=l6;
sj0=i64_load(&i->m0,(U64)si0+16U);
l10=sj0;
si0=l6;
sj0=i64_load(&i->m0,(U64)si0+8U);
l11=sj0;
goto L2;
L30:;
si0=l3;
si1=1U;
si0+=si1;
l12=si0;
si0=!(si0);
if(si0){
goto L34;
}
si0=l12;
si1=268435455U;
si0=si0 > si1;
if(si0){
goto L14;
}
si0=l12;
si1=3U;
si0<<=(si1&31);
l1=si0;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L14;
}
si0=l4;
sj0=i64_load(&i->m0,(U64)si0);
l8=sj0;
si0=l1;
if(si0){
goto L36;
}
si0=8U;
l13=si0;
goto L35;
L36:;
si0=l1;
si1=1U;
si0=f15026(i,si0,si1);
l13=si0;
si0=!(si0);
if(si0){
goto L24;
}
L35:;
sj0=l9;
si0=!(sj0);
if(si0){
goto L33;
}
si0=l3;
si1=1U;
si0&=si1;
l5=si0;
sj0=0ULL;
sj1=l10;
sj0-=sj1;
sj1=63ULL;
sj0&=sj1;
l14=sj0;
si0=l3;
si1=1U;
si0=si0 != si1;
if(si0){
goto L32;
}
si0=0U;
l15=si0;
sj0=0ULL;
l11=sj0;
goto L31;
L34:;
sj0=l9;
si0=!(sj0);
si0=!(si0);
if(si0){
goto L18;
}
L33:;
si0=1200324U;
si1=36U;
si2=1200360U;
f604(i,si0,si1,si2);
UNREACHABLE;
L32:;
si0=l3;
si1=-2U;
si0&=si1;
l16=si0;
si0=0U;
l15=si0;
sj0=0ULL;
l11=sj0;
si0=l2;
l1=si0;
si0=l13;
l4=si0;
L37:;
{
si0=l4;
si1=l1;
sj1=i64_load(&i->m0,(U64)si1);
l17=sj1;
sj2=l10;
sj1<<=(sj2&63);
sj2=l11;
sj1|=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=8U;
si0+=si1;
si1=l1;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
l11=sj1;
sj2=l10;
sj1<<=(sj2&63);
sj2=l17;
sj3=l14;
sj2>>=(sj3&63);
sj1|=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si1=16U;
si0+=si1;
l1=si0;
si0=l4;
si1=16U;
si0+=si1;
l4=si0;
sj0=l11;
sj1=l14;
sj0>>=(sj1&63);
l11=sj0;
si0=l16;
si1=l15;
si2=2U;
si1+=si2;
l15=si1;
si0=si0 != si1;
if(si0){
goto L37;
}
}
L31:;
si0=l5;
si0=!(si0);
if(si0){
goto L38;
}
si0=l13;
si1=l15;
si2=3U;
si1<<=(si2&31);
l1=si1;
si0+=si1;
si1=l2;
si2=l1;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
l17=sj1;
sj2=l10;
sj1<<=(sj2&63);
sj2=l11;
sj1|=sj2;
i64_store(&i->m0,(U64)si0,sj1);
sj0=l17;
sj1=l14;
sj0>>=(sj1&63);
l11=sj0;
L38:;
si0=l6;
sj1=l8;
sj2=l10;
sj1<<=(sj2&63);
i64_store(&i->m0,(U64)si0+192U,sj1);
si0=l6;
sj1=l8;
sj2=l14;
sj1>>=(sj2&63);
sj2=l9;
sj3=l10;
sj2<<=(sj3&63);
sj1|=sj2;
i64_store(&i->m0,(U64)si0+200U,sj1);
sj0=l10;
sj1=63ULL;
sj0&=sj1;
l10=sj0;
sj0=l11;
sj1=0ULL;
si0=sj0 != sj1;
if(si0){
goto L39;
}
si0=l3;
l12=si0;
goto L3;
L39:;
si0=l13;
si1=l3;
si2=3U;
si1<<=(si2&31);
si0+=si1;
sj1=l11;
i64_store(&i->m0,(U64)si0,sj1);
goto L3;
L29:;
si0=l3;
si1=1U;
si0+=si1;
l18=si0;
si1=l3;
si2=l3;
si3=3U;
si2<<=(si3&31);
si3=l2;
si2+=si3;
si3=-8U;
si2+=si3;
sj2=i64_load(&i->m0,(U64)si2);
sj3=l8;
si2=sj2 >= sj3;
l1=si2;
si0=si2?si0:si1;
l19=si0;
si1=l5;
si2=1U;
si1<<=(si2&31);
l20=si1;
si0=si0 < si1;
if(si0){
goto L40;
}
si0=l18;
si0=!(si0);
if(si0){
goto L43;
}
si0=l18;
si1=268435455U;
si0=si0 > si1;
if(si0){
goto L14;
}
si0=l18;
si1=3U;
si0<<=(si1&31);
l1=si0;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L14;
}
si0=l1;
if(si0){
goto L45;
}
si0=8U;
l21=si0;
goto L44;
L45:;
si0=l1;
si1=1U;
si0=f15026(i,si0,si1);
l21=si0;
si0=!(si0);
if(si0){
goto L23;
}
L44:;
sj0=l8;
sj0=I64_CLZ(sj0);
l9=sj0;
si0=!(sj0);
si0=!(si0);
if(si0){
goto L42;
}
si0=l21;
si1=l2;
si2=l3;
si3=3U;
si2<<=(si3&31);
si0=f15143(i,si0,si1,si2);
si0=l4;
si1=l5;
si2=-2U;
si1+=si2;
l22=si1;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l16=si0;
si0=1U;
l23=si0;
sj0=0ULL;
l9=sj0;
goto L41;
L43:;
si0=8U;
l21=si0;
sj0=l8;
sj0=I64_CLZ(sj0);
l9=sj0;
sj1=0ULL;
si0=sj0 == sj1;
if(si0){
goto L17;
}
L42:;
si0=l5;
si1=268435455U;
si0=si0 > si1;
if(si0){
goto L14;
}
si0=l5;
si1=3U;
si0<<=(si1&31);
l1=si0;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L14;
}
si0=l1;
if(si0){
goto L47;
}
si0=8U;
l24=si0;
goto L46;
L47:;
si0=l1;
si1=1U;
si0=f15026(i,si0,si1);
l24=si0;
si0=!(si0);
if(si0){
goto L22;
}
L46:;
si0=l5;
si1=1U;
si0&=si1;
l12=si0;
sj0=0ULL;
l11=sj0;
sj0=0ULL;
sj1=l9;
sj0-=sj1;
sj1=63ULL;
sj0&=sj1;
l10=sj0;
si0=0U;
l16=si0;
si0=l5;
si1=1U;
si0=si0 == si1;
if(si0){
goto L48;
}
si0=l5;
si1=-2U;
si0&=si1;
l13=si0;
si0=0U;
l16=si0;
sj0=0ULL;
l11=sj0;
si0=l4;
l1=si0;
si0=l24;
l15=si0;
L49:;
{
si0=l15;
si1=l1;
sj1=i64_load(&i->m0,(U64)si1);
l14=sj1;
sj2=l9;
sj1<<=(sj2&63);
sj2=l11;
sj1|=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l15;
si1=8U;
si0+=si1;
si1=l1;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
l11=sj1;
sj2=l9;
sj1<<=(sj2&63);
sj2=l14;
sj3=l10;
sj2>>=(sj3&63);
sj1|=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si1=16U;
si0+=si1;
l1=si0;
si0=l15;
si1=16U;
si0+=si1;
l15=si0;
sj0=l11;
sj1=l10;
sj0>>=(sj1&63);
l11=sj0;
si0=l13;
si1=l16;
si2=2U;
si1+=si2;
l16=si1;
si0=si0 != si1;
if(si0){
goto L49;
}
}
L48:;
si0=l12;
si0=!(si0);
if(si0){
goto L50;
}
si0=l24;
si1=l16;
si2=3U;
si1<<=(si2&31);
l1=si1;
si0+=si1;
si1=l4;
si2=l1;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
sj2=l9;
sj1<<=(sj2&63);
sj2=l11;
sj1|=sj2;
i64_store(&i->m0,(U64)si0,sj1);
L50:;
si0=l18;
si0=!(si0);
if(si0){
goto L21;
}
si0=l3;
si1=1U;
si0&=si1;
l13=si0;
si0=l3;
si1=1U;
si0=si0 != si1;
if(si0){
goto L52;
}
si0=0U;
l15=si0;
sj0=0ULL;
l11=sj0;
goto L51;
L52:;
si0=l3;
si1=-2U;
si0&=si1;
l16=si0;
si0=0U;
l15=si0;
sj0=0ULL;
l11=sj0;
si0=l2;
l1=si0;
si0=l21;
l4=si0;
L53:;
{
si0=l4;
si1=l1;
sj1=i64_load(&i->m0,(U64)si1);
l14=sj1;
sj2=l9;
sj1<<=(sj2&63);
sj2=l11;
sj1|=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=8U;
si0+=si1;
si1=l1;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
l11=sj1;
sj2=l9;
sj1<<=(sj2&63);
sj2=l14;
sj3=l10;
sj2>>=(sj3&63);
sj1|=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si1=16U;
si0+=si1;
l1=si0;
si0=l4;
si1=16U;
si0+=si1;
l4=si0;
sj0=l11;
sj1=l10;
sj0>>=(sj1&63);
l11=sj0;
si0=l16;
si1=l15;
si2=2U;
si1+=si2;
l15=si1;
si0=si0 != si1;
if(si0){
goto L53;
}
}
L51:;
si0=l13;
si0=!(si0);
if(si0){
goto L54;
}
si0=l21;
si1=l15;
si2=3U;
si1<<=(si2&31);
l1=si1;
si0+=si1;
si1=l2;
si2=l1;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
l14=sj1;
sj2=l9;
sj1<<=(sj2&63);
sj2=l11;
sj1|=sj2;
i64_store(&i->m0,(U64)si0,sj1);
sj0=l14;
sj1=l10;
sj0>>=(sj1&63);
l11=sj0;
L54:;
si0=l21;
si1=l3;
si2=3U;
si1<<=(si2&31);
si0+=si1;
sj1=l11;
i64_store(&i->m0,(U64)si0,sj1);
si0=l24;
si1=l7;
si2=3U;
si1<<=(si2&31);
si0+=si1;
sj0=i64_load(&i->m0,(U64)si0);
l8=sj0;
sj1=0ULL;
si0=sj0 == sj1;
if(si0){
goto L20;
}
si0=l24;
si1=l5;
si2=-2U;
si1+=si2;
l22=si1;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l16=si0;
si0=0U;
l23=si0;
si0=l24;
l4=si0;
L41:;
si0=l6;
si1=176U;
si0+=si1;
sj1=-1ULL;
sj2=l8;
sj3=-1ULL;
sj2^=sj3;
sj3=l8;
sj4=0ULL;
f15155(i,si0,sj1,sj2,sj3,sj4);
sj0=l8;
si1=l6;
sj1=i64_load(&i->m0,(U64)si1+176U);
l25=sj1;
sj0*=sj1;
l11=sj0;
si1=l16;
sj1=i64_load(&i->m0,(U64)si1);
l26=sj1;
sj0+=sj1;
l10=sj0;
sj1=l11;
si0=sj0 < sj1;
if(si0){
goto L19;
}
goto L15;
L40:;
si0=l3;
si1=l5;
si0-=si1;
si1=1U;
si0+=si1;
l15=si0;
si0=!(si0);
if(si0){
goto L55;
}
si0=l15;
si1=268435455U;
si0=si0 > si1;
if(si0){
goto L14;
}
si0=l15;
si1=3U;
si0<<=(si1&31);
l13=si0;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L14;
}
si0=l13;
if(si0){
goto L56;
}
si0=8U;
l16=si0;
goto L16;
L56:;
si0=l13;
si1=1U;
si0=f15026(i,si0,si1);
l16=si0;
if(si0){
goto L16;
}
si0=8U;
si1=l13;
f52(i,si0,si1);
UNREACHABLE;
L55:;
si0=8U;
si1=0U;
si2=l0;
si3=l5;
si4=l2;
si5=l3;
si6=l4;
si7=l5;
si8=l1;
f1167(i,si0,si1,si2,si3,si4,si5,si6,si7,si8);
goto L1;
L28:;
si0=l5;
si1=l1;
si2=1215112U;
f597(i,si0,si1,si2);
UNREACHABLE;
L27:;
si0=1214328U;
si1=32U;
si2=1215204U;
f604(i,si0,si1,si2);
UNREACHABLE;
L26:;
si0=1212393U;
si1=43U;
si2=1215128U;
f604(i,si0,si1,si2);
UNREACHABLE;
L25:;
si0=1215144U;
si1=43U;
si2=1215188U;
f604(i,si0,si1,si2);
UNREACHABLE;
L24:;
si0=8U;
si1=l1;
f52(i,si0,si1);
UNREACHABLE;
L23:;
si0=8U;
si1=l1;
f52(i,si0,si1);
UNREACHABLE;
L22:;
si0=8U;
si1=l1;
f52(i,si0,si1);
UNREACHABLE;
L21:;
si0=1212393U;
si1=43U;
si2=1213308U;
f604(i,si0,si1,si2);
UNREACHABLE;
L20:;
si0=1233936U;
si1=25U;
si2=1234152U;
f604(i,si0,si1,si2);
UNREACHABLE;
L19:;
sj0=-1ULL;
sj1=-2ULL;
sj2=l10;
sj3=l8;
si2=sj2 < sj3;
l1=si2;
sj0=si2?sj0:sj1;
sj1=l25;
sj0+=sj1;
l25=sj0;
sj0=l10;
sj1=l8;
sj2=0ULL;
sj3=l8;
si4=l1;
sj2=si4?sj2:sj3;
sj1+=sj2;
sj0-=sj1;
l10=sj0;
goto L15;
L18:;
si0=l3;
si1=l12;
si2=1200308U;
f597(i,si0,si1,si2);
UNREACHABLE;
L17:;
si0=-1U;
si1=l18;
si2=1213292U;
f597(i,si0,si1,si2);
UNREACHABLE;
L16:;
si0=l16;
si1=l15;
si2=l0;
si3=l5;
si4=l2;
si5=l3;
si6=l4;
si7=l5;
si8=l1;
f1167(i,si0,si1,si2,si3,si4,si5,si6,si7,si8);
si0=l16;
f15024(i,si0);
goto L1;
L15:;
si0=l6;
si1=160U;
si0+=si1;
sj1=l25;
sj2=0ULL;
sj3=l26;
sj4=0ULL;
f15157(i,si0,sj1,sj2,sj3,sj4);
sj0=l10;
si1=l6;
si2=168U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
sj0+=sj1;
l11=sj0;
sj1=l10;
si0=sj0 >= sj1;
if(si0){
goto L57;
}
sj0=l11;
sj1=l8;
si0=sj0 > sj1;
if(si0){
goto L58;
}
sj0=l26;
si1=l6;
sj1=i64_load(&i->m0,(U64)si1+160U);
si0=sj0 <= sj1;
sj1=l11;
sj2=l8;
si1=sj1 == sj2;
si0&=si1;
si1=1U;
si0=si0 == si1;
if(si0){
goto L58;
}
sj0=l25;
sj1=-1ULL;
sj0+=sj1;
l25=sj0;
goto L57;
L58:;
sj0=l25;
sj1=-2ULL;
sj0+=sj1;
l25=sj0;
L57:;
si0=l18;
si1=l19;
si0=si0 < si1;
if(si0){
goto L61;
}
si0=l5;
si1=85U;
si0=si0 < si1;
if(si0){
goto L69;
}
si0=l19;
si1=4188U;
si0=si0 < si1;
if(si0){
goto L60;
}
si0=l5;
sd0=(F64)(si0);
l27=sd0;
sd1=4040;
si2=l19;
sd2=(F64)(si2);
l28=sd2;
sd3=74;
sd2*=sd3;
sd0=f15123(i,sd0,sd1,sd2);
sd1=l27;
sd2=l28;
sd1*=sd2;
si0=sd0 > sd1;
if(si0){
goto L60;
}
si0=l19;
si1=l5;
si0-=si1;
l1=si0;
si0=8U;
l29=si0;
si0=l19;
si1=l5;
si0=f1182(i,si0,si1);
l30=si0;
si0=8U;
l31=si0;
si0=l19;
si1=l5;
si0=si0 == si1;
l32=si0;
if(si0){
goto L70;
}
si0=l1;
si1=268435455U;
si0=si0 > si1;
if(si0){
goto L14;
}
si0=l1;
si1=3U;
si0<<=(si1&31);
l15=si0;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L14;
}
si0=8U;
l31=si0;
si0=l15;
si0=!(si0);
if(si0){
goto L70;
}
si0=l15;
si1=1U;
si0=f15026(i,si0,si1);
l31=si0;
si0=!(si0);
if(si0){
goto L64;
}
L70:;
si0=l30;
si0=!(si0);
if(si0){
goto L71;
}
si0=l30;
si1=268435455U;
si0=si0 > si1;
if(si0){
goto L14;
}
si0=l30;
si1=3U;
si0<<=(si1&31);
l15=si0;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L14;
}
si0=l15;
si0=!(si0);
if(si0){
goto L71;
}
si0=l15;
si1=1U;
si0=f15026(i,si0,si1);
l29=si0;
si0=!(si0);
if(si0){
goto L65;
}
L71:;
si0=l1;
si1=231U;
si0+=si1;
si1=l5;
si0=si0 >= si1;
if(si0){
goto L59;
}
si0=l19;
si1=l1;
si2=1U;
si1+=si2;
l16=si1;
si2=l1;
si1+=si2;
l13=si1;
si0=si0 < si1;
if(si0){
goto L66;
}
si0=l5;
si1=l19;
si2=l13;
si1-=si2;
l15=si1;
si0=si0 < si1;
if(si0){
goto L67;
}
si0=l1;
si1=l5;
si2=l15;
si1-=si2;
l3=si1;
si0=si0 >= si1;
if(si0){
goto L68;
}
si0=l31;
si1=l1;
si2=l0;
si3=l15;
si4=3U;
si3<<=(si4&31);
l3=si3;
si2+=si3;
l12=si2;
si3=l16;
si4=l21;
si5=l3;
si4+=si5;
si5=l13;
si6=l4;
si7=l5;
si8=l16;
si7-=si8;
l3=si7;
si8=3U;
si7<<=(si8&31);
si6+=si7;
si7=l16;
si8=l29;
si9=l30;
si0=f1181(i,si0,si1,si2,si3,si4,si5,si6,si7,si8,si9);
l13=si0;
si0=l3;
si1=l1;
si0=si0 >= si1;
if(si0){
goto L11;
}
si0=l6;
si1=144U;
si0+=si1;
si1=l1;
si2=l3;
si1=f1126(i,si1,si2);
l2=si1;
si2=1U;
f1295(i,si0,si1,si2);
si0=l6;
si0=i32_load(&i->m0,(U64)si0+148U);
l22=si0;
si0=l29;
si1=l30;
si2=l31;
si3=l1;
si4=l4;
si5=l3;
si6=l6;
si6=i32_load(&i->m0,(U64)si6+144U);
l33=si6;
si7=l2;
sj0=f1127(i,si0,si1,si2,si3,si4,si5,si6,si7);
goto L10;
L69:;
si0=l19;
si1=l5;
si0=si0 < si1;
if(si0){
goto L62;
}
sj0=l8;
sj1=0ULL;
si0=(U64)((I64)sj0>=(I64)sj1);
if(si0){
goto L63;
}
si0=l4;
si1=-8U;
si0+=si1;
l3=si0;
si0=l5;
si1=3U;
si0<<=(si1&31);
l1=si0;
si0=l19;
si1=3U;
si0<<=(si1&31);
si1=l21;
si0+=si1;
si1=-8U;
si0+=si1;
l15=si0;
si0=l21;
si1=l19;
si2=l5;
si1-=si2;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l12=si0;
L74:;
{
si0=l1;
si0=!(si0);
if(si0){
goto L73;
}
si0=l3;
si1=l1;
si0+=si1;
l16=si0;
si0=l15;
sj0=i64_load(&i->m0,(U64)si0);
l10=sj0;
si0=l15;
si1=-8U;
si0+=si1;
l15=si0;
si0=l1;
si1=-8U;
si0+=si1;
l1=si0;
si0=-1U;
sj1=l10;
si2=l16;
sj2=i64_load(&i->m0,(U64)si2);
l11=sj2;
si1=sj1 != sj2;
sj2=l11;
sj3=l10;
si2=sj2 > sj3;
si0=si2?si0:si1;
l16=si0;
si0=!(si0);
if(si0){
goto L74;
}
goto L72;
}
L73:;
si0=-1U;
si1=0U;
si2=l1;
si0=si2?si0:si1;
l16=si0;
L72:;
si0=0U;
l3=si0;
si0=l16;
si1=0U;
si0=(U32)((I32)si0<(I32)si1);
if(si0){
goto L75;
}
si0=l5;
si1=1U;
si0&=si1;
l33=si0;
sj0=0ULL;
l10=sj0;
si0=l5;
si1=1U;
si0=si0 == si1;
if(si0){
goto L76;
}
si0=l5;
si1=-2U;
si0&=si1;
l2=si0;
si0=0U;
l16=si0;
si0=l4;
l15=si0;
si0=l12;
l1=si0;
si0=0U;
l3=si0;
L77:;
{
si0=l1;
si1=l1;
sj1=i64_load(&i->m0,(U64)si1);
l10=sj1;
si2=l16;
sj2=(U64)(si2);
sj3=1ULL;
sj2&=sj3;
si3=l15;
sj3=i64_load(&i->m0,(U64)si3);
l11=sj3;
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
sj2=l10;
sj3=l11;
si2=sj2 <= sj3;
sj3=l10;
sj4=l11;
si3=sj3 < sj4;
si4=l16;
si5=1U;
si4&=si5;
si2=si4?si2:si3;
l16=si2;
sj2=(U64)(si2);
si3=l15;
si4=8U;
si3+=si4;
sj3=i64_load(&i->m0,(U64)si3);
l10=sj3;
sj2+=sj3;
sj1-=sj2;
i64_store(&i->m0,(U64)si0,sj1);
sj0=l14;
sj1=l10;
si0=sj0 <= sj1;
sj1=l14;
sj2=l10;
si1=sj1 < sj2;
si2=l16;
si0=si2?si0:si1;
l16=si0;
si0=l15;
si1=16U;
si0+=si1;
l15=si0;
si0=l1;
si1=16U;
si0+=si1;
l1=si0;
si0=l2;
si1=l3;
si2=2U;
si1+=si2;
l3=si1;
si0=si0 != si1;
if(si0){
goto L77;
}
}
sj0=0ULL;
si1=l16;
sj1=(U64)(si1);
sj0-=sj1;
l10=sj0;
L76:;
si0=l33;
si0=!(si0);
if(si0){
goto L75;
}
si0=l12;
si1=l3;
si2=3U;
si1<<=(si2&31);
l1=si1;
si0+=si1;
l15=si0;
sj1=l10;
si2=l4;
si3=l1;
si2+=si3;
sj2=i64_load(&i->m0,(U64)si2);
sj1-=sj2;
si2=l15;
sj2=i64_load(&i->m0,(U64)si2);
sj1+=sj2;
i64_store(&i->m0,(U64)si0,sj1);
L75:;
si0=l19;
si1=3U;
si0<<=(si1&31);
l1=si0;
si1=l21;
si0+=si1;
si1=-8U;
si0+=si1;
sj0=i64_load(&i->m0,(U64)si0);
l11=sj0;
si0=l19;
si1=l5;
si0=si0 <= si1;
if(si0){
goto L79;
}
si0=l1;
si1=l5;
si2=3U;
si1<<=(si2&31);
si0-=si1;
si1=l21;
si0+=si1;
si1=-8U;
si0+=si1;
l3=si0;
si0=l19;
l12=si0;
L80:;
{
si0=l12;
l13=si0;
si1=-1U;
si0+=si1;
l12=si0;
sj0=l11;
sj1=l8;
si0=sj0 != sj1;
if(si0){
goto L89;
}
si0=l13;
si1=-2U;
si0+=si1;
l1=si0;
si1=l19;
si0=si0 >= si1;
if(si0){
goto L86;
}
si0=l21;
si1=l1;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l2=si0;
sj0=i64_load(&i->m0,(U64)si0);
sj1=l26;
si0=sj0 == sj1;
if(si0){
goto L88;
}
L89:;
si0=l19;
si1=l13;
si2=-3U;
si1+=si2;
l1=si1;
si0=si0 < si1;
if(si0){
goto L85;
}
si0=l19;
si1=l1;
si0-=si1;
l15=si0;
si1=1U;
si0=si0 > si1;
if(si0){
goto L87;
}
si0=1U;
si1=l15;
si2=1214224U;
f594(i,si0,si1,si2);
UNREACHABLE;
L88:;
sj0=0ULL;
l10=sj0;
si0=0U;
l1=si0;
si0=l5;
l15=si0;
L90:;
{
si0=l6;
si1=40U;
si0+=si1;
si1=l4;
si2=l1;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
sj2=0ULL;
sj3=-1ULL;
sj4=0ULL;
f15157(i,si0,sj1,sj2,sj3,sj4);
si0=l3;
si1=l1;
si0+=si1;
l16=si0;
si1=l16;
sj1=i64_load(&i->m0,(U64)si1);
l14=sj1;
sj2=l10;
si3=l6;
sj3=i64_load(&i->m0,(U64)si3+40U);
sj2+=sj3;
l11=sj2;
sj1-=sj2;
i64_store(&i->m0,(U64)si0,sj1);
sj0=l11;
sj1=l10;
si0=sj0 < sj1;
sj0=(U64)(si0);
si1=l6;
si2=40U;
si1+=si2;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
sj0+=sj1;
sj1=l14;
sj2=l11;
si1=sj1 < sj2;
sj1=(U64)(si1);
sj0+=sj1;
l10=sj0;
si0=l1;
si1=8U;
si0+=si1;
l1=si0;
si0=l15;
si1=-1U;
si0+=si1;
l15=si0;
if(si0){
goto L90;
}
}
si0=l2;
sj0=i64_load(&i->m0,(U64)si0);
l11=sj0;
goto L81;
L87:;
si0=l12;
si1=l5;
si0-=si1;
l15=si0;
si1=l1;
si0=si0 > si1;
if(si0){
goto L84;
}
si0=l6;
si1=88U;
si0+=si1;
sj1=l25;
sj2=1ULL;
sj3=l11;
sj4=0ULL;
f15157(i,si0,sj1,sj2,sj3,sj4);
si0=l6;
si1=72U;
si0+=si1;
si1=l6;
si2=88U;
si1+=si2;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
si2=l6;
sj2=i64_load(&i->m0,(U64)si2+88U);
l10=sj2;
si3=l21;
si4=l1;
si5=3U;
si4<<=(si5&31);
si3+=si4;
l2=si3;
sj3=i64_load(&i->m0,(U64)si3+8U);
l14=sj3;
sj2+=sj3;
l34=sj2;
sj3=l10;
si2=sj2 < sj3;
sj2=(U64)(si2);
sj1+=sj2;
l10=sj1;
sj2=0ULL;
sj3=l26;
sj4=0ULL;
f15157(i,si0,sj1,sj2,sj3,sj4);
sj0=l10;
sj1=1ULL;
sj0+=sj1;
l17=sj0;
si0=l2;
sj0=i64_load(&i->m0,(U64)si0);
l35=sj0;
sj1=l26;
si2=l6;
sj2=i64_load(&i->m0,(U64)si2+72U);
sj1+=sj2;
l11=sj1;
sj0-=sj1;
l36=sj0;
sj0=l34;
sj1=l14;
sj2=l8;
sj3=l10;
sj2*=sj3;
sj1-=sj2;
sj2=l8;
si3=l6;
si4=72U;
si3+=si4;
si4=8U;
si3+=si4;
sj3=i64_load(&i->m0,(U64)si3);
sj2+=sj3;
sj3=l11;
sj4=l26;
si3=sj3 < sj4;
sj3=(U64)(si3);
sj2+=sj3;
sj3=l35;
sj4=l11;
si3=sj3 < sj4;
sj3=(U64)(si3);
sj2+=sj3;
sj1-=sj2;
l35=sj1;
si0=sj0 <= sj1;
if(si0){
goto L83;
}
sj0=l36;
sj1=l26;
si0=sj0 < sj1;
l1=si0;
sj1=l35;
sj2=l8;
si1=sj1 < sj2;
sj2=l35;
sj3=l8;
si2=sj2 == sj3;
si0=si2?si0:si1;
if(si0){
goto L82;
}
sj0=l35;
sj1=l8;
sj0-=sj1;
si1=l1;
sj1=(U64)(si1);
sj0-=sj1;
l35=sj0;
sj0=l36;
sj1=l26;
sj0-=sj1;
l36=sj0;
sj0=l10;
sj1=2ULL;
sj0+=sj1;
l17=sj0;
goto L82;
L86:;
si0=l1;
si1=l19;
si2=1214192U;
f594(i,si0,si1,si2);
UNREACHABLE;
L85:;
si0=1212264U;
si1=35U;
si2=1214208U;
f604(i,si0,si1,si2);
UNREACHABLE;
L84:;
si0=l15;
si1=l1;
si2=1214240U;
f593(i,si0,si1,si2);
UNREACHABLE;
L83:;
sj0=l35;
sj1=l8;
sj0+=sj1;
sj1=l36;
sj2=l26;
sj1+=sj2;
l14=sj1;
sj2=l36;
si1=sj1 < sj2;
l1=si1;
sj1=(U64)(si1);
sj0+=sj1;
l11=sj0;
sj1=l35;
si2=l1;
sj3=l11;
sj4=l35;
si3=sj3 < sj4;
sj4=l11;
sj5=l35;
si4=sj4 == sj5;
si2=si4?si2:si3;
l1=si2;
sj0=si2?sj0:sj1;
l35=sj0;
sj0=l14;
sj1=l36;
si2=l1;
sj0=si2?sj0:sj1;
l36=sj0;
sj0=l10;
sj1=l17;
si2=l1;
sj0=si2?sj0:sj1;
l17=sj0;
L82:;
sj0=0ULL;
l10=sj0;
si0=l22;
si0=!(si0);
if(si0){
goto L91;
}
si0=l3;
l1=si0;
si0=l4;
l15=si0;
si0=l22;
l16=si0;
L92:;
{
si0=l6;
si1=56U;
si0+=si1;
si1=l15;
sj1=i64_load(&i->m0,(U64)si1);
sj2=0ULL;
sj3=l17;
sj4=0ULL;
f15157(i,si0,sj1,sj2,sj3,sj4);
si0=l1;
si1=l1;
sj1=i64_load(&i->m0,(U64)si1);
l14=sj1;
sj2=l10;
si3=l6;
sj3=i64_load(&i->m0,(U64)si3+56U);
sj2+=sj3;
l11=sj2;
sj1-=sj2;
i64_store(&i->m0,(U64)si0,sj1);
sj0=l11;
sj1=l10;
si0=sj0 < sj1;
sj0=(U64)(si0);
si1=l6;
si2=56U;
si1+=si2;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
sj0+=sj1;
sj1=l14;
sj2=l11;
si1=sj1 < sj2;
sj1=(U64)(si1);
sj0+=sj1;
l10=sj0;
si0=l1;
si1=8U;
si0+=si1;
l1=si0;
si0=l15;
si1=8U;
si0+=si1;
l15=si0;
si0=l16;
si1=-1U;
si0+=si1;
l16=si0;
if(si0){
goto L92;
}
}
L91:;
si0=l2;
sj1=l36;
sj2=l10;
sj1-=sj2;
i64_store(&i->m0,(U64)si0,sj1);
sj0=l35;
sj1=l36;
sj2=l10;
si1=sj1 < sj2;
sj1=(U64)(si1);
sj0-=sj1;
l11=sj0;
sj0=l35;
sj1=0ULL;
si0=sj0 != sj1;
if(si0){
goto L81;
}
sj0=l36;
sj1=l10;
si0=sj0 >= sj1;
if(si0){
goto L81;
}
si0=l13;
si1=-2U;
si0+=si1;
l1=si0;
si1=l19;
si0=si0 > si1;
if(si0){
goto L78;
}
sj0=l11;
sj1=l8;
sj0+=sj1;
l14=sj0;
si0=l7;
if(si0){
goto L94;
}
si0=0U;
l15=si0;
goto L93;
L94:;
si0=0U;
l1=si0;
si0=l7;
l16=si0;
si0=0U;
l15=si0;
L95:;
{
si0=l3;
si1=l1;
si0+=si1;
l2=si0;
sj0=i64_load(&i->m0,(U64)si0);
l11=sj0;
si1=l4;
si2=l1;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
sj0+=sj1;
l10=sj0;
sj1=l11;
si0=sj0 < sj1;
l13=si0;
si0=l15;
si1=255U;
si0&=si1;
if(si0){
goto L97;
}
si0=l13;
l15=si0;
goto L96;
L97:;
si0=l13;
sj1=l10;
sj2=1ULL;
sj1+=sj2;
l10=sj1;
si1=!(sj1);
si0|=si1;
l15=si0;
L96:;
si0=l2;
sj1=l10;
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si1=8U;
si0+=si1;
l1=si0;
si0=l16;
si1=-1U;
si0+=si1;
l16=si0;
if(si0){
goto L95;
}
}
L93:;
sj0=l14;
si1=l15;
sj1=(U64)(si1);
sj0+=sj1;
l11=sj0;
L81:;
si0=l3;
si1=-8U;
si0+=si1;
l3=si0;
si0=l12;
si1=l5;
si0=si0 > si1;
if(si0){
goto L80;
}
}
L79:;
si0=l21;
si1=l7;
si2=3U;
si1<<=(si2&31);
si0+=si1;
sj1=l11;
i64_store(&i->m0,(U64)si0,sj1);
si0=l23;
si0=!(si0);
if(si0){
goto L98;
}
si0=l0;
si1=l21;
si2=l5;
si3=3U;
si2<<=(si3&31);
si0=f15143(i,si0,si1,si2);
goto L4;
L98:;
si0=l0;
si1=l5;
si2=l21;
si3=l5;
sj4=l9;
sj0=f1032(i,si0,si1,si2,si3,sj4);
goto L4;
L78:;
si0=l1;
si1=l19;
si2=1214256U;
f597(i,si0,si1,si2);
UNREACHABLE;
L68:;
si0=l16;
si1=l3;
si2=1213244U;
f597(i,si0,si1,si2);
UNREACHABLE;
L67:;
si0=1212264U;
si1=35U;
si2=1213228U;
f604(i,si0,si1,si2);
UNREACHABLE;
L66:;
si0=1212264U;
si1=35U;
si2=1213212U;
f604(i,si0,si1,si2);
UNREACHABLE;
L65:;
si0=8U;
si1=l15;
f52(i,si0,si1);
UNREACHABLE;
L64:;
si0=8U;
si1=l15;
f52(i,si0,si1);
UNREACHABLE;
L63:;
si0=1214272U;
si1=39U;
si2=1214312U;
f604(i,si0,si1,si2);
UNREACHABLE;
L62:;
si0=1214328U;
si1=32U;
si2=1214360U;
f604(i,si0,si1,si2);
UNREACHABLE;
L61:;
si0=l19;
si1=l18;
si2=1213324U;
f597(i,si0,si1,si2);
UNREACHABLE;
L60:;
si0=l19;
si1=l5;
si0-=si1;
l37=si0;
si0=8U;
l38=si0;
si0=l19;
si1=l5;
si0=si0 == si1;
l39=si0;
if(si0){
goto L121;
}
si0=l37;
si1=268435455U;
si0=si0 > si1;
if(si0){
goto L14;
}
si0=l37;
si1=3U;
si0<<=(si1&31);
l1=si0;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L14;
}
si0=l1;
si0=!(si0);
if(si0){
goto L121;
}
si0=l1;
si1=1U;
si0=f15026(i,si0,si1);
l38=si0;
si0=!(si0);
if(si0){
goto L120;
}
L121:;
si0=l5;
si1=3U;
si0+=si1;
si1=l19;
si0=si0 > si1;
if(si0){
goto L119;
}
sj0=l8;
sj1=-1ULL;
si0=(U64)((I64)sj0>(I64)sj1);
if(si0){
goto L117;
}
si0=l5;
si1=268435455U;
si0=si0 > si1;
if(si0){
goto L14;
}
si0=l5;
si1=3U;
si0<<=(si1&31);
l30=si0;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L14;
}
si0=l30;
if(si0){
goto L123;
}
si0=8U;
l40=si0;
goto L122;
L123:;
si0=l30;
si1=1U;
si0=f15026(i,si0,si1);
l40=si0;
si0=!(si0);
if(si0){
goto L118;
}
L122:;
si0=l5;
si1=l37;
si0=si0 < si1;
if(si0){
goto L124;
}
si0=l4;
si1=l5;
si2=l37;
si1-=si2;
l12=si1;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l1=si0;
si0=l37;
si1=85U;
si0=si0 < si1;
if(si0){
goto L126;
}
si0=l19;
si1=l12;
si0=si0 < si1;
if(si0){
goto L116;
}
si0=l38;
si1=l37;
si2=l21;
si3=l12;
si4=3U;
si3<<=(si4&31);
si2+=si3;
si3=l19;
si4=l12;
si3-=si4;
si4=l1;
si5=l37;
sj6=l25;
si7=l40;
si8=l5;
si0=f1165(i,si0,si1,si2,si3,si4,si5,sj6,si7,si8);
l33=si0;
goto L125;
L126:;
si0=l19;
si1=l12;
si0=si0 < si1;
if(si0){
goto L115;
}
si0=l38;
si1=l37;
si2=l21;
si3=l12;
si4=3U;
si3<<=(si4&31);
si2+=si3;
si3=l19;
si4=l12;
si3-=si4;
si4=l1;
si5=l37;
sj6=l25;
si0=f1166(i,si0,si1,si2,si3,si4,si5,sj6);
l33=si0;
L125:;
si0=l5;
si1=l37;
si0=si0 == si1;
if(si0){
goto L99;
}
si0=l19;
si1=l5;
si0=si0 < si1;
if(si0){
goto L114;
}
si0=l37;
si1=l12;
si0=si0 >= si1;
l1=si0;
if(si0){
goto L128;
}
si0=l12;
si1=l37;
si0=f1126(i,si0,si1);
l22=si0;
goto L127;
L128:;
si0=l37;
si1=l12;
si0=f1126(i,si0,si1);
l22=si0;
L127:;
si0=8U;
l7=si0;
si0=l22;
si0=!(si0);
if(si0){
goto L129;
}
si0=l22;
si1=268435455U;
si0=si0 > si1;
if(si0){
goto L14;
}
si0=l22;
si1=3U;
si0<<=(si1&31);
l15=si0;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L14;
}
si0=l15;
si0=!(si0);
if(si0){
goto L129;
}
si0=l15;
si1=1U;
si0=f15026(i,si0,si1);
l7=si0;
si0=!(si0);
if(si0){
goto L113;
}
L129:;
si0=l1;
if(si0){
goto L131;
}
si0=l40;
si1=l5;
si2=l4;
si3=l12;
si4=l38;
si5=l37;
si6=l7;
si7=l22;
sj0=f1127(i,si0,si1,si2,si3,si4,si5,si6,si7);
goto L130;
L131:;
si0=l40;
si1=l5;
si2=l38;
si3=l37;
si4=l4;
si5=l12;
si6=l7;
si7=l22;
sj0=f1127(i,si0,si1,si2,si3,si4,si5,si6,si7);
L130:;
si0=l5;
si1=1U;
si0&=si1;
l41=si0;
si0=l5;
si1=1U;
si0=si0 != si1;
if(si0){
goto L133;
}
si0=0U;
l16=si0;
si0=0U;
l3=si0;
goto L132;
L133:;
si0=l5;
si1=-2U;
si0&=si1;
l2=si0;
si0=0U;
l16=si0;
si0=l40;
l15=si0;
si0=l21;
l1=si0;
si0=0U;
l3=si0;
L134:;
{
si0=l1;
si1=l1;
sj1=i64_load(&i->m0,(U64)si1);
l10=sj1;
si2=l16;
sj2=(U64)(si2);
sj3=1ULL;
sj2&=sj3;
si3=l15;
sj3=i64_load(&i->m0,(U64)si3);
l11=sj3;
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
sj2=l10;
sj3=l11;
si2=sj2 <= sj3;
sj3=l10;
sj4=l11;
si3=sj3 < sj4;
si4=l16;
si5=1U;
si4&=si5;
si2=si4?si2:si3;
l16=si2;
sj2=(U64)(si2);
si3=l15;
si4=8U;
si3+=si4;
sj3=i64_load(&i->m0,(U64)si3);
l10=sj3;
sj2+=sj3;
sj1-=sj2;
i64_store(&i->m0,(U64)si0,sj1);
sj0=l14;
sj1=l10;
si0=sj0 <= sj1;
sj1=l14;
sj2=l10;
si1=sj1 < sj2;
si2=l16;
si0=si2?si0:si1;
l16=si0;
si0=l15;
si1=16U;
si0+=si1;
l15=si0;
si0=l1;
si1=16U;
si0+=si1;
l1=si0;
si0=l2;
si1=l3;
si2=2U;
si1+=si2;
l3=si1;
si0=si0 != si1;
if(si0){
goto L134;
}
}
L132:;
si0=l41;
si0=!(si0);
if(si0){
goto L135;
}
si0=l21;
si1=l3;
si2=3U;
si1<<=(si2&31);
l1=si1;
si0+=si1;
l15=si0;
si1=l15;
sj1=i64_load(&i->m0,(U64)si1);
l10=sj1;
si2=l16;
sj2=(U64)(si2);
si3=l40;
si4=l1;
si3+=si4;
sj3=i64_load(&i->m0,(U64)si3);
l11=sj3;
sj2+=sj3;
sj1-=sj2;
i64_store(&i->m0,(U64)si0,sj1);
sj0=l10;
sj1=l11;
si0=sj0 <= sj1;
sj1=l10;
sj2=l11;
si1=sj1 < sj2;
si2=l16;
si0=si2?si0:si1;
l16=si0;
L135:;
si0=l33;
si0=!(si0);
if(si0){
goto L136;
}
si0=l16;
si1=l21;
si2=l37;
si3=3U;
si2<<=(si3&31);
si1+=si2;
si2=l12;
si3=l4;
si4=l12;
si1=f1057(i,si1,si2,si3,si4);
l1=si1;
si0|=si1;
si1=1U;
si0&=si1;
si0=!(si0);
if(si0){
goto L100;
}
sj0=2ULL;
sj1=1ULL;
si2=l1;
sj0=si2?sj0:sj1;
sj1=1ULL;
si2=l16;
si3=1U;
si2&=si3;
sj0=si2?sj0:sj1;
l14=sj0;
goto L101;
L136:;
sj0=1ULL;
l14=sj0;
si0=l16;
si1=1U;
si0&=si1;
if(si0){
goto L101;
}
goto L100;
L124:;
si0=l38;
si1=l37;
si2=l37;
si3=l5;
si2=REM_U(si2,si3);
l1=si2;
si3=l5;
si4=l1;
si2=si4?si2:si3;
l12=si2;
si1-=si2;
l15=si1;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l2=si0;
si0=l12;
si1=1U;
si0=si0 != si1;
if(si0){
goto L140;
}
si0=l19;
si1=l37;
si2=-1U;
si1+=si2;
l1=si1;
si0=si0 < si1;
if(si0){
goto L112;
}
si0=l19;
si1=l1;
si0-=si1;
l33=si0;
si0=l19;
si1=l1;
si0=si0 == si1;
if(si0){
goto L111;
}
si0=l6;
si1=l33;
si2=-1U;
si1+=si2;
l15=si1;
i32_store(&i->m0,(U64)si0+232U,si1);
si0=l6;
si1=l5;
i32_store(&i->m0,(U64)si0+248U,si1);
si0=l15;
si1=l5;
si0=si0 != si1;
if(si0){
goto L143;
}
si0=l21;
si1=l1;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l13=si0;
si0=l21;
si1=l37;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l41=si0;
si0=l15;
si1=3U;
si0<<=(si1&31);
l1=si0;
si0=l19;
si1=3U;
si0<<=(si1&31);
si1=l21;
si0+=si1;
si1=-8U;
si0+=si1;
l15=si0;
L144:;
{
si0=l1;
si0=!(si0);
if(si0){
goto L142;
}
si0=l15;
sj0=i64_load(&i->m0,(U64)si0);
l10=sj0;
si0=l15;
si1=-8U;
si0+=si1;
l15=si0;
si0=-1U;
sj1=l10;
si2=l1;
si3=-8U;
si2+=si3;
l1=si2;
si3=l4;
si2+=si3;
sj2=i64_load(&i->m0,(U64)si2);
l11=sj2;
si1=sj1 != sj2;
sj2=l11;
sj3=l10;
si2=sj2 > sj3;
si0=si2?si0:si1;
l3=si0;
si0=!(si0);
if(si0){
goto L144;
}
goto L141;
}
L143:;
si0=l6;
si1=0U;
i32_store(&i->m0,(U64)si0+192U,si1);
si0=0U;
si1=l6;
si2=232U;
si1+=si2;
si2=l6;
si3=248U;
si2+=si3;
si3=l6;
si4=192U;
si3+=si4;
si4=1231576U;
f1250(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L142:;
si0=-1U;
si1=0U;
si2=l1;
si0=si2?si0:si1;
l3=si0;
L141:;
si0=l3;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L139;
}
si0=l41;
si1=l5;
si2=l4;
si3=l5;
si0=f1057(i,si0,si1,si2,si3);
si0=!(si0);
if(si0){
goto L139;
}
si0=1214576U;
si1=67U;
si2=1214644U;
f604(i,si0,si1,si2);
UNREACHABLE;
L140:;
si0=l19;
si1=l12;
si2=1U;
si1<<=(si2&31);
l3=si1;
si0-=si1;
l13=si0;
si0=l19;
si1=l3;
si0=si0 < si1;
if(si0){
goto L110;
}
si0=l4;
si1=l5;
si2=l12;
si1-=si2;
l16=si1;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l22=si0;
si0=l21;
si1=l13;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l13=si0;
si0=l12;
si1=2U;
si0=si0 != si1;
if(si0){
goto L138;
}
si0=l2;
si1=2U;
si2=l13;
si3=l3;
si4=l22;
si5=2U;
si0=f1168(i,si0,si1,si2,si3,si4,si5);
l3=si0;
si0=l1;
si0=!(si0);
if(si0){
goto L102;
}
goto L137;
L139:;
si0=l6;
si1=l13;
si2=l5;
si3=3U;
si2<<=(si3&31);
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
l10=sj1;
i64_store(&i->m0,(U64)si0+232U,sj1);
si0=l5;
si0=!(si0);
if(si0){
goto L109;
}
si0=l5;
si1=1U;
si0=si0 == si1;
if(si0){
goto L108;
}
si0=l13;
si1=l7;
si2=3U;
si1<<=(si2&31);
si0+=si1;
sj0=i64_load(&i->m0,(U64)si0);
l11=sj0;
si0=l13;
si1=l22;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l1=si0;
sj0=i64_load(&i->m0,(U64)si0);
l17=sj0;
si0=l16;
sj0=i64_load(&i->m0,(U64)si0);
l14=sj0;
sj0=l10;
sj1=l8;
si0=sj0 < sj1;
if(si0){
goto L145;
}
sj0=l10;
sj1=l8;
si0=sj0 != sj1;
if(si0){
goto L107;
}
sj0=l11;
sj1=l14;
si0=sj0 > sj1;
if(si0){
goto L107;
}
L145:;
sj0=l10;
sj1=l8;
si0=sj0 != sj1;
if(si0){
goto L148;
}
sj0=l11;
sj1=l14;
si0=sj0 == sj1;
if(si0){
goto L147;
}
L148:;
si0=l6;
si1=104U;
si0+=si1;
sj1=l10;
sj2=l11;
sj3=l17;
sj4=l8;
sj5=l14;
sj6=l25;
f1176(i,si0,sj1,sj2,sj3,sj4,sj5,sj6);
si0=l6;
si1=120U;
si0+=si1;
sj0=i64_load(&i->m0,(U64)si0);
l17=sj0;
si0=l1;
si1=l6;
sj1=i64_load(&i->m0,(U64)si1+112U);
l11=sj1;
si2=l13;
si3=l22;
si4=l4;
si5=l22;
si6=l6;
sj6=i64_load(&i->m0,(U64)si6+104U);
l10=sj6;
sj2=f1061(i,si2,si3,si4,si5,sj6);
l14=sj2;
sj1-=sj2;
i64_store(&i->m0,(U64)si0,sj1);
sj0=l17;
sj1=l11;
sj2=l14;
si1=sj1 < sj2;
sj1=(U64)(si1);
sj0-=sj1;
l35=sj0;
si0=l13;
si1=l33;
si2=-2U;
si1+=si2;
l15=si1;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l1=si0;
sj0=l11;
sj1=l14;
si0=sj0 >= sj1;
if(si0){
goto L150;
}
sj0=l17;
si0=!(sj0);
if(si0){
goto L149;
}
L150:;
si0=l1;
sj1=l35;
i64_store(&i->m0,(U64)si0,sj1);
goto L146;
L149:;
sj0=l10;
sj1=-1ULL;
sj0+=sj1;
l10=sj0;
si0=l1;
sj1=l35;
sj2=l8;
sj1+=sj2;
si2=l13;
si3=l15;
si4=l4;
si5=l7;
si2=f1049(i,si2,si3,si4,si5);
sj2=(U64)(si2);
sj1+=sj2;
i64_store(&i->m0,(U64)si0,sj1);
goto L146;
L147:;
sj0=-1ULL;
l10=sj0;
si0=l6;
si1=l13;
si2=l5;
si3=l4;
si4=l5;
sj5=-1ULL;
sj1=f1061(i,si1,si2,si3,si4,sj5);
l11=sj1;
i64_store(&i->m0,(U64)si0+248U,sj1);
sj0=l11;
sj1=l8;
si0=sj0 != sj1;
if(si0){
goto L106;
}
L146:;
si0=l2;
sj1=l10;
i64_store(&i->m0,(U64)si0,sj1);
goto L102;
L138:;
si0=l12;
si1=85U;
si0=si0 < si1;
if(si0){
goto L151;
}
si0=l2;
si1=l12;
si2=l13;
si3=l3;
si4=l22;
si5=l12;
sj6=l25;
si7=l40;
si8=l5;
si0=f1165(i,si0,si1,si2,si3,si4,si5,sj6,si7,si8);
l3=si0;
si0=l1;
si0=!(si0);
if(si0){
goto L102;
}
goto L137;
L151:;
si0=l2;
si1=l12;
si2=l13;
si3=l3;
si4=l22;
si5=l12;
sj6=l25;
si0=f1166(i,si0,si1,si2,si3,si4,si5,sj6);
l3=si0;
si0=l1;
si0=!(si0);
if(si0){
goto L102;
}
L137:;
si0=l1;
si1=l16;
si0=si0 >= si1;
if(si0){
goto L153;
}
si0=l6;
si1=128U;
si0+=si1;
si1=l16;
si2=l1;
si1=f1126(i,si1,si2);
l13=si1;
si2=1U;
f1295(i,si0,si1,si2);
si0=l6;
si0=i32_load(&i->m0,(U64)si0+132U);
l41=si0;
si0=l40;
si1=l5;
si2=l4;
si3=l16;
si4=l2;
si5=l1;
si6=l6;
si6=i32_load(&i->m0,(U64)si6+128U);
l42=si6;
si7=l13;
sj0=f1127(i,si0,si1,si2,si3,si4,si5,si6,si7);
goto L152;
L153:;
si0=l6;
si1=136U;
si0+=si1;
si1=l1;
si2=l16;
si1=f1126(i,si1,si2);
l13=si1;
si2=1U;
f1295(i,si0,si1,si2);
si0=l6;
si0=i32_load(&i->m0,(U64)si0+140U);
l41=si0;
si0=l40;
si1=l5;
si2=l2;
si3=l1;
si4=l4;
si5=l16;
si6=l6;
si6=i32_load(&i->m0,(U64)si6+136U);
l42=si6;
si7=l13;
sj0=f1127(i,si0,si1,si2,si3,si4,si5,si6,si7);
L152:;
si0=l19;
si1=l1;
si0-=si1;
l13=si0;
si1=l15;
si0=si0 < si1;
if(si0){
goto L105;
}
si0=l19;
si1=l1;
si0=si0 < si1;
if(si0){
goto L104;
}
si0=l21;
si1=l15;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l22=si0;
si1=l13;
si2=l15;
si1-=si2;
l13=si1;
si2=l40;
si3=l5;
si0=f1057(i,si0,si1,si2,si3);
l7=si0;
si0=l3;
si0=!(si0);
if(si0){
goto L157;
}
si0=l13;
si1=l1;
si0=si0 < si1;
if(si0){
goto L103;
}
si0=l7;
si1=l22;
si2=l1;
si3=3U;
si2<<=(si3&31);
si1+=si2;
si2=l13;
si3=l1;
si2-=si3;
si3=l4;
si4=l16;
si1=f1057(i,si1,si2,si3,si4);
l1=si1;
si0|=si1;
si0=!(si0);
if(si0){
goto L155;
}
sj0=2ULL;
sj1=1ULL;
si2=l1;
sj0=si2?sj0:sj1;
sj1=1ULL;
si2=l7;
sj0=si2?sj0:sj1;
l14=sj0;
goto L156;
L157:;
sj0=1ULL;
l14=sj0;
si0=l7;
si0=!(si0);
if(si0){
goto L155;
}
L156:;
si0=l13;
si1=l5;
si0=si0 != si1;
if(si0){
goto L154;
}
si0=l12;
si1=3U;
si0<<=(si1&31);
si1=-8U;
si0+=si1;
l7=si0;
si0=l15;
si1=3U;
si0<<=(si1&31);
si1=l38;
si0+=si1;
si1=8U;
si0+=si1;
l33=si0;
L158:;
{
si0=l2;
si1=l2;
sj1=i64_load(&i->m0,(U64)si1);
l10=sj1;
sj2=-1ULL;
sj1+=sj2;
i64_store(&i->m0,(U64)si0,sj1);
sj0=l10;
sj1=0ULL;
si0=sj0 != sj1;
if(si0){
goto L159;
}
si0=l7;
l15=si0;
si0=l33;
l1=si0;
L160:;
{
si0=l15;
si0=!(si0);
if(si0){
goto L159;
}
si0=l1;
si1=l1;
sj1=i64_load(&i->m0,(U64)si1);
l10=sj1;
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
sj0=l10;
si0=!(sj0);
if(si0){
goto L160;
}
}
L159:;
si0=0U;
l16=si0;
si0=l5;
l3=si0;
si0=l22;
l1=si0;
si0=l4;
l15=si0;
L161:;
{
si0=l1;
sj0=i64_load(&i->m0,(U64)si0);
l11=sj0;
si1=l15;
sj1=i64_load(&i->m0,(U64)si1);
sj0+=sj1;
l10=sj0;
sj1=l11;
si0=sj0 < sj1;
l13=si0;
si0=l16;
si1=255U;
si0&=si1;
if(si0){
goto L163;
}
si0=l13;
l16=si0;
goto L162;
L163:;
si0=l13;
sj1=l10;
sj2=1ULL;
sj1+=sj2;
l10=sj1;
si1=!(sj1);
si0|=si1;
l16=si0;
L162:;
si0=l1;
sj1=l10;
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si1=8U;
si0+=si1;
l1=si0;
si0=l15;
si1=8U;
si0+=si1;
l15=si0;
si0=l3;
si1=-1U;
si0+=si1;
l3=si0;
if(si0){
goto L161;
}
}
sj0=l14;
si1=l16;
sj1=(U64)(si1);
sj0-=sj1;
l14=sj0;
sj1=0ULL;
si0=sj0 != sj1;
if(si0){
goto L158;
}
}
L155:;
si0=l41;
si0=!(si0);
if(si0){
goto L102;
}
si0=l42;
f15024(i,si0);
goto L102;
L154:;
si0=l2;
si1=l2;
sj1=i64_load(&i->m0,(U64)si1);
l10=sj1;
sj2=-1ULL;
sj1+=sj2;
i64_store(&i->m0,(U64)si0,sj1);
sj0=l10;
sj1=0ULL;
si0=sj0 != sj1;
if(si0){
goto L164;
}
si0=l12;
si1=3U;
si0<<=(si1&31);
si1=-8U;
si0+=si1;
l4=si0;
si0=l15;
si1=3U;
si0<<=(si1&31);
si1=l38;
si0+=si1;
si1=8U;
si0+=si1;
l1=si0;
L165:;
{
si0=l4;
si0=!(si0);
if(si0){
goto L164;
}
si0=l1;
si1=l1;
sj1=i64_load(&i->m0,(U64)si1);
l10=sj1;
sj2=-1ULL;
sj1+=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=-8U;
si0+=si1;
l4=si0;
si0=l1;
si1=8U;
si0+=si1;
l1=si0;
sj0=l10;
si0=!(sj0);
if(si0){
goto L165;
}
}
L164:;
si0=l6;
si1=l13;
i32_store(&i->m0,(U64)si0+232U,si1);
si0=l6;
si1=l5;
i32_store(&i->m0,(U64)si0+248U,si1);
si0=l6;
si1=0U;
i32_store(&i->m0,(U64)si0+192U,si1);
si0=0U;
si1=l6;
si2=232U;
si1+=si2;
si2=l6;
si3=248U;
si2+=si3;
si3=l6;
si4=192U;
si3+=si4;
si4=1203184U;
f1250(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L120:;
si0=8U;
si1=l1;
f52(i,si0,si1);
UNREACHABLE;
L119:;
si0=1214772U;
si1=36U;
si2=1214808U;
f604(i,si0,si1,si2);
UNREACHABLE;
L118:;
si0=8U;
si1=l30;
f52(i,si0,si1);
UNREACHABLE;
L117:;
si0=1214272U;
si1=39U;
si2=1214756U;
f604(i,si0,si1,si2);
UNREACHABLE;
L116:;
si0=l12;
si1=l19;
si2=1214376U;
f593(i,si0,si1,si2);
UNREACHABLE;
L115:;
si0=l12;
si1=l19;
si2=1214392U;
f593(i,si0,si1,si2);
UNREACHABLE;
L114:;
si0=l5;
si1=l19;
si2=1214408U;
f597(i,si0,si1,si2);
UNREACHABLE;
L113:;
si0=8U;
si1=l15;
f52(i,si0,si1);
UNREACHABLE;
L112:;
si0=l1;
si1=l19;
si2=1214424U;
f593(i,si0,si1,si2);
UNREACHABLE;
L111:;
si0=1U;
si1=l33;
si2=1214440U;
f593(i,si0,si1,si2);
UNREACHABLE;
L110:;
si0=l13;
si1=l19;
si2=1214660U;
f593(i,si0,si1,si2);
UNREACHABLE;
L109:;
si0=l7;
si1=l5;
si2=1214456U;
f594(i,si0,si1,si2);
UNREACHABLE;
L108:;
si0=l22;
si1=l5;
si2=1214472U;
f594(i,si0,si1,si2);
UNREACHABLE;
L107:;
si0=1214504U;
si1=55U;
si2=1214560U;
f604(i,si0,si1,si2);
UNREACHABLE;
L106:;
si0=l6;
si1=0U;
i32_store(&i->m0,(U64)si0+192U,si1);
si0=0U;
si1=l6;
si2=248U;
si1+=si2;
si2=l6;
si3=232U;
si2+=si3;
si3=l6;
si4=192U;
si3+=si4;
si4=1214488U;
f1251(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L105:;
si0=l15;
si1=l13;
si2=1214676U;
f683(i,si0,si1,si2);
UNREACHABLE;
L104:;
si0=l13;
si1=l19;
si2=1214676U;
f597(i,si0,si1,si2);
UNREACHABLE;
L103:;
si0=l1;
si1=l13;
si2=1214692U;
f593(i,si0,si1,si2);
UNREACHABLE;
L102:;
si0=l19;
si1=l12;
si2=l5;
si1+=si2;
l1=si1;
si0=si0 < si1;
if(si0){
goto L166;
}
si0=l19;
si1=l1;
si0-=si1;
l43=si0;
si0=!(si0);
if(si0){
goto L99;
}
si0=l21;
si1=l19;
si2=3U;
si1<<=(si2&31);
si2=l1;
si3=3U;
si2<<=(si3&31);
si1-=si2;
si0+=si1;
l44=si0;
si0=l5;
si1=1U;
si0>>=(si1&31);
l7=si0;
si1=l5;
si0+=si1;
l45=si0;
si1=l5;
si2=l7;
si1-=si2;
l46=si1;
si0-=si1;
l47=si0;
si0=l21;
si1=l19;
si2=l12;
si1-=si2;
si2=l5;
si3=1U;
si2<<=(si3&31);
si1-=si2;
si2=3U;
si1<<=(si2&31);
l1=si1;
si0+=si1;
l12=si0;
si0=l5;
si1=3U;
si0<<=(si1&31);
l15=si0;
si1=l7;
si2=3U;
si1<<=(si2&31);
l48=si1;
si0-=si1;
si1=-8U;
si0+=si1;
l49=si0;
si0=l21;
si1=l48;
si2=l1;
si1+=si2;
l1=si1;
si0+=si1;
l2=si0;
si0=l1;
si1=l38;
si0+=si1;
si1=8U;
si0+=si1;
l50=si0;
si0=l5;
si1=1U;
si0&=si1;
l51=si0;
si0=l5;
si1=2U;
si0&=si1;
l52=si0;
si0=l5;
si1=-1U;
si0+=si1;
l53=si0;
si0=0U;
si1=l5;
si2=-2U;
si1&=si2;
l54=si1;
si0-=si1;
l22=si0;
si0=0U;
si1=l15;
si0-=si1;
l55=si0;
si0=l20;
si1=l54;
si0-=si1;
l56=si0;
si0=0U;
si1=l7;
si2=2147483646U;
si1&=si2;
si0-=si1;
l42=si0;
si0=l46;
si1=1U;
si0&=si1;
l29=si0;
si0=l4;
si1=l48;
si0+=si1;
l57=si0;
si0=0U;
si1=l46;
si2=-2U;
si1&=si2;
si0-=si1;
l58=si0;
si0=l4;
si1=l46;
si2=3U;
si1<<=(si2&31);
l59=si1;
si0+=si1;
l60=si0;
si0=l46;
si1=85U;
si0=si0 < si1;
l61=si0;
si0=l5;
si1=170U;
si0=si0 < si1;
l62=si0;
L170:;
{
si0=l37;
si1=l43;
si2=l5;
si1-=si2;
l63=si1;
si0=si0 < si1;
if(si0){
goto L183;
}
si0=l19;
si1=l63;
si0=si0 < si1;
if(si0){
goto L182;
}
si0=l37;
si1=l63;
si0-=si1;
l64=si0;
si1=l7;
si0=si0 < si1;
if(si0){
goto L181;
}
si0=l19;
si1=l63;
si0-=si1;
l65=si0;
si0=l21;
si1=l63;
si2=3U;
si1<<=(si2&31);
l15=si1;
si0+=si1;
l66=si0;
si0=l64;
si1=l7;
si0-=si1;
l1=si0;
si0=l38;
si1=l15;
si0+=si1;
l67=si0;
si1=l48;
si0+=si1;
l33=si0;
si0=l61;
if(si0){
goto L185;
}
si0=l65;
si1=l54;
si0=si0 < si1;
if(si0){
goto L180;
}
si0=l33;
si1=l1;
si2=l66;
si3=l54;
si4=3U;
si3<<=(si4&31);
si2+=si3;
si3=l65;
si4=l54;
si3-=si4;
si4=l57;
si5=l46;
sj6=l25;
si7=l40;
si8=l5;
si0=f1165(i,si0,si1,si2,si3,si4,si5,sj6,si7,si8);
l41=si0;
goto L184;
L185:;
si0=l20;
si1=l54;
si0=si0 < si1;
if(si0){
goto L179;
}
si0=l20;
si1=l65;
si0=si0 > si1;
if(si0){
goto L178;
}
si0=l33;
si1=l1;
si2=l66;
si3=l54;
si4=3U;
si3<<=(si4&31);
si2+=si3;
si3=l56;
si4=l57;
si5=l46;
sj6=l25;
si0=f1166(i,si0,si1,si2,si3,si4,si5,sj6);
l41=si0;
L184:;
si0=l46;
si1=l1;
si0=si0 > si1;
if(si0){
goto L177;
}
si0=8U;
l68=si0;
si0=l46;
si1=l7;
si0=f1126(i,si0,si1);
l69=si0;
si0=!(si0);
if(si0){
goto L186;
}
si0=l69;
si1=268435455U;
si0=si0 > si1;
if(si0){
goto L14;
}
si0=l69;
si1=3U;
si0<<=(si1&31);
l1=si0;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L14;
}
si0=l1;
si0=!(si0);
if(si0){
goto L186;
}
si0=l1;
si1=1U;
si0=f15026(i,si0,si1);
l68=si0;
si0=!(si0);
if(si0){
goto L176;
}
L186:;
si0=l40;
si1=l5;
si2=l33;
si3=l46;
si4=l4;
si5=l7;
si6=l68;
si7=l69;
sj0=f1127(i,si0,si1,si2,si3,si4,si5,si6,si7);
si0=l45;
si1=l65;
si0=si0 > si1;
if(si0){
goto L175;
}
si0=l7;
si1=l45;
si0=si0 > si1;
if(si0){
goto L174;
}
si0=l53;
if(si0){
goto L188;
}
si0=0U;
l16=si0;
si0=0U;
l1=si0;
goto L187;
L188:;
si0=0U;
l3=si0;
si0=l2;
l1=si0;
si0=l40;
l15=si0;
si0=0U;
l16=si0;
L189:;
{
si0=l1;
si1=l1;
sj1=i64_load(&i->m0,(U64)si1);
l10=sj1;
si2=l16;
sj2=(U64)(si2);
sj3=1ULL;
sj2&=sj3;
si3=l15;
sj3=i64_load(&i->m0,(U64)si3);
l11=sj3;
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
sj2=l10;
sj3=l11;
si2=sj2 <= sj3;
sj3=l10;
sj4=l11;
si3=sj3 < sj4;
si4=l16;
si5=1U;
si4&=si5;
si2=si4?si2:si3;
l16=si2;
sj2=(U64)(si2);
si3=l15;
si4=8U;
si3+=si4;
sj3=i64_load(&i->m0,(U64)si3);
l10=sj3;
sj2+=sj3;
sj1-=sj2;
i64_store(&i->m0,(U64)si0,sj1);
sj0=l14;
sj1=l10;
si0=sj0 <= sj1;
sj1=l14;
sj2=l10;
si1=sj1 < sj2;
si2=l16;
si0=si2?si0:si1;
l16=si0;
si0=l1;
si1=16U;
si0+=si1;
l1=si0;
si0=l15;
si1=16U;
si0+=si1;
l15=si0;
si0=l22;
si1=l3;
si2=-2U;
si1+=si2;
l3=si1;
si0=si0 != si1;
if(si0){
goto L189;
}
}
si0=0U;
si1=l3;
si0-=si1;
l1=si0;
L187:;
si0=l66;
si1=l48;
si0+=si1;
l70=si0;
si0=l51;
si0=!(si0);
if(si0){
goto L190;
}
si0=l70;
si1=l1;
si2=3U;
si1<<=(si2&31);
l1=si1;
si0+=si1;
l15=si0;
si1=l15;
sj1=i64_load(&i->m0,(U64)si1);
l10=sj1;
si2=l16;
sj2=(U64)(si2);
si3=l40;
si4=l1;
si3+=si4;
sj3=i64_load(&i->m0,(U64)si3);
l11=sj3;
sj2+=sj3;
sj1-=sj2;
i64_store(&i->m0,(U64)si0,sj1);
sj0=l10;
sj1=l11;
si0=sj0 <= sj1;
sj1=l10;
sj2=l11;
si1=sj1 < sj2;
si2=l16;
si0=si2?si0:si1;
l16=si0;
L190:;
si0=l41;
si0=!(si0);
if(si0){
goto L191;
}
si0=l45;
si1=l5;
si0=si0 < si1;
if(si0){
goto L173;
}
si0=0U;
l3=si0;
si0=0U;
l1=si0;
si0=l7;
si1=1U;
si0=si0 == si1;
if(si0){
goto L192;
}
si0=0U;
l13=si0;
si0=l44;
l1=si0;
si0=l4;
l15=si0;
si0=0U;
l3=si0;
L193:;
{
si0=l1;
si1=l1;
sj1=i64_load(&i->m0,(U64)si1);
l10=sj1;
si2=l3;
sj2=(U64)(si2);
sj3=1ULL;
sj2&=sj3;
si3=l15;
sj3=i64_load(&i->m0,(U64)si3);
l11=sj3;
sj2+=sj3;
sj1-=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si1=8U;
si0+=si1;
l41=si0;
si1=l41;
sj1=i64_load(&i->m0,(U64)si1);
l14=sj1;
sj2=l10;
sj3=l11;
si2=sj2 <= sj3;
sj3=l10;
sj4=l11;
si3=sj3 < sj4;
si4=l3;
si5=1U;
si4&=si5;
si2=si4?si2:si3;
l3=si2;
sj2=(U64)(si2);
si3=l15;
si4=8U;
si3+=si4;
sj3=i64_load(&i->m0,(U64)si3);
l10=sj3;
sj2+=sj3;
sj1-=sj2;
i64_store(&i->m0,(U64)si0,sj1);
sj0=l14;
sj1=l10;
si0=sj0 <= sj1;
sj1=l14;
sj2=l10;
si1=sj1 < sj2;
si2=l3;
si0=si2?si0:si1;
l3=si0;
si0=l1;
si1=16U;
si0+=si1;
l1=si0;
si0=l15;
si1=16U;
si0+=si1;
l15=si0;
si0=l42;
si1=l13;
si2=-2U;
si1+=si2;
l13=si1;
si0=si0 != si1;
if(si0){
goto L193;
}
}
si0=0U;
si1=l13;
si0-=si1;
l1=si0;
L192:;
si0=l52;
si0=!(si0);
if(si0){
goto L194;
}
si0=l21;
si1=l43;
si2=3U;
si1<<=(si2&31);
si0+=si1;
si1=l1;
si2=3U;
si1<<=(si2&31);
l1=si1;
si0+=si1;
l15=si0;
si1=l15;
sj1=i64_load(&i->m0,(U64)si1);
l10=sj1;
si2=l3;
sj2=(U64)(si2);
si3=l4;
si4=l1;
si3+=si4;
sj3=i64_load(&i->m0,(U64)si3);
l11=sj3;
sj2+=sj3;
sj1-=sj2;
i64_store(&i->m0,(U64)si0,sj1);
sj0=l10;
sj1=l11;
si0=sj0 <= sj1;
sj1=l10;
sj2=l11;
si1=sj1 < sj2;
si2=l3;
si0=si2?si0:si1;
l3=si0;
L194:;
si0=l16;
si1=l3;
si0|=si1;
si1=1U;
si0&=si1;
si0=!(si0);
if(si0){
goto L171;
}
sj0=2ULL;
sj1=1ULL;
si2=l3;
si3=1U;
si2&=si3;
sj0=si2?sj0:sj1;
sj1=1ULL;
si2=l16;
si3=1U;
si2&=si3;
sj0=si2?sj0:sj1;
l14=sj0;
goto L172;
L191:;
sj0=1ULL;
l14=sj0;
si0=l16;
si1=1U;
si0&=si1;
if(si0){
goto L172;
}
goto L171;
L183:;
si0=l63;
si1=l37;
si2=1214724U;
f593(i,si0,si1,si2);
UNREACHABLE;
L182:;
si0=l63;
si1=l19;
si2=1214740U;
f593(i,si0,si1,si2);
UNREACHABLE;
L181:;
si0=l7;
si1=l64;
si2=1212836U;
f593(i,si0,si1,si2);
UNREACHABLE;
L180:;
si0=l54;
si1=l65;
si2=1212852U;
f593(i,si0,si1,si2);
UNREACHABLE;
L179:;
si0=l54;
si1=l20;
si2=1212868U;
f683(i,si0,si1,si2);
UNREACHABLE;
L178:;
si0=l20;
si1=l65;
si2=1212868U;
f597(i,si0,si1,si2);
UNREACHABLE;
L177:;
si0=l46;
si1=l1;
si2=1212884U;
f597(i,si0,si1,si2);
UNREACHABLE;
L176:;
si0=8U;
si1=l1;
f52(i,si0,si1);
UNREACHABLE;
L175:;
si0=l45;
si1=l65;
si2=1212900U;
f597(i,si0,si1,si2);
UNREACHABLE;
L174:;
si0=l7;
si1=l45;
si2=1212916U;
f593(i,si0,si1,si2);
UNREACHABLE;
L173:;
si0=l5;
si1=l45;
si2=1212932U;
f593(i,si0,si1,si2);
UNREACHABLE;
L172:;
L195:;
{
si0=l5;
si1=l7;
si0=si0 == si1;
if(si0){
goto L196;
}
si0=l33;
si1=l33;
sj1=i64_load(&i->m0,(U64)si1);
l10=sj1;
sj2=-1ULL;
sj1+=sj2;
i64_store(&i->m0,(U64)si0,sj1);
sj0=l10;
sj1=0ULL;
si0=sj0 != sj1;
if(si0){
goto L196;
}
si0=l49;
l15=si0;
si0=l50;
l1=si0;
L197:;
{
si0=l15;
si0=!(si0);
if(si0){
goto L196;
}
si0=l1;
si1=l1;
sj1=i64_load(&i->m0,(U64)si1);
l10=sj1;
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
sj0=l10;
si0=!(sj0);
if(si0){
goto L197;
}
}
L196:;
si0=0U;
l1=si0;
si0=l5;
l16=si0;
si0=0U;
l15=si0;
L198:;
{
si0=l2;
si1=l1;
si0+=si1;
l3=si0;
sj0=i64_load(&i->m0,(U64)si0);
l11=sj0;
si1=l4;
si2=l1;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
sj0+=sj1;
l10=sj0;
sj1=l11;
si0=sj0 < sj1;
l13=si0;
si0=l15;
si1=255U;
si0&=si1;
if(si0){
goto L200;
}
si0=l13;
l15=si0;
goto L199;
L200:;
si0=l13;
sj1=l10;
sj2=1ULL;
sj1+=sj2;
l10=sj1;
si1=!(sj1);
si0|=si1;
l15=si0;
L199:;
si0=l3;
sj1=l10;
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si1=8U;
si0+=si1;
l1=si0;
si0=l16;
si1=-1U;
si0+=si1;
l16=si0;
if(si0){
goto L198;
}
}
sj0=l14;
si1=l15;
sj1=(U64)(si1);
sj0-=sj1;
l14=sj0;
si0=!(sj0);
si0=!(si0);
if(si0){
goto L195;
}
}
L171:;
si0=l62;
if(si0){
goto L203;
}
si0=l65;
si1=l46;
si0=si0 < si1;
if(si0){
goto L201;
}
si0=l67;
si1=l64;
si2=l66;
si3=l59;
si2+=si3;
si3=l65;
si4=l46;
si3-=si4;
si4=l60;
si5=l7;
sj6=l25;
si7=l40;
si8=l5;
si0=f1165(i,si0,si1,si2,si3,si4,si5,sj6,si7,si8);
l33=si0;
goto L202;
L203:;
si0=l45;
si1=l46;
si0=si0 < si1;
if(si0){
goto L169;
}
si0=l67;
si1=l64;
si2=l66;
si3=l59;
si2+=si3;
si3=l47;
si4=l60;
si5=l7;
sj6=l25;
si0=f1166(i,si0,si1,si2,si3,si4,si5,sj6);
l33=si0;
L202:;
si0=l65;
si1=l5;
si0=si0 < si1;
if(si0){
goto L168;
}
si0=8U;
l65=si0;
si0=l46;
si1=l7;
si0=f1126(i,si0,si1);
l41=si0;
si0=!(si0);
if(si0){
goto L204;
}
si0=l41;
si1=268435455U;
si0=si0 > si1;
if(si0){
goto L14;
}
si0=l41;
si1=3U;
si0<<=(si1&31);
l1=si0;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L14;
}
si0=l1;
si0=!(si0);
if(si0){
goto L204;
}
si0=l1;
si1=1U;
si0=f15026(i,si0,si1);
l65=si0;
si0=!(si0);
if(si0){
goto L167;
}
L204:;
si0=l40;
si1=l5;
si2=l4;
si3=l46;
si4=l67;
si5=l7;
si6=l65;
si7=l41;
sj0=f1127(i,si0,si1,si2,si3,si4,si5,si6,si7);
si0=l53;
if(si0){
goto L206;
}
si0=0U;
l16=si0;
si0=0U;
l1=si0;
goto L205;
L206:;
si0=0U;
l3=si0;
si0=l12;
l1=si0;
si0=l40;
l15=si0;
si0=0U;
l16=si0;
L207:;
{
si0=l1;
si1=l1;
sj1=i64_load(&i->m0,(U64)si1);
l10=sj1;
si2=l16;
sj2=(U64)(si2);
sj3=1ULL;
sj2&=sj3;
si3=l15;
sj3=i64_load(&i->m0,(U64)si3);
l11=sj3;
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
sj2=l10;
sj3=l11;
si2=sj2 <= sj3;
sj3=l10;
sj4=l11;
si3=sj3 < sj4;
si4=l16;
si5=1U;
si4&=si5;
si2=si4?si2:si3;
l16=si2;
sj2=(U64)(si2);
si3=l15;
si4=8U;
si3+=si4;
sj3=i64_load(&i->m0,(U64)si3);
l10=sj3;
sj2+=sj3;
sj1-=sj2;
i64_store(&i->m0,(U64)si0,sj1);
sj0=l14;
sj1=l10;
si0=sj0 <= sj1;
sj1=l14;
sj2=l10;
si1=sj1 < sj2;
si2=l16;
si0=si2?si0:si1;
l16=si0;
si0=l1;
si1=16U;
si0+=si1;
l1=si0;
si0=l15;
si1=16U;
si0+=si1;
l15=si0;
si0=l22;
si1=l3;
si2=-2U;
si1+=si2;
l3=si1;
si0=si0 != si1;
if(si0){
goto L207;
}
}
si0=0U;
si1=l3;
si0-=si1;
l1=si0;
L205:;
si0=l51;
si0=!(si0);
if(si0){
goto L208;
}
si0=l66;
si1=l1;
si2=3U;
si1<<=(si2&31);
l1=si1;
si0+=si1;
l15=si0;
si1=l15;
sj1=i64_load(&i->m0,(U64)si1);
l10=sj1;
si2=l16;
sj2=(U64)(si2);
si3=l40;
si4=l1;
si3+=si4;
sj3=i64_load(&i->m0,(U64)si3);
l11=sj3;
sj2+=sj3;
sj1-=sj2;
i64_store(&i->m0,(U64)si0,sj1);
sj0=l10;
sj1=l11;
si0=sj0 <= sj1;
sj1=l10;
sj2=l11;
si1=sj1 < sj2;
si2=l16;
si0=si2?si0:si1;
l16=si0;
L208:;
si0=l33;
si0=!(si0);
if(si0){
goto L211;
}
si0=0U;
l15=si0;
si0=l5;
si1=l7;
si0=si0 == si1;
if(si0){
goto L212;
}
si0=0U;
l15=si0;
si0=0U;
l1=si0;
si0=l53;
si1=l7;
si0=si0 == si1;
if(si0){
goto L213;
}
si0=0U;
l1=si0;
si0=0U;
l13=si0;
si0=0U;
l15=si0;
L214:;
{
si0=l2;
si1=l1;
si0+=si1;
l3=si0;
si1=l3;
sj1=i64_load(&i->m0,(U64)si1);
l10=sj1;
si2=l15;
sj2=(U64)(si2);
sj3=1ULL;
sj2&=sj3;
si3=l4;
si4=l1;
si3+=si4;
l33=si3;
sj3=i64_load(&i->m0,(U64)si3);
l11=sj3;
sj2+=sj3;
sj1-=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=8U;
si0+=si1;
l3=si0;
si1=l3;
sj1=i64_load(&i->m0,(U64)si1);
l14=sj1;
sj2=l10;
sj3=l11;
si2=sj2 <= sj3;
sj3=l10;
sj4=l11;
si3=sj3 < sj4;
si4=l15;
si5=1U;
si4&=si5;
si2=si4?si2:si3;
l15=si2;
sj2=(U64)(si2);
si3=l33;
si4=8U;
si3+=si4;
sj3=i64_load(&i->m0,(U64)si3);
l10=sj3;
sj2+=sj3;
sj1-=sj2;
i64_store(&i->m0,(U64)si0,sj1);
sj0=l14;
sj1=l10;
si0=sj0 <= sj1;
sj1=l14;
sj2=l10;
si1=sj1 < sj2;
si2=l15;
si0=si2?si0:si1;
l15=si0;
si0=l1;
si1=16U;
si0+=si1;
l1=si0;
si0=l58;
si1=l13;
si2=-2U;
si1+=si2;
l13=si1;
si0=si0 != si1;
if(si0){
goto L214;
}
}
si0=0U;
si1=l13;
si0-=si1;
l1=si0;
L213:;
si0=l29;
si0=!(si0);
if(si0){
goto L212;
}
si0=l70;
si1=l1;
si2=3U;
si1<<=(si2&31);
l1=si1;
si0+=si1;
l3=si0;
si1=l3;
sj1=i64_load(&i->m0,(U64)si1);
l10=sj1;
si2=l15;
sj2=(U64)(si2);
si3=l4;
si4=l1;
si3+=si4;
sj3=i64_load(&i->m0,(U64)si3);
l11=sj3;
sj2+=sj3;
sj1-=sj2;
i64_store(&i->m0,(U64)si0,sj1);
sj0=l10;
sj1=l11;
si0=sj0 <= sj1;
sj1=l10;
sj2=l11;
si1=sj1 < sj2;
si2=l15;
si0=si2?si0:si1;
l15=si0;
L212:;
si0=l16;
si1=l15;
si0|=si1;
si1=1U;
si0&=si1;
si0=!(si0);
if(si0){
goto L209;
}
sj0=2ULL;
sj1=1ULL;
si2=l15;
si3=1U;
si2&=si3;
sj0=si2?sj0:sj1;
sj1=1ULL;
si2=l16;
si3=1U;
si2&=si3;
sj0=si2?sj0:sj1;
l14=sj0;
goto L210;
L211:;
sj0=1ULL;
l14=sj0;
si0=l16;
si1=1U;
si0&=si1;
si0=!(si0);
if(si0){
goto L209;
}
L210:;
L215:;
{
si0=0U;
l1=si0;
si0=l5;
l16=si0;
si0=0U;
l15=si0;
L216:;
{
si0=l12;
si1=l1;
si0+=si1;
l3=si0;
sj0=i64_load(&i->m0,(U64)si0);
l11=sj0;
si1=l4;
si2=l1;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
sj0+=sj1;
l10=sj0;
sj1=l11;
si0=sj0 < sj1;
l13=si0;
si0=l15;
si1=255U;
si0&=si1;
if(si0){
goto L218;
}
si0=l13;
l15=si0;
goto L217;
L218:;
si0=l13;
sj1=l10;
sj2=1ULL;
sj1+=sj2;
l10=sj1;
si1=!(sj1);
si0|=si1;
l15=si0;
L217:;
si0=l3;
sj1=l10;
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si1=8U;
si0+=si1;
l1=si0;
si0=l16;
si1=-1U;
si0+=si1;
l16=si0;
if(si0){
goto L216;
}
}
sj0=l14;
si1=l15;
sj1=(U64)(si1);
sj0-=sj1;
l14=sj0;
sj1=0ULL;
si0=sj0 != sj1;
if(si0){
goto L215;
}
}
L209:;
si0=l41;
si0=!(si0);
if(si0){
goto L219;
}
si0=l65;
f15024(i,si0);
L219:;
si0=l69;
si0=!(si0);
if(si0){
goto L220;
}
si0=l68;
f15024(i,si0);
L220:;
si0=l12;
si1=l55;
si0+=si1;
l12=si0;
si0=l50;
si1=l55;
si0+=si1;
l50=si0;
si0=l44;
si1=l55;
si0+=si1;
l44=si0;
si0=l2;
si1=l55;
si0+=si1;
l2=si0;
si0=l63;
l43=si0;
si0=l63;
if(si0){
goto L170;
}
goto L99;
L201:;
}
si0=l46;
si1=l65;
si2=1212948U;
f593(i,si0,si1,si2);
UNREACHABLE;
L169:;
si0=l46;
si1=l45;
si2=1212964U;
f683(i,si0,si1,si2);
UNREACHABLE;
L168:;
si0=l5;
si1=l65;
si2=1212980U;
f597(i,si0,si1,si2);
UNREACHABLE;
L167:;
si0=8U;
si1=l1;
f52(i,si0,si1);
UNREACHABLE;
L166:;
si0=1212393U;
si1=43U;
si2=1214708U;
f604(i,si0,si1,si2);
UNREACHABLE;
L101:;
L221:;
{
si0=0U;
l16=si0;
si0=l5;
l3=si0;
si0=l21;
l1=si0;
si0=l4;
l15=si0;
L222:;
{
si0=l1;
sj0=i64_load(&i->m0,(U64)si0);
l11=sj0;
si1=l15;
sj1=i64_load(&i->m0,(U64)si1);
sj0+=sj1;
l10=sj0;
sj1=l11;
si0=sj0 < sj1;
l13=si0;
si0=l16;
si1=255U;
si0&=si1;
if(si0){
goto L224;
}
si0=l13;
l16=si0;
goto L223;
L224:;
si0=l13;
sj1=l10;
sj2=1ULL;
sj1+=sj2;
l10=sj1;
si1=!(sj1);
si0|=si1;
l16=si0;
L223:;
si0=l1;
sj1=l10;
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si1=8U;
si0+=si1;
l1=si0;
si0=l15;
si1=8U;
si0+=si1;
l15=si0;
si0=l3;
si1=-1U;
si0+=si1;
l3=si0;
if(si0){
goto L222;
}
}
sj0=l14;
si1=l16;
sj1=(U64)(si1);
sj0-=sj1;
l14=sj0;
si0=!(sj0);
si0=!(si0);
if(si0){
goto L221;
}
}
L100:;
si0=l22;
si0=!(si0);
if(si0){
goto L99;
}
si0=l7;
f15024(i,si0);
L99:;
si0=l40;
f15024(i,si0);
si0=l19;
si1=l5;
si0=si0 < si1;
if(si0){
goto L225;
}
si0=l23;
si0=!(si0);
if(si0){
goto L227;
}
si0=l0;
si1=l21;
si2=l30;
si0=f15143(i,si0,si1,si2);
goto L226;
L227:;
si0=l0;
si1=l5;
si2=l21;
si3=l5;
sj4=l9;
sj0=f1032(i,si0,si1,si2,si3,sj4);
L226:;
si0=l39;
if(si0){
goto L4;
}
si0=l38;
f15024(i,si0);
goto L4;
L225:;
si0=l5;
si1=l19;
si2=1213340U;
f597(i,si0,si1,si2);
UNREACHABLE;
L59:;
si0=l19;
si1=l5;
si0=si0 <= si1;
if(si0){
goto L233;
}
si0=l5;
si1=l1;
si2=l5;
si1=f1180(i,si1,si2);
l55=si1;
si0=si0 < si1;
if(si0){
goto L231;
}
si0=l30;
si1=l55;
si0=si0 <= si1;
if(si0){
goto L232;
}
si0=l30;
si1=l55;
si2=1U;
si1+=si2;
l15=si1;
si0-=si1;
l3=si0;
si0=l29;
si1=l15;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l16=si0;
si0=l5;
si1=l55;
si0=si0 == si1;
if(si0){
goto L236;
}
si0=l5;
si1=l15;
si0-=si1;
l13=si0;
si0=l5;
si1=l55;
si0=si0 <= si1;
if(si0){
goto L235;
}
si0=l16;
si1=l3;
si2=l4;
si3=l13;
si4=3U;
si3<<=(si4&31);
si2+=si3;
si3=l15;
sj4=1ULL;
si0=f1045(i,si0,si1,si2,si3,sj4);
si0=!(si0);
if(si0){
goto L234;
}
si0=l55;
si0=!(si0);
if(si0){
goto L228;
}
si0=l29;
si1=0U;
si2=l55;
si3=3U;
si2<<=(si3&31);
si0=f15145(i,si0,si1,si2);
goto L228;
L236:;
si0=l3;
si1=l5;
si0=si0 > si1;
if(si0){
goto L229;
}
si0=1212264U;
si1=35U;
si2=1215000U;
f604(i,si0,si1,si2);
UNREACHABLE;
L235:;
si0=l13;
si1=l5;
si2=1214984U;
f593(i,si0,si1,si2);
UNREACHABLE;
L234:;
si0=l55;
si1=l3;
si0=si0 >= si1;
if(si0){
goto L230;
}
si0=l29;
si1=l15;
si2=l16;
si3=l15;
si4=l16;
si5=l15;
si6=3U;
si5<<=(si6&31);
si4+=si5;
si5=l3;
si6=l15;
si5-=si6;
si0=f1178(i,si0,si1,si2,si3,si4,si5);
si0=l29;
si1=l15;
si2=1U;
si3=l15;
si4=0U;
si5=1214968U;
f1293(i,si0,si1,si2,si3,si4,si5);
goto L228;
L233:;
si0=1215064U;
si1=31U;
si2=1215096U;
f604(i,si0,si1,si2);
UNREACHABLE;
L232:;
si0=1212264U;
si1=35U;
si2=1214824U;
f604(i,si0,si1,si2);
UNREACHABLE;
L231:;
si0=1215016U;
si1=32U;
si2=1215048U;
f604(i,si0,si1,si2);
UNREACHABLE;
L230:;
si0=1212264U;
si1=35U;
si2=1214840U;
f604(i,si0,si1,si2);
UNREACHABLE;
L229:;
si0=l16;
si1=8U;
si0+=si1;
si1=l4;
si2=l5;
si3=3U;
si2<<=(si3&31);
si0=f15143(i,si0,si1,si2);
si0=l16;
sj1=1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l29;
si1=l15;
si2=l16;
si3=l15;
si4=l16;
si5=l15;
si6=3U;
si5<<=(si6&31);
si4+=si5;
si5=l3;
si6=l15;
si5-=si6;
si0=f1178(i,si0,si1,si2,si3,si4,si5);
si0=l29;
si1=l15;
si2=1U;
si3=l15;
si4=0U;
si5=1214968U;
f1293(i,si0,si1,si2,si3,si4,si5);
L228:;
si0=l21;
si1=l1;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l15=si0;
si1=l5;
si2=l4;
si3=l5;
si0=f1161(i,si0,si1,si2,si3);
si0=(U32)(U32)(I8)(U8)(si0);
si1=0U;
si0=(U32)((I32)si0<(I32)si1);
if(si0){
goto L238;
}
si0=l0;
si1=l5;
si2=l15;
si3=l5;
si4=l4;
si5=l5;
si0=f1055(i,si0,si1,si2,si3,si4,si5);
goto L237;
L238:;
si0=l0;
si1=l15;
si2=l5;
si3=3U;
si2<<=(si3&31);
si0=f15143(i,si0,si1,si2);
L237:;
si0=l55;
si1=31U;
si0=si0 < si1;
if(si0){
goto L241;
}
si0=l5;
si1=1U;
si0+=si1;
si0=f1156(i,si0);
l71=si0;
goto L240;
L241:;
si0=0U;
l71=si0;
si0=l55;
si0=!(si0);
if(si0){
goto L239;
}
L240:;
si0=l6;
si1=l55;
i32_store(&i->m0,(U64)si0+240U,si1);
si0=l6;
si1=l1;
i32_store(&i->m0,(U64)si0+236U,si1);
si0=l6;
si1=l21;
i32_store(&i->m0,(U64)si0+232U,si1);
si0=l6;
si1=l55;
i32_store(&i->m0,(U64)si0+256U,si1);
si0=l6;
si1=l1;
i32_store(&i->m0,(U64)si0+252U,si1);
si0=l6;
si1=l31;
i32_store(&i->m0,(U64)si0+248U,si1);
si0=l6;
si1=192U;
si0+=si1;
si1=l6;
si2=232U;
si1+=si2;
si2=l6;
si3=248U;
si2+=si3;
f1221(i,si0,si1,si2);
si0=l6;
si0=i32_load(&i->m0,(U64)si0+216U);
l39=si0;
si1=l6;
si1=i32_load(&i->m0,(U64)si1+220U);
l62=si1;
si0=si0 >= si1;
if(si0){
goto L9;
}
si0=l30;
si1=l55;
si0-=si1;
l58=si0;
si0=l6;
si0=i32_load(&i->m0,(U64)si0+192U);
l60=si0;
si1=l6;
si1=i32_load(&i->m0,(U64)si1+196U);
l20=si1;
si2=3U;
si1<<=(si2&31);
si2=l39;
si3=l6;
si3=i32_load(&i->m0,(U64)si3+200U);
l40=si3;
si2*=si3;
l1=si2;
si3=3U;
si2<<=(si3&31);
si1-=si2;
si0+=si1;
l68=si0;
si0=l6;
si0=i32_load(&i->m0,(U64)si0+204U);
l59=si0;
si1=l6;
si1=i32_load(&i->m0,(U64)si1+208U);
l57=si1;
si2=3U;
si1<<=(si2&31);
si2=l39;
si3=l6;
si3=i32_load(&i->m0,(U64)si3+212U);
l66=si3;
si2*=si3;
l15=si2;
si3=3U;
si2<<=(si3&31);
si1-=si2;
si0+=si1;
l43=si0;
si0=l0;
si1=-8U;
si0+=si1;
l33=si0;
si0=l4;
si1=-8U;
si0+=si1;
l41=si0;
si0=l5;
si1=1U;
si0&=si1;
l22=si0;
si0=l5;
si1=-1U;
si0+=si1;
l7=si0;
si0=l5;
si1=l55;
si0-=si1;
l46=si0;
si0=0U;
si1=l5;
si2=-2U;
si1&=si2;
l2=si1;
si0-=si1;
l63=si0;
si0=0U;
si1=l40;
si2=3U;
si1<<=(si2&31);
si0-=si1;
l52=si0;
si0=l20;
si1=l1;
si0-=si1;
l45=si0;
si0=l57;
si1=l15;
si0-=si1;
l49=si0;
si0=0U;
si1=l66;
si2=3U;
si1<<=(si2&31);
si0-=si1;
l47=si0;
si0=l29;
si1=l55;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l50=si0;
si1=l5;
si2=3U;
si1<<=(si2&31);
l70=si1;
si0+=si1;
l56=si0;
si0=l55;
si1=3U;
si0<<=(si1&31);
si1=l29;
si0+=si1;
si1=8U;
si0+=si1;
l72=si0;
si0=0U;
l53=si0;
si0=l39;
l65=si0;
si0=l29;
l44=si0;
si0=l55;
l19=si0;
L242:;
{
si0=l19;
si1=l20;
si2=l65;
si3=l40;
si2*=si3;
si1-=si2;
l1=si1;
si2=0U;
si3=l1;
si4=l40;
si3-=si4;
l15=si3;
si4=l15;
si5=l1;
si4=si4 > si5;
si2=si4?si2:si3;
l51=si2;
si1-=si2;
l42=si1;
si0=si0 == si1;
if(si0){
goto L243;
}
si0=l55;
si1=l19;
si2=l42;
si1-=si2;
l1=si1;
si0=si0 < si1;
if(si0){
goto L244;
}
si0=l5;
si1=l42;
si0-=si1;
l46=si0;
si0=l55;
si1=l1;
si0-=si1;
l55=si0;
si0=l44;
si1=l1;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l44=si0;
si0=l42;
l19=si0;
goto L243;
L244:;
si0=l1;
si1=l55;
si2=1213196U;
f593(i,si0,si1,si2);
UNREACHABLE;
L243:;
si0=l5;
si1=l46;
si0=si0 < si1;
if(si0){
goto L250;
}
si0=8U;
l64=si0;
si0=l55;
si0=f1120(i,si0);
l69=si0;
si0=!(si0);
if(si0){
goto L251;
}
si0=l69;
si1=268435455U;
si0=si0 > si1;
if(si0){
goto L14;
}
si0=l69;
si1=3U;
si0<<=(si1&31);
l1=si0;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L14;
}
si0=l1;
si0=!(si0);
if(si0){
goto L251;
}
si0=l1;
si1=1U;
si0=f15026(i,si0,si1);
l64=si0;
si0=!(si0);
if(si0){
goto L249;
}
L251:;
si0=l50;
si1=l58;
si2=l0;
si3=l46;
si4=3U;
si3<<=(si4&31);
l38=si3;
si2+=si3;
l67=si2;
si3=l5;
si4=l46;
si3-=si4;
l1=si3;
si4=l44;
si5=l55;
si6=l64;
si7=l69;
f1121(i,si0,si1,si2,si3,si4,si5,si6,si7);
si0=l19;
si1=1U;
si0<<=(si1&31);
l15=si0;
si0=l19;
si1=0U;
si0=(U32)((I32)si0<(I32)si1);
if(si0){
goto L248;
}
si0=l15;
si1=l58;
si0=si0 > si1;
if(si0){
goto L247;
}
si0=l6;
si1=l19;
i32_store(&i->m0,(U64)si0+244U,si1);
si0=l6;
si1=l1;
i32_store(&i->m0,(U64)si0+232U,si1);
si0=l19;
si1=l1;
si0=si0 != si1;
if(si0){
goto L12;
}
si0=l19;
si1=l57;
si2=l65;
si3=l66;
si2*=si3;
si1-=si2;
l1=si1;
si2=0U;
si3=l1;
si4=l66;
si3-=si4;
l15=si3;
si4=l15;
si5=l1;
si4=si4 > si5;
si2=si4?si2:si3;
l1=si2;
si1-=si2;
l54=si1;
si0=si0 > si1;
if(si0){
goto L13;
}
si0=l59;
si1=l1;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l48=si0;
si0=l50;
si1=l19;
si2=3U;
si1<<=(si2&31);
l61=si1;
si0+=si1;
l37=si0;
si0=l19;
si0=!(si0);
if(si0){
goto L252;
}
si0=l43;
si1=l66;
si2=l49;
si3=l66;
si4=l49;
si3=si3 < si4;
si1=si3?si1:si2;
si2=3U;
si1<<=(si2&31);
si0-=si1;
l1=si0;
si0=0U;
l3=si0;
si0=l19;
l13=si0;
si0=l37;
l15=si0;
si0=l67;
l16=si0;
L253:;
{
si0=l15;
sj0=i64_load(&i->m0,(U64)si0);
l11=sj0;
si1=l16;
sj1=i64_load(&i->m0,(U64)si1);
sj0+=sj1;
l10=sj0;
sj1=l11;
si0=sj0 < sj1;
l12=si0;
si0=l3;
si1=255U;
si0&=si1;
if(si0){
goto L255;
}
si0=l12;
l3=si0;
goto L254;
L255:;
si0=l12;
sj1=l10;
sj2=1ULL;
sj1+=sj2;
l10=sj1;
si1=!(sj1);
si0|=si1;
l3=si0;
L254:;
si0=l1;
sj1=l10;
i64_store(&i->m0,(U64)si0,sj1);
si0=l15;
si1=8U;
si0+=si1;
l15=si0;
si0=l16;
si1=8U;
si0+=si1;
l16=si0;
si0=l1;
si1=8U;
si0+=si1;
l1=si0;
si0=l13;
si1=-1U;
si0+=si1;
l13=si0;
if(si0){
goto L253;
}
}
si0=l3;
if(si0){
goto L256;
}
si0=l19;
si1=31U;
si0=si0 < si1;
if(si0){
goto L252;
}
si0=l50;
si1=l58;
si2=l4;
si3=l5;
si4=l48;
si5=l54;
si6=l67;
si7=l19;
si8=l71;
si9=l19;
f1179(i,si0,si1,si2,si3,si4,si5,si6,si7,si8,si9);
goto L245;
L256:;
si0=1213092U;
si1=87U;
si2=1213180U;
f604(i,si0,si1,si2);
UNREACHABLE;
L252:;
si0=l5;
si1=l54;
si0=f1126(i,si0,si1);
l1=si0;
si0=!(si0);
if(si0){
goto L257;
}
si0=l1;
si1=268435455U;
si0=si0 > si1;
if(si0){
goto L14;
}
si0=l1;
si1=3U;
si0<<=(si1&31);
l16=si0;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L14;
}
si0=l16;
if(si0){
goto L258;
}
si0=8U;
l15=si0;
goto L246;
L258:;
si0=l16;
si1=1U;
si0=f15026(i,si0,si1);
l15=si0;
if(si0){
goto L246;
}
si0=8U;
si1=l16;
f52(i,si0,si1);
UNREACHABLE;
L257:;
si0=l50;
si1=l58;
si2=l4;
si3=l5;
si4=l48;
si5=l54;
si6=8U;
si7=0U;
sj0=f1127(i,si0,si1,si2,si3,si4,si5,si6,si7);
goto L245;
L250:;
si0=1212264U;
si1=35U;
si2=1213012U;
f604(i,si0,si1,si2);
UNREACHABLE;
L249:;
si0=8U;
si1=l1;
f52(i,si0,si1);
UNREACHABLE;
L248:;
si0=l19;
si1=l15;
si2=1213028U;
f683(i,si0,si1,si2);
UNREACHABLE;
L247:;
si0=l15;
si1=l58;
si2=1213028U;
f597(i,si0,si1,si2);
UNREACHABLE;
L246:;
si0=l50;
si1=l58;
si2=l4;
si3=l5;
si4=l48;
si5=l54;
si6=l15;
si7=l1;
sj0=f1127(i,si0,si1,si2,si3,si4,si5,si6,si7);
si0=l15;
f15024(i,si0);
L245:;
si0=l5;
si1=l46;
si0=si0 == si1;
if(si0){
goto L265;
}
si0=l58;
si1=l5;
si0=si0 <= si1;
if(si0){
goto L264;
}
si0=l60;
si1=l51;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l54=si0;
si0=l68;
si1=l40;
si2=l45;
si3=l40;
si4=l45;
si3=si3 < si4;
si1=si3?si1:si2;
l1=si1;
si2=3U;
si1<<=(si2&31);
si0-=si1;
l15=si0;
si0=l56;
sj0=i64_load(&i->m0,(U64)si0);
l17=sj0;
si0=l67;
sj0=i64_load(&i->m0,(U64)si0);
l8=sj0;
si0=l46;
if(si0){
goto L267;
}
si0=l6;
si1=l42;
i32_store(&i->m0,(U64)si0+244U,si1);
si0=l6;
si1=l5;
i32_store(&i->m0,(U64)si0+232U,si1);
si0=l5;
si1=l42;
si0=si0 != si1;
if(si0){
goto L263;
}
si0=l7;
if(si0){
goto L269;
}
si0=0U;
l1=si0;
si0=0U;
l15=si0;
goto L268;
L269:;
si0=0U;
l13=si0;
si0=l50;
l16=si0;
si0=l0;
l3=si0;
si0=0U;
l1=si0;
L270:;
{
si0=l3;
si1=l15;
sj1=i64_load(&i->m0,(U64)si1);
l10=sj1;
si2=l1;
sj2=(U64)(si2);
sj3=1ULL;
sj2&=sj3;
sj1-=sj2;
si2=l16;
sj2=i64_load(&i->m0,(U64)si2);
l11=sj2;
sj1-=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=8U;
si0+=si1;
si1=l15;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
l14=sj1;
sj2=l10;
sj3=l11;
si2=sj2 <= sj3;
sj3=l10;
sj4=l11;
si3=sj3 < sj4;
si4=l1;
si5=1U;
si4&=si5;
si2=si4?si2:si3;
l1=si2;
sj2=(U64)(si2);
sj1-=sj2;
si2=l16;
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
si2=l1;
si0=si2?si0:si1;
l1=si0;
si0=l15;
si1=16U;
si0+=si1;
l15=si0;
si0=l16;
si1=16U;
si0+=si1;
l16=si0;
si0=l3;
si1=16U;
si0+=si1;
l3=si0;
si0=l63;
si1=l13;
si2=-2U;
si1+=si2;
l13=si1;
si0=si0 != si1;
if(si0){
goto L270;
}
}
si0=0U;
si1=l13;
si0-=si1;
l15=si0;
L268:;
si0=l22;
si0=!(si0);
if(si0){
goto L266;
}
si0=l0;
si1=l15;
si2=3U;
si1<<=(si2&31);
l15=si1;
si0+=si1;
si1=l54;
si2=l15;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
l10=sj1;
si2=l1;
sj2=(U64)(si2);
sj1-=sj2;
si2=l50;
si3=l15;
si2+=si3;
sj2=i64_load(&i->m0,(U64)si2);
l11=sj2;
sj1-=sj2;
i64_store(&i->m0,(U64)si0,sj1);
sj0=l10;
sj1=l11;
si0=sj0 <= sj1;
sj1=l10;
sj2=l11;
si1=sj1 < sj2;
si2=l1;
si0=si2?si0:si1;
l1=si0;
goto L266;
L267:;
si0=l5;
si1=l19;
si0=si0 < si1;
if(si0){
goto L262;
}
si0=l6;
si1=l42;
i32_store(&i->m0,(U64)si0+244U,si1);
si0=l6;
si1=l19;
i32_store(&i->m0,(U64)si0+232U,si1);
si0=l42;
si1=l19;
si0=si0 != si1;
if(si0){
goto L261;
}
si0=l5;
si1=l19;
si0-=si1;
l67=si0;
si0=l42;
if(si0){
goto L272;
}
si0=0U;
l13=si0;
goto L271;
L272:;
si0=l40;
si1=l20;
si2=l39;
si3=l53;
si2+=si3;
si3=l40;
si2*=si3;
si1-=si2;
l16=si1;
si2=l40;
si3=l16;
si2=si2 < si3;
si0=si2?si0:si1;
l16=si0;
si1=1U;
si0&=si1;
l42=si0;
si0=0U;
l13=si0;
si0=0U;
l3=si0;
si0=l16;
si1=1U;
si0=si0 == si1;
if(si0){
goto L273;
}
si0=0U;
si1=l1;
si2=-2U;
si1&=si2;
si0-=si1;
l12=si0;
si0=0U;
l16=si0;
si0=l50;
l1=si0;
si0=0U;
l13=si0;
L274:;
{
si0=l1;
si1=l15;
sj1=i64_load(&i->m0,(U64)si1);
l10=sj1;
si2=l13;
sj2=(U64)(si2);
sj3=1ULL;
sj2&=sj3;
sj1-=sj2;
si2=l1;
sj2=i64_load(&i->m0,(U64)si2);
l11=sj2;
sj1-=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si1=8U;
si0+=si1;
l3=si0;
si1=l15;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
l14=sj1;
sj2=l10;
sj3=l11;
si2=sj2 <= sj3;
sj3=l10;
sj4=l11;
si3=sj3 < sj4;
si4=l13;
si5=1U;
si4&=si5;
si2=si4?si2:si3;
l13=si2;
sj2=(U64)(si2);
sj1-=sj2;
si2=l3;
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
si2=l13;
si0=si2?si0:si1;
l13=si0;
si0=l15;
si1=16U;
si0+=si1;
l15=si0;
si0=l1;
si1=16U;
si0+=si1;
l1=si0;
si0=l12;
si1=l16;
si2=-2U;
si1+=si2;
l16=si1;
si0=si0 != si1;
if(si0){
goto L274;
}
}
si0=0U;
si1=l16;
si0-=si1;
l3=si0;
L273:;
si0=l42;
si0=!(si0);
if(si0){
goto L271;
}
si0=l50;
si1=l3;
si2=3U;
si1<<=(si2&31);
l1=si1;
si0+=si1;
l15=si0;
si1=l54;
si2=l1;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
l10=sj1;
si2=l13;
sj2=(U64)(si2);
sj1-=sj2;
si2=l15;
sj2=i64_load(&i->m0,(U64)si2);
l11=sj2;
sj1-=sj2;
i64_store(&i->m0,(U64)si0,sj1);
sj0=l10;
sj1=l11;
si0=sj0 <= sj1;
sj1=l10;
sj2=l11;
si1=sj1 < sj2;
si2=l13;
si0=si2?si0:si1;
l13=si0;
L271:;
si0=l6;
si1=l46;
i32_store(&i->m0,(U64)si0+244U,si1);
si0=l6;
si1=l67;
i32_store(&i->m0,(U64)si0+232U,si1);
si0=l46;
si1=l67;
si0=si0 != si1;
if(si0){
goto L260;
}
si0=l46;
si1=1U;
si0&=si1;
l67=si0;
si0=0U;
l1=si0;
si0=0U;
l3=si0;
si0=l46;
si1=1U;
si0=si0 == si1;
if(si0){
goto L275;
}
si0=l46;
si1=-2U;
si0&=si1;
l42=si0;
si0=0U;
l1=si0;
si0=l37;
l15=si0;
si0=l0;
l16=si0;
si0=0U;
l3=si0;
L276:;
{
si0=l15;
si1=l16;
sj1=i64_load(&i->m0,(U64)si1);
l10=sj1;
si2=l1;
sj2=(U64)(si2);
sj3=1ULL;
sj2&=sj3;
sj1-=sj2;
si2=l15;
sj2=i64_load(&i->m0,(U64)si2);
l11=sj2;
sj1-=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l15;
si1=8U;
si0+=si1;
l12=si0;
si1=l16;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
l14=sj1;
sj2=l10;
sj3=l11;
si2=sj2 <= sj3;
sj3=l10;
sj4=l11;
si3=sj3 < sj4;
si4=l1;
si5=1U;
si4&=si5;
si2=si4?si2:si3;
l1=si2;
sj2=(U64)(si2);
sj1-=sj2;
si2=l12;
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
si2=l1;
si0=si2?si0:si1;
l1=si0;
si0=l15;
si1=16U;
si0+=si1;
l15=si0;
si0=l16;
si1=16U;
si0+=si1;
l16=si0;
si0=l42;
si1=l3;
si2=2U;
si1+=si2;
l3=si1;
si0=si0 != si1;
if(si0){
goto L276;
}
}
L275:;
si0=l67;
si0=!(si0);
if(si0){
goto L277;
}
si0=l37;
si1=l3;
si2=3U;
si1<<=(si2&31);
l15=si1;
si0+=si1;
l16=si0;
si1=l0;
si2=l15;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
l10=sj1;
si2=l1;
sj2=(U64)(si2);
sj1-=sj2;
si2=l16;
sj2=i64_load(&i->m0,(U64)si2);
l11=sj2;
sj1-=sj2;
i64_store(&i->m0,(U64)si0,sj1);
sj0=l10;
sj1=l11;
si0=sj0 <= sj1;
sj1=l10;
sj2=l11;
si1=sj1 < sj2;
si2=l1;
si0=si2?si0:si1;
l1=si0;
L277:;
si0=l13;
si1=1U;
si0&=si1;
si0=!(si0);
if(si0){
goto L278;
}
si0=l37;
si1=l37;
sj1=i64_load(&i->m0,(U64)si1);
l10=sj1;
sj2=-1ULL;
sj1+=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=0U;
l3=si0;
sj0=l10;
sj1=0ULL;
si0=sj0 != sj1;
if(si0){
goto L279;
}
si0=l38;
si1=-8U;
si0+=si1;
l15=si0;
si0=l72;
si1=l61;
si0+=si1;
l16=si0;
L280:;
{
si0=l15;
si0=!(si0);
l3=si0;
si0=l15;
si0=!(si0);
if(si0){
goto L279;
}
si0=l16;
si1=l16;
sj1=i64_load(&i->m0,(U64)si1);
l10=sj1;
sj2=-1ULL;
sj1+=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l15;
si1=-8U;
si0+=si1;
l15=si0;
si0=l16;
si1=8U;
si0+=si1;
l16=si0;
sj0=l10;
si0=!(sj0);
if(si0){
goto L280;
}
}
L279:;
si0=l1;
si1=l3;
si0|=si1;
l1=si0;
L278:;
si0=l0;
si1=l50;
si2=l70;
si0=f15143(i,si0,si1,si2);
L266:;
sj0=l8;
sj1=l17;
sj0-=sj1;
si1=l1;
sj1=(U64)(si1);
sj2=1ULL;
sj1&=sj2;
sj0-=sj1;
l17=sj0;
si0=!(sj0);
if(si0){
goto L259;
}
L281:;
{
si0=0U;
l16=si0;
si0=l7;
if(si0){
goto L283;
}
si0=0U;
l3=si0;
goto L282;
L283:;
si0=l4;
l15=si0;
si0=l0;
l1=si0;
si0=0U;
l3=si0;
L284:;
{
si0=l1;
si1=l1;
sj1=i64_load(&i->m0,(U64)si1);
l10=sj1;
si2=l16;
sj2=(U64)(si2);
sj3=1ULL;
sj2&=sj3;
si3=l15;
sj3=i64_load(&i->m0,(U64)si3);
l11=sj3;
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
sj2=l10;
sj3=l11;
si2=sj2 <= sj3;
sj3=l10;
sj4=l11;
si3=sj3 < sj4;
si4=l16;
si5=1U;
si4&=si5;
si2=si4?si2:si3;
l16=si2;
sj2=(U64)(si2);
si3=l15;
si4=8U;
si3+=si4;
sj3=i64_load(&i->m0,(U64)si3);
l10=sj3;
sj2+=sj3;
sj1-=sj2;
i64_store(&i->m0,(U64)si0,sj1);
sj0=l14;
sj1=l10;
si0=sj0 <= sj1;
sj1=l14;
sj2=l10;
si1=sj1 < sj2;
si2=l16;
si0=si2?si0:si1;
l16=si0;
si0=l15;
si1=16U;
si0+=si1;
l15=si0;
si0=l1;
si1=16U;
si0+=si1;
l1=si0;
si0=l2;
si1=l3;
si2=2U;
si1+=si2;
l3=si1;
si0=si0 != si1;
if(si0){
goto L284;
}
}
L282:;
si0=l22;
si0=!(si0);
if(si0){
goto L285;
}
si0=l0;
si1=l3;
si2=3U;
si1<<=(si2&31);
l1=si1;
si0+=si1;
l15=si0;
si1=l15;
sj1=i64_load(&i->m0,(U64)si1);
l10=sj1;
si2=l16;
sj2=(U64)(si2);
si3=l4;
si4=l1;
si3+=si4;
sj3=i64_load(&i->m0,(U64)si3);
l11=sj3;
sj2+=sj3;
sj1-=sj2;
i64_store(&i->m0,(U64)si0,sj1);
sj0=l10;
sj1=l11;
si0=sj0 <= sj1;
sj1=l10;
sj2=l11;
si1=sj1 < sj2;
si2=l16;
si0=si2?si0:si1;
l16=si0;
L285:;
sj0=l17;
si1=l16;
sj1=(U64)(si1);
sj2=1ULL;
sj1&=sj2;
sj0-=sj1;
l17=sj0;
si0=!(sj0);
if(si0){
goto L259;
}
goto L281;
}
L265:;
si0=0U;
si1=0U;
si2=1213044U;
f594(i,si0,si1,si2);
UNREACHABLE;
L264:;
si0=l5;
si1=l58;
si2=1213060U;
f594(i,si0,si1,si2);
UNREACHABLE;
L263:;
si0=l6;
si1=0U;
i32_store(&i->m0,(U64)si0+248U,si1);
si0=0U;
si1=l6;
si2=244U;
si1+=si2;
si2=l6;
si3=232U;
si2+=si3;
si3=l6;
si4=248U;
si3+=si4;
si4=1203428U;
f1250(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L262:;
si0=1212264U;
si1=35U;
si2=1213076U;
f604(i,si0,si1,si2);
UNREACHABLE;
L261:;
si0=l6;
si1=0U;
i32_store(&i->m0,(U64)si0+248U,si1);
si0=0U;
si1=l6;
si2=244U;
si1+=si2;
si2=l6;
si3=232U;
si2+=si3;
si3=l6;
si4=248U;
si3+=si4;
si4=1203508U;
f1250(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L260:;
si0=l6;
si1=0U;
i32_store(&i->m0,(U64)si0+248U,si1);
si0=0U;
si1=l6;
si2=244U;
si1+=si2;
si2=l6;
si3=232U;
si2+=si3;
si3=l6;
si4=248U;
si3+=si4;
si4=1203508U;
f1250(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L259:;
si0=l65;
si1=1U;
si0+=si1;
l65=si0;
si0=l70;
l1=si0;
L288:;
{
si0=l1;
si0=!(si0);
if(si0){
goto L287;
}
si0=l33;
si1=l1;
si0+=si1;
l15=si0;
si0=l41;
si1=l1;
si0+=si1;
l16=si0;
si0=l1;
si1=-8U;
si0+=si1;
l1=si0;
si0=-1U;
si1=l16;
sj1=i64_load(&i->m0,(U64)si1);
l10=sj1;
si2=l15;
sj2=i64_load(&i->m0,(U64)si2);
l11=sj2;
si1=sj1 != sj2;
sj2=l10;
sj3=l11;
si2=sj2 > sj3;
si0=si2?si0:si1;
l15=si0;
si0=!(si0);
if(si0){
goto L288;
}
goto L286;
}
L287:;
si0=-1U;
si1=0U;
si2=l1;
si0=si2?si0:si1;
l15=si0;
L286:;
si0=l15;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L289;
}
si0=l7;
if(si0){
goto L291;
}
si0=0U;
l16=si0;
si0=0U;
l3=si0;
goto L290;
L291:;
si0=0U;
l16=si0;
si0=l4;
l15=si0;
si0=l0;
l1=si0;
si0=0U;
l3=si0;
L292:;
{
si0=l1;
si1=l1;
sj1=i64_load(&i->m0,(U64)si1);
l10=sj1;
si2=l16;
sj2=(U64)(si2);
sj3=1ULL;
sj2&=sj3;
si3=l15;
sj3=i64_load(&i->m0,(U64)si3);
l11=sj3;
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
sj2=l10;
sj3=l11;
si2=sj2 <= sj3;
sj3=l10;
sj4=l11;
si3=sj3 < sj4;
si4=l16;
si5=1U;
si4&=si5;
si2=si4?si2:si3;
l16=si2;
sj2=(U64)(si2);
si3=l15;
si4=8U;
si3+=si4;
sj3=i64_load(&i->m0,(U64)si3);
l10=sj3;
sj2+=sj3;
sj1-=sj2;
i64_store(&i->m0,(U64)si0,sj1);
sj0=l14;
sj1=l10;
si0=sj0 <= sj1;
sj1=l14;
sj2=l10;
si1=sj1 < sj2;
si2=l16;
si0=si2?si0:si1;
l16=si0;
si0=l15;
si1=16U;
si0+=si1;
l15=si0;
si0=l1;
si1=16U;
si0+=si1;
l1=si0;
si0=l2;
si1=l3;
si2=2U;
si1+=si2;
l3=si1;
si0=si0 != si1;
if(si0){
goto L292;
}
}
L290:;
si0=l22;
si0=!(si0);
if(si0){
goto L289;
}
si0=l0;
si1=l3;
si2=3U;
si1<<=(si2&31);
l1=si1;
si0+=si1;
l15=si0;
si1=l15;
sj1=i64_load(&i->m0,(U64)si1);
si2=l16;
sj2=(U64)(si2);
si3=l4;
si4=l1;
si3+=si4;
sj3=i64_load(&i->m0,(U64)si3);
sj2+=sj3;
sj1-=sj2;
i64_store(&i->m0,(U64)si0,sj1);
L289:;
si0=l69;
si0=!(si0);
if(si0){
goto L293;
}
si0=l64;
f15024(i,si0);
L293:;
si0=l68;
si1=l52;
si0+=si1;
l68=si0;
si0=l45;
si1=l40;
si0-=si1;
l45=si0;
si0=l49;
si1=l66;
si0-=si1;
l49=si0;
si0=l43;
si1=l47;
si0+=si1;
l43=si0;
si0=l53;
si1=1U;
si0+=si1;
l53=si0;
si0=l65;
si1=l62;
si0=si0 != si1;
if(si0){
goto L242;
}
goto L9;
}
L239:;
si0=l6;
si1=260U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l6;
si1=1U;
i32_store(&i->m0,(U64)si0+252U,si1);
si0=l6;
si1=1212328U;
i32_store(&i->m0,(U64)si0+248U,si1);
si0=l6;
si1=1212264U;
i32_store(&i->m0,(U64)si0+256U,si1);
si0=l6;
si1=248U;
si0+=si1;
si1=1212996U;
f614(i,si0,si1);
UNREACHABLE;
L14:;
f53(i);
UNREACHABLE;
L13:;
si0=1202809U;
si1=34U;
si2=1202976U;
f604(i,si0,si1,si2);
UNREACHABLE;
L12:;
si0=l6;
si1=0U;
i32_store(&i->m0,(U64)si0+248U,si1);
si0=0U;
si1=l6;
si2=244U;
si1+=si2;
si2=l6;
si3=232U;
si2+=si3;
si3=l6;
si4=248U;
si3+=si4;
si4=1202992U;
f1250(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L11:;
si0=l6;
si1=152U;
si0+=si1;
si1=l3;
si2=l1;
si1=f1126(i,si1,si2);
l2=si1;
si2=1U;
f1295(i,si0,si1,si2);
si0=l6;
si0=i32_load(&i->m0,(U64)si0+156U);
l22=si0;
si0=l29;
si1=l30;
si2=l4;
si3=l3;
si4=l31;
si5=l1;
si6=l6;
si6=i32_load(&i->m0,(U64)si6+152U);
l33=si6;
si7=l2;
sj0=f1127(i,si0,si1,si2,si3,si4,si5,si6,si7);
L10:;
si0=l30;
si1=l5;
si0=si0 < si1;
if(si0){
goto L8;
}
si0=l29;
si1=l7;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l2=si0;
sj0=0ULL;
l10=sj0;
si0=l13;
si0=!(si0);
if(si0){
goto L294;
}
si0=l29;
si1=l1;
si2=3U;
si1<<=(si2&31);
si0+=si1;
si1=l7;
si2=l1;
si1-=si2;
si2=l4;
si3=l3;
si0=f1049(i,si0,si1,si2,si3);
sj0=(U64)(si0);
l10=sj0;
L294:;
si0=l2;
sj1=l10;
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si1=l30;
si2=l15;
si1-=si2;
l3=si1;
si0=si0 >= si1;
if(si0){
goto L7;
}
si0=l12;
si1=l16;
si2=l29;
si3=l15;
si4=3U;
si3<<=(si4&31);
si2+=si3;
si3=l16;
si4=l0;
si5=l15;
si6=l21;
si7=l15;
si8=l29;
si9=l15;
si4=f1055(i,si4,si5,si6,si7,si8,si9);
si0=f1060(i,si0,si1,si2,si3,si4);
si0=!(si0);
if(si0){
goto L295;
}
si0=l0;
si1=l5;
si2=l4;
si3=l5;
si0=f1049(i,si0,si1,si2,si3);
L295:;
si0=l22;
si0=!(si0);
if(si0){
goto L9;
}
si0=l33;
f15024(i,si0);
L9:;
si0=l23;
si0=!(si0);
if(si0){
goto L6;
}
goto L5;
L8:;
si0=l5;
si1=l30;
si2=1213260U;
f597(i,si0,si1,si2);
UNREACHABLE;
L7:;
si0=l16;
si1=l3;
si2=1213276U;
f597(i,si0,si1,si2);
UNREACHABLE;
L6:;
si0=l0;
si1=l5;
sj2=l9;
sj0=f1026(i,si0,si1,sj2);
L5:;
si0=l30;
si0=!(si0);
if(si0){
goto L296;
}
si0=l29;
f15024(i,si0);
L296:;
si0=l32;
if(si0){
goto L4;
}
si0=l31;
f15024(i,si0);
L4:;
si0=l18;
si0=!(si0);
if(si0){
goto L297;
}
si0=l21;
f15024(i,si0);
L297:;
si0=l23;
if(si0){
goto L1;
}
si0=l24;
f15024(i,si0);
goto L1;
L3:;
si0=l6;
si1=24U;
si0+=si1;
si1=l13;
si2=l12;
si3=l6;
si4=192U;
si3+=si4;
f1124(i,si0,si1,si2,si3);
si0=l6;
sj0=i64_load(&i->m0,(U64)si0+24U);
l11=sj0;
si0=l6;
sj0=i64_load(&i->m0,(U64)si0+32U);
l17=sj0;
si0=l13;
f15024(i,si0);
sj0=l11;
sj1=l10;
sj0>>=(sj1&63);
sj1=l17;
sj2=l14;
sj1<<=(sj2&63);
sj0|=sj1;
l11=sj0;
sj0=l17;
sj1=l10;
sj0>>=(sj1&63);
l10=sj0;
L2:;
si0=l0;
sj1=l10;
i64_store(&i->m0,(U64)si0+8U,sj1);
si0=l0;
sj1=l11;
i64_store(&i->m0,(U64)si0,sj1);
L1:;
si0=l6;
si1=272U;
si0+=si1;
i->g0=si0;
L0:;
}

U32 f1126(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 l8=0;
U32 si0,si1,si2,si3,si4;
si0=i->g0;
si1=32U;
si0-=si1;
l2=si0;
i->g0=si0;
si0=l2;
si1=l1;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l1;
si0=si0 < si1;
if(si0){
goto L9;
}
si0=l1;
si0=!(si0);
if(si0){
goto L8;
}
si0=l0;
si1=l1;
si0=si0 == si1;
if(si0){
goto L7;
}
si0=0U;
l3=si0;
si0=l1;
si1=20U;
si0=si0 < si1;
if(si0){
goto L1;
}
si0=l1;
si1=39U;
si0=si0 < si1;
if(si0){
goto L10;
}
si0=l1;
si1=3U;
si0*=si1;
l3=si0;
si0=l1;
si1=l0;
si0+=si1;
si1=3000U;
si0=si0 < si1;
if(si0){
goto L11;
}
si0=l3;
si1=1500U;
si0=si0 < si1;
if(si0){
goto L11;
}
si0=l0;
si1=l1;
si2=50U;
si0=f1005(i,si0,si1,si2);
l3=si0;
goto L1;
L11:;
si0=l1;
si1=340U;
si0=si0 < si1;
if(si0){
goto L12;
}
si0=l0;
si1=3U;
si0*=si1;
si1=12U;
si0+=si1;
si1=l1;
si2=2U;
si1<<=(si2&31);
si0=si0 >= si1;
if(si0){
goto L12;
}
si0=l1;
si1=345U;
si0=si0 < si1;
if(si0){
goto L6;
}
si0=l1;
si1=640U;
si0=si0 < si1;
if(si0){
goto L13;
}
si0=l0;
si1=l1;
si0=f1217(i,si0,si1);
l3=si0;
goto L1;
L13:;
si0=l0;
si1=l1;
si0=f1216(i,si0,si1);
l3=si0;
goto L1;
L12:;
si0=l0;
si1=1U;
si0<<=(si1&31);
l4=si0;
si1=l1;
si2=5U;
si1*=si2;
l5=si1;
si0=si0 < si1;
if(si0){
goto L16;
}
si0=l1;
si1=1U;
si0<<=(si1&31);
l4=si0;
si0=l1;
si1=103U;
si0=si0 < si1;
if(si0){
goto L15;
}
si0=l4;
si1=l1;
si0=f1214(i,si0,si1);
l6=si0;
goto L14;
L16:;
si0=l0;
si1=6U;
si0*=si1;
l5=si0;
si1=l1;
si2=7U;
si1*=si2;
l7=si1;
si0=si0 < si1;
if(si0){
goto L5;
}
si0=l4;
si1=l3;
si0=si0 < si1;
if(si0){
goto L17;
}
si0=l5;
si1=l1;
si2=11U;
si1*=si2;
si0=si0 < si1;
if(si0){
goto L18;
}
si0=l1;
si1=103U;
si0=si0 < si1;
if(si0){
goto L19;
}
si0=l0;
si1=l1;
si0=f1214(i,si0,si1);
l3=si0;
goto L1;
L19:;
si0=l0;
si1=l1;
si0=f1207(i,si0,si1);
l3=si0;
goto L1;
L18:;
si0=l0;
si1=2U;
si0<<=(si1&31);
si1=l7;
si0=si0 < si1;
if(si0){
goto L20;
}
si0=l1;
si1=600U;
si0=si0 < si1;
if(si0){
goto L21;
}
si0=l0;
si1=l1;
si0=f1212(i,si0,si1);
l3=si0;
goto L1;
L21:;
si0=l0;
si1=l1;
si0=f1207(i,si0,si1);
l3=si0;
goto L1;
L20:;
si0=l1;
si1=300U;
si0=si0 < si1;
if(si0){
goto L22;
}
si0=l0;
si1=l1;
si0=f1212(i,si0,si1);
l3=si0;
goto L1;
L22:;
si0=l0;
si1=l1;
si0=f1205(i,si0,si1);
l3=si0;
goto L1;
L17:;
si0=l1;
si1=60U;
si0=si0 < si1;
if(si0){
goto L23;
}
si0=l0;
si1=l1;
si0=f1209(i,si0,si1);
l3=si0;
goto L1;
L23:;
si0=l0;
si1=l1;
si0=f1205(i,si0,si1);
l3=si0;
goto L1;
L15:;
si0=l4;
si1=l1;
si0=f1207(i,si0,si1);
l6=si0;
L14:;
si0=l1;
si1=2U;
si0<<=(si1&31);
l8=si0;
si0=l1;
si1=2U;
si0<<=(si1&31);
l7=si0;
si0=l0;
si1=1U;
si0<<=(si1&31);
l3=si0;
L24:;
{
si0=l0;
si1=l4;
si0-=si1;
l0=si0;
si0=l3;
si1=l7;
si0-=si1;
l3=si0;
si1=l5;
si0=si0 >= si1;
if(si0){
goto L24;
}
}
si0=l0;
si1=l1;
si0=si0 >= si1;
if(si0){
goto L26;
}
si0=l1;
si1=l0;
si0=f1126(i,si0,si1);
l0=si0;
goto L25;
L26:;
si0=l0;
si1=l1;
si0=f1126(i,si0,si1);
l0=si0;
L25:;
si0=l6;
si1=l0;
si2=l6;
si3=l0;
si2=si2 > si3;
si0=si2?si0:si1;
si1=l8;
si0+=si1;
l3=si0;
goto L1;
L10:;
si0=l1;
si1=3U;
si0*=si1;
l5=si0;
si1=l0;
si0=si0 > si1;
if(si0){
goto L28;
}
si0=l1;
si1=3U;
si0<<=(si1&31);
l7=si0;
si0=l0;
si1=2U;
si0<<=(si1&31);
l3=si0;
si0=l1;
si1=1U;
si0<<=(si1&31);
l4=si0;
L29:;
{
si0=l3;
si1=l7;
si0-=si1;
l3=si0;
si0=l0;
si1=l4;
si0-=si1;
l0=si0;
si1=l5;
si0=si0 >= si1;
if(si0){
goto L29;
}
}
si0=l1;
si1=2U;
si0<<=(si1&31);
l7=si0;
si0=l4;
si1=l1;
si0=f1207(i,si0,si1);
l5=si0;
si0=l3;
si1=l1;
si2=5U;
si1*=si2;
si0=si0 < si1;
if(si0){
goto L3;
}
si0=l3;
si1=l1;
si2=7U;
si1*=si2;
si0=si0 < si1;
if(si0){
goto L27;
}
si0=l0;
si1=l1;
si0=f1207(i,si0,si1);
l0=si0;
goto L2;
L28:;
si0=l0;
si1=2U;
si0<<=(si1&31);
l3=si0;
si1=l1;
si2=5U;
si1*=si2;
si0=si0 < si1;
if(si0){
goto L4;
}
si0=l3;
si1=l1;
si2=7U;
si1*=si2;
si0=si0 < si1;
if(si0){
goto L30;
}
si0=l0;
si1=l1;
si0=f1207(i,si0,si1);
l3=si0;
goto L1;
L30:;
si0=l0;
si1=l1;
si0=f1205(i,si0,si1);
l3=si0;
goto L1;
L27:;
si0=l0;
si1=l1;
si0=f1205(i,si0,si1);
l0=si0;
goto L2;
L9:;
si0=1216560U;
si1=34U;
si2=1216596U;
f604(i,si0,si1,si2);
UNREACHABLE;
L8:;
si0=l2;
si1=0U;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=1U;
si1=l2;
si2=4U;
si1+=si2;
si2=1212260U;
si3=l2;
si4=8U;
si3+=si4;
si4=1216544U;
f1250(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L7:;
si0=l0;
si0=f1120(i,si0);
l3=si0;
goto L1;
L6:;
si0=l0;
si1=l1;
si0=f1211(i,si0,si1);
l3=si0;
goto L1;
L5:;
si0=l0;
si1=l1;
si0=f1206(i,si0,si1);
l3=si0;
goto L1;
L4:;
si0=l0;
si1=l1;
si0=f1202(i,si0,si1);
l3=si0;
goto L1;
L3:;
si0=l0;
si1=l1;
si0=f1202(i,si0,si1);
l0=si0;
L2:;
si0=l5;
si1=l0;
si2=l5;
si3=l0;
si2=si2 > si3;
si0=si2?si0:si1;
si1=l7;
si0+=si1;
l3=si0;
L1:;
si0=l2;
si1=32U;
si0+=si1;
i->g0=si0;
si0=l3;
L0:;
return si0;
}

U64 f1127(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4,U32 l5,U32 l6,U32 l7) {
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
U64 l28=0;
U64 l29=0;
U32 si0,si1,si2,si3,si4,si5,si6,si7,si8;
U64 sj0,sj1,sj2;
si0=i->g0;
si1=32U;
si0-=si1;
l8=si0;
i->g0=si0;
si0=l8;
si1=l5;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l3;
si1=l5;
si0=si0 < si1;
if(si0){
goto L21;
}
si0=l5;
si0=!(si0);
if(si0){
goto L22;
}
si0=l5;
si1=l3;
si0+=si1;
l9=si0;
si1=l1;
si0=si0 > si1;
if(si0){
goto L23;
}
si0=l3;
si1=l5;
si0=si0 == si1;
if(si0){
goto L20;
}
si0=l5;
si1=20U;
si0=si0 < si1;
if(si0){
goto L24;
}
si0=l5;
si1=39U;
si0=si0 < si1;
if(si0){
goto L19;
}
si0=l5;
si1=3U;
si0*=si1;
l10=si0;
si0=l9;
si1=3000U;
si0=si0 < si1;
if(si0){
goto L25;
}
si0=l10;
si1=1500U;
si0=si0 < si1;
if(si0){
goto L25;
}
si0=l0;
si1=l1;
si2=l2;
si3=l3;
si4=l4;
si5=l5;
si6=50U;
si7=l6;
si8=l7;
f1006(i,si0,si1,si2,si3,si4,si5,si6,si7,si8);
goto L13;
L25:;
si0=l5;
si1=340U;
si0=si0 < si1;
if(si0){
goto L27;
}
si0=l3;
si1=3U;
si0*=si1;
si1=12U;
si0+=si1;
si1=l5;
si2=2U;
si1<<=(si2&31);
si0=si0 >= si1;
if(si0){
goto L27;
}
si0=l5;
si1=345U;
si0=si0 < si1;
if(si0){
goto L26;
}
si0=l5;
si1=640U;
si0=si0 < si1;
if(si0){
goto L28;
}
si0=l0;
si1=l1;
si2=l2;
si3=l3;
si4=l4;
si5=l5;
si6=l6;
si7=l7;
f1218(i,si0,si1,si2,si3,si4,si5,si6,si7);
goto L13;
L28:;
si0=l0;
si1=l1;
si2=l2;
si3=l3;
si4=l4;
si5=l5;
si6=l6;
si7=l7;
f1195(i,si0,si1,si2,si3,si4,si5,si6,si7);
goto L13;
L27:;
si0=l3;
si1=1U;
si0<<=(si1&31);
l11=si0;
si1=l5;
si2=5U;
si1*=si2;
l12=si1;
si0=si0 < si1;
if(si0){
goto L34;
}
si0=l7;
si1=l5;
si2=2U;
si1<<=(si2&31);
l13=si1;
si0=si0 < si1;
if(si0){
goto L29;
}
si0=l3;
si1=l5;
si2=1U;
si1<<=(si2&31);
l14=si1;
si0=si0 < si1;
if(si0){
goto L30;
}
si0=l7;
si1=l13;
si0-=si1;
l15=si0;
si0=l6;
si1=l13;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l16=si0;
si0=l5;
si1=103U;
si0=si0 < si1;
if(si0){
goto L33;
}
si0=l0;
si1=l1;
si2=l2;
si3=l14;
si4=l4;
si5=l5;
si6=l16;
si7=l15;
f1215(i,si0,si1,si2,si3,si4,si5,si6,si7);
goto L32;
L34:;
si0=l3;
si1=6U;
si0*=si1;
l17=si0;
si1=l5;
si2=7U;
si1*=si2;
l14=si1;
si0=si0 < si1;
if(si0){
goto L31;
}
si0=l11;
si1=l10;
si0=si0 < si1;
if(si0){
goto L35;
}
si0=l17;
si1=l5;
si2=11U;
si1*=si2;
si0=si0 < si1;
if(si0){
goto L36;
}
si0=l5;
si1=103U;
si0=si0 < si1;
if(si0){
goto L37;
}
si0=l0;
si1=l1;
si2=l2;
si3=l3;
si4=l4;
si5=l5;
si6=l6;
si7=l7;
f1215(i,si0,si1,si2,si3,si4,si5,si6,si7);
goto L13;
L37:;
si0=l0;
si1=l1;
si2=l2;
si3=l3;
si4=l4;
si5=l5;
si6=l6;
si7=l7;
f1208(i,si0,si1,si2,si3,si4,si5,si6,si7);
goto L13;
L36:;
si0=l3;
si1=2U;
si0<<=(si1&31);
si1=l14;
si0=si0 < si1;
if(si0){
goto L38;
}
si0=l5;
si1=600U;
si0=si0 < si1;
if(si0){
goto L39;
}
si0=l0;
si1=l1;
si2=l2;
si3=l3;
si4=l4;
si5=l5;
si6=l6;
si7=l7;
f1213(i,si0,si1,si2,si3,si4,si5,si6,si7);
goto L13;
L39:;
si0=l0;
si1=l1;
si2=l2;
si3=l3;
si4=l4;
si5=l5;
si6=l6;
si7=l7;
f1208(i,si0,si1,si2,si3,si4,si5,si6,si7);
goto L13;
L38:;
si0=l5;
si1=300U;
si0=si0 < si1;
if(si0){
goto L40;
}
si0=l0;
si1=l1;
si2=l2;
si3=l3;
si4=l4;
si5=l5;
si6=l6;
si7=l7;
f1213(i,si0,si1,si2,si3,si4,si5,si6,si7);
goto L13;
L40:;
si0=l0;
si1=l1;
si2=l2;
si3=l3;
si4=l4;
si5=l5;
si6=l6;
si7=l7;
f1204(i,si0,si1,si2,si3,si4,si5,si6,si7);
goto L13;
L35:;
si0=l5;
si1=60U;
si0=si0 < si1;
if(si0){
goto L41;
}
si0=l0;
si1=l1;
si2=l2;
si3=l3;
si4=l4;
si5=l5;
si6=l6;
si7=l7;
f1210(i,si0,si1,si2,si3,si4,si5,si6,si7);
goto L13;
L41:;
si0=l0;
si1=l1;
si2=l2;
si3=l3;
si4=l4;
si5=l5;
si6=l6;
si7=l7;
f1204(i,si0,si1,si2,si3,si4,si5,si6,si7);
goto L13;
L33:;
si0=l0;
si1=l1;
si2=l2;
si3=l14;
si4=l4;
si5=l5;
si6=l16;
si7=l15;
f1208(i,si0,si1,si2,si3,si4,si5,si6,si7);
L32:;
si0=l2;
si1=l14;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l18=si0;
si0=l3;
si1=l14;
si0-=si1;
l19=si0;
si1=1U;
si0<<=(si1&31);
si1=l12;
si0=si0 >= si1;
if(si0){
goto L42;
}
si0=l14;
l20=si0;
goto L14;
L42:;
si0=l13;
si1=l5;
si0=si0 >= si1;
if(si0){
goto L43;
}
si0=l1;
si1=l14;
si0=si0 < si1;
if(si0){
goto L3;
}
si0=l14;
si1=l19;
si0=si0 > si1;
if(si0){
goto L4;
}
si0=l5;
si1=103U;
si0=si0 < si1;
if(si0){
goto L17;
}
si0=l6;
si1=l13;
si2=l18;
si3=l14;
si4=l4;
si5=l5;
si6=l16;
si7=l15;
f1215(i,si0,si1,si2,si3,si4,si5,si6,si7);
goto L16;
L43:;
si0=l10;
si1=l5;
si0=si0 >= si1;
if(si0){
goto L44;
}
si0=l1;
si1=l14;
si0=si0 < si1;
if(si0){
goto L3;
}
si0=l14;
si1=l19;
si0=si0 > si1;
if(si0){
goto L4;
}
si0=l5;
si1=103U;
si0=si0 < si1;
if(si0){
goto L46;
}
si0=l6;
si1=l13;
si2=l18;
si3=l14;
si4=l4;
si5=l5;
si6=l16;
si7=l15;
f1215(i,si0,si1,si2,si3,si4,si5,si6,si7);
goto L45;
L46:;
si0=l6;
si1=l13;
si2=l18;
si3=l14;
si4=l4;
si5=l5;
si6=l16;
si7=l15;
f1208(i,si0,si1,si2,si3,si4,si5,si6,si7);
L45:;
si0=l5;
si1=l10;
si2=1216864U;
f683(i,si0,si1,si2);
UNREACHABLE;
L44:;
si0=l6;
si1=l5;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l21=si0;
si0=l5;
si1=102U;
si0=si0 > si1;
if(si0){
goto L47;
}
si0=l14;
si1=l10;
si0=si0 > si1;
if(si0){
goto L6;
}
si0=l1;
si1=3U;
si0<<=(si1&31);
si1=l5;
si2=24U;
si1*=si2;
l3=si1;
si0-=si1;
si1=-8U;
si0+=si1;
l22=si0;
si0=l0;
si1=l5;
si2=4U;
si1<<=(si2&31);
l23=si1;
si0+=si1;
l24=si0;
si0=l3;
si1=l0;
si0+=si1;
si1=8U;
si0+=si1;
l25=si0;
si0=l14;
l20=si0;
L48:;
{
si0=l1;
si1=l20;
si0=si0 < si1;
if(si0){
goto L2;
}
si0=l19;
si1=l14;
si0=si0 < si1;
if(si0){
goto L4;
}
si0=l6;
si1=l13;
si2=l18;
si3=l14;
si4=l4;
si5=l5;
si6=l16;
si7=l15;
f1208(i,si0,si1,si2,si3,si4,si5,si6,si7);
si0=l10;
si1=l1;
si2=l20;
si1-=si2;
l26=si1;
si0=si0 > si1;
if(si0){
goto L1;
}
si0=l0;
si1=l20;
si2=3U;
si1<<=(si2&31);
si0+=si1;
si1=l5;
si2=3U;
si1<<=(si2&31);
si0+=si1;
si1=l21;
si2=l23;
si0=f15143(i,si0,si1,si2);
l27=si0;
si0=0U;
l7=si0;
si0=l5;
l11=si0;
si0=l24;
l3=si0;
si0=l6;
l2=si0;
L49:;
{
si0=l3;
sj0=i64_load(&i->m0,(U64)si0);
l28=sj0;
si1=l2;
sj1=i64_load(&i->m0,(U64)si1);
sj0+=sj1;
l29=sj0;
sj1=l28;
si0=sj0 < sj1;
l17=si0;
si0=l7;
si1=255U;
si0&=si1;
if(si0){
goto L51;
}
si0=l17;
l7=si0;
goto L50;
L51:;
si0=l17;
sj1=l29;
sj2=1ULL;
sj1+=sj2;
l29=sj1;
si1=!(sj1);
si0|=si1;
l7=si0;
L50:;
si0=l3;
sj1=l29;
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=8U;
si0+=si1;
l3=si0;
si0=l2;
si1=8U;
si0+=si1;
l2=si0;
si0=l11;
si1=-1U;
si0+=si1;
l11=si0;
if(si0){
goto L49;
}
}
si0=l26;
si1=l5;
si0=si0 == si1;
l3=si0;
if(si0){
goto L53;
}
si0=l7;
si1=1U;
si0^=si1;
if(si0){
goto L53;
}
si0=l27;
si1=l27;
sj1=i64_load(&i->m0,(U64)si1);
sj2=1ULL;
sj1+=sj2;
l29=sj1;
i64_store(&i->m0,(U64)si0,sj1);
sj0=l29;
sj1=0ULL;
si0=sj0 != sj1;
if(si0){
goto L52;
}
si0=l22;
l2=si0;
si0=l25;
l3=si0;
L54:;
{
si0=l2;
si0=!(si0);
if(si0){
goto L18;
}
si0=l3;
si1=l3;
sj1=i64_load(&i->m0,(U64)si1);
sj2=1ULL;
sj1+=sj2;
l29=sj1;
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=-8U;
si0+=si1;
l2=si0;
si0=l3;
si1=8U;
si0+=si1;
l3=si0;
sj0=l29;
si0=!(sj0);
if(si0){
goto L54;
}
goto L52;
}
L53:;
si0=l3;
si1=l7;
si0&=si1;
if(si0){
goto L18;
}
L52:;
si0=l22;
si1=l23;
si0-=si1;
l22=si0;
si0=l25;
si1=l23;
si0+=si1;
l25=si0;
si0=l24;
si1=l23;
si0+=si1;
l24=si0;
si0=l20;
si1=l14;
si0+=si1;
l20=si0;
si0=l18;
si1=l14;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l18=si0;
si0=l19;
si1=l14;
si0-=si1;
l19=si0;
si1=1U;
si0<<=(si1&31);
si1=l12;
si0=si0 >= si1;
if(si0){
goto L48;
}
goto L14;
}
L47:;
si0=l14;
si1=l10;
si0=si0 > si1;
if(si0){
goto L15;
}
si0=l1;
si1=3U;
si0<<=(si1&31);
si1=l5;
si2=24U;
si1*=si2;
l3=si1;
si0-=si1;
si1=-8U;
si0+=si1;
l22=si0;
si0=l0;
si1=l5;
si2=4U;
si1<<=(si2&31);
l23=si1;
si0+=si1;
l24=si0;
si0=l3;
si1=l0;
si0+=si1;
si1=8U;
si0+=si1;
l25=si0;
si0=l14;
l20=si0;
L55:;
{
si0=l1;
si1=l20;
si0=si0 < si1;
if(si0){
goto L2;
}
si0=l19;
si1=l14;
si0=si0 < si1;
if(si0){
goto L4;
}
si0=l6;
si1=l13;
si2=l18;
si3=l14;
si4=l4;
si5=l5;
si6=l16;
si7=l15;
f1215(i,si0,si1,si2,si3,si4,si5,si6,si7);
si0=l10;
si1=l1;
si2=l20;
si1-=si2;
l26=si1;
si0=si0 > si1;
if(si0){
goto L1;
}
si0=l0;
si1=l20;
si2=3U;
si1<<=(si2&31);
si0+=si1;
si1=l5;
si2=3U;
si1<<=(si2&31);
si0+=si1;
si1=l21;
si2=l23;
si0=f15143(i,si0,si1,si2);
l27=si0;
si0=0U;
l7=si0;
si0=l5;
l11=si0;
si0=l24;
l3=si0;
si0=l6;
l2=si0;
L56:;
{
si0=l3;
sj0=i64_load(&i->m0,(U64)si0);
l28=sj0;
si1=l2;
sj1=i64_load(&i->m0,(U64)si1);
sj0+=sj1;
l29=sj0;
sj1=l28;
si0=sj0 < sj1;
l17=si0;
si0=l7;
si1=255U;
si0&=si1;
if(si0){
goto L58;
}
si0=l17;
l7=si0;
goto L57;
L58:;
si0=l17;
sj1=l29;
sj2=1ULL;
sj1+=sj2;
l29=sj1;
si1=!(sj1);
si0|=si1;
l7=si0;
L57:;
si0=l3;
sj1=l29;
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=8U;
si0+=si1;
l3=si0;
si0=l2;
si1=8U;
si0+=si1;
l2=si0;
si0=l11;
si1=-1U;
si0+=si1;
l11=si0;
if(si0){
goto L56;
}
}
si0=l26;
si1=l5;
si0=si0 == si1;
l3=si0;
if(si0){
goto L60;
}
si0=l7;
si1=1U;
si0^=si1;
if(si0){
goto L60;
}
si0=l27;
si1=l27;
sj1=i64_load(&i->m0,(U64)si1);
sj2=1ULL;
sj1+=sj2;
l29=sj1;
i64_store(&i->m0,(U64)si0,sj1);
sj0=l29;
sj1=0ULL;
si0=sj0 != sj1;
if(si0){
goto L59;
}
si0=l22;
l2=si0;
si0=l25;
l3=si0;
L61:;
{
si0=l2;
si0=!(si0);
if(si0){
goto L18;
}
si0=l3;
si1=l3;
sj1=i64_load(&i->m0,(U64)si1);
sj2=1ULL;
sj1+=sj2;
l29=sj1;
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=-8U;
si0+=si1;
l2=si0;
si0=l3;
si1=8U;
si0+=si1;
l3=si0;
sj0=l29;
si0=!(sj0);
if(si0){
goto L61;
}
goto L59;
}
L60:;
si0=l3;
si1=l7;
si0&=si1;
if(si0){
goto L18;
}
L59:;
si0=l22;
si1=l23;
si0-=si1;
l22=si0;
si0=l25;
si1=l23;
si0+=si1;
l25=si0;
si0=l24;
si1=l23;
si0+=si1;
l24=si0;
si0=l20;
si1=l14;
si0+=si1;
l20=si0;
si0=l18;
si1=l14;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l18=si0;
si0=l19;
si1=l14;
si0-=si1;
l19=si0;
si1=1U;
si0<<=(si1&31);
si1=l12;
si0=si0 < si1;
if(si0){
goto L14;
}
goto L55;
}
L31:;
si0=l0;
si1=l1;
si2=l2;
si3=l3;
si4=l4;
si5=l5;
si6=l6;
si7=l7;
f1196(i,si0,si1,si2,si3,si4,si5,si6,si7);
goto L13;
L30:;
si0=1212264U;
si1=35U;
si2=1216644U;
f604(i,si0,si1,si2);
UNREACHABLE;
L29:;
si0=1212264U;
si1=35U;
si2=1216628U;
f604(i,si0,si1,si2);
UNREACHABLE;
L26:;
si0=l0;
si1=l1;
si2=l2;
si3=l3;
si4=l4;
si5=l5;
si6=l6;
si7=l7;
f1194(i,si0,si1,si2,si3,si4,si5,si6,si7);
goto L13;
L24:;
si0=l0;
si1=l1;
si2=l2;
si3=l3;
si4=l4;
si5=l5;
f1109(i,si0,si1,si2,si3,si4,si5);
goto L13;
L23:;
si0=1217056U;
si1=46U;
si2=1217104U;
f604(i,si0,si1,si2);
UNREACHABLE;
L22:;
si0=l8;
si1=0U;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=1U;
si1=l8;
si2=4U;
si1+=si2;
si2=1212260U;
si3=l8;
si4=8U;
si3+=si4;
si4=1216612U;
f1250(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L21:;
si0=1216560U;
si1=34U;
si2=1217120U;
f604(i,si0,si1,si2);
UNREACHABLE;
L20:;
si0=l0;
si1=l1;
si2=l2;
si3=l3;
si4=l4;
si5=l3;
si6=l6;
si7=l7;
f1121(i,si0,si1,si2,si3,si4,si5,si6,si7);
goto L13;
L19:;
si0=l5;
si1=3U;
si0*=si1;
l13=si0;
si1=l3;
si0=si0 > si1;
if(si0){
goto L68;
}
si0=l7;
si1=l5;
si2=2U;
si1<<=(si2&31);
l15=si1;
si0=si0 < si1;
if(si0){
goto L66;
}
si0=l0;
si1=l1;
si2=l2;
si3=l5;
si4=1U;
si3<<=(si4&31);
l19=si3;
si4=l4;
si5=l5;
si6=l6;
si7=l15;
si8=3U;
si7<<=(si8&31);
si6+=si7;
l16=si6;
si7=l7;
si8=l15;
si7-=si8;
l22=si7;
f1208(i,si0,si1,si2,si3,si4,si5,si6,si7);
si0=l2;
si1=l19;
si2=3U;
si1<<=(si2&31);
l25=si1;
si0+=si1;
l18=si0;
si0=l3;
si1=l19;
si0-=si1;
l26=si0;
si1=l13;
si0=si0 >= si1;
if(si0){
goto L67;
}
si0=l19;
l14=si0;
goto L62;
L68:;
si0=l3;
si1=2U;
si0<<=(si1&31);
l11=si0;
si1=l5;
si2=5U;
si1*=si2;
si0=si0 < si1;
if(si0){
goto L65;
}
si0=l11;
si1=l5;
si2=7U;
si1*=si2;
si0=si0 < si1;
if(si0){
goto L69;
}
si0=l0;
si1=l1;
si2=l2;
si3=l3;
si4=l4;
si5=l5;
si6=l6;
si7=l7;
f1208(i,si0,si1,si2,si3,si4,si5,si6,si7);
goto L13;
L69:;
si0=l0;
si1=l1;
si2=l2;
si3=l3;
si4=l4;
si5=l5;
si6=l6;
si7=l7;
f1204(i,si0,si1,si2,si3,si4,si5,si6,si7);
goto L13;
L67:;
si0=l1;
si1=3U;
si0<<=(si1&31);
si1=l5;
si2=24U;
si1*=si2;
l3=si1;
si0-=si1;
si1=-8U;
si0+=si1;
l10=si0;
si0=l0;
si1=l5;
si2=4U;
si1<<=(si2&31);
l20=si1;
si0+=si1;
l23=si0;
si0=l6;
si1=l5;
si2=3U;
si1<<=(si2&31);
l21=si1;
si0+=si1;
l27=si0;
si0=l3;
si1=l0;
si0+=si1;
si1=8U;
si0+=si1;
l24=si0;
si0=l19;
l14=si0;
L70:;
{
si0=l1;
si1=l14;
si0=si0 < si1;
if(si0){
goto L64;
}
si0=l6;
si1=l15;
si2=l18;
si3=l19;
si4=l4;
si5=l5;
si6=l16;
si7=l22;
f1208(i,si0,si1,si2,si3,si4,si5,si6,si7);
si0=l13;
si1=l1;
si2=l14;
si1-=si2;
l3=si1;
si0=si0 > si1;
if(si0){
goto L63;
}
si0=l0;
si1=l14;
si2=3U;
si1<<=(si2&31);
si0+=si1;
si1=l21;
si0+=si1;
si1=l27;
si2=l20;
si0=f15143(i,si0,si1,si2);
l12=si0;
si0=0U;
l7=si0;
si0=l5;
l11=si0;
si0=l23;
l3=si0;
si0=l6;
l2=si0;
L71:;
{
si0=l3;
sj0=i64_load(&i->m0,(U64)si0);
l28=sj0;
si1=l2;
sj1=i64_load(&i->m0,(U64)si1);
sj0+=sj1;
l29=sj0;
sj1=l28;
si0=sj0 < sj1;
l17=si0;
si0=l7;
si1=255U;
si0&=si1;
if(si0){
goto L73;
}
si0=l17;
l7=si0;
goto L72;
L73:;
si0=l17;
sj1=l29;
sj2=1ULL;
sj1+=sj2;
l29=sj1;
si1=!(sj1);
si0|=si1;
l7=si0;
L72:;
si0=l3;
sj1=l29;
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=8U;
si0+=si1;
l3=si0;
si0=l2;
si1=8U;
si0+=si1;
l2=si0;
si0=l11;
si1=-1U;
si0+=si1;
l11=si0;
if(si0){
goto L71;
}
}
si0=l7;
si0=!(si0);
if(si0){
goto L75;
}
si0=l12;
si1=l12;
sj1=i64_load(&i->m0,(U64)si1);
sj2=1ULL;
sj1+=sj2;
l29=sj1;
i64_store(&i->m0,(U64)si0,sj1);
sj0=l29;
sj1=0ULL;
si0=sj0 != sj1;
if(si0){
goto L75;
}
si0=l10;
l2=si0;
si0=l24;
l3=si0;
L76:;
{
si0=l2;
si0=!(si0);
if(si0){
goto L74;
}
si0=l3;
si1=l3;
sj1=i64_load(&i->m0,(U64)si1);
sj2=1ULL;
sj1+=sj2;
l29=sj1;
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=-8U;
si0+=si1;
l2=si0;
si0=l3;
si1=8U;
si0+=si1;
l3=si0;
sj0=l29;
si0=!(sj0);
if(si0){
goto L76;
}
}
L75:;
si0=l10;
si1=l20;
si0-=si1;
l10=si0;
si0=l24;
si1=l20;
si0+=si1;
l24=si0;
si0=l23;
si1=l20;
si0+=si1;
l23=si0;
si0=l14;
si1=l19;
si0+=si1;
l14=si0;
si0=l18;
si1=l25;
si0+=si1;
l18=si0;
si0=l26;
si1=l19;
si0-=si1;
l26=si0;
si1=l13;
si0=si0 < si1;
if(si0){
goto L62;
}
goto L70;
L74:;
}
si0=1216724U;
si1=73U;
si2=1217024U;
f604(i,si0,si1,si2);
UNREACHABLE;
L66:;
si0=1212264U;
si1=35U;
si2=1216912U;
f604(i,si0,si1,si2);
UNREACHABLE;
L65:;
si0=l0;
si1=l1;
si2=l2;
si3=l3;
si4=l4;
si5=l5;
si6=l6;
si7=l7;
f1203(i,si0,si1,si2,si3,si4,si5,si6,si7);
goto L13;
L64:;
si0=l14;
si1=l1;
si2=1216992U;
f593(i,si0,si1,si2);
UNREACHABLE;
L63:;
si0=l13;
si1=l3;
si2=1217008U;
f597(i,si0,si1,si2);
UNREACHABLE;
L62:;
si0=l1;
si1=l14;
si0=si0 < si1;
if(si0){
goto L80;
}
si0=l1;
si1=l14;
si0-=si1;
l17=si0;
si0=l26;
si1=2U;
si0<<=(si1&31);
l3=si0;
si1=l5;
si2=5U;
si1*=si2;
si0=si0 < si1;
if(si0){
goto L83;
}
si0=l3;
si1=l5;
si2=7U;
si1*=si2;
si0=si0 < si1;
if(si0){
goto L82;
}
si0=l6;
si1=l15;
si2=l18;
si3=l26;
si4=l4;
si5=l5;
si6=l16;
si7=l22;
f1208(i,si0,si1,si2,si3,si4,si5,si6,si7);
goto L81;
L83:;
si0=l6;
si1=l15;
si2=l18;
si3=l26;
si4=l4;
si5=l5;
si6=l16;
si7=l22;
f1203(i,si0,si1,si2,si3,si4,si5,si6,si7);
goto L81;
L82:;
si0=l6;
si1=l15;
si2=l18;
si3=l26;
si4=l4;
si5=l5;
si6=l16;
si7=l22;
f1204(i,si0,si1,si2,si3,si4,si5,si6,si7);
L81:;
si0=l26;
si1=l5;
si0+=si1;
l3=si0;
si1=l17;
si0=si0 > si1;
if(si0){
goto L79;
}
si0=l26;
si1=l13;
si0=si0 > si1;
if(si0){
goto L78;
}
si0=l0;
si1=l14;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l3=si0;
si1=l5;
si2=3U;
si1<<=(si2&31);
si0+=si1;
si1=l6;
si2=l5;
si3=3U;
si2<<=(si3&31);
si1+=si2;
si2=l26;
si3=3U;
si2<<=(si3&31);
si0=f15143(i,si0,si1,si2);
l20=si0;
si0=l17;
si1=l5;
si0=si0 < si1;
if(si0){
goto L77;
}
si0=0U;
l2=si0;
si0=l5;
l7=si0;
L84:;
{
si0=l3;
sj0=i64_load(&i->m0,(U64)si0);
l28=sj0;
si1=l6;
sj1=i64_load(&i->m0,(U64)si1);
sj0+=sj1;
l29=sj0;
sj1=l28;
si0=sj0 < sj1;
l11=si0;
si0=l2;
si1=255U;
si0&=si1;
if(si0){
goto L86;
}
si0=l11;
l2=si0;
goto L85;
L86:;
si0=l11;
sj1=l29;
sj2=1ULL;
sj1+=sj2;
l29=sj1;
si1=!(sj1);
si0|=si1;
l2=si0;
L85:;
si0=l3;
sj1=l29;
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=8U;
si0+=si1;
l3=si0;
si0=l6;
si1=8U;
si0+=si1;
l6=si0;
si0=l7;
si1=-1U;
si0+=si1;
l7=si0;
if(si0){
goto L84;
}
}
si0=l2;
si1=1U;
si0^=si1;
l3=si0;
si0=l17;
si1=l5;
si0=si0 == si1;
if(si0){
goto L88;
}
si0=l3;
if(si0){
goto L88;
}
si0=l20;
si1=l20;
sj1=i64_load(&i->m0,(U64)si1);
sj2=1ULL;
sj1+=sj2;
l29=sj1;
i64_store(&i->m0,(U64)si0,sj1);
sj0=l29;
sj1=0ULL;
si0=sj0 != sj1;
if(si0){
goto L13;
}
si0=l1;
si1=3U;
si0<<=(si1&31);
si1=l14;
si2=3U;
si1<<=(si2&31);
l3=si1;
si0-=si1;
si1=l5;
si2=3U;
si1<<=(si2&31);
l7=si1;
si0-=si1;
si1=-8U;
si0+=si1;
l2=si0;
si0=l3;
si1=l7;
si0+=si1;
si1=l0;
si0+=si1;
si1=8U;
si0+=si1;
l3=si0;
L89:;
{
si0=l2;
si0=!(si0);
if(si0){
goto L87;
}
si0=l3;
si1=l3;
sj1=i64_load(&i->m0,(U64)si1);
sj2=1ULL;
sj1+=sj2;
l29=sj1;
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=-8U;
si0+=si1;
l2=si0;
si0=l3;
si1=8U;
si0+=si1;
l3=si0;
sj0=l29;
si0=!(sj0);
if(si0){
goto L89;
}
goto L13;
}
L88:;
si0=l17;
si1=l5;
si0=si0 != si1;
si1=l3;
si0|=si1;
if(si0){
goto L13;
}
L87:;
si0=1216724U;
si1=73U;
si2=1216976U;
f604(i,si0,si1,si2);
UNREACHABLE;
L80:;
si0=l14;
si1=l1;
si2=1216928U;
f593(i,si0,si1,si2);
UNREACHABLE;
L79:;
si0=l3;
si1=l17;
si2=1216944U;
f597(i,si0,si1,si2);
UNREACHABLE;
L78:;
si0=l26;
si1=l13;
si2=1216960U;
f597(i,si0,si1,si2);
UNREACHABLE;
L77:;
si0=1201588U;
si1=35U;
si2=1203200U;
f604(i,si0,si1,si2);
UNREACHABLE;
L18:;
si0=1216724U;
si1=73U;
si2=1216896U;
f604(i,si0,si1,si2);
UNREACHABLE;
L17:;
si0=l6;
si1=l13;
si2=l18;
si3=l14;
si4=l4;
si5=l5;
si6=l16;
si7=l15;
f1208(i,si0,si1,si2,si3,si4,si5,si6,si7);
L16:;
si0=1212264U;
si1=35U;
si2=1216848U;
f604(i,si0,si1,si2);
UNREACHABLE;
L15:;
si0=l1;
si1=l14;
si0=si0 < si1;
if(si0){
goto L3;
}
si0=l14;
si1=l19;
si0=si0 > si1;
if(si0){
goto L4;
}
si0=l6;
si1=l13;
si2=l18;
si3=l14;
si4=l4;
si5=l5;
si6=l16;
si7=l15;
f1215(i,si0,si1,si2,si3,si4,si5,si6,si7);
si0=l10;
si1=l1;
si2=l14;
si1-=si2;
l26=si1;
si0=si0 <= si1;
if(si0){
goto L5;
}
goto L1;
L14:;
si0=l1;
si1=l20;
si0=si0 < si1;
if(si0){
goto L12;
}
si0=l19;
si1=l5;
si0=si0 >= si1;
if(si0){
goto L91;
}
si0=l6;
si1=l13;
si2=l4;
si3=l5;
si4=l18;
si5=l19;
si6=l16;
si7=l15;
sj0=f1127(i,si0,si1,si2,si3,si4,si5,si6,si7);
goto L90;
L91:;
si0=l6;
si1=l13;
si2=l18;
si3=l19;
si4=l4;
si5=l5;
si6=l16;
si7=l15;
sj0=f1127(i,si0,si1,si2,si3,si4,si5,si6,si7);
L90:;
si0=l13;
si1=l5;
si0=si0 < si1;
if(si0){
goto L11;
}
si0=l19;
si1=l5;
si0+=si1;
l3=si0;
si1=l19;
si0=si0 < si1;
if(si0){
goto L10;
}
si0=l3;
si1=l1;
si2=l20;
si1-=si2;
l17=si1;
si0=si0 > si1;
if(si0){
goto L9;
}
si0=l19;
si1=l10;
si0=si0 > si1;
if(si0){
goto L8;
}
si0=l0;
si1=l20;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l3=si0;
si1=l5;
si2=3U;
si1<<=(si2&31);
si0+=si1;
si1=l6;
si2=l5;
si3=3U;
si2<<=(si3&31);
si1+=si2;
si2=l19;
si3=3U;
si2<<=(si3&31);
si0=f15143(i,si0,si1,si2);
l14=si0;
si0=0U;
l2=si0;
si0=l5;
l7=si0;
L92:;
{
si0=l3;
sj0=i64_load(&i->m0,(U64)si0);
l28=sj0;
si1=l6;
sj1=i64_load(&i->m0,(U64)si1);
sj0+=sj1;
l29=sj0;
sj1=l28;
si0=sj0 < sj1;
l11=si0;
si0=l2;
si1=255U;
si0&=si1;
if(si0){
goto L94;
}
si0=l11;
l2=si0;
goto L93;
L94:;
si0=l11;
sj1=l29;
sj2=1ULL;
sj1+=sj2;
l29=sj1;
si1=!(sj1);
si0|=si1;
l2=si0;
L93:;
si0=l3;
sj1=l29;
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=8U;
si0+=si1;
l3=si0;
si0=l6;
si1=8U;
si0+=si1;
l6=si0;
si0=l7;
si1=-1U;
si0+=si1;
l7=si0;
if(si0){
goto L92;
}
}
si0=l17;
si1=l5;
si0=si0 == si1;
l3=si0;
if(si0){
goto L96;
}
si0=l2;
si1=1U;
si0^=si1;
if(si0){
goto L96;
}
si0=l14;
si1=l14;
sj1=i64_load(&i->m0,(U64)si1);
sj2=1ULL;
sj1+=sj2;
l29=sj1;
i64_store(&i->m0,(U64)si0,sj1);
sj0=l29;
sj1=0ULL;
si0=sj0 != sj1;
if(si0){
goto L13;
}
si0=l1;
si1=3U;
si0<<=(si1&31);
si1=l20;
si2=3U;
si1<<=(si2&31);
l3=si1;
si0-=si1;
si1=l5;
si2=3U;
si1<<=(si2&31);
l7=si1;
si0-=si1;
si1=-8U;
si0+=si1;
l2=si0;
si0=l3;
si1=l7;
si0+=si1;
si1=l0;
si0+=si1;
si1=8U;
si0+=si1;
l3=si0;
L97:;
{
si0=l2;
si0=!(si0);
if(si0){
goto L95;
}
si0=l3;
si1=l3;
sj1=i64_load(&i->m0,(U64)si1);
sj2=1ULL;
sj1+=sj2;
l29=sj1;
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=-8U;
si0+=si1;
l2=si0;
si0=l3;
si1=8U;
si0+=si1;
l3=si0;
sj0=l29;
si0=!(sj0);
if(si0){
goto L97;
}
goto L13;
}
L96:;
si0=l3;
si1=l2;
si0&=si1;
si0=!(si0);
if(si0){
goto L13;
}
L95:;
si0=1216724U;
si1=73U;
si2=1216800U;
f604(i,si0,si1,si2);
UNREACHABLE;
L13:;
si0=l9;
si1=-1U;
si0+=si1;
l3=si0;
si1=l1;
si0=si0 < si1;
if(si0){
goto L7;
}
si0=l3;
si1=l1;
si2=1217040U;
f594(i,si0,si1,si2);
UNREACHABLE;
L12:;
si0=l20;
si1=l1;
si2=1216660U;
f593(i,si0,si1,si2);
UNREACHABLE;
L11:;
si0=1212264U;
si1=35U;
si2=1216676U;
f604(i,si0,si1,si2);
UNREACHABLE;
L10:;
si0=l5;
si1=l3;
si2=1216692U;
f683(i,si0,si1,si2);
UNREACHABLE;
L9:;
si0=l3;
si1=l17;
si2=1216692U;
f597(i,si0,si1,si2);
UNREACHABLE;
L8:;
si0=l19;
si1=l10;
si2=1216708U;
f597(i,si0,si1,si2);
UNREACHABLE;
L7:;
si0=l0;
si1=l3;
si2=3U;
si1<<=(si2&31);
si0+=si1;
sj0=i64_load(&i->m0,(U64)si0);
l29=sj0;
si0=l8;
si1=32U;
si0+=si1;
i->g0=si0;
sj0=l29;
goto L0;
L6:;
si0=l1;
si1=l14;
si0=si0 < si1;
if(si0){
goto L3;
}
si0=l14;
si1=l19;
si0=si0 > si1;
if(si0){
goto L4;
}
si0=l6;
si1=l13;
si2=l18;
si3=l14;
si4=l4;
si5=l5;
si6=l16;
si7=l15;
f1208(i,si0,si1,si2,si3,si4,si5,si6,si7);
si0=l10;
si1=l1;
si2=l14;
si1-=si2;
l26=si1;
si0=si0 > si1;
if(si0){
goto L1;
}
L5:;
si0=l14;
si1=l10;
si2=1216880U;
f597(i,si0,si1,si2);
UNREACHABLE;
L4:;
si0=1212264U;
si1=35U;
si2=1216832U;
f604(i,si0,si1,si2);
UNREACHABLE;
L3:;
si0=l14;
l20=si0;
L2:;
si0=l20;
si1=l1;
si2=1216816U;
f593(i,si0,si1,si2);
UNREACHABLE;
L1:;
si0=l10;
si1=l26;
si2=1216864U;
f597(i,si0,si1,si2);
UNREACHABLE;
L0:;
return sj0;
}

U64 f1128(rustpythonInstance*i,U32 l0,U32 l1,U64 l2) {
U32 l3=0;
U64 l4=0;
U64 l5=0;
U64 l6=0;
U64 l7=0;
U64 l8=0;
U32 l9=0;
U64 l10=0;
U32 l11=0;
U64 l12=0;
U64 l13=0;
U32 l14=0;
U32 l15=0;
U32 l16=0;
U32 si0,si1,si2,si3,si4,si5;
U64 sj0,sj1,sj2,sj3,sj4,sj5,sj6;
si0=i->g0;
si1=96U;
si0-=si1;
l3=si0;
i->g0=si0;
sj0=0ULL;
l4=sj0;
sj0=l2;
sj1=l2;
sj1=I64_CLZ(sj1);
l5=sj1;
sj0<<=(sj1&63);
l6=sj0;
sj1=0ULL;
si0=sj0 == sj1;
if(si0){
goto L5;
}
sj0=l5;
sj1=63ULL;
sj0&=sj1;
l7=sj0;
si0=l3;
si1=80U;
si0+=si1;
sj1=-1ULL;
sj2=l6;
sj3=-1ULL;
sj2^=sj3;
sj3=l6;
sj4=0ULL;
f15155(i,si0,sj1,sj2,sj3,sj4);
si0=l3;
sj0=i64_load(&i->m0,(U64)si0+80U);
l8=sj0;
sj0=l5;
si0=!(sj0);
l9=si0;
if(si0){
goto L6;
}
sj0=l2;
sj1=0ULL;
si0=sj0 == sj1;
if(si0){
goto L4;
}
sj0=l6;
sj1=0ULL;
sj2=l6;
sj3=l8;
sj4=0ULL;
sj5=l5;
sj4-=sj5;
sj3>>=(sj4&63);
sj4=1ULL;
sj5=l5;
sj4<<=(sj5&63);
sj3|=sj4;
sj2*=sj3;
sj1-=sj2;
l2=sj1;
si0=sj0 < sj1;
if(si0){
goto L3;
}
sj0=l2;
sj1=l7;
sj0>>=(sj1&63);
l4=sj0;
L6:;
sj0=l6;
sj1=0ULL;
sj2=l6;
sj3=l8;
sj2*=sj3;
sj1-=sj2;
l10=sj1;
si0=sj0 < sj1;
if(si0){
goto L2;
}
si0=l1;
si1=3U;
si0<<=(si1&31);
si1=l0;
si0+=si1;
l11=si0;
si1=-8U;
si0+=si1;
sj0=i64_load(&i->m0,(U64)si0);
l12=sj0;
si0=l11;
si1=-16U;
si0+=si1;
sj0=i64_load(&i->m0,(U64)si0);
l13=sj0;
si0=l1;
si1=2U;
si0=si0 > si1;
if(si0){
goto L7;
}
sj0=l13;
l2=sj0;
goto L1;
L7:;
si0=l3;
si1=64U;
si0+=si1;
sj1=l12;
sj2=0ULL;
sj3=l10;
sj4=0ULL;
f15157(i,si0,sj1,sj2,sj3,sj4);
si0=l0;
si1=l1;
si2=-3U;
si1+=si2;
l14=si1;
si2=3U;
si1<<=(si2&31);
si0+=si1;
sj0=i64_load(&i->m0,(U64)si0);
l12=sj0;
si1=l3;
sj1=i64_load(&i->m0,(U64)si1+64U);
sj0+=sj1;
l2=sj0;
sj1=l12;
si0=sj0 < sj1;
l11=si0;
sj1=l13;
si2=l3;
si3=64U;
si2+=si3;
si3=8U;
si2+=si3;
sj2=i64_load(&i->m0,(U64)si2);
sj1+=sj2;
si2=l11;
sj2=(U64)(si2);
sj1+=sj2;
l12=sj1;
sj2=l13;
si1=sj1 < sj2;
sj2=l12;
sj3=l13;
si2=sj2 == sj3;
si0=si2?si0:si1;
l11=si0;
si0=l14;
si0=!(si0);
if(si0){
goto L8;
}
si0=l0;
si1=-32U;
si0+=si1;
l15=si0;
si0=l1;
si1=3U;
si0<<=(si1&31);
l1=si0;
si0=l3;
si1=48U;
si0+=si1;
si1=8U;
si0+=si1;
l16=si0;
L9:;
{
si0=l3;
si1=48U;
si0+=si1;
sj1=l12;
sj2=0ULL;
sj3=l10;
sj4=0ULL;
f15157(i,si0,sj1,sj2,sj3,sj4);
sj0=l2;
sj1=l10;
sj0+=sj1;
l12=sj0;
sj1=l2;
si2=l11;
si3=1U;
si2&=si3;
l11=si2;
sj0=si2?sj0:sj1;
l13=sj0;
sj0=l12;
sj1=l2;
si0=sj0 < sj1;
l0=si0;
si0=l15;
si1=l1;
si0+=si1;
sj0=i64_load(&i->m0,(U64)si0);
l12=sj0;
si1=l3;
sj1=i64_load(&i->m0,(U64)si1+48U);
sj0+=sj1;
l2=sj0;
sj1=l12;
si0=sj0 < sj1;
l14=si0;
sj1=l13;
sj2=l6;
sj3=0ULL;
si4=l0;
sj2=si4?sj2:sj3;
sj3=0ULL;
si4=l11;
sj2=si4?sj2:sj3;
sj1-=sj2;
l13=sj1;
si2=l16;
sj2=i64_load(&i->m0,(U64)si2);
sj1+=sj2;
si2=l14;
sj2=(U64)(si2);
sj1+=sj2;
l12=sj1;
sj2=l13;
si1=sj1 < sj2;
sj2=l12;
sj3=l13;
si2=sj2 == sj3;
si0=si2?si0:si1;
l11=si0;
si0=l1;
si1=-8U;
si0+=si1;
l1=si0;
si1=24U;
si0=si0 != si1;
if(si0){
goto L9;
}
}
L8:;
sj0=l12;
sj1=l6;
sj2=0ULL;
si3=l11;
sj1=si3?sj1:sj2;
sj0-=sj1;
l12=sj0;
goto L1;
L5:;
si0=1233936U;
si1=25U;
si2=1234152U;
f604(i,si0,si1,si2);
UNREACHABLE;
L4:;
si0=1206624U;
si1=32U;
si2=1206784U;
f604(i,si0,si1,si2);
UNREACHABLE;
L3:;
si0=1215344U;
si1=33U;
si2=1215380U;
f604(i,si0,si1,si2);
UNREACHABLE;
L2:;
si0=1215280U;
si1=45U;
si2=1215328U;
f604(i,si0,si1,si2);
UNREACHABLE;
L1:;
si0=l9;
si0=!(si0);
if(si0){
goto L11;
}
sj0=l12;
sj1=0ULL;
sj2=l6;
sj3=l12;
sj4=l6;
si3=sj3 < sj4;
sj1=si3?sj1:sj2;
sj0-=sj1;
l12=sj0;
goto L10;
L11:;
si0=l3;
si1=32U;
si0+=si1;
sj1=l4;
sj2=0ULL;
sj3=l12;
sj4=0ULL;
f15157(i,si0,sj1,sj2,sj3,sj4);
si0=l3;
si1=16U;
si0+=si1;
sj1=l2;
si2=l3;
sj2=i64_load(&i->m0,(U64)si2+32U);
sj1+=sj2;
l12=sj1;
si2=l3;
si3=32U;
si2+=si3;
si3=8U;
si2+=si3;
sj2=i64_load(&i->m0,(U64)si2);
sj3=l12;
sj4=l2;
si3=sj3 < sj4;
sj3=(U64)(si3);
sj2+=sj3;
sj3=l5;
si3=(U32)(sj3);
f15156(i,si0,sj1,sj2,si3);
si0=l3;
si1=16U;
si0+=si1;
si1=8U;
si0+=si1;
sj0=i64_load(&i->m0,(U64)si0);
l12=sj0;
si0=l3;
sj0=i64_load(&i->m0,(U64)si0+16U);
l2=sj0;
L10:;
si0=l3;
sj1=l8;
sj2=0ULL;
sj3=l12;
sj4=0ULL;
f15157(i,si0,sj1,sj2,sj3,sj4);
si0=l3;
sj0=i64_load(&i->m0,(U64)si0);
l13=sj0;
si0=l3;
si1=8U;
si0+=si1;
sj0=i64_load(&i->m0,(U64)si0);
l10=sj0;
si0=l3;
si1=96U;
si0+=si1;
i->g0=si0;
sj0=l6;
sj1=0ULL;
sj2=l2;
sj3=l12;
sj4=l10;
sj5=l13;
sj6=l2;
sj5+=sj6;
l5=sj5;
sj6=l13;
si5=sj5 < sj6;
sj5=(U64)(si5);
sj4+=sj5;
sj3+=sj4;
sj4=1ULL;
sj3+=sj4;
sj4=l6;
sj3*=sj4;
sj2-=sj3;
l2=sj2;
sj3=l5;
si2=sj2 > sj3;
sj0=si2?sj0:sj1;
sj1=l2;
sj0+=sj1;
l2=sj0;
sj1=0ULL;
sj2=l6;
sj3=l2;
sj4=l6;
si3=sj3 < sj4;
sj1=si3?sj1:sj2;
sj0-=sj1;
sj1=l7;
sj0>>=(sj1&63);
L0:;
return sj0;
}

U64 f1129(rustpythonInstance*i,U32 l0,U32 l1,U64 l2) {
U32 l3=0;
U64 l4=0;
U64 l5=0;
U64 l6=0;
U64 l7=0;
U64 l8=0;
U64 l9=0;
U64 l10=0;
U64 l11=0;
U64 l12=0;
U64 l13=0;
U64 l14=0;
U32 l15=0;
U64 l16=0;
U32 l17=0;
U32 l18=0;
U32 si0,si1,si2,si3,si4,si5,si6,si7;
U64 sj0,sj1,sj2,sj3,sj4,sj5,sj6,sj7;
si0=i->g0;
si1=496U;
si0-=si1;
l3=si0;
i->g0=si0;
si0=l3;
sj1=l2;
i64_store(&i->m0,(U64)si0+464U,sj1);
si0=l1;
si1=2U;
si0=si0 < si1;
if(si0){
goto L11;
}
sj0=l2;
si0=!(sj0);
if(si0){
goto L10;
}
sj0=l2;
sj1=-1ULL;
si0=(U64)((I64)sj0>(I64)sj1);
if(si0){
goto L13;
}
si0=l1;
si1=3U;
si0=si0 < si1;
if(si0){
goto L12;
}
si0=l0;
si1=l1;
sj2=l2;
sj0=f1128(i,si0,si1,sj2);
l2=sj0;
goto L2;
L13:;
si0=l1;
si1=6U;
si0=si0 < si1;
if(si0){
goto L9;
}
sj0=l2;
sj1=l2;
sj1=I64_CLZ(sj1);
l4=sj1;
sj0<<=(sj1&63);
l5=sj0;
si0=l1;
si1=26U;
si0=si0 < si1;
if(si0){
goto L14;
}
sj0=l2;
sj1=4611686018427387903ULL;
si0=sj0 > sj1;
if(si0){
goto L14;
}
sj0=l5;
sj1=0ULL;
si0=sj0 == sj1;
if(si0){
goto L8;
}
si0=l3;
si1=416U;
si0+=si1;
sj1=-1ULL;
sj2=l5;
sj3=-1ULL;
sj2^=sj3;
sj3=l5;
sj4=0ULL;
f15155(i,si0,sj1,sj2,sj3,sj4);
sj0=l5;
sj1=0ULL;
si2=l3;
sj2=i64_load(&i->m0,(U64)si2+416U);
l6=sj2;
sj3=0ULL;
sj4=l4;
sj3-=sj4;
l7=sj3;
sj2>>=(sj3&63);
sj3=1ULL;
sj4=l4;
sj3<<=(sj4&63);
sj2|=sj3;
sj3=l5;
sj2*=sj3;
l8=sj2;
sj1-=sj2;
l2=sj1;
si0=sj0 < sj1;
if(si0){
goto L19;
}
si0=l3;
si1=400U;
si0+=si1;
sj1=l6;
sj2=0ULL;
sj3=l2;
sj4=0ULL;
f15157(i,si0,sj1,sj2,sj3,sj4);
si0=l3;
si1=384U;
si0+=si1;
sj1=l6;
sj2=0ULL;
sj3=l5;
sj4=0ULL;
sj5=l8;
si6=l3;
si7=400U;
si6+=si7;
si7=8U;
si6+=si7;
sj6=i64_load(&i->m0,(U64)si6);
sj7=-1ULL;
sj6^=sj7;
sj5+=sj6;
sj6=l5;
sj5*=sj6;
l8=sj5;
si6=l3;
sj6=i64_load(&i->m0,(U64)si6+400U);
si5=sj5 > sj6;
sj3=si5?sj3:sj4;
sj4=l8;
sj3+=sj4;
l8=sj3;
sj4=0ULL;
sj5=l5;
sj6=l8;
sj7=l5;
si6=sj6 < sj7;
sj4=si6?sj4:sj5;
sj3-=sj4;
l8=sj3;
sj4=0ULL;
f15157(i,si0,sj1,sj2,sj3,sj4);
si0=l3;
si1=368U;
si0+=si1;
sj1=l6;
sj2=0ULL;
sj3=l5;
sj4=0ULL;
sj5=l8;
sj6=-1ULL;
sj5^=sj6;
si6=l3;
si7=384U;
si6+=si7;
si7=8U;
si6+=si7;
sj6=i64_load(&i->m0,(U64)si6);
sj5-=sj6;
sj6=l5;
sj5*=sj6;
l9=sj5;
si6=l3;
sj6=i64_load(&i->m0,(U64)si6+384U);
si5=sj5 > sj6;
sj3=si5?sj3:sj4;
sj4=l9;
sj3+=sj4;
l9=sj3;
sj4=0ULL;
sj5=l5;
sj6=l9;
sj7=l5;
si6=sj6 < sj7;
sj4=si6?sj4:sj5;
sj3-=sj4;
l9=sj3;
sj4=0ULL;
f15157(i,si0,sj1,sj2,sj3,sj4);
si0=l3;
si1=352U;
si0+=si1;
sj1=l6;
sj2=0ULL;
sj3=l5;
sj4=0ULL;
sj5=l9;
sj6=-1ULL;
sj5^=sj6;
si6=l3;
si7=368U;
si6+=si7;
si7=8U;
si6+=si7;
sj6=i64_load(&i->m0,(U64)si6);
sj5-=sj6;
sj6=l5;
sj5*=sj6;
l10=sj5;
si6=l3;
sj6=i64_load(&i->m0,(U64)si6+368U);
si5=sj5 > sj6;
sj3=si5?sj3:sj4;
sj4=l10;
sj3+=sj4;
l10=sj3;
sj4=0ULL;
sj5=l5;
sj6=l10;
sj7=l5;
si6=sj6 < sj7;
sj4=si6?sj4:sj5;
sj3-=sj4;
l11=sj3;
sj4=0ULL;
f15157(i,si0,sj1,sj2,sj3,sj4);
si0=l3;
si1=352U;
si0+=si1;
si1=8U;
si0+=si1;
sj0=i64_load(&i->m0,(U64)si0);
l12=sj0;
si0=l3;
sj0=i64_load(&i->m0,(U64)si0+352U);
l13=sj0;
sj0=l9;
sj1=l4;
sj0>>=(sj1&63);
l14=sj0;
sj0=l8;
sj1=l4;
sj0>>=(sj1&63);
l10=sj0;
sj0=l2;
sj1=l4;
sj0>>=(sj1&63);
l9=sj0;
si0=l1;
si1=3U;
si0&=si1;
switch(si0){
case 0:
goto L17;
case 1:
goto L16;
case 2:
goto L18;
case 3:
goto L15;
default:
goto L17;
}
L19:;
si0=1215344U;
si1=33U;
si2=1215444U;
f604(i,si0,si1,si2);
UNREACHABLE;
L18:;
si0=l0;
si1=l1;
si2=-2U;
si1+=si2;
l15=si1;
si2=3U;
si1<<=(si2&31);
si0+=si1;
sj0=i64_load(&i->m0,(U64)si0);
l2=sj0;
si0=l1;
si1=3U;
si0<<=(si1&31);
si1=l0;
si0+=si1;
si1=-8U;
si0+=si1;
sj0=i64_load(&i->m0,(U64)si0);
l8=sj0;
goto L3;
L17:;
si0=l3;
si1=272U;
si0+=si1;
si1=l1;
si2=3U;
si1<<=(si2&31);
si2=l0;
si1+=si2;
l15=si1;
si2=-8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
sj2=0ULL;
sj3=l14;
sj4=0ULL;
f15157(i,si0,sj1,sj2,sj3,sj4);
si0=l3;
si1=288U;
si0+=si1;
si1=l15;
si2=-16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
sj2=0ULL;
sj3=l10;
sj4=0ULL;
f15157(i,si0,sj1,sj2,sj3,sj4);
si0=l3;
si1=304U;
si0+=si1;
si1=l15;
si2=-24U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
sj2=0ULL;
sj3=l9;
sj4=0ULL;
f15157(i,si0,sj1,sj2,sj3,sj4);
si0=l3;
si1=288U;
si0+=si1;
si1=8U;
si0+=si1;
sj0=i64_load(&i->m0,(U64)si0);
si1=l3;
si2=272U;
si1+=si2;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
sj0+=sj1;
si1=l3;
sj1=i64_load(&i->m0,(U64)si1+288U);
l8=sj1;
si2=l3;
sj2=i64_load(&i->m0,(U64)si2+272U);
sj1+=sj2;
l2=sj1;
sj2=l8;
si1=sj1 < sj2;
sj1=(U64)(si1);
sj0+=sj1;
si1=l3;
si2=304U;
si1+=si2;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
sj0+=sj1;
sj1=l2;
si2=l3;
sj2=i64_load(&i->m0,(U64)si2+304U);
sj1+=sj2;
l8=sj1;
sj2=l2;
si1=sj1 < sj2;
sj1=(U64)(si1);
sj0+=sj1;
sj1=l8;
si2=l0;
si3=l1;
si4=-4U;
si3+=si4;
l15=si3;
si4=3U;
si3<<=(si4&31);
si2+=si3;
sj2=i64_load(&i->m0,(U64)si2);
sj1+=sj2;
l2=sj1;
sj2=l8;
si1=sj1 < sj2;
sj1=(U64)(si1);
sj0+=sj1;
l8=sj0;
goto L3;
L16:;
si0=l0;
si1=l1;
si2=-1U;
si1+=si2;
l15=si1;
si2=3U;
si1<<=(si2&31);
si0+=si1;
sj0=i64_load(&i->m0,(U64)si0);
l2=sj0;
sj0=0ULL;
l8=sj0;
goto L3;
L15:;
si0=l3;
si1=320U;
si0+=si1;
si1=l1;
si2=3U;
si1<<=(si2&31);
si2=l0;
si1+=si2;
l15=si1;
si2=-8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
sj2=0ULL;
sj3=l10;
sj4=0ULL;
f15157(i,si0,sj1,sj2,sj3,sj4);
si0=l3;
si1=336U;
si0+=si1;
si1=l15;
si2=-16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
sj2=0ULL;
sj3=l9;
sj4=0ULL;
f15157(i,si0,sj1,sj2,sj3,sj4);
si0=l3;
si1=336U;
si0+=si1;
si1=8U;
si0+=si1;
sj0=i64_load(&i->m0,(U64)si0);
si1=l3;
si2=320U;
si1+=si2;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
sj0+=sj1;
si1=l3;
sj1=i64_load(&i->m0,(U64)si1+336U);
l2=sj1;
si2=l3;
sj2=i64_load(&i->m0,(U64)si2+320U);
sj1+=sj2;
l8=sj1;
sj2=l2;
si1=sj1 < sj2;
sj1=(U64)(si1);
sj0+=sj1;
sj1=l8;
si2=l0;
si3=l1;
si4=-3U;
si3+=si4;
l15=si3;
si4=3U;
si3<<=(si4&31);
si2+=si3;
sj2=i64_load(&i->m0,(U64)si2);
sj1+=sj2;
l2=sj1;
sj2=l8;
si1=sj1 < sj2;
sj1=(U64)(si1);
sj0+=sj1;
l8=sj0;
goto L3;
L14:;
sj0=l5;
sj1=0ULL;
si0=sj0 == sj1;
if(si0){
goto L7;
}
si0=l3;
si1=144U;
si0+=si1;
sj1=-1ULL;
sj2=l5;
sj3=-1ULL;
sj2^=sj3;
sj3=l5;
sj4=0ULL;
f15155(i,si0,sj1,sj2,sj3,sj4);
sj0=l5;
sj1=0ULL;
si2=l3;
sj2=i64_load(&i->m0,(U64)si2+144U);
l11=sj2;
sj3=0ULL;
sj4=l4;
sj3-=sj4;
l7=sj3;
sj2>>=(sj3&63);
sj3=1ULL;
sj4=l4;
sj3<<=(sj4&63);
sj2|=sj3;
sj3=l5;
sj2*=sj3;
l8=sj2;
sj1-=sj2;
l2=sj1;
si0=sj0 < sj1;
if(si0){
goto L6;
}
si0=l3;
si1=128U;
si0+=si1;
sj1=l11;
sj2=0ULL;
sj3=l2;
sj4=0ULL;
f15157(i,si0,sj1,sj2,sj3,sj4);
si0=l3;
si1=112U;
si0+=si1;
sj1=l11;
sj2=0ULL;
sj3=l5;
sj4=0ULL;
sj5=l8;
si6=l3;
si7=128U;
si6+=si7;
si7=8U;
si6+=si7;
sj6=i64_load(&i->m0,(U64)si6);
sj7=-1ULL;
sj6^=sj7;
sj5+=sj6;
sj6=l5;
sj5*=sj6;
l8=sj5;
si6=l3;
sj6=i64_load(&i->m0,(U64)si6+128U);
si5=sj5 > sj6;
sj3=si5?sj3:sj4;
sj4=l8;
sj3+=sj4;
l8=sj3;
sj4=0ULL;
sj5=l5;
sj6=l8;
sj7=l5;
si6=sj6 < sj7;
sj4=si6?sj4:sj5;
sj3-=sj4;
l8=sj3;
sj4=0ULL;
f15157(i,si0,sj1,sj2,sj3,sj4);
si0=l3;
si1=112U;
si0+=si1;
si1=8U;
si0+=si1;
sj0=i64_load(&i->m0,(U64)si0);
l16=sj0;
si0=l3;
sj0=i64_load(&i->m0,(U64)si0+112U);
l12=sj0;
sj0=l8;
sj1=l4;
sj0>>=(sj1&63);
l14=sj0;
si0=l1;
si1=-1U;
si0+=si1;
l17=si0;
sj0=l2;
sj1=l4;
sj0>>=(sj1&63);
l10=sj0;
si0=l1;
si1=1U;
si0&=si1;
if(si0){
goto L5;
}
si0=l0;
si1=l17;
si2=3U;
si1<<=(si2&31);
si0+=si1;
sj0=i64_load(&i->m0,(U64)si0);
l2=sj0;
si0=l0;
si1=l1;
si2=-2U;
si1+=si2;
l15=si1;
si2=3U;
si1<<=(si2&31);
si0+=si1;
sj0=i64_load(&i->m0,(U64)si0);
l9=sj0;
si0=l1;
l17=si0;
goto L4;
L12:;
si0=l3;
si1=448U;
si0+=si1;
sj1=-1ULL;
sj2=l2;
sj3=-1ULL;
sj2^=sj3;
sj3=l2;
sj4=0ULL;
f15155(i,si0,sj1,sj2,sj3,sj4);
si0=l3;
si1=432U;
si0+=si1;
si1=l3;
sj1=i64_load(&i->m0,(U64)si1+448U);
si2=l3;
si3=448U;
si2+=si3;
si3=8U;
si2+=si3;
sj2=i64_load(&i->m0,(U64)si2);
si3=l0;
sj3=i64_load(&i->m0,(U64)si3+8U);
l8=sj3;
sj4=0ULL;
sj5=l2;
sj6=l8;
sj7=l2;
si6=sj6 < sj7;
sj4=si6?sj4:sj5;
sj3-=sj4;
l8=sj3;
sj4=0ULL;
f15157(i,si0,sj1,sj2,sj3,sj4);
sj0=l2;
sj1=0ULL;
si2=l0;
sj2=i64_load(&i->m0,(U64)si2);
l9=sj2;
sj3=l8;
si4=l3;
si5=432U;
si4+=si5;
si5=8U;
si4+=si5;
sj4=i64_load(&i->m0,(U64)si4);
sj5=l9;
si6=l3;
sj6=i64_load(&i->m0,(U64)si6+432U);
l5=sj6;
sj5+=sj6;
l9=sj5;
sj6=l5;
si5=sj5 < sj6;
sj5=(U64)(si5);
sj4+=sj5;
sj3+=sj4;
sj4=1ULL;
sj3+=sj4;
sj4=l2;
sj3*=sj4;
sj2-=sj3;
l8=sj2;
sj3=l9;
si2=sj2 > sj3;
sj0=si2?sj0:sj1;
sj1=l8;
sj0+=sj1;
l8=sj0;
sj1=0ULL;
sj2=l2;
sj3=l8;
sj4=l2;
si3=sj3 < sj4;
sj1=si3?sj1:sj2;
sj0-=sj1;
l2=sj0;
goto L2;
L11:;
si0=1215236U;
si1=25U;
si2=1215476U;
f604(i,si0,si1,si2);
UNREACHABLE;
L10:;
si0=l3;
si1=0U;
i32_store(&i->m0,(U64)si0+472U,si1);
si0=1U;
si1=l3;
si2=464U;
si1+=si2;
si2=1212704U;
si3=l3;
si4=472U;
si3+=si4;
si4=1215460U;
f1251(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L9:;
si0=l0;
si1=l1;
sj2=l2;
sj0=f1128(i,si0,si1,sj2);
l2=sj0;
goto L2;
L8:;
si0=1233936U;
si1=25U;
si2=1234152U;
f604(i,si0,si1,si2);
UNREACHABLE;
L7:;
si0=1233936U;
si1=25U;
si2=1234152U;
f604(i,si0,si1,si2);
UNREACHABLE;
L6:;
si0=1215344U;
si1=33U;
si2=1215412U;
f604(i,si0,si1,si2);
UNREACHABLE;
L5:;
si0=l3;
si1=80U;
si0+=si1;
si1=l0;
si2=l17;
si3=3U;
si2<<=(si3&31);
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
sj2=0ULL;
sj3=l14;
sj4=0ULL;
f15157(i,si0,sj1,sj2,sj3,sj4);
si0=l3;
si1=96U;
si0+=si1;
si1=l1;
si2=3U;
si1<<=(si2&31);
si2=l0;
si1+=si2;
si2=-16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
sj2=0ULL;
sj3=l10;
sj4=0ULL;
f15157(i,si0,sj1,sj2,sj3,sj4);
si0=l3;
si1=96U;
si0+=si1;
si1=8U;
si0+=si1;
sj0=i64_load(&i->m0,(U64)si0);
si1=l3;
si2=80U;
si1+=si2;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
sj0+=sj1;
si1=l3;
sj1=i64_load(&i->m0,(U64)si1+96U);
l9=sj1;
si2=l3;
sj2=i64_load(&i->m0,(U64)si2+80U);
sj1+=sj2;
l2=sj1;
sj2=l9;
si1=sj1 < sj2;
sj1=(U64)(si1);
sj0+=sj1;
sj1=l2;
si2=l0;
si3=l1;
si4=-3U;
si3+=si4;
l15=si3;
si4=3U;
si3<<=(si4&31);
si2+=si3;
sj2=i64_load(&i->m0,(U64)si2);
sj1+=sj2;
l9=sj1;
sj2=l2;
si1=sj1 < sj2;
sj1=(U64)(si1);
sj0+=sj1;
l2=sj0;
L4:;
si0=l15;
si1=l1;
si0=si0 > si1;
if(si0){
goto L20;
}
sj0=l7;
sj1=63ULL;
sj0&=sj1;
l6=sj0;
si0=l15;
si1=-2U;
si0&=si1;
l18=si0;
si0=!(si0);
if(si0){
goto L21;
}
sj0=l5;
sj1=0ULL;
sj2=l8;
sj3=-1ULL;
sj2^=sj3;
sj3=l16;
sj2-=sj3;
sj3=l5;
sj2*=sj3;
l8=sj2;
sj3=l12;
si2=sj2 > sj3;
sj0=si2?sj0:sj1;
sj1=l8;
sj0+=sj1;
l8=sj0;
sj1=0ULL;
sj2=l5;
sj3=l8;
sj4=l5;
si3=sj3 < sj4;
sj1=si3?sj1:sj2;
sj0-=sj1;
sj1=l4;
sj0>>=(sj1&63);
l7=sj0;
si0=l15;
si1=3U;
si0<<=(si1&31);
si1=-16U;
si0&=si1;
si1=l17;
si2=1U;
si1&=si2;
si2=3U;
si1<<=(si2&31);
si0|=si1;
si1=l0;
si0+=si1;
si1=-16U;
si0+=si1;
l1=si0;
si0=0U;
si1=l18;
si0-=si1;
l0=si0;
L22:;
{
si0=l3;
si1=64U;
si0+=si1;
sj1=l2;
sj2=0ULL;
sj3=l7;
sj4=0ULL;
f15157(i,si0,sj1,sj2,sj3,sj4);
si0=l3;
si1=48U;
si0+=si1;
sj1=l9;
sj2=0ULL;
sj3=l14;
sj4=0ULL;
f15157(i,si0,sj1,sj2,sj3,sj4);
si0=l3;
si1=32U;
si0+=si1;
si1=l1;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
sj2=0ULL;
sj3=l10;
sj4=0ULL;
f15157(i,si0,sj1,sj2,sj3,sj4);
si0=l3;
si1=48U;
si0+=si1;
si1=8U;
si0+=si1;
sj0=i64_load(&i->m0,(U64)si0);
si1=l3;
si2=64U;
si1+=si2;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
sj0+=sj1;
si1=l3;
sj1=i64_load(&i->m0,(U64)si1+48U);
l8=sj1;
si2=l3;
sj2=i64_load(&i->m0,(U64)si2+64U);
sj1+=sj2;
l2=sj1;
sj2=l8;
si1=sj1 < sj2;
sj1=(U64)(si1);
sj0+=sj1;
si1=l3;
si2=32U;
si1+=si2;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
sj0+=sj1;
sj1=l2;
si2=l3;
sj2=i64_load(&i->m0,(U64)si2+32U);
sj1+=sj2;
l8=sj1;
sj2=l2;
si1=sj1 < sj2;
sj1=(U64)(si1);
sj0+=sj1;
sj1=l8;
si2=l1;
sj2=i64_load(&i->m0,(U64)si2);
sj1+=sj2;
l9=sj1;
sj2=l8;
si1=sj1 < sj2;
sj1=(U64)(si1);
sj0+=sj1;
l2=sj0;
si0=l1;
si1=-16U;
si0+=si1;
l1=si0;
si0=l0;
si1=2U;
si0+=si1;
l0=si0;
if(si0){
goto L22;
}
}
L21:;
si0=l3;
si1=16U;
si0+=si1;
sj1=l2;
sj2=0ULL;
sj3=l10;
sj4=0ULL;
f15157(i,si0,sj1,sj2,sj3,sj4);
si0=l3;
sj1=l11;
sj2=0ULL;
si3=l3;
si4=16U;
si3+=si4;
si4=8U;
si3+=si4;
sj3=i64_load(&i->m0,(U64)si3);
si4=l3;
sj4=i64_load(&i->m0,(U64)si4+16U);
l8=sj4;
sj5=l9;
sj4+=sj5;
l2=sj4;
sj5=l8;
si4=sj4 < sj5;
sj4=(U64)(si4);
sj3+=sj4;
sj4=l4;
sj3<<=(sj4&63);
sj4=l2;
sj5=l6;
sj4>>=(sj5&63);
sj3|=sj4;
l8=sj3;
sj4=0ULL;
f15157(i,si0,sj1,sj2,sj3,sj4);
sj0=l5;
sj1=0ULL;
sj2=l2;
sj3=l4;
sj2<<=(sj3&63);
l2=sj2;
sj3=l8;
si4=l3;
si5=8U;
si4+=si5;
sj4=i64_load(&i->m0,(U64)si4);
sj5=l2;
si6=l3;
sj6=i64_load(&i->m0,(U64)si6);
l9=sj6;
sj5+=sj6;
l2=sj5;
sj6=l9;
si5=sj5 < sj6;
sj5=(U64)(si5);
sj4+=sj5;
sj3+=sj4;
sj4=1ULL;
sj3+=sj4;
sj4=l5;
sj3*=sj4;
sj2-=sj3;
l8=sj2;
sj3=l2;
si2=sj2 > sj3;
sj0=si2?sj0:sj1;
sj1=l8;
sj0+=sj1;
l2=sj0;
sj1=0ULL;
sj2=l5;
sj3=l2;
sj4=l5;
si3=sj3 < sj4;
sj1=si3?sj1:sj2;
sj0-=sj1;
sj1=l4;
sj0>>=(sj1&63);
l2=sj0;
goto L2;
L20:;
si0=l15;
si1=l1;
si2=1215396U;
f597(i,si0,si1,si2);
UNREACHABLE;
L3:;
si0=l15;
si1=l1;
si0=si0 > si1;
if(si0){
goto L1;
}
sj0=l7;
sj1=63ULL;
sj0&=sj1;
l16=sj0;
si0=l15;
si1=-4U;
si0&=si1;
l17=si0;
si0=!(si0);
if(si0){
goto L23;
}
sj0=l5;
sj1=0ULL;
sj2=l11;
sj3=-1ULL;
sj2^=sj3;
sj3=l12;
sj2-=sj3;
sj3=l5;
sj2*=sj3;
l7=sj2;
sj3=l13;
si2=sj2 > sj3;
sj0=si2?sj0:sj1;
sj1=l7;
sj0+=sj1;
l7=sj0;
sj1=0ULL;
sj2=l5;
sj3=l7;
sj4=l5;
si3=sj3 < sj4;
sj1=si3?sj1:sj2;
sj0-=sj1;
sj1=l4;
sj0>>=(sj1&63);
l7=sj0;
sj0=l11;
sj1=l4;
sj0>>=(sj1&63);
l11=sj0;
si0=l15;
si1=3U;
si0<<=(si1&31);
si1=-32U;
si0&=si1;
si1=l15;
si2=3U;
si1&=si2;
si2=3U;
si1<<=(si2&31);
si0|=si1;
si1=l0;
si0+=si1;
si1=-32U;
si0+=si1;
l1=si0;
si0=0U;
si1=l17;
si0-=si1;
l0=si0;
L24:;
{
si0=l3;
si1=256U;
si0+=si1;
sj1=l8;
sj2=0ULL;
sj3=l7;
sj4=0ULL;
f15157(i,si0,sj1,sj2,sj3,sj4);
si0=l3;
si1=240U;
si0+=si1;
sj1=l2;
sj2=0ULL;
sj3=l11;
sj4=0ULL;
f15157(i,si0,sj1,sj2,sj3,sj4);
si0=l3;
si1=224U;
si0+=si1;
si1=l1;
si2=24U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
sj2=0ULL;
sj3=l14;
sj4=0ULL;
f15157(i,si0,sj1,sj2,sj3,sj4);
si0=l3;
si1=208U;
si0+=si1;
si1=l1;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
sj2=0ULL;
sj3=l10;
sj4=0ULL;
f15157(i,si0,sj1,sj2,sj3,sj4);
si0=l3;
si1=192U;
si0+=si1;
si1=l1;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
sj2=0ULL;
sj3=l9;
sj4=0ULL;
f15157(i,si0,sj1,sj2,sj3,sj4);
si0=l3;
si1=240U;
si0+=si1;
si1=8U;
si0+=si1;
sj0=i64_load(&i->m0,(U64)si0);
si1=l3;
si2=256U;
si1+=si2;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
sj0+=sj1;
si1=l3;
sj1=i64_load(&i->m0,(U64)si1+240U);
l8=sj1;
si2=l3;
sj2=i64_load(&i->m0,(U64)si2+256U);
sj1+=sj2;
l2=sj1;
sj2=l8;
si1=sj1 < sj2;
sj1=(U64)(si1);
sj0+=sj1;
si1=l3;
si2=224U;
si1+=si2;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
sj0+=sj1;
sj1=l2;
si2=l3;
sj2=i64_load(&i->m0,(U64)si2+224U);
sj1+=sj2;
l8=sj1;
sj2=l2;
si1=sj1 < sj2;
sj1=(U64)(si1);
sj0+=sj1;
si1=l3;
si2=208U;
si1+=si2;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
sj0+=sj1;
sj1=l8;
si2=l3;
sj2=i64_load(&i->m0,(U64)si2+208U);
sj1+=sj2;
l2=sj1;
sj2=l8;
si1=sj1 < sj2;
sj1=(U64)(si1);
sj0+=sj1;
si1=l3;
si2=192U;
si1+=si2;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
sj0+=sj1;
sj1=l2;
si2=l3;
sj2=i64_load(&i->m0,(U64)si2+192U);
sj1+=sj2;
l8=sj1;
sj2=l2;
si1=sj1 < sj2;
sj1=(U64)(si1);
sj0+=sj1;
sj1=l8;
si2=l1;
sj2=i64_load(&i->m0,(U64)si2);
sj1+=sj2;
l2=sj1;
sj2=l8;
si1=sj1 < sj2;
sj1=(U64)(si1);
sj0+=sj1;
l8=sj0;
si0=l1;
si1=-32U;
si0+=si1;
l1=si0;
si0=l0;
si1=4U;
si0+=si1;
l0=si0;
if(si0){
goto L24;
}
}
L23:;
si0=l3;
si1=176U;
si0+=si1;
sj1=l8;
sj2=0ULL;
sj3=l9;
sj4=0ULL;
f15157(i,si0,sj1,sj2,sj3,sj4);
si0=l3;
si1=160U;
si0+=si1;
sj1=l6;
sj2=0ULL;
si3=l3;
si4=176U;
si3+=si4;
si4=8U;
si3+=si4;
sj3=i64_load(&i->m0,(U64)si3);
si4=l3;
sj4=i64_load(&i->m0,(U64)si4+176U);
l8=sj4;
sj5=l2;
sj4+=sj5;
l2=sj4;
sj5=l8;
si4=sj4 < sj5;
sj4=(U64)(si4);
sj3+=sj4;
sj4=l4;
sj3<<=(sj4&63);
sj4=l2;
sj5=l16;
sj4>>=(sj5&63);
sj3|=sj4;
l8=sj3;
sj4=0ULL;
f15157(i,si0,sj1,sj2,sj3,sj4);
sj0=l5;
sj1=0ULL;
sj2=l2;
sj3=l4;
sj2<<=(sj3&63);
l2=sj2;
sj3=l8;
si4=l3;
si5=160U;
si4+=si5;
si5=8U;
si4+=si5;
sj4=i64_load(&i->m0,(U64)si4);
sj5=l2;
si6=l3;
sj6=i64_load(&i->m0,(U64)si6+160U);
l9=sj6;
sj5+=sj6;
l2=sj5;
sj6=l9;
si5=sj5 < sj6;
sj5=(U64)(si5);
sj4+=sj5;
sj3+=sj4;
sj4=1ULL;
sj3+=sj4;
sj4=l5;
sj3*=sj4;
sj2-=sj3;
l8=sj2;
sj3=l2;
si2=sj2 > sj3;
sj0=si2?sj0:sj1;
sj1=l8;
sj0+=sj1;
l2=sj0;
sj1=0ULL;
sj2=l5;
sj3=l2;
sj4=l5;
si3=sj3 < sj4;
sj1=si3?sj1:sj2;
sj0-=sj1;
sj1=l4;
sj0>>=(sj1&63);
l2=sj0;
L2:;
si0=l3;
si1=496U;
si0+=si1;
i->g0=si0;
sj0=l2;
goto L0;
L1:;
si0=l15;
si1=l1;
si2=1215428U;
f597(i,si0,si1,si2);
UNREACHABLE;
L0:;
return sj0;
}


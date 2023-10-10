#include "w2c2_base.h"

#include "rustpython.h"

U32 f330(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U64 l8=0;
U32 si0,si1,si2;
U64 sj0,sj1;
si0=i->g0;
si1=48U;
si0-=si1;
l2=si0;
i->g0=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L3;
}
si0=l0;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+4U);
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
si0=l3;
si1=l4;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
l0=si1;
si0=si0 >= si1;
if(si0){
goto L4;
}
si0=l0;
l1=si0;
goto L2;
L4:;
si0=l0;
l1=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+4U);
si1=l0;
si0-=si1;
si1=l3;
si2=1U;
si1+=si2;
l5=si1;
si2=l0;
si1-=si2;
l6=si1;
si0=si0 >= si1;
if(si0){
goto L5;
}
si0=l4;
si1=l0;
si2=l6;
f577(i,si0,si1,si2);
si0=l4;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
L5:;
si0=l5;
si1=l0;
si0=si0 == si1;
if(si0){
goto L6;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
si0=l6;
si1=3U;
si0&=si1;
l5=si0;
si0=l3;
si1=l0;
si0-=si1;
si1=3U;
si0=si0 < si1;
if(si0){
goto L7;
}
si0=l6;
si1=-4U;
si0&=si1;
l6=si0;
si0=l7;
si1=l1;
si2=4U;
si1<<=(si2&31);
si0+=si1;
l0=si0;
L8:;
{
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=48U;
si0+=si1;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=32U;
si0+=si1;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=16U;
si0+=si1;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=64U;
si0+=si1;
l0=si0;
si0=l1;
si1=4U;
si0+=si1;
l1=si0;
si0=l6;
si1=-4U;
si0+=si1;
l6=si0;
if(si0){
goto L8;
}
}
L7:;
si0=l5;
si0=!(si0);
if(si0){
goto L6;
}
si0=l7;
si1=l1;
si2=4U;
si1<<=(si2&31);
si0+=si1;
l0=si0;
L9:;
{
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=16U;
si0+=si1;
l0=si0;
si0=l1;
si1=1U;
si0+=si1;
l1=si0;
si0=l5;
si1=-1U;
si0+=si1;
l5=si0;
if(si0){
goto L9;
}
}
L6:;
si0=l4;
si1=8U;
si0+=si1;
si1=l1;
i32_store(&i->m0,(U64)si0,si1);
goto L2;
L3:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+4U);
l5=si0;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=l0;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
l0=si1;
si0=si0 <= si1;
if(si0){
goto L10;
}
si0=l5;
si0=i32_load(&i->m0,(U64)si0);
si1=l0;
si2=4U;
si1<<=(si2&31);
si0+=si1;
l0=si0;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L10;
}
si0=l1;
f468(i,si0);
goto L1;
L10:;
si0=1086632U;
si1=15U;
si2=1086664U;
f703(i,si0,si1,si2);
UNREACHABLE;
L2:;
si0=l1;
si1=l3;
si0=si0 > si1;
if(si0){
goto L11;
}
si0=l3;
si1=l1;
si2=1086616U;
f663(i,si0,si1,si2);
UNREACHABLE;
L11:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
si1=l3;
si2=4U;
si1<<=(si2&31);
si0+=si1;
l0=si0;
sj0=i64_load(&i->m0,(U64)si0+4U);
l8=sj0;
si0=l0;
si1=l2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si0=l0;
si1=1U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=12U;
si0+=si1;
l0=si0;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si0=l0;
si1=l2;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=32U;
si0+=si1;
si1=8U;
si0+=si1;
l0=si0;
si1=l5;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
sj1=l8;
i64_store(&i->m0,(U64)si0+32U,sj1);
si0=l1;
si1=1U;
si0=si0 != si1;
if(si0){
goto L14;
}
si0=l2;
si1=16U;
si0+=si1;
si1=12U;
si0+=si1;
si1=l0;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=1U;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l2;
si1=l2;
sj1=i64_load(&i->m0,(U64)si1+32U);
i64_store(&i->m0,(U64)si0+20U,sj1);
goto L13;
L14:;
si0=l4;
si1=l4;
si1=i32_load(&i->m0,(U64)si1+12U);
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l2;
si1=16U;
si0+=si1;
si1=12U;
si0+=si1;
si1=l0;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=l1;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l2;
si1=l2;
sj1=i64_load(&i->m0,(U64)si1+32U);
i64_store(&i->m0,(U64)si0+20U,sj1);
si0=l1;
si0=!(si0);
if(si0){
goto L12;
}
L13:;
si0=l2;
si1=16U;
si0+=si1;
si1=4U;
si0|=si1;
f468(i,si0);
L12:;
si0=l4;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=l3;
si0=si0 <= si1;
if(si0){
goto L15;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
si1=l3;
si2=4U;
si1<<=(si2&31);
si0+=si1;
l0=si0;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L1;
}
L15:;
si0=1086632U;
si1=15U;
si2=1086648U;
f703(i,si0,si1,si2);
UNREACHABLE;
L1:;
si0=l2;
si1=48U;
si0+=si1;
i->g0=si0;
si0=l0;
si1=4U;
si0+=si1;
L0:;
return si0;
}

U32 f331(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 l8=0;
U64 l9=0;
U32 si0,si1,si2;
U64 sj0,sj1;
si0=i->g0;
si1=32U;
si0-=si1;
l2=si0;
i->g0=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L3;
}
si0=l0;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+4U);
l4=si1;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
l0=si1;
si0=si0 >= si1;
if(si0){
goto L4;
}
si0=l0;
l5=si0;
goto L2;
L4:;
si0=l0;
l5=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+4U);
si1=l0;
si0-=si1;
si1=l3;
si2=1U;
si1+=si2;
l6=si1;
si2=l0;
si1-=si2;
l7=si1;
si0=si0 >= si1;
if(si0){
goto L5;
}
si0=l4;
si1=l0;
si2=l7;
f577(i,si0,si1,si2);
si0=l4;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
L5:;
si0=l6;
si1=l0;
si0=si0 == si1;
if(si0){
goto L6;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
l8=si0;
si0=l7;
si1=3U;
si0&=si1;
l6=si0;
si0=l3;
si1=l0;
si0-=si1;
si1=3U;
si0=si0 < si1;
if(si0){
goto L7;
}
si0=l7;
si1=-4U;
si0&=si1;
l7=si0;
si0=l8;
si1=l5;
si2=4U;
si1<<=(si2&31);
si0+=si1;
l0=si0;
L8:;
{
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=48U;
si0+=si1;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=32U;
si0+=si1;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=16U;
si0+=si1;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=64U;
si0+=si1;
l0=si0;
si0=l5;
si1=4U;
si0+=si1;
l5=si0;
si0=l7;
si1=-4U;
si0+=si1;
l7=si0;
if(si0){
goto L8;
}
}
L7:;
si0=l6;
si0=!(si0);
if(si0){
goto L6;
}
si0=l8;
si1=l5;
si2=4U;
si1<<=(si2&31);
si0+=si1;
l0=si0;
L9:;
{
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=16U;
si0+=si1;
l0=si0;
si0=l5;
si1=1U;
si0+=si1;
l5=si0;
si0=l6;
si1=-1U;
si0+=si1;
l6=si0;
if(si0){
goto L9;
}
}
L6:;
si0=l4;
si1=8U;
si0+=si1;
si1=l5;
i32_store(&i->m0,(U64)si0,si1);
goto L2;
L3:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+4U);
l5=si0;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=l0;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
l0=si1;
si0=si0 <= si1;
if(si0){
goto L10;
}
si0=l5;
si0=i32_load(&i->m0,(U64)si0);
si1=l0;
si2=4U;
si1<<=(si2&31);
si0+=si1;
l0=si0;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L10;
}
si0=l1;
f469(i,si0);
goto L1;
L10:;
si0=1086632U;
si1=15U;
si2=1086664U;
f703(i,si0,si1,si2);
UNREACHABLE;
L2:;
si0=l5;
si1=l3;
si0=si0 > si1;
if(si0){
goto L11;
}
si0=l3;
si1=l5;
si2=1086616U;
f663(i,si0,si1,si2);
UNREACHABLE;
L11:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
si1=l3;
si2=4U;
si1<<=(si2&31);
si0+=si1;
l0=si0;
sj0=i64_load(&i->m0,(U64)si0+4U);
l9=sj0;
si0=l0;
si1=l1;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si0=l0;
si1=1U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=12U;
si0+=si1;
l0=si0;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si0=l0;
si1=l1;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=16U;
si0+=si1;
si1=8U;
si0+=si1;
l0=si0;
si1=l6;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
sj1=l9;
i64_store(&i->m0,(U64)si0+16U,sj1);
si0=l5;
si1=1U;
si0=si0 != si1;
if(si0){
goto L14;
}
si0=l2;
si1=12U;
si0+=si1;
si1=l0;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=1U;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=l2;
sj1=i64_load(&i->m0,(U64)si1+16U);
i64_store(&i->m0,(U64)si0+4U,sj1);
goto L13;
L14:;
si0=l4;
si1=l4;
si1=i32_load(&i->m0,(U64)si1+12U);
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l2;
si1=12U;
si0+=si1;
si1=l0;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=l5;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=l2;
sj1=i64_load(&i->m0,(U64)si1+16U);
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l5;
si0=!(si0);
if(si0){
goto L12;
}
L13:;
si0=l2;
si1=4U;
si0|=si1;
f469(i,si0);
L12:;
si0=l4;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=l3;
si0=si0 <= si1;
if(si0){
goto L15;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
si1=l3;
si2=4U;
si1<<=(si2&31);
si0+=si1;
l0=si0;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L1;
}
L15:;
si0=1086632U;
si1=15U;
si2=1086648U;
f703(i,si0,si1,si2);
UNREACHABLE;
L1:;
si0=l2;
si1=32U;
si0+=si1;
i->g0=si0;
si0=l0;
si1=4U;
si0+=si1;
L0:;
return si0;
}

void f332(rustpythonInstance*i,U32 l0,U32 l1,U64 l2,U32 l3,U32 l4) {
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
si0=l1;
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l8=si0;
sj0=l2;
si0=(U32)(sj0);
l9=si0;
si0=0U;
l10=si0;
L1:;
{
si0=l5;
si1=l9;
si2=l8;
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
si3=l8;
si2&=si3;
l13=si2;
si1-=si2;
l14=si1;
si2=40U;
si1*=si2;
si0+=si1;
l9=si0;
si0=i32_load(&i->m0,(U64)si0+4U);
si1=l4;
si0=si0 != si1;
if(si0){
goto L5;
}
si0=l3;
si1=l9;
si1=i32_load(&i->m0,(U64)si1);
si2=l4;
si0=f15389(i,si0,si1,si2);
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
l9=si0;
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
si3=l8;
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
si1=l9;
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
l9=si0;
goto L1;
L7:;
}
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
L0:;
}

U32 f333(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
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
goto L4;
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
si0=8U;
l12=si0;
si0=l7;
si0=!(si0);
if(si0){
goto L11;
}
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=l7;
si1=7U;
si0=si0 > si1;
if(si0){
goto L13;
}
si0=8U;
si1=l7;
si0=f15277(i,si0,si1);
l12=si0;
goto L12;
L13:;
si0=l7;
si0=f15269(i,si0);
l12=si0;
L12:;
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
si0=f15392(i,si0,si1,si2);
l12=si0;
si0=l1;
si1=-1U;
si0+=si1;
l10=si0;
si1=l1;
si2=3U;
si1>>=(si2&31);
si2=7U;
si1*=si2;
si2=l10;
si3=8U;
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
goto L14;
}
si0=l0;
si1=l13;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l0;
si1=l12;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=4U;
si0+=si1;
si1=l10;
i32_store(&i->m0,(U64)si0,si1);
goto L2;
L14:;
si0=l14;
si1=-40U;
si0+=si1;
l15=si0;
si0=0U;
l11=si0;
L15:;
{
si0=l14;
si1=l11;
si0+=si1;
si0=i32_load8_s(&i->m0,(U64)si0);
si1=0U;
si0=(U32)((I32)si0<(I32)si1);
if(si0){
goto L16;
}
si0=l12;
si1=l10;
si2=l2;
si3=l15;
si4=0U;
si5=l11;
si4-=si5;
si5=40U;
si4*=si5;
si3+=si4;
sj2=f441(i,si2,si3);
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
goto L17;
}
si0=8U;
l1=si0;
L18:;
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
si2=l10;
si1&=si2;
l7=si1;
si0+=si1;
sj0=i64_load(&i->m0,(U64)si0);
sj1=-9187201950435737472ULL;
sj0&=sj1;
l9=sj0;
si0=!(sj0);
if(si0){
goto L18;
}
}
L17:;
si0=l12;
sj1=l9;
sj1=I64_CTZ(sj1);
si1=(U32)(sj1);
si2=3U;
si1>>=(si2&31);
si2=l7;
si1+=si2;
si2=l10;
si1&=si2;
l1=si1;
si0+=si1;
si0=i32_load8_s(&i->m0,(U64)si0);
si1=0U;
si0=(U32)((I32)si0<(I32)si1);
if(si0){
goto L19;
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
L19:;
si0=l12;
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
si1=l10;
si0&=si1;
si1=l12;
si0+=si1;
si1=8U;
si0+=si1;
si1=l7;
i32_store8(&i->m0,(U64)si0,si1);
si0=l1;
si1=-40U;
si0*=si1;
si1=l12;
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
L16:;
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
goto L15;
}
L7:;
si0=0U;
l1=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
l10=si0;
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
goto L20;
}
si0=l7;
si1=1U;
si0&=si1;
l11=si0;
si0=l7;
si1=1U;
si0=si0 == si1;
if(si0){
goto L21;
}
si0=l7;
si1=1073741822U;
si0&=si1;
l12=si0;
si0=0U;
l1=si0;
L22:;
{
si0=l10;
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
si0=l12;
si1=-2U;
si0+=si1;
l12=si0;
if(si0){
goto L22;
}
}
L21:;
si0=l11;
si0=!(si0);
if(si0){
goto L20;
}
si0=l10;
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
L20:;
si0=l6;
si1=8U;
si0=si0 < si1;
if(si0){
goto L25;
}
si0=l10;
si1=l6;
si0+=si1;
si1=l10;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
goto L24;
L25:;
si0=l10;
si1=8U;
si0+=si1;
si1=l10;
si2=l6;
si0=f15391(i,si0,si1,si2);
si0=l6;
si0=!(si0);
if(si0){
goto L23;
}
L24:;
si0=l10;
si1=-40U;
si0+=si1;
l17=si0;
si0=0U;
l1=si0;
L26:;
{
si0=l10;
si1=l1;
l15=si1;
si0+=si1;
l13=si0;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=128U;
si0=si0 != si1;
if(si0){
goto L27;
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
si1=l10;
si0+=si1;
si1=-40U;
si0+=si1;
l7=si0;
L29:;
{
si0=l5;
si1=l2;
si2=l6;
sj1=f441(i,si1,si2);
si1=(U32)(sj1);
l14=si1;
si0&=si1;
l11=si0;
l12=si0;
si0=l10;
si1=l11;
si0+=si1;
sj0=i64_load(&i->m0,(U64)si0);
sj1=-9187201950435737472ULL;
sj0&=sj1;
l9=sj0;
sj1=0ULL;
si0=sj0 != sj1;
if(si0){
goto L30;
}
si0=8U;
l1=si0;
si0=l11;
l12=si0;
L31:;
{
si0=l12;
si1=l1;
si0+=si1;
l12=si0;
si0=l1;
si1=8U;
si0+=si1;
l1=si0;
si0=l10;
si1=l12;
si2=l5;
si1&=si2;
l12=si1;
si0+=si1;
sj0=i64_load(&i->m0,(U64)si0);
sj1=-9187201950435737472ULL;
sj0&=sj1;
l9=sj0;
si0=!(sj0);
if(si0){
goto L31;
}
}
L30:;
si0=l10;
sj1=l9;
sj1=I64_CTZ(sj1);
si1=(U32)(sj1);
si2=3U;
si1>>=(si2&31);
si2=l12;
si1+=si2;
si2=l5;
si1&=si2;
l1=si1;
si0+=si1;
si0=i32_load8_s(&i->m0,(U64)si0);
si1=0U;
si0=(U32)((I32)si0<(I32)si1);
if(si0){
goto L32;
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
L32:;
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
goto L28;
}
si0=l10;
si1=l1;
si0+=si1;
l12=si0;
si0=i32_load8_u(&i->m0,(U64)si0);
l11=si0;
si0=l12;
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
si1=l10;
si0+=si1;
si1=8U;
si0+=si1;
si1=l14;
i32_store8(&i->m0,(U64)si0,si1);
si0=l1;
si1=-40U;
si0*=si1;
si1=l10;
si0+=si1;
si1=-40U;
si0+=si1;
l1=si0;
si0=l11;
si1=255U;
si0=si0 == si1;
if(si0){
goto L33;
}
si0=l7;
si0=i32_load8_u(&i->m0,(U64)si0);
l12=si0;
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
si1=l12;
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
l12=si0;
si0=l7;
si1=l1;
si1=i32_load8_u(&i->m0,(U64)si1+4U);
i32_store8(&i->m0,(U64)si0+4U,si1);
si0=l1;
si1=l12;
i32_store8(&i->m0,(U64)si0+4U,si1);
si0=l7;
si0=i32_load8_u(&i->m0,(U64)si0+5U);
l12=si0;
si0=l7;
si1=l1;
si1=i32_load8_u(&i->m0,(U64)si1+5U);
i32_store8(&i->m0,(U64)si0+5U,si1);
si0=l1;
si1=l12;
i32_store8(&i->m0,(U64)si0+5U,si1);
si0=l7;
si0=i32_load8_u(&i->m0,(U64)si0+6U);
l12=si0;
si0=l7;
si1=l1;
si1=i32_load8_u(&i->m0,(U64)si1+6U);
i32_store8(&i->m0,(U64)si0+6U,si1);
si0=l1;
si1=l12;
i32_store8(&i->m0,(U64)si0+6U,si1);
si0=l7;
si0=i32_load8_u(&i->m0,(U64)si0+7U);
l12=si0;
si0=l7;
si1=l1;
si1=i32_load8_u(&i->m0,(U64)si1+7U);
i32_store8(&i->m0,(U64)si0+7U,si1);
si0=l1;
si1=l12;
i32_store8(&i->m0,(U64)si0+7U,si1);
si0=l7;
si0=i32_load8_u(&i->m0,(U64)si0+8U);
l12=si0;
si0=l7;
si1=l1;
si1=i32_load8_u(&i->m0,(U64)si1+8U);
i32_store8(&i->m0,(U64)si0+8U,si1);
si0=l1;
si1=l12;
i32_store8(&i->m0,(U64)si0+8U,si1);
si0=l7;
si0=i32_load8_u(&i->m0,(U64)si0+9U);
l12=si0;
si0=l7;
si1=l1;
si1=i32_load8_u(&i->m0,(U64)si1+9U);
i32_store8(&i->m0,(U64)si0+9U,si1);
si0=l1;
si1=l12;
i32_store8(&i->m0,(U64)si0+9U,si1);
si0=l7;
si0=i32_load8_u(&i->m0,(U64)si0+10U);
l12=si0;
si0=l7;
si1=l1;
si1=i32_load8_u(&i->m0,(U64)si1+10U);
i32_store8(&i->m0,(U64)si0+10U,si1);
si0=l1;
si1=l12;
i32_store8(&i->m0,(U64)si0+10U,si1);
si0=l7;
si0=i32_load8_u(&i->m0,(U64)si0+11U);
l12=si0;
si0=l7;
si1=l1;
si1=i32_load8_u(&i->m0,(U64)si1+11U);
i32_store8(&i->m0,(U64)si0+11U,si1);
si0=l1;
si1=l12;
i32_store8(&i->m0,(U64)si0+11U,si1);
si0=l7;
si0=i32_load8_u(&i->m0,(U64)si0+12U);
l12=si0;
si0=l7;
si1=l1;
si1=i32_load8_u(&i->m0,(U64)si1+12U);
i32_store8(&i->m0,(U64)si0+12U,si1);
si0=l1;
si1=l12;
i32_store8(&i->m0,(U64)si0+12U,si1);
si0=l7;
si0=i32_load8_u(&i->m0,(U64)si0+13U);
l12=si0;
si0=l7;
si1=l1;
si1=i32_load8_u(&i->m0,(U64)si1+13U);
i32_store8(&i->m0,(U64)si0+13U,si1);
si0=l1;
si1=l12;
i32_store8(&i->m0,(U64)si0+13U,si1);
si0=l7;
si0=i32_load8_u(&i->m0,(U64)si0+14U);
l12=si0;
si0=l7;
si1=l1;
si1=i32_load8_u(&i->m0,(U64)si1+14U);
i32_store8(&i->m0,(U64)si0+14U,si1);
si0=l1;
si1=l12;
i32_store8(&i->m0,(U64)si0+14U,si1);
si0=l7;
si0=i32_load8_u(&i->m0,(U64)si0+15U);
l12=si0;
si0=l7;
si1=l1;
si1=i32_load8_u(&i->m0,(U64)si1+15U);
i32_store8(&i->m0,(U64)si0+15U,si1);
si0=l1;
si1=l12;
i32_store8(&i->m0,(U64)si0+15U,si1);
si0=l7;
si0=i32_load8_u(&i->m0,(U64)si0+16U);
l12=si0;
si0=l7;
si1=l1;
si1=i32_load8_u(&i->m0,(U64)si1+16U);
i32_store8(&i->m0,(U64)si0+16U,si1);
si0=l1;
si1=l12;
i32_store8(&i->m0,(U64)si0+16U,si1);
si0=l7;
si0=i32_load8_u(&i->m0,(U64)si0+17U);
l12=si0;
si0=l7;
si1=l1;
si1=i32_load8_u(&i->m0,(U64)si1+17U);
i32_store8(&i->m0,(U64)si0+17U,si1);
si0=l1;
si1=l12;
i32_store8(&i->m0,(U64)si0+17U,si1);
si0=l7;
si0=i32_load8_u(&i->m0,(U64)si0+18U);
l12=si0;
si0=l7;
si1=l1;
si1=i32_load8_u(&i->m0,(U64)si1+18U);
i32_store8(&i->m0,(U64)si0+18U,si1);
si0=l1;
si1=l12;
i32_store8(&i->m0,(U64)si0+18U,si1);
si0=l7;
si0=i32_load8_u(&i->m0,(U64)si0+19U);
l12=si0;
si0=l7;
si1=l1;
si1=i32_load8_u(&i->m0,(U64)si1+19U);
i32_store8(&i->m0,(U64)si0+19U,si1);
si0=l1;
si1=l12;
i32_store8(&i->m0,(U64)si0+19U,si1);
si0=l7;
si0=i32_load8_u(&i->m0,(U64)si0+20U);
l12=si0;
si0=l7;
si1=l1;
si1=i32_load8_u(&i->m0,(U64)si1+20U);
i32_store8(&i->m0,(U64)si0+20U,si1);
si0=l1;
si1=l12;
i32_store8(&i->m0,(U64)si0+20U,si1);
si0=l7;
si0=i32_load8_u(&i->m0,(U64)si0+21U);
l12=si0;
si0=l7;
si1=l1;
si1=i32_load8_u(&i->m0,(U64)si1+21U);
i32_store8(&i->m0,(U64)si0+21U,si1);
si0=l1;
si1=l12;
i32_store8(&i->m0,(U64)si0+21U,si1);
si0=l7;
si0=i32_load8_u(&i->m0,(U64)si0+22U);
l12=si0;
si0=l7;
si1=l1;
si1=i32_load8_u(&i->m0,(U64)si1+22U);
i32_store8(&i->m0,(U64)si0+22U,si1);
si0=l1;
si1=l12;
i32_store8(&i->m0,(U64)si0+22U,si1);
si0=l7;
si0=i32_load8_u(&i->m0,(U64)si0+23U);
l12=si0;
si0=l7;
si1=l1;
si1=i32_load8_u(&i->m0,(U64)si1+23U);
i32_store8(&i->m0,(U64)si0+23U,si1);
si0=l1;
si1=l12;
i32_store8(&i->m0,(U64)si0+23U,si1);
si0=l7;
si0=i32_load8_u(&i->m0,(U64)si0+24U);
l12=si0;
si0=l7;
si1=l1;
si1=i32_load8_u(&i->m0,(U64)si1+24U);
i32_store8(&i->m0,(U64)si0+24U,si1);
si0=l1;
si1=l12;
i32_store8(&i->m0,(U64)si0+24U,si1);
si0=l7;
si0=i32_load8_u(&i->m0,(U64)si0+25U);
l12=si0;
si0=l7;
si1=l1;
si1=i32_load8_u(&i->m0,(U64)si1+25U);
i32_store8(&i->m0,(U64)si0+25U,si1);
si0=l1;
si1=l12;
i32_store8(&i->m0,(U64)si0+25U,si1);
si0=l7;
si0=i32_load8_u(&i->m0,(U64)si0+26U);
l12=si0;
si0=l7;
si1=l1;
si1=i32_load8_u(&i->m0,(U64)si1+26U);
i32_store8(&i->m0,(U64)si0+26U,si1);
si0=l1;
si1=l12;
i32_store8(&i->m0,(U64)si0+26U,si1);
si0=l7;
si0=i32_load8_u(&i->m0,(U64)si0+27U);
l12=si0;
si0=l7;
si1=l1;
si1=i32_load8_u(&i->m0,(U64)si1+27U);
i32_store8(&i->m0,(U64)si0+27U,si1);
si0=l1;
si1=l12;
i32_store8(&i->m0,(U64)si0+27U,si1);
si0=l7;
si0=i32_load8_u(&i->m0,(U64)si0+28U);
l12=si0;
si0=l7;
si1=l1;
si1=i32_load8_u(&i->m0,(U64)si1+28U);
i32_store8(&i->m0,(U64)si0+28U,si1);
si0=l1;
si1=l12;
i32_store8(&i->m0,(U64)si0+28U,si1);
si0=l7;
si0=i32_load8_u(&i->m0,(U64)si0+29U);
l12=si0;
si0=l7;
si1=l1;
si1=i32_load8_u(&i->m0,(U64)si1+29U);
i32_store8(&i->m0,(U64)si0+29U,si1);
si0=l1;
si1=l12;
i32_store8(&i->m0,(U64)si0+29U,si1);
si0=l7;
si0=i32_load8_u(&i->m0,(U64)si0+30U);
l12=si0;
si0=l7;
si1=l1;
si1=i32_load8_u(&i->m0,(U64)si1+30U);
i32_store8(&i->m0,(U64)si0+30U,si1);
si0=l1;
si1=l12;
i32_store8(&i->m0,(U64)si0+30U,si1);
si0=l7;
si0=i32_load8_u(&i->m0,(U64)si0+31U);
l12=si0;
si0=l7;
si1=l1;
si1=i32_load8_u(&i->m0,(U64)si1+31U);
i32_store8(&i->m0,(U64)si0+31U,si1);
si0=l1;
si1=l12;
i32_store8(&i->m0,(U64)si0+31U,si1);
si0=l7;
si0=i32_load8_u(&i->m0,(U64)si0+32U);
l12=si0;
si0=l7;
si1=l1;
si1=i32_load8_u(&i->m0,(U64)si1+32U);
i32_store8(&i->m0,(U64)si0+32U,si1);
si0=l1;
si1=l12;
i32_store8(&i->m0,(U64)si0+32U,si1);
si0=l7;
si0=i32_load8_u(&i->m0,(U64)si0+33U);
l12=si0;
si0=l7;
si1=l1;
si1=i32_load8_u(&i->m0,(U64)si1+33U);
i32_store8(&i->m0,(U64)si0+33U,si1);
si0=l1;
si1=l12;
i32_store8(&i->m0,(U64)si0+33U,si1);
si0=l7;
si0=i32_load8_u(&i->m0,(U64)si0+34U);
l12=si0;
si0=l7;
si1=l1;
si1=i32_load8_u(&i->m0,(U64)si1+34U);
i32_store8(&i->m0,(U64)si0+34U,si1);
si0=l1;
si1=l12;
i32_store8(&i->m0,(U64)si0+34U,si1);
si0=l7;
si0=i32_load8_u(&i->m0,(U64)si0+35U);
l12=si0;
si0=l7;
si1=l1;
si1=i32_load8_u(&i->m0,(U64)si1+35U);
i32_store8(&i->m0,(U64)si0+35U,si1);
si0=l1;
si1=l12;
i32_store8(&i->m0,(U64)si0+35U,si1);
si0=l7;
si0=i32_load8_u(&i->m0,(U64)si0+36U);
l12=si0;
si0=l7;
si1=l1;
si1=i32_load8_u(&i->m0,(U64)si1+36U);
i32_store8(&i->m0,(U64)si0+36U,si1);
si0=l1;
si1=l12;
i32_store8(&i->m0,(U64)si0+36U,si1);
si0=l7;
si0=i32_load8_u(&i->m0,(U64)si0+37U);
l12=si0;
si0=l7;
si1=l1;
si1=i32_load8_u(&i->m0,(U64)si1+37U);
i32_store8(&i->m0,(U64)si0+37U,si1);
si0=l1;
si1=l12;
i32_store8(&i->m0,(U64)si0+37U,si1);
si0=l7;
si0=i32_load8_u(&i->m0,(U64)si0+38U);
l12=si0;
si0=l7;
si1=l1;
si1=i32_load8_u(&i->m0,(U64)si1+38U);
i32_store8(&i->m0,(U64)si0+38U,si1);
si0=l1;
si1=l12;
i32_store8(&i->m0,(U64)si0+38U,si1);
si0=l7;
si0=i32_load8_u(&i->m0,(U64)si0+39U);
l12=si0;
si0=l7;
si1=l1;
si1=i32_load8_u(&i->m0,(U64)si1+39U);
i32_store8(&i->m0,(U64)si0+39U,si1);
si0=l1;
si1=l12;
i32_store8(&i->m0,(U64)si0+39U,si1);
goto L29;
L33:;
}
si0=l13;
si1=255U;
i32_store8(&i->m0,(U64)si0,si1);
si0=l15;
si1=-8U;
si0+=si1;
si1=l5;
si0&=si1;
si1=l10;
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
goto L27;
L28:;
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
si1=l10;
si0+=si1;
si1=8U;
si0+=si1;
si1=l1;
i32_store8(&i->m0,(U64)si0,si1);
L27:;
si0=l15;
si1=1U;
si0+=si1;
l1=si0;
si0=l15;
si1=l5;
si0=si0 != si1;
if(si0){
goto L26;
}
}
L23:;
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
L4:;
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
L3:;
si0=l0;
si1=l13;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l0;
si1=l12;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=4U;
si0+=si1;
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

void f334(rustpythonInstance*i,U32 l0,U32 l1) {
U32 si0,si1;
si0=l0;
si1=1086688U;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l1;
i32_store(&i->m0,(U64)si0,si1);
L0:;
}

void f335(rustpythonInstance*i,U32 l0,U32 l1,U64 l2) {
U32 l3=0;
U32 si0,si1,si2;
U64 sj0,sj1;
si0=l1;
sj0=i64_load(&i->m0,(U64)si0+16U);
sj1=0ULL;
si0=sj0 != sj1;
if(si0){
goto L2;
}
si0=l1;
sj0=i64_load(&i->m0,(U64)si0+32U);
sj1=0ULL;
si0=sj0 != sj1;
if(si0){
goto L2;
}
si0=l1;
sj0=i64_load(&i->m0,(U64)si0);
si0=!(sj0);
if(si0){
goto L1;
}
si0=l1;
sj0=i64_load(&i->m0,(U64)si0+8U);
sj1=1ULL;
si0=sj0 <= sj1;
if(si0){
goto L1;
}
L2:;
si0=l1;
si1=236U;
si0+=si1;
l3=si0;
si1=l3;
si1=i32_load(&i->m0,(U64)si1);
si2=2U;
si1|=si2;
i32_store(&i->m0,(U64)si0,si1);
L1:;
si0=l0;
si1=152U;
si0+=si1;
si1=l1;
si2=200U;
si1+=si2;
l3=si1;
si2=88U;
si0=f15390(i,si0,si1,si2);
si0=l1;
si1=276U;
si0+=si1;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
si1=264U;
si0+=si1;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
si1=252U;
si0+=si1;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
si1=236U;
si0+=si1;
sj1=1028ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si1=224U;
si0+=si1;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
si1=216U;
si0+=si1;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
si1=204U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si1=1086468U;
i32_store(&i->m0,(U64)si0+200U,si1);
si0=l0;
si1=l1;
si2=152U;
si0=f15390(i,si0,si1,si2);
l0=si0;
si0=l1;
si1=0U;
i32_store(&i->m0,(U64)si0+128U,si1);
si0=l1;
sj1=1114112ULL;
i64_store(&i->m0,(U64)si0+112U,sj1);
si0=l1;
si1=0U;
i32_store(&i->m0,(U64)si0+104U,si1);
si0=l1;
si1=0U;
i32_store(&i->m0,(U64)si0+88U,si1);
si0=l1;
si1=0U;
i32_store(&i->m0,(U64)si0+80U,si1);
si0=l1;
si1=0U;
i32_store(&i->m0,(U64)si0+72U,si1);
si0=l1;
si1=0U;
i32_store(&i->m0,(U64)si0+64U,si1);
si0=l1;
si1=0U;
i32_store(&i->m0,(U64)si0+48U,si1);
si0=l1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0+32U,sj1);
si0=l1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0+16U,sj1);
si0=l1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
sj1=l2;
i64_store(&i->m0,(U64)si0+240U,sj1);
si0=l3;
f325(i,si0);
si0=l1;
si1=180U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l0=si0;
si0=!(si0);
if(si0){
goto L3;
}
si0=l1;
si1=184U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L3;
}
si0=l0;
f15271(i,si0);
L3:;
si0=l1;
f326(i,si0);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+288U);
l0=si0;
si0=!(si0);
if(si0){
goto L4;
}
si0=l1;
si1=292U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L4;
}
si0=l0;
f15271(i,si0);
L4:;
L0:;
}

void f336(rustpythonInstance*i,U32 l0,U32 l1) {
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
si0=l2;
si1=0U;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l2;
sj1=1ULL;
i64_store(&i->m0,(U64)si0+8U,sj1);
si0=32U;
l3=si0;
si0=l1;
si1=189U;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=2U;
si0&=si1;
si0=!(si0);
if(si0){
goto L5;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+112U);
l3=si0;
si1=1114112U;
si0=si0 == si1;
if(si0){
goto L3;
}
si0=l3;
si1=128U;
si0=si0 < si1;
if(si0){
goto L5;
}
si0=l2;
si1=0U;
i32_store(&i->m0,(U64)si0+40U,si1);
si0=l3;
si1=2048U;
si0=si0 < si1;
if(si0){
goto L4;
}
si0=l3;
si1=65536U;
si0=si0 >= si1;
if(si0){
goto L6;
}
si0=l2;
si1=l3;
si2=63U;
si1&=si2;
si2=128U;
si1|=si2;
i32_store8(&i->m0,(U64)si0+42U,si1);
si0=l2;
si1=l3;
si2=12U;
si1>>=(si2&31);
si2=224U;
si1|=si2;
i32_store8(&i->m0,(U64)si0+40U,si1);
si0=l2;
si1=l3;
si2=6U;
si1>>=(si2&31);
si2=63U;
si1&=si2;
si2=128U;
si1|=si2;
i32_store8(&i->m0,(U64)si0+41U,si1);
si0=3U;
l3=si0;
goto L2;
L6:;
si0=l2;
si1=l3;
si2=63U;
si1&=si2;
si2=128U;
si1|=si2;
i32_store8(&i->m0,(U64)si0+43U,si1);
si0=l2;
si1=l3;
si2=18U;
si1>>=(si2&31);
si2=240U;
si1|=si2;
i32_store8(&i->m0,(U64)si0+40U,si1);
si0=l2;
si1=l3;
si2=6U;
si1>>=(si2&31);
si2=63U;
si1&=si2;
si2=128U;
si1|=si2;
i32_store8(&i->m0,(U64)si0+42U,si1);
si0=l2;
si1=l3;
si2=12U;
si1>>=(si2&31);
si2=63U;
si1&=si2;
si2=128U;
si1|=si2;
i32_store8(&i->m0,(U64)si0+41U,si1);
si0=4U;
l3=si0;
goto L2;
L5:;
si0=l2;
si1=8U;
si0+=si1;
si1=0U;
f573(i,si0,si1);
si0=l2;
si0=i32_load(&i->m0,(U64)si0+8U);
si1=l2;
si1=i32_load(&i->m0,(U64)si1+16U);
si0+=si1;
si1=l3;
i32_store8(&i->m0,(U64)si0,si1);
si0=l2;
si1=l2;
si1=i32_load(&i->m0,(U64)si1+16U);
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0+16U,si1);
goto L1;
L4:;
si0=l2;
si1=l3;
si2=63U;
si1&=si2;
si2=128U;
si1|=si2;
i32_store8(&i->m0,(U64)si0+41U,si1);
si0=l2;
si1=l3;
si2=6U;
si1>>=(si2&31);
si2=192U;
si1|=si2;
i32_store8(&i->m0,(U64)si0+40U,si1);
si0=2U;
l3=si0;
goto L2;
L3:;
si0=1086934U;
si1=99U;
si2=1087036U;
f703(i,si0,si1,si2);
UNREACHABLE;
L2:;
si0=l2;
si1=8U;
si0+=si1;
si1=0U;
si2=l3;
f580(i,si0,si1,si2);
si0=l2;
si0=i32_load(&i->m0,(U64)si0+8U);
si1=l2;
si1=i32_load(&i->m0,(U64)si1+16U);
l4=si1;
si0+=si1;
si1=l2;
si2=40U;
si1+=si2;
si2=l3;
si0=f15390(i,si0,si1,si2);
si0=l2;
si1=l4;
si2=l3;
si1+=si2;
i32_store(&i->m0,(U64)si0+16U,si1);
L1:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+48U);
l3=si0;
si0=!(si0);
if(si0){
goto L8;
}
si0=l1;
si1=60U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
si1=1U;
si0=si0 > si1;
if(si0){
goto L10;
}
si0=l1;
si1=56U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si0=!(si0);
if(si0){
goto L11;
}
si0=l3;
si1=l5;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l4=si0;
L12:;
{
si0=l4;
l1=si0;
si0=l3;
si1=l4;
si0=si0 == si1;
if(si0){
goto L13;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
if(si0){
goto L9;
}
si0=l3;
si1=8U;
si0+=si1;
l1=si0;
L13:;
si0=l1;
l3=si0;
si0=l5;
si1=-1U;
si0+=si1;
l5=si0;
if(si0){
goto L12;
}
}
L11:;
si0=1086934U;
si1=99U;
si2=1087052U;
f703(i,si0,si1,si2);
UNREACHABLE;
L10:;
si0=l2;
si1=0U;
i32_store(&i->m0,(U64)si0+76U,si1);
si0=l2;
si1=l4;
i32_store(&i->m0,(U64)si0+72U,si1);
si0=l2;
si1=0U;
i32_store(&i->m0,(U64)si0+64U,si1);
si0=l2;
si1=l1;
si2=56U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
l1=si1;
i32_store(&i->m0,(U64)si0+68U,si1);
si0=l2;
si1=l3;
i32_store(&i->m0,(U64)si0+56U,si1);
si0=l2;
si1=l3;
si2=l1;
si3=3U;
si2<<=(si3&31);
si1+=si2;
i32_store(&i->m0,(U64)si0+60U,si1);
si0=l2;
si1=40U;
si0+=si1;
si1=l2;
si2=56U;
si1+=si2;
f303(i,si0,si1);
si0=l2;
si1=24U;
si0+=si1;
si1=l2;
si1=i32_load(&i->m0,(U64)si1+40U);
l4=si1;
si2=l2;
si2=i32_load(&i->m0,(U64)si2+48U);
l1=si2;
si3=l2;
si3=i32_load(&i->m0,(U64)si3+8U);
si4=l2;
si4=i32_load(&i->m0,(U64)si4+16U);
f467(i,si0,si1,si2,si3,si4);
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
si0=l1;
si0=!(si0);
if(si0){
goto L14;
}
si0=l4;
l3=si0;
L15:;
{
si0=l3;
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L16;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
f15271(i,si0);
L16:;
si0=l3;
si1=12U;
si0+=si1;
l3=si0;
si0=l1;
si1=-1U;
si0+=si1;
l1=si0;
if(si0){
goto L15;
}
}
L14:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+44U);
si0=!(si0);
if(si0){
goto L7;
}
si0=l4;
f15271(i,si0);
goto L7;
L9:;
si0=l0;
si1=8U;
si0+=si1;
si1=l3;
si1=i32_load(&i->m0,(U64)si1+4U);
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l1;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
goto L7;
L8:;
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l1;
sj1=i64_load(&i->m0,(U64)si1+152U);
i64_store(&i->m0,(U64)si0+4U,sj1);
L7:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+12U);
si0=!(si0);
if(si0){
goto L17;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0+8U);
f15271(i,si0);
L17:;
si0=l2;
si1=80U;
si0+=si1;
i->g0=si0;
L0:;
}

U32 f337(rustpythonInstance*i,U32 l0,U32 l1) {
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
si1=112U;
si0-=si1;
l2=si0;
i->g0=si0;
si0=l2;
si1=0U;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l2;
sj1=1ULL;
i64_store(&i->m0,(U64)si0+8U,sj1);
si0=32U;
l3=si0;
si0=l0;
si1=188U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
si1=512U;
si0&=si1;
si0=!(si0);
if(si0){
goto L5;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+112U);
l3=si0;
si1=1114112U;
si0=si0 == si1;
if(si0){
goto L3;
}
si0=l3;
si1=128U;
si0=si0 < si1;
if(si0){
goto L5;
}
si0=l2;
si1=0U;
i32_store(&i->m0,(U64)si0+88U,si1);
si0=l3;
si1=2048U;
si0=si0 < si1;
if(si0){
goto L4;
}
si0=l3;
si1=65536U;
si0=si0 >= si1;
if(si0){
goto L6;
}
si0=l2;
si1=l3;
si2=63U;
si1&=si2;
si2=128U;
si1|=si2;
i32_store8(&i->m0,(U64)si0+90U,si1);
si0=l2;
si1=l3;
si2=12U;
si1>>=(si2&31);
si2=224U;
si1|=si2;
i32_store8(&i->m0,(U64)si0+88U,si1);
si0=l2;
si1=l3;
si2=6U;
si1>>=(si2&31);
si2=63U;
si1&=si2;
si2=128U;
si1|=si2;
i32_store8(&i->m0,(U64)si0+89U,si1);
si0=3U;
l3=si0;
goto L2;
L6:;
si0=l2;
si1=l3;
si2=63U;
si1&=si2;
si2=128U;
si1|=si2;
i32_store8(&i->m0,(U64)si0+91U,si1);
si0=l2;
si1=l3;
si2=18U;
si1>>=(si2&31);
si2=240U;
si1|=si2;
i32_store8(&i->m0,(U64)si0+88U,si1);
si0=l2;
si1=l3;
si2=6U;
si1>>=(si2&31);
si2=63U;
si1&=si2;
si2=128U;
si1|=si2;
i32_store8(&i->m0,(U64)si0+90U,si1);
si0=l2;
si1=l3;
si2=12U;
si1>>=(si2&31);
si2=63U;
si1&=si2;
si2=128U;
si1|=si2;
i32_store8(&i->m0,(U64)si0+89U,si1);
si0=4U;
l3=si0;
goto L2;
L5:;
si0=l2;
si1=8U;
si0+=si1;
si1=0U;
f573(i,si0,si1);
si0=l2;
si0=i32_load(&i->m0,(U64)si0+8U);
si1=l2;
si1=i32_load(&i->m0,(U64)si1+16U);
si0+=si1;
si1=l3;
i32_store8(&i->m0,(U64)si0,si1);
si0=l2;
si1=l2;
si1=i32_load(&i->m0,(U64)si1+16U);
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0+16U,si1);
goto L1;
L4:;
si0=l2;
si1=l3;
si2=63U;
si1&=si2;
si2=128U;
si1|=si2;
i32_store8(&i->m0,(U64)si0+89U,si1);
si0=l2;
si1=l3;
si2=6U;
si1>>=(si2&31);
si2=192U;
si1|=si2;
i32_store8(&i->m0,(U64)si0+88U,si1);
si0=2U;
l3=si0;
goto L2;
L3:;
si0=1086934U;
si1=99U;
si2=1087088U;
f703(i,si0,si1,si2);
UNREACHABLE;
L2:;
si0=l2;
si1=8U;
si0+=si1;
si1=0U;
si2=l3;
f580(i,si0,si1,si2);
si0=l2;
si0=i32_load(&i->m0,(U64)si0+8U);
si1=l2;
si1=i32_load(&i->m0,(U64)si1+16U);
l5=si1;
si0+=si1;
si1=l2;
si2=88U;
si1+=si2;
si2=l3;
si0=f15390(i,si0,si1,si2);
si0=l2;
si1=l5;
si2=l3;
si1+=si2;
i32_store(&i->m0,(U64)si0+16U,si1);
L1:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+48U);
l3=si0;
si0=!(si0);
if(si0){
goto L11;
}
si0=l2;
si1=0U;
i32_store(&i->m0,(U64)si0+84U,si1);
si0=l2;
si1=0U;
i32_store(&i->m0,(U64)si0+72U,si1);
si0=l2;
si1=l0;
si2=60U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
l6=si1;
i32_store(&i->m0,(U64)si0+80U,si1);
si0=l2;
si1=l0;
si2=56U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
l0=si1;
i32_store(&i->m0,(U64)si0+76U,si1);
si0=l2;
si1=l3;
i32_store(&i->m0,(U64)si0+64U,si1);
si0=l2;
si1=l3;
si2=l0;
si3=3U;
si2<<=(si3&31);
si1+=si2;
i32_store(&i->m0,(U64)si0+68U,si1);
si0=l2;
si1=48U;
si0+=si1;
si1=l2;
si2=64U;
si1+=si2;
f303(i,si0,si1);
si0=l2;
si1=32U;
si0+=si1;
si1=l2;
si1=i32_load(&i->m0,(U64)si1+48U);
l7=si1;
si2=l2;
si2=i32_load(&i->m0,(U64)si2+56U);
l3=si2;
si3=l2;
si3=i32_load(&i->m0,(U64)si3+8U);
si4=l2;
si4=i32_load(&i->m0,(U64)si4+16U);
f467(i,si0,si1,si2,si3,si4);
si0=l2;
si1=171U;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l1;
si1=24U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si0=l2;
si1=l2;
si2=32U;
si1+=si2;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+20U);
l1=si0;
si0=l2;
sj1=1ULL;
i64_store(&i->m0,(U64)si0+100U,sj1);
si0=l2;
si1=1U;
i32_store(&i->m0,(U64)si0+92U,si1);
si0=l2;
si1=1087104U;
i32_store(&i->m0,(U64)si0+88U,si1);
si0=l2;
si1=l2;
si2=24U;
si1+=si2;
i32_store(&i->m0,(U64)si0+96U,si1);
si0=l1;
si1=l5;
si2=l2;
si3=88U;
si2+=si3;
si0=f690(i,si0,si1,si2);
l8=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+36U);
si0=!(si0);
if(si0){
goto L12;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0+32U);
f15271(i,si0);
L12:;
si0=l3;
si0=!(si0);
if(si0){
goto L13;
}
si0=l7;
l0=si0;
L14:;
{
si0=l0;
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L15;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
f15271(i,si0);
L15:;
si0=l0;
si1=12U;
si0+=si1;
l0=si0;
si0=l3;
si1=-1U;
si0+=si1;
l3=si0;
if(si0){
goto L14;
}
}
L13:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+52U);
si0=!(si0);
if(si0){
goto L16;
}
si0=l7;
f15271(i,si0);
L16:;
si0=l8;
if(si0){
goto L9;
}
si0=l4;
si1=2U;
si0&=si1;
si0=!(si0);
if(si0){
goto L8;
}
si0=l6;
si1=1U;
si0=si0 == si1;
if(si0){
goto L10;
}
goto L8;
L11:;
si0=l2;
si1=66U;
i32_store(&i->m0,(U64)si0+52U,si1);
si0=l2;
si1=l0;
si2=152U;
si1+=si2;
i32_store(&i->m0,(U64)si0+48U,si1);
si0=l1;
si1=24U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+20U);
l1=si0;
si0=l2;
sj1=1ULL;
i64_store(&i->m0,(U64)si0+100U,sj1);
si0=l2;
si1=2U;
i32_store(&i->m0,(U64)si0+92U,si1);
si0=l2;
si1=1087072U;
i32_store(&i->m0,(U64)si0+88U,si1);
si0=l2;
si1=l2;
si2=48U;
si1+=si2;
i32_store(&i->m0,(U64)si0+96U,si1);
si0=l1;
si1=l5;
si2=l2;
si3=88U;
si2+=si3;
si0=f690(i,si0,si1,si2);
if(si0){
goto L9;
}
si0=l4;
si1=2U;
si0&=si1;
si0=!(si0);
if(si0){
goto L8;
}
L10:;
si0=l2;
sj1=0ULL;
i64_store(&i->m0,(U64)si0+100U,sj1);
si0=l2;
si1=1086468U;
i32_store(&i->m0,(U64)si0+96U,si1);
si0=l2;
si1=1U;
i32_store(&i->m0,(U64)si0+92U,si1);
si0=l2;
si1=1087112U;
i32_store(&i->m0,(U64)si0+88U,si1);
si0=l1;
si1=l5;
si2=l2;
si3=88U;
si2+=si3;
si0=f690(i,si0,si1,si2);
si0=!(si0);
if(si0){
goto L8;
}
L9:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+12U);
si0=!(si0);
if(si0){
goto L17;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0+8U);
f15271(i,si0);
L17:;
si0=1U;
l0=si0;
goto L7;
L8:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+12U);
si0=!(si0);
if(si0){
goto L18;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0+8U);
f15271(i,si0);
L18:;
si0=0U;
l0=si0;
L7:;
si0=l2;
si1=112U;
si0+=si1;
i->g0=si0;
si0=l0;
L0:;
return si0;
}

void f338(rustpythonInstance*i,U32 l0,U32 l1) {
U32 si0,si1;
U64 sj1;
si0=l0;
si1=l1;
sj1=i64_load(&i->m0,(U64)si1+152U);
i64_store(&i->m0,(U64)si0,sj1);
L0:;
}

void f339(rustpythonInstance*i,U32 l0,U32 l1) {
U32 si0,si1,si2;
si0=l0;
si1=l1;
si2=212U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l1;
si2=204U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
L0:;
}

void f340(rustpythonInstance*i,U32 l0,U32 l1) {
U32 si0,si1,si2;
si0=l0;
si1=l1;
si2=236U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l1;
si2=228U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
L0:;
}

void f341(rustpythonInstance*i,U32 l0,U32 l1) {
U32 si0,si1,si2;
si0=l0;
si1=l1;
si2=184U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l1;
si2=176U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
L0:;
}

void f342(rustpythonInstance*i,U32 l0,U32 l1) {
U32 si0,si1,si2;
si0=l0;
si1=l1;
si2=200U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l1;
si2=192U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
L0:;
}

U32 f343(rustpythonInstance*i,U32 l0) {
U32 si0,si1,si2;
si0=l0;
si1=48U;
si0+=si1;
si1=0U;
si2=l0;
si2=i32_load(&i->m0,(U64)si2+48U);
si0=si2?si0:si1;
L0:;
return si0;
}

U32 f344(rustpythonInstance*i,U32 l0,U32 l1) {
U32 si0,si1,si2;
si0=l0;
si1=188U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=l1;
si1=(U32)(U32)(I8)(U8)(si1);
si2=2U;
si1<<=(si2&31);
si2=1087544U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
si0&=si1;
si1=0U;
si0=si0 != si1;
L0:;
return si0;
}

void f345(rustpythonInstance*i,U32 l0,U32 l1) {
U32 si0,si1,si2,si3;
si0=l0;
si1=188U;
si0+=si1;
l0=si0;
si1=l0;
si1=i32_load(&i->m0,(U64)si1);
si2=l1;
si2=(U32)(U32)(I8)(U8)(si2);
si3=2U;
si2<<=(si3&31);
si3=1087544U;
si2+=si3;
si2=i32_load(&i->m0,(U64)si2);
si1|=si2;
i32_store(&i->m0,(U64)si0,si1);
L0:;
}

U32 f346(rustpythonInstance*i,U32 l0) {
U32 si0;
si0=0U;
L0:;
return si0;
}

void f347(rustpythonInstance*i,U32 l0,U32 l1) {
U32 si0,si1,si2;
U64 sj1;
si0=l0;
si1=l1;
si2=24U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+8U,sj1);
si0=l0;
si1=l1;
sj1=i64_load(&i->m0,(U64)si1+16U);
i64_store(&i->m0,(U64)si0,sj1);
L0:;
}

void f348(rustpythonInstance*i,U32 l0,U32 l1) {
U32 si0,si1;
U64 sj1;
si0=l0;
si1=l1;
sj1=i64_load(&i->m0,(U64)si1+104U);
i64_store(&i->m0,(U64)si0,sj1);
L0:;
}

void f349(rustpythonInstance*i,U32 l0,U32 l1) {
U32 si0,si1;
U64 sj1;
si0=l0;
si1=l1;
sj1=i64_load(&i->m0,(U64)si1+8U);
i64_store(&i->m0,(U64)si0+8U,sj1);
si0=l0;
si1=l1;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
L0:;
}

void f350(rustpythonInstance*i,U32 l0,U32 l1) {
U32 si0,si1,si2;
si0=l0;
si1=l1;
si2=124U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l1;
si2=116U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
L0:;
}

U32 f351(rustpythonInstance*i,U32 l0) {
U32 si0,si1,si2;
si0=l0;
si1=64U;
si0+=si1;
si1=0U;
si2=l0;
si2=i32_load(&i->m0,(U64)si2+64U);
si0=si2?si0:si1;
L0:;
return si0;
}

U32 f352(rustpythonInstance*i,U32 l0) {
U32 si0,si1,si2;
si0=l0;
si1=72U;
si0+=si1;
si1=0U;
si2=l0;
si2=i32_load(&i->m0,(U64)si2+72U);
si0=si2?si0:si1;
L0:;
return si0;
}

void f353(rustpythonInstance*i,U32 l0,U32 l1) {
U32 si0,si1,si2;
U64 sj1;
si0=l0;
si1=l1;
si2=40U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+8U,sj1);
si0=l0;
si1=l1;
sj1=i64_load(&i->m0,(U64)si1+32U);
i64_store(&i->m0,(U64)si0,sj1);
L0:;
}

U32 f354(rustpythonInstance*i,U32 l0) {
U32 si0;
si0=1114112U;
L0:;
return si0;
}

void f355(rustpythonInstance*i,U32 l0,U32 l1) {
U32 si0,si1;
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
L0:;
}

U32 f356(rustpythonInstance*i,U32 l0) {
U32 si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+112U);
L0:;
return si0;
}

U32 f357(rustpythonInstance*i,U32 l0) {
U32 si0;
si0=1U;
L0:;
return si0;
}

void f358(rustpythonInstance*i,U32 l0,U32 l1) {
U32 si0,si1,si2;
U64 sj1;
si0=l0;
si1=l1;
si2=160U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
L0:;
}

void f359(rustpythonInstance*i,U32 l0,U32 l1) {
U32 si0,si1,si2;
U64 sj1;
si0=l0;
si1=l1;
si2=168U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
L0:;
}

void f360(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 si0,si1,si2,si3;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+88U);
l2=si0;
si0=!(si0);
if(si0){
goto L1;
}
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l0;
si1=l1;
si2=100U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l0;
si1=l1;
si2=96U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
l1=si1;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l0;
si1=l2;
si2=l1;
si3=24U;
si2*=si3;
si1+=si2;
i32_store(&i->m0,(U64)si0+4U,si1);
L1:;
si0=l0;
si1=l2;
i32_store(&i->m0,(U64)si0,si1);
L0:;
}

void f361(rustpythonInstance*i,U32 l0,U32 l1) {
U32 si0,si1;
U64 sj1;
si0=l0;
si1=l1;
sj1=i64_load(&i->m0,(U64)si1+80U);
i64_store(&i->m0,(U64)si0,sj1);
L0:;
}

void f362(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 si0,si1,si2,si3;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+128U);
l2=si0;
si0=!(si0);
if(si0){
goto L1;
}
si0=l0;
si1=l1;
si2=132U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l1;
si2=136U;
si1+=si2;
l1=si1;
si2=0U;
si3=l1;
si3=i32_load(&i->m0,(U64)si3);
si1=si3?si1:si2;
i32_store(&i->m0,(U64)si0+8U,si1);
L1:;
si0=l0;
si1=l2;
i32_store(&i->m0,(U64)si0,si1);
L0:;
}

void f363(rustpythonInstance*i,U32 l0,U32 l1) {
U32 si0,si1;
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
L0:;
}

U32 f364(rustpythonInstance*i,U32 l0) {
U32 si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+240U);
L0:;
return si0;
}

void f365(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 si0,si1,si2;
si0=i->g0;
si1=16U;
si0-=si1;
l2=si0;
i->g0=si0;
si0=l2;
si1=l1;
si1=i32_load(&i->m0,(U64)si1);
si2=l1;
si2=i32_load(&i->m0,(U64)si2+8U);
f756(i,si0,si1,si2);
si0=l2;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L2;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0+4U);
l1=si0;
if(si0){
goto L1;
}
L2:;
si0=1087120U;
si1=35U;
si2=1087264U;
f703(i,si0,si1,si2);
UNREACHABLE;
L1:;
si0=l0;
si1=l2;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l1;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=16U;
si0+=si1;
i->g0=si0;
L0:;
}

U32 f366(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U64 l4=0;
U32 l5=0;
U32 l6=0;
U64 l7=0;
U32 l8=0;
U32 l9=0;
U64 l10=0;
U32 si0,si1,si2,si3;
U64 sj0,sj1,sj2;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+32U);
l3=si0;
si0=!(si0);
if(si0){
goto L2;
}
si0=l3;
si1=56U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=l2;
si0=si0 != si1;
if(si0){
goto L2;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0+48U);
si1=l1;
si2=l2;
si0=f15389(i,si0,si1,si2);
si0=!(si0);
if(si0){
goto L1;
}
L2:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+12U);
if(si0){
goto L3;
}
si0=0U;
goto L0;
L3:;
si0=l0;
si1=16U;
si0+=si1;
si1=l1;
si2=l2;
sj0=f443(i,si0,si1,si2);
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
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l8=si0;
si0=0U;
l9=si0;
L4:;
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
goto L5;
}
L6:;
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
si1-=si2;
si2=40U;
si1*=si2;
si0+=si1;
l3=si0;
si0=i32_load(&i->m0,(U64)si0+4U);
si1=l2;
si0=si0 != si1;
if(si0){
goto L7;
}
si0=l1;
si1=l3;
si1=i32_load(&i->m0,(U64)si1);
si2=l2;
si0=f15389(i,si0,si1,si2);
si0=!(si0);
if(si0){
goto L1;
}
L7:;
sj0=l4;
sj1=-1ULL;
sj0+=sj1;
sj1=l4;
sj0&=sj1;
l4=sj0;
si0=!(sj0);
si0=!(si0);
if(si0){
goto L6;
}
}
L5:;
sj0=l10;
sj1=l10;
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
goto L0;
L8:;
si0=l0;
si1=l9;
si2=8U;
si1+=si2;
l9=si1;
si0+=si1;
l3=si0;
goto L4;
}
L1:;
si0=1U;
L0:;
return si0;
}

U32 f367(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U32 si0,si1,si2;
si0=i->g0;
si1=16U;
si0-=si1;
l4=si0;
i->g0=si0;
si0=l4;
si1=l0;
si2=l1;
f756(i,si0,si1,si2);
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L1;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0+4U);
l0=si0;
si0=!(si0);
if(si0){
goto L1;
}
si0=0U;
l1=si0;
si0=l4;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=l3;
si0=si0 < si1;
if(si0){
goto L2;
}
si0=l2;
si1=l0;
si2=l3;
si0=f15389(i,si0,si1,si2);
si0=!(si0);
l1=si0;
L2:;
si0=l4;
si1=16U;
si0+=si1;
i->g0=si0;
si0=l1;
goto L0;
L1:;
si0=1087120U;
si1=35U;
si2=1087384U;
f703(i,si0,si1,si2);
UNREACHABLE;
L0:;
return si0;
}

void f368(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 l8=0;
U32 si0,si1,si2;
si0=i->g0;
si1=16U;
si0-=si1;
l4=si0;
i->g0=si0;
si0=l4;
si1=l1;
si2=l2;
f756(i,si0,si1,si2);
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L8;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0+4U);
l5=si0;
si0=!(si0);
if(si0){
goto L8;
}
si0=l4;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si0=0U;
l7=si0;
si0=l3;
si1=255U;
si0&=si1;
l8=si0;
L9:;
{
si0=l6;
si1=l7;
si0=si0 != si1;
if(si0){
goto L10;
}
si0=l4;
si1=l1;
si2=l2;
f756(i,si0,si1,si2);
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L7;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0+4U);
l7=si0;
si0=!(si0);
if(si0){
goto L7;
}
si0=l4;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si1=l2;
si0=si0 < si1;
if(si0){
goto L6;
}
si0=l7;
si1=l2;
si0+=si1;
l3=si0;
si0=0U;
l7=si0;
goto L1;
L10:;
si0=l5;
si1=l7;
si0+=si1;
l3=si0;
si0=l7;
si1=1U;
si0+=si1;
l7=si0;
si0=l3;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=l8;
si0=si0 != si1;
if(si0){
goto L9;
}
}
si0=l4;
si1=l1;
si2=l2;
f756(i,si0,si1,si2);
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L5;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0+4U);
l5=si0;
si0=!(si0);
if(si0){
goto L5;
}
si0=l7;
si1=-1U;
si0+=si1;
l6=si0;
si1=l4;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
l3=si1;
si0=si0 > si1;
if(si0){
goto L4;
}
si0=l4;
si1=l1;
si2=l2;
f756(i,si0,si1,si2);
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L3;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0+4U);
l3=si0;
si0=!(si0);
if(si0){
goto L3;
}
si0=l4;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l8=si0;
si1=l7;
si0=si0 < si1;
if(si0){
goto L2;
}
si0=l3;
si1=l7;
si0+=si1;
l3=si0;
si0=l8;
si1=l7;
si0-=si1;
l7=si0;
si0=l5;
l1=si0;
si0=l6;
l2=si0;
goto L1;
L8:;
si0=1087120U;
si1=35U;
si2=1087384U;
f703(i,si0,si1,si2);
UNREACHABLE;
L7:;
si0=1087120U;
si1=35U;
si2=1087384U;
f703(i,si0,si1,si2);
UNREACHABLE;
L6:;
si0=l2;
si1=l3;
si2=1087400U;
f666(i,si0,si1,si2);
UNREACHABLE;
L5:;
si0=1087120U;
si1=35U;
si2=1087384U;
f703(i,si0,si1,si2);
UNREACHABLE;
L4:;
si0=l6;
si1=l3;
si2=1087416U;
f666(i,si0,si1,si2);
UNREACHABLE;
L3:;
si0=1087120U;
si1=35U;
si2=1087384U;
f703(i,si0,si1,si2);
UNREACHABLE;
L2:;
si0=l7;
si1=l8;
si2=1087432U;
f662(i,si0,si1,si2);
UNREACHABLE;
L1:;
si0=l0;
si1=l3;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l0;
si1=l2;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l1;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=12U;
si0+=si1;
si1=l7;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=16U;
si0+=si1;
i->g0=si0;
L0:;
}

void f369(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
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
si2=l2;
f756(i,si0,si1,si2);
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L5;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0+4U);
l5=si0;
si0=!(si0);
if(si0){
goto L5;
}
si0=l4;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si0=!(si0);
if(si0){
goto L1;
}
si0=0U;
l7=si0;
si0=l3;
si1=255U;
si0&=si1;
l3=si0;
L9:;
{
si0=l5;
si1=l7;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=l3;
si0=si0 != si1;
if(si0){
goto L8;
}
si0=l6;
si1=l7;
si2=1U;
si1+=si2;
l7=si1;
si0=si0 == si1;
if(si0){
goto L7;
}
goto L9;
}
L8:;
si0=l4;
si1=l1;
si2=l2;
f756(i,si0,si1,si2);
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L10;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0+4U);
l6=si0;
if(si0){
goto L6;
}
L10:;
si0=1087120U;
si1=35U;
si2=1087384U;
f703(i,si0,si1,si2);
UNREACHABLE;
L7:;
si0=l4;
si1=l1;
si2=l2;
f756(i,si0,si1,si2);
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L4;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0+4U);
l5=si0;
si0=!(si0);
if(si0){
goto L4;
}
si0=l4;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
si1=l2;
si0=si0 < si1;
if(si0){
goto L3;
}
si0=l5;
si1=l2;
si0+=si1;
l1=si0;
si0=l7;
si1=l2;
si0-=si1;
l2=si0;
goto L1;
L6:;
si0=l4;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si1=l7;
si0=si0 < si1;
if(si0){
goto L2;
}
si0=l6;
si1=l7;
si0+=si1;
l1=si0;
si0=l5;
si1=l7;
si0-=si1;
l2=si0;
goto L1;
L5:;
si0=1087120U;
si1=35U;
si2=1087384U;
f703(i,si0,si1,si2);
UNREACHABLE;
L4:;
si0=1087120U;
si1=35U;
si2=1087384U;
f703(i,si0,si1,si2);
UNREACHABLE;
L3:;
si0=l2;
si1=l7;
si2=1087448U;
f662(i,si0,si1,si2);
UNREACHABLE;
L2:;
si0=l7;
si1=l5;
si2=1087464U;
f662(i,si0,si1,si2);
UNREACHABLE;
L1:;
si0=l0;
si1=l2;
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

void f370(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
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
si2=l2;
f756(i,si0,si1,si2);
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L4;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0+4U);
l5=si0;
si0=!(si0);
if(si0){
goto L4;
}
si0=l4;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si1=l3;
si0=si0 < si1;
if(si0){
goto L3;
}
si0=l4;
si1=l1;
si2=l2;
f756(i,si0,si1,si2);
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L2;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0+4U);
l1=si0;
si0=!(si0);
if(si0){
goto L2;
}
si0=l4;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si1=l3;
si0=si0 < si1;
if(si0){
goto L1;
}
si0=l0;
si1=l3;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l5;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=12U;
si0+=si1;
si1=l2;
si2=l3;
si1-=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l1;
si2=l3;
si1+=si2;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l4;
si1=16U;
si0+=si1;
i->g0=si0;
goto L0;
L4:;
si0=1087120U;
si1=35U;
si2=1087384U;
f703(i,si0,si1,si2);
UNREACHABLE;
L3:;
si0=l3;
si1=l6;
si2=1087480U;
f666(i,si0,si1,si2);
UNREACHABLE;
L2:;
si0=1087120U;
si1=35U;
si2=1087384U;
f703(i,si0,si1,si2);
UNREACHABLE;
L1:;
si0=l3;
si1=l2;
si2=1087496U;
f662(i,si0,si1,si2);
UNREACHABLE;
L0:;
}

void f371(rustpythonInstance*i,U32 l0,U32 l1) {
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
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+16U);
l4=si0;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+12U);
l5=si1;
si0=si0 < si1;
if(si0){
goto L4;
}
si0=l4;
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
si1=l5;
si0+=si1;
l11=si0;
si0=l9;
si0=i32_load8_u(&i->m0,(U64)si0);
l12=si0;
si0=l4;
si1=l5;
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
si0=l4;
si1=l5;
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
si0=l13;
si1=l15;
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
si1=l4;
i32_store(&i->m0,(U64)si0+12U,si1);
goto L4;
L6:;
si0=l1;
si1=l14;
si2=l5;
si1+=si2;
si2=1U;
si1+=si2;
l5=si1;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l5;
si1=l7;
si0=si0 < si1;
if(si0){
goto L17;
}
si0=l5;
si1=l6;
si0=si0 > si1;
l14=si0;
if(si0){
goto L17;
}
si0=l10;
si0=!(si0);
if(si0){
goto L18;
}
si0=0U;
si1=l3;
si2=l5;
si3=l7;
si2-=si3;
si1+=si2;
si2=l14;
si0=si2?si0:si1;
si1=l8;
si2=l7;
si0=f15389(i,si0,si1,si2);
if(si0){
goto L17;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+28U);
l15=si0;
si0=l1;
si1=l5;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l5;
si1=l15;
si0-=si1;
l11=si0;
goto L3;
L18:;
si0=l7;
si1=4U;
si2=1088096U;
f666(i,si0,si1,si2);
UNREACHABLE;
L17:;
si0=l4;
si1=l5;
si0=si0 >= si1;
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
l11=si0;
L3:;
si0=l3;
si1=l15;
si0+=si1;
l2=si0;
si0=0U;
l14=si0;
si0=l11;
si0=!(si0);
if(si0){
goto L1;
}
si0=l2;
si1=l11;
si2=-1U;
si1+=si2;
l15=si1;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=10U;
si0=si0 == si1;
if(si0){
goto L20;
}
si0=l11;
l14=si0;
goto L1;
L20:;
si0=l15;
si0=!(si0);
if(si0){
goto L1;
}
si0=l11;
si1=-2U;
si0+=si1;
l14=si0;
si1=l15;
si2=l2;
si3=l14;
si2+=si3;
si2=i32_load8_u(&i->m0,(U64)si2);
si3=13U;
si2=si2 == si3;
si0=si2?si0:si1;
l14=si0;
L1:;
si0=l0;
si1=l14;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l2;
i32_store(&i->m0,(U64)si0,si1);
L0:;
}

U32 f372(rustpythonInstance*i,U32 l0,U32 l1) {
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

void f373(rustpythonInstance*i,U32 l0) {
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
f15271(i,si0);
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
f15271(i,si0);
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
f15271(i,si0);
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
f15271(i,si0);
L4:;
si0=l0;
si1=212U;
si0+=si1;
l1=si0;
f284(i,si0);
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
f15271(i,si0);
L5:;
si0=l0;
si1=224U;
si0+=si1;
l1=si0;
f285(i,si0);
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
f15271(i,si0);
L6:;
si0=l0;
f286(i,si0);
si0=l0;
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L7;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
f15271(i,si0);
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
f283(i,si0);
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
f15271(i,si0);
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
f15271(i,si0);
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
f15271(i,si0);
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
f15271(i,si0);
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
f15271(i,si0);
L16:;
si0=l0;
si1=260U;
si0+=si1;
l1=si0;
f287(i,si0);
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
f15271(i,si0);
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
f15271(i,si0);
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
f15271(i,si0);
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
f15271(i,si0);
L20:;
L0:;
}

void f374(rustpythonInstance*i,U32 l0) {
L0:;
}

void f375(rustpythonInstance*i,U32 l0) {
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

void f376(rustpythonInstance*i,U32 l0) {
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
f15271(i,si0);
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
f15271(i,si0);
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
f15271(i,si0);
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
f15271(i,si0);
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
f15271(i,si0);
L5:;
L0:;
}

void f377(rustpythonInstance*i,U32 l0) {
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
f15271(i,si0);
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
f15271(i,si0);
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
f15271(i,si0);
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
f15271(i,si0);
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
f15271(i,si0);
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
f15271(i,si0);
L6:;
L0:;
}

void f378(rustpythonInstance*i,U32 l0) {
U32 l1=0;
U32 si0,si1;
si0=l0;
si1=32U;
si0+=si1;
f376(i,si0);
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
f15271(i,si0);
L1:;
L0:;
}

void f379(rustpythonInstance*i,U32 l0) {
U32 l1=0;
U32 si0,si1;
si0=l0;
si1=184U;
si0+=si1;
f376(i,si0);
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
f15271(i,si0);
L1:;
si0=l0;
f377(i,si0);
L0:;
}

void f380(rustpythonInstance*i,U32 l0) {
U32 si0,si1;
si0=l0;
si1=152U;
si0+=si1;
f376(i,si0);
si0=l0;
f377(i,si0);
L0:;
}

void f381(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4,U32 l5,U32 l6) {
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
si2=1088032U;
f663(i,si0,si1,si2);
UNREACHABLE;
L3:;
si0=l19;
si1=l3;
si2=1088048U;
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
si2=1088064U;
f663(i,si0,si1,si2);
UNREACHABLE;
L0:;
}

U32 f382(rustpythonInstance*i,U32 l0,U32 l1) {
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
f573(i,si0,si1);
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
f580(i,si0,si1,si2);
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

U32 f383(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
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
f580(i,si0,si1,si2);
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

U32 f384(rustpythonInstance*i,U32 l0,U32 l1) {
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

void f385(rustpythonInstance*i,U32 l0,U32 l1) {
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
f381(i,si0,si1,si2,si3,si4,si5,si6);
goto L0;
L23:;
si0=l0;
si1=l6;
si2=l2;
si3=l3;
si4=l5;
si5=l4;
si6=1U;
f381(i,si0,si1,si2,si3,si4,si5,si6);
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
si4=1088080U;
f737(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L0:;
}

U32 f386(rustpythonInstance*i,U32 l0,U32 l1) {
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
si1=2924540U;
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
si1=2924796U;
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
si2=2927228U;
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
si2=1087732U;
f663(i,si0,si1,si2);
UNREACHABLE;
L9:;
si0=l4;
si1=3888U;
si2=1087748U;
f663(i,si0,si1,si2);
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

void f387(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4,U32 l5) {
U32 l6=0;
U64 l7=0;
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
U32 l20=0;
U32 l21=0;
U32 l22=0;
U32 l23=0;
U32 l24=0;
U32 si0,si1,si2,si3,si4,si5;
U64 sj0,sj1,sj2,sj3,sj4;
si0=i->g0;
si1=352U;
si0-=si1;
l6=si0;
i->g0=si0;
si0=l3;
sj0=i64_load(&i->m0,(U64)si0+16U);
l7=sj0;
si0=l6;
si1=296U;
si0+=si1;
si1=1093564U;
si2=4U;
f14979(i,si0,si1,si2);
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
si0=i32_load(&i->m0,(U64)si0+296U);
l10=si0;
si0=!(si0);
if(si0){
goto L2;
}
si0=l6;
si0=i32_load(&i->m0,(U64)si0+300U);
l11=si0;
si0=l6;
si1=208U;
si0+=si1;
si1=l10;
si2=l6;
si2=i32_load(&i->m0,(U64)si2+304U);
f756(i,si0,si1,si2);
si0=l6;
si0=i32_load(&i->m0,(U64)si0+208U);
si0=!(si0);
if(si0){
goto L4;
}
si0=l6;
si1=216U;
si0+=si1;
sj0=i64_load8_u(&i->m0,(U64)si0);
sj1=32ULL;
sj0<<=(sj1&63);
sj1=8589934592ULL;
si0=sj0 != sj1;
if(si0){
goto L3;
}
L4:;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=l11;
si0=!(si0);
if(si0){
goto L1;
}
si0=l10;
f15271(i,si0);
goto L1;
L3:;
si0=l11;
si0=!(si0);
if(si0){
goto L2;
}
si0=l10;
f15271(i,si0);
L2:;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
L1:;
si0=l9;
si1=2U;
si2=l9;
si0=si2?si0:si1;
l9=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+56U);
if(si0){
goto L6;
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
goto L5;
L6:;
si0=l3;
si1=60U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l10=si0;
si1=-1U;
si2=l10;
si0=si2?si0:si1;
l10=si0;
L5:;
si0=l6;
si1=l2;
i32_store(&i->m0,(U64)si0+84U,si1);
si0=l6;
si1=l1;
i32_store(&i->m0,(U64)si0+80U,si1);
si0=l6;
si1=l10;
i32_store(&i->m0,(U64)si0+88U,si1);
si0=l6;
si1=l9;
i32_store8(&i->m0,(U64)si0+96U,si1);
si0=l6;
si1=l5;
i32_store8(&i->m0,(U64)si0+101U,si1);
si0=l6;
si1=0U;
i32_store8(&i->m0,(U64)si0+100U,si1);
si0=l6;
si1=0U;
i32_store(&i->m0,(U64)si0+92U,si1);
si0=l6;
si1=l8;
si2=19U;
si1>>=(si2&31);
si2=1U;
si1&=si2;
i32_store8(&i->m0,(U64)si0+98U,si1);
si0=l6;
si1=l8;
si2=20U;
si1>>=(si2&31);
si2=1U;
si1&=si2;
i32_store8(&i->m0,(U64)si0+97U,si1);
si0=l6;
si1=l8;
si2=22U;
si1>>=(si2&31);
si2=1U;
si1&=si2;
i32_store8(&i->m0,(U64)si0+99U,si1);
si0=l3;
si1=184U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l8=si0;
si0=!(si0);
if(si0){
goto L11;
}
si0=l6;
si1=l8;
i32_store(&i->m0,(U64)si0+272U,si1);
si0=l6;
si1=l3;
si2=188U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0+276U,si1);
si0=l6;
si1=308U;
si0+=si1;
sj1=1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l6;
si1=1U;
i32_store(&i->m0,(U64)si0+300U,si1);
si0=l6;
si1=1088568U;
i32_store(&i->m0,(U64)si0+296U,si1);
si0=l6;
si1=66U;
i32_store(&i->m0,(U64)si0+108U,si1);
si0=l6;
si1=l6;
si2=104U;
si1+=si2;
i32_store(&i->m0,(U64)si0+304U,si1);
si0=l6;
si1=l6;
si2=272U;
si1+=si2;
i32_store(&i->m0,(U64)si0+104U,si1);
si0=l6;
si1=160U;
si0+=si1;
si1=l1;
si2=l6;
si3=296U;
si2+=si3;
si3=l2;
si3=i32_load(&i->m0,(U64)si3+36U);
TF(i->t0,si3,void (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
si0=l6;
si0=i32_load8_u(&i->m0,(U64)si0+160U);
si1=4U;
si0=si0 == si1;
if(si0){
goto L10;
}
si0=l6;
si1=l6;
sj1=i64_load(&i->m0,(U64)si1+160U);
i64_store(&i->m0,(U64)si0+296U,sj1);
si0=l6;
si1=208U;
si0+=si1;
si1=l6;
si2=296U;
si1+=si2;
f604(i,si0,si1);
si0=l6;
si0=i32_load8_u(&i->m0,(U64)si0+232U);
l8=si0;
si1=20U;
si0=si0 == si1;
if(si0){
goto L10;
}
si0=l0;
si1=l6;
si1=i32_load16_u(&i->m0,(U64)si1+233U);
i32_store16(&i->m0,(U64)si0+25U,si1);
si0=l6;
si1=296U;
si0+=si1;
si1=16U;
si0+=si1;
si1=l6;
si2=208U;
si1+=si2;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
l7=sj1;
i64_store(&i->m0,(U64)si0,sj1);
si0=l6;
si1=296U;
si0+=si1;
si1=8U;
si0+=si1;
si1=l6;
si2=208U;
si1+=si2;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
l12=sj1;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=27U;
si0+=si1;
si1=l6;
si2=208U;
si1+=si2;
si2=27U;
si1+=si2;
si1=i32_load8_u(&i->m0,(U64)si1);
i32_store8(&i->m0,(U64)si0,si1);
si0=l6;
si1=l6;
sj1=i64_load(&i->m0,(U64)si1+208U);
l13=sj1;
i64_store(&i->m0,(U64)si0+296U,sj1);
si0=l0;
si1=16U;
si0+=si1;
sj1=l7;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=8U;
si0+=si1;
sj1=l12;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
sj1=l13;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=l8;
i32_store8(&i->m0,(U64)si0+24U,si1);
goto L8;
L11:;
si0=l3;
si1=196U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l8=si0;
si0=!(si0);
if(si0){
goto L12;
}
si0=l6;
si1=l3;
si2=200U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
l9=si1;
i32_store(&i->m0,(U64)si0+140U,si1);
si0=l6;
si1=l8;
i32_store(&i->m0,(U64)si0+136U,si1);
si0=l6;
sj1=0ULL;
i64_store(&i->m0,(U64)si0+144U,sj1);
si0=l6;
si1=l6;
si2=136U;
si1+=si2;
i32_store(&i->m0,(U64)si0+152U,si1);
si0=15U;
si1=1U;
si0=f15273(i,si0,si1);
l8=si0;
si0=!(si0);
if(si0){
goto L13;
}
si0=l6;
si1=160U;
si0+=si1;
si1=12U;
si0+=si1;
sj1=64424509455ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l6;
si1=l8;
i32_store(&i->m0,(U64)si0+168U,si1);
si0=l6;
sj1=0ULL;
i64_store(&i->m0,(U64)si0+160U,sj1);
si0=l6;
si1=320U;
si0+=si1;
l14=si0;
si0=l6;
si1=208U;
si0+=si1;
si1=25U;
si0+=si1;
l15=si0;
si0=l6;
si1=136U;
si0+=si1;
l10=si0;
si0=l6;
si1=160U;
si0+=si1;
si1=8U;
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
L17:;
{
si0=l9;
si1=l8;
si0=si0 == si1;
if(si0){
goto L37;
}
si0=l6;
sj1=l7;
sj2=1ULL;
sj1+=sj2;
i64_store(&i->m0,(U64)si0+144U,sj1);
si0=l10;
si0=i32_load(&i->m0,(U64)si0);
si1=l8;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
l8=si0;
si1=123U;
si0=si0 == si1;
if(si0){
goto L42;
}
si0=l6;
si1=l8;
i32_store8(&i->m0,(U64)si0+296U,si1);
si0=l6;
si1=208U;
si0+=si1;
si1=l1;
si2=l6;
si3=296U;
si2+=si3;
si3=1U;
si4=l2;
si4=i32_load(&i->m0,(U64)si4+12U);
TF(i->t0,si4,void (*)(rustpythonInstance*,U32,U32,U32,U32))(i,si0,si1,si2,si3);
si0=l6;
si0=i32_load8_u(&i->m0,(U64)si0+208U);
si1=4U;
si0=si0 != si1;
if(si0){
goto L41;
}
si0=l6;
si0=i32_load(&i->m0,(U64)si0+152U);
l10=si0;
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l9=si0;
si1=l6;
sj1=i64_load(&i->m0,(U64)si1+144U);
l7=sj1;
si2=l9;
sj2=(U64)(si2);
l12=sj2;
sj3=l7;
sj4=l12;
si3=sj3 < sj4;
sj1=si3?sj1:sj2;
l12=sj1;
si1=(U32)(sj1);
l8=si1;
si0=si0 >= si1;
if(si0){
goto L17;
}
goto L7;
L42:;
si0=l6;
sj1=0ULL;
i64_store(&i->m0,(U64)si0+160U,sj1);
si0=l6;
si1=l6;
si1=i32_load(&i->m0,(U64)si1+176U);
l9=si1;
sj1=(U64)(si1);
i64_store(&i->m0,(U64)si0+208U,sj1);
si0=l6;
si1=l6;
si2=144U;
si1+=si2;
i32_store(&i->m0,(U64)si0+216U,si1);
si0=l6;
si1=l6;
si2=208U;
si1+=si2;
i32_store(&i->m0,(U64)si0+272U,si1);
si0=l6;
si1=296U;
si0+=si1;
si1=l6;
si2=272U;
si1+=si2;
f635(i,si0,si1);
si0=l6;
si0=i32_load8_u(&i->m0,(U64)si0+296U);
l11=si0;
si1=5U;
si0=si0 == si1;
if(si0){
goto L40;
}
sj0=0ULL;
l7=sj0;
si0=0U;
l8=si0;
L43:;
{
si0=l6;
si0=i32_load8_u(&i->m0,(U64)si0+297U);
l5=si0;
si0=l11;
si1=255U;
si0&=si1;
si1=4U;
si0=si0 != si1;
if(si0){
goto L46;
}
si0=l5;
si1=255U;
si0&=si1;
si1=125U;
si0=si0 == si1;
if(si0){
goto L48;
}
sj0=l7;
sj1=4294967296ULL;
si0=sj0 == sj1;
if(si0){
goto L47;
}
si0=l8;
si1=1U;
si0+=si1;
l10=si0;
si1=-1U;
si2=l10;
si0=si2?si0:si1;
l11=si0;
si1=l6;
si1=i32_load(&i->m0,(U64)si1+172U);
l19=si1;
si0=si0 <= si1;
if(si0){
goto L44;
}
si0=l19;
si1=l9;
si0-=si1;
si1=l11;
si2=l9;
si1-=si2;
l11=si1;
si0=si0 >= si1;
if(si0){
goto L44;
}
si0=l16;
si1=l9;
si2=l11;
f580(i,si0,si1,si2);
si0=l6;
si0=i32_load(&i->m0,(U64)si0+176U);
l9=si0;
goto L44;
L48:;
si0=l6;
sj1=l7;
i64_store(&i->m0,(U64)si0+160U,sj1);
si0=4U;
l9=si0;
si0=l8;
l20=si0;
goto L38;
L47:;
si0=l6;
sj1=4294967296ULL;
i64_store(&i->m0,(U64)si0+160U,sj1);
si0=1093048U;
sj0=(U64)(si0);
sj1=32ULL;
sj0<<=(sj1&63);
sj1=2ULL;
sj0|=sj1;
l7=sj0;
goto L45;
L46:;
si0=l6;
sj1=l7;
i64_store(&i->m0,(U64)si0+160U,sj1);
si0=l5;
sj0=(U64)(si0);
sj1=255ULL;
sj0&=sj1;
sj1=8ULL;
sj0<<=(sj1&63);
si1=l11;
sj1=(U64)(si1);
sj2=255ULL;
sj1&=sj2;
sj0|=sj1;
si1=l6;
sj1=i64_load16_u(&i->m0,(U64)si1+302U);
sj2=48ULL;
sj1<<=(sj2&63);
si2=l6;
sj2=i64_load32_u(&i->m0,(U64)si2+298U);
sj3=16ULL;
sj2<<=(sj3&63);
sj1|=sj2;
sj0|=sj1;
l7=sj0;
L45:;
sj0=l7;
sj1=32ULL;
sj0>>=(sj1&63);
si0=(U32)(sj0);
l20=si0;
sj0=l7;
sj1=8ULL;
sj0>>=(sj1&63);
si0=(U32)(sj0);
l21=si0;
sj0=l7;
si0=(U32)(sj0);
l9=si0;
goto L38;
L44:;
si0=l9;
si1=l8;
si0=si0 < si1;
if(si0){
goto L50;
}
si0=l6;
si0=i32_load(&i->m0,(U64)si0+168U);
l11=si0;
goto L49;
L50:;
si0=l6;
si0=i32_load(&i->m0,(U64)si0+168U);
l11=si0;
si1=l9;
si0+=si1;
si1=0U;
si2=l8;
si3=l9;
si2-=si3;
si0=f15392(i,si0,si1,si2);
si0=l6;
si1=l8;
i32_store(&i->m0,(U64)si0+176U,si1);
si0=l8;
l9=si0;
L49:;
si0=l11;
si1=l8;
si0+=si1;
si1=l5;
i32_store8(&i->m0,(U64)si0,si1);
si0=l10;
si1=l9;
si0=si0 <= si1;
if(si0){
goto L51;
}
si0=l6;
si1=l10;
i32_store(&i->m0,(U64)si0+176U,si1);
si0=l10;
l9=si0;
L51:;
sj0=l7;
sj1=1ULL;
sj0+=sj1;
l7=sj0;
si0=l6;
si1=296U;
si0+=si1;
si1=l6;
si2=272U;
si1+=si2;
f635(i,si0,si1);
si0=l10;
l8=si0;
si0=l6;
si0=i32_load8_u(&i->m0,(U64)si0+296U);
l11=si0;
si1=5U;
si0=si0 == si1;
if(si0){
goto L39;
}
goto L43;
}
L41:;
si0=l6;
sj0=i64_load(&i->m0,(U64)si0+208U);
l7=sj0;
sj1=32ULL;
sj0>>=(sj1&63);
si0=(U32)(sj0);
l20=si0;
sj0=l7;
sj1=8ULL;
sj0>>=(sj1&63);
si0=(U32)(sj0);
l21=si0;
sj0=l7;
si0=(U32)(sj0);
l9=si0;
goto L38;
L40:;
si0=l6;
sj1=0ULL;
i64_store(&i->m0,(U64)si0+160U,sj1);
si0=5U;
l9=si0;
goto L38;
L39:;
si0=l6;
sj1=l7;
i64_store(&i->m0,(U64)si0+160U,sj1);
si0=l10;
if(si0){
goto L52;
}
si0=5U;
l9=si0;
goto L38;
L52:;
si0=l6;
si1=272U;
si0+=si1;
si1=l1;
si2=1089328U;
si3=1U;
si4=l2;
si4=i32_load(&i->m0,(U64)si4+12U);
l8=si4;
TF(i->t0,si4,void (*)(rustpythonInstance*,U32,U32,U32,U32))(i,si0,si1,si2,si3);
si0=l6;
si0=i32_load8_u(&i->m0,(U64)si0+272U);
si1=4U;
si0=si0 == si1;
if(si0){
goto L53;
}
si0=l6;
sj0=i64_load(&i->m0,(U64)si0+272U);
l7=sj0;
sj1=32ULL;
sj0>>=(sj1&63);
si0=(U32)(sj0);
l20=si0;
sj0=l7;
sj1=8ULL;
sj0>>=(sj1&63);
si0=(U32)(sj0);
l21=si0;
sj0=l7;
si0=(U32)(sj0);
l9=si0;
goto L38;
L53:;
si0=l10;
si1=l9;
si0=si0 > si1;
if(si0){
goto L34;
}
si0=l6;
si1=296U;
si0+=si1;
si1=l1;
si2=l6;
si2=i32_load(&i->m0,(U64)si2+168U);
si3=l10;
si4=l8;
TF(i->t0,si4,void (*)(rustpythonInstance*,U32,U32,U32,U32))(i,si0,si1,si2,si3);
si0=4U;
l9=si0;
si0=0U;
l20=si0;
si0=l6;
si0=i32_load8_u(&i->m0,(U64)si0+296U);
si1=4U;
si0=si0 == si1;
if(si0){
goto L38;
}
si0=l6;
sj0=i64_load(&i->m0,(U64)si0+296U);
l7=sj0;
sj1=32ULL;
sj0>>=(sj1&63);
si0=(U32)(sj0);
l20=si0;
sj0=l7;
sj1=8ULL;
sj0>>=(sj1&63);
si0=(U32)(sj0);
l21=si0;
sj0=l7;
si0=(U32)(sj0);
l9=si0;
L38:;
si0=l9;
si1=255U;
si0&=si1;
l8=si0;
si1=4U;
si0=si0 == si1;
if(si0){
goto L36;
}
si0=l8;
si1=5U;
si0=si0 != si1;
if(si0){
goto L35;
}
L37:;
si0=l6;
si1=20U;
i32_store8(&i->m0,(U64)si0+128U,si1);
goto L14;
L36:;
si0=l20;
si0=!(si0);
if(si0){
goto L18;
}
si0=l20;
si1=l6;
si1=i32_load(&i->m0,(U64)si1+176U);
l8=si1;
si0=si0 > si1;
if(si0){
goto L54;
}
si0=l6;
si0=i32_load(&i->m0,(U64)si0+168U);
l8=si0;
si0=l20;
si1=-1U;
si0+=si1;
switch(si0){
case 0:
goto L33;
case 1:
goto L19;
case 2:
goto L32;
case 3:
goto L19;
case 4:
goto L58;
case 5:
goto L28;
case 6:
goto L59;
case 7:
goto L56;
case 8:
goto L19;
case 9:
goto L57;
case 10:
goto L55;
default:
goto L19;
}
L59:;
si0=l8;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=-111U;
si0+=si1;
switch(si0){
case 0:
goto L31;
case 1:
goto L19;
case 2:
goto L19;
case 3:
goto L19;
case 4:
goto L19;
case 5:
goto L19;
case 6:
goto L30;
case 7:
goto L29;
default:
goto L19;
}
L58:;
si0=l8;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=-97U;
si0+=si1;
switch(si0){
case 0:
goto L25;
case 1:
goto L19;
case 2:
goto L19;
case 3:
goto L19;
case 4:
goto L19;
case 5:
goto L27;
case 6:
goto L19;
case 7:
goto L19;
case 8:
goto L19;
case 9:
goto L19;
case 10:
goto L19;
case 11:
goto L19;
case 12:
goto L19;
case 13:
goto L19;
case 14:
goto L19;
case 15:
goto L19;
case 16:
goto L19;
case 17:
goto L19;
case 18:
goto L19;
case 19:
goto L19;
case 20:
goto L26;
default:
goto L19;
}
L57:;
si0=l8;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=-97U;
si0+=si1;
switch(si0){
case 0:
goto L24;
case 1:
goto L19;
case 2:
goto L19;
case 3:
goto L19;
case 4:
goto L19;
case 5:
goto L19;
case 6:
goto L19;
case 7:
goto L19;
case 8:
goto L19;
case 9:
goto L19;
case 10:
goto L19;
case 11:
goto L23;
default:
goto L19;
}
L56:;
si0=l8;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=97U;
si0=si0 == si1;
if(si0){
goto L22;
}
goto L19;
L55:;
si0=l8;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=-98U;
si0+=si1;
switch(si0){
case 0:
goto L21;
case 1:
goto L19;
case 2:
goto L19;
case 3:
goto L19;
case 4:
goto L19;
case 5:
goto L19;
case 6:
goto L19;
case 7:
goto L19;
case 8:
goto L19;
case 9:
goto L19;
case 10:
goto L19;
case 11:
goto L19;
case 12:
goto L19;
case 13:
goto L19;
case 14:
goto L60;
case 15:
goto L19;
case 16:
goto L19;
case 17:
goto L20;
default:
goto L19;
}
L60:;
si0=l8;
si0=i32_load8_u(&i->m0,(U64)si0+1U);
si1=111U;
si0=si0 != si1;
if(si0){
goto L19;
}
si0=l8;
si0=i32_load8_u(&i->m0,(U64)si0+2U);
si1=115U;
si0=si0 != si1;
if(si0){
goto L19;
}
si0=l8;
si0=i32_load8_u(&i->m0,(U64)si0+3U);
si1=105U;
si0=si0 != si1;
if(si0){
goto L19;
}
si0=l8;
si0=i32_load8_u(&i->m0,(U64)si0+4U);
si1=116U;
si0=si0 != si1;
if(si0){
goto L19;
}
si0=l8;
si0=i32_load8_u(&i->m0,(U64)si0+5U);
si1=105U;
si0=si0 != si1;
if(si0){
goto L19;
}
si0=l8;
si0=i32_load8_u(&i->m0,(U64)si0+6U);
si1=111U;
si0=si0 != si1;
if(si0){
goto L19;
}
si0=l8;
si0=i32_load8_u(&i->m0,(U64)si0+7U);
si1=110U;
si0=si0 != si1;
if(si0){
goto L19;
}
si0=l8;
si0=i32_load8_u(&i->m0,(U64)si0+8U);
si1=97U;
si0=si0 != si1;
if(si0){
goto L19;
}
si0=l8;
si0=i32_load8_u(&i->m0,(U64)si0+9U);
si1=108U;
si0=si0 != si1;
if(si0){
goto L19;
}
si0=l8;
si0=i32_load8_u(&i->m0,(U64)si0+10U);
si1=115U;
si0=si0 != si1;
if(si0){
goto L19;
}
si0=l6;
si1=2U;
i32_store(&i->m0,(U64)si0+92U,si1);
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
l8=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+8U);
l9=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+12U);
l10=si0;
si0=l6;
sj1=4ULL;
i64_store(&i->m0,(U64)si0+272U,sj1);
si0=l6;
sj1=0ULL;
i64_store(&i->m0,(U64)si0+280U,sj1);
si0=l6;
si1=l6;
si1=i32_load8_u(&i->m0,(U64)si1+101U);
i32_store8(&i->m0,(U64)si0+295U,si1);
si0=l6;
si1=0U;
i32_store(&i->m0,(U64)si0+316U,si1);
si0=l6;
si1=l10;
i32_store(&i->m0,(U64)si0+312U,si1);
si0=l6;
si1=l9;
i32_store(&i->m0,(U64)si0+308U,si1);
si0=l6;
si1=0U;
i32_store(&i->m0,(U64)si0+304U,si1);
si0=l6;
si1=l8;
si2=l9;
si3=248U;
si2*=si3;
si1+=si2;
i32_store(&i->m0,(U64)si0+300U,si1);
si0=l6;
si1=l8;
i32_store(&i->m0,(U64)si0+296U,si1);
si0=l6;
si1=l6;
si2=295U;
si1+=si2;
i32_store(&i->m0,(U64)si0+320U,si1);
si0=l6;
si1=72U;
si0+=si1;
si1=l6;
si2=296U;
si1+=si2;
si2=l14;
f439(i,si0,si1,si2);
si0=l6;
si0=i32_load(&i->m0,(U64)si0+72U);
l8=si0;
si0=!(si0);
if(si0){
goto L61;
}
si0=l6;
si0=i32_load(&i->m0,(U64)si0+76U);
l9=si0;
si0=2U;
l2=si0;
L62:;
{
si0=l8;
si1=l9;
si1=i32_load(&i->m0,(U64)si1+116U);
si0=TF(i->t0,si1,U32 (*)(rustpythonInstance*,U32))(i,si0);
si0=!(si0);
if(si0){
goto L63;
}
si0=l6;
si1=0U;
i32_store(&i->m0,(U64)si0+336U,si1);
si0=l6;
sj1=1ULL;
i64_store(&i->m0,(U64)si0+328U,sj1);
si0=l6;
si1=3U;
i32_store8(&i->m0,(U64)si0+240U,si1);
si0=l6;
si1=32U;
i32_store(&i->m0,(U64)si0+224U,si1);
si0=l6;
si1=0U;
i32_store(&i->m0,(U64)si0+236U,si1);
si0=l6;
si1=1087764U;
i32_store(&i->m0,(U64)si0+232U,si1);
si0=l6;
si1=0U;
i32_store(&i->m0,(U64)si0+216U,si1);
si0=l6;
si1=0U;
i32_store(&i->m0,(U64)si0+208U,si1);
si0=l6;
si1=l6;
si2=328U;
si1+=si2;
i32_store(&i->m0,(U64)si0+228U,si1);
si0=l8;
si1=l6;
si2=208U;
si1+=si2;
si2=l9;
si2=i32_load(&i->m0,(U64)si2+12U);
si0=TF(i->t0,si2,U32 (*)(rustpythonInstance*,U32,U32))(i,si0,si1);
if(si0){
goto L64;
}
si0=l6;
si0=i32_load(&i->m0,(U64)si0+332U);
l10=si0;
si0=l6;
si1=l2;
si2=l6;
si2=i32_load(&i->m0,(U64)si2+328U);
l5=si2;
si3=l6;
si3=i32_load(&i->m0,(U64)si3+336U);
si2=f386(i,si2,si3);
l1=si2;
si3=l2;
si4=l1;
si3=si3 > si4;
si1=si3?si1:si2;
l2=si1;
i32_store(&i->m0,(U64)si0+92U,si1);
si0=l10;
si0=!(si0);
if(si0){
goto L63;
}
si0=l5;
f15271(i,si0);
goto L63;
L64:;
si0=1087788U;
si1=55U;
si2=l6;
si3=344U;
si2+=si3;
si3=1087844U;
si4=1087936U;
f712(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L63:;
si0=l8;
si1=l9;
si1=i32_load(&i->m0,(U64)si1+124U);
si0=TF(i->t0,si1,U32 (*)(rustpythonInstance*,U32))(i,si0);
l10=si0;
si0=l6;
si0=i32_load(&i->m0,(U64)si0+280U);
si1=l10;
si0=si0 <= si1;
if(si0){
goto L66;
}
si0=1U;
l1=si0;
si0=l6;
si0=i32_load(&i->m0,(U64)si0+272U);
si1=l10;
si2=4U;
si1<<=(si2&31);
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L65;
}
L66:;
si0=0U;
l1=si0;
L65:;
si0=l6;
si1=l10;
i32_store(&i->m0,(U64)si0+336U,si1);
si0=l6;
si1=l1;
i32_store(&i->m0,(U64)si0+328U,si1);
si0=l6;
si1=l6;
si2=272U;
si1+=si2;
i32_store(&i->m0,(U64)si0+332U,si1);
si0=l6;
si1=0U;
i32_store(&i->m0,(U64)si0+216U,si1);
si0=l6;
si1=0U;
i32_store(&i->m0,(U64)si0+208U,si1);
si0=l6;
si1=328U;
si0+=si1;
si1=l6;
si2=208U;
si1+=si2;
si0=f331(i,si0,si1);
l10=si0;
si0=l6;
si1=64U;
si0+=si1;
si1=l8;
si2=l9;
si2=i32_load(&i->m0,(U64)si2+16U);
TF(i->t0,si2,void (*)(rustpythonInstance*,U32,U32))(i,si0,si1);
si0=l6;
si1=56U;
si0+=si1;
si1=l10;
si2=l6;
si2=i32_load(&i->m0,(U64)si2+64U);
si3=l6;
si3=i32_load(&i->m0,(U64)si3+68U);
si4=l8;
si5=l9;
f465(i,si0,si1,si2,si3,si4,si5);
si0=l6;
si1=48U;
si0+=si1;
si1=l6;
si2=296U;
si1+=si2;
si2=l14;
f439(i,si0,si1,si2);
si0=l6;
si0=i32_load(&i->m0,(U64)si0+52U);
l9=si0;
si0=l6;
si0=i32_load(&i->m0,(U64)si0+48U);
l8=si0;
if(si0){
goto L62;
}
}
L61:;
si0=l6;
si0=i32_load(&i->m0,(U64)si0+280U);
l2=si0;
si0=!(si0);
if(si0){
goto L67;
}
si0=l6;
si0=i32_load(&i->m0,(U64)si0+272U);
l9=si0;
si1=l2;
si2=4U;
si1<<=(si2&31);
si0+=si1;
l10=si0;
si0=0U;
l1=si0;
si0=1U;
l11=si0;
L68:;
{
si0=l9;
l8=si0;
L70:;
{
si0=l10;
l9=si0;
si0=l8;
si1=l10;
si0=si0 == si1;
if(si0){
goto L71;
}
si0=l8;
si1=16U;
si0+=si1;
l9=si0;
si0=l8;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L69;
}
L71:;
si0=l9;
l8=si0;
si0=l2;
si1=l1;
si2=1U;
si1+=si2;
l1=si1;
si0=si0 != si1;
if(si0){
goto L70;
}
goto L67;
}
L69:;
si0=l8;
si0=i32_load(&i->m0,(U64)si0+4U);
l5=si0;
if(si0){
goto L73;
}
si0=0U;
l8=si0;
si0=0U;
l19=si0;
goto L72;
L73:;
si0=l8;
si1=12U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l19=si0;
si0=l8;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l22=si0;
si0=1U;
l8=si0;
si0=l5;
l23=si0;
si0=l5;
l24=si0;
L72:;
si0=l6;
si1=l19;
i32_store(&i->m0,(U64)si0+240U,si1);
si0=l6;
si1=l22;
i32_store(&i->m0,(U64)si0+236U,si1);
si0=l6;
si1=l24;
i32_store(&i->m0,(U64)si0+232U,si1);
si0=l6;
si1=0U;
i32_store(&i->m0,(U64)si0+228U,si1);
si0=l6;
si1=l8;
i32_store(&i->m0,(U64)si0+224U,si1);
si0=l6;
si1=l22;
i32_store(&i->m0,(U64)si0+220U,si1);
si0=l6;
si1=l23;
i32_store(&i->m0,(U64)si0+216U,si1);
si0=l6;
si1=0U;
i32_store(&i->m0,(U64)si0+212U,si1);
si0=l6;
si1=l8;
i32_store(&i->m0,(U64)si0+208U,si1);
si0=l6;
si1=208U;
si0+=si1;
si0=f452(i,si0);
l8=si0;
si0=!(si0);
if(si0){
goto L74;
}
si0=l11;
si1=1U;
si0&=si1;
if(si0){
goto L77;
}
si0=l6;
si1=296U;
si0+=si1;
si1=l6;
si1=i32_load(&i->m0,(U64)si1+80U);
si2=1088576U;
si3=1U;
si4=l6;
si4=i32_load(&i->m0,(U64)si4+84U);
si4=i32_load(&i->m0,(U64)si4+28U);
TF(i->t0,si4,void (*)(rustpythonInstance*,U32,U32,U32,U32))(i,si0,si1,si2,si3);
si0=l6;
si0=i32_load8_u(&i->m0,(U64)si0+296U);
l5=si0;
si1=4U;
si0=si0 != si1;
if(si0){
goto L76;
}
L77:;
si0=l6;
si1=40U;
si0+=si1;
si1=l8;
si1=i32_load(&i->m0,(U64)si1);
si2=l8;
si2=i32_load(&i->m0,(U64)si2+4U);
si2=i32_load(&i->m0,(U64)si2+132U);
TF(i->t0,si2,void (*)(rustpythonInstance*,U32,U32))(i,si0,si1);
si0=l6;
si1=296U;
si0+=si1;
si1=l6;
si2=80U;
si1+=si2;
si2=l6;
si2=i32_load(&i->m0,(U64)si2+40U);
si3=l6;
si3=i32_load(&i->m0,(U64)si3+44U);
f388(i,si0,si1,si2,si3);
si0=l6;
si0=i32_load8_u(&i->m0,(U64)si0+296U);
l5=si0;
si1=4U;
si0=si0 != si1;
if(si0){
goto L78;
}
si0=0U;
l11=si0;
si0=l6;
si1=208U;
si0+=si1;
si0=f452(i,si0);
l8=si0;
si0=!(si0);
if(si0){
goto L74;
}
L79:;
{
si0=l6;
si1=296U;
si0+=si1;
si1=l6;
si1=i32_load(&i->m0,(U64)si1+80U);
si2=1088576U;
si3=1U;
si4=l6;
si4=i32_load(&i->m0,(U64)si4+84U);
si4=i32_load(&i->m0,(U64)si4+28U);
TF(i->t0,si4,void (*)(rustpythonInstance*,U32,U32,U32,U32))(i,si0,si1,si2,si3);
si0=l6;
si0=i32_load8_u(&i->m0,(U64)si0+296U);
l5=si0;
si1=4U;
si0=si0 != si1;
if(si0){
goto L76;
}
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
si1=296U;
si0+=si1;
si1=l6;
si2=80U;
si1+=si2;
si2=l6;
si2=i32_load(&i->m0,(U64)si2+32U);
si3=l6;
si3=i32_load(&i->m0,(U64)si3+36U);
f388(i,si0,si1,si2,si3);
si0=l6;
si0=i32_load8_u(&i->m0,(U64)si0+296U);
l5=si0;
si1=4U;
si0=si0 != si1;
if(si0){
goto L78;
}
si0=l6;
si1=208U;
si0+=si1;
si0=f452(i,si0);
l8=si0;
si0=!(si0);
if(si0){
goto L74;
}
goto L79;
}
L78:;
si0=l6;
si1=l6;
si1=i32_load(&i->m0,(U64)si1+300U);
i32_store(&i->m0,(U64)si0+203U,si1);
si0=l6;
si1=l6;
si1=i32_load(&i->m0,(U64)si1+297U);
i32_store(&i->m0,(U64)si0+200U,si1);
goto L75;
L76:;
si0=l6;
si1=l6;
si1=i32_load(&i->m0,(U64)si1+300U);
i32_store(&i->m0,(U64)si0+203U,si1);
si0=l6;
si1=l6;
si1=i32_load(&i->m0,(U64)si1+297U);
i32_store(&i->m0,(U64)si0+200U,si1);
L75:;
si0=l6;
si1=272U;
si0+=si1;
f300(i,si0);
si0=l6;
si0=i32_load(&i->m0,(U64)si0+276U);
si0=!(si0);
if(si0){
goto L80;
}
si0=l6;
si0=i32_load(&i->m0,(U64)si0+272U);
f15271(i,si0);
L80:;
si0=l6;
si1=l6;
si1=i32_load(&i->m0,(U64)si1+203U);
i32_store(&i->m0,(U64)si0+212U,si1);
si0=l6;
si1=l6;
si1=i32_load(&i->m0,(U64)si1+200U);
i32_store(&i->m0,(U64)si0+209U,si1);
si0=l6;
si1=l5;
i32_store8(&i->m0,(U64)si0+208U,si1);
si0=l6;
si1=104U;
si0+=si1;
si1=l6;
si2=208U;
si1+=si2;
f604(i,si0,si1);
goto L14;
L74:;
si0=l1;
si1=1U;
si0+=si1;
l1=si0;
si1=l2;
si0=si0 < si1;
if(si0){
goto L68;
}
}
L67:;
si0=l6;
si1=272U;
si0+=si1;
f300(i,si0);
si0=l6;
si0=i32_load(&i->m0,(U64)si0+276U);
si0=!(si0);
if(si0){
goto L18;
}
si0=l6;
si0=i32_load(&i->m0,(U64)si0+272U);
f15271(i,si0);
goto L18;
L54:;
si0=l20;
si1=l8;
si2=1089348U;
f666(i,si0,si1,si2);
UNREACHABLE;
L35:;
si0=l6;
si1=l21;
sj1=(U64)(si1);
sj2=16777215ULL;
sj1&=sj2;
sj2=8ULL;
sj1<<=(sj2&63);
si2=l20;
sj2=(U64)(si2);
sj3=32ULL;
sj2<<=(sj3&63);
sj1|=sj2;
si2=l9;
sj2=(U64)(si2);
sj3=255ULL;
sj2&=sj3;
sj1|=sj2;
i64_store(&i->m0,(U64)si0+208U,sj1);
si0=l6;
si1=104U;
si0+=si1;
si1=l6;
si2=208U;
si1+=si2;
f604(i,si0,si1);
goto L14;
L34:;
si0=l10;
si1=l9;
si2=1089332U;
f666(i,si0,si1,si2);
UNREACHABLE;
L33:;
si0=l8;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=63U;
si0=si0 != si1;
if(si0){
goto L19;
}
si0=l6;
si1=296U;
si0+=si1;
si1=l6;
si1=i32_load(&i->m0,(U64)si1+80U);
si2=1089443U;
si3=25U;
si4=l6;
si4=i32_load(&i->m0,(U64)si4+84U);
si4=i32_load(&i->m0,(U64)si4+28U);
TF(i->t0,si4,void (*)(rustpythonInstance*,U32,U32,U32,U32))(i,si0,si1,si2,si3);
si0=l6;
si0=i32_load8_u(&i->m0,(U64)si0+296U);
l8=si0;
si1=4U;
si0=si0 == si1;
if(si0){
goto L18;
}
si0=l6;
si1=l6;
si1=i32_load(&i->m0,(U64)si1+300U);
i32_store(&i->m0,(U64)si0+212U,si1);
si0=l6;
si1=l6;
si1=i32_load(&i->m0,(U64)si1+297U);
i32_store(&i->m0,(U64)si0+209U,si1);
si0=l6;
si1=l8;
i32_store8(&i->m0,(U64)si0+208U,si1);
si0=l6;
si1=104U;
si0+=si1;
si1=l6;
si2=208U;
si1+=si2;
f604(i,si0,si1);
goto L14;
L32:;
si0=l8;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=98U;
si0=si0 != si1;
if(si0){
goto L19;
}
si0=l8;
si0=i32_load8_u(&i->m0,(U64)si0+1U);
si1=105U;
si0=si0 != si1;
if(si0){
goto L19;
}
si0=l8;
si0=i32_load8_u(&i->m0,(U64)si0+2U);
si1=110U;
si0=si0 != si1;
if(si0){
goto L19;
}
si0=l6;
si1=296U;
si0+=si1;
si1=l6;
si2=80U;
si1+=si2;
si2=l3;
f389(i,si0,si1,si2);
si0=l6;
si0=i32_load8_u(&i->m0,(U64)si0+296U);
l8=si0;
si1=4U;
si0=si0 == si1;
if(si0){
goto L18;
}
si0=l6;
si1=l6;
si1=i32_load(&i->m0,(U64)si1+300U);
i32_store(&i->m0,(U64)si0+212U,si1);
si0=l6;
si1=l6;
si1=i32_load(&i->m0,(U64)si1+297U);
i32_store(&i->m0,(U64)si0+209U,si1);
si0=l6;
si1=l8;
i32_store8(&i->m0,(U64)si0+208U,si1);
si0=l6;
si1=104U;
si0+=si1;
si1=l6;
si2=208U;
si1+=si2;
f604(i,si0,si1);
goto L14;
L31:;
si0=l8;
si0=i32_load8_u(&i->m0,(U64)si0+1U);
si1=112U;
si0=si0 != si1;
if(si0){
goto L19;
}
si0=l8;
si0=i32_load8_u(&i->m0,(U64)si0+2U);
si1=116U;
si0=si0 != si1;
if(si0){
goto L19;
}
si0=l8;
si0=i32_load8_u(&i->m0,(U64)si0+3U);
si1=105U;
si0=si0 != si1;
if(si0){
goto L19;
}
si0=l8;
si0=i32_load8_u(&i->m0,(U64)si0+4U);
si1=111U;
si0=si0 != si1;
if(si0){
goto L19;
}
si0=l8;
si0=i32_load8_u(&i->m0,(U64)si0+5U);
si1=110U;
si0=si0 != si1;
if(si0){
goto L19;
}
si0=l8;
si0=i32_load8_u(&i->m0,(U64)si0+6U);
si1=115U;
si0=si0 != si1;
if(si0){
goto L19;
}
si0=l6;
si1=296U;
si0+=si1;
si1=l6;
si2=80U;
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
f390(i,si0,si1,si2,si3);
si0=l6;
si0=i32_load8_u(&i->m0,(U64)si0+296U);
l8=si0;
si1=4U;
si0=si0 == si1;
if(si0){
goto L18;
}
si0=l6;
si1=l6;
si1=i32_load(&i->m0,(U64)si1+300U);
i32_store(&i->m0,(U64)si0+212U,si1);
si0=l6;
si1=l6;
si1=i32_load(&i->m0,(U64)si1+297U);
i32_store(&i->m0,(U64)si0+209U,si1);
si0=l6;
si1=l8;
i32_store8(&i->m0,(U64)si0+208U,si1);
si0=l6;
si1=104U;
si0+=si1;
si1=l6;
si2=208U;
si1+=si2;
f604(i,si0,si1);
goto L14;
L30:;
si0=l8;
si0=i32_load8_u(&i->m0,(U64)si0+1U);
si1=110U;
si0=si0 != si1;
if(si0){
goto L19;
}
si0=l8;
si0=i32_load8_u(&i->m0,(U64)si0+2U);
si1=105U;
si0=si0 != si1;
if(si0){
goto L19;
}
si0=l8;
si0=i32_load8_u(&i->m0,(U64)si0+3U);
si1=102U;
si0=si0 != si1;
if(si0){
goto L19;
}
si0=l8;
si0=i32_load8_u(&i->m0,(U64)si0+4U);
si1=105U;
si0=si0 != si1;
if(si0){
goto L19;
}
si0=l8;
si0=i32_load8_u(&i->m0,(U64)si0+5U);
si1=101U;
si0=si0 != si1;
if(si0){
goto L19;
}
si0=l8;
si0=i32_load8_u(&i->m0,(U64)si0+6U);
si1=100U;
si0=si0 != si1;
if(si0){
goto L19;
}
si0=l6;
si1=l3;
si1=i32_load(&i->m0,(U64)si1+224U);
l8=si1;
i32_store(&i->m0,(U64)si0+192U,si1);
si0=l6;
si1=l3;
si1=i32_load(&i->m0,(U64)si1+212U);
l9=si1;
i32_store(&i->m0,(U64)si0+184U,si1);
si0=l6;
si1=l8;
si2=l3;
si2=i32_load(&i->m0,(U64)si2+232U);
si3=272U;
si2*=si3;
si1+=si2;
i32_store(&i->m0,(U64)si0+196U,si1);
si0=l6;
si1=l9;
si2=l3;
si2=i32_load(&i->m0,(U64)si2+220U);
si3=120U;
si2*=si3;
si1+=si2;
i32_store(&i->m0,(U64)si0+188U,si1);
si0=l6;
si1=296U;
si0+=si1;
si1=l6;
si2=80U;
si1+=si2;
si2=l6;
si3=184U;
si2+=si3;
f391(i,si0,si1,si2);
si0=l6;
si0=i32_load8_u(&i->m0,(U64)si0+296U);
l8=si0;
si1=4U;
si0=si0 == si1;
if(si0){
goto L18;
}
si0=l6;
si1=l6;
si1=i32_load(&i->m0,(U64)si1+300U);
i32_store(&i->m0,(U64)si0+212U,si1);
si0=l6;
si1=l6;
si1=i32_load(&i->m0,(U64)si1+297U);
i32_store(&i->m0,(U64)si0+209U,si1);
si0=l6;
si1=l8;
i32_store8(&i->m0,(U64)si0+208U,si1);
si0=l6;
si1=104U;
si0+=si1;
si1=l6;
si2=208U;
si1+=si2;
f604(i,si0,si1);
goto L14;
L29:;
si0=l8;
si0=i32_load8_u(&i->m0,(U64)si0+1U);
si1=101U;
si0=si0 != si1;
if(si0){
goto L19;
}
si0=l8;
si0=i32_load8_u(&i->m0,(U64)si0+2U);
si1=114U;
si0=si0 != si1;
if(si0){
goto L19;
}
si0=l8;
si0=i32_load8_u(&i->m0,(U64)si0+3U);
si1=115U;
si0=si0 != si1;
if(si0){
goto L19;
}
si0=l8;
si0=i32_load8_u(&i->m0,(U64)si0+4U);
si1=105U;
si0=si0 != si1;
if(si0){
goto L19;
}
si0=l8;
si0=i32_load8_u(&i->m0,(U64)si0+5U);
si1=111U;
si0=si0 != si1;
if(si0){
goto L19;
}
si0=l8;
si0=i32_load8_u(&i->m0,(U64)si0+6U);
si1=110U;
si0=si0 != si1;
if(si0){
goto L19;
}
si0=l6;
si0=i32_load(&i->m0,(U64)si0+80U);
l9=si0;
si0=l6;
si0=i32_load(&i->m0,(U64)si0+84U);
l10=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+104U);
l8=si0;
if(si0){
goto L82;
}
si0=15U;
l1=si0;
si0=1089428U;
l8=si0;
goto L81;
L82:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+108U);
l1=si0;
L81:;
si0=l6;
si1=l1;
i32_store(&i->m0,(U64)si0+300U,si1);
si0=l6;
si1=l8;
i32_store(&i->m0,(U64)si0+296U,si1);
si0=l6;
si1=66U;
i32_store(&i->m0,(U64)si0+276U,si1);
si0=l6;
si1=1U;
i32_store(&i->m0,(U64)si0+212U,si1);
si0=l6;
si1=1088568U;
i32_store(&i->m0,(U64)si0+208U,si1);
si0=l6;
sj1=1ULL;
i64_store(&i->m0,(U64)si0+220U,sj1);
si0=l6;
si1=l6;
si2=296U;
si1+=si2;
i32_store(&i->m0,(U64)si0+272U,si1);
si0=l6;
si1=l6;
si2=272U;
si1+=si2;
i32_store(&i->m0,(U64)si0+216U,si1);
si0=l6;
si1=328U;
si0+=si1;
si1=l9;
si2=l6;
si3=208U;
si2+=si3;
si3=l10;
si3=i32_load(&i->m0,(U64)si3+36U);
TF(i->t0,si3,void (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
si0=l6;
si0=i32_load8_u(&i->m0,(U64)si0+328U);
l8=si0;
si1=4U;
si0=si0 == si1;
if(si0){
goto L18;
}
si0=l6;
si1=l6;
si1=i32_load(&i->m0,(U64)si1+332U);
i32_store(&i->m0,(U64)si0+212U,si1);
si0=l6;
si1=l6;
si1=i32_load(&i->m0,(U64)si1+329U);
i32_store(&i->m0,(U64)si0+209U,si1);
si0=l6;
si1=l8;
i32_store8(&i->m0,(U64)si0+208U,si1);
si0=l6;
si1=104U;
si0+=si1;
si1=l6;
si2=208U;
si1+=si2;
f604(i,si0,si1);
goto L14;
L28:;
si0=l8;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=97U;
si0=si0 != si1;
if(si0){
goto L19;
}
si0=l8;
si0=i32_load8_u(&i->m0,(U64)si0+1U);
si1=117U;
si0=si0 != si1;
if(si0){
goto L19;
}
si0=l8;
si0=i32_load8_u(&i->m0,(U64)si0+2U);
si1=116U;
si0=si0 != si1;
if(si0){
goto L19;
}
si0=l8;
si0=i32_load8_u(&i->m0,(U64)si0+3U);
si1=104U;
si0=si0 != si1;
if(si0){
goto L19;
}
si0=l8;
si0=i32_load8_u(&i->m0,(U64)si0+4U);
si1=111U;
si0=si0 != si1;
if(si0){
goto L19;
}
si0=l8;
si0=i32_load8_u(&i->m0,(U64)si0+5U);
si1=114U;
si0=si0 != si1;
if(si0){
goto L19;
}
si0=l6;
si0=i32_load(&i->m0,(U64)si0+80U);
l9=si0;
si0=l6;
si0=i32_load(&i->m0,(U64)si0+84U);
l10=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+96U);
l8=si0;
if(si0){
goto L84;
}
si0=14U;
l1=si0;
si0=1089414U;
l8=si0;
goto L83;
L84:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+100U);
l1=si0;
L83:;
si0=l6;
si1=l1;
i32_store(&i->m0,(U64)si0+300U,si1);
si0=l6;
si1=l8;
i32_store(&i->m0,(U64)si0+296U,si1);
si0=l6;
si1=66U;
i32_store(&i->m0,(U64)si0+276U,si1);
si0=l6;
si1=1U;
i32_store(&i->m0,(U64)si0+212U,si1);
si0=l6;
si1=1088568U;
i32_store(&i->m0,(U64)si0+208U,si1);
si0=l6;
sj1=1ULL;
i64_store(&i->m0,(U64)si0+220U,sj1);
si0=l6;
si1=l6;
si2=296U;
si1+=si2;
i32_store(&i->m0,(U64)si0+272U,si1);
si0=l6;
si1=l6;
si2=272U;
si1+=si2;
i32_store(&i->m0,(U64)si0+216U,si1);
si0=l6;
si1=328U;
si0+=si1;
si1=l9;
si2=l6;
si3=208U;
si2+=si3;
si3=l10;
si3=i32_load(&i->m0,(U64)si3+36U);
TF(i->t0,si3,void (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
si0=l6;
si0=i32_load8_u(&i->m0,(U64)si0+328U);
l8=si0;
si1=4U;
si0=si0 == si1;
if(si0){
goto L18;
}
si0=l6;
si1=l6;
si1=i32_load(&i->m0,(U64)si1+332U);
i32_store(&i->m0,(U64)si0+212U,si1);
si0=l6;
si1=l6;
si1=i32_load(&i->m0,(U64)si1+329U);
i32_store(&i->m0,(U64)si0+209U,si1);
si0=l6;
si1=l8;
i32_store8(&i->m0,(U64)si0+208U,si1);
si0=l6;
si1=104U;
si0+=si1;
si1=l6;
si2=208U;
si1+=si2;
f604(i,si0,si1);
goto L14;
L27:;
si0=l8;
si0=i32_load8_u(&i->m0,(U64)si0+1U);
si1=108U;
si0=si0 != si1;
if(si0){
goto L19;
}
si0=l8;
si0=i32_load8_u(&i->m0,(U64)si0+2U);
si1=97U;
si0=si0 != si1;
if(si0){
goto L19;
}
si0=l8;
si0=i32_load8_u(&i->m0,(U64)si0+3U);
si1=103U;
si0=si0 != si1;
if(si0){
goto L19;
}
si0=l8;
si0=i32_load8_u(&i->m0,(U64)si0+4U);
si1=115U;
si0=si0 != si1;
if(si0){
goto L19;
}
si0=l6;
si1=296U;
si0+=si1;
si1=l6;
si2=80U;
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
f392(i,si0,si1,si2,si3);
si0=l6;
si0=i32_load8_u(&i->m0,(U64)si0+296U);
l8=si0;
si1=4U;
si0=si0 == si1;
if(si0){
goto L18;
}
si0=l6;
si1=l6;
si1=i32_load(&i->m0,(U64)si1+300U);
i32_store(&i->m0,(U64)si0+212U,si1);
si0=l6;
si1=l6;
si1=i32_load(&i->m0,(U64)si1+297U);
i32_store(&i->m0,(U64)si0+209U,si1);
si0=l6;
si1=l8;
i32_store8(&i->m0,(U64)si0+208U,si1);
si0=l6;
si1=104U;
si0+=si1;
si1=l6;
si2=208U;
si1+=si2;
f604(i,si0,si1);
goto L14;
L26:;
si0=l8;
si0=i32_load8_u(&i->m0,(U64)si0+1U);
si1=115U;
si0=si0 != si1;
if(si0){
goto L19;
}
si0=l8;
si0=i32_load8_u(&i->m0,(U64)si0+2U);
si1=97U;
si0=si0 != si1;
if(si0){
goto L19;
}
si0=l8;
si0=i32_load8_u(&i->m0,(U64)si0+3U);
si1=103U;
si0=si0 != si1;
if(si0){
goto L19;
}
si0=l8;
si0=i32_load8_u(&i->m0,(U64)si0+4U);
si1=101U;
si0=si0 != si1;
if(si0){
goto L19;
}
si0=l6;
si0=i32_load(&i->m0,(U64)si0+80U);
l8=si0;
si0=l6;
si0=i32_load(&i->m0,(U64)si0+84U);
l9=si0;
si0=l6;
si1=296U;
si0+=si1;
si1=l3;
si2=1087952U;
si3=0U;
f557(i,si0,si1,si2,si3);
si0=l6;
si1=177U;
i32_store(&i->m0,(U64)si0+276U,si1);
si0=l6;
si1=1U;
i32_store(&i->m0,(U64)si0+212U,si1);
si0=l6;
si1=1088568U;
i32_store(&i->m0,(U64)si0+208U,si1);
si0=l6;
sj1=1ULL;
i64_store(&i->m0,(U64)si0+220U,sj1);
si0=l6;
si1=l6;
si2=296U;
si1+=si2;
i32_store(&i->m0,(U64)si0+272U,si1);
si0=l6;
si1=l6;
si2=272U;
si1+=si2;
i32_store(&i->m0,(U64)si0+216U,si1);
si0=l6;
si1=328U;
si0+=si1;
si1=l8;
si2=l6;
si3=208U;
si2+=si3;
si3=l9;
si3=i32_load(&i->m0,(U64)si3+36U);
TF(i->t0,si3,void (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
si0=l6;
si0=i32_load8_u(&i->m0,(U64)si0+328U);
l8=si0;
si1=4U;
si0=si0 != si1;
if(si0){
goto L85;
}
si0=l6;
si0=i32_load(&i->m0,(U64)si0+300U);
si0=!(si0);
if(si0){
goto L18;
}
si0=l6;
si0=i32_load(&i->m0,(U64)si0+296U);
f15271(i,si0);
goto L18;
L85:;
si0=l6;
si1=l6;
si1=i32_load(&i->m0,(U64)si1+332U);
i32_store(&i->m0,(U64)si0+212U,si1);
si0=l6;
si1=l6;
si1=i32_load(&i->m0,(U64)si1+329U);
i32_store(&i->m0,(U64)si0+209U,si1);
si0=l6;
si1=l8;
i32_store8(&i->m0,(U64)si0+208U,si1);
si0=l6;
si1=104U;
si0+=si1;
si1=l6;
si2=208U;
si1+=si2;
f604(i,si0,si1);
si0=l6;
si0=i32_load(&i->m0,(U64)si0+300U);
si0=!(si0);
if(si0){
goto L14;
}
si0=l6;
si0=i32_load(&i->m0,(U64)si0+296U);
f15271(i,si0);
goto L14;
L25:;
si0=l8;
si0=i32_load8_u(&i->m0,(U64)si0+1U);
si1=98U;
si0=si0 != si1;
if(si0){
goto L19;
}
si0=l8;
si0=i32_load8_u(&i->m0,(U64)si0+2U);
si1=111U;
si0=si0 != si1;
if(si0){
goto L19;
}
si0=l8;
si0=i32_load8_u(&i->m0,(U64)si0+3U);
si1=117U;
si0=si0 != si1;
if(si0){
goto L19;
}
si0=l8;
si0=i32_load8_u(&i->m0,(U64)si0+4U);
si1=116U;
si0=si0 != si1;
if(si0){
goto L19;
}
si0=l6;
si0=i32_load(&i->m0,(U64)si0+80U);
l9=si0;
si0=l6;
si0=i32_load(&i->m0,(U64)si0+84U);
l10=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+120U);
l8=si0;
if(si0){
goto L87;
}
si0=13U;
l1=si0;
si0=1089383U;
l8=si0;
goto L86;
L87:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+124U);
l1=si0;
L86:;
si0=l6;
si1=l1;
i32_store(&i->m0,(U64)si0+300U,si1);
si0=l6;
si1=l8;
i32_store(&i->m0,(U64)si0+296U,si1);
si0=l6;
si1=66U;
i32_store(&i->m0,(U64)si0+276U,si1);
si0=l6;
si1=1U;
i32_store(&i->m0,(U64)si0+212U,si1);
si0=l6;
si1=1088568U;
i32_store(&i->m0,(U64)si0+208U,si1);
si0=l6;
sj1=1ULL;
i64_store(&i->m0,(U64)si0+220U,sj1);
si0=l6;
si1=l6;
si2=296U;
si1+=si2;
i32_store(&i->m0,(U64)si0+272U,si1);
si0=l6;
si1=l6;
si2=272U;
si1+=si2;
i32_store(&i->m0,(U64)si0+216U,si1);
si0=l6;
si1=328U;
si0+=si1;
si1=l9;
si2=l6;
si3=208U;
si2+=si3;
si3=l10;
si3=i32_load(&i->m0,(U64)si3+36U);
TF(i->t0,si3,void (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
si0=l6;
si0=i32_load8_u(&i->m0,(U64)si0+328U);
l8=si0;
si1=4U;
si0=si0 == si1;
if(si0){
goto L18;
}
si0=l6;
si1=l6;
si1=i32_load(&i->m0,(U64)si1+332U);
i32_store(&i->m0,(U64)si0+212U,si1);
si0=l6;
si1=l6;
si1=i32_load(&i->m0,(U64)si1+329U);
i32_store(&i->m0,(U64)si0+209U,si1);
si0=l6;
si1=l8;
i32_store8(&i->m0,(U64)si0+208U,si1);
si0=l6;
si1=104U;
si0+=si1;
si1=l6;
si2=208U;
si1+=si2;
f604(i,si0,si1);
goto L14;
L24:;
si0=l8;
si0=i32_load8_u(&i->m0,(U64)si0+1U);
si1=102U;
si0=si0 != si1;
if(si0){
goto L19;
}
si0=l8;
si0=i32_load8_u(&i->m0,(U64)si0+2U);
si1=116U;
si0=si0 != si1;
if(si0){
goto L19;
}
si0=l8;
si0=i32_load8_u(&i->m0,(U64)si0+3U);
si1=101U;
si0=si0 != si1;
if(si0){
goto L19;
}
si0=l8;
si0=i32_load8_u(&i->m0,(U64)si0+4U);
si1=114U;
si0=si0 != si1;
if(si0){
goto L19;
}
si0=l8;
si0=i32_load8_u(&i->m0,(U64)si0+5U);
si1=45U;
si0=si0 != si1;
if(si0){
goto L19;
}
si0=l8;
si0=i32_load8_u(&i->m0,(U64)si0+6U);
si1=104U;
si0=si0 != si1;
if(si0){
goto L19;
}
si0=l8;
si0=i32_load8_u(&i->m0,(U64)si0+7U);
si1=101U;
si0=si0 != si1;
if(si0){
goto L19;
}
si0=l8;
si0=i32_load8_u(&i->m0,(U64)si0+8U);
si1=108U;
si0=si0 != si1;
if(si0){
goto L19;
}
si0=l8;
si0=i32_load8_u(&i->m0,(U64)si0+9U);
si1=112U;
si0=si0 != si1;
if(si0){
goto L19;
}
si0=l6;
si0=i32_load(&i->m0,(U64)si0+80U);
l9=si0;
si0=l6;
si0=i32_load(&i->m0,(U64)si0+84U);
l10=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+136U);
l8=si0;
if(si0){
goto L89;
}
si0=18U;
l1=si0;
si0=1089396U;
l8=si0;
goto L88;
L89:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+140U);
l1=si0;
L88:;
si0=l6;
si1=l1;
i32_store(&i->m0,(U64)si0+300U,si1);
si0=l6;
si1=l8;
i32_store(&i->m0,(U64)si0+296U,si1);
si0=l6;
si1=66U;
i32_store(&i->m0,(U64)si0+276U,si1);
si0=l6;
si1=1U;
i32_store(&i->m0,(U64)si0+212U,si1);
si0=l6;
si1=1088568U;
i32_store(&i->m0,(U64)si0+208U,si1);
si0=l6;
sj1=1ULL;
i64_store(&i->m0,(U64)si0+220U,sj1);
si0=l6;
si1=l6;
si2=296U;
si1+=si2;
i32_store(&i->m0,(U64)si0+272U,si1);
si0=l6;
si1=l6;
si2=272U;
si1+=si2;
i32_store(&i->m0,(U64)si0+216U,si1);
si0=l6;
si1=328U;
si0+=si1;
si1=l9;
si2=l6;
si3=208U;
si2+=si3;
si3=l10;
si3=i32_load(&i->m0,(U64)si3+36U);
TF(i->t0,si3,void (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
si0=l6;
si0=i32_load8_u(&i->m0,(U64)si0+328U);
l8=si0;
si1=4U;
si0=si0 == si1;
if(si0){
goto L18;
}
si0=l6;
si1=l6;
si1=i32_load(&i->m0,(U64)si1+332U);
i32_store(&i->m0,(U64)si0+212U,si1);
si0=l6;
si1=l6;
si1=i32_load(&i->m0,(U64)si1+329U);
i32_store(&i->m0,(U64)si0+209U,si1);
si0=l6;
si1=l8;
i32_store8(&i->m0,(U64)si0+208U,si1);
si0=l6;
si1=104U;
si0+=si1;
si1=l6;
si2=208U;
si1+=si2;
f604(i,si0,si1);
goto L14;
L23:;
si0=l8;
si0=i32_load8_u(&i->m0,(U64)si0+1U);
si1=111U;
si0=si0 != si1;
if(si0){
goto L19;
}
si0=l8;
si0=i32_load8_u(&i->m0,(U64)si0+2U);
si1=110U;
si0=si0 != si1;
if(si0){
goto L19;
}
si0=l8;
si0=i32_load8_u(&i->m0,(U64)si0+3U);
si1=103U;
si0=si0 != si1;
if(si0){
goto L19;
}
si0=l8;
si0=i32_load8_u(&i->m0,(U64)si0+4U);
si1=45U;
si0=si0 != si1;
if(si0){
goto L19;
}
si0=l8;
si0=i32_load8_u(&i->m0,(U64)si0+5U);
si1=97U;
si0=si0 != si1;
if(si0){
goto L19;
}
si0=l8;
si0=i32_load8_u(&i->m0,(U64)si0+6U);
si1=98U;
si0=si0 != si1;
if(si0){
goto L19;
}
si0=l8;
si0=i32_load8_u(&i->m0,(U64)si0+7U);
si1=111U;
si0=si0 != si1;
if(si0){
goto L19;
}
si0=l8;
si0=i32_load8_u(&i->m0,(U64)si0+8U);
si1=117U;
si0=si0 != si1;
if(si0){
goto L19;
}
si0=l8;
si0=i32_load8_u(&i->m0,(U64)si0+9U);
si1=116U;
si0=si0 != si1;
if(si0){
goto L19;
}
si0=l6;
si0=i32_load(&i->m0,(U64)si0+80U);
l9=si0;
si0=l6;
si0=i32_load(&i->m0,(U64)si0+84U);
l10=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+128U);
l8=si0;
if(si0){
goto L91;
}
si0=13U;
l1=si0;
si0=1089383U;
l8=si0;
goto L90;
L91:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+132U);
l1=si0;
L90:;
si0=l6;
si1=l1;
i32_store(&i->m0,(U64)si0+300U,si1);
si0=l6;
si1=l8;
i32_store(&i->m0,(U64)si0+296U,si1);
si0=l6;
si1=66U;
i32_store(&i->m0,(U64)si0+276U,si1);
si0=l6;
si1=1U;
i32_store(&i->m0,(U64)si0+212U,si1);
si0=l6;
si1=1088568U;
i32_store(&i->m0,(U64)si0+208U,si1);
si0=l6;
sj1=1ULL;
i64_store(&i->m0,(U64)si0+220U,sj1);
si0=l6;
si1=l6;
si2=296U;
si1+=si2;
i32_store(&i->m0,(U64)si0+272U,si1);
si0=l6;
si1=l6;
si2=272U;
si1+=si2;
i32_store(&i->m0,(U64)si0+216U,si1);
si0=l6;
si1=328U;
si0+=si1;
si1=l9;
si2=l6;
si3=208U;
si2+=si3;
si3=l10;
si3=i32_load(&i->m0,(U64)si3+36U);
TF(i->t0,si3,void (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
si0=l6;
si0=i32_load8_u(&i->m0,(U64)si0+328U);
l8=si0;
si1=4U;
si0=si0 == si1;
if(si0){
goto L18;
}
si0=l6;
si1=l6;
si1=i32_load(&i->m0,(U64)si1+332U);
i32_store(&i->m0,(U64)si0+212U,si1);
si0=l6;
si1=l6;
si1=i32_load(&i->m0,(U64)si1+329U);
i32_store(&i->m0,(U64)si0+209U,si1);
si0=l6;
si1=l8;
i32_store8(&i->m0,(U64)si0+208U,si1);
si0=l6;
si1=104U;
si0+=si1;
si1=l6;
si2=208U;
si1+=si2;
f604(i,si0,si1);
goto L14;
L22:;
si0=l8;
si0=i32_load8_u(&i->m0,(U64)si0+1U);
si1=108U;
si0=si0 != si1;
if(si0){
goto L19;
}
si0=l8;
si0=i32_load8_u(&i->m0,(U64)si0+2U);
si1=108U;
si0=si0 != si1;
if(si0){
goto L19;
}
si0=l8;
si0=i32_load8_u(&i->m0,(U64)si0+3U);
si1=45U;
si0=si0 != si1;
if(si0){
goto L19;
}
si0=l8;
si0=i32_load8_u(&i->m0,(U64)si0+4U);
si1=97U;
si0=si0 != si1;
if(si0){
goto L19;
}
si0=l8;
si0=i32_load8_u(&i->m0,(U64)si0+5U);
si1=114U;
si0=si0 != si1;
if(si0){
goto L19;
}
si0=l8;
si0=i32_load8_u(&i->m0,(U64)si0+6U);
si1=103U;
si0=si0 != si1;
if(si0){
goto L19;
}
si0=l8;
si0=i32_load8_u(&i->m0,(U64)si0+7U);
si1=115U;
si0=si0 != si1;
if(si0){
goto L19;
}
si0=l6;
si1=208U;
si0+=si1;
si1=l6;
si2=80U;
si1+=si2;
si2=l3;
f393(i,si0,si1,si2);
si0=l6;
si0=i32_load8_u(&i->m0,(U64)si0+232U);
l8=si0;
si1=20U;
si0=si0 == si1;
if(si0){
goto L18;
}
si0=l6;
si1=104U;
si0+=si1;
si1=16U;
si0+=si1;
si1=l6;
si2=208U;
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
si2=208U;
si1+=si2;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l6;
si1=131U;
si0+=si1;
si1=l15;
si2=2U;
si1+=si2;
si1=i32_load8_u(&i->m0,(U64)si1);
i32_store8(&i->m0,(U64)si0,si1);
si0=l6;
si1=l6;
sj1=i64_load(&i->m0,(U64)si1+208U);
i64_store(&i->m0,(U64)si0+104U,sj1);
si0=l6;
si1=l15;
si1=i32_load16_u(&i->m0,(U64)si1);
i32_store16(&i->m0,(U64)si0+129U,si1);
si0=l6;
si1=l8;
i32_store8(&i->m0,(U64)si0+128U,si1);
goto L14;
L21:;
si0=l8;
si0=i32_load8_u(&i->m0,(U64)si0+1U);
si1=101U;
si0=si0 != si1;
if(si0){
goto L19;
}
si0=l8;
si0=i32_load8_u(&i->m0,(U64)si0+2U);
si1=102U;
si0=si0 != si1;
if(si0){
goto L19;
}
si0=l8;
si0=i32_load8_u(&i->m0,(U64)si0+3U);
si1=111U;
si0=si0 != si1;
if(si0){
goto L19;
}
si0=l8;
si0=i32_load8_u(&i->m0,(U64)si0+4U);
si1=114U;
si0=si0 != si1;
if(si0){
goto L19;
}
si0=l8;
si0=i32_load8_u(&i->m0,(U64)si0+5U);
si1=101U;
si0=si0 != si1;
if(si0){
goto L19;
}
si0=l8;
si0=i32_load8_u(&i->m0,(U64)si0+6U);
si1=45U;
si0=si0 != si1;
if(si0){
goto L19;
}
si0=l8;
si0=i32_load8_u(&i->m0,(U64)si0+7U);
si1=104U;
si0=si0 != si1;
if(si0){
goto L19;
}
si0=l8;
si0=i32_load8_u(&i->m0,(U64)si0+8U);
si1=101U;
si0=si0 != si1;
if(si0){
goto L19;
}
si0=l8;
si0=i32_load8_u(&i->m0,(U64)si0+9U);
si1=108U;
si0=si0 != si1;
if(si0){
goto L19;
}
si0=l8;
si0=i32_load8_u(&i->m0,(U64)si0+10U);
si1=112U;
si0=si0 != si1;
if(si0){
goto L19;
}
si0=l6;
si0=i32_load(&i->m0,(U64)si0+80U);
l9=si0;
si0=l6;
si0=i32_load(&i->m0,(U64)si0+84U);
l10=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+144U);
l8=si0;
if(si0){
goto L93;
}
si0=19U;
l1=si0;
si0=1089364U;
l8=si0;
goto L92;
L93:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+148U);
l1=si0;
L92:;
si0=l6;
si1=l1;
i32_store(&i->m0,(U64)si0+300U,si1);
si0=l6;
si1=l8;
i32_store(&i->m0,(U64)si0+296U,si1);
si0=l6;
si1=66U;
i32_store(&i->m0,(U64)si0+276U,si1);
si0=l6;
si1=1U;
i32_store(&i->m0,(U64)si0+212U,si1);
si0=l6;
si1=1088568U;
i32_store(&i->m0,(U64)si0+208U,si1);
si0=l6;
sj1=1ULL;
i64_store(&i->m0,(U64)si0+220U,sj1);
si0=l6;
si1=l6;
si2=296U;
si1+=si2;
i32_store(&i->m0,(U64)si0+272U,si1);
si0=l6;
si1=l6;
si2=272U;
si1+=si2;
i32_store(&i->m0,(U64)si0+216U,si1);
si0=l6;
si1=328U;
si0+=si1;
si1=l9;
si2=l6;
si3=208U;
si2+=si3;
si3=l10;
si3=i32_load(&i->m0,(U64)si3+36U);
TF(i->t0,si3,void (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
si0=l6;
si0=i32_load8_u(&i->m0,(U64)si0+328U);
l8=si0;
si1=4U;
si0=si0 == si1;
if(si0){
goto L18;
}
si0=l6;
si1=l6;
si1=i32_load(&i->m0,(U64)si1+332U);
i32_store(&i->m0,(U64)si0+212U,si1);
si0=l6;
si1=l6;
si1=i32_load(&i->m0,(U64)si1+329U);
i32_store(&i->m0,(U64)si0+209U,si1);
si0=l6;
si1=l8;
i32_store8(&i->m0,(U64)si0+208U,si1);
si0=l6;
si1=104U;
si0+=si1;
si1=l6;
si2=208U;
si1+=si2;
f604(i,si0,si1);
goto L14;
L20:;
si0=l8;
si0=i32_load8_u(&i->m0,(U64)si0+1U);
si1=117U;
si0=si0 != si1;
if(si0){
goto L19;
}
si0=l8;
si0=i32_load8_u(&i->m0,(U64)si0+2U);
si1=98U;
si0=si0 != si1;
if(si0){
goto L19;
}
si0=l8;
si0=i32_load8_u(&i->m0,(U64)si0+3U);
si1=99U;
si0=si0 != si1;
if(si0){
goto L19;
}
si0=l8;
si0=i32_load8_u(&i->m0,(U64)si0+4U);
si1=111U;
si0=si0 != si1;
if(si0){
goto L19;
}
si0=l8;
si0=i32_load8_u(&i->m0,(U64)si0+5U);
si1=109U;
si0=si0 != si1;
if(si0){
goto L19;
}
si0=l8;
si0=i32_load8_u(&i->m0,(U64)si0+6U);
si1=109U;
si0=si0 != si1;
if(si0){
goto L19;
}
si0=l8;
si0=i32_load8_u(&i->m0,(U64)si0+7U);
si1=97U;
si0=si0 != si1;
if(si0){
goto L19;
}
si0=l8;
si0=i32_load8_u(&i->m0,(U64)si0+8U);
si1=110U;
si0=si0 != si1;
if(si0){
goto L19;
}
si0=l8;
si0=i32_load8_u(&i->m0,(U64)si0+9U);
si1=100U;
si0=si0 != si1;
if(si0){
goto L19;
}
si0=l8;
si0=i32_load8_u(&i->m0,(U64)si0+10U);
si1=115U;
si0=si0 != si1;
if(si0){
goto L19;
}
si0=l6;
si1=296U;
si0+=si1;
si1=l6;
si2=80U;
si1+=si2;
si2=l18;
si2=i32_load(&i->m0,(U64)si2);
si3=l17;
si3=i32_load(&i->m0,(U64)si3);
f394(i,si0,si1,si2,si3);
si0=l6;
si0=i32_load8_u(&i->m0,(U64)si0+296U);
l8=si0;
si1=4U;
si0=si0 == si1;
if(si0){
goto L18;
}
si0=l6;
si1=l6;
si1=i32_load(&i->m0,(U64)si1+300U);
i32_store(&i->m0,(U64)si0+212U,si1);
si0=l6;
si1=l6;
si1=i32_load(&i->m0,(U64)si1+297U);
i32_store(&i->m0,(U64)si0+209U,si1);
si0=l6;
si1=l8;
i32_store8(&i->m0,(U64)si0+208U,si1);
si0=l6;
si1=104U;
si0+=si1;
si1=l6;
si2=208U;
si1+=si2;
f604(i,si0,si1);
goto L14;
L19:;
si0=l6;
si1=296U;
si0+=si1;
si1=l6;
si1=i32_load(&i->m0,(U64)si1+80U);
si2=1089328U;
si3=1U;
si4=l6;
si4=i32_load(&i->m0,(U64)si4+84U);
si4=i32_load(&i->m0,(U64)si4+28U);
TF(i->t0,si4,void (*)(rustpythonInstance*,U32,U32,U32,U32))(i,si0,si1,si2,si3);
si0=l6;
si0=i32_load8_u(&i->m0,(U64)si0+296U);
l9=si0;
si1=4U;
si0=si0 != si1;
if(si0){
goto L16;
}
si0=l6;
si1=296U;
si0+=si1;
si1=l6;
si1=i32_load(&i->m0,(U64)si1+80U);
si2=l8;
si3=l20;
si4=l6;
si4=i32_load(&i->m0,(U64)si4+84U);
si4=i32_load(&i->m0,(U64)si4+28U);
TF(i->t0,si4,void (*)(rustpythonInstance*,U32,U32,U32,U32))(i,si0,si1,si2,si3);
si0=l6;
si0=i32_load8_u(&i->m0,(U64)si0+296U);
l8=si0;
si1=4U;
si0=si0 != si1;
if(si0){
goto L15;
}
si0=l6;
si1=296U;
si0+=si1;
si1=l6;
si1=i32_load(&i->m0,(U64)si1+80U);
si2=1089468U;
si3=1U;
si4=l6;
si4=i32_load(&i->m0,(U64)si4+84U);
si4=i32_load(&i->m0,(U64)si4+28U);
TF(i->t0,si4,void (*)(rustpythonInstance*,U32,U32,U32,U32))(i,si0,si1,si2,si3);
si0=l6;
si0=i32_load8_u(&i->m0,(U64)si0+296U);
l8=si0;
si1=4U;
si0=si0 == si1;
if(si0){
goto L18;
}
si0=l6;
si1=l6;
si1=i32_load(&i->m0,(U64)si1+300U);
i32_store(&i->m0,(U64)si0+212U,si1);
si0=l6;
si1=l6;
si1=i32_load(&i->m0,(U64)si1+297U);
i32_store(&i->m0,(U64)si0+209U,si1);
si0=l6;
si1=l8;
i32_store8(&i->m0,(U64)si0+208U,si1);
si0=l6;
si1=104U;
si0+=si1;
si1=l6;
si2=208U;
si1+=si2;
f604(i,si0,si1);
goto L14;
L18:;
si0=l6;
si0=i32_load(&i->m0,(U64)si0+84U);
l2=si0;
si0=l6;
si0=i32_load(&i->m0,(U64)si0+80U);
l1=si0;
si0=l6;
si0=i32_load(&i->m0,(U64)si0+152U);
l10=si0;
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l9=si0;
si1=l6;
sj1=i64_load(&i->m0,(U64)si1+144U);
l7=sj1;
si2=l9;
sj2=(U64)(si2);
l12=sj2;
sj3=l7;
sj4=l12;
si3=sj3 < sj4;
sj1=si3?sj1:sj2;
l12=sj1;
si1=(U32)(sj1);
l8=si1;
si0=si0 >= si1;
if(si0){
goto L17;
}
goto L7;
}
L16:;
si0=l6;
si1=l6;
si1=i32_load(&i->m0,(U64)si1+300U);
i32_store(&i->m0,(U64)si0+212U,si1);
si0=l6;
si1=l6;
si1=i32_load(&i->m0,(U64)si1+297U);
i32_store(&i->m0,(U64)si0+209U,si1);
si0=l6;
si1=l9;
i32_store8(&i->m0,(U64)si0+208U,si1);
si0=l6;
si1=104U;
si0+=si1;
si1=l6;
si2=208U;
si1+=si2;
f604(i,si0,si1);
goto L14;
L15:;
si0=l6;
si1=l6;
si1=i32_load(&i->m0,(U64)si1+300U);
i32_store(&i->m0,(U64)si0+212U,si1);
si0=l6;
si1=l6;
si1=i32_load(&i->m0,(U64)si1+297U);
i32_store(&i->m0,(U64)si0+209U,si1);
si0=l6;
si1=l8;
i32_store8(&i->m0,(U64)si0+208U,si1);
si0=l6;
si1=104U;
si0+=si1;
si1=l6;
si2=208U;
si1+=si2;
f604(i,si0,si1);
L14:;
si0=l6;
si0=i32_load(&i->m0,(U64)si0+172U);
si0=!(si0);
if(si0){
goto L94;
}
si0=l6;
si0=i32_load(&i->m0,(U64)si0+168U);
f15271(i,si0);
L94:;
si0=l6;
si0=i32_load8_u(&i->m0,(U64)si0+128U);
l8=si0;
si1=20U;
si0=si0 == si1;
if(si0){
goto L10;
}
si0=l0;
si1=l6;
si1=i32_load16_u(&i->m0,(U64)si1+129U);
i32_store16(&i->m0,(U64)si0+25U,si1);
si0=l6;
si1=208U;
si0+=si1;
si1=16U;
si0+=si1;
si1=l6;
si2=104U;
si1+=si2;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
l7=sj1;
i64_store(&i->m0,(U64)si0,sj1);
si0=l6;
si1=208U;
si0+=si1;
si1=8U;
si0+=si1;
si1=l6;
si2=104U;
si1+=si2;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
l12=sj1;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=27U;
si0+=si1;
si1=l6;
si2=104U;
si1+=si2;
si2=27U;
si1+=si2;
si1=i32_load8_u(&i->m0,(U64)si1);
i32_store8(&i->m0,(U64)si0,si1);
si0=l6;
si1=l6;
sj1=i64_load(&i->m0,(U64)si1+104U);
l13=sj1;
i64_store(&i->m0,(U64)si0+208U,sj1);
si0=l0;
si1=16U;
si0+=si1;
sj1=l7;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=8U;
si0+=si1;
sj1=l12;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
sj1=l13;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=l8;
i32_store8(&i->m0,(U64)si0+24U,si1);
goto L8;
L13:;
si0=1U;
si1=15U;
f52(i,si0,si1);
UNREACHABLE;
L12:;
si0=l3;
si1=144U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l8=si0;
si0=!(si0);
if(si0){
goto L103;
}
si0=l6;
si1=104U;
si0+=si1;
si1=l6;
si2=80U;
si1+=si2;
si2=l8;
si3=l3;
si4=148U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
f395(i,si0,si1,si2,si3);
si0=l6;
si0=i32_load8_u(&i->m0,(U64)si0+104U);
l8=si0;
si1=4U;
si0=si0 != si1;
if(si0){
goto L102;
}
si0=l6;
si1=104U;
si0+=si1;
si1=l6;
si1=i32_load(&i->m0,(U64)si1+80U);
si2=1089088U;
si3=2U;
si4=l6;
si4=i32_load(&i->m0,(U64)si4+84U);
si4=i32_load(&i->m0,(U64)si4+28U);
TF(i->t0,si4,void (*)(rustpythonInstance*,U32,U32,U32,U32))(i,si0,si1,si2,si3);
si0=l6;
si0=i32_load8_u(&i->m0,(U64)si0+104U);
l8=si0;
si1=4U;
si0=si0 != si1;
if(si0){
goto L101;
}
L103:;
si0=l6;
si1=104U;
si0+=si1;
si1=l6;
si2=80U;
si1+=si2;
si2=l3;
f389(i,si0,si1,si2);
si0=l6;
si0=i32_load8_u(&i->m0,(U64)si0+104U);
l8=si0;
si1=4U;
si0=si0 != si1;
if(si0){
goto L100;
}
si0=l6;
si1=104U;
si0+=si1;
si1=l6;
si1=i32_load(&i->m0,(U64)si1+80U);
l8=si1;
si2=1088628U;
si3=1U;
si4=l6;
si4=i32_load(&i->m0,(U64)si4+84U);
l9=si4;
si4=i32_load(&i->m0,(U64)si4+28U);
l1=si4;
TF(i->t0,si4,void (*)(rustpythonInstance*,U32,U32,U32,U32))(i,si0,si1,si2,si3);
si0=l6;
si0=i32_load8_u(&i->m0,(U64)si0+104U);
l10=si0;
si1=4U;
si0=si0 != si1;
if(si0){
goto L99;
}
si0=l3;
si1=104U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l10=si0;
if(si0){
goto L105;
}
si0=0U;
l2=si0;
si0=1087952U;
l10=si0;
goto L104;
L105:;
si0=l3;
si1=108U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
L104:;
si0=l6;
si1=220U;
si0+=si1;
sj1=1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l6;
si1=l2;
i32_store(&i->m0,(U64)si0+108U,si1);
si0=l6;
si1=l10;
i32_store(&i->m0,(U64)si0+104U,si1);
si0=l6;
si1=66U;
i32_store(&i->m0,(U64)si0+164U,si1);
si0=l6;
si1=1U;
i32_store(&i->m0,(U64)si0+212U,si1);
si0=l6;
si1=1088568U;
i32_store(&i->m0,(U64)si0+208U,si1);
si0=l6;
si1=l6;
si2=104U;
si1+=si2;
i32_store(&i->m0,(U64)si0+160U,si1);
si0=l6;
si1=l6;
si2=160U;
si1+=si2;
i32_store(&i->m0,(U64)si0+216U,si1);
si0=l6;
si1=272U;
si0+=si1;
si1=l8;
si2=l6;
si3=208U;
si2+=si3;
si3=l9;
si3=i32_load(&i->m0,(U64)si3+36U);
TF(i->t0,si3,void (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
si0=l6;
si0=i32_load8_u(&i->m0,(U64)si0+272U);
l10=si0;
si1=4U;
si0=si0 != si1;
if(si0){
goto L98;
}
si0=l6;
si1=104U;
si0+=si1;
si1=l8;
si2=1088576U;
si3=1U;
si4=l1;
TF(i->t0,si4,void (*)(rustpythonInstance*,U32,U32,U32,U32))(i,si0,si1,si2,si3);
si0=l6;
si0=i32_load8_u(&i->m0,(U64)si0+104U);
l10=si0;
si1=4U;
si0=si0 != si1;
if(si0){
goto L97;
}
si0=l3;
si1=96U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l10=si0;
si0=!(si0);
if(si0){
goto L109;
}
si0=0U;
l9=si0;
si0=l6;
si1=24U;
si0+=si1;
si1=l3;
si2=100U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
l5=si1;
si2=0U;
f562(i,si0,si1,si2);
si0=l6;
si0=i32_load(&i->m0,(U64)si0+28U);
l11=si0;
si0=l6;
si0=i32_load(&i->m0,(U64)si0+24U);
si1=l10;
si2=l5;
si0=f15390(i,si0,si1,si2);
l2=si0;
si0=l6;
si1=0U;
i32_store(&i->m0,(U64)si0+168U,si1);
si0=l6;
sj1=1ULL;
i64_store(&i->m0,(U64)si0+160U,sj1);
si0=l6;
si1=208U;
si0+=si1;
si1=l2;
si2=l5;
si3=1088880U;
si4=3U;
f760(i,si0,si1,si2,si3,si4);
si0=l6;
si1=104U;
si0+=si1;
si1=l6;
si2=208U;
si1+=si2;
f385(i,si0,si1);
si0=l6;
si0=i32_load(&i->m0,(U64)si0+104U);
si0=!(si0);
if(si0){
goto L110;
}
si0=0U;
l9=si0;
L111:;
{
si0=l6;
si0=i32_load(&i->m0,(U64)si0+108U);
si1=l9;
si0-=si1;
l8=si0;
si0=l2;
si1=l9;
si0+=si1;
l1=si0;
si0=l6;
si0=i32_load(&i->m0,(U64)si0+112U);
l9=si0;
si0=l6;
si0=i32_load(&i->m0,(U64)si0+164U);
si1=l6;
si1=i32_load(&i->m0,(U64)si1+168U);
l10=si1;
si0-=si1;
si1=l8;
si0=si0 >= si1;
if(si0){
goto L112;
}
si0=l6;
si1=160U;
si0+=si1;
si1=l10;
si2=l8;
f580(i,si0,si1,si2);
si0=l6;
si0=i32_load(&i->m0,(U64)si0+168U);
l10=si0;
L112:;
si0=l6;
si0=i32_load(&i->m0,(U64)si0+160U);
si1=l10;
si0+=si1;
si1=l1;
si2=l8;
si0=f15390(i,si0,si1,si2);
si0=l6;
si1=l10;
si2=l8;
si1+=si2;
l8=si1;
i32_store(&i->m0,(U64)si0+168U,si1);
si0=l6;
si0=i32_load(&i->m0,(U64)si0+164U);
si1=l8;
si0=si0 != si1;
if(si0){
goto L113;
}
si0=l6;
si1=160U;
si0+=si1;
si1=l8;
si2=1U;
f580(i,si0,si1,si2);
si0=l6;
si0=i32_load(&i->m0,(U64)si0+168U);
l8=si0;
L113:;
si0=l6;
si0=i32_load(&i->m0,(U64)si0+160U);
si1=l8;
si0+=si1;
si1=10U;
i32_store8(&i->m0,(U64)si0,si1);
si0=l6;
si1=l8;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0+168U,si1);
si0=l6;
si1=104U;
si0+=si1;
si1=l6;
si2=208U;
si1+=si2;
f385(i,si0,si1);
si0=l6;
si0=i32_load(&i->m0,(U64)si0+104U);
if(si0){
goto L111;
}
}
L110:;
si0=l6;
si1=160U;
si0+=si1;
si1=l2;
si2=l9;
si1+=si2;
si2=l5;
si3=l9;
si2-=si3;
f290(i,si0,si1,si2);
si0=l6;
si0=i32_load(&i->m0,(U64)si0+168U);
l10=si0;
si0=l6;
si0=i32_load(&i->m0,(U64)si0+164U);
l5=si0;
si0=l6;
si0=i32_load(&i->m0,(U64)si0+160U);
l1=si0;
si0=l11;
si0=!(si0);
if(si0){
goto L114;
}
si0=l2;
f15271(i,si0);
L114:;
si0=l6;
si0=i32_load(&i->m0,(U64)si0+80U);
l8=si0;
si0=l6;
si0=i32_load(&i->m0,(U64)si0+84U);
l9=si0;
si0=l6;
si0=i32_load(&i->m0,(U64)si0+88U);
l2=si0;
si0=l6;
si1=116U;
si0+=si1;
l11=si0;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l6;
si1=0U;
i32_store8(&i->m0,(U64)si0+124U,si1);
si0=l6;
si1=1993552U;
i32_store(&i->m0,(U64)si0+112U,si1);
si0=l6;
si1=0U;
i32_store(&i->m0,(U64)si0+108U,si1);
si0=l6;
si1=1993552U;
i32_store(&i->m0,(U64)si0+104U,si1);
si0=l6;
si1=l2;
i32_store(&i->m0,(U64)si0+120U,si1);
si0=l6;
si1=0U;
i32_store16(&i->m0,(U64)si0+244U,si1);
si0=l6;
si1=l10;
i32_store(&i->m0,(U64)si0+240U,si1);
si0=l6;
si1=0U;
i32_store(&i->m0,(U64)si0+236U,si1);
si0=l6;
sj1=42949672961ULL;
i64_store(&i->m0,(U64)si0+228U,sj1);
si0=l6;
si1=l10;
i32_store(&i->m0,(U64)si0+224U,si1);
si0=l6;
si1=0U;
i32_store(&i->m0,(U64)si0+220U,si1);
si0=l6;
si1=l10;
i32_store(&i->m0,(U64)si0+216U,si1);
si0=l6;
si1=l1;
i32_store(&i->m0,(U64)si0+212U,si1);
si0=l6;
si1=10U;
i32_store(&i->m0,(U64)si0+208U,si1);
si0=l6;
si1=l6;
si2=104U;
si1+=si2;
i32_store(&i->m0,(U64)si0+248U,si1);
si0=l6;
si1=160U;
si0+=si1;
si1=l6;
si2=208U;
si1+=si2;
f310(i,si0,si1);
si0=l6;
si1=272U;
si0+=si1;
si1=l6;
si1=i32_load(&i->m0,(U64)si1+160U);
l10=si1;
si2=l6;
si2=i32_load(&i->m0,(U64)si2+168U);
si3=1088576U;
si4=1U;
f467(i,si0,si1,si2,si3,si4);
si0=l6;
si1=160U;
si0+=si1;
f301(i,si0);
si0=l6;
si0=i32_load(&i->m0,(U64)si0+164U);
si0=!(si0);
if(si0){
goto L115;
}
si0=l10;
f15271(i,si0);
L115:;
si0=l11;
sj1=1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l6;
si1=177U;
i32_store(&i->m0,(U64)si0+188U,si1);
si0=l6;
si1=2U;
i32_store(&i->m0,(U64)si0+108U,si1);
si0=l6;
si1=1089272U;
i32_store(&i->m0,(U64)si0+104U,si1);
si0=l6;
si1=l6;
si2=272U;
si1+=si2;
i32_store(&i->m0,(U64)si0+184U,si1);
si0=l6;
si1=l6;
si2=184U;
si1+=si2;
i32_store(&i->m0,(U64)si0+112U,si1);
si0=l6;
si1=144U;
si0+=si1;
si1=l8;
si2=l6;
si3=104U;
si2+=si3;
si3=l9;
si3=i32_load(&i->m0,(U64)si3+36U);
TF(i->t0,si3,void (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
si0=l6;
si0=i32_load8_u(&i->m0,(U64)si0+144U);
l10=si0;
si1=4U;
si0=si0 != si1;
if(si0){
goto L108;
}
si0=l5;
si0=!(si0);
if(si0){
goto L116;
}
si0=l1;
f15271(i,si0);
L116:;
si0=l6;
si0=i32_load(&i->m0,(U64)si0+276U);
si0=!(si0);
if(si0){
goto L109;
}
si0=l6;
si0=i32_load(&i->m0,(U64)si0+272U);
f15271(i,si0);
L109:;
si0=l3;
si1=128U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l10=si0;
si0=!(si0);
if(si0){
goto L106;
}
si0=0U;
l9=si0;
si0=l6;
si1=16U;
si0+=si1;
si1=l3;
si2=132U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
l5=si1;
si2=0U;
f562(i,si0,si1,si2);
si0=l6;
si0=i32_load(&i->m0,(U64)si0+20U);
l11=si0;
si0=l6;
si0=i32_load(&i->m0,(U64)si0+16U);
si1=l10;
si2=l5;
si0=f15390(i,si0,si1,si2);
l2=si0;
si0=l6;
si1=0U;
i32_store(&i->m0,(U64)si0+168U,si1);
si0=l6;
sj1=1ULL;
i64_store(&i->m0,(U64)si0+160U,sj1);
si0=l6;
si1=208U;
si0+=si1;
si1=l2;
si2=l5;
si3=1088880U;
si4=3U;
f760(i,si0,si1,si2,si3,si4);
si0=l6;
si1=104U;
si0+=si1;
si1=l6;
si2=208U;
si1+=si2;
f385(i,si0,si1);
si0=l6;
si0=i32_load(&i->m0,(U64)si0+104U);
si0=!(si0);
if(si0){
goto L117;
}
si0=0U;
l9=si0;
L118:;
{
si0=l6;
si0=i32_load(&i->m0,(U64)si0+108U);
si1=l9;
si0-=si1;
l8=si0;
si0=l2;
si1=l9;
si0+=si1;
l1=si0;
si0=l6;
si0=i32_load(&i->m0,(U64)si0+112U);
l9=si0;
si0=l6;
si0=i32_load(&i->m0,(U64)si0+164U);
si1=l6;
si1=i32_load(&i->m0,(U64)si1+168U);
l10=si1;
si0-=si1;
si1=l8;
si0=si0 >= si1;
if(si0){
goto L119;
}
si0=l6;
si1=160U;
si0+=si1;
si1=l10;
si2=l8;
f580(i,si0,si1,si2);
si0=l6;
si0=i32_load(&i->m0,(U64)si0+168U);
l10=si0;
L119:;
si0=l6;
si0=i32_load(&i->m0,(U64)si0+160U);
si1=l10;
si0+=si1;
si1=l1;
si2=l8;
si0=f15390(i,si0,si1,si2);
si0=l6;
si1=l10;
si2=l8;
si1+=si2;
l8=si1;
i32_store(&i->m0,(U64)si0+168U,si1);
si0=l6;
si0=i32_load(&i->m0,(U64)si0+164U);
si1=l8;
si0=si0 != si1;
if(si0){
goto L120;
}
si0=l6;
si1=160U;
si0+=si1;
si1=l8;
si2=1U;
f580(i,si0,si1,si2);
si0=l6;
si0=i32_load(&i->m0,(U64)si0+168U);
l8=si0;
L120:;
si0=l6;
si0=i32_load(&i->m0,(U64)si0+160U);
si1=l8;
si0+=si1;
si1=10U;
i32_store8(&i->m0,(U64)si0,si1);
si0=l6;
si1=l8;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0+168U,si1);
si0=l6;
si1=104U;
si0+=si1;
si1=l6;
si2=208U;
si1+=si2;
f385(i,si0,si1);
si0=l6;
si0=i32_load(&i->m0,(U64)si0+104U);
if(si0){
goto L118;
}
}
L117:;
si0=l6;
si1=160U;
si0+=si1;
si1=l2;
si2=l9;
si1+=si2;
si2=l5;
si3=l9;
si2-=si3;
f290(i,si0,si1,si2);
si0=l6;
si0=i32_load(&i->m0,(U64)si0+168U);
l10=si0;
si0=l6;
si0=i32_load(&i->m0,(U64)si0+164U);
l5=si0;
si0=l6;
si0=i32_load(&i->m0,(U64)si0+160U);
l1=si0;
si0=l11;
si0=!(si0);
if(si0){
goto L121;
}
si0=l2;
f15271(i,si0);
L121:;
si0=l6;
si0=i32_load(&i->m0,(U64)si0+80U);
l8=si0;
si0=l6;
si0=i32_load(&i->m0,(U64)si0+84U);
l9=si0;
si0=l6;
si0=i32_load(&i->m0,(U64)si0+88U);
l2=si0;
si0=l6;
si1=116U;
si0+=si1;
l11=si0;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l6;
si1=0U;
i32_store8(&i->m0,(U64)si0+124U,si1);
si0=l6;
si1=1993552U;
i32_store(&i->m0,(U64)si0+112U,si1);
si0=l6;
si1=0U;
i32_store(&i->m0,(U64)si0+108U,si1);
si0=l6;
si1=1993552U;
i32_store(&i->m0,(U64)si0+104U,si1);
si0=l6;
si1=l2;
i32_store(&i->m0,(U64)si0+120U,si1);
si0=l6;
si1=0U;
i32_store16(&i->m0,(U64)si0+244U,si1);
si0=l6;
si1=l10;
i32_store(&i->m0,(U64)si0+240U,si1);
si0=l6;
si1=0U;
i32_store(&i->m0,(U64)si0+236U,si1);
si0=l6;
sj1=42949672961ULL;
i64_store(&i->m0,(U64)si0+228U,sj1);
si0=l6;
si1=l10;
i32_store(&i->m0,(U64)si0+224U,si1);
si0=l6;
si1=0U;
i32_store(&i->m0,(U64)si0+220U,si1);
si0=l6;
si1=l10;
i32_store(&i->m0,(U64)si0+216U,si1);
si0=l6;
si1=l1;
i32_store(&i->m0,(U64)si0+212U,si1);
si0=l6;
si1=10U;
i32_store(&i->m0,(U64)si0+208U,si1);
si0=l6;
si1=l6;
si2=104U;
si1+=si2;
i32_store(&i->m0,(U64)si0+248U,si1);
si0=l6;
si1=160U;
si0+=si1;
si1=l6;
si2=208U;
si1+=si2;
f310(i,si0,si1);
si0=l6;
si1=272U;
si0+=si1;
si1=l6;
si1=i32_load(&i->m0,(U64)si1+160U);
l10=si1;
si2=l6;
si2=i32_load(&i->m0,(U64)si2+168U);
si3=1088576U;
si4=1U;
f467(i,si0,si1,si2,si3,si4);
si0=l6;
si1=160U;
si0+=si1;
f301(i,si0);
si0=l6;
si0=i32_load(&i->m0,(U64)si0+164U);
si0=!(si0);
if(si0){
goto L122;
}
si0=l10;
f15271(i,si0);
L122:;
si0=l11;
sj1=1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l6;
si1=177U;
i32_store(&i->m0,(U64)si0+188U,si1);
si0=l6;
si1=2U;
i32_store(&i->m0,(U64)si0+108U,si1);
si0=l6;
si1=1089272U;
i32_store(&i->m0,(U64)si0+104U,si1);
si0=l6;
si1=l6;
si2=272U;
si1+=si2;
i32_store(&i->m0,(U64)si0+184U,si1);
si0=l6;
si1=l6;
si2=184U;
si1+=si2;
i32_store(&i->m0,(U64)si0+112U,si1);
si0=l6;
si1=144U;
si0+=si1;
si1=l8;
si2=l6;
si3=104U;
si2+=si3;
si3=l9;
si3=i32_load(&i->m0,(U64)si3+36U);
TF(i->t0,si3,void (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
si0=l6;
si0=i32_load8_u(&i->m0,(U64)si0+144U);
l10=si0;
si1=4U;
si0=si0 != si1;
if(si0){
goto L107;
}
si0=l5;
si0=!(si0);
if(si0){
goto L123;
}
si0=l1;
f15271(i,si0);
L123:;
si0=l6;
si0=i32_load(&i->m0,(U64)si0+276U);
si0=!(si0);
if(si0){
goto L96;
}
si0=l6;
si0=i32_load(&i->m0,(U64)si0+272U);
f15271(i,si0);
goto L96;
L108:;
si0=l6;
si1=l6;
si1=i32_load(&i->m0,(U64)si1+148U);
i32_store(&i->m0,(U64)si0+212U,si1);
si0=l6;
si1=l6;
si1=i32_load(&i->m0,(U64)si1+145U);
i32_store(&i->m0,(U64)si0+209U,si1);
si0=l6;
si1=l10;
i32_store8(&i->m0,(U64)si0+208U,si1);
si0=l6;
si1=296U;
si0+=si1;
si1=l6;
si2=208U;
si1+=si2;
f604(i,si0,si1);
si0=l5;
si0=!(si0);
if(si0){
goto L124;
}
si0=l1;
f15271(i,si0);
L124:;
si0=l6;
si0=i32_load(&i->m0,(U64)si0+276U);
si0=!(si0);
if(si0){
goto L95;
}
si0=l6;
si0=i32_load(&i->m0,(U64)si0+272U);
f15271(i,si0);
goto L95;
L107:;
si0=l6;
si1=l6;
si1=i32_load(&i->m0,(U64)si1+148U);
i32_store(&i->m0,(U64)si0+212U,si1);
si0=l6;
si1=l6;
si1=i32_load(&i->m0,(U64)si1+145U);
i32_store(&i->m0,(U64)si0+209U,si1);
si0=l6;
si1=l10;
i32_store8(&i->m0,(U64)si0+208U,si1);
si0=l6;
si1=296U;
si0+=si1;
si1=l6;
si2=208U;
si1+=si2;
f604(i,si0,si1);
si0=l5;
si0=!(si0);
if(si0){
goto L125;
}
si0=l1;
f15271(i,si0);
L125:;
si0=l6;
si0=i32_load(&i->m0,(U64)si0+276U);
si0=!(si0);
if(si0){
goto L95;
}
si0=l6;
si0=i32_load(&i->m0,(U64)si0+272U);
f15271(i,si0);
goto L95;
L106:;
si0=l3;
si1=120U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l10=si0;
si0=!(si0);
if(si0){
goto L96;
}
si0=0U;
l9=si0;
si0=l6;
si1=8U;
si0+=si1;
si1=l3;
si2=124U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
l5=si1;
si2=0U;
f562(i,si0,si1,si2);
si0=l6;
si0=i32_load(&i->m0,(U64)si0+12U);
l11=si0;
si0=l6;
si0=i32_load(&i->m0,(U64)si0+8U);
si1=l10;
si2=l5;
si0=f15390(i,si0,si1,si2);
l2=si0;
si0=l6;
si1=0U;
i32_store(&i->m0,(U64)si0+168U,si1);
si0=l6;
sj1=1ULL;
i64_store(&i->m0,(U64)si0+160U,sj1);
si0=l6;
si1=208U;
si0+=si1;
si1=l2;
si2=l5;
si3=1088880U;
si4=3U;
f760(i,si0,si1,si2,si3,si4);
si0=l6;
si1=104U;
si0+=si1;
si1=l6;
si2=208U;
si1+=si2;
f385(i,si0,si1);
si0=l6;
si0=i32_load(&i->m0,(U64)si0+104U);
si0=!(si0);
if(si0){
goto L126;
}
si0=0U;
l9=si0;
L127:;
{
si0=l6;
si0=i32_load(&i->m0,(U64)si0+108U);
si1=l9;
si0-=si1;
l8=si0;
si0=l2;
si1=l9;
si0+=si1;
l1=si0;
si0=l6;
si0=i32_load(&i->m0,(U64)si0+112U);
l9=si0;
si0=l6;
si0=i32_load(&i->m0,(U64)si0+164U);
si1=l6;
si1=i32_load(&i->m0,(U64)si1+168U);
l10=si1;
si0-=si1;
si1=l8;
si0=si0 >= si1;
if(si0){
goto L128;
}
si0=l6;
si1=160U;
si0+=si1;
si1=l10;
si2=l8;
f580(i,si0,si1,si2);
si0=l6;
si0=i32_load(&i->m0,(U64)si0+168U);
l10=si0;
L128:;
si0=l6;
si0=i32_load(&i->m0,(U64)si0+160U);
si1=l10;
si0+=si1;
si1=l1;
si2=l8;
si0=f15390(i,si0,si1,si2);
si0=l6;
si1=l10;
si2=l8;
si1+=si2;
l8=si1;
i32_store(&i->m0,(U64)si0+168U,si1);
si0=l6;
si0=i32_load(&i->m0,(U64)si0+164U);
si1=l8;
si0=si0 != si1;
if(si0){
goto L129;
}
si0=l6;
si1=160U;
si0+=si1;
si1=l8;
si2=1U;
f580(i,si0,si1,si2);
si0=l6;
si0=i32_load(&i->m0,(U64)si0+168U);
l8=si0;
L129:;
si0=l6;
si0=i32_load(&i->m0,(U64)si0+160U);
si1=l8;
si0+=si1;
si1=10U;
i32_store8(&i->m0,(U64)si0,si1);
si0=l6;
si1=l8;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0+168U,si1);
si0=l6;
si1=104U;
si0+=si1;
si1=l6;
si2=208U;
si1+=si2;
f385(i,si0,si1);
si0=l6;
si0=i32_load(&i->m0,(U64)si0+104U);
if(si0){
goto L127;
}
}
L126:;
si0=l6;
si1=160U;
si0+=si1;
si1=l2;
si2=l9;
si1+=si2;
si2=l5;
si3=l9;
si2-=si3;
f290(i,si0,si1,si2);
si0=l6;
si0=i32_load(&i->m0,(U64)si0+168U);
l10=si0;
si0=l6;
si0=i32_load(&i->m0,(U64)si0+164U);
l5=si0;
si0=l6;
si0=i32_load(&i->m0,(U64)si0+160U);
l1=si0;
si0=l11;
si0=!(si0);
if(si0){
goto L130;
}
si0=l2;
f15271(i,si0);
L130:;
si0=l6;
si0=i32_load(&i->m0,(U64)si0+80U);
l8=si0;
si0=l6;
si0=i32_load(&i->m0,(U64)si0+84U);
l9=si0;
si0=l6;
si0=i32_load(&i->m0,(U64)si0+88U);
l2=si0;
si0=l6;
si1=116U;
si0+=si1;
l11=si0;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l6;
si1=0U;
i32_store8(&i->m0,(U64)si0+124U,si1);
si0=l6;
si1=1993552U;
i32_store(&i->m0,(U64)si0+112U,si1);
si0=l6;
si1=0U;
i32_store(&i->m0,(U64)si0+108U,si1);
si0=l6;
si1=1993552U;
i32_store(&i->m0,(U64)si0+104U,si1);
si0=l6;
si1=l2;
i32_store(&i->m0,(U64)si0+120U,si1);
si0=l6;
si1=0U;
i32_store16(&i->m0,(U64)si0+244U,si1);
si0=l6;
si1=l10;
i32_store(&i->m0,(U64)si0+240U,si1);
si0=l6;
si1=0U;
i32_store(&i->m0,(U64)si0+236U,si1);
si0=l6;
sj1=42949672961ULL;
i64_store(&i->m0,(U64)si0+228U,sj1);
si0=l6;
si1=l10;
i32_store(&i->m0,(U64)si0+224U,si1);
si0=l6;
si1=0U;
i32_store(&i->m0,(U64)si0+220U,si1);
si0=l6;
si1=l10;
i32_store(&i->m0,(U64)si0+216U,si1);
si0=l6;
si1=l1;
i32_store(&i->m0,(U64)si0+212U,si1);
si0=l6;
si1=10U;
i32_store(&i->m0,(U64)si0+208U,si1);
si0=l6;
si1=l6;
si2=104U;
si1+=si2;
i32_store(&i->m0,(U64)si0+248U,si1);
si0=l6;
si1=160U;
si0+=si1;
si1=l6;
si2=208U;
si1+=si2;
f310(i,si0,si1);
si0=l6;
si1=272U;
si0+=si1;
si1=l6;
si1=i32_load(&i->m0,(U64)si1+160U);
l10=si1;
si2=l6;
si2=i32_load(&i->m0,(U64)si2+168U);
si3=1088576U;
si4=1U;
f467(i,si0,si1,si2,si3,si4);
si0=l6;
si1=160U;
si0+=si1;
f301(i,si0);
si0=l6;
si0=i32_load(&i->m0,(U64)si0+164U);
si0=!(si0);
if(si0){
goto L131;
}
si0=l10;
f15271(i,si0);
L131:;
si0=l11;
sj1=1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l6;
si1=177U;
i32_store(&i->m0,(U64)si0+188U,si1);
si0=l6;
si1=2U;
i32_store(&i->m0,(U64)si0+108U,si1);
si0=l6;
si1=1089272U;
i32_store(&i->m0,(U64)si0+104U,si1);
si0=l6;
si1=l6;
si2=272U;
si1+=si2;
i32_store(&i->m0,(U64)si0+184U,si1);
si0=l6;
si1=l6;
si2=184U;
si1+=si2;
i32_store(&i->m0,(U64)si0+112U,si1);
si0=l6;
si1=144U;
si0+=si1;
si1=l8;
si2=l6;
si3=104U;
si2+=si3;
si3=l9;
si3=i32_load(&i->m0,(U64)si3+36U);
TF(i->t0,si3,void (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
si0=l6;
si0=i32_load8_u(&i->m0,(U64)si0+144U);
l10=si0;
si1=4U;
si0=si0 != si1;
if(si0){
goto L132;
}
si0=l5;
si0=!(si0);
if(si0){
goto L133;
}
si0=l1;
f15271(i,si0);
L133:;
si0=l6;
si0=i32_load(&i->m0,(U64)si0+276U);
si0=!(si0);
if(si0){
goto L96;
}
si0=l6;
si0=i32_load(&i->m0,(U64)si0+272U);
f15271(i,si0);
goto L96;
L132:;
si0=l6;
si1=l6;
si1=i32_load(&i->m0,(U64)si1+148U);
i32_store(&i->m0,(U64)si0+212U,si1);
si0=l6;
si1=l6;
si1=i32_load(&i->m0,(U64)si1+145U);
i32_store(&i->m0,(U64)si0+209U,si1);
si0=l6;
si1=l10;
i32_store8(&i->m0,(U64)si0+208U,si1);
si0=l6;
si1=296U;
si0+=si1;
si1=l6;
si2=208U;
si1+=si2;
f604(i,si0,si1);
si0=l5;
si0=!(si0);
if(si0){
goto L134;
}
si0=l1;
f15271(i,si0);
L134:;
si0=l6;
si0=i32_load(&i->m0,(U64)si0+276U);
si0=!(si0);
if(si0){
goto L95;
}
si0=l6;
si0=i32_load(&i->m0,(U64)si0+272U);
f15271(i,si0);
goto L95;
L102:;
si0=l6;
si1=l6;
si1=i32_load(&i->m0,(U64)si1+108U);
i32_store(&i->m0,(U64)si0+212U,si1);
si0=l6;
si1=l6;
si1=i32_load(&i->m0,(U64)si1+105U);
i32_store(&i->m0,(U64)si0+209U,si1);
si0=l6;
si1=l8;
i32_store8(&i->m0,(U64)si0+208U,si1);
si0=l6;
si1=296U;
si0+=si1;
si1=l6;
si2=208U;
si1+=si2;
f604(i,si0,si1);
goto L95;
L101:;
si0=l6;
si1=l6;
si1=i32_load(&i->m0,(U64)si1+108U);
i32_store(&i->m0,(U64)si0+212U,si1);
si0=l6;
si1=l6;
si1=i32_load(&i->m0,(U64)si1+105U);
i32_store(&i->m0,(U64)si0+209U,si1);
si0=l6;
si1=l8;
i32_store8(&i->m0,(U64)si0+208U,si1);
si0=l6;
si1=296U;
si0+=si1;
si1=l6;
si2=208U;
si1+=si2;
f604(i,si0,si1);
goto L95;
L100:;
si0=l6;
si1=l6;
si1=i32_load(&i->m0,(U64)si1+108U);
i32_store(&i->m0,(U64)si0+212U,si1);
si0=l6;
si1=l6;
si1=i32_load(&i->m0,(U64)si1+105U);
i32_store(&i->m0,(U64)si0+209U,si1);
si0=l6;
si1=l8;
i32_store8(&i->m0,(U64)si0+208U,si1);
si0=l6;
si1=296U;
si0+=si1;
si1=l6;
si2=208U;
si1+=si2;
f604(i,si0,si1);
goto L95;
L99:;
si0=l6;
si1=l6;
si1=i32_load(&i->m0,(U64)si1+108U);
i32_store(&i->m0,(U64)si0+212U,si1);
si0=l6;
si1=l6;
si1=i32_load(&i->m0,(U64)si1+105U);
i32_store(&i->m0,(U64)si0+209U,si1);
si0=l6;
si1=l10;
i32_store8(&i->m0,(U64)si0+208U,si1);
si0=l6;
si1=296U;
si0+=si1;
si1=l6;
si2=208U;
si1+=si2;
f604(i,si0,si1);
goto L95;
L98:;
si0=l6;
si1=l6;
si1=i32_load(&i->m0,(U64)si1+276U);
i32_store(&i->m0,(U64)si0+212U,si1);
si0=l6;
si1=l6;
si1=i32_load(&i->m0,(U64)si1+273U);
i32_store(&i->m0,(U64)si0+209U,si1);
si0=l6;
si1=l10;
i32_store8(&i->m0,(U64)si0+208U,si1);
si0=l6;
si1=296U;
si0+=si1;
si1=l6;
si2=208U;
si1+=si2;
f604(i,si0,si1);
goto L95;
L97:;
si0=l6;
si1=l6;
si1=i32_load(&i->m0,(U64)si1+108U);
i32_store(&i->m0,(U64)si0+212U,si1);
si0=l6;
si1=l6;
si1=i32_load(&i->m0,(U64)si1+105U);
i32_store(&i->m0,(U64)si0+209U,si1);
si0=l6;
si1=l10;
i32_store8(&i->m0,(U64)si0+208U,si1);
si0=l6;
si1=296U;
si0+=si1;
si1=l6;
si2=208U;
si1+=si2;
f604(i,si0,si1);
goto L95;
L96:;
si0=l6;
si0=i32_load8_u(&i->m0,(U64)si0+99U);
if(si0){
goto L136;
}
si0=l6;
si1=220U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l6;
si1=1U;
i32_store(&i->m0,(U64)si0+212U,si1);
si0=l6;
si1=1089296U;
i32_store(&i->m0,(U64)si0+208U,si1);
si0=l6;
si1=l6;
si2=344U;
si1+=si2;
i32_store(&i->m0,(U64)si0+216U,si1);
si0=l6;
si1=272U;
si0+=si1;
si1=l8;
si2=l6;
si3=208U;
si2+=si3;
si3=l9;
si3=i32_load(&i->m0,(U64)si3+36U);
l9=si3;
TF(i->t0,si3,void (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
goto L135;
L136:;
si0=l6;
si0=i32_load8_u(&i->m0,(U64)si0+96U);
switch(si0){
case 0:
goto L140;
case 1:
goto L139;
case 2:
goto L138;
default:
goto L140;
}
L140:;
si0=l6;
si1=112U;
si0+=si1;
si1=7U;
i32_store(&i->m0,(U64)si0,si1);
si0=l6;
si1=1089288U;
i32_store(&i->m0,(U64)si0+108U,si1);
si0=l6;
si1=1U;
i32_store(&i->m0,(U64)si0+104U,si1);
goto L137;
L139:;
si0=l6;
si1=112U;
si0+=si1;
si1=7U;
i32_store(&i->m0,(U64)si0,si1);
si0=l6;
si1=1089288U;
i32_store(&i->m0,(U64)si0+108U,si1);
si0=l6;
si1=1U;
i32_store(&i->m0,(U64)si0+104U,si1);
goto L137;
L138:;
si0=l6;
si1=112U;
si0+=si1;
si1=7U;
i32_store(&i->m0,(U64)si0,si1);
si0=l6;
si1=1089288U;
i32_store(&i->m0,(U64)si0+108U,si1);
si0=l6;
si1=3U;
i32_store(&i->m0,(U64)si0+104U,si1);
L137:;
si0=l6;
si1=220U;
si0+=si1;
sj1=1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l6;
si1=178U;
i32_store(&i->m0,(U64)si0+164U,si1);
si0=l6;
si1=1U;
i32_store(&i->m0,(U64)si0+212U,si1);
si0=l6;
si1=1088568U;
i32_store(&i->m0,(U64)si0+208U,si1);
si0=l6;
si1=l6;
si2=104U;
si1+=si2;
i32_store(&i->m0,(U64)si0+160U,si1);
si0=l6;
si1=l6;
si2=160U;
si1+=si2;
i32_store(&i->m0,(U64)si0+216U,si1);
si0=l6;
si1=272U;
si0+=si1;
si1=l8;
si2=l6;
si3=208U;
si2+=si3;
si3=l9;
si3=i32_load(&i->m0,(U64)si3+36U);
l9=si3;
TF(i->t0,si3,void (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
L135:;
si0=l6;
si0=i32_load8_u(&i->m0,(U64)si0+272U);
l10=si0;
si1=4U;
si0=si0 != si1;
if(si0){
goto L143;
}
si0=l6;
si1=160U;
si0+=si1;
si1=l3;
si2=1087952U;
si3=0U;
f557(i,si0,si1,si2,si3);
si0=l6;
si1=104U;
si0+=si1;
si1=12U;
si0+=si1;
si1=177U;
i32_store(&i->m0,(U64)si0,si1);
si0=l6;
si1=208U;
si0+=si1;
si1=12U;
si0+=si1;
sj1=2ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l6;
si1=66U;
i32_store(&i->m0,(U64)si0+108U,si1);
si0=l6;
si1=1088584U;
i32_store(&i->m0,(U64)si0+104U,si1);
si0=l6;
si1=3U;
i32_store(&i->m0,(U64)si0+212U,si1);
si0=l6;
si1=1089304U;
i32_store(&i->m0,(U64)si0+208U,si1);
si0=l6;
si1=l6;
si2=160U;
si1+=si2;
i32_store(&i->m0,(U64)si0+112U,si1);
si0=l6;
si1=l6;
si2=104U;
si1+=si2;
i32_store(&i->m0,(U64)si0+216U,si1);
si0=l6;
si1=272U;
si0+=si1;
si1=l8;
si2=l6;
si3=208U;
si2+=si3;
si3=l9;
TF(i->t0,si3,void (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
si0=l6;
si0=i32_load8_u(&i->m0,(U64)si0+272U);
l8=si0;
si1=4U;
si0=si0 != si1;
if(si0){
goto L146;
}
si0=l6;
si0=i32_load(&i->m0,(U64)si0+164U);
si0=!(si0);
if(si0){
goto L147;
}
si0=l6;
si0=i32_load(&i->m0,(U64)si0+160U);
f15271(i,si0);
L147:;
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
goto L145;
}
si0=l3;
si1=136U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l8=si0;
si0=!(si0);
if(si0){
goto L141;
}
si0=l3;
si1=140U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l9=si0;
goto L144;
L146:;
si0=l6;
si1=l6;
si1=i32_load(&i->m0,(U64)si1+276U);
i32_store(&i->m0,(U64)si0+212U,si1);
si0=l6;
si1=l6;
si1=i32_load(&i->m0,(U64)si1+273U);
i32_store(&i->m0,(U64)si0+209U,si1);
si0=l6;
si1=l8;
i32_store8(&i->m0,(U64)si0+208U,si1);
si0=l6;
si1=296U;
si0+=si1;
si1=l6;
si2=208U;
si1+=si2;
f604(i,si0,si1);
si0=l6;
si0=i32_load(&i->m0,(U64)si0+164U);
si0=!(si0);
if(si0){
goto L95;
}
si0=l6;
si0=i32_load(&i->m0,(U64)si0+160U);
f15271(i,si0);
goto L95;
L145:;
si0=l6;
si1=208U;
si0+=si1;
si1=l6;
si2=80U;
si1+=si2;
si2=l3;
f393(i,si0,si1,si2);
si0=l6;
si0=i32_load8_u(&i->m0,(U64)si0+232U);
l8=si0;
si1=20U;
si0=si0 == si1;
if(si0){
goto L148;
}
si0=l6;
si1=296U;
si0+=si1;
si1=16U;
si0+=si1;
si1=l6;
si2=208U;
si1+=si2;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l6;
si1=296U;
si0+=si1;
si1=8U;
si0+=si1;
si1=l6;
si2=208U;
si1+=si2;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l6;
si1=296U;
si0+=si1;
si1=27U;
si0+=si1;
si1=l6;
si2=208U;
si1+=si2;
si2=27U;
si1+=si2;
si1=i32_load8_u(&i->m0,(U64)si1);
i32_store8(&i->m0,(U64)si0,si1);
si0=l6;
si1=l6;
sj1=i64_load(&i->m0,(U64)si1+208U);
i64_store(&i->m0,(U64)si0+296U,sj1);
si0=l6;
si1=l6;
si1=i32_load16_u(&i->m0,(U64)si1+233U);
i32_store16(&i->m0,(U64)si0+321U,si1);
si0=l6;
si1=l8;
i32_store8(&i->m0,(U64)si0+320U,si1);
goto L95;
L148:;
si0=l3;
si1=136U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l8=si0;
si0=!(si0);
if(si0){
goto L141;
}
si0=l3;
si1=140U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l9=si0;
si0=l6;
si1=104U;
si0+=si1;
si1=l6;
si1=i32_load(&i->m0,(U64)si1+80U);
si2=1089088U;
si3=2U;
si4=l6;
si4=i32_load(&i->m0,(U64)si4+84U);
si4=i32_load(&i->m0,(U64)si4+28U);
TF(i->t0,si4,void (*)(rustpythonInstance*,U32,U32,U32,U32))(i,si0,si1,si2,si3);
si0=l6;
si0=i32_load8_u(&i->m0,(U64)si0+104U);
l10=si0;
si1=4U;
si0=si0 != si1;
if(si0){
goto L142;
}
L144:;
si0=l6;
si1=104U;
si0+=si1;
si1=l6;
si2=80U;
si1+=si2;
si2=l8;
si3=l9;
f395(i,si0,si1,si2,si3);
si0=l6;
si0=i32_load8_u(&i->m0,(U64)si0+104U);
l8=si0;
si1=4U;
si0=si0 == si1;
if(si0){
goto L141;
}
si0=l6;
si1=l6;
si1=i32_load(&i->m0,(U64)si1+108U);
i32_store(&i->m0,(U64)si0+212U,si1);
si0=l6;
si1=l6;
si1=i32_load(&i->m0,(U64)si1+105U);
i32_store(&i->m0,(U64)si0+209U,si1);
si0=l6;
si1=l8;
i32_store8(&i->m0,(U64)si0+208U,si1);
si0=l6;
si1=296U;
si0+=si1;
si1=l6;
si2=208U;
si1+=si2;
f604(i,si0,si1);
goto L95;
L143:;
si0=l6;
si1=l6;
si1=i32_load(&i->m0,(U64)si1+276U);
i32_store(&i->m0,(U64)si0+212U,si1);
si0=l6;
si1=l6;
si1=i32_load(&i->m0,(U64)si1+273U);
i32_store(&i->m0,(U64)si0+209U,si1);
si0=l6;
si1=l10;
i32_store8(&i->m0,(U64)si0+208U,si1);
si0=l6;
si1=296U;
si0+=si1;
si1=l6;
si2=208U;
si1+=si2;
f604(i,si0,si1);
goto L95;
L142:;
si0=l6;
si1=l6;
si1=i32_load(&i->m0,(U64)si1+108U);
i32_store(&i->m0,(U64)si0+212U,si1);
si0=l6;
si1=l6;
si1=i32_load(&i->m0,(U64)si1+105U);
i32_store(&i->m0,(U64)si0+209U,si1);
si0=l6;
si1=l10;
i32_store8(&i->m0,(U64)si0+208U,si1);
si0=l6;
si1=296U;
si0+=si1;
si1=l6;
si2=208U;
si1+=si2;
f604(i,si0,si1);
goto L95;
L141:;
si0=l6;
si1=104U;
si0+=si1;
si1=l6;
si1=i32_load(&i->m0,(U64)si1+80U);
si2=l6;
si2=i32_load(&i->m0,(U64)si2+84U);
si2=i32_load(&i->m0,(U64)si2+24U);
TF(i->t0,si2,void (*)(rustpythonInstance*,U32,U32))(i,si0,si1);
si0=l6;
si0=i32_load8_u(&i->m0,(U64)si0+104U);
si1=4U;
si0=si0 != si1;
if(si0){
goto L149;
}
si0=l6;
si1=20U;
i32_store8(&i->m0,(U64)si0+320U,si1);
goto L95;
L149:;
si0=l6;
si1=l6;
sj1=i64_load(&i->m0,(U64)si1+104U);
i64_store(&i->m0,(U64)si0+208U,sj1);
si0=l6;
si1=296U;
si0+=si1;
si1=l6;
si2=208U;
si1+=si2;
f604(i,si0,si1);
L95:;
si0=l6;
si0=i32_load8_u(&i->m0,(U64)si0+320U);
l8=si0;
si1=20U;
si0=si0 != si1;
if(si0){
goto L9;
}
L10:;
si0=l0;
si1=20U;
i32_store8(&i->m0,(U64)si0+24U,si1);
goto L8;
L9:;
si0=l0;
si1=l6;
si1=i32_load16_u(&i->m0,(U64)si1+321U);
i32_store16(&i->m0,(U64)si0+25U,si1);
si0=l6;
si1=208U;
si0+=si1;
si1=16U;
si0+=si1;
si1=l6;
si2=296U;
si1+=si2;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
l7=sj1;
i64_store(&i->m0,(U64)si0,sj1);
si0=l6;
si1=208U;
si0+=si1;
si1=8U;
si0+=si1;
si1=l6;
si2=296U;
si1+=si2;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
l12=sj1;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=27U;
si0+=si1;
si1=l6;
si2=296U;
si1+=si2;
si2=27U;
si1+=si2;
si1=i32_load8_u(&i->m0,(U64)si1);
i32_store8(&i->m0,(U64)si0,si1);
si0=l6;
si1=l6;
sj1=i64_load(&i->m0,(U64)si1+296U);
l13=sj1;
i64_store(&i->m0,(U64)si0+208U,sj1);
si0=l0;
si1=16U;
si0+=si1;
sj1=l7;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=8U;
si0+=si1;
sj1=l12;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
sj1=l13;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=l8;
i32_store8(&i->m0,(U64)si0+24U,si1);
L8:;
si0=l6;
si1=352U;
si0+=si1;
i->g0=si0;
goto L0;
L7:;
sj0=l12;
si0=(U32)(sj0);
si1=l9;
si2=1092976U;
f662(i,si0,si1,si2);
UNREACHABLE;
L0:;
}

void f388(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
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
si1=400U;
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
si1=324U;
si0+=si1;
sj1=1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=1U;
i32_store(&i->m0,(U64)si0+316U,si1);
si0=l4;
si1=1088568U;
i32_store(&i->m0,(U64)si0+312U,si1);
si0=l4;
si1=66U;
i32_store(&i->m0,(U64)si0+380U,si1);
si0=l4;
si1=1088584U;
i32_store(&i->m0,(U64)si0+376U,si1);
si0=l4;
si1=l4;
si2=376U;
si1+=si2;
i32_store(&i->m0,(U64)si0+320U,si1);
si0=l4;
si1=288U;
si0+=si1;
si1=l5;
si2=l4;
si3=312U;
si2+=si3;
si3=l6;
si3=i32_load(&i->m0,(U64)si3+36U);
l7=si3;
TF(i->t0,si3,void (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
si0=l4;
si0=i32_load8_u(&i->m0,(U64)si0+288U);
l6=si0;
si1=4U;
si0=si0 != si1;
if(si0){
goto L9;
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
goto L12;
}
si0=l4;
si1=l6;
i32_store(&i->m0,(U64)si0+232U,si1);
si0=l1;
si0=i32_load8_u(&i->m0,(U64)si0+19U);
if(si0){
goto L13;
}
si0=l4;
si1=324U;
si0+=si1;
sj1=1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=1U;
i32_store(&i->m0,(U64)si0+316U,si1);
si0=l4;
si1=1088596U;
i32_store(&i->m0,(U64)si0+312U,si1);
si0=l4;
si1=21U;
i32_store(&i->m0,(U64)si0+380U,si1);
si0=l4;
si1=l4;
si2=376U;
si1+=si2;
i32_store(&i->m0,(U64)si0+320U,si1);
si0=l4;
si1=l4;
si2=232U;
si1+=si2;
i32_store(&i->m0,(U64)si0+376U,si1);
si0=l4;
si1=248U;
si0+=si1;
si1=l5;
si2=l4;
si3=312U;
si2+=si3;
si3=l7;
TF(i->t0,si3,void (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
goto L11;
L13:;
si0=l4;
si1=312U;
si0+=si1;
si1=12U;
si0+=si1;
sj1=1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=1U;
i32_store(&i->m0,(U64)si0+316U,si1);
si0=l4;
si1=1088596U;
i32_store(&i->m0,(U64)si0+312U,si1);
si0=l4;
si1=21U;
i32_store(&i->m0,(U64)si0+380U,si1);
si0=l4;
si1=l4;
si2=376U;
si1+=si2;
i32_store(&i->m0,(U64)si0+320U,si1);
si0=l4;
si1=l4;
si2=232U;
si1+=si2;
i32_store(&i->m0,(U64)si0+376U,si1);
si0=l4;
si1=288U;
si0+=si1;
si1=l4;
si2=312U;
si1+=si2;
f63(i,si0,si1);
si0=l1;
si0=i32_load8_u(&i->m0,(U64)si0+16U);
switch(si0){
case 0:
goto L17;
case 1:
goto L16;
case 2:
goto L15;
default:
goto L17;
}
L17:;
si0=l4;
si1=376U;
si0+=si1;
si1=12U;
si0+=si1;
si1=l4;
si2=296U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1+288U);
i64_store(&i->m0,(U64)si0+380U,sj1);
si0=l4;
si1=2U;
i32_store(&i->m0,(U64)si0+376U,si1);
goto L14;
L16:;
si0=l4;
si1=376U;
si0+=si1;
si1=12U;
si0+=si1;
si1=l4;
si2=296U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1+288U);
i64_store(&i->m0,(U64)si0+380U,sj1);
si0=l4;
si1=2U;
i32_store(&i->m0,(U64)si0+376U,si1);
goto L14;
L15:;
si0=l4;
si1=376U;
si0+=si1;
si1=12U;
si0+=si1;
si1=l4;
si2=296U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1+288U);
i64_store(&i->m0,(U64)si0+380U,sj1);
si0=l4;
si1=3U;
i32_store(&i->m0,(U64)si0+376U,si1);
L14:;
si0=l4;
si1=324U;
si0+=si1;
sj1=1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=179U;
i32_store(&i->m0,(U64)si0+276U,si1);
si0=l4;
si1=1U;
i32_store(&i->m0,(U64)si0+316U,si1);
si0=l4;
si1=1088568U;
i32_store(&i->m0,(U64)si0+312U,si1);
si0=l4;
si1=l4;
si2=376U;
si1+=si2;
i32_store(&i->m0,(U64)si0+272U,si1);
si0=l4;
si1=l4;
si2=272U;
si1+=si2;
i32_store(&i->m0,(U64)si0+320U,si1);
si0=l4;
si1=248U;
si0+=si1;
si1=l5;
si2=l4;
si3=312U;
si2+=si3;
si3=l7;
TF(i->t0,si3,void (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+376U);
switch(si0){
case 0:
goto L21;
case 1:
goto L20;
case 2:
goto L19;
default:
goto L22;
}
L22:;
si0=l4;
si1=376U;
si0+=si1;
si1=4U;
si0|=si1;
l5=si0;
goto L18;
L21:;
si0=l4;
si1=376U;
si0+=si1;
si1=4U;
si0|=si1;
l5=si0;
goto L18;
L20:;
si0=l4;
si1=376U;
si0+=si1;
si1=4U;
si0|=si1;
l5=si0;
goto L18;
L19:;
si0=l4;
si1=376U;
si0+=si1;
si1=4U;
si0|=si1;
l5=si0;
L18:;
si0=l5;
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L11;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0+380U);
f15271(i,si0);
goto L11;
L12:;
si0=l2;
si1=l3;
si1=i32_load(&i->m0,(U64)si1+48U);
l9=si1;
si0=TF(i->t0,si1,U32 (*)(rustpythonInstance*,U32))(i,si0);
si0=!(si0);
if(si0){
goto L10;
}
si0=l4;
si1=324U;
si0+=si1;
sj1=1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=1U;
i32_store(&i->m0,(U64)si0+316U,si1);
si0=l4;
si1=1088568U;
i32_store(&i->m0,(U64)si0+312U,si1);
si0=l4;
si1=66U;
i32_store(&i->m0,(U64)si0+380U,si1);
si0=l4;
si1=1088584U;
i32_store(&i->m0,(U64)si0+376U,si1);
si0=l4;
si1=l4;
si2=376U;
si1+=si2;
i32_store(&i->m0,(U64)si0+320U,si1);
si0=l4;
si1=248U;
si0+=si1;
si1=l5;
si2=l4;
si3=312U;
si2+=si3;
si3=l7;
TF(i->t0,si3,void (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
L11:;
si0=l4;
si0=i32_load8_u(&i->m0,(U64)si0+248U);
l6=si0;
si1=4U;
si0=si0 != si1;
if(si0){
goto L8;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0+48U);
l9=si0;
L10:;
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
goto L2;
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
goto L25;
}
si0=l6;
if(si0){
goto L24;
}
goto L2;
L25:;
si0=l6;
if(si0){
goto L23;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
l7=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l8=si0;
goto L6;
L24:;
si0=l4;
si1=l6;
i32_store(&i->m0,(U64)si0+232U,si1);
si0=l4;
si1=l10;
i32_store(&i->m0,(U64)si0+236U,si1);
si0=l2;
si1=l8;
si0=TF(i->t0,si1,U32 (*)(rustpythonInstance*,U32))(i,si0);
si1=1114112U;
si0=si0 != si1;
if(si0){
goto L26;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
l8=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
goto L4;
L26:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
l8=si0;
si0=l4;
si1=324U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=1U;
i32_store(&i->m0,(U64)si0+316U,si1);
si0=l4;
si1=1088608U;
i32_store(&i->m0,(U64)si0+312U,si1);
si0=l4;
si1=1087952U;
i32_store(&i->m0,(U64)si0+320U,si1);
si0=l4;
si1=376U;
si0+=si1;
si1=l7;
si2=l4;
si3=312U;
si2+=si3;
si3=l8;
si3=i32_load(&i->m0,(U64)si3+36U);
TF(i->t0,si3,void (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
si0=l4;
si0=i32_load8_u(&i->m0,(U64)si0+376U);
l6=si0;
si1=4U;
si0=si0 == si1;
if(si0){
goto L4;
}
si0=l4;
si1=l4;
si1=i32_load(&i->m0,(U64)si1+380U);
i32_store(&i->m0,(U64)si0+219U,si1);
si0=l4;
si1=l4;
si1=i32_load(&i->m0,(U64)si1+377U);
i32_store(&i->m0,(U64)si0+216U,si1);
goto L3;
L23:;
si0=l4;
si1=l6;
i32_store(&i->m0,(U64)si0+232U,si1);
si0=l4;
si1=l10;
i32_store(&i->m0,(U64)si0+236U,si1);
si0=l2;
si1=l8;
si0=TF(i->t0,si1,U32 (*)(rustpythonInstance*,U32))(i,si0);
si1=1114112U;
si0=si0 != si1;
if(si0){
goto L27;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
l7=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l8=si0;
goto L7;
L27:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l8=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
l7=si0;
si0=l4;
si1=324U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=1U;
i32_store(&i->m0,(U64)si0+316U,si1);
si0=l4;
si1=1088608U;
i32_store(&i->m0,(U64)si0+312U,si1);
si0=l4;
si1=1087952U;
i32_store(&i->m0,(U64)si0+320U,si1);
si0=l4;
si1=376U;
si0+=si1;
si1=l8;
si2=l4;
si3=312U;
si2+=si3;
si3=l7;
si3=i32_load(&i->m0,(U64)si3+36U);
TF(i->t0,si3,void (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
si0=l4;
si0=i32_load8_u(&i->m0,(U64)si0+376U);
l6=si0;
si1=4U;
si0=si0 == si1;
if(si0){
goto L7;
}
si0=l4;
si1=l4;
si1=i32_load(&i->m0,(U64)si1+380U);
i32_store(&i->m0,(U64)si0+219U,si1);
si0=l4;
si1=l4;
si1=i32_load(&i->m0,(U64)si1+377U);
i32_store(&i->m0,(U64)si0+216U,si1);
goto L3;
L9:;
si0=l4;
si1=l4;
si1=i32_load(&i->m0,(U64)si1+292U);
i32_store(&i->m0,(U64)si0+252U,si1);
si0=l4;
si1=l4;
si1=i32_load(&i->m0,(U64)si1+289U);
i32_store(&i->m0,(U64)si0+249U,si1);
L8:;
si0=l0;
si1=l4;
si1=i32_load(&i->m0,(U64)si1+249U);
i32_store(&i->m0,(U64)si0+1U,si1);
si0=l0;
si1=4U;
si0+=si1;
si1=l4;
si1=i32_load(&i->m0,(U64)si1+252U);
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l6;
i32_store8(&i->m0,(U64)si0,si1);
goto L1;
L7:;
si0=l1;
si0=i32_load8_u(&i->m0,(U64)si0+19U);
if(si0){
goto L29;
}
si0=l4;
si1=324U;
si0+=si1;
sj1=1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=1U;
i32_store(&i->m0,(U64)si0+316U,si1);
si0=l4;
si1=1088620U;
i32_store(&i->m0,(U64)si0+312U,si1);
si0=l4;
si1=66U;
i32_store(&i->m0,(U64)si0+380U,si1);
si0=l4;
si1=l4;
si2=376U;
si1+=si2;
i32_store(&i->m0,(U64)si0+320U,si1);
si0=l4;
si1=l4;
si2=232U;
si1+=si2;
i32_store(&i->m0,(U64)si0+376U,si1);
si0=l4;
si1=248U;
si0+=si1;
si1=l8;
si2=l4;
si3=312U;
si2+=si3;
si3=l7;
si3=i32_load(&i->m0,(U64)si3+36U);
TF(i->t0,si3,void (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
goto L28;
L29:;
si0=l4;
si1=312U;
si0+=si1;
si1=12U;
si0+=si1;
sj1=1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=1U;
i32_store(&i->m0,(U64)si0+316U,si1);
si0=l4;
si1=1088620U;
i32_store(&i->m0,(U64)si0+312U,si1);
si0=l4;
si1=66U;
i32_store(&i->m0,(U64)si0+380U,si1);
si0=l4;
si1=l4;
si2=376U;
si1+=si2;
i32_store(&i->m0,(U64)si0+320U,si1);
si0=l4;
si1=l4;
si2=232U;
si1+=si2;
i32_store(&i->m0,(U64)si0+376U,si1);
si0=l4;
si1=288U;
si0+=si1;
si1=l4;
si2=312U;
si1+=si2;
f63(i,si0,si1);
si0=l1;
si0=i32_load8_u(&i->m0,(U64)si0+16U);
switch(si0){
case 0:
goto L33;
case 1:
goto L32;
case 2:
goto L31;
default:
goto L33;
}
L33:;
si0=l4;
si1=376U;
si0+=si1;
si1=12U;
si0+=si1;
si1=l4;
si2=296U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1+288U);
i64_store(&i->m0,(U64)si0+380U,sj1);
si0=l4;
si1=2U;
i32_store(&i->m0,(U64)si0+376U,si1);
goto L30;
L32:;
si0=l4;
si1=376U;
si0+=si1;
si1=12U;
si0+=si1;
si1=l4;
si2=296U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1+288U);
i64_store(&i->m0,(U64)si0+380U,sj1);
si0=l4;
si1=2U;
i32_store(&i->m0,(U64)si0+376U,si1);
goto L30;
L31:;
si0=l4;
si1=376U;
si0+=si1;
si1=12U;
si0+=si1;
si1=l4;
si2=296U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1+288U);
i64_store(&i->m0,(U64)si0+380U,sj1);
si0=l4;
si1=3U;
i32_store(&i->m0,(U64)si0+376U,si1);
L30:;
si0=l4;
si1=324U;
si0+=si1;
sj1=1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=179U;
i32_store(&i->m0,(U64)si0+276U,si1);
si0=l4;
si1=1U;
i32_store(&i->m0,(U64)si0+316U,si1);
si0=l4;
si1=1088568U;
i32_store(&i->m0,(U64)si0+312U,si1);
si0=l4;
si1=l4;
si2=376U;
si1+=si2;
i32_store(&i->m0,(U64)si0+272U,si1);
si0=l4;
si1=l4;
si2=272U;
si1+=si2;
i32_store(&i->m0,(U64)si0+320U,si1);
si0=l4;
si1=248U;
si0+=si1;
si1=l8;
si2=l4;
si3=312U;
si2+=si3;
si3=l7;
si3=i32_load(&i->m0,(U64)si3+36U);
TF(i->t0,si3,void (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+376U);
switch(si0){
case 0:
goto L37;
case 1:
goto L36;
case 2:
goto L35;
default:
goto L38;
}
L38:;
si0=l4;
si1=376U;
si0+=si1;
si1=4U;
si0|=si1;
l6=si0;
goto L34;
L37:;
si0=l4;
si1=376U;
si0+=si1;
si1=4U;
si0|=si1;
l6=si0;
goto L34;
L36:;
si0=l4;
si1=376U;
si0+=si1;
si1=4U;
si0|=si1;
l6=si0;
goto L34;
L35:;
si0=l4;
si1=376U;
si0+=si1;
si1=4U;
si0|=si1;
l6=si0;
L34:;
si0=l6;
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L28;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0+380U);
f15271(i,si0);
L28:;
si0=l4;
si0=i32_load8_u(&i->m0,(U64)si0+248U);
l6=si0;
si1=4U;
si0=si0 != si1;
if(si0){
goto L5;
}
L6:;
si0=l2;
si1=11U;
si2=l3;
si2=i32_load(&i->m0,(U64)si2+40U);
si0=TF(i->t0,si2,U32 (*)(rustpythonInstance*,U32,U32))(i,si0,si1);
l6=si0;
si0=l4;
si1=1U;
i32_store(&i->m0,(U64)si0+276U,si1);
si0=l4;
si1=1088629U;
si2=1088628U;
si3=l6;
si1=si3?si1:si2;
i32_store(&i->m0,(U64)si0+272U,si1);
si0=l4;
si1=324U;
si0+=si1;
sj1=1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=1U;
i32_store(&i->m0,(U64)si0+316U,si1);
si0=l4;
si1=1088568U;
i32_store(&i->m0,(U64)si0+312U,si1);
si0=l4;
si1=66U;
i32_store(&i->m0,(U64)si0+380U,si1);
si0=l4;
si1=l4;
si2=376U;
si1+=si2;
i32_store(&i->m0,(U64)si0+320U,si1);
si0=l4;
si1=l4;
si2=272U;
si1+=si2;
i32_store(&i->m0,(U64)si0+376U,si1);
si0=l4;
si1=288U;
si0+=si1;
si1=l8;
si2=l4;
si3=312U;
si2+=si3;
si3=l7;
si3=i32_load(&i->m0,(U64)si3+36U);
TF(i->t0,si3,void (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
si0=l4;
si0=i32_load8_u(&i->m0,(U64)si0+288U);
l6=si0;
si1=4U;
si0=si0 == si1;
if(si0){
goto L2;
}
si0=l4;
si1=l4;
si1=i32_load(&i->m0,(U64)si1+292U);
i32_store(&i->m0,(U64)si0+219U,si1);
si0=l4;
si1=l4;
si1=i32_load(&i->m0,(U64)si1+289U);
i32_store(&i->m0,(U64)si0+216U,si1);
goto L3;
L5:;
si0=l4;
si1=l4;
si1=i32_load(&i->m0,(U64)si1+252U);
i32_store(&i->m0,(U64)si0+219U,si1);
si0=l4;
si1=l4;
si1=i32_load(&i->m0,(U64)si1+249U);
i32_store(&i->m0,(U64)si0+216U,si1);
goto L3;
L4:;
si0=l1;
si0=i32_load8_u(&i->m0,(U64)si0+19U);
if(si0){
goto L40;
}
si0=l4;
si1=324U;
si0+=si1;
sj1=1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=1U;
i32_store(&i->m0,(U64)si0+316U,si1);
si0=l4;
si1=1088620U;
i32_store(&i->m0,(U64)si0+312U,si1);
si0=l4;
si1=66U;
i32_store(&i->m0,(U64)si0+380U,si1);
si0=l4;
si1=l4;
si2=376U;
si1+=si2;
i32_store(&i->m0,(U64)si0+320U,si1);
si0=l4;
si1=l4;
si2=232U;
si1+=si2;
i32_store(&i->m0,(U64)si0+376U,si1);
si0=l4;
si1=248U;
si0+=si1;
si1=l7;
si2=l4;
si3=312U;
si2+=si3;
si3=l8;
si3=i32_load(&i->m0,(U64)si3+36U);
TF(i->t0,si3,void (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
goto L39;
L40:;
si0=l4;
si1=312U;
si0+=si1;
si1=12U;
si0+=si1;
sj1=1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=1U;
i32_store(&i->m0,(U64)si0+316U,si1);
si0=l4;
si1=1088620U;
i32_store(&i->m0,(U64)si0+312U,si1);
si0=l4;
si1=66U;
i32_store(&i->m0,(U64)si0+380U,si1);
si0=l4;
si1=l4;
si2=376U;
si1+=si2;
i32_store(&i->m0,(U64)si0+320U,si1);
si0=l4;
si1=l4;
si2=232U;
si1+=si2;
i32_store(&i->m0,(U64)si0+376U,si1);
si0=l4;
si1=288U;
si0+=si1;
si1=l4;
si2=312U;
si1+=si2;
f63(i,si0,si1);
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
si1=376U;
si0+=si1;
si1=12U;
si0+=si1;
si1=l4;
si2=296U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1+288U);
i64_store(&i->m0,(U64)si0+380U,sj1);
si0=l4;
si1=2U;
i32_store(&i->m0,(U64)si0+376U,si1);
goto L41;
L43:;
si0=l4;
si1=376U;
si0+=si1;
si1=12U;
si0+=si1;
si1=l4;
si2=296U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1+288U);
i64_store(&i->m0,(U64)si0+380U,sj1);
si0=l4;
si1=2U;
i32_store(&i->m0,(U64)si0+376U,si1);
goto L41;
L42:;
si0=l4;
si1=376U;
si0+=si1;
si1=12U;
si0+=si1;
si1=l4;
si2=296U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1+288U);
i64_store(&i->m0,(U64)si0+380U,sj1);
si0=l4;
si1=3U;
i32_store(&i->m0,(U64)si0+376U,si1);
L41:;
si0=l4;
si1=324U;
si0+=si1;
sj1=1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=179U;
i32_store(&i->m0,(U64)si0+276U,si1);
si0=l4;
si1=1U;
i32_store(&i->m0,(U64)si0+316U,si1);
si0=l4;
si1=1088568U;
i32_store(&i->m0,(U64)si0+312U,si1);
si0=l4;
si1=l4;
si2=376U;
si1+=si2;
i32_store(&i->m0,(U64)si0+272U,si1);
si0=l4;
si1=l4;
si2=272U;
si1+=si2;
i32_store(&i->m0,(U64)si0+320U,si1);
si0=l4;
si1=248U;
si0+=si1;
si1=l7;
si2=l4;
si3=312U;
si2+=si3;
si3=l8;
si3=i32_load(&i->m0,(U64)si3+36U);
TF(i->t0,si3,void (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+376U);
switch(si0){
case 0:
goto L48;
case 1:
goto L47;
case 2:
goto L46;
default:
goto L49;
}
L49:;
si0=l4;
si1=376U;
si0+=si1;
si1=4U;
si0|=si1;
l6=si0;
goto L45;
L48:;
si0=l4;
si1=376U;
si0+=si1;
si1=4U;
si0|=si1;
l6=si0;
goto L45;
L47:;
si0=l4;
si1=376U;
si0+=si1;
si1=4U;
si0|=si1;
l6=si0;
goto L45;
L46:;
si0=l4;
si1=376U;
si0+=si1;
si1=4U;
si0|=si1;
l6=si0;
L45:;
si0=l6;
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L39;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0+380U);
f15271(i,si0);
L39:;
si0=l4;
si0=i32_load8_u(&i->m0,(U64)si0+248U);
l6=si0;
si1=4U;
si0=si0 == si1;
if(si0){
goto L2;
}
si0=l4;
si1=l4;
si1=i32_load(&i->m0,(U64)si1+252U);
i32_store(&i->m0,(U64)si0+219U,si1);
si0=l4;
si1=l4;
si1=i32_load(&i->m0,(U64)si1+249U);
i32_store(&i->m0,(U64)si0+216U,si1);
L3:;
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
L2:;
si0=l4;
si1=l3;
i32_store(&i->m0,(U64)si0+180U,si1);
si0=l4;
si1=l2;
i32_store(&i->m0,(U64)si0+176U,si1);
si0=l3;
l8=si0;
si0=l2;
l7=si0;
si0=l2;
si1=l5;
si0=TF(i->t0,si1,U32 (*)(rustpythonInstance*,U32))(i,si0);
si0=!(si0);
if(si0){
goto L50;
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
goto L55;
}
si0=l2;
si1=l3;
si1=i32_load(&i->m0,(U64)si1+84U);
si0=TF(i->t0,si1,U32 (*)(rustpythonInstance*,U32))(i,si0);
l5=si0;
si1=1114112U;
si0=si0 == si1;
if(si0){
goto L54;
}
L55:;
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
goto L53;
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
si1=376U;
si0+=si1;
si1=4U;
si0|=si1;
l13=si0;
si0=0U;
l6=si0;
si0=1U;
l14=si0;
goto L52;
L54:;
si0=1088630U;
si1=99U;
si2=1088832U;
f703(i,si0,si1,si2);
UNREACHABLE;
L53:;
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
goto L70;
}
si0=l4;
sj0=i64_load(&i->m0,(U64)si0+160U);
l15=sj0;
si0=l4;
si1=376U;
si0+=si1;
si1=4U;
si0|=si1;
l7=si0;
sj0=0ULL;
l16=sj0;
sj0=2ULL;
l17=sj0;
L71:;
{
sj0=l17;
sj1=-1ULL;
sj0+=sj1;
l17=sj0;
sj1=1ULL;
si0=sj0 > sj1;
if(si0){
goto L74;
}
sj0=l17;
si0=(U32)(sj0);
switch(si0){
case 0:
goto L75;
case 1:
goto L76;
default:
goto L75;
}
L76:;
sj0=l16;
sj1=l15;
si0=sj0 >= sj1;
if(si0){
goto L74;
}
sj0=l16;
sj1=1ULL;
sj0+=sj1;
l16=sj0;
L75:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
l5=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si0=l1;
si0=i32_load8_u(&i->m0,(U64)si0+19U);
if(si0){
goto L73;
}
si0=l4;
si1=120U;
si0+=si1;
si1=l4;
si1=i32_load(&i->m0,(U64)si1+176U);
si2=l4;
si2=i32_load(&i->m0,(U64)si2+180U);
si2=i32_load(&i->m0,(U64)si2+16U);
TF(i->t0,si2,void (*)(rustpythonInstance*,U32,U32))(i,si0,si1);
si0=l4;
si1=66U;
i32_store(&i->m0,(U64)si0+292U,si1);
si0=l4;
si1=2U;
i32_store(&i->m0,(U64)si0+316U,si1);
si0=l4;
si1=1088852U;
i32_store(&i->m0,(U64)si0+312U,si1);
si0=l4;
sj1=1ULL;
i64_store(&i->m0,(U64)si0+324U,sj1);
si0=l4;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1+120U);
i64_store(&i->m0,(U64)si0+376U,sj1);
si0=l4;
si1=l4;
si2=376U;
si1+=si2;
i32_store(&i->m0,(U64)si0+288U,si1);
si0=l4;
si1=l4;
si2=288U;
si1+=si2;
i32_store(&i->m0,(U64)si0+320U,si1);
si0=l4;
si1=232U;
si0+=si1;
si1=l6;
si2=l4;
si3=312U;
si2+=si3;
si3=l5;
si3=i32_load(&i->m0,(U64)si3+36U);
TF(i->t0,si3,void (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
goto L72;
L74:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+176U);
si1=1U;
si2=l4;
si2=i32_load(&i->m0,(U64)si2+180U);
si2=i32_load(&i->m0,(U64)si2+40U);
si0=TF(i->t0,si2,U32 (*)(rustpythonInstance*,U32,U32))(i,si0,si1);
si0=!(si0);
if(si0){
goto L51;
}
sj0=l15;
sj1=1ULL;
si0=sj0 != sj1;
if(si0){
goto L51;
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
goto L68;
}
si0=l4;
si1=324U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=1U;
i32_store(&i->m0,(U64)si0+316U,si1);
si0=l4;
si1=1088872U;
i32_store(&i->m0,(U64)si0+312U,si1);
si0=l4;
si1=l4;
si2=288U;
si1+=si2;
i32_store(&i->m0,(U64)si0+320U,si1);
si0=l4;
si1=272U;
si0+=si1;
si1=l6;
si2=l4;
si3=312U;
si2+=si3;
si3=l5;
si3=i32_load(&i->m0,(U64)si3+36U);
TF(i->t0,si3,void (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
goto L56;
L73:;
si0=l4;
si1=128U;
si0+=si1;
si1=l4;
si1=i32_load(&i->m0,(U64)si1+176U);
si2=l4;
si2=i32_load(&i->m0,(U64)si2+180U);
si2=i32_load(&i->m0,(U64)si2+16U);
TF(i->t0,si2,void (*)(rustpythonInstance*,U32,U32))(i,si0,si1);
si0=l4;
si1=66U;
i32_store(&i->m0,(U64)si0+252U,si1);
si0=l4;
si1=2U;
i32_store(&i->m0,(U64)si0+316U,si1);
si0=l4;
si1=1088852U;
i32_store(&i->m0,(U64)si0+312U,si1);
si0=l4;
sj1=1ULL;
i64_store(&i->m0,(U64)si0+324U,sj1);
si0=l4;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1+128U);
i64_store(&i->m0,(U64)si0+272U,sj1);
si0=l4;
si1=l4;
si2=272U;
si1+=si2;
i32_store(&i->m0,(U64)si0+248U,si1);
si0=l4;
si1=l4;
si2=248U;
si1+=si2;
i32_store(&i->m0,(U64)si0+320U,si1);
si0=l4;
si1=288U;
si0+=si1;
si1=l4;
si2=312U;
si1+=si2;
f63(i,si0,si1);
si0=l1;
si0=i32_load8_u(&i->m0,(U64)si0+16U);
switch(si0){
case 0:
goto L80;
case 1:
goto L79;
case 2:
goto L78;
default:
goto L80;
}
L80:;
si0=l7;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1+288U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l7;
si1=8U;
si0+=si1;
si1=l4;
si2=288U;
si1+=si2;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=2U;
i32_store(&i->m0,(U64)si0+376U,si1);
goto L77;
L79:;
si0=l7;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1+288U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l7;
si1=8U;
si0+=si1;
si1=l4;
si2=288U;
si1+=si2;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=2U;
i32_store(&i->m0,(U64)si0+376U,si1);
goto L77;
L78:;
si0=l7;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1+288U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l7;
si1=8U;
si0+=si1;
si1=l4;
si2=288U;
si1+=si2;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=3U;
i32_store(&i->m0,(U64)si0+376U,si1);
L77:;
si0=l4;
si1=179U;
i32_store(&i->m0,(U64)si0+276U,si1);
si0=l4;
si1=1U;
i32_store(&i->m0,(U64)si0+316U,si1);
si0=l4;
si1=1088568U;
i32_store(&i->m0,(U64)si0+312U,si1);
si0=l4;
sj1=1ULL;
i64_store(&i->m0,(U64)si0+324U,sj1);
si0=l4;
si1=l4;
si2=376U;
si1+=si2;
i32_store(&i->m0,(U64)si0+272U,si1);
si0=l4;
si1=l4;
si2=272U;
si1+=si2;
i32_store(&i->m0,(U64)si0+320U,si1);
si0=l4;
si1=232U;
si0+=si1;
si1=l6;
si2=l4;
si3=312U;
si2+=si3;
si3=l5;
si3=i32_load(&i->m0,(U64)si3+36U);
TF(i->t0,si3,void (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+384U);
si0=!(si0);
if(si0){
goto L72;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0+380U);
f15271(i,si0);
L72:;
si0=l4;
sj0=i64_load8_u(&i->m0,(U64)si0+232U);
l17=sj0;
sj1=4ULL;
si0=sj0 != sj1;
if(si0){
goto L69;
}
sj0=0ULL;
l17=sj0;
sj0=l16;
sj1=l15;
si0=sj0 >= sj1;
if(si0){
goto L71;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
l6=si0;
si0=l4;
si1=1U;
i32_store(&i->m0,(U64)si0+316U,si1);
si0=l4;
si1=1088568U;
i32_store(&i->m0,(U64)si0+312U,si1);
si0=l4;
sj1=1ULL;
i64_store(&i->m0,(U64)si0+324U,sj1);
si0=l4;
si1=21U;
i32_store(&i->m0,(U64)si0+380U,si1);
si0=l4;
si1=l4;
si2=376U;
si1+=si2;
i32_store(&i->m0,(U64)si0+320U,si1);
si0=l4;
si1=l4;
si2=216U;
si1+=si2;
i32_store(&i->m0,(U64)si0+376U,si1);
si0=l4;
si1=288U;
si0+=si1;
si1=l5;
si2=l4;
si3=312U;
si2+=si3;
si3=l6;
si3=i32_load(&i->m0,(U64)si3+36U);
TF(i->t0,si3,void (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
si0=l4;
sj0=i64_load8_u(&i->m0,(U64)si0+288U);
l17=sj0;
sj1=4ULL;
si0=sj0 != sj1;
if(si0){
goto L81;
}
sj0=1ULL;
l17=sj0;
sj0=l16;
sj1=1ULL;
sj0+=sj1;
l16=sj0;
goto L71;
L81:;
}
si0=l0;
si1=l4;
sj1=i64_load32_u(&i->m0,(U64)si1+289U);
si2=l4;
sj2=i64_load8_u(&i->m0,(U64)si2+295U);
sj3=48ULL;
sj2<<=(sj3&63);
si3=l4;
sj3=i64_load16_u(&i->m0,(U64)si3+293U);
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
L70:;
si0=l2;
si1=l9;
si0=TF(i->t0,si1,U32 (*)(rustpythonInstance*,U32))(i,si0);
if(si0){
goto L82;
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
goto L67;
}
si0=l4;
si1=324U;
si0+=si1;
sj1=1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=1U;
i32_store(&i->m0,(U64)si0+316U,si1);
si0=l4;
si1=1088568U;
i32_store(&i->m0,(U64)si0+312U,si1);
si0=l4;
si1=180U;
i32_store(&i->m0,(U64)si0+380U,si1);
si0=l4;
si1=l4;
si2=376U;
si1+=si2;
i32_store(&i->m0,(U64)si0+320U,si1);
si0=l4;
si1=l4;
si2=176U;
si1+=si2;
i32_store(&i->m0,(U64)si0+376U,si1);
si0=l4;
si1=248U;
si0+=si1;
si1=l6;
si2=l4;
si3=312U;
si2+=si3;
si3=l5;
si3=i32_load(&i->m0,(U64)si3+36U);
TF(i->t0,si3,void (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
goto L61;
L82:;
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
goto L87;
}
si0=l4;
si1=144U;
si0+=si1;
si1=l2;
si2=l3;
si2=i32_load(&i->m0,(U64)si2+16U);
TF(i->t0,si2,void (*)(rustpythonInstance*,U32,U32))(i,si0,si1);
si0=l4;
si1=312U;
si0+=si1;
si1=12U;
si0+=si1;
sj1=1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=66U;
i32_store(&i->m0,(U64)si0+276U,si1);
si0=l4;
si1=2U;
i32_store(&i->m0,(U64)si0+316U,si1);
si0=l4;
si1=1088852U;
i32_store(&i->m0,(U64)si0+312U,si1);
si0=l4;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1+144U);
i64_store(&i->m0,(U64)si0+376U,sj1);
si0=l4;
si1=l4;
si2=376U;
si1+=si2;
i32_store(&i->m0,(U64)si0+272U,si1);
si0=l4;
si1=l4;
si2=272U;
si1+=si2;
i32_store(&i->m0,(U64)si0+320U,si1);
si0=l4;
si1=288U;
si0+=si1;
si1=l4;
si2=312U;
si1+=si2;
f63(i,si0,si1);
si0=l1;
si0=i32_load8_u(&i->m0,(U64)si0+16U);
switch(si0){
case 0:
goto L86;
case 1:
goto L85;
case 2:
goto L84;
default:
goto L86;
}
L87:;
si0=l4;
si1=136U;
si0+=si1;
si1=l2;
si2=l3;
si2=i32_load(&i->m0,(U64)si2+16U);
TF(i->t0,si2,void (*)(rustpythonInstance*,U32,U32))(i,si0,si1);
si0=l4;
si1=324U;
si0+=si1;
sj1=1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=66U;
i32_store(&i->m0,(U64)si0+292U,si1);
si0=l4;
si1=2U;
i32_store(&i->m0,(U64)si0+316U,si1);
si0=l4;
si1=1088852U;
i32_store(&i->m0,(U64)si0+312U,si1);
si0=l4;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1+136U);
i64_store(&i->m0,(U64)si0+376U,sj1);
si0=l4;
si1=l4;
si2=376U;
si1+=si2;
i32_store(&i->m0,(U64)si0+288U,si1);
si0=l4;
si1=l4;
si2=288U;
si1+=si2;
i32_store(&i->m0,(U64)si0+320U,si1);
si0=l4;
si1=248U;
si0+=si1;
si1=l6;
si2=l4;
si3=312U;
si2+=si3;
si3=l5;
si3=i32_load(&i->m0,(U64)si3+36U);
TF(i->t0,si3,void (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
goto L66;
L86:;
si0=l4;
si1=376U;
si0+=si1;
si1=12U;
si0+=si1;
si1=l4;
si2=296U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1+288U);
i64_store(&i->m0,(U64)si0+380U,sj1);
si0=l4;
si1=2U;
i32_store(&i->m0,(U64)si0+376U,si1);
goto L83;
L85:;
si0=l4;
si1=376U;
si0+=si1;
si1=12U;
si0+=si1;
si1=l4;
si2=296U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1+288U);
i64_store(&i->m0,(U64)si0+380U,sj1);
si0=l4;
si1=2U;
i32_store(&i->m0,(U64)si0+376U,si1);
goto L83;
L84:;
si0=l4;
si1=376U;
si0+=si1;
si1=12U;
si0+=si1;
si1=l4;
si2=296U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1+288U);
i64_store(&i->m0,(U64)si0+380U,sj1);
si0=l4;
si1=3U;
i32_store(&i->m0,(U64)si0+376U,si1);
L83:;
si0=l4;
si1=324U;
si0+=si1;
sj1=1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=179U;
i32_store(&i->m0,(U64)si0+276U,si1);
si0=l4;
si1=1U;
i32_store(&i->m0,(U64)si0+316U,si1);
si0=l4;
si1=1088568U;
i32_store(&i->m0,(U64)si0+312U,si1);
si0=l4;
si1=l4;
si2=376U;
si1+=si2;
i32_store(&i->m0,(U64)si0+272U,si1);
si0=l4;
si1=l4;
si2=272U;
si1+=si2;
i32_store(&i->m0,(U64)si0+320U,si1);
si0=l4;
si1=248U;
si0+=si1;
si1=l6;
si2=l4;
si3=312U;
si2+=si3;
si3=l5;
si3=i32_load(&i->m0,(U64)si3+36U);
TF(i->t0,si3,void (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+376U);
switch(si0){
case 0:
goto L91;
case 1:
goto L90;
case 2:
goto L89;
default:
goto L92;
}
L92:;
si0=l4;
si1=376U;
si0+=si1;
si1=4U;
si0|=si1;
l5=si0;
goto L88;
L91:;
si0=l4;
si1=376U;
si0+=si1;
si1=4U;
si0|=si1;
l5=si0;
goto L88;
L90:;
si0=l4;
si1=376U;
si0+=si1;
si1=4U;
si0|=si1;
l5=si0;
goto L88;
L89:;
si0=l4;
si1=376U;
si0+=si1;
si1=4U;
si0|=si1;
l5=si0;
L88:;
si0=l5;
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L66;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0+380U);
f15271(i,si0);
goto L66;
L69:;
si0=l0;
si1=l4;
sj1=i64_load32_u(&i->m0,(U64)si1+233U);
si2=l4;
sj2=i64_load8_u(&i->m0,(U64)si2+239U);
sj3=48ULL;
sj2<<=(sj3&63);
si3=l4;
sj3=i64_load16_u(&i->m0,(U64)si3+237U);
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
L68:;
si0=l1;
si0=i32_load8_u(&i->m0,(U64)si0+16U);
switch(si0){
case 0:
goto L58;
case 1:
goto L59;
case 2:
goto L60;
default:
goto L58;
}
L67:;
si0=l4;
si1=312U;
si0+=si1;
si1=12U;
si0+=si1;
sj1=1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=1U;
i32_store(&i->m0,(U64)si0+316U,si1);
si0=l4;
si1=1088568U;
i32_store(&i->m0,(U64)si0+312U,si1);
si0=l4;
si1=180U;
i32_store(&i->m0,(U64)si0+380U,si1);
si0=l4;
si1=l4;
si2=376U;
si1+=si2;
i32_store(&i->m0,(U64)si0+320U,si1);
si0=l4;
si1=l4;
si2=176U;
si1+=si2;
i32_store(&i->m0,(U64)si0+376U,si1);
si0=l4;
si1=288U;
si0+=si1;
si1=l4;
si2=312U;
si1+=si2;
f63(i,si0,si1);
si0=l1;
si0=i32_load8_u(&i->m0,(U64)si0+16U);
switch(si0){
case 0:
goto L63;
case 1:
goto L64;
case 2:
goto L65;
default:
goto L63;
}
L66:;
si0=l4;
sj0=i64_load8_u(&i->m0,(U64)si0+248U);
l16=sj0;
sj1=4ULL;
si0=sj0 != sj1;
if(si0){
goto L95;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0+176U);
si1=1U;
si2=l4;
si2=i32_load(&i->m0,(U64)si2+180U);
si2=i32_load(&i->m0,(U64)si2+40U);
si0=TF(i->t0,si2,U32 (*)(rustpythonInstance*,U32,U32))(i,si0,si1);
si0=!(si0);
if(si0){
goto L51;
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
goto L94;
}
si0=l4;
si1=324U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=1U;
i32_store(&i->m0,(U64)si0+316U,si1);
si0=l4;
si1=1088872U;
i32_store(&i->m0,(U64)si0+312U,si1);
si0=l4;
si1=l4;
si2=288U;
si1+=si2;
i32_store(&i->m0,(U64)si0+320U,si1);
si0=l4;
si1=272U;
si0+=si1;
si1=l6;
si2=l4;
si3=312U;
si2+=si3;
si3=l5;
si3=i32_load(&i->m0,(U64)si3+36U);
TF(i->t0,si3,void (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
goto L93;
L95:;
si0=l0;
si1=l4;
sj1=i64_load32_u(&i->m0,(U64)si1+249U);
si2=l4;
sj2=i64_load8_u(&i->m0,(U64)si2+255U);
sj3=48ULL;
sj2<<=(sj3&63);
si3=l4;
sj3=i64_load16_u(&i->m0,(U64)si3+253U);
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
L94:;
si0=l1;
si0=i32_load8_u(&i->m0,(U64)si0+16U);
switch(si0){
case 0:
goto L97;
case 1:
goto L98;
case 2:
goto L99;
default:
goto L97;
}
L99:;
si0=l4;
si1=384U;
si0+=si1;
si1=3U;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=1088868U;
i32_store(&i->m0,(U64)si0+380U,si1);
si0=l4;
si1=3U;
i32_store(&i->m0,(U64)si0+376U,si1);
goto L96;
L98:;
si0=l4;
si1=384U;
si0+=si1;
si1=3U;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=1088868U;
i32_store(&i->m0,(U64)si0+380U,si1);
si0=l4;
si1=2U;
i32_store(&i->m0,(U64)si0+376U,si1);
goto L96;
L97:;
si0=l4;
si1=384U;
si0+=si1;
si1=3U;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=1088868U;
i32_store(&i->m0,(U64)si0+380U,si1);
si0=l4;
si1=2U;
i32_store(&i->m0,(U64)si0+376U,si1);
L96:;
si0=l4;
si1=324U;
si0+=si1;
sj1=1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=178U;
i32_store(&i->m0,(U64)si0+292U,si1);
si0=l4;
si1=1U;
i32_store(&i->m0,(U64)si0+316U,si1);
si0=l4;
si1=1088568U;
i32_store(&i->m0,(U64)si0+312U,si1);
si0=l4;
si1=l4;
si2=376U;
si1+=si2;
i32_store(&i->m0,(U64)si0+288U,si1);
si0=l4;
si1=l4;
si2=288U;
si1+=si2;
i32_store(&i->m0,(U64)si0+320U,si1);
si0=l4;
si1=272U;
si0+=si1;
si1=l6;
si2=l4;
si3=312U;
si2+=si3;
si3=l5;
si3=i32_load(&i->m0,(U64)si3+36U);
TF(i->t0,si3,void (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
L93:;
si0=l4;
sj0=i64_load8_u(&i->m0,(U64)si0+272U);
l16=sj0;
sj1=4ULL;
si0=sj0 == sj1;
if(si0){
goto L51;
}
si0=l0;
si1=l4;
sj1=i64_load32_u(&i->m0,(U64)si1+273U);
si2=l4;
sj2=i64_load8_u(&i->m0,(U64)si2+279U);
sj3=48ULL;
sj2<<=(sj3&63);
si3=l4;
sj3=i64_load16_u(&i->m0,(U64)si3+277U);
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
L65:;
si0=l4;
si1=376U;
si0+=si1;
si1=12U;
si0+=si1;
si1=l4;
si2=296U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1+288U);
i64_store(&i->m0,(U64)si0+380U,sj1);
si0=l4;
si1=3U;
i32_store(&i->m0,(U64)si0+376U,si1);
goto L62;
L64:;
si0=l4;
si1=376U;
si0+=si1;
si1=12U;
si0+=si1;
si1=l4;
si2=296U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1+288U);
i64_store(&i->m0,(U64)si0+380U,sj1);
si0=l4;
si1=2U;
i32_store(&i->m0,(U64)si0+376U,si1);
goto L62;
L63:;
si0=l4;
si1=376U;
si0+=si1;
si1=12U;
si0+=si1;
si1=l4;
si2=296U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1+288U);
i64_store(&i->m0,(U64)si0+380U,sj1);
si0=l4;
si1=2U;
i32_store(&i->m0,(U64)si0+376U,si1);
L62:;
si0=l4;
si1=324U;
si0+=si1;
sj1=1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=179U;
i32_store(&i->m0,(U64)si0+276U,si1);
si0=l4;
si1=1U;
i32_store(&i->m0,(U64)si0+316U,si1);
si0=l4;
si1=1088568U;
i32_store(&i->m0,(U64)si0+312U,si1);
si0=l4;
si1=l4;
si2=376U;
si1+=si2;
i32_store(&i->m0,(U64)si0+272U,si1);
si0=l4;
si1=l4;
si2=272U;
si1+=si2;
i32_store(&i->m0,(U64)si0+320U,si1);
si0=l4;
si1=248U;
si0+=si1;
si1=l6;
si2=l4;
si3=312U;
si2+=si3;
si3=l5;
si3=i32_load(&i->m0,(U64)si3+36U);
TF(i->t0,si3,void (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+376U);
switch(si0){
case 0:
goto L103;
case 1:
goto L102;
case 2:
goto L101;
default:
goto L104;
}
L104:;
si0=l4;
si1=376U;
si0+=si1;
si1=4U;
si0|=si1;
l5=si0;
goto L100;
L103:;
si0=l4;
si1=376U;
si0+=si1;
si1=4U;
si0|=si1;
l5=si0;
goto L100;
L102:;
si0=l4;
si1=376U;
si0+=si1;
si1=4U;
si0|=si1;
l5=si0;
goto L100;
L101:;
si0=l4;
si1=376U;
si0+=si1;
si1=4U;
si0|=si1;
l5=si0;
L100:;
si0=l5;
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L61;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0+380U);
f15271(i,si0);
L61:;
si0=l4;
sj0=i64_load8_u(&i->m0,(U64)si0+248U);
l16=sj0;
sj1=4ULL;
si0=sj0 == sj1;
if(si0){
goto L51;
}
si0=l0;
si1=l4;
sj1=i64_load32_u(&i->m0,(U64)si1+249U);
si2=l4;
sj2=i64_load8_u(&i->m0,(U64)si2+255U);
sj3=48ULL;
sj2<<=(sj3&63);
si3=l4;
sj3=i64_load16_u(&i->m0,(U64)si3+253U);
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
L60:;
si0=l4;
si1=384U;
si0+=si1;
si1=3U;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=1088868U;
i32_store(&i->m0,(U64)si0+380U,si1);
si0=l4;
si1=3U;
i32_store(&i->m0,(U64)si0+376U,si1);
goto L57;
L59:;
si0=l4;
si1=384U;
si0+=si1;
si1=3U;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=1088868U;
i32_store(&i->m0,(U64)si0+380U,si1);
si0=l4;
si1=2U;
i32_store(&i->m0,(U64)si0+376U,si1);
goto L57;
L58:;
si0=l4;
si1=384U;
si0+=si1;
si1=3U;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=1088868U;
i32_store(&i->m0,(U64)si0+380U,si1);
si0=l4;
si1=2U;
i32_store(&i->m0,(U64)si0+376U,si1);
L57:;
si0=l4;
si1=324U;
si0+=si1;
sj1=1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=178U;
i32_store(&i->m0,(U64)si0+292U,si1);
si0=l4;
si1=1U;
i32_store(&i->m0,(U64)si0+316U,si1);
si0=l4;
si1=1088568U;
i32_store(&i->m0,(U64)si0+312U,si1);
si0=l4;
si1=l4;
si2=376U;
si1+=si2;
i32_store(&i->m0,(U64)si0+288U,si1);
si0=l4;
si1=l4;
si2=288U;
si1+=si2;
i32_store(&i->m0,(U64)si0+320U,si1);
si0=l4;
si1=272U;
si0+=si1;
si1=l6;
si2=l4;
si3=312U;
si2+=si3;
si3=l5;
si3=i32_load(&i->m0,(U64)si3+36U);
TF(i->t0,si3,void (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
L56:;
si0=l4;
sj0=i64_load8_u(&i->m0,(U64)si0+272U);
l16=sj0;
sj1=4ULL;
si0=sj0 == sj1;
if(si0){
goto L51;
}
si0=l0;
si1=l4;
sj1=i64_load32_u(&i->m0,(U64)si1+273U);
si2=l4;
sj2=i64_load8_u(&i->m0,(U64)si2+279U);
sj3=48ULL;
sj2<<=(sj3&63);
si3=l4;
sj3=i64_load16_u(&i->m0,(U64)si3+277U);
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
L52:;
L106:;
{
si0=l14;
si1=1U;
si0&=si1;
si0=!(si0);
if(si0){
goto L108;
}
si0=l6;
si1=l12;
si0=si0 >= si1;
if(si0){
goto L105;
}
L110:;
{
si0=l7;
l8=si0;
si0=l5;
si1=l7;
si0=si0 == si1;
if(si0){
goto L111;
}
si0=l5;
si1=8U;
si0+=si1;
l8=si0;
si0=l5;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L109;
}
L111:;
si0=l8;
l5=si0;
si0=l12;
si1=l6;
si2=1U;
si1+=si2;
l6=si1;
si0=si0 != si1;
if(si0){
goto L110;
}
goto L105;
}
L109:;
si0=l6;
si1=1U;
si0+=si1;
l6=si0;
si0=l5;
l10=si0;
si0=l8;
l5=si0;
goto L107;
L108:;
si0=l10;
si0=!(si0);
if(si0){
goto L105;
}
L107:;
si0=l4;
si1=l10;
i32_store(&i->m0,(U64)si0+232U,si1);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
l8=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l10=si0;
si0=l1;
si0=i32_load8_u(&i->m0,(U64)si0+19U);
if(si0){
goto L113;
}
si0=l4;
si1=2U;
i32_store(&i->m0,(U64)si0+316U,si1);
si0=l4;
si1=1088852U;
i32_store(&i->m0,(U64)si0+312U,si1);
si0=l4;
sj1=1ULL;
i64_store(&i->m0,(U64)si0+324U,sj1);
si0=l4;
si1=165U;
i32_store(&i->m0,(U64)si0+380U,si1);
si0=l4;
si1=l4;
si2=376U;
si1+=si2;
i32_store(&i->m0,(U64)si0+320U,si1);
si0=l4;
si1=l4;
si2=232U;
si1+=si2;
i32_store(&i->m0,(U64)si0+376U,si1);
si0=l4;
si1=248U;
si0+=si1;
si1=l10;
si2=l4;
si3=312U;
si2+=si3;
si3=l8;
si3=i32_load(&i->m0,(U64)si3+36U);
TF(i->t0,si3,void (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
goto L112;
L113:;
si0=l4;
si1=2U;
i32_store(&i->m0,(U64)si0+316U,si1);
si0=l4;
si1=1088852U;
i32_store(&i->m0,(U64)si0+312U,si1);
si0=l4;
sj1=1ULL;
i64_store(&i->m0,(U64)si0+324U,sj1);
si0=l4;
si1=165U;
i32_store(&i->m0,(U64)si0+276U,si1);
si0=l4;
si1=l4;
si2=272U;
si1+=si2;
i32_store(&i->m0,(U64)si0+320U,si1);
si0=l4;
si1=l4;
si2=232U;
si1+=si2;
i32_store(&i->m0,(U64)si0+272U,si1);
si0=l4;
si1=288U;
si0+=si1;
si1=l4;
si2=312U;
si1+=si2;
f63(i,si0,si1);
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
si0=l13;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1+288U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l13;
si1=8U;
si0+=si1;
si1=l4;
si2=288U;
si1+=si2;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=3U;
i32_store(&i->m0,(U64)si0+376U,si1);
goto L114;
L116:;
si0=l13;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1+288U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l13;
si1=8U;
si0+=si1;
si1=l4;
si2=288U;
si1+=si2;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=2U;
i32_store(&i->m0,(U64)si0+376U,si1);
goto L114;
L115:;
si0=l13;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1+288U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l13;
si1=8U;
si0+=si1;
si1=l4;
si2=288U;
si1+=si2;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=2U;
i32_store(&i->m0,(U64)si0+376U,si1);
L114:;
si0=l4;
si1=179U;
i32_store(&i->m0,(U64)si0+276U,si1);
si0=l4;
si1=1U;
i32_store(&i->m0,(U64)si0+316U,si1);
si0=l4;
si1=1088568U;
i32_store(&i->m0,(U64)si0+312U,si1);
si0=l4;
sj1=1ULL;
i64_store(&i->m0,(U64)si0+324U,sj1);
si0=l4;
si1=l4;
si2=376U;
si1+=si2;
i32_store(&i->m0,(U64)si0+272U,si1);
si0=l4;
si1=l4;
si2=272U;
si1+=si2;
i32_store(&i->m0,(U64)si0+320U,si1);
si0=l4;
si1=248U;
si0+=si1;
si1=l10;
si2=l4;
si3=312U;
si2+=si3;
si3=l8;
si3=i32_load(&i->m0,(U64)si3+36U);
TF(i->t0,si3,void (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+384U);
si0=!(si0);
if(si0){
goto L112;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0+380U);
f15271(i,si0);
L112:;
si0=l4;
sj0=i64_load8_u(&i->m0,(U64)si0+248U);
l16=sj0;
sj1=4ULL;
si0=sj0 != sj1;
if(si0){
goto L119;
}
si0=0U;
l14=si0;
si0=l6;
si1=l12;
si0=si0 < si1;
if(si0){
goto L120;
}
si0=0U;
l10=si0;
goto L106;
L120:;
si0=l5;
l10=si0;
L121:;
{
si0=l7;
l8=si0;
si0=l10;
si1=l7;
si0=si0 == si1;
if(si0){
goto L122;
}
si0=l10;
si1=8U;
si0+=si1;
l5=si0;
si0=l10;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L118;
}
si0=l5;
l8=si0;
L122:;
si0=l8;
l10=si0;
si0=l12;
si1=l6;
si2=1U;
si1+=si2;
l6=si1;
si0=si0 != si1;
if(si0){
goto L121;
}
}
si0=0U;
l10=si0;
si0=l12;
l6=si0;
goto L106;
L119:;
si0=l0;
si1=l4;
sj1=i64_load32_u(&i->m0,(U64)si1+249U);
si2=l4;
sj2=i64_load8_u(&i->m0,(U64)si2+255U);
sj3=48ULL;
sj2<<=(sj3&63);
si3=l4;
sj3=i64_load16_u(&i->m0,(U64)si3+253U);
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
L118:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l8=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
l18=si0;
si0=l4;
si1=1U;
i32_store(&i->m0,(U64)si0+316U,si1);
si0=l4;
si1=1088568U;
i32_store(&i->m0,(U64)si0+312U,si1);
si0=l4;
sj1=1ULL;
i64_store(&i->m0,(U64)si0+324U,sj1);
si0=l4;
si1=21U;
i32_store(&i->m0,(U64)si0+380U,si1);
si0=l4;
si1=l4;
si2=376U;
si1+=si2;
i32_store(&i->m0,(U64)si0+320U,si1);
si0=l4;
si1=l4;
si2=216U;
si1+=si2;
i32_store(&i->m0,(U64)si0+376U,si1);
si0=l4;
si1=288U;
si0+=si1;
si1=l8;
si2=l4;
si3=312U;
si2+=si3;
si3=l18;
si3=i32_load(&i->m0,(U64)si3+36U);
TF(i->t0,si3,void (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
si0=l4;
sj0=i64_load8_u(&i->m0,(U64)si0+288U);
l16=sj0;
sj1=4ULL;
si0=sj0 != sj1;
if(si0){
goto L123;
}
si0=l6;
si1=1U;
si0+=si1;
l6=si0;
goto L106;
L123:;
}
si0=l0;
si1=l4;
sj1=i64_load32_u(&i->m0,(U64)si1+289U);
si2=l4;
sj2=i64_load8_u(&i->m0,(U64)si2+295U);
sj3=48ULL;
sj2<<=(sj3&63);
si3=l4;
sj3=i64_load16_u(&i->m0,(U64)si3+293U);
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
L105:;
si0=l11;
si0=i32_load(&i->m0,(U64)si0+12U);
l5=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+176U);
si1=1U;
si2=l4;
si2=i32_load(&i->m0,(U64)si2+180U);
si2=i32_load(&i->m0,(U64)si2+40U);
si0=TF(i->t0,si2,U32 (*)(rustpythonInstance*,U32,U32))(i,si0,si1);
l6=si0;
si0=l5;
si1=1U;
si0=si0 != si1;
if(si0){
goto L51;
}
si0=l6;
si0=!(si0);
if(si0){
goto L51;
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
goto L125;
}
si0=l4;
si1=324U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=1U;
i32_store(&i->m0,(U64)si0+316U,si1);
si0=l4;
si1=1088872U;
i32_store(&i->m0,(U64)si0+312U,si1);
si0=l4;
si1=l4;
si2=288U;
si1+=si2;
i32_store(&i->m0,(U64)si0+320U,si1);
si0=l4;
si1=272U;
si0+=si1;
si1=l6;
si2=l4;
si3=312U;
si2+=si3;
si3=l5;
si3=i32_load(&i->m0,(U64)si3+36U);
TF(i->t0,si3,void (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
goto L124;
L125:;
si0=l1;
si0=i32_load8_u(&i->m0,(U64)si0+16U);
switch(si0){
case 0:
goto L127;
case 1:
goto L128;
case 2:
goto L129;
default:
goto L127;
}
L129:;
si0=l4;
si1=384U;
si0+=si1;
si1=3U;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=1088868U;
i32_store(&i->m0,(U64)si0+380U,si1);
si0=l4;
si1=3U;
i32_store(&i->m0,(U64)si0+376U,si1);
goto L126;
L128:;
si0=l4;
si1=384U;
si0+=si1;
si1=3U;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=1088868U;
i32_store(&i->m0,(U64)si0+380U,si1);
si0=l4;
si1=2U;
i32_store(&i->m0,(U64)si0+376U,si1);
goto L126;
L127:;
si0=l4;
si1=384U;
si0+=si1;
si1=3U;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=1088868U;
i32_store(&i->m0,(U64)si0+380U,si1);
si0=l4;
si1=2U;
i32_store(&i->m0,(U64)si0+376U,si1);
L126:;
si0=l4;
si1=324U;
si0+=si1;
sj1=1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=178U;
i32_store(&i->m0,(U64)si0+292U,si1);
si0=l4;
si1=1U;
i32_store(&i->m0,(U64)si0+316U,si1);
si0=l4;
si1=1088568U;
i32_store(&i->m0,(U64)si0+312U,si1);
si0=l4;
si1=l4;
si2=376U;
si1+=si2;
i32_store(&i->m0,(U64)si0+288U,si1);
si0=l4;
si1=l4;
si2=288U;
si1+=si2;
i32_store(&i->m0,(U64)si0+320U,si1);
si0=l4;
si1=272U;
si0+=si1;
si1=l6;
si2=l4;
si3=312U;
si2+=si3;
si3=l5;
si3=i32_load(&i->m0,(U64)si3+36U);
TF(i->t0,si3,void (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
L124:;
si0=l4;
sj0=i64_load8_u(&i->m0,(U64)si0+272U);
l16=sj0;
sj1=4ULL;
si0=sj0 == sj1;
if(si0){
goto L51;
}
si0=l0;
si1=l4;
sj1=i64_load32_u(&i->m0,(U64)si1+273U);
si2=l4;
sj2=i64_load8_u(&i->m0,(U64)si2+279U);
sj3=48ULL;
sj2<<=(sj3&63);
si3=l4;
sj3=i64_load16_u(&i->m0,(U64)si3+277U);
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
L51:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+180U);
l8=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+176U);
l7=si0;
L50:;
si0=l4;
si1=l1;
i32_store(&i->m0,(U64)si0+196U,si1);
si0=l4;
si1=0U;
i32_store(&i->m0,(U64)si0+208U,si1);
si0=l4;
sj1=4ULL;
i64_store(&i->m0,(U64)si0+200U,sj1);
si0=l4;
si1=232U;
si0+=si1;
si1=l7;
si2=l8;
si2=i32_load(&i->m0,(U64)si2+112U);
TF(i->t0,si2,void (*)(rustpythonInstance*,U32,U32))(i,si0,si1);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+232U);
l5=si0;
if(si0){
goto L131;
}
si0=l8;
si0=i32_load(&i->m0,(U64)si0+40U);
l12=si0;
goto L130;
L131:;
si0=l7;
si1=15U;
si2=l8;
si2=i32_load(&i->m0,(U64)si2+40U);
l12=si2;
si0=TF(i->t0,si2,U32 (*)(rustpythonInstance*,U32,U32))(i,si0,si1);
if(si0){
goto L133;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0+240U);
l6=si0;
if(si0){
goto L135;
}
si0=l4;
si1=0U;
i32_store(&i->m0,(U64)si0+384U,si1);
si0=l4;
si1=1087952U;
i32_store(&i->m0,(U64)si0+380U,si1);
si0=l4;
si1=0U;
i32_store(&i->m0,(U64)si0+376U,si1);
goto L134;
L135:;
si0=l4;
si1=376U;
si0+=si1;
si1=l6;
si1=i32_load(&i->m0,(U64)si1);
si2=l6;
si3=8U;
si2+=si3;
si2=i32_load(&i->m0,(U64)si2);
f62(i,si0,si1,si2);
L134:;
si0=l4;
si1=324U;
si0+=si1;
sj1=1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=164U;
i32_store(&i->m0,(U64)si0+276U,si1);
si0=l4;
si1=1U;
i32_store(&i->m0,(U64)si0+316U,si1);
si0=l4;
si1=1088940U;
i32_store(&i->m0,(U64)si0+312U,si1);
si0=l4;
si1=l4;
si2=376U;
si1+=si2;
i32_store(&i->m0,(U64)si0+272U,si1);
si0=l4;
si1=l4;
si2=272U;
si1+=si2;
i32_store(&i->m0,(U64)si0+320U,si1);
si0=l4;
si1=288U;
si0+=si1;
si1=l4;
si2=312U;
si1+=si2;
f63(i,si0,si1);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+376U);
l6=si0;
si0=!(si0);
if(si0){
goto L136;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0+380U);
si0=!(si0);
if(si0){
goto L136;
}
si0=l6;
f15271(i,si0);
L136:;
si0=l4;
si1=248U;
si0+=si1;
si1=8U;
si0+=si1;
si1=l4;
si2=288U;
si1+=si2;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1+288U);
i64_store(&i->m0,(U64)si0+248U,sj1);
goto L132;
L133:;
si0=l4;
si1=0U;
i32_store(&i->m0,(U64)si0+256U,si1);
si0=l4;
sj1=1ULL;
i64_store(&i->m0,(U64)si0+248U,sj1);
L132:;
si0=l4;
si1=288U;
si0+=si1;
si1=l5;
si2=l4;
si2=i32_load(&i->m0,(U64)si2+236U);
f62(i,si0,si1,si2);
si0=l4;
si1=376U;
si0+=si1;
si1=12U;
si0+=si1;
si1=177U;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=312U;
si0+=si1;
si1=12U;
si0+=si1;
sj1=2ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=164U;
i32_store(&i->m0,(U64)si0+380U,si1);
si0=l4;
si1=3U;
i32_store(&i->m0,(U64)si0+316U,si1);
si0=l4;
si1=1088956U;
i32_store(&i->m0,(U64)si0+312U,si1);
si0=l4;
si1=l4;
si2=248U;
si1+=si2;
i32_store(&i->m0,(U64)si0+384U,si1);
si0=l4;
si1=l4;
si2=288U;
si1+=si2;
i32_store(&i->m0,(U64)si0+376U,si1);
si0=l4;
si1=l4;
si2=376U;
si1+=si2;
i32_store(&i->m0,(U64)si0+320U,si1);
si0=l4;
si1=272U;
si0+=si1;
si1=l4;
si2=312U;
si1+=si2;
f63(i,si0,si1);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+288U);
l5=si0;
si0=!(si0);
if(si0){
goto L137;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0+292U);
si0=!(si0);
if(si0){
goto L137;
}
si0=l5;
f15271(i,si0);
L137:;
si0=l4;
si1=216U;
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
i64_store(&i->m0,(U64)si0+216U,sj1);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+208U);
l5=si0;
si1=l4;
si1=i32_load(&i->m0,(U64)si1+204U);
si0=si0 != si1;
if(si0){
goto L138;
}
si0=l4;
si1=200U;
si0+=si1;
si1=l5;
f567(i,si0,si1);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+208U);
l5=si0;
L138:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+200U);
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
si1=i32_load(&i->m0,(U64)si1+208U);
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0+208U,si1);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+252U);
si0=!(si0);
if(si0){
goto L130;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0+248U);
f15271(i,si0);
L130:;
si0=l7;
si1=13U;
si2=l12;
si0=TF(i->t0,si2,U32 (*)(rustpythonInstance*,U32,U32))(i,si0,si1);
if(si0){
goto L139;
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
goto L139;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0+116U);
l6=si0;
si0=l1;
si0=i32_load8_u(&i->m0,(U64)si0+19U);
if(si0){
goto L141;
}
si0=l4;
si1=376U;
si0+=si1;
si1=4U;
si0|=si1;
si1=l5;
si2=l6;
f62(i,si0,si1,si2);
si0=l4;
si1=3U;
i32_store(&i->m0,(U64)si0+376U,si1);
goto L140;
L141:;
si0=l4;
si1=312U;
si0+=si1;
si1=l5;
si2=l6;
f62(i,si0,si1,si2);
si0=l1;
si0=i32_load8_u(&i->m0,(U64)si0+16U);
switch(si0){
case 0:
goto L142;
case 1:
goto L143;
case 2:
goto L144;
default:
goto L142;
}
L144:;
si0=l4;
si1=388U;
si0+=si1;
si1=l4;
si2=320U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1+312U);
i64_store(&i->m0,(U64)si0+380U,sj1);
si0=l4;
si1=3U;
i32_store(&i->m0,(U64)si0+376U,si1);
goto L140;
L143:;
si0=l4;
si1=388U;
si0+=si1;
si1=l4;
si2=320U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1+312U);
i64_store(&i->m0,(U64)si0+380U,sj1);
si0=l4;
si1=2U;
i32_store(&i->m0,(U64)si0+376U,si1);
goto L140;
L142:;
si0=l4;
si1=388U;
si0+=si1;
si1=l4;
si2=320U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1+312U);
i64_store(&i->m0,(U64)si0+380U,sj1);
si0=l4;
si1=2U;
i32_store(&i->m0,(U64)si0+376U,si1);
L140:;
si0=l4;
si1=324U;
si0+=si1;
sj1=1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=181U;
i32_store(&i->m0,(U64)si0+276U,si1);
si0=l4;
si1=1088992U;
i32_store(&i->m0,(U64)si0+312U,si1);
si0=l4;
si1=l4;
si2=376U;
si1+=si2;
i32_store(&i->m0,(U64)si0+272U,si1);
si0=l4;
si1=l4;
si2=272U;
si1+=si2;
i32_store(&i->m0,(U64)si0+320U,si1);
si0=l4;
si1=2U;
i32_store(&i->m0,(U64)si0+316U,si1);
si0=l4;
si1=288U;
si0+=si1;
si1=l4;
si2=312U;
si1+=si2;
f63(i,si0,si1);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+376U);
switch(si0){
case 0:
goto L149;
case 1:
goto L148;
case 2:
goto L147;
default:
goto L150;
}
L150:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+380U);
l5=si0;
si0=!(si0);
if(si0){
goto L145;
}
si0=l4;
si1=376U;
si0+=si1;
si1=4U;
si0|=si1;
l6=si0;
goto L146;
L149:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+380U);
l5=si0;
si0=!(si0);
if(si0){
goto L145;
}
si0=l4;
si1=376U;
si0+=si1;
si1=4U;
si0|=si1;
l6=si0;
goto L146;
L148:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+380U);
l5=si0;
si0=!(si0);
if(si0){
goto L145;
}
si0=l4;
si1=376U;
si0+=si1;
si1=4U;
si0|=si1;
l6=si0;
goto L146;
L147:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+380U);
l5=si0;
si0=!(si0);
if(si0){
goto L145;
}
si0=l4;
si1=376U;
si0+=si1;
si1=4U;
si0|=si1;
l6=si0;
L146:;
si0=l6;
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L145;
}
si0=l5;
f15271(i,si0);
L145:;
si0=l4;
si1=312U;
si0+=si1;
si1=8U;
si0+=si1;
l6=si0;
si1=l4;
si2=288U;
si1+=si2;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1+288U);
i64_store(&i->m0,(U64)si0+312U,sj1);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+208U);
l5=si0;
si1=l4;
si1=i32_load(&i->m0,(U64)si1+204U);
si0=si0 != si1;
if(si0){
goto L151;
}
si0=l4;
si1=200U;
si0+=si1;
si1=l5;
f567(i,si0,si1);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+208U);
l5=si0;
L151:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+200U);
si1=l5;
si2=12U;
si1*=si2;
si0+=si1;
l5=si0;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1+312U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=8U;
si0+=si1;
si1=l6;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=l4;
si1=i32_load(&i->m0,(U64)si1+208U);
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0+208U,si1);
L139:;
si0=l4;
si1=272U;
si0+=si1;
si1=l7;
si2=l8;
si2=i32_load(&i->m0,(U64)si2+24U);
TF(i->t0,si2,void (*)(rustpythonInstance*,U32,U32))(i,si0,si1);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+272U);
l10=si0;
si0=!(si0);
if(si0){
goto L152;
}
si0=l1;
si0=i32_load8_u(&i->m0,(U64)si0+19U);
if(si0){
goto L154;
}
si0=l4;
si1=376U;
si0+=si1;
si1=l10;
si2=l4;
si2=i32_load(&i->m0,(U64)si2+280U);
si3=1088604U;
si4=2U;
f466(i,si0,si1,si2,si3,si4);
goto L153;
L154:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+280U);
l5=si0;
si0=l4;
si1=l10;
i32_store(&i->m0,(U64)si0+232U,si1);
si0=l4;
si1=l10;
si2=l5;
si3=3U;
si2<<=(si3&31);
si1+=si2;
i32_store(&i->m0,(U64)si0+236U,si1);
si0=l4;
si1=l4;
si2=196U;
si1+=si2;
i32_store(&i->m0,(U64)si0+240U,si1);
si0=l4;
si1=312U;
si0+=si1;
si1=l4;
si2=232U;
si1+=si2;
f309(i,si0,si1);
si0=l4;
si1=376U;
si0+=si1;
si1=l4;
si1=i32_load(&i->m0,(U64)si1+312U);
l14=si1;
si2=l4;
si2=i32_load(&i->m0,(U64)si2+320U);
l6=si2;
si3=1088604U;
si4=2U;
f467(i,si0,si1,si2,si3,si4);
si0=l6;
si0=!(si0);
if(si0){
goto L155;
}
si0=l14;
l5=si0;
L156:;
{
si0=l5;
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L157;
}
si0=l5;
si0=i32_load(&i->m0,(U64)si0);
f15271(i,si0);
L157:;
si0=l5;
si1=12U;
si0+=si1;
l5=si0;
si0=l6;
si1=-1U;
si0+=si1;
l6=si0;
if(si0){
goto L156;
}
}
L155:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+316U);
si0=!(si0);
if(si0){
goto L153;
}
si0=l14;
f15271(i,si0);
L153:;
si0=l4;
si1=324U;
si0+=si1;
sj1=1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=177U;
i32_store(&i->m0,(U64)si0+252U,si1);
si0=l4;
si1=2U;
i32_store(&i->m0,(U64)si0+316U,si1);
si0=l4;
si1=1089020U;
i32_store(&i->m0,(U64)si0+312U,si1);
si0=l4;
si1=l4;
si2=376U;
si1+=si2;
i32_store(&i->m0,(U64)si0+248U,si1);
si0=l4;
si1=l4;
si2=248U;
si1+=si2;
i32_store(&i->m0,(U64)si0+320U,si1);
si0=l4;
si1=288U;
si0+=si1;
si1=l4;
si2=312U;
si1+=si2;
f63(i,si0,si1);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+380U);
si0=!(si0);
if(si0){
goto L158;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0+376U);
f15271(i,si0);
L158:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+208U);
l5=si0;
si1=l4;
si1=i32_load(&i->m0,(U64)si1+204U);
si0=si0 != si1;
if(si0){
goto L159;
}
si0=l4;
si1=200U;
si0+=si1;
si1=l5;
f567(i,si0,si1);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+208U);
l5=si0;
L159:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+200U);
si1=l5;
si2=12U;
si1*=si2;
si0+=si1;
l5=si0;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1+288U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=8U;
si0+=si1;
si1=l4;
si2=288U;
si1+=si2;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=l4;
si1=i32_load(&i->m0,(U64)si1+208U);
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0+208U,si1);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+276U);
si0=!(si0);
if(si0){
goto L152;
}
si0=l10;
f15271(i,si0);
L152:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+196U);
si0=i32_load8_u(&i->m0,(U64)si0+18U);
if(si0){
goto L160;
}
si0=l7;
si1=9U;
si2=l12;
si0=TF(i->t0,si2,U32 (*)(rustpythonInstance*,U32,U32))(i,si0,si1);
if(si0){
goto L160;
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
goto L160;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0+108U);
l6=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+196U);
si0=i32_load8_u(&i->m0,(U64)si0+19U);
if(si0){
goto L162;
}
si0=l4;
si1=376U;
si0+=si1;
si1=l5;
si2=l6;
si3=1088604U;
si4=2U;
f466(i,si0,si1,si2,si3,si4);
si0=l4;
si1=324U;
si0+=si1;
sj1=1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=177U;
i32_store(&i->m0,(U64)si0+292U,si1);
si0=l4;
si1=2U;
i32_store(&i->m0,(U64)si0+316U,si1);
si0=l4;
si1=1089056U;
i32_store(&i->m0,(U64)si0+312U,si1);
si0=l4;
si1=l4;
si2=376U;
si1+=si2;
i32_store(&i->m0,(U64)si0+288U,si1);
si0=l4;
si1=l4;
si2=288U;
si1+=si2;
i32_store(&i->m0,(U64)si0+320U,si1);
si0=l4;
si1=248U;
si0+=si1;
si1=l4;
si2=312U;
si1+=si2;
f63(i,si0,si1);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+380U);
si0=!(si0);
if(si0){
goto L161;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0+376U);
f15271(i,si0);
goto L161;
L162:;
si0=l4;
si1=l5;
i32_store(&i->m0,(U64)si0+376U,si1);
si0=l4;
si1=l5;
si2=l6;
si3=3U;
si2<<=(si3&31);
si1+=si2;
i32_store(&i->m0,(U64)si0+380U,si1);
si0=l4;
si1=l4;
si2=196U;
si1+=si2;
i32_store(&i->m0,(U64)si0+384U,si1);
si0=l4;
si1=288U;
si0+=si1;
si1=l4;
si2=376U;
si1+=si2;
f309(i,si0,si1);
si0=l4;
si1=272U;
si0+=si1;
si1=l4;
si1=i32_load(&i->m0,(U64)si1+288U);
l5=si1;
si2=l4;
si2=i32_load(&i->m0,(U64)si2+296U);
si3=1088604U;
si4=2U;
f467(i,si0,si1,si2,si3,si4);
si0=l4;
si1=324U;
si0+=si1;
sj1=1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=177U;
i32_store(&i->m0,(U64)si0+268U,si1);
si0=l4;
si1=2U;
i32_store(&i->m0,(U64)si0+316U,si1);
si0=l4;
si1=1089056U;
i32_store(&i->m0,(U64)si0+312U,si1);
si0=l4;
si1=l4;
si2=272U;
si1+=si2;
i32_store(&i->m0,(U64)si0+264U,si1);
si0=l4;
si1=l4;
si2=264U;
si1+=si2;
i32_store(&i->m0,(U64)si0+320U,si1);
si0=l4;
si1=248U;
si0+=si1;
si1=l4;
si2=312U;
si1+=si2;
f63(i,si0,si1);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+276U);
si0=!(si0);
if(si0){
goto L163;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0+272U);
f15271(i,si0);
L163:;
si0=l4;
si1=288U;
si0+=si1;
f301(i,si0);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+292U);
si0=!(si0);
if(si0){
goto L161;
}
si0=l5;
f15271(i,si0);
L161:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+208U);
l5=si0;
si1=l4;
si1=i32_load(&i->m0,(U64)si1+204U);
si0=si0 != si1;
if(si0){
goto L164;
}
si0=l4;
si1=200U;
si0+=si1;
si1=l5;
f567(i,si0,si1);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+208U);
l5=si0;
L164:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+200U);
si1=l5;
si2=12U;
si1*=si2;
si0+=si1;
l5=si0;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1+248U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=8U;
si0+=si1;
si1=l4;
si2=248U;
si1+=si2;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=l4;
si1=i32_load(&i->m0,(U64)si1+208U);
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0+208U,si1);
L160:;
si0=l4;
si1=184U;
si0+=si1;
si1=l4;
si1=i32_load(&i->m0,(U64)si1+200U);
si2=l4;
si2=i32_load(&i->m0,(U64)si2+208U);
si3=1088628U;
si4=1U;
f467(i,si0,si1,si2,si3,si4);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+208U);
l6=si0;
si0=!(si0);
if(si0){
goto L165;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0+200U);
l5=si0;
L166:;
{
si0=l5;
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L167;
}
si0=l5;
si0=i32_load(&i->m0,(U64)si0);
f15271(i,si0);
L167:;
si0=l5;
si1=12U;
si0+=si1;
l5=si0;
si0=l6;
si1=-1U;
si0+=si1;
l6=si0;
if(si0){
goto L166;
}
}
L165:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+204U);
si0=!(si0);
if(si0){
goto L168;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0+200U);
f15271(i,si0);
L168:;
si0=l4;
si1=96U;
si0+=si1;
si1=l4;
si1=i32_load(&i->m0,(U64)si1+176U);
si2=l4;
si2=i32_load(&i->m0,(U64)si2+180U);
si2=i32_load(&i->m0,(U64)si2+96U);
TF(i->t0,si2,void (*)(rustpythonInstance*,U32,U32))(i,si0,si1);
si0=0U;
l6=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+96U);
l5=si0;
si1=1087952U;
si2=l5;
si0=si2?si0:si1;
si1=l4;
si1=i32_load(&i->m0,(U64)si1+100U);
si2=0U;
si3=l5;
si1=si3?si1:si2;
si0=f386(i,si0,si1);
l8=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+184U);
l14=si0;
si1=l4;
si1=i32_load(&i->m0,(U64)si1+192U);
si0=f386(i,si0,si1);
l10=si0;
si0=l1;
si0=i32_load8_u(&i->m0,(U64)si0+17U);
si0=!(si0);
if(si0){
goto L170;
}
si0=l1;
si1=12U;
si0+=si1;
l7=si0;
si0=1U;
l5=si0;
goto L169;
L170:;
si0=l1;
si1=12U;
si0+=si1;
l7=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+176U);
si1=7U;
si2=l4;
si2=i32_load(&i->m0,(U64)si2+180U);
si2=i32_load(&i->m0,(U64)si2+40U);
si0=TF(i->t0,si2,U32 (*)(rustpythonInstance*,U32,U32))(i,si0,si1);
l5=si0;
if(si0){
goto L169;
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
goto L169;
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
goto L171;
}
si0=0U;
l6=si0;
goto L169;
L171:;
si0=l10;
si1=l8;
si0+=si1;
si1=l12;
si2=l11;
si1-=si2;
si0=si0 > si1;
l6=si0;
L169:;
si0=l1;
si1=l6;
i32_store8(&i->m0,(U64)si0+20U,si1);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+176U);
si1=l4;
si1=i32_load(&i->m0,(U64)si1+180U);
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
goto L179;
}
si0=l5;
if(si0){
goto L176;
}
si0=l7;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+176U);
l5=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+180U);
l6=si0;
si0=l4;
si1=0U;
i32_store(&i->m0,(U64)si0+384U,si1);
si0=l4;
sj1=1ULL;
i64_store(&i->m0,(U64)si0+376U,sj1);
si0=l4;
si1=336U;
si0+=si1;
si1=1087764U;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=3U;
i32_store8(&i->m0,(U64)si0+344U,si1);
si0=l4;
si1=32U;
i32_store(&i->m0,(U64)si0+328U,si1);
si0=l4;
si1=0U;
i32_store(&i->m0,(U64)si0+340U,si1);
si0=l4;
si1=0U;
i32_store(&i->m0,(U64)si0+320U,si1);
si0=l4;
si1=0U;
i32_store(&i->m0,(U64)si0+312U,si1);
si0=l4;
si1=l4;
si2=376U;
si1+=si2;
i32_store(&i->m0,(U64)si0+332U,si1);
si0=l5;
si1=l4;
si2=312U;
si1+=si2;
si2=l6;
si2=i32_load(&i->m0,(U64)si2+12U);
si0=TF(i->t0,si2,U32 (*)(rustpythonInstance*,U32,U32))(i,si0,si1);
if(si0){
goto L178;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0+380U);
l6=si0;
si0=l7;
si1=4U;
si0+=si1;
l5=si0;
si1=l4;
si1=i32_load(&i->m0,(U64)si1+376U);
l7=si1;
si2=l4;
si2=i32_load(&i->m0,(U64)si2+384U);
si1=f386(i,si1,si2);
l8=si1;
si0=si0 == si1;
if(si0){
goto L181;
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
L182:;
{
si0=l4;
si1=312U;
si0+=si1;
si1=l1;
si1=i32_load(&i->m0,(U64)si1);
si2=1088628U;
si3=1U;
si4=l1;
si4=i32_load(&i->m0,(U64)si4+4U);
si4=i32_load(&i->m0,(U64)si4+28U);
TF(i->t0,si4,void (*)(rustpythonInstance*,U32,U32,U32,U32))(i,si0,si1,si2,si3);
si0=l4;
sj0=i64_load8_u(&i->m0,(U64)si0+312U);
l16=sj0;
sj1=4ULL;
si0=sj0 != sj1;
if(si0){
goto L180;
}
si0=l5;
si1=-1U;
si0+=si1;
l5=si0;
if(si0){
goto L182;
}
}
L181:;
si0=l6;
si0=!(si0);
if(si0){
goto L176;
}
si0=l7;
f15271(i,si0);
goto L176;
L180:;
si0=l4;
sj0=i64_load32_u(&i->m0,(U64)si0+313U);
si1=l4;
sj1=i64_load8_u(&i->m0,(U64)si1+319U);
sj2=48ULL;
sj1<<=(sj2&63);
si2=l4;
sj2=i64_load16_u(&i->m0,(U64)si2+317U);
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
goto L172;
}
si0=l7;
f15271(i,si0);
goto L172;
L179:;
si0=l5;
si0=!(si0);
if(si0){
goto L177;
}
goto L176;
L178:;
si0=1087788U;
si1=55U;
si2=l4;
si3=288U;
si2+=si3;
si3=1087844U;
si4=1087936U;
f712(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L177:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+176U);
l5=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+180U);
l6=si0;
si0=l4;
si1=0U;
i32_store(&i->m0,(U64)si0+384U,si1);
si0=l4;
sj1=1ULL;
i64_store(&i->m0,(U64)si0+376U,sj1);
si0=l4;
si1=336U;
si0+=si1;
si1=1087764U;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=3U;
i32_store8(&i->m0,(U64)si0+344U,si1);
si0=l4;
si1=32U;
i32_store(&i->m0,(U64)si0+328U,si1);
si0=l4;
si1=0U;
i32_store(&i->m0,(U64)si0+340U,si1);
si0=l4;
si1=0U;
i32_store(&i->m0,(U64)si0+320U,si1);
si0=l4;
si1=0U;
i32_store(&i->m0,(U64)si0+312U,si1);
si0=l4;
si1=l4;
si2=376U;
si1+=si2;
i32_store(&i->m0,(U64)si0+332U,si1);
si0=l5;
si1=l4;
si2=312U;
si1+=si2;
si2=l6;
si2=i32_load(&i->m0,(U64)si2+12U);
si0=TF(i->t0,si2,U32 (*)(rustpythonInstance*,U32,U32))(i,si0,si1);
if(si0){
goto L175;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0+380U);
l5=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+376U);
l8=si0;
si1=l4;
si1=i32_load(&i->m0,(U64)si1+384U);
si0=f386(i,si0,si1);
l6=si0;
si0=l5;
si0=!(si0);
if(si0){
goto L183;
}
si0=l8;
f15271(i,si0);
L183:;
si0=l7;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si0=l4;
si1=88U;
si0+=si1;
si1=l4;
si1=i32_load(&i->m0,(U64)si1+176U);
si2=l4;
si2=i32_load(&i->m0,(U64)si2+180U);
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
goto L176;
}
L185:;
{
si0=l4;
si1=312U;
si0+=si1;
si1=l1;
si1=i32_load(&i->m0,(U64)si1);
si2=1088628U;
si3=1U;
si4=l1;
si4=i32_load(&i->m0,(U64)si4+4U);
si4=i32_load(&i->m0,(U64)si4+28U);
TF(i->t0,si4,void (*)(rustpythonInstance*,U32,U32,U32,U32))(i,si0,si1,si2,si3);
si0=l4;
sj0=i64_load8_u(&i->m0,(U64)si0+312U);
l16=sj0;
sj1=4ULL;
si0=sj0 != sj1;
if(si0){
goto L184;
}
si0=l5;
si1=-1U;
si0+=si1;
l5=si0;
if(si0){
goto L185;
}
goto L176;
}
L184:;
si0=l4;
sj0=i64_load32_u(&i->m0,(U64)si0+313U);
si1=l4;
sj1=i64_load8_u(&i->m0,(U64)si1+319U);
sj2=48ULL;
sj1<<=(sj2&63);
si2=l4;
sj2=i64_load16_u(&i->m0,(U64)si2+317U);
sj3=32ULL;
sj2<<=(sj3&63);
sj1|=sj2;
sj0|=sj1;
sj1=8ULL;
sj0<<=(sj1&63);
sj1=l16;
sj0|=sj1;
l16=sj0;
goto L172;
L176:;
si0=l4;
sj0=i64_load(&i->m0,(U64)si0+188U);
l16=sj0;
si0=l1;
si0=i32_load8_u(&i->m0,(U64)si0+21U);
l11=si0;
si0=!(si0);
if(si0){
goto L188;
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
goto L187;
}
L188:;
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
goto L186;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0+60U);
l6=si0;
goto L173;
L187:;
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
goto L174;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0+76U);
l6=si0;
goto L173;
L186:;
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
si1=1087952U;
si2=l5;
si0=si2?si0:si1;
l8=si0;
goto L173;
L175:;
si0=1087788U;
si1=55U;
si2=l4;
si3=288U;
si2+=si3;
si3=1087844U;
si4=1087936U;
f712(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L174:;
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
si1=1087952U;
si2=l5;
si0=si2?si0:si1;
l8=si0;
L173:;
si0=l6;
if(si0){
goto L195;
}
si0=1U;
l12=si0;
goto L194;
L195:;
si0=l6;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L193;
}
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=l6;
si0=f15269(i,si0);
l12=si0;
si0=!(si0);
if(si0){
goto L192;
}
L194:;
si0=l12;
si1=l8;
si2=l6;
si0=f15390(i,si0,si1,si2);
l5=si0;
si0=l4;
si1=l6;
i32_store(&i->m0,(U64)si0+320U,si1);
si0=l4;
si1=l6;
i32_store(&i->m0,(U64)si0+316U,si1);
si0=l4;
si1=l5;
i32_store(&i->m0,(U64)si0+312U,si1);
si0=l6;
l10=si0;
sj0=l16;
sj1=32ULL;
sj0>>=(sj1&63);
si0=(U32)(sj0);
l7=si0;
si0=!(si0);
if(si0){
goto L196;
}
si0=l4;
si1=312U;
si0+=si1;
si1=l6;
si2=l7;
f580(i,si0,si1,si2);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+312U);
l12=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+320U);
l10=si0;
L196:;
si0=l12;
si1=l10;
si0+=si1;
si1=l14;
si2=l7;
si0=f15390(i,si0,si1,si2);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+316U);
l13=si0;
si0=1U;
l5=si0;
si0=l1;
si0=i32_load8_u(&i->m0,(U64)si0+17U);
if(si0){
goto L197;
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
goto L197;
}
si0=l5;
if(si0){
goto L197;
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
L197:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+12U);
l19=si0;
si0=l1;
si0=i32_load8_u(&i->m0,(U64)si0+20U);
l3=si0;
si0=l8;
si1=l6;
si0=f386(i,si0,si1);
l20=si0;
si0=l14;
si1=l7;
si0=f386(i,si0,si1);
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
goto L191;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
l3=si0;
si0=l4;
si1=376U;
si0+=si1;
si1=12U;
si0+=si1;
sj1=3ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=332U;
si0+=si1;
si1=66U;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=312U;
si0+=si1;
si1=12U;
si0+=si1;
si1=66U;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=3U;
i32_store(&i->m0,(U64)si0+380U,si1);
si0=l4;
si1=1088884U;
i32_store(&i->m0,(U64)si0+376U,si1);
si0=l4;
si1=1088584U;
i32_store(&i->m0,(U64)si0+328U,si1);
si0=l4;
si1=1088584U;
i32_store(&i->m0,(U64)si0+320U,si1);
si0=l4;
si1=66U;
i32_store(&i->m0,(U64)si0+316U,si1);
si0=l4;
si1=1088584U;
i32_store(&i->m0,(U64)si0+312U,si1);
si0=l4;
si1=l4;
si2=312U;
si1+=si2;
i32_store(&i->m0,(U64)si0+384U,si1);
si0=l4;
si1=288U;
si0+=si1;
si1=l5;
si2=l4;
si3=376U;
si2+=si3;
si3=l3;
si3=i32_load(&i->m0,(U64)si3+36U);
TF(i->t0,si3,void (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
si0=l4;
si0=i32_load8_u(&i->m0,(U64)si0+288U);
l5=si0;
si1=4U;
si0=si0 == si1;
if(si0){
goto L191;
}
si0=l4;
si1=l4;
si1=i32_load(&i->m0,(U64)si1+292U);
i32_store(&i->m0,(U64)si0+235U,si1);
si0=l4;
si1=l4;
si1=i32_load(&i->m0,(U64)si1+289U);
i32_store(&i->m0,(U64)si0+232U,si1);
goto L190;
L193:;
f53(i);
UNREACHABLE;
L192:;
si0=1U;
si1=l6;
f52(i,si0,si1);
UNREACHABLE;
L191:;
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
goto L200;
}
si0=l18;
si1=l23;
si0=si0 >= si1;
if(si0){
goto L199;
}
L200:;
si0=l6;
si1=4U;
si0=si0 < si1;
if(si0){
goto L201;
}
si0=l4;
si1=312U;
si0+=si1;
si1=l8;
si2=l6;
si3=1088880U;
si4=3U;
f760(i,si0,si1,si2,si3,si4);
si0=l4;
si1=376U;
si0+=si1;
si1=l4;
si2=312U;
si1+=si2;
f385(i,si0,si1);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+376U);
if(si0){
goto L199;
}
goto L198;
L201:;
si0=l6;
si1=3U;
si0=si0 != si1;
if(si0){
goto L198;
}
si0=1088880U;
si1=l8;
si2=3U;
si0=f15389(i,si0,si1,si2);
if(si0){
goto L198;
}
L199:;
si0=0U;
l6=si0;
si0=l4;
si1=0U;
i32_store(&i->m0,(U64)si0+296U,si1);
si0=l4;
sj1=1ULL;
i64_store(&i->m0,(U64)si0+288U,sj1);
si0=l4;
si1=312U;
si0+=si1;
si1=l12;
si2=l3;
si3=1088880U;
si4=3U;
f760(i,si0,si1,si2,si3,si4);
si0=l4;
si1=376U;
si0+=si1;
si1=l4;
si2=312U;
si1+=si2;
f385(i,si0,si1);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+376U);
if(si0){
goto L203;
}
si0=1U;
l8=si0;
si0=0U;
l5=si0;
si0=0U;
l7=si0;
goto L202;
L203:;
si0=0U;
l5=si0;
si0=1U;
l8=si0;
si0=0U;
l7=si0;
L204:;
{
si0=l4;
si0=i32_load(&i->m0,(U64)si0+380U);
si1=l7;
si0-=si1;
l6=si0;
si0=l12;
si1=l7;
si0+=si1;
l10=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+384U);
l7=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+292U);
si1=l5;
si0-=si1;
si1=l6;
si0=si0 >= si1;
if(si0){
goto L205;
}
si0=l4;
si1=288U;
si0+=si1;
si1=l5;
si2=l6;
f580(i,si0,si1,si2);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+288U);
l8=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+296U);
l5=si0;
L205:;
si0=l8;
si1=l5;
si0+=si1;
si1=l10;
si2=l6;
si0=f15390(i,si0,si1,si2);
si0=l4;
si1=l5;
si2=l6;
si1+=si2;
l5=si1;
i32_store(&i->m0,(U64)si0+296U,si1);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+292U);
si1=l5;
si0=si0 != si1;
if(si0){
goto L206;
}
si0=l4;
si1=288U;
si0+=si1;
si1=l5;
si2=1U;
f580(i,si0,si1,si2);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+296U);
l5=si0;
L206:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+288U);
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
i32_store(&i->m0,(U64)si0+296U,si1);
si0=l4;
si1=376U;
si0+=si1;
si1=l4;
si2=312U;
si1+=si2;
f385(i,si0,si1);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+376U);
if(si0){
goto L204;
}
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0+292U);
l6=si0;
L202:;
si0=l12;
si1=l7;
si0+=si1;
l10=si0;
si0=l18;
si1=l23;
si0-=si1;
l18=si0;
si0=l6;
si1=l5;
si0-=si1;
si1=l3;
si2=l7;
si1-=si2;
l6=si1;
si0=si0 >= si1;
if(si0){
goto L207;
}
si0=l4;
si1=288U;
si0+=si1;
si1=l5;
si2=l6;
f580(i,si0,si1,si2);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+288U);
l8=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+296U);
l5=si0;
L207:;
si0=l8;
si1=l5;
si0+=si1;
si1=l10;
si2=l6;
si0=f15390(i,si0,si1,si2);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+292U);
l10=si0;
si0=l4;
si1=376U;
si0+=si1;
si1=12U;
si0+=si1;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=0U;
i32_store8(&i->m0,(U64)si0+396U,si1);
si0=l4;
si1=1993552U;
i32_store(&i->m0,(U64)si0+384U,si1);
si0=l4;
si1=0U;
i32_store(&i->m0,(U64)si0+380U,si1);
si0=l4;
si1=1993552U;
i32_store(&i->m0,(U64)si0+376U,si1);
si0=l4;
si1=l18;
i32_store(&i->m0,(U64)si0+392U,si1);
si0=l4;
si1=0U;
i32_store16(&i->m0,(U64)si0+348U,si1);
si0=l4;
si1=l5;
si2=l6;
si1+=si2;
l5=si1;
i32_store(&i->m0,(U64)si0+344U,si1);
si0=l4;
si1=0U;
i32_store(&i->m0,(U64)si0+340U,si1);
si0=l4;
sj1=42949672961ULL;
i64_store(&i->m0,(U64)si0+332U,sj1);
si0=l4;
si1=l5;
i32_store(&i->m0,(U64)si0+328U,si1);
si0=l4;
si1=0U;
i32_store(&i->m0,(U64)si0+324U,si1);
si0=l4;
si1=l5;
i32_store(&i->m0,(U64)si0+320U,si1);
si0=l4;
si1=l8;
i32_store(&i->m0,(U64)si0+316U,si1);
si0=l4;
si1=10U;
i32_store(&i->m0,(U64)si0+312U,si1);
si0=l4;
si1=l4;
si2=376U;
si1+=si2;
i32_store(&i->m0,(U64)si0+352U,si1);
si0=l4;
si1=288U;
si0+=si1;
si1=l4;
si2=312U;
si1+=si2;
f310(i,si0,si1);
si0=l4;
si1=272U;
si0+=si1;
si1=l4;
si1=i32_load(&i->m0,(U64)si1+288U);
l7=si1;
si2=l4;
si2=i32_load(&i->m0,(U64)si2+296U);
l6=si2;
si3=1088576U;
si4=1U;
f467(i,si0,si1,si2,si3,si4);
si0=l6;
si0=!(si0);
if(si0){
goto L208;
}
si0=l7;
l5=si0;
L209:;
{
si0=l5;
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L210;
}
si0=l5;
si0=i32_load(&i->m0,(U64)si0);
f15271(i,si0);
L210:;
si0=l5;
si1=12U;
si0+=si1;
l5=si0;
si0=l6;
si1=-1U;
si0+=si1;
l6=si0;
if(si0){
goto L209;
}
}
L208:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+292U);
si0=!(si0);
if(si0){
goto L211;
}
si0=l7;
f15271(i,si0);
L211:;
si0=l13;
si0=!(si0);
if(si0){
goto L212;
}
si0=l12;
f15271(i,si0);
L212:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+280U);
l3=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+276U);
l13=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+272U);
l12=si0;
si0=l10;
si0=!(si0);
if(si0){
goto L198;
}
si0=l8;
f15271(i,si0);
L198:;
si0=l4;
si1=0U;
i32_store16(&i->m0,(U64)si0+348U,si1);
si0=l4;
si1=l3;
i32_store(&i->m0,(U64)si0+344U,si1);
si0=l4;
si1=0U;
i32_store(&i->m0,(U64)si0+340U,si1);
si0=l4;
sj1=42949672961ULL;
i64_store(&i->m0,(U64)si0+332U,sj1);
si0=l4;
si1=l3;
i32_store(&i->m0,(U64)si0+328U,si1);
si0=l4;
si1=0U;
i32_store(&i->m0,(U64)si0+324U,si1);
si0=l4;
si1=l3;
i32_store(&i->m0,(U64)si0+320U,si1);
si0=l4;
si1=l12;
i32_store(&i->m0,(U64)si0+316U,si1);
si0=l4;
si1=10U;
i32_store(&i->m0,(U64)si0+312U,si1);
si0=l4;
si1=32U;
si0+=si1;
si1=l4;
si2=312U;
si1+=si2;
f371(i,si0,si1);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+32U);
l5=si0;
if(si0){
goto L214;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
l10=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
goto L213;
L214:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+36U);
l6=si0;
si0=l4;
si1=l5;
i32_store(&i->m0,(U64)si0+248U,si1);
si0=l4;
si1=l6;
i32_store(&i->m0,(U64)si0+252U,si1);
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
l10=si0;
si0=l4;
si1=388U;
si0+=si1;
sj1=1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=1U;
i32_store(&i->m0,(U64)si0+380U,si1);
si0=l4;
si1=1088568U;
i32_store(&i->m0,(U64)si0+376U,si1);
si0=l4;
si1=66U;
i32_store(&i->m0,(U64)si0+292U,si1);
si0=l4;
si1=l4;
si2=288U;
si1+=si2;
i32_store(&i->m0,(U64)si0+384U,si1);
si0=l4;
si1=l4;
si2=248U;
si1+=si2;
i32_store(&i->m0,(U64)si0+288U,si1);
si0=l4;
si1=272U;
si0+=si1;
si1=l6;
si2=l4;
si3=376U;
si2+=si3;
si3=l10;
si3=i32_load(&i->m0,(U64)si3+36U);
TF(i->t0,si3,void (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
si0=l4;
si0=i32_load8_u(&i->m0,(U64)si0+272U);
l5=si0;
si1=4U;
si0=si0 == si1;
if(si0){
goto L213;
}
si0=l4;
si1=l4;
si1=i32_load(&i->m0,(U64)si1+276U);
i32_store(&i->m0,(U64)si0+235U,si1);
si0=l4;
si1=l4;
si1=i32_load(&i->m0,(U64)si1+273U);
i32_store(&i->m0,(U64)si0+232U,si1);
goto L190;
L213:;
si0=l4;
si1=1U;
i32_store(&i->m0,(U64)si0+352U,si1);
si0=l4;
si1=0U;
i32_store16(&i->m0,(U64)si0+348U,si1);
si0=l4;
si1=l3;
i32_store(&i->m0,(U64)si0+344U,si1);
si0=l4;
si1=0U;
i32_store(&i->m0,(U64)si0+340U,si1);
si0=l4;
sj1=42949672961ULL;
i64_store(&i->m0,(U64)si0+332U,sj1);
si0=l4;
si1=l3;
i32_store(&i->m0,(U64)si0+328U,si1);
si0=l4;
si1=0U;
i32_store(&i->m0,(U64)si0+324U,si1);
si0=l4;
si1=l3;
i32_store(&i->m0,(U64)si0+320U,si1);
si0=l4;
si1=l12;
i32_store(&i->m0,(U64)si0+316U,si1);
si0=l4;
si1=10U;
i32_store(&i->m0,(U64)si0+312U,si1);
si0=l19;
si1=8U;
si0+=si1;
l18=si0;
si0=1U;
l5=si0;
L217:;
{
si0=l5;
if(si0){
goto L219;
}
si0=l4;
si1=8U;
si0+=si1;
si1=l4;
si2=312U;
si1+=si2;
f371(i,si0,si1);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+12U);
l1=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+8U);
l5=si0;
goto L218;
L219:;
si0=l4;
si1=0U;
i32_store(&i->m0,(U64)si0+352U,si1);
si0=l5;
si1=1U;
si0+=si1;
l5=si0;
L221:;
{
si0=l5;
si1=-1U;
si0+=si1;
l5=si0;
si0=!(si0);
if(si0){
goto L220;
}
si0=l4;
si1=24U;
si0+=si1;
si1=l4;
si2=312U;
si1+=si2;
f371(i,si0,si1);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+24U);
if(si0){
goto L221;
}
}
si0=0U;
l5=si0;
goto L218;
L220:;
si0=l4;
si1=16U;
si0+=si1;
si1=l4;
si2=312U;
si1+=si2;
f371(i,si0,si1);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+20U);
l1=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+16U);
l5=si0;
L218:;
si0=l5;
if(si0){
goto L225;
}
si0=l3;
si1=7U;
si0=si0 > si1;
if(si0){
goto L224;
}
si0=l3;
si0=!(si0);
if(si0){
goto L226;
}
si0=l12;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=10U;
si0=si0 == si1;
if(si0){
goto L215;
}
si0=l3;
si1=1U;
si0=si0 == si1;
if(si0){
goto L226;
}
si0=l12;
si0=i32_load8_u(&i->m0,(U64)si0+1U);
si1=10U;
si0=si0 == si1;
if(si0){
goto L215;
}
si0=l3;
si1=2U;
si0=si0 == si1;
if(si0){
goto L226;
}
si0=l12;
si0=i32_load8_u(&i->m0,(U64)si0+2U);
si1=10U;
si0=si0 == si1;
if(si0){
goto L215;
}
si0=l3;
si1=3U;
si0=si0 == si1;
if(si0){
goto L226;
}
si0=l12;
si0=i32_load8_u(&i->m0,(U64)si0+3U);
si1=10U;
si0=si0 == si1;
if(si0){
goto L215;
}
si0=l3;
si1=4U;
si0=si0 == si1;
if(si0){
goto L226;
}
si0=l12;
si0=i32_load8_u(&i->m0,(U64)si0+4U);
si1=10U;
si0=si0 == si1;
if(si0){
goto L215;
}
si0=l3;
si1=5U;
si0=si0 == si1;
if(si0){
goto L226;
}
si0=l12;
si0=i32_load8_u(&i->m0,(U64)si0+5U);
si1=10U;
si0=si0 == si1;
if(si0){
goto L215;
}
si0=l3;
si1=6U;
si0=si0 == si1;
if(si0){
goto L226;
}
si0=l12;
si0=i32_load8_u(&i->m0,(U64)si0+6U);
si1=10U;
si0=si0 == si1;
if(si0){
goto L215;
}
si0=l11;
si1=1U;
si0^=si1;
si0=!(si0);
if(si0){
goto L216;
}
goto L215;
L226:;
si0=l11;
si0=!(si0);
if(si0){
goto L215;
}
goto L216;
L225:;
si0=l4;
si1=l5;
i32_store(&i->m0,(U64)si0+248U,si1);
si0=l4;
si1=l1;
i32_store(&i->m0,(U64)si0+252U,si1);
si0=l4;
si1=1U;
i32_store(&i->m0,(U64)si0+380U,si1);
si0=l4;
si1=1088908U;
i32_store(&i->m0,(U64)si0+376U,si1);
si0=l4;
sj1=0ULL;
i64_store(&i->m0,(U64)si0+388U,sj1);
si0=l4;
si1=1087952U;
i32_store(&i->m0,(U64)si0+384U,si1);
si0=l4;
si1=288U;
si0+=si1;
si1=l6;
si2=l4;
si3=376U;
si2+=si3;
si3=l10;
si3=i32_load(&i->m0,(U64)si3+36U);
l8=si3;
TF(i->t0,si3,void (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
si0=l4;
si0=i32_load8_u(&i->m0,(U64)si0+288U);
l5=si0;
si1=4U;
si0=si0 == si1;
if(si0){
goto L227;
}
si0=l4;
si1=l4;
si1=i32_load(&i->m0,(U64)si1+292U);
i32_store(&i->m0,(U64)si0+235U,si1);
si0=l4;
si1=l4;
si1=i32_load(&i->m0,(U64)si1+289U);
i32_store(&i->m0,(U64)si0+232U,si1);
goto L190;
L227:;
si0=l11;
if(si0){
goto L228;
}
si0=l2;
si1=l9;
si0=TF(i->t0,si1,U32 (*)(rustpythonInstance*,U32))(i,si0);
si0=!(si0);
if(si0){
goto L230;
}
si0=l22;
si0=!(si0);
if(si0){
goto L222;
}
si0=l10;
si0=i32_load(&i->m0,(U64)si0+28U);
l7=si0;
si0=l22;
l1=si0;
L231:;
{
si0=l4;
si1=376U;
si0+=si1;
si1=l6;
si2=1088628U;
si3=1U;
si4=l7;
TF(i->t0,si4,void (*)(rustpythonInstance*,U32,U32,U32,U32))(i,si0,si1,si2,si3);
si0=l4;
si0=i32_load8_u(&i->m0,(U64)si0+376U);
l5=si0;
si1=4U;
si0=si0 != si1;
if(si0){
goto L229;
}
si0=l1;
si1=-1U;
si0+=si1;
l1=si0;
if(si0){
goto L231;
}
goto L222;
}
L230:;
si0=l18;
si0=!(si0);
if(si0){
goto L222;
}
si0=l10;
si0=i32_load(&i->m0,(U64)si0+28U);
l7=si0;
si0=l18;
l1=si0;
L232:;
{
si0=l4;
si1=376U;
si0+=si1;
si1=l6;
si2=1088628U;
si3=1U;
si4=l7;
TF(i->t0,si4,void (*)(rustpythonInstance*,U32,U32,U32,U32))(i,si0,si1,si2,si3);
si0=l4;
si0=i32_load8_u(&i->m0,(U64)si0+376U);
l5=si0;
si1=4U;
si0=si0 != si1;
if(si0){
goto L223;
}
si0=l1;
si1=-1U;
si0+=si1;
l1=si0;
if(si0){
goto L232;
}
goto L222;
}
L229:;
si0=l4;
si1=l4;
si1=i32_load(&i->m0,(U64)si1+380U);
i32_store(&i->m0,(U64)si0+235U,si1);
si0=l4;
si1=l4;
si1=i32_load(&i->m0,(U64)si1+377U);
i32_store(&i->m0,(U64)si0+232U,si1);
goto L190;
L228:;
si0=l4;
si1=3U;
i32_store(&i->m0,(U64)si0+292U,si1);
si0=l4;
si1=1088916U;
i32_store(&i->m0,(U64)si0+288U,si1);
si0=l4;
sj1=3ULL;
i64_store(&i->m0,(U64)si0+300U,sj1);
si0=l4;
si1=66U;
i32_store(&i->m0,(U64)si0+396U,si1);
si0=l4;
si1=1088584U;
i32_store(&i->m0,(U64)si0+392U,si1);
si0=l4;
si1=66U;
i32_store(&i->m0,(U64)si0+388U,si1);
si0=l4;
si1=1088584U;
i32_store(&i->m0,(U64)si0+384U,si1);
si0=l4;
si1=66U;
i32_store(&i->m0,(U64)si0+380U,si1);
si0=l4;
si1=1088584U;
i32_store(&i->m0,(U64)si0+376U,si1);
si0=l4;
si1=l4;
si2=376U;
si1+=si2;
i32_store(&i->m0,(U64)si0+296U,si1);
si0=l4;
si1=272U;
si0+=si1;
si1=l6;
si2=l4;
si3=288U;
si2+=si3;
si3=l8;
TF(i->t0,si3,void (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
si0=l4;
si0=i32_load8_u(&i->m0,(U64)si0+272U);
l5=si0;
si1=4U;
si0=si0 == si1;
if(si0){
goto L222;
}
si0=l4;
si1=l4;
si1=i32_load(&i->m0,(U64)si1+276U);
i32_store(&i->m0,(U64)si0+235U,si1);
si0=l4;
si1=l4;
si1=i32_load(&i->m0,(U64)si1+273U);
i32_store(&i->m0,(U64)si0+232U,si1);
goto L190;
L224:;
si0=l4;
si1=10U;
si2=l12;
si3=l3;
f752(i,si0,si1,si2,si3);
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
si1=1U;
si0=si0 != si1;
si1=l11;
si0&=si1;
if(si0){
goto L216;
}
goto L215;
L223:;
si0=l4;
si1=l4;
si1=i32_load(&i->m0,(U64)si1+380U);
i32_store(&i->m0,(U64)si0+235U,si1);
si0=l4;
si1=l4;
si1=i32_load(&i->m0,(U64)si1+377U);
i32_store(&i->m0,(U64)si0+232U,si1);
goto L190;
L222:;
si0=l4;
si1=1U;
i32_store(&i->m0,(U64)si0+380U,si1);
si0=l4;
si1=1088568U;
i32_store(&i->m0,(U64)si0+376U,si1);
si0=l4;
sj1=1ULL;
i64_store(&i->m0,(U64)si0+388U,sj1);
si0=l4;
si1=66U;
i32_store(&i->m0,(U64)si0+292U,si1);
si0=l4;
si1=l4;
si2=288U;
si1+=si2;
i32_store(&i->m0,(U64)si0+384U,si1);
si0=l4;
si1=l4;
si2=248U;
si1+=si2;
i32_store(&i->m0,(U64)si0+288U,si1);
si0=l4;
si1=272U;
si0+=si1;
si1=l6;
si2=l4;
si3=376U;
si2+=si3;
si3=l8;
TF(i->t0,si3,void (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
si0=l4;
si0=i32_load8_u(&i->m0,(U64)si0+272U);
l5=si0;
si1=4U;
si0=si0 != si1;
if(si0){
goto L233;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0+352U);
l5=si0;
goto L217;
L233:;
}
si0=l4;
si1=l4;
si1=i32_load(&i->m0,(U64)si1+276U);
i32_store(&i->m0,(U64)si0+235U,si1);
si0=l4;
si1=l4;
si1=i32_load(&i->m0,(U64)si1+273U);
i32_store(&i->m0,(U64)si0+232U,si1);
goto L190;
L216:;
si0=l4;
si1=324U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=1U;
i32_store(&i->m0,(U64)si0+316U,si1);
si0=l4;
si1=1088908U;
i32_store(&i->m0,(U64)si0+312U,si1);
si0=l4;
si1=1087952U;
i32_store(&i->m0,(U64)si0+320U,si1);
si0=l4;
si1=376U;
si0+=si1;
si1=l6;
si2=l4;
si3=312U;
si2+=si3;
si3=l10;
si3=i32_load(&i->m0,(U64)si3+36U);
TF(i->t0,si3,void (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
si0=l4;
si0=i32_load8_u(&i->m0,(U64)si0+376U);
l5=si0;
si1=4U;
si0=si0 == si1;
if(si0){
goto L215;
}
si0=l4;
si1=l4;
si1=i32_load(&i->m0,(U64)si1+380U);
i32_store(&i->m0,(U64)si0+235U,si1);
si0=l4;
si1=l4;
si1=i32_load(&i->m0,(U64)si1+377U);
i32_store(&i->m0,(U64)si0+232U,si1);
goto L190;
L215:;
si0=l13;
si0=!(si0);
if(si0){
goto L234;
}
si0=l12;
f15271(i,si0);
L234:;
si0=l0;
si1=4U;
i32_store8(&i->m0,(U64)si0,si1);
sj0=l16;
si0=(U32)(sj0);
if(si0){
goto L189;
}
goto L1;
L190:;
si0=l13;
si0=!(si0);
if(si0){
goto L235;
}
si0=l12;
f15271(i,si0);
L235:;
si0=l0;
si1=l4;
si1=i32_load(&i->m0,(U64)si1+232U);
i32_store(&i->m0,(U64)si0+1U,si1);
si0=l0;
si1=4U;
si0+=si1;
si1=l4;
si1=i32_load(&i->m0,(U64)si1+235U);
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
L189:;
si0=l14;
f15271(i,si0);
goto L1;
L172:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+188U);
si0=!(si0);
if(si0){
goto L236;
}
si0=l14;
f15271(i,si0);
L236:;
si0=l0;
sj1=l16;
i64_store(&i->m0,(U64)si0,sj1);
L1:;
si0=l4;
si1=400U;
si0+=si1;
i->g0=si0;
L0:;
}

void f389(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
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
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
si0=!(si0);
if(si0){
goto L10;
}
si0=l2;
si1=92U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si1=7U;
si0=si0 > si1;
if(si0){
goto L11;
}
si0=l5;
si0=!(si0);
if(si0){
goto L6;
}
si0=l4;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=32U;
si0=si0 == si1;
if(si0){
goto L3;
}
si0=l5;
si1=1U;
si0=si0 == si1;
if(si0){
goto L6;
}
si0=l4;
si0=i32_load8_u(&i->m0,(U64)si0+1U);
si1=32U;
si0=si0 == si1;
if(si0){
goto L3;
}
si0=l5;
si1=2U;
si0=si0 == si1;
if(si0){
goto L6;
}
si0=l4;
si0=i32_load8_u(&i->m0,(U64)si0+2U);
si1=32U;
si0=si0 == si1;
if(si0){
goto L3;
}
si0=l5;
si1=3U;
si0=si0 == si1;
if(si0){
goto L6;
}
si0=l4;
si0=i32_load8_u(&i->m0,(U64)si0+3U);
si1=32U;
si0=si0 == si1;
if(si0){
goto L3;
}
si0=l5;
si1=4U;
si0=si0 == si1;
if(si0){
goto L6;
}
si0=l4;
si0=i32_load8_u(&i->m0,(U64)si0+4U);
si1=32U;
si0=si0 == si1;
if(si0){
goto L3;
}
si0=l5;
si1=5U;
si0=si0 == si1;
if(si0){
goto L6;
}
si0=l4;
si0=i32_load8_u(&i->m0,(U64)si0+5U);
si1=32U;
si0=si0 == si1;
if(si0){
goto L3;
}
si0=l5;
si1=6U;
si0=si0 == si1;
if(si0){
goto L6;
}
si0=l4;
si0=i32_load8_u(&i->m0,(U64)si0+6U);
si1=32U;
si0=si0 != si1;
if(si0){
goto L6;
}
goto L3;
L11:;
si0=l4;
si1=3U;
si0+=si1;
si1=-4U;
si0&=si1;
l6=si0;
si1=l4;
si0=si0 == si1;
if(si0){
goto L9;
}
si0=l6;
si1=l4;
si0-=si1;
l7=si0;
si0=!(si0);
if(si0){
goto L9;
}
si0=l4;
si1=l6;
si0-=si1;
l8=si0;
si0=l4;
l6=si0;
L12:;
{
si0=l6;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=32U;
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
goto L12;
}
}
si0=l7;
si1=l5;
si2=-8U;
si1+=si2;
l9=si1;
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
l6=si0;
si0=l2;
si1=80U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
if(si0){
goto L15;
}
si0=1U;
l7=si0;
goto L14;
L15:;
si0=l5;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L5;
}
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=l5;
si0=f15269(i,si0);
l7=si0;
si0=!(si0);
if(si0){
goto L13;
}
L14:;
si0=l7;
si1=l6;
si2=l5;
si0=f15390(i,si0,si1,si2);
l10=si0;
si0=0U;
l4=si0;
si0=l3;
si1=0U;
i32_store(&i->m0,(U64)si0+136U,si1);
si0=l3;
sj1=1ULL;
i64_store(&i->m0,(U64)si0+128U,sj1);
si0=l3;
si1=40U;
si0+=si1;
si1=l10;
si2=l5;
si3=1088880U;
si4=3U;
f760(i,si0,si1,si2,si3,si4);
si0=l3;
si1=104U;
si0+=si1;
si1=l3;
si2=40U;
si1+=si2;
f385(i,si0,si1);
si0=0U;
l6=si0;
si0=0U;
l8=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+104U);
si0=!(si0);
if(si0){
goto L16;
}
si0=0U;
l6=si0;
si0=1U;
l4=si0;
si0=0U;
l8=si0;
L17:;
{
si0=l3;
si0=i32_load(&i->m0,(U64)si0+108U);
si1=l8;
si0-=si1;
l7=si0;
si0=l10;
si1=l8;
si0+=si1;
l9=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+112U);
l8=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+132U);
l2=si0;
si1=l6;
si0-=si1;
si1=l7;
si0=si0 >= si1;
if(si0){
goto L18;
}
si0=l3;
si1=128U;
si0+=si1;
si1=l6;
si2=l7;
f580(i,si0,si1,si2);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+132U);
l2=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+128U);
l4=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+136U);
l6=si0;
L18:;
si0=l4;
si1=l6;
si0+=si1;
si1=l9;
si2=l7;
si0=f15390(i,si0,si1,si2);
si0=l3;
si1=l6;
si2=l7;
si1+=si2;
l6=si1;
i32_store(&i->m0,(U64)si0+136U,si1);
si0=l2;
si1=l6;
si0=si0 != si1;
if(si0){
goto L19;
}
si0=l3;
si1=128U;
si0+=si1;
si1=l2;
si2=1U;
f580(i,si0,si1,si2);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+128U);
l4=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+136U);
l6=si0;
L19:;
si0=l4;
si1=l6;
si0+=si1;
si1=10U;
i32_store8(&i->m0,(U64)si0,si1);
si0=l3;
si1=l6;
si2=1U;
si1+=si2;
l6=si1;
i32_store(&i->m0,(U64)si0+136U,si1);
si0=l3;
si1=104U;
si0+=si1;
si1=l3;
si2=40U;
si1+=si2;
f385(i,si0,si1);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+104U);
if(si0){
goto L17;
}
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0+132U);
l4=si0;
L16:;
si0=l10;
si1=l8;
si0+=si1;
l2=si0;
si0=l4;
si1=l6;
si0-=si1;
si1=l5;
si2=l8;
si1-=si2;
l7=si1;
si0=si0 >= si1;
if(si0){
goto L20;
}
si0=l3;
si1=128U;
si0+=si1;
si1=l6;
si2=l7;
f580(i,si0,si1,si2);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+132U);
l4=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+136U);
l6=si0;
L20:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+128U);
l8=si0;
si1=l6;
si0+=si1;
si1=l2;
si2=l7;
si0=f15390(i,si0,si1,si2);
si0=l5;
si0=!(si0);
if(si0){
goto L21;
}
si0=l10;
f15271(i,si0);
L21:;
si0=l6;
si1=l7;
si0+=si1;
l6=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
l2=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l9=si0;
si0=l1;
si0=i32_load8_u(&i->m0,(U64)si0+19U);
if(si0){
goto L23;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+8U);
l7=si0;
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
si1=1993552U;
i32_store(&i->m0,(U64)si0+112U,si1);
si0=l3;
si1=0U;
i32_store(&i->m0,(U64)si0+108U,si1);
si0=l3;
si1=1993552U;
i32_store(&i->m0,(U64)si0+104U,si1);
si0=l3;
si1=l7;
i32_store(&i->m0,(U64)si0+120U,si1);
si0=l3;
si1=0U;
i32_store16(&i->m0,(U64)si0+76U,si1);
si0=l3;
si1=l6;
i32_store(&i->m0,(U64)si0+72U,si1);
si0=l3;
si1=0U;
i32_store(&i->m0,(U64)si0+68U,si1);
si0=l3;
sj1=42949672961ULL;
i64_store(&i->m0,(U64)si0+60U,sj1);
si0=l3;
si1=l6;
i32_store(&i->m0,(U64)si0+56U,si1);
si0=l3;
si1=0U;
i32_store(&i->m0,(U64)si0+52U,si1);
si0=l3;
si1=l6;
i32_store(&i->m0,(U64)si0+48U,si1);
si0=l3;
si1=l8;
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
si1=128U;
si0+=si1;
si1=l3;
si2=40U;
si1+=si2;
f310(i,si0,si1);
si0=l3;
si1=24U;
si0+=si1;
si1=l3;
si1=i32_load(&i->m0,(U64)si1+128U);
l10=si1;
si2=l3;
si2=i32_load(&i->m0,(U64)si2+136U);
l7=si2;
si3=1088576U;
si4=1U;
f467(i,si0,si1,si2,si3,si4);
si0=l7;
si0=!(si0);
if(si0){
goto L24;
}
si0=l10;
l6=si0;
L25:;
{
si0=l6;
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L26;
}
si0=l6;
si0=i32_load(&i->m0,(U64)si0);
f15271(i,si0);
L26:;
si0=l6;
si1=12U;
si0+=si1;
l6=si0;
si0=l7;
si1=-1U;
si0+=si1;
l7=si0;
if(si0){
goto L25;
}
}
L24:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+132U);
si0=!(si0);
if(si0){
goto L27;
}
si0=l10;
f15271(i,si0);
L27:;
si0=l3;
si1=116U;
si0+=si1;
sj1=1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=177U;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l3;
si1=1U;
i32_store(&i->m0,(U64)si0+108U,si1);
si0=l3;
si1=1088568U;
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
si1=l9;
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
f15271(i,si0);
goto L22;
L23:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+8U);
l7=si0;
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
si1=1993552U;
i32_store(&i->m0,(U64)si0+112U,si1);
si0=l3;
si1=0U;
i32_store(&i->m0,(U64)si0+108U,si1);
si0=l3;
si1=1993552U;
i32_store(&i->m0,(U64)si0+104U,si1);
si0=l3;
si1=l7;
i32_store(&i->m0,(U64)si0+120U,si1);
si0=l3;
si1=0U;
i32_store16(&i->m0,(U64)si0+76U,si1);
si0=l3;
si1=l6;
i32_store(&i->m0,(U64)si0+72U,si1);
si0=l3;
si1=0U;
i32_store(&i->m0,(U64)si0+68U,si1);
si0=l3;
sj1=42949672961ULL;
i64_store(&i->m0,(U64)si0+60U,sj1);
si0=l3;
si1=l6;
i32_store(&i->m0,(U64)si0+56U,si1);
si0=l3;
si1=0U;
i32_store(&i->m0,(U64)si0+52U,si1);
si0=l3;
si1=l6;
i32_store(&i->m0,(U64)si0+48U,si1);
si0=l3;
si1=l8;
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
si1=128U;
si0+=si1;
si1=l3;
si2=40U;
si1+=si2;
f310(i,si0,si1);
si0=l3;
si1=24U;
si0+=si1;
si1=l3;
si1=i32_load(&i->m0,(U64)si1+128U);
l10=si1;
si2=l3;
si2=i32_load(&i->m0,(U64)si2+136U);
l7=si2;
si3=1088576U;
si4=1U;
f467(i,si0,si1,si2,si3,si4);
si0=l7;
si0=!(si0);
if(si0){
goto L28;
}
si0=l10;
l6=si0;
L29:;
{
si0=l6;
si1=4U;
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
si0=l6;
si1=12U;
si0+=si1;
l6=si0;
si0=l7;
si1=-1U;
si0+=si1;
l7=si0;
if(si0){
goto L29;
}
}
L28:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+132U);
si0=!(si0);
if(si0){
goto L31;
}
si0=l10;
f15271(i,si0);
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
si1=179U;
i32_store(&i->m0,(U64)si0+132U,si1);
si0=l3;
si1=1U;
i32_store(&i->m0,(U64)si0+44U,si1);
si0=l3;
si1=1088568U;
i32_store(&i->m0,(U64)si0+40U,si1);
si0=l3;
si1=l3;
si2=104U;
si1+=si2;
i32_store(&i->m0,(U64)si0+128U,si1);
si0=l3;
si1=l3;
si2=128U;
si1+=si2;
i32_store(&i->m0,(U64)si0+48U,si1);
si0=l3;
si1=8U;
si0+=si1;
si1=l9;
si2=l3;
si3=40U;
si2+=si3;
si3=l2;
si3=i32_load(&i->m0,(U64)si3+36U);
TF(i->t0,si3,void (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+104U);
switch(si0){
case 0:
goto L39;
case 1:
goto L38;
case 2:
goto L37;
default:
goto L40;
}
L40:;
si0=l3;
si1=104U;
si0+=si1;
si1=4U;
si0|=si1;
l6=si0;
goto L36;
L39:;
si0=l3;
si1=104U;
si0+=si1;
si1=4U;
si0|=si1;
l6=si0;
goto L36;
L38:;
si0=l3;
si1=104U;
si0+=si1;
si1=4U;
si0|=si1;
l6=si0;
goto L36;
L37:;
si0=l3;
si1=104U;
si0+=si1;
si1=4U;
si0|=si1;
l6=si0;
L36:;
si0=l6;
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L22;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0+108U);
f15271(i,si0);
L22:;
si0=l3;
si0=i32_load8_u(&i->m0,(U64)si0+8U);
l6=si0;
si1=4U;
si0=si0 != si1;
if(si0){
goto L41;
}
si0=l4;
si0=!(si0);
if(si0){
goto L2;
}
si0=l8;
f15271(i,si0);
goto L2;
L41:;
si0=l0;
si1=l3;
si1=i32_load(&i->m0,(U64)si1+9U);
i32_store(&i->m0,(U64)si0+1U,si1);
si0=l0;
si1=4U;
si0+=si1;
si1=l3;
si1=i32_load(&i->m0,(U64)si1+12U);
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l6;
i32_store8(&i->m0,(U64)si0,si1);
si0=l4;
si0=!(si0);
if(si0){
goto L1;
}
si0=l8;
f15271(i,si0);
goto L1;
L13:;
si0=1U;
si1=l5;
f52(i,si0,si1);
UNREACHABLE;
L9:;
si0=l5;
si1=-8U;
si0+=si1;
l9=si0;
si0=0U;
l7=si0;
L8:;
L42:;
{
si0=l4;
si1=l7;
si0+=si1;
l8=si0;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si1=-1U;
si0^=si1;
si1=l6;
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
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si1=-1U;
si0^=si1;
si1=l6;
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
si0=l7;
si1=8U;
si0+=si1;
l7=si0;
si1=l9;
si0=si0 <= si1;
if(si0){
goto L42;
}
}
L7:;
si0=l5;
si1=l7;
si0=si0 == si1;
if(si0){
goto L6;
}
si0=l5;
si1=l7;
si0-=si1;
l8=si0;
si0=l4;
si1=l7;
si0+=si1;
l6=si0;
L43:;
{
si0=l6;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=32U;
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
goto L43;
}
}
L6:;
si0=l2;
si1=72U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si0=l2;
si1=80U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
if(si0){
goto L45;
}
si0=1U;
l7=si0;
goto L44;
L45:;
si0=l5;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L5;
}
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=l5;
si0=f15269(i,si0);
l7=si0;
si0=!(si0);
if(si0){
goto L4;
}
L44:;
si0=l7;
si1=l6;
si2=l5;
si0=f15390(i,si0,si1,si2);
l10=si0;
si0=0U;
l4=si0;
si0=l3;
si1=0U;
i32_store(&i->m0,(U64)si0+136U,si1);
si0=l3;
sj1=1ULL;
i64_store(&i->m0,(U64)si0+128U,sj1);
si0=l3;
si1=40U;
si0+=si1;
si1=l10;
si2=l5;
si3=1088880U;
si4=3U;
f760(i,si0,si1,si2,si3,si4);
si0=l3;
si1=104U;
si0+=si1;
si1=l3;
si2=40U;
si1+=si2;
f385(i,si0,si1);
si0=0U;
l6=si0;
si0=0U;
l8=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+104U);
si0=!(si0);
if(si0){
goto L46;
}
si0=0U;
l6=si0;
si0=1U;
l4=si0;
si0=0U;
l8=si0;
L47:;
{
si0=l3;
si0=i32_load(&i->m0,(U64)si0+108U);
si1=l8;
si0-=si1;
l7=si0;
si0=l10;
si1=l8;
si0+=si1;
l9=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+112U);
l8=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+132U);
l2=si0;
si1=l6;
si0-=si1;
si1=l7;
si0=si0 >= si1;
if(si0){
goto L48;
}
si0=l3;
si1=128U;
si0+=si1;
si1=l6;
si2=l7;
f580(i,si0,si1,si2);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+132U);
l2=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+128U);
l4=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+136U);
l6=si0;
L48:;
si0=l4;
si1=l6;
si0+=si1;
si1=l9;
si2=l7;
si0=f15390(i,si0,si1,si2);
si0=l3;
si1=l6;
si2=l7;
si1+=si2;
l6=si1;
i32_store(&i->m0,(U64)si0+136U,si1);
si0=l2;
si1=l6;
si0=si0 != si1;
if(si0){
goto L49;
}
si0=l3;
si1=128U;
si0+=si1;
si1=l2;
si2=1U;
f580(i,si0,si1,si2);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+128U);
l4=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+136U);
l6=si0;
L49:;
si0=l4;
si1=l6;
si0+=si1;
si1=10U;
i32_store8(&i->m0,(U64)si0,si1);
si0=l3;
si1=l6;
si2=1U;
si1+=si2;
l6=si1;
i32_store(&i->m0,(U64)si0+136U,si1);
si0=l3;
si1=104U;
si0+=si1;
si1=l3;
si2=40U;
si1+=si2;
f385(i,si0,si1);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+104U);
if(si0){
goto L47;
}
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0+132U);
l4=si0;
L46:;
si0=l10;
si1=l8;
si0+=si1;
l2=si0;
si0=l4;
si1=l6;
si0-=si1;
si1=l5;
si2=l8;
si1-=si2;
l7=si1;
si0=si0 >= si1;
if(si0){
goto L50;
}
si0=l3;
si1=128U;
si0+=si1;
si1=l6;
si2=l7;
f580(i,si0,si1,si2);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+132U);
l4=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+136U);
l6=si0;
L50:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+128U);
l8=si0;
si1=l6;
si0+=si1;
si1=l2;
si2=l7;
si0=f15390(i,si0,si1,si2);
si0=l5;
si0=!(si0);
if(si0){
goto L51;
}
si0=l10;
f15271(i,si0);
L51:;
si0=l6;
si1=l7;
si0+=si1;
l6=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
l9=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si0=l1;
si0=i32_load8_u(&i->m0,(U64)si0+19U);
if(si0){
goto L53;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+8U);
l7=si0;
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
si1=1993552U;
i32_store(&i->m0,(U64)si0+112U,si1);
si0=l3;
si1=0U;
i32_store(&i->m0,(U64)si0+108U,si1);
si0=l3;
si1=1993552U;
i32_store(&i->m0,(U64)si0+104U,si1);
si0=l3;
si1=l7;
i32_store(&i->m0,(U64)si0+120U,si1);
si0=l3;
si1=0U;
i32_store16(&i->m0,(U64)si0+76U,si1);
si0=l3;
si1=l6;
i32_store(&i->m0,(U64)si0+72U,si1);
si0=l3;
si1=0U;
i32_store(&i->m0,(U64)si0+68U,si1);
si0=l3;
sj1=42949672961ULL;
i64_store(&i->m0,(U64)si0+60U,sj1);
si0=l3;
si1=l6;
i32_store(&i->m0,(U64)si0+56U,si1);
si0=l3;
si1=0U;
i32_store(&i->m0,(U64)si0+52U,si1);
si0=l3;
si1=l6;
i32_store(&i->m0,(U64)si0+48U,si1);
si0=l3;
si1=l8;
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
si1=128U;
si0+=si1;
si1=l3;
si2=40U;
si1+=si2;
f310(i,si0,si1);
si0=l3;
si1=24U;
si0+=si1;
si1=l3;
si1=i32_load(&i->m0,(U64)si1+128U);
l10=si1;
si2=l3;
si2=i32_load(&i->m0,(U64)si2+136U);
l7=si2;
si3=1088576U;
si4=1U;
f467(i,si0,si1,si2,si3,si4);
si0=l7;
si0=!(si0);
if(si0){
goto L54;
}
si0=l10;
l6=si0;
L55:;
{
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
si1=12U;
si0+=si1;
l6=si0;
si0=l7;
si1=-1U;
si0+=si1;
l7=si0;
if(si0){
goto L55;
}
}
L54:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+132U);
si0=!(si0);
if(si0){
goto L57;
}
si0=l10;
f15271(i,si0);
L57:;
si0=l3;
si1=116U;
si0+=si1;
sj1=1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=177U;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l3;
si1=1U;
i32_store(&i->m0,(U64)si0+108U,si1);
si0=l3;
si1=1088568U;
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
si3=l9;
si3=i32_load(&i->m0,(U64)si3+36U);
TF(i->t0,si3,void (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+28U);
si0=!(si0);
if(si0){
goto L52;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0+24U);
f15271(i,si0);
goto L52;
L53:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+8U);
l7=si0;
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
si1=1993552U;
i32_store(&i->m0,(U64)si0+112U,si1);
si0=l3;
si1=0U;
i32_store(&i->m0,(U64)si0+108U,si1);
si0=l3;
si1=1993552U;
i32_store(&i->m0,(U64)si0+104U,si1);
si0=l3;
si1=l7;
i32_store(&i->m0,(U64)si0+120U,si1);
si0=l3;
si1=0U;
i32_store16(&i->m0,(U64)si0+76U,si1);
si0=l3;
si1=l6;
i32_store(&i->m0,(U64)si0+72U,si1);
si0=l3;
si1=0U;
i32_store(&i->m0,(U64)si0+68U,si1);
si0=l3;
sj1=42949672961ULL;
i64_store(&i->m0,(U64)si0+60U,sj1);
si0=l3;
si1=l6;
i32_store(&i->m0,(U64)si0+56U,si1);
si0=l3;
si1=0U;
i32_store(&i->m0,(U64)si0+52U,si1);
si0=l3;
si1=l6;
i32_store(&i->m0,(U64)si0+48U,si1);
si0=l3;
si1=l8;
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
si1=128U;
si0+=si1;
si1=l3;
si2=40U;
si1+=si2;
f310(i,si0,si1);
si0=l3;
si1=24U;
si0+=si1;
si1=l3;
si1=i32_load(&i->m0,(U64)si1+128U);
l10=si1;
si2=l3;
si2=i32_load(&i->m0,(U64)si2+136U);
l7=si2;
si3=1088576U;
si4=1U;
f467(i,si0,si1,si2,si3,si4);
si0=l7;
si0=!(si0);
if(si0){
goto L58;
}
si0=l10;
l6=si0;
L59:;
{
si0=l6;
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L60;
}
si0=l6;
si0=i32_load(&i->m0,(U64)si0);
f15271(i,si0);
L60:;
si0=l6;
si1=12U;
si0+=si1;
l6=si0;
si0=l7;
si1=-1U;
si0+=si1;
l7=si0;
if(si0){
goto L59;
}
}
L58:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+132U);
si0=!(si0);
if(si0){
goto L61;
}
si0=l10;
f15271(i,si0);
L61:;
si0=l1;
si0=i32_load8_u(&i->m0,(U64)si0+16U);
switch(si0){
case 0:
goto L65;
case 1:
goto L64;
case 2:
goto L63;
default:
goto L65;
}
L65:;
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
goto L62;
L64:;
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
goto L62;
L63:;
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
L62:;
si0=l3;
si1=52U;
si0+=si1;
sj1=1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=179U;
i32_store(&i->m0,(U64)si0+132U,si1);
si0=l3;
si1=1U;
i32_store(&i->m0,(U64)si0+44U,si1);
si0=l3;
si1=1088568U;
i32_store(&i->m0,(U64)si0+40U,si1);
si0=l3;
si1=l3;
si2=104U;
si1+=si2;
i32_store(&i->m0,(U64)si0+128U,si1);
si0=l3;
si1=l3;
si2=128U;
si1+=si2;
i32_store(&i->m0,(U64)si0+48U,si1);
si0=l3;
si1=8U;
si0+=si1;
si1=l2;
si2=l3;
si3=40U;
si2+=si3;
si3=l9;
si3=i32_load(&i->m0,(U64)si3+36U);
TF(i->t0,si3,void (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+104U);
switch(si0){
case 0:
goto L69;
case 1:
goto L68;
case 2:
goto L67;
default:
goto L70;
}
L70:;
si0=l3;
si1=104U;
si0+=si1;
si1=4U;
si0|=si1;
l6=si0;
goto L66;
L69:;
si0=l3;
si1=104U;
si0+=si1;
si1=4U;
si0|=si1;
l6=si0;
goto L66;
L68:;
si0=l3;
si1=104U;
si0+=si1;
si1=4U;
si0|=si1;
l6=si0;
goto L66;
L67:;
si0=l3;
si1=104U;
si0+=si1;
si1=4U;
si0|=si1;
l6=si0;
L66:;
si0=l6;
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L52;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0+108U);
f15271(i,si0);
L52:;
si0=l3;
si0=i32_load8_u(&i->m0,(U64)si0+8U);
l6=si0;
si1=4U;
si0=si0 != si1;
if(si0){
goto L71;
}
si0=l4;
si0=!(si0);
if(si0){
goto L2;
}
si0=l8;
f15271(i,si0);
goto L2;
L71:;
si0=l0;
si1=l3;
si1=i32_load(&i->m0,(U64)si1+9U);
i32_store(&i->m0,(U64)si0+1U,si1);
si0=l0;
si1=4U;
si0+=si1;
si1=l3;
si1=i32_load(&i->m0,(U64)si1+12U);
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l6;
i32_store8(&i->m0,(U64)si0,si1);
si0=l4;
si0=!(si0);
if(si0){
goto L1;
}
si0=l8;
f15271(i,si0);
goto L1;
L5:;
f53(i);
UNREACHABLE;
L4:;
si0=1U;
si1=l5;
f52(i,si0,si1);
UNREACHABLE;
L3:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
l11=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l12=si0;
si0=l1;
si0=i32_load8_u(&i->m0,(U64)si0+19U);
if(si0){
goto L73;
}
si0=0U;
l7=si0;
si0=l3;
si1=0U;
i32_store(&i->m0,(U64)si0+136U,si1);
si0=l3;
sj1=1ULL;
i64_store(&i->m0,(U64)si0+128U,sj1);
si0=l3;
si1=40U;
si0+=si1;
si1=l4;
si2=l5;
si3=1088628U;
si4=1U;
f760(i,si0,si1,si2,si3,si4);
si0=l3;
si1=104U;
si0+=si1;
si1=l3;
si2=40U;
si1+=si2;
f385(i,si0,si1);
si0=0U;
l6=si0;
si0=0U;
l8=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+104U);
si0=!(si0);
if(si0){
goto L74;
}
si0=0U;
l6=si0;
si0=1U;
l2=si0;
si0=0U;
l8=si0;
L75:;
{
si0=l3;
si0=i32_load(&i->m0,(U64)si0+108U);
si1=l8;
si0-=si1;
l7=si0;
si0=l4;
si1=l8;
si0+=si1;
l10=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+112U);
l8=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+132U);
l9=si0;
si1=l6;
si0-=si1;
si1=l7;
si0=si0 >= si1;
if(si0){
goto L76;
}
si0=l3;
si1=128U;
si0+=si1;
si1=l6;
si2=l7;
f580(i,si0,si1,si2);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+132U);
l9=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+128U);
l2=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+136U);
l6=si0;
L76:;
si0=l2;
si1=l6;
si0+=si1;
si1=l10;
si2=l7;
si0=f15390(i,si0,si1,si2);
si0=l3;
si1=l6;
si2=l7;
si1+=si2;
l6=si1;
i32_store(&i->m0,(U64)si0+136U,si1);
si0=l9;
si1=l6;
si0=si0 != si1;
if(si0){
goto L77;
}
si0=l3;
si1=128U;
si0+=si1;
si1=l9;
si2=1U;
f580(i,si0,si1,si2);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+128U);
l2=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+136U);
l6=si0;
L77:;
si0=l2;
si1=l6;
si0+=si1;
si1=45U;
i32_store8(&i->m0,(U64)si0,si1);
si0=l3;
si1=l6;
si2=1U;
si1+=si2;
l6=si1;
i32_store(&i->m0,(U64)si0+136U,si1);
si0=l3;
si1=104U;
si0+=si1;
si1=l3;
si2=40U;
si1+=si2;
f385(i,si0,si1);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+104U);
if(si0){
goto L75;
}
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0+132U);
l7=si0;
L74:;
si0=l4;
si1=l8;
si0+=si1;
l4=si0;
si0=l7;
si1=l6;
si0-=si1;
si1=l5;
si2=l8;
si1-=si2;
l7=si1;
si0=si0 >= si1;
if(si0){
goto L78;
}
si0=l3;
si1=128U;
si0+=si1;
si1=l6;
si2=l7;
f580(i,si0,si1,si2);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+136U);
l6=si0;
L78:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+128U);
si1=l6;
si0+=si1;
si1=l4;
si2=l7;
si0=f15390(i,si0,si1,si2);
si0=l3;
si1=112U;
si0+=si1;
si1=l6;
si2=l7;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=52U;
si0+=si1;
sj1=1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=l3;
sj1=i64_load(&i->m0,(U64)si1+128U);
i64_store(&i->m0,(U64)si0+104U,sj1);
si0=l3;
si1=177U;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l3;
si1=1U;
i32_store(&i->m0,(U64)si0+44U,si1);
si0=l3;
si1=1088568U;
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
goto L72;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0+104U);
f15271(i,si0);
goto L72;
L73:;
si0=0U;
l7=si0;
si0=l3;
si1=0U;
i32_store(&i->m0,(U64)si0+136U,si1);
si0=l3;
sj1=1ULL;
i64_store(&i->m0,(U64)si0+128U,sj1);
si0=l3;
si1=40U;
si0+=si1;
si1=l4;
si2=l5;
si3=1088628U;
si4=1U;
f760(i,si0,si1,si2,si3,si4);
si0=l3;
si1=104U;
si0+=si1;
si1=l3;
si2=40U;
si1+=si2;
f385(i,si0,si1);
si0=0U;
l6=si0;
si0=0U;
l8=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+104U);
si0=!(si0);
if(si0){
goto L79;
}
si0=0U;
l6=si0;
si0=1U;
l2=si0;
si0=0U;
l8=si0;
L80:;
{
si0=l3;
si0=i32_load(&i->m0,(U64)si0+108U);
si1=l8;
si0-=si1;
l7=si0;
si0=l4;
si1=l8;
si0+=si1;
l10=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+112U);
l8=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+132U);
l9=si0;
si1=l6;
si0-=si1;
si1=l7;
si0=si0 >= si1;
if(si0){
goto L81;
}
si0=l3;
si1=128U;
si0+=si1;
si1=l6;
si2=l7;
f580(i,si0,si1,si2);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+132U);
l9=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+128U);
l2=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+136U);
l6=si0;
L81:;
si0=l2;
si1=l6;
si0+=si1;
si1=l10;
si2=l7;
si0=f15390(i,si0,si1,si2);
si0=l3;
si1=l6;
si2=l7;
si1+=si2;
l6=si1;
i32_store(&i->m0,(U64)si0+136U,si1);
si0=l9;
si1=l6;
si0=si0 != si1;
if(si0){
goto L82;
}
si0=l3;
si1=128U;
si0+=si1;
si1=l9;
si2=1U;
f580(i,si0,si1,si2);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+128U);
l2=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+136U);
l6=si0;
L82:;
si0=l2;
si1=l6;
si0+=si1;
si1=45U;
i32_store8(&i->m0,(U64)si0,si1);
si0=l3;
si1=l6;
si2=1U;
si1+=si2;
l6=si1;
i32_store(&i->m0,(U64)si0+136U,si1);
si0=l3;
si1=104U;
si0+=si1;
si1=l3;
si2=40U;
si1+=si2;
f385(i,si0,si1);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+104U);
if(si0){
goto L80;
}
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0+132U);
l7=si0;
L79:;
si0=l4;
si1=l8;
si0+=si1;
l4=si0;
si0=l7;
si1=l6;
si0-=si1;
si1=l5;
si2=l8;
si1-=si2;
l7=si1;
si0=si0 >= si1;
if(si0){
goto L83;
}
si0=l3;
si1=128U;
si0+=si1;
si1=l6;
si2=l7;
f580(i,si0,si1,si2);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+136U);
l6=si0;
L83:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+128U);
si1=l6;
si0+=si1;
si1=l4;
si2=l7;
si0=f15390(i,si0,si1,si2);
si0=l3;
si1=32U;
si0+=si1;
l8=si0;
si1=l6;
si2=l7;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=l3;
sj1=i64_load(&i->m0,(U64)si1+128U);
i64_store(&i->m0,(U64)si0+24U,sj1);
si0=l1;
si0=i32_load8_u(&i->m0,(U64)si0+16U);
switch(si0){
case 0:
goto L87;
case 1:
goto L86;
case 2:
goto L85;
default:
goto L87;
}
L87:;
si0=l3;
si1=116U;
si0+=si1;
si1=l8;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=l3;
sj1=i64_load(&i->m0,(U64)si1+24U);
i64_store(&i->m0,(U64)si0+108U,sj1);
si0=l3;
si1=2U;
i32_store(&i->m0,(U64)si0+104U,si1);
goto L84;
L86:;
si0=l3;
si1=116U;
si0+=si1;
si1=l8;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=l3;
sj1=i64_load(&i->m0,(U64)si1+24U);
i64_store(&i->m0,(U64)si0+108U,sj1);
si0=l3;
si1=2U;
i32_store(&i->m0,(U64)si0+104U,si1);
goto L84;
L85:;
si0=l3;
si1=116U;
si0+=si1;
si1=l8;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=l3;
sj1=i64_load(&i->m0,(U64)si1+24U);
i64_store(&i->m0,(U64)si0+108U,sj1);
si0=l3;
si1=3U;
i32_store(&i->m0,(U64)si0+104U,si1);
L84:;
si0=l3;
si1=52U;
si0+=si1;
sj1=1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=179U;
i32_store(&i->m0,(U64)si0+132U,si1);
si0=l3;
si1=1U;
i32_store(&i->m0,(U64)si0+44U,si1);
si0=l3;
si1=1088568U;
i32_store(&i->m0,(U64)si0+40U,si1);
si0=l3;
si1=l3;
si2=104U;
si1+=si2;
i32_store(&i->m0,(U64)si0+128U,si1);
si0=l3;
si1=l3;
si2=128U;
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
si0=i32_load(&i->m0,(U64)si0+104U);
switch(si0){
case 0:
goto L91;
case 1:
goto L90;
case 2:
goto L89;
default:
goto L92;
}
L92:;
si0=l3;
si1=104U;
si0+=si1;
si1=4U;
si0|=si1;
l6=si0;
goto L88;
L91:;
si0=l3;
si1=104U;
si0+=si1;
si1=4U;
si0|=si1;
l6=si0;
goto L88;
L90:;
si0=l3;
si1=104U;
si0+=si1;
si1=4U;
si0|=si1;
l6=si0;
goto L88;
L89:;
si0=l3;
si1=104U;
si0+=si1;
si1=4U;
si0|=si1;
l6=si0;
L88:;
si0=l6;
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L72;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0+108U);
f15271(i,si0);
L72:;
si0=l3;
si0=i32_load8_u(&i->m0,(U64)si0+16U);
l6=si0;
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
si1=i32_load(&i->m0,(U64)si1+20U);
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l6;
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

void f390(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
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
i64_store(&i->m0,(U64)si0+32U,sj1);
si0=l4;
sj1=0ULL;
i64_store(&i->m0,(U64)si0+40U,sj1);
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
si0=f481(i,si0,si1);
if(si0){
goto L6;
}
si0=l7;
si1=17U;
si0=f481(i,si0,si1);
si0=!(si0);
if(si0){
goto L3;
}
si0=l7;
si1=16U;
si0=f481(i,si0,si1);
si0=l7;
si1=7U;
si0=f481(i,si0,si1);
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
si0=f481(i,si0,si1);
if(si0){
goto L8;
}
si0=l7;
si1=17U;
si0=f481(i,si0,si1);
si0=l7;
si1=16U;
si0=f481(i,si0,si1);
si0=!(si0);
if(si0){
goto L3;
}
si0=l7;
si1=7U;
si0=f481(i,si0,si1);
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
si0=f482(i,si0);
si0=!(si0);
if(si0){
goto L9;
}
si0=l4;
si1=0U;
i32_store(&i->m0,(U64)si0+56U,si1);
si0=l4;
sj1=1ULL;
i64_store(&i->m0,(U64)si0+48U,sj1);
si0=l4;
si1=3U;
i32_store8(&i->m0,(U64)si0+96U,si1);
si0=l4;
si1=32U;
i32_store(&i->m0,(U64)si0+80U,si1);
si0=l4;
si1=0U;
i32_store(&i->m0,(U64)si0+92U,si1);
si0=l4;
si1=1087764U;
i32_store(&i->m0,(U64)si0+88U,si1);
si0=l4;
si1=0U;
i32_store(&i->m0,(U64)si0+72U,si1);
si0=l4;
si1=0U;
i32_store(&i->m0,(U64)si0+64U,si1);
si0=l4;
si1=l4;
si2=48U;
si1+=si2;
i32_store(&i->m0,(U64)si0+84U,si1);
si0=l7;
si1=l4;
si2=64U;
si1+=si2;
si0=f474(i,si0,si1);
if(si0){
goto L10;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0+52U);
l8=si0;
si0=l1;
si1=l5;
si2=l4;
si2=i32_load(&i->m0,(U64)si2+48U);
l9=si2;
si3=l4;
si3=i32_load(&i->m0,(U64)si3+56U);
si2=f386(i,si2,si3);
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
f15271(i,si0);
goto L9;
L10:;
si0=1087788U;
si1=55U;
si2=l4;
si3=104U;
si2+=si3;
si3=1087844U;
si4=1087936U;
f712(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L9:;
si0=l7;
si0=f500(i,si0);
l8=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+40U);
si1=l8;
si0=si0 <= si1;
if(si0){
goto L12;
}
si0=1U;
l10=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+32U);
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
i32_store(&i->m0,(U64)si0+56U,si1);
si0=l4;
si1=l10;
i32_store(&i->m0,(U64)si0+48U,si1);
si0=l4;
si1=l4;
si2=32U;
si1+=si2;
i32_store(&i->m0,(U64)si0+52U,si1);
si0=l4;
si1=0U;
i32_store(&i->m0,(U64)si0+72U,si1);
si0=l4;
si1=0U;
i32_store(&i->m0,(U64)si0+64U,si1);
si0=l4;
si1=48U;
si0+=si1;
si1=l4;
si2=64U;
si1+=si2;
si0=f331(i,si0,si1);
l8=si0;
si0=l4;
si1=24U;
si0+=si1;
si1=l7;
f475(i,si0,si1);
si0=l4;
si1=16U;
si0+=si1;
si1=l8;
si2=l4;
si2=i32_load(&i->m0,(U64)si2+24U);
si3=l4;
si3=i32_load(&i->m0,(U64)si3+28U);
si4=l7;
si5=1088432U;
f465(i,si0,si1,si2,si3,si4,si5);
si0=l2;
si1=l3;
si0=si0 != si1;
if(si0){
goto L2;
}
}
L1:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+40U);
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
si0=i32_load(&i->m0,(U64)si0+32U);
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
i32_store(&i->m0,(U64)si0+96U,si1);
si0=l4;
si1=l10;
i32_store(&i->m0,(U64)si0+92U,si1);
si0=l4;
si1=l9;
i32_store(&i->m0,(U64)si0+88U,si1);
si0=l4;
si1=0U;
i32_store(&i->m0,(U64)si0+84U,si1);
si0=l4;
si1=l7;
i32_store(&i->m0,(U64)si0+80U,si1);
si0=l4;
si1=l10;
i32_store(&i->m0,(U64)si0+76U,si1);
si0=l4;
si1=l13;
i32_store(&i->m0,(U64)si0+72U,si1);
si0=l4;
si1=0U;
i32_store(&i->m0,(U64)si0+68U,si1);
si0=l4;
si1=l7;
i32_store(&i->m0,(U64)si0+64U,si1);
si0=l4;
si1=64U;
si0+=si1;
si0=f452(i,si0);
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
si1=48U;
si0+=si1;
si1=l1;
si1=i32_load(&i->m0,(U64)si1);
si2=1088576U;
si3=1U;
si4=l1;
si4=i32_load(&i->m0,(U64)si4+4U);
si4=i32_load(&i->m0,(U64)si4+28U);
TF(i->t0,si4,void (*)(rustpythonInstance*,U32,U32,U32,U32))(i,si0,si1,si2,si3);
si0=l4;
si0=i32_load8_u(&i->m0,(U64)si0+48U);
l6=si0;
si1=4U;
si0=si0 != si1;
if(si0){
goto L25;
}
L26:;
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
si1=48U;
si0+=si1;
si1=l1;
si2=l4;
si2=i32_load(&i->m0,(U64)si2+8U);
si3=l4;
si3=i32_load(&i->m0,(U64)si3+12U);
f388(i,si0,si1,si2,si3);
si0=l4;
si0=i32_load8_u(&i->m0,(U64)si0+48U);
l6=si0;
si1=4U;
si0=si0 != si1;
if(si0){
goto L27;
}
si0=0U;
l11=si0;
si0=l4;
si1=64U;
si0+=si1;
si0=f452(i,si0);
l7=si0;
si0=!(si0);
if(si0){
goto L23;
}
L28:;
{
si0=l4;
si1=48U;
si0+=si1;
si1=l1;
si1=i32_load(&i->m0,(U64)si1);
si2=1088576U;
si3=1U;
si4=l1;
si4=i32_load(&i->m0,(U64)si4+4U);
si4=i32_load(&i->m0,(U64)si4+28U);
TF(i->t0,si4,void (*)(rustpythonInstance*,U32,U32,U32,U32))(i,si0,si1,si2,si3);
si0=l4;
si0=i32_load8_u(&i->m0,(U64)si0+48U);
l6=si0;
si1=4U;
si0=si0 != si1;
if(si0){
goto L25;
}
si0=l4;
si1=l7;
si1=i32_load(&i->m0,(U64)si1);
si2=l7;
si2=i32_load(&i->m0,(U64)si2+4U);
si2=i32_load(&i->m0,(U64)si2+132U);
TF(i->t0,si2,void (*)(rustpythonInstance*,U32,U32))(i,si0,si1);
si0=l4;
si1=48U;
si0+=si1;
si1=l1;
si2=l4;
si2=i32_load(&i->m0,(U64)si2);
si3=l4;
si3=i32_load(&i->m0,(U64)si3+4U);
f388(i,si0,si1,si2,si3);
si0=l4;
si0=i32_load8_u(&i->m0,(U64)si0+48U);
l6=si0;
si1=4U;
si0=si0 != si1;
if(si0){
goto L27;
}
si0=l4;
si1=64U;
si0+=si1;
si0=f452(i,si0);
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
si1=i32_load(&i->m0,(U64)si1+49U);
i32_store(&i->m0,(U64)si0+1U,si1);
si0=l0;
si1=4U;
si0+=si1;
si1=l4;
si1=i32_load(&i->m0,(U64)si1+52U);
i32_store(&i->m0,(U64)si0,si1);
goto L24;
L25:;
si0=l0;
si1=l4;
si1=i32_load(&i->m0,(U64)si1+49U);
i32_store(&i->m0,(U64)si0+1U,si1);
si0=l0;
si1=4U;
si0+=si1;
si1=l4;
si1=i32_load(&i->m0,(U64)si1+52U);
i32_store(&i->m0,(U64)si0,si1);
L24:;
si0=l0;
si1=l6;
i32_store8(&i->m0,(U64)si0,si1);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+40U);
l3=si0;
si0=!(si0);
if(si0){
goto L29;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0+32U);
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
f469(i,si0);
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
si0=i32_load(&i->m0,(U64)si0+36U);
si0=!(si0);
if(si0){
goto L13;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0+32U);
f15271(i,si0);
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
si0=i32_load(&i->m0,(U64)si0+40U);
l3=si0;
si0=!(si0);
if(si0){
goto L14;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0+32U);
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
f469(i,si0);
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
si0=i32_load(&i->m0,(U64)si0+36U);
si0=!(si0);
if(si0){
goto L13;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0+32U);
f15271(i,si0);
L13:;
si0=l4;
si1=112U;
si0+=si1;
i->g0=si0;
L0:;
}

void f391(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
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
i64_store(&i->m0,(U64)si0+32U,sj1);
si0=l3;
sj1=0ULL;
i64_store(&i->m0,(U64)si0+40U,sj1);
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
si0=f514(i,si0,si1);
if(si0){
goto L13;
}
si0=l2;
si1=17U;
si0=f514(i,si0,si1);
si0=!(si0);
if(si0){
goto L9;
}
si0=l2;
si1=16U;
si0=f514(i,si0,si1);
si0=l2;
si1=7U;
si0=f514(i,si0,si1);
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
si0=f514(i,si0,si1);
if(si0){
goto L15;
}
si0=l2;
si1=17U;
si0=f514(i,si0,si1);
si0=l2;
si1=16U;
si0=f514(i,si0,si1);
si0=!(si0);
if(si0){
goto L9;
}
si0=l2;
si1=7U;
si0=f514(i,si0,si1);
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
si0=f481(i,si0,si1);
if(si0){
goto L19;
}
si0=l2;
si1=17U;
si0=f481(i,si0,si1);
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
si0=f481(i,si0,si1);
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
si0=f481(i,si0,si1);
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
si0=i32_load(&i->m0,(U64)si0+40U);
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
si0=1088432U;
l10=si0;
si0=0U;
l8=si0;
goto L8;
L9:;
si0=l2;
si1=120U;
si0+=si1;
l8=si0;
si0=1088128U;
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
si0=i32_load(&i->m0,(U64)si0+32U);
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
i32_store(&i->m0,(U64)si0+96U,si1);
si0=l3;
si1=l8;
i32_store(&i->m0,(U64)si0+92U,si1);
si0=l3;
si1=l13;
i32_store(&i->m0,(U64)si0+88U,si1);
si0=l3;
si1=0U;
i32_store(&i->m0,(U64)si0+84U,si1);
si0=l3;
si1=l2;
i32_store(&i->m0,(U64)si0+80U,si1);
si0=l3;
si1=l8;
i32_store(&i->m0,(U64)si0+76U,si1);
si0=l3;
si1=l12;
i32_store(&i->m0,(U64)si0+72U,si1);
si0=l3;
si1=0U;
i32_store(&i->m0,(U64)si0+68U,si1);
si0=l3;
si1=l2;
i32_store(&i->m0,(U64)si0+64U,si1);
si0=l3;
si1=64U;
si0+=si1;
si0=f452(i,si0);
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
si1=48U;
si0+=si1;
si1=l1;
si1=i32_load(&i->m0,(U64)si1);
si2=1088576U;
si3=1U;
si4=l1;
si4=i32_load(&i->m0,(U64)si4+4U);
si4=i32_load(&i->m0,(U64)si4+28U);
TF(i->t0,si4,void (*)(rustpythonInstance*,U32,U32,U32,U32))(i,si0,si1,si2,si3);
si0=l3;
si0=i32_load8_u(&i->m0,(U64)si0+48U);
l6=si0;
si1=4U;
si0=si0 != si1;
if(si0){
goto L30;
}
L31:;
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
si1=48U;
si0+=si1;
si1=l1;
si2=l3;
si2=i32_load(&i->m0,(U64)si2+8U);
si3=l3;
si3=i32_load(&i->m0,(U64)si3+12U);
f388(i,si0,si1,si2,si3);
si0=l3;
si0=i32_load8_u(&i->m0,(U64)si0+48U);
l6=si0;
si1=4U;
si0=si0 != si1;
if(si0){
goto L32;
}
si0=0U;
l4=si0;
si0=l3;
si1=64U;
si0+=si1;
si0=f452(i,si0);
l2=si0;
si0=!(si0);
if(si0){
goto L28;
}
L33:;
{
si0=l3;
si1=48U;
si0+=si1;
si1=l1;
si1=i32_load(&i->m0,(U64)si1);
si2=1088576U;
si3=1U;
si4=l1;
si4=i32_load(&i->m0,(U64)si4+4U);
si4=i32_load(&i->m0,(U64)si4+28U);
TF(i->t0,si4,void (*)(rustpythonInstance*,U32,U32,U32,U32))(i,si0,si1,si2,si3);
si0=l3;
si0=i32_load8_u(&i->m0,(U64)si0+48U);
l6=si0;
si1=4U;
si0=si0 != si1;
if(si0){
goto L30;
}
si0=l3;
si1=l2;
si1=i32_load(&i->m0,(U64)si1);
si2=l2;
si2=i32_load(&i->m0,(U64)si2+4U);
si2=i32_load(&i->m0,(U64)si2+132U);
TF(i->t0,si2,void (*)(rustpythonInstance*,U32,U32))(i,si0,si1);
si0=l3;
si1=48U;
si0+=si1;
si1=l1;
si2=l3;
si2=i32_load(&i->m0,(U64)si2);
si3=l3;
si3=i32_load(&i->m0,(U64)si3+4U);
f388(i,si0,si1,si2,si3);
si0=l3;
si0=i32_load8_u(&i->m0,(U64)si0+48U);
l6=si0;
si1=4U;
si0=si0 != si1;
if(si0){
goto L32;
}
si0=l3;
si1=64U;
si0+=si1;
si0=f452(i,si0);
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
si1=i32_load(&i->m0,(U64)si1+49U);
i32_store(&i->m0,(U64)si0+1U,si1);
si0=l0;
si1=4U;
si0+=si1;
si1=l3;
si1=i32_load(&i->m0,(U64)si1+52U);
i32_store(&i->m0,(U64)si0,si1);
goto L29;
L30:;
si0=l0;
si1=l3;
si1=i32_load(&i->m0,(U64)si1+49U);
i32_store(&i->m0,(U64)si0+1U,si1);
si0=l0;
si1=4U;
si0+=si1;
si1=l3;
si1=i32_load(&i->m0,(U64)si1+52U);
i32_store(&i->m0,(U64)si0,si1);
L29:;
si0=l0;
si1=l6;
i32_store8(&i->m0,(U64)si0,si1);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+40U);
l5=si0;
si0=!(si0);
if(si0){
goto L34;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0+32U);
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
f469(i,si0);
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
si0=i32_load(&i->m0,(U64)si0+36U);
si0=!(si0);
if(si0){
goto L3;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0+32U);
f15271(i,si0);
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
i32_store(&i->m0,(U64)si0+56U,si1);
si0=l3;
sj1=1ULL;
i64_store(&i->m0,(U64)si0+48U,sj1);
si0=l3;
si1=3U;
i32_store8(&i->m0,(U64)si0+96U,si1);
si0=l3;
si1=32U;
i32_store(&i->m0,(U64)si0+80U,si1);
si0=l3;
si1=0U;
i32_store(&i->m0,(U64)si0+92U,si1);
si0=l3;
si1=1087764U;
i32_store(&i->m0,(U64)si0+88U,si1);
si0=l3;
si1=0U;
i32_store(&i->m0,(U64)si0+72U,si1);
si0=l3;
si1=0U;
i32_store(&i->m0,(U64)si0+64U,si1);
si0=l3;
si1=l3;
si2=48U;
si1+=si2;
i32_store(&i->m0,(U64)si0+84U,si1);
si0=l2;
si1=l3;
si2=64U;
si1+=si2;
si2=l10;
si2=i32_load(&i->m0,(U64)si2+12U);
si0=TF(i->t0,si2,U32 (*)(rustpythonInstance*,U32,U32))(i,si0,si1);
if(si0){
goto L37;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0+52U);
l13=si0;
si0=l1;
si1=l4;
si2=l3;
si2=i32_load(&i->m0,(U64)si2+48U);
l11=si2;
si3=l3;
si3=i32_load(&i->m0,(U64)si3+56U);
si2=f386(i,si2,si3);
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
f15271(i,si0);
goto L2;
L37:;
si0=1087788U;
si1=55U;
si2=l3;
si3=104U;
si2+=si3;
si3=1087844U;
si4=1087936U;
f712(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L5:;
si0=l0;
si1=4U;
i32_store8(&i->m0,(U64)si0,si1);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+40U);
l5=si0;
si0=!(si0);
if(si0){
goto L4;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0+32U);
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
f469(i,si0);
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
si0=i32_load(&i->m0,(U64)si0+36U);
si0=!(si0);
if(si0){
goto L3;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0+32U);
f15271(i,si0);
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
si0=i32_load(&i->m0,(U64)si0+40U);
si1=l13;
si0=si0 <= si1;
if(si0){
goto L41;
}
si0=1U;
l12=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+32U);
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
i32_store(&i->m0,(U64)si0+56U,si1);
si0=l3;
si1=l12;
i32_store(&i->m0,(U64)si0+48U,si1);
si0=l3;
si1=l3;
si2=32U;
si1+=si2;
i32_store(&i->m0,(U64)si0+52U,si1);
si0=l3;
si1=0U;
i32_store(&i->m0,(U64)si0+72U,si1);
si0=l3;
si1=0U;
i32_store(&i->m0,(U64)si0+64U,si1);
si0=l3;
si1=48U;
si0+=si1;
si1=l3;
si2=64U;
si1+=si2;
si0=f331(i,si0,si1);
l13=si0;
si0=l3;
si1=24U;
si0+=si1;
si1=l2;
si2=l10;
si2=i32_load(&i->m0,(U64)si2+16U);
TF(i->t0,si2,void (*)(rustpythonInstance*,U32,U32))(i,si0,si1);
si0=l3;
si1=16U;
si0+=si1;
si1=l13;
si2=l3;
si2=i32_load(&i->m0,(U64)si2+24U);
si3=l3;
si3=i32_load(&i->m0,(U64)si3+28U);
si4=l2;
si5=l10;
f465(i,si0,si1,si2,si3,si4,si5);
goto L1;
}
L0:;
}

void f392(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
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
i64_store(&i->m0,(U64)si0+32U,sj1);
si0=l4;
sj1=0ULL;
i64_store(&i->m0,(U64)si0+40U,sj1);
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
si0=f514(i,si0,si1);
if(si0){
goto L6;
}
si0=l7;
si1=17U;
si0=f514(i,si0,si1);
si0=!(si0);
if(si0){
goto L3;
}
si0=l7;
si1=16U;
si0=f514(i,si0,si1);
si0=l7;
si1=7U;
si0=f514(i,si0,si1);
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
si0=f514(i,si0,si1);
if(si0){
goto L8;
}
si0=l7;
si1=17U;
si0=f514(i,si0,si1);
si0=l7;
si1=16U;
si0=f514(i,si0,si1);
si0=!(si0);
if(si0){
goto L3;
}
si0=l7;
si1=7U;
si0=f514(i,si0,si1);
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
si0=f529(i,si0);
si0=!(si0);
if(si0){
goto L9;
}
si0=l4;
si1=0U;
i32_store(&i->m0,(U64)si0+56U,si1);
si0=l4;
sj1=1ULL;
i64_store(&i->m0,(U64)si0+48U,sj1);
si0=l4;
si1=3U;
i32_store8(&i->m0,(U64)si0+96U,si1);
si0=l4;
si1=32U;
i32_store(&i->m0,(U64)si0+80U,si1);
si0=l4;
si1=0U;
i32_store(&i->m0,(U64)si0+92U,si1);
si0=l4;
si1=1087764U;
i32_store(&i->m0,(U64)si0+88U,si1);
si0=l4;
si1=0U;
i32_store(&i->m0,(U64)si0+72U,si1);
si0=l4;
si1=0U;
i32_store(&i->m0,(U64)si0+64U,si1);
si0=l4;
si1=l4;
si2=48U;
si1+=si2;
i32_store(&i->m0,(U64)si0+84U,si1);
si0=l7;
si1=l4;
si2=64U;
si1+=si2;
si0=f508(i,si0,si1);
if(si0){
goto L10;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0+52U);
l8=si0;
si0=l1;
si1=l5;
si2=l4;
si2=i32_load(&i->m0,(U64)si2+48U);
l9=si2;
si3=l4;
si3=i32_load(&i->m0,(U64)si3+56U);
si2=f386(i,si2,si3);
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
f15271(i,si0);
goto L9;
L10:;
si0=1087788U;
si1=55U;
si2=l4;
si3=104U;
si2+=si3;
si3=1087844U;
si4=1087936U;
f712(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L9:;
si0=l7;
si0=f531(i,si0);
l8=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+40U);
si1=l8;
si0=si0 <= si1;
if(si0){
goto L12;
}
si0=1U;
l10=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+32U);
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
i32_store(&i->m0,(U64)si0+56U,si1);
si0=l4;
si1=l10;
i32_store(&i->m0,(U64)si0+48U,si1);
si0=l4;
si1=l4;
si2=32U;
si1+=si2;
i32_store(&i->m0,(U64)si0+52U,si1);
si0=l4;
si1=0U;
i32_store(&i->m0,(U64)si0+72U,si1);
si0=l4;
si1=0U;
i32_store(&i->m0,(U64)si0+64U,si1);
si0=l4;
si1=48U;
si0+=si1;
si1=l4;
si2=64U;
si1+=si2;
si0=f331(i,si0,si1);
l8=si0;
si0=l4;
si1=24U;
si0+=si1;
si1=l7;
f509(i,si0,si1);
si0=l4;
si1=16U;
si0+=si1;
si1=l8;
si2=l4;
si2=i32_load(&i->m0,(U64)si2+24U);
si3=l4;
si3=i32_load(&i->m0,(U64)si3+28U);
si4=l7;
si5=1088128U;
f465(i,si0,si1,si2,si3,si4,si5);
si0=l2;
si1=l3;
si0=si0 != si1;
if(si0){
goto L2;
}
}
L1:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+40U);
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
si0=i32_load(&i->m0,(U64)si0+32U);
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
i32_store(&i->m0,(U64)si0+96U,si1);
si0=l4;
si1=l10;
i32_store(&i->m0,(U64)si0+92U,si1);
si0=l4;
si1=l9;
i32_store(&i->m0,(U64)si0+88U,si1);
si0=l4;
si1=0U;
i32_store(&i->m0,(U64)si0+84U,si1);
si0=l4;
si1=l7;
i32_store(&i->m0,(U64)si0+80U,si1);
si0=l4;
si1=l10;
i32_store(&i->m0,(U64)si0+76U,si1);
si0=l4;
si1=l13;
i32_store(&i->m0,(U64)si0+72U,si1);
si0=l4;
si1=0U;
i32_store(&i->m0,(U64)si0+68U,si1);
si0=l4;
si1=l7;
i32_store(&i->m0,(U64)si0+64U,si1);
si0=l4;
si1=64U;
si0+=si1;
si0=f452(i,si0);
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
si1=48U;
si0+=si1;
si1=l1;
si1=i32_load(&i->m0,(U64)si1);
si2=1088576U;
si3=1U;
si4=l1;
si4=i32_load(&i->m0,(U64)si4+4U);
si4=i32_load(&i->m0,(U64)si4+28U);
TF(i->t0,si4,void (*)(rustpythonInstance*,U32,U32,U32,U32))(i,si0,si1,si2,si3);
si0=l4;
si0=i32_load8_u(&i->m0,(U64)si0+48U);
l6=si0;
si1=4U;
si0=si0 != si1;
if(si0){
goto L25;
}
L26:;
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
si1=48U;
si0+=si1;
si1=l1;
si2=l4;
si2=i32_load(&i->m0,(U64)si2+8U);
si3=l4;
si3=i32_load(&i->m0,(U64)si3+12U);
f388(i,si0,si1,si2,si3);
si0=l4;
si0=i32_load8_u(&i->m0,(U64)si0+48U);
l6=si0;
si1=4U;
si0=si0 != si1;
if(si0){
goto L27;
}
si0=0U;
l11=si0;
si0=l4;
si1=64U;
si0+=si1;
si0=f452(i,si0);
l7=si0;
si0=!(si0);
if(si0){
goto L23;
}
L28:;
{
si0=l4;
si1=48U;
si0+=si1;
si1=l1;
si1=i32_load(&i->m0,(U64)si1);
si2=1088576U;
si3=1U;
si4=l1;
si4=i32_load(&i->m0,(U64)si4+4U);
si4=i32_load(&i->m0,(U64)si4+28U);
TF(i->t0,si4,void (*)(rustpythonInstance*,U32,U32,U32,U32))(i,si0,si1,si2,si3);
si0=l4;
si0=i32_load8_u(&i->m0,(U64)si0+48U);
l6=si0;
si1=4U;
si0=si0 != si1;
if(si0){
goto L25;
}
si0=l4;
si1=l7;
si1=i32_load(&i->m0,(U64)si1);
si2=l7;
si2=i32_load(&i->m0,(U64)si2+4U);
si2=i32_load(&i->m0,(U64)si2+132U);
TF(i->t0,si2,void (*)(rustpythonInstance*,U32,U32))(i,si0,si1);
si0=l4;
si1=48U;
si0+=si1;
si1=l1;
si2=l4;
si2=i32_load(&i->m0,(U64)si2);
si3=l4;
si3=i32_load(&i->m0,(U64)si3+4U);
f388(i,si0,si1,si2,si3);
si0=l4;
si0=i32_load8_u(&i->m0,(U64)si0+48U);
l6=si0;
si1=4U;
si0=si0 != si1;
if(si0){
goto L27;
}
si0=l4;
si1=64U;
si0+=si1;
si0=f452(i,si0);
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
si1=i32_load(&i->m0,(U64)si1+49U);
i32_store(&i->m0,(U64)si0+1U,si1);
si0=l0;
si1=4U;
si0+=si1;
si1=l4;
si1=i32_load(&i->m0,(U64)si1+52U);
i32_store(&i->m0,(U64)si0,si1);
goto L24;
L25:;
si0=l0;
si1=l4;
si1=i32_load(&i->m0,(U64)si1+49U);
i32_store(&i->m0,(U64)si0+1U,si1);
si0=l0;
si1=4U;
si0+=si1;
si1=l4;
si1=i32_load(&i->m0,(U64)si1+52U);
i32_store(&i->m0,(U64)si0,si1);
L24:;
si0=l0;
si1=l6;
i32_store8(&i->m0,(U64)si0,si1);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+40U);
l3=si0;
si0=!(si0);
if(si0){
goto L29;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0+32U);
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
f469(i,si0);
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
si0=i32_load(&i->m0,(U64)si0+36U);
si0=!(si0);
if(si0){
goto L13;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0+32U);
f15271(i,si0);
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
si0=i32_load(&i->m0,(U64)si0+40U);
l3=si0;
si0=!(si0);
if(si0){
goto L14;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0+32U);
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
f469(i,si0);
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
si0=i32_load(&i->m0,(U64)si0+36U);
si0=!(si0);
if(si0){
goto L13;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0+32U);
f15271(i,si0);
L13:;
si0=l4;
si1=112U;
si0+=si1;
i->g0=si0;
L0:;
}

void f393(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
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
si1=128U;
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
si1=92U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=1U;
i32_store(&i->m0,(U64)si0+84U,si1);
si0=l3;
si1=1089080U;
i32_store(&i->m0,(U64)si0+80U,si1);
si0=l3;
si1=l3;
si2=120U;
si1+=si2;
i32_store(&i->m0,(U64)si0+88U,si1);
si0=l3;
si1=40U;
si0+=si1;
si1=l11;
si2=l3;
si3=80U;
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
si1=80U;
si0+=si1;
si1=12U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=1U;
i32_store(&i->m0,(U64)si0+84U,si1);
si0=l3;
si1=1089100U;
i32_store(&i->m0,(U64)si0+80U,si1);
si0=l3;
si1=l3;
si2=120U;
si1+=si2;
i32_store(&i->m0,(U64)si0+88U,si1);
si0=l3;
si1=40U;
si0+=si1;
si1=l11;
si2=l3;
si3=80U;
si2+=si3;
si3=l8;
si3=i32_load(&i->m0,(U64)si3+36U);
TF(i->t0,si3,void (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
goto L30;
L38:;
si0=l3;
si1=72U;
si0+=si1;
si1=9U;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=1089090U;
i32_store(&i->m0,(U64)si0+68U,si1);
si0=l3;
si1=1U;
i32_store(&i->m0,(U64)si0+64U,si1);
goto L35;
L37:;
si0=l3;
si1=72U;
si0+=si1;
si1=9U;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=1089090U;
i32_store(&i->m0,(U64)si0+68U,si1);
si0=l3;
si1=1U;
i32_store(&i->m0,(U64)si0+64U,si1);
goto L35;
L36:;
si0=l3;
si1=72U;
si0+=si1;
si1=9U;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=1089090U;
i32_store(&i->m0,(U64)si0+68U,si1);
si0=l3;
si1=3U;
i32_store(&i->m0,(U64)si0+64U,si1);
L35:;
si0=l3;
si1=92U;
si0+=si1;
sj1=1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=178U;
i32_store(&i->m0,(U64)si0+52U,si1);
si0=l3;
si1=1U;
i32_store(&i->m0,(U64)si0+84U,si1);
si0=l3;
si1=1088568U;
i32_store(&i->m0,(U64)si0+80U,si1);
si0=l3;
si1=l3;
si2=64U;
si1+=si2;
i32_store(&i->m0,(U64)si0+48U,si1);
si0=l3;
si1=l3;
si2=48U;
si1+=si2;
i32_store(&i->m0,(U64)si0+88U,si1);
si0=l3;
si1=40U;
si0+=si1;
si1=l11;
si2=l3;
si3=80U;
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
si1=64U;
si0+=si1;
si1=l1;
si2=l3;
si3=24U;
si2+=si3;
f391(i,si0,si1,si2);
si0=l3;
si0=i32_load8_u(&i->m0,(U64)si0+64U);
l8=si0;
si1=4U;
si0=si0 == si1;
if(si0){
goto L20;
}
si0=l3;
si1=l3;
si1=i32_load(&i->m0,(U64)si1+68U);
i32_store(&i->m0,(U64)si0+84U,si1);
si0=l3;
si1=l3;
si1=i32_load(&i->m0,(U64)si1+65U);
i32_store(&i->m0,(U64)si0+81U,si1);
si0=l3;
si1=l8;
i32_store8(&i->m0,(U64)si0+80U,si1);
si0=l0;
si1=l3;
si2=80U;
si1+=si2;
f604(i,si0,si1);
goto L9;
L40:;
si0=l3;
si1=l3;
si1=i32_load(&i->m0,(U64)si1+44U);
i32_store(&i->m0,(U64)si0+84U,si1);
si0=l3;
si1=l3;
si1=i32_load(&i->m0,(U64)si1+41U);
i32_store(&i->m0,(U64)si0+81U,si1);
si0=l3;
si1=l8;
i32_store8(&i->m0,(U64)si0+80U,si1);
si0=l0;
si1=l3;
si2=80U;
si1+=si2;
f604(i,si0,si1);
goto L9;
L29:;
si0=l3;
si1=72U;
si0+=si1;
si1=7U;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=1089072U;
i32_store(&i->m0,(U64)si0+68U,si1);
si0=l3;
si1=3U;
i32_store(&i->m0,(U64)si0+64U,si1);
goto L26;
L28:;
si0=l3;
si1=72U;
si0+=si1;
si1=7U;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=1089072U;
i32_store(&i->m0,(U64)si0+68U,si1);
si0=l3;
si1=1U;
i32_store(&i->m0,(U64)si0+64U,si1);
goto L26;
L27:;
si0=l3;
si1=72U;
si0+=si1;
si1=7U;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=1089072U;
i32_store(&i->m0,(U64)si0+68U,si1);
si0=l3;
si1=1U;
i32_store(&i->m0,(U64)si0+64U,si1);
L26:;
si0=l3;
si1=92U;
si0+=si1;
sj1=1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=178U;
i32_store(&i->m0,(U64)si0+52U,si1);
si0=l3;
si1=1U;
i32_store(&i->m0,(U64)si0+84U,si1);
si0=l3;
si1=1088568U;
i32_store(&i->m0,(U64)si0+80U,si1);
si0=l3;
si1=l3;
si2=64U;
si1+=si2;
i32_store(&i->m0,(U64)si0+48U,si1);
si0=l3;
si1=l3;
si2=48U;
si1+=si2;
i32_store(&i->m0,(U64)si0+88U,si1);
si0=l3;
si1=40U;
si0+=si1;
si1=l11;
si2=l3;
si3=80U;
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
si1=64U;
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
f392(i,si0,si1,si2,si3);
si0=l3;
si0=i32_load8_u(&i->m0,(U64)si0+64U);
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
si1=l3;
si1=i32_load(&i->m0,(U64)si1+44U);
i32_store(&i->m0,(U64)si0+84U,si1);
si0=l3;
si1=l3;
si1=i32_load(&i->m0,(U64)si1+41U);
i32_store(&i->m0,(U64)si0+81U,si1);
si0=l3;
si1=l8;
i32_store8(&i->m0,(U64)si0+80U,si1);
si0=l0;
si1=l3;
si2=80U;
si1+=si2;
f604(i,si0,si1);
goto L9;
L42:;
si0=l3;
si1=l3;
si1=i32_load(&i->m0,(U64)si1+68U);
i32_store(&i->m0,(U64)si0+84U,si1);
si0=l3;
si1=l3;
si1=i32_load(&i->m0,(U64)si1+65U);
i32_store(&i->m0,(U64)si0+81U,si1);
si0=l3;
si1=l8;
i32_store8(&i->m0,(U64)si0+80U,si1);
si0=l0;
si1=l3;
si2=80U;
si1+=si2;
f604(i,si0,si1);
goto L9;
L41:;
si0=l3;
si1=64U;
si0+=si1;
si1=l1;
si1=i32_load(&i->m0,(U64)si1);
si2=1089088U;
si3=2U;
si4=l1;
si4=i32_load(&i->m0,(U64)si4+4U);
si4=i32_load(&i->m0,(U64)si4+28U);
TF(i->t0,si4,void (*)(rustpythonInstance*,U32,U32,U32,U32))(i,si0,si1,si2,si3);
si0=l3;
si0=i32_load8_u(&i->m0,(U64)si0+64U);
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
si1=92U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=1U;
i32_store(&i->m0,(U64)si0+84U,si1);
si0=l3;
si1=1089100U;
i32_store(&i->m0,(U64)si0+80U,si1);
si0=l3;
si1=l3;
si2=120U;
si1+=si2;
i32_store(&i->m0,(U64)si0+88U,si1);
si0=l3;
si1=40U;
si0+=si1;
si1=l11;
si2=l3;
si3=80U;
si2+=si3;
si3=l8;
si3=i32_load(&i->m0,(U64)si3+36U);
TF(i->t0,si3,void (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
goto L21;
L23:;
si0=l3;
si1=l3;
si1=i32_load(&i->m0,(U64)si1+68U);
i32_store(&i->m0,(U64)si0+84U,si1);
si0=l3;
si1=l3;
si1=i32_load(&i->m0,(U64)si1+65U);
i32_store(&i->m0,(U64)si0+81U,si1);
si0=l3;
si1=l8;
i32_store8(&i->m0,(U64)si0+80U,si1);
si0=l0;
si1=l3;
si2=80U;
si1+=si2;
f604(i,si0,si1);
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
si1=72U;
si0+=si1;
si1=9U;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=1089090U;
i32_store(&i->m0,(U64)si0+68U,si1);
si0=l3;
si1=3U;
i32_store(&i->m0,(U64)si0+64U,si1);
goto L44;
L46:;
si0=l3;
si1=72U;
si0+=si1;
si1=9U;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=1089090U;
i32_store(&i->m0,(U64)si0+68U,si1);
si0=l3;
si1=1U;
i32_store(&i->m0,(U64)si0+64U,si1);
goto L44;
L45:;
si0=l3;
si1=72U;
si0+=si1;
si1=9U;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=1089090U;
i32_store(&i->m0,(U64)si0+68U,si1);
si0=l3;
si1=1U;
i32_store(&i->m0,(U64)si0+64U,si1);
L44:;
si0=l3;
si1=92U;
si0+=si1;
sj1=1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=178U;
i32_store(&i->m0,(U64)si0+52U,si1);
si0=l3;
si1=1U;
i32_store(&i->m0,(U64)si0+84U,si1);
si0=l3;
si1=1088568U;
i32_store(&i->m0,(U64)si0+80U,si1);
si0=l3;
si1=l3;
si2=64U;
si1+=si2;
i32_store(&i->m0,(U64)si0+48U,si1);
si0=l3;
si1=l3;
si2=48U;
si1+=si2;
i32_store(&i->m0,(U64)si0+88U,si1);
si0=l3;
si1=40U;
si0+=si1;
si1=l11;
si2=l3;
si3=80U;
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
si1=64U;
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
f390(i,si0,si1,si2,si3);
si0=l3;
si0=i32_load8_u(&i->m0,(U64)si0+64U);
l8=si0;
si1=4U;
si0=si0 == si1;
if(si0){
goto L20;
}
si0=l3;
si1=l3;
si1=i32_load(&i->m0,(U64)si1+68U);
i32_store(&i->m0,(U64)si0+84U,si1);
si0=l3;
si1=l3;
si1=i32_load(&i->m0,(U64)si1+65U);
i32_store(&i->m0,(U64)si0+81U,si1);
si0=l3;
si1=l8;
i32_store8(&i->m0,(U64)si0+80U,si1);
si0=l0;
si1=l3;
si2=80U;
si1+=si2;
f604(i,si0,si1);
goto L9;
L48:;
si0=l3;
si1=l3;
si1=i32_load(&i->m0,(U64)si1+44U);
i32_store(&i->m0,(U64)si0+84U,si1);
si0=l3;
si1=l3;
si1=i32_load(&i->m0,(U64)si1+41U);
i32_store(&i->m0,(U64)si0+81U,si1);
si0=l3;
si1=l8;
i32_store8(&i->m0,(U64)si0+80U,si1);
si0=l0;
si1=l3;
si2=80U;
si1+=si2;
f604(i,si0,si1);
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
si1=64U;
si0+=si1;
si1=l1;
si1=i32_load(&i->m0,(U64)si1);
si2=1089088U;
si3=2U;
si4=l1;
si4=i32_load(&i->m0,(U64)si4+4U);
si4=i32_load(&i->m0,(U64)si4+28U);
TF(i->t0,si4,void (*)(rustpythonInstance*,U32,U32,U32,U32))(i,si0,si1,si2,si3);
si0=l3;
si0=i32_load8_u(&i->m0,(U64)si0+64U);
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
si1=92U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=1U;
i32_store(&i->m0,(U64)si0+84U,si1);
si0=l3;
si1=1089116U;
i32_store(&i->m0,(U64)si0+80U,si1);
si0=l3;
si1=l3;
si2=120U;
si1+=si2;
i32_store(&i->m0,(U64)si0+88U,si1);
si0=l3;
si1=40U;
si0+=si1;
si1=l11;
si2=l3;
si3=80U;
si2+=si3;
si3=l8;
si3=i32_load(&i->m0,(U64)si3+36U);
TF(i->t0,si3,void (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
goto L16;
L18:;
si0=l3;
si1=l3;
si1=i32_load(&i->m0,(U64)si1+68U);
i32_store(&i->m0,(U64)si0+84U,si1);
si0=l3;
si1=l3;
si1=i32_load(&i->m0,(U64)si1+65U);
i32_store(&i->m0,(U64)si0+81U,si1);
si0=l3;
si1=l8;
i32_store8(&i->m0,(U64)si0+80U,si1);
si0=l0;
si1=l3;
si2=80U;
si1+=si2;
f604(i,si0,si1);
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
si1=72U;
si0+=si1;
si1=6U;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=1089108U;
i32_store(&i->m0,(U64)si0+68U,si1);
si0=l3;
si1=3U;
i32_store(&i->m0,(U64)si0+64U,si1);
goto L50;
L52:;
si0=l3;
si1=72U;
si0+=si1;
si1=6U;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=1089108U;
i32_store(&i->m0,(U64)si0+68U,si1);
si0=l3;
si1=1U;
i32_store(&i->m0,(U64)si0+64U,si1);
goto L50;
L51:;
si0=l3;
si1=72U;
si0+=si1;
si1=6U;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=1089108U;
i32_store(&i->m0,(U64)si0+68U,si1);
si0=l3;
si1=1U;
i32_store(&i->m0,(U64)si0+64U,si1);
L50:;
si0=l3;
si1=92U;
si0+=si1;
sj1=1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=178U;
i32_store(&i->m0,(U64)si0+52U,si1);
si0=l3;
si1=1U;
i32_store(&i->m0,(U64)si0+84U,si1);
si0=l3;
si1=1088568U;
i32_store(&i->m0,(U64)si0+80U,si1);
si0=l3;
si1=l3;
si2=64U;
si1+=si2;
i32_store(&i->m0,(U64)si0+48U,si1);
si0=l3;
si1=l3;
si2=48U;
si1+=si2;
i32_store(&i->m0,(U64)si0+88U,si1);
si0=l3;
si1=40U;
si0+=si1;
si1=l11;
si2=l3;
si3=80U;
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
si1=l3;
si1=i32_load(&i->m0,(U64)si1+44U);
i32_store(&i->m0,(U64)si0+84U,si1);
si0=l3;
si1=l3;
si1=i32_load(&i->m0,(U64)si1+41U);
i32_store(&i->m0,(U64)si0+81U,si1);
si0=l3;
si1=l8;
i32_store8(&i->m0,(U64)si0+80U,si1);
si0=l0;
si1=l3;
si2=80U;
si1+=si2;
f604(i,si0,si1);
goto L9;
L54:;
si0=l1;
si1=2U;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l2;
si0=i32_load(&i->m0,(U64)si0);
l8=si0;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=l2;
si0=i32_load(&i->m0,(U64)si0+8U);
l7=si0;
si0=80U;
si0=f15269(i,si0);
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
si0=f357(i,si0);
si0=!(si0);
if(si0){
goto L69;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+12U);
l10=si0;
si0=l3;
si1=0U;
i32_store(&i->m0,(U64)si0+72U,si1);
si0=l3;
sj1=1ULL;
i64_store(&i->m0,(U64)si0+64U,sj1);
si0=l3;
si1=3U;
i32_store8(&i->m0,(U64)si0+112U,si1);
si0=l3;
si1=32U;
i32_store(&i->m0,(U64)si0+96U,si1);
si0=l3;
si1=0U;
i32_store(&i->m0,(U64)si0+108U,si1);
si0=l3;
si1=1087764U;
i32_store(&i->m0,(U64)si0+104U,si1);
si0=l3;
si1=0U;
i32_store(&i->m0,(U64)si0+88U,si1);
si0=l3;
si1=0U;
i32_store(&i->m0,(U64)si0+80U,si1);
si0=l3;
si1=l3;
si2=64U;
si1+=si2;
i32_store(&i->m0,(U64)si0+100U,si1);
si0=l6;
si1=l3;
si2=80U;
si1+=si2;
si0=f337(i,si0,si1);
if(si0){
goto L70;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0+68U);
l4=si0;
si0=l1;
si1=l10;
si2=l3;
si2=i32_load(&i->m0,(U64)si2+64U);
l13=si2;
si3=l3;
si3=i32_load(&i->m0,(U64)si3+72U);
si2=f386(i,si2,si3);
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
f15271(i,si0);
goto L69;
L70:;
si0=1087788U;
si1=55U;
si2=l3;
si3=120U;
si2+=si3;
si3=1087844U;
si4=1087936U;
f712(i,si0,si1,si2,si3,si4);
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
f568(i,si0,si1);
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
si1=1088280U;
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
si1=80U;
si0+=si1;
si1=l1;
si2=l3;
si2=i32_load(&i->m0,(U64)si2+16U);
si3=l3;
si3=i32_load(&i->m0,(U64)si3+20U);
f388(i,si0,si1,si2,si3);
si0=l3;
si0=i32_load8_u(&i->m0,(U64)si0+80U);
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
si1=80U;
si0+=si1;
si1=l1;
si1=i32_load(&i->m0,(U64)si1);
si2=1088576U;
si3=1U;
si4=l1;
si4=i32_load(&i->m0,(U64)si4+4U);
si4=i32_load(&i->m0,(U64)si4+28U);
TF(i->t0,si4,void (*)(rustpythonInstance*,U32,U32,U32,U32))(i,si0,si1,si2,si3);
si0=l3;
si0=i32_load8_u(&i->m0,(U64)si0+80U);
l11=si0;
si1=4U;
si0=si0 == si1;
if(si0){
goto L75;
}
si0=l3;
si1=l3;
si1=i32_load(&i->m0,(U64)si1+84U);
i32_store(&i->m0,(U64)si0+43U,si1);
si0=l3;
si1=l3;
si1=i32_load(&i->m0,(U64)si1+81U);
i32_store(&i->m0,(U64)si0+40U,si1);
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
si1=80U;
si0+=si1;
si1=l1;
si2=l3;
si2=i32_load(&i->m0,(U64)si2+8U);
si3=l3;
si3=i32_load(&i->m0,(U64)si3+12U);
f388(i,si0,si1,si2,si3);
si0=l3;
si0=i32_load8_u(&i->m0,(U64)si0+80U);
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
si1=i32_load(&i->m0,(U64)si1+84U);
i32_store(&i->m0,(U64)si0+43U,si1);
si0=l3;
si1=l3;
si1=i32_load(&i->m0,(U64)si1+81U);
i32_store(&i->m0,(U64)si0+40U,si1);
L72:;
si0=l6;
si0=!(si0);
if(si0){
goto L76;
}
si0=l9;
f15271(i,si0);
L76:;
si0=l3;
si1=l3;
si1=i32_load(&i->m0,(U64)si1+43U);
i32_store(&i->m0,(U64)si0+84U,si1);
si0=l3;
si1=l3;
si1=i32_load(&i->m0,(U64)si1+40U);
i32_store(&i->m0,(U64)si0+81U,si1);
si0=l3;
si1=l11;
i32_store8(&i->m0,(U64)si0+80U,si1);
si0=l0;
si1=l3;
si2=80U;
si1+=si2;
f604(i,si0,si1);
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
f15271(i,si0);
L77:;
si0=l5;
si0=!(si0);
if(si0){
goto L10;
}
L15:;
si0=l3;
si1=64U;
si0+=si1;
si1=l1;
si1=i32_load(&i->m0,(U64)si1);
si2=1089088U;
si3=2U;
si4=l1;
si4=i32_load(&i->m0,(U64)si4+4U);
si4=i32_load(&i->m0,(U64)si4+28U);
TF(i->t0,si4,void (*)(rustpythonInstance*,U32,U32,U32,U32))(i,si0,si1,si2,si3);
si0=l3;
si0=i32_load8_u(&i->m0,(U64)si0+64U);
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
si1=92U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=1U;
i32_store(&i->m0,(U64)si0+84U,si1);
si0=l3;
si1=1089140U;
i32_store(&i->m0,(U64)si0+80U,si1);
si0=l3;
si1=l3;
si2=120U;
si1+=si2;
i32_store(&i->m0,(U64)si0+88U,si1);
si0=l3;
si1=40U;
si0+=si1;
si1=l11;
si2=l3;
si3=80U;
si2+=si3;
si3=l8;
si3=i32_load(&i->m0,(U64)si3+36U);
TF(i->t0,si3,void (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
goto L11;
L13:;
si0=l3;
si1=l3;
si1=i32_load(&i->m0,(U64)si1+68U);
i32_store(&i->m0,(U64)si0+84U,si1);
si0=l3;
si1=l3;
si1=i32_load(&i->m0,(U64)si1+65U);
i32_store(&i->m0,(U64)si0+81U,si1);
si0=l3;
si1=l8;
i32_store8(&i->m0,(U64)si0+80U,si1);
si0=l0;
si1=l3;
si2=80U;
si1+=si2;
f604(i,si0,si1);
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
si1=72U;
si0+=si1;
si1=13U;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=1089124U;
i32_store(&i->m0,(U64)si0+68U,si1);
si0=l3;
si1=3U;
i32_store(&i->m0,(U64)si0+64U,si1);
goto L78;
L80:;
si0=l3;
si1=72U;
si0+=si1;
si1=13U;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=1089124U;
i32_store(&i->m0,(U64)si0+68U,si1);
si0=l3;
si1=1U;
i32_store(&i->m0,(U64)si0+64U,si1);
goto L78;
L79:;
si0=l3;
si1=72U;
si0+=si1;
si1=13U;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=1089124U;
i32_store(&i->m0,(U64)si0+68U,si1);
si0=l3;
si1=1U;
i32_store(&i->m0,(U64)si0+64U,si1);
L78:;
si0=l3;
si1=92U;
si0+=si1;
sj1=1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=178U;
i32_store(&i->m0,(U64)si0+52U,si1);
si0=l3;
si1=1U;
i32_store(&i->m0,(U64)si0+84U,si1);
si0=l3;
si1=1088568U;
i32_store(&i->m0,(U64)si0+80U,si1);
si0=l3;
si1=l3;
si2=64U;
si1+=si2;
i32_store(&i->m0,(U64)si0+48U,si1);
si0=l3;
si1=l3;
si2=48U;
si1+=si2;
i32_store(&i->m0,(U64)si0+88U,si1);
si0=l3;
si1=40U;
si0+=si1;
si1=l11;
si2=l3;
si3=80U;
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
si1=64U;
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
f394(i,si0,si1,si2,si3);
si0=l3;
si0=i32_load8_u(&i->m0,(U64)si0+64U);
l8=si0;
si1=4U;
si0=si0 == si1;
if(si0){
goto L10;
}
si0=l3;
si1=l3;
si1=i32_load(&i->m0,(U64)si1+68U);
i32_store(&i->m0,(U64)si0+84U,si1);
si0=l3;
si1=l3;
si1=i32_load(&i->m0,(U64)si1+65U);
i32_store(&i->m0,(U64)si0+81U,si1);
si0=l3;
si1=l8;
i32_store8(&i->m0,(U64)si0+80U,si1);
si0=l0;
si1=l3;
si2=80U;
si1+=si2;
f604(i,si0,si1);
goto L9;
L82:;
si0=l3;
si1=l3;
si1=i32_load(&i->m0,(U64)si1+44U);
i32_store(&i->m0,(U64)si0+84U,si1);
si0=l3;
si1=l3;
si1=i32_load(&i->m0,(U64)si1+41U);
i32_store(&i->m0,(U64)si0+81U,si1);
si0=l3;
si1=l8;
i32_store8(&i->m0,(U64)si0+80U,si1);
si0=l0;
si1=l3;
si2=80U;
si1+=si2;
f604(i,si0,si1);
goto L9;
L10:;
si0=l0;
si1=20U;
i32_store8(&i->m0,(U64)si0+24U,si1);
L9:;
si0=l3;
si1=128U;
si0+=si1;
i->g0=si0;
L0:;
}

void f394(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
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
si0=f330(i,si0,si1);
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
si2=f386(i,si2,si3);
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
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=l2;
si0=f15269(i,si0);
l7=si0;
si0=!(si0);
if(si0){
goto L5;
}
L8:;
si0=l7;
si1=l9;
si2=l2;
si0=f15390(i,si0,si1,si2);
l7=si0;
si0=l4;
si1=l2;
i32_store(&i->m0,(U64)si0+336U,si1);
si0=l4;
si1=l2;
i32_store(&i->m0,(U64)si0+332U,si1);
si0=l4;
si1=l7;
i32_store(&i->m0,(U64)si0+328U,si1);
si0=l4;
si1=344U;
si0+=si1;
si1=l3;
f402(i,si0,si1);
si0=l4;
si1=16U;
si0+=si1;
si1=l8;
si2=l4;
si3=328U;
si2+=si3;
si3=l4;
si4=344U;
si3+=si4;
f464(i,si0,si1,si2,si3);
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
f373(i,si0);
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
si0=f450(i,si0);
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
si2=1088576U;
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
si3=1089148U;
f388(i,si0,si1,si2,si3);
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
si0=f450(i,si0);
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
si2=1088576U;
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
si3=1089148U;
f388(i,si0,si1,si2,si3);
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
si0=f450(i,si0);
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
si1=i32_load(&i->m0,(U64)si1+20U);
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
si1=i32_load(&i->m0,(U64)si1+20U);
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
f468(i,si0);
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
f15271(i,si0);
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
f468(i,si0);
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
f15271(i,si0);
L1:;
si0=l4;
si1=656U;
si0+=si1;
i->g0=si0;
L0:;
}

void f395(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
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
si1=144U;
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
l6=si0;
si0=l4;
si1=l3;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l4;
si1=l3;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l4;
si1=l6;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l2;
si1=l3;
si0=f386(i,si0,si1);
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
si1=40U;
si0+=si1;
si1=l2;
si2=l3;
si3=1088880U;
si4=3U;
f760(i,si0,si1,si2,si3,si4);
si0=l4;
si1=104U;
si0+=si1;
si1=l4;
si2=40U;
si1+=si2;
f385(i,si0,si1);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+104U);
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
si0=1088880U;
si1=l2;
si2=3U;
si0=f15389(i,si0,si1,si2);
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
i32_store(&i->m0,(U64)si0+136U,si1);
si0=l4;
sj1=1ULL;
i64_store(&i->m0,(U64)si0+128U,sj1);
si0=l4;
si1=40U;
si0+=si1;
si1=l6;
si2=l3;
si3=1088880U;
si4=3U;
f760(i,si0,si1,si2,si3,si4);
si0=l4;
si1=104U;
si0+=si1;
si1=l4;
si2=40U;
si1+=si2;
f385(i,si0,si1);
si0=0U;
l2=si0;
si0=0U;
l9=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+104U);
si0=!(si0);
if(si0){
goto L8;
}
si0=0U;
l2=si0;
si0=1U;
l8=si0;
si0=0U;
l9=si0;
L9:;
{
si0=l4;
si0=i32_load(&i->m0,(U64)si0+108U);
si1=l9;
si0-=si1;
l5=si0;
si0=l6;
si1=l9;
si0+=si1;
l10=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+112U);
l9=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+132U);
l11=si0;
si1=l2;
si0-=si1;
si1=l5;
si0=si0 >= si1;
if(si0){
goto L10;
}
si0=l4;
si1=128U;
si0+=si1;
si1=l2;
si2=l5;
f580(i,si0,si1,si2);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+132U);
l11=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+128U);
l8=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+136U);
l2=si0;
L10:;
si0=l8;
si1=l2;
si0+=si1;
si1=l10;
si2=l5;
si0=f15390(i,si0,si1,si2);
si0=l4;
si1=l2;
si2=l5;
si1+=si2;
l2=si1;
i32_store(&i->m0,(U64)si0+136U,si1);
si0=l11;
si1=l2;
si0=si0 != si1;
if(si0){
goto L11;
}
si0=l4;
si1=128U;
si0+=si1;
si1=l11;
si2=1U;
f580(i,si0,si1,si2);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+128U);
l8=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+136U);
l2=si0;
L11:;
si0=l8;
si1=l2;
si0+=si1;
si1=10U;
i32_store8(&i->m0,(U64)si0,si1);
si0=l4;
si1=l2;
si2=1U;
si1+=si2;
l2=si1;
i32_store(&i->m0,(U64)si0+136U,si1);
si0=l4;
si1=104U;
si0+=si1;
si1=l4;
si2=40U;
si1+=si2;
f385(i,si0,si1);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+104U);
if(si0){
goto L9;
}
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0+132U);
l8=si0;
L8:;
si0=l6;
si1=l9;
si0+=si1;
l11=si0;
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
si1=128U;
si0+=si1;
si1=l2;
si2=l5;
f580(i,si0,si1,si2);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+132U);
l8=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+136U);
l2=si0;
L12:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+128U);
l9=si0;
si1=l2;
si0+=si1;
si1=l11;
si2=l5;
si0=f15390(i,si0,si1,si2);
si0=l4;
si1=104U;
si0+=si1;
si1=12U;
si0+=si1;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=0U;
i32_store8(&i->m0,(U64)si0+124U,si1);
si0=l4;
si1=1993552U;
i32_store(&i->m0,(U64)si0+112U,si1);
si0=l4;
si1=0U;
i32_store(&i->m0,(U64)si0+108U,si1);
si0=l4;
si1=1993552U;
i32_store(&i->m0,(U64)si0+104U,si1);
si0=l4;
si1=l7;
i32_store(&i->m0,(U64)si0+120U,si1);
si0=l4;
si1=0U;
i32_store16(&i->m0,(U64)si0+76U,si1);
si0=l4;
si1=l2;
si2=l5;
si1+=si2;
l2=si1;
i32_store(&i->m0,(U64)si0+72U,si1);
si0=l4;
si1=0U;
i32_store(&i->m0,(U64)si0+68U,si1);
si0=l4;
sj1=42949672961ULL;
i64_store(&i->m0,(U64)si0+60U,sj1);
si0=l4;
si1=l2;
i32_store(&i->m0,(U64)si0+56U,si1);
si0=l4;
si1=0U;
i32_store(&i->m0,(U64)si0+52U,si1);
si0=l4;
si1=l2;
i32_store(&i->m0,(U64)si0+48U,si1);
si0=l4;
si1=l9;
i32_store(&i->m0,(U64)si0+44U,si1);
si0=l4;
si1=10U;
i32_store(&i->m0,(U64)si0+40U,si1);
si0=l4;
si1=l4;
si2=104U;
si1+=si2;
i32_store(&i->m0,(U64)si0+80U,si1);
si0=l4;
si1=128U;
si0+=si1;
si1=l4;
si2=40U;
si1+=si2;
f310(i,si0,si1);
si0=l4;
si1=24U;
si0+=si1;
si1=l4;
si1=i32_load(&i->m0,(U64)si1+128U);
l11=si1;
si2=l4;
si2=i32_load(&i->m0,(U64)si2+136U);
l5=si2;
si3=1088576U;
si4=1U;
f467(i,si0,si1,si2,si3,si4);
si0=l5;
si0=!(si0);
if(si0){
goto L13;
}
si0=l11;
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
f15271(i,si0);
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
si0=i32_load(&i->m0,(U64)si0+132U);
si0=!(si0);
if(si0){
goto L16;
}
si0=l11;
f15271(i,si0);
L16:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+12U);
si0=!(si0);
if(si0){
goto L17;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0+8U);
f15271(i,si0);
L17:;
si0=l4;
si1=8U;
si0+=si1;
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
si1=l4;
sj1=i64_load(&i->m0,(U64)si1+24U);
i64_store(&i->m0,(U64)si0+8U,sj1);
si0=l8;
si0=!(si0);
if(si0){
goto L1;
}
si0=l9;
f15271(i,si0);
L1:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
l5=si0;
si0=l4;
si1=52U;
si0+=si1;
sj1=1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=1U;
i32_store(&i->m0,(U64)si0+44U,si1);
si0=l4;
si1=1088568U;
i32_store(&i->m0,(U64)si0+40U,si1);
si0=l4;
si1=177U;
i32_store(&i->m0,(U64)si0+108U,si1);
si0=l4;
si1=l4;
si2=104U;
si1+=si2;
i32_store(&i->m0,(U64)si0+48U,si1);
si0=l4;
si1=l4;
si2=8U;
si1+=si2;
i32_store(&i->m0,(U64)si0+104U,si1);
si0=l4;
si1=128U;
si0+=si1;
si1=l2;
si2=l4;
si3=40U;
si2+=si3;
si3=l5;
si3=i32_load(&i->m0,(U64)si3+36U);
TF(i->t0,si3,void (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
si0=l4;
si0=i32_load8_u(&i->m0,(U64)si0+128U);
l2=si0;
si1=4U;
si0=si0 != si1;
if(si0){
goto L19;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0+12U);
si0=!(si0);
if(si0){
goto L18;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0+8U);
f15271(i,si0);
goto L18;
L19:;
si0=l0;
si1=l4;
si1=i32_load(&i->m0,(U64)si1+129U);
i32_store(&i->m0,(U64)si0+1U,si1);
si0=l0;
si1=4U;
si0+=si1;
si1=l4;
si1=i32_load(&i->m0,(U64)si1+132U);
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+12U);
si0=!(si0);
if(si0){
goto L18;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0+8U);
f15271(i,si0);
L18:;
si0=l0;
si1=l2;
i32_store8(&i->m0,(U64)si0,si1);
si0=l4;
si1=144U;
si0+=si1;
i->g0=si0;
L0:;
}

void f396(rustpythonInstance*i,U32 l0) {
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
f15271(i,si0);
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
f15271(i,si0);
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
f15271(i,si0);
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
f15271(i,si0);
L4:;
si0=l0;
si1=212U;
si0+=si1;
l1=si0;
f284(i,si0);
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
f15271(i,si0);
L5:;
si0=l0;
si1=224U;
si0+=si1;
l1=si0;
f285(i,si0);
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
f15271(i,si0);
L6:;
si0=l0;
f286(i,si0);
si0=l0;
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L7;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
f15271(i,si0);
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
f283(i,si0);
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
f15271(i,si0);
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
f15271(i,si0);
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
f15271(i,si0);
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
f15271(i,si0);
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
f15271(i,si0);
L16:;
si0=l0;
si1=260U;
si0+=si1;
l1=si0;
f287(i,si0);
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
f15271(i,si0);
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
f15271(i,si0);
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
f15271(i,si0);
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
f15271(i,si0);
L20:;
L0:;
}

void f397(rustpythonInstance*i,U32 l0) {
U32 l1=0;
U32 l2=0;
U32 l3=0;
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
si0=l0;
si0=i32_load(&i->m0,(U64)si0+12U);
l1=si0;
si0=!(si0);
if(si0){
goto L2;
}
si0=l0;
si1=20U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si0=!(si0);
if(si0){
goto L3;
}
si0=l1;
l3=si0;
L4:;
{
si0=l3;
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L5;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
f15271(i,si0);
L5:;
si0=l3;
si1=12U;
si0+=si1;
l3=si0;
si0=l2;
si1=-1U;
si0+=si1;
l2=si0;
if(si0){
goto L4;
}
}
L3:;
si0=l0;
si1=16U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L2;
}
si0=l1;
f15271(i,si0);
L2:;
L0:;
}

void f398(rustpythonInstance*i,U32 l0) {
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
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
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
f15271(i,si0);
L2:;
si0=l0;
f15271(i,si0);
L1:;
L0:;
}

void f399(rustpythonInstance*i,U32 l0) {
U32 l1=0;
U32 si0,si1;
si0=l0;
f329(i,si0);
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
f15271(i,si0);
L2:;
si0=l1;
f399(i,si0);
si0=l1;
f15271(i,si0);
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
f15271(i,si0);
L3:;
L0:;
}

U32 f400(rustpythonInstance*i,U32 l0,U32 l1) {
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

void f401(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
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
U64 sj0,sj1,sj2;
si0=i->g0;
si1=1056U;
si0-=si1;
l2=si0;
i->g0=si0;
si0=l2;
si1=8U;
si0+=si1;
f14988(i,si0);
si0=l1;
si1=20U;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=16U;
si0&=si1;
if(si0){
goto L1;
}
si0=l1;
f254(i,si0);
si0=l1;
f252(i,si0);
si0=l1;
f253(i,si0);
si0=l1;
si1=l1;
sj1=i64_load(&i->m0,(U64)si1+16U);
sj2=68719476736ULL;
sj1|=sj2;
i64_store(&i->m0,(U64)si0+16U,sj1);
L1:;
si0=0U;
si0=f319(i,si0);
l3=si0;
si0=!(si0);
if(si0){
goto L8;
}
si0=l3;
si1=l3;
sj1=i64_load(&i->m0,(U64)si1);
l4=sj1;
sj2=1ULL;
sj1+=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
sj1=0ULL;
i64_store(&i->m0,(U64)si0+768U,sj1);
si0=l2;
si1=0U;
i32_store(&i->m0,(U64)si0+748U,si1);
si0=l2;
sj1=0ULL;
i64_store(&i->m0,(U64)si0+740U,sj1);
si0=l2;
si1=1086680U;
i32_store(&i->m0,(U64)si0+736U,si1);
si0=l2;
si1=l3;
sj1=i64_load(&i->m0,(U64)si1+8U);
i64_store(&i->m0,(U64)si0+760U,sj1);
si0=l2;
sj1=l4;
i64_store(&i->m0,(U64)si0+752U,sj1);
si0=l1;
si1=17U;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=64U;
si0&=si1;
if(si0){
goto L2;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0+16U);
l3=si0;
si1=l2;
si1=i32_load(&i->m0,(U64)si1+20U);
si0=si0 == si1;
if(si0){
goto L2;
}
si0=l2;
si1=l3;
si2=12U;
si1+=si2;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si0=!(si0);
if(si0){
goto L2;
}
si0=l3;
sj0=i64_load(&i->m0,(U64)si0+4U);
l4=sj0;
sj1=32ULL;
sj0>>=(sj1&63);
si0=(U32)(sj0);
l6=si0;
si0=!(si0);
if(si0){
goto L10;
}
si0=1U;
l3=si0;
si0=l5;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=47U;
si0=si0 == si1;
if(si0){
goto L9;
}
L10:;
si0=0U;
l3=si0;
L9:;
si0=l2;
si1=l3;
i32_store8(&i->m0,(U64)si0+102U,si1);
si0=l2;
si1=6U;
i32_store8(&i->m0,(U64)si0+80U,si1);
si0=l2;
si1=l6;
i32_store(&i->m0,(U64)si0+76U,si1);
si0=l2;
si1=l5;
i32_store(&i->m0,(U64)si0+72U,si1);
si0=l2;
si1=512U;
i32_store16(&i->m0,(U64)si0+100U,si1);
si0=l2;
si1=384U;
si0+=si1;
si1=l2;
si2=72U;
si1+=si2;
f14996(i,si0,si1);
si0=l2;
si0=i32_load8_u(&i->m0,(U64)si0+384U);
l3=si0;
si1=10U;
si0=si0 == si1;
if(si0){
goto L3;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0+388U);
si1=0U;
si2=l3;
si3=9U;
si2=si2 == si3;
si0=si2?si0:si1;
l6=si0;
si0=!(si0);
if(si0){
goto L3;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0+392U);
l3=si0;
if(si0){
goto L12;
}
si0=1U;
l7=si0;
goto L11;
L12:;
si0=l3;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L7;
}
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=l3;
si0=f15269(i,si0);
l7=si0;
si0=!(si0);
if(si0){
goto L6;
}
L11:;
si0=l2;
si1=72U;
si0+=si1;
si1=l7;
si2=l6;
si3=l3;
si1=f15390(i,si1,si2,si3);
l6=si1;
si2=l3;
f756(i,si0,si1,si2);
si0=l2;
si0=i32_load(&i->m0,(U64)si0+72U);
if(si0){
goto L4;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0+76U);
l8=si0;
si0=!(si0);
if(si0){
goto L4;
}
si0=l1;
si1=84U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L4;
}
si0=l2;
si1=80U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
if(si0){
goto L14;
}
si0=1U;
l9=si0;
goto L13;
L14:;
si0=l7;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L7;
}
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=l7;
si0=f15269(i,si0);
l9=si0;
si0=!(si0);
if(si0){
goto L5;
}
L13:;
si0=l9;
si1=l8;
si2=l7;
si0=f15390(i,si0,si1,si2);
l8=si0;
si0=l1;
si1=92U;
si0+=si1;
si1=l7;
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
si1=88U;
si0+=si1;
si1=l7;
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
si1=l8;
i32_store(&i->m0,(U64)si0+84U,si1);
goto L4;
L8:;
si0=1093060U;
si1=70U;
si2=l2;
si3=728U;
si2+=si3;
si3=1093132U;
si4=1093228U;
f712(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L7:;
f53(i);
UNREACHABLE;
L6:;
si0=1U;
si1=l3;
f52(i,si0,si1);
UNREACHABLE;
L5:;
si0=1U;
si1=l7;
f52(i,si0,si1);
UNREACHABLE;
L4:;
si0=l3;
si0=!(si0);
if(si0){
goto L3;
}
si0=l6;
f15271(i,si0);
L3:;
sj0=l4;
si0=(U32)(sj0);
si0=!(si0);
if(si0){
goto L2;
}
si0=l5;
f15271(i,si0);
L2:;
si0=l2;
si1=0U;
i32_store(&i->m0,(U64)si0+384U,si1);
si0=l2;
si1=l2;
si2=8U;
si1+=si2;
i32_store(&i->m0,(U64)si0+400U,si1);
si0=l2;
si1=72U;
si0+=si1;
si1=l1;
si2=l2;
si3=736U;
si2+=si3;
si3=l2;
si4=384U;
si3+=si4;
f260(i,si0,si1,si2,si3);
si0=l2;
si0=i32_load8_u(&i->m0,(U64)si0+96U);
si1=20U;
si0=si0 == si1;
if(si0){
goto L21;
}
si0=l2;
si1=40U;
si0+=si1;
si1=24U;
si0+=si1;
si1=l2;
si2=72U;
si1+=si2;
si2=24U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=40U;
si0+=si1;
si1=16U;
si0+=si1;
si1=l2;
si2=72U;
si1+=si2;
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
si2=72U;
si1+=si2;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=l2;
sj1=i64_load(&i->m0,(U64)si1+72U);
i64_store(&i->m0,(U64)si0+40U,sj1);
si0=l2;
si0=i32_load(&i->m0,(U64)si0+384U);
si0=!(si0);
if(si0){
goto L22;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0+388U);
l3=si0;
si0=!(si0);
if(si0){
goto L22;
}
si0=l2;
si1=392U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L22;
}
si0=l3;
f15271(i,si0);
L22:;
si0=l2;
si1=736U;
si0+=si1;
f399(i,si0);
si0=l2;
si1=72U;
si0+=si1;
si1=l1;
si2=312U;
si0=f15390(i,si0,si1,si2);
goto L20;
L21:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+384U);
si0=!(si0);
if(si0){
goto L23;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0+388U);
l3=si0;
si0=!(si0);
if(si0){
goto L23;
}
si0=l2;
si1=392U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L23;
}
si0=l3;
f15271(i,si0);
L23:;
si0=l1;
si1=268U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l8=si0;
if(si0){
goto L25;
}
si0=4U;
l9=si0;
goto L24;
L25:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+260U);
l10=si0;
si0=0U;
l6=si0;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=l8;
si1=3U;
si0<<=(si1&31);
l3=si0;
si0=f15269(i,si0);
l9=si0;
si0=!(si0);
if(si0){
goto L18;
}
si0=l8;
si1=1U;
si0&=si1;
l11=si0;
si0=l8;
si1=1U;
si0=si0 == si1;
if(si0){
goto L26;
}
si0=l10;
si1=508U;
si0+=si1;
l3=si0;
si0=l8;
si1=-2U;
si0&=si1;
l7=si0;
si0=0U;
l6=si0;
si0=l9;
l5=si0;
L27:;
{
si0=l5;
si1=l3;
si2=-308U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=8U;
si0+=si1;
si1=l3;
si2=-4U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=16U;
si0+=si1;
l5=si0;
si0=l3;
si1=608U;
si0+=si1;
l3=si0;
si0=l7;
si1=l6;
si2=2U;
si1+=si2;
l6=si1;
si0=si0 != si1;
if(si0){
goto L27;
}
}
L26:;
si0=l11;
si0=!(si0);
if(si0){
goto L24;
}
si0=l9;
si1=l6;
si2=3U;
si1<<=(si2&31);
si0+=si1;
si1=l10;
si2=l6;
si3=304U;
si2*=si3;
si1+=si2;
si2=200U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
L24:;
si0=0U;
si0=f605(i,si0);
l3=si0;
si0=!(si0);
if(si0){
goto L17;
}
si0=l3;
si1=l3;
sj1=i64_load(&i->m0,(U64)si1);
l4=sj1;
sj2=1ULL;
sj1+=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=1096928U;
i32_store(&i->m0,(U64)si0+72U,si1);
si0=l2;
si1=l3;
sj1=i64_load(&i->m0,(U64)si1+8U);
i64_store(&i->m0,(U64)si0+96U,sj1);
si0=l2;
sj1=l4;
i64_store(&i->m0,(U64)si0+88U,sj1);
si0=l2;
si1=0U;
i32_store(&i->m0,(U64)si0+84U,si1);
si0=l2;
sj1=0ULL;
i64_store(&i->m0,(U64)si0+76U,sj1);
si0=l2;
si1=736U;
si0+=si1;
si1=l9;
si2=l8;
si3=l2;
si4=72U;
si3+=si4;
f639(i,si0,si1,si2,si3);
si0=l2;
si1=72U;
si0+=si1;
f329(i,si0);
si0=l2;
si1=40U;
si0+=si1;
si1=8U;
si0+=si1;
si1=l2;
si2=736U;
si1+=si2;
si2=4U;
si1|=si2;
l3=si1;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=40U;
si0+=si1;
si1=16U;
si0+=si1;
si1=l3;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=40U;
si0+=si1;
si1=24U;
si0+=si1;
si1=l3;
si2=24U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=24U;
si0+=si1;
si1=8U;
si0+=si1;
si1=l2;
si2=768U;
si1+=si2;
l5=si1;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=l3;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+40U,sj1);
si0=l2;
si1=l5;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+24U,sj1);
si0=l2;
si0=i32_load(&i->m0,(U64)si0+736U);
l3=si0;
si0=l8;
si0=!(si0);
if(si0){
goto L28;
}
si0=l9;
f15271(i,si0);
L28:;
si0=l2;
si1=72U;
si0+=si1;
si1=l1;
si2=312U;
si0=f15390(i,si0,si1,si2);
si0=l3;
if(si0){
goto L19;
}
L20:;
si0=l2;
si1=688U;
si0+=si1;
si1=24U;
si0+=si1;
l3=si0;
si1=l2;
si2=40U;
si1+=si2;
si2=24U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=688U;
si0+=si1;
si1=16U;
si0+=si1;
si1=l2;
si2=40U;
si1+=si2;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=688U;
si0+=si1;
si1=8U;
si0+=si1;
si1=l2;
si2=40U;
si1+=si2;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=l2;
sj1=i64_load(&i->m0,(U64)si1+40U);
i64_store(&i->m0,(U64)si0+688U,sj1);
si0=l2;
si1=672U;
si0+=si1;
si1=8U;
si0+=si1;
si1=l1;
si2=8U;
si1+=si2;
l5=si1;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=l1;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+672U,sj1);
si0=l1;
sj0=i64_load(&i->m0,(U64)si0+16U);
l4=sj0;
si0=l2;
si1=384U;
si0+=si1;
si1=l1;
si2=24U;
si1+=si2;
l6=si1;
si2=288U;
si0=f15390(i,si0,si1,si2);
si0=l3;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=-17U;
si0+=si1;
si1=-2U;
si0=si0 >= si1;
if(si0){
goto L16;
}
si0=l2;
si1=2972508U;
i32_store(&i->m0,(U64)si0+716U,si1);
si0=l2;
si1=212U;
i32_store(&i->m0,(U64)si0+1052U,si1);
si0=l2;
si1=l2;
si2=688U;
si1+=si2;
i32_store(&i->m0,(U64)si0+1048U,si1);
si0=l2;
si1=l2;
si2=716U;
si1+=si2;
i32_store(&i->m0,(U64)si0+720U,si1);
si0=l2;
sj1=1ULL;
i64_store(&i->m0,(U64)si0+748U,sj1);
si0=l2;
si1=2U;
i32_store(&i->m0,(U64)si0+740U,si1);
si0=l2;
si1=1089476U;
i32_store(&i->m0,(U64)si0+736U,si1);
si0=l2;
si1=l2;
si2=1048U;
si1+=si2;
i32_store(&i->m0,(U64)si0+744U,si1);
si0=l2;
si1=728U;
si0+=si1;
si1=l2;
si2=720U;
si1+=si2;
si2=l2;
si3=736U;
si2+=si3;
f15025(i,si0,si1,si2);
si0=l2;
si0=i32_load8_u(&i->m0,(U64)si0+728U);
l3=si0;
si1=4U;
si0=si0 == si1;
if(si0){
goto L15;
}
si0=l3;
si1=3U;
si0=si0 != si1;
if(si0){
goto L15;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0+732U);
l3=si0;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si1=l3;
si2=4U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
l5=si1;
si1=i32_load(&i->m0,(U64)si1);
TF(i->t0,si1,void (*)(rustpythonInstance*,U32))(i,si0);
si0=l5;
si0=i32_load(&i->m0,(U64)si0+4U);
si0=!(si0);
if(si0){
goto L29;
}
si0=l6;
f15271(i,si0);
L29:;
si0=l3;
f15271(i,si0);
goto L15;
L19:;
si0=l0;
si1=l3;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l2;
sj1=i64_load(&i->m0,(U64)si1+40U);
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l0;
si1=l2;
sj1=i64_load(&i->m0,(U64)si1+24U);
i64_store(&i->m0,(U64)si0+32U,sj1);
si0=l0;
si1=12U;
si0+=si1;
si1=l2;
si2=40U;
si1+=si2;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=20U;
si0+=si1;
si1=l2;
si2=56U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=28U;
si0+=si1;
si1=l2;
si2=64U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=40U;
si0+=si1;
si1=l2;
si2=24U;
si1+=si2;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=72U;
si0+=si1;
f396(i,si0);
si0=l2;
si0=i32_load(&i->m0,(U64)si0+20U);
l6=si0;
si1=l2;
si1=i32_load(&i->m0,(U64)si1+16U);
l3=si1;
si0-=si1;
si1=12U;
si0=DIV_U(si0,si1);
l5=si0;
si0=l6;
si1=l3;
si0=si0 == si1;
if(si0){
goto L30;
}
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
si0=l5;
si1=-1U;
si0+=si1;
l5=si0;
if(si0){
goto L31;
}
}
L30:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+12U);
si0=!(si0);
if(si0){
goto L33;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0+8U);
f15271(i,si0);
L33:;
si0=l2;
si1=1056U;
si0+=si1;
i->g0=si0;
goto L0;
L18:;
si0=4U;
si1=l3;
f52(i,si0,si1);
UNREACHABLE;
L17:;
si0=1093060U;
si1=70U;
si2=l2;
si3=728U;
si2+=si3;
si3=1093132U;
si4=1093228U;
f712(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L16:;
si0=l2;
si1=736U;
si0+=si1;
si1=8U;
si0+=si1;
si1=l5;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
sj1=l4;
i64_store(&i->m0,(U64)si0+752U,sj1);
si0=l2;
si1=l1;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+736U,sj1);
si0=l2;
si1=736U;
si0+=si1;
si1=24U;
si0+=si1;
si1=l6;
si2=288U;
si0=f15390(i,si0,si1,si2);
si0=l2;
si1=736U;
si0+=si1;
f396(i,si0);
si0=l2;
si1=688U;
si0+=si1;
f589(i,si0);
UNREACHABLE;
L15:;
sj0=l4;
sj1=64ULL;
sj0&=sj1;
si0=!(sj0);
if(si0){
goto L34;
}
si0=l2;
si1=2972508U;
i32_store(&i->m0,(U64)si0+720U,si1);
si0=l2;
si1=l2;
si2=720U;
si1+=si2;
i32_store(&i->m0,(U64)si0+728U,si1);
si0=l2;
sj1=0ULL;
i64_store(&i->m0,(U64)si0+748U,sj1);
si0=l2;
si1=1089472U;
i32_store(&i->m0,(U64)si0+744U,si1);
si0=l2;
si1=1U;
i32_store(&i->m0,(U64)si0+740U,si1);
si0=l2;
si1=1089536U;
i32_store(&i->m0,(U64)si0+736U,si1);
si0=l2;
si1=1048U;
si0+=si1;
si1=l2;
si2=728U;
si1+=si2;
si2=l2;
si3=736U;
si2+=si3;
f15025(i,si0,si1,si2);
si0=l2;
si0=i32_load8_u(&i->m0,(U64)si0+1048U);
l3=si0;
si1=4U;
si0=si0 == si1;
if(si0){
goto L35;
}
si0=l3;
si1=3U;
si0=si0 != si1;
if(si0){
goto L35;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0+1052U);
l3=si0;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si1=l3;
si2=4U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
l5=si1;
si1=i32_load(&i->m0,(U64)si1);
TF(i->t0,si1,void (*)(rustpythonInstance*,U32))(i,si0);
si0=l5;
si0=i32_load(&i->m0,(U64)si0+4U);
si0=!(si0);
if(si0){
goto L36;
}
si0=l6;
f15271(i,si0);
L36:;
si0=l3;
f15271(i,si0);
L35:;
si0=l2;
sj1=1ULL;
i64_store(&i->m0,(U64)si0+736U,sj1);
si0=l2;
si1=0U;
i32_store(&i->m0,(U64)si0+744U,si1);
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2972468U);
si1=3U;
si0=si0 == si1;
if(si0){
goto L37;
}
si0=l2;
si1=2972444U;
i32_store(&i->m0,(U64)si0+1048U,si1);
si0=l2;
si1=l2;
si2=728U;
si1+=si2;
i32_store(&i->m0,(U64)si0+1052U,si1);
si0=l2;
si1=1048U;
si0+=si1;
f15012(i,si0);
L37:;
si0=l2;
si1=2972444U;
i32_store(&i->m0,(U64)si0+716U,si1);
si0=l2;
si1=l2;
si2=716U;
si1+=si2;
f15013(i,si0,si1);
si0=l2;
si1=l2;
si1=i32_load8_u(&i->m0,(U64)si1+4U);
l5=si1;
i32_store8(&i->m0,(U64)si0+732U,si1);
si0=l2;
si1=l2;
si1=i32_load(&i->m0,(U64)si1);
l3=si1;
i32_store(&i->m0,(U64)si0+728U,si1);
si0=l2;
si1=720U;
si0+=si1;
si1=l2;
si2=728U;
si1+=si2;
si2=l2;
si3=736U;
si2+=si3;
f15015(i,si0,si1,si2);
si0=l2;
si0=i32_load8_u(&i->m0,(U64)si0+720U);
si1=4U;
si0=si0 != si1;
if(si0){
goto L38;
}
si0=l5;
si1=255U;
si0&=si1;
if(si0){
goto L39;
}
si0=0U;
si0=i32_load(&i->m0,(U64)si0+2972556U);
si1=2147483647U;
si0&=si1;
si0=!(si0);
if(si0){
goto L39;
}
si0=f15014(i);
if(si0){
goto L39;
}
si0=l3;
si1=1U;
i32_store8(&i->m0,(U64)si0+1U,si1);
L39:;
si0=l3;
si1=0U;
i32_store8(&i->m0,(U64)si0,si1);
si0=l2;
si0=i32_load(&i->m0,(U64)si0+740U);
si0=!(si0);
if(si0){
goto L34;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0+736U);
f15271(i,si0);
goto L34;
L38:;
si0=l2;
si1=l2;
sj1=i64_load(&i->m0,(U64)si1+720U);
i64_store(&i->m0,(U64)si0+1048U,sj1);
si0=1089544U;
si1=43U;
si2=l2;
si3=1048U;
si2+=si3;
si3=1089588U;
si4=1089704U;
f712(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L34:;
si0=l2;
si1=736U;
si0+=si1;
si1=8U;
si0+=si1;
l3=si0;
si1=l2;
si2=672U;
si1+=si2;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=l2;
sj1=i64_load(&i->m0,(U64)si1+672U);
i64_store(&i->m0,(U64)si0+736U,sj1);
si0=l2;
sj1=l4;
i64_store(&i->m0,(U64)si0+752U,sj1);
si0=l2;
si1=736U;
si0+=si1;
si1=24U;
si0+=si1;
si1=l2;
si2=384U;
si1+=si2;
si2=288U;
si0=f15390(i,si0,si1,si2);
l5=si0;
si0=l2;
si1=736U;
si0+=si1;
f396(i,si0);
si0=l5;
si1=l2;
si2=688U;
si1+=si2;
si2=24U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=736U;
si0+=si1;
si1=16U;
si0+=si1;
si1=l2;
si2=688U;
si1+=si2;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=l2;
si2=688U;
si1+=si2;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=l2;
sj1=i64_load(&i->m0,(U64)si1+688U);
i64_store(&i->m0,(U64)si0+736U,sj1);
si0=l2;
si1=736U;
si0+=si1;
f397(i,si0);
si0=1U;
f15040(i,si0);
UNREACHABLE;
L0:;
}

void f402(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
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
U32 l19=0;
U32 l20=0;
U32 l21=0;
U32 l22=0;
U32 l23=0;
U32 l24=0;
U32 l25=0;
U64 l26=0;
U32 l27=0;
U32 l28=0;
U32 l29=0;
U64 l30=0;
U32 l31=0;
U32 l32=0;
U32 l33=0;
U32 l34=0;
U32 l35=0;
U32 l36=0;
U32 l37=0;
U32 l38=0;
U64 l39=0;
U64 l40=0;
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
U32 si0,si1,si2;
U64 sj0,sj1;
si0=i->g0;
si1=416U;
si0-=si1;
l2=si0;
i->g0=si0;
si0=l1;
si1=72U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=l1;
si1=80U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
if(si0){
goto L11;
}
si0=1U;
l5=si0;
goto L10;
L11:;
si0=l4;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L9;
}
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=l4;
si0=f15269(i,si0);
l5=si0;
si0=!(si0);
if(si0){
goto L8;
}
L10:;
si0=l5;
si1=l3;
si2=l4;
si0=f15390(i,si0,si1,si2);
l6=si0;
si0=0U;
l7=si0;
si0=l1;
si1=84U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
if(si0){
goto L13;
}
si0=0U;
l8=si0;
goto L12;
L13:;
si0=l1;
si1=92U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
if(si0){
goto L15;
}
si0=1U;
l8=si0;
goto L14;
L15:;
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
l8=si0;
si0=!(si0);
if(si0){
goto L7;
}
L14:;
si0=l8;
si1=l5;
si2=l3;
si0=f15390(i,si0,si1,si2);
si0=l3;
sj0=(U64)(si0);
l9=sj0;
sj1=32ULL;
sj0<<=(sj1&63);
sj1=l9;
sj0|=sj1;
l9=sj0;
L12:;
si0=l1;
si1=148U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l10=si0;
si0=l1;
si1=144U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l11=si0;
si0=l1;
si1=140U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l12=si0;
si0=l1;
si1=136U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l13=si0;
si0=l1;
si1=132U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l14=si0;
si0=l1;
si1=128U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l15=si0;
si0=l1;
si1=124U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l16=si0;
si0=l1;
si1=120U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l17=si0;
si0=l1;
si1=116U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l18=si0;
si0=l1;
si1=112U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l19=si0;
si0=l1;
si1=108U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l20=si0;
si0=l1;
si1=104U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l21=si0;
si0=l1;
si1=100U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l22=si0;
si0=l1;
si1=96U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l23=si0;
si0=l1;
si1=152U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l24=si0;
if(si0){
goto L17;
}
goto L16;
L17:;
si0=l1;
si1=160U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
if(si0){
goto L19;
}
si0=4U;
l7=si0;
si0=0U;
l5=si0;
goto L18;
L19:;
si0=l3;
si1=178956970U;
si0=si0 > si1;
if(si0){
goto L9;
}
si0=l3;
si1=12U;
si0*=si1;
l5=si0;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L9;
}
si0=l3;
si1=178956971U;
si0=si0 < si1;
si1=2U;
si0<<=(si1&31);
l25=si0;
si0=l5;
if(si0){
goto L21;
}
si0=l25;
l7=si0;
goto L20;
L21:;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=l25;
si1=l5;
si0=si0 <= si1;
if(si0){
goto L22;
}
si0=l25;
si1=l5;
si0=f15277(i,si0,si1);
l7=si0;
goto L20;
L22:;
si0=l5;
si0=f15269(i,si0);
l7=si0;
L20:;
si0=l7;
si0=!(si0);
if(si0){
goto L6;
}
L18:;
si0=l7;
si1=l24;
si2=l5;
si0=f15390(i,si0,si1,si2);
si0=l3;
sj0=(U64)(si0);
l26=sj0;
sj1=32ULL;
sj0<<=(sj1&63);
sj1=l26;
sj0|=sj1;
l26=sj0;
L16:;
si0=l1;
si1=168U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l27=si0;
si0=l1;
si1=164U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l28=si0;
si0=l1;
si1=172U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
if(si0){
goto L24;
}
si0=0U;
l29=si0;
goto L23;
L24:;
si0=l1;
si1=180U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
if(si0){
goto L26;
}
si0=1U;
l29=si0;
goto L25;
L26:;
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
l29=si0;
si0=!(si0);
if(si0){
goto L5;
}
L25:;
si0=l29;
si1=l5;
si2=l3;
si0=f15390(i,si0,si1,si2);
si0=l3;
sj0=(U64)(si0);
l30=sj0;
sj1=32ULL;
sj0<<=(sj1&63);
sj1=l30;
sj0|=sj1;
l30=sj0;
L23:;
si0=l1;
si1=200U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l31=si0;
si0=l1;
si1=196U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l32=si0;
si0=l1;
si1=68U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l33=si0;
si0=l1;
si1=64U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l34=si0;
si0=l1;
si1=60U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l35=si0;
si0=l1;
si1=192U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l36=si0;
si0=l1;
si1=188U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l37=si0;
si0=l1;
si1=184U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l38=si0;
si0=l1;
sj0=i64_load(&i->m0,(U64)si0+24U);
l39=sj0;
si0=l1;
sj0=i64_load(&i->m0,(U64)si0+16U);
l40=sj0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+56U);
l41=si0;
si0=l2;
si1=40U;
si0+=si1;
si1=l1;
si2=212U;
si1+=si2;
f297(i,si0,si1);
si0=l2;
si1=56U;
si0+=si1;
si1=l1;
si2=224U;
si1+=si2;
f292(i,si0,si1);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+12U);
l42=si0;
si0=l2;
si1=72U;
si0+=si1;
si1=l1;
f298(i,si0,si1);
si0=l1;
si1=244U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l43=si0;
if(si0){
goto L28;
}
si0=8U;
l24=si0;
goto L27;
L28:;
si0=l43;
si1=6882960U;
si0=si0 > si1;
if(si0){
goto L9;
}
si0=l43;
si1=312U;
si0*=si1;
l3=si0;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L9;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+236U);
l44=si0;
si0=l43;
si1=6882961U;
si0=si0 < si1;
si1=3U;
si0<<=(si1&31);
l5=si0;
si0=l3;
if(si0){
goto L30;
}
si0=l5;
l24=si0;
goto L29;
L30:;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=l5;
si1=l3;
si0=si0 <= si1;
if(si0){
goto L31;
}
si0=l5;
si1=l3;
si0=f15277(i,si0,si1);
l24=si0;
goto L29;
L31:;
si0=l3;
si0=f15269(i,si0);
l24=si0;
L29:;
si0=l24;
si0=!(si0);
if(si0){
goto L4;
}
si0=l43;
si1=312U;
si0*=si1;
l25=si0;
si0=0U;
l3=si0;
si0=l43;
l5=si0;
L32:;
{
si0=l25;
si1=l3;
si0=si0 == si1;
if(si0){
goto L27;
}
si0=l2;
si1=104U;
si0+=si1;
si1=l44;
si2=l3;
si1+=si2;
f402(i,si0,si1);
si0=l24;
si1=l3;
si0+=si1;
si1=l2;
si2=104U;
si1+=si2;
si2=312U;
si0=f15390(i,si0,si1,si2);
si0=l3;
si1=312U;
si0+=si1;
l3=si0;
si0=l5;
si1=-1U;
si0+=si1;
l5=si0;
if(si0){
goto L32;
}
}
L27:;
si0=l2;
si1=88U;
si0+=si1;
si1=l1;
si2=248U;
si1+=si2;
f299(i,si0,si1);
si0=l2;
si1=104U;
si0+=si1;
si1=l1;
si2=260U;
si1+=si2;
f295(i,si0,si1);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+272U);
l45=si0;
si0=4U;
l46=si0;
si0=0U;
l25=si0;
si0=0U;
l5=si0;
si0=4U;
l44=si0;
si0=l1;
si1=280U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=!(si0);
if(si0){
goto L33;
}
si0=l3;
si1=268435455U;
si0=si0 > si1;
if(si0){
goto L9;
}
si0=l3;
si1=3U;
si0<<=(si1&31);
l5=si0;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L9;
}
si0=l3;
si1=268435456U;
si0=si0 < si1;
si1=2U;
si0<<=(si1&31);
l47=si0;
si0=l5;
if(si0){
goto L35;
}
si0=l47;
l44=si0;
goto L34;
L35:;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=l47;
si1=l5;
si0=si0 <= si1;
if(si0){
goto L36;
}
si0=l47;
si1=l5;
si0=f15277(i,si0,si1);
l44=si0;
goto L34;
L36:;
si0=l5;
si0=f15269(i,si0);
l44=si0;
L34:;
si0=l44;
si0=!(si0);
if(si0){
goto L3;
}
L33:;
si0=l44;
si1=l45;
si2=l5;
si0=f15390(i,si0,si1,si2);
l45=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+284U);
l44=si0;
si0=l1;
si1=292U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si0=!(si0);
if(si0){
goto L37;
}
si0=l5;
si1=89478485U;
si0=si0 > si1;
if(si0){
goto L9;
}
si0=l5;
si1=24U;
si0*=si1;
l25=si0;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L9;
}
si0=l5;
si1=89478486U;
si0=si0 < si1;
si1=2U;
si0<<=(si1&31);
l47=si0;
si0=l25;
if(si0){
goto L39;
}
si0=l47;
l46=si0;
goto L38;
L39:;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=l47;
si1=l25;
si0=si0 <= si1;
if(si0){
goto L40;
}
si0=l47;
si1=l25;
si0=f15277(i,si0,si1);
l46=si0;
goto L38;
L40:;
si0=l25;
si0=f15269(i,si0);
l46=si0;
L38:;
si0=l46;
si0=!(si0);
if(si0){
goto L2;
}
L37:;
si0=l46;
si1=l44;
si2=l25;
si0=f15390(i,si0,si1,si2);
l47=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+296U);
l48=si0;
si0=l1;
si1=304U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l25=si0;
if(si0){
goto L42;
}
si0=4U;
l46=si0;
si0=0U;
l44=si0;
goto L41;
L42:;
si0=l25;
si1=134217727U;
si0=si0 > si1;
if(si0){
goto L9;
}
si0=l25;
si1=4U;
si0<<=(si1&31);
l44=si0;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L9;
}
si0=l25;
si1=134217728U;
si0=si0 < si1;
si1=2U;
si0<<=(si1&31);
l49=si0;
si0=l44;
if(si0){
goto L44;
}
si0=l49;
l46=si0;
goto L43;
L44:;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=l49;
si1=l44;
si0=si0 <= si1;
if(si0){
goto L45;
}
si0=l49;
si1=l44;
si0=f15277(i,si0,si1);
l46=si0;
goto L43;
L45:;
si0=l44;
si0=f15269(i,si0);
l46=si0;
L43:;
si0=l46;
si0=!(si0);
if(si0){
goto L1;
}
L41:;
si0=l46;
si1=l48;
si2=l44;
si0=f15390(i,si0,si1,si2);
l44=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+32U);
l46=si0;
if(si0){
goto L47;
}
goto L46;
L47:;
si0=l1;
si1=36U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l50=si0;
L46:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+40U);
l48=si0;
if(si0){
goto L49;
}
goto L48;
L49:;
si0=l1;
si1=44U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l51=si0;
L48:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+208U);
l49=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+204U);
l52=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+48U);
l53=si0;
if(si0){
goto L51;
}
goto L50;
L51:;
si0=l1;
si1=52U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l54=si0;
L50:;
si0=l0;
si1=l4;
i32_store(&i->m0,(U64)si0+80U,si1);
si0=l0;
si1=l4;
i32_store(&i->m0,(U64)si0+76U,si1);
si0=l0;
si1=l6;
i32_store(&i->m0,(U64)si0+72U,si1);
si0=l0;
si1=l2;
sj1=i64_load(&i->m0,(U64)si1+56U);
i64_store(&i->m0,(U64)si0+224U,sj1);
si0=l0;
si1=l2;
sj1=i64_load(&i->m0,(U64)si1+72U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=l2;
sj1=i64_load(&i->m0,(U64)si1+88U);
i64_store(&i->m0,(U64)si0+248U,sj1);
si0=l2;
si1=24U;
si0+=si1;
si1=8U;
si0+=si1;
l4=si0;
si1=l2;
si2=40U;
si1+=si2;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=232U;
si0+=si1;
si1=l2;
si2=56U;
si1+=si2;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=8U;
si0+=si1;
si1=l2;
si2=72U;
si1+=si2;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=256U;
si0+=si1;
si1=l2;
si2=88U;
si1+=si2;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=l2;
sj1=i64_load(&i->m0,(U64)si1+40U);
i64_store(&i->m0,(U64)si0+24U,sj1);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+308U);
l1=si0;
si0=l0;
si1=l25;
i32_store(&i->m0,(U64)si0+304U,si1);
si0=l0;
si1=l25;
i32_store(&i->m0,(U64)si0+300U,si1);
si0=l0;
si1=l44;
i32_store(&i->m0,(U64)si0+296U,si1);
si0=l0;
si1=l3;
i32_store(&i->m0,(U64)si0+280U,si1);
si0=l0;
si1=l3;
i32_store(&i->m0,(U64)si0+276U,si1);
si0=l0;
si1=l45;
i32_store(&i->m0,(U64)si0+272U,si1);
si0=l2;
si1=8U;
si0+=si1;
si1=8U;
si0+=si1;
l3=si0;
si1=l2;
si2=104U;
si1+=si2;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=l2;
sj1=i64_load(&i->m0,(U64)si1+104U);
i64_store(&i->m0,(U64)si0+8U,sj1);
si0=l0;
si1=l49;
i32_store(&i->m0,(U64)si0+208U,si1);
si0=l0;
si1=l52;
i32_store(&i->m0,(U64)si0+204U,si1);
si0=l0;
si1=l31;
i32_store(&i->m0,(U64)si0+200U,si1);
si0=l0;
si1=l32;
i32_store(&i->m0,(U64)si0+196U,si1);
si0=l0;
si1=l36;
i32_store(&i->m0,(U64)si0+192U,si1);
si0=l0;
si1=l37;
i32_store(&i->m0,(U64)si0+188U,si1);
si0=l0;
si1=l38;
i32_store(&i->m0,(U64)si0+184U,si1);
si0=l0;
sj1=l30;
i64_store(&i->m0,(U64)si0+176U,sj1);
si0=l0;
si1=l29;
i32_store(&i->m0,(U64)si0+172U,si1);
si0=l0;
si1=l27;
i32_store(&i->m0,(U64)si0+168U,si1);
si0=l0;
si1=l28;
i32_store(&i->m0,(U64)si0+164U,si1);
si0=l0;
sj1=l26;
i64_store(&i->m0,(U64)si0+156U,sj1);
si0=l0;
si1=l7;
i32_store(&i->m0,(U64)si0+152U,si1);
si0=l0;
si1=l10;
i32_store(&i->m0,(U64)si0+148U,si1);
si0=l0;
si1=l11;
i32_store(&i->m0,(U64)si0+144U,si1);
si0=l0;
si1=l12;
i32_store(&i->m0,(U64)si0+140U,si1);
si0=l0;
si1=l13;
i32_store(&i->m0,(U64)si0+136U,si1);
si0=l0;
si1=l14;
i32_store(&i->m0,(U64)si0+132U,si1);
si0=l0;
si1=l15;
i32_store(&i->m0,(U64)si0+128U,si1);
si0=l0;
si1=l16;
i32_store(&i->m0,(U64)si0+124U,si1);
si0=l0;
si1=l17;
i32_store(&i->m0,(U64)si0+120U,si1);
si0=l0;
si1=l18;
i32_store(&i->m0,(U64)si0+116U,si1);
si0=l0;
si1=l19;
i32_store(&i->m0,(U64)si0+112U,si1);
si0=l0;
si1=l20;
i32_store(&i->m0,(U64)si0+108U,si1);
si0=l0;
si1=l21;
i32_store(&i->m0,(U64)si0+104U,si1);
si0=l0;
si1=l22;
i32_store(&i->m0,(U64)si0+100U,si1);
si0=l0;
si1=l23;
i32_store(&i->m0,(U64)si0+96U,si1);
si0=l0;
sj1=l9;
i64_store(&i->m0,(U64)si0+88U,sj1);
si0=l0;
si1=l8;
i32_store(&i->m0,(U64)si0+84U,si1);
si0=l0;
si1=l33;
i32_store(&i->m0,(U64)si0+68U,si1);
si0=l0;
si1=l34;
i32_store(&i->m0,(U64)si0+64U,si1);
si0=l0;
si1=l35;
i32_store(&i->m0,(U64)si0+60U,si1);
si0=l0;
si1=l41;
i32_store(&i->m0,(U64)si0+56U,si1);
si0=l0;
si1=l54;
i32_store(&i->m0,(U64)si0+52U,si1);
si0=l0;
si1=l53;
i32_store(&i->m0,(U64)si0+48U,si1);
si0=l0;
si1=l51;
i32_store(&i->m0,(U64)si0+44U,si1);
si0=l0;
si1=l48;
i32_store(&i->m0,(U64)si0+40U,si1);
si0=l0;
si1=l50;
i32_store(&i->m0,(U64)si0+36U,si1);
si0=l0;
si1=l46;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l0;
sj1=l39;
i64_store(&i->m0,(U64)si0+24U,sj1);
si0=l0;
sj1=l40;
i64_store(&i->m0,(U64)si0+16U,sj1);
si0=l0;
si1=l42;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l0;
si1=l43;
i32_store(&i->m0,(U64)si0+244U,si1);
si0=l0;
si1=l43;
i32_store(&i->m0,(U64)si0+240U,si1);
si0=l0;
si1=l24;
i32_store(&i->m0,(U64)si0+236U,si1);
si0=l0;
si1=l1;
i32_store(&i->m0,(U64)si0+308U,si1);
si0=l0;
si1=l5;
i32_store(&i->m0,(U64)si0+292U,si1);
si0=l0;
si1=l5;
i32_store(&i->m0,(U64)si0+288U,si1);
si0=l0;
si1=l47;
i32_store(&i->m0,(U64)si0+284U,si1);
si0=l0;
si1=220U;
si0+=si1;
si1=l4;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l2;
sj1=i64_load(&i->m0,(U64)si1+24U);
i64_store(&i->m0,(U64)si0+212U,sj1);
si0=l0;
si1=l2;
sj1=i64_load(&i->m0,(U64)si1+8U);
i64_store(&i->m0,(U64)si0+260U,sj1);
si0=l0;
si1=268U;
si0+=si1;
si1=l3;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=416U;
si0+=si1;
i->g0=si0;
goto L0;
L9:;
f53(i);
UNREACHABLE;
L8:;
si0=1U;
si1=l4;
f52(i,si0,si1);
UNREACHABLE;
L7:;
si0=1U;
si1=l3;
f52(i,si0,si1);
UNREACHABLE;
L6:;
si0=l25;
si1=l5;
f52(i,si0,si1);
UNREACHABLE;
L5:;
si0=1U;
si1=l3;
f52(i,si0,si1);
UNREACHABLE;
L4:;
si0=l5;
si1=l3;
f52(i,si0,si1);
UNREACHABLE;
L3:;
si0=l47;
si1=l5;
f52(i,si0,si1);
UNREACHABLE;
L2:;
si0=l47;
si1=l25;
f52(i,si0,si1);
UNREACHABLE;
L1:;
si0=l49;
si1=l44;
f52(i,si0,si1);
UNREACHABLE;
L0:;
}

void f403(rustpythonInstance*i,U32 l0,U32 l1) {
U32 si0,si1;
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=1089472U;
i32_store(&i->m0,(U64)si0,si1);
L0:;
}

U32 f404(rustpythonInstance*i,U32 l0) {
U32 si0;
si0=0U;
L0:;
return si0;
}

U32 f405(rustpythonInstance*i,U32 l0,U32 l1) {
U32 si0;
si0=0U;
L0:;
return si0;
}

void f406(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 si0,si1,si2;
U64 sj1;
si0=i->g0;
si1=32U;
si0-=si1;
l2=si0;
i->g0=si0;
si0=l2;
si1=12U;
si0+=si1;
sj1=1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=1U;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l2;
si1=1089828U;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=66U;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l2;
si1=1089776U;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l2;
si1=l2;
si2=24U;
si1+=si2;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l2;
si1=1089836U;
f683(i,si0,si1);
UNREACHABLE;
L0:;
}

U32 f407(rustpythonInstance*i,U32 l0) {
U32 si0;
si0=0U;
L0:;
return si0;
}

void f408(rustpythonInstance*i,U32 l0,U32 l1) {
U32 si0;
U64 sj1;
si0=l0;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
L0:;
}

U32 f409(rustpythonInstance*i,U32 l0) {
U32 si0;
si0=0U;
L0:;
return si0;
}

U32 f410(rustpythonInstance*i,U32 l0) {
U32 si0;
si0=1114112U;
L0:;
return si0;
}

U32 f411(rustpythonInstance*i,U32 l0) {
U32 si0;
si0=1U;
L0:;
return si0;
}

void f412(rustpythonInstance*i,U32 l0,U32 l1) {
U32 si0,si1,si2;
U64 sj1;
si0=l0;
si1=l1;
si2=120U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
L0:;
}

void f413(rustpythonInstance*i,U32 l0,U32 l1) {
U32 si0,si1,si2;
U64 sj1;
si0=l0;
si1=l1;
si2=128U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
L0:;
}

void f414(rustpythonInstance*i,U32 l0,U32 l1) {
U32 si0,si1;
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
L0:;
}

void f415(rustpythonInstance*i,U32 l0,U32 l1) {
U32 si0,si1;
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
L0:;
}

void f416(rustpythonInstance*i,U32 l0,U32 l1) {
U32 si0,si1;
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
L0:;
}

void f417(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 l3=0;
U32 si0,si1,si2,si3,si4;
U64 sj1;
si0=i->g0;
si1=16U;
si0-=si1;
l2=si0;
i->g0=si0;
si0=l1;
si1=152U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=!(si0);
if(si0){
goto L2;
}
si0=l2;
si1=l3;
si2=l3;
si3=l1;
si4=160U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si4=12U;
si3*=si4;
si2+=si3;
f304(i,si0,si1,si2);
si0=l2;
si0=i32_load(&i->m0,(U64)si0+8U);
si0=!(si0);
if(si0){
goto L3;
}
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
goto L1;
L3:;
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
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
L2:;
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
L1:;
si0=l2;
si1=16U;
si0+=si1;
i->g0=si0;
L0:;
}

U32 f418(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 si0,si1,si2,si3;
U64 sj1;
si0=i->g0;
si1=32U;
si0-=si1;
l2=si0;
i->g0=si0;
si0=l2;
si1=212U;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l2;
si1=l0;
si2=72U;
si1+=si2;
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
si1=1089852U;
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

void f419(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
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
si1=20U;
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
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=l7;
si1=i32_load(&i->m0,(U64)si1);
si2=l7;
si3=-8U;
si2+=si3;
si2=i32_load(&i->m0,(U64)si2);
si3=l7;
si4=-16U;
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
f580(i,si0,si1,si2);
L8:;
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
f580(i,si0,si1,si2);
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
si0=f15390(i,si0,si1,si2);
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

U32 f420(rustpythonInstance*i,U32 l0) {
U32 si0;
si0=1U;
L0:;
return si0;
}

void f421(rustpythonInstance*i,U32 l0,U32 l1) {
U32 si0,si1;
si0=l0;
si1=4U;
i32_store8(&i->m0,(U64)si0,si1);
L0:;
}

void f422(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
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
f580(i,si0,si1,si2);
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
si0=f15390(i,si0,si1,si2);
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

void f423(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
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
f580(i,si0,si1,si2);
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
si0=f15390(i,si0,si1,si2);
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

void f424(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U32 si0,si1,si2;
U64 sj1;
si0=i->g0;
si1=80U;
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
i64_store(&i->m0,(U64)si0+8U,sj1);
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
i32_store(&i->m0,(U64)si0+72U,si1);
goto L1;
L3:;
si0=l4;
si1=0U;
i32_store(&i->m0,(U64)si0+72U,si1);
goto L1;
L2:;
si0=l4;
si1=3U;
i32_store(&i->m0,(U64)si0+72U,si1);
L1:;
si0=l4;
si1=l3;
i32_store(&i->m0,(U64)si0+76U,si1);
si0=l4;
si1=52U;
si0+=si1;
sj1=1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=215U;
i32_store(&i->m0,(U64)si0+68U,si1);
si0=l4;
si1=1U;
i32_store(&i->m0,(U64)si0+44U,si1);
si0=l4;
si1=1090976U;
i32_store(&i->m0,(U64)si0+40U,si1);
si0=l4;
si1=l4;
si2=72U;
si1+=si2;
i32_store(&i->m0,(U64)si0+64U,si1);
si0=l4;
si1=l4;
si2=64U;
si1+=si2;
i32_store(&i->m0,(U64)si0+48U,si1);
si0=l4;
si1=24U;
si0+=si1;
si1=l4;
si2=40U;
si1+=si2;
f63(i,si0,si1);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+24U);
l3=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+12U);
si1=l4;
si1=i32_load(&i->m0,(U64)si1+16U);
l2=si1;
si0-=si1;
si1=l4;
si1=i32_load(&i->m0,(U64)si1+32U);
l1=si1;
si0=si0 >= si1;
if(si0){
goto L5;
}
si0=l4;
si1=8U;
si0+=si1;
si1=l2;
si2=l1;
f580(i,si0,si1,si2);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+16U);
l2=si0;
L5:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+8U);
si1=l2;
si0+=si1;
si1=l3;
si2=l1;
si0=f15390(i,si0,si1,si2);
si0=l0;
si1=8U;
si0+=si1;
si1=l2;
si2=l1;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1+8U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+28U);
si0=!(si0);
if(si0){
goto L6;
}
si0=l3;
f15271(i,si0);
L6:;
si0=l4;
si1=80U;
si0+=si1;
i->g0=si0;
L0:;
}

void f425(rustpythonInstance*i,U32 l0) {
L0:;
}

void f426(rustpythonInstance*i,U32 l0) {
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

void f427(rustpythonInstance*i,U32 l0) {
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
f15271(i,si0);
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
f15271(i,si0);
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
f15271(i,si0);
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
f15271(i,si0);
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
f15271(i,si0);
L5:;
L0:;
}

void f428(rustpythonInstance*i,U32 l0) {
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
f15271(i,si0);
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
f15271(i,si0);
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
f15271(i,si0);
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
f15271(i,si0);
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
f15271(i,si0);
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
f15271(i,si0);
L6:;
L0:;
}

void f429(rustpythonInstance*i,U32 l0) {
U32 l1=0;
U32 si0,si1;
si0=l0;
si1=32U;
si0+=si1;
f427(i,si0);
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
f15271(i,si0);
L1:;
L0:;
}


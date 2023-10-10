#include "w2c2_base.h"

#include "rustpython.h"

void f14730(rustpythonInstance*i,U32 l0) {
U32 l1=0;
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
si1=16U;
si0-=si1;
l1=si0;
i->g0=si0;
si0=f15040(i);
l2=si0;
si0=0U;
l3=si0;
si0=l1;
si1=0U;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l1;
sj1=4ULL;
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=4U;
l4=si0;
si0=l2;
if(si0){
goto L5;
}
si0=0U;
l5=si0;
goto L4;
L5:;
si0=0U;
l5=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si0=!(si0);
if(si0){
goto L4;
}
si0=4U;
l7=si0;
si0=0U;
l3=si0;
L6:;
{
si0=l2;
l8=si0;
si0=l6;
si0=f15152(i,si0);
l9=si0;
si0=!(si0);
if(si0){
goto L7;
}
si0=l6;
si1=1U;
si0+=si1;
l5=si0;
si0=l9;
si1=-1U;
si0+=si1;
l10=si0;
si0=l9;
si1=9U;
si0=si0 < si1;
if(si0){
goto L9;
}
si0=l5;
si1=3U;
si0+=si1;
si1=-4U;
si0&=si1;
l2=si0;
si1=l5;
si0=si0 == si1;
if(si0){
goto L12;
}
si0=l2;
si1=l5;
si0-=si1;
l4=si0;
si0=!(si0);
if(si0){
goto L12;
}
si0=0U;
l2=si0;
L13:;
{
si0=l5;
si1=l2;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=61U;
si0=si0 == si1;
if(si0){
goto L8;
}
si0=l4;
si1=l2;
si2=1U;
si1+=si2;
l2=si1;
si0=si0 != si1;
if(si0){
goto L13;
}
}
si0=l4;
si1=l9;
si2=-9U;
si1+=si2;
l11=si1;
si0=si0 <= si1;
if(si0){
goto L11;
}
goto L10;
L12:;
si0=l9;
si1=-9U;
si0+=si1;
l11=si0;
si0=0U;
l4=si0;
L11:;
L14:;
{
si0=l6;
si1=l4;
si0+=si1;
l12=si0;
si1=1U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si1=-1U;
si0^=si1;
si1=l2;
si2=1027423549U;
si1^=si2;
si2=-16843009U;
si1+=si2;
si0&=si1;
si1=-2139062144U;
si0&=si1;
if(si0){
goto L10;
}
si0=l12;
si1=5U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si1=-1U;
si0^=si1;
si1=l2;
si2=1027423549U;
si1^=si2;
si2=-16843009U;
si1+=si2;
si0&=si1;
si1=-2139062144U;
si0&=si1;
if(si0){
goto L10;
}
si0=l4;
si1=8U;
si0+=si1;
l4=si0;
si1=l11;
si0=si0 <= si1;
if(si0){
goto L14;
}
}
L10:;
si0=l4;
si1=l10;
si0=si0 == si1;
if(si0){
goto L7;
}
L15:;
{
si0=l5;
si1=l4;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=61U;
si0=si0 != si1;
if(si0){
goto L16;
}
si0=l4;
l2=si0;
goto L8;
L16:;
si0=l10;
si1=l4;
si2=1U;
si1+=si2;
l4=si1;
si0=si0 != si1;
if(si0){
goto L15;
}
goto L7;
}
L9:;
si0=l10;
si0=!(si0);
if(si0){
goto L7;
}
si0=0U;
l2=si0;
L17:;
{
si0=l5;
si1=l2;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=61U;
si0=si0 == si1;
if(si0){
goto L8;
}
si0=l10;
si1=l2;
si2=1U;
si1+=si2;
l2=si1;
si0=si0 != si1;
if(si0){
goto L17;
}
goto L7;
}
L8:;
si0=l2;
si1=1U;
si0+=si1;
l4=si0;
si1=l9;
si0=si0 > si1;
if(si0){
goto L3;
}
si0=l4;
if(si0){
goto L19;
}
si0=1U;
l5=si0;
goto L18;
L19:;
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
l5=si0;
si0=!(si0);
if(si0){
goto L1;
}
L18:;
si0=l5;
si1=l6;
si2=l4;
si0=f15143(i,si0,si1,si2);
l10=si0;
si0=l2;
si1=2U;
si0+=si1;
l5=si0;
si0=l4;
si1=l9;
si0=si0 >= si1;
if(si0){
goto L21;
}
si0=l9;
si1=l5;
si0-=si1;
l2=si0;
si0=1U;
l12=si0;
si0=l9;
si1=l5;
si0=si0 == si1;
if(si0){
goto L20;
}
si0=l2;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L2;
}
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=l2;
si0=f15022(i,si0);
l12=si0;
if(si0){
goto L20;
}
si0=1U;
si1=l2;
f52(i,si0,si1);
UNREACHABLE;
L21:;
si0=l5;
si1=l9;
si2=17682896U;
f593(i,si0,si1,si2);
UNREACHABLE;
L20:;
si0=l12;
si1=l6;
si2=l5;
si1+=si2;
si2=l2;
si0=f15143(i,si0,si1,si2);
l6=si0;
si0=l10;
si0=!(si0);
if(si0){
goto L7;
}
si0=l3;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+8U);
si0=si0 != si1;
if(si0){
goto L22;
}
si0=l1;
si1=4U;
si0+=si1;
si1=l3;
f14715(i,si0,si1);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
l7=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+12U);
l3=si0;
L22:;
si0=l7;
si1=l3;
si2=24U;
si1*=si2;
si0+=si1;
l5=si0;
si1=l2;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l5;
si1=l2;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l5;
si1=l6;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l5;
si1=l4;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l5;
si1=l4;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l5;
si1=l10;
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
si1=l3;
si2=1U;
si1+=si2;
l3=si1;
i32_store(&i->m0,(U64)si0+12U,si1);
L7:;
si0=l8;
si1=4U;
si0+=si1;
l2=si0;
si0=l8;
si0=i32_load(&i->m0,(U64)si0+4U);
l6=si0;
if(si0){
goto L6;
}
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+8U);
l5=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
l4=si0;
L4:;
si0=l0;
si1=l4;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l0;
si1=l5;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l4;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l4;
si2=l3;
si3=24U;
si2*=si3;
si1+=si2;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l1;
si1=16U;
si0+=si1;
i->g0=si0;
goto L0;
L3:;
si0=l4;
si1=l9;
si2=17682880U;
f597(i,si0,si1,si2);
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

void f14731(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 si0,si1,si2;
U64 sj0,sj1;
si0=i->g0;
si1=32U;
si0-=si1;
l3=si0;
i->g0=si0;
si0=l3;
si1=8U;
si0+=si1;
si1=l1;
si2=l2;
f14732(i,si0,si1,si2);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+8U);
l2=si0;
if(si0){
goto L2;
}
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=1U;
l1=si0;
goto L1;
L2:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+12U);
l4=si0;
si0=l3;
si1=20U;
si0+=si1;
si1=l2;
si2=l3;
si2=i32_load(&i->m0,(U64)si2+16U);
l5=si2;
f686(i,si0,si1,si2);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+20U);
si0=!(si0);
if(si0){
goto L5;
}
si0=l3;
si1=28U;
si0+=si1;
sj0=i64_load8_u(&i->m0,(U64)si0);
sj1=32ULL;
sj0<<=(sj1&63);
sj1=8589934592ULL;
si0=sj0 != sj1;
if(si0){
goto L4;
}
L5:;
si0=l0;
si1=4U;
si0+=si1;
l6=si0;
si0=0U;
l1=si0;
goto L3;
L4:;
si0=l0;
si1=4U;
si0+=si1;
l6=si0;
si0=1U;
l1=si0;
L3:;
si0=l0;
si1=l2;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l6;
si1=l4;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l6;
si1=l5;
i32_store(&i->m0,(U64)si0+8U,si1);
L1:;
si0=l0;
si1=l1;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=32U;
si0+=si1;
i->g0=si0;
L0:;
}

void f14732(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U32 l4=0;
U32 si0,si1,si2,si3;
U64 sj1;
si0=i->g0;
si1=416U;
si0-=si1;
l3=si0;
i->g0=si0;
si0=l2;
si1=383U;
si0=si0 > si1;
if(si0){
goto L4;
}
si0=l3;
si1=20U;
si0+=si1;
si1=l1;
si2=l2;
si0=f15143(i,si0,si1,si2);
si0=l3;
si1=20U;
si0+=si1;
si1=l2;
si0+=si1;
si1=0U;
i32_store8(&i->m0,(U64)si0,si1);
si0=1U;
l1=si0;
si0=l3;
si1=404U;
si0+=si1;
si1=l3;
si2=20U;
si1+=si2;
si2=l2;
si3=1U;
si2+=si3;
f633(i,si0,si1,si2);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+404U);
if(si0){
goto L5;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0+408U);
si0=f15090(i,si0);
l1=si0;
if(si0){
goto L6;
}
si0=0U;
l1=si0;
si0=l3;
si1=0U;
i32_store(&i->m0,(U64)si0+8U,si1);
goto L1;
L6:;
si0=l1;
si0=f15152(i,si0);
l2=si0;
if(si0){
goto L8;
}
si0=1U;
l4=si0;
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
l4=si0;
si0=!(si0);
if(si0){
goto L2;
}
L7:;
si0=l4;
si1=l1;
si2=l2;
si0=f15143(i,si0,si1,si2);
l1=si0;
si0=l3;
si1=16U;
si0+=si1;
si1=l2;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=12U;
si0+=si1;
si1=l2;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=l1;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=0U;
l1=si0;
goto L1;
L5:;
si0=l3;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+17680760U);
i64_store(&i->m0,(U64)si0+8U,sj1);
goto L1;
L4:;
si0=l3;
si1=4U;
si0+=si1;
si1=l1;
si2=l2;
f14733(i,si0,si1,si2);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+4U);
l1=si0;
goto L1;
L3:;
f53(i);
UNREACHABLE;
L2:;
si0=1U;
si1=l2;
f52(i,si0,si1);
UNREACHABLE;
L1:;
si0=l1;
if(si0){
goto L10;
}
si0=l0;
si1=l3;
sj1=i64_load(&i->m0,(U64)si1+8U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=8U;
si0+=si1;
si1=l3;
si2=16U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
goto L9;
L10:;
si0=l3;
si0=i32_load8_u(&i->m0,(U64)si0+8U);
si1=3U;
si0=si0 != si1;
if(si0){
goto L11;
}
si0=l3;
si1=12U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
si1=l2;
si2=4U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
l1=si1;
si1=i32_load(&i->m0,(U64)si1);
TF(i->t0,si1,void (*)(rustpythonInstance*,U32))(i,si0);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
si0=!(si0);
if(si0){
goto L12;
}
si0=l4;
f15024(i,si0);
L12:;
si0=l2;
f15024(i,si0);
L11:;
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
L9:;
si0=l3;
si1=416U;
si0+=si1;
i->g0=si0;
L0:;
}

void f14733(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 si0,si1,si2;
U64 sj1;
si0=i->g0;
si1=16U;
si0-=si1;
l3=si0;
i->g0=si0;
si0=l3;
si1=l1;
si2=l2;
f60(i,si0,si1,si2);
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
if(si0){
goto L5;
}
si0=l3;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+4U);
l2=si0;
si0=f15090(i,si0);
l5=si0;
if(si0){
goto L7;
}
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0+4U,si1);
goto L6;
L7:;
si0=l5;
si0=f15152(i,si0);
l1=si0;
if(si0){
goto L9;
}
si0=1U;
l6=si0;
goto L8;
L9:;
si0=l1;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L4;
}
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=l1;
si0=f15022(i,si0);
l6=si0;
si0=!(si0);
if(si0){
goto L3;
}
L8:;
si0=l6;
si1=l5;
si2=l1;
si0=f15143(i,si0,si1,si2);
l5=si0;
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
si1=l5;
i32_store(&i->m0,(U64)si0+4U,si1);
L6:;
si0=l2;
si1=0U;
i32_store8(&i->m0,(U64)si0,si1);
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si0=!(si0);
if(si0){
goto L1;
}
goto L2;
L5:;
si0=l0;
si1=1U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+17680760U);
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+4U);
if(si0){
goto L2;
}
goto L1;
L4:;
f53(i);
UNREACHABLE;
L3:;
si0=1U;
si1=l1;
f52(i,si0,si1);
UNREACHABLE;
L2:;
si0=l2;
f15024(i,si0);
L1:;
si0=l3;
si1=16U;
si0+=si1;
i->g0=si0;
L0:;
}

void f14734(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U32 si0,si1,si2,si3,si4;
U64 sj1,sj2;
si0=i->g0;
si1=832U;
si0-=si1;
l4=si0;
i->g0=si0;
si0=l4;
si1=l1;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l4;
si1=l0;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l4;
si1=l3;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l4;
si1=l2;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l1;
si1=383U;
si0=si0 > si1;
if(si0){
goto L3;
}
si0=l4;
si1=36U;
si0+=si1;
si1=l0;
si2=l1;
si0=f15143(i,si0,si1,si2);
si0=l4;
si1=36U;
si0+=si1;
si1=l1;
si0+=si1;
si1=0U;
i32_store8(&i->m0,(U64)si0,si1);
si0=l4;
si1=420U;
si0+=si1;
si1=l4;
si2=36U;
si1+=si2;
si2=l1;
si3=1U;
si2+=si3;
f633(i,si0,si1,si2);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+420U);
if(si0){
goto L4;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0+424U);
l1=si0;
si0=l3;
si1=383U;
si0=si0 > si1;
if(si0){
goto L2;
}
si0=l4;
si1=432U;
si0+=si1;
si1=l2;
si2=l3;
si0=f15143(i,si0,si1,si2);
si0=l4;
si1=432U;
si0+=si1;
si1=l3;
si0+=si1;
si1=0U;
i32_store8(&i->m0,(U64)si0,si1);
si0=l4;
si1=816U;
si0+=si1;
si1=l4;
si2=432U;
si1+=si2;
si2=l3;
si3=1U;
si2+=si3;
f633(i,si0,si1,si2);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+816U);
if(si0){
goto L5;
}
si0=l1;
si1=l4;
si1=i32_load(&i->m0,(U64)si1+820U);
si2=1U;
si0=f15093(i,si0,si1,si2);
si1=-1U;
si0=si0 == si1;
if(si0){
goto L6;
}
si0=l4;
si1=4U;
i32_store8(&i->m0,(U64)si0+24U,si1);
goto L1;
L6:;
si0=l4;
si1=0U;
sj1=i64_load32_u(&i->m0,(U64)si1+18663788U);
sj2=32ULL;
sj1<<=(sj2&63);
i64_store(&i->m0,(U64)si0+24U,sj1);
goto L1;
L5:;
si0=l4;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+17680760U);
i64_store(&i->m0,(U64)si0+24U,sj1);
goto L1;
L4:;
si0=l4;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+17680760U);
i64_store(&i->m0,(U64)si0+24U,sj1);
goto L1;
L3:;
si0=l4;
si1=24U;
si0+=si1;
si1=l0;
si2=l1;
si3=l2;
si4=l3;
f14735(i,si0,si1,si2,si3,si4);
goto L1;
L2:;
si0=l4;
si1=24U;
si0+=si1;
si1=l2;
si2=l3;
si3=l1;
f14736(i,si0,si1,si2,si3);
L1:;
si0=l4;
si0=i32_load8_u(&i->m0,(U64)si0+24U);
si1=4U;
si0=si0 == si1;
if(si0){
goto L7;
}
si0=l4;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1+24U);
i64_store(&i->m0,(U64)si0+816U,sj1);
si0=l4;
si1=452U;
si0+=si1;
si1=294U;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=444U;
si0+=si1;
si1=7282U;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=7282U;
i32_store(&i->m0,(U64)si0+436U,si1);
si0=l4;
si1=l4;
si2=816U;
si1+=si2;
i32_store(&i->m0,(U64)si0+448U,si1);
si0=l4;
si1=l4;
si2=16U;
si1+=si2;
i32_store(&i->m0,(U64)si0+440U,si1);
si0=l4;
si1=l4;
si2=8U;
si1+=si2;
i32_store(&i->m0,(U64)si0+432U,si1);
si0=l4;
si1=36U;
si0+=si1;
si1=17678092U;
si2=3U;
si3=l4;
si4=432U;
si3+=si4;
si4=3U;
f14677(i,si0,si1,si2,si3,si4);
si0=l4;
si1=36U;
si0+=si1;
si1=17678116U;
f614(i,si0,si1);
UNREACHABLE;
L7:;
si0=l4;
si1=832U;
si0+=si1;
i->g0=si0;
L0:;
}

void f14735(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4) {
U32 l5=0;
U32 si0,si1,si2,si3;
U64 sj1,sj2;
si0=i->g0;
si1=416U;
si0-=si1;
l5=si0;
i->g0=si0;
si0=l5;
si1=4U;
si0+=si1;
si1=l1;
si2=l2;
f60(i,si0,si1,si2);
si0=l5;
si0=i32_load(&i->m0,(U64)si0+4U);
l2=si0;
if(si0){
goto L4;
}
si0=l5;
si1=12U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+8U);
l2=si0;
si0=l4;
si1=383U;
si0=si0 > si1;
if(si0){
goto L3;
}
si0=l5;
si1=20U;
si0+=si1;
si1=l3;
si2=l4;
si0=f15143(i,si0,si1,si2);
si0=l5;
si1=20U;
si0+=si1;
si1=l4;
si0+=si1;
si1=0U;
i32_store8(&i->m0,(U64)si0,si1);
si0=l5;
si1=404U;
si0+=si1;
si1=l5;
si2=20U;
si1+=si2;
si2=l4;
si3=1U;
si2+=si3;
f633(i,si0,si1,si2);
si0=l5;
si0=i32_load(&i->m0,(U64)si0+404U);
if(si0){
goto L5;
}
si0=l2;
si1=l5;
si1=i32_load(&i->m0,(U64)si1+408U);
si2=1U;
si0=f15093(i,si0,si1,si2);
si1=-1U;
si0=si0 == si1;
if(si0){
goto L6;
}
si0=l0;
si1=4U;
i32_store8(&i->m0,(U64)si0,si1);
goto L2;
L6:;
si0=l0;
si1=0U;
sj1=i64_load32_u(&i->m0,(U64)si1+18663788U);
sj2=32ULL;
sj1<<=(sj2&63);
i64_store(&i->m0,(U64)si0,sj1);
goto L2;
L5:;
si0=l0;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+17680760U);
i64_store(&i->m0,(U64)si0,sj1);
goto L2;
L4:;
si0=l0;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+17680760U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si0=i32_load(&i->m0,(U64)si0+8U);
si0=!(si0);
if(si0){
goto L1;
}
si0=l2;
f15024(i,si0);
goto L1;
L3:;
si0=l0;
si1=l3;
si2=l4;
si3=l2;
f14736(i,si0,si1,si2,si3);
L2:;
si0=l2;
si1=0U;
i32_store8(&i->m0,(U64)si0,si1);
si0=l1;
si0=!(si0);
if(si0){
goto L1;
}
si0=l2;
f15024(i,si0);
L1:;
si0=l5;
si1=416U;
si0+=si1;
i->g0=si0;
L0:;
}

void f14736(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U32 si0,si1,si2;
U64 sj1,sj2;
si0=i->g0;
si1=16U;
si0-=si1;
l4=si0;
i->g0=si0;
si0=l4;
si1=l1;
si2=l2;
f60(i,si0,si1,si2);
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
if(si0){
goto L3;
}
si0=l4;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si0=l3;
si1=l4;
si1=i32_load(&i->m0,(U64)si1+4U);
l2=si1;
si2=1U;
si0=f15093(i,si0,si1,si2);
si1=-1U;
si0=si0 == si1;
if(si0){
goto L5;
}
si0=l0;
si1=4U;
i32_store8(&i->m0,(U64)si0,si1);
goto L4;
L5:;
si0=l0;
si1=0U;
sj1=i64_load32_u(&i->m0,(U64)si1+18663788U);
sj2=32ULL;
sj1<<=(sj2&63);
i64_store(&i->m0,(U64)si0,sj1);
L4:;
si0=l2;
si1=0U;
i32_store8(&i->m0,(U64)si0,si1);
si0=l1;
si0=!(si0);
if(si0){
goto L1;
}
goto L2;
L3:;
si0=l0;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+17680760U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+4U);
si0=!(si0);
if(si0){
goto L1;
}
L2:;
si0=l2;
f15024(i,si0);
L1:;
si0=l4;
si1=16U;
si0+=si1;
i->g0=si0;
L0:;
}

U32 f14737(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 si0,si1,si2,si3;
U64 sj1;
si0=i->g0;
si1=64U;
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
si1=l0;
si1=i32_load(&i->m0,(U64)si1+4U);
l0=si1;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l2;
si1=12U;
si0+=si1;
si1=l0;
f14759(i,si0,si1);
si0=l2;
si1=40U;
si0+=si1;
si1=12U;
si0+=si1;
sj1=2ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=24U;
si0+=si1;
si1=12U;
si0+=si1;
si1=49U;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=3U;
i32_store(&i->m0,(U64)si0+44U,si1);
si0=l2;
si1=17679376U;
i32_store(&i->m0,(U64)si0+40U,si1);
si0=l2;
si1=7283U;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l1;
si1=24U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l0=si0;
si0=l2;
si1=l2;
si2=24U;
si1+=si2;
i32_store(&i->m0,(U64)si0+48U,si1);
si0=l2;
si1=l2;
si2=8U;
si1+=si2;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l2;
si1=l2;
si2=12U;
si1+=si2;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=l0;
si2=l2;
si3=40U;
si2+=si3;
si0=f621(i,si0,si1,si2);
l0=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+16U);
si0=!(si0);
if(si0){
goto L1;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0+12U);
f15024(i,si0);
goto L1;
L4:;
si0=l0;
si0=i32_load8_u(&i->m0,(U64)si0+1U);
l0=si0;
si0=l2;
si1=52U;
si0+=si1;
sj1=1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=1U;
i32_store(&i->m0,(U64)si0+44U,si1);
si0=l2;
si1=17678356U;
i32_store(&i->m0,(U64)si0+40U,si1);
si0=l2;
si1=295U;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l2;
si1=l0;
si2=2U;
si1<<=(si2&31);
l0=si1;
si2=17683476U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l2;
si1=l0;
si2=17683640U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l1;
si1=24U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l0=si0;
si0=l2;
si1=l2;
si2=12U;
si1+=si2;
i32_store(&i->m0,(U64)si0+48U,si1);
si0=l2;
si1=l2;
si2=24U;
si1+=si2;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=l0;
si2=l2;
si3=40U;
si2+=si3;
si0=f621(i,si0,si1,si2);
l0=si0;
goto L1;
L3:;
si0=l1;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+4U);
l0=si1;
si1=i32_load(&i->m0,(U64)si1);
si2=l0;
si2=i32_load(&i->m0,(U64)si2+4U);
si0=f642(i,si0,si1,si2);
l0=si0;
goto L1;
L2:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+4U);
l0=si0;
si0=i32_load(&i->m0,(U64)si0);
si1=l1;
si2=l0;
si2=i32_load(&i->m0,(U64)si2+4U);
si2=i32_load(&i->m0,(U64)si2+16U);
si0=TF(i->t0,si2,U32 (*)(rustpythonInstance*,U32,U32))(i,si0,si1);
l0=si0;
L1:;
si0=l2;
si1=64U;
si0+=si1;
i->g0=si0;
si0=l0;
L0:;
return si0;
}

U32 f14738(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 si0,si1;
U64 sj1;
si0=i->g0;
si1=16U;
si0-=si1;
l2=si0;
i->g0=si0;
si0=l2;
si1=l0;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+8U,sj1);
si0=l2;
si1=8U;
si0+=si1;
si1=l1;
si0=f691(i,si0,si1);
l0=si0;
si0=l2;
si1=16U;
si0+=si1;
i->g0=si0;
si0=l0;
L0:;
return si0;
}

void f14739(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U64 l3=0;
U32 si0,si1,si2,si3,si4;
U64 sj0,sj1,sj2;
si0=i->g0;
si1=432U;
si0-=si1;
l2=si0;
i->g0=si0;
si0=l2;
si1=l1;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l2;
si1=l0;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l1;
si1=383U;
si0=si0 > si1;
if(si0){
goto L2;
}
si0=l2;
si1=32U;
si0+=si1;
si1=l0;
si2=l1;
si0=f15143(i,si0,si1,si2);
si0=l2;
si1=32U;
si0+=si1;
si1=l1;
si0+=si1;
si1=0U;
i32_store8(&i->m0,(U64)si0,si1);
si0=l2;
si1=416U;
si0+=si1;
si1=l2;
si2=32U;
si1+=si2;
si2=l1;
si3=1U;
si2+=si3;
f633(i,si0,si1,si2);
si0=l2;
si0=i32_load(&i->m0,(U64)si0+416U);
if(si0){
goto L3;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0+420U);
si0=f15094(i,si0);
si1=-1U;
si0=si0 == si1;
if(si0){
goto L4;
}
si0=4U;
l1=si0;
si0=l2;
si1=4U;
i32_store8(&i->m0,(U64)si0+16U,si1);
goto L1;
L4:;
si0=0U;
l1=si0;
si0=l2;
si1=0U;
sj1=i64_load32_u(&i->m0,(U64)si1+18663788U);
sj2=32ULL;
sj1<<=(sj2&63);
i64_store(&i->m0,(U64)si0+16U,sj1);
goto L1;
L3:;
si0=l2;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+17680760U);
l3=sj1;
i64_store(&i->m0,(U64)si0+16U,sj1);
sj0=l3;
si0=(U32)(sj0);
l1=si0;
goto L1;
L2:;
si0=l2;
si1=16U;
si0+=si1;
si1=l0;
si2=l1;
f14740(i,si0,si1,si2);
si0=l2;
si0=i32_load8_u(&i->m0,(U64)si0+16U);
l1=si0;
L1:;
si0=l1;
si1=255U;
si0&=si1;
si1=4U;
si0=si0 == si1;
if(si0){
goto L5;
}
si0=l2;
si1=l2;
sj1=i64_load(&i->m0,(U64)si1+16U);
i64_store(&i->m0,(U64)si0+24U,sj1);
si0=l2;
si1=428U;
si0+=si1;
si1=294U;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=7282U;
i32_store(&i->m0,(U64)si0+420U,si1);
si0=l2;
si1=l2;
si2=24U;
si1+=si2;
i32_store(&i->m0,(U64)si0+424U,si1);
si0=l2;
si1=l2;
si2=8U;
si1+=si2;
i32_store(&i->m0,(U64)si0+416U,si1);
si0=l2;
si1=32U;
si0+=si1;
si1=17678172U;
si2=2U;
si3=l2;
si4=416U;
si3+=si4;
si4=2U;
f14677(i,si0,si1,si2,si3,si4);
si0=l2;
si1=32U;
si0+=si1;
si1=17678188U;
f614(i,si0,si1);
UNREACHABLE;
L5:;
si0=l2;
si1=432U;
si0+=si1;
i->g0=si0;
L0:;
}

void f14740(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U32 si0,si1,si2;
U64 sj1,sj2;
si0=i->g0;
si1=16U;
si0-=si1;
l3=si0;
i->g0=si0;
si0=l3;
si1=l1;
si2=l2;
f60(i,si0,si1,si2);
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
if(si0){
goto L3;
}
si0=l3;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+4U);
l2=si0;
si0=f15094(i,si0);
si1=-1U;
si0=si0 == si1;
if(si0){
goto L5;
}
si0=l0;
si1=4U;
i32_store8(&i->m0,(U64)si0,si1);
goto L4;
L5:;
si0=l0;
si1=0U;
sj1=i64_load32_u(&i->m0,(U64)si1+18663788U);
sj2=32ULL;
sj1<<=(sj2&63);
i64_store(&i->m0,(U64)si0,sj1);
L4:;
si0=l2;
si1=0U;
i32_store8(&i->m0,(U64)si0,si1);
si0=l1;
si0=!(si0);
if(si0){
goto L1;
}
goto L2;
L3:;
si0=l0;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+17680760U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+4U);
si0=!(si0);
if(si0){
goto L1;
}
L2:;
si0=l2;
f15024(i,si0);
L1:;
si0=l3;
si1=16U;
si0+=si1;
i->g0=si0;
L0:;
}

void f14741(rustpythonInstance*i,U32 l0) {
U32 l1=0;
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
U32 si0,si1,si2,si3;
U64 sj0,sj1;
si0=i->g0;
si1=16U;
si0-=si1;
l1=si0;
i->g0=si0;
si0=l1;
si1=12U;
si0+=si1;
si1=l1;
si0=wasi_snapshot_preview1__args_sizes_get(i,si0,si1);
if(si0){
goto L3;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si0=4U;
l3=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+12U);
l4=si0;
si0=!(si0);
if(si0){
goto L9;
}
si0=l4;
si1=536870911U;
si0=si0 > si1;
if(si0){
goto L7;
}
si0=l4;
si1=2U;
si0<<=(si1&31);
l5=si0;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L7;
}
si0=l5;
si0=!(si0);
if(si0){
goto L9;
}
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=l5;
si0=f15022(i,si0);
l3=si0;
si0=!(si0);
if(si0){
goto L8;
}
L9:;
si0=l2;
si0=!(si0);
if(si0){
goto L15;
}
si0=l2;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L7;
}
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=l2;
si0=f15022(i,si0);
l6=si0;
if(si0){
goto L14;
}
si0=1U;
si1=l2;
f52(i,si0,si1);
UNREACHABLE;
L15:;
si0=1U;
l6=si0;
si0=l3;
si1=1U;
si0=wasi_snapshot_preview1__args_get(i,si0,si1);
si0=!(si0);
if(si0){
goto L13;
}
goto L11;
L14:;
si0=l3;
si1=l6;
si0=wasi_snapshot_preview1__args_get(i,si0,si1);
if(si0){
goto L12;
}
L13:;
si0=l4;
si0=!(si0);
if(si0){
goto L16;
}
si0=l4;
si1=178956970U;
si0=si0 > si1;
if(si0){
goto L7;
}
si0=l4;
si1=12U;
si0*=si1;
l5=si0;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L7;
}
si0=4U;
l7=si0;
si0=l5;
si0=!(si0);
if(si0){
goto L10;
}
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=l5;
si0=f15022(i,si0);
l7=si0;
if(si0){
goto L10;
}
si0=4U;
si1=l5;
f52(i,si0,si1);
UNREACHABLE;
L16:;
si0=l1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=4U;
l5=si0;
goto L4;
L12:;
si0=l6;
f15024(i,si0);
L11:;
si0=4U;
l5=si0;
si0=0U;
l8=si0;
si0=l4;
si0=!(si0);
if(si0){
goto L2;
}
si0=l3;
f15024(i,si0);
goto L2;
L10:;
si0=l1;
si1=0U;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l1;
si1=l7;
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
si1=l4;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l4;
si1=2U;
si0<<=(si1&31);
l9=si0;
si0=0U;
l4=si0;
si0=0U;
l8=si0;
L17:;
{
si0=1U;
l10=si0;
si0=l3;
si1=l4;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l11=si0;
si0=f15152(i,si0);
l5=si0;
si0=!(si0);
if(si0){
goto L18;
}
si0=l5;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L7;
}
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=l5;
si0=f15022(i,si0);
l10=si0;
si0=!(si0);
if(si0){
goto L6;
}
L18:;
si0=l10;
si1=l11;
si2=l5;
si0=f15143(i,si0,si1,si2);
l11=si0;
si0=l8;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+4U);
si0=si0 != si1;
if(si0){
goto L19;
}
si0=l1;
si1=l8;
f14716(i,si0,si1);
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+8U);
l8=si0;
L19:;
si0=l7;
si1=l8;
si2=12U;
si1*=si2;
si0+=si1;
l10=si0;
si1=l5;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l10;
si1=l5;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l10;
si1=l11;
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
si1=l8;
si2=1U;
si1+=si2;
l8=si1;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l9;
si1=l4;
si2=4U;
si1+=si2;
l4=si1;
si0=si0 == si1;
if(si0){
goto L5;
}
goto L17;
}
L8:;
si0=4U;
si1=l5;
f52(i,si0,si1);
UNREACHABLE;
L7:;
f53(i);
UNREACHABLE;
L6:;
si0=1U;
si1=l5;
f52(i,si0,si1);
UNREACHABLE;
L5:;
si0=l3;
f15024(i,si0);
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
L4:;
si0=l1;
sj0=i64_load(&i->m0,(U64)si0+4U);
l12=sj0;
si0=l2;
si0=!(si0);
if(si0){
goto L20;
}
si0=l6;
f15024(i,si0);
L20:;
si0=l5;
si0=!(si0);
if(si0){
goto L3;
}
sj0=l12;
sj1=32ULL;
sj0>>=(sj1&63);
si0=(U32)(sj0);
l8=si0;
sj0=l12;
si0=(U32)(sj0);
l4=si0;
goto L1;
L3:;
si0=4U;
l5=si0;
si0=0U;
l8=si0;
L2:;
si0=0U;
l4=si0;
L1:;
si0=l0;
si1=l5;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l0;
si1=l4;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l5;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l5;
si2=l8;
si3=12U;
si2*=si3;
si1+=si2;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l1;
si1=16U;
si0+=si1;
i->g0=si0;
L0:;
}

void f14742(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
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
U32 si0,si1,si2,si3,si4,si5;
U64 sj0,sj1;
si0=i->g0;
si1=96U;
si0-=si1;
l3=si0;
i->g0=si0;
si0=l3;
si1=55U;
si0+=si1;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
sj1=1ULL;
i64_store(&i->m0,(U64)si0+48U,sj1);
si0=l3;
sj1=0ULL;
i64_store(&i->m0,(U64)si0+32U,sj1);
si0=l3;
sj1=0ULL;
i64_store(&i->m0,(U64)si0+16U,sj1);
si0=l3;
si1=1U;
i32_store8(&i->m0,(U64)si0+56U,si1);
si0=l3;
si1=l1;
si2=l2;
si3=l3;
si4=16U;
si3+=si4;
f14743(i,si0,si1,si2,si3);
si0=l3;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=4U;
si0=si0 != si1;
if(si0){
goto L12;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0+4U);
l4=si0;
goto L11;
L12:;
si0=l3;
sj0=i64_load(&i->m0,(U64)si0);
l5=sj0;
sj1=32ULL;
sj0>>=(sj1&63);
si0=(U32)(sj0);
l4=si0;
sj0=l5;
si0=(U32)(sj0);
l2=si0;
si1=255U;
si0&=si1;
si1=4U;
si0=si0 != si1;
if(si0){
goto L10;
}
L11:;
si0=l4;
si1=l3;
si2=16U;
si1+=si2;
si0=wasi_snapshot_preview1__fd_filestat_get(i,si0,si1);
l6=si0;
if(si0){
goto L8;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0+48U);
l7=si0;
if(si0){
goto L9;
}
si0=l3;
si1=0U;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l3;
si1=l7;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=1U;
l8=si0;
si0=l3;
si1=1U;
i32_store(&i->m0,(U64)si0,si1);
si0=1024U;
l2=si0;
goto L6;
L10:;
si0=l0;
si1=l2;
i32_store8(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=8U;
si0+=si1;
si1=l4;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=7U;
si0+=si1;
si1=l2;
si2=24U;
si1>>=(si2&31);
i32_store8(&i->m0,(U64)si0,si1);
si0=l0;
si1=5U;
si0+=si1;
si1=l2;
si2=8U;
si1>>=(si2&31);
i32_store16(&i->m0,(U64)si0,si1);
goto L1;
L9:;
si0=l7;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L4;
}
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=l7;
si0=f15022(i,si0);
l8=si0;
if(si0){
goto L7;
}
si0=1U;
si1=l7;
f52(i,si0,si1);
UNREACHABLE;
L8:;
si0=0U;
l7=si0;
si0=l3;
si1=0U;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l3;
sj1=1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=1U;
l8=si0;
goto L5;
L7:;
si0=l3;
si1=0U;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l3;
si1=l8;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=l7;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l7;
si1=1024U;
si0+=si1;
l9=si0;
si1=8191U;
si0&=si1;
l2=si0;
si0=!(si0);
if(si0){
goto L5;
}
L6:;
si0=l7;
si1=l2;
si0-=si1;
si1=9216U;
si0+=si1;
l9=si0;
L5:;
si0=0U;
l2=si0;
si0=l3;
si1=40U;
si0+=si1;
l10=si0;
si0=l3;
si1=32U;
si0+=si1;
l11=si0;
si0=l3;
si1=24U;
si0+=si1;
l12=si0;
si0=l7;
l13=si0;
si0=0U;
l14=si0;
L14:;
{
si0=l2;
si1=l13;
si0=si0 != si1;
if(si0){
goto L15;
}
si0=l3;
si1=l13;
si2=32U;
f14670(i,si0,si1,si2);
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
l8=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+4U);
l13=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+8U);
l2=si0;
L15:;
si0=l3;
si1=l8;
si2=l2;
si1+=si2;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l3;
si1=l13;
si2=l2;
si1-=si2;
l1=si1;
si2=l1;
si3=l9;
si4=l1;
si5=l9;
si4=si4 < si5;
si2=si4?si2:si3;
si3=l6;
si1=si3?si1:si2;
l15=si1;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l4;
si1=l3;
si2=16U;
si1+=si2;
si2=1U;
si3=l3;
si4=84U;
si3+=si4;
si0=wasi_snapshot_preview1__fd_read(i,si0,si1,si2,si3);
l1=si0;
si0=!(si0);
if(si0){
goto L16;
}
si0=l1;
si1=65535U;
si0&=si1;
l1=si0;
si0=f14744(i,si0);
si1=255U;
si0&=si1;
si1=35U;
si0=si0 == si1;
if(si0){
goto L14;
}
goto L3;
L16:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+84U);
l1=si0;
if(si0){
goto L17;
}
si0=4U;
l13=si0;
si0=l2;
l1=si0;
goto L2;
L17:;
si0=l14;
si1=l1;
si2=l14;
si3=l1;
si2=si2 > si3;
si0=si2?si0:si1;
l14=si0;
si1=l15;
si0=si0 > si1;
if(si0){
goto L18;
}
si0=l3;
si1=l1;
si2=l2;
si1+=si2;
l2=si1;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l14;
si1=l1;
si0-=si1;
l14=si0;
si0=l13;
si1=l7;
si0=si0 != si1;
if(si0){
goto L14;
}
si0=l2;
si1=l13;
si0=si0 != si1;
if(si0){
goto L14;
}
si0=l10;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l11;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l12;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
sj1=0ULL;
i64_store(&i->m0,(U64)si0+16U,sj1);
L20:;
{
si0=l3;
si1=32U;
i32_store(&i->m0,(U64)si0+88U,si1);
si0=l3;
si1=l3;
si2=16U;
si1+=si2;
i32_store(&i->m0,(U64)si0+84U,si1);
si0=l4;
si1=l3;
si2=84U;
si1+=si2;
si2=1U;
si3=l3;
si4=92U;
si3+=si4;
si0=wasi_snapshot_preview1__fd_read(i,si0,si1,si2,si3);
l2=si0;
if(si0){
goto L21;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0+92U);
l2=si0;
if(si0){
goto L19;
}
si0=4U;
l13=si0;
si0=l7;
l1=si0;
goto L2;
L21:;
si0=l2;
si1=65535U;
si0&=si1;
l1=si0;
si0=f14744(i,si0);
si1=255U;
si0&=si1;
si1=35U;
si0=si0 != si1;
if(si0){
goto L3;
}
goto L20;
}
L19:;
si0=l2;
si1=33U;
si0=si0 >= si1;
if(si0){
goto L13;
}
si0=l3;
si1=l7;
si2=l2;
f14670(i,si0,si1,si2);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+4U);
l13=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
l8=si0;
si1=l3;
si1=i32_load(&i->m0,(U64)si1+8U);
l1=si1;
si0+=si1;
si1=l3;
si2=16U;
si1+=si2;
si2=l2;
si0=f15143(i,si0,si1,si2);
si0=l3;
si1=l1;
si2=l2;
si1+=si2;
l2=si1;
i32_store(&i->m0,(U64)si0+8U,si1);
goto L14;
L18:;
}
si0=l14;
si1=l15;
si2=17679668U;
f597(i,si0,si1,si2);
UNREACHABLE;
L13:;
si0=l2;
si1=32U;
si2=17679684U;
f597(i,si0,si1,si2);
UNREACHABLE;
L4:;
f53(i);
UNREACHABLE;
L3:;
si0=0U;
l13=si0;
L2:;
si0=l3;
si1=16U;
si0+=si1;
si1=l8;
si2=l3;
si2=i32_load(&i->m0,(U64)si2+8U);
f686(i,si0,si1,si2);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+16U);
si0=!(si0);
if(si0){
goto L23;
}
si0=17678296U;
si1=l1;
si2=l13;
si3=4U;
si2=si2 == si3;
l2=si2;
si0=si2?si0:si1;
l1=si0;
si0=2U;
si1=l13;
si2=l2;
si0=si2?si0:si1;
l13=si0;
goto L22;
L23:;
si0=l13;
si1=4U;
si0=si0 != si1;
if(si0){
goto L22;
}
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
si0=l4;
si0=f15041(i,si0);
goto L1;
L22:;
si0=l0;
si1=l13;
i32_store8(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=7U;
si0+=si1;
si1=0U;
i32_store8(&i->m0,(U64)si0,si1);
si0=l0;
si1=5U;
si0+=si1;
si1=0U;
i32_store16(&i->m0,(U64)si0,si1);
si0=l0;
si1=8U;
si0+=si1;
si1=l1;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+4U);
si0=!(si0);
if(si0){
goto L24;
}
si0=l8;
f15024(i,si0);
L24:;
si0=l4;
si0=f15041(i,si0);
L1:;
si0=l3;
si1=96U;
si0+=si1;
i->g0=si0;
L0:;
}

void f14743(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U64 l5=0;
U32 si0,si1,si2,si3,si4;
U64 sj0,sj1,sj2;
si0=i->g0;
si1=416U;
si0-=si1;
l4=si0;
i->g0=si0;
si0=l2;
si1=383U;
si0=si0 > si1;
if(si0){
goto L2;
}
si0=l4;
si1=20U;
si0+=si1;
si1=l1;
si2=l2;
si0=f15143(i,si0,si1,si2);
si0=l4;
si1=20U;
si0+=si1;
si1=l2;
si0+=si1;
si1=0U;
i32_store8(&i->m0,(U64)si0,si1);
si0=l4;
si1=404U;
si0+=si1;
si1=l4;
si2=20U;
si1+=si2;
si2=l2;
si3=1U;
si2+=si3;
f633(i,si0,si1,si2);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+404U);
if(si0){
goto L3;
}
si0=l4;
si1=4U;
si0+=si1;
si1=l4;
si1=i32_load(&i->m0,(U64)si1+408U);
si2=l4;
si3=412U;
si2+=si3;
si2=i32_load(&i->m0,(U64)si2);
f14803(i,si0,si1,si2);
goto L1;
L3:;
si0=l4;
si1=-1U;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l4;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+17680760U);
i64_store(&i->m0,(U64)si0+8U,sj1);
goto L1;
L2:;
si0=l4;
si1=4U;
si0+=si1;
si1=l1;
si2=l2;
f14802(i,si0,si1,si2);
L1:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+4U);
l2=si0;
si1=-1U;
si0=si0 == si1;
if(si0){
goto L5;
}
si0=l0;
si1=l2;
si2=l4;
sj2=i64_load(&i->m0,(U64)si2+8U);
l5=sj2;
si2=(U32)(sj2);
l1=si2;
si3=l4;
si3=i32_load(&i->m0,(U64)si3+16U);
si4=l3;
f14822(i,si0,si1,si2,si3,si4);
sj0=l5;
sj1=4294967296ULL;
si0=sj0 < sj1;
if(si0){
goto L4;
}
si0=l1;
f15024(i,si0);
goto L4;
L5:;
si0=l0;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1+8U);
i64_store(&i->m0,(U64)si0,sj1);
L4:;
si0=l4;
si1=416U;
si0+=si1;
i->g0=si0;
L0:;
}

U32 f14744(rustpythonInstance*i,U32 l0) {
U32 l1=0;
U32 si0,si1,si2,si3;
si0=40U;
l1=si0;
si0=l0;
si1=65535U;
si0=si0 > si1;
if(si0){
goto L1;
}
si0=2U;
l1=si0;
si0=l0;
si1=-2U;
si0+=si1;
switch(si0){
case 0:
goto L14;
case 1:
goto L9;
case 2:
goto L10;
case 3:
goto L16;
case 4:
goto L3;
case 5:
goto L16;
case 6:
goto L16;
case 7:
goto L16;
case 8:
goto L16;
case 9:
goto L16;
case 10:
goto L16;
case 11:
goto L11;
case 12:
goto L1;
case 13:
goto L15;
case 14:
goto L16;
case 15:
goto L16;
case 16:
goto L16;
case 17:
goto L16;
case 18:
goto L4;
case 19:
goto L16;
case 20:
goto L16;
case 21:
goto L16;
case 22:
goto L16;
case 23:
goto L16;
case 24:
goto L16;
case 25:
goto L7;
case 26:
goto L6;
case 27:
goto L16;
case 28:
goto L16;
case 29:
goto L16;
case 30:
goto L16;
case 31:
goto L16;
case 32:
goto L16;
case 33:
goto L16;
case 34:
goto L16;
case 35:
goto L16;
case 36:
goto L16;
case 37:
goto L16;
case 38:
goto L16;
case 39:
goto L16;
case 40:
goto L16;
case 41:
goto L16;
case 42:
goto L8;
case 43:
goto L16;
case 44:
goto L16;
case 45:
goto L16;
case 46:
goto L16;
case 47:
goto L16;
case 48:
goto L16;
case 49:
goto L16;
case 50:
goto L2;
case 51:
goto L12;
case 52:
goto L16;
case 53:
goto L16;
case 54:
goto L16;
case 55:
goto L16;
case 56:
goto L16;
case 57:
goto L16;
case 58:
goto L16;
case 59:
goto L16;
case 60:
goto L16;
case 61:
goto L14;
case 62:
goto L13;
case 63:
goto L16;
case 64:
goto L16;
case 65:
goto L16;
case 66:
goto L16;
case 67:
goto L16;
case 68:
goto L16;
case 69:
goto L16;
case 70:
goto L16;
case 71:
goto L5;
default:
goto L16;
}
L16:;
si0=38U;
si1=40U;
si2=l0;
si3=48U;
si2=si2 == si3;
si0=si2?si0:si1;
goto L0;
L15:;
si0=3U;
goto L0;
L14:;
si0=1U;
goto L0;
L13:;
si0=11U;
goto L0;
L12:;
si0=7U;
goto L0;
L11:;
si0=6U;
goto L0;
L10:;
si0=9U;
goto L0;
L9:;
si0=8U;
goto L0;
L8:;
si0=0U;
goto L0;
L7:;
si0=35U;
goto L0;
L6:;
si0=20U;
goto L0;
L5:;
si0=22U;
goto L0;
L4:;
si0=12U;
goto L0;
L3:;
si0=13U;
goto L0;
L2:;
si0=36U;
l1=si0;
L1:;
si0=l1;
L0:;
return si0;
}

void f14745(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 l3=0;
U32 l4=0;
U64 l5=0;
U64 l6=0;
U32 l7=0;
U32 l8=0;
U32 l9=0;
U32 l10=0;
U32 si0,si1,si2,si3,si4,si5;
U64 sj0,sj1,sj2,sj3;
si0=i->g0;
si1=16U;
si0-=si1;
l2=si0;
i->g0=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+36U);
l3=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+32U);
l4=si0;
L3:;
{
si0=l4;
si1=l3;
si0=si0 != si1;
if(si0){
goto L11;
}
si0=l1;
sj0=i64_load(&i->m0,(U64)si0);
l5=sj0;
sj0=0ULL;
l6=sj0;
si0=l1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
sj0=l5;
si0=!(sj0);
if(si0){
goto L1;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+16U);
si1=20U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=l1;
si1=i32_load(&i->m0,(U64)si1+20U);
si2=l1;
si2=i32_load(&i->m0,(U64)si2+28U);
l7=si2;
si3=l1;
sj3=i64_load(&i->m0,(U64)si3+8U);
si4=l2;
si5=12U;
si4+=si5;
si0=wasi_snapshot_preview1__fd_readdir(i,si0,si1,si2,sj3,si4);
l3=si0;
if(si0){
goto L7;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0+12U);
l3=si0;
si0=0U;
l4=si0;
si0=l1;
si1=0U;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l1;
si1=l3;
i32_store(&i->m0,(U64)si0+36U,si1);
si0=l1;
sj1=1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
if(si0){
goto L10;
}
sj0=0ULL;
l6=sj0;
si0=l1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
goto L1;
L11:;
si0=l4;
si1=l3;
si0=si0 > si1;
if(si0){
goto L9;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+28U);
l7=si0;
L10:;
si0=l3;
si1=l7;
si0=si0 > si1;
if(si0){
goto L8;
}
si0=l3;
si1=l4;
si0-=si1;
l8=si0;
si1=24U;
si0=si0 < si1;
if(si0){
goto L12;
}
si0=l8;
si1=-24U;
si0+=si1;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+20U);
l9=si1;
si2=l4;
si1+=si2;
l8=si1;
si1=i32_load(&i->m0,(U64)si1+16U);
l10=si1;
si0=si0 < si1;
if(si0){
goto L13;
}
si0=l8;
si1=24U;
si0+=si1;
l7=si0;
si0=l8;
si0=i32_load(&i->m0,(U64)si0+20U);
l9=si0;
si0=l8;
sj0=i64_load(&i->m0,(U64)si0+8U);
l5=sj0;
si0=l1;
si1=l8;
sj1=i64_load(&i->m0,(U64)si1);
l6=sj1;
i64_store(&i->m0,(U64)si0+8U,sj1);
si0=l1;
sj1=1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si1=l4;
si2=l10;
si1+=si2;
si2=24U;
si1+=si2;
l4=si1;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l10;
switch(si0){
case 0:
goto L15;
case 1:
goto L17;
case 2:
goto L19;
default:
goto L18;
}
L19:;
si0=l7;
si0=i32_load16_u(&i->m0,(U64)si0);
si1=11822U;
si0=si0 == si1;
if(si0){
goto L3;
}
goto L16;
L18:;
si0=l10;
si1=-1U;
si0=(U32)((I32)si0>(I32)si1);
if(si0){
goto L16;
}
f53(i);
UNREACHABLE;
L17:;
si0=l7;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=46U;
si0=si0 == si1;
if(si0){
goto L3;
}
L16:;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=l10;
si0=f15022(i,si0);
l3=si0;
if(si0){
goto L14;
}
si0=1U;
si1=l10;
f52(i,si0,si1);
UNREACHABLE;
L15:;
si0=1U;
l3=si0;
L14:;
si0=l3;
si1=l7;
si2=l10;
si0=f15143(i,si0,si1,si2);
l4=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+16U);
l1=si0;
si1=l1;
si1=i32_load(&i->m0,(U64)si1);
l3=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L6;
}
si0=l0;
sj1=l6;
i64_store(&i->m0,(U64)si0+8U,sj1);
si0=l0;
si1=44U;
si0+=si1;
si1=l1;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=40U;
si0+=si1;
si1=l10;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=36U;
si0+=si1;
si1=l10;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=32U;
si0+=si1;
si1=l4;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=28U;
si0+=si1;
si1=l9;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=24U;
si0+=si1;
si1=l10;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=16U;
si0+=si1;
sj1=l5;
i64_store(&i->m0,(U64)si0,sj1);
goto L2;
L13:;
si0=l4;
if(si0){
goto L20;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+24U);
l3=si0;
si1=l7;
si0-=si1;
si1=l3;
si0=si0 >= si1;
if(si0){
goto L23;
}
si0=l1;
si1=20U;
si0+=si1;
si1=l7;
si2=l3;
f14670(i,si0,si1,si2);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+20U);
l9=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+28U);
l7=si0;
goto L22;
L23:;
si0=l3;
si0=!(si0);
if(si0){
goto L21;
}
L22:;
si0=l9;
si1=l7;
si0+=si1;
si1=0U;
si2=l3;
si0=f15145(i,si0,si1,si2);
si0=l7;
si1=l3;
si0+=si1;
l7=si0;
L21:;
si0=l1;
si1=l7;
i32_store(&i->m0,(U64)si0+28U,si1);
L20:;
si0=l1;
sj0=i64_load(&i->m0,(U64)si0);
si0=!(sj0);
if(si0){
goto L24;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+36U);
l3=si0;
goto L4;
L24:;
si0=17682476U;
si1=39U;
si2=17682516U;
f604(i,si0,si1,si2);
UNREACHABLE;
L12:;
si0=l1;
sj0=i64_load(&i->m0,(U64)si0);
si0=!(sj0);
if(si0){
goto L5;
}
si0=l7;
si1=24U;
si0=si0 >= si1;
if(si0){
goto L4;
}
si0=17682532U;
si1=47U;
si2=17682580U;
f604(i,si0,si1,si2);
UNREACHABLE;
L9:;
si0=l4;
si1=l3;
si2=17682460U;
f683(i,si0,si1,si2);
UNREACHABLE;
L8:;
si0=l3;
si1=l7;
si2=17682460U;
f597(i,si0,si1,si2);
UNREACHABLE;
L7:;
si0=l0;
si1=44U;
si0+=si1;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l3;
si2=65535U;
si1&=si2;
sj1=(U64)(si1);
sj2=32ULL;
sj1<<=(sj2&63);
i64_store(&i->m0,(U64)si0+8U,sj1);
goto L2;
L6:;
UNREACHABLE;
L5:;
si0=17682476U;
si1=39U;
si2=17682596U;
f604(i,si0,si1,si2);
UNREACHABLE;
L4:;
si0=l1;
si1=l3;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l3;
l4=si0;
goto L3;
}
L2:;
sj0=1ULL;
l6=sj0;
L1:;
si0=l0;
sj1=l6;
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=16U;
si0+=si1;
i->g0=si0;
L0:;
}

void f14746(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4) {
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 si0,si1,si2;
U64 sj1;
si0=i->g0;
si1=16U;
si0-=si1;
l5=si0;
i->g0=si0;
si0=l2;
if(si0){
goto L4;
}
si0=0U;
l6=si0;
si0=l5;
si1=0U;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l5;
sj1=1ULL;
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=1U;
l7=si0;
goto L3;
L4:;
si0=l2;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L2;
}
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=l2;
si0=f15022(i,si0);
l7=si0;
si0=!(si0);
if(si0){
goto L1;
}
si0=l7;
si1=l1;
si2=l2;
si0=f15143(i,si0,si1,si2);
l1=si0;
si0=l5;
si1=l2;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l5;
si1=l2;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l5;
si1=l1;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l2;
si1=l1;
si0+=si1;
si1=-1U;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=47U;
si0=si0 != si1;
l6=si0;
L3:;
si0=l4;
si0=!(si0);
if(si0){
goto L7;
}
si0=0U;
l1=si0;
si0=l3;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=47U;
si0=si0 == si1;
if(si0){
goto L6;
}
L7:;
si0=l6;
if(si0){
goto L8;
}
si0=l2;
l1=si0;
goto L5;
L8:;
si0=l5;
si1=4U;
si0+=si1;
si1=l2;
si2=1U;
f14670(i,si0,si1,si2);
si0=l5;
si0=i32_load(&i->m0,(U64)si0+4U);
l7=si0;
si1=l5;
si1=i32_load(&i->m0,(U64)si1+12U);
l2=si1;
si0+=si1;
si1=47U;
i32_store8(&i->m0,(U64)si0,si1);
si0=l2;
si1=1U;
si0+=si1;
l1=si0;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+8U);
l2=si0;
L6:;
si0=l5;
si1=l1;
i32_store(&i->m0,(U64)si0+12U,si1);
L5:;
si0=l2;
si1=l1;
si0-=si1;
si1=l4;
si0=si0 >= si1;
if(si0){
goto L9;
}
si0=l5;
si1=4U;
si0+=si1;
si1=l1;
si2=l4;
f14670(i,si0,si1,si2);
si0=l5;
si0=i32_load(&i->m0,(U64)si0+4U);
l7=si0;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+12U);
l1=si0;
L9:;
si0=l7;
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
si0=l5;
si1=16U;
si0+=si1;
i->g0=si0;
goto L0;
L2:;
f53(i);
UNREACHABLE;
L1:;
si0=1U;
si1=l2;
f52(i,si0,si1);
UNREACHABLE;
L0:;
}

void f14747(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U64 l4=0;
U32 l5=0;
U32 si0,si1,si2,si3;
U64 sj0,sj1,sj2;
si0=i->g0;
si1=416U;
si0-=si1;
l3=si0;
i->g0=si0;
si0=l2;
si1=383U;
si0=si0 > si1;
if(si0){
goto L2;
}
si0=l3;
si1=20U;
si0+=si1;
si1=l1;
si2=l2;
si0=f15143(i,si0,si1,si2);
si0=l3;
si1=20U;
si0+=si1;
si1=l2;
si0+=si1;
si1=0U;
i32_store8(&i->m0,(U64)si0,si1);
si0=l3;
si1=404U;
si0+=si1;
si1=l3;
si2=20U;
si1+=si2;
si2=l2;
si3=1U;
si2+=si3;
f633(i,si0,si1,si2);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+404U);
if(si0){
goto L3;
}
si0=l3;
si1=4U;
si0+=si1;
si1=l3;
si1=i32_load(&i->m0,(U64)si1+408U);
si2=l3;
si3=412U;
si2+=si3;
si2=i32_load(&i->m0,(U64)si2);
f14803(i,si0,si1,si2);
goto L1;
L3:;
si0=l3;
si1=-1U;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l3;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+17680760U);
i64_store(&i->m0,(U64)si0+8U,sj1);
goto L1;
L2:;
si0=l3;
si1=4U;
si0+=si1;
si1=l1;
si2=l2;
f14802(i,si0,si1,si2);
L1:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+4U);
l1=si0;
si1=-1U;
si0=si0 == si1;
if(si0){
goto L5;
}
si0=l3;
si1=20U;
si0+=si1;
si1=l3;
sj1=i64_load(&i->m0,(U64)si1+8U);
l4=sj1;
si1=(U32)(sj1);
l5=si1;
si2=l3;
si2=i32_load(&i->m0,(U64)si2+16U);
f686(i,si0,si1,si2);
sj0=l4;
sj1=32ULL;
sj0>>=(sj1&63);
si0=(U32)(sj0);
l2=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+20U);
if(si0){
goto L7;
}
si0=l1;
si1=l3;
si1=i32_load(&i->m0,(U64)si1+24U);
si2=l3;
si3=28U;
si2+=si3;
si2=i32_load(&i->m0,(U64)si2);
si0=wasi_snapshot_preview1__path_create_directory(i,si0,si1,si2);
l1=si0;
if(si0){
goto L8;
}
si0=l0;
si1=4U;
i32_store8(&i->m0,(U64)si0,si1);
si0=l2;
if(si0){
goto L6;
}
goto L4;
L8:;
si0=l0;
si1=l1;
si2=65535U;
si1&=si2;
sj1=(U64)(si1);
sj2=32ULL;
sj1<<=(sj2&63);
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
if(si0){
goto L6;
}
goto L4;
L7:;
si0=l0;
si1=17680104U;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=2U;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si0=!(si0);
if(si0){
goto L4;
}
L6:;
si0=l5;
f15024(i,si0);
goto L4;
L5:;
si0=l0;
si1=l3;
sj1=i64_load(&i->m0,(U64)si1+8U);
i64_store(&i->m0,(U64)si0,sj1);
L4:;
si0=l3;
si1=416U;
si0+=si1;
i->g0=si0;
L0:;
}

void f14748(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
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
U32 si0,si1,si2,si3,si4;
U64 sj0,sj1;
si0=i->g0;
si1=176U;
si0-=si1;
l3=si0;
i->g0=si0;
si0=l2;
si0=!(si0);
if(si0){
goto L3;
}
si0=l3;
si1=l1;
si1=i32_load8_u(&i->m0,(U64)si1);
si2=47U;
si1=si1 == si2;
l4=si1;
i32_store8(&i->m0,(U64)si0+46U,si1);
si0=l3;
si1=512U;
i32_store16(&i->m0,(U64)si0+44U,si1);
si0=l3;
si1=6U;
i32_store8(&i->m0,(U64)si0+24U,si1);
si0=l3;
si1=l2;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l3;
si1=l1;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l3;
si1=0U;
i32_store8(&i->m0,(U64)si0+134U,si1);
si0=l3;
si1=512U;
i32_store16(&i->m0,(U64)si0+132U,si1);
si0=l3;
si1=6U;
i32_store8(&i->m0,(U64)si0+112U,si1);
si0=l3;
si1=0U;
i32_store(&i->m0,(U64)si0+108U,si1);
si0=l3;
si1=17677000U;
i32_store(&i->m0,(U64)si0+104U,si1);
si0=l3;
si1=48U;
si0+=si1;
si1=l3;
si2=16U;
si1+=si2;
f14749(i,si0,si1);
si0=l3;
si0=i32_load8_u(&i->m0,(U64)si0+48U);
l5=si0;
si1=10U;
si0=si0 == si1;
if(si0){
goto L4;
}
L5:;
{
si0=l3;
si1=76U;
si0+=si1;
si1=l3;
si2=104U;
si1+=si2;
f14749(i,si0,si1);
si0=l3;
si0=i32_load8_u(&i->m0,(U64)si0+76U);
l6=si0;
si1=10U;
si0=si0 == si1;
if(si0){
goto L2;
}
si0=l5;
si1=-6U;
si0+=si1;
si1=255U;
si0&=si1;
l7=si0;
si1=1U;
si0+=si1;
si1=0U;
si2=l7;
si3=4U;
si2=si2 < si3;
si0=si2?si0:si1;
l8=si0;
si1=0U;
si2=l6;
si3=-6U;
si2+=si3;
si3=255U;
si2&=si3;
l7=si2;
si3=1U;
si2+=si3;
si3=l7;
si4=3U;
si3=si3 > si4;
si1=si3?si1:si2;
si0=si0 != si1;
if(si0){
goto L2;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0+84U);
l9=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+80U);
l10=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+56U);
l11=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+52U);
l12=si0;
si0=l8;
switch(si0){
case 0:
goto L9;
case 1:
goto L6;
case 2:
goto L6;
case 3:
goto L6;
case 4:
goto L8;
default:
goto L6;
}
L9:;
si0=l7;
si1=4U;
si0=si0 < si1;
if(si0){
goto L6;
}
si0=l5;
si1=255U;
si0&=si1;
l5=si0;
si1=l6;
si0=si0 != si1;
if(si0){
goto L2;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0+92U);
l13=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+88U);
l14=si0;
si0=l3;
si0=i32_load8_u(&i->m0,(U64)si0+77U);
l6=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+64U);
l7=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+60U);
l15=si0;
si0=l3;
si0=i32_load8_u(&i->m0,(U64)si0+49U);
l8=si0;
si0=l5;
switch(si0){
case 0:
goto L14;
case 1:
goto L13;
case 2:
goto L7;
case 3:
goto L12;
case 4:
goto L11;
case 5:
goto L10;
default:
goto L14;
}
L14:;
si0=l11;
si1=l9;
si0=si0 != si1;
if(si0){
goto L2;
}
si0=l12;
si1=l10;
si2=l11;
si0=f15142(i,si0,si1,si2);
si0=!(si0);
if(si0){
goto L6;
}
goto L2;
L13:;
si0=l11;
si1=l9;
si0=si0 != si1;
if(si0){
goto L2;
}
si0=l12;
si1=l10;
si2=l11;
si0=f15142(i,si0,si1,si2);
if(si0){
goto L2;
}
si0=l7;
si1=l13;
si0=si0 != si1;
if(si0){
goto L2;
}
si0=l15;
si1=l14;
si2=l7;
si0=f15142(i,si0,si1,si2);
si0=!(si0);
if(si0){
goto L6;
}
goto L2;
L12:;
si0=l11;
si1=l9;
si0=si0 != si1;
if(si0){
goto L2;
}
si0=l12;
si1=l10;
si2=l11;
si0=f15142(i,si0,si1,si2);
si0=!(si0);
if(si0){
goto L6;
}
goto L2;
L11:;
si0=l11;
si1=l9;
si0=si0 != si1;
if(si0){
goto L2;
}
si0=l12;
si1=l10;
si2=l11;
si0=f15142(i,si0,si1,si2);
if(si0){
goto L2;
}
si0=l7;
si1=l13;
si0=si0 != si1;
if(si0){
goto L2;
}
si0=l15;
si1=l14;
si2=l7;
si0=f15142(i,si0,si1,si2);
si0=!(si0);
if(si0){
goto L6;
}
goto L2;
L10:;
si0=l8;
si1=255U;
si0&=si1;
si1=l6;
si2=255U;
si1&=si2;
si0=si0 == si1;
if(si0){
goto L6;
}
goto L2;
L8:;
si0=l11;
si1=l9;
si0=si0 != si1;
if(si0){
goto L2;
}
si0=l12;
si1=l10;
si2=l11;
si0=f15142(i,si0,si1,si2);
if(si0){
goto L2;
}
goto L6;
L7:;
si0=l8;
si1=255U;
si0&=si1;
si1=l6;
si2=255U;
si1&=si2;
si0=si0 != si1;
if(si0){
goto L2;
}
L6:;
si0=l3;
si1=48U;
si0+=si1;
si1=l3;
si2=16U;
si1+=si2;
f14749(i,si0,si1);
si0=l3;
si0=i32_load8_u(&i->m0,(U64)si0+48U);
l5=si0;
si1=10U;
si0=si0 != si1;
if(si0){
goto L5;
}
}
L4:;
si0=l3;
si1=76U;
si0+=si1;
si1=l3;
si2=104U;
si1+=si2;
f14749(i,si0,si1);
si0=l3;
si0=i32_load8_u(&i->m0,(U64)si0+76U);
si1=10U;
si0=si0 != si1;
if(si0){
goto L2;
}
L3:;
si0=l0;
si1=4U;
i32_store8(&i->m0,(U64)si0,si1);
goto L1;
L2:;
si0=l3;
si1=16U;
si0+=si1;
si1=l1;
si2=l2;
f14747(i,si0,si1,si2);
si0=l3;
si0=i32_load8_u(&i->m0,(U64)si0+16U);
l5=si0;
si1=4U;
si0=si0 != si1;
if(si0){
goto L15;
}
si0=l0;
si1=4U;
i32_store8(&i->m0,(U64)si0,si1);
goto L1;
L15:;
si0=l5;
switch(si0){
case 0:
goto L19;
case 1:
goto L20;
case 2:
goto L18;
case 3:
goto L17;
default:
goto L19;
}
L20:;
si0=l3;
si0=i32_load8_u(&i->m0,(U64)si0+17U);
l7=si0;
goto L16;
L19:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+20U);
si0=f14744(i,si0);
l7=si0;
goto L16;
L18:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+20U);
si0=i32_load8_u(&i->m0,(U64)si0+8U);
l7=si0;
goto L16;
L17:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+20U);
si0=i32_load8_u(&i->m0,(U64)si0+8U);
l7=si0;
L16:;
si0=l7;
si1=255U;
si0&=si1;
if(si0){
goto L26;
}
si0=l5;
si1=3U;
si0=si0 < si1;
if(si0){
goto L27;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0+20U);
l5=si0;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si1=l5;
si2=4U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
l7=si1;
si1=i32_load(&i->m0,(U64)si1);
TF(i->t0,si1,void (*)(rustpythonInstance*,U32))(i,si0);
si0=l7;
si0=i32_load(&i->m0,(U64)si0+4U);
si0=!(si0);
if(si0){
goto L28;
}
si0=l6;
f15024(i,si0);
L28:;
si0=l5;
f15024(i,si0);
L27:;
si0=l3;
si1=l4;
i32_store8(&i->m0,(U64)si0+134U,si1);
si0=l3;
si1=6U;
i32_store8(&i->m0,(U64)si0+112U,si1);
si0=l3;
si1=l2;
i32_store(&i->m0,(U64)si0+108U,si1);
si0=l3;
si1=l1;
i32_store(&i->m0,(U64)si0+104U,si1);
si0=l3;
si1=512U;
i32_store16(&i->m0,(U64)si0+132U,si1);
si0=l3;
si1=16U;
si0+=si1;
si1=l3;
si2=104U;
si1+=si2;
f14749(i,si0,si1);
si0=l3;
si0=i32_load8_u(&i->m0,(U64)si0+16U);
l5=si0;
si1=10U;
si0=si0 == si1;
if(si0){
goto L29;
}
si0=l5;
si1=-6U;
si0+=si1;
si1=255U;
si0&=si1;
l5=si0;
si1=3U;
si0=si0 > si1;
if(si0){
goto L29;
}
si0=l5;
si1=-1U;
si0+=si1;
si1=3U;
si0=si0 >= si1;
if(si0){
goto L29;
}
si0=l3;
si1=8U;
si0+=si1;
si1=l3;
si2=104U;
si1+=si2;
f14750(i,si0,si1);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+8U);
l5=si0;
if(si0){
goto L25;
}
L29:;
si0=l0;
si1=17678248U;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=2U;
i32_store8(&i->m0,(U64)si0,si1);
goto L1;
L26:;
si0=l3;
si1=104U;
si0+=si1;
si1=l1;
si2=l2;
f14751(i,si0,si1,si2);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+104U);
if(si0){
goto L31;
}
si0=260U;
si1=4U;
si2=l3;
si3=128U;
si2+=si3;
si2=i32_load8_u(&i->m0,(U64)si2);
si3=3U;
si2=si2 == si3;
si0=si2?si0:si1;
l7=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+112U);
l6=si0;
goto L30;
L31:;
si0=l3;
sj0=i64_load(&i->m0,(U64)si0+108U);
l16=sj0;
sj1=32ULL;
sj0>>=(sj1&63);
si0=(U32)(sj0);
l6=si0;
sj0=l16;
si0=(U32)(sj0);
l7=si0;
L30:;
si0=l7;
si1=255U;
si0&=si1;
l11=si0;
si1=4U;
si0=si0 == si1;
if(si0){
goto L24;
}
si0=l11;
si1=3U;
si0=si0 < si1;
if(si0){
goto L23;
}
si0=l6;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
si1=l6;
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
goto L32;
}
si0=l7;
f15024(i,si0);
L32:;
si0=l6;
f15024(i,si0);
goto L23;
L25:;
si0=l3;
si1=104U;
si0+=si1;
si1=l5;
si2=l3;
si2=i32_load(&i->m0,(U64)si2+12U);
f14748(i,si0,si1,si2);
si0=l3;
si0=i32_load8_u(&i->m0,(U64)si0+104U);
l5=si0;
si1=4U;
si0=si0 != si1;
if(si0){
goto L21;
}
si0=l3;
si1=104U;
si0+=si1;
si1=l1;
si2=l2;
f14747(i,si0,si1,si2);
si0=l3;
si0=i32_load8_u(&i->m0,(U64)si0+104U);
l5=si0;
si1=4U;
si0=si0 != si1;
if(si0){
goto L33;
}
si0=l0;
si1=4U;
i32_store8(&i->m0,(U64)si0,si1);
goto L1;
L33:;
si0=l1;
si1=l2;
si0=f14752(i,si0,si1);
if(si0){
goto L34;
}
si0=l0;
si1=l3;
sj1=i64_load(&i->m0,(U64)si1+104U);
i64_store(&i->m0,(U64)si0,sj1);
goto L1;
L34:;
si0=l0;
si1=4U;
i32_store8(&i->m0,(U64)si0,si1);
si0=l5;
si1=l3;
si1=i32_load(&i->m0,(U64)si1+108U);
f14684(i,si0,si1);
goto L1;
L24:;
si0=l7;
si1=65280U;
si0&=si1;
if(si0){
goto L22;
}
L23:;
si0=l0;
si1=l3;
sj1=i64_load(&i->m0,(U64)si1+16U);
i64_store(&i->m0,(U64)si0,sj1);
goto L1;
L22:;
si0=l0;
si1=4U;
i32_store8(&i->m0,(U64)si0,si1);
si0=l5;
si1=3U;
si0=si0 < si1;
if(si0){
goto L1;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0+20U);
l5=si0;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si1=l5;
si2=4U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
l7=si1;
si1=i32_load(&i->m0,(U64)si1);
TF(i->t0,si1,void (*)(rustpythonInstance*,U32))(i,si0);
si0=l7;
si0=i32_load(&i->m0,(U64)si0+4U);
si0=!(si0);
if(si0){
goto L35;
}
si0=l6;
f15024(i,si0);
L35:;
si0=l5;
f15024(i,si0);
goto L1;
L21:;
si0=l0;
si1=l3;
si1=i32_load(&i->m0,(U64)si1+105U);
i32_store(&i->m0,(U64)si0+1U,si1);
si0=l0;
si1=4U;
si0+=si1;
si1=l3;
si2=104U;
si1+=si2;
si2=4U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l5;
i32_store8(&i->m0,(U64)si0,si1);
L1:;
si0=l3;
si1=176U;
si0+=si1;
i->g0=si0;
L0:;
}

void f14749(rustpythonInstance*i,U32 l0,U32 l1) {
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
U64 sj1;
si0=i->g0;
si1=64U;
si0-=si1;
l2=si0;
i->g0=si0;
si0=l1;
si0=i32_load8_u(&i->m0,(U64)si0+28U);
l3=si0;
si1=3U;
si0=si0 == si1;
if(si0){
goto L9;
}
si0=l1;
si0=i32_load8_u(&i->m0,(U64)si0+29U);
l4=si0;
si1=255U;
si0&=si1;
l5=si0;
si1=3U;
si0=si0 == si1;
if(si0){
goto L9;
}
si0=l3;
si1=l5;
si0=si0 > si1;
if(si0){
goto L9;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
l5=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si0=l1;
si0=i32_load8_u(&i->m0,(U64)si0+8U);
l7=si0;
si0=l2;
si1=37U;
si0+=si1;
l8=si0;
si0=l1;
si0=i32_load8_u(&i->m0,(U64)si0+30U);
si0=!(si0);
if(si0){
goto L10;
}
L12:;
{
si0=l4;
si1=255U;
si0&=si1;
l4=si0;
si1=2U;
si0=si0 == si1;
if(si0){
goto L13;
}
si0=l4;
switch(si0){
case 0:
goto L8;
case 1:
goto L14;
default:
goto L8;
}
L14:;
si0=l1;
si1=0U;
i32_store8(&i->m0,(U64)si0+29U,si1);
si0=l5;
si1=-1U;
si0+=si1;
l4=si0;
si0=l5;
si0=!(si0);
if(si0){
goto L11;
}
si0=l0;
si1=6U;
i32_store8(&i->m0,(U64)si0,si1);
si0=l1;
si1=l4;
i32_store(&i->m0,(U64)si0+4U,si1);
goto L3;
L13:;
si0=l5;
si1=l1;
si1=f14790(i,si1);
si0=si0 > si1;
if(si0){
goto L16;
}
si0=1U;
l4=si0;
si0=l1;
si1=1U;
i32_store8(&i->m0,(U64)si0+29U,si1);
goto L15;
L16:;
si0=l2;
si1=32U;
si0+=si1;
si1=l1;
f14791(i,si0,si1);
si0=l2;
si0=i32_load(&i->m0,(U64)si0+32U);
l4=si0;
si0=l2;
si1=8U;
si0+=si1;
si1=l8;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=16U;
si0+=si1;
si1=l8;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=23U;
si0+=si1;
si1=l8;
si2=23U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=l8;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=l4;
si0-=si1;
l9=si0;
si0=l5;
si1=l4;
si0=si0 < si1;
if(si0){
goto L1;
}
si0=l2;
si0=i32_load8_u(&i->m0,(U64)si0+36U);
l4=si0;
si0=l1;
si1=l9;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l4;
si1=255U;
si0&=si1;
si1=10U;
si0=si0 != si1;
if(si0){
goto L6;
}
si0=2U;
l4=si0;
si0=l9;
l5=si0;
L15:;
si0=l3;
si1=l4;
si0=si0 <= si1;
if(si0){
goto L12;
}
goto L9;
}
L11:;
si0=l4;
si1=0U;
si2=17680312U;
f597(i,si0,si1,si2);
UNREACHABLE;
L10:;
si0=l5;
l10=si0;
L17:;
{
si0=l4;
si1=255U;
si0&=si1;
switch(si0){
case 0:
goto L8;
case 1:
goto L19;
case 2:
goto L20;
default:
goto L8;
}
L20:;
si0=l10;
si1=l1;
si1=f14790(i,si1);
si0=si0 > si1;
if(si0){
goto L21;
}
si0=1U;
l4=si0;
si0=l1;
si1=1U;
i32_store8(&i->m0,(U64)si0+29U,si1);
goto L18;
L21:;
si0=l2;
si1=32U;
si0+=si1;
si1=l1;
f14791(i,si0,si1);
si0=l2;
si0=i32_load(&i->m0,(U64)si0+32U);
l4=si0;
si0=l2;
si1=8U;
si0+=si1;
si1=l8;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=16U;
si0+=si1;
si1=l8;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=23U;
si0+=si1;
si1=l8;
si2=23U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=l8;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l10;
si1=l4;
si0-=si1;
l5=si0;
si0=l10;
si1=l4;
si0=si0 >= si1;
if(si0){
goto L22;
}
si0=l5;
l9=si0;
si0=l10;
l5=si0;
goto L1;
L22:;
si0=l2;
si0=i32_load8_u(&i->m0,(U64)si0+36U);
l4=si0;
si0=l1;
si1=l5;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l4;
si1=255U;
si0&=si1;
si1=10U;
si0=si0 != si1;
if(si0){
goto L6;
}
si0=2U;
l4=si0;
si0=l5;
l10=si0;
goto L18;
L19:;
si0=0U;
l4=si0;
si0=l1;
si1=0U;
i32_store8(&i->m0,(U64)si0+29U,si1);
si0=l7;
switch(si0){
case 0:
goto L18;
case 1:
goto L18;
case 2:
goto L18;
case 3:
goto L7;
case 4:
goto L7;
case 5:
goto L18;
case 6:
goto L23;
default:
goto L7;
}
L23:;
si0=0U;
l4=si0;
si0=l10;
if(si0){
goto L24;
}
si0=0U;
l10=si0;
goto L18;
L24:;
si0=l6;
si0=i32_load8_u(&i->m0,(U64)si0);
l9=si0;
si0=l10;
si1=1U;
si0=si0 == si1;
if(si0){
goto L25;
}
si0=l9;
si1=255U;
si0&=si1;
si1=46U;
si0=si0 != si1;
if(si0){
goto L25;
}
si0=l6;
si0=i32_load8_u(&i->m0,(U64)si0+1U);
si1=47U;
si0=si0 != si1;
if(si0){
goto L18;
}
goto L4;
L25:;
si0=l10;
si1=1U;
si0=si0 != si1;
if(si0){
goto L18;
}
si0=l9;
si1=255U;
si0&=si1;
si1=46U;
si0=si0 == si1;
if(si0){
goto L4;
}
L18:;
si0=l3;
si1=l4;
si0=si0 <= si1;
if(si0){
goto L17;
}
}
L9:;
si0=l0;
si1=10U;
i32_store8(&i->m0,(U64)si0,si1);
goto L3;
L8:;
si0=l7;
si1=6U;
si0=si0 == si1;
if(si0){
goto L5;
}
si0=l7;
switch(si0){
case 0:
goto L27;
case 1:
goto L28;
case 2:
goto L26;
case 3:
goto L30;
case 4:
goto L29;
case 5:
goto L26;
default:
goto L27;
}
L30:;
si0=l1;
si1=16U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=4U;
si0+=si1;
si0=!(si0);
if(si0){
goto L5;
}
goto L26;
L29:;
si0=l1;
si1=16U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=l1;
si2=24U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
l4=si1;
si2=1U;
si1+=si2;
si2=0U;
si3=l4;
si1=si3?si1:si2;
si0+=si1;
si1=2U;
si0+=si1;
si0=!(si0);
if(si0){
goto L5;
}
goto L26;
L28:;
si0=l1;
si1=16U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=l1;
si2=24U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
l4=si1;
si2=1U;
si1+=si2;
si2=0U;
si3=l4;
si1=si3?si1:si2;
si0+=si1;
si1=8U;
si0+=si1;
if(si0){
goto L26;
}
goto L5;
L27:;
si0=l1;
si1=16U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=4U;
si0+=si1;
si0=!(si0);
if(si0){
goto L5;
}
L26:;
si0=l1;
si1=3U;
i32_store8(&i->m0,(U64)si0+29U,si1);
si0=l0;
si1=l5;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l0;
si1=l6;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l0;
si1=l7;
i32_store8(&i->m0,(U64)si0,si1);
si0=l0;
si1=l1;
si2=9U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+1U,sj1);
si0=l0;
si1=9U;
si0+=si1;
si1=l1;
si2=17U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=16U;
si0+=si1;
si1=l1;
si2=24U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
goto L3;
L7:;
si0=l0;
si1=6U;
i32_store8(&i->m0,(U64)si0,si1);
goto L3;
L6:;
si0=l0;
si1=l4;
i32_store8(&i->m0,(U64)si0,si1);
si0=l0;
si1=l2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+1U,sj1);
si0=l0;
si1=9U;
si0+=si1;
si1=l2;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=17U;
si0+=si1;
si1=l2;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=24U;
si0+=si1;
si1=l2;
si2=23U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
goto L3;
L5:;
si0=l0;
si1=10U;
i32_store8(&i->m0,(U64)si0,si1);
si0=l1;
si1=3U;
i32_store8(&i->m0,(U64)si0+29U,si1);
goto L3;
L4:;
si0=l5;
si1=-1U;
si0+=si1;
l4=si0;
si0=l5;
si0=!(si0);
if(si0){
goto L2;
}
si0=l0;
si1=7U;
i32_store8(&i->m0,(U64)si0,si1);
si0=l1;
si1=l4;
i32_store(&i->m0,(U64)si0+4U,si1);
L3:;
si0=l2;
si1=64U;
si0+=si1;
i->g0=si0;
goto L0;
L2:;
si0=l4;
si1=0U;
si2=17680296U;
f597(i,si0,si1,si2);
UNREACHABLE;
L1:;
si0=l9;
si1=l5;
si2=17680328U;
f597(i,si0,si1,si2);
UNREACHABLE;
L0:;
}

void f14750(rustpythonInstance*i,U32 l0,U32 l1) {
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
si0=l1;
si0=i32_load8_u(&i->m0,(U64)si0+8U);
l5=si0;
si1=6U;
si0=si0 == si1;
if(si0){
goto L1;
}
si0=l2;
si1=47U;
si0+=si1;
si1=l1;
si2=24U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=40U;
si0+=si1;
si1=l1;
si2=17U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=l1;
si2=9U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+32U,sj1);
L1:;
si0=l2;
si1=9U;
si0+=si1;
si1=l2;
sj1=i64_load(&i->m0,(U64)si1+32U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=17U;
si0+=si1;
si1=l2;
si2=40U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=24U;
si0+=si1;
si1=l2;
si2=47U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=l5;
i32_store8(&i->m0,(U64)si0+8U,si1);
si0=l2;
si1=l3;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l2;
si1=l4;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=l1;
si1=i32_load8_u(&i->m0,(U64)si1+30U);
l6=si1;
i32_store8(&i->m0,(U64)si0+30U,si1);
si0=l2;
si1=l1;
si1=i32_load8_u(&i->m0,(U64)si1+29U);
l7=si1;
i32_store8(&i->m0,(U64)si0+29U,si1);
si0=l2;
si1=l1;
si1=i32_load8_u(&i->m0,(U64)si1+28U);
l8=si1;
i32_store8(&i->m0,(U64)si0+28U,si1);
si0=l8;
si1=2U;
si0=si0 != si1;
if(si0){
goto L8;
}
si0=l3;
si0=!(si0);
if(si0){
goto L7;
}
si0=l5;
si1=3U;
si0=si0 < si1;
if(si0){
goto L11;
}
L12:;
{
si0=0U;
l1=si0;
L14:;
{
si0=l4;
si1=l1;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=47U;
si0=si0 != si1;
if(si0){
goto L15;
}
si0=1U;
l9=si0;
goto L13;
L15:;
si0=l3;
si1=l1;
si2=1U;
si1+=si2;
l1=si1;
si0=si0 != si1;
if(si0){
goto L14;
}
}
si0=0U;
l9=si0;
si0=l3;
l1=si0;
L13:;
si0=l1;
switch(si0){
case 0:
goto L16;
case 1:
goto L17;
default:
goto L9;
}
L17:;
si0=l4;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=46U;
si0=si0 != si1;
if(si0){
goto L9;
}
L16:;
si0=l3;
si1=l1;
si2=l9;
si1+=si2;
l1=si1;
si0=si0 < si1;
if(si0){
goto L18;
}
si0=l4;
si1=l1;
si0+=si1;
l4=si0;
si0=l3;
si1=l1;
si0-=si1;
l3=si0;
if(si0){
goto L12;
}
goto L10;
L18:;
}
si0=l1;
si1=l3;
si2=17680264U;
f593(i,si0,si1,si2);
UNREACHABLE;
L11:;
L19:;
{
si0=0U;
l1=si0;
L21:;
{
si0=l4;
si1=l1;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=47U;
si0=si0 != si1;
if(si0){
goto L22;
}
si0=1U;
l9=si0;
goto L20;
L22:;
si0=l3;
si1=l1;
si2=1U;
si1+=si2;
l1=si1;
si0=si0 != si1;
if(si0){
goto L21;
}
}
si0=0U;
l9=si0;
si0=l3;
l1=si0;
L20:;
si0=l1;
if(si0){
goto L9;
}
si0=l4;
si1=l9;
si0+=si1;
l4=si0;
si0=l3;
si1=l9;
si0-=si1;
l3=si0;
if(si0){
goto L19;
}
}
L10:;
si0=0U;
l3=si0;
L9:;
si0=l2;
si1=l3;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l2;
si1=l4;
i32_store(&i->m0,(U64)si0,si1);
L8:;
si0=l7;
si1=255U;
si0&=si1;
si1=2U;
si0=si0 != si1;
if(si0){
goto L4;
}
si0=0U;
l1=si0;
si0=0U;
l7=si0;
si0=0U;
l9=si0;
si0=l8;
si1=1U;
si0=si0 > si1;
if(si0){
goto L23;
}
si0=0U;
l9=si0;
si0=0U;
l1=si0;
si0=l5;
si1=5U;
si0=si0 < si1;
if(si0){
goto L24;
}
si0=0U;
l1=si0;
si0=l6;
if(si0){
goto L24;
}
si0=0U;
l1=si0;
si0=0U;
l7=si0;
si0=l5;
si1=6U;
si0=si0 == si1;
if(si0){
goto L25;
}
si0=0U;
l7=si0;
si0=l8;
if(si0){
goto L25;
}
si0=2U;
l7=si0;
si0=l3;
si1=2U;
si0=si0 < si1;
if(si0){
goto L6;
}
L25:;
si0=l7;
si1=l3;
si0=si0 == si1;
if(si0){
goto L24;
}
si0=l4;
si1=l7;
si0+=si1;
l10=si0;
si0=i32_load8_u(&i->m0,(U64)si0);
l7=si0;
si0=l10;
si1=1U;
si0+=si1;
l11=si0;
si1=l4;
si2=l3;
si1+=si2;
si0=si0 == si1;
l10=si0;
si1=1U;
si0&=si1;
if(si0){
goto L27;
}
si0=l7;
si1=255U;
si0&=si1;
si1=46U;
si0=si0 != si1;
if(si0){
goto L27;
}
si0=l11;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=47U;
si0=si0 == si1;
if(si0){
goto L26;
}
goto L24;
L27:;
si0=l10;
si1=-1U;
si0^=si1;
si1=l7;
si2=255U;
si1&=si2;
si2=46U;
si1=si1 != si2;
si0|=si1;
si1=1U;
si0&=si1;
if(si0){
goto L24;
}
L26:;
si0=1U;
l1=si0;
L24:;
si0=l5;
si1=6U;
si0=si0 == si1;
if(si0){
goto L28;
}
si0=l8;
if(si0){
goto L28;
}
si0=6U;
l9=si0;
si0=l6;
l7=si0;
si0=l5;
switch(si0){
case 0:
goto L33;
case 1:
goto L32;
case 2:
goto L23;
case 3:
goto L31;
case 4:
goto L30;
case 5:
goto L29;
default:
goto L33;
}
L33:;
si0=l2;
si1=16U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=4U;
si0+=si1;
l9=si0;
goto L28;
L32:;
si0=l2;
si1=16U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=l2;
si2=24U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
l9=si1;
si2=1U;
si1+=si2;
si2=0U;
si3=l9;
si1=si3?si1:si2;
si0+=si1;
si1=8U;
si0+=si1;
l9=si0;
goto L28;
L31:;
si0=l2;
si1=16U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=4U;
si0+=si1;
l9=si0;
goto L28;
L30:;
si0=l2;
si1=16U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=l2;
si2=24U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
l9=si1;
si2=1U;
si1+=si2;
si2=0U;
si3=l9;
si1=si3?si1:si2;
si0+=si1;
si1=2U;
si0+=si1;
l9=si0;
goto L28;
L29:;
si0=2U;
l9=si0;
L28:;
si0=l6;
l7=si0;
L23:;
si0=l3;
si1=l1;
si2=l7;
si1+=si2;
si2=l9;
si1+=si2;
si0=si0 <= si1;
if(si0){
goto L4;
}
si0=l8;
si1=2U;
si0=si0 < si1;
if(si0){
goto L5;
}
L34:;
{
si0=l2;
si1=32U;
si0+=si1;
si1=l2;
f14791(i,si0,si1);
si0=l2;
si0=i32_load8_u(&i->m0,(U64)si0+36U);
si1=10U;
si0=si0 != si1;
if(si0){
goto L4;
}
si0=l3;
si1=l2;
si1=i32_load(&i->m0,(U64)si1+32U);
l9=si1;
si0-=si1;
l1=si0;
si0=l3;
si1=l9;
si0=si0 < si1;
if(si0){
goto L3;
}
si0=l2;
si1=l1;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l1;
l3=si0;
si0=l1;
if(si0){
goto L34;
}
}
L7:;
si0=0U;
l3=si0;
goto L4;
L6:;
si0=2U;
si1=l3;
si2=17680216U;
f593(i,si0,si1,si2);
UNREACHABLE;
L5:;
si0=l5;
si1=6U;
si0=si0 != si1;
si1=l8;
si1=!(si1);
si0&=si1;
l7=si0;
si0=l2;
si1=16U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si1=4U;
si0+=si1;
l12=si0;
si0=l2;
si1=24U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l9=si0;
si1=1U;
si0+=si1;
si1=0U;
si2=l9;
si0=si2?si0:si1;
si1=l1;
si0+=si1;
l1=si0;
si1=8U;
si0+=si1;
l13=si0;
si0=l1;
si1=2U;
si0+=si1;
l14=si0;
si0=l5;
si1=5U;
si0=si0 < si1;
if(si0){
goto L35;
}
si0=l6;
if(si0){
goto L35;
}
si0=l5;
si1=6U;
si0=si0 == si1;
si1=l8;
si2=0U;
si1=si1 != si2;
si0|=si1;
l8=si0;
L36:;
{
si0=l3;
l9=si0;
si0=l2;
si1=32U;
si0+=si1;
si1=l2;
f14791(i,si0,si1);
si0=l2;
si0=i32_load8_u(&i->m0,(U64)si0+36U);
si1=10U;
si0=si0 == si1;
if(si0){
goto L37;
}
si0=l9;
l3=si0;
goto L4;
L37:;
si0=l9;
si1=l2;
si1=i32_load(&i->m0,(U64)si1+32U);
l1=si1;
si0-=si1;
l3=si0;
si0=l9;
si1=l1;
si0=si0 >= si1;
if(si0){
goto L38;
}
si0=l3;
l1=si0;
goto L2;
L38:;
si0=l2;
si1=l3;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=0U;
l9=si0;
si0=0U;
l1=si0;
si0=l8;
if(si0){
goto L40;
}
si0=2U;
l1=si0;
si0=l3;
si1=2U;
si0=si0 < si1;
if(si0){
goto L39;
}
L40:;
si0=l1;
si1=l3;
si0=si0 == si1;
if(si0){
goto L41;
}
si0=l4;
si1=l1;
si0+=si1;
l10=si0;
si0=i32_load8_u(&i->m0,(U64)si0);
l1=si0;
si0=l10;
si1=1U;
si0+=si1;
l10=si0;
si1=l4;
si2=l3;
si1+=si2;
si0=si0 == si1;
l11=si0;
si1=1U;
si0&=si1;
if(si0){
goto L43;
}
si0=l1;
si1=255U;
si0&=si1;
si1=46U;
si0=si0 != si1;
if(si0){
goto L43;
}
si0=l10;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=47U;
si0=si0 == si1;
if(si0){
goto L42;
}
goto L41;
L43:;
si0=l11;
si1=-1U;
si0^=si1;
si1=l1;
si2=255U;
si1&=si2;
si2=46U;
si1=si1 != si2;
si0|=si1;
si1=1U;
si0&=si1;
if(si0){
goto L41;
}
L42:;
si0=1U;
l9=si0;
L41:;
si0=0U;
l1=si0;
si0=l7;
si0=!(si0);
if(si0){
goto L44;
}
si0=6U;
l1=si0;
si0=l5;
switch(si0){
case 0:
goto L45;
case 1:
goto L46;
case 2:
goto L44;
case 3:
goto L45;
case 4:
goto L47;
case 5:
goto L48;
default:
goto L45;
}
L48:;
si0=2U;
l1=si0;
goto L44;
L47:;
si0=l14;
l1=si0;
goto L44;
L46:;
si0=l13;
l1=si0;
goto L44;
L45:;
si0=l12;
l1=si0;
L44:;
si0=l3;
si1=l9;
si2=l6;
si1+=si2;
si2=l1;
si1+=si2;
si0=si0 > si1;
if(si0){
goto L36;
}
goto L4;
L39:;
}
si0=2U;
si1=l3;
si2=17680216U;
f593(i,si0,si1,si2);
UNREACHABLE;
L35:;
si0=l7;
if(si0){
goto L49;
}
L50:;
{
si0=l2;
si1=32U;
si0+=si1;
si1=l2;
f14791(i,si0,si1);
si0=l2;
si0=i32_load8_u(&i->m0,(U64)si0+36U);
si1=10U;
si0=si0 != si1;
if(si0){
goto L4;
}
si0=l3;
si1=l2;
si1=i32_load(&i->m0,(U64)si1+32U);
l9=si1;
si0-=si1;
l1=si0;
si0=l3;
si1=l9;
si0=si0 < si1;
if(si0){
goto L3;
}
si0=l2;
si1=l1;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l1;
l3=si0;
si0=l1;
si1=l6;
si0=si0 > si1;
if(si0){
goto L50;
}
}
si0=l1;
l3=si0;
goto L4;
L49:;
L51:;
{
si0=l3;
l9=si0;
si0=l2;
si1=32U;
si0+=si1;
si1=l2;
f14791(i,si0,si1);
si0=l2;
si0=i32_load8_u(&i->m0,(U64)si0+36U);
si1=10U;
si0=si0 == si1;
if(si0){
goto L52;
}
si0=l9;
l3=si0;
goto L4;
L52:;
si0=l9;
si1=l2;
si1=i32_load(&i->m0,(U64)si1+32U);
l1=si1;
si0-=si1;
l3=si0;
si0=l9;
si1=l1;
si0=si0 >= si1;
if(si0){
goto L53;
}
si0=l3;
l1=si0;
goto L2;
L53:;
si0=l2;
si1=l3;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=6U;
l1=si0;
si0=l5;
switch(si0){
case 0:
goto L55;
case 1:
goto L56;
case 2:
goto L54;
case 3:
goto L55;
case 4:
goto L57;
case 5:
goto L58;
default:
goto L55;
}
L58:;
si0=2U;
l1=si0;
goto L54;
L57:;
si0=l14;
l1=si0;
goto L54;
L56:;
si0=l13;
l1=si0;
goto L54;
L55:;
si0=l12;
l1=si0;
L54:;
si0=l3;
si1=l1;
si2=l6;
si1+=si2;
si0=si0 > si1;
if(si0){
goto L51;
}
}
L4:;
si0=l0;
si1=l3;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l4;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=64U;
si0+=si1;
i->g0=si0;
goto L0;
L3:;
si0=l3;
l9=si0;
L2:;
si0=l1;
si1=l9;
si2=17680280U;
f597(i,si0,si1,si2);
UNREACHABLE;
L0:;
}

void f14751(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U64 l4=0;
U32 l5=0;
U64 l6=0;
U64 l7=0;
U64 l8=0;
U64 l9=0;
U64 l10=0;
U64 l11=0;
U64 l12=0;
U32 si0,si1,si2,si3,si4;
U64 sj0,sj1,sj2;
si0=i->g0;
si1=464U;
si0-=si1;
l3=si0;
i->g0=si0;
si0=l2;
si1=383U;
si0=si0 > si1;
if(si0){
goto L2;
}
si0=l3;
si1=l1;
si2=l2;
si0=f15143(i,si0,si1,si2);
l1=si0;
si1=l2;
si0+=si1;
si1=0U;
i32_store8(&i->m0,(U64)si0,si1);
si0=l1;
si1=388U;
si0+=si1;
si1=l1;
si2=l2;
si3=1U;
si2+=si3;
f633(i,si0,si1,si2);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+388U);
if(si0){
goto L3;
}
si0=l1;
si1=400U;
si0+=si1;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+392U);
si2=l1;
si3=396U;
si2+=si3;
si2=i32_load(&i->m0,(U64)si2);
f14803(i,si0,si1,si2);
goto L1;
L3:;
si0=l1;
si1=-1U;
i32_store(&i->m0,(U64)si0+400U,si1);
si0=l1;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+17680760U);
i64_store(&i->m0,(U64)si0+404U,sj1);
goto L1;
L2:;
si0=l3;
si1=400U;
si0+=si1;
si1=l1;
si2=l2;
f14802(i,si0,si1,si2);
L1:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+400U);
l1=si0;
si1=-1U;
si0=si0 == si1;
if(si0){
goto L8;
}
si0=l3;
si1=l3;
sj1=i64_load(&i->m0,(U64)si1+404U);
l4=sj1;
si1=(U32)(sj1);
l2=si1;
si2=l3;
si2=i32_load(&i->m0,(U64)si2+412U);
f686(i,si0,si1,si2);
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L7;
}
si0=l1;
si1=1U;
si2=l3;
si2=i32_load(&i->m0,(U64)si2+4U);
si3=l3;
si4=8U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si4=l3;
si0=wasi_snapshot_preview1__path_filestat_get(i,si0,si1,si2,si3,si4);
l1=si0;
if(si0){
goto L9;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si0=l3;
si1=456U;
si0+=si1;
si1=l3;
si2=60U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
l5=si1;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=448U;
si0+=si1;
si1=l3;
si2=52U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
l6=sj1;
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=440U;
si0+=si1;
si1=l3;
si2=44U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
l7=sj1;
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=432U;
si0+=si1;
si1=l3;
si2=36U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
l8=sj1;
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=424U;
si0+=si1;
si1=l3;
si2=28U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
l9=sj1;
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=416U;
si0+=si1;
si1=l3;
si2=20U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
l10=sj1;
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=408U;
si0+=si1;
si1=l3;
si2=12U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
l11=sj1;
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=l3;
sj1=i64_load(&i->m0,(U64)si1+4U);
l12=sj1;
i64_store(&i->m0,(U64)si0+400U,sj1);
si0=l0;
si1=l1;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l0;
sj1=l12;
i64_store(&i->m0,(U64)si0+12U,sj1);
si0=l0;
si1=20U;
si0+=si1;
sj1=l11;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=28U;
si0+=si1;
sj1=l10;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=36U;
si0+=si1;
sj1=l9;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=44U;
si0+=si1;
sj1=l8;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=52U;
si0+=si1;
sj1=l7;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=60U;
si0+=si1;
sj1=l6;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=68U;
si0+=si1;
si1=l5;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
goto L5;
L9:;
si0=l0;
si1=l1;
si2=65535U;
si1&=si2;
sj1=(U64)(si1);
sj2=32ULL;
sj1<<=(sj2&63);
i64_store(&i->m0,(U64)si0+4U,sj1);
goto L6;
L8:;
si0=l3;
sj0=i64_load(&i->m0,(U64)si0+404U);
l4=sj0;
si0=l0;
si1=1U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
sj1=l4;
i64_store(&i->m0,(U64)si0+4U,sj1);
goto L4;
L7:;
si0=l0;
si1=2U;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=8U;
si0+=si1;
si1=17680104U;
i32_store(&i->m0,(U64)si0,si1);
L6:;
si0=l0;
si1=1U;
i32_store(&i->m0,(U64)si0,si1);
L5:;
sj0=l4;
sj1=4294967296ULL;
si0=sj0 < sj1;
if(si0){
goto L4;
}
si0=l2;
f15024(i,si0);
L4:;
si0=l3;
si1=464U;
si0+=si1;
i->g0=si0;
L0:;
}

U32 f14752(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 l3=0;
U64 l4=0;
U32 l5=0;
U32 l6=0;
U32 si0,si1,si2,si3;
U64 sj0,sj1;
si0=i->g0;
si1=80U;
si0-=si1;
l2=si0;
i->g0=si0;
si0=l2;
si1=8U;
si0+=si1;
si1=l0;
si2=l1;
f14751(i,si0,si1,si2);
si0=l2;
si0=i32_load(&i->m0,(U64)si0+8U);
if(si0){
goto L2;
}
si0=260U;
si1=4U;
si2=l2;
si3=32U;
si2+=si3;
si2=i32_load8_u(&i->m0,(U64)si2);
si3=3U;
si2=si2 == si3;
si0=si2?si0:si1;
l1=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+16U);
l3=si0;
goto L1;
L2:;
si0=l2;
sj0=i64_load(&i->m0,(U64)si0+12U);
l4=sj0;
sj1=32ULL;
sj0>>=(sj1&63);
si0=(U32)(sj0);
l3=si0;
sj0=l4;
si0=(U32)(sj0);
l1=si0;
L1:;
si0=l1;
si1=255U;
si0&=si1;
l0=si0;
si1=4U;
si0=si0 == si1;
if(si0){
goto L3;
}
si0=l0;
si1=3U;
si0=si0 < si1;
if(si0){
goto L3;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
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
goto L4;
}
si0=l5;
f15024(i,si0);
L4:;
si0=l3;
f15024(i,si0);
L3:;
si0=l2;
si1=80U;
si0+=si1;
i->g0=si0;
si0=l0;
si1=4U;
si0=si0 == si1;
si1=l1;
si2=65280U;
si1&=si2;
si2=0U;
si1=si1 != si2;
si0&=si1;
L0:;
return si0;
}

void f14753(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 l8=0;
U32 l9=0;
U32 si0,si1,si2,si3,si4;
si0=i->g0;
si1=16U;
si0-=si1;
l2=si0;
i->g0=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+8U);
l3=si0;
if(si0){
goto L3;
}
si0=l0;
si1=4U;
i32_store8(&i->m0,(U64)si0,si1);
goto L2;
L3:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
si0=0U;
l5=si0;
L6:;
{
si0=l2;
si1=l3;
si2=l5;
si1-=si2;
l6=si1;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l2;
si1=l4;
si2=l5;
si1+=si2;
l7=si1;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=1U;
si1=l2;
si2=4U;
si1+=si2;
si2=1U;
si3=l2;
si4=12U;
si3+=si4;
si0=wasi_snapshot_preview1__fd_write(i,si0,si1,si2,si3);
l8=si0;
if(si0){
goto L11;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0+12U);
l9=si0;
goto L10;
L11:;
si0=l6;
l9=si0;
si0=l8;
si1=65535U;
si0&=si1;
l8=si0;
si1=8U;
si0=si0 == si1;
if(si0){
goto L10;
}
si0=l1;
si1=0U;
i32_store8(&i->m0,(U64)si0+12U,si1);
si0=l8;
si0=f14744(i,si0);
si1=255U;
si0&=si1;
si1=35U;
si0=si0 == si1;
if(si0){
goto L7;
}
si0=l0;
si1=l8;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
goto L9;
L10:;
si0=l1;
si1=0U;
i32_store8(&i->m0,(U64)si0+12U,si1);
si0=l9;
if(si0){
goto L8;
}
si0=l0;
si1=17678344U;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=2U;
i32_store8(&i->m0,(U64)si0,si1);
L9:;
si0=l5;
si0=!(si0);
if(si0){
goto L2;
}
si0=l3;
si1=l5;
si0=si0 < si1;
if(si0){
goto L5;
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
si0=l4;
si1=l7;
si2=l6;
si0=f15144(i,si0,si1,si2);
si0=l1;
si1=l6;
i32_store(&i->m0,(U64)si0+8U,si1);
goto L2;
L8:;
si0=l9;
si1=l5;
si0+=si1;
l5=si0;
L7:;
si0=l5;
si1=l3;
si0=si0 >= si1;
if(si0){
goto L4;
}
goto L6;
}
L5:;
si0=l5;
si1=l3;
si2=17677444U;
f597(i,si0,si1,si2);
UNREACHABLE;
L4:;
si0=l0;
si1=4U;
i32_store8(&i->m0,(U64)si0,si1);
si0=l3;
si1=l5;
si0=si0 < si1;
if(si0){
goto L1;
}
si0=l1;
si1=0U;
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

void f14754(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U32 l5=0;
U64 l6=0;
U64 l7=0;
U32 si0,si1,si2,si3,si4;
U64 sj0,sj1,sj2;
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
si1=4U;
si0+=si1;
si1=l1;
f14753(i,si0,si1);
si0=l4;
si0=i32_load8_u(&i->m0,(U64)si0+4U);
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
si1=i32_load(&i->m0,(U64)si1+5U);
i32_store(&i->m0,(U64)si0+1U,si1);
si0=l0;
si1=4U;
si0+=si1;
si1=l4;
si2=4U;
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
si1=l3;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l1;
si1=l5;
si2=l3;
si1+=si2;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l0;
si1=4U;
i32_store8(&i->m0,(U64)si0,si1);
goto L1;
L4:;
si0=l4;
si1=l3;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l4;
si1=l2;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=1U;
si1=l4;
si2=4U;
si1+=si2;
si2=1U;
si3=l4;
si4=12U;
si3+=si4;
si0=wasi_snapshot_preview1__fd_write(i,si0,si1,si2,si3);
l5=si0;
if(si0){
goto L7;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0+12U);
l5=si0;
sj0=4ULL;
l6=sj0;
goto L6;
L7:;
sj0=0ULL;
l6=sj0;
sj0=4ULL;
l7=sj0;
si0=l5;
si1=65535U;
si0&=si1;
l5=si0;
si1=8U;
si0=si0 == si1;
if(si0){
goto L5;
}
L6:;
sj0=l6;
l7=sj0;
si0=l5;
l3=si0;
L5:;
si0=l1;
si1=0U;
i32_store8(&i->m0,(U64)si0+12U,si1);
si0=l0;
si1=l3;
sj1=(U64)(si1);
sj2=32ULL;
sj1<<=(sj2&63);
sj2=l7;
sj1|=sj2;
i64_store(&i->m0,(U64)si0,sj1);
L1:;
si0=l4;
si1=16U;
si0+=si1;
i->g0=si0;
L0:;
}

void f14755(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U32 l5=0;
U64 l6=0;
U32 si0,si1,si2,si3,si4;
U64 sj0,sj1,sj2;
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
si1=4U;
si0+=si1;
si1=l1;
f14753(i,si0,si1);
si0=l4;
si0=i32_load8_u(&i->m0,(U64)si0+4U);
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
si1=i32_load(&i->m0,(U64)si1+5U);
i32_store(&i->m0,(U64)si0+1U,si1);
si0=l0;
si1=4U;
si0+=si1;
si1=l4;
si2=4U;
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
sj0=4ULL;
l6=sj0;
si0=l3;
si0=!(si0);
if(si0){
goto L6;
}
L8:;
{
si0=l4;
si1=l3;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l4;
si1=l2;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=1U;
si1=l4;
si2=4U;
si1+=si2;
si2=1U;
si3=l4;
si4=12U;
si3+=si4;
si0=wasi_snapshot_preview1__fd_write(i,si0,si1,si2,si3);
l5=si0;
if(si0){
goto L10;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0+12U);
l5=si0;
if(si0){
goto L11;
}
si0=17679916U;
l5=si0;
sj0=2ULL;
l6=sj0;
goto L5;
L11:;
si0=l3;
si1=l5;
si0=si0 < si1;
if(si0){
goto L12;
}
si0=l2;
si1=l5;
si0+=si1;
l2=si0;
si0=l3;
si1=l5;
si0-=si1;
l3=si0;
goto L9;
L12:;
si0=l5;
si1=l3;
si2=17679928U;
f593(i,si0,si1,si2);
UNREACHABLE;
L10:;
si0=l5;
si1=65535U;
si0&=si1;
l5=si0;
si0=f14744(i,si0);
si1=255U;
si0&=si1;
si1=35U;
si0=si0 != si1;
if(si0){
goto L7;
}
L9:;
si0=l3;
if(si0){
goto L8;
}
}
si0=17679916U;
l5=si0;
goto L5;
L7:;
sj0=0ULL;
l6=sj0;
si0=l5;
si1=8U;
si0=si0 != si1;
if(si0){
goto L5;
}
sj0=4ULL;
l6=sj0;
L6:;
L5:;
si0=l1;
si1=0U;
i32_store8(&i->m0,(U64)si0+12U,si1);
si0=l0;
si1=l5;
sj1=(U64)(si1);
sj2=32ULL;
sj1<<=(sj2&63);
sj2=l6;
sj1|=sj2;
i64_store(&i->m0,(U64)si0,sj1);
L1:;
si0=l4;
si1=16U;
si0+=si1;
i->g0=si0;
L0:;
}

U32 f14756(rustpythonInstance*i,U32 l0,U32 l1) {
U32 si0,si1;
si0=l0;
si1=l1;
si0=f14757(i,si0,si1);
L0:;
return si0;
}

U32 f14757(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 l3=0;
U32 l4=0;
U32 si0,si1,si2,si3,si4,si5;
si0=i->g0;
si1=32U;
si0-=si1;
l2=si0;
i->g0=si0;
si0=l0;
si0=i32_load8_u(&i->m0,(U64)si0);
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
goto L6;
}
L6:;
si0=l2;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+4U);
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=17679270U;
si2=2U;
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
si1=17679272U;
si2=4U;
si3=l2;
si4=4U;
si3+=si4;
si4=17679276U;
si0=f644(i,si0,si1,si2,si3,si4);
l1=si0;
si0=l2;
si1=l2;
si1=i32_load(&i->m0,(U64)si1+4U);
si1=f14744(i,si1);
i32_store8(&i->m0,(U64)si0+19U,si1);
si0=l1;
si1=17679292U;
si2=4U;
si3=l2;
si4=19U;
si3+=si4;
si4=17679296U;
si0=f644(i,si0,si1,si2,si3,si4);
l1=si0;
si0=l2;
si1=20U;
si0+=si1;
si1=l2;
si1=i32_load(&i->m0,(U64)si1+4U);
f14759(i,si0,si1);
si0=l1;
si1=17679312U;
si2=7U;
si3=l2;
si4=20U;
si3+=si4;
si4=17679320U;
si0=f644(i,si0,si1,si2,si3,si4);
l0=si0;
si0=i32_load8_u(&i->m0,(U64)si0+4U);
l3=si0;
si0=l0;
si0=i32_load8_u(&i->m0,(U64)si0+5U);
if(si0){
goto L8;
}
si0=l3;
si1=255U;
si0&=si1;
si1=0U;
si0=si0 != si1;
l1=si0;
goto L7;
L8:;
si0=1U;
l1=si0;
si0=l3;
si1=255U;
si0&=si1;
if(si0){
goto L9;
}
si0=l0;
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
si1=1102482U;
si2=2U;
si3=l1;
si3=i32_load(&i->m0,(U64)si3+24U);
si3=i32_load(&i->m0,(U64)si3+12U);
si0=TF(i->t0,si3,U32 (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
l1=si0;
goto L9;
L10:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=1102481U;
si2=1U;
si3=l1;
si3=i32_load(&i->m0,(U64)si3+24U);
si3=i32_load(&i->m0,(U64)si3+12U);
si0=TF(i->t0,si3,U32 (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
l1=si0;
L9:;
si0=l0;
si1=l1;
i32_store8(&i->m0,(U64)si0+4U,si1);
L7:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+24U);
si0=!(si0);
if(si0){
goto L1;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0+20U);
f15024(i,si0);
goto L1;
L5:;
si0=l2;
si1=l0;
si1=i32_load8_u(&i->m0,(U64)si1+1U);
i32_store8(&i->m0,(U64)si0+8U,si1);
si0=l2;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+20U);
si2=17679336U;
si3=4U;
si4=l1;
si5=24U;
si4+=si5;
si4=i32_load(&i->m0,(U64)si4);
si4=i32_load(&i->m0,(U64)si4+12U);
si1=TF(i->t0,si4,U32 (*)(rustpythonInstance*,U32,U32,U32))(i,si1,si2,si3);
i32_store8(&i->m0,(U64)si0+28U,si1);
si0=l2;
si1=l1;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l2;
si1=0U;
i32_store8(&i->m0,(U64)si0+29U,si1);
si0=l2;
si1=0U;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l2;
si1=20U;
si0+=si1;
si1=l2;
si2=8U;
si1+=si2;
si2=17679296U;
si0=f645(i,si0,si1,si2);
l0=si0;
si0=i32_load8_u(&i->m0,(U64)si0+8U);
l3=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
if(si0){
goto L11;
}
si0=l3;
si1=255U;
si0&=si1;
si1=0U;
si0=si0 != si1;
l1=si0;
goto L1;
L11:;
si0=1U;
l1=si0;
si0=l3;
si1=255U;
si0&=si1;
if(si0){
goto L12;
}
si0=l4;
si1=1U;
si0=si0 != si1;
if(si0){
goto L14;
}
si0=l0;
si0=i32_load8_u(&i->m0,(U64)si0+9U);
si1=255U;
si0&=si1;
if(si0){
goto L13;
}
L14:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+4U);
l3=si0;
goto L2;
L13:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+4U);
l3=si0;
si0=i32_load8_u(&i->m0,(U64)si0+28U);
si1=4U;
si0&=si1;
if(si0){
goto L2;
}
si0=1U;
l1=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=1102487U;
si2=1U;
si3=l3;
si4=24U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si3=i32_load(&i->m0,(U64)si3+12U);
si0=TF(i->t0,si3,U32 (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
si0=!(si0);
if(si0){
goto L2;
}
L12:;
si0=l0;
si1=l1;
i32_store8(&i->m0,(U64)si0+8U,si1);
goto L1;
L4:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+4U);
l0=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=17679340U;
si2=5U;
si3=l1;
si4=24U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si3=i32_load(&i->m0,(U64)si3+12U);
si0=TF(i->t0,si3,U32 (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
l3=si0;
si0=l2;
si1=0U;
i32_store8(&i->m0,(U64)si0+25U,si1);
si0=l2;
si1=l3;
i32_store8(&i->m0,(U64)si0+24U,si1);
si0=l2;
si1=l1;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l2;
si1=20U;
si0+=si1;
si1=17679292U;
si2=4U;
si3=l0;
si4=8U;
si3+=si4;
si4=17679296U;
si0=f644(i,si0,si1,si2,si3,si4);
si1=17679312U;
si2=7U;
si3=l0;
si4=17679348U;
si0=f644(i,si0,si1,si2,si3,si4);
l0=si0;
si0=i32_load8_u(&i->m0,(U64)si0+4U);
l3=si0;
si0=l0;
si0=i32_load8_u(&i->m0,(U64)si0+5U);
if(si0){
goto L15;
}
si0=l3;
si1=255U;
si0&=si1;
si1=0U;
si0=si0 != si1;
l1=si0;
goto L1;
L15:;
si0=1U;
l1=si0;
si0=l3;
si1=255U;
si0&=si1;
if(si0){
goto L16;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si0=i32_load8_u(&i->m0,(U64)si0+28U);
si1=4U;
si0&=si1;
if(si0){
goto L17;
}
si0=l0;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+20U);
si2=1102482U;
si3=2U;
si4=l1;
si4=i32_load(&i->m0,(U64)si4+24U);
si4=i32_load(&i->m0,(U64)si4+12U);
si1=TF(i->t0,si4,U32 (*)(rustpythonInstance*,U32,U32,U32))(i,si1,si2,si3);
l1=si1;
i32_store8(&i->m0,(U64)si0+4U,si1);
goto L1;
L17:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=1102481U;
si2=1U;
si3=l1;
si3=i32_load(&i->m0,(U64)si3+24U);
si3=i32_load(&i->m0,(U64)si3+12U);
si0=TF(i->t0,si3,U32 (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
l1=si0;
L16:;
si0=l0;
si1=l1;
i32_store8(&i->m0,(U64)si0+4U,si1);
goto L1;
L3:;
si0=l2;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+4U);
l0=si1;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=17681820U;
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
i32_store8(&i->m0,(U64)si0+25U,si1);
si0=l2;
si1=l3;
i32_store8(&i->m0,(U64)si0+24U,si1);
si0=l2;
si1=l1;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l2;
si1=20U;
si0+=si1;
si1=17679292U;
si2=4U;
si3=l0;
si4=8U;
si3+=si4;
si4=17679296U;
si0=f644(i,si0,si1,si2,si3,si4);
si0=l2;
si1=20U;
si0+=si1;
si1=17681826U;
si2=5U;
si3=l2;
si4=8U;
si3+=si4;
si4=17681832U;
si0=f644(i,si0,si1,si2,si3,si4);
si0=l2;
si0=i32_load8_u(&i->m0,(U64)si0+24U);
l0=si0;
si0=l2;
si0=i32_load8_u(&i->m0,(U64)si0+25U);
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
l1=si0;
si0=i32_load8_u(&i->m0,(U64)si0+28U);
si1=4U;
si0&=si1;
if(si0){
goto L19;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=1102482U;
si2=2U;
si3=l1;
si3=i32_load(&i->m0,(U64)si3+24U);
si3=i32_load(&i->m0,(U64)si3+12U);
si0=TF(i->t0,si3,U32 (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
l1=si0;
goto L1;
L19:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=1102481U;
si2=1U;
si3=l1;
si3=i32_load(&i->m0,(U64)si3+24U);
si3=i32_load(&i->m0,(U64)si3+12U);
si0=TF(i->t0,si3,U32 (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
l1=si0;
goto L1;
L2:;
si0=l0;
si1=l3;
si1=i32_load(&i->m0,(U64)si1+20U);
si2=1101931U;
si3=1U;
si4=l3;
si5=24U;
si4+=si5;
si4=i32_load(&i->m0,(U64)si4);
si4=i32_load(&i->m0,(U64)si4+12U);
si1=TF(i->t0,si4,U32 (*)(rustpythonInstance*,U32,U32,U32))(i,si1,si2,si3);
l1=si1;
i32_store8(&i->m0,(U64)si0+8U,si1);
L1:;
si0=l2;
si1=32U;
si0+=si1;
i->g0=si0;
si0=l1;
L0:;
return si0;
}

void f14758(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U32 si0,si1;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=12U;
si0=f15022(i,si0);
l4=si0;
if(si0){
goto L1;
}
si0=4U;
si1=12U;
f52(i,si0,si1);
UNREACHABLE;
L1:;
si0=l4;
si1=l1;
i32_store8(&i->m0,(U64)si0+8U,si1);
si0=l4;
si1=l3;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l4;
si1=l2;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l4;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=3U;
i32_store(&i->m0,(U64)si0,si1);
L0:;
}

void f14759(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 l3=0;
U32 l4=0;
U32 si0,si1,si2,si3,si4;
U64 sj1;
si0=i->g0;
si1=1056U;
si0-=si1;
l2=si0;
i->g0=si0;
si0=l1;
si1=l2;
si2=0U;
si3=1024U;
si1=f15145(i,si1,si2,si3);
l2=si1;
si2=1024U;
si0=f15151(i,si0,si1,si2);
si1=0U;
si0=(U32)((I32)si0<(I32)si1);
if(si0){
goto L3;
}
si0=l2;
si1=1024U;
si0+=si1;
si1=l2;
si2=l2;
si2=f15152(i,si2);
f686(i,si0,si1,si2);
si0=l2;
si0=i32_load(&i->m0,(U64)si0+1024U);
if(si0){
goto L4;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0+1028U);
l3=si0;
si0=l2;
si1=1032U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
if(si0){
goto L6;
}
si0=1U;
l4=si0;
goto L5;
L6:;
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
l4=si0;
si0=!(si0);
if(si0){
goto L1;
}
L5:;
si0=l4;
si1=l3;
si2=l1;
si0=f15143(i,si0,si1,si2);
l3=si0;
si0=l0;
si1=l1;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l0;
si1=l1;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l3;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=1056U;
si0+=si1;
i->g0=si0;
goto L0;
L4:;
si0=l2;
si1=l2;
sj1=i64_load(&i->m0,(U64)si1+1028U);
i64_store(&i->m0,(U64)si0+1048U,sj1);
si0=17677962U;
si1=43U;
si2=l2;
si3=1048U;
si2+=si3;
si3=17682764U;
si4=17682812U;
f641(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L3:;
si0=l2;
si1=1036U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=1U;
i32_store(&i->m0,(U64)si0+1028U,si1);
si0=l2;
si1=17682848U;
i32_store(&i->m0,(U64)si0+1024U,si1);
si0=l2;
si1=17677000U;
i32_store(&i->m0,(U64)si0+1032U,si1);
si0=l2;
si1=1024U;
si0+=si1;
si1=17682856U;
f614(i,si0,si1);
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

void f14760(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
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
f14670(i,si0,si1,si2);
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

void f14761(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 l8=0;
U32 si0,si1,si2;
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
si0=0U;
l4=si0;
si0=l3;
si1=-4U;
si0&=si1;
l6=si0;
l8=si0;
L5:;
{
si0=l7;
si1=-24U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=l4;
si0+=si1;
si1=l7;
si2=-16U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
si0+=si1;
si1=l7;
si2=-8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
si0+=si1;
si1=l7;
si1=i32_load(&i->m0,(U64)si1);
si0+=si1;
l4=si0;
si0=l7;
si1=32U;
si0+=si1;
l7=si0;
si0=l8;
si1=-4U;
si0+=si1;
l8=si0;
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
si0=l3;
si1=3U;
si0<<=(si1&31);
l5=si0;
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
f14670(i,si0,si1,si2);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+8U);
l7=si0;
L8:;
si0=l2;
si1=l5;
si0+=si1;
l3=si0;
L9:;
{
si0=l2;
si0=i32_load(&i->m0,(U64)si0);
l8=si0;
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
f14670(i,si0,si1,si2);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+8U);
l7=si0;
L10:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
si1=l7;
si0+=si1;
si1=l8;
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
si1=l3;
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

U32 f14762(rustpythonInstance*i,U32 l0) {
U32 si0;
si0=1U;
L0:;
return si0;
}

void f14763(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
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
f14670(i,si0,si1,si2);
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

void f14764(rustpythonInstance*i,U32 l0,U32 l1) {
U32 si0,si1;
si0=l0;
si1=4U;
i32_store8(&i->m0,(U64)si0,si1);
L0:;
}

void f14765(rustpythonInstance*i,U32 l0) {
U32 l1=0;
U32 l2=0;
U32 si0,si1,si2;
U64 sj1;
si0=i->g0;
si1=32U;
si0-=si1;
l1=si0;
i->g0=si0;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18663116U);
l2=si0;
si1=2U;
si0=si0 < si1;
if(si0){
goto L5;
}
si0=l2;
si1=-2U;
si0+=si1;
switch(si0){
case 0:
goto L1;
case 1:
goto L4;
default:
goto L1;
}
L5:;
si0=0U;
si1=2U;
i32_store8(&i->m0,(U64)si0+18663116U,si1);
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si0=!(si0);
if(si0){
goto L3;
}
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=8192U;
si0=f15022(i,si0);
l0=si0;
si0=!(si0);
if(si0){
goto L2;
}
si0=l2;
sj1=0ULL;
i64_store(&i->m0,(U64)si0+16U,sj1);
si0=l2;
sj1=8192ULL;
i64_store(&i->m0,(U64)si0+8U,sj1);
si0=l2;
si1=l0;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l2;
si1=0U;
i32_store16(&i->m0,(U64)si0,si1);
si0=0U;
si1=3U;
i32_store8(&i->m0,(U64)si0+18663116U,si1);
L4:;
si0=l1;
si1=32U;
si0+=si1;
i->g0=si0;
goto L0;
L3:;
si0=17677284U;
si1=43U;
si2=17680516U;
f604(i,si0,si1,si2);
UNREACHABLE;
L2:;
si0=1U;
si1=8192U;
f52(i,si0,si1);
UNREACHABLE;
L1:;
si0=l1;
si1=20U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si1=1U;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l1;
si1=17683468U;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l1;
si1=17677000U;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l1;
si1=8U;
si0+=si1;
si1=17680500U;
f614(i,si0,si1);
UNREACHABLE;
L0:;
}

void f14766(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 l3=0;
U32 si0,si1,si2;
U64 sj1;
si0=i->g0;
si1=32U;
si0-=si1;
l2=si0;
i->g0=si0;
si0=l2;
si1=l1;
si1=i32_load(&i->m0,(U64)si1);
l1=si1;
si1=i32_load8_u(&i->m0,(U64)si1);
l3=si1;
i32_store8(&i->m0,(U64)si0+7U,si1);
si0=l1;
si1=1U;
i32_store8(&i->m0,(U64)si0,si1);
si0=l3;
if(si0){
goto L1;
}
si0=0U;
l3=si0;
si0=0U;
si0=i32_load(&i->m0,(U64)si0+18663204U);
si1=2147483647U;
si0&=si1;
si0=!(si0);
if(si0){
goto L2;
}
si0=f14767(i);
si1=1U;
si0^=si1;
l3=si0;
L2:;
si0=l0;
si1=l3;
i32_store8(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l1;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=32U;
si0+=si1;
i->g0=si0;
goto L0;
L1:;
si0=l2;
sj1=0ULL;
i64_store(&i->m0,(U64)si0+20U,sj1);
si0=l2;
si1=17677000U;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l2;
si1=1U;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l2;
si1=17680376U;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l2;
si1=7U;
si0+=si1;
si1=l2;
si2=8U;
si1+=si2;
f14693(i,si0,si1);
UNREACHABLE;
L0:;
}

U32 f14767(rustpythonInstance*i) {
U32 si0;
si0=0U;
si0=i32_load(&i->m0,(U64)si0+18663216U);
si0=!(si0);
L0:;
return si0;
}

void f14768(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U32 l4=0;
U32 si0,si1,si2,si3;
U64 sj1;
si0=i->g0;
si1=32U;
si0-=si1;
l3=si0;
i->g0=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+8U);
l4=si0;
si0=l3;
si1=8U;
si0+=si1;
si1=l1;
si1=i32_load(&i->m0,(U64)si1);
si2=4U;
si1+=si2;
si2=10U;
si3=l2;
f14769(i,si0,si1,si2,si3);
si0=l2;
si0=i32_load(&i->m0,(U64)si0+8U);
l1=si0;
si1=l4;
si0=si0 < si1;
if(si0){
goto L1;
}
si0=l3;
si1=20U;
si0+=si1;
si1=l2;
si1=i32_load(&i->m0,(U64)si1);
si2=l4;
si1+=si2;
si2=l1;
si3=l4;
si2-=si3;
f686(i,si0,si1,si2);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+20U);
if(si0){
goto L3;
}
si0=l0;
si1=l3;
sj1=i64_load(&i->m0,(U64)si1+8U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
l4=si0;
goto L2;
L3:;
si0=l3;
si0=i32_load8_u(&i->m0,(U64)si0+8U);
l1=si0;
si1=4U;
si0=si0 != si1;
if(si0){
goto L5;
}
si0=l0;
si1=17678296U;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=2U;
l1=si0;
goto L4;
L5:;
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
L4:;
si0=l0;
si1=l1;
i32_store8(&i->m0,(U64)si0,si1);
L2:;
si0=l2;
si1=l4;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l3;
si1=32U;
si0+=si1;
i->g0=si0;
goto L0;
L1:;
si0=l4;
si1=l1;
si2=17679652U;
f593(i,si0,si1,si2);
UNREACHABLE;
L0:;
}

void f14769(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
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
U32 si0,si1,si2,si3,si4;
si0=i->g0;
si1=16U;
si0-=si1;
l4=si0;
i->g0=si0;
si0=l2;
si1=255U;
si0&=si1;
l5=si0;
si1=16843009U;
si0*=si1;
l6=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+8U);
l7=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+16U);
l8=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+12U);
l9=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
l10=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l11=si0;
si0=0U;
l12=si0;
L2:;
{
si0=l7;
si1=l9;
si0=si0 < si1;
if(si0){
goto L3;
}
si0=l10;
si1=l8;
si0=si0 < si1;
if(si0){
goto L6;
}
si0=l11;
si1=l8;
si0+=si1;
si1=0U;
si2=l10;
si3=l8;
si2-=si3;
l13=si2;
si0=f15145(i,si0,si1,si2);
l14=si0;
si0=l4;
si1=l10;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l4;
si1=l11;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=0U;
si1=l4;
si2=4U;
si1+=si2;
si2=1U;
si3=l4;
si4=12U;
si3+=si4;
si0=wasi_snapshot_preview1__fd_read(i,si0,si1,si2,si3);
l2=si0;
if(si0){
goto L7;
}
si0=l10;
si1=l4;
si1=i32_load(&i->m0,(U64)si1+12U);
l9=si1;
si2=l10;
si3=l9;
si2=si2 > si3;
si0=si2?si0:si1;
l8=si0;
goto L4;
L7:;
si0=0U;
l9=si0;
si0=l2;
si1=65535U;
si0&=si1;
l2=si0;
si1=8U;
si0=si0 == si1;
if(si0){
goto L5;
}
L8:;
{
si0=l2;
si0=f14744(i,si0);
si1=255U;
si0&=si1;
si1=35U;
si0=si0 == si1;
if(si0){
goto L9;
}
si0=l0;
si1=l2;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
goto L1;
L9:;
si0=l14;
si1=0U;
si2=l13;
si0=f15145(i,si0,si1,si2);
si0=l4;
si1=l10;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l4;
si1=l11;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=0U;
si1=l4;
si2=4U;
si1+=si2;
si2=1U;
si3=l4;
si4=12U;
si3+=si4;
si0=wasi_snapshot_preview1__fd_read(i,si0,si1,si2,si3);
l2=si0;
si0=!(si0);
if(si0){
goto L10;
}
si0=l2;
si1=65535U;
si0&=si1;
l2=si0;
si1=8U;
si0=si0 == si1;
if(si0){
goto L5;
}
goto L8;
L10:;
}
si0=l10;
si1=l4;
si1=i32_load(&i->m0,(U64)si1+12U);
l9=si1;
si2=l10;
si3=l9;
si2=si2 > si3;
si0=si2?si0:si1;
l8=si0;
goto L4;
L6:;
si0=l8;
si1=l10;
si2=17679700U;
f593(i,si0,si1,si2);
UNREACHABLE;
L5:;
si0=l10;
l8=si0;
L4:;
si0=l1;
si1=l8;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l1;
si1=l9;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=0U;
l7=si0;
L3:;
si0=l11;
si1=l7;
si0+=si1;
l14=si0;
si0=l9;
si1=l7;
si0-=si1;
l15=si0;
si1=8U;
si0=si0 < si1;
if(si0){
goto L14;
}
si0=l14;
si1=3U;
si0+=si1;
si1=-4U;
si0&=si1;
l2=si0;
si1=l14;
si0=si0 == si1;
if(si0){
goto L17;
}
si0=l2;
si1=l14;
si0-=si1;
l13=si0;
si0=!(si0);
if(si0){
goto L17;
}
si0=0U;
l2=si0;
L18:;
{
si0=l14;
si1=l2;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=l5;
si0=si0 == si1;
if(si0){
goto L12;
}
si0=l13;
si1=l2;
si2=1U;
si1+=si2;
l2=si1;
si0=si0 != si1;
if(si0){
goto L18;
}
}
si0=l13;
si1=l15;
si2=-8U;
si1+=si2;
l16=si1;
si0=si0 <= si1;
if(si0){
goto L16;
}
goto L15;
L17:;
si0=l15;
si1=-8U;
si0+=si1;
l16=si0;
si0=0U;
l13=si0;
L16:;
L19:;
{
si0=l14;
si1=l13;
si0+=si1;
l17=si0;
si0=i32_load(&i->m0,(U64)si0);
si1=l6;
si0^=si1;
l2=si0;
si1=-1U;
si0^=si1;
si1=l2;
si2=-16843009U;
si1+=si2;
si0&=si1;
si1=-2139062144U;
si0&=si1;
if(si0){
goto L15;
}
si0=l17;
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=l6;
si0^=si1;
l2=si0;
si1=-1U;
si0^=si1;
si1=l2;
si2=-16843009U;
si1+=si2;
si0&=si1;
si1=-2139062144U;
si0&=si1;
if(si0){
goto L15;
}
si0=l13;
si1=8U;
si0+=si1;
l13=si0;
si1=l16;
si0=si0 <= si1;
if(si0){
goto L19;
}
}
L15:;
si0=l13;
si1=l15;
si0=si0 == si1;
if(si0){
goto L13;
}
L20:;
{
si0=l14;
si1=l13;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=l5;
si0=si0 != si1;
if(si0){
goto L21;
}
si0=l13;
l2=si0;
goto L12;
L21:;
si0=l15;
si1=l13;
si2=1U;
si1+=si2;
l13=si1;
si0=si0 != si1;
if(si0){
goto L20;
}
goto L13;
}
L14:;
si0=l15;
si0=!(si0);
if(si0){
goto L13;
}
si0=0U;
l2=si0;
L22:;
{
si0=l14;
si1=l2;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=l5;
si0=si0 == si1;
if(si0){
goto L12;
}
si0=l15;
si1=l2;
si2=1U;
si1+=si2;
l2=si1;
si0=si0 != si1;
if(si0){
goto L22;
}
}
L13:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+4U);
si1=l3;
si1=i32_load(&i->m0,(U64)si1+8U);
l2=si1;
si0-=si1;
si1=l15;
si0=si0 >= si1;
if(si0){
goto L23;
}
si0=l3;
si1=l2;
si2=l15;
f14670(i,si0,si1,si2);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+8U);
l2=si0;
L23:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
si1=l2;
si0+=si1;
si1=l14;
si2=l15;
si0=f15143(i,si0,si1,si2);
si0=l2;
si1=l15;
si0+=si1;
l2=si0;
si0=0U;
l13=si0;
goto L11;
L12:;
si0=l2;
si1=-1U;
si0=si0 == si1;
if(si0){
goto L25;
}
si0=l2;
si1=1U;
si0+=si1;
l17=si0;
si0=l2;
si1=l15;
si0=si0 < si1;
if(si0){
goto L24;
}
si0=l17;
si1=l15;
si2=17680068U;
f597(i,si0,si1,si2);
UNREACHABLE;
L25:;
si0=17680068U;
f684(i,si0);
UNREACHABLE;
L24:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+4U);
si1=l3;
si1=i32_load(&i->m0,(U64)si1+8U);
l13=si1;
si0-=si1;
si1=l2;
si0=si0 > si1;
if(si0){
goto L26;
}
si0=l3;
si1=l13;
si2=l17;
f14670(i,si0,si1,si2);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+8U);
l13=si0;
L26:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
si1=l13;
si0+=si1;
si1=l14;
si2=l17;
si0=f15143(i,si0,si1,si2);
si0=l13;
si1=l17;
si0+=si1;
l2=si0;
si0=1U;
l13=si0;
si0=l17;
l15=si0;
L11:;
si0=l3;
si1=l2;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l1;
si1=l15;
si2=l7;
si1+=si2;
l2=si1;
si2=l9;
si3=l2;
si4=l9;
si3=si3 < si4;
si1=si3?si1:si2;
l7=si1;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l15;
si1=l12;
si0+=si1;
l12=si0;
si0=l13;
if(si0){
goto L27;
}
si0=l15;
if(si0){
goto L2;
}
L27:;
}
si0=l0;
si1=4U;
i32_store8(&i->m0,(U64)si0,si1);
si0=l0;
si1=l12;
i32_store(&i->m0,(U64)si0+4U,si1);
L1:;
si0=l4;
si1=16U;
si0+=si1;
i->g0=si0;
L0:;
}

U32 f14770(rustpythonInstance*i) {
U32 l0=0;
U32 si0,si1,si2;
si0=i->g0;
si1=16U;
si0-=si1;
l0=si0;
i->g0=si0;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18663152U);
si1=3U;
si0=si0 == si1;
if(si0){
goto L1;
}
si0=l0;
si1=18663120U;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l0;
si2=15U;
si1+=si2;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l0;
si1=4U;
si0+=si1;
f14771(i,si0);
L1:;
si0=l0;
si1=16U;
si0+=si1;
i->g0=si0;
si0=18663120U;
L0:;
return si0;
}

void f14771(rustpythonInstance*i,U32 l0) {
U32 l1=0;
U32 l2=0;
U32 si0,si1,si2;
U64 sj1;
si0=i->g0;
si1=32U;
si0-=si1;
l1=si0;
i->g0=si0;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18663152U);
l2=si0;
si1=2U;
si0=si0 < si1;
if(si0){
goto L5;
}
si0=l2;
si1=-2U;
si0+=si1;
switch(si0){
case 0:
goto L1;
case 1:
goto L4;
default:
goto L1;
}
L5:;
si0=0U;
si1=2U;
i32_store8(&i->m0,(U64)si0+18663152U,si1);
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si0=!(si0);
if(si0){
goto L3;
}
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=1024U;
si0=f15022(i,si0);
l0=si0;
si0=!(si0);
if(si0){
goto L2;
}
si0=l2;
si1=0U;
i32_store8(&i->m0,(U64)si0+28U,si1);
si0=l2;
si1=0U;
i32_store8(&i->m0,(U64)si0+24U,si1);
si0=l2;
sj1=1024ULL;
i64_store(&i->m0,(U64)si0+16U,sj1);
si0=l2;
si1=l0;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l2;
si1=0U;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l2;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=0U;
si1=3U;
i32_store8(&i->m0,(U64)si0+18663152U,si1);
L4:;
si0=l1;
si1=32U;
si0+=si1;
i->g0=si0;
goto L0;
L3:;
si0=17677284U;
si1=43U;
si2=17680516U;
f604(i,si0,si1,si2);
UNREACHABLE;
L2:;
si0=1U;
si1=1024U;
f52(i,si0,si1);
UNREACHABLE;
L1:;
si0=l1;
si1=20U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si1=1U;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l1;
si1=17683468U;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l1;
si1=17677000U;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l1;
si1=8U;
si0+=si1;
si1=17680500U;
f614(i,si0,si1);
UNREACHABLE;
L0:;
}

U32 f14772(rustpythonInstance*i,U32 l0) {
U32 l1=0;
U32 l2=0;
U32 si0,si1,si2;
U64 sj1;
si0=i->g0;
si1=32U;
si0-=si1;
l1=si0;
i->g0=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
l0=si0;
si0=i32_load(&i->m0,(U64)si0);
si1=18663232U;
si0=si0 == si1;
if(si0){
goto L4;
}
si0=l0;
si0=i32_load8_u(&i->m0,(U64)si0+28U);
l2=si0;
si0=l0;
si1=1U;
i32_store8(&i->m0,(U64)si0+28U,si1);
si0=l1;
si1=l2;
i32_store8(&i->m0,(U64)si0+7U,si1);
si0=l2;
if(si0){
goto L1;
}
si0=l0;
si1=1U;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=18663232U;
i32_store(&i->m0,(U64)si0,si1);
goto L3;
L4:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+4U);
si1=1U;
si0+=si1;
l2=si0;
si0=!(si0);
if(si0){
goto L2;
}
si0=l0;
si1=l2;
i32_store(&i->m0,(U64)si0+4U,si1);
L3:;
si0=l1;
si1=32U;
si0+=si1;
i->g0=si0;
si0=l0;
goto L0;
L2:;
si0=17680532U;
si1=38U;
si2=17680604U;
f634(i,si0,si1,si2);
UNREACHABLE;
L1:;
si0=l1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0+20U,sj1);
si0=l1;
si1=17677000U;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l1;
si1=1U;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l1;
si1=17680376U;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l1;
si1=7U;
si0+=si1;
si1=l1;
si2=8U;
si1+=si2;
f14693(i,si0,si1);
UNREACHABLE;
L0:;
return si0;
}

void f14773(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 l8=0;
U32 si0,si1,si2,si3,si4,si5;
si0=i->g0;
si1=32U;
si0-=si1;
l4=si0;
i->g0=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si0=i32_load(&i->m0,(U64)si0+8U);
if(si0){
goto L3;
}
si0=l1;
si1=-1U;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l4;
si1=8U;
si0+=si1;
si1=10U;
si2=l2;
si3=l3;
f682(i,si0,si1,si2,si3);
si0=l1;
si1=12U;
si0+=si1;
l5=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+8U);
if(si0){
goto L5;
}
si0=l1;
si1=20U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
if(si0){
goto L8;
}
si0=0U;
l6=si0;
goto L7;
L8:;
si0=l6;
si1=l5;
si1=i32_load(&i->m0,(U64)si1);
si0+=si1;
si1=-1U;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=10U;
si0=si0 != si1;
if(si0){
goto L7;
}
si0=l4;
si1=16U;
si0+=si1;
si1=l5;
f14753(i,si0,si1);
si0=l4;
si0=i32_load8_u(&i->m0,(U64)si0+16U);
l6=si0;
si1=4U;
si0=si0 != si1;
if(si0){
goto L6;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+20U);
l6=si0;
L7:;
si0=l1;
si1=16U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=l6;
si0-=si1;
si1=l3;
si0=si0 > si1;
if(si0){
goto L4;
}
si0=l0;
si1=l5;
si2=l2;
si3=l3;
f14754(i,si0,si1,si2,si3);
goto L1;
L6:;
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
si0=l0;
si1=l6;
i32_store8(&i->m0,(U64)si0,si1);
goto L1;
L5:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+12U);
l6=si0;
si0=l4;
si1=16U;
si0+=si1;
si1=l5;
f14753(i,si0,si1);
si0=l4;
si0=i32_load8_u(&i->m0,(U64)si0+16U);
l5=si0;
si1=4U;
si0=si0 == si1;
if(si0){
goto L2;
}
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
si0=l0;
si1=l5;
i32_store8(&i->m0,(U64)si0,si1);
goto L1;
L4:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+12U);
si1=l6;
si0+=si1;
si1=l2;
si2=l3;
si0=f15143(i,si0,si1,si2);
si0=l0;
si1=l3;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l1;
si1=l6;
si2=l3;
si1+=si2;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l0;
si1=4U;
i32_store8(&i->m0,(U64)si0,si1);
goto L1;
L3:;
si0=17679400U;
si1=16U;
si2=l4;
si3=31U;
si2+=si3;
si3=17679416U;
si4=17679476U;
f641(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L2:;
si0=l6;
si1=1U;
si0+=si1;
l6=si0;
si1=l3;
si0=si0 > si1;
if(si0){
goto L12;
}
si0=l4;
si1=l6;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l4;
si1=l2;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=1U;
si1=l4;
si2=16U;
si1+=si2;
si2=1U;
si3=l4;
si4=24U;
si3+=si4;
si0=wasi_snapshot_preview1__fd_write(i,si0,si1,si2,si3);
l7=si0;
if(si0){
goto L14;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0+24U);
l5=si0;
goto L13;
L14:;
si0=l6;
l5=si0;
si0=l7;
si1=65535U;
si0&=si1;
l7=si0;
si1=8U;
si0=si0 != si1;
if(si0){
goto L11;
}
L13:;
si0=l5;
if(si0){
goto L15;
}
si0=l0;
si1=4U;
i32_store8(&i->m0,(U64)si0,si1);
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0+4U,si1);
goto L1;
L15:;
si0=l6;
si1=l5;
si0=si0 <= si1;
if(si0){
goto L16;
}
si0=l6;
si1=l5;
si0-=si1;
l6=si0;
si1=l1;
si2=16U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
l8=si1;
si0=si0 <= si1;
if(si0){
goto L17;
}
si0=l8;
si1=l3;
si2=l5;
si1-=si2;
l3=si1;
si0=si0 > si1;
if(si0){
goto L10;
}
si0=l4;
si1=10U;
si2=l2;
si3=l5;
si2+=si3;
l7=si2;
si3=l8;
f682(i,si0,si1,si2,si3);
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L18;
}
si0=l8;
l6=si0;
goto L9;
L18:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+4U);
si1=1U;
si0+=si1;
l6=si0;
si1=l8;
si0=si0 <= si1;
if(si0){
goto L9;
}
si0=l6;
si1=l8;
si2=17678444U;
f597(i,si0,si1,si2);
UNREACHABLE;
L17:;
si0=l2;
si1=l5;
si0+=si1;
l7=si0;
goto L9;
L16:;
si0=l3;
si1=l5;
si0=si0 < si1;
if(si0){
goto L19;
}
si0=l2;
si1=l5;
si0+=si1;
l7=si0;
si0=l3;
si1=l5;
si0-=si1;
l6=si0;
goto L9;
L19:;
si0=l5;
si1=l3;
si2=17678460U;
f593(i,si0,si1,si2);
UNREACHABLE;
L12:;
si0=l6;
si1=l3;
si2=17678412U;
f597(i,si0,si1,si2);
UNREACHABLE;
L11:;
si0=l0;
si1=0U;
i32_store16(&i->m0,(U64)si0+1U,si1);
si0=l0;
si1=l7;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=0U;
i32_store8(&i->m0,(U64)si0,si1);
si0=l0;
si1=3U;
si0+=si1;
si1=0U;
i32_store8(&i->m0,(U64)si0,si1);
goto L1;
L10:;
si0=l8;
si1=l3;
si2=17678428U;
f597(i,si0,si1,si2);
UNREACHABLE;
L9:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+12U);
si1=l1;
si2=20U;
si1+=si2;
l8=si1;
si1=i32_load(&i->m0,(U64)si1);
l3=si1;
si0+=si1;
si1=l7;
si2=l1;
si3=16U;
si2+=si3;
si2=i32_load(&i->m0,(U64)si2);
si3=l3;
si2-=si3;
l2=si2;
si3=l6;
si4=l2;
si5=l6;
si4=si4 < si5;
si2=si4?si2:si3;
l2=si2;
si0=f15143(i,si0,si1,si2);
si0=l0;
si1=l2;
si2=l5;
si1+=si2;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l8;
si1=l2;
si2=l3;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=4U;
i32_store8(&i->m0,(U64)si0,si1);
L1:;
si0=l1;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+8U);
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l4;
si1=32U;
si0+=si1;
i->g0=si0;
L0:;
}

void f14774(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 l3=0;
U32 si0,si1,si2,si3,si4;
U64 sj1;
si0=i->g0;
si1=32U;
si0-=si1;
l2=si0;
i->g0=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si0=i32_load(&i->m0,(U64)si0);
si1=18663232U;
si0=si0 == si1;
if(si0){
goto L4;
}
si0=l1;
si0=i32_load8_u(&i->m0,(U64)si0+28U);
l3=si0;
si0=l1;
si1=1U;
i32_store8(&i->m0,(U64)si0+28U,si1);
si0=l2;
si1=l3;
i32_store8(&i->m0,(U64)si0+7U,si1);
si0=l3;
if(si0){
goto L1;
}
si0=l1;
si1=1U;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l1;
si1=18663232U;
i32_store(&i->m0,(U64)si0,si1);
goto L3;
L4:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
si1=1U;
si0+=si1;
l3=si0;
si0=!(si0);
if(si0){
goto L2;
}
si0=l1;
si1=l3;
i32_store(&i->m0,(U64)si0+4U,si1);
L3:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+8U);
if(si0){
goto L7;
}
si0=l1;
si1=-1U;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l2;
si1=8U;
si0+=si1;
si1=l1;
si2=12U;
si1+=si2;
f14753(i,si0,si1);
si0=l2;
si0=i32_load8_u(&i->m0,(U64)si0+8U);
si1=4U;
si0=si0 != si1;
if(si0){
goto L6;
}
si0=l0;
si1=4U;
i32_store(&i->m0,(U64)si0,si1);
goto L5;
L7:;
si0=17679400U;
si1=16U;
si2=l2;
si3=8U;
si2+=si3;
si3=17679416U;
si4=17679492U;
f641(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L6:;
si0=l0;
si1=l2;
sj1=i64_load(&i->m0,(U64)si1+8U);
i64_store(&i->m0,(U64)si0,sj1);
L5:;
si0=l1;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+8U);
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l1;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+4U);
si2=-1U;
si1+=si2;
l0=si1;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
if(si0){
goto L8;
}
si0=l1;
si1=0U;
i32_store8(&i->m0,(U64)si0+28U,si1);
si0=l1;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
L8:;
si0=l2;
si1=32U;
si0+=si1;
i->g0=si0;
goto L0;
L2:;
si0=17680532U;
si1=38U;
si2=17680604U;
f634(i,si0,si1,si2);
UNREACHABLE;
L1:;
si0=l2;
sj1=0ULL;
i64_store(&i->m0,(U64)si0+20U,sj1);
si0=l2;
si1=17677000U;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l2;
si1=1U;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l2;
si1=17680376U;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l2;
si1=7U;
si0+=si1;
si1=l2;
si2=8U;
si1+=si2;
f14693(i,si0,si1);
UNREACHABLE;
L0:;
}

void f14775(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U32 l4=0;
U32 si0,si1,si2;
U64 sj1;
si0=i->g0;
si1=32U;
si0-=si1;
l3=si0;
i->g0=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si0=i32_load(&i->m0,(U64)si0);
si1=18663232U;
si0=si0 == si1;
if(si0){
goto L4;
}
si0=l1;
si0=i32_load8_u(&i->m0,(U64)si0+28U);
l4=si0;
si0=l1;
si1=1U;
i32_store8(&i->m0,(U64)si0+28U,si1);
si0=l3;
si1=l4;
i32_store8(&i->m0,(U64)si0+4U,si1);
si0=l4;
if(si0){
goto L1;
}
si0=l1;
si1=1U;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l1;
si1=18663232U;
i32_store(&i->m0,(U64)si0,si1);
goto L3;
L4:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
si1=1U;
si0+=si1;
l4=si0;
si0=!(si0);
if(si0){
goto L2;
}
si0=l1;
si1=l4;
i32_store(&i->m0,(U64)si0+4U,si1);
L3:;
si0=l3;
si1=l1;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l3;
si1=4U;
i32_store8(&i->m0,(U64)si0+8U,si1);
si0=l3;
si1=l3;
si2=4U;
si1+=si2;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l3;
si1=8U;
si0+=si1;
si1=17680044U;
si2=l2;
si0=f621(i,si0,si1,si2);
si0=!(si0);
if(si0){
goto L6;
}
si0=l3;
si0=i32_load8_u(&i->m0,(U64)si0+8U);
si1=4U;
si0=si0 != si1;
if(si0){
goto L7;
}
si0=l0;
si1=17679960U;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=2U;
i32_store8(&i->m0,(U64)si0,si1);
goto L5;
L7:;
si0=l0;
si1=l3;
sj1=i64_load(&i->m0,(U64)si1+8U);
i64_store(&i->m0,(U64)si0,sj1);
goto L5;
L6:;
si0=l0;
si1=4U;
i32_store8(&i->m0,(U64)si0,si1);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+12U);
l0=si0;
si0=l3;
si0=i32_load8_u(&i->m0,(U64)si0+8U);
l1=si0;
si1=4U;
si0=si0 > si1;
if(si0){
goto L8;
}
si0=l1;
si1=3U;
si0=si0 != si1;
if(si0){
goto L5;
}
L8:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si1=l0;
si2=4U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
l1=si1;
si1=i32_load(&i->m0,(U64)si1);
TF(i->t0,si1,void (*)(rustpythonInstance*,U32))(i,si0);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
si0=!(si0);
if(si0){
goto L9;
}
si0=l2;
f15024(i,si0);
L9:;
si0=l0;
f15024(i,si0);
L5:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+4U);
l1=si0;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+4U);
si2=-1U;
si1+=si2;
l0=si1;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
if(si0){
goto L10;
}
si0=l1;
si1=0U;
i32_store8(&i->m0,(U64)si0+28U,si1);
si0=l1;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
L10:;
si0=l3;
si1=32U;
si0+=si1;
i->g0=si0;
goto L0;
L2:;
si0=17680532U;
si1=38U;
si2=17680604U;
f634(i,si0,si1,si2);
UNREACHABLE;
L1:;
si0=l3;
sj1=0ULL;
i64_store(&i->m0,(U64)si0+20U,sj1);
si0=l3;
si1=17677000U;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l3;
si1=1U;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l3;
si1=17680376U;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l3;
si1=4U;
si0+=si1;
si1=l3;
si2=8U;
si1+=si2;
f14693(i,si0,si1);
UNREACHABLE;
L0:;
}

U32 f14776(rustpythonInstance*i,U32 l0) {
U32 l1=0;
U32 l2=0;
U32 si0,si1,si2;
U64 sj1;
si0=i->g0;
si1=32U;
si0-=si1;
l1=si0;
i->g0=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
l0=si0;
si0=i32_load(&i->m0,(U64)si0);
si1=18663232U;
si0=si0 == si1;
if(si0){
goto L4;
}
si0=l0;
si0=i32_load8_u(&i->m0,(U64)si0+12U);
l2=si0;
si0=l0;
si1=1U;
i32_store8(&i->m0,(U64)si0+12U,si1);
si0=l1;
si1=l2;
i32_store8(&i->m0,(U64)si0+7U,si1);
si0=l2;
if(si0){
goto L1;
}
si0=l0;
si1=1U;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=18663232U;
i32_store(&i->m0,(U64)si0,si1);
goto L3;
L4:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+4U);
si1=1U;
si0+=si1;
l2=si0;
si0=!(si0);
if(si0){
goto L2;
}
si0=l0;
si1=l2;
i32_store(&i->m0,(U64)si0+4U,si1);
L3:;
si0=l1;
si1=32U;
si0+=si1;
i->g0=si0;
si0=l0;
goto L0;
L2:;
si0=17680532U;
si1=38U;
si2=17680604U;
f634(i,si0,si1,si2);
UNREACHABLE;
L1:;
si0=l1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0+20U,sj1);
si0=l1;
si1=17677000U;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l1;
si1=1U;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l1;
si1=17680376U;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l1;
si1=7U;
si0+=si1;
si1=l1;
si2=8U;
si1+=si2;
f14693(i,si0,si1);
UNREACHABLE;
L0:;
return si0;
}

void f14777(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U32 l5=0;
U32 si0,si1,si2,si3,si4;
U64 sj1;
si0=i->g0;
si1=32U;
si0-=si1;
l4=si0;
i->g0=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si0=i32_load(&i->m0,(U64)si0);
si1=18663232U;
si0=si0 == si1;
if(si0){
goto L4;
}
si0=l1;
si0=i32_load8_u(&i->m0,(U64)si0+12U);
l5=si0;
si0=l1;
si1=1U;
i32_store8(&i->m0,(U64)si0+12U,si1);
si0=l4;
si1=l5;
i32_store8(&i->m0,(U64)si0+28U,si1);
si0=l5;
if(si0){
goto L1;
}
si0=l1;
si1=1U;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l1;
si1=18663232U;
i32_store(&i->m0,(U64)si0,si1);
goto L3;
L4:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
si1=1U;
si0+=si1;
l5=si0;
si0=!(si0);
if(si0){
goto L2;
}
si0=l1;
si1=l5;
i32_store(&i->m0,(U64)si0+4U,si1);
L3:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+8U);
if(si0){
goto L7;
}
si0=l1;
si1=-1U;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l1;
si1=-12U;
si0=si0 == si1;
if(si0){
goto L7;
}
si0=l4;
si1=l3;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l4;
si1=l2;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=2U;
si1=l4;
si2=4U;
si1+=si2;
si2=1U;
si3=l4;
si4=28U;
si3+=si4;
si0=wasi_snapshot_preview1__fd_write(i,si0,si1,si2,si3);
l2=si0;
if(si0){
goto L9;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0+28U);
l2=si0;
si0=4U;
l5=si0;
goto L8;
L9:;
si0=0U;
l5=si0;
si0=l2;
si1=65535U;
si0&=si1;
l2=si0;
si1=8U;
si0=si0 == si1;
if(si0){
goto L6;
}
L8:;
si0=l0;
si1=l2;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l5;
i32_store(&i->m0,(U64)si0,si1);
goto L5;
L7:;
si0=17679400U;
si1=16U;
si2=l4;
si3=4U;
si2+=si3;
si3=17679416U;
si4=17679524U;
f641(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L6:;
si0=l0;
si1=4U;
i32_store8(&i->m0,(U64)si0,si1);
si0=l0;
si1=l3;
i32_store(&i->m0,(U64)si0+4U,si1);
L5:;
si0=l1;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+8U);
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l1;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+4U);
si2=-1U;
si1+=si2;
l0=si1;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
if(si0){
goto L10;
}
si0=l1;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
si1=12U;
si0+=si1;
si1=0U;
i32_store8(&i->m0,(U64)si0,si1);
L10:;
si0=l4;
si1=32U;
si0+=si1;
i->g0=si0;
goto L0;
L2:;
si0=17680532U;
si1=38U;
si2=17680604U;
f634(i,si0,si1,si2);
UNREACHABLE;
L1:;
si0=l4;
sj1=0ULL;
i64_store(&i->m0,(U64)si0+16U,sj1);
si0=l4;
si1=17677000U;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l4;
si1=1U;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l4;
si1=17680376U;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l4;
si1=28U;
si0+=si1;
si1=l4;
si2=4U;
si1+=si2;
f14693(i,si0,si1);
UNREACHABLE;
L0:;
}

void f14778(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U32 l4=0;
U32 si0,si1,si2;
U64 sj1;
si0=i->g0;
si1=32U;
si0-=si1;
l3=si0;
i->g0=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si0=i32_load(&i->m0,(U64)si0);
si1=18663232U;
si0=si0 == si1;
if(si0){
goto L4;
}
si0=l1;
si0=i32_load8_u(&i->m0,(U64)si0+12U);
l4=si0;
si0=l1;
si1=1U;
i32_store8(&i->m0,(U64)si0+12U,si1);
si0=l3;
si1=l4;
i32_store8(&i->m0,(U64)si0+4U,si1);
si0=l4;
if(si0){
goto L1;
}
si0=l1;
si1=1U;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l1;
si1=18663232U;
i32_store(&i->m0,(U64)si0,si1);
goto L3;
L4:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
si1=1U;
si0+=si1;
l4=si0;
si0=!(si0);
if(si0){
goto L2;
}
si0=l1;
si1=l4;
i32_store(&i->m0,(U64)si0+4U,si1);
L3:;
si0=l3;
si1=l1;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l3;
si1=4U;
i32_store8(&i->m0,(U64)si0+8U,si1);
si0=l3;
si1=l3;
si2=4U;
si1+=si2;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l3;
si1=8U;
si0+=si1;
si1=17679972U;
si2=l2;
si0=f621(i,si0,si1,si2);
si0=!(si0);
if(si0){
goto L6;
}
si0=l3;
si0=i32_load8_u(&i->m0,(U64)si0+8U);
si1=4U;
si0=si0 != si1;
if(si0){
goto L7;
}
si0=l0;
si1=17679960U;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=2U;
i32_store8(&i->m0,(U64)si0,si1);
goto L5;
L7:;
si0=l0;
si1=l3;
sj1=i64_load(&i->m0,(U64)si1+8U);
i64_store(&i->m0,(U64)si0,sj1);
goto L5;
L6:;
si0=l0;
si1=4U;
i32_store8(&i->m0,(U64)si0,si1);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+12U);
l0=si0;
si0=l3;
si0=i32_load8_u(&i->m0,(U64)si0+8U);
l1=si0;
si1=4U;
si0=si0 > si1;
if(si0){
goto L8;
}
si0=l1;
si1=3U;
si0=si0 != si1;
if(si0){
goto L5;
}
L8:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si1=l0;
si2=4U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
l1=si1;
si1=i32_load(&i->m0,(U64)si1);
TF(i->t0,si1,void (*)(rustpythonInstance*,U32))(i,si0);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
si0=!(si0);
if(si0){
goto L9;
}
si0=l2;
f15024(i,si0);
L9:;
si0=l0;
f15024(i,si0);
L5:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+4U);
l1=si0;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+4U);
si2=-1U;
si1+=si2;
l0=si1;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
if(si0){
goto L10;
}
si0=l1;
si1=0U;
i32_store8(&i->m0,(U64)si0+12U,si1);
si0=l1;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
L10:;
si0=l3;
si1=32U;
si0+=si1;
i->g0=si0;
goto L0;
L2:;
si0=17680532U;
si1=38U;
si2=17680604U;
f634(i,si0,si1,si2);
UNREACHABLE;
L1:;
si0=l3;
sj1=0ULL;
i64_store(&i->m0,(U64)si0+20U,sj1);
si0=l3;
si1=17677000U;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l3;
si1=1U;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l3;
si1=17680376U;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l3;
si1=4U;
si0+=si1;
si1=l3;
si2=8U;
si1+=si2;
f14693(i,si0,si1);
UNREACHABLE;
L0:;
}

void f14779(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 si0,si1,si2,si3,si4;
si0=i->g0;
si1=16U;
si0-=si1;
l4=si0;
i->g0=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si0=i32_load(&i->m0,(U64)si0+8U);
if(si0){
goto L1;
}
si0=l5;
si1=-1U;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l5;
si1=-12U;
si0=si0 == si1;
if(si0){
goto L1;
}
si0=4U;
l6=si0;
si0=l3;
if(si0){
goto L5;
}
goto L4;
L5:;
L7:;
{
si0=l4;
si1=l3;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l4;
si1=l2;
i32_store(&i->m0,(U64)si0,si1);
si0=2U;
si1=l4;
si2=1U;
si3=l4;
si4=8U;
si3+=si4;
si0=wasi_snapshot_preview1__fd_write(i,si0,si1,si2,si3);
l1=si0;
if(si0){
goto L9;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0+8U);
l1=si0;
if(si0){
goto L10;
}
si0=17679916U;
l1=si0;
si0=2U;
l6=si0;
goto L4;
L10:;
si0=l3;
si1=l1;
si0=si0 < si1;
if(si0){
goto L11;
}
si0=l2;
si1=l1;
si0+=si1;
l2=si0;
si0=l3;
si1=l1;
si0-=si1;
l3=si0;
goto L8;
L11:;
si0=l1;
si1=l3;
si2=17679928U;
f593(i,si0,si1,si2);
UNREACHABLE;
L9:;
si0=l1;
si1=65535U;
si0&=si1;
l1=si0;
si0=f14744(i,si0);
si1=255U;
si0&=si1;
si1=35U;
si0=si0 != si1;
if(si0){
goto L6;
}
L8:;
si0=l3;
if(si0){
goto L7;
}
}
si0=17679916U;
l1=si0;
goto L4;
L6:;
si0=0U;
l6=si0;
si0=l1;
si1=8U;
si0=si0 == si1;
if(si0){
goto L3;
}
L4:;
si0=l0;
si1=l1;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l6;
i32_store(&i->m0,(U64)si0,si1);
goto L2;
L3:;
si0=l0;
si1=4U;
i32_store8(&i->m0,(U64)si0,si1);
L2:;
si0=l5;
si1=l5;
si1=i32_load(&i->m0,(U64)si1+8U);
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l4;
si1=16U;
si0+=si1;
i->g0=si0;
goto L0;
L1:;
si0=17679400U;
si1=16U;
si2=l4;
si3=15U;
si2+=si3;
si3=17679416U;
si4=17679540U;
f641(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L0:;
}

U32 f14780(rustpythonInstance*i,U32 l0) {
U32 l1=0;
U32 l2=0;
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 si0,si1,si2;
U64 sj1;
si0=i->g0;
si1=32U;
si0-=si1;
l1=si0;
i->g0=si0;
si0=0U;
l2=si0;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18663089U);
si0=!(si0);
if(si0){
goto L2;
}
si0=0U;
l2=si0;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18663236U);
if(si0){
goto L3;
}
si0=0U;
si1=1U;
i32_store8(&i->m0,(U64)si0+18663236U,si1);
si0=0U;
si1=0U;
i32_store(&i->m0,(U64)si0+18663240U,si1);
goto L2;
L3:;
si0=0U;
l2=si0;
si0=0U;
si0=i32_load(&i->m0,(U64)si0+18663240U);
l3=si0;
si0=0U;
si1=0U;
i32_store(&i->m0,(U64)si0+18663240U,si1);
si0=l3;
si0=!(si0);
if(si0){
goto L2;
}
si0=l3;
si0=i32_load8_u(&i->m0,(U64)si0+8U);
l2=si0;
si0=1U;
l4=si0;
si0=l3;
si1=1U;
i32_store8(&i->m0,(U64)si0+8U,si1);
si0=l1;
si1=l2;
i32_store8(&i->m0,(U64)si0+7U,si1);
si0=l2;
if(si0){
goto L1;
}
si0=0U;
si0=i32_load(&i->m0,(U64)si0+18663204U);
si1=2147483647U;
si0&=si1;
si0=!(si0);
if(si0){
goto L4;
}
si0=f14767(i);
l4=si0;
L4:;
si0=l1;
si1=4U;
i32_store8(&i->m0,(U64)si0+8U,si1);
si0=l1;
si1=l3;
si2=12U;
si1+=si2;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l1;
si1=8U;
si0+=si1;
si1=17679996U;
si2=l0;
si0=f621(i,si0,si1,si2);
l0=si0;
si0=l1;
si0=i32_load8_u(&i->m0,(U64)si0+8U);
l2=si0;
si0=l0;
si0=!(si0);
if(si0){
goto L6;
}
si0=l2;
si1=4U;
si0=si0 == si1;
if(si0){
goto L5;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+12U);
l0=si0;
si0=l1;
si0=i32_load8_u(&i->m0,(U64)si0+8U);
l2=si0;
si1=4U;
si0=si0 > si1;
if(si0){
goto L7;
}
si0=l2;
si1=3U;
si0=si0 != si1;
if(si0){
goto L5;
}
L7:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
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
goto L8;
}
si0=l5;
f15024(i,si0);
L8:;
si0=l0;
f15024(i,si0);
goto L5;
L6:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+12U);
l0=si0;
si0=l2;
si1=4U;
si0=si0 > si1;
if(si0){
goto L9;
}
si0=l2;
si1=3U;
si0=si0 != si1;
if(si0){
goto L5;
}
L9:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
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
goto L10;
}
si0=l5;
f15024(i,si0);
L10:;
si0=l0;
f15024(i,si0);
L5:;
si0=l4;
si0=!(si0);
if(si0){
goto L11;
}
si0=0U;
si0=i32_load(&i->m0,(U64)si0+18663204U);
si1=2147483647U;
si0&=si1;
si0=!(si0);
if(si0){
goto L11;
}
si0=f14767(i);
if(si0){
goto L11;
}
si0=l3;
si1=1U;
i32_store8(&i->m0,(U64)si0+9U,si1);
L11:;
si0=l3;
si1=0U;
i32_store8(&i->m0,(U64)si0+8U,si1);
si0=0U;
si0=i32_load(&i->m0,(U64)si0+18663240U);
l0=si0;
si0=0U;
si1=l3;
i32_store(&i->m0,(U64)si0+18663240U,si1);
si0=l0;
if(si0){
goto L12;
}
si0=1U;
l2=si0;
goto L2;
L12:;
si0=l0;
si1=l0;
si1=i32_load(&i->m0,(U64)si1);
l3=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=1U;
l2=si0;
si0=l3;
si1=1U;
si0=si0 != si1;
if(si0){
goto L2;
}
si0=l0;
f14713(i,si0);
L2:;
si0=l1;
si1=32U;
si0+=si1;
i->g0=si0;
si0=l2;
goto L0;
L1:;
si0=l1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0+20U,sj1);
si0=l1;
si1=17677000U;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l1;
si1=1U;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l1;
si1=17680376U;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l1;
si1=7U;
si0+=si1;
si1=l1;
si2=8U;
si1+=si2;
f14693(i,si0,si1);
UNREACHABLE;
L0:;
return si0;
}

void f14781(rustpythonInstance*i,U32 l0) {
U32 l1=0;
U32 si0,si1,si2,si3,si4;
U64 sj1;
si0=i->g0;
si1=80U;
si0-=si1;
l1=si0;
i->g0=si0;
si0=l1;
si1=6U;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l1;
si1=17679612U;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l0;
si0=f14780(i,si0);
if(si0){
goto L2;
}
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18663152U);
si1=3U;
si0=si0 == si1;
if(si0){
goto L3;
}
si0=l1;
si1=18663120U;
i32_store(&i->m0,(U64)si0+40U,si1);
si0=l1;
si1=l1;
si2=64U;
si1+=si2;
i32_store(&i->m0,(U64)si0+44U,si1);
si0=l1;
si1=40U;
si0+=si1;
f14771(i,si0);
L3:;
si0=l1;
si1=18663120U;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l1;
si1=l1;
si2=28U;
si1+=si2;
i32_store(&i->m0,(U64)si0+40U,si1);
si0=l1;
si1=16U;
si0+=si1;
si1=l1;
si2=40U;
si1+=si2;
si2=l0;
f14775(i,si0,si1,si2);
si0=l1;
si0=i32_load8_u(&i->m0,(U64)si0+16U);
si1=4U;
si0=si0 != si1;
if(si0){
goto L1;
}
L2:;
si0=l1;
si1=80U;
si0+=si1;
i->g0=si0;
goto L0;
L1:;
si0=l1;
si1=l1;
sj1=i64_load(&i->m0,(U64)si1+16U);
i64_store(&i->m0,(U64)si0+32U,sj1);
si0=l1;
si1=76U;
si0+=si1;
si1=294U;
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
si1=295U;
i32_store(&i->m0,(U64)si0+68U,si1);
si0=l1;
si1=l1;
si2=32U;
si1+=si2;
i32_store(&i->m0,(U64)si0+72U,si1);
si0=l1;
si1=l1;
si2=8U;
si1+=si2;
i32_store(&i->m0,(U64)si0+64U,si1);
si0=l1;
si1=40U;
si0+=si1;
si1=17679580U;
si2=2U;
si3=l1;
si4=64U;
si3+=si4;
si4=2U;
f14677(i,si0,si1,si2,si3,si4);
si0=l1;
si1=40U;
si0+=si1;
si1=17679596U;
f614(i,si0,si1);
UNREACHABLE;
L0:;
}

void f14782(rustpythonInstance*i,U32 l0) {
U32 l1=0;
U32 si0,si1,si2,si3,si4;
U64 sj1;
si0=i->g0;
si1=80U;
si0-=si1;
l1=si0;
i->g0=si0;
si0=l1;
si1=6U;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l1;
si1=17679618U;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l0;
si0=f14780(i,si0);
if(si0){
goto L2;
}
si0=l1;
si1=18663156U;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l1;
si1=l1;
si2=28U;
si1+=si2;
i32_store(&i->m0,(U64)si0+40U,si1);
si0=l1;
si1=16U;
si0+=si1;
si1=l1;
si2=40U;
si1+=si2;
si2=l0;
f14778(i,si0,si1,si2);
si0=l1;
si0=i32_load8_u(&i->m0,(U64)si0+16U);
si1=4U;
si0=si0 != si1;
if(si0){
goto L1;
}
L2:;
si0=l1;
si1=80U;
si0+=si1;
i->g0=si0;
goto L0;
L1:;
si0=l1;
si1=l1;
sj1=i64_load(&i->m0,(U64)si1+16U);
i64_store(&i->m0,(U64)si0+32U,sj1);
si0=l1;
si1=76U;
si0+=si1;
si1=294U;
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
si1=295U;
i32_store(&i->m0,(U64)si0+68U,si1);
si0=l1;
si1=l1;
si2=32U;
si1+=si2;
i32_store(&i->m0,(U64)si0+72U,si1);
si0=l1;
si1=l1;
si2=8U;
si1+=si2;
i32_store(&i->m0,(U64)si0+64U,si1);
si0=l1;
si1=40U;
si0+=si1;
si1=17679580U;
si2=2U;
si3=l1;
si4=64U;
si3+=si4;
si4=2U;
f14677(i,si0,si1,si2,si3,si4);
si0=l1;
si1=40U;
si0+=si1;
si1=17679596U;
f614(i,si0,si1);
UNREACHABLE;
L0:;
}

void f14783(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U32 l5=0;
U32 si0,si1,si2,si3,si4;
si0=i->g0;
si1=16U;
si0-=si1;
l4=si0;
i->g0=si0;
si0=l3;
si0=!(si0);
if(si0){
goto L3;
}
L4:;
{
si0=l4;
si1=l3;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l4;
si1=l2;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=2U;
si1=l4;
si2=4U;
si1+=si2;
si2=1U;
si3=l4;
si4=12U;
si3+=si4;
si0=wasi_snapshot_preview1__fd_write(i,si0,si1,si2,si3);
l5=si0;
if(si0){
goto L6;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0+12U);
l5=si0;
if(si0){
goto L7;
}
si0=l0;
si1=17679916U;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=2U;
i32_store8(&i->m0,(U64)si0,si1);
goto L1;
L7:;
si0=l3;
si1=l5;
si0=si0 < si1;
if(si0){
goto L8;
}
si0=l2;
si1=l5;
si0+=si1;
l2=si0;
si0=l3;
si1=l5;
si0-=si1;
l3=si0;
goto L5;
L8:;
si0=l5;
si1=l3;
si2=17679928U;
f593(i,si0,si1,si2);
UNREACHABLE;
L6:;
si0=l5;
si1=65535U;
si0&=si1;
l5=si0;
si0=f14744(i,si0);
si1=255U;
si0&=si1;
si1=35U;
si0=si0 != si1;
if(si0){
goto L2;
}
L5:;
si0=l3;
if(si0){
goto L4;
}
}
L3:;
si0=l0;
si1=4U;
i32_store8(&i->m0,(U64)si0,si1);
goto L1;
L2:;
si0=l0;
si1=l5;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
L1:;
si0=l4;
si1=16U;
si0+=si1;
i->g0=si0;
L0:;
}

void f14784(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
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
si1=32U;
si0-=si1;
l4=si0;
i->g0=si0;
si0=l3;
si0=!(si0);
if(si0){
goto L3;
}
si0=l2;
si1=4U;
si0+=si1;
l5=si0;
si0=l3;
si1=3U;
si0<<=(si1&31);
l6=si0;
si0=l3;
si1=-1U;
si0+=si1;
si1=536870911U;
si0&=si1;
si1=1U;
si0+=si1;
l7=si0;
si0=0U;
l8=si0;
L5:;
{
si0=l5;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L4;
}
si0=l5;
si1=8U;
si0+=si1;
l5=si0;
si0=l8;
si1=1U;
si0+=si1;
l8=si0;
si0=l6;
si1=-8U;
si0+=si1;
l6=si0;
if(si0){
goto L5;
}
}
si0=l7;
l8=si0;
L4:;
si0=l3;
si1=l8;
si0=si0 >= si1;
if(si0){
goto L6;
}
si0=l8;
si1=l3;
si2=17679716U;
f593(i,si0,si1,si2);
UNREACHABLE;
L6:;
si0=l3;
si1=l8;
si0-=si1;
l9=si0;
si0=!(si0);
if(si0){
goto L3;
}
si0=l2;
si1=l8;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l10=si0;
L7:;
{
si0=2U;
si1=l10;
si2=l9;
si3=l4;
si4=8U;
si3+=si4;
si0=wasi_snapshot_preview1__fd_write(i,si0,si1,si2,si3);
l5=si0;
if(si0){
goto L10;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0+8U);
l7=si0;
if(si0){
goto L11;
}
si0=l0;
si1=17679916U;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=2U;
i32_store8(&i->m0,(U64)si0,si1);
goto L1;
L11:;
si0=l10;
si1=4U;
si0+=si1;
l5=si0;
si0=l9;
si1=3U;
si0<<=(si1&31);
l2=si0;
si0=l9;
si1=-1U;
si0+=si1;
si1=536870911U;
si0&=si1;
si1=1U;
si0+=si1;
l11=si0;
si0=0U;
l8=si0;
si0=0U;
l6=si0;
L12:;
{
si0=l5;
si0=i32_load(&i->m0,(U64)si0);
si1=l6;
si0+=si1;
l3=si0;
si1=l7;
si0=si0 > si1;
if(si0){
goto L9;
}
si0=l5;
si1=8U;
si0+=si1;
l5=si0;
si0=l8;
si1=1U;
si0+=si1;
l8=si0;
si0=l3;
l6=si0;
si0=l2;
si1=-8U;
si0+=si1;
l2=si0;
if(si0){
goto L12;
}
}
si0=l3;
l6=si0;
si0=l11;
l8=si0;
goto L9;
L10:;
si0=l5;
si1=65535U;
si0&=si1;
l5=si0;
si0=f14744(i,si0);
si1=255U;
si0&=si1;
si1=35U;
si0=si0 == si1;
if(si0){
goto L8;
}
si0=l0;
si1=l5;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
goto L1;
L9:;
si0=l9;
si1=l8;
si0=si0 < si1;
if(si0){
goto L2;
}
si0=l9;
si1=l8;
si0-=si1;
l3=si0;
si0=l10;
si1=l8;
si2=3U;
si1<<=(si2&31);
l2=si1;
si0+=si1;
l5=si0;
si0=l9;
si1=l8;
si0=si0 != si1;
if(si0){
goto L13;
}
si0=l5;
l10=si0;
si0=l3;
l9=si0;
si0=l7;
si1=l6;
si0=si0 == si1;
if(si0){
goto L8;
}
si0=l4;
si1=20U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=1U;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l4;
si1=17679772U;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l4;
si1=17677000U;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l4;
si1=8U;
si0+=si1;
si1=17679780U;
f614(i,si0,si1);
UNREACHABLE;
L13:;
si0=l10;
si1=l2;
si0+=si1;
l2=si0;
si0=i32_load(&i->m0,(U64)si0+4U);
l9=si0;
si1=l7;
si2=l6;
si1-=si2;
l8=si1;
si0=si0 < si1;
if(si0){
goto L14;
}
si0=l2;
si1=4U;
si0+=si1;
si1=l9;
si2=l8;
si1-=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=l5;
si1=i32_load(&i->m0,(U64)si1);
si2=l8;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
l10=si0;
si0=l3;
l9=si0;
goto L8;
L14:;
si0=l4;
si1=20U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=1U;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l4;
si1=17679832U;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l4;
si1=17677000U;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l4;
si1=8U;
si0+=si1;
si1=17679872U;
f614(i,si0,si1);
UNREACHABLE;
L8:;
si0=l9;
if(si0){
goto L7;
}
}
L3:;
si0=l0;
si1=4U;
i32_store8(&i->m0,(U64)si0,si1);
goto L1;
L2:;
si0=l8;
si1=l9;
si2=17679716U;
f593(i,si0,si1,si2);
UNREACHABLE;
L1:;
si0=l4;
si1=32U;
si0+=si1;
i->g0=si0;
L0:;
}

void f14785(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
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
U64 sj1;
si0=i->g0;
si1=32U;
si0-=si1;
l4=si0;
i->g0=si0;
si0=l3;
si0=!(si0);
if(si0){
goto L4;
}
si0=l2;
si1=4U;
si0+=si1;
l5=si0;
si0=l3;
si1=3U;
si0<<=(si1&31);
l6=si0;
si0=l3;
si1=-1U;
si0+=si1;
si1=536870911U;
si0&=si1;
si1=1U;
si0+=si1;
l7=si0;
si0=0U;
l8=si0;
L6:;
{
si0=l5;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L5;
}
si0=l5;
si1=8U;
si0+=si1;
l5=si0;
si0=l8;
si1=1U;
si0+=si1;
l8=si0;
si0=l6;
si1=-8U;
si0+=si1;
l6=si0;
if(si0){
goto L6;
}
}
si0=l7;
l8=si0;
L5:;
si0=l3;
si1=l8;
si0=si0 >= si1;
if(si0){
goto L7;
}
si0=l8;
si1=l3;
si2=17679716U;
f593(i,si0,si1,si2);
UNREACHABLE;
L7:;
si0=l3;
si1=l8;
si0-=si1;
l9=si0;
si0=!(si0);
if(si0){
goto L4;
}
si0=l2;
si1=l8;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l10=si0;
L8:;
{
si0=0U;
l3=si0;
si0=0U;
l6=si0;
si0=l9;
si1=-1U;
si0+=si1;
l11=si0;
si1=3U;
si0=si0 < si1;
if(si0){
goto L9;
}
si0=l10;
si1=28U;
si0+=si1;
l5=si0;
si0=0U;
l3=si0;
si0=l9;
si1=-4U;
si0&=si1;
l6=si0;
l8=si0;
L10:;
{
si0=l5;
si1=-24U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=l3;
si0+=si1;
si1=l5;
si2=-16U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
si0+=si1;
si1=l5;
si2=-8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
si0+=si1;
si1=l5;
si1=i32_load(&i->m0,(U64)si1);
si0+=si1;
l3=si0;
si0=l5;
si1=32U;
si0+=si1;
l5=si0;
si0=l8;
si1=-4U;
si0+=si1;
l8=si0;
if(si0){
goto L10;
}
}
L9:;
si0=l9;
si1=3U;
si0&=si1;
l8=si0;
si0=!(si0);
if(si0){
goto L11;
}
si0=l10;
si1=l6;
si2=3U;
si1<<=(si2&31);
si0+=si1;
si1=4U;
si0+=si1;
l5=si0;
L12:;
{
si0=l5;
si0=i32_load(&i->m0,(U64)si0);
si1=l3;
si0+=si1;
l3=si0;
si0=l5;
si1=8U;
si0+=si1;
l5=si0;
si0=l8;
si1=-1U;
si0+=si1;
l8=si0;
if(si0){
goto L12;
}
}
L11:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
si1=l1;
si1=i32_load(&i->m0,(U64)si1+8U);
l5=si1;
si0-=si1;
si1=l3;
si0=si0 >= si1;
if(si0){
goto L13;
}
si0=l1;
si1=l5;
si2=l3;
f14670(i,si0,si1,si2);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+8U);
l5=si0;
L13:;
si0=l10;
si1=l9;
si2=3U;
si1<<=(si2&31);
l12=si1;
si0+=si1;
l7=si0;
si0=l10;
l8=si0;
L14:;
{
si0=l8;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
si1=l5;
si0-=si1;
si1=l8;
si2=4U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
l6=si1;
si0=si0 >= si1;
if(si0){
goto L15;
}
si0=l1;
si1=l5;
si2=l6;
f14670(i,si0,si1,si2);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+8U);
l5=si0;
L15:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
si1=l5;
si0+=si1;
si1=l2;
si2=l6;
si0=f15143(i,si0,si1,si2);
si0=l1;
si1=l5;
si2=l6;
si1+=si2;
l5=si1;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l8;
si1=8U;
si0+=si1;
l8=si0;
si1=l7;
si0=si0 != si1;
if(si0){
goto L14;
}
}
si0=l3;
if(si0){
goto L16;
}
si0=l0;
si1=17679916U;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=2U;
i32_store8(&i->m0,(U64)si0,si1);
goto L1;
L16:;
si0=l10;
si1=4U;
si0+=si1;
l5=si0;
si0=l11;
si1=536870911U;
si0&=si1;
si1=1U;
si0+=si1;
l7=si0;
si0=0U;
l8=si0;
si0=0U;
l6=si0;
L18:;
{
si0=l5;
si0=i32_load(&i->m0,(U64)si0);
si1=l6;
si0+=si1;
l2=si0;
si1=l3;
si0=si0 > si1;
if(si0){
goto L17;
}
si0=l5;
si1=8U;
si0+=si1;
l5=si0;
si0=l8;
si1=1U;
si0+=si1;
l8=si0;
si0=l2;
l6=si0;
si0=l12;
si1=-8U;
si0+=si1;
l12=si0;
if(si0){
goto L18;
}
}
si0=l2;
l6=si0;
si0=l7;
l8=si0;
L17:;
si0=l9;
si1=l8;
si0=si0 < si1;
if(si0){
goto L3;
}
si0=l10;
si1=l8;
si2=3U;
si1<<=(si2&31);
l2=si1;
si0+=si1;
l5=si0;
si0=l9;
si1=l8;
si0=si0 != si1;
if(si0){
goto L20;
}
si0=l3;
si1=l6;
si0=si0 == si1;
if(si0){
goto L19;
}
si0=l4;
si1=20U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=1U;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l4;
si1=17679772U;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l4;
si1=17677000U;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l4;
si1=8U;
si0+=si1;
si1=17679780U;
f614(i,si0,si1);
UNREACHABLE;
L20:;
si0=l10;
si1=l2;
si0+=si1;
l2=si0;
si0=i32_load(&i->m0,(U64)si0+4U);
l7=si0;
si1=l3;
si2=l6;
si1-=si2;
l6=si1;
si0=si0 < si1;
if(si0){
goto L2;
}
si0=l2;
si1=4U;
si0+=si1;
si1=l7;
si2=l6;
si1-=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=l5;
si1=i32_load(&i->m0,(U64)si1);
si2=l6;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
L19:;
si0=l5;
l10=si0;
si0=l9;
si1=l8;
si0-=si1;
l9=si0;
if(si0){
goto L8;
}
}
L4:;
si0=l0;
si1=4U;
i32_store8(&i->m0,(U64)si0,si1);
goto L1;
L3:;
si0=l8;
si1=l9;
si2=17679716U;
f593(i,si0,si1,si2);
UNREACHABLE;
L2:;
si0=l4;
si1=20U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=1U;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l4;
si1=17679832U;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l4;
si1=17677000U;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l4;
si1=8U;
si0+=si1;
si1=17679872U;
f614(i,si0,si1);
UNREACHABLE;
L1:;
si0=l4;
si1=32U;
si0+=si1;
i->g0=si0;
L0:;
}

void f14786(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U32 si0,si1,si2;
U64 sj1;
si0=i->g0;
si1=16U;
si0-=si1;
l3=si0;
i->g0=si0;
si0=l3;
si1=4U;
i32_store8(&i->m0,(U64)si0,si1);
si0=l3;
si1=l1;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l3;
si1=17679996U;
si2=l2;
si0=f621(i,si0,si1,si2);
si0=!(si0);
if(si0){
goto L2;
}
si0=l3;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=4U;
si0=si0 != si1;
if(si0){
goto L3;
}
si0=l0;
si1=17679960U;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=2U;
i32_store8(&i->m0,(U64)si0,si1);
goto L1;
L3:;
si0=l0;
si1=l3;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
goto L1;
L2:;
si0=l0;
si1=4U;
i32_store8(&i->m0,(U64)si0,si1);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+4U);
l1=si0;
si0=l3;
si0=i32_load8_u(&i->m0,(U64)si0);
l0=si0;
si1=4U;
si0=si0 > si1;
if(si0){
goto L4;
}
si0=l0;
si1=3U;
si0=si0 != si1;
if(si0){
goto L1;
}
L4:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si1=l1;
si2=4U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
l0=si1;
si1=i32_load(&i->m0,(U64)si1);
TF(i->t0,si1,void (*)(rustpythonInstance*,U32))(i,si0);
si0=l0;
si0=i32_load(&i->m0,(U64)si0+4U);
si0=!(si0);
if(si0){
goto L5;
}
si0=l2;
f15024(i,si0);
L5:;
si0=l1;
f15024(i,si0);
L1:;
si0=l3;
si1=16U;
si0+=si1;
i->g0=si0;
L0:;
}

U32 f14787(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U32 l4=0;
U64 l5=0;
U32 l6=0;
U32 si0,si1,si2,si3;
U64 sj0,sj1;
si0=i->g0;
si1=16U;
si0-=si1;
l3=si0;
i->g0=si0;
si0=l3;
si1=8U;
si0+=si1;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+8U);
si2=l1;
si3=l2;
f14666(i,si0,si1,si2,si3);
si0=l3;
si0=i32_load8_u(&i->m0,(U64)si0+8U);
l2=si0;
si1=4U;
si0=si0 == si1;
if(si0){
goto L1;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+4U);
l4=si0;
si0=l3;
sj0=i64_load(&i->m0,(U64)si0+8U);
l5=sj0;
si0=l0;
si0=i32_load8_u(&i->m0,(U64)si0);
l1=si0;
si1=4U;
si0=si0 > si1;
if(si0){
goto L3;
}
si0=l1;
si1=3U;
si0=si0 != si1;
if(si0){
goto L2;
}
L3:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si1=l4;
si2=4U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
l1=si1;
si1=i32_load(&i->m0,(U64)si1);
TF(i->t0,si1,void (*)(rustpythonInstance*,U32))(i,si0);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
si0=!(si0);
if(si0){
goto L4;
}
si0=l6;
f15024(i,si0);
L4:;
si0=l4;
f15024(i,si0);
L2:;
si0=l0;
sj1=l5;
i64_store(&i->m0,(U64)si0,sj1);
L1:;
si0=l3;
si1=16U;
si0+=si1;
i->g0=si0;
si0=l2;
si1=4U;
si0=si0 != si1;
L0:;
return si0;
}

U32 f14788(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U32 si0,si1,si2;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+8U);
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
f14670(i,si0,si1,si2);
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

U32 f14789(rustpythonInstance*i) {
U32 l0=0;
U32 l1=0;
U32 l2=0;
U32 l3=0;
U32 si0,si1,si2;
si0=i->g0;
si1=16U;
si0-=si1;
l0=si0;
i->g0=si0;
si0=0U;
l1=si0;
si0=0U;
si0=i32_load(&i->m0,(U64)si0+18663172U);
switch(si0){
case 0:
goto L2;
case 1:
goto L1;
case 2:
goto L3;
case 3:
goto L4;
default:
goto L5;
}
L5:;
si0=17677327U;
si1=40U;
si2=17680172U;
f604(i,si0,si1,si2);
UNREACHABLE;
L4:;
si0=2U;
l1=si0;
goto L1;
L3:;
si0=1U;
l1=si0;
goto L1;
L2:;
si0=l0;
si1=4U;
si0+=si1;
si1=17677948U;
si2=14U;
f14732(i,si0,si1,si2);
si0=l0;
si0=i32_load(&i->m0,(U64)si0+4U);
l2=si0;
si0=!(si0);
if(si0){
goto L7;
}
si0=0U;
l1=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+8U);
l3=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+12U);
si1=-1U;
si0+=si1;
switch(si0){
case 0:
goto L10;
case 1:
goto L8;
case 2:
goto L8;
case 3:
goto L9;
default:
goto L8;
}
L10:;
si0=l2;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=48U;
si0=si0 == si1;
si1=1U;
si0<<=(si1&31);
l1=si0;
goto L8;
L9:;
si0=l2;
si1=17680188U;
si2=4U;
si0=f15142(i,si0,si1,si2);
si0=!(si0);
l1=si0;
L8:;
si0=l3;
si0=!(si0);
if(si0){
goto L11;
}
si0=l2;
f15024(i,si0);
L11:;
si0=l1;
si1=1U;
si0+=si1;
l2=si0;
goto L6;
L7:;
si0=3U;
l2=si0;
si0=2U;
l1=si0;
L6:;
si0=0U;
si1=l2;
i32_store(&i->m0,(U64)si0+18663172U,si1);
L1:;
si0=l0;
si1=16U;
si0+=si1;
i->g0=si0;
si0=l1;
L0:;
return si0;
}

U32 f14790(rustpythonInstance*i,U32 l0) {
U32 l1=0;
U32 l2=0;
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 l8=0;
U32 si0,si1,si2,si3;
si0=0U;
l1=si0;
si0=0U;
l2=si0;
si0=0U;
l3=si0;
si0=l0;
si0=i32_load8_u(&i->m0,(U64)si0+28U);
l4=si0;
si1=1U;
si0=si0 > si1;
if(si0){
goto L2;
}
si0=l0;
si0=i32_load8_u(&i->m0,(U64)si0+8U);
l5=si0;
si0=0U;
l1=si0;
si0=l0;
si0=i32_load8_u(&i->m0,(U64)si0+30U);
l2=si0;
if(si0){
goto L3;
}
si0=0U;
l1=si0;
si0=l5;
si1=5U;
si0=si0 < si1;
if(si0){
goto L3;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+4U);
l6=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
si0=0U;
l1=si0;
si0=0U;
l3=si0;
si0=l4;
if(si0){
goto L4;
}
si0=0U;
l3=si0;
si0=l5;
si1=6U;
si0=si0 == si1;
if(si0){
goto L4;
}
si0=2U;
l3=si0;
si0=l6;
si1=2U;
si0=si0 < si1;
if(si0){
goto L1;
}
L4:;
si0=l3;
si1=l6;
si0=si0 == si1;
if(si0){
goto L3;
}
si0=l7;
si1=l3;
si0+=si1;
l8=si0;
si0=i32_load8_u(&i->m0,(U64)si0);
l3=si0;
si0=l8;
si1=1U;
si0+=si1;
l8=si0;
si1=l7;
si2=l6;
si1+=si2;
si0=si0 == si1;
l6=si0;
si1=1U;
si0&=si1;
if(si0){
goto L6;
}
si0=l3;
si1=255U;
si0&=si1;
si1=46U;
si0=si0 != si1;
if(si0){
goto L6;
}
si0=l8;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=47U;
si0=si0 == si1;
if(si0){
goto L5;
}
goto L3;
L6:;
si0=l6;
si1=-1U;
si0^=si1;
si1=l3;
si2=255U;
si1&=si2;
si2=46U;
si1=si1 != si2;
si0|=si1;
si1=1U;
si0&=si1;
if(si0){
goto L3;
}
L5:;
si0=1U;
l1=si0;
L3:;
si0=l4;
si0=!(si0);
if(si0){
goto L7;
}
si0=0U;
l3=si0;
goto L2;
L7:;
si0=6U;
l3=si0;
si0=l5;
si1=6U;
si0=si0 != si1;
if(si0){
goto L8;
}
si0=0U;
l3=si0;
goto L2;
L8:;
si0=l5;
switch(si0){
case 0:
goto L13;
case 1:
goto L12;
case 2:
goto L2;
case 3:
goto L11;
case 4:
goto L10;
case 5:
goto L9;
default:
goto L13;
}
L13:;
si0=l0;
si1=16U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=4U;
si0+=si1;
l3=si0;
goto L2;
L12:;
si0=l0;
si1=16U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=l0;
si2=24U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
l0=si1;
si2=1U;
si1+=si2;
si2=0U;
si3=l0;
si1=si3?si1:si2;
si0+=si1;
si1=8U;
si0+=si1;
l3=si0;
goto L2;
L11:;
si0=l0;
si1=16U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=4U;
si0+=si1;
l3=si0;
goto L2;
L10:;
si0=l0;
si1=16U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=l0;
si2=24U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
l0=si1;
si2=1U;
si1+=si2;
si2=0U;
si3=l0;
si1=si3?si1:si2;
si0+=si1;
si1=2U;
si0+=si1;
l3=si0;
goto L2;
L9:;
si0=2U;
l3=si0;
L2:;
si0=l1;
si1=l2;
si0+=si1;
si1=l3;
si0+=si1;
goto L0;
L1:;
si0=2U;
si1=l6;
si2=17680216U;
f593(i,si0,si1,si2);
UNREACHABLE;
L0:;
return si0;
}

void f14791(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 l8=0;
U32 si0,si1,si2,si3;
si0=l1;
si0=f14790(i,si0);
l2=si0;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+4U);
l3=si1;
si0=si0 > si1;
if(si0){
goto L1;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
si1=l2;
si0+=si1;
l5=si0;
si0=-1U;
l6=si0;
si0=l2;
l7=si0;
L4:;
{
si0=l3;
si1=l7;
si0=si0 != si1;
if(si0){
goto L5;
}
si0=0U;
l4=si0;
goto L3;
L5:;
si0=l6;
si1=1U;
si0+=si1;
l6=si0;
si0=l7;
si1=1U;
si0+=si1;
l7=si0;
si0=l4;
si1=-1U;
si0+=si1;
l4=si0;
si1=l3;
si0+=si1;
l8=si0;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=47U;
si0=si0 != si1;
if(si0){
goto L4;
}
}
si0=l3;
si1=l6;
si0-=si1;
l2=si0;
si1=l3;
si0=si0 > si1;
if(si0){
goto L2;
}
si0=1U;
l4=si0;
si0=l8;
si1=1U;
si0+=si1;
l5=si0;
L3:;
si0=9U;
l6=si0;
si0=l3;
si1=l2;
si0-=si1;
l7=si0;
switch(si0){
case 0:
goto L7;
case 1:
goto L9;
case 2:
goto L8;
default:
goto L6;
}
L9:;
si0=l5;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=46U;
si0=si0 != si1;
if(si0){
goto L6;
}
si0=7U;
si1=10U;
si2=l1;
si2=i32_load8_u(&i->m0,(U64)si2+8U);
si3=255U;
si2&=si3;
si3=3U;
si2=si2 < si3;
si0=si2?si0:si1;
l6=si0;
goto L6;
L8:;
si0=l5;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=46U;
si0=si0 != si1;
if(si0){
goto L6;
}
si0=8U;
si1=9U;
si2=l5;
si2=i32_load8_u(&i->m0,(U64)si2+1U);
si3=46U;
si2=si2 == si3;
si0=si2?si0:si1;
l6=si0;
goto L6;
L7:;
si0=10U;
l6=si0;
L6:;
si0=l0;
si1=l6;
i32_store8(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=12U;
si0+=si1;
si1=l7;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=8U;
si0+=si1;
si1=l5;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l7;
si2=l4;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
goto L0;
L2:;
si0=l2;
si1=l3;
si2=17680232U;
f593(i,si0,si1,si2);
UNREACHABLE;
L1:;
si0=l2;
si1=l3;
si2=17680248U;
f593(i,si0,si1,si2);
UNREACHABLE;
L0:;
}

U32 f14792(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 l3=0;
U32 si0,si1;
si0=i->g0;
si1=16U;
si0-=si1;
l2=si0;
i->g0=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=l2;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+8U);
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l2;
si1=l3;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l2;
si1=8U;
si0+=si1;
si1=l1;
si0=f691(i,si0,si1);
l0=si0;
si0=l2;
si1=16U;
si0+=si1;
i->g0=si0;
si0=l0;
L0:;
return si0;
}

void f14793(rustpythonInstance*i,U32 l0) {
U32 si0;
f14719(i);
si0=l0;
f14794(i,si0);
UNREACHABLE;
L0:;
}

void f14794(rustpythonInstance*i,U32 l0) {
U32 si0;
si0=l0;
f15098(i,si0);
UNREACHABLE;
L0:;
}

void f14795(rustpythonInstance*i) {
f14725(i);
UNREACHABLE;
L0:;
}

U32 f14796(rustpythonInstance*i) {
U32 l0=0;
U32 si0,si1;
U64 sj1;
si0=i->g0;
si1=32U;
si0-=si1;
l0=si0;
i->g0=si0;
si0=l0;
si1=20U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=1U;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l0;
si1=17682872U;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l0;
si1=17677000U;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l0;
si1=8U;
si0+=si1;
si1=17682912U;
f614(i,si0,si1);
UNREACHABLE;
L0:;
return si0;
}

void f14797(rustpythonInstance*i,U32 l0) {
U32 l1=0;
U32 l2=0;
U64 l3=0;
U64 l4=0;
U32 si0,si1,si2,si3,si4;
U64 sj1,sj2,sj3;
si0=i->g0;
si1=16U;
si0-=si1;
l1=si0;
i->g0=si0;
si0=1U;
sj1=1ULL;
si2=l1;
si3=8U;
si2+=si3;
si0=wasi_snapshot_preview1__clock_time_get(i,si0,sj1,si2);
l2=si0;
si0=!(si0);
if(si0){
goto L1;
}
si0=l1;
si1=l2;
i32_store16(&i->m0,(U64)si0+6U,si1);
si0=17677962U;
si1=43U;
si2=l1;
si3=6U;
si2+=si3;
si3=17683100U;
si4=17683148U;
f641(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L1:;
si0=l0;
si1=l1;
sj1=i64_load(&i->m0,(U64)si1+8U);
l3=sj1;
sj2=1000000000ULL;
sj1=DIV_U(sj1,sj2);
l4=sj1;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
sj1=l3;
sj2=l4;
sj3=3294967296ULL;
sj2*=sj3;
sj1+=sj2;
i64_store32(&i->m0,(U64)si0+8U,sj1);
si0=l1;
si1=16U;
si0+=si1;
i->g0=si0;
L0:;
}

void f14798(rustpythonInstance*i,U32 l0,U64 l1,U32 l2,U64 l3,U32 l4) {
U32 l5=0;
U32 si0,si1,si2;
U64 sj0,sj1;
si0=i->g0;
si1=32U;
si0-=si1;
l5=si0;
i->g0=si0;
sj0=l1;
sj1=l3;
sj0+=sj1;
l3=sj0;
sj1=l1;
si0=sj0 < sj1;
if(si0){
goto L2;
}
si0=l4;
si1=l2;
si0+=si1;
l4=si0;
si1=999999999U;
si0=si0 <= si1;
if(si0){
goto L1;
}
sj0=l3;
sj1=1ULL;
sj0+=sj1;
l3=sj0;
si0=!(sj0);
if(si0){
goto L2;
}
si0=l4;
si1=-1000000000U;
si0+=si1;
l4=si0;
goto L1;
L2:;
si0=17680624U;
si1=40U;
si2=17680688U;
f634(i,si0,si1,si2);
UNREACHABLE;
L1:;
sj0=l3;
si1=l4;
si2=1000000000U;
si1=DIV_U(si1,si2);
l2=si1;
sj1=(U64)(si1);
sj0+=sj1;
l1=sj0;
sj1=l3;
si0=sj0 >= sj1;
if(si0){
goto L3;
}
si0=l5;
si1=20U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=1U;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l5;
si1=17677120U;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l5;
si1=17677000U;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l5;
si1=8U;
si0+=si1;
si1=17677200U;
f614(i,si0,si1);
UNREACHABLE;
L3:;
si0=l0;
sj1=l1;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=l2;
si2=-1000000000U;
si1*=si2;
si2=l4;
si1+=si2;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l5;
si1=32U;
si0+=si1;
i->g0=si0;
L0:;
}

void f14799(rustpythonInstance*i,U32 l0,U32 l1,U64 l2,U32 l3) {
U32 l4=0;
U32 l5=0;
U64 l6=0;
U64 l7=0;
U64 l8=0;
U32 si0,si1,si2;
U64 sj0,sj1;
si0=i->g0;
si1=32U;
si0-=si1;
l4=si0;
i->g0=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+8U);
l5=si0;
si0=l1;
sj0=i64_load(&i->m0,(U64)si0);
l6=sj0;
sj1=l2;
si0=sj0 < sj1;
if(si0){
goto L2;
}
sj0=l6;
sj1=l2;
sj0-=sj1;
l7=sj0;
si0=l5;
si1=l3;
si0=si0 >= si1;
if(si0){
goto L3;
}
sj0=l7;
si0=!(sj0);
if(si0){
goto L2;
}
si0=l5;
si1=1000000000U;
si0+=si1;
l5=si0;
sj0=l7;
sj1=-1ULL;
sj0+=sj1;
l7=sj0;
L3:;
sj0=0ULL;
l6=sj0;
sj0=l7;
si1=l5;
si2=l3;
si1-=si2;
l3=si1;
si2=1000000000U;
si1=DIV_U(si1,si2);
l5=si1;
sj1=(U64)(si1);
sj0+=sj1;
l8=sj0;
sj1=l7;
si0=sj0 >= sj1;
if(si0){
goto L1;
}
si0=l4;
si1=20U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=1U;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l4;
si1=17677120U;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l4;
si1=17677000U;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l4;
si1=8U;
si0+=si1;
si1=17677200U;
f614(i,si0,si1);
UNREACHABLE;
L2:;
sj0=l2;
sj1=l6;
si0=sj0 < sj1;
if(si0){
goto L4;
}
sj0=l2;
sj1=l6;
sj0-=sj1;
l2=sj0;
si0=l5;
si1=l3;
si0=si0 <= si1;
if(si0){
goto L5;
}
sj0=l2;
si0=!(sj0);
if(si0){
goto L4;
}
si0=l3;
si1=1000000000U;
si0+=si1;
l3=si0;
sj0=l2;
sj1=-1ULL;
sj0+=sj1;
l2=sj0;
L5:;
sj0=1ULL;
l6=sj0;
sj0=l2;
si1=l3;
si2=l5;
si1-=si2;
l3=si1;
si2=1000000000U;
si1=DIV_U(si1,si2);
l5=si1;
sj1=(U64)(si1);
sj0+=sj1;
l8=sj0;
sj1=l2;
si0=sj0 >= sj1;
if(si0){
goto L1;
}
si0=l4;
si1=20U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=1U;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l4;
si1=1104496U;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l4;
si1=1096476U;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l4;
si1=8U;
si0+=si1;
si1=1104528U;
f614(i,si0,si1);
UNREACHABLE;
L4:;
si0=1104544U;
si1=35U;
si2=1104580U;
f634(i,si0,si1,si2);
UNREACHABLE;
L1:;
si0=l0;
sj1=l8;
i64_store(&i->m0,(U64)si0+8U,sj1);
si0=l0;
sj1=l6;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=16U;
si0+=si1;
si1=l5;
si2=-1000000000U;
si1*=si2;
si2=l3;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=32U;
si0+=si1;
i->g0=si0;
L0:;
}

void f14800(rustpythonInstance*i,U32 l0,U32 l1,U64 l2,U32 l3) {
U32 l4=0;
U32 l5=0;
U64 l6=0;
U32 si0,si1,si2;
U64 sj0,sj1;
si0=i->g0;
si1=32U;
si0-=si1;
l4=si0;
i->g0=si0;
si0=1000000000U;
l5=si0;
si0=l1;
sj0=i64_load(&i->m0,(U64)si0);
l6=sj0;
sj1=l2;
sj0+=sj1;
l2=sj0;
sj1=l6;
si0=sj0 >= sj1;
if(si0){
goto L2;
}
goto L1;
L2:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+8U);
si1=l3;
si0+=si1;
l1=si0;
si1=999999999U;
si0=si0 <= si1;
if(si0){
goto L3;
}
sj0=l2;
sj1=1ULL;
sj0+=sj1;
l2=sj0;
si0=!(sj0);
if(si0){
goto L1;
}
si0=l1;
si1=-1000000000U;
si0+=si1;
l1=si0;
L3:;
sj0=l2;
si1=l1;
si2=1000000000U;
si1=DIV_U(si1,si2);
l5=si1;
sj1=(U64)(si1);
sj0+=sj1;
l6=sj0;
sj1=l2;
si0=sj0 >= sj1;
if(si0){
goto L4;
}
si0=l4;
si1=20U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=1U;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l4;
si1=17677120U;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l4;
si1=17677000U;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l4;
si1=8U;
si0+=si1;
si1=17677200U;
f614(i,si0,si1);
UNREACHABLE;
L4:;
si0=l5;
si1=-1000000000U;
si0*=si1;
si1=l1;
si0+=si1;
l5=si0;
L1:;
si0=l0;
si1=l5;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l0;
sj1=l6;
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=32U;
si0+=si1;
i->g0=si0;
L0:;
}

void f14801(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U32 l4=0;
U32 si0,si1,si2;
U64 sj1;
si0=i->g0;
si1=16U;
si0-=si1;
l3=si0;
i->g0=si0;
si0=l3;
si1=l1;
si2=l2;
f60(i,si0,si1,si2);
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
if(si0){
goto L3;
}
si0=l3;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+4U);
l2=si0;
si0=f15074(i,si0);
l4=si0;
si0=l0;
si1=4U;
i32_store8(&i->m0,(U64)si0,si1);
si0=l0;
si1=l4;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l2;
si1=0U;
i32_store8(&i->m0,(U64)si0,si1);
si0=l1;
si0=!(si0);
if(si0){
goto L1;
}
goto L2;
L3:;
si0=l0;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+17680760U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+4U);
si0=!(si0);
if(si0){
goto L1;
}
L2:;
si0=l2;
f15024(i,si0);
L1:;
si0=l3;
si1=16U;
si0+=si1;
i->g0=si0;
L0:;
}

void f14802(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U32 si0,si1,si2,si3;
U64 sj1;
si0=i->g0;
si1=16U;
si0-=si1;
l3=si0;
i->g0=si0;
si0=l3;
si1=l1;
si2=l2;
f60(i,si0,si1,si2);
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
if(si0){
goto L3;
}
si0=l0;
si1=l3;
si1=i32_load(&i->m0,(U64)si1+4U);
l2=si1;
si2=l3;
si3=8U;
si2+=si3;
si2=i32_load(&i->m0,(U64)si2);
l1=si2;
f14803(i,si0,si1,si2);
si0=l2;
si1=0U;
i32_store8(&i->m0,(U64)si0,si1);
si0=l1;
si0=!(si0);
if(si0){
goto L1;
}
goto L2;
L3:;
si0=l0;
si1=-1U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+17680760U);
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+4U);
si0=!(si0);
if(si0){
goto L1;
}
L2:;
si0=l2;
f15024(i,si0);
L1:;
si0=l3;
si1=16U;
si0+=si1;
i->g0=si0;
L0:;
}

void f14803(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 si0,si1,si2,si3;
U64 sj1,sj2;
si0=i->g0;
si1=80U;
si0-=si1;
l3=si0;
i->g0=si0;
si0=l3;
si1=l2;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l3;
si1=l1;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=512U;
l4=si0;
si0=512U;
si0=f15022(i,si0);
l2=si0;
si0=!(si0);
if(si0){
goto L6;
}
si0=l3;
sj1=512ULL;
i64_store(&i->m0,(U64)si0+16U,sj1);
si0=l3;
si1=l2;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l3;
si1=l2;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l3;
si1=0U;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l1;
si1=l3;
si2=28U;
si1+=si2;
si2=l3;
si3=24U;
si2+=si3;
si3=512U;
si0=f15087(i,si0,si1,si2,si3);
l5=si0;
si1=-1U;
si0=si0 != si1;
if(si0){
goto L4;
}
si0=512U;
l4=si0;
si0=0U;
si0=i32_load(&i->m0,(U64)si0+18663788U);
si1=48U;
si0=si0 != si1;
if(si0){
goto L5;
}
si0=512U;
l4=si0;
L7:;
{
si0=l3;
si1=l4;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l3;
si1=12U;
si0+=si1;
si1=l4;
si2=1U;
f14670(i,si0,si1,si2);
si0=l3;
si1=l3;
si1=i32_load(&i->m0,(U64)si1+12U);
l2=si1;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l3;
si1=0U;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l1;
si1=l3;
si2=28U;
si1+=si2;
si2=l3;
si3=24U;
si2+=si3;
si3=l3;
si3=i32_load(&i->m0,(U64)si3+16U);
l4=si3;
si0=f15087(i,si0,si1,si2,si3);
l5=si0;
si1=-1U;
si0=si0 != si1;
if(si0){
goto L4;
}
si0=0U;
si0=i32_load(&i->m0,(U64)si0+18663788U);
si1=48U;
si0=si0 != si1;
if(si0){
goto L5;
}
goto L7;
}
L6:;
si0=1U;
si1=512U;
f52(i,si0,si1);
UNREACHABLE;
L5:;
si0=l3;
si1=32U;
si0+=si1;
si1=12U;
si0+=si1;
sj1=1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=2U;
i32_store(&i->m0,(U64)si0+36U,si1);
si0=l3;
si1=17682688U;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l3;
si1=7284U;
i32_store(&i->m0,(U64)si0+60U,si1);
si0=l3;
si1=l3;
si2=56U;
si1+=si2;
i32_store(&i->m0,(U64)si0+40U,si1);
si0=l3;
si1=l3;
si2=4U;
si1+=si2;
i32_store(&i->m0,(U64)si0+56U,si1);
si0=l3;
si1=64U;
si0+=si1;
si1=l3;
si2=32U;
si1+=si2;
f64(i,si0,si1);
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=12U;
si0=f15022(i,si0);
l5=si0;
si0=!(si0);
if(si0){
goto L9;
}
si0=l5;
si1=l3;
sj1=i64_load(&i->m0,(U64)si1+64U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=8U;
si0+=si1;
si1=l3;
si2=64U;
si1+=si2;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=12U;
si0=f15022(i,si0);
l1=si0;
si0=!(si0);
if(si0){
goto L8;
}
si0=l1;
si1=40U;
i32_store8(&i->m0,(U64)si0+8U,si1);
si0=l1;
si1=17682720U;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l1;
si1=l5;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=-1U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l1;
sj1=(U64)(si1);
sj2=32ULL;
sj1<<=(sj2&63);
sj2=3ULL;
sj1|=sj2;
i64_store(&i->m0,(U64)si0+4U,sj1);
goto L3;
L9:;
si0=4U;
si1=12U;
f52(i,si0,si1);
UNREACHABLE;
L8:;
si0=4U;
si1=12U;
f52(i,si0,si1);
UNREACHABLE;
L4:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+24U);
l6=si0;
si0=f15152(i,si0);
l1=si0;
if(si0){
goto L11;
}
si0=1U;
l7=si0;
goto L10;
L11:;
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
l7=si0;
si0=!(si0);
if(si0){
goto L1;
}
L10:;
si0=l7;
si1=l6;
si2=l1;
si0=f15143(i,si0,si1,si2);
l6=si0;
si0=l0;
si1=l1;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l0;
si1=l1;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l0;
si1=l6;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l5;
i32_store(&i->m0,(U64)si0,si1);
L3:;
si0=l4;
si0=!(si0);
if(si0){
goto L12;
}
si0=l2;
f15024(i,si0);
L12:;
si0=l3;
si1=80U;
si0+=si1;
i->g0=si0;
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

void f14804(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
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
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18663176U);
l5=si0;
si0=1U;
l6=si0;
si0=0U;
si1=1U;
i32_store8(&i->m0,(U64)si0+18663176U,si1);
si0=l4;
si1=l5;
i32_store8(&i->m0,(U64)si0+36U,si1);
si0=l5;
if(si0){
goto L1;
}
si0=0U;
si0=i32_load(&i->m0,(U64)si0+18663204U);
si1=2147483647U;
si0&=si1;
si0=!(si0);
if(si0){
goto L2;
}
si0=f14767(i);
l6=si0;
L2:;
si0=l2;
si1=36U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si0=l4;
si1=24U;
si0+=si1;
sj1=1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=1U;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l4;
si1=17678356U;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l4;
si1=7285U;
i32_store(&i->m0,(U64)si0+40U,si1);
si0=l4;
si1=l3;
i32_store8(&i->m0,(U64)si0+47U,si1);
si0=l4;
si1=l4;
si2=36U;
si1+=si2;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l4;
si1=l4;
si2=47U;
si1+=si2;
i32_store(&i->m0,(U64)si0+36U,si1);
si0=l0;
si1=l1;
si2=l4;
si3=12U;
si2+=si3;
si3=l5;
TF(i->t0,si3,void (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
si0=l6;
si0=!(si0);
if(si0){
goto L3;
}
si0=0U;
si0=i32_load(&i->m0,(U64)si0+18663204U);
si1=2147483647U;
si0&=si1;
si0=!(si0);
if(si0){
goto L3;
}
si0=f14767(i);
if(si0){
goto L3;
}
si0=0U;
si1=1U;
i32_store8(&i->m0,(U64)si0+18663177U,si1);
L3:;
si0=0U;
si1=0U;
i32_store8(&i->m0,(U64)si0+18663176U,si1);
si0=l4;
si1=48U;
si0+=si1;
i->g0=si0;
goto L0;
L1:;
si0=l4;
sj1=0ULL;
i64_store(&i->m0,(U64)si0+24U,sj1);
si0=l4;
si1=17677000U;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l4;
si1=1U;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l4;
si1=17680376U;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l4;
si1=36U;
si0+=si1;
si1=l4;
si2=12U;
si1+=si2;
f14693(i,si0,si1);
UNREACHABLE;
L0:;
}

U32 f14805(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 l3=0;
U64 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 si0,si1,si2,si3;
U64 sj0,sj1;
si0=i->g0;
si1=32U;
si0-=si1;
l2=si0;
i->g0=si0;
si0=l0;
si0=i32_load8_u(&i->m0,(U64)si0);
l3=si0;
si0=l2;
si1=8U;
si0+=si1;
f14729(i,si0);
si0=l2;
sj0=i64_load(&i->m0,(U64)si0+12U);
l4=sj0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+8U);
l0=si0;
if(si0){
goto L1;
}
sj0=l4;
sj1=255ULL;
sj0&=sj1;
sj1=3ULL;
si0=sj0 != sj1;
if(si0){
goto L1;
}
sj0=l4;
sj1=32ULL;
sj0>>=(sj1&63);
si0=(U32)(sj0);
l5=si0;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si1=l5;
si2=4U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
l7=si1;
si1=i32_load(&i->m0,(U64)si1);
TF(i->t0,si1,void (*)(rustpythonInstance*,U32))(i,si0);
si0=l7;
si0=i32_load(&i->m0,(U64)si0+4U);
si0=!(si0);
if(si0){
goto L2;
}
si0=l6;
f15024(i,si0);
L2:;
si0=l5;
f15024(i,si0);
L1:;
si0=l2;
si1=20U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=1U;
l5=si0;
si0=l2;
si1=1U;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l2;
si1=17680788U;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l2;
si1=17677000U;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+20U);
l7=si0;
si1=l1;
si2=24U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
l1=si1;
si2=l2;
si3=8U;
si2+=si3;
si0=f621(i,si0,si1,si2);
if(si0){
goto L5;
}
si0=l3;
si1=255U;
si0&=si1;
if(si0){
goto L6;
}
si0=l2;
si1=20U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=1U;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l2;
si1=17680884U;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l2;
si1=17677000U;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l7;
si1=l1;
si2=l2;
si3=8U;
si2+=si3;
si0=f621(i,si0,si1,si2);
if(si0){
goto L5;
}
L6:;
si0=0U;
l5=si0;
si0=l0;
si0=!(si0);
if(si0){
goto L3;
}
sj0=l4;
sj1=4294967295ULL;
sj0&=sj1;
si0=!(sj0);
if(si0){
goto L3;
}
goto L4;
L5:;
si0=l0;
si0=!(si0);
if(si0){
goto L3;
}
sj0=l4;
sj1=4294967295ULL;
sj0&=sj1;
sj1=0ULL;
si0=sj0 == sj1;
if(si0){
goto L3;
}
L4:;
si0=l0;
f15024(i,si0);
L3:;
si0=l2;
si1=32U;
si0+=si1;
i->g0=si0;
si0=l5;
L0:;
return si0;
}

void f14806(rustpythonInstance*i,U32 l0) {
U32 si0;
si0=l0;
f14807(i,si0);
UNREACHABLE;
L0:;
}

void f14807(rustpythonInstance*i,U32 l0) {
U32 l1=0;
U32 l2=0;
U32 l3=0;
U32 si0,si1,si2,si3,si4;
si0=i->g0;
si1=16U;
si0-=si1;
l1=si0;
i->g0=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si1=12U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+4U);
switch(si0){
case 0:
goto L4;
case 1:
goto L3;
default:
goto L1;
}
L4:;
si0=l3;
if(si0){
goto L1;
}
si0=17677000U;
l2=si0;
si0=0U;
l3=si0;
goto L2;
L3:;
si0=l3;
if(si0){
goto L1;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si0=i32_load(&i->m0,(U64)si0+4U);
l3=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
L2:;
si0=l1;
si1=l3;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l1;
si1=l2;
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
si1=17681500U;
si2=l0;
si2=i32_load(&i->m0,(U64)si2+4U);
l2=si2;
si2=i32_load(&i->m0,(U64)si2+12U);
si3=l0;
si3=i32_load(&i->m0,(U64)si3+8U);
si4=l2;
si4=i32_load8_u(&i->m0,(U64)si4+16U);
f14817(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L1:;
si0=l1;
si1=0U;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l1;
si1=l2;
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
si1=17681520U;
si2=l0;
si2=i32_load(&i->m0,(U64)si2+4U);
l2=si2;
si2=i32_load(&i->m0,(U64)si2+12U);
si3=l0;
si3=i32_load(&i->m0,(U64)si3+8U);
si4=l2;
si4=i32_load8_u(&i->m0,(U64)si4+16U);
f14817(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L0:;
}

U32 f14808(rustpythonInstance*i) {
U32 l0=0;
U32 l1=0;
U32 l2=0;
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U64 l8=0;
U32 l9=0;
U32 si0,si1,si2;
U64 sj0,sj1;
si0=i->g0;
si1=32U;
si0-=si1;
l0=si0;
i->g0=si0;
si0=0U;
si0=i32_load(&i->m0,(U64)si0+18663180U);
l1=si0;
if(si0){
goto L7;
}
si0=l0;
si1=8U;
si0+=si1;
si1=17680892U;
si2=14U;
f14732(i,si0,si1,si2);
si0=l0;
si0=i32_load(&i->m0,(U64)si0+8U);
l2=si0;
si0=!(si0);
if(si0){
goto L3;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+12U);
l3=si0;
si0=l0;
si1=20U;
si0+=si1;
si1=l2;
si2=l0;
si2=i32_load(&i->m0,(U64)si2+16U);
l4=si2;
f686(i,si0,si1,si2);
si0=l0;
si0=i32_load(&i->m0,(U64)si0+20U);
si0=!(si0);
if(si0){
goto L10;
}
si0=l0;
si1=28U;
si0+=si1;
sj0=i64_load8_u(&i->m0,(U64)si0);
sj1=32ULL;
sj0<<=(sj1&63);
sj1=8589934592ULL;
si0=sj0 != sj1;
if(si0){
goto L9;
}
L10:;
si0=0U;
l5=si0;
si0=l4;
if(si0){
goto L8;
}
goto L4;
L9:;
si0=l3;
si0=!(si0);
if(si0){
goto L3;
}
si0=l2;
f15024(i,si0);
goto L3;
L8:;
si0=l2;
l6=si0;
si0=l2;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=-43U;
si0+=si1;
switch(si0){
case 0:
goto L11;
case 1:
goto L5;
case 2:
goto L6;
default:
goto L5;
}
L11:;
si0=l4;
si1=-1U;
si0+=si1;
l4=si0;
if(si0){
goto L12;
}
goto L4;
L12:;
si0=l2;
si1=1U;
si0+=si1;
l6=si0;
goto L5;
L7:;
si0=l1;
si1=-1U;
si0+=si1;
l1=si0;
goto L1;
L6:;
si0=l2;
l6=si0;
si0=l4;
si1=1U;
si0=si0 == si1;
if(si0){
goto L4;
}
L5:;
si0=l4;
si1=9U;
si0=si0 < si1;
if(si0){
goto L13;
}
si0=0U;
l7=si0;
L14:;
{
si0=l7;
l1=si0;
si0=l4;
si0=!(si0);
l5=si0;
si0=l4;
si0=!(si0);
if(si0){
goto L4;
}
si0=l6;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=-48U;
si0+=si1;
l7=si0;
si1=9U;
si0=si0 > si1;
if(si0){
goto L4;
}
si0=l1;
sj0=(U64)(si0);
sj1=10ULL;
sj0*=sj1;
l8=sj0;
sj1=32ULL;
sj0>>=(sj1&63);
si0=(U32)(sj0);
si1=0U;
si0=si0 != si1;
if(si0){
goto L4;
}
si0=l6;
si1=1U;
si0+=si1;
l6=si0;
si0=l4;
si1=-1U;
si0+=si1;
l4=si0;
sj0=l8;
si0=(U32)(sj0);
l9=si0;
si1=l7;
si0+=si1;
l7=si0;
si1=l9;
si0=si0 >= si1;
if(si0){
goto L14;
}
goto L4;
}
L13:;
si0=0U;
l1=si0;
L15:;
{
si0=l6;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=-48U;
si0+=si1;
l7=si0;
si1=10U;
si0=si0 < si1;
l5=si0;
si0=l7;
si1=9U;
si0=si0 <= si1;
if(si0){
goto L16;
}
goto L4;
L16:;
si0=l6;
si1=1U;
si0+=si1;
l6=si0;
si0=l7;
si1=l1;
si2=10U;
si1*=si2;
si0+=si1;
l1=si0;
si0=l4;
si1=-1U;
si0+=si1;
l4=si0;
if(si0){
goto L15;
}
}
L4:;
si0=l3;
si0=!(si0);
if(si0){
goto L17;
}
si0=l2;
f15024(i,si0);
L17:;
si0=l5;
if(si0){
goto L2;
}
L3:;
si0=4096U;
l1=si0;
L2:;
si0=0U;
si1=l1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0+18663180U,si1);
L1:;
si0=l0;
si1=32U;
si0+=si1;
i->g0=si0;
si0=l1;
L0:;
return si0;
}

void f14809(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 l3=0;
U32 l4=0;
U32 si0,si1,si2,si3,si4;
U64 sj1;
si0=i->g0;
si1=64U;
si0-=si1;
l2=si0;
i->g0=si0;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657629U);
if(si0){
goto L1;
}
si0=l2;
si1=24U;
si0+=si1;
sj1=1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=2U;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l2;
si1=17681088U;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l2;
si1=1U;
i32_store(&i->m0,(U64)si0+40U,si1);
si0=l2;
si1=l1;
i32_store(&i->m0,(U64)si0+44U,si1);
si0=l2;
si1=l2;
si2=36U;
si1+=si2;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l2;
si1=l2;
si2=44U;
si1+=si2;
i32_store(&i->m0,(U64)si0+36U,si1);
si0=l2;
si1=4U;
i32_store8(&i->m0,(U64)si0+48U,si1);
si0=l2;
si1=l2;
si2=63U;
si1+=si2;
i32_store(&i->m0,(U64)si0+56U,si1);
si0=l2;
si1=48U;
si0+=si1;
si1=17680020U;
si2=l2;
si3=12U;
si2+=si3;
si0=f621(i,si0,si1,si2);
l3=si0;
si0=l2;
si0=i32_load8_u(&i->m0,(U64)si0+48U);
l1=si0;
si0=l3;
si0=!(si0);
if(si0){
goto L3;
}
si0=l1;
si1=4U;
si0=si0 == si1;
if(si0){
goto L2;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0+52U);
l3=si0;
si0=l2;
si0=i32_load8_u(&i->m0,(U64)si0+48U);
l1=si0;
si1=4U;
si0=si0 > si1;
if(si0){
goto L4;
}
si0=l1;
si1=3U;
si0=si0 != si1;
if(si0){
goto L2;
}
L4:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
si1=l3;
si2=4U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
l1=si1;
si1=i32_load(&i->m0,(U64)si1);
TF(i->t0,si1,void (*)(rustpythonInstance*,U32))(i,si0);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
si0=!(si0);
if(si0){
goto L5;
}
si0=l4;
f15024(i,si0);
L5:;
si0=l3;
f15024(i,si0);
goto L2;
L3:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+52U);
l3=si0;
si0=l1;
si1=4U;
si0=si0 > si1;
if(si0){
goto L6;
}
si0=l1;
si1=3U;
si0=si0 != si1;
if(si0){
goto L2;
}
L6:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
si1=l3;
si2=4U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
l1=si1;
si1=i32_load(&i->m0,(U64)si1);
TF(i->t0,si1,void (*)(rustpythonInstance*,U32))(i,si0);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
si0=!(si0);
if(si0){
goto L7;
}
si0=l4;
f15024(i,si0);
L7:;
si0=l3;
f15024(i,si0);
L2:;
si0=l2;
si1=64U;
si0+=si1;
i->g0=si0;
goto L0;
L1:;
si0=l2;
si1=1U;
i32_store(&i->m0,(U64)si0+52U,si1);
si0=l2;
si1=l1;
i32_store(&i->m0,(U64)si0+36U,si1);
si0=l2;
si1=l2;
si2=36U;
si1+=si2;
i32_store(&i->m0,(U64)si0+48U,si1);
si0=l2;
si1=12U;
si0+=si1;
si1=17681120U;
si2=2U;
si3=l2;
si4=48U;
si3+=si4;
si4=1U;
f14677(i,si0,si1,si2,si3,si4);
si0=l2;
si1=12U;
si0+=si1;
si1=17681160U;
f614(i,si0,si1);
UNREACHABLE;
L0:;
}

void f14810(rustpythonInstance*i,U32 l0) {
U32 l1=0;
U32 l2=0;
U32 l3=0;
U32 l4=0;
U32 si0,si1,si2;
U64 sj0,sj1,sj2;
si0=i->g0;
si1=112U;
si0-=si1;
l1=si0;
i->g0=si0;
si0=1U;
l2=si0;
si0=0U;
si0=i32_load(&i->m0,(U64)si0+18663216U);
si1=1U;
si0=si0 > si1;
if(si0){
goto L1;
}
si0=f14789(i);
l2=si0;
L1:;
si0=l1;
si1=l2;
i32_store8(&i->m0,(U64)si0+39U,si1);
si0=l1;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+8U);
i32_store(&i->m0,(U64)si0+40U,si1);
si0=l1;
si1=16U;
si0+=si1;
si1=l0;
si1=i32_load(&i->m0,(U64)si1);
l2=si1;
si2=l0;
si2=i32_load(&i->m0,(U64)si2+4U);
si2=i32_load(&i->m0,(U64)si2+12U);
l0=si2;
TF(i->t0,si2,void (*)(rustpythonInstance*,U32,U32))(i,si0,si1);
si0=l1;
sj0=i64_load(&i->m0,(U64)si0+16U);
sj1=-4493808902380553279ULL;
sj0^=sj1;
si1=l1;
si2=16U;
si1+=si2;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
sj2=-163230743173927068ULL;
sj1^=sj2;
sj0|=sj1;
si0=!(sj0);
if(si0){
goto L5;
}
si0=l1;
si1=l2;
si2=l0;
TF(i->t0,si2,void (*)(rustpythonInstance*,U32,U32))(i,si0,si1);
si0=l1;
sj0=i64_load(&i->m0,(U64)si0);
sj1=1724245560170728293ULL;
sj0^=sj1;
si1=l1;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
sj2=-7290354011656258087ULL;
sj1^=sj2;
sj0|=sj1;
si0=!(sj0);
if(si0){
goto L4;
}
si0=12U;
l0=si0;
si0=17681204U;
l2=si0;
goto L2;
L5:;
si0=l2;
si1=4U;
si0+=si1;
l0=si0;
goto L3;
L4:;
si0=l2;
si1=8U;
si0+=si1;
l0=si0;
L3:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
l0=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
L2:;
si0=l1;
si1=l0;
i32_store(&i->m0,(U64)si0+48U,si1);
si0=l1;
si1=l2;
i32_store(&i->m0,(U64)si0+44U,si1);
si0=l1;
si1=f14727(i);
l2=si1;
i32_store(&i->m0,(U64)si0+52U,si1);
si0=l2;
si1=16U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l0=si0;
if(si0){
goto L7;
}
si0=9U;
l3=si0;
si0=17681216U;
l0=si0;
goto L6;
L7:;
si0=l2;
si1=20U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=-1U;
si0+=si1;
l3=si0;
L6:;
si0=l1;
si1=l3;
i32_store(&i->m0,(U64)si0+60U,si1);
si0=l1;
si1=l0;
i32_store(&i->m0,(U64)si0+56U,si1);
si0=l1;
si1=l1;
si2=39U;
si1+=si2;
i32_store(&i->m0,(U64)si0+76U,si1);
si0=l1;
si1=l1;
si2=44U;
si1+=si2;
i32_store(&i->m0,(U64)si0+72U,si1);
si0=l1;
si1=l1;
si2=40U;
si1+=si2;
i32_store(&i->m0,(U64)si0+68U,si1);
si0=l1;
si1=l1;
si2=56U;
si1+=si2;
i32_store(&i->m0,(U64)si0+64U,si1);
si0=0U;
l3=si0;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18663089U);
si0=!(si0);
if(si0){
goto L10;
}
si0=0U;
si1=1U;
i32_store8(&i->m0,(U64)si0+18663089U,si1);
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18663236U);
if(si0){
goto L11;
}
si0=0U;
si1=1U;
i32_store8(&i->m0,(U64)si0+18663236U,si1);
si0=0U;
si1=0U;
i32_store(&i->m0,(U64)si0+18663240U,si1);
goto L10;
L11:;
si0=0U;
si0=i32_load(&i->m0,(U64)si0+18663240U);
l0=si0;
si0=0U;
si1=0U;
i32_store(&i->m0,(U64)si0+18663240U,si1);
si0=l0;
si0=!(si0);
if(si0){
goto L10;
}
si0=l0;
si0=i32_load8_u(&i->m0,(U64)si0+8U);
l2=si0;
si0=l0;
si1=1U;
i32_store8(&i->m0,(U64)si0+8U,si1);
si0=l1;
si1=l2;
i32_store8(&i->m0,(U64)si0+83U,si1);
si0=l2;
if(si0){
goto L15;
}
si0=0U;
si0=i32_load(&i->m0,(U64)si0+18663204U);
si1=2147483647U;
si0&=si1;
if(si0){
goto L14;
}
si0=l1;
si1=64U;
si0+=si1;
si1=l0;
si2=12U;
si1+=si2;
si2=17681228U;
f14811(i,si0,si1,si2);
si0=l0;
si1=9U;
si0+=si1;
l2=si0;
goto L13;
L15:;
si0=l1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0+96U,sj1);
si0=l1;
si1=17677000U;
i32_store(&i->m0,(U64)si0+92U,si1);
si0=l1;
si1=1U;
i32_store(&i->m0,(U64)si0+88U,si1);
si0=l1;
si1=17680376U;
i32_store(&i->m0,(U64)si0+84U,si1);
si0=l1;
si1=83U;
si0+=si1;
si1=l1;
si2=84U;
si1+=si2;
f14693(i,si0,si1);
UNREACHABLE;
L14:;
si0=f14767(i);
l2=si0;
si0=l1;
si1=64U;
si0+=si1;
si1=l0;
si2=12U;
si1+=si2;
si2=17681228U;
f14811(i,si0,si1,si2);
si0=l2;
si0=!(si0);
if(si0){
goto L12;
}
si0=l0;
si1=9U;
si0+=si1;
l2=si0;
L13:;
si0=0U;
si0=i32_load(&i->m0,(U64)si0+18663204U);
si1=2147483647U;
si0&=si1;
si0=!(si0);
if(si0){
goto L12;
}
si0=f14767(i);
if(si0){
goto L12;
}
si0=l2;
si1=1U;
i32_store8(&i->m0,(U64)si0,si1);
L12:;
si0=0U;
si1=1U;
i32_store8(&i->m0,(U64)si0+18663089U,si1);
si0=l0;
si1=0U;
i32_store8(&i->m0,(U64)si0+8U,si1);
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18663236U);
if(si0){
goto L17;
}
si0=0U;
si1=l0;
i32_store(&i->m0,(U64)si0+18663240U,si1);
si0=0U;
si1=1U;
i32_store8(&i->m0,(U64)si0+18663236U,si1);
goto L16;
L17:;
si0=0U;
si0=i32_load(&i->m0,(U64)si0+18663240U);
l2=si0;
si0=0U;
si1=l0;
i32_store(&i->m0,(U64)si0+18663240U,si1);
si0=l2;
si0=!(si0);
if(si0){
goto L16;
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
goto L16;
}
si0=l2;
f14713(i,si0);
L16:;
si0=1U;
l3=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+52U);
l2=si0;
si0=!(si0);
if(si0){
goto L8;
}
goto L9;
L10:;
si0=l1;
si1=64U;
si0+=si1;
si1=l1;
si2=111U;
si1+=si2;
si2=17681268U;
f14811(i,si0,si1,si2);
si0=0U;
l0=si0;
L9:;
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
goto L18;
}
si0=l1;
si1=52U;
si0+=si1;
f14712(i,si0);
L18:;
si0=l3;
si1=-1U;
si0^=si1;
si1=l0;
si2=0U;
si1=si1 != si2;
si0&=si1;
si0=!(si0);
if(si0){
goto L8;
}
si0=l0;
si1=l0;
si1=i32_load(&i->m0,(U64)si1);
l2=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=1U;
si0=si0 != si1;
if(si0){
goto L8;
}
si0=l0;
f14713(i,si0);
L8:;
si0=l1;
si1=112U;
si0+=si1;
i->g0=si0;
L0:;
}

void f14811(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 si0,si1,si2,si3;
U64 sj1;
si0=i->g0;
si1=64U;
si0-=si1;
l3=si0;
i->g0=si0;
si0=l3;
si1=16U;
si0+=si1;
si1=12U;
si0+=si1;
sj1=3ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=60U;
si0+=si1;
si1=295U;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=40U;
si0+=si1;
si1=12U;
si0+=si1;
si1=7286U;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=17681332U;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l3;
si1=295U;
i32_store(&i->m0,(U64)si0+44U,si1);
si0=l3;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+8U);
i32_store(&i->m0,(U64)si0+56U,si1);
si0=l3;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+4U);
i32_store(&i->m0,(U64)si0+48U,si1);
si0=l3;
si1=l0;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0+40U,si1);
si0=l3;
si1=l3;
si2=40U;
si1+=si2;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l3;
si1=4U;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l3;
si1=8U;
si0+=si1;
si1=l1;
si2=l3;
si3=16U;
si2+=si3;
si3=l2;
si3=i32_load(&i->m0,(U64)si3+36U);
l4=si3;
TF(i->t0,si3,void (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+12U);
l5=si0;
si0=l3;
si0=i32_load8_u(&i->m0,(U64)si0+8U);
l6=si0;
si1=4U;
si0=si0 > si1;
if(si0){
goto L2;
}
si0=l6;
si1=3U;
si0=si0 != si1;
if(si0){
goto L1;
}
L2:;
si0=l5;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
si1=l5;
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
goto L3;
}
si0=l7;
f15024(i,si0);
L3:;
si0=l5;
f15024(i,si0);
L1:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+12U);
si0=i32_load8_u(&i->m0,(U64)si0);
l0=si0;
si1=3U;
si0=si0 == si1;
if(si0){
goto L4;
}
si0=l0;
switch(si0){
case 0:
goto L7;
case 1:
goto L6;
case 2:
goto L5;
default:
goto L7;
}
L7:;
si0=l3;
si1=40U;
si0+=si1;
si1=l1;
si2=l2;
si3=0U;
f14804(i,si0,si1,si2,si3);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+44U);
l1=si0;
si0=l3;
si0=i32_load8_u(&i->m0,(U64)si0+40U);
l0=si0;
si1=4U;
si0=si0 > si1;
if(si0){
goto L8;
}
si0=l0;
si1=3U;
si0=si0 != si1;
if(si0){
goto L4;
}
L8:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si1=l1;
si2=4U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
l0=si1;
si1=i32_load(&i->m0,(U64)si1);
TF(i->t0,si1,void (*)(rustpythonInstance*,U32))(i,si0);
si0=l0;
si0=i32_load(&i->m0,(U64)si0+4U);
si0=!(si0);
if(si0){
goto L9;
}
si0=l2;
f15024(i,si0);
L9:;
si0=l1;
f15024(i,si0);
goto L4;
L6:;
si0=l3;
si1=40U;
si0+=si1;
si1=l1;
si2=l2;
si3=1U;
f14804(i,si0,si1,si2,si3);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+44U);
l1=si0;
si0=l3;
si0=i32_load8_u(&i->m0,(U64)si0+40U);
l0=si0;
si1=4U;
si0=si0 > si1;
if(si0){
goto L10;
}
si0=l0;
si1=3U;
si0=si0 != si1;
if(si0){
goto L4;
}
L10:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si1=l1;
si2=4U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
l0=si1;
si1=i32_load(&i->m0,(U64)si1);
TF(i->t0,si1,void (*)(rustpythonInstance*,U32))(i,si0);
si0=l0;
si0=i32_load(&i->m0,(U64)si0+4U);
si0=!(si0);
if(si0){
goto L11;
}
si0=l2;
f15024(i,si0);
L11:;
si0=l1;
f15024(i,si0);
goto L4;
L5:;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657576U);
l0=si0;
si0=0U;
si1=0U;
i32_store8(&i->m0,(U64)si0+18657576U,si1);
si0=l0;
si0=!(si0);
if(si0){
goto L4;
}
si0=l3;
si1=52U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=1U;
i32_store(&i->m0,(U64)si0+44U,si1);
si0=l3;
si1=17681444U;
i32_store(&i->m0,(U64)si0+40U,si1);
si0=l3;
si1=17677000U;
i32_store(&i->m0,(U64)si0+48U,si1);
si0=l3;
si1=16U;
si0+=si1;
si1=l1;
si2=l3;
si3=40U;
si2+=si3;
si3=l4;
TF(i->t0,si3,void (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+20U);
l1=si0;
si0=l3;
si0=i32_load8_u(&i->m0,(U64)si0+16U);
l0=si0;
si1=4U;
si0=si0 > si1;
if(si0){
goto L12;
}
si0=l0;
si1=3U;
si0=si0 != si1;
if(si0){
goto L4;
}
L12:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si1=l1;
si2=4U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
l0=si1;
si1=i32_load(&i->m0,(U64)si1);
TF(i->t0,si1,void (*)(rustpythonInstance*,U32))(i,si0);
si0=l0;
si0=i32_load(&i->m0,(U64)si0+4U);
si0=!(si0);
if(si0){
goto L13;
}
si0=l2;
f15024(i,si0);
L13:;
si0=l1;
f15024(i,si0);
L4:;
si0=l3;
si1=64U;
si0+=si1;
i->g0=si0;
L0:;
}

void f14812(rustpythonInstance*i,U32 l0) {
U32 l1=0;
U32 l2=0;
U32 si0,si1,si2;
si0=i->g0;
si1=16U;
si0-=si1;
l1=si0;
i->g0=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+12U);
l2=si0;
if(si0){
goto L1;
}
si0=17677284U;
si1=43U;
si2=17681452U;
f604(i,si0,si1,si2);
UNREACHABLE;
L1:;
si0=l1;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+8U);
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l1;
si1=l0;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l1;
si1=l2;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l1;
si1=4U;
si0+=si1;
f14806(i,si0);
UNREACHABLE;
L0:;
}

void f14813(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 l3=0;
U32 l4=0;
U32 l5=0;
U64 l6=0;
U32 si0,si1,si2;
U64 sj0,sj1;
si0=i->g0;
si1=48U;
si0-=si1;
l2=si0;
i->g0=si0;
si0=l1;
si1=4U;
si0+=si1;
l3=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
if(si0){
goto L1;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
si0=l2;
si1=32U;
si0+=si1;
si1=8U;
si0+=si1;
l5=si0;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
sj1=1ULL;
i64_store(&i->m0,(U64)si0+32U,sj1);
si0=l2;
si1=l2;
si2=32U;
si1+=si2;
i32_store(&i->m0,(U64)si0+44U,si1);
si0=l2;
si1=44U;
si0+=si1;
si1=17676940U;
si2=l4;
si0=f621(i,si0,si1,si2);
si0=l2;
si1=16U;
si0+=si1;
si1=8U;
si0+=si1;
si1=l5;
si1=i32_load(&i->m0,(U64)si1);
l4=si1;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=l2;
sj1=i64_load(&i->m0,(U64)si1+32U);
l6=sj1;
i64_store(&i->m0,(U64)si0+16U,sj1);
si0=l3;
si1=8U;
si0+=si1;
si1=l4;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
sj1=l6;
i64_store(&i->m0,(U64)si0,sj1);
L1:;
si0=l2;
si1=8U;
si0+=si1;
l4=si0;
si1=l3;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
si1=12U;
si0+=si1;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
sj0=i64_load(&i->m0,(U64)si0);
l6=sj0;
si0=l1;
sj1=1ULL;
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=l2;
sj1=l6;
i64_store(&i->m0,(U64)si0,sj1);
si0=12U;
si0=f15022(i,si0);
l1=si0;
if(si0){
goto L2;
}
si0=4U;
si1=12U;
f52(i,si0,si1);
UNREACHABLE;
L2:;
si0=l1;
si1=l2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si1=8U;
si0+=si1;
si1=l4;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=17681468U;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l1;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=48U;
si0+=si1;
i->g0=si0;
L0:;
}

void f14814(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 l3=0;
U32 l4=0;
U64 l5=0;
U32 si0,si1,si2;
U64 sj1;
si0=i->g0;
si1=32U;
si0-=si1;
l2=si0;
i->g0=si0;
si0=l1;
si1=4U;
si0+=si1;
l3=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
if(si0){
goto L1;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si0=l2;
si1=16U;
si0+=si1;
si1=8U;
si0+=si1;
l4=si0;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
sj1=1ULL;
i64_store(&i->m0,(U64)si0+16U,sj1);
si0=l2;
si1=l2;
si2=16U;
si1+=si2;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l2;
si1=28U;
si0+=si1;
si1=17676940U;
si2=l1;
si0=f621(i,si0,si1,si2);
si0=l2;
si1=8U;
si0+=si1;
si1=l4;
si1=i32_load(&i->m0,(U64)si1);
l1=si1;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=l2;
sj1=i64_load(&i->m0,(U64)si1+16U);
l5=sj1;
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=8U;
si0+=si1;
si1=l1;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
sj1=l5;
i64_store(&i->m0,(U64)si0,sj1);
L1:;
si0=l0;
si1=17681468U;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l3;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=32U;
si0+=si1;
i->g0=si0;
L0:;
}

void f14815(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 l3=0;
U32 si0,si1;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
l2=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=8U;
si0=f15022(i,si0);
l1=si0;
if(si0){
goto L1;
}
si0=4U;
si1=8U;
f52(i,si0,si1);
UNREACHABLE;
L1:;
si0=l1;
si1=l2;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l1;
si1=l3;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=17681484U;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l1;
i32_store(&i->m0,(U64)si0,si1);
L0:;
}

void f14816(rustpythonInstance*i,U32 l0,U32 l1) {
U32 si0,si1;
si0=l0;
si1=17681484U;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l1;
i32_store(&i->m0,(U64)si0,si1);
L0:;
}

void f14817(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4) {
U32 l5=0;
U32 l6=0;
U32 si0,si1,si2,si3,si4;
U64 sj1;
si0=i->g0;
si1=80U;
si0-=si1;
l5=si0;
i->g0=si0;
si0=0U;
si1=0U;
si1=i32_load(&i->m0,(U64)si1+18663204U);
l6=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0+18663204U,si1);
si0=l6;
si1=0U;
si0=(U32)((I32)si0<(I32)si1);
if(si0){
goto L7;
}
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18663220U);
if(si0){
goto L6;
}
si0=0U;
si1=1U;
i32_store8(&i->m0,(U64)si0+18663220U,si1);
si0=0U;
si1=0U;
si1=i32_load(&i->m0,(U64)si1+18663216U);
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0+18663216U,si1);
si0=l5;
si1=l2;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l5;
si1=17681540U;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l5;
si1=17677000U;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l5;
si1=l4;
i32_store8(&i->m0,(U64)si0+32U,si1);
si0=l5;
si1=l3;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=0U;
si0=i32_load(&i->m0,(U64)si0+18663188U);
l6=si0;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L2;
}
si0=0U;
si1=l6;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0+18663188U,si1);
si0=0U;
si0=i32_load(&i->m0,(U64)si0+18663196U);
l6=si0;
si0=l5;
si1=l0;
si2=l1;
si2=i32_load(&i->m0,(U64)si2+16U);
TF(i->t0,si2,void (*)(rustpythonInstance*,U32,U32))(i,si0,si1);
si0=l5;
si1=l5;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+16U,sj1);
si0=l6;
if(si0){
goto L4;
}
si0=l5;
si1=16U;
si0+=si1;
f14810(i,si0);
goto L3;
L7:;
si0=l5;
si1=l2;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l5;
si1=17681540U;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l5;
si1=17677000U;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l5;
si1=l4;
i32_store8(&i->m0,(U64)si0+32U,si1);
si0=l5;
si1=l3;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l5;
si1=52U;
si0+=si1;
sj1=1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=2U;
i32_store(&i->m0,(U64)si0+44U,si1);
si0=l5;
si1=17681608U;
i32_store(&i->m0,(U64)si0+40U,si1);
si0=l5;
si1=7287U;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l5;
si1=l5;
si2=8U;
si1+=si2;
i32_store(&i->m0,(U64)si0+48U,si1);
si0=l5;
si1=l5;
si2=16U;
si1+=si2;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l5;
si1=4U;
i32_store8(&i->m0,(U64)si0+64U,si1);
si0=l5;
si1=l5;
si2=8U;
si1+=si2;
i32_store(&i->m0,(U64)si0+72U,si1);
si0=l5;
si1=64U;
si0+=si1;
si1=17680020U;
si2=l5;
si3=40U;
si2+=si3;
si0=f621(i,si0,si1,si2);
l4=si0;
si0=l5;
si0=i32_load8_u(&i->m0,(U64)si0+64U);
l6=si0;
si0=l4;
si0=!(si0);
if(si0){
goto L8;
}
si0=l6;
si1=4U;
si0=si0 == si1;
if(si0){
goto L5;
}
si0=l5;
si0=i32_load(&i->m0,(U64)si0+68U);
l6=si0;
si0=l5;
si0=i32_load8_u(&i->m0,(U64)si0+64U);
l5=si0;
si1=4U;
si0=si0 > si1;
if(si0){
goto L9;
}
si0=l5;
si1=3U;
si0=si0 != si1;
if(si0){
goto L5;
}
L9:;
si0=l6;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
si1=l6;
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
goto L10;
}
si0=l4;
f15024(i,si0);
L10:;
si0=l6;
f15024(i,si0);
f14725(i);
UNREACHABLE;
L8:;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+68U);
l5=si0;
si0=l6;
si1=4U;
si0=si0 > si1;
if(si0){
goto L11;
}
si0=l6;
si1=3U;
si0=si0 != si1;
if(si0){
goto L5;
}
L11:;
si0=l5;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
si1=l5;
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
goto L12;
}
si0=l4;
f15024(i,si0);
L12:;
si0=l5;
f15024(i,si0);
f14725(i);
UNREACHABLE;
L6:;
si0=l5;
si1=52U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=1U;
i32_store(&i->m0,(U64)si0+44U,si1);
si0=l5;
si1=17681676U;
i32_store(&i->m0,(U64)si0+40U,si1);
si0=l5;
si1=17677000U;
i32_store(&i->m0,(U64)si0+48U,si1);
si0=l5;
si1=4U;
i32_store8(&i->m0,(U64)si0+16U,si1);
si0=l5;
si1=l5;
si2=8U;
si1+=si2;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l5;
si1=16U;
si0+=si1;
si1=17680020U;
si2=l5;
si3=40U;
si2+=si3;
si0=f621(i,si0,si1,si2);
l4=si0;
si0=l5;
si0=i32_load8_u(&i->m0,(U64)si0+16U);
l6=si0;
si0=l4;
si0=!(si0);
if(si0){
goto L13;
}
si0=l6;
si1=4U;
si0=si0 == si1;
if(si0){
goto L5;
}
si0=l5;
si0=i32_load(&i->m0,(U64)si0+20U);
l6=si0;
si0=l5;
si0=i32_load8_u(&i->m0,(U64)si0+16U);
l5=si0;
si1=4U;
si0=si0 > si1;
if(si0){
goto L14;
}
si0=l5;
si1=3U;
si0=si0 != si1;
if(si0){
goto L5;
}
L14:;
si0=l6;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
si1=l6;
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
goto L15;
}
si0=l4;
f15024(i,si0);
L15:;
si0=l6;
f15024(i,si0);
f14725(i);
UNREACHABLE;
L13:;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+20U);
l5=si0;
si0=l6;
si1=4U;
si0=si0 > si1;
if(si0){
goto L16;
}
si0=l6;
si1=3U;
si0=si0 != si1;
if(si0){
goto L5;
}
L16:;
si0=l5;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
si1=l5;
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
goto L17;
}
si0=l4;
f15024(i,si0);
L17:;
si0=l5;
f15024(i,si0);
L5:;
f14725(i);
UNREACHABLE;
L4:;
si0=0U;
si0=i32_load(&i->m0,(U64)si0+18663196U);
si1=l5;
si2=16U;
si1+=si2;
si2=0U;
si2=i32_load(&i->m0,(U64)si2+18663200U);
si2=i32_load(&i->m0,(U64)si2+20U);
TF(i->t0,si2,void (*)(rustpythonInstance*,U32,U32))(i,si0,si1);
L3:;
si0=0U;
si1=0U;
si1=i32_load(&i->m0,(U64)si1+18663188U);
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0+18663188U,si1);
si0=0U;
si1=0U;
i32_store8(&i->m0,(U64)si0+18663220U,si1);
si0=l4;
if(si0){
goto L1;
}
si0=l5;
si1=52U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=1U;
i32_store(&i->m0,(U64)si0+44U,si1);
si0=l5;
si1=17681732U;
i32_store(&i->m0,(U64)si0+40U,si1);
si0=l5;
si1=17677000U;
i32_store(&i->m0,(U64)si0+48U,si1);
si0=l5;
si1=64U;
si0+=si1;
si1=l5;
si2=8U;
si1+=si2;
si2=l5;
si3=40U;
si2+=si3;
f14724(i,si0,si1,si2);
si0=l5;
si0=i32_load8_u(&i->m0,(U64)si0+64U);
si1=l5;
si1=i32_load(&i->m0,(U64)si1+68U);
f14688(i,si0,si1);
f14725(i);
UNREACHABLE;
L2:;
si0=l5;
si1=40U;
si0+=si1;
si1=17683352U;
si2=1U;
si3=l5;
si4=8U;
si3+=si4;
si4=0U;
f14677(i,si0,si1,si2,si3,si4);
si0=l5;
si1=64U;
si0+=si1;
si1=l5;
si2=8U;
si1+=si2;
si2=l5;
si3=40U;
si2+=si3;
f14724(i,si0,si1,si2);
si0=l5;
si0=i32_load8_u(&i->m0,(U64)si0+64U);
si1=l5;
si1=i32_load(&i->m0,(U64)si1+68U);
f14688(i,si0,si1);
f14725(i);
UNREACHABLE;
L1:;
si0=l5;
si1=l5;
f14818(i,si0,si1);
UNREACHABLE;
L0:;
}

void f14818(rustpythonInstance*i,U32 l0,U32 l1) {
UNREACHABLE;
L0:;
}

U32 f14819(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 l3=0;
U32 si0,si1,si2,si3,si4,si5;
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
si0=l1;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=17681751U;
si2=10U;
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
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+20U);
si2=17681761U;
si3=10U;
si4=l1;
si5=24U;
si4+=si5;
si4=i32_load(&i->m0,(U64)si4);
si4=i32_load(&i->m0,(U64)si4+12U);
si1=TF(i->t0,si4,U32 (*)(rustpythonInstance*,U32,U32,U32))(i,si1,si2,si3);
i32_store8(&i->m0,(U64)si0+12U,si1);
si0=l2;
si1=l1;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l2;
si1=0U;
i32_store8(&i->m0,(U64)si0+13U,si1);
si0=l2;
si1=0U;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l2;
si1=4U;
si0+=si1;
si1=l2;
si2=17676964U;
si0=f645(i,si0,si1,si2);
si0=l2;
si0=i32_load8_u(&i->m0,(U64)si0+12U);
l0=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+4U);
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
si0=i32_load(&i->m0,(U64)si0+8U);
l0=si0;
si0=l3;
si1=1U;
si0=si0 != si1;
if(si0){
goto L4;
}
si0=l2;
si0=i32_load8_u(&i->m0,(U64)si0+13U);
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
si1=1102487U;
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
si1=1101931U;
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
si1=16U;
si0+=si1;
i->g0=si0;
si0=l1;
L0:;
return si0;
}

U32 f14820(rustpythonInstance*i,U32 l0,U32 l1) {
U32 si0,si1,si2,si3,si4;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=l0;
si1=i32_load8_u(&i->m0,(U64)si1);
si2=2U;
si1<<=(si2&31);
l0=si1;
si2=17683968U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
si2=l0;
si3=17683804U;
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

U32 f14821(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 l3=0;
U32 si0,si1,si2,si3,si4,si5;
si0=i->g0;
si1=16U;
si0-=si1;
l2=si0;
i->g0=si0;
si0=l2;
si1=l0;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+20U);
si2=17682379U;
si3=15U;
si4=l1;
si5=24U;
si4+=si5;
si4=i32_load(&i->m0,(U64)si4);
si4=i32_load(&i->m0,(U64)si4+12U);
si1=TF(i->t0,si4,U32 (*)(rustpythonInstance*,U32,U32,U32))(i,si1,si2,si3);
i32_store8(&i->m0,(U64)si0+12U,si1);
si0=l2;
si1=l1;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l2;
si1=0U;
i32_store8(&i->m0,(U64)si0+13U,si1);
si0=l2;
si1=0U;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l2;
si1=4U;
si0+=si1;
si1=l2;
si2=17682396U;
si0=f645(i,si0,si1,si2);
si0=l2;
si0=i32_load8_u(&i->m0,(U64)si0+12U);
l0=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+4U);
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
si0=i32_load(&i->m0,(U64)si0+8U);
l0=si0;
si0=l3;
si1=1U;
si0=si0 != si1;
if(si0){
goto L3;
}
si0=l2;
si0=i32_load8_u(&i->m0,(U64)si0+13U);
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
si1=1102487U;
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
si1=1101931U;
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
si1=16U;
si0+=si1;
i->g0=si0;
si0=l1;
L0:;
return si0;
}

void f14822(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4) {
U32 l5=0;
U32 l6=0;
U32 l7=0;
U64 l8=0;
U64 l9=0;
U32 si0,si1,si2,si3,si4,si7,si8,si9;
U64 sj0,sj1,sj5,sj6;
si0=i->g0;
si1=32U;
si0-=si1;
l5=si0;
i->g0=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+32U);
l6=si0;
si0=l5;
si1=8U;
si0+=si1;
si1=l2;
si2=l3;
f686(i,si0,si1,si2);
si0=l5;
si0=i32_load(&i->m0,(U64)si0+8U);
if(si0){
goto L3;
}
si0=l5;
si1=16U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+12U);
l2=si0;
si0=l4;
si0=i32_load16_u(&i->m0,(U64)si0+38U);
l7=si0;
si0=l4;
sj0=i64_load(&i->m0,(U64)si0);
sj1=0ULL;
si0=sj0 != sj1;
if(si0){
goto L6;
}
sj0=16386ULL;
sj1=0ULL;
si2=l4;
si2=i32_load8_u(&i->m0,(U64)si2+40U);
sj0=si2?sj0:sj1;
l8=sj0;
sj1=4194625ULL;
sj0|=sj1;
sj1=l8;
si2=l4;
si2=i32_load8_u(&i->m0,(U64)si2+41U);
si3=l4;
si3=i32_load8_u(&i->m0,(U64)si3+42U);
si2|=si3;
sj0=si2?sj0:sj1;
sj1=262651580ULL;
sj0|=sj1;
l9=sj0;
l8=sj0;
si0=l4;
sj0=i64_load(&i->m0,(U64)si0+16U);
si0=!(sj0);
si0=!(si0);
if(si0){
goto L5;
}
goto L4;
L6:;
si0=l4;
sj0=i64_load(&i->m0,(U64)si0+8U);
l9=sj0;
l8=sj0;
si0=l4;
sj0=i64_load(&i->m0,(U64)si0+16U);
si0=!(sj0);
if(si0){
goto L4;
}
L5:;
si0=l4;
si1=24U;
si0+=si1;
sj0=i64_load(&i->m0,(U64)si0);
l8=sj0;
L4:;
si0=l1;
si1=l6;
si2=l2;
si3=l3;
si4=l7;
sj5=l9;
sj6=l8;
si7=l4;
si7=i32_load16_u(&i->m0,(U64)si7+36U);
si8=l5;
si9=8U;
si8+=si9;
si0=wasi_snapshot_preview1__path_open(i,si0,si1,si2,si3,si4,sj5,sj6,si7,si8);
l4=si0;
if(si0){
goto L7;
}
si0=l5;
si1=l5;
si1=i32_load(&i->m0,(U64)si1+8U);
l4=si1;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l4;
si1=-1U;
si0=si0 == si1;
if(si0){
goto L1;
}
si0=l0;
si1=4U;
i32_store8(&i->m0,(U64)si0,si1);
si0=l0;
si1=l4;
i32_store(&i->m0,(U64)si0+4U,si1);
goto L2;
L7:;
si0=l0;
si1=0U;
i32_store16(&i->m0,(U64)si0+1U,si1);
si0=l0;
si1=0U;
i32_store8(&i->m0,(U64)si0,si1);
si0=l0;
si1=3U;
si0+=si1;
si1=0U;
i32_store8(&i->m0,(U64)si0,si1);
si0=l0;
si1=l4;
si2=65535U;
si1&=si2;
i32_store(&i->m0,(U64)si0+4U,si1);
goto L2;
L3:;
si0=l0;
si1=17680104U;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=2U;
i32_store(&i->m0,(U64)si0,si1);
L2:;
si0=l5;
si1=32U;
si0+=si1;
i->g0=si0;
goto L0;
L1:;
si0=l5;
si1=0U;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l5;
si1=4U;
si0+=si1;
si1=l5;
si2=8U;
si1+=si2;
f14694(i,si0,si1);
UNREACHABLE;
L0:;
}

void f14823(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 si0,si1,si2,si3,si4;
U64 sj1;
si0=i->g0;
si1=64U;
si0-=si1;
l3=si0;
i->g0=si0;
si0=l3;
si1=47U;
si0+=si1;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
sj1=1ULL;
i64_store(&i->m0,(U64)si0+40U,sj1);
si0=l3;
sj1=0ULL;
i64_store(&i->m0,(U64)si0+24U,sj1);
si0=l3;
sj1=0ULL;
i64_store(&i->m0,(U64)si0+8U,sj1);
si0=1U;
l4=si0;
si0=l3;
si1=1U;
i32_store8(&i->m0,(U64)si0+48U,si1);
si0=l3;
si1=2U;
i32_store16(&i->m0,(U64)si0+46U,si1);
si0=l3;
si1=56U;
si0+=si1;
si1=l1;
si2=l2;
si3=l3;
si4=8U;
si3+=si4;
f14743(i,si0,si1,si2,si3);
si0=l3;
si0=i32_load8_u(&i->m0,(U64)si0+56U);
l5=si0;
si1=4U;
si0=si0 != si1;
if(si0){
goto L6;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0+60U);
l5=si0;
si0=l2;
si0=!(si0);
if(si0){
goto L7;
}
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
l4=si0;
si0=!(si0);
if(si0){
goto L3;
}
L7:;
si0=l4;
si1=l1;
si2=l2;
si0=f15143(i,si0,si1,si2);
l4=si0;
si0=128U;
si1=1U;
si0=f15026(i,si0,si1);
l6=si0;
si0=!(si0);
if(si0){
goto L2;
}
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=24U;
si0=f15022(i,si0);
l1=si0;
si0=!(si0);
if(si0){
goto L1;
}
si0=l1;
si1=l5;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l1;
si1=l2;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l1;
si1=l2;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l1;
si1=l4;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l1;
sj1=4294967297ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
sj1=0ULL;
i64_store(&i->m0,(U64)si0+32U,sj1);
si0=l0;
sj1=549755814016ULL;
i64_store(&i->m0,(U64)si0+24U,sj1);
si0=l0;
si1=l6;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l0;
si1=l1;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l0;
sj1=0ULL;
i64_store(&i->m0,(U64)si0+8U,sj1);
si0=l0;
sj1=1ULL;
i64_store(&i->m0,(U64)si0,sj1);
goto L5;
L6:;
si0=l0;
si1=11U;
si0+=si1;
si1=l3;
si1=i32_load8_u(&i->m0,(U64)si1+59U);
i32_store8(&i->m0,(U64)si0,si1);
si0=l0;
si1=9U;
si0+=si1;
si1=l3;
si1=i32_load16_u(&i->m0,(U64)si1+57U);
i32_store16(&i->m0,(U64)si0,si1);
si0=l0;
si1=12U;
si0+=si1;
si1=l3;
si1=i32_load(&i->m0,(U64)si1+60U);
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l5;
i32_store8(&i->m0,(U64)si0+8U,si1);
si0=l0;
sj1=2ULL;
i64_store(&i->m0,(U64)si0,sj1);
L5:;
si0=l3;
si1=64U;
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
L2:;
si0=1U;
si1=128U;
f52(i,si0,si1);
UNREACHABLE;
L1:;
si0=4U;
si1=24U;
f52(i,si0,si1);
UNREACHABLE;
L0:;
}

void f14824(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U64 l4=0;
U32 l5=0;
U32 si0,si1,si2,si3;
U64 sj0,sj1,sj2;
si0=i->g0;
si1=416U;
si0-=si1;
l3=si0;
i->g0=si0;
si0=l2;
si1=383U;
si0=si0 > si1;
if(si0){
goto L2;
}
si0=l3;
si1=20U;
si0+=si1;
si1=l1;
si2=l2;
si0=f15143(i,si0,si1,si2);
si0=l3;
si1=20U;
si0+=si1;
si1=l2;
si0+=si1;
si1=0U;
i32_store8(&i->m0,(U64)si0,si1);
si0=l3;
si1=404U;
si0+=si1;
si1=l3;
si2=20U;
si1+=si2;
si2=l2;
si3=1U;
si2+=si3;
f633(i,si0,si1,si2);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+404U);
if(si0){
goto L3;
}
si0=l3;
si1=4U;
si0+=si1;
si1=l3;
si1=i32_load(&i->m0,(U64)si1+408U);
si2=l3;
si3=412U;
si2+=si3;
si2=i32_load(&i->m0,(U64)si2);
f14803(i,si0,si1,si2);
goto L1;
L3:;
si0=l3;
si1=-1U;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l3;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+17680760U);
i64_store(&i->m0,(U64)si0+8U,sj1);
goto L1;
L2:;
si0=l3;
si1=4U;
si0+=si1;
si1=l1;
si2=l2;
f14802(i,si0,si1,si2);
L1:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+4U);
l1=si0;
si1=-1U;
si0=si0 == si1;
if(si0){
goto L5;
}
si0=l3;
si1=20U;
si0+=si1;
si1=l3;
sj1=i64_load(&i->m0,(U64)si1+8U);
l4=sj1;
si1=(U32)(sj1);
l5=si1;
si2=l3;
si2=i32_load(&i->m0,(U64)si2+16U);
f686(i,si0,si1,si2);
sj0=l4;
sj1=32ULL;
sj0>>=(sj1&63);
si0=(U32)(sj0);
l2=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+20U);
if(si0){
goto L7;
}
si0=l1;
si1=l3;
si1=i32_load(&i->m0,(U64)si1+24U);
si2=l3;
si3=28U;
si2+=si3;
si2=i32_load(&i->m0,(U64)si2);
si0=wasi_snapshot_preview1__path_unlink_file(i,si0,si1,si2);
l1=si0;
if(si0){
goto L8;
}
si0=l0;
si1=4U;
i32_store8(&i->m0,(U64)si0,si1);
si0=l2;
if(si0){
goto L6;
}
goto L4;
L8:;
si0=l0;
si1=l1;
si2=65535U;
si1&=si2;
sj1=(U64)(si1);
sj2=32ULL;
sj1<<=(sj2&63);
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
if(si0){
goto L6;
}
goto L4;
L7:;
si0=l0;
si1=17680104U;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=2U;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si0=!(si0);
if(si0){
goto L4;
}
L6:;
si0=l5;
f15024(i,si0);
goto L4;
L5:;
si0=l0;
si1=l3;
sj1=i64_load(&i->m0,(U64)si1+8U);
i64_store(&i->m0,(U64)si0,sj1);
L4:;
si0=l3;
si1=416U;
si0+=si1;
i->g0=si0;
L0:;
}

void f14825(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4) {
U32 l5=0;
U64 l6=0;
U64 l7=0;
U32 l8=0;
U32 l9=0;
U32 l10=0;
U32 l11=0;
U32 l12=0;
U32 l13=0;
U32 si0,si1,si2,si3,si4,si5;
U64 sj0,sj1,sj2;
si0=i->g0;
si1=416U;
si0-=si1;
l5=si0;
i->g0=si0;
si0=l2;
si1=383U;
si0=si0 > si1;
if(si0){
goto L2;
}
si0=l5;
si1=20U;
si0+=si1;
si1=l1;
si2=l2;
si0=f15143(i,si0,si1,si2);
si0=l5;
si1=20U;
si0+=si1;
si1=l2;
si0+=si1;
si1=0U;
i32_store8(&i->m0,(U64)si0,si1);
si0=l5;
si1=404U;
si0+=si1;
si1=l5;
si2=20U;
si1+=si2;
si2=l2;
si3=1U;
si2+=si3;
f633(i,si0,si1,si2);
si0=l5;
si0=i32_load(&i->m0,(U64)si0+404U);
if(si0){
goto L3;
}
si0=l5;
si1=4U;
si0+=si1;
si1=l5;
si1=i32_load(&i->m0,(U64)si1+408U);
si2=l5;
si3=412U;
si2+=si3;
si2=i32_load(&i->m0,(U64)si2);
f14803(i,si0,si1,si2);
goto L1;
L3:;
si0=l5;
si1=-1U;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l5;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+17680760U);
i64_store(&i->m0,(U64)si0+8U,sj1);
goto L1;
L2:;
si0=l5;
si1=4U;
si0+=si1;
si1=l1;
si2=l2;
f14802(i,si0,si1,si2);
L1:;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+4U);
l1=si0;
si1=-1U;
si0=si0 == si1;
if(si0){
goto L6;
}
si0=l5;
sj0=i64_load(&i->m0,(U64)si0+8U);
l6=sj0;
sj1=32ULL;
sj0>>=(sj1&63);
l7=sj0;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+16U);
l8=si0;
si0=l4;
si1=383U;
si0=si0 > si1;
if(si0){
goto L7;
}
si0=l5;
si1=20U;
si0+=si1;
si1=l3;
si2=l4;
si0=f15143(i,si0,si1,si2);
si0=l5;
si1=20U;
si0+=si1;
si1=l4;
si0+=si1;
si1=0U;
i32_store8(&i->m0,(U64)si0,si1);
si0=l5;
si1=404U;
si0+=si1;
si1=l5;
si2=20U;
si1+=si2;
si2=l4;
si3=1U;
si2+=si3;
f633(i,si0,si1,si2);
si0=l5;
si0=i32_load(&i->m0,(U64)si0+404U);
if(si0){
goto L8;
}
si0=l5;
si1=4U;
si0+=si1;
si1=l5;
si1=i32_load(&i->m0,(U64)si1+408U);
si2=l5;
si3=412U;
si2+=si3;
si2=i32_load(&i->m0,(U64)si2);
f14803(i,si0,si1,si2);
goto L5;
L8:;
si0=l5;
si1=-1U;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l5;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+17680760U);
i64_store(&i->m0,(U64)si0+8U,sj1);
goto L5;
L7:;
si0=l5;
si1=4U;
si0+=si1;
si1=l3;
si2=l4;
f14802(i,si0,si1,si2);
goto L5;
L6:;
si0=l0;
si1=l5;
sj1=i64_load(&i->m0,(U64)si1+8U);
i64_store(&i->m0,(U64)si0,sj1);
goto L4;
L5:;
sj0=l7;
si0=(U32)(sj0);
l4=si0;
sj0=l6;
si0=(U32)(sj0);
l2=si0;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+4U);
l9=si0;
si1=-1U;
si0=si0 == si1;
if(si0){
goto L12;
}
si0=l5;
si0=i32_load(&i->m0,(U64)si0+16U);
l10=si0;
si0=l5;
sj0=i64_load(&i->m0,(U64)si0+8U);
l6=sj0;
si0=l5;
si1=20U;
si0+=si1;
si1=l2;
si2=l8;
f686(i,si0,si1,si2);
sj0=l6;
sj1=32ULL;
sj0>>=(sj1&63);
si0=(U32)(sj0);
l3=si0;
sj0=l6;
si0=(U32)(sj0);
l8=si0;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+20U);
if(si0){
goto L11;
}
si0=l5;
si1=28U;
si0+=si1;
l11=si0;
si0=i32_load(&i->m0,(U64)si0);
l12=si0;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+24U);
l13=si0;
si0=l5;
si1=20U;
si0+=si1;
si1=l8;
si2=l10;
f686(i,si0,si1,si2);
si0=l5;
si0=i32_load(&i->m0,(U64)si0+20U);
si0=!(si0);
if(si0){
goto L10;
}
si0=l0;
si1=17680104U;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=2U;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si0=!(si0);
if(si0){
goto L13;
}
si0=l8;
f15024(i,si0);
L13:;
si0=l4;
if(si0){
goto L9;
}
goto L4;
L12:;
si0=l0;
si1=l5;
sj1=i64_load(&i->m0,(U64)si1+8U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
if(si0){
goto L9;
}
goto L4;
L11:;
si0=l0;
si1=17680104U;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=2U;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si0=!(si0);
if(si0){
goto L14;
}
si0=l8;
f15024(i,si0);
L14:;
si0=l4;
if(si0){
goto L9;
}
goto L4;
L10:;
si0=l1;
si1=l13;
si2=l12;
si3=l9;
si4=l5;
si4=i32_load(&i->m0,(U64)si4+24U);
si5=l11;
si5=i32_load(&i->m0,(U64)si5);
si0=wasi_snapshot_preview1__path_rename(i,si0,si1,si2,si3,si4,si5);
l1=si0;
if(si0){
goto L16;
}
si0=l0;
si1=4U;
i32_store8(&i->m0,(U64)si0,si1);
goto L15;
L16:;
si0=l0;
si1=l1;
si2=65535U;
si1&=si2;
sj1=(U64)(si1);
sj2=32ULL;
sj1<<=(sj2&63);
i64_store(&i->m0,(U64)si0,sj1);
L15:;
si0=l3;
si0=!(si0);
if(si0){
goto L17;
}
si0=l8;
f15024(i,si0);
L17:;
si0=l4;
si0=!(si0);
if(si0){
goto L4;
}
L9:;
si0=l2;
f15024(i,si0);
L4:;
si0=l5;
si1=416U;
si0+=si1;
i->g0=si0;
L0:;
}

void f14826(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U64 l4=0;
U32 l5=0;
U32 si0,si1,si2,si3;
U64 sj0,sj1,sj2;
si0=i->g0;
si1=416U;
si0-=si1;
l3=si0;
i->g0=si0;
si0=l2;
si1=383U;
si0=si0 > si1;
if(si0){
goto L2;
}
si0=l3;
si1=20U;
si0+=si1;
si1=l1;
si2=l2;
si0=f15143(i,si0,si1,si2);
si0=l3;
si1=20U;
si0+=si1;
si1=l2;
si0+=si1;
si1=0U;
i32_store8(&i->m0,(U64)si0,si1);
si0=l3;
si1=404U;
si0+=si1;
si1=l3;
si2=20U;
si1+=si2;
si2=l2;
si3=1U;
si2+=si3;
f633(i,si0,si1,si2);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+404U);
if(si0){
goto L3;
}
si0=l3;
si1=4U;
si0+=si1;
si1=l3;
si1=i32_load(&i->m0,(U64)si1+408U);
si2=l3;
si3=412U;
si2+=si3;
si2=i32_load(&i->m0,(U64)si2);
f14803(i,si0,si1,si2);
goto L1;
L3:;
si0=l3;
si1=-1U;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l3;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+17680760U);
i64_store(&i->m0,(U64)si0+8U,sj1);
goto L1;
L2:;
si0=l3;
si1=4U;
si0+=si1;
si1=l1;
si2=l2;
f14802(i,si0,si1,si2);
L1:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+4U);
l1=si0;
si1=-1U;
si0=si0 == si1;
if(si0){
goto L5;
}
si0=l3;
si1=20U;
si0+=si1;
si1=l3;
sj1=i64_load(&i->m0,(U64)si1+8U);
l4=sj1;
si1=(U32)(sj1);
l5=si1;
si2=l3;
si2=i32_load(&i->m0,(U64)si2+16U);
f686(i,si0,si1,si2);
sj0=l4;
sj1=32ULL;
sj0>>=(sj1&63);
si0=(U32)(sj0);
l2=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+20U);
if(si0){
goto L7;
}
si0=l1;
si1=l3;
si1=i32_load(&i->m0,(U64)si1+24U);
si2=l3;
si3=28U;
si2+=si3;
si2=i32_load(&i->m0,(U64)si2);
si0=wasi_snapshot_preview1__path_remove_directory(i,si0,si1,si2);
l1=si0;
if(si0){
goto L8;
}
si0=l0;
si1=4U;
i32_store8(&i->m0,(U64)si0,si1);
si0=l2;
if(si0){
goto L6;
}
goto L4;
L8:;
si0=l0;
si1=l1;
si2=65535U;
si1&=si2;
sj1=(U64)(si1);
sj2=32ULL;
sj1<<=(sj2&63);
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
if(si0){
goto L6;
}
goto L4;
L7:;
si0=l0;
si1=17680104U;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=2U;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si0=!(si0);
if(si0){
goto L4;
}
L6:;
si0=l5;
f15024(i,si0);
goto L4;
L5:;
si0=l0;
si1=l3;
sj1=i64_load(&i->m0,(U64)si1+8U);
i64_store(&i->m0,(U64)si0,sj1);
L4:;
si0=l3;
si1=416U;
si0+=si1;
i->g0=si0;
L0:;
}

void f14827(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U64 l4=0;
U32 si0,si1,si2,si3;
U64 sj0,sj1,sj2;
si0=i->g0;
si1=416U;
si0-=si1;
l3=si0;
i->g0=si0;
si0=l2;
si1=383U;
si0=si0 > si1;
if(si0){
goto L2;
}
si0=l3;
si1=20U;
si0+=si1;
si1=l1;
si2=l2;
si0=f15143(i,si0,si1,si2);
si0=l3;
si1=20U;
si0+=si1;
si1=l2;
si0+=si1;
si1=0U;
i32_store8(&i->m0,(U64)si0,si1);
si0=l3;
si1=404U;
si0+=si1;
si1=l3;
si2=20U;
si1+=si2;
si2=l2;
si3=1U;
si2+=si3;
f633(i,si0,si1,si2);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+404U);
if(si0){
goto L3;
}
si0=l3;
si1=4U;
si0+=si1;
si1=l3;
si1=i32_load(&i->m0,(U64)si1+408U);
si2=l3;
si3=412U;
si2+=si3;
si2=i32_load(&i->m0,(U64)si2);
f14803(i,si0,si1,si2);
goto L1;
L3:;
si0=l3;
si1=-1U;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l3;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+17680760U);
i64_store(&i->m0,(U64)si0+8U,sj1);
goto L1;
L2:;
si0=l3;
si1=4U;
si0+=si1;
si1=l1;
si2=l2;
f14802(i,si0,si1,si2);
L1:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+4U);
l2=si0;
si1=-1U;
si0=si0 == si1;
if(si0){
goto L5;
}
si0=l0;
si1=l2;
si2=l3;
sj2=i64_load(&i->m0,(U64)si2+8U);
l4=sj2;
si2=(U32)(sj2);
l1=si2;
si3=l3;
si3=i32_load(&i->m0,(U64)si3+16U);
f14828(i,si0,si1,si2,si3);
sj0=l4;
sj1=4294967296ULL;
si0=sj0 < sj1;
if(si0){
goto L4;
}
si0=l1;
f15024(i,si0);
goto L4;
L5:;
si0=l3;
sj0=i64_load(&i->m0,(U64)si0+8U);
l4=sj0;
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
sj1=l4;
i64_store(&i->m0,(U64)si0+4U,sj1);
L4:;
si0=l3;
si1=416U;
si0+=si1;
i->g0=si0;
L0:;
}

void f14828(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U64 l5=0;
U64 l6=0;
U32 l7=0;
U32 l8=0;
U32 l9=0;
U32 si0,si1,si2,si3,si4,si5,si6;
U64 sj0,sj1,sj2;
si0=i->g0;
si1=80U;
si0-=si1;
l4=si0;
i->g0=si0;
si0=l4;
si1=8U;
si0+=si1;
si1=l2;
si2=l3;
f686(i,si0,si1,si2);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+8U);
si0=!(si0);
if(si0){
goto L7;
}
si0=17680104U;
sj0=(U64)(si0);
l5=sj0;
sj0=2ULL;
l6=sj0;
goto L6;
L7:;
si0=l1;
si1=0U;
si2=l4;
si2=i32_load(&i->m0,(U64)si2+12U);
si3=l4;
si4=16U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si4=l4;
si5=8U;
si4+=si5;
si0=wasi_snapshot_preview1__path_filestat_get(i,si0,si1,si2,si3,si4);
l7=si0;
si0=!(si0);
if(si0){
goto L5;
}
si0=l7;
si1=65535U;
si0&=si1;
sj0=(U64)(si0);
l5=sj0;
sj0=0ULL;
l6=sj0;
L6:;
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
sj1=l5;
sj2=32ULL;
sj1<<=(sj2&63);
sj2=l6;
sj1|=sj2;
i64_store(&i->m0,(U64)si0+4U,sj1);
goto L4;
L5:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+40U);
l7=si0;
si0=l4;
si0=i32_load8_u(&i->m0,(U64)si0+24U);
l8=si0;
si0=l4;
si1=8U;
si0+=si1;
si1=l2;
si2=l3;
f686(i,si0,si1,si2);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+8U);
si0=!(si0);
if(si0){
goto L8;
}
si0=l0;
sj1=8589934592ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=8U;
si0+=si1;
si1=17680104U;
i32_store(&i->m0,(U64)si0,si1);
goto L4;
L8:;
si0=l7;
si1=1U;
si0+=si1;
l3=si0;
si1=-1U;
si2=l3;
si0=si2?si0:si1;
si1=1U;
si2=l8;
si3=7U;
si2=si2 == si3;
si0=si2?si0:si1;
l3=si0;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L1;
}
si0=l4;
si1=8U;
si0+=si1;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l8=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+12U);
l9=si0;
si0=l3;
si1=1U;
si0=f15026(i,si0,si1);
l2=si0;
si0=!(si0);
if(si0){
goto L2;
}
si0=l4;
si1=l3;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l4;
si1=l3;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l4;
si1=l2;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l1;
si1=l9;
si2=l8;
si3=l2;
si4=l3;
si5=l4;
si6=76U;
si5+=si6;
si0=wasi_snapshot_preview1__path_readlink(i,si0,si1,si2,si3,si4,si5);
l7=si0;
si0=!(si0);
if(si0){
goto L10;
}
si0=l0;
si1=0U;
i32_store8(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=7U;
si0+=si1;
si1=0U;
i32_store8(&i->m0,(U64)si0,si1);
si0=l0;
si1=5U;
si0+=si1;
si1=0U;
i32_store16(&i->m0,(U64)si0,si1);
si0=l0;
si1=8U;
si0+=si1;
si1=l7;
si2=65535U;
si1&=si2;
i32_store(&i->m0,(U64)si0,si1);
goto L9;
L10:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+76U);
l7=si0;
si1=l3;
si0=si0 < si1;
if(si0){
goto L12;
}
L13:;
{
si0=l4;
si0=i32_load(&i->m0,(U64)si0+12U);
si1=l3;
si0-=si1;
si1=l3;
si0=si0 >= si1;
if(si0){
goto L17;
}
si0=l4;
si1=8U;
si0+=si1;
si1=l3;
si2=l3;
f14670(i,si0,si1,si2);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+8U);
l2=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+16U);
l7=si0;
goto L16;
L17:;
si0=l3;
si0=!(si0);
if(si0){
goto L15;
}
si0=l3;
l7=si0;
L16:;
si0=l2;
si1=l7;
si0+=si1;
si1=0U;
si2=l3;
si0=f15145(i,si0,si1,si2);
si0=l7;
si1=l3;
si0+=si1;
l3=si0;
goto L14;
L15:;
si0=0U;
l3=si0;
L14:;
si0=l4;
si1=l3;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l1;
si1=l9;
si2=l8;
si3=l2;
si4=l3;
si5=l4;
si6=76U;
si5+=si6;
si0=wasi_snapshot_preview1__path_readlink(i,si0,si1,si2,si3,si4,si5);
l7=si0;
if(si0){
goto L11;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0+76U);
l7=si0;
si1=l3;
si0=si0 >= si1;
if(si0){
goto L13;
}
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0+12U);
l3=si0;
L12:;
si0=l4;
si1=l7;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l3;
si1=l7;
si0=si0 <= si1;
if(si0){
goto L18;
}
si0=l7;
if(si0){
goto L20;
}
si0=l2;
f15024(i,si0);
si0=1U;
l3=si0;
goto L19;
L20:;
si0=l2;
si1=l3;
si2=1U;
si3=l7;
si0=f33(i,si0,si1,si2,si3);
l3=si0;
si0=!(si0);
if(si0){
goto L3;
}
L19:;
si0=l4;
si1=l7;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l4;
si1=l3;
i32_store(&i->m0,(U64)si0+8U,si1);
L18:;
si0=l0;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1+8U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=8U;
si0+=si1;
si1=l4;
si2=8U;
si1+=si2;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
goto L4;
L11:;
si0=l0;
si1=0U;
i32_store8(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=7U;
si0+=si1;
si1=0U;
i32_store8(&i->m0,(U64)si0,si1);
si0=l0;
si1=5U;
si0+=si1;
si1=0U;
i32_store16(&i->m0,(U64)si0,si1);
si0=l0;
si1=8U;
si0+=si1;
si1=l7;
si2=65535U;
si1&=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+12U);
si0=!(si0);
if(si0){
goto L4;
}
L9:;
si0=l2;
f15024(i,si0);
L4:;
si0=l4;
si1=80U;
si0+=si1;
i->g0=si0;
goto L0;
L3:;
si0=1U;
si1=l7;
f52(i,si0,si1);
UNREACHABLE;
L2:;
si0=1U;
si1=l3;
f52(i,si0,si1);
UNREACHABLE;
L1:;
f53(i);
UNREACHABLE;
L0:;
}

void f14829(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4) {
U32 l5=0;
U64 l6=0;
U64 l7=0;
U32 l8=0;
U32 l9=0;
U32 l10=0;
U32 l11=0;
U32 l12=0;
U32 l13=0;
U32 si0,si1,si2,si3,si4,si5,si6;
U64 sj0,sj1,sj2;
si0=i->g0;
si1=416U;
si0-=si1;
l5=si0;
i->g0=si0;
si0=l2;
si1=383U;
si0=si0 > si1;
if(si0){
goto L2;
}
si0=l5;
si1=20U;
si0+=si1;
si1=l1;
si2=l2;
si0=f15143(i,si0,si1,si2);
si0=l5;
si1=20U;
si0+=si1;
si1=l2;
si0+=si1;
si1=0U;
i32_store8(&i->m0,(U64)si0,si1);
si0=l5;
si1=404U;
si0+=si1;
si1=l5;
si2=20U;
si1+=si2;
si2=l2;
si3=1U;
si2+=si3;
f633(i,si0,si1,si2);
si0=l5;
si0=i32_load(&i->m0,(U64)si0+404U);
if(si0){
goto L3;
}
si0=l5;
si1=4U;
si0+=si1;
si1=l5;
si1=i32_load(&i->m0,(U64)si1+408U);
si2=l5;
si3=412U;
si2+=si3;
si2=i32_load(&i->m0,(U64)si2);
f14803(i,si0,si1,si2);
goto L1;
L3:;
si0=l5;
si1=-1U;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l5;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+17680760U);
i64_store(&i->m0,(U64)si0+8U,sj1);
goto L1;
L2:;
si0=l5;
si1=4U;
si0+=si1;
si1=l1;
si2=l2;
f14802(i,si0,si1,si2);
L1:;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+4U);
l1=si0;
si1=-1U;
si0=si0 == si1;
if(si0){
goto L6;
}
si0=l5;
sj0=i64_load(&i->m0,(U64)si0+8U);
l6=sj0;
sj1=32ULL;
sj0>>=(sj1&63);
l7=sj0;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+16U);
l8=si0;
si0=l4;
si1=383U;
si0=si0 > si1;
if(si0){
goto L7;
}
si0=l5;
si1=20U;
si0+=si1;
si1=l3;
si2=l4;
si0=f15143(i,si0,si1,si2);
si0=l5;
si1=20U;
si0+=si1;
si1=l4;
si0+=si1;
si1=0U;
i32_store8(&i->m0,(U64)si0,si1);
si0=l5;
si1=404U;
si0+=si1;
si1=l5;
si2=20U;
si1+=si2;
si2=l4;
si3=1U;
si2+=si3;
f633(i,si0,si1,si2);
si0=l5;
si0=i32_load(&i->m0,(U64)si0+404U);
if(si0){
goto L8;
}
si0=l5;
si1=4U;
si0+=si1;
si1=l5;
si1=i32_load(&i->m0,(U64)si1+408U);
si2=l5;
si3=412U;
si2+=si3;
si2=i32_load(&i->m0,(U64)si2);
f14803(i,si0,si1,si2);
goto L5;
L8:;
si0=l5;
si1=-1U;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l5;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+17680760U);
i64_store(&i->m0,(U64)si0+8U,sj1);
goto L5;
L7:;
si0=l5;
si1=4U;
si0+=si1;
si1=l3;
si2=l4;
f14802(i,si0,si1,si2);
goto L5;
L6:;
si0=l0;
si1=l5;
sj1=i64_load(&i->m0,(U64)si1+8U);
i64_store(&i->m0,(U64)si0,sj1);
goto L4;
L5:;
sj0=l7;
si0=(U32)(sj0);
l4=si0;
sj0=l6;
si0=(U32)(sj0);
l2=si0;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+4U);
l9=si0;
si1=-1U;
si0=si0 == si1;
if(si0){
goto L12;
}
si0=l5;
si0=i32_load(&i->m0,(U64)si0+16U);
l10=si0;
si0=l5;
sj0=i64_load(&i->m0,(U64)si0+8U);
l6=sj0;
si0=l5;
si1=20U;
si0+=si1;
si1=l2;
si2=l8;
f686(i,si0,si1,si2);
sj0=l6;
sj1=32ULL;
sj0>>=(sj1&63);
si0=(U32)(sj0);
l3=si0;
sj0=l6;
si0=(U32)(sj0);
l8=si0;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+20U);
if(si0){
goto L11;
}
si0=l5;
si1=28U;
si0+=si1;
l11=si0;
si0=i32_load(&i->m0,(U64)si0);
l12=si0;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+24U);
l13=si0;
si0=l5;
si1=20U;
si0+=si1;
si1=l8;
si2=l10;
f686(i,si0,si1,si2);
si0=l5;
si0=i32_load(&i->m0,(U64)si0+20U);
si0=!(si0);
if(si0){
goto L10;
}
si0=l0;
si1=17680104U;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=2U;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si0=!(si0);
if(si0){
goto L13;
}
si0=l8;
f15024(i,si0);
L13:;
si0=l4;
if(si0){
goto L9;
}
goto L4;
L12:;
si0=l0;
si1=l5;
sj1=i64_load(&i->m0,(U64)si1+8U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
if(si0){
goto L9;
}
goto L4;
L11:;
si0=l0;
si1=17680104U;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=2U;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si0=!(si0);
if(si0){
goto L14;
}
si0=l8;
f15024(i,si0);
L14:;
si0=l4;
if(si0){
goto L9;
}
goto L4;
L10:;
si0=l1;
si1=0U;
si2=l13;
si3=l12;
si4=l9;
si5=l5;
si5=i32_load(&i->m0,(U64)si5+24U);
si6=l11;
si6=i32_load(&i->m0,(U64)si6);
si0=wasi_snapshot_preview1__path_link(i,si0,si1,si2,si3,si4,si5,si6);
l1=si0;
if(si0){
goto L16;
}
si0=l0;
si1=4U;
i32_store8(&i->m0,(U64)si0,si1);
goto L15;
L16:;
si0=l0;
si1=l1;
si2=65535U;
si1&=si2;
sj1=(U64)(si1);
sj2=32ULL;
sj1<<=(sj2&63);
i64_store(&i->m0,(U64)si0,sj1);
L15:;
si0=l3;
si0=!(si0);
if(si0){
goto L17;
}
si0=l8;
f15024(i,si0);
L17:;
si0=l4;
si0=!(si0);
if(si0){
goto L4;
}
L9:;
si0=l2;
f15024(i,si0);
L4:;
si0=l5;
si1=416U;
si0+=si1;
i->g0=si0;
L0:;
}


#include "w2c2_base.h"

#include "rustpython.h"

void f5530(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4,U32 l5,U32 l6) {
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
si2=17310380U;
f594(i,si0,si1,si2);
UNREACHABLE;
L3:;
si0=l19;
si1=l3;
si2=17310396U;
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
si2=17310412U;
f594(i,si0,si1,si2);
UNREACHABLE;
L0:;
}

U32 f5531(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 si0,si1,si2,si3,si4,si5,si6;
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
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
l0=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+28U);
l5=si0;
l6=si0;
si0=l5;
si1=4U;
si0&=si1;
si0=!(si0);
if(si0){
goto L1;
}
si0=l5;
si1=8U;
si0|=si1;
l6=si0;
si0=l4;
if(si0){
goto L1;
}
si0=l1;
sj1=42949672961ULL;
i64_store(&i->m0,(U64)si0,sj1);
L1:;
si0=l1;
si1=l6;
si2=4U;
si1|=si2;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=0U;
l6=si0;
L2:;
{
si0=l2;
si1=l6;
si0+=si1;
si1=127U;
si0+=si1;
si1=48U;
si2=87U;
si3=l0;
si4=15U;
si3&=si4;
l7=si3;
si4=10U;
si3=si3 < si4;
si1=si3?si1:si2;
si2=l7;
si1+=si2;
i32_store8(&i->m0,(U64)si0,si1);
si0=l6;
si1=-1U;
si0+=si1;
l6=si0;
si0=l0;
si1=16U;
si0=si0 < si1;
l7=si0;
si0=l0;
si1=4U;
si0>>=(si1&31);
l0=si0;
si0=l7;
si0=!(si0);
if(si0){
goto L2;
}
}
si0=l6;
si1=128U;
si0+=si1;
l0=si0;
si1=128U;
si0=si0 <= si1;
if(si0){
goto L3;
}
si0=l0;
si1=128U;
si2=1102812U;
f593(i,si0,si1,si2);
UNREACHABLE;
L3:;
si0=l1;
si1=1U;
si2=1102828U;
si3=2U;
si4=l2;
si5=l6;
si4+=si5;
si5=128U;
si4+=si5;
si5=0U;
si6=l6;
si5-=si6;
si0=f662(i,si0,si1,si2,si3,si4,si5);
l0=si0;
si0=l1;
si1=l5;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l1;
si1=l3;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l1;
si1=l4;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=128U;
si0+=si1;
i->g0=si0;
si0=l0;
L0:;
return si0;
}

U32 f5532(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 l8=0;
U32 l9=0;
U32 si0,si1,si2,si3,si4,si5,si6;
si0=i->g0;
si1=80U;
si0-=si1;
l4=si0;
i->g0=si0;
si0=l1;
si1=l3;
si0=si0 < si1;
if(si0){
goto L3;
}
si0=0U;
l5=si0;
si0=l1;
si1=l3;
si0=si0 != si1;
if(si0){
goto L2;
}
si0=l0;
si1=l2;
si2=l1;
si0=f15142(i,si0,si1,si2);
si0=!(si0);
l5=si0;
goto L2;
L3:;
si0=l4;
si1=16U;
si0+=si1;
si1=l2;
si2=l3;
si3=l0;
si4=l1;
f690(i,si0,si1,si2,si3,si4);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+16U);
if(si0){
goto L5;
}
si0=0U;
l1=si0;
si0=l4;
si1=30U;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
if(si0){
goto L6;
}
si0=l4;
si1=28U;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
l6=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+64U);
l0=si0;
si0=l4;
si1=68U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
l2=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+20U);
l3=si0;
si0=!(si0);
if(si0){
goto L7;
}
si0=l5;
si1=l3;
si0=si0 > si1;
if(si0){
goto L9;
}
si0=l5;
si1=l3;
si0=si0 == si1;
if(si0){
goto L8;
}
goto L1;
L9:;
si0=l0;
si1=l3;
si0+=si1;
si0=i32_load8_s(&i->m0,(U64)si0);
si1=-64U;
si0=(U32)((I32)si0<(I32)si1);
if(si0){
goto L1;
}
L8:;
si0=l5;
si1=l3;
si0-=si1;
l2=si0;
L7:;
si0=l2;
si0=!(si0);
if(si0){
goto L11;
}
si0=l0;
si1=l3;
si0+=si1;
l7=si0;
si0=i32_load8_s(&i->m0,(U64)si0);
l2=si0;
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
si0=l2;
si1=31U;
si0&=si1;
l9=si0;
si0=l2;
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
l2=si0;
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
si0=l2;
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
l2=si0;
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
l2=si0;
goto L12;
L13:;
si0=l2;
si1=255U;
si0&=si1;
l2=si0;
L12:;
si0=l6;
si1=255U;
si0&=si1;
if(si0){
goto L10;
}
si0=l2;
si1=1114112U;
si0=si0 == si1;
if(si0){
goto L6;
}
si0=1U;
l1=si0;
si0=l2;
si1=128U;
si0=si0 < si1;
if(si0){
goto L16;
}
si0=2U;
l1=si0;
si0=l2;
si1=2048U;
si0=si0 < si1;
if(si0){
goto L16;
}
si0=3U;
si1=4U;
si2=l2;
si3=65536U;
si2=si2 < si3;
si0=si2?si0:si1;
l1=si0;
L16:;
si0=l1;
si1=l3;
si0+=si1;
l3=si0;
si0=!(si0);
if(si0){
goto L17;
}
si0=l5;
si1=l3;
si0=si0 > si1;
if(si0){
goto L19;
}
si0=l5;
si1=l3;
si0=si0 != si1;
if(si0){
goto L1;
}
goto L18;
L19:;
si0=l0;
si1=l3;
si0+=si1;
si0=i32_load8_s(&i->m0,(U64)si0);
si1=-65U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L1;
}
L18:;
si0=l5;
si1=l3;
si0-=si1;
l5=si0;
L17:;
si0=l5;
si0=!(si0);
if(si0){
goto L10;
}
si0=l0;
si1=l3;
si0+=si1;
si0=i32_load8_s(&i->m0,(U64)si0);
si1=-1U;
si0=(U32)((I32)si0>(I32)si1);
goto L10;
L11:;
si0=l6;
si1=255U;
si0&=si1;
si0=!(si0);
if(si0){
goto L6;
}
L10:;
si0=1U;
l1=si0;
L6:;
si0=l4;
si1=l1;
i32_store(&i->m0,(U64)si0+4U,si1);
goto L4;
L5:;
si0=l4;
si1=24U;
si0+=si1;
l1=si0;
si0=l4;
si1=76U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=l4;
si1=68U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+72U);
l2=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+64U);
l0=si0;
si0=l4;
si1=52U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=-1U;
si0=si0 == si1;
if(si0){
goto L20;
}
si0=l4;
si1=4U;
si0+=si1;
si1=l1;
si2=l0;
si3=l5;
si4=l2;
si5=l3;
si6=0U;
f5530(i,si0,si1,si2,si3,si4,si5,si6);
goto L4;
L20:;
si0=l4;
si1=4U;
si0+=si1;
si1=l1;
si2=l0;
si3=l5;
si4=l2;
si5=l3;
si6=1U;
f5530(i,si0,si1,si2,si3,si4,si5,si6);
L4:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+4U);
si1=0U;
si0=si0 != si1;
l5=si0;
L2:;
si0=l4;
si1=80U;
si0+=si1;
i->g0=si0;
si0=l5;
goto L0;
L1:;
si0=l0;
si1=l5;
si2=l3;
si3=l5;
si4=17310680U;
f678(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L0:;
return si0;
}

void f5533(rustpythonInstance*i,U32 l0,U32 l1) {
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
si0=17310300U;
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

U32 f5534(rustpythonInstance*i,U32 l0,U32 l1) {
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

U32 f5535(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 si0,si1,si2;
U64 sj1,sj2;
si0=i->g0;
si1=48U;
si0-=si1;
l2=si0;
i->g0=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+16U);
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
goto L3;
}
si0=0U;
l5=si0;
si0=l3;
si1=77U;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=1U;
si0&=si1;
si0=!(si0);
if(si0){
goto L5;
}
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=64U;
si0=f15022(i,si0);
l4=si0;
si0=!(si0);
if(si0){
goto L4;
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
si0=l2;
si1=8U;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l4;
si1=8U;
si0+=si1;
sj1=-1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=40U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+60U);
l5=si0;
si1=l5;
si1=i32_load(&i->m0,(U64)si1);
l1=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
sj1=0ULL;
i64_store(&i->m0,(U64)si0+32U,sj1);
si0=l2;
sj1=34359738376ULL;
i64_store(&i->m0,(U64)si0+20U,sj1);
si0=l2;
si1=l4;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l2;
si1=0U;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l1;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 == si1;
if(si0){
goto L3;
}
si0=l2;
si1=12U;
si0+=si1;
si1=l5;
si2=0U;
si0=f5913(i,si0,si1,si2);
l5=si0;
L5:;
si0=l3;
si1=352U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
if(si0){
goto L7;
}
si0=4U;
l6=si0;
goto L6;
L7:;
si0=l1;
si1=268435455U;
si0=si0 > si1;
if(si0){
goto L10;
}
si0=l1;
si1=3U;
si0<<=(si1&31);
l4=si0;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L10;
}
si0=l4;
if(si0){
goto L9;
}
si0=4U;
l6=si0;
goto L8;
L10:;
f53(i);
UNREACHABLE;
L9:;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=l4;
si0=f15022(i,si0);
l6=si0;
si0=!(si0);
if(si0){
goto L2;
}
L8:;
si0=l6;
si1=0U;
si2=l4;
si0=f15145(i,si0,si1,si2);
L6:;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=72U;
si0=f15022(i,si0);
l4=si0;
si0=!(si0);
if(si0){
goto L1;
}
si0=l4;
sj1=-6879226489707195439ULL;
i64_store(&i->m0,(U64)si0+8U,sj1);
si0=l4;
si1=l1;
i32_store(&i->m0,(U64)si0+52U,si1);
si0=l4;
si1=l6;
i32_store(&i->m0,(U64)si0+48U,si1);
si0=l4;
si1=0U;
i32_store(&i->m0,(U64)si0+44U,si1);
si0=l4;
si1=l3;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l4;
si1=17312300U;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l4;
si1=1U;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=16U;
si0+=si1;
sj1=1280318486529463543ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=l5;
si2=0U;
si1=si1 != si2;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l4;
si1=l0;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+56U,sj1);
si0=l4;
si1=l5;
sj1=(U64)(si1);
sj2=32ULL;
sj1<<=(sj2&63);
i64_store(&i->m0,(U64)si0+36U,sj1);
si0=l4;
si1=64U;
si0+=si1;
si1=l0;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=48U;
si0+=si1;
i->g0=si0;
si0=l4;
goto L0;
L4:;
si0=8U;
si1=64U;
f52(i,si0,si1);
UNREACHABLE;
L3:;
f14795(i);
UNREACHABLE;
L2:;
si0=4U;
si1=l4;
f52(i,si0,si1);
UNREACHABLE;
L1:;
si0=8U;
si1=72U;
f52(i,si0,si1);
UNREACHABLE;
L0:;
return si0;
}

void f5536(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U64 l8=0;
U64 l9=0;
F64 l10=0;
F64 l11=0;
U32 si0,si1,si2,si3,si4;
U64 sj0,sj1,sj2;
F64 sd0,sd1;
si0=i->g0;
si1=128U;
si0-=si1;
l3=si0;
i->g0=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+88U);
si1=108U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=l1;
si1=i32_load(&i->m0,(U64)si1);
l4=si1;
si1=i32_load(&i->m0,(U64)si1+28U);
si0=si0 != si1;
if(si0){
goto L2;
}
si0=l4;
sj0=i64_load(&i->m0,(U64)si0+8U);
sj1=4050155162030272185ULL;
sj0^=sj1;
si1=l4;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
sj2=4233016263971513691ULL;
sj1^=sj2;
sj0|=sj1;
sj1=0ULL;
si0=sj0 != sj1;
if(si0){
goto L2;
}
si0=l0;
si1=1U;
i32_store8(&i->m0,(U64)si0+16U,si1);
si0=l0;
si1=l4;
sd1=f64_load(&i->m0,(U64)si1+56U);
f64_store(&i->m0,(U64)si0,sd1);
si0=l0;
si1=l4;
si2=64U;
si1+=si2;
sd1=f64_load(&i->m0,(U64)si1);
f64_store(&i->m0,(U64)si0+8U,sd1);
goto L1;
L2:;
si0=l4;
si1=l4;
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
goto L6;
}
si0=l3;
si1=16U;
si0+=si1;
si1=l2;
si2=l4;
si3=l2;
si3=i32_load(&i->m0,(U64)si3+88U);
si4=692U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
f11942(i,si0,si1,si2,si3);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+20U);
l1=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+16U);
switch(si0){
case 0:
goto L8;
case 1:
goto L4;
case 2:
goto L9;
default:
goto L4;
}
L9:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+88U);
si1=108U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si1=l4;
si1=i32_load(&i->m0,(U64)si1+28U);
l6=si1;
si0=si0 == si1;
if(si0){
goto L10;
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
L11:;
{
si0=l1;
si0=!(si0);
if(si0){
goto L7;
}
si0=l1;
si1=-4U;
si0+=si1;
l1=si0;
si0=l6;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
si0=l6;
si1=4U;
si0+=si1;
l6=si0;
si0=l7;
si1=l5;
si0=si0 != si1;
if(si0){
goto L11;
}
}
L10:;
si0=l4;
sj0=i64_load(&i->m0,(U64)si0+8U);
sj1=4050155162030272185ULL;
sj0^=sj1;
si1=l4;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
sj2=4233016263971513691ULL;
sj1^=sj2;
sj0|=sj1;
si0=!(sj0);
si0=!(si0);
if(si0){
goto L7;
}
si0=l0;
si1=1U;
i32_store8(&i->m0,(U64)si0+16U,si1);
si0=l0;
si1=l4;
sd1=f64_load(&i->m0,(U64)si1+56U);
f64_store(&i->m0,(U64)si0,sd1);
si0=l0;
si1=l4;
si2=64U;
si1+=si2;
sd1=f64_load(&i->m0,(U64)si1);
f64_store(&i->m0,(U64)si0+8U,sd1);
goto L1;
L8:;
si0=0U;
sj0=i64_load(&i->m0,(U64)si0+18663248U);
si0=!(sj0);
if(si0){
goto L13;
}
si0=0U;
sj0=i64_load(&i->m0,(U64)si0+18663264U);
l8=sj0;
si0=0U;
sj0=i64_load(&i->m0,(U64)si0+18663256U);
l9=sj0;
goto L12;
L13:;
si0=l3;
si1=72U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
sj1=0ULL;
i64_store(&i->m0,(U64)si0+64U,sj1);
si0=l3;
si1=64U;
si0+=si1;
si1=16U;
si0=wasi_snapshot_preview1__random_get(i,si0,si1);
l6=si0;
if(si0){
goto L5;
}
si0=0U;
si1=l3;
sj1=i64_load(&i->m0,(U64)si1+72U);
l8=sj1;
i64_store(&i->m0,(U64)si0+18663264U,sj1);
si0=0U;
sj1=1ULL;
i64_store(&i->m0,(U64)si0+18663248U,sj1);
si0=l3;
sj0=i64_load(&i->m0,(U64)si0+64U);
l9=sj0;
L12:;
si0=l3;
si1=120U;
si0+=si1;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
sj1=l9;
i64_store(&i->m0,(U64)si0+64U,sj1);
si0=0U;
sj1=l9;
sj2=1ULL;
sj1+=sj2;
i64_store(&i->m0,(U64)si0+18663256U,sj1);
si0=l3;
sj1=4ULL;
i64_store(&i->m0,(U64)si0+112U,sj1);
si0=l3;
sj1=0ULL;
i64_store(&i->m0,(U64)si0+100U,sj1);
si0=l3;
sj1=17179869184ULL;
i64_store(&i->m0,(U64)si0+92U,sj1);
si0=l3;
sj1=0ULL;
i64_store(&i->m0,(U64)si0+84U,sj1);
si0=l3;
si1=17359936U;
i32_store(&i->m0,(U64)si0+80U,si1);
si0=l3;
sj1=l8;
i64_store(&i->m0,(U64)si0+72U,sj1);
si0=l3;
si1=8U;
si0+=si1;
si1=l1;
si2=l3;
si3=64U;
si2+=si3;
si3=l2;
f5537(i,si0,si1,si2,si3);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+12U);
l6=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+8U);
if(si0){
goto L22;
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
goto L23;
}
si0=l1;
f5522(i,si0);
L23:;
si0=l6;
sj0=i64_load(&i->m0,(U64)si0+8U);
sj1=4050155162030272185ULL;
sj0^=sj1;
si1=l6;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
sj2=4233016263971513691ULL;
sj1^=sj2;
sj0|=sj1;
si0=!(sj0);
if(si0){
goto L15;
}
si0=l3;
si1=48U;
si0+=si1;
si1=l6;
si1=i32_load(&i->m0,(U64)si1+28U);
si2=56U;
si1+=si2;
f13757(i,si0,si1);
si0=l3;
si1=76U;
si0+=si1;
sj1=1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=843U;
i32_store(&i->m0,(U64)si0+44U,si1);
si0=l3;
si1=2U;
i32_store(&i->m0,(U64)si0+68U,si1);
si0=l3;
si1=17310748U;
i32_store(&i->m0,(U64)si0+64U,si1);
si0=l3;
si1=l3;
si2=48U;
si1+=si2;
i32_store(&i->m0,(U64)si0+40U,si1);
si0=l3;
si1=l3;
si2=40U;
si1+=si2;
i32_store(&i->m0,(U64)si0+72U,si1);
si0=l3;
si1=28U;
si0+=si1;
si1=l3;
si2=64U;
si1+=si2;
f64(i,si0,si1);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+52U);
l1=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+48U);
switch(si0){
case 0:
goto L16;
case 1:
goto L20;
case 2:
goto L19;
case 3:
goto L18;
default:
goto L21;
}
L22:;
si0=l0;
si1=3U;
i32_store8(&i->m0,(U64)si0+16U,si1);
si0=l0;
si1=l6;
i32_store(&i->m0,(U64)si0,si1);
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
goto L1;
}
si0=l1;
f5522(i,si0);
goto L1;
L21:;
si0=l1;
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
si0=si0 == si1;
if(si0){
goto L17;
}
goto L16;
L20:;
si0=l1;
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
f1361(i,si0,si1);
goto L16;
L19:;
si0=l1;
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
f1361(i,si0,si1);
goto L16;
L18:;
si0=l1;
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
L17:;
si0=l1;
f1354(i,si0);
L16:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+88U);
si1=504U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si1=l1;
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
goto L6;
}
si0=l2;
si1=l1;
si2=l3;
si3=28U;
si2+=si3;
si0=f11521(i,si0,si1,si2);
l1=si0;
si0=l0;
si1=3U;
i32_store8(&i->m0,(U64)si0+16U,si1);
si0=l0;
si1=l1;
i32_store(&i->m0,(U64)si0,si1);
goto L14;
L15:;
si0=l6;
si1=64U;
si0+=si1;
sd0=f64_load(&i->m0,(U64)si0);
l10=sd0;
si0=l6;
sd0=f64_load(&i->m0,(U64)si0+56U);
l11=sd0;
si0=l0;
si1=1U;
i32_store8(&i->m0,(U64)si0+16U,si1);
si0=l0;
sd1=l10;
f64_store(&i->m0,(U64)si0+8U,sd1);
si0=l0;
sd1=l11;
f64_store(&i->m0,(U64)si0,sd1);
L14:;
si0=l6;
si1=l6;
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
si0=l6;
f5522(i,si0);
goto L1;
L7:;
si0=l3;
si1=l4;
si2=l2;
f5538(i,si0,si1,si2);
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si1=2U;
si0=si0 == si1;
if(si0){
goto L3;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0+4U);
l6=si0;
si0=l1;
if(si0){
goto L24;
}
si0=l6;
sd0=f64_load(&i->m0,(U64)si0+56U);
l10=sd0;
si0=l0;
si1=0U;
i32_store8(&i->m0,(U64)si0+16U,si1);
si0=l0;
sj1=0ULL;
i64_store(&i->m0,(U64)si0+8U,sj1);
si0=l0;
sd1=l10;
f64_store(&i->m0,(U64)si0,sd1);
si0=l6;
si1=l6;
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
si0=l6;
f5522(i,si0);
goto L1;
L24:;
si0=l0;
si1=3U;
i32_store8(&i->m0,(U64)si0+16U,si1);
si0=l0;
si1=l6;
i32_store(&i->m0,(U64)si0,si1);
goto L1;
L6:;
f14795(i);
UNREACHABLE;
L5:;
si0=l3;
si1=l6;
i32_store16(&i->m0,(U64)si0+48U,si1);
si0=17683216U;
si1=18U;
si2=l3;
si3=48U;
si2+=si3;
si3=17683100U;
si4=17683268U;
f641(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L4:;
si0=l0;
si1=3U;
i32_store8(&i->m0,(U64)si0+16U,si1);
si0=l0;
si1=l1;
i32_store(&i->m0,(U64)si0,si1);
goto L1;
L3:;
si0=l0;
si1=2U;
i32_store8(&i->m0,(U64)si0+16U,si1);
L1:;
si0=l3;
si1=128U;
si0+=si1;
i->g0=si0;
L0:;
}

void f5537(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 si0,si1,si2,si3,si4;
U64 sj1;
si0=i->g0;
si1=112U;
si0-=si1;
l4=si0;
i->g0=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+28U);
l5=si0;
si1=300U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
if(si0){
goto L4;
}
si0=l5;
si1=468U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=2U;
si0<<=(si1&31);
l7=si0;
si0=l5;
si1=460U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
L5:;
{
si0=l7;
si0=!(si0);
if(si0){
goto L3;
}
si0=l7;
si1=-4U;
si0+=si1;
l7=si0;
si0=l5;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si0=l5;
si1=4U;
si0+=si1;
l5=si0;
si0=l6;
si1=300U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si0=!(si0);
if(si0){
goto L5;
}
}
L4:;
si0=l4;
si1=l6;
i32_store(&i->m0,(U64)si0+36U,si1);
si0=l4;
si1=l1;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l4;
si1=48U;
si0+=si1;
si1=56U;
si0+=si1;
si1=l2;
si2=56U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=48U;
si0+=si1;
si1=48U;
si0+=si1;
si1=l2;
si2=48U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=48U;
si0+=si1;
si1=40U;
si0+=si1;
si1=l2;
si2=40U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=48U;
si0+=si1;
si1=32U;
si0+=si1;
si1=l2;
si2=32U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=48U;
si0+=si1;
si1=24U;
si0+=si1;
si1=l2;
si2=24U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=48U;
si0+=si1;
si1=16U;
si0+=si1;
si1=l2;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=48U;
si0+=si1;
si1=8U;
si0+=si1;
si1=l2;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=l2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+48U,sj1);
si0=l4;
si1=l4;
si2=32U;
si1+=si2;
si2=l4;
si3=48U;
si2+=si3;
si3=l3;
f13231(i,si0,si1,si2,si3);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+4U);
l3=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
goto L2;
L3:;
si0=l4;
si1=32U;
si0+=si1;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+28U);
si2=56U;
si1+=si2;
f13757(i,si0,si1);
si0=l4;
si1=60U;
si0+=si1;
sj1=1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=843U;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l4;
si1=2U;
i32_store(&i->m0,(U64)si0+52U,si1);
si0=l4;
si1=17313668U;
i32_store(&i->m0,(U64)si0+48U,si1);
si0=l4;
si1=l4;
si2=32U;
si1+=si2;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l4;
si1=l4;
si2=24U;
si1+=si2;
i32_store(&i->m0,(U64)si0+56U,si1);
si0=l4;
si1=12U;
si0+=si1;
si1=l4;
si2=48U;
si1+=si2;
f64(i,si0,si1);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+32U);
switch(si0){
case 0:
goto L6;
case 1:
goto L9;
case 2:
goto L8;
case 3:
goto L7;
default:
goto L10;
}
L10:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+36U);
l7=si0;
si1=l7;
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
goto L6;
}
si0=l7;
f1354(i,si0);
goto L6;
L9:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+36U);
l7=si0;
si1=0U;
si2=l7;
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
goto L6;
}
si0=l7;
si1=0U;
f1361(i,si0,si1);
goto L6;
L8:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+36U);
l7=si0;
si1=0U;
si2=l7;
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
goto L6;
}
si0=l7;
si1=0U;
f1361(i,si0,si1);
goto L6;
L7:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+36U);
l7=si0;
si1=l7;
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
goto L6;
}
si0=l7;
f1354(i,si0);
L6:;
si0=l4;
si1=48U;
si0+=si1;
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
i64_store(&i->m0,(U64)si0+48U,sj1);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+88U);
si1=504U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
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
goto L1;
}
si0=l3;
si1=l7;
si2=l4;
si3=48U;
si2+=si3;
si0=f11521(i,si0,si1,si2);
l3=si0;
si0=l2;
si1=56U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si0=!(si0);
if(si0){
goto L11;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0+48U);
l7=si0;
L12:;
{
si0=l7;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si1=l6;
si1=i32_load(&i->m0,(U64)si1);
l6=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l6;
si1=1U;
si0=si0 != si1;
if(si0){
goto L13;
}
si0=l7;
si0=i32_load(&i->m0,(U64)si0);
f5522(i,si0);
L13:;
si0=l7;
si1=4U;
si0+=si1;
l7=si0;
si0=l5;
si1=-1U;
si0+=si1;
l5=si0;
if(si0){
goto L12;
}
}
L11:;
si0=l2;
si1=52U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L14;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0+48U);
f15024(i,si0);
L14:;
si0=l2;
si1=20U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
si0=!(si0);
if(si0){
goto L15;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0+16U);
si1=l7;
si2=2U;
si1<<=(si2&31);
si2=11U;
si1+=si2;
si2=-8U;
si1&=si2;
si0-=si1;
f15024(i,si0);
L15:;
si0=l2;
si1=40U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si0=!(si0);
if(si0){
goto L16;
}
si0=l2;
si1=32U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
L17:;
{
si0=l7;
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L18;
}
si0=l7;
si0=i32_load(&i->m0,(U64)si0);
f15024(i,si0);
L18:;
si0=l7;
si1=12U;
si0+=si1;
l1=si0;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si1=l6;
si1=i32_load(&i->m0,(U64)si1);
l6=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l6;
si1=1U;
si0=si0 != si1;
if(si0){
goto L19;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
f5522(i,si0);
L19:;
si0=l7;
si1=20U;
si0+=si1;
l7=si0;
si0=l5;
si1=-1U;
si0+=si1;
l5=si0;
if(si0){
goto L17;
}
}
L16:;
si0=1U;
l7=si0;
si0=l2;
si1=36U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L2;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0+32U);
f15024(i,si0);
L2:;
si0=l0;
si1=l3;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l7;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=112U;
si0+=si1;
i->g0=si0;
goto L0;
L1:;
f14795(i);
UNREACHABLE;
L0:;
}

void f5538(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
F64 l7=0;
U32 l8=0;
U32 l9=0;
U32 si0,si1,si2,si3;
U64 sj0,sj1,sj2;
F64 sd0,sd1;
si0=i->g0;
si1=80U;
si0-=si1;
l3=si0;
i->g0=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+88U);
si1=80U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=l1;
si1=i32_load(&i->m0,(U64)si1+28U);
si0=si0 != si1;
if(si0){
goto L3;
}
si0=l1;
si1=l1;
si1=i32_load(&i->m0,(U64)si1);
l2=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=0U;
l4=si0;
si0=l1;
l5=si0;
si0=l2;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 == si1;
if(si0){
goto L1;
}
goto L2;
L3:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+28U);
si1=160U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si0=!(si0);
if(si0){
goto L4;
}
si0=l3;
si1=8U;
si0+=si1;
si1=l1;
si2=l2;
si3=l5;
TF(i->t0,si3,void (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+12U);
l6=si0;
l5=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+8U);
l4=si0;
switch(si0){
case 0:
goto L5;
case 1:
goto L2;
case 2:
goto L4;
default:
goto L2;
}
L5:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+88U);
si1=80U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=l6;
si1=i32_load(&i->m0,(U64)si1+28U);
si0=si0 != si1;
if(si0){
goto L7;
}
si0=l6;
si1=l6;
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
goto L1;
}
si0=l6;
si1=l6;
si1=i32_load(&i->m0,(U64)si1);
l1=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=0U;
l4=si0;
si0=l6;
l5=si0;
si0=l1;
si1=1U;
si0=si0 == si1;
if(si0){
goto L6;
}
si0=l6;
l5=si0;
goto L2;
L7:;
si0=l6;
si0=i32_load(&i->m0,(U64)si0+28U);
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
goto L1;
}
si0=l3;
si1=l5;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l6;
sj0=i64_load(&i->m0,(U64)si0+8U);
sj1=-5931764594261734995ULL;
sj0^=sj1;
si1=l6;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
sj2=6370977829563918538ULL;
sj1^=sj2;
sj0|=sj1;
si0=!(sj0);
si0=!(si0);
if(si0){
goto L10;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0+88U);
si1=532U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si0=l3;
si1=44U;
si0+=si1;
sj1=1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=2U;
i32_store(&i->m0,(U64)si0+36U,si1);
si0=l3;
si1=17314348U;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l3;
si1=1984U;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l3;
si1=l3;
si2=20U;
si1+=si2;
i32_store(&i->m0,(U64)si0+40U,si1);
si0=l3;
si1=l3;
si2=16U;
si1+=si2;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l3;
si1=60U;
si0+=si1;
si1=l3;
si2=32U;
si1+=si2;
f64(i,si0,si1);
si0=l1;
si1=l3;
si2=60U;
si1+=si2;
si2=1U;
si3=l2;
si0=f13967(i,si0,si1,si2,si3);
l5=si0;
if(si0){
goto L8;
}
si0=l6;
si1=l6;
si1=i32_load(&i->m0,(U64)si1);
l1=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=0U;
l4=si0;
si0=l6;
l5=si0;
si0=l1;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 != si1;
if(si0){
goto L9;
}
goto L1;
L10:;
si0=l3;
si1=32U;
si0+=si1;
si1=12U;
si0+=si1;
sj1=2ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=60U;
si0+=si1;
si1=12U;
si0+=si1;
si1=1984U;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=3U;
i32_store(&i->m0,(U64)si0+36U,si1);
si0=l3;
si1=17314400U;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l3;
si1=1723U;
i32_store(&i->m0,(U64)si0+64U,si1);
si0=l3;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+28U);
i32_store(&i->m0,(U64)si0+76U,si1);
si0=l3;
si1=l3;
si2=60U;
si1+=si2;
i32_store(&i->m0,(U64)si0+40U,si1);
si0=l3;
si1=l3;
si2=16U;
si1+=si2;
i32_store(&i->m0,(U64)si0+68U,si1);
si0=l3;
si1=l3;
si2=76U;
si1+=si2;
i32_store(&i->m0,(U64)si0+60U,si1);
si0=l3;
si1=20U;
si0+=si1;
si1=l3;
si2=32U;
si1+=si2;
f64(i,si0,si1);
si0=1U;
l4=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+88U);
si1=504U;
si0+=si1;
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
goto L1;
}
si0=l2;
si1=l1;
si2=l3;
si3=20U;
si2+=si3;
si0=f11521(i,si0,si1,si2);
l5=si0;
L9:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+16U);
l1=si0;
si1=l1;
si1=i32_load(&i->m0,(U64)si1);
l1=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
si1=1U;
si0=si0 != si1;
if(si0){
goto L11;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0+16U);
f5522(i,si0);
L11:;
si0=l6;
si1=l6;
si1=i32_load(&i->m0,(U64)si1);
l1=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
si1=1U;
si0=si0 == si1;
if(si0){
goto L6;
}
goto L2;
L8:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+16U);
l1=si0;
si1=l1;
si1=i32_load(&i->m0,(U64)si1);
l1=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
si1=1U;
si0=si0 != si1;
if(si0){
goto L12;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0+16U);
f5522(i,si0);
L12:;
si0=l6;
si1=l6;
si1=i32_load(&i->m0,(U64)si1);
l1=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=1U;
l4=si0;
si0=l1;
si1=1U;
si0=si0 != si1;
if(si0){
goto L2;
}
L6:;
si0=l6;
f5522(i,si0);
goto L2;
L4:;
si0=l3;
si1=l1;
si2=l2;
f5555(i,si0,si1,si2);
si0=2U;
l4=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si1=2U;
si0=si0 == si1;
if(si0){
goto L2;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0+4U);
l5=si0;
si0=l1;
if(si0){
goto L15;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0+88U);
l1=si0;
si0=l3;
si1=32U;
si0+=si1;
si1=l5;
si2=56U;
si1+=si2;
si2=l2;
f8636(i,si0,si1,si2);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+32U);
if(si0){
goto L16;
}
si0=l3;
sd0=f64_load(&i->m0,(U64)si0+40U);
l7=sd0;
si0=l1;
si1=80U;
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
si0=0U;
l6=si0;
si0=l2;
si1=77U;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=1U;
si0&=si1;
si0=!(si0);
if(si0){
goto L17;
}
si0=l1;
si1=8U;
si0+=si1;
si0=f10795(i,si0);
l6=si0;
L17:;
si0=l2;
si1=352U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l8=si0;
if(si0){
goto L19;
}
si0=4U;
l9=si0;
goto L18;
L19:;
si0=l8;
si1=268435455U;
si0=si0 > si1;
if(si0){
goto L22;
}
si0=l8;
si1=3U;
si0<<=(si1&31);
l1=si0;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L22;
}
si0=l1;
if(si0){
goto L21;
}
si0=4U;
l9=si0;
goto L20;
L22:;
f53(i);
UNREACHABLE;
L21:;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=l1;
si0=f15022(i,si0);
l9=si0;
si0=!(si0);
if(si0){
goto L14;
}
L20:;
si0=l9;
si1=0U;
si2=l1;
si0=f15145(i,si0,si1,si2);
L18:;
si0=0U;
l4=si0;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=64U;
si0=f15022(i,si0);
l1=si0;
si0=!(si0);
if(si0){
goto L13;
}
si0=l1;
sj1=-5931764594261734995ULL;
i64_store(&i->m0,(U64)si0+8U,sj1);
si0=l1;
sd1=l7;
f64_store(&i->m0,(U64)si0+56U,sd1);
si0=l1;
si1=l8;
i32_store(&i->m0,(U64)si0+52U,si1);
si0=l1;
si1=l9;
i32_store(&i->m0,(U64)si0+48U,si1);
si0=l1;
si1=0U;
i32_store(&i->m0,(U64)si0+44U,si1);
si0=l1;
si1=l2;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l1;
si1=17312420U;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l1;
si1=1U;
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
si1=16U;
si0+=si1;
sj1=6370977829563918538ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si1=l6;
si2=0U;
si1=si1 != si2;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l1;
si1=l6;
sj1=(U64)(si1);
sj2=32ULL;
sj1<<=(sj2&63);
i64_store(&i->m0,(U64)si0+36U,sj1);
si0=l5;
si1=l5;
si1=i32_load(&i->m0,(U64)si1);
l2=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=1U;
si0=si0 == si1;
if(si0){
goto L23;
}
si0=l1;
l5=si0;
goto L2;
L23:;
si0=l5;
f5522(i,si0);
si0=l1;
l5=si0;
goto L2;
L16:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+36U);
l1=si0;
si0=l5;
si1=l5;
si1=i32_load(&i->m0,(U64)si1);
l2=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=1U;
l4=si0;
si0=l2;
si1=1U;
si0=si0 == si1;
if(si0){
goto L24;
}
si0=l1;
l5=si0;
goto L2;
L24:;
si0=l5;
f5522(i,si0);
si0=l1;
l5=si0;
goto L2;
L15:;
si0=1U;
l4=si0;
goto L2;
L14:;
si0=4U;
si1=l1;
f52(i,si0,si1);
UNREACHABLE;
L13:;
si0=8U;
si1=64U;
f52(i,si0,si1);
UNREACHABLE;
L2:;
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
goto L0;
L1:;
f14795(i);
UNREACHABLE;
L0:;
}

void f5539(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U32 l5=0;
U32 l6=0;
U64 l7=0;
U64 l8=0;
U32 si0,si1,si2,si3,si4;
U64 sj0,sj1,sj2;
si0=i->g0;
si1=96U;
si0-=si1;
l4=si0;
i->g0=si0;
si0=l1;
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
goto L6;
}
si0=l4;
si1=16U;
si0+=si1;
si1=l3;
si2=l1;
si3=l3;
si3=i32_load(&i->m0,(U64)si3+88U);
si4=940U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
f11942(i,si0,si1,si2,si3);
si0=0U;
l1=si0;
si0=0U;
l5=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+16U);
l6=si0;
si1=2U;
si0=si0 == si1;
if(si0){
goto L1;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0+20U);
l5=si0;
si0=l6;
si0=!(si0);
if(si0){
goto L7;
}
si0=l5;
l2=si0;
goto L3;
L7:;
si0=l2;
si1=l2;
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
goto L6;
}
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=4U;
si0=f15022(i,si0);
l6=si0;
si0=!(si0);
if(si0){
goto L5;
}
si0=l6;
si1=l2;
i32_store(&i->m0,(U64)si0,si1);
si0=0U;
sj0=i64_load(&i->m0,(U64)si0+18663248U);
si0=!(sj0);
if(si0){
goto L9;
}
si0=0U;
sj0=i64_load(&i->m0,(U64)si0+18663264U);
l7=sj0;
si0=0U;
sj0=i64_load(&i->m0,(U64)si0+18663256U);
l8=sj0;
goto L8;
L9:;
si0=l4;
si1=32U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
sj1=0ULL;
i64_store(&i->m0,(U64)si0+24U,sj1);
si0=l4;
si1=24U;
si0+=si1;
si1=16U;
si0=wasi_snapshot_preview1__random_get(i,si0,si1);
l1=si0;
if(si0){
goto L4;
}
si0=0U;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1+32U);
l7=sj1;
i64_store(&i->m0,(U64)si0+18663264U,sj1);
si0=0U;
sj1=1ULL;
i64_store(&i->m0,(U64)si0+18663248U,sj1);
si0=l4;
sj0=i64_load(&i->m0,(U64)si0+24U);
l8=sj0;
L8:;
si0=l4;
si1=76U;
si0+=si1;
sj1=4294967297ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
sj1=l8;
i64_store(&i->m0,(U64)si0+24U,sj1);
si0=0U;
l1=si0;
si0=0U;
sj1=l8;
sj2=1ULL;
sj1+=sj2;
i64_store(&i->m0,(U64)si0+18663256U,sj1);
si0=l4;
si1=l6;
i32_store(&i->m0,(U64)si0+72U,si1);
si0=l4;
sj1=0ULL;
i64_store(&i->m0,(U64)si0+60U,sj1);
si0=l4;
sj1=17179869184ULL;
i64_store(&i->m0,(U64)si0+52U,sj1);
si0=l4;
sj1=0ULL;
i64_store(&i->m0,(U64)si0+44U,sj1);
si0=l4;
si1=17359936U;
i32_store(&i->m0,(U64)si0+40U,si1);
si0=l4;
sj1=l7;
i64_store(&i->m0,(U64)si0+32U,sj1);
si0=l4;
si1=8U;
si0+=si1;
si1=l5;
si2=l4;
si3=24U;
si2+=si3;
si3=l3;
f5537(i,si0,si1,si2,si3);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+12U);
l2=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+8U);
l3=si0;
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
goto L10;
}
si0=l5;
f5522(i,si0);
L10:;
si0=0U;
l5=si0;
si0=l3;
switch(si0){
case 0:
goto L2;
case 1:
goto L3;
case 2:
goto L1;
default:
goto L2;
}
L6:;
f14795(i);
UNREACHABLE;
L5:;
si0=4U;
si1=4U;
f52(i,si0,si1);
UNREACHABLE;
L4:;
si0=l4;
si1=l1;
i32_store16(&i->m0,(U64)si0+94U,si1);
si0=17683216U;
si1=18U;
si2=l4;
si3=94U;
si2+=si3;
si3=17683100U;
si4=17683268U;
f641(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L3:;
si0=1U;
l3=si0;
L2:;
si0=l2;
l1=si0;
si0=l3;
l5=si0;
L1:;
si0=l0;
si1=l1;
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

void f5540(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4) {
U32 l5=0;
U32 l6=0;
U32 l7=0;
U64 l8=0;
U64 l9=0;
U32 si0,si1,si2,si3,si4;
U64 sj0,sj1,sj2;
si0=i->g0;
si1=96U;
si0-=si1;
l5=si0;
i->g0=si0;
si0=l1;
si1=l1;
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
goto L8;
}
si0=l5;
si1=16U;
si0+=si1;
si1=l4;
si2=l1;
si3=l4;
si3=i32_load(&i->m0,(U64)si3+88U);
si4=940U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
f11942(i,si0,si1,si2,si3);
si0=0U;
l1=si0;
si0=0U;
l6=si0;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+16U);
l7=si0;
si1=2U;
si0=si0 == si1;
if(si0){
goto L1;
}
si0=l5;
si0=i32_load(&i->m0,(U64)si0+20U);
l6=si0;
si0=l7;
si0=!(si0);
if(si0){
goto L9;
}
si0=l6;
l3=si0;
goto L3;
L9:;
si0=l3;
if(si0){
goto L11;
}
si0=1U;
l1=si0;
goto L10;
L11:;
si0=l3;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L7;
}
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=l3;
si0=f15022(i,si0);
l1=si0;
si0=!(si0);
if(si0){
goto L6;
}
L10:;
si0=l1;
si1=l2;
si2=l3;
si0=f15143(i,si0,si1,si2);
l1=si0;
si0=l5;
si1=l3;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l5;
si1=l3;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l5;
si1=l1;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l5;
si1=24U;
si0+=si1;
si1=l4;
si1=i32_load(&i->m0,(U64)si1+88U);
si2=8U;
si1+=si2;
si0=f8912(i,si0,si1);
l1=si0;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=4U;
si0=f15022(i,si0);
l3=si0;
si0=!(si0);
if(si0){
goto L5;
}
si0=l3;
si1=l1;
i32_store(&i->m0,(U64)si0,si1);
si0=0U;
sj0=i64_load(&i->m0,(U64)si0+18663248U);
si0=!(sj0);
if(si0){
goto L13;
}
si0=0U;
sj0=i64_load(&i->m0,(U64)si0+18663264U);
l8=sj0;
si0=0U;
sj0=i64_load(&i->m0,(U64)si0+18663256U);
l9=sj0;
goto L12;
L13:;
si0=l5;
si1=32U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
sj1=0ULL;
i64_store(&i->m0,(U64)si0+24U,sj1);
si0=l5;
si1=24U;
si0+=si1;
si1=16U;
si0=wasi_snapshot_preview1__random_get(i,si0,si1);
l1=si0;
if(si0){
goto L4;
}
si0=0U;
si1=l5;
sj1=i64_load(&i->m0,(U64)si1+32U);
l8=sj1;
i64_store(&i->m0,(U64)si0+18663264U,sj1);
si0=0U;
sj1=1ULL;
i64_store(&i->m0,(U64)si0+18663248U,sj1);
si0=l5;
sj0=i64_load(&i->m0,(U64)si0+24U);
l9=sj0;
L12:;
si0=l5;
si1=76U;
si0+=si1;
sj1=4294967297ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
sj1=l9;
i64_store(&i->m0,(U64)si0+24U,sj1);
si0=0U;
l1=si0;
si0=0U;
sj1=l9;
sj2=1ULL;
sj1+=sj2;
i64_store(&i->m0,(U64)si0+18663256U,sj1);
si0=l5;
si1=l3;
i32_store(&i->m0,(U64)si0+72U,si1);
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
si1=17359936U;
i32_store(&i->m0,(U64)si0+40U,si1);
si0=l5;
sj1=l8;
i64_store(&i->m0,(U64)si0+32U,sj1);
si0=l5;
si1=8U;
si0+=si1;
si1=l6;
si2=l5;
si3=24U;
si2+=si3;
si3=l4;
f5537(i,si0,si1,si2,si3);
si0=l5;
si0=i32_load(&i->m0,(U64)si0+12U);
l3=si0;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+8U);
l4=si0;
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
goto L14;
}
si0=l6;
f5522(i,si0);
L14:;
si0=0U;
l6=si0;
si0=l4;
switch(si0){
case 0:
goto L2;
case 1:
goto L3;
case 2:
goto L1;
default:
goto L2;
}
L8:;
f14795(i);
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
si0=4U;
si1=4U;
f52(i,si0,si1);
UNREACHABLE;
L4:;
si0=l5;
si1=l1;
i32_store16(&i->m0,(U64)si0+94U,si1);
si0=17683216U;
si1=18U;
si2=l5;
si3=94U;
si2+=si3;
si3=17683100U;
si4=17683268U;
f641(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L3:;
si0=1U;
l4=si0;
L2:;
si0=l3;
l1=si0;
si0=l4;
l6=si0;
L1:;
si0=l0;
si1=l1;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l6;
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=96U;
si0+=si1;
i->g0=si0;
L0:;
}

void f5541(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U32 l5=0;
U32 l6=0;
U64 l7=0;
U64 l8=0;
U32 si0,si1,si2,si3,si4;
U64 sj0,sj1,sj2;
si0=i->g0;
si1=96U;
si0-=si1;
l4=si0;
i->g0=si0;
si0=l1;
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
goto L6;
}
si0=l4;
si1=16U;
si0+=si1;
si1=l3;
si2=l1;
si3=l3;
si3=i32_load(&i->m0,(U64)si3+88U);
si4=940U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
f11942(i,si0,si1,si2,si3);
si0=0U;
l1=si0;
si0=0U;
l5=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+16U);
l6=si0;
si1=2U;
si0=si0 == si1;
if(si0){
goto L1;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0+20U);
l5=si0;
si0=l6;
si0=!(si0);
if(si0){
goto L7;
}
si0=l5;
l2=si0;
goto L3;
L7:;
si0=l2;
si1=l2;
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
goto L6;
}
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=4U;
si0=f15022(i,si0);
l6=si0;
si0=!(si0);
if(si0){
goto L5;
}
si0=l6;
si1=l2;
i32_store(&i->m0,(U64)si0,si1);
si0=0U;
sj0=i64_load(&i->m0,(U64)si0+18663248U);
si0=!(sj0);
if(si0){
goto L9;
}
si0=0U;
sj0=i64_load(&i->m0,(U64)si0+18663264U);
l7=sj0;
si0=0U;
sj0=i64_load(&i->m0,(U64)si0+18663256U);
l8=sj0;
goto L8;
L9:;
si0=l4;
si1=32U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
sj1=0ULL;
i64_store(&i->m0,(U64)si0+24U,sj1);
si0=l4;
si1=24U;
si0+=si1;
si1=16U;
si0=wasi_snapshot_preview1__random_get(i,si0,si1);
l1=si0;
if(si0){
goto L4;
}
si0=0U;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1+32U);
l7=sj1;
i64_store(&i->m0,(U64)si0+18663264U,sj1);
si0=0U;
sj1=1ULL;
i64_store(&i->m0,(U64)si0+18663248U,sj1);
si0=l4;
sj0=i64_load(&i->m0,(U64)si0+24U);
l8=sj0;
L8:;
si0=l4;
si1=76U;
si0+=si1;
sj1=4294967297ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
sj1=l8;
i64_store(&i->m0,(U64)si0+24U,sj1);
si0=0U;
l1=si0;
si0=0U;
sj1=l8;
sj2=1ULL;
sj1+=sj2;
i64_store(&i->m0,(U64)si0+18663256U,sj1);
si0=l4;
si1=l6;
i32_store(&i->m0,(U64)si0+72U,si1);
si0=l4;
sj1=0ULL;
i64_store(&i->m0,(U64)si0+60U,sj1);
si0=l4;
sj1=17179869184ULL;
i64_store(&i->m0,(U64)si0+52U,sj1);
si0=l4;
sj1=0ULL;
i64_store(&i->m0,(U64)si0+44U,sj1);
si0=l4;
si1=17359936U;
i32_store(&i->m0,(U64)si0+40U,si1);
si0=l4;
sj1=l7;
i64_store(&i->m0,(U64)si0+32U,sj1);
si0=l4;
si1=8U;
si0+=si1;
si1=l5;
si2=l4;
si3=24U;
si2+=si3;
si3=l3;
f5537(i,si0,si1,si2,si3);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+12U);
l2=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+8U);
l3=si0;
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
goto L10;
}
si0=l5;
f5522(i,si0);
L10:;
si0=0U;
l5=si0;
si0=l3;
switch(si0){
case 0:
goto L2;
case 1:
goto L3;
case 2:
goto L1;
default:
goto L2;
}
L6:;
f14795(i);
UNREACHABLE;
L5:;
si0=4U;
si1=4U;
f52(i,si0,si1);
UNREACHABLE;
L4:;
si0=l4;
si1=l1;
i32_store16(&i->m0,(U64)si0+94U,si1);
si0=17683216U;
si1=18U;
si2=l4;
si3=94U;
si2+=si3;
si3=17683100U;
si4=17683268U;
f641(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L3:;
si0=1U;
l3=si0;
L2:;
si0=l2;
l1=si0;
si0=l3;
l5=si0;
L1:;
si0=l0;
si1=l1;
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

void f5542(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 si0,si1,si2,si3,si4;
U64 sj0,sj1,sj2;
si0=i->g0;
si1=96U;
si0-=si1;
l3=si0;
i->g0=si0;
si0=18657636U;
si0=f7755(i,si0);
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
i32_store(&i->m0,(U64)si0+8U,si1);
si0=17359512U;
si1=30U;
si2=l3;
si3=8U;
si2+=si3;
si3=17359544U;
si4=17359664U;
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
si1=32U;
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
si1=84U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=76U;
si0+=si1;
sj1=17179869184ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=68U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=17310696U;
i32_store(&i->m0,(U64)si0+64U,si1);
si0=l3;
si1=8U;
si0+=si1;
si1=l1;
si2=56U;
si1+=si2;
l6=si1;
si2=0U;
f7458(i,si0,si1,si2);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+8U);
l4=si0;
si0=!(si0);
if(si0){
goto L7;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0+16U);
l7=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+12U);
l1=si0;
L8:;
{
si0=l2;
si0=i32_load(&i->m0,(U64)si0+88U);
l5=si0;
si1=200U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=l4;
si1=i32_load(&i->m0,(U64)si1+28U);
si0=si0 != si1;
if(si0){
goto L6;
}
si0=l4;
sj0=i64_load(&i->m0,(U64)si0+8U);
sj1=-2295367307525992740ULL;
sj0^=sj1;
si1=l4;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
sj2=6911619425446520681ULL;
sj1^=sj2;
sj0|=sj1;
si0=!(sj0);
si0=!(si0);
if(si0){
goto L5;
}
si0=l3;
si1=l3;
si2=32U;
si1+=si2;
si2=l5;
si3=8U;
si2+=si3;
si3=l4;
si2=f10356(i,si2,si3);
si3=l7;
f13785(i,si0,si1,si2,si3);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+4U);
l4=si0;
si0=!(si0);
if(si0){
goto L9;
}
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
goto L9;
}
si0=l4;
f5522(i,si0);
L9:;
si0=l3;
si1=8U;
si0+=si1;
si1=l6;
si2=l1;
f7458(i,si0,si1,si2);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+16U);
l7=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+12U);
l1=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+8U);
l4=si0;
if(si0){
goto L8;
}
}
L7:;
si0=l0;
si1=l3;
sj1=i64_load(&i->m0,(U64)si1+32U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=56U;
si0+=si1;
si1=l3;
si2=32U;
si1+=si2;
si2=56U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=48U;
si0+=si1;
si1=l3;
si2=32U;
si1+=si2;
si2=48U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=40U;
si0+=si1;
si1=l3;
si2=32U;
si1+=si2;
si2=40U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=32U;
si0+=si1;
si1=l3;
si2=32U;
si1+=si2;
si2=32U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=24U;
si0+=si1;
si1=l3;
si2=32U;
si1+=si2;
si2=24U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=16U;
si0+=si1;
si1=l3;
si2=32U;
si1+=si2;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=8U;
si0+=si1;
si1=l3;
si2=32U;
si1+=si2;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=96U;
si0+=si1;
i->g0=si0;
goto L0;
L6:;
si0=l3;
si1=l4;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=17310764U;
si1=24U;
si2=l3;
si3=8U;
si2+=si3;
si3=17310788U;
si4=17310828U;
f641(i,si0,si1,si2,si3,si4);
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
si1=17313488U;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l3;
si1=17310300U;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l3;
si1=8U;
si0+=si1;
si1=17313520U;
f614(i,si0,si1);
UNREACHABLE;
L0:;
}

void f5543(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U32 l5=0;
U32 l6=0;
U64 l7=0;
U32 l8=0;
U32 l9=0;
U32 l10=0;
U32 si0,si1,si2,si3,si4;
U64 sj0,sj1,sj4;
si0=i->g0;
si1=32U;
si0-=si1;
l4=si0;
i->g0=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+88U);
si1=68U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=l1;
si1=i32_load(&i->m0,(U64)si1+28U);
si0=si0 == si1;
if(si0){
goto L3;
}
si0=l4;
si1=24U;
si0+=si1;
si1=l1;
si2=l2;
si3=l3;
f5544(i,si0,si1,si2,si3);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+28U);
l5=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+24U);
if(si0){
goto L2;
}
si0=0U;
l6=si0;
goto L1;
L3:;
si0=l1;
si1=56U;
si0+=si1;
l6=si0;
si0=l2;
si1=72U;
si0+=si1;
sj0=i64_load(&i->m0,(U64)si0);
l7=sj0;
sj1=-1ULL;
si0=sj0 != sj1;
if(si0){
goto L4;
}
si0=l2;
si1=l3;
si1=i32_load(&i->m0,(U64)si1+96U);
si2=224U;
si1+=si2;
si2=l2;
si3=64U;
si2+=si3;
si2=i32_load(&i->m0,(U64)si2);
si3=l2;
si4=68U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
sj1=f2068(i,si1,si2,si3);
l7=sj1;
i64_store(&i->m0,(U64)si0+72U,sj1);
L4:;
si0=l4;
si1=8U;
si0+=si1;
si1=l6;
si2=l3;
si3=l2;
sj4=l7;
f7444(i,si0,si1,si2,si3,sj4);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+12U);
l5=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+8U);
l6=si0;
goto L1;
L2:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+88U);
si1=392U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l8=si0;
si1=l5;
si1=i32_load(&i->m0,(U64)si1+28U);
l9=si1;
si0=si0 == si1;
if(si0){
goto L5;
}
si0=l9;
si1=468U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=2U;
si0<<=(si1&31);
l6=si0;
si0=l9;
si1=460U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l9=si0;
L6:;
{
si0=l6;
if(si0){
goto L7;
}
si0=1U;
l6=si0;
goto L1;
L7:;
si0=l6;
si1=-4U;
si0+=si1;
l6=si0;
si0=l9;
si0=i32_load(&i->m0,(U64)si0);
l10=si0;
si0=l9;
si1=4U;
si0+=si1;
l9=si0;
si0=l10;
si1=l8;
si0=si0 != si1;
if(si0){
goto L6;
}
}
L5:;
si0=l4;
si1=16U;
si0+=si1;
si1=l1;
si2=l2;
si3=l3;
f5539(i,si0,si1,si2,si3);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+20U);
l9=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+16U);
l6=si0;
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
goto L8;
}
si0=l5;
f5522(i,si0);
L8:;
si0=l9;
l5=si0;
L1:;
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
L0:;
}

void f5544(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U32 l5=0;
U32 l6=0;
U64 l7=0;
U32 l8=0;
U32 l9=0;
U32 l10=0;
U32 l11=0;
U32 l12=0;
U32 si0,si1,si2,si3,si4,si5;
U64 sj0,sj1,sj4;
si0=i->g0;
si1=176U;
si0-=si1;
l4=si0;
i->g0=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+88U);
si1=68U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=l1;
si1=i32_load(&i->m0,(U64)si1+28U);
l5=si1;
si0=si0 != si1;
if(si0){
goto L8;
}
si0=l5;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+28U);
si0=si0 == si1;
if(si0){
goto L9;
}
si0=l4;
si1=16U;
si0+=si1;
si1=l1;
si2=l2;
si3=l3;
f5544(i,si0,si1,si2,si3);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+20U);
l5=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+16U);
l6=si0;
goto L1;
L9:;
si0=l1;
si1=56U;
si0+=si1;
l5=si0;
si0=l2;
si1=72U;
si0+=si1;
sj0=i64_load(&i->m0,(U64)si0);
l7=sj0;
sj1=-1ULL;
si0=sj0 != sj1;
if(si0){
goto L10;
}
si0=l2;
si1=l3;
si1=i32_load(&i->m0,(U64)si1+96U);
si2=224U;
si1+=si2;
si2=l2;
si3=64U;
si2+=si3;
si2=i32_load(&i->m0,(U64)si2);
si3=l2;
si4=68U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
sj1=f2068(i,si1,si2,si3);
l7=sj1;
i64_store(&i->m0,(U64)si0+72U,sj1);
L10:;
si0=l4;
si1=8U;
si0+=si1;
si1=l5;
si2=l3;
si3=l2;
sj4=l7;
f7444(i,si0,si1,si2,si3,sj4);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+12U);
l5=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+8U);
si0=!(si0);
if(si0){
goto L11;
}
si0=1U;
l6=si0;
goto L1;
L11:;
si0=0U;
l6=si0;
si0=l5;
if(si0){
goto L1;
}
si0=l4;
si1=l1;
si2=l2;
si3=l3;
f5539(i,si0,si1,si2,si3);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+4U);
l5=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L12;
}
si0=1U;
l6=si0;
goto L1;
L12:;
si0=l5;
if(si0){
goto L1;
}
si0=1U;
l6=si0;
si0=l2;
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
goto L7;
}
si0=l3;
si1=l2;
si0=f11876(i,si0,si1);
l5=si0;
goto L1;
L8:;
si0=l2;
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
goto L7;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+28U);
l6=si0;
si1=292U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l8=si0;
if(si0){
goto L24;
}
si0=l6;
si1=468U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=2U;
si0<<=(si1&31);
l5=si0;
si0=l6;
si1=460U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
L25:;
{
si0=l5;
si0=!(si0);
if(si0){
goto L23;
}
si0=l5;
si1=-4U;
si0+=si1;
l5=si0;
si0=l6;
si0=i32_load(&i->m0,(U64)si0);
l8=si0;
si0=l6;
si1=4U;
si0+=si1;
l6=si0;
si0=l8;
si1=292U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l8=si0;
si0=!(si0);
if(si0){
goto L25;
}
}
L24:;
si0=l8;
si0=i32_load(&i->m0,(U64)si0+4U);
if(si0){
goto L22;
}
L23:;
si0=l4;
si1=92U;
si0+=si1;
sj1=1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=2U;
i32_store(&i->m0,(U64)si0+84U,si1);
si0=l4;
si1=17432196U;
i32_store(&i->m0,(U64)si0+80U,si1);
si0=l4;
si1=1723U;
i32_store(&i->m0,(U64)si0+172U,si1);
si0=l4;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+28U);
i32_store(&i->m0,(U64)si0+160U,si1);
si0=l4;
si1=l4;
si2=168U;
si1+=si2;
i32_store(&i->m0,(U64)si0+88U,si1);
si0=l4;
si1=l4;
si2=160U;
si1+=si2;
i32_store(&i->m0,(U64)si0+168U,si1);
si0=l4;
si1=148U;
si0+=si1;
si1=l4;
si2=80U;
si1+=si2;
f64(i,si0,si1);
si0=l3;
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
goto L7;
}
si0=l3;
si1=l5;
si2=l4;
si3=148U;
si2+=si3;
si0=f11521(i,si0,si1,si2);
l8=si0;
si0=l4;
si1=72U;
si0+=si1;
si1=l1;
si2=l3;
f14507(i,si0,si1,si2);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+72U);
l6=si0;
si0=!(si0);
if(si0){
goto L19;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0+76U);
l1=si0;
si0=l4;
si1=56U;
si0+=si1;
si1=l2;
si2=l3;
f5555(i,si0,si1,si2);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+60U);
l5=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+56U);
switch(si0){
case 0:
goto L20;
case 1:
goto L17;
case 2:
goto L21;
default:
goto L20;
}
L22:;
si0=l8;
si0=i32_load(&i->m0,(U64)si0+4U);
l5=si0;
if(si0){
goto L26;
}
si0=l4;
si1=92U;
si0+=si1;
sj1=1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=2U;
i32_store(&i->m0,(U64)si0+84U,si1);
si0=l4;
si1=17432232U;
i32_store(&i->m0,(U64)si0+80U,si1);
si0=l4;
si1=1723U;
i32_store(&i->m0,(U64)si0+172U,si1);
si0=l4;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+28U);
i32_store(&i->m0,(U64)si0+160U,si1);
si0=l4;
si1=l4;
si2=168U;
si1+=si2;
i32_store(&i->m0,(U64)si0+88U,si1);
si0=l4;
si1=l4;
si2=160U;
si1+=si2;
i32_store(&i->m0,(U64)si0+168U,si1);
si0=l4;
si1=148U;
si0+=si1;
si1=l4;
si2=80U;
si1+=si2;
f64(i,si0,si1);
si0=1U;
l6=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+88U);
si1=504U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
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
goto L7;
}
si0=l3;
si1=l5;
si2=l4;
si3=148U;
si2+=si3;
si0=f11521(i,si0,si1,si2);
l5=si0;
si0=0U;
l3=si0;
goto L3;
L26:;
si0=l4;
si1=64U;
si0+=si1;
si1=l1;
si2=l8;
si3=l2;
si4=l3;
si5=l5;
TF(i->t0,si5,void (*)(rustpythonInstance*,U32,U32,U32,U32,U32))(i,si0,si1,si2,si3,si4);
si0=0U;
l3=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+68U);
l5=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+64U);
l6=si0;
goto L3;
L21:;
si0=l4;
si1=92U;
si0+=si1;
sj1=1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=2U;
i32_store(&i->m0,(U64)si0+84U,si1);
si0=l4;
si1=17311500U;
i32_store(&i->m0,(U64)si0+80U,si1);
si0=l4;
si1=1723U;
i32_store(&i->m0,(U64)si0+172U,si1);
si0=l4;
si1=l2;
si1=i32_load(&i->m0,(U64)si1+28U);
i32_store(&i->m0,(U64)si0+160U,si1);
si0=l4;
si1=l4;
si2=168U;
si1+=si2;
i32_store(&i->m0,(U64)si0+88U,si1);
si0=l4;
si1=l4;
si2=160U;
si1+=si2;
i32_store(&i->m0,(U64)si0+168U,si1);
si0=l4;
si1=148U;
si0+=si1;
si1=l4;
si2=80U;
si1+=si2;
f64(i,si0,si1);
si0=1U;
l9=si0;
si0=l3;
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
goto L7;
}
si0=l3;
si1=l5;
si2=l4;
si3=148U;
si2+=si3;
si0=f11521(i,si0,si1,si2);
l5=si0;
goto L16;
L20:;
si0=l4;
si1=48U;
si0+=si1;
si1=l5;
si2=56U;
si1+=si2;
f11349(i,si0,si1);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+48U);
l10=si0;
if(si0){
goto L28;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0+52U);
l11=si0;
goto L27;
L28:;
si0=l4;
si1=92U;
si0+=si1;
sj1=1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=17367008U;
i32_store(&i->m0,(U64)si0+80U,si1);
si0=l4;
si1=1028U;
i32_store(&i->m0,(U64)si0+164U,si1);
si0=l4;
si1=5U;
i32_store(&i->m0,(U64)si0+172U,si1);
si0=l4;
si1=17367026U;
i32_store(&i->m0,(U64)si0+168U,si1);
si0=l4;
si1=l4;
si2=160U;
si1+=si2;
i32_store(&i->m0,(U64)si0+88U,si1);
si0=l4;
si1=l4;
si2=168U;
si1+=si2;
i32_store(&i->m0,(U64)si0+160U,si1);
si0=l4;
si1=1U;
i32_store(&i->m0,(U64)si0+84U,si1);
si0=l4;
si1=148U;
si0+=si1;
si1=l4;
si2=80U;
si1+=si2;
f64(i,si0,si1);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+88U);
si1=352U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l9=si0;
si1=l9;
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
goto L7;
}
si0=l3;
si1=l9;
si2=l4;
si3=148U;
si2+=si3;
si0=f11521(i,si0,si1,si2);
l11=si0;
L27:;
si0=l5;
si1=l5;
si1=i32_load(&i->m0,(U64)si1);
l12=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=1U;
l9=si0;
si0=l12;
si1=1U;
si0=si0 != si1;
if(si0){
goto L29;
}
si0=l5;
f5522(i,si0);
L29:;
si0=l10;
si0=!(si0);
if(si0){
goto L18;
}
si0=l11;
l5=si0;
goto L16;
L19:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+88U);
si1=220U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l10=si0;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+28U);
l6=si1;
si0=si0 == si1;
if(si0){
goto L30;
}
si0=l6;
si1=468U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=2U;
si0<<=(si1&31);
l5=si0;
si0=l6;
si1=460U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
L31:;
{
si0=l5;
si0=!(si0);
if(si0){
goto L13;
}
si0=l5;
si1=-4U;
si0+=si1;
l5=si0;
si0=l6;
si0=i32_load(&i->m0,(U64)si0);
l9=si0;
si0=l6;
si1=4U;
si0+=si1;
l6=si0;
si0=l9;
si1=l10;
si0=si0 != si1;
if(si0){
goto L31;
}
}
L30:;
si0=l10;
si1=l1;
si0=si0 == si1;
if(si0){
goto L14;
}
si0=1U;
l9=si0;
si0=l1;
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
goto L7;
}
si0=l4;
si1=32U;
si0+=si1;
si1=l3;
si2=l1;
si3=l3;
si3=i32_load(&i->m0,(U64)si3+88U);
si4=688U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
f11844(i,si0,si1,si2,si3);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+36U);
l10=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+32U);
si0=!(si0);
if(si0){
goto L15;
}
si0=l10;
l5=si0;
goto L16;
L18:;
si0=l4;
si1=40U;
si0+=si1;
si1=l6;
si2=l1;
si3=l11;
si4=l3;
f14512(i,si0,si1,si2,si3,si4);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+44U);
l5=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+40U);
l6=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+72U);
if(si0){
goto L4;
}
goto L5;
L17:;
si0=1U;
l9=si0;
L16:;
si0=1U;
l6=si0;
goto L6;
L15:;
si0=l10;
si0=!(si0);
if(si0){
goto L13;
}
si0=l4;
si1=80U;
si0+=si1;
si1=l2;
f6048(i,si0,si1);
si0=l4;
si1=24U;
si0+=si1;
si1=l10;
si2=l4;
si3=80U;
si2+=si3;
si3=l3;
f5537(i,si0,si1,si2,si3);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+28U);
l5=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+24U);
l6=si0;
si0=l10;
si1=l10;
si1=i32_load(&i->m0,(U64)si1);
l1=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=0U;
l9=si0;
si0=l1;
si1=1U;
si0=si0 != si1;
if(si0){
goto L6;
}
si0=l10;
f5522(i,si0);
goto L6;
L14:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+28U);
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
goto L7;
}
si0=l4;
si1=80U;
si0+=si1;
si1=l5;
si2=l2;
si3=l3;
f12298(i,si0,si1,si2,si3);
si0=l4;
si1=80U;
si0+=si1;
si1=l3;
si1=i32_load(&i->m0,(U64)si1+88U);
si2=8U;
si1+=si2;
si0=f6028(i,si0,si1);
l5=si0;
si0=0U;
l9=si0;
si0=0U;
l6=si0;
goto L6;
L13:;
si0=l4;
si1=92U;
si0+=si1;
sj1=1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=2U;
i32_store(&i->m0,(U64)si0+84U,si1);
si0=l4;
si1=17315124U;
i32_store(&i->m0,(U64)si0+80U,si1);
si0=l4;
si1=1723U;
i32_store(&i->m0,(U64)si0+172U,si1);
si0=l4;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+28U);
i32_store(&i->m0,(U64)si0+160U,si1);
si0=l4;
si1=l4;
si2=168U;
si1+=si2;
i32_store(&i->m0,(U64)si0+88U,si1);
si0=l4;
si1=l4;
si2=160U;
si1+=si2;
i32_store(&i->m0,(U64)si0+168U,si1);
si0=l4;
si1=148U;
si0+=si1;
si1=l4;
si2=80U;
si1+=si2;
f64(i,si0,si1);
si0=1U;
l6=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+88U);
si1=504U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
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
goto L7;
}
si0=l3;
si1=l5;
si2=l4;
si3=148U;
si2+=si3;
si0=f11521(i,si0,si1,si2);
l5=si0;
goto L5;
L7:;
f14795(i);
UNREACHABLE;
L6:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+72U);
if(si0){
goto L32;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0+76U);
l1=si0;
si1=l1;
si1=i32_load(&i->m0,(U64)si1);
l1=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
si1=1U;
si0=si0 != si1;
if(si0){
goto L32;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0+76U);
f5522(i,si0);
L32:;
si0=l9;
si0=!(si0);
if(si0){
goto L33;
}
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
goto L33;
}
si0=l2;
f5522(i,si0);
L33:;
si0=l8;
si1=l8;
si1=i32_load(&i->m0,(U64)si1);
l1=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
si1=1U;
si0=si0 == si1;
if(si0){
goto L2;
}
goto L1;
L5:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+76U);
l1=si0;
si1=l1;
si1=i32_load(&i->m0,(U64)si1);
l1=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
si1=1U;
si0=si0 != si1;
if(si0){
goto L4;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0+76U);
f5522(i,si0);
L4:;
si0=1U;
l3=si0;
L3:;
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
goto L34;
}
si0=l2;
f5522(i,si0);
L34:;
si0=l3;
si0=!(si0);
if(si0){
goto L1;
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
goto L1;
}
L2:;
si0=l8;
f5522(i,si0);
L1:;
si0=l0;
si1=l5;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l6;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=176U;
si0+=si1;
i->g0=si0;
L0:;
}

void f5545(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4) {
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 l8=0;
U32 l9=0;
U32 l10=0;
U32 si0,si1,si2,si3,si4;
si0=i->g0;
si1=32U;
si0-=si1;
l5=si0;
i->g0=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+88U);
si1=68U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=l1;
si1=i32_load(&i->m0,(U64)si1+28U);
si0=si0 == si1;
if(si0){
goto L3;
}
si0=l5;
si1=24U;
si0+=si1;
si1=l1;
si2=l2;
si3=l3;
si4=l4;
f5546(i,si0,si1,si2,si3,si4);
si0=l5;
si0=i32_load(&i->m0,(U64)si0+28U);
l6=si0;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+24U);
if(si0){
goto L2;
}
si0=0U;
l7=si0;
goto L1;
L3:;
si0=l5;
si1=8U;
si0+=si1;
si1=l1;
si2=56U;
si1+=si2;
si2=l4;
si3=l2;
si4=l3;
f7442(i,si0,si1,si2,si3,si4);
si0=l5;
si0=i32_load(&i->m0,(U64)si0+12U);
l6=si0;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+8U);
l7=si0;
goto L1;
L2:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+88U);
si1=392U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l8=si0;
si1=l6;
si1=i32_load(&i->m0,(U64)si1+28U);
l9=si1;
si0=si0 == si1;
if(si0){
goto L4;
}
si0=l9;
si1=468U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=2U;
si0<<=(si1&31);
l7=si0;
si0=l9;
si1=460U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l9=si0;
L5:;
{
si0=l7;
if(si0){
goto L6;
}
si0=1U;
l7=si0;
goto L1;
L6:;
si0=l7;
si1=-4U;
si0+=si1;
l7=si0;
si0=l9;
si0=i32_load(&i->m0,(U64)si0);
l10=si0;
si0=l9;
si1=4U;
si0+=si1;
l9=si0;
si0=l10;
si1=l8;
si0=si0 != si1;
if(si0){
goto L5;
}
}
L4:;
si0=l5;
si1=16U;
si0+=si1;
si1=l1;
si2=l2;
si3=l3;
si4=l4;
f5540(i,si0,si1,si2,si3,si4);
si0=l5;
si0=i32_load(&i->m0,(U64)si0+20U);
l9=si0;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+16U);
l7=si0;
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
goto L7;
}
si0=l6;
f5522(i,si0);
L7:;
si0=l9;
l6=si0;
L1:;
si0=l0;
si1=l6;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l7;
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=32U;
si0+=si1;
i->g0=si0;
L0:;
}

void f5546(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4) {
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 l8=0;
U32 l9=0;
U32 l10=0;
U32 l11=0;
U32 si0,si1,si2,si3,si4,si5;
U64 sj1;
si0=i->g0;
si1=176U;
si0-=si1;
l5=si0;
i->g0=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+88U);
si1=68U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=l1;
si1=i32_load(&i->m0,(U64)si1+28U);
l6=si1;
si0=si0 != si1;
if(si0){
goto L3;
}
si0=l6;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+28U);
si0=si0 == si1;
if(si0){
goto L4;
}
si0=l5;
si1=16U;
si0+=si1;
si1=l1;
si2=l2;
si3=l3;
si4=l4;
f5546(i,si0,si1,si2,si3,si4);
si0=l5;
si0=i32_load(&i->m0,(U64)si0+20U);
l6=si0;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+16U);
l7=si0;
goto L2;
L4:;
si0=l5;
si1=8U;
si0+=si1;
si1=l1;
si2=56U;
si1+=si2;
si2=l4;
si3=l2;
si4=l3;
f7442(i,si0,si1,si2,si3,si4);
si0=l5;
si0=i32_load(&i->m0,(U64)si0+12U);
l6=si0;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+8U);
if(si0){
goto L5;
}
si0=0U;
l7=si0;
si0=l6;
if(si0){
goto L2;
}
si0=l5;
si1=l1;
si2=l2;
si3=l3;
si4=l4;
f5540(i,si0,si1,si2,si3,si4);
si0=l5;
si0=i32_load(&i->m0,(U64)si0+4U);
l6=si0;
si0=l5;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L5;
}
si0=l6;
if(si0){
goto L2;
}
si0=l4;
si1=l2;
si2=l3;
si3=l4;
si1=f7462(i,si1,si2,si3);
si0=f11876(i,si0,si1);
l6=si0;
L5:;
si0=1U;
l7=si0;
goto L2;
L3:;
si0=l3;
if(si0){
goto L15;
}
si0=1U;
l6=si0;
goto L14;
L15:;
si0=l3;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L13;
}
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=l3;
si0=f15022(i,si0);
l6=si0;
si0=!(si0);
if(si0){
goto L12;
}
L14:;
si0=l6;
si1=l2;
si2=l3;
si0=f15143(i,si0,si1,si2);
l6=si0;
si0=l5;
si1=l3;
i32_store(&i->m0,(U64)si0+88U,si1);
si0=l5;
si1=l3;
i32_store(&i->m0,(U64)si0+84U,si1);
si0=l5;
si1=l6;
i32_store(&i->m0,(U64)si0+80U,si1);
si0=l5;
si1=80U;
si0+=si1;
si1=l4;
si1=i32_load(&i->m0,(U64)si1+88U);
si2=8U;
si1+=si2;
si0=f8912(i,si0,si1);
l8=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+28U);
l6=si0;
si1=292U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
if(si0){
goto L19;
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
L20:;
{
si0=l3;
si0=!(si0);
if(si0){
goto L18;
}
si0=l3;
si1=-4U;
si0+=si1;
l3=si0;
si0=l6;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si0=l6;
si1=4U;
si0+=si1;
l6=si0;
si0=l2;
si1=292U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si0=!(si0);
if(si0){
goto L20;
}
}
L19:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+4U);
if(si0){
goto L17;
}
L18:;
si0=l5;
si1=92U;
si0+=si1;
sj1=1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=2U;
i32_store(&i->m0,(U64)si0+84U,si1);
si0=l5;
si1=17432196U;
i32_store(&i->m0,(U64)si0+80U,si1);
si0=l5;
si1=1723U;
i32_store(&i->m0,(U64)si0+172U,si1);
si0=l5;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+28U);
i32_store(&i->m0,(U64)si0+160U,si1);
si0=l5;
si1=l5;
si2=168U;
si1+=si2;
i32_store(&i->m0,(U64)si0+88U,si1);
si0=l5;
si1=l5;
si2=160U;
si1+=si2;
i32_store(&i->m0,(U64)si0+168U,si1);
si0=l5;
si1=148U;
si0+=si1;
si1=l5;
si2=80U;
si1+=si2;
f64(i,si0,si1);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+88U);
si1=504U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si1=l3;
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
goto L16;
}
goto L1;
L17:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+4U);
l3=si0;
if(si0){
goto L21;
}
si0=l5;
si1=92U;
si0+=si1;
sj1=1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=2U;
i32_store(&i->m0,(U64)si0+84U,si1);
si0=l5;
si1=17432232U;
i32_store(&i->m0,(U64)si0+80U,si1);
si0=l5;
si1=1723U;
i32_store(&i->m0,(U64)si0+172U,si1);
si0=l5;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+28U);
i32_store(&i->m0,(U64)si0+160U,si1);
si0=l5;
si1=l5;
si2=168U;
si1+=si2;
i32_store(&i->m0,(U64)si0+88U,si1);
si0=l5;
si1=l5;
si2=160U;
si1+=si2;
i32_store(&i->m0,(U64)si0+168U,si1);
si0=l5;
si1=148U;
si0+=si1;
si1=l5;
si2=80U;
si1+=si2;
f64(i,si0,si1);
si0=1U;
l7=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+88U);
si1=504U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si1=l3;
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
si1=l3;
si2=l5;
si3=148U;
si2+=si3;
si0=f11521(i,si0,si1,si2);
l6=si0;
si0=0U;
l4=si0;
goto L7;
L21:;
si0=l5;
si1=64U;
si0+=si1;
si1=l1;
si2=l2;
si3=l8;
si4=l4;
si5=l3;
TF(i->t0,si5,void (*)(rustpythonInstance*,U32,U32,U32,U32,U32))(i,si0,si1,si2,si3,si4);
si0=0U;
l4=si0;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+68U);
l6=si0;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+64U);
l7=si0;
goto L7;
L16:;
si0=l4;
si1=l3;
si2=l5;
si3=148U;
si2+=si3;
si0=f11521(i,si0,si1,si2);
l2=si0;
si0=l5;
si1=72U;
si0+=si1;
si1=l1;
si2=l4;
f14507(i,si0,si1,si2);
si0=l5;
si0=i32_load(&i->m0,(U64)si0+72U);
l7=si0;
si0=!(si0);
if(si0){
goto L27;
}
si0=l5;
si0=i32_load(&i->m0,(U64)si0+76U);
l1=si0;
si0=l5;
si1=56U;
si0+=si1;
si1=l8;
si2=l4;
f5555(i,si0,si1,si2);
si0=l5;
si0=i32_load(&i->m0,(U64)si0+60U);
l6=si0;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+56U);
switch(si0){
case 0:
goto L28;
case 1:
goto L25;
case 2:
goto L29;
default:
goto L28;
}
L29:;
si0=l5;
si1=92U;
si0+=si1;
sj1=1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=2U;
i32_store(&i->m0,(U64)si0+84U,si1);
si0=l5;
si1=17311500U;
i32_store(&i->m0,(U64)si0+80U,si1);
si0=l5;
si1=1723U;
i32_store(&i->m0,(U64)si0+172U,si1);
si0=l5;
si1=l8;
si1=i32_load(&i->m0,(U64)si1+28U);
i32_store(&i->m0,(U64)si0+160U,si1);
si0=l5;
si1=l5;
si2=168U;
si1+=si2;
i32_store(&i->m0,(U64)si0+88U,si1);
si0=l5;
si1=l5;
si2=160U;
si1+=si2;
i32_store(&i->m0,(U64)si0+168U,si1);
si0=l5;
si1=148U;
si0+=si1;
si1=l5;
si2=80U;
si1+=si2;
f64(i,si0,si1);
si0=1U;
l3=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+88U);
si1=504U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si1=l6;
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
goto L1;
}
si0=l4;
si1=l6;
si2=l5;
si3=148U;
si2+=si3;
si0=f11521(i,si0,si1,si2);
l6=si0;
goto L24;
L28:;
si0=l5;
si1=48U;
si0+=si1;
si1=l6;
si2=56U;
si1+=si2;
f11349(i,si0,si1);
si0=l5;
si0=i32_load(&i->m0,(U64)si0+48U);
l9=si0;
if(si0){
goto L31;
}
si0=l5;
si0=i32_load(&i->m0,(U64)si0+52U);
l10=si0;
goto L30;
L31:;
si0=l5;
si1=92U;
si0+=si1;
sj1=1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=17367008U;
i32_store(&i->m0,(U64)si0+80U,si1);
si0=l5;
si1=1028U;
i32_store(&i->m0,(U64)si0+164U,si1);
si0=l5;
si1=5U;
i32_store(&i->m0,(U64)si0+172U,si1);
si0=l5;
si1=17367026U;
i32_store(&i->m0,(U64)si0+168U,si1);
si0=l5;
si1=l5;
si2=160U;
si1+=si2;
i32_store(&i->m0,(U64)si0+88U,si1);
si0=l5;
si1=l5;
si2=168U;
si1+=si2;
i32_store(&i->m0,(U64)si0+160U,si1);
si0=l5;
si1=1U;
i32_store(&i->m0,(U64)si0+84U,si1);
si0=l5;
si1=148U;
si0+=si1;
si1=l5;
si2=80U;
si1+=si2;
f64(i,si0,si1);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+88U);
si1=352U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si1=l3;
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
goto L1;
}
si0=l4;
si1=l3;
si2=l5;
si3=148U;
si2+=si3;
si0=f11521(i,si0,si1,si2);
l10=si0;
L30:;
si0=l6;
si1=l6;
si1=i32_load(&i->m0,(U64)si1);
l11=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=1U;
l3=si0;
si0=l11;
si1=1U;
si0=si0 != si1;
if(si0){
goto L32;
}
si0=l6;
f5522(i,si0);
L32:;
si0=l9;
si0=!(si0);
if(si0){
goto L26;
}
si0=l10;
l6=si0;
goto L24;
L27:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+88U);
si1=220U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l9=si0;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+28U);
l6=si1;
si0=si0 == si1;
if(si0){
goto L33;
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
L34:;
{
si0=l3;
si0=!(si0);
if(si0){
goto L11;
}
si0=l3;
si1=-4U;
si0+=si1;
l3=si0;
si0=l6;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
si0=l6;
si1=4U;
si0+=si1;
l6=si0;
si0=l7;
si1=l9;
si0=si0 != si1;
if(si0){
goto L34;
}
}
L33:;
si0=l9;
si1=l1;
si0=si0 == si1;
if(si0){
goto L22;
}
si0=1U;
l3=si0;
si0=l1;
si1=l1;
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
si0=l5;
si1=32U;
si0+=si1;
si1=l4;
si2=l1;
si3=l4;
si3=i32_load(&i->m0,(U64)si3+88U);
si4=688U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
f11844(i,si0,si1,si2,si3);
si0=l5;
si0=i32_load(&i->m0,(U64)si0+36U);
l9=si0;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+32U);
si0=!(si0);
if(si0){
goto L23;
}
si0=l9;
l6=si0;
goto L24;
L26:;
si0=l5;
si1=40U;
si0+=si1;
si1=l7;
si2=l1;
si3=l10;
si4=l4;
f14512(i,si0,si1,si2,si3,si4);
si0=l5;
si0=i32_load(&i->m0,(U64)si0+44U);
l6=si0;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+40U);
l7=si0;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+72U);
if(si0){
goto L8;
}
goto L9;
L25:;
si0=1U;
l3=si0;
L24:;
si0=1U;
l7=si0;
goto L10;
L23:;
si0=l9;
si0=!(si0);
if(si0){
goto L11;
}
si0=l5;
si1=80U;
si0+=si1;
si1=l8;
f6048(i,si0,si1);
si0=l5;
si1=24U;
si0+=si1;
si1=l9;
si2=l5;
si3=80U;
si2+=si3;
si3=l4;
f5537(i,si0,si1,si2,si3);
si0=l5;
si0=i32_load(&i->m0,(U64)si0+28U);
l6=si0;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+24U);
l7=si0;
si0=l9;
si1=l9;
si1=i32_load(&i->m0,(U64)si1);
l4=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=0U;
l3=si0;
si0=l4;
si1=1U;
si0=si0 != si1;
if(si0){
goto L10;
}
si0=l9;
f5522(i,si0);
goto L10;
L22:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+28U);
l3=si0;
si1=l3;
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
si0=l5;
si1=80U;
si0+=si1;
si1=l3;
si2=l8;
si3=l4;
f12298(i,si0,si1,si2,si3);
si0=l5;
si1=80U;
si0+=si1;
si1=l4;
si1=i32_load(&i->m0,(U64)si1+88U);
si2=8U;
si1+=si2;
si0=f6028(i,si0,si1);
l6=si0;
si0=0U;
l3=si0;
si0=0U;
l7=si0;
goto L10;
L13:;
f53(i);
UNREACHABLE;
L12:;
si0=1U;
si1=l3;
f52(i,si0,si1);
UNREACHABLE;
L11:;
si0=l5;
si1=92U;
si0+=si1;
sj1=1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=2U;
i32_store(&i->m0,(U64)si0+84U,si1);
si0=l5;
si1=17315124U;
i32_store(&i->m0,(U64)si0+80U,si1);
si0=l5;
si1=1723U;
i32_store(&i->m0,(U64)si0+172U,si1);
si0=l5;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+28U);
i32_store(&i->m0,(U64)si0+160U,si1);
si0=l5;
si1=l5;
si2=168U;
si1+=si2;
i32_store(&i->m0,(U64)si0+88U,si1);
si0=l5;
si1=l5;
si2=160U;
si1+=si2;
i32_store(&i->m0,(U64)si0+168U,si1);
si0=l5;
si1=148U;
si0+=si1;
si1=l5;
si2=80U;
si1+=si2;
f64(i,si0,si1);
si0=1U;
l7=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+88U);
si1=504U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si1=l3;
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
si1=l3;
si2=l5;
si3=148U;
si2+=si3;
si0=f11521(i,si0,si1,si2);
l6=si0;
goto L9;
L10:;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+72U);
if(si0){
goto L35;
}
si0=l5;
si0=i32_load(&i->m0,(U64)si0+76U);
l4=si0;
si1=l4;
si1=i32_load(&i->m0,(U64)si1);
l4=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=1U;
si0=si0 != si1;
if(si0){
goto L35;
}
si0=l5;
si0=i32_load(&i->m0,(U64)si0+76U);
f5522(i,si0);
L35:;
si0=l3;
si0=!(si0);
if(si0){
goto L36;
}
si0=l8;
si1=l8;
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
si0=l8;
f5522(i,si0);
L36:;
si0=l2;
si1=l2;
si1=i32_load(&i->m0,(U64)si1);
l3=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=1U;
si0=si0 == si1;
if(si0){
goto L6;
}
goto L2;
L9:;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+76U);
l3=si0;
si1=l3;
si1=i32_load(&i->m0,(U64)si1);
l3=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=1U;
si0=si0 != si1;
if(si0){
goto L8;
}
si0=l5;
si0=i32_load(&i->m0,(U64)si0+76U);
f5522(i,si0);
L8:;
si0=1U;
l4=si0;
L7:;
si0=l8;
si1=l8;
si1=i32_load(&i->m0,(U64)si1);
l3=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=1U;
si0=si0 != si1;
if(si0){
goto L37;
}
si0=l8;
f5522(i,si0);
L37:;
si0=l4;
si0=!(si0);
if(si0){
goto L2;
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
goto L2;
}
L6:;
si0=l2;
f5522(i,si0);
L2:;
si0=l0;
si1=l6;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l7;
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=176U;
si0+=si1;
i->g0=si0;
goto L0;
L1:;
f14795(i);
UNREACHABLE;
L0:;
}

void f5547(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
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
l4=si0;
i->g0=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+88U);
si1=68U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=l1;
si1=i32_load(&i->m0,(U64)si1+28U);
si0=si0 == si1;
if(si0){
goto L3;
}
si0=l4;
si1=24U;
si0+=si1;
si1=l1;
si2=l2;
si3=l3;
f5548(i,si0,si1,si2,si3);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+28U);
l5=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+24U);
if(si0){
goto L2;
}
si0=0U;
l6=si0;
goto L1;
L3:;
si0=l4;
si1=8U;
si0+=si1;
si1=l1;
si2=56U;
si1+=si2;
si2=l3;
si3=l2;
f7441(i,si0,si1,si2,si3);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+12U);
l5=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+8U);
l6=si0;
goto L1;
L2:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+88U);
si1=392U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
si1=l5;
si1=i32_load(&i->m0,(U64)si1+28U);
l8=si1;
si0=si0 == si1;
if(si0){
goto L4;
}
si0=l8;
si1=468U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=2U;
si0<<=(si1&31);
l6=si0;
si0=l8;
si1=460U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l8=si0;
L5:;
{
si0=l6;
if(si0){
goto L6;
}
si0=1U;
l6=si0;
goto L1;
L6:;
si0=l6;
si1=-4U;
si0+=si1;
l6=si0;
si0=l8;
si0=i32_load(&i->m0,(U64)si0);
l9=si0;
si0=l8;
si1=4U;
si0+=si1;
l8=si0;
si0=l9;
si1=l7;
si0=si0 != si1;
if(si0){
goto L5;
}
}
L4:;
si0=l4;
si1=16U;
si0+=si1;
si1=l1;
si2=l2;
si3=l3;
f5541(i,si0,si1,si2,si3);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+20U);
l8=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+16U);
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
goto L7;
}
si0=l5;
f5522(i,si0);
L7:;
si0=l8;
l5=si0;
L1:;
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
L0:;
}

void f5548(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 l8=0;
U32 l9=0;
U32 l10=0;
U32 l11=0;
U32 si0,si1,si2,si3,si4,si5;
U64 sj1;
si0=i->g0;
si1=176U;
si0-=si1;
l4=si0;
i->g0=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+88U);
si1=68U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=l1;
si1=i32_load(&i->m0,(U64)si1+28U);
l5=si1;
si0=si0 != si1;
if(si0){
goto L8;
}
si0=l5;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+28U);
si0=si0 == si1;
if(si0){
goto L9;
}
si0=l4;
si1=16U;
si0+=si1;
si1=l1;
si2=l2;
si3=l3;
f5548(i,si0,si1,si2,si3);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+20U);
l5=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+16U);
l6=si0;
goto L1;
L9:;
si0=l4;
si1=8U;
si0+=si1;
si1=l1;
si2=56U;
si1+=si2;
si2=l3;
si3=l2;
f7441(i,si0,si1,si2,si3);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+12U);
l5=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+8U);
si0=!(si0);
if(si0){
goto L10;
}
si0=1U;
l6=si0;
goto L1;
L10:;
si0=0U;
l6=si0;
si0=l5;
if(si0){
goto L1;
}
si0=l4;
si1=l1;
si2=l2;
si3=l3;
f5541(i,si0,si1,si2,si3);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+4U);
l5=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L11;
}
si0=1U;
l6=si0;
goto L1;
L11:;
si0=l5;
if(si0){
goto L1;
}
si0=1U;
l6=si0;
si0=l2;
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
goto L7;
}
si0=l3;
si1=l2;
si0=f11876(i,si0,si1);
l5=si0;
goto L1;
L8:;
si0=l2;
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
goto L7;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+28U);
l6=si0;
si1=292U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
if(si0){
goto L23;
}
si0=l6;
si1=468U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=2U;
si0<<=(si1&31);
l5=si0;
si0=l6;
si1=460U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
L24:;
{
si0=l5;
si0=!(si0);
if(si0){
goto L22;
}
si0=l5;
si1=-4U;
si0+=si1;
l5=si0;
si0=l6;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
si0=l6;
si1=4U;
si0+=si1;
l6=si0;
si0=l7;
si1=292U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
si0=!(si0);
if(si0){
goto L24;
}
}
L23:;
si0=l7;
si0=i32_load(&i->m0,(U64)si0+4U);
if(si0){
goto L21;
}
L22:;
si0=l4;
si1=92U;
si0+=si1;
sj1=1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=2U;
i32_store(&i->m0,(U64)si0+84U,si1);
si0=l4;
si1=17432196U;
i32_store(&i->m0,(U64)si0+80U,si1);
si0=l4;
si1=1723U;
i32_store(&i->m0,(U64)si0+172U,si1);
si0=l4;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+28U);
i32_store(&i->m0,(U64)si0+160U,si1);
si0=l4;
si1=l4;
si2=168U;
si1+=si2;
i32_store(&i->m0,(U64)si0+88U,si1);
si0=l4;
si1=l4;
si2=160U;
si1+=si2;
i32_store(&i->m0,(U64)si0+168U,si1);
si0=l4;
si1=148U;
si0+=si1;
si1=l4;
si2=80U;
si1+=si2;
f64(i,si0,si1);
si0=l3;
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
goto L7;
}
si0=l3;
si1=l5;
si2=l4;
si3=148U;
si2+=si3;
si0=f11521(i,si0,si1,si2);
l7=si0;
si0=l4;
si1=72U;
si0+=si1;
si1=l1;
si2=l3;
f14507(i,si0,si1,si2);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+72U);
l6=si0;
si0=!(si0);
if(si0){
goto L18;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0+76U);
l1=si0;
si0=l4;
si1=56U;
si0+=si1;
si1=l2;
si2=l3;
f5555(i,si0,si1,si2);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+60U);
l5=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+56U);
switch(si0){
case 0:
goto L19;
case 1:
goto L16;
case 2:
goto L20;
default:
goto L19;
}
L21:;
si0=l7;
si0=i32_load(&i->m0,(U64)si0+4U);
l5=si0;
if(si0){
goto L25;
}
si0=l4;
si1=92U;
si0+=si1;
sj1=1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=2U;
i32_store(&i->m0,(U64)si0+84U,si1);
si0=l4;
si1=17432232U;
i32_store(&i->m0,(U64)si0+80U,si1);
si0=l4;
si1=1723U;
i32_store(&i->m0,(U64)si0+172U,si1);
si0=l4;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+28U);
i32_store(&i->m0,(U64)si0+160U,si1);
si0=l4;
si1=l4;
si2=168U;
si1+=si2;
i32_store(&i->m0,(U64)si0+88U,si1);
si0=l4;
si1=l4;
si2=160U;
si1+=si2;
i32_store(&i->m0,(U64)si0+168U,si1);
si0=l4;
si1=148U;
si0+=si1;
si1=l4;
si2=80U;
si1+=si2;
f64(i,si0,si1);
si0=1U;
l6=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+88U);
si1=504U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
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
goto L7;
}
si0=l3;
si1=l5;
si2=l4;
si3=148U;
si2+=si3;
si0=f11521(i,si0,si1,si2);
l5=si0;
si0=0U;
l3=si0;
goto L3;
L25:;
si0=l4;
si1=64U;
si0+=si1;
si1=l1;
si2=l7;
si3=l2;
si4=l3;
si5=l5;
TF(i->t0,si5,void (*)(rustpythonInstance*,U32,U32,U32,U32,U32))(i,si0,si1,si2,si3,si4);
si0=0U;
l3=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+68U);
l5=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+64U);
l6=si0;
goto L3;
L20:;
si0=l4;
si1=92U;
si0+=si1;
sj1=1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=2U;
i32_store(&i->m0,(U64)si0+84U,si1);
si0=l4;
si1=17311500U;
i32_store(&i->m0,(U64)si0+80U,si1);
si0=l4;
si1=1723U;
i32_store(&i->m0,(U64)si0+172U,si1);
si0=l4;
si1=l2;
si1=i32_load(&i->m0,(U64)si1+28U);
i32_store(&i->m0,(U64)si0+160U,si1);
si0=l4;
si1=l4;
si2=168U;
si1+=si2;
i32_store(&i->m0,(U64)si0+88U,si1);
si0=l4;
si1=l4;
si2=160U;
si1+=si2;
i32_store(&i->m0,(U64)si0+168U,si1);
si0=l4;
si1=148U;
si0+=si1;
si1=l4;
si2=80U;
si1+=si2;
f64(i,si0,si1);
si0=1U;
l8=si0;
si0=l3;
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
goto L7;
}
si0=l3;
si1=l5;
si2=l4;
si3=148U;
si2+=si3;
si0=f11521(i,si0,si1,si2);
l5=si0;
goto L15;
L19:;
si0=l4;
si1=48U;
si0+=si1;
si1=l5;
si2=56U;
si1+=si2;
f11349(i,si0,si1);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+48U);
l9=si0;
if(si0){
goto L27;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0+52U);
l10=si0;
goto L26;
L27:;
si0=l4;
si1=92U;
si0+=si1;
sj1=1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=17367008U;
i32_store(&i->m0,(U64)si0+80U,si1);
si0=l4;
si1=1028U;
i32_store(&i->m0,(U64)si0+164U,si1);
si0=l4;
si1=5U;
i32_store(&i->m0,(U64)si0+172U,si1);
si0=l4;
si1=17367026U;
i32_store(&i->m0,(U64)si0+168U,si1);
si0=l4;
si1=l4;
si2=160U;
si1+=si2;
i32_store(&i->m0,(U64)si0+88U,si1);
si0=l4;
si1=l4;
si2=168U;
si1+=si2;
i32_store(&i->m0,(U64)si0+160U,si1);
si0=l4;
si1=1U;
i32_store(&i->m0,(U64)si0+84U,si1);
si0=l4;
si1=148U;
si0+=si1;
si1=l4;
si2=80U;
si1+=si2;
f64(i,si0,si1);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+88U);
si1=352U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l8=si0;
si1=l8;
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
goto L7;
}
si0=l3;
si1=l8;
si2=l4;
si3=148U;
si2+=si3;
si0=f11521(i,si0,si1,si2);
l10=si0;
L26:;
si0=l5;
si1=l5;
si1=i32_load(&i->m0,(U64)si1);
l11=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=1U;
l8=si0;
si0=l11;
si1=1U;
si0=si0 != si1;
if(si0){
goto L28;
}
si0=l5;
f5522(i,si0);
L28:;
si0=l9;
si0=!(si0);
if(si0){
goto L17;
}
si0=l10;
l5=si0;
goto L15;
L18:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+88U);
si1=220U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l9=si0;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+28U);
l6=si1;
si0=si0 == si1;
if(si0){
goto L29;
}
si0=l6;
si1=468U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=2U;
si0<<=(si1&31);
l5=si0;
si0=l6;
si1=460U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
L30:;
{
si0=l5;
si0=!(si0);
if(si0){
goto L12;
}
si0=l5;
si1=-4U;
si0+=si1;
l5=si0;
si0=l6;
si0=i32_load(&i->m0,(U64)si0);
l8=si0;
si0=l6;
si1=4U;
si0+=si1;
l6=si0;
si0=l8;
si1=l9;
si0=si0 != si1;
if(si0){
goto L30;
}
}
L29:;
si0=l9;
si1=l1;
si0=si0 == si1;
if(si0){
goto L13;
}
si0=1U;
l8=si0;
si0=l1;
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
goto L7;
}
si0=l4;
si1=32U;
si0+=si1;
si1=l3;
si2=l1;
si3=l3;
si3=i32_load(&i->m0,(U64)si3+88U);
si4=688U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
f11844(i,si0,si1,si2,si3);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+36U);
l9=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+32U);
si0=!(si0);
if(si0){
goto L14;
}
si0=l9;
l5=si0;
goto L15;
L17:;
si0=l4;
si1=40U;
si0+=si1;
si1=l6;
si2=l1;
si3=l10;
si4=l3;
f14512(i,si0,si1,si2,si3,si4);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+44U);
l5=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+40U);
l6=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+72U);
if(si0){
goto L4;
}
goto L5;
L16:;
si0=1U;
l8=si0;
L15:;
si0=1U;
l6=si0;
goto L6;
L14:;
si0=l9;
si0=!(si0);
if(si0){
goto L12;
}
si0=l4;
si1=80U;
si0+=si1;
si1=l2;
f6048(i,si0,si1);
si0=l4;
si1=24U;
si0+=si1;
si1=l9;
si2=l4;
si3=80U;
si2+=si3;
si3=l3;
f5537(i,si0,si1,si2,si3);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+28U);
l5=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+24U);
l6=si0;
si0=l9;
si1=l9;
si1=i32_load(&i->m0,(U64)si1);
l1=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=0U;
l8=si0;
si0=l1;
si1=1U;
si0=si0 != si1;
if(si0){
goto L6;
}
si0=l9;
f5522(i,si0);
goto L6;
L13:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+28U);
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
goto L7;
}
si0=l4;
si1=80U;
si0+=si1;
si1=l5;
si2=l2;
si3=l3;
f12298(i,si0,si1,si2,si3);
si0=l4;
si1=80U;
si0+=si1;
si1=l3;
si1=i32_load(&i->m0,(U64)si1+88U);
si2=8U;
si1+=si2;
si0=f6028(i,si0,si1);
l5=si0;
si0=0U;
l8=si0;
si0=0U;
l6=si0;
goto L6;
L12:;
si0=l4;
si1=92U;
si0+=si1;
sj1=1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=2U;
i32_store(&i->m0,(U64)si0+84U,si1);
si0=l4;
si1=17315124U;
i32_store(&i->m0,(U64)si0+80U,si1);
si0=l4;
si1=1723U;
i32_store(&i->m0,(U64)si0+172U,si1);
si0=l4;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+28U);
i32_store(&i->m0,(U64)si0+160U,si1);
si0=l4;
si1=l4;
si2=168U;
si1+=si2;
i32_store(&i->m0,(U64)si0+88U,si1);
si0=l4;
si1=l4;
si2=160U;
si1+=si2;
i32_store(&i->m0,(U64)si0+168U,si1);
si0=l4;
si1=148U;
si0+=si1;
si1=l4;
si2=80U;
si1+=si2;
f64(i,si0,si1);
si0=1U;
l6=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+88U);
si1=504U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
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
goto L7;
}
si0=l3;
si1=l5;
si2=l4;
si3=148U;
si2+=si3;
si0=f11521(i,si0,si1,si2);
l5=si0;
goto L5;
L7:;
f14795(i);
UNREACHABLE;
L6:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+72U);
if(si0){
goto L31;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0+76U);
l1=si0;
si1=l1;
si1=i32_load(&i->m0,(U64)si1);
l1=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
si1=1U;
si0=si0 != si1;
if(si0){
goto L31;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0+76U);
f5522(i,si0);
L31:;
si0=l8;
si0=!(si0);
if(si0){
goto L32;
}
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
goto L32;
}
si0=l2;
f5522(i,si0);
L32:;
si0=l7;
si1=l7;
si1=i32_load(&i->m0,(U64)si1);
l1=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
si1=1U;
si0=si0 == si1;
if(si0){
goto L2;
}
goto L1;
L5:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+76U);
l1=si0;
si1=l1;
si1=i32_load(&i->m0,(U64)si1);
l1=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
si1=1U;
si0=si0 != si1;
if(si0){
goto L4;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0+76U);
f5522(i,si0);
L4:;
si0=1U;
l3=si0;
L3:;
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
goto L33;
}
si0=l2;
f5522(i,si0);
L33:;
si0=l3;
si0=!(si0);
if(si0){
goto L1;
}
si0=l7;
si1=l7;
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
L2:;
si0=l7;
f5522(i,si0);
L1:;
si0=l0;
si1=l5;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l6;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=176U;
si0+=si1;
i->g0=si0;
L0:;
}

void f5549(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
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
l4=si0;
i->g0=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+88U);
si1=68U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=l1;
si1=i32_load(&i->m0,(U64)si1+28U);
si0=si0 == si1;
if(si0){
goto L3;
}
si0=l4;
si1=24U;
si0+=si1;
si1=l1;
si2=l2;
si3=l3;
f5550(i,si0,si1,si2,si3);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+28U);
l5=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+24U);
if(si0){
goto L2;
}
si0=0U;
l6=si0;
goto L1;
L3:;
si0=l4;
si1=8U;
si0+=si1;
si1=l1;
si2=56U;
si1+=si2;
si2=l3;
si3=l2;
f7443(i,si0,si1,si2,si3);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+12U);
l5=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+8U);
l6=si0;
goto L1;
L2:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+88U);
si1=392U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
si1=l5;
si1=i32_load(&i->m0,(U64)si1+28U);
l8=si1;
si0=si0 == si1;
if(si0){
goto L4;
}
si0=l8;
si1=468U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=2U;
si0<<=(si1&31);
l6=si0;
si0=l8;
si1=460U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l8=si0;
L5:;
{
si0=l6;
if(si0){
goto L6;
}
si0=1U;
l6=si0;
goto L1;
L6:;
si0=l6;
si1=-4U;
si0+=si1;
l6=si0;
si0=l8;
si0=i32_load(&i->m0,(U64)si0);
l9=si0;
si0=l8;
si1=4U;
si0+=si1;
l8=si0;
si0=l9;
si1=l7;
si0=si0 != si1;
if(si0){
goto L5;
}
}
L4:;
si0=l4;
si1=16U;
si0+=si1;
si1=l1;
si2=l2;
si3=l3;
f5539(i,si0,si1,si2,si3);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+20U);
l8=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+16U);
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
goto L7;
}
si0=l5;
f5522(i,si0);
L7:;
si0=l8;
l5=si0;
L1:;
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
L0:;
}

void f5550(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 l8=0;
U32 l9=0;
U32 l10=0;
U32 l11=0;
U32 si0,si1,si2,si3,si4,si5;
U64 sj1;
si0=i->g0;
si1=176U;
si0-=si1;
l4=si0;
i->g0=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+88U);
si1=68U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=l1;
si1=i32_load(&i->m0,(U64)si1+28U);
l5=si1;
si0=si0 != si1;
if(si0){
goto L8;
}
si0=l5;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+28U);
si0=si0 == si1;
if(si0){
goto L9;
}
si0=l4;
si1=16U;
si0+=si1;
si1=l1;
si2=l2;
si3=l3;
f5550(i,si0,si1,si2,si3);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+20U);
l5=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+16U);
l6=si0;
goto L1;
L9:;
si0=l4;
si1=8U;
si0+=si1;
si1=l1;
si2=56U;
si1+=si2;
si2=l3;
si3=l2;
f7443(i,si0,si1,si2,si3);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+12U);
l5=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+8U);
si0=!(si0);
if(si0){
goto L10;
}
si0=1U;
l6=si0;
goto L1;
L10:;
si0=0U;
l6=si0;
si0=l5;
if(si0){
goto L1;
}
si0=l4;
si1=l1;
si2=l2;
si3=l3;
f5539(i,si0,si1,si2,si3);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+4U);
l5=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L11;
}
si0=1U;
l6=si0;
goto L1;
L11:;
si0=l5;
if(si0){
goto L1;
}
si0=1U;
l6=si0;
si0=l2;
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
goto L7;
}
si0=l3;
si1=l2;
si0=f11876(i,si0,si1);
l5=si0;
goto L1;
L8:;
si0=l2;
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
goto L7;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+28U);
l6=si0;
si1=292U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
if(si0){
goto L23;
}
si0=l6;
si1=468U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=2U;
si0<<=(si1&31);
l5=si0;
si0=l6;
si1=460U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
L24:;
{
si0=l5;
si0=!(si0);
if(si0){
goto L22;
}
si0=l5;
si1=-4U;
si0+=si1;
l5=si0;
si0=l6;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
si0=l6;
si1=4U;
si0+=si1;
l6=si0;
si0=l7;
si1=292U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
si0=!(si0);
if(si0){
goto L24;
}
}
L23:;
si0=l7;
si0=i32_load(&i->m0,(U64)si0+4U);
if(si0){
goto L21;
}
L22:;
si0=l4;
si1=92U;
si0+=si1;
sj1=1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=2U;
i32_store(&i->m0,(U64)si0+84U,si1);
si0=l4;
si1=17432196U;
i32_store(&i->m0,(U64)si0+80U,si1);
si0=l4;
si1=1723U;
i32_store(&i->m0,(U64)si0+172U,si1);
si0=l4;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+28U);
i32_store(&i->m0,(U64)si0+160U,si1);
si0=l4;
si1=l4;
si2=168U;
si1+=si2;
i32_store(&i->m0,(U64)si0+88U,si1);
si0=l4;
si1=l4;
si2=160U;
si1+=si2;
i32_store(&i->m0,(U64)si0+168U,si1);
si0=l4;
si1=148U;
si0+=si1;
si1=l4;
si2=80U;
si1+=si2;
f64(i,si0,si1);
si0=l3;
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
goto L7;
}
si0=l3;
si1=l5;
si2=l4;
si3=148U;
si2+=si3;
si0=f11521(i,si0,si1,si2);
l7=si0;
si0=l4;
si1=72U;
si0+=si1;
si1=l1;
si2=l3;
f14507(i,si0,si1,si2);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+72U);
l6=si0;
si0=!(si0);
if(si0){
goto L18;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0+76U);
l1=si0;
si0=l4;
si1=56U;
si0+=si1;
si1=l2;
si2=l3;
f5555(i,si0,si1,si2);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+60U);
l5=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+56U);
switch(si0){
case 0:
goto L19;
case 1:
goto L16;
case 2:
goto L20;
default:
goto L19;
}
L21:;
si0=l7;
si0=i32_load(&i->m0,(U64)si0+4U);
l5=si0;
if(si0){
goto L25;
}
si0=l4;
si1=92U;
si0+=si1;
sj1=1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=2U;
i32_store(&i->m0,(U64)si0+84U,si1);
si0=l4;
si1=17432232U;
i32_store(&i->m0,(U64)si0+80U,si1);
si0=l4;
si1=1723U;
i32_store(&i->m0,(U64)si0+172U,si1);
si0=l4;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+28U);
i32_store(&i->m0,(U64)si0+160U,si1);
si0=l4;
si1=l4;
si2=168U;
si1+=si2;
i32_store(&i->m0,(U64)si0+88U,si1);
si0=l4;
si1=l4;
si2=160U;
si1+=si2;
i32_store(&i->m0,(U64)si0+168U,si1);
si0=l4;
si1=148U;
si0+=si1;
si1=l4;
si2=80U;
si1+=si2;
f64(i,si0,si1);
si0=1U;
l6=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+88U);
si1=504U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
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
goto L7;
}
si0=l3;
si1=l5;
si2=l4;
si3=148U;
si2+=si3;
si0=f11521(i,si0,si1,si2);
l5=si0;
si0=0U;
l3=si0;
goto L3;
L25:;
si0=l4;
si1=64U;
si0+=si1;
si1=l1;
si2=l7;
si3=l2;
si4=l3;
si5=l5;
TF(i->t0,si5,void (*)(rustpythonInstance*,U32,U32,U32,U32,U32))(i,si0,si1,si2,si3,si4);
si0=0U;
l3=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+68U);
l5=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+64U);
l6=si0;
goto L3;
L20:;
si0=l4;
si1=92U;
si0+=si1;
sj1=1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=2U;
i32_store(&i->m0,(U64)si0+84U,si1);
si0=l4;
si1=17311500U;
i32_store(&i->m0,(U64)si0+80U,si1);
si0=l4;
si1=1723U;
i32_store(&i->m0,(U64)si0+172U,si1);
si0=l4;
si1=l2;
si1=i32_load(&i->m0,(U64)si1+28U);
i32_store(&i->m0,(U64)si0+160U,si1);
si0=l4;
si1=l4;
si2=168U;
si1+=si2;
i32_store(&i->m0,(U64)si0+88U,si1);
si0=l4;
si1=l4;
si2=160U;
si1+=si2;
i32_store(&i->m0,(U64)si0+168U,si1);
si0=l4;
si1=148U;
si0+=si1;
si1=l4;
si2=80U;
si1+=si2;
f64(i,si0,si1);
si0=1U;
l8=si0;
si0=l3;
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
goto L7;
}
si0=l3;
si1=l5;
si2=l4;
si3=148U;
si2+=si3;
si0=f11521(i,si0,si1,si2);
l5=si0;
goto L15;
L19:;
si0=l4;
si1=48U;
si0+=si1;
si1=l5;
si2=56U;
si1+=si2;
f11349(i,si0,si1);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+48U);
l9=si0;
if(si0){
goto L27;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0+52U);
l10=si0;
goto L26;
L27:;
si0=l4;
si1=92U;
si0+=si1;
sj1=1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=17367008U;
i32_store(&i->m0,(U64)si0+80U,si1);
si0=l4;
si1=1028U;
i32_store(&i->m0,(U64)si0+164U,si1);
si0=l4;
si1=5U;
i32_store(&i->m0,(U64)si0+172U,si1);
si0=l4;
si1=17367026U;
i32_store(&i->m0,(U64)si0+168U,si1);
si0=l4;
si1=l4;
si2=160U;
si1+=si2;
i32_store(&i->m0,(U64)si0+88U,si1);
si0=l4;
si1=l4;
si2=168U;
si1+=si2;
i32_store(&i->m0,(U64)si0+160U,si1);
si0=l4;
si1=1U;
i32_store(&i->m0,(U64)si0+84U,si1);
si0=l4;
si1=148U;
si0+=si1;
si1=l4;
si2=80U;
si1+=si2;
f64(i,si0,si1);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+88U);
si1=352U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l8=si0;
si1=l8;
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
goto L7;
}
si0=l3;
si1=l8;
si2=l4;
si3=148U;
si2+=si3;
si0=f11521(i,si0,si1,si2);
l10=si0;
L26:;
si0=l5;
si1=l5;
si1=i32_load(&i->m0,(U64)si1);
l11=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=1U;
l8=si0;
si0=l11;
si1=1U;
si0=si0 != si1;
if(si0){
goto L28;
}
si0=l5;
f5522(i,si0);
L28:;
si0=l9;
si0=!(si0);
if(si0){
goto L17;
}
si0=l10;
l5=si0;
goto L15;
L18:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+88U);
si1=220U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l9=si0;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+28U);
l6=si1;
si0=si0 == si1;
if(si0){
goto L29;
}
si0=l6;
si1=468U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=2U;
si0<<=(si1&31);
l5=si0;
si0=l6;
si1=460U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
L30:;
{
si0=l5;
si0=!(si0);
if(si0){
goto L12;
}
si0=l5;
si1=-4U;
si0+=si1;
l5=si0;
si0=l6;
si0=i32_load(&i->m0,(U64)si0);
l8=si0;
si0=l6;
si1=4U;
si0+=si1;
l6=si0;
si0=l8;
si1=l9;
si0=si0 != si1;
if(si0){
goto L30;
}
}
L29:;
si0=l9;
si1=l1;
si0=si0 == si1;
if(si0){
goto L13;
}
si0=1U;
l8=si0;
si0=l1;
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
goto L7;
}
si0=l4;
si1=32U;
si0+=si1;
si1=l3;
si2=l1;
si3=l3;
si3=i32_load(&i->m0,(U64)si3+88U);
si4=688U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
f11844(i,si0,si1,si2,si3);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+36U);
l9=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+32U);
si0=!(si0);
if(si0){
goto L14;
}
si0=l9;
l5=si0;
goto L15;
L17:;
si0=l4;
si1=40U;
si0+=si1;
si1=l6;
si2=l1;
si3=l10;
si4=l3;
f14512(i,si0,si1,si2,si3,si4);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+44U);
l5=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+40U);
l6=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+72U);
if(si0){
goto L4;
}
goto L5;
L16:;
si0=1U;
l8=si0;
L15:;
si0=1U;
l6=si0;
goto L6;
L14:;
si0=l9;
si0=!(si0);
if(si0){
goto L12;
}
si0=l4;
si1=80U;
si0+=si1;
si1=l2;
f6048(i,si0,si1);
si0=l4;
si1=24U;
si0+=si1;
si1=l9;
si2=l4;
si3=80U;
si2+=si3;
si3=l3;
f5537(i,si0,si1,si2,si3);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+28U);
l5=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+24U);
l6=si0;
si0=l9;
si1=l9;
si1=i32_load(&i->m0,(U64)si1);
l1=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=0U;
l8=si0;
si0=l1;
si1=1U;
si0=si0 != si1;
if(si0){
goto L6;
}
si0=l9;
f5522(i,si0);
goto L6;
L13:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+28U);
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
goto L7;
}
si0=l4;
si1=80U;
si0+=si1;
si1=l5;
si2=l2;
si3=l3;
f12298(i,si0,si1,si2,si3);
si0=l4;
si1=80U;
si0+=si1;
si1=l3;
si1=i32_load(&i->m0,(U64)si1+88U);
si2=8U;
si1+=si2;
si0=f6028(i,si0,si1);
l5=si0;
si0=0U;
l8=si0;
si0=0U;
l6=si0;
goto L6;
L12:;
si0=l4;
si1=92U;
si0+=si1;
sj1=1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=2U;
i32_store(&i->m0,(U64)si0+84U,si1);
si0=l4;
si1=17315124U;
i32_store(&i->m0,(U64)si0+80U,si1);
si0=l4;
si1=1723U;
i32_store(&i->m0,(U64)si0+172U,si1);
si0=l4;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+28U);
i32_store(&i->m0,(U64)si0+160U,si1);
si0=l4;
si1=l4;
si2=168U;
si1+=si2;
i32_store(&i->m0,(U64)si0+88U,si1);
si0=l4;
si1=l4;
si2=160U;
si1+=si2;
i32_store(&i->m0,(U64)si0+168U,si1);
si0=l4;
si1=148U;
si0+=si1;
si1=l4;
si2=80U;
si1+=si2;
f64(i,si0,si1);
si0=1U;
l6=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+88U);
si1=504U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
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
goto L7;
}
si0=l3;
si1=l5;
si2=l4;
si3=148U;
si2+=si3;
si0=f11521(i,si0,si1,si2);
l5=si0;
goto L5;
L7:;
f14795(i);
UNREACHABLE;
L6:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+72U);
if(si0){
goto L31;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0+76U);
l1=si0;
si1=l1;
si1=i32_load(&i->m0,(U64)si1);
l1=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
si1=1U;
si0=si0 != si1;
if(si0){
goto L31;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0+76U);
f5522(i,si0);
L31:;
si0=l8;
si0=!(si0);
if(si0){
goto L32;
}
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
goto L32;
}
si0=l2;
f5522(i,si0);
L32:;
si0=l7;
si1=l7;
si1=i32_load(&i->m0,(U64)si1);
l1=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
si1=1U;
si0=si0 == si1;
if(si0){
goto L2;
}
goto L1;
L5:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+76U);
l1=si0;
si1=l1;
si1=i32_load(&i->m0,(U64)si1);
l1=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
si1=1U;
si0=si0 != si1;
if(si0){
goto L4;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0+76U);
f5522(i,si0);
L4:;
si0=1U;
l3=si0;
L3:;
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
goto L33;
}
si0=l2;
f5522(i,si0);
L33:;
si0=l3;
si0=!(si0);
if(si0){
goto L1;
}
si0=l7;
si1=l7;
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
L2:;
si0=l7;
f5522(i,si0);
L1:;
si0=l0;
si1=l5;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l6;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=176U;
si0+=si1;
i->g0=si0;
L0:;
}

void f5551(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 si0,si1,si2,si3;
si0=i->g0;
si1=32U;
si0-=si1;
l4=si0;
i->g0=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+88U);
si1=68U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=l1;
si1=i32_load(&i->m0,(U64)si1+28U);
si0=si0 == si1;
if(si0){
goto L3;
}
si0=l4;
si1=24U;
si0+=si1;
si1=l1;
si2=l2;
si3=l3;
f5550(i,si0,si1,si2,si3);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+28U);
l5=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+24U);
l6=si0;
goto L2;
L3:;
si0=l4;
si1=16U;
si0+=si1;
si1=l1;
si2=56U;
si1+=si2;
si2=l3;
si3=l2;
f7443(i,si0,si1,si2,si3);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+20U);
l5=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+16U);
si0=!(si0);
if(si0){
goto L4;
}
si0=1U;
l6=si0;
goto L2;
L4:;
si0=0U;
l6=si0;
si0=l5;
if(si0){
goto L2;
}
si0=l4;
si1=8U;
si0+=si1;
si1=l1;
si2=l2;
si3=l3;
f5539(i,si0,si1,si2,si3);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+12U);
l5=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+8U);
si0=!(si0);
if(si0){
goto L5;
}
si0=1U;
l6=si0;
goto L2;
L5:;
si0=l5;
if(si0){
goto L2;
}
si0=1U;
l6=si0;
si0=l2;
si1=l2;
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
goto L1;
}
si0=l3;
si1=l2;
si0=f11876(i,si0,si1);
l5=si0;
L2:;
si0=l0;
si1=l6;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l5;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l4;
si1=32U;
si0+=si1;
i->g0=si0;
goto L0;
L1:;
f14795(i);
UNREACHABLE;
L0:;
}

void f5552(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4) {
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 si0,si1,si2,si3,si4;
si0=i->g0;
si1=32U;
si0-=si1;
l5=si0;
i->g0=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+88U);
si1=68U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=l1;
si1=i32_load(&i->m0,(U64)si1+28U);
si0=si0 == si1;
if(si0){
goto L2;
}
si0=l5;
si1=24U;
si0+=si1;
si1=l1;
si2=l2;
si3=l3;
si4=l4;
f5546(i,si0,si1,si2,si3,si4);
si0=l5;
si0=i32_load(&i->m0,(U64)si0+28U);
l6=si0;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+24U);
l7=si0;
goto L1;
L2:;
si0=l5;
si1=16U;
si0+=si1;
si1=l1;
si2=56U;
si1+=si2;
si2=l4;
si3=l2;
si4=l3;
f7442(i,si0,si1,si2,si3,si4);
si0=l5;
si0=i32_load(&i->m0,(U64)si0+20U);
l6=si0;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+16U);
if(si0){
goto L3;
}
si0=0U;
l7=si0;
si0=l6;
if(si0){
goto L1;
}
si0=l5;
si1=8U;
si0+=si1;
si1=l1;
si2=l2;
si3=l3;
si4=l4;
f5540(i,si0,si1,si2,si3,si4);
si0=l5;
si0=i32_load(&i->m0,(U64)si0+12U);
l6=si0;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+8U);
if(si0){
goto L3;
}
si0=l6;
if(si0){
goto L1;
}
si0=l4;
si1=l2;
si2=l3;
si3=l4;
si1=f7462(i,si1,si2,si3);
si0=f11876(i,si0,si1);
l6=si0;
L3:;
si0=1U;
l7=si0;
L1:;
si0=l0;
si1=l7;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l6;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l5;
si1=32U;
si0+=si1;
i->g0=si0;
L0:;
}

U32 f5553(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 l8=0;
U32 l9=0;
U32 si0,si1,si2,si3,si4,si5;
U64 sj1;
si0=i->g0;
si1=48U;
si0-=si1;
l4=si0;
i->g0=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+88U);
si1=68U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
L7:;
{
si0=l5;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+28U);
si0=si0 == si1;
if(si0){
goto L6;
}
si0=l5;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+28U);
si0=si0 == si1;
if(si0){
goto L7;
}
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+28U);
l6=si0;
si1=292U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
if(si0){
goto L8;
}
si0=l6;
si1=468U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=2U;
si0<<=(si1&31);
l5=si0;
si0=l6;
si1=460U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
L9:;
{
si0=l5;
if(si0){
goto L10;
}
si0=0U;
l7=si0;
goto L8;
L10:;
si0=l5;
si1=-4U;
si0+=si1;
l5=si0;
si0=l6;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
si0=l6;
si1=4U;
si0+=si1;
l6=si0;
si0=l7;
si1=292U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
si0=!(si0);
if(si0){
goto L9;
}
}
L8:;
si0=l7;
si1=18661100U;
si2=l7;
si0=si2?si0:si1;
l7=si0;
si0=i32_load(&i->m0,(U64)si0+8U);
l8=si0;
si0=!(si0);
if(si0){
goto L11;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l9=si0;
si0=1U;
l6=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+8U);
l5=si0;
si0=!(si0);
if(si0){
goto L12;
}
si0=l5;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L4;
}
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=l5;
si0=f15022(i,si0);
l6=si0;
si0=!(si0);
if(si0){
goto L3;
}
L12:;
si0=l6;
si1=l9;
si2=l5;
si0=f15143(i,si0,si1,si2);
l6=si0;
si0=l4;
si1=l5;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l4;
si1=l5;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l4;
si1=l6;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l0;
si1=l7;
si2=l4;
si3=12U;
si2+=si3;
si3=l3;
si3=i32_load(&i->m0,(U64)si3+88U);
si4=8U;
si3+=si4;
si2=f8912(i,si2,si3);
l5=si2;
si3=l2;
si4=l3;
si5=l8;
si0=TF(i->t0,si5,U32 (*)(rustpythonInstance*,U32,U32,U32,U32,U32))(i,si0,si1,si2,si3,si4);
l0=si0;
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
f5522(i,si0);
goto L5;
L11:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+28U);
l6=si0;
si1=l3;
si1=i32_load(&i->m0,(U64)si1+88U);
si2=68U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
si0=si0 != si1;
if(si0){
goto L14;
}
si0=0U;
l7=si0;
goto L13;
L14:;
si0=l6;
si1=288U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
if(si0){
goto L13;
}
si0=l6;
si1=468U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=2U;
si0<<=(si1&31);
l5=si0;
si0=l6;
si1=460U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
L15:;
{
si0=l5;
if(si0){
goto L16;
}
si0=0U;
l7=si0;
goto L13;
L16:;
si0=l5;
si1=-4U;
si0+=si1;
l5=si0;
si0=l6;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
si0=l6;
si1=4U;
si0+=si1;
l6=si0;
si0=l7;
si1=288U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
si0=!(si0);
if(si0){
goto L15;
}
}
L13:;
si0=l7;
si1=18663056U;
si2=l7;
si0=si2?si0:si1;
si0=i32_load(&i->m0,(U64)si0+16U);
si0=!(si0);
if(si0){
goto L18;
}
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=48U;
si0=f15022(i,si0);
l0=si0;
si0=!(si0);
if(si0){
goto L2;
}
si0=l0;
si1=40U;
si0+=si1;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+17342076U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=32U;
si0+=si1;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+17342068U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=24U;
si0+=si1;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+17342060U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=16U;
si0+=si1;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+17342052U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=8U;
si0+=si1;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+17342044U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+17342036U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
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
si0=l4;
sj1=206158430256ULL;
i64_store(&i->m0,(U64)si0+16U,sj1);
si0=l4;
si1=l0;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l6;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 != si1;
if(si0){
goto L17;
}
goto L1;
L18:;
si0=l4;
si1=24U;
si0+=si1;
sj1=1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=2U;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l4;
si1=17315176U;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l4;
si1=1723U;
i32_store(&i->m0,(U64)si0+40U,si1);
si0=l4;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+28U);
i32_store(&i->m0,(U64)si0+44U,si1);
si0=l4;
si1=l4;
si2=36U;
si1+=si2;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l4;
si1=l4;
si2=44U;
si1+=si2;
i32_store(&i->m0,(U64)si0+36U,si1);
si0=l4;
si1=l4;
si2=12U;
si1+=si2;
f64(i,si0,si1);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+88U);
si1=504U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l0=si0;
si1=l0;
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
si1=l0;
si2=l4;
si0=f11521(i,si0,si1,si2);
l0=si0;
si0=l2;
si1=l2;
si1=i32_load(&i->m0,(U64)si1);
l5=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=1U;
si0=si0 != si1;
if(si0){
goto L5;
}
si0=l2;
f5522(i,si0);
goto L5;
L17:;
si0=l3;
si1=l5;
si2=l4;
si3=12U;
si2+=si3;
si0=f11521(i,si0,si1,si2);
l0=si0;
si0=l2;
si1=l2;
si1=i32_load(&i->m0,(U64)si1);
l5=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=1U;
si0=si0 != si1;
if(si0){
goto L5;
}
si0=l2;
f5522(i,si0);
goto L5;
L6:;
si0=l0;
si1=56U;
si0+=si1;
si1=l3;
si2=l1;
si3=l2;
si0=f7439(i,si0,si1,si2,si3);
l0=si0;
L5:;
si0=l4;
si1=48U;
si0+=si1;
i->g0=si0;
si0=l0;
goto L0;
L4:;
f53(i);
UNREACHABLE;
L3:;
si0=1U;
si1=l5;
f52(i,si0,si1);
UNREACHABLE;
L2:;
si0=1U;
si1=48U;
f52(i,si0,si1);
UNREACHABLE;
L1:;
f14795(i);
UNREACHABLE;
L0:;
return si0;
}

U32 f5554(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 l8=0;
U32 l9=0;
U32 si0,si1,si2,si3,si4,si5;
U64 sj1;
si0=i->g0;
si1=80U;
si0-=si1;
l4=si0;
i->g0=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+88U);
si1=68U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
L4:;
{
si0=l5;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+28U);
si0=si0 == si1;
if(si0){
goto L3;
}
si0=l5;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+28U);
si0=si0 == si1;
if(si0){
goto L4;
}
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+28U);
l6=si0;
si1=292U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
if(si0){
goto L5;
}
si0=l6;
si1=468U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=2U;
si0<<=(si1&31);
l5=si0;
si0=l6;
si1=460U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
L6:;
{
si0=l5;
if(si0){
goto L7;
}
si0=0U;
l7=si0;
goto L5;
L7:;
si0=l5;
si1=-4U;
si0+=si1;
l5=si0;
si0=l6;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
si0=l6;
si1=4U;
si0+=si1;
l6=si0;
si0=l7;
si1=292U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
si0=!(si0);
if(si0){
goto L6;
}
}
L5:;
si0=l7;
si1=18661100U;
si2=l7;
si0=si2?si0:si1;
l5=si0;
si0=i32_load(&i->m0,(U64)si0+8U);
l6=si0;
si0=!(si0);
if(si0){
goto L8;
}
si0=l1;
si1=l1;
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
si1=l5;
si2=l1;
si3=l2;
si4=l3;
si5=l6;
si0=TF(i->t0,si5,U32 (*)(rustpythonInstance*,U32,U32,U32,U32,U32))(i,si0,si1,si2,si3,si4);
l5=si0;
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
goto L2;
}
si0=l1;
f5522(i,si0);
goto L2;
L8:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+28U);
l6=si0;
si1=l3;
si1=i32_load(&i->m0,(U64)si1+88U);
si2=68U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
si0=si0 != si1;
if(si0){
goto L10;
}
si0=0U;
l7=si0;
goto L9;
L10:;
si0=l6;
si1=288U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
if(si0){
goto L9;
}
si0=l6;
si1=468U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=2U;
si0<<=(si1&31);
l5=si0;
si0=l6;
si1=460U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
L11:;
{
si0=l5;
if(si0){
goto L12;
}
si0=0U;
l7=si0;
goto L9;
L12:;
si0=l5;
si1=-4U;
si0+=si1;
l5=si0;
si0=l6;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
si0=l6;
si1=4U;
si0+=si1;
l6=si0;
si0=l7;
si1=288U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
si0=!(si0);
if(si0){
goto L11;
}
}
L9:;
si0=l7;
si1=18663056U;
si2=l7;
si0=si2?si0:si1;
l7=si0;
si0=i32_load(&i->m0,(U64)si0+16U);
l8=si0;
si0=!(si0);
if(si0){
goto L15;
}
si0=l4;
si1=16U;
si0+=si1;
si1=l1;
si2=l3;
f5555(i,si0,si1,si2);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+20U);
l6=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+16U);
switch(si0){
case 0:
goto L16;
case 1:
goto L14;
case 2:
goto L17;
default:
goto L16;
}
L17:;
si0=l4;
si1=52U;
si0+=si1;
sj1=1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=2U;
i32_store(&i->m0,(U64)si0+44U,si1);
si0=l4;
si1=17311500U;
i32_store(&i->m0,(U64)si0+40U,si1);
si0=l4;
si1=1723U;
i32_store(&i->m0,(U64)si0+76U,si1);
si0=l4;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+28U);
i32_store(&i->m0,(U64)si0+64U,si1);
si0=l4;
si1=l4;
si2=72U;
si1+=si2;
i32_store(&i->m0,(U64)si0+48U,si1);
si0=l4;
si1=l4;
si2=64U;
si1+=si2;
i32_store(&i->m0,(U64)si0+72U,si1);
si0=l4;
si1=28U;
si0+=si1;
si1=l4;
si2=40U;
si1+=si2;
f64(i,si0,si1);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+88U);
si1=504U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l0=si0;
si1=l0;
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
si1=l0;
si2=l4;
si3=28U;
si2+=si3;
si0=f11521(i,si0,si1,si2);
l5=si0;
goto L13;
L16:;
si0=l4;
si1=8U;
si0+=si1;
si1=l6;
si2=56U;
si1+=si2;
f11349(i,si0,si1);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+8U);
l1=si0;
if(si0){
goto L19;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0+12U);
l5=si0;
goto L18;
L19:;
si0=l4;
si1=52U;
si0+=si1;
sj1=1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=17367008U;
i32_store(&i->m0,(U64)si0+40U,si1);
si0=l4;
si1=1028U;
i32_store(&i->m0,(U64)si0+68U,si1);
si0=l4;
si1=5U;
i32_store(&i->m0,(U64)si0+76U,si1);
si0=l4;
si1=17367026U;
i32_store(&i->m0,(U64)si0+72U,si1);
si0=l4;
si1=l4;
si2=64U;
si1+=si2;
i32_store(&i->m0,(U64)si0+48U,si1);
si0=l4;
si1=l4;
si2=72U;
si1+=si2;
i32_store(&i->m0,(U64)si0+64U,si1);
si0=l4;
si1=1U;
i32_store(&i->m0,(U64)si0+44U,si1);
si0=l4;
si1=28U;
si0+=si1;
si1=l4;
si2=40U;
si1+=si2;
f64(i,si0,si1);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+88U);
si1=352U;
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
si0=si0 == si1;
if(si0){
goto L1;
}
si0=l3;
si1=l5;
si2=l4;
si3=28U;
si2+=si3;
si0=f11521(i,si0,si1,si2);
l5=si0;
L18:;
si0=l6;
si1=l6;
si1=i32_load(&i->m0,(U64)si1);
l9=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l9;
si1=1U;
si0=si0 != si1;
if(si0){
goto L20;
}
si0=l6;
f5522(i,si0);
L20:;
si0=l1;
if(si0){
goto L13;
}
si0=l0;
si1=l7;
si2=l5;
si3=l2;
si4=l3;
si5=l8;
si0=TF(i->t0,si5,U32 (*)(rustpythonInstance*,U32,U32,U32,U32,U32))(i,si0,si1,si2,si3,si4);
l5=si0;
goto L2;
L15:;
si0=l4;
si1=52U;
si0+=si1;
sj1=1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=2U;
i32_store(&i->m0,(U64)si0+44U,si1);
si0=l4;
si1=17315176U;
i32_store(&i->m0,(U64)si0+40U,si1);
si0=l4;
si1=1723U;
i32_store(&i->m0,(U64)si0+76U,si1);
si0=l4;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+28U);
i32_store(&i->m0,(U64)si0+64U,si1);
si0=l4;
si1=l4;
si2=72U;
si1+=si2;
i32_store(&i->m0,(U64)si0+48U,si1);
si0=l4;
si1=l4;
si2=64U;
si1+=si2;
i32_store(&i->m0,(U64)si0+72U,si1);
si0=l4;
si1=28U;
si0+=si1;
si1=l4;
si2=40U;
si1+=si2;
f64(i,si0,si1);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+88U);
si1=504U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l0=si0;
si1=l0;
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
si1=l0;
si2=l4;
si3=28U;
si2+=si3;
si0=f11521(i,si0,si1,si2);
l5=si0;
si0=l2;
si1=l2;
si1=i32_load(&i->m0,(U64)si1);
l0=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=1U;
si0=si0 != si1;
if(si0){
goto L2;
}
si0=l2;
f5522(i,si0);
goto L2;
L14:;
si0=l6;
l5=si0;
L13:;
si0=l2;
si1=l2;
si1=i32_load(&i->m0,(U64)si1);
l0=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=1U;
si0=si0 != si1;
if(si0){
goto L2;
}
si0=l2;
f5522(i,si0);
goto L2;
L3:;
si0=l0;
si1=56U;
si0+=si1;
si1=l3;
si2=l1;
si3=l2;
si0=f7432(i,si0,si1,si2,si3);
l5=si0;
L2:;
si0=l4;
si1=80U;
si0+=si1;
i->g0=si0;
si0=l5;
goto L0;
L1:;
f14795(i);
UNREACHABLE;
L0:;
return si0;
}

void f5555(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 si0,si1,si2,si3;
U64 sj0,sj1,sj2;
si0=i->g0;
si1=80U;
si0-=si1;
l3=si0;
i->g0=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+88U);
l4=si0;
si1=96U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=l1;
si1=i32_load(&i->m0,(U64)si1+28U);
si0=si0 != si1;
if(si0){
goto L4;
}
si0=l1;
si1=l1;
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
si0=si0 == si1;
if(si0){
goto L3;
}
goto L1;
L4:;
si0=l1;
sj0=i64_load(&i->m0,(U64)si0+8U);
sj1=8080311700465507813ULL;
sj0^=sj1;
si1=l1;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
sj2=3405249472825529671ULL;
sj1^=sj2;
sj0|=sj1;
si0=!(sj0);
if(si0){
goto L2;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+28U);
si1=272U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
if(si0){
goto L5;
}
si0=2U;
l5=si0;
goto L1;
L5:;
si0=l3;
si1=8U;
si0+=si1;
si1=l1;
si2=l2;
si3=l5;
TF(i->t0,si3,void (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+12U);
l4=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+8U);
l5=si0;
si0=!(si0);
if(si0){
goto L6;
}
si0=l4;
l1=si0;
goto L1;
L6:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+88U);
si1=96U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=l4;
si1=i32_load(&i->m0,(U64)si1+28U);
si0=si0 != si1;
if(si0){
goto L7;
}
si0=l4;
si1=l4;
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
si0=l4;
si1=l4;
si1=i32_load(&i->m0,(U64)si1);
l1=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=0U;
l5=si0;
si0=l1;
si1=1U;
si0=si0 != si1;
if(si0){
goto L8;
}
si0=l4;
l1=si0;
si0=l4;
f5522(i,si0);
goto L1;
L8:;
si0=l4;
l1=si0;
goto L1;
L7:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+28U);
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
si0=l3;
si1=l5;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l4;
sj0=i64_load(&i->m0,(U64)si0+8U);
sj1=8080311700465507813ULL;
sj0^=sj1;
si1=l4;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
sj2=3405249472825529671ULL;
sj1^=sj2;
sj0|=sj1;
si0=!(sj0);
si0=!(si0);
if(si0){
goto L12;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0+88U);
si1=532U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si0=l3;
si1=48U;
si0+=si1;
sj1=1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=2U;
i32_store(&i->m0,(U64)si0+40U,si1);
si0=l3;
si1=17314104U;
i32_store(&i->m0,(U64)si0+36U,si1);
si0=l3;
si1=1984U;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l3;
si1=l3;
si2=24U;
si1+=si2;
i32_store(&i->m0,(U64)si0+44U,si1);
si0=l3;
si1=l3;
si2=20U;
si1+=si2;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l3;
si1=60U;
si0+=si1;
si1=l3;
si2=36U;
si1+=si2;
f64(i,si0,si1);
si0=l1;
si1=l3;
si2=60U;
si1+=si2;
si2=1U;
si3=l2;
si0=f13967(i,si0,si1,si2,si3);
l1=si0;
if(si0){
goto L10;
}
si0=l4;
si1=l4;
si1=i32_load(&i->m0,(U64)si1);
l2=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=0U;
l5=si0;
si0=l4;
l1=si0;
si0=l2;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 != si1;
if(si0){
goto L11;
}
goto L3;
L12:;
si0=l3;
si1=36U;
si0+=si1;
si1=12U;
si0+=si1;
sj1=2ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=60U;
si0+=si1;
si1=12U;
si0+=si1;
si1=1984U;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=3U;
i32_store(&i->m0,(U64)si0+40U,si1);
si0=l3;
si1=17314156U;
i32_store(&i->m0,(U64)si0+36U,si1);
si0=l3;
si1=1723U;
i32_store(&i->m0,(U64)si0+64U,si1);
si0=l3;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+28U);
i32_store(&i->m0,(U64)si0+76U,si1);
si0=l3;
si1=l3;
si2=60U;
si1+=si2;
i32_store(&i->m0,(U64)si0+44U,si1);
si0=l3;
si1=l3;
si2=20U;
si1+=si2;
i32_store(&i->m0,(U64)si0+68U,si1);
si0=l3;
si1=l3;
si2=76U;
si1+=si2;
i32_store(&i->m0,(U64)si0+60U,si1);
si0=l3;
si1=24U;
si0+=si1;
si1=l3;
si2=36U;
si1+=si2;
f64(i,si0,si1);
si0=1U;
l5=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+88U);
si1=504U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si1=l1;
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
si0=l2;
si1=l1;
si2=l3;
si3=24U;
si2+=si3;
si0=f11521(i,si0,si1,si2);
l1=si0;
L11:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+20U);
l2=si0;
si1=l2;
si1=i32_load(&i->m0,(U64)si1);
l2=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=1U;
si0=si0 != si1;
if(si0){
goto L13;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0+20U);
f5522(i,si0);
L13:;
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
goto L1;
}
goto L9;
L10:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+20U);
l2=si0;
si1=l2;
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
si0=l3;
si0=i32_load(&i->m0,(U64)si0+20U);
f5522(i,si0);
L14:;
si0=l4;
si1=l4;
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
goto L1;
}
L9:;
si0=l4;
f5522(i,si0);
goto L1;
L3:;
f14795(i);
UNREACHABLE;
L2:;
si0=0U;
l5=si0;
si0=l4;
si1=8U;
si0+=si1;
si1=l1;
si2=56U;
si1+=si2;
si0=f6029(i,si0,si1);
l1=si0;
L1:;
si0=l0;
si1=l1;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l5;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=80U;
si0+=si1;
i->g0=si0;
L0:;
}

U32 f5556(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 l8=0;
U32 l9=0;
U32 si0,si1,si2,si3,si4,si5;
U64 sj1;
si0=i->g0;
si1=80U;
si0-=si1;
l4=si0;
i->g0=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+88U);
si1=68U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
L3:;
{
si0=l5;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+28U);
l6=si1;
si0=si0 != si1;
l7=si0;
if(si0){
goto L2;
}
si0=l7;
if(si0){
goto L3;
}
}
si0=l0;
si1=56U;
si0+=si1;
si1=l3;
si2=l1;
si3=l2;
si0=f7435(i,si0,si1,si2,si3);
l7=si0;
goto L1;
L2:;
si0=l6;
si1=292U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l8=si0;
if(si0){
goto L4;
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
l5=si0;
L5:;
{
si0=l7;
if(si0){
goto L6;
}
si0=0U;
l8=si0;
goto L4;
L6:;
si0=l7;
si1=-4U;
si0+=si1;
l7=si0;
si0=l5;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si0=l5;
si1=4U;
si0+=si1;
l5=si0;
si0=l6;
si1=292U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l8=si0;
si0=!(si0);
if(si0){
goto L5;
}
}
L4:;
si0=l8;
si1=18661100U;
si2=l8;
si0=si2?si0:si1;
l7=si0;
si0=i32_load(&i->m0,(U64)si0+8U);
l5=si0;
si0=!(si0);
if(si0){
goto L9;
}
si0=l1;
si1=l1;
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
goto L8;
}
si0=l0;
si1=l7;
si2=l1;
si3=l2;
si4=l3;
si5=l5;
si0=TF(i->t0,si5,U32 (*)(rustpythonInstance*,U32,U32,U32,U32,U32))(i,si0,si1,si2,si3,si4);
l7=si0;
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
f5522(i,si0);
goto L1;
L9:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+28U);
l5=si0;
si1=l3;
si1=i32_load(&i->m0,(U64)si1+88U);
si2=68U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
si0=si0 != si1;
if(si0){
goto L11;
}
si0=0U;
l6=si0;
goto L10;
L11:;
si0=l5;
si1=288U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
if(si0){
goto L10;
}
si0=l5;
si1=468U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=2U;
si0<<=(si1&31);
l7=si0;
si0=l5;
si1=460U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
L12:;
{
si0=l7;
if(si0){
goto L13;
}
si0=0U;
l6=si0;
goto L10;
L13:;
si0=l7;
si1=-4U;
si0+=si1;
l7=si0;
si0=l5;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si0=l5;
si1=4U;
si0+=si1;
l5=si0;
si0=l6;
si1=288U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si0=!(si0);
if(si0){
goto L12;
}
}
L10:;
si0=l6;
si1=18663056U;
si2=l6;
si0=si2?si0:si1;
l6=si0;
si0=i32_load(&i->m0,(U64)si0+16U);
l8=si0;
si0=!(si0);
if(si0){
goto L16;
}
si0=l4;
si1=16U;
si0+=si1;
si1=l1;
si2=l3;
f5555(i,si0,si1,si2);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+20U);
l5=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+16U);
switch(si0){
case 0:
goto L17;
case 1:
goto L15;
case 2:
goto L18;
default:
goto L17;
}
L18:;
si0=l4;
si1=52U;
si0+=si1;
sj1=1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=2U;
i32_store(&i->m0,(U64)si0+44U,si1);
si0=l4;
si1=17311500U;
i32_store(&i->m0,(U64)si0+40U,si1);
si0=l4;
si1=1723U;
i32_store(&i->m0,(U64)si0+76U,si1);
si0=l4;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+28U);
i32_store(&i->m0,(U64)si0+64U,si1);
si0=l4;
si1=l4;
si2=72U;
si1+=si2;
i32_store(&i->m0,(U64)si0+48U,si1);
si0=l4;
si1=l4;
si2=64U;
si1+=si2;
i32_store(&i->m0,(U64)si0+72U,si1);
si0=l4;
si1=28U;
si0+=si1;
si1=l4;
si2=40U;
si1+=si2;
f64(i,si0,si1);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+88U);
si1=504U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
si1=l7;
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
goto L8;
}
si0=l3;
si1=l7;
si2=l4;
si3=28U;
si2+=si3;
si0=f11521(i,si0,si1,si2);
l7=si0;
goto L14;
L17:;
si0=l4;
si1=8U;
si0+=si1;
si1=l5;
si2=56U;
si1+=si2;
f11349(i,si0,si1);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+8U);
l1=si0;
if(si0){
goto L20;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0+12U);
l7=si0;
goto L19;
L20:;
si0=l4;
si1=52U;
si0+=si1;
sj1=1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=17367008U;
i32_store(&i->m0,(U64)si0+40U,si1);
si0=l4;
si1=1028U;
i32_store(&i->m0,(U64)si0+68U,si1);
si0=l4;
si1=5U;
i32_store(&i->m0,(U64)si0+76U,si1);
si0=l4;
si1=17367026U;
i32_store(&i->m0,(U64)si0+72U,si1);
si0=l4;
si1=l4;
si2=64U;
si1+=si2;
i32_store(&i->m0,(U64)si0+48U,si1);
si0=l4;
si1=l4;
si2=72U;
si1+=si2;
i32_store(&i->m0,(U64)si0+64U,si1);
si0=l4;
si1=1U;
i32_store(&i->m0,(U64)si0+44U,si1);
si0=l4;
si1=28U;
si0+=si1;
si1=l4;
si2=40U;
si1+=si2;
f64(i,si0,si1);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+88U);
si1=352U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
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
goto L8;
}
si0=l3;
si1=l7;
si2=l4;
si3=28U;
si2+=si3;
si0=f11521(i,si0,si1,si2);
l7=si0;
L19:;
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
goto L21;
}
si0=l5;
f5522(i,si0);
L21:;
si0=l1;
if(si0){
goto L14;
}
si0=l0;
si1=l6;
si2=l7;
si3=l2;
si4=l3;
si5=l8;
si0=TF(i->t0,si5,U32 (*)(rustpythonInstance*,U32,U32,U32,U32,U32))(i,si0,si1,si2,si3,si4);
l7=si0;
goto L1;
L16:;
si0=l4;
si1=52U;
si0+=si1;
sj1=1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=2U;
i32_store(&i->m0,(U64)si0+44U,si1);
si0=l4;
si1=17315176U;
i32_store(&i->m0,(U64)si0+40U,si1);
si0=l4;
si1=1723U;
i32_store(&i->m0,(U64)si0+76U,si1);
si0=l4;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+28U);
i32_store(&i->m0,(U64)si0+64U,si1);
si0=l4;
si1=l4;
si2=72U;
si1+=si2;
i32_store(&i->m0,(U64)si0+48U,si1);
si0=l4;
si1=l4;
si2=64U;
si1+=si2;
i32_store(&i->m0,(U64)si0+72U,si1);
si0=l4;
si1=28U;
si0+=si1;
si1=l4;
si2=40U;
si1+=si2;
f64(i,si0,si1);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+88U);
si1=504U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
si1=l7;
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
goto L8;
}
si0=l3;
si1=l7;
si2=l4;
si3=28U;
si2+=si3;
si0=f11521(i,si0,si1,si2);
l7=si0;
si0=l2;
si1=l2;
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
goto L7;
L15:;
si0=l5;
l7=si0;
L14:;
si0=l2;
si1=l2;
si1=i32_load(&i->m0,(U64)si1);
l0=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=1U;
si0=si0 == si1;
if(si0){
goto L7;
}
goto L1;
L8:;
f14795(i);
UNREACHABLE;
L7:;
si0=l2;
f5522(i,si0);
L1:;
si0=l4;
si1=80U;
si0+=si1;
i->g0=si0;
si0=l7;
L0:;
return si0;
}

U32 f5557(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 l8=0;
U32 l9=0;
U32 si0,si1,si2,si3,si4,si5;
U64 sj1;
si0=i->g0;
si1=80U;
si0-=si1;
l4=si0;
i->g0=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+88U);
si1=68U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
L3:;
{
si0=l5;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+28U);
l6=si1;
si0=si0 != si1;
l7=si0;
if(si0){
goto L2;
}
si0=l7;
if(si0){
goto L3;
}
}
si0=l0;
si1=56U;
si0+=si1;
si1=l3;
si2=l1;
si3=l2;
si0=f7434(i,si0,si1,si2,si3);
l7=si0;
goto L1;
L2:;
si0=l6;
si1=292U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l8=si0;
if(si0){
goto L4;
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
l5=si0;
L5:;
{
si0=l7;
if(si0){
goto L6;
}
si0=0U;
l8=si0;
goto L4;
L6:;
si0=l7;
si1=-4U;
si0+=si1;
l7=si0;
si0=l5;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si0=l5;
si1=4U;
si0+=si1;
l5=si0;
si0=l6;
si1=292U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l8=si0;
si0=!(si0);
if(si0){
goto L5;
}
}
L4:;
si0=l8;
si1=18661100U;
si2=l8;
si0=si2?si0:si1;
l7=si0;
si0=i32_load(&i->m0,(U64)si0+8U);
l5=si0;
si0=!(si0);
if(si0){
goto L9;
}
si0=l1;
si1=l1;
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
goto L8;
}
si0=l0;
si1=l7;
si2=l1;
si3=l2;
si4=l3;
si5=l5;
si0=TF(i->t0,si5,U32 (*)(rustpythonInstance*,U32,U32,U32,U32,U32))(i,si0,si1,si2,si3,si4);
l7=si0;
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
f5522(i,si0);
goto L1;
L9:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+28U);
l5=si0;
si1=l3;
si1=i32_load(&i->m0,(U64)si1+88U);
si2=68U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
si0=si0 != si1;
if(si0){
goto L11;
}
si0=0U;
l6=si0;
goto L10;
L11:;
si0=l5;
si1=288U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
if(si0){
goto L10;
}
si0=l5;
si1=468U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=2U;
si0<<=(si1&31);
l7=si0;
si0=l5;
si1=460U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
L12:;
{
si0=l7;
if(si0){
goto L13;
}
si0=0U;
l6=si0;
goto L10;
L13:;
si0=l7;
si1=-4U;
si0+=si1;
l7=si0;
si0=l5;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si0=l5;
si1=4U;
si0+=si1;
l5=si0;
si0=l6;
si1=288U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si0=!(si0);
if(si0){
goto L12;
}
}
L10:;
si0=l6;
si1=18663056U;
si2=l6;
si0=si2?si0:si1;
l6=si0;
si0=i32_load(&i->m0,(U64)si0+16U);
l8=si0;
si0=!(si0);
if(si0){
goto L16;
}
si0=l4;
si1=16U;
si0+=si1;
si1=l1;
si2=l3;
f5555(i,si0,si1,si2);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+20U);
l5=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+16U);
switch(si0){
case 0:
goto L17;
case 1:
goto L15;
case 2:
goto L18;
default:
goto L17;
}
L18:;
si0=l4;
si1=52U;
si0+=si1;
sj1=1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=2U;
i32_store(&i->m0,(U64)si0+44U,si1);
si0=l4;
si1=17311500U;
i32_store(&i->m0,(U64)si0+40U,si1);
si0=l4;
si1=1723U;
i32_store(&i->m0,(U64)si0+76U,si1);
si0=l4;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+28U);
i32_store(&i->m0,(U64)si0+64U,si1);
si0=l4;
si1=l4;
si2=72U;
si1+=si2;
i32_store(&i->m0,(U64)si0+48U,si1);
si0=l4;
si1=l4;
si2=64U;
si1+=si2;
i32_store(&i->m0,(U64)si0+72U,si1);
si0=l4;
si1=28U;
si0+=si1;
si1=l4;
si2=40U;
si1+=si2;
f64(i,si0,si1);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+88U);
si1=504U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
si1=l7;
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
goto L8;
}
si0=l3;
si1=l7;
si2=l4;
si3=28U;
si2+=si3;
si0=f11521(i,si0,si1,si2);
l7=si0;
goto L14;
L17:;
si0=l4;
si1=8U;
si0+=si1;
si1=l5;
si2=56U;
si1+=si2;
f11349(i,si0,si1);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+8U);
l1=si0;
if(si0){
goto L20;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0+12U);
l7=si0;
goto L19;
L20:;
si0=l4;
si1=52U;
si0+=si1;
sj1=1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=17367008U;
i32_store(&i->m0,(U64)si0+40U,si1);
si0=l4;
si1=1028U;
i32_store(&i->m0,(U64)si0+68U,si1);
si0=l4;
si1=5U;
i32_store(&i->m0,(U64)si0+76U,si1);
si0=l4;
si1=17367026U;
i32_store(&i->m0,(U64)si0+72U,si1);
si0=l4;
si1=l4;
si2=64U;
si1+=si2;
i32_store(&i->m0,(U64)si0+48U,si1);
si0=l4;
si1=l4;
si2=72U;
si1+=si2;
i32_store(&i->m0,(U64)si0+64U,si1);
si0=l4;
si1=1U;
i32_store(&i->m0,(U64)si0+44U,si1);
si0=l4;
si1=28U;
si0+=si1;
si1=l4;
si2=40U;
si1+=si2;
f64(i,si0,si1);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+88U);
si1=352U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
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
goto L8;
}
si0=l3;
si1=l7;
si2=l4;
si3=28U;
si2+=si3;
si0=f11521(i,si0,si1,si2);
l7=si0;
L19:;
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
goto L21;
}
si0=l5;
f5522(i,si0);
L21:;
si0=l1;
if(si0){
goto L14;
}
si0=l0;
si1=l6;
si2=l7;
si3=l2;
si4=l3;
si5=l8;
si0=TF(i->t0,si5,U32 (*)(rustpythonInstance*,U32,U32,U32,U32,U32))(i,si0,si1,si2,si3,si4);
l7=si0;
goto L1;
L16:;
si0=l4;
si1=52U;
si0+=si1;
sj1=1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=2U;
i32_store(&i->m0,(U64)si0+44U,si1);
si0=l4;
si1=17315176U;
i32_store(&i->m0,(U64)si0+40U,si1);
si0=l4;
si1=1723U;
i32_store(&i->m0,(U64)si0+76U,si1);
si0=l4;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+28U);
i32_store(&i->m0,(U64)si0+64U,si1);
si0=l4;
si1=l4;
si2=72U;
si1+=si2;
i32_store(&i->m0,(U64)si0+48U,si1);
si0=l4;
si1=l4;
si2=64U;
si1+=si2;
i32_store(&i->m0,(U64)si0+72U,si1);
si0=l4;
si1=28U;
si0+=si1;
si1=l4;
si2=40U;
si1+=si2;
f64(i,si0,si1);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+88U);
si1=504U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
si1=l7;
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
goto L8;
}
si0=l3;
si1=l7;
si2=l4;
si3=28U;
si2+=si3;
si0=f11521(i,si0,si1,si2);
l7=si0;
si0=l2;
si1=l2;
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
goto L7;
L15:;
si0=l5;
l7=si0;
L14:;
si0=l2;
si1=l2;
si1=i32_load(&i->m0,(U64)si1);
l0=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=1U;
si0=si0 == si1;
if(si0){
goto L7;
}
goto L1;
L8:;
f14795(i);
UNREACHABLE;
L7:;
si0=l2;
f5522(i,si0);
L1:;
si0=l4;
si1=80U;
si0+=si1;
i->g0=si0;
si0=l7;
L0:;
return si0;
}

U32 f5558(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4) {
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 l8=0;
U32 l9=0;
U32 si0,si1,si2,si3,si4,si5;
U64 sj1;
si0=i->g0;
si1=48U;
si0-=si1;
l5=si0;
i->g0=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+88U);
si1=68U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
L4:;
{
si0=l6;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+28U);
l7=si1;
si0=si0 != si1;
l8=si0;
if(si0){
goto L3;
}
si0=l8;
if(si0){
goto L4;
}
}
si0=l0;
si1=56U;
si0+=si1;
si1=l4;
si2=l1;
si3=l2;
si4=l3;
si0=f7437(i,si0,si1,si2,si3,si4);
l8=si0;
goto L2;
L3:;
si0=l7;
si1=292U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l9=si0;
if(si0){
goto L5;
}
si0=l7;
si1=468U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=2U;
si0<<=(si1&31);
l8=si0;
si0=l7;
si1=460U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
L6:;
{
si0=l8;
if(si0){
goto L7;
}
si0=0U;
l9=si0;
goto L5;
L7:;
si0=l8;
si1=-4U;
si0+=si1;
l8=si0;
si0=l6;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
si0=l6;
si1=4U;
si0+=si1;
l6=si0;
si0=l7;
si1=292U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l9=si0;
si0=!(si0);
if(si0){
goto L6;
}
}
L5:;
si0=l9;
si1=18661100U;
si2=l9;
si0=si2?si0:si1;
l7=si0;
si0=i32_load(&i->m0,(U64)si0+8U);
l9=si0;
si0=!(si0);
if(si0){
goto L12;
}
si0=1U;
l8=si0;
si0=l2;
si0=!(si0);
if(si0){
goto L13;
}
si0=l2;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L11;
}
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=l2;
si0=f15022(i,si0);
l8=si0;
si0=!(si0);
if(si0){
goto L10;
}
L13:;
si0=l8;
si1=l1;
si2=l2;
si0=f15143(i,si0,si1,si2);
l8=si0;
si0=l5;
si1=l2;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l5;
si1=l2;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l5;
si1=l8;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l0;
si1=l7;
si2=l5;
si3=12U;
si2+=si3;
si3=l4;
si3=i32_load(&i->m0,(U64)si3+88U);
si4=8U;
si3+=si4;
si2=f8912(i,si2,si3);
l6=si2;
si3=l3;
si4=l4;
si5=l9;
si0=TF(i->t0,si5,U32 (*)(rustpythonInstance*,U32,U32,U32,U32,U32))(i,si0,si1,si2,si3,si4);
l8=si0;
si0=l6;
si1=l6;
si1=i32_load(&i->m0,(U64)si1);
l0=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=1U;
si0=si0 != si1;
if(si0){
goto L2;
}
si0=l6;
f5522(i,si0);
goto L2;
L12:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+28U);
l6=si0;
si1=l4;
si1=i32_load(&i->m0,(U64)si1+88U);
si2=68U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
si0=si0 != si1;
if(si0){
goto L15;
}
si0=0U;
l7=si0;
goto L14;
L15:;
si0=l6;
si1=288U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
if(si0){
goto L14;
}
si0=l6;
si1=468U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=2U;
si0<<=(si1&31);
l8=si0;
si0=l6;
si1=460U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
L16:;
{
si0=l8;
if(si0){
goto L17;
}
si0=0U;
l7=si0;
goto L14;
L17:;
si0=l8;
si1=-4U;
si0+=si1;
l8=si0;
si0=l6;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
si0=l6;
si1=4U;
si0+=si1;
l6=si0;
si0=l7;
si1=288U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
si0=!(si0);
if(si0){
goto L16;
}
}
L14:;
si0=l7;
si1=18663056U;
si2=l7;
si0=si2?si0:si1;
si0=i32_load(&i->m0,(U64)si0+16U);
si0=!(si0);
if(si0){
goto L19;
}
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=48U;
si0=f15022(i,si0);
l8=si0;
si0=!(si0);
if(si0){
goto L9;
}
si0=l8;
si1=40U;
si0+=si1;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+17342076U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l8;
si1=32U;
si0+=si1;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+17342068U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l8;
si1=24U;
si0+=si1;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+17342060U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l8;
si1=16U;
si0+=si1;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+17342052U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l8;
si1=8U;
si0+=si1;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+17342044U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l8;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+17342036U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+88U);
si1=504U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l0=si0;
si1=l0;
si1=i32_load(&i->m0,(U64)si1);
l6=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
sj1=206158430256ULL;
i64_store(&i->m0,(U64)si0+16U,sj1);
si0=l5;
si1=l8;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l6;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 != si1;
if(si0){
goto L18;
}
goto L1;
L19:;
si0=l5;
si1=24U;
si0+=si1;
sj1=1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=2U;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l5;
si1=17315176U;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l5;
si1=1723U;
i32_store(&i->m0,(U64)si0+40U,si1);
si0=l5;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+28U);
i32_store(&i->m0,(U64)si0+44U,si1);
si0=l5;
si1=l5;
si2=36U;
si1+=si2;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l5;
si1=l5;
si2=44U;
si1+=si2;
i32_store(&i->m0,(U64)si0+36U,si1);
si0=l5;
si1=l5;
si2=12U;
si1+=si2;
f64(i,si0,si1);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+88U);
si1=504U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l8=si0;
si1=l8;
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
si0=l4;
si1=l8;
si2=l5;
si0=f11521(i,si0,si1,si2);
l8=si0;
si0=l3;
si1=l3;
si1=i32_load(&i->m0,(U64)si1);
l0=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=1U;
si0=si0 != si1;
if(si0){
goto L2;
}
goto L8;
L18:;
si0=l4;
si1=l0;
si2=l5;
si3=12U;
si2+=si3;
si0=f11521(i,si0,si1,si2);
l8=si0;
si0=l3;
si1=l3;
si1=i32_load(&i->m0,(U64)si1);
l0=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=1U;
si0=si0 == si1;
if(si0){
goto L8;
}
goto L2;
L11:;
f53(i);
UNREACHABLE;
L10:;
si0=1U;
si1=l2;
f52(i,si0,si1);
UNREACHABLE;
L9:;
si0=1U;
si1=48U;
f52(i,si0,si1);
UNREACHABLE;
L8:;
si0=l3;
f5522(i,si0);
L2:;
si0=l5;
si1=48U;
si0+=si1;
i->g0=si0;
si0=l8;
goto L0;
L1:;
f14795(i);
UNREACHABLE;
L0:;
return si0;
}

U32 f5559(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 l8=0;
U32 si0,si1,si2,si3,si4,si5;
U64 sj1;
si0=i->g0;
si1=80U;
si0-=si1;
l3=si0;
i->g0=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+88U);
si1=68U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
L4:;
{
si0=l4;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+28U);
si0=si0 == si1;
if(si0){
goto L3;
}
si0=l4;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+28U);
si0=si0 == si1;
if(si0){
goto L4;
}
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+28U);
l5=si0;
si1=292U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
if(si0){
goto L5;
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
L6:;
{
si0=l4;
if(si0){
goto L7;
}
si0=0U;
l6=si0;
goto L5;
L7:;
si0=l4;
si1=-4U;
si0+=si1;
l4=si0;
si0=l5;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si0=l5;
si1=4U;
si0+=si1;
l5=si0;
si0=l6;
si1=292U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si0=!(si0);
if(si0){
goto L6;
}
}
L5:;
si0=l6;
si1=18661100U;
si2=l6;
si0=si2?si0:si1;
l4=si0;
si0=i32_load(&i->m0,(U64)si0+8U);
l5=si0;
si0=!(si0);
if(si0){
goto L8;
}
si0=l1;
si1=l1;
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
si0=l0;
si1=l4;
si2=l1;
si3=0U;
si4=l2;
si5=l5;
si0=TF(i->t0,si5,U32 (*)(rustpythonInstance*,U32,U32,U32,U32,U32))(i,si0,si1,si2,si3,si4);
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
si0=si0 != si1;
if(si0){
goto L2;
}
si0=l1;
f5522(i,si0);
goto L2;
L8:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+28U);
l5=si0;
si1=l2;
si1=i32_load(&i->m0,(U64)si1+88U);
si2=68U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
si0=si0 != si1;
if(si0){
goto L10;
}
si0=0U;
l6=si0;
goto L9;
L10:;
si0=l5;
si1=288U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
if(si0){
goto L9;
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
L11:;
{
si0=l4;
if(si0){
goto L12;
}
si0=0U;
l6=si0;
goto L9;
L12:;
si0=l4;
si1=-4U;
si0+=si1;
l4=si0;
si0=l5;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si0=l5;
si1=4U;
si0+=si1;
l5=si0;
si0=l6;
si1=288U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si0=!(si0);
if(si0){
goto L11;
}
}
L9:;
si0=l6;
si1=18663056U;
si2=l6;
si0=si2?si0:si1;
l6=si0;
si0=i32_load(&i->m0,(U64)si0+16U);
l7=si0;
si0=!(si0);
if(si0){
goto L13;
}
si0=l3;
si1=16U;
si0+=si1;
si1=l1;
si2=l2;
f5555(i,si0,si1,si2);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+20U);
l5=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+16U);
switch(si0){
case 0:
goto L14;
case 1:
goto L16;
case 2:
goto L15;
default:
goto L14;
}
L16:;
si0=l5;
l4=si0;
goto L2;
L15:;
si0=l3;
si1=52U;
si0+=si1;
sj1=1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=2U;
i32_store(&i->m0,(U64)si0+44U,si1);
si0=l3;
si1=17311500U;
i32_store(&i->m0,(U64)si0+40U,si1);
si0=l3;
si1=1723U;
i32_store(&i->m0,(U64)si0+76U,si1);
si0=l3;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+28U);
i32_store(&i->m0,(U64)si0+64U,si1);
si0=l3;
si1=l3;
si2=72U;
si1+=si2;
i32_store(&i->m0,(U64)si0+48U,si1);
si0=l3;
si1=l3;
si2=64U;
si1+=si2;
i32_store(&i->m0,(U64)si0+72U,si1);
si0=l3;
si1=28U;
si0+=si1;
si1=l3;
si2=40U;
si1+=si2;
f64(i,si0,si1);
si0=l2;
si0=i32_load(&i->m0,(U64)si0+88U);
si1=504U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
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
goto L1;
}
si0=l2;
si1=l0;
si2=l3;
si3=28U;
si2+=si3;
si0=f11521(i,si0,si1,si2);
l4=si0;
goto L2;
L14:;
si0=l3;
si1=8U;
si0+=si1;
si1=l5;
si2=56U;
si1+=si2;
f11349(i,si0,si1);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+8U);
l1=si0;
if(si0){
goto L18;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0+12U);
l4=si0;
goto L17;
L18:;
si0=l3;
si1=52U;
si0+=si1;
sj1=1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=17367008U;
i32_store(&i->m0,(U64)si0+40U,si1);
si0=l3;
si1=1028U;
i32_store(&i->m0,(U64)si0+68U,si1);
si0=l3;
si1=5U;
i32_store(&i->m0,(U64)si0+76U,si1);
si0=l3;
si1=17367026U;
i32_store(&i->m0,(U64)si0+72U,si1);
si0=l3;
si1=l3;
si2=64U;
si1+=si2;
i32_store(&i->m0,(U64)si0+48U,si1);
si0=l3;
si1=l3;
si2=72U;
si1+=si2;
i32_store(&i->m0,(U64)si0+64U,si1);
si0=l3;
si1=1U;
i32_store(&i->m0,(U64)si0+44U,si1);
si0=l3;
si1=28U;
si0+=si1;
si1=l3;
si2=40U;
si1+=si2;
f64(i,si0,si1);
si0=l2;
si0=i32_load(&i->m0,(U64)si0+88U);
si1=352U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
si1=l4;
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
si0=l2;
si1=l4;
si2=l3;
si3=28U;
si2+=si3;
si0=f11521(i,si0,si1,si2);
l4=si0;
L17:;
si0=l5;
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
goto L19;
}
si0=l5;
f5522(i,si0);
L19:;
si0=l1;
if(si0){
goto L2;
}
si0=l0;
si1=l6;
si2=l4;
si3=0U;
si4=l2;
si5=l7;
si0=TF(i->t0,si5,U32 (*)(rustpythonInstance*,U32,U32,U32,U32,U32))(i,si0,si1,si2,si3,si4);
l4=si0;
goto L2;
L13:;
si0=l3;
si1=52U;
si0+=si1;
sj1=1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=2U;
i32_store(&i->m0,(U64)si0+44U,si1);
si0=l3;
si1=17315224U;
i32_store(&i->m0,(U64)si0+40U,si1);
si0=l3;
si1=1723U;
i32_store(&i->m0,(U64)si0+76U,si1);
si0=l3;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+28U);
i32_store(&i->m0,(U64)si0+64U,si1);
si0=l3;
si1=l3;
si2=72U;
si1+=si2;
i32_store(&i->m0,(U64)si0+48U,si1);
si0=l3;
si1=l3;
si2=64U;
si1+=si2;
i32_store(&i->m0,(U64)si0+72U,si1);
si0=l3;
si1=28U;
si0+=si1;
si1=l3;
si2=40U;
si1+=si2;
f64(i,si0,si1);
si0=l2;
si0=i32_load(&i->m0,(U64)si0+88U);
si1=504U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
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
goto L1;
}
si0=l2;
si1=l0;
si2=l3;
si3=28U;
si2+=si3;
si0=f11521(i,si0,si1,si2);
l4=si0;
goto L2;
L3:;
si0=l0;
si1=56U;
si0+=si1;
si1=l2;
si2=l1;
si0=f7451(i,si0,si1,si2);
l4=si0;
L2:;
si0=l3;
si1=80U;
si0+=si1;
i->g0=si0;
si0=l4;
goto L0;
L1:;
f14795(i);
UNREACHABLE;
L0:;
return si0;
}

U32 f5560(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 l8=0;
U32 si0,si1,si2,si3,si4,si5;
U64 sj1;
si0=i->g0;
si1=80U;
si0-=si1;
l3=si0;
i->g0=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+88U);
si1=68U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
L4:;
{
si0=l4;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+28U);
si0=si0 == si1;
if(si0){
goto L3;
}
si0=l4;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+28U);
si0=si0 == si1;
if(si0){
goto L4;
}
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+28U);
l5=si0;
si1=292U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
if(si0){
goto L5;
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
L6:;
{
si0=l4;
if(si0){
goto L7;
}
si0=0U;
l6=si0;
goto L5;
L7:;
si0=l4;
si1=-4U;
si0+=si1;
l4=si0;
si0=l5;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si0=l5;
si1=4U;
si0+=si1;
l5=si0;
si0=l6;
si1=292U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si0=!(si0);
if(si0){
goto L6;
}
}
L5:;
si0=l6;
si1=18661100U;
si2=l6;
si0=si2?si0:si1;
l4=si0;
si0=i32_load(&i->m0,(U64)si0+8U);
l5=si0;
si0=!(si0);
if(si0){
goto L8;
}
si0=l1;
si1=l1;
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
si0=l0;
si1=l4;
si2=l1;
si3=0U;
si4=l2;
si5=l5;
si0=TF(i->t0,si5,U32 (*)(rustpythonInstance*,U32,U32,U32,U32,U32))(i,si0,si1,si2,si3,si4);
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
si0=si0 != si1;
if(si0){
goto L2;
}
si0=l1;
f5522(i,si0);
goto L2;
L8:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+28U);
l5=si0;
si1=l2;
si1=i32_load(&i->m0,(U64)si1+88U);
si2=68U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
si0=si0 != si1;
if(si0){
goto L10;
}
si0=0U;
l6=si0;
goto L9;
L10:;
si0=l5;
si1=288U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
if(si0){
goto L9;
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
L11:;
{
si0=l4;
if(si0){
goto L12;
}
si0=0U;
l6=si0;
goto L9;
L12:;
si0=l4;
si1=-4U;
si0+=si1;
l4=si0;
si0=l5;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si0=l5;
si1=4U;
si0+=si1;
l5=si0;
si0=l6;
si1=288U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si0=!(si0);
if(si0){
goto L11;
}
}
L9:;
si0=l6;
si1=18663056U;
si2=l6;
si0=si2?si0:si1;
l6=si0;
si0=i32_load(&i->m0,(U64)si0+16U);
l7=si0;
si0=!(si0);
if(si0){
goto L13;
}
si0=l3;
si1=16U;
si0+=si1;
si1=l1;
si2=l2;
f5555(i,si0,si1,si2);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+20U);
l5=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+16U);
switch(si0){
case 0:
goto L14;
case 1:
goto L16;
case 2:
goto L15;
default:
goto L14;
}
L16:;
si0=l5;
l4=si0;
goto L2;
L15:;
si0=l3;
si1=52U;
si0+=si1;
sj1=1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=2U;
i32_store(&i->m0,(U64)si0+44U,si1);
si0=l3;
si1=17311500U;
i32_store(&i->m0,(U64)si0+40U,si1);
si0=l3;
si1=1723U;
i32_store(&i->m0,(U64)si0+76U,si1);
si0=l3;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+28U);
i32_store(&i->m0,(U64)si0+64U,si1);
si0=l3;
si1=l3;
si2=72U;
si1+=si2;
i32_store(&i->m0,(U64)si0+48U,si1);
si0=l3;
si1=l3;
si2=64U;
si1+=si2;
i32_store(&i->m0,(U64)si0+72U,si1);
si0=l3;
si1=28U;
si0+=si1;
si1=l3;
si2=40U;
si1+=si2;
f64(i,si0,si1);
si0=l2;
si0=i32_load(&i->m0,(U64)si0+88U);
si1=504U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
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
goto L1;
}
si0=l2;
si1=l0;
si2=l3;
si3=28U;
si2+=si3;
si0=f11521(i,si0,si1,si2);
l4=si0;
goto L2;
L14:;
si0=l3;
si1=8U;
si0+=si1;
si1=l5;
si2=56U;
si1+=si2;
f11349(i,si0,si1);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+8U);
l1=si0;
if(si0){
goto L18;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0+12U);
l4=si0;
goto L17;
L18:;
si0=l3;
si1=52U;
si0+=si1;
sj1=1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=17367008U;
i32_store(&i->m0,(U64)si0+40U,si1);
si0=l3;
si1=1028U;
i32_store(&i->m0,(U64)si0+68U,si1);
si0=l3;
si1=5U;
i32_store(&i->m0,(U64)si0+76U,si1);
si0=l3;
si1=17367026U;
i32_store(&i->m0,(U64)si0+72U,si1);
si0=l3;
si1=l3;
si2=64U;
si1+=si2;
i32_store(&i->m0,(U64)si0+48U,si1);
si0=l3;
si1=l3;
si2=72U;
si1+=si2;
i32_store(&i->m0,(U64)si0+64U,si1);
si0=l3;
si1=1U;
i32_store(&i->m0,(U64)si0+44U,si1);
si0=l3;
si1=28U;
si0+=si1;
si1=l3;
si2=40U;
si1+=si2;
f64(i,si0,si1);
si0=l2;
si0=i32_load(&i->m0,(U64)si0+88U);
si1=352U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
si1=l4;
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
si0=l2;
si1=l4;
si2=l3;
si3=28U;
si2+=si3;
si0=f11521(i,si0,si1,si2);
l4=si0;
L17:;
si0=l5;
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
goto L19;
}
si0=l5;
f5522(i,si0);
L19:;
si0=l1;
if(si0){
goto L2;
}
si0=l0;
si1=l6;
si2=l4;
si3=0U;
si4=l2;
si5=l7;
si0=TF(i->t0,si5,U32 (*)(rustpythonInstance*,U32,U32,U32,U32,U32))(i,si0,si1,si2,si3,si4);
l4=si0;
goto L2;
L13:;
si0=l3;
si1=52U;
si0+=si1;
sj1=1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=2U;
i32_store(&i->m0,(U64)si0+44U,si1);
si0=l3;
si1=17315224U;
i32_store(&i->m0,(U64)si0+40U,si1);
si0=l3;
si1=1723U;
i32_store(&i->m0,(U64)si0+76U,si1);
si0=l3;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+28U);
i32_store(&i->m0,(U64)si0+64U,si1);
si0=l3;
si1=l3;
si2=72U;
si1+=si2;
i32_store(&i->m0,(U64)si0+48U,si1);
si0=l3;
si1=l3;
si2=64U;
si1+=si2;
i32_store(&i->m0,(U64)si0+72U,si1);
si0=l3;
si1=28U;
si0+=si1;
si1=l3;
si2=40U;
si1+=si2;
f64(i,si0,si1);
si0=l2;
si0=i32_load(&i->m0,(U64)si0+88U);
si1=504U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
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
goto L1;
}
si0=l2;
si1=l0;
si2=l3;
si3=28U;
si2+=si3;
si0=f11521(i,si0,si1,si2);
l4=si0;
goto L2;
L3:;
si0=l0;
si1=56U;
si0+=si1;
si1=l2;
si2=l1;
si0=f7450(i,si0,si1,si2);
l4=si0;
L2:;
si0=l3;
si1=80U;
si0+=si1;
i->g0=si0;
si0=l4;
goto L0;
L1:;
f14795(i);
UNREACHABLE;
L0:;
return si0;
}

void f5561(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4) {
U32 l5=0;
U32 l6=0;
U64 l7=0;
U32 si0,si1,si2,si3,si4;
U64 sj0,sj1,sj4;
si0=i->g0;
si1=32U;
si0-=si1;
l5=si0;
i->g0=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+88U);
si1=68U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+28U);
si0=si0 != si1;
if(si0){
goto L3;
}
si0=l6;
si1=l2;
si1=i32_load(&i->m0,(U64)si1+28U);
si0=si0 == si1;
if(si0){
goto L2;
}
L3:;
si0=l5;
si1=24U;
si0+=si1;
si1=l1;
si2=l3;
si3=l4;
f5543(i,si0,si1,si2,si3);
si0=1U;
l1=si0;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+28U);
l6=si0;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+24U);
if(si0){
goto L1;
}
si0=0U;
l1=si0;
si0=l6;
if(si0){
goto L1;
}
si0=l5;
si1=16U;
si0+=si1;
si1=l2;
si2=l3;
si3=l4;
f5543(i,si0,si1,si2,si3);
si0=l5;
si0=i32_load(&i->m0,(U64)si0+20U);
l6=si0;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+16U);
l1=si0;
goto L1;
L2:;
si0=l1;
si1=56U;
si0+=si1;
l1=si0;
si0=l3;
si1=72U;
si0+=si1;
sj0=i64_load(&i->m0,(U64)si0);
l7=sj0;
sj1=-1ULL;
si0=sj0 != sj1;
if(si0){
goto L4;
}
si0=l3;
si1=l4;
si1=i32_load(&i->m0,(U64)si1+96U);
si2=224U;
si1+=si2;
si2=l3;
si3=64U;
si2+=si3;
si2=i32_load(&i->m0,(U64)si2);
si3=l3;
si4=68U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
sj1=f2068(i,si1,si2,si3);
l7=sj1;
i64_store(&i->m0,(U64)si0+72U,sj1);
L4:;
si0=l5;
si1=8U;
si0+=si1;
si1=l1;
si2=l4;
si3=l3;
sj4=l7;
f7444(i,si0,si1,si2,si3,sj4);
si0=1U;
l1=si0;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+12U);
l6=si0;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+8U);
if(si0){
goto L1;
}
si0=0U;
l1=si0;
si0=l6;
if(si0){
goto L1;
}
si0=l5;
si1=l2;
si2=56U;
si1+=si2;
si2=l4;
si3=l3;
sj4=l7;
f7444(i,si0,si1,si2,si3,sj4);
si0=l5;
si0=i32_load(&i->m0,(U64)si0+4U);
l6=si0;
si0=l5;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
L1:;
si0=l0;
si1=l6;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l1;
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=32U;
si0+=si1;
i->g0=si0;
L0:;
}

U32 f5562(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 l8=0;
U32 l9=0;
U32 l10=0;
U64 l11=0;
U64 l12=0;
U32 si0,si1,si2,si3,si4,si5,si6;
U64 sj0,sj1,sj2;
si0=i->g0;
si1=256U;
si0-=si1;
l4=si0;
i->g0=si0;
si0=l0;
si1=160U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=1U;
si0=si0 != si1;
if(si0){
goto L11;
}
si0=l4;
si1=l0;
si2=56U;
si1+=si2;
f8776(i,si0,si1);
si0=l4;
si1=l1;
si2=0U;
si3=l3;
si0=f8784(i,si0,si1,si2,si3);
l1=si0;
if(si0){
goto L8;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0+96U);
l5=si0;
si0=l4;
si1=104U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
if(si0){
goto L10;
}
si0=1U;
l7=si0;
goto L9;
L11:;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=28U;
si0=f15022(i,si0);
l1=si0;
si0=!(si0);
if(si0){
goto L6;
}
si0=l1;
si1=24U;
si0+=si1;
si1=0U;
si1=i32_load(&i->m0,(U64)si1+17310934U);
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
si1=16U;
si0+=si1;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+17310926U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si1=8U;
si0+=si1;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+17310918U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+17310910U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+88U);
si1=480U;
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
sj1=120259084316ULL;
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l4;
si1=l1;
i32_store(&i->m0,(U64)si0,si1);
si0=l8;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 == si1;
if(si0){
goto L5;
}
si0=l3;
si1=l7;
si2=l4;
si0=f11521(i,si0,si1,si2);
l1=si0;
goto L7;
L10:;
si0=l6;
si1=3U;
si0&=si1;
l8=si0;
si0=l6;
si1=4U;
si0=si0 >= si1;
if(si0){
goto L13;
}
si0=0U;
l9=si0;
si0=1U;
l7=si0;
goto L12;
L13:;
si0=l6;
si1=-4U;
si0&=si1;
l10=si0;
si0=0U;
l9=si0;
si0=1U;
l7=si0;
si0=l5;
l1=si0;
L14:;
{
si0=l1;
si1=36U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=l1;
si2=24U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
si2=l1;
si3=12U;
si2+=si3;
si2=i32_load(&i->m0,(U64)si2);
si3=l1;
si3=i32_load(&i->m0,(U64)si3);
si4=l7;
si3*=si4;
si2*=si3;
si1*=si2;
si0*=si1;
l7=si0;
si0=l1;
si1=48U;
si0+=si1;
l1=si0;
si0=l10;
si1=l9;
si2=4U;
si1+=si2;
l9=si1;
si0=si0 != si1;
if(si0){
goto L14;
}
}
L12:;
si0=l8;
si0=!(si0);
if(si0){
goto L9;
}
si0=l5;
si1=l9;
si2=12U;
si1*=si2;
si0+=si1;
l1=si0;
L15:;
{
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
si1=l7;
si0*=si1;
l7=si0;
si0=l1;
si1=12U;
si0+=si1;
l1=si0;
si0=l8;
si1=-1U;
si0+=si1;
l8=si0;
if(si0){
goto L15;
}
}
L9:;
si0=l4;
si1=108U;
si0+=si1;
si1=l4;
si2=112U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
l1=si1;
si2=l7;
si1*=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=l0;
si0=si0 == si1;
if(si0){
goto L25;
}
si0=l2;
sj0=i64_load(&i->m0,(U64)si0+8U);
l11=sj0;
sj1=5968383067144272154ULL;
sj0^=sj1;
si1=l2;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
l12=sj1;
sj2=4081176807085765302ULL;
sj1^=sj2;
sj0|=sj1;
si0=!(sj0);
si0=!(si0);
if(si0){
goto L24;
}
si0=l2;
si1=108U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=l0;
si2=108U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
si0=si0 == si1;
if(si0){
goto L22;
}
si0=l4;
si1=184U;
si0+=si1;
si1=l2;
si2=l3;
f8792(i,si0,si1,si2);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+184U);
l1=si0;
si0=l4;
si0=i32_load8_u(&i->m0,(U64)si0+224U);
l7=si0;
si1=2U;
si0=si0 == si1;
if(si0){
goto L23;
}
si0=l4;
si1=140U;
si0+=si1;
si1=36U;
si0+=si1;
si1=l4;
si2=184U;
si1+=si2;
si2=36U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=140U;
si0+=si1;
si1=28U;
si0+=si1;
si1=l4;
si2=184U;
si1+=si2;
si2=28U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=140U;
si0+=si1;
si1=20U;
si0+=si1;
si1=l4;
si2=184U;
si1+=si2;
si2=20U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=140U;
si0+=si1;
si1=12U;
si0+=si1;
si1=l4;
si2=184U;
si1+=si2;
si2=12U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=140U;
si0+=si1;
si1=43U;
si0+=si1;
si1=l4;
si2=184U;
si1+=si2;
si2=43U;
si1+=si2;
si1=i32_load8_u(&i->m0,(U64)si1);
i32_store8(&i->m0,(U64)si0,si1);
si0=l4;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1+188U);
i64_store(&i->m0,(U64)si0+144U,sj1);
si0=l4;
si1=l4;
si1=i32_load16_u(&i->m0,(U64)si1+225U);
i32_store16(&i->m0,(U64)si0+181U,si1);
si0=l4;
si1=l7;
i32_store8(&i->m0,(U64)si0+180U,si1);
si0=l4;
si1=l1;
i32_store(&i->m0,(U64)si0+140U,si1);
goto L21;
L25:;
si0=l0;
si1=168U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=l1;
si0=si0 != si1;
if(si0){
goto L16;
}
si0=l0;
si1=180U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si1=l4;
si2=124U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
si0=si0 != si1;
if(si0){
goto L16;
}
si0=l0;
si1=172U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
si1=l0;
si2=176U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
si2=l7;
si0=si2?si0:si1;
si1=l4;
si2=116U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
l7=si1;
si2=l4;
si3=120U;
si2+=si3;
si2=i32_load(&i->m0,(U64)si2);
si3=l7;
si1=si3?si1:si2;
si2=l1;
si0=f15142(i,si0,si1,si2);
if(si0){
goto L16;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+160U);
si1=l6;
si0=si0 != si1;
if(si0){
goto L16;
}
si0=l6;
si1=1U;
si0+=si1;
l8=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+152U);
l7=si0;
L26:;
{
si0=0U;
l1=si0;
si0=l8;
si1=-1U;
si0+=si1;
l8=si0;
si0=!(si0);
if(si0){
goto L8;
}
si0=l7;
si0=i32_load(&i->m0,(U64)si0);
l9=si0;
si1=l5;
si1=i32_load(&i->m0,(U64)si1);
si0=si0 != si1;
if(si0){
goto L16;
}
si0=l7;
si1=12U;
si0+=si1;
l7=si0;
si0=l5;
si1=12U;
si0+=si1;
l5=si0;
si0=l9;
if(si0){
goto L26;
}
goto L8;
}
L24:;
si0=l4;
si1=184U;
si0+=si1;
si1=l3;
si2=l2;
f13151(i,si0,si1,si2);
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
goto L27;
}
si0=l2;
f5522(i,si0);
L27:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+184U);
l1=si0;
si0=l4;
si0=i32_load8_u(&i->m0,(U64)si0+224U);
l7=si0;
si1=2U;
si0=si0 == si1;
if(si0){
goto L20;
}
si0=l4;
si1=140U;
si0+=si1;
si1=36U;
si0+=si1;
si1=l4;
si2=184U;
si1+=si2;
si2=36U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=140U;
si0+=si1;
si1=28U;
si0+=si1;
si1=l4;
si2=184U;
si1+=si2;
si2=28U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=140U;
si0+=si1;
si1=20U;
si0+=si1;
si1=l4;
si2=184U;
si1+=si2;
si2=20U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=140U;
si0+=si1;
si1=12U;
si0+=si1;
si1=l4;
si2=184U;
si1+=si2;
si2=12U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=140U;
si0+=si1;
si1=43U;
si0+=si1;
si1=l4;
si2=184U;
si1+=si2;
si2=43U;
si1+=si2;
si1=i32_load8_u(&i->m0,(U64)si1);
i32_store8(&i->m0,(U64)si0,si1);
si0=l4;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1+188U);
i64_store(&i->m0,(U64)si0+144U,sj1);
si0=l4;
si1=l4;
si1=i32_load16_u(&i->m0,(U64)si1+225U);
i32_store16(&i->m0,(U64)si0+181U,si1);
si0=l4;
si1=l7;
i32_store8(&i->m0,(U64)si0+180U,si1);
si0=l4;
si1=l1;
i32_store(&i->m0,(U64)si0+140U,si1);
goto L21;
L23:;
si0=l4;
f5527(i,si0);
goto L7;
L22:;
si0=l4;
si1=140U;
si0+=si1;
si1=l2;
si2=56U;
si1+=si2;
si2=l3;
f8790(i,si0,si1,si2);
L21:;
si0=l4;
si1=164U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=l4;
si1=i32_load(&i->m0,(U64)si1+112U);
si0=si0 != si1;
if(si0){
goto L17;
}
si0=l4;
si1=176U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si1=l4;
si2=124U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
si0=si0 != si1;
if(si0){
goto L17;
}
si0=l4;
si1=168U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
si1=l4;
si2=172U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
si2=l7;
si0=si2?si0:si1;
si1=l4;
si2=116U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
l7=si1;
si2=l4;
si3=120U;
si2+=si3;
si2=i32_load(&i->m0,(U64)si2);
si3=l7;
si1=si3?si1:si2;
si2=l1;
si0=f15142(i,si0,si1,si2);
if(si0){
goto L17;
}
si0=l4;
si1=156U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si1=l4;
si1=i32_load(&i->m0,(U64)si1+104U);
si0=si0 != si1;
if(si0){
goto L17;
}
si0=l4;
si1=96U;
si0+=si1;
l0=si0;
si0=l4;
si1=148U;
si0+=si1;
l10=si0;
si0=l1;
si1=1U;
si0+=si1;
l8=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+96U);
l1=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+148U);
l7=si0;
L29:;
{
si0=l8;
si1=-1U;
si0+=si1;
l8=si0;
si0=!(si0);
if(si0){
goto L28;
}
si0=l7;
si0=i32_load(&i->m0,(U64)si0);
l9=si0;
si1=l1;
si1=i32_load(&i->m0,(U64)si1);
si0=si0 != si1;
if(si0){
goto L17;
}
si0=l7;
si1=12U;
si0+=si1;
l7=si0;
si0=l1;
si1=12U;
si0+=si1;
l1=si0;
si0=l9;
if(si0){
goto L29;
}
}
L28:;
si0=l4;
si1=228U;
si0+=si1;
si1=l4;
si2=52U;
si1+=si2;
si2=l4;
si3=56U;
si2+=si3;
si2=i32_load(&i->m0,(U64)si2);
si2=i32_load(&i->m0,(U64)si2+4U);
TF(i->t0,si2,void (*)(rustpythonInstance*,U32,U32))(i,si0,si1);
si0=l4;
si1=184U;
si0+=si1;
si1=l4;
si2=140U;
si1+=si2;
si2=l4;
si2=i32_load(&i->m0,(U64)si2+144U);
si2=i32_load(&i->m0,(U64)si2);
TF(i->t0,si2,void (*)(rustpythonInstance*,U32,U32))(i,si0,si1);
si0=l4;
si1=l4;
si2=48U;
si1+=si2;
i32_store(&i->m0,(U64)si0+244U,si1);
si0=l4;
si1=l4;
si2=184U;
si1+=si2;
i32_store(&i->m0,(U64)si0+252U,si1);
si0=l4;
si1=l4;
si2=228U;
si1+=si2;
i32_store(&i->m0,(U64)si0+248U,si1);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+104U);
l1=si0;
if(si0){
goto L19;
}
si0=l4;
si1=244U;
si0+=si1;
si1=0U;
si2=l4;
si2=i32_load(&i->m0,(U64)si2+112U);
si3=0U;
si4=l4;
si4=i32_load(&i->m0,(U64)si4+164U);
f13127(i,si0,si1,si2,si3,si4);
goto L18;
L20:;
si0=l4;
f8793(i,si0);
si0=l4;
si1=28U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L30;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0+24U);
f15024(i,si0);
L30:;
si0=l4;
si1=116U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
si0=!(si0);
if(si0){
goto L31;
}
si0=l4;
si1=120U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L31;
}
si0=l7;
f15024(i,si0);
L31:;
si0=l4;
si1=100U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L1;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0+96U);
f15024(i,si0);
goto L1;
L19:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+96U);
si1=l1;
si2=-1U;
si1+=si2;
si2=12U;
si1*=si2;
si0+=si1;
l1=si0;
si0=i32_load(&i->m0,(U64)si0+8U);
if(si0){
goto L33;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
si1=l4;
si1=i32_load(&i->m0,(U64)si1+112U);
si0=si0 == si1;
if(si0){
goto L32;
}
L33:;
si0=l0;
si1=l10;
si2=0U;
si3=0U;
si4=0U;
si5=l4;
si6=244U;
si5+=si6;
f13225(i,si0,si1,si2,si3,si4,si5);
goto L18;
L32:;
si0=l0;
si1=l10;
si2=0U;
si3=0U;
si4=0U;
si5=l4;
si6=244U;
si5+=si6;
f13226(i,si0,si1,si2,si3,si4,si5);
L18:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+184U);
switch(si0){
case 0:
goto L34;
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
si0=l4;
si0=i32_load(&i->m0,(U64)si0+188U);
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
goto L34;
}
si0=l1;
f1354(i,si0);
goto L34;
L37:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+188U);
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
goto L34;
}
si0=l1;
si1=0U;
f1361(i,si0,si1);
goto L34;
L36:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+188U);
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
goto L34;
}
si0=l1;
si1=0U;
f1361(i,si0,si1);
goto L34;
L35:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+188U);
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
goto L34;
}
si0=l1;
f1354(i,si0);
L34:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+232U);
l1=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+228U);
switch(si0){
case 0:
goto L39;
case 1:
goto L42;
case 2:
goto L41;
case 3:
goto L40;
default:
goto L43;
}
L43:;
si0=l1;
si1=0U;
si2=l1;
si2=i32_load(&i->m0,(U64)si2);
l7=si2;
si3=l7;
si4=8U;
si3=si3 == si4;
l7=si3;
si1=si3?si1:si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l7;
if(si0){
goto L39;
}
si0=l1;
si1=0U;
f1352(i,si0,si1);
goto L39;
L42:;
si0=l1;
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
goto L39;
}
si0=l1;
si1=0U;
f1361(i,si0,si1);
goto L39;
L41:;
si0=l1;
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
goto L39;
}
si0=l1;
si1=0U;
f1361(i,si0,si1);
goto L39;
L40:;
si0=l1;
si1=0U;
si2=l1;
si2=i32_load(&i->m0,(U64)si2);
l7=si2;
si3=l7;
si4=8U;
si3=si3 == si4;
l7=si3;
si1=si3?si1:si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l7;
if(si0){
goto L39;
}
si0=l1;
si1=0U;
f1352(i,si0,si1);
L39:;
si0=l4;
si1=140U;
si0+=si1;
si1=l4;
si1=i32_load(&i->m0,(U64)si1+144U);
si1=i32_load(&i->m0,(U64)si1+8U);
TF(i->t0,si1,void (*)(rustpythonInstance*,U32))(i,si0);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+140U);
l1=si0;
si1=l1;
si1=i32_load(&i->m0,(U64)si1);
l1=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
si1=1U;
si0=si0 != si1;
if(si0){
goto L44;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0+140U);
f5522(i,si0);
L44:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+168U);
l1=si0;
si0=!(si0);
if(si0){
goto L45;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0+172U);
si0=!(si0);
if(si0){
goto L45;
}
si0=l1;
f15024(i,si0);
L45:;
si0=l4;
si1=152U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L46;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0+148U);
f15024(i,si0);
L46:;
si0=l4;
f8793(i,si0);
si0=l4;
si1=28U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L47;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0+24U);
f15024(i,si0);
L47:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+116U);
l1=si0;
si0=!(si0);
if(si0){
goto L48;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0+120U);
si0=!(si0);
if(si0){
goto L48;
}
si0=l1;
f15024(i,si0);
L48:;
si0=l4;
si1=100U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L49;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0+96U);
f15024(i,si0);
L49:;
si0=0U;
l1=si0;
sj0=l11;
sj1=5968383067144272154ULL;
sj0^=sj1;
sj1=l12;
sj2=4081176807085765302ULL;
sj1^=sj2;
sj0|=sj1;
si0=!(sj0);
si0=!(si0);
if(si0){
goto L1;
}
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
goto L1;
}
goto L2;
L17:;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=66U;
si0=f15022(i,si0);
l1=si0;
si0=!(si0);
if(si0){
goto L4;
}
si0=l1;
si1=17310844U;
si2=66U;
si0=f15143(i,si0,si1,si2);
l7=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+88U);
si1=508U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si1=l1;
si1=i32_load(&i->m0,(U64)si1);
l8=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
sj1=283467841602ULL;
i64_store(&i->m0,(U64)si0+188U,sj1);
si0=l4;
si1=l7;
i32_store(&i->m0,(U64)si0+184U,si1);
si0=l8;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 == si1;
if(si0){
goto L5;
}
si0=l3;
si1=l1;
si2=l4;
si3=184U;
si2+=si3;
si0=f11521(i,si0,si1,si2);
l1=si0;
si0=l4;
si1=140U;
si0+=si1;
si1=l4;
si1=i32_load(&i->m0,(U64)si1+144U);
si1=i32_load(&i->m0,(U64)si1+8U);
TF(i->t0,si1,void (*)(rustpythonInstance*,U32))(i,si0);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+140U);
l7=si0;
si1=l7;
si1=i32_load(&i->m0,(U64)si1);
l7=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l7;
si1=1U;
si0=si0 != si1;
if(si0){
goto L50;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0+140U);
f5522(i,si0);
L50:;
si0=l4;
si1=168U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
si0=!(si0);
if(si0){
goto L51;
}
si0=l4;
si1=172U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L51;
}
si0=l7;
f15024(i,si0);
L51:;
si0=l4;
si1=152U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L52;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0+148U);
f15024(i,si0);
L52:;
si0=l4;
f8793(i,si0);
si0=l4;
si1=28U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L53;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0+24U);
f15024(i,si0);
L53:;
si0=l4;
si1=116U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
si0=!(si0);
if(si0){
goto L54;
}
si0=l4;
si1=120U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L54;
}
si0=l7;
f15024(i,si0);
L54:;
si0=l4;
si1=100U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L55;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0+96U);
f15024(i,si0);
L55:;
sj0=l11;
sj1=5968383067144272154ULL;
sj0^=sj1;
sj1=l12;
sj2=4081176807085765302ULL;
sj1^=sj2;
sj0|=sj1;
sj1=0ULL;
si0=sj0 != sj1;
if(si0){
goto L1;
}
goto L7;
L16:;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=66U;
si0=f15022(i,si0);
l1=si0;
si0=!(si0);
if(si0){
goto L3;
}
si0=l1;
si1=17310844U;
si2=66U;
si0=f15143(i,si0,si1,si2);
l7=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+88U);
si1=508U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si1=l1;
si1=i32_load(&i->m0,(U64)si1);
l8=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
sj1=283467841602ULL;
i64_store(&i->m0,(U64)si0+188U,sj1);
si0=l4;
si1=l7;
i32_store(&i->m0,(U64)si0+184U,si1);
si0=l8;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 == si1;
if(si0){
goto L5;
}
si0=l3;
si1=l1;
si2=l4;
si3=184U;
si2+=si3;
si0=f11521(i,si0,si1,si2);
l1=si0;
L8:;
si0=l4;
f8793(i,si0);
si0=l4;
si1=28U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L56;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0+24U);
f15024(i,si0);
L56:;
si0=l4;
si1=116U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
si0=!(si0);
if(si0){
goto L57;
}
si0=l4;
si1=120U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L57;
}
si0=l7;
f15024(i,si0);
L57:;
si0=l4;
si1=100U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L7;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0+96U);
f15024(i,si0);
L7:;
si0=l2;
si1=l2;
si1=i32_load(&i->m0,(U64)si1);
l7=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l7;
si1=1U;
si0=si0 == si1;
if(si0){
goto L2;
}
goto L1;
L6:;
si0=1U;
si1=28U;
f52(i,si0,si1);
UNREACHABLE;
L5:;
f14795(i);
UNREACHABLE;
L4:;
si0=1U;
si1=66U;
f52(i,si0,si1);
UNREACHABLE;
L3:;
si0=1U;
si1=66U;
f52(i,si0,si1);
UNREACHABLE;
L2:;
si0=l2;
f5522(i,si0);
L1:;
si0=l4;
si1=256U;
si0+=si1;
i->g0=si0;
si0=l1;
L0:;
return si0;
}

U32 f5563(rustpythonInstance*i,U32 l0,U32 l1) {
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
si0=i->g0;
si1=16U;
si0-=si1;
l2=si0;
i->g0=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+56U);
l3=si0;
si0=!(si0);
if(si0){
goto L4;
}
si0=l3;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=28U;
si0*=si1;
l4=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+4U);
l3=si0;
L5:;
{
si0=l4;
if(si0){
goto L6;
}
si0=0U;
l5=si0;
goto L1;
L6:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+60U);
l6=si0;
si0=!(si0);
if(si0){
goto L2;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+88U);
si1=232U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si1=l5;
si1=i32_load(&i->m0,(U64)si1);
l7=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=l6;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l2;
si1=0U;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l2;
si1=l3;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l7;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 == si1;
if(si0){
goto L3;
}
si0=l2;
si1=4U;
si0+=si1;
si1=l5;
si2=0U;
si0=f5564(i,si0,si1,si2);
l7=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+4U);
l8=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
l9=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+88U);
l10=si0;
si1=200U;
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
goto L3;
}
si0=l3;
si1=28U;
si0+=si1;
l3=si0;
si0=l4;
si1=-28U;
si0+=si1;
l4=si0;
si0=l0;
si1=l10;
si2=1216U;
si1+=si2;
si2=l9;
si3=l8;
si4=l5;
si1=f9632(i,si1,si2,si3,si4);
si2=l7;
si3=l1;
si0=f5565(i,si0,si1,si2,si3);
l5=si0;
si0=!(si0);
if(si0){
goto L5;
}
goto L1;
}
L4:;
si0=17310636U;
si1=43U;
si2=17310964U;
f604(i,si0,si1,si2);
UNREACHABLE;
L3:;
f14795(i);
UNREACHABLE;
L2:;
si0=17310636U;
si1=43U;
si2=17310980U;
f604(i,si0,si1,si2);
UNREACHABLE;
L1:;
si0=l2;
si1=16U;
si0+=si1;
i->g0=si0;
si0=l5;
L0:;
return si0;
}

U32 f5564(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 si0,si1,si2;
U64 sj1,sj2;
si0=l1;
si1=352U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
if(si0){
goto L4;
}
si0=4U;
l4=si0;
goto L3;
L4:;
si0=l3;
si1=268435455U;
si0=si0 > si1;
if(si0){
goto L7;
}
si0=l3;
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
si0=4U;
l4=si0;
goto L5;
L7:;
f53(i);
UNREACHABLE;
L6:;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=l5;
si0=f15022(i,si0);
l4=si0;
si0=!(si0);
if(si0){
goto L2;
}
L5:;
si0=l4;
si1=0U;
si2=l5;
si0=f15145(i,si0,si1,si2);
L3:;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=72U;
si0=f15022(i,si0);
l5=si0;
si0=!(si0);
if(si0){
goto L1;
}
si0=l5;
sj1=-8644297019226511432ULL;
i64_store(&i->m0,(U64)si0+8U,sj1);
si0=l5;
si1=l3;
i32_store(&i->m0,(U64)si0+52U,si1);
si0=l5;
si1=l4;
i32_store(&i->m0,(U64)si0+48U,si1);
si0=l5;
si1=0U;
i32_store(&i->m0,(U64)si0+44U,si1);
si0=l5;
si1=l1;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l5;
si1=17312036U;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l5;
si1=1U;
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=16U;
si0+=si1;
sj1=2981136023291592815ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=l2;
si2=0U;
si1=si1 != si2;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l5;
si1=l0;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+56U,sj1);
si0=l5;
si1=l2;
sj1=(U64)(si1);
sj2=32ULL;
sj1<<=(sj2&63);
i64_store(&i->m0,(U64)si0+36U,sj1);
si0=l5;
si1=64U;
si0+=si1;
si1=l0;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
goto L0;
L2:;
si0=4U;
si1=l5;
f52(i,si0,si1);
UNREACHABLE;
L1:;
si0=8U;
si1=72U;
f52(i,si0,si1);
UNREACHABLE;
L0:;
return si0;
}

U32 f5565(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 l8=0;
U64 l9=0;
U32 l10=0;
U32 si0,si1,si2,si3,si4;
U64 sj1,sj2;
si0=i->g0;
si1=80U;
si0-=si1;
l4=si0;
i->g0=si0;
si0=l1;
l5=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
si1=0U;
si0=(U32)((I32)si0<(I32)si1);
if(si0){
goto L6;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0+88U);
l6=si0;
si0=i32_load(&i->m0,(U64)si0+1216U);
l5=si0;
si1=8U;
si0&=si1;
if(si0){
goto L8;
}
si0=l5;
si1=16U;
si0+=si1;
l7=si0;
si1=l5;
si0=si0 < si1;
if(si0){
goto L8;
}
si0=l6;
si1=l7;
si2=l6;
si2=i32_load(&i->m0,(U64)si2+1216U);
l8=si2;
si3=l8;
si4=l5;
si3=si3 == si4;
si1=si3?si1:si2;
i32_store(&i->m0,(U64)si0+1216U,si1);
si0=l8;
si1=l5;
si0=si0 == si1;
if(si0){
goto L7;
}
L8:;
si0=l6;
si1=1216U;
si0+=si1;
si1=0U;
sj2=l9;
si3=1000000000U;
si0=f1353(i,si0,si1,sj2,si3);
L7:;
si0=l6;
si1=1224U;
si0+=si1;
si1=l1;
si2=64U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
si2=l1;
si3=68U;
si2+=si3;
si2=i32_load(&i->m0,(U64)si2);
si0=f13119(i,si0,si1,si2);
l5=si0;
if(si0){
goto L10;
}
si0=0U;
l5=si0;
goto L9;
L10:;
si0=l5;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
L9:;
si0=l6;
si1=l6;
si1=i32_load(&i->m0,(U64)si1+1216U);
l8=si1;
si2=-16U;
si1+=si2;
i32_store(&i->m0,(U64)si0+1216U,si1);
si0=l8;
si1=-14U;
si0&=si1;
si1=18U;
si0=si0 != si1;
if(si0){
goto L11;
}
si0=l6;
si1=1216U;
si0+=si1;
f1354(i,si0);
L11:;
si0=l5;
si0=!(si0);
if(si0){
goto L5;
}
L6:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+28U);
si1=56U;
si0+=si1;
l6=si0;
si1=l5;
si0=f13811(i,si0,si1);
l7=si0;
if(si0){
goto L12;
}
si0=l6;
si1=l5;
si0=f13812(i,si0,si1);
l7=si0;
si0=!(si0);
if(si0){
goto L5;
}
L12:;
si0=l7;
si0=i32_load(&i->m0,(U64)si0+28U);
l5=si0;
si1=336U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l8=si0;
if(si0){
goto L14;
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
L15:;
{
si0=l6;
si0=!(si0);
if(si0){
goto L13;
}
si0=l6;
si1=-4U;
si0+=si1;
l6=si0;
si0=l5;
si0=i32_load(&i->m0,(U64)si0);
l8=si0;
si0=l5;
si1=4U;
si0+=si1;
l5=si0;
si0=l8;
si1=336U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l8=si0;
si0=!(si0);
if(si0){
goto L15;
}
}
L14:;
si0=l0;
si1=l0;
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
si0=l7;
si1=l0;
si2=l2;
si3=l3;
si4=l8;
si0=TF(i->t0,si4,U32 (*)(rustpythonInstance*,U32,U32,U32,U32))(i,si0,si1,si2,si3);
l6=si0;
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
goto L1;
}
si0=l7;
f5522(i,si0);
goto L1;
L13:;
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
goto L5;
}
si0=l7;
f5522(i,si0);
L5:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+32U);
si0=!(si0);
if(si0){
goto L18;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+36U);
l6=si0;
si1=8U;
si0&=si1;
if(si0){
goto L17;
}
si0=l6;
si1=16U;
si0+=si1;
l8=si0;
si1=l6;
si0=si0 < si1;
if(si0){
goto L17;
}
si0=l0;
si1=l8;
si2=l0;
si2=i32_load(&i->m0,(U64)si2+36U);
l5=si2;
si3=l5;
si4=l6;
si3=si3 == si4;
si1=si3?si1:si2;
i32_store(&i->m0,(U64)si0+36U,si1);
si0=l5;
si1=l6;
si0=si0 != si1;
if(si0){
goto L17;
}
goto L16;
L18:;
si0=l4;
si1=56U;
si0+=si1;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+28U);
si2=56U;
si1+=si2;
f13757(i,si0,si1);
si0=l4;
si1=40U;
si0+=si1;
si1=12U;
si0+=si1;
si1=1028U;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=16U;
si0+=si1;
si1=12U;
si0+=si1;
sj1=2ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=843U;
i32_store(&i->m0,(U64)si0+44U,si1);
si0=l4;
si1=17314592U;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l4;
si1=l1;
si2=64U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+72U,sj1);
si0=l4;
si1=l4;
si2=72U;
si1+=si2;
i32_store(&i->m0,(U64)si0+48U,si1);
si0=l4;
si1=l4;
si2=56U;
si1+=si2;
i32_store(&i->m0,(U64)si0+40U,si1);
si0=l4;
si1=l4;
si2=40U;
si1+=si2;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l4;
si1=3U;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l4;
si1=4U;
si0+=si1;
si1=l4;
si2=16U;
si1+=si2;
f64(i,si0,si1);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+56U);
switch(si0){
case 0:
goto L19;
case 1:
goto L22;
case 2:
goto L21;
case 3:
goto L20;
default:
goto L23;
}
L23:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+60U);
l6=si0;
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
goto L19;
}
si0=l6;
f1354(i,si0);
goto L19;
L22:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+60U);
l6=si0;
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
goto L19;
}
si0=l6;
si1=0U;
f1361(i,si0,si1);
goto L19;
L21:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+60U);
l6=si0;
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
goto L19;
}
si0=l6;
si1=0U;
f1361(i,si0,si1);
goto L19;
L20:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+60U);
l6=si0;
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
goto L19;
}
si0=l6;
f1354(i,si0);
L19:;
si0=l4;
si1=16U;
si0+=si1;
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
si1=l4;
sj1=i64_load(&i->m0,(U64)si1+4U);
i64_store(&i->m0,(U64)si0+16U,sj1);
si0=1U;
l5=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+88U);
si1=364U;
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
goto L4;
}
si0=l3;
si1=l6;
si2=l4;
si3=16U;
si2+=si3;
si0=f11521(i,si0,si1,si2);
l6=si0;
goto L2;
L17:;
si0=l0;
si1=36U;
si0+=si1;
si1=0U;
sj2=l9;
si3=1000000000U;
si0=f1353(i,si0,si1,sj2,si3);
L16:;
si0=l0;
si1=40U;
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
goto L4;
}
si0=l0;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+36U);
l6=si1;
si2=-16U;
si1+=si2;
i32_store(&i->m0,(U64)si0+36U,si1);
si0=l6;
si1=-14U;
si0&=si1;
si1=18U;
si0=si0 != si1;
if(si0){
goto L24;
}
si0=l0;
si1=36U;
si0+=si1;
f1354(i,si0);
L24:;
si0=l2;
si0=!(si0);
if(si0){
goto L26;
}
si0=l8;
si1=l1;
si2=l2;
si3=l3;
si0=f5554(i,si0,si1,si2,si3);
l6=si0;
if(si0){
goto L25;
}
goto L3;
L26:;
si0=l8;
si1=l1;
si2=l3;
si0=f5560(i,si0,si1,si2);
l10=si0;
si0=!(si0);
if(si0){
goto L3;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0+88U);
si1=392U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si1=l10;
si1=i32_load(&i->m0,(U64)si1+28U);
l5=si1;
si0=si0 == si1;
if(si0){
goto L27;
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
L28:;
{
si0=l6;
if(si0){
goto L29;
}
si0=l10;
l6=si0;
goto L25;
L29:;
si0=l6;
si1=-4U;
si0+=si1;
l6=si0;
si0=l5;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
si0=l5;
si1=4U;
si0+=si1;
l5=si0;
si0=l7;
si1=l2;
si0=si0 != si1;
if(si0){
goto L28;
}
}
L27:;
si0=l4;
si1=56U;
si0+=si1;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+28U);
si2=56U;
si1+=si2;
f13757(i,si0,si1);
si0=l4;
si1=40U;
si0+=si1;
si1=12U;
si0+=si1;
si1=1028U;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=16U;
si0+=si1;
si1=12U;
si0+=si1;
sj1=2ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=843U;
i32_store(&i->m0,(U64)si0+44U,si1);
si0=l4;
si1=17314592U;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l4;
si1=l1;
si2=64U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+72U,sj1);
si0=l4;
si1=l4;
si2=72U;
si1+=si2;
i32_store(&i->m0,(U64)si0+48U,si1);
si0=l4;
si1=l4;
si2=56U;
si1+=si2;
i32_store(&i->m0,(U64)si0+40U,si1);
si0=l4;
si1=l4;
si2=40U;
si1+=si2;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l4;
si1=3U;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l4;
si1=4U;
si0+=si1;
si1=l4;
si2=16U;
si1+=si2;
f64(i,si0,si1);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+56U);
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
si0=l4;
si0=i32_load(&i->m0,(U64)si0+60U);
l6=si0;
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
goto L30;
}
si0=l6;
f1354(i,si0);
goto L30;
L33:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+60U);
l6=si0;
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
goto L30;
}
si0=l6;
si1=0U;
f1361(i,si0,si1);
goto L30;
L32:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+60U);
l6=si0;
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
goto L30;
}
si0=l6;
si1=0U;
f1361(i,si0,si1);
goto L30;
L31:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+60U);
l6=si0;
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
goto L30;
}
si0=l6;
f1354(i,si0);
L30:;
si0=l4;
si1=16U;
si0+=si1;
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
si1=l4;
sj1=i64_load(&i->m0,(U64)si1+4U);
i64_store(&i->m0,(U64)si0+16U,sj1);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+88U);
si1=364U;
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
goto L4;
}
si0=l3;
si1=l6;
si2=l4;
si3=16U;
si2+=si3;
si0=f11521(i,si0,si1,si2);
l6=si0;
si0=l10;
si1=l10;
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
si0=l10;
f5522(i,si0);
L25:;
si0=l8;
si1=l8;
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
si0=l8;
f5522(i,si0);
goto L1;
L4:;
f14795(i);
UNREACHABLE;
L3:;
si0=l2;
si0=!(si0);
l5=si0;
si0=l8;
si1=l8;
si1=i32_load(&i->m0,(U64)si1);
l0=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=0U;
l6=si0;
si0=l0;
si1=1U;
si0=si0 != si1;
if(si0){
goto L2;
}
si0=l8;
f5522(i,si0);
L2:;
si0=l2;
si0=!(si0);
if(si0){
goto L1;
}
si0=l5;
si0=!(si0);
if(si0){
goto L1;
}
si0=l2;
si1=l2;
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
si0=l2;
f5522(i,si0);
L1:;
si0=l4;
si1=80U;
si0+=si1;
i->g0=si0;
si0=l6;
L0:;
return si0;
}

void f5566(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U32 l5=0;
U32 l6=0;
U64 l7=0;
U32 l8=0;
U64 l9=0;
U32 si0,si1,si2,si3,si4;
U64 sj0,sj1,sj2;
si0=i->g0;
si1=144U;
si0-=si1;
l4=si0;
i->g0=si0;
si0=l4;
si1=l2;
i32_store(&i->m0,(U64)si0+36U,si1);
si0=0U;
l5=si0;
si0=l4;
si1=24U;
si0+=si1;
si1=l1;
si2=l2;
si3=0U;
si4=l3;
f5567(i,si0,si1,si2,si3,si4);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+28U);
l2=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+24U);
l6=si0;
si0=!(si0);
if(si0){
goto L3;
}
si0=l6;
l5=si0;
goto L2;
L3:;
si0=l2;
if(si0){
goto L2;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+32U);
si0=!(si0);
if(si0){
goto L5;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+36U);
l2=si0;
si1=8U;
si0&=si1;
if(si0){
goto L6;
}
si0=l2;
si1=16U;
si0+=si1;
l6=si0;
si1=l2;
si0=si0 < si1;
if(si0){
goto L6;
}
si0=l1;
si1=l6;
si2=l1;
si2=i32_load(&i->m0,(U64)si2+36U);
l5=si2;
si3=l5;
si4=l2;
si3=si3 == si4;
si1=si3?si1:si2;
i32_store(&i->m0,(U64)si0+36U,si1);
si0=l5;
si1=l2;
si0=si0 == si1;
if(si0){
goto L4;
}
L6:;
si0=l1;
si1=36U;
si0+=si1;
si1=0U;
sj2=l7;
si3=1000000000U;
si0=f1353(i,si0,si1,sj2,si3);
goto L4;
L5:;
si0=17310636U;
si1=43U;
si2=17311068U;
f604(i,si0,si1,si2);
UNREACHABLE;
L4:;
si0=l1;
si1=40U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si1=l6;
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
goto L1;
}
si0=l1;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+36U);
l2=si1;
si2=-16U;
si1+=si2;
i32_store(&i->m0,(U64)si0+36U,si1);
si0=l2;
si1=-14U;
si0&=si1;
si1=18U;
si0=si0 != si1;
if(si0){
goto L7;
}
si0=l1;
si1=36U;
si0+=si1;
f1354(i,si0);
L7:;
si0=l4;
si1=16U;
si0+=si1;
si1=l6;
si2=l3;
si2=i32_load(&i->m0,(U64)si2+88U);
si3=788U;
si2+=si3;
si2=i32_load(&i->m0,(U64)si2);
si3=l3;
f5551(i,si0,si1,si2,si3);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+20U);
l8=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+16U);
if(si0){
goto L10;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0+36U);
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
si0=si0 != si1;
if(si0){
goto L9;
}
goto L1;
L10:;
si0=l8;
si1=l8;
si1=i32_load(&i->m0,(U64)si1);
l2=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=1U;
si0=si0 != si1;
if(si0){
goto L11;
}
si0=l8;
f5522(i,si0);
L11:;
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
goto L12;
}
si0=l6;
f5522(i,si0);
L12:;
si0=l4;
si1=8U;
si0+=si1;
si1=l1;
si2=l3;
si2=i32_load(&i->m0,(U64)si2+88U);
si3=960U;
si2+=si3;
si2=i32_load(&i->m0,(U64)si2);
si3=0U;
si4=l3;
f5567(i,si0,si1,si2,si3,si4);
si0=0U;
si1=l4;
si1=i32_load(&i->m0,(U64)si1+12U);
l2=si1;
si2=l4;
si2=i32_load(&i->m0,(U64)si2+8U);
l5=si2;
si0=si2?si0:si1;
l1=si0;
si0=l5;
si0=!(si0);
if(si0){
goto L8;
}
si0=l2;
si1=l2;
si1=i32_load(&i->m0,(U64)si1);
l5=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=1U;
si0=si0 != si1;
if(si0){
goto L8;
}
si0=l2;
f5522(i,si0);
goto L8;
L9:;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=4U;
si0=f15022(i,si0);
l2=si0;
si0=!(si0);
if(si0){
goto L14;
}
si0=l2;
si1=l1;
i32_store(&i->m0,(U64)si0,si1);
si0=0U;
sj0=i64_load(&i->m0,(U64)si0+18663248U);
si0=!(sj0);
if(si0){
goto L16;
}
si0=0U;
sj0=i64_load(&i->m0,(U64)si0+18663264U);
l9=sj0;
si0=0U;
sj0=i64_load(&i->m0,(U64)si0+18663256U);
l7=sj0;
goto L15;
L16:;
si0=l4;
si1=88U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
sj1=0ULL;
i64_store(&i->m0,(U64)si0+80U,sj1);
si0=l4;
si1=80U;
si0+=si1;
si1=16U;
si0=wasi_snapshot_preview1__random_get(i,si0,si1);
l1=si0;
if(si0){
goto L13;
}
si0=0U;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1+88U);
l9=sj1;
i64_store(&i->m0,(U64)si0+18663264U,sj1);
si0=0U;
sj1=1ULL;
i64_store(&i->m0,(U64)si0+18663248U,sj1);
si0=l4;
sj0=i64_load(&i->m0,(U64)si0+80U);
l7=sj0;
L15:;
si0=l4;
si1=132U;
si0+=si1;
sj1=4294967297ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
sj1=l7;
i64_store(&i->m0,(U64)si0+80U,sj1);
si0=0U;
sj1=l7;
sj2=1ULL;
sj1+=sj2;
i64_store(&i->m0,(U64)si0+18663256U,sj1);
si0=l4;
si1=l2;
i32_store(&i->m0,(U64)si0+128U,si1);
si0=l4;
sj1=0ULL;
i64_store(&i->m0,(U64)si0+116U,sj1);
si0=l4;
sj1=17179869184ULL;
i64_store(&i->m0,(U64)si0+108U,sj1);
si0=l4;
sj1=0ULL;
i64_store(&i->m0,(U64)si0+100U,sj1);
si0=l4;
si1=17359936U;
i32_store(&i->m0,(U64)si0+96U,si1);
si0=l4;
sj1=l9;
i64_store(&i->m0,(U64)si0+88U,sj1);
si0=l4;
si1=l8;
si2=l4;
si3=80U;
si2+=si3;
si3=l3;
f5537(i,si0,si1,si2,si3);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+4U);
l2=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
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
goto L17;
}
si0=l8;
f5522(i,si0);
L17:;
si0=l6;
si1=l6;
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
si0=l6;
f5522(i,si0);
goto L2;
L14:;
si0=4U;
si1=4U;
f52(i,si0,si1);
UNREACHABLE;
L13:;
si0=l4;
si1=l1;
i32_store16(&i->m0,(U64)si0+64U,si1);
si0=17683216U;
si1=18U;
si2=l4;
si3=64U;
si2+=si3;
si3=17683100U;
si4=17683268U;
f641(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L8:;
si0=l1;
si0=!(si0);
if(si0){
goto L19;
}
si0=l1;
sj0=i64_load(&i->m0,(U64)si0+8U);
sj1=-2295367307525992740ULL;
sj0^=sj1;
si1=l1;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
sj2=6911619425446520681ULL;
sj1^=sj2;
sj0|=sj1;
si0=!(sj0);
if(si0){
goto L20;
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
goto L19;
}
si0=l1;
f5522(i,si0);
goto L19;
L20:;
si0=l4;
si1=l2;
i32_store(&i->m0,(U64)si0+52U,si1);
si0=l4;
si1=92U;
si0+=si1;
sj1=1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=2U;
i32_store(&i->m0,(U64)si0+84U,si1);
si0=l4;
si1=17311000U;
i32_store(&i->m0,(U64)si0+80U,si1);
si0=l4;
si1=1985U;
i32_store(&i->m0,(U64)si0+68U,si1);
si0=l4;
si1=l4;
si2=64U;
si1+=si2;
i32_store(&i->m0,(U64)si0+88U,si1);
si0=l4;
si1=l4;
si2=52U;
si1+=si2;
i32_store(&i->m0,(U64)si0+64U,si1);
si0=l4;
si1=40U;
si0+=si1;
si1=l4;
si2=80U;
si1+=si2;
f64(i,si0,si1);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+52U);
l1=si0;
si1=l1;
si1=i32_load(&i->m0,(U64)si1);
l1=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
si1=1U;
si0=si0 != si1;
if(si0){
goto L18;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0+52U);
f5522(i,si0);
goto L18;
L19:;
si0=l4;
si1=0U;
i32_store(&i->m0,(U64)si0+48U,si1);
si0=l4;
sj1=1ULL;
i64_store(&i->m0,(U64)si0+40U,sj1);
L18:;
si0=l4;
si1=80U;
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
si1=1986U;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=3U;
i32_store(&i->m0,(U64)si0+84U,si1);
si0=l4;
si1=17311044U;
i32_store(&i->m0,(U64)si0+80U,si1);
si0=l4;
si1=1987U;
i32_store(&i->m0,(U64)si0+68U,si1);
si0=l4;
si1=l4;
si2=64U;
si1+=si2;
i32_store(&i->m0,(U64)si0+88U,si1);
si0=l4;
si1=l4;
si2=36U;
si1+=si2;
i32_store(&i->m0,(U64)si0+72U,si1);
si0=l4;
si1=l4;
si2=40U;
si1+=si2;
i32_store(&i->m0,(U64)si0+64U,si1);
si0=l4;
si1=52U;
si0+=si1;
si1=l4;
si2=80U;
si1+=si2;
f64(i,si0,si1);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+88U);
si1=364U;
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
goto L1;
}
si0=l3;
si1=l1;
si2=l4;
si3=52U;
si2+=si3;
si0=f11521(i,si0,si1,si2);
l2=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+44U);
si0=!(si0);
if(si0){
goto L21;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0+40U);
f15024(i,si0);
L21:;
si0=1U;
l5=si0;
L2:;
si0=l0;
si1=l2;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l5;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=144U;
si0+=si1;
i->g0=si0;
goto L0;
L1:;
f14795(i);
UNREACHABLE;
L0:;
}

void f5567(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4) {
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 l8=0;
U32 l9=0;
U32 l10=0;
U32 l11=0;
U32 l12=0;
U64 l13=0;
U32 l14=0;
U32 si0,si1,si2,si3,si4,si5;
U64 sj2;
si0=i->g0;
si1=32U;
si0-=si1;
l5=si0;
i->g0=si0;
si0=l2;
si1=68U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si0=l2;
si1=64U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+28U);
l8=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0);
si1=0U;
si0=(U32)((I32)si0<(I32)si1);
if(si0){
goto L7;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0+88U);
l9=si0;
si0=i32_load(&i->m0,(U64)si0+1216U);
l10=si0;
si1=8U;
si0&=si1;
if(si0){
goto L9;
}
si0=l10;
si1=16U;
si0+=si1;
l11=si0;
si1=l10;
si0=si0 < si1;
if(si0){
goto L9;
}
si0=l9;
si1=l11;
si2=l9;
si2=i32_load(&i->m0,(U64)si2+1216U);
l12=si2;
si3=l12;
si4=l10;
si3=si3 == si4;
si1=si3?si1:si2;
i32_store(&i->m0,(U64)si0+1216U,si1);
si0=l12;
si1=l10;
si0=si0 == si1;
if(si0){
goto L8;
}
L9:;
si0=l9;
si1=1216U;
si0+=si1;
si1=0U;
sj2=l13;
si3=1000000000U;
si0=f1353(i,si0,si1,sj2,si3);
L8:;
si0=l9;
si1=1224U;
si0+=si1;
si1=l2;
si1=i32_load(&i->m0,(U64)si1+64U);
si2=l2;
si2=i32_load(&i->m0,(U64)si2+68U);
si0=f13119(i,si0,si1,si2);
l2=si0;
if(si0){
goto L11;
}
si0=0U;
l2=si0;
goto L10;
L11:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
L10:;
si0=l9;
si1=l9;
si1=i32_load(&i->m0,(U64)si1+1216U);
l10=si1;
si2=-16U;
si1+=si2;
i32_store(&i->m0,(U64)si0+1216U,si1);
si0=l10;
si1=-14U;
si0&=si1;
si1=18U;
si0=si0 != si1;
if(si0){
goto L12;
}
si0=l9;
si1=1216U;
si0+=si1;
f1354(i,si0);
L12:;
si0=l2;
si0=!(si0);
if(si0){
goto L6;
}
L7:;
si0=l8;
si1=56U;
si0+=si1;
l9=si0;
si1=l2;
si0=f13811(i,si0,si1);
l11=si0;
if(si0){
goto L13;
}
si0=l9;
si1=l2;
si0=f13812(i,si0,si1);
l11=si0;
si0=!(si0);
if(si0){
goto L6;
}
L13:;
si0=l11;
si0=i32_load(&i->m0,(U64)si0+28U);
l14=si0;
si1=332U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l12=si0;
if(si0){
goto L14;
}
si0=l14;
si1=468U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=2U;
si0<<=(si1&31);
l2=si0;
si0=l14;
si1=460U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l9=si0;
L15:;
{
si0=l2;
if(si0){
goto L16;
}
si0=0U;
l12=si0;
goto L5;
L16:;
si0=l2;
si1=-4U;
si0+=si1;
l2=si0;
si0=l9;
si0=i32_load(&i->m0,(U64)si0);
l10=si0;
si0=l9;
si1=4U;
si0+=si1;
l9=si0;
si0=l10;
si1=332U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l12=si0;
si0=!(si0);
if(si0){
goto L15;
}
}
L14:;
si0=l14;
si1=336U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L17;
}
si0=l14;
si1=468U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=2U;
si0<<=(si1&31);
l2=si0;
si0=l14;
si1=460U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l9=si0;
L18:;
{
si0=l2;
si0=!(si0);
if(si0){
goto L5;
}
si0=l2;
si1=-4U;
si0+=si1;
l2=si0;
si0=l9;
si0=i32_load(&i->m0,(U64)si0);
l10=si0;
si0=l9;
si1=4U;
si0+=si1;
l9=si0;
si0=l10;
si1=336U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L18;
}
}
L17:;
si0=l8;
si1=l8;
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
goto L4;
}
si0=l1;
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
goto L4;
}
si0=l5;
si1=24U;
si0+=si1;
si1=l11;
si2=l1;
si3=l8;
si4=l4;
si5=l12;
TF(i->t0,si5,void (*)(rustpythonInstance*,U32,U32,U32,U32,U32))(i,si0,si1,si2,si3,si4);
si0=l5;
si0=i32_load(&i->m0,(U64)si0+24U);
l9=si0;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+28U);
l2=si0;
si0=l3;
si0=!(si0);
if(si0){
goto L1;
}
si0=l3;
si1=l3;
si1=i32_load(&i->m0,(U64)si1);
l10=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l10;
si1=1U;
si0=si0 != si1;
if(si0){
goto L1;
}
si0=l3;
f5522(i,si0);
goto L1;
L6:;
si0=0U;
l11=si0;
L5:;
si0=l3;
if(si0){
goto L22;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+32U);
si0=!(si0);
if(si0){
goto L21;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+36U);
l2=si0;
si1=8U;
si0&=si1;
if(si0){
goto L24;
}
si0=l2;
si1=16U;
si0+=si1;
l10=si0;
si1=l2;
si0=si0 < si1;
if(si0){
goto L24;
}
si0=l1;
si1=l10;
si2=l1;
si2=i32_load(&i->m0,(U64)si2+36U);
l9=si2;
si3=l9;
si4=l2;
si3=si3 == si4;
si1=si3?si1:si2;
i32_store(&i->m0,(U64)si0+36U,si1);
si0=l9;
si1=l2;
si0=si0 == si1;
if(si0){
goto L23;
}
L24:;
si0=l1;
si1=36U;
si0+=si1;
si1=0U;
sj2=l13;
si3=1000000000U;
si0=f1353(i,si0,si1,sj2,si3);
L23:;
si0=l1;
si1=40U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si1=l3;
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
goto L4;
}
si0=l1;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+36U);
l2=si1;
si2=-16U;
si1+=si2;
i32_store(&i->m0,(U64)si0+36U,si1);
si0=l2;
si1=-14U;
si0&=si1;
si1=18U;
si0=si0 != si1;
if(si0){
goto L22;
}
si0=l1;
si1=36U;
si0+=si1;
f1354(i,si0);
L22:;
si0=l5;
si1=16U;
si0+=si1;
si1=l3;
si2=l7;
si3=l6;
si4=l4;
f5545(i,si0,si1,si2,si3,si4);
si0=l5;
si0=i32_load(&i->m0,(U64)si0+20U);
l2=si0;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+16U);
if(si0){
goto L20;
}
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
goto L25;
}
si0=l3;
f5522(i,si0);
L25:;
si0=l2;
if(si0){
goto L3;
}
L21:;
si0=0U;
l9=si0;
si0=l11;
if(si0){
goto L19;
}
si0=0U;
l2=si0;
goto L1;
L20:;
si0=l3;
si1=l3;
si1=i32_load(&i->m0,(U64)si1);
l10=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=1U;
l9=si0;
si0=l10;
si1=1U;
si0=si0 != si1;
if(si0){
goto L26;
}
si0=l3;
f5522(i,si0);
L26:;
si0=l11;
si0=!(si0);
if(si0){
goto L1;
}
si0=l11;
si1=l11;
si1=i32_load(&i->m0,(U64)si1);
l10=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=1U;
l9=si0;
si0=l10;
si1=1U;
si0=si0 != si1;
if(si0){
goto L1;
}
goto L2;
L19:;
si0=l12;
if(si0){
goto L27;
}
si0=l11;
l2=si0;
goto L1;
L27:;
si0=l8;
si1=l8;
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
goto L4;
}
si0=l1;
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
goto L4;
}
si0=l5;
si1=8U;
si0+=si1;
si1=l11;
si2=l1;
si3=l8;
si4=l4;
si5=l12;
TF(i->t0,si5,void (*)(rustpythonInstance*,U32,U32,U32,U32,U32))(i,si0,si1,si2,si3,si4);
si0=l5;
si0=i32_load(&i->m0,(U64)si0+8U);
l9=si0;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+12U);
l2=si0;
goto L1;
L4:;
f14795(i);
UNREACHABLE;
L3:;
si0=0U;
l9=si0;
si0=l11;
si0=!(si0);
if(si0){
goto L1;
}
si0=l11;
si1=l11;
si1=i32_load(&i->m0,(U64)si1);
l10=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l10;
si1=1U;
si0=si0 != si1;
if(si0){
goto L1;
}
L2:;
si0=l11;
f5522(i,si0);
L1:;
si0=l0;
si1=l2;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l9;
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=32U;
si0+=si1;
i->g0=si0;
L0:;
}

U32 f5568(rustpythonInstance*i,U32 l0,U32 l1) {
U32 si0,si1,si2,si3;
si0=l1;
si1=l0;
si1=i32_load(&i->m0,(U64)si1);
l0=si1;
si2=64U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
si2=l0;
si3=68U;
si2+=si3;
si2=i32_load(&i->m0,(U64)si2);
si0=f642(i,si0,si1,si2);
L0:;
return si0;
}

void f5569(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U64 l8=0;
U32 si0,si1,si2,si3,si4;
U64 sj2;
si0=i->g0;
si1=16U;
si0-=si1;
l4=si0;
i->g0=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+32U);
si0=!(si0);
if(si0){
goto L2;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+36U);
l5=si0;
si1=8U;
si0&=si1;
if(si0){
goto L3;
}
si0=l5;
si1=16U;
si0+=si1;
l6=si0;
si1=l5;
si0=si0 < si1;
if(si0){
goto L3;
}
si0=l0;
si1=l6;
si2=l0;
si2=i32_load(&i->m0,(U64)si2+36U);
l7=si2;
si3=l7;
si4=l5;
si3=si3 == si4;
si1=si3?si1:si2;
i32_store(&i->m0,(U64)si0+36U,si1);
si0=l7;
si1=l5;
si0=si0 == si1;
if(si0){
goto L1;
}
L3:;
si0=l0;
si1=36U;
si0+=si1;
si1=0U;
sj2=l8;
si3=1000000000U;
si0=f1353(i,si0,si1,sj2,si3);
goto L1;
L2:;
si0=17310636U;
si1=43U;
si2=17311068U;
f604(i,si0,si1,si2);
UNREACHABLE;
L1:;
si0=l0;
si1=40U;
si0+=si1;
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
goto L9;
}
si0=l0;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+36U);
l7=si1;
si2=-16U;
si1+=si2;
i32_store(&i->m0,(U64)si0+36U,si1);
si0=l7;
si1=-14U;
si0&=si1;
si1=18U;
si0=si0 != si1;
if(si0){
goto L10;
}
si0=l0;
si1=36U;
si0+=si1;
f1354(i,si0);
L10:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+88U);
si1=960U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
si0=l1;
si1=l1;
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
goto L9;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0+88U);
si1=68U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=l5;
si1=i32_load(&i->m0,(U64)si1+28U);
si0=si0 == si1;
if(si0){
goto L12;
}
si0=l5;
si1=l7;
si2=l1;
si3=l3;
si0=f5557(i,si0,si1,si2,si3);
l0=si0;
goto L11;
L12:;
si0=l5;
si1=56U;
si0+=si1;
si1=l3;
si2=l7;
si3=l1;
si0=f7434(i,si0,si1,si2,si3);
l0=si0;
L11:;
si0=l0;
if(si0){
goto L8;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0+88U);
l0=si0;
si1=740U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si0=l2;
if(si0){
goto L13;
}
si0=l0;
si1=1280U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si1=l2;
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
goto L9;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0+88U);
l0=si0;
L13:;
si0=l0;
si1=68U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=l5;
si1=i32_load(&i->m0,(U64)si1+28U);
si0=si0 == si1;
if(si0){
goto L15;
}
si0=l5;
si1=l1;
si2=l2;
si3=l3;
si0=f5557(i,si0,si1,si2,si3);
l0=si0;
si0=!(si0);
if(si0){
goto L14;
}
goto L4;
L15:;
si0=l5;
si1=56U;
si0+=si1;
si1=l3;
si2=l1;
si3=l2;
si0=f7434(i,si0,si1,si2,si3);
l0=si0;
if(si0){
goto L4;
}
L14:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+88U);
si1=1280U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l0=si0;
si1=l0;
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
goto L9;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0+88U);
si1=68U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=l5;
si1=i32_load(&i->m0,(U64)si1+28U);
si0=si0 == si1;
if(si0){
goto L17;
}
si0=l5;
si1=17311147U;
si2=11U;
si3=l0;
si4=l3;
si0=f5558(i,si0,si1,si2,si3,si4);
l0=si0;
si0=!(si0);
if(si0){
goto L16;
}
goto L5;
L17:;
si0=l5;
si1=56U;
si0+=si1;
si1=l3;
si2=17311147U;
si3=11U;
si4=l0;
si0=f7437(i,si0,si1,si2,si3,si4);
l0=si0;
if(si0){
goto L5;
}
L16:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+88U);
si1=1280U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l0=si0;
si1=l0;
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
goto L9;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0+88U);
si1=68U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=l5;
si1=i32_load(&i->m0,(U64)si1+28U);
si0=si0 == si1;
if(si0){
goto L19;
}
si0=l5;
si1=17311193U;
si2=10U;
si3=l0;
si4=l3;
si0=f5558(i,si0,si1,si2,si3,si4);
l0=si0;
si0=!(si0);
if(si0){
goto L18;
}
goto L6;
L19:;
si0=l5;
si1=56U;
si0+=si1;
si1=l3;
si2=17311193U;
si3=10U;
si4=l0;
si0=f7437(i,si0,si1,si2,si3,si4);
l0=si0;
if(si0){
goto L6;
}
L18:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+88U);
si1=1280U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l0=si0;
si1=l0;
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
goto L9;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0+88U);
si1=68U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=l5;
si1=i32_load(&i->m0,(U64)si1+28U);
si0=si0 == si1;
if(si0){
goto L21;
}
si0=l5;
si1=17311237U;
si2=8U;
si3=l0;
si4=l3;
si0=f5558(i,si0,si1,si2,si3,si4);
l3=si0;
si0=!(si0);
if(si0){
goto L20;
}
goto L7;
L21:;
si0=l5;
si1=56U;
si0+=si1;
si1=l3;
si2=17311237U;
si3=8U;
si4=l0;
si0=f7437(i,si0,si1,si2,si3,si4);
l3=si0;
if(si0){
goto L7;
}
L20:;
si0=l5;
si1=l5;
si1=i32_load(&i->m0,(U64)si1);
l3=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=1U;
si0=si0 != si1;
if(si0){
goto L22;
}
si0=l5;
f5522(i,si0);
L22:;
si0=l4;
si1=16U;
si0+=si1;
i->g0=si0;
goto L0;
L9:;
f14795(i);
UNREACHABLE;
L8:;
si0=l4;
si1=l0;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=17311084U;
si1=32U;
si2=l4;
si3=12U;
si2+=si3;
si3=17311280U;
si4=17311360U;
f641(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L7:;
si0=l4;
si1=l3;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=17311245U;
si1=32U;
si2=l4;
si3=12U;
si2+=si3;
si3=17311280U;
si4=17311296U;
f641(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L6:;
si0=l4;
si1=l0;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=17311203U;
si1=34U;
si2=l4;
si3=12U;
si2+=si3;
si3=17311280U;
si4=17311312U;
f641(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L5:;
si0=l4;
si1=l0;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=17311158U;
si1=35U;
si2=l4;
si3=12U;
si2+=si3;
si3=17311280U;
si4=17311328U;
f641(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L4:;
si0=l4;
si1=l0;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=17311116U;
si1=31U;
si2=l4;
si3=12U;
si2+=si3;
si3=17311280U;
si4=17311344U;
f641(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L0:;
}

void f5570(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4) {
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 l8=0;
U32 si0,si1,si2,si3,si4,si5;
si0=i->g0;
si1=16U;
si0-=si1;
l5=si0;
i->g0=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+88U);
l6=si0;
si1=200U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
si1=l7;
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
goto L1;
}
f14795(i);
UNREACHABLE;
L1:;
si0=l5;
si1=8U;
si0+=si1;
si1=l1;
si2=l6;
si3=1216U;
si2+=si3;
si3=l2;
si4=l3;
si5=l7;
si2=f9632(i,si2,si3,si4,si5);
si3=l4;
f5566(i,si0,si1,si2,si3);
si0=l5;
si0=i32_load(&i->m0,(U64)si0+12U);
l4=si0;
si0=l0;
si1=l5;
si1=i32_load(&i->m0,(U64)si1+8U);
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l4;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l5;
si1=16U;
si0+=si1;
i->g0=si0;
L0:;
}

void f5571(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U32 l4=0;
U32 l5=0;
U64 l6=0;
U64 l7=0;
U32 l8=0;
U32 l9=0;
U32 l10=0;
U32 l11=0;
U32 si0,si1,si2,si3,si4;
U64 sj0,sj1,sj2;
si0=i->g0;
si1=144U;
si0-=si1;
l3=si0;
i->g0=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+88U);
l4=si0;
si1=1272U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=l1;
si0=si0 == si1;
if(si0){
goto L11;
}
si0=l4;
si1=1276U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=l1;
si0=si0 == si1;
if(si0){
goto L17;
}
si0=l1;
si1=l1;
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
si0=l3;
si1=32U;
si0+=si1;
si1=l2;
si2=l1;
si3=l2;
si3=i32_load(&i->m0,(U64)si3+88U);
si4=652U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
f11942(i,si0,si1,si2,si3);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+36U);
l5=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+32U);
switch(si0){
case 0:
goto L15;
case 1:
goto L6;
case 2:
goto L16;
default:
goto L6;
}
L17:;
si0=l0;
si1=0U;
i32_store16(&i->m0,(U64)si0,si1);
goto L4;
L16:;
si0=l3;
si1=16U;
si0+=si1;
si1=l2;
si2=l1;
si3=l2;
si3=i32_load(&i->m0,(U64)si3+88U);
si4=912U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
f11942(i,si0,si1,si2,si3);
si0=1U;
l4=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+20U);
l1=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+16U);
switch(si0){
case 0:
goto L21;
case 1:
goto L14;
case 2:
goto L20;
default:
goto L14;
}
L21:;
si0=0U;
sj0=i64_load(&i->m0,(U64)si0+18663248U);
si0=!(sj0);
if(si0){
goto L23;
}
si0=0U;
sj0=i64_load(&i->m0,(U64)si0+18663264U);
l6=sj0;
si0=0U;
sj0=i64_load(&i->m0,(U64)si0+18663256U);
l7=sj0;
goto L22;
L23:;
si0=l3;
si1=88U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
sj1=0ULL;
i64_store(&i->m0,(U64)si0+80U,sj1);
si0=l3;
si1=80U;
si0+=si1;
si1=16U;
si0=wasi_snapshot_preview1__random_get(i,si0,si1);
l4=si0;
if(si0){
goto L9;
}
si0=0U;
si1=l3;
sj1=i64_load(&i->m0,(U64)si1+88U);
l6=sj1;
i64_store(&i->m0,(U64)si0+18663264U,sj1);
si0=0U;
sj1=1ULL;
i64_store(&i->m0,(U64)si0+18663248U,sj1);
si0=l3;
sj0=i64_load(&i->m0,(U64)si0+80U);
l7=sj0;
L22:;
si0=l3;
si1=136U;
si0+=si1;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
sj1=l7;
i64_store(&i->m0,(U64)si0+80U,sj1);
si0=0U;
sj1=l7;
sj2=1ULL;
sj1+=sj2;
i64_store(&i->m0,(U64)si0+18663256U,sj1);
si0=l3;
sj1=4ULL;
i64_store(&i->m0,(U64)si0+128U,sj1);
si0=l3;
sj1=0ULL;
i64_store(&i->m0,(U64)si0+116U,sj1);
si0=l3;
sj1=17179869184ULL;
i64_store(&i->m0,(U64)si0+108U,sj1);
si0=l3;
sj1=0ULL;
i64_store(&i->m0,(U64)si0+100U,sj1);
si0=l3;
si1=17359936U;
i32_store(&i->m0,(U64)si0+96U,si1);
si0=l3;
sj1=l6;
i64_store(&i->m0,(U64)si0+88U,sj1);
si0=l3;
si1=8U;
si0+=si1;
si1=l1;
si2=l3;
si3=80U;
si2+=si3;
si3=l2;
f5537(i,si0,si1,si2,si3);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+12U);
l4=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+8U);
if(si0){
goto L18;
}
si0=l4;
sj0=i64_load(&i->m0,(U64)si0+8U);
sj1=8080311700465507813ULL;
sj0^=sj1;
si1=l4;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
sj2=3405249472825529671ULL;
sj1^=sj2;
sj0|=sj1;
si0=!(sj0);
si0=!(si0);
if(si0){
goto L19;
}
si0=l4;
si1=72U;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L8;
}
si0=l4;
si1=l4;
si1=i32_load(&i->m0,(U64)si1);
l2=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+56U);
si1=0U;
si0=si0 != si1;
l8=si0;
si0=l4;
si1=64U;
si0+=si1;
sj0=i64_load(&i->m0,(U64)si0);
sj1=0ULL;
si0=sj0 != sj1;
l9=si0;
si0=l2;
si1=1U;
si0=si0 != si1;
if(si0){
goto L24;
}
si0=l4;
f5522(i,si0);
L24:;
si0=l8;
si1=l9;
si0|=si1;
l4=si0;
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
goto L20;
}
si0=l1;
f5522(i,si0);
L20:;
si0=l0;
si1=0U;
i32_store8(&i->m0,(U64)si0,si1);
si0=l0;
si1=l4;
i32_store8(&i->m0,(U64)si0+1U,si1);
goto L1;
L19:;
si0=l2;
si1=l4;
si0=f5572(i,si0,si1);
l2=si0;
goto L3;
L18:;
si0=l0;
si1=1U;
i32_store8(&i->m0,(U64)si0,si1);
si0=l0;
si1=l4;
i32_store(&i->m0,(U64)si0+4U,si1);
goto L2;
L15:;
si0=0U;
sj0=i64_load(&i->m0,(U64)si0+18663248U);
si0=!(sj0);
if(si0){
goto L26;
}
si0=0U;
sj0=i64_load(&i->m0,(U64)si0+18663264U);
l6=sj0;
si0=0U;
sj0=i64_load(&i->m0,(U64)si0+18663256U);
l7=sj0;
goto L25;
L26:;
si0=l3;
si1=88U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
sj1=0ULL;
i64_store(&i->m0,(U64)si0+80U,sj1);
si0=l3;
si1=80U;
si0+=si1;
si1=16U;
si0=wasi_snapshot_preview1__random_get(i,si0,si1);
l4=si0;
if(si0){
goto L7;
}
si0=0U;
si1=l3;
sj1=i64_load(&i->m0,(U64)si1+88U);
l6=sj1;
i64_store(&i->m0,(U64)si0+18663264U,sj1);
si0=0U;
sj1=1ULL;
i64_store(&i->m0,(U64)si0+18663248U,sj1);
si0=l3;
sj0=i64_load(&i->m0,(U64)si0+80U);
l7=sj0;
L25:;
si0=l3;
si1=136U;
si0+=si1;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
sj1=l7;
i64_store(&i->m0,(U64)si0+80U,sj1);
si0=0U;
sj1=l7;
sj2=1ULL;
sj1+=sj2;
i64_store(&i->m0,(U64)si0+18663256U,sj1);
si0=l3;
sj1=4ULL;
i64_store(&i->m0,(U64)si0+128U,sj1);
si0=l3;
sj1=0ULL;
i64_store(&i->m0,(U64)si0+116U,sj1);
si0=l3;
sj1=17179869184ULL;
i64_store(&i->m0,(U64)si0+108U,sj1);
si0=l3;
sj1=0ULL;
i64_store(&i->m0,(U64)si0+100U,sj1);
si0=l3;
si1=17359936U;
i32_store(&i->m0,(U64)si0+96U,si1);
si0=l3;
sj1=l6;
i64_store(&i->m0,(U64)si0+88U,sj1);
si0=l3;
si1=24U;
si0+=si1;
si1=l5;
si2=l3;
si3=80U;
si2+=si3;
si3=l2;
f5537(i,si0,si1,si2,si3);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+28U);
l10=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+24U);
if(si0){
goto L13;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0+88U);
si1=40U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l11=si0;
si1=l10;
si1=i32_load(&i->m0,(U64)si1+28U);
l8=si1;
si0=si0 == si1;
if(si0){
goto L28;
}
si0=l8;
si1=468U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=2U;
si0<<=(si1&31);
l4=si0;
si0=l8;
si1=460U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l8=si0;
L29:;
{
si0=l4;
si0=!(si0);
if(si0){
goto L27;
}
si0=l4;
si1=-4U;
si0+=si1;
l4=si0;
si0=l8;
si0=i32_load(&i->m0,(U64)si0);
l9=si0;
si0=l8;
si1=4U;
si0+=si1;
l8=si0;
si0=l9;
si1=l11;
si0=si0 != si1;
if(si0){
goto L29;
}
}
L28:;
si0=l10;
sj0=i64_load(&i->m0,(U64)si0+8U);
sj1=8080311700465507813ULL;
sj0^=sj1;
si1=l10;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
sj2=3405249472825529671ULL;
sj1^=sj2;
sj0|=sj1;
si0=!(sj0);
si0=!(si0);
if(si0){
goto L5;
}
si0=1U;
l2=si0;
si0=l10;
si1=72U;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L30;
}
si0=l10;
si0=i32_load(&i->m0,(U64)si0+56U);
si1=0U;
si0=si0 != si1;
si1=l10;
si2=64U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
sj2=0ULL;
si1=sj1 != sj2;
si0|=si1;
l2=si0;
L30:;
si0=l10;
si1=l10;
si1=i32_load(&i->m0,(U64)si1);
l4=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=1U;
si0=si0 != si1;
if(si0){
goto L31;
}
si0=l10;
f5522(i,si0);
L31:;
si0=l5;
si1=l5;
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
si0=l5;
f5522(i,si0);
L32:;
si0=l0;
si1=0U;
i32_store8(&i->m0,(U64)si0,si1);
si0=l0;
si1=l2;
i32_store8(&i->m0,(U64)si0+1U,si1);
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
goto L1;
}
si0=l1;
f5522(i,si0);
goto L1;
L27:;
si0=l3;
si1=64U;
si0+=si1;
si1=l10;
si1=i32_load(&i->m0,(U64)si1+28U);
si2=56U;
si1+=si2;
f13757(i,si0,si1);
si0=l3;
si1=92U;
si0+=si1;
sj1=1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=843U;
i32_store(&i->m0,(U64)si0+60U,si1);
si0=l3;
si1=1U;
i32_store(&i->m0,(U64)si0+84U,si1);
si0=l3;
si1=17311448U;
i32_store(&i->m0,(U64)si0+80U,si1);
si0=l3;
si1=l3;
si2=64U;
si1+=si2;
i32_store(&i->m0,(U64)si0+56U,si1);
si0=l3;
si1=l3;
si2=56U;
si1+=si2;
i32_store(&i->m0,(U64)si0+88U,si1);
si0=l3;
si1=44U;
si0+=si1;
si1=l3;
si2=80U;
si1+=si2;
f5533(i,si0,si1);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+64U);
si1=l3;
si1=i32_load(&i->m0,(U64)si1+68U);
f5529(i,si0,si1);
si0=l2;
si1=l3;
si2=44U;
si1+=si2;
si0=f11871(i,si0,si1);
l2=si0;
si0=l0;
si1=1U;
i32_store8(&i->m0,(U64)si0,si1);
si0=l0;
si1=l2;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l10;
si1=l10;
si1=i32_load(&i->m0,(U64)si1);
l2=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=1U;
si0=si0 != si1;
if(si0){
goto L12;
}
si0=l10;
f5522(i,si0);
goto L12;
L14:;
si0=l0;
si1=1U;
i32_store8(&i->m0,(U64)si0,si1);
si0=l0;
si1=l1;
i32_store(&i->m0,(U64)si0+4U,si1);
goto L1;
L13:;
si0=l0;
si1=1U;
i32_store8(&i->m0,(U64)si0,si1);
si0=l0;
si1=l10;
i32_store(&i->m0,(U64)si0+4U,si1);
L12:;
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
goto L4;
}
si0=l5;
f5522(i,si0);
goto L4;
L11:;
si0=l0;
si1=256U;
i32_store16(&i->m0,(U64)si0,si1);
goto L4;
L10:;
f14795(i);
UNREACHABLE;
L9:;
si0=l3;
si1=l4;
i32_store16(&i->m0,(U64)si0+64U,si1);
si0=17683216U;
si1=18U;
si2=l3;
si3=64U;
si2+=si3;
si3=17683100U;
si4=17683268U;
f641(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L8:;
si0=l3;
si1=28U;
si2=0U;
f8721(i,si0,si1,si2);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+4U);
l9=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
l8=si0;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+17311376U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l8;
si1=24U;
si0+=si1;
si1=0U;
si1=i32_load(&i->m0,(U64)si1+17311400U);
i32_store(&i->m0,(U64)si0,si1);
si0=l8;
si1=16U;
si0+=si1;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+17311392U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l8;
si1=8U;
si0+=si1;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+17311384U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=28U;
i32_store(&i->m0,(U64)si0+88U,si1);
si0=l3;
si1=l9;
i32_store(&i->m0,(U64)si0+84U,si1);
si0=l3;
si1=l8;
i32_store(&i->m0,(U64)si0+80U,si1);
si0=l2;
si1=l3;
si2=80U;
si1+=si2;
si0=f11875(i,si0,si1);
l2=si0;
goto L3;
L7:;
si0=l3;
si1=l4;
i32_store16(&i->m0,(U64)si0+64U,si1);
si0=17683216U;
si1=18U;
si2=l3;
si3=64U;
si2+=si3;
si3=17683100U;
si4=17683268U;
f641(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L6:;
si0=l0;
si1=1U;
i32_store8(&i->m0,(U64)si0,si1);
si0=l0;
si1=l5;
i32_store(&i->m0,(U64)si0+4U,si1);
goto L4;
L5:;
si0=17623824U;
si1=43U;
si2=17624480U;
f604(i,si0,si1,si2);
UNREACHABLE;
L4:;
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
goto L1;
}
si0=l1;
f5522(i,si0);
goto L1;
L3:;
si0=l0;
si1=1U;
i32_store8(&i->m0,(U64)si0,si1);
si0=l0;
si1=l2;
i32_store(&i->m0,(U64)si0+4U,si1);
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
goto L2;
}
si0=l4;
f5522(i,si0);
L2:;
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
goto L1;
}
si0=l1;
f5522(i,si0);
L1:;
si0=l3;
si1=144U;
si0+=si1;
i->g0=si0;
L0:;
}

U32 f5572(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 l3=0;
U32 si0,si1,si2,si3,si4;
U64 sj1;
si0=i->g0;
si1=64U;
si0-=si1;
l2=si0;
i->g0=si0;
si0=l2;
si1=48U;
si0+=si1;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+28U);
si2=56U;
si1+=si2;
f13757(i,si0,si1);
si0=l2;
si1=28U;
si0+=si1;
sj1=1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=843U;
i32_store(&i->m0,(U64)si0+44U,si1);
si0=l2;
si1=2U;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l2;
si1=17311500U;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l2;
si1=l2;
si2=48U;
si1+=si2;
i32_store(&i->m0,(U64)si0+40U,si1);
si0=l2;
si1=l2;
si2=40U;
si1+=si2;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l2;
si1=4U;
si0+=si1;
si1=l2;
si2=16U;
si1+=si2;
f64(i,si0,si1);
si0=l2;
si0=i32_load(&i->m0,(U64)si0+48U);
switch(si0){
case 0:
goto L1;
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
si0=i32_load(&i->m0,(U64)si0+52U);
l1=si0;
si1=l1;
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
si0=l1;
f1354(i,si0);
goto L1;
L4:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+52U);
l1=si0;
si1=0U;
si2=l1;
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
goto L1;
}
si0=l1;
si1=0U;
f1361(i,si0,si1);
goto L1;
L3:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+52U);
l1=si0;
si1=0U;
si2=l1;
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
goto L1;
}
si0=l1;
si1=0U;
f1361(i,si0,si1);
goto L1;
L2:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+52U);
l1=si0;
si1=l1;
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
si0=l1;
f1354(i,si0);
L1:;
si0=l2;
si1=16U;
si0+=si1;
si1=8U;
si0+=si1;
si1=l2;
si2=4U;
si1+=si2;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=l2;
sj1=i64_load(&i->m0,(U64)si1+4U);
i64_store(&i->m0,(U64)si0+16U,sj1);
si0=l0;
si0=i32_load(&i->m0,(U64)si0+88U);
si1=504U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si1=l1;
si1=i32_load(&i->m0,(U64)si1);
l3=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 != si1;
if(si0){
goto L6;
}
f14795(i);
UNREACHABLE;
L6:;
si0=l0;
si1=l1;
si2=l2;
si3=16U;
si2+=si3;
si0=f11521(i,si0,si1,si2);
l0=si0;
si0=l2;
si1=64U;
si0+=si1;
i->g0=si0;
si0=l0;
L0:;
return si0;
}

void f5573(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 l8=0;
U32 l9=0;
U32 l10=0;
U32 si0,si1,si2;
si0=i->g0;
si1=48U;
si0-=si1;
l4=si0;
i->g0=si0;
si0=l2;
si0=!(si0);
if(si0){
goto L3;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si1=68U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si1=l2;
si0+=si1;
l7=si0;
if(si0){
goto L5;
}
si0=1U;
l8=si0;
goto L4;
L5:;
si0=l7;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L2;
}
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=l7;
si0=f15022(i,si0);
l8=si0;
si0=!(si0);
if(si0){
goto L1;
}
L4:;
si0=0U;
l9=si0;
si0=l4;
si1=0U;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l4;
si1=l8;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l4;
si1=l7;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l5;
si1=64U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l10=si0;
si0=l7;
si1=l6;
si0=si0 >= si1;
if(si0){
goto L6;
}
si0=l4;
si1=12U;
si0+=si1;
si1=0U;
si2=l6;
f8716(i,si0,si1,si2);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+16U);
l7=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+12U);
l8=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+20U);
l9=si0;
L6:;
si0=l8;
si1=l9;
si0+=si1;
si1=l10;
si2=l6;
si0=f15143(i,si0,si1,si2);
si0=l4;
si1=l9;
si2=l6;
si1+=si2;
l6=si1;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l7;
si1=l6;
si0-=si1;
si1=l2;
si0=si0 >= si1;
if(si0){
goto L7;
}
si0=l4;
si1=12U;
si0+=si1;
si1=l6;
si2=l2;
f8716(i,si0,si1,si2);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+12U);
l8=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+20U);
l6=si0;
L7:;
si0=l8;
si1=l6;
si0+=si1;
si1=l1;
si2=l2;
si0=f15143(i,si0,si1,si2);
si0=l4;
si1=l6;
si2=l2;
si1+=si2;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l4;
si1=24U;
si0+=si1;
si1=l4;
si2=12U;
si1+=si2;
f9264(i,si0,si1);
si0=l4;
si1=24U;
si0+=si1;
si1=l3;
si1=i32_load(&i->m0,(U64)si1+88U);
si2=8U;
si1+=si2;
si0=f5574(i,si0,si1);
l2=si0;
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
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
f5522(i,si0);
L8:;
si0=l0;
si1=l2;
i32_store(&i->m0,(U64)si0,si1);
L3:;
si0=l4;
si1=48U;
si0+=si1;
i->g0=si0;
goto L0;
L2:;
f53(i);
UNREACHABLE;
L1:;
si0=1U;
si1=l7;
f52(i,si0,si1);
UNREACHABLE;
L0:;
}

U32 f5574(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 si0,si1,si2;
U64 sj1,sj2;
si0=i->g0;
si1=48U;
si0-=si1;
l2=si0;
i->g0=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+192U);
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
goto L3;
}
si0=0U;
l5=si0;
si0=l3;
si1=77U;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=1U;
si0&=si1;
si0=!(si0);
if(si0){
goto L5;
}
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=64U;
si0=f15022(i,si0);
l4=si0;
si0=!(si0);
if(si0){
goto L4;
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
si0=l2;
si1=8U;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l4;
si1=8U;
si0+=si1;
sj1=-1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=40U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+60U);
l5=si0;
si1=l5;
si1=i32_load(&i->m0,(U64)si1);
l1=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
sj1=0ULL;
i64_store(&i->m0,(U64)si0+32U,sj1);
si0=l2;
sj1=34359738376ULL;
i64_store(&i->m0,(U64)si0+20U,sj1);
si0=l2;
si1=l4;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l2;
si1=0U;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l1;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 == si1;
if(si0){
goto L3;
}
si0=l2;
si1=12U;
si0+=si1;
si1=l5;
si2=0U;
si0=f5913(i,si0,si1,si2);
l5=si0;
L5:;
si0=l3;
si1=352U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
if(si0){
goto L7;
}
si0=4U;
l6=si0;
goto L6;
L7:;
si0=l1;
si1=268435455U;
si0=si0 > si1;
if(si0){
goto L10;
}
si0=l1;
si1=3U;
si0<<=(si1&31);
l4=si0;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L10;
}
si0=l4;
if(si0){
goto L9;
}
si0=4U;
l6=si0;
goto L8;
L10:;
f53(i);
UNREACHABLE;
L9:;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=l4;
si0=f15022(i,si0);
l6=si0;
si0=!(si0);
if(si0){
goto L2;
}
L8:;
si0=l6;
si1=0U;
si2=l4;
si0=f15145(i,si0,si1,si2);
L6:;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=80U;
si0=f15022(i,si0);
l4=si0;
si0=!(si0);
if(si0){
goto L1;
}
si0=l4;
sj1=-2295367307525992740ULL;
i64_store(&i->m0,(U64)si0+8U,sj1);
si0=l4;
si1=l1;
i32_store(&i->m0,(U64)si0+52U,si1);
si0=l4;
si1=l6;
i32_store(&i->m0,(U64)si0+48U,si1);
si0=l4;
si1=0U;
i32_store(&i->m0,(U64)si0+44U,si1);
si0=l4;
si1=l3;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l4;
si1=17313080U;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l4;
si1=1U;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=16U;
si0+=si1;
sj1=6911619425446520681ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=l5;
si2=0U;
si1=si1 != si2;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l4;
si1=l0;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+56U,sj1);
si0=l4;
si1=l5;
sj1=(U64)(si1);
sj2=32ULL;
sj1<<=(sj2&63);
i64_store(&i->m0,(U64)si0+36U,sj1);
si0=l4;
si1=64U;
si0+=si1;
si1=l0;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=72U;
si0+=si1;
si1=l0;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=48U;
si0+=si1;
i->g0=si0;
si0=l4;
goto L0;
L4:;
si0=8U;
si1=64U;
f52(i,si0,si1);
UNREACHABLE;
L3:;
f14795(i);
UNREACHABLE;
L2:;
si0=4U;
si1=l4;
f52(i,si0,si1);
UNREACHABLE;
L1:;
si0=8U;
si1=80U;
f52(i,si0,si1);
UNREACHABLE;
L0:;
return si0;
}

void f5575(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
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
U32 si0,si1,si2,si3,si4;
U64 sj1;
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
si1=l2;
si2=28U;
si1*=si2;
si0+=si1;
l5=si0;
si0=l0;
si1=384U;
si0+=si1;
l6=si0;
si0=l3;
si1=1208U;
si0+=si1;
l7=si0;
si0=l0;
si1=376U;
si0+=si1;
l8=si0;
L3:;
{
si0=l1;
si1=l0;
si2=l3;
si0=f11316(i,si0,si1,si2);
l9=si0;
si0=l1;
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l10=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l11=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+192U);
l2=si0;
si1=l2;
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
si0=l7;
si1=l11;
si2=l10;
si3=l2;
si0=f9632(i,si0,si1,si2,si3);
l12=si0;
si0=l0;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+376U);
l2=si1;
si2=8U;
si3=l2;
si1=si3?si1:si2;
i32_store(&i->m0,(U64)si0+376U,si1);
si0=l2;
si0=!(si0);
if(si0){
goto L4;
}
si0=l8;
sj1=l13;
si2=1000000000U;
si0=f1350(i,si0,sj1,si2);
L4:;
si0=l4;
si1=8U;
si0+=si1;
si1=l6;
si2=l12;
si3=l9;
f13785(i,si0,si1,si2,si3);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+12U);
l2=si0;
si0=!(si0);
if(si0){
goto L5;
}
si0=l2;
si1=l2;
si1=i32_load(&i->m0,(U64)si1);
l12=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l12;
si1=1U;
si0=si0 != si1;
if(si0){
goto L5;
}
si0=l2;
f5522(i,si0);
L5:;
si0=l0;
si1=0U;
si2=l0;
si2=i32_load(&i->m0,(U64)si2+376U);
l2=si2;
si3=l2;
si4=8U;
si3=si3 == si4;
l2=si3;
si1=si3?si1:si2;
i32_store(&i->m0,(U64)si0+376U,si1);
si0=l2;
if(si0){
goto L6;
}
si0=l8;
si1=0U;
f1352(i,si0,si1);
L6:;
si0=l1;
si1=28U;
si0+=si1;
l1=si0;
si1=l5;
si0=si0 != si1;
if(si0){
goto L3;
}
}
L2:;
si0=l4;
si1=16U;
si0+=si1;
i->g0=si0;
goto L0;
L1:;
f14795(i);
UNREACHABLE;
L0:;
}

void f5576(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U64 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 l8=0;
U32 l9=0;
U64 l10=0;
U32 si0,si1,si2,si3,si4;
U64 sj0,sj1,sj2,sj3,sj4;
si0=i->g0;
si1=16U;
si0-=si1;
l3=si0;
i->g0=si0;
si0=l1;
si1=64U;
si0+=si1;
sj0=i64_load(&i->m0,(U64)si0);
l4=sj0;
sj1=-1ULL;
si0=sj0 != sj1;
if(si0){
goto L6;
}
si0=l1;
si1=76U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si1=l5;
si1=i32_load8_u(&i->m0,(U64)si1);
l6=si1;
si2=1U;
si3=l6;
si1=si3?si1:si2;
i32_store8(&i->m0,(U64)si0,si1);
si0=l6;
si0=!(si0);
if(si0){
goto L7;
}
si0=l5;
sj1=l4;
si2=1000000000U;
si0=f1360(i,si0,sj1,si2);
L7:;
si0=l5;
si1=12U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
si0=!(si0);
if(si0){
goto L10;
}
si0=l7;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
L11:;
{
si0=l6;
si0=!(si0);
if(si0){
goto L10;
}
si0=l7;
si1=l6;
si2=1U;
si1+=si2;
si2=l7;
si2=i32_load(&i->m0,(U64)si2);
l8=si2;
si3=l8;
si4=l6;
si3=si3 == si4;
si1=si3?si1:si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l8;
si1=l6;
si0=si0 != si1;
l9=si0;
si0=l8;
l6=si0;
si0=l9;
if(si0){
goto L11;
}
}
si0=l5;
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
goto L8;
}
goto L9;
L10:;
si0=0U;
l7=si0;
si0=l5;
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
goto L5;
}
L9:;
si0=l5;
si1=0U;
f1361(i,si0,si1);
L8:;
si0=l7;
si0=!(si0);
if(si0){
goto L5;
}
si0=l3;
si1=l7;
si2=l2;
f5577(i,si0,si1,si2);
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L4;
}
si0=l1;
si1=l3;
sj1=i64_load(&i->m0,(U64)si1+8U);
l4=sj1;
sj2=-2ULL;
sj3=l4;
sj4=-2ULL;
si3=sj3 < sj4;
sj1=si3?sj1:sj2;
si2=l1;
sj2=i64_load(&i->m0,(U64)si2+64U);
l10=sj2;
sj3=l10;
sj4=-1ULL;
si3=sj3 == sj4;
l6=si3;
sj1=si3?sj1:sj2;
i64_store(&i->m0,(U64)si0+64U,sj1);
si0=l7;
si1=l7;
si1=i32_load(&i->m0,(U64)si1);
l8=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
sj0=l4;
sj1=l10;
si2=l6;
sj0=si2?sj0:sj1;
l4=sj0;
si0=l8;
si1=1U;
si0=si0 != si1;
if(si0){
goto L6;
}
si0=l7;
f5522(i,si0);
L6:;
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
sj1=l4;
i64_store(&i->m0,(U64)si0+8U,sj1);
goto L3;
L5:;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=25U;
si0=f15022(i,si0);
l6=si0;
si0=!(si0);
if(si0){
goto L2;
}
si0=l6;
si1=24U;
si0+=si1;
si1=0U;
si1=i32_load8_u(&i->m0,(U64)si1+17311540U);
i32_store8(&i->m0,(U64)si0,si1);
si0=l6;
si1=16U;
si0+=si1;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+17311532U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l6;
si1=8U;
si0+=si1;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+17311524U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l6;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+17311516U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si0=i32_load(&i->m0,(U64)si0+88U);
si1=504U;
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
sj1=107374182425ULL;
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l3;
si1=l6;
i32_store(&i->m0,(U64)si0,si1);
si0=l7;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 == si1;
if(si0){
goto L1;
}
si0=l2;
si1=l8;
si2=l3;
si0=f11521(i,si0,si1,si2);
l6=si0;
si0=l0;
si1=1U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l6;
i32_store(&i->m0,(U64)si0+4U,si1);
goto L3;
L4:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+4U);
l6=si0;
si0=l0;
si1=1U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l6;
i32_store(&i->m0,(U64)si0+4U,si1);
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
goto L3;
}
si0=l7;
f5522(i,si0);
L3:;
si0=l3;
si1=16U;
si0+=si1;
i->g0=si0;
goto L0;
L2:;
si0=1U;
si1=25U;
f52(i,si0,si1);
UNREACHABLE;
L1:;
f14795(i);
UNREACHABLE;
L0:;
}

void f5577(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 si0,si1,si2,si3,si4;
U64 sj1;
si0=i->g0;
si1=64U;
si0-=si1;
l3=si0;
i->g0=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+28U);
si1=56U;
si0+=si1;
l4=si0;
si1=l2;
si1=i32_load(&i->m0,(U64)si1+88U);
si2=812U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
l5=si1;
si0=f13811(i,si0,si1);
l6=si0;
if(si0){
goto L5;
}
si0=l4;
si1=l5;
si0=f13812(i,si0,si1);
l6=si0;
si0=!(si0);
if(si0){
goto L4;
}
L5:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+88U);
l4=si0;
si1=1280U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=l6;
si0=si0 == si1;
if(si0){
goto L6;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+28U);
l5=si0;
si1=296U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
if(si0){
goto L7;
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
L8:;
{
si0=l4;
si0=!(si0);
if(si0){
goto L3;
}
si0=l4;
si1=-4U;
si0+=si1;
l4=si0;
si0=l5;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
si0=l5;
si1=4U;
si0+=si1;
l5=si0;
si0=l7;
si1=296U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
si0=!(si0);
if(si0){
goto L8;
}
}
L7:;
si0=l0;
si1=l1;
si2=l2;
si3=l7;
TF(i->t0,si3,void (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
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
L6:;
si0=l4;
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
goto L9;
}
si0=l3;
si1=48U;
si0+=si1;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+28U);
si2=56U;
si1+=si2;
f13757(i,si0,si1);
si0=l3;
si1=28U;
si0+=si1;
sj1=1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=843U;
i32_store(&i->m0,(U64)si0+44U,si1);
si0=l3;
si1=2U;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l3;
si1=17315028U;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l3;
si1=l3;
si2=48U;
si1+=si2;
i32_store(&i->m0,(U64)si0+40U,si1);
si0=l3;
si1=l3;
si2=40U;
si1+=si2;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l3;
si1=4U;
si0+=si1;
si1=l3;
si2=16U;
si1+=si2;
f64(i,si0,si1);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+48U);
switch(si0){
case 0:
goto L10;
case 1:
goto L13;
case 2:
goto L12;
case 3:
goto L11;
default:
goto L14;
}
L14:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+52U);
l5=si0;
si1=l5;
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
goto L10;
}
si0=l5;
f1354(i,si0);
goto L10;
L13:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+52U);
l5=si0;
si1=0U;
si2=l5;
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
goto L10;
}
si0=l5;
si1=0U;
f1361(i,si0,si1);
goto L10;
L12:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+52U);
l5=si0;
si1=0U;
si2=l5;
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
goto L10;
}
si0=l5;
si1=0U;
f1361(i,si0,si1);
goto L10;
L11:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+52U);
l5=si0;
si1=l5;
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
goto L10;
}
si0=l5;
f1354(i,si0);
L10:;
si0=l3;
si1=16U;
si0+=si1;
si1=8U;
si0+=si1;
si1=l3;
si2=4U;
si1+=si2;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=l3;
sj1=i64_load(&i->m0,(U64)si1+4U);
i64_store(&i->m0,(U64)si0+16U,sj1);
si0=l2;
si1=l4;
si2=l3;
si3=16U;
si2+=si3;
si0=f11521(i,si0,si1,si2);
l4=si0;
si0=l0;
si1=1U;
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
si0=si0 == si1;
if(si0){
goto L2;
}
goto L1;
L9:;
f14795(i);
UNREACHABLE;
L4:;
si0=17310636U;
si1=43U;
si2=17314976U;
f604(i,si0,si1,si2);
UNREACHABLE;
L3:;
si0=17310636U;
si1=43U;
si2=17314992U;
f604(i,si0,si1,si2);
UNREACHABLE;
L2:;
si0=l6;
f5522(i,si0);
L1:;
si0=l3;
si1=64U;
si0+=si1;
i->g0=si0;
L0:;
}

void f5578(rustpythonInstance*i,U32 l0,U32 l1) {
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
U32 si0,si1,si2,si3,si4;
U64 sj1;
si0=i->g0;
si1=48U;
si0-=si1;
l2=si0;
i->g0=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+192U);
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
si0=l0;
si1=1208U;
si0+=si1;
l5=si0;
si1=17311772U;
si2=7U;
si3=l3;
si0=f9632(i,si0,si1,si2,si3);
si0=l1;
si1=344U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L2;
}
si0=0U;
si0=i32_load(&i->m0,(U64)si0+18661092U);
si1=2U;
si0=si0 == si1;
if(si0){
goto L3;
}
si0=18661092U;
f6698(i,si0);
L3:;
si0=0U;
si0=i32_load(&i->m0,(U64)si0+18661096U);
l4=si0;
si0=l1;
si1=l1;
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
si0=l0;
si0=i32_load(&i->m0,(U64)si0+228U);
l3=si0;
si1=l3;
si1=i32_load(&i->m0,(U64)si1);
l6=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=l1;
i32_store(&i->m0,(U64)si0+44U,si1);
si0=l2;
si1=0U;
i32_store(&i->m0,(U64)si0+40U,si1);
si0=l2;
si1=l1;
i32_store(&i->m0,(U64)si0+36U,si1);
si0=l2;
si1=l4;
si2=1320U;
si1+=si2;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l6;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 == si1;
if(si0){
goto L1;
}
si0=l2;
si1=32U;
si0+=si1;
si1=l3;
si2=0U;
si0=f5579(i,si0,si1,si2);
l6=si0;
si0=l0;
si1=964U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
si0=l1;
si1=376U;
si0+=si1;
l4=si0;
si1=l4;
si1=i32_load(&i->m0,(U64)si1);
l3=si1;
si2=8U;
si3=l3;
si1=si3?si1:si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si0=!(si0);
if(si0){
goto L4;
}
si0=l4;
sj1=l8;
si2=1000000000U;
si0=f1350(i,si0,sj1,si2);
L4:;
si0=l2;
si1=24U;
si0+=si1;
si1=l1;
si2=384U;
si1+=si2;
si2=l7;
si3=l6;
f13785(i,si0,si1,si2,si3);
si0=l2;
si0=i32_load(&i->m0,(U64)si0+28U);
l3=si0;
si0=!(si0);
if(si0){
goto L5;
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
goto L5;
}
si0=l3;
f5522(i,si0);
L5:;
si0=l1;
si1=0U;
si2=l1;
si2=i32_load(&i->m0,(U64)si2+376U);
l3=si2;
si3=l3;
si4=8U;
si3=si3 == si4;
l3=si3;
si1=si3?si1:si2;
i32_store(&i->m0,(U64)si0+376U,si1);
si0=l3;
if(si0){
goto L2;
}
si0=l1;
si1=376U;
si0+=si1;
si1=0U;
f1352(i,si0,si1);
L2:;
si0=l1;
si1=296U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=845U;
si0=si0 != si1;
if(si0){
goto L6;
}
si0=l0;
si1=804U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+1272U);
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
si0=l1;
si1=376U;
si0+=si1;
l6=si0;
si1=l6;
si1=i32_load(&i->m0,(U64)si1);
l4=si1;
si2=8U;
si3=l4;
si1=si3?si1:si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si0=!(si0);
if(si0){
goto L7;
}
si0=l6;
sj1=l8;
si2=1000000000U;
si0=f1350(i,si0,sj1,si2);
L7:;
si0=l2;
si1=16U;
si0+=si1;
si1=l1;
si2=384U;
si1+=si2;
si2=l7;
si3=l3;
f13785(i,si0,si1,si2,si3);
si0=l2;
si0=i32_load(&i->m0,(U64)si0+20U);
l3=si0;
si0=!(si0);
if(si0){
goto L8;
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
goto L8;
}
si0=l3;
f5522(i,si0);
L8:;
si0=l1;
si1=0U;
si2=l1;
si2=i32_load(&i->m0,(U64)si2+376U);
l3=si2;
si3=l3;
si4=8U;
si3=si3 == si4;
l3=si3;
si1=si3?si1:si2;
i32_store(&i->m0,(U64)si0+376U,si1);
si0=l3;
if(si0){
goto L6;
}
si0=l1;
si1=376U;
si0+=si1;
si1=0U;
f1352(i,si0,si1);
L6:;
si0=l1;
si1=68U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
si0=!(si0);
if(si0){
goto L9;
}
si0=l1;
si1=64U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si1=l4;
si2=28U;
si1*=si2;
si0+=si1;
l9=si0;
si0=l1;
si1=384U;
si0+=si1;
l10=si0;
si0=l1;
si1=376U;
si0+=si1;
l11=si0;
L10:;
{
si0=l3;
si1=l1;
si2=l0;
si0=f11316(i,si0,si1,si2);
l7=si0;
si0=l3;
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l12=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
l13=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+192U);
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
goto L1;
}
si0=l5;
si1=l13;
si2=l12;
si3=l4;
si0=f9632(i,si0,si1,si2,si3);
l6=si0;
si0=l1;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+376U);
l4=si1;
si2=8U;
si3=l4;
si1=si3?si1:si2;
i32_store(&i->m0,(U64)si0+376U,si1);
si0=l4;
si0=!(si0);
if(si0){
goto L11;
}
si0=l11;
sj1=l8;
si2=1000000000U;
si0=f1350(i,si0,sj1,si2);
L11:;
si0=l2;
si1=8U;
si0+=si1;
si1=l10;
si2=l6;
si3=l7;
f13785(i,si0,si1,si2,si3);
si0=l2;
si0=i32_load(&i->m0,(U64)si0+12U);
l4=si0;
si0=!(si0);
if(si0){
goto L12;
}
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
goto L12;
}
si0=l4;
f5522(i,si0);
L12:;
si0=l1;
si1=0U;
si2=l1;
si2=i32_load(&i->m0,(U64)si2+376U);
l4=si2;
si3=l4;
si4=8U;
si3=si3 == si4;
l4=si3;
si1=si3?si1:si2;
i32_store(&i->m0,(U64)si0+376U,si1);
si0=l4;
if(si0){
goto L13;
}
si0=l11;
si1=0U;
f1352(i,si0,si1);
L13:;
si0=l3;
si1=28U;
si0+=si1;
l3=si0;
si1=l9;
si0=si0 != si1;
if(si0){
goto L10;
}
}
L9:;
si0=l2;
si1=48U;
si0+=si1;
i->g0=si0;
goto L0;
L1:;
f14795(i);
UNREACHABLE;
L0:;
}

U32 f5579(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 si0,si1,si2;
U64 sj1,sj2;
si0=l1;
si1=352U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
if(si0){
goto L4;
}
si0=4U;
l4=si0;
goto L3;
L4:;
si0=l3;
si1=268435455U;
si0=si0 > si1;
if(si0){
goto L7;
}
si0=l3;
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
si0=4U;
l4=si0;
goto L5;
L7:;
f53(i);
UNREACHABLE;
L6:;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=l5;
si0=f15022(i,si0);
l4=si0;
si0=!(si0);
if(si0){
goto L2;
}
L5:;
si0=l4;
si1=0U;
si2=l5;
si0=f15145(i,si0,si1,si2);
L3:;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=72U;
si0=f15022(i,si0);
l5=si0;
si0=!(si0);
if(si0){
goto L1;
}
si0=l5;
sj1=-935510885048731461ULL;
i64_store(&i->m0,(U64)si0+8U,sj1);
si0=l5;
si1=l3;
i32_store(&i->m0,(U64)si0+52U,si1);
si0=l5;
si1=l4;
i32_store(&i->m0,(U64)si0+48U,si1);
si0=l5;
si1=0U;
i32_store(&i->m0,(U64)si0+44U,si1);
si0=l5;
si1=l1;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l5;
si1=17312936U;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l5;
si1=1U;
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=16U;
si0+=si1;
sj1=-8140359450318595575ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=l2;
si2=0U;
si1=si1 != si2;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l5;
si1=l0;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+56U,sj1);
si0=l5;
si1=l2;
sj1=(U64)(si1);
sj2=32ULL;
sj1<<=(sj2&63);
i64_store(&i->m0,(U64)si0+36U,sj1);
si0=l5;
si1=64U;
si0+=si1;
si1=l0;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
goto L0;
L2:;
si0=4U;
si1=l5;
f52(i,si0,si1);
UNREACHABLE;
L1:;
si0=8U;
si1=72U;
f52(i,si0,si1);
UNREACHABLE;
L0:;
return si0;
}

void f5580(rustpythonInstance*i,U32 l0) {
U32 l1=0;
U32 si0,si1,si2;
U64 sj1;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+8U);
l1=si0;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+4U);
si0=si0 != si1;
if(si0){
goto L1;
}
si0=l0;
si1=l1;
f8727(i,si0,si1);
si0=l0;
si0=i32_load(&i->m0,(U64)si0+8U);
l1=si0;
L1:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
si1=l1;
si2=28U;
si1*=si2;
si0+=si1;
l1=si0;
sj1=16ULL;
i64_store(&i->m0,(U64)si0+16U,sj1);
si0=l1;
si1=17360732U;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l1;
sj1=4294967313ULL;
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l1;
si1=17316292U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+8U);
si2=1U;
si1+=si2;
l1=si1;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l1;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+4U);
si0=si0 != si1;
if(si0){
goto L2;
}
si0=l0;
si1=l1;
f8727(i,si0,si1);
si0=l0;
si0=i32_load(&i->m0,(U64)si0+8U);
l1=si0;
L2:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
si1=l1;
si2=28U;
si1*=si2;
si0+=si1;
l1=si0;
sj1=512ULL;
i64_store(&i->m0,(U64)si0+16U,sj1);
si0=l1;
si1=17409460U;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l1;
sj1=4294967304ULL;
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l1;
si1=17316460U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+8U);
si2=1U;
si1+=si2;
l1=si1;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l1;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+4U);
si0=si0 != si1;
if(si0){
goto L3;
}
si0=l0;
si1=l1;
f8727(i,si0,si1);
si0=l0;
si0=i32_load(&i->m0,(U64)si0+8U);
l1=si0;
L3:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
si1=l1;
si2=28U;
si1*=si2;
si0+=si1;
l1=si0;
sj1=512ULL;
i64_store(&i->m0,(U64)si0+16U,sj1);
si0=l1;
si1=17407756U;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l1;
sj1=4294967304ULL;
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l1;
si1=17316499U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+8U);
si2=1U;
si1+=si2;
l1=si1;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l1;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+4U);
si0=si0 != si1;
if(si0){
goto L4;
}
si0=l0;
si1=l1;
f8727(i,si0,si1);
si0=l0;
si0=i32_load(&i->m0,(U64)si0+8U);
l1=si0;
L4:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
si1=l1;
si2=28U;
si1*=si2;
si0+=si1;
l1=si0;
sj1=512ULL;
i64_store(&i->m0,(U64)si0+16U,sj1);
si0=l1;
si1=17407900U;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l1;
sj1=4294967302ULL;
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l1;
si1=17316580U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+8U);
si2=1U;
si1+=si2;
l1=si1;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l1;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+4U);
si0=si0 != si1;
if(si0){
goto L5;
}
si0=l0;
si1=l1;
f8727(i,si0,si1);
si0=l0;
si0=i32_load(&i->m0,(U64)si0+8U);
l1=si0;
L5:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
si1=l1;
si2=28U;
si1*=si2;
si0+=si1;
l1=si0;
sj1=512ULL;
i64_store(&i->m0,(U64)si0+16U,sj1);
si0=l1;
si1=17412028U;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l1;
sj1=4294967302ULL;
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l1;
si1=17316586U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+8U);
si2=1U;
si1+=si2;
l1=si1;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l1;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+4U);
si0=si0 != si1;
if(si0){
goto L6;
}
si0=l0;
si1=l1;
f8727(i,si0,si1);
si0=l0;
si0=i32_load(&i->m0,(U64)si0+8U);
l1=si0;
L6:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
si1=l1;
si2=28U;
si1*=si2;
si0+=si1;
l1=si0;
sj1=512ULL;
i64_store(&i->m0,(U64)si0+16U,sj1);
si0=l1;
si1=17405908U;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l1;
sj1=4294967302ULL;
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l1;
si1=17316592U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+8U);
si2=1U;
si1+=si2;
l1=si1;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l1;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+4U);
si0=si0 != si1;
if(si0){
goto L7;
}
si0=l0;
si1=l1;
f8727(i,si0,si1);
si0=l0;
si0=i32_load(&i->m0,(U64)si0+8U);
l1=si0;
L7:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
si1=l1;
si2=28U;
si1*=si2;
si0+=si1;
l1=si0;
sj1=512ULL;
i64_store(&i->m0,(U64)si0+16U,sj1);
si0=l1;
si1=17412868U;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l1;
sj1=4294967302ULL;
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l1;
si1=17316598U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+8U);
si2=1U;
si1+=si2;
l1=si1;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l1;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+4U);
si0=si0 != si1;
if(si0){
goto L8;
}
si0=l0;
si1=l1;
f8727(i,si0,si1);
si0=l0;
si0=i32_load(&i->m0,(U64)si0+8U);
l1=si0;
L8:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
si1=l1;
si2=28U;
si1*=si2;
si0+=si1;
l1=si0;
sj1=512ULL;
i64_store(&i->m0,(U64)si0+16U,sj1);
si0=l1;
si1=17412412U;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l1;
sj1=4294967302ULL;
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l1;
si1=17316604U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+8U);
si2=1U;
si1+=si2;
l1=si1;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l1;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+4U);
si0=si0 != si1;
if(si0){
goto L9;
}
si0=l0;
si1=l1;
f8727(i,si0,si1);
si0=l0;
si0=i32_load(&i->m0,(U64)si0+8U);
l1=si0;
L9:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
si1=l1;
si2=28U;
si1*=si2;
si0+=si1;
l1=si0;
sj1=512ULL;
i64_store(&i->m0,(U64)si0+16U,sj1);
si0=l1;
si1=17412148U;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l1;
sj1=4294967302ULL;
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l1;
si1=17316610U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+8U);
si2=1U;
si1+=si2;
l1=si1;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l1;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+4U);
si0=si0 != si1;
if(si0){
goto L10;
}
si0=l0;
si1=l1;
f8727(i,si0,si1);
si0=l0;
si0=i32_load(&i->m0,(U64)si0+8U);
l1=si0;
L10:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
si1=l1;
si2=28U;
si1*=si2;
si0+=si1;
l1=si0;
sj1=512ULL;
i64_store(&i->m0,(U64)si0+16U,sj1);
si0=l1;
si1=17415604U;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l1;
sj1=4294967304ULL;
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l1;
si1=17316538U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+8U);
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0+8U,si1);
L0:;
}

void f5581(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U64 l8=0;
U32 si0,si1,si2,si3,si4;
U64 sj0,sj1,sj2;
si0=i->g0;
si1=192U;
si0-=si1;
l3=si0;
i->g0=si0;
si0=l1;
sj0=i64_load(&i->m0,(U64)si0+8U);
sj1=9081706509351201749ULL;
sj0^=sj1;
si1=l1;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
sj2=-2823113235131047888ULL;
sj1^=sj2;
sj0|=sj1;
si0=!(sj0);
if(si0){
goto L8;
}
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=31U;
si0=f15022(i,si0);
l1=si0;
si0=!(si0);
if(si0){
goto L7;
}
si0=l1;
si1=23U;
si0+=si1;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+17316530U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si1=16U;
si0+=si1;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+17316523U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si1=8U;
si0+=si1;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+17316515U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+17316507U);
i64_store(&i->m0,(U64)si0,sj1);
si0=1U;
l4=si0;
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
sj1=133143986207ULL;
i64_store(&i->m0,(U64)si0+76U,sj1);
si0=l3;
si1=l1;
i32_store(&i->m0,(U64)si0+72U,si1);
si0=l6;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 == si1;
if(si0){
goto L6;
}
si0=l2;
si1=l5;
si2=l3;
si3=72U;
si2+=si3;
si0=f11521(i,si0,si1,si2);
l1=si0;
goto L1;
L8:;
si0=l3;
si1=l1;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l1;
si1=76U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
si1=l7;
si1=i32_load8_u(&i->m0,(U64)si1);
l1=si1;
si2=1U;
si3=l1;
si1=si3?si1:si2;
i32_store8(&i->m0,(U64)si0,si1);
si0=l1;
si0=!(si0);
if(si0){
goto L9;
}
si0=l7;
sj1=l8;
si2=1000000000U;
si0=f1360(i,si0,sj1,si2);
L9:;
si0=l7;
si1=12U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si0=!(si0);
if(si0){
goto L10;
}
si0=l5;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
L11:;
{
si0=l1;
si0=!(si0);
if(si0){
goto L10;
}
si0=l5;
si1=l1;
si2=1U;
si1+=si2;
si2=l5;
si2=i32_load(&i->m0,(U64)si2);
l4=si2;
si3=l4;
si4=l1;
si3=si3 == si4;
si1=si3?si1:si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=l1;
si0=si0 != si1;
l6=si0;
si0=l4;
l1=si0;
si0=l6;
if(si0){
goto L11;
}
}
si0=l7;
si1=0U;
si2=l7;
si2=i32_load8_u(&i->m0,(U64)si2);
l1=si2;
si3=l1;
si4=1U;
si3=si3 == si4;
l1=si3;
si1=si3?si1:si2;
i32_store8(&i->m0,(U64)si0,si1);
si0=l1;
if(si0){
goto L4;
}
goto L5;
L10:;
si0=0U;
l5=si0;
si0=l7;
si1=0U;
si2=l7;
si2=i32_load8_u(&i->m0,(U64)si2);
l1=si2;
si3=l1;
si4=1U;
si3=si3 == si4;
l1=si3;
si1=si3?si1:si2;
i32_store8(&i->m0,(U64)si0,si1);
si0=l1;
si0=!(si0);
if(si0){
goto L5;
}
goto L3;
L7:;
si0=1U;
si1=31U;
f52(i,si0,si1);
UNREACHABLE;
L6:;
f14795(i);
UNREACHABLE;
L5:;
si0=l7;
si1=0U;
f1361(i,si0,si1);
L4:;
si0=l5;
si0=!(si0);
if(si0){
goto L3;
}
si0=l3;
si1=52U;
si0+=si1;
si1=l5;
si1=i32_load(&i->m0,(U64)si1+28U);
si2=56U;
si1+=si2;
f13757(i,si0,si1);
si0=l3;
si1=168U;
si0+=si1;
si1=20U;
si0+=si1;
si1=482U;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=168U;
si0+=si1;
si1=12U;
si0+=si1;
si1=843U;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=482U;
i32_store(&i->m0,(U64)si0+172U,si1);
si0=l3;
si1=l5;
i32_store(&i->m0,(U64)si0+68U,si1);
si0=l3;
si1=l3;
si2=68U;
si1+=si2;
i32_store(&i->m0,(U64)si0+184U,si1);
si0=l3;
si1=l3;
si2=52U;
si1+=si2;
i32_store(&i->m0,(U64)si0+176U,si1);
si0=l3;
si1=l3;
si2=8U;
si1+=si2;
i32_store(&i->m0,(U64)si0+168U,si1);
si0=l3;
si1=164U;
si0+=si1;
si1=3U;
i32_store8(&i->m0,(U64)si0,si1);
si0=l3;
si1=160U;
si0+=si1;
si1=4U;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=152U;
si0+=si1;
sj1=8589934624ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=144U;
si0+=si1;
si1=2U;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=132U;
si0+=si1;
si1=3U;
i32_store8(&i->m0,(U64)si0,si1);
si0=l3;
si1=72U;
si0+=si1;
si1=56U;
si0+=si1;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=120U;
si0+=si1;
sj1=4294967328ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=112U;
si0+=si1;
si1=2U;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=2U;
i32_store(&i->m0,(U64)si0+136U,si1);
si0=l3;
si1=2U;
i32_store(&i->m0,(U64)si0+104U,si1);
si0=l3;
si1=3U;
i32_store8(&i->m0,(U64)si0+100U,si1);
si0=l3;
si1=4U;
i32_store(&i->m0,(U64)si0+96U,si1);
si0=l3;
sj1=32ULL;
i64_store(&i->m0,(U64)si0+88U,sj1);
si0=l3;
si1=2U;
i32_store(&i->m0,(U64)si0+80U,si1);
si0=l3;
si1=2U;
i32_store(&i->m0,(U64)si0+72U,si1);
si0=l3;
si1=24U;
si0+=si1;
si1=20U;
si0+=si1;
si1=3U;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=4U;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l3;
si1=17311568U;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l3;
si1=l3;
si2=72U;
si1+=si2;
i32_store(&i->m0,(U64)si0+40U,si1);
si0=l3;
si1=24U;
si0+=si1;
si1=12U;
si0+=si1;
si1=3U;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=l3;
si2=168U;
si1+=si2;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l3;
si1=12U;
si0+=si1;
si1=l3;
si2=24U;
si1+=si2;
f64(i,si0,si1);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+52U);
switch(si0){
case 0:
goto L12;
case 1:
goto L15;
case 2:
goto L14;
case 3:
goto L13;
default:
goto L16;
}
L16:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+56U);
l1=si0;
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
goto L12;
}
si0=l1;
f1354(i,si0);
goto L12;
L15:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+56U);
l1=si0;
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
goto L12;
}
si0=l1;
si1=0U;
f1361(i,si0,si1);
goto L12;
L14:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+56U);
l1=si0;
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
goto L12;
}
si0=l1;
si1=0U;
f1361(i,si0,si1);
goto L12;
L13:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+56U);
l1=si0;
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
goto L12;
}
si0=l1;
f1354(i,si0);
L12:;
si0=l3;
si1=24U;
si0+=si1;
si1=8U;
si0+=si1;
si1=l3;
si2=12U;
si1+=si2;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=l3;
sj1=i64_load(&i->m0,(U64)si1+12U);
i64_store(&i->m0,(U64)si0+24U,sj1);
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
f5522(i,si0);
goto L2;
L3:;
si0=l3;
si1=188U;
si0+=si1;
si1=1U;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=180U;
si0+=si1;
si1=1U;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=482U;
i32_store(&i->m0,(U64)si0+56U,si1);
si0=l3;
si1=2U;
i32_store(&i->m0,(U64)si0+172U,si1);
si0=l3;
si1=17311608U;
i32_store(&i->m0,(U64)si0+168U,si1);
si0=l3;
si1=l3;
si2=8U;
si1+=si2;
i32_store(&i->m0,(U64)si0+52U,si1);
si0=l3;
si1=3U;
i32_store8(&i->m0,(U64)si0+100U,si1);
si0=l3;
si1=4U;
i32_store(&i->m0,(U64)si0+96U,si1);
si0=l3;
sj1=32ULL;
i64_store(&i->m0,(U64)si0+88U,sj1);
si0=l3;
si1=2U;
i32_store(&i->m0,(U64)si0+80U,si1);
si0=l3;
si1=2U;
i32_store(&i->m0,(U64)si0+72U,si1);
si0=l3;
si1=l3;
si2=72U;
si1+=si2;
i32_store(&i->m0,(U64)si0+184U,si1);
si0=l3;
si1=l3;
si2=52U;
si1+=si2;
i32_store(&i->m0,(U64)si0+176U,si1);
si0=l3;
si1=24U;
si0+=si1;
si1=l3;
si2=168U;
si1+=si2;
f64(i,si0,si1);
L2:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+28U);
l1=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+24U);
l4=si0;
if(si0){
goto L17;
}
si0=1U;
l4=si0;
goto L1;
L17:;
si0=l3;
si1=l3;
si1=i32_load(&i->m0,(U64)si1+32U);
i32_store(&i->m0,(U64)si0+80U,si1);
si0=l3;
si1=l1;
i32_store(&i->m0,(U64)si0+76U,si1);
si0=l3;
si1=l4;
i32_store(&i->m0,(U64)si0+72U,si1);
si0=0U;
l4=si0;
si0=l3;
si1=72U;
si0+=si1;
si1=l2;
si1=i32_load(&i->m0,(U64)si1+88U);
si2=8U;
si1+=si2;
si0=f8912(i,si0,si1);
l1=si0;
L1:;
si0=l0;
si1=l1;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l4;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=192U;
si0+=si1;
i->g0=si0;
L0:;
}

void f5582(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 l8=0;
U64 l9=0;
U32 si0,si1,si2,si3,si4,si5;
U64 sj0,sj1,sj2;
si0=i->g0;
si1=112U;
si0-=si1;
l4=si0;
i->g0=si0;
si0=l1;
sj0=i64_load(&i->m0,(U64)si0+8U);
sj1=9081706509351201749ULL;
sj0^=sj1;
si1=l1;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
sj2=-2823113235131047888ULL;
sj1^=sj2;
sj0|=sj1;
si0=!(sj0);
if(si0){
goto L10;
}
si0=l4;
si1=8U;
si0+=si1;
si1=l3;
si2=17314629U;
si3=35U;
si4=l1;
si5=l3;
f11542(i,si0,si1,si2,si3,si4,si5);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+12U);
l5=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+8U);
if(si0){
goto L12;
}
si0=l5;
si1=64U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si0=l5;
si1=68U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
if(si0){
goto L14;
}
si0=1U;
l7=si0;
goto L13;
L14:;
si0=l1;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L9;
}
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=l1;
si0=f15022(i,si0);
l7=si0;
si0=!(si0);
if(si0){
goto L8;
}
L13:;
si0=l7;
si1=l6;
si2=l1;
si0=f15143(i,si0,si1,si2);
l6=si0;
si0=l4;
si1=l1;
i32_store(&i->m0,(U64)si0+88U,si1);
si0=l4;
si1=l1;
i32_store(&i->m0,(U64)si0+84U,si1);
si0=l4;
si1=l6;
i32_store(&i->m0,(U64)si0+80U,si1);
goto L11;
L12:;
si0=l4;
si1=16U;
si0+=si1;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+28U);
si2=56U;
si1+=si2;
f13757(i,si0,si1);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+16U);
l6=si0;
switch(si0){
case 0:
goto L20;
case 1:
goto L19;
case 2:
goto L18;
case 3:
goto L17;
case 4:
goto L16;
default:
goto L20;
}
L20:;
si0=l4;
si1=24U;
si0+=si1;
l1=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+20U);
l7=si0;
goto L15;
L19:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=1U;
si0+=si1;
l7=si0;
si0=l4;
si1=24U;
si0+=si1;
l1=si0;
goto L15;
L18:;
si0=l4;
si1=28U;
si0+=si1;
l1=si0;
si0=l4;
si1=24U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
goto L15;
L17:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=4U;
si0+=si1;
l7=si0;
si0=l4;
si1=24U;
si0+=si1;
l1=si0;
goto L15;
L16:;
si0=l4;
si1=28U;
si0+=si1;
l1=si0;
si0=l4;
si1=24U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
L15:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
if(si0){
goto L22;
}
si0=1U;
l8=si0;
goto L21;
L22:;
si0=l1;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L9;
}
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=l1;
si0=f15022(i,si0);
l8=si0;
si0=!(si0);
if(si0){
goto L7;
}
L21:;
si0=l8;
si1=l7;
si2=l1;
si0=f15143(i,si0,si1,si2);
l7=si0;
si0=l4;
si1=l1;
i32_store(&i->m0,(U64)si0+88U,si1);
si0=l4;
si1=l1;
i32_store(&i->m0,(U64)si0+84U,si1);
si0=l4;
si1=l7;
i32_store(&i->m0,(U64)si0+80U,si1);
si0=l6;
switch(si0){
case 0:
goto L11;
case 1:
goto L25;
case 2:
goto L24;
case 3:
goto L23;
default:
goto L26;
}
L26:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+20U);
l1=si0;
si1=l1;
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
goto L11;
}
si0=l1;
f1354(i,si0);
goto L11;
L25:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+20U);
l1=si0;
si1=0U;
si2=l1;
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
goto L11;
}
si0=l1;
si1=0U;
f1361(i,si0,si1);
goto L11;
L24:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+20U);
l1=si0;
si1=0U;
si2=l1;
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
goto L11;
}
si0=l1;
si1=0U;
f1361(i,si0,si1);
goto L11;
L23:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+20U);
l1=si0;
si1=l1;
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
goto L11;
}
si0=l1;
f1354(i,si0);
L11:;
si0=l4;
si1=28U;
si0+=si1;
sj1=1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=17316452U;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l4;
si1=1987U;
i32_store(&i->m0,(U64)si0+108U,si1);
si0=l4;
si1=l4;
si2=104U;
si1+=si2;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l4;
si1=l4;
si2=80U;
si1+=si2;
i32_store(&i->m0,(U64)si0+104U,si1);
si0=l4;
si1=1U;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l4;
si1=92U;
si0+=si1;
si1=l4;
si2=16U;
si1+=si2;
f64(i,si0,si1);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+88U);
si1=504U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si1=l1;
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
si1=l1;
si2=l4;
si3=92U;
si2+=si3;
si0=f11521(i,si0,si1,si2);
l7=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+84U);
si0=!(si0);
if(si0){
goto L27;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0+80U);
f15024(i,si0);
L27:;
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
goto L28;
}
si0=l5;
f5522(i,si0);
L28:;
si0=l2;
si1=56U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si0=!(si0);
if(si0){
goto L29;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0+48U);
l1=si0;
L30:;
{
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si1=l6;
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
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
f5522(i,si0);
L31:;
si0=l1;
si1=4U;
si0+=si1;
l1=si0;
si0=l5;
si1=-1U;
si0+=si1;
l5=si0;
if(si0){
goto L30;
}
}
L29:;
si0=l2;
si1=52U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L32;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0+48U);
f15024(i,si0);
L32:;
si0=l2;
si1=20U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si0=!(si0);
if(si0){
goto L33;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0+16U);
si1=l1;
si2=2U;
si1<<=(si2&31);
si2=11U;
si1+=si2;
si2=-8U;
si1&=si2;
si0-=si1;
f15024(i,si0);
L33:;
si0=l2;
si1=40U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si0=!(si0);
if(si0){
goto L34;
}
si0=l2;
si1=32U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
L35:;
{
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
f15024(i,si0);
L36:;
si0=l1;
si1=12U;
si0+=si1;
l3=si0;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si1=l6;
si1=i32_load(&i->m0,(U64)si1);
l6=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l6;
si1=1U;
si0=si0 != si1;
if(si0){
goto L37;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
f5522(i,si0);
L37:;
si0=l1;
si1=20U;
si0+=si1;
l1=si0;
si0=l5;
si1=-1U;
si0+=si1;
l5=si0;
if(si0){
goto L35;
}
}
L34:;
si0=1U;
l5=si0;
si0=l2;
si1=36U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L2;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0+32U);
f15024(i,si0);
goto L2;
L10:;
si0=l4;
si1=16U;
si0+=si1;
si1=56U;
si0+=si1;
si1=l2;
si2=56U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=16U;
si0+=si1;
si1=48U;
si0+=si1;
si1=l2;
si2=48U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=16U;
si0+=si1;
si1=40U;
si0+=si1;
si1=l2;
si2=40U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=16U;
si0+=si1;
si1=32U;
si0+=si1;
si1=l2;
si2=32U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=16U;
si0+=si1;
si1=24U;
si0+=si1;
si1=l2;
si2=24U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=16U;
si0+=si1;
si1=16U;
si0+=si1;
si1=l2;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=16U;
si0+=si1;
si1=8U;
si0+=si1;
si1=l2;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=l2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+16U,sj1);
si0=1U;
l5=si0;
si0=l4;
si1=16U;
si0+=si1;
si1=l3;
si0=f8028(i,si0,si1);
l7=si0;
if(si0){
goto L2;
}
si0=l1;
si1=76U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si1=l2;
si1=i32_load8_u(&i->m0,(U64)si1);
l1=si1;
si2=1U;
si3=l1;
si1=si3?si1:si2;
i32_store8(&i->m0,(U64)si0,si1);
si0=l1;
si0=!(si0);
if(si0){
goto L38;
}
si0=l2;
sj1=l9;
si2=1000000000U;
si0=f1360(i,si0,sj1,si2);
L38:;
si0=l2;
si1=12U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
si0=!(si0);
if(si0){
goto L6;
}
si0=l7;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
L39:;
{
si0=l1;
si0=!(si0);
if(si0){
goto L6;
}
si0=l7;
si1=l1;
si2=1U;
si1+=si2;
si2=l7;
si2=i32_load(&i->m0,(U64)si2);
l5=si2;
si3=l5;
si4=l1;
si3=si3 == si4;
si1=si3?si1:si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=l1;
si0=si0 != si1;
l6=si0;
si0=l5;
l1=si0;
si0=l6;
if(si0){
goto L39;
}
}
si0=l2;
si1=0U;
si2=l2;
si2=i32_load8_u(&i->m0,(U64)si2);
l1=si2;
si3=l1;
si4=1U;
si3=si3 == si4;
l1=si3;
si1=si3?si1:si2;
i32_store8(&i->m0,(U64)si0,si1);
si0=l1;
if(si0){
goto L4;
}
goto L5;
L9:;
f53(i);
UNREACHABLE;
L8:;
si0=1U;
si1=l1;
f52(i,si0,si1);
UNREACHABLE;
L7:;
si0=1U;
si1=l1;
f52(i,si0,si1);
UNREACHABLE;
L6:;
si0=0U;
l7=si0;
si0=l2;
si1=0U;
si2=l2;
si2=i32_load8_u(&i->m0,(U64)si2);
l1=si2;
si3=l1;
si4=1U;
si3=si3 == si4;
l1=si3;
si1=si3?si1:si2;
i32_store8(&i->m0,(U64)si0,si1);
si0=l1;
if(si0){
goto L3;
}
L5:;
si0=l2;
si1=0U;
f1361(i,si0,si1);
L4:;
si0=0U;
l5=si0;
si0=l7;
if(si0){
goto L2;
}
L3:;
si0=l3;
si1=88U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=1280U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
si1=l7;
si1=i32_load(&i->m0,(U64)si1);
l1=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=0U;
l5=si0;
si0=l1;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 == si1;
if(si0){
goto L1;
}
L2:;
si0=l0;
si1=l7;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l5;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=112U;
si0+=si1;
i->g0=si0;
goto L0;
L1:;
f14795(i);
UNREACHABLE;
L0:;
}

void f5583(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 si0,si1,si2,si3;
U64 sj0,sj1,sj2;
si0=i->g0;
si1=16U;
si0-=si1;
l3=si0;
i->g0=si0;
si0=l1;
sj0=i64_load(&i->m0,(U64)si0+8U);
sj1=9081706509351201749ULL;
sj0^=sj1;
si1=l1;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
sj2=-2823113235131047888ULL;
sj1^=sj2;
sj0|=sj1;
sj1=0ULL;
si0=sj0 != sj1;
if(si0){
goto L4;
}
si0=l0;
si1=l1;
si2=l2;
f5576(i,si0,si1,si2);
goto L3;
L4:;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=31U;
si0=f15022(i,si0);
l1=si0;
si0=!(si0);
if(si0){
goto L2;
}
si0=l1;
si1=23U;
si0+=si1;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+17316491U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si1=16U;
si0+=si1;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+17316484U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si1=8U;
si0+=si1;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+17316476U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+17316468U);
i64_store(&i->m0,(U64)si0,sj1);
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
si0=l3;
sj1=133143986207ULL;
i64_store(&i->m0,(U64)si0+8U,sj1);
si0=l3;
si1=l1;
i32_store(&i->m0,(U64)si0+4U,si1);
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
si3=4U;
si2+=si3;
si0=f11521(i,si0,si1,si2);
l1=si0;
si0=l0;
si1=1U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l1;
i32_store(&i->m0,(U64)si0+4U,si1);
L3:;
si0=l3;
si1=16U;
si0+=si1;
i->g0=si0;
goto L0;
L2:;
si0=1U;
si1=31U;
f52(i,si0,si1);
UNREACHABLE;
L1:;
f14795(i);
UNREACHABLE;
L0:;
}

void f5584(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4) {
U32 l5=0;
U32 si0,si1,si2,si3,si4;
U64 sj0,sj1,sj2;
si0=i->g0;
si1=64U;
si0-=si1;
l5=si0;
i->g0=si0;
si0=l1;
sj0=i64_load(&i->m0,(U64)si0+8U);
sj1=9081706509351201749ULL;
sj0^=sj1;
si1=l1;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
sj2=-2823113235131047888ULL;
sj1^=sj2;
sj0|=sj1;
sj1=0ULL;
si0=sj0 != sj1;
if(si0){
goto L3;
}
si0=l5;
si1=l4;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l5;
si1=l1;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l5;
si1=l2;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l3;
si1=255U;
si0&=si1;
si1=-3U;
si0+=si1;
switch(si0){
case 0:
goto L6;
case 1:
goto L5;
default:
goto L7;
}
L7:;
si0=l0;
sj1=513ULL;
i64_store(&i->m0,(U64)si0,sj1);
goto L2;
L6:;
si0=l5;
si1=12U;
si0+=si1;
si1=l5;
si2=24U;
si1+=si2;
f9789(i,si0,si1);
si0=l5;
si0=i32_load8_u(&i->m0,(U64)si0+12U);
if(si0){
goto L8;
}
si0=l5;
si1=2U;
si2=l5;
si2=i32_load8_u(&i->m0,(U64)si2+13U);
l1=si2;
si3=1U;
si2^=si3;
si3=l1;
si4=2U;
si3=si3 == si4;
si1=si3?si1:si2;
i32_store8(&i->m0,(U64)si0+57U,si1);
si0=0U;
l1=si0;
goto L4;
L8:;
si0=l5;
si1=l5;
si1=i32_load(&i->m0,(U64)si1+16U);
i32_store(&i->m0,(U64)si0+60U,si1);
si0=1U;
l1=si0;
goto L4;
L5:;
si0=l5;
si1=56U;
si0+=si1;
si1=l5;
si2=24U;
si1+=si2;
f9789(i,si0,si1);
si0=l5;
si0=i32_load8_u(&i->m0,(U64)si0+56U);
l1=si0;
L4:;
si0=l1;
si1=255U;
si0&=si1;
if(si0){
goto L9;
}
si0=l0;
si1=l5;
sj1=i64_load8_u(&i->m0,(U64)si1+57U);
sj2=8ULL;
sj1<<=(sj2&63);
sj2=1ULL;
sj1|=sj2;
i64_store(&i->m0,(U64)si0,sj1);
goto L2;
L9:;
si0=l0;
si1=l5;
si1=i32_load(&i->m0,(U64)si1+60U);
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=2U;
i32_store8(&i->m0,(U64)si0,si1);
goto L2;
L3:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+88U);
l1=si0;
si0=l3;
si1=255U;
si0&=si1;
si1=-1U;
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
case 4:
goto L12;
case 5:
goto L11;
default:
goto L16;
}
L16:;
si0=l1;
si1=924U;
si0+=si1;
l1=si0;
goto L10;
L15:;
si0=l1;
si1=808U;
si0+=si1;
l1=si0;
goto L10;
L14:;
si0=l1;
si1=964U;
si0+=si1;
l1=si0;
goto L10;
L13:;
si0=l1;
si1=748U;
si0+=si1;
l1=si0;
goto L10;
L12:;
si0=l1;
si1=908U;
si0+=si1;
l1=si0;
goto L10;
L11:;
si0=l1;
si1=780U;
si0+=si1;
l1=si0;
L10:;
si0=l5;
si1=36U;
si0+=si1;
sj1=1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=1028U;
i32_store(&i->m0,(U64)si0+52U,si1);
si0=l5;
si1=17316572U;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l5;
si1=l1;
si1=i32_load(&i->m0,(U64)si1);
si2=64U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+56U,sj1);
si0=l5;
si1=l5;
si2=56U;
si1+=si2;
i32_store(&i->m0,(U64)si0+48U,si1);
si0=l5;
si1=l5;
si2=48U;
si1+=si2;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l5;
si1=1U;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l5;
si1=12U;
si0+=si1;
si1=l5;
si2=24U;
si1+=si2;
f64(i,si0,si1);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+88U);
si1=504U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si1=l1;
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
si0=l4;
si1=l1;
si2=l5;
si3=12U;
si2+=si3;
si0=f11521(i,si0,si1,si2);
l1=si0;
si0=l0;
si1=2U;
i32_store8(&i->m0,(U64)si0,si1);
si0=l0;
si1=l1;
i32_store(&i->m0,(U64)si0+4U,si1);
L2:;
si0=l5;
si1=64U;
si0+=si1;
i->g0=si0;
goto L0;
L1:;
f14795(i);
UNREACHABLE;
L0:;
}

void f5585(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 l8=0;
U32 l9=0;
U32 si0,si1,si2,si3,si4,si5;
U64 sj1;
si0=i->g0;
si1=48U;
si0-=si1;
l4=si0;
i->g0=si0;
si0=l4;
si1=12U;
si0+=si1;
si1=l2;
si2=l3;
f8077(i,si0,si1,si2);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+16U);
l5=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+12U);
l2=si0;
si0=!(si0);
if(si0){
goto L5;
}
si0=0U;
l6=si0;
si0=0U;
l7=si0;
si0=l1;
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
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+88U);
l8=si0;
si0=64U;
si0=f15022(i,si0);
l7=si0;
si0=!(si0);
if(si0){
goto L2;
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
si0=l4;
si1=8U;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l7;
si1=8U;
si0+=si1;
sj1=-1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=40U;
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
l9=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
sj1=0ULL;
i64_store(&i->m0,(U64)si0+32U,sj1);
si0=l4;
sj1=34359738376ULL;
i64_store(&i->m0,(U64)si0+20U,sj1);
si0=l4;
si1=l7;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l4;
si1=0U;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l9;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 == si1;
if(si0){
goto L1;
}
si0=l4;
si1=12U;
si0+=si1;
si1=l8;
si2=0U;
si0=f5913(i,si0,si1,si2);
l7=si0;
L6:;
si0=l2;
si1=44U;
si0+=si1;
si1=l2;
si2=l1;
si3=l3;
si3=i32_load(&i->m0,(U64)si3+88U);
si4=264U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si4=l1;
si3=si3 == si4;
si4=l5;
si5=l7;
si0=f5890(i,si0,si1,si2,si3,si4,si5);
l5=si0;
si0=l2;
si1=l2;
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
si0=l1;
si1=l1;
si1=i32_load(&i->m0,(U64)si1);
l7=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=1U;
l6=si0;
si0=l1;
l2=si0;
si0=l7;
si1=1U;
si0=si0 != si1;
if(si0){
goto L3;
}
L4:;
si0=l2;
f5522(i,si0);
L3:;
si0=l0;
si1=l5;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l6;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=48U;
si0+=si1;
i->g0=si0;
goto L0;
L2:;
si0=8U;
si1=64U;
f52(i,si0,si1);
UNREACHABLE;
L1:;
f14795(i);
UNREACHABLE;
L0:;
}

void f5586(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 l8=0;
U32 l9=0;
U32 si0,si1,si2,si3,si4,si5,si6;
U64 sj0,sj1,sj2;
si0=i->g0;
si1=64U;
si0-=si1;
l4=si0;
i->g0=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+88U);
l5=si0;
si1=96U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+28U);
l7=si1;
si0=si0 == si1;
if(si0){
goto L5;
}
si0=l7;
si1=468U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=2U;
si0<<=(si1&31);
l8=si0;
si0=l7;
si1=460U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
L6:;
{
si0=l8;
si0=!(si0);
if(si0){
goto L4;
}
si0=l8;
si1=-4U;
si0+=si1;
l8=si0;
si0=l7;
si0=i32_load(&i->m0,(U64)si0);
l9=si0;
si0=l7;
si1=4U;
si0+=si1;
l7=si0;
si0=l9;
si1=l6;
si0=si0 != si1;
if(si0){
goto L6;
}
}
L5:;
si0=l1;
sj0=i64_load(&i->m0,(U64)si0+8U);
sj1=8080311700465507813ULL;
sj0^=sj1;
si1=l1;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
sj2=3405249472825529671ULL;
sj1^=sj2;
sj0|=sj1;
sj1=0ULL;
si0=sj0 != sj1;
if(si0){
goto L7;
}
si0=l4;
si1=l1;
si2=56U;
si1+=si2;
f11349(i,si0,si1);
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
l8=si0;
if(si0){
goto L8;
}
si0=l0;
si1=l4;
si1=i32_load(&i->m0,(U64)si1+4U);
i32_store(&i->m0,(U64)si0+4U,si1);
goto L1;
L8:;
si0=l4;
si1=36U;
si0+=si1;
sj1=1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=17367008U;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l4;
si1=1028U;
i32_store(&i->m0,(U64)si0+52U,si1);
si0=l4;
si1=5U;
i32_store(&i->m0,(U64)si0+60U,si1);
si0=l4;
si1=17367026U;
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
si1=12U;
si0+=si1;
si1=l4;
si2=24U;
si1+=si2;
f64(i,si0,si1);
si0=l2;
si0=i32_load(&i->m0,(U64)si0+88U);
si1=352U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
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
goto L3;
}
si0=l0;
si1=l2;
si2=l7;
si3=l4;
si4=12U;
si3+=si4;
si1=f11521(i,si1,si2,si3);
i32_store(&i->m0,(U64)si0+4U,si1);
goto L1;
L7:;
si0=l0;
si1=l3;
si2=17462072U;
si3=7U;
si4=l5;
si5=476U;
si4+=si5;
si4=i32_load(&i->m0,(U64)si4);
si5=l6;
si6=l1;
si1=f11342(i,si1,si2,si3,si4,si5,si6);
i32_store(&i->m0,(U64)si0+4U,si1);
goto L2;
L4:;
si0=l0;
si1=l3;
si2=17462079U;
si3=4U;
si4=l5;
si5=504U;
si4+=si5;
si4=i32_load(&i->m0,(U64)si4);
si5=l6;
si6=l1;
si1=f11342(i,si1,si2,si3,si4,si5,si6);
i32_store(&i->m0,(U64)si0+4U,si1);
goto L2;
L3:;
f14795(i);
UNREACHABLE;
L2:;
si0=1U;
l8=si0;
L1:;
si0=l0;
si1=l8;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=64U;
si0+=si1;
i->g0=si0;
L0:;
}

void f5587(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 l8=0;
U32 l9=0;
U64 l10=0;
U64 l11=0;
U32 si0,si1,si2,si3,si4,si5,si6;
U64 sj0,sj1,sj2;
si0=i->g0;
si1=80U;
si0-=si1;
l4=si0;
i->g0=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+88U);
l5=si0;
si1=96U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+28U);
l7=si1;
si0=si0 == si1;
if(si0){
goto L5;
}
si0=l7;
si1=468U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=2U;
si0<<=(si1&31);
l8=si0;
si0=l7;
si1=460U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
L6:;
{
si0=l8;
si0=!(si0);
if(si0){
goto L4;
}
si0=l8;
si1=-4U;
si0+=si1;
l8=si0;
si0=l7;
si0=i32_load(&i->m0,(U64)si0);
l9=si0;
si0=l7;
si1=4U;
si0+=si1;
l7=si0;
si0=l9;
si1=l6;
si0=si0 != si1;
if(si0){
goto L6;
}
}
L5:;
si0=l1;
sj0=i64_load(&i->m0,(U64)si0+8U);
sj1=8080311700465507813ULL;
sj0^=sj1;
si1=l1;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
sj2=3405249472825529671ULL;
sj1^=sj2;
sj0|=sj1;
sj1=0ULL;
si0=sj0 != sj1;
if(si0){
goto L7;
}
si0=l4;
si1=l1;
si2=56U;
si1+=si2;
f11344(i,si0,si1);
si0=l4;
sj0=i64_load(&i->m0,(U64)si0);
sj1=4294967295ULL;
sj0&=sj1;
l10=sj0;
sj1=0ULL;
si0=sj0 != sj1;
if(si0){
goto L9;
}
si0=l4;
si1=16U;
si0+=si1;
sj0=i64_load(&i->m0,(U64)si0);
l11=sj0;
si0=l0;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1+8U);
i64_store(&i->m0,(U64)si0+8U,sj1);
si0=l0;
si1=16U;
si0+=si1;
sj1=l11;
i64_store(&i->m0,(U64)si0,sj1);
goto L8;
L9:;
si0=l4;
si1=52U;
si0+=si1;
sj1=1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=17367008U;
i32_store(&i->m0,(U64)si0+40U,si1);
si0=l4;
si1=1028U;
i32_store(&i->m0,(U64)si0+68U,si1);
si0=l4;
si1=4U;
i32_store(&i->m0,(U64)si0+76U,si1);
si0=l4;
si1=17367045U;
i32_store(&i->m0,(U64)si0+72U,si1);
si0=l4;
si1=l4;
si2=64U;
si1+=si2;
i32_store(&i->m0,(U64)si0+48U,si1);
si0=l4;
si1=l4;
si2=72U;
si1+=si2;
i32_store(&i->m0,(U64)si0+64U,si1);
si0=l4;
si1=1U;
i32_store(&i->m0,(U64)si0+44U,si1);
si0=l4;
si1=28U;
si0+=si1;
si1=l4;
si2=40U;
si1+=si2;
f64(i,si0,si1);
si0=l2;
si0=i32_load(&i->m0,(U64)si0+88U);
si1=352U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l8=si0;
si1=l8;
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
si0=l0;
si1=l2;
si2=l8;
si3=l4;
si4=28U;
si3+=si4;
si1=f11521(i,si1,si2,si3);
i32_store(&i->m0,(U64)si0+4U,si1);
L8:;
sj0=l10;
sj1=0ULL;
si0=sj0 != sj1;
l8=si0;
goto L1;
L7:;
si0=l0;
si1=l3;
si2=17462072U;
si3=7U;
si4=l5;
si5=476U;
si4+=si5;
si4=i32_load(&i->m0,(U64)si4);
si5=l6;
si6=l1;
si1=f11342(i,si1,si2,si3,si4,si5,si6);
i32_store(&i->m0,(U64)si0+4U,si1);
goto L2;
L4:;
si0=l0;
si1=l3;
si2=17462079U;
si3=4U;
si4=l5;
si5=504U;
si4+=si5;
si4=i32_load(&i->m0,(U64)si4);
si5=l6;
si6=l1;
si1=f11342(i,si1,si2,si3,si4,si5,si6);
i32_store(&i->m0,(U64)si0+4U,si1);
goto L2;
L3:;
f14795(i);
UNREACHABLE;
L2:;
si0=1U;
l8=si0;
L1:;
si0=l0;
si1=l8;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=80U;
si0+=si1;
i->g0=si0;
L0:;
}

void f5588(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 l8=0;
U32 l9=0;
U64 l10=0;
U32 si0,si1,si2,si3,si4,si5,si6;
U64 sj0,sj1,sj2;
si0=i->g0;
si1=64U;
si0-=si1;
l4=si0;
i->g0=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+88U);
l5=si0;
si1=96U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+28U);
l7=si1;
si0=si0 == si1;
if(si0){
goto L5;
}
si0=l7;
si1=468U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=2U;
si0<<=(si1&31);
l8=si0;
si0=l7;
si1=460U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
L6:;
{
si0=l8;
si0=!(si0);
if(si0){
goto L4;
}
si0=l8;
si1=-4U;
si0+=si1;
l8=si0;
si0=l7;
si0=i32_load(&i->m0,(U64)si0);
l9=si0;
si0=l7;
si1=4U;
si0+=si1;
l7=si0;
si0=l9;
si1=l6;
si0=si0 != si1;
if(si0){
goto L6;
}
}
L5:;
si0=l1;
sj0=i64_load(&i->m0,(U64)si0+8U);
sj1=8080311700465507813ULL;
sj0^=sj1;
si1=l1;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
sj2=3405249472825529671ULL;
sj1^=sj2;
sj0|=sj1;
sj1=0ULL;
si0=sj0 != sj1;
if(si0){
goto L7;
}
si0=1U;
l8=si0;
si0=l1;
si1=72U;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L8;
}
si0=1U;
l8=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+56U);
if(si0){
goto L8;
}
si0=l1;
si1=64U;
si0+=si1;
sj0=i64_load(&i->m0,(U64)si0);
l10=sj0;
sj1=4294967295ULL;
si0=sj0 > sj1;
l8=si0;
if(si0){
goto L8;
}
si0=l0;
sj1=l10;
si1=(U32)(sj1);
i32_store(&i->m0,(U64)si0+4U,si1);
si0=0U;
l8=si0;
goto L1;
L8:;
si0=l4;
si1=36U;
si0+=si1;
sj1=1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=17367008U;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l4;
si1=1028U;
i32_store(&i->m0,(U64)si0+52U,si1);
si0=l4;
si1=5U;
i32_store(&i->m0,(U64)si0+60U,si1);
si0=l4;
si1=17367019U;
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
si1=12U;
si0+=si1;
si1=l4;
si2=24U;
si1+=si2;
f64(i,si0,si1);
si0=l2;
si0=i32_load(&i->m0,(U64)si0+88U);
si1=352U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
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
goto L3;
}
si0=l0;
si1=l2;
si2=l7;
si3=l4;
si4=12U;
si3+=si4;
si1=f11521(i,si1,si2,si3);
i32_store(&i->m0,(U64)si0+4U,si1);
goto L1;
L7:;
si0=l0;
si1=l3;
si2=17462072U;
si3=7U;
si4=l5;
si5=476U;
si4+=si5;
si4=i32_load(&i->m0,(U64)si4);
si5=l6;
si6=l1;
si1=f11342(i,si1,si2,si3,si4,si5,si6);
i32_store(&i->m0,(U64)si0+4U,si1);
goto L2;
L4:;
si0=l0;
si1=l3;
si2=17462079U;
si3=4U;
si4=l5;
si5=504U;
si4+=si5;
si4=i32_load(&i->m0,(U64)si4);
si5=l6;
si6=l1;
si1=f11342(i,si1,si2,si3,si4,si5,si6);
i32_store(&i->m0,(U64)si0+4U,si1);
goto L2;
L3:;
f14795(i);
UNREACHABLE;
L2:;
si0=1U;
l8=si0;
L1:;
si0=l0;
si1=l8;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=64U;
si0+=si1;
i->g0=si0;
L0:;
}

void f5589(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 l8=0;
U32 l9=0;
U32 si0,si1,si2,si3,si4,si5,si6;
U64 sj0,sj1,sj2;
si0=i->g0;
si1=64U;
si0-=si1;
l4=si0;
i->g0=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+88U);
l5=si0;
si1=96U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+28U);
l7=si1;
si0=si0 == si1;
if(si0){
goto L5;
}
si0=l7;
si1=468U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=2U;
si0<<=(si1&31);
l8=si0;
si0=l7;
si1=460U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
L6:;
{
si0=l8;
si0=!(si0);
if(si0){
goto L4;
}
si0=l8;
si1=-4U;
si0+=si1;
l8=si0;
si0=l7;
si0=i32_load(&i->m0,(U64)si0);
l9=si0;
si0=l7;
si1=4U;
si0+=si1;
l7=si0;
si0=l9;
si1=l6;
si0=si0 != si1;
if(si0){
goto L6;
}
}
L5:;
si0=l1;
sj0=i64_load(&i->m0,(U64)si0+8U);
sj1=8080311700465507813ULL;
sj0^=sj1;
si1=l1;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
sj2=3405249472825529671ULL;
sj1^=sj2;
sj0|=sj1;
sj1=0ULL;
si0=sj0 != sj1;
if(si0){
goto L7;
}
si0=l1;
si1=72U;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
si0=!(si0);
si1=l1;
si1=i32_load(&i->m0,(U64)si1+56U);
si2=0U;
si1=si1 != si2;
si0|=si1;
l8=si0;
if(si0){
goto L8;
}
si0=l0;
si1=l1;
si2=64U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+8U,sj1);
goto L1;
L8:;
si0=l4;
si1=36U;
si0+=si1;
sj1=1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=17367008U;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l4;
si1=1028U;
i32_store(&i->m0,(U64)si0+52U,si1);
si0=l4;
si1=3U;
i32_store(&i->m0,(U64)si0+60U,si1);
si0=l4;
si1=17367031U;
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
si1=12U;
si0+=si1;
si1=l4;
si2=24U;
si1+=si2;
f64(i,si0,si1);
si0=l2;
si0=i32_load(&i->m0,(U64)si0+88U);
si1=352U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
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
goto L3;
}
si0=l0;
si1=l2;
si2=l7;
si3=l4;
si4=12U;
si3+=si4;
si1=f11521(i,si1,si2,si3);
i32_store(&i->m0,(U64)si0+4U,si1);
goto L1;
L7:;
si0=l0;
si1=l3;
si2=17462072U;
si3=7U;
si4=l5;
si5=476U;
si4+=si5;
si4=i32_load(&i->m0,(U64)si4);
si5=l6;
si6=l1;
si1=f11342(i,si1,si2,si3,si4,si5,si6);
i32_store(&i->m0,(U64)si0+4U,si1);
goto L2;
L4:;
si0=l0;
si1=l3;
si2=17462079U;
si3=4U;
si4=l5;
si5=504U;
si4+=si5;
si4=i32_load(&i->m0,(U64)si4);
si5=l6;
si6=l1;
si1=f11342(i,si1,si2,si3,si4,si5,si6);
i32_store(&i->m0,(U64)si0+4U,si1);
goto L2;
L3:;
f14795(i);
UNREACHABLE;
L2:;
si0=1U;
l8=si0;
L1:;
si0=l0;
si1=l8;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=64U;
si0+=si1;
i->g0=si0;
L0:;
}

void f5590(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 l8=0;
U32 l9=0;
U64 l10=0;
U32 si0,si1,si2,si3,si4,si5,si6;
U64 sj0,sj1,sj2;
si0=i->g0;
si1=80U;
si0-=si1;
l4=si0;
i->g0=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+88U);
l5=si0;
si1=96U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+28U);
l7=si1;
si0=si0 == si1;
if(si0){
goto L5;
}
si0=l7;
si1=468U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=2U;
si0<<=(si1&31);
l8=si0;
si0=l7;
si1=460U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
L6:;
{
si0=l8;
si0=!(si0);
if(si0){
goto L4;
}
si0=l8;
si1=-4U;
si0+=si1;
l8=si0;
si0=l7;
si0=i32_load(&i->m0,(U64)si0);
l9=si0;
si0=l7;
si1=4U;
si0+=si1;
l7=si0;
si0=l9;
si1=l6;
si0=si0 != si1;
if(si0){
goto L6;
}
}
L5:;
si0=l1;
sj0=i64_load(&i->m0,(U64)si0+8U);
sj1=8080311700465507813ULL;
sj0^=sj1;
si1=l1;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
sj2=3405249472825529671ULL;
sj1^=sj2;
sj0|=sj1;
sj1=0ULL;
si0=sj0 != sj1;
if(si0){
goto L7;
}
si0=l4;
si1=8U;
si0+=si1;
si1=l1;
si2=56U;
si1+=si2;
f11347(i,si0,si1);
si0=l4;
sj0=i64_load(&i->m0,(U64)si0+8U);
sj1=4294967295ULL;
sj0&=sj1;
l10=sj0;
sj1=0ULL;
si0=sj0 != sj1;
if(si0){
goto L9;
}
si0=l0;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1+16U);
i64_store(&i->m0,(U64)si0+8U,sj1);
goto L8;
L9:;
si0=l4;
si1=52U;
si0+=si1;
sj1=1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=17367008U;
i32_store(&i->m0,(U64)si0+40U,si1);
si0=l4;
si1=1028U;
i32_store(&i->m0,(U64)si0+68U,si1);
si0=l4;
si1=3U;
i32_store(&i->m0,(U64)si0+76U,si1);
si0=l4;
si1=17367037U;
i32_store(&i->m0,(U64)si0+72U,si1);
si0=l4;
si1=l4;
si2=64U;
si1+=si2;
i32_store(&i->m0,(U64)si0+48U,si1);
si0=l4;
si1=l4;
si2=72U;
si1+=si2;
i32_store(&i->m0,(U64)si0+64U,si1);
si0=l4;
si1=1U;
i32_store(&i->m0,(U64)si0+44U,si1);
si0=l4;
si1=28U;
si0+=si1;
si1=l4;
si2=40U;
si1+=si2;
f64(i,si0,si1);
si0=l2;
si0=i32_load(&i->m0,(U64)si0+88U);
si1=352U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l8=si0;
si1=l8;
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
si0=l0;
si1=l2;
si2=l8;
si3=l4;
si4=28U;
si3+=si4;
si1=f11521(i,si1,si2,si3);
i32_store(&i->m0,(U64)si0+4U,si1);
L8:;
sj0=l10;
sj1=0ULL;
si0=sj0 != sj1;
l8=si0;
goto L1;
L7:;
si0=l0;
si1=l3;
si2=17462072U;
si3=7U;
si4=l5;
si5=476U;
si4+=si5;
si4=i32_load(&i->m0,(U64)si4);
si5=l6;
si6=l1;
si1=f11342(i,si1,si2,si3,si4,si5,si6);
i32_store(&i->m0,(U64)si0+4U,si1);
goto L2;
L4:;
si0=l0;
si1=l3;
si2=17462079U;
si3=4U;
si4=l5;
si5=504U;
si4+=si5;
si4=i32_load(&i->m0,(U64)si4);
si5=l6;
si6=l1;
si1=f11342(i,si1,si2,si3,si4,si5,si6);
i32_store(&i->m0,(U64)si0+4U,si1);
goto L2;
L3:;
f14795(i);
UNREACHABLE;
L2:;
si0=1U;
l8=si0;
L1:;
si0=l0;
si1=l8;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=80U;
si0+=si1;
i->g0=si0;
L0:;
}

void f5591(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 l8=0;
U32 l9=0;
U64 l10=0;
U32 si0,si1,si2,si3,si4,si5,si6;
U64 sj0,sj1,sj2;
si0=i->g0;
si1=64U;
si0-=si1;
l4=si0;
i->g0=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+88U);
l5=si0;
si1=96U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+28U);
l7=si1;
si0=si0 == si1;
if(si0){
goto L5;
}
si0=l7;
si1=468U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=2U;
si0<<=(si1&31);
l8=si0;
si0=l7;
si1=460U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
L6:;
{
si0=l8;
si0=!(si0);
if(si0){
goto L4;
}
si0=l8;
si1=-4U;
si0+=si1;
l8=si0;
si0=l7;
si0=i32_load(&i->m0,(U64)si0);
l9=si0;
si0=l7;
si1=4U;
si0+=si1;
l7=si0;
si0=l9;
si1=l6;
si0=si0 != si1;
if(si0){
goto L6;
}
}
L5:;
si0=l1;
sj0=i64_load(&i->m0,(U64)si0+8U);
sj1=8080311700465507813ULL;
sj0^=sj1;
si1=l1;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
sj2=3405249472825529671ULL;
sj1^=sj2;
sj0|=sj1;
sj1=0ULL;
si0=sj0 != sj1;
if(si0){
goto L7;
}
si0=1U;
l8=si0;
si0=l1;
si1=72U;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L8;
}
si0=1U;
l8=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+56U);
if(si0){
goto L8;
}
si0=l1;
si1=64U;
si0+=si1;
sj0=i64_load(&i->m0,(U64)si0);
l10=sj0;
sj1=4294967295ULL;
si0=sj0 > sj1;
l8=si0;
if(si0){
goto L8;
}
si0=l0;
sj1=l10;
si1=(U32)(sj1);
i32_store(&i->m0,(U64)si0+4U,si1);
si0=0U;
l8=si0;
goto L1;
L8:;
si0=l4;
si1=36U;
si0+=si1;
sj1=1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=17367008U;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l4;
si1=1028U;
i32_store(&i->m0,(U64)si0+52U,si1);
si0=l4;
si1=3U;
i32_store(&i->m0,(U64)si0+60U,si1);
si0=l4;
si1=17367016U;
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
si1=12U;
si0+=si1;
si1=l4;
si2=24U;
si1+=si2;
f64(i,si0,si1);
si0=l2;
si0=i32_load(&i->m0,(U64)si0+88U);
si1=352U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
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
goto L3;
}
si0=l0;
si1=l2;
si2=l7;
si3=l4;
si4=12U;
si3+=si4;
si1=f11521(i,si1,si2,si3);
i32_store(&i->m0,(U64)si0+4U,si1);
goto L1;
L7:;
si0=l0;
si1=l3;
si2=17462072U;
si3=7U;
si4=l5;
si5=476U;
si4+=si5;
si4=i32_load(&i->m0,(U64)si4);
si5=l6;
si6=l1;
si1=f11342(i,si1,si2,si3,si4,si5,si6);
i32_store(&i->m0,(U64)si0+4U,si1);
goto L2;
L4:;
si0=l0;
si1=l3;
si2=17462079U;
si3=4U;
si4=l5;
si5=504U;
si4+=si5;
si4=i32_load(&i->m0,(U64)si4);
si5=l6;
si6=l1;
si1=f11342(i,si1,si2,si3,si4,si5,si6);
i32_store(&i->m0,(U64)si0+4U,si1);
goto L2;
L3:;
f14795(i);
UNREACHABLE;
L2:;
si0=1U;
l8=si0;
L1:;
si0=l0;
si1=l8;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=64U;
si0+=si1;
i->g0=si0;
L0:;
}

void f5592(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 l8=0;
U32 l9=0;
U64 l10=0;
U32 si0,si1,si2,si3,si4,si5,si6;
U64 sj0,sj1,sj2;
si0=i->g0;
si1=64U;
si0-=si1;
l4=si0;
i->g0=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+88U);
l5=si0;
si1=96U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+28U);
l7=si1;
si0=si0 == si1;
if(si0){
goto L5;
}
si0=l7;
si1=468U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=2U;
si0<<=(si1&31);
l8=si0;
si0=l7;
si1=460U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
L6:;
{
si0=l8;
si0=!(si0);
if(si0){
goto L4;
}
si0=l8;
si1=-4U;
si0+=si1;
l8=si0;
si0=l7;
si0=i32_load(&i->m0,(U64)si0);
l9=si0;
si0=l7;
si1=4U;
si0+=si1;
l7=si0;
si0=l9;
si1=l6;
si0=si0 != si1;
if(si0){
goto L6;
}
}
L5:;
si0=l1;
sj0=i64_load(&i->m0,(U64)si0+8U);
sj1=8080311700465507813ULL;
sj0^=sj1;
si1=l1;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
sj2=3405249472825529671ULL;
sj1^=sj2;
sj0|=sj1;
sj1=0ULL;
si0=sj0 != sj1;
if(si0){
goto L7;
}
si0=l1;
si1=72U;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L8;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+56U);
if(si0){
goto L8;
}
si0=l1;
si1=64U;
si0+=si1;
sj0=i64_load(&i->m0,(U64)si0);
l10=sj0;
sj1=255ULL;
si0=sj0 > sj1;
if(si0){
goto L8;
}
si0=l0;
sj1=l10;
i64_store8(&i->m0,(U64)si0+1U,sj1);
si0=0U;
l8=si0;
goto L1;
L8:;
si0=l4;
si1=36U;
si0+=si1;
sj1=1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=17367008U;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l4;
si1=1028U;
i32_store(&i->m0,(U64)si0+52U,si1);
si0=l4;
si1=2U;
i32_store(&i->m0,(U64)si0+60U,si1);
si0=l4;
si1=17367040U;
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
si0=1U;
l8=si0;
si0=l4;
si1=1U;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l4;
si1=12U;
si0+=si1;
si1=l4;
si2=24U;
si1+=si2;
f64(i,si0,si1);
si0=l2;
si0=i32_load(&i->m0,(U64)si0+88U);
si1=352U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
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
goto L3;
}
si0=l0;
si1=l2;
si2=l7;
si3=l4;
si4=12U;
si3+=si4;
si1=f11521(i,si1,si2,si3);
i32_store(&i->m0,(U64)si0+4U,si1);
goto L1;
L7:;
si0=l0;
si1=l3;
si2=17462072U;
si3=7U;
si4=l5;
si5=476U;
si4+=si5;
si4=i32_load(&i->m0,(U64)si4);
si5=l6;
si6=l1;
si1=f11342(i,si1,si2,si3,si4,si5,si6);
i32_store(&i->m0,(U64)si0+4U,si1);
goto L2;
L4:;
si0=l0;
si1=l3;
si2=17462079U;
si3=4U;
si4=l5;
si5=504U;
si4+=si5;
si4=i32_load(&i->m0,(U64)si4);
si5=l6;
si6=l1;
si1=f11342(i,si1,si2,si3,si4,si5,si6);
i32_store(&i->m0,(U64)si0+4U,si1);
goto L2;
L3:;
f14795(i);
UNREACHABLE;
L2:;
si0=1U;
l8=si0;
L1:;
si0=l0;
si1=l8;
i32_store8(&i->m0,(U64)si0,si1);
si0=l4;
si1=64U;
si0+=si1;
i->g0=si0;
L0:;
}

void f5593(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 l8=0;
U32 l9=0;
U32 si0,si1,si2,si3,si4,si5,si6;
U64 sj0,sj1,sj2;
si0=i->g0;
si1=16U;
si0-=si1;
l4=si0;
i->g0=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+88U);
l5=si0;
si1=200U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+28U);
l7=si1;
si0=si0 == si1;
if(si0){
goto L6;
}
si0=l7;
si1=468U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=2U;
si0<<=(si1&31);
l8=si0;
si0=l7;
si1=460U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
L7:;
{
si0=l8;
si0=!(si0);
if(si0){
goto L5;
}
si0=l8;
si1=-4U;
si0+=si1;
l8=si0;
si0=l7;
si0=i32_load(&i->m0,(U64)si0);
l9=si0;
si0=l7;
si1=4U;
si0+=si1;
l7=si0;
si0=l9;
si1=l6;
si0=si0 != si1;
if(si0){
goto L7;
}
}
L6:;
si0=l1;
sj0=i64_load(&i->m0,(U64)si0+8U);
sj1=-2295367307525992740ULL;
sj0^=sj1;
si1=l1;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
sj2=6911619425446520681ULL;
sj1^=sj2;
sj0|=sj1;
sj1=0ULL;
si0=sj0 != sj1;
if(si0){
goto L8;
}
si0=l1;
si1=64U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l8=si0;
si0=l1;
si1=68U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=-3U;
si0+=si1;
switch(si0){
case 0:
goto L10;
case 1:
goto L3;
case 2:
goto L3;
case 3:
goto L9;
default:
goto L3;
}
L10:;
si0=l8;
si1=17311906U;
si2=3U;
si0=f15142(i,si0,si1,si2);
si0=!(si0);
if(si0){
goto L2;
}
goto L3;
L9:;
si0=l8;
si1=17311909U;
si2=6U;
si0=f15142(i,si0,si1,si2);
if(si0){
goto L3;
}
si0=l0;
si1=1U;
i32_store8(&i->m0,(U64)si0+1U,si1);
si0=0U;
l8=si0;
goto L1;
L8:;
si0=l0;
si1=l3;
si2=17462072U;
si3=7U;
si4=l5;
si5=476U;
si4+=si5;
si4=i32_load(&i->m0,(U64)si4);
si5=l6;
si6=l1;
si1=f11342(i,si1,si2,si3,si4,si5,si6);
i32_store(&i->m0,(U64)si0+4U,si1);
goto L4;
L5:;
si0=l0;
si1=l3;
si2=17462079U;
si3=4U;
si4=l5;
si5=504U;
si4+=si5;
si4=i32_load(&i->m0,(U64)si4);
si5=l6;
si6=l1;
si1=f11342(i,si1,si2,si3,si4,si5,si6);
i32_store(&i->m0,(U64)si0+4U,si1);
L4:;
si0=1U;
l8=si0;
goto L1;
L3:;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=42U;
si0=f15022(i,si0);
l7=si0;
si0=!(si0);
if(si0){
goto L12;
}
si0=l7;
si1=40U;
si0+=si1;
si1=0U;
si1=i32_load16_u(&i->m0,(U64)si1+17311955U);
i32_store16(&i->m0,(U64)si0,si1);
si0=l7;
si1=32U;
si0+=si1;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+17311947U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l7;
si1=24U;
si0+=si1;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+17311939U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l7;
si1=16U;
si0+=si1;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+17311931U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l7;
si1=8U;
si0+=si1;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+17311923U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l7;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+17311915U);
i64_store(&i->m0,(U64)si0,sj1);
si0=1U;
l8=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+88U);
si1=508U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l9=si0;
si1=l9;
si1=i32_load(&i->m0,(U64)si1);
l6=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
sj1=180388626474ULL;
i64_store(&i->m0,(U64)si0+8U,sj1);
si0=l4;
si1=l7;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l6;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 == si1;
if(si0){
goto L11;
}
si0=l0;
si1=l2;
si2=l9;
si3=l4;
si4=4U;
si3+=si4;
si1=f11521(i,si1,si2,si3);
i32_store(&i->m0,(U64)si0+4U,si1);
goto L1;
L12:;
si0=1U;
si1=42U;
f52(i,si0,si1);
UNREACHABLE;
L11:;
f14795(i);
UNREACHABLE;
L2:;
si0=0U;
l8=si0;
si0=l0;
si1=0U;
i32_store8(&i->m0,(U64)si0+1U,si1);
L1:;
si0=l0;
si1=l8;
i32_store8(&i->m0,(U64)si0,si1);
si0=l4;
si1=16U;
si0+=si1;
i->g0=si0;
L0:;
}

void f5594(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 l8=0;
U32 l9=0;
U32 si0,si1,si2,si3,si4,si5,si6;
U64 sj0,sj1,sj2;
si0=i->g0;
si1=64U;
si0-=si1;
l4=si0;
i->g0=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+88U);
l5=si0;
si1=96U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+28U);
l7=si1;
si0=si0 == si1;
if(si0){
goto L5;
}
si0=l7;
si1=468U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=2U;
si0<<=(si1&31);
l8=si0;
si0=l7;
si1=460U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
L6:;
{
si0=l8;
si0=!(si0);
if(si0){
goto L4;
}
si0=l8;
si1=-4U;
si0+=si1;
l8=si0;
si0=l7;
si0=i32_load(&i->m0,(U64)si0);
l9=si0;
si0=l7;
si1=4U;
si0+=si1;
l7=si0;
si0=l9;
si1=l6;
si0=si0 != si1;
if(si0){
goto L6;
}
}
L5:;
si0=l1;
sj0=i64_load(&i->m0,(U64)si0+8U);
sj1=8080311700465507813ULL;
sj0^=sj1;
si1=l1;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
sj2=3405249472825529671ULL;
sj1^=sj2;
sj0|=sj1;
sj1=0ULL;
si0=sj0 != sj1;
if(si0){
goto L7;
}
si0=l4;
si1=l1;
si2=56U;
si1+=si2;
f11345(i,si0,si1);
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
l8=si0;
if(si0){
goto L8;
}
si0=l0;
si1=l4;
si1=i32_load(&i->m0,(U64)si1+4U);
i32_store(&i->m0,(U64)si0+4U,si1);
goto L1;
L8:;
si0=l4;
si1=36U;
si0+=si1;
sj1=1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=17367008U;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l4;
si1=1028U;
i32_store(&i->m0,(U64)si0+52U,si1);
si0=l4;
si1=3U;
i32_store(&i->m0,(U64)si0+60U,si1);
si0=l4;
si1=17367049U;
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
si1=12U;
si0+=si1;
si1=l4;
si2=24U;
si1+=si2;
f64(i,si0,si1);
si0=l2;
si0=i32_load(&i->m0,(U64)si0+88U);
si1=352U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
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
goto L3;
}
si0=l0;
si1=l2;
si2=l7;
si3=l4;
si4=12U;
si3+=si4;
si1=f11521(i,si1,si2,si3);
i32_store(&i->m0,(U64)si0+4U,si1);
goto L1;
L7:;
si0=l0;
si1=l3;
si2=17462072U;
si3=7U;
si4=l5;
si5=476U;
si4+=si5;
si4=i32_load(&i->m0,(U64)si4);
si5=l6;
si6=l1;
si1=f11342(i,si1,si2,si3,si4,si5,si6);
i32_store(&i->m0,(U64)si0+4U,si1);
goto L2;
L4:;
si0=l0;
si1=l3;
si2=17462079U;
si3=4U;
si4=l5;
si5=504U;
si4+=si5;
si4=i32_load(&i->m0,(U64)si4);
si5=l6;
si6=l1;
si1=f11342(i,si1,si2,si3,si4,si5,si6);
i32_store(&i->m0,(U64)si0+4U,si1);
goto L2;
L3:;
f14795(i);
UNREACHABLE;
L2:;
si0=1U;
l8=si0;
L1:;
si0=l0;
si1=l8;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=64U;
si0+=si1;
i->g0=si0;
L0:;
}

void f5595(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
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
si0=l3;
si1=l1;
si0=si0 == si1;
if(si0){
goto L5;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0+88U);
si1=200U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=l3;
si1=i32_load(&i->m0,(U64)si1+28U);
si0=si0 != si1;
if(si0){
goto L6;
}
si0=l3;
sj0=i64_load(&i->m0,(U64)si0+8U);
sj1=-2295367307525992740ULL;
sj0^=sj1;
si1=l3;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
sj2=6911619425446520681ULL;
sj1^=sj2;
sj0|=sj1;
si0=!(sj0);
si0=!(si0);
if(si0){
goto L6;
}
si0=0U;
l5=si0;
si0=l3;
si1=68U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si1=l1;
si2=68U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
si0=si0 != si1;
if(si0){
goto L7;
}
si0=l3;
si1=64U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=l1;
si2=64U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
si2=l6;
si0=f15142(i,si0,si1,si2);
si0=!(si0);
l5=si0;
L7:;
si0=l0;
si1=0U;
i32_store8(&i->m0,(U64)si0,si1);
si0=l0;
si1=l5;
i32_store8(&i->m0,(U64)si0+1U,si1);
goto L1;
L6:;
si0=l4;
si1=4U;
i32_store8(&i->m0,(U64)si0+2U,si1);
si0=l4;
si1=4U;
i32_store8(&i->m0,(U64)si0+3U,si1);
si0=l4;
si1=l2;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=0U;
l7=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+28U);
l6=si0;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+28U);
l8=si1;
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
l5=si0;
si0=l6;
si1=460U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
L10:;
{
si0=l5;
si0=!(si0);
if(si0){
goto L9;
}
si0=l5;
si1=-4U;
si0+=si1;
l5=si0;
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
goto L10;
}
}
si0=l4;
si1=l1;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l4;
si1=l3;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l4;
si1=l4;
si2=3U;
si1+=si2;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l4;
si1=l4;
si2=4U;
si1+=si2;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l4;
si1=8U;
si0+=si1;
si1=l2;
si2=17314616U;
si3=13U;
si4=l4;
si5=16U;
si4+=si5;
f11856(i,si0,si1,si2,si3,si4);
si0=l4;
si0=i32_load8_u(&i->m0,(U64)si0+8U);
l5=si0;
si1=3U;
si0=si0 == si1;
if(si0){
goto L4;
}
si0=1U;
l7=si0;
si0=l5;
si1=2U;
si0=si0 != si1;
if(si0){
goto L8;
}
L9:;
si0=l4;
si1=l3;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l4;
si1=l1;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l4;
si1=l4;
si2=2U;
si1+=si2;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l4;
si1=l4;
si2=4U;
si1+=si2;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l4;
si1=8U;
si0+=si1;
si1=l2;
si2=17314616U;
si3=13U;
si4=l4;
si5=16U;
si4+=si5;
f11856(i,si0,si1,si2,si3,si4);
si0=l4;
si0=i32_load8_u(&i->m0,(U64)si0+8U);
l5=si0;
si1=3U;
si0=si0 == si1;
if(si0){
goto L4;
}
si0=l5;
si1=2U;
si0=si0 == si1;
if(si0){
goto L11;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0+12U);
l6=si0;
si0=l4;
si0=i32_load16_u(&i->m0,(U64)si0+9U);
si1=l4;
si1=i32_load8_u(&i->m0,(U64)si1+11U);
si2=16U;
si1<<=(si2&31);
si0|=si1;
si1=8U;
si0<<=(si1&31);
si1=l5;
si0|=si1;
l5=si0;
goto L2;
L11:;
si0=l7;
if(si0){
goto L3;
}
si0=l4;
si1=l1;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l4;
si1=l3;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l4;
si1=l4;
si2=3U;
si1+=si2;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l4;
si1=l4;
si2=4U;
si1+=si2;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l4;
si1=8U;
si0+=si1;
si1=l2;
si2=17314616U;
si3=13U;
si4=l4;
si5=16U;
si4+=si5;
f11856(i,si0,si1,si2,si3,si4);
si0=l4;
si0=i32_load8_u(&i->m0,(U64)si0+8U);
l5=si0;
si1=3U;
si0=si0 == si1;
if(si0){
goto L4;
}
si0=l5;
si1=2U;
si0=si0 == si1;
if(si0){
goto L3;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0+12U);
l6=si0;
si0=l4;
si0=i32_load16_u(&i->m0,(U64)si0+9U);
si1=l4;
si1=i32_load8_u(&i->m0,(U64)si1+11U);
si2=16U;
si1<<=(si2&31);
si0|=si1;
si1=8U;
si0<<=(si1&31);
si1=l5;
si0|=si1;
l5=si0;
goto L2;
L8:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+12U);
l6=si0;
si0=l4;
si0=i32_load16_u(&i->m0,(U64)si0+9U);
si1=l4;
si1=i32_load8_u(&i->m0,(U64)si1+11U);
si2=16U;
si1<<=(si2&31);
si0|=si1;
si1=8U;
si0<<=(si1&31);
si1=l5;
si0|=si1;
l5=si0;
goto L2;
L5:;
si0=l0;
si1=256U;
i32_store16(&i->m0,(U64)si0,si1);
goto L1;
L4:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+12U);
l6=si0;
si0=2U;
l5=si0;
goto L2;
L3:;
si0=17402954U;
l9=si0;
si0=257U;
l5=si0;
si0=l4;
si0=i32_load8_u(&i->m0,(U64)si0+2U);
l8=si0;
si1=-1U;
si0+=si1;
switch(si0){
case 0:
goto L13;
case 1:
goto L16;
case 2:
goto L2;
case 3:
goto L12;
case 4:
goto L15;
case 5:
goto L14;
default:
goto L13;
}
L16:;
si0=1U;
l8=si0;
si0=17403154U;
l9=si0;
goto L13;
L15:;
si0=2U;
l8=si0;
si0=17416680U;
l9=si0;
goto L13;
L14:;
si0=2U;
l8=si0;
si0=17416682U;
l9=si0;
L13:;
si0=2U;
l5=si0;
si0=l2;
si1=l1;
si2=l3;
si3=l9;
si4=l8;
si0=f11753(i,si0,si1,si2,si3,si4);
l6=si0;
goto L2;
L12:;
si0=1U;
l5=si0;
L2:;
si0=l5;
si1=255U;
si0&=si1;
si1=2U;
si0=si0 == si1;
if(si0){
goto L17;
}
si0=l5;
si1=1U;
si0&=si1;
if(si0){
goto L18;
}
si0=l0;
si1=l6;
si2=l2;
f5571(i,si0,si1,si2);
goto L1;
L18:;
si0=l0;
si1=0U;
i32_store8(&i->m0,(U64)si0,si1);
si0=l0;
si1=l5;
si2=8U;
si1>>=(si2&31);
si2=1U;
si1&=si2;
i32_store8(&i->m0,(U64)si0+1U,si1);
goto L1;
L17:;
si0=l0;
si1=1U;
i32_store8(&i->m0,(U64)si0,si1);
si0=l0;
si1=l6;
i32_store(&i->m0,(U64)si0+4U,si1);
L1:;
si0=l4;
si1=32U;
si0+=si1;
i->g0=si0;
L0:;
}

void f5596(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U64 l8=0;
U32 si0,si1,si2,si3,si4;
U64 sj0,sj1;
si0=i->g0;
si1=48U;
si0-=si1;
l4=si0;
i->g0=si0;
si0=l1;
si1=108U;
si0+=si1;
l5=si0;
si1=l5;
si1=i32_load8_u(&i->m0,(U64)si1);
l6=si1;
si2=1U;
si3=l6;
si1=si3?si1:si2;
i32_store8(&i->m0,(U64)si0,si1);
si0=l1;
si1=56U;
si0+=si1;
l7=si0;
si0=l6;
si0=!(si0);
if(si0){
goto L1;
}
si0=l5;
sj1=l8;
si2=1000000000U;
si0=f1360(i,si0,sj1,si2);
L1:;
si0=l1;
si1=60U;
si0+=si1;
sj0=i64_load(&i->m0,(U64)si0);
l8=sj0;
si0=l4;
si1=l1;
si2=112U;
si1+=si2;
i32_store(&i->m0,(U64)si0+44U,si1);
si0=l4;
si1=l1;
si2=96U;
si1+=si2;
i32_store(&i->m0,(U64)si0+40U,si1);
si0=l4;
si1=l1;
i32_store(&i->m0,(U64)si0+36U,si1);
si0=l4;
si1=l1;
si2=80U;
si1+=si2;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l4;
si1=l1;
si2=76U;
si1+=si2;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l4;
si1=l1;
si2=68U;
si1+=si2;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l4;
sj1=l8;
i64_store(&i->m0,(U64)si0+16U,sj1);
si0=l4;
si1=l1;
si2=84U;
si1+=si2;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l4;
si1=l7;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l2;
si0=!(si0);
if(si0){
goto L3;
}
si0=l1;
si1=120U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si1=l1;
si2=116U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
si0=si0 >= si1;
if(si0){
goto L2;
}
si0=l1;
si1=l6;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0+120U,si1);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+112U);
si1=l6;
si2=2U;
si1<<=(si2&31);
si0+=si1;
si1=l2;
i32_store(&i->m0,(U64)si0,si1);
L3:;
si0=l0;
si1=l4;
si2=8U;
si1+=si2;
si2=l3;
f13156(i,si0,si1,si2);
si0=l1;
si1=0U;
si2=l1;
si2=i32_load8_u(&i->m0,(U64)si2+108U);
l6=si2;
si3=l6;
si4=1U;
si3=si3 == si4;
l6=si3;
si1=si3?si1:si2;
i32_store8(&i->m0,(U64)si0+108U,si1);
si0=l6;
if(si0){
goto L4;
}
si0=l1;
si1=108U;
si0+=si1;
si1=0U;
f1361(i,si0,si1);
L4:;
si0=l4;
si1=48U;
si0+=si1;
i->g0=si0;
goto L0;
L2:;
si0=l4;
si1=8U;
si0+=si1;
si1=17311779U;
si2=60U;
f13158(i,si0,si1,si2);
UNREACHABLE;
L0:;
}

U32 f5597(rustpythonInstance*i,U32 l0) {
U32 l1=0;
U32 l2=0;
U32 l3=0;
U32 l4=0;
U64 l5=0;
U32 l6=0;
U32 si0,si1,si2,si3,si4;
U64 sj0,sj1;
si0=i->g0;
si1=48U;
si0-=si1;
l1=si0;
i->g0=si0;
si0=l0;
si1=108U;
si0+=si1;
l2=si0;
si1=l2;
si1=i32_load8_u(&i->m0,(U64)si1);
l3=si1;
si2=1U;
si3=l3;
si1=si3?si1:si2;
i32_store8(&i->m0,(U64)si0,si1);
si0=l0;
si1=56U;
si0+=si1;
l4=si0;
si0=l3;
si0=!(si0);
if(si0){
goto L1;
}
si0=l2;
sj1=l5;
si2=1000000000U;
si0=f1360(i,si0,sj1,si2);
L1:;
si0=l0;
si1=60U;
si0+=si1;
sj0=i64_load(&i->m0,(U64)si0);
l5=sj0;
si0=l1;
si1=l0;
si2=112U;
si1+=si2;
l6=si1;
i32_store(&i->m0,(U64)si0+44U,si1);
si0=l1;
si1=l0;
si2=96U;
si1+=si2;
i32_store(&i->m0,(U64)si0+40U,si1);
si0=l1;
si1=l0;
i32_store(&i->m0,(U64)si0+36U,si1);
si0=l1;
si1=l0;
si2=80U;
si1+=si2;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l1;
si1=l0;
si2=76U;
si1+=si2;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l1;
si1=l0;
si2=68U;
si1+=si2;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l1;
sj1=l5;
i64_store(&i->m0,(U64)si0+16U,sj1);
si0=l1;
si1=l0;
si2=84U;
si1+=si2;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l1;
si1=l4;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=0U;
l3=si0;
si0=l0;
si1=136U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+56U);
l4=si1;
si2=60U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
si0=si0 >= si1;
if(si0){
goto L4;
}
si0=0U;
l3=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+56U);
si1=l2;
si2=1U;
si1<<=(si2&31);
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=54U;
si0=si0 != si1;
if(si0){
goto L4;
}
si0=l0;
si1=120U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=!(si0);
if(si0){
goto L3;
}
si0=l3;
si1=2U;
si0<<=(si1&31);
si1=l6;
si1=i32_load(&i->m0,(U64)si1);
si0+=si1;
si1=-4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si1=l3;
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
goto L2;
}
L4:;
si0=l0;
si1=0U;
si2=l0;
si2=i32_load8_u(&i->m0,(U64)si2+108U);
l2=si2;
si3=l2;
si4=1U;
si3=si3 == si4;
l2=si3;
si1=si3?si1:si2;
i32_store8(&i->m0,(U64)si0+108U,si1);
si0=l2;
if(si0){
goto L5;
}
si0=l0;
si1=108U;
si0+=si1;
si1=0U;
f1361(i,si0,si1);
L5:;
si0=l1;
si1=48U;
si0+=si1;
i->g0=si0;
si0=l3;
goto L0;
L3:;
si0=l1;
si1=8U;
si0+=si1;
si1=17627680U;
si2=44U;
f13158(i,si0,si1,si2);
UNREACHABLE;
L2:;
f14795(i);
UNREACHABLE;
L0:;
return si0;
}

U32 f5598(rustpythonInstance*i,U32 l0) {
U32 l1=0;
U32 l2=0;
U32 l3=0;
U32 si0,si1,si2,si3,si4;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+56U);
l1=si0;
si1=l1;
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
si0=l1;
si1=72U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l0=si0;
si1=l0;
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
goto L1;
}
si0=0U;
l2=si0;
si0=17311839U;
si1=9U;
si2=l0;
si3=64U;
si2+=si3;
si2=i32_load(&i->m0,(U64)si2);
si3=l0;
si4=68U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si0=f5532(i,si0,si1,si2,si3);
si0=!(si0);
if(si0){
goto L2;
}
si0=17311848U;
si1=10U;
si2=l0;
si2=i32_load(&i->m0,(U64)si2+64U);
si3=l0;
si3=i32_load(&i->m0,(U64)si3+68U);
si0=f5532(i,si0,si1,si2,si3);
l2=si0;
L2:;
si0=l0;
si1=l0;
si1=i32_load(&i->m0,(U64)si1);
l3=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=1U;
si0=si0 != si1;
if(si0){
goto L3;
}
si0=l0;
f5522(i,si0);
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
goto L4;
}
si0=l1;
f5522(i,si0);
L4:;
si0=l2;
goto L0;
L1:;
f14795(i);
UNREACHABLE;
L0:;
return si0;
}

U32 f5599(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 l8=0;
U32 si0,si1,si2,si3,si4;
si0=i->g0;
si1=16U;
si0-=si1;
l2=si0;
i->g0=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+8U);
l3=si0;
si1=2147483646U;
si0=si0 > si1;
if(si0){
goto L3;
}
si0=l1;
si1=l3;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l1;
si1=12U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
si1=-4U;
si0+=si1;
l5=si0;
si0=l1;
si1=20U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=2U;
si0<<=(si1&31);
l6=si0;
L7:;
{
si0=l6;
si0=!(si0);
if(si0){
goto L6;
}
si0=l5;
si1=l6;
si0+=si1;
l7=si0;
si0=l6;
si1=-4U;
si0+=si1;
l8=si0;
l6=si0;
si0=l7;
si0=i32_load(&i->m0,(U64)si0);
si1=l0;
si0=si0 != si1;
if(si0){
goto L7;
}
}
si0=l8;
if(si0){
goto L5;
}
L6:;
si0=l1;
si1=l3;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=0U;
l6=si0;
goto L4;
L5:;
si0=l4;
si1=l8;
si0+=si1;
si1=-4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l0=si0;
si1=l0;
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
goto L2;
}
si0=l1;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+8U);
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0+8U,si1);
L8:;
{
si0=l0;
si1=l0;
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
goto L2;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+8U);
l3=si0;
si1=2147483646U;
si0=si0 > si1;
if(si0){
goto L1;
}
si0=l1;
si1=l3;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+12U);
l4=si0;
si1=-4U;
si0+=si1;
l5=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=2U;
si0<<=(si1&31);
l6=si0;
L10:;
{
si0=l6;
si0=!(si0);
if(si0){
goto L9;
}
si0=l5;
si1=l6;
si0+=si1;
l7=si0;
si0=l6;
si1=-4U;
si0+=si1;
l8=si0;
l6=si0;
si0=l7;
si0=i32_load(&i->m0,(U64)si0);
si1=l0;
si0=si0 != si1;
if(si0){
goto L10;
}
}
si0=l8;
si0=!(si0);
if(si0){
goto L9;
}
si0=l4;
si1=l8;
si0+=si1;
si1=-4U;
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
goto L2;
}
si0=l1;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+8U);
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0+8U,si1);
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
goto L11;
}
si0=l0;
f5522(i,si0);
L11:;
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
goto L12;
}
si0=l0;
f5522(i,si0);
L12:;
si0=l6;
l0=si0;
si0=l6;
si0=f5598(i,si0);
if(si0){
goto L8;
}
goto L4;
L9:;
}
si0=l1;
si1=l3;
i32_store(&i->m0,(U64)si0+8U,si1);
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
goto L13;
}
si0=l0;
f5522(i,si0);
L13:;
si0=l0;
l6=si0;
L4:;
si0=l2;
si1=16U;
si0+=si1;
i->g0=si0;
si0=l6;
goto L0;
L3:;
si0=17315993U;
si1=24U;
si2=l2;
si3=15U;
si2+=si3;
si3=17316020U;
si4=17316060U;
f641(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L2:;
f14795(i);
UNREACHABLE;
L1:;
si0=17315993U;
si1=24U;
si2=l2;
si3=15U;
si2+=si3;
si3=17316020U;
si4=17316060U;
f641(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L0:;
return si0;
}

void f5600(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 si0,si1,si2,si3,si4,si5;
U64 sj0,sj1,sj2;
si0=l2;
si1=56U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
if(si0){
goto L1;
}
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
goto L0;
L1:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+48U);
l4=si0;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si0=l4;
si1=l4;
si2=4U;
si1+=si2;
si2=l3;
si3=-1U;
si2+=si3;
l3=si2;
si3=2U;
si2<<=(si3&31);
si0=f15144(i,si0,si1,si2);
si0=l2;
si1=l3;
i32_store(&i->m0,(U64)si0+56U,si1);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+88U);
l6=si0;
si1=96U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
si1=l5;
si1=i32_load(&i->m0,(U64)si1+28U);
l4=si1;
si0=si0 == si1;
if(si0){
goto L5;
}
si0=l4;
si1=468U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=2U;
si0<<=(si1&31);
l2=si0;
si0=l4;
si1=460U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
L6:;
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
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=l4;
si1=4U;
si0+=si1;
l4=si0;
si0=l3;
si1=l7;
si0=si0 != si1;
if(si0){
goto L6;
}
}
L5:;
si0=5U;
l2=si0;
si0=l5;
sj0=i64_load(&i->m0,(U64)si0+8U);
sj1=8080311700465507813ULL;
sj0^=sj1;
si1=l5;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
sj2=3405249472825529671ULL;
sj1^=sj2;
sj0|=sj1;
si0=!(sj0);
si0=!(si0);
if(si0){
goto L7;
}
si0=l5;
l4=si0;
goto L2;
L7:;
si0=l1;
si1=17462072U;
si2=7U;
si3=l6;
si4=476U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si4=l7;
si5=l5;
si0=f11342(i,si0,si1,si2,si3,si4,si5);
l4=si0;
si0=l5;
si1=l5;
si1=i32_load(&i->m0,(U64)si1);
l3=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=4U;
l2=si0;
si0=l3;
si1=1U;
si0=si0 == si1;
if(si0){
goto L3;
}
goto L2;
L4:;
si0=4U;
l2=si0;
si0=l1;
si1=17462079U;
si2=4U;
si3=l6;
si4=504U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si4=l7;
si5=l5;
si0=f11342(i,si0,si1,si2,si3,si4,si5);
l4=si0;
si0=l5;
si1=l5;
si1=i32_load(&i->m0,(U64)si1);
l3=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=1U;
si0=si0 != si1;
if(si0){
goto L2;
}
L3:;
si0=l5;
f5522(i,si0);
si0=4U;
l2=si0;
L2:;
si0=l0;
si1=l4;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l2;
i32_store(&i->m0,(U64)si0,si1);
L0:;
}

void f5601(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 si0,si1,si2,si3,si4,si5;
U64 sj0,sj1,sj2;
si0=l2;
si1=56U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
if(si0){
goto L1;
}
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
goto L0;
L1:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+48U);
l4=si0;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si0=l4;
si1=l4;
si2=4U;
si1+=si2;
si2=l3;
si3=-1U;
si2+=si3;
l3=si2;
si3=2U;
si2<<=(si3&31);
si0=f15144(i,si0,si1,si2);
si0=l2;
si1=l3;
i32_store(&i->m0,(U64)si0+56U,si1);
si0=0U;
si0=i32_load(&i->m0,(U64)si0+18662596U);
si1=2U;
si0=si0 != si1;
if(si0){
goto L2;
}
si0=0U;
si0=i32_load(&i->m0,(U64)si0+18662600U);
l6=si0;
si1=l5;
si1=i32_load(&i->m0,(U64)si1+28U);
l4=si1;
si0=si0 == si1;
if(si0){
goto L6;
}
si0=l4;
si1=468U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=2U;
si0<<=(si1&31);
l2=si0;
si0=l4;
si1=460U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
L7:;
{
si0=l2;
si0=!(si0);
if(si0){
goto L5;
}
si0=l2;
si1=-4U;
si0+=si1;
l2=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=l4;
si1=4U;
si0+=si1;
l4=si0;
si0=l3;
si1=l6;
si0=si0 != si1;
if(si0){
goto L7;
}
}
L6:;
si0=5U;
l2=si0;
si0=l5;
sj0=i64_load(&i->m0,(U64)si0+8U);
sj1=-7199036073551979141ULL;
sj0^=sj1;
si1=l5;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
sj2=8334505321947425047ULL;
sj1^=sj2;
sj0|=sj1;
si0=!(sj0);
si0=!(si0);
if(si0){
goto L8;
}
si0=l5;
l4=si0;
goto L3;
L8:;
si0=l1;
si1=17462072U;
si2=7U;
si3=l1;
si3=i32_load(&i->m0,(U64)si3+88U);
si4=476U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si4=l6;
si5=l5;
si0=f11342(i,si0,si1,si2,si3,si4,si5);
l4=si0;
si0=l5;
si1=l5;
si1=i32_load(&i->m0,(U64)si1);
l3=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=4U;
l2=si0;
si0=l3;
si1=1U;
si0=si0 == si1;
if(si0){
goto L4;
}
goto L3;
L5:;
si0=4U;
l2=si0;
si0=l1;
si1=17462079U;
si2=4U;
si3=l1;
si3=i32_load(&i->m0,(U64)si3+88U);
si4=504U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si4=l6;
si5=l5;
si0=f11342(i,si0,si1,si2,si3,si4,si5);
l4=si0;
si0=l5;
si1=l5;
si1=i32_load(&i->m0,(U64)si1);
l3=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=1U;
si0=si0 != si1;
if(si0){
goto L3;
}
L4:;
si0=l5;
f5522(i,si0);
si0=4U;
l2=si0;
L3:;
si0=l0;
si1=l4;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l2;
i32_store(&i->m0,(U64)si0,si1);
goto L0;
L2:;
si0=17643896U;
si1=36U;
si2=17643948U;
f634(i,si0,si1,si2);
UNREACHABLE;
L0:;
}

void f5602(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 si0,si1,si2,si3,si4,si5;
U64 sj0,sj1,sj2;
si0=l2;
si1=56U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
if(si0){
goto L1;
}
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
goto L0;
L1:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+48U);
l4=si0;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si0=l4;
si1=l4;
si2=4U;
si1+=si2;
si2=l3;
si3=-1U;
si2+=si3;
l3=si2;
si3=2U;
si2<<=(si3&31);
si0=f15144(i,si0,si1,si2);
si0=l2;
si1=l3;
i32_store(&i->m0,(U64)si0+56U,si1);
si0=0U;
si0=i32_load(&i->m0,(U64)si0+18662912U);
si1=2U;
si0=si0 != si1;
if(si0){
goto L2;
}
si0=0U;
si0=i32_load(&i->m0,(U64)si0+18662916U);
l6=si0;
si1=l5;
si1=i32_load(&i->m0,(U64)si1+28U);
l4=si1;
si0=si0 == si1;
if(si0){
goto L6;
}
si0=l4;
si1=468U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=2U;
si0<<=(si1&31);
l2=si0;
si0=l4;
si1=460U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
L7:;
{
si0=l2;
si0=!(si0);
if(si0){
goto L5;
}
si0=l2;
si1=-4U;
si0+=si1;
l2=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=l4;
si1=4U;
si0+=si1;
l4=si0;
si0=l3;
si1=l6;
si0=si0 != si1;
if(si0){
goto L7;
}
}
L6:;
si0=5U;
l2=si0;
si0=l5;
sj0=i64_load(&i->m0,(U64)si0+8U);
sj1=3241480470750534791ULL;
sj0^=sj1;
si1=l5;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
sj2=4266161736138184120ULL;
sj1^=sj2;
sj0|=sj1;
si0=!(sj0);
si0=!(si0);
if(si0){
goto L8;
}
si0=l5;
l4=si0;
goto L3;
L8:;
si0=l1;
si1=17462072U;
si2=7U;
si3=l1;
si3=i32_load(&i->m0,(U64)si3+88U);
si4=476U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si4=l6;
si5=l5;
si0=f11342(i,si0,si1,si2,si3,si4,si5);
l4=si0;
si0=l5;
si1=l5;
si1=i32_load(&i->m0,(U64)si1);
l3=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=4U;
l2=si0;
si0=l3;
si1=1U;
si0=si0 == si1;
if(si0){
goto L4;
}
goto L3;
L5:;
si0=4U;
l2=si0;
si0=l1;
si1=17462079U;
si2=4U;
si3=l1;
si3=i32_load(&i->m0,(U64)si3+88U);
si4=504U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si4=l6;
si5=l5;
si0=f11342(i,si0,si1,si2,si3,si4,si5);
l4=si0;
si0=l5;
si1=l5;
si1=i32_load(&i->m0,(U64)si1);
l3=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=1U;
si0=si0 != si1;
if(si0){
goto L3;
}
L4:;
si0=l5;
f5522(i,si0);
si0=4U;
l2=si0;
L3:;
si0=l0;
si1=l4;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l2;
i32_store(&i->m0,(U64)si0,si1);
goto L0;
L2:;
si0=17654574U;
si1=36U;
si2=17654628U;
f634(i,si0,si1,si2);
UNREACHABLE;
L0:;
}

void f5603(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 si0,si1,si2,si3,si4,si5;
U64 sj0,sj1,sj2;
si0=l2;
si1=56U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
if(si0){
goto L1;
}
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
goto L0;
L1:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+48U);
l4=si0;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si0=l4;
si1=l4;
si2=4U;
si1+=si2;
si2=l3;
si3=-1U;
si2+=si3;
l3=si2;
si3=2U;
si2<<=(si3&31);
si0=f15144(i,si0,si1,si2);
si0=l2;
si1=l3;
i32_store(&i->m0,(U64)si0+56U,si1);
si0=0U;
si0=i32_load(&i->m0,(U64)si0+18662888U);
si1=2U;
si0=si0 != si1;
if(si0){
goto L2;
}
si0=0U;
si0=i32_load(&i->m0,(U64)si0+18662892U);
l6=si0;
si1=l5;
si1=i32_load(&i->m0,(U64)si1+28U);
l4=si1;
si0=si0 == si1;
if(si0){
goto L6;
}
si0=l4;
si1=468U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=2U;
si0<<=(si1&31);
l2=si0;
si0=l4;
si1=460U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
L7:;
{
si0=l2;
si0=!(si0);
if(si0){
goto L5;
}
si0=l2;
si1=-4U;
si0+=si1;
l2=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=l4;
si1=4U;
si0+=si1;
l4=si0;
si0=l3;
si1=l6;
si0=si0 != si1;
if(si0){
goto L7;
}
}
L6:;
si0=5U;
l2=si0;
si0=l5;
sj0=i64_load(&i->m0,(U64)si0+8U);
sj1=-2611864610883814830ULL;
sj0^=sj1;
si1=l5;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
sj2=6408118503506752226ULL;
sj1^=sj2;
sj0|=sj1;
si0=!(sj0);
si0=!(si0);
if(si0){
goto L8;
}
si0=l5;
l4=si0;
goto L3;
L8:;
si0=l1;
si1=17462072U;
si2=7U;
si3=l1;
si3=i32_load(&i->m0,(U64)si3+88U);
si4=476U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si4=l6;
si5=l5;
si0=f11342(i,si0,si1,si2,si3,si4,si5);
l4=si0;
si0=l5;
si1=l5;
si1=i32_load(&i->m0,(U64)si1);
l3=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=4U;
l2=si0;
si0=l3;
si1=1U;
si0=si0 == si1;
if(si0){
goto L4;
}
goto L3;
L5:;
si0=4U;
l2=si0;
si0=l1;
si1=17462079U;
si2=4U;
si3=l1;
si3=i32_load(&i->m0,(U64)si3+88U);
si4=504U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si4=l6;
si5=l5;
si0=f11342(i,si0,si1,si2,si3,si4,si5);
l4=si0;
si0=l5;
si1=l5;
si1=i32_load(&i->m0,(U64)si1);
l3=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=1U;
si0=si0 != si1;
if(si0){
goto L3;
}
L4:;
si0=l5;
f5522(i,si0);
si0=4U;
l2=si0;
L3:;
si0=l0;
si1=l4;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l2;
i32_store(&i->m0,(U64)si0,si1);
goto L0;
L2:;
si0=17654574U;
si1=36U;
si2=17654628U;
f634(i,si0,si1,si2);
UNREACHABLE;
L0:;
}

void f5604(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 si0,si1,si2,si3,si4,si5;
U64 sj0,sj1,sj2;
si0=l2;
si1=56U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
if(si0){
goto L1;
}
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
goto L0;
L1:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+48U);
l4=si0;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si0=l4;
si1=l4;
si2=4U;
si1+=si2;
si2=l3;
si3=-1U;
si2+=si3;
l3=si2;
si3=2U;
si2<<=(si3&31);
si0=f15144(i,si0,si1,si2);
si0=l2;
si1=l3;
i32_store(&i->m0,(U64)si0+56U,si1);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+88U);
l6=si0;
si1=116U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
si1=l5;
si1=i32_load(&i->m0,(U64)si1+28U);
l4=si1;
si0=si0 == si1;
if(si0){
goto L5;
}
si0=l4;
si1=468U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=2U;
si0<<=(si1&31);
l2=si0;
si0=l4;
si1=460U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
L6:;
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
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=l4;
si1=4U;
si0+=si1;
l4=si0;
si0=l3;
si1=l7;
si0=si0 != si1;
if(si0){
goto L6;
}
}
L5:;
si0=5U;
l2=si0;
si0=l5;
sj0=i64_load(&i->m0,(U64)si0+8U);
sj1=8099346542449417832ULL;
sj0^=sj1;
si1=l5;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
sj2=2865379266352189331ULL;
sj1^=sj2;
sj0|=sj1;
si0=!(sj0);
si0=!(si0);
if(si0){
goto L7;
}
si0=l5;
l4=si0;
goto L2;
L7:;
si0=l1;
si1=17462072U;
si2=7U;
si3=l6;
si4=476U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si4=l7;
si5=l5;
si0=f11342(i,si0,si1,si2,si3,si4,si5);
l4=si0;
si0=l5;
si1=l5;
si1=i32_load(&i->m0,(U64)si1);
l3=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=4U;
l2=si0;
si0=l3;
si1=1U;
si0=si0 == si1;
if(si0){
goto L3;
}
goto L2;
L4:;
si0=4U;
l2=si0;
si0=l1;
si1=17462079U;
si2=4U;
si3=l6;
si4=504U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si4=l7;
si5=l5;
si0=f11342(i,si0,si1,si2,si3,si4,si5);
l4=si0;
si0=l5;
si1=l5;
si1=i32_load(&i->m0,(U64)si1);
l3=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=1U;
si0=si0 != si1;
if(si0){
goto L2;
}
L3:;
si0=l5;
f5522(i,si0);
si0=4U;
l2=si0;
L2:;
si0=l0;
si1=l4;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l2;
i32_store(&i->m0,(U64)si0,si1);
L0:;
}

void f5605(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 si0,si1,si2,si3,si4,si5;
U64 sj0,sj1,sj2;
si0=l2;
si1=56U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
if(si0){
goto L1;
}
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
goto L0;
L1:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+48U);
l4=si0;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si0=l4;
si1=l4;
si2=4U;
si1+=si2;
si2=l3;
si3=-1U;
si2+=si3;
l3=si2;
si3=2U;
si2<<=(si3&31);
si0=f15144(i,si0,si1,si2);
si0=l2;
si1=l3;
i32_store(&i->m0,(U64)si0+56U,si1);
si0=0U;
si0=i32_load(&i->m0,(U64)si0+18660572U);
si1=2U;
si0=si0 != si1;
if(si0){
goto L2;
}
si0=0U;
si0=i32_load(&i->m0,(U64)si0+18660576U);
l6=si0;
si1=l5;
si1=i32_load(&i->m0,(U64)si1+28U);
l4=si1;
si0=si0 == si1;
if(si0){
goto L6;
}
si0=l4;
si1=468U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=2U;
si0<<=(si1&31);
l2=si0;
si0=l4;
si1=460U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
L7:;
{
si0=l2;
si0=!(si0);
if(si0){
goto L5;
}
si0=l2;
si1=-4U;
si0+=si1;
l2=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=l4;
si1=4U;
si0+=si1;
l4=si0;
si0=l3;
si1=l6;
si0=si0 != si1;
if(si0){
goto L7;
}
}
L6:;
si0=5U;
l2=si0;
si0=l5;
sj0=i64_load(&i->m0,(U64)si0+8U);
sj1=4034444200263289773ULL;
sj0^=sj1;
si1=l5;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
sj2=-5145027360264956089ULL;
sj1^=sj2;
sj0|=sj1;
si0=!(sj0);
si0=!(si0);
if(si0){
goto L8;
}
si0=l5;
l4=si0;
goto L3;
L8:;
si0=l1;
si1=17462072U;
si2=7U;
si3=l1;
si3=i32_load(&i->m0,(U64)si3+88U);
si4=476U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si4=l6;
si5=l5;
si0=f11342(i,si0,si1,si2,si3,si4,si5);
l4=si0;
si0=l5;
si1=l5;
si1=i32_load(&i->m0,(U64)si1);
l3=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=4U;
l2=si0;
si0=l3;
si1=1U;
si0=si0 == si1;
if(si0){
goto L4;
}
goto L3;
L5:;
si0=4U;
l2=si0;
si0=l1;
si1=17462079U;
si2=4U;
si3=l1;
si3=i32_load(&i->m0,(U64)si3+88U);
si4=504U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si4=l6;
si5=l5;
si0=f11342(i,si0,si1,si2,si3,si4,si5);
l4=si0;
si0=l5;
si1=l5;
si1=i32_load(&i->m0,(U64)si1);
l3=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=1U;
si0=si0 != si1;
if(si0){
goto L3;
}
L4:;
si0=l5;
f5522(i,si0);
si0=4U;
l2=si0;
L3:;
si0=l0;
si1=l4;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l2;
i32_store(&i->m0,(U64)si0,si1);
goto L0;
L2:;
si0=17337074U;
si1=36U;
si2=17337128U;
f634(i,si0,si1,si2);
UNREACHABLE;
L0:;
}

void f5606(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 si0,si1,si2,si3,si4,si5;
U64 sj0,sj1,sj2;
si0=l2;
si1=56U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
if(si0){
goto L1;
}
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
goto L0;
L1:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+48U);
l4=si0;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si0=l4;
si1=l4;
si2=4U;
si1+=si2;
si2=l3;
si3=-1U;
si2+=si3;
l3=si2;
si3=2U;
si2<<=(si3&31);
si0=f15144(i,si0,si1,si2);
si0=l2;
si1=l3;
i32_store(&i->m0,(U64)si0+56U,si1);
si0=0U;
si0=i32_load(&i->m0,(U64)si0+18660580U);
si1=2U;
si0=si0 != si1;
if(si0){
goto L2;
}
si0=0U;
si0=i32_load(&i->m0,(U64)si0+18660584U);
l6=si0;
si1=l5;
si1=i32_load(&i->m0,(U64)si1+28U);
l4=si1;
si0=si0 == si1;
if(si0){
goto L6;
}
si0=l4;
si1=468U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=2U;
si0<<=(si1&31);
l2=si0;
si0=l4;
si1=460U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
L7:;
{
si0=l2;
si0=!(si0);
if(si0){
goto L5;
}
si0=l2;
si1=-4U;
si0+=si1;
l2=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=l4;
si1=4U;
si0+=si1;
l4=si0;
si0=l3;
si1=l6;
si0=si0 != si1;
if(si0){
goto L7;
}
}
L6:;
si0=5U;
l2=si0;
si0=l5;
sj0=i64_load(&i->m0,(U64)si0+8U);
sj1=-5269830796722661327ULL;
sj0^=sj1;
si1=l5;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
sj2=-4792632361847918242ULL;
sj1^=sj2;
sj0|=sj1;
si0=!(sj0);
si0=!(si0);
if(si0){
goto L8;
}
si0=l5;
l4=si0;
goto L3;
L8:;
si0=l1;
si1=17462072U;
si2=7U;
si3=l1;
si3=i32_load(&i->m0,(U64)si3+88U);
si4=476U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si4=l6;
si5=l5;
si0=f11342(i,si0,si1,si2,si3,si4,si5);
l4=si0;
si0=l5;
si1=l5;
si1=i32_load(&i->m0,(U64)si1);
l3=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=4U;
l2=si0;
si0=l3;
si1=1U;
si0=si0 == si1;
if(si0){
goto L4;
}
goto L3;
L5:;
si0=4U;
l2=si0;
si0=l1;
si1=17462079U;
si2=4U;
si3=l1;
si3=i32_load(&i->m0,(U64)si3+88U);
si4=504U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si4=l6;
si5=l5;
si0=f11342(i,si0,si1,si2,si3,si4,si5);
l4=si0;
si0=l5;
si1=l5;
si1=i32_load(&i->m0,(U64)si1);
l3=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=1U;
si0=si0 != si1;
if(si0){
goto L3;
}
L4:;
si0=l5;
f5522(i,si0);
si0=4U;
l2=si0;
L3:;
si0=l0;
si1=l4;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l2;
i32_store(&i->m0,(U64)si0,si1);
goto L0;
L2:;
si0=17337074U;
si1=36U;
si2=17337128U;
f634(i,si0,si1,si2);
UNREACHABLE;
L0:;
}

void f5607(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 si0,si1,si2,si3,si4,si5;
U64 sj0,sj1,sj2;
si0=l2;
si1=56U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
if(si0){
goto L1;
}
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
goto L0;
L1:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+48U);
l4=si0;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si0=l4;
si1=l4;
si2=4U;
si1+=si2;
si2=l3;
si3=-1U;
si2+=si3;
l3=si2;
si3=2U;
si2<<=(si3&31);
si0=f15144(i,si0,si1,si2);
si0=l2;
si1=l3;
i32_store(&i->m0,(U64)si0+56U,si1);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+88U);
l6=si0;
si1=212U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
si1=l5;
si1=i32_load(&i->m0,(U64)si1+28U);
l4=si1;
si0=si0 == si1;
if(si0){
goto L5;
}
si0=l4;
si1=468U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=2U;
si0<<=(si1&31);
l2=si0;
si0=l4;
si1=460U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
L6:;
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
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=l4;
si1=4U;
si0+=si1;
l4=si0;
si0=l3;
si1=l7;
si0=si0 != si1;
if(si0){
goto L6;
}
}
L5:;
si0=5U;
l2=si0;
si0=l5;
sj0=i64_load(&i->m0,(U64)si0+8U);
sj1=2080038392191427750ULL;
sj0^=sj1;
si1=l5;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
sj2=-6594005750327420903ULL;
sj1^=sj2;
sj0|=sj1;
si0=!(sj0);
si0=!(si0);
if(si0){
goto L7;
}
si0=l5;
l4=si0;
goto L2;
L7:;
si0=l1;
si1=17462072U;
si2=7U;
si3=l6;
si4=476U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si4=l7;
si5=l5;
si0=f11342(i,si0,si1,si2,si3,si4,si5);
l4=si0;
si0=l5;
si1=l5;
si1=i32_load(&i->m0,(U64)si1);
l3=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=4U;
l2=si0;
si0=l3;
si1=1U;
si0=si0 == si1;
if(si0){
goto L3;
}
goto L2;
L4:;
si0=4U;
l2=si0;
si0=l1;
si1=17462079U;
si2=4U;
si3=l6;
si4=504U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si4=l7;
si5=l5;
si0=f11342(i,si0,si1,si2,si3,si4,si5);
l4=si0;
si0=l5;
si1=l5;
si1=i32_load(&i->m0,(U64)si1);
l3=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=1U;
si0=si0 != si1;
if(si0){
goto L2;
}
L3:;
si0=l5;
f5522(i,si0);
si0=4U;
l2=si0;
L2:;
si0=l0;
si1=l4;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l2;
i32_store(&i->m0,(U64)si0,si1);
L0:;
}

void f5608(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 si0,si1,si2,si3,si4,si5;
U64 sj0,sj1,sj2;
si0=l2;
si1=56U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
if(si0){
goto L1;
}
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
goto L0;
L1:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+48U);
l4=si0;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si0=l4;
si1=l4;
si2=4U;
si1+=si2;
si2=l3;
si3=-1U;
si2+=si3;
l3=si2;
si3=2U;
si2<<=(si3&31);
si0=f15144(i,si0,si1,si2);
si0=l2;
si1=l3;
i32_store(&i->m0,(U64)si0+56U,si1);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+88U);
l6=si0;
si1=88U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
si1=l5;
si1=i32_load(&i->m0,(U64)si1+28U);
l4=si1;
si0=si0 == si1;
if(si0){
goto L5;
}
si0=l4;
si1=468U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=2U;
si0<<=(si1&31);
l2=si0;
si0=l4;
si1=460U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
L6:;
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
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=l4;
si1=4U;
si0+=si1;
l4=si0;
si0=l3;
si1=l7;
si0=si0 != si1;
if(si0){
goto L6;
}
}
L5:;
si0=5U;
l2=si0;
si0=l5;
sj0=i64_load(&i->m0,(U64)si0+8U);
sj1=-4973832613023358901ULL;
sj0^=sj1;
si1=l5;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
sj2=-608833962105374840ULL;
sj1^=sj2;
sj0|=sj1;
si0=!(sj0);
si0=!(si0);
if(si0){
goto L7;
}
si0=l5;
l4=si0;
goto L2;
L7:;
si0=l1;
si1=17462072U;
si2=7U;
si3=l6;
si4=476U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si4=l7;
si5=l5;
si0=f11342(i,si0,si1,si2,si3,si4,si5);
l4=si0;
si0=l5;
si1=l5;
si1=i32_load(&i->m0,(U64)si1);
l3=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=4U;
l2=si0;
si0=l3;
si1=1U;
si0=si0 == si1;
if(si0){
goto L3;
}
goto L2;
L4:;
si0=4U;
l2=si0;
si0=l1;
si1=17462079U;
si2=4U;
si3=l6;
si4=504U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si4=l7;
si5=l5;
si0=f11342(i,si0,si1,si2,si3,si4,si5);
l4=si0;
si0=l5;
si1=l5;
si1=i32_load(&i->m0,(U64)si1);
l3=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=1U;
si0=si0 != si1;
if(si0){
goto L2;
}
L3:;
si0=l5;
f5522(i,si0);
si0=4U;
l2=si0;
L2:;
si0=l0;
si1=l4;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l2;
i32_store(&i->m0,(U64)si0,si1);
L0:;
}

void f5609(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 si0,si1,si2,si3,si4,si5;
U64 sj0,sj1,sj2;
si0=l2;
si1=56U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
if(si0){
goto L1;
}
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
goto L0;
L1:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+48U);
l4=si0;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si0=l4;
si1=l4;
si2=4U;
si1+=si2;
si2=l3;
si3=-1U;
si2+=si3;
l3=si2;
si3=2U;
si2<<=(si3&31);
si0=f15144(i,si0,si1,si2);
si0=l2;
si1=l3;
i32_store(&i->m0,(U64)si0+56U,si1);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+88U);
l6=si0;
si1=204U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
si1=l5;
si1=i32_load(&i->m0,(U64)si1+28U);
l4=si1;
si0=si0 == si1;
if(si0){
goto L5;
}
si0=l4;
si1=468U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=2U;
si0<<=(si1&31);
l2=si0;
si0=l4;
si1=460U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
L6:;
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
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=l4;
si1=4U;
si0+=si1;
l4=si0;
si0=l3;
si1=l7;
si0=si0 != si1;
if(si0){
goto L6;
}
}
L5:;
si0=5U;
l2=si0;
si0=l5;
sj0=i64_load(&i->m0,(U64)si0+8U);
sj1=3230319032072005752ULL;
sj0^=sj1;
si1=l5;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
sj2=-3427758530905308695ULL;
sj1^=sj2;
sj0|=sj1;
si0=!(sj0);
si0=!(si0);
if(si0){
goto L7;
}
si0=l5;
l4=si0;
goto L2;
L7:;
si0=l1;
si1=17462072U;
si2=7U;
si3=l6;
si4=476U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si4=l7;
si5=l5;
si0=f11342(i,si0,si1,si2,si3,si4,si5);
l4=si0;
si0=l5;
si1=l5;
si1=i32_load(&i->m0,(U64)si1);
l3=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=4U;
l2=si0;
si0=l3;
si1=1U;
si0=si0 == si1;
if(si0){
goto L3;
}
goto L2;
L4:;
si0=4U;
l2=si0;
si0=l1;
si1=17462079U;
si2=4U;
si3=l6;
si4=504U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si4=l7;
si5=l5;
si0=f11342(i,si0,si1,si2,si3,si4,si5);
l4=si0;
si0=l5;
si1=l5;
si1=i32_load(&i->m0,(U64)si1);
l3=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=1U;
si0=si0 != si1;
if(si0){
goto L2;
}
L3:;
si0=l5;
f5522(i,si0);
si0=4U;
l2=si0;
L2:;
si0=l0;
si1=l4;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l2;
i32_store(&i->m0,(U64)si0,si1);
L0:;
}

void f5610(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 si0,si1,si2,si3,si4,si5;
U64 sj0,sj1,sj2;
si0=l2;
si1=56U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
if(si0){
goto L1;
}
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
goto L0;
L1:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+48U);
l4=si0;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si0=l4;
si1=l4;
si2=4U;
si1+=si2;
si2=l3;
si3=-1U;
si2+=si3;
l3=si2;
si3=2U;
si2<<=(si3&31);
si0=f15144(i,si0,si1,si2);
si0=l2;
si1=l3;
i32_store(&i->m0,(U64)si0+56U,si1);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+88U);
l6=si0;
si0=i32_load(&i->m0,(U64)si0+8U);
l7=si0;
si1=l5;
si1=i32_load(&i->m0,(U64)si1+28U);
l4=si1;
si0=si0 == si1;
if(si0){
goto L5;
}
si0=l4;
si1=468U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=2U;
si0<<=(si1&31);
l2=si0;
si0=l4;
si1=460U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
L6:;
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
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=l4;
si1=4U;
si0+=si1;
l4=si0;
si0=l3;
si1=l7;
si0=si0 != si1;
if(si0){
goto L6;
}
}
L5:;
si0=5U;
l2=si0;
si0=l5;
sj0=i64_load(&i->m0,(U64)si0+8U);
sj1=5656442752557716266ULL;
sj0^=sj1;
si1=l5;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
sj2=2839561240270162146ULL;
sj1^=sj2;
sj0|=sj1;
si0=!(sj0);
si0=!(si0);
if(si0){
goto L7;
}
si0=l5;
l4=si0;
goto L2;
L7:;
si0=l1;
si1=17462072U;
si2=7U;
si3=l6;
si4=476U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si4=l7;
si5=l5;
si0=f11342(i,si0,si1,si2,si3,si4,si5);
l4=si0;
si0=l5;
si1=l5;
si1=i32_load(&i->m0,(U64)si1);
l3=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=4U;
l2=si0;
si0=l3;
si1=1U;
si0=si0 == si1;
if(si0){
goto L3;
}
goto L2;
L4:;
si0=4U;
l2=si0;
si0=l1;
si1=17462079U;
si2=4U;
si3=l6;
si4=504U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si4=l7;
si5=l5;
si0=f11342(i,si0,si1,si2,si3,si4,si5);
l4=si0;
si0=l5;
si1=l5;
si1=i32_load(&i->m0,(U64)si1);
l3=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=1U;
si0=si0 != si1;
if(si0){
goto L2;
}
L3:;
si0=l5;
f5522(i,si0);
si0=4U;
l2=si0;
L2:;
si0=l0;
si1=l4;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l2;
i32_store(&i->m0,(U64)si0,si1);
L0:;
}

void f5611(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 si0,si1,si2,si3,si4,si5;
U64 sj0,sj1,sj2;
si0=l2;
si1=56U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
if(si0){
goto L1;
}
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
goto L0;
L1:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+48U);
l4=si0;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si0=l4;
si1=l4;
si2=4U;
si1+=si2;
si2=l3;
si3=-1U;
si2+=si3;
l3=si2;
si3=2U;
si2<<=(si3&31);
si0=f15144(i,si0,si1,si2);
si0=l2;
si1=l3;
i32_store(&i->m0,(U64)si0+56U,si1);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+88U);
l6=si0;
si1=224U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
si1=l5;
si1=i32_load(&i->m0,(U64)si1+28U);
l4=si1;
si0=si0 == si1;
if(si0){
goto L5;
}
si0=l4;
si1=468U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=2U;
si0<<=(si1&31);
l2=si0;
si0=l4;
si1=460U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
L6:;
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
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=l4;
si1=4U;
si0+=si1;
l4=si0;
si0=l3;
si1=l7;
si0=si0 != si1;
if(si0){
goto L6;
}
}
L5:;
si0=5U;
l2=si0;
si0=l5;
sj0=i64_load(&i->m0,(U64)si0+8U);
sj1=6407585060186374842ULL;
sj0^=sj1;
si1=l5;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
sj2=-6968828554634194498ULL;
sj1^=sj2;
sj0|=sj1;
si0=!(sj0);
si0=!(si0);
if(si0){
goto L7;
}
si0=l5;
l4=si0;
goto L2;
L7:;
si0=l1;
si1=17462072U;
si2=7U;
si3=l6;
si4=476U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si4=l7;
si5=l5;
si0=f11342(i,si0,si1,si2,si3,si4,si5);
l4=si0;
si0=l5;
si1=l5;
si1=i32_load(&i->m0,(U64)si1);
l3=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=4U;
l2=si0;
si0=l3;
si1=1U;
si0=si0 == si1;
if(si0){
goto L3;
}
goto L2;
L4:;
si0=4U;
l2=si0;
si0=l1;
si1=17462079U;
si2=4U;
si3=l6;
si4=504U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si4=l7;
si5=l5;
si0=f11342(i,si0,si1,si2,si3,si4,si5);
l4=si0;
si0=l5;
si1=l5;
si1=i32_load(&i->m0,(U64)si1);
l3=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=1U;
si0=si0 != si1;
if(si0){
goto L2;
}
L3:;
si0=l5;
f5522(i,si0);
si0=4U;
l2=si0;
L2:;
si0=l0;
si1=l4;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l2;
i32_store(&i->m0,(U64)si0,si1);
L0:;
}

void f5612(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 si0,si1,si2,si3,si4,si5;
U64 sj0,sj1,sj2;
si0=l2;
si1=56U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
if(si0){
goto L1;
}
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
goto L0;
L1:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+48U);
l4=si0;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si0=l4;
si1=l4;
si2=4U;
si1+=si2;
si2=l3;
si3=-1U;
si2+=si3;
l3=si2;
si3=2U;
si2<<=(si3&31);
si0=f15144(i,si0,si1,si2);
si0=l2;
si1=l3;
i32_store(&i->m0,(U64)si0+56U,si1);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+88U);
l6=si0;
si1=24U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
si1=l5;
si1=i32_load(&i->m0,(U64)si1+28U);
l4=si1;
si0=si0 == si1;
if(si0){
goto L5;
}
si0=l4;
si1=468U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=2U;
si0<<=(si1&31);
l2=si0;
si0=l4;
si1=460U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
L6:;
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
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=l4;
si1=4U;
si0+=si1;
l4=si0;
si0=l3;
si1=l7;
si0=si0 != si1;
if(si0){
goto L6;
}
}
L5:;
si0=5U;
l2=si0;
si0=l5;
sj0=i64_load(&i->m0,(U64)si0+8U);
sj1=-6879226489707195439ULL;
sj0^=sj1;
si1=l5;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
sj2=1280318486529463543ULL;
sj1^=sj2;
sj0|=sj1;
si0=!(sj0);
si0=!(si0);
if(si0){
goto L7;
}
si0=l5;
l4=si0;
goto L2;
L7:;
si0=l1;
si1=17462072U;
si2=7U;
si3=l6;
si4=476U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si4=l7;
si5=l5;
si0=f11342(i,si0,si1,si2,si3,si4,si5);
l4=si0;
si0=l5;
si1=l5;
si1=i32_load(&i->m0,(U64)si1);
l3=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=4U;
l2=si0;
si0=l3;
si1=1U;
si0=si0 == si1;
if(si0){
goto L3;
}
goto L2;
L4:;
si0=4U;
l2=si0;
si0=l1;
si1=17462079U;
si2=4U;
si3=l6;
si4=504U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si4=l7;
si5=l5;
si0=f11342(i,si0,si1,si2,si3,si4,si5);
l4=si0;
si0=l5;
si1=l5;
si1=i32_load(&i->m0,(U64)si1);
l3=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=1U;
si0=si0 != si1;
if(si0){
goto L2;
}
L3:;
si0=l5;
f5522(i,si0);
si0=4U;
l2=si0;
L2:;
si0=l0;
si1=l4;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l2;
i32_store(&i->m0,(U64)si0,si1);
L0:;
}

void f5613(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 si0,si1,si2,si3,si4,si5;
U64 sj0,sj1,sj2;
si0=l2;
si1=56U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
if(si0){
goto L1;
}
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
goto L0;
L1:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+48U);
l4=si0;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si0=l4;
si1=l4;
si2=4U;
si1+=si2;
si2=l3;
si3=-1U;
si2+=si3;
l3=si2;
si3=2U;
si2<<=(si3&31);
si0=f15144(i,si0,si1,si2);
si0=l2;
si1=l3;
i32_store(&i->m0,(U64)si0+56U,si1);
si0=0U;
si0=i32_load(&i->m0,(U64)si0+18660800U);
si1=2U;
si0=si0 != si1;
if(si0){
goto L2;
}
si0=0U;
si0=i32_load(&i->m0,(U64)si0+18660804U);
l6=si0;
si1=l5;
si1=i32_load(&i->m0,(U64)si1+28U);
l4=si1;
si0=si0 == si1;
if(si0){
goto L6;
}
si0=l4;
si1=468U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=2U;
si0<<=(si1&31);
l2=si0;
si0=l4;
si1=460U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
L7:;
{
si0=l2;
si0=!(si0);
if(si0){
goto L5;
}
si0=l2;
si1=-4U;
si0+=si1;
l2=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=l4;
si1=4U;
si0+=si1;
l4=si0;
si0=l3;
si1=l6;
si0=si0 != si1;
if(si0){
goto L7;
}
}
L6:;
si0=5U;
l2=si0;
si0=l5;
sj0=i64_load(&i->m0,(U64)si0+8U);
sj1=7393619359696851686ULL;
sj0^=sj1;
si1=l5;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
sj2=3413306392377485042ULL;
sj1^=sj2;
sj0|=sj1;
si0=!(sj0);
si0=!(si0);
if(si0){
goto L8;
}
si0=l5;
l4=si0;
goto L3;
L8:;
si0=l1;
si1=17462072U;
si2=7U;
si3=l1;
si3=i32_load(&i->m0,(U64)si3+88U);
si4=476U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si4=l6;
si5=l5;
si0=f11342(i,si0,si1,si2,si3,si4,si5);
l4=si0;
si0=l5;
si1=l5;
si1=i32_load(&i->m0,(U64)si1);
l3=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=4U;
l2=si0;
si0=l3;
si1=1U;
si0=si0 == si1;
if(si0){
goto L4;
}
goto L3;
L5:;
si0=4U;
l2=si0;
si0=l1;
si1=17462079U;
si2=4U;
si3=l1;
si3=i32_load(&i->m0,(U64)si3+88U);
si4=504U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si4=l6;
si5=l5;
si0=f11342(i,si0,si1,si2,si3,si4,si5);
l4=si0;
si0=l5;
si1=l5;
si1=i32_load(&i->m0,(U64)si1);
l3=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=1U;
si0=si0 != si1;
if(si0){
goto L3;
}
L4:;
si0=l5;
f5522(i,si0);
si0=4U;
l2=si0;
L3:;
si0=l0;
si1=l4;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l2;
i32_store(&i->m0,(U64)si0,si1);
goto L0;
L2:;
si0=17379728U;
si1=36U;
si2=17379780U;
f634(i,si0,si1,si2);
UNREACHABLE;
L0:;
}

void f5614(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 si0,si1,si2,si3,si4,si5;
U64 sj0,sj1,sj2;
si0=l2;
si1=56U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
if(si0){
goto L1;
}
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
goto L0;
L1:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+48U);
l4=si0;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si0=l4;
si1=l4;
si2=4U;
si1+=si2;
si2=l3;
si3=-1U;
si2+=si3;
l3=si2;
si3=2U;
si2<<=(si3&31);
si0=f15144(i,si0,si1,si2);
si0=l2;
si1=l3;
i32_store(&i->m0,(U64)si0+56U,si1);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+88U);
l6=si0;
si1=260U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
si1=l5;
si1=i32_load(&i->m0,(U64)si1+28U);
l4=si1;
si0=si0 == si1;
if(si0){
goto L5;
}
si0=l4;
si1=468U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=2U;
si0<<=(si1&31);
l2=si0;
si0=l4;
si1=460U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
L6:;
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
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=l4;
si1=4U;
si0+=si1;
l4=si0;
si0=l3;
si1=l7;
si0=si0 != si1;
if(si0){
goto L6;
}
}
L5:;
si0=5U;
l2=si0;
si0=l5;
sj0=i64_load(&i->m0,(U64)si0+8U);
sj1=4263007291826056010ULL;
sj0^=sj1;
si1=l5;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
sj2=-7753529647711480239ULL;
sj1^=sj2;
sj0|=sj1;
si0=!(sj0);
si0=!(si0);
if(si0){
goto L7;
}
si0=l5;
l4=si0;
goto L2;
L7:;
si0=l1;
si1=17462072U;
si2=7U;
si3=l6;
si4=476U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si4=l7;
si5=l5;
si0=f11342(i,si0,si1,si2,si3,si4,si5);
l4=si0;
si0=l5;
si1=l5;
si1=i32_load(&i->m0,(U64)si1);
l3=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=4U;
l2=si0;
si0=l3;
si1=1U;
si0=si0 == si1;
if(si0){
goto L3;
}
goto L2;
L4:;
si0=4U;
l2=si0;
si0=l1;
si1=17462079U;
si2=4U;
si3=l6;
si4=504U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si4=l7;
si5=l5;
si0=f11342(i,si0,si1,si2,si3,si4,si5);
l4=si0;
si0=l5;
si1=l5;
si1=i32_load(&i->m0,(U64)si1);
l3=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=1U;
si0=si0 != si1;
if(si0){
goto L2;
}
L3:;
si0=l5;
f5522(i,si0);
si0=4U;
l2=si0;
L2:;
si0=l0;
si1=l4;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l2;
i32_store(&i->m0,(U64)si0,si1);
L0:;
}

void f5615(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 si0,si1,si2,si3,si4,si5;
U64 sj0,sj1,sj2;
si0=l2;
si1=56U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
if(si0){
goto L1;
}
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
goto L0;
L1:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+48U);
l4=si0;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si0=l4;
si1=l4;
si2=4U;
si1+=si2;
si2=l3;
si3=-1U;
si2+=si3;
l3=si2;
si3=2U;
si2<<=(si3&31);
si0=f15144(i,si0,si1,si2);
si0=l2;
si1=l3;
i32_store(&i->m0,(U64)si0+56U,si1);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+88U);
l6=si0;
si1=152U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
si1=l5;
si1=i32_load(&i->m0,(U64)si1+28U);
l4=si1;
si0=si0 == si1;
if(si0){
goto L5;
}
si0=l4;
si1=468U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=2U;
si0<<=(si1&31);
l2=si0;
si0=l4;
si1=460U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
L6:;
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
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=l4;
si1=4U;
si0+=si1;
l4=si0;
si0=l3;
si1=l7;
si0=si0 != si1;
if(si0){
goto L6;
}
}
L5:;
si0=5U;
l2=si0;
si0=l5;
sj0=i64_load(&i->m0,(U64)si0+8U);
sj1=1452125608678090791ULL;
sj0^=sj1;
si1=l5;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
sj2=-2410077182553881750ULL;
sj1^=sj2;
sj0|=sj1;
si0=!(sj0);
si0=!(si0);
if(si0){
goto L7;
}
si0=l5;
l4=si0;
goto L2;
L7:;
si0=l1;
si1=17462072U;
si2=7U;
si3=l6;
si4=476U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si4=l7;
si5=l5;
si0=f11342(i,si0,si1,si2,si3,si4,si5);
l4=si0;
si0=l5;
si1=l5;
si1=i32_load(&i->m0,(U64)si1);
l3=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=4U;
l2=si0;
si0=l3;
si1=1U;
si0=si0 == si1;
if(si0){
goto L3;
}
goto L2;
L4:;
si0=4U;
l2=si0;
si0=l1;
si1=17462079U;
si2=4U;
si3=l6;
si4=504U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si4=l7;
si5=l5;
si0=f11342(i,si0,si1,si2,si3,si4,si5);
l4=si0;
si0=l5;
si1=l5;
si1=i32_load(&i->m0,(U64)si1);
l3=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=1U;
si0=si0 != si1;
if(si0){
goto L2;
}
L3:;
si0=l5;
f5522(i,si0);
si0=4U;
l2=si0;
L2:;
si0=l0;
si1=l4;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l2;
i32_store(&i->m0,(U64)si0,si1);
L0:;
}

void f5616(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 si0,si1,si2,si3,si4,si5;
U64 sj0,sj1,sj2;
si0=l2;
si1=56U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
if(si0){
goto L1;
}
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
goto L0;
L1:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+48U);
l4=si0;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si0=l4;
si1=l4;
si2=4U;
si1+=si2;
si2=l3;
si3=-1U;
si2+=si3;
l3=si2;
si3=2U;
si2<<=(si3&31);
si0=f15144(i,si0,si1,si2);
si0=l2;
si1=l3;
i32_store(&i->m0,(U64)si0+56U,si1);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+88U);
l6=si0;
si1=180U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
si1=l5;
si1=i32_load(&i->m0,(U64)si1+28U);
l4=si1;
si0=si0 == si1;
if(si0){
goto L5;
}
si0=l4;
si1=468U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=2U;
si0<<=(si1&31);
l2=si0;
si0=l4;
si1=460U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
L6:;
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
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=l4;
si1=4U;
si0+=si1;
l4=si0;
si0=l3;
si1=l7;
si0=si0 != si1;
if(si0){
goto L6;
}
}
L5:;
si0=5U;
l2=si0;
si0=l5;
sj0=i64_load(&i->m0,(U64)si0+8U);
sj1=6476438649737923641ULL;
sj0^=sj1;
si1=l5;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
sj2=8472249669995929825ULL;
sj1^=sj2;
sj0|=sj1;
si0=!(sj0);
si0=!(si0);
if(si0){
goto L7;
}
si0=l5;
l4=si0;
goto L2;
L7:;
si0=l1;
si1=17462072U;
si2=7U;
si3=l6;
si4=476U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si4=l7;
si5=l5;
si0=f11342(i,si0,si1,si2,si3,si4,si5);
l4=si0;
si0=l5;
si1=l5;
si1=i32_load(&i->m0,(U64)si1);
l3=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=4U;
l2=si0;
si0=l3;
si1=1U;
si0=si0 == si1;
if(si0){
goto L3;
}
goto L2;
L4:;
si0=4U;
l2=si0;
si0=l1;
si1=17462079U;
si2=4U;
si3=l6;
si4=504U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si4=l7;
si5=l5;
si0=f11342(i,si0,si1,si2,si3,si4,si5);
l4=si0;
si0=l5;
si1=l5;
si1=i32_load(&i->m0,(U64)si1);
l3=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=1U;
si0=si0 != si1;
if(si0){
goto L2;
}
L3:;
si0=l5;
f5522(i,si0);
si0=4U;
l2=si0;
L2:;
si0=l0;
si1=l4;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l2;
i32_store(&i->m0,(U64)si0,si1);
L0:;
}

void f5617(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 si0,si1,si2,si3,si4,si5;
U64 sj0,sj1,sj2;
si0=l2;
si1=56U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
if(si0){
goto L1;
}
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
goto L0;
L1:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+48U);
l4=si0;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si0=l4;
si1=l4;
si2=4U;
si1+=si2;
si2=l3;
si3=-1U;
si2+=si3;
l3=si2;
si3=2U;
si2<<=(si3&31);
si0=f15144(i,si0,si1,si2);
si0=l2;
si1=l3;
i32_store(&i->m0,(U64)si0+56U,si1);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+88U);
l6=si0;
si1=28U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
si1=l5;
si1=i32_load(&i->m0,(U64)si1+28U);
l4=si1;
si0=si0 == si1;
if(si0){
goto L5;
}
si0=l4;
si1=468U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=2U;
si0<<=(si1&31);
l2=si0;
si0=l4;
si1=460U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
L6:;
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
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=l4;
si1=4U;
si0+=si1;
l4=si0;
si0=l3;
si1=l7;
si0=si0 != si1;
if(si0){
goto L6;
}
}
L5:;
si0=5U;
l2=si0;
si0=l5;
sj0=i64_load(&i->m0,(U64)si0+8U);
sj1=-8728238733499098070ULL;
sj0^=sj1;
si1=l5;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
sj2=4840787070268449094ULL;
sj1^=sj2;
sj0|=sj1;
si0=!(sj0);
si0=!(si0);
if(si0){
goto L7;
}
si0=l5;
l4=si0;
goto L2;
L7:;
si0=l1;
si1=17462072U;
si2=7U;
si3=l6;
si4=476U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si4=l7;
si5=l5;
si0=f11342(i,si0,si1,si2,si3,si4,si5);
l4=si0;
si0=l5;
si1=l5;
si1=i32_load(&i->m0,(U64)si1);
l3=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=4U;
l2=si0;
si0=l3;
si1=1U;
si0=si0 == si1;
if(si0){
goto L3;
}
goto L2;
L4:;
si0=4U;
l2=si0;
si0=l1;
si1=17462079U;
si2=4U;
si3=l6;
si4=504U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si4=l7;
si5=l5;
si0=f11342(i,si0,si1,si2,si3,si4,si5);
l4=si0;
si0=l5;
si1=l5;
si1=i32_load(&i->m0,(U64)si1);
l3=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=1U;
si0=si0 != si1;
if(si0){
goto L2;
}
L3:;
si0=l5;
f5522(i,si0);
si0=4U;
l2=si0;
L2:;
si0=l0;
si1=l4;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l2;
i32_store(&i->m0,(U64)si0,si1);
L0:;
}

void f5618(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 si0,si1,si2,si3,si4,si5;
U64 sj0,sj1,sj2;
si0=l2;
si1=56U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
if(si0){
goto L1;
}
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
goto L0;
L1:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+48U);
l4=si0;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si0=l4;
si1=l4;
si2=4U;
si1+=si2;
si2=l3;
si3=-1U;
si2+=si3;
l3=si2;
si3=2U;
si2<<=(si3&31);
si0=f15144(i,si0,si1,si2);
si0=l2;
si1=l3;
i32_store(&i->m0,(U64)si0+56U,si1);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+88U);
l6=si0;
si1=196U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
si1=l5;
si1=i32_load(&i->m0,(U64)si1+28U);
l4=si1;
si0=si0 == si1;
if(si0){
goto L5;
}
si0=l4;
si1=468U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=2U;
si0<<=(si1&31);
l2=si0;
si0=l4;
si1=460U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
L6:;
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
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=l4;
si1=4U;
si0+=si1;
l4=si0;
si0=l3;
si1=l7;
si0=si0 != si1;
if(si0){
goto L6;
}
}
L5:;
si0=5U;
l2=si0;
si0=l5;
sj0=i64_load(&i->m0,(U64)si0+8U);
sj1=3446945756117090825ULL;
sj0^=sj1;
si1=l5;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
sj2=4693606376958683464ULL;
sj1^=sj2;
sj0|=sj1;
si0=!(sj0);
si0=!(si0);
if(si0){
goto L7;
}
si0=l5;
l4=si0;
goto L2;
L7:;
si0=l1;
si1=17462072U;
si2=7U;
si3=l6;
si4=476U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si4=l7;
si5=l5;
si0=f11342(i,si0,si1,si2,si3,si4,si5);
l4=si0;
si0=l5;
si1=l5;
si1=i32_load(&i->m0,(U64)si1);
l3=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=4U;
l2=si0;
si0=l3;
si1=1U;
si0=si0 == si1;
if(si0){
goto L3;
}
goto L2;
L4:;
si0=4U;
l2=si0;
si0=l1;
si1=17462079U;
si2=4U;
si3=l6;
si4=504U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si4=l7;
si5=l5;
si0=f11342(i,si0,si1,si2,si3,si4,si5);
l4=si0;
si0=l5;
si1=l5;
si1=i32_load(&i->m0,(U64)si1);
l3=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=1U;
si0=si0 != si1;
if(si0){
goto L2;
}
L3:;
si0=l5;
f5522(i,si0);
si0=4U;
l2=si0;
L2:;
si0=l0;
si1=l4;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l2;
i32_store(&i->m0,(U64)si0,si1);
L0:;
}

void f5619(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 si0,si1,si2,si3,si4,si5;
U64 sj0,sj1,sj2;
si0=l2;
si1=56U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
if(si0){
goto L1;
}
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
goto L0;
L1:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+48U);
l4=si0;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si0=l4;
si1=l4;
si2=4U;
si1+=si2;
si2=l3;
si3=-1U;
si2+=si3;
l3=si2;
si3=2U;
si2<<=(si3&31);
si0=f15144(i,si0,si1,si2);
si0=l2;
si1=l3;
i32_store(&i->m0,(U64)si0+56U,si1);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+88U);
l6=si0;
si1=16U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
si1=l5;
si1=i32_load(&i->m0,(U64)si1+28U);
l4=si1;
si0=si0 == si1;
if(si0){
goto L5;
}
si0=l4;
si1=468U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=2U;
si0<<=(si1&31);
l2=si0;
si0=l4;
si1=460U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
L6:;
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
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=l4;
si1=4U;
si0+=si1;
l4=si0;
si0=l3;
si1=l7;
si0=si0 != si1;
if(si0){
goto L6;
}
}
L5:;
si0=5U;
l2=si0;
si0=l5;
sj0=i64_load(&i->m0,(U64)si0+8U);
sj1=117335274054898188ULL;
sj0^=sj1;
si1=l5;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
sj2=1019805153205046829ULL;
sj1^=sj2;
sj0|=sj1;
si0=!(sj0);
si0=!(si0);
if(si0){
goto L7;
}
si0=l5;
l4=si0;
goto L2;
L7:;
si0=l1;
si1=17462072U;
si2=7U;
si3=l6;
si4=476U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si4=l7;
si5=l5;
si0=f11342(i,si0,si1,si2,si3,si4,si5);
l4=si0;
si0=l5;
si1=l5;
si1=i32_load(&i->m0,(U64)si1);
l3=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=4U;
l2=si0;
si0=l3;
si1=1U;
si0=si0 == si1;
if(si0){
goto L3;
}
goto L2;
L4:;
si0=4U;
l2=si0;
si0=l1;
si1=17462079U;
si2=4U;
si3=l6;
si4=504U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si4=l7;
si5=l5;
si0=f11342(i,si0,si1,si2,si3,si4,si5);
l4=si0;
si0=l5;
si1=l5;
si1=i32_load(&i->m0,(U64)si1);
l3=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=1U;
si0=si0 != si1;
if(si0){
goto L2;
}
L3:;
si0=l5;
f5522(i,si0);
si0=4U;
l2=si0;
L2:;
si0=l0;
si1=l4;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l2;
i32_store(&i->m0,(U64)si0,si1);
L0:;
}

void f5620(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 si0,si1,si2,si3,si4,si5;
U64 sj0,sj1,sj2;
si0=l2;
si1=56U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
if(si0){
goto L1;
}
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
goto L0;
L1:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+48U);
l4=si0;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si0=l4;
si1=l4;
si2=4U;
si1+=si2;
si2=l3;
si3=-1U;
si2+=si3;
l3=si2;
si3=2U;
si2<<=(si3&31);
si0=f15144(i,si0,si1,si2);
si0=l2;
si1=l3;
i32_store(&i->m0,(U64)si0+56U,si1);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+88U);
l6=si0;
si1=216U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
si1=l5;
si1=i32_load(&i->m0,(U64)si1+28U);
l4=si1;
si0=si0 == si1;
if(si0){
goto L5;
}
si0=l4;
si1=468U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=2U;
si0<<=(si1&31);
l2=si0;
si0=l4;
si1=460U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
L6:;
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
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=l4;
si1=4U;
si0+=si1;
l4=si0;
si0=l3;
si1=l7;
si0=si0 != si1;
if(si0){
goto L6;
}
}
L5:;
si0=5U;
l2=si0;
si0=l5;
sj0=i64_load(&i->m0,(U64)si0+8U);
sj1=3775906874357198593ULL;
sj0^=sj1;
si1=l5;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
sj2=7023080588516176058ULL;
sj1^=sj2;
sj0|=sj1;
si0=!(sj0);
si0=!(si0);
if(si0){
goto L7;
}
si0=l5;
l4=si0;
goto L2;
L7:;
si0=l1;
si1=17462072U;
si2=7U;
si3=l6;
si4=476U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si4=l7;
si5=l5;
si0=f11342(i,si0,si1,si2,si3,si4,si5);
l4=si0;
si0=l5;
si1=l5;
si1=i32_load(&i->m0,(U64)si1);
l3=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=4U;
l2=si0;
si0=l3;
si1=1U;
si0=si0 == si1;
if(si0){
goto L3;
}
goto L2;
L4:;
si0=4U;
l2=si0;
si0=l1;
si1=17462079U;
si2=4U;
si3=l6;
si4=504U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si4=l7;
si5=l5;
si0=f11342(i,si0,si1,si2,si3,si4,si5);
l4=si0;
si0=l5;
si1=l5;
si1=i32_load(&i->m0,(U64)si1);
l3=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=1U;
si0=si0 != si1;
if(si0){
goto L2;
}
L3:;
si0=l5;
f5522(i,si0);
si0=4U;
l2=si0;
L2:;
si0=l0;
si1=l4;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l2;
i32_store(&i->m0,(U64)si0,si1);
L0:;
}

void f5621(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 si0,si1,si2,si3,si4,si5;
U64 sj0,sj1,sj2;
si0=l2;
si1=56U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
if(si0){
goto L1;
}
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
goto L0;
L1:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+48U);
l4=si0;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si0=l4;
si1=l4;
si2=4U;
si1+=si2;
si2=l3;
si3=-1U;
si2+=si3;
l3=si2;
si3=2U;
si2<<=(si3&31);
si0=f15144(i,si0,si1,si2);
si0=l2;
si1=l3;
i32_store(&i->m0,(U64)si0+56U,si1);
si0=0U;
si0=i32_load(&i->m0,(U64)si0+18660808U);
si1=2U;
si0=si0 != si1;
if(si0){
goto L2;
}
si0=0U;
si0=i32_load(&i->m0,(U64)si0+18660812U);
l6=si0;
si1=l5;
si1=i32_load(&i->m0,(U64)si1+28U);
l4=si1;
si0=si0 == si1;
if(si0){
goto L6;
}
si0=l4;
si1=468U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=2U;
si0<<=(si1&31);
l2=si0;
si0=l4;
si1=460U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
L7:;
{
si0=l2;
si0=!(si0);
if(si0){
goto L5;
}
si0=l2;
si1=-4U;
si0+=si1;
l2=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=l4;
si1=4U;
si0+=si1;
l4=si0;
si0=l3;
si1=l6;
si0=si0 != si1;
if(si0){
goto L7;
}
}
L6:;
si0=5U;
l2=si0;
si0=l5;
sj0=i64_load(&i->m0,(U64)si0+8U);
sj1=-3212669547250348752ULL;
sj0^=sj1;
si1=l5;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
sj2=5631972057126867773ULL;
sj1^=sj2;
sj0|=sj1;
si0=!(sj0);
si0=!(si0);
if(si0){
goto L8;
}
si0=l5;
l4=si0;
goto L3;
L8:;
si0=l1;
si1=17462072U;
si2=7U;
si3=l1;
si3=i32_load(&i->m0,(U64)si3+88U);
si4=476U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si4=l6;
si5=l5;
si0=f11342(i,si0,si1,si2,si3,si4,si5);
l4=si0;
si0=l5;
si1=l5;
si1=i32_load(&i->m0,(U64)si1);
l3=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=4U;
l2=si0;
si0=l3;
si1=1U;
si0=si0 == si1;
if(si0){
goto L4;
}
goto L3;
L5:;
si0=4U;
l2=si0;
si0=l1;
si1=17462079U;
si2=4U;
si3=l1;
si3=i32_load(&i->m0,(U64)si3+88U);
si4=504U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si4=l6;
si5=l5;
si0=f11342(i,si0,si1,si2,si3,si4,si5);
l4=si0;
si0=l5;
si1=l5;
si1=i32_load(&i->m0,(U64)si1);
l3=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=1U;
si0=si0 != si1;
if(si0){
goto L3;
}
L4:;
si0=l5;
f5522(i,si0);
si0=4U;
l2=si0;
L3:;
si0=l0;
si1=l4;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l2;
i32_store(&i->m0,(U64)si0,si1);
goto L0;
L2:;
si0=17379728U;
si1=36U;
si2=17379780U;
f634(i,si0,si1,si2);
UNREACHABLE;
L0:;
}

void f5622(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 si0,si1,si2,si3,si4,si5;
U64 sj0,sj1,sj2;
si0=l2;
si1=56U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
if(si0){
goto L1;
}
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
goto L0;
L1:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+48U);
l4=si0;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si0=l4;
si1=l4;
si2=4U;
si1+=si2;
si2=l3;
si3=-1U;
si2+=si3;
l3=si2;
si3=2U;
si2<<=(si3&31);
si0=f15144(i,si0,si1,si2);
si0=l2;
si1=l3;
i32_store(&i->m0,(U64)si0+56U,si1);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+88U);
l6=si0;
si1=100U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
si1=l5;
si1=i32_load(&i->m0,(U64)si1+28U);
l4=si1;
si0=si0 == si1;
if(si0){
goto L5;
}
si0=l4;
si1=468U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=2U;
si0<<=(si1&31);
l2=si0;
si0=l4;
si1=460U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
L6:;
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
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=l4;
si1=4U;
si0+=si1;
l4=si0;
si0=l3;
si1=l7;
si0=si0 != si1;
if(si0){
goto L6;
}
}
L5:;
si0=5U;
l2=si0;
si0=l5;
sj0=i64_load(&i->m0,(U64)si0+8U);
sj1=-1072820170293401612ULL;
sj0^=sj1;
si1=l5;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
sj2=2896637344846649340ULL;
sj1^=sj2;
sj0|=sj1;
si0=!(sj0);
si0=!(si0);
if(si0){
goto L7;
}
si0=l5;
l4=si0;
goto L2;
L7:;
si0=l1;
si1=17462072U;
si2=7U;
si3=l6;
si4=476U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si4=l7;
si5=l5;
si0=f11342(i,si0,si1,si2,si3,si4,si5);
l4=si0;
si0=l5;
si1=l5;
si1=i32_load(&i->m0,(U64)si1);
l3=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=4U;
l2=si0;
si0=l3;
si1=1U;
si0=si0 == si1;
if(si0){
goto L3;
}
goto L2;
L4:;
si0=4U;
l2=si0;
si0=l1;
si1=17462079U;
si2=4U;
si3=l6;
si4=504U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si4=l7;
si5=l5;
si0=f11342(i,si0,si1,si2,si3,si4,si5);
l4=si0;
si0=l5;
si1=l5;
si1=i32_load(&i->m0,(U64)si1);
l3=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=1U;
si0=si0 != si1;
if(si0){
goto L2;
}
L3:;
si0=l5;
f5522(i,si0);
si0=4U;
l2=si0;
L2:;
si0=l0;
si1=l4;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l2;
i32_store(&i->m0,(U64)si0,si1);
L0:;
}

void f5623(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 si0,si1,si2,si3,si4,si5;
U64 sj0,sj1,sj2;
si0=l2;
si1=56U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
if(si0){
goto L1;
}
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
goto L0;
L1:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+48U);
l4=si0;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si0=l4;
si1=l4;
si2=4U;
si1+=si2;
si2=l3;
si3=-1U;
si2+=si3;
l3=si2;
si3=2U;
si2<<=(si3&31);
si0=f15144(i,si0,si1,si2);
si0=l2;
si1=l3;
i32_store(&i->m0,(U64)si0+56U,si1);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+88U);
l6=si0;
si1=124U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
si1=l5;
si1=i32_load(&i->m0,(U64)si1+28U);
l4=si1;
si0=si0 == si1;
if(si0){
goto L5;
}
si0=l4;
si1=468U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=2U;
si0<<=(si1&31);
l2=si0;
si0=l4;
si1=460U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
L6:;
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
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=l4;
si1=4U;
si0+=si1;
l4=si0;
si0=l3;
si1=l7;
si0=si0 != si1;
if(si0){
goto L6;
}
}
L5:;
si0=5U;
l2=si0;
si0=l5;
sj0=i64_load(&i->m0,(U64)si0+8U);
sj1=-1637711233024962330ULL;
sj0^=sj1;
si1=l5;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
sj2=4363338491477771852ULL;
sj1^=sj2;
sj0|=sj1;
si0=!(sj0);
si0=!(si0);
if(si0){
goto L7;
}
si0=l5;
l4=si0;
goto L2;
L7:;
si0=l1;
si1=17462072U;
si2=7U;
si3=l6;
si4=476U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si4=l7;
si5=l5;
si0=f11342(i,si0,si1,si2,si3,si4,si5);
l4=si0;
si0=l5;
si1=l5;
si1=i32_load(&i->m0,(U64)si1);
l3=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=4U;
l2=si0;
si0=l3;
si1=1U;
si0=si0 == si1;
if(si0){
goto L3;
}
goto L2;
L4:;
si0=4U;
l2=si0;
si0=l1;
si1=17462079U;
si2=4U;
si3=l6;
si4=504U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si4=l7;
si5=l5;
si0=f11342(i,si0,si1,si2,si3,si4,si5);
l4=si0;
si0=l5;
si1=l5;
si1=i32_load(&i->m0,(U64)si1);
l3=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=1U;
si0=si0 != si1;
if(si0){
goto L2;
}
L3:;
si0=l5;
f5522(i,si0);
si0=4U;
l2=si0;
L2:;
si0=l0;
si1=l4;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l2;
i32_store(&i->m0,(U64)si0,si1);
L0:;
}

void f5624(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 si0,si1,si2,si3,si4,si5;
U64 sj0,sj1,sj2;
si0=l2;
si1=56U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
if(si0){
goto L1;
}
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
goto L0;
L1:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+48U);
l4=si0;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si0=l4;
si1=l4;
si2=4U;
si1+=si2;
si2=l3;
si3=-1U;
si2+=si3;
l3=si2;
si3=2U;
si2<<=(si3&31);
si0=f15144(i,si0,si1,si2);
si0=l2;
si1=l3;
i32_store(&i->m0,(U64)si0+56U,si1);
si0=0U;
si0=i32_load(&i->m0,(U64)si0+18662780U);
si1=2U;
si0=si0 != si1;
if(si0){
goto L2;
}
si0=0U;
si0=i32_load(&i->m0,(U64)si0+18662784U);
l6=si0;
si1=l5;
si1=i32_load(&i->m0,(U64)si1+28U);
l4=si1;
si0=si0 == si1;
if(si0){
goto L6;
}
si0=l4;
si1=468U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=2U;
si0<<=(si1&31);
l2=si0;
si0=l4;
si1=460U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
L7:;
{
si0=l2;
si0=!(si0);
if(si0){
goto L5;
}
si0=l2;
si1=-4U;
si0+=si1;
l2=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=l4;
si1=4U;
si0+=si1;
l4=si0;
si0=l3;
si1=l6;
si0=si0 != si1;
if(si0){
goto L7;
}
}
L6:;
si0=5U;
l2=si0;
si0=l5;
sj0=i64_load(&i->m0,(U64)si0+8U);
sj1=-6282472018227883139ULL;
sj0^=sj1;
si1=l5;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
sj2=670588366610077398ULL;
sj1^=sj2;
sj0|=sj1;
si0=!(sj0);
si0=!(si0);
if(si0){
goto L8;
}
si0=l5;
l4=si0;
goto L3;
L8:;
si0=l1;
si1=17462072U;
si2=7U;
si3=l1;
si3=i32_load(&i->m0,(U64)si3+88U);
si4=476U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si4=l6;
si5=l5;
si0=f11342(i,si0,si1,si2,si3,si4,si5);
l4=si0;
si0=l5;
si1=l5;
si1=i32_load(&i->m0,(U64)si1);
l3=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=4U;
l2=si0;
si0=l3;
si1=1U;
si0=si0 == si1;
if(si0){
goto L4;
}
goto L3;
L5:;
si0=4U;
l2=si0;
si0=l1;
si1=17462079U;
si2=4U;
si3=l1;
si3=i32_load(&i->m0,(U64)si3+88U);
si4=504U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si4=l6;
si5=l5;
si0=f11342(i,si0,si1,si2,si3,si4,si5);
l4=si0;
si0=l5;
si1=l5;
si1=i32_load(&i->m0,(U64)si1);
l3=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=1U;
si0=si0 != si1;
if(si0){
goto L3;
}
L4:;
si0=l5;
f5522(i,si0);
si0=4U;
l2=si0;
L3:;
si0=l0;
si1=l4;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l2;
i32_store(&i->m0,(U64)si0,si1);
goto L0;
L2:;
si0=17654574U;
si1=36U;
si2=17654628U;
f634(i,si0,si1,si2);
UNREACHABLE;
L0:;
}

void f5625(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 si0,si1,si2,si3,si4,si5;
U64 sj0,sj1,sj2;
si0=l2;
si1=56U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
if(si0){
goto L1;
}
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
goto L0;
L1:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+48U);
l4=si0;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si0=l4;
si1=l4;
si2=4U;
si1+=si2;
si2=l3;
si3=-1U;
si2+=si3;
l3=si2;
si3=2U;
si2<<=(si3&31);
si0=f15144(i,si0,si1,si2);
si0=l2;
si1=l3;
i32_store(&i->m0,(U64)si0+56U,si1);
si0=0U;
si0=i32_load(&i->m0,(U64)si0+18660640U);
si1=2U;
si0=si0 != si1;
if(si0){
goto L2;
}
si0=0U;
si0=i32_load(&i->m0,(U64)si0+18660644U);
l6=si0;
si1=l5;
si1=i32_load(&i->m0,(U64)si1+28U);
l4=si1;
si0=si0 == si1;
if(si0){
goto L6;
}
si0=l4;
si1=468U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=2U;
si0<<=(si1&31);
l2=si0;
si0=l4;
si1=460U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
L7:;
{
si0=l2;
si0=!(si0);
if(si0){
goto L5;
}
si0=l2;
si1=-4U;
si0+=si1;
l2=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=l4;
si1=4U;
si0+=si1;
l4=si0;
si0=l3;
si1=l6;
si0=si0 != si1;
if(si0){
goto L7;
}
}
L6:;
si0=5U;
l2=si0;
si0=l5;
sj0=i64_load(&i->m0,(U64)si0+8U);
sj1=1004651427489240371ULL;
sj0^=sj1;
si1=l5;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
sj2=-603137226117178736ULL;
sj1^=sj2;
sj0|=sj1;
si0=!(sj0);
si0=!(si0);
if(si0){
goto L8;
}
si0=l5;
l4=si0;
goto L3;
L8:;
si0=l1;
si1=17462072U;
si2=7U;
si3=l1;
si3=i32_load(&i->m0,(U64)si3+88U);
si4=476U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si4=l6;
si5=l5;
si0=f11342(i,si0,si1,si2,si3,si4,si5);
l4=si0;
si0=l5;
si1=l5;
si1=i32_load(&i->m0,(U64)si1);
l3=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=4U;
l2=si0;
si0=l3;
si1=1U;
si0=si0 == si1;
if(si0){
goto L4;
}
goto L3;
L5:;
si0=4U;
l2=si0;
si0=l1;
si1=17462079U;
si2=4U;
si3=l1;
si3=i32_load(&i->m0,(U64)si3+88U);
si4=504U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si4=l6;
si5=l5;
si0=f11342(i,si0,si1,si2,si3,si4,si5);
l4=si0;
si0=l5;
si1=l5;
si1=i32_load(&i->m0,(U64)si1);
l3=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=1U;
si0=si0 != si1;
if(si0){
goto L3;
}
L4:;
si0=l5;
f5522(i,si0);
si0=4U;
l2=si0;
L3:;
si0=l0;
si1=l4;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l2;
i32_store(&i->m0,(U64)si0,si1);
goto L0;
L2:;
si0=17337074U;
si1=36U;
si2=17337128U;
f634(i,si0,si1,si2);
UNREACHABLE;
L0:;
}

void f5626(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 si0,si1,si2,si3,si4,si5;
U64 sj0,sj1,sj2;
si0=l2;
si1=56U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
if(si0){
goto L1;
}
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
goto L0;
L1:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+48U);
l4=si0;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si0=l4;
si1=l4;
si2=4U;
si1+=si2;
si2=l3;
si3=-1U;
si2+=si3;
l3=si2;
si3=2U;
si2<<=(si3&31);
si0=f15144(i,si0,si1,si2);
si0=l2;
si1=l3;
i32_store(&i->m0,(U64)si0+56U,si1);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+88U);
l6=si0;
si1=176U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
si1=l5;
si1=i32_load(&i->m0,(U64)si1+28U);
l4=si1;
si0=si0 == si1;
if(si0){
goto L5;
}
si0=l4;
si1=468U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=2U;
si0<<=(si1&31);
l2=si0;
si0=l4;
si1=460U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
L6:;
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
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=l4;
si1=4U;
si0+=si1;
l4=si0;
si0=l3;
si1=l7;
si0=si0 != si1;
if(si0){
goto L6;
}
}
L5:;
si0=5U;
l2=si0;
si0=l5;
sj0=i64_load(&i->m0,(U64)si0+8U);
sj1=3774697963921938272ULL;
sj0^=sj1;
si1=l5;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
sj2=-8343973563354575502ULL;
sj1^=sj2;
sj0|=sj1;
si0=!(sj0);
si0=!(si0);
if(si0){
goto L7;
}
si0=l5;
l4=si0;
goto L2;
L7:;
si0=l1;
si1=17462072U;
si2=7U;
si3=l6;
si4=476U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si4=l7;
si5=l5;
si0=f11342(i,si0,si1,si2,si3,si4,si5);
l4=si0;
si0=l5;
si1=l5;
si1=i32_load(&i->m0,(U64)si1);
l3=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=4U;
l2=si0;
si0=l3;
si1=1U;
si0=si0 != si1;
if(si0){
goto L2;
}
goto L3;
L4:;
si0=4U;
l2=si0;
si0=l1;
si1=17462079U;
si2=4U;
si3=l6;
si4=504U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si4=l7;
si5=l5;
si0=f11342(i,si0,si1,si2,si3,si4,si5);
l4=si0;
si0=l5;
si1=l5;
si1=i32_load(&i->m0,(U64)si1);
l3=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=1U;
si0=si0 != si1;
if(si0){
goto L2;
}
L3:;
si0=l5;
f5522(i,si0);
si0=4U;
l2=si0;
L2:;
si0=l0;
si1=l4;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l2;
i32_store(&i->m0,(U64)si0,si1);
L0:;
}

void f5627(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 si0,si1,si2,si3,si4,si5;
U64 sj0,sj1,sj2;
si0=l2;
si1=56U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
if(si0){
goto L1;
}
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
goto L0;
L1:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+48U);
l4=si0;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si0=l4;
si1=l4;
si2=4U;
si1+=si2;
si2=l3;
si3=-1U;
si2+=si3;
l3=si2;
si3=2U;
si2<<=(si3&31);
si0=f15144(i,si0,si1,si2);
si0=l2;
si1=l3;
i32_store(&i->m0,(U64)si0+56U,si1);
si0=0U;
si0=i32_load(&i->m0,(U64)si0+18662880U);
si1=2U;
si0=si0 != si1;
if(si0){
goto L2;
}
si0=0U;
si0=i32_load(&i->m0,(U64)si0+18662884U);
l6=si0;
si1=l5;
si1=i32_load(&i->m0,(U64)si1+28U);
l4=si1;
si0=si0 == si1;
if(si0){
goto L6;
}
si0=l4;
si1=468U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=2U;
si0<<=(si1&31);
l2=si0;
si0=l4;
si1=460U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
L7:;
{
si0=l2;
si0=!(si0);
if(si0){
goto L5;
}
si0=l2;
si1=-4U;
si0+=si1;
l2=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=l4;
si1=4U;
si0+=si1;
l4=si0;
si0=l3;
si1=l6;
si0=si0 != si1;
if(si0){
goto L7;
}
}
L6:;
si0=5U;
l2=si0;
si0=l5;
sj0=i64_load(&i->m0,(U64)si0+8U);
sj1=410561936486949253ULL;
sj0^=sj1;
si1=l5;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
sj2=1902726085967826149ULL;
sj1^=sj2;
sj0|=sj1;
si0=!(sj0);
si0=!(si0);
if(si0){
goto L8;
}
si0=l5;
l4=si0;
goto L3;
L8:;
si0=l1;
si1=17462072U;
si2=7U;
si3=l1;
si3=i32_load(&i->m0,(U64)si3+88U);
si4=476U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si4=l6;
si5=l5;
si0=f11342(i,si0,si1,si2,si3,si4,si5);
l4=si0;
si0=l5;
si1=l5;
si1=i32_load(&i->m0,(U64)si1);
l3=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=4U;
l2=si0;
si0=l3;
si1=1U;
si0=si0 == si1;
if(si0){
goto L4;
}
goto L3;
L5:;
si0=4U;
l2=si0;
si0=l1;
si1=17462079U;
si2=4U;
si3=l1;
si3=i32_load(&i->m0,(U64)si3+88U);
si4=504U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si4=l6;
si5=l5;
si0=f11342(i,si0,si1,si2,si3,si4,si5);
l4=si0;
si0=l5;
si1=l5;
si1=i32_load(&i->m0,(U64)si1);
l3=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=1U;
si0=si0 != si1;
if(si0){
goto L3;
}
L4:;
si0=l5;
f5522(i,si0);
si0=4U;
l2=si0;
L3:;
si0=l0;
si1=l4;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l2;
i32_store(&i->m0,(U64)si0,si1);
goto L0;
L2:;
si0=17654574U;
si1=36U;
si2=17654628U;
f634(i,si0,si1,si2);
UNREACHABLE;
L0:;
}

void f5628(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 si0,si1,si2,si3,si4,si5;
U64 sj0,sj1,sj2;
si0=l2;
si1=56U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
if(si0){
goto L1;
}
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
goto L0;
L1:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+48U);
l4=si0;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si0=l4;
si1=l4;
si2=4U;
si1+=si2;
si2=l3;
si3=-1U;
si2+=si3;
l3=si2;
si3=2U;
si2<<=(si3&31);
si0=f15144(i,si0,si1,si2);
si0=l2;
si1=l3;
i32_store(&i->m0,(U64)si0+56U,si1);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+88U);
l6=si0;
si1=104U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
si1=l5;
si1=i32_load(&i->m0,(U64)si1+28U);
l4=si1;
si0=si0 == si1;
if(si0){
goto L5;
}
si0=l4;
si1=468U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=2U;
si0<<=(si1&31);
l2=si0;
si0=l4;
si1=460U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
L6:;
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
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=l4;
si1=4U;
si0+=si1;
l4=si0;
si0=l3;
si1=l7;
si0=si0 != si1;
if(si0){
goto L6;
}
}
L5:;
si0=5U;
l2=si0;
si0=l5;
sj0=i64_load(&i->m0,(U64)si0+8U);
sj1=2081779070480019484ULL;
sj0^=sj1;
si1=l5;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
sj2=-1020891871515713585ULL;
sj1^=sj2;
sj0|=sj1;
si0=!(sj0);
si0=!(si0);
if(si0){
goto L7;
}
si0=l5;
l4=si0;
goto L2;
L7:;
si0=l1;
si1=17462072U;
si2=7U;
si3=l6;
si4=476U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si4=l7;
si5=l5;
si0=f11342(i,si0,si1,si2,si3,si4,si5);
l4=si0;
si0=l5;
si1=l5;
si1=i32_load(&i->m0,(U64)si1);
l3=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=4U;
l2=si0;
si0=l3;
si1=1U;
si0=si0 == si1;
if(si0){
goto L3;
}
goto L2;
L4:;
si0=4U;
l2=si0;
si0=l1;
si1=17462079U;
si2=4U;
si3=l6;
si4=504U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si4=l7;
si5=l5;
si0=f11342(i,si0,si1,si2,si3,si4,si5);
l4=si0;
si0=l5;
si1=l5;
si1=i32_load(&i->m0,(U64)si1);
l3=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=1U;
si0=si0 != si1;
if(si0){
goto L2;
}
L3:;
si0=l5;
f5522(i,si0);
si0=4U;
l2=si0;
L2:;
si0=l0;
si1=l4;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l2;
i32_store(&i->m0,(U64)si0,si1);
L0:;
}

void f5629(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 si0,si1,si2,si3,si4,si5;
U64 sj0,sj1,sj2;
si0=l2;
si1=56U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
if(si0){
goto L1;
}
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
goto L0;
L1:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+48U);
l4=si0;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si0=l4;
si1=l4;
si2=4U;
si1+=si2;
si2=l3;
si3=-1U;
si2+=si3;
l3=si2;
si3=2U;
si2<<=(si3&31);
si0=f15144(i,si0,si1,si2);
si0=l2;
si1=l3;
i32_store(&i->m0,(U64)si0+56U,si1);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+88U);
l6=si0;
si1=92U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
si1=l5;
si1=i32_load(&i->m0,(U64)si1+28U);
l4=si1;
si0=si0 == si1;
if(si0){
goto L5;
}
si0=l4;
si1=468U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=2U;
si0<<=(si1&31);
l2=si0;
si0=l4;
si1=460U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
L6:;
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
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=l4;
si1=4U;
si0+=si1;
l4=si0;
si0=l3;
si1=l7;
si0=si0 != si1;
if(si0){
goto L6;
}
}
L5:;
si0=5U;
l2=si0;
si0=l5;
sj0=i64_load(&i->m0,(U64)si0+8U);
sj1=-8500963522299580898ULL;
sj0^=sj1;
si1=l5;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
sj2=-1672154940885437710ULL;
sj1^=sj2;
sj0|=sj1;
si0=!(sj0);
si0=!(si0);
if(si0){
goto L7;
}
si0=l5;
l4=si0;
goto L2;
L7:;
si0=l1;
si1=17462072U;
si2=7U;
si3=l6;
si4=476U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si4=l7;
si5=l5;
si0=f11342(i,si0,si1,si2,si3,si4,si5);
l4=si0;
si0=l5;
si1=l5;
si1=i32_load(&i->m0,(U64)si1);
l3=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=4U;
l2=si0;
si0=l3;
si1=1U;
si0=si0 == si1;
if(si0){
goto L3;
}
goto L2;
L4:;
si0=4U;
l2=si0;
si0=l1;
si1=17462079U;
si2=4U;
si3=l6;
si4=504U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si4=l7;
si5=l5;
si0=f11342(i,si0,si1,si2,si3,si4,si5);
l4=si0;
si0=l5;
si1=l5;
si1=i32_load(&i->m0,(U64)si1);
l3=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=1U;
si0=si0 != si1;
if(si0){
goto L2;
}
L3:;
si0=l5;
f5522(i,si0);
si0=4U;
l2=si0;
L2:;
si0=l0;
si1=l4;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l2;
i32_store(&i->m0,(U64)si0,si1);
L0:;
}


#include "w2c2_base.h"

#include "rustpython.h"

U32 f1830(rustpythonInstance*i,U32 l0,U32 l1) {
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

void f1831(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
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
si1=1292432U;
si2=3U;
si3=0U;
si4=0U;
f1832(i,si0,si1,si2,si3,si4);
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
f1833(i,si0,si1,si2,si3);
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
f1834(i,si0,si1);
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
f15271(i,si0);
L3:;
si0=l3;
f1900(i,si0);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+4U);
si0=!(si0);
if(si0){
goto L1;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
f15271(i,si0);
L1:;
si0=l3;
si1=64U;
si0+=si1;
i->g0=si0;
L0:;
}

void f1832(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4) {
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 l8=0;
U32 l9=0;
U32 l10=0;
U64 l11=0;
U64 l12=0;
U64 l13=0;
U64 l14=0;
U64 l15=0;
U64 l16=0;
U64 l17=0;
U32 si0,si1,si2;
U64 sj0,sj1,sj2;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si0=0U;
l6=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+8U);
l7=si0;
si0=!(si0);
if(si0){
goto L1;
}
si0=l5;
si0=!(si0);
if(si0){
goto L1;
}
si0=l7;
si1=96U;
si0*=si1;
si1=l5;
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
l6=si0;
L1:;
si0=l2;
if(si0){
goto L5;
}
si0=1U;
l8=si0;
goto L4;
L5:;
si0=l2;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L3;
}
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=l2;
si0=f15269(i,si0);
l8=si0;
si0=!(si0);
if(si0){
goto L2;
}
L4:;
si0=l8;
si1=l1;
si2=l2;
si0=f15390(i,si0,si1,si2);
l8=si0;
si0=2967024U;
si0=f2098(i,si0);
l1=si0;
si0=i32_load(&i->m0,(U64)si0);
l9=si0;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+4U);
l10=si1;
si1=i32_load(&i->m0,(U64)si1+12U);
si0=TF(i->t0,si1,U32 (*)(rustpythonInstance*,U32))(i,si0);
l1=si0;
si0=l9;
si1=l10;
si1=i32_load(&i->m0,(U64)si1+16U);
si0=TF(i->t0,si1,U32 (*)(rustpythonInstance*,U32))(i,si0);
l9=si0;
si0=l1;
si1=56U;
si0+=si1;
sj0=i64_load(&i->m0,(U64)si0);
l11=sj0;
si0=l1;
si1=48U;
si0+=si1;
sj0=i64_load(&i->m0,(U64)si0);
l12=sj0;
si0=l1;
si1=40U;
si0+=si1;
sj0=i64_load(&i->m0,(U64)si0);
l13=sj0;
si0=l1;
sj0=i64_load(&i->m0,(U64)si0+32U);
l14=sj0;
si0=l1;
sj0=i64_load(&i->m0,(U64)si0+8U);
l15=sj0;
si0=l1;
sj0=i64_load(&i->m0,(U64)si0);
l16=sj0;
si0=l7;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+4U);
si0=si0 != si1;
if(si0){
goto L6;
}
si0=l0;
si1=l7;
f1856(i,si0,si1);
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+8U);
l7=si0;
L6:;
si0=l5;
si1=l7;
si2=96U;
si1*=si2;
si0+=si1;
l1=si0;
si1=l6;
i32_store8(&i->m0,(U64)si0+93U,si1);
si0=l1;
si1=l3;
i32_store8(&i->m0,(U64)si0+92U,si1);
si0=l1;
si1=0U;
i32_store(&i->m0,(U64)si0+88U,si1);
si0=l1;
sj1=8ULL;
i64_store(&i->m0,(U64)si0+80U,sj1);
si0=l1;
si1=l2;
i32_store(&i->m0,(U64)si0+76U,si1);
si0=l1;
si1=l2;
i32_store(&i->m0,(U64)si0+72U,si1);
si0=l1;
si1=l8;
i32_store(&i->m0,(U64)si0+68U,si1);
si0=l1;
si1=l4;
i32_store(&i->m0,(U64)si0+64U,si1);
si0=l1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0+52U,sj1);
si0=l1;
sj1=17179869184ULL;
i64_store(&i->m0,(U64)si0+44U,sj1);
si0=l1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0+36U,sj1);
si0=l1;
si1=1299072U;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l1;
sj1=l16;
si2=l9;
sj2=(U64)(si2);
sj1^=sj2;
sj2=6364136223846793005ULL;
sj1*=sj2;
sj2=l15;
sj1^=sj2;
sj2=8ULL;
sj1=I64_ROTL(sj1,sj2);
sj2=6364136223846793005ULL;
sj1*=sj2;
l15=sj1;
sj2=l16;
sj1^=sj2;
sj2=24ULL;
sj1=I64_ROTL(sj1,sj2);
l16=sj1;
sj2=l11;
sj1^=sj2;
sj2=6364136223846793005ULL;
sj1*=sj2;
sj2=l15;
sj1^=sj2;
sj2=8ULL;
sj1=I64_ROTL(sj1,sj2);
sj2=6364136223846793005ULL;
sj1*=sj2;
l11=sj1;
sj2=l16;
sj1^=sj2;
sj2=24ULL;
sj1=I64_ROTL(sj1,sj2);
l17=sj1;
sj2=6364136223846793005ULL;
sj1*=sj2;
sj2=l11;
sj1^=sj2;
sj2=l17;
sj1=I64_ROTL(sj1,sj2);
i64_store(&i->m0,(U64)si0+24U,sj1);
si0=l1;
sj1=l16;
sj2=l12;
sj1^=sj2;
sj2=6364136223846793005ULL;
sj1*=sj2;
sj2=l15;
sj1^=sj2;
sj2=8ULL;
sj1=I64_ROTL(sj1,sj2);
sj2=6364136223846793005ULL;
sj1*=sj2;
l11=sj1;
sj2=l16;
sj1^=sj2;
sj2=24ULL;
sj1=I64_ROTL(sj1,sj2);
l12=sj1;
sj2=6364136223846793005ULL;
sj1*=sj2;
sj2=l11;
sj1^=sj2;
sj2=l12;
sj1=I64_ROTL(sj1,sj2);
i64_store(&i->m0,(U64)si0+16U,sj1);
si0=l1;
sj1=l16;
sj2=l13;
sj1^=sj2;
sj2=6364136223846793005ULL;
sj1*=sj2;
sj2=l15;
sj1^=sj2;
sj2=8ULL;
sj1=I64_ROTL(sj1,sj2);
sj2=6364136223846793005ULL;
sj1*=sj2;
l11=sj1;
sj2=l16;
sj1^=sj2;
sj2=24ULL;
sj1=I64_ROTL(sj1,sj2);
l12=sj1;
sj2=6364136223846793005ULL;
sj1*=sj2;
sj2=l11;
sj1^=sj2;
sj2=l12;
sj1=I64_ROTL(sj1,sj2);
i64_store(&i->m0,(U64)si0+8U,sj1);
si0=l1;
sj1=l16;
sj2=l14;
sj1^=sj2;
sj2=6364136223846793005ULL;
sj1*=sj2;
sj2=l15;
sj1^=sj2;
sj2=8ULL;
sj1=I64_ROTL(sj1,sj2);
sj2=6364136223846793005ULL;
sj1*=sj2;
l15=sj1;
sj2=l16;
sj1^=sj2;
sj2=24ULL;
sj1=I64_ROTL(sj1,sj2);
l16=sj1;
sj2=6364136223846793005ULL;
sj1*=sj2;
sj2=l15;
sj1^=sj2;
sj2=l16;
sj1=I64_ROTL(sj1,sj2);
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+8U);
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0+8U,si1);
goto L0;
L3:;
f53(i);
UNREACHABLE;
L2:;
si0=1U;
si1=l2;
f52(i,si0,si1);
UNREACHABLE;
L0:;
}

void f1833(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
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
goto L3;
}
si0=l1;
si1=12U;
si0+=si1;
l5=si0;
si0=l2;
si1=l3;
si2=80U;
si1*=si2;
si0+=si1;
l6=si0;
L4:;
{
si0=l2;
si0=i32_load(&i->m0,(U64)si0);
switch(si0){
case 0:
goto L23;
case 1:
goto L8;
case 2:
goto L11;
case 3:
goto L36;
case 4:
goto L12;
case 5:
goto L13;
case 6:
goto L25;
case 7:
goto L14;
case 8:
goto L26;
case 9:
goto L16;
case 10:
goto L27;
case 11:
goto L28;
case 12:
goto L29;
case 13:
goto L18;
case 14:
goto L37;
case 15:
goto L30;
case 16:
goto L31;
case 17:
goto L20;
case 18:
goto L32;
case 19:
goto L34;
case 20:
goto L38;
case 21:
goto L21;
case 22:
goto L22;
case 23:
goto L35;
case 24:
goto L5;
case 25:
goto L5;
case 26:
goto L5;
default:
goto L23;
}
L38:;
si0=l2;
si1=40U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=!(si0);
if(si0){
goto L39;
}
si0=l2;
si1=48U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=10U;
si0=si0 != si1;
if(si0){
goto L39;
}
si0=l3;
si1=1292504U;
si2=10U;
si0=f15389(i,si0,si1,si2);
if(si0){
goto L39;
}
si0=l2;
si1=36U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=!(si0);
if(si0){
goto L39;
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
L40:;
{
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
si1=11U;
si0=si0 != si1;
if(si0){
goto L41;
}
si0=l3;
si1=-8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=1292514U;
si2=11U;
si0=f15389(i,si0,si1,si2);
if(si0){
goto L41;
}
si0=l1;
si1=1U;
i32_store8(&i->m0,(U64)si0+24U,si1);
L41:;
si0=l3;
si1=40U;
si0+=si1;
l3=si0;
si0=l7;
si1=-40U;
si0+=si1;
l7=si0;
if(si0){
goto L40;
}
}
L39:;
si0=l2;
si1=28U;
si0+=si1;
l3=si0;
si0=l2;
si1=12U;
si0+=si1;
l8=si0;
goto L33;
L37:;
si0=39U;
l9=si0;
si0=l4;
si1=39U;
si2=0U;
f1850(i,si0,si1,si2);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+4U);
l1=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+1292554U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=31U;
si0+=si1;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+1292585U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=24U;
si0+=si1;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+1292578U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=16U;
si0+=si1;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+1292570U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=8U;
si0+=si1;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+1292562U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=40U;
si0+=si1;
si1=l2;
si2=20U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
f1697(i,si0,si1);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+44U);
l7=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+40U);
l10=si0;
goto L2;
L36:;
si0=l2;
si1=20U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
if(si0){
goto L24;
}
goto L5;
L35:;
si0=l4;
si1=40U;
si0+=si1;
si1=l1;
si2=l2;
si3=20U;
si2+=si3;
si2=i32_load(&i->m0,(U64)si2);
si3=0U;
f1836(i,si0,si1,si2,si3);
goto L10;
L34:;
si0=l2;
si1=20U;
si0+=si1;
l3=si0;
si0=l2;
si1=4U;
si0+=si1;
l8=si0;
L33:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+8U);
l7=si0;
si0=!(si0);
if(si0){
goto L5;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
l11=si0;
si1=l7;
si2=40U;
si1*=si2;
si0+=si1;
l12=si0;
L42:;
{
si0=l11;
si0=i32_load(&i->m0,(U64)si0+28U);
l3=si0;
si0=!(si0);
if(si0){
goto L44;
}
si0=l4;
si1=40U;
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
f1842(i,si0,si1,si2,si3,si4,si5,si6);
goto L43;
L44:;
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
L46:;
{
si0=l9;
si1=8U;
si0=si0 < si1;
if(si0){
goto L48;
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
goto L51;
}
si0=l3;
si1=l7;
si0-=si1;
l3=si0;
si0=!(si0);
if(si0){
goto L51;
}
si0=0U;
l10=si0;
L52:;
{
si0=l7;
si1=l10;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=46U;
si0=si0 == si1;
if(si0){
goto L47;
}
si0=l3;
si1=l10;
si2=1U;
si1+=si2;
l10=si1;
si0=si0 != si1;
if(si0){
goto L52;
}
}
si0=l3;
si1=l9;
si2=-8U;
si1+=si2;
l16=si1;
si0=si0 <= si1;
if(si0){
goto L50;
}
goto L49;
L51:;
si0=l9;
si1=-8U;
si0+=si1;
l16=si0;
si0=0U;
l3=si0;
L50:;
L53:;
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
goto L49;
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
goto L49;
}
si0=l3;
si1=8U;
si0+=si1;
l3=si0;
si1=l16;
si0=si0 <= si1;
if(si0){
goto L53;
}
}
L49:;
si0=l9;
si1=l3;
si0=si0 == si1;
if(si0){
goto L45;
}
L54:;
{
si0=l7;
si1=l3;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=46U;
si0=si0 != si1;
if(si0){
goto L55;
}
si0=l3;
l10=si0;
goto L47;
L55:;
si0=l9;
si1=l3;
si2=1U;
si1+=si2;
l3=si1;
si0=si0 != si1;
if(si0){
goto L54;
}
goto L45;
}
L48:;
si0=l9;
si0=!(si0);
if(si0){
goto L45;
}
si0=0U;
l10=si0;
si0=l7;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=46U;
si0=si0 == si1;
if(si0){
goto L47;
}
si0=1U;
l10=si0;
si0=l9;
si1=1U;
si0=si0 == si1;
if(si0){
goto L45;
}
si0=l7;
si0=i32_load8_u(&i->m0,(U64)si0+1U);
si1=46U;
si0=si0 == si1;
if(si0){
goto L47;
}
si0=2U;
l10=si0;
si0=l9;
si1=2U;
si0=si0 == si1;
if(si0){
goto L45;
}
si0=l7;
si0=i32_load8_u(&i->m0,(U64)si0+2U);
si1=46U;
si0=si0 == si1;
if(si0){
goto L47;
}
si0=3U;
l10=si0;
si0=l9;
si1=3U;
si0=si0 == si1;
if(si0){
goto L45;
}
si0=l7;
si0=i32_load8_u(&i->m0,(U64)si0+3U);
si1=46U;
si0=si0 == si1;
if(si0){
goto L47;
}
si0=4U;
l10=si0;
si0=l9;
si1=4U;
si0=si0 == si1;
if(si0){
goto L45;
}
si0=l7;
si0=i32_load8_u(&i->m0,(U64)si0+4U);
si1=46U;
si0=si0 == si1;
if(si0){
goto L47;
}
si0=5U;
l10=si0;
si0=l9;
si1=5U;
si0=si0 == si1;
if(si0){
goto L45;
}
si0=l7;
si0=i32_load8_u(&i->m0,(U64)si0+5U);
si1=46U;
si0=si0 == si1;
if(si0){
goto L47;
}
si0=6U;
l10=si0;
si0=l9;
si1=6U;
si0=si0 == si1;
if(si0){
goto L45;
}
si0=l7;
si0=i32_load8_u(&i->m0,(U64)si0+6U);
si1=46U;
si0=si0 != si1;
if(si0){
goto L45;
}
L47:;
si0=l13;
si1=l10;
si0+=si1;
l3=si0;
si1=l15;
si0=si0 >= si1;
if(si0){
goto L56;
}
si0=l14;
si1=l3;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=46U;
si0=si0 != si1;
if(si0){
goto L56;
}
si0=l3;
l15=si0;
goto L45;
L56:;
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
goto L46;
}
}
L45:;
si0=l4;
si1=40U;
si0+=si1;
si1=l1;
si2=l14;
si3=l15;
si4=4U;
si5=l8;
si5=i32_load(&i->m0,(U64)si5);
si6=l8;
si6=i32_load(&i->m0,(U64)si6+4U);
f1842(i,si0,si1,si2,si3,si4,si5,si6);
L43:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+40U);
l3=si0;
if(si0){
goto L6;
}
si0=l11;
si1=40U;
si0+=si1;
l11=si0;
si1=l12;
si0=si0 != si1;
if(si0){
goto L42;
}
goto L5;
}
L32:;
si0=l4;
si1=40U;
si0+=si1;
si1=l1;
si2=l2;
si3=20U;
si2+=si3;
si2=i32_load(&i->m0,(U64)si2);
si3=0U;
f1836(i,si0,si1,si2,si3);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+40U);
l3=si0;
if(si0){
goto L6;
}
si0=l2;
si1=24U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=!(si0);
if(si0){
goto L5;
}
si0=l4;
si1=40U;
si0+=si1;
si1=l1;
si2=l3;
si3=0U;
f1836(i,si0,si1,si2,si3);
goto L10;
L31:;
si0=l2;
si1=56U;
si0+=si1;
l16=si0;
si0=l2;
si1=44U;
si0+=si1;
l17=si0;
si0=l2;
si1=32U;
si0+=si1;
l7=si0;
si0=l2;
si1=20U;
si0+=si1;
l3=si0;
si0=l2;
si1=4U;
si0+=si1;
l9=si0;
goto L19;
L30:;
si0=l2;
si1=20U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=!(si0);
if(si0){
goto L57;
}
si0=l4;
si1=40U;
si0+=si1;
si1=l1;
si2=l3;
si3=0U;
f1836(i,si0,si1,si2,si3);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+40U);
l3=si0;
if(si0){
goto L6;
}
L57:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+24U);
l3=si0;
si0=!(si0);
if(si0){
goto L5;
}
si0=l4;
si1=40U;
si0+=si1;
si1=l1;
si2=l3;
si3=0U;
f1836(i,si0,si1,si2,si3);
goto L10;
L29:;
si0=l2;
si1=32U;
si0+=si1;
l9=si0;
si0=l2;
si1=20U;
si0+=si1;
l3=si0;
goto L17;
L28:;
si0=l4;
si1=40U;
si0+=si1;
si1=l1;
si2=l2;
si3=20U;
si2+=si3;
si2=i32_load(&i->m0,(U64)si2);
si3=0U;
f1836(i,si0,si1,si2,si3);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+40U);
l3=si0;
if(si0){
goto L6;
}
si0=l4;
si1=40U;
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
f1833(i,si0,si1,si2,si3);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+40U);
l3=si0;
if(si0){
goto L6;
}
si0=l4;
si1=40U;
si0+=si1;
si1=l1;
si2=l2;
si2=i32_load(&i->m0,(U64)si2+36U);
si3=l2;
si4=44U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
f1833(i,si0,si1,si2,si3);
goto L10;
L27:;
si0=l4;
si1=40U;
si0+=si1;
si1=l1;
si2=l2;
si3=20U;
si2+=si3;
si2=i32_load(&i->m0,(U64)si2);
si3=0U;
f1836(i,si0,si1,si2,si3);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+40U);
l3=si0;
if(si0){
goto L6;
}
si0=l4;
si1=40U;
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
f1833(i,si0,si1,si2,si3);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+40U);
l3=si0;
if(si0){
goto L6;
}
si0=l4;
si1=40U;
si0+=si1;
si1=l1;
si2=l2;
si2=i32_load(&i->m0,(U64)si2+36U);
si3=l2;
si4=44U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
f1833(i,si0,si1,si2,si3);
goto L10;
L26:;
si0=l2;
si1=40U;
si0+=si1;
l10=si0;
si0=l2;
si1=28U;
si0+=si1;
l7=si0;
goto L15;
L25:;
si0=l4;
si1=40U;
si0+=si1;
si1=l1;
si2=l2;
si3=20U;
si2+=si3;
si2=i32_load(&i->m0,(U64)si2);
si3=1U;
f1836(i,si0,si1,si2,si3);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+40U);
l3=si0;
if(si0){
goto L6;
}
si0=l4;
si1=40U;
si0+=si1;
si1=l1;
si2=l2;
si3=24U;
si2+=si3;
si2=i32_load(&i->m0,(U64)si2);
si3=0U;
f1836(i,si0,si1,si2,si3);
goto L10;
L24:;
si0=l4;
si1=40U;
si0+=si1;
si1=l1;
si2=l3;
si3=0U;
f1836(i,si0,si1,si2,si3);
goto L10;
L23:;
si0=l2;
si1=48U;
si0+=si1;
l3=si0;
si0=l2;
si1=36U;
si0+=si1;
l16=si0;
si0=l2;
si1=20U;
si0+=si1;
l9=si0;
si0=l2;
si1=4U;
si0+=si1;
l17=si0;
goto L7;
L22:;
si0=l2;
si1=28U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=!(si0);
if(si0){
goto L5;
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
L58:;
{
si0=l4;
si1=40U;
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
f1842(i,si0,si1,si2,si3,si4,si5,si6);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+40U);
l3=si0;
if(si0){
goto L6;
}
si0=l7;
si1=12U;
si0+=si1;
l7=si0;
si1=l17;
si0=si0 != si1;
if(si0){
goto L58;
}
goto L5;
}
L21:;
si0=l2;
si1=28U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=!(si0);
if(si0){
goto L5;
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
L59:;
{
si0=l4;
si1=40U;
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
f1842(i,si0,si1,si2,si3,si4,si5,si6);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+40U);
l3=si0;
if(si0){
goto L6;
}
si0=l7;
si1=12U;
si0+=si1;
l7=si0;
si1=l17;
si0=si0 != si1;
if(si0){
goto L59;
}
goto L5;
}
L20:;
si0=l2;
si1=56U;
si0+=si1;
l16=si0;
si0=l2;
si1=44U;
si0+=si1;
l17=si0;
si0=l2;
si1=32U;
si0+=si1;
l7=si0;
si0=l2;
si1=20U;
si0+=si1;
l3=si0;
si0=l2;
si1=4U;
si0+=si1;
l9=si0;
L19:;
si0=l4;
si1=40U;
si0+=si1;
si1=l1;
si2=l2;
si2=i32_load(&i->m0,(U64)si2+20U);
si3=l3;
si3=i32_load(&i->m0,(U64)si3+8U);
f1833(i,si0,si1,si2,si3);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+40U);
l3=si0;
if(si0){
goto L6;
}
si0=l7;
si0=i32_load(&i->m0,(U64)si0+8U);
l3=si0;
si0=!(si0);
if(si0){
goto L60;
}
si0=l3;
si1=44U;
si0*=si1;
l10=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+32U);
si1=24U;
si0+=si1;
l7=si0;
L61:;
{
si0=l7;
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=!(si0);
if(si0){
goto L62;
}
si0=l4;
si1=40U;
si0+=si1;
si1=l1;
si2=l3;
si3=0U;
f1836(i,si0,si1,si2,si3);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+40U);
l3=si0;
if(si0){
goto L6;
}
L62:;
si0=l7;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=!(si0);
if(si0){
goto L63;
}
si0=l4;
si1=40U;
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
si6=l9;
si6=i32_load(&i->m0,(U64)si6+4U);
f1842(i,si0,si1,si2,si3,si4,si5,si6);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+40U);
l3=si0;
if(si0){
goto L6;
}
L63:;
si0=l4;
si1=40U;
si0+=si1;
si1=l1;
si2=l7;
si3=-8U;
si2+=si3;
si2=i32_load(&i->m0,(U64)si2);
si3=l7;
si3=i32_load(&i->m0,(U64)si3);
f1833(i,si0,si1,si2,si3);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+40U);
l3=si0;
if(si0){
goto L6;
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
goto L61;
}
}
L60:;
si0=l4;
si1=40U;
si0+=si1;
si1=l1;
si2=l2;
si2=i32_load(&i->m0,(U64)si2+44U);
si3=l17;
si3=i32_load(&i->m0,(U64)si3+8U);
f1833(i,si0,si1,si2,si3);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+40U);
l3=si0;
if(si0){
goto L6;
}
si0=l4;
si1=40U;
si0+=si1;
si1=l1;
si2=l2;
si2=i32_load(&i->m0,(U64)si2+56U);
si3=l16;
si3=i32_load(&i->m0,(U64)si3+8U);
f1833(i,si0,si1,si2,si3);
goto L10;
L18:;
si0=l2;
si1=32U;
si0+=si1;
l9=si0;
si0=l2;
si1=20U;
si0+=si1;
l3=si0;
L17:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+8U);
l3=si0;
si0=!(si0);
if(si0){
goto L64;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0+20U);
l7=si0;
si1=l3;
si2=6U;
si1<<=(si2&31);
si0+=si1;
l10=si0;
L65:;
{
si0=l4;
si1=40U;
si0+=si1;
si1=l1;
si2=l7;
si3=0U;
f1836(i,si0,si1,si2,si3);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+40U);
l3=si0;
if(si0){
goto L6;
}
si0=l7;
si1=56U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=!(si0);
if(si0){
goto L66;
}
si0=l4;
si1=40U;
si0+=si1;
si1=l1;
si2=l3;
si3=1U;
f1836(i,si0,si1,si2,si3);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+40U);
l3=si0;
if(si0){
goto L6;
}
L66:;
si0=l7;
si1=64U;
si0+=si1;
l7=si0;
si1=l10;
si0=si0 != si1;
if(si0){
goto L65;
}
}
L64:;
si0=l4;
si1=40U;
si0+=si1;
si1=l1;
si2=l2;
si2=i32_load(&i->m0,(U64)si2+32U);
si3=l9;
si3=i32_load(&i->m0,(U64)si3+8U);
f1833(i,si0,si1,si2,si3);
goto L10;
L16:;
si0=l2;
si1=40U;
si0+=si1;
l10=si0;
si0=l2;
si1=28U;
si0+=si1;
l7=si0;
L15:;
si0=l4;
si1=40U;
si0+=si1;
si1=l1;
si2=l2;
si2=i32_load(&i->m0,(U64)si2+20U);
si3=1U;
f1836(i,si0,si1,si2,si3);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+40U);
l3=si0;
if(si0){
goto L6;
}
si0=l4;
si1=40U;
si0+=si1;
si1=l1;
si2=l2;
si2=i32_load(&i->m0,(U64)si2+24U);
si3=0U;
f1836(i,si0,si1,si2,si3);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+40U);
l3=si0;
if(si0){
goto L6;
}
si0=l4;
si1=40U;
si0+=si1;
si1=l1;
si2=l2;
si2=i32_load(&i->m0,(U64)si2+28U);
si3=l7;
si3=i32_load(&i->m0,(U64)si3+8U);
f1833(i,si0,si1,si2,si3);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+40U);
l3=si0;
if(si0){
goto L6;
}
si0=l4;
si1=40U;
si0+=si1;
si1=l1;
si2=l2;
si2=i32_load(&i->m0,(U64)si2+40U);
si3=l10;
si3=i32_load(&i->m0,(U64)si3+8U);
f1833(i,si0,si1,si2,si3);
goto L10;
L14:;
si0=l2;
si1=20U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=i32_load(&i->m0,(U64)si0);
si1=34U;
si0=si0 != si1;
if(si0){
goto L69;
}
si0=l2;
si1=32U;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=255U;
si0&=si1;
if(si0){
goto L68;
}
L69:;
si0=l4;
si1=40U;
si0+=si1;
si1=l1;
si2=l3;
si3=1U;
f1836(i,si0,si1,si2,si3);
goto L67;
L68:;
si0=l4;
si1=40U;
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
f1842(i,si0,si1,si2,si3,si4,si5,si6);
L67:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+40U);
l3=si0;
if(si0){
goto L6;
}
si0=l1;
si0=i32_load8_u(&i->m0,(U64)si0+24U);
if(si0){
goto L70;
}
si0=l4;
si1=40U;
si0+=si1;
si1=l1;
si2=l2;
si2=i32_load(&i->m0,(U64)si2+24U);
si3=0U;
f1836(i,si0,si1,si2,si3);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+40U);
l3=si0;
if(si0){
goto L6;
}
L70:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+28U);
l3=si0;
si0=!(si0);
if(si0){
goto L5;
}
si0=l4;
si1=40U;
si0+=si1;
si1=l1;
si2=l3;
si3=0U;
f1836(i,si0,si1,si2,si3);
goto L10;
L13:;
si0=l2;
si1=28U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=!(si0);
if(si0){
goto L71;
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
L72:;
{
si0=l4;
si1=40U;
si0+=si1;
si1=l1;
si2=l7;
si3=1U;
f1836(i,si0,si1,si2,si3);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+40U);
l3=si0;
if(si0){
goto L6;
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
si0=l4;
si1=40U;
si0+=si1;
si1=l1;
si2=l2;
si2=i32_load(&i->m0,(U64)si2+32U);
si3=0U;
f1836(i,si0,si1,si2,si3);
goto L10;
L12:;
si0=l2;
si1=28U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=!(si0);
if(si0){
goto L5;
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
L73:;
{
si0=l4;
si1=40U;
si0+=si1;
si1=l1;
si2=l7;
si3=2U;
f1836(i,si0,si1,si2,si3);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+40U);
l3=si0;
if(si0){
goto L6;
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
goto L73;
}
goto L5;
}
L11:;
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
f1832(i,si0,si1,si2,si3,si4);
si0=l4;
si1=0U;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l4;
sj1=1ULL;
i64_store(&i->m0,(U64)si0+24U,sj1);
si0=l4;
si1=3U;
i32_store8(&i->m0,(U64)si0+72U,si1);
si0=l4;
si1=32U;
i32_store(&i->m0,(U64)si0+56U,si1);
si0=l4;
si1=0U;
i32_store(&i->m0,(U64)si0+68U,si1);
si0=l4;
si1=1291796U;
i32_store(&i->m0,(U64)si0+64U,si1);
si0=l4;
si1=0U;
i32_store(&i->m0,(U64)si0+48U,si1);
si0=l4;
si1=0U;
i32_store(&i->m0,(U64)si0+40U,si1);
si0=l4;
si1=l4;
si2=24U;
si1+=si2;
i32_store(&i->m0,(U64)si0+60U,si1);
si0=l4;
si1=40U;
si0+=si1;
si1=l16;
si2=l13;
si0=f713(i,si0,si1,si2);
if(si0){
goto L9;
}
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
l3=si1;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1+24U);
l18=sj1;
i64_store(&i->m0,(U64)si0+8U,sj1);
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
si1=40U;
si0+=si1;
si1=l1;
si2=1292525U;
si3=10U;
si4=3U;
si5=l9;
si6=l2;
si7=8U;
si6+=si7;
si6=i32_load(&i->m0,(U64)si6);
l17=si6;
f1842(i,si0,si1,si2,si3,si4,si5,si6);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+40U);
l3=si0;
if(si0){
goto L74;
}
si0=l4;
si1=40U;
si0+=si1;
si1=l1;
si2=1292535U;
si3=12U;
si4=3U;
si5=l9;
si6=l17;
f1842(i,si0,si1,si2,si3,si4,si5,si6);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+40U);
l3=si0;
if(si0){
goto L74;
}
si0=l4;
si1=40U;
si0+=si1;
si1=l1;
si2=1292547U;
si3=7U;
si4=3U;
si5=l9;
si6=l17;
f1842(i,si0,si1,si2,si3,si4,si5,si6);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+40U);
l3=si0;
if(si0){
goto L74;
}
si0=l4;
si1=40U;
si0+=si1;
si1=l1;
si2=1292176U;
si3=9U;
si4=3U;
si5=l9;
si6=l17;
f1842(i,si0,si1,si2,si3,si4,si5,si6);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+40U);
l3=si0;
if(si0){
goto L74;
}
si0=l4;
si1=40U;
si0+=si1;
si1=l1;
si2=l2;
si2=i32_load(&i->m0,(U64)si2+56U);
si3=l2;
si4=64U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
f1833(i,si0,si1,si2,si3);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+40U);
l3=si0;
if(si0){
goto L74;
}
si0=l1;
f1841(i,si0);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+12U);
l3=si0;
si0=!(si0);
if(si0){
goto L75;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+16U);
si0=!(si0);
if(si0){
goto L75;
}
si0=l3;
f15271(i,si0);
L75:;
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
goto L76;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0+32U);
l7=si0;
si0=l3;
si1=56U;
si0*=si1;
l10=si0;
L77:;
{
si0=l4;
si1=40U;
si0+=si1;
si1=l1;
si2=l7;
si3=0U;
f1836(i,si0,si1,si2,si3);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+40U);
l3=si0;
if(si0){
goto L6;
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
goto L77;
}
}
L76:;
si0=l2;
si1=52U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=!(si0);
if(si0){
goto L78;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0+44U);
l7=si0;
si0=l3;
si1=88U;
si0*=si1;
l10=si0;
L79:;
{
si0=l4;
si1=40U;
si0+=si1;
si1=l1;
si2=l7;
si3=0U;
f1836(i,si0,si1,si2,si3);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+40U);
l3=si0;
if(si0){
goto L6;
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
goto L79;
}
}
L78:;
si0=l2;
si1=76U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=!(si0);
if(si0){
goto L80;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0+68U);
l7=si0;
si0=l3;
si1=56U;
si0*=si1;
l10=si0;
L81:;
{
si0=l4;
si1=40U;
si0+=si1;
si1=l1;
si2=l7;
si3=0U;
f1836(i,si0,si1,si2,si3);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+40U);
l3=si0;
if(si0){
goto L6;
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
goto L81;
}
}
L80:;
si0=l4;
si1=40U;
si0+=si1;
si1=l1;
si2=l16;
si3=l13;
si4=3U;
si5=l9;
si6=l17;
f1842(i,si0,si1,si2,si3,si4,si5,si6);
goto L10;
L74:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+56U);
l7=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+52U);
l10=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+48U);
l9=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+44U);
l1=si0;
si0=l11;
si0=!(si0);
if(si0){
goto L2;
}
si0=l15;
si0=!(si0);
if(si0){
goto L2;
}
si0=l11;
f15271(i,si0);
goto L2;
L10:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+40U);
l3=si0;
si0=!(si0);
if(si0){
goto L5;
}
goto L6;
L9:;
si0=1291820U;
si1=55U;
si2=l4;
si3=8U;
si2+=si3;
si3=1291876U;
si4=1291968U;
f712(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L8:;
si0=l2;
si1=48U;
si0+=si1;
l3=si0;
si0=l2;
si1=36U;
si0+=si1;
l16=si0;
si0=l2;
si1=20U;
si0+=si1;
l9=si0;
si0=l2;
si1=4U;
si0+=si1;
l17=si0;
L7:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+8U);
l3=si0;
si0=!(si0);
if(si0){
goto L82;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0+48U);
l7=si0;
si0=l3;
si1=56U;
si0*=si1;
l10=si0;
L83:;
{
si0=l4;
si1=40U;
si0+=si1;
si1=l1;
si2=l7;
si3=0U;
f1836(i,si0,si1,si2,si3);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+40U);
l3=si0;
if(si0){
goto L6;
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
goto L83;
}
}
L82:;
si0=l4;
si1=40U;
si0+=si1;
si1=l1;
si2=l2;
si2=i32_load(&i->m0,(U64)si2+20U);
l7=si2;
si3=l9;
si3=i32_load(&i->m0,(U64)si3+8U);
l10=si3;
si4=3U;
si5=l2;
si5=i32_load(&i->m0,(U64)si5+4U);
l9=si5;
si6=l17;
si6=i32_load(&i->m0,(U64)si6+4U);
f1842(i,si0,si1,si2,si3,si4,si5,si6);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+40U);
l3=si0;
if(si0){
goto L6;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0+60U);
l3=si0;
si0=!(si0);
if(si0){
goto L84;
}
si0=l1;
si0=i32_load8_u(&i->m0,(U64)si0+24U);
if(si0){
goto L84;
}
si0=l4;
si1=40U;
si0+=si1;
si1=l1;
si2=l3;
si3=0U;
f1836(i,si0,si1,si2,si3);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+40U);
l3=si0;
if(si0){
goto L6;
}
L84:;
si0=l4;
si1=40U;
si0+=si1;
si1=l1;
si2=l7;
si3=l10;
si4=l2;
si4=i32_load(&i->m0,(U64)si4+32U);
si5=l9;
f1843(i,si0,si1,si2,si3,si4,si5);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+40U);
l3=si0;
if(si0){
goto L6;
}
si0=l4;
si1=40U;
si0+=si1;
si1=l1;
si2=l2;
si2=i32_load(&i->m0,(U64)si2+36U);
si3=l16;
si3=i32_load(&i->m0,(U64)si3+8U);
f1833(i,si0,si1,si2,si3);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+40U);
l3=si0;
if(si0){
goto L6;
}
si0=l1;
f1841(i,si0);
goto L5;
L6:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+56U);
l7=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+52U);
l10=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+48U);
l9=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+44U);
l1=si0;
goto L2;
L5:;
si0=l2;
si1=80U;
si0+=si1;
l2=si0;
si1=l6;
si0=si0 != si1;
if(si0){
goto L4;
}
}
L3:;
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
goto L1;
L2:;
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
L1:;
si0=l4;
si1=80U;
si0+=si1;
i->g0=si0;
L0:;
}

void f1834(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 si0,si1,si2,si3,si4;
U64 sj1;
si0=i->g0;
si1=144U;
si0-=si1;
l2=si0;
i->g0=si0;
si0=l2;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+8U);
l3=si1;
i32_store(&i->m0,(U64)si0+104U,si1);
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
l3=si0;
si1=2U;
si0=si0 == si1;
if(si0){
goto L1;
}
si0=l4;
si0=i32_load16_u(&i->m0,(U64)si0+94U);
l5=si0;
si0=l2;
si1=8U;
si0+=si1;
si1=l4;
si2=93U;
si0=f15390(i,si0,si1,si2);
si0=l2;
si1=l5;
i32_store16(&i->m0,(U64)si0+102U,si1);
si0=l2;
si1=l3;
i32_store8(&i->m0,(U64)si0+101U,si1);
si0=l2;
si1=0U;
i32_store(&i->m0,(U64)si0+136U,si1);
si0=l2;
sj1=4ULL;
i64_store(&i->m0,(U64)si0+128U,sj1);
si0=l2;
si1=104U;
si0+=si1;
si1=l2;
si2=128U;
si1+=si2;
si2=l2;
si3=8U;
si2+=si3;
f1838(i,si0,si1,si2);
si0=l2;
si0=i32_load(&i->m0,(U64)si0+132U);
si0=!(si0);
if(si0){
goto L3;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0+128U);
f15271(i,si0);
L3:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+104U);
l3=si0;
if(si0){
goto L5;
}
si0=l0;
si1=l2;
si2=8U;
si1+=si2;
si2=96U;
si0=f15390(i,si0,si1,si2);
goto L4;
L5:;
si0=l0;
si1=l2;
sj1=i64_load(&i->m0,(U64)si1+108U);
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l0;
si1=12U;
si0+=si1;
si1=l2;
si2=104U;
si1+=si2;
si2=12U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=2U;
i32_store8(&i->m0,(U64)si0+93U,si1);
si0=l0;
si1=l3;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=80U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L6;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0+76U);
f15271(i,si0);
L6:;
si0=l2;
si1=44U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l0=si0;
si0=!(si0);
if(si0){
goto L7;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0+40U);
si1=l0;
si2=2U;
si1<<=(si2&31);
si2=11U;
si1+=si2;
si2=-8U;
si1&=si2;
si0-=si1;
f15271(i,si0);
L7:;
si0=l2;
si1=56U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si0=l2;
si1=64U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
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
f15271(i,si0);
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
f15271(i,si0);
L11:;
si0=l0;
si1=32U;
si0+=si1;
l0=si0;
si0=l3;
si1=-1U;
si0+=si1;
l3=si0;
if(si0){
goto L9;
}
}
L8:;
si0=l2;
si1=60U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L12;
}
si0=l5;
f15271(i,si0);
L12:;
si0=l2;
si1=88U;
si0+=si1;
f1900(i,si0);
si0=l2;
si1=92U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L4;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0+88U);
f15271(i,si0);
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
f15271(i,si0);
L13:;
si0=l1;
f1900(i,si0);
si0=l1;
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L14;
}
si0=l4;
f15271(i,si0);
L14:;
si0=l2;
si1=144U;
si0+=si1;
i->g0=si0;
goto L0;
L2:;
si0=l2;
si1=0U;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=0U;
si1=l2;
si2=104U;
si1+=si2;
si2=1292436U;
si3=l2;
si4=8U;
si3+=si4;
si4=1292456U;
f2054(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L1:;
si0=1292185U;
si1=43U;
si2=1292440U;
f673(i,si0,si1,si2);
UNREACHABLE;
L0:;
}

void f1835(rustpythonInstance*i,U32 l0,U32 l1) {
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
si1=1292432U;
si2=3U;
si3=0U;
si4=0U;
f1832(i,si0,si1,si2,si3,si4);
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
f1836(i,si0,si1,si2,si3);
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
f1834(i,si0,si1);
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
f15271(i,si0);
L3:;
si0=l2;
f1900(i,si0);
si0=l2;
si0=i32_load(&i->m0,(U64)si0+4U);
si0=!(si0);
if(si0){
goto L1;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0);
f15271(i,si0);
L1:;
si0=l2;
si1=64U;
si0+=si1;
i->g0=si0;
L0:;
}

void f1836(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
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
si1=24U;
si0+=si1;
si1=l1;
si2=l2;
si3=l3;
f1836(i,si0,si1,si2,si3);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+24U);
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
si1=24U;
si0+=si1;
si1=l1;
si2=l2;
si3=l3;
f1836(i,si0,si1,si2,si3);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+24U);
l7=si0;
if(si0){
goto L33;
}
L49:;
si0=l4;
si1=24U;
si0+=si1;
si1=l1;
si2=l5;
si3=l3;
f1836(i,si0,si1,si2,si3);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+24U);
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
si1=24U;
si0+=si1;
si1=l1;
si2=l2;
si3=0U;
f1836(i,si0,si1,si2,si3);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+24U);
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
sj1=i64_load(&i->m0,(U64)si1+28U);
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l0;
si1=12U;
si0+=si1;
si1=l4;
si2=24U;
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
si1=24U;
si0+=si1;
si1=l1;
si2=l2;
si3=24U;
si2+=si3;
si2=i32_load(&i->m0,(U64)si2);
si3=0U;
f1836(i,si0,si1,si2,si3);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+24U);
l3=si0;
if(si0){
goto L9;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0+20U);
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
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si0=!(si0);
if(si0){
goto L8;
}
si0=l3;
si1=28U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
si0=l3;
si1=20U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=l5;
si1=96U;
si0*=si1;
si1=l6;
si0+=si1;
si1=-4U;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=3U;
si0=si0 == si1;
if(si0){
goto L52;
}
si0=l4;
si1=24U;
si0+=si1;
si1=l1;
si2=l3;
si3=l7;
si4=3U;
si5=l2;
si5=i32_load(&i->m0,(U64)si5+4U);
si6=l2;
si7=8U;
si6+=si7;
si6=i32_load(&i->m0,(U64)si6);
f1842(i,si0,si1,si2,si3,si4,si5,si6);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+24U);
l1=si0;
si0=!(si0);
if(si0){
goto L2;
}
si0=l0;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1+28U);
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l0;
si1=12U;
si0+=si1;
si1=l4;
si2=24U;
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
si1=24U;
si0+=si1;
si1=l1;
si2=l3;
si3=l7;
si4=8U;
si5=l2;
si5=i32_load(&i->m0,(U64)si5+4U);
si6=l2;
si7=8U;
si6+=si7;
si6=i32_load(&i->m0,(U64)si6);
f1842(i,si0,si1,si2,si3,si4,si5,si6);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+24U);
l1=si0;
si0=!(si0);
if(si0){
goto L2;
}
si0=l0;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1+28U);
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l0;
si1=12U;
si0+=si1;
si1=l4;
si2=24U;
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
si1=24U;
si0+=si1;
si1=l1;
si2=l3;
si3=1U;
f1836(i,si0,si1,si2,si3);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+24U);
l1=si0;
si0=!(si0);
if(si0){
goto L2;
}
si0=l0;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1+28U);
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l0;
si1=12U;
si0+=si1;
si1=l4;
si2=24U;
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
si1=24U;
si0+=si1;
si1=l1;
si2=l2;
si3=20U;
si2+=si3;
si2=i32_load(&i->m0,(U64)si2);
si3=l3;
f1836(i,si0,si1,si2,si3);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+24U);
l5=si0;
si0=!(si0);
if(si0){
goto L53;
}
si0=l0;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1+28U);
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l0;
si1=12U;
si0+=si1;
si1=l4;
si2=24U;
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
si1=24U;
si0+=si1;
si1=l1;
si2=l2;
si3=24U;
si2+=si3;
si2=i32_load(&i->m0,(U64)si2);
si3=l3;
f1836(i,si0,si1,si2,si3);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+24U);
l1=si0;
si0=!(si0);
if(si0){
goto L2;
}
si0=l0;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1+28U);
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l0;
si1=12U;
si0+=si1;
si1=l4;
si2=24U;
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
si1=24U;
si0+=si1;
si1=l1;
si2=l2;
si3=20U;
si2+=si3;
si2=i32_load(&i->m0,(U64)si2);
si3=l3;
f1836(i,si0,si1,si2,si3);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+24U);
l1=si0;
si0=!(si0);
if(si0){
goto L2;
}
si0=l0;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1+28U);
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l0;
si1=12U;
si0+=si1;
si1=l4;
si2=24U;
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
si1=8U;
si0+=si1;
si1=l2;
f1697(i,si0,si1);
si0=l4;
si1=24U;
si0+=si1;
si1=l1;
si2=1292684U;
si3=6U;
si4=l5;
si5=l4;
si5=i32_load(&i->m0,(U64)si5+8U);
f1843(i,si0,si1,si2,si3,si4,si5);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+24U);
l5=si0;
si0=!(si0);
if(si0){
goto L54;
}
si0=l0;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1+28U);
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l0;
si1=12U;
si0+=si1;
si1=l4;
si2=24U;
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
si1=24U;
si0+=si1;
si1=l1;
si2=l2;
si2=i32_load(&i->m0,(U64)si2+24U);
si3=0U;
f1836(i,si0,si1,si2,si3);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+24U);
l2=si0;
if(si0){
goto L55;
}
goto L4;
L56:;
si0=l4;
si1=24U;
si0+=si1;
si1=l1;
si2=l2;
si2=i32_load(&i->m0,(U64)si2+24U);
si3=4U;
f1836(i,si0,si1,si2,si3);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+24U);
l2=si0;
si0=!(si0);
if(si0){
goto L4;
}
si0=l0;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1+28U);
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l0;
si1=12U;
si0+=si1;
si1=l4;
si2=24U;
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
sj1=i64_load(&i->m0,(U64)si1+28U);
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l0;
si1=12U;
si0+=si1;
si1=l4;
si2=24U;
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
si1=24U;
si0+=si1;
si1=l1;
si2=l2;
si3=20U;
si2+=si3;
si2=i32_load(&i->m0,(U64)si2);
si3=0U;
f1836(i,si0,si1,si2,si3);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+24U);
l3=si0;
si0=!(si0);
if(si0){
goto L57;
}
si0=l0;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1+28U);
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l0;
si1=12U;
si0+=si1;
si1=l4;
si2=24U;
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
si1=24U;
si0+=si1;
si1=l1;
si2=l2;
si3=24U;
si2+=si3;
si2=i32_load(&i->m0,(U64)si2);
si3=0U;
f1836(i,si0,si1,si2,si3);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+24U);
l3=si0;
si0=!(si0);
if(si0){
goto L58;
}
si0=l0;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1+28U);
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l0;
si1=12U;
si0+=si1;
si1=l4;
si2=24U;
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
si1=24U;
si0+=si1;
si1=l1;
si2=l2;
si2=i32_load(&i->m0,(U64)si2+28U);
si3=0U;
f1836(i,si0,si1,si2,si3);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+24U);
l1=si0;
si0=!(si0);
if(si0){
goto L2;
}
si0=l0;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1+28U);
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l0;
si1=12U;
si0+=si1;
si1=l4;
si2=24U;
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
sj1=i64_load(&i->m0,(U64)si1+28U);
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l0;
si1=12U;
si0+=si1;
si1=l4;
si2=24U;
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
sj1=i64_load(&i->m0,(U64)si1+28U);
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l0;
si1=12U;
si0+=si1;
si1=l4;
si2=24U;
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
si1=24U;
si0+=si1;
si1=l1;
si2=l2;
si3=l3;
f1836(i,si0,si1,si2,si3);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+24U);
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
si1=24U;
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
f1845(i,si0,si1,si2,si3,si4,si5,si6,si7);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+24U);
l1=si0;
si0=!(si0);
if(si0){
goto L2;
}
si0=l0;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1+28U);
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l0;
si1=12U;
si0+=si1;
si1=l4;
si2=24U;
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
si1=24U;
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
f1845(i,si0,si1,si2,si3,si4,si5,si6,si7);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+24U);
l1=si0;
si0=!(si0);
if(si0){
goto L2;
}
si0=l0;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1+28U);
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l0;
si1=12U;
si0+=si1;
si1=l4;
si2=24U;
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
si1=24U;
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
f1845(i,si0,si1,si2,si3,si4,si5,si6,si7);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+24U);
l1=si0;
si0=!(si0);
if(si0){
goto L2;
}
si0=l0;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1+28U);
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l0;
si1=12U;
si0+=si1;
si1=l4;
si2=24U;
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
si1=24U;
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
f1845(i,si0,si1,si2,si3,si4,si5,si6,si7);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+24U);
l1=si0;
si0=!(si0);
if(si0){
goto L2;
}
si0=l0;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1+28U);
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l0;
si1=12U;
si0+=si1;
si1=l4;
si2=24U;
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
si1=24U;
si0+=si1;
si1=l1;
si2=l2;
si3=20U;
si2+=si3;
si2=i32_load(&i->m0,(U64)si2);
si3=l3;
f1836(i,si0,si1,si2,si3);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+24U);
l1=si0;
si0=!(si0);
if(si0){
goto L2;
}
si0=l0;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1+28U);
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l0;
si1=12U;
si0+=si1;
si1=l4;
si2=24U;
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
si1=24U;
si0+=si1;
si1=l1;
si2=l2;
si3=l3;
f1836(i,si0,si1,si2,si3);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+24U);
l1=si0;
si0=!(si0);
if(si0){
goto L2;
}
si0=l0;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1+28U);
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l0;
si1=12U;
si0+=si1;
si1=l4;
si2=24U;
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
si1=24U;
si0+=si1;
si1=l1;
si2=l2;
si3=20U;
si2+=si3;
si2=i32_load(&i->m0,(U64)si2);
si3=l3;
f1836(i,si0,si1,si2,si3);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+24U);
l1=si0;
si0=!(si0);
if(si0){
goto L2;
}
si0=l0;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1+28U);
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l0;
si1=12U;
si0+=si1;
si1=l4;
si2=24U;
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
si1=24U;
si0+=si1;
si1=l1;
si2=l2;
si3=20U;
si2+=si3;
si2=i32_load(&i->m0,(U64)si2);
si3=l3;
f1836(i,si0,si1,si2,si3);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+24U);
l5=si0;
si0=!(si0);
if(si0){
goto L60;
}
si0=l0;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1+28U);
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l0;
si1=12U;
si0+=si1;
si1=l4;
si2=24U;
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
si1=24U;
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
f1844(i,si0,si1,si2,si3,si4);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+24U);
l1=si0;
si0=!(si0);
if(si0){
goto L2;
}
si0=l0;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1+28U);
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l0;
si1=12U;
si0+=si1;
si1=l4;
si2=24U;
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
si1=24U;
si0+=si1;
si1=l1;
si2=l2;
si2=i32_load(&i->m0,(U64)si2+20U);
si3=0U;
f1836(i,si0,si1,si2,si3);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+24U);
l3=si0;
if(si0){
goto L61;
}
goto L5;
L62:;
si0=l4;
si1=24U;
si0+=si1;
si1=l1;
si2=l2;
si2=i32_load(&i->m0,(U64)si2+20U);
si3=4U;
f1836(i,si0,si1,si2,si3);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+24U);
l3=si0;
si0=!(si0);
if(si0){
goto L5;
}
si0=l0;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1+28U);
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l0;
si1=12U;
si0+=si1;
si1=l4;
si2=24U;
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
sj1=i64_load(&i->m0,(U64)si1+28U);
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l0;
si1=12U;
si0+=si1;
si1=l4;
si2=24U;
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
si1=24U;
si0+=si1;
si1=l1;
si2=l2;
si3=20U;
si2+=si3;
si2=i32_load(&i->m0,(U64)si2);
si3=0U;
f1836(i,si0,si1,si2,si3);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+24U);
l3=si0;
si0=!(si0);
if(si0){
goto L63;
}
si0=l0;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1+28U);
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l0;
si1=12U;
si0+=si1;
si1=l4;
si2=24U;
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
si1=24U;
si0+=si1;
si1=l1;
si2=l2;
si3=0U;
f1836(i,si0,si1,si2,si3);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+24U);
l1=si0;
si0=!(si0);
if(si0){
goto L2;
}
si0=l0;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1+28U);
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l0;
si1=12U;
si0+=si1;
si1=l4;
si2=24U;
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
sj1=i64_load(&i->m0,(U64)si1+28U);
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l0;
si1=12U;
si0+=si1;
si1=l4;
si2=24U;
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
si1=24U;
si0+=si1;
si1=l1;
si2=l2;
si3=20U;
si2+=si3;
si2=i32_load(&i->m0,(U64)si2);
si3=0U;
f1836(i,si0,si1,si2,si3);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+24U);
l1=si0;
si0=!(si0);
if(si0){
goto L2;
}
si0=l0;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1+28U);
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l0;
si1=12U;
si0+=si1;
si1=l4;
si2=24U;
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
si1=24U;
si0+=si1;
si1=l1;
si2=l2;
si3=20U;
si2+=si3;
si2=i32_load(&i->m0,(U64)si2);
si3=0U;
f1836(i,si0,si1,si2,si3);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+24U);
l3=si0;
si0=!(si0);
if(si0){
goto L64;
}
si0=l0;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1+28U);
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l0;
si1=12U;
si0+=si1;
si1=l4;
si2=24U;
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
si1=24U;
si0+=si1;
si1=l1;
si2=l2;
si3=24U;
si2+=si3;
si2=i32_load(&i->m0,(U64)si2);
si3=0U;
f1836(i,si0,si1,si2,si3);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+24U);
l1=si0;
si0=!(si0);
if(si0){
goto L2;
}
si0=l0;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1+28U);
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l0;
si1=12U;
si0+=si1;
si1=l4;
si2=24U;
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
si1=24U;
si0+=si1;
si1=l1;
si2=l2;
si3=20U;
si2+=si3;
si2=i32_load(&i->m0,(U64)si2);
si3=l3;
f1836(i,si0,si1,si2,si3);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+24U);
l1=si0;
si0=!(si0);
if(si0){
goto L2;
}
si0=l0;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1+28U);
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l0;
si1=12U;
si0+=si1;
si1=l4;
si2=24U;
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
si1=24U;
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
f1842(i,si0,si1,si2,si3,si4,si5,si6);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+24U);
l1=si0;
si0=!(si0);
if(si0){
goto L2;
}
si0=l0;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1+28U);
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l0;
si1=12U;
si0+=si1;
si1=l4;
si2=24U;
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
si1=24U;
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
f1842(i,si0,si1,si2,si3,si4,si5,si6);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+24U);
l2=si0;
si0=!(si0);
if(si0){
goto L65;
}
si0=l0;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1+28U);
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l0;
si1=12U;
si0+=si1;
si1=l4;
si2=24U;
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
si1=24U;
si0+=si1;
si1=l1;
si2=l6;
si3=l5;
si4=2U;
si5=l3;
si6=l7;
f1842(i,si0,si1,si2,si3,si4,si5,si6);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+24U);
l1=si0;
si0=!(si0);
if(si0){
goto L2;
}
si0=l0;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1+28U);
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l0;
si1=12U;
si0+=si1;
si1=l4;
si2=24U;
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
si1=24U;
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
f1842(i,si0,si1,si2,si3,si4,si5,si6);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+24U);
l1=si0;
si0=!(si0);
if(si0){
goto L2;
}
si0=l0;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1+28U);
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l0;
si1=12U;
si0+=si1;
si1=l4;
si2=24U;
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
si1=24U;
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
f1842(i,si0,si1,si2,si3,si4,si5,si6);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+24U);
l2=si0;
si0=!(si0);
if(si0){
goto L66;
}
si0=l0;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1+28U);
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l0;
si1=12U;
si0+=si1;
si1=l4;
si2=24U;
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
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
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
si1=l3;
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
si1=1292716U;
si2=5U;
si0=f15389(i,si0,si1,si2);
if(si0){
goto L2;
}
si0=l4;
si1=24U;
si0+=si1;
si1=l1;
si2=1292176U;
si3=9U;
si4=2U;
si5=l7;
si6=l8;
f1842(i,si0,si1,si2,si3,si4,si5,si6);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+24U);
l1=si0;
si0=!(si0);
if(si0){
goto L2;
}
si0=l0;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1+28U);
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l0;
si1=12U;
si0+=si1;
si1=l4;
si2=24U;
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
sj1=i64_load(&i->m0,(U64)si1+28U);
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l0;
si1=12U;
si0+=si1;
si1=l4;
si2=24U;
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
si1=24U;
si0+=si1;
si1=l1;
si2=l5;
si3=l3;
f1836(i,si0,si1,si2,si3);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+24U);
l5=si0;
si0=!(si0);
if(si0){
goto L6;
}
si0=l0;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1+28U);
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l0;
si1=12U;
si0+=si1;
si1=l4;
si2=24U;
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
sj1=i64_load(&i->m0,(U64)si1+28U);
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l0;
si1=12U;
si0+=si1;
si1=l4;
si2=24U;
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
si0=1292185U;
si1=43U;
si2=1292668U;
f673(i,si0,si1,si2);
UNREACHABLE;
L7:;
si0=1292185U;
si1=43U;
si2=1292700U;
f673(i,si0,si1,si2);
UNREACHABLE;
L6:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+24U);
l5=si0;
si0=!(si0);
if(si0){
goto L68;
}
si0=l4;
si1=24U;
si0+=si1;
si1=l1;
si2=l5;
si3=l3;
f1836(i,si0,si1,si2,si3);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+24U);
l5=si0;
if(si0){
goto L67;
}
L68:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+28U);
l2=si0;
si0=!(si0);
if(si0){
goto L2;
}
si0=l4;
si1=24U;
si0+=si1;
si1=l1;
si2=l2;
si3=l3;
f1836(i,si0,si1,si2,si3);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+24U);
l1=si0;
si0=!(si0);
if(si0){
goto L2;
}
si0=l0;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1+28U);
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l0;
si1=12U;
si0+=si1;
si1=l4;
si2=24U;
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
sj1=i64_load(&i->m0,(U64)si1+28U);
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l0;
si1=12U;
si0+=si1;
si1=l4;
si2=24U;
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
si1=24U;
si0+=si1;
si1=l1;
si2=l2;
si2=i32_load(&i->m0,(U64)si2+24U);
si3=l2;
si4=32U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si4=0U;
f1844(i,si0,si1,si2,si3,si4);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+24U);
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
si1=24U;
si0+=si1;
si1=l1;
si2=l2;
si3=0U;
f1836(i,si0,si1,si2,si3);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+24U);
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
sj1=i64_load(&i->m0,(U64)si1+28U);
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l0;
si1=12U;
si0+=si1;
si1=l4;
si2=24U;
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
sj1=i64_load(&i->m0,(U64)si1+28U);
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l0;
si1=12U;
si0+=si1;
si1=l4;
si2=24U;
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
f1841(i,si0);
goto L2;
L3:;
si0=l4;
si1=75U;
si2=0U;
f1850(i,si0,si1,si2);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+4U);
l1=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
si1=1292593U;
si2=75U;
si0=f15390(i,si0,si1,si2);
l3=si0;
si0=l4;
si1=24U;
si0+=si1;
si1=l2;
si1=i32_load(&i->m0,(U64)si1+20U);
f1697(i,si0,si1);
si0=l0;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1+24U);
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

U32 f1837(rustpythonInstance*i,U32 l0,U32 l1) {
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
i64_store(&i->m0,(U64)si0+20U,sj1);
si0=l2;
si1=1291984U;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l2;
si1=1U;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l2;
si1=1291992U;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l1;
si1=l0;
si2=l2;
si3=8U;
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
i64_store(&i->m0,(U64)si0+20U,sj1);
si0=l2;
si1=1291984U;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l2;
si1=1U;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l2;
si1=1292008U;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l1;
si1=l0;
si2=l2;
si3=8U;
si2+=si3;
si0=f690(i,si0,si1,si2);
l1=si0;
goto L1;
L3:;
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
i64_store(&i->m0,(U64)si0+20U,sj1);
si0=l2;
si1=1291984U;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l2;
si1=1U;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l2;
si1=1292024U;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l1;
si1=l0;
si2=l2;
si3=8U;
si2+=si3;
si0=f690(i,si0,si1,si2);
l1=si0;
goto L1;
L2:;
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
i64_store(&i->m0,(U64)si0+20U,sj1);
si0=l2;
si1=1291984U;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l2;
si1=1U;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l2;
si1=1292048U;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l1;
si1=l0;
si2=l2;
si3=8U;
si2+=si3;
si0=f690(i,si0,si1,si2);
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

void f1838(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U64 l7=0;
U64 l8=0;
U64 l9=0;
U64 l10=0;
U64 l11=0;
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
U32 l23=0;
U32 l24=0;
U32 si0,si1,si2,si3,si4,si5;
U64 sj0,sj1,sj2,sj3,sj4,sj5;
si0=i->g0;
si1=160U;
si0-=si1;
l3=si0;
i->g0=si0;
si0=2967024U;
si0=f2098(i,si0);
l4=si0;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si1=l4;
si1=i32_load(&i->m0,(U64)si1+4U);
l6=si1;
si1=i32_load(&i->m0,(U64)si1+12U);
si0=TF(i->t0,si1,U32 (*)(rustpythonInstance*,U32))(i,si0);
l4=si0;
si0=l5;
si1=l6;
si1=i32_load(&i->m0,(U64)si1+16U);
si0=TF(i->t0,si1,U32 (*)(rustpythonInstance*,U32))(i,si0);
l5=si0;
si0=l4;
sj0=i64_load(&i->m0,(U64)si0+32U);
l7=sj0;
si0=l4;
si1=40U;
si0+=si1;
sj0=i64_load(&i->m0,(U64)si0);
l8=sj0;
si0=l4;
si1=48U;
si0+=si1;
sj0=i64_load(&i->m0,(U64)si0);
l9=sj0;
si0=l4;
si1=56U;
si0+=si1;
sj0=i64_load(&i->m0,(U64)si0);
l10=sj0;
si0=l4;
sj0=i64_load(&i->m0,(U64)si0+8U);
l11=sj0;
si0=l4;
sj0=i64_load(&i->m0,(U64)si0);
l12=sj0;
si0=l3;
si1=32U;
si0+=si1;
si1=56U;
si0+=si1;
si1=l2;
si2=56U;
si1+=si2;
l4=si1;
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
l6=si1;
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
l13=si1;
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
l14=si1;
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
l15=si1;
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
l16=si1;
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
l17=si1;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=0U;
l18=si0;
si0=l4;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l6;
sj1=4ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l13;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=36U;
si0+=si1;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l14;
si1=1299072U;
i32_store(&i->m0,(U64)si0,si1);
si0=l15;
sj1=l10;
sj2=l12;
sj3=l11;
sj4=l12;
si5=l5;
sj5=(U64)(si5);
sj4^=sj5;
sj5=6364136223846793005ULL;
sj4*=sj5;
sj3^=sj4;
sj4=8ULL;
sj3=I64_ROTL(sj3,sj4);
sj4=6364136223846793005ULL;
sj3*=sj4;
l11=sj3;
sj2^=sj3;
sj3=24ULL;
sj2=I64_ROTL(sj2,sj3);
l12=sj2;
sj1^=sj2;
sj2=6364136223846793005ULL;
sj1*=sj2;
sj2=l11;
sj1^=sj2;
sj2=8ULL;
sj1=I64_ROTL(sj1,sj2);
sj2=6364136223846793005ULL;
sj1*=sj2;
l10=sj1;
sj2=l12;
sj1^=sj2;
sj2=24ULL;
sj1=I64_ROTL(sj1,sj2);
l19=sj1;
sj2=6364136223846793005ULL;
sj1*=sj2;
sj2=l10;
sj1^=sj2;
sj2=l19;
sj1=I64_ROTL(sj1,sj2);
i64_store(&i->m0,(U64)si0,sj1);
si0=l16;
sj1=l12;
sj2=l9;
sj1^=sj2;
sj2=6364136223846793005ULL;
sj1*=sj2;
sj2=l11;
sj1^=sj2;
sj2=8ULL;
sj1=I64_ROTL(sj1,sj2);
sj2=6364136223846793005ULL;
sj1*=sj2;
l9=sj1;
sj2=l12;
sj1^=sj2;
sj2=24ULL;
sj1=I64_ROTL(sj1,sj2);
l10=sj1;
sj2=6364136223846793005ULL;
sj1*=sj2;
sj2=l9;
sj1^=sj2;
sj2=l10;
sj1=I64_ROTL(sj1,sj2);
i64_store(&i->m0,(U64)si0,sj1);
si0=l17;
sj1=l12;
sj2=l8;
sj1^=sj2;
sj2=6364136223846793005ULL;
sj1*=sj2;
sj2=l11;
sj1^=sj2;
sj2=8ULL;
sj1=I64_ROTL(sj1,sj2);
sj2=6364136223846793005ULL;
sj1*=sj2;
l8=sj1;
sj2=l12;
sj1^=sj2;
sj2=24ULL;
sj1=I64_ROTL(sj1,sj2);
l9=sj1;
sj2=6364136223846793005ULL;
sj1*=sj2;
sj2=l8;
sj1^=sj2;
sj2=l9;
sj1=I64_ROTL(sj1,sj2);
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
sj0=i64_load(&i->m0,(U64)si0);
l8=sj0;
si0=l2;
sj1=l12;
sj2=l7;
sj1^=sj2;
sj2=6364136223846793005ULL;
sj1*=sj2;
sj2=l11;
sj1^=sj2;
sj2=8ULL;
sj1=I64_ROTL(sj1,sj2);
sj2=6364136223846793005ULL;
sj1*=sj2;
l11=sj1;
sj2=l12;
sj1^=sj2;
sj2=24ULL;
sj1=I64_ROTL(sj1,sj2);
l12=sj1;
sj2=6364136223846793005ULL;
sj1*=sj2;
sj2=l11;
sj1^=sj2;
sj2=l12;
sj1=I64_ROTL(sj1,sj2);
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
sj1=l8;
i64_store(&i->m0,(U64)si0+32U,sj1);
si0=l3;
si1=l2;
si1=i32_load8_u(&i->m0,(U64)si1+92U);
l15=si1;
i32_store8(&i->m0,(U64)si0+96U,si1);
si0=l2;
si1=88U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l17=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+80U);
l13=si0;
si0=l1;
si1=8U;
si0+=si1;
l4=si0;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+4U);
si0=si0 != si1;
if(si0){
goto L1;
}
si0=l1;
si1=l5;
f1852(i,si0,si1);
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
L1:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
si1=l5;
si2=2U;
si1<<=(si2&31);
si0+=si1;
si1=l3;
si2=32U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=l4;
si1=i32_load(&i->m0,(U64)si1);
si2=1U;
si1+=si2;
l5=si1;
i32_store(&i->m0,(U64)si0,si1);
si0=l17;
if(si0){
goto L3;
}
si0=l1;
l4=si0;
si0=0U;
l6=si0;
goto L2;
L3:;
si0=l17;
si1=96U;
si0*=si1;
l5=si0;
si0=l13;
l4=si0;
L6:;
{
si0=l3;
si1=128U;
si0+=si1;
si1=l1;
si2=l4;
f1838(i,si0,si1,si2);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+128U);
l6=si0;
if(si0){
goto L5;
}
si0=l4;
si1=96U;
si0+=si1;
l4=si0;
si0=l5;
si1=-96U;
si0+=si1;
l5=si0;
if(si0){
goto L6;
}
}
si0=l17;
l18=si0;
si0=l1;
l4=si0;
goto L4;
L5:;
si0=l3;
sj0=i64_load(&i->m0,(U64)si0+140U);
l12=sj0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+136U);
l4=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+132U);
l18=si0;
L4:;
si0=l1;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
L2:;
si0=l5;
si0=!(si0);
if(si0){
goto L7;
}
si0=l1;
si1=8U;
si0+=si1;
si1=l5;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
L7:;
si0=l6;
if(si0){
goto L9;
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
l12=sj1;
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
l11=sj1;
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
sj0=l12;
si0=(U32)(sj0);
l5=si0;
si0=!(si0);
if(si0){
goto L10;
}
sj0=l11;
si0=(U32)(sj0);
l4=si0;
si1=l5;
si2=5U;
si1<<=(si2&31);
si0+=si1;
l14=si0;
si0=l17;
si1=96U;
si0*=si1;
l16=si0;
si0=l15;
si1=255U;
si0&=si1;
l20=si0;
si1=3U;
si0=si0 != si1;
l18=si0;
si0=l1;
si1=8U;
si0+=si1;
l21=si0;
L11:;
{
si0=l4;
si1=16U;
si0+=si1;
l2=si0;
si0=l4;
si1=28U;
si0+=si1;
si0=i32_load16_u(&i->m0,(U64)si0);
l5=si0;
si0=l18;
if(si0){
goto L23;
}
si0=l5;
si1=64U;
si0&=si1;
if(si0){
goto L22;
}
L23:;
si0=l4;
si1=30U;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
switch(si0){
case 0:
goto L24;
case 1:
goto L12;
case 2:
goto L12;
case 3:
goto L12;
case 4:
goto L25;
case 5:
goto L12;
default:
goto L24;
}
L25:;
si0=l21;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
switch(si0){
case 0:
goto L19;
case 1:
goto L20;
default:
goto L21;
}
L24:;
si0=l4;
si1=24U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+16U);
l6=si0;
si0=l5;
si1=150U;
si0&=si1;
si0=!(si0);
if(si0){
goto L16;
}
si0=l17;
if(si0){
goto L26;
}
si0=1U;
l22=si0;
goto L13;
L26:;
si0=l21;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si0=l20;
si1=1U;
si0=si0 != si1;
if(si0){
goto L15;
}
si0=l5;
si0=!(si0);
if(si0){
goto L14;
}
si0=0U;
l15=si0;
L27:;
{
si0=l13;
si1=l15;
si0+=si1;
l5=si0;
si1=44U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L28;
}
si0=l3;
si1=l5;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+144U,sj1);
si0=l3;
si1=l5;
si2=24U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+136U,sj1);
si0=l3;
si1=l5;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+128U,sj1);
si0=l3;
si1=l5;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+152U,sj1);
si0=l3;
si1=128U;
si0+=si1;
si1=l6;
si2=l2;
f2053(i,si0,si1,si2);
si0=l3;
si1=8U;
si0+=si1;
si1=l5;
si2=32U;
si1+=si2;
si2=l3;
sj2=i64_load(&i->m0,(U64)si2+144U);
l12=sj2;
sj3=6364136223846793005ULL;
sj2*=sj3;
si3=l3;
sj3=i64_load(&i->m0,(U64)si3+152U);
sj2^=sj3;
sj3=l12;
sj2=I64_ROTL(sj2,sj3);
si2=(U32)(sj2);
si3=l6;
si4=l2;
f2044(i,si0,si1,si2,si3,si4);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+8U);
si1=1U;
si0=si0 != si1;
if(si0){
goto L28;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0+12U);
l22=si0;
si1=l5;
si2=56U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
l23=si1;
si0=si0 >= si1;
if(si0){
goto L29;
}
si0=l5;
si1=48U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=l22;
si2=5U;
si1<<=(si2&31);
si0+=si1;
l5=si0;
si1=30U;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=4U;
si0=si0 == si1;
if(si0){
goto L31;
}
si0=l5;
si1=29U;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=1U;
si0&=si1;
si0=!(si0);
if(si0){
goto L28;
}
si0=l2;
si1=9U;
si0=si0 == si1;
if(si0){
goto L30;
}
goto L28;
L31:;
si0=l2;
si1=9U;
si0=si0 != si1;
if(si0){
goto L28;
}
L30:;
si0=l6;
si1=1292176U;
si2=l2;
si0=f15389(i,si0,si1,si2);
if(si0){
goto L28;
}
si0=5U;
l22=si0;
goto L13;
L29:;
si0=l22;
si1=l23;
si2=1299180U;
f663(i,si0,si1,si2);
UNREACHABLE;
L28:;
si0=l16;
si1=l15;
si2=96U;
si1+=si2;
l15=si1;
si0=si0 != si1;
if(si0){
goto L27;
}
}
si0=1U;
l22=si0;
goto L13;
L22:;
si0=l3;
si1=128U;
si0+=si1;
si1=l1;
si2=l2;
si3=0U;
f1839(i,si0,si1,si2,si3);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+128U);
l5=si0;
si0=!(si0);
if(si0){
goto L12;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0+144U);
l1=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+140U);
l4=si0;
si0=l3;
sj0=i64_load(&i->m0,(U64)si0+132U);
l12=sj0;
goto L17;
L21:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
si1=l5;
si2=l4;
si2=i32_load(&i->m0,(U64)si2+16U);
si3=l4;
si4=24U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si0=f1840(i,si0,si1,si2,si3);
si1=255U;
si0&=si1;
si1=4U;
si0=si0 == si1;
if(si0){
goto L12;
}
L20:;
si0=l3;
si1=2U;
i32_store(&i->m0,(U64)si0+132U,si1);
si0=l3;
si1=1292160U;
i32_store(&i->m0,(U64)si0+128U,si1);
si0=l3;
sj1=1ULL;
i64_store(&i->m0,(U64)si0+140U,sj1);
si0=l3;
si1=552U;
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
f63(i,si0,si1);
goto L18;
L19:;
si0=l3;
si1=2U;
i32_store(&i->m0,(U64)si0+132U,si1);
si0=l3;
si1=1292112U;
i32_store(&i->m0,(U64)si0+128U,si1);
si0=l3;
sj1=1ULL;
i64_store(&i->m0,(U64)si0+140U,sj1);
si0=l3;
si1=552U;
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
f63(i,si0,si1);
L18:;
si0=l3;
sj0=i64_load(&i->m0,(U64)si0+108U);
l12=sj0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+104U);
l5=si0;
si0=!(si0);
if(si0){
goto L12;
}
si0=0U;
l4=si0;
L17:;
si0=l0;
si1=l1;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l0;
si1=l4;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l0;
sj1=l12;
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l0;
si1=l5;
i32_store(&i->m0,(U64)si0,si1);
goto L8;
L16:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
si1=l21;
si1=i32_load(&i->m0,(U64)si1);
si2=l6;
si3=l2;
si0=f1840(i,si0,si1,si2,si3);
l22=si0;
si1=255U;
si0&=si1;
si1=6U;
si0=si0 != si1;
if(si0){
goto L13;
}
si0=3U;
si1=0U;
si2=l21;
si2=i32_load(&i->m0,(U64)si2);
si0=si2?si0:si1;
l22=si0;
goto L13;
L15:;
si0=l5;
si0=!(si0);
if(si0){
goto L34;
}
si0=0U;
l15=si0;
L35:;
{
si0=l13;
si1=l15;
si0+=si1;
l5=si0;
si1=44U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L36;
}
si0=l3;
si1=l5;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+144U,sj1);
si0=l3;
si1=l5;
si2=24U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+136U,sj1);
si0=l3;
si1=l5;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+128U,sj1);
si0=l3;
si1=l5;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+152U,sj1);
si0=l3;
si1=128U;
si0+=si1;
si1=l6;
si2=l2;
f2053(i,si0,si1,si2);
si0=l3;
si1=24U;
si0+=si1;
si1=l5;
si2=32U;
si1+=si2;
si2=l3;
sj2=i64_load(&i->m0,(U64)si2+144U);
l12=sj2;
sj3=6364136223846793005ULL;
sj2*=sj3;
si3=l3;
sj3=i64_load(&i->m0,(U64)si3+152U);
sj2^=sj3;
sj3=l12;
sj2=I64_ROTL(sj2,sj3);
si2=(U32)(sj2);
si3=l6;
si4=l2;
f2044(i,si0,si1,si2,si3,si4);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+24U);
si1=1U;
si0=si0 != si1;
if(si0){
goto L36;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0+28U);
l23=si0;
si1=l5;
si2=56U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
l22=si1;
si0=si0 >= si1;
if(si0){
goto L33;
}
si0=5U;
l22=si0;
si0=l5;
si1=48U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si1=l23;
si2=5U;
si1<<=(si2&31);
si0+=si1;
si1=30U;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=4U;
si0=si0 == si1;
if(si0){
goto L13;
}
si0=5U;
l22=si0;
si0=l5;
si1=l23;
si2=5U;
si1<<=(si2&31);
si0+=si1;
si1=29U;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=1U;
si0&=si1;
if(si0){
goto L13;
}
L36:;
si0=l16;
si1=l15;
si2=96U;
si1+=si2;
l15=si1;
si0=si0 != si1;
if(si0){
goto L35;
}
}
si0=1U;
l22=si0;
goto L13;
L34:;
si0=0U;
l15=si0;
L37:;
{
si0=l13;
si1=l15;
si0+=si1;
l5=si0;
si1=44U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L38;
}
si0=l3;
si1=l5;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+144U,sj1);
si0=l3;
si1=l5;
si2=24U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+136U,sj1);
si0=l3;
si1=l5;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+128U,sj1);
si0=l3;
si1=l5;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+152U,sj1);
si0=l3;
si1=128U;
si0+=si1;
si1=l6;
si2=l2;
f2053(i,si0,si1,si2);
si0=l3;
si1=16U;
si0+=si1;
si1=l5;
si2=32U;
si1+=si2;
si2=l3;
sj2=i64_load(&i->m0,(U64)si2+144U);
l12=sj2;
sj3=6364136223846793005ULL;
sj2*=sj3;
si3=l3;
sj3=i64_load(&i->m0,(U64)si3+152U);
sj2^=sj3;
sj3=l12;
sj2=I64_ROTL(sj2,sj3);
si2=(U32)(sj2);
si3=l6;
si4=l2;
f2044(i,si0,si1,si2,si3,si4);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+16U);
si1=1U;
si0=si0 != si1;
if(si0){
goto L38;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0+20U);
l23=si0;
si1=l5;
si2=56U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
l22=si1;
si0=si0 >= si1;
if(si0){
goto L32;
}
si0=5U;
l22=si0;
si0=l5;
si1=48U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si1=l23;
si2=5U;
si1<<=(si2&31);
si0+=si1;
si1=30U;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
l24=si0;
si1=4U;
si0=si0 == si1;
if(si0){
goto L13;
}
si0=5U;
l22=si0;
si0=l5;
si1=l23;
si2=5U;
si1<<=(si2&31);
si0+=si1;
si1=29U;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=1U;
si0&=si1;
if(si0){
goto L13;
}
si0=2U;
l22=si0;
si0=l24;
si1=2U;
si0=si0 == si1;
if(si0){
goto L13;
}
L38:;
si0=l16;
si1=l15;
si2=96U;
si1+=si2;
l15=si1;
si0=si0 != si1;
if(si0){
goto L37;
}
}
si0=1U;
l22=si0;
goto L13;
L33:;
si0=l23;
si1=l22;
si2=1299180U;
f663(i,si0,si1,si2);
UNREACHABLE;
L32:;
si0=l23;
si1=l22;
si2=1299180U;
f663(i,si0,si1,si2);
UNREACHABLE;
L14:;
si0=0U;
l15=si0;
L39:;
{
si0=l13;
si1=l15;
si0+=si1;
l5=si0;
si1=44U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L40;
}
si0=l3;
si1=l5;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+144U,sj1);
si0=l3;
si1=l5;
si2=24U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+136U,sj1);
si0=l3;
si1=l5;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+128U,sj1);
si0=l3;
si1=l5;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+152U,sj1);
si0=l3;
si1=128U;
si0+=si1;
si1=l6;
si2=l2;
f2053(i,si0,si1,si2);
si0=l3;
si1=l5;
si2=32U;
si1+=si2;
si2=l3;
sj2=i64_load(&i->m0,(U64)si2+144U);
l12=sj2;
sj3=6364136223846793005ULL;
sj2*=sj3;
si3=l3;
sj3=i64_load(&i->m0,(U64)si3+152U);
sj2^=sj3;
sj3=l12;
sj2=I64_ROTL(sj2,sj3);
si2=(U32)(sj2);
si3=l6;
si4=l2;
f2044(i,si0,si1,si2,si3,si4);
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
si1=1U;
si0=si0 != si1;
if(si0){
goto L40;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0+4U);
l22=si0;
si1=l5;
si2=56U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
l23=si1;
si0=si0 >= si1;
if(si0){
goto L41;
}
si0=l5;
si1=48U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=l22;
si2=5U;
si1<<=(si2&31);
si0+=si1;
l5=si0;
si1=30U;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
l23=si0;
si1=4U;
si0=si0 == si1;
if(si0){
goto L42;
}
si0=l5;
si1=29U;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=1U;
si0&=si1;
if(si0){
goto L42;
}
si0=2U;
l22=si0;
si0=l23;
si1=2U;
si0=si0 == si1;
if(si0){
goto L13;
}
goto L40;
L42:;
si0=l2;
si1=9U;
si0=si0 != si1;
if(si0){
goto L40;
}
si0=l6;
si1=1292176U;
si2=9U;
si0=f15389(i,si0,si1,si2);
if(si0){
goto L40;
}
si0=5U;
l22=si0;
goto L13;
L41:;
si0=l22;
si1=l23;
si2=1299180U;
f663(i,si0,si1,si2);
UNREACHABLE;
L40:;
si0=l16;
si1=l15;
si2=96U;
si1+=si2;
l15=si1;
si0=si0 != si1;
if(si0){
goto L39;
}
}
si0=1U;
l22=si0;
L13:;
si0=l4;
si1=l22;
i32_store8(&i->m0,(U64)si0+30U,si1);
L12:;
si0=l4;
si1=32U;
si0+=si1;
l4=si0;
si1=l14;
si0=si0 != si1;
if(si0){
goto L11;
}
}
L10:;
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
goto L8;
L9:;
si0=l0;
sj1=l12;
i64_store(&i->m0,(U64)si0+12U,sj1);
si0=l0;
si1=l4;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l0;
si1=l18;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l6;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=68U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
si0=!(si0);
if(si0){
goto L43;
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
f15271(i,si0);
L43:;
si0=l3;
si1=88U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si0=!(si0);
if(si0){
goto L44;
}
si0=l3;
si1=80U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=16U;
si0+=si1;
l4=si0;
L45:;
{
si0=l4;
si1=-8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L46;
}
si0=l4;
si1=-12U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
f15271(i,si0);
L46:;
si0=l4;
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L47;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
f15271(i,si0);
L47:;
si0=l4;
si1=32U;
si0+=si1;
l4=si0;
si0=l5;
si1=-1U;
si0+=si1;
l5=si0;
if(si0){
goto L45;
}
}
L44:;
si0=l3;
si1=84U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L8;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0+80U);
f15271(i,si0);
L8:;
si0=l3;
si1=160U;
si0+=si1;
i->g0=si0;
L0:;
}

void f1839(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 l8=0;
U64 l9=0;
U64 l10=0;
U32 l11=0;
U32 si0,si1,si2,si3,si4,si5;
U64 sj0,sj1,sj2,sj3,sj4;
si0=i->g0;
si1=80U;
si0-=si1;
l4=si0;
i->g0=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si1=l1;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
l6=si1;
si2=2U;
si1<<=(si2&31);
si0+=si1;
l7=si0;
si0=l3;
si0=!(si0);
if(si0){
goto L12;
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
L13:;
{
si0=l8;
if(si0){
goto L11;
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
goto L13;
}
}
L12:;
si0=l5;
si1=l7;
si0=si0 == si1;
if(si0){
goto L11;
}
si0=l2;
si0=i32_load8_u(&i->m0,(U64)si0+12U);
si1=128U;
si0&=si1;
if(si0){
goto L22;
}
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
L22:;
si0=l4;
si1=60U;
si0+=si1;
sj1=1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=1U;
i32_store(&i->m0,(U64)si0+52U,si1);
si0=l4;
si1=1292424U;
i32_store(&i->m0,(U64)si0+48U,si1);
si0=l4;
si1=552U;
i32_store(&i->m0,(U64)si0+36U,si1);
si0=l4;
si1=l2;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l4;
si1=l4;
si2=32U;
si1+=si2;
i32_store(&i->m0,(U64)si0+56U,si1);
si0=l4;
si1=16U;
si0+=si1;
si1=l4;
si2=48U;
si1+=si2;
f63(i,si0,si1);
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
L21:;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=75U;
si0=f15269(i,si0);
l7=si0;
si0=!(si0);
if(si0){
goto L10;
}
si0=l7;
si1=1292280U;
si2=75U;
si0=f15390(i,si0,si1,si2);
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
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
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
f2053(i,si0,si1,si2);
si0=l4;
si1=l7;
si2=32U;
si1+=si2;
si2=l4;
sj2=i64_load(&i->m0,(U64)si2+64U);
l9=sj2;
sj3=6364136223846793005ULL;
sj2*=sj3;
si3=l4;
sj3=i64_load(&i->m0,(U64)si3+72U);
sj2^=sj3;
sj3=l9;
sj2=I64_ROTL(sj2,sj3);
si2=(U32)(sj2);
si3=l2;
f2041(i,si0,si1,si2,si3);
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
si2=1299196U;
f663(i,si0,si1,si2);
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
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
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
f2053(i,si0,si1,si2);
si0=l4;
si1=8U;
si0+=si1;
si1=l7;
si2=32U;
si1+=si2;
si2=l4;
sj2=i64_load(&i->m0,(U64)si2+64U);
l9=sj2;
sj3=6364136223846793005ULL;
sj2*=sj3;
si3=l4;
sj3=i64_load(&i->m0,(U64)si3+72U);
sj2^=sj3;
sj3=l9;
sj2=I64_ROTL(sj2,sj3);
si2=(U32)(sj2);
si3=l2;
f2041(i,si0,si1,si2,si3);
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
si2=1299196U;
f663(i,si0,si1,si2);
UNREACHABLE;
L18:;
si0=l2;
si1=3U;
i32_store8(&i->m0,(U64)si0+14U,si1);
goto L2;
L17:;
si0=l2;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
if(si0){
goto L24;
}
si0=l2;
si0=i32_load16_u(&i->m0,(U64)si0+12U);
l3=si0;
si0=1U;
l8=si0;
si0=1U;
l2=si0;
goto L23;
L24:;
si0=l6;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L9;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=l6;
si0=f15269(i,si0);
l8=si0;
si0=!(si0);
if(si0){
goto L8;
}
si0=l8;
si1=l3;
si2=l6;
si0=f15390(i,si0,si1,si2);
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=l2;
si0=i32_load16_u(&i->m0,(U64)si0+12U);
l3=si0;
si0=l6;
si0=f15269(i,si0);
l2=si0;
si0=!(si0);
if(si0){
goto L7;
}
L23:;
si0=l2;
si1=l8;
si2=l6;
si0=f15390(i,si0,si1,si2);
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
f2053(i,si0,si1,si2);
si0=l4;
sj0=i64_load(&i->m0,(U64)si0+72U);
l10=sj0;
si0=l4;
sj0=i64_load(&i->m0,(U64)si0+64U);
l9=sj0;
si0=l4;
si1=l6;
i32_store(&i->m0,(U64)si0+40U,si1);
si0=l4;
si1=l6;
i32_store(&i->m0,(U64)si0+36U,si1);
si0=l4;
si1=l2;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l4;
si1=48U;
si0+=si1;
si1=l7;
si2=32U;
si1+=si2;
sj2=l10;
sj3=l9;
sj4=6364136223846793005ULL;
sj3*=sj4;
sj2^=sj3;
sj3=l9;
sj2=I64_ROTL(sj2,sj3);
si2=(U32)(sj2);
si3=l4;
si4=32U;
si3+=si4;
si4=l4;
si5=16U;
si4+=si5;
f2040(i,si0,si1,si2,si3,si4);
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
f15271(i,si0);
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
goto L25;
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
L25:;
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
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
if(si0){
goto L27;
}
si0=l2;
si0=i32_load16_u(&i->m0,(U64)si0+12U);
l11=si0;
si0=1U;
l8=si0;
si0=1U;
l5=si0;
goto L26;
L27:;
si0=l6;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L9;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=l6;
si0=f15269(i,si0);
l8=si0;
si0=!(si0);
if(si0){
goto L6;
}
si0=l8;
si1=l5;
si2=l6;
si0=f15390(i,si0,si1,si2);
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=l2;
si0=i32_load16_u(&i->m0,(U64)si0+12U);
l11=si0;
si0=l6;
si0=f15269(i,si0);
l5=si0;
si0=!(si0);
if(si0){
goto L5;
}
L26:;
si0=l5;
si1=l8;
si2=l6;
si0=f15390(i,si0,si1,si2);
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
f2053(i,si0,si1,si2);
si0=l4;
sj0=i64_load(&i->m0,(U64)si0+72U);
l10=sj0;
si0=l4;
sj0=i64_load(&i->m0,(U64)si0+64U);
l9=sj0;
si0=l4;
si1=l6;
i32_store(&i->m0,(U64)si0+40U,si1);
si0=l4;
si1=l6;
i32_store(&i->m0,(U64)si0+36U,si1);
si0=l4;
si1=l5;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l4;
si1=48U;
si0+=si1;
si1=l7;
si2=32U;
si1+=si2;
sj2=l10;
sj3=l9;
sj4=6364136223846793005ULL;
sj3*=sj4;
sj2^=sj3;
sj3=l9;
sj2=I64_ROTL(sj2,sj3);
si2=(U32)(sj2);
si3=l4;
si4=32U;
si3+=si4;
si4=l4;
si5=16U;
si4+=si5;
f2040(i,si0,si1,si2,si3,si4);
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
f15271(i,si0);
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
goto L4;
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
si1=1292424U;
i32_store(&i->m0,(U64)si0+48U,si1);
si0=l4;
si1=552U;
i32_store(&i->m0,(U64)si0+36U,si1);
si0=l4;
si1=l2;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l4;
si1=l4;
si2=32U;
si1+=si2;
i32_store(&i->m0,(U64)si0+56U,si1);
si0=l4;
si1=16U;
si0+=si1;
si1=l4;
si2=48U;
si1+=si2;
f63(i,si0,si1);
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
L11:;
si0=1292185U;
si1=43U;
si2=1292264U;
f673(i,si0,si1,si2);
UNREACHABLE;
L10:;
si0=1U;
si1=75U;
f52(i,si0,si1);
UNREACHABLE;
L9:;
f53(i);
UNREACHABLE;
L8:;
si0=1U;
si1=l6;
f52(i,si0,si1);
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
si0=l7;
si1=l6;
si2=2U;
si1|=si2;
i32_store16(&i->m0,(U64)si0,si1);
L3:;
si0=l4;
si1=48U;
si0+=si1;
si1=l1;
si2=l2;
si3=l3;
si4=1U;
si3+=si4;
f1839(i,si0,si1,si2,si3);
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

U32 f1840(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 l8=0;
U32 l9=0;
U64 l10=0;
U32 l11=0;
U32 l12=0;
U64 l13=0;
U32 si0,si1,si2,si3,si4,si5;
U64 sj0,sj1,sj2,sj3,sj4;
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
si1=1292176U;
si2=9U;
si0=f15389(i,si0,si1,si2);
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
f2053(i,si0,si1,si2);
si0=l4;
si1=24U;
si0+=si1;
si1=l9;
si2=32U;
si1+=si2;
si2=l4;
sj2=i64_load(&i->m0,(U64)si2+80U);
l10=sj2;
sj3=6364136223846793005ULL;
sj2*=sj3;
si3=l4;
sj3=i64_load(&i->m0,(U64)si3+88U);
sj2^=sj3;
sj3=l10;
sj2=I64_ROTL(sj2,sj3);
si2=(U32)(sj2);
si3=l2;
si4=l3;
f2044(i,si0,si1,si2,si3,si4);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+24U);
si1=1U;
si0=si0 != si1;
if(si0){
goto L6;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0+28U);
l11=si0;
si1=l9;
si2=56U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
l12=si1;
si0=si0 >= si1;
if(si0){
goto L2;
}
si0=2U;
l12=si0;
si0=l9;
si1=48U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=l11;
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
l12=si0;
goto L1;
L3:;
si0=l7;
if(si0){
goto L10;
}
si0=4U;
l12=si0;
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
l12=si0;
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
f2053(i,si0,si1,si2);
si0=l4;
si1=8U;
si0+=si1;
si1=l6;
si2=32U;
si1+=si2;
si2=l4;
sj2=i64_load(&i->m0,(U64)si2+80U);
l10=sj2;
sj3=6364136223846793005ULL;
sj2*=sj3;
si3=l4;
sj3=i64_load(&i->m0,(U64)si3+88U);
sj2^=sj3;
sj3=l10;
sj2=I64_ROTL(sj2,sj3);
si2=(U32)(sj2);
si3=l2;
si4=l3;
f2044(i,si0,si1,si2,si3,si4);
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
l11=si1;
si0=si0 < si1;
if(si0){
goto L21;
}
si0=l8;
si1=l11;
si2=1299196U;
f663(i,si0,si1,si2);
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
f2053(i,si0,si1,si2);
si0=l4;
si1=16U;
si0+=si1;
si1=l6;
si2=32U;
si1+=si2;
si2=l4;
sj2=i64_load(&i->m0,(U64)si2+80U);
l10=sj2;
sj3=6364136223846793005ULL;
sj2*=sj3;
si3=l4;
sj3=i64_load(&i->m0,(U64)si3+88U);
sj2^=sj3;
sj3=l10;
sj2=I64_ROTL(sj2,sj3);
si2=(U32)(sj2);
si3=l2;
si4=l3;
f2044(i,si0,si1,si2,si3,si4);
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
l11=si0;
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
l11=si0;
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
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=l3;
si0=f15269(i,si0);
l11=si0;
si0=!(si0);
if(si0){
goto L16;
}
si0=l11;
si1=l2;
si2=l3;
si0=f15390(i,si0,si1,si2);
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=l3;
si0=f15269(i,si0);
l8=si0;
si0=!(si0);
if(si0){
goto L15;
}
L24:;
si0=l8;
si1=l2;
si2=l3;
si0=f15390(i,si0,si1,si2);
l8=si0;
si0=l4;
si1=4U;
i32_store8(&i->m0,(U64)si0+46U,si1);
si0=l4;
si1=256U;
i32_store16(&i->m0,(U64)si0+44U,si1);
si0=l4;
si1=l3;
i32_store(&i->m0,(U64)si0+40U,si1);
si0=l4;
si1=l3;
i32_store(&i->m0,(U64)si0+36U,si1);
si0=l4;
si1=l11;
i32_store(&i->m0,(U64)si0+32U,si1);
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
f2053(i,si0,si1,si2);
si0=l4;
sj0=i64_load(&i->m0,(U64)si0+88U);
l13=sj0;
si0=l4;
sj0=i64_load(&i->m0,(U64)si0+80U);
l10=sj0;
si0=l4;
si1=l3;
i32_store(&i->m0,(U64)si0+56U,si1);
si0=l4;
si1=l3;
i32_store(&i->m0,(U64)si0+52U,si1);
si0=l4;
si1=l8;
i32_store(&i->m0,(U64)si0+48U,si1);
si0=l4;
si1=64U;
si0+=si1;
si1=l6;
si2=32U;
si1+=si2;
sj2=l13;
sj3=l10;
sj4=6364136223846793005ULL;
sj3*=sj4;
sj2^=sj3;
sj3=l10;
sj2=I64_ROTL(sj2,sj3);
si2=(U32)(sj2);
si3=l4;
si4=48U;
si3+=si4;
si4=l4;
si5=32U;
si4+=si5;
f2040(i,si0,si1,si2,si3,si4);
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
f15271(i,si0);
goto L12;
L19:;
si0=l1;
si0=!(si0);
if(si0){
goto L17;
}
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=l3;
si0=f15269(i,si0);
l11=si0;
si0=!(si0);
if(si0){
goto L14;
}
si0=l11;
si1=l2;
si2=l3;
si0=f15390(i,si0,si1,si2);
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=l3;
si0=f15269(i,si0);
l8=si0;
si0=!(si0);
if(si0){
goto L13;
}
L18:;
si0=l8;
si1=l2;
si2=l3;
si0=f15390(i,si0,si1,si2);
l8=si0;
si0=l4;
si1=4U;
i32_store8(&i->m0,(U64)si0+46U,si1);
si0=l4;
si1=0U;
i32_store16(&i->m0,(U64)si0+44U,si1);
si0=l4;
si1=l3;
i32_store(&i->m0,(U64)si0+40U,si1);
si0=l4;
si1=l3;
i32_store(&i->m0,(U64)si0+36U,si1);
si0=l4;
si1=l11;
i32_store(&i->m0,(U64)si0+32U,si1);
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
f2053(i,si0,si1,si2);
si0=l4;
sj0=i64_load(&i->m0,(U64)si0+88U);
l13=sj0;
si0=l4;
sj0=i64_load(&i->m0,(U64)si0+80U);
l10=sj0;
si0=l4;
si1=l3;
i32_store(&i->m0,(U64)si0+56U,si1);
si0=l4;
si1=l3;
i32_store(&i->m0,(U64)si0+52U,si1);
si0=l4;
si1=l8;
i32_store(&i->m0,(U64)si0+48U,si1);
si0=l4;
si1=64U;
si0+=si1;
si1=l6;
si2=32U;
si1+=si2;
sj2=l13;
sj3=l10;
sj4=6364136223846793005ULL;
sj3*=sj4;
sj2^=sj3;
sj3=l10;
sj2=I64_ROTL(sj2,sj3);
si2=(U32)(sj2);
si3=l4;
si4=48U;
si3+=si4;
si4=l4;
si5=32U;
si4+=si5;
f2040(i,si0,si1,si2,si3,si4);
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
f15271(i,si0);
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
si0=l11;
si1=l12;
si2=1299180U;
f663(i,si0,si1,si2);
UNREACHABLE;
L1:;
si0=l4;
si1=96U;
si0+=si1;
i->g0=si0;
si0=l12;
L0:;
return si0;
}

void f1841(rustpythonInstance*i,U32 l0) {
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
si0=f15390(i,si0,si1,si2);
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
f1856(i,si0,si1);
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
si0=f15390(i,si0,si1,si2);
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
si0=1292185U;
si1=43U;
si2=1292472U;
f673(i,si0,si1,si2);
UNREACHABLE;
L1:;
si0=1292185U;
si1=43U;
si2=1292488U;
f673(i,si0,si1,si2);
UNREACHABLE;
L0:;
}

void f1842(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4,U32 l5,U32 l6) {
U32 l7=0;
U32 l8=0;
U32 l9=0;
U32 l10=0;
U64 l11=0;
U64 l12=0;
U32 si0,si1,si2,si3,si4;
U64 sj0,sj1,sj2,sj3,sj4;
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
si0=!(si0);
if(si0){
goto L11;
}
si0=l7;
si1=16U;
si0+=si1;
si1=l1;
si2=12U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
si2=l1;
si3=20U;
si2+=si3;
si2=i32_load(&i->m0,(U64)si2);
si3=l2;
si4=l3;
f1846(i,si0,si1,si2,si3,si4);
si0=l7;
si1=24U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=l7;
si0=i32_load(&i->m0,(U64)si0+20U);
l10=si0;
si0=l7;
si0=i32_load(&i->m0,(U64)si0+16U);
l2=si0;
si0=l8;
si1=96U;
si0*=si1;
si1=l9;
si0+=si1;
si1=-96U;
si0+=si1;
l1=si0;
si1=44U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L29;
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
f2053(i,si0,si1,si2);
si0=l7;
si1=8U;
si0+=si1;
si1=l1;
si2=32U;
si1+=si2;
si2=l7;
sj2=i64_load(&i->m0,(U64)si2+80U);
l11=sj2;
sj3=6364136223846793005ULL;
sj2*=sj3;
si3=l7;
sj3=i64_load(&i->m0,(U64)si3+88U);
sj2^=sj3;
sj3=l11;
sj2=I64_ROTL(sj2,sj3);
si2=(U32)(sj2);
si3=l9;
si4=l3;
f2044(i,si0,si1,si2,si3,si4);
si0=l7;
si0=i32_load(&i->m0,(U64)si0+8U);
si1=1U;
si0=si0 != si1;
if(si0){
goto L29;
}
si0=l7;
si0=i32_load(&i->m0,(U64)si0+12U);
l3=si0;
si1=l1;
si2=56U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
l2=si1;
si0=si0 >= si1;
if(si0){
goto L10;
}
si0=l1;
si1=48U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=l3;
si2=5U;
si1<<=(si2&31);
si0+=si1;
l10=si0;
si1=28U;
si0+=si1;
l1=si0;
si0=l10;
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
goto L28;
case 1:
goto L27;
default:
goto L25;
}
L29:;
si0=l4;
si1=255U;
si0&=si1;
si1=1U;
si0=si0 != si1;
if(si0){
goto L26;
}
si0=l8;
si1=2U;
si0=si0 >= si1;
if(si0){
goto L26;
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
si1=1293248U;
i32_store(&i->m0,(U64)si0+64U,si1);
si0=l7;
si1=553U;
i32_store(&i->m0,(U64)si0+36U,si1);
si0=l7;
si1=l7;
si2=32U;
si1+=si2;
i32_store(&i->m0,(U64)si0+72U,si1);
si0=l7;
si1=l7;
si2=16U;
si1+=si2;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l7;
si1=40U;
si0+=si1;
si1=l7;
si2=64U;
si1+=si2;
f63(i,si0,si1);
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
si0=0U;
l2=si0;
si0=l10;
si1=30U;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=6U;
si0&=si1;
si1=2U;
si0=si0 == si1;
if(si0){
goto L24;
}
si0=l1;
si0=i32_load16_u(&i->m0,(U64)si0);
l10=si0;
si1=4U;
si0&=si1;
if(si0){
goto L9;
}
si0=l10;
si1=1U;
si0&=si1;
if(si0){
goto L8;
}
si0=l10;
si1=8U;
si0&=si1;
if(si0){
goto L30;
}
si0=l10;
si1=2U;
si0&=si1;
si0=!(si0);
if(si0){
goto L24;
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
si1=1292844U;
i32_store(&i->m0,(U64)si0+64U,si1);
si0=l7;
si1=553U;
i32_store(&i->m0,(U64)si0+36U,si1);
si0=l7;
si1=l7;
si2=32U;
si1+=si2;
i32_store(&i->m0,(U64)si0+72U,si1);
si0=l7;
si1=l7;
si2=16U;
si1+=si2;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l7;
si1=40U;
si0+=si1;
si1=l7;
si2=64U;
si1+=si2;
f63(i,si0,si1);
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
L30:;
si0=l7;
si1=76U;
si0+=si1;
sj1=1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l7;
si1=2U;
i32_store(&i->m0,(U64)si0+68U,si1);
si0=l7;
si1=1292896U;
i32_store(&i->m0,(U64)si0+64U,si1);
si0=l7;
si1=553U;
i32_store(&i->m0,(U64)si0+36U,si1);
si0=l7;
si1=l7;
si2=32U;
si1+=si2;
i32_store(&i->m0,(U64)si0+72U,si1);
si0=l7;
si1=l7;
si2=16U;
si1+=si2;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l7;
si1=40U;
si0+=si1;
si1=l7;
si2=64U;
si1+=si2;
f63(i,si0,si1);
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
si0=l1;
si0=i32_load16_u(&i->m0,(U64)si0);
l10=si0;
si1=4U;
si0&=si1;
si0=!(si0);
if(si0){
goto L31;
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
si1=1293192U;
i32_store(&i->m0,(U64)si0+64U,si1);
si0=l7;
si1=553U;
i32_store(&i->m0,(U64)si0+36U,si1);
si0=l7;
si1=l7;
si2=32U;
si1+=si2;
i32_store(&i->m0,(U64)si0+72U,si1);
si0=l7;
si1=l7;
si2=16U;
si1+=si2;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l7;
si1=40U;
si0+=si1;
si1=l7;
si2=64U;
si1+=si2;
f63(i,si0,si1);
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
L31:;
si0=l10;
si1=1U;
si0&=si1;
si0=!(si0);
if(si0){
goto L32;
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
si1=1293148U;
i32_store(&i->m0,(U64)si0+64U,si1);
si0=l7;
si1=553U;
i32_store(&i->m0,(U64)si0+36U,si1);
si0=l7;
si1=l7;
si2=32U;
si1+=si2;
i32_store(&i->m0,(U64)si0+72U,si1);
si0=l7;
si1=l7;
si2=16U;
si1+=si2;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l7;
si1=40U;
si0+=si1;
si1=l7;
si2=64U;
si1+=si2;
f63(i,si0,si1);
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
L32:;
si0=l10;
si1=8U;
si0&=si1;
si0=!(si0);
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
si1=1293092U;
i32_store(&i->m0,(U64)si0+64U,si1);
si0=l7;
si1=553U;
i32_store(&i->m0,(U64)si0+36U,si1);
si0=l7;
si1=l7;
si2=32U;
si1+=si2;
i32_store(&i->m0,(U64)si0+72U,si1);
si0=l7;
si1=l7;
si2=16U;
si1+=si2;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l7;
si1=40U;
si0+=si1;
si1=l7;
si2=64U;
si1+=si2;
f63(i,si0,si1);
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
L26:;
si0=l2;
si1=l10;
si2=l2;
si0=si2?si0:si1;
l9=si0;
si0=l3;
si0=!(si0);
if(si0){
goto L35;
}
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
l8=si0;
si0=!(si0);
if(si0){
goto L5;
}
si0=l8;
si1=l9;
si2=l3;
si0=f15390(i,si0,si1,si2);
si0=l2;
if(si0){
goto L33;
}
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=l3;
si0=f15269(i,si0);
l9=si0;
if(si0){
goto L34;
}
si0=1U;
si1=l3;
f52(i,si0,si1);
UNREACHABLE;
L35:;
si0=1U;
l8=si0;
si0=1U;
si1=l9;
si2=l3;
si0=f15390(i,si0,si1,si2);
si0=1U;
l9=si0;
si0=l2;
if(si0){
goto L33;
}
L34:;
si0=l9;
si1=l10;
si2=l3;
si0=f15390(i,si0,si1,si2);
l2=si0;
si0=l3;
l10=si0;
si0=l2;
l2=si0;
L33:;
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
f2053(i,si0,si1,si2);
si0=l7;
sj0=i64_load(&i->m0,(U64)si0+88U);
l12=sj0;
si0=l7;
sj0=i64_load(&i->m0,(U64)si0+80U);
l11=sj0;
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
sj4=6364136223846793005ULL;
sj3*=sj4;
sj2^=sj3;
sj3=l11;
sj2=I64_ROTL(sj2,sj3);
si2=(U32)(sj2);
si3=l7;
si4=64U;
si3+=si4;
f2048(i,si0,si1,si2,si3);
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
si0=f2037(i,si0,si1);
l3=si0;
si0=1U;
l2=si0;
L25:;
si0=l3;
si1=12U;
si0+=si1;
l1=si0;
si0=l4;
si1=255U;
si0&=si1;
switch(si0){
case 0:
goto L24;
case 1:
goto L22;
case 2:
goto L21;
case 3:
goto L20;
case 4:
goto L19;
case 5:
goto L18;
case 6:
goto L17;
case 7:
goto L16;
case 8:
goto L15;
case 9:
goto L14;
default:
goto L24;
}
L24:;
si0=l3;
si1=2U;
i32_store8(&i->m0,(U64)si0+14U,si1);
si0=l1;
si0=i32_load16_u(&i->m0,(U64)si0);
l3=si0;
goto L12;
L23:;
si0=0U;
l2=si0;
si0=l10;
si1=2U;
si0&=si1;
if(si0){
goto L4;
}
L22:;
si0=l3;
si1=4U;
i32_store8(&i->m0,(U64)si0+14U,si1);
si0=l1;
si0=i32_load16_u(&i->m0,(U64)si0);
si1=32U;
si0|=si1;
l3=si0;
goto L13;
L21:;
si0=l1;
si0=i32_load16_u(&i->m0,(U64)si0);
si1=1U;
si0|=si1;
l3=si0;
goto L13;
L20:;
si0=l1;
si0=i32_load16_u(&i->m0,(U64)si0);
si1=2U;
si0|=si1;
l3=si0;
goto L13;
L19:;
si0=l1;
si0=i32_load16_u(&i->m0,(U64)si0);
si1=18U;
si0|=si1;
l3=si0;
goto L13;
L18:;
si0=l1;
si0=i32_load16_u(&i->m0,(U64)si0);
si1=10U;
si0|=si1;
l3=si0;
goto L13;
L17:;
si0=l1;
si0=i32_load16_u(&i->m0,(U64)si0);
si1=4U;
si0|=si1;
l3=si0;
goto L13;
L16:;
si0=l1;
si0=i32_load16_u(&i->m0,(U64)si0);
si1=12U;
si0|=si1;
l3=si0;
goto L13;
L15:;
si0=l1;
si0=i32_load16_u(&i->m0,(U64)si0);
si1=66U;
si0|=si1;
l3=si0;
goto L13;
L14:;
si0=l1;
si0=i32_load16_u(&i->m0,(U64)si0);
si1=128U;
si0|=si1;
l3=si0;
L13:;
si0=l1;
si1=l3;
i32_store16(&i->m0,(U64)si0,si1);
L12:;
si0=l3;
si1=130U;
si0&=si1;
si1=130U;
si0=si0 == si1;
if(si0){
goto L36;
}
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=l7;
si1=i32_load(&i->m0,(U64)si1+16U);
l1=si1;
si1=!(si1);
si0|=si1;
if(si0){
goto L1;
}
si0=l7;
si0=i32_load(&i->m0,(U64)si0+20U);
si0=!(si0);
if(si0){
goto L1;
}
si0=l1;
f15271(i,si0);
goto L1;
L36:;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=75U;
si0=f15269(i,si0);
l1=si0;
si0=!(si0);
if(si0){
goto L6;
}
si0=l1;
si1=1292593U;
si2=75U;
si0=f15390(i,si0,si1,si2);
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
si1=i32_load(&i->m0,(U64)si1+16U);
l1=si1;
si1=!(si1);
si0|=si1;
si0=!(si0);
if(si0){
goto L2;
}
goto L1;
L11:;
si0=1292185U;
si1=43U;
si2=1292780U;
f673(i,si0,si1,si2);
UNREACHABLE;
L10:;
si0=l3;
si1=l2;
si2=1299196U;
f663(i,si0,si1,si2);
UNREACHABLE;
L9:;
si0=l7;
si1=76U;
si0+=si1;
sj1=1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l7;
si1=2U;
i32_store(&i->m0,(U64)si0+68U,si1);
si0=l7;
si1=1292996U;
i32_store(&i->m0,(U64)si0+64U,si1);
si0=l7;
si1=553U;
i32_store(&i->m0,(U64)si0+36U,si1);
si0=l7;
si1=l7;
si2=32U;
si1+=si2;
i32_store(&i->m0,(U64)si0+72U,si1);
si0=l7;
si1=l7;
si2=16U;
si1+=si2;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l7;
si1=40U;
si0+=si1;
si1=l7;
si2=64U;
si1+=si2;
f63(i,si0,si1);
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
L8:;
si0=l7;
si1=76U;
si0+=si1;
sj1=1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l7;
si1=2U;
i32_store(&i->m0,(U64)si0+68U,si1);
si0=l7;
si1=1292952U;
i32_store(&i->m0,(U64)si0+64U,si1);
si0=l7;
si1=553U;
i32_store(&i->m0,(U64)si0+36U,si1);
si0=l7;
si1=l7;
si2=32U;
si1+=si2;
i32_store(&i->m0,(U64)si0+72U,si1);
si0=l7;
si1=l7;
si2=16U;
si1+=si2;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l7;
si1=40U;
si0+=si1;
si1=l7;
si2=64U;
si1+=si2;
f63(i,si0,si1);
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
L7:;
f53(i);
UNREACHABLE;
L6:;
si0=1U;
si1=75U;
f52(i,si0,si1);
UNREACHABLE;
L5:;
si0=1U;
si1=l3;
f52(i,si0,si1);
UNREACHABLE;
L4:;
si0=l7;
si1=76U;
si0+=si1;
sj1=1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l7;
si1=2U;
i32_store(&i->m0,(U64)si0+68U,si1);
si0=l7;
si1=1293056U;
i32_store(&i->m0,(U64)si0+64U,si1);
si0=l7;
si1=553U;
i32_store(&i->m0,(U64)si0+36U,si1);
si0=l7;
si1=l7;
si2=32U;
si1+=si2;
i32_store(&i->m0,(U64)si0+72U,si1);
si0=l7;
si1=l7;
si2=16U;
si1+=si2;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l7;
si1=40U;
si0+=si1;
si1=l7;
si2=64U;
si1+=si2;
f63(i,si0,si1);
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
L3:;
si0=l0;
si1=l6;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l0;
si1=l5;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l7;
si0=i32_load(&i->m0,(U64)si0+16U);
l1=si0;
si0=!(si0);
if(si0){
goto L1;
}
L2:;
si0=l7;
si0=i32_load(&i->m0,(U64)si0+20U);
si0=!(si0);
if(si0){
goto L1;
}
si0=l1;
f15271(i,si0);
L1:;
si0=l7;
si1=96U;
si0+=si1;
i->g0=si0;
L0:;
}

void f1843(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4,U32 l5) {
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
si1=8U;
si0+=si1;
si1=l1;
si2=l21;
si3=0U;
f1836(i,si0,si1,si2,si3);
si0=l6;
si0=i32_load(&i->m0,(U64)si0+8U);
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
si1=8U;
si0+=si1;
si1=l1;
si2=l21;
si3=0U;
f1836(i,si0,si1,si2,si3);
si0=l6;
si0=i32_load(&i->m0,(U64)si0+8U);
l21=si0;
si0=!(si0);
if(si0){
goto L17;
}
}
si0=l0;
si1=l6;
sj1=i64_load(&i->m0,(U64)si1+12U);
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l0;
si1=12U;
si0+=si1;
si1=l6;
si2=8U;
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
sj1=i64_load(&i->m0,(U64)si1+12U);
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l0;
si1=12U;
si0+=si1;
si1=l6;
si2=8U;
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
si1=8U;
si0+=si1;
si1=l1;
si2=l17;
si3=0U;
f1836(i,si0,si1,si2,si3);
si0=l6;
si0=i32_load(&i->m0,(U64)si0+8U);
l21=si0;
si0=!(si0);
if(si0){
goto L2;
}
si0=l0;
si1=l6;
sj1=i64_load(&i->m0,(U64)si1+12U);
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l0;
si1=12U;
si0+=si1;
si1=l6;
si2=8U;
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
si1=8U;
si0+=si1;
si1=l1;
si2=l17;
si3=0U;
f1836(i,si0,si1,si2,si3);
si0=l6;
si0=i32_load(&i->m0,(U64)si0+8U);
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
f1832(i,si0,si1,si2,si3,si4);
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
si1=8U;
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
f1842(i,si0,si1,si2,si3,si4,si5,si6);
si0=l6;
si0=i32_load(&i->m0,(U64)si0+8U);
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
si1=8U;
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
f1842(i,si0,si1,si2,si3,si4,si5,si6);
si0=l6;
si0=i32_load(&i->m0,(U64)si0+8U);
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
si1=8U;
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
f1842(i,si0,si1,si2,si3,si4,si5,si6);
si0=l6;
si0=i32_load(&i->m0,(U64)si0+8U);
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
si1=8U;
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
f1842(i,si0,si1,si2,si3,si4,si5,si6);
si0=l6;
si0=i32_load(&i->m0,(U64)si0+8U);
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
si1=8U;
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
f1842(i,si0,si1,si2,si3,si4,si5,si6);
si0=l6;
si0=i32_load(&i->m0,(U64)si0+8U);
l17=si0;
si0=!(si0);
if(si0){
goto L1;
}
si0=l0;
si1=l6;
sj1=i64_load(&i->m0,(U64)si1+12U);
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l0;
si1=12U;
si0+=si1;
si1=l6;
si2=8U;
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
sj1=i64_load(&i->m0,(U64)si1+12U);
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l0;
si1=12U;
si0+=si1;
si1=l6;
si2=8U;
si1+=si2;
si2=12U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
goto L1;
L29:;
si0=l0;
si1=l6;
sj1=i64_load(&i->m0,(U64)si1+12U);
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l0;
si1=12U;
si0+=si1;
si1=l6;
si2=8U;
si1+=si2;
si2=12U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
goto L1;
L28:;
si0=l0;
si1=l6;
sj1=i64_load(&i->m0,(U64)si1+12U);
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l0;
si1=12U;
si0+=si1;
si1=l6;
si2=8U;
si1+=si2;
si2=12U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
goto L1;
L27:;
si0=l0;
si1=l6;
sj1=i64_load(&i->m0,(U64)si1+12U);
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l0;
si1=12U;
si0+=si1;
si1=l6;
si2=8U;
si1+=si2;
si2=12U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
goto L1;
L26:;
si0=l0;
si1=l6;
sj1=i64_load(&i->m0,(U64)si1+12U);
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l0;
si1=12U;
si0+=si1;
si1=l6;
si2=8U;
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

void f1844(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4) {
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
si1=8U;
si0+=si1;
si1=l1;
si2=l2;
si3=l4;
f1836(i,si0,si1,si2,si3);
si0=l5;
si0=i32_load(&i->m0,(U64)si0+8U);
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
sj1=i64_load(&i->m0,(U64)si1+12U);
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l0;
si1=12U;
si0+=si1;
si1=l5;
si2=8U;
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

void f1845(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4,U32 l5,U32 l6,U32 l7) {
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
si1=1292690U;
si2=7U;
si3=3U;
si4=l6;
f1832(i,si0,si1,si2,si3,si4);
si0=l8;
si1=8U;
si0+=si1;
si1=l1;
si2=1292721U;
si3=2U;
si4=6U;
si5=l6;
si6=l7;
f1842(i,si0,si1,si2,si3,si4,si5,si6);
si0=l8;
si0=i32_load(&i->m0,(U64)si0+8U);
l7=si0;
if(si0){
goto L5;
}
si0=l8;
si1=8U;
si0+=si1;
si1=l1;
si2=l2;
si3=0U;
f1836(i,si0,si1,si2,si3);
si0=l8;
si0=i32_load(&i->m0,(U64)si0+8U);
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
si1=8U;
si0+=si1;
si1=l1;
si2=l3;
si3=0U;
f1836(i,si0,si1,si2,si3);
si0=l8;
si0=i32_load(&i->m0,(U64)si0+8U);
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
si1=8U;
si0+=si1;
si1=l1;
si2=l3;
si3=3U;
f1836(i,si0,si1,si2,si3);
si0=l8;
si0=i32_load(&i->m0,(U64)si0+8U);
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
sj1=i64_load(&i->m0,(U64)si1+12U);
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l0;
si1=12U;
si0+=si1;
si1=l8;
si2=8U;
si1+=si2;
si2=12U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
goto L1;
L11:;
si0=l8;
si1=8U;
si0+=si1;
si1=l1;
si2=l3;
si3=56U;
si2+=si3;
si3=4U;
f1836(i,si0,si1,si2,si3);
si0=l8;
si0=i32_load(&i->m0,(U64)si0+8U);
l7=si0;
si0=!(si0);
if(si0){
goto L10;
}
si0=l0;
si1=l8;
sj1=i64_load(&i->m0,(U64)si1+12U);
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l0;
si1=12U;
si0+=si1;
si1=l8;
si2=8U;
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
si1=8U;
si0+=si1;
si1=l1;
si2=l6;
si3=0U;
f1836(i,si0,si1,si2,si3);
si0=l8;
si0=i32_load(&i->m0,(U64)si0+8U);
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
f1841(i,si0);
si0=l5;
si0=!(si0);
if(si0){
goto L3;
}
si0=l8;
si1=8U;
si0+=si1;
si1=l1;
si2=l4;
si3=56U;
si2+=si3;
si3=4U;
f1836(i,si0,si1,si2,si3);
si0=l8;
si0=i32_load(&i->m0,(U64)si0+8U);
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
sj1=i64_load(&i->m0,(U64)si1+12U);
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l0;
si1=12U;
si0+=si1;
si1=l8;
si2=8U;
si1+=si2;
si2=12U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
goto L1;
L8:;
si0=l0;
si1=l8;
sj1=i64_load(&i->m0,(U64)si1+12U);
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l0;
si1=12U;
si0+=si1;
si1=l8;
si2=8U;
si1+=si2;
si2=12U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
goto L1;
L6:;
si0=l0;
si1=l8;
sj1=i64_load(&i->m0,(U64)si1+12U);
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l0;
si1=12U;
si0+=si1;
si1=l8;
si2=8U;
si1+=si2;
si2=12U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
goto L1;
L5:;
si0=l0;
si1=l8;
sj1=i64_load(&i->m0,(U64)si1+12U);
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l0;
si1=12U;
si0+=si1;
si1=l8;
si2=8U;
si1+=si2;
si2=12U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
goto L1;
L4:;
si0=l1;
f1841(i,si0);
L3:;
si0=1292723U;
si1=40U;
si2=1292764U;
f673(i,si0,si1,si2);
UNREACHABLE;
L2:;
si0=l0;
si1=l8;
sj1=i64_load(&i->m0,(U64)si1+12U);
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l0;
si1=12U;
si0+=si1;
si1=l8;
si2=8U;
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

void f1846(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4) {
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
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=l7;
si0=f15269(i,si0);
l8=si0;
si0=!(si0);
if(si0){
goto L18;
}
si0=l5;
si1=0U;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l5;
si1=l7;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l5;
si1=l8;
i32_store(&i->m0,(U64)si0,si1);
goto L20;
L21:;
si0=l5;
si1=0U;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l5;
sj1=1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=0U;
f1858(i,si0,si1);
si0=l5;
si0=i32_load(&i->m0,(U64)si0);
l8=si0;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+8U);
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
si1=i32_load(&i->m0,(U64)si1+8U);
si2=1U;
si1+=si2;
l1=si1;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l5;
si0=i32_load(&i->m0,(U64)si0+4U);
si1=l1;
si0-=si1;
si1=l2;
si0=si0 >= si1;
if(si0){
goto L22;
}
si0=l5;
si1=l1;
si2=l2;
f1864(i,si0,si1,si2);
si0=l5;
si0=i32_load(&i->m0,(U64)si0+8U);
l1=si0;
L22:;
si0=l5;
si0=i32_load(&i->m0,(U64)si0);
si1=l1;
si0+=si1;
si1=l6;
si2=l2;
si0=f15390(i,si0,si1,si2);
si0=l5;
si1=l1;
si2=l2;
si1+=si2;
l1=si1;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l5;
si0=i32_load(&i->m0,(U64)si0+4U);
si1=l1;
si0-=si1;
si1=l4;
si0=si0 >= si1;
if(si0){
goto L23;
}
si0=l5;
si1=l1;
si2=l4;
f1864(i,si0,si1,si2);
si0=l5;
si0=i32_load(&i->m0,(U64)si0+8U);
l1=si0;
L23:;
si0=l5;
si0=i32_load(&i->m0,(U64)si0);
si1=l1;
si0+=si1;
si1=l3;
si2=l4;
si0=f15390(i,si0,si1,si2);
si0=l0;
si1=8U;
si0+=si1;
si1=l1;
si2=l4;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l5;
sj1=i64_load(&i->m0,(U64)si1);
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

U32 f1847(rustpythonInstance*i,U32 l0,U32 l1) {
U32 si0,si1,si2,si3,si4;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=l0;
si1=i32_load8_u(&i->m0,(U64)si1);
si2=2U;
si1<<=(si2&31);
l0=si1;
si2=1293360U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
si2=l0;
si3=1293344U;
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

U32 f1848(rustpythonInstance*i,U32 l0,U32 l1) {
U32 si0,si1,si2,si3,si4;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=l0;
si1=i32_load8_u(&i->m0,(U64)si1);
si2=2U;
si1<<=(si2&31);
l0=si1;
si2=1293400U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
si2=l0;
si3=1293376U;
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

void f1849(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
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

void f1850(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
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
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=l1;
si0=f15269(i,si0);
l2=si0;
goto L5;
L6:;
si0=l1;
si1=1U;
si0=f15273(i,si0,si1);
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

void f1851(rustpythonInstance*i,U32 l0,U32 l1) {
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
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l2;
si1=l3;
si2=20U;
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
f1849(i,si0,si1,si2,si3);
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

void f1852(rustpythonInstance*i,U32 l0,U32 l1) {
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
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l2;
si1=l3;
si2=2U;
si1<<=(si2&31);
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
f1849(i,si0,si1,si2,si3);
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

void f1853(rustpythonInstance*i,U32 l0,U32 l1) {
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
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l2;
si1=4U;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l2;
si1=l3;
si2=4U;
si1<<=(si2&31);
i32_store(&i->m0,(U64)si0+24U,si1);
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
f1849(i,si0,si1,si2,si3);
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

void f1854(rustpythonInstance*i,U32 l0,U32 l1) {
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
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l2;
si1=l3;
si2=3U;
si1<<=(si2&31);
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
f1849(i,si0,si1,si2,si3);
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

void f1855(rustpythonInstance*i,U32 l0,U32 l1) {
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
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l2;
si1=l3;
si2=384U;
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
f1849(i,si0,si1,si2,si3);
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

void f1856(rustpythonInstance*i,U32 l0,U32 l1) {
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
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l2;
si1=l3;
si2=96U;
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
f1849(i,si0,si1,si2,si3);
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

void f1857(rustpythonInstance*i,U32 l0,U32 l1) {
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
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l2;
si1=l3;
si2=24U;
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
f1849(i,si0,si1,si2,si3);
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

void f1858(rustpythonInstance*i,U32 l0,U32 l1) {
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
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l2;
si1=1U;
i32_store(&i->m0,(U64)si0+20U,si1);
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
si1=l4;
si2=l1;
si3=l2;
si4=16U;
si3+=si4;
f1849(i,si0,si1,si2,si3);
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

void f1859(rustpythonInstance*i,U32 l0,U32 l1) {
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
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l2;
si1=l3;
si2=5U;
si1<<=(si2&31);
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
f1849(i,si0,si1,si2,si3);
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

void f1860(rustpythonInstance*i,U32 l0,U32 l1) {
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
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l2;
si1=l3;
si2=12U;
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
f1849(i,si0,si1,si2,si3);
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

void f1861(rustpythonInstance*i,U32 l0,U32 l1) {
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
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l2;
si1=l3;
si2=5U;
si1<<=(si2&31);
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
f1849(i,si0,si1,si2,si3);
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

void f1862(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
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
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l3;
si1=l1;
si2=2U;
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
f1849(i,si0,si1,si2,si3);
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

void f1863(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
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
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l3;
si1=l1;
si2=12U;
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
f1849(i,si0,si1,si2,si3);
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

void f1864(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
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
f1849(i,si0,si1,si2,si3);
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

void f1865(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
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
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
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
si1=l5;
si2=l6;
si3=l3;
si4=16U;
si3+=si4;
f1849(i,si0,si1,si2,si3);
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

U32 f1866(rustpythonInstance*i,U32 l0,U32 l1) {
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
si1=80U;
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
si2=1300240U;
f717(i,si0,si1,si2);
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

U32 f1867(rustpythonInstance*i,U32 l0,U32 l1) {
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
si1=56U;
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
si2=1300208U;
f717(i,si0,si1,si2);
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

U32 f1868(rustpythonInstance*i,U32 l0,U32 l1) {
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
si1=7U;
si0<<=(si1&31);
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
si2=1300272U;
f717(i,si0,si1,si2);
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

U32 f1869(rustpythonInstance*i,U32 l0,U32 l1) {
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
si1=80U;
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
si2=1300320U;
f717(i,si0,si1,si2);
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

U32 f1870(rustpythonInstance*i,U32 l0,U32 l1) {
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
si1=88U;
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
si2=1300192U;
f717(i,si0,si1,si2);
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

U32 f1871(rustpythonInstance*i,U32 l0,U32 l1) {
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
si1=12U;
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
si2=1300128U;
f717(i,si0,si1,si2);
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

U32 f1872(rustpythonInstance*i,U32 l0,U32 l1) {
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
si1=6U;
si0<<=(si1&31);
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
si2=1300176U;
f717(i,si0,si1,si2);
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

U32 f1873(rustpythonInstance*i,U32 l0,U32 l1) {
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
si1=40U;
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
si2=1300288U;
f717(i,si0,si1,si2);
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

void f1874(rustpythonInstance*i,U32 l0) {
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
f1874(i,si0);
si0=l2;
f15271(i,si0);
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
f1874(i,si0);
si0=l2;
f15271(i,si0);
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
f1874(i,si0);
si0=l2;
f15271(i,si0);
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
f1874(i,si0);
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
f15271(i,si0);
goto L0;
L26:;
si0=l0;
si1=20U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
f1874(i,si0);
si0=l2;
f15271(i,si0);
si0=l0;
si1=24U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
f1874(i,si0);
si0=l2;
f15271(i,si0);
goto L0;
L25:;
si0=l0;
si1=20U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
f1874(i,si0);
si0=l2;
f15271(i,si0);
si0=l0;
si1=24U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
f1874(i,si0);
si0=l2;
f15271(i,si0);
goto L0;
L24:;
si0=l0;
si1=20U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
f1874(i,si0);
si0=l2;
f15271(i,si0);
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
f15271(i,si0);
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
f1874(i,si0);
si0=l1;
f15271(i,si0);
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
f15271(i,si0);
L37:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si0=!(si0);
if(si0){
goto L38;
}
si0=l1;
f1874(i,si0);
si0=l1;
f15271(i,si0);
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
f15271(i,si0);
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
f1874(i,si0);
si0=l1;
f15271(i,si0);
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
f15271(i,si0);
L44:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si0=!(si0);
if(si0){
goto L45;
}
si0=l1;
f1874(i,si0);
si0=l1;
f15271(i,si0);
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
f15271(i,si0);
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
f15271(i,si0);
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
f1875(i,si0);
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
f15271(i,si0);
L50:;
si0=l2;
f15271(i,si0);
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
f15271(i,si0);
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
f1874(i,si0);
si0=l1;
f15271(i,si0);
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
f15271(i,si0);
L55:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si0=!(si0);
if(si0){
goto L56;
}
si0=l1;
f1874(i,si0);
si0=l1;
f15271(i,si0);
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
f15271(i,si0);
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
f15271(i,si0);
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
f1875(i,si0);
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
f15271(i,si0);
L61:;
si0=l2;
f15271(i,si0);
L58:;
si0=l4;
f15271(i,si0);
si0=l0;
si1=24U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
f1874(i,si0);
si0=l2;
f15271(i,si0);
goto L0;
L22:;
si0=l0;
si1=20U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
f1874(i,si0);
si0=l2;
f15271(i,si0);
si0=l0;
si1=24U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
f1874(i,si0);
si0=l2;
f15271(i,si0);
si0=l0;
si1=28U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
f1874(i,si0);
si0=l2;
f15271(i,si0);
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
f1874(i,si0);
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
f15271(i,si0);
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
f1874(i,si0);
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
f15271(i,si0);
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
f1874(i,si0);
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
f15271(i,si0);
goto L0;
L19:;
si0=l0;
si1=20U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
f1874(i,si0);
si0=l2;
f15271(i,si0);
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
l3=si0;
L71:;
{
si0=l5;
si1=l3;
si2=7U;
si1<<=(si2&31);
si0+=si1;
l2=si0;
f1874(i,si0);
si0=l2;
si1=56U;
si0+=si1;
f1874(i,si0);
si0=l2;
si1=112U;
si0+=si1;
l4=si0;
si0=l2;
si1=120U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si0=!(si0);
if(si0){
goto L72;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0+112U);
l2=si0;
L73:;
{
si0=l2;
f1874(i,si0);
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
si1=1U;
si0+=si1;
l3=si0;
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
si0=l3;
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
f15271(i,si0);
goto L0;
L18:;
si0=l0;
si1=20U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
f1874(i,si0);
si0=l2;
f15271(i,si0);
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
l3=si0;
L76:;
{
si0=l5;
si1=l3;
si2=7U;
si1<<=(si2&31);
si0+=si1;
l2=si0;
f1874(i,si0);
si0=l2;
si1=56U;
si0+=si1;
f1874(i,si0);
si0=l2;
si1=112U;
si0+=si1;
l4=si0;
si0=l2;
si1=120U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si0=!(si0);
if(si0){
goto L77;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0+112U);
l2=si0;
L78:;
{
si0=l2;
f1874(i,si0);
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
si1=1U;
si0+=si1;
l3=si0;
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
si0=l3;
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
f15271(i,si0);
goto L0;
L17:;
si0=l0;
si1=20U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
f1874(i,si0);
si0=l2;
f15271(i,si0);
si0=l0;
si1=24U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
f1874(i,si0);
si0=l2;
f15271(i,si0);
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
l3=si0;
L81:;
{
si0=l5;
si1=l3;
si2=7U;
si1<<=(si2&31);
si0+=si1;
l2=si0;
f1874(i,si0);
si0=l2;
si1=56U;
si0+=si1;
f1874(i,si0);
si0=l2;
si1=112U;
si0+=si1;
l4=si0;
si0=l2;
si1=120U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si0=!(si0);
if(si0){
goto L82;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0+112U);
l2=si0;
L83:;
{
si0=l2;
f1874(i,si0);
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
si1=1U;
si0+=si1;
l3=si0;
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
si0=l3;
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
f15271(i,si0);
goto L0;
L16:;
si0=l0;
si1=20U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
f1874(i,si0);
si0=l2;
f15271(i,si0);
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
l3=si0;
L86:;
{
si0=l5;
si1=l3;
si2=7U;
si1<<=(si2&31);
si0+=si1;
l2=si0;
f1874(i,si0);
si0=l2;
si1=56U;
si0+=si1;
f1874(i,si0);
si0=l2;
si1=112U;
si0+=si1;
l4=si0;
si0=l2;
si1=120U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si0=!(si0);
if(si0){
goto L87;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0+112U);
l2=si0;
L88:;
{
si0=l2;
f1874(i,si0);
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
si1=1U;
si0+=si1;
l3=si0;
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
si0=l3;
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
f15271(i,si0);
goto L0;
L15:;
si0=l0;
si1=20U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
f1874(i,si0);
si0=l2;
f15271(i,si0);
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
f1874(i,si0);
si0=l2;
f15271(i,si0);
goto L0;
L13:;
si0=l0;
si1=20U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
f1874(i,si0);
si0=l2;
f15271(i,si0);
goto L0;
L12:;
si0=l0;
si1=20U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
f1874(i,si0);
si0=l2;
f15271(i,si0);
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
f15271(i,si0);
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
f1874(i,si0);
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
f15271(i,si0);
goto L0;
L11:;
si0=l0;
si1=20U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
f1874(i,si0);
si0=l2;
f15271(i,si0);
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
f1874(i,si0);
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
f15271(i,si0);
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
f15271(i,si0);
L98:;
si0=l2;
f1874(i,si0);
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
f15271(i,si0);
goto L0;
L10:;
si0=l0;
si1=20U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
f1874(i,si0);
si0=l2;
f15271(i,si0);
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
f1874(i,si0);
si0=l2;
f15271(i,si0);
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
f1874(i,si0);
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
f1876(i,si0);
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
f15271(i,si0);
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
f15271(i,si0);
goto L0;
L7:;
si0=l0;
si1=20U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
f1874(i,si0);
si0=l2;
f15271(i,si0);
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
f15271(i,si0);
goto L0;
L6:;
si0=l0;
si1=20U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
f1874(i,si0);
si0=l2;
f15271(i,si0);
si0=l0;
si1=24U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
f1874(i,si0);
si0=l2;
f15271(i,si0);
goto L0;
L5:;
si0=l0;
si1=20U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
f1874(i,si0);
si0=l2;
f15271(i,si0);
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
f15271(i,si0);
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
f1874(i,si0);
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
f15271(i,si0);
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
f1874(i,si0);
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
f15271(i,si0);
L1:;
L0:;
}

void f1875(rustpythonInstance*i,U32 l0) {
U32 si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
l0=si0;
f1874(i,si0);
si0=l0;
f15271(i,si0);
L0:;
}

void f1876(rustpythonInstance*i,U32 l0) {
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
f1876(i,si0);
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
f15271(i,si0);
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

void f1877(rustpythonInstance*i,U32 l0) {
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
si1=24U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L26;
}
si0=l0;
si1=20U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
f15271(i,si0);
L26:;
si0=l0;
si1=32U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
f1878(i,si0);
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
f1877(i,si0);
si0=l3;
si1=80U;
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
goto L29;
}
si0=l1;
f15271(i,si0);
L29:;
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
goto L30;
}
si0=l1;
l3=si0;
L31:;
{
si0=l3;
f1874(i,si0);
si0=l3;
si1=56U;
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
si1=52U;
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
si1=60U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=!(si0);
if(si0){
goto L33;
}
si0=l3;
f1874(i,si0);
si0=l3;
f15271(i,si0);
L33:;
si0=l0;
si1=64U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=!(si0);
if(si0){
goto L1;
}
si0=l0;
si1=68U;
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
si1=24U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L34;
}
si0=l0;
si1=20U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
f15271(i,si0);
L34:;
si0=l0;
si1=32U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
f1878(i,si0);
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
goto L35;
}
si0=l1;
l3=si0;
L36:;
{
si0=l3;
f1877(i,si0);
si0=l3;
si1=80U;
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
si1=40U;
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
goto L38;
}
si0=l1;
l3=si0;
L39:;
{
si0=l3;
f1874(i,si0);
si0=l3;
si1=56U;
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
si1=52U;
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
si1=60U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=!(si0);
if(si0){
goto L41;
}
si0=l3;
f1874(i,si0);
si0=l3;
f15271(i,si0);
L41:;
si0=l0;
si1=64U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=!(si0);
if(si0){
goto L1;
}
si0=l0;
si1=68U;
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
si1=24U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L42;
}
si0=l0;
si1=20U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
f15271(i,si0);
L42:;
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
goto L43;
}
si0=l1;
l3=si0;
L44:;
{
si0=l3;
f1874(i,si0);
si0=l3;
si1=56U;
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
si1=36U;
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
goto L46;
}
si0=l4;
l3=si0;
L47:;
{
si0=l3;
si1=72U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si0=!(si0);
if(si0){
goto L48;
}
si0=l3;
si1=76U;
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
f1874(i,si0);
si0=l3;
si1=88U;
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
si1=48U;
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
goto L50;
}
si0=l1;
l3=si0;
L51:;
{
si0=l3;
f1877(i,si0);
si0=l3;
si1=80U;
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
si1=60U;
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
goto L53;
}
si0=l1;
l3=si0;
L54:;
{
si0=l3;
f1874(i,si0);
si0=l3;
si1=56U;
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
si1=72U;
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
si1=20U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=!(si0);
if(si0){
goto L1;
}
si0=l3;
f1874(i,si0);
si0=l3;
f15271(i,si0);
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
goto L55;
}
si0=l1;
l3=si0;
L56:;
{
si0=l3;
f1874(i,si0);
si0=l3;
si1=56U;
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
L20:;
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
goto L57;
}
si0=l1;
l3=si0;
L58:;
{
si0=l3;
f1874(i,si0);
si0=l3;
si1=56U;
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
si1=24U;
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
si1=32U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
f1874(i,si0);
si0=l3;
f15271(i,si0);
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
f1874(i,si0);
si0=l2;
f15271(i,si0);
si0=l3;
f1874(i,si0);
si0=l3;
f15271(i,si0);
goto L0;
L18:;
si0=l0;
si1=20U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
f1874(i,si0);
si0=l3;
f15271(i,si0);
si0=l0;
si1=24U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
f1874(i,si0);
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
si0=l3;
f1874(i,si0);
si0=l3;
f15271(i,si0);
goto L0;
L17:;
si0=l0;
si1=20U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
f1874(i,si0);
si0=l3;
f15271(i,si0);
si0=l0;
si1=24U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
f1874(i,si0);
si0=l3;
f15271(i,si0);
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
goto L60;
}
si0=l1;
l3=si0;
L61:;
{
si0=l3;
f1877(i,si0);
si0=l3;
si1=80U;
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
si1=32U;
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
goto L63;
}
si0=l1;
l3=si0;
L64:;
{
si0=l3;
f1877(i,si0);
si0=l3;
si1=80U;
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
si1=44U;
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
f15271(i,si0);
goto L0;
L16:;
si0=l0;
si1=20U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
f1874(i,si0);
si0=l3;
f15271(i,si0);
si0=l0;
si1=24U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
f1874(i,si0);
si0=l3;
f15271(i,si0);
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
goto L66;
}
si0=l1;
l3=si0;
L67:;
{
si0=l3;
f1877(i,si0);
si0=l3;
si1=80U;
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
si1=32U;
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
goto L69;
}
si0=l1;
l3=si0;
L70:;
{
si0=l3;
f1877(i,si0);
si0=l3;
si1=80U;
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
si1=44U;
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
f15271(i,si0);
goto L0;
L15:;
si0=l0;
si1=20U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
f1874(i,si0);
si0=l3;
f15271(i,si0);
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
goto L72;
}
si0=l1;
l3=si0;
L73:;
{
si0=l3;
f1877(i,si0);
si0=l3;
si1=80U;
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
si1=28U;
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
goto L75;
}
si0=l1;
l3=si0;
L76:;
{
si0=l3;
f1877(i,si0);
si0=l3;
si1=80U;
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
si1=40U;
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
si1=20U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
f1874(i,si0);
si0=l3;
f15271(i,si0);
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
goto L77;
}
si0=l1;
l3=si0;
L78:;
{
si0=l3;
f1877(i,si0);
si0=l3;
si1=80U;
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
si1=28U;
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
goto L80;
}
si0=l1;
l3=si0;
L81:;
{
si0=l3;
f1877(i,si0);
si0=l3;
si1=80U;
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
si1=40U;
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
goto L82;
}
si0=l4;
l3=si0;
L83:;
{
si0=l3;
f1874(i,si0);
si0=l3;
si1=56U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si0=!(si0);
if(si0){
goto L84;
}
si0=l2;
f1874(i,si0);
si0=l2;
f15271(i,si0);
L84:;
si0=l3;
si1=64U;
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
si1=24U;
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
goto L86;
}
si0=l1;
l3=si0;
L87:;
{
si0=l3;
f1877(i,si0);
si0=l3;
si1=80U;
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
si1=36U;
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
goto L89;
}
si0=l4;
l3=si0;
L90:;
{
si0=l3;
f1874(i,si0);
si0=l3;
si1=56U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si0=!(si0);
if(si0){
goto L91;
}
si0=l2;
f1874(i,si0);
si0=l2;
f15271(i,si0);
L91:;
si0=l3;
si1=64U;
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
si1=24U;
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
goto L93;
}
si0=l1;
l3=si0;
L94:;
{
si0=l3;
f1877(i,si0);
si0=l3;
si1=80U;
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
si1=36U;
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
L11:;
si0=l0;
si1=20U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
f1874(i,si0);
si0=l3;
f15271(i,si0);
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
goto L96;
}
si0=0U;
l1=si0;
L97:;
{
si0=l5;
si1=l1;
si2=80U;
si1*=si2;
si0+=si1;
l3=si0;
f1879(i,si0);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+76U);
l2=si0;
si0=!(si0);
if(si0){
goto L98;
}
si0=l2;
f1874(i,si0);
si0=l2;
f15271(i,si0);
L98:;
si0=l3;
si1=64U;
si0+=si1;
l4=si0;
si0=l3;
si1=72U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si0=!(si0);
if(si0){
goto L99;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0+64U);
l3=si0;
L100:;
{
si0=l3;
f1877(i,si0);
si0=l3;
si1=80U;
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
si1=28U;
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
goto L102;
}
si0=l2;
f1874(i,si0);
si0=l2;
f15271(i,si0);
L102:;
si0=l3;
si0=!(si0);
if(si0){
goto L1;
}
si0=l3;
f1874(i,si0);
si0=l3;
f15271(i,si0);
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
goto L103;
}
si0=l1;
l3=si0;
L104:;
{
si0=l3;
f1877(i,si0);
si0=l3;
si1=80U;
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
si1=24U;
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
goto L106;
}
si0=0U;
l4=si0;
L107:;
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
goto L108;
}
si0=l3;
f1874(i,si0);
si0=l3;
f15271(i,si0);
L108:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+32U);
l3=si0;
si0=!(si0);
if(si0){
goto L109;
}
si0=l1;
si1=36U;
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
si1=24U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si0=!(si0);
if(si0){
goto L110;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+16U);
l3=si0;
L111:;
{
si0=l3;
f1877(i,si0);
si0=l3;
si1=80U;
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
si0=l4;
si1=l6;
si0=si0 != si1;
if(si0){
goto L107;
}
}
L106:;
si0=l0;
si1=36U;
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
goto L114;
}
si0=l1;
l3=si0;
L115:;
{
si0=l3;
f1877(i,si0);
si0=l3;
si1=80U;
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
si1=48U;
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
goto L117;
}
si0=l1;
l3=si0;
L118:;
{
si0=l3;
f1877(i,si0);
si0=l3;
si1=80U;
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
si1=60U;
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
goto L119;
}
si0=l1;
l3=si0;
L120:;
{
si0=l3;
f1877(i,si0);
si0=l3;
si1=80U;
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
si1=24U;
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
goto L122;
}
si0=0U;
l4=si0;
L123:;
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
goto L124;
}
si0=l3;
f1874(i,si0);
si0=l3;
f15271(i,si0);
L124:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+32U);
l3=si0;
si0=!(si0);
if(si0){
goto L125;
}
si0=l1;
si1=36U;
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
si1=24U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si0=!(si0);
if(si0){
goto L126;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+16U);
l3=si0;
L127:;
{
si0=l3;
f1877(i,si0);
si0=l3;
si1=80U;
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
si1=20U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L128;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+16U);
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
si1=36U;
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
goto L130;
}
si0=l1;
l3=si0;
L131:;
{
si0=l3;
f1877(i,si0);
si0=l3;
si1=80U;
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
si1=48U;
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
goto L133;
}
si0=l1;
l3=si0;
L134:;
{
si0=l3;
f1877(i,si0);
si0=l3;
si1=80U;
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
si1=60U;
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
si1=24U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=l0;
si1=20U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
f1874(i,si0);
si0=l2;
f15271(i,si0);
si0=l3;
si0=!(si0);
if(si0){
goto L1;
}
si0=l3;
f1874(i,si0);
si0=l3;
f15271(i,si0);
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
goto L135;
}
si0=l4;
si1=32U;
si0+=si1;
l3=si0;
L136:;
{
si0=l3;
si1=-12U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L137;
}
si0=l3;
si1=-16U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
f15271(i,si0);
L137:;
si0=l3;
si1=-4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si0=!(si0);
if(si0){
goto L138;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L138;
}
si0=l1;
f15271(i,si0);
L138:;
si0=l3;
si1=40U;
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
L5:;
si0=l0;
si1=40U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=!(si0);
if(si0){
goto L139;
}
si0=l0;
si1=44U;
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
goto L140;
}
si0=l4;
si1=32U;
si0+=si1;
l3=si0;
L141:;
{
si0=l3;
si1=-12U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L142;
}
si0=l3;
si1=-16U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
f15271(i,si0);
L142:;
si0=l3;
si1=-4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si0=!(si0);
if(si0){
goto L143;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L143;
}
si0=l1;
f15271(i,si0);
L143:;
si0=l3;
si1=40U;
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
si1=32U;
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
L2:;
si0=l0;
si1=20U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
f1874(i,si0);
si0=l3;
f15271(i,si0);
L1:;
L0:;
}

void f1878(rustpythonInstance*i,U32 l0) {
U32 l1=0;
U32 l2=0;
U32 si0,si1;
si0=l0;
f1880(i,si0);
si0=l0;
si1=12U;
si0+=si1;
f1880(i,si0);
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
f15271(i,si0);
L2:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+28U);
l2=si0;
si0=!(si0);
if(si0){
goto L3;
}
si0=l2;
f1874(i,si0);
si0=l2;
f15271(i,si0);
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
f15271(i,si0);
L4:;
si0=l1;
f15271(i,si0);
L1:;
si0=l0;
si1=24U;
si0+=si1;
f1880(i,si0);
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
f15271(i,si0);
L6:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+28U);
l2=si0;
si0=!(si0);
if(si0){
goto L7;
}
si0=l2;
f1874(i,si0);
si0=l2;
f15271(i,si0);
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
f15271(i,si0);
L8:;
si0=l1;
f15271(i,si0);
L5:;
si0=l0;
f15271(i,si0);
L0:;
}

void f1879(rustpythonInstance*i,U32 l0) {
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
f1879(i,si0);
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
f15271(i,si0);
goto L0;
L8:;
si0=l0;
si1=20U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
f1874(i,si0);
si0=l3;
f15271(i,si0);
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
f15271(i,si0);
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
f15271(i,si0);
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
f15271(i,si0);
goto L0;
L12:;
si0=l0;
si1=12U;
si0+=si1;
l3=si0;
f1876(i,si0);
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
f15271(i,si0);
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
f1879(i,si0);
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
f15271(i,si0);
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
f1874(i,si0);
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
f15271(i,si0);
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
f1879(i,si0);
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
f15271(i,si0);
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
f15271(i,si0);
goto L0;
L4:;
si0=l0;
si1=20U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
f1874(i,si0);
si0=l3;
f15271(i,si0);
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
f1879(i,si0);
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
f15271(i,si0);
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
f15271(i,si0);
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
f15271(i,si0);
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
f1879(i,si0);
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
f15271(i,si0);
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
f15271(i,si0);
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
f1879(i,si0);
si0=l3;
f15271(i,si0);
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
f15271(i,si0);
L1:;
L0:;
}

void f1880(rustpythonInstance*i,U32 l0) {
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
f15271(i,si0);
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
f1874(i,si0);
si0=l4;
f15271(i,si0);
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
f15271(i,si0);
L5:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
si0=!(si0);
if(si0){
goto L6;
}
si0=l4;
f1874(i,si0);
si0=l4;
f15271(i,si0);
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

void f1881(rustpythonInstance*i,U32 l0) {
U32 l1=0;
U32 l2=0;
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 si0,si1,si2,si3;
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
si1=12U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L2;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+8U);
f15271(i,si0);
L2:;
si0=l0;
si1=20U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L3;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+16U);
f15271(i,si0);
L3:;
si0=l0;
si1=32U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L4;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+28U);
f15271(i,si0);
L4:;
si0=l0;
si1=100U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si0=!(si0);
if(si0){
goto L5;
}
si0=l0;
si1=104U;
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
si1=44U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si0=!(si0);
if(si0){
goto L6;
}
si0=l0;
si1=40U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=0U;
l4=si0;
L7:;
{
si0=l4;
si1=24U;
si0*=si1;
l1=si0;
si0=l4;
si1=1U;
si0+=si1;
l4=si0;
si0=l3;
si1=l1;
si0+=si1;
l5=si0;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si1=-2U;
si0+=si1;
l1=si0;
si1=1U;
si2=l1;
si3=10U;
si2=si2 < si3;
si0=si2?si0:si1;
switch(si0){
case 0:
goto L13;
case 1:
goto L12;
case 2:
goto L8;
case 3:
goto L8;
case 4:
goto L8;
case 5:
goto L11;
case 6:
goto L10;
case 7:
goto L9;
default:
goto L8;
}
L13:;
si0=l5;
si1=12U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si0=!(si0);
if(si0){
goto L14;
}
si0=l5;
si0=i32_load(&i->m0,(U64)si0+4U);
l1=si0;
L15:;
{
si0=l1;
f1882(i,si0);
si0=l1;
si1=24U;
si0+=si1;
l1=si0;
si0=l6;
si1=-1U;
si0+=si1;
l6=si0;
if(si0){
goto L15;
}
}
L14:;
si0=l5;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L8;
}
si0=l5;
si0=i32_load(&i->m0,(U64)si0+4U);
f15271(i,si0);
goto L8;
L12:;
si0=l6;
si0=!(si0);
if(si0){
goto L8;
}
si0=l5;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L8;
}
si0=l5;
si0=i32_load(&i->m0,(U64)si0+4U);
f15271(i,si0);
goto L8;
L11:;
si0=l5;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L8;
}
si0=l5;
si0=i32_load(&i->m0,(U64)si0+4U);
f15271(i,si0);
goto L8;
L10:;
si0=l5;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L8;
}
si0=l5;
si0=i32_load(&i->m0,(U64)si0+4U);
f15271(i,si0);
goto L8;
L9:;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+4U);
l1=si0;
f1881(i,si0);
si0=l1;
f15271(i,si0);
L8:;
si0=l4;
si1=l2;
si0=si0 != si1;
if(si0){
goto L7;
}
}
si0=l3;
f15271(i,si0);
L6:;
si0=l0;
si1=52U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si0=!(si0);
if(si0){
goto L16;
}
si0=l0;
si1=48U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
l1=si0;
L17:;
{
si0=l1;
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L18;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
f15271(i,si0);
L18:;
si0=l1;
si1=12U;
si0+=si1;
l1=si0;
si0=l6;
si1=-1U;
si0+=si1;
l6=si0;
if(si0){
goto L17;
}
}
si0=l4;
f15271(i,si0);
L16:;
si0=l0;
si1=60U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si0=!(si0);
if(si0){
goto L19;
}
si0=l0;
si1=56U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
l1=si0;
L20:;
{
si0=l1;
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L21;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
f15271(i,si0);
L21:;
si0=l1;
si1=12U;
si0+=si1;
l1=si0;
si0=l6;
si1=-1U;
si0+=si1;
l6=si0;
if(si0){
goto L20;
}
}
si0=l4;
f15271(i,si0);
L19:;
si0=l0;
si1=68U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si0=!(si0);
if(si0){
goto L22;
}
si0=l0;
si1=64U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
l1=si0;
L23:;
{
si0=l1;
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L24;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
f15271(i,si0);
L24:;
si0=l1;
si1=12U;
si0+=si1;
l1=si0;
si0=l6;
si1=-1U;
si0+=si1;
l6=si0;
if(si0){
goto L23;
}
}
si0=l4;
f15271(i,si0);
L22:;
si0=l0;
si1=76U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si0=!(si0);
if(si0){
goto L25;
}
si0=l0;
si1=72U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
l1=si0;
L26:;
{
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
l1=si0;
si0=l6;
si1=-1U;
si0+=si1;
l6=si0;
if(si0){
goto L26;
}
}
si0=l4;
f15271(i,si0);
L25:;
L0:;
}

void f1882(rustpythonInstance*i,U32 l0) {
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
f1882(i,si0);
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
f15271(i,si0);
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
f15271(i,si0);
goto L0;
L2:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+4U);
l2=si0;
f1881(i,si0);
si0=l2;
f15271(i,si0);
goto L0;
L1:;
L0:;
}

void f1883(rustpythonInstance*i,U32 l0,U32 l1) {
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
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
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
f15271(i,si0);
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
si0=l3;
si1=l2;
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
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
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
f15271(i,si0);
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

void f1884(rustpythonInstance*i,U32 l0,U32 l1) {
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
si1=-1431655761U;
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
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=l1;
si0=f15269(i,si0);
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
f15271(i,si0);
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
f15271(i,si0);
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

void f1885(rustpythonInstance*i,U32 l0,U32 l1) {
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
si1=-1431655745U;
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
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=l1;
si0=f15269(i,si0);
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
si0=i32_load(&i->m0,(U64)si0);
l12=si0;
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
si1=l12;
i32_store(&i->m0,(U64)si0,si1);
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
f2059(i,si0);
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
f15271(i,si0);
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

U32 f1886(rustpythonInstance*i,U32 l0,U32 l1) {
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
si1=88U;
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
si2=1300192U;
f717(i,si0,si1,si2);
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

U32 f1887(rustpythonInstance*i,U32 l0,U32 l1) {
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
si1=12U;
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
si2=1300128U;
f717(i,si0,si1,si2);
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

U32 f1888(rustpythonInstance*i,U32 l0,U32 l1) {
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
si1=56U;
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
si2=1300208U;
f717(i,si0,si1,si2);
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

U32 f1889(rustpythonInstance*i,U32 l0,U32 l1) {
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
si1=6U;
si0<<=(si1&31);
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
si2=1300256U;
f717(i,si0,si1,si2);
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

U32 f1890(rustpythonInstance*i,U32 l0,U32 l1) {
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
si1=44U;
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
si2=1300224U;
f717(i,si0,si1,si2);
si0=l0;
si1=44U;
si0+=si1;
l0=si0;
si0=l1;
si1=-44U;
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

U32 f1891(rustpythonInstance*i,U32 l0,U32 l1) {
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
si1=6U;
si0<<=(si1&31);
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
si2=1300176U;
f717(i,si0,si1,si2);
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

U32 f1892(rustpythonInstance*i,U32 l0,U32 l1) {
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
si1=56U;
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
si2=1300304U;
f717(i,si0,si1,si2);
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

U32 f1893(rustpythonInstance*i,U32 l0,U32 l1) {
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
si1=40U;
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
si2=1300288U;
f717(i,si0,si1,si2);
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

U32 f1894(rustpythonInstance*i,U32 l0,U32 l1) {
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
si1=80U;
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
si2=1300320U;
f717(i,si0,si1,si2);
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

U32 f1895(rustpythonInstance*i,U32 l0,U32 l1) {
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
si1=48U;
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
si2=1300160U;
f717(i,si0,si1,si2);
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

U32 f1896(rustpythonInstance*i,U32 l0,U32 l1) {
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
si2=1300144U;
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

void f1897(rustpythonInstance*i,U32 l0) {
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
f15271(i,si0);
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

void f1898(rustpythonInstance*i,U32 l0) {
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
f15271(i,si0);
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

void f1899(rustpythonInstance*i,U32 l0) {
U32 l1=0;
U32 l2=0;
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
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
si2=384U;
si1*=si2;
si0+=si1;
l4=si0;
si1=340U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L3;
}
si0=l4;
si1=336U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
f15271(i,si0);
L3:;
si0=l4;
si1=352U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L4;
}
si0=l4;
si1=348U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
f15271(i,si0);
L4:;
si0=l4;
si1=360U;
si0+=si1;
l5=si0;
si0=l4;
si1=368U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si0=!(si0);
if(si0){
goto L5;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0+360U);
l0=si0;
L6:;
{
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
si1=16U;
si0+=si1;
l0=si0;
si0=l6;
si1=-1U;
si0+=si1;
l6=si0;
if(si0){
goto L6;
}
}
L5:;
si0=l5;
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L8;
}
si0=l5;
si0=i32_load(&i->m0,(U64)si0);
f15271(i,si0);
L8:;
si0=l4;
si1=36U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l0=si0;
si0=!(si0);
if(si0){
goto L9;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0+32U);
si1=l0;
si2=2U;
si1<<=(si2&31);
si2=11U;
si1+=si2;
si2=-8U;
si1&=si2;
si0-=si1;
f15271(i,si0);
L9:;
si0=l4;
si1=56U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si0=!(si0);
if(si0){
goto L10;
}
si0=l4;
si1=48U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l0=si0;
L11:;
{
si0=l0;
f1882(i,si0);
si0=l0;
si1=32U;
si0+=si1;
l0=si0;
si0=l6;
si1=-1U;
si0+=si1;
l6=si0;
if(si0){
goto L11;
}
}
L10:;
si0=l4;
si1=52U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L12;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0+48U);
f15271(i,si0);
L12:;
si0=l4;
si1=100U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l0=si0;
si0=!(si0);
if(si0){
goto L13;
}
si0=l4;
si1=96U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=l0;
si2=2U;
si1<<=(si2&31);
si2=11U;
si1+=si2;
si2=-8U;
si1&=si2;
si0-=si1;
f15271(i,si0);
L13:;
si0=l4;
si1=112U;
si0+=si1;
l5=si0;
si0=l4;
si1=120U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si0=!(si0);
if(si0){
goto L14;
}
si0=l5;
si0=i32_load(&i->m0,(U64)si0);
l0=si0;
L15:;
{
si0=l0;
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L16;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
f15271(i,si0);
L16:;
si0=l0;
si1=16U;
si0+=si1;
l0=si0;
si0=l6;
si1=-1U;
si0+=si1;
l6=si0;
if(si0){
goto L15;
}
}
L14:;
si0=l5;
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L17;
}
si0=l5;
si0=i32_load(&i->m0,(U64)si0);
f15271(i,si0);
L17:;
si0=l4;
si1=164U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l0=si0;
si0=!(si0);
if(si0){
goto L18;
}
si0=l4;
si1=160U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=l0;
si2=2U;
si1<<=(si2&31);
si2=11U;
si1+=si2;
si2=-8U;
si1&=si2;
si0-=si1;
f15271(i,si0);
L18:;
si0=l4;
si1=176U;
si0+=si1;
l5=si0;
si0=l4;
si1=184U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si0=!(si0);
if(si0){
goto L19;
}
si0=l5;
si0=i32_load(&i->m0,(U64)si0);
l0=si0;
L20:;
{
si0=l0;
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L21;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
f15271(i,si0);
L21:;
si0=l0;
si1=16U;
si0+=si1;
l0=si0;
si0=l6;
si1=-1U;
si0+=si1;
l6=si0;
if(si0){
goto L20;
}
}
L19:;
si0=l5;
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L22;
}
si0=l5;
si0=i32_load(&i->m0,(U64)si0);
f15271(i,si0);
L22:;
si0=l4;
si1=228U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l0=si0;
si0=!(si0);
if(si0){
goto L23;
}
si0=l4;
si1=224U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=l0;
si2=2U;
si1<<=(si2&31);
si2=11U;
si1+=si2;
si2=-8U;
si1&=si2;
si0-=si1;
f15271(i,si0);
L23:;
si0=l4;
si1=240U;
si0+=si1;
l5=si0;
si0=l4;
si1=248U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si0=!(si0);
if(si0){
goto L24;
}
si0=l5;
si0=i32_load(&i->m0,(U64)si0);
l0=si0;
L25:;
{
si0=l0;
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L26;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
f15271(i,si0);
L26:;
si0=l0;
si1=16U;
si0+=si1;
l0=si0;
si0=l6;
si1=-1U;
si0+=si1;
l6=si0;
if(si0){
goto L25;
}
}
L24:;
si0=l5;
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L27;
}
si0=l5;
si0=i32_load(&i->m0,(U64)si0);
f15271(i,si0);
L27:;
si0=l4;
si1=292U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l0=si0;
si0=!(si0);
if(si0){
goto L28;
}
si0=l4;
si1=288U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=l0;
si2=2U;
si1<<=(si2&31);
si2=11U;
si1+=si2;
si2=-8U;
si1&=si2;
si0-=si1;
f15271(i,si0);
L28:;
si0=l4;
si1=304U;
si0+=si1;
l5=si0;
si0=l4;
si1=312U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si0=!(si0);
if(si0){
goto L29;
}
si0=l5;
si0=i32_load(&i->m0,(U64)si0);
l0=si0;
L30:;
{
si0=l0;
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L31;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
f15271(i,si0);
L31:;
si0=l0;
si1=16U;
si0+=si1;
l0=si0;
si0=l6;
si1=-1U;
si0+=si1;
l6=si0;
if(si0){
goto L30;
}
}
L29:;
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
goto L32;
}
si0=l5;
si0=i32_load(&i->m0,(U64)si0);
f15271(i,si0);
L32:;
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

void f1900(rustpythonInstance*i,U32 l0) {
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
si2=96U;
si1*=si2;
si0+=si1;
l4=si0;
si1=72U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L3;
}
si0=l4;
si1=68U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
f15271(i,si0);
L3:;
si0=l4;
si1=36U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l0=si0;
si0=!(si0);
if(si0){
goto L4;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0+32U);
si1=l0;
si2=2U;
si1<<=(si2&31);
si2=11U;
si1+=si2;
si2=-8U;
si1&=si2;
si0-=si1;
f15271(i,si0);
L4:;
si0=l4;
si1=56U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si0=!(si0);
if(si0){
goto L5;
}
si0=l4;
si1=48U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=16U;
si0+=si1;
l0=si0;
L6:;
{
si0=l0;
si1=-8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L7;
}
si0=l0;
si1=-12U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
f15271(i,si0);
L7:;
si0=l0;
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L8;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
f15271(i,si0);
L8:;
si0=l0;
si1=32U;
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
si0=l4;
si1=52U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L9;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0+48U);
f15271(i,si0);
L9:;
si0=l3;
si1=1U;
si0+=si1;
l3=si0;
si0=l4;
si1=80U;
si0+=si1;
l0=si0;
f1900(i,si0);
si0=l4;
si1=84U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L10;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
f15271(i,si0);
L10:;
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

void f1901(rustpythonInstance*i,U32 l0) {
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
si1=44U;
si0+=si1;
l0=si0;
L2:;
{
si0=l0;
si1=-24U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L3;
}
si0=l0;
si1=-28U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
f15271(i,si0);
L3:;
si0=l0;
si1=-16U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si0=!(si0);
if(si0){
goto L4;
}
si0=l2;
f1874(i,si0);
si0=l2;
f15271(i,si0);
L4:;
si0=l0;
si1=-12U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si0=!(si0);
if(si0){
goto L5;
}
si0=l0;
si1=-8U;
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
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si0=!(si0);
if(si0){
goto L6;
}
si0=l2;
f1874(i,si0);
si0=l2;
f15271(i,si0);
L6:;
si0=l0;
si1=48U;
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

void f1902(rustpythonInstance*i,U32 l0) {
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
si2=44U;
si1*=si2;
si0+=si1;
l4=si0;
si0=i32_load(&i->m0,(U64)si0+28U);
l0=si0;
si0=!(si0);
if(si0){
goto L3;
}
si0=l0;
f1874(i,si0);
si0=l0;
f15271(i,si0);
L3:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+32U);
l0=si0;
si0=!(si0);
if(si0){
goto L4;
}
si0=l4;
si1=36U;
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
si1=24U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si0=!(si0);
if(si0){
goto L5;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0+16U);
l0=si0;
L6:;
{
si0=l0;
f1877(i,si0);
si0=l0;
si1=80U;
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
si1=20U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L7;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0+16U);
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

void f1903(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U64 l8=0;
U32 si0,si1,si2,si3;
U64 sj1;
si0=i->g0;
si1=48U;
si0-=si1;
l2=si0;
i->g0=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+20U);
l3=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
if(si0){
goto L5;
}
si0=l3;
si0=!(si0);
if(si0){
goto L3;
}
si0=l1;
si1=28U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=l1;
si2=24U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
si0-=si1;
l5=si0;
goto L4;
L5:;
si0=l3;
si0=!(si0);
if(si0){
goto L6;
}
si0=l1;
si1=16U;
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
si0=l1;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=l1;
si1=i32_load(&i->m0,(U64)si1+4U);
si0-=si1;
l7=si0;
si1=l6;
si2=l7;
si3=l6;
si2=si2 < si3;
si0=si2?si0:si1;
l6=si0;
L7:;
si0=l6;
si1=l1;
si2=28U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
si2=l1;
si2=i32_load(&i->m0,(U64)si2+24U);
si1-=si2;
si0+=si1;
l5=si0;
si1=l6;
si0=si0 >= si1;
if(si0){
goto L4;
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
si1=1293444U;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l2;
si1=1293452U;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l2;
si1=8U;
si0+=si1;
si1=1293528U;
f683(i,si0,si1);
UNREACHABLE;
L6:;
si0=l1;
si1=16U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si0=!(si0);
if(si0){
goto L3;
}
si0=l1;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=l1;
si1=i32_load(&i->m0,(U64)si1+4U);
si0-=si1;
l7=si0;
si1=l6;
si2=l7;
si3=l6;
si2=si2 < si3;
si0=si2?si0:si1;
l5=si0;
L4:;
si0=l0;
si1=8U;
si0+=si1;
l7=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+4U);
si1=l0;
si1=i32_load(&i->m0,(U64)si1+8U);
l6=si1;
si0-=si1;
si1=l5;
si0=si0 >= si1;
if(si0){
goto L1;
}
si0=l0;
si1=l6;
si2=l5;
f1865(i,si0,si1,si2);
goto L2;
L3:;
si0=l0;
si1=8U;
si0+=si1;
l7=si0;
L2:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+8U);
l6=si0;
L1:;
si0=l2;
si1=l0;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0+40U,si1);
si0=l2;
si1=l6;
i32_store(&i->m0,(U64)si0+36U,si1);
si0=l2;
si1=l7;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l4;
si0=!(si0);
if(si0){
goto L9;
}
si0=l2;
si1=16U;
si0+=si1;
si1=l1;
si2=12U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=l1;
sj1=i64_load(&i->m0,(U64)si1+4U);
i64_store(&i->m0,(U64)si0+8U,sj1);
si0=l2;
si1=8U;
si0+=si1;
si1=l2;
si2=32U;
si1+=si2;
f2057(i,si0,si1);
L9:;
si0=l3;
si0=!(si0);
if(si0){
goto L11;
}
si0=l2;
si1=8U;
si0+=si1;
si1=8U;
si0+=si1;
l6=si0;
si1=l1;
si2=24U;
si1+=si2;
l1=si1;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=l1;
sj1=i64_load(&i->m0,(U64)si1);
l8=sj1;
i64_store(&i->m0,(U64)si0+8U,sj1);
si0=l2;
si0=i32_load(&i->m0,(U64)si0+36U);
l0=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+32U);
l7=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+12U);
l3=si0;
sj1=l8;
si1=(U32)(sj1);
l1=si1;
si0=si0 == si1;
if(si0){
goto L12;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0+40U);
l5=si0;
si0=l1;
si1=1U;
si0+=si1;
l4=si0;
si0=l3;
si1=l1;
si0-=si1;
si1=1U;
si0&=si1;
si0=!(si0);
if(si0){
goto L13;
}
si0=l5;
si1=l0;
si2=1U;
si1<<=(si2&31);
si0+=si1;
si1=l6;
si2=l1;
si3=1U;
si2<<=(si3&31);
si1+=si2;
si1=i32_load16_u(&i->m0,(U64)si1);
i32_store16(&i->m0,(U64)si0,si1);
si0=l0;
si1=1U;
si0+=si1;
l0=si0;
si0=l4;
l1=si0;
L13:;
si0=l3;
si1=l4;
si0=si0 == si1;
if(si0){
goto L12;
}
si0=l3;
si1=l1;
si0-=si1;
l3=si0;
si0=l5;
si1=l0;
si2=1U;
si1<<=(si2&31);
si0+=si1;
l6=si0;
si0=l2;
si1=8U;
si0+=si1;
si1=l1;
si2=1U;
si1<<=(si2&31);
si0+=si1;
l4=si0;
si0=0U;
l1=si0;
L14:;
{
si0=l6;
si1=l1;
si0+=si1;
si1=l4;
si2=l1;
si1+=si2;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
si1=4U;
si0+=si1;
l1=si0;
si0=l0;
si1=2U;
si0+=si1;
l0=si0;
si0=l3;
si1=-2U;
si0+=si1;
l3=si0;
if(si0){
goto L14;
}
}
L12:;
si0=l7;
si1=l0;
i32_store(&i->m0,(U64)si0,si1);
goto L10;
L11:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+32U);
si1=l2;
si1=i32_load(&i->m0,(U64)si1+36U);
i32_store(&i->m0,(U64)si0,si1);
L10:;
si0=l2;
si1=48U;
si0+=si1;
i->g0=si0;
L0:;
}

void f1904(rustpythonInstance*i,U32 l0,U32 l1) {
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
U32 l13=0;
U32 l14=0;
U32 l15=0;
U32 l16=0;
U32 si0,si1,si2,si3;
U64 sj1,sj2,sj3;
si0=i->g0;
si1=64U;
si0-=si1;
l2=si0;
i->g0=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si1=l1;
si2=4U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
l4=si1;
si0=si0 != si1;
if(si0){
goto L3;
}
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l0;
sj1=4ULL;
i64_store(&i->m0,(U64)si0,sj1);
goto L2;
L3:;
si0=l1;
si1=l3;
si2=16U;
si1+=si2;
l5=si1;
i32_store(&i->m0,(U64)si0,si1);
si0=-1U;
l6=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+8U);
l7=si0;
si1=172U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L4;
}
si0=l3;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l8=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
l9=si0;
si0=l2;
si1=l7;
si2=152U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+40U,sj1);
si0=l2;
si1=l7;
si2=144U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+32U,sj1);
si0=l2;
si1=l7;
si2=136U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+56U,sj1);
si0=l2;
si1=l7;
sj1=i64_load(&i->m0,(U64)si1+128U);
i64_store(&i->m0,(U64)si0+48U,sj1);
si0=l2;
si1=32U;
si0+=si1;
si1=l9;
si2=l8;
f2053(i,si0,si1,si2);
si0=l2;
si1=8U;
si0+=si1;
si1=l7;
si2=160U;
si1+=si2;
si2=l2;
sj2=i64_load(&i->m0,(U64)si2+48U);
l10=sj2;
sj3=6364136223846793005ULL;
sj2*=sj3;
si3=l2;
sj3=i64_load(&i->m0,(U64)si3+56U);
sj2^=sj3;
sj3=l10;
sj2=I64_ROTL(sj2,sj3);
si2=(U32)(sj2);
si3=l3;
f2043(i,si0,si1,si2,si3);
si0=l2;
si0=i32_load(&i->m0,(U64)si0+8U);
si1=1U;
si0=si0 != si1;
if(si0){
goto L4;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0+12U);
l8=si0;
si1=l1;
si2=12U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
si1=i32_load(&i->m0,(U64)si1);
si0=si0 >= si1;
if(si0){
goto L4;
}
si0=l1;
si1=16U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=1U;
i32_store8(&i->m0,(U64)si0,si1);
si0=l8;
l6=si0;
L4:;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=l4;
si1=l5;
si0-=si1;
si1=4U;
si0>>=(si1&31);
l8=si0;
si1=3U;
si2=l8;
si3=3U;
si2=si2 > si3;
si0=si2?si0:si1;
si1=1U;
si0+=si1;
l8=si0;
si1=2U;
si0<<=(si1&31);
l9=si0;
si0=f15269(i,si0);
l11=si0;
si0=!(si0);
if(si0){
goto L1;
}
si0=l11;
si1=l6;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=1U;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l2;
si1=l8;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l2;
si1=l11;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l5;
si1=l4;
si0=si0 == si1;
if(si0){
goto L5;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+16U);
l12=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+12U);
l13=si0;
si0=l7;
si1=160U;
si0+=si1;
l14=si0;
si0=l4;
si1=l3;
si0-=si1;
si1=-32U;
si0+=si1;
l8=si0;
si0=l7;
si1=152U;
si0+=si1;
l15=si0;
si0=4U;
l3=si0;
si0=1U;
l1=si0;
L6:;
{
si0=-1U;
l6=si0;
si0=l7;
si0=i32_load(&i->m0,(U64)si0+172U);
si0=!(si0);
if(si0){
goto L7;
}
si0=l5;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l9=si0;
si0=l5;
si0=i32_load(&i->m0,(U64)si0);
l16=si0;
si0=l2;
si1=l15;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+40U,sj1);
si0=l2;
si1=l7;
sj1=i64_load(&i->m0,(U64)si1+144U);
i64_store(&i->m0,(U64)si0+32U,sj1);
si0=l2;
si1=l7;
sj1=i64_load(&i->m0,(U64)si1+136U);
i64_store(&i->m0,(U64)si0+56U,sj1);
si0=l2;
si1=l7;
sj1=i64_load(&i->m0,(U64)si1+128U);
i64_store(&i->m0,(U64)si0+48U,sj1);
si0=l2;
si1=32U;
si0+=si1;
si1=l16;
si2=l9;
f2053(i,si0,si1,si2);
si0=l2;
si1=l14;
si2=l2;
sj2=i64_load(&i->m0,(U64)si2+48U);
l10=sj2;
sj3=6364136223846793005ULL;
sj2*=sj3;
si3=l2;
sj3=i64_load(&i->m0,(U64)si3+56U);
sj2^=sj3;
sj3=l10;
sj2=I64_ROTL(sj2,sj3);
si2=(U32)(sj2);
si3=l5;
f2043(i,si0,si1,si2,si3);
si0=l2;
si0=i32_load(&i->m0,(U64)si0);
si1=1U;
si0=si0 != si1;
if(si0){
goto L7;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0+4U);
l9=si0;
si1=l13;
si1=i32_load(&i->m0,(U64)si1);
si0=si0 >= si1;
if(si0){
goto L7;
}
si0=l12;
si1=1U;
i32_store8(&i->m0,(U64)si0,si1);
si0=l9;
l6=si0;
L7:;
si0=l5;
si1=16U;
si0+=si1;
l5=si0;
si0=l1;
si1=l2;
si1=i32_load(&i->m0,(U64)si1+20U);
si0=si0 != si1;
if(si0){
goto L8;
}
si0=l2;
si1=16U;
si0+=si1;
si1=l1;
si2=l8;
si3=4U;
si2>>=(si3&31);
si3=1U;
si2+=si3;
f1862(i,si0,si1,si2);
si0=l2;
si0=i32_load(&i->m0,(U64)si0+16U);
l11=si0;
L8:;
si0=l11;
si1=l3;
si0+=si1;
si1=l6;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=l1;
si2=1U;
si1+=si2;
l1=si1;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l8;
si1=-16U;
si0+=si1;
l8=si0;
si0=l3;
si1=4U;
si0+=si1;
l3=si0;
si0=l5;
si1=l4;
si0=si0 != si1;
if(si0){
goto L6;
}
}
L5:;
si0=l0;
si1=l2;
sj1=i64_load(&i->m0,(U64)si1+16U);
i64_store(&i->m0,(U64)si0,sj1);
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
L2:;
si0=l2;
si1=64U;
si0+=si1;
i->g0=si0;
goto L0;
L1:;
si0=4U;
si1=l9;
f52(i,si0,si1);
UNREACHABLE;
L0:;
}

void f1905(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U64 l8=0;
U32 si0,si1,si2,si3,si4;
U64 sj1;
si0=i->g0;
si1=80U;
si0-=si1;
l3=si0;
i->g0=si0;
si0=l2;
si1=l1;
si0-=si1;
l4=si0;
si1=40U;
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
si0=8U;
l6=si0;
goto L4;
L5:;
si0=l4;
si1=-715827857U;
si0=si0 > si1;
if(si0){
goto L3;
}
si0=l5;
si1=24U;
si0*=si1;
l2=si0;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L3;
}
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=l2;
si0=f15269(i,si0);
l6=si0;
si0=!(si0);
if(si0){
goto L2;
}
si0=l1;
si1=24U;
si0+=si1;
l2=si0;
si0=l6;
l1=si0;
si0=l5;
l4=si0;
L6:;
{
si0=l3;
si1=0U;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l3;
sj1=1ULL;
i64_store(&i->m0,(U64)si0+24U,sj1);
si0=l3;
si1=3U;
i32_store8(&i->m0,(U64)si0+72U,si1);
si0=l3;
si1=32U;
i32_store(&i->m0,(U64)si0+56U,si1);
si0=l3;
si1=0U;
i32_store(&i->m0,(U64)si0+68U,si1);
si0=l3;
si1=1301252U;
i32_store(&i->m0,(U64)si0+64U,si1);
si0=l3;
si1=0U;
i32_store(&i->m0,(U64)si0+48U,si1);
si0=l3;
si1=0U;
i32_store(&i->m0,(U64)si0+40U,si1);
si0=l2;
si1=-8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
si0=l3;
si1=l3;
si2=24U;
si1+=si2;
i32_store(&i->m0,(U64)si0+60U,si1);
si0=l3;
si1=40U;
si0+=si1;
si1=l7;
si2=l2;
si2=i32_load(&i->m0,(U64)si2);
si0=f713(i,si0,si1,si2);
if(si0){
goto L1;
}
si0=l3;
si1=8U;
si0+=si1;
si1=8U;
si0+=si1;
si1=l3;
si2=24U;
si1+=si2;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
l7=si1;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=l3;
sj1=i64_load(&i->m0,(U64)si1+24U);
l8=sj1;
i64_store(&i->m0,(U64)si0+8U,sj1);
si0=l1;
si1=7U;
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
si1=4U;
si0+=si1;
sj1=l8;
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si1=12U;
si0+=si1;
si1=l7;
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
si1=24U;
si0+=si1;
l1=si0;
si0=l2;
si1=40U;
si0+=si1;
l2=si0;
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
si1=80U;
si0+=si1;
i->g0=si0;
goto L0;
L3:;
f53(i);
UNREACHABLE;
L2:;
si0=8U;
si1=l2;
f52(i,si0,si1);
UNREACHABLE;
L1:;
si0=1301276U;
si1=55U;
si2=l3;
si3=8U;
si2+=si3;
si3=1301332U;
si4=1301424U;
f712(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L0:;
}

void f1906(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
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
si1=16U;
si0-=si1;
l2=si0;
i->g0=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=!(si0);
if(si0){
goto L4;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
l4=si0;
L6:;
{
si0=l3;
si1=l4;
si0=si0 == si1;
if(si0){
goto L5;
}
si0=l1;
si1=l3;
si2=48U;
si1+=si2;
l5=si1;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=44U;
si0+=si1;
l6=si0;
si0=l5;
l3=si0;
si0=l6;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si0=!(si0);
if(si0){
goto L6;
}
goto L3;
}
L5:;
si0=l1;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
L4:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+8U);
l5=si0;
si0=!(si0);
if(si0){
goto L2;
}
si0=l1;
si1=12U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
L7:;
{
si0=l5;
si1=l4;
si0=si0 == si1;
if(si0){
goto L2;
}
si0=l1;
si1=l5;
si2=48U;
si1+=si2;
l3=si1;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l5;
si1=44U;
si0+=si1;
l6=si0;
si0=l3;
l5=si0;
si0=l6;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si0=!(si0);
if(si0){
goto L7;
}
}
si0=0U;
l5=si0;
L3:;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=16U;
si0=f15269(i,si0);
l7=si0;
si0=!(si0);
if(si0){
goto L8;
}
si0=l7;
si1=l6;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
sj1=4294967300ULL;
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l2;
si1=l7;
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+12U);
l6=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+8U);
l3=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
l8=si0;
si0=1U;
l9=si0;
L9:;
{
si0=l5;
si0=!(si0);
if(si0){
goto L13;
}
L14:;
{
si0=l5;
si1=l8;
si0=si0 == si1;
if(si0){
goto L13;
}
si0=l5;
si1=44U;
si0+=si1;
l1=si0;
si0=l5;
si1=48U;
si0+=si1;
l4=si0;
l5=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si0=!(si0);
if(si0){
goto L14;
}
}
si0=l4;
l5=si0;
goto L12;
L13:;
si0=l3;
si0=!(si0);
if(si0){
goto L11;
}
L15:;
{
si0=l3;
si1=l6;
si0=si0 == si1;
if(si0){
goto L11;
}
si0=l3;
si1=44U;
si0+=si1;
l5=si0;
si0=l3;
si1=48U;
si0+=si1;
l4=si0;
l3=si0;
si0=l5;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si0=!(si0);
if(si0){
goto L15;
}
}
si0=0U;
l5=si0;
si0=l4;
l3=si0;
L12:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+4U);
si1=l9;
si0=si0 != si1;
if(si0){
goto L10;
}
si0=l2;
si1=l9;
si2=1U;
f1862(i,si0,si1,si2);
si0=l2;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
goto L10;
L11:;
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
L10:;
si0=l7;
si1=l9;
si2=2U;
si1<<=(si2&31);
si0+=si1;
si1=l1;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=l9;
si2=1U;
si1+=si2;
l9=si1;
i32_store(&i->m0,(U64)si0+8U,si1);
goto L9;
}
L8:;
si0=4U;
si1=16U;
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
si0=l2;
si1=16U;
si0+=si1;
i->g0=si0;
L0:;
}

U32 f1907(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U32 l4=0;
U32 si0,si1,si2,si3;
U64 sj1;
si0=i->g0;
si1=32U;
si0-=si1;
l3=si0;
i->g0=si0;
si0=1U;
l4=si0;
si0=l0;
si1=l2;
si1=i32_load(&i->m0,(U64)si1+16U);
si2=l2;
si3=24U;
si2+=si3;
si2=i32_load(&i->m0,(U64)si2);
si3=l1;
si3=i32_load(&i->m0,(U64)si3+12U);
si0=TF(i->t0,si3,U32 (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
if(si0){
goto L1;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0+28U);
l2=si0;
if(si0){
goto L2;
}
si0=0U;
l4=si0;
goto L1;
L2:;
si0=l3;
si1=558U;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l3;
si1=l2;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
sj1=1ULL;
i64_store(&i->m0,(U64)si0+20U,sj1);
si0=l3;
si1=1U;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l3;
si1=1293548U;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l3;
si1=l3;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l0;
si1=l1;
si2=l3;
si3=8U;
si2+=si3;
si0=f690(i,si0,si1,si2);
l4=si0;
L1:;
si0=l3;
si1=32U;
si0+=si1;
i->g0=si0;
si0=l4;
L0:;
return si0;
}

U32 f1908(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 si0,si1,si2,si3,si4;
si0=l2;
if(si0){
goto L1;
}
si0=0U;
goto L0;
L1:;
si0=l1;
si1=l2;
si2=7U;
si1<<=(si2&31);
si0+=si1;
l3=si0;
L3:;
{
si0=1U;
l4=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=1293561U;
si2=1293556U;
si3=l1;
si3=i32_load8_u(&i->m0,(U64)si3+124U);
l2=si3;
si1=si3?si1:si2;
si2=11U;
si3=5U;
si4=l2;
si2=si4?si2:si3;
si3=l0;
si3=i32_load(&i->m0,(U64)si3+24U);
si3=i32_load(&i->m0,(U64)si3+12U);
si0=TF(i->t0,si3,U32 (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
if(si0){
goto L2;
}
si0=l0;
si1=l1;
si2=0U;
si0=f1909(i,si0,si1,si2);
if(si0){
goto L2;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=1293572U;
si2=4U;
si3=l0;
si3=i32_load(&i->m0,(U64)si3+24U);
si3=i32_load(&i->m0,(U64)si3+12U);
si0=TF(i->t0,si3,U32 (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
if(si0){
goto L2;
}
si0=l0;
si1=l1;
si2=56U;
si1+=si2;
si2=2U;
si0=f1909(i,si0,si1,si2);
if(si0){
goto L2;
}
si0=l1;
si1=128U;
si0+=si1;
l5=si0;
si0=l1;
si1=120U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=56U;
si0*=si1;
l2=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+112U);
l1=si0;
L5:;
{
si0=l2;
si0=!(si0);
if(si0){
goto L4;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=1293576U;
si2=4U;
si3=l0;
si3=i32_load(&i->m0,(U64)si3+24U);
si3=i32_load(&i->m0,(U64)si3+12U);
si0=TF(i->t0,si3,U32 (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
if(si0){
goto L2;
}
si0=l2;
si1=-56U;
si0+=si1;
l2=si0;
si0=l0;
si1=l1;
si2=2U;
si0=f1909(i,si0,si1,si2);
l6=si0;
si0=l1;
si1=56U;
si0+=si1;
l1=si0;
si0=l6;
si0=!(si0);
if(si0){
goto L5;
}
goto L2;
}
L4:;
si0=0U;
l4=si0;
si0=l5;
l1=si0;
si0=l5;
si1=l3;
si0=si0 != si1;
if(si0){
goto L3;
}
}
L2:;
si0=l4;
L0:;
return si0;
}

U32 f1909(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 l8=0;
U32 l9=0;
U32 l10=0;
F64 l11=0;
U32 si0,si1,si2,si3,si4,si5;
U64 sj1;
F64 sd0,sd1;
si0=i->g0;
si1=48U;
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
switch(si0){
case 0:
goto L45;
case 1:
goto L44;
case 2:
goto L34;
case 3:
goto L33;
case 4:
goto L43;
case 5:
goto L42;
case 6:
goto L32;
case 7:
goto L31;
case 8:
goto L30;
case 9:
goto L29;
case 10:
goto L28;
case 11:
goto L27;
case 12:
goto L41;
case 13:
goto L26;
case 14:
goto L4;
case 15:
goto L40;
case 16:
goto L24;
case 17:
goto L39;
case 18:
goto L38;
case 19:
goto L23;
case 20:
goto L22;
case 21:
goto L21;
case 22:
goto L37;
case 23:
goto L36;
case 24:
goto L20;
case 25:
goto L19;
case 26:
goto L18;
default:
goto L45;
}
L45:;
si0=2U;
si1=3U;
si2=l1;
si3=32U;
si2+=si3;
si2=i32_load8_u(&i->m0,(U64)si2);
l4=si2;
si0=si2?si0:si1;
l6=si0;
si1=l2;
si2=255U;
si1&=si2;
si0=si0 >= si1;
if(si0){
goto L46;
}
si0=1U;
l5=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=1293589U;
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
L46:;
si0=l1;
si1=28U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
si0=!(si0);
if(si0){
goto L3;
}
si0=l0;
si1=l1;
si2=20U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
l1=si1;
si2=l6;
si3=1U;
si2+=si3;
l8=si2;
si0=f1909(i,si0,si1,si2);
si0=!(si0);
if(si0){
goto L35;
}
si0=1U;
l5=si0;
goto L1;
L44:;
si0=l2;
si1=255U;
si0&=si1;
si0=!(si0);
if(si0){
goto L47;
}
si0=1U;
l5=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=1293589U;
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
L47:;
si0=1U;
l5=si0;
si0=l0;
si1=l1;
si2=20U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
si2=15U;
si0=f1909(i,si0,si1,si2);
if(si0){
goto L1;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=1293591U;
si2=4U;
si3=l0;
si4=24U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si3=i32_load(&i->m0,(U64)si3+12U);
si0=TF(i->t0,si3,U32 (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
if(si0){
goto L1;
}
si0=l0;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+24U);
si2=15U;
si0=f1909(i,si0,si1,si2);
if(si0){
goto L1;
}
si0=l2;
si1=255U;
si0&=si1;
si0=!(si0);
if(si0){
goto L2;
}
si0=1U;
l5=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=1293590U;
si2=1U;
si3=l0;
si3=i32_load(&i->m0,(U64)si3+24U);
si3=i32_load(&i->m0,(U64)si3+12U);
si0=TF(i->t0,si3,U32 (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
si0=!(si0);
if(si0){
goto L2;
}
goto L1;
L43:;
si0=l2;
si1=255U;
si0&=si1;
si1=2U;
si0=si0 < si1;
if(si0){
goto L48;
}
si0=1U;
l5=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=1293589U;
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
L48:;
si0=1U;
l5=si0;
si0=l0;
si1=20U;
si0+=si1;
l9=si0;
si0=i32_load(&i->m0,(U64)si0);
si1=1293645U;
si2=1293651U;
si3=l1;
si4=20U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
l4=si3;
si4=20U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si4=0U;
si5=l4;
si5=i32_load(&i->m0,(U64)si5+8U);
si4-=si5;
si3=si3 == si4;
l8=si3;
si1=si3?si1:si2;
si2=6U;
si3=7U;
si4=l8;
si2=si4?si2:si3;
si3=l0;
si4=24U;
si3+=si4;
l8=si3;
si3=i32_load(&i->m0,(U64)si3);
si3=i32_load(&i->m0,(U64)si3+12U);
si0=TF(i->t0,si3,U32 (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
if(si0){
goto L1;
}
si0=l9;
si0=i32_load(&i->m0,(U64)si0);
si1=l8;
si1=i32_load(&i->m0,(U64)si1);
si2=l4;
si0=f1910(i,si0,si1,si2);
if(si0){
goto L1;
}
si0=l3;
si1=558U;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l3;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+24U);
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l3;
sj1=1ULL;
i64_store(&i->m0,(U64)si0+36U,sj1);
si0=1U;
l5=si0;
si0=l3;
si1=1U;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l3;
si1=1293548U;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l0;
si1=20U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si0=l0;
si1=24U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
si0=l3;
si1=l3;
si2=8U;
si1+=si2;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l1;
si1=l4;
si2=l3;
si3=24U;
si2+=si3;
si0=f690(i,si0,si1,si2);
if(si0){
goto L1;
}
si0=l2;
si1=255U;
si0&=si1;
si1=2U;
si0=si0 < si1;
if(si0){
goto L2;
}
si0=1U;
l5=si0;
si0=l0;
si1=20U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=1293590U;
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
L42:;
si0=l2;
si1=255U;
si0&=si1;
si1=2U;
si0=si0 < si1;
if(si0){
goto L49;
}
si0=1U;
l5=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=1293589U;
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
L49:;
si0=1U;
l5=si0;
si0=l0;
si1=l1;
si2=24U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
si2=2U;
si0=f1909(i,si0,si1,si2);
if(si0){
goto L1;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=1293576U;
si2=4U;
si3=l0;
si4=24U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si3=i32_load(&i->m0,(U64)si3+12U);
si0=TF(i->t0,si3,U32 (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
if(si0){
goto L1;
}
si0=l0;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+20U);
si2=2U;
si0=f1909(i,si0,si1,si2);
if(si0){
goto L1;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=1293658U;
si2=6U;
si3=l0;
si3=i32_load(&i->m0,(U64)si3+24U);
si3=i32_load(&i->m0,(U64)si3+12U);
si0=TF(i->t0,si3,U32 (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
if(si0){
goto L1;
}
si0=1U;
l5=si0;
si0=l0;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+28U);
si2=1U;
si0=f1909(i,si0,si1,si2);
if(si0){
goto L1;
}
si0=l2;
si1=255U;
si0&=si1;
si1=2U;
si0=si0 < si1;
if(si0){
goto L2;
}
si0=1U;
l5=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=1293590U;
si2=1U;
si3=l0;
si3=i32_load(&i->m0,(U64)si3+24U);
si3=i32_load(&i->m0,(U64)si3+12U);
si0=TF(i->t0,si3,U32 (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
si0=!(si0);
if(si0){
goto L2;
}
goto L1;
L41:;
si0=l2;
si1=255U;
si0&=si1;
si1=15U;
si0=si0 < si1;
if(si0){
goto L50;
}
si0=1U;
l5=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=1293589U;
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
L50:;
si0=1U;
l5=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=1293806U;
si2=6U;
si3=l0;
si4=24U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si3=i32_load(&i->m0,(U64)si3+12U);
si0=TF(i->t0,si3,U32 (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
if(si0){
goto L1;
}
si0=l0;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+20U);
si2=15U;
si0=f1909(i,si0,si1,si2);
if(si0){
goto L1;
}
si0=l2;
si1=255U;
si0&=si1;
si1=15U;
si0=si0 < si1;
if(si0){
goto L2;
}
si0=1U;
l5=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=1293590U;
si2=1U;
si3=l0;
si3=i32_load(&i->m0,(U64)si3+24U);
si3=i32_load(&i->m0,(U64)si3+12U);
si0=TF(i->t0,si3,U32 (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
si0=!(si0);
if(si0){
goto L2;
}
goto L1;
L40:;
si0=l2;
si1=255U;
si0&=si1;
si1=6U;
si0=si0 < si1;
if(si0){
goto L51;
}
si0=1U;
l5=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=1293589U;
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
L51:;
si0=1U;
l5=si0;
si0=l0;
si1=l1;
si2=20U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
si2=6U;
si0=f1909(i,si0,si1,si2);
if(si0){
goto L1;
}
si0=l1;
si1=32U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si1=l1;
si2=44U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
l4=si1;
si2=l5;
si3=l4;
si2=si2 < si3;
si0=si2?si0:si1;
l4=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+36U);
l8=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+24U);
l1=si0;
L52:;
{
si0=l4;
si0=!(si0);
if(si0){
goto L25;
}
si0=1U;
l5=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=1293872U;
si2=1U;
si3=l0;
si3=i32_load(&i->m0,(U64)si3+24U);
si3=i32_load(&i->m0,(U64)si3+12U);
si0=TF(i->t0,si3,U32 (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
if(si0){
goto L1;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=l1;
si1=i32_load8_u(&i->m0,(U64)si1);
si2=2U;
si1<<=(si2&31);
l9=si1;
si2=1294616U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
si2=l9;
si3=1294576U;
si2+=si3;
si2=i32_load(&i->m0,(U64)si2);
si3=l0;
si3=i32_load(&i->m0,(U64)si3+24U);
si3=i32_load(&i->m0,(U64)si3+12U);
si0=TF(i->t0,si3,U32 (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
if(si0){
goto L1;
}
si0=1U;
l5=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=1293872U;
si2=1U;
si3=l0;
si3=i32_load(&i->m0,(U64)si3+24U);
si3=i32_load(&i->m0,(U64)si3+12U);
si0=TF(i->t0,si3,U32 (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
if(si0){
goto L1;
}
si0=l4;
si1=-1U;
si0+=si1;
l4=si0;
si0=1U;
l5=si0;
si0=l1;
si1=1U;
si0+=si1;
l1=si0;
si0=l0;
si1=l8;
si2=6U;
si0=f1909(i,si0,si1,si2);
l9=si0;
si0=l8;
si1=56U;
si0+=si1;
l8=si0;
si0=l9;
si0=!(si0);
if(si0){
goto L52;
}
goto L1;
}
L39:;
si0=1U;
l5=si0;
si0=l0;
si1=l1;
si2=20U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
si2=l1;
si3=28U;
si2+=si3;
si2=i32_load8_u(&i->m0,(U64)si2);
si3=l1;
si4=24U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si0=f1911(i,si0,si1,si2,si3);
si0=!(si0);
if(si0){
goto L2;
}
goto L1;
L38:;
si0=1U;
l5=si0;
si0=l0;
si1=l1;
si2=20U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
si2=l1;
si3=28U;
si2+=si3;
si2=i32_load(&i->m0,(U64)si2);
si3=0U;
si0=f1912(i,si0,si1,si2,si3);
si0=!(si0);
if(si0){
goto L2;
}
goto L1;
L37:;
si0=1U;
l5=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=1293885U;
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
si0=l0;
si1=l1;
si2=20U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
si2=6U;
si0=f1909(i,si0,si1,si2);
si0=!(si0);
if(si0){
goto L2;
}
goto L1;
L36:;
si0=1U;
l5=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=l1;
si2=20U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
si2=l1;
si3=28U;
si2+=si3;
si2=i32_load(&i->m0,(U64)si2);
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
L35:;
si0=1293585U;
si1=1293580U;
si2=l4;
si0=si2?si0:si1;
l9=si0;
si0=4U;
si1=5U;
si2=l4;
si0=si2?si0:si1;
l10=si0;
si0=l1;
si1=56U;
si0+=si1;
l5=si0;
si0=l7;
si1=56U;
si0*=si1;
si1=-56U;
si0+=si1;
l1=si0;
L53:;
{
si0=l1;
si0=!(si0);
if(si0){
goto L3;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=l9;
si2=l10;
si3=l0;
si3=i32_load(&i->m0,(U64)si3+24U);
si3=i32_load(&i->m0,(U64)si3+12U);
si0=TF(i->t0,si3,U32 (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
si0=!(si0);
if(si0){
goto L54;
}
si0=1U;
l5=si0;
goto L1;
L54:;
si0=l1;
si1=-56U;
si0+=si1;
l1=si0;
si0=l0;
si1=l5;
si2=l8;
si0=f1909(i,si0,si1,si2);
l4=si0;
si0=l5;
si1=56U;
si0+=si1;
l5=si0;
si0=l4;
si0=!(si0);
if(si0){
goto L53;
}
}
si0=1U;
l5=si0;
goto L1;
L34:;
si0=l1;
si1=28U;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
l4=si0;
si1=2U;
si0<<=(si1&31);
l5=si0;
si1=1294492U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l9=si0;
si0=l5;
si1=1294440U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l10=si0;
si0=l4;
si1=1294424U;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
l8=si0;
si1=l2;
si2=255U;
si1&=si2;
si0=si0 >= si1;
if(si0){
goto L55;
}
si0=1U;
l5=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=1293589U;
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
L55:;
si0=1U;
l5=si0;
si0=l0;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+20U);
si2=l8;
si3=l4;
si4=6U;
si3=si3 == si4;
si2+=si3;
si0=f1909(i,si0,si1,si2);
if(si0){
goto L1;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=l9;
si2=l10;
si3=l0;
si4=24U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si3=i32_load(&i->m0,(U64)si3+12U);
si0=TF(i->t0,si3,U32 (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
if(si0){
goto L1;
}
si0=l0;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+24U);
si2=l8;
si3=l4;
si4=6U;
si3=si3 != si4;
si2+=si3;
si0=f1909(i,si0,si1,si2);
if(si0){
goto L1;
}
si0=l8;
si1=l2;
si2=255U;
si1&=si2;
si0=si0 >= si1;
if(si0){
goto L2;
}
si0=1U;
l5=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=1293590U;
si2=1U;
si3=l0;
si3=i32_load(&i->m0,(U64)si3+24U);
si3=i32_load(&i->m0,(U64)si3+12U);
si0=TF(i->t0,si3,U32 (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
si0=!(si0);
if(si0){
goto L2;
}
goto L1;
L33:;
si0=l1;
si1=24U;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
l5=si0;
si1=2U;
si0<<=(si1&31);
l4=si0;
si1=1294560U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l8=si0;
si0=l4;
si1=1294544U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
si0=202114060U;
si1=l5;
si2=3U;
si1<<=(si2&31);
si0>>=(si1&31);
l9=si0;
si1=255U;
si0&=si1;
si1=l2;
si2=255U;
si1&=si2;
si0=si0 >= si1;
if(si0){
goto L56;
}
si0=1U;
l5=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=1293589U;
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
L56:;
si0=1U;
l5=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=l8;
si2=l4;
si3=l0;
si4=24U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si3=i32_load(&i->m0,(U64)si3+12U);
si0=TF(i->t0,si3,U32 (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
if(si0){
goto L1;
}
si0=l0;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+20U);
si2=l9;
si0=f1909(i,si0,si1,si2);
if(si0){
goto L1;
}
si0=l9;
si1=255U;
si0&=si1;
si1=l2;
si2=255U;
si1&=si2;
si0=si0 >= si1;
if(si0){
goto L2;
}
si0=1U;
l5=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=1293590U;
si2=1U;
si3=l0;
si3=i32_load(&i->m0,(U64)si3+24U);
si3=i32_load(&i->m0,(U64)si3+12U);
si0=TF(i->t0,si3,U32 (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
si0=!(si0);
if(si0){
goto L2;
}
goto L1;
L32:;
si0=1U;
l5=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=1293664U;
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
si0=l1;
si1=40U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l10=si0;
si1=l1;
si2=28U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
l2=si1;
si0=si0 < si1;
if(si0){
goto L17;
}
si0=l1;
si1=32U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l9=si0;
si1=l2;
si2=56U;
si1*=si2;
si0+=si1;
l6=si0;
si0=l2;
si0=!(si0);
if(si0){
goto L7;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+20U);
l1=si0;
si0=i32_load(&i->m0,(U64)si0);
si1=38U;
si0=si0 == si1;
if(si0){
goto L58;
}
si0=l3;
si1=558U;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l3;
si1=l9;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l3;
si1=558U;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l3;
si1=l1;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l3;
sj1=2ULL;
i64_store(&i->m0,(U64)si0+36U,sj1);
si0=l3;
si1=2U;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l3;
si1=1293788U;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l3;
si1=l3;
si2=8U;
si1+=si2;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l0;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=l0;
si1=i32_load(&i->m0,(U64)si1+24U);
si2=l3;
si3=24U;
si2+=si3;
si0=f690(i,si0,si1,si2);
si0=!(si0);
if(si0){
goto L57;
}
goto L1;
L58:;
si0=l3;
si1=558U;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l3;
si1=l9;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l3;
sj1=1ULL;
i64_store(&i->m0,(U64)si0+36U,sj1);
si0=1U;
l5=si0;
si0=l3;
si1=1U;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l3;
si1=1293780U;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l3;
si1=l3;
si2=8U;
si1+=si2;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l0;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=l0;
si1=i32_load(&i->m0,(U64)si1+24U);
si2=l3;
si3=24U;
si2+=si3;
si0=f690(i,si0,si1,si2);
if(si0){
goto L1;
}
L57:;
si0=1U;
l8=si0;
si0=l2;
si1=1U;
si0=si0 == si1;
if(si0){
goto L9;
}
si0=l1;
si1=56U;
si0+=si1;
l1=si0;
si0=l9;
si1=56U;
si0+=si1;
l4=si0;
L59:;
{
si0=l0;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=1293773U;
si2=2U;
si3=l0;
si3=i32_load(&i->m0,(U64)si3+24U);
si3=i32_load(&i->m0,(U64)si3+12U);
si0=TF(i->t0,si3,U32 (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
si0=!(si0);
if(si0){
goto L60;
}
si0=1U;
l5=si0;
goto L1;
L60:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
si1=38U;
si0=si0 == si1;
if(si0){
goto L62;
}
si0=l3;
si1=558U;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l3;
si1=l4;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l3;
si1=558U;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l3;
si1=l1;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l3;
sj1=2ULL;
i64_store(&i->m0,(U64)si0+36U,sj1);
si0=l3;
si1=2U;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l3;
si1=1293788U;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l3;
si1=l3;
si2=8U;
si1+=si2;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l0;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=l0;
si1=i32_load(&i->m0,(U64)si1+24U);
si2=l3;
si3=24U;
si2+=si3;
si0=f690(i,si0,si1,si2);
si0=!(si0);
if(si0){
goto L61;
}
si0=1U;
l5=si0;
goto L1;
L62:;
si0=l3;
si1=558U;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l3;
si1=l4;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l3;
sj1=1ULL;
i64_store(&i->m0,(U64)si0+36U,sj1);
si0=1U;
l5=si0;
si0=l3;
si1=1U;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l3;
si1=1293780U;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l3;
si1=l3;
si2=8U;
si1+=si2;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l0;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=l0;
si1=i32_load(&i->m0,(U64)si1+24U);
si2=l3;
si3=24U;
si2+=si3;
si0=f690(i,si0,si1,si2);
if(si0){
goto L1;
}
L61:;
si0=l1;
si1=56U;
si0+=si1;
l1=si0;
si0=l4;
si1=56U;
si0+=si1;
l4=si0;
si0=l2;
si1=l8;
si2=1U;
si1+=si2;
l8=si1;
si0=si0 != si1;
if(si0){
goto L59;
}
}
si0=l2;
si1=l10;
si0=si0 == si1;
if(si0){
goto L5;
}
si0=l6;
si1=56U;
si0+=si1;
l1=si0;
si0=l9;
si1=l10;
si2=56U;
si1*=si2;
si0+=si1;
l4=si0;
si0=l2;
if(si0){
goto L8;
}
goto L6;
L31:;
si0=1U;
l5=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=1293664U;
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
si0=l1;
si1=28U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si0=!(si0);
if(si0){
goto L10;
}
si0=l0;
si1=l1;
si2=20U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
l1=si1;
si2=1U;
si0=f1909(i,si0,si1,si2);
si0=!(si0);
if(si0){
goto L63;
}
si0=1U;
l5=si0;
goto L1;
L63:;
si0=l1;
si1=56U;
si0+=si1;
l2=si0;
si0=l5;
si1=56U;
si0*=si1;
si1=-56U;
si0+=si1;
l1=si0;
L64:;
{
si0=l1;
si0=!(si0);
if(si0){
goto L10;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=1293773U;
si2=2U;
si3=l0;
si3=i32_load(&i->m0,(U64)si3+24U);
si3=i32_load(&i->m0,(U64)si3+12U);
si0=TF(i->t0,si3,U32 (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
si0=!(si0);
if(si0){
goto L65;
}
si0=1U;
l5=si0;
goto L1;
L65:;
si0=l1;
si1=-56U;
si0+=si1;
l1=si0;
si0=1U;
l5=si0;
si0=l0;
si1=l2;
si2=1U;
si0=f1909(i,si0,si1,si2);
l4=si0;
si0=l2;
si1=56U;
si0+=si1;
l2=si0;
si0=l4;
si0=!(si0);
if(si0){
goto L64;
}
goto L1;
}
L30:;
si0=1U;
l5=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=1293804U;
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
si0=1U;
l5=si0;
si0=l0;
si1=l1;
si2=20U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
si2=1U;
si0=f1909(i,si0,si1,si2);
if(si0){
goto L1;
}
si0=l0;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+24U);
si2=l1;
si3=32U;
si2+=si3;
si2=i32_load(&i->m0,(U64)si2);
si0=f1908(i,si0,si1,si2);
if(si0){
goto L1;
}
si0=1U;
l5=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=1293805U;
si2=1U;
si3=l0;
si3=i32_load(&i->m0,(U64)si3+24U);
si3=i32_load(&i->m0,(U64)si3+12U);
si0=TF(i->t0,si3,U32 (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
si0=!(si0);
if(si0){
goto L2;
}
goto L1;
L29:;
si0=1U;
l5=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=1293664U;
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
si0=1U;
l5=si0;
si0=l0;
si1=l1;
si2=20U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
si2=1U;
si0=f1909(i,si0,si1,si2);
if(si0){
goto L1;
}
si0=l0;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+24U);
si2=l1;
si3=32U;
si2+=si3;
si2=i32_load(&i->m0,(U64)si2);
si0=f1908(i,si0,si1,si2);
if(si0){
goto L1;
}
si0=1U;
l5=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=1293772U;
si2=1U;
si3=l0;
si3=i32_load(&i->m0,(U64)si3+24U);
si3=i32_load(&i->m0,(U64)si3+12U);
si0=TF(i->t0,si3,U32 (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
si0=!(si0);
if(si0){
goto L2;
}
goto L1;
L28:;
si0=1U;
l5=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=1293664U;
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
si0=1U;
l5=si0;
si0=l0;
si1=l1;
si2=20U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
si2=1U;
si0=f1909(i,si0,si1,si2);
if(si0){
goto L1;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=1293544U;
si2=2U;
si3=l0;
si3=i32_load(&i->m0,(U64)si3+24U);
si3=i32_load(&i->m0,(U64)si3+12U);
si0=TF(i->t0,si3,U32 (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
if(si0){
goto L1;
}
si0=1U;
l5=si0;
si0=l0;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+24U);
si2=1U;
si0=f1909(i,si0,si1,si2);
if(si0){
goto L1;
}
si0=l0;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+28U);
si2=l1;
si3=36U;
si2+=si3;
si2=i32_load(&i->m0,(U64)si2);
si0=f1908(i,si0,si1,si2);
if(si0){
goto L1;
}
si0=1U;
l5=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=1293772U;
si2=1U;
si3=l0;
si3=i32_load(&i->m0,(U64)si3+24U);
si3=i32_load(&i->m0,(U64)si3+12U);
si0=TF(i->t0,si3,U32 (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
si0=!(si0);
if(si0){
goto L2;
}
goto L1;
L27:;
si0=1U;
l5=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=1293589U;
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
si0=1U;
l5=si0;
si0=l0;
si1=l1;
si2=20U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
si2=1U;
si0=f1909(i,si0,si1,si2);
if(si0){
goto L1;
}
si0=l0;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+24U);
si2=l1;
si3=32U;
si2+=si3;
si2=i32_load(&i->m0,(U64)si2);
si0=f1908(i,si0,si1,si2);
if(si0){
goto L1;
}
si0=1U;
l5=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=1293590U;
si2=1U;
si3=l0;
si3=i32_load(&i->m0,(U64)si3+24U);
si3=i32_load(&i->m0,(U64)si3+12U);
si0=TF(i->t0,si3,U32 (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
si0=!(si0);
if(si0){
goto L2;
}
goto L1;
L26:;
si0=l1;
si1=20U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si0=!(si0);
if(si0){
goto L66;
}
si0=l3;
si1=558U;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l3;
si1=l1;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l3;
sj1=1ULL;
i64_store(&i->m0,(U64)si0+36U,sj1);
si0=l3;
si1=2U;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l3;
si1=1293820U;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l0;
si1=24U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si0=l3;
si1=l3;
si2=8U;
si1+=si2;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=1U;
l5=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=l1;
si2=l3;
si3=24U;
si2+=si3;
si0=f690(i,si0,si1,si2);
si0=!(si0);
if(si0){
goto L2;
}
goto L1;
L66:;
si0=1U;
l5=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=1293836U;
si2=7U;
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
L25:;
si0=l2;
si1=255U;
si0&=si1;
si1=6U;
si0=si0 < si1;
if(si0){
goto L2;
}
si0=1U;
l5=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=1293590U;
si2=1U;
si3=l0;
si3=i32_load(&i->m0,(U64)si3+24U);
si3=i32_load(&i->m0,(U64)si3+12U);
si0=TF(i->t0,si3,U32 (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
si0=!(si0);
if(si0){
goto L2;
}
goto L1;
L24:;
si0=1U;
l5=si0;
si0=l0;
si1=l1;
si2=20U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
si2=15U;
si0=f1909(i,si0,si1,si2);
if(si0){
goto L1;
}
si0=1U;
l5=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=1293589U;
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
si0=l1;
si1=44U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+24U);
l2=si0;
si0=l1;
si1=32U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l8=si0;
si1=1U;
si0=si0 != si1;
if(si0){
goto L67;
}
si0=l4;
si0=!(si0);
if(si0){
goto L12;
}
L67:;
si0=l8;
si0=!(si0);
if(si0){
goto L68;
}
si0=1U;
l5=si0;
si0=l0;
si1=l2;
si2=1U;
si0=f1909(i,si0,si1,si2);
if(si0){
goto L1;
}
si0=l8;
si1=1U;
si0=si0 == si1;
if(si0){
goto L68;
}
si0=l2;
si1=56U;
si0+=si1;
l2=si0;
si0=l8;
si1=56U;
si0*=si1;
si1=-56U;
si0+=si1;
l9=si0;
L69:;
{
si0=l0;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=1293773U;
si2=2U;
si3=l0;
si3=i32_load(&i->m0,(U64)si3+24U);
si3=i32_load(&i->m0,(U64)si3+12U);
si0=TF(i->t0,si3,U32 (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
si0=!(si0);
if(si0){
goto L70;
}
si0=1U;
l5=si0;
goto L1;
L70:;
si0=1U;
l5=si0;
si0=l0;
si1=l2;
si2=1U;
si0=f1909(i,si0,si1,si2);
if(si0){
goto L1;
}
si0=l2;
si1=56U;
si0+=si1;
l2=si0;
si0=l9;
si1=-56U;
si0+=si1;
l9=si0;
if(si0){
goto L69;
}
}
L68:;
si0=l4;
si0=!(si0);
if(si0){
goto L11;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+36U);
l1=si0;
si0=l8;
si0=!(si0);
if(si0){
goto L71;
}
si0=1U;
l5=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=1293773U;
si2=2U;
si3=l0;
si3=i32_load(&i->m0,(U64)si3+24U);
si3=i32_load(&i->m0,(U64)si3+12U);
si0=TF(i->t0,si3,U32 (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
if(si0){
goto L1;
}
L71:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+72U);
l2=si0;
si0=!(si0);
if(si0){
goto L73;
}
si0=1U;
l5=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=l2;
si2=l1;
si3=80U;
si2+=si3;
si2=i32_load(&i->m0,(U64)si2);
si3=l0;
si3=i32_load(&i->m0,(U64)si3+24U);
si3=i32_load(&i->m0,(U64)si3+12U);
si0=TF(i->t0,si3,U32 (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
if(si0){
goto L1;
}
si0=1U;
l5=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=1293873U;
si2=1U;
si3=l0;
si3=i32_load(&i->m0,(U64)si3+24U);
si3=i32_load(&i->m0,(U64)si3+12U);
si0=TF(i->t0,si3,U32 (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
si0=!(si0);
if(si0){
goto L72;
}
goto L1;
L73:;
si0=1U;
l5=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=1293775U;
si2=2U;
si3=l0;
si3=i32_load(&i->m0,(U64)si3+24U);
si3=i32_load(&i->m0,(U64)si3+12U);
si0=TF(i->t0,si3,U32 (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
if(si0){
goto L1;
}
L72:;
si0=l0;
si1=l1;
si2=1U;
si0=f1909(i,si0,si1,si2);
si0=!(si0);
if(si0){
goto L74;
}
si0=1U;
l5=si0;
goto L1;
L74:;
si0=l1;
si1=168U;
si0+=si1;
l1=si0;
si0=l4;
si1=88U;
si0*=si1;
si1=-88U;
si0+=si1;
l2=si0;
L75:;
{
si0=l2;
si0=!(si0);
if(si0){
goto L11;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=1293773U;
si2=2U;
si3=l0;
si3=i32_load(&i->m0,(U64)si3+24U);
si3=i32_load(&i->m0,(U64)si3+12U);
si0=TF(i->t0,si3,U32 (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
si0=!(si0);
if(si0){
goto L76;
}
si0=1U;
l5=si0;
goto L1;
L76:;
si0=l1;
si1=-8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si0=!(si0);
if(si0){
goto L79;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=l5;
si2=l1;
si2=i32_load(&i->m0,(U64)si2);
si3=l0;
si3=i32_load(&i->m0,(U64)si3+24U);
si3=i32_load(&i->m0,(U64)si3+12U);
si0=TF(i->t0,si3,U32 (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
si0=!(si0);
if(si0){
goto L78;
}
si0=1U;
l5=si0;
goto L1;
L79:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=1293775U;
si2=2U;
si3=l0;
si3=i32_load(&i->m0,(U64)si3+24U);
si3=i32_load(&i->m0,(U64)si3+12U);
si0=TF(i->t0,si3,U32 (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
si0=!(si0);
if(si0){
goto L77;
}
si0=1U;
l5=si0;
goto L1;
L78:;
si0=1U;
l5=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=1293873U;
si2=1U;
si3=l0;
si3=i32_load(&i->m0,(U64)si3+24U);
si3=i32_load(&i->m0,(U64)si3+12U);
si0=TF(i->t0,si3,U32 (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
if(si0){
goto L1;
}
L77:;
si0=l1;
si1=-80U;
si0+=si1;
l4=si0;
si0=l2;
si1=-88U;
si0+=si1;
l2=si0;
si0=l1;
si1=88U;
si0+=si1;
l1=si0;
si0=1U;
l5=si0;
si0=l0;
si1=l4;
si2=1U;
si0=f1909(i,si0,si1,si2);
si0=!(si0);
if(si0){
goto L75;
}
goto L1;
}
L23:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+40U);
l2=si0;
si0=!(si0);
if(si0){
goto L80;
}
si0=1U;
l5=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=l2;
si2=l1;
si3=48U;
si2+=si3;
si2=i32_load(&i->m0,(U64)si2);
si3=l0;
si4=24U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si3=i32_load(&i->m0,(U64)si3+12U);
si0=TF(i->t0,si3,U32 (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
if(si0){
goto L1;
}
L80:;
si0=l4;
si1=-2U;
si0+=si1;
l5=si0;
si1=4U;
si2=l5;
si3=9U;
si2=si2 < si3;
si0=si2?si0:si1;
si1=-6U;
si0+=si1;
switch(si0){
case 0:
goto L82;
case 1:
goto L81;
default:
goto L13;
}
L82:;
si0=l1;
sd0=f64_load(&i->m0,(U64)si0+8U);
l11=sd0;
sd1=INFINITY;
si0=sd0 == sd1;
if(si0){
goto L16;
}
sd0=l11;
sd1=-INFINITY;
si0=sd0 == sd1;
if(si0){
goto L16;
}
goto L13;
L81:;
si0=l1;
sd0=f64_load(&i->m0,(U64)si0+8U);
l11=sd0;
sd1=INFINITY;
si0=sd0 == sd1;
if(si0){
goto L83;
}
sd0=l11;
sd1=-INFINITY;
si0=sd0 == sd1;
if(si0){
goto L83;
}
si0=l1;
sd0=f64_load(&i->m0,(U64)si0+16U);
l11=sd0;
sd1=INFINITY;
si0=sd0 == sd1;
if(si0){
goto L83;
}
sd0=l11;
sd1=-INFINITY;
si0=sd0 != sd1;
if(si0){
goto L13;
}
L83:;
si0=l3;
si1=24U;
si0+=si1;
si1=l1;
f1913(i,si0,si1);
si0=l3;
si1=8U;
si0+=si1;
si1=l3;
si1=i32_load(&i->m0,(U64)si1+24U);
l1=si1;
si2=l3;
si2=i32_load(&i->m0,(U64)si2+32U);
f1914(i,si0,si1,si2);
si0=l0;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=l3;
si1=i32_load(&i->m0,(U64)si1+8U);
l5=si1;
si2=l3;
si2=i32_load(&i->m0,(U64)si2+16U);
si3=l0;
si4=24U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si3=i32_load(&i->m0,(U64)si3+12U);
si0=TF(i->t0,si3,U32 (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
l0=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+12U);
si0=!(si0);
if(si0){
goto L84;
}
si0=l5;
f15271(i,si0);
L84:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+28U);
si0=!(si0);
if(si0){
goto L85;
}
si0=l1;
f15271(i,si0);
L85:;
si0=1U;
l5=si0;
si0=l0;
si0=!(si0);
if(si0){
goto L2;
}
goto L1;
L22:;
si0=1U;
l5=si0;
si0=l0;
si1=l1;
si2=20U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
l2=si1;
si2=15U;
si0=f1909(i,si0,si1,si2);
if(si0){
goto L1;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si1=-11U;
si0+=si1;
l5=si0;
si1=26U;
si0=si0 > si1;
if(si0){
goto L87;
}
si0=l5;
si1=19U;
si0=si0 == si1;
if(si0){
goto L87;
}
si0=1U;
l2=si0;
si0=1293884U;
l4=si0;
goto L86;
L87:;
si0=2U;
si1=1U;
si2=l2;
si3=-2U;
si2+=si3;
l5=si2;
si3=8U;
si2=si2 > si3;
si3=l5;
si4=4U;
si3=si3 == si4;
si2|=si3;
l5=si2;
si0=si2?si0:si1;
l2=si0;
si0=1293882U;
si1=1293884U;
si2=l5;
si0=si2?si0:si1;
l4=si0;
L86:;
si0=1U;
l5=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=l4;
si2=l2;
si3=l0;
si4=24U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si3=i32_load(&i->m0,(U64)si3+12U);
si0=TF(i->t0,si3,U32 (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
if(si0){
goto L1;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=l1;
si1=i32_load(&i->m0,(U64)si1+24U);
si2=l1;
si3=32U;
si2+=si3;
si2=i32_load(&i->m0,(U64)si2);
si3=l0;
si3=i32_load(&i->m0,(U64)si3+24U);
si3=i32_load(&i->m0,(U64)si3+12U);
si0=TF(i->t0,si3,U32 (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
si0=!(si0);
if(si0){
goto L2;
}
goto L1;
L21:;
si0=1U;
l5=si0;
si0=l0;
si1=l1;
si2=20U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
si2=15U;
si0=f1909(i,si0,si1,si2);
if(si0){
goto L1;
}
si0=0U;
l2=si0;
si0=l1;
si1=24U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l8=si0;
si0=i32_load(&i->m0,(U64)si0);
si1=36U;
si0=si0 != si1;
if(si0){
goto L88;
}
si0=l8;
si1=28U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=56U;
si0*=si1;
l5=si0;
si0=l8;
si1=20U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
L90:;
{
si0=l5;
l2=si0;
si0=!(si0);
if(si0){
goto L89;
}
si0=l2;
si1=-56U;
si0+=si1;
l5=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
si0=l1;
si1=56U;
si0+=si1;
l1=si0;
si0=l4;
si1=33U;
si0=si0 != si1;
if(si0){
goto L90;
}
}
L89:;
si0=l2;
si1=0U;
si0=si0 != si1;
l2=si0;
L88:;
si0=1U;
l5=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=1293804U;
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
si0=l0;
si1=l8;
si2=l2;
si0=f1909(i,si0,si1,si2);
if(si0){
goto L1;
}
si0=1U;
l5=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=1293805U;
si2=1U;
si3=l0;
si3=i32_load(&i->m0,(U64)si3+24U);
si3=i32_load(&i->m0,(U64)si3+12U);
si0=TF(i->t0,si3,U32 (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
si0=!(si0);
if(si0){
goto L2;
}
goto L1;
L20:;
si0=1U;
l5=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=1293804U;
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
si0=l1;
si1=28U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si0=!(si0);
if(si0){
goto L14;
}
si0=l0;
si1=l1;
si2=20U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
l1=si1;
si2=1U;
si0=f1909(i,si0,si1,si2);
si0=!(si0);
if(si0){
goto L91;
}
si0=1U;
l5=si0;
goto L1;
L91:;
si0=l1;
si1=56U;
si0+=si1;
l2=si0;
si0=l5;
si1=56U;
si0*=si1;
si1=-56U;
si0+=si1;
l1=si0;
L92:;
{
si0=l1;
si0=!(si0);
if(si0){
goto L14;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=1293773U;
si2=2U;
si3=l0;
si3=i32_load(&i->m0,(U64)si3+24U);
si3=i32_load(&i->m0,(U64)si3+12U);
si0=TF(i->t0,si3,U32 (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
si0=!(si0);
if(si0){
goto L93;
}
si0=1U;
l5=si0;
goto L1;
L93:;
si0=l1;
si1=-56U;
si0+=si1;
l1=si0;
si0=1U;
l5=si0;
si0=l0;
si1=l2;
si2=1U;
si0=f1909(i,si0,si1,si2);
l4=si0;
si0=l2;
si1=56U;
si0+=si1;
l2=si0;
si0=l4;
si0=!(si0);
if(si0){
goto L92;
}
goto L1;
}
L19:;
si0=l1;
si1=28U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l9=si0;
si0=!(si0);
if(si0){
goto L15;
}
si0=l2;
si1=255U;
si0&=si1;
si0=!(si0);
if(si0){
goto L94;
}
si0=1U;
l5=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=1293589U;
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
L94:;
si0=l0;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+20U);
l1=si1;
si2=1U;
si0=f1909(i,si0,si1,si2);
si0=!(si0);
if(si0){
goto L95;
}
si0=1U;
l5=si0;
goto L1;
L95:;
si0=l1;
si1=56U;
si0+=si1;
l4=si0;
si0=l9;
si1=56U;
si0*=si1;
si1=-56U;
si0+=si1;
l1=si0;
L96:;
{
si0=l1;
if(si0){
goto L97;
}
si0=1U;
l5=si0;
si0=l9;
si1=1U;
si0=si0 != si1;
if(si0){
goto L98;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=1293888U;
si2=1U;
si3=l0;
si3=i32_load(&i->m0,(U64)si3+24U);
si3=i32_load(&i->m0,(U64)si3+12U);
si0=TF(i->t0,si3,U32 (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
if(si0){
goto L1;
}
L98:;
si0=l2;
si1=255U;
si0&=si1;
si0=!(si0);
if(si0){
goto L2;
}
si0=1U;
l5=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=1293590U;
si2=1U;
si3=l0;
si3=i32_load(&i->m0,(U64)si3+24U);
si3=i32_load(&i->m0,(U64)si3+12U);
si0=TF(i->t0,si3,U32 (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
si0=!(si0);
if(si0){
goto L2;
}
goto L1;
L97:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=1293773U;
si2=2U;
si3=l0;
si3=i32_load(&i->m0,(U64)si3+24U);
si3=i32_load(&i->m0,(U64)si3+12U);
si0=TF(i->t0,si3,U32 (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
si0=!(si0);
if(si0){
goto L99;
}
si0=1U;
l5=si0;
goto L1;
L99:;
si0=l1;
si1=-56U;
si0+=si1;
l1=si0;
si0=1U;
l5=si0;
si0=l0;
si1=l4;
si2=1U;
si0=f1909(i,si0,si1,si2);
l8=si0;
si0=l4;
si1=56U;
si0+=si1;
l4=si0;
si0=l8;
si0=!(si0);
if(si0){
goto L96;
}
goto L1;
}
L18:;
si0=l1;
si1=20U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si0=!(si0);
if(si0){
goto L100;
}
si0=1U;
l5=si0;
si0=l0;
si1=l2;
si2=1U;
si0=f1909(i,si0,si1,si2);
if(si0){
goto L1;
}
L100:;
si0=1U;
l5=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=1293889U;
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
si0=l1;
si0=i32_load(&i->m0,(U64)si0+24U);
l2=si0;
si0=!(si0);
if(si0){
goto L101;
}
si0=1U;
l5=si0;
si0=l0;
si1=l2;
si2=1U;
si0=f1909(i,si0,si1,si2);
if(si0){
goto L1;
}
L101:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+28U);
l1=si0;
si0=!(si0);
if(si0){
goto L2;
}
si0=1U;
l5=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=1293889U;
si2=1U;
si3=l0;
si3=i32_load(&i->m0,(U64)si3+24U);
si3=i32_load(&i->m0,(U64)si3+12U);
si0=TF(i->t0,si3,U32 (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
if(si0){
goto L1;
}
si0=1U;
l5=si0;
si0=l0;
si1=l1;
si2=1U;
si0=f1909(i,si0,si1,si2);
si0=!(si0);
if(si0){
goto L2;
}
goto L1;
L17:;
si0=1294372U;
si1=35U;
si2=1293756U;
f673(i,si0,si1,si2);
UNREACHABLE;
L16:;
si0=1U;
l5=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=1293874U;
si2=5U;
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
L15:;
si0=1U;
l5=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=1293886U;
si2=2U;
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
si0=1U;
l5=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=1293805U;
si2=1U;
si3=l0;
si3=i32_load(&i->m0,(U64)si3+24U);
si3=i32_load(&i->m0,(U64)si3+12U);
si0=TF(i->t0,si3,U32 (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
si0=!(si0);
if(si0){
goto L2;
}
goto L1;
L13:;
si0=1U;
l5=si0;
si0=l1;
si1=l0;
si0=f1715(i,si0,si1);
si0=!(si0);
if(si0){
goto L2;
}
goto L1;
L12:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0);
si1=22U;
si0=si0 != si1;
if(si0){
goto L102;
}
si0=1U;
l5=si0;
si0=l0;
si1=l2;
si2=20U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
si2=1U;
si0=f1909(i,si0,si1,si2);
if(si0){
goto L1;
}
si0=l0;
si1=l2;
si2=24U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
si2=l2;
si3=32U;
si2+=si3;
si2=i32_load(&i->m0,(U64)si2);
si0=f1908(i,si0,si1,si2);
if(si0){
goto L1;
}
goto L11;
L102:;
si0=1U;
l5=si0;
si0=l0;
si1=l2;
si2=1U;
si0=f1909(i,si0,si1,si2);
if(si0){
goto L1;
}
L11:;
si0=1U;
l5=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=1293590U;
si2=1U;
si3=l0;
si3=i32_load(&i->m0,(U64)si3+24U);
si3=i32_load(&i->m0,(U64)si3+12U);
si0=TF(i->t0,si3,U32 (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
si0=!(si0);
if(si0){
goto L2;
}
goto L1;
L10:;
si0=1U;
l5=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=1293772U;
si2=1U;
si3=l0;
si3=i32_load(&i->m0,(U64)si3+24U);
si3=i32_load(&i->m0,(U64)si3+12U);
si0=TF(i->t0,si3,U32 (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
si0=!(si0);
if(si0){
goto L2;
}
goto L1;
L9:;
si0=l2;
si1=l10;
si0=si0 == si1;
if(si0){
goto L5;
}
si0=l6;
si1=56U;
si0+=si1;
l1=si0;
si0=l9;
si1=l10;
si2=56U;
si1*=si2;
si0+=si1;
l4=si0;
L8:;
si0=1U;
l5=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=1293773U;
si2=2U;
si3=l0;
si3=i32_load(&i->m0,(U64)si3+24U);
si3=i32_load(&i->m0,(U64)si3+12U);
si0=TF(i->t0,si3,U32 (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
if(si0){
goto L1;
}
goto L6;
L7:;
si0=l2;
si1=l10;
si0=si0 == si1;
if(si0){
goto L5;
}
si0=l6;
si1=56U;
si0+=si1;
l1=si0;
si0=l9;
si1=l10;
si2=56U;
si1*=si2;
si0+=si1;
l4=si0;
L6:;
si0=l3;
si1=558U;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l3;
si1=l6;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l3;
sj1=1ULL;
i64_store(&i->m0,(U64)si0+36U,sj1);
si0=l3;
si1=1U;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l3;
si1=1293780U;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l3;
si1=l3;
si2=8U;
si1+=si2;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l0;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=l0;
si1=i32_load(&i->m0,(U64)si1+24U);
si2=l3;
si3=24U;
si2+=si3;
si0=f690(i,si0,si1,si2);
si0=!(si0);
if(si0){
goto L103;
}
si0=1U;
l5=si0;
goto L1;
L103:;
si0=l1;
si1=l4;
si0=si0 == si1;
if(si0){
goto L5;
}
L104:;
{
si0=l0;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=1293773U;
si2=2U;
si3=l0;
si3=i32_load(&i->m0,(U64)si3+24U);
si3=i32_load(&i->m0,(U64)si3+12U);
si0=TF(i->t0,si3,U32 (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
si0=!(si0);
if(si0){
goto L105;
}
si0=1U;
l5=si0;
goto L1;
L105:;
si0=l3;
si1=558U;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l3;
si1=l1;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l3;
sj1=1ULL;
i64_store(&i->m0,(U64)si0+36U,sj1);
si0=1U;
l5=si0;
si0=l3;
si1=1U;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l3;
si1=1293780U;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l3;
si1=l3;
si2=8U;
si1+=si2;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l0;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=l0;
si1=i32_load(&i->m0,(U64)si1+24U);
si2=l3;
si3=24U;
si2+=si3;
si0=f690(i,si0,si1,si2);
if(si0){
goto L1;
}
si0=l1;
si1=56U;
si0+=si1;
l1=si0;
si1=l4;
si0=si0 != si1;
if(si0){
goto L104;
}
}
L5:;
si0=1U;
l5=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=1293772U;
si2=1U;
si3=l0;
si3=i32_load(&i->m0,(U64)si3+24U);
si3=i32_load(&i->m0,(U64)si3+12U);
si0=TF(i->t0,si3,U32 (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
si0=!(si0);
if(si0){
goto L2;
}
goto L1;
L4:;
si0=l3;
si1=558U;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l3;
si1=l1;
si2=20U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l3;
sj1=1ULL;
i64_store(&i->m0,(U64)si0+36U,sj1);
si0=l3;
si1=2U;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l3;
si1=1293856U;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l0;
si1=24U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si0=l3;
si1=l3;
si2=8U;
si1+=si2;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=1U;
l5=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=l1;
si2=l3;
si3=24U;
si2+=si3;
si0=f690(i,si0,si1,si2);
if(si0){
goto L1;
}
goto L2;
L3:;
si0=l6;
si1=l2;
si2=255U;
si1&=si2;
si0=si0 >= si1;
if(si0){
goto L2;
}
si0=1U;
l5=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=1293590U;
si2=1U;
si3=l0;
si3=i32_load(&i->m0,(U64)si3+24U);
si3=i32_load(&i->m0,(U64)si3+12U);
si0=TF(i->t0,si3,U32 (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
if(si0){
goto L1;
}
L2:;
si0=0U;
l5=si0;
L1:;
si0=l3;
si1=48U;
si0+=si1;
i->g0=si0;
si0=l5;
L0:;
return si0;
}

U32 f1910(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
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
si1=48U;
si0-=si1;
l3=si0;
i->g0=si0;
si0=l2;
si1=20U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+8U);
l5=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+12U);
l6=si0;
si0=l3;
si1=l2;
si1=i32_load(&i->m0,(U64)si1);
l7=si1;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l3;
si1=l6;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l3;
si1=8U;
si0+=si1;
l8=si0;
si0=l7;
l9=si0;
si0=l5;
if(si0){
goto L8;
}
si0=l3;
si1=0U;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l3;
si1=4U;
si0+=si1;
l8=si0;
si0=l6;
l9=si0;
si0=l4;
si0=!(si0);
if(si0){
goto L7;
}
L8:;
si0=l8;
si1=l9;
si2=48U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l9;
si1=i32_load(&i->m0,(U64)si1+16U);
si2=l9;
si3=24U;
si2+=si3;
si2=i32_load(&i->m0,(U64)si2);
si3=l1;
si3=i32_load(&i->m0,(U64)si3+12U);
l8=si3;
si0=TF(i->t0,si3,U32 (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
if(si0){
goto L9;
}
si0=l9;
si0=i32_load(&i->m0,(U64)si0+28U);
l10=si0;
si0=!(si0);
if(si0){
goto L10;
}
si0=l3;
si1=558U;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l3;
si1=l10;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l3;
sj1=1ULL;
i64_store(&i->m0,(U64)si0+36U,sj1);
si0=l3;
si1=1U;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l3;
si1=1293548U;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l3;
si1=l3;
si2=16U;
si1+=si2;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l0;
si1=l1;
si2=l3;
si3=24U;
si2+=si3;
si0=f690(i,si0,si1,si2);
if(si0){
goto L9;
}
L10:;
si0=l9;
si0=i32_load(&i->m0,(U64)si0+44U);
si0=!(si0);
if(si0){
goto L11;
}
si0=l3;
si1=l9;
si2=44U;
si1+=si2;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l3;
si1=559U;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l3;
si1=l3;
si2=12U;
si1+=si2;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l3;
sj1=1ULL;
i64_store(&i->m0,(U64)si0+36U,sj1);
si0=l3;
si1=1U;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l3;
si1=1294048U;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l3;
si1=l3;
si2=16U;
si1+=si2;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l0;
si1=l1;
si2=l3;
si3=24U;
si2+=si3;
si0=f690(i,si0,si1,si2);
if(si0){
goto L9;
}
L11:;
si0=l5;
si1=1U;
si0=si0 != si1;
if(si0){
goto L12;
}
si0=l0;
si1=1293890U;
si2=3U;
si3=l8;
si0=TF(i->t0,si3,U32 (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
if(si0){
goto L9;
}
L12:;
si0=l7;
si1=l5;
si2=48U;
si1*=si2;
si0+=si1;
l7=si0;
si0=l6;
si1=l4;
si2=48U;
si1*=si2;
si0+=si1;
l4=si0;
si0=l5;
si1=-2U;
si0+=si1;
l6=si0;
L13:;
{
si0=l3;
si0=i32_load(&i->m0,(U64)si0+8U);
l9=si0;
si0=!(si0);
if(si0){
goto L15;
}
si0=l3;
si1=8U;
si0+=si1;
l5=si0;
si0=l9;
si1=l7;
si0=si0 != si1;
if(si0){
goto L14;
}
si0=l3;
si1=0U;
i32_store(&i->m0,(U64)si0+8U,si1);
L15:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+4U);
l9=si0;
si0=!(si0);
if(si0){
goto L16;
}
si0=l3;
si1=4U;
si0+=si1;
l5=si0;
si0=l9;
si1=l4;
si0=si0 != si1;
if(si0){
goto L14;
}
L16:;
si0=l2;
si1=32U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l8=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+36U);
l5=si0;
if(si0){
goto L17;
}
si0=l8;
si0=!(si0);
if(si0){
goto L5;
}
L17:;
si0=1U;
l9=si0;
si0=l0;
si1=1293773U;
si2=2U;
si3=l1;
si3=i32_load(&i->m0,(U64)si3+12U);
l6=si3;
si0=TF(i->t0,si3,U32 (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
if(si0){
goto L1;
}
si0=l5;
si1=0U;
si0=si0 != si1;
l9=si0;
goto L6;
L14:;
si0=l5;
si1=l9;
si2=48U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=1293773U;
si2=2U;
si3=l8;
si0=TF(i->t0,si3,U32 (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
if(si0){
goto L9;
}
si0=l0;
si1=l9;
si1=i32_load(&i->m0,(U64)si1+16U);
si2=l9;
si3=24U;
si2+=si3;
si2=i32_load(&i->m0,(U64)si2);
si3=l8;
si0=TF(i->t0,si3,U32 (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
if(si0){
goto L9;
}
si0=l9;
si0=i32_load(&i->m0,(U64)si0+28U);
l5=si0;
si0=!(si0);
if(si0){
goto L18;
}
si0=l3;
si1=558U;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l3;
si1=l5;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l3;
sj1=1ULL;
i64_store(&i->m0,(U64)si0+36U,sj1);
si0=l3;
si1=1U;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l3;
si1=1293548U;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l3;
si1=l3;
si2=16U;
si1+=si2;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l0;
si1=l1;
si2=l3;
si3=24U;
si2+=si3;
si0=f690(i,si0,si1,si2);
if(si0){
goto L9;
}
L18:;
si0=l9;
si0=i32_load(&i->m0,(U64)si0+44U);
si0=!(si0);
if(si0){
goto L19;
}
si0=l3;
si1=l9;
si2=44U;
si1+=si2;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l3;
si1=559U;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l3;
si1=l3;
si2=12U;
si1+=si2;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l3;
sj1=1ULL;
i64_store(&i->m0,(U64)si0+36U,sj1);
si0=l3;
si1=1U;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l3;
si1=1294048U;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l3;
si1=l3;
si2=16U;
si1+=si2;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l0;
si1=l1;
si2=l3;
si3=24U;
si2+=si3;
si0=f690(i,si0,si1,si2);
if(si0){
goto L9;
}
L19:;
si0=l6;
if(si0){
goto L20;
}
si0=l0;
si1=1293890U;
si2=3U;
si3=l8;
si0=TF(i->t0,si3,U32 (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
if(si0){
goto L9;
}
L20:;
si0=l6;
si1=-1U;
si0+=si1;
l6=si0;
goto L13;
}
L9:;
si0=1U;
l9=si0;
goto L1;
L7:;
si0=l2;
si1=32U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l8=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+36U);
l5=si0;
if(si0){
goto L21;
}
si0=l8;
si0=!(si0);
if(si0){
goto L4;
}
L21:;
si0=l5;
si1=0U;
si0=si0 != si1;
l9=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+12U);
l6=si0;
L6:;
si0=l0;
si1=1293885U;
si2=1U;
si3=l6;
si0=TF(i->t0,si3,U32 (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
si0=!(si0);
if(si0){
goto L22;
}
si0=1U;
l9=si0;
goto L1;
L22:;
si0=l9;
si0=!(si0);
if(si0){
goto L23;
}
si0=l0;
si1=l5;
si1=i32_load(&i->m0,(U64)si1+16U);
si2=l5;
si3=24U;
si2+=si3;
si2=i32_load(&i->m0,(U64)si2);
si3=l6;
si0=TF(i->t0,si3,U32 (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
si0=!(si0);
if(si0){
goto L24;
}
si0=1U;
l9=si0;
goto L1;
L24:;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+28U);
l9=si0;
si0=!(si0);
if(si0){
goto L23;
}
si0=l3;
si1=558U;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l3;
si1=l9;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l3;
sj1=1ULL;
i64_store(&i->m0,(U64)si0+36U,sj1);
si0=1U;
l9=si0;
si0=l3;
si1=1U;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l3;
si1=1293548U;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l3;
si1=l3;
si2=16U;
si1+=si2;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l0;
si1=l1;
si2=l3;
si3=24U;
si2+=si3;
si0=f690(i,si0,si1,si2);
if(si0){
goto L1;
}
L23:;
si0=l8;
si0=!(si0);
if(si0){
goto L5;
}
si0=l8;
si1=48U;
si0*=si1;
l5=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+24U);
si1=44U;
si0+=si1;
l8=si0;
L25:;
{
si0=l0;
si1=1293773U;
si2=2U;
si3=l6;
si0=TF(i->t0,si3,U32 (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
si0=!(si0);
if(si0){
goto L26;
}
si0=1U;
l9=si0;
goto L1;
L26:;
si0=l0;
si1=l8;
si2=-28U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
si2=l8;
si3=-20U;
si2+=si3;
si2=i32_load(&i->m0,(U64)si2);
si3=l6;
si0=TF(i->t0,si3,U32 (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
si0=!(si0);
if(si0){
goto L27;
}
si0=1U;
l9=si0;
goto L1;
L27:;
si0=l8;
si1=-16U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l9=si0;
si0=!(si0);
if(si0){
goto L28;
}
si0=l3;
si1=558U;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l3;
si1=l9;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l3;
sj1=1ULL;
i64_store(&i->m0,(U64)si0+36U,sj1);
si0=1U;
l9=si0;
si0=l3;
si1=1U;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l3;
si1=1293548U;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l3;
si1=l3;
si2=16U;
si1+=si2;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l0;
si1=l1;
si2=l3;
si3=24U;
si2+=si3;
si0=f690(i,si0,si1,si2);
if(si0){
goto L1;
}
L28:;
si0=l8;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L29;
}
si0=l3;
si1=l8;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l3;
si1=559U;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l3;
si1=l3;
si2=12U;
si1+=si2;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l3;
sj1=1ULL;
i64_store(&i->m0,(U64)si0+36U,sj1);
si0=1U;
l9=si0;
si0=l3;
si1=1U;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l3;
si1=1294048U;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l3;
si1=l3;
si2=16U;
si1+=si2;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l0;
si1=l1;
si2=l3;
si3=24U;
si2+=si3;
si0=f690(i,si0,si1,si2);
if(si0){
goto L1;
}
L29:;
si0=l8;
si1=48U;
si0+=si1;
l8=si0;
si0=l5;
si1=-48U;
si0+=si1;
l5=si0;
if(si0){
goto L25;
}
}
L5:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+40U);
l2=si0;
si0=!(si0);
if(si0){
goto L2;
}
si0=1U;
l9=si0;
si0=l0;
si1=1293773U;
si2=2U;
si3=l1;
si3=i32_load(&i->m0,(U64)si3+12U);
l8=si3;
si0=TF(i->t0,si3,U32 (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
si0=!(si0);
if(si0){
goto L3;
}
goto L1;
L4:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+40U);
l2=si0;
si0=!(si0);
if(si0){
goto L2;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+12U);
l8=si0;
L3:;
si0=1U;
l9=si0;
si0=l0;
si1=1293775U;
si2=2U;
si3=l8;
si0=TF(i->t0,si3,U32 (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
if(si0){
goto L1;
}
si0=l0;
si1=l1;
si2=l2;
si0=f1907(i,si0,si1,si2);
if(si0){
goto L1;
}
L2:;
si0=0U;
l9=si0;
L1:;
si0=l3;
si1=48U;
si0+=si1;
i->g0=si0;
si0=l9;
L0:;
return si0;
}

U32 f1911(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 l8=0;
U32 l9=0;
U32 l10=0;
U32 si0,si1,si2,si3,si4;
U64 sj1;
si0=i->g0;
si1=64U;
si0-=si1;
l4=si0;
i->g0=si0;
si0=l4;
si1=0U;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l4;
sj1=1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=40U;
si0+=si1;
si1=1294056U;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=3U;
i32_store8(&i->m0,(U64)si0+48U,si1);
si0=l4;
si1=32U;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l4;
si1=0U;
i32_store(&i->m0,(U64)si0+44U,si1);
si0=l4;
si1=0U;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l4;
si1=0U;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l4;
si1=l4;
i32_store(&i->m0,(U64)si0+36U,si1);
si0=l4;
si1=16U;
si0+=si1;
si1=l1;
si2=2U;
si0=f1909(i,si0,si1,si2);
if(si0){
goto L4;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+8U);
l5=si0;
si0=!(si0);
if(si0){
goto L6;
}
si0=l1;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=123U;
si0=si0 != si1;
if(si0){
goto L6;
}
si0=1293893U;
l6=si0;
si0=2U;
l7=si0;
goto L5;
L6:;
si0=1293664U;
l6=si0;
si0=1U;
l7=si0;
L5:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+4U);
l8=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+20U);
l9=si0;
si1=l6;
si2=l7;
si3=l0;
si4=24U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si3=i32_load(&i->m0,(U64)si3+12U);
l10=si3;
si0=TF(i->t0,si3,U32 (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
if(si0){
goto L7;
}
si0=l9;
si1=l1;
si2=l5;
si3=l10;
si0=TF(i->t0,si3,U32 (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
if(si0){
goto L7;
}
si0=l8;
si0=!(si0);
if(si0){
goto L8;
}
si0=l1;
f15271(i,si0);
L8:;
si0=l2;
si1=255U;
si0&=si1;
si1=255U;
si0=si0 == si1;
if(si0){
goto L3;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+20U);
l1=si0;
si1=1293895U;
si2=1U;
si3=l0;
si3=i32_load(&i->m0,(U64)si3+24U);
si3=i32_load(&i->m0,(U64)si3+12U);
l6=si3;
si0=TF(i->t0,si3,U32 (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
if(si0){
goto L2;
}
si0=l4;
si1=l2;
i32_store8(&i->m0,(U64)si0+56U,si1);
si0=l4;
si1=16U;
si0+=si1;
si1=l4;
si2=56U;
si1+=si2;
si2=1U;
f756(i,si0,si1,si2);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+16U);
if(si0){
goto L9;
}
si0=l1;
si1=l4;
si1=i32_load(&i->m0,(U64)si1+20U);
si2=l4;
si3=24U;
si2+=si3;
si2=i32_load(&i->m0,(U64)si2);
si3=l6;
si0=TF(i->t0,si3,U32 (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
si0=!(si0);
if(si0){
goto L3;
}
goto L2;
L9:;
si0=l4;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1+20U);
i64_store(&i->m0,(U64)si0,sj1);
si0=1293896U;
si1=43U;
si2=l4;
si3=1293940U;
si4=1293956U;
f712(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L7:;
si0=l8;
si0=!(si0);
if(si0){
goto L2;
}
si0=l1;
f15271(i,si0);
si0=1U;
l1=si0;
goto L1;
L4:;
si0=1294080U;
si1=55U;
si2=l4;
si3=56U;
si2+=si3;
si3=1294136U;
si4=1294228U;
f712(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L3:;
si0=l3;
si0=!(si0);
if(si0){
goto L10;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=1293889U;
si2=1U;
si3=l0;
si3=i32_load(&i->m0,(U64)si3+24U);
si3=i32_load(&i->m0,(U64)si3+12U);
si0=TF(i->t0,si3,U32 (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
if(si0){
goto L2;
}
si0=l0;
si1=l3;
si2=1U;
si0=f1915(i,si0,si1,si2);
if(si0){
goto L2;
}
L10:;
si0=0U;
l1=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=1293772U;
si2=1U;
si3=l0;
si3=i32_load(&i->m0,(U64)si3+24U);
si3=i32_load(&i->m0,(U64)si3+12U);
si0=TF(i->t0,si3,U32 (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
si0=!(si0);
if(si0){
goto L1;
}
L2:;
si0=1U;
l1=si0;
L1:;
si0=l4;
si1=64U;
si0+=si1;
i->g0=si0;
si0=l1;
L0:;
return si0;
}

U32 f1912(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
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
l4=si0;
i->g0=si0;
si0=l3;
if(si0){
goto L3;
}
si0=1U;
l5=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+20U);
l6=si0;
si1=1293972U;
si2=1U;
si3=l0;
si4=24U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
l7=si3;
si3=i32_load(&i->m0,(U64)si3+12U);
l8=si3;
si0=TF(i->t0,si3,U32 (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
if(si0){
goto L1;
}
si0=l4;
si1=0U;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l4;
sj1=1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=16U;
si0+=si1;
si1=24U;
si0+=si1;
si1=1294056U;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=3U;
i32_store8(&i->m0,(U64)si0+48U,si1);
si0=l4;
si1=32U;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l4;
si1=0U;
i32_store(&i->m0,(U64)si0+44U,si1);
si0=l4;
si1=0U;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l4;
si1=0U;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l2;
si1=56U;
si0*=si1;
l3=si0;
si0=l4;
si1=l4;
i32_store(&i->m0,(U64)si0+36U,si1);
L4:;
{
si0=l3;
si0=!(si0);
if(si0){
goto L2;
}
si0=l3;
si1=-56U;
si0+=si1;
l3=si0;
si0=l4;
si1=16U;
si0+=si1;
si1=l1;
si2=0U;
si0=f1915(i,si0,si1,si2);
l2=si0;
si0=l1;
si1=56U;
si0+=si1;
l1=si0;
si0=l2;
si0=!(si0);
if(si0){
goto L4;
}
}
si0=1294080U;
si1=55U;
si2=l4;
si3=56U;
si2+=si3;
si3=1294136U;
si4=1294228U;
f712(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L3:;
si0=l2;
si1=56U;
si0*=si1;
l3=si0;
L5:;
{
si0=l3;
si1=0U;
si0=si0 != si1;
l5=si0;
si0=l3;
si0=!(si0);
if(si0){
goto L1;
}
si0=l3;
si1=-56U;
si0+=si1;
l3=si0;
si0=l0;
si1=l1;
si2=1U;
si0=f1915(i,si0,si1,si2);
l2=si0;
si0=l1;
si1=56U;
si0+=si1;
l1=si0;
si0=l2;
si0=!(si0);
if(si0){
goto L5;
}
goto L1;
}
L2:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+4U);
l2=si0;
si0=l4;
si1=16U;
si0+=si1;
si1=l4;
si1=i32_load(&i->m0,(U64)si1);
l1=si1;
si2=l4;
si2=i32_load(&i->m0,(U64)si2+8U);
l3=si2;
si3=0U;
f2438(i,si0,si1,si2,si3);
si0=l4;
si1=32U;
si0+=si1;
si1=l3;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=l1;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=1U;
l5=si0;
si0=l6;
si1=34U;
si2=39U;
si3=l4;
si3=i32_load8_u(&i->m0,(U64)si3+24U);
si1=si3?si1:si2;
l9=si1;
si2=l7;
si2=i32_load(&i->m0,(U64)si2+16U);
l7=si2;
si0=TF(i->t0,si2,U32 (*)(rustpythonInstance*,U32,U32))(i,si0,si1);
if(si0){
goto L6;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0+16U);
si0=!(si0);
if(si0){
goto L9;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=l3;
si0=si0 == si1;
if(si0){
goto L8;
}
L9:;
si0=l4;
si1=16U;
si0+=si1;
si1=l0;
si0=f2106(i,si0,si1);
if(si0){
goto L6;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+20U);
l6=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+24U);
si0=i32_load(&i->m0,(U64)si0+16U);
l7=si0;
goto L7;
L8:;
si0=l6;
si1=l1;
si2=l3;
si3=l8;
si0=TF(i->t0,si3,U32 (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
if(si0){
goto L6;
}
L7:;
si0=l6;
si1=l9;
si2=l7;
si0=TF(i->t0,si2,U32 (*)(rustpythonInstance*,U32,U32))(i,si0,si1);
l5=si0;
L6:;
si0=l2;
si0=!(si0);
if(si0){
goto L1;
}
si0=l1;
f15271(i,si0);
L1:;
si0=l4;
si1=64U;
si0+=si1;
i->g0=si0;
si0=l5;
L0:;
return si0;
}

void f1913(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 si0,si1,si2,si3,si4;
U64 sj1;
si0=i->g0;
si1=64U;
si0-=si1;
l2=si0;
i->g0=si0;
si0=l2;
si1=0U;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l2;
sj1=1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=40U;
si0+=si1;
si1=1294056U;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=3U;
i32_store8(&i->m0,(U64)si0+48U,si1);
si0=l2;
si1=32U;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l2;
si1=0U;
i32_store(&i->m0,(U64)si0+44U,si1);
si0=l2;
si1=0U;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l2;
si1=0U;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l2;
si1=l2;
i32_store(&i->m0,(U64)si0+36U,si1);
si0=l1;
si1=l2;
si2=16U;
si1+=si2;
si0=f1715(i,si0,si1);
if(si0){
goto L1;
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
si0=l2;
si1=64U;
si0+=si1;
i->g0=si0;
goto L0;
L1:;
si0=1294080U;
si1=55U;
si2=l2;
si3=56U;
si2+=si3;
si3=1294136U;
si4=1294228U;
f712(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L0:;
}

void f1914(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U64 l7=0;
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
U32 si0,si1,si2,si3,si4;
U64 sj0,sj1;
si0=i->g0;
si1=80U;
si0-=si1;
l3=si0;
i->g0=si0;
si0=0U;
l4=si0;
si0=l3;
si1=0U;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l3;
sj1=1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=16U;
si0+=si1;
si1=l1;
si2=l2;
si3=1293879U;
si4=3U;
f760(i,si0,si1,si2,si3,si4);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+68U);
l5=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+64U);
l6=si0;
si0=l3;
sj0=i64_load(&i->m0,(U64)si0+24U);
l7=sj0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+16U);
if(si0){
goto L5;
}
si0=1U;
l8=si0;
si0=0U;
l9=si0;
sj0=l7;
sj1=71776119061217280ULL;
sj0&=sj1;
sj1=0ULL;
si0=sj0 != sj1;
if(si0){
goto L4;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0+20U);
l10=si0;
sj0=l7;
sj1=32ULL;
sj0>>=(sj1&63);
si0=(U32)(sj0);
l11=si0;
si0=1U;
l8=si0;
si0=0U;
l4=si0;
si0=0U;
l9=si0;
L6:;
{
si0=l5;
l12=si0;
si0=l10;
si0=!(si0);
if(si0){
goto L7;
}
si0=l5;
si1=l10;
si0=si0 > si1;
if(si0){
goto L9;
}
si0=l5;
si1=l10;
si0=si0 == si1;
if(si0){
goto L8;
}
goto L1;
L9:;
si0=l6;
si1=l10;
si0+=si1;
si0=i32_load8_s(&i->m0,(U64)si0);
si1=-64U;
si0=(U32)((I32)si0<(I32)si1);
if(si0){
goto L1;
}
L8:;
si0=l5;
si1=l10;
si0-=si1;
l12=si0;
L7:;
si0=l12;
si0=!(si0);
if(si0){
goto L12;
}
si0=l6;
si1=l10;
si0+=si1;
l13=si0;
si0=i32_load8_s(&i->m0,(U64)si0);
l12=si0;
si1=-1U;
si0=(U32)((I32)si0>(I32)si1);
if(si0){
goto L14;
}
si0=l13;
si0=i32_load8_u(&i->m0,(U64)si0+1U);
si1=63U;
si0&=si1;
l14=si0;
si0=l12;
si1=31U;
si0&=si1;
l15=si0;
si0=l12;
si1=-32U;
si0=si0 >= si1;
if(si0){
goto L15;
}
si0=l15;
si1=6U;
si0<<=(si1&31);
si1=l14;
si0|=si1;
l12=si0;
goto L13;
L15:;
si0=l14;
si1=6U;
si0<<=(si1&31);
si1=l13;
si1=i32_load8_u(&i->m0,(U64)si1+2U);
si2=63U;
si1&=si2;
si0|=si1;
l14=si0;
si0=l12;
si1=-16U;
si0=si0 >= si1;
if(si0){
goto L16;
}
si0=l14;
si1=l15;
si2=12U;
si1<<=(si2&31);
si0|=si1;
l12=si0;
goto L13;
L16:;
si0=l14;
si1=6U;
si0<<=(si1&31);
si1=l13;
si1=i32_load8_u(&i->m0,(U64)si1+3U);
si2=63U;
si1&=si2;
si0|=si1;
si1=l15;
si2=18U;
si1<<=(si2&31);
si2=1835008U;
si1&=si2;
si0|=si1;
l12=si0;
goto L13;
L14:;
si0=l12;
si1=255U;
si0&=si1;
l12=si0;
L13:;
si0=l11;
si1=255U;
si0&=si1;
if(si0){
goto L11;
}
si0=l12;
si1=1114112U;
si0=si0 == si1;
if(si0){
goto L4;
}
si0=1U;
l11=si0;
si0=l12;
si1=128U;
si0=si0 < si1;
if(si0){
goto L17;
}
si0=2U;
l11=si0;
si0=l12;
si1=2048U;
si0=si0 < si1;
if(si0){
goto L17;
}
si0=3U;
si1=4U;
si2=l12;
si3=65536U;
si2=si2 < si3;
si0=si2?si0:si1;
l11=si0;
L17:;
si0=l5;
l12=si0;
si0=l11;
si1=l10;
si0+=si1;
l10=si0;
si0=!(si0);
if(si0){
goto L18;
}
si0=l5;
si1=l10;
si0=si0 > si1;
if(si0){
goto L20;
}
si0=l5;
si1=l10;
si0=si0 != si1;
if(si0){
goto L1;
}
goto L19;
L20:;
si0=l6;
si1=l10;
si0+=si1;
si0=i32_load8_s(&i->m0,(U64)si0);
si1=-64U;
si0=(U32)((I32)si0<(I32)si1);
if(si0){
goto L1;
}
L19:;
si0=l5;
si1=l10;
si0-=si1;
l12=si0;
L18:;
si0=l12;
if(si0){
goto L21;
}
si0=0U;
l11=si0;
goto L10;
L21:;
si0=1U;
l11=si0;
si0=l6;
si1=l10;
si0+=si1;
si0=i32_load8_s(&i->m0,(U64)si0);
l12=si0;
si1=-1U;
si0=(U32)((I32)si0>(I32)si1);
if(si0){
goto L11;
}
si0=l12;
si1=-32U;
si0=si0 < si1;
goto L11;
L12:;
si0=l11;
si1=255U;
si0&=si1;
si0=!(si0);
if(si0){
goto L4;
}
L11:;
si0=l11;
si1=1U;
si0^=si1;
l11=si0;
L10:;
si0=l1;
si1=l9;
si0+=si1;
l14=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+4U);
l13=si0;
si1=l4;
si0-=si1;
si1=l10;
si2=l9;
si1-=si2;
l12=si1;
si0=si0 >= si1;
if(si0){
goto L22;
}
si0=l3;
si1=l4;
si2=l12;
f1864(i,si0,si1,si2);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+4U);
l13=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
l8=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+8U);
l4=si0;
L22:;
si0=l8;
si1=l4;
si0+=si1;
si1=l14;
si2=l12;
si0=f15390(i,si0,si1,si2);
si0=l3;
si1=l4;
si2=l12;
si1+=si2;
l12=si1;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l13;
si1=l12;
si0-=si1;
si1=4U;
si0=si0 > si1;
if(si0){
goto L23;
}
si0=l3;
si1=l12;
si2=5U;
f1864(i,si0,si1,si2);
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
l8=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+8U);
l12=si0;
L23:;
si0=l8;
si1=l12;
si0+=si1;
l4=si0;
si1=0U;
si1=i32_load(&i->m0,(U64)si1+1293874U);
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=4U;
si0+=si1;
si1=0U;
si1=i32_load8_u(&i->m0,(U64)si1+1293878U);
i32_store8(&i->m0,(U64)si0,si1);
si0=l3;
si1=l12;
si2=5U;
si1+=si2;
l4=si1;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l10;
l9=si0;
goto L6;
}
L5:;
si0=1U;
l8=si0;
si0=0U;
l9=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+76U);
l11=si0;
si1=-1U;
si0+=si1;
l16=si0;
si1=l3;
si1=i32_load(&i->m0,(U64)si1+44U);
l10=si1;
si0+=si1;
l12=si0;
si1=l5;
si0=si0 >= si1;
if(si0){
goto L4;
}
si0=l11;
si1=l3;
si1=i32_load(&i->m0,(U64)si1+40U);
l17=si1;
si0-=si1;
l18=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+52U);
l15=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+72U);
l14=si0;
si1=-1U;
si0+=si1;
l19=si0;
si0=l6;
si1=l3;
si1=i32_load(&i->m0,(U64)si1+32U);
l20=si1;
si0+=si1;
l21=si0;
si0=l14;
si1=l20;
si0+=si1;
l22=si0;
si0=l11;
si1=l20;
si0-=si1;
l23=si0;
si0=1U;
si1=l20;
si0-=si1;
l24=si0;
si0=l6;
si1=l11;
si2=1U;
si1<<=(si2&31);
si2=-1U;
si1+=si2;
l25=si1;
si0+=si1;
l26=si0;
si0=l20;
si1=-1U;
si0+=si1;
l27=si0;
si1=l11;
si0=si0 < si1;
si1=1U;
si0&=si1;
l28=si0;
si0=1U;
l8=si0;
si0=0U;
l4=si0;
si0=0U;
l9=si0;
L24:;
{
si0=l15;
si1=-1U;
si0=si0 != si1;
if(si0){
goto L27;
}
L28:;
{
sj0=l7;
si1=l6;
si2=l12;
si1+=si2;
sj1=i64_load8_u(&i->m0,(U64)si1);
sj0>>=(sj1&63);
sj1=1ULL;
sj0&=sj1;
si0=!(sj0);
si0=!(si0);
if(si0){
goto L29;
}
si0=l10;
si1=l11;
si0+=si1;
l10=si0;
si1=l16;
si0+=si1;
l12=si0;
si1=l5;
si0=si0 < si1;
if(si0){
goto L28;
}
goto L4;
L29:;
si0=l10;
l12=si0;
si0=l22;
l13=si0;
si0=l23;
l15=si0;
si0=l20;
si1=l11;
si0=si0 >= si1;
if(si0){
goto L31;
}
L32:;
{
si0=l20;
si1=l12;
si0+=si1;
si1=l5;
si0=si0 < si1;
if(si0){
goto L33;
}
si0=l20;
l29=si0;
goto L2;
L33:;
si0=l13;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=l21;
si2=l12;
si1+=si2;
si1=i32_load8_u(&i->m0,(U64)si1);
si0=si0 == si1;
if(si0){
goto L34;
}
si0=l12;
si1=1U;
si0+=si1;
l10=si0;
goto L30;
L34:;
si0=l12;
si1=1U;
si0+=si1;
l12=si0;
si0=l13;
si1=1U;
si0+=si1;
l13=si0;
si0=l15;
si1=-1U;
si0+=si1;
l15=si0;
if(si0){
goto L32;
}
}
L31:;
si0=l28;
si0=!(si0);
if(si0){
goto L36;
}
si0=l6;
si1=l10;
si0+=si1;
l13=si0;
si0=l20;
l12=si0;
L37:;
{
si0=l12;
if(si0){
goto L38;
}
si0=-1U;
l15=si0;
goto L25;
L38:;
si0=l10;
si1=l12;
si0+=si1;
l15=si0;
si1=-1U;
si0+=si1;
si1=l5;
si0=si0 >= si1;
if(si0){
goto L35;
}
si0=l19;
si1=l12;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=l12;
si2=-1U;
si1+=si2;
l12=si1;
si2=l13;
si1+=si2;
si1=i32_load8_u(&i->m0,(U64)si1);
si0=si0 == si1;
if(si0){
goto L37;
}
}
si0=l10;
si1=l17;
si0+=si1;
l10=si0;
goto L30;
L36:;
si0=-1U;
l15=si0;
si0=l20;
si0=!(si0);
if(si0){
goto L25;
}
si0=l27;
l12=si0;
goto L3;
L35:;
si0=l15;
si1=-1U;
si0+=si1;
l13=si0;
goto L26;
L30:;
si0=l10;
si1=l16;
si0+=si1;
l12=si0;
si1=l5;
si0=si0 < si1;
if(si0){
goto L28;
}
goto L4;
}
L27:;
L39:;
{
sj0=l7;
si1=l6;
si2=l12;
si1+=si2;
sj1=i64_load8_u(&i->m0,(U64)si1);
sj0>>=(sj1&63);
si0=(U32)(sj0);
si1=1U;
si0&=si1;
if(si0){
goto L40;
}
si0=l10;
si1=l11;
si0+=si1;
si1=l16;
si0+=si1;
si1=l5;
si0=si0 >= si1;
if(si0){
goto L4;
}
L41:;
{
sj0=l7;
si1=l26;
si2=l10;
si1+=si2;
sj1=i64_load8_u(&i->m0,(U64)si1);
sj0>>=(sj1&63);
sj1=1ULL;
sj0&=sj1;
si0=!(sj0);
if(si0){
goto L42;
}
si0=l11;
si1=l10;
si0+=si1;
l10=si0;
si0=0U;
l15=si0;
goto L40;
L42:;
si0=l25;
si1=l10;
si2=l11;
si1+=si2;
l10=si1;
si0+=si1;
si1=l5;
si0=si0 < si1;
if(si0){
goto L41;
}
goto L4;
}
L40:;
si0=l20;
si1=l15;
si2=l20;
si3=l15;
si2=si2 > si3;
si0=si2?si0:si1;
l29=si0;
si1=l11;
si0=si0 >= si1;
if(si0){
goto L44;
}
si0=l6;
si1=l10;
si0+=si1;
l13=si0;
si0=l29;
l12=si0;
L45:;
{
si0=l10;
si1=l12;
si0+=si1;
si1=l5;
si0=si0 >= si1;
if(si0){
goto L2;
}
si0=l14;
si1=l12;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=l13;
si2=l12;
si1+=si2;
si1=i32_load8_u(&i->m0,(U64)si1);
si0=si0 == si1;
if(si0){
goto L46;
}
si0=l24;
si1=l10;
si0+=si1;
si1=l12;
si0+=si1;
l10=si0;
si0=0U;
l15=si0;
goto L43;
L46:;
si0=l11;
si1=l12;
si2=1U;
si1+=si2;
l12=si1;
si0=si0 != si1;
if(si0){
goto L45;
}
}
L44:;
si0=l20;
l12=si0;
L47:;
{
si0=l15;
si1=l12;
si0=si0 < si1;
if(si0){
goto L48;
}
si0=0U;
l15=si0;
goto L25;
L48:;
si0=l12;
si1=-1U;
si0+=si1;
l12=si0;
si1=l11;
si0=si0 >= si1;
if(si0){
goto L3;
}
si0=l12;
si1=l10;
si0+=si1;
l13=si0;
si1=l5;
si0=si0 >= si1;
if(si0){
goto L26;
}
si0=l14;
si1=l12;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=l6;
si2=l13;
si1+=si2;
si1=i32_load8_u(&i->m0,(U64)si1);
si0=si0 == si1;
if(si0){
goto L47;
}
}
si0=l10;
si1=l17;
si0+=si1;
l10=si0;
si0=l18;
l15=si0;
L43:;
si0=l10;
si1=l16;
si0+=si1;
l12=si0;
si1=l5;
si0=si0 < si1;
if(si0){
goto L39;
}
goto L4;
}
L26:;
si0=l13;
si1=l5;
si2=1294340U;
f663(i,si0,si1,si2);
UNREACHABLE;
L25:;
si0=l1;
si1=l9;
si0+=si1;
l29=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+4U);
l13=si0;
si1=l4;
si0-=si1;
si1=l10;
si2=l9;
si1-=si2;
l12=si1;
si0=si0 >= si1;
if(si0){
goto L49;
}
si0=l3;
si1=l4;
si2=l12;
f1864(i,si0,si1,si2);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+4U);
l13=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
l8=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+8U);
l4=si0;
L49:;
si0=l10;
si1=l11;
si0+=si1;
l9=si0;
si0=l8;
si1=l4;
si0+=si1;
si1=l29;
si2=l12;
si0=f15390(i,si0,si1,si2);
si0=l3;
si1=l4;
si2=l12;
si1+=si2;
l10=si1;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l13;
si1=l10;
si0-=si1;
si1=4U;
si0=si0 > si1;
if(si0){
goto L50;
}
si0=l3;
si1=l10;
si2=5U;
f1864(i,si0,si1,si2);
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
l8=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+8U);
l10=si0;
L50:;
si0=l8;
si1=l10;
si0+=si1;
l12=si0;
si1=0U;
si1=i32_load(&i->m0,(U64)si1+1293874U);
i32_store(&i->m0,(U64)si0,si1);
si0=l12;
si1=4U;
si0+=si1;
si1=0U;
si1=i32_load8_u(&i->m0,(U64)si1+1293878U);
i32_store8(&i->m0,(U64)si0,si1);
si0=l3;
si1=l10;
si2=5U;
si1+=si2;
l4=si1;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l9;
l10=si0;
si0=l9;
si1=l16;
si0+=si1;
l12=si0;
si1=l5;
si0=si0 < si1;
if(si0){
goto L24;
}
}
L4:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+4U);
si1=l4;
si0-=si1;
si1=l2;
si2=l9;
si1-=si2;
l5=si1;
si0=si0 >= si1;
if(si0){
goto L51;
}
si0=l3;
si1=l4;
si2=l5;
f1864(i,si0,si1,si2);
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
l8=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+8U);
l4=si0;
L51:;
si0=l8;
si1=l4;
si0+=si1;
si1=l1;
si2=l9;
si1+=si2;
si2=l5;
si0=f15390(i,si0,si1,si2);
si0=l0;
si1=8U;
si0+=si1;
si1=l4;
si2=l5;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l3;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=80U;
si0+=si1;
i->g0=si0;
goto L0;
L3:;
si0=l12;
si1=l11;
si2=1294324U;
f663(i,si0,si1,si2);
UNREACHABLE;
L2:;
si0=l5;
si1=l29;
si2=l10;
si1+=si2;
l10=si1;
si2=l5;
si3=l10;
si2=si2 > si3;
si0=si2?si0:si1;
si1=l5;
si2=1294356U;
f663(i,si0,si1,si2);
UNREACHABLE;
L1:;
si0=l6;
si1=l5;
si2=l10;
si3=l5;
si4=1294408U;
f737(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L0:;
}

U32 f1915(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
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
si1=-17U;
si0+=si1;
switch(si0){
case 0:
goto L3;
case 1:
goto L4;
case 2:
goto L2;
default:
goto L5;
}
L5:;
si0=1293973U;
si1=40U;
si2=1294032U;
f673(i,si0,si1,si2);
UNREACHABLE;
L4:;
si0=l0;
si1=l1;
si2=20U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
si2=l1;
si3=28U;
si2+=si3;
si2=i32_load(&i->m0,(U64)si2);
si3=l2;
si0=f1912(i,si0,si1,si2,si3);
l1=si0;
goto L1;
L3:;
si0=l0;
si1=l1;
si2=20U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
si2=l1;
si3=28U;
si2+=si3;
si2=i32_load8_u(&i->m0,(U64)si2);
si3=l1;
si4=24U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si0=f1911(i,si0,si1,si2,si3);
l1=si0;
goto L1;
L2:;
si0=l4;
si1=4U;
si0=si0 == si1;
if(si0){
goto L6;
}
si0=1293973U;
si1=40U;
si2=1294016U;
f673(i,si0,si1,si2);
UNREACHABLE;
L6:;
si0=l3;
si1=16U;
si0+=si1;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+4U);
si2=l1;
si3=12U;
si2+=si3;
si2=i32_load(&i->m0,(U64)si2);
si3=123U;
si4=1288086U;
f1692(i,si0,si1,si2,si3,si4);
si0=l3;
si1=l3;
si1=i32_load(&i->m0,(U64)si1+16U);
l1=si1;
si2=l3;
si2=i32_load(&i->m0,(U64)si2+24U);
si3=125U;
si4=1288088U;
f1692(i,si0,si1,si2,si3,si4);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+20U);
si0=!(si0);
if(si0){
goto L7;
}
si0=l1;
f15271(i,si0);
L7:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=l3;
si1=i32_load(&i->m0,(U64)si1);
l5=si1;
si2=l3;
si2=i32_load(&i->m0,(U64)si2+8U);
si3=l0;
si4=24U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si3=i32_load(&i->m0,(U64)si3+12U);
si0=TF(i->t0,si3,U32 (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
l1=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+4U);
si0=!(si0);
if(si0){
goto L1;
}
si0=l5;
f15271(i,si0);
L1:;
si0=l3;
si1=32U;
si0+=si1;
i->g0=si0;
si0=l1;
L0:;
return si0;
}

void f1916(rustpythonInstance*i,U32 l0) {
L0:;
}

void f1917(rustpythonInstance*i,U32 l0) {
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

void f1918(rustpythonInstance*i,U32 l0) {
L0:;
}

U32 f1919(rustpythonInstance*i,U32 l0,U32 l1) {
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
f1858(i,si0,si1);
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
f1864(i,si0,si1,si2);
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

U32 f1920(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
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
f1864(i,si0,si1,si2);
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

void f1921(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 si0,si1,si2,si3;
si0=1294672U;
l2=si0;
si0=8U;
l3=si0;
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
switch(si0){
case 0:
goto L1;
case 1:
goto L29;
case 2:
goto L1;
case 3:
goto L1;
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
case 10:
goto L22;
case 11:
goto L21;
case 12:
goto L20;
case 13:
goto L19;
case 14:
goto L19;
case 15:
goto L18;
case 16:
goto L17;
case 17:
goto L16;
case 18:
goto L15;
case 19:
goto L14;
case 20:
goto L13;
case 21:
goto L12;
case 22:
goto L11;
case 23:
goto L10;
case 24:
goto L9;
case 25:
goto L8;
case 26:
goto L7;
default:
goto L1;
}
L29:;
si0=1294656U;
l2=si0;
si0=16U;
l3=si0;
goto L1;
L28:;
si0=1294680U;
l2=si0;
si0=6U;
l3=si0;
goto L1;
L27:;
si0=1294686U;
l2=si0;
si0=22U;
l3=si0;
goto L1;
L26:;
si0=1294708U;
l2=si0;
si0=12U;
l3=si0;
goto L1;
L25:;
si0=1294720U;
l2=si0;
si0=11U;
l3=si0;
goto L1;
L24:;
si0=1294731U;
l2=si0;
si0=18U;
l3=si0;
goto L1;
L23:;
si0=1294749U;
l2=si0;
si0=17U;
l3=si0;
goto L1;
L22:;
si0=1294766U;
l2=si0;
si0=18U;
l3=si0;
goto L1;
L21:;
si0=1294784U;
l2=si0;
si0=20U;
l3=si0;
goto L1;
L20:;
si0=1294804U;
l2=si0;
si0=16U;
l3=si0;
goto L1;
L19:;
si0=1294820U;
l2=si0;
si0=16U;
l3=si0;
goto L1;
L18:;
si0=1294836U;
l2=si0;
si0=10U;
l3=si0;
goto L1;
L17:;
si0=1294846U;
l2=si0;
si0=13U;
l3=si0;
goto L1;
L16:;
si0=1294859U;
l2=si0;
si0=19U;
l3=si0;
goto L1;
L15:;
si0=l1;
si1=28U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=56U;
si0*=si1;
l5=si0;
si0=l1;
si1=20U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
L30:;
{
si0=l5;
si0=!(si0);
if(si0){
goto L2;
}
si0=l5;
si1=-56U;
si0+=si1;
l5=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
si0=1294859U;
l2=si0;
si0=19U;
l3=si0;
si0=l1;
si1=56U;
si0+=si1;
l1=si0;
si0=l4;
si1=29U;
si0=si0 != si1;
if(si0){
goto L30;
}
goto L1;
}
L14:;
si0=4U;
l3=si0;
si0=1294885U;
l2=si0;
si0=l4;
si1=-2U;
si0+=si1;
l5=si0;
si1=4U;
si2=l5;
si3=9U;
si2=si2 < si3;
si0=si2?si0:si1;
l5=si0;
switch(si0){
case 0:
goto L1;
case 1:
goto L5;
case 2:
goto L2;
case 3:
goto L2;
case 4:
goto L2;
case 5:
goto L4;
case 6:
goto L2;
case 7:
goto L2;
case 8:
goto L3;
default:
goto L1;
}
L13:;
si0=1294911U;
l2=si0;
si0=9U;
l3=si0;
goto L1;
L12:;
si0=1294920U;
l2=si0;
si0=9U;
l3=si0;
goto L1;
L11:;
si0=1294929U;
l2=si0;
si0=7U;
l3=si0;
goto L1;
L10:;
si0=1294936U;
l2=si0;
si0=4U;
l3=si0;
goto L1;
L9:;
si0=1294940U;
l2=si0;
si0=4U;
l3=si0;
goto L1;
L8:;
si0=1294898U;
l2=si0;
goto L6;
L7:;
si0=1294944U;
l2=si0;
L6:;
si0=5U;
l3=si0;
goto L1;
L5:;
si0=1294894U;
si1=1294889U;
si2=l1;
si2=i32_load8_u(&i->m0,(U64)si2+4U);
l3=si2;
si0=si2?si0:si1;
l2=si0;
si0=4U;
si1=5U;
si2=l3;
si0=si2?si0:si1;
l3=si0;
goto L1;
L4:;
si0=1294898U;
l2=si0;
si0=l5;
l3=si0;
goto L1;
L3:;
si0=1294903U;
l2=si0;
si0=l5;
l3=si0;
goto L1;
L2:;
si0=1294878U;
l2=si0;
si0=7U;
l3=si0;
L1:;
si0=l0;
si1=l3;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l2;
i32_store(&i->m0,(U64)si0,si1);
L0:;
}

U32 f1922(rustpythonInstance*i,U32 l0,U32 l1) {
U32 si0,si1,si2;
si0=l1;
si1=l0;
si2=1U;
si0=f1909(i,si0,si1,si2);
L0:;
return si0;
}

U32 f1923(rustpythonInstance*i,U32 l0,U32 l1) {
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
si2=20U;
si1+=si2;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l1;
si1=1297524U;
si2=10U;
si3=1294952U;
si4=5U;
si5=l0;
si6=1294960U;
si7=1296398U;
si8=4U;
si9=l0;
si10=16U;
si9+=si10;
si10=1296404U;
si11=1297534U;
si12=3U;
si13=l2;
si14=12U;
si13+=si14;
si14=1297104U;
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

U32 f1924(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 si0,si1,si2,si3,si4,si5,si6,si7,si8,si9,si10,si11,si12,si13,si14,si15,si16,si17,si18;
si0=i->g0;
si1=16U;
si0-=si1;
l2=si0;
i->g0=si0;
si0=l2;
si1=l0;
si1=i32_load(&i->m0,(U64)si1);
l0=si1;
si2=24U;
si1+=si2;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l1;
si1=1297808U;
si2=12U;
si3=1294952U;
si4=5U;
si5=l0;
si6=1294960U;
si7=1297820U;
si8=3U;
si9=l0;
si10=16U;
si9+=si10;
si10=1296404U;
si11=1296516U;
si12=5U;
si13=l0;
si14=20U;
si13+=si14;
si14=1296404U;
si15=1297689U;
si16=10U;
si17=l2;
si18=12U;
si17+=si18;
si18=1297700U;
si0=f743(i,si0,si1,si2,si3,si4,si5,si6,si7,si8,si9,si10,si11,si12,si13,si14,si15,si16,si17,si18);
l0=si0;
si0=l2;
si1=16U;
si0+=si1;
i->g0=si0;
si0=l0;
L0:;
return si0;
}

U32 f1925(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 si0,si1,si2,si3,si4,si5,si6,si7,si8,si9,si10,si11,si12,si13,si14,si15,si16,si17,si18;
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
si1=1296392U;
si2=6U;
si3=1294952U;
si4=5U;
si5=l0;
si6=1294960U;
si7=1296398U;
si8=4U;
si9=l0;
si10=16U;
si9+=si10;
si10=1296404U;
si11=1296420U;
si12=4U;
si13=l0;
si14=20U;
si13+=si14;
si14=1296424U;
si15=1296440U;
si16=6U;
si17=l2;
si18=12U;
si17+=si18;
si18=1296448U;
si0=f743(i,si0,si1,si2,si3,si4,si5,si6,si7,si8,si9,si10,si11,si12,si13,si14,si15,si16,si17,si18);
l0=si0;
si0=l2;
si1=16U;
si0+=si1;
i->g0=si0;
si0=l0;
L0:;
return si0;
}

U32 f1926(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 l3=0;
U32 si0,si1,si2,si3,si4;
si0=i->g0;
si1=64U;
si0-=si1;
l2=si0;
i->g0=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
l0=si0;
si0=l2;
si1=44U;
si0+=si1;
si1=1296476U;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=36U;
si0+=si1;
si1=1296424U;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=28U;
si0+=si1;
si1=1297868U;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=20U;
si0+=si1;
si1=1296840U;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=12U;
si0+=si1;
si1=1294980U;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=l0;
si2=52U;
si1+=si2;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l2;
si1=l0;
si2=40U;
si1+=si2;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l2;
si1=l0;
si2=28U;
si1+=si2;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l2;
si1=l0;
si2=16U;
si1+=si2;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l2;
si1=1294960U;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l2;
si1=l0;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=l0;
si2=64U;
si1+=si2;
i32_store(&i->m0,(U64)si0+52U,si1);
si0=l2;
si1=l2;
si2=52U;
si1+=si2;
i32_store(&i->m0,(U64)si0+40U,si1);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=1297884U;
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
i32_store8(&i->m0,(U64)si0+61U,si1);
si0=l2;
si1=l0;
i32_store8(&i->m0,(U64)si0+60U,si1);
si0=l2;
si1=l1;
i32_store(&i->m0,(U64)si0+56U,si1);
si0=l2;
si1=56U;
si0+=si1;
si1=1294952U;
si2=5U;
si3=l2;
si4=1104132U;
si0=f715(i,si0,si1,si2,si3,si4);
si1=1294936U;
si2=4U;
si3=l2;
si4=8U;
si3+=si4;
si4=1104132U;
si0=f715(i,si0,si1,si2,si3,si4);
si1=1297847U;
si2=5U;
si3=l2;
si4=16U;
si3+=si4;
si4=1104132U;
si0=f715(i,si0,si1,si2,si3,si4);
si1=1296856U;
si2=8U;
si3=l2;
si4=24U;
si3+=si4;
si4=1104132U;
si0=f715(i,si0,si1,si2,si3,si4);
si1=1296420U;
si2=4U;
si3=l2;
si4=32U;
si3+=si4;
si4=1104132U;
si0=f715(i,si0,si1,si2,si3,si4);
si1=1297852U;
si2=14U;
si3=l2;
si4=40U;
si3+=si4;
si4=1104132U;
si0=f715(i,si0,si1,si2,si3,si4);
l3=si0;
si0=l2;
si0=i32_load8_u(&i->m0,(U64)si0+60U);
l1=si0;
si0=l2;
si0=i32_load8_u(&i->m0,(U64)si0+61U);
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
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
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
si1=64U;
si0+=si1;
i->g0=si0;
si0=l0;
L0:;
return si0;
}

U32 f1927(rustpythonInstance*i,U32 l0,U32 l1) {
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
si2=16U;
si1+=si2;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=1297554U;
si2=10U;
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
si1=1294952U;
si2=5U;
si3=l0;
si4=1294960U;
si0=f715(i,si0,si1,si2,si3,si4);
si1=1297547U;
si2=7U;
si3=l2;
si4=4U;
si3+=si4;
si4=1296476U;
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

U32 f1928(rustpythonInstance*i,U32 l0,U32 l1) {
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
si0=i32_load(&i->m0,(U64)si0+4U);
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
si1=80U;
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
si2=1300240U;
f717(i,si0,si1,si2);
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

U32 f1929(rustpythonInstance*i,U32 l0,U32 l1) {
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
si2=28U;
si1+=si2;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l1;
si1=1296944U;
si2=8U;
si3=1294952U;
si4=5U;
si5=l0;
si6=1294960U;
si7=1296952U;
si8=2U;
si9=l0;
si10=16U;
si9+=si10;
si10=1294980U;
si11=1296922U;
si12=3U;
si13=l2;
si14=12U;
si13+=si14;
si14=1296928U;
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


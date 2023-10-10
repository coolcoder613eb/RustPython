#include "w2c2_base.h"

#include "rustpython.h"

void f13830(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
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
f13831(i,si0,si1,si2,si3);
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

void f13831(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
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
si0=l4;
si1=l3;
si2=l2;
f5936(i,si0,si1,si2);
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
si0=l3;
si0=i32_load(&i->m0,(U64)si0+28U);
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
goto L1;
}
si0=l3;
si1=64U;
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
si0=si0 == si1;
if(si0){
goto L1;
}
si0=l3;
si1=72U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l9=si0;
si0=l3;
si1=68U;
si0+=si1;
l8=si0;
si0=i32_load(&i->m0,(U64)si0);
l10=si0;
si0=l8;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=76U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l8=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+56U);
si0=!(si0);
if(si0){
goto L5;
}
si0=l3;
si1=60U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l11=si0;
si0=l4;
si1=24U;
si0+=si1;
si1=l8;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=20U;
si0+=si1;
si1=l11;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=16U;
si0+=si1;
si1=l9;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=l10;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l4;
si1=l7;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l4;
si1=l6;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l4;
si1=8U;
si0+=si1;
si1=l2;
si0=f8254(i,si0,si1);
l2=si0;
goto L4;
L5:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+88U);
si1=1272U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l11=si0;
si1=l11;
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
si0=l4;
si1=24U;
si0+=si1;
si1=l8;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=20U;
si0+=si1;
si1=l9;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=16U;
si0+=si1;
si1=l11;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=l10;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l4;
si1=l7;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l4;
si1=l6;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l4;
si1=8U;
si0+=si1;
si1=l2;
si0=f8253(i,si0,si1);
l2=si0;
L4:;
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
si1=32U;
si0+=si1;
i->g0=si0;
goto L0;
L1:;
f15042(i);
UNREACHABLE;
L0:;
}

void f13832(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U32 l5=0;
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
si0=1U;
l3=si0;
si0=l4;
si1=8U;
si0+=si1;
si1=8U;
si0+=si1;
si1=l2;
si0=f5689(i,si0,si1);
l5=si0;
if(si0){
goto L1;
}
si0=0U;
l3=si0;
si0=l2;
si1=96U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=404U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=l2;
si0=f12593(i,si0,si1);
l5=si0;
L1:;
si0=l0;
si1=l5;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l3;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=80U;
si0+=si1;
i->g0=si0;
L0:;
}

void f13833(rustpythonInstance*i,U32 l0) {
U32 l1=0;
U32 si0,si1,si2;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
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
goto L1;
}
si0=l0;
f8996(i,si0);
L1:;
L0:;
}

void f13834(rustpythonInstance*i,U32 l0) {
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
si1=20U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si0=!(si0);
if(si0){
goto L32;
}
si0=l2;
f13834(i,si0);
si0=l2;
f15271(i,si0);
L32:;
si0=l0;
si1=24U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si0=!(si0);
if(si0){
goto L33;
}
si0=l2;
f13834(i,si0);
si0=l2;
f15271(i,si0);
L33:;
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
f13834(i,si0);
si0=l2;
f15271(i,si0);
goto L0;
L30:;
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
goto L34;
}
si0=l3;
l2=si0;
L35:;
{
si0=l2;
f11156(i,si0);
si0=l2;
si1=56U;
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
L29:;
si0=l0;
si1=20U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
f13834(i,si0);
si0=l2;
f15271(i,si0);
si0=l0;
si1=24U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
f13834(i,si0);
si0=l2;
f15271(i,si0);
goto L0;
L28:;
si0=l0;
si1=20U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
f13834(i,si0);
si0=l2;
f15271(i,si0);
si0=l0;
si1=24U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
f13834(i,si0);
si0=l2;
f15271(i,si0);
goto L0;
L27:;
si0=l0;
si1=20U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
f13834(i,si0);
si0=l2;
f15271(i,si0);
goto L0;
L26:;
si0=l0;
si1=20U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
f11226(i,si0);
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
f11226(i,si0);
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
si1=20U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L39;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+16U);
f15271(i,si0);
L39:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+28U);
si0=!(si0);
if(si0){
goto L40;
}
si0=l1;
si1=28U;
si0+=si1;
f13835(i,si0);
L40:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+32U);
l3=si0;
si0=!(si0);
if(si0){
goto L41;
}
si0=l1;
si1=36U;
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
f11226(i,si0);
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
si1=20U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L44;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+16U);
f15271(i,si0);
L44:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+28U);
si0=!(si0);
if(si0){
goto L45;
}
si0=l1;
si1=28U;
si0+=si1;
f13835(i,si0);
L45:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+32U);
l3=si0;
si0=!(si0);
if(si0){
goto L46;
}
si0=l1;
si1=36U;
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
si1=24U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
f13834(i,si0);
si0=l2;
f15271(i,si0);
goto L0;
L25:;
si0=l0;
si1=20U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
f13834(i,si0);
si0=l2;
f15271(i,si0);
si0=l0;
si1=24U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
f13834(i,si0);
si0=l2;
f15271(i,si0);
si0=l0;
si1=28U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
f13834(i,si0);
si0=l2;
f15271(i,si0);
goto L0;
L24:;
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
f11156(i,si0);
L49:;
si0=l2;
si1=56U;
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
si1=24U;
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
goto L51;
}
si0=l3;
l2=si0;
L52:;
{
si0=l2;
f11156(i,si0);
si0=l2;
si1=56U;
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
L23:;
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
goto L53;
}
si0=l3;
l2=si0;
L54:;
{
si0=l2;
f11156(i,si0);
si0=l2;
si1=56U;
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
L22:;
si0=l0;
si1=20U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
f13834(i,si0);
si0=l2;
f15271(i,si0);
si0=l0;
si1=24U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
si0=l0;
si1=32U;
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
si2=7U;
si1<<=(si2&31);
si0+=si1;
l2=si0;
f11156(i,si0);
si0=l2;
si1=56U;
si0+=si1;
f11156(i,si0);
si0=l2;
si1=112U;
si0+=si1;
l6=si0;
si0=l2;
si1=120U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si0=!(si0);
if(si0){
goto L57;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0+112U);
l2=si0;
L58:;
{
si0=l2;
f11156(i,si0);
si0=l2;
si1=56U;
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
si1=28U;
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
si1=20U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
f13834(i,si0);
si0=l2;
f15271(i,si0);
si0=l0;
si1=24U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
si0=l0;
si1=32U;
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
si2=7U;
si1<<=(si2&31);
si0+=si1;
l2=si0;
f11156(i,si0);
si0=l2;
si1=56U;
si0+=si1;
f11156(i,si0);
si0=l2;
si1=112U;
si0+=si1;
l6=si0;
si0=l2;
si1=120U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si0=!(si0);
if(si0){
goto L62;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0+112U);
l2=si0;
L63:;
{
si0=l2;
f11156(i,si0);
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
si1=28U;
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
si1=20U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
f13834(i,si0);
si0=l2;
f15271(i,si0);
si0=l0;
si1=24U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
f13834(i,si0);
si0=l2;
f15271(i,si0);
si0=l0;
si1=28U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
si0=l0;
si1=36U;
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
si2=7U;
si1<<=(si2&31);
si0+=si1;
l2=si0;
f11156(i,si0);
si0=l2;
si1=56U;
si0+=si1;
f11156(i,si0);
si0=l2;
si1=112U;
si0+=si1;
l6=si0;
si0=l2;
si1=120U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si0=!(si0);
if(si0){
goto L67;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0+112U);
l2=si0;
L68:;
{
si0=l2;
f11156(i,si0);
si0=l2;
si1=56U;
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
L19:;
si0=l0;
si1=20U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
f13834(i,si0);
si0=l2;
f15271(i,si0);
si0=l0;
si1=24U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
si0=l0;
si1=32U;
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
si2=7U;
si1<<=(si2&31);
si0+=si1;
l2=si0;
f11156(i,si0);
si0=l2;
si1=56U;
si0+=si1;
f11156(i,si0);
si0=l2;
si1=112U;
si0+=si1;
l6=si0;
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
f11156(i,si0);
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
si1=28U;
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
si1=20U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
f13834(i,si0);
si0=l2;
f15271(i,si0);
goto L0;
L17:;
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
f13834(i,si0);
si0=l2;
f15271(i,si0);
goto L0;
L16:;
si0=l0;
si1=20U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
f13834(i,si0);
si0=l2;
f15271(i,si0);
goto L0;
L15:;
si0=l0;
si1=20U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
f13834(i,si0);
si0=l2;
f15271(i,si0);
si0=l0;
si1=28U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L75;
}
si0=l0;
si1=24U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
f15271(i,si0);
L75:;
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
goto L76;
}
si0=l3;
l2=si0;
L77:;
{
si0=l2;
f11156(i,si0);
si0=l2;
si1=56U;
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
L14:;
si0=l0;
si1=20U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
f13834(i,si0);
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
goto L78;
}
si0=l3;
l2=si0;
L79:;
{
si0=l2;
f11156(i,si0);
si0=l2;
si1=56U;
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
si1=28U;
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
si1=36U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si0=l0;
si1=44U;
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
si1=72U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=!(si0);
if(si0){
goto L83;
}
si0=l2;
si1=76U;
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
f11156(i,si0);
si0=l2;
si1=88U;
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
si1=40U;
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
si1=20U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
f13834(i,si0);
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
f13834(i,si0);
si0=l2;
f15271(i,si0);
goto L0;
L12:;
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
goto L84;
}
si0=l3;
l2=si0;
L85:;
{
si0=l2;
f11156(i,si0);
si0=l2;
si1=56U;
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
f11158(i,si0);
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
si1=20U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
f13834(i,si0);
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
L9:;
si0=l0;
si1=20U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
f13834(i,si0);
si0=l2;
f15271(i,si0);
si0=l0;
si1=24U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
f13834(i,si0);
si0=l2;
f15271(i,si0);
goto L0;
L8:;
si0=l0;
si1=20U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
f13834(i,si0);
si0=l2;
f15271(i,si0);
goto L0;
L7:;
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
L6:;
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
goto L92;
}
si0=l3;
l2=si0;
L93:;
{
si0=l2;
f11156(i,si0);
si0=l2;
si1=56U;
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
L5:;
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
goto L94;
}
si0=l3;
l2=si0;
L95:;
{
si0=l2;
f11156(i,si0);
si0=l2;
si1=56U;
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
si1=24U;
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
L1:;
L0:;
}

void f13835(rustpythonInstance*i,U32 l0) {
U32 si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
l0=si0;
f13834(i,si0);
si0=l0;
f15271(i,si0);
L0:;
}

void f13836(rustpythonInstance*i,U32 l0) {
U32 l1=0;
U32 l2=0;
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 l8=0;
U32 si0,si1,si2;
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
si0=0U;
l3=si0;
L2:;
{
si0=l1;
si1=l3;
si2=12U;
si1*=si2;
si0+=si1;
l4=si0;
si0=i32_load(&i->m0,(U64)si0+8U);
l5=si0;
si0=!(si0);
if(si0){
goto L3;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
L4:;
{
si0=l6;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
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
goto L5;
}
si0=l7;
f7690(i,si0);
L5:;
si0=l6;
si1=4U;
si0+=si1;
l6=si0;
si0=l5;
si1=-1U;
si0+=si1;
l5=si0;
if(si0){
goto L4;
}
}
L3:;
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
goto L6;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
f15271(i,si0);
L6:;
si0=l3;
si1=l2;
si0=si0 != si1;
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

void f13837(rustpythonInstance*i,U32 l0) {
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
goto L11;
}
si0=l1;
l3=si0;
L12:;
{
si0=l3;
f11161(i,si0);
si0=l3;
si1=64U;
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
si1=24U;
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
si1=20U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
f13834(i,si0);
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
f11158(i,si0);
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
f11161(i,si0);
si0=l3;
si1=64U;
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
goto L2;
}
si0=l1;
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
goto L21;
}
si0=l1;
l3=si0;
L22:;
{
si0=l3;
f11156(i,si0);
si0=l3;
si1=56U;
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
si1=24U;
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
goto L24;
}
si0=l1;
l3=si0;
L25:;
{
si0=l3;
f11161(i,si0);
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
si1=36U;
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
si1=44U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
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
si0=l3;
f15271(i,si0);
goto L0;
L5:;
si0=l0;
si1=20U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
f13834(i,si0);
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
goto L27;
}
si0=l1;
l3=si0;
L28:;
{
si0=l3;
f11161(i,si0);
si0=l3;
si1=64U;
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
si1=28U;
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
si1=40U;
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
goto L34;
}
si0=l1;
l3=si0;
L35:;
{
si0=l3;
f11161(i,si0);
si0=l3;
si1=64U;
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
si1=52U;
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
si1=20U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
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
si0=l3;
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
goto L36;
}
si0=l3;
f13837(i,si0);
si0=l3;
f15271(i,si0);
L36:;
si0=l0;
si1=24U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=!(si0);
if(si0){
goto L2;
}
si0=l0;
si1=28U;
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

void f13838(rustpythonInstance*i,U32 l0) {
U32 l1=0;
U32 si0,si1,si2;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
l0=si0;
si1=l0;
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
si0=l0;
f7690(i,si0);
L1:;
L0:;
}

void f13839(rustpythonInstance*i,U32 l0) {
L0:;
}

void f13840(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 si0,si1;
si0=l1;
si0=!(si0);
if(si0){
goto L1;
}
si0=0U;
l2=si0;
L2:;
{
si0=l2;
si1=80U;
si0*=si1;
l3=si0;
si0=l2;
si1=1U;
si0+=si1;
l2=si0;
si0=l0;
si1=l3;
si0+=si1;
l3=si0;
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
si0=l3;
si1=24U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L28;
}
si0=l3;
si1=20U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
f15271(i,si0);
L28:;
si0=l3;
si1=32U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
f11226(i,si0);
si0=l4;
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L29;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
f15271(i,si0);
L29:;
si0=l4;
si1=12U;
si0+=si1;
l5=si0;
f11226(i,si0);
si0=l4;
si1=16U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L30;
}
si0=l5;
si0=i32_load(&i->m0,(U64)si0);
f15271(i,si0);
L30:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+36U);
l5=si0;
si0=!(si0);
if(si0){
goto L31;
}
si0=l5;
si1=20U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L32;
}
si0=l5;
si0=i32_load(&i->m0,(U64)si0+16U);
f15271(i,si0);
L32:;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+28U);
l6=si0;
si0=!(si0);
if(si0){
goto L33;
}
si0=l6;
f13834(i,si0);
si0=l6;
f15271(i,si0);
L33:;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+32U);
l6=si0;
si0=!(si0);
if(si0){
goto L34;
}
si0=l5;
si1=36U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L34;
}
si0=l6;
f15271(i,si0);
L34:;
si0=l5;
f15271(i,si0);
L31:;
si0=l4;
si1=24U;
si0+=si1;
l5=si0;
f11226(i,si0);
si0=l4;
si1=28U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L35;
}
si0=l5;
si0=i32_load(&i->m0,(U64)si0);
f15271(i,si0);
L35:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+40U);
l5=si0;
si0=!(si0);
if(si0){
goto L36;
}
si0=l5;
si1=20U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L37;
}
si0=l5;
si0=i32_load(&i->m0,(U64)si0+16U);
f15271(i,si0);
L37:;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+28U);
l6=si0;
si0=!(si0);
if(si0){
goto L38;
}
si0=l6;
f13834(i,si0);
si0=l6;
f15271(i,si0);
L38:;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+32U);
l6=si0;
si0=!(si0);
if(si0){
goto L39;
}
si0=l5;
si1=36U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L39;
}
si0=l6;
f15271(i,si0);
L39:;
si0=l5;
f15271(i,si0);
L36:;
si0=l4;
f15271(i,si0);
si0=l3;
si1=36U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si0=l3;
si1=44U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si0=!(si0);
if(si0){
goto L40;
}
si0=l6;
l4=si0;
L41:;
{
si0=l4;
f11159(i,si0);
si0=l4;
si1=80U;
si0+=si1;
l4=si0;
si0=l5;
si1=-1U;
si0+=si1;
l5=si0;
if(si0){
goto L41;
}
}
L40:;
si0=l3;
si1=40U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L42;
}
si0=l6;
f15271(i,si0);
L42:;
si0=l3;
si1=48U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si0=l3;
si1=56U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si0=!(si0);
if(si0){
goto L43;
}
si0=l6;
l4=si0;
L44:;
{
si0=l4;
f11156(i,si0);
si0=l4;
si1=56U;
si0+=si1;
l4=si0;
si0=l5;
si1=-1U;
si0+=si1;
l5=si0;
if(si0){
goto L44;
}
}
L43:;
si0=l3;
si1=52U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L45;
}
si0=l6;
f15271(i,si0);
L45:;
si0=l3;
si1=60U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
si0=!(si0);
if(si0){
goto L46;
}
si0=l4;
f13834(i,si0);
si0=l4;
f15271(i,si0);
L46:;
si0=l3;
si1=64U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
si0=!(si0);
if(si0){
goto L3;
}
si0=l3;
si1=68U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L3;
}
si0=l4;
f15271(i,si0);
goto L3;
L26:;
si0=l3;
si1=24U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L47;
}
si0=l3;
si1=20U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
f15271(i,si0);
L47:;
si0=l3;
si1=32U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
f11226(i,si0);
si0=l4;
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L48;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
f15271(i,si0);
L48:;
si0=l4;
si1=12U;
si0+=si1;
l5=si0;
f11226(i,si0);
si0=l4;
si1=16U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L49;
}
si0=l5;
si0=i32_load(&i->m0,(U64)si0);
f15271(i,si0);
L49:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+36U);
l5=si0;
si0=!(si0);
if(si0){
goto L50;
}
si0=l5;
si1=20U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L51;
}
si0=l5;
si0=i32_load(&i->m0,(U64)si0+16U);
f15271(i,si0);
L51:;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+28U);
l6=si0;
si0=!(si0);
if(si0){
goto L52;
}
si0=l6;
f13834(i,si0);
si0=l6;
f15271(i,si0);
L52:;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+32U);
l6=si0;
si0=!(si0);
if(si0){
goto L53;
}
si0=l5;
si1=36U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L53;
}
si0=l6;
f15271(i,si0);
L53:;
si0=l5;
f15271(i,si0);
L50:;
si0=l4;
si1=24U;
si0+=si1;
l5=si0;
f11226(i,si0);
si0=l4;
si1=28U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L54;
}
si0=l5;
si0=i32_load(&i->m0,(U64)si0);
f15271(i,si0);
L54:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+40U);
l5=si0;
si0=!(si0);
if(si0){
goto L55;
}
si0=l5;
si1=20U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L56;
}
si0=l5;
si0=i32_load(&i->m0,(U64)si0+16U);
f15271(i,si0);
L56:;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+28U);
l6=si0;
si0=!(si0);
if(si0){
goto L57;
}
si0=l6;
f13834(i,si0);
si0=l6;
f15271(i,si0);
L57:;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+32U);
l6=si0;
si0=!(si0);
if(si0){
goto L58;
}
si0=l5;
si1=36U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L58;
}
si0=l6;
f15271(i,si0);
L58:;
si0=l5;
f15271(i,si0);
L55:;
si0=l4;
f15271(i,si0);
si0=l3;
si1=36U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si0=l3;
si1=44U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si0=!(si0);
if(si0){
goto L59;
}
si0=l6;
l4=si0;
L60:;
{
si0=l4;
f11159(i,si0);
si0=l4;
si1=80U;
si0+=si1;
l4=si0;
si0=l5;
si1=-1U;
si0+=si1;
l5=si0;
if(si0){
goto L60;
}
}
L59:;
si0=l3;
si1=40U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L61;
}
si0=l6;
f15271(i,si0);
L61:;
si0=l3;
si1=48U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si0=l3;
si1=56U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si0=!(si0);
if(si0){
goto L62;
}
si0=l6;
l4=si0;
L63:;
{
si0=l4;
f11156(i,si0);
si0=l4;
si1=56U;
si0+=si1;
l4=si0;
si0=l5;
si1=-1U;
si0+=si1;
l5=si0;
if(si0){
goto L63;
}
}
L62:;
si0=l3;
si1=52U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L64;
}
si0=l6;
f15271(i,si0);
L64:;
si0=l3;
si1=60U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
si0=!(si0);
if(si0){
goto L65;
}
si0=l4;
f13834(i,si0);
si0=l4;
f15271(i,si0);
L65:;
si0=l3;
si1=64U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
si0=!(si0);
if(si0){
goto L3;
}
si0=l3;
si1=68U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L3;
}
si0=l4;
f15271(i,si0);
goto L3;
L25:;
si0=l3;
si1=24U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L66;
}
si0=l3;
si1=20U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
f15271(i,si0);
L66:;
si0=l3;
si1=32U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si0=l3;
si1=40U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si0=!(si0);
if(si0){
goto L67;
}
si0=l6;
l4=si0;
L68:;
{
si0=l4;
f11156(i,si0);
si0=l4;
si1=56U;
si0+=si1;
l4=si0;
si0=l5;
si1=-1U;
si0+=si1;
l5=si0;
if(si0){
goto L68;
}
}
L67:;
si0=l3;
si1=36U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L69;
}
si0=l6;
f15271(i,si0);
L69:;
si0=l3;
si1=44U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
si0=l3;
si1=52U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si0=!(si0);
if(si0){
goto L70;
}
si0=l7;
l4=si0;
L71:;
{
si0=l4;
si1=72U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si0=!(si0);
if(si0){
goto L72;
}
si0=l4;
si1=76U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L72;
}
si0=l6;
f15271(i,si0);
L72:;
si0=l4;
f11156(i,si0);
si0=l4;
si1=88U;
si0+=si1;
l4=si0;
si0=l5;
si1=-1U;
si0+=si1;
l5=si0;
if(si0){
goto L71;
}
}
L70:;
si0=l3;
si1=48U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L73;
}
si0=l7;
f15271(i,si0);
L73:;
si0=l3;
si1=56U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si0=l3;
si1=64U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si0=!(si0);
if(si0){
goto L74;
}
si0=l6;
l4=si0;
L75:;
{
si0=l4;
f11159(i,si0);
si0=l4;
si1=80U;
si0+=si1;
l4=si0;
si0=l5;
si1=-1U;
si0+=si1;
l5=si0;
if(si0){
goto L75;
}
}
L74:;
si0=l3;
si1=60U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L76;
}
si0=l6;
f15271(i,si0);
L76:;
si0=l3;
si1=68U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si0=l3;
si1=76U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si0=!(si0);
if(si0){
goto L77;
}
si0=l6;
l4=si0;
L78:;
{
si0=l4;
f11156(i,si0);
si0=l4;
si1=56U;
si0+=si1;
l4=si0;
si0=l5;
si1=-1U;
si0+=si1;
l5=si0;
if(si0){
goto L78;
}
}
L77:;
si0=l3;
si1=72U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L3;
}
si0=l6;
f15271(i,si0);
goto L3;
L24:;
si0=l3;
si1=20U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=!(si0);
if(si0){
goto L3;
}
si0=l3;
f13834(i,si0);
si0=l3;
f15271(i,si0);
goto L3;
L23:;
si0=l3;
si1=20U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si0=l3;
si1=28U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si0=!(si0);
if(si0){
goto L79;
}
si0=l6;
l4=si0;
L80:;
{
si0=l4;
f11156(i,si0);
si0=l4;
si1=56U;
si0+=si1;
l4=si0;
si0=l5;
si1=-1U;
si0+=si1;
l5=si0;
if(si0){
goto L80;
}
}
L79:;
si0=l3;
si1=24U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L3;
}
si0=l6;
f15271(i,si0);
goto L3;
L22:;
si0=l3;
si1=20U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si0=l3;
si1=28U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si0=!(si0);
if(si0){
goto L81;
}
si0=l6;
l4=si0;
L82:;
{
si0=l4;
f11156(i,si0);
si0=l4;
si1=56U;
si0+=si1;
l4=si0;
si0=l5;
si1=-1U;
si0+=si1;
l5=si0;
if(si0){
goto L82;
}
}
L81:;
si0=l3;
si1=24U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L83;
}
si0=l6;
f15271(i,si0);
L83:;
si0=l3;
si1=32U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
f13834(i,si0);
si0=l4;
f15271(i,si0);
si0=l3;
si1=36U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
si0=!(si0);
if(si0){
goto L3;
}
si0=l3;
si1=40U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L3;
}
si0=l4;
f15271(i,si0);
goto L3;
L21:;
si0=l3;
si1=24U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
si0=l3;
si1=20U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
f13834(i,si0);
si0=l3;
f15271(i,si0);
si0=l4;
f13834(i,si0);
si0=l4;
f15271(i,si0);
goto L3;
L20:;
si0=l3;
si1=20U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
f13834(i,si0);
si0=l4;
f15271(i,si0);
si0=l3;
si1=24U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
f13834(i,si0);
si0=l4;
f15271(i,si0);
si0=l3;
si1=28U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=!(si0);
if(si0){
goto L3;
}
si0=l3;
f13834(i,si0);
si0=l3;
f15271(i,si0);
goto L3;
L19:;
si0=l3;
si1=20U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
f13834(i,si0);
si0=l4;
f15271(i,si0);
si0=l3;
si1=24U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
f13834(i,si0);
si0=l4;
f15271(i,si0);
si0=l3;
si1=28U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si0=l3;
si1=36U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si0=!(si0);
if(si0){
goto L84;
}
si0=l6;
l4=si0;
L85:;
{
si0=l4;
f11159(i,si0);
si0=l4;
si1=80U;
si0+=si1;
l4=si0;
si0=l5;
si1=-1U;
si0+=si1;
l5=si0;
if(si0){
goto L85;
}
}
L84:;
si0=l3;
si1=32U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L86;
}
si0=l6;
f15271(i,si0);
L86:;
si0=l3;
si1=40U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si0=l3;
si1=48U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si0=!(si0);
if(si0){
goto L87;
}
si0=l6;
l4=si0;
L88:;
{
si0=l4;
f11159(i,si0);
si0=l4;
si1=80U;
si0+=si1;
l4=si0;
si0=l5;
si1=-1U;
si0+=si1;
l5=si0;
if(si0){
goto L88;
}
}
L87:;
si0=l3;
si1=44U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L89;
}
si0=l6;
f15271(i,si0);
L89:;
si0=l3;
si1=52U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
si0=!(si0);
if(si0){
goto L3;
}
si0=l3;
si1=56U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L3;
}
si0=l4;
f15271(i,si0);
goto L3;
L18:;
si0=l3;
si1=20U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
f13834(i,si0);
si0=l4;
f15271(i,si0);
si0=l3;
si1=24U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
f13834(i,si0);
si0=l4;
f15271(i,si0);
si0=l3;
si1=28U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si0=l3;
si1=36U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si0=!(si0);
if(si0){
goto L90;
}
si0=l6;
l4=si0;
L91:;
{
si0=l4;
f11159(i,si0);
si0=l4;
si1=80U;
si0+=si1;
l4=si0;
si0=l5;
si1=-1U;
si0+=si1;
l5=si0;
if(si0){
goto L91;
}
}
L90:;
si0=l3;
si1=32U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L92;
}
si0=l6;
f15271(i,si0);
L92:;
si0=l3;
si1=40U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si0=l3;
si1=48U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si0=!(si0);
if(si0){
goto L93;
}
si0=l6;
l4=si0;
L94:;
{
si0=l4;
f11159(i,si0);
si0=l4;
si1=80U;
si0+=si1;
l4=si0;
si0=l5;
si1=-1U;
si0+=si1;
l5=si0;
if(si0){
goto L94;
}
}
L93:;
si0=l3;
si1=44U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L95;
}
si0=l6;
f15271(i,si0);
L95:;
si0=l3;
si1=52U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
si0=!(si0);
if(si0){
goto L3;
}
si0=l3;
si1=56U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L3;
}
si0=l4;
f15271(i,si0);
goto L3;
L17:;
si0=l3;
si1=20U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
f13834(i,si0);
si0=l4;
f15271(i,si0);
si0=l3;
si1=24U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si0=l3;
si1=32U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si0=!(si0);
if(si0){
goto L96;
}
si0=l6;
l4=si0;
L97:;
{
si0=l4;
f11159(i,si0);
si0=l4;
si1=80U;
si0+=si1;
l4=si0;
si0=l5;
si1=-1U;
si0+=si1;
l5=si0;
if(si0){
goto L97;
}
}
L96:;
si0=l3;
si1=28U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L98;
}
si0=l6;
f15271(i,si0);
L98:;
si0=l3;
si1=36U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si0=l3;
si1=44U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si0=!(si0);
if(si0){
goto L99;
}
si0=l6;
l4=si0;
L100:;
{
si0=l4;
f11159(i,si0);
si0=l4;
si1=80U;
si0+=si1;
l4=si0;
si0=l5;
si1=-1U;
si0+=si1;
l5=si0;
if(si0){
goto L100;
}
}
L99:;
si0=l3;
si1=40U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L3;
}
si0=l6;
f15271(i,si0);
goto L3;
L16:;
si0=l3;
si1=20U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
f13834(i,si0);
si0=l4;
f15271(i,si0);
si0=l3;
si1=24U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si0=l3;
si1=32U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si0=!(si0);
if(si0){
goto L101;
}
si0=l6;
l4=si0;
L102:;
{
si0=l4;
f11159(i,si0);
si0=l4;
si1=80U;
si0+=si1;
l4=si0;
si0=l5;
si1=-1U;
si0+=si1;
l5=si0;
if(si0){
goto L102;
}
}
L101:;
si0=l3;
si1=28U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L103;
}
si0=l6;
f15271(i,si0);
L103:;
si0=l3;
si1=36U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si0=l3;
si1=44U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si0=!(si0);
if(si0){
goto L104;
}
si0=l6;
l4=si0;
L105:;
{
si0=l4;
f11159(i,si0);
si0=l4;
si1=80U;
si0+=si1;
l4=si0;
si0=l5;
si1=-1U;
si0+=si1;
l5=si0;
if(si0){
goto L105;
}
}
L104:;
si0=l3;
si1=40U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L3;
}
si0=l6;
f15271(i,si0);
goto L3;
L15:;
si0=l3;
si1=20U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
si0=l3;
si1=28U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si0=!(si0);
if(si0){
goto L106;
}
si0=l7;
l4=si0;
L107:;
{
si0=l4;
f11156(i,si0);
si0=l4;
si1=56U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si0=!(si0);
if(si0){
goto L108;
}
si0=l5;
f11156(i,si0);
si0=l5;
f15271(i,si0);
L108:;
si0=l4;
si1=64U;
si0+=si1;
l4=si0;
si0=l6;
si1=-1U;
si0+=si1;
l6=si0;
if(si0){
goto L107;
}
}
L106:;
si0=l3;
si1=24U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L109;
}
si0=l7;
f15271(i,si0);
L109:;
si0=l3;
si1=32U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si0=l3;
si1=40U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si0=!(si0);
if(si0){
goto L110;
}
si0=l6;
l4=si0;
L111:;
{
si0=l4;
f11159(i,si0);
si0=l4;
si1=80U;
si0+=si1;
l4=si0;
si0=l5;
si1=-1U;
si0+=si1;
l5=si0;
if(si0){
goto L111;
}
}
L110:;
si0=l3;
si1=36U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L112;
}
si0=l6;
f15271(i,si0);
L112:;
si0=l3;
si1=44U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
si0=!(si0);
if(si0){
goto L3;
}
si0=l3;
si1=48U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L3;
}
si0=l4;
f15271(i,si0);
goto L3;
L14:;
si0=l3;
si1=20U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
si0=l3;
si1=28U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si0=!(si0);
if(si0){
goto L113;
}
si0=l7;
l4=si0;
L114:;
{
si0=l4;
f11156(i,si0);
si0=l4;
si1=56U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si0=!(si0);
if(si0){
goto L115;
}
si0=l5;
f11156(i,si0);
si0=l5;
f15271(i,si0);
L115:;
si0=l4;
si1=64U;
si0+=si1;
l4=si0;
si0=l6;
si1=-1U;
si0+=si1;
l6=si0;
if(si0){
goto L114;
}
}
L113:;
si0=l3;
si1=24U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L116;
}
si0=l7;
f15271(i,si0);
L116:;
si0=l3;
si1=32U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si0=l3;
si1=40U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si0=!(si0);
if(si0){
goto L117;
}
si0=l6;
l4=si0;
L118:;
{
si0=l4;
f11159(i,si0);
si0=l4;
si1=80U;
si0+=si1;
l4=si0;
si0=l5;
si1=-1U;
si0+=si1;
l5=si0;
if(si0){
goto L118;
}
}
L117:;
si0=l3;
si1=36U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L119;
}
si0=l6;
f15271(i,si0);
L119:;
si0=l3;
si1=44U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
si0=!(si0);
if(si0){
goto L3;
}
si0=l3;
si1=48U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L3;
}
si0=l4;
f15271(i,si0);
goto L3;
L13:;
si0=l3;
si1=20U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
f13834(i,si0);
si0=l4;
f15271(i,si0);
si0=l3;
si1=24U;
si0+=si1;
l4=si0;
f11220(i,si0);
si0=l3;
si1=28U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L3;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
f15271(i,si0);
goto L3;
L12:;
si0=l3;
si1=24U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
si0=l3;
si1=20U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=!(si0);
if(si0){
goto L120;
}
si0=l3;
f13834(i,si0);
si0=l3;
f15271(i,si0);
L120:;
si0=l4;
si0=!(si0);
if(si0){
goto L3;
}
si0=l4;
f13834(i,si0);
si0=l4;
f15271(i,si0);
goto L3;
L11:;
si0=l3;
si1=20U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si0=l3;
si1=28U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si0=!(si0);
if(si0){
goto L121;
}
si0=l6;
l4=si0;
L122:;
{
si0=l4;
f11159(i,si0);
si0=l4;
si1=80U;
si0+=si1;
l4=si0;
si0=l5;
si1=-1U;
si0+=si1;
l5=si0;
if(si0){
goto L122;
}
}
L121:;
si0=l3;
si1=24U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L123;
}
si0=l6;
f15271(i,si0);
L123:;
si0=l3;
si1=32U;
si0+=si1;
l4=si0;
f11227(i,si0);
si0=l3;
si1=36U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L124;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
f15271(i,si0);
L124:;
si0=l3;
si1=44U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si0=l3;
si1=52U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si0=!(si0);
if(si0){
goto L125;
}
si0=l6;
l4=si0;
L126:;
{
si0=l4;
f11159(i,si0);
si0=l4;
si1=80U;
si0+=si1;
l4=si0;
si0=l5;
si1=-1U;
si0+=si1;
l5=si0;
if(si0){
goto L126;
}
}
L125:;
si0=l3;
si1=48U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L127;
}
si0=l6;
f15271(i,si0);
L127:;
si0=l3;
si1=56U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si0=l3;
si1=64U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si0=!(si0);
if(si0){
goto L128;
}
si0=l6;
l4=si0;
L129:;
{
si0=l4;
f11159(i,si0);
si0=l4;
si1=80U;
si0+=si1;
l4=si0;
si0=l5;
si1=-1U;
si0+=si1;
l5=si0;
if(si0){
goto L129;
}
}
L128:;
si0=l3;
si1=60U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L3;
}
si0=l6;
f15271(i,si0);
goto L3;
L10:;
si0=l3;
si1=20U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si0=l3;
si1=28U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si0=!(si0);
if(si0){
goto L130;
}
si0=l6;
l4=si0;
L131:;
{
si0=l4;
f11159(i,si0);
si0=l4;
si1=80U;
si0+=si1;
l4=si0;
si0=l5;
si1=-1U;
si0+=si1;
l5=si0;
if(si0){
goto L131;
}
}
L130:;
si0=l3;
si1=24U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L132;
}
si0=l6;
f15271(i,si0);
L132:;
si0=l3;
si1=32U;
si0+=si1;
l4=si0;
f11227(i,si0);
si0=l3;
si1=36U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L133;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
f15271(i,si0);
L133:;
si0=l3;
si1=44U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si0=l3;
si1=52U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si0=!(si0);
if(si0){
goto L134;
}
si0=l6;
l4=si0;
L135:;
{
si0=l4;
f11159(i,si0);
si0=l4;
si1=80U;
si0+=si1;
l4=si0;
si0=l5;
si1=-1U;
si0+=si1;
l5=si0;
if(si0){
goto L135;
}
}
L134:;
si0=l3;
si1=48U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L136;
}
si0=l6;
f15271(i,si0);
L136:;
si0=l3;
si1=56U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si0=l3;
si1=64U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si0=!(si0);
if(si0){
goto L137;
}
si0=l6;
l4=si0;
L138:;
{
si0=l4;
f11159(i,si0);
si0=l4;
si1=80U;
si0+=si1;
l4=si0;
si0=l5;
si1=-1U;
si0+=si1;
l5=si0;
if(si0){
goto L138;
}
}
L137:;
si0=l3;
si1=60U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L3;
}
si0=l6;
f15271(i,si0);
goto L3;
L9:;
si0=l3;
si1=24U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
si0=l3;
si1=20U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
f13834(i,si0);
si0=l3;
f15271(i,si0);
si0=l4;
si0=!(si0);
if(si0){
goto L3;
}
si0=l4;
f13834(i,si0);
si0=l4;
f15271(i,si0);
goto L3;
L8:;
si0=l3;
si1=20U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
si0=l3;
si1=28U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si0=!(si0);
if(si0){
goto L139;
}
si0=l7;
si1=32U;
si0+=si1;
l4=si0;
L140:;
{
si0=l4;
si1=-12U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L141;
}
si0=l4;
si1=-16U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
f15271(i,si0);
L141:;
si0=l4;
si1=-4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si0=!(si0);
if(si0){
goto L142;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L142;
}
si0=l6;
f15271(i,si0);
L142:;
si0=l4;
si1=40U;
si0+=si1;
l4=si0;
si0=l5;
si1=-1U;
si0+=si1;
l5=si0;
if(si0){
goto L140;
}
}
L139:;
si0=l3;
si1=24U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L3;
}
si0=l7;
f15271(i,si0);
goto L3;
L7:;
si0=l3;
si1=40U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
si0=!(si0);
if(si0){
goto L143;
}
si0=l3;
si1=44U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L143;
}
si0=l4;
f15271(i,si0);
L143:;
si0=l3;
si1=28U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
si0=l3;
si1=36U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si0=!(si0);
if(si0){
goto L144;
}
si0=l7;
si1=32U;
si0+=si1;
l4=si0;
L145:;
{
si0=l4;
si1=-12U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L146;
}
si0=l4;
si1=-16U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
f15271(i,si0);
L146:;
si0=l4;
si1=-4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si0=!(si0);
if(si0){
goto L147;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L147;
}
si0=l6;
f15271(i,si0);
L147:;
si0=l4;
si1=40U;
si0+=si1;
l4=si0;
si0=l5;
si1=-1U;
si0+=si1;
l5=si0;
if(si0){
goto L145;
}
}
L144:;
si0=l3;
si1=32U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L3;
}
si0=l7;
f15271(i,si0);
goto L3;
L6:;
si0=l3;
si1=20U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si0=l3;
si1=28U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si0=!(si0);
if(si0){
goto L148;
}
si0=l6;
l4=si0;
L149:;
{
si0=l4;
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L150;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
f15271(i,si0);
L150:;
si0=l4;
si1=12U;
si0+=si1;
l4=si0;
si0=l5;
si1=-1U;
si0+=si1;
l5=si0;
if(si0){
goto L149;
}
}
L148:;
si0=l3;
si1=24U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L3;
}
si0=l6;
f15271(i,si0);
goto L3;
L5:;
si0=l3;
si1=20U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si0=l3;
si1=28U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si0=!(si0);
if(si0){
goto L151;
}
si0=l6;
l4=si0;
L152:;
{
si0=l4;
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L153;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
f15271(i,si0);
L153:;
si0=l4;
si1=12U;
si0+=si1;
l4=si0;
si0=l5;
si1=-1U;
si0+=si1;
l5=si0;
if(si0){
goto L152;
}
}
L151:;
si0=l3;
si1=24U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L3;
}
si0=l6;
f15271(i,si0);
goto L3;
L4:;
si0=l3;
si1=20U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
f13834(i,si0);
si0=l3;
f15271(i,si0);
L3:;
si0=l2;
si1=l1;
si0=si0 != si1;
if(si0){
goto L2;
}
}
L1:;
L0:;
}

void f13841(rustpythonInstance*i,U32 l0) {
U32 si0,si1;
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
L1:;
L0:;
}

void f13842(rustpythonInstance*i,U32 l0) {
U32 l1=0;
U32 si0,si1,si2;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+4U);
l0=si0;
si1=l0;
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
si0=l0;
f7690(i,si0);
L1:;
L0:;
}

void f13843(rustpythonInstance*i,U32 l0) {
U32 l1=0;
U32 si0,si1,si2,si3,si4;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
l0=si0;
si1=0U;
si2=l0;
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
goto L1;
}
si0=l0;
si1=0U;
f1440(i,si0,si1);
L1:;
L0:;
}

void f13844(rustpythonInstance*i,U32 l0) {
U32 l1=0;
U32 si0,si1;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+4U);
l1=si0;
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
si0=l1;
f15271(i,si0);
L1:;
L0:;
}

void f13845(rustpythonInstance*i,U32 l0) {
U32 l1=0;
U32 l2=0;
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 si0,si1,si2;
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
goto L1;
}
si0=l1;
l3=si0;
L2:;
{
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
si1=l4;
si1=i32_load(&i->m0,(U64)si1);
l5=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=1U;
si0=si0 != si1;
if(si0){
goto L3;
}
si0=l4;
f7690(i,si0);
L3:;
si0=l3;
si1=4U;
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
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L4;
}
si0=l1;
f15271(i,si0);
L4:;
L0:;
}

void f13846(rustpythonInstance*i,U32 l0) {
U32 l1=0;
U32 si0,si1,si2;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+4U);
l0=si0;
si0=!(si0);
if(si0){
goto L1;
}
si0=l0;
si1=l0;
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
si0=l0;
f7690(i,si0);
L1:;
L0:;
}

void f13847(rustpythonInstance*i,U32 l0) {
L0:;
}

void f13848(rustpythonInstance*i,U32 l0) {
U32 l1=0;
U32 l2=0;
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 si0,si1,si2;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+4U);
l1=si0;
si0=!(si0);
if(si0){
goto L1;
}
si0=l0;
si1=12U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si0=!(si0);
if(si0){
goto L2;
}
si0=l1;
l3=si0;
L3:;
{
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
si1=l4;
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
si0=l4;
f7690(i,si0);
L4:;
si0=l3;
si1=4U;
si0+=si1;
l3=si0;
si0=l2;
si1=-1U;
si0+=si1;
l2=si0;
if(si0){
goto L3;
}
}
L2:;
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
L1:;
L0:;
}

void f13849(rustpythonInstance*i,U32 l0) {
L0:;
}

void f13850(rustpythonInstance*i,U32 l0) {
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

void f13851(rustpythonInstance*i,U32 l0) {
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
f13851(i,si0);
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
f13851(i,si0);
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
f13851(i,si0);
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
f11164(i,si0);
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
f13851(i,si0);
si0=l2;
f15271(i,si0);
si0=l0;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
f13851(i,si0);
si0=l2;
f15271(i,si0);
goto L0;
L28:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+4U);
l2=si0;
f13851(i,si0);
si0=l2;
f15271(i,si0);
si0=l0;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
f13851(i,si0);
si0=l2;
f15271(i,si0);
goto L0;
L27:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+4U);
l2=si0;
f13851(i,si0);
si0=l2;
f15271(i,si0);
goto L0;
L26:;
si0=l0;
si1=4U;
si0+=si1;
f13852(i,si0);
si0=l0;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
f13851(i,si0);
si0=l2;
f15271(i,si0);
goto L0;
L25:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+4U);
l2=si0;
f13851(i,si0);
si0=l2;
f15271(i,si0);
si0=l0;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
f13851(i,si0);
si0=l2;
f15271(i,si0);
si0=l0;
si1=12U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
f13851(i,si0);
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
goto L36;
}
si0=l3;
l2=si0;
L37:;
{
si0=l2;
si0=i32_load(&i->m0,(U64)si0);
si1=38U;
si0=si0 == si1;
if(si0){
goto L38;
}
si0=l2;
f11164(i,si0);
L38:;
si0=l2;
si1=48U;
si0+=si1;
l2=si0;
si0=l1;
si1=-1U;
si0+=si1;
l1=si0;
if(si0){
goto L37;
}
}
L36:;
si0=l0;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L39;
}
si0=l3;
f15271(i,si0);
L39:;
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
goto L40;
}
si0=l3;
l2=si0;
L41:;
{
si0=l2;
f11164(i,si0);
si0=l2;
si1=48U;
si0+=si1;
l2=si0;
si0=l1;
si1=-1U;
si0+=si1;
l1=si0;
if(si0){
goto L41;
}
}
L40:;
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
goto L42;
}
si0=l3;
l2=si0;
L43:;
{
si0=l2;
f11164(i,si0);
si0=l2;
si1=48U;
si0+=si1;
l2=si0;
si0=l1;
si1=-1U;
si0+=si1;
l1=si0;
if(si0){
goto L43;
}
}
L42:;
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
f13851(i,si0);
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
goto L44;
}
si0=0U;
l3=si0;
L45:;
{
si0=l4;
si1=l3;
si2=112U;
si1*=si2;
si0+=si1;
l2=si0;
f11164(i,si0);
si0=l2;
si1=48U;
si0+=si1;
f11164(i,si0);
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
goto L46;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0+96U);
l2=si0;
L47:;
{
si0=l2;
f11164(i,si0);
si0=l2;
si1=48U;
si0+=si1;
l2=si0;
si0=l1;
si1=-1U;
si0+=si1;
l1=si0;
if(si0){
goto L47;
}
}
L46:;
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
goto L48;
}
si0=l6;
si0=i32_load(&i->m0,(U64)si0);
f15271(i,si0);
L48:;
si0=l3;
si1=l5;
si0=si0 != si1;
if(si0){
goto L45;
}
}
L44:;
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
f13851(i,si0);
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
goto L49;
}
si0=0U;
l3=si0;
L50:;
{
si0=l4;
si1=l3;
si2=112U;
si1*=si2;
si0+=si1;
l2=si0;
f11164(i,si0);
si0=l2;
si1=48U;
si0+=si1;
f11164(i,si0);
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
goto L51;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0+96U);
l2=si0;
L52:;
{
si0=l2;
f11164(i,si0);
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
goto L53;
}
si0=l6;
si0=i32_load(&i->m0,(U64)si0);
f15271(i,si0);
L53:;
si0=l3;
si1=l5;
si0=si0 != si1;
if(si0){
goto L50;
}
}
L49:;
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
f13851(i,si0);
si0=l2;
f15271(i,si0);
si0=l0;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
f13851(i,si0);
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
goto L54;
}
si0=0U;
l3=si0;
L55:;
{
si0=l4;
si1=l3;
si2=112U;
si1*=si2;
si0+=si1;
l2=si0;
f11164(i,si0);
si0=l2;
si1=48U;
si0+=si1;
f11164(i,si0);
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
goto L56;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0+96U);
l2=si0;
L57:;
{
si0=l2;
f11164(i,si0);
si0=l2;
si1=48U;
si0+=si1;
l2=si0;
si0=l1;
si1=-1U;
si0+=si1;
l1=si0;
if(si0){
goto L57;
}
}
L56:;
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
goto L58;
}
si0=l6;
si0=i32_load(&i->m0,(U64)si0);
f15271(i,si0);
L58:;
si0=l3;
si1=l5;
si0=si0 != si1;
if(si0){
goto L55;
}
}
L54:;
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
f13851(i,si0);
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
goto L59;
}
si0=0U;
l3=si0;
L60:;
{
si0=l4;
si1=l3;
si2=112U;
si1*=si2;
si0+=si1;
l2=si0;
f11164(i,si0);
si0=l2;
si1=48U;
si0+=si1;
f11164(i,si0);
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
goto L61;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0+96U);
l2=si0;
L62:;
{
si0=l2;
f11164(i,si0);
si0=l2;
si1=48U;
si0+=si1;
l2=si0;
si0=l1;
si1=-1U;
si0+=si1;
l1=si0;
if(si0){
goto L62;
}
}
L61:;
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
goto L63;
}
si0=l6;
si0=i32_load(&i->m0,(U64)si0);
f15271(i,si0);
L63:;
si0=l3;
si1=l5;
si0=si0 != si1;
if(si0){
goto L60;
}
}
L59:;
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
f13851(i,si0);
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
f13851(i,si0);
si0=l2;
f15271(i,si0);
goto L0;
L16:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+4U);
l2=si0;
f13851(i,si0);
si0=l2;
f15271(i,si0);
goto L0;
L15:;
si0=l0;
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
f13851(i,si0);
si0=l2;
f15271(i,si0);
si0=l0;
si1=12U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L64;
}
si0=l0;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
f15271(i,si0);
L64:;
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
goto L65;
}
si0=l3;
l2=si0;
L66:;
{
si0=l2;
f11164(i,si0);
si0=l2;
si1=48U;
si0+=si1;
l2=si0;
si0=l1;
si1=-1U;
si0+=si1;
l1=si0;
if(si0){
goto L66;
}
}
L65:;
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
f13851(i,si0);
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
goto L67;
}
si0=l3;
l2=si0;
L68:;
{
si0=l2;
f11164(i,si0);
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
si0=l0;
si1=12U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L69;
}
si0=l3;
f15271(i,si0);
L69:;
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
goto L70;
}
si0=l6;
l2=si0;
L71:;
{
si0=l2;
si1=56U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=!(si0);
if(si0){
goto L72;
}
si0=l2;
si1=60U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L72;
}
si0=l3;
f15271(i,si0);
L72:;
si0=l2;
f11164(i,si0);
si0=l2;
si1=72U;
si0+=si1;
l2=si0;
si0=l1;
si1=-1U;
si0+=si1;
l1=si0;
if(si0){
goto L71;
}
}
L70:;
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
f13851(i,si0);
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
f13851(i,si0);
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
goto L73;
}
si0=l3;
l2=si0;
L74:;
{
si0=l2;
f11164(i,si0);
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
goto L78;
case 1:
goto L77;
case 2:
goto L76;
case 3:
goto L75;
default:
goto L2;
}
L78:;
si0=l0;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L4;
}
goto L2;
L77:;
si0=l0;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L2;
}
goto L4;
L76:;
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
L75:;
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
goto L79;
}
si0=l3;
l2=si0;
L80:;
{
si0=l2;
f11158(i,si0);
si0=l2;
si1=24U;
si0+=si1;
l2=si0;
si0=l1;
si1=-1U;
si0+=si1;
l1=si0;
if(si0){
goto L80;
}
}
L79:;
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
f13851(i,si0);
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
f13851(i,si0);
si0=l2;
f15271(i,si0);
si0=l0;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
f13851(i,si0);
si0=l2;
f15271(i,si0);
goto L0;
L8:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+4U);
l2=si0;
f13851(i,si0);
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
goto L81;
}
si0=l3;
l2=si0;
L82:;
{
si0=l2;
f11164(i,si0);
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
goto L83;
}
si0=l3;
l2=si0;
L84:;
{
si0=l2;
f11164(i,si0);
si0=l2;
si1=48U;
si0+=si1;
l2=si0;
si0=l1;
si1=-1U;
si0+=si1;
l1=si0;
if(si0){
goto L84;
}
}
L83:;
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

void f13852(rustpythonInstance*i,U32 l0) {
U32 l1=0;
U32 l2=0;
U32 si0,si1;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
l0=si0;
f11218(i,si0);
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
l1=si0;
f11218(i,si0);
si0=l0;
si1=16U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L2;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
f15271(i,si0);
L2:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+36U);
l1=si0;
si0=!(si0);
if(si0){
goto L3;
}
si0=l1;
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L4;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
f15271(i,si0);
L4:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+20U);
l2=si0;
si0=!(si0);
if(si0){
goto L5;
}
si0=l2;
f13851(i,si0);
si0=l2;
f15271(i,si0);
L5:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+24U);
l2=si0;
si0=!(si0);
if(si0){
goto L6;
}
si0=l1;
si1=28U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L6;
}
si0=l2;
f15271(i,si0);
L6:;
si0=l1;
f15271(i,si0);
L3:;
si0=l0;
si1=24U;
si0+=si1;
l1=si0;
f11218(i,si0);
si0=l0;
si1=28U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L7;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
f15271(i,si0);
L7:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+40U);
l1=si0;
si0=!(si0);
if(si0){
goto L8;
}
si0=l1;
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L9;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
f15271(i,si0);
L9:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+20U);
l2=si0;
si0=!(si0);
if(si0){
goto L10;
}
si0=l2;
f13851(i,si0);
si0=l2;
f15271(i,si0);
L10:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+24U);
l2=si0;
si0=!(si0);
if(si0){
goto L11;
}
si0=l1;
si1=28U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L11;
}
si0=l2;
f15271(i,si0);
L11:;
si0=l1;
f15271(i,si0);
L8:;
si0=l0;
f15271(i,si0);
L0:;
}

void f13853(rustpythonInstance*i,U32 l0) {
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
f11168(i,si0);
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
f13851(i,si0);
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
f11158(i,si0);
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
f11168(i,si0);
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
f11164(i,si0);
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
f11168(i,si0);
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
f13851(i,si0);
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
f11168(i,si0);
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
f11168(i,si0);
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
f13853(i,si0);
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

void f13854(rustpythonInstance*i,U32 l0) {
U32 l1=0;
U32 si0,si1,si2;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
l0=si0;
si1=l0;
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
si0=l0;
f7690(i,si0);
L1:;
L0:;
}

void f13855(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 si0,si1;
si0=l1;
si0=!(si0);
if(si0){
goto L1;
}
si0=0U;
l2=si0;
L2:;
{
si0=l2;
si1=72U;
si0*=si1;
l3=si0;
si0=l2;
si1=1U;
si0+=si1;
l2=si0;
si0=l0;
si1=l3;
si0+=si1;
l3=si0;
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
si0=l3;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L28;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0+4U);
f15271(i,si0);
L28:;
si0=l3;
si1=16U;
si0+=si1;
f13852(i,si0);
si0=l3;
si1=20U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
si0=l3;
si1=28U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si0=!(si0);
if(si0){
goto L29;
}
si0=l4;
l6=si0;
L30:;
{
si0=l6;
f11166(i,si0);
si0=l6;
si1=72U;
si0+=si1;
l6=si0;
si0=l5;
si1=-1U;
si0+=si1;
l5=si0;
if(si0){
goto L30;
}
}
L29:;
si0=l3;
si1=24U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L31;
}
si0=l4;
f15271(i,si0);
L31:;
si0=l3;
si1=32U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
si0=l3;
si1=40U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si0=!(si0);
if(si0){
goto L32;
}
si0=l4;
l6=si0;
L33:;
{
si0=l6;
f11164(i,si0);
si0=l6;
si1=48U;
si0+=si1;
l6=si0;
si0=l5;
si1=-1U;
si0+=si1;
l5=si0;
if(si0){
goto L33;
}
}
L32:;
si0=l3;
si1=36U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L34;
}
si0=l4;
f15271(i,si0);
L34:;
si0=l3;
si1=52U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si0=!(si0);
if(si0){
goto L35;
}
si0=l6;
f13851(i,si0);
si0=l6;
f15271(i,si0);
L35:;
si0=l3;
si1=56U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si0=!(si0);
if(si0){
goto L3;
}
si0=l3;
si1=60U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L3;
}
si0=l6;
f15271(i,si0);
goto L3;
L26:;
si0=l3;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L36;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0+4U);
f15271(i,si0);
L36:;
si0=l3;
si1=16U;
si0+=si1;
f13852(i,si0);
si0=l3;
si1=20U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
si0=l3;
si1=28U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si0=!(si0);
if(si0){
goto L37;
}
si0=l4;
l6=si0;
L38:;
{
si0=l6;
f11166(i,si0);
si0=l6;
si1=72U;
si0+=si1;
l6=si0;
si0=l5;
si1=-1U;
si0+=si1;
l5=si0;
if(si0){
goto L38;
}
}
L37:;
si0=l3;
si1=24U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L39;
}
si0=l4;
f15271(i,si0);
L39:;
si0=l3;
si1=32U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
si0=l3;
si1=40U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si0=!(si0);
if(si0){
goto L40;
}
si0=l4;
l6=si0;
L41:;
{
si0=l6;
f11164(i,si0);
si0=l6;
si1=48U;
si0+=si1;
l6=si0;
si0=l5;
si1=-1U;
si0+=si1;
l5=si0;
if(si0){
goto L41;
}
}
L40:;
si0=l3;
si1=36U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L42;
}
si0=l4;
f15271(i,si0);
L42:;
si0=l3;
si1=52U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si0=!(si0);
if(si0){
goto L43;
}
si0=l6;
f13851(i,si0);
si0=l6;
f15271(i,si0);
L43:;
si0=l3;
si1=56U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si0=!(si0);
if(si0){
goto L3;
}
si0=l3;
si1=60U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L3;
}
si0=l6;
f15271(i,si0);
goto L3;
L25:;
si0=l3;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L44;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0+4U);
f15271(i,si0);
L44:;
si0=l3;
si1=16U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
si0=l3;
si1=24U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si0=!(si0);
if(si0){
goto L45;
}
si0=l4;
l6=si0;
L46:;
{
si0=l6;
f11164(i,si0);
si0=l6;
si1=48U;
si0+=si1;
l6=si0;
si0=l5;
si1=-1U;
si0+=si1;
l5=si0;
if(si0){
goto L46;
}
}
L45:;
si0=l3;
si1=20U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L47;
}
si0=l4;
f15271(i,si0);
L47:;
si0=l3;
si1=28U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
si0=l3;
si1=36U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si0=!(si0);
if(si0){
goto L48;
}
si0=l7;
l6=si0;
L49:;
{
si0=l6;
si1=56U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
si0=!(si0);
if(si0){
goto L50;
}
si0=l6;
si1=60U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L50;
}
si0=l4;
f15271(i,si0);
L50:;
si0=l6;
f11164(i,si0);
si0=l6;
si1=72U;
si0+=si1;
l6=si0;
si0=l5;
si1=-1U;
si0+=si1;
l5=si0;
if(si0){
goto L49;
}
}
L48:;
si0=l3;
si1=32U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L51;
}
si0=l7;
f15271(i,si0);
L51:;
si0=l3;
si1=40U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
si0=l3;
si1=48U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si0=!(si0);
if(si0){
goto L52;
}
si0=l4;
l6=si0;
L53:;
{
si0=l6;
f11166(i,si0);
si0=l6;
si1=72U;
si0+=si1;
l6=si0;
si0=l5;
si1=-1U;
si0+=si1;
l5=si0;
if(si0){
goto L53;
}
}
L52:;
si0=l3;
si1=44U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L54;
}
si0=l4;
f15271(i,si0);
L54:;
si0=l3;
si1=52U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
si0=l3;
si1=60U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si0=!(si0);
if(si0){
goto L55;
}
si0=l4;
l6=si0;
L56:;
{
si0=l6;
f11164(i,si0);
si0=l6;
si1=48U;
si0+=si1;
l6=si0;
si0=l5;
si1=-1U;
si0+=si1;
l5=si0;
if(si0){
goto L56;
}
}
L55:;
si0=l3;
si1=56U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L3;
}
si0=l4;
f15271(i,si0);
goto L3;
L24:;
si0=l3;
si1=12U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=!(si0);
if(si0){
goto L3;
}
si0=l3;
f13851(i,si0);
si0=l3;
f15271(i,si0);
goto L3;
L23:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+4U);
l4=si0;
si0=l3;
si1=12U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si0=!(si0);
if(si0){
goto L57;
}
si0=l4;
l6=si0;
L58:;
{
si0=l6;
f11164(i,si0);
si0=l6;
si1=48U;
si0+=si1;
l6=si0;
si0=l5;
si1=-1U;
si0+=si1;
l5=si0;
if(si0){
goto L58;
}
}
L57:;
si0=l3;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L3;
}
si0=l4;
f15271(i,si0);
goto L3;
L22:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+4U);
l4=si0;
si0=l3;
si1=12U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si0=!(si0);
if(si0){
goto L59;
}
si0=l4;
l6=si0;
L60:;
{
si0=l6;
f11164(i,si0);
si0=l6;
si1=48U;
si0+=si1;
l6=si0;
si0=l5;
si1=-1U;
si0+=si1;
l5=si0;
if(si0){
goto L60;
}
}
L59:;
si0=l3;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L61;
}
si0=l4;
f15271(i,si0);
L61:;
si0=l3;
si1=16U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
f13851(i,si0);
si0=l6;
f15271(i,si0);
si0=l3;
si1=28U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si0=!(si0);
if(si0){
goto L3;
}
si0=l3;
si1=32U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L3;
}
si0=l6;
f15271(i,si0);
goto L3;
L21:;
si0=l3;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si0=l3;
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
f13851(i,si0);
si0=l3;
f15271(i,si0);
si0=l6;
f13851(i,si0);
si0=l6;
f15271(i,si0);
goto L3;
L20:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+4U);
l6=si0;
f13851(i,si0);
si0=l6;
f15271(i,si0);
si0=l3;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
f13851(i,si0);
si0=l6;
f15271(i,si0);
si0=l3;
si1=20U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=!(si0);
if(si0){
goto L3;
}
si0=l3;
f13851(i,si0);
si0=l3;
f15271(i,si0);
goto L3;
L19:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+4U);
l6=si0;
f13851(i,si0);
si0=l6;
f15271(i,si0);
si0=l3;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
f13851(i,si0);
si0=l6;
f15271(i,si0);
si0=l3;
si1=12U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
si0=l3;
si1=20U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si0=!(si0);
if(si0){
goto L62;
}
si0=l4;
l6=si0;
L63:;
{
si0=l6;
f11166(i,si0);
si0=l6;
si1=72U;
si0+=si1;
l6=si0;
si0=l5;
si1=-1U;
si0+=si1;
l5=si0;
if(si0){
goto L63;
}
}
L62:;
si0=l3;
si1=16U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L64;
}
si0=l4;
f15271(i,si0);
L64:;
si0=l3;
si1=24U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
si0=l3;
si1=32U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si0=!(si0);
if(si0){
goto L65;
}
si0=l4;
l6=si0;
L66:;
{
si0=l6;
f11166(i,si0);
si0=l6;
si1=72U;
si0+=si1;
l6=si0;
si0=l5;
si1=-1U;
si0+=si1;
l5=si0;
if(si0){
goto L66;
}
}
L65:;
si0=l3;
si1=28U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L67;
}
si0=l4;
f15271(i,si0);
L67:;
si0=l3;
si1=44U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si0=!(si0);
if(si0){
goto L3;
}
si0=l3;
si1=48U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L3;
}
si0=l6;
f15271(i,si0);
goto L3;
L18:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+4U);
l6=si0;
f13851(i,si0);
si0=l6;
f15271(i,si0);
si0=l3;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
f13851(i,si0);
si0=l6;
f15271(i,si0);
si0=l3;
si1=12U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
si0=l3;
si1=20U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si0=!(si0);
if(si0){
goto L68;
}
si0=l4;
l6=si0;
L69:;
{
si0=l6;
f11166(i,si0);
si0=l6;
si1=72U;
si0+=si1;
l6=si0;
si0=l5;
si1=-1U;
si0+=si1;
l5=si0;
if(si0){
goto L69;
}
}
L68:;
si0=l3;
si1=16U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L70;
}
si0=l4;
f15271(i,si0);
L70:;
si0=l3;
si1=24U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
si0=l3;
si1=32U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si0=!(si0);
if(si0){
goto L71;
}
si0=l4;
l6=si0;
L72:;
{
si0=l6;
f11166(i,si0);
si0=l6;
si1=72U;
si0+=si1;
l6=si0;
si0=l5;
si1=-1U;
si0+=si1;
l5=si0;
if(si0){
goto L72;
}
}
L71:;
si0=l3;
si1=28U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L73;
}
si0=l4;
f15271(i,si0);
L73:;
si0=l3;
si1=44U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si0=!(si0);
if(si0){
goto L3;
}
si0=l3;
si1=48U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L3;
}
si0=l6;
f15271(i,si0);
goto L3;
L17:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+4U);
l6=si0;
f13851(i,si0);
si0=l6;
f15271(i,si0);
si0=l3;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
si0=l3;
si1=16U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si0=!(si0);
if(si0){
goto L74;
}
si0=l4;
l6=si0;
L75:;
{
si0=l6;
f11166(i,si0);
si0=l6;
si1=72U;
si0+=si1;
l6=si0;
si0=l5;
si1=-1U;
si0+=si1;
l5=si0;
if(si0){
goto L75;
}
}
L74:;
si0=l3;
si1=12U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L76;
}
si0=l4;
f15271(i,si0);
L76:;
si0=l3;
si1=20U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
si0=l3;
si1=28U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si0=!(si0);
if(si0){
goto L77;
}
si0=l4;
l6=si0;
L78:;
{
si0=l6;
f11166(i,si0);
si0=l6;
si1=72U;
si0+=si1;
l6=si0;
si0=l5;
si1=-1U;
si0+=si1;
l5=si0;
if(si0){
goto L78;
}
}
L77:;
si0=l3;
si1=24U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L3;
}
si0=l4;
f15271(i,si0);
goto L3;
L16:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+4U);
l6=si0;
f13851(i,si0);
si0=l6;
f15271(i,si0);
si0=l3;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
si0=l3;
si1=16U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si0=!(si0);
if(si0){
goto L79;
}
si0=l4;
l6=si0;
L80:;
{
si0=l6;
f11166(i,si0);
si0=l6;
si1=72U;
si0+=si1;
l6=si0;
si0=l5;
si1=-1U;
si0+=si1;
l5=si0;
if(si0){
goto L80;
}
}
L79:;
si0=l3;
si1=12U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L81;
}
si0=l4;
f15271(i,si0);
L81:;
si0=l3;
si1=20U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
si0=l3;
si1=28U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si0=!(si0);
if(si0){
goto L82;
}
si0=l4;
l6=si0;
L83:;
{
si0=l6;
f11166(i,si0);
si0=l6;
si1=72U;
si0+=si1;
l6=si0;
si0=l5;
si1=-1U;
si0+=si1;
l5=si0;
if(si0){
goto L83;
}
}
L82:;
si0=l3;
si1=24U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L3;
}
si0=l4;
f15271(i,si0);
goto L3;
L15:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+4U);
l7=si0;
si0=l3;
si1=12U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
si0=!(si0);
if(si0){
goto L84;
}
si0=l7;
l6=si0;
L85:;
{
si0=l6;
f11164(i,si0);
si0=l6;
si1=48U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si0=!(si0);
if(si0){
goto L86;
}
si0=l5;
f11164(i,si0);
si0=l5;
f15271(i,si0);
L86:;
si0=l6;
si1=56U;
si0+=si1;
l6=si0;
si0=l4;
si1=-1U;
si0+=si1;
l4=si0;
if(si0){
goto L85;
}
}
L84:;
si0=l3;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L87;
}
si0=l7;
f15271(i,si0);
L87:;
si0=l3;
si1=16U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
si0=l3;
si1=24U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si0=!(si0);
if(si0){
goto L88;
}
si0=l4;
l6=si0;
L89:;
{
si0=l6;
f11166(i,si0);
si0=l6;
si1=72U;
si0+=si1;
l6=si0;
si0=l5;
si1=-1U;
si0+=si1;
l5=si0;
if(si0){
goto L89;
}
}
L88:;
si0=l3;
si1=20U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L90;
}
si0=l4;
f15271(i,si0);
L90:;
si0=l3;
si1=36U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si0=!(si0);
if(si0){
goto L3;
}
si0=l3;
si1=40U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L3;
}
si0=l6;
f15271(i,si0);
goto L3;
L14:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+4U);
l7=si0;
si0=l3;
si1=12U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
si0=!(si0);
if(si0){
goto L91;
}
si0=l7;
l6=si0;
L92:;
{
si0=l6;
f11164(i,si0);
si0=l6;
si1=48U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si0=!(si0);
if(si0){
goto L93;
}
si0=l5;
f11164(i,si0);
si0=l5;
f15271(i,si0);
L93:;
si0=l6;
si1=56U;
si0+=si1;
l6=si0;
si0=l4;
si1=-1U;
si0+=si1;
l4=si0;
if(si0){
goto L92;
}
}
L91:;
si0=l3;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L94;
}
si0=l7;
f15271(i,si0);
L94:;
si0=l3;
si1=16U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
si0=l3;
si1=24U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si0=!(si0);
if(si0){
goto L95;
}
si0=l4;
l6=si0;
L96:;
{
si0=l6;
f11166(i,si0);
si0=l6;
si1=72U;
si0+=si1;
l6=si0;
si0=l5;
si1=-1U;
si0+=si1;
l5=si0;
if(si0){
goto L96;
}
}
L95:;
si0=l3;
si1=20U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L97;
}
si0=l4;
f15271(i,si0);
L97:;
si0=l3;
si1=36U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si0=!(si0);
if(si0){
goto L3;
}
si0=l3;
si1=40U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L3;
}
si0=l6;
f15271(i,si0);
goto L3;
L13:;
si0=l3;
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
f13851(i,si0);
si0=l6;
f15271(i,si0);
si0=l3;
si1=8U;
si0+=si1;
l6=si0;
f11219(i,si0);
si0=l3;
si1=12U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L3;
}
si0=l6;
si0=i32_load(&i->m0,(U64)si0);
f15271(i,si0);
goto L3;
L12:;
si0=l3;
si1=16U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si0=l3;
si1=12U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=!(si0);
if(si0){
goto L98;
}
si0=l3;
f13851(i,si0);
si0=l3;
f15271(i,si0);
L98:;
si0=l6;
si0=!(si0);
if(si0){
goto L3;
}
si0=l6;
f13851(i,si0);
si0=l6;
f15271(i,si0);
goto L3;
L11:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+4U);
l4=si0;
si0=l3;
si1=12U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si0=!(si0);
if(si0){
goto L99;
}
si0=l4;
l6=si0;
L100:;
{
si0=l6;
f11166(i,si0);
si0=l6;
si1=72U;
si0+=si1;
l6=si0;
si0=l5;
si1=-1U;
si0+=si1;
l5=si0;
if(si0){
goto L100;
}
}
L99:;
si0=l3;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L101;
}
si0=l4;
f15271(i,si0);
L101:;
si0=l3;
si1=16U;
si0+=si1;
l6=si0;
f11224(i,si0);
si0=l3;
si1=20U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L102;
}
si0=l6;
si0=i32_load(&i->m0,(U64)si0);
f15271(i,si0);
L102:;
si0=l3;
si1=28U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
si0=l3;
si1=36U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si0=!(si0);
if(si0){
goto L103;
}
si0=l4;
l6=si0;
L104:;
{
si0=l6;
f11166(i,si0);
si0=l6;
si1=72U;
si0+=si1;
l6=si0;
si0=l5;
si1=-1U;
si0+=si1;
l5=si0;
if(si0){
goto L104;
}
}
L103:;
si0=l3;
si1=32U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L105;
}
si0=l4;
f15271(i,si0);
L105:;
si0=l3;
si1=40U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
si0=l3;
si1=48U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si0=!(si0);
if(si0){
goto L106;
}
si0=l4;
l6=si0;
L107:;
{
si0=l6;
f11166(i,si0);
si0=l6;
si1=72U;
si0+=si1;
l6=si0;
si0=l5;
si1=-1U;
si0+=si1;
l5=si0;
if(si0){
goto L107;
}
}
L106:;
si0=l3;
si1=44U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L3;
}
si0=l4;
f15271(i,si0);
goto L3;
L10:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+4U);
l4=si0;
si0=l3;
si1=12U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si0=!(si0);
if(si0){
goto L108;
}
si0=l4;
l6=si0;
L109:;
{
si0=l6;
f11166(i,si0);
si0=l6;
si1=72U;
si0+=si1;
l6=si0;
si0=l5;
si1=-1U;
si0+=si1;
l5=si0;
if(si0){
goto L109;
}
}
L108:;
si0=l3;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L110;
}
si0=l4;
f15271(i,si0);
L110:;
si0=l3;
si1=16U;
si0+=si1;
l6=si0;
f11224(i,si0);
si0=l3;
si1=20U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L111;
}
si0=l6;
si0=i32_load(&i->m0,(U64)si0);
f15271(i,si0);
L111:;
si0=l3;
si1=28U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
si0=l3;
si1=36U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si0=!(si0);
if(si0){
goto L112;
}
si0=l4;
l6=si0;
L113:;
{
si0=l6;
f11166(i,si0);
si0=l6;
si1=72U;
si0+=si1;
l6=si0;
si0=l5;
si1=-1U;
si0+=si1;
l5=si0;
if(si0){
goto L113;
}
}
L112:;
si0=l3;
si1=32U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L114;
}
si0=l4;
f15271(i,si0);
L114:;
si0=l3;
si1=40U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
si0=l3;
si1=48U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si0=!(si0);
if(si0){
goto L115;
}
si0=l4;
l6=si0;
L116:;
{
si0=l6;
f11166(i,si0);
si0=l6;
si1=72U;
si0+=si1;
l6=si0;
si0=l5;
si1=-1U;
si0+=si1;
l5=si0;
if(si0){
goto L116;
}
}
L115:;
si0=l3;
si1=44U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L3;
}
si0=l4;
f15271(i,si0);
goto L3;
L9:;
si0=l3;
si1=16U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si0=l3;
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
f13851(i,si0);
si0=l3;
f15271(i,si0);
si0=l6;
si0=!(si0);
if(si0){
goto L3;
}
si0=l6;
f13851(i,si0);
si0=l6;
f15271(i,si0);
goto L3;
L8:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+4U);
l7=si0;
si0=l3;
si1=12U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si0=!(si0);
if(si0){
goto L117;
}
si0=l7;
l6=si0;
L118:;
{
si0=l6;
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L119;
}
si0=l6;
si0=i32_load(&i->m0,(U64)si0);
f15271(i,si0);
L119:;
si0=l6;
si1=20U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
si0=!(si0);
if(si0){
goto L120;
}
si0=l6;
si1=24U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L120;
}
si0=l4;
f15271(i,si0);
L120:;
si0=l6;
si1=32U;
si0+=si1;
l6=si0;
si0=l5;
si1=-1U;
si0+=si1;
l5=si0;
if(si0){
goto L118;
}
}
L117:;
si0=l3;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L3;
}
si0=l7;
f15271(i,si0);
goto L3;
L7:;
si0=l3;
si1=32U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si0=!(si0);
if(si0){
goto L121;
}
si0=l3;
si1=36U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L121;
}
si0=l6;
f15271(i,si0);
L121:;
si0=l3;
si1=12U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
si0=l3;
si1=20U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si0=!(si0);
if(si0){
goto L122;
}
si0=l7;
l6=si0;
L123:;
{
si0=l6;
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L124;
}
si0=l6;
si0=i32_load(&i->m0,(U64)si0);
f15271(i,si0);
L124:;
si0=l6;
si1=20U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
si0=!(si0);
if(si0){
goto L125;
}
si0=l6;
si1=24U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L125;
}
si0=l4;
f15271(i,si0);
L125:;
si0=l6;
si1=32U;
si0+=si1;
l6=si0;
si0=l5;
si1=-1U;
si0+=si1;
l5=si0;
if(si0){
goto L123;
}
}
L122:;
si0=l3;
si1=16U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L3;
}
si0=l7;
f15271(i,si0);
goto L3;
L6:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+4U);
l4=si0;
si0=l3;
si1=12U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si0=!(si0);
if(si0){
goto L126;
}
si0=l4;
l6=si0;
L127:;
{
si0=l6;
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L128;
}
si0=l6;
si0=i32_load(&i->m0,(U64)si0);
f15271(i,si0);
L128:;
si0=l6;
si1=12U;
si0+=si1;
l6=si0;
si0=l5;
si1=-1U;
si0+=si1;
l5=si0;
if(si0){
goto L127;
}
}
L126:;
si0=l3;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L3;
}
si0=l4;
f15271(i,si0);
goto L3;
L5:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+4U);
l4=si0;
si0=l3;
si1=12U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si0=!(si0);
if(si0){
goto L129;
}
si0=l4;
l6=si0;
L130:;
{
si0=l6;
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L131;
}
si0=l6;
si0=i32_load(&i->m0,(U64)si0);
f15271(i,si0);
L131:;
si0=l6;
si1=12U;
si0+=si1;
l6=si0;
si0=l5;
si1=-1U;
si0+=si1;
l5=si0;
if(si0){
goto L130;
}
}
L129:;
si0=l3;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L3;
}
si0=l4;
f15271(i,si0);
goto L3;
L4:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+4U);
l3=si0;
f13851(i,si0);
si0=l3;
f15271(i,si0);
L3:;
si0=l2;
si1=l1;
si0=si0 != si1;
if(si0){
goto L2;
}
}
L1:;
L0:;
}

void f13856(rustpythonInstance*i,U32 l0) {
U32 l1=0;
U32 si0,si1,si2;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
l0=si0;
si1=l0;
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
si0=l0;
f7690(i,si0);
L1:;
L0:;
}

void f13857(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 si0,si1;
si0=l1;
si0=!(si0);
if(si0){
goto L1;
}
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
si1=20U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si0=!(si0);
if(si0){
goto L4;
}
si0=l2;
f13851(i,si0);
si0=l2;
f15271(i,si0);
L4:;
si0=l0;
si1=24U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si0=!(si0);
if(si0){
goto L5;
}
si0=l0;
si1=28U;
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
si1=36U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si0=!(si0);
if(si0){
goto L6;
}
si0=l2;
f13851(i,si0);
si0=l2;
f15271(i,si0);
L6:;
si0=l0;
si1=40U;
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

void f13858(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 si0,si1,si2,si3;
si0=l1;
si0=!(si0);
if(si0){
goto L1;
}
si0=0U;
l2=si0;
L2:;
{
si0=l2;
si1=24U;
si0*=si1;
l3=si0;
si0=l2;
si1=1U;
si0+=si1;
l2=si0;
si0=l0;
si1=l3;
si0+=si1;
l4=si0;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si1=-2U;
si0+=si1;
l3=si0;
si1=1U;
si2=l3;
si3=10U;
si2=si2 < si3;
si0=si2?si0:si1;
switch(si0){
case 0:
goto L8;
case 1:
goto L7;
case 2:
goto L3;
case 3:
goto L3;
case 4:
goto L3;
case 5:
goto L6;
case 6:
goto L5;
case 7:
goto L4;
default:
goto L3;
}
L8:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+4U);
l6=si0;
si0=l4;
si1=12U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si0=!(si0);
if(si0){
goto L9;
}
si0=l6;
l3=si0;
L10:;
{
si0=l3;
f11171(i,si0);
si0=l3;
si1=24U;
si0+=si1;
l3=si0;
si0=l5;
si1=-1U;
si0+=si1;
l5=si0;
if(si0){
goto L10;
}
}
L9:;
si0=l4;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L3;
}
si0=l6;
f15271(i,si0);
goto L3;
L7:;
si0=l5;
si0=!(si0);
if(si0){
goto L3;
}
si0=l4;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L3;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0+4U);
f15271(i,si0);
goto L3;
L6:;
si0=l4;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L3;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0+4U);
f15271(i,si0);
goto L3;
L5:;
si0=l4;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L3;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0+4U);
f15271(i,si0);
goto L3;
L4:;
si0=l4;
si1=4U;
si0+=si1;
f13859(i,si0);
L3:;
si0=l2;
si1=l1;
si0=si0 != si1;
if(si0){
goto L2;
}
}
L1:;
L0:;
}

void f13859(rustpythonInstance*i,U32 l0) {
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
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L1;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
f15271(i,si0);
L1:;
si0=l1;
si1=12U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L2;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+8U);
f15271(i,si0);
L2:;
si0=l1;
si1=20U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L3;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+16U);
f15271(i,si0);
L3:;
si0=l1;
si1=32U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L4;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+28U);
f15271(i,si0);
L4:;
si0=l1;
si1=100U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l0=si0;
si0=!(si0);
if(si0){
goto L5;
}
si0=l1;
si1=104U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L5;
}
si0=l0;
f15271(i,si0);
L5:;
si0=l1;
si1=44U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si0=!(si0);
if(si0){
goto L6;
}
si0=l1;
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
l0=si0;
si0=l4;
si1=1U;
si0+=si1;
l4=si0;
si0=l3;
si1=l0;
si0+=si1;
l5=si0;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si1=-2U;
si0+=si1;
l0=si0;
si1=1U;
si2=l0;
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
l0=si0;
L15:;
{
si0=l0;
f11171(i,si0);
si0=l0;
si1=24U;
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
si1=4U;
si0+=si1;
f13859(i,si0);
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
si0=l1;
si1=52U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si0=!(si0);
if(si0){
goto L16;
}
si0=l1;
si1=48U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
l0=si0;
L17:;
{
si0=l0;
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L18;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
f15271(i,si0);
L18:;
si0=l0;
si1=12U;
si0+=si1;
l0=si0;
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
si0=l1;
si1=60U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si0=!(si0);
if(si0){
goto L19;
}
si0=l1;
si1=56U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
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
si1=12U;
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
si0=l4;
f15271(i,si0);
L19:;
si0=l1;
si1=68U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si0=!(si0);
if(si0){
goto L22;
}
si0=l1;
si1=64U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
l0=si0;
L23:;
{
si0=l0;
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L24;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
f15271(i,si0);
L24:;
si0=l0;
si1=12U;
si0+=si1;
l0=si0;
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
si0=l1;
si1=76U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si0=!(si0);
if(si0){
goto L25;
}
si0=l1;
si1=72U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
l0=si0;
L26:;
{
si0=l0;
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L27;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
f15271(i,si0);
L27:;
si0=l0;
si1=12U;
si0+=si1;
l0=si0;
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
si0=l1;
f15271(i,si0);
L0:;
}

void f13860(rustpythonInstance*i,U32 l0) {
U32 l1=0;
U32 l2=0;
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 si0,si1,si2;
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
l4=si0;
si1=l4;
si1=i32_load(&i->m0,(U64)si1);
l5=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=1U;
si0=si0 != si1;
if(si0){
goto L3;
}
si0=l4;
f7690(i,si0);
L3:;
si0=l3;
si1=4U;
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
goto L4;
}
si0=l1;
f15271(i,si0);
L4:;
L0:;
}

void f13861(rustpythonInstance*i,U32 l0) {
L0:;
}

void f13862(rustpythonInstance*i,U32 l0) {
U32 l1=0;
U32 si0,si1,si2;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
l0=si0;
si0=!(si0);
if(si0){
goto L1;
}
si0=l0;
si1=l0;
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
si0=l0;
f7690(i,si0);
L1:;
L0:;
}

void f13863(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
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

void f13864(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4) {
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
U32 si0,si1,si2,si3,si4;
si0=l1;
si1=l2;
si0+=si1;
l5=si0;
si0=0U;
l6=si0;
si0=1U;
l7=si0;
si0=l1;
l8=si0;
si0=0U;
l9=si0;
L2:;
{
si0=l9;
l10=si0;
si0=l8;
l2=si0;
si1=l5;
si0=si0 != si1;
if(si0){
goto L3;
}
si0=l10;
l9=si0;
si0=l5;
l8=si0;
goto L1;
L3:;
si0=l2;
si0=i32_load8_s(&i->m0,(U64)si0);
l9=si0;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L5;
}
si0=l2;
si1=1U;
si0+=si1;
l8=si0;
si0=l9;
si1=255U;
si0&=si1;
l11=si0;
goto L4;
L5:;
si0=l2;
si0=i32_load8_u(&i->m0,(U64)si0+1U);
si1=63U;
si0&=si1;
l8=si0;
si0=l9;
si1=31U;
si0&=si1;
l11=si0;
si0=l9;
si1=-33U;
si0=si0 > si1;
if(si0){
goto L6;
}
si0=l11;
si1=6U;
si0<<=(si1&31);
si1=l8;
si0|=si1;
l11=si0;
si0=l2;
si1=2U;
si0+=si1;
l8=si0;
goto L4;
L6:;
si0=l8;
si1=6U;
si0<<=(si1&31);
si1=l2;
si1=i32_load8_u(&i->m0,(U64)si1+2U);
si2=63U;
si1&=si2;
si0|=si1;
l12=si0;
si0=l9;
si1=-16U;
si0=si0 >= si1;
if(si0){
goto L7;
}
si0=l12;
si1=l11;
si2=12U;
si1<<=(si2&31);
si0|=si1;
l11=si0;
si0=l2;
si1=3U;
si0+=si1;
l8=si0;
goto L4;
L7:;
si0=l2;
si1=4U;
si0+=si1;
l8=si0;
si0=l12;
si1=6U;
si0<<=(si1&31);
si1=l2;
si1=i32_load8_u(&i->m0,(U64)si1+3U);
si2=63U;
si1&=si2;
si0|=si1;
si1=l11;
si2=18U;
si1<<=(si2&31);
si2=1835008U;
si1&=si2;
si0|=si1;
l11=si0;
si1=1114112U;
si0=si0 != si1;
if(si0){
goto L4;
}
si0=l10;
l9=si0;
goto L1;
L4:;
si0=l8;
si1=l2;
si0-=si1;
si1=l10;
si0+=si1;
l9=si0;
si0=l11;
si1=l3;
si2=l4;
si0=f13865(i,si0,si1,si2);
if(si0){
goto L2;
}
}
si0=0U;
l7=si0;
si0=l9;
l6=si0;
L1:;
L9:;
{
si0=l8;
si1=l5;
l2=si1;
si0=si0 == si1;
if(si0){
goto L8;
}
si0=l2;
si1=-1U;
si0+=si1;
l5=si0;
si0=i32_load8_u(&i->m0,(U64)si0);
l11=si0;
si0=(U32)(U32)(I8)(U8)(si0);
l12=si0;
si1=-1U;
si0=(U32)((I32)si0>(I32)si1);
if(si0){
goto L10;
}
si0=l2;
si1=-2U;
si0+=si1;
l5=si0;
si0=i32_load8_u(&i->m0,(U64)si0);
l11=si0;
si0=(U32)(U32)(I8)(U8)(si0);
l13=si0;
si1=-64U;
si0=(U32)((I32)si0<(I32)si1);
if(si0){
goto L12;
}
si0=l11;
si1=31U;
si0&=si1;
l11=si0;
goto L11;
L12:;
si0=l2;
si1=-3U;
si0+=si1;
l5=si0;
si0=i32_load8_u(&i->m0,(U64)si0);
l11=si0;
si0=(U32)(U32)(I8)(U8)(si0);
l14=si0;
si1=-64U;
si0=(U32)((I32)si0<(I32)si1);
if(si0){
goto L14;
}
si0=l11;
si1=15U;
si0&=si1;
l11=si0;
goto L13;
L14:;
si0=l2;
si1=-4U;
si0+=si1;
l5=si0;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=7U;
si0&=si1;
si1=6U;
si0<<=(si1&31);
si1=l14;
si2=63U;
si1&=si2;
si0|=si1;
l11=si0;
L13:;
si0=l11;
si1=6U;
si0<<=(si1&31);
si1=l13;
si2=63U;
si1&=si2;
si0|=si1;
l11=si0;
L11:;
si0=l11;
si1=6U;
si0<<=(si1&31);
si1=l12;
si2=63U;
si1&=si2;
si0|=si1;
l11=si0;
si1=1114112U;
si0=si0 == si1;
if(si0){
goto L8;
}
L10:;
si0=l11;
si1=l3;
si2=l4;
si0=f13865(i,si0,si1,si2);
if(si0){
goto L9;
}
}
si0=l9;
si1=l8;
si0-=si1;
si1=l2;
si0+=si1;
l6=si0;
L8:;
si0=l0;
si1=l6;
si2=0U;
si3=l10;
si4=l7;
si2=si4?si2:si3;
l2=si2;
si1-=si2;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l1;
si2=l2;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
L0:;
}

U32 f13865(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 l8=0;
U32 l9=0;
U32 si0,si1,si2,si3,si4,si5,si6;
si0=i->g0;
si1=96U;
si0-=si1;
l3=si0;
i->g0=si0;
si0=l0;
si1=128U;
si0=si0 < si1;
if(si0){
goto L8;
}
si0=l3;
si1=0U;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l0;
si1=2048U;
si0=si0 < si1;
if(si0){
goto L7;
}
si0=l0;
si1=65536U;
si0=si0 >= si1;
if(si0){
goto L9;
}
si0=l3;
si1=l0;
si2=63U;
si1&=si2;
si2=128U;
si1|=si2;
i32_store8(&i->m0,(U64)si0+14U,si1);
si0=l3;
si1=l0;
si2=12U;
si1>>=(si2&31);
si2=224U;
si1|=si2;
i32_store8(&i->m0,(U64)si0+12U,si1);
si0=l3;
si1=l0;
si2=6U;
si1>>=(si2&31);
si2=63U;
si1&=si2;
si2=128U;
si1|=si2;
i32_store8(&i->m0,(U64)si0+13U,si1);
si0=3U;
l4=si0;
goto L3;
L9:;
si0=l3;
si1=l0;
si2=63U;
si1&=si2;
si2=128U;
si1|=si2;
i32_store8(&i->m0,(U64)si0+15U,si1);
si0=l3;
si1=l0;
si2=6U;
si1>>=(si2&31);
si2=63U;
si1&=si2;
si2=128U;
si1|=si2;
i32_store8(&i->m0,(U64)si0+14U,si1);
si0=l3;
si1=l0;
si2=12U;
si1>>=(si2&31);
si2=63U;
si1&=si2;
si2=128U;
si1|=si2;
i32_store8(&i->m0,(U64)si0+13U,si1);
si0=l3;
si1=l0;
si2=18U;
si1>>=(si2&31);
si2=7U;
si1&=si2;
si2=240U;
si1|=si2;
i32_store8(&i->m0,(U64)si0+12U,si1);
si0=4U;
l4=si0;
goto L3;
L8:;
si0=l2;
si1=8U;
si0=si0 < si1;
if(si0){
goto L10;
}
si0=l1;
si1=3U;
si0+=si1;
si1=-4U;
si0&=si1;
l4=si0;
si1=l1;
si0=si0 == si1;
if(si0){
goto L6;
}
si0=l4;
si1=l1;
si0-=si1;
l5=si0;
si0=!(si0);
if(si0){
goto L6;
}
si0=l1;
si1=l4;
si0-=si1;
l6=si0;
si0=l0;
si1=255U;
si0&=si1;
l7=si0;
si0=1U;
l8=si0;
si0=l1;
l4=si0;
L11:;
{
si0=l4;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=l7;
si0=si0 == si1;
if(si0){
goto L2;
}
si0=l4;
si1=1U;
si0+=si1;
l4=si0;
si0=l6;
si1=1U;
si0+=si1;
l6=si0;
if(si0){
goto L11;
}
}
si0=l5;
si1=l2;
si2=-8U;
si1+=si2;
l7=si1;
si0=si0 > si1;
if(si0){
goto L4;
}
goto L5;
L10:;
si0=l2;
if(si0){
goto L12;
}
si0=0U;
l8=si0;
goto L2;
L12:;
si0=l1;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=l0;
si2=255U;
si1&=si2;
si0=si0 == si1;
l8=si0;
if(si0){
goto L2;
}
si0=l2;
si1=1U;
si0=si0 == si1;
if(si0){
goto L2;
}
si0=l1;
si0=i32_load8_u(&i->m0,(U64)si0+1U);
si1=l0;
si2=255U;
si1&=si2;
si0=si0 == si1;
l8=si0;
if(si0){
goto L2;
}
si0=l2;
si1=2U;
si0=si0 == si1;
if(si0){
goto L2;
}
si0=l1;
si0=i32_load8_u(&i->m0,(U64)si0+2U);
si1=l0;
si2=255U;
si1&=si2;
si0=si0 == si1;
l8=si0;
if(si0){
goto L2;
}
si0=l2;
si1=3U;
si0=si0 == si1;
if(si0){
goto L2;
}
si0=l1;
si0=i32_load8_u(&i->m0,(U64)si0+3U);
si1=l0;
si2=255U;
si1&=si2;
si0=si0 == si1;
l8=si0;
if(si0){
goto L2;
}
si0=l2;
si1=4U;
si0=si0 == si1;
if(si0){
goto L2;
}
si0=l1;
si0=i32_load8_u(&i->m0,(U64)si0+4U);
si1=l0;
si2=255U;
si1&=si2;
si0=si0 == si1;
l8=si0;
if(si0){
goto L2;
}
si0=l2;
si1=5U;
si0=si0 == si1;
if(si0){
goto L2;
}
si0=l1;
si0=i32_load8_u(&i->m0,(U64)si0+5U);
si1=l0;
si2=255U;
si1&=si2;
si0=si0 == si1;
l8=si0;
if(si0){
goto L2;
}
si0=l2;
si1=6U;
si0=si0 == si1;
if(si0){
goto L2;
}
si0=l1;
si0=i32_load8_u(&i->m0,(U64)si0+6U);
si1=l0;
si2=255U;
si1&=si2;
si0=si0 == si1;
l8=si0;
goto L2;
L7:;
si0=l3;
si1=l0;
si2=63U;
si1&=si2;
si2=128U;
si1|=si2;
i32_store8(&i->m0,(U64)si0+13U,si1);
si0=l3;
si1=l0;
si2=6U;
si1>>=(si2&31);
si2=192U;
si1|=si2;
i32_store8(&i->m0,(U64)si0+12U,si1);
si0=2U;
l4=si0;
goto L3;
L6:;
si0=l2;
si1=-8U;
si0+=si1;
l7=si0;
si0=0U;
l5=si0;
L5:;
si0=l0;
si1=255U;
si0&=si1;
si1=16843009U;
si0*=si1;
l4=si0;
L13:;
{
si0=l1;
si1=l5;
si0+=si1;
l6=si0;
si0=i32_load(&i->m0,(U64)si0);
si1=l4;
si0^=si1;
l8=si0;
si1=-1U;
si0^=si1;
si1=l8;
si2=-16843009U;
si1+=si2;
si0&=si1;
si1=-2139062144U;
si0&=si1;
if(si0){
goto L4;
}
si0=l6;
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=l4;
si0^=si1;
l8=si0;
si1=-1U;
si0^=si1;
si1=l8;
si2=-16843009U;
si1+=si2;
si0&=si1;
si1=-2139062144U;
si0&=si1;
if(si0){
goto L4;
}
si0=l5;
si1=8U;
si0+=si1;
l5=si0;
si1=l7;
si0=si0 <= si1;
if(si0){
goto L13;
}
}
L4:;
si0=0U;
l8=si0;
si0=l5;
si1=l2;
si0=si0 == si1;
if(si0){
goto L2;
}
si0=l1;
si1=l5;
si0+=si1;
l4=si0;
si0=l5;
si1=-1U;
si0^=si1;
si1=l2;
si0+=si1;
l1=si0;
si0=l0;
si1=255U;
si0&=si1;
l0=si0;
L14:;
{
si0=l1;
l5=si0;
si0=l4;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=l0;
si0=si0 == si1;
l8=si0;
if(si0){
goto L2;
}
si0=l4;
si1=1U;
si0+=si1;
l4=si0;
si0=l5;
si1=-1U;
si0+=si1;
l1=si0;
si0=l5;
si0=!(si0);
if(si0){
goto L2;
}
goto L14;
}
L3:;
si0=l4;
si1=l2;
si0=si0 < si1;
if(si0){
goto L15;
}
si0=0U;
l8=si0;
si0=l4;
si1=l2;
si0=si0 != si1;
if(si0){
goto L2;
}
si0=l3;
si1=12U;
si0+=si1;
si1=l1;
si2=l2;
si0=f15389(i,si0,si1,si2);
si0=!(si0);
l8=si0;
goto L2;
L15:;
si0=l3;
si1=32U;
si0+=si1;
si1=l1;
si2=l2;
si3=l3;
si4=12U;
si3+=si4;
si4=l4;
f760(i,si0,si1,si2,si3,si4);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+32U);
if(si0){
goto L17;
}
si0=0U;
l4=si0;
si0=l3;
si1=46U;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
if(si0){
goto L18;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0+80U);
l0=si0;
si0=l3;
si1=44U;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
l6=si0;
si0=l3;
si1=84U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
l8=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+36U);
l5=si0;
si0=!(si0);
if(si0){
goto L19;
}
si0=l1;
si1=l5;
si0=si0 > si1;
if(si0){
goto L21;
}
si0=l1;
si1=l5;
si0=si0 == si1;
if(si0){
goto L20;
}
goto L1;
L21:;
si0=l0;
si1=l5;
si0+=si1;
si0=i32_load8_s(&i->m0,(U64)si0);
si1=-64U;
si0=(U32)((I32)si0<(I32)si1);
if(si0){
goto L1;
}
L20:;
si0=l1;
si1=l5;
si0-=si1;
l8=si0;
L19:;
si0=l8;
si0=!(si0);
if(si0){
goto L23;
}
si0=l0;
si1=l5;
si0+=si1;
l2=si0;
si0=i32_load8_s(&i->m0,(U64)si0);
l8=si0;
si1=-1U;
si0=(U32)((I32)si0>(I32)si1);
if(si0){
goto L25;
}
si0=l2;
si0=i32_load8_u(&i->m0,(U64)si0+1U);
si1=63U;
si0&=si1;
l7=si0;
si0=l8;
si1=31U;
si0&=si1;
l9=si0;
si0=l8;
si1=-32U;
si0=si0 >= si1;
if(si0){
goto L26;
}
si0=l9;
si1=6U;
si0<<=(si1&31);
si1=l7;
si0|=si1;
l8=si0;
goto L24;
L26:;
si0=l7;
si1=6U;
si0<<=(si1&31);
si1=l2;
si1=i32_load8_u(&i->m0,(U64)si1+2U);
si2=63U;
si1&=si2;
si0|=si1;
l7=si0;
si0=l8;
si1=-16U;
si0=si0 >= si1;
if(si0){
goto L27;
}
si0=l7;
si1=l9;
si2=12U;
si1<<=(si2&31);
si0|=si1;
l8=si0;
goto L24;
L27:;
si0=l7;
si1=6U;
si0<<=(si1&31);
si1=l2;
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
goto L24;
L25:;
si0=l8;
si1=255U;
si0&=si1;
l8=si0;
L24:;
si0=l6;
si1=255U;
si0&=si1;
if(si0){
goto L22;
}
si0=l8;
si1=1114112U;
si0=si0 == si1;
if(si0){
goto L18;
}
si0=1U;
l4=si0;
si0=l8;
si1=128U;
si0=si0 < si1;
if(si0){
goto L28;
}
si0=2U;
l4=si0;
si0=l8;
si1=2048U;
si0=si0 < si1;
if(si0){
goto L28;
}
si0=3U;
si1=4U;
si2=l8;
si3=65536U;
si2=si2 < si3;
si0=si2?si0:si1;
l4=si0;
L28:;
si0=l4;
si1=l5;
si0+=si1;
l5=si0;
si0=!(si0);
if(si0){
goto L29;
}
si0=l1;
si1=l5;
si0=si0 > si1;
if(si0){
goto L31;
}
si0=l1;
si1=l5;
si0=si0 != si1;
if(si0){
goto L1;
}
goto L30;
L31:;
si0=l0;
si1=l5;
si0+=si1;
si0=i32_load8_s(&i->m0,(U64)si0);
si1=-64U;
si0=(U32)((I32)si0<(I32)si1);
if(si0){
goto L1;
}
L30:;
si0=l1;
si1=l5;
si0-=si1;
l1=si0;
L29:;
si0=l1;
si0=!(si0);
if(si0){
goto L22;
}
si0=l0;
si1=l5;
si0+=si1;
si0=i32_load8_s(&i->m0,(U64)si0);
si1=-1U;
si0=(U32)((I32)si0>(I32)si1);
goto L22;
L23:;
si0=l6;
si1=255U;
si0&=si1;
si0=!(si0);
if(si0){
goto L18;
}
L22:;
si0=1U;
l4=si0;
L18:;
si0=l3;
si1=l4;
i32_store(&i->m0,(U64)si0+16U,si1);
goto L16;
L17:;
si0=l3;
si1=40U;
si0+=si1;
l4=si0;
si0=l3;
si1=92U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si0=l3;
si1=84U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+88U);
l8=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+80U);
l0=si0;
si0=l3;
si1=68U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=-1U;
si0=si0 == si1;
if(si0){
goto L32;
}
si0=l3;
si1=16U;
si0+=si1;
si1=l4;
si2=l0;
si3=l1;
si4=l8;
si5=l5;
si6=0U;
f13868(i,si0,si1,si2,si3,si4,si5,si6);
goto L16;
L32:;
si0=l3;
si1=16U;
si0+=si1;
si1=l4;
si2=l0;
si3=l1;
si4=l8;
si5=l5;
si6=1U;
f13868(i,si0,si1,si2,si3,si4,si5,si6);
L16:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+16U);
si1=0U;
si0=si0 != si1;
l8=si0;
L2:;
si0=l3;
si1=96U;
si0+=si1;
i->g0=si0;
si0=l8;
goto L0;
L1:;
si0=l0;
si1=l1;
si2=l5;
si3=l1;
si4=1952912U;
f737(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L0:;
return si0;
}

void f13866(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 l8=0;
U32 si0,si1,si2;
si0=0U;
l3=si0;
si0=l2;
si0=!(si0);
if(si0){
goto L1;
}
si0=l1;
si1=l2;
si0+=si1;
l2=si0;
L2:;
{
si0=l2;
l4=si0;
si1=-1U;
si0+=si1;
l2=si0;
si0=i32_load8_u(&i->m0,(U64)si0);
l5=si0;
si0=(U32)(U32)(I8)(U8)(si0);
l6=si0;
si1=-1U;
si0=(U32)((I32)si0>(I32)si1);
if(si0){
goto L3;
}
si0=l4;
si1=-2U;
si0+=si1;
l2=si0;
si0=i32_load8_u(&i->m0,(U64)si0);
l5=si0;
si0=(U32)(U32)(I8)(U8)(si0);
l7=si0;
si1=-64U;
si0=(U32)((I32)si0<(I32)si1);
if(si0){
goto L5;
}
si0=l5;
si1=31U;
si0&=si1;
l5=si0;
goto L4;
L5:;
si0=l4;
si1=-3U;
si0+=si1;
l2=si0;
si0=i32_load8_u(&i->m0,(U64)si0);
l5=si0;
si0=(U32)(U32)(I8)(U8)(si0);
l8=si0;
si1=-64U;
si0=(U32)((I32)si0<(I32)si1);
if(si0){
goto L7;
}
si0=l5;
si1=15U;
si0&=si1;
l5=si0;
goto L6;
L7:;
si0=l4;
si1=-4U;
si0+=si1;
l2=si0;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=7U;
si0&=si1;
si1=6U;
si0<<=(si1&31);
si1=l8;
si2=63U;
si1&=si2;
si0|=si1;
l5=si0;
L6:;
si0=l5;
si1=6U;
si0<<=(si1&31);
si1=l7;
si2=63U;
si1&=si2;
si0|=si1;
l5=si0;
L4:;
si0=l5;
si1=6U;
si0<<=(si1&31);
si1=l6;
si2=63U;
si1&=si2;
si0|=si1;
l5=si0;
si1=1114112U;
si0=si0 == si1;
if(si0){
goto L1;
}
L3:;
si0=l5;
si1=-9U;
si0+=si1;
si1=5U;
si0=si0 < si1;
if(si0){
goto L9;
}
si0=l5;
si1=32U;
si0=si0 == si1;
if(si0){
goto L9;
}
si0=l5;
si1=128U;
si0=si0 < si1;
if(si0){
goto L8;
}
si0=l5;
si1=8U;
si0>>=(si1&31);
l6=si0;
si1=-22U;
si0+=si1;
switch(si0){
case 0:
goto L13;
case 1:
goto L8;
case 2:
goto L8;
case 3:
goto L8;
case 4:
goto L8;
case 5:
goto L8;
case 6:
goto L8;
case 7:
goto L8;
case 8:
goto L8;
case 9:
goto L8;
case 10:
goto L11;
case 11:
goto L8;
case 12:
goto L8;
case 13:
goto L8;
case 14:
goto L8;
case 15:
goto L8;
case 16:
goto L8;
case 17:
goto L8;
case 18:
goto L8;
case 19:
goto L8;
case 20:
goto L8;
case 21:
goto L8;
case 22:
goto L8;
case 23:
goto L8;
case 24:
goto L8;
case 25:
goto L8;
case 26:
goto L12;
default:
goto L10;
}
L13:;
si0=l5;
si1=5760U;
si0=si0 == si1;
if(si0){
goto L9;
}
goto L8;
L12:;
si0=l5;
si1=12288U;
si0=si0 == si1;
if(si0){
goto L9;
}
goto L8;
L11:;
si0=l5;
si1=255U;
si0&=si1;
si1=1124490U;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=2U;
si0&=si1;
if(si0){
goto L9;
}
goto L8;
L10:;
si0=l6;
if(si0){
goto L8;
}
si0=l5;
si1=255U;
si0&=si1;
si1=1124490U;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=1U;
si0&=si1;
si0=!(si0);
if(si0){
goto L8;
}
L9:;
si0=l2;
si1=l1;
si0=si0 != si1;
if(si0){
goto L2;
}
goto L1;
L8:;
}
si0=l4;
si1=l1;
si0-=si1;
l3=si0;
L1:;
si0=l0;
si1=l3;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l1;
i32_store(&i->m0,(U64)si0,si1);
L0:;
}

void f13867(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 l8=0;
U32 si0,si1,si2;
si0=l2;
if(si0){
goto L2;
}
si0=0U;
l3=si0;
goto L1;
L2:;
si0=l1;
si1=l2;
si0+=si1;
l4=si0;
si0=0U;
l3=si0;
si0=l1;
l5=si0;
L4:;
{
si0=l5;
l6=si0;
si0=i32_load8_s(&i->m0,(U64)si0);
l7=si0;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L6;
}
si0=l6;
si1=1U;
si0+=si1;
l5=si0;
si0=l7;
si1=255U;
si0&=si1;
l7=si0;
goto L5;
L6:;
si0=l6;
si0=i32_load8_u(&i->m0,(U64)si0+1U);
si1=63U;
si0&=si1;
l5=si0;
si0=l7;
si1=31U;
si0&=si1;
l8=si0;
si0=l7;
si1=-33U;
si0=si0 > si1;
if(si0){
goto L7;
}
si0=l8;
si1=6U;
si0<<=(si1&31);
si1=l5;
si0|=si1;
l7=si0;
si0=l6;
si1=2U;
si0+=si1;
l5=si0;
goto L5;
L7:;
si0=l5;
si1=6U;
si0<<=(si1&31);
si1=l6;
si1=i32_load8_u(&i->m0,(U64)si1+2U);
si2=63U;
si1&=si2;
si0|=si1;
l5=si0;
si0=l7;
si1=-16U;
si0=si0 >= si1;
if(si0){
goto L8;
}
si0=l5;
si1=l8;
si2=12U;
si1<<=(si2&31);
si0|=si1;
l7=si0;
si0=l6;
si1=3U;
si0+=si1;
l5=si0;
goto L5;
L8:;
si0=l5;
si1=6U;
si0<<=(si1&31);
si1=l6;
si1=i32_load8_u(&i->m0,(U64)si1+3U);
si2=63U;
si1&=si2;
si0|=si1;
si1=l8;
si2=18U;
si1<<=(si2&31);
si2=1835008U;
si1&=si2;
si0|=si1;
l7=si0;
si1=1114112U;
si0=si0 == si1;
if(si0){
goto L3;
}
si0=l6;
si1=4U;
si0+=si1;
l5=si0;
L5:;
si0=l7;
si1=-9U;
si0+=si1;
si1=5U;
si0=si0 < si1;
if(si0){
goto L9;
}
si0=l7;
si1=32U;
si0=si0 == si1;
if(si0){
goto L9;
}
si0=l7;
si1=128U;
si0=si0 < si1;
if(si0){
goto L1;
}
si0=l7;
si1=8U;
si0>>=(si1&31);
l8=si0;
si1=-22U;
si0+=si1;
switch(si0){
case 0:
goto L12;
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
goto L1;
case 8:
goto L1;
case 9:
goto L1;
case 10:
goto L10;
case 11:
goto L1;
case 12:
goto L1;
case 13:
goto L1;
case 14:
goto L1;
case 15:
goto L1;
case 16:
goto L1;
case 17:
goto L1;
case 18:
goto L1;
case 19:
goto L1;
case 20:
goto L1;
case 21:
goto L1;
case 22:
goto L1;
case 23:
goto L1;
case 24:
goto L1;
case 25:
goto L1;
case 26:
goto L11;
default:
goto L13;
}
L13:;
si0=l8;
if(si0){
goto L1;
}
si0=l7;
si1=255U;
si0&=si1;
si1=1124490U;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=1U;
si0&=si1;
if(si0){
goto L9;
}
goto L1;
L12:;
si0=l7;
si1=5760U;
si0=si0 == si1;
if(si0){
goto L9;
}
goto L1;
L11:;
si0=l7;
si1=12288U;
si0=si0 == si1;
if(si0){
goto L9;
}
goto L1;
L10:;
si0=l7;
si1=255U;
si0&=si1;
si1=1124490U;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=2U;
si0&=si1;
si0=!(si0);
if(si0){
goto L1;
}
L9:;
si0=l3;
si1=l6;
si0-=si1;
si1=l5;
si0+=si1;
l3=si0;
si0=l5;
si1=l4;
si0=si0 != si1;
if(si0){
goto L4;
}
}
L3:;
si0=l2;
l3=si0;
L1:;
si0=l0;
si1=l2;
si2=l3;
si1-=si2;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l1;
si2=l3;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
L0:;
}

void f13868(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4,U32 l5,U32 l6) {
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
si2=1952488U;
f663(i,si0,si1,si2);
UNREACHABLE;
L3:;
si0=l19;
si1=l3;
si2=1952504U;
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
si2=1952520U;
f663(i,si0,si1,si2);
UNREACHABLE;
L0:;
}

U32 f13869(rustpythonInstance*i,U32 l0,U32 l1) {
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
si1=129U;
si0=si0 < si1;
if(si0){
goto L3;
}
si0=l0;
si1=128U;
si2=1103788U;
f662(i,si0,si1,si2);
UNREACHABLE;
L3:;
si0=l1;
si1=1U;
si2=1103804U;
si3=2U;
si4=l2;
si5=l6;
si4+=si5;
si5=128U;
si4+=si5;
si5=0U;
si6=l6;
si5-=si6;
si0=f733(i,si0,si1,si2,si3,si4,si5);
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

U32 f13870(rustpythonInstance*i,U32 l0,U32 l1) {
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

U32 f13871(rustpythonInstance*i,U32 l0,U32 l1) {
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
f7247(i,si0,si1);
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
f7248(i,si0,si1,si2);
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

U32 f13872(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
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
f7248(i,si0,si1,si2);
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

U32 f13873(rustpythonInstance*i,U32 l0,U32 l1) {
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

U32 f13874(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 l3=0;
U32 l4=0;
U32 si0,si1,si2,si3,si4,si5;
si0=i->g0;
si1=16U;
si0-=si1;
l2=si0;
i->g0=si0;
si0=l0;
si0=i32_load8_u(&i->m0,(U64)si0);
l3=si0;
L5:;
{
si0=l3;
si1=1U;
si0&=si1;
if(si0){
goto L4;
}
si0=l3;
si1=255U;
si0&=si1;
l4=si0;
si0=l0;
si1=l3;
si2=1U;
si1|=si2;
si2=l0;
si2=i32_load8_u(&i->m0,(U64)si2);
l3=si2;
si3=l3;
si4=l4;
si3=si3 == si4;
l4=si3;
si1=si3?si1:si2;
i32_store8(&i->m0,(U64)si0,si1);
si0=l4;
si0=!(si0);
if(si0){
goto L5;
}
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=1952632U;
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
si1=1951902U;
si2=4U;
si3=l2;
si4=4U;
si3+=si4;
si4=1952800U;
si0=f715(i,si0,si1,si2,si3,si4);
l4=si0;
si0=i32_load8_u(&i->m0,(U64)si0+4U);
l1=si0;
si0=l4;
si0=i32_load8_u(&i->m0,(U64)si0+5U);
if(si0){
goto L3;
}
si0=l1;
si1=255U;
si0&=si1;
si1=0U;
si0=si0 != si1;
l3=si0;
goto L2;
L4:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=1952632U;
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
si1=1951902U;
si2=4U;
si3=1952408U;
si4=1952640U;
si0=f715(i,si0,si1,si2,si3,si4);
l0=si0;
si0=i32_load8_u(&i->m0,(U64)si0+4U);
l4=si0;
si0=l0;
si0=i32_load8_u(&i->m0,(U64)si0+5U);
if(si0){
goto L6;
}
si0=l4;
si1=255U;
si0&=si1;
si1=0U;
si0=si0 != si1;
l3=si0;
goto L1;
L6:;
si0=1U;
l3=si0;
si0=l4;
si1=255U;
si0&=si1;
if(si0){
goto L7;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=i32_load8_u(&i->m0,(U64)si0+28U);
si1=4U;
si0&=si1;
if(si0){
goto L8;
}
si0=l0;
si1=l3;
si1=i32_load(&i->m0,(U64)si1+20U);
si2=1103462U;
si3=2U;
si4=l3;
si5=24U;
si4+=si5;
si4=i32_load(&i->m0,(U64)si4);
si4=i32_load(&i->m0,(U64)si4+12U);
si1=TF(i->t0,si4,U32 (*)(rustpythonInstance*,U32,U32,U32))(i,si1,si2,si3);
l3=si1;
i32_store8(&i->m0,(U64)si0+4U,si1);
goto L1;
L8:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=1103461U;
si2=1U;
si3=l3;
si4=24U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si3=i32_load(&i->m0,(U64)si3+12U);
si0=TF(i->t0,si3,U32 (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
l3=si0;
L7:;
si0=l0;
si1=l3;
i32_store8(&i->m0,(U64)si0+4U,si1);
goto L1;
L3:;
si0=1U;
l3=si0;
si0=l1;
si1=255U;
si0&=si1;
if(si0){
goto L9;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=i32_load8_u(&i->m0,(U64)si0+28U);
si1=4U;
si0&=si1;
if(si0){
goto L10;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=1103462U;
si2=2U;
si3=l3;
si4=24U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si3=i32_load(&i->m0,(U64)si3+12U);
si0=TF(i->t0,si3,U32 (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
l3=si0;
goto L9;
L10:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=1103461U;
si2=1U;
si3=l3;
si4=24U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si3=i32_load(&i->m0,(U64)si3+12U);
si0=TF(i->t0,si3,U32 (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
l3=si0;
L9:;
si0=l4;
si1=l3;
i32_store8(&i->m0,(U64)si0+4U,si1);
L2:;
si0=l0;
si1=0U;
si2=l0;
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
goto L1;
}
si0=l0;
si1=0U;
f1440(i,si0,si1);
L1:;
si0=l2;
si1=16U;
si0+=si1;
i->g0=si0;
si0=l3;
L0:;
return si0;
}

U32 f13875(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 l3=0;
U32 l4=0;
U32 si0,si1,si2,si3,si4,si5;
si0=i->g0;
si1=16U;
si0-=si1;
l2=si0;
i->g0=si0;
si0=l0;
si0=i32_load8_u(&i->m0,(U64)si0);
l3=si0;
L5:;
{
si0=l3;
si1=1U;
si0&=si1;
if(si0){
goto L4;
}
si0=l3;
si1=255U;
si0&=si1;
l4=si0;
si0=l0;
si1=l3;
si2=1U;
si1|=si2;
si2=l0;
si2=i32_load8_u(&i->m0,(U64)si2);
l3=si2;
si3=l3;
si4=l4;
si3=si3 == si4;
l4=si3;
si1=si3?si1:si2;
i32_store8(&i->m0,(U64)si0,si1);
si0=l4;
si0=!(si0);
if(si0){
goto L5;
}
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=1952632U;
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
si1=1951902U;
si2=4U;
si3=l2;
si4=4U;
si3+=si4;
si4=1952880U;
si0=f715(i,si0,si1,si2,si3,si4);
l4=si0;
si0=i32_load8_u(&i->m0,(U64)si0+4U);
l1=si0;
si0=l4;
si0=i32_load8_u(&i->m0,(U64)si0+5U);
if(si0){
goto L3;
}
si0=l1;
si1=255U;
si0&=si1;
si1=0U;
si0=si0 != si1;
l3=si0;
goto L2;
L4:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=1952632U;
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
si1=1951902U;
si2=4U;
si3=1952408U;
si4=1952640U;
si0=f715(i,si0,si1,si2,si3,si4);
l0=si0;
si0=i32_load8_u(&i->m0,(U64)si0+4U);
l4=si0;
si0=l0;
si0=i32_load8_u(&i->m0,(U64)si0+5U);
if(si0){
goto L6;
}
si0=l4;
si1=255U;
si0&=si1;
si1=0U;
si0=si0 != si1;
l3=si0;
goto L1;
L6:;
si0=1U;
l3=si0;
si0=l4;
si1=255U;
si0&=si1;
if(si0){
goto L7;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=i32_load8_u(&i->m0,(U64)si0+28U);
si1=4U;
si0&=si1;
if(si0){
goto L8;
}
si0=l0;
si1=l3;
si1=i32_load(&i->m0,(U64)si1+20U);
si2=1103462U;
si3=2U;
si4=l3;
si5=24U;
si4+=si5;
si4=i32_load(&i->m0,(U64)si4);
si4=i32_load(&i->m0,(U64)si4+12U);
si1=TF(i->t0,si4,U32 (*)(rustpythonInstance*,U32,U32,U32))(i,si1,si2,si3);
l3=si1;
i32_store8(&i->m0,(U64)si0+4U,si1);
goto L1;
L8:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=1103461U;
si2=1U;
si3=l3;
si4=24U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si3=i32_load(&i->m0,(U64)si3+12U);
si0=TF(i->t0,si3,U32 (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
l3=si0;
L7:;
si0=l0;
si1=l3;
i32_store8(&i->m0,(U64)si0+4U,si1);
goto L1;
L3:;
si0=1U;
l3=si0;
si0=l1;
si1=255U;
si0&=si1;
if(si0){
goto L9;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=i32_load8_u(&i->m0,(U64)si0+28U);
si1=4U;
si0&=si1;
if(si0){
goto L10;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=1103462U;
si2=2U;
si3=l3;
si4=24U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si3=i32_load(&i->m0,(U64)si3+12U);
si0=TF(i->t0,si3,U32 (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
l3=si0;
goto L9;
L10:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=1103461U;
si2=1U;
si3=l3;
si4=24U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si3=i32_load(&i->m0,(U64)si3+12U);
si0=TF(i->t0,si3,U32 (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
l3=si0;
L9:;
si0=l4;
si1=l3;
i32_store8(&i->m0,(U64)si0+4U,si1);
L2:;
si0=l0;
si1=0U;
si2=l0;
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
goto L1;
}
si0=l0;
si1=0U;
f1440(i,si0,si1);
L1:;
si0=l2;
si1=16U;
si0+=si1;
i->g0=si0;
si0=l3;
L0:;
return si0;
}

U32 f13876(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 l3=0;
U32 si0,si1,si2,si3,si4;
si0=i->g0;
si1=16U;
si0-=si1;
l2=si0;
i->g0=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
l0=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=1959976U;
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
si1=1959988U;
si2=13U;
si3=l0;
si4=4U;
si3+=si4;
si4=1960004U;
si0=f715(i,si0,si1,si2,si3,si4);
si1=1960020U;
si2=11U;
si3=l0;
si4=8U;
si3+=si4;
si4=1960004U;
si0=f715(i,si0,si1,si2,si3,si4);
si1=1960031U;
si2=10U;
si3=l0;
si4=16U;
si3+=si4;
si4=1960044U;
si0=f715(i,si0,si1,si2,si3,si4);
l1=si0;
si0=i32_load8_u(&i->m0,(U64)si0+4U);
l3=si0;
si0=l1;
si0=i32_load8_u(&i->m0,(U64)si0+5U);
if(si0){
goto L2;
}
si0=l3;
si1=255U;
si0&=si1;
si1=0U;
si0=si0 != si1;
l0=si0;
goto L1;
L2:;
si0=1U;
l0=si0;
si0=l3;
si1=255U;
si0&=si1;
if(si0){
goto L3;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l0=si0;
si0=i32_load8_u(&i->m0,(U64)si0+28U);
si1=4U;
si0&=si1;
if(si0){
goto L4;
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
goto L3;
L4:;
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
L3:;
si0=l1;
si1=l0;
i32_store8(&i->m0,(U64)si0+4U,si1);
L1:;
si0=l2;
si1=16U;
si0+=si1;
i->g0=si0;
si0=l0;
L0:;
return si0;
}

U32 f13877(rustpythonInstance*i,U32 l0,U32 l1) {
U32 si0,si1,si2,si3;
si0=l1;
si1=l0;
si1=i32_load(&i->m0,(U64)si1);
si1=i32_load(&i->m0,(U64)si1+4U);
l0=si1;
si2=64U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
si2=l0;
si3=68U;
si2+=si3;
si2=i32_load(&i->m0,(U64)si2);
si0=f713(i,si0,si1,si2);
L0:;
return si0;
}

void f13878(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4) {
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 l8=0;
U32 l9=0;
U32 si0,si1,si2,si3,si4,si5;
U64 sj1,sj2,sj3;
si0=i->g0;
si1=32U;
si0-=si1;
l5=si0;
i->g0=si0;
si0=l5;
si1=l1;
si1=i32_load8_u(&i->m0,(U64)si1);
l1=si1;
i32_store8(&i->m0,(U64)si0+2U,si1);
si0=l5;
sj1=5523395248386ULL;
si2=l1;
si3=-1U;
si2+=si3;
sj2=(U64)(si2);
sj3=255ULL;
sj2&=sj3;
sj3=3ULL;
sj2<<=(sj3&63);
sj1>>=(sj2&63);
i64_store8(&i->m0,(U64)si0+3U,sj1);
si0=l5;
si1=l2;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=0U;
l6=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+28U);
l7=si0;
si1=l3;
si1=i32_load(&i->m0,(U64)si1+28U);
l8=si1;
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
l1=si0;
si0=l7;
si1=460U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
L6:;
{
si0=l1;
si0=!(si0);
if(si0){
goto L5;
}
si0=l1;
si1=-4U;
si0+=si1;
l1=si0;
si0=l7;
si0=i32_load(&i->m0,(U64)si0);
l9=si0;
si0=l7;
si1=4U;
si0+=si1;
l7=si0;
si0=l9;
si1=l8;
si0=si0 != si1;
if(si0){
goto L6;
}
}
si0=l5;
si1=l3;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l5;
si1=l4;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l5;
si1=l5;
si2=3U;
si1+=si2;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l5;
si1=l5;
si2=4U;
si1+=si2;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l5;
si1=8U;
si0+=si1;
si1=l2;
si2=1959480U;
si3=13U;
si4=l5;
si5=16U;
si4+=si5;
f7605(i,si0,si1,si2,si3,si4);
si0=l5;
si0=i32_load8_u(&i->m0,(U64)si0+8U);
l1=si0;
si1=3U;
si0=si0 == si1;
if(si0){
goto L3;
}
si0=1U;
l6=si0;
si0=l1;
si1=2U;
si0=si0 != si1;
if(si0){
goto L4;
}
L5:;
si0=l5;
si1=l4;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l5;
si1=l3;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l5;
si1=l5;
si2=2U;
si1+=si2;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l5;
si1=l5;
si2=4U;
si1+=si2;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l5;
si1=8U;
si0+=si1;
si1=l2;
si2=1959480U;
si3=13U;
si4=l5;
si5=16U;
si4+=si5;
f7605(i,si0,si1,si2,si3,si4);
si0=l5;
si0=i32_load8_u(&i->m0,(U64)si0+8U);
l1=si0;
si1=3U;
si0=si0 == si1;
if(si0){
goto L3;
}
si0=l1;
si1=2U;
si0=si0 == si1;
if(si0){
goto L7;
}
si0=l5;
si0=i32_load(&i->m0,(U64)si0+12U);
l7=si0;
si0=l5;
si0=i32_load16_u(&i->m0,(U64)si0+9U);
si1=l5;
si1=i32_load8_u(&i->m0,(U64)si1+11U);
si2=16U;
si1<<=(si2&31);
si0|=si1;
si1=8U;
si0<<=(si1&31);
si1=l1;
si0|=si1;
l1=si0;
goto L1;
L7:;
si0=l6;
if(si0){
goto L2;
}
si0=l5;
si1=l3;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l5;
si1=l4;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l5;
si1=l5;
si2=3U;
si1+=si2;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l5;
si1=l5;
si2=4U;
si1+=si2;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l5;
si1=8U;
si0+=si1;
si1=l2;
si2=1959480U;
si3=13U;
si4=l5;
si5=16U;
si4+=si5;
f7605(i,si0,si1,si2,si3,si4);
si0=l5;
si0=i32_load8_u(&i->m0,(U64)si0+8U);
l1=si0;
si1=3U;
si0=si0 == si1;
if(si0){
goto L3;
}
si0=l1;
si1=2U;
si0=si0 == si1;
if(si0){
goto L2;
}
si0=l5;
si0=i32_load(&i->m0,(U64)si0+12U);
l7=si0;
si0=l5;
si0=i32_load16_u(&i->m0,(U64)si0+9U);
si1=l5;
si1=i32_load8_u(&i->m0,(U64)si1+11U);
si2=16U;
si1<<=(si2&31);
si0|=si1;
si1=8U;
si0<<=(si1&31);
si1=l1;
si0|=si1;
l1=si0;
goto L1;
L4:;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+12U);
l7=si0;
si0=l5;
si0=i32_load16_u(&i->m0,(U64)si0+9U);
si1=l5;
si1=i32_load8_u(&i->m0,(U64)si1+11U);
si2=16U;
si1<<=(si2&31);
si0|=si1;
si1=8U;
si0<<=(si1&31);
si1=l1;
si0|=si1;
l1=si0;
goto L1;
L3:;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+12U);
l7=si0;
si0=2U;
l1=si0;
goto L1;
L2:;
si0=1810698U;
l7=si0;
si0=l5;
si0=i32_load8_u(&i->m0,(U64)si0+2U);
l9=si0;
si1=-1U;
si0+=si1;
switch(si0){
case 0:
goto L10;
case 1:
goto L13;
case 2:
goto L9;
case 3:
goto L8;
case 4:
goto L12;
case 5:
goto L11;
default:
goto L10;
}
L13:;
si0=1U;
l9=si0;
si0=1810898U;
l7=si0;
goto L10;
L12:;
si0=2U;
l9=si0;
si0=1825884U;
l7=si0;
goto L10;
L11:;
si0=2U;
l9=si0;
si0=1825886U;
l7=si0;
L10:;
si0=2U;
l1=si0;
si0=l2;
si1=l3;
si2=l4;
si3=l7;
si4=l9;
si0=f7577(i,si0,si1,si2,si3,si4);
l7=si0;
goto L1;
L9:;
si0=1U;
si1=257U;
si2=l4;
si3=l3;
si2=si2 == si3;
si0=si2?si0:si1;
l1=si0;
goto L1;
L8:;
si0=257U;
si1=1U;
si2=l4;
si3=l3;
si2=si2 == si3;
si0=si2?si0:si1;
l1=si0;
L1:;
si0=l1;
si1=255U;
si0&=si1;
si1=2U;
si0=si0 == si1;
if(si0){
goto L15;
}
si0=l1;
si1=1U;
si0&=si1;
if(si0){
goto L16;
}
si0=l0;
si1=l7;
si2=l2;
f7740(i,si0,si1,si2);
goto L14;
L16:;
si0=l0;
si1=0U;
i32_store8(&i->m0,(U64)si0,si1);
si0=l0;
si1=l1;
si2=8U;
si1>>=(si2&31);
si2=1U;
si1&=si2;
i32_store8(&i->m0,(U64)si0+1U,si1);
goto L14;
L15:;
si0=l0;
si1=1U;
i32_store8(&i->m0,(U64)si0,si1);
si0=l0;
si1=l7;
i32_store(&i->m0,(U64)si0+4U,si1);
L14:;
si0=l5;
si1=32U;
si0+=si1;
i->g0=si0;
L0:;
}

U32 f13879(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 l3=0;
U32 l4=0;
U32 si0,si1,si2,si3,si4,si5;
si0=i->g0;
si1=32U;
si0-=si1;
l2=si0;
i->g0=si0;
si0=l2;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+20U);
si2=1952971U;
si3=8U;
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
si0=l2;
si1=0U;
i32_store8(&i->m0,(U64)si0+17U,si1);
si0=l2;
si1=0U;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l2;
si1=l0;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
l1=si1;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l2;
si1=l0;
si2=12U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
si2=l1;
si1-=si2;
si2=2U;
si1>>=(si2&31);
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l2;
si1=8U;
si0+=si1;
si1=l2;
si2=24U;
si1+=si2;
si2=1952980U;
si0=f716(i,si0,si1,si2);
l1=si0;
si0=i32_load8_u(&i->m0,(U64)si0+8U);
l3=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
if(si0){
goto L2;
}
si0=l3;
si1=255U;
si0&=si1;
si1=0U;
si0=si0 != si1;
l0=si0;
goto L1;
L2:;
si0=1U;
l0=si0;
si0=l3;
si1=255U;
si0&=si1;
if(si0){
goto L3;
}
si0=l4;
si1=1U;
si0=si0 != si1;
if(si0){
goto L6;
}
si0=l1;
si0=i32_load8_u(&i->m0,(U64)si0+9U);
si1=255U;
si0&=si1;
if(si0){
goto L5;
}
L6:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
l3=si0;
goto L4;
L5:;
si0=l1;
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=i32_load8_u(&i->m0,(U64)si0+28U);
si1=4U;
si0&=si1;
if(si0){
goto L4;
}
si0=1U;
l0=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=1103467U;
si2=1U;
si3=l3;
si4=24U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si3=i32_load(&i->m0,(U64)si3+12U);
si0=TF(i->t0,si3,U32 (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
if(si0){
goto L3;
}
L4:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=1102923U;
si2=1U;
si3=l3;
si4=24U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si3=i32_load(&i->m0,(U64)si3+12U);
si0=TF(i->t0,si3,U32 (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
l0=si0;
L3:;
si0=l1;
si1=l0;
i32_store8(&i->m0,(U64)si0+8U,si1);
L1:;
si0=l2;
si1=32U;
si0+=si1;
i->g0=si0;
si0=l0;
L0:;
return si0;
}

void f13880(rustpythonInstance*i,U32 l0) {
U32 l1=0;
U32 l2=0;
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
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
si1=112U;
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
si0=l2;
si1=l4;
si2=112U;
si1*=si2;
si0+=si1;
l1=si0;
f13851(i,si0);
si0=l1;
si1=48U;
si0+=si1;
f13851(i,si0);
si0=l1;
si1=96U;
si0+=si1;
l5=si0;
si0=l1;
si1=104U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si0=!(si0);
if(si0){
goto L3;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+96U);
l1=si0;
L4:;
{
si0=l1;
f11164(i,si0);
si0=l1;
si1=48U;
si0+=si1;
l1=si0;
si0=l6;
si1=-1U;
si0+=si1;
l6=si0;
if(si0){
goto L4;
}
}
L3:;
si0=l4;
si1=1U;
si0+=si1;
l4=si0;
si0=l5;
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L5;
}
si0=l5;
si0=i32_load(&i->m0,(U64)si0);
f15271(i,si0);
L5:;
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
goto L6;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
f15271(i,si0);
L6:;
L0:;
}

void f13881(rustpythonInstance*i,U32 l0) {
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
si1=24U;
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
si1=24U;
si0*=si1;
l1=si0;
si0=l4;
si1=1U;
si0+=si1;
l4=si0;
si0=l2;
si1=l1;
si0+=si1;
l5=si0;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si1=-2U;
si0+=si1;
l1=si0;
si1=4U;
si2=l1;
si3=9U;
si2=si2 < si3;
si0=si2?si0:si1;
si1=-2U;
si0+=si1;
switch(si0){
case 0:
goto L9;
case 1:
goto L8;
case 2:
goto L7;
case 3:
goto L6;
default:
goto L3;
}
L9:;
si0=l5;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L3;
}
goto L5;
L8:;
si0=l5;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L5;
}
goto L3;
L7:;
si0=l6;
si0=!(si0);
if(si0){
goto L3;
}
si0=l5;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L5;
}
goto L3;
L6:;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+4U);
l7=si0;
si0=l5;
si1=12U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si0=!(si0);
if(si0){
goto L10;
}
si0=l7;
l1=si0;
L11:;
{
si0=l1;
f11158(i,si0);
si0=l1;
si1=24U;
si0+=si1;
l1=si0;
si0=l6;
si1=-1U;
si0+=si1;
l6=si0;
if(si0){
goto L11;
}
}
L10:;
si0=l5;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L4;
}
goto L3;
L5:;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+4U);
l7=si0;
L4:;
si0=l7;
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
goto L12;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
f15271(i,si0);
L12:;
L0:;
}

void f13882(rustpythonInstance*i,U32 l0) {
U32 l1=0;
U32 l2=0;
U32 l3=0;
U32 l4=0;
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
si0=si0 == si1;
if(si0){
goto L1;
}
si0=l1;
si1=l2;
si0-=si1;
si1=2U;
si0>>=(si1&31);
l3=si0;
L2:;
{
si0=l2;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si1=l1;
si1=i32_load(&i->m0,(U64)si1);
l4=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=1U;
si0=si0 != si1;
if(si0){
goto L3;
}
si0=l1;
f7690(i,si0);
L3:;
si0=l2;
si1=4U;
si0+=si1;
l2=si0;
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
goto L4;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
f15271(i,si0);
L4:;
L0:;
}

void f13883(rustpythonInstance*i,U32 l0) {
U32 l1=0;
U32 l2=0;
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 l8=0;
U32 l9=0;
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
si0=l2;
si1=l4;
si2=72U;
si1*=si2;
si0+=si1;
l5=si0;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
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
goto L3;
}
si0=l1;
f7690(i,si0);
L3:;
si0=l5;
si1=56U;
si0+=si1;
l7=si0;
si0=l5;
si1=64U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l8=si0;
si0=!(si0);
if(si0){
goto L4;
}
si0=l7;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
L5:;
{
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
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
goto L6;
}
si0=l6;
f7690(i,si0);
L6:;
si0=l1;
si1=4U;
si0+=si1;
l1=si0;
si0=l8;
si1=-1U;
si0+=si1;
l8=si0;
if(si0){
goto L5;
}
}
L4:;
si0=l7;
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L7;
}
si0=l7;
si0=i32_load(&i->m0,(U64)si0);
f15271(i,si0);
L7:;
si0=l5;
si1=28U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si0=!(si0);
if(si0){
goto L8;
}
si0=l5;
si1=24U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=l1;
si2=2U;
si1<<=(si2&31);
si2=11U;
si1+=si2;
si2=-8U;
si1&=si2;
si0-=si1;
f15271(i,si0);
L8:;
si0=l5;
si1=40U;
si0+=si1;
l7=si0;
si0=l5;
si1=48U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l8=si0;
si0=!(si0);
if(si0){
goto L9;
}
si0=l7;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
L10:;
{
si0=l1;
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L11;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
f15271(i,si0);
L11:;
si0=l1;
si1=12U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
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
goto L12;
}
si0=l6;
f7690(i,si0);
L12:;
si0=l1;
si1=20U;
si0+=si1;
l1=si0;
si0=l8;
si1=-1U;
si0+=si1;
l8=si0;
if(si0){
goto L10;
}
}
L9:;
si0=l4;
si1=1U;
si0+=si1;
l4=si0;
si0=l7;
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L13;
}
si0=l7;
si0=i32_load(&i->m0,(U64)si0);
f15271(i,si0);
L13:;
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
goto L14;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
f15271(i,si0);
L14:;
L0:;
}

void f13884(rustpythonInstance*i,U32 l0) {
U32 l1=0;
U32 l2=0;
U32 l3=0;
U32 l4=0;
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
si0=si0 == si1;
if(si0){
goto L1;
}
si0=l1;
si1=l2;
si0-=si1;
si1=2U;
si0>>=(si1&31);
l3=si0;
L2:;
{
si0=l2;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si1=l1;
si1=i32_load(&i->m0,(U64)si1);
l4=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=1U;
si0=si0 != si1;
if(si0){
goto L3;
}
si0=l1;
f7690(i,si0);
L3:;
si0=l2;
si1=4U;
si0+=si1;
l2=si0;
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
goto L4;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
f15271(i,si0);
L4:;
L0:;
}

void f13885(rustpythonInstance*i,U32 l0) {
U32 l1=0;
U32 l2=0;
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
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
si1=44U;
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
si0=l2;
si1=l4;
si2=44U;
si1*=si2;
si0+=si1;
l5=si0;
si0=i32_load(&i->m0,(U64)si0+28U);
l1=si0;
si0=!(si0);
if(si0){
goto L3;
}
si0=l1;
f13834(i,si0);
si0=l1;
f15271(i,si0);
L3:;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+32U);
l1=si0;
si0=!(si0);
if(si0){
goto L4;
}
si0=l5;
si1=36U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L4;
}
si0=l1;
f15271(i,si0);
L4:;
si0=l5;
si1=24U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si0=!(si0);
if(si0){
goto L5;
}
si0=l5;
si0=i32_load(&i->m0,(U64)si0+16U);
l1=si0;
L6:;
{
si0=l1;
f11159(i,si0);
si0=l1;
si1=80U;
si0+=si1;
l1=si0;
si0=l6;
si1=-1U;
si0+=si1;
l6=si0;
if(si0){
goto L6;
}
}
L5:;
si0=l4;
si1=1U;
si0+=si1;
l4=si0;
si0=l5;
si1=20U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L7;
}
si0=l5;
si0=i32_load(&i->m0,(U64)si0+16U);
f15271(i,si0);
L7:;
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
goto L8;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
f15271(i,si0);
L8:;
L0:;
}

void f13886(rustpythonInstance*i,U32 l0) {
U32 l1=0;
U32 l2=0;
U32 l3=0;
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
si1=48U;
si0=DIV_U(si0,si1);
l3=si0;
si0=l1;
si1=l2;
si0=si0 == si1;
if(si0){
goto L1;
}
si0=l2;
si1=44U;
si0+=si1;
l2=si0;
L2:;
{
si0=l2;
si1=-24U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L3;
}
si0=l2;
si1=-28U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
f15271(i,si0);
L3:;
si0=l2;
si1=-16U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si0=!(si0);
if(si0){
goto L4;
}
si0=l1;
f13834(i,si0);
si0=l1;
f15271(i,si0);
L4:;
si0=l2;
si1=-12U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si0=!(si0);
if(si0){
goto L5;
}
si0=l2;
si1=-8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L5;
}
si0=l1;
f15271(i,si0);
L5:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si0=!(si0);
if(si0){
goto L6;
}
si0=l1;
f13834(i,si0);
si0=l1;
f15271(i,si0);
L6:;
si0=l2;
si1=48U;
si0+=si1;
l2=si0;
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
goto L7;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
f15271(i,si0);
L7:;
L0:;
}

void f13887(rustpythonInstance*i,U32 l0) {
U32 l1=0;
U32 l2=0;
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
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
si1=80U;
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
si0=l2;
si1=l4;
si2=80U;
si1*=si2;
si0+=si1;
l1=si0;
f13837(i,si0);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+76U);
l5=si0;
si0=!(si0);
if(si0){
goto L3;
}
si0=l5;
f13834(i,si0);
si0=l5;
f15271(i,si0);
L3:;
si0=l1;
si1=64U;
si0+=si1;
l6=si0;
si0=l1;
si1=72U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si0=!(si0);
if(si0){
goto L4;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+64U);
l1=si0;
L5:;
{
si0=l1;
f11159(i,si0);
si0=l1;
si1=80U;
si0+=si1;
l1=si0;
si0=l5;
si1=-1U;
si0+=si1;
l5=si0;
if(si0){
goto L5;
}
}
L4:;
si0=l4;
si1=1U;
si0+=si1;
l4=si0;
si0=l6;
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L6;
}
si0=l6;
si0=i32_load(&i->m0,(U64)si0);
f15271(i,si0);
L6:;
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
goto L7;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
f15271(i,si0);
L7:;
L0:;
}

void f13888(rustpythonInstance*i,U32 l0) {
U32 l1=0;
U32 l2=0;
U32 l3=0;
U32 l4=0;
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
si1=12U;
si0=DIV_U(si0,si1);
l3=si0;
si0=l1;
si1=l2;
si0=si0 == si1;
if(si0){
goto L1;
}
L2:;
{
si0=l2;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si1=l1;
si1=i32_load(&i->m0,(U64)si1);
l4=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=1U;
si0=si0 != si1;
if(si0){
goto L3;
}
si0=l1;
f7690(i,si0);
L3:;
si0=l2;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si1=l1;
si1=i32_load(&i->m0,(U64)si1);
l4=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=1U;
si0=si0 != si1;
if(si0){
goto L4;
}
si0=l1;
f7690(i,si0);
L4:;
si0=l2;
si1=12U;
si0+=si1;
l2=si0;
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
goto L5;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
f15271(i,si0);
L5:;
L0:;
}

void f13889(rustpythonInstance*i,U32 l0) {
U32 l1=0;
U32 l2=0;
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
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
si1=36U;
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
si0=l2;
si1=l4;
si2=36U;
si1*=si2;
si0+=si1;
l5=si0;
si0=i32_load(&i->m0,(U64)si0+20U);
l1=si0;
si0=!(si0);
if(si0){
goto L3;
}
si0=l1;
f13851(i,si0);
si0=l1;
f15271(i,si0);
L3:;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+24U);
l1=si0;
si0=!(si0);
if(si0){
goto L4;
}
si0=l5;
si1=28U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L4;
}
si0=l1;
f15271(i,si0);
L4:;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+8U);
l6=si0;
si0=!(si0);
if(si0){
goto L5;
}
si0=l5;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
L6:;
{
si0=l1;
f11166(i,si0);
si0=l1;
si1=72U;
si0+=si1;
l1=si0;
si0=l6;
si1=-1U;
si0+=si1;
l6=si0;
if(si0){
goto L6;
}
}
L5:;
si0=l4;
si1=1U;
si0+=si1;
l4=si0;
si0=l5;
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L7;
}
si0=l5;
si0=i32_load(&i->m0,(U64)si0);
f15271(i,si0);
L7:;
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
goto L8;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
f15271(i,si0);
L8:;
L0:;
}

void f13890(rustpythonInstance*i,U32 l0) {
U32 l1=0;
U32 l2=0;
U32 l3=0;
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
si1=44U;
si0=DIV_U(si0,si1);
l3=si0;
si0=l1;
si1=l2;
si0=si0 == si1;
if(si0){
goto L1;
}
si0=l2;
si1=36U;
si0+=si1;
l2=si0;
L2:;
{
si0=l2;
si1=-16U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L3;
}
si0=l2;
si1=-20U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
f15271(i,si0);
L3:;
si0=l2;
si1=-8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si0=!(si0);
if(si0){
goto L4;
}
si0=l1;
f13834(i,si0);
si0=l1;
f15271(i,si0);
L4:;
si0=l2;
si1=-4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si0=!(si0);
if(si0){
goto L5;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L5;
}
si0=l1;
f15271(i,si0);
L5:;
si0=l2;
si1=44U;
si0+=si1;
l2=si0;
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
goto L6;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
f15271(i,si0);
L6:;
L0:;
}

void f13891(rustpythonInstance*i,U32 l0) {
U32 l1=0;
U32 l2=0;
U32 l3=0;
U32 l4=0;
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
si1=12U;
si0=DIV_U(si0,si1);
l3=si0;
si0=l1;
si1=l2;
si0=si0 == si1;
if(si0){
goto L1;
}
L2:;
{
si0=l2;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si1=l1;
si1=i32_load(&i->m0,(U64)si1);
l4=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=1U;
si0=si0 != si1;
if(si0){
goto L3;
}
si0=l1;
f7690(i,si0);
L3:;
si0=l2;
si1=12U;
si0+=si1;
l2=si0;
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
goto L4;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
f15271(i,si0);
L4:;
L0:;
}

void f13892(rustpythonInstance*i,U32 l0) {
U32 l1=0;
U32 l2=0;
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
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
si0=si0 == si1;
if(si0){
goto L1;
}
si0=l1;
si1=l2;
si0-=si1;
si1=7U;
si0>>=(si1&31);
l3=si0;
si0=0U;
l4=si0;
L2:;
{
si0=l2;
si1=l4;
si2=7U;
si1<<=(si2&31);
si0+=si1;
l1=si0;
f13834(i,si0);
si0=l1;
si1=56U;
si0+=si1;
f13834(i,si0);
si0=l1;
si1=112U;
si0+=si1;
l5=si0;
si0=l1;
si1=120U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si0=!(si0);
if(si0){
goto L3;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+112U);
l1=si0;
L4:;
{
si0=l1;
f11156(i,si0);
si0=l1;
si1=56U;
si0+=si1;
l1=si0;
si0=l6;
si1=-1U;
si0+=si1;
l6=si0;
if(si0){
goto L4;
}
}
L3:;
si0=l4;
si1=1U;
si0+=si1;
l4=si0;
si0=l5;
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L5;
}
si0=l5;
si0=i32_load(&i->m0,(U64)si0);
f15271(i,si0);
L5:;
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
goto L6;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
f15271(i,si0);
L6:;
L0:;
}

void f13893(rustpythonInstance*i,U32 l0) {
U32 l1=0;
U32 l2=0;
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
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
si0=l2;
si1=l4;
si2=72U;
si1*=si2;
si0+=si1;
l1=si0;
f13853(i,si0);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+68U);
l5=si0;
si0=!(si0);
if(si0){
goto L3;
}
si0=l5;
f13851(i,si0);
si0=l5;
f15271(i,si0);
L3:;
si0=l1;
si1=56U;
si0+=si1;
l6=si0;
si0=l1;
si1=64U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si0=!(si0);
if(si0){
goto L4;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+56U);
l1=si0;
L5:;
{
si0=l1;
f11166(i,si0);
si0=l1;
si1=72U;
si0+=si1;
l1=si0;
si0=l5;
si1=-1U;
si0+=si1;
l5=si0;
if(si0){
goto L5;
}
}
L4:;
si0=l4;
si1=1U;
si0+=si1;
l4=si0;
si0=l6;
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L6;
}
si0=l6;
si0=i32_load(&i->m0,(U64)si0);
f15271(i,si0);
L6:;
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
goto L7;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
f15271(i,si0);
L7:;
L0:;
}

void f13894(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
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
U64 sj0,sj1,sj2;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+8U);
l3=si0;
si1=l2;
si0=si0 < si1;
if(si0){
goto L1;
}
si0=l2;
si0=!(si0);
if(si0){
goto L2;
}
si0=l1;
si1=l2;
si2=20U;
si1*=si2;
si0+=si1;
l4=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si1=-4U;
si0+=si1;
l6=si0;
si0=l0;
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+12U);
l8=si0;
L3:;
{
si0=l5;
si1=l7;
si2=l1;
si2=i32_load(&i->m0,(U64)si2+16U);
l9=si2;
si1&=si2;
l10=si1;
si0+=si1;
sj0=i64_load(&i->m0,(U64)si0);
sj1=-9187201950435737472ULL;
sj0&=sj1;
l11=sj0;
sj1=0ULL;
si0=sj0 != sj1;
if(si0){
goto L4;
}
si0=8U;
l2=si0;
L5:;
{
si0=l10;
si1=l2;
si0+=si1;
l10=si0;
si0=l2;
si1=8U;
si0+=si1;
l2=si0;
si0=l5;
si1=l10;
si2=l7;
si1&=si2;
l10=si1;
si0+=si1;
sj0=i64_load(&i->m0,(U64)si0);
sj1=-9187201950435737472ULL;
sj0&=sj1;
l11=sj0;
si0=!(sj0);
if(si0){
goto L5;
}
}
L4:;
si0=l1;
si1=20U;
si0+=si1;
l1=si0;
si0=l5;
sj1=l11;
sj1=I64_CTZ(sj1);
si1=(U32)(sj1);
si2=3U;
si1>>=(si2&31);
si2=l10;
si1+=si2;
si2=l7;
si1&=si2;
l2=si1;
si0+=si1;
si0=i32_load8_s(&i->m0,(U64)si0);
l10=si0;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L6;
}
si0=l5;
si1=l5;
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
l10=si0;
L6:;
si0=l5;
si1=l2;
si0+=si1;
si1=l9;
si2=25U;
si1>>=(si2&31);
l9=si1;
i32_store8(&i->m0,(U64)si0,si1);
si0=l2;
si1=-8U;
si0+=si1;
si1=l7;
si0&=si1;
si1=l5;
si0+=si1;
si1=8U;
si0+=si1;
si1=l9;
i32_store8(&i->m0,(U64)si0,si1);
si0=l6;
si1=l2;
si2=2U;
si1<<=(si2&31);
si0-=si1;
si1=l8;
i32_store(&i->m0,(U64)si0,si1);
si0=l8;
si1=1U;
si0+=si1;
l8=si0;
si0=l3;
si1=l10;
si2=1U;
si1&=si2;
si0-=si1;
l3=si0;
si0=l1;
si1=l4;
si0=si0 != si1;
if(si0){
goto L3;
}
}
si0=l0;
si1=l3;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l0;
si1=l8;
i32_store(&i->m0,(U64)si0+12U,si1);
L2:;
goto L0;
L1:;
si0=1952996U;
si1=69U;
si2=1953172U;
f673(i,si0,si1,si2);
UNREACHABLE;
L0:;
}

U32 f13895(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 si0,si1,si2,si3;
si0=l0;
si1=l1;
si2=l2;
si3=l3;
si0=f6401(i,si0,si1,si2,si3);
L0:;
return si0;
}

U32 f13896(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 si0,si1,si2;
si0=l2;
si1=4U;
si0=si0 == si1;
if(si0){
goto L1;
}
si0=4U;
si1=l2;
si2=1630120U;
f755(i,si0,si1,si2);
UNREACHABLE;
L1:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+88U);
si1=8U;
si0+=si1;
si1=l1;
si1=i32_load(&i->m0,(U64)si1);
si0=f6367(i,si0,si1);
L0:;
return si0;
}

U32 f13897(rustpythonInstance*i) {
U32 l0=0;
U32 l1=0;
U32 l2=0;
U32 l3=0;
U32 l4=0;
U64 l5=0;
U64 l6=0;
U64 l7=0;
U64 l8=0;
U32 si0,si1,si2,si3,si4;
U64 sj1,sj2;
si0=i->g0;
si1=384U;
si0-=si1;
l0=si0;
i->g0=si0;
si0=0U;
si0=i32_load(&i->m0,(U64)si0+2968924U);
si1=2U;
si0=si0 != si1;
if(si0){
goto L5;
}
si0=0U;
si0=i32_load(&i->m0,(U64)si0+2968928U);
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
goto L4;
}
si0=2967024U;
si0=f10432(i,si0);
l2=si0;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si1=l2;
si1=i32_load(&i->m0,(U64)si1+4U);
l4=si1;
si1=i32_load(&i->m0,(U64)si1+12U);
si0=TF(i->t0,si1,U32 (*)(rustpythonInstance*,U32))(i,si0);
l2=si0;
si0=l3;
si1=l4;
si1=i32_load(&i->m0,(U64)si1+16U);
si0=TF(i->t0,si1,U32 (*)(rustpythonInstance*,U32))(i,si0);
l3=si0;
si0=l0;
si1=52U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=44U;
si0+=si1;
sj1=17179869184ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=36U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=1862528U;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l0;
si1=l2;
sj1=i64_load(&i->m0,(U64)si1);
l5=sj1;
si2=l3;
sj2=(U64)(si2);
sj1^=sj2;
sj2=6364136223846793005ULL;
sj1*=sj2;
si2=l2;
sj2=i64_load(&i->m0,(U64)si2+8U);
sj1^=sj2;
sj2=8ULL;
sj1=I64_ROTL(sj1,sj2);
sj2=6364136223846793005ULL;
sj1*=sj2;
l6=sj1;
sj2=l5;
sj1^=sj2;
sj2=24ULL;
sj1=I64_ROTL(sj1,sj2);
l5=sj1;
si2=l2;
si3=56U;
si2+=si3;
sj2=i64_load(&i->m0,(U64)si2);
sj1^=sj2;
sj2=6364136223846793005ULL;
sj1*=sj2;
sj2=l6;
sj1^=sj2;
sj2=8ULL;
sj1=I64_ROTL(sj1,sj2);
sj2=6364136223846793005ULL;
sj1*=sj2;
l7=sj1;
sj2=l5;
sj1^=sj2;
sj2=24ULL;
sj1=I64_ROTL(sj1,sj2);
l8=sj1;
sj2=6364136223846793005ULL;
sj1*=sj2;
sj2=l7;
sj1^=sj2;
sj2=l8;
sj1=I64_ROTL(sj1,sj2);
i64_store(&i->m0,(U64)si0+24U,sj1);
si0=l0;
sj1=l5;
si2=l2;
si3=48U;
si2+=si3;
sj2=i64_load(&i->m0,(U64)si2);
sj1^=sj2;
sj2=6364136223846793005ULL;
sj1*=sj2;
sj2=l6;
sj1^=sj2;
sj2=8ULL;
sj1=I64_ROTL(sj1,sj2);
sj2=6364136223846793005ULL;
sj1*=sj2;
l7=sj1;
sj2=l5;
sj1^=sj2;
sj2=24ULL;
sj1=I64_ROTL(sj1,sj2);
l8=sj1;
sj2=6364136223846793005ULL;
sj1*=sj2;
sj2=l7;
sj1^=sj2;
sj2=l8;
sj1=I64_ROTL(sj1,sj2);
i64_store(&i->m0,(U64)si0+16U,sj1);
si0=l0;
sj1=l5;
si2=l2;
si3=40U;
si2+=si3;
sj2=i64_load(&i->m0,(U64)si2);
sj1^=sj2;
sj2=6364136223846793005ULL;
sj1*=sj2;
sj2=l6;
sj1^=sj2;
sj2=8ULL;
sj1=I64_ROTL(sj1,sj2);
sj2=6364136223846793005ULL;
sj1*=sj2;
l7=sj1;
sj2=l5;
sj1^=sj2;
sj2=24ULL;
sj1=I64_ROTL(sj1,sj2);
l8=sj1;
sj2=6364136223846793005ULL;
sj1*=sj2;
sj2=l7;
sj1^=sj2;
sj2=l8;
sj1=I64_ROTL(sj1,sj2);
i64_store(&i->m0,(U64)si0+8U,sj1);
si0=l0;
sj1=l5;
si2=l2;
sj2=i64_load(&i->m0,(U64)si2+32U);
sj1^=sj2;
sj2=6364136223846793005ULL;
sj1*=sj2;
sj2=l6;
sj1^=sj2;
sj2=8ULL;
sj1=I64_ROTL(sj1,sj2);
sj2=6364136223846793005ULL;
sj1*=sj2;
l6=sj1;
sj2=l5;
sj1^=sj2;
sj2=24ULL;
sj1=I64_ROTL(sj1,sj2);
l5=sj1;
sj2=6364136223846793005ULL;
sj1*=sj2;
sj2=l6;
sj1^=sj2;
sj2=l5;
sj1=I64_ROTL(sj1,sj2);
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0+376U,si1);
si0=l0;
sj1=4ULL;
i64_store(&i->m0,(U64)si0+368U,sj1);
si0=l0;
si1=368U;
si0+=si1;
si1=0U;
f7267(i,si0,si1);
si0=l0;
si0=i32_load(&i->m0,(U64)si0+368U);
si1=l0;
si1=i32_load(&i->m0,(U64)si1+376U);
si2=28U;
si1*=si2;
si0+=si1;
l2=si0;
sj1=512ULL;
i64_store(&i->m0,(U64)si0+16U,sj1);
si0=l2;
si1=1627804U;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l2;
sj1=4294967304ULL;
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l2;
si1=1968499U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+376U);
si2=1U;
si1+=si2;
l2=si1;
i32_store(&i->m0,(U64)si0+376U,si1);
si0=l2;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+372U);
si0=si0 != si1;
if(si0){
goto L6;
}
si0=l0;
si1=368U;
si0+=si1;
si1=l2;
f7267(i,si0,si1);
si0=l0;
si0=i32_load(&i->m0,(U64)si0+376U);
l2=si0;
L6:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+368U);
si1=l2;
si2=28U;
si1*=si2;
si0+=si1;
l2=si0;
sj1=512ULL;
i64_store(&i->m0,(U64)si0+16U,sj1);
si0=l2;
si1=1626652U;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l2;
sj1=4294967306ULL;
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l2;
si1=1960898U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+376U);
si2=1U;
si1+=si2;
l2=si1;
i32_store(&i->m0,(U64)si0+376U,si1);
si0=l0;
si0=i32_load(&i->m0,(U64)si0+368U);
l3=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+372U);
si1=l2;
si0=si0 <= si1;
if(si0){
goto L7;
}
si0=l2;
if(si0){
goto L8;
}
si0=l3;
f15271(i,si0);
si0=4U;
l3=si0;
goto L7;
L8:;
si0=l3;
si1=l2;
si2=28U;
si1*=si2;
l4=si1;
si0=f15274(i,si0,si1);
l3=si0;
si0=!(si0);
if(si0){
goto L3;
}
L7:;
si0=l0;
si1=20U;
i32_store(&i->m0,(U64)si0+96U,si1);
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0+88U,si1);
si0=l0;
sj1=0ULL;
i64_store(&i->m0,(U64)si0+80U,sj1);
si0=l0;
si1=l2;
i32_store(&i->m0,(U64)si0+76U,si1);
si0=l0;
si1=l3;
i32_store(&i->m0,(U64)si0+72U,si1);
si0=l0;
si1=22U;
i32_store(&i->m0,(U64)si0+68U,si1);
si0=l0;
si1=1957871U;
i32_store(&i->m0,(U64)si0+64U,si1);
si0=l0;
si1=64U;
si0+=si1;
si1=36U;
si0+=si1;
si1=0U;
si2=264U;
si0=f15392(i,si0,si1,si2);
si0=0U;
si0=i32_load(&i->m0,(U64)si0+2969692U);
si1=2U;
si0=si0 != si1;
if(si0){
goto L2;
}
si0=0U;
si0=i32_load(&i->m0,(U64)si0+2969696U);
l2=si0;
si1=l2;
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
goto L4;
}
si0=l0;
si1=368U;
si0+=si1;
si1=l1;
si2=l0;
si3=l0;
si4=64U;
si3+=si4;
si4=l2;
f9967(i,si0,si1,si2,si3,si4);
si0=l0;
si0=i32_load(&i->m0,(U64)si0+368U);
si0=!(si0);
if(si0){
goto L1;
}
si0=l0;
si1=64U;
si0+=si1;
si1=8U;
si0+=si1;
si1=l0;
si2=368U;
si1+=si2;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l0;
sj1=i64_load(&i->m0,(U64)si1+368U);
i64_store(&i->m0,(U64)si0+64U,sj1);
si0=1953380U;
si1=43U;
si2=l0;
si3=64U;
si2+=si3;
si3=1953424U;
si4=1953440U;
f712(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L5:;
si0=1625617U;
si1=36U;
si2=1625668U;
f703(i,si0,si1,si2);
UNREACHABLE;
L4:;
f15042(i);
UNREACHABLE;
L3:;
si0=4U;
si1=l4;
f52(i,si0,si1);
UNREACHABLE;
L2:;
si0=1837556U;
si1=36U;
si2=1837608U;
f703(i,si0,si1,si2);
UNREACHABLE;
L1:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+372U);
l2=si0;
si0=l0;
si1=384U;
si0+=si1;
i->g0=si0;
si0=l2;
L0:;
return si0;
}

U32 f13898(rustpythonInstance*i) {
U32 l0=0;
U32 l1=0;
U32 l2=0;
U32 l3=0;
U32 l4=0;
U64 l5=0;
U64 l6=0;
U64 l7=0;
U64 l8=0;
U32 si0,si1,si2,si3,si4;
U64 sj1,sj2;
si0=i->g0;
si1=688U;
si0-=si1;
l0=si0;
i->g0=si0;
si0=0U;
si0=i32_load(&i->m0,(U64)si0+2969684U);
si1=2U;
si0=si0 != si1;
if(si0){
goto L5;
}
si0=0U;
si0=i32_load(&i->m0,(U64)si0+2969688U);
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
goto L4;
}
si0=2967024U;
si0=f10432(i,si0);
l2=si0;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si1=l2;
si1=i32_load(&i->m0,(U64)si1+4U);
l4=si1;
si1=i32_load(&i->m0,(U64)si1+12U);
si0=TF(i->t0,si1,U32 (*)(rustpythonInstance*,U32))(i,si0);
l2=si0;
si0=l3;
si1=l4;
si1=i32_load(&i->m0,(U64)si1+16U);
si0=TF(i->t0,si1,U32 (*)(rustpythonInstance*,U32))(i,si0);
l3=si0;
si0=l0;
si1=52U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=44U;
si0+=si1;
sj1=17179869184ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=36U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=1862528U;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l0;
si1=l2;
sj1=i64_load(&i->m0,(U64)si1);
l5=sj1;
si2=l3;
sj2=(U64)(si2);
sj1^=sj2;
sj2=6364136223846793005ULL;
sj1*=sj2;
si2=l2;
sj2=i64_load(&i->m0,(U64)si2+8U);
sj1^=sj2;
sj2=8ULL;
sj1=I64_ROTL(sj1,sj2);
sj2=6364136223846793005ULL;
sj1*=sj2;
l6=sj1;
sj2=l5;
sj1^=sj2;
sj2=24ULL;
sj1=I64_ROTL(sj1,sj2);
l5=sj1;
si2=l2;
si3=56U;
si2+=si3;
sj2=i64_load(&i->m0,(U64)si2);
sj1^=sj2;
sj2=6364136223846793005ULL;
sj1*=sj2;
sj2=l6;
sj1^=sj2;
sj2=8ULL;
sj1=I64_ROTL(sj1,sj2);
sj2=6364136223846793005ULL;
sj1*=sj2;
l7=sj1;
sj2=l5;
sj1^=sj2;
sj2=24ULL;
sj1=I64_ROTL(sj1,sj2);
l8=sj1;
sj2=6364136223846793005ULL;
sj1*=sj2;
sj2=l7;
sj1^=sj2;
sj2=l8;
sj1=I64_ROTL(sj1,sj2);
i64_store(&i->m0,(U64)si0+24U,sj1);
si0=l0;
sj1=l5;
si2=l2;
si3=48U;
si2+=si3;
sj2=i64_load(&i->m0,(U64)si2);
sj1^=sj2;
sj2=6364136223846793005ULL;
sj1*=sj2;
sj2=l6;
sj1^=sj2;
sj2=8ULL;
sj1=I64_ROTL(sj1,sj2);
sj2=6364136223846793005ULL;
sj1*=sj2;
l7=sj1;
sj2=l5;
sj1^=sj2;
sj2=24ULL;
sj1=I64_ROTL(sj1,sj2);
l8=sj1;
sj2=6364136223846793005ULL;
sj1*=sj2;
sj2=l7;
sj1^=sj2;
sj2=l8;
sj1=I64_ROTL(sj1,sj2);
i64_store(&i->m0,(U64)si0+16U,sj1);
si0=l0;
sj1=l5;
si2=l2;
si3=40U;
si2+=si3;
sj2=i64_load(&i->m0,(U64)si2);
sj1^=sj2;
sj2=6364136223846793005ULL;
sj1*=sj2;
sj2=l6;
sj1^=sj2;
sj2=8ULL;
sj1=I64_ROTL(sj1,sj2);
sj2=6364136223846793005ULL;
sj1*=sj2;
l7=sj1;
sj2=l5;
sj1^=sj2;
sj2=24ULL;
sj1=I64_ROTL(sj1,sj2);
l8=sj1;
sj2=6364136223846793005ULL;
sj1*=sj2;
sj2=l7;
sj1^=sj2;
sj2=l8;
sj1=I64_ROTL(sj1,sj2);
i64_store(&i->m0,(U64)si0+8U,sj1);
si0=l0;
sj1=l5;
si2=l2;
sj2=i64_load(&i->m0,(U64)si2+32U);
sj1^=sj2;
sj2=6364136223846793005ULL;
sj1*=sj2;
sj2=l6;
sj1^=sj2;
sj2=8ULL;
sj1=I64_ROTL(sj1,sj2);
sj2=6364136223846793005ULL;
sj1*=sj2;
l6=sj1;
sj2=l5;
sj1^=sj2;
sj2=24ULL;
sj1=I64_ROTL(sj1,sj2);
l5=sj1;
sj2=6364136223846793005ULL;
sj1*=sj2;
sj2=l6;
sj1^=sj2;
sj2=l5;
sj1=I64_ROTL(sj1,sj2);
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0+376U,si1);
si0=l0;
sj1=4ULL;
i64_store(&i->m0,(U64)si0+368U,sj1);
si0=l0;
si1=368U;
si0+=si1;
f13899(i,si0);
si0=l0;
si0=i32_load(&i->m0,(U64)si0+368U);
l2=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+372U);
si1=l0;
si1=i32_load(&i->m0,(U64)si1+376U);
l3=si1;
si0=si0 <= si1;
if(si0){
goto L6;
}
si0=l3;
if(si0){
goto L7;
}
si0=l2;
f15271(i,si0);
si0=4U;
l2=si0;
goto L6;
L7:;
si0=l2;
si1=l3;
si2=28U;
si1*=si2;
l4=si1;
si0=f15274(i,si0,si1);
l2=si0;
si0=!(si0);
if(si0){
goto L3;
}
L6:;
si0=l0;
si1=8U;
i32_store(&i->m0,(U64)si0+416U,si1);
si0=l0;
si1=21U;
i32_store(&i->m0,(U64)si0+388U,si1);
si0=l0;
si1=1957893U;
i32_store(&i->m0,(U64)si0+384U,si1);
si0=l0;
si1=384U;
si0+=si1;
si1=36U;
si0+=si1;
si1=0U;
si2=240U;
si0=f15392(i,si0,si1,si2);
si0=l0;
si1=668U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=412U;
si0+=si1;
si1=120U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=396U;
si0+=si1;
si1=l3;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=676U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
sj1=0ULL;
i64_store(&i->m0,(U64)si0+660U,sj1);
si0=l0;
si1=1953467U;
i32_store(&i->m0,(U64)si0+408U,si1);
si0=l0;
sj1=1024ULL;
i64_store(&i->m0,(U64)si0+400U,sj1);
si0=l0;
si1=l2;
i32_store(&i->m0,(U64)si0+392U,si1);
si0=l0;
si1=839U;
i32_store(&i->m0,(U64)si0+652U,si1);
si0=l0;
si1=6775U;
i32_store(&i->m0,(U64)si0+656U,si1);
si0=l0;
si1=6776U;
i32_store(&i->m0,(U64)si0+672U,si1);
si0=l0;
si1=64U;
si0+=si1;
si1=l0;
si2=384U;
si1+=si2;
si2=304U;
si0=f15390(i,si0,si1,si2);
si0=0U;
si0=i32_load(&i->m0,(U64)si0+2969692U);
si1=2U;
si0=si0 != si1;
if(si0){
goto L2;
}
si0=0U;
si0=i32_load(&i->m0,(U64)si0+2969696U);
l2=si0;
si1=l2;
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
goto L4;
}
si0=l0;
si1=368U;
si0+=si1;
si1=l1;
si2=l0;
si3=l0;
si4=64U;
si3+=si4;
si4=l2;
f9967(i,si0,si1,si2,si3,si4);
si0=l0;
si0=i32_load(&i->m0,(U64)si0+368U);
si0=!(si0);
if(si0){
goto L1;
}
si0=l0;
si1=384U;
si0+=si1;
si1=8U;
si0+=si1;
si1=l0;
si2=368U;
si1+=si2;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l0;
sj1=i64_load(&i->m0,(U64)si1+368U);
i64_store(&i->m0,(U64)si0+384U,sj1);
si0=1953380U;
si1=43U;
si2=l0;
si3=384U;
si2+=si3;
si3=1953424U;
si4=1953440U;
f712(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L5:;
si0=1837556U;
si1=36U;
si2=1837608U;
f703(i,si0,si1,si2);
UNREACHABLE;
L4:;
f15042(i);
UNREACHABLE;
L3:;
si0=4U;
si1=l4;
f52(i,si0,si1);
UNREACHABLE;
L2:;
si0=1837556U;
si1=36U;
si2=1837608U;
f703(i,si0,si1,si2);
UNREACHABLE;
L1:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+372U);
l2=si0;
si0=l0;
si1=688U;
si0+=si1;
i->g0=si0;
si0=l2;
L0:;
return si0;
}

void f13899(rustpythonInstance*i,U32 l0) {
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
f7267(i,si0,si1);
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
sj1=512ULL;
i64_store(&i->m0,(U64)si0+16U,sj1);
si0=l1;
si1=1958744U;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l1;
sj1=4294967306ULL;
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l1;
si1=1960898U;
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
f7267(i,si0,si1);
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
si1=1822128U;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l1;
sj1=4294967304ULL;
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l1;
si1=1968546U;
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
f7267(i,si0,si1);
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
si1=1814928U;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l1;
sj1=4294967304ULL;
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l1;
si1=1968507U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+8U);
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0+8U,si1);
L0:;
}

void f13900(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 si0,si1,si2;
U64 sj0,sj1,sj2;
si0=i->g0;
si1=16U;
si0-=si1;
l3=si0;
i->g0=si0;
si0=l1;
sj0=i64_load(&i->m0,(U64)si0+8U);
sj1=-986948831820840795ULL;
sj0^=sj1;
si1=l1;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
sj2=-470470989367460515ULL;
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
f14068(i,si0,si1,si2);
goto L3;
L4:;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=31U;
si0=f15269(i,si0);
l1=si0;
si0=!(si0);
if(si0){
goto L2;
}
si0=l1;
si1=23U;
si0+=si1;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+1968538U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si1=16U;
si0+=si1;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+1968531U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si1=8U;
si0+=si1;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+1968523U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+1968515U);
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
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l3;
si1=l1;
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
si1=l4;
si2=l3;
si0=f7173(i,si0,si1,si2);
l1=si0;
si0=l0;
si1=2U;
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
f15042(i);
UNREACHABLE;
L0:;
}

void f13901(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U32 l5=0;
U32 si0,si1,si2,si3,si4;
si0=i->g0;
si1=16U;
si0-=si1;
l4=si0;
i->g0=si0;
si0=l4;
si1=8U;
si0+=si1;
si1=l2;
si2=l3;
f6079(i,si0,si1,si2);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+12U);
l2=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+8U);
l5=si0;
si0=!(si0);
if(si0){
goto L2;
}
si0=l4;
si1=l1;
si2=l5;
si3=l2;
si4=l3;
f14067(i,si0,si1,si2,si3,si4);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+4U);
l2=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
goto L1;
L2:;
si0=l1;
si1=l1;
si1=i32_load(&i->m0,(U64)si1);
l5=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=1U;
l3=si0;
si0=l5;
si1=1U;
si0=si0 != si1;
if(si0){
goto L1;
}
si0=l1;
f7690(i,si0);
L1:;
si0=l0;
si1=l2;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l3;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=16U;
si0+=si1;
i->g0=si0;
L0:;
}

U32 f13902(rustpythonInstance*i) {
U32 l0=0;
U32 l1=0;
U32 l2=0;
U32 l3=0;
U32 l4=0;
U64 l5=0;
U64 l6=0;
U64 l7=0;
U64 l8=0;
U32 si0,si1,si2,si3,si4;
U64 sj1,sj2;
si0=i->g0;
si1=688U;
si0-=si1;
l0=si0;
i->g0=si0;
si0=0U;
si0=i32_load(&i->m0,(U64)si0+2969684U);
si1=2U;
si0=si0 != si1;
if(si0){
goto L5;
}
si0=0U;
si0=i32_load(&i->m0,(U64)si0+2969688U);
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
goto L4;
}
si0=2967024U;
si0=f10432(i,si0);
l2=si0;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si1=l2;
si1=i32_load(&i->m0,(U64)si1+4U);
l4=si1;
si1=i32_load(&i->m0,(U64)si1+12U);
si0=TF(i->t0,si1,U32 (*)(rustpythonInstance*,U32))(i,si0);
l2=si0;
si0=l3;
si1=l4;
si1=i32_load(&i->m0,(U64)si1+16U);
si0=TF(i->t0,si1,U32 (*)(rustpythonInstance*,U32))(i,si0);
l3=si0;
si0=l0;
si1=52U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=44U;
si0+=si1;
sj1=17179869184ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=36U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=1862528U;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l0;
si1=l2;
sj1=i64_load(&i->m0,(U64)si1);
l5=sj1;
si2=l3;
sj2=(U64)(si2);
sj1^=sj2;
sj2=6364136223846793005ULL;
sj1*=sj2;
si2=l2;
sj2=i64_load(&i->m0,(U64)si2+8U);
sj1^=sj2;
sj2=8ULL;
sj1=I64_ROTL(sj1,sj2);
sj2=6364136223846793005ULL;
sj1*=sj2;
l6=sj1;
sj2=l5;
sj1^=sj2;
sj2=24ULL;
sj1=I64_ROTL(sj1,sj2);
l5=sj1;
si2=l2;
si3=56U;
si2+=si3;
sj2=i64_load(&i->m0,(U64)si2);
sj1^=sj2;
sj2=6364136223846793005ULL;
sj1*=sj2;
sj2=l6;
sj1^=sj2;
sj2=8ULL;
sj1=I64_ROTL(sj1,sj2);
sj2=6364136223846793005ULL;
sj1*=sj2;
l7=sj1;
sj2=l5;
sj1^=sj2;
sj2=24ULL;
sj1=I64_ROTL(sj1,sj2);
l8=sj1;
sj2=6364136223846793005ULL;
sj1*=sj2;
sj2=l7;
sj1^=sj2;
sj2=l8;
sj1=I64_ROTL(sj1,sj2);
i64_store(&i->m0,(U64)si0+24U,sj1);
si0=l0;
sj1=l5;
si2=l2;
si3=48U;
si2+=si3;
sj2=i64_load(&i->m0,(U64)si2);
sj1^=sj2;
sj2=6364136223846793005ULL;
sj1*=sj2;
sj2=l6;
sj1^=sj2;
sj2=8ULL;
sj1=I64_ROTL(sj1,sj2);
sj2=6364136223846793005ULL;
sj1*=sj2;
l7=sj1;
sj2=l5;
sj1^=sj2;
sj2=24ULL;
sj1=I64_ROTL(sj1,sj2);
l8=sj1;
sj2=6364136223846793005ULL;
sj1*=sj2;
sj2=l7;
sj1^=sj2;
sj2=l8;
sj1=I64_ROTL(sj1,sj2);
i64_store(&i->m0,(U64)si0+16U,sj1);
si0=l0;
sj1=l5;
si2=l2;
si3=40U;
si2+=si3;
sj2=i64_load(&i->m0,(U64)si2);
sj1^=sj2;
sj2=6364136223846793005ULL;
sj1*=sj2;
sj2=l6;
sj1^=sj2;
sj2=8ULL;
sj1=I64_ROTL(sj1,sj2);
sj2=6364136223846793005ULL;
sj1*=sj2;
l7=sj1;
sj2=l5;
sj1^=sj2;
sj2=24ULL;
sj1=I64_ROTL(sj1,sj2);
l8=sj1;
sj2=6364136223846793005ULL;
sj1*=sj2;
sj2=l7;
sj1^=sj2;
sj2=l8;
sj1=I64_ROTL(sj1,sj2);
i64_store(&i->m0,(U64)si0+8U,sj1);
si0=l0;
sj1=l5;
si2=l2;
sj2=i64_load(&i->m0,(U64)si2+32U);
sj1^=sj2;
sj2=6364136223846793005ULL;
sj1*=sj2;
sj2=l6;
sj1^=sj2;
sj2=8ULL;
sj1=I64_ROTL(sj1,sj2);
sj2=6364136223846793005ULL;
sj1*=sj2;
l6=sj1;
sj2=l5;
sj1^=sj2;
sj2=24ULL;
sj1=I64_ROTL(sj1,sj2);
l5=sj1;
sj2=6364136223846793005ULL;
sj1*=sj2;
sj2=l6;
sj1^=sj2;
sj2=l5;
sj1=I64_ROTL(sj1,sj2);
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0+376U,si1);
si0=l0;
sj1=4ULL;
i64_store(&i->m0,(U64)si0+368U,sj1);
si0=l0;
si1=368U;
si0+=si1;
si1=0U;
f7267(i,si0,si1);
si0=l0;
si0=i32_load(&i->m0,(U64)si0+368U);
si1=l0;
si1=i32_load(&i->m0,(U64)si1+376U);
si2=28U;
si1*=si2;
si0+=si1;
l2=si0;
sj1=512ULL;
i64_store(&i->m0,(U64)si0+16U,sj1);
si0=l2;
si1=1820544U;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l2;
sj1=4294967304ULL;
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l2;
si1=1968546U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+376U);
si2=1U;
si1+=si2;
l2=si1;
i32_store(&i->m0,(U64)si0+376U,si1);
si0=l2;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+372U);
si0=si0 != si1;
if(si0){
goto L6;
}
si0=l0;
si1=368U;
si0+=si1;
si1=l2;
f7267(i,si0,si1);
si0=l0;
si0=i32_load(&i->m0,(U64)si0+376U);
l2=si0;
L6:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+368U);
si1=l2;
si2=28U;
si1*=si2;
si0+=si1;
l2=si0;
sj1=512ULL;
i64_store(&i->m0,(U64)si0+16U,sj1);
si0=l2;
si1=1822080U;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l2;
sj1=4294967304ULL;
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l2;
si1=1968507U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+376U);
si2=1U;
si1+=si2;
l2=si1;
i32_store(&i->m0,(U64)si0+376U,si1);
si0=l0;
si0=i32_load(&i->m0,(U64)si0+368U);
l3=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+372U);
si1=l2;
si0=si0 <= si1;
if(si0){
goto L7;
}
si0=l2;
if(si0){
goto L8;
}
si0=l3;
f15271(i,si0);
si0=4U;
l3=si0;
goto L7;
L8:;
si0=l3;
si1=l2;
si2=28U;
si1*=si2;
l4=si1;
si0=f15274(i,si0,si1);
l3=si0;
si0=!(si0);
if(si0){
goto L3;
}
L7:;
si0=l0;
si1=68U;
i32_store(&i->m0,(U64)si0+416U,si1);
si0=l0;
si1=22U;
i32_store(&i->m0,(U64)si0+388U,si1);
si0=l0;
si1=1957988U;
i32_store(&i->m0,(U64)si0+384U,si1);
si0=l0;
si1=384U;
si0+=si1;
si1=36U;
si0+=si1;
si1=0U;
si2=240U;
si0=f15392(i,si0,si1,si2);
si0=l0;
si1=668U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=412U;
si0+=si1;
si1=140U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=396U;
si0+=si1;
si1=l2;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=676U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
sj1=0ULL;
i64_store(&i->m0,(U64)si0+660U,sj1);
si0=l0;
si1=1955908U;
i32_store(&i->m0,(U64)si0+408U,si1);
si0=l0;
sj1=0ULL;
i64_store(&i->m0,(U64)si0+400U,sj1);
si0=l0;
si1=l3;
i32_store(&i->m0,(U64)si0+392U,si1);
si0=l0;
si1=839U;
i32_store(&i->m0,(U64)si0+652U,si1);
si0=l0;
si1=6777U;
i32_store(&i->m0,(U64)si0+656U,si1);
si0=l0;
si1=6778U;
i32_store(&i->m0,(U64)si0+672U,si1);
si0=l0;
si1=64U;
si0+=si1;
si1=l0;
si2=384U;
si1+=si2;
si2=304U;
si0=f15390(i,si0,si1,si2);
si0=0U;
si0=i32_load(&i->m0,(U64)si0+2969692U);
si1=2U;
si0=si0 != si1;
if(si0){
goto L2;
}
si0=0U;
si0=i32_load(&i->m0,(U64)si0+2969696U);
l2=si0;
si1=l2;
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
goto L4;
}
si0=l0;
si1=368U;
si0+=si1;
si1=l1;
si2=l0;
si3=l0;
si4=64U;
si3+=si4;
si4=l2;
f9967(i,si0,si1,si2,si3,si4);
si0=l0;
si0=i32_load(&i->m0,(U64)si0+368U);
si0=!(si0);
if(si0){
goto L1;
}
si0=l0;
si1=384U;
si0+=si1;
si1=8U;
si0+=si1;
si1=l0;
si2=368U;
si1+=si2;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l0;
sj1=i64_load(&i->m0,(U64)si1+368U);
i64_store(&i->m0,(U64)si0+384U,sj1);
si0=1953380U;
si1=43U;
si2=l0;
si3=384U;
si2+=si3;
si3=1953424U;
si4=1953440U;
f712(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L5:;
si0=1837556U;
si1=36U;
si2=1837608U;
f703(i,si0,si1,si2);
UNREACHABLE;
L4:;
f15042(i);
UNREACHABLE;
L3:;
si0=4U;
si1=l4;
f52(i,si0,si1);
UNREACHABLE;
L2:;
si0=1837556U;
si1=36U;
si2=1837608U;
f703(i,si0,si1,si2);
UNREACHABLE;
L1:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+372U);
l2=si0;
si0=l0;
si1=688U;
si0+=si1;
i->g0=si0;
si0=l2;
L0:;
return si0;
}

void f13903(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 si0,si1,si2;
U64 sj0,sj1,sj2;
si0=i->g0;
si1=16U;
si0-=si1;
l3=si0;
i->g0=si0;
si0=l1;
sj0=i64_load(&i->m0,(U64)si0+8U);
sj1=-3950471222460184187ULL;
sj0^=sj1;
si1=l1;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
sj2=-6093807855246377156ULL;
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
f14080(i,si0,si1,si2);
goto L3;
L4:;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=31U;
si0=f15269(i,si0);
l1=si0;
si0=!(si0);
if(si0){
goto L2;
}
si0=l1;
si1=23U;
si0+=si1;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+1968538U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si1=16U;
si0+=si1;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+1968531U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si1=8U;
si0+=si1;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+1968523U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+1968515U);
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
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l3;
si1=l1;
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
si1=l4;
si2=l3;
si0=f7173(i,si0,si1,si2);
l1=si0;
si0=l0;
si1=2U;
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
f15042(i);
UNREACHABLE;
L0:;
}

void f13904(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U32 l5=0;
U32 si0,si1,si2,si3;
si0=i->g0;
si1=48U;
si0-=si1;
l4=si0;
i->g0=si0;
si0=l4;
si1=16U;
si0+=si1;
si1=l2;
si2=l3;
f6085(i,si0,si1,si2);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+20U);
l2=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+16U);
l5=si0;
si1=2U;
si0=si0 == si1;
if(si0){
goto L2;
}
si0=l4;
si1=l4;
si1=i32_load(&i->m0,(U64)si1+24U);
i32_store(&i->m0,(U64)si0+40U,si1);
si0=l4;
si1=l2;
i32_store(&i->m0,(U64)si0+36U,si1);
si0=l4;
si1=l5;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l4;
si1=8U;
si0+=si1;
si1=l1;
si2=l4;
si3=32U;
si2+=si3;
si3=l3;
f14079(i,si0,si1,si2,si3);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+12U);
l2=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+8U);
l3=si0;
goto L1;
L2:;
si0=l1;
si1=l1;
si1=i32_load(&i->m0,(U64)si1);
l5=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=1U;
l3=si0;
si0=l5;
si1=1U;
si0=si0 != si1;
if(si0){
goto L1;
}
si0=l1;
f7690(i,si0);
L1:;
si0=l0;
si1=l2;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l3;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=48U;
si0+=si1;
i->g0=si0;
L0:;
}

U32 f13905(rustpythonInstance*i) {
U32 l0=0;
U32 l1=0;
U32 l2=0;
U32 l3=0;
U32 l4=0;
U64 l5=0;
U64 l6=0;
U64 l7=0;
U64 l8=0;
U32 si0,si1,si2,si3,si4;
U64 sj1,sj2;
si0=i->g0;
si1=688U;
si0-=si1;
l0=si0;
i->g0=si0;
si0=0U;
si0=i32_load(&i->m0,(U64)si0+2969684U);
si1=2U;
si0=si0 != si1;
if(si0){
goto L5;
}
si0=0U;
si0=i32_load(&i->m0,(U64)si0+2969688U);
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
goto L4;
}
si0=2967024U;
si0=f10432(i,si0);
l2=si0;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si1=l2;
si1=i32_load(&i->m0,(U64)si1+4U);
l4=si1;
si1=i32_load(&i->m0,(U64)si1+12U);
si0=TF(i->t0,si1,U32 (*)(rustpythonInstance*,U32))(i,si0);
l2=si0;
si0=l3;
si1=l4;
si1=i32_load(&i->m0,(U64)si1+16U);
si0=TF(i->t0,si1,U32 (*)(rustpythonInstance*,U32))(i,si0);
l3=si0;
si0=l0;
si1=52U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=44U;
si0+=si1;
sj1=17179869184ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=36U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=1862528U;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l0;
si1=l2;
sj1=i64_load(&i->m0,(U64)si1);
l5=sj1;
si2=l3;
sj2=(U64)(si2);
sj1^=sj2;
sj2=6364136223846793005ULL;
sj1*=sj2;
si2=l2;
sj2=i64_load(&i->m0,(U64)si2+8U);
sj1^=sj2;
sj2=8ULL;
sj1=I64_ROTL(sj1,sj2);
sj2=6364136223846793005ULL;
sj1*=sj2;
l6=sj1;
sj2=l5;
sj1^=sj2;
sj2=24ULL;
sj1=I64_ROTL(sj1,sj2);
l5=sj1;
si2=l2;
si3=56U;
si2+=si3;
sj2=i64_load(&i->m0,(U64)si2);
sj1^=sj2;
sj2=6364136223846793005ULL;
sj1*=sj2;
sj2=l6;
sj1^=sj2;
sj2=8ULL;
sj1=I64_ROTL(sj1,sj2);
sj2=6364136223846793005ULL;
sj1*=sj2;
l7=sj1;
sj2=l5;
sj1^=sj2;
sj2=24ULL;
sj1=I64_ROTL(sj1,sj2);
l8=sj1;
sj2=6364136223846793005ULL;
sj1*=sj2;
sj2=l7;
sj1^=sj2;
sj2=l8;
sj1=I64_ROTL(sj1,sj2);
i64_store(&i->m0,(U64)si0+24U,sj1);
si0=l0;
sj1=l5;
si2=l2;
si3=48U;
si2+=si3;
sj2=i64_load(&i->m0,(U64)si2);
sj1^=sj2;
sj2=6364136223846793005ULL;
sj1*=sj2;
sj2=l6;
sj1^=sj2;
sj2=8ULL;
sj1=I64_ROTL(sj1,sj2);
sj2=6364136223846793005ULL;
sj1*=sj2;
l7=sj1;
sj2=l5;
sj1^=sj2;
sj2=24ULL;
sj1=I64_ROTL(sj1,sj2);
l8=sj1;
sj2=6364136223846793005ULL;
sj1*=sj2;
sj2=l7;
sj1^=sj2;
sj2=l8;
sj1=I64_ROTL(sj1,sj2);
i64_store(&i->m0,(U64)si0+16U,sj1);
si0=l0;
sj1=l5;
si2=l2;
si3=40U;
si2+=si3;
sj2=i64_load(&i->m0,(U64)si2);
sj1^=sj2;
sj2=6364136223846793005ULL;
sj1*=sj2;
sj2=l6;
sj1^=sj2;
sj2=8ULL;
sj1=I64_ROTL(sj1,sj2);
sj2=6364136223846793005ULL;
sj1*=sj2;
l7=sj1;
sj2=l5;
sj1^=sj2;
sj2=24ULL;
sj1=I64_ROTL(sj1,sj2);
l8=sj1;
sj2=6364136223846793005ULL;
sj1*=sj2;
sj2=l7;
sj1^=sj2;
sj2=l8;
sj1=I64_ROTL(sj1,sj2);
i64_store(&i->m0,(U64)si0+8U,sj1);
si0=l0;
sj1=l5;
si2=l2;
sj2=i64_load(&i->m0,(U64)si2+32U);
sj1^=sj2;
sj2=6364136223846793005ULL;
sj1*=sj2;
sj2=l6;
sj1^=sj2;
sj2=8ULL;
sj1=I64_ROTL(sj1,sj2);
sj2=6364136223846793005ULL;
sj1*=sj2;
l6=sj1;
sj2=l5;
sj1^=sj2;
sj2=24ULL;
sj1=I64_ROTL(sj1,sj2);
l5=sj1;
sj2=6364136223846793005ULL;
sj1*=sj2;
sj2=l6;
sj1^=sj2;
sj2=l5;
sj1=I64_ROTL(sj1,sj2);
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0+376U,si1);
si0=l0;
sj1=4ULL;
i64_store(&i->m0,(U64)si0+368U,sj1);
si0=l0;
si1=368U;
si0+=si1;
f13906(i,si0);
si0=l0;
si0=i32_load(&i->m0,(U64)si0+368U);
l2=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+372U);
si1=l0;
si1=i32_load(&i->m0,(U64)si1+376U);
l3=si1;
si0=si0 <= si1;
if(si0){
goto L6;
}
si0=l3;
if(si0){
goto L7;
}
si0=l2;
f15271(i,si0);
si0=4U;
l2=si0;
goto L6;
L7:;
si0=l2;
si1=l3;
si2=28U;
si1*=si2;
l4=si1;
si0=f15274(i,si0,si1);
l2=si0;
si0=!(si0);
if(si0){
goto L3;
}
L6:;
si0=l0;
si1=15U;
i32_store(&i->m0,(U64)si0+388U,si1);
si0=l0;
si1=1958085U;
i32_store(&i->m0,(U64)si0+384U,si1);
si0=l0;
si1=12U;
i32_store(&i->m0,(U64)si0+416U,si1);
si0=l0;
si1=384U;
si0+=si1;
si1=36U;
si0+=si1;
si1=0U;
si2=240U;
si0=f15392(i,si0,si1,si2);
si0=l0;
si1=668U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=412U;
si0+=si1;
si1=205U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=384U;
si0+=si1;
si1=12U;
si0+=si1;
si1=l3;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=676U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
sj1=0ULL;
i64_store(&i->m0,(U64)si0+660U,sj1);
si0=l0;
si1=1956699U;
i32_store(&i->m0,(U64)si0+408U,si1);
si0=l0;
sj1=0ULL;
i64_store(&i->m0,(U64)si0+400U,sj1);
si0=l0;
si1=l2;
i32_store(&i->m0,(U64)si0+392U,si1);
si0=l0;
si1=839U;
i32_store(&i->m0,(U64)si0+652U,si1);
si0=l0;
si1=6779U;
i32_store(&i->m0,(U64)si0+656U,si1);
si0=l0;
si1=6780U;
i32_store(&i->m0,(U64)si0+632U,si1);
si0=l0;
si1=6781U;
i32_store(&i->m0,(U64)si0+672U,si1);
si0=l0;
si1=64U;
si0+=si1;
si1=l0;
si2=384U;
si1+=si2;
si2=304U;
si0=f15390(i,si0,si1,si2);
si0=0U;
si0=i32_load(&i->m0,(U64)si0+2969692U);
si1=2U;
si0=si0 != si1;
if(si0){
goto L2;
}
si0=0U;
si0=i32_load(&i->m0,(U64)si0+2969696U);
l2=si0;
si1=l2;
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
goto L4;
}
si0=l0;
si1=368U;
si0+=si1;
si1=l1;
si2=l0;
si3=l0;
si4=64U;
si3+=si4;
si4=l2;
f9967(i,si0,si1,si2,si3,si4);
si0=l0;
si0=i32_load(&i->m0,(U64)si0+368U);
si0=!(si0);
if(si0){
goto L1;
}
si0=l0;
si1=384U;
si0+=si1;
si1=8U;
si0+=si1;
si1=l0;
si2=368U;
si1+=si2;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l0;
sj1=i64_load(&i->m0,(U64)si1+368U);
i64_store(&i->m0,(U64)si0+384U,sj1);
si0=1953380U;
si1=43U;
si2=l0;
si3=384U;
si2+=si3;
si3=1953424U;
si4=1953440U;
f712(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L5:;
si0=1837556U;
si1=36U;
si2=1837608U;
f703(i,si0,si1,si2);
UNREACHABLE;
L4:;
f15042(i);
UNREACHABLE;
L3:;
si0=4U;
si1=l4;
f52(i,si0,si1);
UNREACHABLE;
L2:;
si0=1837556U;
si1=36U;
si2=1837608U;
f703(i,si0,si1,si2);
UNREACHABLE;
L1:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+372U);
l2=si0;
si0=l0;
si1=688U;
si0+=si1;
i->g0=si0;
si0=l2;
L0:;
return si0;
}

void f13906(rustpythonInstance*i,U32 l0) {
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
f7267(i,si0,si1);
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
sj1=512ULL;
i64_store(&i->m0,(U64)si0+16U,sj1);
si0=l1;
si1=1959320U;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l1;
sj1=4294967306ULL;
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l1;
si1=1960898U;
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
f7267(i,si0,si1);
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
si1=1818120U;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l1;
sj1=4294967304ULL;
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l1;
si1=1968546U;
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
f7267(i,si0,si1);
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
si1=1824960U;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l1;
sj1=4294967304ULL;
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l1;
si1=1968507U;
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
f7267(i,si0,si1);
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
si1=1820112U;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l1;
sj1=4294967304ULL;
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l1;
si1=1968499U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+8U);
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0+8U,si1);
L0:;
}

void f13907(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 si0,si1,si2;
U64 sj0,sj1,sj2;
si0=i->g0;
si1=16U;
si0-=si1;
l3=si0;
i->g0=si0;
si0=l1;
sj0=i64_load(&i->m0,(U64)si0+8U);
sj1=-5933649855443852542ULL;
sj0^=sj1;
si1=l1;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
sj2=7308632103748173835ULL;
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
f14051(i,si0,si1,si2);
goto L3;
L4:;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=31U;
si0=f15269(i,si0);
l1=si0;
si0=!(si0);
if(si0){
goto L2;
}
si0=l1;
si1=23U;
si0+=si1;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+1968538U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si1=16U;
si0+=si1;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+1968531U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si1=8U;
si0+=si1;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+1968523U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+1968515U);
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
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l3;
si1=l1;
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
si1=l4;
si2=l3;
si0=f7173(i,si0,si1,si2);
l1=si0;
si0=l0;
si1=2U;
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
f15042(i);
UNREACHABLE;
L0:;
}

void f13908(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U64 l8=0;
U32 l9=0;
U32 l10=0;
U32 l11=0;
U32 si0,si1,si2,si3,si4,si5;
U64 sj0,sj1,sj2;
si0=i->g0;
si1=96U;
si0-=si1;
l3=si0;
i->g0=si0;
si0=l1;
sj0=i64_load(&i->m0,(U64)si0+8U);
sj1=-5933649855443852542ULL;
sj0^=sj1;
si1=l1;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
sj2=7308632103748173835ULL;
sj1^=sj2;
sj0|=sj1;
si0=!(sj0);
l4=si0;
if(si0){
goto L11;
}
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=31U;
si0=f15269(i,si0);
l1=si0;
si0=!(si0);
if(si0){
goto L10;
}
si0=l1;
si1=23U;
si0+=si1;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+1968491U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si1=16U;
si0+=si1;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+1968484U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si1=8U;
si0+=si1;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+1968476U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+1968468U);
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
i64_store(&i->m0,(U64)si0+52U,sj1);
si0=l3;
si1=l1;
i32_store(&i->m0,(U64)si0+48U,si1);
si0=l6;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 == si1;
if(si0){
goto L7;
}
si0=l2;
si1=l5;
si2=l3;
si3=48U;
si2+=si3;
si0=f7173(i,si0,si1,si2);
l1=si0;
goto L1;
L11:;
si0=l1;
si1=0U;
si2=l4;
si0=si2?si0:si1;
l6=si0;
si1=60U;
si0+=si1;
l7=si0;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si1=8U;
si0&=si1;
if(si0){
goto L9;
}
si0=l1;
si1=16U;
si0+=si1;
l5=si0;
si1=l1;
si0=si0 < si1;
if(si0){
goto L9;
}
si0=l6;
si1=l5;
si2=l6;
si2=i32_load(&i->m0,(U64)si2+60U);
l4=si2;
si3=l4;
si4=l1;
si3=si3 == si4;
si1=si3?si1:si2;
i32_store(&i->m0,(U64)si0+60U,si1);
si0=l4;
si1=l1;
si0=si0 != si1;
if(si0){
goto L9;
}
goto L8;
L10:;
si0=1U;
si1=31U;
f52(i,si0,si1);
UNREACHABLE;
L9:;
si0=l7;
si1=0U;
sj2=l8;
si3=1000000000U;
si0=f1432(i,si0,si1,sj2,si3);
L8:;
si0=l6;
si1=64U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
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
goto L7;
}
si0=l3;
si1=8U;
si0+=si1;
si1=l2;
si2=1807769U;
si3=35U;
si4=l4;
si5=l2;
f7340(i,si0,si1,si2,si3,si4,si5);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+12U);
l1=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+8U);
if(si0){
goto L12;
}
si0=l3;
si1=60U;
si0+=si1;
sj1=1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=2024U;
i32_store(&i->m0,(U64)si0+36U,si1);
si0=l3;
si1=l1;
i32_store(&i->m0,(U64)si0+92U,si1);
si0=l3;
si1=1959852U;
i32_store(&i->m0,(U64)si0+48U,si1);
si0=l3;
si1=l3;
si2=92U;
si1+=si2;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l3;
si1=l3;
si2=32U;
si1+=si2;
i32_store(&i->m0,(U64)si0+56U,si1);
si0=l3;
si1=1U;
i32_store(&i->m0,(U64)si0+52U,si1);
si0=l3;
si1=72U;
si0+=si1;
si1=l3;
si2=48U;
si1+=si2;
f63(i,si0,si1);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+92U);
l1=si0;
si1=l1;
si1=i32_load(&i->m0,(U64)si1);
l5=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=1U;
si0=si0 != si1;
if(si0){
goto L13;
}
si0=l1;
f7690(i,si0);
L13:;
si0=l4;
si1=l4;
si1=i32_load(&i->m0,(U64)si1);
l1=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
si1=1U;
si0=si0 != si1;
if(si0){
goto L14;
}
si0=l4;
f7690(i,si0);
L14:;
si0=l6;
si1=l6;
si1=i32_load(&i->m0,(U64)si1+60U);
l1=si1;
si2=-16U;
si1+=si2;
i32_store(&i->m0,(U64)si0+60U,si1);
si0=l1;
si1=-14U;
si0&=si1;
si1=18U;
si0=si0 != si1;
if(si0){
goto L15;
}
si0=l6;
si1=60U;
si0+=si1;
f1433(i,si0);
L15:;
si0=l3;
si1=16U;
si0+=si1;
si1=8U;
si0+=si1;
si1=l3;
si2=72U;
si1+=si2;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=l3;
sj1=i64_load(&i->m0,(U64)si1+72U);
i64_store(&i->m0,(U64)si0+16U,sj1);
si0=l2;
si0=i32_load(&i->m0,(U64)si0+88U);
l1=si0;
si1=1308U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
si1=7U;
si0=si0 < si1;
if(si0){
goto L6;
}
si0=l6;
si0=i32_load(&i->m0,(U64)si0+56U);
l9=si0;
si0=l1;
si1=1300U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=i32_load(&i->m0,(U64)si0+24U);
l10=si0;
si1=l10;
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
si1=4U;
i32_store8(&i->m0,(U64)si0+90U,si1);
si0=l3;
si1=4U;
i32_store8(&i->m0,(U64)si0+91U,si1);
si0=l3;
si1=l2;
i32_store(&i->m0,(U64)si0+92U,si1);
si0=0U;
l11=si0;
si0=l10;
si0=i32_load(&i->m0,(U64)si0+28U);
l4=si0;
si1=l9;
si1=i32_load(&i->m0,(U64)si1+28U);
l7=si1;
si0=si0 == si1;
if(si0){
goto L17;
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
L18:;
{
si0=l1;
si0=!(si0);
if(si0){
goto L17;
}
si0=l1;
si1=-4U;
si0+=si1;
l1=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si0=l4;
si1=4U;
si0+=si1;
l4=si0;
si0=l5;
si1=l7;
si0=si0 != si1;
if(si0){
goto L18;
}
}
si0=l3;
si1=l9;
i32_store(&i->m0,(U64)si0+56U,si1);
si0=l3;
si1=l10;
i32_store(&i->m0,(U64)si0+52U,si1);
si0=l3;
si1=l3;
si2=91U;
si1+=si2;
i32_store(&i->m0,(U64)si0+60U,si1);
si0=l3;
si1=l3;
si2=92U;
si1+=si2;
i32_store(&i->m0,(U64)si0+48U,si1);
si0=l3;
si1=72U;
si0+=si1;
si1=l2;
si2=1959480U;
si3=13U;
si4=l3;
si5=48U;
si4+=si5;
f7605(i,si0,si1,si2,si3,si4);
si0=l3;
si0=i32_load8_u(&i->m0,(U64)si0+72U);
l4=si0;
si1=3U;
si0=si0 == si1;
if(si0){
goto L5;
}
si0=1U;
l11=si0;
si0=l4;
si1=2U;
si0=si0 != si1;
if(si0){
goto L16;
}
L17:;
si0=l3;
si1=l10;
i32_store(&i->m0,(U64)si0+56U,si1);
si0=l3;
si1=l9;
i32_store(&i->m0,(U64)si0+52U,si1);
si0=l3;
si1=l3;
si2=90U;
si1+=si2;
i32_store(&i->m0,(U64)si0+60U,si1);
si0=l3;
si1=l3;
si2=92U;
si1+=si2;
i32_store(&i->m0,(U64)si0+48U,si1);
si0=l3;
si1=72U;
si0+=si1;
si1=l2;
si2=1959480U;
si3=13U;
si4=l3;
si5=48U;
si4+=si5;
f7605(i,si0,si1,si2,si3,si4);
si0=l3;
si0=i32_load8_u(&i->m0,(U64)si0+72U);
l4=si0;
si1=3U;
si0=si0 == si1;
if(si0){
goto L5;
}
si0=l4;
si1=2U;
si0=si0 == si1;
if(si0){
goto L19;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0+76U);
l1=si0;
si0=l3;
si0=i32_load16_u(&i->m0,(U64)si0+73U);
si1=l3;
si1=i32_load8_u(&i->m0,(U64)si1+75U);
si2=16U;
si1<<=(si2&31);
si0|=si1;
si1=8U;
si0<<=(si1&31);
si1=l4;
si0|=si1;
l4=si0;
goto L3;
L19:;
si0=l11;
if(si0){
goto L4;
}
si0=l3;
si1=l9;
i32_store(&i->m0,(U64)si0+56U,si1);
si0=l3;
si1=l10;
i32_store(&i->m0,(U64)si0+52U,si1);
si0=l3;
si1=l3;
si2=91U;
si1+=si2;
i32_store(&i->m0,(U64)si0+60U,si1);
si0=l3;
si1=l3;
si2=92U;
si1+=si2;
i32_store(&i->m0,(U64)si0+48U,si1);
si0=l3;
si1=72U;
si0+=si1;
si1=l2;
si2=1959480U;
si3=13U;
si4=l3;
si5=48U;
si4+=si5;
f7605(i,si0,si1,si2,si3,si4);
si0=l3;
si0=i32_load8_u(&i->m0,(U64)si0+72U);
l4=si0;
si1=3U;
si0=si0 == si1;
if(si0){
goto L5;
}
si0=l4;
si1=2U;
si0=si0 == si1;
if(si0){
goto L4;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0+76U);
l1=si0;
si0=l3;
si0=i32_load16_u(&i->m0,(U64)si0+73U);
si1=l3;
si1=i32_load8_u(&i->m0,(U64)si1+75U);
si2=16U;
si1<<=(si2&31);
si0|=si1;
si1=8U;
si0<<=(si1&31);
si1=l4;
si0|=si1;
l4=si0;
goto L3;
L16:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+76U);
l1=si0;
si0=l3;
si0=i32_load16_u(&i->m0,(U64)si0+73U);
si1=l3;
si1=i32_load8_u(&i->m0,(U64)si1+75U);
si2=16U;
si1<<=(si2&31);
si0|=si1;
si1=8U;
si0<<=(si1&31);
si1=l4;
si0|=si1;
l4=si0;
goto L3;
L12:;
si0=l4;
si1=l4;
si1=i32_load(&i->m0,(U64)si1);
l5=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=1U;
si0=si0 != si1;
if(si0){
goto L20;
}
si0=l4;
f7690(i,si0);
L20:;
si0=l6;
si1=l6;
si1=i32_load(&i->m0,(U64)si1+60U);
l4=si1;
si2=-16U;
si1+=si2;
i32_store(&i->m0,(U64)si0+60U,si1);
si0=l4;
si1=-14U;
si0&=si1;
si1=18U;
si0=si0 != si1;
if(si0){
goto L21;
}
si0=l6;
si1=60U;
si0+=si1;
f1433(i,si0);
L21:;
si0=0U;
l4=si0;
goto L2;
L7:;
f15042(i);
UNREACHABLE;
L6:;
si0=6U;
si1=l4;
si2=1959808U;
f663(i,si0,si1,si2);
UNREACHABLE;
L5:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+76U);
l1=si0;
si0=2U;
l4=si0;
goto L3;
L4:;
si0=1810698U;
l1=si0;
si0=l3;
si0=i32_load8_u(&i->m0,(U64)si0+90U);
l5=si0;
si1=-1U;
si0+=si1;
switch(si0){
case 0:
goto L24;
case 1:
goto L27;
case 2:
goto L23;
case 3:
goto L22;
case 4:
goto L26;
case 5:
goto L25;
default:
goto L24;
}
L27:;
si0=1U;
l5=si0;
si0=1810898U;
l1=si0;
goto L24;
L26:;
si0=2U;
l5=si0;
si0=1825884U;
l1=si0;
goto L24;
L25:;
si0=2U;
l5=si0;
si0=1825886U;
l1=si0;
L24:;
si0=2U;
l4=si0;
si0=l2;
si1=l9;
si2=l10;
si3=l1;
si4=l5;
si0=f7577(i,si0,si1,si2,si3,si4);
l1=si0;
goto L3;
L23:;
si0=1U;
si1=257U;
si2=l10;
si3=l9;
si2=si2 == si3;
si0=si2?si0:si1;
l4=si0;
goto L3;
L22:;
si0=257U;
si1=1U;
si2=l10;
si3=l9;
si2=si2 == si3;
si0=si2?si0:si1;
l4=si0;
L3:;
si0=l4;
si1=255U;
si0&=si1;
si1=2U;
si0=si0 == si1;
if(si0){
goto L31;
}
si0=l4;
si1=1U;
si0&=si1;
si0=!(si0);
if(si0){
goto L32;
}
si0=l4;
si1=8U;
si0>>=(si1&31);
si1=1U;
si0&=si1;
l1=si0;
goto L30;
L32:;
si0=l3;
si1=32U;
si0+=si1;
si1=l1;
si2=l2;
f7740(i,si0,si1,si2);
si0=l3;
si0=i32_load8_u(&i->m0,(U64)si0+32U);
if(si0){
goto L33;
}
si0=l3;
si0=i32_load8_u(&i->m0,(U64)si0+33U);
l1=si0;
goto L30;
L33:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+36U);
l1=si0;
L31:;
si0=l10;
si1=l10;
si1=i32_load(&i->m0,(U64)si1);
l5=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=0U;
l4=si0;
si0=l5;
si1=1U;
si0=si0 != si1;
if(si0){
goto L29;
}
si0=l10;
f7690(i,si0);
goto L29;
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
goto L34;
}
si0=l10;
f7690(i,si0);
L34:;
si0=l1;
si1=255U;
si0&=si1;
if(si0){
goto L36;
}
si0=l3;
si1=l2;
si2=1807769U;
si3=35U;
si4=l6;
si4=i32_load(&i->m0,(U64)si4+56U);
si5=l2;
f7340(i,si0,si1,si2,si3,si4,si5);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+4U);
l1=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L35;
}
si0=l3;
si1=72U;
si0+=si1;
si1=12U;
si0+=si1;
si1=2024U;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=48U;
si0+=si1;
si1=12U;
si0+=si1;
sj1=2ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=6773U;
i32_store(&i->m0,(U64)si0+76U,si1);
si0=l3;
si1=l1;
i32_store(&i->m0,(U64)si0+92U,si1);
si0=l3;
si1=3U;
i32_store(&i->m0,(U64)si0+52U,si1);
si0=l3;
si1=1959868U;
i32_store(&i->m0,(U64)si0+48U,si1);
si0=l3;
si1=l3;
si2=92U;
si1+=si2;
i32_store(&i->m0,(U64)si0+80U,si1);
si0=l3;
si1=l3;
si2=16U;
si1+=si2;
i32_store(&i->m0,(U64)si0+72U,si1);
si0=l3;
si1=l3;
si2=72U;
si1+=si2;
i32_store(&i->m0,(U64)si0+56U,si1);
si0=l3;
si1=32U;
si0+=si1;
si1=l3;
si2=48U;
si1+=si2;
f63(i,si0,si1);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+92U);
l1=si0;
si1=l1;
si1=i32_load(&i->m0,(U64)si1);
l4=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=1U;
si0=si0 != si1;
if(si0){
goto L37;
}
si0=l1;
f7690(i,si0);
L37:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+32U);
l4=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+36U);
l1=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+40U);
l5=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+20U);
si0=!(si0);
if(si0){
goto L2;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0+16U);
f15271(i,si0);
goto L2;
L36:;
si0=l3;
si1=60U;
si0+=si1;
sj1=1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=2U;
i32_store(&i->m0,(U64)si0+52U,si1);
si0=l3;
si1=1959892U;
i32_store(&i->m0,(U64)si0+48U,si1);
si0=l3;
si1=6773U;
i32_store(&i->m0,(U64)si0+36U,si1);
si0=l3;
si1=l3;
si2=32U;
si1+=si2;
i32_store(&i->m0,(U64)si0+56U,si1);
si0=l3;
si1=l3;
si2=16U;
si1+=si2;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l3;
si1=72U;
si0+=si1;
si1=l3;
si2=48U;
si1+=si2;
f63(i,si0,si1);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+72U);
l4=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+76U);
l1=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+80U);
l5=si0;
goto L28;
L35:;
si0=0U;
l4=si0;
L29:;
L28:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+20U);
si0=!(si0);
if(si0){
goto L2;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0+16U);
f15271(i,si0);
L2:;
si0=l4;
if(si0){
goto L38;
}
si0=1U;
l4=si0;
goto L1;
L38:;
si0=l3;
si1=l5;
i32_store(&i->m0,(U64)si0+56U,si1);
si0=l3;
si1=l1;
i32_store(&i->m0,(U64)si0+52U,si1);
si0=l3;
si1=l4;
i32_store(&i->m0,(U64)si0+48U,si1);
si0=0U;
l4=si0;
si0=l3;
si1=48U;
si0+=si1;
si1=l2;
si1=i32_load(&i->m0,(U64)si1+88U);
si2=8U;
si1+=si2;
si0=f10804(i,si0,si1);
l1=si0;
L1:;
si0=l0;
si1=l1;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l4;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=96U;
si0+=si1;
i->g0=si0;
L0:;
}

void f13909(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U32 l5=0;
U32 si0,si1,si2,si3,si4;
si0=i->g0;
si1=32U;
si0-=si1;
l4=si0;
i->g0=si0;
si0=l4;
si1=16U;
si0+=si1;
si1=l2;
si2=l3;
f5949(i,si0,si1,si2);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+20U);
l2=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+16U);
if(si0){
goto L2;
}
si0=l4;
si1=8U;
si0+=si1;
si1=l1;
si2=l2;
si3=l4;
si4=24U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si4=l3;
f14050(i,si0,si1,si2,si3,si4);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+12U);
l2=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+8U);
l3=si0;
goto L1;
L2:;
si0=l1;
si1=l1;
si1=i32_load(&i->m0,(U64)si1);
l5=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=1U;
l3=si0;
si0=l5;
si1=1U;
si0=si0 != si1;
if(si0){
goto L1;
}
si0=l1;
f7690(i,si0);
L1:;
si0=l0;
si1=l2;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l3;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=32U;
si0+=si1;
i->g0=si0;
L0:;
}

U32 f13910(rustpythonInstance*i) {
U32 l0=0;
U32 l1=0;
U32 l2=0;
U32 l3=0;
U32 l4=0;
U64 l5=0;
U64 l6=0;
U64 l7=0;
U64 l8=0;
U32 si0,si1,si2,si3,si4;
U64 sj1,sj2;
si0=i->g0;
si1=384U;
si0-=si1;
l0=si0;
i->g0=si0;
si0=0U;
si0=i32_load(&i->m0,(U64)si0+2968924U);
si1=2U;
si0=si0 != si1;
if(si0){
goto L5;
}
si0=0U;
si0=i32_load(&i->m0,(U64)si0+2968928U);
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
goto L4;
}
si0=2967024U;
si0=f10432(i,si0);
l2=si0;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si1=l2;
si1=i32_load(&i->m0,(U64)si1+4U);
l4=si1;
si1=i32_load(&i->m0,(U64)si1+12U);
si0=TF(i->t0,si1,U32 (*)(rustpythonInstance*,U32))(i,si0);
l2=si0;
si0=l3;
si1=l4;
si1=i32_load(&i->m0,(U64)si1+16U);
si0=TF(i->t0,si1,U32 (*)(rustpythonInstance*,U32))(i,si0);
l3=si0;
si0=l0;
si1=52U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=44U;
si0+=si1;
sj1=17179869184ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=36U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=1862528U;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l0;
si1=l2;
sj1=i64_load(&i->m0,(U64)si1);
l5=sj1;
si2=l3;
sj2=(U64)(si2);
sj1^=sj2;
sj2=6364136223846793005ULL;
sj1*=sj2;
si2=l2;
sj2=i64_load(&i->m0,(U64)si2+8U);
sj1^=sj2;
sj2=8ULL;
sj1=I64_ROTL(sj1,sj2);
sj2=6364136223846793005ULL;
sj1*=sj2;
l6=sj1;
sj2=l5;
sj1^=sj2;
sj2=24ULL;
sj1=I64_ROTL(sj1,sj2);
l5=sj1;
si2=l2;
si3=56U;
si2+=si3;
sj2=i64_load(&i->m0,(U64)si2);
sj1^=sj2;
sj2=6364136223846793005ULL;
sj1*=sj2;
sj2=l6;
sj1^=sj2;
sj2=8ULL;
sj1=I64_ROTL(sj1,sj2);
sj2=6364136223846793005ULL;
sj1*=sj2;
l7=sj1;
sj2=l5;
sj1^=sj2;
sj2=24ULL;
sj1=I64_ROTL(sj1,sj2);
l8=sj1;
sj2=6364136223846793005ULL;
sj1*=sj2;
sj2=l7;
sj1^=sj2;
sj2=l8;
sj1=I64_ROTL(sj1,sj2);
i64_store(&i->m0,(U64)si0+24U,sj1);
si0=l0;
sj1=l5;
si2=l2;
si3=48U;
si2+=si3;
sj2=i64_load(&i->m0,(U64)si2);
sj1^=sj2;
sj2=6364136223846793005ULL;
sj1*=sj2;
sj2=l6;
sj1^=sj2;
sj2=8ULL;
sj1=I64_ROTL(sj1,sj2);
sj2=6364136223846793005ULL;
sj1*=sj2;
l7=sj1;
sj2=l5;
sj1^=sj2;
sj2=24ULL;
sj1=I64_ROTL(sj1,sj2);
l8=sj1;
sj2=6364136223846793005ULL;
sj1*=sj2;
sj2=l7;
sj1^=sj2;
sj2=l8;
sj1=I64_ROTL(sj1,sj2);
i64_store(&i->m0,(U64)si0+16U,sj1);
si0=l0;
sj1=l5;
si2=l2;
si3=40U;
si2+=si3;
sj2=i64_load(&i->m0,(U64)si2);
sj1^=sj2;
sj2=6364136223846793005ULL;
sj1*=sj2;
sj2=l6;
sj1^=sj2;
sj2=8ULL;
sj1=I64_ROTL(sj1,sj2);
sj2=6364136223846793005ULL;
sj1*=sj2;
l7=sj1;
sj2=l5;
sj1^=sj2;
sj2=24ULL;
sj1=I64_ROTL(sj1,sj2);
l8=sj1;
sj2=6364136223846793005ULL;
sj1*=sj2;
sj2=l7;
sj1^=sj2;
sj2=l8;
sj1=I64_ROTL(sj1,sj2);
i64_store(&i->m0,(U64)si0+8U,sj1);
si0=l0;
sj1=l5;
si2=l2;
sj2=i64_load(&i->m0,(U64)si2+32U);
sj1^=sj2;
sj2=6364136223846793005ULL;
sj1*=sj2;
sj2=l6;
sj1^=sj2;
sj2=8ULL;
sj1=I64_ROTL(sj1,sj2);
sj2=6364136223846793005ULL;
sj1*=sj2;
l6=sj1;
sj2=l5;
sj1^=sj2;
sj2=24ULL;
sj1=I64_ROTL(sj1,sj2);
l5=sj1;
sj2=6364136223846793005ULL;
sj1*=sj2;
sj2=l6;
sj1^=sj2;
sj2=l5;
sj1=I64_ROTL(sj1,sj2);
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0+376U,si1);
si0=l0;
sj1=4ULL;
i64_store(&i->m0,(U64)si0+368U,sj1);
si0=l0;
si1=368U;
si0+=si1;
si1=0U;
f7267(i,si0,si1);
si0=l0;
si0=i32_load(&i->m0,(U64)si0+368U);
si1=l0;
si1=i32_load(&i->m0,(U64)si1+376U);
si2=28U;
si1*=si2;
si0+=si1;
l2=si0;
sj1=512ULL;
i64_store(&i->m0,(U64)si0+16U,sj1);
si0=l2;
si1=1629124U;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l2;
sj1=4294967304ULL;
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l2;
si1=1968499U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+376U);
si2=1U;
si1+=si2;
l2=si1;
i32_store(&i->m0,(U64)si0+376U,si1);
si0=l2;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+372U);
si0=si0 != si1;
if(si0){
goto L6;
}
si0=l0;
si1=368U;
si0+=si1;
si1=l2;
f7267(i,si0,si1);
si0=l0;
si0=i32_load(&i->m0,(U64)si0+376U);
l2=si0;
L6:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+368U);
si1=l2;
si2=28U;
si1*=si2;
si0+=si1;
l2=si0;
sj1=512ULL;
i64_store(&i->m0,(U64)si0+16U,sj1);
si0=l2;
si1=1628260U;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l2;
sj1=4294967306ULL;
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l2;
si1=1960898U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+376U);
si2=1U;
si1+=si2;
l2=si1;
i32_store(&i->m0,(U64)si0+376U,si1);
si0=l0;
si0=i32_load(&i->m0,(U64)si0+368U);
l3=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+372U);
si1=l2;
si0=si0 <= si1;
if(si0){
goto L7;
}
si0=l2;
if(si0){
goto L8;
}
si0=l3;
f15271(i,si0);
si0=4U;
l3=si0;
goto L7;
L8:;
si0=l3;
si1=l2;
si2=28U;
si1*=si2;
l4=si1;
si0=f15274(i,si0,si1);
l3=si0;
si0=!(si0);
if(si0){
goto L3;
}
L7:;
si0=l0;
si1=56U;
i32_store(&i->m0,(U64)si0+96U,si1);
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0+88U,si1);
si0=l0;
sj1=0ULL;
i64_store(&i->m0,(U64)si0+80U,sj1);
si0=l0;
si1=l2;
i32_store(&i->m0,(U64)si0+76U,si1);
si0=l0;
si1=l3;
i32_store(&i->m0,(U64)si0+72U,si1);
si0=l0;
si1=14U;
i32_store(&i->m0,(U64)si0+68U,si1);
si0=l0;
si1=1958113U;
i32_store(&i->m0,(U64)si0+64U,si1);
si0=l0;
si1=64U;
si0+=si1;
si1=36U;
si0+=si1;
si1=0U;
si2=264U;
si0=f15392(i,si0,si1,si2);
si0=0U;
si0=i32_load(&i->m0,(U64)si0+2969692U);
si1=2U;
si0=si0 != si1;
if(si0){
goto L2;
}
si0=0U;
si0=i32_load(&i->m0,(U64)si0+2969696U);
l2=si0;
si1=l2;
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
goto L4;
}
si0=l0;
si1=368U;
si0+=si1;
si1=l1;
si2=l0;
si3=l0;
si4=64U;
si3+=si4;
si4=l2;
f9967(i,si0,si1,si2,si3,si4);
si0=l0;
si0=i32_load(&i->m0,(U64)si0+368U);
si0=!(si0);
if(si0){
goto L1;
}
si0=l0;
si1=64U;
si0+=si1;
si1=8U;
si0+=si1;
si1=l0;
si2=368U;
si1+=si2;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l0;
sj1=i64_load(&i->m0,(U64)si1+368U);
i64_store(&i->m0,(U64)si0+64U,sj1);
si0=1953380U;
si1=43U;
si2=l0;
si3=64U;
si2+=si3;
si3=1953424U;
si4=1953440U;
f712(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L5:;
si0=1625617U;
si1=36U;
si2=1625668U;
f703(i,si0,si1,si2);
UNREACHABLE;
L4:;
f15042(i);
UNREACHABLE;
L3:;
si0=4U;
si1=l4;
f52(i,si0,si1);
UNREACHABLE;
L2:;
si0=1837556U;
si1=36U;
si2=1837608U;
f703(i,si0,si1,si2);
UNREACHABLE;
L1:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+372U);
l2=si0;
si0=l0;
si1=384U;
si0+=si1;
i->g0=si0;
si0=l2;
L0:;
return si0;
}

U32 f13911(rustpythonInstance*i) {
U32 l0=0;
U32 l1=0;
U32 l2=0;
U32 l3=0;
U32 l4=0;
U64 l5=0;
U64 l6=0;
U64 l7=0;
U64 l8=0;
U32 si0,si1,si2,si3,si4;
U64 sj1,sj2;
si0=i->g0;
si1=688U;
si0-=si1;
l0=si0;
i->g0=si0;
si0=0U;
si0=i32_load(&i->m0,(U64)si0+2969684U);
si1=2U;
si0=si0 != si1;
if(si0){
goto L5;
}
si0=0U;
si0=i32_load(&i->m0,(U64)si0+2969688U);
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
goto L4;
}
si0=2967024U;
si0=f10432(i,si0);
l2=si0;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si1=l2;
si1=i32_load(&i->m0,(U64)si1+4U);
l4=si1;
si1=i32_load(&i->m0,(U64)si1+12U);
si0=TF(i->t0,si1,U32 (*)(rustpythonInstance*,U32))(i,si0);
l2=si0;
si0=l3;
si1=l4;
si1=i32_load(&i->m0,(U64)si1+16U);
si0=TF(i->t0,si1,U32 (*)(rustpythonInstance*,U32))(i,si0);
l3=si0;
si0=l0;
si1=52U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=44U;
si0+=si1;
sj1=17179869184ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=36U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=1862528U;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l0;
si1=l2;
sj1=i64_load(&i->m0,(U64)si1);
l5=sj1;
si2=l3;
sj2=(U64)(si2);
sj1^=sj2;
sj2=6364136223846793005ULL;
sj1*=sj2;
si2=l2;
sj2=i64_load(&i->m0,(U64)si2+8U);
sj1^=sj2;
sj2=8ULL;
sj1=I64_ROTL(sj1,sj2);
sj2=6364136223846793005ULL;
sj1*=sj2;
l6=sj1;
sj2=l5;
sj1^=sj2;
sj2=24ULL;
sj1=I64_ROTL(sj1,sj2);
l5=sj1;
si2=l2;
si3=56U;
si2+=si3;
sj2=i64_load(&i->m0,(U64)si2);
sj1^=sj2;
sj2=6364136223846793005ULL;
sj1*=sj2;
sj2=l6;
sj1^=sj2;
sj2=8ULL;
sj1=I64_ROTL(sj1,sj2);
sj2=6364136223846793005ULL;
sj1*=sj2;
l7=sj1;
sj2=l5;
sj1^=sj2;
sj2=24ULL;
sj1=I64_ROTL(sj1,sj2);
l8=sj1;
sj2=6364136223846793005ULL;
sj1*=sj2;
sj2=l7;
sj1^=sj2;
sj2=l8;
sj1=I64_ROTL(sj1,sj2);
i64_store(&i->m0,(U64)si0+24U,sj1);
si0=l0;
sj1=l5;
si2=l2;
si3=48U;
si2+=si3;
sj2=i64_load(&i->m0,(U64)si2);
sj1^=sj2;
sj2=6364136223846793005ULL;
sj1*=sj2;
sj2=l6;
sj1^=sj2;
sj2=8ULL;
sj1=I64_ROTL(sj1,sj2);
sj2=6364136223846793005ULL;
sj1*=sj2;
l7=sj1;
sj2=l5;
sj1^=sj2;
sj2=24ULL;
sj1=I64_ROTL(sj1,sj2);
l8=sj1;
sj2=6364136223846793005ULL;
sj1*=sj2;
sj2=l7;
sj1^=sj2;
sj2=l8;
sj1=I64_ROTL(sj1,sj2);
i64_store(&i->m0,(U64)si0+16U,sj1);
si0=l0;
sj1=l5;
si2=l2;
si3=40U;
si2+=si3;
sj2=i64_load(&i->m0,(U64)si2);
sj1^=sj2;
sj2=6364136223846793005ULL;
sj1*=sj2;
sj2=l6;
sj1^=sj2;
sj2=8ULL;
sj1=I64_ROTL(sj1,sj2);
sj2=6364136223846793005ULL;
sj1*=sj2;
l7=sj1;
sj2=l5;
sj1^=sj2;
sj2=24ULL;
sj1=I64_ROTL(sj1,sj2);
l8=sj1;
sj2=6364136223846793005ULL;
sj1*=sj2;
sj2=l7;
sj1^=sj2;
sj2=l8;
sj1=I64_ROTL(sj1,sj2);
i64_store(&i->m0,(U64)si0+8U,sj1);
si0=l0;
sj1=l5;
si2=l2;
sj2=i64_load(&i->m0,(U64)si2+32U);
sj1^=sj2;
sj2=6364136223846793005ULL;
sj1*=sj2;
sj2=l6;
sj1^=sj2;
sj2=8ULL;
sj1=I64_ROTL(sj1,sj2);
sj2=6364136223846793005ULL;
sj1*=sj2;
l6=sj1;
sj2=l5;
sj1^=sj2;
sj2=24ULL;
sj1=I64_ROTL(sj1,sj2);
l5=sj1;
sj2=6364136223846793005ULL;
sj1*=sj2;
sj2=l6;
sj1^=sj2;
sj2=l5;
sj1=I64_ROTL(sj1,sj2);
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0+376U,si1);
si0=l0;
sj1=4ULL;
i64_store(&i->m0,(U64)si0+368U,sj1);
si0=l0;
si1=368U;
si0+=si1;
si1=0U;
f7267(i,si0,si1);
si0=l0;
si0=i32_load(&i->m0,(U64)si0+368U);
si1=l0;
si1=i32_load(&i->m0,(U64)si1+376U);
si2=28U;
si1*=si2;
si0+=si1;
l2=si0;
sj1=512ULL;
i64_store(&i->m0,(U64)si0+16U,sj1);
si0=l2;
si1=1823664U;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l2;
sj1=4294967304ULL;
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l2;
si1=1968546U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+376U);
si2=1U;
si1+=si2;
l2=si1;
i32_store(&i->m0,(U64)si0+376U,si1);
si0=l2;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+372U);
si0=si0 != si1;
if(si0){
goto L6;
}
si0=l0;
si1=368U;
si0+=si1;
si1=l2;
f7267(i,si0,si1);
si0=l0;
si0=i32_load(&i->m0,(U64)si0+376U);
l2=si0;
L6:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+368U);
si1=l2;
si2=28U;
si1*=si2;
si0+=si1;
l2=si0;
sj1=512ULL;
i64_store(&i->m0,(U64)si0+16U,sj1);
si0=l2;
si1=1814280U;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l2;
sj1=4294967304ULL;
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l2;
si1=1968507U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+376U);
si2=1U;
si1+=si2;
l2=si1;
i32_store(&i->m0,(U64)si0+376U,si1);
si0=l0;
si0=i32_load(&i->m0,(U64)si0+368U);
l3=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+372U);
si1=l2;
si0=si0 <= si1;
if(si0){
goto L7;
}
si0=l2;
if(si0){
goto L8;
}
si0=l3;
f15271(i,si0);
si0=4U;
l3=si0;
goto L7;
L8:;
si0=l3;
si1=l2;
si2=28U;
si1*=si2;
l4=si1;
si0=f15274(i,si0,si1);
l3=si0;
si0=!(si0);
if(si0){
goto L3;
}
L7:;
si0=l0;
si1=4U;
i32_store(&i->m0,(U64)si0+416U,si1);
si0=l0;
si1=18U;
i32_store(&i->m0,(U64)si0+388U,si1);
si0=l0;
si1=1958049U;
i32_store(&i->m0,(U64)si0+384U,si1);
si0=l0;
si1=384U;
si0+=si1;
si1=36U;
si0+=si1;
si1=0U;
si2=240U;
si0=f15392(i,si0,si1,si2);
si0=l0;
si1=396U;
si0+=si1;
si1=l2;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=668U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=676U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
sj1=0ULL;
i64_store(&i->m0,(U64)si0+660U,sj1);
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0+408U,si1);
si0=l0;
sj1=0ULL;
i64_store(&i->m0,(U64)si0+400U,sj1);
si0=l0;
si1=l3;
i32_store(&i->m0,(U64)si0+392U,si1);
si0=l0;
si1=839U;
i32_store(&i->m0,(U64)si0+652U,si1);
si0=l0;
si1=6782U;
i32_store(&i->m0,(U64)si0+656U,si1);
si0=l0;
si1=64U;
si0+=si1;
si1=l0;
si2=384U;
si1+=si2;
si2=304U;
si0=f15390(i,si0,si1,si2);
si0=0U;
si0=i32_load(&i->m0,(U64)si0+2969692U);
si1=2U;
si0=si0 != si1;
if(si0){
goto L2;
}
si0=0U;
si0=i32_load(&i->m0,(U64)si0+2969696U);
l2=si0;
si1=l2;
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
goto L4;
}
si0=l0;
si1=368U;
si0+=si1;
si1=l1;
si2=l0;
si3=l0;
si4=64U;
si3+=si4;
si4=l2;
f9967(i,si0,si1,si2,si3,si4);
si0=l0;
si0=i32_load(&i->m0,(U64)si0+368U);
si0=!(si0);
if(si0){
goto L1;
}
si0=l0;
si1=384U;
si0+=si1;
si1=8U;
si0+=si1;
si1=l0;
si2=368U;
si1+=si2;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l0;
sj1=i64_load(&i->m0,(U64)si1+368U);
i64_store(&i->m0,(U64)si0+384U,sj1);
si0=1953380U;
si1=43U;
si2=l0;
si3=384U;
si2+=si3;
si3=1953424U;
si4=1953440U;
f712(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L5:;
si0=1837556U;
si1=36U;
si2=1837608U;
f703(i,si0,si1,si2);
UNREACHABLE;
L4:;
f15042(i);
UNREACHABLE;
L3:;
si0=4U;
si1=l4;
f52(i,si0,si1);
UNREACHABLE;
L2:;
si0=1837556U;
si1=36U;
si2=1837608U;
f703(i,si0,si1,si2);
UNREACHABLE;
L1:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+372U);
l2=si0;
si0=l0;
si1=688U;
si0+=si1;
i->g0=si0;
si0=l2;
L0:;
return si0;
}

void f13912(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 si0,si1,si2;
U64 sj0,sj1,sj2;
si0=i->g0;
si1=16U;
si0-=si1;
l3=si0;
i->g0=si0;
si0=l1;
sj0=i64_load(&i->m0,(U64)si0+8U);
sj1=-4716059370963297661ULL;
sj0^=sj1;
si1=l1;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
sj2=-7099104344648244690ULL;
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
f14064(i,si0,si1,si2);
goto L3;
L4:;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=31U;
si0=f15269(i,si0);
l1=si0;
si0=!(si0);
if(si0){
goto L2;
}
si0=l1;
si1=23U;
si0+=si1;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+1968538U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si1=16U;
si0+=si1;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+1968531U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si1=8U;
si0+=si1;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+1968523U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+1968515U);
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
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l3;
si1=l1;
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
si1=l4;
si2=l3;
si0=f7173(i,si0,si1,si2);
l1=si0;
si0=l0;
si1=2U;
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
f15042(i);
UNREACHABLE;
L0:;
}

U32 f13913(rustpythonInstance*i) {
U32 l0=0;
U32 l1=0;
U32 l2=0;
U32 l3=0;
U32 l4=0;
U64 l5=0;
U64 l6=0;
U64 l7=0;
U64 l8=0;
U32 si0,si1,si2,si3,si4;
U64 sj1,sj2;
si0=i->g0;
si1=688U;
si0-=si1;
l0=si0;
i->g0=si0;
si0=0U;
si0=i32_load(&i->m0,(U64)si0+2969684U);
si1=2U;
si0=si0 != si1;
if(si0){
goto L5;
}
si0=0U;
si0=i32_load(&i->m0,(U64)si0+2969688U);
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
goto L4;
}
si0=2967024U;
si0=f10432(i,si0);
l2=si0;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si1=l2;
si1=i32_load(&i->m0,(U64)si1+4U);
l4=si1;
si1=i32_load(&i->m0,(U64)si1+12U);
si0=TF(i->t0,si1,U32 (*)(rustpythonInstance*,U32))(i,si0);
l2=si0;
si0=l3;
si1=l4;
si1=i32_load(&i->m0,(U64)si1+16U);
si0=TF(i->t0,si1,U32 (*)(rustpythonInstance*,U32))(i,si0);
l3=si0;
si0=l0;
si1=52U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=44U;
si0+=si1;
sj1=17179869184ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=36U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=1862528U;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l0;
si1=l2;
sj1=i64_load(&i->m0,(U64)si1);
l5=sj1;
si2=l3;
sj2=(U64)(si2);
sj1^=sj2;
sj2=6364136223846793005ULL;
sj1*=sj2;
si2=l2;
sj2=i64_load(&i->m0,(U64)si2+8U);
sj1^=sj2;
sj2=8ULL;
sj1=I64_ROTL(sj1,sj2);
sj2=6364136223846793005ULL;
sj1*=sj2;
l6=sj1;
sj2=l5;
sj1^=sj2;
sj2=24ULL;
sj1=I64_ROTL(sj1,sj2);
l5=sj1;
si2=l2;
si3=56U;
si2+=si3;
sj2=i64_load(&i->m0,(U64)si2);
sj1^=sj2;
sj2=6364136223846793005ULL;
sj1*=sj2;
sj2=l6;
sj1^=sj2;
sj2=8ULL;
sj1=I64_ROTL(sj1,sj2);
sj2=6364136223846793005ULL;
sj1*=sj2;
l7=sj1;
sj2=l5;
sj1^=sj2;
sj2=24ULL;
sj1=I64_ROTL(sj1,sj2);
l8=sj1;
sj2=6364136223846793005ULL;
sj1*=sj2;
sj2=l7;
sj1^=sj2;
sj2=l8;
sj1=I64_ROTL(sj1,sj2);
i64_store(&i->m0,(U64)si0+24U,sj1);
si0=l0;
sj1=l5;
si2=l2;
si3=48U;
si2+=si3;
sj2=i64_load(&i->m0,(U64)si2);
sj1^=sj2;
sj2=6364136223846793005ULL;
sj1*=sj2;
sj2=l6;
sj1^=sj2;
sj2=8ULL;
sj1=I64_ROTL(sj1,sj2);
sj2=6364136223846793005ULL;
sj1*=sj2;
l7=sj1;
sj2=l5;
sj1^=sj2;
sj2=24ULL;
sj1=I64_ROTL(sj1,sj2);
l8=sj1;
sj2=6364136223846793005ULL;
sj1*=sj2;
sj2=l7;
sj1^=sj2;
sj2=l8;
sj1=I64_ROTL(sj1,sj2);
i64_store(&i->m0,(U64)si0+16U,sj1);
si0=l0;
sj1=l5;
si2=l2;
si3=40U;
si2+=si3;
sj2=i64_load(&i->m0,(U64)si2);
sj1^=sj2;
sj2=6364136223846793005ULL;
sj1*=sj2;
sj2=l6;
sj1^=sj2;
sj2=8ULL;
sj1=I64_ROTL(sj1,sj2);
sj2=6364136223846793005ULL;
sj1*=sj2;
l7=sj1;
sj2=l5;
sj1^=sj2;
sj2=24ULL;
sj1=I64_ROTL(sj1,sj2);
l8=sj1;
sj2=6364136223846793005ULL;
sj1*=sj2;
sj2=l7;
sj1^=sj2;
sj2=l8;
sj1=I64_ROTL(sj1,sj2);
i64_store(&i->m0,(U64)si0+8U,sj1);
si0=l0;
sj1=l5;
si2=l2;
sj2=i64_load(&i->m0,(U64)si2+32U);
sj1^=sj2;
sj2=6364136223846793005ULL;
sj1*=sj2;
sj2=l6;
sj1^=sj2;
sj2=8ULL;
sj1=I64_ROTL(sj1,sj2);
sj2=6364136223846793005ULL;
sj1*=sj2;
l6=sj1;
sj2=l5;
sj1^=sj2;
sj2=24ULL;
sj1=I64_ROTL(sj1,sj2);
l5=sj1;
sj2=6364136223846793005ULL;
sj1*=sj2;
sj2=l6;
sj1^=sj2;
sj2=l5;
sj1=I64_ROTL(sj1,sj2);
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0+376U,si1);
si0=l0;
sj1=4ULL;
i64_store(&i->m0,(U64)si0+368U,sj1);
si0=l0;
si1=368U;
si0+=si1;
f13914(i,si0);
si0=l0;
si0=i32_load(&i->m0,(U64)si0+368U);
l2=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+372U);
si1=l0;
si1=i32_load(&i->m0,(U64)si1+376U);
l3=si1;
si0=si0 <= si1;
if(si0){
goto L6;
}
si0=l3;
if(si0){
goto L7;
}
si0=l2;
f15271(i,si0);
si0=4U;
l2=si0;
goto L6;
L7:;
si0=l2;
si1=l3;
si2=28U;
si1*=si2;
l4=si1;
si0=f15274(i,si0,si1);
l2=si0;
si0=!(si0);
if(si0){
goto L3;
}
L6:;
si0=l0;
si1=19U;
i32_store(&i->m0,(U64)si0+388U,si1);
si0=l0;
si1=1958149U;
i32_store(&i->m0,(U64)si0+384U,si1);
si0=l0;
si1=12U;
i32_store(&i->m0,(U64)si0+416U,si1);
si0=l0;
si1=384U;
si0+=si1;
si1=36U;
si0+=si1;
si1=0U;
si2=240U;
si0=f15392(i,si0,si1,si2);
si0=l0;
si1=668U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=412U;
si0+=si1;
si1=101U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=384U;
si0+=si1;
si1=12U;
si0+=si1;
si1=l3;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=676U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
sj1=0ULL;
i64_store(&i->m0,(U64)si0+660U,sj1);
si0=l0;
si1=1954515U;
i32_store(&i->m0,(U64)si0+408U,si1);
si0=l0;
sj1=1024ULL;
i64_store(&i->m0,(U64)si0+400U,sj1);
si0=l0;
si1=l2;
i32_store(&i->m0,(U64)si0+392U,si1);
si0=l0;
si1=839U;
i32_store(&i->m0,(U64)si0+652U,si1);
si0=l0;
si1=6783U;
i32_store(&i->m0,(U64)si0+656U,si1);
si0=l0;
si1=6784U;
i32_store(&i->m0,(U64)si0+672U,si1);
si0=l0;
si1=64U;
si0+=si1;
si1=l0;
si2=384U;
si1+=si2;
si2=304U;
si0=f15390(i,si0,si1,si2);
si0=0U;
si0=i32_load(&i->m0,(U64)si0+2969692U);
si1=2U;
si0=si0 != si1;
if(si0){
goto L2;
}
si0=0U;
si0=i32_load(&i->m0,(U64)si0+2969696U);
l2=si0;
si1=l2;
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
goto L4;
}
si0=l0;
si1=368U;
si0+=si1;
si1=l1;
si2=l0;
si3=l0;
si4=64U;
si3+=si4;
si4=l2;
f9967(i,si0,si1,si2,si3,si4);
si0=l0;
si0=i32_load(&i->m0,(U64)si0+368U);
si0=!(si0);
if(si0){
goto L1;
}
si0=l0;
si1=384U;
si0+=si1;
si1=8U;
si0+=si1;
si1=l0;
si2=368U;
si1+=si2;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l0;
sj1=i64_load(&i->m0,(U64)si1+368U);
i64_store(&i->m0,(U64)si0+384U,sj1);
si0=1953380U;
si1=43U;
si2=l0;
si3=384U;
si2+=si3;
si3=1953424U;
si4=1953440U;
f712(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L5:;
si0=1837556U;
si1=36U;
si2=1837608U;
f703(i,si0,si1,si2);
UNREACHABLE;
L4:;
f15042(i);
UNREACHABLE;
L3:;
si0=4U;
si1=l4;
f52(i,si0,si1);
UNREACHABLE;
L2:;
si0=1837556U;
si1=36U;
si2=1837608U;
f703(i,si0,si1,si2);
UNREACHABLE;
L1:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+372U);
l2=si0;
si0=l0;
si1=688U;
si0+=si1;
i->g0=si0;
si0=l2;
L0:;
return si0;
}

void f13914(rustpythonInstance*i,U32 l0) {
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
f7267(i,si0,si1);
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
sj1=512ULL;
i64_store(&i->m0,(U64)si0+16U,sj1);
si0=l1;
si1=1959272U;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l1;
sj1=4294967306ULL;
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l1;
si1=1960898U;
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
f7267(i,si0,si1);
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
si1=1959032U;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l1;
sj1=4294967308ULL;
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l1;
si1=1960908U;
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
f7267(i,si0,si1);
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
si1=1822680U;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l1;
sj1=4294967304ULL;
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l1;
si1=1968546U;
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
f7267(i,si0,si1);
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
si1=1823472U;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l1;
sj1=4294967304ULL;
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l1;
si1=1968507U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+8U);
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0+8U,si1);
L0:;
}

void f13915(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 si0,si1,si2;
U64 sj0,sj1,sj2;
si0=i->g0;
si1=16U;
si0-=si1;
l3=si0;
i->g0=si0;
si0=l1;
sj0=i64_load(&i->m0,(U64)si0+8U);
sj1=7109097938613701040ULL;
sj0^=sj1;
si1=l1;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
sj2=5116033385763904124ULL;
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
f14058(i,si0,si1,si2);
goto L3;
L4:;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=31U;
si0=f15269(i,si0);
l1=si0;
si0=!(si0);
if(si0){
goto L2;
}
si0=l1;
si1=23U;
si0+=si1;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+1968538U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si1=16U;
si0+=si1;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+1968531U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si1=8U;
si0+=si1;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+1968523U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+1968515U);
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
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l3;
si1=l1;
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
si1=l4;
si2=l3;
si0=f7173(i,si0,si1,si2);
l1=si0;
si0=l0;
si1=2U;
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
f15042(i);
UNREACHABLE;
L0:;
}

void f13916(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U32 l5=0;
U32 si0,si1,si2,si3,si4;
si0=i->g0;
si1=16U;
si0-=si1;
l4=si0;
i->g0=si0;
si0=l4;
si1=8U;
si0+=si1;
si1=l2;
si2=l3;
f6079(i,si0,si1,si2);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+12U);
l2=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+8U);
l5=si0;
si0=!(si0);
if(si0){
goto L2;
}
si0=l4;
si1=l1;
si2=l5;
si3=l2;
si4=l3;
f14057(i,si0,si1,si2,si3,si4);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+4U);
l2=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
goto L1;
L2:;
si0=l1;
si1=l1;
si1=i32_load(&i->m0,(U64)si1);
l5=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=1U;
l3=si0;
si0=l5;
si1=1U;
si0=si0 != si1;
if(si0){
goto L1;
}
si0=l1;
f7690(i,si0);
L1:;
si0=l0;
si1=l2;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l3;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=16U;
si0+=si1;
i->g0=si0;
L0:;
}

U32 f13917(rustpythonInstance*i) {
U32 l0=0;
U32 l1=0;
U32 l2=0;
U32 l3=0;
U32 l4=0;
U64 l5=0;
U64 l6=0;
U64 l7=0;
U64 l8=0;
U32 si0,si1,si2,si3,si4;
U64 sj1,sj2;
si0=i->g0;
si1=384U;
si0-=si1;
l0=si0;
i->g0=si0;
si0=0U;
si0=i32_load(&i->m0,(U64)si0+2968924U);
si1=2U;
si0=si0 != si1;
if(si0){
goto L5;
}
si0=0U;
si0=i32_load(&i->m0,(U64)si0+2968928U);
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
goto L4;
}
si0=2967024U;
si0=f10432(i,si0);
l2=si0;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si1=l2;
si1=i32_load(&i->m0,(U64)si1+4U);
l4=si1;
si1=i32_load(&i->m0,(U64)si1+12U);
si0=TF(i->t0,si1,U32 (*)(rustpythonInstance*,U32))(i,si0);
l2=si0;
si0=l3;
si1=l4;
si1=i32_load(&i->m0,(U64)si1+16U);
si0=TF(i->t0,si1,U32 (*)(rustpythonInstance*,U32))(i,si0);
l3=si0;
si0=l0;
si1=52U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=44U;
si0+=si1;
sj1=17179869184ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=36U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=1862528U;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l0;
si1=l2;
sj1=i64_load(&i->m0,(U64)si1);
l5=sj1;
si2=l3;
sj2=(U64)(si2);
sj1^=sj2;
sj2=6364136223846793005ULL;
sj1*=sj2;
si2=l2;
sj2=i64_load(&i->m0,(U64)si2+8U);
sj1^=sj2;
sj2=8ULL;
sj1=I64_ROTL(sj1,sj2);
sj2=6364136223846793005ULL;
sj1*=sj2;
l6=sj1;
sj2=l5;
sj1^=sj2;
sj2=24ULL;
sj1=I64_ROTL(sj1,sj2);
l5=sj1;
si2=l2;
si3=56U;
si2+=si3;
sj2=i64_load(&i->m0,(U64)si2);
sj1^=sj2;
sj2=6364136223846793005ULL;
sj1*=sj2;
sj2=l6;
sj1^=sj2;
sj2=8ULL;
sj1=I64_ROTL(sj1,sj2);
sj2=6364136223846793005ULL;
sj1*=sj2;
l7=sj1;
sj2=l5;
sj1^=sj2;
sj2=24ULL;
sj1=I64_ROTL(sj1,sj2);
l8=sj1;
sj2=6364136223846793005ULL;
sj1*=sj2;
sj2=l7;
sj1^=sj2;
sj2=l8;
sj1=I64_ROTL(sj1,sj2);
i64_store(&i->m0,(U64)si0+24U,sj1);
si0=l0;
sj1=l5;
si2=l2;
si3=48U;
si2+=si3;
sj2=i64_load(&i->m0,(U64)si2);
sj1^=sj2;
sj2=6364136223846793005ULL;
sj1*=sj2;
sj2=l6;
sj1^=sj2;
sj2=8ULL;
sj1=I64_ROTL(sj1,sj2);
sj2=6364136223846793005ULL;
sj1*=sj2;
l7=sj1;
sj2=l5;
sj1^=sj2;
sj2=24ULL;
sj1=I64_ROTL(sj1,sj2);
l8=sj1;
sj2=6364136223846793005ULL;
sj1*=sj2;
sj2=l7;
sj1^=sj2;
sj2=l8;
sj1=I64_ROTL(sj1,sj2);
i64_store(&i->m0,(U64)si0+16U,sj1);
si0=l0;
sj1=l5;
si2=l2;
si3=40U;
si2+=si3;
sj2=i64_load(&i->m0,(U64)si2);
sj1^=sj2;
sj2=6364136223846793005ULL;
sj1*=sj2;
sj2=l6;
sj1^=sj2;
sj2=8ULL;
sj1=I64_ROTL(sj1,sj2);
sj2=6364136223846793005ULL;
sj1*=sj2;
l7=sj1;
sj2=l5;
sj1^=sj2;
sj2=24ULL;
sj1=I64_ROTL(sj1,sj2);
l8=sj1;
sj2=6364136223846793005ULL;
sj1*=sj2;
sj2=l7;
sj1^=sj2;
sj2=l8;
sj1=I64_ROTL(sj1,sj2);
i64_store(&i->m0,(U64)si0+8U,sj1);
si0=l0;
sj1=l5;
si2=l2;
sj2=i64_load(&i->m0,(U64)si2+32U);
sj1^=sj2;
sj2=6364136223846793005ULL;
sj1*=sj2;
sj2=l6;
sj1^=sj2;
sj2=8ULL;
sj1=I64_ROTL(sj1,sj2);
sj2=6364136223846793005ULL;
sj1*=sj2;
l6=sj1;
sj2=l5;
sj1^=sj2;
sj2=24ULL;
sj1=I64_ROTL(sj1,sj2);
l5=sj1;
sj2=6364136223846793005ULL;
sj1*=sj2;
sj2=l6;
sj1^=sj2;
sj2=l5;
sj1=I64_ROTL(sj1,sj2);
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0+376U,si1);
si0=l0;
sj1=4ULL;
i64_store(&i->m0,(U64)si0+368U,sj1);
si0=l0;
si1=368U;
si0+=si1;
si1=0U;
f7267(i,si0,si1);
si0=l0;
si0=i32_load(&i->m0,(U64)si0+368U);
si1=l0;
si1=i32_load(&i->m0,(U64)si1+376U);
si2=28U;
si1*=si2;
si0+=si1;
l2=si0;
sj1=512ULL;
i64_store(&i->m0,(U64)si0+16U,sj1);
si0=l2;
si1=1628596U;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l2;
sj1=4294967304ULL;
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l2;
si1=1968499U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+376U);
si2=1U;
si1+=si2;
l2=si1;
i32_store(&i->m0,(U64)si0+376U,si1);
si0=l2;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+372U);
si0=si0 != si1;
if(si0){
goto L6;
}
si0=l0;
si1=368U;
si0+=si1;
si1=l2;
f7267(i,si0,si1);
si0=l0;
si0=i32_load(&i->m0,(U64)si0+376U);
l2=si0;
L6:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+368U);
si1=l2;
si2=28U;
si1*=si2;
si0+=si1;
l2=si0;
sj1=512ULL;
i64_store(&i->m0,(U64)si0+16U,sj1);
si0=l2;
si1=1627684U;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l2;
sj1=4294967306ULL;
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l2;
si1=1960898U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+376U);
si2=1U;
si1+=si2;
l2=si1;
i32_store(&i->m0,(U64)si0+376U,si1);
si0=l0;
si0=i32_load(&i->m0,(U64)si0+368U);
l3=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+372U);
si1=l2;
si0=si0 <= si1;
if(si0){
goto L7;
}
si0=l2;
if(si0){
goto L8;
}
si0=l3;
f15271(i,si0);
si0=4U;
l3=si0;
goto L7;
L8:;
si0=l3;
si1=l2;
si2=28U;
si1*=si2;
l4=si1;
si0=f15274(i,si0,si1);
l3=si0;
si0=!(si0);
if(si0){
goto L3;
}
L7:;
si0=l0;
si1=56U;
i32_store(&i->m0,(U64)si0+96U,si1);
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0+88U,si1);
si0=l0;
sj1=0ULL;
i64_store(&i->m0,(U64)si0+80U,sj1);
si0=l0;
si1=l2;
i32_store(&i->m0,(U64)si0+76U,si1);
si0=l0;
si1=l3;
i32_store(&i->m0,(U64)si0+72U,si1);
si0=l0;
si1=13U;
i32_store(&i->m0,(U64)si0+68U,si1);
si0=l0;
si1=1958100U;
i32_store(&i->m0,(U64)si0+64U,si1);
si0=l0;
si1=64U;
si0+=si1;
si1=36U;
si0+=si1;
si1=0U;
si2=264U;
si0=f15392(i,si0,si1,si2);
si0=0U;
si0=i32_load(&i->m0,(U64)si0+2969692U);
si1=2U;
si0=si0 != si1;
if(si0){
goto L2;
}
si0=0U;
si0=i32_load(&i->m0,(U64)si0+2969696U);
l2=si0;
si1=l2;
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
goto L4;
}
si0=l0;
si1=368U;
si0+=si1;
si1=l1;
si2=l0;
si3=l0;
si4=64U;
si3+=si4;
si4=l2;
f9967(i,si0,si1,si2,si3,si4);
si0=l0;
si0=i32_load(&i->m0,(U64)si0+368U);
si0=!(si0);
if(si0){
goto L1;
}
si0=l0;
si1=64U;
si0+=si1;
si1=8U;
si0+=si1;
si1=l0;
si2=368U;
si1+=si2;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l0;
sj1=i64_load(&i->m0,(U64)si1+368U);
i64_store(&i->m0,(U64)si0+64U,sj1);
si0=1953380U;
si1=43U;
si2=l0;
si3=64U;
si2+=si3;
si3=1953424U;
si4=1953440U;
f712(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L5:;
si0=1625617U;
si1=36U;
si2=1625668U;
f703(i,si0,si1,si2);
UNREACHABLE;
L4:;
f15042(i);
UNREACHABLE;
L3:;
si0=4U;
si1=l4;
f52(i,si0,si1);
UNREACHABLE;
L2:;
si0=1837556U;
si1=36U;
si2=1837608U;
f703(i,si0,si1,si2);
UNREACHABLE;
L1:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+372U);
l2=si0;
si0=l0;
si1=384U;
si0+=si1;
i->g0=si0;
si0=l2;
L0:;
return si0;
}

U32 f13918(rustpythonInstance*i) {
U32 l0=0;
U32 l1=0;
U32 l2=0;
U32 l3=0;
U32 l4=0;
U64 l5=0;
U64 l6=0;
U64 l7=0;
U64 l8=0;
U32 si0,si1,si2,si3,si4;
U64 sj1,sj2;
si0=i->g0;
si1=688U;
si0-=si1;
l0=si0;
i->g0=si0;
si0=0U;
si0=i32_load(&i->m0,(U64)si0+2969684U);
si1=2U;
si0=si0 != si1;
if(si0){
goto L5;
}
si0=0U;
si0=i32_load(&i->m0,(U64)si0+2969688U);
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
goto L4;
}
si0=2967024U;
si0=f10432(i,si0);
l2=si0;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si1=l2;
si1=i32_load(&i->m0,(U64)si1+4U);
l4=si1;
si1=i32_load(&i->m0,(U64)si1+12U);
si0=TF(i->t0,si1,U32 (*)(rustpythonInstance*,U32))(i,si0);
l2=si0;
si0=l3;
si1=l4;
si1=i32_load(&i->m0,(U64)si1+16U);
si0=TF(i->t0,si1,U32 (*)(rustpythonInstance*,U32))(i,si0);
l3=si0;
si0=l0;
si1=52U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=44U;
si0+=si1;
sj1=17179869184ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=36U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=1862528U;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l0;
si1=l2;
sj1=i64_load(&i->m0,(U64)si1);
l5=sj1;
si2=l3;
sj2=(U64)(si2);
sj1^=sj2;
sj2=6364136223846793005ULL;
sj1*=sj2;
si2=l2;
sj2=i64_load(&i->m0,(U64)si2+8U);
sj1^=sj2;
sj2=8ULL;
sj1=I64_ROTL(sj1,sj2);
sj2=6364136223846793005ULL;
sj1*=sj2;
l6=sj1;
sj2=l5;
sj1^=sj2;
sj2=24ULL;
sj1=I64_ROTL(sj1,sj2);
l5=sj1;
si2=l2;
si3=56U;
si2+=si3;
sj2=i64_load(&i->m0,(U64)si2);
sj1^=sj2;
sj2=6364136223846793005ULL;
sj1*=sj2;
sj2=l6;
sj1^=sj2;
sj2=8ULL;
sj1=I64_ROTL(sj1,sj2);
sj2=6364136223846793005ULL;
sj1*=sj2;
l7=sj1;
sj2=l5;
sj1^=sj2;
sj2=24ULL;
sj1=I64_ROTL(sj1,sj2);
l8=sj1;
sj2=6364136223846793005ULL;
sj1*=sj2;
sj2=l7;
sj1^=sj2;
sj2=l8;
sj1=I64_ROTL(sj1,sj2);
i64_store(&i->m0,(U64)si0+24U,sj1);
si0=l0;
sj1=l5;
si2=l2;
si3=48U;
si2+=si3;
sj2=i64_load(&i->m0,(U64)si2);
sj1^=sj2;
sj2=6364136223846793005ULL;
sj1*=sj2;
sj2=l6;
sj1^=sj2;
sj2=8ULL;
sj1=I64_ROTL(sj1,sj2);
sj2=6364136223846793005ULL;
sj1*=sj2;
l7=sj1;
sj2=l5;
sj1^=sj2;
sj2=24ULL;
sj1=I64_ROTL(sj1,sj2);
l8=sj1;
sj2=6364136223846793005ULL;
sj1*=sj2;
sj2=l7;
sj1^=sj2;
sj2=l8;
sj1=I64_ROTL(sj1,sj2);
i64_store(&i->m0,(U64)si0+16U,sj1);
si0=l0;
sj1=l5;
si2=l2;
si3=40U;
si2+=si3;
sj2=i64_load(&i->m0,(U64)si2);
sj1^=sj2;
sj2=6364136223846793005ULL;
sj1*=sj2;
sj2=l6;
sj1^=sj2;
sj2=8ULL;
sj1=I64_ROTL(sj1,sj2);
sj2=6364136223846793005ULL;
sj1*=sj2;
l7=sj1;
sj2=l5;
sj1^=sj2;
sj2=24ULL;
sj1=I64_ROTL(sj1,sj2);
l8=sj1;
sj2=6364136223846793005ULL;
sj1*=sj2;
sj2=l7;
sj1^=sj2;
sj2=l8;
sj1=I64_ROTL(sj1,sj2);
i64_store(&i->m0,(U64)si0+8U,sj1);
si0=l0;
sj1=l5;
si2=l2;
sj2=i64_load(&i->m0,(U64)si2+32U);
sj1^=sj2;
sj2=6364136223846793005ULL;
sj1*=sj2;
sj2=l6;
sj1^=sj2;
sj2=8ULL;
sj1=I64_ROTL(sj1,sj2);
sj2=6364136223846793005ULL;
sj1*=sj2;
l6=sj1;
sj2=l5;
sj1^=sj2;
sj2=24ULL;
sj1=I64_ROTL(sj1,sj2);
l5=sj1;
sj2=6364136223846793005ULL;
sj1*=sj2;
sj2=l6;
sj1^=sj2;
sj2=l5;
sj1=I64_ROTL(sj1,sj2);
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0+376U,si1);
si0=l0;
sj1=4ULL;
i64_store(&i->m0,(U64)si0+368U,sj1);
si0=l0;
si1=368U;
si0+=si1;
f13919(i,si0);
si0=l0;
si0=i32_load(&i->m0,(U64)si0+368U);
l2=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+372U);
si1=l0;
si1=i32_load(&i->m0,(U64)si1+376U);
l3=si1;
si0=si0 <= si1;
if(si0){
goto L6;
}
si0=l3;
if(si0){
goto L7;
}
si0=l2;
f15271(i,si0);
si0=4U;
l2=si0;
goto L6;
L7:;
si0=l2;
si1=l3;
si2=28U;
si1*=si2;
l4=si1;
si0=f15274(i,si0,si1);
l2=si0;
si0=!(si0);
if(si0){
goto L3;
}
L6:;
si0=l0;
si1=8U;
i32_store(&i->m0,(U64)si0+416U,si1);
si0=l0;
si1=13U;
i32_store(&i->m0,(U64)si0+388U,si1);
si0=l0;
si1=1957931U;
i32_store(&i->m0,(U64)si0+384U,si1);
si0=l0;
si1=384U;
si0+=si1;
si1=36U;
si0+=si1;
si1=0U;
si2=240U;
si0=f15392(i,si0,si1,si2);
si0=l0;
si1=668U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=412U;
si0+=si1;
si1=43U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=396U;
si0+=si1;
si1=l3;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=676U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
sj1=0ULL;
i64_store(&i->m0,(U64)si0+660U,sj1);
si0=l0;
si1=1955707U;
i32_store(&i->m0,(U64)si0+408U,si1);
si0=l0;
sj1=0ULL;
i64_store(&i->m0,(U64)si0+400U,sj1);
si0=l0;
si1=l2;
i32_store(&i->m0,(U64)si0+392U,si1);
si0=l0;
si1=839U;
i32_store(&i->m0,(U64)si0+652U,si1);
si0=l0;
si1=6785U;
i32_store(&i->m0,(U64)si0+656U,si1);
si0=l0;
si1=6786U;
i32_store(&i->m0,(U64)si0+672U,si1);
si0=l0;
si1=64U;
si0+=si1;
si1=l0;
si2=384U;
si1+=si2;
si2=304U;
si0=f15390(i,si0,si1,si2);
si0=0U;
si0=i32_load(&i->m0,(U64)si0+2969692U);
si1=2U;
si0=si0 != si1;
if(si0){
goto L2;
}
si0=0U;
si0=i32_load(&i->m0,(U64)si0+2969696U);
l2=si0;
si1=l2;
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
goto L4;
}
si0=l0;
si1=368U;
si0+=si1;
si1=l1;
si2=l0;
si3=l0;
si4=64U;
si3+=si4;
si4=l2;
f9967(i,si0,si1,si2,si3,si4);
si0=l0;
si0=i32_load(&i->m0,(U64)si0+368U);
si0=!(si0);
if(si0){
goto L1;
}
si0=l0;
si1=384U;
si0+=si1;
si1=8U;
si0+=si1;
si1=l0;
si2=368U;
si1+=si2;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l0;
sj1=i64_load(&i->m0,(U64)si1+368U);
i64_store(&i->m0,(U64)si0+384U,sj1);
si0=1953380U;
si1=43U;
si2=l0;
si3=384U;
si2+=si3;
si3=1953424U;
si4=1953440U;
f712(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L5:;
si0=1837556U;
si1=36U;
si2=1837608U;
f703(i,si0,si1,si2);
UNREACHABLE;
L4:;
f15042(i);
UNREACHABLE;
L3:;
si0=4U;
si1=l4;
f52(i,si0,si1);
UNREACHABLE;
L2:;
si0=1837556U;
si1=36U;
si2=1837608U;
f703(i,si0,si1,si2);
UNREACHABLE;
L1:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+372U);
l2=si0;
si0=l0;
si1=688U;
si0+=si1;
i->g0=si0;
si0=l2;
L0:;
return si0;
}

void f13919(rustpythonInstance*i,U32 l0) {
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
f7267(i,si0,si1);
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
sj1=512ULL;
i64_store(&i->m0,(U64)si0+16U,sj1);
si0=l1;
si1=1959176U;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l1;
sj1=4294967304ULL;
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l1;
si1=1961208U;
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
f7267(i,si0,si1);
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
si1=1821264U;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l1;
sj1=4294967304ULL;
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l1;
si1=1968546U;
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
f7267(i,si0,si1);
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
si1=1820928U;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l1;
sj1=4294967304ULL;
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l1;
si1=1968507U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+8U);
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0+8U,si1);
L0:;
}

void f13920(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 si0,si1,si2;
U64 sj0,sj1,sj2;
si0=i->g0;
si1=16U;
si0-=si1;
l3=si0;
i->g0=si0;
si0=l1;
sj0=i64_load(&i->m0,(U64)si0+8U);
sj1=9182784079481018905ULL;
sj0^=sj1;
si1=l1;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
sj2=2611284166599458126ULL;
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
f14072(i,si0,si1,si2);
goto L3;
L4:;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=31U;
si0=f15269(i,si0);
l1=si0;
si0=!(si0);
if(si0){
goto L2;
}
si0=l1;
si1=23U;
si0+=si1;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+1968538U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si1=16U;
si0+=si1;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+1968531U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si1=8U;
si0+=si1;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+1968523U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+1968515U);
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
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l3;
si1=l1;
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
si1=l4;
si2=l3;
si0=f7173(i,si0,si1,si2);
l1=si0;
si0=l0;
si1=2U;
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
f15042(i);
UNREACHABLE;
L0:;
}

void f13921(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U32 l5=0;
U32 si0,si1,si2,si3;
si0=i->g0;
si1=48U;
si0-=si1;
l4=si0;
i->g0=si0;
si0=l4;
si1=16U;
si0+=si1;
si1=l2;
si2=l3;
f6182(i,si0,si1,si2);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+20U);
l2=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+16U);
l5=si0;
si1=2U;
si0=si0 == si1;
if(si0){
goto L2;
}
si0=l4;
si1=l4;
si1=i32_load(&i->m0,(U64)si1+24U);
i32_store(&i->m0,(U64)si0+40U,si1);
si0=l4;
si1=l2;
i32_store(&i->m0,(U64)si0+36U,si1);
si0=l4;
si1=l5;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l4;
si1=8U;
si0+=si1;
si1=l1;
si2=l4;
si3=32U;
si2+=si3;
si3=l3;
f14071(i,si0,si1,si2,si3);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+12U);
l2=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+8U);
l3=si0;
goto L1;
L2:;
si0=l1;
si1=l1;
si1=i32_load(&i->m0,(U64)si1);
l5=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=1U;
l3=si0;
si0=l5;
si1=1U;
si0=si0 != si1;
if(si0){
goto L1;
}
si0=l1;
f7690(i,si0);
L1:;
si0=l0;
si1=l2;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l3;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=48U;
si0+=si1;
i->g0=si0;
L0:;
}

U32 f13922(rustpythonInstance*i) {
U32 l0=0;
U32 l1=0;
U32 l2=0;
U32 l3=0;
U32 l4=0;
U64 l5=0;
U64 l6=0;
U64 l7=0;
U64 l8=0;
U32 si0,si1,si2,si3,si4;
U64 sj1,sj2;
si0=i->g0;
si1=384U;
si0-=si1;
l0=si0;
i->g0=si0;
si0=0U;
si0=i32_load(&i->m0,(U64)si0+2968924U);
si1=2U;
si0=si0 != si1;
if(si0){
goto L5;
}
si0=0U;
si0=i32_load(&i->m0,(U64)si0+2968928U);
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
goto L4;
}
si0=2967024U;
si0=f10432(i,si0);
l2=si0;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si1=l2;
si1=i32_load(&i->m0,(U64)si1+4U);
l4=si1;
si1=i32_load(&i->m0,(U64)si1+12U);
si0=TF(i->t0,si1,U32 (*)(rustpythonInstance*,U32))(i,si0);
l2=si0;
si0=l3;
si1=l4;
si1=i32_load(&i->m0,(U64)si1+16U);
si0=TF(i->t0,si1,U32 (*)(rustpythonInstance*,U32))(i,si0);
l3=si0;
si0=l0;
si1=52U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=44U;
si0+=si1;
sj1=17179869184ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=36U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=1862528U;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l0;
si1=l2;
sj1=i64_load(&i->m0,(U64)si1);
l5=sj1;
si2=l3;
sj2=(U64)(si2);
sj1^=sj2;
sj2=6364136223846793005ULL;
sj1*=sj2;
si2=l2;
sj2=i64_load(&i->m0,(U64)si2+8U);
sj1^=sj2;
sj2=8ULL;
sj1=I64_ROTL(sj1,sj2);
sj2=6364136223846793005ULL;
sj1*=sj2;
l6=sj1;
sj2=l5;
sj1^=sj2;
sj2=24ULL;
sj1=I64_ROTL(sj1,sj2);
l5=sj1;
si2=l2;
si3=56U;
si2+=si3;
sj2=i64_load(&i->m0,(U64)si2);
sj1^=sj2;
sj2=6364136223846793005ULL;
sj1*=sj2;
sj2=l6;
sj1^=sj2;
sj2=8ULL;
sj1=I64_ROTL(sj1,sj2);
sj2=6364136223846793005ULL;
sj1*=sj2;
l7=sj1;
sj2=l5;
sj1^=sj2;
sj2=24ULL;
sj1=I64_ROTL(sj1,sj2);
l8=sj1;
sj2=6364136223846793005ULL;
sj1*=sj2;
sj2=l7;
sj1^=sj2;
sj2=l8;
sj1=I64_ROTL(sj1,sj2);
i64_store(&i->m0,(U64)si0+24U,sj1);
si0=l0;
sj1=l5;
si2=l2;
si3=48U;
si2+=si3;
sj2=i64_load(&i->m0,(U64)si2);
sj1^=sj2;
sj2=6364136223846793005ULL;
sj1*=sj2;
sj2=l6;
sj1^=sj2;
sj2=8ULL;
sj1=I64_ROTL(sj1,sj2);
sj2=6364136223846793005ULL;
sj1*=sj2;
l7=sj1;
sj2=l5;
sj1^=sj2;
sj2=24ULL;
sj1=I64_ROTL(sj1,sj2);
l8=sj1;
sj2=6364136223846793005ULL;
sj1*=sj2;
sj2=l7;
sj1^=sj2;
sj2=l8;
sj1=I64_ROTL(sj1,sj2);
i64_store(&i->m0,(U64)si0+16U,sj1);
si0=l0;
sj1=l5;
si2=l2;
si3=40U;
si2+=si3;
sj2=i64_load(&i->m0,(U64)si2);
sj1^=sj2;
sj2=6364136223846793005ULL;
sj1*=sj2;
sj2=l6;
sj1^=sj2;
sj2=8ULL;
sj1=I64_ROTL(sj1,sj2);
sj2=6364136223846793005ULL;
sj1*=sj2;
l7=sj1;
sj2=l5;
sj1^=sj2;
sj2=24ULL;
sj1=I64_ROTL(sj1,sj2);
l8=sj1;
sj2=6364136223846793005ULL;
sj1*=sj2;
sj2=l7;
sj1^=sj2;
sj2=l8;
sj1=I64_ROTL(sj1,sj2);
i64_store(&i->m0,(U64)si0+8U,sj1);
si0=l0;
sj1=l5;
si2=l2;
sj2=i64_load(&i->m0,(U64)si2+32U);
sj1^=sj2;
sj2=6364136223846793005ULL;
sj1*=sj2;
sj2=l6;
sj1^=sj2;
sj2=8ULL;
sj1=I64_ROTL(sj1,sj2);
sj2=6364136223846793005ULL;
sj1*=sj2;
l6=sj1;
sj2=l5;
sj1^=sj2;
sj2=24ULL;
sj1=I64_ROTL(sj1,sj2);
l5=sj1;
sj2=6364136223846793005ULL;
sj1*=sj2;
sj2=l6;
sj1^=sj2;
sj2=l5;
sj1=I64_ROTL(sj1,sj2);
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0+376U,si1);
si0=l0;
sj1=4ULL;
i64_store(&i->m0,(U64)si0+368U,sj1);
si0=l0;
si1=368U;
si0+=si1;
si1=0U;
f7267(i,si0,si1);
si0=l0;
si0=i32_load(&i->m0,(U64)si0+368U);
si1=l0;
si1=i32_load(&i->m0,(U64)si1+376U);
si2=28U;
si1*=si2;
si0+=si1;
l2=si0;
sj1=512ULL;
i64_store(&i->m0,(U64)si0+16U,sj1);
si0=l2;
si1=1628884U;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l2;
sj1=4294967304ULL;
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l2;
si1=1968499U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+376U);
si2=1U;
si1+=si2;
l2=si1;
i32_store(&i->m0,(U64)si0+376U,si1);
si0=l2;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+372U);
si0=si0 != si1;
if(si0){
goto L6;
}
si0=l0;
si1=368U;
si0+=si1;
si1=l2;
f7267(i,si0,si1);
si0=l0;
si0=i32_load(&i->m0,(U64)si0+376U);
l2=si0;
L6:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+368U);
si1=l2;
si2=28U;
si1*=si2;
si0+=si1;
l2=si0;
sj1=512ULL;
i64_store(&i->m0,(U64)si0+16U,sj1);
si0=l2;
si1=1626628U;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l2;
sj1=4294967306ULL;
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l2;
si1=1960898U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+376U);
si2=1U;
si1+=si2;
l2=si1;
i32_store(&i->m0,(U64)si0+376U,si1);
si0=l0;
si0=i32_load(&i->m0,(U64)si0+368U);
l3=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+372U);
si1=l2;
si0=si0 <= si1;
if(si0){
goto L7;
}
si0=l2;
if(si0){
goto L8;
}
si0=l3;
f15271(i,si0);
si0=4U;
l3=si0;
goto L7;
L8:;
si0=l3;
si1=l2;
si2=28U;
si1*=si2;
l4=si1;
si0=f15274(i,si0,si1);
l3=si0;
si0=!(si0);
if(si0){
goto L3;
}
L7:;
si0=l0;
si1=24U;
i32_store(&i->m0,(U64)si0+96U,si1);
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0+88U,si1);
si0=l0;
sj1=0ULL;
i64_store(&i->m0,(U64)si0+80U,sj1);
si0=l0;
si1=l2;
i32_store(&i->m0,(U64)si0+76U,si1);
si0=l0;
si1=l3;
i32_store(&i->m0,(U64)si0+72U,si1);
si0=l0;
si1=16U;
i32_store(&i->m0,(U64)si0+68U,si1);
si0=l0;
si1=1957960U;
i32_store(&i->m0,(U64)si0+64U,si1);
si0=l0;
si1=64U;
si0+=si1;
si1=36U;
si0+=si1;
si1=0U;
si2=252U;
si0=f15392(i,si0,si1,si2);
si0=l0;
sj1=0ULL;
i64_store(&i->m0,(U64)si0+356U,sj1);
si0=l0;
si1=6787U;
i32_store(&i->m0,(U64)si0+352U,si1);
si0=0U;
si0=i32_load(&i->m0,(U64)si0+2969692U);
si1=2U;
si0=si0 != si1;
if(si0){
goto L2;
}
si0=0U;
si0=i32_load(&i->m0,(U64)si0+2969696U);
l2=si0;
si1=l2;
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
goto L4;
}
si0=l0;
si1=368U;
si0+=si1;
si1=l1;
si2=l0;
si3=l0;
si4=64U;
si3+=si4;
si4=l2;
f9967(i,si0,si1,si2,si3,si4);
si0=l0;
si0=i32_load(&i->m0,(U64)si0+368U);
si0=!(si0);
if(si0){
goto L1;
}
si0=l0;
si1=64U;
si0+=si1;
si1=8U;
si0+=si1;
si1=l0;
si2=368U;
si1+=si2;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l0;
sj1=i64_load(&i->m0,(U64)si1+368U);
i64_store(&i->m0,(U64)si0+64U,sj1);
si0=1953380U;
si1=43U;
si2=l0;
si3=64U;
si2+=si3;
si3=1953424U;
si4=1953440U;
f712(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L5:;
si0=1625617U;
si1=36U;
si2=1625668U;
f703(i,si0,si1,si2);
UNREACHABLE;
L4:;
f15042(i);
UNREACHABLE;
L3:;
si0=4U;
si1=l4;
f52(i,si0,si1);
UNREACHABLE;
L2:;
si0=1837556U;
si1=36U;
si2=1837608U;
f703(i,si0,si1,si2);
UNREACHABLE;
L1:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+372U);
l2=si0;
si0=l0;
si1=384U;
si0+=si1;
i->g0=si0;
si0=l2;
L0:;
return si0;
}

void f13923(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
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
l4=si0;
i->g0=si0;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=42U;
si0=f15269(i,si0);
l5=si0;
si0=!(si0);
if(si0){
goto L2;
}
si0=l5;
si1=40U;
si0+=si1;
si1=0U;
si1=i32_load16_u(&i->m0,(U64)si1+1968466U);
i32_store16(&i->m0,(U64)si0,si1);
si0=l5;
si1=32U;
si0+=si1;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+1968458U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=24U;
si0+=si1;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+1968450U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=16U;
si0+=si1;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+1968442U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=8U;
si0+=si1;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+1968434U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+1968426U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+88U);
si1=504U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si1=l6;
si1=i32_load(&i->m0,(U64)si1);
l7=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
sj1=180388626474ULL;
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l4;
si1=l5;
i32_store(&i->m0,(U64)si0,si1);
si0=l7;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 == si1;
if(si0){
goto L1;
}
si0=l3;
si1=l6;
si2=l4;
si0=f7173(i,si0,si1,si2);
l8=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+48U);
l9=si0;
si0=l2;
si1=56U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si0=!(si0);
if(si0){
goto L3;
}
si0=l9;
l5=si0;
L4:;
{
si0=l5;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si1=l3;
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
si0=l3;
f7690(i,si0);
L5:;
si0=l5;
si1=4U;
si0+=si1;
l5=si0;
si0=l6;
si1=-1U;
si0+=si1;
l6=si0;
if(si0){
goto L4;
}
}
L3:;
si0=l2;
si1=52U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L6;
}
si0=l9;
f15271(i,si0);
L6:;
si0=l2;
si1=20U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si0=!(si0);
if(si0){
goto L7;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0+16U);
si1=l5;
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
si1=32U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l9=si0;
si0=l2;
si1=40U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si0=!(si0);
if(si0){
goto L8;
}
si0=l9;
l5=si0;
L9:;
{
si0=l5;
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L10;
}
si0=l5;
si0=i32_load(&i->m0,(U64)si0);
f15271(i,si0);
L10:;
si0=l5;
si1=12U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si1=l3;
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
si0=l3;
f7690(i,si0);
L11:;
si0=l5;
si1=20U;
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
L8:;
si0=l2;
si1=36U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L12;
}
si0=l9;
f15271(i,si0);
L12:;
si0=l1;
si1=l1;
si1=i32_load(&i->m0,(U64)si1);
l5=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=1U;
si0=si0 != si1;
if(si0){
goto L13;
}
si0=l1;
f7690(i,si0);
L13:;
si0=l0;
si1=l8;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=1U;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=16U;
si0+=si1;
i->g0=si0;
goto L0;
L2:;
si0=1U;
si1=42U;
f52(i,si0,si1);
UNREACHABLE;
L1:;
f15042(i);
UNREACHABLE;
L0:;
}

U32 f13924(rustpythonInstance*i) {
U32 l0=0;
U32 l1=0;
U32 l2=0;
U32 l3=0;
U32 l4=0;
U64 l5=0;
U64 l6=0;
U64 l7=0;
U64 l8=0;
U32 si0,si1,si2,si3,si4;
U64 sj1,sj2;
si0=i->g0;
si1=688U;
si0-=si1;
l0=si0;
i->g0=si0;
si0=0U;
si0=i32_load(&i->m0,(U64)si0+2969684U);
si1=2U;
si0=si0 != si1;
if(si0){
goto L5;
}
si0=0U;
si0=i32_load(&i->m0,(U64)si0+2969688U);
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
goto L4;
}
si0=2967024U;
si0=f10432(i,si0);
l2=si0;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si1=l2;
si1=i32_load(&i->m0,(U64)si1+4U);
l4=si1;
si1=i32_load(&i->m0,(U64)si1+12U);
si0=TF(i->t0,si1,U32 (*)(rustpythonInstance*,U32))(i,si0);
l2=si0;
si0=l3;
si1=l4;
si1=i32_load(&i->m0,(U64)si1+16U);
si0=TF(i->t0,si1,U32 (*)(rustpythonInstance*,U32))(i,si0);
l3=si0;
si0=l0;
si1=52U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=44U;
si0+=si1;
sj1=17179869184ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=36U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=1862528U;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l0;
si1=l2;
sj1=i64_load(&i->m0,(U64)si1);
l5=sj1;
si2=l3;
sj2=(U64)(si2);
sj1^=sj2;
sj2=6364136223846793005ULL;
sj1*=sj2;
si2=l2;
sj2=i64_load(&i->m0,(U64)si2+8U);
sj1^=sj2;
sj2=8ULL;
sj1=I64_ROTL(sj1,sj2);
sj2=6364136223846793005ULL;
sj1*=sj2;
l6=sj1;
sj2=l5;
sj1^=sj2;
sj2=24ULL;
sj1=I64_ROTL(sj1,sj2);
l5=sj1;
si2=l2;
si3=56U;
si2+=si3;
sj2=i64_load(&i->m0,(U64)si2);
sj1^=sj2;
sj2=6364136223846793005ULL;
sj1*=sj2;
sj2=l6;
sj1^=sj2;
sj2=8ULL;
sj1=I64_ROTL(sj1,sj2);
sj2=6364136223846793005ULL;
sj1*=sj2;
l7=sj1;
sj2=l5;
sj1^=sj2;
sj2=24ULL;
sj1=I64_ROTL(sj1,sj2);
l8=sj1;
sj2=6364136223846793005ULL;
sj1*=sj2;
sj2=l7;
sj1^=sj2;
sj2=l8;
sj1=I64_ROTL(sj1,sj2);
i64_store(&i->m0,(U64)si0+24U,sj1);
si0=l0;
sj1=l5;
si2=l2;
si3=48U;
si2+=si3;
sj2=i64_load(&i->m0,(U64)si2);
sj1^=sj2;
sj2=6364136223846793005ULL;
sj1*=sj2;
sj2=l6;
sj1^=sj2;
sj2=8ULL;
sj1=I64_ROTL(sj1,sj2);
sj2=6364136223846793005ULL;
sj1*=sj2;
l7=sj1;
sj2=l5;
sj1^=sj2;
sj2=24ULL;
sj1=I64_ROTL(sj1,sj2);
l8=sj1;
sj2=6364136223846793005ULL;
sj1*=sj2;
sj2=l7;
sj1^=sj2;
sj2=l8;
sj1=I64_ROTL(sj1,sj2);
i64_store(&i->m0,(U64)si0+16U,sj1);
si0=l0;
sj1=l5;
si2=l2;
si3=40U;
si2+=si3;
sj2=i64_load(&i->m0,(U64)si2);
sj1^=sj2;
sj2=6364136223846793005ULL;
sj1*=sj2;
sj2=l6;
sj1^=sj2;
sj2=8ULL;
sj1=I64_ROTL(sj1,sj2);
sj2=6364136223846793005ULL;
sj1*=sj2;
l7=sj1;
sj2=l5;
sj1^=sj2;
sj2=24ULL;
sj1=I64_ROTL(sj1,sj2);
l8=sj1;
sj2=6364136223846793005ULL;
sj1*=sj2;
sj2=l7;
sj1^=sj2;
sj2=l8;
sj1=I64_ROTL(sj1,sj2);
i64_store(&i->m0,(U64)si0+8U,sj1);
si0=l0;
sj1=l5;
si2=l2;
sj2=i64_load(&i->m0,(U64)si2+32U);
sj1^=sj2;
sj2=6364136223846793005ULL;
sj1*=sj2;
sj2=l6;
sj1^=sj2;
sj2=8ULL;
sj1=I64_ROTL(sj1,sj2);
sj2=6364136223846793005ULL;
sj1*=sj2;
l6=sj1;
sj2=l5;
sj1^=sj2;
sj2=24ULL;
sj1=I64_ROTL(sj1,sj2);
l5=sj1;
sj2=6364136223846793005ULL;
sj1*=sj2;
sj2=l6;
sj1^=sj2;
sj2=l5;
sj1=I64_ROTL(sj1,sj2);
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0+376U,si1);
si0=l0;
sj1=4ULL;
i64_store(&i->m0,(U64)si0+368U,sj1);
si0=l0;
si1=368U;
si0+=si1;
si1=0U;
f7267(i,si0,si1);
si0=l0;
si0=i32_load(&i->m0,(U64)si0+368U);
si1=l0;
si1=i32_load(&i->m0,(U64)si1+376U);
si2=28U;
si1*=si2;
si0+=si1;
l2=si0;
sj1=512ULL;
i64_store(&i->m0,(U64)si0+16U,sj1);
si0=l2;
si1=1818720U;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l2;
sj1=4294967304ULL;
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l2;
si1=1968546U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+376U);
si2=1U;
si1+=si2;
l2=si1;
i32_store(&i->m0,(U64)si0+376U,si1);
si0=l2;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+372U);
si0=si0 != si1;
if(si0){
goto L6;
}
si0=l0;
si1=368U;
si0+=si1;
si1=l2;
f7267(i,si0,si1);
si0=l0;
si0=i32_load(&i->m0,(U64)si0+376U);
l2=si0;
L6:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+368U);
si1=l2;
si2=28U;
si1*=si2;
si0+=si1;
l2=si0;
sj1=512ULL;
i64_store(&i->m0,(U64)si0+16U,sj1);
si0=l2;
si1=1824336U;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l2;
sj1=4294967304ULL;
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l2;
si1=1968507U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+376U);
si2=1U;
si1+=si2;
l2=si1;
i32_store(&i->m0,(U64)si0+376U,si1);
si0=l0;
si0=i32_load(&i->m0,(U64)si0+368U);
l3=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+372U);
si1=l2;
si0=si0 <= si1;
if(si0){
goto L7;
}
si0=l2;
if(si0){
goto L8;
}
si0=l3;
f15271(i,si0);
si0=4U;
l3=si0;
goto L7;
L8:;
si0=l3;
si1=l2;
si2=28U;
si1*=si2;
l4=si1;
si0=f15274(i,si0,si1);
l3=si0;
si0=!(si0);
if(si0){
goto L3;
}
L7:;
si0=l0;
si1=39U;
i32_store(&i->m0,(U64)si0+388U,si1);
si0=l0;
si1=1958185U;
i32_store(&i->m0,(U64)si0+384U,si1);
si0=l0;
si1=36U;
i32_store(&i->m0,(U64)si0+416U,si1);
si0=l0;
si1=384U;
si0+=si1;
si1=36U;
si0+=si1;
si1=0U;
si2=240U;
si0=f15392(i,si0,si1,si2);
si0=l0;
si1=668U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=412U;
si0+=si1;
si1=234U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=396U;
si0+=si1;
si1=l2;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=676U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
sj1=0ULL;
i64_store(&i->m0,(U64)si0+660U,sj1);
si0=l0;
si1=1956323U;
i32_store(&i->m0,(U64)si0+408U,si1);
si0=l0;
sj1=0ULL;
i64_store(&i->m0,(U64)si0+400U,sj1);
si0=l0;
si1=l3;
i32_store(&i->m0,(U64)si0+392U,si1);
si0=l0;
si1=839U;
i32_store(&i->m0,(U64)si0+652U,si1);
si0=l0;
si1=6788U;
i32_store(&i->m0,(U64)si0+656U,si1);
si0=l0;
si1=6789U;
i32_store(&i->m0,(U64)si0+672U,si1);
si0=l0;
si1=64U;
si0+=si1;
si1=l0;
si2=384U;
si1+=si2;
si2=304U;
si0=f15390(i,si0,si1,si2);
si0=0U;
si0=i32_load(&i->m0,(U64)si0+2969692U);
si1=2U;
si0=si0 != si1;
if(si0){
goto L2;
}
si0=0U;
si0=i32_load(&i->m0,(U64)si0+2969696U);
l2=si0;
si1=l2;
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
goto L4;
}
si0=l0;
si1=368U;
si0+=si1;
si1=l1;
si2=l0;
si3=l0;
si4=64U;
si3+=si4;
si4=l2;
f9967(i,si0,si1,si2,si3,si4);
si0=l0;
si0=i32_load(&i->m0,(U64)si0+368U);
si0=!(si0);
if(si0){
goto L1;
}
si0=l0;
si1=384U;
si0+=si1;
si1=8U;
si0+=si1;
si1=l0;
si2=368U;
si1+=si2;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l0;
sj1=i64_load(&i->m0,(U64)si1+368U);
i64_store(&i->m0,(U64)si0+384U,sj1);
si0=1953380U;
si1=43U;
si2=l0;
si3=384U;
si2+=si3;
si3=1953424U;
si4=1953440U;
f712(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L5:;
si0=1837556U;
si1=36U;
si2=1837608U;
f703(i,si0,si1,si2);
UNREACHABLE;
L4:;
f15042(i);
UNREACHABLE;
L3:;
si0=4U;
si1=l4;
f52(i,si0,si1);
UNREACHABLE;
L2:;
si0=1837556U;
si1=36U;
si2=1837608U;
f703(i,si0,si1,si2);
UNREACHABLE;
L1:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+372U);
l2=si0;
si0=l0;
si1=688U;
si0+=si1;
i->g0=si0;
si0=l2;
L0:;
return si0;
}

void f13925(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 si0,si1,si2;
U64 sj0,sj1,sj2;
si0=i->g0;
si1=16U;
si0-=si1;
l3=si0;
i->g0=si0;
si0=l1;
sj0=i64_load(&i->m0,(U64)si0+8U);
sj1=471467743276044712ULL;
sj0^=sj1;
si1=l1;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
sj2=-258488946189640733ULL;
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
f14078(i,si0,si1,si2);
goto L3;
L4:;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=31U;
si0=f15269(i,si0);
l1=si0;
si0=!(si0);
if(si0){
goto L2;
}
si0=l1;
si1=23U;
si0+=si1;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+1968538U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si1=16U;
si0+=si1;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+1968531U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si1=8U;
si0+=si1;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+1968523U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+1968515U);
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
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l3;
si1=l1;
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
si1=l4;
si2=l3;
si0=f7173(i,si0,si1,si2);
l1=si0;
si0=l0;
si1=2U;
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
f15042(i);
UNREACHABLE;
L0:;
}

void f13926(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U32 l5=0;
U32 si0,si1,si2,si3,si4;
si0=i->g0;
si1=16U;
si0-=si1;
l4=si0;
i->g0=si0;
si0=l4;
si1=8U;
si0+=si1;
si1=l2;
si2=l3;
f6258(i,si0,si1,si2);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+12U);
l2=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+8U);
l5=si0;
si0=!(si0);
if(si0){
goto L2;
}
si0=l4;
si1=l1;
si2=l5;
si3=l2;
si4=l3;
f14077(i,si0,si1,si2,si3,si4);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+4U);
l2=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
goto L1;
L2:;
si0=l1;
si1=l1;
si1=i32_load(&i->m0,(U64)si1);
l5=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=1U;
l3=si0;
si0=l5;
si1=1U;
si0=si0 != si1;
if(si0){
goto L1;
}
si0=l1;
f7690(i,si0);
L1:;
si0=l0;
si1=l2;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l3;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=16U;
si0+=si1;
i->g0=si0;
L0:;
}

U32 f13927(rustpythonInstance*i) {
U32 l0=0;
U32 l1=0;
U32 l2=0;
U32 l3=0;
U32 l4=0;
U64 l5=0;
U64 l6=0;
U64 l7=0;
U64 l8=0;
U32 si0,si1,si2,si3,si4;
U64 sj1,sj2;
si0=i->g0;
si1=688U;
si0-=si1;
l0=si0;
i->g0=si0;
si0=0U;
si0=i32_load(&i->m0,(U64)si0+2969684U);
si1=2U;
si0=si0 != si1;
if(si0){
goto L5;
}
si0=0U;
si0=i32_load(&i->m0,(U64)si0+2969688U);
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
goto L4;
}
si0=2967024U;
si0=f10432(i,si0);
l2=si0;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si1=l2;
si1=i32_load(&i->m0,(U64)si1+4U);
l4=si1;
si1=i32_load(&i->m0,(U64)si1+12U);
si0=TF(i->t0,si1,U32 (*)(rustpythonInstance*,U32))(i,si0);
l2=si0;
si0=l3;
si1=l4;
si1=i32_load(&i->m0,(U64)si1+16U);
si0=TF(i->t0,si1,U32 (*)(rustpythonInstance*,U32))(i,si0);
l3=si0;
si0=l0;
si1=52U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=44U;
si0+=si1;
sj1=17179869184ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=36U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=1862528U;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l0;
si1=l2;
sj1=i64_load(&i->m0,(U64)si1);
l5=sj1;
si2=l3;
sj2=(U64)(si2);
sj1^=sj2;
sj2=6364136223846793005ULL;
sj1*=sj2;
si2=l2;
sj2=i64_load(&i->m0,(U64)si2+8U);
sj1^=sj2;
sj2=8ULL;
sj1=I64_ROTL(sj1,sj2);
sj2=6364136223846793005ULL;
sj1*=sj2;
l6=sj1;
sj2=l5;
sj1^=sj2;
sj2=24ULL;
sj1=I64_ROTL(sj1,sj2);
l5=sj1;
si2=l2;
si3=56U;
si2+=si3;
sj2=i64_load(&i->m0,(U64)si2);
sj1^=sj2;
sj2=6364136223846793005ULL;
sj1*=sj2;
sj2=l6;
sj1^=sj2;
sj2=8ULL;
sj1=I64_ROTL(sj1,sj2);
sj2=6364136223846793005ULL;
sj1*=sj2;
l7=sj1;
sj2=l5;
sj1^=sj2;
sj2=24ULL;
sj1=I64_ROTL(sj1,sj2);
l8=sj1;
sj2=6364136223846793005ULL;
sj1*=sj2;
sj2=l7;
sj1^=sj2;
sj2=l8;
sj1=I64_ROTL(sj1,sj2);
i64_store(&i->m0,(U64)si0+24U,sj1);
si0=l0;
sj1=l5;
si2=l2;
si3=48U;
si2+=si3;
sj2=i64_load(&i->m0,(U64)si2);
sj1^=sj2;
sj2=6364136223846793005ULL;
sj1*=sj2;
sj2=l6;
sj1^=sj2;
sj2=8ULL;
sj1=I64_ROTL(sj1,sj2);
sj2=6364136223846793005ULL;
sj1*=sj2;
l7=sj1;
sj2=l5;
sj1^=sj2;
sj2=24ULL;
sj1=I64_ROTL(sj1,sj2);
l8=sj1;
sj2=6364136223846793005ULL;
sj1*=sj2;
sj2=l7;
sj1^=sj2;
sj2=l8;
sj1=I64_ROTL(sj1,sj2);
i64_store(&i->m0,(U64)si0+16U,sj1);
si0=l0;
sj1=l5;
si2=l2;
si3=40U;
si2+=si3;
sj2=i64_load(&i->m0,(U64)si2);
sj1^=sj2;
sj2=6364136223846793005ULL;
sj1*=sj2;
sj2=l6;
sj1^=sj2;
sj2=8ULL;
sj1=I64_ROTL(sj1,sj2);
sj2=6364136223846793005ULL;
sj1*=sj2;
l7=sj1;
sj2=l5;
sj1^=sj2;
sj2=24ULL;
sj1=I64_ROTL(sj1,sj2);
l8=sj1;
sj2=6364136223846793005ULL;
sj1*=sj2;
sj2=l7;
sj1^=sj2;
sj2=l8;
sj1=I64_ROTL(sj1,sj2);
i64_store(&i->m0,(U64)si0+8U,sj1);
si0=l0;
sj1=l5;
si2=l2;
sj2=i64_load(&i->m0,(U64)si2+32U);
sj1^=sj2;
sj2=6364136223846793005ULL;
sj1*=sj2;
sj2=l6;
sj1^=sj2;
sj2=8ULL;
sj1=I64_ROTL(sj1,sj2);
sj2=6364136223846793005ULL;
sj1*=sj2;
l6=sj1;
sj2=l5;
sj1^=sj2;
sj2=24ULL;
sj1=I64_ROTL(sj1,sj2);
l5=sj1;
sj2=6364136223846793005ULL;
sj1*=sj2;
sj2=l6;
sj1^=sj2;
sj2=l5;
sj1=I64_ROTL(sj1,sj2);
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0+376U,si1);
si0=l0;
sj1=4ULL;
i64_store(&i->m0,(U64)si0+368U,sj1);
si0=l0;
si1=368U;
si0+=si1;
si1=0U;
f7267(i,si0,si1);
si0=l0;
si0=i32_load(&i->m0,(U64)si0+368U);
si1=l0;
si1=i32_load(&i->m0,(U64)si1+376U);
si2=28U;
si1*=si2;
si0+=si1;
l2=si0;
sj1=512ULL;
i64_store(&i->m0,(U64)si0+16U,sj1);
si0=l2;
si1=1818624U;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l2;
sj1=4294967304ULL;
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l2;
si1=1968546U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+376U);
si2=1U;
si1+=si2;
l2=si1;
i32_store(&i->m0,(U64)si0+376U,si1);
si0=l2;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+372U);
si0=si0 != si1;
if(si0){
goto L6;
}
si0=l0;
si1=368U;
si0+=si1;
si1=l2;
f7267(i,si0,si1);
si0=l0;
si0=i32_load(&i->m0,(U64)si0+376U);
l2=si0;
L6:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+368U);
si1=l2;
si2=28U;
si1*=si2;
si0+=si1;
l2=si0;
sj1=512ULL;
i64_store(&i->m0,(U64)si0+16U,sj1);
si0=l2;
si1=1817304U;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l2;
sj1=4294967304ULL;
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l2;
si1=1968507U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+376U);
si2=1U;
si1+=si2;
l2=si1;
i32_store(&i->m0,(U64)si0+376U,si1);
si0=l0;
si0=i32_load(&i->m0,(U64)si0+368U);
l3=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+372U);
si1=l2;
si0=si0 <= si1;
if(si0){
goto L7;
}
si0=l2;
if(si0){
goto L8;
}
si0=l3;
f15271(i,si0);
si0=4U;
l3=si0;
goto L7;
L8:;
si0=l3;
si1=l2;
si2=28U;
si1*=si2;
l4=si1;
si0=f15274(i,si0,si1);
l3=si0;
si0=!(si0);
if(si0){
goto L3;
}
L7:;
si0=l0;
si1=17U;
i32_store(&i->m0,(U64)si0+388U,si1);
si0=l0;
si1=1957914U;
i32_store(&i->m0,(U64)si0+384U,si1);
si0=l0;
si1=28U;
i32_store(&i->m0,(U64)si0+416U,si1);
si0=l0;
si1=384U;
si0+=si1;
si1=36U;
si0+=si1;
si1=0U;
si2=240U;
si0=f15392(i,si0,si1,si2);
si0=l0;
si1=668U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=384U;
si0+=si1;
si1=28U;
si0+=si1;
si1=323U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=396U;
si0+=si1;
si1=l2;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=676U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
sj1=0ULL;
i64_store(&i->m0,(U64)si0+660U,sj1);
si0=l0;
si1=1957514U;
i32_store(&i->m0,(U64)si0+408U,si1);
si0=l0;
sj1=0ULL;
i64_store(&i->m0,(U64)si0+400U,sj1);
si0=l0;
si1=l3;
i32_store(&i->m0,(U64)si0+392U,si1);
si0=l0;
si1=839U;
i32_store(&i->m0,(U64)si0+652U,si1);
si0=l0;
si1=6790U;
i32_store(&i->m0,(U64)si0+656U,si1);
si0=l0;
si1=6791U;
i32_store(&i->m0,(U64)si0+672U,si1);
si0=l0;
si1=64U;
si0+=si1;
si1=l0;
si2=384U;
si1+=si2;
si2=304U;
si0=f15390(i,si0,si1,si2);
si0=0U;
si0=i32_load(&i->m0,(U64)si0+2969692U);
si1=2U;
si0=si0 != si1;
if(si0){
goto L2;
}
si0=0U;
si0=i32_load(&i->m0,(U64)si0+2969696U);
l2=si0;
si1=l2;
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
goto L4;
}
si0=l0;
si1=368U;
si0+=si1;
si1=l1;
si2=l0;
si3=l0;
si4=64U;
si3+=si4;
si4=l2;
f9967(i,si0,si1,si2,si3,si4);
si0=l0;
si0=i32_load(&i->m0,(U64)si0+368U);
si0=!(si0);
if(si0){
goto L1;
}
si0=l0;
si1=384U;
si0+=si1;
si1=8U;
si0+=si1;
si1=l0;
si2=368U;
si1+=si2;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l0;
sj1=i64_load(&i->m0,(U64)si1+368U);
i64_store(&i->m0,(U64)si0+384U,sj1);
si0=1953380U;
si1=43U;
si2=l0;
si3=384U;
si2+=si3;
si3=1953424U;
si4=1953440U;
f712(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L5:;
si0=1837556U;
si1=36U;
si2=1837608U;
f703(i,si0,si1,si2);
UNREACHABLE;
L4:;
f15042(i);
UNREACHABLE;
L3:;
si0=4U;
si1=l4;
f52(i,si0,si1);
UNREACHABLE;
L2:;
si0=1837556U;
si1=36U;
si2=1837608U;
f703(i,si0,si1,si2);
UNREACHABLE;
L1:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+372U);
l2=si0;
si0=l0;
si1=688U;
si0+=si1;
i->g0=si0;
si0=l2;
L0:;
return si0;
}

void f13928(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 si0,si1,si2;
U64 sj0,sj1,sj2;
si0=i->g0;
si1=16U;
si0-=si1;
l3=si0;
i->g0=si0;
si0=l1;
sj0=i64_load(&i->m0,(U64)si0+8U);
sj1=-9151968658207135397ULL;
sj0^=sj1;
si1=l1;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
sj2=5667480115245674966ULL;
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
f14062(i,si0,si1,si2);
goto L3;
L4:;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=31U;
si0=f15269(i,si0);
l1=si0;
si0=!(si0);
if(si0){
goto L2;
}
si0=l1;
si1=23U;
si0+=si1;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+1968538U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si1=16U;
si0+=si1;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+1968531U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si1=8U;
si0+=si1;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+1968523U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+1968515U);
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
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l3;
si1=l1;
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
si1=l4;
si2=l3;
si0=f7173(i,si0,si1,si2);
l1=si0;
si0=l0;
si1=2U;
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
f15042(i);
UNREACHABLE;
L0:;
}

void f13929(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U32 l5=0;
U32 si0,si1,si2,si3;
si0=i->g0;
si1=48U;
si0-=si1;
l4=si0;
i->g0=si0;
si0=l4;
si1=16U;
si0+=si1;
si1=l2;
si2=l3;
f5916(i,si0,si1,si2);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+20U);
l2=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+16U);
l5=si0;
si1=2U;
si0=si0 == si1;
if(si0){
goto L2;
}
si0=l4;
si1=l4;
si1=i32_load(&i->m0,(U64)si1+24U);
i32_store(&i->m0,(U64)si0+40U,si1);
si0=l4;
si1=l2;
i32_store(&i->m0,(U64)si0+36U,si1);
si0=l4;
si1=l5;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l4;
si1=8U;
si0+=si1;
si1=l1;
si2=l4;
si3=32U;
si2+=si3;
si3=l3;
f14061(i,si0,si1,si2,si3);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+12U);
l2=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+8U);
l3=si0;
goto L1;
L2:;
si0=l1;
si1=l1;
si1=i32_load(&i->m0,(U64)si1);
l5=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=1U;
l3=si0;
si0=l5;
si1=1U;
si0=si0 != si1;
if(si0){
goto L1;
}
si0=l1;
f7690(i,si0);
L1:;
si0=l0;
si1=l2;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l3;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=48U;
si0+=si1;
i->g0=si0;
L0:;
}

